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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000c7e2 };

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
0x1888,	// (0x0000e06a) Screen

0x1894,	// (0x0000e076) application_window

0x18d0,	// (0x0000e0b2) area_bottom_pane_ParamLimits

0x18d0,	// (0x0000e0b2) area_bottom_pane

0x1909,	// (0x0000e0eb) area_top_pane_ParamLimits

0x1909,	// (0x0000e0eb) area_top_pane

0x9a10,	// (0x000161f2) call_video_uplink_pane_ParamLimits

0x9a10,	// (0x000161f2) call_video_uplink_pane

0x1983,	// (0x0000e165) main_pane_ParamLimits

0x1983,	// (0x0000e165) main_pane

0xc436,	// (0x00018c18) context_pane

0x480c,	// (0x00010fee) navi_pane

0x4834,	// (0x00011016) popup_cale_events_window_ParamLimits

0x4834,	// (0x00011016) popup_cale_events_window

0xc449,	// (0x00018c2b) popup_mup_playback_window

0x484c,	// (0x0001102e) signal_pane

0xa1d9,	// (0x000169bb) main_browser_pane

0xaf52,	// (0x00017734) main_burst_pane

0x456c,	// (0x00010d4e) main_calc_pane

0xaf52,	// (0x00017734) main_cale_day_pane

0xa1d9,	// (0x000169bb) main_cale_month_pane

0xaf52,	// (0x00017734) main_cale_week_pane

0xaf52,	// (0x00017734) main_call_pane

0x9e4d,	// (0x0001662f) main_call_poc_pane

0xaf52,	// (0x00017734) main_camera_pane

0xaf52,	// (0x00017734) main_chi_dic_pane

0xade1,	// (0x000175c3) main_clock_pane

0x9e4d,	// (0x0001662f) main_fmradio_pane

0xaf52,	// (0x00017734) main_graph_messa_pane

0x9e4d,	// (0x0001662f) main_help_pane

0xa1d9,	// (0x000169bb) main_im_pane

0xa0a8,	// (0x0001688a) main_image_pane_ParamLimits

0xa0a8,	// (0x0001688a) main_image_pane

0x9e4d,	// (0x0001662f) main_location2_pane

0xaf52,	// (0x00017734) main_location_pane

0x9e4d,	// (0x0001662f) main_messa_pane

0x9e4d,	// (0x0001662f) main_mp2_pane

0xaf52,	// (0x00017734) main_mp_pane

0x9e4d,	// (0x0001662f) main_msg_pane

0x9e4d,	// (0x0001662f) main_mup_eq_pane

0x9e4d,	// (0x0001662f) main_mup_pane

0xaf52,	// (0x00017734) main_notes_pane

0x9e4d,	// (0x0001662f) main_pec_pane

0x9e4d,	// (0x0001662f) main_phob_pane

0x9e4d,	// (0x0001662f) main_pinb_pane

0x9e4d,	// (0x0001662f) main_postcard_pane

0x9e4d,	// (0x0001662f) main_qdial_pane

0xaf52,	// (0x00017734) main_skin_pane

0x9e4d,	// (0x0001662f) main_smil2_pane

0xaf52,	// (0x00017734) main_smil_pane

0xaf52,	// (0x00017734) main_video_pane

0xaf52,	// (0x00017734) main_video_tele_pane

0xa0a8,	// (0x0001688a) main_viewer_pane_ParamLimits

0xa0a8,	// (0x0001688a) main_viewer_pane

0xaf52,	// (0x00017734) main_vorec_pane

0x45c0,	// (0x00010da2) popup_blid_sat_info_window_ParamLimits

0x45c0,	// (0x00010da2) popup_blid_sat_info_window

0x4618,	// (0x00010dfa) popup_dyc_status_message_window_ParamLimits

0x4618,	// (0x00010dfa) popup_dyc_status_message_window

0x4630,	// (0x00010e12) popup_grid_large_graphic_window_ParamLimits

0x4630,	// (0x00010e12) popup_grid_large_graphic_window

0x46e6,	// (0x00010ec8) popup_loc_request_window_ParamLimits

0x46e6,	// (0x00010ec8) popup_loc_request_window

0x47e4,	// (0x00010fc6) popup_wml_address_window_ParamLimits

0x47e4,	// (0x00010fc6) popup_wml_address_window

0x43a6,	// (0x00010b88) call_muted_g1

0x4056,	// (0x00010838) popup_call_audio_conf_window_ParamLimits

0x4056,	// (0x00010838) popup_call_audio_conf_window

0x43ba,	// (0x00010b9c) popup_call_audio_first_window_ParamLimits

0x43ba,	// (0x00010b9c) popup_call_audio_first_window

0x4430,	// (0x00010c12) popup_call_audio_in_window_ParamLimits

0x4430,	// (0x00010c12) popup_call_audio_in_window

0x446c,	// (0x00010c4e) popup_call_audio_out_window_ParamLimits

0x446c,	// (0x00010c4e) popup_call_audio_out_window

0x44a6,	// (0x00010c88) popup_call_audio_second_window_ParamLimits

0x44a6,	// (0x00010c88) popup_call_audio_second_window

0x44fc,	// (0x00010cde) popup_call_audio_wait_window_ParamLimits

0x44fc,	// (0x00010cde) popup_call_audio_wait_window

0x4531,	// (0x00010d13) popup_number_entry_window_ParamLimits

0x4531,	// (0x00010d13) popup_number_entry_window

0x9a3c,	// (0x0001621e) bg_popup_call_pane_cp05_ParamLimits

0x9a3c,	// (0x0001621e) bg_popup_call_pane_cp05

0x9a5c,	// (0x0001623e) popup_number_entry_window_t1

0x9a6f,	// (0x00016251) popup_number_entry_window_t2

0x9a81,	// (0x00016263) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0001b911) popup_number_entry_window_t

0x9a93,	// (0x00016275) text_title_cp2

0x9aa6,	// (0x00016288) bg_popup_call_pane_cp_ParamLimits

0x9aa6,	// (0x00016288) bg_popup_call_pane_cp

0x9ab4,	// (0x00016296) call_thumbnail_pane

0x9abc,	// (0x0001629e) popup_call_audio_in_window_g1_ParamLimits

0x9abc,	// (0x0001629e) popup_call_audio_in_window_g1

0x9ac8,	// (0x000162aa) popup_call_audio_in_window_g2_ParamLimits

0x9ac8,	// (0x000162aa) popup_call_audio_in_window_g2

0x9ad4,	// (0x000162b6) popup_call_audio_in_window_g3_ParamLimits

0x9ad4,	// (0x000162b6) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0001b91a) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0001b91a) popup_call_audio_in_window_g

0x9ae0,	// (0x000162c2) popup_call_audio_in_window_t1_ParamLimits

0x9ae0,	// (0x000162c2) popup_call_audio_in_window_t1

0x9afb,	// (0x000162dd) popup_call_audio_in_window_t2_ParamLimits

0x9afb,	// (0x000162dd) popup_call_audio_in_window_t2

0x9b16,	// (0x000162f8) popup_call_audio_in_window_t3_ParamLimits

0x9b16,	// (0x000162f8) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0001b921) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0001b921) popup_call_audio_in_window_t

0x9aa6,	// (0x00016288) bg_popup_call_pane_cp01_ParamLimits

0x9aa6,	// (0x00016288) bg_popup_call_pane_cp01

0x9ab4,	// (0x00016296) call_thumbnail_pane_cp02

0x9b29,	// (0x0001630b) call_type_pane_cp022

0x9b31,	// (0x00016313) popup_call_audio_out_window_g1_ParamLimits

0x9b31,	// (0x00016313) popup_call_audio_out_window_g1

0x9b43,	// (0x00016325) popup_call_audio_out_window_g2_ParamLimits

0x9b43,	// (0x00016325) popup_call_audio_out_window_g2

0x9b4f,	// (0x00016331) popup_call_audio_out_window_g3_ParamLimits

0x9b4f,	// (0x00016331) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0001b928) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0001b928) popup_call_audio_out_window_g

0x9b61,	// (0x00016343) popup_call_audio_out_window_t1_ParamLimits

0x9b61,	// (0x00016343) popup_call_audio_out_window_t1

0x9b79,	// (0x0001635b) popup_call_audio_out_window_t2_ParamLimits

0x9b79,	// (0x0001635b) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0001b92f) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0001b92f) popup_call_audio_out_window_t

0x9b8e,	// (0x00016370) bg_popup_call_pane_ParamLimits

0x9b8e,	// (0x00016370) bg_popup_call_pane

0x1b33,	// (0x0000e315) call_thumbnail_pane_cp_ParamLimits

0x1b33,	// (0x0000e315) call_thumbnail_pane_cp

0x9c12,	// (0x000163f4) call_type_pane_cp01_ParamLimits

0x9c12,	// (0x000163f4) call_type_pane_cp01

0x9c56,	// (0x00016438) popup_call_audio_first_window_g1_ParamLimits

0x9c56,	// (0x00016438) popup_call_audio_first_window_g1

0x9ca2,	// (0x00016484) popup_call_audio_first_window_g2_ParamLimits

0x9ca2,	// (0x00016484) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0001b934) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0001b934) popup_call_audio_first_window_g

0x9ce6,	// (0x000164c8) popup_call_audio_first_window_t1_ParamLimits

0x9ce6,	// (0x000164c8) popup_call_audio_first_window_t1

0x9d92,	// (0x00016574) popup_call_audio_first_window_t4_ParamLimits

0x9d92,	// (0x00016574) popup_call_audio_first_window_t4

0x9e1e,	// (0x00016600) popup_call_audio_first_window_t5_ParamLimits

0x9e1e,	// (0x00016600) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0001b939) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0001b939) popup_call_audio_first_window_t

0x9e4d,	// (0x0001662f) bg_popup_call_pane_cp02

0x9e57,	// (0x00016639) call_type_pane_cp023

0x9e5f,	// (0x00016641) popup_call_audio_wait_window_g1

0x9e67,	// (0x00016649) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001b940) popup_call_audio_wait_window_g

0x9e6f,	// (0x00016651) popup_call_audio_wait_window_t3

0x9e7d,	// (0x0001665f) bg_popup_call_pane_cp03_ParamLimits

0x9e7d,	// (0x0001665f) bg_popup_call_pane_cp03

0x9edd,	// (0x000166bf) call_thumbnail_pane_cp011_ParamLimits

0x9edd,	// (0x000166bf) call_thumbnail_pane_cp011

0x9ee9,	// (0x000166cb) call_type_pane_cp034_ParamLimits

0x9ee9,	// (0x000166cb) call_type_pane_cp034

0x9f25,	// (0x00016707) popup_call_audio_second_window_g1_ParamLimits

0x9f25,	// (0x00016707) popup_call_audio_second_window_g1

0x9f61,	// (0x00016743) popup_call_audio_second_window_g2_ParamLimits

0x9f61,	// (0x00016743) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0001b945) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0001b945) popup_call_audio_second_window_g

0x9f9d,	// (0x0001677f) popup_call_audio_second_window_t1_ParamLimits

0x9f9d,	// (0x0001677f) popup_call_audio_second_window_t1

0xa01e,	// (0x00016800) popup_call_audio_second_window_t2_ParamLimits

0xa01e,	// (0x00016800) popup_call_audio_second_window_t2

0xa054,	// (0x00016836) popup_call_audio_second_window_t3_ParamLimits

0xa054,	// (0x00016836) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0001b94a) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0001b94a) popup_call_audio_second_window_t

0x9e4d,	// (0x0001662f) bg_popup_call_pane_cp04

0xa08a,	// (0x0001686c) list_conf_pane

0xa092,	// (0x00016874) popup_call_audio_conf_window_t1

0xa0a0,	// (0x00016882) call_thumbnail_pane_g1

0xa0a8,	// (0x0001688a) bg_pinb_pane_ParamLimits

0xa0a8,	// (0x0001688a) bg_pinb_pane

0xa0b6,	// (0x00016898) find_pinb_pane

0xa0bf,	// (0x000168a1) listscroll_pinb_pane_ParamLimits

0xa0bf,	// (0x000168a1) listscroll_pinb_pane

0xa0ce,	// (0x000168b0) pinb_bg_pane_g1

0x1b57,	// (0x0000e339) pinb_bg_pane_g2

0x1b63,	// (0x0000e345) pinb_bg_pane_g3

0x1b6f,	// (0x0000e351) pinb_bg_pane_g4

0x1b7b,	// (0x0000e35d) pinb_bg_pane_g5

0x1b87,	// (0x0000e369) pinb_bg_pane_g6

0x1b92,	// (0x0000e374) pinb_bg_pane_g7

0x1b9d,	// (0x0000e37f) pinb_bg_pane_g8

0x1ba8,	// (0x0000e38a) pinb_bg_pane_g9

0x1bb2,	// (0x0000e394) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0001b951) pinb_bg_pane_g

0x1bc7,	// (0x0000e3a9) grid_pinb_pane

0x1bd0,	// (0x0000e3b2) list_pinb_pane

0x1bd9,	// (0x0000e3bb) scroll_pane_cp01_ParamLimits

0x1bd9,	// (0x0000e3bb) scroll_pane_cp01

0xa0e0,	// (0x000168c2) find_pinb_pane_g1_ParamLimits

0xa0e0,	// (0x000168c2) find_pinb_pane_g1

0xa0f8,	// (0x000168da) find_pinb_pane_t1

0xa10a,	// (0x000168ec) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0001b96b) find_pinb_pane_t

0xa11f,	// (0x00016901) input_focus_pane_cp01_ParamLimits

0xa11f,	// (0x00016901) input_focus_pane_cp01

0x1beb,	// (0x0000e3cd) cell_pinb_pane_ParamLimits

0x1beb,	// (0x0000e3cd) cell_pinb_pane

0x1c1d,	// (0x0000e3ff) cell_pinb_pane_g1_ParamLimits

0x1c1d,	// (0x0000e3ff) cell_pinb_pane_g1

0x1c2d,	// (0x0000e40f) cell_pinb_pane_g2_ParamLimits

0x1c2d,	// (0x0000e40f) cell_pinb_pane_g2

0xa12b,	// (0x0001690d) cell_pinb_pane_g3_ParamLimits

0xa12b,	// (0x0001690d) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0001b970) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0001b970) cell_pinb_pane_g

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp01

0x1c39,	// (0x0000e41b) list_pinb_item_pane_ParamLimits

0x1c39,	// (0x0000e41b) list_pinb_item_pane

0x9e4d,	// (0x0001662f) list_highlight_pane_cp02

0xa137,	// (0x00016919) list_pinb_item_pane_g1_ParamLimits

0xa137,	// (0x00016919) list_pinb_item_pane_g1

0xa144,	// (0x00016926) list_pinb_item_pane_g2_ParamLimits

0xa144,	// (0x00016926) list_pinb_item_pane_g2

0x1c4d,	// (0x0000e42f) list_pinb_item_pane_g3_ParamLimits

0x1c4d,	// (0x0000e42f) list_pinb_item_pane_g3

0xa150,	// (0x00016932) list_pinb_item_pane_g4_ParamLimits

0xa150,	// (0x00016932) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0001b977) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0001b977) list_pinb_item_pane_g

0xa15c,	// (0x0001693e) list_pinb_item_pane_t1_ParamLimits

0xa15c,	// (0x0001693e) list_pinb_item_pane_t1

0x1c7c,	// (0x0000e45e) calc_display_pane

0x1ca2,	// (0x0000e484) calc_paper_pane

0x1cc5,	// (0x0000e4a7) grid_calc_pane

0x9e4d,	// (0x0001662f) bg_list_pane_cp01

0x1cf1,	// (0x0000e4d3) clock_g1

0x1cf9,	// (0x0000e4db) clock_g2

0x0001,

0xf19e,	// (0x0001b980) clock_g

0x1d01,	// (0x0000e4e3) clock_t1_ParamLimits

0x1d01,	// (0x0000e4e3) clock_t1

0x1d16,	// (0x0000e4f8) clock_t2_ParamLimits

0x1d16,	// (0x0000e4f8) clock_t2

0x1d28,	// (0x0000e50a) clock_t3_ParamLimits

0x1d28,	// (0x0000e50a) clock_t3

0x1d3a,	// (0x0000e51c) clock_t4_ParamLimits

0x1d3a,	// (0x0000e51c) clock_t4

0x1d4c,	// (0x0000e52e) clock_t5_ParamLimits

0x1d4c,	// (0x0000e52e) clock_t5

0x1d61,	// (0x0000e543) clock_t6_ParamLimits

0x1d61,	// (0x0000e543) clock_t6

0x1d73,	// (0x0000e555) clock_t7_ParamLimits

0x1d73,	// (0x0000e555) clock_t7

0x1d85,	// (0x0000e567) clock_t8_ParamLimits

0x1d85,	// (0x0000e567) clock_t8

0x1d99,	// (0x0000e57b) clock_t9_ParamLimits

0x1d99,	// (0x0000e57b) clock_t9

0x0008,

0xf1a3,	// (0x0001b985) clock_t_ParamLimits

0xf1a3,	// (0x0001b985) clock_t

0xa17b,	// (0x0001695d) popup_clock_analogue_window_cp02

0xa17b,	// (0x0001695d) popup_clock_digital_window_cp01

0xa183,	// (0x00016965) listscroll_help_pane

0x9e4d,	// (0x0001662f) phob_pre_status_pane

0xa18d,	// (0x0001696f) grid_qdial_pane

0x9e4d,	// (0x0001662f) listscroll_mce_pane

0xa197,	// (0x00016979) bg_notes_pane

0xa1a1,	// (0x00016983) list_notes_pane

0x1dad,	// (0x0000e58f) scroll_pane_cp06

0xa1ab,	// (0x0001698d) bg_calc_paper_pane

0xa1bf,	// (0x000169a1) list_calc_pane

0xa1d9,	// (0x000169bb) bg_calc_display_pane

0x1db8,	// (0x0000e59a) calc_display_pane_t1

0x1dca,	// (0x0000e5ac) calc_display_pane_t2

0xa1e5,	// (0x000169c7) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0001b998) calc_display_pane_t

0x1ddc,	// (0x0000e5be) cell_calc_pane_ParamLimits

0x1ddc,	// (0x0000e5be) cell_calc_pane

0xa1f7,	// (0x000169d9) bg_calc_paper_pane_g1

0xa203,	// (0x000169e5) bg_calc_paper_pane_g2

0xa20f,	// (0x000169f1) bg_calc_paper_pane_g3

0xa21b,	// (0x000169fd) bg_calc_paper_pane_g4

0xa227,	// (0x00016a09) bg_calc_paper_pane_g5

0x1e11,	// (0x0000e5f3) bg_calc_paper_pane_g6

0x1e20,	// (0x0000e602) bg_calc_paper_pane_g7

0x1e2f,	// (0x0000e611) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0001b99f) bg_calc_paper_pane_g

0x1e42,	// (0x0000e624) calc_bg_paper_pane_g9

0x1e55,	// (0x0000e637) list_calc_item_pane_ParamLimits

0x1e55,	// (0x0000e637) list_calc_item_pane

0xa233,	// (0x00016a15) list_calc_item_pane_g1

0xa240,	// (0x00016a22) list_calc_item_pane_t1_ParamLimits

0xa240,	// (0x00016a22) list_calc_item_pane_t1

0x1e6b,	// (0x0000e64d) list_calc_item_pane_t2_ParamLimits

0x1e6b,	// (0x0000e64d) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0001b9b0) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0001b9b0) list_calc_item_pane_t

0xa252,	// (0x00016a34) cell_calc_pane_g1

0xa25c,	// (0x00016a3e) grid_highlight_pane_cp02

0xa27e,	// (0x00016a60) bg_calc_display_pane_g1

0xa287,	// (0x00016a69) bg_calc_display_pane_g2

0xa291,	// (0x00016a73) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0001b9ba) bg_calc_display_pane_g

0x1e9f,	// (0x0000e681) cell_qdial_pane_ParamLimits

0x1e9f,	// (0x0000e681) cell_qdial_pane

0x1eb3,	// (0x0000e695) cell_qdial_pane_g1_ParamLimits

0x1eb3,	// (0x0000e695) cell_qdial_pane_g1

0x1ec9,	// (0x0000e6ab) cell_qdial_pane_g2_ParamLimits

0x1ec9,	// (0x0000e6ab) cell_qdial_pane_g2

0xa29a,	// (0x00016a7c) cell_qdial_pane_g3_ParamLimits

0xa29a,	// (0x00016a7c) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0001b9c1) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0001b9c1) cell_qdial_pane_g

0x1ef0,	// (0x0000e6d2) cell_qdial_pane_t1_ParamLimits

0x1ef0,	// (0x0000e6d2) cell_qdial_pane_t1

0x1f08,	// (0x0000e6ea) cell_qdial_pane_t2_ParamLimits

0x1f08,	// (0x0000e6ea) cell_qdial_pane_t2

0x1f1b,	// (0x0000e6fd) cell_qdial_pane_t3_ParamLimits

0x1f1b,	// (0x0000e6fd) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0001b9ca) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0001b9ca) cell_qdial_pane_t

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp04

0xa2a6,	// (0x00016a88) thumbnail_qdial_pane_ParamLimits

0xa2a6,	// (0x00016a88) thumbnail_qdial_pane

0xa302,	// (0x00016ae4) list_help_pane

0xa30b,	// (0x00016aed) scroll_pane_cp02

0x1f2e,	// (0x0000e710) help_list_pane_t1_ParamLimits

0x1f2e,	// (0x0000e710) help_list_pane_t1

0xa314,	// (0x00016af6) bg_notes_pane_g2

0xa31c,	// (0x00016afe) bg_notes_pane_g3

0xa324,	// (0x00016b06) notes_bg_pane_g1

0xa32c,	// (0x00016b0e) notes_bg_pane_g4

0xa334,	// (0x00016b16) notes_bg_pane_g5

0xa33c,	// (0x00016b1e) notes_bg_pane_g6

0xa344,	// (0x00016b26) notes_bg_pane_g7

0xa34c,	// (0x00016b2e) notes_bg_pane_g8

0xa354,	// (0x00016b36) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0001b9e8) notes_bg_pane_g

0xcc56,	// (0x00019438) list_notes_text_pane_ParamLimits

0xcc56,	// (0x00019438) list_notes_text_pane

0xa35c,	// (0x00016b3e) list_notes_text_pane_g1

0xa365,	// (0x00016b47) list_notes_text_pane_t1

0xa1d9,	// (0x000169bb) listscroll_cale_week_pane

0x1f6b,	// (0x0000e74d) bg_cale_heading_pane

0xa384,	// (0x00016b66) bg_cale_pane_cp01

0x1f83,	// (0x0000e765) cale_week_corner_pane

0x1f94,	// (0x0000e776) cale_week_day_heading_pane

0x1fac,	// (0x0000e78e) cale_week_scroll_pane_g1

0x1fc1,	// (0x0000e7a3) cale_week_scroll_pane_g2

0x1fd2,	// (0x0000e7b4) cale_week_scroll_pane_g3

0x1fe3,	// (0x0000e7c5) cale_week_scroll_pane_g4

0x1ff4,	// (0x0000e7d6) cale_week_scroll_pane_g5

0x2005,	// (0x0000e7e7) cale_week_scroll_pane_g6

0x2016,	// (0x0000e7f8) cale_week_scroll_pane_g7

0x2027,	// (0x0000e809) cale_week_scroll_pane_g8

0x2038,	// (0x0000e81a) cale_week_scroll_pane_g9

0x2049,	// (0x0000e82b) cale_week_scroll_pane_g10

0x205a,	// (0x0000e83c) cale_week_scroll_pane_g11

0x206b,	// (0x0000e84d) cale_week_scroll_pane_g12

0x207c,	// (0x0000e85e) cale_week_scroll_pane_g13

0x208d,	// (0x0000e86f) cale_week_scroll_pane_g14

0x209e,	// (0x0000e880) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0001b9f7) cale_week_scroll_pane_g

0x20af,	// (0x0000e891) cale_week_time_pane

0x20c0,	// (0x0000e8a2) grid_cale_week_pane

0x20d3,	// (0x0000e8b5) scroll_pane_cp08

0x20ed,	// (0x0000e8cf) cell_cale_week_pane_ParamLimits

0x20ed,	// (0x0000e8cf) cell_cale_week_pane

0x2129,	// (0x0000e90b) cale_week_day_heading_pane_t1

0x213d,	// (0x0000e91f) cale_week_day_heading_pane_t2

0x2151,	// (0x0000e933) cale_week_day_heading_pane_t3

0x2165,	// (0x0000e947) cale_week_day_heading_pane_t4

0x2179,	// (0x0000e95b) cale_week_day_heading_pane_t5

0x218d,	// (0x0000e96f) cale_week_day_heading_pane_t6

0x21a1,	// (0x0000e983) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0001ba16) cale_week_day_heading_pane_t

0xa3af,	// (0x00016b91) bg_cale_side_pane

0x21b5,	// (0x0000e997) cale_week_time_pane_t1

0x21cd,	// (0x0000e9af) cale_week_time_pane_t2

0x21e5,	// (0x0000e9c7) cale_week_time_pane_t3

0x21fd,	// (0x0000e9df) cale_week_time_pane_t4

0x2215,	// (0x0000e9f7) cale_week_time_pane_t5

0x222d,	// (0x0000ea0f) cale_week_time_pane_t6

0x2245,	// (0x0000ea27) cale_week_time_pane_t7

0x225d,	// (0x0000ea3f) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0001ba25) cale_week_time_pane_t

0x2275,	// (0x0000ea57) cell_cale_week_pane_g2

0x2291,	// (0x0000ea73) cell_cale_week_pane_g3_ParamLimits

0x2291,	// (0x0000ea73) cell_cale_week_pane_g3

0xa3bd,	// (0x00016b9f) grid_highlight_pane_cp07

0xa3c5,	// (0x00016ba7) listscroll_gms_pane

0xa3cf,	// (0x00016bb1) grid_gms_pane

0xa3d8,	// (0x00016bba) listscroll_gms_pane_g1

0xa3e0,	// (0x00016bc2) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0001ba36) listscroll_gms_pane_g

0x22a9,	// (0x0000ea8b) scroll_pane_cp010

0x22b4,	// (0x0000ea96) cell_gms_pane_ParamLimits

0x22b4,	// (0x0000ea96) cell_gms_pane

0x22c7,	// (0x0000eaa9) cell_gms_pane_g1

0xa3e8,	// (0x00016bca) cell_gms_pane_g2

0xa35c,	// (0x00016b3e) cell_gms_pane_g3

0xa3f0,	// (0x00016bd2) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0001ba3b) cell_gms_pane_g

0xa3f9,	// (0x00016bdb) grid_highlight_pane_cp09

0x434e,	// (0x00010b30) phob_pre_status_pane_g1

0x4356,	// (0x00010b38) phob_pre_status_pane_g2

0x435e,	// (0x00010b40) phob_pre_status_pane_g3

0x4366,	// (0x00010b48) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0001be2a) phob_pre_status_pane_g

0x4378,	// (0x00010b5a) phob_pre_status_pane_t1

0x4386,	// (0x00010b68) phob_pre_status_pane_t2

0x4396,	// (0x00010b78) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0001be35) phob_pre_status_pane_t

0x9e4d,	// (0x0001662f) bg_list_pane_cp05

0xa409,	// (0x00016beb) grid_vorec_pane

0xa411,	// (0x00016bf3) vorec_t1

0xa41f,	// (0x00016c01) vorec_t2

0xa42d,	// (0x00016c0f) vorec_t3

0xa43b,	// (0x00016c1d) vorec_t4

0xa449,	// (0x00016c2b) vorec_t5

0xa457,	// (0x00016c39) vorec_t6

0x0006,

0xf262,	// (0x0001ba44) vorec_t

0xa473,	// (0x00016c55) wait_bar_pane_cp01

0xa47b,	// (0x00016c5d) cell_vorec_pane_ParamLimits

0xa47b,	// (0x00016c5d) cell_vorec_pane

0xa48e,	// (0x00016c70) cell_vorec_pane_g1

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp05

0x22e7,	// (0x0000eac9) cams_zoom_pane

0x22f6,	// (0x0000ead8) image_vga_pane

0x2310,	// (0x0000eaf2) main_camera_pane_g1

0x2322,	// (0x0000eb04) main_camera_pane_g2

0x2334,	// (0x0000eb16) main_camera_pane_g3

0x2346,	// (0x0000eb28) main_camera_pane_g4

0x2358,	// (0x0000eb3a) main_camera_pane_g5

0x236a,	// (0x0000eb4c) main_camera_pane_g6

0x237c,	// (0x0000eb5e) main_camera_pane_g7

0x0007,

0xf271,	// (0x0001ba53) main_camera_pane_g

0x238e,	// (0x0000eb70) main_camera_pane_t1

0x23a4,	// (0x0000eb86) main_camera_pane_t2

0x0001,

0xf282,	// (0x0001ba64) main_camera_pane_t

0x23e0,	// (0x0000ebc2) cams_zoom_pane_cp_ParamLimits

0x23e0,	// (0x0000ebc2) cams_zoom_pane_cp

0x2408,	// (0x0000ebea) image_cif_pane_ParamLimits

0x2408,	// (0x0000ebea) image_cif_pane

0x2443,	// (0x0000ec25) image_subqcif_pane

0x244b,	// (0x0000ec2d) main_video_pane_g1_ParamLimits

0x244b,	// (0x0000ec2d) main_video_pane_g1

0x246f,	// (0x0000ec51) main_video_pane_g2_ParamLimits

0x246f,	// (0x0000ec51) main_video_pane_g2

0x24a5,	// (0x0000ec87) main_video_pane_g3_ParamLimits

0x24a5,	// (0x0000ec87) main_video_pane_g3

0x24d5,	// (0x0000ecb7) main_video_pane_g4_ParamLimits

0x24d5,	// (0x0000ecb7) main_video_pane_g4

0x2505,	// (0x0000ece7) main_video_pane_g5_ParamLimits

0x2505,	// (0x0000ece7) main_video_pane_g5

0xa4a4,	// (0x00016c86) main_video_pane_g6_ParamLimits

0xa4a4,	// (0x00016c86) main_video_pane_g6

0x0006,

0xf287,	// (0x0001ba69) main_video_pane_g_ParamLimits

0xf287,	// (0x0001ba69) main_video_pane_g

0x2530,	// (0x0000ed12) main_video_pane_t1_ParamLimits

0x2530,	// (0x0000ed12) main_video_pane_t1

0xa4be,	// (0x00016ca0) cams_zoom_pane_g1

0xa4c7,	// (0x00016ca9) cams_zoom_pane_g2

0xa4d0,	// (0x00016cb2) cams_zoom_pane_g3

0xa4d9,	// (0x00016cbb) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0001ba78) cams_zoom_pane_g

0x258d,	// (0x0000ed6f) grid_cams_pane

0x25a7,	// (0x0000ed89) linegrid_cams_pane

0x25ba,	// (0x0000ed9c) cell_cams_pane_ParamLimits

0x25ba,	// (0x0000ed9c) cell_cams_pane

0xa4e2,	// (0x00016cc4) cams_burst_image_pane

0xa4ea,	// (0x00016ccc) cell_cams_pane_g1

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp03

0xa252,	// (0x00016a34) mp_bg_pane_g1

0x9e4d,	// (0x0001662f) bg_list_pane_cp03

0xc30e,	// (0x00018af0) bg_mp_pane

0xc316,	// (0x00018af8) grid_mp_pane

0xc31e,	// (0x00018b00) media_player_g1

0xc326,	// (0x00018b08) media_player_t1

0xc334,	// (0x00018b16) media_player_t2

0xc342,	// (0x00018b24) media_player_t3

0xc350,	// (0x00018b32) media_player_t4

0xc35e,	// (0x00018b40) media_player_t5

0xc36c,	// (0x00018b4e) media_player_t6

0xc37a,	// (0x00018b5c) media_player_t7

0x0006,

0xf632,	// (0x0001be14) media_player_t

0xc388,	// (0x00018b6a) wait_bar_pane_cp02

0xf617,	// (0x0001bdf9) main_usb_pane_t

0x4345,	// (0x00010b27) cell_mp_pane

0xa252,	// (0x00016a34) cell_mp_pane_g1

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp06

0xa5af,	// (0x00016d91) grid_skin_colour_pane

0xa5b7,	// (0x00016d99) list_highlight_pane_cp03

0x262c,	// (0x0000ee0e) skin_g1

0xa5bf,	// (0x00016da1) skin_t1

0xa5ce,	// (0x00016db0) skin_t2

0x0001,

0xf2cb,	// (0x0001baad) skin_t

0x2634,	// (0x0000ee16) cell_skin_colour_pane_ParamLimits

0x2634,	// (0x0000ee16) cell_skin_colour_pane

0xa5dc,	// (0x00016dbe) cell_skin_colour_pane_g1

0x269a,	// (0x0000ee7c) call_video_g1_ParamLimits

0x269a,	// (0x0000ee7c) call_video_g1

0x26b6,	// (0x0000ee98) call_video_g2_ParamLimits

0x26b6,	// (0x0000ee98) call_video_g2

0x0001,

0xf2d0,	// (0x0001bab2) call_video_g_ParamLimits

0xf2d0,	// (0x0001bab2) call_video_g

0x26f0,	// (0x0000eed2) call_video_uplink_pane_cp1_ParamLimits

0x26f0,	// (0x0000eed2) call_video_uplink_pane_cp1

0xa5f6,	// (0x00016dd8) call_video_uplink_pane_cp2

0x276e,	// (0x0000ef50) video_down_crop_pane_ParamLimits

0x276e,	// (0x0000ef50) video_down_crop_pane

0x2834,	// (0x0000f016) video_down_pane_ParamLimits

0x2834,	// (0x0000f016) video_down_pane

0xa5fe,	// (0x00016de0) video_down_subqcif_pane_ParamLimits

0xa5fe,	// (0x00016de0) video_down_subqcif_pane

0xa616,	// (0x00016df8) video_down_subqcif_pane_cp_ParamLimits

0xa616,	// (0x00016df8) video_down_subqcif_pane_cp

0xa63a,	// (0x00016e1c) im_reading_pane_ParamLimits

0xa63a,	// (0x00016e1c) im_reading_pane

0x2905,	// (0x0000f0e7) im_writing_pane_ParamLimits

0x2905,	// (0x0000f0e7) im_writing_pane

0x291b,	// (0x0000f0fd) im_reading_pane_t1

0xa654,	// (0x00016e36) list_im_pane

0xa665,	// (0x00016e47) scroll_pane_cp07

0x2957,	// (0x0000f139) im_writing_pane_t1_ParamLimits

0x2957,	// (0x0000f139) im_writing_pane_t1

0xa67e,	// (0x00016e60) im_writing_pane_t2_ParamLimits

0xa67e,	// (0x00016e60) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0001babc) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0001babc) im_writing_pane_t

0x9e4d,	// (0x0001662f) input_focus_pane_cp04

0x9e4d,	// (0x0001662f) input_focus_pane_cp05

0x296c,	// (0x0000f14e) list_im_single_pane_ParamLimits

0x296c,	// (0x0000f14e) list_im_single_pane

0x2982,	// (0x0000f164) list_single_im_pane_t1

0x4305,	// (0x00010ae7) blid_accuracy_pane

0x430d,	// (0x00010aef) blid_compass_pane

0x4317,	// (0x00010af9) main_location_t1

0x4327,	// (0x00010b09) main_location_t2

0x4337,	// (0x00010b19) main_location_t3

0x0002,

0xf641,	// (0x0001be23) main_location_t

0x9e4d,	// (0x0001662f) aid_levels_location

0xa252,	// (0x00016a34) blid_accuracy_pane_g1

0xa252,	// (0x00016a34) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0001bb1e) blid_accuracy_pane_g

0xa6c6,	// (0x00016ea8) wml_content_pane

0xa704,	// (0x00016ee6) wml_button_pane_ParamLimits

0xa704,	// (0x00016ee6) wml_button_pane

0x2991,	// (0x0000f173) wml_list_single_large_pane_ParamLimits

0x2991,	// (0x0000f173) wml_list_single_large_pane

0x29a8,	// (0x0000f18a) wml_list_single_medium_pane_ParamLimits

0x29a8,	// (0x0000f18a) wml_list_single_medium_pane

0x29c0,	// (0x0000f1a2) wml_list_single_small_pane_ParamLimits

0x29c0,	// (0x0000f1a2) wml_list_single_small_pane

0xa718,	// (0x00016efa) wml_selection_box_pane_ParamLimits

0xa718,	// (0x00016efa) wml_selection_box_pane

0xa72b,	// (0x00016f0d) wml_list_single_pane_t1

0xa73a,	// (0x00016f1c) wml_list_single_medium_pane_t1

0xa749,	// (0x00016f2b) wml_list_single_large_pane_t1

0xa758,	// (0x00016f3a) input_focus_pane_cp02_ParamLimits

0xa758,	// (0x00016f3a) input_focus_pane_cp02

0xa76b,	// (0x00016f4d) wml_selection_box_pane_g1

0xa774,	// (0x00016f56) wml_selection_box_pane_t1_ParamLimits

0xa774,	// (0x00016f56) wml_selection_box_pane_t1

0xa0a8,	// (0x0001688a) bg_wml_button_pane_ParamLimits

0xa0a8,	// (0x0001688a) bg_wml_button_pane

0xa78c,	// (0x00016f6e) wml_button_pane_g1

0xa794,	// (0x00016f76) wml_button_pane_t1

0xa78c,	// (0x00016f6e) wml_button_bg_pane_g1

0xa7a4,	// (0x00016f86) wml_button_bg_pane_g2

0xa7ac,	// (0x00016f8e) wml_button_bg_pane_g3

0xa7b4,	// (0x00016f96) wml_button_bg_pane_g4

0xa7bc,	// (0x00016f9e) wml_button_bg_pane_g5

0xa7c4,	// (0x00016fa6) wml_button_bg_pane_g6

0xa7cc,	// (0x00016fae) wml_button_bg_pane_g7

0xa7d4,	// (0x00016fb6) wml_button_bg_pane_g8

0xa7dc,	// (0x00016fbe) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0001bac1) wml_button_bg_pane_g

0x29de,	// (0x0000f1c0) bg_list_pane_cp02

0xa7e4,	// (0x00016fc6) mce_header_pane_ParamLimits

0xa7e4,	// (0x00016fc6) mce_header_pane

0xa7fa,	// (0x00016fdc) mce_icon_pane

0xa7fa,	// (0x00016fdc) mce_image_pane

0xa803,	// (0x00016fe5) mce_text_pane_ParamLimits

0xa803,	// (0x00016fe5) mce_text_pane

0x29e6,	// (0x0000f1c8) scroll_pane_cp03

0xa6fc,	// (0x00016ede) scroll_pane_cp04

0xa816,	// (0x00016ff8) scroll_pane_cp05_ParamLimits

0xa816,	// (0x00016ff8) scroll_pane_cp05

0x29f0,	// (0x0000f1d2) mce_header_field_pane_ParamLimits

0x29f0,	// (0x0000f1d2) mce_header_field_pane

0x2a07,	// (0x0000f1e9) mce_header_field_pane_2_ParamLimits

0x2a07,	// (0x0000f1e9) mce_header_field_pane_2

0x2a1d,	// (0x0000f1ff) mce_header_field_pane_3

0x2a25,	// (0x0000f207) list_single_mce_message_pane_ParamLimits

0x2a25,	// (0x0000f207) list_single_mce_message_pane

0x2a3d,	// (0x0000f21f) list_single_mce_smart_pane_ParamLimits

0x2a3d,	// (0x0000f21f) list_single_mce_smart_pane

0xa822,	// (0x00017004) input_focus_pane_cp03

0xa82b,	// (0x0001700d) list_header_data_pane

0x2a60,	// (0x0000f242) mce_header_field_pane_t1

0x2a70,	// (0x0000f252) list_single_mce_header_pane_ParamLimits

0x2a70,	// (0x0000f252) list_single_mce_header_pane

0xa833,	// (0x00017015) list_single_mce_header_pane_t1

0xa842,	// (0x00017024) list_single_mce_message_pane_g1

0xa84a,	// (0x0001702c) list_single_mce_message_pane_t1

0x2aa2,	// (0x0000f284) bg_cale_heading_pane_cp01_ParamLimits

0x2aa2,	// (0x0000f284) bg_cale_heading_pane_cp01

0xa858,	// (0x0001703a) bg_cale_pane_cp02_ParamLimits

0xa858,	// (0x0001703a) bg_cale_pane_cp02

0x2ac5,	// (0x0000f2a7) cale_month_corner_pane

0x2adb,	// (0x0000f2bd) cale_month_day_heading_pane_ParamLimits

0x2adb,	// (0x0000f2bd) cale_month_day_heading_pane

0x2b06,	// (0x0000f2e8) cale_month_pane_g1_ParamLimits

0x2b06,	// (0x0000f2e8) cale_month_pane_g1

0x2b22,	// (0x0000f304) cale_month_pane_g2_ParamLimits

0x2b22,	// (0x0000f304) cale_month_pane_g2

0x2b3b,	// (0x0000f31d) cale_month_pane_g3_ParamLimits

0x2b3b,	// (0x0000f31d) cale_month_pane_g3

0x2b67,	// (0x0000f349) cale_month_pane_g4_ParamLimits

0x2b67,	// (0x0000f349) cale_month_pane_g4

0x2b93,	// (0x0000f375) cale_month_pane_g5_ParamLimits

0x2b93,	// (0x0000f375) cale_month_pane_g5

0x2bbf,	// (0x0000f3a1) cale_month_pane_g6_ParamLimits

0x2bbf,	// (0x0000f3a1) cale_month_pane_g6

0x2beb,	// (0x0000f3cd) cale_month_pane_g7_ParamLimits

0x2beb,	// (0x0000f3cd) cale_month_pane_g7

0x2c17,	// (0x0000f3f9) cale_month_pane_g8_ParamLimits

0x2c17,	// (0x0000f3f9) cale_month_pane_g8

0x2c4b,	// (0x0000f42d) cale_month_pane_g9_ParamLimits

0x2c4b,	// (0x0000f42d) cale_month_pane_g9

0x2c7d,	// (0x0000f45f) cale_month_pane_g10_ParamLimits

0x2c7d,	// (0x0000f45f) cale_month_pane_g10

0x2caf,	// (0x0000f491) cale_month_pane_g11_ParamLimits

0x2caf,	// (0x0000f491) cale_month_pane_g11

0x2ce1,	// (0x0000f4c3) cale_month_pane_g12_ParamLimits

0x2ce1,	// (0x0000f4c3) cale_month_pane_g12

0x2d13,	// (0x0000f4f5) cale_month_pane_g13_ParamLimits

0x2d13,	// (0x0000f4f5) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0001bad4) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0001bad4) cale_month_pane_g

0x2d45,	// (0x0000f527) cale_month_week_pane

0x2d56,	// (0x0000f538) grid_cale_month_pane_ParamLimits

0x2d56,	// (0x0000f538) grid_cale_month_pane

0x2d7c,	// (0x0000f55e) cale_month_day_heading_pane_t1

0x2dda,	// (0x0000f5bc) cale_month_day_heading_pane_t2

0x2e3f,	// (0x0000f621) cale_month_day_heading_pane_t3

0x2ea4,	// (0x0000f686) cale_month_day_heading_pane_t4

0x2f09,	// (0x0000f6eb) cale_month_day_heading_pane_t5

0x2f6e,	// (0x0000f750) cale_month_day_heading_pane_t6

0x2fd3,	// (0x0000f7b5) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0001baef) cale_month_day_heading_pane_t

0xa3af,	// (0x00016b91) bg_cale_side_pane_cp01

0x3038,	// (0x0000f81a) cale_month_week_pane_t1

0x304f,	// (0x0000f831) cale_month_week_pane_t2

0x3066,	// (0x0000f848) cale_month_week_pane_t3

0x307d,	// (0x0000f85f) cale_month_week_pane_t4

0x3094,	// (0x0000f876) cale_month_week_pane_t5

0x30ab,	// (0x0000f88d) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0001bafe) cale_month_week_pane_t

0x30c2,	// (0x0000f8a4) cell_cale_month_pane_ParamLimits

0x30c2,	// (0x0000f8a4) cell_cale_month_pane

0xa8b7,	// (0x00017099) cell_cale_month_pane_g1

0x3168,	// (0x0000f94a) cell_cale_month_pane_t1_ParamLimits

0x3168,	// (0x0000f94a) cell_cale_month_pane_t1

0xa3bd,	// (0x00016b9f) grid_highlight_pane_cp08

0xa252,	// (0x00016a34) main_smil_g1

0x3184,	// (0x0000f966) smil_status_pane

0xa8c3,	// (0x000170a5) smil_text_pane

0xc22e,	// (0x00018a10) bg_popup_call3_rect_pane_g8

0xc236,	// (0x00018a18) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001bdb7) bg_popup_call3_rect_pane_g

0xc4b0,	// (0x00018c92) smil_status_volume_pane_g1

0xa8cd,	// (0x000170af) smil_status_pane_t1

0xc4e3,	// (0x00018cc5) volume_smil_pane

0xa8e4,	// (0x000170c6) list_smil_text_pane

0x3199,	// (0x0000f97b) scroll_pane_cp011

0x31a4,	// (0x0000f986) smil_text_list_pane_t1_ParamLimits

0x31a4,	// (0x0000f986) smil_text_list_pane_t1

0xa8ee,	// (0x000170d0) aid_volume_smil_ParamLimits

0xa8ee,	// (0x000170d0) aid_volume_smil

0xa252,	// (0x00016a34) smil_volume_pane_g1

0xa252,	// (0x00016a34) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0001bb1e) smil_volume_pane_g

0xa1d9,	// (0x000169bb) listscroll_cale_day_pane

0xa910,	// (0x000170f2) bg_cale_pane

0xa928,	// (0x0001710a) list_cale_pane

0xa939,	// (0x0001711b) scroll_pane_cp09

0xa94a,	// (0x0001712c) cale_bg_pane_g1

0xa952,	// (0x00017134) cale_bg_pane_g2

0xa95a,	// (0x0001713c) cale_bg_pane_g3

0xa962,	// (0x00017144) cale_bg_pane_g4

0xa96a,	// (0x0001714c) cale_bg_pane_g5

0xa972,	// (0x00017154) cale_bg_pane_g6

0xa97a,	// (0x0001715c) cale_bg_pane_g7

0xa982,	// (0x00017164) cale_bg_pane_g8

0xa98a,	// (0x0001716c) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0001bb23) cale_bg_pane_g

0x31f8,	// (0x0000f9da) list_cale_time_pane_ParamLimits

0x31f8,	// (0x0000f9da) list_cale_time_pane

0x320d,	// (0x0000f9ef) list_cale_time_pane_g1_ParamLimits

0x320d,	// (0x0000f9ef) list_cale_time_pane_g1

0xa992,	// (0x00017174) list_cale_time_pane_g2_ParamLimits

0xa992,	// (0x00017174) list_cale_time_pane_g2

0x3219,	// (0x0000f9fb) list_cale_time_pane_g3_ParamLimits

0x3219,	// (0x0000f9fb) list_cale_time_pane_g3

0x3235,	// (0x0000fa17) list_cale_time_pane_g4_ParamLimits

0x3235,	// (0x0000fa17) list_cale_time_pane_g4

0x3243,	// (0x0000fa25) list_cale_time_pane_g5_ParamLimits

0x3243,	// (0x0000fa25) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0001bb36) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0001bb36) list_cale_time_pane_g

0x3251,	// (0x0000fa33) list_cale_time_pane_t1_ParamLimits

0x3251,	// (0x0000fa33) list_cale_time_pane_t1

0x3279,	// (0x0000fa5b) list_cale_time_pane_t2_ParamLimits

0x3279,	// (0x0000fa5b) list_cale_time_pane_t2

0x35a8,	// (0x0000fd8a) aid_blid_cardinal_pane

0x35e6,	// (0x0000fdc8) compass_pane_t4

0x32a1,	// (0x0000fa83) list_cale_time_pane_t4_ParamLimits

0x32a1,	// (0x0000fa83) list_cale_time_pane_t4

0x35f4,	// (0x0000fdd6) compass_pane_t5

0x3602,	// (0x0000fde4) compass_pane_t6

0x3610,	// (0x0000fdf2) compass_pane_t7

0xaea4,	// (0x00017686) navi_pane_cc_t1

0xb00b,	// (0x000177ed) aid_phob_thumbnail_center_pane

0x3d11,	// (0x000104f3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0001bb43) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0001bb43) list_cale_time_pane_t

0x9aa6,	// (0x00016288) bg_popup_window_pane_cp02_ParamLimits

0x9aa6,	// (0x00016288) bg_popup_window_pane_cp02

0xa9ac,	// (0x0001718e) heading_pane_cp01_ParamLimits

0xa9ac,	// (0x0001718e) heading_pane_cp01

0xa9b8,	// (0x0001719a) loc_req_pane_ParamLimits

0xa9b8,	// (0x0001719a) loc_req_pane

0xa9c8,	// (0x000171aa) loc_type_pane_ParamLimits

0xa9c8,	// (0x000171aa) loc_type_pane

0xa9da,	// (0x000171bc) loc_type_pane_t1_ParamLimits

0xa9da,	// (0x000171bc) loc_type_pane_t1

0xa9ec,	// (0x000171ce) loc_type_pane_t2_ParamLimits

0xa9ec,	// (0x000171ce) loc_type_pane_t2

0xa9fe,	// (0x000171e0) loc_type_pane_t3_ParamLimits

0xa9fe,	// (0x000171e0) loc_type_pane_t3

0x0002,

0xf368,	// (0x0001bb4a) loc_type_pane_t_ParamLimits

0xf368,	// (0x0001bb4a) loc_type_pane_t

0xaa10,	// (0x000171f2) list_loc_req_pane

0xaa1a,	// (0x000171fc) scroll_pane_cp012

0x32c9,	// (0x0000faab) list_single_loc_request_popup_menu_pane_ParamLimits

0x32c9,	// (0x0000faab) list_single_loc_request_popup_menu_pane

0xaa25,	// (0x00017207) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa25,	// (0x00017207) list_single_loc_request_popup_menu_pane_g1

0xaa31,	// (0x00017213) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa31,	// (0x00017213) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0001bb51) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0001bb51) list_single_loc_request_popup_menu_pane_g

0xaa3d,	// (0x0001721f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa3d,	// (0x0001721f) list_single_loc_request_popup_menu_pane_t1

0xa0a8,	// (0x0001688a) bg_popup_window_pane_cp03_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_window_pane_cp03

0xcc6d,	// (0x0001944f) heading_loc_req_pane_ParamLimits

0xcc6d,	// (0x0001944f) heading_loc_req_pane

0x32d6,	// (0x0000fab8) popup_dyc_status_message_window_g1_ParamLimits

0x32d6,	// (0x0000fab8) popup_dyc_status_message_window_g1

0x32ea,	// (0x0000facc) popup_dyc_status_message_window_t1_ParamLimits

0x32ea,	// (0x0000facc) popup_dyc_status_message_window_t1

0x32ff,	// (0x0000fae1) popup_dyc_status_message_window_t2_ParamLimits

0x32ff,	// (0x0000fae1) popup_dyc_status_message_window_t2

0x3314,	// (0x0000faf6) popup_dyc_status_message_window_t3_ParamLimits

0x3314,	// (0x0000faf6) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0001bb56) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0001bb56) popup_dyc_status_message_window_t

0x9e4d,	// (0x0001662f) bg_heading_pane_cp01

0xaa53,	// (0x00017235) heading_loc_req_pane_g1

0xaa5b,	// (0x0001723d) heading_loc_req_pane_g2

0xaa63,	// (0x00017245) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0001bb5d) heading_loc_req_pane_g

0xaa6b,	// (0x0001724d) heading_loc_req_pane_t1

0xaaef,	// (0x000172d1) bg_popup_sub_pane_cp01_ParamLimits

0xaaef,	// (0x000172d1) bg_popup_sub_pane_cp01

0xaafd,	// (0x000172df) popup_cale_events_window_g1_ParamLimits

0xaafd,	// (0x000172df) popup_cale_events_window_g1

0xab1d,	// (0x000172ff) popup_cale_events_window_g2_ParamLimits

0xab1d,	// (0x000172ff) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0001bb91) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0001bb91) popup_cale_events_window_g

0xab3d,	// (0x0001731f) popup_cale_events_window_t1_ParamLimits

0xab3d,	// (0x0001731f) popup_cale_events_window_t1

0xab4f,	// (0x00017331) popup_cale_events_window_t2_ParamLimits

0xab4f,	// (0x00017331) popup_cale_events_window_t2

0xab8d,	// (0x0001736f) popup_cale_events_window_t3_ParamLimits

0xab8d,	// (0x0001736f) popup_cale_events_window_t3

0xabc7,	// (0x000173a9) popup_cale_events_window_t4_ParamLimits

0xabc7,	// (0x000173a9) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0001bb96) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0001bb96) popup_cale_events_window_t

0x33a2,	// (0x0000fb84) call_type_pane

0x33b2,	// (0x0000fb94) popup_call_status_window_g1

0x33c6,	// (0x0000fba8) popup_call_status_window_g2

0x33da,	// (0x0000fbbc) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0001bb9f) popup_call_status_window_g

0xabfd,	// (0x000173df) call_type_pane_g1

0xac06,	// (0x000173e8) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0001bba6) call_type_pane_g

0x9e4d,	// (0x0001662f) bg_popup_sub_pane_cp02

0xac0f,	// (0x000173f1) listscroll_popup_wml_pane

0xac17,	// (0x000173f9) list_wml_pane

0xac21,	// (0x00017403) scroll_pane_cp013

0xac2c,	// (0x0001740e) list_single_graphic_popup_wml_pane_ParamLimits

0xac2c,	// (0x0001740e) list_single_graphic_popup_wml_pane

0xa252,	// (0x00016a34) list_single_graphic_popup_wml_pane_g1

0xac40,	// (0x00017422) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0001bbab) list_single_graphic_popup_wml_pane_g

0xac48,	// (0x0001742a) list_single_graphic_popup_wml_pane_t1

0xac5e,	// (0x00017440) aid_call_pane

0xa0a0,	// (0x00016882) popup_clock_analogue_window_g1

0xa0a0,	// (0x00016882) popup_clock_analogue_window_g2

0xac66,	// (0x00017448) popup_clock_analogue_window_g3

0xac66,	// (0x00017448) popup_clock_analogue_window_g4

0xa252,	// (0x00016a34) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0001bbb0) popup_clock_analogue_window_g

0xac6e,	// (0x00017450) popup_clock_analogue_window_t1

0xac7c,	// (0x0001745e) clock_digital_number_pane_ParamLimits

0xac7c,	// (0x0001745e) clock_digital_number_pane

0xac88,	// (0x0001746a) clock_digital_number_pane_cp02_ParamLimits

0xac88,	// (0x0001746a) clock_digital_number_pane_cp02

0xac94,	// (0x00017476) clock_digital_number_pane_cp03_ParamLimits

0xac94,	// (0x00017476) clock_digital_number_pane_cp03

0xaca0,	// (0x00017482) clock_digital_number_pane_cp04_ParamLimits

0xaca0,	// (0x00017482) clock_digital_number_pane_cp04

0xacac,	// (0x0001748e) clock_digital_separator_pane_ParamLimits

0xacac,	// (0x0001748e) clock_digital_separator_pane

0xacb8,	// (0x0001749a) popup_clock_digital_window_t1

0xa252,	// (0x00016a34) clock_digital_number_pane_g1

0xa252,	// (0x00016a34) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0001bb1e) clock_digital_number_pane_g

0xa252,	// (0x00016a34) clock_digital_separator_pane_g1

0xa252,	// (0x00016a34) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0001bb1e) clock_digital_separator_pane_g

0x9e4d,	// (0x0001662f) bg_popup_window_pane_cp04

0xacd5,	// (0x000174b7) heading_pane_cp03

0xacdd,	// (0x000174bf) listscroll_popup_gms_pane

0xace5,	// (0x000174c7) grid_large_graphic_popup_pane

0xacef,	// (0x000174d1) listscroll_popup_gms_pane_g1

0xacf7,	// (0x000174d9) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0001bbbb) listscroll_popup_gms_pane_g

0xa6fc,	// (0x00016ede) scroll_pane_cp014

0xacff,	// (0x000174e1) cell_large_graphic_popup_pane_ParamLimits

0xacff,	// (0x000174e1) cell_large_graphic_popup_pane

0xad17,	// (0x000174f9) cell_large_graphic_popup_pane_g1_ParamLimits

0xad17,	// (0x000174f9) cell_large_graphic_popup_pane_g1

0xad23,	// (0x00017505) cell_large_graphic_popup_pane_g2_ParamLimits

0xad23,	// (0x00017505) cell_large_graphic_popup_pane_g2

0xad2f,	// (0x00017511) cell_large_graphic_popup_pane_g3_ParamLimits

0xad2f,	// (0x00017511) cell_large_graphic_popup_pane_g3

0xad3c,	// (0x0001751e) cell_large_graphic_popup_pane_g4_ParamLimits

0xad3c,	// (0x0001751e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0001bbc0) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0001bbc0) cell_large_graphic_popup_pane_g

0xad4c,	// (0x0001752e) grid_highlight_pane_cp010

0xa252,	// (0x00016a34) bg_popup_call_pane_g1

0xad56,	// (0x00017538) list_single_graphic_popup_conf_pane_ParamLimits

0xad56,	// (0x00017538) list_single_graphic_popup_conf_pane

0xad68,	// (0x0001754a) list_highlight_pane_cp01

0xad71,	// (0x00017553) list_single_graphic_popup_conf_pane_g1

0xad79,	// (0x0001755b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0001bbc9) list_single_graphic_popup_conf_pane_g

0xad81,	// (0x00017563) list_single_graphic_popup_conf_pane_t1

0xad8f,	// (0x00017571) linegrid_cams_pane_g1

0x33ea,	// (0x0000fbcc) linegrid_cams_pane_g2

0xa35c,	// (0x00016b3e) linegrid_cams_pane_g3

0xad98,	// (0x0001757a) linegrid_cams_pane_g4

0x33f3,	// (0x0000fbd5) linegrid_cams_pane_g5

0x33fc,	// (0x0000fbde) linegrid_cams_pane_g6

0xa3f0,	// (0x00016bd2) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0001bbce) linegrid_cams_pane_g

0xada1,	// (0x00017583) popup_clock_analogue_window

0xada1,	// (0x00017583) popup_clock_digital_window

0x9e4d,	// (0x0001662f) popup_phob_thumbnail_window

0xa252,	// (0x00016a34) call_video_uplink_pane_g1

0xadaa,	// (0x0001758c) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0001bbdd) call_video_uplink_pane_g

0xa3bd,	// (0x00016b9f) video_uplink_pane

0xadb2,	// (0x00017594) mce_image_pane_g1

0x3407,	// (0x0000fbe9) mce_image_pane_g2

0x340f,	// (0x0000fbf1) mce_image_pane_g3

0x3417,	// (0x0000fbf9) mce_image_pane_g4

0x341f,	// (0x0000fc01) mce_image_pane_g5

0x0004,

0xf400,	// (0x0001bbe2) mce_image_pane_g

0xadbc,	// (0x0001759e) control_top_pane_stacon_cp01_ParamLimits

0xadbc,	// (0x0001759e) control_top_pane_stacon_cp01

0xadd0,	// (0x000175b2) uni_indicator_pane_stacon_cp01_ParamLimits

0xadd0,	// (0x000175b2) uni_indicator_pane_stacon_cp01

0xade1,	// (0x000175c3) bg_popup_sub_pane_cp03

0x3427,	// (0x0000fc09) chi_dic_find_pane

0x342f,	// (0x0000fc11) listscroll_chi_dic_pane

0x3438,	// (0x0000fc1a) main_pane_chidic_g1

0x344b,	// (0x0000fc2d) chi_dic_find_pane_t1

0xadeb,	// (0x000175cd) find_chidic_pane

0xadf4,	// (0x000175d6) chi_dic_list_pane_ParamLimits

0xadf4,	// (0x000175d6) chi_dic_list_pane

0xae05,	// (0x000175e7) scroll_pane_cp020

0x3459,	// (0x0000fc3b) find_chidic_pane_t1

0x9e4d,	// (0x0001662f) input_focus_pane_cp06

0x3468,	// (0x0000fc4a) list_chi_dic_pane_ParamLimits

0x3468,	// (0x0000fc4a) list_chi_dic_pane

0xae0d,	// (0x000175ef) list_chi_dic_pane_t1_ParamLimits

0xae0d,	// (0x000175ef) list_chi_dic_pane_t1

0x9e4d,	// (0x0001662f) list_highlight_pane_cp020

0xae20,	// (0x00017602) bg_cale_heading_pane_g1

0x347c,	// (0x0000fc5e) bg_cale_heading_pane_g2

0x3484,	// (0x0000fc66) bg_cale_heading_pane_g3

0x348c,	// (0x0000fc6e) bg_cale_heading_pane_g4

0x3496,	// (0x0000fc78) bg_cale_heading_pane_g5

0x34a0,	// (0x0000fc82) bg_cale_heading_pane_g6

0x34a8,	// (0x0000fc8a) bg_cale_heading_pane_g7

0x34b0,	// (0x0000fc92) bg_cale_heading_pane_g8

0x34ba,	// (0x0000fc9c) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0001bbed) bg_cale_heading_pane_g

0xae20,	// (0x00017602) bg_cale_side_pane_g1

0x34c4,	// (0x0000fca6) bg_cale_side_pane_g2

0x34cc,	// (0x0000fcae) bg_cale_side_pane_g3

0x34d4,	// (0x0000fcb6) bg_cale_side_pane_g4

0x34dc,	// (0x0000fcbe) bg_cale_side_pane_g5

0x34e4,	// (0x0000fcc6) bg_cale_side_pane_g6

0x34ec,	// (0x0000fcce) bg_cale_side_pane_g7

0x34f4,	// (0x0000fcd6) bg_cale_side_pane_g8

0x34fc,	// (0x0000fcde) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0001bc00) bg_cale_side_pane_g

0x3504,	// (0x0000fce6) popup_call_status_window_ParamLimits

0x3504,	// (0x0000fce6) popup_call_status_window

0xae28,	// (0x0001760a) stacon_top_pane

0xae30,	// (0x00017612) status_pane_ParamLimits

0xae30,	// (0x00017612) status_pane

0xae45,	// (0x00017627) status_small_pane

0xae4d,	// (0x0001762f) control_pane

0x9e4d,	// (0x0001662f) stacon_bottom_pane

0xae55,	// (0x00017637) list_single_mce_smart_pane_t1_ParamLimits

0xae55,	// (0x00017637) list_single_mce_smart_pane_t1

0xae68,	// (0x0001764a) list_single_mce_smart_pane_t2_ParamLimits

0xae68,	// (0x0001764a) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0001bc13) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0001bc13) list_single_mce_smart_pane_t

0x354d,	// (0x0000fd2f) compass_pane

0x3556,	// (0x0000fd38) main_location2_pane_t1

0x356a,	// (0x0000fd4c) main_location2_pane_t2

0x357e,	// (0x0000fd60) main_location2_pane_t3

0x0003,

0xf436,	// (0x0001bc18) main_location2_pane_t

0xae87,	// (0x00017669) compass_pane_g1_ParamLimits

0xae87,	// (0x00017669) compass_pane_g1

0x35c8,	// (0x0000fdaa) compass_pane_t1

0x35d7,	// (0x0000fdb9) compass_pane_t2

0x0005,

0xf43f,	// (0x0001bc21) compass_pane_t

0x361e,	// (0x0000fe00) text_secondary_cp61

0xae9b,	// (0x0001767d) navi_pane_cams_g5

0xaebe,	// (0x000176a0) navi_pane_im_t1

0xaecc,	// (0x000176ae) navi_pane_mp_g1_ParamLimits

0xaecc,	// (0x000176ae) navi_pane_mp_g1

0xaee0,	// (0x000176c2) navi_pane_mp_g2_ParamLimits

0xaee0,	// (0x000176c2) navi_pane_mp_g2

0xaeec,	// (0x000176ce) navi_pane_mp_g3_ParamLimits

0xaeec,	// (0x000176ce) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0001bc35) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0001bc35) navi_pane_mp_g

0xaef8,	// (0x000176da) navi_pane_mp_t1

0xaf06,	// (0x000176e8) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0001bc3c) navi_pane_mp_t

0xaf42,	// (0x00017724) navi_pane_vt_g1

0xaef8,	// (0x000176da) navi_pane_vt_t1

0xaf4a,	// (0x0001772c) navi_slider_pane

0xaf52,	// (0x00017734) zooming_pane

0xaf5a,	// (0x0001773c) navi_slider_pane_g1

0xaf63,	// (0x00017745) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0001bc43) navi_slider_pane_g

0xaf90,	// (0x00017772) aid_levels_zoom

0xaf98,	// (0x0001777a) zooming_pane_g1

0xafa0,	// (0x00017782) zooming_pane_g2

0xafa0,	// (0x00017782) zooming_pane_g3

0x0002,

0xf470,	// (0x0001bc52) zooming_pane_g

0xafa8,	// (0x0001778a) level_10_zoom

0xafb1,	// (0x00017793) level_11_zoom

0xafba,	// (0x0001779c) level_1_zoom

0xafc3,	// (0x000177a5) level_2_zoom

0xafcc,	// (0x000177ae) level_3_zoom

0xafd5,	// (0x000177b7) level_4_zoom

0xafde,	// (0x000177c0) level_5_zoom

0xafe7,	// (0x000177c9) level_6_zoom

0xaff0,	// (0x000177d2) level_7_zoom

0xaff9,	// (0x000177db) level_8_zoom

0xb002,	// (0x000177e4) level_9_zoom

0xb013,	// (0x000177f5) popup_phob_thumbnail_window_g1

0xb01b,	// (0x000177fd) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0001bc59) popup_phob_thumbnail_window_g

0xc390,	// (0x00018b72) level_1_location

0xc398,	// (0x00018b7a) level_2_location

0xc3a0,	// (0x00018b82) level_3_location

0xc3a8,	// (0x00018b8a) level_4_location

0xaf52,	// (0x00017734) level_5_location

0x3747,	// (0x0000ff29) mce_icon_pane_g1

0x374f,	// (0x0000ff31) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0001bc5e) mce_icon_pane_g

0x3757,	// (0x0000ff39) main_mup_pane_g1_ParamLimits

0x3757,	// (0x0000ff39) main_mup_pane_g1

0x376d,	// (0x0000ff4f) main_mup_pane_g2_ParamLimits

0x376d,	// (0x0000ff4f) main_mup_pane_g2

0x3785,	// (0x0000ff67) main_mup_pane_g3_ParamLimits

0x3785,	// (0x0000ff67) main_mup_pane_g3

0x379d,	// (0x0000ff7f) main_mup_pane_g4_ParamLimits

0x379d,	// (0x0000ff7f) main_mup_pane_g4

0x37b5,	// (0x0000ff97) main_mup_pane_g5_ParamLimits

0x37b5,	// (0x0000ff97) main_mup_pane_g5

0x37d1,	// (0x0000ffb3) main_mup_pane_g6_ParamLimits

0x37d1,	// (0x0000ffb3) main_mup_pane_g6

0x37e9,	// (0x0000ffcb) main_mup_pane_g7_ParamLimits

0x37e9,	// (0x0000ffcb) main_mup_pane_g7

0x3801,	// (0x0000ffe3) main_mup_pane_g8_ParamLimits

0x3801,	// (0x0000ffe3) main_mup_pane_g8

0x3819,	// (0x0000fffb) main_mup_pane_g9_ParamLimits

0x3819,	// (0x0000fffb) main_mup_pane_g9

0x3833,	// (0x00010015) main_mup_pane_g10_ParamLimits

0x3833,	// (0x00010015) main_mup_pane_g10

0x384d,	// (0x0001002f) main_mup_pane_g11_ParamLimits

0x384d,	// (0x0001002f) main_mup_pane_g11

0x3861,	// (0x00010043) main_mup_pane_g12_ParamLimits

0x3861,	// (0x00010043) main_mup_pane_g12

0x3877,	// (0x00010059) main_mup_pane_g13_ParamLimits

0x3877,	// (0x00010059) main_mup_pane_g13

0x000c,

0xf481,	// (0x0001bc63) main_mup_pane_g_ParamLimits

0xf481,	// (0x0001bc63) main_mup_pane_g

0x388b,	// (0x0001006d) main_mup_pane_t1_ParamLimits

0x388b,	// (0x0001006d) main_mup_pane_t1

0x38a5,	// (0x00010087) main_mup_pane_t2_ParamLimits

0x38a5,	// (0x00010087) main_mup_pane_t2

0x38bd,	// (0x0001009f) main_mup_pane_t3_ParamLimits

0x38bd,	// (0x0001009f) main_mup_pane_t3

0x38d5,	// (0x000100b7) main_mup_pane_t4_ParamLimits

0x38d5,	// (0x000100b7) main_mup_pane_t4

0x38f3,	// (0x000100d5) main_mup_pane_t5_ParamLimits

0x38f3,	// (0x000100d5) main_mup_pane_t5

0x3908,	// (0x000100ea) main_mup_pane_t6_ParamLimits

0x3908,	// (0x000100ea) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0001bc7e) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0001bc7e) main_mup_pane_t

0x391a,	// (0x000100fc) mup_progress_pane_ParamLimits

0x391a,	// (0x000100fc) mup_progress_pane

0x3926,	// (0x00010108) mup_visualizer_pane_ParamLimits

0x3926,	// (0x00010108) mup_visualizer_pane

0x395a,	// (0x0001013c) mup_volume_pane_ParamLimits

0x395a,	// (0x0001013c) mup_volume_pane

0xb023,	// (0x00017805) mup_visualizer_pane_g1_ParamLimits

0xb023,	// (0x00017805) mup_visualizer_pane_g1

0xb023,	// (0x00017805) mup_visualizer_pane_g2_ParamLimits

0xb023,	// (0x00017805) mup_visualizer_pane_g2

0xae87,	// (0x00017669) mup_visualizer_pane_g3_ParamLimits

0xae87,	// (0x00017669) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0001bc8b) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0001bc8b) mup_visualizer_pane_g

0xa252,	// (0x00016a34) mup_volume_pane_g1

0xb039,	// (0x0001781b) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0001bc92) mup_volume_pane_g

0xa252,	// (0x00016a34) mup_progress_pane_g1

0xb042,	// (0x00017824) mup_progress_pane_g2

0xb04b,	// (0x0001782d) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0001bc97) mup_progress_pane_g

0x9e4d,	// (0x0001662f) bg_popup_window_pane_cp05

0xb054,	// (0x00017836) heading_pane_cp02_ParamLimits

0xb054,	// (0x00017836) heading_pane_cp02

0xb06e,	// (0x00017850) list_popup_blid_pane

0xb076,	// (0x00017858) list_blid_sat_info_pane_ParamLimits

0xb076,	// (0x00017858) list_blid_sat_info_pane

0xb089,	// (0x0001786b) list_blid_sat_info_pane_g1

0xb091,	// (0x00017873) list_blid_sat_info_pane_t1

0x3a70,	// (0x00010252) mup_equalizer_pane_ParamLimits

0x3a70,	// (0x00010252) mup_equalizer_pane

0x3a89,	// (0x0001026b) mup_equalizer_pane_cp1_ParamLimits

0x3a89,	// (0x0001026b) mup_equalizer_pane_cp1

0x3aa6,	// (0x00010288) mup_equalizer_pane_cp2_ParamLimits

0x3aa6,	// (0x00010288) mup_equalizer_pane_cp2

0x3ac3,	// (0x000102a5) mup_equalizer_pane_cp3_ParamLimits

0x3ac3,	// (0x000102a5) mup_equalizer_pane_cp3

0x3ae4,	// (0x000102c6) mup_equalizer_pane_cp4_ParamLimits

0x3ae4,	// (0x000102c6) mup_equalizer_pane_cp4

0x3b05,	// (0x000102e7) mup_equalizer_pane_cp5

0x3b19,	// (0x000102fb) mup_equalizer_pane_cp6

0x3b2d,	// (0x0001030f) mup_equalizer_pane_cp7

0xc2ae,	// (0x00018a90) bg_popup_call_poc_act_pane_g9

0xc2b6,	// (0x00018a98) bg_popup_call_poc_act_pane_g10

0xc2be,	// (0x00018aa0) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0a8,	// (0x0001688a) mup_scale_pane

0xa252,	// (0x00016a34) mup_scale_pane_g1

0xb09f,	// (0x00017881) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0001bcb3) mup_scale_pane_g

0xb0c3,	// (0x000178a5) msg_data_pane

0xb0cb,	// (0x000178ad) scroll_pane_cp017

0x3b53,	// (0x00010335) bg_list_pane_cp04_ParamLimits

0x3b53,	// (0x00010335) bg_list_pane_cp04

0xb0d3,	// (0x000178b5) msg_data_pane_g1

0x3b73,	// (0x00010355) msg_data_pane_g2

0x340f,	// (0x0000fbf1) msg_data_pane_g3

0x3b7b,	// (0x0001035d) msg_data_pane_g4

0x3b83,	// (0x00010365) msg_data_pane_g5

0x3b8b,	// (0x0001036d) msg_data_pane_g6

0x3b93,	// (0x00010375) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0001bcc2) msg_data_pane_g

0x3b9b,	// (0x0001037d) msg_text_pane_ParamLimits

0x3b9b,	// (0x0001037d) msg_text_pane

0x3bc4,	// (0x000103a6) qrid_highlight_pane_cp011_ParamLimits

0x3bc4,	// (0x000103a6) qrid_highlight_pane_cp011

0x9e4d,	// (0x0001662f) msg_body_pane

0x9e4d,	// (0x0001662f) msg_header_pane

0xb0e4,	// (0x000178c6) input_focus_pane_cp07

0x3be8,	// (0x000103ca) msg_header_pane_t1_ParamLimits

0x3be8,	// (0x000103ca) msg_header_pane_t1

0xb0f9,	// (0x000178db) msg_header_pane_t2_ParamLimits

0xb0f9,	// (0x000178db) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0001bcd6) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0001bcd6) msg_header_pane_t

0xb10b,	// (0x000178ed) msg_body_pane_g1

0x3bfc,	// (0x000103de) msg_body_pane_t1_ParamLimits

0x3bfc,	// (0x000103de) msg_body_pane_t1

0xb113,	// (0x000178f5) msg_body_pane_t2_ParamLimits

0xb113,	// (0x000178f5) msg_body_pane_t2

0xb125,	// (0x00017907) msg_body_pane_t3_ParamLimits

0xb125,	// (0x00017907) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0001bcdb) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0001bcdb) msg_body_pane_t

0x3c67,	// (0x00010449) main_viewer_pane_g1_ParamLimits

0x3c67,	// (0x00010449) main_viewer_pane_g1

0x3c75,	// (0x00010457) main_viewer_pane_g2_ParamLimits

0x3c75,	// (0x00010457) main_viewer_pane_g2

0x3c83,	// (0x00010465) main_viewer_pane_g3_ParamLimits

0x3c83,	// (0x00010465) main_viewer_pane_g3

0x3c92,	// (0x00010474) main_viewer_pane_g4_ParamLimits

0x3c92,	// (0x00010474) main_viewer_pane_g4

0xb14f,	// (0x00017931) main_viewer_pane_g5_ParamLimits

0xb14f,	// (0x00017931) main_viewer_pane_g5

0xb14f,	// (0x00017931) main_viewer_pane_g7_ParamLimits

0xb14f,	// (0x00017931) main_viewer_pane_g7

0xb161,	// (0x00017943) main_viewer_pane_g8_ParamLimits

0xb161,	// (0x00017943) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0001bceb) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0001bceb) main_viewer_pane_g

0xb179,	// (0x0001795b) viewer_content_pane_ParamLimits

0xb179,	// (0x0001795b) viewer_content_pane

0x3cce,	// (0x000104b0) main_postcard_pane_g1_ParamLimits

0x3cce,	// (0x000104b0) main_postcard_pane_g1

0x3ce4,	// (0x000104c6) main_postcard_pane_g2_ParamLimits

0x3ce4,	// (0x000104c6) main_postcard_pane_g2

0x3cfa,	// (0x000104dc) main_postcard_pane_g3_ParamLimits

0x3cfa,	// (0x000104dc) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0001bcfc) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0001bcfc) main_postcard_pane_g

0x3d11,	// (0x000104f3) main_postcard_pane_g4

0xc4c3,	// (0x00018ca5) smil_status_volume_pane_g2

0x3d54,	// (0x00010536) postcard_pane_ParamLimits

0x3d54,	// (0x00010536) postcard_pane

0xb187,	// (0x00017969) postcard_pane_g1_ParamLimits

0xb187,	// (0x00017969) postcard_pane_g1

0x3d96,	// (0x00010578) postcard_pane_g2_ParamLimits

0x3d96,	// (0x00010578) postcard_pane_g2

0x3da2,	// (0x00010584) postcard_pane_g3_ParamLimits

0x3da2,	// (0x00010584) postcard_pane_g3

0xb195,	// (0x00017977) postcard_pane_g4_ParamLimits

0xb195,	// (0x00017977) postcard_pane_g4

0x3dae,	// (0x00010590) postcard_pane_g5_ParamLimits

0x3dae,	// (0x00010590) postcard_pane_g5

0x3dc3,	// (0x000105a5) postcard_pane_g6_ParamLimits

0x3dc3,	// (0x000105a5) postcard_pane_g6

0xb187,	// (0x00017969) postcard_pane_g7_ParamLimits

0xb187,	// (0x00017969) postcard_pane_g7

0x0006,

0xf527,	// (0x0001bd09) postcard_pane_g_ParamLimits

0xf527,	// (0x0001bd09) postcard_pane_g

0x3dd7,	// (0x000105b9) main_mp2_pane_g1_ParamLimits

0x3dd7,	// (0x000105b9) main_mp2_pane_g1

0x3de3,	// (0x000105c5) main_mp2_pane_g2_ParamLimits

0x3de3,	// (0x000105c5) main_mp2_pane_g2

0x3def,	// (0x000105d1) main_mp2_pane_g3_ParamLimits

0x3def,	// (0x000105d1) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0001bd18) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0001bd18) main_mp2_pane_g

0x3dfb,	// (0x000105dd) main_mp2_pane_t1_ParamLimits

0x3dfb,	// (0x000105dd) main_mp2_pane_t1

0x3e10,	// (0x000105f2) main_mp2_pane_t2_ParamLimits

0x3e10,	// (0x000105f2) main_mp2_pane_t2

0x3e22,	// (0x00010604) main_mp2_pane_t3_ParamLimits

0x3e22,	// (0x00010604) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0001bd1f) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0001bd1f) main_mp2_pane_t

0xb1a3,	// (0x00017985) pec_content_pane_ParamLimits

0xb1a3,	// (0x00017985) pec_content_pane

0xa6fc,	// (0x00016ede) scroll_pane_cp015

0xb1b5,	// (0x00017997) pec_attribute_pane_ParamLimits

0xb1b5,	// (0x00017997) pec_attribute_pane

0x3e34,	// (0x00010616) pec_content_pane_g1_ParamLimits

0x3e34,	// (0x00010616) pec_content_pane_g1

0xb1c5,	// (0x000179a7) pec_content_pane_t1_ParamLimits

0xb1c5,	// (0x000179a7) pec_content_pane_t1

0xb1d7,	// (0x000179b9) pec_content_pane_t2_ParamLimits

0xb1d7,	// (0x000179b9) pec_content_pane_t2

0x0001,

0xf544,	// (0x0001bd26) pec_content_pane_t_ParamLimits

0xf544,	// (0x0001bd26) pec_content_pane_t

0x3e42,	// (0x00010624) list_single_graphic_pane_cp01_ParamLimits

0x3e42,	// (0x00010624) list_single_graphic_pane_cp01

0xa0a8,	// (0x0001688a) bg_popup_sub_pane_cp04

0xb1e9,	// (0x000179cb) popup_mup_playback_window_g1

0xb1f5,	// (0x000179d7) popup_mup_playback_window_t1

0xb20a,	// (0x000179ec) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0001bd2b) popup_mup_playback_window_t

0xb241,	// (0x00017a23) main_image_pane_g1_ParamLimits

0xb241,	// (0x00017a23) main_image_pane_g1

0xb284,	// (0x00017a66) scroll_pane_cp018_ParamLimits

0xb284,	// (0x00017a66) scroll_pane_cp018

0xb29c,	// (0x00017a7e) scroll_pane_cp016_ParamLimits

0xb29c,	// (0x00017a7e) scroll_pane_cp016

0x3f12,	// (0x000106f4) smil2_image_pane_ParamLimits

0x3f12,	// (0x000106f4) smil2_image_pane

0x3f46,	// (0x00010728) smil2_root_pane_ParamLimits

0x3f46,	// (0x00010728) smil2_root_pane

0x3f7e,	// (0x00010760) smil2_text_pane_ParamLimits

0x3f7e,	// (0x00010760) smil2_text_pane

0x9e4d,	// (0x0001662f) bg_list_pane_cp06

0xb2d8,	// (0x00017aba) grid_radio_pane

0x9e4d,	// (0x0001662f) bg_popup_window_pane_cp06

0xb2e0,	// (0x00017ac2) main_fmradio_pane_t1

0xacd5,	// (0x000174b7) heading_pane_cp04

0xb2ee,	// (0x00017ad0) main_fmradio_pane_t2

0xc2c6,	// (0x00018aa8) popup_cale_lunar_info_window_g1

0xb2fc,	// (0x00017ade) main_fmradio_pane_t3

0xc2ce,	// (0x00018ab0) popup_cale_lunar_info_window_g2

0xb30a,	// (0x00017aec) main_fmradio_pane_t4

0x0001,

0xb318,	// (0x00017afa) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0001be06) popup_cale_lunar_info_window_g

0xf55e,	// (0x0001bd40) main_fmradio_pane_t

0xb326,	// (0x00017b08) wait_bar_pane_cp03

0xb32e,	// (0x00017b10) cell_fmradio_pane_ParamLimits

0xb32e,	// (0x00017b10) cell_fmradio_pane

0xb187,	// (0x00017969) cell_fmradio_pane_g1_ParamLimits

0xb187,	// (0x00017969) cell_fmradio_pane_g1

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp011

0xb341,	// (0x00017b23) poc_content_pane_ParamLimits

0xb341,	// (0x00017b23) poc_content_pane

0xb353,	// (0x00017b35) scroll_pane_cp019

0x3ffe,	// (0x000107e0) popup_call_poc_act_window_ParamLimits

0x3ffe,	// (0x000107e0) popup_call_poc_act_window

0x4022,	// (0x00010804) popup_call_poc_inact_window_ParamLimits

0x4022,	// (0x00010804) popup_call_poc_inact_window

0xf5fb,	// (0x0001bddd) bg_popup_call_poc_act_pane_g

0xc23e,	// (0x00018a20) bg_popup_call_poc_inact_pane_g1

0xc246,	// (0x00018a28) bg_popup_call_poc_inact_pane_g2

0xb35b,	// (0x00017b3d) popup_call_poc_act_window_g2

0xc24e,	// (0x00018a30) bg_popup_call_poc_inact_pane_g3

0xc256,	// (0x00018a38) bg_popup_call_poc_inact_pane_g4

0xc25e,	// (0x00018a40) bg_popup_call_poc_inact_pane_g5

0xb363,	// (0x00017b45) popup_call_poc_act_window_t1_ParamLimits

0xb363,	// (0x00017b45) popup_call_poc_act_window_t1

0xb38b,	// (0x00017b6d) popup_call_poc_act_window_t2_ParamLimits

0xb38b,	// (0x00017b6d) popup_call_poc_act_window_t2

0xb3b3,	// (0x00017b95) popup_call_poc_act_window_t3_ParamLimits

0xb3b3,	// (0x00017b95) popup_call_poc_act_window_t3

0xb3db,	// (0x00017bbd) popup_call_poc_act_window_t4_ParamLimits

0xb3db,	// (0x00017bbd) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0001bd4b) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0001bd4b) popup_call_poc_act_window_t

0xc266,	// (0x00018a48) bg_popup_call_poc_inact_pane_g6

0xc26e,	// (0x00018a50) bg_popup_call_poc_inact_pane_g7

0xc276,	// (0x00018a58) bg_popup_call_poc_inact_pane_g8

0xb3ed,	// (0x00017bcf) popup_call_poc_inact_window_g2

0xc27e,	// (0x00018a60) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0001bdca) bg_popup_call_poc_inact_pane_g

0xb3f5,	// (0x00017bd7) popup_call_poc_inact_window_t1_ParamLimits

0xb3f5,	// (0x00017bd7) popup_call_poc_inact_window_t1

0xb40a,	// (0x00017bec) popup_call_poc_inact_window_t2_ParamLimits

0xb40a,	// (0x00017bec) popup_call_poc_inact_window_t2

0xb41f,	// (0x00017c01) popup_call_poc_inact_window_t3_ParamLimits

0xb41f,	// (0x00017c01) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0001bd54) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0001bd54) popup_call_poc_inact_window_t

0xc436,	// (0x00018c18) context_pane_ParamLimits

0x484c,	// (0x0001102e) signal_pane_ParamLimits

0xaf52,	// (0x00017734) main_call2_pane

0xc424,	// (0x00018c06) popup_phob_thumbnail2_window_ParamLimits

0xc424,	// (0x00018c06) popup_phob_thumbnail2_window

0xb137,	// (0x00017919) aid_hotspot_pointer_arrow_pane

0xb13f,	// (0x00017921) aid_hotspot_pointer_hand_pane

0x4370,	// (0x00010b52) phob_pre_status_pane_g5

0x22e7,	// (0x0000eac9) cams_zoom_pane_ParamLimits

0x22f6,	// (0x0000ead8) image_vga_pane_ParamLimits

0x2310,	// (0x0000eaf2) main_camera_pane_g1_ParamLimits

0x2322,	// (0x0000eb04) main_camera_pane_g2_ParamLimits

0x2334,	// (0x0000eb16) main_camera_pane_g3_ParamLimits

0x2346,	// (0x0000eb28) main_camera_pane_g4_ParamLimits

0x2358,	// (0x0000eb3a) main_camera_pane_g5_ParamLimits

0x236a,	// (0x0000eb4c) main_camera_pane_g6_ParamLimits

0x237c,	// (0x0000eb5e) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0001ba53) main_camera_pane_g_ParamLimits

0x238e,	// (0x0000eb70) main_camera_pane_t1_ParamLimits

0x23a4,	// (0x0000eb86) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0001ba64) main_camera_pane_t_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_preview_window_pane_cp01

0xb434,	// (0x00017c16) popup_phob_thumbnail2_window_g1_ParamLimits

0xb434,	// (0x00017c16) popup_phob_thumbnail2_window_g1

0x9e4d,	// (0x0001662f) call2_cli_visual_pane

0x4056,	// (0x00010838) popup_call2_audio_conf_window_ParamLimits

0x4056,	// (0x00010838) popup_call2_audio_conf_window

0x4076,	// (0x00010858) popup_call2_audio_first_window_ParamLimits

0x4076,	// (0x00010858) popup_call2_audio_first_window

0x410c,	// (0x000108ee) popup_call2_audio_in_window_ParamLimits

0x410c,	// (0x000108ee) popup_call2_audio_in_window

0x4154,	// (0x00010936) popup_call2_audio_out_window_ParamLimits

0x4154,	// (0x00010936) popup_call2_audio_out_window

0x41be,	// (0x000109a0) popup_call2_audio_second_window_ParamLimits

0x41be,	// (0x000109a0) popup_call2_audio_second_window

0x4224,	// (0x00010a06) popup_call2_audio_wait_window_ParamLimits

0x4224,	// (0x00010a06) popup_call2_audio_wait_window

0x9e4d,	// (0x0001662f) bg_popup_call2_act_pane_cp03

0xa08a,	// (0x0001686c) list_conf_pane_cp

0xb440,	// (0x00017c22) popup_call2_audio_conf_window_t1

0xb44e,	// (0x00017c30) list_single_graphic_popup_conf2_pane_ParamLimits

0xb44e,	// (0x00017c30) list_single_graphic_popup_conf2_pane

0xad68,	// (0x0001754a) list_highlight_pane_cp04

0xb461,	// (0x00017c43) list_single_graphic_popup_conf2_pane_g1

0xad79,	// (0x0001755b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0001bd5b) list_single_graphic_popup_conf2_pane_g

0xb46b,	// (0x00017c4d) list_single_graphic_popup_conf2_pane_t1

0xb479,	// (0x00017c5b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb479,	// (0x00017c5b) bg_popup_call2_act_pane_cp01

0xb503,	// (0x00017ce5) call_type_pane_cp05_ParamLimits

0xb503,	// (0x00017ce5) call_type_pane_cp05

0xb557,	// (0x00017d39) popup_call2_audio_second_window_g1_ParamLimits

0xb557,	// (0x00017d39) popup_call2_audio_second_window_g1

0xb5ab,	// (0x00017d8d) popup_call2_audio_second_window_g2_ParamLimits

0xb5ab,	// (0x00017d8d) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0001bd60) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0001bd60) popup_call2_audio_second_window_g

0xb610,	// (0x00017df2) popup_call2_audio_second_window_t1_ParamLimits

0xb610,	// (0x00017df2) popup_call2_audio_second_window_t1

0xb6cb,	// (0x00017ead) popup_call2_audio_second_window_t2_ParamLimits

0xb6cb,	// (0x00017ead) popup_call2_audio_second_window_t2

0xb71e,	// (0x00017f00) popup_call2_audio_second_window_t3_ParamLimits

0xb71e,	// (0x00017f00) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0001bd67) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0001bd67) popup_call2_audio_second_window_t

0x9e4d,	// (0x0001662f) bg_popup_call2_in_pane_cp02

0x9e57,	// (0x00016639) call_type_pane_cp04

0x9e5f,	// (0x00016641) popup_call2_audio_wait_window_g1

0x9e67,	// (0x00016649) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001b940) popup_call2_audio_wait_window_g

0x9e6f,	// (0x00016651) popup_call2_audio_wait_window_t3

0xb811,	// (0x00017ff3) bg_popup_call2_act_pane_ParamLimits

0xb811,	// (0x00017ff3) bg_popup_call2_act_pane

0xb8d1,	// (0x000180b3) call_type_pane_cp03_ParamLimits

0xb8d1,	// (0x000180b3) call_type_pane_cp03

0xb935,	// (0x00018117) popup_call2_audio_first_window_g1_ParamLimits

0xb935,	// (0x00018117) popup_call2_audio_first_window_g1

0xb9a5,	// (0x00018187) popup_call2_audio_first_window_g2_ParamLimits

0xb9a5,	// (0x00018187) popup_call2_audio_first_window_g2

0xb023,	// (0x00017805) popup_call2_audio_first_window_g3_ParamLimits

0xb023,	// (0x00017805) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0001bd70) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0001bd70) popup_call2_audio_first_window_g

0xba83,	// (0x00018265) popup_call2_audio_first_window_t1_ParamLimits

0xba83,	// (0x00018265) popup_call2_audio_first_window_t1

0xbb86,	// (0x00018368) popup_call2_audio_first_window_t4_ParamLimits

0xbb86,	// (0x00018368) popup_call2_audio_first_window_t4

0xbc69,	// (0x0001844b) popup_call2_audio_first_window_t5_ParamLimits

0xbc69,	// (0x0001844b) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0001bd7b) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0001bd7b) popup_call2_audio_first_window_t

0xa0a0,	// (0x00016882) bg_popup_call2_act_pane_g1

0xc2d6,	// (0x00018ab8) popup_cale_lunar_info_window_t1

0xc2e4,	// (0x00018ac6) popup_cale_lunar_info_window_t2

0xc2f2,	// (0x00018ad4) popup_cale_lunar_info_window_t3

0x9e4d,	// (0x0001662f) bg_popup_call2_bubble_pane

0xbd6a,	// (0x0001854c) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd6a,	// (0x0001854c) bg_popup_call2_in_pane_cp01

0x9b29,	// (0x0001630b) call_type_pane_cp02

0xbdb2,	// (0x00018594) popup_call2_audio_out_window_g1_ParamLimits

0xbdb2,	// (0x00018594) popup_call2_audio_out_window_g1

0xbdde,	// (0x000185c0) popup_call2_audio_out_window_g2_ParamLimits

0xbdde,	// (0x000185c0) popup_call2_audio_out_window_g2

0xbe06,	// (0x000185e8) popup_call2_audio_out_window_g3_ParamLimits

0xbe06,	// (0x000185e8) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0001bd84) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0001bd84) popup_call2_audio_out_window_g

0xbe41,	// (0x00018623) popup_call2_audio_out_window_t1_ParamLimits

0xbe41,	// (0x00018623) popup_call2_audio_out_window_t1

0xbea0,	// (0x00018682) popup_call2_audio_out_window_t2_ParamLimits

0xbea0,	// (0x00018682) popup_call2_audio_out_window_t2

0xbef4,	// (0x000186d6) popup_call2_audio_out_window_t3_ParamLimits

0xbef4,	// (0x000186d6) popup_call2_audio_out_window_t3

0xbf0a,	// (0x000186ec) popup_call2_audio_out_window_t4_ParamLimits

0xbf0a,	// (0x000186ec) popup_call2_audio_out_window_t4

0xbf20,	// (0x00018702) popup_call2_audio_out_window_t5_ParamLimits

0xbf20,	// (0x00018702) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0001bd8d) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0001bd8d) popup_call2_audio_out_window_t

0xbf84,	// (0x00018766) bg_popup_call2_in_pane_ParamLimits

0xbf84,	// (0x00018766) bg_popup_call2_in_pane

0xbfe0,	// (0x000187c2) popup_call2_audio_in_window_g1_ParamLimits

0xbfe0,	// (0x000187c2) popup_call2_audio_in_window_g1

0xc018,	// (0x000187fa) popup_call2_audio_in_window_g2_ParamLimits

0xc018,	// (0x000187fa) popup_call2_audio_in_window_g2

0xc050,	// (0x00018832) popup_call2_audio_in_window_g3_ParamLimits

0xc050,	// (0x00018832) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0001bd9a) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0001bd9a) popup_call2_audio_in_window_g

0xc0a8,	// (0x0001888a) popup_call2_audio_in_window_t1_ParamLimits

0xc0a8,	// (0x0001888a) popup_call2_audio_in_window_t1

0xc128,	// (0x0001890a) popup_call2_audio_in_window_t2_ParamLimits

0xc128,	// (0x0001890a) popup_call2_audio_in_window_t2

0xc1a8,	// (0x0001898a) popup_call2_audio_in_window_t3_ParamLimits

0xc1a8,	// (0x0001898a) popup_call2_audio_in_window_t3

0xc1c2,	// (0x000189a4) popup_call2_audio_in_window_t4_ParamLimits

0xc1c2,	// (0x000189a4) popup_call2_audio_in_window_t4

0xc1d4,	// (0x000189b6) popup_call2_audio_in_window_t5_ParamLimits

0xc1d4,	// (0x000189b6) popup_call2_audio_in_window_t5

0xc1e9,	// (0x000189cb) popup_call2_audio_in_window_t6_ParamLimits

0xc1e9,	// (0x000189cb) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0001bda3) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0001bda3) popup_call2_audio_in_window_t

0xa0a0,	// (0x00016882) bg_popup_call2_in_pane_g1

0xc300,	// (0x00018ae2) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0001be0b) popup_cale_lunar_info_window_t

0xa0a8,	// (0x0001688a) bg_popup_call2_rect_pane_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_call2_rect_pane

0x9e4d,	// (0x0001662f) call2_cli_visual_graphic_pane

0x9e4d,	// (0x0001662f) call2_cli_visual_text_pane

0xc4d6,	// (0x00018cb8) smil_status_volume_pane_g3

0x0002,

0xa252,	// (0x00016a34) call2_cli_visual_graphic_pane_g1

0xa252,	// (0x00016a34) call2_cli_visual_graphic_pane_g2

0xa252,	// (0x00016a34) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0001bdb0) call2_cli_visual_graphic_pane_g

0xc1fe,	// (0x000189e0) bg_popup_call2_rect_pane_g1

0xa2fa,	// (0x00016adc) bg_popup_call2_rect_pane_g2

0xc206,	// (0x000189e8) bg_popup_call2_rect_pane_g3

0xc20e,	// (0x000189f0) bg_popup_call2_rect_pane_g4

0xc216,	// (0x000189f8) bg_popup_call2_rect_pane_g5

0xc21e,	// (0x00018a00) bg_popup_call2_rect_pane_g6

0xc226,	// (0x00018a08) bg_popup_call2_rect_pane_g7

0xc22e,	// (0x00018a10) bg_popup_call2_rect_pane_g8

0xc236,	// (0x00018a18) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001bdb7) bg_popup_call2_rect_pane_g

0xc23e,	// (0x00018a20) bg_popup_call2_bubble_pane_g1

0xc246,	// (0x00018a28) bg_popup_call2_bubble_pane_g2

0xc24e,	// (0x00018a30) bg_popup_call2_bubble_pane_g3

0xc256,	// (0x00018a38) bg_popup_call2_bubble_pane_g4

0xc25e,	// (0x00018a40) bg_popup_call2_bubble_pane_g5

0xc266,	// (0x00018a48) bg_popup_call2_bubble_pane_g6

0xc26e,	// (0x00018a50) bg_popup_call2_bubble_pane_g7

0xc276,	// (0x00018a58) bg_popup_call2_bubble_pane_g8

0xc27e,	// (0x00018a60) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0001bdca) bg_popup_call2_bubble_pane_g

0x1f58,	// (0x0000e73a) aid_cale_week_size_cell_pane

0x23bc,	// (0x0000eb9e) aid_cams_cif_uncrop_pane_ParamLimits

0x23bc,	// (0x0000eb9e) aid_cams_cif_uncrop_pane

0x2579,	// (0x0000ed5b) aid_cams_size_cell_ParamLimits

0x2579,	// (0x0000ed5b) aid_cams_size_cell

0x258d,	// (0x0000ed6f) grid_cams_pane_ParamLimits

0x25a7,	// (0x0000ed89) linegrid_cams_pane_ParamLimits

0x26c8,	// (0x0000eeaa) call_video_pane_t1

0x26dc,	// (0x0000eebe) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0001bab7) call_video_pane_t

0x2a84,	// (0x0000f266) aid_cale_month_size_cell_pane_ParamLimits

0x2a84,	// (0x0000f266) aid_cale_month_size_cell_pane

0xf672,	// (0x0001be54) smil_status_volume_pane_g

0xc4e3,	// (0x00018cc5) volume_smil_pane_ParamLimits

0x99d0,	// (0x000161b2) aid_popup2_width_pane

0x1eda,	// (0x0000e6bc) cell_qdial_pane_g4_ParamLimits

0x1eda,	// (0x0000e6bc) cell_qdial_pane_g4

0x35a8,	// (0x0000fd8a) aid_blid_cardinal_pane_ParamLimits

0x35b4,	// (0x0000fd96) aid_blid_destination_pane_ParamLimits

0x35b4,	// (0x0000fd96) aid_blid_destination_pane

0xa0a8,	// (0x0001688a) bg_popup_call_poc_act_pane_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_call_poc_act_pane

0xa0a8,	// (0x0001688a) bg_popup_call_poc_inact_pane_ParamLimits

0xa0a8,	// (0x0001688a) bg_popup_call_poc_inact_pane

0xc286,	// (0x00018a68) bg_popup_call_poc_act_pane_g1

0xc28e,	// (0x00018a70) bg_popup_call_poc_act_pane_g2

0xc296,	// (0x00018a78) bg_popup_call_poc_act_pane_g3

0xc256,	// (0x00018a38) bg_popup_call_poc_act_pane_g4

0xc25e,	// (0x00018a40) bg_popup_call_poc_act_pane_g5

0xc29e,	// (0x00018a80) bg_popup_call_poc_act_pane_g6

0xc26e,	// (0x00018a50) bg_popup_call_poc_act_pane_g7

0xc2a6,	// (0x00018a88) bg_popup_call_poc_act_pane_g8

0x9e4d,	// (0x0001662f) main_usb_pane

0xc3ff,	// (0x00018be1) popup_cale_lunar_info_window

0x291b,	// (0x0000f0fd) im_reading_pane_t1_ParamLimits

0xa654,	// (0x00016e36) list_im_pane_ParamLimits

0xa665,	// (0x00016e47) scroll_pane_cp07_ParamLimits

0x9e4d,	// (0x0001662f) grid_highlight_pane_cp012

0xa0a8,	// (0x0001688a) mup_scale_pane_ParamLimits

0xb187,	// (0x00017969) main_usb_pane_g1_ParamLimits

0xb187,	// (0x00017969) main_usb_pane_g1

0x4283,	// (0x00010a65) main_usb_pane_g2_ParamLimits

0x4283,	// (0x00010a65) main_usb_pane_g2

0x0001,

0xf612,	// (0x0001bdf4) main_usb_pane_g_ParamLimits

0xf612,	// (0x0001bdf4) main_usb_pane_g

0x4299,	// (0x00010a7b) main_usb_pane_t1_ParamLimits

0x4299,	// (0x00010a7b) main_usb_pane_t1

0x42ab,	// (0x00010a8d) main_usb_pane_t2_ParamLimits

0x42ab,	// (0x00010a8d) main_usb_pane_t2

0x42bd,	// (0x00010a9f) main_usb_pane_t3_ParamLimits

0x42bd,	// (0x00010a9f) main_usb_pane_t3

0x42cf,	// (0x00010ab1) main_usb_pane_t4_ParamLimits

0x42cf,	// (0x00010ab1) main_usb_pane_t4

0x42e1,	// (0x00010ac3) main_usb_pane_t5_ParamLimits

0x42e1,	// (0x00010ac3) main_usb_pane_t5

0x42f3,	// (0x00010ad5) main_usb_pane_t6_ParamLimits

0x42f3,	// (0x00010ad5) main_usb_pane_t6

0x0005,

0xf617,	// (0x0001bdf9) main_usb_pane_t_ParamLimits

0x354d,	// (0x0000fd2f) aid_text_placing

0x3556,	// (0x0000fd38) main_location2_pane_t1_ParamLimits

0x356a,	// (0x0000fd4c) main_location2_pane_t2_ParamLimits

0x357e,	// (0x0000fd60) main_location2_pane_t3_ParamLimits

0x3594,	// (0x0000fd76) main_location2_pane_t4_ParamLimits

0x3594,	// (0x0000fd76) main_location2_pane_t4

0xf436,	// (0x0001bc18) main_location2_pane_t_ParamLimits

0xa0ec,	// (0x000168ce) find_pinb_pane_g2_ParamLimits

0xa0ec,	// (0x000168ce) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0001b966) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0001b966) find_pinb_pane_g

0xa0f8,	// (0x000168da) find_pinb_pane_t1_ParamLimits

0xa10a,	// (0x000168ec) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0001b96b) find_pinb_pane_t_ParamLimits

0x9e4d,	// (0x0001662f) main_call3_pane

0x2d7c,	// (0x0000f55e) cale_month_day_heading_pane_t1_ParamLimits

0x2dda,	// (0x0000f5bc) cale_month_day_heading_pane_t2_ParamLimits

0x2e3f,	// (0x0000f621) cale_month_day_heading_pane_t3_ParamLimits

0x2ea4,	// (0x0000f686) cale_month_day_heading_pane_t4_ParamLimits

0x2f09,	// (0x0000f6eb) cale_month_day_heading_pane_t5_ParamLimits

0x2f6e,	// (0x0000f750) cale_month_day_heading_pane_t6_ParamLimits

0x2fd3,	// (0x0000f7b5) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0001baef) cale_month_day_heading_pane_t_ParamLimits

0xa8db,	// (0x000170bd) smil_status_volume_pane

0x3d72,	// (0x00010554) postcard_address_pane_ParamLimits

0x3d72,	// (0x00010554) postcard_address_pane

0x3d84,	// (0x00010566) postcard_message_pane_ParamLimits

0x3d84,	// (0x00010566) postcard_message_pane

0x425e,	// (0x00010a40) call2_cli_visual_pane_t1_ParamLimits

0x425e,	// (0x00010a40) call2_cli_visual_pane_t1

0x4a7a,	// (0x0001125c) postcard_message_pane_t1_ParamLimits

0x4a7a,	// (0x0001125c) postcard_message_pane_t1

0x4a63,	// (0x00011245) postcard_address_pane_t1_ParamLimits

0x4a63,	// (0x00011245) postcard_address_pane_t1

0x4a4f,	// (0x00011231) popup_call3_audio_in_window_ParamLimits

0x4a4f,	// (0x00011231) popup_call3_audio_in_window

0x48de,	// (0x000110c0) bg_popup_call3_in_pane_ParamLimits

0x48de,	// (0x000110c0) bg_popup_call3_in_pane

0x4950,	// (0x00011132) popup_call3_audio_in_window_g1_ParamLimits

0x4950,	// (0x00011132) popup_call3_audio_in_window_g1

0x4970,	// (0x00011152) popup_call3_audio_in_window_g2_ParamLimits

0x4970,	// (0x00011152) popup_call3_audio_in_window_g2

0x4990,	// (0x00011172) popup_call3_audio_in_window_g3_ParamLimits

0x4990,	// (0x00011172) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0001be5b) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0001be5b) popup_call3_audio_in_window_g

0x49c1,	// (0x000111a3) popup_call3_audio_in_window_t1_ParamLimits

0x49c1,	// (0x000111a3) popup_call3_audio_in_window_t1

0x49ff,	// (0x000111e1) popup_call3_audio_in_window_t2_ParamLimits

0x49ff,	// (0x000111e1) popup_call3_audio_in_window_t2

0x4a3d,	// (0x0001121f) popup_call3_audio_in_window_t3_ParamLimits

0x4a3d,	// (0x0001121f) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0001be64) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0001be64) popup_call3_audio_in_window_t

0xaf52,	// (0x00017734) bg_popup_call3_rect_pane

0xc1fe,	// (0x000189e0) bg_popup_call3_rect_pane_g1

0xa2fa,	// (0x00016adc) bg_popup_call3_rect_pane_g2

0xc206,	// (0x000189e8) bg_popup_call3_rect_pane_g3

0xc20e,	// (0x000189f0) bg_popup_call3_rect_pane_g4

0xc216,	// (0x000189f8) bg_popup_call3_rect_pane_g5

0xc21e,	// (0x00018a00) bg_popup_call3_rect_pane_g6

0xc226,	// (0x00018a08) bg_popup_call3_rect_pane_g7

0x3970,	// (0x00010152) mup_visualizer_osc_pane

0xb031,	// (0x00017813) mup_visualizer_spec_pane

0x490e,	// (0x000110f0) call3_video_qcif_pane_ParamLimits

0x490e,	// (0x000110f0) call3_video_qcif_pane

0x491f,	// (0x00011101) call3_video_qcif_uncrop_pane_ParamLimits

0x491f,	// (0x00011101) call3_video_qcif_uncrop_pane

0x492b,	// (0x0001110d) call3_video_subqcif_pane_ParamLimits

0x492b,	// (0x0001110d) call3_video_subqcif_pane

0x493f,	// (0x00011121) call3_video_subqcif_uncrop_pane_ParamLimits

0x493f,	// (0x00011121) call3_video_subqcif_uncrop_pane

0x49b0,	// (0x00011192) popup_call3_audio_in_window_g4_ParamLimits

0x49b0,	// (0x00011192) popup_call3_audio_in_window_g4

0x48cd,	// (0x000110af) mup_spec_half_pane

0x48d6,	// (0x000110b8) mup_spec_half_pane_cp

0xc496,	// (0x00018c78) mup_osc_middle_pane

0xc49f,	// (0x00018c81) mup_visualizer_osc_pane_g1

0x48ad,	// (0x0001108f) mup_spec_bar_pane_ParamLimits

0x48ad,	// (0x0001108f) mup_spec_bar_pane

0xc483,	// (0x00018c65) mup_spec_bar_pane_g1

0xc48d,	// (0x00018c6f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001be4f) mup_spec_bar_pane_g

0x1f58,	// (0x0000e73a) aid_cale_week_size_cell_pane_ParamLimits

0x1f6b,	// (0x0000e74d) bg_cale_heading_pane_ParamLimits

0xa384,	// (0x00016b66) bg_cale_pane_cp01_ParamLimits

0x1f83,	// (0x0000e765) cale_week_corner_pane_ParamLimits

0x1f94,	// (0x0000e776) cale_week_day_heading_pane_ParamLimits

0x1fac,	// (0x0000e78e) cale_week_scroll_pane_g1_ParamLimits

0x1fc1,	// (0x0000e7a3) cale_week_scroll_pane_g2_ParamLimits

0x1fd2,	// (0x0000e7b4) cale_week_scroll_pane_g3_ParamLimits

0x1fe3,	// (0x0000e7c5) cale_week_scroll_pane_g4_ParamLimits

0x1ff4,	// (0x0000e7d6) cale_week_scroll_pane_g5_ParamLimits

0x2005,	// (0x0000e7e7) cale_week_scroll_pane_g6_ParamLimits

0x2016,	// (0x0000e7f8) cale_week_scroll_pane_g7_ParamLimits

0x2027,	// (0x0000e809) cale_week_scroll_pane_g8_ParamLimits

0x2038,	// (0x0000e81a) cale_week_scroll_pane_g9_ParamLimits

0x2049,	// (0x0000e82b) cale_week_scroll_pane_g10_ParamLimits

0x205a,	// (0x0000e83c) cale_week_scroll_pane_g11_ParamLimits

0x206b,	// (0x0000e84d) cale_week_scroll_pane_g12_ParamLimits

0x207c,	// (0x0000e85e) cale_week_scroll_pane_g13_ParamLimits

0x208d,	// (0x0000e86f) cale_week_scroll_pane_g14_ParamLimits

0x209e,	// (0x0000e880) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0001b9f7) cale_week_scroll_pane_g_ParamLimits

0x20af,	// (0x0000e891) cale_week_time_pane_ParamLimits

0x20c0,	// (0x0000e8a2) grid_cale_week_pane_ParamLimits

0xa39d,	// (0x00016b7f) listscroll_cale_week_pane_t1

0x20d3,	// (0x0000e8b5) scroll_pane_cp08_ParamLimits

0x2ac5,	// (0x0000f2a7) cale_month_corner_pane_ParamLimits

0xa87b,	// (0x0001705d) cale_month_pane_t1

0x2d45,	// (0x0000f527) cale_month_week_pane_ParamLimits

0x33b2,	// (0x0000fb94) popup_call_status_window_g1_ParamLimits

0x33c6,	// (0x0000fba8) popup_call_status_window_g2_ParamLimits

0x33da,	// (0x0000fbbc) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0001bb9f) popup_call_status_window_g_ParamLimits

0xac56,	// (0x00017438) aid_call2_pane

0x3bda,	// (0x000103bc) msg_header_pane_g1

0x3d72,	// (0x00010554) postcard_address2_pane_ParamLimits

0x3d72,	// (0x00010554) postcard_address2_pane

0x3d84,	// (0x00010566) postcard_message2_pane_ParamLimits

0x3d84,	// (0x00010566) postcard_message2_pane

0x485a,	// (0x0001103c) message2_row_pane_ParamLimits

0x485a,	// (0x0001103c) message2_row_pane

0x4879,	// (0x0001105b) address2_row_pane_ParamLimits

0x4879,	// (0x0001105b) address2_row_pane

0xc451,	// (0x00018c33) postcard_message2_row_pane_g1

0xc459,	// (0x00018c3b) postcard_message2_row_pane_t1

0xc451,	// (0x00018c33) address2_row_pane_g1

0xc459,	// (0x00018c3b) address2_row_pane_t1

0xa401,	// (0x00016be3) aid_size_cell_vorec

0x9e4d,	// (0x0001662f) main_rss_pane

0x488c,	// (0x0001106e) rss_list_single_pane_ParamLimits

0x488c,	// (0x0001106e) rss_list_single_pane

0xc467,	// (0x00018c49) rss_list_single_pane_t1

0xc475,	// (0x00018c57) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0001be4a) rss_list_single_pane_t

0x9e4d,	// (0x0001662f) main_camera2_pane

0x9e4d,	// (0x0001662f) main_video2_pane

0x4af3,	// (0x000112d5) cams_zoom_pane_cp2_ParamLimits

0x4af3,	// (0x000112d5) cams_zoom_pane_cp2

0x4b13,	// (0x000112f5) image2_vga_pane_ParamLimits

0x4b13,	// (0x000112f5) image2_vga_pane

0x4b64,	// (0x00011346) main_camera2_pane_g1_ParamLimits

0x4b64,	// (0x00011346) main_camera2_pane_g1

0x4b84,	// (0x00011366) main_camera2_pane_g2_ParamLimits

0x4b84,	// (0x00011366) main_camera2_pane_g2

0x4ba4,	// (0x00011386) main_camera2_pane_g3_ParamLimits

0x4ba4,	// (0x00011386) main_camera2_pane_g3

0x4bc4,	// (0x000113a6) main_camera2_pane_g4_ParamLimits

0x4bc4,	// (0x000113a6) main_camera2_pane_g4

0x4be4,	// (0x000113c6) main_camera2_pane_g5_ParamLimits

0x4be4,	// (0x000113c6) main_camera2_pane_g5

0x4c04,	// (0x000113e6) main_camera2_pane_g6_ParamLimits

0x4c04,	// (0x000113e6) main_camera2_pane_g6

0x4c24,	// (0x00011406) main_camera2_pane_g7_ParamLimits

0x4c24,	// (0x00011406) main_camera2_pane_g7

0x4c44,	// (0x00011426) main_camera2_pane_g8_ParamLimits

0x4c44,	// (0x00011426) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0001be6b) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0001be6b) main_camera2_pane_g

0x4c84,	// (0x00011466) main_camera2_pane_t1_ParamLimits

0x4c84,	// (0x00011466) main_camera2_pane_t1

0x4cb9,	// (0x0001149b) main_camera2_pane_t2_ParamLimits

0x4cb9,	// (0x0001149b) main_camera2_pane_t2

0x4cdf,	// (0x000114c1) main_camera2_pane_t3_ParamLimits

0x4cdf,	// (0x000114c1) main_camera2_pane_t3

0x4d3d,	// (0x0001151f) main_camera2_pane_t4_ParamLimits

0x4d3d,	// (0x0001151f) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0001be7e) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0001be7e) main_camera2_pane_t

0x4dcf,	// (0x000115b1) cams_zoom_pane_cp4_ParamLimits

0x4dcf,	// (0x000115b1) cams_zoom_pane_cp4

0x4de5,	// (0x000115c7) image2_cif_pane_ParamLimits

0x4de5,	// (0x000115c7) image2_cif_pane

0x4e10,	// (0x000115f2) image2_subqcif_pane_ParamLimits

0x4e10,	// (0x000115f2) image2_subqcif_pane

0x4e2a,	// (0x0001160c) main_video2_pane_g1_ParamLimits

0x4e2a,	// (0x0001160c) main_video2_pane_g1

0x4e44,	// (0x00011626) main_video2_pane_g2_ParamLimits

0x4e44,	// (0x00011626) main_video2_pane_g2

0x4e5a,	// (0x0001163c) main_video2_pane_g3_ParamLimits

0x4e5a,	// (0x0001163c) main_video2_pane_g3

0x4e70,	// (0x00011652) main_video2_pane_g4_ParamLimits

0x4e70,	// (0x00011652) main_video2_pane_g4

0x4e86,	// (0x00011668) main_video2_pane_g5_ParamLimits

0x4e86,	// (0x00011668) main_video2_pane_g5

0x4e9c,	// (0x0001167e) main_video2_pane_g6_ParamLimits

0x4e9c,	// (0x0001167e) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0001be8d) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0001be8d) main_video2_pane_g

0x4eb6,	// (0x00011698) main_video2_pane_t1_ParamLimits

0x4eb6,	// (0x00011698) main_video2_pane_t1

0x4eda,	// (0x000116bc) main_video2_pane_t2_ParamLimits

0x4eda,	// (0x000116bc) main_video2_pane_t2

0x4f28,	// (0x0001170a) main_video2_pane_t3_ParamLimits

0x4f28,	// (0x0001170a) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0001be9a) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0001be9a) main_video2_pane_t

0x43b0,	// (0x00010b92) call_muted_g2

0x0001,

0xf65a,	// (0x0001be3c) call_muted_g

0x9e4d,	// (0x0001662f) main_mup2_pane

0x4f70,	// (0x00011752) main_mup2_pane_g1_ParamLimits

0x4f70,	// (0x00011752) main_mup2_pane_g1

0x4f7c,	// (0x0001175e) main_mup2_pane_g2_ParamLimits

0x4f7c,	// (0x0001175e) main_mup2_pane_g2

0xc607,	// (0x00018de9) main_mup_pane_g13_cp1

0xc60f,	// (0x00018df1) mup_volume_pane_cp1

0x4f98,	// (0x0001177a) main_mup2_pane_g4_ParamLimits

0x4f98,	// (0x0001177a) main_mup2_pane_g4

0x4faa,	// (0x0001178c) main_mup2_pane_g5_ParamLimits

0x4faa,	// (0x0001178c) main_mup2_pane_g5

0x4fbc,	// (0x0001179e) main_mup2_pane_g6_ParamLimits

0x4fbc,	// (0x0001179e) main_mup2_pane_g6

0x4fce,	// (0x000117b0) main_mup2_pane_g7_ParamLimits

0x4fce,	// (0x000117b0) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0001bea1) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0001bea1) main_mup2_pane_g

0x4fe6,	// (0x000117c8) main_mup2_pane_t1_ParamLimits

0x4fe6,	// (0x000117c8) main_mup2_pane_t1

0x4ffc,	// (0x000117de) main_mup2_pane_t2_ParamLimits

0x4ffc,	// (0x000117de) main_mup2_pane_t2

0x5012,	// (0x000117f4) main_mup2_pane_t3_ParamLimits

0x5012,	// (0x000117f4) main_mup2_pane_t3

0x5028,	// (0x0001180a) main_mup2_pane_t4_ParamLimits

0x5028,	// (0x0001180a) main_mup2_pane_t4

0x5040,	// (0x00011822) main_mup2_pane_t5_ParamLimits

0x5040,	// (0x00011822) main_mup2_pane_t5

0x5058,	// (0x0001183a) main_mup2_pane_t6_ParamLimits

0x5058,	// (0x0001183a) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0001beb0) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0001beb0) main_mup2_pane_t

0x5088,	// (0x0001186a) mup2_visualizer_pane_ParamLimits

0x5088,	// (0x0001186a) mup2_visualizer_pane

0x50b6,	// (0x00011898) mup_progress_pane_cp_ParamLimits

0x50b6,	// (0x00011898) mup_progress_pane_cp

0xc5e9,	// (0x00018dcb) mup_volume_pane_cp_ParamLimits

0xc5e9,	// (0x00018dcb) mup_volume_pane_cp

0x50ca,	// (0x000118ac) mup2_visualizer_pane_g1_ParamLimits

0x50ca,	// (0x000118ac) mup2_visualizer_pane_g1

0xc528,	// (0x00018d0a) mup2_visualizer_pane_g2_ParamLimits

0xc528,	// (0x00018d0a) mup2_visualizer_pane_g2

0x50e1,	// (0x000118c3) mup2_visualizer_pane_g3_ParamLimits

0x50e1,	// (0x000118c3) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0001bebd) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0001bebd) mup2_visualizer_pane_g

0xb2d0,	// (0x00017ab2) aid_size_cell_fmradio

0x4562,	// (0x00010d44) aid_height_parent_landcape

0xa6e3,	// (0x00016ec5) wml_content_pane_cp

0xa6eb,	// (0x00016ecd) wml_tabs_pane

0xa6f4,	// (0x00016ed6) popup_wml_miniature_window

0xa6fc,	// (0x00016ede) scroll_pane_cp021

0xa710,	// (0x00016ef2) wml_content_pane_comp8

0x9e4d,	// (0x0001662f) bg_popup_sub_pane_cp05

0xc546,	// (0x00018d28) popup_wml_miniature_window_g1

0xc54e,	// (0x00018d30) wml_miniature_view_pane

0x50ed,	// (0x000118cf) aid_size_wml_view

0x50f5,	// (0x000118d7) wml_miniature_view_pane_g1

0x50fe,	// (0x000118e0) wml_miniature_view_pane_g2

0x5107,	// (0x000118e9) wml_miniature_view_pane_g3

0x510f,	// (0x000118f1) wml_miniature_view_pane_g4

0x5117,	// (0x000118f9) wml_miniature_view_pane_g5

0x511f,	// (0x00011901) wml_miniature_view_pane_g6

0x5127,	// (0x00011909) wml_miniature_view_pane_g7

0x512f,	// (0x00011911) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0001bec4) wml_miniature_view_pane_g

0xc556,	// (0x00018d38) background_graphic_ParamLimits

0xc556,	// (0x00018d38) background_graphic

0xc562,	// (0x00018d44) wml_tabs_2_pane

0xc56b,	// (0x00018d4d) wml_tabs_3_pane_ParamLimits

0xc56b,	// (0x00018d4d) wml_tabs_3_pane

0xc57d,	// (0x00018d5f) wml_tabs_4_pane_ParamLimits

0xc57d,	// (0x00018d5f) wml_tabs_4_pane

0xc593,	// (0x00018d75) wml_tabs_5_pane_ParamLimits

0xc593,	// (0x00018d75) wml_tabs_5_pane

0xc5ad,	// (0x00018d8f) wml_tabs_pane_g2_ParamLimits

0xc5ad,	// (0x00018d8f) wml_tabs_pane_g2

0xc5c1,	// (0x00018da3) wml_tabs_pane_g3_ParamLimits

0xc5c1,	// (0x00018da3) wml_tabs_pane_g3

0x5137,	// (0x00011919) wml_tabs_2_active_pane_ParamLimits

0x5137,	// (0x00011919) wml_tabs_2_active_pane

0x514b,	// (0x0001192d) wml_tabs_2_passive_pane_ParamLimits

0x514b,	// (0x0001192d) wml_tabs_2_passive_pane

0x515f,	// (0x00011941) wml_tabs_3_active_pane_cp_ParamLimits

0x515f,	// (0x00011941) wml_tabs_3_active_pane_cp

0x5174,	// (0x00011956) wml_tabs_3_passive_pane_ParamLimits

0x5174,	// (0x00011956) wml_tabs_3_passive_pane

0x5187,	// (0x00011969) wml_tabs_3_passive_pane_cp_ParamLimits

0x5187,	// (0x00011969) wml_tabs_3_passive_pane_cp

0x519e,	// (0x00011980) tabs_4_active_pane

0x51a6,	// (0x00011988) tabs_4_passive_pane

0x51b0,	// (0x00011992) tabs_4_passive_pane_cp

0x51b8,	// (0x0001199a) tabs_4_passive_pane_cp2

0x427b,	// (0x00010a5d) aid_height_text

0x3942,	// (0x00010124) mup_volume_cont_pane_ParamLimits

0x3942,	// (0x00010124) mup_volume_cont_pane

0x1bbd,	// (0x0000e39f) aid_size_cell_pinb

0xa0d8,	// (0x000168ba) aid_size_list_pinb

0x50a2,	// (0x00011884) mup2_volume_cont_pane_ParamLimits

0x50a2,	// (0x00011884) mup2_volume_cont_pane

0xc5d5,	// (0x00018db7) mup2_volume_cont_pane_g1_ParamLimits

0xc5d5,	// (0x00018db7) mup2_volume_cont_pane_g1

0x18a0,	// (0x0000e082) aid_size_cell_touch_ParamLimits

0x18a0,	// (0x0000e082) aid_size_cell_touch

0x1aac,	// (0x0000e28e) touch_pane_ParamLimits

0x1aac,	// (0x0000e28e) touch_pane

0x99be,	// (0x000161a0) main_rss2_pane

0xc617,	// (0x00018df9) listscroll_rss2_pane

0xc620,	// (0x00018e02) rss2_navigation_pane

0xc628,	// (0x00018e0a) list_rss2_pane

0xae05,	// (0x000175e7) scroll_pane_cp22

0xc630,	// (0x00018e12) rss2_navigation_pane_g1

0xc639,	// (0x00018e1b) rss2_navigation_pane_g2

0xc641,	// (0x00018e23) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0001bed5) rss2_navigation_pane_g

0xc649,	// (0x00018e2b) rss2_navigation_pane_t1

0x51c2,	// (0x000119a4) rss2_list_single_pane_ParamLimits

0x51c2,	// (0x000119a4) rss2_list_single_pane

0xc657,	// (0x00018e39) rss2_list_single_pane_t2

0xc665,	// (0x00018e47) rss2_list_single_pane_t3_ParamLimits

0xc665,	// (0x00018e47) rss2_list_single_pane_t3

0xc682,	// (0x00018e64) rss2_list_single_pane_t4

0x318f,	// (0x0000f971) smil_status_pane_g1

0x9a2e,	// (0x00016210) main_image2_pane_ParamLimits

0x9a2e,	// (0x00016210) main_image2_pane

0x4c64,	// (0x00011446) main_camera2_pane_g9_ParamLimits

0x4c64,	// (0x00011446) main_camera2_pane_g9

0x4d92,	// (0x00011574) main_camera2_pane_t5_ParamLimits

0x4d92,	// (0x00011574) main_camera2_pane_t5

0xc4f8,	// (0x00018cda) main_camera2_pane_t6_ParamLimits

0xc4f8,	// (0x00018cda) main_camera2_pane_t6

0x51da,	// (0x000119bc) main_image2_pane_g1_ParamLimits

0x51da,	// (0x000119bc) main_image2_pane_g1

0x3fb4,	// (0x00010796) smil2_video_pane_ParamLimits

0x3fb4,	// (0x00010796) smil2_video_pane

0x99dc,	// (0x000161be) aid_zoom_text_primary_cp

0x9a24,	// (0x00016206) popup_preview_fixed_window

0xa64c,	// (0x00016e2e) im_reading_pane_g1

0x4adb,	// (0x000112bd) cams2_bc_adjust_pane_cp_ParamLimits

0x4adb,	// (0x000112bd) cams2_bc_adjust_pane_cp

0x4dc1,	// (0x000115a3) cams2_bc_adjust_pane_ParamLimits

0x4dc1,	// (0x000115a3) cams2_bc_adjust_pane

0xc690,	// (0x00018e72) cams2_bc_adjust_pane_g1

0xc698,	// (0x00018e7a) cams2_slider_pane

0xc6a1,	// (0x00018e83) cams2_slider_pane_g1

0xc6aa,	// (0x00018e8c) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0001bedc) cams2_slider_pane_g

0x1c7c,	// (0x0000e45e) calc_display_pane_ParamLimits

0x1ca2,	// (0x0000e484) calc_paper_pane_ParamLimits

0x1cc5,	// (0x0000e4a7) grid_calc_pane_ParamLimits

0xacb8,	// (0x0001749a) popup_clock_digital_window_t1_ParamLimits

0xb26d,	// (0x00017a4f) main_image_pane_t1

0x1c5e,	// (0x0000e440) aid_size_cell_calc_ParamLimits

0x1c5e,	// (0x0000e440) aid_size_cell_calc

0x45a8,	// (0x00010d8a) popup_blid_sat_info2_window_ParamLimits

0x45a8,	// (0x00010d8a) popup_blid_sat_info2_window

0xc6cc,	// (0x00018eae) aid_size_cell_blid

0xc6d4,	// (0x00018eb6) bg_popup_window_pane_cp07

0xc6f7,	// (0x00018ed9) grid_popup_blid_pane

0xc701,	// (0x00018ee3) heading_pane_cp05_ParamLimits

0xc701,	// (0x00018ee3) heading_pane_cp05

0xc7cb,	// (0x00018fad) cell_popup_blid_pane_ParamLimits

0xc7cb,	// (0x00018fad) cell_popup_blid_pane

0xc7f1,	// (0x00018fd3) cell_popup_blid_pane_g1

0xc7f9,	// (0x00018fdb) cell_popup_blid_pane_t1

0x5072,	// (0x00011854) mup2_indicator_pane_ParamLimits

0x5072,	// (0x00011854) mup2_indicator_pane

0xaf52,	// (0x00017734) mup2_visualizer_osc_pane

0xc534,	// (0x00018d16) mup2_visualizer_spec_pane_ParamLimits

0xc534,	// (0x00018d16) mup2_visualizer_spec_pane

0x51f0,	// (0x000119d2) mup2_spec_half_pane

0x51f9,	// (0x000119db) mup2_spec_half_pane_cp

0x5201,	// (0x000119e3) mup2_spec_bar_pane_ParamLimits

0x5201,	// (0x000119e3) mup2_spec_bar_pane

0xc483,	// (0x00018c65) mup2_spec_bar_pane_g1

0xc48d,	// (0x00018c6f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001be4f) mup2_spec_bar_pane_g

0x5221,	// (0x00011a03) mup2_osc_middle_pane

0xc49f,	// (0x00018c81) mup2_visualizer_osc_pane_g1

0x9a5c,	// (0x0001623e) popup_number_entry_window_t1_ParamLimits

0x9a6f,	// (0x00016251) popup_number_entry_window_t2_ParamLimits

0x9a81,	// (0x00016263) popup_number_entry_window_t3_ParamLimits

0x1afe,	// (0x0000e2e0) popup_number_entry_window_t5_ParamLimits

0x1afe,	// (0x0000e2e0) popup_number_entry_window_t5

0xf12f,	// (0x0001b911) popup_number_entry_window_t_ParamLimits

0x9a93,	// (0x00016275) text_title_cp2_ParamLimits

0xb147,	// (0x00017929) aid_hotspot_pointer_text2_pane

0xb16d,	// (0x0001794f) main_viewer_pane_g9_ParamLimits

0xb16d,	// (0x0001794f) main_viewer_pane_g9

0xa87b,	// (0x0001705d) cale_month_pane_t1_ParamLimits

0xa910,	// (0x000170f2) bg_cale_pane_ParamLimits

0xa928,	// (0x0001710a) list_cale_pane_ParamLimits

0xa39d,	// (0x00016b7f) listscroll_cale_day_pane_t1

0xa939,	// (0x0001711b) scroll_pane_cp09_ParamLimits

0x3978,	// (0x0001015a) main_mup_eq_pane_t1_ParamLimits

0x3978,	// (0x0001015a) main_mup_eq_pane_t1

0x3992,	// (0x00010174) main_mup_eq_pane_t2_ParamLimits

0x3992,	// (0x00010174) main_mup_eq_pane_t2

0x39ac,	// (0x0001018e) main_mup_eq_pane_t3_ParamLimits

0x39ac,	// (0x0001018e) main_mup_eq_pane_t3

0x39c8,	// (0x000101aa) main_mup_eq_pane_t4_ParamLimits

0x39c8,	// (0x000101aa) main_mup_eq_pane_t4

0x39e4,	// (0x000101c6) main_mup_eq_pane_t5_ParamLimits

0x39e4,	// (0x000101c6) main_mup_eq_pane_t5

0x3a00,	// (0x000101e2) main_mup_eq_pane_t6_ParamLimits

0x3a00,	// (0x000101e2) main_mup_eq_pane_t6

0x3a14,	// (0x000101f6) main_mup_eq_pane_t7_ParamLimits

0x3a14,	// (0x000101f6) main_mup_eq_pane_t7

0x3a28,	// (0x0001020a) main_mup_eq_pane_t8_ParamLimits

0x3a28,	// (0x0001020a) main_mup_eq_pane_t8

0x3a3c,	// (0x0001021e) main_mup_eq_pane_t9_ParamLimits

0x3a3c,	// (0x0001021e) main_mup_eq_pane_t9

0x3a56,	// (0x00010238) main_mup_eq_pane_t10_ParamLimits

0x3a56,	// (0x00010238) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0001bc9e) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0001bc9e) main_mup_eq_pane_t

0x3b05,	// (0x000102e7) mup_equalizer_pane_cp5_ParamLimits

0x3b19,	// (0x000102fb) mup_equalizer_pane_cp6_ParamLimits

0x3b2d,	// (0x0001030f) mup_equalizer_pane_cp7_ParamLimits

0x99be,	// (0x000161a0) main_gallery_pane

0xc4a8,	// (0x00018c8a) smil2_volume_pane

0xc4b0,	// (0x00018c92) smil_status_volume_pane_g1_ParamLimits

0xc4c3,	// (0x00018ca5) smil_status_volume_pane_g2_ParamLimits

0xc4d6,	// (0x00018cb8) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0001be54) smil_status_volume_pane_g_ParamLimits

0xc6d4,	// (0x00018eb6) bg_popup_window_pane_cp07_ParamLimits

0xc6e2,	// (0x00018ec4) blid_firmament_pane

0x522a,	// (0x00011a0c) aid_size_cell_gallery_ParamLimits

0x522a,	// (0x00011a0c) aid_size_cell_gallery

0x5240,	// (0x00011a22) grid_gallery_pane_ParamLimits

0x5240,	// (0x00011a22) grid_gallery_pane

0x5259,	// (0x00011a3b) cell_gallery_pane_ParamLimits

0x5259,	// (0x00011a3b) cell_gallery_pane

0xc807,	// (0x00018fe9) bg_cell_gallery_focus_pane_ParamLimits

0xc807,	// (0x00018fe9) bg_cell_gallery_focus_pane

0xc819,	// (0x00018ffb) cell_gallery_pane_g1_ParamLimits

0xc819,	// (0x00018ffb) cell_gallery_pane_g1

0x52a2,	// (0x00011a84) cell_gallery_pane_g2_ParamLimits

0x52a2,	// (0x00011a84) cell_gallery_pane_g2

0x52af,	// (0x00011a91) cell_gallery_pane_g3_ParamLimits

0x52af,	// (0x00011a91) cell_gallery_pane_g3

0xc825,	// (0x00019007) cell_gallery_pane_g4_ParamLimits

0xc825,	// (0x00019007) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0001bf02) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0001bf02) cell_gallery_pane_g

0xc831,	// (0x00019013) bg_cell_gallery_focus_pane_g1

0xc839,	// (0x0001901b) bg_cell_gallery_focus_pane_g2

0xc841,	// (0x00019023) bg_cell_gallery_focus_pane_g3

0xc849,	// (0x0001902b) bg_cell_gallery_focus_pane_g4

0xc851,	// (0x00019033) bg_cell_gallery_focus_pane_g5

0xc859,	// (0x0001903b) bg_cell_gallery_focus_pane_g6

0xc861,	// (0x00019043) bg_cell_gallery_focus_pane_g7

0xc869,	// (0x0001904b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0001bf0b) bg_cell_gallery_focus_pane_g

0xc871,	// (0x00019053) aid_firma_cardinal

0xc885,	// (0x00019067) blid_firmament_pane_t1

0xc89c,	// (0x0001907e) blid_firmament_pane_t2

0xc8b3,	// (0x00019095) blid_firmament_pane_t3

0xc8ca,	// (0x000190ac) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0001bf1c) blid_firmament_pane_t

0xc8e1,	// (0x000190c3) blid_sat_info_pane

0xc8f1,	// (0x000190d3) blid_sat_info_pane_g1

0xc8f1,	// (0x000190d3) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0001bf25) blid_sat_info_pane_g

0xc8fb,	// (0x000190dd) blid_sat_info_pane_t1

0xc909,	// (0x000190eb) smil2_volume_content_pane

0xc912,	// (0x000190f4) smil2_volume_pane_g1

0xc91a,	// (0x000190fc) smil2_volume_content_pane_g1

0xc923,	// (0x00019105) smil2_volume_content_pane_g2

0xc92c,	// (0x0001910e) smil2_volume_content_pane_g3

0xc935,	// (0x00019117) smil2_volume_content_pane_g4

0xc93e,	// (0x00019120) smil2_volume_content_pane_g5

0xc947,	// (0x00019129) smil2_volume_content_pane_g6

0xc950,	// (0x00019132) smil2_volume_content_pane_g7

0xc959,	// (0x0001913b) smil2_volume_content_pane_g8

0xc962,	// (0x00019144) smil2_volume_content_pane_g9

0xc96b,	// (0x0001914d) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0001bf2a) smil2_volume_content_pane_g

0x2129,	// (0x0000e90b) cale_week_day_heading_pane_t1_ParamLimits

0x213d,	// (0x0000e91f) cale_week_day_heading_pane_t2_ParamLimits

0x2151,	// (0x0000e933) cale_week_day_heading_pane_t3_ParamLimits

0x2165,	// (0x0000e947) cale_week_day_heading_pane_t4_ParamLimits

0x2179,	// (0x0000e95b) cale_week_day_heading_pane_t5_ParamLimits

0x218d,	// (0x0000e96f) cale_week_day_heading_pane_t6_ParamLimits

0x21a1,	// (0x0000e983) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0001ba16) cale_week_day_heading_pane_t_ParamLimits

0xa3af,	// (0x00016b91) bg_cale_side_pane_ParamLimits

0x21b5,	// (0x0000e997) cale_week_time_pane_t1_ParamLimits

0x21cd,	// (0x0000e9af) cale_week_time_pane_t2_ParamLimits

0x21e5,	// (0x0000e9c7) cale_week_time_pane_t3_ParamLimits

0x21fd,	// (0x0000e9df) cale_week_time_pane_t4_ParamLimits

0x2215,	// (0x0000e9f7) cale_week_time_pane_t5_ParamLimits

0x222d,	// (0x0000ea0f) cale_week_time_pane_t6_ParamLimits

0x2245,	// (0x0000ea27) cale_week_time_pane_t7_ParamLimits

0x225d,	// (0x0000ea3f) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0001ba25) cale_week_time_pane_t_ParamLimits

0x2275,	// (0x0000ea57) cell_cale_week_pane_g2_ParamLimits

0xa3af,	// (0x00016b91) bg_cale_side_pane_cp01_ParamLimits

0x3038,	// (0x0000f81a) cale_month_week_pane_t1_ParamLimits

0x304f,	// (0x0000f831) cale_month_week_pane_t2_ParamLimits

0x3066,	// (0x0000f848) cale_month_week_pane_t3_ParamLimits

0x307d,	// (0x0000f85f) cale_month_week_pane_t4_ParamLimits

0x3094,	// (0x0000f876) cale_month_week_pane_t5_ParamLimits

0x30ab,	// (0x0000f88d) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0001bafe) cale_month_week_pane_t_ParamLimits

0xa8b7,	// (0x00017099) cell_cale_month_pane_g1_ParamLimits

0x99be,	// (0x000161a0) main_cale_event_viewer_pane

0x99be,	// (0x000161a0) listscroll_cale_event_viewer_pane

0xc974,	// (0x00019156) list_cale_ev_pane

0xc97c,	// (0x0001915e) scroll_pane_cp023

0xc988,	// (0x0001916a) field_cale_ev_pane_ParamLimits

0xc988,	// (0x0001916a) field_cale_ev_pane

0xc9a2,	// (0x00019184) field_cale_ev_content_pane_ParamLimits

0xc9a2,	// (0x00019184) field_cale_ev_content_pane

0xc9ae,	// (0x00019190) field_cale_ev_pane_g1_ParamLimits

0xc9ae,	// (0x00019190) field_cale_ev_pane_g1

0xc9ba,	// (0x0001919c) field_cale_ev_pane_g2_ParamLimits

0xc9ba,	// (0x0001919c) field_cale_ev_pane_g2

0xc9d2,	// (0x000191b4) field_cale_ev_pane_g3_ParamLimits

0xc9d2,	// (0x000191b4) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0001bf3f) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0001bf3f) field_cale_ev_pane_g

0xc9ea,	// (0x000191cc) field_cale_ev_pane_t1_ParamLimits

0xc9ea,	// (0x000191cc) field_cale_ev_pane_t1

0xca01,	// (0x000191e3) field_cale_ev_content_pane_t1_ParamLimits

0xca01,	// (0x000191e3) field_cale_ev_content_pane_t1

0xb0db,	// (0x000178bd) bg_button_pane_cp01

0xa1d9,	// (0x000169bb) listscroll_cale_week_pane_ParamLimits

0x1f4e,	// (0x0000e730) popup_toolbar_window_cp01

0xa39d,	// (0x00016b7f) listscroll_cale_week_pane_t1_ParamLimits

0xa1d9,	// (0x000169bb) listscroll_cale_day_pane_ParamLimits

0x31ee,	// (0x0000f9d0) popup_toolbar_window_cp02

0xa39d,	// (0x00016b7f) listscroll_cale_day_pane_t1_ParamLimits

0xa1d9,	// (0x000169bb) main_cale_month_pane_ParamLimits

0x47ce,	// (0x00010fb0) popup_toolbar_window_cp03_ParamLimits

0x47ce,	// (0x00010fb0) popup_toolbar_window_cp03

0x3e78,	// (0x0001065a) main_image_pane_g2_ParamLimits

0x3e78,	// (0x0001065a) main_image_pane_g2

0x3e89,	// (0x0001066b) main_image_pane_g3_ParamLimits

0x3e89,	// (0x0001066b) main_image_pane_g3

0x0002,

0xf54e,	// (0x0001bd30) main_image_pane_g_ParamLimits

0xf54e,	// (0x0001bd30) main_image_pane_g

0xb26d,	// (0x00017a4f) main_image_pane_t1_ParamLimits

0x3e9a,	// (0x0001067c) main_image_pane_t2_ParamLimits

0x3e9a,	// (0x0001067c) main_image_pane_t2

0x3eac,	// (0x0001068e) main_image_pane_t3_ParamLimits

0x3eac,	// (0x0001068e) main_image_pane_t3

0x3ed4,	// (0x000106b6) main_image_pane_t4_ParamLimits

0x3ed4,	// (0x000106b6) main_image_pane_t4

0x0003,

0xf555,	// (0x0001bd37) main_image_pane_t_ParamLimits

0xf555,	// (0x0001bd37) main_image_pane_t

0x3ef4,	// (0x000106d6) popup_image_details_window_cp01

0x3efe,	// (0x000106e0) popup_toobar_trans_pane_cp01_ParamLimits

0x3efe,	// (0x000106e0) popup_toobar_trans_pane_cp01

0x467f,	// (0x00010e61) popup_image_details_window_ParamLimits

0x467f,	// (0x00010e61) popup_image_details_window

0xc409,	// (0x00018beb) popup_image_focus_window

0x4a95,	// (0x00011277) camera2_autofocus_pane_ParamLimits

0x4a95,	// (0x00011277) camera2_autofocus_pane

0x99be,	// (0x000161a0) bg_popup_sub_pane_cp06

0xca1e,	// (0x00019200) popup_image_focus_window_g1

0xca26,	// (0x00019208) popup_image_focus_window_g2

0xca2e,	// (0x00019210) popup_image_focus_window_g3

0xca36,	// (0x00019218) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0001bf46) popup_image_focus_window_g

0xca3e,	// (0x00019220) popup_image_focus_window_t1

0xca4c,	// (0x0001922e) popup_image_focus_window_t2

0xca5c,	// (0x0001923e) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0001bf4f) popup_image_focus_window_t

0xca6a,	// (0x0001924c) camera2_autofocus_pane_g1

0x9a2e,	// (0x00016210) bg_tb_trans_pane_cp01

0xca78,	// (0x0001925a) popup_image_details_window_g1

0xca8b,	// (0x0001926d) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0001bf61) popup_image_details_window_g

0xcab4,	// (0x00019296) popup_image_details_window_t1

0xcac6,	// (0x000192a8) popup_image_details_window_t2

0xcadf,	// (0x000192c1) popup_image_details_window_t3

0xcaf3,	// (0x000192d5) popup_image_details_window_t4

0xcb0e,	// (0x000192f0) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0001bf68) popup_image_details_window_t

0xa1ab,	// (0x0001698d) bg_calc_paper_pane_ParamLimits

0x99be,	// (0x000161a0) grid_highlight_pane_cp013

0xa1bf,	// (0x000169a1) list_calc_pane_ParamLimits

0xa1d1,	// (0x000169b3) scroll_pane_cp024

0xa1d9,	// (0x000169bb) bg_calc_display_pane_ParamLimits

0x1db8,	// (0x0000e59a) calc_display_pane_t1_ParamLimits

0x1dca,	// (0x0000e5ac) calc_display_pane_t2_ParamLimits

0xa1e5,	// (0x000169c7) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0001b998) calc_display_pane_t_ParamLimits

0x1e87,	// (0x0000e669) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0001b9b5) cell_calc_pane_g

0x1e90,	// (0x0000e672) cell_calc_pane_t1

0xa25c,	// (0x00016a3e) grid_highlight_pane_cp02_ParamLimits

0xa272,	// (0x00016a54) toolbar_button_pane_cp01_ParamLimits

0xa272,	// (0x00016a54) toolbar_button_pane_cp01

0xb2b2,	// (0x00017a94) temp_image_control_pane_ParamLimits

0xb2b2,	// (0x00017a94) temp_image_control_pane

0x9a2e,	// (0x00016210) main_mp3_pane

0xcb28,	// (0x0001930a) temp_image_control_pane_g1_ParamLimits

0xcb28,	// (0x0001930a) temp_image_control_pane_g1

0xcb36,	// (0x00019318) temp_image_control_pane_g2_ParamLimits

0xcb36,	// (0x00019318) temp_image_control_pane_g2

0xcb48,	// (0x0001932a) temp_image_control_pane_g3_ParamLimits

0xcb48,	// (0x0001932a) temp_image_control_pane_g3

0x52ec,	// (0x00011ace) temp_image_control_pane_g4_ParamLimits

0x52ec,	// (0x00011ace) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0001bf73) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0001bf73) temp_image_control_pane_g

0xcb28,	// (0x0001930a) main_mp3_pane_g1

0x52ff,	// (0x00011ae1) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0001bf7c) main_mp3_pane_g

0xcb8b,	// (0x0001936d) main_mp3_pane_t1

0xa498,	// (0x00016c7a) main_camera_pane_g8_ParamLimits

0xa498,	// (0x00016c7a) main_camera_pane_g8

0x251f,	// (0x0000ed01) main_video_pane_g7_ParamLimits

0x251f,	// (0x0000ed01) main_video_pane_g7

0xc516,	// (0x00018cf8) main_camera2_pane_t7_ParamLimits

0xc516,	// (0x00018cf8) main_camera2_pane_t7

0xa6a3,	// (0x00016e85) scroll_pane_cp025_ParamLimits

0xa6a3,	// (0x00016e85) scroll_pane_cp025

0xa6b7,	// (0x00016e99) scroll_pane_cp026_ParamLimits

0xa6b7,	// (0x00016e99) scroll_pane_cp026

0xa6c6,	// (0x00016ea8) wml_content_pane_ParamLimits

0x99be,	// (0x000161a0) main_touch_calib_pane

0x53ca,	// (0x00011bac) main_touch_calib_pane_g1

0x53d6,	// (0x00011bb8) main_touch_calib_pane_g2

0x53e2,	// (0x00011bc4) main_touch_calib_pane_g3

0x53ee,	// (0x00011bd0) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0001bf9a) main_touch_calib_pane_g

0x53fa,	// (0x00011bdc) main_touch_calib_pane_t1

0x5414,	// (0x00011bf6) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0001bfa3) main_touch_calib_pane_t

0xae93,	// (0x00017675) mup_progress_pane_cp02

0xaeb2,	// (0x00017694) navi_pane_g1

0xaf14,	// (0x000176f6) navi_pane_mp_t3

0x9a2e,	// (0x00016210) main_mp3_pane_ParamLimits

0x480c,	// (0x00010fee) navi_pane_ParamLimits

0xcb28,	// (0x0001930a) main_mp3_pane_g1_ParamLimits

0x52ff,	// (0x00011ae1) main_mp3_pane_g2_ParamLimits

0x530d,	// (0x00011aef) main_mp3_pane_g3_ParamLimits

0x530d,	// (0x00011aef) main_mp3_pane_g3

0x531b,	// (0x00011afd) main_mp3_pane_g4_ParamLimits

0x531b,	// (0x00011afd) main_mp3_pane_g4

0xcb58,	// (0x0001933a) main_mp3_pane_g5_ParamLimits

0xcb58,	// (0x0001933a) main_mp3_pane_g5

0xcb66,	// (0x00019348) main_mp3_pane_g6_ParamLimits

0xcb66,	// (0x00019348) main_mp3_pane_g6

0xcb73,	// (0x00019355) main_mp3_pane_g7_ParamLimits

0xcb73,	// (0x00019355) main_mp3_pane_g7

0xcb7f,	// (0x00019361) main_mp3_pane_g8_ParamLimits

0xcb7f,	// (0x00019361) main_mp3_pane_g8

0xf79a,	// (0x0001bf7c) main_mp3_pane_g_ParamLimits

0x5329,	// (0x00011b0b) main_mp3_pane_t2

0x5337,	// (0x00011b19) main_mp3_pane_t3

0xcb99,	// (0x0001937b) main_mp3_pane_t4

0xcba7,	// (0x00019389) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0001bf8d) main_mp3_pane_t

0xcbb5,	// (0x00019397) mup_progress_pane_cp01

0x99dc,	// (0x000161be) aid_zoom_text_secondary2

0xc974,	// (0x00019156) list_cale_ev2_pane

0xc97c,	// (0x0001915e) scroll_pane_cp023_ParamLimits

0x546a,	// (0x00011c4c) field_cale_ev2_pane_ParamLimits

0x546a,	// (0x00011c4c) field_cale_ev2_pane

0x5490,	// (0x00011c72) field_cale_ev2_pane_g1_ParamLimits

0x5490,	// (0x00011c72) field_cale_ev2_pane_g1

0x549c,	// (0x00011c7e) field_cale_ev2_pane_g2_ParamLimits

0x549c,	// (0x00011c7e) field_cale_ev2_pane_g2

0x54b4,	// (0x00011c96) field_cale_ev2_pane_g3_ParamLimits

0x54b4,	// (0x00011c96) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0001bfae) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0001bfae) field_cale_ev2_pane_g

0xcbc9,	// (0x000193ab) field_cale_ev2_pane_t1_ParamLimits

0xcbc9,	// (0x000193ab) field_cale_ev2_pane_t1

0xcbe0,	// (0x000193c2) field_cale_ev2_pane_t2_ParamLimits

0xcbe0,	// (0x000193c2) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0001bfb7) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0001bfb7) field_cale_ev2_pane_t

0x3d28,	// (0x0001050a) main_postcard_pane_g5_ParamLimits

0x3d28,	// (0x0001050a) main_postcard_pane_g5

0x3d3e,	// (0x00010520) main_postcard_pane_g6_ParamLimits

0x3d3e,	// (0x00010520) main_postcard_pane_g6

0x22cf,	// (0x0000eab1) camera2_autofocus_pane_cp_ParamLimits

0x22cf,	// (0x0000eab1) camera2_autofocus_pane_cp

0x9a2e,	// (0x00016210) main_mup3_pane

0x54ec,	// (0x00011cce) main_mup3_pane_g1_ParamLimits

0x54ec,	// (0x00011cce) main_mup3_pane_g1

0x550e,	// (0x00011cf0) main_mup3_pane_g2_ParamLimits

0x550e,	// (0x00011cf0) main_mup3_pane_g2

0x558f,	// (0x00011d71) main_mup3_pane_g3_ParamLimits

0x558f,	// (0x00011d71) main_mup3_pane_g3

0x55d1,	// (0x00011db3) main_mup3_pane_g4_ParamLimits

0x55d1,	// (0x00011db3) main_mup3_pane_g4

0x5613,	// (0x00011df5) main_mup3_pane_g5_ParamLimits

0x5613,	// (0x00011df5) main_mup3_pane_g5

0x5657,	// (0x00011e39) main_mup3_pane_g6_ParamLimits

0x5657,	// (0x00011e39) main_mup3_pane_g6

0xcbf5,	// (0x000193d7) main_mup3_pane_g7_ParamLimits

0xcbf5,	// (0x000193d7) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0001bfc7) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0001bfc7) main_mup3_pane_g

0x56d3,	// (0x00011eb5) main_mup3_pane_t1_ParamLimits

0x56d3,	// (0x00011eb5) main_mup3_pane_t1

0x5747,	// (0x00011f29) main_mup3_pane_t2_ParamLimits

0x5747,	// (0x00011f29) main_mup3_pane_t2

0x581b,	// (0x00011ffd) main_mup3_pane_t4_ParamLimits

0x581b,	// (0x00011ffd) main_mup3_pane_t4

0x5875,	// (0x00012057) main_mup3_pane_t5_ParamLimits

0x5875,	// (0x00012057) main_mup3_pane_t5

0x5929,	// (0x0001210b) main_mup3_pane_t6_ParamLimits

0x5929,	// (0x0001210b) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0001bfd8) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0001bfd8) main_mup3_pane_t

0x59dd,	// (0x000121bf) mup3_progress_pane_ParamLimits

0x59dd,	// (0x000121bf) mup3_progress_pane

0x5a59,	// (0x0001223b) popup_mup3_control_window_ParamLimits

0x5a59,	// (0x0001223b) popup_mup3_control_window

0xcc03,	// (0x000193e5) popup_mup3_text_window

0x5a8b,	// (0x0001226d) mup3_progress_pane_t1

0x5aa2,	// (0x00012284) mup3_progress_pane_t2

0xcc0b,	// (0x000193ed) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0001bfe5) mup3_progress_pane_t

0xcc22,	// (0x00019404) mup_progress_pane_cp03

0x99be,	// (0x000161a0) bg_tb_trans_pane_cp04

0x5ab9,	// (0x0001229b) mup3_volume_pane

0x5ac1,	// (0x000122a3) popup_mup3_control_window_g1

0x5aca,	// (0x000122ac) mup3_volume_pane_g1

0x5ad3,	// (0x000122b5) mup3_volume_pane_g2

0x5adc,	// (0x000122be) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0001bfec) mup3_volume_pane_g

0x99be,	// (0x000161a0) bg_tb_trans_pane_cp03

0xcc32,	// (0x00019414) popup_mup3_text_window_g1

0xcc3a,	// (0x0001941c) popup_mup3_text_window_t1

0xa233,	// (0x00016a15) list_calc_item_pane_g1_ParamLimits

0xc5fe,	// (0x00018de0) mup_volume_pane_cp_g1

0x542e,	// (0x00011c10) main_touch_calib_pane_t3

0x5442,	// (0x00011c24) main_touch_calib_pane_t4

0x5456,	// (0x00011c38) main_touch_calib_pane_t5

0x99c8,	// (0x000161aa) aid_cell_size_toolbar2

0x99d0,	// (0x000161b2) aid_popup3_width_pane

0x99dc,	// (0x000161be) aid_zoom_text_msg_primary

0xa465,	// (0x00016c47) vorec_t7

0xa1f7,	// (0x000169d9) bg_calc_paper_pane_g1_ParamLimits

0xa203,	// (0x000169e5) bg_calc_paper_pane_g2_ParamLimits

0xa20f,	// (0x000169f1) bg_calc_paper_pane_g3_ParamLimits

0xa21b,	// (0x000169fd) bg_calc_paper_pane_g4_ParamLimits

0xa227,	// (0x00016a09) bg_calc_paper_pane_g5_ParamLimits

0x1e11,	// (0x0000e5f3) bg_calc_paper_pane_g6_ParamLimits

0x1e20,	// (0x0000e602) bg_calc_paper_pane_g7_ParamLimits

0x1e2f,	// (0x0000e611) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0001b99f) bg_calc_paper_pane_g_ParamLimits

0x1e42,	// (0x0000e624) calc_bg_paper_pane_g9_ParamLimits

0x2429,	// (0x0000ec0b) image_qvga_pane_ParamLimits

0x2429,	// (0x0000ec0b) image_qvga_pane

0xa0a8,	// (0x0001688a) bg_popup_sub_pane_cp04_ParamLimits

0xb1e9,	// (0x000179cb) popup_mup_playback_window_g1_ParamLimits

0xb1f5,	// (0x000179d7) popup_mup_playback_window_t1_ParamLimits

0xb20a,	// (0x000179ec) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0001bd2b) popup_mup_playback_window_t_ParamLimits

0x4f8c,	// (0x0001176e) main_mup2_pane_g3_ParamLimits

0x4f8c,	// (0x0001176e) main_mup2_pane_g3

0x2734,	// (0x0000ef16) popup_toolbar_window_cp04

0xb5ff,	// (0x00017de1) popup_call2_audio_second_window_g3_ParamLimits

0xb5ff,	// (0x00017de1) popup_call2_audio_second_window_g3

0xba09,	// (0x000181eb) popup_call2_audio_first_window_g4_ParamLimits

0xba09,	// (0x000181eb) popup_call2_audio_first_window_g4

0xc088,	// (0x0001886a) popup_call2_audio_in_window_g4_ParamLimits

0xc088,	// (0x0001886a) popup_call2_audio_in_window_g4

0x3e5a,	// (0x0001063c) aid_area_sk_bg_cut_ParamLimits

0x3e5a,	// (0x0001063c) aid_area_sk_bg_cut

0xb21f,	// (0x00017a01) aid_area_sk_bg_cut_2_ParamLimits

0xb21f,	// (0x00017a01) aid_area_sk_bg_cut_2

0x5292,	// (0x00011a74) aid_placing_details_win

0x529a,	// (0x00011a7c) aid_placing_details_win_2

0xca6a,	// (0x0001924c) camera2_autofocus_pane_g1_ParamLimits

0x1a57,	// (0x0000e239) popup_fixed_preview_cale_window_ParamLimits

0x1a57,	// (0x0000e239) popup_fixed_preview_cale_window

0xaf6c,	// (0x0001774e) navi_slider_pane_g3

0xaf75,	// (0x00017757) navi_slider_pane_g4

0xaf7e,	// (0x00017760) navi_slider_pane_g5

0xaf6c,	// (0x0001774e) navi_slider_pane_g6

0xaf87,	// (0x00017769) navi_slider_pane_g7

0xb0a8,	// (0x0001788a) mup_scale_pane_g3

0xb0b1,	// (0x00017893) mup_scale_pane_g4

0xb0ba,	// (0x0001789c) mup_scale_pane_g5

0x3b41,	// (0x00010323) mup_scale_pane_g6

0x3b4a,	// (0x0001032c) mup_scale_pane_g7

0xaf6c,	// (0x0001774e) cams2_slider_pane_g3

0xc6b3,	// (0x00018e95) cams2_slider_pane_g4

0xc6bb,	// (0x00018e9d) cams2_slider_pane_g5

0xaf6c,	// (0x0001774e) cams2_slider_pane_g6

0xc6c3,	// (0x00018ea5) cams2_slider_pane_g7

0xc8f1,	// (0x000190d3) camera2_autofocus_pane_cp_g1

0xcc79,	// (0x0001945b) bg_popup_preview_window_pane_cp02_ParamLimits

0xcc79,	// (0x0001945b) bg_popup_preview_window_pane_cp02

0xcc85,	// (0x00019467) list_fp_cale_pane_ParamLimits

0xcc85,	// (0x00019467) list_fp_cale_pane

0xcc91,	// (0x00019473) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc91,	// (0x00019473) popup_fixed_preview_cale_window_t1

0x5ae5,	// (0x000122c7) popup_fixed_preview_cale_window_t2_ParamLimits

0x5ae5,	// (0x000122c7) popup_fixed_preview_cale_window_t2

0x5afa,	// (0x000122dc) popup_fixed_preview_cale_window_t3_ParamLimits

0x5afa,	// (0x000122dc) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0001bff3) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0001bff3) popup_fixed_preview_cale_window_t

0x5b0f,	// (0x000122f1) list_single_fp_cale_pane_ParamLimits

0x5b0f,	// (0x000122f1) list_single_fp_cale_pane

0xccaf,	// (0x00019491) list_single_fp_cale_pane_g1_ParamLimits

0xccaf,	// (0x00019491) list_single_fp_cale_pane_g1

0xccbb,	// (0x0001949d) list_single_fp_cale_pane_g2_ParamLimits

0xccbb,	// (0x0001949d) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0001bffa) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0001bffa) list_single_fp_cale_pane_g

0xccd4,	// (0x000194b6) list_single_fp_cale_pane_t1_ParamLimits

0xccd4,	// (0x000194b6) list_single_fp_cale_pane_t1

0xcce6,	// (0x000194c8) list_single_fp_cale_pane_t2_ParamLimits

0xcce6,	// (0x000194c8) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0001c001) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0001c001) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99be,	// (0x000161a0) main_dialer_pane

0x5b27,	// (0x00012309) aid_cell_size_keypad

0x5b31,	// (0x00012313) dialer_ne_pane

0x5b39,	// (0x0001231b) grid_dialer_command_1_pane

0x5b41,	// (0x00012323) grid_dialer_command_2_pane

0x5b49,	// (0x0001232b) grid_dialer_keypad_pane

0x5b5b,	// (0x0001233d) bg_popup_call_pane_cp06_ParamLimits

0x5b5b,	// (0x0001233d) bg_popup_call_pane_cp06

0x5b67,	// (0x00012349) dialer_ne_clear_pane_ParamLimits

0x5b67,	// (0x00012349) dialer_ne_clear_pane

0xcd19,	// (0x000194fb) dialer_ne_pane_g1

0xcd21,	// (0x00019503) dialer_ne_pane_t1_ParamLimits

0xcd21,	// (0x00019503) dialer_ne_pane_t1

0x5b73,	// (0x00012355) dialer_ne_pane_t2_ParamLimits

0x5b73,	// (0x00012355) dialer_ne_pane_t2

0x5b9d,	// (0x0001237f) dialer_ne_pane_t3_ParamLimits

0x5b9d,	// (0x0001237f) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0001c006) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0001c006) dialer_ne_pane_t

0x5bcd,	// (0x000123af) dialer_ne_pane_t3_copy1_ParamLimits

0x5bcd,	// (0x000123af) dialer_ne_pane_t3_copy1

0x5bfc,	// (0x000123de) cell_dialer_keypad_pane_ParamLimits

0x5bfc,	// (0x000123de) cell_dialer_keypad_pane

0x5c13,	// (0x000123f5) cell_dialer_command_1_pane_ParamLimits

0x5c13,	// (0x000123f5) cell_dialer_command_1_pane

0x5c29,	// (0x0001240b) cell_dialer_command_2_pane_ParamLimits

0x5c29,	// (0x0001240b) cell_dialer_command_2_pane

0xcd33,	// (0x00019515) bg_button_pane_cp02_ParamLimits

0xcd33,	// (0x00019515) bg_button_pane_cp02

0x5c38,	// (0x0001241a) cell_dialer_keypad_pane_g1_ParamLimits

0x5c38,	// (0x0001241a) cell_dialer_keypad_pane_g1

0xcd33,	// (0x00019515) bg_button_pane_cp03_ParamLimits

0xcd33,	// (0x00019515) bg_button_pane_cp03

0x5c4d,	// (0x0001242f) cell_dialer_command_1_pane_g1_ParamLimits

0x5c4d,	// (0x0001242f) cell_dialer_command_1_pane_g1

0xcd3f,	// (0x00019521) bg_button_pane_cp04

0x5c61,	// (0x00012443) cell_dialer_command_2_pane_g1

0xaf52,	// (0x00017734) bg_button_pane_cp06

0xcd47,	// (0x00019529) dialer_ne_clear_pane_g1

0x367f,	// (0x0000fe61) navi_pane_g2

0x36ad,	// (0x0000fe8f) navi_pane_g3

0x0002,

0xf44c,	// (0x0001bc2e) navi_pane_g

0x36d6,	// (0x0000feb8) navi_pane_mv_g2

0x36fd,	// (0x0000fedf) navi_pane_mv_g5

0x3705,	// (0x0000fee7) navi_pane_mv_t1

0xa1d9,	// (0x000169bb) main_clock2_pane

0x5c94,	// (0x00012476) main_clock2_list_pane_ParamLimits

0x5c94,	// (0x00012476) main_clock2_list_pane

0x5cca,	// (0x000124ac) main_clock2_pane_t1_ParamLimits

0x5cca,	// (0x000124ac) main_clock2_pane_t1

0x5d08,	// (0x000124ea) main_clock2_pane_t2_ParamLimits

0x5d08,	// (0x000124ea) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0001c00d) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0001c00d) main_clock2_pane_t

0x5d92,	// (0x00012574) popup_clock_analogue_window_cp03_ParamLimits

0x5d92,	// (0x00012574) popup_clock_analogue_window_cp03

0x5db9,	// (0x0001259b) popup_clock_digital_window_cp02_ParamLimits

0x5db9,	// (0x0001259b) popup_clock_digital_window_cp02

0x5e2e,	// (0x00012610) main_clock2_list_single_pane_ParamLimits

0x5e2e,	// (0x00012610) main_clock2_list_single_pane

0xaf52,	// (0x00017734) list_highlight_pane_cp05

0xcd4f,	// (0x00019531) main_clock2_list_single_pane_t1

0x2734,	// (0x0000ef16) popup_toolbar_window_cp04_ParamLimits

0x52bc,	// (0x00011a9e) camera2_autofocus_pane_g2_ParamLimits

0x52bc,	// (0x00011a9e) camera2_autofocus_pane_g2

0x52c8,	// (0x00011aaa) camera2_autofocus_pane_g3_ParamLimits

0x52c8,	// (0x00011aaa) camera2_autofocus_pane_g3

0x52d4,	// (0x00011ab6) camera2_autofocus_pane_g4_ParamLimits

0x52d4,	// (0x00011ab6) camera2_autofocus_pane_g4

0x52e0,	// (0x00011ac2) camera2_autofocus_pane_g5_ParamLimits

0x52e0,	// (0x00011ac2) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0001bf56) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0001bf56) camera2_autofocus_pane_g

0x54cc,	// (0x00011cae) camera2_autofocus_pane_cp_g2

0x54d4,	// (0x00011cb6) camera2_autofocus_pane_cp_g3

0x54dc,	// (0x00011cbe) camera2_autofocus_pane_cp_g4

0x54e4,	// (0x00011cc6) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0001bfbc) camera2_autofocus_pane_cp_g

0x5b53,	// (0x00012335) popup_dialer_spcha_window

0x99be,	// (0x000161a0) bg_popup_sub_pane_cp07

0xcd5d,	// (0x0001953f) list_spcha_pane

0xcd65,	// (0x00019547) list_single_spcha_pane_ParamLimits

0xcd65,	// (0x00019547) list_single_spcha_pane

0x99be,	// (0x000161a0) list_highlight_pane_cp06

0xcd76,	// (0x00019558) list_single_spcha_pane_t1

0xbe32,	// (0x00018614) popup_call2_audio_out_window_g4_ParamLimits

0xbe32,	// (0x00018614) popup_call2_audio_out_window_g4

0x99be,	// (0x000161a0) main_imed2_pane

0xc411,	// (0x00018bf3) popup_imed_adjust2_window

0x4697,	// (0x00010e79) popup_imed_trans_window_ParamLimits

0x4697,	// (0x00010e79) popup_imed_trans_window

0xc72d,	// (0x00018f0f) popup_blid_sat_info2_window_t1

0xc73b,	// (0x00018f1d) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0001beeb) popup_blid_sat_info2_window_t

0x5ed8,	// (0x000126ba) aid_size_cell_colour_35

0x5ef8,	// (0x000126da) aid_size_cell_colour_112

0x5f18,	// (0x000126fa) aid_size_cell_effect

0xc3e9,	// (0x00018bcb) bg_tb_trans_pane_cp02

0xa9ac,	// (0x0001718e) heading_imed_pane

0x5f38,	// (0x0001271a) listscroll_imed_pane

0xcd84,	// (0x00019566) heading_imed_pane_g1

0xcd8c,	// (0x0001956e) heading_imed_pane_t1

0xcd9a,	// (0x0001957c) grid_imed_colour_35_pane_ParamLimits

0xcd9a,	// (0x0001957c) grid_imed_colour_35_pane

0x5f44,	// (0x00012726) grid_imed_effect_pane

0xcdb5,	// (0x00019597) list_imed_aspect_pane

0x5f59,	// (0x0001273b) scroll_pane_cp027_ParamLimits

0x5f59,	// (0x0001273b) scroll_pane_cp027

0x5f6a,	// (0x0001274c) cell_imed_effect_pane_ParamLimits

0x5f6a,	// (0x0001274c) cell_imed_effect_pane

0xcdbd,	// (0x0001959f) cell_imed_colour_pane_ParamLimits

0xcdbd,	// (0x0001959f) cell_imed_colour_pane

0xcdff,	// (0x000195e1) cell_imed_colour_pane_g1_ParamLimits

0xcdff,	// (0x000195e1) cell_imed_colour_pane_g1

0xce10,	// (0x000195f2) hgihlgiht_grid_pane_cp016_ParamLimits

0xce10,	// (0x000195f2) hgihlgiht_grid_pane_cp016

0x5f91,	// (0x00012773) cell_imed_effect_pane_g1

0x5f99,	// (0x0001277b) grid_highlight_pane_cp017

0xcc56,	// (0x00019438) list_imed_single_pane_ParamLimits

0xcc56,	// (0x00019438) list_imed_single_pane

0x99be,	// (0x000161a0) list_highlight_pane_cp07

0xce21,	// (0x00019603) list_imed_aspect_pane_comp1_t1

0xc3e9,	// (0x00018bcb) bg_tb_trans_pane_cp05

0xce43,	// (0x00019625) popup_imed_adjust2_window_g1

0xce6a,	// (0x0001964c) popup_imed_adjust2_window_t1

0xce82,	// (0x00019664) slider_imed_adjust_pane

0xce96,	// (0x00019678) slider_imed_adjust_pane_g1

0xcea6,	// (0x00019688) slider_imed_adjust_pane_g2

0xceb6,	// (0x00019698) slider_imed_adjust_pane_g3

0xcec7,	// (0x000196a9) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0001c02a) slider_imed_adjust_pane_g

0x5fa2,	// (0x00012784) aid_size_cell_clipart2

0x5fae,	// (0x00012790) grid_imed_clipart_pane

0xced8,	// (0x000196ba) scroll_pane_cp031

0x5fb8,	// (0x0001279a) cell_imed_clipart_pane_ParamLimits

0x5fb8,	// (0x0001279a) cell_imed_clipart_pane

0x5fdf,	// (0x000127c1) cell_imed_clipart_pane_g1

0x99be,	// (0x000161a0) grid_highlight_pane_cp014

0x5ca9,	// (0x0001248b) main_clock2_pane_g1_ParamLimits

0x5ca9,	// (0x0001248b) main_clock2_pane_g1

0x5dd9,	// (0x000125bb) aid_call2_pane_cp10

0x5deb,	// (0x000125cd) aid_call_pane_cp10

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g1

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g2

0x5dfd,	// (0x000125df) popup_clock_analogue_window_cp10_g3

0x5dfd,	// (0x000125df) popup_clock_analogue_window_cp10_g4

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0001c018) popup_clock_analogue_window_cp10_g

0x5e0f,	// (0x000125f1) popup_clock_analogue_window_cp10_t1

0x5e40,	// (0x00012622) clock_digital_number_pane_cp10_ParamLimits

0x5e40,	// (0x00012622) clock_digital_number_pane_cp10

0x5e58,	// (0x0001263a) clock_digital_number_pane_cp11_ParamLimits

0x5e58,	// (0x0001263a) clock_digital_number_pane_cp11

0x5e70,	// (0x00012652) clock_digital_number_pane_cp12_ParamLimits

0x5e70,	// (0x00012652) clock_digital_number_pane_cp12

0x5e88,	// (0x0001266a) clock_digital_number_pane_cp13_ParamLimits

0x5e88,	// (0x0001266a) clock_digital_number_pane_cp13

0x5ea0,	// (0x00012682) clock_digital_separator_pane_cp10_ParamLimits

0x5ea0,	// (0x00012682) clock_digital_separator_pane_cp10

0x5eb8,	// (0x0001269a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5eb8,	// (0x0001269a) popup_clock_digital_window_cp02_t1

0xa0a0,	// (0x00016882) clock_digital_number_pane_cp10_g1

0xa0a0,	// (0x00016882) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0001c033) clock_digital_number_pane_cp10_g

0xa0a0,	// (0x00016882) clock_digital_separator_pane_cp10_g1

0xa0a0,	// (0x00016882) clock_digital_separator_pane_g2_cp10

0xaf22,	// (0x00017704) navi_pane_vded_g4

0xaf2b,	// (0x0001770d) navi_pane_vded_g5

0xaf34,	// (0x00017716) navi_pane_vded_t1

0x99be,	// (0x000161a0) main_vded_pane

0x5fe8,	// (0x000127ca) main_vded_pane_g1

0x5ff4,	// (0x000127d6) main_vded_pane_g2

0x5ffe,	// (0x000127e0) main_vded_pane_g3

0x0002,

0xf856,	// (0x0001c038) main_vded_pane_g

0x6008,	// (0x000127ea) main_vded_pane_t1

0x6016,	// (0x000127f8) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0001c03f) main_vded_pane_t

0x6024,	// (0x00012806) vded_slider_pane

0x602e,	// (0x00012810) vded_video_pane

0xcee0,	// (0x000196c2) vded_video_pane_g1

0x6038,	// (0x0001281a) vded_video_pane_g2

0xc8f1,	// (0x000190d3) vded_video_pane_g3

0x0002,

0xf862,	// (0x0001c044) vded_video_pane_g

0xceea,	// (0x000196cc) vded_slider_pane_g1

0xc5fe,	// (0x00018de0) vded_slider_pane_g2

0xcef3,	// (0x000196d5) vded_slider_pane_g3

0xcefc,	// (0x000196de) vded_slider_pane_g4

0xcf05,	// (0x000196e7) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0001c04b) vded_slider_pane_g

0x5a41,	// (0x00012223) mup3_rocker_pane_ParamLimits

0x5a41,	// (0x00012223) mup3_rocker_pane

0x6041,	// (0x00012823) mup3_control_keys_pane_g1

0x6049,	// (0x0001282b) mup3_control_keys_pane_g2

0x6051,	// (0x00012833) mup3_control_keys_pane_g3

0x6059,	// (0x0001283b) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0001c056) mup3_control_keys_pane_g

0x1a8e,	// (0x0000e270) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1a8e,	// (0x0000e270) popup_toolbar2_fixed_window_cp01

0x5a75,	// (0x00012257) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5a75,	// (0x00012257) popup_toolbar2_fixed_window_cp02

0xb771,	// (0x00017f53) popup_call2_audio_second_window_t4_ParamLimits

0xb771,	// (0x00017f53) popup_call2_audio_second_window_t4

0xbc9f,	// (0x00018481) popup_call2_audio_first_window_t6_ParamLimits

0xbc9f,	// (0x00018481) popup_call2_audio_first_window_t6

0xbf35,	// (0x00018717) popup_call2_audio_out_window_t6_ParamLimits

0xbf35,	// (0x00018717) popup_call2_audio_out_window_t6

0x99be,	// (0x000161a0) main_vitu_pane

0x6069,	// (0x0001284b) aid_size_cell_itu_ParamLimits

0x6069,	// (0x0001284b) aid_size_cell_itu

0x9a2e,	// (0x00016210) bg_popup_window_pane_cp08_ParamLimits

0x9a2e,	// (0x00016210) bg_popup_window_pane_cp08

0x607f,	// (0x00012861) field_vitu_entry_pane_ParamLimits

0x607f,	// (0x00012861) field_vitu_entry_pane

0x6096,	// (0x00012878) grid_vitu_function_pane_ParamLimits

0x6096,	// (0x00012878) grid_vitu_function_pane

0x60b1,	// (0x00012893) grid_vitu_itu_pane_ParamLimits

0x60b1,	// (0x00012893) grid_vitu_itu_pane

0x60cf,	// (0x000128b1) cell_vitu_itu_pane_ParamLimits

0x60cf,	// (0x000128b1) cell_vitu_itu_pane

0x60f3,	// (0x000128d5) cell_vitu_function_pane_ParamLimits

0x60f3,	// (0x000128d5) cell_vitu_function_pane

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp08_ParamLimits

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp08

0x610e,	// (0x000128f0) field_vitu_entry_pane_t1_ParamLimits

0x610e,	// (0x000128f0) field_vitu_entry_pane_t1

0xcf26,	// (0x00019708) field_vitu_entry_pane_t2_ParamLimits

0xcf26,	// (0x00019708) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0001c064) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0001c064) field_vitu_entry_pane_t

0xcf43,	// (0x00019725) bg_button_pane_cp05_ParamLimits

0xcf43,	// (0x00019725) bg_button_pane_cp05

0x612e,	// (0x00012910) cell_vitu_itu_pane_g1

0x6146,	// (0x00012928) cell_vitu_itu_pane_t1_ParamLimits

0x6146,	// (0x00012928) cell_vitu_itu_pane_t1

0x6158,	// (0x0001293a) cell_vitu_itu_pane_t2_ParamLimits

0x6158,	// (0x0001293a) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0001c069) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0001c069) cell_vitu_itu_pane_t

0xcf51,	// (0x00019733) bg_button_pane_cp07

0x618d,	// (0x0001296f) cell_vitu_function_pane_g1

0xa173,	// (0x00016955) main_calc_pane_g1

0x18c4,	// (0x0000e0a6) aid_visual_content_pane

0x99be,	// (0x000161a0) main_vradio_pane

0x6196,	// (0x00012978) main_vradio_pane_g1_ParamLimits

0x6196,	// (0x00012978) main_vradio_pane_g1

0xcf5b,	// (0x0001973d) main_vradio_pane_g2_ParamLimits

0xcf5b,	// (0x0001973d) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0001c070) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0001c070) main_vradio_pane_g

0x61af,	// (0x00012991) main_vradio_pane_t1_ParamLimits

0x61af,	// (0x00012991) main_vradio_pane_t1

0x61c4,	// (0x000129a6) main_vradio_pane_t2_ParamLimits

0x61c4,	// (0x000129a6) main_vradio_pane_t2

0xcf68,	// (0x0001974a) main_vradio_pane_t3_ParamLimits

0xcf68,	// (0x0001974a) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0001c075) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0001c075) main_vradio_pane_t

0x61d9,	// (0x000129bb) vradio_rocker_control_pane_ParamLimits

0x61d9,	// (0x000129bb) vradio_rocker_control_pane

0x61eb,	// (0x000129cd) vradio_station_info_pane_ParamLimits

0x61eb,	// (0x000129cd) vradio_station_info_pane

0xcf7c,	// (0x0001975e) vradio_frequency_info_pane_ParamLimits

0xcf7c,	// (0x0001975e) vradio_frequency_info_pane

0xc8f1,	// (0x000190d3) vradio_station_info_pane_g1

0xcf8b,	// (0x0001976d) vradio_station_info_pane_t1_ParamLimits

0xcf8b,	// (0x0001976d) vradio_station_info_pane_t1

0xcfad,	// (0x0001978f) vradio_station_info_pane_t2_ParamLimits

0xcfad,	// (0x0001978f) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0001c07c) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0001c07c) vradio_station_info_pane_t

0xcfbf,	// (0x000197a1) vradio_tuning_pane

0xcfc7,	// (0x000197a9) vradio_rocker_control_pane_g1

0xcfcf,	// (0x000197b1) vradio_rocker_control_pane_g2

0xcfd7,	// (0x000197b9) vradio_rocker_control_pane_g3

0xcfdf,	// (0x000197c1) vradio_rocker_control_pane_g4

0xcfe7,	// (0x000197c9) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0001c081) vradio_rocker_control_pane_g

0x61fd,	// (0x000129df) vradio_frequency_info_pane_g1

0xcfef,	// (0x000197d1) vradio_frequency_info_pane_t1_ParamLimits

0xcfef,	// (0x000197d1) vradio_frequency_info_pane_t1

0x6207,	// (0x000129e9) vradio_tuning_pane_g1

0x6212,	// (0x000129f4) vradio_tuning_pane_t1

0x99ec,	// (0x000161ce) area_side_right_pane_ParamLimits

0x99ec,	// (0x000161ce) area_side_right_pane

0xc3b0,	// (0x00018b92) status_small_pane_g1

0xc3b8,	// (0x00018b9a) status_small_pane_g2

0xc3c1,	// (0x00018ba3) status_small_pane_g3

0xc3ca,	// (0x00018bac) status_small_pane_g4

0x0003,

0xf65f,	// (0x0001be41) status_small_pane_g

0xc3d3,	// (0x00018bb5) status_small_pane_t1

0x99be,	// (0x000161a0) main_video3_pane

0xd003,	// (0x000197e5) cams_zoom_vslider_pane

0xd00b,	// (0x000197ed) image3_wide_pane_ParamLimits

0xd00b,	// (0x000197ed) image3_wide_pane

0xd025,	// (0x00019807) image3_wide_small_pane

0xd031,	// (0x00019813) main_video3_pane_g1_ParamLimits

0xd031,	// (0x00019813) main_video3_pane_g1

0xd04d,	// (0x0001982f) main_video3_pane_g2_ParamLimits

0xd04d,	// (0x0001982f) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0001c08c) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0001c08c) main_video3_pane_g

0xd069,	// (0x0001984b) main_video3_pane_t1_ParamLimits

0xd069,	// (0x0001984b) main_video3_pane_t1

0xd094,	// (0x00019876) main_video3_pane_t2_ParamLimits

0xd094,	// (0x00019876) main_video3_pane_t2

0xd0bf,	// (0x000198a1) main_video3_pane_t3_ParamLimits

0xd0bf,	// (0x000198a1) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0001c091) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0001c091) main_video3_pane_t

0xd0ec,	// (0x000198ce) cams_zoom_vslider_pane_g1

0xd0f5,	// (0x000198d7) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0001c098) cams_zoom_vslider_pane_g

0xd0fd,	// (0x000198df) small_slider_vertical_pane

0xc8f1,	// (0x000190d3) small_slider_vertical_pane_g1

0xc8f1,	// (0x000190d3) small_slider_vertical_pane_g2

0xd105,	// (0x000198e7) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0001c09d) small_slider_vertical_pane_g

0x99be,	// (0x000161a0) main_hwr_training_pane

0xd10e,	// (0x000198f0) hwr_training_instruct_pane_ParamLimits

0xd10e,	// (0x000198f0) hwr_training_instruct_pane

0x6221,	// (0x00012a03) hwr_training_navi_pane_ParamLimits

0x6221,	// (0x00012a03) hwr_training_navi_pane

0x6240,	// (0x00012a22) hwr_training_write_pane_ParamLimits

0x6240,	// (0x00012a22) hwr_training_write_pane

0x99be,	// (0x000161a0) bg_frame_shadow_pane

0xd145,	// (0x00019927) hwr_training_write_pane_g1

0xd14d,	// (0x0001992f) hwr_training_write_pane_g2

0xd155,	// (0x00019937) hwr_training_write_pane_g3

0xd15d,	// (0x0001993f) hwr_training_write_pane_g4

0xd165,	// (0x00019947) hwr_training_write_pane_g5

0xd16d,	// (0x0001994f) hwr_training_write_pane_g6

0xd175,	// (0x00019957) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0001c0a4) hwr_training_write_pane_g

0xd17d,	// (0x0001995f) hwr_training_navi_pane_g1_ParamLimits

0xd17d,	// (0x0001995f) hwr_training_navi_pane_g1

0xd18f,	// (0x00019971) hwr_training_navi_pane_g2_ParamLimits

0xd18f,	// (0x00019971) hwr_training_navi_pane_g2

0xd1a1,	// (0x00019983) hwr_training_navi_pane_g3_ParamLimits

0xd1a1,	// (0x00019983) hwr_training_navi_pane_g3

0xd1b1,	// (0x00019993) hwr_training_navi_pane_g4_ParamLimits

0xd1b1,	// (0x00019993) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0001c0b3) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0001c0b3) hwr_training_navi_pane_g

0xd1be,	// (0x000199a0) hwr_training_navi_pane_t1

0x628a,	// (0x00012a6c) list_single_hwr_training_instruct_pane_ParamLimits

0x628a,	// (0x00012a6c) list_single_hwr_training_instruct_pane

0xd1cc,	// (0x000199ae) list_single_hwr_training_instruct_pane_t1

0xc831,	// (0x00019013) bg_frame_shadow_pane_g1

0xd1db,	// (0x000199bd) bg_frame_shadow_pane_g2

0xd1e3,	// (0x000199c5) bg_frame_shadow_pane_g3

0xd1eb,	// (0x000199cd) bg_frame_shadow_pane_g4

0xd1f3,	// (0x000199d5) bg_frame_shadow_pane_g5

0xd1fb,	// (0x000199dd) bg_frame_shadow_pane_g6

0xd203,	// (0x000199e5) bg_frame_shadow_pane_g7

0xa2d2,	// (0x00016ab4) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0001c0be) bg_frame_shadow_pane_g

0x99be,	// (0x000161a0) main_video_tele_dialer_pane

0x62a7,	// (0x00012a89) aid_size_cell_video_keypad_ParamLimits

0x62a7,	// (0x00012a89) aid_size_cell_video_keypad

0x62c1,	// (0x00012aa3) grid_video_dialer_keypad_pane_ParamLimits

0x62c1,	// (0x00012aa3) grid_video_dialer_keypad_pane

0x630d,	// (0x00012aef) video_down_pane_cp_ParamLimits

0x630d,	// (0x00012aef) video_down_pane_cp

0x6341,	// (0x00012b23) cell_video_dialer_keypad_pane_ParamLimits

0x6341,	// (0x00012b23) cell_video_dialer_keypad_pane

0xd20b,	// (0x000199ed) bg_button_pane_cp08_ParamLimits

0xd20b,	// (0x000199ed) bg_button_pane_cp08

0x6363,	// (0x00012b45) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6363,	// (0x00012b45) cell_video_dialer_keypad_pane_g1

0x5a2b,	// (0x0001220d) mup3_rocker2_pane_ParamLimits

0x5a2b,	// (0x0001220d) mup3_rocker2_pane

0xc8f1,	// (0x000190d3) mup3_rocker2_pane_g1

0x4580,	// (0x00010d62) main_dialer2_pane

0x99be,	// (0x000161a0) main_mp4_pane

0xd21f,	// (0x00019a01) main_mp4_pane_g1_ParamLimits

0xd21f,	// (0x00019a01) main_mp4_pane_g1

0xd21f,	// (0x00019a01) main_mp4_pane_g2_ParamLimits

0xd21f,	// (0x00019a01) main_mp4_pane_g2

0x639e,	// (0x00012b80) main_mp4_pane_g3_ParamLimits

0x639e,	// (0x00012b80) main_mp4_pane_g3

0xd22d,	// (0x00019a0f) main_mp4_pane_g4_ParamLimits

0xd22d,	// (0x00019a0f) main_mp4_pane_g4

0xd247,	// (0x00019a29) main_mp4_pane_g5_ParamLimits

0xd247,	// (0x00019a29) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0001c0de) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0001c0de) main_mp4_pane_g

0xd27b,	// (0x00019a5d) main_mp4_pane_t1_ParamLimits

0xd27b,	// (0x00019a5d) main_mp4_pane_t1

0xd2d7,	// (0x00019ab9) main_mp4_pane_t2_ParamLimits

0xd2d7,	// (0x00019ab9) main_mp4_pane_t2

0xd329,	// (0x00019b0b) main_mp4_pane_t3_ParamLimits

0xd329,	// (0x00019b0b) main_mp4_pane_t3

0xd349,	// (0x00019b2b) main_mp4_pane_t4_ParamLimits

0xd349,	// (0x00019b2b) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0001c0eb) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0001c0eb) main_mp4_pane_t

0xd38d,	// (0x00019b6f) mp4_progress_pane_ParamLimits

0xd38d,	// (0x00019b6f) mp4_progress_pane

0xd3d7,	// (0x00019bb9) mp4_rocker_pane_ParamLimits

0xd3d7,	// (0x00019bb9) mp4_rocker_pane

0xd3ff,	// (0x00019be1) mp4_progress_pane_t1

0xd418,	// (0x00019bfa) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0001c0f4) mp4_progress_pane_t

0xd431,	// (0x00019c13) mup_progress_pane_cp04

0xc8f1,	// (0x000190d3) mp4_rocker_pane_g1

0x63da,	// (0x00012bbc) aid_cell_size_keypad2_ParamLimits

0x63da,	// (0x00012bbc) aid_cell_size_keypad2

0x63f0,	// (0x00012bd2) dialer2_ne_pane_ParamLimits

0x63f0,	// (0x00012bd2) dialer2_ne_pane

0x640a,	// (0x00012bec) grid_dialer2_keypad_pane_ParamLimits

0x640a,	// (0x00012bec) grid_dialer2_keypad_pane

0xc6d4,	// (0x00018eb6) bg_popup_call_pane_cp07_ParamLimits

0xc6d4,	// (0x00018eb6) bg_popup_call_pane_cp07

0x6428,	// (0x00012c0a) dialer2_ne_pane_t1_ParamLimits

0x6428,	// (0x00012c0a) dialer2_ne_pane_t1

0x6467,	// (0x00012c49) cell_dialer2_keypad_pane_ParamLimits

0x6467,	// (0x00012c49) cell_dialer2_keypad_pane

0xd44f,	// (0x00019c31) bg_button_pane_pane_cp04_ParamLimits

0xd44f,	// (0x00019c31) bg_button_pane_pane_cp04

0x648b,	// (0x00012c6d) cell_dialer2_keypad_pane_g1_ParamLimits

0x648b,	// (0x00012c6d) cell_dialer2_keypad_pane_g1

0x2654,	// (0x0000ee36) aid_placing_vt_set_content_ParamLimits

0x2654,	// (0x0000ee36) aid_placing_vt_set_content

0x267a,	// (0x0000ee5c) aid_placing_vt_set_title_ParamLimits

0x267a,	// (0x0000ee5c) aid_placing_vt_set_title

0x99be,	// (0x000161a0) main_image3_pane

0x6551,	// (0x00012d33) area_side_right_pane_cp01_ParamLimits

0x6551,	// (0x00012d33) area_side_right_pane_cp01

0xd21f,	// (0x00019a01) main_image3_pane_g1_ParamLimits

0xd21f,	// (0x00019a01) main_image3_pane_g1

0x6568,	// (0x00012d4a) main_image3_pane_g2_ParamLimits

0x6568,	// (0x00012d4a) main_image3_pane_g2

0x6590,	// (0x00012d72) main_image3_pane_g3_ParamLimits

0x6590,	// (0x00012d72) main_image3_pane_g3

0x65ba,	// (0x00012d9c) main_image3_pane_g4_ParamLimits

0x65ba,	// (0x00012d9c) main_image3_pane_g4

0x0003,

0xf921,	// (0x0001c103) main_image3_pane_g_ParamLimits

0xf921,	// (0x0001c103) main_image3_pane_g

0x65e4,	// (0x00012dc6) main_image3_pane_t1_ParamLimits

0x65e4,	// (0x00012dc6) main_image3_pane_t1

0x663c,	// (0x00012e1e) main_image3_pane_t2_ParamLimits

0x663c,	// (0x00012e1e) main_image3_pane_t2

0x668e,	// (0x00012e70) main_image3_pane_t3_ParamLimits

0x668e,	// (0x00012e70) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0001c10c) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0001c10c) main_image3_pane_t

0x9a2e,	// (0x00016210) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a2e,	// (0x00016210) grid_sctrl_middle_pane_cp01

0x6716,	// (0x00012ef8) cell_sctrl_middle_pane_cp01_ParamLimits

0x6716,	// (0x00012ef8) cell_sctrl_middle_pane_cp01

0x6733,	// (0x00012f15) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6733,	// (0x00012f15) cell_sctrl_middle_pane_cp01_g1

0x99be,	// (0x000161a0) main_call4_pane

0x6749,	// (0x00012f2b) aid_size_button_call4_ParamLimits

0x6749,	// (0x00012f2b) aid_size_button_call4

0x677a,	// (0x00012f5c) call4_windows_pane_ParamLimits

0x677a,	// (0x00012f5c) call4_windows_pane

0x679a,	// (0x00012f7c) grid_call4_button_pane_ParamLimits

0x679a,	// (0x00012f7c) grid_call4_button_pane

0xd48d,	// (0x00019c6f) call4_windows_conf_pane

0xd4a2,	// (0x00019c84) popup_call4_audio_first_window_ParamLimits

0xd4a2,	// (0x00019c84) popup_call4_audio_first_window

0xd4ee,	// (0x00019cd0) popup_call4_audio_second_window_ParamLimits

0xd4ee,	// (0x00019cd0) popup_call4_audio_second_window

0xd502,	// (0x00019ce4) popup_call4_audio_wait_window_ParamLimits

0xd502,	// (0x00019ce4) popup_call4_audio_wait_window

0x67c7,	// (0x00012fa9) cell_call4_button_pane_ParamLimits

0x67c7,	// (0x00012fa9) cell_call4_button_pane

0x67f0,	// (0x00012fd2) bg_button_pane_cp09_ParamLimits

0x67f0,	// (0x00012fd2) bg_button_pane_cp09

0x67fc,	// (0x00012fde) cell_call4_button_pane_g1_ParamLimits

0x67fc,	// (0x00012fde) cell_call4_button_pane_g1

0x6822,	// (0x00013004) cell_call4_button_pane_t1_ParamLimits

0x6822,	// (0x00013004) cell_call4_button_pane_t1

0xd54a,	// (0x00019d2c) popup_call4_audio_conf_window_ParamLimits

0xd54a,	// (0x00019d2c) popup_call4_audio_conf_window

0x5a8b,	// (0x0001226d) mup3_progress_pane_t1_ParamLimits

0x5aa2,	// (0x00012284) mup3_progress_pane_t2_ParamLimits

0xcc0b,	// (0x000193ed) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0001bfe5) mup3_progress_pane_t_ParamLimits

0xcc22,	// (0x00019404) mup_progress_pane_cp03_ParamLimits

0x6061,	// (0x00012843) mup3_control_keys_pane_g4_copy1

0xd3bb,	// (0x00019b9d) mp4_rocker2_pane_ParamLimits

0xd3bb,	// (0x00019b9d) mp4_rocker2_pane

0xd55e,	// (0x00019d40) mp4_rocker2_pane_g1

0xd566,	// (0x00019d48) mp4_rocker2_pane_g2

0xd56e,	// (0x00019d50) mp4_rocker2_pane_g3

0xd576,	// (0x00019d58) mp4_rocker2_pane_g4

0xd57e,	// (0x00019d60) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0001c115) mp4_rocker2_pane_g

0x99be,	// (0x000161a0) main_camera4_pane

0x99be,	// (0x000161a0) main_video4_pane

0x62dd,	// (0x00012abf) main_video_tele_dialer_pane_t1_ParamLimits

0x62dd,	// (0x00012abf) main_video_tele_dialer_pane_t1

0x62f5,	// (0x00012ad7) main_video_tele_dialer_pane_t2_ParamLimits

0x62f5,	// (0x00012ad7) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0001c0cf) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0001c0cf) main_video_tele_dialer_pane_t

0x6864,	// (0x00013046) cam4_autofocus_pane_ParamLimits

0x6864,	// (0x00013046) cam4_autofocus_pane

0x687a,	// (0x0001305c) cam4_image_uncrop_pane_ParamLimits

0x687a,	// (0x0001305c) cam4_image_uncrop_pane

0x6894,	// (0x00013076) cam4_indicators_pane_ParamLimits

0x6894,	// (0x00013076) cam4_indicators_pane

0x68bf,	// (0x000130a1) main_camera4_pane_g1_ParamLimits

0x68bf,	// (0x000130a1) main_camera4_pane_g1

0x68cb,	// (0x000130ad) main_camera4_pane_g2_ParamLimits

0x68cb,	// (0x000130ad) main_camera4_pane_g2

0x68d7,	// (0x000130b9) main_camera4_pane_g3_ParamLimits

0x68d7,	// (0x000130b9) main_camera4_pane_g3

0x68e3,	// (0x000130c5) main_camera4_pane_g4_ParamLimits

0x68e3,	// (0x000130c5) main_camera4_pane_g4

0x68ef,	// (0x000130d1) main_camera4_pane_g5_ParamLimits

0x68ef,	// (0x000130d1) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0001c120) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0001c120) main_camera4_pane_g

0x690c,	// (0x000130ee) main_camera4_pane_t1_ParamLimits

0x690c,	// (0x000130ee) main_camera4_pane_t1

0xcbf5,	// (0x000193d7) bg_tb_trans_pane_cp06

0x6944,	// (0x00013126) cam4_indicators_pane_g1

0x6951,	// (0x00013133) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0001c132) cam4_indicators_pane_g

0x6969,	// (0x0001314b) cam4_indicators_pane_t1

0x6993,	// (0x00013175) main_video4_pane_g1_ParamLimits

0x6993,	// (0x00013175) main_video4_pane_g1

0x69a5,	// (0x00013187) main_video4_pane_g2_ParamLimits

0x69a5,	// (0x00013187) main_video4_pane_g2

0x69b9,	// (0x0001319b) main_video4_pane_g3_ParamLimits

0x69b9,	// (0x0001319b) main_video4_pane_g3

0x69c9,	// (0x000131ab) main_video4_pane_g4_ParamLimits

0x69c9,	// (0x000131ab) main_video4_pane_g4

0x0004,

0xf957,	// (0x0001c139) main_video4_pane_g_ParamLimits

0xf957,	// (0x0001c139) main_video4_pane_g

0x69e9,	// (0x000131cb) vid4_indicators_pane_ParamLimits

0x69e9,	// (0x000131cb) vid4_indicators_pane

0x6a1b,	// (0x000131fd) video4_image_uncrop_cif_pane_ParamLimits

0x6a1b,	// (0x000131fd) video4_image_uncrop_cif_pane

0x6a35,	// (0x00013217) video4_image_uncrop_nhd_pane_ParamLimits

0x6a35,	// (0x00013217) video4_image_uncrop_nhd_pane

0x687a,	// (0x0001305c) video4_image_uncrop_vga_pane_ParamLimits

0x687a,	// (0x0001305c) video4_image_uncrop_vga_pane

0xcc48,	// (0x0001942a) bg_tb_trans_pane_cp07

0x6944,	// (0x00013126) vid4_indicators_pane_g1

0x6a49,	// (0x0001322b) vid4_indicators_pane_g2

0x6a56,	// (0x00013238) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0001c144) vid4_indicators_pane_g

0x6a6f,	// (0x00013251) vid4_indicators_pane_t1

0x6a81,	// (0x00013263) cam4_autofocus_pane_g1

0x6a89,	// (0x0001326b) cam4_autofocus_pane_g2

0x6a91,	// (0x00013273) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0001c14f) cam4_autofocus_pane_g

0x6a99,	// (0x0001327b) cam4_autofocus_pane_g3_copy1

0x6325,	// (0x00012b07) video_down_pane_cp_t1

0x6333,	// (0x00012b15) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0001c0d4) video_down_pane_cp_t

0x9a2e,	// (0x00016210) popup_vitu2_window_ParamLimits

0x9a2e,	// (0x00016210) popup_vitu2_window

0x6aa1,	// (0x00013283) aid_size_cell2_itu2_ParamLimits

0x6aa1,	// (0x00013283) aid_size_cell2_itu2

0x6ac7,	// (0x000132a9) aid_size_cell_itu2_ParamLimits

0x6ac7,	// (0x000132a9) aid_size_cell_itu2

0x6b23,	// (0x00013305) bg_popup_window_pane_cp09_ParamLimits

0x6b23,	// (0x00013305) bg_popup_window_pane_cp09

0x6b31,	// (0x00013313) field_vitu2_entry_pane_ParamLimits

0x6b31,	// (0x00013313) field_vitu2_entry_pane

0x6b57,	// (0x00013339) grid_vitu2_function_pane_ParamLimits

0x6b57,	// (0x00013339) grid_vitu2_function_pane

0x6ba8,	// (0x0001338a) grid_vitu2_itu_pane_ParamLimits

0x6ba8,	// (0x0001338a) grid_vitu2_itu_pane

0x6c39,	// (0x0001341b) cell_vitu2_itu_pane_ParamLimits

0x6c39,	// (0x0001341b) cell_vitu2_itu_pane

0x6c5d,	// (0x0001343f) cell_vitu2_function_pane_ParamLimits

0x6c5d,	// (0x0001343f) cell_vitu2_function_pane

0xd5ae,	// (0x00019d90) bg_popup_call_pane_cp08_ParamLimits

0xd5ae,	// (0x00019d90) bg_popup_call_pane_cp08

0xd5c7,	// (0x00019da9) field_vitu2_entry_pane_g1

0xd5d3,	// (0x00019db5) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0001c156) field_vitu2_entry_pane_g

0xd5ed,	// (0x00019dcf) field_vitu2_entry_pane_t1_ParamLimits

0xd5ed,	// (0x00019dcf) field_vitu2_entry_pane_t1

0xd60c,	// (0x00019dee) field_vitu2_entry_pane_t2_ParamLimits

0xd60c,	// (0x00019dee) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0001c15d) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0001c15d) field_vitu2_entry_pane_t

0x6c9c,	// (0x0001347e) bg_button_pane_cp010_ParamLimits

0x6c9c,	// (0x0001347e) bg_button_pane_cp010

0x6caa,	// (0x0001348c) cell_vitu2_itu_pane_g1

0x6cc8,	// (0x000134aa) cell_vitu2_itu_pane_t1_ParamLimits

0x6cc8,	// (0x000134aa) cell_vitu2_itu_pane_t1

0x6d2e,	// (0x00013510) cell_vitu2_itu_pane_t2_ParamLimits

0x6d2e,	// (0x00013510) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0001c167) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0001c167) cell_vitu2_itu_pane_t

0x9a2e,	// (0x00016210) bg_button_pane_cp011

0x6e0a,	// (0x000135ec) cell_vitu2_function_pane_g1

0x99be,	// (0x000161a0) main_myfav_hc_pane

0x66de,	// (0x00012ec0) popup_image3_note_pane_ParamLimits

0x66de,	// (0x00012ec0) popup_image3_note_pane

0x66fa,	// (0x00012edc) popup_image3_tool_bar_pane_ParamLimits

0x66fa,	// (0x00012edc) popup_image3_tool_bar_pane

0x6db2,	// (0x00013594) cell_vitu2_itu_pane_t3_ParamLimits

0x6db2,	// (0x00013594) cell_vitu2_itu_pane_t3

0x99be,	// (0x000161a0) bg_popup_trans_pane

0xd631,	// (0x00019e13) grid_image3_tool_bar_pane

0xd63b,	// (0x00019e1d) bg_popup_trans_pane_g1

0xa7ac,	// (0x00016f8e) bg_popup_trans_pane_g2

0xd643,	// (0x00019e25) bg_popup_trans_pane_g3

0xd64b,	// (0x00019e2d) bg_popup_trans_pane_g4

0xd653,	// (0x00019e35) bg_popup_trans_pane_g5

0xd65b,	// (0x00019e3d) bg_popup_trans_pane_g6

0xd663,	// (0x00019e45) bg_popup_trans_pane_g7

0xd66b,	// (0x00019e4d) bg_popup_trans_pane_g8

0xa78c,	// (0x00016f6e) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0001c16e) bg_popup_trans_pane_g

0xd673,	// (0x00019e55) cell_image3_tool_bar_pane_ParamLimits

0xd673,	// (0x00019e55) cell_image3_tool_bar_pane

0xc8f1,	// (0x000190d3) cell_image3_tool_bar_pane_g1

0x99be,	// (0x000161a0) bg_popup_trans_pane_cp1

0xd687,	// (0x00019e69) popup_image3_note_pane_t1

0xd695,	// (0x00019e77) popup_image3_note_pane_t2

0xd6a3,	// (0x00019e85) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0001c181) popup_image3_note_pane_t

0xd6b1,	// (0x00019e93) popup_image3_note_pane_t3_copy1

0x6e1e,	// (0x00013600) bg_myfav_hc_instruction_pane_ParamLimits

0x6e1e,	// (0x00013600) bg_myfav_hc_instruction_pane

0x6e34,	// (0x00013616) cell_myfav_contact_pane_ParamLimits

0x6e34,	// (0x00013616) cell_myfav_contact_pane

0x6e50,	// (0x00013632) cell_myfav_contact_pane_cp1_ParamLimits

0x6e50,	// (0x00013632) cell_myfav_contact_pane_cp1

0x6e68,	// (0x0001364a) cell_myfav_contact_pane_cp2_ParamLimits

0x6e68,	// (0x0001364a) cell_myfav_contact_pane_cp2

0x6e80,	// (0x00013662) cell_myfav_contact_pane_cp3_ParamLimits

0x6e80,	// (0x00013662) cell_myfav_contact_pane_cp3

0x6e97,	// (0x00013679) cell_myfav_contact_pane_cp4_ParamLimits

0x6e97,	// (0x00013679) cell_myfav_contact_pane_cp4

0x6eaf,	// (0x00013691) cell_myfav_contact_pane_cp5_ParamLimits

0x6eaf,	// (0x00013691) cell_myfav_contact_pane_cp5

0x6ec3,	// (0x000136a5) cell_myfav_contact_pane_cp6_ParamLimits

0x6ec3,	// (0x000136a5) cell_myfav_contact_pane_cp6

0x6ed9,	// (0x000136bb) cell_myfav_contact_pane_cp7_ParamLimits

0x6ed9,	// (0x000136bb) cell_myfav_contact_pane_cp7

0xd6bf,	// (0x00019ea1) listscroll_gen_pane_cp05

0x6ef3,	// (0x000136d5) main_myfav_hc_pane_g1_ParamLimits

0x6ef3,	// (0x000136d5) main_myfav_hc_pane_g1

0x6f0d,	// (0x000136ef) main_myfav_hc_pane_g2_ParamLimits

0x6f0d,	// (0x000136ef) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0001c188) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0001c188) main_myfav_hc_pane_g

0x6f3f,	// (0x00013721) main_myfav_hc_pane_t1_ParamLimits

0x6f3f,	// (0x00013721) main_myfav_hc_pane_t1

0xd6c8,	// (0x00019eaa) main_myfav_hc_pane_t2_ParamLimits

0xd6c8,	// (0x00019eaa) main_myfav_hc_pane_t2

0xd6da,	// (0x00019ebc) main_myfav_hc_pane_t3_ParamLimits

0xd6da,	// (0x00019ebc) main_myfav_hc_pane_t3

0x6f56,	// (0x00013738) main_myfav_hc_pane_t4_ParamLimits

0x6f56,	// (0x00013738) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0001c18f) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0001c18f) main_myfav_hc_pane_t

0xc8f1,	// (0x000190d3) bg_myfav_hc_instruction_pane_g1

0xd6ec,	// (0x00019ece) cell_myfav_contact_pane_g1_ParamLimits

0xd6ec,	// (0x00019ece) cell_myfav_contact_pane_g1

0xd6ec,	// (0x00019ece) cell_myfav_contact_pane_g2_ParamLimits

0xd6ec,	// (0x00019ece) cell_myfav_contact_pane_g2

0xd6f8,	// (0x00019eda) cell_myfav_contact_pane_g3_ParamLimits

0xd6f8,	// (0x00019eda) cell_myfav_contact_pane_g3

0xcbf5,	// (0x000193d7) cell_myfav_contact_pane_g4_ParamLimits

0xcbf5,	// (0x000193d7) cell_myfav_contact_pane_g4

0xd705,	// (0x00019ee7) cell_myfav_contact_pane_g5_ParamLimits

0xd705,	// (0x00019ee7) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0001c19a) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0001c19a) cell_myfav_contact_pane_g

0x6f27,	// (0x00013709) main_myfav_hc_pane_g3_ParamLimits

0x6f27,	// (0x00013709) main_myfav_hc_pane_g3

0x19ef,	// (0x0000e1d1) popup_adpt_find_window

0x6f7e,	// (0x00013760) afind_page_pane_ParamLimits

0x6f7e,	// (0x00013760) afind_page_pane

0x6f93,	// (0x00013775) aid_size_cell_afind_ParamLimits

0x6f93,	// (0x00013775) aid_size_cell_afind

0x6fb1,	// (0x00013793) bg_popup_sub_pane_cp09_ParamLimits

0x6fb1,	// (0x00013793) bg_popup_sub_pane_cp09

0x6fbe,	// (0x000137a0) find_pane_cp01_ParamLimits

0x6fbe,	// (0x000137a0) find_pane_cp01

0xd711,	// (0x00019ef3) grid_afind_control_pane_ParamLimits

0xd711,	// (0x00019ef3) grid_afind_control_pane

0x6fcb,	// (0x000137ad) grid_afind_pane_ParamLimits

0x6fcb,	// (0x000137ad) grid_afind_pane

0x6fed,	// (0x000137cf) cell_afind_pane_ParamLimits

0x6fed,	// (0x000137cf) cell_afind_pane

0xc8f1,	// (0x000190d3) afind_page_pane_g1

0x704e,	// (0x00013830) afind_page_pane_g2

0x7057,	// (0x00013839) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0001c1a5) afind_page_pane_g

0x7060,	// (0x00013842) afind_page_pane_t1

0xd725,	// (0x00019f07) cell_afind_grid_control_pane_ParamLimits

0xd725,	// (0x00019f07) cell_afind_grid_control_pane

0xd44f,	// (0x00019c31) bg_button_pane_cp69_ParamLimits

0xd44f,	// (0x00019c31) bg_button_pane_cp69

0x7080,	// (0x00013862) cell_afind_pane_g1_ParamLimits

0x7080,	// (0x00013862) cell_afind_pane_g1

0x708d,	// (0x0001386f) cell_afind_pane_t1_ParamLimits

0x708d,	// (0x0001386f) cell_afind_pane_t1

0xa4e2,	// (0x00016cc4) bg_button_pane_cp72

0xd734,	// (0x00019f16) cell_afind_grid_control_pane_g1

0x403b,	// (0x0001081d) aid_image_placing_area_ParamLimits

0x403b,	// (0x0001081d) aid_image_placing_area

0xcf0e,	// (0x000196f0) field_vitu_entry_pane_g1_ParamLimits

0xcf0e,	// (0x000196f0) field_vitu_entry_pane_g1

0xcf1a,	// (0x000196fc) field_vitu_entry_pane_g2_ParamLimits

0xcf1a,	// (0x000196fc) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0001c05f) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0001c05f) field_vitu_entry_pane_g

0x612e,	// (0x00012910) cell_vitu_itu_pane_g1_ParamLimits

0x6170,	// (0x00012952) cell_vitu_itu_pane_t3_ParamLimits

0x6170,	// (0x00012952) cell_vitu_itu_pane_t3

0xd3ff,	// (0x00019be1) mp4_progress_pane_t1_ParamLimits

0xd418,	// (0x00019bfa) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0001c0f4) mp4_progress_pane_t_ParamLimits

0xd431,	// (0x00019c13) mup_progress_pane_cp04_ParamLimits

0x6f6a,	// (0x0001374c) main_myfav_hc_pane_t5_ParamLimits

0x6f6a,	// (0x0001374c) main_myfav_hc_pane_t5

0x99e4,	// (0x000161c6) aid_zoom_text_primary

0x19ef,	// (0x0000e1d1) popup_adpt_find_window_ParamLimits

0x9a2e,	// (0x00016210) main_cam_set_pane

0x68ab,	// (0x0001308d) cam4_zoom_pane_ParamLimits

0x68ab,	// (0x0001308d) cam4_zoom_pane

0x709f,	// (0x00013881) main_cam_set_pane_g1_ParamLimits

0x709f,	// (0x00013881) main_cam_set_pane_g1

0x70ad,	// (0x0001388f) main_cam_set_pane_g2_ParamLimits

0x70ad,	// (0x0001388f) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0001c1ac) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0001c1ac) main_cam_set_pane_g

0x70d0,	// (0x000138b2) main_cam_set_pane_t1_ParamLimits

0x70d0,	// (0x000138b2) main_cam_set_pane_t1

0x70eb,	// (0x000138cd) main_cset_listscroll_pane_ParamLimits

0x70eb,	// (0x000138cd) main_cset_listscroll_pane

0x710d,	// (0x000138ef) main_cset_slider_pane_ParamLimits

0x710d,	// (0x000138ef) main_cset_slider_pane

0xd745,	// (0x00019f27) main_cset_list_pane_ParamLimits

0xd745,	// (0x00019f27) main_cset_list_pane

0xd755,	// (0x00019f37) scroll_pane_cp028

0x7133,	// (0x00013915) aid_area_touch_slider

0x714f,	// (0x00013931) cset_slider_pane

0x7179,	// (0x0001395b) main_cset_slider_pane_g1

0x718e,	// (0x00013970) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0001c1b1) main_cset_slider_pane_g

0xd78e,	// (0x00019f70) main_cset_slider_pane_t1

0x724a,	// (0x00013a2c) main_cset_slider_pane_t2

0x7264,	// (0x00013a46) main_cset_slider_pane_t3

0x727e,	// (0x00013a60) main_cset_slider_pane_t4

0x7298,	// (0x00013a7a) main_cset_slider_pane_t5

0x72b4,	// (0x00013a96) main_cset_slider_pane_t6

0x72c9,	// (0x00013aab) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0001c1d6) main_cset_slider_pane_t

0x73cd,	// (0x00013baf) cset_list_set_pane_ParamLimits

0x73cd,	// (0x00013baf) cset_list_set_pane

0x73e1,	// (0x00013bc3) aid_position_infowindow_above

0x73e9,	// (0x00013bcb) aid_position_infowindow_below

0x73f1,	// (0x00013bd3) cset_list_set_pane_g1_ParamLimits

0x73f1,	// (0x00013bd3) cset_list_set_pane_g1

0x73fd,	// (0x00013bdf) cset_list_set_pane_g3_ParamLimits

0x73fd,	// (0x00013bdf) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0001c1f5) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0001c1f5) cset_list_set_pane_g

0x740c,	// (0x00013bee) cset_list_set_pane_t1_ParamLimits

0x740c,	// (0x00013bee) cset_list_set_pane_t1

0x9a2e,	// (0x00016210) list_highlight_pane_cp021_ParamLimits

0x9a2e,	// (0x00016210) list_highlight_pane_cp021

0xb0a8,	// (0x0001788a) cset_slider_pane_g1

0xb0ba,	// (0x0001789c) cset_slider_pane_g2

0xb0b1,	// (0x00017893) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0001c1fa) cset_slider_pane_g

0xd82e,	// (0x0001a010) aid_area_touch_cam4_zoom

0xd836,	// (0x0001a018) cam4_zoom_cont_pane

0xd83e,	// (0x0001a020) cam4_zoom_pane_g1

0xd846,	// (0x0001a028) cam4_zoom_pane_g2

0x7421,	// (0x00013c03) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0001c201) cam4_zoom_pane_g

0xd84e,	// (0x0001a030) cam4_zoom_cont_pane_g1

0xd857,	// (0x0001a039) cam4_zoom_cont_pane_g2

0xd860,	// (0x0001a042) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0001c208) cam4_zoom_cont_pane_g

0x6767,	// (0x00012f49) call4_image_pane_ParamLimits

0x6767,	// (0x00012f49) call4_image_pane

0xd48d,	// (0x00019c6f) call4_windows_conf_pane_ParamLimits

0xd4cc,	// (0x00019cae) popup_call4_audio_in_window_ParamLimits

0xd4cc,	// (0x00019cae) popup_call4_audio_in_window

0x99be,	// (0x000161a0) bg_popup_call2_act_pane_cp02

0xd542,	// (0x00019d24) call4_list_conf_pane

0xc8f1,	// (0x000190d3) call4_image_pane_g1

0xc8f1,	// (0x000190d3) call4_image_pane_g2

0x0001,

0xf743,	// (0x0001bf25) call4_image_pane_g

0xd869,	// (0x0001a04b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd869,	// (0x0001a04b) list_single_graphic_popup_conf4_pane

0x99be,	// (0x000161a0) list_highlight_pane_cp022

0xd87c,	// (0x0001a05e) list_single_graphic_popup_conf4_pane_g1

0xad79,	// (0x0001755b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0001c20f) list_single_graphic_popup_conf4_pane_g

0xd884,	// (0x0001a066) list_single_graphic_popup_conf4_pane_t1

0x2754,	// (0x0000ef36) popup_vtel_slider_window_ParamLimits

0x2754,	// (0x0000ef36) popup_vtel_slider_window

0xd43d,	// (0x00019c1f) dialer2_ne_pane_t2_ParamLimits

0xd43d,	// (0x00019c1f) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0001c0f9) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0001c0f9) dialer2_ne_pane_t

0xc6d4,	// (0x00018eb6) bg_popup_sub_pane_cp010_ParamLimits

0xc6d4,	// (0x00018eb6) bg_popup_sub_pane_cp010

0x7429,	// (0x00013c0b) popup_vtel_slider_window_g1_ParamLimits

0x7429,	// (0x00013c0b) popup_vtel_slider_window_g1

0x743c,	// (0x00013c1e) popup_vtel_slider_window_g2_ParamLimits

0x743c,	// (0x00013c1e) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0001c214) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0001c214) popup_vtel_slider_window_g

0x7492,	// (0x00013c74) vtel_slider_pane_ParamLimits

0x7492,	// (0x00013c74) vtel_slider_pane

0x74b4,	// (0x00013c96) vtel_slider_pane_g1_ParamLimits

0x74b4,	// (0x00013c96) vtel_slider_pane_g1

0x74c8,	// (0x00013caa) vtel_slider_pane_g2_ParamLimits

0x74c8,	// (0x00013caa) vtel_slider_pane_g2

0x74e0,	// (0x00013cc2) vtel_slider_pane_g3_ParamLimits

0x74e0,	// (0x00013cc2) vtel_slider_pane_g3

0x74b4,	// (0x00013c96) vtel_slider_pane_g4_ParamLimits

0x74b4,	// (0x00013c96) vtel_slider_pane_g4

0x74f6,	// (0x00013cd8) vtel_slider_pane_g5_ParamLimits

0x74f6,	// (0x00013cd8) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0001c21d) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0001c21d) vtel_slider_pane_g

0x99be,	// (0x000161a0) main_gallery2_pane

0x6af3,	// (0x000132d5) aid_size_row_itut2_dropdow_list_ParamLimits

0x6af3,	// (0x000132d5) aid_size_row_itut2_dropdow_list

0x6b7f,	// (0x00013361) grid_vitu2_function_top_pane_ParamLimits

0x6b7f,	// (0x00013361) grid_vitu2_function_top_pane

0x6be4,	// (0x000133c6) popup_vitu2_dropdown_list_window_ParamLimits

0x6be4,	// (0x000133c6) popup_vitu2_dropdown_list_window

0x6c0d,	// (0x000133ef) popup_vitu2_match_list_window

0x750c,	// (0x00013cee) cell_vitu2_function_top_pane_ParamLimits

0x750c,	// (0x00013cee) cell_vitu2_function_top_pane

0x752a,	// (0x00013d0c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x752a,	// (0x00013d0c) cell_vitu2_function_top_pane_cp01

0x7548,	// (0x00013d2a) cell_vitu2_function_top_wide_pane_ParamLimits

0x7548,	// (0x00013d2a) cell_vitu2_function_top_wide_pane

0x9a2e,	// (0x00016210) bg_button_pane_cp012

0x7566,	// (0x00013d48) cell_vitu2_function_top_pane_g1

0xd8a0,	// (0x0001a082) bg_button_pane_cp013_ParamLimits

0xd8a0,	// (0x0001a082) bg_button_pane_cp013

0x757a,	// (0x00013d5c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x757a,	// (0x00013d5c) cell_vitu2_function_top_wide_pane_g1

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp20

0x7592,	// (0x00013d74) list_vitu2_match_list_pane

0xd63b,	// (0x00019e1d) bg_popup_sub_pane_cp20_g1

0xd643,	// (0x00019e25) bg_popup_sub_pane_cp20_g2

0xa7ac,	// (0x00016f8e) bg_popup_sub_pane_cp20_g3

0xd64b,	// (0x00019e2d) bg_popup_sub_pane_cp20_g4

0xa78c,	// (0x00016f6e) bg_popup_sub_pane_cp20_g5

0xd8bc,	// (0x0001a09e) bg_popup_sub_pane_cp20_g6

0xd65b,	// (0x00019e3d) bg_popup_sub_pane_cp20_g7

0xd663,	// (0x00019e45) bg_popup_sub_pane_cp20_g8

0xd66b,	// (0x00019e4d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0001c228) bg_popup_sub_pane_cp20_g

0xd8c4,	// (0x0001a0a6) list_vitu2_match_list_item_pane_ParamLimits

0xd8c4,	// (0x0001a0a6) list_vitu2_match_list_item_pane

0xd8d6,	// (0x0001a0b8) list_vitu2_match_list_item_pane_t1

0x99be,	// (0x000161a0) bg_popup_sub_pane_cp21

0xac0f,	// (0x000173f1) grid_vitu2_dropdown_list_pane

0x75e1,	// (0x00013dc3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75e1,	// (0x00013dc3) cell_vitu2_dropdown_list_char_pane

0x7602,	// (0x00013de4) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7602,	// (0x00013de4) cell_vitu2_dropdown_list_ctrl_pane

0xd8fc,	// (0x0001a0de) cell_vitu2_dropdown_list_char_pane_g1

0xd905,	// (0x0001a0e7) cell_vitu2_dropdown_list_char_pane_g2

0xd90e,	// (0x0001a0f0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0001c245) cell_vitu2_dropdown_list_char_pane_g

0x762e,	// (0x00013e10) cell_vitu2_dropdown_list_char_pane_t1

0x763c,	// (0x00013e1e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x763c,	// (0x00013e1e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x764c,	// (0x00013e2e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x764c,	// (0x00013e2e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x765d,	// (0x00013e3f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x765d,	// (0x00013e3f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x766d,	// (0x00013e4f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x766d,	// (0x00013e4f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcb58,	// (0x0001933a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcb58,	// (0x0001933a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0001c24c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0001c24c) cell_vitu2_dropdown_list_ctrl_pane_g

0x7689,	// (0x00013e6b) aid_size_cell_gallery2_ParamLimits

0x7689,	// (0x00013e6b) aid_size_cell_gallery2

0x769f,	// (0x00013e81) grid_gallery2_pane_ParamLimits

0x769f,	// (0x00013e81) grid_gallery2_pane

0x76b3,	// (0x00013e95) scroll_pane_cp029_ParamLimits

0x76b3,	// (0x00013e95) scroll_pane_cp029

0x76bf,	// (0x00013ea1) cell_gallery2_pane_ParamLimits

0x76bf,	// (0x00013ea1) cell_gallery2_pane

0xd917,	// (0x0001a0f9) cell_gallery2_pane_g2

0x76f5,	// (0x00013ed7) cell_gallery2_pane_g3

0xd921,	// (0x0001a103) cell_gallery2_pane_g4

0xd929,	// (0x0001a10b) cell_gallery2_pane_g5

0xaf52,	// (0x00017734) grid_highlight_pane_cp10

0x6c0d,	// (0x000133ef) popup_vitu2_match_list_window_ParamLimits

0x6c22,	// (0x00013404) popup_vitu2_query_window_ParamLimits

0x6c22,	// (0x00013404) popup_vitu2_query_window

0x99be,	// (0x000161a0) bg_vitu2_candi_button_pane

0xd8fc,	// (0x0001a0de) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd905,	// (0x0001a0e7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd90e,	// (0x0001a0f0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x76fd,	// (0x00013edf) bg_button_pane_cp015

0x7707,	// (0x00013ee9) bg_button_pane_cp016

0x7711,	// (0x00013ef3) bg_button_pane_cp017

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp22

0xd931,	// (0x0001a113) popup_vitu2_query_window_g1

0x7739,	// (0x00013f1b) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0001c257) popup_vitu2_query_window_g

0x7747,	// (0x00013f29) popup_vitu2_query_window_t1_ParamLimits

0x7747,	// (0x00013f29) popup_vitu2_query_window_t1

0x776f,	// (0x00013f51) popup_vitu2_query_window_t2_ParamLimits

0x776f,	// (0x00013f51) popup_vitu2_query_window_t2

0x7781,	// (0x00013f63) popup_vitu2_query_window_t3_ParamLimits

0x7781,	// (0x00013f63) popup_vitu2_query_window_t3

0x77a9,	// (0x00013f8b) popup_vitu2_query_window_t4_ParamLimits

0x77a9,	// (0x00013f8b) popup_vitu2_query_window_t4

0x77bd,	// (0x00013f9f) popup_vitu2_query_window_t5_ParamLimits

0x77bd,	// (0x00013f9f) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0001c25c) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0001c25c) popup_vitu2_query_window_t

0xd73d,	// (0x00019f1f) main_cset_text_pane

0x7133,	// (0x00013915) aid_area_touch_slider_ParamLimits

0x714f,	// (0x00013931) cset_slider_pane_ParamLimits

0x7179,	// (0x0001395b) main_cset_slider_pane_g1_ParamLimits

0x718e,	// (0x00013970) main_cset_slider_pane_g2_ParamLimits

0xd75e,	// (0x00019f40) main_cset_slider_pane_g3_ParamLimits

0xd75e,	// (0x00019f40) main_cset_slider_pane_g3

0x71a3,	// (0x00013985) main_cset_slider_pane_g4_ParamLimits

0x71a3,	// (0x00013985) main_cset_slider_pane_g4

0x71b2,	// (0x00013994) main_cset_slider_pane_g5_ParamLimits

0x71b2,	// (0x00013994) main_cset_slider_pane_g5

0x71be,	// (0x000139a0) main_cset_slider_pane_g6_ParamLimits

0x71be,	// (0x000139a0) main_cset_slider_pane_g6

0xf9cf,	// (0x0001c1b1) main_cset_slider_pane_g_ParamLimits

0xd78e,	// (0x00019f70) main_cset_slider_pane_t1_ParamLimits

0x724a,	// (0x00013a2c) main_cset_slider_pane_t2_ParamLimits

0x7264,	// (0x00013a46) main_cset_slider_pane_t3_ParamLimits

0x727e,	// (0x00013a60) main_cset_slider_pane_t4_ParamLimits

0x7298,	// (0x00013a7a) main_cset_slider_pane_t5_ParamLimits

0x72b4,	// (0x00013a96) main_cset_slider_pane_t6_ParamLimits

0x72c9,	// (0x00013aab) main_cset_slider_pane_t7_ParamLimits

0x72f3,	// (0x00013ad5) main_cset_slider_pane_t8_ParamLimits

0x72f3,	// (0x00013ad5) main_cset_slider_pane_t8

0x731b,	// (0x00013afd) main_cset_slider_pane_t9_ParamLimits

0x731b,	// (0x00013afd) main_cset_slider_pane_t9

0x7343,	// (0x00013b25) main_cset_slider_pane_t10_ParamLimits

0x7343,	// (0x00013b25) main_cset_slider_pane_t10

0x736b,	// (0x00013b4d) main_cset_slider_pane_t11_ParamLimits

0x736b,	// (0x00013b4d) main_cset_slider_pane_t11

0x7393,	// (0x00013b75) main_cset_slider_pane_t12_ParamLimits

0x7393,	// (0x00013b75) main_cset_slider_pane_t12

0x73b0,	// (0x00013b92) main_cset_slider_pane_t13_ParamLimits

0x73b0,	// (0x00013b92) main_cset_slider_pane_t13

0xf9f4,	// (0x0001c1d6) main_cset_slider_pane_t_ParamLimits

0x99be,	// (0x000161a0) bg_popup_sub_pane_cp011

0xd93d,	// (0x0001a11f) main_cset_text_pane_g1

0xd945,	// (0x0001a127) main_cset_text_pane_t1

0xd953,	// (0x0001a135) main_cset_text_pane_t2

0xd961,	// (0x0001a143) main_cset_text_pane_t3

0xd96f,	// (0x0001a151) main_cset_text_pane_t4

0xd97d,	// (0x0001a15f) main_cset_text_pane_t5

0xd98b,	// (0x0001a16d) main_cset_text_pane_t6

0xd999,	// (0x0001a17b) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0001c267) main_cset_text_pane_t

0x99be,	// (0x000161a0) main_cam4_burst_pane

0x99be,	// (0x000161a0) main_cam5_pane

0x706e,	// (0x00013850) bg_button_pane_cp019

0x7077,	// (0x00013859) bg_button_pane_cp020

0xd76a,	// (0x00019f4c) main_cset_slider_pane_g7_ParamLimits

0xd76a,	// (0x00019f4c) main_cset_slider_pane_g7

0xd776,	// (0x00019f58) main_cset_slider_pane_g8_ParamLimits

0xd776,	// (0x00019f58) main_cset_slider_pane_g8

0x71d2,	// (0x000139b4) main_cset_slider_pane_g9_ParamLimits

0x71d2,	// (0x000139b4) main_cset_slider_pane_g9

0x71de,	// (0x000139c0) main_cset_slider_pane_g10_ParamLimits

0x71de,	// (0x000139c0) main_cset_slider_pane_g10

0x71ea,	// (0x000139cc) main_cset_slider_pane_g11_ParamLimits

0x71ea,	// (0x000139cc) main_cset_slider_pane_g11

0x71f6,	// (0x000139d8) main_cset_slider_pane_g12_ParamLimits

0x71f6,	// (0x000139d8) main_cset_slider_pane_g12

0x7202,	// (0x000139e4) main_cset_slider_pane_g13_ParamLimits

0x7202,	// (0x000139e4) main_cset_slider_pane_g13

0x720e,	// (0x000139f0) main_cset_slider_pane_g14_ParamLimits

0x720e,	// (0x000139f0) main_cset_slider_pane_g14

0x721a,	// (0x000139fc) main_cset_slider_pane_g15_ParamLimits

0x721a,	// (0x000139fc) main_cset_slider_pane_g15

0xd7bc,	// (0x00019f9e) main_cset_slider_pane_t14_ParamLimits

0xd7bc,	// (0x00019f9e) main_cset_slider_pane_t14

0xd7f5,	// (0x00019fd7) main_cset_slider_pane_t15_ParamLimits

0xd7f5,	// (0x00019fd7) main_cset_slider_pane_t15

0x77d1,	// (0x00013fb3) aid_cam4_burst_size_cell_ParamLimits

0x77d1,	// (0x00013fb3) aid_cam4_burst_size_cell

0x77f1,	// (0x00013fd3) grid_cam4_burst_pane_ParamLimits

0x77f1,	// (0x00013fd3) grid_cam4_burst_pane

0x7829,	// (0x0001400b) linegrid_cam4_burst_pane_ParamLimits

0x7829,	// (0x0001400b) linegrid_cam4_burst_pane

0x784f,	// (0x00014031) scroll_pane_cp30_ParamLimits

0x784f,	// (0x00014031) scroll_pane_cp30

0x785b,	// (0x0001403d) cell_cam4_burst_pane_ParamLimits

0x785b,	// (0x0001403d) cell_cam4_burst_pane

0xd9a7,	// (0x0001a189) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9a7,	// (0x0001a189) linegrid_cam4_burst_pane_g1

0x78a8,	// (0x0001408a) linegrid_cam4_burst_pane_g2_ParamLimits

0x78a8,	// (0x0001408a) linegrid_cam4_burst_pane_g2

0xd9b4,	// (0x0001a196) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9b4,	// (0x0001a196) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0001c276) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0001c276) linegrid_cam4_burst_pane_g

0x78b9,	// (0x0001409b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x78b9,	// (0x0001409b) linegrid_cam4_burst_pane_g3_copy1

0xd9c1,	// (0x0001a1a3) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9c1,	// (0x0001a1a3) linegrid_cam4_burst_pane_g4

0x78d3,	// (0x000140b5) linegrid_cam4_burst_pane_g5_ParamLimits

0x78d3,	// (0x000140b5) linegrid_cam4_burst_pane_g5

0x78e4,	// (0x000140c6) linegrid_cam4_burst_pane_g6_ParamLimits

0x78e4,	// (0x000140c6) linegrid_cam4_burst_pane_g6

0xd9ce,	// (0x0001a1b0) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ce,	// (0x0001a1b0) linegrid_cam4_burst_pane_g7

0x78fb,	// (0x000140dd) cell_cam4_burst_pane_g1

0xd9e7,	// (0x0001a1c9) main_cam5_pane_t1_ParamLimits

0xd9e7,	// (0x0001a1c9) main_cam5_pane_t1

0xd9f9,	// (0x0001a1db) main_cam5_pane_t2_ParamLimits

0xd9f9,	// (0x0001a1db) main_cam5_pane_t2

0xda0b,	// (0x0001a1ed) main_cam5_pane_t3_ParamLimits

0xda0b,	// (0x0001a1ed) main_cam5_pane_t3

0xda1d,	// (0x0001a1ff) main_cam5_pane_t4_ParamLimits

0xda1d,	// (0x0001a1ff) main_cam5_pane_t4

0xda33,	// (0x0001a215) main_cam5_pane_t5_ParamLimits

0xda33,	// (0x0001a215) main_cam5_pane_t5

0xda45,	// (0x0001a227) main_cam5_pane_t6_ParamLimits

0xda45,	// (0x0001a227) main_cam5_pane_t6

0xda59,	// (0x0001a23b) main_cam5_pane_t7_ParamLimits

0xda59,	// (0x0001a23b) main_cam5_pane_t7

0xda6b,	// (0x0001a24d) main_cam5_pane_t8_ParamLimits

0xda6b,	// (0x0001a24d) main_cam5_pane_t8

0xda87,	// (0x0001a269) main_cam5_pane_t9_ParamLimits

0xda87,	// (0x0001a269) main_cam5_pane_t9

0xda99,	// (0x0001a27b) main_cam5_pane_t10_ParamLimits

0xda99,	// (0x0001a27b) main_cam5_pane_t10

0xdaab,	// (0x0001a28d) main_cam5_pane_t11_ParamLimits

0xdaab,	// (0x0001a28d) main_cam5_pane_t11

0xdabd,	// (0x0001a29f) main_cam5_pane_t12_ParamLimits

0xdabd,	// (0x0001a29f) main_cam5_pane_t12

0xdad2,	// (0x0001a2b4) main_cam5_pane_t13_ParamLimits

0xdad2,	// (0x0001a2b4) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0001c282) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0001c282) main_cam5_pane_t

0x1a72,	// (0x0000e254) popup_scut_keymap_window_ParamLimits

0x1a72,	// (0x0000e254) popup_scut_keymap_window

0x790e,	// (0x000140f0) aid_size_cell_brow_shortcut

0xaf52,	// (0x00017734) bg_popup_window_pane_cp010

0x791a,	// (0x000140fc) grid_scut_pane

0x7926,	// (0x00014108) cell_scut_pane_ParamLimits

0x7926,	// (0x00014108) cell_scut_pane

0x793d,	// (0x0001411f) cell_scut_pane_g1

0xdaef,	// (0x0001a2d1) cell_scut_pane_t1

0xdafe,	// (0x0001a2e0) cell_scut_pane_t2

0x7946,	// (0x00014128) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0001c29d) cell_scut_pane_t

0x566a,	// (0x00011e4c) main_mup3_pane_g8_ParamLimits

0x566a,	// (0x00011e4c) main_mup3_pane_g8

0x6b0b,	// (0x000132ed) area_vitu2_query_pane_ParamLimits

0x6b0b,	// (0x000132ed) area_vitu2_query_pane

0x771b,	// (0x00013efd) input_focus_pane_cp08

0xdb0d,	// (0x0001a2ef) area_vitu2_query_pane_g1

0x7954,	// (0x00014136) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0001c2a4) area_vitu2_query_pane_g

0x7965,	// (0x00014147) area_vitu2_query_pane_t1_ParamLimits

0x7965,	// (0x00014147) area_vitu2_query_pane_t1

0x7979,	// (0x0001415b) area_vitu2_query_pane_t2_ParamLimits

0x7979,	// (0x0001415b) area_vitu2_query_pane_t2

0x798d,	// (0x0001416f) area_vitu2_query_pane_t3_ParamLimits

0x798d,	// (0x0001416f) area_vitu2_query_pane_t3

0xdb19,	// (0x0001a2fb) area_vitu2_query_pane_t4_ParamLimits

0xdb19,	// (0x0001a2fb) area_vitu2_query_pane_t4

0xdb41,	// (0x0001a323) area_vitu2_query_pane_t5_ParamLimits

0xdb41,	// (0x0001a323) area_vitu2_query_pane_t5

0xdb69,	// (0x0001a34b) area_vitu2_query_pane_t6_ParamLimits

0xdb69,	// (0x0001a34b) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0001c2a9) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0001c2a9) area_vitu2_query_pane_t

0x79b5,	// (0x00014197) bg_button_pane_cp018

0x79c3,	// (0x000141a5) bg_button_pane_cp021

0x79cf,	// (0x000141b1) bg_button_pane_cp022

0x79e0,	// (0x000141c2) input_focus_pane_cp09

0x362d,	// (0x0000fe0f) aid_size_touch_mv_arrow_left

0x3656,	// (0x0000fe38) aid_size_touch_mv_arrow_right

0x7232,	// (0x00013a14) main_cset_slider_pane_g16_ParamLimits

0x7232,	// (0x00013a14) main_cset_slider_pane_g16

0x723e,	// (0x00013a20) main_cset_slider_pane_g17_ParamLimits

0x723e,	// (0x00013a20) main_cset_slider_pane_g17

0x78fb,	// (0x000140dd) cell_cam4_burst_pane_g1_ParamLimits

0x99be,	// (0x000161a0) compa_mode_pane

0x744c,	// (0x00013c2e) popup_vtel_slider_window_g3_ParamLimits

0x744c,	// (0x00013c2e) popup_vtel_slider_window_g3

0x7463,	// (0x00013c45) popup_vtel_slider_window_g4_ParamLimits

0x7463,	// (0x00013c45) popup_vtel_slider_window_g4

0x747a,	// (0x00013c5c) popup_vtel_slider_window_t1_ParamLimits

0x747a,	// (0x00013c5c) popup_vtel_slider_window_t1

0x99be,	// (0x000161a0) main_cl_pane

0xc411,	// (0x00018bf3) popup_imed_adjust2_window_ParamLimits

0xc3e9,	// (0x00018bcb) bg_tb_trans_pane_cp05_ParamLimits

0xce43,	// (0x00019625) popup_imed_adjust2_window_g1_ParamLimits

0xce52,	// (0x00019634) popup_imed_adjust2_window_g2_ParamLimits

0xce52,	// (0x00019634) popup_imed_adjust2_window_g2

0xce5e,	// (0x00019640) popup_imed_adjust2_window_g3_ParamLimits

0xce5e,	// (0x00019640) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0001c023) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0001c023) popup_imed_adjust2_window_g

0xce6a,	// (0x0001964c) popup_imed_adjust2_window_t1_ParamLimits

0xce82,	// (0x00019664) slider_imed_adjust_pane_ParamLimits

0xce96,	// (0x00019678) slider_imed_adjust_pane_g1_ParamLimits

0xcea6,	// (0x00019688) slider_imed_adjust_pane_g2_ParamLimits

0xceb6,	// (0x00019698) slider_imed_adjust_pane_g3_ParamLimits

0xcec7,	// (0x000196a9) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0001c02a) slider_imed_adjust_pane_g_ParamLimits

0x684c,	// (0x0001302e) aid_touch_area_cam4_ParamLimits

0x684c,	// (0x0001302e) aid_touch_area_cam4

0xd586,	// (0x00019d68) battery_pane_cp01

0x6900,	// (0x000130e2) main_camera4_pane_g6_ParamLimits

0x6900,	// (0x000130e2) main_camera4_pane_g6

0x6923,	// (0x00013105) main_camera4_pane_t2_ParamLimits

0x6923,	// (0x00013105) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0001c12d) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0001c12d) main_camera4_pane_t

0x697b,	// (0x0001315d) aid_touch_area_vid4_ParamLimits

0x697b,	// (0x0001315d) aid_touch_area_vid4

0x69d9,	// (0x000131bb) main_video4_pane_g5_ParamLimits

0x69d9,	// (0x000131bb) main_video4_pane_g5

0x6a00,	// (0x000131e2) vid4_progress_pane_ParamLimits

0x6a00,	// (0x000131e2) vid4_progress_pane

0xd782,	// (0x00019f64) main_cset_slider_pane_g18_ParamLimits

0xd782,	// (0x00019f64) main_cset_slider_pane_g18

0xd9db,	// (0x0001a1bd) cell_cam4_burst_pane_g2_ParamLimits

0xd9db,	// (0x0001a1bd) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0001c27d) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0001c27d) cell_cam4_burst_pane_g

0xa1d9,	// (0x000169bb) bg_cl_pane_ParamLimits

0xa1d9,	// (0x000169bb) bg_cl_pane

0x79f1,	// (0x000141d3) cl_header_pane_ParamLimits

0x79f1,	// (0x000141d3) cl_header_pane

0x7a05,	// (0x000141e7) cl_listscroll_pane_ParamLimits

0x7a05,	// (0x000141e7) cl_listscroll_pane

0xdbb5,	// (0x0001a397) bg_cl_pane_g1

0xdbbd,	// (0x0001a39f) bg_cl_pane_g2

0xdbc5,	// (0x0001a3a7) bg_cl_pane_g3

0xdbcd,	// (0x0001a3af) bg_cl_pane_g4

0xdbd5,	// (0x0001a3b7) bg_cl_pane_g5

0xdbdd,	// (0x0001a3bf) bg_cl_pane_g6

0xdbe5,	// (0x0001a3c7) bg_cl_pane_g7

0xdbed,	// (0x0001a3cf) bg_cl_pane_g8

0xdbf5,	// (0x0001a3d7) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0001c2b8) bg_cl_pane_g

0x7a15,	// (0x000141f7) aid_height_cl_leading_ParamLimits

0x7a15,	// (0x000141f7) aid_height_cl_leading

0x7a21,	// (0x00014203) aid_height_cl_text_ParamLimits

0x7a21,	// (0x00014203) aid_height_cl_text

0x9a2e,	// (0x00016210) bg_cl_header_pane_ParamLimits

0x9a2e,	// (0x00016210) bg_cl_header_pane

0x7a40,	// (0x00014222) cl_header_pane_g1_ParamLimits

0x7a40,	// (0x00014222) cl_header_pane_g1

0x7a56,	// (0x00014238) cl_header_pane_t1_ParamLimits

0x7a56,	// (0x00014238) cl_header_pane_t1

0xdbfd,	// (0x0001a3df) cl_list_pane

0xd755,	// (0x00019f37) hc_scroll_pane_cp01

0xa78c,	// (0x00016f6e) bg_cl_header_pane_g1

0xd63b,	// (0x00019e1d) bg_cl_header_pane_g2

0xa7ac,	// (0x00016f8e) bg_cl_header_pane_g3

0xd64b,	// (0x00019e2d) bg_cl_header_pane_g4

0xd643,	// (0x00019e25) bg_cl_header_pane_g5

0xd8bc,	// (0x0001a09e) bg_cl_header_pane_g6

0xd663,	// (0x00019e45) bg_cl_header_pane_g7

0xd66b,	// (0x00019e4d) bg_cl_header_pane_g8

0xd65b,	// (0x00019e3d) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0001c2cb) bg_cl_header_pane_g

0x7a6f,	// (0x00014251) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7a6f,	// (0x00014251) hc_cl_list_double_graphic_heading_pane

0x7a83,	// (0x00014265) hc_cl_list_single_graphic_pane_ParamLimits

0x7a83,	// (0x00014265) hc_cl_list_single_graphic_pane

0x7a9d,	// (0x0001427f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7a9d,	// (0x0001427f) hc_cl_list_single_graphic_pane_g1

0x7aa9,	// (0x0001428b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7aa9,	// (0x0001428b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0001c2de) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0001c2de) hc_cl_list_single_graphic_pane_g

0x7abd,	// (0x0001429f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7abd,	// (0x0001429f) hc_cl_list_single_graphic_pane_t1

0x7a9d,	// (0x0001427f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7a9d,	// (0x0001427f) hc_cl_list_double_graphic_heading_pane_g1

0x7ad2,	// (0x000142b4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7ad2,	// (0x000142b4) hc_cl_list_double_graphic_heading_pane_g2

0x7ae6,	// (0x000142c8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7ae6,	// (0x000142c8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0001c2e3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0001c2e3) hc_cl_list_double_graphic_heading_pane_g

0x7afa,	// (0x000142dc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7afa,	// (0x000142dc) hc_cl_list_double_graphic_heading_pane_t1

0x7b0f,	// (0x000142f1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7b0f,	// (0x000142f1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0001c2ea) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0001c2ea) hc_cl_list_double_graphic_heading_pane_t

0xdc0e,	// (0x0001a3f0) vid4_progress_pane_g1

0xdc1a,	// (0x0001a3fc) vid4_progress_pane_g2

0xdc26,	// (0x0001a408) vid4_progress_pane_g3

0xdc35,	// (0x0001a417) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0001c2ef) vid4_progress_pane_g

0xdc53,	// (0x0001a435) vid4_progress_pane_t1

0xdc69,	// (0x0001a44b) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0001c2fa) vid4_progress_pane_t

0xdc94,	// (0x0001a476) wait_bar_pane_cp07

0xc6e2,	// (0x00018ec4) blid_firmament_pane_ParamLimits

0xc725,	// (0x00018f07) popup_blid_sat_info2_window_g1

0xc749,	// (0x00018f2b) popup_blid_sat_info2_window_t3

0xc757,	// (0x00018f39) popup_blid_sat_info2_window_t4

0xc765,	// (0x00018f47) popup_blid_sat_info2_window_t5

0xc773,	// (0x00018f55) popup_blid_sat_info2_window_t6

0xc783,	// (0x00018f65) popup_blid_sat_info2_window_t7

0xc791,	// (0x00018f73) popup_blid_sat_info2_window_t8

0xc79f,	// (0x00018f81) popup_blid_sat_info2_window_t9

0xc7ad,	// (0x00018f8f) popup_blid_sat_info2_window_t10

0xc871,	// (0x00019053) aid_firma_cardinal_ParamLimits

0xc885,	// (0x00019067) blid_firmament_pane_t1_ParamLimits

0xc89c,	// (0x0001907e) blid_firmament_pane_t2_ParamLimits

0xc8b3,	// (0x00019095) blid_firmament_pane_t3_ParamLimits

0xc8ca,	// (0x000190ac) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0001bf1c) blid_firmament_pane_t_ParamLimits

0xc8e1,	// (0x000190c3) blid_sat_info_pane_ParamLimits

0x9a2e,	// (0x00016210) main_cam_set_pane_ParamLimits

0x5ed8,	// (0x000126ba) aid_size_cell_colour_35_ParamLimits

0x5ef8,	// (0x000126da) aid_size_cell_colour_112_ParamLimits

0x5f18,	// (0x000126fa) aid_size_cell_effect_ParamLimits

0xc3e9,	// (0x00018bcb) bg_tb_trans_pane_cp02_ParamLimits

0xa9ac,	// (0x0001718e) heading_imed_pane_ParamLimits

0x5f38,	// (0x0001271a) listscroll_imed_pane_ParamLimits

0xba1b,	// (0x000181fd) popup_call2_audio_first_window_g5_ParamLimits

0xba1b,	// (0x000181fd) popup_call2_audio_first_window_g5

0x64f3,	// (0x00012cd5) aid_size_touch_image3_arrow_left_ParamLimits

0x64f3,	// (0x00012cd5) aid_size_touch_image3_arrow_left

0x651f,	// (0x00012d01) aid_size_touch_image3_arrow_right_ParamLimits

0x651f,	// (0x00012d01) aid_size_touch_image3_arrow_right

0xdc7f,	// (0x0001a461) vid4_progress_pane_t3

0x625b,	// (0x00012a3d) main_hwr_training_symbol_option_pane_ParamLimits

0x625b,	// (0x00012a3d) main_hwr_training_symbol_option_pane

0xd130,	// (0x00019912) popup_hwr_training_preview_window_ParamLimits

0xd130,	// (0x00019912) popup_hwr_training_preview_window

0x627b,	// (0x00012a5d) hwr_training_navi_pane_g5_ParamLimits

0x627b,	// (0x00012a5d) hwr_training_navi_pane_g5

0xd629,	// (0x00019e0b) popup_char_count_window

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp20_ParamLimits

0x7592,	// (0x00013d74) list_vitu2_match_list_pane_ParamLimits

0x75a1,	// (0x00013d83) vitu2_page_scroll_pane_ParamLimits

0x75a1,	// (0x00013d83) vitu2_page_scroll_pane

0xdcfe,	// (0x0001a4e0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcfe,	// (0x0001a4e0) list_single_hwr_training_symbol_option_pane

0xdd11,	// (0x0001a4f3) list_single_hwr_training_symbol_option_pane_g1

0xdd19,	// (0x0001a4fb) list_single_hwr_training_symbol_option_pane_t1

0xdd27,	// (0x0001a509) bg_button_pane_cp023

0xdd30,	// (0x0001a512) bg_button_pane_cp024

0x7b2e,	// (0x00014310) vitu2_page_scroll_pane_g1

0x7b36,	// (0x00014318) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0001c301) vitu2_page_scroll_pane_g

0x7b3e,	// (0x00014320) vitu2_page_scroll_pane_t1

0xc5fe,	// (0x00018de0) popup_char_count_window_g1

0xdd63,	// (0x0001a545) popup_char_count_window_g2

0xdd6c,	// (0x0001a54e) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0001c306) popup_char_count_window_g

0xdd75,	// (0x0001a557) popup_char_count_window_t1

0x99be,	// (0x000161a0) main_vded2_pane

0xce2f,	// (0x00019611) aid_size_cell_imed_line

0xce39,	// (0x0001961b) grid_imed_line_width_pane

0x6a63,	// (0x00013245) vid4_indicators_pane_g4

0xdd83,	// (0x0001a565) cell_imed_line_width_pane_ParamLimits

0xdd83,	// (0x0001a565) cell_imed_line_width_pane

0xdd97,	// (0x0001a579) cell_imed_line_width_pane_g1

0xdda0,	// (0x0001a582) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0001c30d) cell_imed_line_width_pane_g

0x7b4d,	// (0x0001432f) main_vded2_pane_g1_ParamLimits

0x7b4d,	// (0x0001432f) main_vded2_pane_g1

0x7b63,	// (0x00014345) main_vded2_pane_g2_ParamLimits

0x7b63,	// (0x00014345) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0001c312) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0001c312) main_vded2_pane_g

0x7b75,	// (0x00014357) vded2_slider_pane_ParamLimits

0x7b75,	// (0x00014357) vded2_slider_pane

0x7b85,	// (0x00014367) aid_size_touch_vded2_end

0x7b8f,	// (0x00014371) aid_size_touch_vded2_playhead

0xdda8,	// (0x0001a58a) aid_size_touch_vded2_start

0xddb0,	// (0x0001a592) vded2_slider_bg_pane

0xddb9,	// (0x0001a59b) vded2_slider_pane_g1

0xddc2,	// (0x0001a5a4) vded2_slider_pane_g2

0x7b99,	// (0x0001437b) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0001c317) vded2_slider_pane_g

0xddca,	// (0x0001a5ac) vded2_slider_bg_pane_g1

0xddd3,	// (0x0001a5b5) vded2_slider_bg_pane_g2

0xdddc,	// (0x0001a5be) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0001c31e) vded2_slider_bg_pane_g

0x3ca1,	// (0x00010483) aid_postcard_touch_down_pane_ParamLimits

0x3ca1,	// (0x00010483) aid_postcard_touch_down_pane

0x3cb7,	// (0x00010499) aid_postcard_touch_up_pane_ParamLimits

0x3cb7,	// (0x00010499) aid_postcard_touch_up_pane

0x99be,	// (0x000161a0) main_blid2_pane

0xc3f7,	// (0x00018bd9) popup_blid2_search_window

0x99be,	// (0x000161a0) blid2_gps_pane

0x99be,	// (0x000161a0) blid2_navig_pane

0x99be,	// (0x000161a0) blid2_search_pane

0x99be,	// (0x000161a0) blid2_tripm_pane

0x7ba4,	// (0x00014386) blid2_search_pane_g1_ParamLimits

0x7ba4,	// (0x00014386) blid2_search_pane_g1

0x7bbc,	// (0x0001439e) blid2_search_pane_t1_ParamLimits

0x7bbc,	// (0x0001439e) blid2_search_pane_t1

0x7bce,	// (0x000143b0) aid_size_cell_blid2_gps_ParamLimits

0x7bce,	// (0x000143b0) aid_size_cell_blid2_gps

0x7be6,	// (0x000143c8) blid2_gps_pane_g1_ParamLimits

0x7be6,	// (0x000143c8) blid2_gps_pane_g1

0x7bfa,	// (0x000143dc) grid_blid2_satellite_pane_ParamLimits

0x7bfa,	// (0x000143dc) grid_blid2_satellite_pane

0x7c14,	// (0x000143f6) blid2_navig_pane_g1_ParamLimits

0x7c14,	// (0x000143f6) blid2_navig_pane_g1

0x7c20,	// (0x00014402) blid2_navig_pane_t1_ParamLimits

0x7c20,	// (0x00014402) blid2_navig_pane_t1

0x7c3b,	// (0x0001441d) blid2_navig_pane_t2_ParamLimits

0x7c3b,	// (0x0001441d) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0001c325) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0001c325) blid2_navig_pane_t

0x7c56,	// (0x00014438) blid2_navig_ring_pane_ParamLimits

0x7c56,	// (0x00014438) blid2_navig_ring_pane

0x7c6f,	// (0x00014451) blid2_speed_pane_ParamLimits

0x7c6f,	// (0x00014451) blid2_speed_pane

0x7c7b,	// (0x0001445d) blid2_tripm_pane_g1_ParamLimits

0x7c7b,	// (0x0001445d) blid2_tripm_pane_g1

0x7c96,	// (0x00014478) blid2_tripm_pane_g2_ParamLimits

0x7c96,	// (0x00014478) blid2_tripm_pane_g2

0x7caa,	// (0x0001448c) blid2_tripm_pane_g3_ParamLimits

0x7caa,	// (0x0001448c) blid2_tripm_pane_g3

0x7cbe,	// (0x000144a0) blid2_tripm_pane_g4_ParamLimits

0x7cbe,	// (0x000144a0) blid2_tripm_pane_g4

0x7cd2,	// (0x000144b4) blid2_tripm_pane_g5_ParamLimits

0x7cd2,	// (0x000144b4) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0001c32a) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0001c32a) blid2_tripm_pane_g

0x7cf8,	// (0x000144da) blid2_tripm_pane_t1_ParamLimits

0x7cf8,	// (0x000144da) blid2_tripm_pane_t1

0x7d13,	// (0x000144f5) blid2_tripm_pane_t2_ParamLimits

0x7d13,	// (0x000144f5) blid2_tripm_pane_t2

0x7d2e,	// (0x00014510) blid2_tripm_pane_t3_ParamLimits

0x7d2e,	// (0x00014510) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0001c337) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0001c337) blid2_tripm_pane_t

0x7d75,	// (0x00014557) cell_blid2_satellite_pane_ParamLimits

0x7d75,	// (0x00014557) cell_blid2_satellite_pane

0x7d93,	// (0x00014575) cell_blid2_satellite_pane_g1

0xdde5,	// (0x0001a5c7) cell_blid2_satellite_pane_t1

0xc8f1,	// (0x000190d3) blid2_speed_pane_g1

0xddf3,	// (0x0001a5d5) blid2_speed_pane_t1

0xde01,	// (0x0001a5e3) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0001c340) blid2_speed_pane_t

0xc8f1,	// (0x000190d3) blid2_navig_ring_pane_g1

0x7d9c,	// (0x0001457e) blid2_navig_ring_pane_g2

0x7da4,	// (0x00014586) blid2_navig_ring_pane_g3

0x7dac,	// (0x0001458e) blid2_navig_ring_pane_g4

0x7db4,	// (0x00014596) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0001c345) blid2_navig_ring_pane_g

0x99be,	// (0x000161a0) bg_popup_window_pane_cp011

0xde0f,	// (0x0001a5f1) popup_blid2_search_window_g1

0xde17,	// (0x0001a5f9) popup_blid2_search_window_t1

0xde25,	// (0x0001a607) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0001c350) popup_blid2_search_window_t

0xa69b,	// (0x00016e7d) main_browser_pane_g1

0xa1d9,	// (0x000169bb) main_browser_pane_ParamLimits

0x9a2e,	// (0x00016210) bg_button_pane_cp011_ParamLimits

0x6e0a,	// (0x000135ec) cell_vitu2_function_pane_g1_ParamLimits

0x9a2e,	// (0x00016210) bg_popup_sub_pane_cp22_ParamLimits

0x771b,	// (0x00013efd) input_focus_pane_cp08_ParamLimits

0x7728,	// (0x00013f0a) popup_vitu2_query_button_pane_ParamLimits

0x7728,	// (0x00013f0a) popup_vitu2_query_button_pane

0x76fd,	// (0x00013edf) popup_vitu2_query_input_button_pane

0xd931,	// (0x0001a113) popup_vitu2_query_window_g1_ParamLimits

0x7739,	// (0x00013f1b) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0001c257) popup_vitu2_query_window_g_ParamLimits

0x99be,	// (0x000161a0) bg_button_pane_cp026

0x7dbc,	// (0x0001459e) popup_vitu2_query_input_button_pane_g1

0x99be,	// (0x000161a0) bg_button_pane_cp025

0xde33,	// (0x0001a615) popup_vitu2_query_button_pane_t1

0x5345,	// (0x00011b27) main_mp3_pane_t6

0x5353,	// (0x00011b35) popup_slider_window_cp01

0xd596,	// (0x00019d78) cam4_battery_pane

0xd5a6,	// (0x00019d88) cam4_battery_pane_cp02

0x7b24,	// (0x00014306) cam4_battery_pane_cp01

0xdc06,	// (0x0001a3e8) cam4_battery_pane_cp03

0xc8f1,	// (0x000190d3) cam4_battery_pane_g1

0xde41,	// (0x0001a623) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0001c355) cam4_battery_pane_g

0xc7bb,	// (0x00018f9d) popup_blid_sat_info2_window_t11

0x362d,	// (0x0000fe0f) aid_size_touch_mv_arrow_left_ParamLimits

0x3656,	// (0x0000fe38) aid_size_touch_mv_arrow_right_ParamLimits

0xaeb2,	// (0x00017694) navi_pane_g1_ParamLimits

0x367f,	// (0x0000fe61) navi_pane_g2_ParamLimits

0x36ad,	// (0x0000fe8f) navi_pane_g3_ParamLimits

0xf44c,	// (0x0001bc2e) navi_pane_g_ParamLimits

0x3705,	// (0x0000fee7) navi_pane_mv_t1_ParamLimits

0x5f44,	// (0x00012726) grid_imed_effect_pane_ParamLimits

0xa5e4,	// (0x00016dc6) aid_placing_vt_slider_lsc

0xa5ec,	// (0x00016dce) aid_placing_vt_slider_prt

0x9a2e,	// (0x00016210) bg_tb_trans_pane_cp01_ParamLimits

0xca78,	// (0x0001925a) popup_image_details_window_g1_ParamLimits

0xca8b,	// (0x0001926d) popup_image_details_window_g2_ParamLimits

0xcaa0,	// (0x00019282) popup_image_details_window_g3_ParamLimits

0xcaa0,	// (0x00019282) popup_image_details_window_g3

0xf77f,	// (0x0001bf61) popup_image_details_window_g_ParamLimits

0xcab4,	// (0x00019296) popup_image_details_window_t1_ParamLimits

0xcac6,	// (0x000192a8) popup_image_details_window_t2_ParamLimits

0xcadf,	// (0x000192c1) popup_image_details_window_t3_ParamLimits

0xcaf3,	// (0x000192d5) popup_image_details_window_t4_ParamLimits

0xcb0e,	// (0x000192f0) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0001bf68) popup_image_details_window_t_ParamLimits

0x7a2d,	// (0x0001420f) cl_header_name_pane_ParamLimits

0x7a2d,	// (0x0001420f) cl_header_name_pane

0x7dc4,	// (0x000145a6) cl_header_name_pane_t1_ParamLimits

0x7dc4,	// (0x000145a6) cl_header_name_pane_t1

0x7de5,	// (0x000145c7) cl_header_name_pane_t2_ParamLimits

0x7de5,	// (0x000145c7) cl_header_name_pane_t2

0x7e27,	// (0x00014609) cl_header_name_pane_t3_ParamLimits

0x7e27,	// (0x00014609) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0001c35a) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0001c35a) cl_header_name_pane_t

0x36d6,	// (0x0000feb8) navi_pane_mv_g2_ParamLimits

0xd5c7,	// (0x00019da9) field_vitu2_entry_pane_g1_ParamLimits

0xd5d3,	// (0x00019db5) field_vitu2_entry_pane_g2_ParamLimits

0xd5df,	// (0x00019dc1) field_vitu2_entry_pane_g3_ParamLimits

0xd5df,	// (0x00019dc1) field_vitu2_entry_pane_g3

0xf974,	// (0x0001c156) field_vitu2_entry_pane_g_ParamLimits

0x6caa,	// (0x0001348c) cell_vitu2_itu_pane_g1_ParamLimits

0x6cba,	// (0x0001349c) cell_vitu2_itu_pane_g2_ParamLimits

0x6cba,	// (0x0001349c) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0001c162) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0001c162) cell_vitu2_itu_pane_g

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp05_ParamLimits

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp05

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp03

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp04

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp10_ParamLimits

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp10

0x79cf,	// (0x000141b1) bg_vkb2_func_pane_cp08

0x79b5,	// (0x00014197) bg_vkb2_func_pane_cp06

0x79c3,	// (0x000141a5) bg_vkb2_func_pane_cp07

0xdd39,	// (0x0001a51b) bg_vkb2_func_pane_cp11_ParamLimits

0xdd39,	// (0x0001a51b) bg_vkb2_func_pane_cp11

0xdd4e,	// (0x0001a530) bg_vkb2_func_pane_cp12_ParamLimits

0xdd4e,	// (0x0001a530) bg_vkb2_func_pane_cp12

0x99be,	// (0x000161a0) bg_vkb2_func_pane_cp09

0xd63b,	// (0x00019e1d) bg_vkb2_func_pane_g1

0xa7ac,	// (0x00016f8e) bg_vkb2_func_pane_g2

0xd643,	// (0x00019e25) bg_vkb2_func_pane_g3

0xd64b,	// (0x00019e2d) bg_vkb2_func_pane_g4

0xd8bc,	// (0x0001a09e) bg_vkb2_func_pane_g5

0xd663,	// (0x00019e45) bg_vkb2_func_pane_g6

0xd66b,	// (0x00019e4d) bg_vkb2_func_pane_g7

0xd65b,	// (0x00019e3d) bg_vkb2_func_pane_g8

0xa78c,	// (0x00016f6e) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0001c361) bg_vkb2_func_pane_g

0x7ce6,	// (0x000144c8) blid2_tripm_pane_g6_ParamLimits

0x7ce6,	// (0x000144c8) blid2_tripm_pane_g6

0xd3f7,	// (0x00019bd9) mp4_progress_pane_g1

0x7d61,	// (0x00014543) blid2_tripm_values_pane_ParamLimits

0x7d61,	// (0x00014543) blid2_tripm_values_pane

0x7e58,	// (0x0001463a) blid2_tripm_values_pane_t1

0x7e66,	// (0x00014648) blid2_tripm_values_pane_t2

0x7e74,	// (0x00014656) blid2_tripm_values_pane_t3

0x7e82,	// (0x00014664) blid2_tripm_values_pane_t4

0x7e90,	// (0x00014672) blid2_tripm_values_pane_t5

0x7e9e,	// (0x00014680) blid2_tripm_values_pane_t6

0x7eac,	// (0x0001468e) blid2_tripm_values_pane_t7

0x7eba,	// (0x0001469c) blid2_tripm_values_pane_t8

0x7ec8,	// (0x000146aa) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0001c374) blid2_tripm_values_pane_t

0x26c8,	// (0x0000eeaa) call_video_pane_t1_ParamLimits

0x26dc,	// (0x0000eebe) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0001bab7) call_video_pane_t_ParamLimits

0x3bda,	// (0x000103bc) msg_header_pane_g1_ParamLimits

0xb0ed,	// (0x000178cf) msg_header_pane_g2_ParamLimits

0xb0ed,	// (0x000178cf) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0001bcd1) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0001bcd1) msg_header_pane_g

0xa1d9,	// (0x000169bb) main_clock2_pane_ParamLimits

0x5c69,	// (0x0001244b) grid_clock2_toolbar_pane_ParamLimits

0x5c69,	// (0x0001244b) grid_clock2_toolbar_pane

0x5c69,	// (0x0001244b) listscroll_clock2_pane_ParamLimits

0x5c69,	// (0x0001244b) listscroll_clock2_pane

0x5d46,	// (0x00012528) main_clock2_pane_t3_ParamLimits

0x5d46,	// (0x00012528) main_clock2_pane_t3

0x5d61,	// (0x00012543) main_clock2_pane_t4_ParamLimits

0x5d61,	// (0x00012543) main_clock2_pane_t4

0xde4b,	// (0x0001a62d) cell_clock2_toolbar_pane

0xde53,	// (0x0001a635) cell_clock2_toolbar_pane_cp01

0xde53,	// (0x0001a635) cell_clock2_toolbar_pane_cp02

0xde5b,	// (0x0001a63d) cell_clock2_toolbar_pane_cp03

0xde63,	// (0x0001a645) list_clock2_pane

0xae05,	// (0x000175e7) scroll_pane_cp10

0xde6b,	// (0x0001a64d) list_single_clock2_pane_ParamLimits

0xde6b,	// (0x0001a64d) list_single_clock2_pane

0xaf52,	// (0x00017734) list_highlight_pane_cp08

0xde78,	// (0x0001a65a) list_single_clock2_pane_t1

0xde86,	// (0x0001a668) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0001c387) list_single_clock2_pane_t

0x99be,	// (0x000161a0) bg_button_pane_cp10

0xde94,	// (0x0001a676) cell_clock2_toolbar_pane_g1

0x3c2d,	// (0x0001040f) aid_main_viewer_pane_g1_ParamLimits

0x3c2d,	// (0x0001040f) aid_main_viewer_pane_g1

0x3c3b,	// (0x0001041d) aid_main_viewer_pane_g2_ParamLimits

0x3c3b,	// (0x0001041d) aid_main_viewer_pane_g2

0x3c49,	// (0x0001042b) aid_main_viewer_pane_g3_ParamLimits

0x3c49,	// (0x0001042b) aid_main_viewer_pane_g3

0x3c58,	// (0x0001043a) aid_main_viewer_pane_g4_ParamLimits

0x3c58,	// (0x0001043a) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0001bce2) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0001bce2) aid_main_viewer_pane_g

0x456c,	// (0x00010d4e) main_calc_pane_ParamLimits

0x4580,	// (0x00010d62) main_dialer2_pane_ParamLimits

0x99be,	// (0x000161a0) main_cam6_pane

0x99be,	// (0x000161a0) main_vid6_pane

0x5c75,	// (0x00012457) listscroll_gen_pane_cp06_ParamLimits

0x5c75,	// (0x00012457) listscroll_gen_pane_cp06

0x5d7c,	// (0x0001255e) main_clock2_pane_t5_ParamLimits

0x5d7c,	// (0x0001255e) main_clock2_pane_t5

0x5dd9,	// (0x000125bb) aid_call2_pane_cp10_ParamLimits

0x5deb,	// (0x000125cd) aid_call_pane_cp10_ParamLimits

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5dfd,	// (0x000125df) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5dfd,	// (0x000125df) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae87,	// (0x00017669) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0001c018) popup_clock_analogue_window_cp10_g_ParamLimits

0x5e0f,	// (0x000125f1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x64a0,	// (0x00012c82) cell_dialer2_keypad_pane_g2_ParamLimits

0x64a0,	// (0x00012c82) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0001c0fe) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0001c0fe) cell_dialer2_keypad_pane_g

0x64bc,	// (0x00012c9e) cell_dialer2_keypad_pane_t1

0x7125,	// (0x00013907) main_cset_text2_pane_ParamLimits

0x7125,	// (0x00013907) main_cset_text2_pane

0xdb0d,	// (0x0001a2ef) area_vitu2_query_pane_g1_ParamLimits

0x7954,	// (0x00014136) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0001c2a4) area_vitu2_query_pane_g_ParamLimits

0xdb91,	// (0x0001a373) area_vitu2_query_pane_t7_ParamLimits

0xdb91,	// (0x0001a373) area_vitu2_query_pane_t7

0x79b5,	// (0x00014197) bg_button_pane_cp018_ParamLimits

0x79c3,	// (0x000141a5) bg_button_pane_cp021_ParamLimits

0x79cf,	// (0x000141b1) bg_button_pane_cp022_ParamLimits

0x79cf,	// (0x000141b1) bg_vkb2_func_pane_cp08_ParamLimits

0x79b5,	// (0x00014197) bg_vkb2_func_pane_cp06_ParamLimits

0x79c3,	// (0x000141a5) bg_vkb2_func_pane_cp07_ParamLimits

0x79e0,	// (0x000141c2) input_focus_pane_cp09_ParamLimits

0xde9c,	// (0x0001a67e) cam6_autofocus_pane_ParamLimits

0xde9c,	// (0x0001a67e) cam6_autofocus_pane

0x7ed6,	// (0x000146b8) cam6_image_uncrop_pane_ParamLimits

0x7ed6,	// (0x000146b8) cam6_image_uncrop_pane

0x7ee5,	// (0x000146c7) cam6_indi_pane_ParamLimits

0x7ee5,	// (0x000146c7) cam6_indi_pane

0x7efb,	// (0x000146dd) cam6_mode_pane_ParamLimits

0x7efb,	// (0x000146dd) cam6_mode_pane

0x7f0d,	// (0x000146ef) cam6_timer_pane_ParamLimits

0x7f0d,	// (0x000146ef) cam6_timer_pane

0x7f19,	// (0x000146fb) cam6_zoom_pane_ParamLimits

0x7f19,	// (0x000146fb) cam6_zoom_pane

0x7f25,	// (0x00014707) cam6_mode_pane_g1_ParamLimits

0x7f25,	// (0x00014707) cam6_mode_pane_g1

0x7f35,	// (0x00014717) cam6_mode_pane_g2_ParamLimits

0x7f35,	// (0x00014717) cam6_mode_pane_g2

0x7f45,	// (0x00014727) cam6_mode_pane_g3_ParamLimits

0x7f45,	// (0x00014727) cam6_mode_pane_g3

0x7f55,	// (0x00014737) cam6_mode_pane_g4_ParamLimits

0x7f55,	// (0x00014737) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0001c38c) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0001c38c) cam6_mode_pane_g

0xdeaa,	// (0x0001a68c) bg_tb_trans_pane_cp08_ParamLimits

0xdeaa,	// (0x0001a68c) bg_tb_trans_pane_cp08

0xdeb8,	// (0x0001a69a) cam6_battery_pane_ParamLimits

0xdeb8,	// (0x0001a69a) cam6_battery_pane

0xdece,	// (0x0001a6b0) cam6_indi_pane_g1_ParamLimits

0xdece,	// (0x0001a6b0) cam6_indi_pane_g1

0xdee0,	// (0x0001a6c2) cam6_indi_pane_g2_ParamLimits

0xdee0,	// (0x0001a6c2) cam6_indi_pane_g2

0xdef2,	// (0x0001a6d4) cam6_indi_pane_g3_ParamLimits

0xdef2,	// (0x0001a6d4) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0001c395) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0001c395) cam6_indi_pane_g

0xdf04,	// (0x0001a6e6) cam6_indi_pane_t1_ParamLimits

0xdf04,	// (0x0001a6e6) cam6_indi_pane_t1

0x7f65,	// (0x00014747) cam6_autofocus_pane_g1

0x7f6d,	// (0x0001474f) cam6_autofocus_pane_g2

0x7f75,	// (0x00014757) cam6_autofocus_pane_g3

0x7f7d,	// (0x0001475f) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0001c39c) cam6_autofocus_pane_g

0xdf2a,	// (0x0001a70c) cam6_timer_pane_g1

0xdf32,	// (0x0001a714) cam6_timer_pane_t1

0xdf40,	// (0x0001a722) cam6_zoom_cont_pane

0xdf48,	// (0x0001a72a) cam6_zoom_pane_g1

0xdf50,	// (0x0001a732) cam6_zoom_pane_g2

0x7f85,	// (0x00014767) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0001c3a5) cam6_zoom_pane_g

0xc8f1,	// (0x000190d3) cam6_battery_pane_g1

0xc8f1,	// (0x000190d3) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0001bf25) cam6_battery_pane_g

0xdf58,	// (0x0001a73a) cam6_zoom_cont_pane_g1

0xdf61,	// (0x0001a743) cam6_zoom_cont_pane_g2

0xdf6a,	// (0x0001a74c) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0001c3ac) cam6_zoom_cont_pane_g

0x7fa2,	// (0x00014784) cam6_mode_pane_cp_ParamLimits

0x7fa2,	// (0x00014784) cam6_mode_pane_cp

0x7f19,	// (0x000146fb) cam6_zoom_pane_cp_ParamLimits

0x7f19,	// (0x000146fb) cam6_zoom_pane_cp

0x7fb4,	// (0x00014796) vid6_image_uncrop_cif_pane_ParamLimits

0x7fb4,	// (0x00014796) vid6_image_uncrop_cif_pane

0x7fc4,	// (0x000147a6) vid6_image_uncrop_nhd_pane_ParamLimits

0x7fc4,	// (0x000147a6) vid6_image_uncrop_nhd_pane

0x7ed6,	// (0x000146b8) vid6_image_uncrop_vga_pane_ParamLimits

0x7ed6,	// (0x000146b8) vid6_image_uncrop_vga_pane

0x7fd3,	// (0x000147b5) vid6_image_uncrop_wvga_pane_ParamLimits

0x7fd3,	// (0x000147b5) vid6_image_uncrop_wvga_pane

0x7fe2,	// (0x000147c4) vid6_indi_pane_ParamLimits

0x7fe2,	// (0x000147c4) vid6_indi_pane

0xdeaa,	// (0x0001a68c) bg_tb_trans_pane_cp09_ParamLimits

0xdeaa,	// (0x0001a68c) bg_tb_trans_pane_cp09

0xdfb4,	// (0x0001a796) cam6_battery_pane_cp_ParamLimits

0xdfb4,	// (0x0001a796) cam6_battery_pane_cp

0xdfc0,	// (0x0001a7a2) vid6_indi_pane_g1_ParamLimits

0xdfc0,	// (0x0001a7a2) vid6_indi_pane_g1

0xdfd2,	// (0x0001a7b4) vid6_indi_pane_g2_ParamLimits

0xdfd2,	// (0x0001a7b4) vid6_indi_pane_g2

0xdfe4,	// (0x0001a7c6) vid6_indi_pane_g3_ParamLimits

0xdfe4,	// (0x0001a7c6) vid6_indi_pane_g3

0xdff9,	// (0x0001a7db) vid6_indi_pane_g4_ParamLimits

0xdff9,	// (0x0001a7db) vid6_indi_pane_g4

0xe00e,	// (0x0001a7f0) vid6_indi_pane_g5_ParamLimits

0xe00e,	// (0x0001a7f0) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0001c3b3) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0001c3b3) vid6_indi_pane_g

0xe028,	// (0x0001a80a) vid6_indi_pane_t1_ParamLimits

0xe028,	// (0x0001a80a) vid6_indi_pane_t1

0xe03e,	// (0x0001a820) vid6_indi_pane_t2_ParamLimits

0xe03e,	// (0x0001a820) vid6_indi_pane_t2

0xe066,	// (0x0001a848) vid6_indi_pane_t3_ParamLimits

0xe066,	// (0x0001a848) vid6_indi_pane_t3

0xe08e,	// (0x0001a870) vid6_indi_pane_t4_ParamLimits

0xe08e,	// (0x0001a870) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0001c3be) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0001c3be) vid6_indi_pane_t

0xe0b2,	// (0x0001a894) wait_bar_pane_cp08

0x7ffa,	// (0x000147dc) main_cset_text2_pane_t1_ParamLimits

0x7ffa,	// (0x000147dc) main_cset_text2_pane_t1

0x7f8d,	// (0x0001476f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7f8d,	// (0x0001476f) listscroll_gen_pane_cp06_t1

0x99be,	// (0x000161a0) main_cam6_set_pane

0xcbf5,	// (0x000193d7) bg_tb_trans_pane_cp06_ParamLimits

0x6944,	// (0x00013126) cam4_indicators_pane_g1_ParamLimits

0x6951,	// (0x00013133) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0001c132) cam4_indicators_pane_g_ParamLimits

0x6969,	// (0x0001314b) cam4_indicators_pane_t1_ParamLimits

0xcc48,	// (0x0001942a) bg_tb_trans_pane_cp07_ParamLimits

0x6944,	// (0x00013126) vid4_indicators_pane_g1_ParamLimits

0x6a49,	// (0x0001322b) vid4_indicators_pane_g2_ParamLimits

0x6a56,	// (0x00013238) vid4_indicators_pane_g3_ParamLimits

0x6a63,	// (0x00013245) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0001c144) vid4_indicators_pane_g_ParamLimits

0x6a6f,	// (0x00013251) vid4_indicators_pane_t1_ParamLimits

0xdc0e,	// (0x0001a3f0) vid4_progress_pane_g1_ParamLimits

0xdc1a,	// (0x0001a3fc) vid4_progress_pane_g2_ParamLimits

0xdc26,	// (0x0001a408) vid4_progress_pane_g3_ParamLimits

0xdc35,	// (0x0001a417) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0001c2ef) vid4_progress_pane_g_ParamLimits

0xdc53,	// (0x0001a435) vid4_progress_pane_t1_ParamLimits

0xdc69,	// (0x0001a44b) vid4_progress_pane_t2_ParamLimits

0xdc7f,	// (0x0001a461) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0001c2fa) vid4_progress_pane_t_ParamLimits

0xdc94,	// (0x0001a476) wait_bar_pane_cp07_ParamLimits

0x801a,	// (0x000147fc) main_cam6_set_pane_g2_ParamLimits

0x801a,	// (0x000147fc) main_cam6_set_pane_g2

0x803e,	// (0x00014820) main_cset6_listscroll_pane_ParamLimits

0x803e,	// (0x00014820) main_cset6_listscroll_pane

0x805a,	// (0x0001483c) main_cset6_slider_pane_ParamLimits

0x805a,	// (0x0001483c) main_cset6_slider_pane

0x8070,	// (0x00014852) main_cset6_text2_pane_ParamLimits

0x8070,	// (0x00014852) main_cset6_text2_pane

0xe0c1,	// (0x0001a8a3) main_cset6_text_pane

0xe0c9,	// (0x0001a8ab) main_cset_list_pane_copy1_ParamLimits

0xe0c9,	// (0x0001a8ab) main_cset_list_pane_copy1

0xe0d9,	// (0x0001a8bb) scroll_pane_cp028_copy1

0x807e,	// (0x00014860) cset_list_set_pane_copy1

0x8091,	// (0x00014873) aid_position_infowindow_above_copy1

0x8099,	// (0x0001487b) aid_position_infowindow_below_copy1

0xe0e2,	// (0x0001a8c4) cset_list_set_pane_g1_copy1

0xdf72,	// (0x0001a754) cset_list_set_pane_g3_copy1_ParamLimits

0xdf72,	// (0x0001a754) cset_list_set_pane_g3_copy1

0xdf81,	// (0x0001a763) cset_list_set_pane_t1_copy1_ParamLimits

0xdf81,	// (0x0001a763) cset_list_set_pane_t1_copy1

0x9a2e,	// (0x00016210) list_highlight_pane_cp021_copy1_ParamLimits

0x9a2e,	// (0x00016210) list_highlight_pane_cp021_copy1

0xe0ea,	// (0x0001a8cc) cset6_slider_pane_ParamLimits

0xe0ea,	// (0x0001a8cc) cset6_slider_pane

0xe116,	// (0x0001a8f8) main_cset6_slider_pane_g1_ParamLimits

0xe116,	// (0x0001a8f8) main_cset6_slider_pane_g1

0x80a1,	// (0x00014883) main_cset6_slider_pane_g2_ParamLimits

0x80a1,	// (0x00014883) main_cset6_slider_pane_g2

0xd76a,	// (0x00019f4c) main_cset6_slider_pane_g3_ParamLimits

0xd76a,	// (0x00019f4c) main_cset6_slider_pane_g3

0x71ea,	// (0x000139cc) main_cset6_slider_pane_g4_ParamLimits

0x71ea,	// (0x000139cc) main_cset6_slider_pane_g4

0x7232,	// (0x00013a14) main_cset6_slider_pane_g5_ParamLimits

0x7232,	// (0x00013a14) main_cset6_slider_pane_g5

0xd76a,	// (0x00019f4c) main_cset6_slider_pane_g7_ParamLimits

0xd76a,	// (0x00019f4c) main_cset6_slider_pane_g7

0xd776,	// (0x00019f58) main_cset6_slider_pane_g8_ParamLimits

0xd776,	// (0x00019f58) main_cset6_slider_pane_g8

0x71d2,	// (0x000139b4) main_cset6_slider_pane_g9_ParamLimits

0x71d2,	// (0x000139b4) main_cset6_slider_pane_g9

0x71de,	// (0x000139c0) main_cset6_slider_pane_g10_ParamLimits

0x71de,	// (0x000139c0) main_cset6_slider_pane_g10

0x71ea,	// (0x000139cc) main_cset6_slider_pane_g11_ParamLimits

0x71ea,	// (0x000139cc) main_cset6_slider_pane_g11

0x71f6,	// (0x000139d8) main_cset6_slider_pane_g12_ParamLimits

0x71f6,	// (0x000139d8) main_cset6_slider_pane_g12

0x7202,	// (0x000139e4) main_cset6_slider_pane_g13_ParamLimits

0x7202,	// (0x000139e4) main_cset6_slider_pane_g13

0x720e,	// (0x000139f0) main_cset6_slider_pane_g14_ParamLimits

0x720e,	// (0x000139f0) main_cset6_slider_pane_g14

0x80c9,	// (0x000148ab) main_cset6_slider_pane_g15_ParamLimits

0x80c9,	// (0x000148ab) main_cset6_slider_pane_g15

0x7232,	// (0x00013a14) main_cset6_slider_pane_g16_ParamLimits

0x7232,	// (0x00013a14) main_cset6_slider_pane_g16

0x723e,	// (0x00013a20) main_cset6_slider_pane_g17_ParamLimits

0x723e,	// (0x00013a20) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0001c3c7) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0001c3c7) main_cset6_slider_pane_g

0xe13e,	// (0x0001a920) main_cset6_slider_pane_t1_ParamLimits

0xe13e,	// (0x0001a920) main_cset6_slider_pane_t1

0x80e1,	// (0x000148c3) main_cset6_slider_pane_t2_ParamLimits

0x80e1,	// (0x000148c3) main_cset6_slider_pane_t2

0x810c,	// (0x000148ee) main_cset6_slider_pane_t3_ParamLimits

0x810c,	// (0x000148ee) main_cset6_slider_pane_t3

0x8137,	// (0x00014919) main_cset6_slider_pane_t4_ParamLimits

0x8137,	// (0x00014919) main_cset6_slider_pane_t4

0x8162,	// (0x00014944) main_cset6_slider_pane_t5_ParamLimits

0x8162,	// (0x00014944) main_cset6_slider_pane_t5

0xe17f,	// (0x0001a961) main_cset6_slider_pane_t7_ParamLimits

0xe17f,	// (0x0001a961) main_cset6_slider_pane_t7

0x818d,	// (0x0001496f) main_cset6_slider_pane_t8_ParamLimits

0x818d,	// (0x0001496f) main_cset6_slider_pane_t8

0x81b1,	// (0x00014993) main_cset6_slider_pane_t9_ParamLimits

0x81b1,	// (0x00014993) main_cset6_slider_pane_t9

0x81d5,	// (0x000149b7) main_cset6_slider_pane_t10_ParamLimits

0x81d5,	// (0x000149b7) main_cset6_slider_pane_t10

0x81f9,	// (0x000149db) main_cset6_slider_pane_t11_ParamLimits

0x81f9,	// (0x000149db) main_cset6_slider_pane_t11

0xe1b5,	// (0x0001a997) main_cset6_slider_pane_t14_ParamLimits

0xe1b5,	// (0x0001a997) main_cset6_slider_pane_t14

0xe1ee,	// (0x0001a9d0) main_cset6_slider_pane_t15_ParamLimits

0xe1ee,	// (0x0001a9d0) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0001c3ec) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0001c3ec) main_cset6_slider_pane_t

0xd84e,	// (0x0001a030) cset_slider_pane_g1_copy1

0xd857,	// (0x0001a039) cset_slider_pane_g2_copy1

0xd860,	// (0x0001a042) cset_slider_pane_g3_copy1

0x99be,	// (0x000161a0) bg_popup_sub_pane_cp011_copy1

0xd93d,	// (0x0001a11f) main_cset_text_pane_g1_copy1

0xd945,	// (0x0001a127) main_cset_text_pane_t1_copy1

0xd953,	// (0x0001a135) main_cset_text_pane_t2_copy1

0xd961,	// (0x0001a143) main_cset_text_pane_t3_copy1

0xd96f,	// (0x0001a151) main_cset_text_pane_t4_copy1

0xd97d,	// (0x0001a15f) main_cset_text_pane_t5_copy1

0xd98b,	// (0x0001a16d) main_cset_text_pane_t6_copy1

0xd999,	// (0x0001a17b) main_cset_text_pane_t7_copy1

0x7ffa,	// (0x000147dc) main_cset_text2_pane_t1_copy1

0x99be,	// (0x000161a0) main_ncimui_pane

0x47b6,	// (0x00010f98) popup_query_ncimui_window_ParamLimits

0x47b6,	// (0x00010f98) popup_query_ncimui_window

0xcbbd,	// (0x0001939f) field_cale_ev2_pane_g4_ParamLimits

0xcbbd,	// (0x0001939f) field_cale_ev2_pane_g4

0x6378,	// (0x00012b5a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6378,	// (0x00012b5a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0001c0d9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0001c0d9) cell_video_dialer_keypad_pane_g

0x6390,	// (0x00012b72) cell_video_dialer_keypad_pane_t1

0x99be,	// (0x000161a0) bg_popup_window_pane_cp012

0xacd5,	// (0x000174b7) heading_pane_cp06

0xe316,	// (0x0001aaf8) ncim_query_content_pane

0x99be,	// (0x000161a0) bg_popup_heading_pane_cp01

0xe31e,	// (0x0001ab00) ncim_heading_pane_t1

0xe32c,	// (0x0001ab0e) ncim_indicator_popup_pane

0xe33e,	// (0x0001ab20) ncim_query_button_pane

0xe352,	// (0x0001ab34) ncim_query_content_pane_t1

0xe364,	// (0x0001ab46) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0001c42b) ncim_query_content_pane_t

0xe39e,	// (0x0001ab80) ncim_query_list_pane

0xe3b0,	// (0x0001ab92) ncim_query_popup_pane

0xe32c,	// (0x0001ab0e) ncim_indicator_popup_pane_ParamLimits

0x82e3,	// (0x00014ac5) ncim_query_content_pane_g1_ParamLimits

0x82e3,	// (0x00014ac5) ncim_query_content_pane_g1

0xe352,	// (0x0001ab34) ncim_query_content_pane_t1_ParamLimits

0xe364,	// (0x0001ab46) ncim_query_content_pane_t2_ParamLimits

0x82ef,	// (0x00014ad1) ncim_query_content_pane_t3_ParamLimits

0x82ef,	// (0x00014ad1) ncim_query_content_pane_t3

0x8317,	// (0x00014af9) ncim_query_content_pane_t4_ParamLimits

0x8317,	// (0x00014af9) ncim_query_content_pane_t4

0x833f,	// (0x00014b21) ncim_query_content_pane_t5_ParamLimits

0x833f,	// (0x00014b21) ncim_query_content_pane_t5

0xe376,	// (0x0001ab58) ncim_query_content_pane_t6_ParamLimits

0xe376,	// (0x0001ab58) ncim_query_content_pane_t6

0xfc49,	// (0x0001c42b) ncim_query_content_pane_t_ParamLimits

0xe39e,	// (0x0001ab80) ncim_query_list_pane_ParamLimits

0xe3b0,	// (0x0001ab92) ncim_query_popup_pane_ParamLimits

0xe3c4,	// (0x0001aba6) wait_bar_pane_cp04

0x99be,	// (0x000161a0) input_focus_pane_cp011

0xe3cc,	// (0x0001abae) ncim_query_popup_pane_t1

0xe3da,	// (0x0001abbc) ncim_list_query_list_pane_ParamLimits

0xe3da,	// (0x0001abbc) ncim_list_query_list_pane

0x99be,	// (0x000161a0) bg_button_pane_cp027

0xe3ed,	// (0x0001abcf) ncim_query_button_pane_g1

0x99be,	// (0x000161a0) list_highlight_pane_cp012

0xe3f7,	// (0x0001abd9) ncim_list_query_list_pane_g1

0xe3ff,	// (0x0001abe1) ncim_list_query_list_pane_t1

0x695d,	// (0x0001313f) cam4_indicators_pane_g3_ParamLimits

0x695d,	// (0x0001313f) cam4_indicators_pane_g3

0x695d,	// (0x0001313f) vid4_indicators_pane_g5_ParamLimits

0x695d,	// (0x0001313f) vid4_indicators_pane_g5

0xdc44,	// (0x0001a426) vid4_progress_pane_g5_ParamLimits

0xdc44,	// (0x0001a426) vid4_progress_pane_g5

0x822b,	// (0x00014a0d) main_ncimui_pane_g1

0x8271,	// (0x00014a53) ncimui_group_query_pane_ParamLimits

0x8271,	// (0x00014a53) ncimui_group_query_pane

0x82a5,	// (0x00014a87) ncimui_list_pane_ParamLimits

0x82a5,	// (0x00014a87) ncimui_list_pane

0x82bf,	// (0x00014aa1) ncimui_text_pane_ParamLimits

0x82bf,	// (0x00014aa1) ncimui_text_pane

0x8367,	// (0x00014b49) ncimui_text_pane_t1_ParamLimits

0x8367,	// (0x00014b49) ncimui_text_pane_t1

0xe40d,	// (0x0001abef) ncimui_list_single_graphic_pane_ParamLimits

0xe40d,	// (0x0001abef) ncimui_list_single_graphic_pane

0x8384,	// (0x00014b66) ncimui_query_pane_ParamLimits

0x8384,	// (0x00014b66) ncimui_query_pane

0x99be,	// (0x000161a0) list_highlight_pane_cp013

0xe41d,	// (0x0001abff) ncim_list_query_list_pane_t1_copy1

0xe3f7,	// (0x0001abd9) ncim_list_single_graphic_pane_g1

0xe42b,	// (0x0001ac0d) ncim_query_button_pane_cp01

0xe433,	// (0x0001ac15) ncim_query_entry_pane_ParamLimits

0xe433,	// (0x0001ac15) ncim_query_entry_pane

0xe443,	// (0x0001ac25) ncimui_query_pane_g1

0xe44b,	// (0x0001ac2d) ncimui_query_pane_t1_ParamLimits

0xe44b,	// (0x0001ac2d) ncimui_query_pane_t1

0x99be,	// (0x000161a0) input_focus_pane_cp012

0xe3cc,	// (0x0001abae) ncim_query_entry_pane_t1

0xa1d9,	// (0x000169bb) main_im_pane_ParamLimits

0x9a2e,	// (0x00016210) main_mobtv_pane_ParamLimits

0x9a2e,	// (0x00016210) main_mobtv_pane

0x71d2,	// (0x000139b4) main_cset6_slider_pane_g18_ParamLimits

0x71d2,	// (0x000139b4) main_cset6_slider_pane_g18

0x7202,	// (0x000139e4) main_cset6_slider_pane_g19_ParamLimits

0x7202,	// (0x000139e4) main_cset6_slider_pane_g19

0xdf96,	// (0x0001a778) bg_main_mobtv_pane_ParamLimits

0xdf96,	// (0x0001a778) bg_main_mobtv_pane

0x8394,	// (0x00014b76) main_mobtv_info_pane

0x839d,	// (0x00014b7f) main_mobtv_loading_pane_ParamLimits

0x839d,	// (0x00014b7f) main_mobtv_loading_pane

0xe461,	// (0x0001ac43) main_mobtv_pg_channel_list_pane

0xe46b,	// (0x0001ac4d) main_mobtv_pg_hdr_pane

0x83aa,	// (0x00014b8c) main_mobtv_programe_curr_pane_ParamLimits

0x83aa,	// (0x00014b8c) main_mobtv_programe_curr_pane

0x83b7,	// (0x00014b99) main_mobtv_programe_next_pane_ParamLimits

0x83b7,	// (0x00014b99) main_mobtv_programe_next_pane

0xe474,	// (0x0001ac56) popup_mobtv_noti_window

0xc8f1,	// (0x000190d3) main_tv_pg_hdr_pane_g1

0xe47c,	// (0x0001ac5e) main_tv_pg_hdr_pane_g2

0xe484,	// (0x0001ac66) main_tv_pg_hdr_pane_g3

0xe48c,	// (0x0001ac6e) main_tv_pg_hdr_pane_g4

0xe494,	// (0x0001ac76) main_tv_pg_hdr_pane_g5

0xe49e,	// (0x0001ac80) main_tv_pg_hdr_pane_g6

0xe4a8,	// (0x0001ac8a) main_tv_pg_hdr_pane_g7

0xe4b2,	// (0x0001ac94) main_tv_pg_hdr_pane_g8

0xe4bc,	// (0x0001ac9e) main_tv_pg_hdr_pane_g9

0xe4c6,	// (0x0001aca8) main_tv_pg_hdr_pane_g10

0xe4d0,	// (0x0001acb2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0001c438) main_tv_pg_hdr_pane_g

0xe4da,	// (0x0001acbc) main_tv_pg_hdr_pane_t1

0xe4e8,	// (0x0001acca) main_tv_pg_hdr_pane_t2

0xe4f6,	// (0x0001acd8) main_tv_pg_hdr_pane_t3

0xe506,	// (0x0001ace8) main_tv_pg_hdr_pane_t4

0xe516,	// (0x0001acf8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0001c44f) main_tv_pg_hdr_pane_t

0xe526,	// (0x0001ad08) single_mobtv_pg_channel_pane_ParamLimits

0xe526,	// (0x0001ad08) single_mobtv_pg_channel_pane

0xe538,	// (0x0001ad1a) single_mobtv_pg_channel_table_pane

0xe541,	// (0x0001ad23) single_mobtv_pg_channel_thumb_pane

0xe54a,	// (0x0001ad2c) single_tv_pg_channel_pane_g1

0xe553,	// (0x0001ad35) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0001c45a) single_tv_pg_channel_pane_g

0xcb58,	// (0x0001933a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb58,	// (0x0001933a) bg_single_mobtv_pg_channel_thumb_pane

0xe55c,	// (0x0001ad3e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe55c,	// (0x0001ad3e) single_mobtv_pg_channel_thumb_pane_g1

0xe56a,	// (0x0001ad4c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe56a,	// (0x0001ad4c) single_mobtv_pg_channel_thumb_pane_g2

0xe576,	// (0x0001ad58) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe576,	// (0x0001ad58) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0001c45f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0001c45f) single_mobtv_pg_channel_thumb_pane_g

0xe582,	// (0x0001ad64) single_mobtv_pg_channel_thumb_pane_t1

0xe590,	// (0x0001ad72) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0001c466) single_mobtv_pg_channel_thumb_pane_t

0xc8f1,	// (0x000190d3) bg_single_mobtv_pg_channel_table_pane_g1

0xc8f1,	// (0x000190d3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0001bf25) bg_single_mobtv_pg_channel_table_pane_g

0xe59e,	// (0x0001ad80) single_mobtv_pg_channel_table_pane_t1

0xe5ac,	// (0x0001ad8e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0001c46b) single_mobtv_pg_channel_table_pane_t

0x83cc,	// (0x00014bae) main_mobtv_info_pane_g1_ParamLimits

0x83cc,	// (0x00014bae) main_mobtv_info_pane_g1

0x83ea,	// (0x00014bcc) main_mobtv_info_pane_t1_ParamLimits

0x83ea,	// (0x00014bcc) main_mobtv_info_pane_t1

0x8462,	// (0x00014c44) main_mobtv_info_pane_t2_ParamLimits

0x8462,	// (0x00014c44) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0001c475) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0001c475) main_mobtv_info_pane_t

0x84f1,	// (0x00014cd3) wait_bar_pane_cp05

0x8503,	// (0x00014ce5) main_mobtv_loading_pane_g1_ParamLimits

0x8503,	// (0x00014ce5) main_mobtv_loading_pane_g1

0x8516,	// (0x00014cf8) main_mobtv_loading_pane_g2_ParamLimits

0x8516,	// (0x00014cf8) main_mobtv_loading_pane_g2

0x8522,	// (0x00014d04) main_mobtv_loading_pane_g3_ParamLimits

0x8522,	// (0x00014d04) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0001c47c) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0001c47c) main_mobtv_loading_pane_g

0xe5ba,	// (0x0001ad9c) main_mobtv_loading_pane_t1_ParamLimits

0xe5ba,	// (0x0001ad9c) main_mobtv_loading_pane_t1

0xe5d2,	// (0x0001adb4) main_mobtv_loading_pane_t2_ParamLimits

0xe5d2,	// (0x0001adb4) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0001c483) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0001c483) main_mobtv_loading_pane_t

0x8535,	// (0x00014d17) wait_bar_pane_cp06_ParamLimits

0x8535,	// (0x00014d17) wait_bar_pane_cp06

0xe5f6,	// (0x0001add8) main_mobtv_programe_curr_pane_t1

0xe604,	// (0x0001ade6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0001c488) main_mobtv_programe_curr_pane_t

0xe612,	// (0x0001adf4) main_mobtv_programe_next_pane_t1

0xe620,	// (0x0001ae02) main_mobtv_programe_next_pane_t2

0xe62e,	// (0x0001ae10) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0001c48d) main_mobtv_programe_next_pane_t

0x99be,	// (0x000161a0) bg_popup_mobtv_noti_window_pane

0xe63c,	// (0x0001ae1e) popup_mobtv_noti_window_g1

0xe644,	// (0x0001ae26) popup_mobtv_noti_window_t1

0xe652,	// (0x0001ae34) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0001c494) popup_mobtv_noti_window_t

0xc8f1,	// (0x000190d3) bg_popup_mobtv_noti_window_pane_g1

0x99be,	// (0x000161a0) sc_clock_pane

0x99be,	// (0x000161a0) main_fs_bigclock_pane

0x7d4b,	// (0x0001452d) blid2_tripm_pane_t4_ParamLimits

0x7d4b,	// (0x0001452d) blid2_tripm_pane_t4

0x8544,	// (0x00014d26) sc_clock_pane_g1_ParamLimits

0x8544,	// (0x00014d26) sc_clock_pane_g1

0x8556,	// (0x00014d38) sc_clock_pane_t1_ParamLimits

0x8556,	// (0x00014d38) sc_clock_pane_t1

0x8578,	// (0x00014d5a) sc_clock_pane_t2_ParamLimits

0x8578,	// (0x00014d5a) sc_clock_pane_t2

0x8590,	// (0x00014d72) sc_clock_pane_t3_ParamLimits

0x8590,	// (0x00014d72) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0001c499) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0001c499) sc_clock_pane_t

0x931e,	// (0x00015b00) main_fs_bigclock_indicator_pane_ParamLimits

0x931e,	// (0x00015b00) main_fs_bigclock_indicator_pane

0xcb28,	// (0x0001930a) main_fs_bigclock_pane_g1_ParamLimits

0xcb28,	// (0x0001930a) main_fs_bigclock_pane_g1

0x932a,	// (0x00015b0c) main_fs_bigclock_pane_t1_ParamLimits

0x932a,	// (0x00015b0c) main_fs_bigclock_pane_t1

0x933c,	// (0x00015b1e) main_fs_bigclock_pane_t2_ParamLimits

0x933c,	// (0x00015b1e) main_fs_bigclock_pane_t2

0x934e,	// (0x00015b30) main_fs_bigclock_pane_t3_ParamLimits

0x934e,	// (0x00015b30) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x0001c693) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x0001c693) main_fs_bigclock_pane_t

0x01ab,	// (0x0000c98d) main_fs_bigclock_indicator_pane_g1

0xe346,	// (0x0001ab28) ncim_query_content_pane_g2_ParamLimits

0xe346,	// (0x0001ab28) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0001c426) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0001c426) ncim_query_content_pane_g

0x85a7,	// (0x00014d89) sc_clock_pane_t4_ParamLimits

0x85a7,	// (0x00014d89) sc_clock_pane_t4

0x9a2e,	// (0x00016210) main_radioblah_pane

0xd510,	// (0x00019cf2) cell_call4_button_pane_t1_copy1_ParamLimits

0xd510,	// (0x00019cf2) cell_call4_button_pane_t1_copy1

0x8233,	// (0x00014a15) main_ncimui_pane_t1_ParamLimits

0x8233,	// (0x00014a15) main_ncimui_pane_t1

0x8245,	// (0x00014a27) main_ncimui_pane_t2_ParamLimits

0x8245,	// (0x00014a27) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0001c41f) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0001c41f) main_ncimui_pane_t

0xe782,	// (0x0001af64) main_radioblah_anim_pane_ParamLimits

0xe782,	// (0x0001af64) main_radioblah_anim_pane

0xe793,	// (0x0001af75) main_radioblah_info_pane_ParamLimits

0xe793,	// (0x0001af75) main_radioblah_info_pane

0xe7a7,	// (0x0001af89) main_radioblah_pane_t1_ParamLimits

0xe7a7,	// (0x0001af89) main_radioblah_pane_t1

0xe7c3,	// (0x0001afa5) main_radioblah_pane_t2_ParamLimits

0xe7c3,	// (0x0001afa5) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0001c4ba) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0001c4ba) main_radioblah_pane_t

0x8650,	// (0x00014e32) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8650,	// (0x00014e32) main_radioblah_rocker_ctrl_pane

0xe80b,	// (0x0001afed) main_radioblah_info_pane_t1_ParamLimits

0xe80b,	// (0x0001afed) main_radioblah_info_pane_t1

0x86a8,	// (0x00014e8a) main_radioblah_info_pane_t2_ParamLimits

0x86a8,	// (0x00014e8a) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0001c4c3) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0001c4c3) main_radioblah_info_pane_t

0xc8f1,	// (0x000190d3) main_radioblah_rocker_ctrl_pane_g1

0x875a,	// (0x00014f3c) main_radioblah_rocker_ctrl_pane_g2

0x8762,	// (0x00014f44) main_radioblah_rocker_ctrl_pane_g3

0x876a,	// (0x00014f4c) main_radioblah_rocker_ctrl_pane_g4

0x8772,	// (0x00014f54) main_radioblah_rocker_ctrl_pane_g5

0x877a,	// (0x00014f5c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0001c4cc) main_radioblah_rocker_ctrl_pane_g

0x7ffa,	// (0x000147dc) main_cset_text2_pane_t1_copy1_ParamLimits

0xd58e,	// (0x00019d70) cam4_image_uncrop_qvga_pane

0xd59e,	// (0x00019d80) vid4_image_uncrop_qcif_pane

0xde9c,	// (0x0001a67e) cam6_image_uncrop_qvga_pane_ParamLimits

0xde9c,	// (0x0001a67e) cam6_image_uncrop_qvga_pane

0xdfa4,	// (0x0001a786) vid6_image_uncrop_qcif_pane_ParamLimits

0xdfa4,	// (0x0001a786) vid6_image_uncrop_qcif_pane

0x99be,	// (0x000161a0) bg_popup_preview_window_pane_cp03

0xe2f8,	// (0x0001aada) list_cset_text2_pane

0xe300,	// (0x0001aae2) main_cset6_text2_pane_g1

0xe308,	// (0x0001aaea) main_cset6_text2_pane_t1

0x8782,	// (0x00014f64) list_cset_text2_pane_t1_ParamLimits

0x8782,	// (0x00014f64) list_cset_text2_pane_t1

0x9a2e,	// (0x00016210) main_radioblah_pane_ParamLimits

0x84dd,	// (0x00014cbf) main_mobtv_info_pane_t3_ParamLimits

0x84dd,	// (0x00014cbf) main_mobtv_info_pane_t3

0x863e,	// (0x00014e20) main_radioblah_pane_g1

0x8678,	// (0x00014e5a) main_radioblah_info_pane_g1

0x86ff,	// (0x00014ee1) main_radioblah_info_pane_t3_ParamLimits

0x86ff,	// (0x00014ee1) main_radioblah_info_pane_t3

0x314a,	// (0x0000f92c) highlight_cell_cale_month_pane_ParamLimits

0x314a,	// (0x0000f92c) highlight_cell_cale_month_pane

0x99be,	// (0x000161a0) main_phob_fisheye_pane

0xcca3,	// (0x00019485) scroll_pane_cp0031_ParamLimits

0xcca3,	// (0x00019485) scroll_pane_cp0031

0xe0b2,	// (0x0001a894) wait_bar_pane_cp08_ParamLimits

0x807e,	// (0x00014860) cset_list_set_pane_copy1_ParamLimits

0xe845,	// (0x0001b027) highlight_cell_cale_month_pane_g1

0x879f,	// (0x00014f81) highlight_cell_cale_month_pane_t1

0xdbfd,	// (0x0001a3df) list_gen_pane_cp01

0xd755,	// (0x00019f37) scroll_pane_01

0x02ec,	// (0x0000cace) list_single_double_fisheye_pane

0xe84d,	// (0x0001b02f) list_double_fisheye_pane_g1_ParamLimits

0xe84d,	// (0x0001b02f) list_double_fisheye_pane_g1

0xe859,	// (0x0001b03b) list_double_fisheye_pane_g2_ParamLimits

0xe859,	// (0x0001b03b) list_double_fisheye_pane_g2

0x87ad,	// (0x00014f8f) list_double_fisheye_pane_g3_ParamLimits

0x87ad,	// (0x00014f8f) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0001c4d9) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0001c4d9) list_double_fisheye_pane_g

0x87b9,	// (0x00014f9b) list_double_fisheye_pane_t1_ParamLimits

0x87b9,	// (0x00014f9b) list_double_fisheye_pane_t1

0x87d4,	// (0x00014fb6) list_double_fisheye_pane_t2_ParamLimits

0x87d4,	// (0x00014fb6) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0001c4e4) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0001c4e4) list_double_fisheye_pane_t

0x99be,	// (0x000161a0) main_call5_pane

0x85d2,	// (0x00014db4) sc_swipe_pane_ParamLimits

0x85d2,	// (0x00014db4) sc_swipe_pane

0x8809,	// (0x00014feb) call5_image_pane_ParamLimits

0x8809,	// (0x00014feb) call5_image_pane

0x8826,	// (0x00015008) call5_swipe_1_pane_ParamLimits

0x8826,	// (0x00015008) call5_swipe_1_pane

0x8839,	// (0x0001501b) call5_swipe_2_pane_ParamLimits

0x8839,	// (0x0001501b) call5_swipe_2_pane

0x8864,	// (0x00015046) popup_call5_audio_first_window_ParamLimits

0x8864,	// (0x00015046) popup_call5_audio_first_window

0xcb58,	// (0x0001933a) call5_swipe_1_pane_g1_ParamLimits

0xcb58,	// (0x0001933a) call5_swipe_1_pane_g1

0xe88a,	// (0x0001b06c) call5_swipe_1_pane_g2_ParamLimits

0xe88a,	// (0x0001b06c) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0001c4e9) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0001c4e9) call5_swipe_1_pane_g

0xe896,	// (0x0001b078) call5_swipe_1_pane_t1_ParamLimits

0xe896,	// (0x0001b078) call5_swipe_1_pane_t1

0xcb58,	// (0x0001933a) call5_swipe_2_pane_g1_ParamLimits

0xcb58,	// (0x0001933a) call5_swipe_2_pane_g1

0xe8ab,	// (0x0001b08d) call5_swipe_2_pane_g2_ParamLimits

0xe8ab,	// (0x0001b08d) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0001c4ee) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0001c4ee) call5_swipe_2_pane_g

0xe8b7,	// (0x0001b099) call5_swipe_2_pane_t1_ParamLimits

0xe8b7,	// (0x0001b099) call5_swipe_2_pane_t1

0xe8cc,	// (0x0001b0ae) sc_swipe_pane_g1_ParamLimits

0xe8cc,	// (0x0001b0ae) sc_swipe_pane_g1

0xe8d9,	// (0x0001b0bb) sc_swipe_pane_g2_ParamLimits

0xe8d9,	// (0x0001b0bb) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0001c4f3) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0001c4f3) sc_swipe_pane_g

0xe8e5,	// (0x0001b0c7) sc_swipe_pane_t1_ParamLimits

0xe8e5,	// (0x0001b0c7) sc_swipe_pane_t1

0x99be,	// (0x000161a0) main_cmail_launcher_pane

0x8875,	// (0x00015057) aid_size_cell_cmail_l_ParamLimits

0x8875,	// (0x00015057) aid_size_cell_cmail_l

0x888f,	// (0x00015071) grid_cmail_l_pane_ParamLimits

0x888f,	// (0x00015071) grid_cmail_l_pane

0x88aa,	// (0x0001508c) cell_cmail_l_pane_ParamLimits

0x88aa,	// (0x0001508c) cell_cmail_l_pane

0x88d0,	// (0x000150b2) cell_cmail_l_pane_g1_ParamLimits

0x88d0,	// (0x000150b2) cell_cmail_l_pane_g1

0x88dc,	// (0x000150be) cell_cmail_l_pane_t1_ParamLimits

0x88dc,	// (0x000150be) cell_cmail_l_pane_t1

0xe8fa,	// (0x0001b0dc) cell_cmail_l_pane_t2_ParamLimits

0xe8fa,	// (0x0001b0dc) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0001c4f8) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0001c4f8) cell_cmail_l_pane_t

0x9a2e,	// (0x00016210) grid_highlight_pane_cp018_ParamLimits

0x9a2e,	// (0x00016210) grid_highlight_pane_cp018

0x1966,	// (0x0000e148) main2_pane_ParamLimits

0x1966,	// (0x0000e148) main2_pane

0xa2b2,	// (0x00016a94) popup_sp_fs_action_menu_bg_pane_g1

0xa2ba,	// (0x00016a9c) popup_sp_fs_action_menu_bg_pane_g2

0xa2c2,	// (0x00016aa4) popup_sp_fs_action_menu_bg_pane_g3

0xa2ca,	// (0x00016aac) popup_sp_fs_action_menu_bg_pane_g4

0xa2d2,	// (0x00016ab4) popup_sp_fs_action_menu_bg_pane_g5

0xa2da,	// (0x00016abc) popup_sp_fs_action_menu_bg_pane_g6

0xa2e2,	// (0x00016ac4) popup_sp_fs_action_menu_bg_pane_g7

0xa2ea,	// (0x00016acc) popup_sp_fs_action_menu_bg_pane_g8

0xa2f2,	// (0x00016ad4) popup_sp_fs_action_menu_bg_pane_g9

0xa2fa,	// (0x00016adc) popup_sp_fs_action_menu_bg_pane_g10

0xa2fa,	// (0x00016adc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0001b9d1) popup_sp_fs_action_menu_bg_pane_g

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g3_g1

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t3_g3_g2

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0001ba81) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0001ba81) list_medium_line_x2_t3_g3_g

0xa516,	// (0x00016cf8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa516,	// (0x00016cf8) list_medium_line_x2_t3_g3_t1

0x25da,	// (0x0000edbc) list_medium_line_x2_t3_g3_t2_ParamLimits

0x25da,	// (0x0000edbc) list_medium_line_x2_t3_g3_t2

0xa52b,	// (0x00016d0d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0001ba88) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0001ba88) list_medium_line_x2_t3_g3_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g2_g1

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t3_g2_g

0xa540,	// (0x00016d22) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa540,	// (0x00016d22) list_medium_line_x2_t3_g2_t1

0xa556,	// (0x00016d38) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa556,	// (0x00016d38) list_medium_line_x2_t3_g2_t2

0xa568,	// (0x00016d4a) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa568,	// (0x00016d4a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0001ba94) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0001ba94) list_medium_line_x2_t3_g2_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t4_g4_g1

0xa585,	// (0x00016d67) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa585,	// (0x00016d67) list_medium_line_x2_t4_g4_g2

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t4_g4_g3

0xa591,	// (0x00016d73) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa591,	// (0x00016d73) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0001ba9b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0001ba9b) list_medium_line_x2_t4_g4_g

0x25ee,	// (0x0000edd0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x25ee,	// (0x0000edd0) list_medium_line_x2_t4_g4_t1

0x2605,	// (0x0000ede7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2605,	// (0x0000ede7) list_medium_line_x2_t4_g4_t2

0x261a,	// (0x0000edfc) list_medium_line_x2_t4_g4_t3_ParamLimits

0x261a,	// (0x0000edfc) list_medium_line_x2_t4_g4_t3

0xa59d,	// (0x00016d7f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa59d,	// (0x00016d7f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0001baa4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0001baa4) list_medium_line_x2_t4_g4_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g4_g1

0xa585,	// (0x00016d67) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa585,	// (0x00016d67) list_medium_line_x2_t2_g4_g2

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t2_g4_g3

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0001bb0b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0001bb0b) list_medium_line_x2_t2_g4_g

0xa88d,	// (0x0001706f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa88d,	// (0x0001706f) list_medium_line_x2_t2_g4_t1

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0001bb14) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0001bb14) list_medium_line_x2_t2_g4_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g3_g1

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t2_g3_g2

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0001ba81) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0001ba81) list_medium_line_x2_t2_g3_g

0xa8a2,	// (0x00017084) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa8a2,	// (0x00017084) list_medium_line_x2_t2_g3_t1

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0001bb19) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0001bb19) list_medium_line_x2_t2_g3_t

0x3330,	// (0x0000fb12) main_sp_fs_list_pane_ParamLimits

0x3330,	// (0x0000fb12) main_sp_fs_list_pane

0x333c,	// (0x0000fb1e) sp_fs_scroll_pane_ParamLimits

0x333c,	// (0x0000fb1e) sp_fs_scroll_pane

0x3348,	// (0x0000fb2a) list_medium_line_x2_t3_t1

0x3358,	// (0x0000fb3a) list_medium_line_x2_t3_t2

0xaa7a,	// (0x0001725c) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0001bb64) list_medium_line_x2_t3_t

0x3366,	// (0x0000fb48) list_medium_line_x3_t4_t1

0x3376,	// (0x0000fb58) list_medium_line_x3_t4_t2

0xaa88,	// (0x0001726a) list_medium_line_x3_t4_t3

0xaa7a,	// (0x0001725c) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0001bb6b) list_medium_line_x3_t4_t

0x3384,	// (0x0000fb66) list_medium_line_x4_t5_t1

0x3394,	// (0x0000fb76) list_medium_line_x4_t5_t2

0xaa88,	// (0x0001726a) list_medium_line_x4_t5_t3

0xaa96,	// (0x00017278) list_medium_line_x4_t5_t4

0xaa7a,	// (0x0001725c) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0001bb74) list_medium_line_x4_t5_t

0xa4f2,	// (0x00016cd4) list_medium_line_t4_g4_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_t4_g4_g1

0xa591,	// (0x00016d73) list_medium_line_t4_g4_g2_ParamLimits

0xa591,	// (0x00016d73) list_medium_line_t4_g4_g2

0xaaa4,	// (0x00017286) list_medium_line_t4_g4_g3_ParamLimits

0xaaa4,	// (0x00017286) list_medium_line_t4_g4_g3

0xa50a,	// (0x00016cec) list_medium_line_t4_g4_g4_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0001bb7f) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0001bb7f) list_medium_line_t4_g4_g

0xaab0,	// (0x00017292) list_medium_line_t4_g4_t1_ParamLimits

0xaab0,	// (0x00017292) list_medium_line_t4_g4_t1

0xaac5,	// (0x000172a7) list_medium_line_t4_g4_t2_ParamLimits

0xaac5,	// (0x000172a7) list_medium_line_t4_g4_t2

0xaada,	// (0x000172bc) list_medium_line_t4_g4_t3_ParamLimits

0xaada,	// (0x000172bc) list_medium_line_t4_g4_t3

0xa52b,	// (0x00016d0d) list_medium_line_t4_g4_t4_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0001bb88) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0001bb88) list_medium_line_t4_g4_t

0x3440,	// (0x0000fc22) chi_dic_find_pane_g1

0x4594,	// (0x00010d76) main_tport_pane

0xd892,	// (0x0001a074) list_medium_line_plain_t1

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g2_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g2_g1

0xd8f0,	// (0x0001a0d2) list_medium_line_t2_g2_g2_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0001c23b) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0001c23b) list_medium_line_t2_g2_g

0x75b0,	// (0x00013d92) list_medium_line_t2_g2_t1_ParamLimits

0x75b0,	// (0x00013d92) list_medium_line_t2_g2_t1

0x75ca,	// (0x00013dac) list_medium_line_t2_g2_t2_ParamLimits

0x75ca,	// (0x00013dac) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0001c240) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0001c240) list_medium_line_t2_g2_t

0xdca4,	// (0x0001a486) aid_sp_fs_list_icon_a_sm

0xdcac,	// (0x0001a48e) aid_sp_fs_list_icon_d

0xdcb4,	// (0x0001a496) aid_sp_fs_text_primary

0xdcbd,	// (0x0001a49f) aid_sp_fs_text_secondary

0xdcc6,	// (0x0001a4a8) list_medium_line

0xdcc6,	// (0x0001a4a8) list_medium_line_g2

0xdcc6,	// (0x0001a4a8) list_medium_line_g3

0xdcc6,	// (0x0001a4a8) list_medium_line_plain

0xdcc6,	// (0x0001a4a8) list_medium_line_plain_t2

0xdcc6,	// (0x0001a4a8) list_medium_line_plain_t3

0xdcc6,	// (0x0001a4a8) list_medium_line_right_icon

0xdcc6,	// (0x0001a4a8) list_medium_line_right_iconx2

0xdcc6,	// (0x0001a4a8) list_medium_line_t2

0xdcc6,	// (0x0001a4a8) list_medium_line_t2_g2

0xdcc6,	// (0x0001a4a8) list_medium_line_t2_g3

0xdcc6,	// (0x0001a4a8) list_medium_line_t2_right_icon

0xdcc6,	// (0x0001a4a8) list_medium_line_t2_right_iconx2

0xdcc6,	// (0x0001a4a8) list_medium_line_t3

0xdcc6,	// (0x0001a4a8) list_medium_line_t3_g2

0xdcc6,	// (0x0001a4a8) list_medium_line_t3_g3

0xdcc6,	// (0x0001a4a8) list_medium_line_t3_right_iconx2

0xdccf,	// (0x0001a4b1) list_medium_line_t4_g4

0xdcd8,	// (0x0001a4ba) list_medium_line_x2

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t2_g2

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t2_g3

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t2_g4

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t3

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t3_g2

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t3_g3

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t3_g4

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t4_g2

0xdcd8,	// (0x0001a4ba) list_medium_line_x2_t4_g4

0xdce1,	// (0x0001a4c3) list_medium_line_x3

0xdce1,	// (0x0001a4c3) list_medium_line_x3_t4

0xdce1,	// (0x0001a4c3) list_medium_line_x3_t4_g4

0xdccf,	// (0x0001a4b1) list_medium_line_x4_t4

0xdccf,	// (0x0001a4b1) list_medium_line_x4_t4_g7

0xdccf,	// (0x0001a4b1) list_medium_line_x4_t5

0xdcea,	// (0x0001a4cc) list_single_fs_dyc_pane_ParamLimits

0xdcea,	// (0x0001a4cc) list_single_fs_dyc_pane

0xa4f2,	// (0x00016cd4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x4_t4_g7_g1

0xe227,	// (0x0001aa09) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe227,	// (0x0001aa09) list_medium_line_x4_t4_g7_g2

0xe233,	// (0x0001aa15) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe233,	// (0x0001aa15) list_medium_line_x4_t4_g7_g3

0xe242,	// (0x0001aa24) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe242,	// (0x0001aa24) list_medium_line_x4_t4_g7_g4

0xe24e,	// (0x0001aa30) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe24e,	// (0x0001aa30) list_medium_line_x4_t4_g7_g5

0xe25d,	// (0x0001aa3f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe25d,	// (0x0001aa3f) list_medium_line_x4_t4_g7_g6

0xe26c,	// (0x0001aa4e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe26c,	// (0x0001aa4e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0001c405) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0001c405) list_medium_line_x4_t4_g7_g

0xe278,	// (0x0001aa5a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe278,	// (0x0001aa5a) list_medium_line_x4_t4_g7_t1

0xe28d,	// (0x0001aa6f) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe28d,	// (0x0001aa6f) list_medium_line_x4_t4_g7_t2

0xe2a2,	// (0x0001aa84) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe2a2,	// (0x0001aa84) list_medium_line_x4_t4_g7_t3

0xe2b7,	// (0x0001aa99) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe2b7,	// (0x0001aa99) list_medium_line_x4_t4_g7_t4

0xe2c9,	// (0x0001aaab) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe2c9,	// (0x0001aaab) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0001c414) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0001c414) list_medium_line_x4_t4_g7_t

0xe2db,	// (0x0001aabd) list_single_dyc_row_pane_ParamLimits

0xe2db,	// (0x0001aabd) list_single_dyc_row_pane

0x87f6,	// (0x00014fd8) call5_gesture_pane_ParamLimits

0x87f6,	// (0x00014fd8) call5_gesture_pane

0x884c,	// (0x0001502e) call5_windows_pane_ParamLimits

0x884c,	// (0x0001502e) call5_windows_pane

0x88f2,	// (0x000150d4) call5_swipe_1_pane_cp_ParamLimits

0x88f2,	// (0x000150d4) call5_swipe_1_pane_cp

0x88fe,	// (0x000150e0) call5_swipe_2_pane_cp_ParamLimits

0x88fe,	// (0x000150e0) call5_swipe_2_pane_cp

0xaf52,	// (0x00017734) call5_image_pane_cp

0x890a,	// (0x000150ec) popup_call5_audio_first_window_cp_ParamLimits

0x890a,	// (0x000150ec) popup_call5_audio_first_window_cp

0xe8cc,	// (0x0001b0ae) call5_swipe_1_pane_g1_cp_ParamLimits

0xe8cc,	// (0x0001b0ae) call5_swipe_1_pane_g1_cp

0xe90c,	// (0x0001b0ee) call5_swipe_1_pane_g2_cp

0xe8e5,	// (0x0001b0c7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe8e5,	// (0x0001b0c7) call5_swipe_1_pane_t1_cp

0xe8cc,	// (0x0001b0ae) call5_swipe_2_pane_g1_cp_ParamLimits

0xe8cc,	// (0x0001b0ae) call5_swipe_2_pane_g1_cp

0xe914,	// (0x0001b0f6) call5_swipe_2_pane_g2_cp

0xe91c,	// (0x0001b0fe) call5_swipe_2_pane_t1_cp_ParamLimits

0xe91c,	// (0x0001b0fe) call5_swipe_2_pane_t1_cp

0x9a2e,	// (0x00016210) main_sp_fs_email_pane

0xe931,	// (0x0001b113) main_sp_fs_listscroll_pane_te

0xe93a,	// (0x0001b11c) popup_sp_fs_action_menu_pane_ParamLimits

0xe93a,	// (0x0001b11c) popup_sp_fs_action_menu_pane

0xc8f1,	// (0x000190d3) bg_sp_fs_ctrlbar_pane_g1

0xe97a,	// (0x0001b15c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe983,	// (0x0001b165) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe98c,	// (0x0001b16e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8f1,	// (0x000190d3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0001c4fd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6d4,	// (0x00018eb6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6d4,	// (0x00018eb6) bg_sp_fs_ctrlbar_ddmenu_pane

0xe995,	// (0x0001b177) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe995,	// (0x0001b177) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe9a1,	// (0x0001b183) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe9a1,	// (0x0001b183) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0001c506) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0001c506) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe9ad,	// (0x0001b18f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe9ad,	// (0x0001b18f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe9c7,	// (0x0001b1a9) list_medium_line_t2_right_icon_g1

0x8916,	// (0x000150f8) list_medium_line_t2_right_icon_t1

0x8926,	// (0x00015108) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0001c50b) list_medium_line_t2_right_icon_t

0xc3e9,	// (0x00018bcb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3e9,	// (0x00018bcb) bg_sp_fs_ctrlbar_pane

0x897e,	// (0x00015160) main_sp_fs_ctrlbar_button_pane_cp01

0x8986,	// (0x00015168) main_sp_fs_ctrlbar_ddmenu_pane

0xa4f2,	// (0x00016cd4) main_sp_fs_ctrlbar_pane_g1

0xea07,	// (0x0001b1e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0001c510) main_sp_fs_ctrlbar_pane_g

0xea13,	// (0x0001b1f5) main_sp_fs_ctrlbar_pane_t1

0x8990,	// (0x00015172) main_sp_fs_ctrlbar_pane

0x89b4,	// (0x00015196) main_sp_fs_listscroll_pane_te_cp01

0x89d4,	// (0x000151b6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x89d4,	// (0x000151b6) popup_sp_fs_action_menu_pane_cp01

0x9a2e,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a2e,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp01

0xea28,	// (0x0001b20a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xea28,	// (0x0001b20a) sp_fs_action_menu_list_gene_pane_g1

0xea37,	// (0x0001b219) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xea37,	// (0x0001b219) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0001c515) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0001c515) sp_fs_action_menu_list_gene_pane_g

0xea44,	// (0x0001b226) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xea44,	// (0x0001b226) sp_fs_action_menu_list_gene_pane_t1

0xea5c,	// (0x0001b23e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xea5c,	// (0x0001b23e) sp_fs_action_menu_list_gene_pane

0xea79,	// (0x0001b25b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xea79,	// (0x0001b25b) popup_sp_fs_action_menu_bg_pane

0xea87,	// (0x0001b269) sp_fs_action_menu_list_pane_ParamLimits

0xea87,	// (0x0001b269) sp_fs_action_menu_list_pane

0xeaa5,	// (0x0001b287) sp_fs_scroll_pane_cp01_ParamLimits

0xeaa5,	// (0x0001b287) sp_fs_scroll_pane_cp01

0x89ee,	// (0x000151d0) list_medium_line_plain_t2_t1

0x89fe,	// (0x000151e0) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0001c51a) list_medium_line_plain_t2_t

0x8a0e,	// (0x000151f0) list_medium_line_plain_t3_t1

0x8a1e,	// (0x00015200) list_medium_line_plain_t3_t2

0x8a2c,	// (0x0001520e) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0001c51f) list_medium_line_plain_t3_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t2_g2_g1

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t2_g2_g

0xaab0,	// (0x00017292) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaab0,	// (0x00017292) list_medium_line_x2_t2_g2_t1

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0001c526) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0001c526) list_medium_line_x2_t2_g2_t

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t4_g2_g1

0xa50a,	// (0x00016cec) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0001ba8f) list_medium_line_x2_t4_g2_g

0x8a3a,	// (0x0001521c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8a3a,	// (0x0001521c) list_medium_line_x2_t4_g2_t1

0x8a51,	// (0x00015233) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8a51,	// (0x00015233) list_medium_line_x2_t4_g2_t2

0x8a66,	// (0x00015248) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8a66,	// (0x00015248) list_medium_line_x2_t4_g2_t3

0xa52b,	// (0x00016d0d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x0001c52b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x0001c52b) list_medium_line_x2_t4_g2_t

0xeacb,	// (0x0001b2ad) list_medium_line_t3_right_iconx2_g1

0xe9c7,	// (0x0001b1a9) list_medium_line_t3_right_iconx2_g2

0x8a78,	// (0x0001525a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x0001c534) list_medium_line_t3_right_iconx2_g

0x8a82,	// (0x00015264) list_medium_line_t3_right_iconx2_t1

0x8a92,	// (0x00015274) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x0001c53b) list_medium_line_t3_right_iconx2_t

0xa4f2,	// (0x00016cd4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x3_t4_g4_g1

0xa4fe,	// (0x00016ce0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x3_t4_g4_g2

0xa591,	// (0x00016d73) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa591,	// (0x00016d73) list_medium_line_x3_t4_g4_g3

0xead3,	// (0x0001b2b5) list_medium_line_x3_t4_g4_g4_ParamLimits

0xead3,	// (0x0001b2b5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x0001c540) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x0001c540) list_medium_line_x3_t4_g4_g

0x8aa0,	// (0x00015282) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8aa0,	// (0x00015282) list_medium_line_x3_t4_g4_t1

0x8ab7,	// (0x00015299) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8ab7,	// (0x00015299) list_medium_line_x3_t4_g4_t2

0xaac5,	// (0x000172a7) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaac5,	// (0x000172a7) list_medium_line_x3_t4_g4_t3

0xeadf,	// (0x0001b2c1) list_medium_line_x3_t4_g4_t4_ParamLimits

0xeadf,	// (0x0001b2c1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x0001c549) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x0001c549) list_medium_line_x3_t4_g4_t

0x8ad0,	// (0x000152b2) list_single_dyc_row_text_pane_t1_ParamLimits

0x8ad0,	// (0x000152b2) list_single_dyc_row_text_pane_t1

0x8b19,	// (0x000152fb) list_single_dyc_row_text_pane_t2_ParamLimits

0x8b19,	// (0x000152fb) list_single_dyc_row_text_pane_t2

0xeafc,	// (0x0001b2de) list_single_dyc_row_text_pane_t3_ParamLimits

0xeafc,	// (0x0001b2de) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x0001c552) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x0001c552) list_single_dyc_row_text_pane_t

0xeb0e,	// (0x0001b2f0) list_single_dyc_row_pane_g1_ParamLimits

0xeb0e,	// (0x0001b2f0) list_single_dyc_row_pane_g1

0xeb1a,	// (0x0001b2fc) list_single_dyc_row_pane_g2_ParamLimits

0xeb1a,	// (0x0001b2fc) list_single_dyc_row_pane_g2

0xeb26,	// (0x0001b308) list_single_dyc_row_pane_g3_ParamLimits

0xeb26,	// (0x0001b308) list_single_dyc_row_pane_g3

0xeb32,	// (0x0001b314) list_single_dyc_row_pane_g4_ParamLimits

0xeb32,	// (0x0001b314) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x0001c559) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x0001c559) list_single_dyc_row_pane_g

0xeb3e,	// (0x0001b320) list_single_dyc_row_text_pane_ParamLimits

0xeb3e,	// (0x0001b320) list_single_dyc_row_text_pane

0x99be,	// (0x000161a0) bg_sp_fs_scroll_pane

0xeb5d,	// (0x0001b33f) thumb_sp_fs_scroll_pane

0xd8e4,	// (0x0001a0c6) list_medium_line_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_g1

0xeb66,	// (0x0001b348) list_medium_line_t1_ParamLimits

0xeb66,	// (0x0001b348) list_medium_line_t1

0xa4f2,	// (0x00016cd4) list_medium_line_x2_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_g1

0xa4fe,	// (0x00016ce0) list_medium_line_x2_g2_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x0001c562) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x0001c562) list_medium_line_x2_g

0xeb7b,	// (0x0001b35d) list_medium_line_x2_t1_ParamLimits

0xeb7b,	// (0x0001b35d) list_medium_line_x2_t1

0xa4f2,	// (0x00016cd4) list_medium_line_x3_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x3_g1

0xa4fe,	// (0x00016ce0) list_medium_line_x3_g2_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x0001c562) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x0001c562) list_medium_line_x3_g

0xeb7b,	// (0x0001b35d) list_medium_line_x3_t1_ParamLimits

0xeb7b,	// (0x0001b35d) list_medium_line_x3_t1

0xeb91,	// (0x0001b373) thumb_sp_fs_scroll_pane_g1

0xeb9a,	// (0x0001b37c) thumb_sp_fs_scroll_pane_g2

0xeba3,	// (0x0001b385) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001c567) thumb_sp_fs_scroll_pane_g

0xeb91,	// (0x0001b373) bg_sp_fs_scroll_pane_g1

0xeb9a,	// (0x0001b37c) bg_sp_fs_scroll_pane_g2

0xeba3,	// (0x0001b385) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001c567) bg_sp_fs_scroll_pane_g

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa4f2,	// (0x00016cd4) list_medium_line_x2_t3_g4_g1

0xa585,	// (0x00016d67) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa585,	// (0x00016d67) list_medium_line_x2_t3_g4_g2

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa4fe,	// (0x00016ce0) list_medium_line_x2_t3_g4_g3

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa50a,	// (0x00016cec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0001bb0b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0001bb0b) list_medium_line_x2_t3_g4_g

0x8b73,	// (0x00015355) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8b73,	// (0x00015355) list_medium_line_x2_t3_g4_t1

0x8b89,	// (0x0001536b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8b89,	// (0x0001536b) list_medium_line_x2_t3_g4_t2

0xa52b,	// (0x00016d0d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa52b,	// (0x00016d0d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x0001c56e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x0001c56e) list_medium_line_x2_t3_g4_t

0xd8e4,	// (0x0001a0c6) list_medium_line_g2_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_g2_g1

0xd8f0,	// (0x0001a0d2) list_medium_line_g2_g2_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0001c23b) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0001c23b) list_medium_line_g2_g

0xebac,	// (0x0001b38e) list_medium_line_g2_t1_ParamLimits

0xebac,	// (0x0001b38e) list_medium_line_g2_t1

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g2_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g2_g1

0xd8f0,	// (0x0001a0d2) list_medium_line_t3_g2_g2_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0001c23b) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0001c23b) list_medium_line_t3_g2_g

0x8ba2,	// (0x00015384) list_medium_line_t3_g2_t1_ParamLimits

0x8ba2,	// (0x00015384) list_medium_line_t3_g2_t1

0x8bbc,	// (0x0001539e) list_medium_line_t3_g2_t2_ParamLimits

0x8bbc,	// (0x0001539e) list_medium_line_t3_g2_t2

0x8bd1,	// (0x000153b3) list_medium_line_t3_g2_t3_ParamLimits

0x8bd1,	// (0x000153b3) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x0001c575) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x0001c575) list_medium_line_t3_g2_t

0xe9c7,	// (0x0001b1a9) list_medium_line_right_icon_g1

0xebc1,	// (0x0001b3a3) list_medium_line_right_icon_t1

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g1

0x8beb,	// (0x000153cd) list_medium_line_t2_t1_ParamLimits

0x8beb,	// (0x000153cd) list_medium_line_t2_t1

0x8c05,	// (0x000153e7) list_medium_line_t2_t2_ParamLimits

0x8c05,	// (0x000153e7) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x0001c57c) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x0001c57c) list_medium_line_t2_t

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g1

0x8c1a,	// (0x000153fc) list_medium_line_t3_t1_ParamLimits

0x8c1a,	// (0x000153fc) list_medium_line_t3_t1

0x8c31,	// (0x00015413) list_medium_line_t3_t2_ParamLimits

0x8c31,	// (0x00015413) list_medium_line_t3_t2

0x8c46,	// (0x00015428) list_medium_line_t3_t3_ParamLimits

0x8c46,	// (0x00015428) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x0001c581) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x0001c581) list_medium_line_t3_t

0xd8e4,	// (0x0001a0c6) list_medium_line_g3_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_g3_g1

0xebcf,	// (0x0001b3b1) list_medium_line_g3_g2_ParamLimits

0xebcf,	// (0x0001b3b1) list_medium_line_g3_g2

0xd8f0,	// (0x0001a0d2) list_medium_line_g3_g3_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x0001c588) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x0001c588) list_medium_line_g3_g

0xebdb,	// (0x0001b3bd) list_medium_line_g3_t1_ParamLimits

0xebdb,	// (0x0001b3bd) list_medium_line_g3_t1

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g3_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t2_g3_g1

0xebcf,	// (0x0001b3b1) list_medium_line_t2_g3_g2_ParamLimits

0xebcf,	// (0x0001b3b1) list_medium_line_t2_g3_g2

0xd8f0,	// (0x0001a0d2) list_medium_line_t2_g3_g3_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x0001c588) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x0001c588) list_medium_line_t2_g3_g

0x8c58,	// (0x0001543a) list_medium_line_t2_g3_t1_ParamLimits

0x8c58,	// (0x0001543a) list_medium_line_t2_g3_t1

0x8c6f,	// (0x00015451) list_medium_line_t2_g3_t2_ParamLimits

0x8c6f,	// (0x00015451) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x0001c58f) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x0001c58f) list_medium_line_t2_g3_t

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g3_g1_ParamLimits

0xd8e4,	// (0x0001a0c6) list_medium_line_t3_g3_g1

0xebcf,	// (0x0001b3b1) list_medium_line_t3_g3_g2_ParamLimits

0xebcf,	// (0x0001b3b1) list_medium_line_t3_g3_g2

0xd8f0,	// (0x0001a0d2) list_medium_line_t3_g3_g3_ParamLimits

0xd8f0,	// (0x0001a0d2) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x0001c588) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x0001c588) list_medium_line_t3_g3_g

0x8c88,	// (0x0001546a) list_medium_line_t3_g3_t1_ParamLimits

0x8c88,	// (0x0001546a) list_medium_line_t3_g3_t1

0x8c9c,	// (0x0001547e) list_medium_line_t3_g3_t2_ParamLimits

0x8c9c,	// (0x0001547e) list_medium_line_t3_g3_t2

0x8cae,	// (0x00015490) list_medium_line_t3_g3_t3_ParamLimits

0x8cae,	// (0x00015490) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x0001c594) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x0001c594) list_medium_line_t3_g3_t

0xeacb,	// (0x0001b2ad) list_medium_line_right_iconx2_g1

0xe9c7,	// (0x0001b1a9) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001c59b) list_medium_line_right_iconx2_g

0xebf0,	// (0x0001b3d2) list_medium_line_right_iconx2_t1

0xeacb,	// (0x0001b2ad) list_medium_line_t2_right_iconx2_g1

0xe9c7,	// (0x0001b1a9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001c59b) list_medium_line_t2_right_iconx2_g

0x8cc2,	// (0x000154a4) list_medium_line_t2_right_iconx2_t1

0x8cd2,	// (0x000154b4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x0001c5a0) list_medium_line_t2_right_iconx2_t

0xebfe,	// (0x0001b3e0) list_medium_line_x4_t4_t1

0x8ce0,	// (0x000154c2) list_medium_line_x4_t4_t2

0x8cf0,	// (0x000154d2) list_medium_line_x4_t4_t3

0x8d00,	// (0x000154e2) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x0001c5a5) list_medium_line_x4_t4_t

0x8d53,	// (0x00015535) tport_appsw_pane_ParamLimits

0x8d53,	// (0x00015535) tport_appsw_pane

0x8d64,	// (0x00015546) tport_contact_pane_ParamLimits

0x8d64,	// (0x00015546) tport_contact_pane

0x8d7d,	// (0x0001555f) tport_listscroll_pane_ParamLimits

0x8d7d,	// (0x0001555f) tport_listscroll_pane

0x8d98,	// (0x0001557a) cell_tport_appsw_pane_ParamLimits

0x8d98,	// (0x0001557a) cell_tport_appsw_pane

0xd5df,	// (0x00019dc1) tport_appsw_pane_g1_ParamLimits

0xd5df,	// (0x00019dc1) tport_appsw_pane_g1

0xec0c,	// (0x0001b3ee) tport_contact_pane_g1

0xec15,	// (0x0001b3f7) tport_contact_pane_t1

0xec23,	// (0x0001b405) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x0001c5ae) tport_contact_pane_t

0xec31,	// (0x0001b413) list_tport_pane

0xec3a,	// (0x0001b41c) scroll_pane_cp_030

0x8db3,	// (0x00015595) cell_tport_appsw_pane_g1

0xec43,	// (0x0001b425) cell_tport_appsw_pane_t1

0x99be,	// (0x000161a0) grid_highlight_pane_cp019

0x8dcb,	// (0x000155ad) list_tport_double_graphic_pane_ParamLimits

0x8dcb,	// (0x000155ad) list_tport_double_graphic_pane

0x9a2e,	// (0x00016210) list_highlight_pane_cp023_ParamLimits

0x9a2e,	// (0x00016210) list_highlight_pane_cp023

0x8dd8,	// (0x000155ba) list_tport_double_graphic_pane_g1_ParamLimits

0x8dd8,	// (0x000155ba) list_tport_double_graphic_pane_g1

0x8de5,	// (0x000155c7) list_tport_double_graphic_pane_t1_ParamLimits

0x8de5,	// (0x000155c7) list_tport_double_graphic_pane_t1

0x8dfa,	// (0x000155dc) list_tport_double_graphic_pane_t2_ParamLimits

0x8dfa,	// (0x000155dc) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x0001c5ba) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x0001c5ba) list_tport_double_graphic_pane_t

0x99be,	// (0x000161a0) main_cale_note_pane

0x6c82,	// (0x00013464) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6c82,	// (0x00013464) cell_vitu2_function_top_wide_pane_cp01

0x84f1,	// (0x00014cd3) wait_bar_pane_cp05_ParamLimits

0x99be,	// (0x000161a0) listscroll_cmail_pane

0xec59,	// (0x0001b43b) list_cmail_pane

0x8e16,	// (0x000155f8) list_cmail_body_pane

0x8e2e,	// (0x00015610) list_single_cmail_header_caption_pane

0x8e4a,	// (0x0001562c) list_single_cmail_header_detail_pane_ParamLimits

0x8e4a,	// (0x0001562c) list_single_cmail_header_detail_pane

0x8e76,	// (0x00015658) list_single_cmail_header_caption_pane_t1

0x8e86,	// (0x00015668) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8e86,	// (0x00015668) list_single_cmail_header_detail_pane_g1

0xec79,	// (0x0001b45b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xec79,	// (0x0001b45b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x0001c5bf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x0001c5bf) list_single_cmail_header_detail_pane_g

0xec92,	// (0x0001b474) list_single_cmail_header_detail_pane_t1_ParamLimits

0xec92,	// (0x0001b474) list_single_cmail_header_detail_pane_t1

0xecc4,	// (0x0001b4a6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xecc4,	// (0x0001b4a6) list_single_cmail_header_editor_pane_bg

0xecd6,	// (0x0001b4b8) list_cmail_body_pane_g1

0xecdf,	// (0x0001b4c1) list_cmail_body_pane_t1

0xd63b,	// (0x00019e1d) list_single_cmail_header_editor_pane_bg_g1

0xa7ac,	// (0x00016f8e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd64b,	// (0x00019e2d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd643,	// (0x00019e25) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8bc,	// (0x0001a09e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd66b,	// (0x00019e4d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd65b,	// (0x00019e3d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd663,	// (0x00019e45) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa78c,	// (0x00016f6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ec4,	// (0x000156a6) calenote_gesture_pane_ParamLimits

0x8ec4,	// (0x000156a6) calenote_gesture_pane

0x8ee4,	// (0x000156c6) calenote_window_pane_ParamLimits

0x8ee4,	// (0x000156c6) calenote_window_pane

0xeced,	// (0x0001b4cf) popup_note_window_cp01

0x8f00,	// (0x000156e2) calenote_swipe_1_pane_ParamLimits

0x8f00,	// (0x000156e2) calenote_swipe_1_pane

0x88fe,	// (0x000150e0) calenote_swipe_2_pane_ParamLimits

0x88fe,	// (0x000150e0) calenote_swipe_2_pane

0xe8cc,	// (0x0001b0ae) calenote_swipe_1_pane_g1_ParamLimits

0xe8cc,	// (0x0001b0ae) calenote_swipe_1_pane_g1

0xe8d9,	// (0x0001b0bb) calenote_swipe_1_pane_g2_ParamLimits

0xe8d9,	// (0x0001b0bb) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0001c4f3) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0001c4f3) calenote_swipe_1_pane_g

0xecff,	// (0x0001b4e1) calenote_swipe_1_pane_t1_ParamLimits

0xecff,	// (0x0001b4e1) calenote_swipe_1_pane_t1

0xe8cc,	// (0x0001b0ae) calenote_swipe_2_pane_g1_ParamLimits

0xe8cc,	// (0x0001b0ae) calenote_swipe_2_pane_g1

0xed1e,	// (0x0001b500) calenote_swipe_2_pane_g2_ParamLimits

0xed1e,	// (0x0001b500) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x0001c5cb) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x0001c5cb) calenote_swipe_2_pane_g

0xed2a,	// (0x0001b50c) calenote_swipe_2_pane_t1_ParamLimits

0xed2a,	// (0x0001b50c) calenote_swipe_2_pane_t1

0x99be,	// (0x000161a0) main_mup_navstr_pane

0x593b,	// (0x0001211d) main_mup3_pane_t7_ParamLimits

0x593b,	// (0x0001211d) main_mup3_pane_t7

0xd261,	// (0x00019a43) main_mp4_pane_g6_ParamLimits

0xd261,	// (0x00019a43) main_mp4_pane_g6

0xd47b,	// (0x00019c5d) main_image3_pane_t4_ParamLimits

0xd47b,	// (0x00019c5d) main_image3_pane_t4

0x8f15,	// (0x000156f7) popup_navstr_preview_pane_ParamLimits

0x8f15,	// (0x000156f7) popup_navstr_preview_pane

0x8f29,	// (0x0001570b) scroll_navstr_pane_ParamLimits

0x8f29,	// (0x0001570b) scroll_navstr_pane

0x99be,	// (0x000161a0) bg_popup_preview_window_pane_cp04

0xed51,	// (0x0001b533) popup_navstr_preview_pane_t1

0x8f3d,	// (0x0001571f) scroll_navstr_pane_g1_ParamLimits

0x8f3d,	// (0x0001571f) scroll_navstr_pane_g1

0x8f51,	// (0x00015733) scroll_navstr_pane_t1_ParamLimits

0x8f51,	// (0x00015733) scroll_navstr_pane_t1

0xecf6,	// (0x0001b4d8) bg_button_pane_cp014

0xecf6,	// (0x0001b4d8) bg_button_pane_cp030

0xe86d,	// (0x0001b04f) list_double_fisheye_pane_g4_ParamLimits

0xe86d,	// (0x0001b04f) list_double_fisheye_pane_g4

0xe879,	// (0x0001b05b) list_double_fisheye_pane_g5_ParamLimits

0xe879,	// (0x0001b05b) list_double_fisheye_pane_g5

0xec61,	// (0x0001b443) sp_fs_scroll_pane_cp03

0xa4f2,	// (0x00016cd4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xea07,	// (0x0001b1e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0001c510) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xea13,	// (0x0001b1f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8e0c,	// (0x000155ee) sp_fs_scroll_pane_cp02

0xa373,	// (0x00016b55) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa373,	// (0x00016b55) popup_sp_fs_calendar_preview_list_single_pane

0x99be,	// (0x000161a0) main_cam6_pano_pane

0x9a2e,	// (0x00016210) main_mup3_pane_ParamLimits

0x99be,	// (0x000161a0) main_phacti_pane

0x83c4,	// (0x00014ba6) bg_button_pane_cp11

0x83de,	// (0x00014bc0) main_mobtv_info_pane_g2_ParamLimits

0x83de,	// (0x00014bc0) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0001c470) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0001c470) main_mobtv_info_pane_g

0x85b9,	// (0x00014d9b) sc_clock_pane_t5_ParamLimits

0x85b9,	// (0x00014d9b) sc_clock_pane_t5

0x863e,	// (0x00014e20) main_radioblah_pane_g1_ParamLimits

0xe7db,	// (0x0001afbd) main_radioblah_pane_t3_ParamLimits

0xe7db,	// (0x0001afbd) main_radioblah_pane_t3

0xe7f3,	// (0x0001afd5) main_radioblah_pane_t4_ParamLimits

0xe7f3,	// (0x0001afd5) main_radioblah_pane_t4

0x8666,	// (0x00014e48) main_radioblah_text_pane_ParamLimits

0x8666,	// (0x00014e48) main_radioblah_text_pane

0x8678,	// (0x00014e5a) main_radioblah_info_pane_g1_ParamLimits

0x8713,	// (0x00014ef5) main_radioblah_info_pane_t4_ParamLimits

0x8713,	// (0x00014ef5) main_radioblah_info_pane_t4

0x9a2e,	// (0x00016210) main_sp_fs_calendar_pane

0x8f67,	// (0x00015749) main_phacti_pane_g1

0x8f6f,	// (0x00015751) phacti_note_pane_ParamLimits

0x8f6f,	// (0x00015751) phacti_note_pane

0xed68,	// (0x0001b54a) phacti_term_pane_ParamLimits

0xed68,	// (0x0001b54a) phacti_term_pane

0xed7d,	// (0x0001b55f) phacti_note_pane_t1_ParamLimits

0xed7d,	// (0x0001b55f) phacti_note_pane_t1

0xed94,	// (0x0001b576) phacti_term_pane_g1

0xed9c,	// (0x0001b57e) phacti_term_pane_t1_ParamLimits

0xed9c,	// (0x0001b57e) phacti_term_pane_t1

0xedc6,	// (0x0001b5a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xedce,	// (0x0001b5b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x0001c5d5) popup_sp_fs_calendar_preview_list_single_pane_g

0xedd6,	// (0x0001b5b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xedd6,	// (0x0001b5b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xedec,	// (0x0001b5ce) aid_popup_sp_fs_bg_corner_pane

0xc8f1,	// (0x000190d3) popup_sp_fs_calendar_preview_bg_pane_g1

0x99be,	// (0x000161a0) popup_sp_fs_calendar_preview_bg_pane

0xedf4,	// (0x0001b5d6) popup_sp_fs_calendar_preview_list_pane

0x9a2e,	// (0x00016210) bg_main_sp_fs_cale_pane_ParamLimits

0x9a2e,	// (0x00016210) bg_main_sp_fs_cale_pane

0xee05,	// (0x0001b5e7) listscroll_cale_mrui_pane_ParamLimits

0xee05,	// (0x0001b5e7) listscroll_cale_mrui_pane

0xee19,	// (0x0001b5fb) listscroll_sp_fs_schedule_track_pane

0xee22,	// (0x0001b604) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xee22,	// (0x0001b604) main_sp_fs_ctrlbar_pane_cp01

0xee33,	// (0x0001b615) main_sp_fs_ribbon_pane

0xee3b,	// (0x0001b61d) popup_sp_fs_cale_preview_window

0x8fca,	// (0x000157ac) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8fca,	// (0x000157ac) list_single_sp_fs_schedule_track_pane

0x9a2e,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a2e,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp03

0x8fe0,	// (0x000157c2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8fe0,	// (0x000157c2) list_single_sp_fs_schedule_track_pane_g1

0x8fec,	// (0x000157ce) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8fec,	// (0x000157ce) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x0001c5da) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x0001c5da) list_single_sp_fs_schedule_track_pane_g

0x8ff8,	// (0x000157da) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ff8,	// (0x000157da) list_single_sp_fs_schedule_track_pane_t1

0x9012,	// (0x000157f4) sp_fs_schedule_track_pane_ParamLimits

0x9012,	// (0x000157f4) sp_fs_schedule_track_pane

0xee4d,	// (0x0001b62f) sp_fs_schedule_track_pane_g1

0xee55,	// (0x0001b637) sp_fs_schedule_track_pane_g2

0xee5d,	// (0x0001b63f) sp_fs_schedule_track_pane_g3

0xee65,	// (0x0001b647) sp_fs_schedule_track_pane_g4

0xee6d,	// (0x0001b64f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x0001c5df) sp_fs_schedule_track_pane_g

0xd63b,	// (0x00019e1d) bg_sp_fs_schedule_viewer_highlight_g1

0xa7ac,	// (0x00016f8e) bg_sp_fs_schedule_viewer_highlight_g2

0xd643,	// (0x00019e25) bg_sp_fs_schedule_viewer_highlight_g3

0xd64b,	// (0x00019e2d) bg_sp_fs_schedule_viewer_highlight_g4

0xd8bc,	// (0x0001a09e) bg_sp_fs_schedule_viewer_highlight_g5

0xd65b,	// (0x00019e3d) bg_sp_fs_schedule_viewer_highlight_g6

0xd663,	// (0x00019e45) bg_sp_fs_schedule_viewer_highlight_g7

0xd66b,	// (0x00019e4d) bg_sp_fs_schedule_viewer_highlight_g8

0xa78c,	// (0x00016f6e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x0001c5ea) bg_sp_fs_schedule_viewer_highlight_g

0x99be,	// (0x000161a0) bg_main_sp_fs_ribbon_pane

0x9023,	// (0x00015805) main_sp_fs_ribbon_pane_g1

0xee75,	// (0x0001b657) main_sp_fs_ribbon_pane_t1

0x902c,	// (0x0001580e) main_sp_fs_ribbon_pane_t2

0xee84,	// (0x0001b666) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x0001c5fd) main_sp_fs_ribbon_pane_t

0xee93,	// (0x0001b675) main_sp_fs_ribbon_scheduler_pane

0xee9b,	// (0x0001b67d) bg_main_sp_fs_ribbon_pane_g1

0xeea4,	// (0x0001b686) bg_main_sp_fs_ribbon_pane_g2

0xeead,	// (0x0001b68f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x0001c604) bg_main_sp_fs_ribbon_pane_g

0xeeb5,	// (0x0001b697) main_sp_fs_ribbon_scheduler_pane_g1

0xeebe,	// (0x0001b6a0) main_sp_fs_ribbon_scheduler_pane_g2

0xeec7,	// (0x0001b6a9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x0001c60b) main_sp_fs_ribbon_scheduler_pane_g

0xeed0,	// (0x0001b6b2) list_cale_mrui_pane

0x903b,	// (0x0001581d) sp_fs_scroll_pane_cp07_ParamLimits

0x903b,	// (0x0001581d) sp_fs_scroll_pane_cp07

0x9051,	// (0x00015833) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9051,	// (0x00015833) bg_sp_fs_schedule_viewer_highlight

0xeed9,	// (0x0001b6bb) list_single_sp_fs_schedule_track_pane_cp01

0xeee1,	// (0x0001b6c3) list_sp_fs_schedule_track_pane

0xeee9,	// (0x0001b6cb) sp_fs_scroll_pane_cp06_ParamLimits

0xeee9,	// (0x0001b6cb) sp_fs_scroll_pane_cp06

0xc8f1,	// (0x000190d3) bgmain_sp_fs_calendar_pane_g1

0x9061,	// (0x00015843) list_single_cale_mrui_pane_ParamLimits

0x9061,	// (0x00015843) list_single_cale_mrui_pane

0xeefb,	// (0x0001b6dd) list_single_cale_mrui_row_pane_ParamLimits

0xeefb,	// (0x0001b6dd) list_single_cale_mrui_row_pane

0xef08,	// (0x0001b6ea) list_single_cale_mrui_row_pane_g1_ParamLimits

0xef08,	// (0x0001b6ea) list_single_cale_mrui_row_pane_g1

0xef40,	// (0x0001b722) list_single_cale_mrui_row_pane_t1_ParamLimits

0xef40,	// (0x0001b722) list_single_cale_mrui_row_pane_t1

0x9084,	// (0x00015866) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9084,	// (0x00015866) list_single_cale_mrui_row_pane_t2

0xef52,	// (0x0001b734) list_single_cale_mrui_row_pane_t3_ParamLimits

0xef52,	// (0x0001b734) list_single_cale_mrui_row_pane_t3

0xef81,	// (0x0001b763) list_single_cale_mrui_row_pane_t4_ParamLimits

0xef81,	// (0x0001b763) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x0001c617) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x0001c617) list_single_cale_mrui_row_pane_t

0x90ec,	// (0x000158ce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x90ec,	// (0x000158ce) list_single_cmail_header_editor_pane_bg_cp01

0x9112,	// (0x000158f4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9112,	// (0x000158f4) list_single_cmail_header_editor_pane_bg_cp02

0x9132,	// (0x00015914) main_radioblah_text_pane_t1_ParamLimits

0x9132,	// (0x00015914) main_radioblah_text_pane_t1

0xefb0,	// (0x0001b792) cam6_indi_pane_cp01

0xefb8,	// (0x0001b79a) cam6_mode_pane_cp01

0xefc0,	// (0x0001b7a2) cam6_pano_pane

0xefc9,	// (0x0001b7ab) cam6_zoom_pane_cp01

0xefd1,	// (0x0001b7b3) cam6_pano_image_pane

0xefdc,	// (0x0001b7be) cam6_pano_pane_g1

0xe553,	// (0x0001ad35) cam6_pano_pane_g2

0xefe5,	// (0x0001b7c7) cam6_pano_pane_g3

0xefee,	// (0x0001b7d0) cam6_pano_pane_g4

0xcee0,	// (0x000196c2) cam6_pano_pane_g5

0xeff7,	// (0x0001b7d9) cam6_pano_pane_g6

0xf001,	// (0x0001b7e3) cam6_pano_pane_g7

0xf009,	// (0x0001b7eb) cam6_pano_pane_g8

0xf012,	// (0x0001b7f4) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x0001c620) cam6_pano_pane_g

0x99be,	// (0x000161a0) main_browser_tag_pane

0xed49,	// (0x0001b52b) grid_navstr_albumart_pane

0xf01d,	// (0x0001b7ff) cell_navstr_albumart_pane_ParamLimits

0xf01d,	// (0x0001b7ff) cell_navstr_albumart_pane

0xb0d3,	// (0x000178b5) cell_navstr_albumart_pane_g1

0xc206,	// (0x000189e8) cell_navstr_albumart_pane_g2

0xc216,	// (0x000189f8) cell_navstr_albumart_pane_g3

0xc20e,	// (0x000189f0) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x0001c633) cell_navstr_albumart_pane_g

0x914d,	// (0x0001592f) bt_list_pane_ParamLimits

0x914d,	// (0x0001592f) bt_list_pane

0x9162,	// (0x00015944) bt_list_pane_t1

0x9171,	// (0x00015953) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x0001c63c) bt_list_pane_t

0x99be,	// (0x000161a0) main_cale_prevew_pane

0x9180,	// (0x00015962) popup_cale_preview_window_ParamLimits

0x9180,	// (0x00015962) popup_cale_preview_window

0x9a2e,	// (0x00016210) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a2e,	// (0x00016210) bg_popup_preview_window_pane_cp05

0xf03f,	// (0x0001b821) list_cale_preview_pane_ParamLimits

0xf03f,	// (0x0001b821) list_cale_preview_pane

0x9195,	// (0x00015977) list_double_cale_preview_pane_ParamLimits

0x9195,	// (0x00015977) list_double_cale_preview_pane

0x91a7,	// (0x00015989) list_single_cale_preview_pane_ParamLimits

0x91a7,	// (0x00015989) list_single_cale_preview_pane

0x91bb,	// (0x0001599d) list_single_cale_preview_pane_g1

0x91c3,	// (0x000159a5) list_single_cale_preview_pane_t1_ParamLimits

0x91c3,	// (0x000159a5) list_single_cale_preview_pane_t1

0x91d8,	// (0x000159ba) list_double_cale_preview_pane_g1

0x91e0,	// (0x000159c2) list_double_cale_preview_pane_t1_ParamLimits

0x91e0,	// (0x000159c2) list_double_cale_preview_pane_t1

0x91f5,	// (0x000159d7) list_double_cale_preview_pane_t2_ParamLimits

0x91f5,	// (0x000159d7) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x0001c641) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x0001c641) list_double_cale_preview_pane_t

0x99be,	// (0x000161a0) main_ezdial_pane

0x9a2e,	// (0x00016210) main_sp_fs_email_pane_ParamLimits

0x8936,	// (0x00015118) cmail_ddmenu_btn01_pane_ParamLimits

0x8936,	// (0x00015118) cmail_ddmenu_btn01_pane

0x8949,	// (0x0001512b) cmail_ddmenu_btn02_pane_ParamLimits

0x8949,	// (0x0001512b) cmail_ddmenu_btn02_pane

0x896c,	// (0x0001514e) cmail_ddmenu_btn03_pane_ParamLimits

0x896c,	// (0x0001514e) cmail_ddmenu_btn03_pane

0x8990,	// (0x00015172) main_sp_fs_ctrlbar_pane_ParamLimits

0x89b4,	// (0x00015196) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8e16,	// (0x000155f8) list_cmail_body_pane_ParamLimits

0xec70,	// (0x0001b452) bg_button_pane_cp12

0xec85,	// (0x0001b467) list_single_cmail_header_detail_pane_g3_ParamLimits

0xec85,	// (0x0001b467) list_single_cmail_header_detail_pane_g3

0x8e9e,	// (0x00015680) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8e9e,	// (0x00015680) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x0001c5c6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x0001c5c6) list_single_cmail_header_detail_pane_t

0xedb1,	// (0x0001b593) phacti_term_pane_t2_ParamLimits

0xedb1,	// (0x0001b593) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x0001c5d0) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x0001c5d0) phacti_term_pane_t

0xf04b,	// (0x0001b82d) aid_size_list_single_double

0x920d,	// (0x000159ef) popup_ezdial_listscroll_window

0x9229,	// (0x00015a0b) popup_number_entry_window_cp01

0xaf52,	// (0x00017734) bg_popup_call_pane_cp09

0xf057,	// (0x0001b839) ezdial_list_pane

0xf05f,	// (0x0001b841) scroll_pane_cp23

0xc3e9,	// (0x00018bcb) bg_button_pane_cp028_ParamLimits

0xc3e9,	// (0x00018bcb) bg_button_pane_cp028

0x9237,	// (0x00015a19) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9237,	// (0x00015a19) cmail_ddmenu_btn01_pane_g1

0x9243,	// (0x00015a25) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9243,	// (0x00015a25) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x0001c646) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x0001c646) cmail_ddmenu_btn01_pane_g

0xf067,	// (0x0001b849) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xf067,	// (0x0001b849) cmail_ddmenu_btn01_pane_t1

0xc3e9,	// (0x00018bcb) bg_button_pane_cp029_ParamLimits

0xc3e9,	// (0x00018bcb) bg_button_pane_cp029

0x924f,	// (0x00015a31) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x924f,	// (0x00015a31) cmail_ddmenu_btn02_pane_g1

0x9267,	// (0x00015a49) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9267,	// (0x00015a49) cmail_ddmenu_btn02_pane_t1

0x9a2e,	// (0x00016210) bg_button_pane_cp031_ParamLimits

0x9a2e,	// (0x00016210) bg_button_pane_cp031

0x924f,	// (0x00015a31) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x924f,	// (0x00015a31) cmail_ddmenu_btn03_pane_g1

0x9267,	// (0x00015a49) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9267,	// (0x00015a49) cmail_ddmenu_btn03_pane_t1

0x64bc,	// (0x00012c9e) cell_dialer2_keypad_pane_t1_ParamLimits

0x64d6,	// (0x00012cb8) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64d6,	// (0x00012cb8) cell_dialer2_keypad_pane_t1_copy1

0x8269,	// (0x00014a4b) ncimui_group_button_pane

0x9a2e,	// (0x00016210) main_sp_fs_calendar_pane_ParamLimits

0x8e2e,	// (0x00015610) list_single_cmail_header_caption_pane_ParamLimits

0xedfc,	// (0x0001b5de) aid_recal_txt_sm_pane

0x99be,	// (0x000161a0) mian_recal_day_pane

0xee3b,	// (0x0001b61d) popup_sp_fs_cale_preview_window_ParamLimits

0x99be,	// (0x000161a0) list_recal_day_pane

0xf09e,	// (0x0001b880) list_single_recal_day_pane_ParamLimits

0xf09e,	// (0x0001b880) list_single_recal_day_pane

0xf0b0,	// (0x0001b892) list_single_recal_day_pane_g1_ParamLimits

0xf0b0,	// (0x0001b892) list_single_recal_day_pane_g1

0xf0bc,	// (0x0001b89e) list_single_recal_day_pane_g2_ParamLimits

0xf0bc,	// (0x0001b89e) list_single_recal_day_pane_g2

0xf0cb,	// (0x0001b8ad) list_single_recal_day_pane_g3_ParamLimits

0xf0cb,	// (0x0001b8ad) list_single_recal_day_pane_g3

0x928b,	// (0x00015a6d) list_single_recal_day_pane_g4_ParamLimits

0x928b,	// (0x00015a6d) list_single_recal_day_pane_g4

0xf0d7,	// (0x0001b8b9) list_single_recal_day_pane_g5_ParamLimits

0xf0d7,	// (0x0001b8b9) list_single_recal_day_pane_g5

0xf0e6,	// (0x0001b8c8) list_single_recal_day_pane_g6_ParamLimits

0xf0e6,	// (0x0001b8c8) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x0001c655) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x0001c655) list_single_recal_day_pane_g

0xf0f2,	// (0x0001b8d4) list_single_recal_day_pane_t1

0xf100,	// (0x0001b8e2) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x0001c662) list_single_recal_day_pane_t

0x929e,	// (0x00015a80) ncimui_query_button_pane_ParamLimits

0x929e,	// (0x00015a80) ncimui_query_button_pane

0x92ae,	// (0x00015a90) ncimui_query_button_pane_t1_ParamLimits

0x92ae,	// (0x00015a90) ncimui_query_button_pane_t1

0xf10e,	// (0x0001b8f0) ncimui_query_button_pane_t2_ParamLimits

0xf10e,	// (0x0001b8f0) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x0001c667) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x0001c667) ncimui_query_button_pane_t

0x92c1,	// (0x00015aa3) query_button_pane_ParamLimits

0x92c1,	// (0x00015aa3) query_button_pane

0x99be,	// (0x000161a0) bg_button_pane_cp0028

0xf121,	// (0x0001b903) query_button_pane_t1

0x4594,	// (0x00010d76) main_tport_pane_ParamLimits

0x8d10,	// (0x000154f2) bg_popup_window_pane_cp01_ParamLimits

0x8d10,	// (0x000154f2) bg_popup_window_pane_cp01

0x8d2a,	// (0x0001550c) heading_pane_cp08_ParamLimits

0x8d2a,	// (0x0001550c) heading_pane_cp08

0x8d3e,	// (0x00015520) heading_pane_cp07_ParamLimits

0x8d3e,	// (0x00015520) heading_pane_cp07

0x8dbb,	// (0x0001559d) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x0001c5b3) cell_tport_appsw_pane_g

0x3b6b,	// (0x0001034d) input_candi_list_open_g1

0xa99f,	// (0x00017181) list_cale_time_pane_g6_ParamLimits

0xa99f,	// (0x00017181) list_cale_time_pane_g6

0x535d,	// (0x00011b3f) aid_size_touch_calib_1_ParamLimits

0x535d,	// (0x00011b3f) aid_size_touch_calib_1

0x5369,	// (0x00011b4b) aid_size_touch_calib_2_ParamLimits

0x5369,	// (0x00011b4b) aid_size_touch_calib_2

0x537f,	// (0x00011b61) aid_size_touch_calib_3_ParamLimits

0x537f,	// (0x00011b61) aid_size_touch_calib_3

0x539d,	// (0x00011b7f) aid_size_touch_calib_4_ParamLimits

0x539d,	// (0x00011b7f) aid_size_touch_calib_4

0x53b3,	// (0x00011b95) main_touch_calib_button_group_pane_ParamLimits

0x53b3,	// (0x00011b95) main_touch_calib_button_group_pane

0x53ca,	// (0x00011bac) main_touch_calib_pane_g1_ParamLimits

0x53d6,	// (0x00011bb8) main_touch_calib_pane_g2_ParamLimits

0x53e2,	// (0x00011bc4) main_touch_calib_pane_g3_ParamLimits

0x53ee,	// (0x00011bd0) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0001bf9a) main_touch_calib_pane_g_ParamLimits

0x53fa,	// (0x00011bdc) main_touch_calib_pane_t1_ParamLimits

0x5414,	// (0x00011bf6) main_touch_calib_pane_t2_ParamLimits

0x542e,	// (0x00011c10) main_touch_calib_pane_t3_ParamLimits

0x5442,	// (0x00011c24) main_touch_calib_pane_t4_ParamLimits

0x5456,	// (0x00011c38) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0001bfa3) main_touch_calib_pane_t_ParamLimits

0xccc7,	// (0x000194a9) list_single_fp_cale_pane_g3_ParamLimits

0xccc7,	// (0x000194a9) list_single_fp_cale_pane_g3

0x9a2e,	// (0x00016210) bg_button_pane_cp012_ParamLimits

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp03_ParamLimits

0x7566,	// (0x00013d48) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a2e,	// (0x00016210) bg_vkb2_func_pane_cp04_ParamLimits

0x821d,	// (0x000149ff) main_ncimui_button_group_pane_ParamLimits

0x821d,	// (0x000149ff) main_ncimui_button_group_pane

0x8257,	// (0x00014a39) main_ncimui_pane_t3_ParamLimits

0x8257,	// (0x00014a39) main_ncimui_pane_t3

0xed5f,	// (0x0001b541) phacti_button_group_pane

0xf04b,	// (0x0001b82d) aid_size_list_single_double_ParamLimits

0x920d,	// (0x000159ef) popup_ezdial_listscroll_window_ParamLimits

0x9229,	// (0x00015a0b) popup_number_entry_window_cp01_ParamLimits

0x92d4,	// (0x00015ab6) phacti_button_pane_ParamLimits

0x92d4,	// (0x00015ab6) phacti_button_pane

0x99be,	// (0x000161a0) bg_button_pane_cp14

0x0006,	// (0x0000c7e8) phacti_button_pane_t1

0x92e5,	// (0x00015ac7) main_touch_calib_button_pane_ParamLimits

0x92e5,	// (0x00015ac7) main_touch_calib_button_pane

0xa1d9,	// (0x000169bb) bg_button_pane_cp18_ParamLimits

0xa1d9,	// (0x000169bb) bg_button_pane_cp18

0x0024,	// (0x0000c806) main_touch_calib_button_pane_t1_ParamLimits

0x0024,	// (0x0000c806) main_touch_calib_button_pane_t1

0x003a,	// (0x0000c81c) main_touch_calib_button_pane_t2_ParamLimits

0x003a,	// (0x0000c81c) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x0001c66c) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x0001c66c) main_touch_calib_button_pane_t

0x99be,	// (0x000161a0) cell_ncimui_button_pane

0x99be,	// (0x000161a0) bg_button_pane_cp032

0x0058,	// (0x0000c83a) cell_ncimui_button_pane_t1

0xd45b,	// (0x00019c3d) image3_infobar_pane_ParamLimits

0xd45b,	// (0x00019c3d) image3_infobar_pane

0x85e5,	// (0x00014dc7) fs_bigclock_status_pane_ParamLimits

0x85e5,	// (0x00014dc7) fs_bigclock_status_pane

0x85f2,	// (0x00014dd4) main_fs_bigclock_clock_pane_ParamLimits

0x85f2,	// (0x00014dd4) main_fs_bigclock_clock_pane

0x8605,	// (0x00014de7) main_fs_bigclock_indi_pane_ParamLimits

0x8605,	// (0x00014de7) main_fs_bigclock_indi_pane

0x861d,	// (0x00014dff) main_fs_bigclock_swipe_pane_ParamLimits

0x861d,	// (0x00014dff) main_fs_bigclock_swipe_pane

0x99be,	// (0x000161a0) main_fs_clock_dumped_data

0xe660,	// (0x0001ae42) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe660,	// (0x0001ae42) list_single_fs_bigclock_indicator_pane_g1

0xe67e,	// (0x0001ae60) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe67e,	// (0x0001ae60) list_single_fs_bigclock_indicator_pane_g2

0xe698,	// (0x0001ae7a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe698,	// (0x0001ae7a) list_single_fs_bigclock_indicator_pane_g3

0xe6b2,	// (0x0001ae94) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe6b2,	// (0x0001ae94) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0001c4a4) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0001c4a4) list_single_fs_bigclock_indicator_pane_g

0xe6d8,	// (0x0001aeba) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe6d8,	// (0x0001aeba) list_single_fs_bigclock_indicator_pane_t1

0xe700,	// (0x0001aee2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe700,	// (0x0001aee2) list_single_fs_bigclock_indicator_pane_t2

0xe728,	// (0x0001af0a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe728,	// (0x0001af0a) list_single_fs_bigclock_indicator_pane_t3

0xe750,	// (0x0001af32) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe750,	// (0x0001af32) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0001c4af) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0001c4af) list_single_fs_bigclock_indicator_pane_t

0x0066,	// (0x0000c848) image3_infobar_fav_pane_ParamLimits

0x0066,	// (0x0000c848) image3_infobar_fav_pane

0x0076,	// (0x0000c858) image3_infobar_loc_pane_ParamLimits

0x0076,	// (0x0000c858) image3_infobar_loc_pane

0x008a,	// (0x0000c86c) image3_infobar_time_pane_ParamLimits

0x008a,	// (0x0000c86c) image3_infobar_time_pane

0xc8f1,	// (0x000190d3) image3_infobar_time_pane_g1

0x009a,	// (0x0000c87c) image3_infobar_time_pane_t1

0xc8f1,	// (0x000190d3) image3_infobar_loc_pane_g1

0x00a8,	// (0x0000c88a) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x0001c671) image3_infobar_loc_pane_g

0x00b0,	// (0x0000c892) image3_infobar_loc_pane_t1

0xc8f1,	// (0x000190d3) image3_infobar_fav_pane_g1

0x00be,	// (0x0000c8a0) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x0001c676) image3_infobar_fav_pane_g

0x00c6,	// (0x0000c8a8) fs_bigclock_status_battery_pane

0x00cf,	// (0x0000c8b1) fs_bigclock_status_signal_pane

0x00d8,	// (0x0000c8ba) fs_bigclock_status_title_pane

0x00e1,	// (0x0000c8c3) fs_bigclock_status_signal_pane_g1

0x00ea,	// (0x0000c8cc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x0001c67b) fs_bigclock_status_signal_pane_g

0x00f2,	// (0x0000c8d4) fs_bigclock_status_battery_pane_g1

0x00fb,	// (0x0000c8dd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x0001c680) fs_bigclock_status_battery_pane_g

0x0103,	// (0x0000c8e5) fs_bigclock_status_title_pane_t1

0xc8f1,	// (0x000190d3) main_fs_bigclock_clock_pane_g1

0x0111,	// (0x0000c8f3) main_fs_bigclock_clock_pane_g2

0x0111,	// (0x0000c8f3) main_fs_bigclock_clock_pane_g3

0x0111,	// (0x0000c8f3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x0001c685) main_fs_bigclock_clock_pane_g

0x0119,	// (0x0000c8fb) main_fs_bigclock_clock_pane_t1

0x0127,	// (0x0000c909) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x0001c68e) main_fs_bigclock_clock_pane_t

0x0136,	// (0x0000c918) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0136,	// (0x0000c918) list_single_fs_bigclock_indicator_pane

0x92fa,	// (0x00015adc) list_single_fs_bigclock_pane_ParamLimits

0x92fa,	// (0x00015adc) list_single_fs_bigclock_pane

0x01b4,	// (0x0000c996) main_fs_bigclock_indicator_pane_t1

0x01c3,	// (0x0000c9a5) list_single_fs_bigclock_pane_g1

0x01cb,	// (0x0000c9ad) list_single_fs_bigclock_pane_t1

0xc8f1,	// (0x000190d3) main_fs_bigclock_swipe_pane_g1

0x0209,	// (0x0000c9eb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x0001c69f) main_fs_bigclock_swipe_pane_g

0x0211,	// (0x0000c9f3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0211,	// (0x0000c9f3) main_fs_bigclock_swipe_pane_t1

0x33a2,	// (0x0000fb84) call_type_pane_ParamLimits

0x99be,	// (0x000161a0) main_btmg_pane

0xef34,	// (0x0001b716) list_single_cale_mrui_row_pane_g2_ParamLimits

0xef34,	// (0x0001b716) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x0001c612) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x0001c612) list_single_cale_mrui_row_pane_g

0xf085,	// (0x0001b867) list_recal_vselct_arw_lo_pane

0xf08d,	// (0x0001b86f) list_recal_vselct_arw_up_pane

0xf095,	// (0x0001b877) list_recal_vselct_pane

0x022e,	// (0x0000ca10) btmg_button_pane

0x9360,	// (0x00015b42) main_btmg_pane_g1

0x99be,	// (0x000161a0) bg_button_pane_cp044

0x0240,	// (0x0000ca22) btmg_button_pane_t1

0xc3e1,	// (0x00018bc3) aid_listscroll_gen

0x9a2e,	// (0x00016210) main_cntbar_detail_pane

0xec51,	// (0x0001b433) list_cmail_folder_pane

0xec61,	// (0x0001b443) sp_fs_scroll_pane_cp03_ParamLimits

0x8e2e,	// (0x00015610) list_single_fs_dyc_pane_cp01_ParamLimits

0x8e2e,	// (0x00015610) list_single_fs_dyc_pane_cp01

0x024e,	// (0x0000ca30) aid_size_cmail_indent

0x0257,	// (0x0000ca39) list_single_dyc_row_pane_cp01

0x9396,	// (0x00015b78) cntbar_detail_list_pane_ParamLimits

0x9396,	// (0x00015b78) cntbar_detail_list_pane

0x93e2,	// (0x00015bc4) main_cntbar_detail_cont_pane_ParamLimits

0x93e2,	// (0x00015bc4) main_cntbar_detail_cont_pane

0x333c,	// (0x0000fb1e) scroll_pane_cp032_ParamLimits

0x333c,	// (0x0000fb1e) scroll_pane_cp032

0x93f6,	// (0x00015bd8) cntbar_detail_list_event_pane_ParamLimits

0x93f6,	// (0x00015bd8) cntbar_detail_list_event_pane

0x93a6,	// (0x00015b88) cntbar_detail_list_shct_pane

0xa7fa,	// (0x00016fdc) aid_list_gen

0x02da,	// (0x0000cabc) aid_scroll

0x02e3,	// (0x0000cac5) aid_size_touch_scroll_bar

0x9406,	// (0x00015be8) aid_list_double

0x02f5,	// (0x0000cad7) aid_list_single

0x02fe,	// (0x0000cae0) aid_list_single_lg

0x0307,	// (0x0000cae9) aid_list_z_g_a_sm

0x030f,	// (0x0000caf1) aid_list_z_g_d

0x0317,	// (0x0000caf9) aid_txt_z_prm

0x940f,	// (0x00015bf1) aid_txt_z_prm_cp01

0x941d,	// (0x00015bff) aid_txt_z_sec

0x942b,	// (0x00015c0d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x942b,	// (0x00015c0d) main_cntbar_detail_cont_pane_g1

0x943f,	// (0x00015c21) main_cntbar_detail_cont_pane_g2_ParamLimits

0x943f,	// (0x00015c21) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x0001c6a4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x0001c6a4) main_cntbar_detail_cont_pane_g

0x035a,	// (0x0000cb3c) main_cntbar_detail_cont_pane_t1

0x0368,	// (0x0000cb4a) main_cntbar_detail_cont_pane_t2

0x0376,	// (0x0000cb58) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x0001c6a9) main_cntbar_detail_cont_pane_t

0x944f,	// (0x00015c31) cell_cntbar_detail_list_shct_pane_ParamLimits

0x944f,	// (0x00015c31) cell_cntbar_detail_list_shct_pane

0x0398,	// (0x0000cb7a) cntbar_detail_list_shct_pane_g1

0x03a1,	// (0x0000cb83) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x0001c6b0) cntbar_detail_list_shct_pane_g

0x9463,	// (0x00015c45) cntbar_detail_list_event_pane_g1_ParamLimits

0x9463,	// (0x00015c45) cntbar_detail_list_event_pane_g1

0x946f,	// (0x00015c51) cntbar_detail_list_event_pane_g2_ParamLimits

0x946f,	// (0x00015c51) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x0001c6b5) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x0001c6b5) cntbar_detail_list_event_pane_g

0x94db,	// (0x00015cbd) cntbar_detail_list_event_pane_t1_ParamLimits

0x94db,	// (0x00015cbd) cntbar_detail_list_event_pane_t1

0x94f0,	// (0x00015cd2) cntbar_detail_list_event_pane_t2_ParamLimits

0x94f0,	// (0x00015cd2) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x0001c6c2) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x0001c6c2) cntbar_detail_list_event_pane_t

0xc8f1,	// (0x000190d3) cell_cntbar_detail_list_shct_pane_g1

0x36f5,	// (0x0000fed7) navi_pane_mv_g3

0x9a2e,	// (0x00016210) main_cntbar_detail_pane_ParamLimits

0x99be,	// (0x000161a0) main_notif_wgt_pane

0xd217,	// (0x000199f9) aid_tch_main_mp4_pane_g4

0xd3ef,	// (0x00019bd1) popup_slider_window_cp02

0xf07c,	// (0x0001b85e) list_recal_day_event_pane

0x936a,	// (0x00015b4c) cntbar_detail_btn_pane_ParamLimits

0x936a,	// (0x00015b4c) cntbar_detail_btn_pane

0x9380,	// (0x00015b62) cntbar_detail_btn_pane_cp01_ParamLimits

0x9380,	// (0x00015b62) cntbar_detail_btn_pane_cp01

0x93a6,	// (0x00015b88) cntbar_detail_list_shct_pane_ParamLimits

0x93b6,	// (0x00015b98) cntbar_detail_pane_g1_ParamLimits

0x93b6,	// (0x00015b98) cntbar_detail_pane_g1

0x93c6,	// (0x00015ba8) cntbar_detail_pane_t1_ParamLimits

0x93c6,	// (0x00015ba8) cntbar_detail_pane_t1

0x947b,	// (0x00015c5d) cntbar_detail_list_event_pane_g3_ParamLimits

0x947b,	// (0x00015c5d) cntbar_detail_list_event_pane_g3

0x9493,	// (0x00015c75) cntbar_detail_list_event_pane_g4_ParamLimits

0x9493,	// (0x00015c75) cntbar_detail_list_event_pane_g4

0x94ab,	// (0x00015c8d) cntbar_detail_list_event_pane_g5_ParamLimits

0x94ab,	// (0x00015c8d) cntbar_detail_list_event_pane_g5

0x94c3,	// (0x00015ca5) cntbar_detail_list_event_pane_g6_ParamLimits

0x94c3,	// (0x00015ca5) cntbar_detail_list_event_pane_g6

0x9505,	// (0x00015ce7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9505,	// (0x00015ce7) cntbar_detail_list_event_pane_t3

0x9517,	// (0x00015cf9) popup_notif_wgt_window_ParamLimits

0x9517,	// (0x00015cf9) popup_notif_wgt_window

0x9530,	// (0x00015d12) popup_submenu_window_cp01_ParamLimits

0x9530,	// (0x00015d12) popup_submenu_window_cp01

0xaf52,	// (0x00017734) bg_popup_window_pane_cp10

0x047c,	// (0x0000cc5e) listscroll_notif_wgt_pane

0x0486,	// (0x0000cc68) list_notif_wgt_window

0x048f,	// (0x0000cc71) scroll_pane_cp033

0x0498,	// (0x0000cc7a) list_notif_wgt_row_pane_ParamLimits

0x0498,	// (0x0000cc7a) list_notif_wgt_row_pane

0x04ac,	// (0x0000cc8e) aid_size_list_notif_wgt_del

0x04b5,	// (0x0000cc97) list_notif_wgt_row_pane_g1

0x04bd,	// (0x0000cc9f) list_notif_wgt_row_pane_g2

0x04c5,	// (0x0000cca7) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x0001c6c9) list_notif_wgt_row_pane_g

0x04ce,	// (0x0000ccb0) list_notif_wgt_row_pane_t1

0x04dc,	// (0x0000ccbe) list_notif_wgt_row_pane_t2

0x04ea,	// (0x0000cccc) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x0001c6d0) list_notif_wgt_row_pane_t

0xd8fc,	// (0x0001a0de) list_recal_day_event_pane_g1

0x04f8,	// (0x0000ccda) list_recal_day_event_pane_t1

0x99be,	// (0x000161a0) bg_button_pane_cp045

0x0507,	// (0x0000cce9) cntbar_detail_btn_pane_t1

0xc3e9,	// (0x00018bcb) main_callh_pane_ParamLimits

0xc3e9,	// (0x00018bcb) main_callh_pane

0x99be,	// (0x000161a0) main_coverflow0_pane

0x99be,	// (0x000161a0) main_wgtman_pane

0x862b,	// (0x00014e0d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x862b,	// (0x00014e0d) main_fs_bigclock_unlock_btn_pane

0x8dab,	// (0x0001558d) bg_button_pane_cp16

0x8dc3,	// (0x000155a5) cell_tport_appsw_pane_g3

0x9542,	// (0x00015d24) cf0_flow_pane_ParamLimits

0x9542,	// (0x00015d24) cf0_flow_pane

0x0524,	// (0x0000cd06) listscroll_cf0_pane

0x052d,	// (0x0000cd0f) main_cf0_pane_g1

0x9557,	// (0x00015d39) main_cf0_pane_t1_ParamLimits

0x9557,	// (0x00015d39) main_cf0_pane_t1

0x956f,	// (0x00015d51) main_cf0_pane_t2_ParamLimits

0x956f,	// (0x00015d51) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x0001c6d7) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x0001c6d7) main_cf0_pane_t

0x055f,	// (0x0000cd41) scroll_pane_cp11

0x9587,	// (0x00015d69) cf0_flow_pane_g1

0x958f,	// (0x00015d71) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x0001c6dc) cf0_flow_pane_g

0x9597,	// (0x00015d79) cf0_flow_pane_t1

0x99be,	// (0x000161a0) main_call6_pane

0x99be,	// (0x000161a0) main_calllock_pane

0x95a5,	// (0x00015d87) call6_btn_grp_pane_ParamLimits

0x95a5,	// (0x00015d87) call6_btn_grp_pane

0x95bf,	// (0x00015da1) call6_pane_g1_ParamLimits

0x95bf,	// (0x00015da1) call6_pane_g1

0x95d4,	// (0x00015db6) popup_call6_1st_window_ParamLimits

0x95d4,	// (0x00015db6) popup_call6_1st_window

0x95e5,	// (0x00015dc7) popup_call6_2nd_window_ParamLimits

0x95e5,	// (0x00015dc7) popup_call6_2nd_window

0x95f6,	// (0x00015dd8) cell_call6_btn_pane_ParamLimits

0x95f6,	// (0x00015dd8) cell_call6_btn_pane

0xaf52,	// (0x00017734) bg_popup_call2_in_pane_cp03

0x05d1,	// (0x0000cdb3) popup_call6_1st_window_g1

0x05d9,	// (0x0000cdbb) popup_call6_1st_window_g2

0x05e1,	// (0x0000cdc3) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x0001c6e1) popup_call6_1st_window_g

0x05e9,	// (0x0000cdcb) popup_call6_1st_window_t1

0x05f8,	// (0x0000cdda) popup_call6_1st_window_t2

0x0608,	// (0x0000cdea) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x0001c6e8) popup_call6_1st_window_t

0xaf52,	// (0x00017734) bg_popup_call2_in_pane_cp04

0x05d1,	// (0x0000cdb3) popup_call6_2nd_window_g1

0x05d9,	// (0x0000cdbb) popup_call6_2nd_window_g2

0x05e1,	// (0x0000cdc3) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x0001c6e1) popup_call6_2nd_window_g

0x05e9,	// (0x0000cdcb) popup_call6_2nd_window_t1

0x99be,	// (0x000161a0) bg_button_pane_cp15

0x0618,	// (0x0000cdfa) cell_call6_btn_pane_g1

0x0621,	// (0x0000ce03) cell_call6_btn_pane_t1

0x960a,	// (0x00015dec) listscroll_wgtman_pane_ParamLimits

0x960a,	// (0x00015dec) listscroll_wgtman_pane

0x9622,	// (0x00015e04) wgtman_btn_pane_ParamLimits

0x9622,	// (0x00015e04) wgtman_btn_pane

0xae05,	// (0x000175e7) aid_scroll_copy1

0x064d,	// (0x0000ce2f) list_wgtman_pane

0x963b,	// (0x00015e1d) wgtman_btn_pane_g1_ParamLimits

0x963b,	// (0x00015e1d) wgtman_btn_pane_g1

0x964f,	// (0x00015e31) wgtman_btn_pane_t1_ParamLimits

0x964f,	// (0x00015e31) wgtman_btn_pane_t1

0x0675,	// (0x0000ce57) wgtman_btn_pane_t2_ParamLimits

0x0675,	// (0x0000ce57) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x0001c6ef) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x0001c6ef) wgtman_btn_pane_t

0x966a,	// (0x00015e4c) listrow_wgtman_pane_ParamLimits

0x966a,	// (0x00015e4c) listrow_wgtman_pane

0x967d,	// (0x00015e5f) listrow_wgtman_pane_g1

0x9686,	// (0x00015e68) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x0001c6f4) listrow_wgtman_pane_g

0x9690,	// (0x00015e72) listrow_wgtman_pane_t1

0x969e,	// (0x00015e80) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x0001c6f9) listrow_wgtman_pane_t

0x96ac,	// (0x00015e8e) wait_bar_pane_cp09

0x06da,	// (0x0000cebc) main_calllock_btn_pane

0x06e4,	// (0x0000cec6) main_calllock_pane_g1

0x99be,	// (0x000161a0) bg_button_pane_cp17

0x06ef,	// (0x0000ced1) main_calllock_btn_pane_g1

0x06f8,	// (0x0000ceda) main_calllock_btn_pane_t1

0x99be,	// (0x000161a0) main_dialer3_pane

0x99be,	// (0x000161a0) main_fmrd2_pane

0xc8f1,	// (0x000190d3) main_fs_bigclock_unlock_btn_pane_g1

0x070f,	// (0x0000cef1) main_fs_bigclock_unlock_btn_pane_t1

0x96b4,	// (0x00015e96) area_fmrd2_info_pane_ParamLimits

0x96b4,	// (0x00015e96) area_fmrd2_info_pane

0x96c6,	// (0x00015ea8) area_fmrd2_visual_pane_ParamLimits

0x96c6,	// (0x00015ea8) area_fmrd2_visual_pane

0x96d4,	// (0x00015eb6) fmrd2_indi_pane_ParamLimits

0x96d4,	// (0x00015eb6) fmrd2_indi_pane

0x96e1,	// (0x00015ec3) area_fmrd2_visual_pane_g1

0x96e9,	// (0x00015ecb) area_fmrd2_visual_pane_t1

0x96f9,	// (0x00015edb) area_fmrd2_visual_pane_t2

0x9709,	// (0x00015eeb) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x0001c703) area_fmrd2_visual_pane_t

0x9719,	// (0x00015efb) area_fmrd2_info_pane_g1

0x9721,	// (0x00015f03) area_fmrd2_info_pane_t1

0x9731,	// (0x00015f13) area_fmrd2_info_pane_t2

0x9741,	// (0x00015f23) area_fmrd2_info_pane_t3

0x9751,	// (0x00015f33) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x0001c70a) area_fmrd2_info_pane_t

0x975f,	// (0x00015f41) fmrd2_indi_pane_t1

0x976f,	// (0x00015f51) fmrd2_indi_pane_t2

0x977f,	// (0x00015f61) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x0001c713) fmrd2_indi_pane_t

0xe6c1,	// (0x0001aea3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe6c1,	// (0x0001aea3) list_single_fs_bigclock_indicator_pane_g5

0xe765,	// (0x0001af47) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe765,	// (0x0001af47) list_single_fs_bigclock_indicator_pane_t5

0x8f83,	// (0x00015765) aid_cell_bcale_month_pane_ParamLimits

0x8f83,	// (0x00015765) aid_cell_bcale_month_pane

0x8f95,	// (0x00015777) bcale_month_pane_ParamLimits

0x8f95,	// (0x00015777) bcale_month_pane

0x8faf,	// (0x00015791) bcale_preview_pane_ParamLimits

0x8faf,	// (0x00015791) bcale_preview_pane

0x01cb,	// (0x0000c9ad) list_single_fs_bigclock_pane_t1_ParamLimits

0x01e5,	// (0x0000c9c7) list_single_fs_bigclock_pane_t2_ParamLimits

0x01e5,	// (0x0000c9c7) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x0001c69a) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x0001c69a) list_single_fs_bigclock_pane_t

0x0707,	// (0x0000cee9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x0001c6fe) main_fs_bigclock_unlock_btn_pane_g

0x978f,	// (0x00015f71) aid_dia3_key_size_ParamLimits

0x978f,	// (0x00015f71) aid_dia3_key_size

0x979e,	// (0x00015f80) aid_dia3_listrow_size_ParamLimits

0x979e,	// (0x00015f80) aid_dia3_listrow_size

0x97ac,	// (0x00015f8e) dia3_keypad_fun_pane_ParamLimits

0x97ac,	// (0x00015f8e) dia3_keypad_fun_pane

0x97c6,	// (0x00015fa8) dia3_keypad_num_pane_ParamLimits

0x97c6,	// (0x00015fa8) dia3_keypad_num_pane

0x97df,	// (0x00015fc1) dia3_listscroll_pane_ParamLimits

0x97df,	// (0x00015fc1) dia3_listscroll_pane

0x97f2,	// (0x00015fd4) dia3_numentry_pane_ParamLimits

0x97f2,	// (0x00015fd4) dia3_numentry_pane

0x0849,	// (0x0000d02b) dia3_list_pane

0x0854,	// (0x0000d036) scroll_pane_cp12

0x99be,	// (0x000161a0) bg_dia3_numentry_pane

0x085f,	// (0x0000d041) dia3_numentry_pane_t1

0x9803,	// (0x00015fe5) cell_dia3_key_num_pane

0x980b,	// (0x00015fed) cell_dia3_key0_fun_pane_ParamLimits

0x980b,	// (0x00015fed) cell_dia3_key0_fun_pane

0x981f,	// (0x00016001) cell_dia3_key1_fun_pane_ParamLimits

0x981f,	// (0x00016001) cell_dia3_key1_fun_pane

0xdd27,	// (0x0001a509) dia3_listrow_pane

0xe3ed,	// (0x0001abcf) bg_dia3_numentry_pane_g1

0x99be,	// (0x000161a0) bg_button_pane_cp21

0x0899,	// (0x0000d07b) cell_dia3_key_num_pane_t1

0x08a7,	// (0x0000d089) cell_dia3_key_num_pane_t2

0x08b6,	// (0x0000d098) cell_dia3_key_num_pane_t3

0x08c5,	// (0x0000d0a7) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x0001c71a) cell_dia3_key_num_pane_t

0x99be,	// (0x000161a0) bg_button_pane_cp19

0x9837,	// (0x00016019) cell_dia3_key0_fun_pane_g1

0x99be,	// (0x000161a0) bg_button_pane_cp20

0x983f,	// (0x00016021) cell_dia3_key1_fun_pane_g1

0x9847,	// (0x00016029) area_left_week_number_pane

0x9850,	// (0x00016032) area_top_day_name_pane

0x9859,	// (0x0001603b) frame_month_view_pane

0x9865,	// (0x00016047) grid_month_view_pane

0x986f,	// (0x00016051) cell_top_day_name_pane_ParamLimits

0x986f,	// (0x00016051) cell_top_day_name_pane

0x9887,	// (0x00016069) cell_area_left_week_number_pane_ParamLimits

0x9887,	// (0x00016069) cell_area_left_week_number_pane

0x989b,	// (0x0001607d) cell_month_view_pane_ParamLimits

0x989b,	// (0x0001607d) cell_month_view_pane

0x0955,	// (0x0000d137) frm_month_g1

0x98b6,	// (0x00016098) frm_month_g2

0x98c0,	// (0x000160a2) frm_month_g3

0x98ca,	// (0x000160ac) frm_month_g4

0x98d4,	// (0x000160b6) frm_month_g5

0x98de,	// (0x000160c0) frm_month_g6

0x98e8,	// (0x000160ca) frm_month_g7

0x099a,	// (0x0000d17c) frm_month_g8

0x98f4,	// (0x000160d6) frm_month_g9

0x98fd,	// (0x000160df) frm_month_g10

0x9906,	// (0x000160e8) frm_month_g11

0x990f,	// (0x000160f1) frm_month_g12

0x9918,	// (0x000160fa) frm_month_g13

0x9921,	// (0x00016103) frm_month_g14

0x992a,	// (0x0001610c) frm_month_g15

0x9933,	// (0x00016115) frm_month_g16

0x000f,

0xff41,	// (0x0001c723) frm_month_g

0x993e,	// (0x00016120) cell_top_day_name_pane_t1

0x994d,	// (0x0001612f) cell_area_left_week_number_pane_g1

0x993e,	// (0x00016120) cell_area_left_week_number_pane_t1

0xc8f1,	// (0x000190d3) cell_month_view_pane_g1

0x9955,	// (0x00016137) cell_month_view_pane_t1

0x99be,	// (0x000161a0) main_fps_pane

0xe9cf,	// (0x0001b1b1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe9cf,	// (0x0001b1b1) cmail_ddmenu_btn02_pane_cp1

0xe9eb,	// (0x0001b1cd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe9eb,	// (0x0001b1cd) cmail_ddmenu_btn02_pane_cp2

0x925b,	// (0x00015a3d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x925b,	// (0x00015a3d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x0001c64b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x0001c64b) cmail_ddmenu_btn02_pane_g

0x9279,	// (0x00015a5b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9279,	// (0x00015a5b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x0001c650) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x0001c650) cmail_ddmenu_btn02_pane_t

0x9964,	// (0x00016146) fps_text_pane_ParamLimits

0x9964,	// (0x00016146) fps_text_pane

0x997b,	// (0x0001615d) main_fps_pane_g1_ParamLimits

0x997b,	// (0x0001615d) main_fps_pane_g1

0x9995,	// (0x00016177) wait_bar_pane_cp010_ParamLimits

0x9995,	// (0x00016177) wait_bar_pane_cp010

0x99a6,	// (0x00016188) fps_text_pane_t1_ParamLimits

0x99a6,	// (0x00016188) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
