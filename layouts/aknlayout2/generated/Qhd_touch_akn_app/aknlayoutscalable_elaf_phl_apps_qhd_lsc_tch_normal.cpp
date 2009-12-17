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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000c83a };

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
0x1723,	// (0x0000df5d) Screen

0x172f,	// (0x0000df69) application_window

0x176b,	// (0x0000dfa5) area_bottom_pane_ParamLimits

0x176b,	// (0x0000dfa5) area_bottom_pane

0x17a4,	// (0x0000dfde) area_top_pane_ParamLimits

0x17a4,	// (0x0000dfde) area_top_pane

0x9909,	// (0x00016143) call_video_uplink_pane_ParamLimits

0x9909,	// (0x00016143) call_video_uplink_pane

0x181e,	// (0x0000e058) main_pane_ParamLimits

0x181e,	// (0x0000e058) main_pane

0xc335,	// (0x00018b6f) context_pane

0x46da,	// (0x00010f14) navi_pane

0x4702,	// (0x00010f3c) popup_cale_events_window_ParamLimits

0x4702,	// (0x00010f3c) popup_cale_events_window

0xc348,	// (0x00018b82) popup_mup_playback_window

0x471a,	// (0x00010f54) signal_pane

0xa09c,	// (0x000168d6) main_browser_pane

0xae2b,	// (0x00017665) main_burst_pane

0x442c,	// (0x00010c66) main_calc_pane

0xae2b,	// (0x00017665) main_cale_day_pane

0xa09c,	// (0x000168d6) main_cale_month_pane

0xae2b,	// (0x00017665) main_cale_week_pane

0xae2b,	// (0x00017665) main_call_pane

0x9d48,	// (0x00016582) main_call_poc_pane

0xae2b,	// (0x00017665) main_camera_pane

0xae2b,	// (0x00017665) main_chi_dic_pane

0xacb0,	// (0x000174ea) main_clock_pane

0x9d48,	// (0x00016582) main_fmradio_pane

0xae2b,	// (0x00017665) main_graph_messa_pane

0x9d48,	// (0x00016582) main_help_pane

0xa09c,	// (0x000168d6) main_im_pane

0x9fa3,	// (0x000167dd) main_image_pane_ParamLimits

0x9fa3,	// (0x000167dd) main_image_pane

0x9d48,	// (0x00016582) main_location2_pane

0xae2b,	// (0x00017665) main_location_pane

0x9d48,	// (0x00016582) main_messa_pane

0x9d48,	// (0x00016582) main_mp2_pane

0xae2b,	// (0x00017665) main_mp_pane

0x9d48,	// (0x00016582) main_msg_pane

0x9d48,	// (0x00016582) main_mup_eq_pane

0x9d48,	// (0x00016582) main_mup_pane

0xae2b,	// (0x00017665) main_notes_pane

0x9d48,	// (0x00016582) main_pec_pane

0x9d48,	// (0x00016582) main_phob_pane

0x9d48,	// (0x00016582) main_pinb_pane

0x9d48,	// (0x00016582) main_postcard_pane

0x9d48,	// (0x00016582) main_qdial_pane

0xae2b,	// (0x00017665) main_skin_pane

0x9d48,	// (0x00016582) main_smil2_pane

0xae2b,	// (0x00017665) main_smil_pane

0xae2b,	// (0x00017665) main_video_pane

0xae2b,	// (0x00017665) main_video_tele_pane

0x9fa3,	// (0x000167dd) main_viewer_pane_ParamLimits

0x9fa3,	// (0x000167dd) main_viewer_pane

0xae2b,	// (0x00017665) main_vorec_pane

0x4480,	// (0x00010cba) popup_blid_sat_info_window_ParamLimits

0x4480,	// (0x00010cba) popup_blid_sat_info_window

0x44d8,	// (0x00010d12) popup_dyc_status_message_window_ParamLimits

0x44d8,	// (0x00010d12) popup_dyc_status_message_window

0x44f2,	// (0x00010d2c) popup_grid_large_graphic_window_ParamLimits

0x44f2,	// (0x00010d2c) popup_grid_large_graphic_window

0x45ae,	// (0x00010de8) popup_loc_request_window_ParamLimits

0x45ae,	// (0x00010de8) popup_loc_request_window

0x46b2,	// (0x00010eec) popup_wml_address_window_ParamLimits

0x46b2,	// (0x00010eec) popup_wml_address_window

0x4266,	// (0x00010aa0) call_muted_g1

0x3f1b,	// (0x00010755) popup_call_audio_conf_window_ParamLimits

0x3f1b,	// (0x00010755) popup_call_audio_conf_window

0x427a,	// (0x00010ab4) popup_call_audio_first_window_ParamLimits

0x427a,	// (0x00010ab4) popup_call_audio_first_window

0x42f0,	// (0x00010b2a) popup_call_audio_in_window_ParamLimits

0x42f0,	// (0x00010b2a) popup_call_audio_in_window

0x432c,	// (0x00010b66) popup_call_audio_out_window_ParamLimits

0x432c,	// (0x00010b66) popup_call_audio_out_window

0x4366,	// (0x00010ba0) popup_call_audio_second_window_ParamLimits

0x4366,	// (0x00010ba0) popup_call_audio_second_window

0x43bc,	// (0x00010bf6) popup_call_audio_wait_window_ParamLimits

0x43bc,	// (0x00010bf6) popup_call_audio_wait_window

0x43f1,	// (0x00010c2b) popup_number_entry_window_ParamLimits

0x43f1,	// (0x00010c2b) popup_number_entry_window

0x9935,	// (0x0001616f) bg_popup_call_pane_cp05_ParamLimits

0x9935,	// (0x0001616f) bg_popup_call_pane_cp05

0x9955,	// (0x0001618f) popup_number_entry_window_t1

0x9968,	// (0x000161a2) popup_number_entry_window_t2

0x997a,	// (0x000161b4) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0001b969) popup_number_entry_window_t

0x998c,	// (0x000161c6) text_title_cp2

0x999f,	// (0x000161d9) bg_popup_call_pane_cp_ParamLimits

0x999f,	// (0x000161d9) bg_popup_call_pane_cp

0x99ad,	// (0x000161e7) call_thumbnail_pane

0x99b5,	// (0x000161ef) popup_call_audio_in_window_g1_ParamLimits

0x99b5,	// (0x000161ef) popup_call_audio_in_window_g1

0x99c1,	// (0x000161fb) popup_call_audio_in_window_g2_ParamLimits

0x99c1,	// (0x000161fb) popup_call_audio_in_window_g2

0x99cd,	// (0x00016207) popup_call_audio_in_window_g3_ParamLimits

0x99cd,	// (0x00016207) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0001b972) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0001b972) popup_call_audio_in_window_g

0x99d9,	// (0x00016213) popup_call_audio_in_window_t1_ParamLimits

0x99d9,	// (0x00016213) popup_call_audio_in_window_t1

0x99f5,	// (0x0001622f) popup_call_audio_in_window_t2_ParamLimits

0x99f5,	// (0x0001622f) popup_call_audio_in_window_t2

0x9a11,	// (0x0001624b) popup_call_audio_in_window_t3_ParamLimits

0x9a11,	// (0x0001624b) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0001b979) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0001b979) popup_call_audio_in_window_t

0x999f,	// (0x000161d9) bg_popup_call_pane_cp01_ParamLimits

0x999f,	// (0x000161d9) bg_popup_call_pane_cp01

0x99ad,	// (0x000161e7) call_thumbnail_pane_cp02

0x9a24,	// (0x0001625e) call_type_pane_cp022

0x9a2c,	// (0x00016266) popup_call_audio_out_window_g1_ParamLimits

0x9a2c,	// (0x00016266) popup_call_audio_out_window_g1

0x9a3e,	// (0x00016278) popup_call_audio_out_window_g2_ParamLimits

0x9a3e,	// (0x00016278) popup_call_audio_out_window_g2

0x9a4a,	// (0x00016284) popup_call_audio_out_window_g3_ParamLimits

0x9a4a,	// (0x00016284) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0001b980) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0001b980) popup_call_audio_out_window_g

0x9a5c,	// (0x00016296) popup_call_audio_out_window_t1_ParamLimits

0x9a5c,	// (0x00016296) popup_call_audio_out_window_t1

0x9a74,	// (0x000162ae) popup_call_audio_out_window_t2_ParamLimits

0x9a74,	// (0x000162ae) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0001b987) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0001b987) popup_call_audio_out_window_t

0x9a89,	// (0x000162c3) bg_popup_call_pane_ParamLimits

0x9a89,	// (0x000162c3) bg_popup_call_pane

0x19cd,	// (0x0000e207) call_thumbnail_pane_cp_ParamLimits

0x19cd,	// (0x0000e207) call_thumbnail_pane_cp

0x9b0d,	// (0x00016347) call_type_pane_cp01_ParamLimits

0x9b0d,	// (0x00016347) call_type_pane_cp01

0x9b51,	// (0x0001638b) popup_call_audio_first_window_g1_ParamLimits

0x9b51,	// (0x0001638b) popup_call_audio_first_window_g1

0x9b9d,	// (0x000163d7) popup_call_audio_first_window_g2_ParamLimits

0x9b9d,	// (0x000163d7) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0001b98c) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0001b98c) popup_call_audio_first_window_g

0x9be1,	// (0x0001641b) popup_call_audio_first_window_t1_ParamLimits

0x9be1,	// (0x0001641b) popup_call_audio_first_window_t1

0x9c8d,	// (0x000164c7) popup_call_audio_first_window_t4_ParamLimits

0x9c8d,	// (0x000164c7) popup_call_audio_first_window_t4

0x9d19,	// (0x00016553) popup_call_audio_first_window_t5_ParamLimits

0x9d19,	// (0x00016553) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0001b991) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0001b991) popup_call_audio_first_window_t

0x9d48,	// (0x00016582) bg_popup_call_pane_cp02

0x9d52,	// (0x0001658c) call_type_pane_cp023

0x9d5a,	// (0x00016594) popup_call_audio_wait_window_g1

0x9d62,	// (0x0001659c) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001b998) popup_call_audio_wait_window_g

0x9d6a,	// (0x000165a4) popup_call_audio_wait_window_t3

0x9d78,	// (0x000165b2) bg_popup_call_pane_cp03_ParamLimits

0x9d78,	// (0x000165b2) bg_popup_call_pane_cp03

0x9dd8,	// (0x00016612) call_thumbnail_pane_cp011_ParamLimits

0x9dd8,	// (0x00016612) call_thumbnail_pane_cp011

0x9de4,	// (0x0001661e) call_type_pane_cp034_ParamLimits

0x9de4,	// (0x0001661e) call_type_pane_cp034

0x9e20,	// (0x0001665a) popup_call_audio_second_window_g1_ParamLimits

0x9e20,	// (0x0001665a) popup_call_audio_second_window_g1

0x9e5c,	// (0x00016696) popup_call_audio_second_window_g2_ParamLimits

0x9e5c,	// (0x00016696) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0001b99d) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0001b99d) popup_call_audio_second_window_g

0x9e98,	// (0x000166d2) popup_call_audio_second_window_t1_ParamLimits

0x9e98,	// (0x000166d2) popup_call_audio_second_window_t1

0x9f19,	// (0x00016753) popup_call_audio_second_window_t2_ParamLimits

0x9f19,	// (0x00016753) popup_call_audio_second_window_t2

0x9f4f,	// (0x00016789) popup_call_audio_second_window_t3_ParamLimits

0x9f4f,	// (0x00016789) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0001b9a2) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0001b9a2) popup_call_audio_second_window_t

0x9d48,	// (0x00016582) bg_popup_call_pane_cp04

0x9f85,	// (0x000167bf) list_conf_pane

0x9f8d,	// (0x000167c7) popup_call_audio_conf_window_t1

0x9f9b,	// (0x000167d5) call_thumbnail_pane_g1

0x9fa3,	// (0x000167dd) bg_pinb_pane_ParamLimits

0x9fa3,	// (0x000167dd) bg_pinb_pane

0x9fb1,	// (0x000167eb) find_pinb_pane

0x9fba,	// (0x000167f4) listscroll_pinb_pane_ParamLimits

0x9fba,	// (0x000167f4) listscroll_pinb_pane

0x9fc9,	// (0x00016803) pinb_bg_pane_g1

0x19f1,	// (0x0000e22b) pinb_bg_pane_g2

0x19fd,	// (0x0000e237) pinb_bg_pane_g3

0x1a09,	// (0x0000e243) pinb_bg_pane_g4

0x1a15,	// (0x0000e24f) pinb_bg_pane_g5

0x1a21,	// (0x0000e25b) pinb_bg_pane_g6

0x1a2c,	// (0x0000e266) pinb_bg_pane_g7

0x1a37,	// (0x0000e271) pinb_bg_pane_g8

0x1a42,	// (0x0000e27c) pinb_bg_pane_g9

0x1a4c,	// (0x0000e286) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0001b9a9) pinb_bg_pane_g

0x1a69,	// (0x0000e2a3) grid_pinb_pane

0x1a72,	// (0x0000e2ac) list_pinb_pane

0x1a7b,	// (0x0000e2b5) scroll_pane_cp01_ParamLimits

0x1a7b,	// (0x0000e2b5) scroll_pane_cp01

0x9fd3,	// (0x0001680d) find_pinb_pane_g1_ParamLimits

0x9fd3,	// (0x0001680d) find_pinb_pane_g1

0x9feb,	// (0x00016825) find_pinb_pane_t1

0x9ffd,	// (0x00016837) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0001b9c3) find_pinb_pane_t

0xa012,	// (0x0001684c) input_focus_pane_cp01_ParamLimits

0xa012,	// (0x0001684c) input_focus_pane_cp01

0x1a8d,	// (0x0000e2c7) cell_pinb_pane_ParamLimits

0x1a8d,	// (0x0000e2c7) cell_pinb_pane

0x1ab6,	// (0x0000e2f0) cell_pinb_pane_g1_ParamLimits

0x1ab6,	// (0x0000e2f0) cell_pinb_pane_g1

0x1ac6,	// (0x0000e300) cell_pinb_pane_g2_ParamLimits

0x1ac6,	// (0x0000e300) cell_pinb_pane_g2

0xa01e,	// (0x00016858) cell_pinb_pane_g3_ParamLimits

0xa01e,	// (0x00016858) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0001b9c8) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0001b9c8) cell_pinb_pane_g

0x9d48,	// (0x00016582) grid_highlight_pane_cp01

0x1ad2,	// (0x0000e30c) list_pinb_item_pane_ParamLimits

0x1ad2,	// (0x0000e30c) list_pinb_item_pane

0x9d48,	// (0x00016582) list_highlight_pane_cp02

0x1ae4,	// (0x0000e31e) list_pinb_item_pane_g1_ParamLimits

0x1ae4,	// (0x0000e31e) list_pinb_item_pane_g1

0xa02a,	// (0x00016864) list_pinb_item_pane_g2_ParamLimits

0xa02a,	// (0x00016864) list_pinb_item_pane_g2

0x1af1,	// (0x0000e32b) list_pinb_item_pane_g3_ParamLimits

0x1af1,	// (0x0000e32b) list_pinb_item_pane_g3

0x1b02,	// (0x0000e33c) list_pinb_item_pane_g4_ParamLimits

0x1b02,	// (0x0000e33c) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0001b9cf) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0001b9cf) list_pinb_item_pane_g

0x1b0e,	// (0x0000e348) list_pinb_item_pane_t1_ParamLimits

0x1b0e,	// (0x0000e348) list_pinb_item_pane_t1

0x1b43,	// (0x0000e37d) calc_display_pane

0x1b69,	// (0x0000e3a3) calc_paper_pane

0x1b8a,	// (0x0000e3c4) grid_calc_pane

0x9d48,	// (0x00016582) bg_list_pane_cp01

0x1bb2,	// (0x0000e3ec) clock_g1

0x1bba,	// (0x0000e3f4) clock_g2

0x0001,

0xf19e,	// (0x0001b9d8) clock_g

0x1bc2,	// (0x0000e3fc) clock_t1_ParamLimits

0x1bc2,	// (0x0000e3fc) clock_t1

0x1bd7,	// (0x0000e411) clock_t2_ParamLimits

0x1bd7,	// (0x0000e411) clock_t2

0x1be9,	// (0x0000e423) clock_t3_ParamLimits

0x1be9,	// (0x0000e423) clock_t3

0x1bfb,	// (0x0000e435) clock_t4_ParamLimits

0x1bfb,	// (0x0000e435) clock_t4

0x1c0d,	// (0x0000e447) clock_t5_ParamLimits

0x1c0d,	// (0x0000e447) clock_t5

0x1c22,	// (0x0000e45c) clock_t6_ParamLimits

0x1c22,	// (0x0000e45c) clock_t6

0x1c34,	// (0x0000e46e) clock_t7_ParamLimits

0x1c34,	// (0x0000e46e) clock_t7

0x1c46,	// (0x0000e480) clock_t8_ParamLimits

0x1c46,	// (0x0000e480) clock_t8

0x1c5a,	// (0x0000e494) clock_t9_ParamLimits

0x1c5a,	// (0x0000e494) clock_t9

0x0008,

0xf1a3,	// (0x0001b9dd) clock_t_ParamLimits

0xf1a3,	// (0x0001b9dd) clock_t

0xa03e,	// (0x00016878) popup_clock_analogue_window_cp02

0xa03e,	// (0x00016878) popup_clock_digital_window_cp01

0xa046,	// (0x00016880) listscroll_help_pane

0x9d48,	// (0x00016582) phob_pre_status_pane

0xa050,	// (0x0001688a) grid_qdial_pane

0x9d48,	// (0x00016582) listscroll_mce_pane

0xa05a,	// (0x00016894) bg_notes_pane

0xa064,	// (0x0001689e) list_notes_pane

0x1c6e,	// (0x0000e4a8) scroll_pane_cp06

0xa06e,	// (0x000168a8) bg_calc_paper_pane

0xa082,	// (0x000168bc) list_calc_pane

0xa09c,	// (0x000168d6) bg_calc_display_pane

0x1c79,	// (0x0000e4b3) calc_display_pane_t1

0x1c8b,	// (0x0000e4c5) calc_display_pane_t2

0xa0a8,	// (0x000168e2) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0001b9f0) calc_display_pane_t

0x1c9d,	// (0x0000e4d7) cell_calc_pane_ParamLimits

0x1c9d,	// (0x0000e4d7) cell_calc_pane

0xa0ba,	// (0x000168f4) bg_calc_paper_pane_g1

0xa0c6,	// (0x00016900) bg_calc_paper_pane_g2

0xa0d2,	// (0x0001690c) bg_calc_paper_pane_g3

0xa0de,	// (0x00016918) bg_calc_paper_pane_g4

0xa0ea,	// (0x00016924) bg_calc_paper_pane_g5

0x1cd2,	// (0x0000e50c) bg_calc_paper_pane_g6

0x1ce1,	// (0x0000e51b) bg_calc_paper_pane_g7

0x1cf0,	// (0x0000e52a) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0001b9f7) bg_calc_paper_pane_g

0x1d03,	// (0x0000e53d) calc_bg_paper_pane_g9

0x1d16,	// (0x0000e550) list_calc_item_pane_ParamLimits

0x1d16,	// (0x0000e550) list_calc_item_pane

0xa0f6,	// (0x00016930) list_calc_item_pane_g1

0xa103,	// (0x0001693d) list_calc_item_pane_t1_ParamLimits

0xa103,	// (0x0001693d) list_calc_item_pane_t1

0x1d29,	// (0x0000e563) list_calc_item_pane_t2_ParamLimits

0x1d29,	// (0x0000e563) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0001ba08) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0001ba08) list_calc_item_pane_t

0xa115,	// (0x0001694f) cell_calc_pane_g1

0xa11f,	// (0x00016959) grid_highlight_pane_cp02

0x1d5d,	// (0x0000e597) bg_calc_display_pane_g1

0x1d66,	// (0x0000e5a0) bg_calc_display_pane_g2

0x1d70,	// (0x0000e5aa) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0001ba12) bg_calc_display_pane_g

0x1d79,	// (0x0000e5b3) cell_qdial_pane_ParamLimits

0x1d79,	// (0x0000e5b3) cell_qdial_pane

0x1d8d,	// (0x0000e5c7) cell_qdial_pane_g1_ParamLimits

0x1d8d,	// (0x0000e5c7) cell_qdial_pane_g1

0x1da3,	// (0x0000e5dd) cell_qdial_pane_g2_ParamLimits

0x1da3,	// (0x0000e5dd) cell_qdial_pane_g2

0xa141,	// (0x0001697b) cell_qdial_pane_g3_ParamLimits

0xa141,	// (0x0001697b) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0001ba19) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0001ba19) cell_qdial_pane_g

0x1dca,	// (0x0000e604) cell_qdial_pane_t1_ParamLimits

0x1dca,	// (0x0000e604) cell_qdial_pane_t1

0x1de2,	// (0x0000e61c) cell_qdial_pane_t2_ParamLimits

0x1de2,	// (0x0000e61c) cell_qdial_pane_t2

0x1df5,	// (0x0000e62f) cell_qdial_pane_t3_ParamLimits

0x1df5,	// (0x0000e62f) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0001ba22) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0001ba22) cell_qdial_pane_t

0x9d48,	// (0x00016582) grid_highlight_pane_cp04

0xa14d,	// (0x00016987) thumbnail_qdial_pane_ParamLimits

0xa14d,	// (0x00016987) thumbnail_qdial_pane

0xa1a9,	// (0x000169e3) list_help_pane

0xa1b2,	// (0x000169ec) scroll_pane_cp02

0x1e08,	// (0x0000e642) help_list_pane_t1_ParamLimits

0x1e08,	// (0x0000e642) help_list_pane_t1

0xa1bb,	// (0x000169f5) bg_notes_pane_g2

0xa1c3,	// (0x000169fd) bg_notes_pane_g3

0xa1cb,	// (0x00016a05) notes_bg_pane_g1

0xa1d3,	// (0x00016a0d) notes_bg_pane_g4

0xa1db,	// (0x00016a15) notes_bg_pane_g5

0xa1e3,	// (0x00016a1d) notes_bg_pane_g6

0xa1eb,	// (0x00016a25) notes_bg_pane_g7

0xa1f3,	// (0x00016a2d) notes_bg_pane_g8

0xa1fb,	// (0x00016a35) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0001ba40) notes_bg_pane_g

0x1e25,	// (0x0000e65f) list_notes_text_pane_ParamLimits

0x1e25,	// (0x0000e65f) list_notes_text_pane

0xa203,	// (0x00016a3d) list_notes_text_pane_g1

0x1e3a,	// (0x0000e674) list_notes_text_pane_t1

0xa09c,	// (0x000168d6) listscroll_cale_week_pane

0x1e65,	// (0x0000e69f) bg_cale_heading_pane

0xa21d,	// (0x00016a57) bg_cale_pane_cp01

0x1e79,	// (0x0000e6b3) cale_week_corner_pane

0x1e8f,	// (0x0000e6c9) cale_week_day_heading_pane

0x1ea3,	// (0x0000e6dd) cale_week_scroll_pane_g1

0x1eb4,	// (0x0000e6ee) cale_week_scroll_pane_g2

0x1ec5,	// (0x0000e6ff) cale_week_scroll_pane_g3

0x1ed6,	// (0x0000e710) cale_week_scroll_pane_g4

0x1ee7,	// (0x0000e721) cale_week_scroll_pane_g5

0x1ef8,	// (0x0000e732) cale_week_scroll_pane_g6

0x1f09,	// (0x0000e743) cale_week_scroll_pane_g7

0x1f1a,	// (0x0000e754) cale_week_scroll_pane_g8

0x1f2b,	// (0x0000e765) cale_week_scroll_pane_g9

0x1f3c,	// (0x0000e776) cale_week_scroll_pane_g10

0x1f4d,	// (0x0000e787) cale_week_scroll_pane_g11

0x1f5e,	// (0x0000e798) cale_week_scroll_pane_g12

0x1f6f,	// (0x0000e7a9) cale_week_scroll_pane_g13

0x1f80,	// (0x0000e7ba) cale_week_scroll_pane_g14

0x1f91,	// (0x0000e7cb) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0001ba4f) cale_week_scroll_pane_g

0x1fa2,	// (0x0000e7dc) cale_week_time_pane

0x1fb3,	// (0x0000e7ed) grid_cale_week_pane

0x1fc6,	// (0x0000e800) scroll_pane_cp08

0x1fe0,	// (0x0000e81a) cell_cale_week_pane_ParamLimits

0x1fe0,	// (0x0000e81a) cell_cale_week_pane

0x201c,	// (0x0000e856) cale_week_day_heading_pane_t1

0x2049,	// (0x0000e883) cale_week_day_heading_pane_t2

0x2076,	// (0x0000e8b0) cale_week_day_heading_pane_t3

0x20a3,	// (0x0000e8dd) cale_week_day_heading_pane_t4

0x20d0,	// (0x0000e90a) cale_week_day_heading_pane_t5

0x20fd,	// (0x0000e937) cale_week_day_heading_pane_t6

0x212a,	// (0x0000e964) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0001ba6e) cale_week_day_heading_pane_t

0xa248,	// (0x00016a82) bg_cale_side_pane

0x2157,	// (0x0000e991) cale_week_time_pane_t1

0x216f,	// (0x0000e9a9) cale_week_time_pane_t2

0x2187,	// (0x0000e9c1) cale_week_time_pane_t3

0x219f,	// (0x0000e9d9) cale_week_time_pane_t4

0x21b7,	// (0x0000e9f1) cale_week_time_pane_t5

0x21cf,	// (0x0000ea09) cale_week_time_pane_t6

0x21e7,	// (0x0000ea21) cale_week_time_pane_t7

0x21ff,	// (0x0000ea39) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0001ba7d) cale_week_time_pane_t

0x2217,	// (0x0000ea51) cell_cale_week_pane_g2

0x2230,	// (0x0000ea6a) cell_cale_week_pane_g3_ParamLimits

0x2230,	// (0x0000ea6a) cell_cale_week_pane_g3

0xa256,	// (0x00016a90) grid_highlight_pane_cp07

0xa25e,	// (0x00016a98) listscroll_gms_pane

0xa268,	// (0x00016aa2) grid_gms_pane

0xa271,	// (0x00016aab) listscroll_gms_pane_g1

0xa279,	// (0x00016ab3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0001ba8e) listscroll_gms_pane_g

0x2248,	// (0x0000ea82) scroll_pane_cp010

0x2253,	// (0x0000ea8d) cell_gms_pane_ParamLimits

0x2253,	// (0x0000ea8d) cell_gms_pane

0x2266,	// (0x0000eaa0) cell_gms_pane_g1

0xa281,	// (0x00016abb) cell_gms_pane_g2

0xa289,	// (0x00016ac3) cell_gms_pane_g3

0xa292,	// (0x00016acc) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0001ba93) cell_gms_pane_g

0xa29b,	// (0x00016ad5) grid_highlight_pane_cp09

0x4210,	// (0x00010a4a) phob_pre_status_pane_g1

0x4218,	// (0x00010a52) phob_pre_status_pane_g2

0x4220,	// (0x00010a5a) phob_pre_status_pane_g3

0x4228,	// (0x00010a62) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0001be82) phob_pre_status_pane_g

0x4238,	// (0x00010a72) phob_pre_status_pane_t1

0x4246,	// (0x00010a80) phob_pre_status_pane_t2

0x4256,	// (0x00010a90) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0001be8d) phob_pre_status_pane_t

0x9d48,	// (0x00016582) bg_list_pane_cp05

0x2276,	// (0x0000eab0) grid_vorec_pane

0xa2a3,	// (0x00016add) vorec_t1

0xa2b1,	// (0x00016aeb) vorec_t2

0xa2bf,	// (0x00016af9) vorec_t3

0xa2cd,	// (0x00016b07) vorec_t4

0xa2db,	// (0x00016b15) vorec_t5

0xa2e9,	// (0x00016b23) vorec_t6

0x0006,

0xf262,	// (0x0001ba9c) vorec_t

0xa305,	// (0x00016b3f) wait_bar_pane_cp01

0x227e,	// (0x0000eab8) cell_vorec_pane_ParamLimits

0x227e,	// (0x0000eab8) cell_vorec_pane

0xa30d,	// (0x00016b47) cell_vorec_pane_g1

0x9d48,	// (0x00016582) grid_highlight_pane_cp05

0x22a9,	// (0x0000eae3) cams_zoom_pane

0x22b8,	// (0x0000eaf2) image_vga_pane

0x22d2,	// (0x0000eb0c) main_camera_pane_g1

0x22e4,	// (0x0000eb1e) main_camera_pane_g2

0x22f4,	// (0x0000eb2e) main_camera_pane_g3

0x2304,	// (0x0000eb3e) main_camera_pane_g4

0x2314,	// (0x0000eb4e) main_camera_pane_g5

0x2324,	// (0x0000eb5e) main_camera_pane_g6

0x2336,	// (0x0000eb70) main_camera_pane_g7

0x0007,

0xf271,	// (0x0001baab) main_camera_pane_g

0x2346,	// (0x0000eb80) main_camera_pane_t1

0x235c,	// (0x0000eb96) main_camera_pane_t2

0x0001,

0xf282,	// (0x0001babc) main_camera_pane_t

0x2396,	// (0x0000ebd0) cams_zoom_pane_cp_ParamLimits

0x2396,	// (0x0000ebd0) cams_zoom_pane_cp

0x23be,	// (0x0000ebf8) image_cif_pane_ParamLimits

0x23be,	// (0x0000ebf8) image_cif_pane

0x23f9,	// (0x0000ec33) image_subqcif_pane

0x2401,	// (0x0000ec3b) main_video_pane_g1_ParamLimits

0x2401,	// (0x0000ec3b) main_video_pane_g1

0x2425,	// (0x0000ec5f) main_video_pane_g2_ParamLimits

0x2425,	// (0x0000ec5f) main_video_pane_g2

0x2459,	// (0x0000ec93) main_video_pane_g3_ParamLimits

0x2459,	// (0x0000ec93) main_video_pane_g3

0x2487,	// (0x0000ecc1) main_video_pane_g4_ParamLimits

0x2487,	// (0x0000ecc1) main_video_pane_g4

0x24b5,	// (0x0000ecef) main_video_pane_g5_ParamLimits

0x24b5,	// (0x0000ecef) main_video_pane_g5

0xa323,	// (0x00016b5d) main_video_pane_g6_ParamLimits

0xa323,	// (0x00016b5d) main_video_pane_g6

0x0006,

0xf287,	// (0x0001bac1) main_video_pane_g_ParamLimits

0xf287,	// (0x0001bac1) main_video_pane_g

0x24e2,	// (0x0000ed1c) main_video_pane_t1_ParamLimits

0x24e2,	// (0x0000ed1c) main_video_pane_t1

0xa33d,	// (0x00016b77) cams_zoom_pane_g1

0xa346,	// (0x00016b80) cams_zoom_pane_g2

0xa34f,	// (0x00016b89) cams_zoom_pane_g3

0xa358,	// (0x00016b92) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0001bad0) cams_zoom_pane_g

0x253f,	// (0x0000ed79) grid_cams_pane

0x2559,	// (0x0000ed93) linegrid_cams_pane

0x256d,	// (0x0000eda7) cell_cams_pane_ParamLimits

0x256d,	// (0x0000eda7) cell_cams_pane

0xa361,	// (0x00016b9b) cams_burst_image_pane

0xa369,	// (0x00016ba3) cell_cams_pane_g1

0x9d48,	// (0x00016582) grid_highlight_pane_cp03

0xa115,	// (0x0001694f) mp_bg_pane_g1

0x9d48,	// (0x00016582) bg_list_pane_cp03

0xc20d,	// (0x00018a47) bg_mp_pane

0xc215,	// (0x00018a4f) grid_mp_pane

0xc21d,	// (0x00018a57) media_player_g1

0xc225,	// (0x00018a5f) media_player_t1

0xc233,	// (0x00018a6d) media_player_t2

0xc241,	// (0x00018a7b) media_player_t3

0xc24f,	// (0x00018a89) media_player_t4

0xc25d,	// (0x00018a97) media_player_t5

0xc26b,	// (0x00018aa5) media_player_t6

0xc279,	// (0x00018ab3) media_player_t7

0x0006,

0xf632,	// (0x0001be6c) media_player_t

0xc287,	// (0x00018ac1) wait_bar_pane_cp02

0xf617,	// (0x0001be51) main_usb_pane_t

0x4207,	// (0x00010a41) cell_mp_pane

0xa115,	// (0x0001694f) cell_mp_pane_g1

0x9d48,	// (0x00016582) grid_highlight_pane_cp06

0xa411,	// (0x00016c4b) grid_skin_colour_pane

0xa419,	// (0x00016c53) list_highlight_pane_cp03

0x25df,	// (0x0000ee19) skin_g1

0xa421,	// (0x00016c5b) skin_t1

0xa430,	// (0x00016c6a) skin_t2

0x0001,

0xf2cb,	// (0x0001bb05) skin_t

0x25e7,	// (0x0000ee21) cell_skin_colour_pane_ParamLimits

0x25e7,	// (0x0000ee21) cell_skin_colour_pane

0xa43e,	// (0x00016c78) cell_skin_colour_pane_g1

0x264b,	// (0x0000ee85) call_video_g1_ParamLimits

0x264b,	// (0x0000ee85) call_video_g1

0x2667,	// (0x0000eea1) call_video_g2_ParamLimits

0x2667,	// (0x0000eea1) call_video_g2

0x0001,

0xf2d0,	// (0x0001bb0a) call_video_g_ParamLimits

0xf2d0,	// (0x0001bb0a) call_video_g

0x26a1,	// (0x0000eedb) call_video_uplink_pane_cp1_ParamLimits

0x26a1,	// (0x0000eedb) call_video_uplink_pane_cp1

0xa458,	// (0x00016c92) call_video_uplink_pane_cp2

0x271f,	// (0x0000ef59) video_down_crop_pane_ParamLimits

0x271f,	// (0x0000ef59) video_down_crop_pane

0x27f5,	// (0x0000f02f) video_down_pane_ParamLimits

0x27f5,	// (0x0000f02f) video_down_pane

0xa460,	// (0x00016c9a) video_down_subqcif_pane_ParamLimits

0xa460,	// (0x00016c9a) video_down_subqcif_pane

0xa478,	// (0x00016cb2) video_down_subqcif_pane_cp_ParamLimits

0xa478,	// (0x00016cb2) video_down_subqcif_pane_cp

0xa49c,	// (0x00016cd6) im_reading_pane_ParamLimits

0xa49c,	// (0x00016cd6) im_reading_pane

0x28c6,	// (0x0000f100) im_writing_pane_ParamLimits

0x28c6,	// (0x0000f100) im_writing_pane

0x28dc,	// (0x0000f116) im_reading_pane_t1

0xa4b6,	// (0x00016cf0) list_im_pane

0xa4c7,	// (0x00016d01) scroll_pane_cp07

0x2915,	// (0x0000f14f) im_writing_pane_t1_ParamLimits

0x2915,	// (0x0000f14f) im_writing_pane_t1

0xa4e0,	// (0x00016d1a) im_writing_pane_t2_ParamLimits

0xa4e0,	// (0x00016d1a) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0001bb14) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0001bb14) im_writing_pane_t

0x9d48,	// (0x00016582) input_focus_pane_cp04

0x9d48,	// (0x00016582) input_focus_pane_cp05

0x292a,	// (0x0000f164) list_im_single_pane_ParamLimits

0x292a,	// (0x0000f164) list_im_single_pane

0x293e,	// (0x0000f178) list_single_im_pane_t1

0x41c7,	// (0x00010a01) blid_accuracy_pane

0x41cf,	// (0x00010a09) blid_compass_pane

0x41d9,	// (0x00010a13) main_location_t1

0x41e9,	// (0x00010a23) main_location_t2

0x41f9,	// (0x00010a33) main_location_t3

0x0002,

0xf641,	// (0x0001be7b) main_location_t

0x9d48,	// (0x00016582) aid_levels_location

0xa115,	// (0x0001694f) blid_accuracy_pane_g1

0xa115,	// (0x0001694f) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0001bb76) blid_accuracy_pane_g

0xa528,	// (0x00016d62) wml_content_pane

0xa566,	// (0x00016da0) wml_button_pane_ParamLimits

0xa566,	// (0x00016da0) wml_button_pane

0x294d,	// (0x0000f187) wml_list_single_large_pane_ParamLimits

0x294d,	// (0x0000f187) wml_list_single_large_pane

0x2962,	// (0x0000f19c) wml_list_single_medium_pane_ParamLimits

0x2962,	// (0x0000f19c) wml_list_single_medium_pane

0x2978,	// (0x0000f1b2) wml_list_single_small_pane_ParamLimits

0x2978,	// (0x0000f1b2) wml_list_single_small_pane

0xa57a,	// (0x00016db4) wml_selection_box_pane_ParamLimits

0xa57a,	// (0x00016db4) wml_selection_box_pane

0xa58d,	// (0x00016dc7) wml_list_single_pane_t1

0xa59c,	// (0x00016dd6) wml_list_single_medium_pane_t1

0xa5ab,	// (0x00016de5) wml_list_single_large_pane_t1

0xa5ba,	// (0x00016df4) input_focus_pane_cp02_ParamLimits

0xa5ba,	// (0x00016df4) input_focus_pane_cp02

0xa5cd,	// (0x00016e07) wml_selection_box_pane_g1

0xa5d6,	// (0x00016e10) wml_selection_box_pane_t1_ParamLimits

0xa5d6,	// (0x00016e10) wml_selection_box_pane_t1

0x9fa3,	// (0x000167dd) bg_wml_button_pane_ParamLimits

0x9fa3,	// (0x000167dd) bg_wml_button_pane

0xa5ee,	// (0x00016e28) wml_button_pane_g1

0xa5f6,	// (0x00016e30) wml_button_pane_t1

0xa5ee,	// (0x00016e28) wml_button_bg_pane_g1

0xa606,	// (0x00016e40) wml_button_bg_pane_g2

0xa60e,	// (0x00016e48) wml_button_bg_pane_g3

0xa616,	// (0x00016e50) wml_button_bg_pane_g4

0xa61e,	// (0x00016e58) wml_button_bg_pane_g5

0xa626,	// (0x00016e60) wml_button_bg_pane_g6

0xa62e,	// (0x00016e68) wml_button_bg_pane_g7

0xa636,	// (0x00016e70) wml_button_bg_pane_g8

0xa63e,	// (0x00016e78) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0001bb19) wml_button_bg_pane_g

0x2990,	// (0x0000f1ca) bg_list_pane_cp02

0xa646,	// (0x00016e80) mce_header_pane_ParamLimits

0xa646,	// (0x00016e80) mce_header_pane

0xa65c,	// (0x00016e96) mce_icon_pane

0xa65c,	// (0x00016e96) mce_image_pane

0xa665,	// (0x00016e9f) mce_text_pane_ParamLimits

0xa665,	// (0x00016e9f) mce_text_pane

0x2998,	// (0x0000f1d2) scroll_pane_cp03

0xa55e,	// (0x00016d98) scroll_pane_cp04

0xa678,	// (0x00016eb2) scroll_pane_cp05_ParamLimits

0xa678,	// (0x00016eb2) scroll_pane_cp05

0x29a2,	// (0x0000f1dc) mce_header_field_pane_ParamLimits

0x29a2,	// (0x0000f1dc) mce_header_field_pane

0x29b9,	// (0x0000f1f3) mce_header_field_pane_2_ParamLimits

0x29b9,	// (0x0000f1f3) mce_header_field_pane_2

0x29cf,	// (0x0000f209) mce_header_field_pane_3

0x29d7,	// (0x0000f211) list_single_mce_message_pane_ParamLimits

0x29d7,	// (0x0000f211) list_single_mce_message_pane

0x29ec,	// (0x0000f226) list_single_mce_smart_pane_ParamLimits

0x29ec,	// (0x0000f226) list_single_mce_smart_pane

0xa684,	// (0x00016ebe) input_focus_pane_cp03

0xa68d,	// (0x00016ec7) list_header_data_pane

0x2a0c,	// (0x0000f246) mce_header_field_pane_t1

0x2a1c,	// (0x0000f256) list_single_mce_header_pane_ParamLimits

0x2a1c,	// (0x0000f256) list_single_mce_header_pane

0xa695,	// (0x00016ecf) list_single_mce_header_pane_t1

0xa6a4,	// (0x00016ede) list_single_mce_message_pane_g1

0xa6ac,	// (0x00016ee6) list_single_mce_message_pane_t1

0x2a4e,	// (0x0000f288) bg_cale_heading_pane_cp01_ParamLimits

0x2a4e,	// (0x0000f288) bg_cale_heading_pane_cp01

0xa6ba,	// (0x00016ef4) bg_cale_pane_cp02_ParamLimits

0xa6ba,	// (0x00016ef4) bg_cale_pane_cp02

0x2a71,	// (0x0000f2ab) cale_month_corner_pane

0x2a87,	// (0x0000f2c1) cale_month_day_heading_pane_ParamLimits

0x2a87,	// (0x0000f2c1) cale_month_day_heading_pane

0x2ab2,	// (0x0000f2ec) cale_month_pane_g1_ParamLimits

0x2ab2,	// (0x0000f2ec) cale_month_pane_g1

0x2ace,	// (0x0000f308) cale_month_pane_g2_ParamLimits

0x2ace,	// (0x0000f308) cale_month_pane_g2

0x2ae9,	// (0x0000f323) cale_month_pane_g3_ParamLimits

0x2ae9,	// (0x0000f323) cale_month_pane_g3

0x2b15,	// (0x0000f34f) cale_month_pane_g4_ParamLimits

0x2b15,	// (0x0000f34f) cale_month_pane_g4

0x2b41,	// (0x0000f37b) cale_month_pane_g5_ParamLimits

0x2b41,	// (0x0000f37b) cale_month_pane_g5

0x2b6d,	// (0x0000f3a7) cale_month_pane_g6_ParamLimits

0x2b6d,	// (0x0000f3a7) cale_month_pane_g6

0x2b99,	// (0x0000f3d3) cale_month_pane_g7_ParamLimits

0x2b99,	// (0x0000f3d3) cale_month_pane_g7

0x2bc5,	// (0x0000f3ff) cale_month_pane_g8_ParamLimits

0x2bc5,	// (0x0000f3ff) cale_month_pane_g8

0x2bf9,	// (0x0000f433) cale_month_pane_g9_ParamLimits

0x2bf9,	// (0x0000f433) cale_month_pane_g9

0x2c2b,	// (0x0000f465) cale_month_pane_g10_ParamLimits

0x2c2b,	// (0x0000f465) cale_month_pane_g10

0x2c5d,	// (0x0000f497) cale_month_pane_g11_ParamLimits

0x2c5d,	// (0x0000f497) cale_month_pane_g11

0x2c8f,	// (0x0000f4c9) cale_month_pane_g12_ParamLimits

0x2c8f,	// (0x0000f4c9) cale_month_pane_g12

0x2cc1,	// (0x0000f4fb) cale_month_pane_g13_ParamLimits

0x2cc1,	// (0x0000f4fb) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0001bb2c) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0001bb2c) cale_month_pane_g

0x2cf3,	// (0x0000f52d) cale_month_week_pane

0x2d06,	// (0x0000f540) grid_cale_month_pane_ParamLimits

0x2d06,	// (0x0000f540) grid_cale_month_pane

0x2d2c,	// (0x0000f566) cale_month_day_heading_pane_t1

0x2d8a,	// (0x0000f5c4) cale_month_day_heading_pane_t2

0x2def,	// (0x0000f629) cale_month_day_heading_pane_t3

0x2e54,	// (0x0000f68e) cale_month_day_heading_pane_t4

0x2eb9,	// (0x0000f6f3) cale_month_day_heading_pane_t5

0x2f1e,	// (0x0000f758) cale_month_day_heading_pane_t6

0x2f83,	// (0x0000f7bd) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0001bb47) cale_month_day_heading_pane_t

0xa248,	// (0x00016a82) bg_cale_side_pane_cp01

0x2fe8,	// (0x0000f822) cale_month_week_pane_t1

0x2fff,	// (0x0000f839) cale_month_week_pane_t2

0x3016,	// (0x0000f850) cale_month_week_pane_t3

0x302d,	// (0x0000f867) cale_month_week_pane_t4

0x3044,	// (0x0000f87e) cale_month_week_pane_t5

0x305b,	// (0x0000f895) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0001bb56) cale_month_week_pane_t

0x3072,	// (0x0000f8ac) cell_cale_month_pane_ParamLimits

0x3072,	// (0x0000f8ac) cell_cale_month_pane

0xa719,	// (0x00016f53) cell_cale_month_pane_g1

0x3118,	// (0x0000f952) cell_cale_month_pane_t1_ParamLimits

0x3118,	// (0x0000f952) cell_cale_month_pane_t1

0xa256,	// (0x00016a90) grid_highlight_pane_cp08

0xa115,	// (0x0001694f) main_smil_g1

0x3134,	// (0x0000f96e) smil_status_pane

0xa725,	// (0x00016f5f) smil_text_pane

0xc12d,	// (0x00018967) bg_popup_call3_rect_pane_g8

0xc135,	// (0x0001896f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001be0f) bg_popup_call3_rect_pane_g

0xc3af,	// (0x00018be9) smil_status_volume_pane_g1

0xa72f,	// (0x00016f69) smil_status_pane_t1

0xc3e2,	// (0x00018c1c) volume_smil_pane

0xa746,	// (0x00016f80) list_smil_text_pane

0x3147,	// (0x0000f981) scroll_pane_cp011

0x3152,	// (0x0000f98c) smil_text_list_pane_t1_ParamLimits

0x3152,	// (0x0000f98c) smil_text_list_pane_t1

0xa750,	// (0x00016f8a) aid_volume_smil_ParamLimits

0xa750,	// (0x00016f8a) aid_volume_smil

0xa115,	// (0x0001694f) smil_volume_pane_g1

0xa115,	// (0x0001694f) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0001bb76) smil_volume_pane_g

0xa09c,	// (0x000168d6) listscroll_cale_day_pane

0xa772,	// (0x00016fac) bg_cale_pane

0xa78a,	// (0x00016fc4) list_cale_pane

0xa79b,	// (0x00016fd5) scroll_pane_cp09

0xa7ac,	// (0x00016fe6) cale_bg_pane_g1

0xa7b4,	// (0x00016fee) cale_bg_pane_g2

0xa7bc,	// (0x00016ff6) cale_bg_pane_g3

0xa7c4,	// (0x00016ffe) cale_bg_pane_g4

0xa7cc,	// (0x00017006) cale_bg_pane_g5

0xa7d4,	// (0x0001700e) cale_bg_pane_g6

0xa7dc,	// (0x00017016) cale_bg_pane_g7

0xa7e4,	// (0x0001701e) cale_bg_pane_g8

0xa7ec,	// (0x00017026) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0001bb7b) cale_bg_pane_g

0x227e,	// (0x0000eab8) list_cale_time_pane_ParamLimits

0x227e,	// (0x0000eab8) list_cale_time_pane

0xa7f4,	// (0x0001702e) list_cale_time_pane_g1_ParamLimits

0xa7f4,	// (0x0001702e) list_cale_time_pane_g1

0xa800,	// (0x0001703a) list_cale_time_pane_g2_ParamLimits

0xa800,	// (0x0001703a) list_cale_time_pane_g2

0x3198,	// (0x0000f9d2) list_cale_time_pane_g3_ParamLimits

0x3198,	// (0x0000f9d2) list_cale_time_pane_g3

0x31a6,	// (0x0000f9e0) list_cale_time_pane_g4_ParamLimits

0x31a6,	// (0x0000f9e0) list_cale_time_pane_g4

0x31b4,	// (0x0000f9ee) list_cale_time_pane_g5_ParamLimits

0x31b4,	// (0x0000f9ee) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0001bb8e) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0001bb8e) list_cale_time_pane_g

0xa81a,	// (0x00017054) list_cale_time_pane_t1_ParamLimits

0xa81a,	// (0x00017054) list_cale_time_pane_t1

0xa842,	// (0x0001707c) list_cale_time_pane_t2_ParamLimits

0xa842,	// (0x0001707c) list_cale_time_pane_t2

0x34b0,	// (0x0000fcea) aid_blid_cardinal_pane

0x34ee,	// (0x0000fd28) compass_pane_t4

0xa86a,	// (0x000170a4) list_cale_time_pane_t4_ParamLimits

0xa86a,	// (0x000170a4) list_cale_time_pane_t4

0x34fc,	// (0x0000fd36) compass_pane_t5

0x350a,	// (0x0000fd44) compass_pane_t6

0x3518,	// (0x0000fd52) compass_pane_t7

0xad7d,	// (0x000175b7) navi_pane_cc_t1

0xaee4,	// (0x0001771e) aid_phob_thumbnail_center_pane

0x3bdf,	// (0x00010419) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0001bb9b) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0001bb9b) list_cale_time_pane_t

0x999f,	// (0x000161d9) bg_popup_window_pane_cp02_ParamLimits

0x999f,	// (0x000161d9) bg_popup_window_pane_cp02

0xa892,	// (0x000170cc) heading_pane_cp01_ParamLimits

0xa892,	// (0x000170cc) heading_pane_cp01

0xa89e,	// (0x000170d8) loc_req_pane_ParamLimits

0xa89e,	// (0x000170d8) loc_req_pane

0xa8ae,	// (0x000170e8) loc_type_pane_ParamLimits

0xa8ae,	// (0x000170e8) loc_type_pane

0xa8c0,	// (0x000170fa) loc_type_pane_t1_ParamLimits

0xa8c0,	// (0x000170fa) loc_type_pane_t1

0xa8d2,	// (0x0001710c) loc_type_pane_t2_ParamLimits

0xa8d2,	// (0x0001710c) loc_type_pane_t2

0xa8e4,	// (0x0001711e) loc_type_pane_t3_ParamLimits

0xa8e4,	// (0x0001711e) loc_type_pane_t3

0x0002,

0xf368,	// (0x0001bba2) loc_type_pane_t_ParamLimits

0xf368,	// (0x0001bba2) loc_type_pane_t

0xa8f6,	// (0x00017130) list_loc_req_pane

0xa900,	// (0x0001713a) scroll_pane_cp012

0x31c2,	// (0x0000f9fc) list_single_loc_request_popup_menu_pane_ParamLimits

0x31c2,	// (0x0000f9fc) list_single_loc_request_popup_menu_pane

0xa90b,	// (0x00017145) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa90b,	// (0x00017145) list_single_loc_request_popup_menu_pane_g1

0xa917,	// (0x00017151) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa917,	// (0x00017151) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0001bba9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0001bba9) list_single_loc_request_popup_menu_pane_g

0xa923,	// (0x0001715d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa923,	// (0x0001715d) list_single_loc_request_popup_menu_pane_t1

0x9fa3,	// (0x000167dd) bg_popup_window_pane_cp03_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_window_pane_cp03

0xcb16,	// (0x00019350) heading_loc_req_pane_ParamLimits

0xcb16,	// (0x00019350) heading_loc_req_pane

0x31cf,	// (0x0000fa09) popup_dyc_status_message_window_g1_ParamLimits

0x31cf,	// (0x0000fa09) popup_dyc_status_message_window_g1

0x31e3,	// (0x0000fa1d) popup_dyc_status_message_window_t1_ParamLimits

0x31e3,	// (0x0000fa1d) popup_dyc_status_message_window_t1

0x31f8,	// (0x0000fa32) popup_dyc_status_message_window_t2_ParamLimits

0x31f8,	// (0x0000fa32) popup_dyc_status_message_window_t2

0x320d,	// (0x0000fa47) popup_dyc_status_message_window_t3_ParamLimits

0x320d,	// (0x0000fa47) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0001bbae) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0001bbae) popup_dyc_status_message_window_t

0x9d48,	// (0x00016582) bg_heading_pane_cp01

0xa939,	// (0x00017173) heading_loc_req_pane_g1

0xa941,	// (0x0001717b) heading_loc_req_pane_g2

0xa949,	// (0x00017183) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0001bbb5) heading_loc_req_pane_g

0xa951,	// (0x0001718b) heading_loc_req_pane_t1

0xa9d5,	// (0x0001720f) bg_popup_sub_pane_cp01_ParamLimits

0xa9d5,	// (0x0001720f) bg_popup_sub_pane_cp01

0xa9e3,	// (0x0001721d) popup_cale_events_window_g1_ParamLimits

0xa9e3,	// (0x0001721d) popup_cale_events_window_g1

0xaa03,	// (0x0001723d) popup_cale_events_window_g2_ParamLimits

0xaa03,	// (0x0001723d) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0001bbe9) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0001bbe9) popup_cale_events_window_g

0xaa23,	// (0x0001725d) popup_cale_events_window_t1_ParamLimits

0xaa23,	// (0x0001725d) popup_cale_events_window_t1

0xaa35,	// (0x0001726f) popup_cale_events_window_t2_ParamLimits

0xaa35,	// (0x0001726f) popup_cale_events_window_t2

0xaa73,	// (0x000172ad) popup_cale_events_window_t3_ParamLimits

0xaa73,	// (0x000172ad) popup_cale_events_window_t3

0xaaad,	// (0x000172e7) popup_cale_events_window_t4_ParamLimits

0xaaad,	// (0x000172e7) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0001bbee) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0001bbee) popup_cale_events_window_t

0x329b,	// (0x0000fad5) call_type_pane

0x32ab,	// (0x0000fae5) popup_call_status_window_g1

0x32bf,	// (0x0000faf9) popup_call_status_window_g2

0x32d3,	// (0x0000fb0d) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0001bbf7) popup_call_status_window_g

0xaae3,	// (0x0001731d) call_type_pane_g1

0xaaec,	// (0x00017326) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0001bbfe) call_type_pane_g

0x9d48,	// (0x00016582) bg_popup_sub_pane_cp02

0xaaf5,	// (0x0001732f) listscroll_popup_wml_pane

0xaafd,	// (0x00017337) list_wml_pane

0xab07,	// (0x00017341) scroll_pane_cp013

0xab12,	// (0x0001734c) list_single_graphic_popup_wml_pane_ParamLimits

0xab12,	// (0x0001734c) list_single_graphic_popup_wml_pane

0xa115,	// (0x0001694f) list_single_graphic_popup_wml_pane_g1

0xab26,	// (0x00017360) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0001bc03) list_single_graphic_popup_wml_pane_g

0xab2e,	// (0x00017368) list_single_graphic_popup_wml_pane_t1

0xab44,	// (0x0001737e) aid_call_pane

0x9f9b,	// (0x000167d5) popup_clock_analogue_window_g1

0x9f9b,	// (0x000167d5) popup_clock_analogue_window_g2

0xab4c,	// (0x00017386) popup_clock_analogue_window_g3

0xab4c,	// (0x00017386) popup_clock_analogue_window_g4

0xa115,	// (0x0001694f) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0001bc08) popup_clock_analogue_window_g

0xab54,	// (0x0001738e) popup_clock_analogue_window_t1

0xab62,	// (0x0001739c) clock_digital_number_pane_ParamLimits

0xab62,	// (0x0001739c) clock_digital_number_pane

0xab6e,	// (0x000173a8) clock_digital_number_pane_cp02_ParamLimits

0xab6e,	// (0x000173a8) clock_digital_number_pane_cp02

0xab7a,	// (0x000173b4) clock_digital_number_pane_cp03_ParamLimits

0xab7a,	// (0x000173b4) clock_digital_number_pane_cp03

0xab86,	// (0x000173c0) clock_digital_number_pane_cp04_ParamLimits

0xab86,	// (0x000173c0) clock_digital_number_pane_cp04

0xab96,	// (0x000173d0) clock_digital_separator_pane_ParamLimits

0xab96,	// (0x000173d0) clock_digital_separator_pane

0xaba2,	// (0x000173dc) popup_clock_digital_window_t1

0xa115,	// (0x0001694f) clock_digital_number_pane_g1

0xa115,	// (0x0001694f) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0001bb76) clock_digital_number_pane_g

0xa115,	// (0x0001694f) clock_digital_separator_pane_g1

0xa115,	// (0x0001694f) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0001bb76) clock_digital_separator_pane_g

0x9d48,	// (0x00016582) bg_popup_window_pane_cp04

0xabbf,	// (0x000173f9) heading_pane_cp03

0xabc7,	// (0x00017401) listscroll_popup_gms_pane

0xabcf,	// (0x00017409) grid_large_graphic_popup_pane

0xabd9,	// (0x00017413) listscroll_popup_gms_pane_g1

0xabe1,	// (0x0001741b) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0001bc13) listscroll_popup_gms_pane_g

0xa55e,	// (0x00016d98) scroll_pane_cp014

0x32e2,	// (0x0000fb1c) cell_large_graphic_popup_pane_ParamLimits

0x32e2,	// (0x0000fb1c) cell_large_graphic_popup_pane

0x32fa,	// (0x0000fb34) cell_large_graphic_popup_pane_g1_ParamLimits

0x32fa,	// (0x0000fb34) cell_large_graphic_popup_pane_g1

0xabe9,	// (0x00017423) cell_large_graphic_popup_pane_g2_ParamLimits

0xabe9,	// (0x00017423) cell_large_graphic_popup_pane_g2

0xabf5,	// (0x0001742f) cell_large_graphic_popup_pane_g3_ParamLimits

0xabf5,	// (0x0001742f) cell_large_graphic_popup_pane_g3

0xac02,	// (0x0001743c) cell_large_graphic_popup_pane_g4_ParamLimits

0xac02,	// (0x0001743c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0001bc18) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0001bc18) cell_large_graphic_popup_pane_g

0xac12,	// (0x0001744c) grid_highlight_pane_cp010

0xa115,	// (0x0001694f) bg_popup_call_pane_g1

0xac1c,	// (0x00017456) list_single_graphic_popup_conf_pane_ParamLimits

0xac1c,	// (0x00017456) list_single_graphic_popup_conf_pane

0xac2f,	// (0x00017469) list_highlight_pane_cp01

0xac38,	// (0x00017472) list_single_graphic_popup_conf_pane_g1

0xac40,	// (0x0001747a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0001bc21) list_single_graphic_popup_conf_pane_g

0xac48,	// (0x00017482) list_single_graphic_popup_conf_pane_t1

0xac56,	// (0x00017490) linegrid_cams_pane_g1

0x3306,	// (0x0000fb40) linegrid_cams_pane_g2

0xa289,	// (0x00016ac3) linegrid_cams_pane_g3

0xac5f,	// (0x00017499) linegrid_cams_pane_g4

0x330f,	// (0x0000fb49) linegrid_cams_pane_g5

0x3318,	// (0x0000fb52) linegrid_cams_pane_g6

0xa292,	// (0x00016acc) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0001bc26) linegrid_cams_pane_g

0xac68,	// (0x000174a2) popup_clock_analogue_window

0xac68,	// (0x000174a2) popup_clock_digital_window

0x9d48,	// (0x00016582) popup_phob_thumbnail_window

0xa115,	// (0x0001694f) call_video_uplink_pane_g1

0xac71,	// (0x000174ab) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0001bc35) call_video_uplink_pane_g

0xac79,	// (0x000174b3) video_uplink_pane

0xac81,	// (0x000174bb) mce_image_pane_g1

0x3323,	// (0x0000fb5d) mce_image_pane_g2

0x332d,	// (0x0000fb67) mce_image_pane_g3

0x3335,	// (0x0000fb6f) mce_image_pane_g4

0x333d,	// (0x0000fb77) mce_image_pane_g5

0x0004,

0xf400,	// (0x0001bc3a) mce_image_pane_g

0xac8b,	// (0x000174c5) control_top_pane_stacon_cp01_ParamLimits

0xac8b,	// (0x000174c5) control_top_pane_stacon_cp01

0xac9f,	// (0x000174d9) uni_indicator_pane_stacon_cp01_ParamLimits

0xac9f,	// (0x000174d9) uni_indicator_pane_stacon_cp01

0xacb0,	// (0x000174ea) bg_popup_sub_pane_cp03

0x3345,	// (0x0000fb7f) chi_dic_find_pane

0x334d,	// (0x0000fb87) listscroll_chi_dic_pane

0x3356,	// (0x0000fb90) main_pane_chidic_g1

0xacba,	// (0x000174f4) chi_dic_find_pane_t1

0xacc8,	// (0x00017502) find_chidic_pane

0xacd1,	// (0x0001750b) chi_dic_list_pane_ParamLimits

0xacd1,	// (0x0001750b) chi_dic_list_pane

0xace2,	// (0x0001751c) scroll_pane_cp020

0xacea,	// (0x00017524) find_chidic_pane_t1

0x9d48,	// (0x00016582) input_focus_pane_cp06

0x3369,	// (0x0000fba3) list_chi_dic_pane_ParamLimits

0x3369,	// (0x0000fba3) list_chi_dic_pane

0x337b,	// (0x0000fbb5) list_chi_dic_pane_t1_ParamLimits

0x337b,	// (0x0000fbb5) list_chi_dic_pane_t1

0x9d48,	// (0x00016582) list_highlight_pane_cp020

0xacf9,	// (0x00017533) bg_cale_heading_pane_g1

0x338e,	// (0x0000fbc8) bg_cale_heading_pane_g2

0x3396,	// (0x0000fbd0) bg_cale_heading_pane_g3

0x339e,	// (0x0000fbd8) bg_cale_heading_pane_g4

0x33a8,	// (0x0000fbe2) bg_cale_heading_pane_g5

0x33b2,	// (0x0000fbec) bg_cale_heading_pane_g6

0x33ba,	// (0x0000fbf4) bg_cale_heading_pane_g7

0x33c2,	// (0x0000fbfc) bg_cale_heading_pane_g8

0x33cc,	// (0x0000fc06) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0001bc45) bg_cale_heading_pane_g

0xacf9,	// (0x00017533) bg_cale_side_pane_g1

0x33d6,	// (0x0000fc10) bg_cale_side_pane_g2

0x33de,	// (0x0000fc18) bg_cale_side_pane_g3

0x33e6,	// (0x0000fc20) bg_cale_side_pane_g4

0x33ee,	// (0x0000fc28) bg_cale_side_pane_g5

0x33f6,	// (0x0000fc30) bg_cale_side_pane_g6

0x33fe,	// (0x0000fc38) bg_cale_side_pane_g7

0x3406,	// (0x0000fc40) bg_cale_side_pane_g8

0x340e,	// (0x0000fc48) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0001bc58) bg_cale_side_pane_g

0x3416,	// (0x0000fc50) popup_call_status_window_ParamLimits

0x3416,	// (0x0000fc50) popup_call_status_window

0xad01,	// (0x0001753b) stacon_top_pane

0xad09,	// (0x00017543) status_pane_ParamLimits

0xad09,	// (0x00017543) status_pane

0xad1e,	// (0x00017558) status_small_pane

0xad26,	// (0x00017560) control_pane

0x9d48,	// (0x00016582) stacon_bottom_pane

0xad2e,	// (0x00017568) list_single_mce_smart_pane_t1_ParamLimits

0xad2e,	// (0x00017568) list_single_mce_smart_pane_t1

0xad41,	// (0x0001757b) list_single_mce_smart_pane_t2_ParamLimits

0xad41,	// (0x0001757b) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0001bc6b) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0001bc6b) list_single_mce_smart_pane_t

0x345f,	// (0x0000fc99) compass_pane

0x3468,	// (0x0000fca2) main_location2_pane_t1

0x347a,	// (0x0000fcb4) main_location2_pane_t2

0x348c,	// (0x0000fcc6) main_location2_pane_t3

0x0003,

0xf436,	// (0x0001bc70) main_location2_pane_t

0xad60,	// (0x0001759a) compass_pane_g1_ParamLimits

0xad60,	// (0x0001759a) compass_pane_g1

0x34d0,	// (0x0000fd0a) compass_pane_t1

0x34df,	// (0x0000fd19) compass_pane_t2

0x0005,

0xf43f,	// (0x0001bc79) compass_pane_t

0x3526,	// (0x0000fd60) text_secondary_cp61

0xad74,	// (0x000175ae) navi_pane_cams_g5

0xad97,	// (0x000175d1) navi_pane_im_t1

0xada5,	// (0x000175df) navi_pane_mp_g1_ParamLimits

0xada5,	// (0x000175df) navi_pane_mp_g1

0xadb9,	// (0x000175f3) navi_pane_mp_g2_ParamLimits

0xadb9,	// (0x000175f3) navi_pane_mp_g2

0xadc5,	// (0x000175ff) navi_pane_mp_g3_ParamLimits

0xadc5,	// (0x000175ff) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0001bc8d) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0001bc8d) navi_pane_mp_g

0xadd1,	// (0x0001760b) navi_pane_mp_t1

0xaddf,	// (0x00017619) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0001bc94) navi_pane_mp_t

0xae1b,	// (0x00017655) navi_pane_vt_g1

0xadd1,	// (0x0001760b) navi_pane_vt_t1

0xae23,	// (0x0001765d) navi_slider_pane

0xae2b,	// (0x00017665) zooming_pane

0xae33,	// (0x0001766d) navi_slider_pane_g1

0xae3c,	// (0x00017676) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0001bc9b) navi_slider_pane_g

0xae69,	// (0x000176a3) aid_levels_zoom

0xae71,	// (0x000176ab) zooming_pane_g1

0xae79,	// (0x000176b3) zooming_pane_g2

0xae79,	// (0x000176b3) zooming_pane_g3

0x0002,

0xf470,	// (0x0001bcaa) zooming_pane_g

0xae81,	// (0x000176bb) level_10_zoom

0xae8a,	// (0x000176c4) level_11_zoom

0xae93,	// (0x000176cd) level_1_zoom

0xae9c,	// (0x000176d6) level_2_zoom

0xaea5,	// (0x000176df) level_3_zoom

0xaeae,	// (0x000176e8) level_4_zoom

0xaeb7,	// (0x000176f1) level_5_zoom

0xaec0,	// (0x000176fa) level_6_zoom

0xaec9,	// (0x00017703) level_7_zoom

0xaed2,	// (0x0001770c) level_8_zoom

0xaedb,	// (0x00017715) level_9_zoom

0xaeec,	// (0x00017726) popup_phob_thumbnail_window_g1

0xaef4,	// (0x0001772e) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0001bcb1) popup_phob_thumbnail_window_g

0xc28f,	// (0x00018ac9) level_1_location

0xc297,	// (0x00018ad1) level_2_location

0xc29f,	// (0x00018ad9) level_3_location

0xc2a7,	// (0x00018ae1) level_4_location

0xae2b,	// (0x00017665) level_5_location

0x364b,	// (0x0000fe85) mce_icon_pane_g1

0x3653,	// (0x0000fe8d) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0001bcb6) mce_icon_pane_g

0x365b,	// (0x0000fe95) main_mup_pane_g1_ParamLimits

0x365b,	// (0x0000fe95) main_mup_pane_g1

0x3671,	// (0x0000feab) main_mup_pane_g2_ParamLimits

0x3671,	// (0x0000feab) main_mup_pane_g2

0x3689,	// (0x0000fec3) main_mup_pane_g3_ParamLimits

0x3689,	// (0x0000fec3) main_mup_pane_g3

0x36a1,	// (0x0000fedb) main_mup_pane_g4_ParamLimits

0x36a1,	// (0x0000fedb) main_mup_pane_g4

0x36b9,	// (0x0000fef3) main_mup_pane_g5_ParamLimits

0x36b9,	// (0x0000fef3) main_mup_pane_g5

0x36d5,	// (0x0000ff0f) main_mup_pane_g6_ParamLimits

0x36d5,	// (0x0000ff0f) main_mup_pane_g6

0x36ed,	// (0x0000ff27) main_mup_pane_g7_ParamLimits

0x36ed,	// (0x0000ff27) main_mup_pane_g7

0x3705,	// (0x0000ff3f) main_mup_pane_g8_ParamLimits

0x3705,	// (0x0000ff3f) main_mup_pane_g8

0x371f,	// (0x0000ff59) main_mup_pane_g9_ParamLimits

0x371f,	// (0x0000ff59) main_mup_pane_g9

0x3739,	// (0x0000ff73) main_mup_pane_g10_ParamLimits

0x3739,	// (0x0000ff73) main_mup_pane_g10

0x3753,	// (0x0000ff8d) main_mup_pane_g11_ParamLimits

0x3753,	// (0x0000ff8d) main_mup_pane_g11

0x3767,	// (0x0000ffa1) main_mup_pane_g12_ParamLimits

0x3767,	// (0x0000ffa1) main_mup_pane_g12

0x377d,	// (0x0000ffb7) main_mup_pane_g13_ParamLimits

0x377d,	// (0x0000ffb7) main_mup_pane_g13

0x000c,

0xf481,	// (0x0001bcbb) main_mup_pane_g_ParamLimits

0xf481,	// (0x0001bcbb) main_mup_pane_g

0x3791,	// (0x0000ffcb) main_mup_pane_t1_ParamLimits

0x3791,	// (0x0000ffcb) main_mup_pane_t1

0x37ab,	// (0x0000ffe5) main_mup_pane_t2_ParamLimits

0x37ab,	// (0x0000ffe5) main_mup_pane_t2

0x37c3,	// (0x0000fffd) main_mup_pane_t3_ParamLimits

0x37c3,	// (0x0000fffd) main_mup_pane_t3

0x37db,	// (0x00010015) main_mup_pane_t4_ParamLimits

0x37db,	// (0x00010015) main_mup_pane_t4

0x37f9,	// (0x00010033) main_mup_pane_t5_ParamLimits

0x37f9,	// (0x00010033) main_mup_pane_t5

0x380e,	// (0x00010048) main_mup_pane_t6_ParamLimits

0x380e,	// (0x00010048) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0001bcd6) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0001bcd6) main_mup_pane_t

0x3820,	// (0x0001005a) mup_progress_pane_ParamLimits

0x3820,	// (0x0001005a) mup_progress_pane

0x382c,	// (0x00010066) mup_visualizer_pane_ParamLimits

0x382c,	// (0x00010066) mup_visualizer_pane

0x385c,	// (0x00010096) mup_volume_pane_ParamLimits

0x385c,	// (0x00010096) mup_volume_pane

0xaefc,	// (0x00017736) mup_visualizer_pane_g1_ParamLimits

0xaefc,	// (0x00017736) mup_visualizer_pane_g1

0xaefc,	// (0x00017736) mup_visualizer_pane_g2_ParamLimits

0xaefc,	// (0x00017736) mup_visualizer_pane_g2

0xad60,	// (0x0001759a) mup_visualizer_pane_g3_ParamLimits

0xad60,	// (0x0001759a) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0001bce3) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0001bce3) mup_visualizer_pane_g

0xa115,	// (0x0001694f) mup_volume_pane_g1

0xaf12,	// (0x0001774c) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0001bcea) mup_volume_pane_g

0xa115,	// (0x0001694f) mup_progress_pane_g1

0xaf1b,	// (0x00017755) mup_progress_pane_g2

0xaf24,	// (0x0001775e) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0001bcef) mup_progress_pane_g

0x9d48,	// (0x00016582) bg_popup_window_pane_cp05

0xaf2d,	// (0x00017767) heading_pane_cp02_ParamLimits

0xaf2d,	// (0x00017767) heading_pane_cp02

0xaf47,	// (0x00017781) list_popup_blid_pane

0xaf4f,	// (0x00017789) list_blid_sat_info_pane_ParamLimits

0xaf4f,	// (0x00017789) list_blid_sat_info_pane

0xaf62,	// (0x0001779c) list_blid_sat_info_pane_g1

0xaf6a,	// (0x000177a4) list_blid_sat_info_pane_t1

0x3972,	// (0x000101ac) mup_equalizer_pane_ParamLimits

0x3972,	// (0x000101ac) mup_equalizer_pane

0x398b,	// (0x000101c5) mup_equalizer_pane_cp1_ParamLimits

0x398b,	// (0x000101c5) mup_equalizer_pane_cp1

0x39a8,	// (0x000101e2) mup_equalizer_pane_cp2_ParamLimits

0x39a8,	// (0x000101e2) mup_equalizer_pane_cp2

0x39c5,	// (0x000101ff) mup_equalizer_pane_cp3_ParamLimits

0x39c5,	// (0x000101ff) mup_equalizer_pane_cp3

0x39e6,	// (0x00010220) mup_equalizer_pane_cp4_ParamLimits

0x39e6,	// (0x00010220) mup_equalizer_pane_cp4

0x3a07,	// (0x00010241) mup_equalizer_pane_cp5

0x3a1b,	// (0x00010255) mup_equalizer_pane_cp6

0x3a2f,	// (0x00010269) mup_equalizer_pane_cp7

0xc1ad,	// (0x000189e7) bg_popup_call_poc_act_pane_g9

0xc1b5,	// (0x000189ef) bg_popup_call_poc_act_pane_g10

0xc1bd,	// (0x000189f7) bg_popup_call_poc_act_pane_g11

0x000a,

0x9fa3,	// (0x000167dd) mup_scale_pane

0xa115,	// (0x0001694f) mup_scale_pane_g1

0xaf78,	// (0x000177b2) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0001bd0b) mup_scale_pane_g

0xaf9c,	// (0x000177d6) msg_data_pane

0xafa4,	// (0x000177de) scroll_pane_cp017

0x3a55,	// (0x0001028f) bg_list_pane_cp04_ParamLimits

0x3a55,	// (0x0001028f) bg_list_pane_cp04

0xafb4,	// (0x000177ee) msg_data_pane_g1

0x3a6d,	// (0x000102a7) msg_data_pane_g2

0x3a77,	// (0x000102b1) msg_data_pane_g3

0x3a7f,	// (0x000102b9) msg_data_pane_g4

0x3a87,	// (0x000102c1) msg_data_pane_g5

0x3a8f,	// (0x000102c9) msg_data_pane_g6

0x3a97,	// (0x000102d1) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0001bd1a) msg_data_pane_g

0x3a9f,	// (0x000102d9) msg_text_pane_ParamLimits

0x3a9f,	// (0x000102d9) msg_text_pane

0x3ac3,	// (0x000102fd) qrid_highlight_pane_cp011_ParamLimits

0x3ac3,	// (0x000102fd) qrid_highlight_pane_cp011

0x9d48,	// (0x00016582) msg_body_pane

0x9d48,	// (0x00016582) msg_header_pane

0xafc5,	// (0x000177ff) input_focus_pane_cp07

0x3ae7,	// (0x00010321) msg_header_pane_t1_ParamLimits

0x3ae7,	// (0x00010321) msg_header_pane_t1

0xafda,	// (0x00017814) msg_header_pane_t2_ParamLimits

0xafda,	// (0x00017814) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0001bd2e) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0001bd2e) msg_header_pane_t

0xafec,	// (0x00017826) msg_body_pane_g1

0xaff4,	// (0x0001782e) msg_body_pane_t1_ParamLimits

0xaff4,	// (0x0001782e) msg_body_pane_t1

0xb025,	// (0x0001785f) msg_body_pane_t2_ParamLimits

0xb025,	// (0x0001785f) msg_body_pane_t2

0xb037,	// (0x00017871) msg_body_pane_t3_ParamLimits

0xb037,	// (0x00017871) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0001bd33) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0001bd33) msg_body_pane_t

0x3b35,	// (0x0001036f) main_viewer_pane_g1_ParamLimits

0x3b35,	// (0x0001036f) main_viewer_pane_g1

0x3b43,	// (0x0001037d) main_viewer_pane_g2_ParamLimits

0x3b43,	// (0x0001037d) main_viewer_pane_g2

0x3b51,	// (0x0001038b) main_viewer_pane_g3_ParamLimits

0x3b51,	// (0x0001038b) main_viewer_pane_g3

0x3b60,	// (0x0001039a) main_viewer_pane_g4_ParamLimits

0x3b60,	// (0x0001039a) main_viewer_pane_g4

0xb061,	// (0x0001789b) main_viewer_pane_g5_ParamLimits

0xb061,	// (0x0001789b) main_viewer_pane_g5

0xb061,	// (0x0001789b) main_viewer_pane_g7_ParamLimits

0xb061,	// (0x0001789b) main_viewer_pane_g7

0xb073,	// (0x000178ad) main_viewer_pane_g8_ParamLimits

0xb073,	// (0x000178ad) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0001bd43) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0001bd43) main_viewer_pane_g

0xb08b,	// (0x000178c5) viewer_content_pane_ParamLimits

0xb08b,	// (0x000178c5) viewer_content_pane

0x3b9c,	// (0x000103d6) main_postcard_pane_g1_ParamLimits

0x3b9c,	// (0x000103d6) main_postcard_pane_g1

0x3bb2,	// (0x000103ec) main_postcard_pane_g2_ParamLimits

0x3bb2,	// (0x000103ec) main_postcard_pane_g2

0x3bc8,	// (0x00010402) main_postcard_pane_g3_ParamLimits

0x3bc8,	// (0x00010402) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0001bd54) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0001bd54) main_postcard_pane_g

0x3bdf,	// (0x00010419) main_postcard_pane_g4

0xc3c2,	// (0x00018bfc) smil_status_volume_pane_g2

0x3c22,	// (0x0001045c) postcard_pane_ParamLimits

0x3c22,	// (0x0001045c) postcard_pane

0xb099,	// (0x000178d3) postcard_pane_g1_ParamLimits

0xb099,	// (0x000178d3) postcard_pane_g1

0x3c64,	// (0x0001049e) postcard_pane_g2_ParamLimits

0x3c64,	// (0x0001049e) postcard_pane_g2

0x3c70,	// (0x000104aa) postcard_pane_g3_ParamLimits

0x3c70,	// (0x000104aa) postcard_pane_g3

0xb0a7,	// (0x000178e1) postcard_pane_g4_ParamLimits

0xb0a7,	// (0x000178e1) postcard_pane_g4

0x3c7c,	// (0x000104b6) postcard_pane_g5_ParamLimits

0x3c7c,	// (0x000104b6) postcard_pane_g5

0x3c91,	// (0x000104cb) postcard_pane_g6_ParamLimits

0x3c91,	// (0x000104cb) postcard_pane_g6

0xb099,	// (0x000178d3) postcard_pane_g7_ParamLimits

0xb099,	// (0x000178d3) postcard_pane_g7

0x0006,

0xf527,	// (0x0001bd61) postcard_pane_g_ParamLimits

0xf527,	// (0x0001bd61) postcard_pane_g

0x3ca5,	// (0x000104df) main_mp2_pane_g1_ParamLimits

0x3ca5,	// (0x000104df) main_mp2_pane_g1

0x3cb1,	// (0x000104eb) main_mp2_pane_g2_ParamLimits

0x3cb1,	// (0x000104eb) main_mp2_pane_g2

0x3cbd,	// (0x000104f7) main_mp2_pane_g3_ParamLimits

0x3cbd,	// (0x000104f7) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0001bd70) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0001bd70) main_mp2_pane_g

0x3cc9,	// (0x00010503) main_mp2_pane_t1_ParamLimits

0x3cc9,	// (0x00010503) main_mp2_pane_t1

0x3cde,	// (0x00010518) main_mp2_pane_t2_ParamLimits

0x3cde,	// (0x00010518) main_mp2_pane_t2

0x3cf0,	// (0x0001052a) main_mp2_pane_t3_ParamLimits

0x3cf0,	// (0x0001052a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0001bd77) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0001bd77) main_mp2_pane_t

0xb0b5,	// (0x000178ef) pec_content_pane_ParamLimits

0xb0b5,	// (0x000178ef) pec_content_pane

0xa55e,	// (0x00016d98) scroll_pane_cp015

0xb0c7,	// (0x00017901) pec_attribute_pane_ParamLimits

0xb0c7,	// (0x00017901) pec_attribute_pane

0x3d02,	// (0x0001053c) pec_content_pane_g1_ParamLimits

0x3d02,	// (0x0001053c) pec_content_pane_g1

0xb0d7,	// (0x00017911) pec_content_pane_t1_ParamLimits

0xb0d7,	// (0x00017911) pec_content_pane_t1

0xb0e9,	// (0x00017923) pec_content_pane_t2_ParamLimits

0xb0e9,	// (0x00017923) pec_content_pane_t2

0x0001,

0xf544,	// (0x0001bd7e) pec_content_pane_t_ParamLimits

0xf544,	// (0x0001bd7e) pec_content_pane_t

0x3d0e,	// (0x00010548) list_single_graphic_pane_cp01_ParamLimits

0x3d0e,	// (0x00010548) list_single_graphic_pane_cp01

0x9fa3,	// (0x000167dd) bg_popup_sub_pane_cp04

0xb0fb,	// (0x00017935) popup_mup_playback_window_g1

0xb107,	// (0x00017941) popup_mup_playback_window_t1

0xb11c,	// (0x00017956) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0001bd83) popup_mup_playback_window_t

0xb153,	// (0x0001798d) main_image_pane_g1_ParamLimits

0xb153,	// (0x0001798d) main_image_pane_g1

0xb196,	// (0x000179d0) scroll_pane_cp018_ParamLimits

0xb196,	// (0x000179d0) scroll_pane_cp018

0xb1ae,	// (0x000179e8) scroll_pane_cp016_ParamLimits

0xb1ae,	// (0x000179e8) scroll_pane_cp016

0x3ddb,	// (0x00010615) smil2_image_pane_ParamLimits

0x3ddb,	// (0x00010615) smil2_image_pane

0x3e0b,	// (0x00010645) smil2_root_pane_ParamLimits

0x3e0b,	// (0x00010645) smil2_root_pane

0x3e43,	// (0x0001067d) smil2_text_pane_ParamLimits

0x3e43,	// (0x0001067d) smil2_text_pane

0x9d48,	// (0x00016582) bg_list_pane_cp06

0xb1ea,	// (0x00017a24) grid_radio_pane

0x9d48,	// (0x00016582) bg_popup_window_pane_cp06

0xb1f2,	// (0x00017a2c) main_fmradio_pane_t1

0xabbf,	// (0x000173f9) heading_pane_cp04

0xb200,	// (0x00017a3a) main_fmradio_pane_t2

0xc1c5,	// (0x000189ff) popup_cale_lunar_info_window_g1

0xb20e,	// (0x00017a48) main_fmradio_pane_t3

0xc1cd,	// (0x00018a07) popup_cale_lunar_info_window_g2

0xb21c,	// (0x00017a56) main_fmradio_pane_t4

0x0001,

0xb22a,	// (0x00017a64) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0001be5e) popup_cale_lunar_info_window_g

0xf55e,	// (0x0001bd98) main_fmradio_pane_t

0xb238,	// (0x00017a72) wait_bar_pane_cp03

0xb240,	// (0x00017a7a) cell_fmradio_pane_ParamLimits

0xb240,	// (0x00017a7a) cell_fmradio_pane

0xb099,	// (0x000178d3) cell_fmradio_pane_g1_ParamLimits

0xb099,	// (0x000178d3) cell_fmradio_pane_g1

0x9d48,	// (0x00016582) grid_highlight_pane_cp011

0xb253,	// (0x00017a8d) poc_content_pane_ParamLimits

0xb253,	// (0x00017a8d) poc_content_pane

0xb265,	// (0x00017a9f) scroll_pane_cp019

0x3ec3,	// (0x000106fd) popup_call_poc_act_window_ParamLimits

0x3ec3,	// (0x000106fd) popup_call_poc_act_window

0x3ee7,	// (0x00010721) popup_call_poc_inact_window_ParamLimits

0x3ee7,	// (0x00010721) popup_call_poc_inact_window

0xf5fb,	// (0x0001be35) bg_popup_call_poc_act_pane_g

0xc13d,	// (0x00018977) bg_popup_call_poc_inact_pane_g1

0xc145,	// (0x0001897f) bg_popup_call_poc_inact_pane_g2

0xb26d,	// (0x00017aa7) popup_call_poc_act_window_g2

0xc14d,	// (0x00018987) bg_popup_call_poc_inact_pane_g3

0xc155,	// (0x0001898f) bg_popup_call_poc_inact_pane_g4

0xc15d,	// (0x00018997) bg_popup_call_poc_inact_pane_g5

0xb275,	// (0x00017aaf) popup_call_poc_act_window_t1_ParamLimits

0xb275,	// (0x00017aaf) popup_call_poc_act_window_t1

0xb29d,	// (0x00017ad7) popup_call_poc_act_window_t2_ParamLimits

0xb29d,	// (0x00017ad7) popup_call_poc_act_window_t2

0xb2c5,	// (0x00017aff) popup_call_poc_act_window_t3_ParamLimits

0xb2c5,	// (0x00017aff) popup_call_poc_act_window_t3

0xb2ed,	// (0x00017b27) popup_call_poc_act_window_t4_ParamLimits

0xb2ed,	// (0x00017b27) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0001bda3) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0001bda3) popup_call_poc_act_window_t

0xc165,	// (0x0001899f) bg_popup_call_poc_inact_pane_g6

0xc16d,	// (0x000189a7) bg_popup_call_poc_inact_pane_g7

0xc175,	// (0x000189af) bg_popup_call_poc_inact_pane_g8

0xb2ff,	// (0x00017b39) popup_call_poc_inact_window_g2

0xc17d,	// (0x000189b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0001be22) bg_popup_call_poc_inact_pane_g

0xb307,	// (0x00017b41) popup_call_poc_inact_window_t1_ParamLimits

0xb307,	// (0x00017b41) popup_call_poc_inact_window_t1

0xb31c,	// (0x00017b56) popup_call_poc_inact_window_t2_ParamLimits

0xb31c,	// (0x00017b56) popup_call_poc_inact_window_t2

0xb331,	// (0x00017b6b) popup_call_poc_inact_window_t3_ParamLimits

0xb331,	// (0x00017b6b) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0001bdac) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0001bdac) popup_call_poc_inact_window_t

0xc335,	// (0x00018b6f) context_pane_ParamLimits

0x471a,	// (0x00010f54) signal_pane_ParamLimits

0xae2b,	// (0x00017665) main_call2_pane

0xc323,	// (0x00018b5d) popup_phob_thumbnail2_window_ParamLimits

0xc323,	// (0x00018b5d) popup_phob_thumbnail2_window

0xb049,	// (0x00017883) aid_hotspot_pointer_arrow_pane

0xb051,	// (0x0001788b) aid_hotspot_pointer_hand_pane

0x4230,	// (0x00010a6a) phob_pre_status_pane_g5

0x22a9,	// (0x0000eae3) cams_zoom_pane_ParamLimits

0x22b8,	// (0x0000eaf2) image_vga_pane_ParamLimits

0x22d2,	// (0x0000eb0c) main_camera_pane_g1_ParamLimits

0x22e4,	// (0x0000eb1e) main_camera_pane_g2_ParamLimits

0x22f4,	// (0x0000eb2e) main_camera_pane_g3_ParamLimits

0x2304,	// (0x0000eb3e) main_camera_pane_g4_ParamLimits

0x2314,	// (0x0000eb4e) main_camera_pane_g5_ParamLimits

0x2324,	// (0x0000eb5e) main_camera_pane_g6_ParamLimits

0x2336,	// (0x0000eb70) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0001baab) main_camera_pane_g_ParamLimits

0x2346,	// (0x0000eb80) main_camera_pane_t1_ParamLimits

0x235c,	// (0x0000eb96) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0001babc) main_camera_pane_t_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_preview_window_pane_cp01_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_preview_window_pane_cp01

0xb346,	// (0x00017b80) popup_phob_thumbnail2_window_g1_ParamLimits

0xb346,	// (0x00017b80) popup_phob_thumbnail2_window_g1

0x9d48,	// (0x00016582) call2_cli_visual_pane

0x3f1b,	// (0x00010755) popup_call2_audio_conf_window_ParamLimits

0x3f1b,	// (0x00010755) popup_call2_audio_conf_window

0x3f3b,	// (0x00010775) popup_call2_audio_first_window_ParamLimits

0x3f3b,	// (0x00010775) popup_call2_audio_first_window

0x3fd1,	// (0x0001080b) popup_call2_audio_in_window_ParamLimits

0x3fd1,	// (0x0001080b) popup_call2_audio_in_window

0x4019,	// (0x00010853) popup_call2_audio_out_window_ParamLimits

0x4019,	// (0x00010853) popup_call2_audio_out_window

0x4083,	// (0x000108bd) popup_call2_audio_second_window_ParamLimits

0x4083,	// (0x000108bd) popup_call2_audio_second_window

0x40e9,	// (0x00010923) popup_call2_audio_wait_window_ParamLimits

0x40e9,	// (0x00010923) popup_call2_audio_wait_window

0x9d48,	// (0x00016582) bg_popup_call2_act_pane_cp03

0x9f85,	// (0x000167bf) list_conf_pane_cp

0xb352,	// (0x00017b8c) popup_call2_audio_conf_window_t1

0xac1c,	// (0x00017456) list_single_graphic_popup_conf2_pane_ParamLimits

0xac1c,	// (0x00017456) list_single_graphic_popup_conf2_pane

0xac2f,	// (0x00017469) list_highlight_pane_cp04

0xb360,	// (0x00017b9a) list_single_graphic_popup_conf2_pane_g1

0xac40,	// (0x0001747a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0001bdb3) list_single_graphic_popup_conf2_pane_g

0xb36a,	// (0x00017ba4) list_single_graphic_popup_conf2_pane_t1

0xb378,	// (0x00017bb2) bg_popup_call2_act_pane_cp01_ParamLimits

0xb378,	// (0x00017bb2) bg_popup_call2_act_pane_cp01

0xb402,	// (0x00017c3c) call_type_pane_cp05_ParamLimits

0xb402,	// (0x00017c3c) call_type_pane_cp05

0xb456,	// (0x00017c90) popup_call2_audio_second_window_g1_ParamLimits

0xb456,	// (0x00017c90) popup_call2_audio_second_window_g1

0xb4aa,	// (0x00017ce4) popup_call2_audio_second_window_g2_ParamLimits

0xb4aa,	// (0x00017ce4) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0001bdb8) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0001bdb8) popup_call2_audio_second_window_g

0xb50f,	// (0x00017d49) popup_call2_audio_second_window_t1_ParamLimits

0xb50f,	// (0x00017d49) popup_call2_audio_second_window_t1

0xb5ca,	// (0x00017e04) popup_call2_audio_second_window_t2_ParamLimits

0xb5ca,	// (0x00017e04) popup_call2_audio_second_window_t2

0xb61d,	// (0x00017e57) popup_call2_audio_second_window_t3_ParamLimits

0xb61d,	// (0x00017e57) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0001bdbf) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0001bdbf) popup_call2_audio_second_window_t

0x9d48,	// (0x00016582) bg_popup_call2_in_pane_cp02

0x9d52,	// (0x0001658c) call_type_pane_cp04

0x9d5a,	// (0x00016594) popup_call2_audio_wait_window_g1

0x9d62,	// (0x0001659c) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0001b998) popup_call2_audio_wait_window_g

0x9d6a,	// (0x000165a4) popup_call2_audio_wait_window_t3

0xb710,	// (0x00017f4a) bg_popup_call2_act_pane_ParamLimits

0xb710,	// (0x00017f4a) bg_popup_call2_act_pane

0xb7d0,	// (0x0001800a) call_type_pane_cp03_ParamLimits

0xb7d0,	// (0x0001800a) call_type_pane_cp03

0xb834,	// (0x0001806e) popup_call2_audio_first_window_g1_ParamLimits

0xb834,	// (0x0001806e) popup_call2_audio_first_window_g1

0xb8a4,	// (0x000180de) popup_call2_audio_first_window_g2_ParamLimits

0xb8a4,	// (0x000180de) popup_call2_audio_first_window_g2

0xaefc,	// (0x00017736) popup_call2_audio_first_window_g3_ParamLimits

0xaefc,	// (0x00017736) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0001bdc8) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0001bdc8) popup_call2_audio_first_window_g

0xb982,	// (0x000181bc) popup_call2_audio_first_window_t1_ParamLimits

0xb982,	// (0x000181bc) popup_call2_audio_first_window_t1

0xba85,	// (0x000182bf) popup_call2_audio_first_window_t4_ParamLimits

0xba85,	// (0x000182bf) popup_call2_audio_first_window_t4

0xbb68,	// (0x000183a2) popup_call2_audio_first_window_t5_ParamLimits

0xbb68,	// (0x000183a2) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0001bdd3) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0001bdd3) popup_call2_audio_first_window_t

0x9f9b,	// (0x000167d5) bg_popup_call2_act_pane_g1

0xc1d5,	// (0x00018a0f) popup_cale_lunar_info_window_t1

0xc1e3,	// (0x00018a1d) popup_cale_lunar_info_window_t2

0xc1f1,	// (0x00018a2b) popup_cale_lunar_info_window_t3

0x9d48,	// (0x00016582) bg_popup_call2_bubble_pane

0xbc69,	// (0x000184a3) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc69,	// (0x000184a3) bg_popup_call2_in_pane_cp01

0x9a24,	// (0x0001625e) call_type_pane_cp02

0xbcb1,	// (0x000184eb) popup_call2_audio_out_window_g1_ParamLimits

0xbcb1,	// (0x000184eb) popup_call2_audio_out_window_g1

0xbcdd,	// (0x00018517) popup_call2_audio_out_window_g2_ParamLimits

0xbcdd,	// (0x00018517) popup_call2_audio_out_window_g2

0xbd05,	// (0x0001853f) popup_call2_audio_out_window_g3_ParamLimits

0xbd05,	// (0x0001853f) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0001bddc) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0001bddc) popup_call2_audio_out_window_g

0xbd40,	// (0x0001857a) popup_call2_audio_out_window_t1_ParamLimits

0xbd40,	// (0x0001857a) popup_call2_audio_out_window_t1

0xbd9f,	// (0x000185d9) popup_call2_audio_out_window_t2_ParamLimits

0xbd9f,	// (0x000185d9) popup_call2_audio_out_window_t2

0xbdf3,	// (0x0001862d) popup_call2_audio_out_window_t3_ParamLimits

0xbdf3,	// (0x0001862d) popup_call2_audio_out_window_t3

0xbe09,	// (0x00018643) popup_call2_audio_out_window_t4_ParamLimits

0xbe09,	// (0x00018643) popup_call2_audio_out_window_t4

0xbe1f,	// (0x00018659) popup_call2_audio_out_window_t5_ParamLimits

0xbe1f,	// (0x00018659) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0001bde5) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0001bde5) popup_call2_audio_out_window_t

0xbe83,	// (0x000186bd) bg_popup_call2_in_pane_ParamLimits

0xbe83,	// (0x000186bd) bg_popup_call2_in_pane

0xbedf,	// (0x00018719) popup_call2_audio_in_window_g1_ParamLimits

0xbedf,	// (0x00018719) popup_call2_audio_in_window_g1

0xbf17,	// (0x00018751) popup_call2_audio_in_window_g2_ParamLimits

0xbf17,	// (0x00018751) popup_call2_audio_in_window_g2

0xbf4f,	// (0x00018789) popup_call2_audio_in_window_g3_ParamLimits

0xbf4f,	// (0x00018789) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0001bdf2) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0001bdf2) popup_call2_audio_in_window_g

0xbfa7,	// (0x000187e1) popup_call2_audio_in_window_t1_ParamLimits

0xbfa7,	// (0x000187e1) popup_call2_audio_in_window_t1

0xc027,	// (0x00018861) popup_call2_audio_in_window_t2_ParamLimits

0xc027,	// (0x00018861) popup_call2_audio_in_window_t2

0xc0a7,	// (0x000188e1) popup_call2_audio_in_window_t3_ParamLimits

0xc0a7,	// (0x000188e1) popup_call2_audio_in_window_t3

0xc0c1,	// (0x000188fb) popup_call2_audio_in_window_t4_ParamLimits

0xc0c1,	// (0x000188fb) popup_call2_audio_in_window_t4

0xc0d3,	// (0x0001890d) popup_call2_audio_in_window_t5_ParamLimits

0xc0d3,	// (0x0001890d) popup_call2_audio_in_window_t5

0xc0e8,	// (0x00018922) popup_call2_audio_in_window_t6_ParamLimits

0xc0e8,	// (0x00018922) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0001bdfb) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0001bdfb) popup_call2_audio_in_window_t

0x9f9b,	// (0x000167d5) bg_popup_call2_in_pane_g1

0xc1ff,	// (0x00018a39) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0001be63) popup_cale_lunar_info_window_t

0x9fa3,	// (0x000167dd) bg_popup_call2_rect_pane_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_call2_rect_pane

0x9d48,	// (0x00016582) call2_cli_visual_graphic_pane

0x9d48,	// (0x00016582) call2_cli_visual_text_pane

0xc3d5,	// (0x00018c0f) smil_status_volume_pane_g3

0x0002,

0xa115,	// (0x0001694f) call2_cli_visual_graphic_pane_g1

0xa115,	// (0x0001694f) call2_cli_visual_graphic_pane_g2

0xa115,	// (0x0001694f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0001be08) call2_cli_visual_graphic_pane_g

0xc0fd,	// (0x00018937) bg_popup_call2_rect_pane_g1

0xa1a1,	// (0x000169db) bg_popup_call2_rect_pane_g2

0xc105,	// (0x0001893f) bg_popup_call2_rect_pane_g3

0xc10d,	// (0x00018947) bg_popup_call2_rect_pane_g4

0xc115,	// (0x0001894f) bg_popup_call2_rect_pane_g5

0xc11d,	// (0x00018957) bg_popup_call2_rect_pane_g6

0xc125,	// (0x0001895f) bg_popup_call2_rect_pane_g7

0xc12d,	// (0x00018967) bg_popup_call2_rect_pane_g8

0xc135,	// (0x0001896f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0001be0f) bg_popup_call2_rect_pane_g

0xc13d,	// (0x00018977) bg_popup_call2_bubble_pane_g1

0xc145,	// (0x0001897f) bg_popup_call2_bubble_pane_g2

0xc14d,	// (0x00018987) bg_popup_call2_bubble_pane_g3

0xc155,	// (0x0001898f) bg_popup_call2_bubble_pane_g4

0xc15d,	// (0x00018997) bg_popup_call2_bubble_pane_g5

0xc165,	// (0x0001899f) bg_popup_call2_bubble_pane_g6

0xc16d,	// (0x000189a7) bg_popup_call2_bubble_pane_g7

0xc175,	// (0x000189af) bg_popup_call2_bubble_pane_g8

0xc17d,	// (0x000189b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0001be22) bg_popup_call2_bubble_pane_g

0x1e52,	// (0x0000e68c) aid_cale_week_size_cell_pane

0x2372,	// (0x0000ebac) aid_cams_cif_uncrop_pane_ParamLimits

0x2372,	// (0x0000ebac) aid_cams_cif_uncrop_pane

0x252b,	// (0x0000ed65) aid_cams_size_cell_ParamLimits

0x252b,	// (0x0000ed65) aid_cams_size_cell

0x253f,	// (0x0000ed79) grid_cams_pane_ParamLimits

0x2559,	// (0x0000ed93) linegrid_cams_pane_ParamLimits

0x2679,	// (0x0000eeb3) call_video_pane_t1

0x268d,	// (0x0000eec7) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0001bb0f) call_video_pane_t

0x2a30,	// (0x0000f26a) aid_cale_month_size_cell_pane_ParamLimits

0x2a30,	// (0x0000f26a) aid_cale_month_size_cell_pane

0xf672,	// (0x0001beac) smil_status_volume_pane_g

0xc3e2,	// (0x00018c1c) volume_smil_pane_ParamLimits

0x98c9,	// (0x00016103) aid_popup2_width_pane

0x1db4,	// (0x0000e5ee) cell_qdial_pane_g4_ParamLimits

0x1db4,	// (0x0000e5ee) cell_qdial_pane_g4

0x34b0,	// (0x0000fcea) aid_blid_cardinal_pane_ParamLimits

0x34bc,	// (0x0000fcf6) aid_blid_destination_pane_ParamLimits

0x34bc,	// (0x0000fcf6) aid_blid_destination_pane

0x9fa3,	// (0x000167dd) bg_popup_call_poc_act_pane_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_call_poc_act_pane

0x9fa3,	// (0x000167dd) bg_popup_call_poc_inact_pane_ParamLimits

0x9fa3,	// (0x000167dd) bg_popup_call_poc_inact_pane

0xc185,	// (0x000189bf) bg_popup_call_poc_act_pane_g1

0xc18d,	// (0x000189c7) bg_popup_call_poc_act_pane_g2

0xc195,	// (0x000189cf) bg_popup_call_poc_act_pane_g3

0xc155,	// (0x0001898f) bg_popup_call_poc_act_pane_g4

0xc15d,	// (0x00018997) bg_popup_call_poc_act_pane_g5

0xc19d,	// (0x000189d7) bg_popup_call_poc_act_pane_g6

0xc16d,	// (0x000189a7) bg_popup_call_poc_act_pane_g7

0xc1a5,	// (0x000189df) bg_popup_call_poc_act_pane_g8

0x9d48,	// (0x00016582) main_usb_pane

0xc2fe,	// (0x00018b38) popup_cale_lunar_info_window

0x28dc,	// (0x0000f116) im_reading_pane_t1_ParamLimits

0xa4b6,	// (0x00016cf0) list_im_pane_ParamLimits

0xa4c7,	// (0x00016d01) scroll_pane_cp07_ParamLimits

0x9d48,	// (0x00016582) grid_highlight_pane_cp012

0x9fa3,	// (0x000167dd) mup_scale_pane_ParamLimits

0xb099,	// (0x000178d3) main_usb_pane_g1_ParamLimits

0xb099,	// (0x000178d3) main_usb_pane_g1

0x4145,	// (0x0001097f) main_usb_pane_g2_ParamLimits

0x4145,	// (0x0001097f) main_usb_pane_g2

0x0001,

0xf612,	// (0x0001be4c) main_usb_pane_g_ParamLimits

0xf612,	// (0x0001be4c) main_usb_pane_g

0x415b,	// (0x00010995) main_usb_pane_t1_ParamLimits

0x415b,	// (0x00010995) main_usb_pane_t1

0x416d,	// (0x000109a7) main_usb_pane_t2_ParamLimits

0x416d,	// (0x000109a7) main_usb_pane_t2

0x417f,	// (0x000109b9) main_usb_pane_t3_ParamLimits

0x417f,	// (0x000109b9) main_usb_pane_t3

0x4191,	// (0x000109cb) main_usb_pane_t4_ParamLimits

0x4191,	// (0x000109cb) main_usb_pane_t4

0x41a3,	// (0x000109dd) main_usb_pane_t5_ParamLimits

0x41a3,	// (0x000109dd) main_usb_pane_t5

0x41b5,	// (0x000109ef) main_usb_pane_t6_ParamLimits

0x41b5,	// (0x000109ef) main_usb_pane_t6

0x0005,

0xf617,	// (0x0001be51) main_usb_pane_t_ParamLimits

0x345f,	// (0x0000fc99) aid_text_placing

0x3468,	// (0x0000fca2) main_location2_pane_t1_ParamLimits

0x347a,	// (0x0000fcb4) main_location2_pane_t2_ParamLimits

0x348c,	// (0x0000fcc6) main_location2_pane_t3_ParamLimits

0x349e,	// (0x0000fcd8) main_location2_pane_t4_ParamLimits

0x349e,	// (0x0000fcd8) main_location2_pane_t4

0xf436,	// (0x0001bc70) main_location2_pane_t_ParamLimits

0x9fdf,	// (0x00016819) find_pinb_pane_g2_ParamLimits

0x9fdf,	// (0x00016819) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0001b9be) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0001b9be) find_pinb_pane_g

0x9feb,	// (0x00016825) find_pinb_pane_t1_ParamLimits

0x9ffd,	// (0x00016837) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0001b9c3) find_pinb_pane_t_ParamLimits

0x9d48,	// (0x00016582) main_call3_pane

0x2d2c,	// (0x0000f566) cale_month_day_heading_pane_t1_ParamLimits

0x2d8a,	// (0x0000f5c4) cale_month_day_heading_pane_t2_ParamLimits

0x2def,	// (0x0000f629) cale_month_day_heading_pane_t3_ParamLimits

0x2e54,	// (0x0000f68e) cale_month_day_heading_pane_t4_ParamLimits

0x2eb9,	// (0x0000f6f3) cale_month_day_heading_pane_t5_ParamLimits

0x2f1e,	// (0x0000f758) cale_month_day_heading_pane_t6_ParamLimits

0x2f83,	// (0x0000f7bd) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0001bb47) cale_month_day_heading_pane_t_ParamLimits

0xa73d,	// (0x00016f77) smil_status_volume_pane

0x3c40,	// (0x0001047a) postcard_address_pane_ParamLimits

0x3c40,	// (0x0001047a) postcard_address_pane

0x3c52,	// (0x0001048c) postcard_message_pane_ParamLimits

0x3c52,	// (0x0001048c) postcard_message_pane

0x4123,	// (0x0001095d) call2_cli_visual_pane_t1_ParamLimits

0x4123,	// (0x0001095d) call2_cli_visual_pane_t1

0x4947,	// (0x00011181) postcard_message_pane_t1_ParamLimits

0x4947,	// (0x00011181) postcard_message_pane_t1

0x4930,	// (0x0001116a) postcard_address_pane_t1_ParamLimits

0x4930,	// (0x0001116a) postcard_address_pane_t1

0x491c,	// (0x00011156) popup_call3_audio_in_window_ParamLimits

0x491c,	// (0x00011156) popup_call3_audio_in_window

0x47a7,	// (0x00010fe1) bg_popup_call3_in_pane_ParamLimits

0x47a7,	// (0x00010fe1) bg_popup_call3_in_pane

0x481d,	// (0x00011057) popup_call3_audio_in_window_g1_ParamLimits

0x481d,	// (0x00011057) popup_call3_audio_in_window_g1

0x483d,	// (0x00011077) popup_call3_audio_in_window_g2_ParamLimits

0x483d,	// (0x00011077) popup_call3_audio_in_window_g2

0x485d,	// (0x00011097) popup_call3_audio_in_window_g3_ParamLimits

0x485d,	// (0x00011097) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0001beb3) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0001beb3) popup_call3_audio_in_window_g

0x488e,	// (0x000110c8) popup_call3_audio_in_window_t1_ParamLimits

0x488e,	// (0x000110c8) popup_call3_audio_in_window_t1

0x48cc,	// (0x00011106) popup_call3_audio_in_window_t2_ParamLimits

0x48cc,	// (0x00011106) popup_call3_audio_in_window_t2

0x490a,	// (0x00011144) popup_call3_audio_in_window_t3_ParamLimits

0x490a,	// (0x00011144) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0001bebc) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0001bebc) popup_call3_audio_in_window_t

0xae2b,	// (0x00017665) bg_popup_call3_rect_pane

0xc0fd,	// (0x00018937) bg_popup_call3_rect_pane_g1

0xa1a1,	// (0x000169db) bg_popup_call3_rect_pane_g2

0xc105,	// (0x0001893f) bg_popup_call3_rect_pane_g3

0xc10d,	// (0x00018947) bg_popup_call3_rect_pane_g4

0xc115,	// (0x0001894f) bg_popup_call3_rect_pane_g5

0xc11d,	// (0x00018957) bg_popup_call3_rect_pane_g6

0xc125,	// (0x0001895f) bg_popup_call3_rect_pane_g7

0x3872,	// (0x000100ac) mup_visualizer_osc_pane

0xaf0a,	// (0x00017744) mup_visualizer_spec_pane

0x47d7,	// (0x00011011) call3_video_qcif_pane_ParamLimits

0x47d7,	// (0x00011011) call3_video_qcif_pane

0x47ea,	// (0x00011024) call3_video_qcif_uncrop_pane_ParamLimits

0x47ea,	// (0x00011024) call3_video_qcif_uncrop_pane

0x47f8,	// (0x00011032) call3_video_subqcif_pane_ParamLimits

0x47f8,	// (0x00011032) call3_video_subqcif_pane

0x480c,	// (0x00011046) call3_video_subqcif_uncrop_pane_ParamLimits

0x480c,	// (0x00011046) call3_video_subqcif_uncrop_pane

0x487d,	// (0x000110b7) popup_call3_audio_in_window_g4_ParamLimits

0x487d,	// (0x000110b7) popup_call3_audio_in_window_g4

0x4796,	// (0x00010fd0) mup_spec_half_pane

0x479f,	// (0x00010fd9) mup_spec_half_pane_cp

0xc395,	// (0x00018bcf) mup_osc_middle_pane

0xc39e,	// (0x00018bd8) mup_visualizer_osc_pane_g1

0x4776,	// (0x00010fb0) mup_spec_bar_pane_ParamLimits

0x4776,	// (0x00010fb0) mup_spec_bar_pane

0xc382,	// (0x00018bbc) mup_spec_bar_pane_g1

0xc38c,	// (0x00018bc6) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001bea7) mup_spec_bar_pane_g

0x1e52,	// (0x0000e68c) aid_cale_week_size_cell_pane_ParamLimits

0x1e65,	// (0x0000e69f) bg_cale_heading_pane_ParamLimits

0xa21d,	// (0x00016a57) bg_cale_pane_cp01_ParamLimits

0x1e79,	// (0x0000e6b3) cale_week_corner_pane_ParamLimits

0x1e8f,	// (0x0000e6c9) cale_week_day_heading_pane_ParamLimits

0x1ea3,	// (0x0000e6dd) cale_week_scroll_pane_g1_ParamLimits

0x1eb4,	// (0x0000e6ee) cale_week_scroll_pane_g2_ParamLimits

0x1ec5,	// (0x0000e6ff) cale_week_scroll_pane_g3_ParamLimits

0x1ed6,	// (0x0000e710) cale_week_scroll_pane_g4_ParamLimits

0x1ee7,	// (0x0000e721) cale_week_scroll_pane_g5_ParamLimits

0x1ef8,	// (0x0000e732) cale_week_scroll_pane_g6_ParamLimits

0x1f09,	// (0x0000e743) cale_week_scroll_pane_g7_ParamLimits

0x1f1a,	// (0x0000e754) cale_week_scroll_pane_g8_ParamLimits

0x1f2b,	// (0x0000e765) cale_week_scroll_pane_g9_ParamLimits

0x1f3c,	// (0x0000e776) cale_week_scroll_pane_g10_ParamLimits

0x1f4d,	// (0x0000e787) cale_week_scroll_pane_g11_ParamLimits

0x1f5e,	// (0x0000e798) cale_week_scroll_pane_g12_ParamLimits

0x1f6f,	// (0x0000e7a9) cale_week_scroll_pane_g13_ParamLimits

0x1f80,	// (0x0000e7ba) cale_week_scroll_pane_g14_ParamLimits

0x1f91,	// (0x0000e7cb) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0001ba4f) cale_week_scroll_pane_g_ParamLimits

0x1fa2,	// (0x0000e7dc) cale_week_time_pane_ParamLimits

0x1fb3,	// (0x0000e7ed) grid_cale_week_pane_ParamLimits

0xa236,	// (0x00016a70) listscroll_cale_week_pane_t1

0x1fc6,	// (0x0000e800) scroll_pane_cp08_ParamLimits

0x2a71,	// (0x0000f2ab) cale_month_corner_pane_ParamLimits

0xa6dd,	// (0x00016f17) cale_month_pane_t1

0x2cf3,	// (0x0000f52d) cale_month_week_pane_ParamLimits

0x32ab,	// (0x0000fae5) popup_call_status_window_g1_ParamLimits

0x32bf,	// (0x0000faf9) popup_call_status_window_g2_ParamLimits

0x32d3,	// (0x0000fb0d) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0001bbf7) popup_call_status_window_g_ParamLimits

0xab3c,	// (0x00017376) aid_call2_pane

0x3ad9,	// (0x00010313) msg_header_pane_g1

0x3c40,	// (0x0001047a) postcard_address2_pane_ParamLimits

0x3c40,	// (0x0001047a) postcard_address2_pane

0x3c52,	// (0x0001048c) postcard_message2_pane_ParamLimits

0x3c52,	// (0x0001048c) postcard_message2_pane

0x4728,	// (0x00010f62) message2_row_pane_ParamLimits

0x4728,	// (0x00010f62) message2_row_pane

0x4744,	// (0x00010f7e) address2_row_pane_ParamLimits

0x4744,	// (0x00010f7e) address2_row_pane

0xc350,	// (0x00018b8a) postcard_message2_row_pane_g1

0xc358,	// (0x00018b92) postcard_message2_row_pane_t1

0xc350,	// (0x00018b8a) address2_row_pane_g1

0xc358,	// (0x00018b92) address2_row_pane_t1

0x226e,	// (0x0000eaa8) aid_size_cell_vorec

0x9d48,	// (0x00016582) main_rss_pane

0x4757,	// (0x00010f91) rss_list_single_pane_ParamLimits

0x4757,	// (0x00010f91) rss_list_single_pane

0xc366,	// (0x00018ba0) rss_list_single_pane_t1

0xc374,	// (0x00018bae) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0001bea2) rss_list_single_pane_t

0x9d48,	// (0x00016582) main_camera2_pane

0x9d48,	// (0x00016582) main_video2_pane

0x49c0,	// (0x000111fa) cams_zoom_pane_cp2_ParamLimits

0x49c0,	// (0x000111fa) cams_zoom_pane_cp2

0x49e0,	// (0x0001121a) image2_vga_pane_ParamLimits

0x49e0,	// (0x0001121a) image2_vga_pane

0x4a31,	// (0x0001126b) main_camera2_pane_g1_ParamLimits

0x4a31,	// (0x0001126b) main_camera2_pane_g1

0x4a51,	// (0x0001128b) main_camera2_pane_g2_ParamLimits

0x4a51,	// (0x0001128b) main_camera2_pane_g2

0x4a71,	// (0x000112ab) main_camera2_pane_g3_ParamLimits

0x4a71,	// (0x000112ab) main_camera2_pane_g3

0x4a91,	// (0x000112cb) main_camera2_pane_g4_ParamLimits

0x4a91,	// (0x000112cb) main_camera2_pane_g4

0x4ab1,	// (0x000112eb) main_camera2_pane_g5_ParamLimits

0x4ab1,	// (0x000112eb) main_camera2_pane_g5

0x4ad1,	// (0x0001130b) main_camera2_pane_g6_ParamLimits

0x4ad1,	// (0x0001130b) main_camera2_pane_g6

0x4af1,	// (0x0001132b) main_camera2_pane_g7_ParamLimits

0x4af1,	// (0x0001132b) main_camera2_pane_g7

0x4b11,	// (0x0001134b) main_camera2_pane_g8_ParamLimits

0x4b11,	// (0x0001134b) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0001bec3) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0001bec3) main_camera2_pane_g

0x4b51,	// (0x0001138b) main_camera2_pane_t1_ParamLimits

0x4b51,	// (0x0001138b) main_camera2_pane_t1

0x4b86,	// (0x000113c0) main_camera2_pane_t2_ParamLimits

0x4b86,	// (0x000113c0) main_camera2_pane_t2

0x4bac,	// (0x000113e6) main_camera2_pane_t3_ParamLimits

0x4bac,	// (0x000113e6) main_camera2_pane_t3

0x4c0a,	// (0x00011444) main_camera2_pane_t4_ParamLimits

0x4c0a,	// (0x00011444) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0001bed6) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0001bed6) main_camera2_pane_t

0x4c9c,	// (0x000114d6) cams_zoom_pane_cp4_ParamLimits

0x4c9c,	// (0x000114d6) cams_zoom_pane_cp4

0x4cb2,	// (0x000114ec) image2_cif_pane_ParamLimits

0x4cb2,	// (0x000114ec) image2_cif_pane

0x4cdd,	// (0x00011517) image2_subqcif_pane_ParamLimits

0x4cdd,	// (0x00011517) image2_subqcif_pane

0x4cf7,	// (0x00011531) main_video2_pane_g1_ParamLimits

0x4cf7,	// (0x00011531) main_video2_pane_g1

0x4d11,	// (0x0001154b) main_video2_pane_g2_ParamLimits

0x4d11,	// (0x0001154b) main_video2_pane_g2

0x4d27,	// (0x00011561) main_video2_pane_g3_ParamLimits

0x4d27,	// (0x00011561) main_video2_pane_g3

0x4d3d,	// (0x00011577) main_video2_pane_g4_ParamLimits

0x4d3d,	// (0x00011577) main_video2_pane_g4

0x4d53,	// (0x0001158d) main_video2_pane_g5_ParamLimits

0x4d53,	// (0x0001158d) main_video2_pane_g5

0x4d69,	// (0x000115a3) main_video2_pane_g6_ParamLimits

0x4d69,	// (0x000115a3) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0001bee5) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0001bee5) main_video2_pane_g

0x4d83,	// (0x000115bd) main_video2_pane_t1_ParamLimits

0x4d83,	// (0x000115bd) main_video2_pane_t1

0x4da7,	// (0x000115e1) main_video2_pane_t2_ParamLimits

0x4da7,	// (0x000115e1) main_video2_pane_t2

0x4df5,	// (0x0001162f) main_video2_pane_t3_ParamLimits

0x4df5,	// (0x0001162f) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0001bef2) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0001bef2) main_video2_pane_t

0x4270,	// (0x00010aaa) call_muted_g2

0x0001,

0xf65a,	// (0x0001be94) call_muted_g

0x9d48,	// (0x00016582) main_mup2_pane

0x4e39,	// (0x00011673) main_mup2_pane_g1_ParamLimits

0x4e39,	// (0x00011673) main_mup2_pane_g1

0x4e45,	// (0x0001167f) main_mup2_pane_g2_ParamLimits

0x4e45,	// (0x0001167f) main_mup2_pane_g2

0xc506,	// (0x00018d40) main_mup_pane_g13_cp1

0xc50e,	// (0x00018d48) mup_volume_pane_cp1

0x4e61,	// (0x0001169b) main_mup2_pane_g4_ParamLimits

0x4e61,	// (0x0001169b) main_mup2_pane_g4

0x4e73,	// (0x000116ad) main_mup2_pane_g5_ParamLimits

0x4e73,	// (0x000116ad) main_mup2_pane_g5

0x4e85,	// (0x000116bf) main_mup2_pane_g6_ParamLimits

0x4e85,	// (0x000116bf) main_mup2_pane_g6

0x4e97,	// (0x000116d1) main_mup2_pane_g7_ParamLimits

0x4e97,	// (0x000116d1) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0001bef9) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0001bef9) main_mup2_pane_g

0x4eaf,	// (0x000116e9) main_mup2_pane_t1_ParamLimits

0x4eaf,	// (0x000116e9) main_mup2_pane_t1

0x4ec5,	// (0x000116ff) main_mup2_pane_t2_ParamLimits

0x4ec5,	// (0x000116ff) main_mup2_pane_t2

0x4edb,	// (0x00011715) main_mup2_pane_t3_ParamLimits

0x4edb,	// (0x00011715) main_mup2_pane_t3

0x4ef1,	// (0x0001172b) main_mup2_pane_t4_ParamLimits

0x4ef1,	// (0x0001172b) main_mup2_pane_t4

0x4f09,	// (0x00011743) main_mup2_pane_t5_ParamLimits

0x4f09,	// (0x00011743) main_mup2_pane_t5

0x4f21,	// (0x0001175b) main_mup2_pane_t6_ParamLimits

0x4f21,	// (0x0001175b) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0001bf08) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0001bf08) main_mup2_pane_t

0x4f51,	// (0x0001178b) mup2_visualizer_pane_ParamLimits

0x4f51,	// (0x0001178b) mup2_visualizer_pane

0x4f7f,	// (0x000117b9) mup_progress_pane_cp_ParamLimits

0x4f7f,	// (0x000117b9) mup_progress_pane_cp

0xc4e8,	// (0x00018d22) mup_volume_pane_cp_ParamLimits

0xc4e8,	// (0x00018d22) mup_volume_pane_cp

0x4f93,	// (0x000117cd) mup2_visualizer_pane_g1_ParamLimits

0x4f93,	// (0x000117cd) mup2_visualizer_pane_g1

0xc427,	// (0x00018c61) mup2_visualizer_pane_g2_ParamLimits

0xc427,	// (0x00018c61) mup2_visualizer_pane_g2

0x4faa,	// (0x000117e4) mup2_visualizer_pane_g3_ParamLimits

0x4faa,	// (0x000117e4) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0001bf15) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0001bf15) mup2_visualizer_pane_g

0xb1e2,	// (0x00017a1c) aid_size_cell_fmradio

0x4422,	// (0x00010c5c) aid_height_parent_landcape

0xa545,	// (0x00016d7f) wml_content_pane_cp

0xa54d,	// (0x00016d87) wml_tabs_pane

0xa556,	// (0x00016d90) popup_wml_miniature_window

0xa55e,	// (0x00016d98) scroll_pane_cp021

0xa572,	// (0x00016dac) wml_content_pane_comp8

0x9d48,	// (0x00016582) bg_popup_sub_pane_cp05

0xc445,	// (0x00018c7f) popup_wml_miniature_window_g1

0xc44d,	// (0x00018c87) wml_miniature_view_pane

0x4fb6,	// (0x000117f0) aid_size_wml_view

0x4fbe,	// (0x000117f8) wml_miniature_view_pane_g1

0x4fc7,	// (0x00011801) wml_miniature_view_pane_g2

0x4fd0,	// (0x0001180a) wml_miniature_view_pane_g3

0x4fd8,	// (0x00011812) wml_miniature_view_pane_g4

0x4fe0,	// (0x0001181a) wml_miniature_view_pane_g5

0x4fe8,	// (0x00011822) wml_miniature_view_pane_g6

0x4ff0,	// (0x0001182a) wml_miniature_view_pane_g7

0x4ff8,	// (0x00011832) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0001bf1c) wml_miniature_view_pane_g

0xc455,	// (0x00018c8f) background_graphic_ParamLimits

0xc455,	// (0x00018c8f) background_graphic

0xc461,	// (0x00018c9b) wml_tabs_2_pane

0xc46a,	// (0x00018ca4) wml_tabs_3_pane_ParamLimits

0xc46a,	// (0x00018ca4) wml_tabs_3_pane

0xc47c,	// (0x00018cb6) wml_tabs_4_pane_ParamLimits

0xc47c,	// (0x00018cb6) wml_tabs_4_pane

0xc492,	// (0x00018ccc) wml_tabs_5_pane_ParamLimits

0xc492,	// (0x00018ccc) wml_tabs_5_pane

0xc4ac,	// (0x00018ce6) wml_tabs_pane_g2_ParamLimits

0xc4ac,	// (0x00018ce6) wml_tabs_pane_g2

0xc4c0,	// (0x00018cfa) wml_tabs_pane_g3_ParamLimits

0xc4c0,	// (0x00018cfa) wml_tabs_pane_g3

0x5000,	// (0x0001183a) wml_tabs_2_active_pane_ParamLimits

0x5000,	// (0x0001183a) wml_tabs_2_active_pane

0x5014,	// (0x0001184e) wml_tabs_2_passive_pane_ParamLimits

0x5014,	// (0x0001184e) wml_tabs_2_passive_pane

0x5028,	// (0x00011862) wml_tabs_3_active_pane_cp_ParamLimits

0x5028,	// (0x00011862) wml_tabs_3_active_pane_cp

0x503d,	// (0x00011877) wml_tabs_3_passive_pane_ParamLimits

0x503d,	// (0x00011877) wml_tabs_3_passive_pane

0x5050,	// (0x0001188a) wml_tabs_3_passive_pane_cp_ParamLimits

0x5050,	// (0x0001188a) wml_tabs_3_passive_pane_cp

0x5067,	// (0x000118a1) tabs_4_active_pane

0x506f,	// (0x000118a9) tabs_4_passive_pane

0x5079,	// (0x000118b3) tabs_4_passive_pane_cp

0x5081,	// (0x000118bb) tabs_4_passive_pane_cp2

0x413d,	// (0x00010977) aid_height_text

0x3848,	// (0x00010082) mup_volume_cont_pane_ParamLimits

0x3848,	// (0x00010082) mup_volume_cont_pane

0x1a57,	// (0x0000e291) aid_size_cell_pinb

0x1a61,	// (0x0000e29b) aid_size_list_pinb

0x4f6b,	// (0x000117a5) mup2_volume_cont_pane_ParamLimits

0x4f6b,	// (0x000117a5) mup2_volume_cont_pane

0xc4d4,	// (0x00018d0e) mup2_volume_cont_pane_g1_ParamLimits

0xc4d4,	// (0x00018d0e) mup2_volume_cont_pane_g1

0x173b,	// (0x0000df75) aid_size_cell_touch_ParamLimits

0x173b,	// (0x0000df75) aid_size_cell_touch

0x1947,	// (0x0000e181) touch_pane_ParamLimits

0x1947,	// (0x0000e181) touch_pane

0x98b7,	// (0x000160f1) main_rss2_pane

0xc516,	// (0x00018d50) listscroll_rss2_pane

0xc51f,	// (0x00018d59) rss2_navigation_pane

0xc527,	// (0x00018d61) list_rss2_pane

0xace2,	// (0x0001751c) scroll_pane_cp22

0xc52f,	// (0x00018d69) rss2_navigation_pane_g1

0xc538,	// (0x00018d72) rss2_navigation_pane_g2

0xc540,	// (0x00018d7a) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0001bf2d) rss2_navigation_pane_g

0xc548,	// (0x00018d82) rss2_navigation_pane_t1

0x508b,	// (0x000118c5) rss2_list_single_pane_ParamLimits

0x508b,	// (0x000118c5) rss2_list_single_pane

0xc556,	// (0x00018d90) rss2_list_single_pane_t2

0xc564,	// (0x00018d9e) rss2_list_single_pane_t3_ParamLimits

0xc564,	// (0x00018d9e) rss2_list_single_pane_t3

0xc581,	// (0x00018dbb) rss2_list_single_pane_t4

0x313d,	// (0x0000f977) smil_status_pane_g1

0x9927,	// (0x00016161) main_image2_pane_ParamLimits

0x9927,	// (0x00016161) main_image2_pane

0x4b31,	// (0x0001136b) main_camera2_pane_g9_ParamLimits

0x4b31,	// (0x0001136b) main_camera2_pane_g9

0x4c5f,	// (0x00011499) main_camera2_pane_t5_ParamLimits

0x4c5f,	// (0x00011499) main_camera2_pane_t5

0xc3f7,	// (0x00018c31) main_camera2_pane_t6_ParamLimits

0xc3f7,	// (0x00018c31) main_camera2_pane_t6

0x50a0,	// (0x000118da) main_image2_pane_g1_ParamLimits

0x50a0,	// (0x000118da) main_image2_pane_g1

0x3e79,	// (0x000106b3) smil2_video_pane_ParamLimits

0x3e79,	// (0x000106b3) smil2_video_pane

0x98d5,	// (0x0001610f) aid_zoom_text_primary_cp

0x991d,	// (0x00016157) popup_preview_fixed_window

0xa4ae,	// (0x00016ce8) im_reading_pane_g1

0x49a8,	// (0x000111e2) cams2_bc_adjust_pane_cp_ParamLimits

0x49a8,	// (0x000111e2) cams2_bc_adjust_pane_cp

0x4c8e,	// (0x000114c8) cams2_bc_adjust_pane_ParamLimits

0x4c8e,	// (0x000114c8) cams2_bc_adjust_pane

0xc58f,	// (0x00018dc9) cams2_bc_adjust_pane_g1

0xc597,	// (0x00018dd1) cams2_slider_pane

0xc5a0,	// (0x00018dda) cams2_slider_pane_g1

0xc5a9,	// (0x00018de3) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0001bf34) cams2_slider_pane_g

0x1b43,	// (0x0000e37d) calc_display_pane_ParamLimits

0x1b69,	// (0x0000e3a3) calc_paper_pane_ParamLimits

0x1b8a,	// (0x0000e3c4) grid_calc_pane_ParamLimits

0xaba2,	// (0x000173dc) popup_clock_digital_window_t1_ParamLimits

0xb17f,	// (0x000179b9) main_image_pane_t1

0x1b25,	// (0x0000e35f) aid_size_cell_calc_ParamLimits

0x1b25,	// (0x0000e35f) aid_size_cell_calc

0x4468,	// (0x00010ca2) popup_blid_sat_info2_window_ParamLimits

0x4468,	// (0x00010ca2) popup_blid_sat_info2_window

0xc5cb,	// (0x00018e05) aid_size_cell_blid

0xc5d3,	// (0x00018e0d) bg_popup_window_pane_cp07

0xc5f6,	// (0x00018e30) grid_popup_blid_pane

0xc600,	// (0x00018e3a) heading_pane_cp05_ParamLimits

0xc600,	// (0x00018e3a) heading_pane_cp05

0xc6ca,	// (0x00018f04) cell_popup_blid_pane_ParamLimits

0xc6ca,	// (0x00018f04) cell_popup_blid_pane

0xc6ee,	// (0x00018f28) cell_popup_blid_pane_g1

0xc6f6,	// (0x00018f30) cell_popup_blid_pane_t1

0x4f3b,	// (0x00011775) mup2_indicator_pane_ParamLimits

0x4f3b,	// (0x00011775) mup2_indicator_pane

0xae2b,	// (0x00017665) mup2_visualizer_osc_pane

0xc433,	// (0x00018c6d) mup2_visualizer_spec_pane_ParamLimits

0xc433,	// (0x00018c6d) mup2_visualizer_spec_pane

0x50b6,	// (0x000118f0) mup2_spec_half_pane

0x50bf,	// (0x000118f9) mup2_spec_half_pane_cp

0x50c7,	// (0x00011901) mup2_spec_bar_pane_ParamLimits

0x50c7,	// (0x00011901) mup2_spec_bar_pane

0xc382,	// (0x00018bbc) mup2_spec_bar_pane_g1

0xc38c,	// (0x00018bc6) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0001bea7) mup2_spec_bar_pane_g

0x50e7,	// (0x00011921) mup2_osc_middle_pane

0xc39e,	// (0x00018bd8) mup2_visualizer_osc_pane_g1

0x9955,	// (0x0001618f) popup_number_entry_window_t1_ParamLimits

0x9968,	// (0x000161a2) popup_number_entry_window_t2_ParamLimits

0x997a,	// (0x000161b4) popup_number_entry_window_t3_ParamLimits

0x1999,	// (0x0000e1d3) popup_number_entry_window_t5_ParamLimits

0x1999,	// (0x0000e1d3) popup_number_entry_window_t5

0xf12f,	// (0x0001b969) popup_number_entry_window_t_ParamLimits

0x998c,	// (0x000161c6) text_title_cp2_ParamLimits

0xb059,	// (0x00017893) aid_hotspot_pointer_text2_pane

0xb07f,	// (0x000178b9) main_viewer_pane_g9_ParamLimits

0xb07f,	// (0x000178b9) main_viewer_pane_g9

0xa6dd,	// (0x00016f17) cale_month_pane_t1_ParamLimits

0xa772,	// (0x00016fac) bg_cale_pane_ParamLimits

0xa78a,	// (0x00016fc4) list_cale_pane_ParamLimits

0xa236,	// (0x00016a70) listscroll_cale_day_pane_t1

0xa79b,	// (0x00016fd5) scroll_pane_cp09_ParamLimits

0x387a,	// (0x000100b4) main_mup_eq_pane_t1_ParamLimits

0x387a,	// (0x000100b4) main_mup_eq_pane_t1

0x3894,	// (0x000100ce) main_mup_eq_pane_t2_ParamLimits

0x3894,	// (0x000100ce) main_mup_eq_pane_t2

0x38ae,	// (0x000100e8) main_mup_eq_pane_t3_ParamLimits

0x38ae,	// (0x000100e8) main_mup_eq_pane_t3

0x38ca,	// (0x00010104) main_mup_eq_pane_t4_ParamLimits

0x38ca,	// (0x00010104) main_mup_eq_pane_t4

0x38e6,	// (0x00010120) main_mup_eq_pane_t5_ParamLimits

0x38e6,	// (0x00010120) main_mup_eq_pane_t5

0x3902,	// (0x0001013c) main_mup_eq_pane_t6_ParamLimits

0x3902,	// (0x0001013c) main_mup_eq_pane_t6

0x3916,	// (0x00010150) main_mup_eq_pane_t7_ParamLimits

0x3916,	// (0x00010150) main_mup_eq_pane_t7

0x392a,	// (0x00010164) main_mup_eq_pane_t8_ParamLimits

0x392a,	// (0x00010164) main_mup_eq_pane_t8

0x393e,	// (0x00010178) main_mup_eq_pane_t9_ParamLimits

0x393e,	// (0x00010178) main_mup_eq_pane_t9

0x3958,	// (0x00010192) main_mup_eq_pane_t10_ParamLimits

0x3958,	// (0x00010192) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0001bcf6) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0001bcf6) main_mup_eq_pane_t

0x3a07,	// (0x00010241) mup_equalizer_pane_cp5_ParamLimits

0x3a1b,	// (0x00010255) mup_equalizer_pane_cp6_ParamLimits

0x3a2f,	// (0x00010269) mup_equalizer_pane_cp7_ParamLimits

0x98b7,	// (0x000160f1) main_gallery_pane

0xc3a7,	// (0x00018be1) smil2_volume_pane

0xc3af,	// (0x00018be9) smil_status_volume_pane_g1_ParamLimits

0xc3c2,	// (0x00018bfc) smil_status_volume_pane_g2_ParamLimits

0xc3d5,	// (0x00018c0f) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0001beac) smil_status_volume_pane_g_ParamLimits

0xc5d3,	// (0x00018e0d) bg_popup_window_pane_cp07_ParamLimits

0xc5e1,	// (0x00018e1b) blid_firmament_pane

0x50f0,	// (0x0001192a) aid_size_cell_gallery_ParamLimits

0x50f0,	// (0x0001192a) aid_size_cell_gallery

0x5106,	// (0x00011940) grid_gallery_pane_ParamLimits

0x5106,	// (0x00011940) grid_gallery_pane

0x511f,	// (0x00011959) cell_gallery_pane_ParamLimits

0x511f,	// (0x00011959) cell_gallery_pane

0xc704,	// (0x00018f3e) bg_cell_gallery_focus_pane_ParamLimits

0xc704,	// (0x00018f3e) bg_cell_gallery_focus_pane

0xc716,	// (0x00018f50) cell_gallery_pane_g1_ParamLimits

0xc716,	// (0x00018f50) cell_gallery_pane_g1

0x5168,	// (0x000119a2) cell_gallery_pane_g2_ParamLimits

0x5168,	// (0x000119a2) cell_gallery_pane_g2

0x5175,	// (0x000119af) cell_gallery_pane_g3_ParamLimits

0x5175,	// (0x000119af) cell_gallery_pane_g3

0xc722,	// (0x00018f5c) cell_gallery_pane_g4_ParamLimits

0xc722,	// (0x00018f5c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0001bf5a) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0001bf5a) cell_gallery_pane_g

0xc72e,	// (0x00018f68) bg_cell_gallery_focus_pane_g1

0xc736,	// (0x00018f70) bg_cell_gallery_focus_pane_g2

0xc73e,	// (0x00018f78) bg_cell_gallery_focus_pane_g3

0xc746,	// (0x00018f80) bg_cell_gallery_focus_pane_g4

0xc74e,	// (0x00018f88) bg_cell_gallery_focus_pane_g5

0xc756,	// (0x00018f90) bg_cell_gallery_focus_pane_g6

0xc75e,	// (0x00018f98) bg_cell_gallery_focus_pane_g7

0xc766,	// (0x00018fa0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0001bf63) bg_cell_gallery_focus_pane_g

0xc76e,	// (0x00018fa8) aid_firma_cardinal

0xc782,	// (0x00018fbc) blid_firmament_pane_t1

0xc799,	// (0x00018fd3) blid_firmament_pane_t2

0xc7b0,	// (0x00018fea) blid_firmament_pane_t3

0xc7c7,	// (0x00019001) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0001bf74) blid_firmament_pane_t

0xc7de,	// (0x00019018) blid_sat_info_pane

0xc7ee,	// (0x00019028) blid_sat_info_pane_g1

0xc7ee,	// (0x00019028) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0001bf7d) blid_sat_info_pane_g

0xc7f8,	// (0x00019032) blid_sat_info_pane_t1

0xc806,	// (0x00019040) smil2_volume_content_pane

0xc80f,	// (0x00019049) smil2_volume_pane_g1

0xc817,	// (0x00019051) smil2_volume_content_pane_g1

0xc820,	// (0x0001905a) smil2_volume_content_pane_g2

0xc829,	// (0x00019063) smil2_volume_content_pane_g3

0xc832,	// (0x0001906c) smil2_volume_content_pane_g4

0xc83b,	// (0x00019075) smil2_volume_content_pane_g5

0xc844,	// (0x0001907e) smil2_volume_content_pane_g6

0xc84d,	// (0x00019087) smil2_volume_content_pane_g7

0xc856,	// (0x00019090) smil2_volume_content_pane_g8

0xc85f,	// (0x00019099) smil2_volume_content_pane_g9

0xc868,	// (0x000190a2) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0001bf82) smil2_volume_content_pane_g

0x201c,	// (0x0000e856) cale_week_day_heading_pane_t1_ParamLimits

0x2049,	// (0x0000e883) cale_week_day_heading_pane_t2_ParamLimits

0x2076,	// (0x0000e8b0) cale_week_day_heading_pane_t3_ParamLimits

0x20a3,	// (0x0000e8dd) cale_week_day_heading_pane_t4_ParamLimits

0x20d0,	// (0x0000e90a) cale_week_day_heading_pane_t5_ParamLimits

0x20fd,	// (0x0000e937) cale_week_day_heading_pane_t6_ParamLimits

0x212a,	// (0x0000e964) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0001ba6e) cale_week_day_heading_pane_t_ParamLimits

0xa248,	// (0x00016a82) bg_cale_side_pane_ParamLimits

0x2157,	// (0x0000e991) cale_week_time_pane_t1_ParamLimits

0x216f,	// (0x0000e9a9) cale_week_time_pane_t2_ParamLimits

0x2187,	// (0x0000e9c1) cale_week_time_pane_t3_ParamLimits

0x219f,	// (0x0000e9d9) cale_week_time_pane_t4_ParamLimits

0x21b7,	// (0x0000e9f1) cale_week_time_pane_t5_ParamLimits

0x21cf,	// (0x0000ea09) cale_week_time_pane_t6_ParamLimits

0x21e7,	// (0x0000ea21) cale_week_time_pane_t7_ParamLimits

0x21ff,	// (0x0000ea39) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0001ba7d) cale_week_time_pane_t_ParamLimits

0x2217,	// (0x0000ea51) cell_cale_week_pane_g2_ParamLimits

0xa248,	// (0x00016a82) bg_cale_side_pane_cp01_ParamLimits

0x2fe8,	// (0x0000f822) cale_month_week_pane_t1_ParamLimits

0x2fff,	// (0x0000f839) cale_month_week_pane_t2_ParamLimits

0x3016,	// (0x0000f850) cale_month_week_pane_t3_ParamLimits

0x302d,	// (0x0000f867) cale_month_week_pane_t4_ParamLimits

0x3044,	// (0x0000f87e) cale_month_week_pane_t5_ParamLimits

0x305b,	// (0x0000f895) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0001bb56) cale_month_week_pane_t_ParamLimits

0xa719,	// (0x00016f53) cell_cale_month_pane_g1_ParamLimits

0x98b7,	// (0x000160f1) main_cale_event_viewer_pane

0x98b7,	// (0x000160f1) listscroll_cale_event_viewer_pane

0xc871,	// (0x000190ab) list_cale_ev_pane

0xc879,	// (0x000190b3) scroll_pane_cp023

0xc885,	// (0x000190bf) field_cale_ev_pane_ParamLimits

0xc885,	// (0x000190bf) field_cale_ev_pane

0xc8a3,	// (0x000190dd) field_cale_ev_content_pane_ParamLimits

0xc8a3,	// (0x000190dd) field_cale_ev_content_pane

0xc8af,	// (0x000190e9) field_cale_ev_pane_g1_ParamLimits

0xc8af,	// (0x000190e9) field_cale_ev_pane_g1

0xc8bb,	// (0x000190f5) field_cale_ev_pane_g2_ParamLimits

0xc8bb,	// (0x000190f5) field_cale_ev_pane_g2

0xc8d3,	// (0x0001910d) field_cale_ev_pane_g3_ParamLimits

0xc8d3,	// (0x0001910d) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0001bf97) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0001bf97) field_cale_ev_pane_g

0xc8eb,	// (0x00019125) field_cale_ev_pane_t1_ParamLimits

0xc8eb,	// (0x00019125) field_cale_ev_pane_t1

0xc902,	// (0x0001913c) field_cale_ev_content_pane_t1_ParamLimits

0xc902,	// (0x0001913c) field_cale_ev_content_pane_t1

0xafbc,	// (0x000177f6) bg_button_pane_cp01

0xa09c,	// (0x000168d6) listscroll_cale_week_pane_ParamLimits

0x1e48,	// (0x0000e682) popup_toolbar_window_cp01

0xa236,	// (0x00016a70) listscroll_cale_week_pane_t1_ParamLimits

0xa09c,	// (0x000168d6) listscroll_cale_day_pane_ParamLimits

0x318e,	// (0x0000f9c8) popup_toolbar_window_cp02

0xa236,	// (0x00016a70) listscroll_cale_day_pane_t1_ParamLimits

0xa09c,	// (0x000168d6) main_cale_month_pane_ParamLimits

0x469c,	// (0x00010ed6) popup_toolbar_window_cp03_ParamLimits

0x469c,	// (0x00010ed6) popup_toolbar_window_cp03

0x3d41,	// (0x0001057b) main_image_pane_g2_ParamLimits

0x3d41,	// (0x0001057b) main_image_pane_g2

0x3d52,	// (0x0001058c) main_image_pane_g3_ParamLimits

0x3d52,	// (0x0001058c) main_image_pane_g3

0x0002,

0xf54e,	// (0x0001bd88) main_image_pane_g_ParamLimits

0xf54e,	// (0x0001bd88) main_image_pane_g

0xb17f,	// (0x000179b9) main_image_pane_t1_ParamLimits

0x3d63,	// (0x0001059d) main_image_pane_t2_ParamLimits

0x3d63,	// (0x0001059d) main_image_pane_t2

0x3d75,	// (0x000105af) main_image_pane_t3_ParamLimits

0x3d75,	// (0x000105af) main_image_pane_t3

0x3d9d,	// (0x000105d7) main_image_pane_t4_ParamLimits

0x3d9d,	// (0x000105d7) main_image_pane_t4

0x0003,

0xf555,	// (0x0001bd8f) main_image_pane_t_ParamLimits

0xf555,	// (0x0001bd8f) main_image_pane_t

0x3dbd,	// (0x000105f7) popup_image_details_window_cp01

0x3dc7,	// (0x00010601) popup_toobar_trans_pane_cp01_ParamLimits

0x3dc7,	// (0x00010601) popup_toobar_trans_pane_cp01

0x4547,	// (0x00010d81) popup_image_details_window_ParamLimits

0x4547,	// (0x00010d81) popup_image_details_window

0xc308,	// (0x00018b42) popup_image_focus_window

0x4962,	// (0x0001119c) camera2_autofocus_pane_ParamLimits

0x4962,	// (0x0001119c) camera2_autofocus_pane

0x98b7,	// (0x000160f1) bg_popup_sub_pane_cp06

0xc920,	// (0x0001915a) popup_image_focus_window_g1

0xc928,	// (0x00019162) popup_image_focus_window_g2

0xc930,	// (0x0001916a) popup_image_focus_window_g3

0xc938,	// (0x00019172) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0001bf9e) popup_image_focus_window_g

0xc940,	// (0x0001917a) popup_image_focus_window_t1

0xc94e,	// (0x00019188) popup_image_focus_window_t2

0xc95e,	// (0x00019198) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0001bfa7) popup_image_focus_window_t

0xc96c,	// (0x000191a6) camera2_autofocus_pane_g1

0x9927,	// (0x00016161) bg_tb_trans_pane_cp01

0xc97a,	// (0x000191b4) popup_image_details_window_g1

0xc98d,	// (0x000191c7) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0001bfb9) popup_image_details_window_g

0xc9b6,	// (0x000191f0) popup_image_details_window_t1

0xc9c8,	// (0x00019202) popup_image_details_window_t2

0xc9e1,	// (0x0001921b) popup_image_details_window_t3

0xc9f5,	// (0x0001922f) popup_image_details_window_t4

0xca10,	// (0x0001924a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0001bfc0) popup_image_details_window_t

0xa06e,	// (0x000168a8) bg_calc_paper_pane_ParamLimits

0x98b7,	// (0x000160f1) grid_highlight_pane_cp013

0xa082,	// (0x000168bc) list_calc_pane_ParamLimits

0xa094,	// (0x000168ce) scroll_pane_cp024

0xa09c,	// (0x000168d6) bg_calc_display_pane_ParamLimits

0x1c79,	// (0x0000e4b3) calc_display_pane_t1_ParamLimits

0x1c8b,	// (0x0000e4c5) calc_display_pane_t2_ParamLimits

0xa0a8,	// (0x000168e2) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0001b9f0) calc_display_pane_t_ParamLimits

0x1d45,	// (0x0000e57f) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0001ba0d) cell_calc_pane_g

0x1d4e,	// (0x0000e588) cell_calc_pane_t1

0xa11f,	// (0x00016959) grid_highlight_pane_cp02_ParamLimits

0xa135,	// (0x0001696f) toolbar_button_pane_cp01_ParamLimits

0xa135,	// (0x0001696f) toolbar_button_pane_cp01

0xb1c4,	// (0x000179fe) temp_image_control_pane_ParamLimits

0xb1c4,	// (0x000179fe) temp_image_control_pane

0x9927,	// (0x00016161) main_mp3_pane

0xca2a,	// (0x00019264) temp_image_control_pane_g1_ParamLimits

0xca2a,	// (0x00019264) temp_image_control_pane_g1

0xca38,	// (0x00019272) temp_image_control_pane_g2_ParamLimits

0xca38,	// (0x00019272) temp_image_control_pane_g2

0xca4a,	// (0x00019284) temp_image_control_pane_g3_ParamLimits

0xca4a,	// (0x00019284) temp_image_control_pane_g3

0x51b2,	// (0x000119ec) temp_image_control_pane_g4_ParamLimits

0x51b2,	// (0x000119ec) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0001bfcb) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0001bfcb) temp_image_control_pane_g

0xca2a,	// (0x00019264) main_mp3_pane_g1

0x51c5,	// (0x000119ff) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0001bfd4) main_mp3_pane_g

0xca8d,	// (0x000192c7) main_mp3_pane_t1

0xa317,	// (0x00016b51) main_camera_pane_g8_ParamLimits

0xa317,	// (0x00016b51) main_camera_pane_g8

0x24d1,	// (0x0000ed0b) main_video_pane_g7_ParamLimits

0x24d1,	// (0x0000ed0b) main_video_pane_g7

0xc415,	// (0x00018c4f) main_camera2_pane_t7_ParamLimits

0xc415,	// (0x00018c4f) main_camera2_pane_t7

0xa505,	// (0x00016d3f) scroll_pane_cp025_ParamLimits

0xa505,	// (0x00016d3f) scroll_pane_cp025

0xa519,	// (0x00016d53) scroll_pane_cp026_ParamLimits

0xa519,	// (0x00016d53) scroll_pane_cp026

0xa528,	// (0x00016d62) wml_content_pane_ParamLimits

0x98b7,	// (0x000160f1) main_touch_calib_pane

0x528e,	// (0x00011ac8) main_touch_calib_pane_g1

0x529a,	// (0x00011ad4) main_touch_calib_pane_g2

0x52a6,	// (0x00011ae0) main_touch_calib_pane_g3

0x52b2,	// (0x00011aec) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0001bff2) main_touch_calib_pane_g

0x52be,	// (0x00011af8) main_touch_calib_pane_t1

0x52d8,	// (0x00011b12) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0001bffb) main_touch_calib_pane_t

0xad6c,	// (0x000175a6) mup_progress_pane_cp02

0xad8b,	// (0x000175c5) navi_pane_g1

0xaded,	// (0x00017627) navi_pane_mp_t3

0x9927,	// (0x00016161) main_mp3_pane_ParamLimits

0x46da,	// (0x00010f14) navi_pane_ParamLimits

0xca2a,	// (0x00019264) main_mp3_pane_g1_ParamLimits

0x51c5,	// (0x000119ff) main_mp3_pane_g2_ParamLimits

0x51d3,	// (0x00011a0d) main_mp3_pane_g3_ParamLimits

0x51d3,	// (0x00011a0d) main_mp3_pane_g3

0x51e1,	// (0x00011a1b) main_mp3_pane_g4_ParamLimits

0x51e1,	// (0x00011a1b) main_mp3_pane_g4

0xca5a,	// (0x00019294) main_mp3_pane_g5_ParamLimits

0xca5a,	// (0x00019294) main_mp3_pane_g5

0xca68,	// (0x000192a2) main_mp3_pane_g6_ParamLimits

0xca68,	// (0x000192a2) main_mp3_pane_g6

0xca75,	// (0x000192af) main_mp3_pane_g7_ParamLimits

0xca75,	// (0x000192af) main_mp3_pane_g7

0xca81,	// (0x000192bb) main_mp3_pane_g8_ParamLimits

0xca81,	// (0x000192bb) main_mp3_pane_g8

0xf79a,	// (0x0001bfd4) main_mp3_pane_g_ParamLimits

0x51ed,	// (0x00011a27) main_mp3_pane_t2

0x51fb,	// (0x00011a35) main_mp3_pane_t3

0xca9b,	// (0x000192d5) main_mp3_pane_t4

0xcaa9,	// (0x000192e3) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0001bfe5) main_mp3_pane_t

0xcab7,	// (0x000192f1) mup_progress_pane_cp01

0x98d5,	// (0x0001610f) aid_zoom_text_secondary2

0xc871,	// (0x000190ab) list_cale_ev2_pane

0xc879,	// (0x000190b3) scroll_pane_cp023_ParamLimits

0x532e,	// (0x00011b68) field_cale_ev2_pane_ParamLimits

0x532e,	// (0x00011b68) field_cale_ev2_pane

0x534e,	// (0x00011b88) field_cale_ev2_pane_g1_ParamLimits

0x534e,	// (0x00011b88) field_cale_ev2_pane_g1

0x535a,	// (0x00011b94) field_cale_ev2_pane_g2_ParamLimits

0x535a,	// (0x00011b94) field_cale_ev2_pane_g2

0x5372,	// (0x00011bac) field_cale_ev2_pane_g3_ParamLimits

0x5372,	// (0x00011bac) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0001c006) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0001c006) field_cale_ev2_pane_g

0x538a,	// (0x00011bc4) field_cale_ev2_pane_t1_ParamLimits

0x538a,	// (0x00011bc4) field_cale_ev2_pane_t1

0x53a1,	// (0x00011bdb) field_cale_ev2_pane_t2_ParamLimits

0x53a1,	// (0x00011bdb) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0001c00f) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0001c00f) field_cale_ev2_pane_t

0x3bf6,	// (0x00010430) main_postcard_pane_g5_ParamLimits

0x3bf6,	// (0x00010430) main_postcard_pane_g5

0x3c0c,	// (0x00010446) main_postcard_pane_g6_ParamLimits

0x3c0c,	// (0x00010446) main_postcard_pane_g6

0x2291,	// (0x0000eacb) camera2_autofocus_pane_cp_ParamLimits

0x2291,	// (0x0000eacb) camera2_autofocus_pane_cp

0x9927,	// (0x00016161) main_mup3_pane

0x53d6,	// (0x00011c10) main_mup3_pane_g1_ParamLimits

0x53d6,	// (0x00011c10) main_mup3_pane_g1

0x53f8,	// (0x00011c32) main_mup3_pane_g2_ParamLimits

0x53f8,	// (0x00011c32) main_mup3_pane_g2

0x5476,	// (0x00011cb0) main_mup3_pane_g3_ParamLimits

0x5476,	// (0x00011cb0) main_mup3_pane_g3

0x54b8,	// (0x00011cf2) main_mup3_pane_g4_ParamLimits

0x54b8,	// (0x00011cf2) main_mup3_pane_g4

0x54fa,	// (0x00011d34) main_mup3_pane_g5_ParamLimits

0x54fa,	// (0x00011d34) main_mup3_pane_g5

0x553c,	// (0x00011d76) main_mup3_pane_g6_ParamLimits

0x553c,	// (0x00011d76) main_mup3_pane_g6

0xcacb,	// (0x00019305) main_mup3_pane_g7_ParamLimits

0xcacb,	// (0x00019305) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0001c01f) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0001c01f) main_mup3_pane_g

0x55b6,	// (0x00011df0) main_mup3_pane_t1_ParamLimits

0x55b6,	// (0x00011df0) main_mup3_pane_t1

0x5626,	// (0x00011e60) main_mup3_pane_t2_ParamLimits

0x5626,	// (0x00011e60) main_mup3_pane_t2

0x56f6,	// (0x00011f30) main_mup3_pane_t4_ParamLimits

0x56f6,	// (0x00011f30) main_mup3_pane_t4

0x574c,	// (0x00011f86) main_mup3_pane_t5_ParamLimits

0x574c,	// (0x00011f86) main_mup3_pane_t5

0x5800,	// (0x0001203a) main_mup3_pane_t6_ParamLimits

0x5800,	// (0x0001203a) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0001c030) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0001c030) main_mup3_pane_t

0x58b4,	// (0x000120ee) mup3_progress_pane_ParamLimits

0x58b4,	// (0x000120ee) mup3_progress_pane

0x5936,	// (0x00012170) popup_mup3_control_window_ParamLimits

0x5936,	// (0x00012170) popup_mup3_control_window

0xcad9,	// (0x00019313) popup_mup3_text_window

0x5968,	// (0x000121a2) mup3_progress_pane_t1

0x597f,	// (0x000121b9) mup3_progress_pane_t2

0xcae1,	// (0x0001931b) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0001c03d) mup3_progress_pane_t

0xcaf8,	// (0x00019332) mup_progress_pane_cp03

0x98b7,	// (0x000160f1) bg_tb_trans_pane_cp04

0x5996,	// (0x000121d0) mup3_volume_pane

0x599e,	// (0x000121d8) popup_mup3_control_window_g1

0x59a7,	// (0x000121e1) mup3_volume_pane_g1

0x59b0,	// (0x000121ea) mup3_volume_pane_g2

0x59b9,	// (0x000121f3) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0001c044) mup3_volume_pane_g

0x98b7,	// (0x000160f1) bg_tb_trans_pane_cp03

0xcb22,	// (0x0001935c) popup_mup3_text_window_g1

0xcb2a,	// (0x00019364) popup_mup3_text_window_t1

0xa0f6,	// (0x00016930) list_calc_item_pane_g1_ParamLimits

0xc4fd,	// (0x00018d37) mup_volume_pane_cp_g1

0x52f2,	// (0x00011b2c) main_touch_calib_pane_t3

0x5306,	// (0x00011b40) main_touch_calib_pane_t4

0x531a,	// (0x00011b54) main_touch_calib_pane_t5

0x98c1,	// (0x000160fb) aid_cell_size_toolbar2

0x98c9,	// (0x00016103) aid_popup3_width_pane

0x98d5,	// (0x0001610f) aid_zoom_text_msg_primary

0xa2f7,	// (0x00016b31) vorec_t7

0xa0ba,	// (0x000168f4) bg_calc_paper_pane_g1_ParamLimits

0xa0c6,	// (0x00016900) bg_calc_paper_pane_g2_ParamLimits

0xa0d2,	// (0x0001690c) bg_calc_paper_pane_g3_ParamLimits

0xa0de,	// (0x00016918) bg_calc_paper_pane_g4_ParamLimits

0xa0ea,	// (0x00016924) bg_calc_paper_pane_g5_ParamLimits

0x1cd2,	// (0x0000e50c) bg_calc_paper_pane_g6_ParamLimits

0x1ce1,	// (0x0000e51b) bg_calc_paper_pane_g7_ParamLimits

0x1cf0,	// (0x0000e52a) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0001b9f7) bg_calc_paper_pane_g_ParamLimits

0x1d03,	// (0x0000e53d) calc_bg_paper_pane_g9_ParamLimits

0x23df,	// (0x0000ec19) image_qvga_pane_ParamLimits

0x23df,	// (0x0000ec19) image_qvga_pane

0x9fa3,	// (0x000167dd) bg_popup_sub_pane_cp04_ParamLimits

0xb0fb,	// (0x00017935) popup_mup_playback_window_g1_ParamLimits

0xb107,	// (0x00017941) popup_mup_playback_window_t1_ParamLimits

0xb11c,	// (0x00017956) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0001bd83) popup_mup_playback_window_t_ParamLimits

0x4e55,	// (0x0001168f) main_mup2_pane_g3_ParamLimits

0x4e55,	// (0x0001168f) main_mup2_pane_g3

0x26e5,	// (0x0000ef1f) popup_toolbar_window_cp04

0xb4fe,	// (0x00017d38) popup_call2_audio_second_window_g3_ParamLimits

0xb4fe,	// (0x00017d38) popup_call2_audio_second_window_g3

0xb908,	// (0x00018142) popup_call2_audio_first_window_g4_ParamLimits

0xb908,	// (0x00018142) popup_call2_audio_first_window_g4

0xbf87,	// (0x000187c1) popup_call2_audio_in_window_g4_ParamLimits

0xbf87,	// (0x000187c1) popup_call2_audio_in_window_g4

0x3d23,	// (0x0001055d) aid_area_sk_bg_cut_ParamLimits

0x3d23,	// (0x0001055d) aid_area_sk_bg_cut

0xb131,	// (0x0001796b) aid_area_sk_bg_cut_2_ParamLimits

0xb131,	// (0x0001796b) aid_area_sk_bg_cut_2

0x5158,	// (0x00011992) aid_placing_details_win

0x5160,	// (0x0001199a) aid_placing_details_win_2

0xc96c,	// (0x000191a6) camera2_autofocus_pane_g1_ParamLimits

0x18f2,	// (0x0000e12c) popup_fixed_preview_cale_window_ParamLimits

0x18f2,	// (0x0000e12c) popup_fixed_preview_cale_window

0xae45,	// (0x0001767f) navi_slider_pane_g3

0xae4e,	// (0x00017688) navi_slider_pane_g4

0xae57,	// (0x00017691) navi_slider_pane_g5

0xae45,	// (0x0001767f) navi_slider_pane_g6

0xae60,	// (0x0001769a) navi_slider_pane_g7

0xaf81,	// (0x000177bb) mup_scale_pane_g3

0xaf8a,	// (0x000177c4) mup_scale_pane_g4

0xaf93,	// (0x000177cd) mup_scale_pane_g5

0x3a43,	// (0x0001027d) mup_scale_pane_g6

0x3a4c,	// (0x00010286) mup_scale_pane_g7

0xae45,	// (0x0001767f) cams2_slider_pane_g3

0xc5b2,	// (0x00018dec) cams2_slider_pane_g4

0xc5ba,	// (0x00018df4) cams2_slider_pane_g5

0xae45,	// (0x0001767f) cams2_slider_pane_g6

0xc5c2,	// (0x00018dfc) cams2_slider_pane_g7

0xc7ee,	// (0x00019028) camera2_autofocus_pane_cp_g1

0xcb38,	// (0x00019372) bg_popup_preview_window_pane_cp02_ParamLimits

0xcb38,	// (0x00019372) bg_popup_preview_window_pane_cp02

0xcb44,	// (0x0001937e) list_fp_cale_pane_ParamLimits

0xcb44,	// (0x0001937e) list_fp_cale_pane

0xcb50,	// (0x0001938a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb50,	// (0x0001938a) popup_fixed_preview_cale_window_t1

0x59c2,	// (0x000121fc) popup_fixed_preview_cale_window_t2_ParamLimits

0x59c2,	// (0x000121fc) popup_fixed_preview_cale_window_t2

0x59d7,	// (0x00012211) popup_fixed_preview_cale_window_t3_ParamLimits

0x59d7,	// (0x00012211) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0001c04b) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0001c04b) popup_fixed_preview_cale_window_t

0x59ec,	// (0x00012226) list_single_fp_cale_pane_ParamLimits

0x59ec,	// (0x00012226) list_single_fp_cale_pane

0xcb6e,	// (0x000193a8) list_single_fp_cale_pane_g1_ParamLimits

0xcb6e,	// (0x000193a8) list_single_fp_cale_pane_g1

0xcb7a,	// (0x000193b4) list_single_fp_cale_pane_g2_ParamLimits

0xcb7a,	// (0x000193b4) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0001c052) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0001c052) list_single_fp_cale_pane_g

0xcb93,	// (0x000193cd) list_single_fp_cale_pane_t1_ParamLimits

0xcb93,	// (0x000193cd) list_single_fp_cale_pane_t1

0xcba5,	// (0x000193df) list_single_fp_cale_pane_t2_ParamLimits

0xcba5,	// (0x000193df) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0001c059) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0001c059) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x98b7,	// (0x000160f1) main_dialer_pane

0x5a01,	// (0x0001223b) aid_cell_size_keypad

0x5a0b,	// (0x00012245) dialer_ne_pane

0x5a13,	// (0x0001224d) grid_dialer_command_1_pane

0x5a1b,	// (0x00012255) grid_dialer_command_2_pane

0x5a23,	// (0x0001225d) grid_dialer_keypad_pane

0x5a35,	// (0x0001226f) bg_popup_call_pane_cp06_ParamLimits

0x5a35,	// (0x0001226f) bg_popup_call_pane_cp06

0x5a41,	// (0x0001227b) dialer_ne_clear_pane_ParamLimits

0x5a41,	// (0x0001227b) dialer_ne_clear_pane

0xcbd8,	// (0x00019412) dialer_ne_pane_g1

0xcbe0,	// (0x0001941a) dialer_ne_pane_t1_ParamLimits

0xcbe0,	// (0x0001941a) dialer_ne_pane_t1

0x5a4d,	// (0x00012287) dialer_ne_pane_t2_ParamLimits

0x5a4d,	// (0x00012287) dialer_ne_pane_t2

0x5a77,	// (0x000122b1) dialer_ne_pane_t3_ParamLimits

0x5a77,	// (0x000122b1) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0001c05e) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0001c05e) dialer_ne_pane_t

0x5aa7,	// (0x000122e1) dialer_ne_pane_t3_copy1_ParamLimits

0x5aa7,	// (0x000122e1) dialer_ne_pane_t3_copy1

0x5ad6,	// (0x00012310) cell_dialer_keypad_pane_ParamLimits

0x5ad6,	// (0x00012310) cell_dialer_keypad_pane

0x5aed,	// (0x00012327) cell_dialer_command_1_pane_ParamLimits

0x5aed,	// (0x00012327) cell_dialer_command_1_pane

0x5b03,	// (0x0001233d) cell_dialer_command_2_pane_ParamLimits

0x5b03,	// (0x0001233d) cell_dialer_command_2_pane

0xcbf2,	// (0x0001942c) bg_button_pane_cp02_ParamLimits

0xcbf2,	// (0x0001942c) bg_button_pane_cp02

0x5b12,	// (0x0001234c) cell_dialer_keypad_pane_g1_ParamLimits

0x5b12,	// (0x0001234c) cell_dialer_keypad_pane_g1

0xcbf2,	// (0x0001942c) bg_button_pane_cp03_ParamLimits

0xcbf2,	// (0x0001942c) bg_button_pane_cp03

0x5b26,	// (0x00012360) cell_dialer_command_1_pane_g1_ParamLimits

0x5b26,	// (0x00012360) cell_dialer_command_1_pane_g1

0xcbfe,	// (0x00019438) bg_button_pane_cp04

0x5b3a,	// (0x00012374) cell_dialer_command_2_pane_g1

0xae2b,	// (0x00017665) bg_button_pane_cp06

0xcc06,	// (0x00019440) dialer_ne_clear_pane_g1

0x3587,	// (0x0000fdc1) navi_pane_g2

0x35b5,	// (0x0000fdef) navi_pane_g3

0x0002,

0xf44c,	// (0x0001bc86) navi_pane_g

0x35de,	// (0x0000fe18) navi_pane_mv_g2

0x3605,	// (0x0000fe3f) navi_pane_mv_g5

0x360d,	// (0x0000fe47) navi_pane_mv_t1

0xa09c,	// (0x000168d6) main_clock2_pane

0x5b6e,	// (0x000123a8) main_clock2_list_pane_ParamLimits

0x5b6e,	// (0x000123a8) main_clock2_list_pane

0x5ba4,	// (0x000123de) main_clock2_pane_t1_ParamLimits

0x5ba4,	// (0x000123de) main_clock2_pane_t1

0x5be0,	// (0x0001241a) main_clock2_pane_t2_ParamLimits

0x5be0,	// (0x0001241a) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0001c065) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0001c065) main_clock2_pane_t

0x5c6a,	// (0x000124a4) popup_clock_analogue_window_cp03_ParamLimits

0x5c6a,	// (0x000124a4) popup_clock_analogue_window_cp03

0x5c8f,	// (0x000124c9) popup_clock_digital_window_cp02_ParamLimits

0x5c8f,	// (0x000124c9) popup_clock_digital_window_cp02

0x5d00,	// (0x0001253a) main_clock2_list_single_pane_ParamLimits

0x5d00,	// (0x0001253a) main_clock2_list_single_pane

0xae2b,	// (0x00017665) list_highlight_pane_cp05

0xcc0e,	// (0x00019448) main_clock2_list_single_pane_t1

0x26e5,	// (0x0000ef1f) popup_toolbar_window_cp04_ParamLimits

0x5182,	// (0x000119bc) camera2_autofocus_pane_g2_ParamLimits

0x5182,	// (0x000119bc) camera2_autofocus_pane_g2

0x518e,	// (0x000119c8) camera2_autofocus_pane_g3_ParamLimits

0x518e,	// (0x000119c8) camera2_autofocus_pane_g3

0x519a,	// (0x000119d4) camera2_autofocus_pane_g4_ParamLimits

0x519a,	// (0x000119d4) camera2_autofocus_pane_g4

0x51a6,	// (0x000119e0) camera2_autofocus_pane_g5_ParamLimits

0x51a6,	// (0x000119e0) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0001bfae) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0001bfae) camera2_autofocus_pane_g

0x53b6,	// (0x00011bf0) camera2_autofocus_pane_cp_g2

0x53be,	// (0x00011bf8) camera2_autofocus_pane_cp_g3

0x53c6,	// (0x00011c00) camera2_autofocus_pane_cp_g4

0x53ce,	// (0x00011c08) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0001c014) camera2_autofocus_pane_cp_g

0x5a2d,	// (0x00012267) popup_dialer_spcha_window

0x98b7,	// (0x000160f1) bg_popup_sub_pane_cp07

0xcc1c,	// (0x00019456) list_spcha_pane

0xcc24,	// (0x0001945e) list_single_spcha_pane_ParamLimits

0xcc24,	// (0x0001945e) list_single_spcha_pane

0x98b7,	// (0x000160f1) list_highlight_pane_cp06

0xcc35,	// (0x0001946f) list_single_spcha_pane_t1

0xbd31,	// (0x0001856b) popup_call2_audio_out_window_g4_ParamLimits

0xbd31,	// (0x0001856b) popup_call2_audio_out_window_g4

0x98b7,	// (0x000160f1) main_imed2_pane

0xc310,	// (0x00018b4a) popup_imed_adjust2_window

0x455f,	// (0x00010d99) popup_imed_trans_window_ParamLimits

0x455f,	// (0x00010d99) popup_imed_trans_window

0xc62c,	// (0x00018e66) popup_blid_sat_info2_window_t1

0xc63a,	// (0x00018e74) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0001bf43) popup_blid_sat_info2_window_t

0x5daa,	// (0x000125e4) aid_size_cell_colour_35

0x5dca,	// (0x00012604) aid_size_cell_colour_112

0x5dea,	// (0x00012624) aid_size_cell_effect

0xc2e8,	// (0x00018b22) bg_tb_trans_pane_cp02

0xa892,	// (0x000170cc) heading_imed_pane

0x5e0a,	// (0x00012644) listscroll_imed_pane

0xcc43,	// (0x0001947d) heading_imed_pane_g1

0xcc4b,	// (0x00019485) heading_imed_pane_t1

0xcc59,	// (0x00019493) grid_imed_colour_35_pane_ParamLimits

0xcc59,	// (0x00019493) grid_imed_colour_35_pane

0x5e16,	// (0x00012650) grid_imed_effect_pane

0xcc70,	// (0x000194aa) list_imed_aspect_pane

0x5e2c,	// (0x00012666) scroll_pane_cp027_ParamLimits

0x5e2c,	// (0x00012666) scroll_pane_cp027

0x5e3d,	// (0x00012677) cell_imed_effect_pane_ParamLimits

0x5e3d,	// (0x00012677) cell_imed_effect_pane

0xcc78,	// (0x000194b2) cell_imed_colour_pane_ParamLimits

0xcc78,	// (0x000194b2) cell_imed_colour_pane

0xccba,	// (0x000194f4) cell_imed_colour_pane_g1_ParamLimits

0xccba,	// (0x000194f4) cell_imed_colour_pane_g1

0xcccb,	// (0x00019505) hgihlgiht_grid_pane_cp016_ParamLimits

0xcccb,	// (0x00019505) hgihlgiht_grid_pane_cp016

0x5e64,	// (0x0001269e) cell_imed_effect_pane_g1

0x5e6c,	// (0x000126a6) grid_highlight_pane_cp017

0xccdc,	// (0x00019516) list_imed_single_pane_ParamLimits

0xccdc,	// (0x00019516) list_imed_single_pane

0x98b7,	// (0x000160f1) list_highlight_pane_cp07

0xccf1,	// (0x0001952b) list_imed_aspect_pane_comp1_t1

0xc2e8,	// (0x00018b22) bg_tb_trans_pane_cp05

0xcd13,	// (0x0001954d) popup_imed_adjust2_window_g1

0xcd3a,	// (0x00019574) popup_imed_adjust2_window_t1

0xcd52,	// (0x0001958c) slider_imed_adjust_pane

0xcd66,	// (0x000195a0) slider_imed_adjust_pane_g1

0xcd76,	// (0x000195b0) slider_imed_adjust_pane_g2

0xcd86,	// (0x000195c0) slider_imed_adjust_pane_g3

0xcd97,	// (0x000195d1) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0001c082) slider_imed_adjust_pane_g

0x5e75,	// (0x000126af) aid_size_cell_clipart2

0x5e81,	// (0x000126bb) grid_imed_clipart_pane

0xcda8,	// (0x000195e2) scroll_pane_cp031

0x5e8b,	// (0x000126c5) cell_imed_clipart_pane_ParamLimits

0x5e8b,	// (0x000126c5) cell_imed_clipart_pane

0x5ead,	// (0x000126e7) cell_imed_clipart_pane_g1

0x98b7,	// (0x000160f1) grid_highlight_pane_cp014

0x5b83,	// (0x000123bd) main_clock2_pane_g1_ParamLimits

0x5b83,	// (0x000123bd) main_clock2_pane_g1

0x5cab,	// (0x000124e5) aid_call2_pane_cp10

0x5cbd,	// (0x000124f7) aid_call_pane_cp10

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g1

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g2

0x5ccf,	// (0x00012509) popup_clock_analogue_window_cp10_g3

0x5ccf,	// (0x00012509) popup_clock_analogue_window_cp10_g4

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0001c070) popup_clock_analogue_window_cp10_g

0x5ce1,	// (0x0001251b) popup_clock_analogue_window_cp10_t1

0x5d12,	// (0x0001254c) clock_digital_number_pane_cp10_ParamLimits

0x5d12,	// (0x0001254c) clock_digital_number_pane_cp10

0x5d2a,	// (0x00012564) clock_digital_number_pane_cp11_ParamLimits

0x5d2a,	// (0x00012564) clock_digital_number_pane_cp11

0x5d42,	// (0x0001257c) clock_digital_number_pane_cp12_ParamLimits

0x5d42,	// (0x0001257c) clock_digital_number_pane_cp12

0x5d5a,	// (0x00012594) clock_digital_number_pane_cp13_ParamLimits

0x5d5a,	// (0x00012594) clock_digital_number_pane_cp13

0x5d72,	// (0x000125ac) clock_digital_separator_pane_cp10_ParamLimits

0x5d72,	// (0x000125ac) clock_digital_separator_pane_cp10

0x5d8a,	// (0x000125c4) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d8a,	// (0x000125c4) popup_clock_digital_window_cp02_t1

0x9f9b,	// (0x000167d5) clock_digital_number_pane_cp10_g1

0x9f9b,	// (0x000167d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0001c08b) clock_digital_number_pane_cp10_g

0x9f9b,	// (0x000167d5) clock_digital_separator_pane_cp10_g1

0x9f9b,	// (0x000167d5) clock_digital_separator_pane_g2_cp10

0xadfb,	// (0x00017635) navi_pane_vded_g4

0xae04,	// (0x0001763e) navi_pane_vded_g5

0xae0d,	// (0x00017647) navi_pane_vded_t1

0x98b7,	// (0x000160f1) main_vded_pane

0x5eb6,	// (0x000126f0) main_vded_pane_g1

0x5ec0,	// (0x000126fa) main_vded_pane_g2

0x5eca,	// (0x00012704) main_vded_pane_g3

0x0002,

0xf856,	// (0x0001c090) main_vded_pane_g

0x5ed4,	// (0x0001270e) main_vded_pane_t1

0x5ee2,	// (0x0001271c) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0001c097) main_vded_pane_t

0x5ef0,	// (0x0001272a) vded_slider_pane

0x5ef8,	// (0x00012732) vded_video_pane

0xcdb0,	// (0x000195ea) vded_video_pane_g1

0x5f00,	// (0x0001273a) vded_video_pane_g2

0xc7ee,	// (0x00019028) vded_video_pane_g3

0x0002,

0xf862,	// (0x0001c09c) vded_video_pane_g

0xcdba,	// (0x000195f4) vded_slider_pane_g1

0xc4fd,	// (0x00018d37) vded_slider_pane_g2

0xcdc3,	// (0x000195fd) vded_slider_pane_g3

0xcdcc,	// (0x00019606) vded_slider_pane_g4

0xcdd5,	// (0x0001960f) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0001c0a3) vded_slider_pane_g

0x591e,	// (0x00012158) mup3_rocker_pane_ParamLimits

0x591e,	// (0x00012158) mup3_rocker_pane

0x5f09,	// (0x00012743) mup3_control_keys_pane_g1

0x5f11,	// (0x0001274b) mup3_control_keys_pane_g2

0x5f19,	// (0x00012753) mup3_control_keys_pane_g3

0x5f21,	// (0x0001275b) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0001c0ae) mup3_control_keys_pane_g

0x1929,	// (0x0000e163) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1929,	// (0x0000e163) popup_toolbar2_fixed_window_cp01

0x5952,	// (0x0001218c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5952,	// (0x0001218c) popup_toolbar2_fixed_window_cp02

0xb670,	// (0x00017eaa) popup_call2_audio_second_window_t4_ParamLimits

0xb670,	// (0x00017eaa) popup_call2_audio_second_window_t4

0xbb9e,	// (0x000183d8) popup_call2_audio_first_window_t6_ParamLimits

0xbb9e,	// (0x000183d8) popup_call2_audio_first_window_t6

0xbe34,	// (0x0001866e) popup_call2_audio_out_window_t6_ParamLimits

0xbe34,	// (0x0001866e) popup_call2_audio_out_window_t6

0x98b7,	// (0x000160f1) main_vitu_pane

0x5f31,	// (0x0001276b) aid_size_cell_itu_ParamLimits

0x5f31,	// (0x0001276b) aid_size_cell_itu

0x9927,	// (0x00016161) bg_popup_window_pane_cp08_ParamLimits

0x9927,	// (0x00016161) bg_popup_window_pane_cp08

0x5f47,	// (0x00012781) field_vitu_entry_pane_ParamLimits

0x5f47,	// (0x00012781) field_vitu_entry_pane

0x5f5e,	// (0x00012798) grid_vitu_function_pane_ParamLimits

0x5f5e,	// (0x00012798) grid_vitu_function_pane

0x5f79,	// (0x000127b3) grid_vitu_itu_pane_ParamLimits

0x5f79,	// (0x000127b3) grid_vitu_itu_pane

0x5f97,	// (0x000127d1) cell_vitu_itu_pane_ParamLimits

0x5f97,	// (0x000127d1) cell_vitu_itu_pane

0x5fb9,	// (0x000127f3) cell_vitu_function_pane_ParamLimits

0x5fb9,	// (0x000127f3) cell_vitu_function_pane

0x9927,	// (0x00016161) bg_popup_sub_pane_cp08_ParamLimits

0x9927,	// (0x00016161) bg_popup_sub_pane_cp08

0x5fd2,	// (0x0001280c) field_vitu_entry_pane_t1_ParamLimits

0x5fd2,	// (0x0001280c) field_vitu_entry_pane_t1

0xcdf6,	// (0x00019630) field_vitu_entry_pane_t2_ParamLimits

0xcdf6,	// (0x00019630) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0001c0bc) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0001c0bc) field_vitu_entry_pane_t

0xce13,	// (0x0001964d) bg_button_pane_cp05_ParamLimits

0xce13,	// (0x0001964d) bg_button_pane_cp05

0x5ff0,	// (0x0001282a) cell_vitu_itu_pane_g1

0x6008,	// (0x00012842) cell_vitu_itu_pane_t1_ParamLimits

0x6008,	// (0x00012842) cell_vitu_itu_pane_t1

0x601a,	// (0x00012854) cell_vitu_itu_pane_t2_ParamLimits

0x601a,	// (0x00012854) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0001c0c1) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0001c0c1) cell_vitu_itu_pane_t

0xce21,	// (0x0001965b) bg_button_pane_cp07

0x604f,	// (0x00012889) cell_vitu_function_pane_g1

0xa036,	// (0x00016870) main_calc_pane_g1

0x175f,	// (0x0000df99) aid_visual_content_pane

0x98b7,	// (0x000160f1) main_vradio_pane

0x6058,	// (0x00012892) main_vradio_pane_g1_ParamLimits

0x6058,	// (0x00012892) main_vradio_pane_g1

0xce2b,	// (0x00019665) main_vradio_pane_g2_ParamLimits

0xce2b,	// (0x00019665) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0001c0c8) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0001c0c8) main_vradio_pane_g

0x6071,	// (0x000128ab) main_vradio_pane_t1_ParamLimits

0x6071,	// (0x000128ab) main_vradio_pane_t1

0x6086,	// (0x000128c0) main_vradio_pane_t2_ParamLimits

0x6086,	// (0x000128c0) main_vradio_pane_t2

0xce38,	// (0x00019672) main_vradio_pane_t3_ParamLimits

0xce38,	// (0x00019672) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0001c0cd) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0001c0cd) main_vradio_pane_t

0x609b,	// (0x000128d5) vradio_rocker_control_pane_ParamLimits

0x609b,	// (0x000128d5) vradio_rocker_control_pane

0x60ad,	// (0x000128e7) vradio_station_info_pane_ParamLimits

0x60ad,	// (0x000128e7) vradio_station_info_pane

0xce4c,	// (0x00019686) vradio_frequency_info_pane_ParamLimits

0xce4c,	// (0x00019686) vradio_frequency_info_pane

0xc7ee,	// (0x00019028) vradio_station_info_pane_g1

0xce5b,	// (0x00019695) vradio_station_info_pane_t1_ParamLimits

0xce5b,	// (0x00019695) vradio_station_info_pane_t1

0xce7d,	// (0x000196b7) vradio_station_info_pane_t2_ParamLimits

0xce7d,	// (0x000196b7) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0001c0d4) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0001c0d4) vradio_station_info_pane_t

0xce8f,	// (0x000196c9) vradio_tuning_pane

0xce97,	// (0x000196d1) vradio_rocker_control_pane_g1

0xce9f,	// (0x000196d9) vradio_rocker_control_pane_g2

0xcea7,	// (0x000196e1) vradio_rocker_control_pane_g3

0xceaf,	// (0x000196e9) vradio_rocker_control_pane_g4

0xceb7,	// (0x000196f1) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0001c0d9) vradio_rocker_control_pane_g

0x60bf,	// (0x000128f9) vradio_frequency_info_pane_g1

0xcebf,	// (0x000196f9) vradio_frequency_info_pane_t1_ParamLimits

0xcebf,	// (0x000196f9) vradio_frequency_info_pane_t1

0x60c9,	// (0x00012903) vradio_tuning_pane_g1

0x60d4,	// (0x0001290e) vradio_tuning_pane_t1

0x98e5,	// (0x0001611f) area_side_right_pane_ParamLimits

0x98e5,	// (0x0001611f) area_side_right_pane

0xc2af,	// (0x00018ae9) status_small_pane_g1

0xc2b7,	// (0x00018af1) status_small_pane_g2

0xc2c0,	// (0x00018afa) status_small_pane_g3

0xc2c9,	// (0x00018b03) status_small_pane_g4

0x0003,

0xf65f,	// (0x0001be99) status_small_pane_g

0xc2d2,	// (0x00018b0c) status_small_pane_t1

0x98b7,	// (0x000160f1) main_video3_pane

0xced3,	// (0x0001970d) cams_zoom_vslider_pane

0xcedb,	// (0x00019715) image3_wide_pane_ParamLimits

0xcedb,	// (0x00019715) image3_wide_pane

0xcef5,	// (0x0001972f) image3_wide_small_pane

0xcf01,	// (0x0001973b) main_video3_pane_g1_ParamLimits

0xcf01,	// (0x0001973b) main_video3_pane_g1

0xcf1d,	// (0x00019757) main_video3_pane_g2_ParamLimits

0xcf1d,	// (0x00019757) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0001c0e4) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0001c0e4) main_video3_pane_g

0xcf39,	// (0x00019773) main_video3_pane_t1_ParamLimits

0xcf39,	// (0x00019773) main_video3_pane_t1

0xcf64,	// (0x0001979e) main_video3_pane_t2_ParamLimits

0xcf64,	// (0x0001979e) main_video3_pane_t2

0xcf8f,	// (0x000197c9) main_video3_pane_t3_ParamLimits

0xcf8f,	// (0x000197c9) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0001c0e9) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0001c0e9) main_video3_pane_t

0xcfbc,	// (0x000197f6) cams_zoom_vslider_pane_g1

0xcfc5,	// (0x000197ff) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0001c0f0) cams_zoom_vslider_pane_g

0xcfcd,	// (0x00019807) small_slider_vertical_pane

0xc7ee,	// (0x00019028) small_slider_vertical_pane_g1

0xc7ee,	// (0x00019028) small_slider_vertical_pane_g2

0xcfd5,	// (0x0001980f) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0001c0f5) small_slider_vertical_pane_g

0x98b7,	// (0x000160f1) main_hwr_training_pane

0xcfde,	// (0x00019818) hwr_training_instruct_pane_ParamLimits

0xcfde,	// (0x00019818) hwr_training_instruct_pane

0x60e3,	// (0x0001291d) hwr_training_navi_pane_ParamLimits

0x60e3,	// (0x0001291d) hwr_training_navi_pane

0x6102,	// (0x0001293c) hwr_training_write_pane_ParamLimits

0x6102,	// (0x0001293c) hwr_training_write_pane

0x98b7,	// (0x000160f1) bg_frame_shadow_pane

0xd015,	// (0x0001984f) hwr_training_write_pane_g1

0xd01d,	// (0x00019857) hwr_training_write_pane_g2

0xd025,	// (0x0001985f) hwr_training_write_pane_g3

0xd02d,	// (0x00019867) hwr_training_write_pane_g4

0xd035,	// (0x0001986f) hwr_training_write_pane_g5

0xd03d,	// (0x00019877) hwr_training_write_pane_g6

0xd045,	// (0x0001987f) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0001c0fc) hwr_training_write_pane_g

0xd04d,	// (0x00019887) hwr_training_navi_pane_g1_ParamLimits

0xd04d,	// (0x00019887) hwr_training_navi_pane_g1

0xd05f,	// (0x00019899) hwr_training_navi_pane_g2_ParamLimits

0xd05f,	// (0x00019899) hwr_training_navi_pane_g2

0xd071,	// (0x000198ab) hwr_training_navi_pane_g3_ParamLimits

0xd071,	// (0x000198ab) hwr_training_navi_pane_g3

0xd081,	// (0x000198bb) hwr_training_navi_pane_g4_ParamLimits

0xd081,	// (0x000198bb) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0001c10b) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0001c10b) hwr_training_navi_pane_g

0xd08e,	// (0x000198c8) hwr_training_navi_pane_t1

0x614a,	// (0x00012984) list_single_hwr_training_instruct_pane_ParamLimits

0x614a,	// (0x00012984) list_single_hwr_training_instruct_pane

0xd09c,	// (0x000198d6) list_single_hwr_training_instruct_pane_t1

0xc72e,	// (0x00018f68) bg_frame_shadow_pane_g1

0xd0ab,	// (0x000198e5) bg_frame_shadow_pane_g2

0xd0b3,	// (0x000198ed) bg_frame_shadow_pane_g3

0xd0bb,	// (0x000198f5) bg_frame_shadow_pane_g4

0xd0c3,	// (0x000198fd) bg_frame_shadow_pane_g5

0xd0cb,	// (0x00019905) bg_frame_shadow_pane_g6

0xd0d3,	// (0x0001990d) bg_frame_shadow_pane_g7

0xa179,	// (0x000169b3) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0001c116) bg_frame_shadow_pane_g

0x98b7,	// (0x000160f1) main_video_tele_dialer_pane

0x615f,	// (0x00012999) aid_size_cell_video_keypad_ParamLimits

0x615f,	// (0x00012999) aid_size_cell_video_keypad

0x6179,	// (0x000129b3) grid_video_dialer_keypad_pane_ParamLimits

0x6179,	// (0x000129b3) grid_video_dialer_keypad_pane

0x61c5,	// (0x000129ff) video_down_pane_cp_ParamLimits

0x61c5,	// (0x000129ff) video_down_pane_cp

0x61f9,	// (0x00012a33) cell_video_dialer_keypad_pane_ParamLimits

0x61f9,	// (0x00012a33) cell_video_dialer_keypad_pane

0xd0db,	// (0x00019915) bg_button_pane_cp08_ParamLimits

0xd0db,	// (0x00019915) bg_button_pane_cp08

0x621b,	// (0x00012a55) cell_video_dialer_keypad_pane_g1_ParamLimits

0x621b,	// (0x00012a55) cell_video_dialer_keypad_pane_g1

0x5908,	// (0x00012142) mup3_rocker2_pane_ParamLimits

0x5908,	// (0x00012142) mup3_rocker2_pane

0xc7ee,	// (0x00019028) mup3_rocker2_pane_g1

0x4440,	// (0x00010c7a) main_dialer2_pane

0x98b7,	// (0x000160f1) main_mp4_pane

0xd0ef,	// (0x00019929) main_mp4_pane_g1_ParamLimits

0xd0ef,	// (0x00019929) main_mp4_pane_g1

0xd0ef,	// (0x00019929) main_mp4_pane_g2_ParamLimits

0xd0ef,	// (0x00019929) main_mp4_pane_g2

0x6255,	// (0x00012a8f) main_mp4_pane_g3_ParamLimits

0x6255,	// (0x00012a8f) main_mp4_pane_g3

0xd0fd,	// (0x00019937) main_mp4_pane_g4_ParamLimits

0xd0fd,	// (0x00019937) main_mp4_pane_g4

0xd117,	// (0x00019951) main_mp4_pane_g5_ParamLimits

0xd117,	// (0x00019951) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0001c136) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0001c136) main_mp4_pane_g

0xd14b,	// (0x00019985) main_mp4_pane_t1_ParamLimits

0xd14b,	// (0x00019985) main_mp4_pane_t1

0xd1a7,	// (0x000199e1) main_mp4_pane_t2_ParamLimits

0xd1a7,	// (0x000199e1) main_mp4_pane_t2

0xd1f9,	// (0x00019a33) main_mp4_pane_t3_ParamLimits

0xd1f9,	// (0x00019a33) main_mp4_pane_t3

0xd219,	// (0x00019a53) main_mp4_pane_t4_ParamLimits

0xd219,	// (0x00019a53) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0001c143) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0001c143) main_mp4_pane_t

0xd25d,	// (0x00019a97) mp4_progress_pane_ParamLimits

0xd25d,	// (0x00019a97) mp4_progress_pane

0xd2a7,	// (0x00019ae1) mp4_rocker_pane_ParamLimits

0xd2a7,	// (0x00019ae1) mp4_rocker_pane

0xd2cf,	// (0x00019b09) mp4_progress_pane_t1

0xd2e8,	// (0x00019b22) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0001c14c) mp4_progress_pane_t

0xd301,	// (0x00019b3b) mup_progress_pane_cp04

0xc7ee,	// (0x00019028) mp4_rocker_pane_g1

0x6291,	// (0x00012acb) aid_cell_size_keypad2_ParamLimits

0x6291,	// (0x00012acb) aid_cell_size_keypad2

0x62a7,	// (0x00012ae1) dialer2_ne_pane_ParamLimits

0x62a7,	// (0x00012ae1) dialer2_ne_pane

0x62c1,	// (0x00012afb) grid_dialer2_keypad_pane_ParamLimits

0x62c1,	// (0x00012afb) grid_dialer2_keypad_pane

0xc5d3,	// (0x00018e0d) bg_popup_call_pane_cp07_ParamLimits

0xc5d3,	// (0x00018e0d) bg_popup_call_pane_cp07

0x62dd,	// (0x00012b17) dialer2_ne_pane_t1_ParamLimits

0x62dd,	// (0x00012b17) dialer2_ne_pane_t1

0x6318,	// (0x00012b52) cell_dialer2_keypad_pane_ParamLimits

0x6318,	// (0x00012b52) cell_dialer2_keypad_pane

0xd31f,	// (0x00019b59) bg_button_pane_pane_cp04_ParamLimits

0xd31f,	// (0x00019b59) bg_button_pane_pane_cp04

0x633a,	// (0x00012b74) cell_dialer2_keypad_pane_g1_ParamLimits

0x633a,	// (0x00012b74) cell_dialer2_keypad_pane_g1

0x2607,	// (0x0000ee41) aid_placing_vt_set_content_ParamLimits

0x2607,	// (0x0000ee41) aid_placing_vt_set_content

0x262b,	// (0x0000ee65) aid_placing_vt_set_title_ParamLimits

0x262b,	// (0x0000ee65) aid_placing_vt_set_title

0x98b7,	// (0x000160f1) main_image3_pane

0x6400,	// (0x00012c3a) area_side_right_pane_cp01_ParamLimits

0x6400,	// (0x00012c3a) area_side_right_pane_cp01

0xd0ef,	// (0x00019929) main_image3_pane_g1_ParamLimits

0xd0ef,	// (0x00019929) main_image3_pane_g1

0x6417,	// (0x00012c51) main_image3_pane_g2_ParamLimits

0x6417,	// (0x00012c51) main_image3_pane_g2

0x643f,	// (0x00012c79) main_image3_pane_g3_ParamLimits

0x643f,	// (0x00012c79) main_image3_pane_g3

0x6469,	// (0x00012ca3) main_image3_pane_g4_ParamLimits

0x6469,	// (0x00012ca3) main_image3_pane_g4

0x0003,

0xf921,	// (0x0001c15b) main_image3_pane_g_ParamLimits

0xf921,	// (0x0001c15b) main_image3_pane_g

0x6493,	// (0x00012ccd) main_image3_pane_t1_ParamLimits

0x6493,	// (0x00012ccd) main_image3_pane_t1

0x64eb,	// (0x00012d25) main_image3_pane_t2_ParamLimits

0x64eb,	// (0x00012d25) main_image3_pane_t2

0x653d,	// (0x00012d77) main_image3_pane_t3_ParamLimits

0x653d,	// (0x00012d77) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0001c164) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0001c164) main_image3_pane_t

0x9927,	// (0x00016161) grid_sctrl_middle_pane_cp01_ParamLimits

0x9927,	// (0x00016161) grid_sctrl_middle_pane_cp01

0x65c5,	// (0x00012dff) cell_sctrl_middle_pane_cp01_ParamLimits

0x65c5,	// (0x00012dff) cell_sctrl_middle_pane_cp01

0x65e2,	// (0x00012e1c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x65e2,	// (0x00012e1c) cell_sctrl_middle_pane_cp01_g1

0x98b7,	// (0x000160f1) main_call4_pane

0x65f8,	// (0x00012e32) aid_size_button_call4_ParamLimits

0x65f8,	// (0x00012e32) aid_size_button_call4

0x6629,	// (0x00012e63) call4_windows_pane_ParamLimits

0x6629,	// (0x00012e63) call4_windows_pane

0x6649,	// (0x00012e83) grid_call4_button_pane_ParamLimits

0x6649,	// (0x00012e83) grid_call4_button_pane

0xd35d,	// (0x00019b97) call4_windows_conf_pane

0xd374,	// (0x00019bae) popup_call4_audio_first_window_ParamLimits

0xd374,	// (0x00019bae) popup_call4_audio_first_window

0xd3c0,	// (0x00019bfa) popup_call4_audio_second_window_ParamLimits

0xd3c0,	// (0x00019bfa) popup_call4_audio_second_window

0xd3d4,	// (0x00019c0e) popup_call4_audio_wait_window_ParamLimits

0xd3d4,	// (0x00019c0e) popup_call4_audio_wait_window

0x6676,	// (0x00012eb0) cell_call4_button_pane_ParamLimits

0x6676,	// (0x00012eb0) cell_call4_button_pane

0x669f,	// (0x00012ed9) bg_button_pane_cp09_ParamLimits

0x669f,	// (0x00012ed9) bg_button_pane_cp09

0x66ab,	// (0x00012ee5) cell_call4_button_pane_g1_ParamLimits

0x66ab,	// (0x00012ee5) cell_call4_button_pane_g1

0x66d1,	// (0x00012f0b) cell_call4_button_pane_t1_ParamLimits

0x66d1,	// (0x00012f0b) cell_call4_button_pane_t1

0xd41c,	// (0x00019c56) popup_call4_audio_conf_window_ParamLimits

0xd41c,	// (0x00019c56) popup_call4_audio_conf_window

0x5968,	// (0x000121a2) mup3_progress_pane_t1_ParamLimits

0x597f,	// (0x000121b9) mup3_progress_pane_t2_ParamLimits

0xcae1,	// (0x0001931b) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0001c03d) mup3_progress_pane_t_ParamLimits

0xcaf8,	// (0x00019332) mup_progress_pane_cp03_ParamLimits

0x5f29,	// (0x00012763) mup3_control_keys_pane_g4_copy1

0xd28b,	// (0x00019ac5) mp4_rocker2_pane_ParamLimits

0xd28b,	// (0x00019ac5) mp4_rocker2_pane

0xd430,	// (0x00019c6a) mp4_rocker2_pane_g1

0xd438,	// (0x00019c72) mp4_rocker2_pane_g2

0xd440,	// (0x00019c7a) mp4_rocker2_pane_g3

0xd448,	// (0x00019c82) mp4_rocker2_pane_g4

0xd450,	// (0x00019c8a) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0001c16d) mp4_rocker2_pane_g

0x98b7,	// (0x000160f1) main_camera4_pane

0x98b7,	// (0x000160f1) main_video4_pane

0x6193,	// (0x000129cd) main_video_tele_dialer_pane_t1_ParamLimits

0x6193,	// (0x000129cd) main_video_tele_dialer_pane_t1

0x61ac,	// (0x000129e6) main_video_tele_dialer_pane_t2_ParamLimits

0x61ac,	// (0x000129e6) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0001c127) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0001c127) main_video_tele_dialer_pane_t

0x670f,	// (0x00012f49) cam4_autofocus_pane_ParamLimits

0x670f,	// (0x00012f49) cam4_autofocus_pane

0x6725,	// (0x00012f5f) cam4_image_uncrop_pane_ParamLimits

0x6725,	// (0x00012f5f) cam4_image_uncrop_pane

0x673f,	// (0x00012f79) cam4_indicators_pane_ParamLimits

0x673f,	// (0x00012f79) cam4_indicators_pane

0x676a,	// (0x00012fa4) main_camera4_pane_g1_ParamLimits

0x676a,	// (0x00012fa4) main_camera4_pane_g1

0x6776,	// (0x00012fb0) main_camera4_pane_g2_ParamLimits

0x6776,	// (0x00012fb0) main_camera4_pane_g2

0x6782,	// (0x00012fbc) main_camera4_pane_g3_ParamLimits

0x6782,	// (0x00012fbc) main_camera4_pane_g3

0x678e,	// (0x00012fc8) main_camera4_pane_g4_ParamLimits

0x678e,	// (0x00012fc8) main_camera4_pane_g4

0x679a,	// (0x00012fd4) main_camera4_pane_g5_ParamLimits

0x679a,	// (0x00012fd4) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0001c178) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0001c178) main_camera4_pane_g

0x67b7,	// (0x00012ff1) main_camera4_pane_t1_ParamLimits

0x67b7,	// (0x00012ff1) main_camera4_pane_t1

0xcacb,	// (0x00019305) bg_tb_trans_pane_cp06

0x67ef,	// (0x00013029) cam4_indicators_pane_g1

0x67fc,	// (0x00013036) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0001c18a) cam4_indicators_pane_g

0x6814,	// (0x0001304e) cam4_indicators_pane_t1

0x683e,	// (0x00013078) main_video4_pane_g1_ParamLimits

0x683e,	// (0x00013078) main_video4_pane_g1

0x6850,	// (0x0001308a) main_video4_pane_g2_ParamLimits

0x6850,	// (0x0001308a) main_video4_pane_g2

0x6864,	// (0x0001309e) main_video4_pane_g3_ParamLimits

0x6864,	// (0x0001309e) main_video4_pane_g3

0x6874,	// (0x000130ae) main_video4_pane_g4_ParamLimits

0x6874,	// (0x000130ae) main_video4_pane_g4

0x0004,

0xf957,	// (0x0001c191) main_video4_pane_g_ParamLimits

0xf957,	// (0x0001c191) main_video4_pane_g

0x6894,	// (0x000130ce) vid4_indicators_pane_ParamLimits

0x6894,	// (0x000130ce) vid4_indicators_pane

0x68c4,	// (0x000130fe) video4_image_uncrop_cif_pane_ParamLimits

0x68c4,	// (0x000130fe) video4_image_uncrop_cif_pane

0x68de,	// (0x00013118) video4_image_uncrop_nhd_pane_ParamLimits

0x68de,	// (0x00013118) video4_image_uncrop_nhd_pane

0x6725,	// (0x00012f5f) video4_image_uncrop_vga_pane_ParamLimits

0x6725,	// (0x00012f5f) video4_image_uncrop_vga_pane

0xcb08,	// (0x00019342) bg_tb_trans_pane_cp07

0x67ef,	// (0x00013029) vid4_indicators_pane_g1

0x68f2,	// (0x0001312c) vid4_indicators_pane_g2

0x68ff,	// (0x00013139) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0001c19c) vid4_indicators_pane_g

0x6924,	// (0x0001315e) vid4_indicators_pane_t1

0x6936,	// (0x00013170) cam4_autofocus_pane_g1

0x693e,	// (0x00013178) cam4_autofocus_pane_g2

0x6946,	// (0x00013180) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0001c1a7) cam4_autofocus_pane_g

0x694e,	// (0x00013188) cam4_autofocus_pane_g3_copy1

0x61dd,	// (0x00012a17) video_down_pane_cp_t1

0x61eb,	// (0x00012a25) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0001c12c) video_down_pane_cp_t

0x9927,	// (0x00016161) popup_vitu2_window_ParamLimits

0x9927,	// (0x00016161) popup_vitu2_window

0x6956,	// (0x00013190) aid_size_cell2_itu2_ParamLimits

0x6956,	// (0x00013190) aid_size_cell2_itu2

0x697c,	// (0x000131b6) aid_size_cell_itu2_ParamLimits

0x697c,	// (0x000131b6) aid_size_cell_itu2

0x69d8,	// (0x00013212) bg_popup_window_pane_cp09_ParamLimits

0x69d8,	// (0x00013212) bg_popup_window_pane_cp09

0x69e6,	// (0x00013220) field_vitu2_entry_pane_ParamLimits

0x69e6,	// (0x00013220) field_vitu2_entry_pane

0x6a0c,	// (0x00013246) grid_vitu2_function_pane_ParamLimits

0x6a0c,	// (0x00013246) grid_vitu2_function_pane

0x6a5d,	// (0x00013297) grid_vitu2_itu_pane_ParamLimits

0x6a5d,	// (0x00013297) grid_vitu2_itu_pane

0x6af0,	// (0x0001332a) cell_vitu2_itu_pane_ParamLimits

0x6af0,	// (0x0001332a) cell_vitu2_itu_pane

0x6b14,	// (0x0001334e) cell_vitu2_function_pane_ParamLimits

0x6b14,	// (0x0001334e) cell_vitu2_function_pane

0xd482,	// (0x00019cbc) bg_popup_call_pane_cp08_ParamLimits

0xd482,	// (0x00019cbc) bg_popup_call_pane_cp08

0xd49b,	// (0x00019cd5) field_vitu2_entry_pane_g1

0xd4a7,	// (0x00019ce1) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0001c1ae) field_vitu2_entry_pane_g

0xd4c1,	// (0x00019cfb) field_vitu2_entry_pane_t1_ParamLimits

0xd4c1,	// (0x00019cfb) field_vitu2_entry_pane_t1

0xd4de,	// (0x00019d18) field_vitu2_entry_pane_t2_ParamLimits

0xd4de,	// (0x00019d18) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0001c1b5) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0001c1b5) field_vitu2_entry_pane_t

0x6b53,	// (0x0001338d) bg_button_pane_cp010_ParamLimits

0x6b53,	// (0x0001338d) bg_button_pane_cp010

0x6b61,	// (0x0001339b) cell_vitu2_itu_pane_g1

0x6b7f,	// (0x000133b9) cell_vitu2_itu_pane_t1_ParamLimits

0x6b7f,	// (0x000133b9) cell_vitu2_itu_pane_t1

0x6be5,	// (0x0001341f) cell_vitu2_itu_pane_t2_ParamLimits

0x6be5,	// (0x0001341f) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0001c1bf) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0001c1bf) cell_vitu2_itu_pane_t

0x9927,	// (0x00016161) bg_button_pane_cp011

0x6cc1,	// (0x000134fb) cell_vitu2_function_pane_g1

0x98b7,	// (0x000160f1) main_myfav_hc_pane

0x658d,	// (0x00012dc7) popup_image3_note_pane_ParamLimits

0x658d,	// (0x00012dc7) popup_image3_note_pane

0x65a9,	// (0x00012de3) popup_image3_tool_bar_pane_ParamLimits

0x65a9,	// (0x00012de3) popup_image3_tool_bar_pane

0x6c69,	// (0x000134a3) cell_vitu2_itu_pane_t3_ParamLimits

0x6c69,	// (0x000134a3) cell_vitu2_itu_pane_t3

0x98b7,	// (0x000160f1) bg_popup_trans_pane

0xd503,	// (0x00019d3d) grid_image3_tool_bar_pane

0xd50d,	// (0x00019d47) bg_popup_trans_pane_g1

0xa60e,	// (0x00016e48) bg_popup_trans_pane_g2

0xd515,	// (0x00019d4f) bg_popup_trans_pane_g3

0xd51d,	// (0x00019d57) bg_popup_trans_pane_g4

0xd525,	// (0x00019d5f) bg_popup_trans_pane_g5

0xd52d,	// (0x00019d67) bg_popup_trans_pane_g6

0xd535,	// (0x00019d6f) bg_popup_trans_pane_g7

0xd53d,	// (0x00019d77) bg_popup_trans_pane_g8

0xa5ee,	// (0x00016e28) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0001c1c6) bg_popup_trans_pane_g

0xd545,	// (0x00019d7f) cell_image3_tool_bar_pane_ParamLimits

0xd545,	// (0x00019d7f) cell_image3_tool_bar_pane

0xc7ee,	// (0x00019028) cell_image3_tool_bar_pane_g1

0x98b7,	// (0x000160f1) bg_popup_trans_pane_cp1

0xd559,	// (0x00019d93) popup_image3_note_pane_t1

0xd567,	// (0x00019da1) popup_image3_note_pane_t2

0xd575,	// (0x00019daf) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0001c1d9) popup_image3_note_pane_t

0xd583,	// (0x00019dbd) popup_image3_note_pane_t3_copy1

0x6cd5,	// (0x0001350f) bg_myfav_hc_instruction_pane_ParamLimits

0x6cd5,	// (0x0001350f) bg_myfav_hc_instruction_pane

0x6ce9,	// (0x00013523) cell_myfav_contact_pane_ParamLimits

0x6ce9,	// (0x00013523) cell_myfav_contact_pane

0x6d07,	// (0x00013541) cell_myfav_contact_pane_cp1_ParamLimits

0x6d07,	// (0x00013541) cell_myfav_contact_pane_cp1

0x6d1f,	// (0x00013559) cell_myfav_contact_pane_cp2_ParamLimits

0x6d1f,	// (0x00013559) cell_myfav_contact_pane_cp2

0x6d37,	// (0x00013571) cell_myfav_contact_pane_cp3_ParamLimits

0x6d37,	// (0x00013571) cell_myfav_contact_pane_cp3

0x6d4e,	// (0x00013588) cell_myfav_contact_pane_cp4_ParamLimits

0x6d4e,	// (0x00013588) cell_myfav_contact_pane_cp4

0x6d66,	// (0x000135a0) cell_myfav_contact_pane_cp5_ParamLimits

0x6d66,	// (0x000135a0) cell_myfav_contact_pane_cp5

0x6d7a,	// (0x000135b4) cell_myfav_contact_pane_cp6_ParamLimits

0x6d7a,	// (0x000135b4) cell_myfav_contact_pane_cp6

0x6d90,	// (0x000135ca) cell_myfav_contact_pane_cp7_ParamLimits

0x6d90,	// (0x000135ca) cell_myfav_contact_pane_cp7

0xd591,	// (0x00019dcb) listscroll_gen_pane_cp05

0x6daa,	// (0x000135e4) main_myfav_hc_pane_g1_ParamLimits

0x6daa,	// (0x000135e4) main_myfav_hc_pane_g1

0x6dc4,	// (0x000135fe) main_myfav_hc_pane_g2_ParamLimits

0x6dc4,	// (0x000135fe) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0001c1e0) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0001c1e0) main_myfav_hc_pane_g

0x6df6,	// (0x00013630) main_myfav_hc_pane_t1_ParamLimits

0x6df6,	// (0x00013630) main_myfav_hc_pane_t1

0xd59a,	// (0x00019dd4) main_myfav_hc_pane_t2_ParamLimits

0xd59a,	// (0x00019dd4) main_myfav_hc_pane_t2

0xd5ac,	// (0x00019de6) main_myfav_hc_pane_t3_ParamLimits

0xd5ac,	// (0x00019de6) main_myfav_hc_pane_t3

0x6e0d,	// (0x00013647) main_myfav_hc_pane_t4_ParamLimits

0x6e0d,	// (0x00013647) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0001c1e7) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0001c1e7) main_myfav_hc_pane_t

0xc7ee,	// (0x00019028) bg_myfav_hc_instruction_pane_g1

0xd5be,	// (0x00019df8) cell_myfav_contact_pane_g1_ParamLimits

0xd5be,	// (0x00019df8) cell_myfav_contact_pane_g1

0xd5be,	// (0x00019df8) cell_myfav_contact_pane_g2_ParamLimits

0xd5be,	// (0x00019df8) cell_myfav_contact_pane_g2

0xd5ca,	// (0x00019e04) cell_myfav_contact_pane_g3_ParamLimits

0xd5ca,	// (0x00019e04) cell_myfav_contact_pane_g3

0xcacb,	// (0x00019305) cell_myfav_contact_pane_g4_ParamLimits

0xcacb,	// (0x00019305) cell_myfav_contact_pane_g4

0xd5d7,	// (0x00019e11) cell_myfav_contact_pane_g5_ParamLimits

0xd5d7,	// (0x00019e11) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0001c1f2) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0001c1f2) cell_myfav_contact_pane_g

0x6dde,	// (0x00013618) main_myfav_hc_pane_g3_ParamLimits

0x6dde,	// (0x00013618) main_myfav_hc_pane_g3

0x188a,	// (0x0000e0c4) popup_adpt_find_window

0x6e35,	// (0x0001366f) afind_page_pane_ParamLimits

0x6e35,	// (0x0001366f) afind_page_pane

0x6e4a,	// (0x00013684) aid_size_cell_afind_ParamLimits

0x6e4a,	// (0x00013684) aid_size_cell_afind

0x6e68,	// (0x000136a2) bg_popup_sub_pane_cp09_ParamLimits

0x6e68,	// (0x000136a2) bg_popup_sub_pane_cp09

0x6e75,	// (0x000136af) find_pane_cp01_ParamLimits

0x6e75,	// (0x000136af) find_pane_cp01

0xd5e3,	// (0x00019e1d) grid_afind_control_pane_ParamLimits

0xd5e3,	// (0x00019e1d) grid_afind_control_pane

0x6e82,	// (0x000136bc) grid_afind_pane_ParamLimits

0x6e82,	// (0x000136bc) grid_afind_pane

0x6ea4,	// (0x000136de) cell_afind_pane_ParamLimits

0x6ea4,	// (0x000136de) cell_afind_pane

0xc7ee,	// (0x00019028) afind_page_pane_g1

0x6f01,	// (0x0001373b) afind_page_pane_g2

0x6f0a,	// (0x00013744) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0001c1fd) afind_page_pane_g

0x6f13,	// (0x0001374d) afind_page_pane_t1

0xd5f7,	// (0x00019e31) cell_afind_grid_control_pane_ParamLimits

0xd5f7,	// (0x00019e31) cell_afind_grid_control_pane

0xd31f,	// (0x00019b59) bg_button_pane_cp69_ParamLimits

0xd31f,	// (0x00019b59) bg_button_pane_cp69

0x6f33,	// (0x0001376d) cell_afind_pane_g1_ParamLimits

0x6f33,	// (0x0001376d) cell_afind_pane_g1

0x6f40,	// (0x0001377a) cell_afind_pane_t1_ParamLimits

0x6f40,	// (0x0001377a) cell_afind_pane_t1

0xa361,	// (0x00016b9b) bg_button_pane_cp72

0xd606,	// (0x00019e40) cell_afind_grid_control_pane_g1

0x3f00,	// (0x0001073a) aid_image_placing_area_ParamLimits

0x3f00,	// (0x0001073a) aid_image_placing_area

0xcdde,	// (0x00019618) field_vitu_entry_pane_g1_ParamLimits

0xcdde,	// (0x00019618) field_vitu_entry_pane_g1

0xcdea,	// (0x00019624) field_vitu_entry_pane_g2_ParamLimits

0xcdea,	// (0x00019624) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0001c0b7) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0001c0b7) field_vitu_entry_pane_g

0x5ff0,	// (0x0001282a) cell_vitu_itu_pane_g1_ParamLimits

0x6032,	// (0x0001286c) cell_vitu_itu_pane_t3_ParamLimits

0x6032,	// (0x0001286c) cell_vitu_itu_pane_t3

0xd2cf,	// (0x00019b09) mp4_progress_pane_t1_ParamLimits

0xd2e8,	// (0x00019b22) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0001c14c) mp4_progress_pane_t_ParamLimits

0xd301,	// (0x00019b3b) mup_progress_pane_cp04_ParamLimits

0x6e21,	// (0x0001365b) main_myfav_hc_pane_t5_ParamLimits

0x6e21,	// (0x0001365b) main_myfav_hc_pane_t5

0x98dd,	// (0x00016117) aid_zoom_text_primary

0x188a,	// (0x0000e0c4) popup_adpt_find_window_ParamLimits

0x9927,	// (0x00016161) main_cam_set_pane

0x6756,	// (0x00012f90) cam4_zoom_pane_ParamLimits

0x6756,	// (0x00012f90) cam4_zoom_pane

0x6f52,	// (0x0001378c) main_cam_set_pane_g1_ParamLimits

0x6f52,	// (0x0001378c) main_cam_set_pane_g1

0x6f60,	// (0x0001379a) main_cam_set_pane_g2_ParamLimits

0x6f60,	// (0x0001379a) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0001c204) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0001c204) main_cam_set_pane_g

0x6f83,	// (0x000137bd) main_cam_set_pane_t1_ParamLimits

0x6f83,	// (0x000137bd) main_cam_set_pane_t1

0x6f9e,	// (0x000137d8) main_cset_listscroll_pane_ParamLimits

0x6f9e,	// (0x000137d8) main_cset_listscroll_pane

0x6fc0,	// (0x000137fa) main_cset_slider_pane_ParamLimits

0x6fc0,	// (0x000137fa) main_cset_slider_pane

0xd617,	// (0x00019e51) main_cset_list_pane_ParamLimits

0xd617,	// (0x00019e51) main_cset_list_pane

0xd627,	// (0x00019e61) scroll_pane_cp028

0x6fe6,	// (0x00013820) aid_area_touch_slider

0x7002,	// (0x0001383c) cset_slider_pane

0x702c,	// (0x00013866) main_cset_slider_pane_g1

0x7041,	// (0x0001387b) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0001c209) main_cset_slider_pane_g

0xd660,	// (0x00019e9a) main_cset_slider_pane_t1

0x70fd,	// (0x00013937) main_cset_slider_pane_t2

0x7117,	// (0x00013951) main_cset_slider_pane_t3

0x7131,	// (0x0001396b) main_cset_slider_pane_t4

0x714b,	// (0x00013985) main_cset_slider_pane_t5

0x7165,	// (0x0001399f) main_cset_slider_pane_t6

0x717a,	// (0x000139b4) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0001c22e) main_cset_slider_pane_t

0x727e,	// (0x00013ab8) cset_list_set_pane_ParamLimits

0x727e,	// (0x00013ab8) cset_list_set_pane

0x7290,	// (0x00013aca) aid_position_infowindow_above

0x7298,	// (0x00013ad2) aid_position_infowindow_below

0x72a0,	// (0x00013ada) cset_list_set_pane_g1_ParamLimits

0x72a0,	// (0x00013ada) cset_list_set_pane_g1

0xd700,	// (0x00019f3a) cset_list_set_pane_g3_ParamLimits

0xd700,	// (0x00019f3a) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0001c24d) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0001c24d) cset_list_set_pane_g

0xd70f,	// (0x00019f49) cset_list_set_pane_t1_ParamLimits

0xd70f,	// (0x00019f49) cset_list_set_pane_t1

0x9927,	// (0x00016161) list_highlight_pane_cp021_ParamLimits

0x9927,	// (0x00016161) list_highlight_pane_cp021

0xaf81,	// (0x000177bb) cset_slider_pane_g1

0xaf93,	// (0x000177cd) cset_slider_pane_g2

0xaf8a,	// (0x000177c4) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0001c252) cset_slider_pane_g

0xd724,	// (0x00019f5e) aid_area_touch_cam4_zoom

0xd72c,	// (0x00019f66) cam4_zoom_cont_pane

0xd734,	// (0x00019f6e) cam4_zoom_pane_g1

0xd73c,	// (0x00019f76) cam4_zoom_pane_g2

0x72ac,	// (0x00013ae6) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0001c259) cam4_zoom_pane_g

0xd744,	// (0x00019f7e) cam4_zoom_cont_pane_g1

0xd74d,	// (0x00019f87) cam4_zoom_cont_pane_g2

0xd756,	// (0x00019f90) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0001c260) cam4_zoom_cont_pane_g

0x6616,	// (0x00012e50) call4_image_pane_ParamLimits

0x6616,	// (0x00012e50) call4_image_pane

0xd35d,	// (0x00019b97) call4_windows_conf_pane_ParamLimits

0xd39e,	// (0x00019bd8) popup_call4_audio_in_window_ParamLimits

0xd39e,	// (0x00019bd8) popup_call4_audio_in_window

0x98b7,	// (0x000160f1) bg_popup_call2_act_pane_cp02

0xd414,	// (0x00019c4e) call4_list_conf_pane

0xc7ee,	// (0x00019028) call4_image_pane_g1

0xc7ee,	// (0x00019028) call4_image_pane_g2

0x0001,

0xf743,	// (0x0001bf7d) call4_image_pane_g

0xd75f,	// (0x00019f99) list_single_graphic_popup_conf4_pane_ParamLimits

0xd75f,	// (0x00019f99) list_single_graphic_popup_conf4_pane

0x98b7,	// (0x000160f1) list_highlight_pane_cp022

0xd772,	// (0x00019fac) list_single_graphic_popup_conf4_pane_g1

0xac40,	// (0x0001747a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0001c267) list_single_graphic_popup_conf4_pane_g

0xd77a,	// (0x00019fb4) list_single_graphic_popup_conf4_pane_t1

0x2705,	// (0x0000ef3f) popup_vtel_slider_window_ParamLimits

0x2705,	// (0x0000ef3f) popup_vtel_slider_window

0xd30d,	// (0x00019b47) dialer2_ne_pane_t2_ParamLimits

0xd30d,	// (0x00019b47) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0001c151) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0001c151) dialer2_ne_pane_t

0xc5d3,	// (0x00018e0d) bg_popup_sub_pane_cp010_ParamLimits

0xc5d3,	// (0x00018e0d) bg_popup_sub_pane_cp010

0x72b4,	// (0x00013aee) popup_vtel_slider_window_g1_ParamLimits

0x72b4,	// (0x00013aee) popup_vtel_slider_window_g1

0x72c7,	// (0x00013b01) popup_vtel_slider_window_g2_ParamLimits

0x72c7,	// (0x00013b01) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0001c26c) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0001c26c) popup_vtel_slider_window_g

0x731d,	// (0x00013b57) vtel_slider_pane_ParamLimits

0x731d,	// (0x00013b57) vtel_slider_pane

0x733f,	// (0x00013b79) vtel_slider_pane_g1_ParamLimits

0x733f,	// (0x00013b79) vtel_slider_pane_g1

0x7353,	// (0x00013b8d) vtel_slider_pane_g2_ParamLimits

0x7353,	// (0x00013b8d) vtel_slider_pane_g2

0x736b,	// (0x00013ba5) vtel_slider_pane_g3_ParamLimits

0x736b,	// (0x00013ba5) vtel_slider_pane_g3

0x733f,	// (0x00013b79) vtel_slider_pane_g4_ParamLimits

0x733f,	// (0x00013b79) vtel_slider_pane_g4

0x7381,	// (0x00013bbb) vtel_slider_pane_g5_ParamLimits

0x7381,	// (0x00013bbb) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0001c275) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0001c275) vtel_slider_pane_g

0x98b7,	// (0x000160f1) main_gallery2_pane

0x69a8,	// (0x000131e2) aid_size_row_itut2_dropdow_list_ParamLimits

0x69a8,	// (0x000131e2) aid_size_row_itut2_dropdow_list

0x6a34,	// (0x0001326e) grid_vitu2_function_top_pane_ParamLimits

0x6a34,	// (0x0001326e) grid_vitu2_function_top_pane

0x6a99,	// (0x000132d3) popup_vitu2_dropdown_list_window_ParamLimits

0x6a99,	// (0x000132d3) popup_vitu2_dropdown_list_window

0x6ac2,	// (0x000132fc) popup_vitu2_match_list_window

0x7397,	// (0x00013bd1) cell_vitu2_function_top_pane_ParamLimits

0x7397,	// (0x00013bd1) cell_vitu2_function_top_pane

0x73b5,	// (0x00013bef) cell_vitu2_function_top_pane_cp01_ParamLimits

0x73b5,	// (0x00013bef) cell_vitu2_function_top_pane_cp01

0x73d3,	// (0x00013c0d) cell_vitu2_function_top_wide_pane_ParamLimits

0x73d3,	// (0x00013c0d) cell_vitu2_function_top_wide_pane

0x9927,	// (0x00016161) bg_button_pane_cp012

0x73f1,	// (0x00013c2b) cell_vitu2_function_top_pane_g1

0xd796,	// (0x00019fd0) bg_button_pane_cp013_ParamLimits

0xd796,	// (0x00019fd0) bg_button_pane_cp013

0x7405,	// (0x00013c3f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7405,	// (0x00013c3f) cell_vitu2_function_top_wide_pane_g1

0x9927,	// (0x00016161) bg_popup_sub_pane_cp20

0x741d,	// (0x00013c57) list_vitu2_match_list_pane

0xd50d,	// (0x00019d47) bg_popup_sub_pane_cp20_g1

0xd515,	// (0x00019d4f) bg_popup_sub_pane_cp20_g2

0xa60e,	// (0x00016e48) bg_popup_sub_pane_cp20_g3

0xd51d,	// (0x00019d57) bg_popup_sub_pane_cp20_g4

0xa5ee,	// (0x00016e28) bg_popup_sub_pane_cp20_g5

0xd7b2,	// (0x00019fec) bg_popup_sub_pane_cp20_g6

0xd52d,	// (0x00019d67) bg_popup_sub_pane_cp20_g7

0xd535,	// (0x00019d6f) bg_popup_sub_pane_cp20_g8

0xd53d,	// (0x00019d77) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0001c280) bg_popup_sub_pane_cp20_g

0xd7ba,	// (0x00019ff4) list_vitu2_match_list_item_pane_ParamLimits

0xd7ba,	// (0x00019ff4) list_vitu2_match_list_item_pane

0xd7cc,	// (0x0001a006) list_vitu2_match_list_item_pane_t1

0x98b7,	// (0x000160f1) bg_popup_sub_pane_cp21

0xaaf5,	// (0x0001732f) grid_vitu2_dropdown_list_pane

0x746c,	// (0x00013ca6) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x746c,	// (0x00013ca6) cell_vitu2_dropdown_list_char_pane

0x748d,	// (0x00013cc7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x748d,	// (0x00013cc7) cell_vitu2_dropdown_list_ctrl_pane

0xd7f2,	// (0x0001a02c) cell_vitu2_dropdown_list_char_pane_g1

0xd7fb,	// (0x0001a035) cell_vitu2_dropdown_list_char_pane_g2

0xd804,	// (0x0001a03e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0001c29d) cell_vitu2_dropdown_list_char_pane_g

0x74b9,	// (0x00013cf3) cell_vitu2_dropdown_list_char_pane_t1

0x74c7,	// (0x00013d01) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x74c7,	// (0x00013d01) cell_vitu2_dropdown_list_ctrl_pane_g1

0x74d4,	// (0x00013d0e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x74d4,	// (0x00013d0e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x74e1,	// (0x00013d1b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x74e1,	// (0x00013d1b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x74ee,	// (0x00013d28) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x74ee,	// (0x00013d28) cell_vitu2_dropdown_list_ctrl_pane_g4

0xca5a,	// (0x00019294) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xca5a,	// (0x00019294) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0001c2a4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0001c2a4) cell_vitu2_dropdown_list_ctrl_pane_g

0x750a,	// (0x00013d44) aid_size_cell_gallery2_ParamLimits

0x750a,	// (0x00013d44) aid_size_cell_gallery2

0x7520,	// (0x00013d5a) grid_gallery2_pane_ParamLimits

0x7520,	// (0x00013d5a) grid_gallery2_pane

0x7534,	// (0x00013d6e) scroll_pane_cp029_ParamLimits

0x7534,	// (0x00013d6e) scroll_pane_cp029

0x7540,	// (0x00013d7a) cell_gallery2_pane_ParamLimits

0x7540,	// (0x00013d7a) cell_gallery2_pane

0xd80d,	// (0x0001a047) cell_gallery2_pane_g2

0x7576,	// (0x00013db0) cell_gallery2_pane_g3

0xd817,	// (0x0001a051) cell_gallery2_pane_g4

0xd81f,	// (0x0001a059) cell_gallery2_pane_g5

0xae2b,	// (0x00017665) grid_highlight_pane_cp10

0x6ac2,	// (0x000132fc) popup_vitu2_match_list_window_ParamLimits

0x6ad9,	// (0x00013313) popup_vitu2_query_window_ParamLimits

0x6ad9,	// (0x00013313) popup_vitu2_query_window

0x98b7,	// (0x000160f1) bg_vitu2_candi_button_pane

0xd7f2,	// (0x0001a02c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd7fb,	// (0x0001a035) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd804,	// (0x0001a03e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x757e,	// (0x00013db8) bg_button_pane_cp015

0x7588,	// (0x00013dc2) bg_button_pane_cp016

0x7592,	// (0x00013dcc) bg_button_pane_cp017

0x9927,	// (0x00016161) bg_popup_sub_pane_cp22

0xd827,	// (0x0001a061) popup_vitu2_query_window_g1

0x75ba,	// (0x00013df4) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0001c2af) popup_vitu2_query_window_g

0x75c8,	// (0x00013e02) popup_vitu2_query_window_t1_ParamLimits

0x75c8,	// (0x00013e02) popup_vitu2_query_window_t1

0x75f0,	// (0x00013e2a) popup_vitu2_query_window_t2_ParamLimits

0x75f0,	// (0x00013e2a) popup_vitu2_query_window_t2

0x7602,	// (0x00013e3c) popup_vitu2_query_window_t3_ParamLimits

0x7602,	// (0x00013e3c) popup_vitu2_query_window_t3

0x762a,	// (0x00013e64) popup_vitu2_query_window_t4_ParamLimits

0x762a,	// (0x00013e64) popup_vitu2_query_window_t4

0x763e,	// (0x00013e78) popup_vitu2_query_window_t5_ParamLimits

0x763e,	// (0x00013e78) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0001c2b4) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0001c2b4) popup_vitu2_query_window_t

0xd60f,	// (0x00019e49) main_cset_text_pane

0x6fe6,	// (0x00013820) aid_area_touch_slider_ParamLimits

0x7002,	// (0x0001383c) cset_slider_pane_ParamLimits

0x702c,	// (0x00013866) main_cset_slider_pane_g1_ParamLimits

0x7041,	// (0x0001387b) main_cset_slider_pane_g2_ParamLimits

0xd630,	// (0x00019e6a) main_cset_slider_pane_g3_ParamLimits

0xd630,	// (0x00019e6a) main_cset_slider_pane_g3

0x7056,	// (0x00013890) main_cset_slider_pane_g4_ParamLimits

0x7056,	// (0x00013890) main_cset_slider_pane_g4

0x7065,	// (0x0001389f) main_cset_slider_pane_g5_ParamLimits

0x7065,	// (0x0001389f) main_cset_slider_pane_g5

0x7071,	// (0x000138ab) main_cset_slider_pane_g6_ParamLimits

0x7071,	// (0x000138ab) main_cset_slider_pane_g6

0xf9cf,	// (0x0001c209) main_cset_slider_pane_g_ParamLimits

0xd660,	// (0x00019e9a) main_cset_slider_pane_t1_ParamLimits

0x70fd,	// (0x00013937) main_cset_slider_pane_t2_ParamLimits

0x7117,	// (0x00013951) main_cset_slider_pane_t3_ParamLimits

0x7131,	// (0x0001396b) main_cset_slider_pane_t4_ParamLimits

0x714b,	// (0x00013985) main_cset_slider_pane_t5_ParamLimits

0x7165,	// (0x0001399f) main_cset_slider_pane_t6_ParamLimits

0x717a,	// (0x000139b4) main_cset_slider_pane_t7_ParamLimits

0x71a4,	// (0x000139de) main_cset_slider_pane_t8_ParamLimits

0x71a4,	// (0x000139de) main_cset_slider_pane_t8

0x71cc,	// (0x00013a06) main_cset_slider_pane_t9_ParamLimits

0x71cc,	// (0x00013a06) main_cset_slider_pane_t9

0x71f4,	// (0x00013a2e) main_cset_slider_pane_t10_ParamLimits

0x71f4,	// (0x00013a2e) main_cset_slider_pane_t10

0x721c,	// (0x00013a56) main_cset_slider_pane_t11_ParamLimits

0x721c,	// (0x00013a56) main_cset_slider_pane_t11

0x7244,	// (0x00013a7e) main_cset_slider_pane_t12_ParamLimits

0x7244,	// (0x00013a7e) main_cset_slider_pane_t12

0x7261,	// (0x00013a9b) main_cset_slider_pane_t13_ParamLimits

0x7261,	// (0x00013a9b) main_cset_slider_pane_t13

0xf9f4,	// (0x0001c22e) main_cset_slider_pane_t_ParamLimits

0x98b7,	// (0x000160f1) bg_popup_sub_pane_cp011

0xd833,	// (0x0001a06d) main_cset_text_pane_g1

0xd83b,	// (0x0001a075) main_cset_text_pane_t1

0xd849,	// (0x0001a083) main_cset_text_pane_t2

0xd857,	// (0x0001a091) main_cset_text_pane_t3

0xd865,	// (0x0001a09f) main_cset_text_pane_t4

0xd873,	// (0x0001a0ad) main_cset_text_pane_t5

0xd881,	// (0x0001a0bb) main_cset_text_pane_t6

0xd88f,	// (0x0001a0c9) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0001c2bf) main_cset_text_pane_t

0x98b7,	// (0x000160f1) main_cam4_burst_pane

0x98b7,	// (0x000160f1) main_cam5_pane

0x6f21,	// (0x0001375b) bg_button_pane_cp019

0x6f2a,	// (0x00013764) bg_button_pane_cp020

0xd63c,	// (0x00019e76) main_cset_slider_pane_g7_ParamLimits

0xd63c,	// (0x00019e76) main_cset_slider_pane_g7

0xd648,	// (0x00019e82) main_cset_slider_pane_g8_ParamLimits

0xd648,	// (0x00019e82) main_cset_slider_pane_g8

0x7085,	// (0x000138bf) main_cset_slider_pane_g9_ParamLimits

0x7085,	// (0x000138bf) main_cset_slider_pane_g9

0x7091,	// (0x000138cb) main_cset_slider_pane_g10_ParamLimits

0x7091,	// (0x000138cb) main_cset_slider_pane_g10

0x709d,	// (0x000138d7) main_cset_slider_pane_g11_ParamLimits

0x709d,	// (0x000138d7) main_cset_slider_pane_g11

0x70a9,	// (0x000138e3) main_cset_slider_pane_g12_ParamLimits

0x70a9,	// (0x000138e3) main_cset_slider_pane_g12

0x70b5,	// (0x000138ef) main_cset_slider_pane_g13_ParamLimits

0x70b5,	// (0x000138ef) main_cset_slider_pane_g13

0x70c1,	// (0x000138fb) main_cset_slider_pane_g14_ParamLimits

0x70c1,	// (0x000138fb) main_cset_slider_pane_g14

0x70cd,	// (0x00013907) main_cset_slider_pane_g15_ParamLimits

0x70cd,	// (0x00013907) main_cset_slider_pane_g15

0xd68e,	// (0x00019ec8) main_cset_slider_pane_t14_ParamLimits

0xd68e,	// (0x00019ec8) main_cset_slider_pane_t14

0xd6c7,	// (0x00019f01) main_cset_slider_pane_t15_ParamLimits

0xd6c7,	// (0x00019f01) main_cset_slider_pane_t15

0x7652,	// (0x00013e8c) aid_cam4_burst_size_cell_ParamLimits

0x7652,	// (0x00013e8c) aid_cam4_burst_size_cell

0x7672,	// (0x00013eac) grid_cam4_burst_pane_ParamLimits

0x7672,	// (0x00013eac) grid_cam4_burst_pane

0x76aa,	// (0x00013ee4) linegrid_cam4_burst_pane_ParamLimits

0x76aa,	// (0x00013ee4) linegrid_cam4_burst_pane

0x76ce,	// (0x00013f08) scroll_pane_cp30_ParamLimits

0x76ce,	// (0x00013f08) scroll_pane_cp30

0x76da,	// (0x00013f14) cell_cam4_burst_pane_ParamLimits

0x76da,	// (0x00013f14) cell_cam4_burst_pane

0xd89d,	// (0x0001a0d7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd89d,	// (0x0001a0d7) linegrid_cam4_burst_pane_g1

0x7727,	// (0x00013f61) linegrid_cam4_burst_pane_g2_ParamLimits

0x7727,	// (0x00013f61) linegrid_cam4_burst_pane_g2

0xd8aa,	// (0x0001a0e4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd8aa,	// (0x0001a0e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0001c2ce) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0001c2ce) linegrid_cam4_burst_pane_g

0x7738,	// (0x00013f72) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7738,	// (0x00013f72) linegrid_cam4_burst_pane_g3_copy1

0xd8b7,	// (0x0001a0f1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd8b7,	// (0x0001a0f1) linegrid_cam4_burst_pane_g4

0x7752,	// (0x00013f8c) linegrid_cam4_burst_pane_g5_ParamLimits

0x7752,	// (0x00013f8c) linegrid_cam4_burst_pane_g5

0x7763,	// (0x00013f9d) linegrid_cam4_burst_pane_g6_ParamLimits

0x7763,	// (0x00013f9d) linegrid_cam4_burst_pane_g6

0xd8c4,	// (0x0001a0fe) linegrid_cam4_burst_pane_g7_ParamLimits

0xd8c4,	// (0x0001a0fe) linegrid_cam4_burst_pane_g7

0x777a,	// (0x00013fb4) cell_cam4_burst_pane_g1

0xd8dd,	// (0x0001a117) main_cam5_pane_t1_ParamLimits

0xd8dd,	// (0x0001a117) main_cam5_pane_t1

0xd8ef,	// (0x0001a129) main_cam5_pane_t2_ParamLimits

0xd8ef,	// (0x0001a129) main_cam5_pane_t2

0xd901,	// (0x0001a13b) main_cam5_pane_t3_ParamLimits

0xd901,	// (0x0001a13b) main_cam5_pane_t3

0xd913,	// (0x0001a14d) main_cam5_pane_t4_ParamLimits

0xd913,	// (0x0001a14d) main_cam5_pane_t4

0xd92b,	// (0x0001a165) main_cam5_pane_t5_ParamLimits

0xd92b,	// (0x0001a165) main_cam5_pane_t5

0xd93f,	// (0x0001a179) main_cam5_pane_t6_ParamLimits

0xd93f,	// (0x0001a179) main_cam5_pane_t6

0xd953,	// (0x0001a18d) main_cam5_pane_t7_ParamLimits

0xd953,	// (0x0001a18d) main_cam5_pane_t7

0xd965,	// (0x0001a19f) main_cam5_pane_t8_ParamLimits

0xd965,	// (0x0001a19f) main_cam5_pane_t8

0xd981,	// (0x0001a1bb) main_cam5_pane_t9_ParamLimits

0xd981,	// (0x0001a1bb) main_cam5_pane_t9

0xd993,	// (0x0001a1cd) main_cam5_pane_t10_ParamLimits

0xd993,	// (0x0001a1cd) main_cam5_pane_t10

0xd9a5,	// (0x0001a1df) main_cam5_pane_t11_ParamLimits

0xd9a5,	// (0x0001a1df) main_cam5_pane_t11

0xd9b7,	// (0x0001a1f1) main_cam5_pane_t12_ParamLimits

0xd9b7,	// (0x0001a1f1) main_cam5_pane_t12

0xd9cc,	// (0x0001a206) main_cam5_pane_t13_ParamLimits

0xd9cc,	// (0x0001a206) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0001c2da) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0001c2da) main_cam5_pane_t

0x190d,	// (0x0000e147) popup_scut_keymap_window_ParamLimits

0x190d,	// (0x0000e147) popup_scut_keymap_window

0x778d,	// (0x00013fc7) aid_size_cell_brow_shortcut

0xae2b,	// (0x00017665) bg_popup_window_pane_cp010

0x7799,	// (0x00013fd3) grid_scut_pane

0x77a5,	// (0x00013fdf) cell_scut_pane_ParamLimits

0x77a5,	// (0x00013fdf) cell_scut_pane

0x77bc,	// (0x00013ff6) cell_scut_pane_g1

0xd9e9,	// (0x0001a223) cell_scut_pane_t1

0xd9f8,	// (0x0001a232) cell_scut_pane_t2

0x77c5,	// (0x00013fff) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0001c2f5) cell_scut_pane_t

0x554d,	// (0x00011d87) main_mup3_pane_g8_ParamLimits

0x554d,	// (0x00011d87) main_mup3_pane_g8

0x69c0,	// (0x000131fa) area_vitu2_query_pane_ParamLimits

0x69c0,	// (0x000131fa) area_vitu2_query_pane

0x759c,	// (0x00013dd6) input_focus_pane_cp08

0xda07,	// (0x0001a241) area_vitu2_query_pane_g1

0x77d3,	// (0x0001400d) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0001c2fc) area_vitu2_query_pane_g

0x77e4,	// (0x0001401e) area_vitu2_query_pane_t1_ParamLimits

0x77e4,	// (0x0001401e) area_vitu2_query_pane_t1

0x77f8,	// (0x00014032) area_vitu2_query_pane_t2_ParamLimits

0x77f8,	// (0x00014032) area_vitu2_query_pane_t2

0x780c,	// (0x00014046) area_vitu2_query_pane_t3_ParamLimits

0x780c,	// (0x00014046) area_vitu2_query_pane_t3

0xda13,	// (0x0001a24d) area_vitu2_query_pane_t4_ParamLimits

0xda13,	// (0x0001a24d) area_vitu2_query_pane_t4

0xda3b,	// (0x0001a275) area_vitu2_query_pane_t5_ParamLimits

0xda3b,	// (0x0001a275) area_vitu2_query_pane_t5

0xda63,	// (0x0001a29d) area_vitu2_query_pane_t6_ParamLimits

0xda63,	// (0x0001a29d) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0001c301) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0001c301) area_vitu2_query_pane_t

0x7834,	// (0x0001406e) bg_button_pane_cp018

0x7842,	// (0x0001407c) bg_button_pane_cp021

0x784e,	// (0x00014088) bg_button_pane_cp022

0x785d,	// (0x00014097) input_focus_pane_cp09

0x3535,	// (0x0000fd6f) aid_size_touch_mv_arrow_left

0x355e,	// (0x0000fd98) aid_size_touch_mv_arrow_right

0x70e5,	// (0x0001391f) main_cset_slider_pane_g16_ParamLimits

0x70e5,	// (0x0001391f) main_cset_slider_pane_g16

0x70f1,	// (0x0001392b) main_cset_slider_pane_g17_ParamLimits

0x70f1,	// (0x0001392b) main_cset_slider_pane_g17

0x777a,	// (0x00013fb4) cell_cam4_burst_pane_g1_ParamLimits

0x98b7,	// (0x000160f1) compa_mode_pane

0x72d7,	// (0x00013b11) popup_vtel_slider_window_g3_ParamLimits

0x72d7,	// (0x00013b11) popup_vtel_slider_window_g3

0x72ee,	// (0x00013b28) popup_vtel_slider_window_g4_ParamLimits

0x72ee,	// (0x00013b28) popup_vtel_slider_window_g4

0x7305,	// (0x00013b3f) popup_vtel_slider_window_t1_ParamLimits

0x7305,	// (0x00013b3f) popup_vtel_slider_window_t1

0x98b7,	// (0x000160f1) main_cl_pane

0xc310,	// (0x00018b4a) popup_imed_adjust2_window_ParamLimits

0xc2e8,	// (0x00018b22) bg_tb_trans_pane_cp05_ParamLimits

0xcd13,	// (0x0001954d) popup_imed_adjust2_window_g1_ParamLimits

0xcd22,	// (0x0001955c) popup_imed_adjust2_window_g2_ParamLimits

0xcd22,	// (0x0001955c) popup_imed_adjust2_window_g2

0xcd2e,	// (0x00019568) popup_imed_adjust2_window_g3_ParamLimits

0xcd2e,	// (0x00019568) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0001c07b) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0001c07b) popup_imed_adjust2_window_g

0xcd3a,	// (0x00019574) popup_imed_adjust2_window_t1_ParamLimits

0xcd52,	// (0x0001958c) slider_imed_adjust_pane_ParamLimits

0xcd66,	// (0x000195a0) slider_imed_adjust_pane_g1_ParamLimits

0xcd76,	// (0x000195b0) slider_imed_adjust_pane_g2_ParamLimits

0xcd86,	// (0x000195c0) slider_imed_adjust_pane_g3_ParamLimits

0xcd97,	// (0x000195d1) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0001c082) slider_imed_adjust_pane_g_ParamLimits

0x66f7,	// (0x00012f31) aid_touch_area_cam4_ParamLimits

0x66f7,	// (0x00012f31) aid_touch_area_cam4

0xd458,	// (0x00019c92) battery_pane_cp01

0x67ab,	// (0x00012fe5) main_camera4_pane_g6_ParamLimits

0x67ab,	// (0x00012fe5) main_camera4_pane_g6

0x67ce,	// (0x00013008) main_camera4_pane_t2_ParamLimits

0x67ce,	// (0x00013008) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0001c185) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0001c185) main_camera4_pane_t

0x6826,	// (0x00013060) aid_touch_area_vid4_ParamLimits

0x6826,	// (0x00013060) aid_touch_area_vid4

0x6884,	// (0x000130be) main_video4_pane_g5_ParamLimits

0x6884,	// (0x000130be) main_video4_pane_g5

0x68ab,	// (0x000130e5) vid4_progress_pane_ParamLimits

0x68ab,	// (0x000130e5) vid4_progress_pane

0xd654,	// (0x00019e8e) main_cset_slider_pane_g18_ParamLimits

0xd654,	// (0x00019e8e) main_cset_slider_pane_g18

0xd8d1,	// (0x0001a10b) cell_cam4_burst_pane_g2_ParamLimits

0xd8d1,	// (0x0001a10b) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0001c2d5) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0001c2d5) cell_cam4_burst_pane_g

0xa09c,	// (0x000168d6) bg_cl_pane_ParamLimits

0xa09c,	// (0x000168d6) bg_cl_pane

0x786c,	// (0x000140a6) cl_header_pane_ParamLimits

0x786c,	// (0x000140a6) cl_header_pane

0x7880,	// (0x000140ba) cl_listscroll_pane_ParamLimits

0x7880,	// (0x000140ba) cl_listscroll_pane

0xdaaf,	// (0x0001a2e9) bg_cl_pane_g1

0xdab7,	// (0x0001a2f1) bg_cl_pane_g2

0xdabf,	// (0x0001a2f9) bg_cl_pane_g3

0xdac7,	// (0x0001a301) bg_cl_pane_g4

0xdacf,	// (0x0001a309) bg_cl_pane_g5

0xdad7,	// (0x0001a311) bg_cl_pane_g6

0xdadf,	// (0x0001a319) bg_cl_pane_g7

0xdae7,	// (0x0001a321) bg_cl_pane_g8

0xdaef,	// (0x0001a329) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0001c310) bg_cl_pane_g

0x7890,	// (0x000140ca) aid_height_cl_leading_ParamLimits

0x7890,	// (0x000140ca) aid_height_cl_leading

0x789c,	// (0x000140d6) aid_height_cl_text_ParamLimits

0x789c,	// (0x000140d6) aid_height_cl_text

0x9927,	// (0x00016161) bg_cl_header_pane_ParamLimits

0x9927,	// (0x00016161) bg_cl_header_pane

0x78bb,	// (0x000140f5) cl_header_pane_g1_ParamLimits

0x78bb,	// (0x000140f5) cl_header_pane_g1

0x78d1,	// (0x0001410b) cl_header_pane_t1_ParamLimits

0x78d1,	// (0x0001410b) cl_header_pane_t1

0xdaf7,	// (0x0001a331) cl_list_pane

0xd627,	// (0x00019e61) hc_scroll_pane_cp01

0xa5ee,	// (0x00016e28) bg_cl_header_pane_g1

0xd50d,	// (0x00019d47) bg_cl_header_pane_g2

0xa60e,	// (0x00016e48) bg_cl_header_pane_g3

0xd51d,	// (0x00019d57) bg_cl_header_pane_g4

0xd515,	// (0x00019d4f) bg_cl_header_pane_g5

0xd7b2,	// (0x00019fec) bg_cl_header_pane_g6

0xd535,	// (0x00019d6f) bg_cl_header_pane_g7

0xd53d,	// (0x00019d77) bg_cl_header_pane_g8

0xd52d,	// (0x00019d67) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0001c323) bg_cl_header_pane_g

0x78ea,	// (0x00014124) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x78ea,	// (0x00014124) hc_cl_list_double_graphic_heading_pane

0x78fb,	// (0x00014135) hc_cl_list_single_graphic_pane_ParamLimits

0x78fb,	// (0x00014135) hc_cl_list_single_graphic_pane

0x7911,	// (0x0001414b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7911,	// (0x0001414b) hc_cl_list_single_graphic_pane_g1

0x791d,	// (0x00014157) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x791d,	// (0x00014157) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0001c336) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0001c336) hc_cl_list_single_graphic_pane_g

0x7931,	// (0x0001416b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7931,	// (0x0001416b) hc_cl_list_single_graphic_pane_t1

0x7911,	// (0x0001414b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7911,	// (0x0001414b) hc_cl_list_double_graphic_heading_pane_g1

0x7946,	// (0x00014180) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7946,	// (0x00014180) hc_cl_list_double_graphic_heading_pane_g2

0x795a,	// (0x00014194) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x795a,	// (0x00014194) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0001c33b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0001c33b) hc_cl_list_double_graphic_heading_pane_g

0x796e,	// (0x000141a8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x796e,	// (0x000141a8) hc_cl_list_double_graphic_heading_pane_t1

0x7983,	// (0x000141bd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7983,	// (0x000141bd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0001c342) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0001c342) hc_cl_list_double_graphic_heading_pane_t

0xdb08,	// (0x0001a342) vid4_progress_pane_g1

0xdb14,	// (0x0001a34e) vid4_progress_pane_g2

0xdb20,	// (0x0001a35a) vid4_progress_pane_g3

0xdb2f,	// (0x0001a369) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0001c347) vid4_progress_pane_g

0xdb4d,	// (0x0001a387) vid4_progress_pane_t1

0xdb63,	// (0x0001a39d) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0001c352) vid4_progress_pane_t

0xdb8e,	// (0x0001a3c8) wait_bar_pane_cp07

0xc5e1,	// (0x00018e1b) blid_firmament_pane_ParamLimits

0xc624,	// (0x00018e5e) popup_blid_sat_info2_window_g1

0xc648,	// (0x00018e82) popup_blid_sat_info2_window_t3

0xc656,	// (0x00018e90) popup_blid_sat_info2_window_t4

0xc664,	// (0x00018e9e) popup_blid_sat_info2_window_t5

0xc672,	// (0x00018eac) popup_blid_sat_info2_window_t6

0xc682,	// (0x00018ebc) popup_blid_sat_info2_window_t7

0xc690,	// (0x00018eca) popup_blid_sat_info2_window_t8

0xc69e,	// (0x00018ed8) popup_blid_sat_info2_window_t9

0xc6ac,	// (0x00018ee6) popup_blid_sat_info2_window_t10

0xc76e,	// (0x00018fa8) aid_firma_cardinal_ParamLimits

0xc782,	// (0x00018fbc) blid_firmament_pane_t1_ParamLimits

0xc799,	// (0x00018fd3) blid_firmament_pane_t2_ParamLimits

0xc7b0,	// (0x00018fea) blid_firmament_pane_t3_ParamLimits

0xc7c7,	// (0x00019001) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0001bf74) blid_firmament_pane_t_ParamLimits

0xc7de,	// (0x00019018) blid_sat_info_pane_ParamLimits

0x9927,	// (0x00016161) main_cam_set_pane_ParamLimits

0x5daa,	// (0x000125e4) aid_size_cell_colour_35_ParamLimits

0x5dca,	// (0x00012604) aid_size_cell_colour_112_ParamLimits

0x5dea,	// (0x00012624) aid_size_cell_effect_ParamLimits

0xc2e8,	// (0x00018b22) bg_tb_trans_pane_cp02_ParamLimits

0xa892,	// (0x000170cc) heading_imed_pane_ParamLimits

0x5e0a,	// (0x00012644) listscroll_imed_pane_ParamLimits

0xb91a,	// (0x00018154) popup_call2_audio_first_window_g5_ParamLimits

0xb91a,	// (0x00018154) popup_call2_audio_first_window_g5

0x63a2,	// (0x00012bdc) aid_size_touch_image3_arrow_left_ParamLimits

0x63a2,	// (0x00012bdc) aid_size_touch_image3_arrow_left

0x63ce,	// (0x00012c08) aid_size_touch_image3_arrow_right_ParamLimits

0x63ce,	// (0x00012c08) aid_size_touch_image3_arrow_right

0xdb79,	// (0x0001a3b3) vid4_progress_pane_t3

0x611d,	// (0x00012957) main_hwr_training_symbol_option_pane_ParamLimits

0x611d,	// (0x00012957) main_hwr_training_symbol_option_pane

0xd000,	// (0x0001983a) popup_hwr_training_preview_window_ParamLimits

0xd000,	// (0x0001983a) popup_hwr_training_preview_window

0x613d,	// (0x00012977) hwr_training_navi_pane_g5_ParamLimits

0x613d,	// (0x00012977) hwr_training_navi_pane_g5

0xd4fb,	// (0x00019d35) popup_char_count_window

0x9927,	// (0x00016161) bg_popup_sub_pane_cp20_ParamLimits

0x741d,	// (0x00013c57) list_vitu2_match_list_pane_ParamLimits

0x742c,	// (0x00013c66) vitu2_page_scroll_pane_ParamLimits

0x742c,	// (0x00013c66) vitu2_page_scroll_pane

0xdbf8,	// (0x0001a432) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbf8,	// (0x0001a432) list_single_hwr_training_symbol_option_pane

0xdc0b,	// (0x0001a445) list_single_hwr_training_symbol_option_pane_g1

0xdc13,	// (0x0001a44d) list_single_hwr_training_symbol_option_pane_t1

0xdc21,	// (0x0001a45b) bg_button_pane_cp023

0xdc2a,	// (0x0001a464) bg_button_pane_cp024

0x79a2,	// (0x000141dc) vitu2_page_scroll_pane_g1

0x79aa,	// (0x000141e4) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0001c359) vitu2_page_scroll_pane_g

0x79b2,	// (0x000141ec) vitu2_page_scroll_pane_t1

0xdc5d,	// (0x0001a497) popup_char_count_window_g1

0xdc66,	// (0x0001a4a0) popup_char_count_window_g2

0xdc6f,	// (0x0001a4a9) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0001c35e) popup_char_count_window_g

0xdc78,	// (0x0001a4b2) popup_char_count_window_t1

0x98b7,	// (0x000160f1) main_vded2_pane

0xccff,	// (0x00019539) aid_size_cell_imed_line

0xcd09,	// (0x00019543) grid_imed_line_width_pane

0x690c,	// (0x00013146) vid4_indicators_pane_g4

0xdc86,	// (0x0001a4c0) cell_imed_line_width_pane_ParamLimits

0xdc86,	// (0x0001a4c0) cell_imed_line_width_pane

0xdc9a,	// (0x0001a4d4) cell_imed_line_width_pane_g1

0xdca3,	// (0x0001a4dd) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0001c365) cell_imed_line_width_pane_g

0x79c1,	// (0x000141fb) main_vded2_pane_g1_ParamLimits

0x79c1,	// (0x000141fb) main_vded2_pane_g1

0x79d7,	// (0x00014211) main_vded2_pane_g2_ParamLimits

0x79d7,	// (0x00014211) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0001c36a) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0001c36a) main_vded2_pane_g

0x79e9,	// (0x00014223) vded2_slider_pane_ParamLimits

0x79e9,	// (0x00014223) vded2_slider_pane

0x79f9,	// (0x00014233) aid_size_touch_vded2_end

0x7a03,	// (0x0001423d) aid_size_touch_vded2_playhead

0xdcab,	// (0x0001a4e5) aid_size_touch_vded2_start

0xdcb3,	// (0x0001a4ed) vded2_slider_bg_pane

0xdcbc,	// (0x0001a4f6) vded2_slider_pane_g1

0xdcc5,	// (0x0001a4ff) vded2_slider_pane_g2

0x7a0d,	// (0x00014247) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0001c36f) vded2_slider_pane_g

0xdccd,	// (0x0001a507) vded2_slider_bg_pane_g1

0xdcd6,	// (0x0001a510) vded2_slider_bg_pane_g2

0xdcdf,	// (0x0001a519) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0001c376) vded2_slider_bg_pane_g

0x3b6f,	// (0x000103a9) aid_postcard_touch_down_pane_ParamLimits

0x3b6f,	// (0x000103a9) aid_postcard_touch_down_pane

0x3b85,	// (0x000103bf) aid_postcard_touch_up_pane_ParamLimits

0x3b85,	// (0x000103bf) aid_postcard_touch_up_pane

0x98b7,	// (0x000160f1) main_blid2_pane

0xc2f6,	// (0x00018b30) popup_blid2_search_window

0x98b7,	// (0x000160f1) blid2_gps_pane

0x98b7,	// (0x000160f1) blid2_navig_pane

0x98b7,	// (0x000160f1) blid2_search_pane

0x98b7,	// (0x000160f1) blid2_tripm_pane

0x7a18,	// (0x00014252) blid2_search_pane_g1_ParamLimits

0x7a18,	// (0x00014252) blid2_search_pane_g1

0x7a32,	// (0x0001426c) blid2_search_pane_t1_ParamLimits

0x7a32,	// (0x0001426c) blid2_search_pane_t1

0x7a44,	// (0x0001427e) aid_size_cell_blid2_gps_ParamLimits

0x7a44,	// (0x0001427e) aid_size_cell_blid2_gps

0x7a5c,	// (0x00014296) blid2_gps_pane_g1_ParamLimits

0x7a5c,	// (0x00014296) blid2_gps_pane_g1

0x7a70,	// (0x000142aa) grid_blid2_satellite_pane_ParamLimits

0x7a70,	// (0x000142aa) grid_blid2_satellite_pane

0x7a8a,	// (0x000142c4) blid2_navig_pane_g1_ParamLimits

0x7a8a,	// (0x000142c4) blid2_navig_pane_g1

0x7a96,	// (0x000142d0) blid2_navig_pane_t1_ParamLimits

0x7a96,	// (0x000142d0) blid2_navig_pane_t1

0x7ab1,	// (0x000142eb) blid2_navig_pane_t2_ParamLimits

0x7ab1,	// (0x000142eb) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0001c37d) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0001c37d) blid2_navig_pane_t

0x7acc,	// (0x00014306) blid2_navig_ring_pane_ParamLimits

0x7acc,	// (0x00014306) blid2_navig_ring_pane

0x7ae5,	// (0x0001431f) blid2_speed_pane_ParamLimits

0x7ae5,	// (0x0001431f) blid2_speed_pane

0x7af1,	// (0x0001432b) blid2_tripm_pane_g1_ParamLimits

0x7af1,	// (0x0001432b) blid2_tripm_pane_g1

0x7b0a,	// (0x00014344) blid2_tripm_pane_g2_ParamLimits

0x7b0a,	// (0x00014344) blid2_tripm_pane_g2

0x7b1e,	// (0x00014358) blid2_tripm_pane_g3_ParamLimits

0x7b1e,	// (0x00014358) blid2_tripm_pane_g3

0x7b32,	// (0x0001436c) blid2_tripm_pane_g4_ParamLimits

0x7b32,	// (0x0001436c) blid2_tripm_pane_g4

0x7b46,	// (0x00014380) blid2_tripm_pane_g5_ParamLimits

0x7b46,	// (0x00014380) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0001c382) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0001c382) blid2_tripm_pane_g

0x7b6c,	// (0x000143a6) blid2_tripm_pane_t1_ParamLimits

0x7b6c,	// (0x000143a6) blid2_tripm_pane_t1

0x7b87,	// (0x000143c1) blid2_tripm_pane_t2_ParamLimits

0x7b87,	// (0x000143c1) blid2_tripm_pane_t2

0x7ba0,	// (0x000143da) blid2_tripm_pane_t3_ParamLimits

0x7ba0,	// (0x000143da) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0001c38f) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0001c38f) blid2_tripm_pane_t

0x7be7,	// (0x00014421) cell_blid2_satellite_pane_ParamLimits

0x7be7,	// (0x00014421) cell_blid2_satellite_pane

0x7c05,	// (0x0001443f) cell_blid2_satellite_pane_g1

0xdce8,	// (0x0001a522) cell_blid2_satellite_pane_t1

0xc7ee,	// (0x00019028) blid2_speed_pane_g1

0xdcf6,	// (0x0001a530) blid2_speed_pane_t1

0xdd04,	// (0x0001a53e) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0001c398) blid2_speed_pane_t

0xc7ee,	// (0x00019028) blid2_navig_ring_pane_g1

0x7c0e,	// (0x00014448) blid2_navig_ring_pane_g2

0x7c16,	// (0x00014450) blid2_navig_ring_pane_g3

0x7c1e,	// (0x00014458) blid2_navig_ring_pane_g4

0x7c26,	// (0x00014460) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0001c39d) blid2_navig_ring_pane_g

0x98b7,	// (0x000160f1) bg_popup_window_pane_cp011

0xdd12,	// (0x0001a54c) popup_blid2_search_window_g1

0xdd1a,	// (0x0001a554) popup_blid2_search_window_t1

0xdd28,	// (0x0001a562) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0001c3a8) popup_blid2_search_window_t

0xa4fd,	// (0x00016d37) main_browser_pane_g1

0xa09c,	// (0x000168d6) main_browser_pane_ParamLimits

0x9927,	// (0x00016161) bg_button_pane_cp011_ParamLimits

0x6cc1,	// (0x000134fb) cell_vitu2_function_pane_g1_ParamLimits

0x9927,	// (0x00016161) bg_popup_sub_pane_cp22_ParamLimits

0x759c,	// (0x00013dd6) input_focus_pane_cp08_ParamLimits

0x75a9,	// (0x00013de3) popup_vitu2_query_button_pane_ParamLimits

0x75a9,	// (0x00013de3) popup_vitu2_query_button_pane

0x757e,	// (0x00013db8) popup_vitu2_query_input_button_pane

0xd827,	// (0x0001a061) popup_vitu2_query_window_g1_ParamLimits

0x75ba,	// (0x00013df4) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0001c2af) popup_vitu2_query_window_g_ParamLimits

0x98b7,	// (0x000160f1) bg_button_pane_cp026

0x7c2e,	// (0x00014468) popup_vitu2_query_input_button_pane_g1

0x98b7,	// (0x000160f1) bg_button_pane_cp025

0xdd36,	// (0x0001a570) popup_vitu2_query_button_pane_t1

0x5209,	// (0x00011a43) main_mp3_pane_t6

0x5217,	// (0x00011a51) popup_slider_window_cp01

0xd468,	// (0x00019ca2) cam4_battery_pane

0xd478,	// (0x00019cb2) cam4_battery_pane_cp02

0x7998,	// (0x000141d2) cam4_battery_pane_cp01

0xdb00,	// (0x0001a33a) cam4_battery_pane_cp03

0xc7ee,	// (0x00019028) cam4_battery_pane_g1

0xdd44,	// (0x0001a57e) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0001c3ad) cam4_battery_pane_g

0xc6ba,	// (0x00018ef4) popup_blid_sat_info2_window_t11

0x3535,	// (0x0000fd6f) aid_size_touch_mv_arrow_left_ParamLimits

0x355e,	// (0x0000fd98) aid_size_touch_mv_arrow_right_ParamLimits

0xad8b,	// (0x000175c5) navi_pane_g1_ParamLimits

0x3587,	// (0x0000fdc1) navi_pane_g2_ParamLimits

0x35b5,	// (0x0000fdef) navi_pane_g3_ParamLimits

0xf44c,	// (0x0001bc86) navi_pane_g_ParamLimits

0x360d,	// (0x0000fe47) navi_pane_mv_t1_ParamLimits

0x5e16,	// (0x00012650) grid_imed_effect_pane_ParamLimits

0xa446,	// (0x00016c80) aid_placing_vt_slider_lsc

0xa44e,	// (0x00016c88) aid_placing_vt_slider_prt

0x9927,	// (0x00016161) bg_tb_trans_pane_cp01_ParamLimits

0xc97a,	// (0x000191b4) popup_image_details_window_g1_ParamLimits

0xc98d,	// (0x000191c7) popup_image_details_window_g2_ParamLimits

0xc9a2,	// (0x000191dc) popup_image_details_window_g3_ParamLimits

0xc9a2,	// (0x000191dc) popup_image_details_window_g3

0xf77f,	// (0x0001bfb9) popup_image_details_window_g_ParamLimits

0xc9b6,	// (0x000191f0) popup_image_details_window_t1_ParamLimits

0xc9c8,	// (0x00019202) popup_image_details_window_t2_ParamLimits

0xc9e1,	// (0x0001921b) popup_image_details_window_t3_ParamLimits

0xc9f5,	// (0x0001922f) popup_image_details_window_t4_ParamLimits

0xca10,	// (0x0001924a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0001bfc0) popup_image_details_window_t_ParamLimits

0x78a8,	// (0x000140e2) cl_header_name_pane_ParamLimits

0x78a8,	// (0x000140e2) cl_header_name_pane

0x7c36,	// (0x00014470) cl_header_name_pane_t1_ParamLimits

0x7c36,	// (0x00014470) cl_header_name_pane_t1

0x7c57,	// (0x00014491) cl_header_name_pane_t2_ParamLimits

0x7c57,	// (0x00014491) cl_header_name_pane_t2

0x7c99,	// (0x000144d3) cl_header_name_pane_t3_ParamLimits

0x7c99,	// (0x000144d3) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0001c3b2) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0001c3b2) cl_header_name_pane_t

0x35de,	// (0x0000fe18) navi_pane_mv_g2_ParamLimits

0xd49b,	// (0x00019cd5) field_vitu2_entry_pane_g1_ParamLimits

0xd4a7,	// (0x00019ce1) field_vitu2_entry_pane_g2_ParamLimits

0xd4b3,	// (0x00019ced) field_vitu2_entry_pane_g3_ParamLimits

0xd4b3,	// (0x00019ced) field_vitu2_entry_pane_g3

0xf974,	// (0x0001c1ae) field_vitu2_entry_pane_g_ParamLimits

0x6b61,	// (0x0001339b) cell_vitu2_itu_pane_g1_ParamLimits

0x6b71,	// (0x000133ab) cell_vitu2_itu_pane_g2_ParamLimits

0x6b71,	// (0x000133ab) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0001c1ba) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0001c1ba) cell_vitu2_itu_pane_g

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp05_ParamLimits

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp05

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp03

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp04

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp10_ParamLimits

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp10

0x784e,	// (0x00014088) bg_vkb2_func_pane_cp08

0x7834,	// (0x0001406e) bg_vkb2_func_pane_cp06

0x7842,	// (0x0001407c) bg_vkb2_func_pane_cp07

0xdc33,	// (0x0001a46d) bg_vkb2_func_pane_cp11_ParamLimits

0xdc33,	// (0x0001a46d) bg_vkb2_func_pane_cp11

0xdc48,	// (0x0001a482) bg_vkb2_func_pane_cp12_ParamLimits

0xdc48,	// (0x0001a482) bg_vkb2_func_pane_cp12

0x98b7,	// (0x000160f1) bg_vkb2_func_pane_cp09

0xd50d,	// (0x00019d47) bg_vkb2_func_pane_g1

0xa60e,	// (0x00016e48) bg_vkb2_func_pane_g2

0xd515,	// (0x00019d4f) bg_vkb2_func_pane_g3

0xd51d,	// (0x00019d57) bg_vkb2_func_pane_g4

0xd7b2,	// (0x00019fec) bg_vkb2_func_pane_g5

0xd535,	// (0x00019d6f) bg_vkb2_func_pane_g6

0xd53d,	// (0x00019d77) bg_vkb2_func_pane_g7

0xd52d,	// (0x00019d67) bg_vkb2_func_pane_g8

0xa5ee,	// (0x00016e28) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0001c3b9) bg_vkb2_func_pane_g

0x7b5a,	// (0x00014394) blid2_tripm_pane_g6_ParamLimits

0x7b5a,	// (0x00014394) blid2_tripm_pane_g6

0xd2c7,	// (0x00019b01) mp4_progress_pane_g1

0x7bd3,	// (0x0001440d) blid2_tripm_values_pane_ParamLimits

0x7bd3,	// (0x0001440d) blid2_tripm_values_pane

0x7cca,	// (0x00014504) blid2_tripm_values_pane_t1

0x7cd8,	// (0x00014512) blid2_tripm_values_pane_t2

0x7ce6,	// (0x00014520) blid2_tripm_values_pane_t3

0x7cf4,	// (0x0001452e) blid2_tripm_values_pane_t4

0x7d02,	// (0x0001453c) blid2_tripm_values_pane_t5

0x7d10,	// (0x0001454a) blid2_tripm_values_pane_t6

0x7d1e,	// (0x00014558) blid2_tripm_values_pane_t7

0x7d2c,	// (0x00014566) blid2_tripm_values_pane_t8

0x7d3a,	// (0x00014574) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0001c3cc) blid2_tripm_values_pane_t

0x2679,	// (0x0000eeb3) call_video_pane_t1_ParamLimits

0x268d,	// (0x0000eec7) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0001bb0f) call_video_pane_t_ParamLimits

0x3ad9,	// (0x00010313) msg_header_pane_g1_ParamLimits

0xafce,	// (0x00017808) msg_header_pane_g2_ParamLimits

0xafce,	// (0x00017808) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0001bd29) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0001bd29) msg_header_pane_g

0xa09c,	// (0x000168d6) main_clock2_pane_ParamLimits

0x5b42,	// (0x0001237c) grid_clock2_toolbar_pane_ParamLimits

0x5b42,	// (0x0001237c) grid_clock2_toolbar_pane

0x5b42,	// (0x0001237c) listscroll_clock2_pane_ParamLimits

0x5b42,	// (0x0001237c) listscroll_clock2_pane

0x5c1e,	// (0x00012458) main_clock2_pane_t3_ParamLimits

0x5c1e,	// (0x00012458) main_clock2_pane_t3

0x5c39,	// (0x00012473) main_clock2_pane_t4_ParamLimits

0x5c39,	// (0x00012473) main_clock2_pane_t4

0xdd4e,	// (0x0001a588) cell_clock2_toolbar_pane

0xdd56,	// (0x0001a590) cell_clock2_toolbar_pane_cp01

0xdd56,	// (0x0001a590) cell_clock2_toolbar_pane_cp02

0xdd5e,	// (0x0001a598) cell_clock2_toolbar_pane_cp03

0xdd66,	// (0x0001a5a0) list_clock2_pane

0xace2,	// (0x0001751c) scroll_pane_cp10

0xdd6e,	// (0x0001a5a8) list_single_clock2_pane_ParamLimits

0xdd6e,	// (0x0001a5a8) list_single_clock2_pane

0xae2b,	// (0x00017665) list_highlight_pane_cp08

0xdd7b,	// (0x0001a5b5) list_single_clock2_pane_t1

0xdd89,	// (0x0001a5c3) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0001c3df) list_single_clock2_pane_t

0x98b7,	// (0x000160f1) bg_button_pane_cp10

0xdd97,	// (0x0001a5d1) cell_clock2_toolbar_pane_g1

0x3afb,	// (0x00010335) aid_main_viewer_pane_g1_ParamLimits

0x3afb,	// (0x00010335) aid_main_viewer_pane_g1

0x3b09,	// (0x00010343) aid_main_viewer_pane_g2_ParamLimits

0x3b09,	// (0x00010343) aid_main_viewer_pane_g2

0x3b17,	// (0x00010351) aid_main_viewer_pane_g3_ParamLimits

0x3b17,	// (0x00010351) aid_main_viewer_pane_g3

0x3b26,	// (0x00010360) aid_main_viewer_pane_g4_ParamLimits

0x3b26,	// (0x00010360) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0001bd3a) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0001bd3a) aid_main_viewer_pane_g

0x442c,	// (0x00010c66) main_calc_pane_ParamLimits

0x4440,	// (0x00010c7a) main_dialer2_pane_ParamLimits

0x98b7,	// (0x000160f1) main_cam6_pane

0x98b7,	// (0x000160f1) main_vid6_pane

0x5b4e,	// (0x00012388) listscroll_gen_pane_cp06_ParamLimits

0x5b4e,	// (0x00012388) listscroll_gen_pane_cp06

0x5c54,	// (0x0001248e) main_clock2_pane_t5_ParamLimits

0x5c54,	// (0x0001248e) main_clock2_pane_t5

0x5cab,	// (0x000124e5) aid_call2_pane_cp10_ParamLimits

0x5cbd,	// (0x000124f7) aid_call_pane_cp10_ParamLimits

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ccf,	// (0x00012509) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ccf,	// (0x00012509) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad60,	// (0x0001759a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0001c070) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ce1,	// (0x0001251b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x634f,	// (0x00012b89) cell_dialer2_keypad_pane_g2_ParamLimits

0x634f,	// (0x00012b89) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0001c156) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0001c156) cell_dialer2_keypad_pane_g

0x636b,	// (0x00012ba5) cell_dialer2_keypad_pane_t1

0x6fd8,	// (0x00013812) main_cset_text2_pane_ParamLimits

0x6fd8,	// (0x00013812) main_cset_text2_pane

0xda07,	// (0x0001a241) area_vitu2_query_pane_g1_ParamLimits

0x77d3,	// (0x0001400d) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0001c2fc) area_vitu2_query_pane_g_ParamLimits

0xda8b,	// (0x0001a2c5) area_vitu2_query_pane_t7_ParamLimits

0xda8b,	// (0x0001a2c5) area_vitu2_query_pane_t7

0x7834,	// (0x0001406e) bg_button_pane_cp018_ParamLimits

0x7842,	// (0x0001407c) bg_button_pane_cp021_ParamLimits

0x784e,	// (0x00014088) bg_button_pane_cp022_ParamLimits

0x784e,	// (0x00014088) bg_vkb2_func_pane_cp08_ParamLimits

0x7834,	// (0x0001406e) bg_vkb2_func_pane_cp06_ParamLimits

0x7842,	// (0x0001407c) bg_vkb2_func_pane_cp07_ParamLimits

0x785d,	// (0x00014097) input_focus_pane_cp09_ParamLimits

0xdd9f,	// (0x0001a5d9) cam6_autofocus_pane_ParamLimits

0xdd9f,	// (0x0001a5d9) cam6_autofocus_pane

0x7d48,	// (0x00014582) cam6_image_uncrop_pane_ParamLimits

0x7d48,	// (0x00014582) cam6_image_uncrop_pane

0x7d57,	// (0x00014591) cam6_indi_pane_ParamLimits

0x7d57,	// (0x00014591) cam6_indi_pane

0x7d6d,	// (0x000145a7) cam6_mode_pane_ParamLimits

0x7d6d,	// (0x000145a7) cam6_mode_pane

0x7d7f,	// (0x000145b9) cam6_timer_pane_ParamLimits

0x7d7f,	// (0x000145b9) cam6_timer_pane

0x7d8b,	// (0x000145c5) cam6_zoom_pane_ParamLimits

0x7d8b,	// (0x000145c5) cam6_zoom_pane

0x7d97,	// (0x000145d1) cam6_mode_pane_g1_ParamLimits

0x7d97,	// (0x000145d1) cam6_mode_pane_g1

0x7da7,	// (0x000145e1) cam6_mode_pane_g2_ParamLimits

0x7da7,	// (0x000145e1) cam6_mode_pane_g2

0x7db7,	// (0x000145f1) cam6_mode_pane_g3_ParamLimits

0x7db7,	// (0x000145f1) cam6_mode_pane_g3

0x7dc7,	// (0x00014601) cam6_mode_pane_g4_ParamLimits

0x7dc7,	// (0x00014601) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0001c3e4) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0001c3e4) cam6_mode_pane_g

0xddad,	// (0x0001a5e7) bg_tb_trans_pane_cp08_ParamLimits

0xddad,	// (0x0001a5e7) bg_tb_trans_pane_cp08

0xddbb,	// (0x0001a5f5) cam6_battery_pane_ParamLimits

0xddbb,	// (0x0001a5f5) cam6_battery_pane

0xddd1,	// (0x0001a60b) cam6_indi_pane_g1_ParamLimits

0xddd1,	// (0x0001a60b) cam6_indi_pane_g1

0xdde3,	// (0x0001a61d) cam6_indi_pane_g2_ParamLimits

0xdde3,	// (0x0001a61d) cam6_indi_pane_g2

0xddf5,	// (0x0001a62f) cam6_indi_pane_g3_ParamLimits

0xddf5,	// (0x0001a62f) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0001c3ed) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0001c3ed) cam6_indi_pane_g

0xde07,	// (0x0001a641) cam6_indi_pane_t1_ParamLimits

0xde07,	// (0x0001a641) cam6_indi_pane_t1

0x7dd7,	// (0x00014611) cam6_autofocus_pane_g1

0x7ddf,	// (0x00014619) cam6_autofocus_pane_g2

0x7de7,	// (0x00014621) cam6_autofocus_pane_g3

0x7def,	// (0x00014629) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0001c3f4) cam6_autofocus_pane_g

0xde2d,	// (0x0001a667) cam6_timer_pane_g1

0xde35,	// (0x0001a66f) cam6_timer_pane_t1

0xde43,	// (0x0001a67d) cam6_zoom_cont_pane

0xde4b,	// (0x0001a685) cam6_zoom_pane_g1

0xde53,	// (0x0001a68d) cam6_zoom_pane_g2

0x7df7,	// (0x00014631) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0001c3fd) cam6_zoom_pane_g

0xc7ee,	// (0x00019028) cam6_battery_pane_g1

0xc7ee,	// (0x00019028) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0001bf7d) cam6_battery_pane_g

0xde5b,	// (0x0001a695) cam6_zoom_cont_pane_g1

0xde64,	// (0x0001a69e) cam6_zoom_cont_pane_g2

0xde6d,	// (0x0001a6a7) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0001c404) cam6_zoom_cont_pane_g

0x7e14,	// (0x0001464e) cam6_mode_pane_cp_ParamLimits

0x7e14,	// (0x0001464e) cam6_mode_pane_cp

0x7d8b,	// (0x000145c5) cam6_zoom_pane_cp_ParamLimits

0x7d8b,	// (0x000145c5) cam6_zoom_pane_cp

0x7e26,	// (0x00014660) vid6_image_uncrop_cif_pane_ParamLimits

0x7e26,	// (0x00014660) vid6_image_uncrop_cif_pane

0x7e36,	// (0x00014670) vid6_image_uncrop_nhd_pane_ParamLimits

0x7e36,	// (0x00014670) vid6_image_uncrop_nhd_pane

0x7d48,	// (0x00014582) vid6_image_uncrop_vga_pane_ParamLimits

0x7d48,	// (0x00014582) vid6_image_uncrop_vga_pane

0x7e45,	// (0x0001467f) vid6_image_uncrop_wvga_pane_ParamLimits

0x7e45,	// (0x0001467f) vid6_image_uncrop_wvga_pane

0x7e54,	// (0x0001468e) vid6_indi_pane_ParamLimits

0x7e54,	// (0x0001468e) vid6_indi_pane

0xddad,	// (0x0001a5e7) bg_tb_trans_pane_cp09_ParamLimits

0xddad,	// (0x0001a5e7) bg_tb_trans_pane_cp09

0xde9b,	// (0x0001a6d5) cam6_battery_pane_cp_ParamLimits

0xde9b,	// (0x0001a6d5) cam6_battery_pane_cp

0xdea7,	// (0x0001a6e1) vid6_indi_pane_g1_ParamLimits

0xdea7,	// (0x0001a6e1) vid6_indi_pane_g1

0xdeb9,	// (0x0001a6f3) vid6_indi_pane_g2_ParamLimits

0xdeb9,	// (0x0001a6f3) vid6_indi_pane_g2

0xdecb,	// (0x0001a705) vid6_indi_pane_g3_ParamLimits

0xdecb,	// (0x0001a705) vid6_indi_pane_g3

0xdee0,	// (0x0001a71a) vid6_indi_pane_g4_ParamLimits

0xdee0,	// (0x0001a71a) vid6_indi_pane_g4

0xdef5,	// (0x0001a72f) vid6_indi_pane_g5_ParamLimits

0xdef5,	// (0x0001a72f) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0001c40b) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0001c40b) vid6_indi_pane_g

0xdf0f,	// (0x0001a749) vid6_indi_pane_t1_ParamLimits

0xdf0f,	// (0x0001a749) vid6_indi_pane_t1

0xdf25,	// (0x0001a75f) vid6_indi_pane_t2_ParamLimits

0xdf25,	// (0x0001a75f) vid6_indi_pane_t2

0xdf4d,	// (0x0001a787) vid6_indi_pane_t3_ParamLimits

0xdf4d,	// (0x0001a787) vid6_indi_pane_t3

0xdf75,	// (0x0001a7af) vid6_indi_pane_t4_ParamLimits

0xdf75,	// (0x0001a7af) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0001c416) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0001c416) vid6_indi_pane_t

0xdf99,	// (0x0001a7d3) wait_bar_pane_cp08

0x7e6c,	// (0x000146a6) main_cset_text2_pane_t1_ParamLimits

0x7e6c,	// (0x000146a6) main_cset_text2_pane_t1

0x7dff,	// (0x00014639) listscroll_gen_pane_cp06_t1_ParamLimits

0x7dff,	// (0x00014639) listscroll_gen_pane_cp06_t1

0x98b7,	// (0x000160f1) main_cam6_set_pane

0xcacb,	// (0x00019305) bg_tb_trans_pane_cp06_ParamLimits

0x67ef,	// (0x00013029) cam4_indicators_pane_g1_ParamLimits

0x67fc,	// (0x00013036) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0001c18a) cam4_indicators_pane_g_ParamLimits

0x6814,	// (0x0001304e) cam4_indicators_pane_t1_ParamLimits

0xcb08,	// (0x00019342) bg_tb_trans_pane_cp07_ParamLimits

0x67ef,	// (0x00013029) vid4_indicators_pane_g1_ParamLimits

0x68f2,	// (0x0001312c) vid4_indicators_pane_g2_ParamLimits

0x68ff,	// (0x00013139) vid4_indicators_pane_g3_ParamLimits

0x690c,	// (0x00013146) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0001c19c) vid4_indicators_pane_g_ParamLimits

0x6924,	// (0x0001315e) vid4_indicators_pane_t1_ParamLimits

0xdb08,	// (0x0001a342) vid4_progress_pane_g1_ParamLimits

0xdb14,	// (0x0001a34e) vid4_progress_pane_g2_ParamLimits

0xdb20,	// (0x0001a35a) vid4_progress_pane_g3_ParamLimits

0xdb2f,	// (0x0001a369) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0001c347) vid4_progress_pane_g_ParamLimits

0xdb4d,	// (0x0001a387) vid4_progress_pane_t1_ParamLimits

0xdb63,	// (0x0001a39d) vid4_progress_pane_t2_ParamLimits

0xdb79,	// (0x0001a3b3) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0001c352) vid4_progress_pane_t_ParamLimits

0xdb8e,	// (0x0001a3c8) wait_bar_pane_cp07_ParamLimits

0x7e89,	// (0x000146c3) main_cam6_set_pane_g2_ParamLimits

0x7e89,	// (0x000146c3) main_cam6_set_pane_g2

0x7ead,	// (0x000146e7) main_cset6_listscroll_pane_ParamLimits

0x7ead,	// (0x000146e7) main_cset6_listscroll_pane

0x7ecd,	// (0x00014707) main_cset6_slider_pane_ParamLimits

0x7ecd,	// (0x00014707) main_cset6_slider_pane

0x7ee3,	// (0x0001471d) main_cset6_text2_pane_ParamLimits

0x7ee3,	// (0x0001471d) main_cset6_text2_pane

0xdfa8,	// (0x0001a7e2) main_cset6_text_pane

0xdfb0,	// (0x0001a7ea) main_cset_list_pane_copy1_ParamLimits

0xdfb0,	// (0x0001a7ea) main_cset_list_pane_copy1

0xdfc0,	// (0x0001a7fa) scroll_pane_cp028_copy1

0x7ef1,	// (0x0001472b) cset_list_set_pane_copy1

0x7f02,	// (0x0001473c) aid_position_infowindow_above_copy1

0x7f0a,	// (0x00014744) aid_position_infowindow_below_copy1

0x7f12,	// (0x0001474c) cset_list_set_pane_g1_copy1

0x7f1a,	// (0x00014754) cset_list_set_pane_g3_copy1_ParamLimits

0x7f1a,	// (0x00014754) cset_list_set_pane_g3_copy1

0x7f29,	// (0x00014763) cset_list_set_pane_t1_copy1_ParamLimits

0x7f29,	// (0x00014763) cset_list_set_pane_t1_copy1

0x9927,	// (0x00016161) list_highlight_pane_cp021_copy1_ParamLimits

0x9927,	// (0x00016161) list_highlight_pane_cp021_copy1

0xdfc9,	// (0x0001a803) cset6_slider_pane_ParamLimits

0xdfc9,	// (0x0001a803) cset6_slider_pane

0xdff5,	// (0x0001a82f) main_cset6_slider_pane_g1_ParamLimits

0xdff5,	// (0x0001a82f) main_cset6_slider_pane_g1

0x7f3e,	// (0x00014778) main_cset6_slider_pane_g2_ParamLimits

0x7f3e,	// (0x00014778) main_cset6_slider_pane_g2

0xe01d,	// (0x0001a857) main_cset6_slider_pane_g3_ParamLimits

0xe01d,	// (0x0001a857) main_cset6_slider_pane_g3

0x7f66,	// (0x000147a0) main_cset6_slider_pane_g4_ParamLimits

0x7f66,	// (0x000147a0) main_cset6_slider_pane_g4

0x7f72,	// (0x000147ac) main_cset6_slider_pane_g5_ParamLimits

0x7f72,	// (0x000147ac) main_cset6_slider_pane_g5

0xd63c,	// (0x00019e76) main_cset6_slider_pane_g7_ParamLimits

0xd63c,	// (0x00019e76) main_cset6_slider_pane_g7

0xd648,	// (0x00019e82) main_cset6_slider_pane_g8_ParamLimits

0xd648,	// (0x00019e82) main_cset6_slider_pane_g8

0x7085,	// (0x000138bf) main_cset6_slider_pane_g9_ParamLimits

0x7085,	// (0x000138bf) main_cset6_slider_pane_g9

0x7091,	// (0x000138cb) main_cset6_slider_pane_g10_ParamLimits

0x7091,	// (0x000138cb) main_cset6_slider_pane_g10

0x709d,	// (0x000138d7) main_cset6_slider_pane_g11_ParamLimits

0x709d,	// (0x000138d7) main_cset6_slider_pane_g11

0x70a9,	// (0x000138e3) main_cset6_slider_pane_g12_ParamLimits

0x70a9,	// (0x000138e3) main_cset6_slider_pane_g12

0x70b5,	// (0x000138ef) main_cset6_slider_pane_g13_ParamLimits

0x70b5,	// (0x000138ef) main_cset6_slider_pane_g13

0x70c1,	// (0x000138fb) main_cset6_slider_pane_g14_ParamLimits

0x70c1,	// (0x000138fb) main_cset6_slider_pane_g14

0x7f7e,	// (0x000147b8) main_cset6_slider_pane_g15_ParamLimits

0x7f7e,	// (0x000147b8) main_cset6_slider_pane_g15

0x70e5,	// (0x0001391f) main_cset6_slider_pane_g16_ParamLimits

0x70e5,	// (0x0001391f) main_cset6_slider_pane_g16

0x70f1,	// (0x0001392b) main_cset6_slider_pane_g17_ParamLimits

0x70f1,	// (0x0001392b) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0001c41f) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0001c41f) main_cset6_slider_pane_g

0xe029,	// (0x0001a863) main_cset6_slider_pane_t1_ParamLimits

0xe029,	// (0x0001a863) main_cset6_slider_pane_t1

0x7fae,	// (0x000147e8) main_cset6_slider_pane_t2_ParamLimits

0x7fae,	// (0x000147e8) main_cset6_slider_pane_t2

0x7fd9,	// (0x00014813) main_cset6_slider_pane_t3_ParamLimits

0x7fd9,	// (0x00014813) main_cset6_slider_pane_t3

0x8004,	// (0x0001483e) main_cset6_slider_pane_t4_ParamLimits

0x8004,	// (0x0001483e) main_cset6_slider_pane_t4

0x802f,	// (0x00014869) main_cset6_slider_pane_t5_ParamLimits

0x802f,	// (0x00014869) main_cset6_slider_pane_t5

0xe06a,	// (0x0001a8a4) main_cset6_slider_pane_t7_ParamLimits

0xe06a,	// (0x0001a8a4) main_cset6_slider_pane_t7

0x805a,	// (0x00014894) main_cset6_slider_pane_t8_ParamLimits

0x805a,	// (0x00014894) main_cset6_slider_pane_t8

0x807e,	// (0x000148b8) main_cset6_slider_pane_t9_ParamLimits

0x807e,	// (0x000148b8) main_cset6_slider_pane_t9

0x80a2,	// (0x000148dc) main_cset6_slider_pane_t10_ParamLimits

0x80a2,	// (0x000148dc) main_cset6_slider_pane_t10

0x80c6,	// (0x00014900) main_cset6_slider_pane_t11_ParamLimits

0x80c6,	// (0x00014900) main_cset6_slider_pane_t11

0xe0a0,	// (0x0001a8da) main_cset6_slider_pane_t14_ParamLimits

0xe0a0,	// (0x0001a8da) main_cset6_slider_pane_t14

0xe0d9,	// (0x0001a913) main_cset6_slider_pane_t15_ParamLimits

0xe0d9,	// (0x0001a913) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0001c444) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0001c444) main_cset6_slider_pane_t

0xd744,	// (0x00019f7e) cset_slider_pane_g1_copy1

0xd74d,	// (0x00019f87) cset_slider_pane_g2_copy1

0xd756,	// (0x00019f90) cset_slider_pane_g3_copy1

0x98b7,	// (0x000160f1) bg_popup_sub_pane_cp011_copy1

0xd833,	// (0x0001a06d) main_cset_text_pane_g1_copy1

0xd83b,	// (0x0001a075) main_cset_text_pane_t1_copy1

0xd849,	// (0x0001a083) main_cset_text_pane_t2_copy1

0xd857,	// (0x0001a091) main_cset_text_pane_t3_copy1

0xd865,	// (0x0001a09f) main_cset_text_pane_t4_copy1

0xd873,	// (0x0001a0ad) main_cset_text_pane_t5_copy1

0xd881,	// (0x0001a0bb) main_cset_text_pane_t6_copy1

0xd88f,	// (0x0001a0c9) main_cset_text_pane_t7_copy1

0x80ea,	// (0x00014924) main_cset_text2_pane_t1_copy1

0x98b7,	// (0x000160f1) main_ncimui_pane

0x4682,	// (0x00010ebc) popup_query_ncimui_window_ParamLimits

0x4682,	// (0x00010ebc) popup_query_ncimui_window

0xcabf,	// (0x000192f9) field_cale_ev2_pane_g4_ParamLimits

0xcabf,	// (0x000192f9) field_cale_ev2_pane_g4

0x622f,	// (0x00012a69) cell_video_dialer_keypad_pane_g2_ParamLimits

0x622f,	// (0x00012a69) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0001c131) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0001c131) cell_video_dialer_keypad_pane_g

0x6247,	// (0x00012a81) cell_video_dialer_keypad_pane_t1

0x98b7,	// (0x000160f1) bg_popup_window_pane_cp012

0xabbf,	// (0x000173f9) heading_pane_cp06

0xe201,	// (0x0001aa3b) ncim_query_content_pane

0x98b7,	// (0x000160f1) bg_popup_heading_pane_cp01

0xe209,	// (0x0001aa43) ncim_heading_pane_t1

0xe217,	// (0x0001aa51) ncim_indicator_popup_pane

0xe229,	// (0x0001aa63) ncim_query_button_pane

0xe23d,	// (0x0001aa77) ncim_query_content_pane_t1

0xe24f,	// (0x0001aa89) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0001c483) ncim_query_content_pane_t

0xe289,	// (0x0001aac3) ncim_query_list_pane

0xe29b,	// (0x0001aad5) ncim_query_popup_pane

0xe217,	// (0x0001aa51) ncim_indicator_popup_pane_ParamLimits

0x81cc,	// (0x00014a06) ncim_query_content_pane_g1_ParamLimits

0x81cc,	// (0x00014a06) ncim_query_content_pane_g1

0xe23d,	// (0x0001aa77) ncim_query_content_pane_t1_ParamLimits

0xe24f,	// (0x0001aa89) ncim_query_content_pane_t2_ParamLimits

0x81d8,	// (0x00014a12) ncim_query_content_pane_t3_ParamLimits

0x81d8,	// (0x00014a12) ncim_query_content_pane_t3

0x8200,	// (0x00014a3a) ncim_query_content_pane_t4_ParamLimits

0x8200,	// (0x00014a3a) ncim_query_content_pane_t4

0x8228,	// (0x00014a62) ncim_query_content_pane_t5_ParamLimits

0x8228,	// (0x00014a62) ncim_query_content_pane_t5

0xe261,	// (0x0001aa9b) ncim_query_content_pane_t6_ParamLimits

0xe261,	// (0x0001aa9b) ncim_query_content_pane_t6

0xfc49,	// (0x0001c483) ncim_query_content_pane_t_ParamLimits

0xe289,	// (0x0001aac3) ncim_query_list_pane_ParamLimits

0xe29b,	// (0x0001aad5) ncim_query_popup_pane_ParamLimits

0xe2af,	// (0x0001aae9) wait_bar_pane_cp04

0x98b7,	// (0x000160f1) input_focus_pane_cp011

0xe2b7,	// (0x0001aaf1) ncim_query_popup_pane_t1

0xe2c5,	// (0x0001aaff) ncim_list_query_list_pane_ParamLimits

0xe2c5,	// (0x0001aaff) ncim_list_query_list_pane

0x98b7,	// (0x000160f1) bg_button_pane_cp027

0xe2d2,	// (0x0001ab0c) ncim_query_button_pane_g1

0x98b7,	// (0x000160f1) list_highlight_pane_cp012

0xe2dc,	// (0x0001ab16) ncim_list_query_list_pane_g1

0xe2e4,	// (0x0001ab1e) ncim_list_query_list_pane_t1

0x6808,	// (0x00013042) cam4_indicators_pane_g3_ParamLimits

0x6808,	// (0x00013042) cam4_indicators_pane_g3

0x6918,	// (0x00013152) vid4_indicators_pane_g5_ParamLimits

0x6918,	// (0x00013152) vid4_indicators_pane_g5

0xdb3e,	// (0x0001a378) vid4_progress_pane_g5_ParamLimits

0xdb3e,	// (0x0001a378) vid4_progress_pane_g5

0x8114,	// (0x0001494e) main_ncimui_pane_g1

0x815a,	// (0x00014994) ncimui_group_query_pane_ParamLimits

0x815a,	// (0x00014994) ncimui_group_query_pane

0x818e,	// (0x000149c8) ncimui_list_pane_ParamLimits

0x818e,	// (0x000149c8) ncimui_list_pane

0x81a8,	// (0x000149e2) ncimui_text_pane_ParamLimits

0x81a8,	// (0x000149e2) ncimui_text_pane

0x8250,	// (0x00014a8a) ncimui_text_pane_t1_ParamLimits

0x8250,	// (0x00014a8a) ncimui_text_pane_t1

0xe2f2,	// (0x0001ab2c) ncimui_list_single_graphic_pane_ParamLimits

0xe2f2,	// (0x0001ab2c) ncimui_list_single_graphic_pane

0x826d,	// (0x00014aa7) ncimui_query_pane_ParamLimits

0x826d,	// (0x00014aa7) ncimui_query_pane

0x98b7,	// (0x000160f1) list_highlight_pane_cp013

0xe302,	// (0x0001ab3c) ncim_list_query_list_pane_t1_copy1

0xe2dc,	// (0x0001ab16) ncim_list_single_graphic_pane_g1

0xe310,	// (0x0001ab4a) ncim_query_button_pane_cp01

0xe318,	// (0x0001ab52) ncim_query_entry_pane_ParamLimits

0xe318,	// (0x0001ab52) ncim_query_entry_pane

0xe328,	// (0x0001ab62) ncimui_query_pane_g1

0xe330,	// (0x0001ab6a) ncimui_query_pane_t1_ParamLimits

0xe330,	// (0x0001ab6a) ncimui_query_pane_t1

0x98b7,	// (0x000160f1) input_focus_pane_cp012

0xe2b7,	// (0x0001aaf1) ncim_query_entry_pane_t1

0xa09c,	// (0x000168d6) main_im_pane_ParamLimits

0x9927,	// (0x00016161) main_mobtv_pane_ParamLimits

0x9927,	// (0x00016161) main_mobtv_pane

0x7f96,	// (0x000147d0) main_cset6_slider_pane_g18_ParamLimits

0x7f96,	// (0x000147d0) main_cset6_slider_pane_g18

0x7fa2,	// (0x000147dc) main_cset6_slider_pane_g19_ParamLimits

0x7fa2,	// (0x000147dc) main_cset6_slider_pane_g19

0xde75,	// (0x0001a6af) bg_main_mobtv_pane_ParamLimits

0xde75,	// (0x0001a6af) bg_main_mobtv_pane

0x827d,	// (0x00014ab7) main_mobtv_info_pane

0x8286,	// (0x00014ac0) main_mobtv_loading_pane_ParamLimits

0x8286,	// (0x00014ac0) main_mobtv_loading_pane

0xe346,	// (0x0001ab80) main_mobtv_pg_channel_list_pane

0xe350,	// (0x0001ab8a) main_mobtv_pg_hdr_pane

0x8293,	// (0x00014acd) main_mobtv_programe_curr_pane_ParamLimits

0x8293,	// (0x00014acd) main_mobtv_programe_curr_pane

0x82a0,	// (0x00014ada) main_mobtv_programe_next_pane_ParamLimits

0x82a0,	// (0x00014ada) main_mobtv_programe_next_pane

0xe359,	// (0x0001ab93) popup_mobtv_noti_window

0xc7ee,	// (0x00019028) main_tv_pg_hdr_pane_g1

0xe361,	// (0x0001ab9b) main_tv_pg_hdr_pane_g2

0xe369,	// (0x0001aba3) main_tv_pg_hdr_pane_g3

0xe371,	// (0x0001abab) main_tv_pg_hdr_pane_g4

0xe379,	// (0x0001abb3) main_tv_pg_hdr_pane_g5

0xe383,	// (0x0001abbd) main_tv_pg_hdr_pane_g6

0xe38d,	// (0x0001abc7) main_tv_pg_hdr_pane_g7

0xe397,	// (0x0001abd1) main_tv_pg_hdr_pane_g8

0xe3a1,	// (0x0001abdb) main_tv_pg_hdr_pane_g9

0xe3ab,	// (0x0001abe5) main_tv_pg_hdr_pane_g10

0xe3b5,	// (0x0001abef) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0001c490) main_tv_pg_hdr_pane_g

0xe3bf,	// (0x0001abf9) main_tv_pg_hdr_pane_t1

0xe3cd,	// (0x0001ac07) main_tv_pg_hdr_pane_t2

0xe3db,	// (0x0001ac15) main_tv_pg_hdr_pane_t3

0xe3eb,	// (0x0001ac25) main_tv_pg_hdr_pane_t4

0xe3fb,	// (0x0001ac35) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0001c4a7) main_tv_pg_hdr_pane_t

0xe40b,	// (0x0001ac45) single_mobtv_pg_channel_pane_ParamLimits

0xe40b,	// (0x0001ac45) single_mobtv_pg_channel_pane

0xe41d,	// (0x0001ac57) single_mobtv_pg_channel_table_pane

0xe426,	// (0x0001ac60) single_mobtv_pg_channel_thumb_pane

0xe42f,	// (0x0001ac69) single_tv_pg_channel_pane_g1

0xe438,	// (0x0001ac72) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0001c4b2) single_tv_pg_channel_pane_g

0xca5a,	// (0x00019294) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca5a,	// (0x00019294) bg_single_mobtv_pg_channel_thumb_pane

0xe441,	// (0x0001ac7b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe441,	// (0x0001ac7b) single_mobtv_pg_channel_thumb_pane_g1

0xe44f,	// (0x0001ac89) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe44f,	// (0x0001ac89) single_mobtv_pg_channel_thumb_pane_g2

0xe45b,	// (0x0001ac95) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe45b,	// (0x0001ac95) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0001c4b7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0001c4b7) single_mobtv_pg_channel_thumb_pane_g

0xe467,	// (0x0001aca1) single_mobtv_pg_channel_thumb_pane_t1

0xe475,	// (0x0001acaf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0001c4be) single_mobtv_pg_channel_thumb_pane_t

0xc7ee,	// (0x00019028) bg_single_mobtv_pg_channel_table_pane_g1

0xc7ee,	// (0x00019028) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0001bf7d) bg_single_mobtv_pg_channel_table_pane_g

0xe483,	// (0x0001acbd) single_mobtv_pg_channel_table_pane_t1

0xe491,	// (0x0001accb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0001c4c3) single_mobtv_pg_channel_table_pane_t

0x82b5,	// (0x00014aef) main_mobtv_info_pane_g1_ParamLimits

0x82b5,	// (0x00014aef) main_mobtv_info_pane_g1

0x82d3,	// (0x00014b0d) main_mobtv_info_pane_t1_ParamLimits

0x82d3,	// (0x00014b0d) main_mobtv_info_pane_t1

0x834b,	// (0x00014b85) main_mobtv_info_pane_t2_ParamLimits

0x834b,	// (0x00014b85) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0001c4cd) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0001c4cd) main_mobtv_info_pane_t

0x83da,	// (0x00014c14) wait_bar_pane_cp05

0x83ec,	// (0x00014c26) main_mobtv_loading_pane_g1_ParamLimits

0x83ec,	// (0x00014c26) main_mobtv_loading_pane_g1

0x83ff,	// (0x00014c39) main_mobtv_loading_pane_g2_ParamLimits

0x83ff,	// (0x00014c39) main_mobtv_loading_pane_g2

0x840b,	// (0x00014c45) main_mobtv_loading_pane_g3_ParamLimits

0x840b,	// (0x00014c45) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0001c4d4) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0001c4d4) main_mobtv_loading_pane_g

0xe49f,	// (0x0001acd9) main_mobtv_loading_pane_t1_ParamLimits

0xe49f,	// (0x0001acd9) main_mobtv_loading_pane_t1

0xe4b7,	// (0x0001acf1) main_mobtv_loading_pane_t2_ParamLimits

0xe4b7,	// (0x0001acf1) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0001c4db) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0001c4db) main_mobtv_loading_pane_t

0x841e,	// (0x00014c58) wait_bar_pane_cp06_ParamLimits

0x841e,	// (0x00014c58) wait_bar_pane_cp06

0xe4db,	// (0x0001ad15) main_mobtv_programe_curr_pane_t1

0xe4e9,	// (0x0001ad23) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0001c4e0) main_mobtv_programe_curr_pane_t

0xe4f7,	// (0x0001ad31) main_mobtv_programe_next_pane_t1

0xe505,	// (0x0001ad3f) main_mobtv_programe_next_pane_t2

0xe513,	// (0x0001ad4d) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0001c4e5) main_mobtv_programe_next_pane_t

0x98b7,	// (0x000160f1) bg_popup_mobtv_noti_window_pane

0xe521,	// (0x0001ad5b) popup_mobtv_noti_window_g1

0xe529,	// (0x0001ad63) popup_mobtv_noti_window_t1

0xe537,	// (0x0001ad71) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0001c4ec) popup_mobtv_noti_window_t

0xc7ee,	// (0x00019028) bg_popup_mobtv_noti_window_pane_g1

0x98b7,	// (0x000160f1) sc_clock_pane

0x98b7,	// (0x000160f1) main_fs_bigclock_pane

0x7bbd,	// (0x000143f7) blid2_tripm_pane_t4_ParamLimits

0x7bbd,	// (0x000143f7) blid2_tripm_pane_t4

0x842d,	// (0x00014c67) sc_clock_pane_g1_ParamLimits

0x842d,	// (0x00014c67) sc_clock_pane_g1

0x843f,	// (0x00014c79) sc_clock_pane_t1_ParamLimits

0x843f,	// (0x00014c79) sc_clock_pane_t1

0x8461,	// (0x00014c9b) sc_clock_pane_t2_ParamLimits

0x8461,	// (0x00014c9b) sc_clock_pane_t2

0x8479,	// (0x00014cb3) sc_clock_pane_t3_ParamLimits

0x8479,	// (0x00014cb3) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0001c4f1) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0001c4f1) sc_clock_pane_t

0x922a,	// (0x00015a64) main_fs_bigclock_indicator_pane_ParamLimits

0x922a,	// (0x00015a64) main_fs_bigclock_indicator_pane

0xca2a,	// (0x00019264) main_fs_bigclock_pane_g1_ParamLimits

0xca2a,	// (0x00019264) main_fs_bigclock_pane_g1

0x9236,	// (0x00015a70) main_fs_bigclock_pane_t1_ParamLimits

0x9236,	// (0x00015a70) main_fs_bigclock_pane_t1

0x9248,	// (0x00015a82) main_fs_bigclock_pane_t2_ParamLimits

0x9248,	// (0x00015a82) main_fs_bigclock_pane_t2

0x925c,	// (0x00015a96) main_fs_bigclock_pane_t3_ParamLimits

0x925c,	// (0x00015a96) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x0001c6eb) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x0001c6eb) main_fs_bigclock_pane_t

0x005a,	// (0x0000c894) main_fs_bigclock_indicator_pane_g1

0xe231,	// (0x0001aa6b) ncim_query_content_pane_g2_ParamLimits

0xe231,	// (0x0001aa6b) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0001c47e) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0001c47e) ncim_query_content_pane_g

0x8490,	// (0x00014cca) sc_clock_pane_t4_ParamLimits

0x8490,	// (0x00014cca) sc_clock_pane_t4

0x9927,	// (0x00016161) main_radioblah_pane

0xd3e2,	// (0x00019c1c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd3e2,	// (0x00019c1c) cell_call4_button_pane_t1_copy1

0x811c,	// (0x00014956) main_ncimui_pane_t1_ParamLimits

0x811c,	// (0x00014956) main_ncimui_pane_t1

0x812e,	// (0x00014968) main_ncimui_pane_t2_ParamLimits

0x812e,	// (0x00014968) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0001c477) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0001c477) main_ncimui_pane_t

0xe665,	// (0x0001ae9f) main_radioblah_anim_pane_ParamLimits

0xe665,	// (0x0001ae9f) main_radioblah_anim_pane

0xe676,	// (0x0001aeb0) main_radioblah_info_pane_ParamLimits

0xe676,	// (0x0001aeb0) main_radioblah_info_pane

0xe68a,	// (0x0001aec4) main_radioblah_pane_t1_ParamLimits

0xe68a,	// (0x0001aec4) main_radioblah_pane_t1

0xe6a6,	// (0x0001aee0) main_radioblah_pane_t2_ParamLimits

0xe6a6,	// (0x0001aee0) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0001c512) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0001c512) main_radioblah_pane_t

0x8539,	// (0x00014d73) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8539,	// (0x00014d73) main_radioblah_rocker_ctrl_pane

0xe6ee,	// (0x0001af28) main_radioblah_info_pane_t1_ParamLimits

0xe6ee,	// (0x0001af28) main_radioblah_info_pane_t1

0x8591,	// (0x00014dcb) main_radioblah_info_pane_t2_ParamLimits

0x8591,	// (0x00014dcb) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0001c51b) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0001c51b) main_radioblah_info_pane_t

0xc7ee,	// (0x00019028) main_radioblah_rocker_ctrl_pane_g1

0x8641,	// (0x00014e7b) main_radioblah_rocker_ctrl_pane_g2

0x8649,	// (0x00014e83) main_radioblah_rocker_ctrl_pane_g3

0x8651,	// (0x00014e8b) main_radioblah_rocker_ctrl_pane_g4

0x8659,	// (0x00014e93) main_radioblah_rocker_ctrl_pane_g5

0x8661,	// (0x00014e9b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0001c524) main_radioblah_rocker_ctrl_pane_g

0x80ea,	// (0x00014924) main_cset_text2_pane_t1_copy1_ParamLimits

0xd460,	// (0x00019c9a) cam4_image_uncrop_qvga_pane

0xd470,	// (0x00019caa) vid4_image_uncrop_qcif_pane

0xdd9f,	// (0x0001a5d9) cam6_image_uncrop_qvga_pane_ParamLimits

0xdd9f,	// (0x0001a5d9) cam6_image_uncrop_qvga_pane

0xde8b,	// (0x0001a6c5) vid6_image_uncrop_qcif_pane_ParamLimits

0xde8b,	// (0x0001a6c5) vid6_image_uncrop_qcif_pane

0x98b7,	// (0x000160f1) bg_popup_preview_window_pane_cp03

0xe1e3,	// (0x0001aa1d) list_cset_text2_pane

0xe1eb,	// (0x0001aa25) main_cset6_text2_pane_g1

0xe1f3,	// (0x0001aa2d) main_cset6_text2_pane_t1

0x8669,	// (0x00014ea3) list_cset_text2_pane_t1_ParamLimits

0x8669,	// (0x00014ea3) list_cset_text2_pane_t1

0x9927,	// (0x00016161) main_radioblah_pane_ParamLimits

0x83c6,	// (0x00014c00) main_mobtv_info_pane_t3_ParamLimits

0x83c6,	// (0x00014c00) main_mobtv_info_pane_t3

0x8527,	// (0x00014d61) main_radioblah_pane_g1

0x8561,	// (0x00014d9b) main_radioblah_info_pane_g1

0x85e6,	// (0x00014e20) main_radioblah_info_pane_t3_ParamLimits

0x85e6,	// (0x00014e20) main_radioblah_info_pane_t3

0x30fa,	// (0x0000f934) highlight_cell_cale_month_pane_ParamLimits

0x30fa,	// (0x0000f934) highlight_cell_cale_month_pane

0x98b7,	// (0x000160f1) main_phob_fisheye_pane

0xcb62,	// (0x0001939c) scroll_pane_cp0031_ParamLimits

0xcb62,	// (0x0001939c) scroll_pane_cp0031

0xdf99,	// (0x0001a7d3) wait_bar_pane_cp08_ParamLimits

0x7ef1,	// (0x0001472b) cset_list_set_pane_copy1_ParamLimits

0xe728,	// (0x0001af62) highlight_cell_cale_month_pane_g1

0x8682,	// (0x00014ebc) highlight_cell_cale_month_pane_t1

0xdaf7,	// (0x0001a331) list_gen_pane_cp01

0xd627,	// (0x00019e61) scroll_pane_01

0x019b,	// (0x0000c9d5) list_single_double_fisheye_pane

0x8690,	// (0x00014eca) list_double_fisheye_pane_g1_ParamLimits

0x8690,	// (0x00014eca) list_double_fisheye_pane_g1

0x869c,	// (0x00014ed6) list_double_fisheye_pane_g2_ParamLimits

0x869c,	// (0x00014ed6) list_double_fisheye_pane_g2

0x86b0,	// (0x00014eea) list_double_fisheye_pane_g3_ParamLimits

0x86b0,	// (0x00014eea) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0001c531) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0001c531) list_double_fisheye_pane_g

0x86d9,	// (0x00014f13) list_double_fisheye_pane_t1_ParamLimits

0x86d9,	// (0x00014f13) list_double_fisheye_pane_t1

0x86f4,	// (0x00014f2e) list_double_fisheye_pane_t2_ParamLimits

0x86f4,	// (0x00014f2e) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0001c53c) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0001c53c) list_double_fisheye_pane_t

0x98b7,	// (0x000160f1) main_call5_pane

0x84bb,	// (0x00014cf5) sc_swipe_pane_ParamLimits

0x84bb,	// (0x00014cf5) sc_swipe_pane

0x8729,	// (0x00014f63) call5_image_pane_ParamLimits

0x8729,	// (0x00014f63) call5_image_pane

0x8746,	// (0x00014f80) call5_swipe_1_pane_ParamLimits

0x8746,	// (0x00014f80) call5_swipe_1_pane

0x8759,	// (0x00014f93) call5_swipe_2_pane_ParamLimits

0x8759,	// (0x00014f93) call5_swipe_2_pane

0x8784,	// (0x00014fbe) popup_call5_audio_first_window_ParamLimits

0x8784,	// (0x00014fbe) popup_call5_audio_first_window

0xca5a,	// (0x00019294) call5_swipe_1_pane_g1_ParamLimits

0xca5a,	// (0x00019294) call5_swipe_1_pane_g1

0xe730,	// (0x0001af6a) call5_swipe_1_pane_g2_ParamLimits

0xe730,	// (0x0001af6a) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0001c541) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0001c541) call5_swipe_1_pane_g

0xe73c,	// (0x0001af76) call5_swipe_1_pane_t1_ParamLimits

0xe73c,	// (0x0001af76) call5_swipe_1_pane_t1

0xca5a,	// (0x00019294) call5_swipe_2_pane_g1_ParamLimits

0xca5a,	// (0x00019294) call5_swipe_2_pane_g1

0xe751,	// (0x0001af8b) call5_swipe_2_pane_g2_ParamLimits

0xe751,	// (0x0001af8b) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0001c546) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0001c546) call5_swipe_2_pane_g

0xe75d,	// (0x0001af97) call5_swipe_2_pane_t1_ParamLimits

0xe75d,	// (0x0001af97) call5_swipe_2_pane_t1

0xe772,	// (0x0001afac) sc_swipe_pane_g1_ParamLimits

0xe772,	// (0x0001afac) sc_swipe_pane_g1

0xe77f,	// (0x0001afb9) sc_swipe_pane_g2_ParamLimits

0xe77f,	// (0x0001afb9) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0001c54b) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0001c54b) sc_swipe_pane_g

0xe78b,	// (0x0001afc5) sc_swipe_pane_t1_ParamLimits

0xe78b,	// (0x0001afc5) sc_swipe_pane_t1

0x98b7,	// (0x000160f1) main_cmail_launcher_pane

0x8795,	// (0x00014fcf) aid_size_cell_cmail_l_ParamLimits

0x8795,	// (0x00014fcf) aid_size_cell_cmail_l

0x87af,	// (0x00014fe9) grid_cmail_l_pane_ParamLimits

0x87af,	// (0x00014fe9) grid_cmail_l_pane

0x87ca,	// (0x00015004) cell_cmail_l_pane_ParamLimits

0x87ca,	// (0x00015004) cell_cmail_l_pane

0x87f0,	// (0x0001502a) cell_cmail_l_pane_g1_ParamLimits

0x87f0,	// (0x0001502a) cell_cmail_l_pane_g1

0x87fc,	// (0x00015036) cell_cmail_l_pane_t1_ParamLimits

0x87fc,	// (0x00015036) cell_cmail_l_pane_t1

0xe7a0,	// (0x0001afda) cell_cmail_l_pane_t2_ParamLimits

0xe7a0,	// (0x0001afda) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0001c550) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0001c550) cell_cmail_l_pane_t

0x9927,	// (0x00016161) grid_highlight_pane_cp018_ParamLimits

0x9927,	// (0x00016161) grid_highlight_pane_cp018

0x1801,	// (0x0000e03b) main2_pane_ParamLimits

0x1801,	// (0x0000e03b) main2_pane

0xa159,	// (0x00016993) popup_sp_fs_action_menu_bg_pane_g1

0xa161,	// (0x0001699b) popup_sp_fs_action_menu_bg_pane_g2

0xa169,	// (0x000169a3) popup_sp_fs_action_menu_bg_pane_g3

0xa171,	// (0x000169ab) popup_sp_fs_action_menu_bg_pane_g4

0xa179,	// (0x000169b3) popup_sp_fs_action_menu_bg_pane_g5

0xa181,	// (0x000169bb) popup_sp_fs_action_menu_bg_pane_g6

0xa189,	// (0x000169c3) popup_sp_fs_action_menu_bg_pane_g7

0xa191,	// (0x000169cb) popup_sp_fs_action_menu_bg_pane_g8

0xa199,	// (0x000169d3) popup_sp_fs_action_menu_bg_pane_g9

0xa1a1,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g10

0xa1a1,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0001ba29) popup_sp_fs_action_menu_bg_pane_g

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g3_g1

0xa37d,	// (0x00016bb7) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_t3_g3_g2

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0001bad9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0001bad9) list_medium_line_x2_t3_g3_g

0xa395,	// (0x00016bcf) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa395,	// (0x00016bcf) list_medium_line_x2_t3_g3_t1

0x258d,	// (0x0000edc7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x258d,	// (0x0000edc7) list_medium_line_x2_t3_g3_t2

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0001bae0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0001bae0) list_medium_line_x2_t3_g3_t

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g2_g1

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t3_g2_g

0xa3bf,	// (0x00016bf9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa3bf,	// (0x00016bf9) list_medium_line_x2_t3_g2_t1

0xa3d5,	// (0x00016c0f) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa3d5,	// (0x00016c0f) list_medium_line_x2_t3_g2_t2

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0001baec) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0001baec) list_medium_line_x2_t3_g2_t

0xa371,	// (0x00016bab) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t4_g4_g1

0xa3e7,	// (0x00016c21) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa3e7,	// (0x00016c21) list_medium_line_x2_t4_g4_g2

0xa37d,	// (0x00016bb7) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_t4_g4_g3

0xa3f3,	// (0x00016c2d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa3f3,	// (0x00016c2d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0001baf3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0001baf3) list_medium_line_x2_t4_g4_g

0x25a1,	// (0x0000eddb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x25a1,	// (0x0000eddb) list_medium_line_x2_t4_g4_t1

0x25b8,	// (0x0000edf2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x25b8,	// (0x0000edf2) list_medium_line_x2_t4_g4_t2

0x25cd,	// (0x0000ee07) list_medium_line_x2_t4_g4_t3_ParamLimits

0x25cd,	// (0x0000ee07) list_medium_line_x2_t4_g4_t3

0xa3ff,	// (0x00016c39) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa3ff,	// (0x00016c39) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0001bafc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0001bafc) list_medium_line_x2_t4_g4_t

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g4_g1

0xa3e7,	// (0x00016c21) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa3e7,	// (0x00016c21) list_medium_line_x2_t2_g4_g2

0xa37d,	// (0x00016bb7) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_t2_g4_g3

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0001bb63) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0001bb63) list_medium_line_x2_t2_g4_g

0xa6ef,	// (0x00016f29) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa6ef,	// (0x00016f29) list_medium_line_x2_t2_g4_t1

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0001bb6c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0001bb6c) list_medium_line_x2_t2_g4_t

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g3_g1

0xa37d,	// (0x00016bb7) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_t2_g3_g2

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0001bad9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0001bad9) list_medium_line_x2_t2_g3_g

0xa704,	// (0x00016f3e) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa704,	// (0x00016f3e) list_medium_line_x2_t2_g3_t1

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0001bb71) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0001bb71) list_medium_line_x2_t2_g3_t

0x3229,	// (0x0000fa63) main_sp_fs_list_pane_ParamLimits

0x3229,	// (0x0000fa63) main_sp_fs_list_pane

0x3235,	// (0x0000fa6f) sp_fs_scroll_pane_ParamLimits

0x3235,	// (0x0000fa6f) sp_fs_scroll_pane

0x3241,	// (0x0000fa7b) list_medium_line_x2_t3_t1

0x3251,	// (0x0000fa8b) list_medium_line_x2_t3_t2

0xa960,	// (0x0001719a) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0001bbbc) list_medium_line_x2_t3_t

0x325f,	// (0x0000fa99) list_medium_line_x3_t4_t1

0x326f,	// (0x0000faa9) list_medium_line_x3_t4_t2

0xa96e,	// (0x000171a8) list_medium_line_x3_t4_t3

0xa960,	// (0x0001719a) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0001bbc3) list_medium_line_x3_t4_t

0x327d,	// (0x0000fab7) list_medium_line_x4_t5_t1

0x328d,	// (0x0000fac7) list_medium_line_x4_t5_t2

0xa96e,	// (0x000171a8) list_medium_line_x4_t5_t3

0xa97c,	// (0x000171b6) list_medium_line_x4_t5_t4

0xa960,	// (0x0001719a) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0001bbcc) list_medium_line_x4_t5_t

0xa371,	// (0x00016bab) list_medium_line_t4_g4_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_t4_g4_g1

0xa3f3,	// (0x00016c2d) list_medium_line_t4_g4_g2_ParamLimits

0xa3f3,	// (0x00016c2d) list_medium_line_t4_g4_g2

0xa98a,	// (0x000171c4) list_medium_line_t4_g4_g3_ParamLimits

0xa98a,	// (0x000171c4) list_medium_line_t4_g4_g3

0xa389,	// (0x00016bc3) list_medium_line_t4_g4_g4_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0001bbd7) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0001bbd7) list_medium_line_t4_g4_g

0xa996,	// (0x000171d0) list_medium_line_t4_g4_t1_ParamLimits

0xa996,	// (0x000171d0) list_medium_line_t4_g4_t1

0xa9ab,	// (0x000171e5) list_medium_line_t4_g4_t2_ParamLimits

0xa9ab,	// (0x000171e5) list_medium_line_t4_g4_t2

0xa9c0,	// (0x000171fa) list_medium_line_t4_g4_t3_ParamLimits

0xa9c0,	// (0x000171fa) list_medium_line_t4_g4_t3

0xa3aa,	// (0x00016be4) list_medium_line_t4_g4_t4_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0001bbe0) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0001bbe0) list_medium_line_t4_g4_t

0x335e,	// (0x0000fb98) chi_dic_find_pane_g1

0x4454,	// (0x00010c8e) main_tport_pane

0xd788,	// (0x00019fc2) list_medium_line_plain_t1

0xd7da,	// (0x0001a014) list_medium_line_t2_g2_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t2_g2_g1

0xd7e6,	// (0x0001a020) list_medium_line_t2_g2_g2_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0001c293) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0001c293) list_medium_line_t2_g2_g

0x743b,	// (0x00013c75) list_medium_line_t2_g2_t1_ParamLimits

0x743b,	// (0x00013c75) list_medium_line_t2_g2_t1

0x7455,	// (0x00013c8f) list_medium_line_t2_g2_t2_ParamLimits

0x7455,	// (0x00013c8f) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0001c298) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0001c298) list_medium_line_t2_g2_t

0xdb9e,	// (0x0001a3d8) aid_sp_fs_list_icon_a_sm

0xdba6,	// (0x0001a3e0) aid_sp_fs_list_icon_d

0xdbae,	// (0x0001a3e8) aid_sp_fs_text_primary

0xdbb7,	// (0x0001a3f1) aid_sp_fs_text_secondary

0xdbc0,	// (0x0001a3fa) list_medium_line

0xdbc0,	// (0x0001a3fa) list_medium_line_g2

0xdbc0,	// (0x0001a3fa) list_medium_line_g3

0xdbc0,	// (0x0001a3fa) list_medium_line_plain

0xdbc0,	// (0x0001a3fa) list_medium_line_plain_t2

0xdbc0,	// (0x0001a3fa) list_medium_line_plain_t3

0xdbc0,	// (0x0001a3fa) list_medium_line_right_icon

0xdbc0,	// (0x0001a3fa) list_medium_line_right_iconx2

0xdbc0,	// (0x0001a3fa) list_medium_line_t2

0xdbc0,	// (0x0001a3fa) list_medium_line_t2_g2

0xdbc0,	// (0x0001a3fa) list_medium_line_t2_g3

0xdbc0,	// (0x0001a3fa) list_medium_line_t2_right_icon

0xdbc0,	// (0x0001a3fa) list_medium_line_t2_right_iconx2

0xdbc0,	// (0x0001a3fa) list_medium_line_t3

0xdbc0,	// (0x0001a3fa) list_medium_line_t3_g2

0xdbc0,	// (0x0001a3fa) list_medium_line_t3_g3

0xdbc0,	// (0x0001a3fa) list_medium_line_t3_right_iconx2

0xdbc9,	// (0x0001a403) list_medium_line_t4_g4

0xdbd2,	// (0x0001a40c) list_medium_line_x2

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t2_g2

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t2_g3

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t2_g4

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t3

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t3_g2

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t3_g3

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t3_g4

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t4_g2

0xdbd2,	// (0x0001a40c) list_medium_line_x2_t4_g4

0xdbdb,	// (0x0001a415) list_medium_line_x3

0xdbdb,	// (0x0001a415) list_medium_line_x3_t4

0xdbdb,	// (0x0001a415) list_medium_line_x3_t4_g4

0xdbc9,	// (0x0001a403) list_medium_line_x4_t4

0xdbc9,	// (0x0001a403) list_medium_line_x4_t4_g7

0xdbc9,	// (0x0001a403) list_medium_line_x4_t5

0xdbe4,	// (0x0001a41e) list_single_fs_dyc_pane_ParamLimits

0xdbe4,	// (0x0001a41e) list_single_fs_dyc_pane

0xa371,	// (0x00016bab) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x4_t4_g7_g1

0xe112,	// (0x0001a94c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe112,	// (0x0001a94c) list_medium_line_x4_t4_g7_g2

0xe11e,	// (0x0001a958) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe11e,	// (0x0001a958) list_medium_line_x4_t4_g7_g3

0xe12d,	// (0x0001a967) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe12d,	// (0x0001a967) list_medium_line_x4_t4_g7_g4

0xe139,	// (0x0001a973) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe139,	// (0x0001a973) list_medium_line_x4_t4_g7_g5

0xe148,	// (0x0001a982) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe148,	// (0x0001a982) list_medium_line_x4_t4_g7_g6

0xe157,	// (0x0001a991) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe157,	// (0x0001a991) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0001c45d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0001c45d) list_medium_line_x4_t4_g7_g

0xe163,	// (0x0001a99d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe163,	// (0x0001a99d) list_medium_line_x4_t4_g7_t1

0xe178,	// (0x0001a9b2) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe178,	// (0x0001a9b2) list_medium_line_x4_t4_g7_t2

0xe18d,	// (0x0001a9c7) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe18d,	// (0x0001a9c7) list_medium_line_x4_t4_g7_t3

0xe1a2,	// (0x0001a9dc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe1a2,	// (0x0001a9dc) list_medium_line_x4_t4_g7_t4

0xe1b4,	// (0x0001a9ee) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe1b4,	// (0x0001a9ee) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0001c46c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0001c46c) list_medium_line_x4_t4_g7_t

0xe1c6,	// (0x0001aa00) list_single_dyc_row_pane_ParamLimits

0xe1c6,	// (0x0001aa00) list_single_dyc_row_pane

0x8716,	// (0x00014f50) call5_gesture_pane_ParamLimits

0x8716,	// (0x00014f50) call5_gesture_pane

0x876c,	// (0x00014fa6) call5_windows_pane_ParamLimits

0x876c,	// (0x00014fa6) call5_windows_pane

0x8812,	// (0x0001504c) call5_swipe_1_pane_cp_ParamLimits

0x8812,	// (0x0001504c) call5_swipe_1_pane_cp

0x881e,	// (0x00015058) call5_swipe_2_pane_cp_ParamLimits

0x881e,	// (0x00015058) call5_swipe_2_pane_cp

0xae2b,	// (0x00017665) call5_image_pane_cp

0x882a,	// (0x00015064) popup_call5_audio_first_window_cp_ParamLimits

0x882a,	// (0x00015064) popup_call5_audio_first_window_cp

0xe772,	// (0x0001afac) call5_swipe_1_pane_g1_cp_ParamLimits

0xe772,	// (0x0001afac) call5_swipe_1_pane_g1_cp

0xe7b2,	// (0x0001afec) call5_swipe_1_pane_g2_cp

0xe78b,	// (0x0001afc5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe78b,	// (0x0001afc5) call5_swipe_1_pane_t1_cp

0xe772,	// (0x0001afac) call5_swipe_2_pane_g1_cp_ParamLimits

0xe772,	// (0x0001afac) call5_swipe_2_pane_g1_cp

0xe7ba,	// (0x0001aff4) call5_swipe_2_pane_g2_cp

0xe7c2,	// (0x0001affc) call5_swipe_2_pane_t1_cp_ParamLimits

0xe7c2,	// (0x0001affc) call5_swipe_2_pane_t1_cp

0x9927,	// (0x00016161) main_sp_fs_email_pane

0xe7d7,	// (0x0001b011) main_sp_fs_listscroll_pane_te

0xe7e0,	// (0x0001b01a) popup_sp_fs_action_menu_pane_ParamLimits

0xe7e0,	// (0x0001b01a) popup_sp_fs_action_menu_pane

0xc7ee,	// (0x00019028) bg_sp_fs_ctrlbar_pane_g1

0xe824,	// (0x0001b05e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe82d,	// (0x0001b067) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe836,	// (0x0001b070) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7ee,	// (0x00019028) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0001c555) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5d3,	// (0x00018e0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5d3,	// (0x00018e0d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe83f,	// (0x0001b079) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe83f,	// (0x0001b079) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe84b,	// (0x0001b085) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe84b,	// (0x0001b085) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0001c55e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0001c55e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe857,	// (0x0001b091) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe857,	// (0x0001b091) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe871,	// (0x0001b0ab) list_medium_line_t2_right_icon_g1

0x8838,	// (0x00015072) list_medium_line_t2_right_icon_t1

0x8848,	// (0x00015082) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0001c563) list_medium_line_t2_right_icon_t

0xc2e8,	// (0x00018b22) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2e8,	// (0x00018b22) bg_sp_fs_ctrlbar_pane

0x889e,	// (0x000150d8) main_sp_fs_ctrlbar_button_pane_cp01

0x88a6,	// (0x000150e0) main_sp_fs_ctrlbar_ddmenu_pane

0xe8b1,	// (0x0001b0eb) main_sp_fs_ctrlbar_pane_g1

0xe8bd,	// (0x0001b0f7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0001c568) main_sp_fs_ctrlbar_pane_g

0xe8c9,	// (0x0001b103) main_sp_fs_ctrlbar_pane_t1

0x88b0,	// (0x000150ea) main_sp_fs_ctrlbar_pane

0x88d4,	// (0x0001510e) main_sp_fs_listscroll_pane_te_cp01

0x88f4,	// (0x0001512e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x88f4,	// (0x0001512e) popup_sp_fs_action_menu_pane_cp01

0x9927,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9927,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp01

0xe8de,	// (0x0001b118) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe8de,	// (0x0001b118) sp_fs_action_menu_list_gene_pane_g1

0xe8ed,	// (0x0001b127) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe8ed,	// (0x0001b127) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0001c56d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0001c56d) sp_fs_action_menu_list_gene_pane_g

0xe8fa,	// (0x0001b134) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe8fa,	// (0x0001b134) sp_fs_action_menu_list_gene_pane_t1

0xe912,	// (0x0001b14c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe912,	// (0x0001b14c) sp_fs_action_menu_list_gene_pane

0xe933,	// (0x0001b16d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe933,	// (0x0001b16d) popup_sp_fs_action_menu_bg_pane

0xe941,	// (0x0001b17b) sp_fs_action_menu_list_pane_ParamLimits

0xe941,	// (0x0001b17b) sp_fs_action_menu_list_pane

0xe963,	// (0x0001b19d) sp_fs_scroll_pane_cp01_ParamLimits

0xe963,	// (0x0001b19d) sp_fs_scroll_pane_cp01

0x890e,	// (0x00015148) list_medium_line_plain_t2_t1

0x891e,	// (0x00015158) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0001c572) list_medium_line_plain_t2_t

0x892e,	// (0x00015168) list_medium_line_plain_t3_t1

0x893e,	// (0x00015178) list_medium_line_plain_t3_t2

0x894c,	// (0x00015186) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0001c577) list_medium_line_plain_t3_t

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t2_g2_g1

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t2_g2_g

0xa996,	// (0x000171d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa996,	// (0x000171d0) list_medium_line_x2_t2_g2_t1

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0001c57e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0001c57e) list_medium_line_x2_t2_g2_t

0xa371,	// (0x00016bab) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t4_g2_g1

0xa389,	// (0x00016bc3) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0001bae7) list_medium_line_x2_t4_g2_g

0x895a,	// (0x00015194) list_medium_line_x2_t4_g2_t1_ParamLimits

0x895a,	// (0x00015194) list_medium_line_x2_t4_g2_t1

0x8974,	// (0x000151ae) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8974,	// (0x000151ae) list_medium_line_x2_t4_g2_t2

0x8989,	// (0x000151c3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8989,	// (0x000151c3) list_medium_line_x2_t4_g2_t3

0xa3aa,	// (0x00016be4) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x0001c583) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x0001c583) list_medium_line_x2_t4_g2_t

0xe989,	// (0x0001b1c3) list_medium_line_t3_right_iconx2_g1

0xe871,	// (0x0001b0ab) list_medium_line_t3_right_iconx2_g2

0x899e,	// (0x000151d8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x0001c58c) list_medium_line_t3_right_iconx2_g

0x89a8,	// (0x000151e2) list_medium_line_t3_right_iconx2_t1

0x89b8,	// (0x000151f2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x0001c593) list_medium_line_t3_right_iconx2_t

0xa371,	// (0x00016bab) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x3_t4_g4_g1

0xa37d,	// (0x00016bb7) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x3_t4_g4_g2

0xa3f3,	// (0x00016c2d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa3f3,	// (0x00016c2d) list_medium_line_x3_t4_g4_g3

0xe991,	// (0x0001b1cb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe991,	// (0x0001b1cb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x0001c598) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x0001c598) list_medium_line_x3_t4_g4_g

0x89c6,	// (0x00015200) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89c6,	// (0x00015200) list_medium_line_x3_t4_g4_t1

0x89dd,	// (0x00015217) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89dd,	// (0x00015217) list_medium_line_x3_t4_g4_t2

0xa9ab,	// (0x000171e5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa9ab,	// (0x000171e5) list_medium_line_x3_t4_g4_t3

0xe99d,	// (0x0001b1d7) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe99d,	// (0x0001b1d7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x0001c5a1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x0001c5a1) list_medium_line_x3_t4_g4_t

0x89f6,	// (0x00015230) list_single_dyc_row_text_pane_t1_ParamLimits

0x89f6,	// (0x00015230) list_single_dyc_row_text_pane_t1

0x8a3f,	// (0x00015279) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a3f,	// (0x00015279) list_single_dyc_row_text_pane_t2

0xe9ba,	// (0x0001b1f4) list_single_dyc_row_text_pane_t3_ParamLimits

0xe9ba,	// (0x0001b1f4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x0001c5aa) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x0001c5aa) list_single_dyc_row_text_pane_t

0xe9cc,	// (0x0001b206) list_single_dyc_row_pane_g1_ParamLimits

0xe9cc,	// (0x0001b206) list_single_dyc_row_pane_g1

0xe9d8,	// (0x0001b212) list_single_dyc_row_pane_g2_ParamLimits

0xe9d8,	// (0x0001b212) list_single_dyc_row_pane_g2

0xe9e4,	// (0x0001b21e) list_single_dyc_row_pane_g3_ParamLimits

0xe9e4,	// (0x0001b21e) list_single_dyc_row_pane_g3

0xe9f0,	// (0x0001b22a) list_single_dyc_row_pane_g4_ParamLimits

0xe9f0,	// (0x0001b22a) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x0001c5b1) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x0001c5b1) list_single_dyc_row_pane_g

0xe9fc,	// (0x0001b236) list_single_dyc_row_text_pane_ParamLimits

0xe9fc,	// (0x0001b236) list_single_dyc_row_text_pane

0x98b7,	// (0x000160f1) bg_sp_fs_scroll_pane

0xea1b,	// (0x0001b255) thumb_sp_fs_scroll_pane

0xd7da,	// (0x0001a014) list_medium_line_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_g1

0xea24,	// (0x0001b25e) list_medium_line_t1_ParamLimits

0xea24,	// (0x0001b25e) list_medium_line_t1

0xa371,	// (0x00016bab) list_medium_line_x2_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_g1

0xa37d,	// (0x00016bb7) list_medium_line_x2_g2_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x0001c5ba) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x0001c5ba) list_medium_line_x2_g

0xea39,	// (0x0001b273) list_medium_line_x2_t1_ParamLimits

0xea39,	// (0x0001b273) list_medium_line_x2_t1

0xa371,	// (0x00016bab) list_medium_line_x3_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x3_g1

0xa37d,	// (0x00016bb7) list_medium_line_x3_g2_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x0001c5ba) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x0001c5ba) list_medium_line_x3_g

0xea39,	// (0x0001b273) list_medium_line_x3_t1_ParamLimits

0xea39,	// (0x0001b273) list_medium_line_x3_t1

0xea4f,	// (0x0001b289) thumb_sp_fs_scroll_pane_g1

0xea58,	// (0x0001b292) thumb_sp_fs_scroll_pane_g2

0xea61,	// (0x0001b29b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001c5bf) thumb_sp_fs_scroll_pane_g

0xea4f,	// (0x0001b289) bg_sp_fs_scroll_pane_g1

0xea58,	// (0x0001b292) bg_sp_fs_scroll_pane_g2

0xea61,	// (0x0001b29b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0001c5bf) bg_sp_fs_scroll_pane_g

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa371,	// (0x00016bab) list_medium_line_x2_t3_g4_g1

0xa3e7,	// (0x00016c21) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa3e7,	// (0x00016c21) list_medium_line_x2_t3_g4_g2

0xa37d,	// (0x00016bb7) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa37d,	// (0x00016bb7) list_medium_line_x2_t3_g4_g3

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa389,	// (0x00016bc3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0001bb63) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0001bb63) list_medium_line_x2_t3_g4_g

0x8a99,	// (0x000152d3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a99,	// (0x000152d3) list_medium_line_x2_t3_g4_t1

0x8aaf,	// (0x000152e9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8aaf,	// (0x000152e9) list_medium_line_x2_t3_g4_t2

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa3aa,	// (0x00016be4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x0001c5c6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x0001c5c6) list_medium_line_x2_t3_g4_t

0xd7da,	// (0x0001a014) list_medium_line_g2_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_g2_g1

0xd7e6,	// (0x0001a020) list_medium_line_g2_g2_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0001c293) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0001c293) list_medium_line_g2_g

0xea6a,	// (0x0001b2a4) list_medium_line_g2_t1_ParamLimits

0xea6a,	// (0x0001b2a4) list_medium_line_g2_t1

0xd7da,	// (0x0001a014) list_medium_line_t3_g2_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t3_g2_g1

0xd7e6,	// (0x0001a020) list_medium_line_t3_g2_g2_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0001c293) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0001c293) list_medium_line_t3_g2_g

0x8ac9,	// (0x00015303) list_medium_line_t3_g2_t1_ParamLimits

0x8ac9,	// (0x00015303) list_medium_line_t3_g2_t1

0x8ae3,	// (0x0001531d) list_medium_line_t3_g2_t2_ParamLimits

0x8ae3,	// (0x0001531d) list_medium_line_t3_g2_t2

0x8af8,	// (0x00015332) list_medium_line_t3_g2_t3_ParamLimits

0x8af8,	// (0x00015332) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x0001c5cd) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x0001c5cd) list_medium_line_t3_g2_t

0xe871,	// (0x0001b0ab) list_medium_line_right_icon_g1

0xea7f,	// (0x0001b2b9) list_medium_line_right_icon_t1

0xd7da,	// (0x0001a014) list_medium_line_t2_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t2_g1

0x8b12,	// (0x0001534c) list_medium_line_t2_t1_ParamLimits

0x8b12,	// (0x0001534c) list_medium_line_t2_t1

0x8b2c,	// (0x00015366) list_medium_line_t2_t2_ParamLimits

0x8b2c,	// (0x00015366) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x0001c5d4) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x0001c5d4) list_medium_line_t2_t

0xd7da,	// (0x0001a014) list_medium_line_t3_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t3_g1

0x8b41,	// (0x0001537b) list_medium_line_t3_t1_ParamLimits

0x8b41,	// (0x0001537b) list_medium_line_t3_t1

0x8b58,	// (0x00015392) list_medium_line_t3_t2_ParamLimits

0x8b58,	// (0x00015392) list_medium_line_t3_t2

0x8b6d,	// (0x000153a7) list_medium_line_t3_t3_ParamLimits

0x8b6d,	// (0x000153a7) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x0001c5d9) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x0001c5d9) list_medium_line_t3_t

0xd7da,	// (0x0001a014) list_medium_line_g3_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_g3_g1

0xea8d,	// (0x0001b2c7) list_medium_line_g3_g2_ParamLimits

0xea8d,	// (0x0001b2c7) list_medium_line_g3_g2

0xd7e6,	// (0x0001a020) list_medium_line_g3_g3_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x0001c5e0) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x0001c5e0) list_medium_line_g3_g

0xea99,	// (0x0001b2d3) list_medium_line_g3_t1_ParamLimits

0xea99,	// (0x0001b2d3) list_medium_line_g3_t1

0xd7da,	// (0x0001a014) list_medium_line_t2_g3_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t2_g3_g1

0xea8d,	// (0x0001b2c7) list_medium_line_t2_g3_g2_ParamLimits

0xea8d,	// (0x0001b2c7) list_medium_line_t2_g3_g2

0xd7e6,	// (0x0001a020) list_medium_line_t2_g3_g3_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x0001c5e0) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x0001c5e0) list_medium_line_t2_g3_g

0x8b7f,	// (0x000153b9) list_medium_line_t2_g3_t1_ParamLimits

0x8b7f,	// (0x000153b9) list_medium_line_t2_g3_t1

0x8b99,	// (0x000153d3) list_medium_line_t2_g3_t2_ParamLimits

0x8b99,	// (0x000153d3) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x0001c5e7) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x0001c5e7) list_medium_line_t2_g3_t

0xd7da,	// (0x0001a014) list_medium_line_t3_g3_g1_ParamLimits

0xd7da,	// (0x0001a014) list_medium_line_t3_g3_g1

0xea8d,	// (0x0001b2c7) list_medium_line_t3_g3_g2_ParamLimits

0xea8d,	// (0x0001b2c7) list_medium_line_t3_g3_g2

0xd7e6,	// (0x0001a020) list_medium_line_t3_g3_g3_ParamLimits

0xd7e6,	// (0x0001a020) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x0001c5e0) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x0001c5e0) list_medium_line_t3_g3_g

0x8bae,	// (0x000153e8) list_medium_line_t3_g3_t1_ParamLimits

0x8bae,	// (0x000153e8) list_medium_line_t3_g3_t1

0x8bc7,	// (0x00015401) list_medium_line_t3_g3_t2_ParamLimits

0x8bc7,	// (0x00015401) list_medium_line_t3_g3_t2

0x8bdd,	// (0x00015417) list_medium_line_t3_g3_t3_ParamLimits

0x8bdd,	// (0x00015417) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x0001c5ec) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x0001c5ec) list_medium_line_t3_g3_t

0xe989,	// (0x0001b1c3) list_medium_line_right_iconx2_g1

0xe871,	// (0x0001b0ab) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001c5f3) list_medium_line_right_iconx2_g

0xeaae,	// (0x0001b2e8) list_medium_line_right_iconx2_t1

0xe989,	// (0x0001b1c3) list_medium_line_t2_right_iconx2_g1

0xe871,	// (0x0001b0ab) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x0001c5f3) list_medium_line_t2_right_iconx2_g

0x8bf7,	// (0x00015431) list_medium_line_t2_right_iconx2_t1

0x8c07,	// (0x00015441) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x0001c5f8) list_medium_line_t2_right_iconx2_t

0xeabc,	// (0x0001b2f6) list_medium_line_x4_t4_t1

0x8c15,	// (0x0001544f) list_medium_line_x4_t4_t2

0x8c25,	// (0x0001545f) list_medium_line_x4_t4_t3

0x8c35,	// (0x0001546f) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x0001c5fd) list_medium_line_x4_t4_t

0x8c88,	// (0x000154c2) tport_appsw_pane_ParamLimits

0x8c88,	// (0x000154c2) tport_appsw_pane

0x8c99,	// (0x000154d3) tport_contact_pane_ParamLimits

0x8c99,	// (0x000154d3) tport_contact_pane

0x8cb2,	// (0x000154ec) tport_listscroll_pane_ParamLimits

0x8cb2,	// (0x000154ec) tport_listscroll_pane

0x8ccd,	// (0x00015507) cell_tport_appsw_pane_ParamLimits

0x8ccd,	// (0x00015507) cell_tport_appsw_pane

0xd4b3,	// (0x00019ced) tport_appsw_pane_g1_ParamLimits

0xd4b3,	// (0x00019ced) tport_appsw_pane_g1

0xeaca,	// (0x0001b304) tport_contact_pane_g1

0xe2b7,	// (0x0001aaf1) tport_contact_pane_t1

0xead3,	// (0x0001b30d) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x0001c606) tport_contact_pane_t

0xeae1,	// (0x0001b31b) list_tport_pane

0xeaea,	// (0x0001b324) scroll_pane_cp_030

0x8ce8,	// (0x00015522) cell_tport_appsw_pane_g1

0xeaf3,	// (0x0001b32d) cell_tport_appsw_pane_t1

0x98b7,	// (0x000160f1) grid_highlight_pane_cp019

0x8d00,	// (0x0001553a) list_tport_double_graphic_pane_ParamLimits

0x8d00,	// (0x0001553a) list_tport_double_graphic_pane

0x9927,	// (0x00016161) list_highlight_pane_cp023_ParamLimits

0x9927,	// (0x00016161) list_highlight_pane_cp023

0x8d0d,	// (0x00015547) list_tport_double_graphic_pane_g1_ParamLimits

0x8d0d,	// (0x00015547) list_tport_double_graphic_pane_g1

0x8d1a,	// (0x00015554) list_tport_double_graphic_pane_t1_ParamLimits

0x8d1a,	// (0x00015554) list_tport_double_graphic_pane_t1

0x8d2f,	// (0x00015569) list_tport_double_graphic_pane_t2_ParamLimits

0x8d2f,	// (0x00015569) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x0001c612) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x0001c612) list_tport_double_graphic_pane_t

0x98b7,	// (0x000160f1) main_cale_note_pane

0x6b39,	// (0x00013373) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6b39,	// (0x00013373) cell_vitu2_function_top_wide_pane_cp01

0x83da,	// (0x00014c14) wait_bar_pane_cp05_ParamLimits

0x98b7,	// (0x000160f1) listscroll_cmail_pane

0xeb09,	// (0x0001b343) list_cmail_pane

0x8d4b,	// (0x00015585) list_cmail_body_pane

0xeb8b,	// (0x0001b3c5) list_single_cmail_header_caption_pane

0x8d5f,	// (0x00015599) list_single_cmail_header_detail_pane_ParamLimits

0x8d5f,	// (0x00015599) list_single_cmail_header_detail_pane

0x8d89,	// (0x000155c3) list_single_cmail_header_caption_pane_t1

0x8d99,	// (0x000155d3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d99,	// (0x000155d3) list_single_cmail_header_detail_pane_g1

0xeb2a,	// (0x0001b364) list_single_cmail_header_detail_pane_g2_ParamLimits

0xeb2a,	// (0x0001b364) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x0001c617) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x0001c617) list_single_cmail_header_detail_pane_g

0xeb43,	// (0x0001b37d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xeb43,	// (0x0001b37d) list_single_cmail_header_detail_pane_t1

0xeb79,	// (0x0001b3b3) list_single_cmail_header_editor_pane_bg_ParamLimits

0xeb79,	// (0x0001b3b3) list_single_cmail_header_editor_pane_bg

0xe438,	// (0x0001ac72) list_cmail_body_pane_g1

0xeba4,	// (0x0001b3de) list_cmail_body_pane_t1

0xd50d,	// (0x00019d47) list_single_cmail_header_editor_pane_bg_g1

0xa60e,	// (0x00016e48) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd51d,	// (0x00019d57) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd515,	// (0x00019d4f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd7b2,	// (0x00019fec) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd53d,	// (0x00019d77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd52d,	// (0x00019d67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd535,	// (0x00019d6f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5ee,	// (0x00016e28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8dd7,	// (0x00015611) calenote_gesture_pane_ParamLimits

0x8dd7,	// (0x00015611) calenote_gesture_pane

0x8df7,	// (0x00015631) calenote_window_pane_ParamLimits

0x8df7,	// (0x00015631) calenote_window_pane

0xebb2,	// (0x0001b3ec) popup_note_window_cp01

0x8e13,	// (0x0001564d) calenote_swipe_1_pane_ParamLimits

0x8e13,	// (0x0001564d) calenote_swipe_1_pane

0x881e,	// (0x00015058) calenote_swipe_2_pane_ParamLimits

0x881e,	// (0x00015058) calenote_swipe_2_pane

0xe772,	// (0x0001afac) calenote_swipe_1_pane_g1_ParamLimits

0xe772,	// (0x0001afac) calenote_swipe_1_pane_g1

0xe77f,	// (0x0001afb9) calenote_swipe_1_pane_g2_ParamLimits

0xe77f,	// (0x0001afb9) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0001c54b) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0001c54b) calenote_swipe_1_pane_g

0xebc4,	// (0x0001b3fe) calenote_swipe_1_pane_t1_ParamLimits

0xebc4,	// (0x0001b3fe) calenote_swipe_1_pane_t1

0xe772,	// (0x0001afac) calenote_swipe_2_pane_g1_ParamLimits

0xe772,	// (0x0001afac) calenote_swipe_2_pane_g1

0xebe3,	// (0x0001b41d) calenote_swipe_2_pane_g2_ParamLimits

0xebe3,	// (0x0001b41d) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x0001c623) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x0001c623) calenote_swipe_2_pane_g

0xebef,	// (0x0001b429) calenote_swipe_2_pane_t1_ParamLimits

0xebef,	// (0x0001b429) calenote_swipe_2_pane_t1

0x98b7,	// (0x000160f1) main_mup_navstr_pane

0x5812,	// (0x0001204c) main_mup3_pane_t7_ParamLimits

0x5812,	// (0x0001204c) main_mup3_pane_t7

0xd131,	// (0x0001996b) main_mp4_pane_g6_ParamLimits

0xd131,	// (0x0001996b) main_mp4_pane_g6

0xd34b,	// (0x00019b85) main_image3_pane_t4_ParamLimits

0xd34b,	// (0x00019b85) main_image3_pane_t4

0x8e28,	// (0x00015662) popup_navstr_preview_pane_ParamLimits

0x8e28,	// (0x00015662) popup_navstr_preview_pane

0x8e3c,	// (0x00015676) scroll_navstr_pane_ParamLimits

0x8e3c,	// (0x00015676) scroll_navstr_pane

0x98b7,	// (0x000160f1) bg_popup_preview_window_pane_cp04

0xec16,	// (0x0001b450) popup_navstr_preview_pane_t1

0x8e50,	// (0x0001568a) scroll_navstr_pane_g1_ParamLimits

0x8e50,	// (0x0001568a) scroll_navstr_pane_g1

0x8e64,	// (0x0001569e) scroll_navstr_pane_t1_ParamLimits

0x8e64,	// (0x0001569e) scroll_navstr_pane_t1

0xebbb,	// (0x0001b3f5) bg_button_pane_cp014

0xebbb,	// (0x0001b3f5) bg_button_pane_cp030

0x86bc,	// (0x00014ef6) list_double_fisheye_pane_g4_ParamLimits

0x86bc,	// (0x00014ef6) list_double_fisheye_pane_g4

0x86c8,	// (0x00014f02) list_double_fisheye_pane_g5_ParamLimits

0x86c8,	// (0x00014f02) list_double_fisheye_pane_g5

0xeb11,	// (0x0001b34b) sp_fs_scroll_pane_cp03

0xe8b1,	// (0x0001b0eb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe8bd,	// (0x0001b0f7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0001c568) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe8c9,	// (0x0001b103) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8d41,	// (0x0001557b) sp_fs_scroll_pane_cp02

0xa20c,	// (0x00016a46) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa20c,	// (0x00016a46) popup_sp_fs_calendar_preview_list_single_pane

0x98b7,	// (0x000160f1) main_cam6_pano_pane

0x9927,	// (0x00016161) main_mup3_pane_ParamLimits

0x98b7,	// (0x000160f1) main_phacti_pane

0x82ad,	// (0x00014ae7) bg_button_pane_cp11

0x82c7,	// (0x00014b01) main_mobtv_info_pane_g2_ParamLimits

0x82c7,	// (0x00014b01) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0001c4c8) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0001c4c8) main_mobtv_info_pane_g

0x84a2,	// (0x00014cdc) sc_clock_pane_t5_ParamLimits

0x84a2,	// (0x00014cdc) sc_clock_pane_t5

0x8527,	// (0x00014d61) main_radioblah_pane_g1_ParamLimits

0xe6be,	// (0x0001aef8) main_radioblah_pane_t3_ParamLimits

0xe6be,	// (0x0001aef8) main_radioblah_pane_t3

0xe6d6,	// (0x0001af10) main_radioblah_pane_t4_ParamLimits

0xe6d6,	// (0x0001af10) main_radioblah_pane_t4

0x854f,	// (0x00014d89) main_radioblah_text_pane_ParamLimits

0x854f,	// (0x00014d89) main_radioblah_text_pane

0x8561,	// (0x00014d9b) main_radioblah_info_pane_g1_ParamLimits

0x85fa,	// (0x00014e34) main_radioblah_info_pane_t4_ParamLimits

0x85fa,	// (0x00014e34) main_radioblah_info_pane_t4

0x9927,	// (0x00016161) main_sp_fs_calendar_pane

0x8e7b,	// (0x000156b5) main_phacti_pane_g1

0x8e83,	// (0x000156bd) phacti_note_pane_ParamLimits

0x8e83,	// (0x000156bd) phacti_note_pane

0xec2d,	// (0x0001b467) phacti_term_pane_ParamLimits

0xec2d,	// (0x0001b467) phacti_term_pane

0xec42,	// (0x0001b47c) phacti_note_pane_t1_ParamLimits

0xec42,	// (0x0001b47c) phacti_note_pane_t1

0xec59,	// (0x0001b493) phacti_term_pane_g1

0xec61,	// (0x0001b49b) phacti_term_pane_t1_ParamLimits

0xec61,	// (0x0001b49b) phacti_term_pane_t1

0xec8b,	// (0x0001b4c5) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa369,	// (0x00016ba3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x0001c62d) popup_sp_fs_calendar_preview_list_single_pane_g

0xec93,	// (0x0001b4cd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec93,	// (0x0001b4cd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeca8,	// (0x0001b4e2) aid_popup_sp_fs_bg_corner_pane

0xc7ee,	// (0x00019028) popup_sp_fs_calendar_preview_bg_pane_g1

0x98b7,	// (0x000160f1) popup_sp_fs_calendar_preview_bg_pane

0xecb0,	// (0x0001b4ea) popup_sp_fs_calendar_preview_list_pane

0x9927,	// (0x00016161) bg_main_sp_fs_cale_pane_ParamLimits

0x9927,	// (0x00016161) bg_main_sp_fs_cale_pane

0xecc1,	// (0x0001b4fb) listscroll_cale_mrui_pane_ParamLimits

0xecc1,	// (0x0001b4fb) listscroll_cale_mrui_pane

0xecd5,	// (0x0001b50f) listscroll_sp_fs_schedule_track_pane

0xecde,	// (0x0001b518) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xecde,	// (0x0001b518) main_sp_fs_ctrlbar_pane_cp01

0xecef,	// (0x0001b529) main_sp_fs_ribbon_pane

0xecf7,	// (0x0001b531) popup_sp_fs_cale_preview_window

0x8eda,	// (0x00015714) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8eda,	// (0x00015714) list_single_sp_fs_schedule_track_pane

0x9927,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9927,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp03

0x8eed,	// (0x00015727) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8eed,	// (0x00015727) list_single_sp_fs_schedule_track_pane_g1

0x8ef9,	// (0x00015733) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ef9,	// (0x00015733) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x0001c632) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x0001c632) list_single_sp_fs_schedule_track_pane_g

0x8f05,	// (0x0001573f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f05,	// (0x0001573f) list_single_sp_fs_schedule_track_pane_t1

0x8f1f,	// (0x00015759) sp_fs_schedule_track_pane_ParamLimits

0x8f1f,	// (0x00015759) sp_fs_schedule_track_pane

0xed09,	// (0x0001b543) sp_fs_schedule_track_pane_g1

0xed11,	// (0x0001b54b) sp_fs_schedule_track_pane_g2

0xed19,	// (0x0001b553) sp_fs_schedule_track_pane_g3

0xed21,	// (0x0001b55b) sp_fs_schedule_track_pane_g4

0xed29,	// (0x0001b563) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x0001c637) sp_fs_schedule_track_pane_g

0xd50d,	// (0x00019d47) bg_sp_fs_schedule_viewer_highlight_g1

0xa60e,	// (0x00016e48) bg_sp_fs_schedule_viewer_highlight_g2

0xd515,	// (0x00019d4f) bg_sp_fs_schedule_viewer_highlight_g3

0xd51d,	// (0x00019d57) bg_sp_fs_schedule_viewer_highlight_g4

0xd7b2,	// (0x00019fec) bg_sp_fs_schedule_viewer_highlight_g5

0xd52d,	// (0x00019d67) bg_sp_fs_schedule_viewer_highlight_g6

0xd535,	// (0x00019d6f) bg_sp_fs_schedule_viewer_highlight_g7

0xd53d,	// (0x00019d77) bg_sp_fs_schedule_viewer_highlight_g8

0xa5ee,	// (0x00016e28) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x0001c642) bg_sp_fs_schedule_viewer_highlight_g

0x98b7,	// (0x000160f1) bg_main_sp_fs_ribbon_pane

0x8f30,	// (0x0001576a) main_sp_fs_ribbon_pane_g1

0xed31,	// (0x0001b56b) main_sp_fs_ribbon_pane_t1

0x8f39,	// (0x00015773) main_sp_fs_ribbon_pane_t2

0xed40,	// (0x0001b57a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x0001c655) main_sp_fs_ribbon_pane_t

0xed4f,	// (0x0001b589) main_sp_fs_ribbon_scheduler_pane

0xed57,	// (0x0001b591) bg_main_sp_fs_ribbon_pane_g1

0xed60,	// (0x0001b59a) bg_main_sp_fs_ribbon_pane_g2

0xed69,	// (0x0001b5a3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x0001c65c) bg_main_sp_fs_ribbon_pane_g

0xed71,	// (0x0001b5ab) main_sp_fs_ribbon_scheduler_pane_g1

0xed7a,	// (0x0001b5b4) main_sp_fs_ribbon_scheduler_pane_g2

0xed83,	// (0x0001b5bd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x0001c663) main_sp_fs_ribbon_scheduler_pane_g

0xed8c,	// (0x0001b5c6) list_cale_mrui_pane

0x8f48,	// (0x00015782) sp_fs_scroll_pane_cp07_ParamLimits

0x8f48,	// (0x00015782) sp_fs_scroll_pane_cp07

0x8f5e,	// (0x00015798) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f5e,	// (0x00015798) bg_sp_fs_schedule_viewer_highlight

0xed95,	// (0x0001b5cf) list_single_sp_fs_schedule_track_pane_cp01

0xed9d,	// (0x0001b5d7) list_sp_fs_schedule_track_pane

0xeda5,	// (0x0001b5df) sp_fs_scroll_pane_cp06_ParamLimits

0xeda5,	// (0x0001b5df) sp_fs_scroll_pane_cp06

0xc7ee,	// (0x00019028) bgmain_sp_fs_calendar_pane_g1

0x8f6e,	// (0x000157a8) list_single_cale_mrui_pane_ParamLimits

0x8f6e,	// (0x000157a8) list_single_cale_mrui_pane

0xedb7,	// (0x0001b5f1) list_single_cale_mrui_row_pane_ParamLimits

0xedb7,	// (0x0001b5f1) list_single_cale_mrui_row_pane

0xedc4,	// (0x0001b5fe) list_single_cale_mrui_row_pane_g1_ParamLimits

0xedc4,	// (0x0001b5fe) list_single_cale_mrui_row_pane_g1

0xedfc,	// (0x0001b636) list_single_cale_mrui_row_pane_t1_ParamLimits

0xedfc,	// (0x0001b636) list_single_cale_mrui_row_pane_t1

0x8f8f,	// (0x000157c9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f8f,	// (0x000157c9) list_single_cale_mrui_row_pane_t2

0xee0e,	// (0x0001b648) list_single_cale_mrui_row_pane_t3_ParamLimits

0xee0e,	// (0x0001b648) list_single_cale_mrui_row_pane_t3

0xee3d,	// (0x0001b677) list_single_cale_mrui_row_pane_t4_ParamLimits

0xee3d,	// (0x0001b677) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x0001c66f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x0001c66f) list_single_cale_mrui_row_pane_t

0x8ff7,	// (0x00015831) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ff7,	// (0x00015831) list_single_cmail_header_editor_pane_bg_cp01

0x901d,	// (0x00015857) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x901d,	// (0x00015857) list_single_cmail_header_editor_pane_bg_cp02

0x903d,	// (0x00015877) main_radioblah_text_pane_t1_ParamLimits

0x903d,	// (0x00015877) main_radioblah_text_pane_t1

0xee6c,	// (0x0001b6a6) cam6_indi_pane_cp01

0xee74,	// (0x0001b6ae) cam6_mode_pane_cp01

0xee7c,	// (0x0001b6b6) cam6_pano_pane

0xee85,	// (0x0001b6bf) cam6_zoom_pane_cp01

0xee8d,	// (0x0001b6c7) cam6_pano_image_pane

0xee98,	// (0x0001b6d2) cam6_pano_pane_g1

0xe438,	// (0x0001ac72) cam6_pano_pane_g2

0xeea1,	// (0x0001b6db) cam6_pano_pane_g3

0xeeaa,	// (0x0001b6e4) cam6_pano_pane_g4

0xcdb0,	// (0x000195ea) cam6_pano_pane_g5

0xeeb3,	// (0x0001b6ed) cam6_pano_pane_g6

0xde83,	// (0x0001a6bd) cam6_pano_pane_g7

0xeebd,	// (0x0001b6f7) cam6_pano_pane_g8

0xeec6,	// (0x0001b700) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x0001c678) cam6_pano_pane_g

0x98b7,	// (0x000160f1) main_browser_tag_pane

0xec0e,	// (0x0001b448) grid_navstr_albumart_pane

0xeed1,	// (0x0001b70b) cell_navstr_albumart_pane_ParamLimits

0xeed1,	// (0x0001b70b) cell_navstr_albumart_pane

0xeef4,	// (0x0001b72e) cell_navstr_albumart_pane_g1

0xc105,	// (0x0001893f) cell_navstr_albumart_pane_g2

0xc115,	// (0x0001894f) cell_navstr_albumart_pane_g3

0xc10d,	// (0x00018947) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x0001c68b) cell_navstr_albumart_pane_g

0x9057,	// (0x00015891) bt_list_pane_ParamLimits

0x9057,	// (0x00015891) bt_list_pane

0x906b,	// (0x000158a5) bt_list_pane_t1

0x907a,	// (0x000158b4) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x0001c694) bt_list_pane_t

0x98b7,	// (0x000160f1) main_cale_prevew_pane

0x9089,	// (0x000158c3) popup_cale_preview_window_ParamLimits

0x9089,	// (0x000158c3) popup_cale_preview_window

0x9927,	// (0x00016161) bg_popup_preview_window_pane_cp05_ParamLimits

0x9927,	// (0x00016161) bg_popup_preview_window_pane_cp05

0xeefc,	// (0x0001b736) list_cale_preview_pane_ParamLimits

0xeefc,	// (0x0001b736) list_cale_preview_pane

0x90a2,	// (0x000158dc) list_double_cale_preview_pane_ParamLimits

0x90a2,	// (0x000158dc) list_double_cale_preview_pane

0x90b4,	// (0x000158ee) list_single_cale_preview_pane_ParamLimits

0x90b4,	// (0x000158ee) list_single_cale_preview_pane

0x90ca,	// (0x00015904) list_single_cale_preview_pane_g1

0x90d2,	// (0x0001590c) list_single_cale_preview_pane_t1_ParamLimits

0x90d2,	// (0x0001590c) list_single_cale_preview_pane_t1

0x90e7,	// (0x00015921) list_double_cale_preview_pane_g1

0x90ef,	// (0x00015929) list_double_cale_preview_pane_t1_ParamLimits

0x90ef,	// (0x00015929) list_double_cale_preview_pane_t1

0x9104,	// (0x0001593e) list_double_cale_preview_pane_t2_ParamLimits

0x9104,	// (0x0001593e) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x0001c699) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x0001c699) list_double_cale_preview_pane_t

0x98b7,	// (0x000160f1) main_ezdial_pane

0x9927,	// (0x00016161) main_sp_fs_email_pane_ParamLimits

0x8856,	// (0x00015090) cmail_ddmenu_btn01_pane_ParamLimits

0x8856,	// (0x00015090) cmail_ddmenu_btn01_pane

0x8869,	// (0x000150a3) cmail_ddmenu_btn02_pane_ParamLimits

0x8869,	// (0x000150a3) cmail_ddmenu_btn02_pane

0x888c,	// (0x000150c6) cmail_ddmenu_btn03_pane_ParamLimits

0x888c,	// (0x000150c6) cmail_ddmenu_btn03_pane

0x88b0,	// (0x000150ea) main_sp_fs_ctrlbar_pane_ParamLimits

0x88d4,	// (0x0001510e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d4b,	// (0x00015585) list_cmail_body_pane_ParamLimits

0xeb21,	// (0x0001b35b) bg_button_pane_cp12

0xeb36,	// (0x0001b370) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeb36,	// (0x0001b370) list_single_cmail_header_detail_pane_g3

0x8db1,	// (0x000155eb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8db1,	// (0x000155eb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x0001c61e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x0001c61e) list_single_cmail_header_detail_pane_t

0xec76,	// (0x0001b4b0) phacti_term_pane_t2_ParamLimits

0xec76,	// (0x0001b4b0) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x0001c628) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x0001c628) phacti_term_pane_t

0xef1a,	// (0x0001b754) aid_size_list_single_double

0x911c,	// (0x00015956) popup_ezdial_listscroll_window

0x9138,	// (0x00015972) popup_number_entry_window_cp01

0xae2b,	// (0x00017665) bg_popup_call_pane_cp09

0xef26,	// (0x0001b760) ezdial_list_pane

0xef2e,	// (0x0001b768) scroll_pane_cp23

0xc2e8,	// (0x00018b22) bg_button_pane_cp028_ParamLimits

0xc2e8,	// (0x00018b22) bg_button_pane_cp028

0x9146,	// (0x00015980) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9146,	// (0x00015980) cmail_ddmenu_btn01_pane_g1

0x9152,	// (0x0001598c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9152,	// (0x0001598c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x0001c69e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x0001c69e) cmail_ddmenu_btn01_pane_g

0xef36,	// (0x0001b770) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xef36,	// (0x0001b770) cmail_ddmenu_btn01_pane_t1

0xc2e8,	// (0x00018b22) bg_button_pane_cp029_ParamLimits

0xc2e8,	// (0x00018b22) bg_button_pane_cp029

0x915e,	// (0x00015998) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x915e,	// (0x00015998) cmail_ddmenu_btn02_pane_g1

0x9176,	// (0x000159b0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9176,	// (0x000159b0) cmail_ddmenu_btn02_pane_t1

0x9927,	// (0x00016161) bg_button_pane_cp031_ParamLimits

0x9927,	// (0x00016161) bg_button_pane_cp031

0x915e,	// (0x00015998) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x915e,	// (0x00015998) cmail_ddmenu_btn03_pane_g1

0x9176,	// (0x000159b0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9176,	// (0x000159b0) cmail_ddmenu_btn03_pane_t1

0x636b,	// (0x00012ba5) cell_dialer2_keypad_pane_t1_ParamLimits

0x6385,	// (0x00012bbf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6385,	// (0x00012bbf) cell_dialer2_keypad_pane_t1_copy1

0x8152,	// (0x0001498c) ncimui_group_button_pane

0x9927,	// (0x00016161) main_sp_fs_calendar_pane_ParamLimits

0xeb8b,	// (0x0001b3c5) list_single_cmail_header_caption_pane_ParamLimits

0xecb8,	// (0x0001b4f2) aid_recal_txt_sm_pane

0x98b7,	// (0x000160f1) mian_recal_day_pane

0xecf7,	// (0x0001b531) popup_sp_fs_cale_preview_window_ParamLimits

0x98b7,	// (0x000160f1) list_recal_day_pane

0xef6d,	// (0x0001b7a7) list_single_recal_day_pane_ParamLimits

0xef6d,	// (0x0001b7a7) list_single_recal_day_pane

0xef7f,	// (0x0001b7b9) list_single_recal_day_pane_g1_ParamLimits

0xef7f,	// (0x0001b7b9) list_single_recal_day_pane_g1

0xef8b,	// (0x0001b7c5) list_single_recal_day_pane_g2_ParamLimits

0xef8b,	// (0x0001b7c5) list_single_recal_day_pane_g2

0xef9a,	// (0x0001b7d4) list_single_recal_day_pane_g3_ParamLimits

0xef9a,	// (0x0001b7d4) list_single_recal_day_pane_g3

0x919a,	// (0x000159d4) list_single_recal_day_pane_g4_ParamLimits

0x919a,	// (0x000159d4) list_single_recal_day_pane_g4

0xefa6,	// (0x0001b7e0) list_single_recal_day_pane_g5_ParamLimits

0xefa6,	// (0x0001b7e0) list_single_recal_day_pane_g5

0xefb5,	// (0x0001b7ef) list_single_recal_day_pane_g6_ParamLimits

0xefb5,	// (0x0001b7ef) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x0001c6ad) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x0001c6ad) list_single_recal_day_pane_g

0xefc1,	// (0x0001b7fb) list_single_recal_day_pane_t1

0xefcf,	// (0x0001b809) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x0001c6ba) list_single_recal_day_pane_t

0x91ad,	// (0x000159e7) ncimui_query_button_pane_ParamLimits

0x91ad,	// (0x000159e7) ncimui_query_button_pane

0x91bd,	// (0x000159f7) ncimui_query_button_pane_t1_ParamLimits

0x91bd,	// (0x000159f7) ncimui_query_button_pane_t1

0xefdd,	// (0x0001b817) ncimui_query_button_pane_t2_ParamLimits

0xefdd,	// (0x0001b817) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x0001c6bf) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x0001c6bf) ncimui_query_button_pane_t

0x91d0,	// (0x00015a0a) query_button_pane_ParamLimits

0x91d0,	// (0x00015a0a) query_button_pane

0x98b7,	// (0x000160f1) bg_button_pane_cp0028

0xeff0,	// (0x0001b82a) query_button_pane_t1

0x4454,	// (0x00010c8e) main_tport_pane_ParamLimits

0x8c45,	// (0x0001547f) bg_popup_window_pane_cp01_ParamLimits

0x8c45,	// (0x0001547f) bg_popup_window_pane_cp01

0x8c5f,	// (0x00015499) heading_pane_cp08_ParamLimits

0x8c5f,	// (0x00015499) heading_pane_cp08

0x8c73,	// (0x000154ad) heading_pane_cp07_ParamLimits

0x8c73,	// (0x000154ad) heading_pane_cp07

0x8cf0,	// (0x0001552a) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x0001c60b) cell_tport_appsw_pane_g

0xafac,	// (0x000177e6) input_candi_list_open_g1

0xa80d,	// (0x00017047) list_cale_time_pane_g6_ParamLimits

0xa80d,	// (0x00017047) list_cale_time_pane_g6

0x5221,	// (0x00011a5b) aid_size_touch_calib_1_ParamLimits

0x5221,	// (0x00011a5b) aid_size_touch_calib_1

0x522d,	// (0x00011a67) aid_size_touch_calib_2_ParamLimits

0x522d,	// (0x00011a67) aid_size_touch_calib_2

0x5243,	// (0x00011a7d) aid_size_touch_calib_3_ParamLimits

0x5243,	// (0x00011a7d) aid_size_touch_calib_3

0x5261,	// (0x00011a9b) aid_size_touch_calib_4_ParamLimits

0x5261,	// (0x00011a9b) aid_size_touch_calib_4

0x5277,	// (0x00011ab1) main_touch_calib_button_group_pane_ParamLimits

0x5277,	// (0x00011ab1) main_touch_calib_button_group_pane

0x528e,	// (0x00011ac8) main_touch_calib_pane_g1_ParamLimits

0x529a,	// (0x00011ad4) main_touch_calib_pane_g2_ParamLimits

0x52a6,	// (0x00011ae0) main_touch_calib_pane_g3_ParamLimits

0x52b2,	// (0x00011aec) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0001bff2) main_touch_calib_pane_g_ParamLimits

0x52be,	// (0x00011af8) main_touch_calib_pane_t1_ParamLimits

0x52d8,	// (0x00011b12) main_touch_calib_pane_t2_ParamLimits

0x52f2,	// (0x00011b2c) main_touch_calib_pane_t3_ParamLimits

0x5306,	// (0x00011b40) main_touch_calib_pane_t4_ParamLimits

0x531a,	// (0x00011b54) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0001bffb) main_touch_calib_pane_t_ParamLimits

0xcb86,	// (0x000193c0) list_single_fp_cale_pane_g3_ParamLimits

0xcb86,	// (0x000193c0) list_single_fp_cale_pane_g3

0x9927,	// (0x00016161) bg_button_pane_cp012_ParamLimits

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp03_ParamLimits

0x73f1,	// (0x00013c2b) cell_vitu2_function_top_pane_g1_ParamLimits

0x9927,	// (0x00016161) bg_vkb2_func_pane_cp04_ParamLimits

0x8106,	// (0x00014940) main_ncimui_button_group_pane_ParamLimits

0x8106,	// (0x00014940) main_ncimui_button_group_pane

0x8140,	// (0x0001497a) main_ncimui_pane_t3_ParamLimits

0x8140,	// (0x0001497a) main_ncimui_pane_t3

0xec24,	// (0x0001b45e) phacti_button_group_pane

0xef1a,	// (0x0001b754) aid_size_list_single_double_ParamLimits

0x911c,	// (0x00015956) popup_ezdial_listscroll_window_ParamLimits

0x9138,	// (0x00015972) popup_number_entry_window_cp01_ParamLimits

0x91e3,	// (0x00015a1d) phacti_button_pane_ParamLimits

0x91e3,	// (0x00015a1d) phacti_button_pane

0x98b7,	// (0x000160f1) bg_button_pane_cp14

0xeffe,	// (0x0001b838) phacti_button_pane_t1

0x91f4,	// (0x00015a2e) main_touch_calib_button_pane_ParamLimits

0x91f4,	// (0x00015a2e) main_touch_calib_button_pane

0xa09c,	// (0x000168d6) bg_button_pane_cp18_ParamLimits

0xa09c,	// (0x000168d6) bg_button_pane_cp18

0xf00c,	// (0x0001b846) main_touch_calib_button_pane_t1_ParamLimits

0xf00c,	// (0x0001b846) main_touch_calib_button_pane_t1

0xf022,	// (0x0001b85c) main_touch_calib_button_pane_t2_ParamLimits

0xf022,	// (0x0001b85c) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x0001c6c4) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x0001c6c4) main_touch_calib_button_pane_t

0x98b7,	// (0x000160f1) cell_ncimui_button_pane

0x98b7,	// (0x000160f1) bg_button_pane_cp032

0xf040,	// (0x0001b87a) cell_ncimui_button_pane_t1

0xd32b,	// (0x00019b65) image3_infobar_pane_ParamLimits

0xd32b,	// (0x00019b65) image3_infobar_pane

0x84ce,	// (0x00014d08) fs_bigclock_status_pane_ParamLimits

0x84ce,	// (0x00014d08) fs_bigclock_status_pane

0x84db,	// (0x00014d15) main_fs_bigclock_clock_pane_ParamLimits

0x84db,	// (0x00014d15) main_fs_bigclock_clock_pane

0x84ee,	// (0x00014d28) main_fs_bigclock_indi_pane_ParamLimits

0x84ee,	// (0x00014d28) main_fs_bigclock_indi_pane

0x8506,	// (0x00014d40) main_fs_bigclock_swipe_pane_ParamLimits

0x8506,	// (0x00014d40) main_fs_bigclock_swipe_pane

0x98b7,	// (0x000160f1) main_fs_clock_dumped_data

0xe545,	// (0x0001ad7f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe545,	// (0x0001ad7f) list_single_fs_bigclock_indicator_pane_g1

0xe561,	// (0x0001ad9b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe561,	// (0x0001ad9b) list_single_fs_bigclock_indicator_pane_g2

0xe57b,	// (0x0001adb5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe57b,	// (0x0001adb5) list_single_fs_bigclock_indicator_pane_g3

0xe595,	// (0x0001adcf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe595,	// (0x0001adcf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0001c4fc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0001c4fc) list_single_fs_bigclock_indicator_pane_g

0xe5bb,	// (0x0001adf5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe5bb,	// (0x0001adf5) list_single_fs_bigclock_indicator_pane_t1

0xe5e3,	// (0x0001ae1d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe5e3,	// (0x0001ae1d) list_single_fs_bigclock_indicator_pane_t2

0xe60b,	// (0x0001ae45) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe60b,	// (0x0001ae45) list_single_fs_bigclock_indicator_pane_t3

0xe633,	// (0x0001ae6d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe633,	// (0x0001ae6d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0001c507) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0001c507) list_single_fs_bigclock_indicator_pane_t

0xf04e,	// (0x0001b888) image3_infobar_fav_pane_ParamLimits

0xf04e,	// (0x0001b888) image3_infobar_fav_pane

0xf05e,	// (0x0001b898) image3_infobar_loc_pane_ParamLimits

0xf05e,	// (0x0001b898) image3_infobar_loc_pane

0xf072,	// (0x0001b8ac) image3_infobar_time_pane_ParamLimits

0xf072,	// (0x0001b8ac) image3_infobar_time_pane

0xc7ee,	// (0x00019028) image3_infobar_time_pane_g1

0xf082,	// (0x0001b8bc) image3_infobar_time_pane_t1

0xc7ee,	// (0x00019028) image3_infobar_loc_pane_g1

0xf090,	// (0x0001b8ca) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x0001c6c9) image3_infobar_loc_pane_g

0xf098,	// (0x0001b8d2) image3_infobar_loc_pane_t1

0xc7ee,	// (0x00019028) image3_infobar_fav_pane_g1

0xf0a6,	// (0x0001b8e0) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x0001c6ce) image3_infobar_fav_pane_g

0xf0ae,	// (0x0001b8e8) fs_bigclock_status_battery_pane

0xf0b7,	// (0x0001b8f1) fs_bigclock_status_signal_pane

0xf0c0,	// (0x0001b8fa) fs_bigclock_status_title_pane

0xf0c9,	// (0x0001b903) fs_bigclock_status_signal_pane_g1

0xf0d2,	// (0x0001b90c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x0001c6d3) fs_bigclock_status_signal_pane_g

0xf0da,	// (0x0001b914) fs_bigclock_status_battery_pane_g1

0xf0e3,	// (0x0001b91d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x0001c6d8) fs_bigclock_status_battery_pane_g

0xf0eb,	// (0x0001b925) fs_bigclock_status_title_pane_t1

0xc7ee,	// (0x00019028) main_fs_bigclock_clock_pane_g1

0xf0f9,	// (0x0001b933) main_fs_bigclock_clock_pane_g2

0xf0f9,	// (0x0001b933) main_fs_bigclock_clock_pane_g3

0xf0f9,	// (0x0001b933) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x0001c6dd) main_fs_bigclock_clock_pane_g

0xf101,	// (0x0001b93b) main_fs_bigclock_clock_pane_t1

0xf10f,	// (0x0001b949) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x0001c6e6) main_fs_bigclock_clock_pane_t

0xf11e,	// (0x0001b958) list_single_fs_bigclock_indicator_pane_ParamLimits

0xf11e,	// (0x0001b958) list_single_fs_bigclock_indicator_pane

0x9209,	// (0x00015a43) list_single_fs_bigclock_pane_ParamLimits

0x9209,	// (0x00015a43) list_single_fs_bigclock_pane

0x0063,	// (0x0000c89d) main_fs_bigclock_indicator_pane_t1

0x0072,	// (0x0000c8ac) list_single_fs_bigclock_pane_g1

0x007a,	// (0x0000c8b4) list_single_fs_bigclock_pane_t1

0xc7ee,	// (0x00019028) main_fs_bigclock_swipe_pane_g1

0x00b8,	// (0x0000c8f2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x0001c6f7) main_fs_bigclock_swipe_pane_g

0x00c0,	// (0x0000c8fa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x00c0,	// (0x0000c8fa) main_fs_bigclock_swipe_pane_t1

0x329b,	// (0x0000fad5) call_type_pane_ParamLimits

0x98b7,	// (0x000160f1) main_btmg_pane

0xedf0,	// (0x0001b62a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xedf0,	// (0x0001b62a) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x0001c66a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x0001c66a) list_single_cale_mrui_row_pane_g

0xef54,	// (0x0001b78e) list_recal_vselct_arw_lo_pane

0xef5c,	// (0x0001b796) list_recal_vselct_arw_up_pane

0xef64,	// (0x0001b79e) list_recal_vselct_pane

0x00dd,	// (0x0000c917) btmg_button_pane

0x926e,	// (0x00015aa8) main_btmg_pane_g1

0x98b7,	// (0x000160f1) bg_button_pane_cp044

0x00ef,	// (0x0000c929) btmg_button_pane_t1

0xc2e0,	// (0x00018b1a) aid_listscroll_gen

0x9927,	// (0x00016161) main_cntbar_detail_pane

0xeb01,	// (0x0001b33b) list_cmail_folder_pane

0xeb11,	// (0x0001b34b) sp_fs_scroll_pane_cp03_ParamLimits

0xeb8b,	// (0x0001b3c5) list_single_fs_dyc_pane_cp01_ParamLimits

0xeb8b,	// (0x0001b3c5) list_single_fs_dyc_pane_cp01

0x00fd,	// (0x0000c937) aid_size_cmail_indent

0x0106,	// (0x0000c940) list_single_dyc_row_pane_cp01

0x92a4,	// (0x00015ade) cntbar_detail_list_pane_ParamLimits

0x92a4,	// (0x00015ade) cntbar_detail_list_pane

0x92f0,	// (0x00015b2a) main_cntbar_detail_cont_pane_ParamLimits

0x92f0,	// (0x00015b2a) main_cntbar_detail_cont_pane

0x3235,	// (0x0000fa6f) scroll_pane_cp032_ParamLimits

0x3235,	// (0x0000fa6f) scroll_pane_cp032

0x9304,	// (0x00015b3e) cntbar_detail_list_event_pane_ParamLimits

0x9304,	// (0x00015b3e) cntbar_detail_list_event_pane

0x92b4,	// (0x00015aee) cntbar_detail_list_shct_pane

0xa65c,	// (0x00016e96) aid_list_gen

0x0189,	// (0x0000c9c3) aid_scroll

0x0192,	// (0x0000c9cc) aid_size_touch_scroll_bar

0x9314,	// (0x00015b4e) aid_list_double

0x01a4,	// (0x0000c9de) aid_list_single

0x9314,	// (0x00015b4e) aid_list_single_lg

0x01b6,	// (0x0000c9f0) aid_list_z_g_a_sm

0x01be,	// (0x0000c9f8) aid_list_z_g_d

0x01c6,	// (0x0000ca00) aid_txt_z_prm

0x931d,	// (0x00015b57) aid_txt_z_prm_cp01

0x932b,	// (0x00015b65) aid_txt_z_sec

0x9339,	// (0x00015b73) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9339,	// (0x00015b73) main_cntbar_detail_cont_pane_g1

0x934d,	// (0x00015b87) main_cntbar_detail_cont_pane_g2_ParamLimits

0x934d,	// (0x00015b87) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x0001c6fc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x0001c6fc) main_cntbar_detail_cont_pane_g

0x0209,	// (0x0000ca43) main_cntbar_detail_cont_pane_t1

0x0217,	// (0x0000ca51) main_cntbar_detail_cont_pane_t2

0x0225,	// (0x0000ca5f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x0001c701) main_cntbar_detail_cont_pane_t

0x935d,	// (0x00015b97) cell_cntbar_detail_list_shct_pane_ParamLimits

0x935d,	// (0x00015b97) cell_cntbar_detail_list_shct_pane

0x0247,	// (0x0000ca81) cntbar_detail_list_shct_pane_g1

0x0250,	// (0x0000ca8a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x0001c708) cntbar_detail_list_shct_pane_g

0x9371,	// (0x00015bab) cntbar_detail_list_event_pane_g1_ParamLimits

0x9371,	// (0x00015bab) cntbar_detail_list_event_pane_g1

0x937d,	// (0x00015bb7) cntbar_detail_list_event_pane_g2_ParamLimits

0x937d,	// (0x00015bb7) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x0001c70d) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x0001c70d) cntbar_detail_list_event_pane_g

0x93e9,	// (0x00015c23) cntbar_detail_list_event_pane_t1_ParamLimits

0x93e9,	// (0x00015c23) cntbar_detail_list_event_pane_t1

0x93fe,	// (0x00015c38) cntbar_detail_list_event_pane_t2_ParamLimits

0x93fe,	// (0x00015c38) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x0001c71a) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x0001c71a) cntbar_detail_list_event_pane_t

0xc7ee,	// (0x00019028) cell_cntbar_detail_list_shct_pane_g1

0x35fd,	// (0x0000fe37) navi_pane_mv_g3

0x9927,	// (0x00016161) main_cntbar_detail_pane_ParamLimits

0x98b7,	// (0x000160f1) main_notif_wgt_pane

0xd0e7,	// (0x00019921) aid_tch_main_mp4_pane_g4

0xd2bf,	// (0x00019af9) popup_slider_window_cp02

0xef4b,	// (0x0001b785) list_recal_day_event_pane

0x9278,	// (0x00015ab2) cntbar_detail_btn_pane_ParamLimits

0x9278,	// (0x00015ab2) cntbar_detail_btn_pane

0x928e,	// (0x00015ac8) cntbar_detail_btn_pane_cp01_ParamLimits

0x928e,	// (0x00015ac8) cntbar_detail_btn_pane_cp01

0x92b4,	// (0x00015aee) cntbar_detail_list_shct_pane_ParamLimits

0x92c4,	// (0x00015afe) cntbar_detail_pane_g1_ParamLimits

0x92c4,	// (0x00015afe) cntbar_detail_pane_g1

0x92d4,	// (0x00015b0e) cntbar_detail_pane_t1_ParamLimits

0x92d4,	// (0x00015b0e) cntbar_detail_pane_t1

0x9389,	// (0x00015bc3) cntbar_detail_list_event_pane_g3_ParamLimits

0x9389,	// (0x00015bc3) cntbar_detail_list_event_pane_g3

0x93a1,	// (0x00015bdb) cntbar_detail_list_event_pane_g4_ParamLimits

0x93a1,	// (0x00015bdb) cntbar_detail_list_event_pane_g4

0x93b9,	// (0x00015bf3) cntbar_detail_list_event_pane_g5_ParamLimits

0x93b9,	// (0x00015bf3) cntbar_detail_list_event_pane_g5

0x93d1,	// (0x00015c0b) cntbar_detail_list_event_pane_g6_ParamLimits

0x93d1,	// (0x00015c0b) cntbar_detail_list_event_pane_g6

0x9413,	// (0x00015c4d) cntbar_detail_list_event_pane_t3_ParamLimits

0x9413,	// (0x00015c4d) cntbar_detail_list_event_pane_t3

0x9425,	// (0x00015c5f) popup_notif_wgt_window_ParamLimits

0x9425,	// (0x00015c5f) popup_notif_wgt_window

0x943e,	// (0x00015c78) popup_submenu_window_cp01_ParamLimits

0x943e,	// (0x00015c78) popup_submenu_window_cp01

0xae2b,	// (0x00017665) bg_popup_window_pane_cp10

0x032b,	// (0x0000cb65) listscroll_notif_wgt_pane

0x0335,	// (0x0000cb6f) list_notif_wgt_window

0x033e,	// (0x0000cb78) scroll_pane_cp033

0xef08,	// (0x0001b742) list_notif_wgt_row_pane_ParamLimits

0xef08,	// (0x0001b742) list_notif_wgt_row_pane

0x0347,	// (0x0000cb81) aid_size_list_notif_wgt_del

0x0350,	// (0x0000cb8a) list_notif_wgt_row_pane_g1

0x0358,	// (0x0000cb92) list_notif_wgt_row_pane_g2

0x0360,	// (0x0000cb9a) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x0001c721) list_notif_wgt_row_pane_g

0x0369,	// (0x0000cba3) list_notif_wgt_row_pane_t1

0x0377,	// (0x0000cbb1) list_notif_wgt_row_pane_t2

0x0385,	// (0x0000cbbf) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x0001c728) list_notif_wgt_row_pane_t

0xd7f2,	// (0x0001a02c) list_recal_day_event_pane_g1

0x0393,	// (0x0000cbcd) list_recal_day_event_pane_t1

0x98b7,	// (0x000160f1) bg_button_pane_cp045

0x03a2,	// (0x0000cbdc) cntbar_detail_btn_pane_t1

0xc2e8,	// (0x00018b22) main_callh_pane_ParamLimits

0xc2e8,	// (0x00018b22) main_callh_pane

0x98b7,	// (0x000160f1) main_coverflow0_pane

0x98b7,	// (0x000160f1) main_wgtman_pane

0x8514,	// (0x00014d4e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8514,	// (0x00014d4e) main_fs_bigclock_unlock_btn_pane

0x8ce0,	// (0x0001551a) bg_button_pane_cp16

0x8cf8,	// (0x00015532) cell_tport_appsw_pane_g3

0x9450,	// (0x00015c8a) cf0_flow_pane_ParamLimits

0x9450,	// (0x00015c8a) cf0_flow_pane

0x03bf,	// (0x0000cbf9) listscroll_cf0_pane

0x03c8,	// (0x0000cc02) main_cf0_pane_g1

0x9465,	// (0x00015c9f) main_cf0_pane_t1_ParamLimits

0x9465,	// (0x00015c9f) main_cf0_pane_t1

0x947d,	// (0x00015cb7) main_cf0_pane_t2_ParamLimits

0x947d,	// (0x00015cb7) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x0001c72f) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x0001c72f) main_cf0_pane_t

0x03fa,	// (0x0000cc34) scroll_pane_cp11

0x9495,	// (0x00015ccf) cf0_flow_pane_g1

0x949d,	// (0x00015cd7) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x0001c734) cf0_flow_pane_g

0x94a5,	// (0x00015cdf) cf0_flow_pane_t1

0x98b7,	// (0x000160f1) main_call6_pane

0x98b7,	// (0x000160f1) main_calllock_pane

0x94b3,	// (0x00015ced) call6_btn_grp_pane_ParamLimits

0x94b3,	// (0x00015ced) call6_btn_grp_pane

0x94cd,	// (0x00015d07) call6_pane_g1_ParamLimits

0x94cd,	// (0x00015d07) call6_pane_g1

0x94e2,	// (0x00015d1c) popup_call6_1st_window_ParamLimits

0x94e2,	// (0x00015d1c) popup_call6_1st_window

0x94f3,	// (0x00015d2d) popup_call6_2nd_window_ParamLimits

0x94f3,	// (0x00015d2d) popup_call6_2nd_window

0x9504,	// (0x00015d3e) cell_call6_btn_pane_ParamLimits

0x9504,	// (0x00015d3e) cell_call6_btn_pane

0xae2b,	// (0x00017665) bg_popup_call2_in_pane_cp03

0x046c,	// (0x0000cca6) popup_call6_1st_window_g1

0x0474,	// (0x0000ccae) popup_call6_1st_window_g2

0x047c,	// (0x0000ccb6) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x0001c739) popup_call6_1st_window_g

0x0484,	// (0x0000ccbe) popup_call6_1st_window_t1

0x0493,	// (0x0000cccd) popup_call6_1st_window_t2

0x04a3,	// (0x0000ccdd) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x0001c740) popup_call6_1st_window_t

0xae2b,	// (0x00017665) bg_popup_call2_in_pane_cp04

0x046c,	// (0x0000cca6) popup_call6_2nd_window_g1

0x0474,	// (0x0000ccae) popup_call6_2nd_window_g2

0x047c,	// (0x0000ccb6) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x0001c739) popup_call6_2nd_window_g

0x0484,	// (0x0000ccbe) popup_call6_2nd_window_t1

0x98b7,	// (0x000160f1) bg_button_pane_cp15

0x04b3,	// (0x0000cced) cell_call6_btn_pane_g1

0x04bc,	// (0x0000ccf6) cell_call6_btn_pane_t1

0x9518,	// (0x00015d52) listscroll_wgtman_pane_ParamLimits

0x9518,	// (0x00015d52) listscroll_wgtman_pane

0x9530,	// (0x00015d6a) wgtman_btn_pane_ParamLimits

0x9530,	// (0x00015d6a) wgtman_btn_pane

0xace2,	// (0x0001751c) aid_scroll_copy1

0x04e8,	// (0x0000cd22) list_wgtman_pane

0x9549,	// (0x00015d83) wgtman_btn_pane_g1_ParamLimits

0x9549,	// (0x00015d83) wgtman_btn_pane_g1

0x955d,	// (0x00015d97) wgtman_btn_pane_t1_ParamLimits

0x955d,	// (0x00015d97) wgtman_btn_pane_t1

0x0510,	// (0x0000cd4a) wgtman_btn_pane_t2_ParamLimits

0x0510,	// (0x0000cd4a) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x0001c747) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x0001c747) wgtman_btn_pane_t

0x9578,	// (0x00015db2) listrow_wgtman_pane_ParamLimits

0x9578,	// (0x00015db2) listrow_wgtman_pane

0x958a,	// (0x00015dc4) listrow_wgtman_pane_g1

0x9593,	// (0x00015dcd) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x0001c74c) listrow_wgtman_pane_g

0x959d,	// (0x00015dd7) listrow_wgtman_pane_t1

0x95ab,	// (0x00015de5) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x0001c751) listrow_wgtman_pane_t

0x95b9,	// (0x00015df3) wait_bar_pane_cp09

0x0574,	// (0x0000cdae) main_calllock_btn_pane

0x057e,	// (0x0000cdb8) main_calllock_pane_g1

0x98b7,	// (0x000160f1) bg_button_pane_cp17

0x058a,	// (0x0000cdc4) main_calllock_btn_pane_g1

0x0593,	// (0x0000cdcd) main_calllock_btn_pane_t1

0x98b7,	// (0x000160f1) main_dialer3_pane

0x98b7,	// (0x000160f1) main_fmrd2_pane

0xc7ee,	// (0x00019028) main_fs_bigclock_unlock_btn_pane_g1

0x05aa,	// (0x0000cde4) main_fs_bigclock_unlock_btn_pane_t1

0x95c1,	// (0x00015dfb) area_fmrd2_info_pane_ParamLimits

0x95c1,	// (0x00015dfb) area_fmrd2_info_pane

0x95d3,	// (0x00015e0d) area_fmrd2_visual_pane_ParamLimits

0x95d3,	// (0x00015e0d) area_fmrd2_visual_pane

0x95e1,	// (0x00015e1b) fmrd2_indi_pane_ParamLimits

0x95e1,	// (0x00015e1b) fmrd2_indi_pane

0x95ee,	// (0x00015e28) area_fmrd2_visual_pane_g1

0x95f6,	// (0x00015e30) area_fmrd2_visual_pane_t1

0x9606,	// (0x00015e40) area_fmrd2_visual_pane_t2

0x9616,	// (0x00015e50) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x0001c75b) area_fmrd2_visual_pane_t

0x9626,	// (0x00015e60) area_fmrd2_info_pane_g1

0x962e,	// (0x00015e68) area_fmrd2_info_pane_t1

0x963e,	// (0x00015e78) area_fmrd2_info_pane_t2

0x964e,	// (0x00015e88) area_fmrd2_info_pane_t3

0x965e,	// (0x00015e98) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x0001c762) area_fmrd2_info_pane_t

0x966c,	// (0x00015ea6) fmrd2_indi_pane_t1

0x967c,	// (0x00015eb6) fmrd2_indi_pane_t2

0x968c,	// (0x00015ec6) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x0001c76b) fmrd2_indi_pane_t

0xe5a4,	// (0x0001adde) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe5a4,	// (0x0001adde) list_single_fs_bigclock_indicator_pane_g5

0xe648,	// (0x0001ae82) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe648,	// (0x0001ae82) list_single_fs_bigclock_indicator_pane_t5

0x8e97,	// (0x000156d1) aid_cell_bcale_month_pane_ParamLimits

0x8e97,	// (0x000156d1) aid_cell_bcale_month_pane

0x8ea9,	// (0x000156e3) bcale_month_pane_ParamLimits

0x8ea9,	// (0x000156e3) bcale_month_pane

0x8ec1,	// (0x000156fb) bcale_preview_pane_ParamLimits

0x8ec1,	// (0x000156fb) bcale_preview_pane

0x007a,	// (0x0000c8b4) list_single_fs_bigclock_pane_t1_ParamLimits

0x0094,	// (0x0000c8ce) list_single_fs_bigclock_pane_t2_ParamLimits

0x0094,	// (0x0000c8ce) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x0001c6f2) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x0001c6f2) list_single_fs_bigclock_pane_t

0x05a2,	// (0x0000cddc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x0001c756) main_fs_bigclock_unlock_btn_pane_g

0x969c,	// (0x00015ed6) aid_dia3_key_size_ParamLimits

0x969c,	// (0x00015ed6) aid_dia3_key_size

0x96ab,	// (0x00015ee5) aid_dia3_listrow_size_ParamLimits

0x96ab,	// (0x00015ee5) aid_dia3_listrow_size

0x96b9,	// (0x00015ef3) dia3_keypad_fun_pane_ParamLimits

0x96b9,	// (0x00015ef3) dia3_keypad_fun_pane

0x96d3,	// (0x00015f0d) dia3_keypad_num_pane_ParamLimits

0x96d3,	// (0x00015f0d) dia3_keypad_num_pane

0x96ec,	// (0x00015f26) dia3_listscroll_pane_ParamLimits

0x96ec,	// (0x00015f26) dia3_listscroll_pane

0x96ff,	// (0x00015f39) dia3_numentry_pane_ParamLimits

0x96ff,	// (0x00015f39) dia3_numentry_pane

0x06e4,	// (0x0000cf1e) dia3_list_pane

0x06ef,	// (0x0000cf29) scroll_pane_cp12

0x98b7,	// (0x000160f1) bg_dia3_numentry_pane

0x06fa,	// (0x0000cf34) dia3_numentry_pane_t1

0x9710,	// (0x00015f4a) cell_dia3_key_num_pane

0x9718,	// (0x00015f52) cell_dia3_key0_fun_pane_ParamLimits

0x9718,	// (0x00015f52) cell_dia3_key0_fun_pane

0x972c,	// (0x00015f66) cell_dia3_key1_fun_pane_ParamLimits

0x972c,	// (0x00015f66) cell_dia3_key1_fun_pane

0x0788,	// (0x0000cfc2) dia3_listrow_pane

0xe2d2,	// (0x0001ab0c) bg_dia3_numentry_pane_g1

0x98b7,	// (0x000160f1) bg_button_pane_cp21

0x0734,	// (0x0000cf6e) cell_dia3_key_num_pane_t1

0x0742,	// (0x0000cf7c) cell_dia3_key_num_pane_t2

0x0751,	// (0x0000cf8b) cell_dia3_key_num_pane_t3

0x0760,	// (0x0000cf9a) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x0001c772) cell_dia3_key_num_pane_t

0x98b7,	// (0x000160f1) bg_button_pane_cp19

0x9744,	// (0x00015f7e) cell_dia3_key0_fun_pane_g1

0x98b7,	// (0x000160f1) bg_button_pane_cp20

0x974c,	// (0x00015f86) cell_dia3_key1_fun_pane_g1

0x9754,	// (0x00015f8e) area_left_week_number_pane

0x975d,	// (0x00015f97) area_top_day_name_pane

0x9766,	// (0x00015fa0) frame_month_view_pane

0x9772,	// (0x00015fac) grid_month_view_pane

0x977c,	// (0x00015fb6) cell_top_day_name_pane_ParamLimits

0x977c,	// (0x00015fb6) cell_top_day_name_pane

0xd545,	// (0x00019d7f) cell_area_left_week_number_pane_ParamLimits

0xd545,	// (0x00019d7f) cell_area_left_week_number_pane

0x9794,	// (0x00015fce) cell_month_view_pane_ParamLimits

0x9794,	// (0x00015fce) cell_month_view_pane

0x07f0,	// (0x0000d02a) frm_month_g1

0x97af,	// (0x00015fe9) frm_month_g2

0x97b9,	// (0x00015ff3) frm_month_g3

0x97c3,	// (0x00015ffd) frm_month_g4

0x97cd,	// (0x00016007) frm_month_g5

0x97d7,	// (0x00016011) frm_month_g6

0x97e1,	// (0x0001601b) frm_month_g7

0x0835,	// (0x0000d06f) frm_month_g8

0x97ed,	// (0x00016027) frm_month_g9

0x97f6,	// (0x00016030) frm_month_g10

0x97ff,	// (0x00016039) frm_month_g11

0x9808,	// (0x00016042) frm_month_g12

0x9811,	// (0x0001604b) frm_month_g13

0x981a,	// (0x00016054) frm_month_g14

0x9823,	// (0x0001605d) frm_month_g15

0x982c,	// (0x00016066) frm_month_g16

0x000f,

0xff41,	// (0x0001c77b) frm_month_g

0x9837,	// (0x00016071) cell_top_day_name_pane_t1

0x9846,	// (0x00016080) cell_area_left_week_number_pane_g1

0x9837,	// (0x00016071) cell_area_left_week_number_pane_t1

0xc7ee,	// (0x00019028) cell_month_view_pane_g1

0x984e,	// (0x00016088) cell_month_view_pane_t1

0x98b7,	// (0x000160f1) main_fps_pane

0xe879,	// (0x0001b0b3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe879,	// (0x0001b0b3) cmail_ddmenu_btn02_pane_cp1

0xe895,	// (0x0001b0cf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe895,	// (0x0001b0cf) cmail_ddmenu_btn02_pane_cp2

0x916a,	// (0x000159a4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x916a,	// (0x000159a4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x0001c6a3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x0001c6a3) cmail_ddmenu_btn02_pane_g

0x9188,	// (0x000159c2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9188,	// (0x000159c2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x0001c6a8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x0001c6a8) cmail_ddmenu_btn02_pane_t

0x985d,	// (0x00016097) fps_text_pane_ParamLimits

0x985d,	// (0x00016097) fps_text_pane

0x9874,	// (0x000160ae) main_fps_pane_g1_ParamLimits

0x9874,	// (0x000160ae) main_fps_pane_g1

0x988e,	// (0x000160c8) wait_bar_pane_cp010_ParamLimits

0x988e,	// (0x000160c8) wait_bar_pane_cp010

0x989f,	// (0x000160d9) fps_text_pane_t1_ParamLimits

0x989f,	// (0x000160d9) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
