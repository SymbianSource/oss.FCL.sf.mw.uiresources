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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001561c };

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
0x857e,	// (0x0001db9a) Screen

0x858a,	// (0x0001dba6) application_window

0x85ca,	// (0x0001dbe6) area_bottom_pane_ParamLimits

0x85ca,	// (0x0001dbe6) area_bottom_pane

0x85ff,	// (0x0001dc1b) area_top_pane_ParamLimits

0x85ff,	// (0x0001dc1b) area_top_pane

0x0b27,	// (0x00016143) call_video_uplink_pane_ParamLimits

0x0b27,	// (0x00016143) call_video_uplink_pane

0x868d,	// (0x0001dca9) main_pane_ParamLimits

0x868d,	// (0x0001dca9) main_pane

0x3553,	// (0x00018b6f) context_pane

0xb154,	// (0x00020770) navi_pane

0xb174,	// (0x00020790) popup_cale_events_window_ParamLimits

0xb174,	// (0x00020790) popup_cale_events_window

0x3566,	// (0x00018b82) popup_mup_playback_window

0xb18c,	// (0x000207a8) signal_pane

0x12ba,	// (0x000168d6) main_browser_pane

0x2049,	// (0x00017665) main_burst_pane

0xb01e,	// (0x0002063a) main_calc_pane

0x2049,	// (0x00017665) main_cale_day_pane

0x12ba,	// (0x000168d6) main_cale_month_pane

0x2049,	// (0x00017665) main_cale_week_pane

0x2049,	// (0x00017665) main_call_pane

0x0f66,	// (0x00016582) main_call_poc_pane

0x2049,	// (0x00017665) main_camera_pane

0x2049,	// (0x00017665) main_chi_dic_pane

0x1ece,	// (0x000174ea) main_clock_pane

0x0f66,	// (0x00016582) main_fmradio_pane

0x2049,	// (0x00017665) main_graph_messa_pane

0x0f66,	// (0x00016582) main_help_pane

0x12ba,	// (0x000168d6) main_im_pane

0x11c1,	// (0x000167dd) main_image_pane_ParamLimits

0x11c1,	// (0x000167dd) main_image_pane

0x0f66,	// (0x00016582) main_location2_pane

0x2049,	// (0x00017665) main_location_pane

0x0f66,	// (0x00016582) main_messa_pane

0x0f66,	// (0x00016582) main_mp2_pane

0x2049,	// (0x00017665) main_mp_pane

0x0f66,	// (0x00016582) main_msg_pane

0x0f66,	// (0x00016582) main_mup_eq_pane

0x0f66,	// (0x00016582) main_mup_pane

0x2049,	// (0x00017665) main_notes_pane

0x0f66,	// (0x00016582) main_pec_pane

0x0f66,	// (0x00016582) main_phob_pane

0x0f66,	// (0x00016582) main_pinb_pane

0x0f66,	// (0x00016582) main_postcard_pane

0x0f66,	// (0x00016582) main_qdial_pane

0x2049,	// (0x00017665) main_skin_pane

0x0f66,	// (0x00016582) main_smil2_pane

0x2049,	// (0x00017665) main_smil_pane

0x2049,	// (0x00017665) main_video_pane

0x2049,	// (0x00017665) main_video_tele_pane

0x11c1,	// (0x000167dd) main_viewer_pane_ParamLimits

0x11c1,	// (0x000167dd) main_viewer_pane

0x2049,	// (0x00017665) main_vorec_pane

0xb054,	// (0x00020670) popup_blid_sat_info_window_ParamLimits

0xb054,	// (0x00020670) popup_blid_sat_info_window

0xb06a,	// (0x00020686) popup_dyc_status_message_window_ParamLimits

0xb06a,	// (0x00020686) popup_dyc_status_message_window

0xb07a,	// (0x00020696) popup_grid_large_graphic_window_ParamLimits

0xb07a,	// (0x00020696) popup_grid_large_graphic_window

0xb0f0,	// (0x0002070c) popup_loc_request_window_ParamLimits

0xb0f0,	// (0x0002070c) popup_loc_request_window

0xb12c,	// (0x00020748) popup_wml_address_window_ParamLimits

0xb12c,	// (0x00020748) popup_wml_address_window

0xaef6,	// (0x00020512) call_muted_g1

0xabb8,	// (0x000201d4) popup_call_audio_conf_window_ParamLimits

0xabb8,	// (0x000201d4) popup_call_audio_conf_window

0xaf06,	// (0x00020522) popup_call_audio_first_window_ParamLimits

0xaf06,	// (0x00020522) popup_call_audio_first_window

0xaf46,	// (0x00020562) popup_call_audio_in_window_ParamLimits

0xaf46,	// (0x00020562) popup_call_audio_in_window

0xaf6a,	// (0x00020586) popup_call_audio_out_window_ParamLimits

0xaf6a,	// (0x00020586) popup_call_audio_out_window

0xaf8c,	// (0x000205a8) popup_call_audio_second_window_ParamLimits

0xaf8c,	// (0x000205a8) popup_call_audio_second_window

0xafbc,	// (0x000205d8) popup_call_audio_wait_window_ParamLimits

0xafbc,	// (0x000205d8) popup_call_audio_wait_window

0xafdd,	// (0x000205f9) popup_number_entry_window_ParamLimits

0xafdd,	// (0x000205f9) popup_number_entry_window

0x0b53,	// (0x0001616f) bg_popup_call_pane_cp05_ParamLimits

0x0b53,	// (0x0001616f) bg_popup_call_pane_cp05

0x0b73,	// (0x0001618f) popup_number_entry_window_t1

0x0b86,	// (0x000161a2) popup_number_entry_window_t2

0x0b98,	// (0x000161b4) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0002474b) popup_number_entry_window_t

0x0baa,	// (0x000161c6) text_title_cp2

0x0bbd,	// (0x000161d9) bg_popup_call_pane_cp_ParamLimits

0x0bbd,	// (0x000161d9) bg_popup_call_pane_cp

0x0bcb,	// (0x000161e7) call_thumbnail_pane

0x0bd3,	// (0x000161ef) popup_call_audio_in_window_g1_ParamLimits

0x0bd3,	// (0x000161ef) popup_call_audio_in_window_g1

0x0bdf,	// (0x000161fb) popup_call_audio_in_window_g2_ParamLimits

0x0bdf,	// (0x000161fb) popup_call_audio_in_window_g2

0x0beb,	// (0x00016207) popup_call_audio_in_window_g3_ParamLimits

0x0beb,	// (0x00016207) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00024754) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00024754) popup_call_audio_in_window_g

0x0bf7,	// (0x00016213) popup_call_audio_in_window_t1_ParamLimits

0x0bf7,	// (0x00016213) popup_call_audio_in_window_t1

0x0c13,	// (0x0001622f) popup_call_audio_in_window_t2_ParamLimits

0x0c13,	// (0x0001622f) popup_call_audio_in_window_t2

0x0c2f,	// (0x0001624b) popup_call_audio_in_window_t3_ParamLimits

0x0c2f,	// (0x0001624b) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0002475b) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0002475b) popup_call_audio_in_window_t

0x0bbd,	// (0x000161d9) bg_popup_call_pane_cp01_ParamLimits

0x0bbd,	// (0x000161d9) bg_popup_call_pane_cp01

0x0bcb,	// (0x000161e7) call_thumbnail_pane_cp02

0x0c42,	// (0x0001625e) call_type_pane_cp022

0x0c4a,	// (0x00016266) popup_call_audio_out_window_g1_ParamLimits

0x0c4a,	// (0x00016266) popup_call_audio_out_window_g1

0x0c5c,	// (0x00016278) popup_call_audio_out_window_g2_ParamLimits

0x0c5c,	// (0x00016278) popup_call_audio_out_window_g2

0x0c68,	// (0x00016284) popup_call_audio_out_window_g3_ParamLimits

0x0c68,	// (0x00016284) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00024762) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00024762) popup_call_audio_out_window_g

0x0c7a,	// (0x00016296) popup_call_audio_out_window_t1_ParamLimits

0x0c7a,	// (0x00016296) popup_call_audio_out_window_t1

0x0c92,	// (0x000162ae) popup_call_audio_out_window_t2_ParamLimits

0x0c92,	// (0x000162ae) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00024769) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00024769) popup_call_audio_out_window_t

0x0ca7,	// (0x000162c3) bg_popup_call_pane_ParamLimits

0x0ca7,	// (0x000162c3) bg_popup_call_pane

0x8873,	// (0x0001de8f) call_thumbnail_pane_cp_ParamLimits

0x8873,	// (0x0001de8f) call_thumbnail_pane_cp

0x0d2b,	// (0x00016347) call_type_pane_cp01_ParamLimits

0x0d2b,	// (0x00016347) call_type_pane_cp01

0x0d6f,	// (0x0001638b) popup_call_audio_first_window_g1_ParamLimits

0x0d6f,	// (0x0001638b) popup_call_audio_first_window_g1

0x0dbb,	// (0x000163d7) popup_call_audio_first_window_g2_ParamLimits

0x0dbb,	// (0x000163d7) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0002476e) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0002476e) popup_call_audio_first_window_g

0x0dff,	// (0x0001641b) popup_call_audio_first_window_t1_ParamLimits

0x0dff,	// (0x0001641b) popup_call_audio_first_window_t1

0x0eab,	// (0x000164c7) popup_call_audio_first_window_t4_ParamLimits

0x0eab,	// (0x000164c7) popup_call_audio_first_window_t4

0x0f37,	// (0x00016553) popup_call_audio_first_window_t5_ParamLimits

0x0f37,	// (0x00016553) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00024773) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00024773) popup_call_audio_first_window_t

0x0f66,	// (0x00016582) bg_popup_call_pane_cp02

0x0f70,	// (0x0001658c) call_type_pane_cp023

0x0f78,	// (0x00016594) popup_call_audio_wait_window_g1

0x0f80,	// (0x0001659c) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002477a) popup_call_audio_wait_window_g

0x0f88,	// (0x000165a4) popup_call_audio_wait_window_t3

0x0f96,	// (0x000165b2) bg_popup_call_pane_cp03_ParamLimits

0x0f96,	// (0x000165b2) bg_popup_call_pane_cp03

0x0ff6,	// (0x00016612) call_thumbnail_pane_cp011_ParamLimits

0x0ff6,	// (0x00016612) call_thumbnail_pane_cp011

0x1002,	// (0x0001661e) call_type_pane_cp034_ParamLimits

0x1002,	// (0x0001661e) call_type_pane_cp034

0x103e,	// (0x0001665a) popup_call_audio_second_window_g1_ParamLimits

0x103e,	// (0x0001665a) popup_call_audio_second_window_g1

0x107a,	// (0x00016696) popup_call_audio_second_window_g2_ParamLimits

0x107a,	// (0x00016696) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0002477f) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0002477f) popup_call_audio_second_window_g

0x10b6,	// (0x000166d2) popup_call_audio_second_window_t1_ParamLimits

0x10b6,	// (0x000166d2) popup_call_audio_second_window_t1

0x1137,	// (0x00016753) popup_call_audio_second_window_t2_ParamLimits

0x1137,	// (0x00016753) popup_call_audio_second_window_t2

0x116d,	// (0x00016789) popup_call_audio_second_window_t3_ParamLimits

0x116d,	// (0x00016789) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00024784) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00024784) popup_call_audio_second_window_t

0x0f66,	// (0x00016582) bg_popup_call_pane_cp04

0x11a3,	// (0x000167bf) list_conf_pane

0x11ab,	// (0x000167c7) popup_call_audio_conf_window_t1

0x11b9,	// (0x000167d5) call_thumbnail_pane_g1

0x11c1,	// (0x000167dd) bg_pinb_pane_ParamLimits

0x11c1,	// (0x000167dd) bg_pinb_pane

0x11cf,	// (0x000167eb) find_pinb_pane

0x11d8,	// (0x000167f4) listscroll_pinb_pane_ParamLimits

0x11d8,	// (0x000167f4) listscroll_pinb_pane

0x11e7,	// (0x00016803) pinb_bg_pane_g1

0x8897,	// (0x0001deb3) pinb_bg_pane_g2

0x88a3,	// (0x0001debf) pinb_bg_pane_g3

0x88af,	// (0x0001decb) pinb_bg_pane_g4

0x88bb,	// (0x0001ded7) pinb_bg_pane_g5

0x88c7,	// (0x0001dee3) pinb_bg_pane_g6

0x88d2,	// (0x0001deee) pinb_bg_pane_g7

0x88dd,	// (0x0001def9) pinb_bg_pane_g8

0x88e8,	// (0x0001df04) pinb_bg_pane_g9

0x88f2,	// (0x0001df0e) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0002478b) pinb_bg_pane_g

0x890f,	// (0x0001df2b) grid_pinb_pane

0x891a,	// (0x0001df36) list_pinb_pane

0x8925,	// (0x0001df41) scroll_pane_cp01_ParamLimits

0x8925,	// (0x0001df41) scroll_pane_cp01

0x11f1,	// (0x0001680d) find_pinb_pane_g1_ParamLimits

0x11f1,	// (0x0001680d) find_pinb_pane_g1

0x1209,	// (0x00016825) find_pinb_pane_t1

0x121b,	// (0x00016837) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000247a5) find_pinb_pane_t

0x1230,	// (0x0001684c) input_focus_pane_cp01_ParamLimits

0x1230,	// (0x0001684c) input_focus_pane_cp01

0x8937,	// (0x0001df53) cell_pinb_pane_ParamLimits

0x8937,	// (0x0001df53) cell_pinb_pane

0x895c,	// (0x0001df78) cell_pinb_pane_g1_ParamLimits

0x895c,	// (0x0001df78) cell_pinb_pane_g1

0x8971,	// (0x0001df8d) cell_pinb_pane_g2_ParamLimits

0x8971,	// (0x0001df8d) cell_pinb_pane_g2

0x123c,	// (0x00016858) cell_pinb_pane_g3_ParamLimits

0x123c,	// (0x00016858) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000247aa) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000247aa) cell_pinb_pane_g

0x0f66,	// (0x00016582) grid_highlight_pane_cp01

0x897d,	// (0x0001df99) list_pinb_item_pane_ParamLimits

0x897d,	// (0x0001df99) list_pinb_item_pane

0x0f66,	// (0x00016582) list_highlight_pane_cp02

0x899d,	// (0x0001dfb9) list_pinb_item_pane_g1_ParamLimits

0x899d,	// (0x0001dfb9) list_pinb_item_pane_g1

0x1248,	// (0x00016864) list_pinb_item_pane_g2_ParamLimits

0x1248,	// (0x00016864) list_pinb_item_pane_g2

0x89aa,	// (0x0001dfc6) list_pinb_item_pane_g3_ParamLimits

0x89aa,	// (0x0001dfc6) list_pinb_item_pane_g3

0x89bb,	// (0x0001dfd7) list_pinb_item_pane_g4_ParamLimits

0x89bb,	// (0x0001dfd7) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000247b1) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000247b1) list_pinb_item_pane_g

0x89c7,	// (0x0001dfe3) list_pinb_item_pane_t1_ParamLimits

0x89c7,	// (0x0001dfe3) list_pinb_item_pane_t1

0x719a,	// (0x0001c7b6) calc_display_pane

0x71b8,	// (0x0001c7d4) calc_paper_pane

0x71d4,	// (0x0001c7f0) grid_calc_pane

0x0f66,	// (0x00016582) bg_list_pane_cp01

0x89de,	// (0x0001dffa) clock_g1

0x89e6,	// (0x0001e002) clock_g2

0x0001,

0xf19e,	// (0x000247ba) clock_g

0x89f0,	// (0x0001e00c) clock_t1_ParamLimits

0x89f0,	// (0x0001e00c) clock_t1

0x8a05,	// (0x0001e021) clock_t2_ParamLimits

0x8a05,	// (0x0001e021) clock_t2

0x8a17,	// (0x0001e033) clock_t3_ParamLimits

0x8a17,	// (0x0001e033) clock_t3

0x8a29,	// (0x0001e045) clock_t4_ParamLimits

0x8a29,	// (0x0001e045) clock_t4

0x8a3b,	// (0x0001e057) clock_t5_ParamLimits

0x8a3b,	// (0x0001e057) clock_t5

0x8a50,	// (0x0001e06c) clock_t6_ParamLimits

0x8a50,	// (0x0001e06c) clock_t6

0x8a62,	// (0x0001e07e) clock_t7_ParamLimits

0x8a62,	// (0x0001e07e) clock_t7

0x8a74,	// (0x0001e090) clock_t8_ParamLimits

0x8a74,	// (0x0001e090) clock_t8

0x8a8a,	// (0x0001e0a6) clock_t9_ParamLimits

0x8a8a,	// (0x0001e0a6) clock_t9

0x0008,

0xf1a3,	// (0x000247bf) clock_t_ParamLimits

0xf1a3,	// (0x000247bf) clock_t

0x125c,	// (0x00016878) popup_clock_analogue_window_cp02

0x125c,	// (0x00016878) popup_clock_digital_window_cp01

0x1264,	// (0x00016880) listscroll_help_pane

0x0f66,	// (0x00016582) phob_pre_status_pane

0x126e,	// (0x0001688a) grid_qdial_pane

0x0f66,	// (0x00016582) listscroll_mce_pane

0x1278,	// (0x00016894) bg_notes_pane

0x1282,	// (0x0001689e) list_notes_pane

0x8aa0,	// (0x0001e0bc) scroll_pane_cp06

0x128c,	// (0x000168a8) bg_calc_paper_pane

0x7208,	// (0x0001c824) list_calc_pane

0x12ba,	// (0x000168d6) bg_calc_display_pane

0x7222,	// (0x0001c83e) calc_display_pane_t1

0x7237,	// (0x0001c853) calc_display_pane_t2

0x724c,	// (0x0001c868) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000247d2) calc_display_pane_t

0x725e,	// (0x0001c87a) cell_calc_pane_ParamLimits

0x725e,	// (0x0001c87a) cell_calc_pane

0x12d8,	// (0x000168f4) bg_calc_paper_pane_g1

0x12f0,	// (0x0001690c) bg_calc_paper_pane_g2

0x12e4,	// (0x00016900) bg_calc_paper_pane_g3

0x1308,	// (0x00016924) bg_calc_paper_pane_g4

0x12fc,	// (0x00016918) bg_calc_paper_pane_g5

0x8aab,	// (0x0001e0c7) bg_calc_paper_pane_g6

0x8abc,	// (0x0001e0d8) bg_calc_paper_pane_g7

0x8acd,	// (0x0001e0e9) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x000247d9) bg_calc_paper_pane_g

0x8ade,	// (0x0001e0fa) calc_bg_paper_pane_g9

0x8aef,	// (0x0001e10b) list_calc_item_pane_ParamLimits

0x8aef,	// (0x0001e10b) list_calc_item_pane

0x1314,	// (0x00016930) list_calc_item_pane_g1

0x728b,	// (0x0001c8a7) list_calc_item_pane_t1_ParamLimits

0x728b,	// (0x0001c8a7) list_calc_item_pane_t1

0x729d,	// (0x0001c8b9) list_calc_item_pane_t2_ParamLimits

0x729d,	// (0x0001c8b9) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000247ea) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000247ea) list_calc_item_pane_t

0x1333,	// (0x0001694f) cell_calc_pane_g1

0x133d,	// (0x00016959) grid_highlight_pane_cp02

0x8b1e,	// (0x0001e13a) bg_calc_display_pane_g1

0x72cd,	// (0x0001c8e9) bg_calc_display_pane_g2

0x3a35,	// (0x00019051) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000247f4) bg_calc_display_pane_g

0x72d7,	// (0x0001c8f3) cell_qdial_pane_ParamLimits

0x72d7,	// (0x0001c8f3) cell_qdial_pane

0x8b27,	// (0x0001e143) cell_qdial_pane_g1_ParamLimits

0x8b27,	// (0x0001e143) cell_qdial_pane_g1

0x8b34,	// (0x0001e150) cell_qdial_pane_g2_ParamLimits

0x8b34,	// (0x0001e150) cell_qdial_pane_g2

0x135f,	// (0x0001697b) cell_qdial_pane_g3_ParamLimits

0x135f,	// (0x0001697b) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x000247fb) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x000247fb) cell_qdial_pane_g

0x8b52,	// (0x0001e16e) cell_qdial_pane_t1_ParamLimits

0x8b52,	// (0x0001e16e) cell_qdial_pane_t1

0x8b6a,	// (0x0001e186) cell_qdial_pane_t2_ParamLimits

0x8b6a,	// (0x0001e186) cell_qdial_pane_t2

0x8b7d,	// (0x0001e199) cell_qdial_pane_t3_ParamLimits

0x8b7d,	// (0x0001e199) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00024804) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00024804) cell_qdial_pane_t

0x0f66,	// (0x00016582) grid_highlight_pane_cp04

0x136b,	// (0x00016987) thumbnail_qdial_pane_ParamLimits

0x136b,	// (0x00016987) thumbnail_qdial_pane

0x13c7,	// (0x000169e3) list_help_pane

0x13d0,	// (0x000169ec) scroll_pane_cp02

0x8b90,	// (0x0001e1ac) help_list_pane_t1_ParamLimits

0x8b90,	// (0x0001e1ac) help_list_pane_t1

0x72eb,	// (0x0001c907) bg_notes_pane_g2

0x72f3,	// (0x0001c90f) bg_notes_pane_g3

0x72fb,	// (0x0001c917) notes_bg_pane_g1

0x7303,	// (0x0001c91f) notes_bg_pane_g4

0x730b,	// (0x0001c927) notes_bg_pane_g5

0x7313,	// (0x0001c92f) notes_bg_pane_g6

0x731b,	// (0x0001c937) notes_bg_pane_g7

0x7323,	// (0x0001c93f) notes_bg_pane_g8

0x732b,	// (0x0001c947) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00024822) notes_bg_pane_g

0x8bc3,	// (0x0001e1df) list_notes_text_pane_ParamLimits

0x8bc3,	// (0x0001e1df) list_notes_text_pane

0x1421,	// (0x00016a3d) list_notes_text_pane_g1

0x8be8,	// (0x0001e204) list_notes_text_pane_t1

0x12ba,	// (0x000168d6) listscroll_cale_week_pane

0x8c13,	// (0x0001e22f) bg_cale_heading_pane

0x143b,	// (0x00016a57) bg_cale_pane_cp01

0x8c27,	// (0x0001e243) cale_week_corner_pane

0x8c3d,	// (0x0001e259) cale_week_day_heading_pane

0x8c51,	// (0x0001e26d) cale_week_scroll_pane_g1

0x8c62,	// (0x0001e27e) cale_week_scroll_pane_g2

0x8c73,	// (0x0001e28f) cale_week_scroll_pane_g3

0x8c84,	// (0x0001e2a0) cale_week_scroll_pane_g4

0x8c95,	// (0x0001e2b1) cale_week_scroll_pane_g5

0x8ca6,	// (0x0001e2c2) cale_week_scroll_pane_g6

0x8cb7,	// (0x0001e2d3) cale_week_scroll_pane_g7

0x8cca,	// (0x0001e2e6) cale_week_scroll_pane_g8

0x8cdd,	// (0x0001e2f9) cale_week_scroll_pane_g9

0x8cee,	// (0x0001e30a) cale_week_scroll_pane_g10

0x8cff,	// (0x0001e31b) cale_week_scroll_pane_g11

0x8d10,	// (0x0001e32c) cale_week_scroll_pane_g12

0x8d21,	// (0x0001e33d) cale_week_scroll_pane_g13

0x8d32,	// (0x0001e34e) cale_week_scroll_pane_g14

0x8d43,	// (0x0001e35f) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00024831) cale_week_scroll_pane_g

0x8d54,	// (0x0001e370) cale_week_time_pane

0x8d67,	// (0x0001e383) grid_cale_week_pane

0x8d7c,	// (0x0001e398) scroll_pane_cp08

0x8d96,	// (0x0001e3b2) cell_cale_week_pane_ParamLimits

0x8d96,	// (0x0001e3b2) cell_cale_week_pane

0x8dd2,	// (0x0001e3ee) cale_week_day_heading_pane_t1

0x8dff,	// (0x0001e41b) cale_week_day_heading_pane_t2

0x8e2c,	// (0x0001e448) cale_week_day_heading_pane_t3

0x8e59,	// (0x0001e475) cale_week_day_heading_pane_t4

0x8e86,	// (0x0001e4a2) cale_week_day_heading_pane_t5

0x8eb3,	// (0x0001e4cf) cale_week_day_heading_pane_t6

0x8ee0,	// (0x0001e4fc) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00024850) cale_week_day_heading_pane_t

0x1466,	// (0x00016a82) bg_cale_side_pane

0x7333,	// (0x0001c94f) cale_week_time_pane_t1

0x734b,	// (0x0001c967) cale_week_time_pane_t2

0x7363,	// (0x0001c97f) cale_week_time_pane_t3

0x737b,	// (0x0001c997) cale_week_time_pane_t4

0x7393,	// (0x0001c9af) cale_week_time_pane_t5

0x73ab,	// (0x0001c9c7) cale_week_time_pane_t6

0x73c3,	// (0x0001c9df) cale_week_time_pane_t7

0x73db,	// (0x0001c9f7) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0002485f) cale_week_time_pane_t

0x8f0d,	// (0x0001e529) cell_cale_week_pane_g2

0x8f26,	// (0x0001e542) cell_cale_week_pane_g3_ParamLimits

0x8f26,	// (0x0001e542) cell_cale_week_pane_g3

0x1474,	// (0x00016a90) grid_highlight_pane_cp07

0x147c,	// (0x00016a98) listscroll_gms_pane

0x1486,	// (0x00016aa2) grid_gms_pane

0x148f,	// (0x00016aab) listscroll_gms_pane_g1

0x1497,	// (0x00016ab3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00024870) listscroll_gms_pane_g

0x8f3e,	// (0x0001e55a) scroll_pane_cp010

0x8f49,	// (0x0001e565) cell_gms_pane_ParamLimits

0x8f49,	// (0x0001e565) cell_gms_pane

0x8f5c,	// (0x0001e578) cell_gms_pane_g1

0x149f,	// (0x00016abb) cell_gms_pane_g2

0x14a7,	// (0x00016ac3) cell_gms_pane_g3

0x14b0,	// (0x00016acc) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00024875) cell_gms_pane_g

0x14b9,	// (0x00016ad5) grid_highlight_pane_cp09

0xae9e,	// (0x000204ba) phob_pre_status_pane_g1

0xaea6,	// (0x000204c2) phob_pre_status_pane_g2

0xaeae,	// (0x000204ca) phob_pre_status_pane_g3

0xaeb6,	// (0x000204d2) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00024c64) phob_pre_status_pane_g

0xaec6,	// (0x000204e2) phob_pre_status_pane_t1

0xaed6,	// (0x000204f2) phob_pre_status_pane_t2

0xaee6,	// (0x00020502) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00024c6f) phob_pre_status_pane_t

0x0f66,	// (0x00016582) bg_list_pane_cp05

0x73fb,	// (0x0001ca17) grid_vorec_pane

0x7405,	// (0x0001ca21) vorec_t1

0x7413,	// (0x0001ca2f) vorec_t2

0x7421,	// (0x0001ca3d) vorec_t3

0x742f,	// (0x0001ca4b) vorec_t4

0x743d,	// (0x0001ca59) vorec_t5

0x744b,	// (0x0001ca67) vorec_t6

0x0006,

0xf262,	// (0x0002487e) vorec_t

0x7467,	// (0x0001ca83) wait_bar_pane_cp01

0x8f64,	// (0x0001e580) cell_vorec_pane_ParamLimits

0x8f64,	// (0x0001e580) cell_vorec_pane

0x152b,	// (0x00016b47) cell_vorec_pane_g1

0x0f66,	// (0x00016582) grid_highlight_pane_cp05

0x8f87,	// (0x0001e5a3) cams_zoom_pane

0x8f93,	// (0x0001e5af) image_vga_pane

0x8fa2,	// (0x0001e5be) main_camera_pane_g1

0x8fb0,	// (0x0001e5cc) main_camera_pane_g2

0x8fbc,	// (0x0001e5d8) main_camera_pane_g3

0x8fc8,	// (0x0001e5e4) main_camera_pane_g4

0x8fd4,	// (0x0001e5f0) main_camera_pane_g5

0x8fe0,	// (0x0001e5fc) main_camera_pane_g6

0x8fec,	// (0x0001e608) main_camera_pane_g7

0x0007,

0xf271,	// (0x0002488d) main_camera_pane_g

0x8ff8,	// (0x0001e614) main_camera_pane_t1

0x900a,	// (0x0001e626) main_camera_pane_t2

0x0001,

0xf282,	// (0x0002489e) main_camera_pane_t

0x902b,	// (0x0001e647) cams_zoom_pane_cp_ParamLimits

0x902b,	// (0x0001e647) cams_zoom_pane_cp

0x904f,	// (0x0001e66b) image_cif_pane_ParamLimits

0x904f,	// (0x0001e66b) image_cif_pane

0x906d,	// (0x0001e689) image_subqcif_pane

0x9075,	// (0x0001e691) main_video_pane_g1_ParamLimits

0x9075,	// (0x0001e691) main_video_pane_g1

0x9095,	// (0x0001e6b1) main_video_pane_g2_ParamLimits

0x9095,	// (0x0001e6b1) main_video_pane_g2

0x90c5,	// (0x0001e6e1) main_video_pane_g3_ParamLimits

0x90c5,	// (0x0001e6e1) main_video_pane_g3

0x90ee,	// (0x0001e70a) main_video_pane_g4_ParamLimits

0x90ee,	// (0x0001e70a) main_video_pane_g4

0x9117,	// (0x0001e733) main_video_pane_g5_ParamLimits

0x9117,	// (0x0001e733) main_video_pane_g5

0x1541,	// (0x00016b5d) main_video_pane_g6_ParamLimits

0x1541,	// (0x00016b5d) main_video_pane_g6

0x0006,

0xf287,	// (0x000248a3) main_video_pane_g_ParamLimits

0xf287,	// (0x000248a3) main_video_pane_g

0x913b,	// (0x0001e757) main_video_pane_t1_ParamLimits

0x913b,	// (0x0001e757) main_video_pane_t1

0x155b,	// (0x00016b77) cams_zoom_pane_g1

0x1564,	// (0x00016b80) cams_zoom_pane_g2

0x156d,	// (0x00016b89) cams_zoom_pane_g3

0x1576,	// (0x00016b92) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x000248b2) cams_zoom_pane_g

0x9185,	// (0x0001e7a1) grid_cams_pane

0x9193,	// (0x0001e7af) linegrid_cams_pane

0x91a1,	// (0x0001e7bd) cell_cams_pane_ParamLimits

0x91a1,	// (0x0001e7bd) cell_cams_pane

0x157f,	// (0x00016b9b) cams_burst_image_pane

0x1587,	// (0x00016ba3) cell_cams_pane_g1

0x0f66,	// (0x00016582) grid_highlight_pane_cp03

0x1333,	// (0x0001694f) mp_bg_pane_g1

0x0f66,	// (0x00016582) bg_list_pane_cp03

0x342b,	// (0x00018a47) bg_mp_pane

0x3433,	// (0x00018a4f) grid_mp_pane

0x343b,	// (0x00018a57) media_player_g1

0x3443,	// (0x00018a5f) media_player_t1

0x3451,	// (0x00018a6d) media_player_t2

0x345f,	// (0x00018a7b) media_player_t3

0x346d,	// (0x00018a89) media_player_t4

0x347b,	// (0x00018a97) media_player_t5

0x3489,	// (0x00018aa5) media_player_t6

0x3497,	// (0x00018ab3) media_player_t7

0x0006,

0xf632,	// (0x00024c4e) media_player_t

0x34a5,	// (0x00018ac1) wait_bar_pane_cp02

0xf617,	// (0x00024c33) main_usb_pane_t

0xae95,	// (0x000204b1) cell_mp_pane

0x1333,	// (0x0001694f) cell_mp_pane_g1

0x0f66,	// (0x00016582) grid_highlight_pane_cp06

0x162f,	// (0x00016c4b) grid_skin_colour_pane

0x1637,	// (0x00016c53) list_highlight_pane_cp03

0x920b,	// (0x0001e827) skin_g1

0x163f,	// (0x00016c5b) skin_t1

0x164e,	// (0x00016c6a) skin_t2

0x0001,

0xf2cb,	// (0x000248e7) skin_t

0x9215,	// (0x0001e831) cell_skin_colour_pane_ParamLimits

0x9215,	// (0x0001e831) cell_skin_colour_pane

0x165c,	// (0x00016c78) cell_skin_colour_pane_g1

0x926a,	// (0x0001e886) call_video_g1_ParamLimits

0x926a,	// (0x0001e886) call_video_g1

0x927a,	// (0x0001e896) call_video_g2_ParamLimits

0x927a,	// (0x0001e896) call_video_g2

0x0001,

0xf2d0,	// (0x000248ec) call_video_g_ParamLimits

0xf2d0,	// (0x000248ec) call_video_g

0x92ba,	// (0x0001e8d6) call_video_uplink_pane_cp1_ParamLimits

0x92ba,	// (0x0001e8d6) call_video_uplink_pane_cp1

0x1676,	// (0x00016c92) call_video_uplink_pane_cp2

0x9366,	// (0x0001e982) video_down_crop_pane_ParamLimits

0x9366,	// (0x0001e982) video_down_crop_pane

0x944c,	// (0x0001ea68) video_down_pane_ParamLimits

0x944c,	// (0x0001ea68) video_down_pane

0x167e,	// (0x00016c9a) video_down_subqcif_pane_ParamLimits

0x167e,	// (0x00016c9a) video_down_subqcif_pane

0x1696,	// (0x00016cb2) video_down_subqcif_pane_cp_ParamLimits

0x1696,	// (0x00016cb2) video_down_subqcif_pane_cp

0x16ba,	// (0x00016cd6) im_reading_pane_ParamLimits

0x16ba,	// (0x00016cd6) im_reading_pane

0x952e,	// (0x0001eb4a) im_writing_pane_ParamLimits

0x952e,	// (0x0001eb4a) im_writing_pane

0x954c,	// (0x0001eb68) im_reading_pane_t1

0x16d4,	// (0x00016cf0) list_im_pane

0x16e5,	// (0x00016d01) scroll_pane_cp07

0x95a0,	// (0x0001ebbc) im_writing_pane_t1_ParamLimits

0x95a0,	// (0x0001ebbc) im_writing_pane_t1

0x16fe,	// (0x00016d1a) im_writing_pane_t2_ParamLimits

0x16fe,	// (0x00016d1a) im_writing_pane_t2

0x0001,

0xf2da,	// (0x000248f6) im_writing_pane_t_ParamLimits

0xf2da,	// (0x000248f6) im_writing_pane_t

0x0f66,	// (0x00016582) input_focus_pane_cp04

0x0f66,	// (0x00016582) input_focus_pane_cp05

0x95b5,	// (0x0001ebd1) list_im_single_pane_ParamLimits

0x95b5,	// (0x0001ebd1) list_im_single_pane

0x95d9,	// (0x0001ebf5) list_single_im_pane_t1

0xae59,	// (0x00020475) blid_accuracy_pane

0xae61,	// (0x0002047d) blid_compass_pane

0xae6b,	// (0x00020487) main_location_t1

0xae79,	// (0x00020495) main_location_t2

0xae87,	// (0x000204a3) main_location_t3

0x0002,

0xf641,	// (0x00024c5d) main_location_t

0x0f66,	// (0x00016582) aid_levels_location

0x1333,	// (0x0001694f) blid_accuracy_pane_g1

0x1333,	// (0x0001694f) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00024958) blid_accuracy_pane_g

0x1746,	// (0x00016d62) wml_content_pane

0x1784,	// (0x00016da0) wml_button_pane_ParamLimits

0x1784,	// (0x00016da0) wml_button_pane

0x95e8,	// (0x0001ec04) wml_list_single_large_pane_ParamLimits

0x95e8,	// (0x0001ec04) wml_list_single_large_pane

0x9612,	// (0x0001ec2e) wml_list_single_medium_pane_ParamLimits

0x9612,	// (0x0001ec2e) wml_list_single_medium_pane

0x9643,	// (0x0001ec5f) wml_list_single_small_pane_ParamLimits

0x9643,	// (0x0001ec5f) wml_list_single_small_pane

0x1798,	// (0x00016db4) wml_selection_box_pane_ParamLimits

0x1798,	// (0x00016db4) wml_selection_box_pane

0x17ab,	// (0x00016dc7) wml_list_single_pane_t1

0x17ba,	// (0x00016dd6) wml_list_single_medium_pane_t1

0x17c9,	// (0x00016de5) wml_list_single_large_pane_t1

0x17d8,	// (0x00016df4) input_focus_pane_cp02_ParamLimits

0x17d8,	// (0x00016df4) input_focus_pane_cp02

0x17eb,	// (0x00016e07) wml_selection_box_pane_g1

0x17f4,	// (0x00016e10) wml_selection_box_pane_t1_ParamLimits

0x17f4,	// (0x00016e10) wml_selection_box_pane_t1

0x11c1,	// (0x000167dd) bg_wml_button_pane_ParamLimits

0x11c1,	// (0x000167dd) bg_wml_button_pane

0x180c,	// (0x00016e28) wml_button_pane_g1

0x1814,	// (0x00016e30) wml_button_pane_t1

0x180c,	// (0x00016e28) wml_button_bg_pane_g1

0x1824,	// (0x00016e40) wml_button_bg_pane_g2

0x182c,	// (0x00016e48) wml_button_bg_pane_g3

0x1834,	// (0x00016e50) wml_button_bg_pane_g4

0x183c,	// (0x00016e58) wml_button_bg_pane_g5

0x1844,	// (0x00016e60) wml_button_bg_pane_g6

0x184c,	// (0x00016e68) wml_button_bg_pane_g7

0x1854,	// (0x00016e70) wml_button_bg_pane_g8

0x185c,	// (0x00016e78) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x000248fb) wml_button_bg_pane_g

0x967d,	// (0x0001ec99) bg_list_pane_cp02

0x1864,	// (0x00016e80) mce_header_pane_ParamLimits

0x1864,	// (0x00016e80) mce_header_pane

0x187a,	// (0x00016e96) mce_icon_pane

0x187a,	// (0x00016e96) mce_image_pane

0x1883,	// (0x00016e9f) mce_text_pane_ParamLimits

0x1883,	// (0x00016e9f) mce_text_pane

0x9687,	// (0x0001eca3) scroll_pane_cp03

0x177c,	// (0x00016d98) scroll_pane_cp04

0x1896,	// (0x00016eb2) scroll_pane_cp05_ParamLimits

0x1896,	// (0x00016eb2) scroll_pane_cp05

0x9691,	// (0x0001ecad) mce_header_field_pane_ParamLimits

0x9691,	// (0x0001ecad) mce_header_field_pane

0x96b1,	// (0x0001eccd) mce_header_field_pane_2_ParamLimits

0x96b1,	// (0x0001eccd) mce_header_field_pane_2

0x96c7,	// (0x0001ece3) mce_header_field_pane_3

0x96cf,	// (0x0001eceb) list_single_mce_message_pane_ParamLimits

0x96cf,	// (0x0001eceb) list_single_mce_message_pane

0x96f4,	// (0x0001ed10) list_single_mce_smart_pane_ParamLimits

0x96f4,	// (0x0001ed10) list_single_mce_smart_pane

0x18a2,	// (0x00016ebe) input_focus_pane_cp03

0x18ab,	// (0x00016ec7) list_header_data_pane

0x9724,	// (0x0001ed40) mce_header_field_pane_t1

0x9732,	// (0x0001ed4e) list_single_mce_header_pane_ParamLimits

0x9732,	// (0x0001ed4e) list_single_mce_header_pane

0x18b3,	// (0x00016ecf) list_single_mce_header_pane_t1

0x18c2,	// (0x00016ede) list_single_mce_message_pane_g1

0x18ca,	// (0x00016ee6) list_single_mce_message_pane_t1

0x9776,	// (0x0001ed92) bg_cale_heading_pane_cp01_ParamLimits

0x9776,	// (0x0001ed92) bg_cale_heading_pane_cp01

0x18d8,	// (0x00016ef4) bg_cale_pane_cp02_ParamLimits

0x18d8,	// (0x00016ef4) bg_cale_pane_cp02

0x9799,	// (0x0001edb5) cale_month_corner_pane

0x97af,	// (0x0001edcb) cale_month_day_heading_pane_ParamLimits

0x97af,	// (0x0001edcb) cale_month_day_heading_pane

0x97e2,	// (0x0001edfe) cale_month_pane_g1_ParamLimits

0x97e2,	// (0x0001edfe) cale_month_pane_g1

0x97fe,	// (0x0001ee1a) cale_month_pane_g2_ParamLimits

0x97fe,	// (0x0001ee1a) cale_month_pane_g2

0x9819,	// (0x0001ee35) cale_month_pane_g3_ParamLimits

0x9819,	// (0x0001ee35) cale_month_pane_g3

0x9845,	// (0x0001ee61) cale_month_pane_g4_ParamLimits

0x9845,	// (0x0001ee61) cale_month_pane_g4

0x9871,	// (0x0001ee8d) cale_month_pane_g5_ParamLimits

0x9871,	// (0x0001ee8d) cale_month_pane_g5

0x989d,	// (0x0001eeb9) cale_month_pane_g6_ParamLimits

0x989d,	// (0x0001eeb9) cale_month_pane_g6

0x98c9,	// (0x0001eee5) cale_month_pane_g7_ParamLimits

0x98c9,	// (0x0001eee5) cale_month_pane_g7

0x9905,	// (0x0001ef21) cale_month_pane_g8_ParamLimits

0x9905,	// (0x0001ef21) cale_month_pane_g8

0x9941,	// (0x0001ef5d) cale_month_pane_g9_ParamLimits

0x9941,	// (0x0001ef5d) cale_month_pane_g9

0x997b,	// (0x0001ef97) cale_month_pane_g10_ParamLimits

0x997b,	// (0x0001ef97) cale_month_pane_g10

0x99b5,	// (0x0001efd1) cale_month_pane_g11_ParamLimits

0x99b5,	// (0x0001efd1) cale_month_pane_g11

0x99ef,	// (0x0001f00b) cale_month_pane_g12_ParamLimits

0x99ef,	// (0x0001f00b) cale_month_pane_g12

0x9a29,	// (0x0001f045) cale_month_pane_g13_ParamLimits

0x9a29,	// (0x0001f045) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0002490e) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0002490e) cale_month_pane_g

0x9a63,	// (0x0001f07f) cale_month_week_pane

0x9a76,	// (0x0001f092) grid_cale_month_pane_ParamLimits

0x9a76,	// (0x0001f092) grid_cale_month_pane

0x9aa4,	// (0x0001f0c0) cale_month_day_heading_pane_t1

0x9b02,	// (0x0001f11e) cale_month_day_heading_pane_t2

0x9b67,	// (0x0001f183) cale_month_day_heading_pane_t3

0x9bcc,	// (0x0001f1e8) cale_month_day_heading_pane_t4

0x9c31,	// (0x0001f24d) cale_month_day_heading_pane_t5

0x9c96,	// (0x0001f2b2) cale_month_day_heading_pane_t6

0x9cfb,	// (0x0001f317) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00024929) cale_month_day_heading_pane_t

0x1466,	// (0x00016a82) bg_cale_side_pane_cp01

0x9d70,	// (0x0001f38c) cale_month_week_pane_t1

0x9d87,	// (0x0001f3a3) cale_month_week_pane_t2

0x9d9e,	// (0x0001f3ba) cale_month_week_pane_t3

0x9db5,	// (0x0001f3d1) cale_month_week_pane_t4

0x9dcc,	// (0x0001f3e8) cale_month_week_pane_t5

0x9de3,	// (0x0001f3ff) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00024938) cale_month_week_pane_t

0x9dfa,	// (0x0001f416) cell_cale_month_pane_ParamLimits

0x9dfa,	// (0x0001f416) cell_cale_month_pane

0x746f,	// (0x0001ca8b) cell_cale_month_pane_g1

0x747b,	// (0x0001ca97) cell_cale_month_pane_t1_ParamLimits

0x747b,	// (0x0001ca97) cell_cale_month_pane_t1

0x1474,	// (0x00016a90) grid_highlight_pane_cp08

0x1333,	// (0x0001694f) main_smil_g1

0x9eb0,	// (0x0001f4cc) smil_status_pane

0x1943,	// (0x00016f5f) smil_text_pane

0x334b,	// (0x00018967) bg_popup_call3_rect_pane_g8

0x3353,	// (0x0001896f) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00024bf1) bg_popup_call3_rect_pane_g

0x35e0,	// (0x00018bfc) smil_status_volume_pane_g1

0x194d,	// (0x00016f69) smil_status_pane_t1

0x75b1,	// (0x0001cbcd) volume_smil_pane

0x1964,	// (0x00016f80) list_smil_text_pane

0x9ec3,	// (0x0001f4df) scroll_pane_cp011

0x9ece,	// (0x0001f4ea) smil_text_list_pane_t1_ParamLimits

0x9ece,	// (0x0001f4ea) smil_text_list_pane_t1

0x7497,	// (0x0001cab3) aid_volume_smil_ParamLimits

0x7497,	// (0x0001cab3) aid_volume_smil

0x1333,	// (0x0001694f) smil_volume_pane_g1

0x1333,	// (0x0001694f) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00024958) smil_volume_pane_g

0x12ba,	// (0x000168d6) listscroll_cale_day_pane

0x1990,	// (0x00016fac) bg_cale_pane

0x19a8,	// (0x00016fc4) list_cale_pane

0x19b9,	// (0x00016fd5) scroll_pane_cp09

0x19ca,	// (0x00016fe6) cale_bg_pane_g1

0x19d2,	// (0x00016fee) cale_bg_pane_g2

0x19da,	// (0x00016ff6) cale_bg_pane_g3

0x19e2,	// (0x00016ffe) cale_bg_pane_g4

0x19ea,	// (0x00017006) cale_bg_pane_g5

0x19f2,	// (0x0001700e) cale_bg_pane_g6

0x19fa,	// (0x00017016) cale_bg_pane_g7

0x1a02,	// (0x0001701e) cale_bg_pane_g8

0x1a0a,	// (0x00017026) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0002495d) cale_bg_pane_g

0x9f46,	// (0x0001f562) list_cale_time_pane_ParamLimits

0x9f46,	// (0x0001f562) list_cale_time_pane

0x1a12,	// (0x0001702e) list_cale_time_pane_g1_ParamLimits

0x1a12,	// (0x0001702e) list_cale_time_pane_g1

0x1a1e,	// (0x0001703a) list_cale_time_pane_g2_ParamLimits

0x1a1e,	// (0x0001703a) list_cale_time_pane_g2

0x9f62,	// (0x0001f57e) list_cale_time_pane_g3_ParamLimits

0x9f62,	// (0x0001f57e) list_cale_time_pane_g3

0x9f70,	// (0x0001f58c) list_cale_time_pane_g4_ParamLimits

0x9f70,	// (0x0001f58c) list_cale_time_pane_g4

0x9f7e,	// (0x0001f59a) list_cale_time_pane_g5_ParamLimits

0x9f7e,	// (0x0001f59a) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00024970) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00024970) list_cale_time_pane_g

0x1a38,	// (0x00017054) list_cale_time_pane_t1_ParamLimits

0x1a38,	// (0x00017054) list_cale_time_pane_t1

0x1a60,	// (0x0001707c) list_cale_time_pane_t2_ParamLimits

0x1a60,	// (0x0001707c) list_cale_time_pane_t2

0xa230,	// (0x0001f84c) aid_blid_cardinal_pane

0xa272,	// (0x0001f88e) compass_pane_t4

0x1a88,	// (0x000170a4) list_cale_time_pane_t4_ParamLimits

0x1a88,	// (0x000170a4) list_cale_time_pane_t4

0xa280,	// (0x0001f89c) compass_pane_t5

0xa290,	// (0x0001f8ac) compass_pane_t6

0xa29e,	// (0x0001f8ba) compass_pane_t7

0x1f9b,	// (0x000175b7) navi_pane_cc_t1

0x2102,	// (0x0001771e) aid_phob_thumbnail_center_pane

0xa95f,	// (0x0001ff7b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0002497d) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0002497d) list_cale_time_pane_t

0x0bbd,	// (0x000161d9) bg_popup_window_pane_cp02_ParamLimits

0x0bbd,	// (0x000161d9) bg_popup_window_pane_cp02

0x1ab0,	// (0x000170cc) heading_pane_cp01_ParamLimits

0x1ab0,	// (0x000170cc) heading_pane_cp01

0x1abc,	// (0x000170d8) loc_req_pane_ParamLimits

0x1abc,	// (0x000170d8) loc_req_pane

0x1acc,	// (0x000170e8) loc_type_pane_ParamLimits

0x1acc,	// (0x000170e8) loc_type_pane

0x1ade,	// (0x000170fa) loc_type_pane_t1_ParamLimits

0x1ade,	// (0x000170fa) loc_type_pane_t1

0x1af0,	// (0x0001710c) loc_type_pane_t2_ParamLimits

0x1af0,	// (0x0001710c) loc_type_pane_t2

0x1b02,	// (0x0001711e) loc_type_pane_t3_ParamLimits

0x1b02,	// (0x0001711e) loc_type_pane_t3

0x0002,

0xf368,	// (0x00024984) loc_type_pane_t_ParamLimits

0xf368,	// (0x00024984) loc_type_pane_t

0x1b14,	// (0x00017130) list_loc_req_pane

0x1b1e,	// (0x0001713a) scroll_pane_cp012

0x9f8c,	// (0x0001f5a8) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f8c,	// (0x0001f5a8) list_single_loc_request_popup_menu_pane

0x1b29,	// (0x00017145) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1b29,	// (0x00017145) list_single_loc_request_popup_menu_pane_g1

0x1b35,	// (0x00017151) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1b35,	// (0x00017151) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0002498b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0002498b) list_single_loc_request_popup_menu_pane_g

0x1b41,	// (0x0001715d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1b41,	// (0x0001715d) list_single_loc_request_popup_menu_pane_t1

0x9f9e,	// (0x0001f5ba) bg_popup_window_pane_cp03_ParamLimits

0x9f9e,	// (0x0001f5ba) bg_popup_window_pane_cp03

0x9fac,	// (0x0001f5c8) heading_loc_req_pane_ParamLimits

0x9fac,	// (0x0001f5c8) heading_loc_req_pane

0x9fb8,	// (0x0001f5d4) popup_dyc_status_message_window_g1_ParamLimits

0x9fb8,	// (0x0001f5d4) popup_dyc_status_message_window_g1

0x9fc4,	// (0x0001f5e0) popup_dyc_status_message_window_t1_ParamLimits

0x9fc4,	// (0x0001f5e0) popup_dyc_status_message_window_t1

0x9fd6,	// (0x0001f5f2) popup_dyc_status_message_window_t2_ParamLimits

0x9fd6,	// (0x0001f5f2) popup_dyc_status_message_window_t2

0x9fe8,	// (0x0001f604) popup_dyc_status_message_window_t3_ParamLimits

0x9fe8,	// (0x0001f604) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00024990) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00024990) popup_dyc_status_message_window_t

0x0f66,	// (0x00016582) bg_heading_pane_cp01

0x1b57,	// (0x00017173) heading_loc_req_pane_g1

0x1b5f,	// (0x0001717b) heading_loc_req_pane_g2

0x1b67,	// (0x00017183) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00024997) heading_loc_req_pane_g

0x1b6f,	// (0x0001718b) heading_loc_req_pane_t1

0x1bf3,	// (0x0001720f) bg_popup_sub_pane_cp01_ParamLimits

0x1bf3,	// (0x0001720f) bg_popup_sub_pane_cp01

0x1c01,	// (0x0001721d) popup_cale_events_window_g1_ParamLimits

0x1c01,	// (0x0001721d) popup_cale_events_window_g1

0x1c21,	// (0x0001723d) popup_cale_events_window_g2_ParamLimits

0x1c21,	// (0x0001723d) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000249cb) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000249cb) popup_cale_events_window_g

0x1c41,	// (0x0001725d) popup_cale_events_window_t1_ParamLimits

0x1c41,	// (0x0001725d) popup_cale_events_window_t1

0x1c53,	// (0x0001726f) popup_cale_events_window_t2_ParamLimits

0x1c53,	// (0x0001726f) popup_cale_events_window_t2

0x1c91,	// (0x000172ad) popup_cale_events_window_t3_ParamLimits

0x1c91,	// (0x000172ad) popup_cale_events_window_t3

0x1ccb,	// (0x000172e7) popup_cale_events_window_t4_ParamLimits

0x1ccb,	// (0x000172e7) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000249d0) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000249d0) popup_cale_events_window_t

0xa06c,	// (0x0001f688) call_type_pane

0x211a,	// (0x00017736) popup_call_status_window_g1

0xa078,	// (0x0001f694) popup_call_status_window_g2

0xa084,	// (0x0001f6a0) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000249d9) popup_call_status_window_g

0x1d01,	// (0x0001731d) call_type_pane_g1

0x1d0a,	// (0x00017326) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000249e0) call_type_pane_g

0x0f66,	// (0x00016582) bg_popup_sub_pane_cp02

0x1d13,	// (0x0001732f) listscroll_popup_wml_pane

0x1d1b,	// (0x00017337) list_wml_pane

0x1d25,	// (0x00017341) scroll_pane_cp013

0x1d30,	// (0x0001734c) list_single_graphic_popup_wml_pane_ParamLimits

0x1d30,	// (0x0001734c) list_single_graphic_popup_wml_pane

0x1333,	// (0x0001694f) list_single_graphic_popup_wml_pane_g1

0x1d44,	// (0x00017360) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x000249e5) list_single_graphic_popup_wml_pane_g

0x1d4c,	// (0x00017368) list_single_graphic_popup_wml_pane_t1

0x1d5a,	// (0x00017376) aid_call_pane

0x11b9,	// (0x000167d5) popup_clock_analogue_window_g1

0x11b9,	// (0x000167d5) popup_clock_analogue_window_g2

0x74b9,	// (0x0001cad5) popup_clock_analogue_window_g3

0x74b9,	// (0x0001cad5) popup_clock_analogue_window_g4

0x1333,	// (0x0001694f) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000249ea) popup_clock_analogue_window_g

0x74c1,	// (0x0001cadd) popup_clock_analogue_window_t1

0x74cf,	// (0x0001caeb) clock_digital_number_pane_ParamLimits

0x74cf,	// (0x0001caeb) clock_digital_number_pane

0x74db,	// (0x0001caf7) clock_digital_number_pane_cp02_ParamLimits

0x74db,	// (0x0001caf7) clock_digital_number_pane_cp02

0x74e7,	// (0x0001cb03) clock_digital_number_pane_cp03_ParamLimits

0x74e7,	// (0x0001cb03) clock_digital_number_pane_cp03

0x74f3,	// (0x0001cb0f) clock_digital_number_pane_cp04_ParamLimits

0x74f3,	// (0x0001cb0f) clock_digital_number_pane_cp04

0x7503,	// (0x0001cb1f) clock_digital_separator_pane_ParamLimits

0x7503,	// (0x0001cb1f) clock_digital_separator_pane

0x750f,	// (0x0001cb2b) popup_clock_digital_window_t1

0x1333,	// (0x0001694f) clock_digital_number_pane_g1

0x1333,	// (0x0001694f) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00024958) clock_digital_number_pane_g

0x1333,	// (0x0001694f) clock_digital_separator_pane_g1

0x1333,	// (0x0001694f) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00024958) clock_digital_separator_pane_g

0x0f66,	// (0x00016582) bg_popup_window_pane_cp04

0x1ddd,	// (0x000173f9) heading_pane_cp03

0x1de5,	// (0x00017401) listscroll_popup_gms_pane

0x1ded,	// (0x00017409) grid_large_graphic_popup_pane

0x1df7,	// (0x00017413) listscroll_popup_gms_pane_g1

0x1dff,	// (0x0001741b) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000249f5) listscroll_popup_gms_pane_g

0x177c,	// (0x00016d98) scroll_pane_cp014

0xa090,	// (0x0001f6ac) cell_large_graphic_popup_pane_ParamLimits

0xa090,	// (0x0001f6ac) cell_large_graphic_popup_pane

0xa0a8,	// (0x0001f6c4) cell_large_graphic_popup_pane_g1_ParamLimits

0xa0a8,	// (0x0001f6c4) cell_large_graphic_popup_pane_g1

0x1e07,	// (0x00017423) cell_large_graphic_popup_pane_g2_ParamLimits

0x1e07,	// (0x00017423) cell_large_graphic_popup_pane_g2

0x1e13,	// (0x0001742f) cell_large_graphic_popup_pane_g3_ParamLimits

0x1e13,	// (0x0001742f) cell_large_graphic_popup_pane_g3

0x1e20,	// (0x0001743c) cell_large_graphic_popup_pane_g4_ParamLimits

0x1e20,	// (0x0001743c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x000249fa) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x000249fa) cell_large_graphic_popup_pane_g

0x1e30,	// (0x0001744c) grid_highlight_pane_cp010

0x1333,	// (0x0001694f) bg_popup_call_pane_g1

0x1e3a,	// (0x00017456) list_single_graphic_popup_conf_pane_ParamLimits

0x1e3a,	// (0x00017456) list_single_graphic_popup_conf_pane

0x1e4d,	// (0x00017469) list_highlight_pane_cp01

0x1e56,	// (0x00017472) list_single_graphic_popup_conf_pane_g1

0x1e5e,	// (0x0001747a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00024a03) list_single_graphic_popup_conf_pane_g

0x1e66,	// (0x00017482) list_single_graphic_popup_conf_pane_t1

0x1e74,	// (0x00017490) linegrid_cams_pane_g1

0xa0b4,	// (0x0001f6d0) linegrid_cams_pane_g2

0x14a7,	// (0x00016ac3) linegrid_cams_pane_g3

0x1e7d,	// (0x00017499) linegrid_cams_pane_g4

0xa0bd,	// (0x0001f6d9) linegrid_cams_pane_g5

0xa0c6,	// (0x0001f6e2) linegrid_cams_pane_g6

0x14b0,	// (0x00016acc) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00024a08) linegrid_cams_pane_g

0x1e86,	// (0x000174a2) popup_clock_analogue_window

0x1e86,	// (0x000174a2) popup_clock_digital_window

0x0f66,	// (0x00016582) popup_phob_thumbnail_window

0x1333,	// (0x0001694f) call_video_uplink_pane_g1

0x1e8f,	// (0x000174ab) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00024a17) call_video_uplink_pane_g

0x1e97,	// (0x000174b3) video_uplink_pane

0x1e9f,	// (0x000174bb) mce_image_pane_g1

0xa0cf,	// (0x0001f6eb) mce_image_pane_g2

0xa0d9,	// (0x0001f6f5) mce_image_pane_g3

0xa0e1,	// (0x0001f6fd) mce_image_pane_g4

0xa0e9,	// (0x0001f705) mce_image_pane_g5

0x0004,

0xf400,	// (0x00024a1c) mce_image_pane_g

0x1ea9,	// (0x000174c5) control_top_pane_stacon_cp01_ParamLimits

0x1ea9,	// (0x000174c5) control_top_pane_stacon_cp01

0x1ebd,	// (0x000174d9) uni_indicator_pane_stacon_cp01_ParamLimits

0x1ebd,	// (0x000174d9) uni_indicator_pane_stacon_cp01

0x1ece,	// (0x000174ea) bg_popup_sub_pane_cp03

0xa0f1,	// (0x0001f70d) chi_dic_find_pane

0xa0f9,	// (0x0001f715) listscroll_chi_dic_pane

0xa102,	// (0x0001f71e) main_pane_chidic_g1

0x1ed8,	// (0x000174f4) chi_dic_find_pane_t1

0x1ee6,	// (0x00017502) find_chidic_pane

0x1eef,	// (0x0001750b) chi_dic_list_pane_ParamLimits

0x1eef,	// (0x0001750b) chi_dic_list_pane

0x1f00,	// (0x0001751c) scroll_pane_cp020

0x1f08,	// (0x00017524) find_chidic_pane_t1

0x0f66,	// (0x00016582) input_focus_pane_cp06

0xa115,	// (0x0001f731) list_chi_dic_pane_ParamLimits

0xa115,	// (0x0001f731) list_chi_dic_pane

0xa12f,	// (0x0001f74b) list_chi_dic_pane_t1_ParamLimits

0xa12f,	// (0x0001f74b) list_chi_dic_pane_t1

0x0f66,	// (0x00016582) list_highlight_pane_cp020

0x1f17,	// (0x00017533) bg_cale_heading_pane_g1

0xa142,	// (0x0001f75e) bg_cale_heading_pane_g2

0xa14a,	// (0x0001f766) bg_cale_heading_pane_g3

0xa152,	// (0x0001f76e) bg_cale_heading_pane_g4

0xa15c,	// (0x0001f778) bg_cale_heading_pane_g5

0xa166,	// (0x0001f782) bg_cale_heading_pane_g6

0xa16e,	// (0x0001f78a) bg_cale_heading_pane_g7

0xa176,	// (0x0001f792) bg_cale_heading_pane_g8

0xa180,	// (0x0001f79c) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00024a27) bg_cale_heading_pane_g

0x1f17,	// (0x00017533) bg_cale_side_pane_g1

0xa18a,	// (0x0001f7a6) bg_cale_side_pane_g2

0xa192,	// (0x0001f7ae) bg_cale_side_pane_g3

0xa19a,	// (0x0001f7b6) bg_cale_side_pane_g4

0xa1a2,	// (0x0001f7be) bg_cale_side_pane_g5

0xa1aa,	// (0x0001f7c6) bg_cale_side_pane_g6

0xa1b2,	// (0x0001f7ce) bg_cale_side_pane_g7

0xa1ba,	// (0x0001f7d6) bg_cale_side_pane_g8

0xa1c2,	// (0x0001f7de) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00024a3a) bg_cale_side_pane_g

0xa1ca,	// (0x0001f7e6) popup_call_status_window_ParamLimits

0xa1ca,	// (0x0001f7e6) popup_call_status_window

0x1f1f,	// (0x0001753b) stacon_top_pane

0x1f27,	// (0x00017543) status_pane_ParamLimits

0x1f27,	// (0x00017543) status_pane

0x1f3c,	// (0x00017558) status_small_pane

0x1f44,	// (0x00017560) control_pane

0x0f66,	// (0x00016582) stacon_bottom_pane

0x1f4c,	// (0x00017568) list_single_mce_smart_pane_t1_ParamLimits

0x1f4c,	// (0x00017568) list_single_mce_smart_pane_t1

0x1f5f,	// (0x0001757b) list_single_mce_smart_pane_t2_ParamLimits

0x1f5f,	// (0x0001757b) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00024a4d) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00024a4d) list_single_mce_smart_pane_t

0xa1d6,	// (0x0001f7f2) compass_pane

0xa1e2,	// (0x0001f7fe) main_location2_pane_t1

0xa1f6,	// (0x0001f812) main_location2_pane_t2

0xa20a,	// (0x0001f826) main_location2_pane_t3

0x0003,

0xf436,	// (0x00024a52) main_location2_pane_t

0x1f7e,	// (0x0001759a) compass_pane_g1_ParamLimits

0x1f7e,	// (0x0001759a) compass_pane_g1

0xa254,	// (0x0001f870) compass_pane_t1

0xa263,	// (0x0001f87f) compass_pane_t2

0x0005,

0xf43f,	// (0x00024a5b) compass_pane_t

0xa2ae,	// (0x0001f8ca) text_secondary_cp61

0x1f92,	// (0x000175ae) navi_pane_cams_g5

0x1fb5,	// (0x000175d1) navi_pane_im_t1

0x1fc3,	// (0x000175df) navi_pane_mp_g1_ParamLimits

0x1fc3,	// (0x000175df) navi_pane_mp_g1

0x1fd7,	// (0x000175f3) navi_pane_mp_g2_ParamLimits

0x1fd7,	// (0x000175f3) navi_pane_mp_g2

0x1fe3,	// (0x000175ff) navi_pane_mp_g3_ParamLimits

0x1fe3,	// (0x000175ff) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00024a6f) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00024a6f) navi_pane_mp_g

0x1fef,	// (0x0001760b) navi_pane_mp_t1

0x1ffd,	// (0x00017619) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00024a76) navi_pane_mp_t

0x2039,	// (0x00017655) navi_pane_vt_g1

0x1fef,	// (0x0001760b) navi_pane_vt_t1

0x2041,	// (0x0001765d) navi_slider_pane

0x2049,	// (0x00017665) zooming_pane

0x2051,	// (0x0001766d) navi_slider_pane_g1

0x752c,	// (0x0001cb48) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00024a7d) navi_slider_pane_g

0x2087,	// (0x000176a3) aid_levels_zoom

0x208f,	// (0x000176ab) zooming_pane_g1

0x2097,	// (0x000176b3) zooming_pane_g2

0x2097,	// (0x000176b3) zooming_pane_g3

0x0002,

0xf470,	// (0x00024a8c) zooming_pane_g

0x209f,	// (0x000176bb) level_10_zoom

0x20a8,	// (0x000176c4) level_11_zoom

0x20b1,	// (0x000176cd) level_1_zoom

0x20ba,	// (0x000176d6) level_2_zoom

0x20c3,	// (0x000176df) level_3_zoom

0x20cc,	// (0x000176e8) level_4_zoom

0x20d5,	// (0x000176f1) level_5_zoom

0x20de,	// (0x000176fa) level_6_zoom

0x20e7,	// (0x00017703) level_7_zoom

0x20f0,	// (0x0001770c) level_8_zoom

0x20f9,	// (0x00017715) level_9_zoom

0x210a,	// (0x00017726) popup_phob_thumbnail_window_g1

0x2112,	// (0x0001772e) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00024a93) popup_phob_thumbnail_window_g

0x34ad,	// (0x00018ac9) level_1_location

0x34b5,	// (0x00018ad1) level_2_location

0x34bd,	// (0x00018ad9) level_3_location

0x34c5,	// (0x00018ae1) level_4_location

0x2049,	// (0x00017665) level_5_location

0xa3c3,	// (0x0001f9df) mce_icon_pane_g1

0xa3cb,	// (0x0001f9e7) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00024a98) mce_icon_pane_g

0xa3d3,	// (0x0001f9ef) main_mup_pane_g1_ParamLimits

0xa3d3,	// (0x0001f9ef) main_mup_pane_g1

0xa3eb,	// (0x0001fa07) main_mup_pane_g2_ParamLimits

0xa3eb,	// (0x0001fa07) main_mup_pane_g2

0xa407,	// (0x0001fa23) main_mup_pane_g3_ParamLimits

0xa407,	// (0x0001fa23) main_mup_pane_g3

0xa423,	// (0x0001fa3f) main_mup_pane_g4_ParamLimits

0xa423,	// (0x0001fa3f) main_mup_pane_g4

0xa43f,	// (0x0001fa5b) main_mup_pane_g5_ParamLimits

0xa43f,	// (0x0001fa5b) main_mup_pane_g5

0xa460,	// (0x0001fa7c) main_mup_pane_g6_ParamLimits

0xa460,	// (0x0001fa7c) main_mup_pane_g6

0xa47c,	// (0x0001fa98) main_mup_pane_g7_ParamLimits

0xa47c,	// (0x0001fa98) main_mup_pane_g7

0xa498,	// (0x0001fab4) main_mup_pane_g8_ParamLimits

0xa498,	// (0x0001fab4) main_mup_pane_g8

0xa4b8,	// (0x0001fad4) main_mup_pane_g9_ParamLimits

0xa4b8,	// (0x0001fad4) main_mup_pane_g9

0xa4d7,	// (0x0001faf3) main_mup_pane_g10_ParamLimits

0xa4d7,	// (0x0001faf3) main_mup_pane_g10

0xa4f6,	// (0x0001fb12) main_mup_pane_g11_ParamLimits

0xa4f6,	// (0x0001fb12) main_mup_pane_g11

0xa50e,	// (0x0001fb2a) main_mup_pane_g12_ParamLimits

0xa50e,	// (0x0001fb2a) main_mup_pane_g12

0xa51c,	// (0x0001fb38) main_mup_pane_g13_ParamLimits

0xa51c,	// (0x0001fb38) main_mup_pane_g13

0x000c,

0xf481,	// (0x00024a9d) main_mup_pane_g_ParamLimits

0xf481,	// (0x00024a9d) main_mup_pane_g

0xa532,	// (0x0001fb4e) main_mup_pane_t1_ParamLimits

0xa532,	// (0x0001fb4e) main_mup_pane_t1

0xa54f,	// (0x0001fb6b) main_mup_pane_t2_ParamLimits

0xa54f,	// (0x0001fb6b) main_mup_pane_t2

0xa569,	// (0x0001fb85) main_mup_pane_t3_ParamLimits

0xa569,	// (0x0001fb85) main_mup_pane_t3

0xa583,	// (0x0001fb9f) main_mup_pane_t4_ParamLimits

0xa583,	// (0x0001fb9f) main_mup_pane_t4

0xa595,	// (0x0001fbb1) main_mup_pane_t5_ParamLimits

0xa595,	// (0x0001fbb1) main_mup_pane_t5

0xa5a7,	// (0x0001fbc3) main_mup_pane_t6_ParamLimits

0xa5a7,	// (0x0001fbc3) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00024ab8) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00024ab8) main_mup_pane_t

0xa5bd,	// (0x0001fbd9) mup_progress_pane_ParamLimits

0xa5bd,	// (0x0001fbd9) mup_progress_pane

0xa5c9,	// (0x0001fbe5) mup_visualizer_pane_ParamLimits

0xa5c9,	// (0x0001fbe5) mup_visualizer_pane

0xa603,	// (0x0001fc1f) mup_volume_pane_ParamLimits

0xa603,	// (0x0001fc1f) mup_volume_pane

0x211a,	// (0x00017736) mup_visualizer_pane_g1_ParamLimits

0x211a,	// (0x00017736) mup_visualizer_pane_g1

0x211a,	// (0x00017736) mup_visualizer_pane_g2_ParamLimits

0x211a,	// (0x00017736) mup_visualizer_pane_g2

0x1f7e,	// (0x0001759a) mup_visualizer_pane_g3_ParamLimits

0x1f7e,	// (0x0001759a) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00024ac5) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00024ac5) mup_visualizer_pane_g

0x1333,	// (0x0001694f) mup_volume_pane_g1

0x2130,	// (0x0001774c) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00024acc) mup_volume_pane_g

0x1333,	// (0x0001694f) mup_progress_pane_g1

0x2139,	// (0x00017755) mup_progress_pane_g2

0x2142,	// (0x0001775e) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00024ad1) mup_progress_pane_g

0x0f66,	// (0x00016582) bg_popup_window_pane_cp05

0x214b,	// (0x00017767) heading_pane_cp02_ParamLimits

0x214b,	// (0x00017767) heading_pane_cp02

0x2165,	// (0x00017781) list_popup_blid_pane

0x216d,	// (0x00017789) list_blid_sat_info_pane_ParamLimits

0x216d,	// (0x00017789) list_blid_sat_info_pane

0x2180,	// (0x0001779c) list_blid_sat_info_pane_g1

0x2188,	// (0x000177a4) list_blid_sat_info_pane_t1

0xa710,	// (0x0001fd2c) mup_equalizer_pane_ParamLimits

0xa710,	// (0x0001fd2c) mup_equalizer_pane

0xa731,	// (0x0001fd4d) mup_equalizer_pane_cp1_ParamLimits

0xa731,	// (0x0001fd4d) mup_equalizer_pane_cp1

0xa752,	// (0x0001fd6e) mup_equalizer_pane_cp2_ParamLimits

0xa752,	// (0x0001fd6e) mup_equalizer_pane_cp2

0xa773,	// (0x0001fd8f) mup_equalizer_pane_cp3_ParamLimits

0xa773,	// (0x0001fd8f) mup_equalizer_pane_cp3

0xa794,	// (0x0001fdb0) mup_equalizer_pane_cp4_ParamLimits

0xa794,	// (0x0001fdb0) mup_equalizer_pane_cp4

0xa7b5,	// (0x0001fdd1) mup_equalizer_pane_cp5

0xa7cb,	// (0x0001fde7) mup_equalizer_pane_cp6

0xa7e3,	// (0x0001fdff) mup_equalizer_pane_cp7

0x33cb,	// (0x000189e7) bg_popup_call_poc_act_pane_g9

0x33d3,	// (0x000189ef) bg_popup_call_poc_act_pane_g10

0x33db,	// (0x000189f7) bg_popup_call_poc_act_pane_g11

0x000a,

0x11c1,	// (0x000167dd) mup_scale_pane

0x1333,	// (0x0001694f) mup_scale_pane_g1

0x2196,	// (0x000177b2) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00024aed) mup_scale_pane_g

0x21ba,	// (0x000177d6) msg_data_pane

0x21c2,	// (0x000177de) scroll_pane_cp017

0xa80d,	// (0x0001fe29) bg_list_pane_cp04_ParamLimits

0xa80d,	// (0x0001fe29) bg_list_pane_cp04

0x21d2,	// (0x000177ee) msg_data_pane_g1

0xa829,	// (0x0001fe45) msg_data_pane_g2

0xa833,	// (0x0001fe4f) msg_data_pane_g3

0xa83b,	// (0x0001fe57) msg_data_pane_g4

0xa843,	// (0x0001fe5f) msg_data_pane_g5

0xa84b,	// (0x0001fe67) msg_data_pane_g6

0xa853,	// (0x0001fe6f) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00024afc) msg_data_pane_g

0xa85b,	// (0x0001fe77) msg_text_pane_ParamLimits

0xa85b,	// (0x0001fe77) msg_text_pane

0xa897,	// (0x0001feb3) qrid_highlight_pane_cp011_ParamLimits

0xa897,	// (0x0001feb3) qrid_highlight_pane_cp011

0x0f66,	// (0x00016582) msg_body_pane

0x0f66,	// (0x00016582) msg_header_pane

0x21e3,	// (0x000177ff) input_focus_pane_cp07

0xa8bd,	// (0x0001fed9) msg_header_pane_t1_ParamLimits

0xa8bd,	// (0x0001fed9) msg_header_pane_t1

0x21f8,	// (0x00017814) msg_header_pane_t2_ParamLimits

0x21f8,	// (0x00017814) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00024b10) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00024b10) msg_header_pane_t

0x220a,	// (0x00017826) msg_body_pane_g1

0x2212,	// (0x0001782e) msg_body_pane_t1_ParamLimits

0x2212,	// (0x0001782e) msg_body_pane_t1

0x2243,	// (0x0001785f) msg_body_pane_t2_ParamLimits

0x2243,	// (0x0001785f) msg_body_pane_t2

0x2255,	// (0x00017871) msg_body_pane_t3_ParamLimits

0x2255,	// (0x00017871) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00024b15) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00024b15) msg_body_pane_t

0x756e,	// (0x0001cb8a) main_viewer_pane_g1_ParamLimits

0x756e,	// (0x0001cb8a) main_viewer_pane_g1

0x757a,	// (0x0001cb96) main_viewer_pane_g2_ParamLimits

0x757a,	// (0x0001cb96) main_viewer_pane_g2

0xa8f1,	// (0x0001ff0d) main_viewer_pane_g3_ParamLimits

0xa8f1,	// (0x0001ff0d) main_viewer_pane_g3

0xa902,	// (0x0001ff1e) main_viewer_pane_g4_ParamLimits

0xa902,	// (0x0001ff1e) main_viewer_pane_g4

0x7586,	// (0x0001cba2) main_viewer_pane_g5_ParamLimits

0x7586,	// (0x0001cba2) main_viewer_pane_g5

0x7586,	// (0x0001cba2) main_viewer_pane_g7_ParamLimits

0x7586,	// (0x0001cba2) main_viewer_pane_g7

0x1b29,	// (0x00017145) main_viewer_pane_g8_ParamLimits

0x1b29,	// (0x00017145) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00024b25) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00024b25) main_viewer_pane_g

0x22a9,	// (0x000178c5) viewer_content_pane_ParamLimits

0x22a9,	// (0x000178c5) viewer_content_pane

0xa933,	// (0x0001ff4f) main_postcard_pane_g1_ParamLimits

0xa933,	// (0x0001ff4f) main_postcard_pane_g1

0xa941,	// (0x0001ff5d) main_postcard_pane_g2_ParamLimits

0xa941,	// (0x0001ff5d) main_postcard_pane_g2

0xa94f,	// (0x0001ff6b) main_postcard_pane_g3_ParamLimits

0xa94f,	// (0x0001ff6b) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00024b36) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00024b36) main_postcard_pane_g

0xa95f,	// (0x0001ff7b) main_postcard_pane_g4

0x35cd,	// (0x00018be9) smil_status_volume_pane_g2

0xa98b,	// (0x0001ffa7) postcard_pane_ParamLimits

0xa98b,	// (0x0001ffa7) postcard_pane

0x211a,	// (0x00017736) postcard_pane_g1_ParamLimits

0x211a,	// (0x00017736) postcard_pane_g1

0xa9bd,	// (0x0001ffd9) postcard_pane_g2_ParamLimits

0xa9bd,	// (0x0001ffd9) postcard_pane_g2

0xa9c9,	// (0x0001ffe5) postcard_pane_g3_ParamLimits

0xa9c9,	// (0x0001ffe5) postcard_pane_g3

0x22c5,	// (0x000178e1) postcard_pane_g4_ParamLimits

0x22c5,	// (0x000178e1) postcard_pane_g4

0xa9d5,	// (0x0001fff1) postcard_pane_g5_ParamLimits

0xa9d5,	// (0x0001fff1) postcard_pane_g5

0xa9e1,	// (0x0001fffd) postcard_pane_g6_ParamLimits

0xa9e1,	// (0x0001fffd) postcard_pane_g6

0x22b7,	// (0x000178d3) postcard_pane_g7_ParamLimits

0x22b7,	// (0x000178d3) postcard_pane_g7

0x0006,

0xf527,	// (0x00024b43) postcard_pane_g_ParamLimits

0xf527,	// (0x00024b43) postcard_pane_g

0xa9ed,	// (0x00020009) main_mp2_pane_g1_ParamLimits

0xa9ed,	// (0x00020009) main_mp2_pane_g1

0xa9f9,	// (0x00020015) main_mp2_pane_g2_ParamLimits

0xa9f9,	// (0x00020015) main_mp2_pane_g2

0xaa05,	// (0x00020021) main_mp2_pane_g3_ParamLimits

0xaa05,	// (0x00020021) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00024b52) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00024b52) main_mp2_pane_g

0xaa11,	// (0x0002002d) main_mp2_pane_t1_ParamLimits

0xaa11,	// (0x0002002d) main_mp2_pane_t1

0xaa28,	// (0x00020044) main_mp2_pane_t2_ParamLimits

0xaa28,	// (0x00020044) main_mp2_pane_t2

0xaa3c,	// (0x00020058) main_mp2_pane_t3_ParamLimits

0xaa3c,	// (0x00020058) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00024b59) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00024b59) main_mp2_pane_t

0x22d3,	// (0x000178ef) pec_content_pane_ParamLimits

0x22d3,	// (0x000178ef) pec_content_pane

0x177c,	// (0x00016d98) scroll_pane_cp015

0x22e5,	// (0x00017901) pec_attribute_pane_ParamLimits

0x22e5,	// (0x00017901) pec_attribute_pane

0xaa4e,	// (0x0002006a) pec_content_pane_g1_ParamLimits

0xaa4e,	// (0x0002006a) pec_content_pane_g1

0x22f5,	// (0x00017911) pec_content_pane_t1_ParamLimits

0x22f5,	// (0x00017911) pec_content_pane_t1

0x2307,	// (0x00017923) pec_content_pane_t2_ParamLimits

0x2307,	// (0x00017923) pec_content_pane_t2

0x0001,

0xf544,	// (0x00024b60) pec_content_pane_t_ParamLimits

0xf544,	// (0x00024b60) pec_content_pane_t

0xaa5a,	// (0x00020076) list_single_graphic_pane_cp01_ParamLimits

0xaa5a,	// (0x00020076) list_single_graphic_pane_cp01

0x11c1,	// (0x000167dd) bg_popup_sub_pane_cp04

0x2319,	// (0x00017935) popup_mup_playback_window_g1

0x2325,	// (0x00017941) popup_mup_playback_window_t1

0x233a,	// (0x00017956) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00024b65) popup_mup_playback_window_t

0x2371,	// (0x0001798d) main_image_pane_g1_ParamLimits

0x2371,	// (0x0001798d) main_image_pane_g1

0x23b4,	// (0x000179d0) scroll_pane_cp018_ParamLimits

0x23b4,	// (0x000179d0) scroll_pane_cp018

0x23cc,	// (0x000179e8) scroll_pane_cp016_ParamLimits

0x23cc,	// (0x000179e8) scroll_pane_cp016

0xaaf3,	// (0x0002010f) smil2_image_pane_ParamLimits

0xaaf3,	// (0x0002010f) smil2_image_pane

0xab23,	// (0x0002013f) smil2_root_pane_ParamLimits

0xab23,	// (0x0002013f) smil2_root_pane

0xab4f,	// (0x0002016b) smil2_text_pane_ParamLimits

0xab4f,	// (0x0002016b) smil2_text_pane

0x0f66,	// (0x00016582) bg_list_pane_cp06

0x2408,	// (0x00017a24) grid_radio_pane

0x0f66,	// (0x00016582) bg_popup_window_pane_cp06

0x2410,	// (0x00017a2c) main_fmradio_pane_t1

0x1ddd,	// (0x000173f9) heading_pane_cp04

0x241e,	// (0x00017a3a) main_fmradio_pane_t2

0x33e3,	// (0x000189ff) popup_cale_lunar_info_window_g1

0x242c,	// (0x00017a48) main_fmradio_pane_t3

0x33eb,	// (0x00018a07) popup_cale_lunar_info_window_g2

0x243a,	// (0x00017a56) main_fmradio_pane_t4

0x0001,

0x2448,	// (0x00017a64) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00024c40) popup_cale_lunar_info_window_g

0xf55e,	// (0x00024b7a) main_fmradio_pane_t

0x2456,	// (0x00017a72) wait_bar_pane_cp03

0x245e,	// (0x00017a7a) cell_fmradio_pane_ParamLimits

0x245e,	// (0x00017a7a) cell_fmradio_pane

0x22b7,	// (0x000178d3) cell_fmradio_pane_g1_ParamLimits

0x22b7,	// (0x000178d3) cell_fmradio_pane_g1

0x0f66,	// (0x00016582) grid_highlight_pane_cp011

0x2471,	// (0x00017a8d) poc_content_pane_ParamLimits

0x2471,	// (0x00017a8d) poc_content_pane

0x2483,	// (0x00017a9f) scroll_pane_cp019

0xab8f,	// (0x000201ab) popup_call_poc_act_window_ParamLimits

0xab8f,	// (0x000201ab) popup_call_poc_act_window

0xab9c,	// (0x000201b8) popup_call_poc_inact_window_ParamLimits

0xab9c,	// (0x000201b8) popup_call_poc_inact_window

0xf5fb,	// (0x00024c17) bg_popup_call_poc_act_pane_g

0x335b,	// (0x00018977) bg_popup_call_poc_inact_pane_g1

0x3363,	// (0x0001897f) bg_popup_call_poc_inact_pane_g2

0x248b,	// (0x00017aa7) popup_call_poc_act_window_g2

0x336b,	// (0x00018987) bg_popup_call_poc_inact_pane_g3

0x3373,	// (0x0001898f) bg_popup_call_poc_inact_pane_g4

0x337b,	// (0x00018997) bg_popup_call_poc_inact_pane_g5

0x2493,	// (0x00017aaf) popup_call_poc_act_window_t1_ParamLimits

0x2493,	// (0x00017aaf) popup_call_poc_act_window_t1

0x24bb,	// (0x00017ad7) popup_call_poc_act_window_t2_ParamLimits

0x24bb,	// (0x00017ad7) popup_call_poc_act_window_t2

0x24e3,	// (0x00017aff) popup_call_poc_act_window_t3_ParamLimits

0x24e3,	// (0x00017aff) popup_call_poc_act_window_t3

0x250b,	// (0x00017b27) popup_call_poc_act_window_t4_ParamLimits

0x250b,	// (0x00017b27) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00024b85) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00024b85) popup_call_poc_act_window_t

0x3383,	// (0x0001899f) bg_popup_call_poc_inact_pane_g6

0x338b,	// (0x000189a7) bg_popup_call_poc_inact_pane_g7

0x3393,	// (0x000189af) bg_popup_call_poc_inact_pane_g8

0x251d,	// (0x00017b39) popup_call_poc_inact_window_g2

0x339b,	// (0x000189b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00024c04) bg_popup_call_poc_inact_pane_g

0x2525,	// (0x00017b41) popup_call_poc_inact_window_t1_ParamLimits

0x2525,	// (0x00017b41) popup_call_poc_inact_window_t1

0x253a,	// (0x00017b56) popup_call_poc_inact_window_t2_ParamLimits

0x253a,	// (0x00017b56) popup_call_poc_inact_window_t2

0x254f,	// (0x00017b6b) popup_call_poc_inact_window_t3_ParamLimits

0x254f,	// (0x00017b6b) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00024b8e) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00024b8e) popup_call_poc_inact_window_t

0x3553,	// (0x00018b6f) context_pane_ParamLimits

0xb18c,	// (0x000207a8) signal_pane_ParamLimits

0x2049,	// (0x00017665) main_call2_pane

0x3541,	// (0x00018b5d) popup_phob_thumbnail2_window_ParamLimits

0x3541,	// (0x00018b5d) popup_phob_thumbnail2_window

0x753e,	// (0x0001cb5a) aid_hotspot_pointer_arrow_pane

0x7546,	// (0x0001cb62) aid_hotspot_pointer_hand_pane

0xaebe,	// (0x000204da) phob_pre_status_pane_g5

0x8f87,	// (0x0001e5a3) cams_zoom_pane_ParamLimits

0x8f93,	// (0x0001e5af) image_vga_pane_ParamLimits

0x8fa2,	// (0x0001e5be) main_camera_pane_g1_ParamLimits

0x8fb0,	// (0x0001e5cc) main_camera_pane_g2_ParamLimits

0x8fbc,	// (0x0001e5d8) main_camera_pane_g3_ParamLimits

0x8fc8,	// (0x0001e5e4) main_camera_pane_g4_ParamLimits

0x8fd4,	// (0x0001e5f0) main_camera_pane_g5_ParamLimits

0x8fe0,	// (0x0001e5fc) main_camera_pane_g6_ParamLimits

0x8fec,	// (0x0001e608) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0002488d) main_camera_pane_g_ParamLimits

0x8ff8,	// (0x0001e614) main_camera_pane_t1_ParamLimits

0x900a,	// (0x0001e626) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0002489e) main_camera_pane_t_ParamLimits

0x11c1,	// (0x000167dd) bg_popup_preview_window_pane_cp01_ParamLimits

0x11c1,	// (0x000167dd) bg_popup_preview_window_pane_cp01

0x2564,	// (0x00017b80) popup_phob_thumbnail2_window_g1_ParamLimits

0x2564,	// (0x00017b80) popup_phob_thumbnail2_window_g1

0x0f66,	// (0x00016582) call2_cli_visual_pane

0xabb8,	// (0x000201d4) popup_call2_audio_conf_window_ParamLimits

0xabb8,	// (0x000201d4) popup_call2_audio_conf_window

0xabcd,	// (0x000201e9) popup_call2_audio_first_window_ParamLimits

0xabcd,	// (0x000201e9) popup_call2_audio_first_window

0xac6b,	// (0x00020287) popup_call2_audio_in_window_ParamLimits

0xac6b,	// (0x00020287) popup_call2_audio_in_window

0xacad,	// (0x000202c9) popup_call2_audio_out_window_ParamLimits

0xacad,	// (0x000202c9) popup_call2_audio_out_window

0xad0f,	// (0x0002032b) popup_call2_audio_second_window_ParamLimits

0xad0f,	// (0x0002032b) popup_call2_audio_second_window

0xad6d,	// (0x00020389) popup_call2_audio_wait_window_ParamLimits

0xad6d,	// (0x00020389) popup_call2_audio_wait_window

0x0f66,	// (0x00016582) bg_popup_call2_act_pane_cp03

0x11a3,	// (0x000167bf) list_conf_pane_cp

0x2570,	// (0x00017b8c) popup_call2_audio_conf_window_t1

0x1e3a,	// (0x00017456) list_single_graphic_popup_conf2_pane_ParamLimits

0x1e3a,	// (0x00017456) list_single_graphic_popup_conf2_pane

0x1e4d,	// (0x00017469) list_highlight_pane_cp04

0x257e,	// (0x00017b9a) list_single_graphic_popup_conf2_pane_g1

0x1e5e,	// (0x0001747a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00024b95) list_single_graphic_popup_conf2_pane_g

0x2588,	// (0x00017ba4) list_single_graphic_popup_conf2_pane_t1

0x2596,	// (0x00017bb2) bg_popup_call2_act_pane_cp01_ParamLimits

0x2596,	// (0x00017bb2) bg_popup_call2_act_pane_cp01

0x2620,	// (0x00017c3c) call_type_pane_cp05_ParamLimits

0x2620,	// (0x00017c3c) call_type_pane_cp05

0x2674,	// (0x00017c90) popup_call2_audio_second_window_g1_ParamLimits

0x2674,	// (0x00017c90) popup_call2_audio_second_window_g1

0x26c8,	// (0x00017ce4) popup_call2_audio_second_window_g2_ParamLimits

0x26c8,	// (0x00017ce4) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00024b9a) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00024b9a) popup_call2_audio_second_window_g

0x272d,	// (0x00017d49) popup_call2_audio_second_window_t1_ParamLimits

0x272d,	// (0x00017d49) popup_call2_audio_second_window_t1

0x27e8,	// (0x00017e04) popup_call2_audio_second_window_t2_ParamLimits

0x27e8,	// (0x00017e04) popup_call2_audio_second_window_t2

0x283b,	// (0x00017e57) popup_call2_audio_second_window_t3_ParamLimits

0x283b,	// (0x00017e57) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00024ba1) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00024ba1) popup_call2_audio_second_window_t

0x0f66,	// (0x00016582) bg_popup_call2_in_pane_cp02

0x0f70,	// (0x0001658c) call_type_pane_cp04

0x0f78,	// (0x00016594) popup_call2_audio_wait_window_g1

0x0f80,	// (0x0001659c) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002477a) popup_call2_audio_wait_window_g

0x0f88,	// (0x000165a4) popup_call2_audio_wait_window_t3

0x292e,	// (0x00017f4a) bg_popup_call2_act_pane_ParamLimits

0x292e,	// (0x00017f4a) bg_popup_call2_act_pane

0x29ee,	// (0x0001800a) call_type_pane_cp03_ParamLimits

0x29ee,	// (0x0001800a) call_type_pane_cp03

0x2a52,	// (0x0001806e) popup_call2_audio_first_window_g1_ParamLimits

0x2a52,	// (0x0001806e) popup_call2_audio_first_window_g1

0x2ac2,	// (0x000180de) popup_call2_audio_first_window_g2_ParamLimits

0x2ac2,	// (0x000180de) popup_call2_audio_first_window_g2

0x211a,	// (0x00017736) popup_call2_audio_first_window_g3_ParamLimits

0x211a,	// (0x00017736) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00024baa) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00024baa) popup_call2_audio_first_window_g

0x2ba0,	// (0x000181bc) popup_call2_audio_first_window_t1_ParamLimits

0x2ba0,	// (0x000181bc) popup_call2_audio_first_window_t1

0x2ca3,	// (0x000182bf) popup_call2_audio_first_window_t4_ParamLimits

0x2ca3,	// (0x000182bf) popup_call2_audio_first_window_t4

0x2d86,	// (0x000183a2) popup_call2_audio_first_window_t5_ParamLimits

0x2d86,	// (0x000183a2) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00024bb5) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00024bb5) popup_call2_audio_first_window_t

0x11b9,	// (0x000167d5) bg_popup_call2_act_pane_g1

0x33f3,	// (0x00018a0f) popup_cale_lunar_info_window_t1

0x3401,	// (0x00018a1d) popup_cale_lunar_info_window_t2

0x340f,	// (0x00018a2b) popup_cale_lunar_info_window_t3

0x0f66,	// (0x00016582) bg_popup_call2_bubble_pane

0x2e87,	// (0x000184a3) bg_popup_call2_in_pane_cp01_ParamLimits

0x2e87,	// (0x000184a3) bg_popup_call2_in_pane_cp01

0x0c42,	// (0x0001625e) call_type_pane_cp02

0x2ecf,	// (0x000184eb) popup_call2_audio_out_window_g1_ParamLimits

0x2ecf,	// (0x000184eb) popup_call2_audio_out_window_g1

0x2efb,	// (0x00018517) popup_call2_audio_out_window_g2_ParamLimits

0x2efb,	// (0x00018517) popup_call2_audio_out_window_g2

0x2f23,	// (0x0001853f) popup_call2_audio_out_window_g3_ParamLimits

0x2f23,	// (0x0001853f) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00024bbe) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00024bbe) popup_call2_audio_out_window_g

0x2f5e,	// (0x0001857a) popup_call2_audio_out_window_t1_ParamLimits

0x2f5e,	// (0x0001857a) popup_call2_audio_out_window_t1

0x2fbd,	// (0x000185d9) popup_call2_audio_out_window_t2_ParamLimits

0x2fbd,	// (0x000185d9) popup_call2_audio_out_window_t2

0x3011,	// (0x0001862d) popup_call2_audio_out_window_t3_ParamLimits

0x3011,	// (0x0001862d) popup_call2_audio_out_window_t3

0x3027,	// (0x00018643) popup_call2_audio_out_window_t4_ParamLimits

0x3027,	// (0x00018643) popup_call2_audio_out_window_t4

0x303d,	// (0x00018659) popup_call2_audio_out_window_t5_ParamLimits

0x303d,	// (0x00018659) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00024bc7) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00024bc7) popup_call2_audio_out_window_t

0x30a1,	// (0x000186bd) bg_popup_call2_in_pane_ParamLimits

0x30a1,	// (0x000186bd) bg_popup_call2_in_pane

0x30fd,	// (0x00018719) popup_call2_audio_in_window_g1_ParamLimits

0x30fd,	// (0x00018719) popup_call2_audio_in_window_g1

0x3135,	// (0x00018751) popup_call2_audio_in_window_g2_ParamLimits

0x3135,	// (0x00018751) popup_call2_audio_in_window_g2

0x316d,	// (0x00018789) popup_call2_audio_in_window_g3_ParamLimits

0x316d,	// (0x00018789) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00024bd4) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00024bd4) popup_call2_audio_in_window_g

0x31c5,	// (0x000187e1) popup_call2_audio_in_window_t1_ParamLimits

0x31c5,	// (0x000187e1) popup_call2_audio_in_window_t1

0x3245,	// (0x00018861) popup_call2_audio_in_window_t2_ParamLimits

0x3245,	// (0x00018861) popup_call2_audio_in_window_t2

0x32c5,	// (0x000188e1) popup_call2_audio_in_window_t3_ParamLimits

0x32c5,	// (0x000188e1) popup_call2_audio_in_window_t3

0x32df,	// (0x000188fb) popup_call2_audio_in_window_t4_ParamLimits

0x32df,	// (0x000188fb) popup_call2_audio_in_window_t4

0x32f1,	// (0x0001890d) popup_call2_audio_in_window_t5_ParamLimits

0x32f1,	// (0x0001890d) popup_call2_audio_in_window_t5

0x3306,	// (0x00018922) popup_call2_audio_in_window_t6_ParamLimits

0x3306,	// (0x00018922) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00024bdd) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00024bdd) popup_call2_audio_in_window_t

0x11b9,	// (0x000167d5) bg_popup_call2_in_pane_g1

0x341d,	// (0x00018a39) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00024c45) popup_cale_lunar_info_window_t

0x11c1,	// (0x000167dd) bg_popup_call2_rect_pane_ParamLimits

0x11c1,	// (0x000167dd) bg_popup_call2_rect_pane

0x0f66,	// (0x00016582) call2_cli_visual_graphic_pane

0x0f66,	// (0x00016582) call2_cli_visual_text_pane

0x75a4,	// (0x0001cbc0) smil_status_volume_pane_g3

0x0002,

0x1333,	// (0x0001694f) call2_cli_visual_graphic_pane_g1

0x1333,	// (0x0001694f) call2_cli_visual_graphic_pane_g2

0x1333,	// (0x0001694f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00024bea) call2_cli_visual_graphic_pane_g

0x331b,	// (0x00018937) bg_popup_call2_rect_pane_g1

0x13bf,	// (0x000169db) bg_popup_call2_rect_pane_g2

0x3323,	// (0x0001893f) bg_popup_call2_rect_pane_g3

0x332b,	// (0x00018947) bg_popup_call2_rect_pane_g4

0x3333,	// (0x0001894f) bg_popup_call2_rect_pane_g5

0x333b,	// (0x00018957) bg_popup_call2_rect_pane_g6

0x3343,	// (0x0001895f) bg_popup_call2_rect_pane_g7

0x334b,	// (0x00018967) bg_popup_call2_rect_pane_g8

0x3353,	// (0x0001896f) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00024bf1) bg_popup_call2_rect_pane_g

0x335b,	// (0x00018977) bg_popup_call2_bubble_pane_g1

0x3363,	// (0x0001897f) bg_popup_call2_bubble_pane_g2

0x336b,	// (0x00018987) bg_popup_call2_bubble_pane_g3

0x3373,	// (0x0001898f) bg_popup_call2_bubble_pane_g4

0x337b,	// (0x00018997) bg_popup_call2_bubble_pane_g5

0x3383,	// (0x0001899f) bg_popup_call2_bubble_pane_g6

0x338b,	// (0x000189a7) bg_popup_call2_bubble_pane_g7

0x3393,	// (0x000189af) bg_popup_call2_bubble_pane_g8

0x339b,	// (0x000189b7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00024c04) bg_popup_call2_bubble_pane_g

0x8c00,	// (0x0001e21c) aid_cale_week_size_cell_pane

0x901c,	// (0x0001e638) aid_cams_cif_uncrop_pane_ParamLimits

0x901c,	// (0x0001e638) aid_cams_cif_uncrop_pane

0x9179,	// (0x0001e795) aid_cams_size_cell_ParamLimits

0x9179,	// (0x0001e795) aid_cams_size_cell

0x9185,	// (0x0001e7a1) grid_cams_pane_ParamLimits

0x9193,	// (0x0001e7af) linegrid_cams_pane_ParamLimits

0x9286,	// (0x0001e8a2) call_video_pane_t1

0x92a0,	// (0x0001e8bc) call_video_pane_t2

0x0001,

0xf2d5,	// (0x000248f1) call_video_pane_t

0x9758,	// (0x0001ed74) aid_cale_month_size_cell_pane_ParamLimits

0x9758,	// (0x0001ed74) aid_cale_month_size_cell_pane

0xf672,	// (0x00024c8e) smil_status_volume_pane_g

0x75b1,	// (0x0001cbcd) volume_smil_pane_ParamLimits

0x0ae7,	// (0x00016103) aid_popup2_width_pane

0x8b45,	// (0x0001e161) cell_qdial_pane_g4_ParamLimits

0x8b45,	// (0x0001e161) cell_qdial_pane_g4

0xa230,	// (0x0001f84c) aid_blid_cardinal_pane_ParamLimits

0xa240,	// (0x0001f85c) aid_blid_destination_pane_ParamLimits

0xa240,	// (0x0001f85c) aid_blid_destination_pane

0x11c1,	// (0x000167dd) bg_popup_call_poc_act_pane_ParamLimits

0x11c1,	// (0x000167dd) bg_popup_call_poc_act_pane

0x11c1,	// (0x000167dd) bg_popup_call_poc_inact_pane_ParamLimits

0x11c1,	// (0x000167dd) bg_popup_call_poc_inact_pane

0x33a3,	// (0x000189bf) bg_popup_call_poc_act_pane_g1

0x33ab,	// (0x000189c7) bg_popup_call_poc_act_pane_g2

0x33b3,	// (0x000189cf) bg_popup_call_poc_act_pane_g3

0x3373,	// (0x0001898f) bg_popup_call_poc_act_pane_g4

0x337b,	// (0x00018997) bg_popup_call_poc_act_pane_g5

0x33bb,	// (0x000189d7) bg_popup_call_poc_act_pane_g6

0x338b,	// (0x000189a7) bg_popup_call_poc_act_pane_g7

0x33c3,	// (0x000189df) bg_popup_call_poc_act_pane_g8

0x0f66,	// (0x00016582) main_usb_pane

0x351c,	// (0x00018b38) popup_cale_lunar_info_window

0x954c,	// (0x0001eb68) im_reading_pane_t1_ParamLimits

0x16d4,	// (0x00016cf0) list_im_pane_ParamLimits

0x16e5,	// (0x00016d01) scroll_pane_cp07_ParamLimits

0x0f66,	// (0x00016582) grid_highlight_pane_cp012

0x11c1,	// (0x000167dd) mup_scale_pane_ParamLimits

0x211a,	// (0x00017736) main_usb_pane_g1_ParamLimits

0x211a,	// (0x00017736) main_usb_pane_g1

0xade1,	// (0x000203fd) main_usb_pane_g2_ParamLimits

0xade1,	// (0x000203fd) main_usb_pane_g2

0x0001,

0xf612,	// (0x00024c2e) main_usb_pane_g_ParamLimits

0xf612,	// (0x00024c2e) main_usb_pane_g

0xaded,	// (0x00020409) main_usb_pane_t1_ParamLimits

0xaded,	// (0x00020409) main_usb_pane_t1

0xadff,	// (0x0002041b) main_usb_pane_t2_ParamLimits

0xadff,	// (0x0002041b) main_usb_pane_t2

0xae11,	// (0x0002042d) main_usb_pane_t3_ParamLimits

0xae11,	// (0x0002042d) main_usb_pane_t3

0xae23,	// (0x0002043f) main_usb_pane_t4_ParamLimits

0xae23,	// (0x0002043f) main_usb_pane_t4

0xae35,	// (0x00020451) main_usb_pane_t5_ParamLimits

0xae35,	// (0x00020451) main_usb_pane_t5

0xae47,	// (0x00020463) main_usb_pane_t6_ParamLimits

0xae47,	// (0x00020463) main_usb_pane_t6

0x0005,

0xf617,	// (0x00024c33) main_usb_pane_t_ParamLimits

0xa1d6,	// (0x0001f7f2) aid_text_placing

0xa1e2,	// (0x0001f7fe) main_location2_pane_t1_ParamLimits

0xa1f6,	// (0x0001f812) main_location2_pane_t2_ParamLimits

0xa20a,	// (0x0001f826) main_location2_pane_t3_ParamLimits

0xa21e,	// (0x0001f83a) main_location2_pane_t4_ParamLimits

0xa21e,	// (0x0001f83a) main_location2_pane_t4

0xf436,	// (0x00024a52) main_location2_pane_t_ParamLimits

0x11fd,	// (0x00016819) find_pinb_pane_g2_ParamLimits

0x11fd,	// (0x00016819) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000247a0) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000247a0) find_pinb_pane_g

0x1209,	// (0x00016825) find_pinb_pane_t1_ParamLimits

0x121b,	// (0x00016837) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000247a5) find_pinb_pane_t_ParamLimits

0x0f66,	// (0x00016582) main_call3_pane

0x9aa4,	// (0x0001f0c0) cale_month_day_heading_pane_t1_ParamLimits

0x9b02,	// (0x0001f11e) cale_month_day_heading_pane_t2_ParamLimits

0x9b67,	// (0x0001f183) cale_month_day_heading_pane_t3_ParamLimits

0x9bcc,	// (0x0001f1e8) cale_month_day_heading_pane_t4_ParamLimits

0x9c31,	// (0x0001f24d) cale_month_day_heading_pane_t5_ParamLimits

0x9c96,	// (0x0001f2b2) cale_month_day_heading_pane_t6_ParamLimits

0x9cfb,	// (0x0001f317) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00024929) cale_month_day_heading_pane_t_ParamLimits

0x195b,	// (0x00016f77) smil_status_volume_pane

0xa9a5,	// (0x0001ffc1) postcard_address_pane_ParamLimits

0xa9a5,	// (0x0001ffc1) postcard_address_pane

0xa9b1,	// (0x0001ffcd) postcard_message_pane_ParamLimits

0xa9b1,	// (0x0001ffcd) postcard_message_pane

0xadac,	// (0x000203c8) call2_cli_visual_pane_t1_ParamLimits

0xadac,	// (0x000203c8) call2_cli_visual_pane_t1

0xb374,	// (0x00020990) postcard_message_pane_t1_ParamLimits

0xb374,	// (0x00020990) postcard_message_pane_t1

0xb35d,	// (0x00020979) postcard_address_pane_t1_ParamLimits

0xb35d,	// (0x00020979) postcard_address_pane_t1

0xb34e,	// (0x0002096a) popup_call3_audio_in_window_ParamLimits

0xb34e,	// (0x0002096a) popup_call3_audio_in_window

0xb232,	// (0x0002084e) bg_popup_call3_in_pane_ParamLimits

0xb232,	// (0x0002084e) bg_popup_call3_in_pane

0xb294,	// (0x000208b0) popup_call3_audio_in_window_g1_ParamLimits

0xb294,	// (0x000208b0) popup_call3_audio_in_window_g1

0xb2ac,	// (0x000208c8) popup_call3_audio_in_window_g2_ParamLimits

0xb2ac,	// (0x000208c8) popup_call3_audio_in_window_g2

0xb2c4,	// (0x000208e0) popup_call3_audio_in_window_g3_ParamLimits

0xb2c4,	// (0x000208e0) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00024c95) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00024c95) popup_call3_audio_in_window_g

0xb2ec,	// (0x00020908) popup_call3_audio_in_window_t1_ParamLimits

0xb2ec,	// (0x00020908) popup_call3_audio_in_window_t1

0xb314,	// (0x00020930) popup_call3_audio_in_window_t2_ParamLimits

0xb314,	// (0x00020930) popup_call3_audio_in_window_t2

0xb33c,	// (0x00020958) popup_call3_audio_in_window_t3_ParamLimits

0xb33c,	// (0x00020958) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00024c9e) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00024c9e) popup_call3_audio_in_window_t

0x2049,	// (0x00017665) bg_popup_call3_rect_pane

0x331b,	// (0x00018937) bg_popup_call3_rect_pane_g1

0x13bf,	// (0x000169db) bg_popup_call3_rect_pane_g2

0x3323,	// (0x0001893f) bg_popup_call3_rect_pane_g3

0x332b,	// (0x00018947) bg_popup_call3_rect_pane_g4

0x3333,	// (0x0001894f) bg_popup_call3_rect_pane_g5

0x333b,	// (0x00018957) bg_popup_call3_rect_pane_g6

0x3343,	// (0x0001895f) bg_popup_call3_rect_pane_g7

0xa61e,	// (0x0001fc3a) mup_visualizer_osc_pane

0x2128,	// (0x00017744) mup_visualizer_spec_pane

0xb252,	// (0x0002086e) call3_video_qcif_pane_ParamLimits

0xb252,	// (0x0002086e) call3_video_qcif_pane

0xb264,	// (0x00020880) call3_video_qcif_uncrop_pane_ParamLimits

0xb264,	// (0x00020880) call3_video_qcif_uncrop_pane

0xb272,	// (0x0002088e) call3_video_subqcif_pane_ParamLimits

0xb272,	// (0x0002088e) call3_video_subqcif_pane

0xb284,	// (0x000208a0) call3_video_subqcif_uncrop_pane_ParamLimits

0xb284,	// (0x000208a0) call3_video_subqcif_uncrop_pane

0xb2dc,	// (0x000208f8) popup_call3_audio_in_window_g4_ParamLimits

0xb2dc,	// (0x000208f8) popup_call3_audio_in_window_g4

0xb221,	// (0x0002083d) mup_spec_half_pane

0xb22a,	// (0x00020846) mup_spec_half_pane_cp

0x35b3,	// (0x00018bcf) mup_osc_middle_pane

0x35bc,	// (0x00018bd8) mup_visualizer_osc_pane_g1

0xb202,	// (0x0002081e) mup_spec_bar_pane_ParamLimits

0xb202,	// (0x0002081e) mup_spec_bar_pane

0x35a0,	// (0x00018bbc) mup_spec_bar_pane_g1

0x35aa,	// (0x00018bc6) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00024c89) mup_spec_bar_pane_g

0x8c00,	// (0x0001e21c) aid_cale_week_size_cell_pane_ParamLimits

0x8c13,	// (0x0001e22f) bg_cale_heading_pane_ParamLimits

0x143b,	// (0x00016a57) bg_cale_pane_cp01_ParamLimits

0x8c27,	// (0x0001e243) cale_week_corner_pane_ParamLimits

0x8c3d,	// (0x0001e259) cale_week_day_heading_pane_ParamLimits

0x8c51,	// (0x0001e26d) cale_week_scroll_pane_g1_ParamLimits

0x8c62,	// (0x0001e27e) cale_week_scroll_pane_g2_ParamLimits

0x8c73,	// (0x0001e28f) cale_week_scroll_pane_g3_ParamLimits

0x8c84,	// (0x0001e2a0) cale_week_scroll_pane_g4_ParamLimits

0x8c95,	// (0x0001e2b1) cale_week_scroll_pane_g5_ParamLimits

0x8ca6,	// (0x0001e2c2) cale_week_scroll_pane_g6_ParamLimits

0x8cb7,	// (0x0001e2d3) cale_week_scroll_pane_g7_ParamLimits

0x8cca,	// (0x0001e2e6) cale_week_scroll_pane_g8_ParamLimits

0x8cdd,	// (0x0001e2f9) cale_week_scroll_pane_g9_ParamLimits

0x8cee,	// (0x0001e30a) cale_week_scroll_pane_g10_ParamLimits

0x8cff,	// (0x0001e31b) cale_week_scroll_pane_g11_ParamLimits

0x8d10,	// (0x0001e32c) cale_week_scroll_pane_g12_ParamLimits

0x8d21,	// (0x0001e33d) cale_week_scroll_pane_g13_ParamLimits

0x8d32,	// (0x0001e34e) cale_week_scroll_pane_g14_ParamLimits

0x8d43,	// (0x0001e35f) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00024831) cale_week_scroll_pane_g_ParamLimits

0x8d54,	// (0x0001e370) cale_week_time_pane_ParamLimits

0x8d67,	// (0x0001e383) grid_cale_week_pane_ParamLimits

0x1454,	// (0x00016a70) listscroll_cale_week_pane_t1

0x8d7c,	// (0x0001e398) scroll_pane_cp08_ParamLimits

0x9799,	// (0x0001edb5) cale_month_corner_pane_ParamLimits

0x18fb,	// (0x00016f17) cale_month_pane_t1

0x9a63,	// (0x0001f07f) cale_month_week_pane_ParamLimits

0x211a,	// (0x00017736) popup_call_status_window_g1_ParamLimits

0xa078,	// (0x0001f694) popup_call_status_window_g2_ParamLimits

0xa084,	// (0x0001f6a0) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000249d9) popup_call_status_window_g_ParamLimits

0x1d62,	// (0x0001737e) aid_call2_pane

0xa8b1,	// (0x0001fecd) msg_header_pane_g1

0xa9a5,	// (0x0001ffc1) postcard_address2_pane_ParamLimits

0xa9a5,	// (0x0001ffc1) postcard_address2_pane

0xa9b1,	// (0x0001ffcd) postcard_message2_pane_ParamLimits

0xa9b1,	// (0x0001ffcd) postcard_message2_pane

0xb19a,	// (0x000207b6) message2_row_pane_ParamLimits

0xb19a,	// (0x000207b6) message2_row_pane

0xb1b5,	// (0x000207d1) address2_row_pane_ParamLimits

0xb1b5,	// (0x000207d1) address2_row_pane

0x356e,	// (0x00018b8a) postcard_message2_row_pane_g1

0x3576,	// (0x00018b92) postcard_message2_row_pane_t1

0x356e,	// (0x00018b8a) address2_row_pane_g1

0x3576,	// (0x00018b92) address2_row_pane_t1

0x73f3,	// (0x0001ca0f) aid_size_cell_vorec

0x0f66,	// (0x00016582) main_rss_pane

0xb1c8,	// (0x000207e4) rss_list_single_pane_ParamLimits

0xb1c8,	// (0x000207e4) rss_list_single_pane

0x3584,	// (0x00018ba0) rss_list_single_pane_t1

0x3592,	// (0x00018bae) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00024c84) rss_list_single_pane_t

0x0f66,	// (0x00016582) main_camera2_pane

0x0f66,	// (0x00016582) main_video2_pane

0x760f,	// (0x0001cc2b) cams_zoom_pane_cp2_ParamLimits

0x760f,	// (0x0001cc2b) cams_zoom_pane_cp2

0x761b,	// (0x0001cc37) image2_vga_pane_ParamLimits

0x761b,	// (0x0001cc37) image2_vga_pane

0x762a,	// (0x0001cc46) main_camera2_pane_g1_ParamLimits

0x762a,	// (0x0001cc46) main_camera2_pane_g1

0x7636,	// (0x0001cc52) main_camera2_pane_g2_ParamLimits

0x7636,	// (0x0001cc52) main_camera2_pane_g2

0x7642,	// (0x0001cc5e) main_camera2_pane_g3_ParamLimits

0x7642,	// (0x0001cc5e) main_camera2_pane_g3

0x764e,	// (0x0001cc6a) main_camera2_pane_g4_ParamLimits

0x764e,	// (0x0001cc6a) main_camera2_pane_g4

0x765a,	// (0x0001cc76) main_camera2_pane_g5_ParamLimits

0x765a,	// (0x0001cc76) main_camera2_pane_g5

0x7666,	// (0x0001cc82) main_camera2_pane_g6_ParamLimits

0x7666,	// (0x0001cc82) main_camera2_pane_g6

0x7672,	// (0x0001cc8e) main_camera2_pane_g7_ParamLimits

0x7672,	// (0x0001cc8e) main_camera2_pane_g7

0x767e,	// (0x0001cc9a) main_camera2_pane_g8_ParamLimits

0x767e,	// (0x0001cc9a) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00024ca5) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00024ca5) main_camera2_pane_g

0x7696,	// (0x0001ccb2) main_camera2_pane_t1_ParamLimits

0x7696,	// (0x0001ccb2) main_camera2_pane_t1

0x76a8,	// (0x0001ccc4) main_camera2_pane_t2_ParamLimits

0x76a8,	// (0x0001ccc4) main_camera2_pane_t2

0x76ba,	// (0x0001ccd6) main_camera2_pane_t3_ParamLimits

0x76ba,	// (0x0001ccd6) main_camera2_pane_t3

0x76cc,	// (0x0001cce8) main_camera2_pane_t4_ParamLimits

0x76cc,	// (0x0001cce8) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00024cb8) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00024cb8) main_camera2_pane_t

0x772e,	// (0x0001cd4a) cams_zoom_pane_cp4_ParamLimits

0x772e,	// (0x0001cd4a) cams_zoom_pane_cp4

0x773e,	// (0x0001cd5a) image2_cif_pane_ParamLimits

0x773e,	// (0x0001cd5a) image2_cif_pane

0x7753,	// (0x0001cd6f) image2_subqcif_pane_ParamLimits

0x7753,	// (0x0001cd6f) image2_subqcif_pane

0x7762,	// (0x0001cd7e) main_video2_pane_g1_ParamLimits

0x7762,	// (0x0001cd7e) main_video2_pane_g1

0x7774,	// (0x0001cd90) main_video2_pane_g2_ParamLimits

0x7774,	// (0x0001cd90) main_video2_pane_g2

0x7784,	// (0x0001cda0) main_video2_pane_g3_ParamLimits

0x7784,	// (0x0001cda0) main_video2_pane_g3

0x7794,	// (0x0001cdb0) main_video2_pane_g4_ParamLimits

0x7794,	// (0x0001cdb0) main_video2_pane_g4

0x77a4,	// (0x0001cdc0) main_video2_pane_g5_ParamLimits

0x77a4,	// (0x0001cdc0) main_video2_pane_g5

0x77b4,	// (0x0001cdd0) main_video2_pane_g6_ParamLimits

0x77b4,	// (0x0001cdd0) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00024cc7) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00024cc7) main_video2_pane_g

0x77c6,	// (0x0001cde2) main_video2_pane_t1_ParamLimits

0x77c6,	// (0x0001cde2) main_video2_pane_t1

0x77e0,	// (0x0001cdfc) main_video2_pane_t2_ParamLimits

0x77e0,	// (0x0001cdfc) main_video2_pane_t2

0x7806,	// (0x0001ce22) main_video2_pane_t3_ParamLimits

0x7806,	// (0x0001ce22) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00024cd4) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00024cd4) main_video2_pane_t

0xaefe,	// (0x0002051a) call_muted_g2

0x0001,

0xf65a,	// (0x00024c76) call_muted_g

0x0f66,	// (0x00016582) main_mup2_pane

0x3673,	// (0x00018c8f) main_mup2_pane_g1_ParamLimits

0x3673,	// (0x00018c8f) main_mup2_pane_g1

0xb38f,	// (0x000209ab) main_mup2_pane_g2_ParamLimits

0xb38f,	// (0x000209ab) main_mup2_pane_g2

0x7855,	// (0x0001ce71) main_mup_pane_g13_cp1

0x785d,	// (0x0001ce79) mup_volume_pane_cp1

0xb3af,	// (0x000209cb) main_mup2_pane_g4_ParamLimits

0xb3af,	// (0x000209cb) main_mup2_pane_g4

0xb3c4,	// (0x000209e0) main_mup2_pane_g5_ParamLimits

0xb3c4,	// (0x000209e0) main_mup2_pane_g5

0xb3d9,	// (0x000209f5) main_mup2_pane_g6_ParamLimits

0xb3d9,	// (0x000209f5) main_mup2_pane_g6

0xb3ee,	// (0x00020a0a) main_mup2_pane_g7_ParamLimits

0xb3ee,	// (0x00020a0a) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00024cdb) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00024cdb) main_mup2_pane_g

0xb40a,	// (0x00020a26) main_mup2_pane_t1_ParamLimits

0xb40a,	// (0x00020a26) main_mup2_pane_t1

0xb421,	// (0x00020a3d) main_mup2_pane_t2_ParamLimits

0xb421,	// (0x00020a3d) main_mup2_pane_t2

0xb438,	// (0x00020a54) main_mup2_pane_t3_ParamLimits

0xb438,	// (0x00020a54) main_mup2_pane_t3

0xb44f,	// (0x00020a6b) main_mup2_pane_t4_ParamLimits

0xb44f,	// (0x00020a6b) main_mup2_pane_t4

0xb469,	// (0x00020a85) main_mup2_pane_t5_ParamLimits

0xb469,	// (0x00020a85) main_mup2_pane_t5

0xb483,	// (0x00020a9f) main_mup2_pane_t6_ParamLimits

0xb483,	// (0x00020a9f) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00024cea) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00024cea) main_mup2_pane_t

0xb4bb,	// (0x00020ad7) mup2_visualizer_pane_ParamLimits

0xb4bb,	// (0x00020ad7) mup2_visualizer_pane

0xb4f1,	// (0x00020b0d) mup_progress_pane_cp_ParamLimits

0xb4f1,	// (0x00020b0d) mup_progress_pane_cp

0x7840,	// (0x0001ce5c) mup_volume_pane_cp_ParamLimits

0x7840,	// (0x0001ce5c) mup_volume_pane_cp

0xb508,	// (0x00020b24) mup2_visualizer_pane_g1_ParamLimits

0xb508,	// (0x00020b24) mup2_visualizer_pane_g1

0x3645,	// (0x00018c61) mup2_visualizer_pane_g2_ParamLimits

0x3645,	// (0x00018c61) mup2_visualizer_pane_g2

0xb51d,	// (0x00020b39) mup2_visualizer_pane_g3_ParamLimits

0xb51d,	// (0x00020b39) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00024cf7) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00024cf7) mup2_visualizer_pane_g

0x2400,	// (0x00017a1c) aid_size_cell_fmradio

0xb014,	// (0x00020630) aid_height_parent_landcape

0x1763,	// (0x00016d7f) wml_content_pane_cp

0x176b,	// (0x00016d87) wml_tabs_pane

0x1774,	// (0x00016d90) popup_wml_miniature_window

0x177c,	// (0x00016d98) scroll_pane_cp021

0x1790,	// (0x00016dac) wml_content_pane_comp8

0x0f66,	// (0x00016582) bg_popup_sub_pane_cp05

0x3663,	// (0x00018c7f) popup_wml_miniature_window_g1

0x366b,	// (0x00018c87) wml_miniature_view_pane

0xb52b,	// (0x00020b47) aid_size_wml_view

0xb533,	// (0x00020b4f) wml_miniature_view_pane_g1

0xb53c,	// (0x00020b58) wml_miniature_view_pane_g2

0xb545,	// (0x00020b61) wml_miniature_view_pane_g3

0xb54d,	// (0x00020b69) wml_miniature_view_pane_g4

0xb555,	// (0x00020b71) wml_miniature_view_pane_g5

0xb55d,	// (0x00020b79) wml_miniature_view_pane_g6

0xb565,	// (0x00020b81) wml_miniature_view_pane_g7

0xb56d,	// (0x00020b89) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00024cfe) wml_miniature_view_pane_g

0x3673,	// (0x00018c8f) background_graphic_ParamLimits

0x3673,	// (0x00018c8f) background_graphic

0x367f,	// (0x00018c9b) wml_tabs_2_pane

0x3688,	// (0x00018ca4) wml_tabs_3_pane_ParamLimits

0x3688,	// (0x00018ca4) wml_tabs_3_pane

0x369a,	// (0x00018cb6) wml_tabs_4_pane_ParamLimits

0x369a,	// (0x00018cb6) wml_tabs_4_pane

0x36b0,	// (0x00018ccc) wml_tabs_5_pane_ParamLimits

0x36b0,	// (0x00018ccc) wml_tabs_5_pane

0x36ca,	// (0x00018ce6) wml_tabs_pane_g2_ParamLimits

0x36ca,	// (0x00018ce6) wml_tabs_pane_g2

0x36de,	// (0x00018cfa) wml_tabs_pane_g3_ParamLimits

0x36de,	// (0x00018cfa) wml_tabs_pane_g3

0xb575,	// (0x00020b91) wml_tabs_2_active_pane_ParamLimits

0xb575,	// (0x00020b91) wml_tabs_2_active_pane

0xb585,	// (0x00020ba1) wml_tabs_2_passive_pane_ParamLimits

0xb585,	// (0x00020ba1) wml_tabs_2_passive_pane

0xb595,	// (0x00020bb1) wml_tabs_3_active_pane_cp_ParamLimits

0xb595,	// (0x00020bb1) wml_tabs_3_active_pane_cp

0xb5a6,	// (0x00020bc2) wml_tabs_3_passive_pane_ParamLimits

0xb5a6,	// (0x00020bc2) wml_tabs_3_passive_pane

0xb5b7,	// (0x00020bd3) wml_tabs_3_passive_pane_cp_ParamLimits

0xb5b7,	// (0x00020bd3) wml_tabs_3_passive_pane_cp

0xb5c8,	// (0x00020be4) tabs_4_active_pane

0xb5d0,	// (0x00020bec) tabs_4_passive_pane

0xb5d8,	// (0x00020bf4) tabs_4_passive_pane_cp

0xb5e0,	// (0x00020bfc) tabs_4_passive_pane_cp2

0xadd9,	// (0x000203f5) aid_height_text

0xa5eb,	// (0x0001fc07) mup_volume_cont_pane_ParamLimits

0xa5eb,	// (0x0001fc07) mup_volume_cont_pane

0x88fd,	// (0x0001df19) aid_size_cell_pinb

0x8907,	// (0x0001df23) aid_size_list_pinb

0xb4da,	// (0x00020af6) mup2_volume_cont_pane_ParamLimits

0xb4da,	// (0x00020af6) mup2_volume_cont_pane

0x782c,	// (0x0001ce48) mup2_volume_cont_pane_g1_ParamLimits

0x782c,	// (0x0001ce48) mup2_volume_cont_pane_g1

0x8596,	// (0x0001dbb2) aid_size_cell_touch_ParamLimits

0x8596,	// (0x0001dbb2) aid_size_cell_touch

0x87e3,	// (0x0001ddff) touch_pane_ParamLimits

0x87e3,	// (0x0001ddff) touch_pane

0x0ad5,	// (0x000160f1) main_rss2_pane

0x3734,	// (0x00018d50) listscroll_rss2_pane

0x373d,	// (0x00018d59) rss2_navigation_pane

0x3745,	// (0x00018d61) list_rss2_pane

0x1f00,	// (0x0001751c) scroll_pane_cp22

0x374d,	// (0x00018d69) rss2_navigation_pane_g1

0x3756,	// (0x00018d72) rss2_navigation_pane_g2

0x375e,	// (0x00018d7a) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00024d0f) rss2_navigation_pane_g

0x3766,	// (0x00018d82) rss2_navigation_pane_t1

0xb5e8,	// (0x00020c04) rss2_list_single_pane_ParamLimits

0xb5e8,	// (0x00020c04) rss2_list_single_pane

0x3774,	// (0x00018d90) rss2_list_single_pane_t2

0x3782,	// (0x00018d9e) rss2_list_single_pane_t3_ParamLimits

0x3782,	// (0x00018d9e) rss2_list_single_pane_t3

0x379f,	// (0x00018dbb) rss2_list_single_pane_t4

0x9ebb,	// (0x0001f4d7) smil_status_pane_g1

0x0b45,	// (0x00016161) main_image2_pane_ParamLimits

0x0b45,	// (0x00016161) main_image2_pane

0x768a,	// (0x0001cca6) main_camera2_pane_g9_ParamLimits

0x768a,	// (0x0001cca6) main_camera2_pane_g9

0x76de,	// (0x0001ccfa) main_camera2_pane_t5_ParamLimits

0x76de,	// (0x0001ccfa) main_camera2_pane_t5

0x76f0,	// (0x0001cd0c) main_camera2_pane_t6_ParamLimits

0x76f0,	// (0x0001cd0c) main_camera2_pane_t6

0xb619,	// (0x00020c35) main_image2_pane_g1_ParamLimits

0xb619,	// (0x00020c35) main_image2_pane_g1

0xab79,	// (0x00020195) smil2_video_pane_ParamLimits

0xab79,	// (0x00020195) smil2_video_pane

0x0af3,	// (0x0001610f) aid_zoom_text_primary_cp

0x0b3b,	// (0x00016157) popup_preview_fixed_window

0x16cc,	// (0x00016ce8) im_reading_pane_g1

0x75d4,	// (0x0001cbf0) cams2_bc_adjust_pane_cp_ParamLimits

0x75d4,	// (0x0001cbf0) cams2_bc_adjust_pane_cp

0x7720,	// (0x0001cd3c) cams2_bc_adjust_pane_ParamLimits

0x7720,	// (0x0001cd3c) cams2_bc_adjust_pane

0x4ec1,	// (0x0001a4dd) cams2_bc_adjust_pane_g1

0x7865,	// (0x0001ce81) cams2_slider_pane

0x786e,	// (0x0001ce8a) cams2_slider_pane_g1

0x7877,	// (0x0001ce93) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00024d16) cams2_slider_pane_g

0x719a,	// (0x0001c7b6) calc_display_pane_ParamLimits

0x71b8,	// (0x0001c7d4) calc_paper_pane_ParamLimits

0x71d4,	// (0x0001c7f0) grid_calc_pane_ParamLimits

0x750f,	// (0x0001cb2b) popup_clock_digital_window_t1_ParamLimits

0x239d,	// (0x000179b9) main_image_pane_t1

0x7180,	// (0x0001c79c) aid_size_cell_calc_ParamLimits

0x7180,	// (0x0001c79c) aid_size_cell_calc

0xb046,	// (0x00020662) popup_blid_sat_info2_window_ParamLimits

0xb046,	// (0x00020662) popup_blid_sat_info2_window

0x37e9,	// (0x00018e05) aid_size_cell_blid

0x37f1,	// (0x00018e0d) bg_popup_window_pane_cp07

0x3814,	// (0x00018e30) grid_popup_blid_pane

0x381e,	// (0x00018e3a) heading_pane_cp05_ParamLimits

0x381e,	// (0x00018e3a) heading_pane_cp05

0x38e8,	// (0x00018f04) cell_popup_blid_pane_ParamLimits

0x38e8,	// (0x00018f04) cell_popup_blid_pane

0x390c,	// (0x00018f28) cell_popup_blid_pane_g1

0x3914,	// (0x00018f30) cell_popup_blid_pane_t1

0xb4a0,	// (0x00020abc) mup2_indicator_pane_ParamLimits

0xb4a0,	// (0x00020abc) mup2_indicator_pane

0x2049,	// (0x00017665) mup2_visualizer_osc_pane

0x3651,	// (0x00018c6d) mup2_visualizer_spec_pane_ParamLimits

0x3651,	// (0x00018c6d) mup2_visualizer_spec_pane

0xb625,	// (0x00020c41) mup2_spec_half_pane

0xb62e,	// (0x00020c4a) mup2_spec_half_pane_cp

0xb638,	// (0x00020c54) mup2_spec_bar_pane_ParamLimits

0xb638,	// (0x00020c54) mup2_spec_bar_pane

0x35a0,	// (0x00018bbc) mup2_spec_bar_pane_g1

0x35aa,	// (0x00018bc6) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00024c89) mup2_spec_bar_pane_g

0xb657,	// (0x00020c73) mup2_osc_middle_pane

0x35bc,	// (0x00018bd8) mup2_visualizer_osc_pane_g1

0x0b73,	// (0x0001618f) popup_number_entry_window_t1_ParamLimits

0x0b86,	// (0x000161a2) popup_number_entry_window_t2_ParamLimits

0x0b98,	// (0x000161b4) popup_number_entry_window_t3_ParamLimits

0x883a,	// (0x0001de56) popup_number_entry_window_t5_ParamLimits

0x883a,	// (0x0001de56) popup_number_entry_window_t5

0xf12f,	// (0x0002474b) popup_number_entry_window_t_ParamLimits

0x0baa,	// (0x000161c6) text_title_cp2_ParamLimits

0x754e,	// (0x0001cb6a) aid_hotspot_pointer_text2_pane

0x7598,	// (0x0001cbb4) main_viewer_pane_g9_ParamLimits

0x7598,	// (0x0001cbb4) main_viewer_pane_g9

0x18fb,	// (0x00016f17) cale_month_pane_t1_ParamLimits

0x1990,	// (0x00016fac) bg_cale_pane_ParamLimits

0x19a8,	// (0x00016fc4) list_cale_pane_ParamLimits

0x1454,	// (0x00016a70) listscroll_cale_day_pane_t1

0x19b9,	// (0x00016fd5) scroll_pane_cp09_ParamLimits

0xa626,	// (0x0001fc42) main_mup_eq_pane_t1_ParamLimits

0xa626,	// (0x0001fc42) main_mup_eq_pane_t1

0xa640,	// (0x0001fc5c) main_mup_eq_pane_t2_ParamLimits

0xa640,	// (0x0001fc5c) main_mup_eq_pane_t2

0xa65a,	// (0x0001fc76) main_mup_eq_pane_t3_ParamLimits

0xa65a,	// (0x0001fc76) main_mup_eq_pane_t3

0xa672,	// (0x0001fc8e) main_mup_eq_pane_t4_ParamLimits

0xa672,	// (0x0001fc8e) main_mup_eq_pane_t4

0xa68a,	// (0x0001fca6) main_mup_eq_pane_t5_ParamLimits

0xa68a,	// (0x0001fca6) main_mup_eq_pane_t5

0xa6a2,	// (0x0001fcbe) main_mup_eq_pane_t6_ParamLimits

0xa6a2,	// (0x0001fcbe) main_mup_eq_pane_t6

0xa6b6,	// (0x0001fcd2) main_mup_eq_pane_t7_ParamLimits

0xa6b6,	// (0x0001fcd2) main_mup_eq_pane_t7

0xa6ca,	// (0x0001fce6) main_mup_eq_pane_t8_ParamLimits

0xa6ca,	// (0x0001fce6) main_mup_eq_pane_t8

0xa6e0,	// (0x0001fcfc) main_mup_eq_pane_t9_ParamLimits

0xa6e0,	// (0x0001fcfc) main_mup_eq_pane_t9

0xa6f8,	// (0x0001fd14) main_mup_eq_pane_t10_ParamLimits

0xa6f8,	// (0x0001fd14) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00024ad8) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00024ad8) main_mup_eq_pane_t

0xa7b5,	// (0x0001fdd1) mup_equalizer_pane_cp5_ParamLimits

0xa7cb,	// (0x0001fde7) mup_equalizer_pane_cp6_ParamLimits

0xa7e3,	// (0x0001fdff) mup_equalizer_pane_cp7_ParamLimits

0x0ad5,	// (0x000160f1) main_gallery_pane

0x35c5,	// (0x00018be1) smil2_volume_pane

0x35e0,	// (0x00018bfc) smil_status_volume_pane_g1_ParamLimits

0x35cd,	// (0x00018be9) smil_status_volume_pane_g2_ParamLimits

0x75a4,	// (0x0001cbc0) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00024c8e) smil_status_volume_pane_g_ParamLimits

0x37f1,	// (0x00018e0d) bg_popup_window_pane_cp07_ParamLimits

0x37ff,	// (0x00018e1b) blid_firmament_pane

0xb660,	// (0x00020c7c) aid_size_cell_gallery_ParamLimits

0xb660,	// (0x00020c7c) aid_size_cell_gallery

0xb66e,	// (0x00020c8a) grid_gallery_pane_ParamLimits

0xb66e,	// (0x00020c8a) grid_gallery_pane

0xb67e,	// (0x00020c9a) cell_gallery_pane_ParamLimits

0xb67e,	// (0x00020c9a) cell_gallery_pane

0x3922,	// (0x00018f3e) bg_cell_gallery_focus_pane_ParamLimits

0x3922,	// (0x00018f3e) bg_cell_gallery_focus_pane

0x3934,	// (0x00018f50) cell_gallery_pane_g1_ParamLimits

0x3934,	// (0x00018f50) cell_gallery_pane_g1

0xb6cc,	// (0x00020ce8) cell_gallery_pane_g2_ParamLimits

0xb6cc,	// (0x00020ce8) cell_gallery_pane_g2

0xb6d9,	// (0x00020cf5) cell_gallery_pane_g3_ParamLimits

0xb6d9,	// (0x00020cf5) cell_gallery_pane_g3

0x3940,	// (0x00018f5c) cell_gallery_pane_g4_ParamLimits

0x3940,	// (0x00018f5c) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00024d3c) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00024d3c) cell_gallery_pane_g

0x394c,	// (0x00018f68) bg_cell_gallery_focus_pane_g1

0x3954,	// (0x00018f70) bg_cell_gallery_focus_pane_g2

0x395c,	// (0x00018f78) bg_cell_gallery_focus_pane_g3

0x3964,	// (0x00018f80) bg_cell_gallery_focus_pane_g4

0x396c,	// (0x00018f88) bg_cell_gallery_focus_pane_g5

0x3974,	// (0x00018f90) bg_cell_gallery_focus_pane_g6

0x397c,	// (0x00018f98) bg_cell_gallery_focus_pane_g7

0x3984,	// (0x00018fa0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00024d45) bg_cell_gallery_focus_pane_g

0x398c,	// (0x00018fa8) aid_firma_cardinal

0x39a0,	// (0x00018fbc) blid_firmament_pane_t1

0x39b7,	// (0x00018fd3) blid_firmament_pane_t2

0x39ce,	// (0x00018fea) blid_firmament_pane_t3

0x39e5,	// (0x00019001) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00024d56) blid_firmament_pane_t

0x39fc,	// (0x00019018) blid_sat_info_pane

0x3a0c,	// (0x00019028) blid_sat_info_pane_g1

0x3a0c,	// (0x00019028) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00024d5f) blid_sat_info_pane_g

0x3a16,	// (0x00019032) blid_sat_info_pane_t1

0x3a24,	// (0x00019040) smil2_volume_content_pane

0x3a2d,	// (0x00019049) smil2_volume_pane_g1

0x3a35,	// (0x00019051) smil2_volume_content_pane_g1

0x3a3e,	// (0x0001905a) smil2_volume_content_pane_g2

0x3a47,	// (0x00019063) smil2_volume_content_pane_g3

0x3a50,	// (0x0001906c) smil2_volume_content_pane_g4

0x3a59,	// (0x00019075) smil2_volume_content_pane_g5

0x3a62,	// (0x0001907e) smil2_volume_content_pane_g6

0x3a6b,	// (0x00019087) smil2_volume_content_pane_g7

0x3a74,	// (0x00019090) smil2_volume_content_pane_g8

0x3a7d,	// (0x00019099) smil2_volume_content_pane_g9

0x3a86,	// (0x000190a2) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00024d64) smil2_volume_content_pane_g

0x8dd2,	// (0x0001e3ee) cale_week_day_heading_pane_t1_ParamLimits

0x8dff,	// (0x0001e41b) cale_week_day_heading_pane_t2_ParamLimits

0x8e2c,	// (0x0001e448) cale_week_day_heading_pane_t3_ParamLimits

0x8e59,	// (0x0001e475) cale_week_day_heading_pane_t4_ParamLimits

0x8e86,	// (0x0001e4a2) cale_week_day_heading_pane_t5_ParamLimits

0x8eb3,	// (0x0001e4cf) cale_week_day_heading_pane_t6_ParamLimits

0x8ee0,	// (0x0001e4fc) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00024850) cale_week_day_heading_pane_t_ParamLimits

0x1466,	// (0x00016a82) bg_cale_side_pane_ParamLimits

0x7333,	// (0x0001c94f) cale_week_time_pane_t1_ParamLimits

0x734b,	// (0x0001c967) cale_week_time_pane_t2_ParamLimits

0x7363,	// (0x0001c97f) cale_week_time_pane_t3_ParamLimits

0x737b,	// (0x0001c997) cale_week_time_pane_t4_ParamLimits

0x7393,	// (0x0001c9af) cale_week_time_pane_t5_ParamLimits

0x73ab,	// (0x0001c9c7) cale_week_time_pane_t6_ParamLimits

0x73c3,	// (0x0001c9df) cale_week_time_pane_t7_ParamLimits

0x73db,	// (0x0001c9f7) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0002485f) cale_week_time_pane_t_ParamLimits

0x8f0d,	// (0x0001e529) cell_cale_week_pane_g2_ParamLimits

0x1466,	// (0x00016a82) bg_cale_side_pane_cp01_ParamLimits

0x9d70,	// (0x0001f38c) cale_month_week_pane_t1_ParamLimits

0x9d87,	// (0x0001f3a3) cale_month_week_pane_t2_ParamLimits

0x9d9e,	// (0x0001f3ba) cale_month_week_pane_t3_ParamLimits

0x9db5,	// (0x0001f3d1) cale_month_week_pane_t4_ParamLimits

0x9dcc,	// (0x0001f3e8) cale_month_week_pane_t5_ParamLimits

0x9de3,	// (0x0001f3ff) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00024938) cale_month_week_pane_t_ParamLimits

0x746f,	// (0x0001ca8b) cell_cale_month_pane_g1_ParamLimits

0x0ad5,	// (0x000160f1) main_cale_event_viewer_pane

0x0ad5,	// (0x000160f1) listscroll_cale_event_viewer_pane

0x3a8f,	// (0x000190ab) list_cale_ev_pane

0x3a97,	// (0x000190b3) scroll_pane_cp023

0x3aa3,	// (0x000190bf) field_cale_ev_pane_ParamLimits

0x3aa3,	// (0x000190bf) field_cale_ev_pane

0x3ac1,	// (0x000190dd) field_cale_ev_content_pane_ParamLimits

0x3ac1,	// (0x000190dd) field_cale_ev_content_pane

0x3acd,	// (0x000190e9) field_cale_ev_pane_g1_ParamLimits

0x3acd,	// (0x000190e9) field_cale_ev_pane_g1

0x3ad9,	// (0x000190f5) field_cale_ev_pane_g2_ParamLimits

0x3ad9,	// (0x000190f5) field_cale_ev_pane_g2

0x3af1,	// (0x0001910d) field_cale_ev_pane_g3_ParamLimits

0x3af1,	// (0x0001910d) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00024d79) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00024d79) field_cale_ev_pane_g

0x3b09,	// (0x00019125) field_cale_ev_pane_t1_ParamLimits

0x3b09,	// (0x00019125) field_cale_ev_pane_t1

0x3b20,	// (0x0001913c) field_cale_ev_content_pane_t1_ParamLimits

0x3b20,	// (0x0001913c) field_cale_ev_content_pane_t1

0x21da,	// (0x000177f6) bg_button_pane_cp01

0x12ba,	// (0x000168d6) listscroll_cale_week_pane_ParamLimits

0x8bf6,	// (0x0001e212) popup_toolbar_window_cp01

0x1454,	// (0x00016a70) listscroll_cale_week_pane_t1_ParamLimits

0x12ba,	// (0x000168d6) listscroll_cale_day_pane_ParamLimits

0x8bf6,	// (0x0001e212) popup_toolbar_window_cp02

0x1454,	// (0x00016a70) listscroll_cale_day_pane_t1_ParamLimits

0x12ba,	// (0x000168d6) main_cale_month_pane_ParamLimits

0xb116,	// (0x00020732) popup_toolbar_window_cp03_ParamLimits

0xb116,	// (0x00020732) popup_toolbar_window_cp03

0xaa8f,	// (0x000200ab) main_image_pane_g2_ParamLimits

0xaa8f,	// (0x000200ab) main_image_pane_g2

0xaa9b,	// (0x000200b7) main_image_pane_g3_ParamLimits

0xaa9b,	// (0x000200b7) main_image_pane_g3

0x0002,

0xf54e,	// (0x00024b6a) main_image_pane_g_ParamLimits

0xf54e,	// (0x00024b6a) main_image_pane_g

0x239d,	// (0x000179b9) main_image_pane_t1_ParamLimits

0xaaa7,	// (0x000200c3) main_image_pane_t2_ParamLimits

0xaaa7,	// (0x000200c3) main_image_pane_t2

0xaab9,	// (0x000200d5) main_image_pane_t3_ParamLimits

0xaab9,	// (0x000200d5) main_image_pane_t3

0xaacb,	// (0x000200e7) main_image_pane_t4_ParamLimits

0xaacb,	// (0x000200e7) main_image_pane_t4

0x0003,

0xf555,	// (0x00024b71) main_image_pane_t_ParamLimits

0xf555,	// (0x00024b71) main_image_pane_t

0xaadd,	// (0x000200f9) popup_image_details_window_cp01

0xaae7,	// (0x00020103) popup_toobar_trans_pane_cp01_ParamLimits

0xaae7,	// (0x00020103) popup_toobar_trans_pane_cp01

0xb093,	// (0x000206af) popup_image_details_window_ParamLimits

0xb093,	// (0x000206af) popup_image_details_window

0x3526,	// (0x00018b42) popup_image_focus_window

0x75c6,	// (0x0001cbe2) camera2_autofocus_pane_ParamLimits

0x75c6,	// (0x0001cbe2) camera2_autofocus_pane

0x0ad5,	// (0x000160f1) bg_popup_sub_pane_cp06

0x3b3e,	// (0x0001915a) popup_image_focus_window_g1

0x3b46,	// (0x00019162) popup_image_focus_window_g2

0x3b4e,	// (0x0001916a) popup_image_focus_window_g3

0x3b56,	// (0x00019172) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00024d80) popup_image_focus_window_g

0x3b5e,	// (0x0001917a) popup_image_focus_window_t1

0x3b6c,	// (0x00019188) popup_image_focus_window_t2

0x3b7c,	// (0x00019198) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00024d89) popup_image_focus_window_t

0x3b8a,	// (0x000191a6) camera2_autofocus_pane_g1

0x0b45,	// (0x00016161) bg_tb_trans_pane_cp01

0x3b98,	// (0x000191b4) popup_image_details_window_g1

0x3bab,	// (0x000191c7) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00024d9b) popup_image_details_window_g

0x3bd4,	// (0x000191f0) popup_image_details_window_t1

0x3be6,	// (0x00019202) popup_image_details_window_t2

0x3bff,	// (0x0001921b) popup_image_details_window_t3

0x3c13,	// (0x0001922f) popup_image_details_window_t4

0x3c2e,	// (0x0001924a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00024da2) popup_image_details_window_t

0x128c,	// (0x000168a8) bg_calc_paper_pane_ParamLimits

0x71fe,	// (0x0001c81a) grid_highlight_pane_cp013

0x7208,	// (0x0001c824) list_calc_pane_ParamLimits

0x721a,	// (0x0001c836) scroll_pane_cp024

0x12ba,	// (0x000168d6) bg_calc_display_pane_ParamLimits

0x7222,	// (0x0001c83e) calc_display_pane_t1_ParamLimits

0x7237,	// (0x0001c853) calc_display_pane_t2_ParamLimits

0x724c,	// (0x0001c868) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000247d2) calc_display_pane_t_ParamLimits

0x72b5,	// (0x0001c8d1) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000247ef) cell_calc_pane_g

0x72be,	// (0x0001c8da) cell_calc_pane_t1

0x133d,	// (0x00016959) grid_highlight_pane_cp02_ParamLimits

0x1353,	// (0x0001696f) toolbar_button_pane_cp01_ParamLimits

0x1353,	// (0x0001696f) toolbar_button_pane_cp01

0x23e2,	// (0x000179fe) temp_image_control_pane_ParamLimits

0x23e2,	// (0x000179fe) temp_image_control_pane

0x0b45,	// (0x00016161) main_mp3_pane

0x3c48,	// (0x00019264) temp_image_control_pane_g1_ParamLimits

0x3c48,	// (0x00019264) temp_image_control_pane_g1

0x3c56,	// (0x00019272) temp_image_control_pane_g2_ParamLimits

0x3c56,	// (0x00019272) temp_image_control_pane_g2

0x3c68,	// (0x00019284) temp_image_control_pane_g3_ParamLimits

0x3c68,	// (0x00019284) temp_image_control_pane_g3

0xb716,	// (0x00020d32) temp_image_control_pane_g4_ParamLimits

0xb716,	// (0x00020d32) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00024dad) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00024dad) temp_image_control_pane_g

0x3c48,	// (0x00019264) main_mp3_pane_g1

0xb727,	// (0x00020d43) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00024db6) main_mp3_pane_g

0x3cab,	// (0x000192c7) main_mp3_pane_t1

0x1535,	// (0x00016b51) main_camera_pane_g8_ParamLimits

0x1535,	// (0x00016b51) main_camera_pane_g8

0x912f,	// (0x0001e74b) main_video_pane_g7_ParamLimits

0x912f,	// (0x0001e74b) main_video_pane_g7

0x770e,	// (0x0001cd2a) main_camera2_pane_t7_ParamLimits

0x770e,	// (0x0001cd2a) main_camera2_pane_t7

0x1723,	// (0x00016d3f) scroll_pane_cp025_ParamLimits

0x1723,	// (0x00016d3f) scroll_pane_cp025

0x1737,	// (0x00016d53) scroll_pane_cp026_ParamLimits

0x1737,	// (0x00016d53) scroll_pane_cp026

0x1746,	// (0x00016d62) wml_content_pane_ParamLimits

0x0ad5,	// (0x000160f1) main_touch_calib_pane

0xb7cb,	// (0x00020de7) main_touch_calib_pane_g1

0xb7d7,	// (0x00020df3) main_touch_calib_pane_g2

0xb7e3,	// (0x00020dff) main_touch_calib_pane_g3

0xb7ef,	// (0x00020e0b) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00024dd4) main_touch_calib_pane_g

0xb7fb,	// (0x00020e17) main_touch_calib_pane_t1

0xb812,	// (0x00020e2e) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00024ddd) main_touch_calib_pane_t

0x1f8a,	// (0x000175a6) mup_progress_pane_cp02

0x1fa9,	// (0x000175c5) navi_pane_g1

0x200b,	// (0x00017627) navi_pane_mp_t3

0x0b45,	// (0x00016161) main_mp3_pane_ParamLimits

0xb154,	// (0x00020770) navi_pane_ParamLimits

0x3c48,	// (0x00019264) main_mp3_pane_g1_ParamLimits

0xb727,	// (0x00020d43) main_mp3_pane_g2_ParamLimits

0xb733,	// (0x00020d4f) main_mp3_pane_g3_ParamLimits

0xb733,	// (0x00020d4f) main_mp3_pane_g3

0xb73f,	// (0x00020d5b) main_mp3_pane_g4_ParamLimits

0xb73f,	// (0x00020d5b) main_mp3_pane_g4

0x3c78,	// (0x00019294) main_mp3_pane_g5_ParamLimits

0x3c78,	// (0x00019294) main_mp3_pane_g5

0x3c86,	// (0x000192a2) main_mp3_pane_g6_ParamLimits

0x3c86,	// (0x000192a2) main_mp3_pane_g6

0x3c93,	// (0x000192af) main_mp3_pane_g7_ParamLimits

0x3c93,	// (0x000192af) main_mp3_pane_g7

0x3c9f,	// (0x000192bb) main_mp3_pane_g8_ParamLimits

0x3c9f,	// (0x000192bb) main_mp3_pane_g8

0xf79a,	// (0x00024db6) main_mp3_pane_g_ParamLimits

0xb74b,	// (0x00020d67) main_mp3_pane_t2

0xb75b,	// (0x00020d77) main_mp3_pane_t3

0x3cb9,	// (0x000192d5) main_mp3_pane_t4

0x3cc7,	// (0x000192e3) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00024dc7) main_mp3_pane_t

0x3cd5,	// (0x000192f1) mup_progress_pane_cp01

0x0af3,	// (0x0001610f) aid_zoom_text_secondary2

0x3a8f,	// (0x000190ab) list_cale_ev2_pane

0x3a97,	// (0x000190b3) scroll_pane_cp023_ParamLimits

0xb867,	// (0x00020e83) field_cale_ev2_pane_ParamLimits

0xb867,	// (0x00020e83) field_cale_ev2_pane

0xb890,	// (0x00020eac) field_cale_ev2_pane_g1_ParamLimits

0xb890,	// (0x00020eac) field_cale_ev2_pane_g1

0xb89c,	// (0x00020eb8) field_cale_ev2_pane_g2_ParamLimits

0xb89c,	// (0x00020eb8) field_cale_ev2_pane_g2

0xb8b4,	// (0x00020ed0) field_cale_ev2_pane_g3_ParamLimits

0xb8b4,	// (0x00020ed0) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00024de8) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00024de8) field_cale_ev2_pane_g

0xb8cc,	// (0x00020ee8) field_cale_ev2_pane_t1_ParamLimits

0xb8cc,	// (0x00020ee8) field_cale_ev2_pane_t1

0xb8e3,	// (0x00020eff) field_cale_ev2_pane_t2_ParamLimits

0xb8e3,	// (0x00020eff) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00024df1) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00024df1) field_cale_ev2_pane_t

0xa96f,	// (0x0001ff8b) main_postcard_pane_g5_ParamLimits

0xa96f,	// (0x0001ff8b) main_postcard_pane_g5

0xa97d,	// (0x0001ff99) main_postcard_pane_g6_ParamLimits

0xa97d,	// (0x0001ff99) main_postcard_pane_g6

0x8f77,	// (0x0001e593) camera2_autofocus_pane_cp_ParamLimits

0x8f77,	// (0x0001e593) camera2_autofocus_pane_cp

0x0b45,	// (0x00016161) main_mup3_pane

0xb918,	// (0x00020f34) main_mup3_pane_g1_ParamLimits

0xb918,	// (0x00020f34) main_mup3_pane_g1

0xb939,	// (0x00020f55) main_mup3_pane_g2_ParamLimits

0xb939,	// (0x00020f55) main_mup3_pane_g2

0xb9b1,	// (0x00020fcd) main_mup3_pane_g3_ParamLimits

0xb9b1,	// (0x00020fcd) main_mup3_pane_g3

0xb9f0,	// (0x0002100c) main_mup3_pane_g4_ParamLimits

0xb9f0,	// (0x0002100c) main_mup3_pane_g4

0xba2f,	// (0x0002104b) main_mup3_pane_g5_ParamLimits

0xba2f,	// (0x0002104b) main_mup3_pane_g5

0xba6e,	// (0x0002108a) main_mup3_pane_g6_ParamLimits

0xba6e,	// (0x0002108a) main_mup3_pane_g6

0x3ce9,	// (0x00019305) main_mup3_pane_g7_ParamLimits

0x3ce9,	// (0x00019305) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00024e01) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00024e01) main_mup3_pane_g

0xbae0,	// (0x000210fc) main_mup3_pane_t1_ParamLimits

0xbae0,	// (0x000210fc) main_mup3_pane_t1

0xbb4b,	// (0x00021167) main_mup3_pane_t2_ParamLimits

0xbb4b,	// (0x00021167) main_mup3_pane_t2

0xbc10,	// (0x0002122c) main_mup3_pane_t4_ParamLimits

0xbc10,	// (0x0002122c) main_mup3_pane_t4

0xbc5e,	// (0x0002127a) main_mup3_pane_t5_ParamLimits

0xbc5e,	// (0x0002127a) main_mup3_pane_t5

0xbd06,	// (0x00021322) main_mup3_pane_t6_ParamLimits

0xbd06,	// (0x00021322) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00024e12) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00024e12) main_mup3_pane_t

0xbdae,	// (0x000213ca) mup3_progress_pane_ParamLimits

0xbdae,	// (0x000213ca) mup3_progress_pane

0xbe19,	// (0x00021435) popup_mup3_control_window_ParamLimits

0xbe19,	// (0x00021435) popup_mup3_control_window

0x3cf7,	// (0x00019313) popup_mup3_text_window

0xbe32,	// (0x0002144e) mup3_progress_pane_t1

0xbe49,	// (0x00021465) mup3_progress_pane_t2

0x3cff,	// (0x0001931b) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00024e1f) mup3_progress_pane_t

0x3d16,	// (0x00019332) mup_progress_pane_cp03

0x0ad5,	// (0x000160f1) bg_tb_trans_pane_cp04

0xbe60,	// (0x0002147c) mup3_volume_pane

0xbe68,	// (0x00021484) popup_mup3_control_window_g1

0xbe71,	// (0x0002148d) mup3_volume_pane_g1

0xbe7a,	// (0x00021496) mup3_volume_pane_g2

0xbe83,	// (0x0002149f) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00024e26) mup3_volume_pane_g

0x0ad5,	// (0x000160f1) bg_tb_trans_pane_cp03

0x3d40,	// (0x0001935c) popup_mup3_text_window_g1

0x3d48,	// (0x00019364) popup_mup3_text_window_t1

0x1314,	// (0x00016930) list_calc_item_pane_g1_ParamLimits

0x371b,	// (0x00018d37) mup_volume_pane_cp_g1

0xb829,	// (0x00020e45) main_touch_calib_pane_t3

0xb83d,	// (0x00020e59) main_touch_calib_pane_t4

0xb851,	// (0x00020e6d) main_touch_calib_pane_t5

0x0adf,	// (0x000160fb) aid_cell_size_toolbar2

0x0ae7,	// (0x00016103) aid_popup3_width_pane

0x0af3,	// (0x0001610f) aid_zoom_text_msg_primary

0x7459,	// (0x0001ca75) vorec_t7

0x12d8,	// (0x000168f4) bg_calc_paper_pane_g1_ParamLimits

0x12f0,	// (0x0001690c) bg_calc_paper_pane_g2_ParamLimits

0x12e4,	// (0x00016900) bg_calc_paper_pane_g3_ParamLimits

0x1308,	// (0x00016924) bg_calc_paper_pane_g4_ParamLimits

0x12fc,	// (0x00016918) bg_calc_paper_pane_g5_ParamLimits

0x8aab,	// (0x0001e0c7) bg_calc_paper_pane_g6_ParamLimits

0x8abc,	// (0x0001e0d8) bg_calc_paper_pane_g7_ParamLimits

0x8acd,	// (0x0001e0e9) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x000247d9) bg_calc_paper_pane_g_ParamLimits

0x8ade,	// (0x0001e0fa) calc_bg_paper_pane_g9_ParamLimits

0x905e,	// (0x0001e67a) image_qvga_pane_ParamLimits

0x905e,	// (0x0001e67a) image_qvga_pane

0x11c1,	// (0x000167dd) bg_popup_sub_pane_cp04_ParamLimits

0x2319,	// (0x00017935) popup_mup_playback_window_g1_ParamLimits

0x2325,	// (0x00017941) popup_mup_playback_window_t1_ParamLimits

0x233a,	// (0x00017956) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00024b65) popup_mup_playback_window_t_ParamLimits

0xb3a0,	// (0x000209bc) main_mup2_pane_g3_ParamLimits

0xb3a0,	// (0x000209bc) main_mup2_pane_g3

0x9306,	// (0x0001e922) popup_toolbar_window_cp04

0x271c,	// (0x00017d38) popup_call2_audio_second_window_g3_ParamLimits

0x271c,	// (0x00017d38) popup_call2_audio_second_window_g3

0x2b26,	// (0x00018142) popup_call2_audio_first_window_g4_ParamLimits

0x2b26,	// (0x00018142) popup_call2_audio_first_window_g4

0x31a5,	// (0x000187c1) popup_call2_audio_in_window_g4_ParamLimits

0x31a5,	// (0x000187c1) popup_call2_audio_in_window_g4

0xaa82,	// (0x0002009e) aid_area_sk_bg_cut_ParamLimits

0xaa82,	// (0x0002009e) aid_area_sk_bg_cut

0x234f,	// (0x0001796b) aid_area_sk_bg_cut_2_ParamLimits

0x234f,	// (0x0001796b) aid_area_sk_bg_cut_2

0xb6bc,	// (0x00020cd8) aid_placing_details_win

0xb6c4,	// (0x00020ce0) aid_placing_details_win_2

0x3b8a,	// (0x000191a6) camera2_autofocus_pane_g1_ParamLimits

0x879d,	// (0x0001ddb9) popup_fixed_preview_cale_window_ParamLimits

0x879d,	// (0x0001ddb9) popup_fixed_preview_cale_window

0x2075,	// (0x00017691) navi_slider_pane_g3

0x206c,	// (0x00017688) navi_slider_pane_g4

0x2063,	// (0x0001767f) navi_slider_pane_g5

0x2075,	// (0x00017691) navi_slider_pane_g6

0x7535,	// (0x0001cb51) navi_slider_pane_g7

0x219f,	// (0x000177bb) mup_scale_pane_g3

0x21a8,	// (0x000177c4) mup_scale_pane_g4

0x21b1,	// (0x000177cd) mup_scale_pane_g5

0xa7fb,	// (0x0001fe17) mup_scale_pane_g6

0xa804,	// (0x0001fe20) mup_scale_pane_g7

0x2075,	// (0x00017691) cams2_slider_pane_g3

0x37d0,	// (0x00018dec) cams2_slider_pane_g4

0x7880,	// (0x0001ce9c) cams2_slider_pane_g5

0x2075,	// (0x00017691) cams2_slider_pane_g6

0x7888,	// (0x0001cea4) cams2_slider_pane_g7

0x3a0c,	// (0x00019028) camera2_autofocus_pane_cp_g1

0x3d56,	// (0x00019372) bg_popup_preview_window_pane_cp02_ParamLimits

0x3d56,	// (0x00019372) bg_popup_preview_window_pane_cp02

0x3d62,	// (0x0001937e) list_fp_cale_pane_ParamLimits

0x3d62,	// (0x0001937e) list_fp_cale_pane

0x3d6e,	// (0x0001938a) popup_fixed_preview_cale_window_t1_ParamLimits

0x3d6e,	// (0x0001938a) popup_fixed_preview_cale_window_t1

0xbe8c,	// (0x000214a8) popup_fixed_preview_cale_window_t2_ParamLimits

0xbe8c,	// (0x000214a8) popup_fixed_preview_cale_window_t2

0xbea1,	// (0x000214bd) popup_fixed_preview_cale_window_t3_ParamLimits

0xbea1,	// (0x000214bd) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00024e2d) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00024e2d) popup_fixed_preview_cale_window_t

0xbeb6,	// (0x000214d2) list_single_fp_cale_pane_ParamLimits

0xbeb6,	// (0x000214d2) list_single_fp_cale_pane

0x3d8c,	// (0x000193a8) list_single_fp_cale_pane_g1_ParamLimits

0x3d8c,	// (0x000193a8) list_single_fp_cale_pane_g1

0x3d98,	// (0x000193b4) list_single_fp_cale_pane_g2_ParamLimits

0x3d98,	// (0x000193b4) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00024e34) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00024e34) list_single_fp_cale_pane_g

0x3db1,	// (0x000193cd) list_single_fp_cale_pane_t1_ParamLimits

0x3db1,	// (0x000193cd) list_single_fp_cale_pane_t1

0x3dc3,	// (0x000193df) list_single_fp_cale_pane_t2_ParamLimits

0x3dc3,	// (0x000193df) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00024e3b) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00024e3b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0ad5,	// (0x000160f1) main_dialer_pane

0xbec8,	// (0x000214e4) aid_cell_size_keypad

0xbed2,	// (0x000214ee) dialer_ne_pane

0xbedc,	// (0x000214f8) grid_dialer_command_1_pane

0xbee4,	// (0x00021500) grid_dialer_command_2_pane

0xbeec,	// (0x00021508) grid_dialer_keypad_pane

0xbefe,	// (0x0002151a) bg_popup_call_pane_cp06_ParamLimits

0xbefe,	// (0x0002151a) bg_popup_call_pane_cp06

0xbf0a,	// (0x00021526) dialer_ne_clear_pane_ParamLimits

0xbf0a,	// (0x00021526) dialer_ne_clear_pane

0x3df6,	// (0x00019412) dialer_ne_pane_g1

0x3dfe,	// (0x0001941a) dialer_ne_pane_t1_ParamLimits

0x3dfe,	// (0x0001941a) dialer_ne_pane_t1

0xbf16,	// (0x00021532) dialer_ne_pane_t2_ParamLimits

0xbf16,	// (0x00021532) dialer_ne_pane_t2

0xbf33,	// (0x0002154f) dialer_ne_pane_t3_ParamLimits

0xbf33,	// (0x0002154f) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00024e40) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00024e40) dialer_ne_pane_t

0xbf57,	// (0x00021573) dialer_ne_pane_t3_copy1_ParamLimits

0xbf57,	// (0x00021573) dialer_ne_pane_t3_copy1

0xbf7b,	// (0x00021597) cell_dialer_keypad_pane_ParamLimits

0xbf7b,	// (0x00021597) cell_dialer_keypad_pane

0xbf92,	// (0x000215ae) cell_dialer_command_1_pane_ParamLimits

0xbf92,	// (0x000215ae) cell_dialer_command_1_pane

0xbfa8,	// (0x000215c4) cell_dialer_command_2_pane_ParamLimits

0xbfa8,	// (0x000215c4) cell_dialer_command_2_pane

0x3e10,	// (0x0001942c) bg_button_pane_cp02_ParamLimits

0x3e10,	// (0x0001942c) bg_button_pane_cp02

0xbfb7,	// (0x000215d3) cell_dialer_keypad_pane_g1_ParamLimits

0xbfb7,	// (0x000215d3) cell_dialer_keypad_pane_g1

0x3e10,	// (0x0001942c) bg_button_pane_cp03_ParamLimits

0x3e10,	// (0x0001942c) bg_button_pane_cp03

0xbfcc,	// (0x000215e8) cell_dialer_command_1_pane_g1_ParamLimits

0xbfcc,	// (0x000215e8) cell_dialer_command_1_pane_g1

0x3e1c,	// (0x00019438) bg_button_pane_cp04

0xbfe0,	// (0x000215fc) cell_dialer_command_2_pane_g1

0x2049,	// (0x00017665) bg_button_pane_cp06

0x3e24,	// (0x00019440) dialer_ne_clear_pane_g1

0xa30f,	// (0x0001f92b) navi_pane_g2

0xa33d,	// (0x0001f959) navi_pane_g3

0x0002,

0xf44c,	// (0x00024a68) navi_pane_g

0xa368,	// (0x0001f984) navi_pane_mv_g2

0xa38f,	// (0x0001f9ab) navi_pane_mv_g5

0xa397,	// (0x0001f9b3) navi_pane_mv_t1

0x12ba,	// (0x000168d6) main_clock2_pane

0xc00f,	// (0x0002162b) main_clock2_list_pane_ParamLimits

0xc00f,	// (0x0002162b) main_clock2_list_pane

0xc037,	// (0x00021653) main_clock2_pane_t1_ParamLimits

0xc037,	// (0x00021653) main_clock2_pane_t1

0xc065,	// (0x00021681) main_clock2_pane_t2_ParamLimits

0xc065,	// (0x00021681) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00024e47) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00024e47) main_clock2_pane_t

0xc0cc,	// (0x000216e8) popup_clock_analogue_window_cp03_ParamLimits

0xc0cc,	// (0x000216e8) popup_clock_analogue_window_cp03

0xc0ea,	// (0x00021706) popup_clock_digital_window_cp02_ParamLimits

0xc0ea,	// (0x00021706) popup_clock_digital_window_cp02

0xc157,	// (0x00021773) main_clock2_list_single_pane_ParamLimits

0xc157,	// (0x00021773) main_clock2_list_single_pane

0x2049,	// (0x00017665) list_highlight_pane_cp05

0x3e2c,	// (0x00019448) main_clock2_list_single_pane_t1

0x9306,	// (0x0001e922) popup_toolbar_window_cp04_ParamLimits

0xb6e6,	// (0x00020d02) camera2_autofocus_pane_g2_ParamLimits

0xb6e6,	// (0x00020d02) camera2_autofocus_pane_g2

0xb6f2,	// (0x00020d0e) camera2_autofocus_pane_g3_ParamLimits

0xb6f2,	// (0x00020d0e) camera2_autofocus_pane_g3

0xb6fe,	// (0x00020d1a) camera2_autofocus_pane_g4_ParamLimits

0xb6fe,	// (0x00020d1a) camera2_autofocus_pane_g4

0xb70a,	// (0x00020d26) camera2_autofocus_pane_g5_ParamLimits

0xb70a,	// (0x00020d26) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00024d90) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00024d90) camera2_autofocus_pane_g

0xb8f8,	// (0x00020f14) camera2_autofocus_pane_cp_g2

0xb900,	// (0x00020f1c) camera2_autofocus_pane_cp_g3

0xb908,	// (0x00020f24) camera2_autofocus_pane_cp_g4

0xb910,	// (0x00020f2c) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00024df6) camera2_autofocus_pane_cp_g

0xbef6,	// (0x00021512) popup_dialer_spcha_window

0x0ad5,	// (0x000160f1) bg_popup_sub_pane_cp07

0x3e3a,	// (0x00019456) list_spcha_pane

0x3e42,	// (0x0001945e) list_single_spcha_pane_ParamLimits

0x3e42,	// (0x0001945e) list_single_spcha_pane

0x0ad5,	// (0x000160f1) list_highlight_pane_cp06

0x3e53,	// (0x0001946f) list_single_spcha_pane_t1

0x2f4f,	// (0x0001856b) popup_call2_audio_out_window_g4_ParamLimits

0x2f4f,	// (0x0001856b) popup_call2_audio_out_window_g4

0x0ad5,	// (0x000160f1) main_imed2_pane

0x352e,	// (0x00018b4a) popup_imed_adjust2_window

0xb0a1,	// (0x000206bd) popup_imed_trans_window_ParamLimits

0xb0a1,	// (0x000206bd) popup_imed_trans_window

0x384a,	// (0x00018e66) popup_blid_sat_info2_window_t1

0x3858,	// (0x00018e74) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00024d25) popup_blid_sat_info2_window_t

0xc189,	// (0x000217a5) aid_size_cell_colour_35

0xc1a3,	// (0x000217bf) aid_size_cell_colour_112

0xc1ba,	// (0x000217d6) aid_size_cell_effect

0x0b45,	// (0x00016161) bg_tb_trans_pane_cp02

0x3d34,	// (0x00019350) heading_imed_pane

0xc1d4,	// (0x000217f0) listscroll_imed_pane

0x3e61,	// (0x0001947d) heading_imed_pane_g1

0x3e69,	// (0x00019485) heading_imed_pane_t1

0x3e77,	// (0x00019493) grid_imed_colour_35_pane_ParamLimits

0x3e77,	// (0x00019493) grid_imed_colour_35_pane

0xc1e0,	// (0x000217fc) grid_imed_effect_pane

0x3e8e,	// (0x000194aa) list_imed_aspect_pane

0xc1f0,	// (0x0002180c) scroll_pane_cp027_ParamLimits

0xc1f0,	// (0x0002180c) scroll_pane_cp027

0xc1fc,	// (0x00021818) cell_imed_effect_pane_ParamLimits

0xc1fc,	// (0x00021818) cell_imed_effect_pane

0x3e96,	// (0x000194b2) cell_imed_colour_pane_ParamLimits

0x3e96,	// (0x000194b2) cell_imed_colour_pane

0x3ed8,	// (0x000194f4) cell_imed_colour_pane_g1_ParamLimits

0x3ed8,	// (0x000194f4) cell_imed_colour_pane_g1

0x3ee9,	// (0x00019505) hgihlgiht_grid_pane_cp016_ParamLimits

0x3ee9,	// (0x00019505) hgihlgiht_grid_pane_cp016

0xc214,	// (0x00021830) cell_imed_effect_pane_g1

0xc21c,	// (0x00021838) grid_highlight_pane_cp017

0x3efa,	// (0x00019516) list_imed_single_pane_ParamLimits

0x3efa,	// (0x00019516) list_imed_single_pane

0x0ad5,	// (0x000160f1) list_highlight_pane_cp07

0x3f0f,	// (0x0001952b) list_imed_aspect_pane_comp1_t1

0x3506,	// (0x00018b22) bg_tb_trans_pane_cp05

0x3f31,	// (0x0001954d) popup_imed_adjust2_window_g1

0x3f58,	// (0x00019574) popup_imed_adjust2_window_t1

0x3f70,	// (0x0001958c) slider_imed_adjust_pane

0x3f84,	// (0x000195a0) slider_imed_adjust_pane_g1

0x3f94,	// (0x000195b0) slider_imed_adjust_pane_g2

0x3fa4,	// (0x000195c0) slider_imed_adjust_pane_g3

0x3fb5,	// (0x000195d1) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00024e64) slider_imed_adjust_pane_g

0xc225,	// (0x00021841) aid_size_cell_clipart2

0xc231,	// (0x0002184d) grid_imed_clipart_pane

0x3fc6,	// (0x000195e2) scroll_pane_cp031

0xc23b,	// (0x00021857) cell_imed_clipart_pane_ParamLimits

0xc23b,	// (0x00021857) cell_imed_clipart_pane

0xc25d,	// (0x00021879) cell_imed_clipart_pane_g1

0x0ad5,	// (0x000160f1) grid_highlight_pane_cp014

0xc01b,	// (0x00021637) main_clock2_pane_g1_ParamLimits

0xc01b,	// (0x00021637) main_clock2_pane_g1

0xc102,	// (0x0002171e) aid_call2_pane_cp10

0xc114,	// (0x00021730) aid_call_pane_cp10

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g1

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g2

0xc126,	// (0x00021742) popup_clock_analogue_window_cp10_g3

0xc126,	// (0x00021742) popup_clock_analogue_window_cp10_g4

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00024e52) popup_clock_analogue_window_cp10_g

0xc138,	// (0x00021754) popup_clock_analogue_window_cp10_t1

0x7891,	// (0x0001cead) clock_digital_number_pane_cp10_ParamLimits

0x7891,	// (0x0001cead) clock_digital_number_pane_cp10

0x78a9,	// (0x0001cec5) clock_digital_number_pane_cp11_ParamLimits

0x78a9,	// (0x0001cec5) clock_digital_number_pane_cp11

0x78c1,	// (0x0001cedd) clock_digital_number_pane_cp12_ParamLimits

0x78c1,	// (0x0001cedd) clock_digital_number_pane_cp12

0x78d9,	// (0x0001cef5) clock_digital_number_pane_cp13_ParamLimits

0x78d9,	// (0x0001cef5) clock_digital_number_pane_cp13

0x78f1,	// (0x0001cf0d) clock_digital_separator_pane_cp10_ParamLimits

0x78f1,	// (0x0001cf0d) clock_digital_separator_pane_cp10

0xc169,	// (0x00021785) popup_clock_digital_window_cp02_t1_ParamLimits

0xc169,	// (0x00021785) popup_clock_digital_window_cp02_t1

0x11b9,	// (0x000167d5) clock_digital_number_pane_cp10_g1

0x11b9,	// (0x000167d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00024e6d) clock_digital_number_pane_cp10_g

0x11b9,	// (0x000167d5) clock_digital_separator_pane_cp10_g1

0x11b9,	// (0x000167d5) clock_digital_separator_pane_g2_cp10

0x2019,	// (0x00017635) navi_pane_vded_g4

0x2022,	// (0x0001763e) navi_pane_vded_g5

0x202b,	// (0x00017647) navi_pane_vded_t1

0x0ad5,	// (0x000160f1) main_vded_pane

0xc266,	// (0x00021882) main_vded_pane_g1

0xc272,	// (0x0002188e) main_vded_pane_g2

0xc27c,	// (0x00021898) main_vded_pane_g3

0x0002,

0xf856,	// (0x00024e72) main_vded_pane_g

0xc286,	// (0x000218a2) main_vded_pane_t1

0xc294,	// (0x000218b0) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00024e79) main_vded_pane_t

0xc2a2,	// (0x000218be) vded_slider_pane

0xc2ac,	// (0x000218c8) vded_video_pane

0x3fce,	// (0x000195ea) vded_video_pane_g1

0xc2b6,	// (0x000218d2) vded_video_pane_g2

0x3a0c,	// (0x00019028) vded_video_pane_g3

0x0002,

0xf862,	// (0x00024e7e) vded_video_pane_g

0x3fd8,	// (0x000195f4) vded_slider_pane_g1

0x371b,	// (0x00018d37) vded_slider_pane_g2

0x3fe1,	// (0x000195fd) vded_slider_pane_g3

0x3fea,	// (0x00019606) vded_slider_pane_g4

0x3ff3,	// (0x0001960f) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00024e85) vded_slider_pane_g

0xbe0b,	// (0x00021427) mup3_rocker_pane_ParamLimits

0xbe0b,	// (0x00021427) mup3_rocker_pane

0xc2bf,	// (0x000218db) mup3_control_keys_pane_g1

0xc2c7,	// (0x000218e3) mup3_control_keys_pane_g2

0xc2cf,	// (0x000218eb) mup3_control_keys_pane_g3

0xc2d7,	// (0x000218f3) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00024e90) mup3_control_keys_pane_g

0x87bb,	// (0x0001ddd7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x87bb,	// (0x0001ddd7) popup_toolbar2_fixed_window_cp01

0xbe25,	// (0x00021441) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbe25,	// (0x00021441) popup_toolbar2_fixed_window_cp02

0x288e,	// (0x00017eaa) popup_call2_audio_second_window_t4_ParamLimits

0x288e,	// (0x00017eaa) popup_call2_audio_second_window_t4

0x2dbc,	// (0x000183d8) popup_call2_audio_first_window_t6_ParamLimits

0x2dbc,	// (0x000183d8) popup_call2_audio_first_window_t6

0x3052,	// (0x0001866e) popup_call2_audio_out_window_t6_ParamLimits

0x3052,	// (0x0001866e) popup_call2_audio_out_window_t6

0x0ad5,	// (0x000160f1) main_vitu_pane

0xc2e7,	// (0x00021903) aid_size_cell_itu_ParamLimits

0xc2e7,	// (0x00021903) aid_size_cell_itu

0x3d26,	// (0x00019342) bg_popup_window_pane_cp08_ParamLimits

0x3d26,	// (0x00019342) bg_popup_window_pane_cp08

0xc2f5,	// (0x00021911) field_vitu_entry_pane_ParamLimits

0xc2f5,	// (0x00021911) field_vitu_entry_pane

0xc304,	// (0x00021920) grid_vitu_function_pane_ParamLimits

0xc304,	// (0x00021920) grid_vitu_function_pane

0xc314,	// (0x00021930) grid_vitu_itu_pane_ParamLimits

0xc314,	// (0x00021930) grid_vitu_itu_pane

0xc324,	// (0x00021940) cell_vitu_itu_pane_ParamLimits

0xc324,	// (0x00021940) cell_vitu_itu_pane

0xc339,	// (0x00021955) cell_vitu_function_pane_ParamLimits

0xc339,	// (0x00021955) cell_vitu_function_pane

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp08_ParamLimits

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp08

0xc34b,	// (0x00021967) field_vitu_entry_pane_t1_ParamLimits

0xc34b,	// (0x00021967) field_vitu_entry_pane_t1

0x4014,	// (0x00019630) field_vitu_entry_pane_t2_ParamLimits

0x4014,	// (0x00019630) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00024e9e) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00024e9e) field_vitu_entry_pane_t

0x4031,	// (0x0001964d) bg_button_pane_cp05_ParamLimits

0x4031,	// (0x0001964d) bg_button_pane_cp05

0xc366,	// (0x00021982) cell_vitu_itu_pane_g1

0xc37e,	// (0x0002199a) cell_vitu_itu_pane_t1_ParamLimits

0xc37e,	// (0x0002199a) cell_vitu_itu_pane_t1

0xc390,	// (0x000219ac) cell_vitu_itu_pane_t2_ParamLimits

0xc390,	// (0x000219ac) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00024ea3) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00024ea3) cell_vitu_itu_pane_t

0x403f,	// (0x0001965b) bg_button_pane_cp07

0xc3c5,	// (0x000219e1) cell_vitu_function_pane_g1

0x71f6,	// (0x0001c812) main_calc_pane_g1

0x85be,	// (0x0001dbda) aid_visual_content_pane

0x0ad5,	// (0x000160f1) main_vradio_pane

0xc3ce,	// (0x000219ea) main_vradio_pane_g1_ParamLimits

0xc3ce,	// (0x000219ea) main_vradio_pane_g1

0x4049,	// (0x00019665) main_vradio_pane_g2_ParamLimits

0x4049,	// (0x00019665) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00024eaa) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00024eaa) main_vradio_pane_g

0xc3de,	// (0x000219fa) main_vradio_pane_t1_ParamLimits

0xc3de,	// (0x000219fa) main_vradio_pane_t1

0xc3f0,	// (0x00021a0c) main_vradio_pane_t2_ParamLimits

0xc3f0,	// (0x00021a0c) main_vradio_pane_t2

0x4056,	// (0x00019672) main_vradio_pane_t3_ParamLimits

0x4056,	// (0x00019672) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00024eaf) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00024eaf) main_vradio_pane_t

0xc402,	// (0x00021a1e) vradio_rocker_control_pane_ParamLimits

0xc402,	// (0x00021a1e) vradio_rocker_control_pane

0xc40e,	// (0x00021a2a) vradio_station_info_pane_ParamLimits

0xc40e,	// (0x00021a2a) vradio_station_info_pane

0x406a,	// (0x00019686) vradio_frequency_info_pane_ParamLimits

0x406a,	// (0x00019686) vradio_frequency_info_pane

0x3a0c,	// (0x00019028) vradio_station_info_pane_g1

0x4079,	// (0x00019695) vradio_station_info_pane_t1_ParamLimits

0x4079,	// (0x00019695) vradio_station_info_pane_t1

0x409b,	// (0x000196b7) vradio_station_info_pane_t2_ParamLimits

0x409b,	// (0x000196b7) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00024eb6) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00024eb6) vradio_station_info_pane_t

0x40ad,	// (0x000196c9) vradio_tuning_pane

0x40b5,	// (0x000196d1) vradio_rocker_control_pane_g1

0x40bd,	// (0x000196d9) vradio_rocker_control_pane_g2

0x40c5,	// (0x000196e1) vradio_rocker_control_pane_g3

0x40cd,	// (0x000196e9) vradio_rocker_control_pane_g4

0x40d5,	// (0x000196f1) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00024ebb) vradio_rocker_control_pane_g

0xc41d,	// (0x00021a39) vradio_frequency_info_pane_g1

0x40dd,	// (0x000196f9) vradio_frequency_info_pane_t1_ParamLimits

0x40dd,	// (0x000196f9) vradio_frequency_info_pane_t1

0xc427,	// (0x00021a43) vradio_tuning_pane_g1

0xc430,	// (0x00021a4c) vradio_tuning_pane_t1

0x0b03,	// (0x0001611f) area_side_right_pane_ParamLimits

0x0b03,	// (0x0001611f) area_side_right_pane

0x34cd,	// (0x00018ae9) status_small_pane_g1

0x34d5,	// (0x00018af1) status_small_pane_g2

0x34de,	// (0x00018afa) status_small_pane_g3

0x34e7,	// (0x00018b03) status_small_pane_g4

0x0003,

0xf65f,	// (0x00024c7b) status_small_pane_g

0x34f0,	// (0x00018b0c) status_small_pane_t1

0x0ad5,	// (0x000160f1) main_video3_pane

0x40f1,	// (0x0001970d) cams_zoom_vslider_pane

0x40f9,	// (0x00019715) image3_wide_pane_ParamLimits

0x40f9,	// (0x00019715) image3_wide_pane

0x4113,	// (0x0001972f) image3_wide_small_pane

0x411f,	// (0x0001973b) main_video3_pane_g1_ParamLimits

0x411f,	// (0x0001973b) main_video3_pane_g1

0x413b,	// (0x00019757) main_video3_pane_g2_ParamLimits

0x413b,	// (0x00019757) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00024ec6) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00024ec6) main_video3_pane_g

0x4157,	// (0x00019773) main_video3_pane_t1_ParamLimits

0x4157,	// (0x00019773) main_video3_pane_t1

0x4182,	// (0x0001979e) main_video3_pane_t2_ParamLimits

0x4182,	// (0x0001979e) main_video3_pane_t2

0x41ad,	// (0x000197c9) main_video3_pane_t3_ParamLimits

0x41ad,	// (0x000197c9) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00024ecb) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00024ecb) main_video3_pane_t

0x41da,	// (0x000197f6) cams_zoom_vslider_pane_g1

0x41e3,	// (0x000197ff) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00024ed2) cams_zoom_vslider_pane_g

0x41eb,	// (0x00019807) small_slider_vertical_pane

0x3a0c,	// (0x00019028) small_slider_vertical_pane_g1

0x3a0c,	// (0x00019028) small_slider_vertical_pane_g2

0x41f3,	// (0x0001980f) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00024ed7) small_slider_vertical_pane_g

0x0ad5,	// (0x000160f1) main_hwr_training_pane

0x41fc,	// (0x00019818) hwr_training_instruct_pane_ParamLimits

0x41fc,	// (0x00019818) hwr_training_instruct_pane

0xc43f,	// (0x00021a5b) hwr_training_navi_pane_ParamLimits

0xc43f,	// (0x00021a5b) hwr_training_navi_pane

0xc459,	// (0x00021a75) hwr_training_write_pane_ParamLimits

0xc459,	// (0x00021a75) hwr_training_write_pane

0x0ad5,	// (0x000160f1) bg_frame_shadow_pane

0x4233,	// (0x0001984f) hwr_training_write_pane_g1

0x423b,	// (0x00019857) hwr_training_write_pane_g2

0x4243,	// (0x0001985f) hwr_training_write_pane_g3

0x424b,	// (0x00019867) hwr_training_write_pane_g4

0x4253,	// (0x0001986f) hwr_training_write_pane_g5

0x425b,	// (0x00019877) hwr_training_write_pane_g6

0x4263,	// (0x0001987f) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00024ede) hwr_training_write_pane_g

0x7909,	// (0x0001cf25) hwr_training_navi_pane_g1_ParamLimits

0x7909,	// (0x0001cf25) hwr_training_navi_pane_g1

0x791b,	// (0x0001cf37) hwr_training_navi_pane_g2_ParamLimits

0x791b,	// (0x0001cf37) hwr_training_navi_pane_g2

0x792d,	// (0x0001cf49) hwr_training_navi_pane_g3_ParamLimits

0x792d,	// (0x0001cf49) hwr_training_navi_pane_g3

0x793d,	// (0x0001cf59) hwr_training_navi_pane_g4_ParamLimits

0x793d,	// (0x0001cf59) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00024eed) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00024eed) hwr_training_navi_pane_g

0x7957,	// (0x0001cf73) hwr_training_navi_pane_t1

0xc491,	// (0x00021aad) list_single_hwr_training_instruct_pane_ParamLimits

0xc491,	// (0x00021aad) list_single_hwr_training_instruct_pane

0x42ba,	// (0x000198d6) list_single_hwr_training_instruct_pane_t1

0x394c,	// (0x00018f68) bg_frame_shadow_pane_g1

0x42c9,	// (0x000198e5) bg_frame_shadow_pane_g2

0x42d1,	// (0x000198ed) bg_frame_shadow_pane_g3

0x42d9,	// (0x000198f5) bg_frame_shadow_pane_g4

0x42e1,	// (0x000198fd) bg_frame_shadow_pane_g5

0x42e9,	// (0x00019905) bg_frame_shadow_pane_g6

0x42f1,	// (0x0001990d) bg_frame_shadow_pane_g7

0x1397,	// (0x000169b3) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00024ef8) bg_frame_shadow_pane_g

0x0ad5,	// (0x000160f1) main_video_tele_dialer_pane

0x7965,	// (0x0001cf81) aid_size_cell_video_keypad_ParamLimits

0x7965,	// (0x0001cf81) aid_size_cell_video_keypad

0x7975,	// (0x0001cf91) grid_video_dialer_keypad_pane_ParamLimits

0x7975,	// (0x0001cf91) grid_video_dialer_keypad_pane

0x79a9,	// (0x0001cfc5) video_down_pane_cp_ParamLimits

0x79a9,	// (0x0001cfc5) video_down_pane_cp

0x79b7,	// (0x0001cfd3) cell_video_dialer_keypad_pane_ParamLimits

0x79b7,	// (0x0001cfd3) cell_video_dialer_keypad_pane

0x42f9,	// (0x00019915) bg_button_pane_cp08_ParamLimits

0x42f9,	// (0x00019915) bg_button_pane_cp08

0xc4d2,	// (0x00021aee) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc4d2,	// (0x00021aee) cell_video_dialer_keypad_pane_g1

0xbdff,	// (0x0002141b) mup3_rocker2_pane_ParamLimits

0xbdff,	// (0x0002141b) mup3_rocker2_pane

0x3a0c,	// (0x00019028) mup3_rocker2_pane_g1

0xb02b,	// (0x00020647) main_dialer2_pane

0x0ad5,	// (0x000160f1) main_mp4_pane

0x79d4,	// (0x0001cff0) main_mp4_pane_g1_ParamLimits

0x79d4,	// (0x0001cff0) main_mp4_pane_g1

0x79e2,	// (0x0001cffe) main_mp4_pane_g2_ParamLimits

0x79e2,	// (0x0001cffe) main_mp4_pane_g2

0x79f0,	// (0x0001d00c) main_mp4_pane_g3_ParamLimits

0x79f0,	// (0x0001d00c) main_mp4_pane_g3

0x7a35,	// (0x0001d051) main_mp4_pane_g4_ParamLimits

0x7a35,	// (0x0001d051) main_mp4_pane_g4

0x7a4f,	// (0x0001d06b) main_mp4_pane_g5_ParamLimits

0x7a4f,	// (0x0001d06b) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00024f18) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00024f18) main_mp4_pane_g

0x7a83,	// (0x0001d09f) main_mp4_pane_t1_ParamLimits

0x7a83,	// (0x0001d09f) main_mp4_pane_t1

0x7adf,	// (0x0001d0fb) main_mp4_pane_t2_ParamLimits

0x7adf,	// (0x0001d0fb) main_mp4_pane_t2

0x4417,	// (0x00019a33) main_mp4_pane_t3_ParamLimits

0x4417,	// (0x00019a33) main_mp4_pane_t3

0x7b31,	// (0x0001d14d) main_mp4_pane_t4_ParamLimits

0x7b31,	// (0x0001d14d) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00024f25) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00024f25) main_mp4_pane_t

0x7b75,	// (0x0001d191) mp4_progress_pane_ParamLimits

0x7b75,	// (0x0001d191) mp4_progress_pane

0x7bbf,	// (0x0001d1db) mp4_rocker_pane_ParamLimits

0x7bbf,	// (0x0001d1db) mp4_rocker_pane

0x44ed,	// (0x00019b09) mp4_progress_pane_t1

0x4506,	// (0x00019b22) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00024f2e) mp4_progress_pane_t

0x451f,	// (0x00019b3b) mup_progress_pane_cp04

0x4f62,	// (0x0001a57e) mp4_rocker_pane_g1

0x7bdf,	// (0x0001d1fb) aid_cell_size_keypad2_ParamLimits

0x7bdf,	// (0x0001d1fb) aid_cell_size_keypad2

0x7bef,	// (0x0001d20b) dialer2_ne_pane_ParamLimits

0x7bef,	// (0x0001d20b) dialer2_ne_pane

0x7bfd,	// (0x0001d219) grid_dialer2_keypad_pane_ParamLimits

0x7bfd,	// (0x0001d219) grid_dialer2_keypad_pane

0x4fcb,	// (0x0001a5e7) bg_popup_call_pane_cp07_ParamLimits

0x4fcb,	// (0x0001a5e7) bg_popup_call_pane_cp07

0xc509,	// (0x00021b25) dialer2_ne_pane_t1_ParamLimits

0xc509,	// (0x00021b25) dialer2_ne_pane_t1

0x7c0d,	// (0x0001d229) cell_dialer2_keypad_pane_ParamLimits

0x7c0d,	// (0x0001d229) cell_dialer2_keypad_pane

0x453d,	// (0x00019b59) bg_button_pane_pane_cp04_ParamLimits

0x453d,	// (0x00019b59) bg_button_pane_pane_cp04

0xc52e,	// (0x00021b4a) cell_dialer2_keypad_pane_g1_ParamLimits

0xc52e,	// (0x00021b4a) cell_dialer2_keypad_pane_g1

0x9231,	// (0x0001e84d) aid_placing_vt_set_content_ParamLimits

0x9231,	// (0x0001e84d) aid_placing_vt_set_content

0x924f,	// (0x0001e86b) aid_placing_vt_set_title_ParamLimits

0x924f,	// (0x0001e86b) aid_placing_vt_set_title

0x0ad5,	// (0x000160f1) main_image3_pane

0x7c54,	// (0x0001d270) area_side_right_pane_cp01_ParamLimits

0x7c54,	// (0x0001d270) area_side_right_pane_cp01

0x7c81,	// (0x0001d29d) main_image3_pane_g1_ParamLimits

0x7c81,	// (0x0001d29d) main_image3_pane_g1

0x7c8f,	// (0x0001d2ab) main_image3_pane_g2_ParamLimits

0x7c8f,	// (0x0001d2ab) main_image3_pane_g2

0x7ca8,	// (0x0001d2c4) main_image3_pane_g3_ParamLimits

0x7ca8,	// (0x0001d2c4) main_image3_pane_g3

0x7cc1,	// (0x0001d2dd) main_image3_pane_g4_ParamLimits

0x7cc1,	// (0x0001d2dd) main_image3_pane_g4

0x0003,

0xf921,	// (0x00024f3d) main_image3_pane_g_ParamLimits

0xf921,	// (0x00024f3d) main_image3_pane_g

0x7cda,	// (0x0001d2f6) main_image3_pane_t1_ParamLimits

0x7cda,	// (0x0001d2f6) main_image3_pane_t1

0x7cff,	// (0x0001d31b) main_image3_pane_t2_ParamLimits

0x7cff,	// (0x0001d31b) main_image3_pane_t2

0x7d1e,	// (0x0001d33a) main_image3_pane_t3_ParamLimits

0x7d1e,	// (0x0001d33a) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00024f46) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00024f46) main_image3_pane_t

0x3d26,	// (0x00019342) grid_sctrl_middle_pane_cp01_ParamLimits

0x3d26,	// (0x00019342) grid_sctrl_middle_pane_cp01

0xc596,	// (0x00021bb2) cell_sctrl_middle_pane_cp01_ParamLimits

0xc596,	// (0x00021bb2) cell_sctrl_middle_pane_cp01

0xc5a7,	// (0x00021bc3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc5a7,	// (0x00021bc3) cell_sctrl_middle_pane_cp01_g1

0x0ad5,	// (0x000160f1) main_call4_pane

0xc5b4,	// (0x00021bd0) aid_size_button_call4_ParamLimits

0xc5b4,	// (0x00021bd0) aid_size_button_call4

0xc5e4,	// (0x00021c00) call4_windows_pane_ParamLimits

0xc5e4,	// (0x00021c00) call4_windows_pane

0xc5fe,	// (0x00021c1a) grid_call4_button_pane_ParamLimits

0xc5fe,	// (0x00021c1a) grid_call4_button_pane

0x457b,	// (0x00019b97) call4_windows_conf_pane

0x4592,	// (0x00019bae) popup_call4_audio_first_window_ParamLimits

0x4592,	// (0x00019bae) popup_call4_audio_first_window

0x45de,	// (0x00019bfa) popup_call4_audio_second_window_ParamLimits

0x45de,	// (0x00019bfa) popup_call4_audio_second_window

0x45f2,	// (0x00019c0e) popup_call4_audio_wait_window_ParamLimits

0x45f2,	// (0x00019c0e) popup_call4_audio_wait_window

0xc622,	// (0x00021c3e) cell_call4_button_pane_ParamLimits

0xc622,	// (0x00021c3e) cell_call4_button_pane

0xc647,	// (0x00021c63) bg_button_pane_cp09_ParamLimits

0xc647,	// (0x00021c63) bg_button_pane_cp09

0xc653,	// (0x00021c6f) cell_call4_button_pane_g1_ParamLimits

0xc653,	// (0x00021c6f) cell_call4_button_pane_g1

0xc660,	// (0x00021c7c) cell_call4_button_pane_t1_ParamLimits

0xc660,	// (0x00021c7c) cell_call4_button_pane_t1

0x463a,	// (0x00019c56) popup_call4_audio_conf_window_ParamLimits

0x463a,	// (0x00019c56) popup_call4_audio_conf_window

0xbe32,	// (0x0002144e) mup3_progress_pane_t1_ParamLimits

0xbe49,	// (0x00021465) mup3_progress_pane_t2_ParamLimits

0x3cff,	// (0x0001931b) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00024e1f) mup3_progress_pane_t_ParamLimits

0x3d16,	// (0x00019332) mup_progress_pane_cp03_ParamLimits

0xc2df,	// (0x000218fb) mup3_control_keys_pane_g4_copy1

0x7ba3,	// (0x0001d1bf) mp4_rocker2_pane_ParamLimits

0x7ba3,	// (0x0001d1bf) mp4_rocker2_pane

0x4656,	// (0x00019c72) mp4_rocker2_pane_g1

0x464e,	// (0x00019c6a) mp4_rocker2_pane_g2

0x7d7f,	// (0x0001d39b) mp4_rocker2_pane_g3

0x7d87,	// (0x0001d3a3) mp4_rocker2_pane_g4

0x7d8f,	// (0x0001d3ab) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00024f4f) mp4_rocker2_pane_g

0x0ad5,	// (0x000160f1) main_camera4_pane

0x0ad5,	// (0x000160f1) main_video4_pane

0x7985,	// (0x0001cfa1) main_video_tele_dialer_pane_t1_ParamLimits

0x7985,	// (0x0001cfa1) main_video_tele_dialer_pane_t1

0x7997,	// (0x0001cfb3) main_video_tele_dialer_pane_t2_ParamLimits

0x7997,	// (0x0001cfb3) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00024f09) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00024f09) main_video_tele_dialer_pane_t

0x7daf,	// (0x0001d3cb) cam4_autofocus_pane_ParamLimits

0x7daf,	// (0x0001d3cb) cam4_autofocus_pane

0x7dbd,	// (0x0001d3d9) cam4_image_uncrop_pane_ParamLimits

0x7dbd,	// (0x0001d3d9) cam4_image_uncrop_pane

0x7dd4,	// (0x0001d3f0) cam4_indicators_pane_ParamLimits

0x7dd4,	// (0x0001d3f0) cam4_indicators_pane

0x7df0,	// (0x0001d40c) main_camera4_pane_g1_ParamLimits

0x7df0,	// (0x0001d40c) main_camera4_pane_g1

0x7dfc,	// (0x0001d418) main_camera4_pane_g2_ParamLimits

0x7dfc,	// (0x0001d418) main_camera4_pane_g2

0x7e08,	// (0x0001d424) main_camera4_pane_g3_ParamLimits

0x7e08,	// (0x0001d424) main_camera4_pane_g3

0x7e14,	// (0x0001d430) main_camera4_pane_g4_ParamLimits

0x7e14,	// (0x0001d430) main_camera4_pane_g4

0x7e20,	// (0x0001d43c) main_camera4_pane_g5_ParamLimits

0x7e20,	// (0x0001d43c) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00024f5a) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00024f5a) main_camera4_pane_g

0x7e3a,	// (0x0001d456) main_camera4_pane_t1_ParamLimits

0x7e3a,	// (0x0001d456) main_camera4_pane_t1

0x7e5e,	// (0x0001d47a) bg_tb_trans_pane_cp06

0x7e74,	// (0x0001d490) cam4_indicators_pane_g1

0x7e81,	// (0x0001d49d) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00024f6c) cam4_indicators_pane_g

0x7ea1,	// (0x0001d4bd) cam4_indicators_pane_t1

0x7ecb,	// (0x0001d4e7) main_video4_pane_g1_ParamLimits

0x7ecb,	// (0x0001d4e7) main_video4_pane_g1

0x7ed7,	// (0x0001d4f3) main_video4_pane_g2_ParamLimits

0x7ed7,	// (0x0001d4f3) main_video4_pane_g2

0x7ee3,	// (0x0001d4ff) main_video4_pane_g3_ParamLimits

0x7ee3,	// (0x0001d4ff) main_video4_pane_g3

0x7eef,	// (0x0001d50b) main_video4_pane_g4_ParamLimits

0x7eef,	// (0x0001d50b) main_video4_pane_g4

0x0004,

0xf957,	// (0x00024f73) main_video4_pane_g_ParamLimits

0xf957,	// (0x00024f73) main_video4_pane_g

0x7f0f,	// (0x0001d52b) vid4_indicators_pane_ParamLimits

0x7f0f,	// (0x0001d52b) vid4_indicators_pane

0x7f2d,	// (0x0001d549) video4_image_uncrop_cif_pane_ParamLimits

0x7f2d,	// (0x0001d549) video4_image_uncrop_cif_pane

0x7f3c,	// (0x0001d558) video4_image_uncrop_nhd_pane_ParamLimits

0x7f3c,	// (0x0001d558) video4_image_uncrop_nhd_pane

0x7dbd,	// (0x0001d3d9) video4_image_uncrop_vga_pane_ParamLimits

0x7dbd,	// (0x0001d3d9) video4_image_uncrop_vga_pane

0x7f49,	// (0x0001d565) bg_tb_trans_pane_cp07

0x7e74,	// (0x0001d490) vid4_indicators_pane_g1

0x7f61,	// (0x0001d57d) vid4_indicators_pane_g2

0x7f6e,	// (0x0001d58a) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00024f7e) vid4_indicators_pane_g

0x7f9b,	// (0x0001d5b7) vid4_indicators_pane_t1

0xc672,	// (0x00021c8e) cam4_autofocus_pane_g1

0xc67a,	// (0x00021c96) cam4_autofocus_pane_g2

0xc682,	// (0x00021c9e) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00024f89) cam4_autofocus_pane_g

0xc68a,	// (0x00021ca6) cam4_autofocus_pane_g3_copy1

0xc4b6,	// (0x00021ad2) video_down_pane_cp_t1

0xc4c4,	// (0x00021ae0) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00024f0e) video_down_pane_cp_t

0x3d26,	// (0x00019342) popup_vitu2_window_ParamLimits

0x3d26,	// (0x00019342) popup_vitu2_window

0x7fb5,	// (0x0001d5d1) aid_size_cell2_itu2_ParamLimits

0x7fb5,	// (0x0001d5d1) aid_size_cell2_itu2

0x7fd7,	// (0x0001d5f3) aid_size_cell_itu2_ParamLimits

0x7fd7,	// (0x0001d5f3) aid_size_cell_itu2

0x801b,	// (0x0001d637) bg_popup_window_pane_cp09_ParamLimits

0x801b,	// (0x0001d637) bg_popup_window_pane_cp09

0x8029,	// (0x0001d645) field_vitu2_entry_pane_ParamLimits

0x8029,	// (0x0001d645) field_vitu2_entry_pane

0x8049,	// (0x0001d665) grid_vitu2_function_pane_ParamLimits

0x8049,	// (0x0001d665) grid_vitu2_function_pane

0x808d,	// (0x0001d6a9) grid_vitu2_itu_pane_ParamLimits

0x808d,	// (0x0001d6a9) grid_vitu2_itu_pane

0x8105,	// (0x0001d721) cell_vitu2_itu_pane_ParamLimits

0x8105,	// (0x0001d721) cell_vitu2_itu_pane

0x811a,	// (0x0001d736) cell_vitu2_function_pane_ParamLimits

0x811a,	// (0x0001d736) cell_vitu2_function_pane

0x46a0,	// (0x00019cbc) bg_popup_call_pane_cp08_ParamLimits

0x46a0,	// (0x00019cbc) bg_popup_call_pane_cp08

0x46b9,	// (0x00019cd5) field_vitu2_entry_pane_g1

0x46c5,	// (0x00019ce1) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00024f90) field_vitu2_entry_pane_g

0x46df,	// (0x00019cfb) field_vitu2_entry_pane_t1_ParamLimits

0x46df,	// (0x00019cfb) field_vitu2_entry_pane_t1

0x46fc,	// (0x00019d18) field_vitu2_entry_pane_t2_ParamLimits

0x46fc,	// (0x00019d18) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00024f97) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00024f97) field_vitu2_entry_pane_t

0x8159,	// (0x0001d775) bg_button_pane_cp010_ParamLimits

0x8159,	// (0x0001d775) bg_button_pane_cp010

0x8167,	// (0x0001d783) cell_vitu2_itu_pane_g1

0x8185,	// (0x0001d7a1) cell_vitu2_itu_pane_t1_ParamLimits

0x8185,	// (0x0001d7a1) cell_vitu2_itu_pane_t1

0x81d7,	// (0x0001d7f3) cell_vitu2_itu_pane_t2_ParamLimits

0x81d7,	// (0x0001d7f3) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00024fa1) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00024fa1) cell_vitu2_itu_pane_t

0x7f49,	// (0x0001d565) bg_button_pane_cp011

0x8292,	// (0x0001d8ae) cell_vitu2_function_pane_g1

0x0ad5,	// (0x000160f1) main_myfav_hc_pane

0x7d60,	// (0x0001d37c) popup_image3_note_pane_ParamLimits

0x7d60,	// (0x0001d37c) popup_image3_note_pane

0x7d6e,	// (0x0001d38a) popup_image3_tool_bar_pane_ParamLimits

0x7d6e,	// (0x0001d38a) popup_image3_tool_bar_pane

0x8245,	// (0x0001d861) cell_vitu2_itu_pane_t3_ParamLimits

0x8245,	// (0x0001d861) cell_vitu2_itu_pane_t3

0x0ad5,	// (0x000160f1) bg_popup_trans_pane

0x4721,	// (0x00019d3d) grid_image3_tool_bar_pane

0x472b,	// (0x00019d47) bg_popup_trans_pane_g1

0x182c,	// (0x00016e48) bg_popup_trans_pane_g2

0x4733,	// (0x00019d4f) bg_popup_trans_pane_g3

0x473b,	// (0x00019d57) bg_popup_trans_pane_g4

0x4743,	// (0x00019d5f) bg_popup_trans_pane_g5

0x474b,	// (0x00019d67) bg_popup_trans_pane_g6

0x4753,	// (0x00019d6f) bg_popup_trans_pane_g7

0x475b,	// (0x00019d77) bg_popup_trans_pane_g8

0x180c,	// (0x00016e28) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00024fa8) bg_popup_trans_pane_g

0x4763,	// (0x00019d7f) cell_image3_tool_bar_pane_ParamLimits

0x4763,	// (0x00019d7f) cell_image3_tool_bar_pane

0x3a0c,	// (0x00019028) cell_image3_tool_bar_pane_g1

0x0ad5,	// (0x000160f1) bg_popup_trans_pane_cp1

0x4777,	// (0x00019d93) popup_image3_note_pane_t1

0x4785,	// (0x00019da1) popup_image3_note_pane_t2

0x4793,	// (0x00019daf) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00024fbb) popup_image3_note_pane_t

0x47a1,	// (0x00019dbd) popup_image3_note_pane_t3_copy1

0xc692,	// (0x00021cae) bg_myfav_hc_instruction_pane_ParamLimits

0xc692,	// (0x00021cae) bg_myfav_hc_instruction_pane

0xc6aa,	// (0x00021cc6) cell_myfav_contact_pane_ParamLimits

0xc6aa,	// (0x00021cc6) cell_myfav_contact_pane

0xc6c4,	// (0x00021ce0) cell_myfav_contact_pane_cp1_ParamLimits

0xc6c4,	// (0x00021ce0) cell_myfav_contact_pane_cp1

0xc6dc,	// (0x00021cf8) cell_myfav_contact_pane_cp2_ParamLimits

0xc6dc,	// (0x00021cf8) cell_myfav_contact_pane_cp2

0xc6f4,	// (0x00021d10) cell_myfav_contact_pane_cp3_ParamLimits

0xc6f4,	// (0x00021d10) cell_myfav_contact_pane_cp3

0xc70b,	// (0x00021d27) cell_myfav_contact_pane_cp4_ParamLimits

0xc70b,	// (0x00021d27) cell_myfav_contact_pane_cp4

0xc721,	// (0x00021d3d) cell_myfav_contact_pane_cp5_ParamLimits

0xc721,	// (0x00021d3d) cell_myfav_contact_pane_cp5

0xc735,	// (0x00021d51) cell_myfav_contact_pane_cp6_ParamLimits

0xc735,	// (0x00021d51) cell_myfav_contact_pane_cp6

0xc749,	// (0x00021d65) cell_myfav_contact_pane_cp7_ParamLimits

0xc749,	// (0x00021d65) cell_myfav_contact_pane_cp7

0x47af,	// (0x00019dcb) listscroll_gen_pane_cp05

0xc761,	// (0x00021d7d) main_myfav_hc_pane_g1_ParamLimits

0xc761,	// (0x00021d7d) main_myfav_hc_pane_g1

0xc777,	// (0x00021d93) main_myfav_hc_pane_g2_ParamLimits

0xc777,	// (0x00021d93) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00024fc2) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00024fc2) main_myfav_hc_pane_g

0xc7a5,	// (0x00021dc1) main_myfav_hc_pane_t1_ParamLimits

0xc7a5,	// (0x00021dc1) main_myfav_hc_pane_t1

0x47b8,	// (0x00019dd4) main_myfav_hc_pane_t2_ParamLimits

0x47b8,	// (0x00019dd4) main_myfav_hc_pane_t2

0x47ca,	// (0x00019de6) main_myfav_hc_pane_t3_ParamLimits

0x47ca,	// (0x00019de6) main_myfav_hc_pane_t3

0xc7bc,	// (0x00021dd8) main_myfav_hc_pane_t4_ParamLimits

0xc7bc,	// (0x00021dd8) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00024fc9) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00024fc9) main_myfav_hc_pane_t

0x3a0c,	// (0x00019028) bg_myfav_hc_instruction_pane_g1

0x47dc,	// (0x00019df8) cell_myfav_contact_pane_g1_ParamLimits

0x47dc,	// (0x00019df8) cell_myfav_contact_pane_g1

0x47dc,	// (0x00019df8) cell_myfav_contact_pane_g2_ParamLimits

0x47dc,	// (0x00019df8) cell_myfav_contact_pane_g2

0x47e8,	// (0x00019e04) cell_myfav_contact_pane_g3_ParamLimits

0x47e8,	// (0x00019e04) cell_myfav_contact_pane_g3

0x3ce9,	// (0x00019305) cell_myfav_contact_pane_g4_ParamLimits

0x3ce9,	// (0x00019305) cell_myfav_contact_pane_g4

0x47f5,	// (0x00019e11) cell_myfav_contact_pane_g5_ParamLimits

0x47f5,	// (0x00019e11) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00024fd4) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00024fd4) cell_myfav_contact_pane_g

0xc78d,	// (0x00021da9) main_myfav_hc_pane_g3_ParamLimits

0xc78d,	// (0x00021da9) main_myfav_hc_pane_g3

0x86ff,	// (0x0001dd1b) popup_adpt_find_window

0xc7e6,	// (0x00021e02) afind_page_pane_ParamLimits

0xc7e6,	// (0x00021e02) afind_page_pane

0xc7f3,	// (0x00021e0f) aid_size_cell_afind_ParamLimits

0xc7f3,	// (0x00021e0f) aid_size_cell_afind

0xc80d,	// (0x00021e29) bg_popup_sub_pane_cp09_ParamLimits

0xc80d,	// (0x00021e29) bg_popup_sub_pane_cp09

0xc81a,	// (0x00021e36) find_pane_cp01_ParamLimits

0xc81a,	// (0x00021e36) find_pane_cp01

0x4801,	// (0x00019e1d) grid_afind_control_pane_ParamLimits

0x4801,	// (0x00019e1d) grid_afind_control_pane

0xc827,	// (0x00021e43) grid_afind_pane_ParamLimits

0xc827,	// (0x00021e43) grid_afind_pane

0xc843,	// (0x00021e5f) cell_afind_pane_ParamLimits

0xc843,	// (0x00021e5f) cell_afind_pane

0x3a0c,	// (0x00019028) afind_page_pane_g1

0xc889,	// (0x00021ea5) afind_page_pane_g2

0xc892,	// (0x00021eae) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00024fdf) afind_page_pane_g

0xc89b,	// (0x00021eb7) afind_page_pane_t1

0x4815,	// (0x00019e31) cell_afind_grid_control_pane_ParamLimits

0x4815,	// (0x00019e31) cell_afind_grid_control_pane

0x453d,	// (0x00019b59) bg_button_pane_cp69_ParamLimits

0x453d,	// (0x00019b59) bg_button_pane_cp69

0xc8bb,	// (0x00021ed7) cell_afind_pane_g1_ParamLimits

0xc8bb,	// (0x00021ed7) cell_afind_pane_g1

0xc8c8,	// (0x00021ee4) cell_afind_pane_t1_ParamLimits

0xc8c8,	// (0x00021ee4) cell_afind_pane_t1

0x157f,	// (0x00016b9b) bg_button_pane_cp72

0x4824,	// (0x00019e40) cell_afind_grid_control_pane_g1

0xaba9,	// (0x000201c5) aid_image_placing_area_ParamLimits

0xaba9,	// (0x000201c5) aid_image_placing_area

0x3ffc,	// (0x00019618) field_vitu_entry_pane_g1_ParamLimits

0x3ffc,	// (0x00019618) field_vitu_entry_pane_g1

0x4008,	// (0x00019624) field_vitu_entry_pane_g2_ParamLimits

0x4008,	// (0x00019624) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00024e99) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00024e99) field_vitu_entry_pane_g

0xc366,	// (0x00021982) cell_vitu_itu_pane_g1_ParamLimits

0xc3a8,	// (0x000219c4) cell_vitu_itu_pane_t3_ParamLimits

0xc3a8,	// (0x000219c4) cell_vitu_itu_pane_t3

0x44ed,	// (0x00019b09) mp4_progress_pane_t1_ParamLimits

0x4506,	// (0x00019b22) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00024f2e) mp4_progress_pane_t_ParamLimits

0x451f,	// (0x00019b3b) mup_progress_pane_cp04_ParamLimits

0xc7d0,	// (0x00021dec) main_myfav_hc_pane_t5_ParamLimits

0xc7d0,	// (0x00021dec) main_myfav_hc_pane_t5

0x0afb,	// (0x00016117) aid_zoom_text_primary

0x86ff,	// (0x0001dd1b) popup_adpt_find_window_ParamLimits

0x0b45,	// (0x00016161) main_cam_set_pane

0x7de2,	// (0x0001d3fe) cam4_zoom_pane_ParamLimits

0x7de2,	// (0x0001d3fe) cam4_zoom_pane

0xc8da,	// (0x00021ef6) main_cam_set_pane_g1_ParamLimits

0xc8da,	// (0x00021ef6) main_cam_set_pane_g1

0xc8e8,	// (0x00021f04) main_cam_set_pane_g2_ParamLimits

0xc8e8,	// (0x00021f04) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00024fe6) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00024fe6) main_cam_set_pane_g

0xc8f4,	// (0x00021f10) main_cam_set_pane_t1_ParamLimits

0xc8f4,	// (0x00021f10) main_cam_set_pane_t1

0xc910,	// (0x00021f2c) main_cset_listscroll_pane_ParamLimits

0xc910,	// (0x00021f2c) main_cset_listscroll_pane

0xc93d,	// (0x00021f59) main_cset_slider_pane_ParamLimits

0xc93d,	// (0x00021f59) main_cset_slider_pane

0x4835,	// (0x00019e51) main_cset_list_pane_ParamLimits

0x4835,	// (0x00019e51) main_cset_list_pane

0x4845,	// (0x00019e61) scroll_pane_cp028

0xc95c,	// (0x00021f78) aid_area_touch_slider

0xc978,	// (0x00021f94) cset_slider_pane

0xc9a2,	// (0x00021fbe) main_cset_slider_pane_g1

0xc9b7,	// (0x00021fd3) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00024feb) main_cset_slider_pane_g

0x487e,	// (0x00019e9a) main_cset_slider_pane_t1

0xca79,	// (0x00022095) main_cset_slider_pane_t2

0xca93,	// (0x000220af) main_cset_slider_pane_t3

0xcaad,	// (0x000220c9) main_cset_slider_pane_t4

0xcac7,	// (0x000220e3) main_cset_slider_pane_t5

0xcae5,	// (0x00022101) main_cset_slider_pane_t6

0xcafc,	// (0x00022118) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00025010) main_cset_slider_pane_t

0xcc08,	// (0x00022224) cset_list_set_pane_ParamLimits

0xcc08,	// (0x00022224) cset_list_set_pane

0xcc1e,	// (0x0002223a) aid_position_infowindow_above

0xcc26,	// (0x00022242) aid_position_infowindow_below

0xcc2e,	// (0x0002224a) cset_list_set_pane_g1_ParamLimits

0xcc2e,	// (0x0002224a) cset_list_set_pane_g1

0x491e,	// (0x00019f3a) cset_list_set_pane_g3_ParamLimits

0x491e,	// (0x00019f3a) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0002502f) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0002502f) cset_list_set_pane_g

0x492d,	// (0x00019f49) cset_list_set_pane_t1_ParamLimits

0x492d,	// (0x00019f49) cset_list_set_pane_t1

0x0b45,	// (0x00016161) list_highlight_pane_cp021_ParamLimits

0x0b45,	// (0x00016161) list_highlight_pane_cp021

0x219f,	// (0x000177bb) cset_slider_pane_g1

0x21b1,	// (0x000177cd) cset_slider_pane_g2

0x21a8,	// (0x000177c4) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00025034) cset_slider_pane_g

0x82a6,	// (0x0001d8c2) aid_area_touch_cam4_zoom

0x82ae,	// (0x0001d8ca) cam4_zoom_cont_pane

0x82b6,	// (0x0001d8d2) cam4_zoom_pane_g1

0x82be,	// (0x0001d8da) cam4_zoom_pane_g2

0x82c6,	// (0x0001d8e2) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0002503b) cam4_zoom_pane_g

0x82ce,	// (0x0001d8ea) cam4_zoom_cont_pane_g1

0x82d7,	// (0x0001d8f3) cam4_zoom_cont_pane_g2

0x82e0,	// (0x0001d8fc) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00025042) cam4_zoom_cont_pane_g

0xc5ce,	// (0x00021bea) call4_image_pane_ParamLimits

0xc5ce,	// (0x00021bea) call4_image_pane

0x457b,	// (0x00019b97) call4_windows_conf_pane_ParamLimits

0x45bc,	// (0x00019bd8) popup_call4_audio_in_window_ParamLimits

0x45bc,	// (0x00019bd8) popup_call4_audio_in_window

0x0ad5,	// (0x000160f1) bg_popup_call2_act_pane_cp02

0x4632,	// (0x00019c4e) call4_list_conf_pane

0x3a0c,	// (0x00019028) call4_image_pane_g1

0x3a0c,	// (0x00019028) call4_image_pane_g2

0x0001,

0xf743,	// (0x00024d5f) call4_image_pane_g

0x497d,	// (0x00019f99) list_single_graphic_popup_conf4_pane_ParamLimits

0x497d,	// (0x00019f99) list_single_graphic_popup_conf4_pane

0x0ad5,	// (0x000160f1) list_highlight_pane_cp022

0x4990,	// (0x00019fac) list_single_graphic_popup_conf4_pane_g1

0x1e5e,	// (0x0001747a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00025049) list_single_graphic_popup_conf4_pane_g

0x4998,	// (0x00019fb4) list_single_graphic_popup_conf4_pane_t1

0x9358,	// (0x0001e974) popup_vtel_slider_window_ParamLimits

0x9358,	// (0x0001e974) popup_vtel_slider_window

0x452b,	// (0x00019b47) dialer2_ne_pane_t2_ParamLimits

0x452b,	// (0x00019b47) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00024f33) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00024f33) dialer2_ne_pane_t

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp010_ParamLimits

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp010

0xcc3a,	// (0x00022256) popup_vtel_slider_window_g1_ParamLimits

0xcc3a,	// (0x00022256) popup_vtel_slider_window_g1

0xcc46,	// (0x00022262) popup_vtel_slider_window_g2_ParamLimits

0xcc46,	// (0x00022262) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0002504e) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0002504e) popup_vtel_slider_window_g

0xcc8e,	// (0x000222aa) vtel_slider_pane_ParamLimits

0xcc8e,	// (0x000222aa) vtel_slider_pane

0xcc9d,	// (0x000222b9) vtel_slider_pane_g1_ParamLimits

0xcc9d,	// (0x000222b9) vtel_slider_pane_g1

0xccaa,	// (0x000222c6) vtel_slider_pane_g2_ParamLimits

0xccaa,	// (0x000222c6) vtel_slider_pane_g2

0xccb7,	// (0x000222d3) vtel_slider_pane_g3_ParamLimits

0xccb7,	// (0x000222d3) vtel_slider_pane_g3

0xcc9d,	// (0x000222b9) vtel_slider_pane_g4_ParamLimits

0xcc9d,	// (0x000222b9) vtel_slider_pane_g4

0xccc4,	// (0x000222e0) vtel_slider_pane_g5_ParamLimits

0xccc4,	// (0x000222e0) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00025057) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00025057) vtel_slider_pane_g

0x0ad5,	// (0x000160f1) main_gallery2_pane

0x7ffd,	// (0x0001d619) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ffd,	// (0x0001d619) aid_size_row_itut2_dropdow_list

0x806b,	// (0x0001d687) grid_vitu2_function_top_pane_ParamLimits

0x806b,	// (0x0001d687) grid_vitu2_function_top_pane

0x80c1,	// (0x0001d6dd) popup_vitu2_dropdown_list_window_ParamLimits

0x80c1,	// (0x0001d6dd) popup_vitu2_dropdown_list_window

0x80e1,	// (0x0001d6fd) popup_vitu2_match_list_window

0x82e9,	// (0x0001d905) cell_vitu2_function_top_pane_ParamLimits

0x82e9,	// (0x0001d905) cell_vitu2_function_top_pane

0x8309,	// (0x0001d925) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8309,	// (0x0001d925) cell_vitu2_function_top_pane_cp01

0x8327,	// (0x0001d943) cell_vitu2_function_top_wide_pane_ParamLimits

0x8327,	// (0x0001d943) cell_vitu2_function_top_wide_pane

0x7f49,	// (0x0001d565) bg_button_pane_cp012

0x8345,	// (0x0001d961) cell_vitu2_function_top_pane_g1

0x8354,	// (0x0001d970) bg_button_pane_cp013_ParamLimits

0x8354,	// (0x0001d970) bg_button_pane_cp013

0xccd1,	// (0x000222ed) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xccd1,	// (0x000222ed) cell_vitu2_function_top_wide_pane_g1

0x8370,	// (0x0001d98c) bg_popup_sub_pane_cp20

0x837e,	// (0x0001d99a) list_vitu2_match_list_pane

0x472b,	// (0x00019d47) bg_popup_sub_pane_cp20_g1

0x4733,	// (0x00019d4f) bg_popup_sub_pane_cp20_g2

0x182c,	// (0x00016e48) bg_popup_sub_pane_cp20_g3

0x473b,	// (0x00019d57) bg_popup_sub_pane_cp20_g4

0x180c,	// (0x00016e28) bg_popup_sub_pane_cp20_g5

0x49d0,	// (0x00019fec) bg_popup_sub_pane_cp20_g6

0x474b,	// (0x00019d67) bg_popup_sub_pane_cp20_g7

0x4753,	// (0x00019d6f) bg_popup_sub_pane_cp20_g8

0x475b,	// (0x00019d77) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00025062) bg_popup_sub_pane_cp20_g

0x8396,	// (0x0001d9b2) list_vitu2_match_list_item_pane_ParamLimits

0x8396,	// (0x0001d9b2) list_vitu2_match_list_item_pane

0x83a8,	// (0x0001d9c4) list_vitu2_match_list_item_pane_t1

0x71fe,	// (0x0001c81a) bg_popup_sub_pane_cp21

0x83b6,	// (0x0001d9d2) grid_vitu2_dropdown_list_pane

0x83be,	// (0x0001d9da) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x83be,	// (0x0001d9da) cell_vitu2_dropdown_list_char_pane

0x83df,	// (0x0001d9fb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83df,	// (0x0001d9fb) cell_vitu2_dropdown_list_ctrl_pane

0x4a22,	// (0x0001a03e) cell_vitu2_dropdown_list_char_pane_g1

0x4a19,	// (0x0001a035) cell_vitu2_dropdown_list_char_pane_g2

0x4a10,	// (0x0001a02c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0002507f) cell_vitu2_dropdown_list_char_pane_g

0x840b,	// (0x0001da27) cell_vitu2_dropdown_list_char_pane_t1

0xcd18,	// (0x00022334) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcd18,	// (0x00022334) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcd28,	// (0x00022344) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcd28,	// (0x00022344) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcd39,	// (0x00022355) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcd39,	// (0x00022355) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8419,	// (0x0001da35) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8419,	// (0x0001da35) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7e5e,	// (0x0001d47a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7e5e,	// (0x0001d47a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00025086) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00025086) cell_vitu2_dropdown_list_ctrl_pane_g

0xcd49,	// (0x00022365) aid_size_cell_gallery2_ParamLimits

0xcd49,	// (0x00022365) aid_size_cell_gallery2

0xcd57,	// (0x00022373) grid_gallery2_pane_ParamLimits

0xcd57,	// (0x00022373) grid_gallery2_pane

0xcd66,	// (0x00022382) scroll_pane_cp029_ParamLimits

0xcd66,	// (0x00022382) scroll_pane_cp029

0xcd72,	// (0x0002238e) cell_gallery2_pane_ParamLimits

0xcd72,	// (0x0002238e) cell_gallery2_pane

0x4a2b,	// (0x0001a047) cell_gallery2_pane_g2

0x50a1,	// (0x0001a6bd) cell_gallery2_pane_g3

0x4a35,	// (0x0001a051) cell_gallery2_pane_g4

0x4a3d,	// (0x0001a059) cell_gallery2_pane_g5

0x2049,	// (0x00017665) grid_highlight_pane_cp10

0x80e1,	// (0x0001d6fd) popup_vitu2_match_list_window_ParamLimits

0x80f5,	// (0x0001d711) popup_vitu2_query_window_ParamLimits

0x80f5,	// (0x0001d711) popup_vitu2_query_window

0x71fe,	// (0x0001c81a) bg_vitu2_candi_button_pane

0x4a22,	// (0x0001a03e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4a19,	// (0x0001a035) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4a10,	// (0x0001a02c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcda0,	// (0x000223bc) bg_button_pane_cp015

0xcdaa,	// (0x000223c6) bg_button_pane_cp016

0xcdb4,	// (0x000223d0) bg_button_pane_cp017

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp22

0x4a45,	// (0x0001a061) popup_vitu2_query_window_g1

0xcddc,	// (0x000223f8) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00025091) popup_vitu2_query_window_g

0xcdea,	// (0x00022406) popup_vitu2_query_window_t1_ParamLimits

0xcdea,	// (0x00022406) popup_vitu2_query_window_t1

0xce12,	// (0x0002242e) popup_vitu2_query_window_t2_ParamLimits

0xce12,	// (0x0002242e) popup_vitu2_query_window_t2

0xce24,	// (0x00022440) popup_vitu2_query_window_t3_ParamLimits

0xce24,	// (0x00022440) popup_vitu2_query_window_t3

0xce4c,	// (0x00022468) popup_vitu2_query_window_t4_ParamLimits

0xce4c,	// (0x00022468) popup_vitu2_query_window_t4

0xce60,	// (0x0002247c) popup_vitu2_query_window_t5_ParamLimits

0xce60,	// (0x0002247c) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00025096) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00025096) popup_vitu2_query_window_t

0x482d,	// (0x00019e49) main_cset_text_pane

0xc95c,	// (0x00021f78) aid_area_touch_slider_ParamLimits

0xc978,	// (0x00021f94) cset_slider_pane_ParamLimits

0xc9a2,	// (0x00021fbe) main_cset_slider_pane_g1_ParamLimits

0xc9b7,	// (0x00021fd3) main_cset_slider_pane_g2_ParamLimits

0x484e,	// (0x00019e6a) main_cset_slider_pane_g3_ParamLimits

0x484e,	// (0x00019e6a) main_cset_slider_pane_g3

0xc9cc,	// (0x00021fe8) main_cset_slider_pane_g4_ParamLimits

0xc9cc,	// (0x00021fe8) main_cset_slider_pane_g4

0xc9db,	// (0x00021ff7) main_cset_slider_pane_g5_ParamLimits

0xc9db,	// (0x00021ff7) main_cset_slider_pane_g5

0xc9e9,	// (0x00022005) main_cset_slider_pane_g6_ParamLimits

0xc9e9,	// (0x00022005) main_cset_slider_pane_g6

0xf9cf,	// (0x00024feb) main_cset_slider_pane_g_ParamLimits

0x487e,	// (0x00019e9a) main_cset_slider_pane_t1_ParamLimits

0xca79,	// (0x00022095) main_cset_slider_pane_t2_ParamLimits

0xca93,	// (0x000220af) main_cset_slider_pane_t3_ParamLimits

0xcaad,	// (0x000220c9) main_cset_slider_pane_t4_ParamLimits

0xcac7,	// (0x000220e3) main_cset_slider_pane_t5_ParamLimits

0xcae5,	// (0x00022101) main_cset_slider_pane_t6_ParamLimits

0xcafc,	// (0x00022118) main_cset_slider_pane_t7_ParamLimits

0xcb2a,	// (0x00022146) main_cset_slider_pane_t8_ParamLimits

0xcb2a,	// (0x00022146) main_cset_slider_pane_t8

0xcb52,	// (0x0002216e) main_cset_slider_pane_t9_ParamLimits

0xcb52,	// (0x0002216e) main_cset_slider_pane_t9

0xcb7a,	// (0x00022196) main_cset_slider_pane_t10_ParamLimits

0xcb7a,	// (0x00022196) main_cset_slider_pane_t10

0xcba2,	// (0x000221be) main_cset_slider_pane_t11_ParamLimits

0xcba2,	// (0x000221be) main_cset_slider_pane_t11

0xcbcc,	// (0x000221e8) main_cset_slider_pane_t12_ParamLimits

0xcbcc,	// (0x000221e8) main_cset_slider_pane_t12

0xcbe9,	// (0x00022205) main_cset_slider_pane_t13_ParamLimits

0xcbe9,	// (0x00022205) main_cset_slider_pane_t13

0xf9f4,	// (0x00025010) main_cset_slider_pane_t_ParamLimits

0x0ad5,	// (0x000160f1) bg_popup_sub_pane_cp011

0x4a51,	// (0x0001a06d) main_cset_text_pane_g1

0x4a59,	// (0x0001a075) main_cset_text_pane_t1

0x4a67,	// (0x0001a083) main_cset_text_pane_t2

0x4a75,	// (0x0001a091) main_cset_text_pane_t3

0x4a83,	// (0x0001a09f) main_cset_text_pane_t4

0x4a91,	// (0x0001a0ad) main_cset_text_pane_t5

0x4a9f,	// (0x0001a0bb) main_cset_text_pane_t6

0x4aad,	// (0x0001a0c9) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x000250a1) main_cset_text_pane_t

0x0ad5,	// (0x000160f1) main_cam4_burst_pane

0x0ad5,	// (0x000160f1) main_cam5_pane

0xc8a9,	// (0x00021ec5) bg_button_pane_cp019

0xc8b2,	// (0x00021ece) bg_button_pane_cp020

0x485a,	// (0x00019e76) main_cset_slider_pane_g7_ParamLimits

0x485a,	// (0x00019e76) main_cset_slider_pane_g7

0x4866,	// (0x00019e82) main_cset_slider_pane_g8_ParamLimits

0x4866,	// (0x00019e82) main_cset_slider_pane_g8

0xc9fd,	// (0x00022019) main_cset_slider_pane_g9_ParamLimits

0xc9fd,	// (0x00022019) main_cset_slider_pane_g9

0xca09,	// (0x00022025) main_cset_slider_pane_g10_ParamLimits

0xca09,	// (0x00022025) main_cset_slider_pane_g10

0xca15,	// (0x00022031) main_cset_slider_pane_g11_ParamLimits

0xca15,	// (0x00022031) main_cset_slider_pane_g11

0xca21,	// (0x0002203d) main_cset_slider_pane_g12_ParamLimits

0xca21,	// (0x0002203d) main_cset_slider_pane_g12

0xca2d,	// (0x00022049) main_cset_slider_pane_g13_ParamLimits

0xca2d,	// (0x00022049) main_cset_slider_pane_g13

0xca39,	// (0x00022055) main_cset_slider_pane_g14_ParamLimits

0xca39,	// (0x00022055) main_cset_slider_pane_g14

0xca45,	// (0x00022061) main_cset_slider_pane_g15_ParamLimits

0xca45,	// (0x00022061) main_cset_slider_pane_g15

0x48ac,	// (0x00019ec8) main_cset_slider_pane_t14_ParamLimits

0x48ac,	// (0x00019ec8) main_cset_slider_pane_t14

0x48e5,	// (0x00019f01) main_cset_slider_pane_t15_ParamLimits

0x48e5,	// (0x00019f01) main_cset_slider_pane_t15

0xce74,	// (0x00022490) aid_cam4_burst_size_cell_ParamLimits

0xce74,	// (0x00022490) aid_cam4_burst_size_cell

0xce90,	// (0x000224ac) grid_cam4_burst_pane_ParamLimits

0xce90,	// (0x000224ac) grid_cam4_burst_pane

0xcec0,	// (0x000224dc) linegrid_cam4_burst_pane_ParamLimits

0xcec0,	// (0x000224dc) linegrid_cam4_burst_pane

0xcee0,	// (0x000224fc) scroll_pane_cp30_ParamLimits

0xcee0,	// (0x000224fc) scroll_pane_cp30

0xceec,	// (0x00022508) cell_cam4_burst_pane_ParamLimits

0xceec,	// (0x00022508) cell_cam4_burst_pane

0x4abb,	// (0x0001a0d7) linegrid_cam4_burst_pane_g1_ParamLimits

0x4abb,	// (0x0001a0d7) linegrid_cam4_burst_pane_g1

0xcf28,	// (0x00022544) linegrid_cam4_burst_pane_g2_ParamLimits

0xcf28,	// (0x00022544) linegrid_cam4_burst_pane_g2

0x4ac8,	// (0x0001a0e4) linegrid_cam4_burst_pane_g3_ParamLimits

0x4ac8,	// (0x0001a0e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x000250b0) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x000250b0) linegrid_cam4_burst_pane_g

0xcf39,	// (0x00022555) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcf39,	// (0x00022555) linegrid_cam4_burst_pane_g3_copy1

0x4ad5,	// (0x0001a0f1) linegrid_cam4_burst_pane_g4_ParamLimits

0x4ad5,	// (0x0001a0f1) linegrid_cam4_burst_pane_g4

0xcf53,	// (0x0002256f) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf53,	// (0x0002256f) linegrid_cam4_burst_pane_g5

0xcf64,	// (0x00022580) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf64,	// (0x00022580) linegrid_cam4_burst_pane_g6

0x4ae2,	// (0x0001a0fe) linegrid_cam4_burst_pane_g7_ParamLimits

0x4ae2,	// (0x0001a0fe) linegrid_cam4_burst_pane_g7

0xcf75,	// (0x00022591) cell_cam4_burst_pane_g1

0x4afb,	// (0x0001a117) main_cam5_pane_t1_ParamLimits

0x4afb,	// (0x0001a117) main_cam5_pane_t1

0x4b0d,	// (0x0001a129) main_cam5_pane_t2_ParamLimits

0x4b0d,	// (0x0001a129) main_cam5_pane_t2

0x4b1f,	// (0x0001a13b) main_cam5_pane_t3_ParamLimits

0x4b1f,	// (0x0001a13b) main_cam5_pane_t3

0x4b31,	// (0x0001a14d) main_cam5_pane_t4_ParamLimits

0x4b31,	// (0x0001a14d) main_cam5_pane_t4

0x4b49,	// (0x0001a165) main_cam5_pane_t5_ParamLimits

0x4b49,	// (0x0001a165) main_cam5_pane_t5

0x4b5d,	// (0x0001a179) main_cam5_pane_t6_ParamLimits

0x4b5d,	// (0x0001a179) main_cam5_pane_t6

0x4b71,	// (0x0001a18d) main_cam5_pane_t7_ParamLimits

0x4b71,	// (0x0001a18d) main_cam5_pane_t7

0x4b83,	// (0x0001a19f) main_cam5_pane_t8_ParamLimits

0x4b83,	// (0x0001a19f) main_cam5_pane_t8

0x4b9f,	// (0x0001a1bb) main_cam5_pane_t9_ParamLimits

0x4b9f,	// (0x0001a1bb) main_cam5_pane_t9

0x4bb1,	// (0x0001a1cd) main_cam5_pane_t10_ParamLimits

0x4bb1,	// (0x0001a1cd) main_cam5_pane_t10

0x4bc3,	// (0x0001a1df) main_cam5_pane_t11_ParamLimits

0x4bc3,	// (0x0001a1df) main_cam5_pane_t11

0x4bd5,	// (0x0001a1f1) main_cam5_pane_t12_ParamLimits

0x4bd5,	// (0x0001a1f1) main_cam5_pane_t12

0x4bea,	// (0x0001a206) main_cam5_pane_t13_ParamLimits

0x4bea,	// (0x0001a206) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x000250bc) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x000250bc) main_cam5_pane_t

0x87ac,	// (0x0001ddc8) popup_scut_keymap_window_ParamLimits

0x87ac,	// (0x0001ddc8) popup_scut_keymap_window

0xcf88,	// (0x000225a4) aid_size_cell_brow_shortcut

0x2049,	// (0x00017665) bg_popup_window_pane_cp010

0xcf94,	// (0x000225b0) grid_scut_pane

0xcfa0,	// (0x000225bc) cell_scut_pane_ParamLimits

0xcfa0,	// (0x000225bc) cell_scut_pane

0xcfb7,	// (0x000225d3) cell_scut_pane_g1

0x4c07,	// (0x0001a223) cell_scut_pane_t1

0x4c16,	// (0x0001a232) cell_scut_pane_t2

0xcfc0,	// (0x000225dc) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x000250d7) cell_scut_pane_t

0xba7c,	// (0x00021098) main_mup3_pane_g8_ParamLimits

0xba7c,	// (0x00021098) main_mup3_pane_g8

0x800b,	// (0x0001d627) area_vitu2_query_pane_ParamLimits

0x800b,	// (0x0001d627) area_vitu2_query_pane

0xcdbe,	// (0x000223da) input_focus_pane_cp08

0x4c25,	// (0x0001a241) area_vitu2_query_pane_g1

0xcfce,	// (0x000225ea) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x000250de) area_vitu2_query_pane_g

0xcfdf,	// (0x000225fb) area_vitu2_query_pane_t1_ParamLimits

0xcfdf,	// (0x000225fb) area_vitu2_query_pane_t1

0xcff3,	// (0x0002260f) area_vitu2_query_pane_t2_ParamLimits

0xcff3,	// (0x0002260f) area_vitu2_query_pane_t2

0xd007,	// (0x00022623) area_vitu2_query_pane_t3_ParamLimits

0xd007,	// (0x00022623) area_vitu2_query_pane_t3

0x4c31,	// (0x0001a24d) area_vitu2_query_pane_t4_ParamLimits

0x4c31,	// (0x0001a24d) area_vitu2_query_pane_t4

0x4c59,	// (0x0001a275) area_vitu2_query_pane_t5_ParamLimits

0x4c59,	// (0x0001a275) area_vitu2_query_pane_t5

0x4c81,	// (0x0001a29d) area_vitu2_query_pane_t6_ParamLimits

0x4c81,	// (0x0001a29d) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x000250e3) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x000250e3) area_vitu2_query_pane_t

0xd02f,	// (0x0002264b) bg_button_pane_cp018

0xd03d,	// (0x00022659) bg_button_pane_cp021

0xd049,	// (0x00022665) bg_button_pane_cp022

0xd05a,	// (0x00022676) input_focus_pane_cp09

0xa2bd,	// (0x0001f8d9) aid_size_touch_mv_arrow_left

0xa2e6,	// (0x0001f902) aid_size_touch_mv_arrow_right

0xca5d,	// (0x00022079) main_cset_slider_pane_g16_ParamLimits

0xca5d,	// (0x00022079) main_cset_slider_pane_g16

0xca6b,	// (0x00022087) main_cset_slider_pane_g17_ParamLimits

0xca6b,	// (0x00022087) main_cset_slider_pane_g17

0xcf75,	// (0x00022591) cell_cam4_burst_pane_g1_ParamLimits

0x0ad5,	// (0x000160f1) compa_mode_pane

0xcc52,	// (0x0002226e) popup_vtel_slider_window_g3_ParamLimits

0xcc52,	// (0x0002226e) popup_vtel_slider_window_g3

0xcc66,	// (0x00022282) popup_vtel_slider_window_g4_ParamLimits

0xcc66,	// (0x00022282) popup_vtel_slider_window_g4

0xcc7a,	// (0x00022296) popup_vtel_slider_window_t1_ParamLimits

0xcc7a,	// (0x00022296) popup_vtel_slider_window_t1

0x0ad5,	// (0x000160f1) main_cl_pane

0x352e,	// (0x00018b4a) popup_imed_adjust2_window_ParamLimits

0x3506,	// (0x00018b22) bg_tb_trans_pane_cp05_ParamLimits

0x3f31,	// (0x0001954d) popup_imed_adjust2_window_g1_ParamLimits

0x3f40,	// (0x0001955c) popup_imed_adjust2_window_g2_ParamLimits

0x3f40,	// (0x0001955c) popup_imed_adjust2_window_g2

0x3f4c,	// (0x00019568) popup_imed_adjust2_window_g3_ParamLimits

0x3f4c,	// (0x00019568) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00024e5d) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00024e5d) popup_imed_adjust2_window_g

0x3f58,	// (0x00019574) popup_imed_adjust2_window_t1_ParamLimits

0x3f70,	// (0x0001958c) slider_imed_adjust_pane_ParamLimits

0x3f84,	// (0x000195a0) slider_imed_adjust_pane_g1_ParamLimits

0x3f94,	// (0x000195b0) slider_imed_adjust_pane_g2_ParamLimits

0x3fa4,	// (0x000195c0) slider_imed_adjust_pane_g3_ParamLimits

0x3fb5,	// (0x000195d1) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00024e64) slider_imed_adjust_pane_g_ParamLimits

0x7d97,	// (0x0001d3b3) aid_touch_area_cam4_ParamLimits

0x7d97,	// (0x0001d3b3) aid_touch_area_cam4

0x7da7,	// (0x0001d3c3) battery_pane_cp01

0x7e2e,	// (0x0001d44a) main_camera4_pane_g6_ParamLimits

0x7e2e,	// (0x0001d44a) main_camera4_pane_g6

0x7e4c,	// (0x0001d468) main_camera4_pane_t2_ParamLimits

0x7e4c,	// (0x0001d468) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00024f67) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00024f67) main_camera4_pane_t

0x7ebb,	// (0x0001d4d7) aid_touch_area_vid4_ParamLimits

0x7ebb,	// (0x0001d4d7) aid_touch_area_vid4

0x7efb,	// (0x0001d517) main_video4_pane_g5_ParamLimits

0x7efb,	// (0x0001d517) main_video4_pane_g5

0x7f1d,	// (0x0001d539) vid4_progress_pane_ParamLimits

0x7f1d,	// (0x0001d539) vid4_progress_pane

0x4872,	// (0x00019e8e) main_cset_slider_pane_g18_ParamLimits

0x4872,	// (0x00019e8e) main_cset_slider_pane_g18

0x4aef,	// (0x0001a10b) cell_cam4_burst_pane_g2_ParamLimits

0x4aef,	// (0x0001a10b) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x000250b7) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x000250b7) cell_cam4_burst_pane_g

0xd06b,	// (0x00022687) bg_cl_pane_ParamLimits

0xd06b,	// (0x00022687) bg_cl_pane

0xd077,	// (0x00022693) cl_header_pane_ParamLimits

0xd077,	// (0x00022693) cl_header_pane

0xd083,	// (0x0002269f) cl_listscroll_pane_ParamLimits

0xd083,	// (0x0002269f) cl_listscroll_pane

0x4ccd,	// (0x0001a2e9) bg_cl_pane_g1

0x4cd5,	// (0x0001a2f1) bg_cl_pane_g2

0x4cdd,	// (0x0001a2f9) bg_cl_pane_g3

0x4ce5,	// (0x0001a301) bg_cl_pane_g4

0x4ced,	// (0x0001a309) bg_cl_pane_g5

0x4cf5,	// (0x0001a311) bg_cl_pane_g6

0x4cfd,	// (0x0001a319) bg_cl_pane_g7

0x4d05,	// (0x0001a321) bg_cl_pane_g8

0x4d0d,	// (0x0001a329) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x000250f2) bg_cl_pane_g

0xd08f,	// (0x000226ab) aid_height_cl_leading_ParamLimits

0xd08f,	// (0x000226ab) aid_height_cl_leading

0xd09b,	// (0x000226b7) aid_height_cl_text_ParamLimits

0xd09b,	// (0x000226b7) aid_height_cl_text

0x3d26,	// (0x00019342) bg_cl_header_pane_ParamLimits

0x3d26,	// (0x00019342) bg_cl_header_pane

0xd0b3,	// (0x000226cf) cl_header_pane_g1_ParamLimits

0xd0b3,	// (0x000226cf) cl_header_pane_g1

0xd0c0,	// (0x000226dc) cl_header_pane_t1_ParamLimits

0xd0c0,	// (0x000226dc) cl_header_pane_t1

0x4d15,	// (0x0001a331) cl_list_pane

0x4845,	// (0x00019e61) hc_scroll_pane_cp01

0x180c,	// (0x00016e28) bg_cl_header_pane_g1

0x472b,	// (0x00019d47) bg_cl_header_pane_g2

0x182c,	// (0x00016e48) bg_cl_header_pane_g3

0x473b,	// (0x00019d57) bg_cl_header_pane_g4

0x4733,	// (0x00019d4f) bg_cl_header_pane_g5

0x49d0,	// (0x00019fec) bg_cl_header_pane_g6

0x4753,	// (0x00019d6f) bg_cl_header_pane_g7

0x475b,	// (0x00019d77) bg_cl_header_pane_g8

0x474b,	// (0x00019d67) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00025105) bg_cl_header_pane_g

0xd0d2,	// (0x000226ee) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd0d2,	// (0x000226ee) hc_cl_list_double_graphic_heading_pane

0xd0e3,	// (0x000226ff) hc_cl_list_single_graphic_pane_ParamLimits

0xd0e3,	// (0x000226ff) hc_cl_list_single_graphic_pane

0xd0fc,	// (0x00022718) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0fc,	// (0x00022718) hc_cl_list_single_graphic_pane_g1

0xd108,	// (0x00022724) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd108,	// (0x00022724) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00025118) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00025118) hc_cl_list_single_graphic_pane_g

0xd11c,	// (0x00022738) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd11c,	// (0x00022738) hc_cl_list_single_graphic_pane_t1

0xd0fc,	// (0x00022718) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0fc,	// (0x00022718) hc_cl_list_double_graphic_heading_pane_g1

0xd131,	// (0x0002274d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd131,	// (0x0002274d) hc_cl_list_double_graphic_heading_pane_g2

0xd145,	// (0x00022761) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd145,	// (0x00022761) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0002511d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0002511d) hc_cl_list_double_graphic_heading_pane_g

0xd159,	// (0x00022775) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd159,	// (0x00022775) hc_cl_list_double_graphic_heading_pane_t1

0xd16e,	// (0x0002278a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd16e,	// (0x0002278a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00025124) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00025124) hc_cl_list_double_graphic_heading_pane_t

0x8447,	// (0x0001da63) vid4_progress_pane_g1

0x8453,	// (0x0001da6f) vid4_progress_pane_g2

0x845f,	// (0x0001da7b) vid4_progress_pane_g3

0x846e,	// (0x0001da8a) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00025129) vid4_progress_pane_g

0x848c,	// (0x0001daa8) vid4_progress_pane_t1

0x84a2,	// (0x0001dabe) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00025134) vid4_progress_pane_t

0x84cd,	// (0x0001dae9) wait_bar_pane_cp07

0x37ff,	// (0x00018e1b) blid_firmament_pane_ParamLimits

0x3842,	// (0x00018e5e) popup_blid_sat_info2_window_g1

0x3866,	// (0x00018e82) popup_blid_sat_info2_window_t3

0x3874,	// (0x00018e90) popup_blid_sat_info2_window_t4

0x3882,	// (0x00018e9e) popup_blid_sat_info2_window_t5

0x3890,	// (0x00018eac) popup_blid_sat_info2_window_t6

0x38a0,	// (0x00018ebc) popup_blid_sat_info2_window_t7

0x38ae,	// (0x00018eca) popup_blid_sat_info2_window_t8

0x38bc,	// (0x00018ed8) popup_blid_sat_info2_window_t9

0x38ca,	// (0x00018ee6) popup_blid_sat_info2_window_t10

0x398c,	// (0x00018fa8) aid_firma_cardinal_ParamLimits

0x39a0,	// (0x00018fbc) blid_firmament_pane_t1_ParamLimits

0x39b7,	// (0x00018fd3) blid_firmament_pane_t2_ParamLimits

0x39ce,	// (0x00018fea) blid_firmament_pane_t3_ParamLimits

0x39e5,	// (0x00019001) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00024d56) blid_firmament_pane_t_ParamLimits

0x39fc,	// (0x00019018) blid_sat_info_pane_ParamLimits

0x0b45,	// (0x00016161) main_cam_set_pane_ParamLimits

0xc189,	// (0x000217a5) aid_size_cell_colour_35_ParamLimits

0xc1a3,	// (0x000217bf) aid_size_cell_colour_112_ParamLimits

0xc1ba,	// (0x000217d6) aid_size_cell_effect_ParamLimits

0x0b45,	// (0x00016161) bg_tb_trans_pane_cp02_ParamLimits

0x3d34,	// (0x00019350) heading_imed_pane_ParamLimits

0xc1d4,	// (0x000217f0) listscroll_imed_pane_ParamLimits

0x2b38,	// (0x00018154) popup_call2_audio_first_window_g5_ParamLimits

0x2b38,	// (0x00018154) popup_call2_audio_first_window_g5

0x7c22,	// (0x0001d23e) aid_size_touch_image3_arrow_left_ParamLimits

0x7c22,	// (0x0001d23e) aid_size_touch_image3_arrow_left

0x7c38,	// (0x0001d254) aid_size_touch_image3_arrow_right_ParamLimits

0x7c38,	// (0x0001d254) aid_size_touch_image3_arrow_right

0x84b8,	// (0x0001dad4) vid4_progress_pane_t3

0xc471,	// (0x00021a8d) main_hwr_training_symbol_option_pane_ParamLimits

0xc471,	// (0x00021a8d) main_hwr_training_symbol_option_pane

0x421e,	// (0x0001983a) popup_hwr_training_preview_window_ParamLimits

0x421e,	// (0x0001983a) popup_hwr_training_preview_window

0x794a,	// (0x0001cf66) hwr_training_navi_pane_g5_ParamLimits

0x794a,	// (0x0001cf66) hwr_training_navi_pane_g5

0x4719,	// (0x00019d35) popup_char_count_window

0x8370,	// (0x0001d98c) bg_popup_sub_pane_cp20_ParamLimits

0x837e,	// (0x0001d99a) list_vitu2_match_list_pane_ParamLimits

0x838a,	// (0x0001d9a6) vitu2_page_scroll_pane_ParamLimits

0x838a,	// (0x0001d9a6) vitu2_page_scroll_pane

0x4e16,	// (0x0001a432) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4e16,	// (0x0001a432) list_single_hwr_training_symbol_option_pane

0x4e29,	// (0x0001a445) list_single_hwr_training_symbol_option_pane_g1

0x4e31,	// (0x0001a44d) list_single_hwr_training_symbol_option_pane_t1

0x4e3f,	// (0x0001a45b) bg_button_pane_cp023

0x4e48,	// (0x0001a464) bg_button_pane_cp024

0xd183,	// (0x0002279f) vitu2_page_scroll_pane_g1

0xd18b,	// (0x000227a7) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0002513b) vitu2_page_scroll_pane_g

0xd193,	// (0x000227af) vitu2_page_scroll_pane_t1

0x4e7b,	// (0x0001a497) popup_char_count_window_g1

0x4e84,	// (0x0001a4a0) popup_char_count_window_g2

0x4e8d,	// (0x0001a4a9) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x00025140) popup_char_count_window_g

0x4e96,	// (0x0001a4b2) popup_char_count_window_t1

0x0ad5,	// (0x000160f1) main_vded2_pane

0x3f1d,	// (0x00019539) aid_size_cell_imed_line

0x3f27,	// (0x00019543) grid_imed_line_width_pane

0x7f7f,	// (0x0001d59b) vid4_indicators_pane_g4

0x4ea4,	// (0x0001a4c0) cell_imed_line_width_pane_ParamLimits

0x4ea4,	// (0x0001a4c0) cell_imed_line_width_pane

0x4eb8,	// (0x0001a4d4) cell_imed_line_width_pane_g1

0x4ec1,	// (0x0001a4dd) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00025147) cell_imed_line_width_pane_g

0xd1a2,	// (0x000227be) main_vded2_pane_g1_ParamLimits

0xd1a2,	// (0x000227be) main_vded2_pane_g1

0xd1af,	// (0x000227cb) main_vded2_pane_g2_ParamLimits

0xd1af,	// (0x000227cb) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0002514c) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0002514c) main_vded2_pane_g

0xd1bd,	// (0x000227d9) vded2_slider_pane_ParamLimits

0xd1bd,	// (0x000227d9) vded2_slider_pane

0xd1ca,	// (0x000227e6) aid_size_touch_vded2_end

0xd1d4,	// (0x000227f0) aid_size_touch_vded2_playhead

0x4ec9,	// (0x0001a4e5) aid_size_touch_vded2_start

0x4ed1,	// (0x0001a4ed) vded2_slider_bg_pane

0x4eda,	// (0x0001a4f6) vded2_slider_pane_g1

0x4ee3,	// (0x0001a4ff) vded2_slider_pane_g2

0xd1dc,	// (0x000227f8) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x00025151) vded2_slider_pane_g

0x4eeb,	// (0x0001a507) vded2_slider_bg_pane_g1

0x4ef4,	// (0x0001a510) vded2_slider_bg_pane_g2

0x4efd,	// (0x0001a519) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00025158) vded2_slider_bg_pane_g

0xa913,	// (0x0001ff2f) aid_postcard_touch_down_pane_ParamLimits

0xa913,	// (0x0001ff2f) aid_postcard_touch_down_pane

0xa923,	// (0x0001ff3f) aid_postcard_touch_up_pane_ParamLimits

0xa923,	// (0x0001ff3f) aid_postcard_touch_up_pane

0x0ad5,	// (0x000160f1) main_blid2_pane

0x3514,	// (0x00018b30) popup_blid2_search_window

0x0ad5,	// (0x000160f1) blid2_gps_pane

0x0ad5,	// (0x000160f1) blid2_navig_pane

0x0ad5,	// (0x000160f1) blid2_search_pane

0x0ad5,	// (0x000160f1) blid2_tripm_pane

0xd1e5,	// (0x00022801) blid2_search_pane_g1_ParamLimits

0xd1e5,	// (0x00022801) blid2_search_pane_g1

0xd1f5,	// (0x00022811) blid2_search_pane_t1_ParamLimits

0xd1f5,	// (0x00022811) blid2_search_pane_t1

0xd207,	// (0x00022823) aid_size_cell_blid2_gps_ParamLimits

0xd207,	// (0x00022823) aid_size_cell_blid2_gps

0xd217,	// (0x00022833) blid2_gps_pane_g1_ParamLimits

0xd217,	// (0x00022833) blid2_gps_pane_g1

0xd223,	// (0x0002283f) grid_blid2_satellite_pane_ParamLimits

0xd223,	// (0x0002283f) grid_blid2_satellite_pane

0xd233,	// (0x0002284f) blid2_navig_pane_g1_ParamLimits

0xd233,	// (0x0002284f) blid2_navig_pane_g1

0xd23f,	// (0x0002285b) blid2_navig_pane_t1_ParamLimits

0xd23f,	// (0x0002285b) blid2_navig_pane_t1

0xd251,	// (0x0002286d) blid2_navig_pane_t2_ParamLimits

0xd251,	// (0x0002286d) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0002515f) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0002515f) blid2_navig_pane_t

0xd263,	// (0x0002287f) blid2_navig_ring_pane_ParamLimits

0xd263,	// (0x0002287f) blid2_navig_ring_pane

0xd273,	// (0x0002288f) blid2_speed_pane_ParamLimits

0xd273,	// (0x0002288f) blid2_speed_pane

0xd27f,	// (0x0002289b) blid2_tripm_pane_g1_ParamLimits

0xd27f,	// (0x0002289b) blid2_tripm_pane_g1

0xd28f,	// (0x000228ab) blid2_tripm_pane_g2_ParamLimits

0xd28f,	// (0x000228ab) blid2_tripm_pane_g2

0xd29b,	// (0x000228b7) blid2_tripm_pane_g3_ParamLimits

0xd29b,	// (0x000228b7) blid2_tripm_pane_g3

0xd2a7,	// (0x000228c3) blid2_tripm_pane_g4_ParamLimits

0xd2a7,	// (0x000228c3) blid2_tripm_pane_g4

0xd2b3,	// (0x000228cf) blid2_tripm_pane_g5_ParamLimits

0xd2b3,	// (0x000228cf) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00025164) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00025164) blid2_tripm_pane_g

0xd2cf,	// (0x000228eb) blid2_tripm_pane_t1_ParamLimits

0xd2cf,	// (0x000228eb) blid2_tripm_pane_t1

0xd2e3,	// (0x000228ff) blid2_tripm_pane_t2_ParamLimits

0xd2e3,	// (0x000228ff) blid2_tripm_pane_t2

0xd2f5,	// (0x00022911) blid2_tripm_pane_t3_ParamLimits

0xd2f5,	// (0x00022911) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x00025171) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x00025171) blid2_tripm_pane_t

0xd327,	// (0x00022943) cell_blid2_satellite_pane_ParamLimits

0xd327,	// (0x00022943) cell_blid2_satellite_pane

0xd341,	// (0x0002295d) cell_blid2_satellite_pane_g1

0x4f06,	// (0x0001a522) cell_blid2_satellite_pane_t1

0x3a0c,	// (0x00019028) blid2_speed_pane_g1

0x4f14,	// (0x0001a530) blid2_speed_pane_t1

0x4f22,	// (0x0001a53e) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0002517a) blid2_speed_pane_t

0x3a0c,	// (0x00019028) blid2_navig_ring_pane_g1

0xd34a,	// (0x00022966) blid2_navig_ring_pane_g2

0xd352,	// (0x0002296e) blid2_navig_ring_pane_g3

0xd35a,	// (0x00022976) blid2_navig_ring_pane_g4

0xd362,	// (0x0002297e) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0002517f) blid2_navig_ring_pane_g

0x0ad5,	// (0x000160f1) bg_popup_window_pane_cp011

0x4f30,	// (0x0001a54c) popup_blid2_search_window_g1

0x4f38,	// (0x0001a554) popup_blid2_search_window_t1

0x4f46,	// (0x0001a562) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0002518a) popup_blid2_search_window_t

0x171b,	// (0x00016d37) main_browser_pane_g1

0x12ba,	// (0x000168d6) main_browser_pane_ParamLimits

0x7f49,	// (0x0001d565) bg_button_pane_cp011_ParamLimits

0x8292,	// (0x0001d8ae) cell_vitu2_function_pane_g1_ParamLimits

0x0b45,	// (0x00016161) bg_popup_sub_pane_cp22_ParamLimits

0xcdbe,	// (0x000223da) input_focus_pane_cp08_ParamLimits

0xcdcb,	// (0x000223e7) popup_vitu2_query_button_pane_ParamLimits

0xcdcb,	// (0x000223e7) popup_vitu2_query_button_pane

0xcda0,	// (0x000223bc) popup_vitu2_query_input_button_pane

0x4a45,	// (0x0001a061) popup_vitu2_query_window_g1_ParamLimits

0xcddc,	// (0x000223f8) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00025091) popup_vitu2_query_window_g_ParamLimits

0x0ad5,	// (0x000160f1) bg_button_pane_cp026

0xd36a,	// (0x00022986) popup_vitu2_query_input_button_pane_g1

0x0ad5,	// (0x000160f1) bg_button_pane_cp025

0x4f54,	// (0x0001a570) popup_vitu2_query_button_pane_t1

0xb76b,	// (0x00020d87) main_mp3_pane_t6

0xb77b,	// (0x00020d97) popup_slider_window_cp01

0x7e6c,	// (0x0001d488) cam4_battery_pane

0x7f57,	// (0x0001d573) cam4_battery_pane_cp02

0x8435,	// (0x0001da51) cam4_battery_pane_cp01

0x843f,	// (0x0001da5b) cam4_battery_pane_cp03

0x4f62,	// (0x0001a57e) cam4_battery_pane_g1

0x3a0c,	// (0x00019028) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0002518f) cam4_battery_pane_g

0x38d8,	// (0x00018ef4) popup_blid_sat_info2_window_t11

0xa2bd,	// (0x0001f8d9) aid_size_touch_mv_arrow_left_ParamLimits

0xa2e6,	// (0x0001f902) aid_size_touch_mv_arrow_right_ParamLimits

0x1fa9,	// (0x000175c5) navi_pane_g1_ParamLimits

0xa30f,	// (0x0001f92b) navi_pane_g2_ParamLimits

0xa33d,	// (0x0001f959) navi_pane_g3_ParamLimits

0xf44c,	// (0x00024a68) navi_pane_g_ParamLimits

0xa397,	// (0x0001f9b3) navi_pane_mv_t1_ParamLimits

0xc1e0,	// (0x000217fc) grid_imed_effect_pane_ParamLimits

0x1664,	// (0x00016c80) aid_placing_vt_slider_lsc

0x166c,	// (0x00016c88) aid_placing_vt_slider_prt

0x0b45,	// (0x00016161) bg_tb_trans_pane_cp01_ParamLimits

0x3b98,	// (0x000191b4) popup_image_details_window_g1_ParamLimits

0x3bab,	// (0x000191c7) popup_image_details_window_g2_ParamLimits

0x3bc0,	// (0x000191dc) popup_image_details_window_g3_ParamLimits

0x3bc0,	// (0x000191dc) popup_image_details_window_g3

0xf77f,	// (0x00024d9b) popup_image_details_window_g_ParamLimits

0x3bd4,	// (0x000191f0) popup_image_details_window_t1_ParamLimits

0x3be6,	// (0x00019202) popup_image_details_window_t2_ParamLimits

0x3bff,	// (0x0001921b) popup_image_details_window_t3_ParamLimits

0x3c13,	// (0x0001922f) popup_image_details_window_t4_ParamLimits

0x3c2e,	// (0x0001924a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00024da2) popup_image_details_window_t_ParamLimits

0xd0a7,	// (0x000226c3) cl_header_name_pane_ParamLimits

0xd0a7,	// (0x000226c3) cl_header_name_pane

0xd372,	// (0x0002298e) cl_header_name_pane_t1_ParamLimits

0xd372,	// (0x0002298e) cl_header_name_pane_t1

0xd389,	// (0x000229a5) cl_header_name_pane_t2_ParamLimits

0xd389,	// (0x000229a5) cl_header_name_pane_t2

0xd3b3,	// (0x000229cf) cl_header_name_pane_t3_ParamLimits

0xd3b3,	// (0x000229cf) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00025194) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00025194) cl_header_name_pane_t

0xa368,	// (0x0001f984) navi_pane_mv_g2_ParamLimits

0x46b9,	// (0x00019cd5) field_vitu2_entry_pane_g1_ParamLimits

0x46c5,	// (0x00019ce1) field_vitu2_entry_pane_g2_ParamLimits

0x46d1,	// (0x00019ced) field_vitu2_entry_pane_g3_ParamLimits

0x46d1,	// (0x00019ced) field_vitu2_entry_pane_g3

0xf974,	// (0x00024f90) field_vitu2_entry_pane_g_ParamLimits

0x8167,	// (0x0001d783) cell_vitu2_itu_pane_g1_ParamLimits

0x8177,	// (0x0001d793) cell_vitu2_itu_pane_g2_ParamLimits

0x8177,	// (0x0001d793) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00024f9c) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00024f9c) cell_vitu2_itu_pane_g

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp05_ParamLimits

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp05

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp03

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp04

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp10_ParamLimits

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp10

0xd049,	// (0x00022665) bg_vkb2_func_pane_cp08

0xd02f,	// (0x0002264b) bg_vkb2_func_pane_cp06

0xd03d,	// (0x00022659) bg_vkb2_func_pane_cp07

0x4e51,	// (0x0001a46d) bg_vkb2_func_pane_cp11_ParamLimits

0x4e51,	// (0x0001a46d) bg_vkb2_func_pane_cp11

0x4e66,	// (0x0001a482) bg_vkb2_func_pane_cp12_ParamLimits

0x4e66,	// (0x0001a482) bg_vkb2_func_pane_cp12

0x0ad5,	// (0x000160f1) bg_vkb2_func_pane_cp09

0x472b,	// (0x00019d47) bg_vkb2_func_pane_g1

0x182c,	// (0x00016e48) bg_vkb2_func_pane_g2

0x4733,	// (0x00019d4f) bg_vkb2_func_pane_g3

0x473b,	// (0x00019d57) bg_vkb2_func_pane_g4

0x49d0,	// (0x00019fec) bg_vkb2_func_pane_g5

0x4753,	// (0x00019d6f) bg_vkb2_func_pane_g6

0x475b,	// (0x00019d77) bg_vkb2_func_pane_g7

0x474b,	// (0x00019d67) bg_vkb2_func_pane_g8

0x180c,	// (0x00016e28) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0002519b) bg_vkb2_func_pane_g

0xd2c1,	// (0x000228dd) blid2_tripm_pane_g6_ParamLimits

0xd2c1,	// (0x000228dd) blid2_tripm_pane_g6

0x44e5,	// (0x00019b01) mp4_progress_pane_g1

0xd31b,	// (0x00022937) blid2_tripm_values_pane_ParamLimits

0xd31b,	// (0x00022937) blid2_tripm_values_pane

0xd3d8,	// (0x000229f4) blid2_tripm_values_pane_t1

0xd3e6,	// (0x00022a02) blid2_tripm_values_pane_t2

0xd3f4,	// (0x00022a10) blid2_tripm_values_pane_t3

0xd402,	// (0x00022a1e) blid2_tripm_values_pane_t4

0xd410,	// (0x00022a2c) blid2_tripm_values_pane_t5

0xd41e,	// (0x00022a3a) blid2_tripm_values_pane_t6

0xd42c,	// (0x00022a48) blid2_tripm_values_pane_t7

0xd43a,	// (0x00022a56) blid2_tripm_values_pane_t8

0xd448,	// (0x00022a64) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x000251ae) blid2_tripm_values_pane_t

0x9286,	// (0x0001e8a2) call_video_pane_t1_ParamLimits

0x92a0,	// (0x0001e8bc) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x000248f1) call_video_pane_t_ParamLimits

0xa8b1,	// (0x0001fecd) msg_header_pane_g1_ParamLimits

0x21ec,	// (0x00017808) msg_header_pane_g2_ParamLimits

0x21ec,	// (0x00017808) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00024b0b) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00024b0b) msg_header_pane_g

0x12ba,	// (0x000168d6) main_clock2_pane_ParamLimits

0xbfe8,	// (0x00021604) grid_clock2_toolbar_pane_ParamLimits

0xbfe8,	// (0x00021604) grid_clock2_toolbar_pane

0xbfe8,	// (0x00021604) listscroll_clock2_pane_ParamLimits

0xbfe8,	// (0x00021604) listscroll_clock2_pane

0xc095,	// (0x000216b1) main_clock2_pane_t3_ParamLimits

0xc095,	// (0x000216b1) main_clock2_pane_t3

0xc0a7,	// (0x000216c3) main_clock2_pane_t4_ParamLimits

0xc0a7,	// (0x000216c3) main_clock2_pane_t4

0x4f6c,	// (0x0001a588) cell_clock2_toolbar_pane

0x4f74,	// (0x0001a590) cell_clock2_toolbar_pane_cp01

0x4f74,	// (0x0001a590) cell_clock2_toolbar_pane_cp02

0x4f7c,	// (0x0001a598) cell_clock2_toolbar_pane_cp03

0x4f84,	// (0x0001a5a0) list_clock2_pane

0x1f00,	// (0x0001751c) scroll_pane_cp10

0x4f8c,	// (0x0001a5a8) list_single_clock2_pane_ParamLimits

0x4f8c,	// (0x0001a5a8) list_single_clock2_pane

0x2049,	// (0x00017665) list_highlight_pane_cp08

0x4f99,	// (0x0001a5b5) list_single_clock2_pane_t1

0x4fa7,	// (0x0001a5c3) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x000251c1) list_single_clock2_pane_t

0x0ad5,	// (0x000160f1) bg_button_pane_cp10

0x4fb5,	// (0x0001a5d1) cell_clock2_toolbar_pane_g1

0x7556,	// (0x0001cb72) aid_main_viewer_pane_g1_ParamLimits

0x7556,	// (0x0001cb72) aid_main_viewer_pane_g1

0x7562,	// (0x0001cb7e) aid_main_viewer_pane_g2_ParamLimits

0x7562,	// (0x0001cb7e) aid_main_viewer_pane_g2

0xa8cf,	// (0x0001feeb) aid_main_viewer_pane_g3_ParamLimits

0xa8cf,	// (0x0001feeb) aid_main_viewer_pane_g3

0xa8e0,	// (0x0001fefc) aid_main_viewer_pane_g4_ParamLimits

0xa8e0,	// (0x0001fefc) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00024b1c) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00024b1c) aid_main_viewer_pane_g

0xb01e,	// (0x0002063a) main_calc_pane_ParamLimits

0xb02b,	// (0x00020647) main_dialer2_pane_ParamLimits

0x0ad5,	// (0x000160f1) main_cam6_pane

0x0ad5,	// (0x000160f1) main_vid6_pane

0xbff4,	// (0x00021610) listscroll_gen_pane_cp06_ParamLimits

0xbff4,	// (0x00021610) listscroll_gen_pane_cp06

0xc0b9,	// (0x000216d5) main_clock2_pane_t5_ParamLimits

0xc0b9,	// (0x000216d5) main_clock2_pane_t5

0xc102,	// (0x0002171e) aid_call2_pane_cp10_ParamLimits

0xc114,	// (0x00021730) aid_call_pane_cp10_ParamLimits

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc126,	// (0x00021742) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc126,	// (0x00021742) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1f7e,	// (0x0001759a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00024e52) popup_clock_analogue_window_cp10_g_ParamLimits

0xc138,	// (0x00021754) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc543,	// (0x00021b5f) cell_dialer2_keypad_pane_g2_ParamLimits

0xc543,	// (0x00021b5f) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00024f38) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00024f38) cell_dialer2_keypad_pane_g

0xc55f,	// (0x00021b7b) cell_dialer2_keypad_pane_t1

0xc949,	// (0x00021f65) main_cset_text2_pane_ParamLimits

0xc949,	// (0x00021f65) main_cset_text2_pane

0x4c25,	// (0x0001a241) area_vitu2_query_pane_g1_ParamLimits

0xcfce,	// (0x000225ea) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x000250de) area_vitu2_query_pane_g_ParamLimits

0x4ca9,	// (0x0001a2c5) area_vitu2_query_pane_t7_ParamLimits

0x4ca9,	// (0x0001a2c5) area_vitu2_query_pane_t7

0xd02f,	// (0x0002264b) bg_button_pane_cp018_ParamLimits

0xd03d,	// (0x00022659) bg_button_pane_cp021_ParamLimits

0xd049,	// (0x00022665) bg_button_pane_cp022_ParamLimits

0xd049,	// (0x00022665) bg_vkb2_func_pane_cp08_ParamLimits

0xd02f,	// (0x0002264b) bg_vkb2_func_pane_cp06_ParamLimits

0xd03d,	// (0x00022659) bg_vkb2_func_pane_cp07_ParamLimits

0xd05a,	// (0x00022676) input_focus_pane_cp09_ParamLimits

0x84dd,	// (0x0001daf9) cam6_autofocus_pane_ParamLimits

0x84dd,	// (0x0001daf9) cam6_autofocus_pane

0x84ff,	// (0x0001db1b) cam6_image_uncrop_pane_ParamLimits

0x84ff,	// (0x0001db1b) cam6_image_uncrop_pane

0x852c,	// (0x0001db48) cam6_indi_pane_ParamLimits

0x852c,	// (0x0001db48) cam6_indi_pane

0x8546,	// (0x0001db62) cam6_mode_pane_ParamLimits

0x8546,	// (0x0001db62) cam6_mode_pane

0x855a,	// (0x0001db76) cam6_timer_pane_ParamLimits

0x855a,	// (0x0001db76) cam6_timer_pane

0x8566,	// (0x0001db82) cam6_zoom_pane_ParamLimits

0x8566,	// (0x0001db82) cam6_zoom_pane

0xd456,	// (0x00022a72) cam6_mode_pane_g1_ParamLimits

0xd456,	// (0x00022a72) cam6_mode_pane_g1

0xd462,	// (0x00022a7e) cam6_mode_pane_g2_ParamLimits

0xd462,	// (0x00022a7e) cam6_mode_pane_g2

0xd46e,	// (0x00022a8a) cam6_mode_pane_g3_ParamLimits

0xd46e,	// (0x00022a8a) cam6_mode_pane_g3

0xd47a,	// (0x00022a96) cam6_mode_pane_g4_ParamLimits

0xd47a,	// (0x00022a96) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x000251c6) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x000251c6) cam6_mode_pane_g

0x4fcb,	// (0x0001a5e7) bg_tb_trans_pane_cp08_ParamLimits

0x4fcb,	// (0x0001a5e7) bg_tb_trans_pane_cp08

0x4fd9,	// (0x0001a5f5) cam6_battery_pane_ParamLimits

0x4fd9,	// (0x0001a5f5) cam6_battery_pane

0x4fef,	// (0x0001a60b) cam6_indi_pane_g1_ParamLimits

0x4fef,	// (0x0001a60b) cam6_indi_pane_g1

0x5001,	// (0x0001a61d) cam6_indi_pane_g2_ParamLimits

0x5001,	// (0x0001a61d) cam6_indi_pane_g2

0x5013,	// (0x0001a62f) cam6_indi_pane_g3_ParamLimits

0x5013,	// (0x0001a62f) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x000251cf) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x000251cf) cam6_indi_pane_g

0x5025,	// (0x0001a641) cam6_indi_pane_t1_ParamLimits

0x5025,	// (0x0001a641) cam6_indi_pane_t1

0xc67a,	// (0x00021c96) cam6_autofocus_pane_g1

0xc672,	// (0x00021c8e) cam6_autofocus_pane_g2

0xc68a,	// (0x00021ca6) cam6_autofocus_pane_g3

0xc682,	// (0x00021c9e) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x000251d6) cam6_autofocus_pane_g

0x504b,	// (0x0001a667) cam6_timer_pane_g1

0x5053,	// (0x0001a66f) cam6_timer_pane_t1

0x5061,	// (0x0001a67d) cam6_zoom_cont_pane

0x5069,	// (0x0001a685) cam6_zoom_pane_g1

0x5071,	// (0x0001a68d) cam6_zoom_pane_g2

0xd486,	// (0x00022aa2) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x000251df) cam6_zoom_pane_g

0x3a0c,	// (0x00019028) cam6_battery_pane_g1

0x3a0c,	// (0x00019028) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00024d5f) cam6_battery_pane_g

0x5079,	// (0x0001a695) cam6_zoom_cont_pane_g1

0x5082,	// (0x0001a69e) cam6_zoom_cont_pane_g2

0x508b,	// (0x0001a6a7) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x000251e6) cam6_zoom_cont_pane_g

0xd4a3,	// (0x00022abf) cam6_mode_pane_cp_ParamLimits

0xd4a3,	// (0x00022abf) cam6_mode_pane_cp

0xd4b7,	// (0x00022ad3) cam6_zoom_pane_cp_ParamLimits

0xd4b7,	// (0x00022ad3) cam6_zoom_pane_cp

0xd4cf,	// (0x00022aeb) vid6_image_uncrop_cif_pane_ParamLimits

0xd4cf,	// (0x00022aeb) vid6_image_uncrop_cif_pane

0xd4fb,	// (0x00022b17) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4fb,	// (0x00022b17) vid6_image_uncrop_nhd_pane

0xd518,	// (0x00022b34) vid6_image_uncrop_vga_pane_ParamLimits

0xd518,	// (0x00022b34) vid6_image_uncrop_vga_pane

0xd537,	// (0x00022b53) vid6_image_uncrop_wvga_pane_ParamLimits

0xd537,	// (0x00022b53) vid6_image_uncrop_wvga_pane

0xd554,	// (0x00022b70) vid6_indi_pane_ParamLimits

0xd554,	// (0x00022b70) vid6_indi_pane

0x4fcb,	// (0x0001a5e7) bg_tb_trans_pane_cp09_ParamLimits

0x4fcb,	// (0x0001a5e7) bg_tb_trans_pane_cp09

0x50b9,	// (0x0001a6d5) cam6_battery_pane_cp_ParamLimits

0x50b9,	// (0x0001a6d5) cam6_battery_pane_cp

0x50c5,	// (0x0001a6e1) vid6_indi_pane_g1_ParamLimits

0x50c5,	// (0x0001a6e1) vid6_indi_pane_g1

0x50d7,	// (0x0001a6f3) vid6_indi_pane_g2_ParamLimits

0x50d7,	// (0x0001a6f3) vid6_indi_pane_g2

0x50e9,	// (0x0001a705) vid6_indi_pane_g3_ParamLimits

0x50e9,	// (0x0001a705) vid6_indi_pane_g3

0x50fe,	// (0x0001a71a) vid6_indi_pane_g4_ParamLimits

0x50fe,	// (0x0001a71a) vid6_indi_pane_g4

0x5113,	// (0x0001a72f) vid6_indi_pane_g5_ParamLimits

0x5113,	// (0x0001a72f) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x000251ed) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x000251ed) vid6_indi_pane_g

0x512d,	// (0x0001a749) vid6_indi_pane_t1_ParamLimits

0x512d,	// (0x0001a749) vid6_indi_pane_t1

0x5143,	// (0x0001a75f) vid6_indi_pane_t2_ParamLimits

0x5143,	// (0x0001a75f) vid6_indi_pane_t2

0x516b,	// (0x0001a787) vid6_indi_pane_t3_ParamLimits

0x516b,	// (0x0001a787) vid6_indi_pane_t3

0x5193,	// (0x0001a7af) vid6_indi_pane_t4_ParamLimits

0x5193,	// (0x0001a7af) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x000251f8) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x000251f8) vid6_indi_pane_t

0x51b7,	// (0x0001a7d3) wait_bar_pane_cp08

0xd579,	// (0x00022b95) main_cset_text2_pane_t1_ParamLimits

0xd579,	// (0x00022b95) main_cset_text2_pane_t1

0xd48e,	// (0x00022aaa) listscroll_gen_pane_cp06_t1_ParamLimits

0xd48e,	// (0x00022aaa) listscroll_gen_pane_cp06_t1

0x0ad5,	// (0x000160f1) main_cam6_set_pane

0x7e5e,	// (0x0001d47a) bg_tb_trans_pane_cp06_ParamLimits

0x7e74,	// (0x0001d490) cam4_indicators_pane_g1_ParamLimits

0x7e81,	// (0x0001d49d) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00024f6c) cam4_indicators_pane_g_ParamLimits

0x7ea1,	// (0x0001d4bd) cam4_indicators_pane_t1_ParamLimits

0x7f49,	// (0x0001d565) bg_tb_trans_pane_cp07_ParamLimits

0x7e74,	// (0x0001d490) vid4_indicators_pane_g1_ParamLimits

0x7f61,	// (0x0001d57d) vid4_indicators_pane_g2_ParamLimits

0x7f6e,	// (0x0001d58a) vid4_indicators_pane_g3_ParamLimits

0x7f7f,	// (0x0001d59b) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00024f7e) vid4_indicators_pane_g_ParamLimits

0x7f9b,	// (0x0001d5b7) vid4_indicators_pane_t1_ParamLimits

0x8447,	// (0x0001da63) vid4_progress_pane_g1_ParamLimits

0x8453,	// (0x0001da6f) vid4_progress_pane_g2_ParamLimits

0x845f,	// (0x0001da7b) vid4_progress_pane_g3_ParamLimits

0x846e,	// (0x0001da8a) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00025129) vid4_progress_pane_g_ParamLimits

0x848c,	// (0x0001daa8) vid4_progress_pane_t1_ParamLimits

0x84a2,	// (0x0001dabe) vid4_progress_pane_t2_ParamLimits

0x84b8,	// (0x0001dad4) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00025134) vid4_progress_pane_t_ParamLimits

0x84cd,	// (0x0001dae9) wait_bar_pane_cp07_ParamLimits

0xd5ac,	// (0x00022bc8) main_cam6_set_pane_g2_ParamLimits

0xd5ac,	// (0x00022bc8) main_cam6_set_pane_g2

0xd5b8,	// (0x00022bd4) main_cset6_listscroll_pane_ParamLimits

0xd5b8,	// (0x00022bd4) main_cset6_listscroll_pane

0xd5e3,	// (0x00022bff) main_cset6_slider_pane_ParamLimits

0xd5e3,	// (0x00022bff) main_cset6_slider_pane

0xd5ef,	// (0x00022c0b) main_cset6_text2_pane_ParamLimits

0xd5ef,	// (0x00022c0b) main_cset6_text2_pane

0x51c6,	// (0x0001a7e2) main_cset6_text_pane

0x51ce,	// (0x0001a7ea) main_cset_list_pane_copy1_ParamLimits

0x51ce,	// (0x0001a7ea) main_cset_list_pane_copy1

0x51de,	// (0x0001a7fa) scroll_pane_cp028_copy1

0xd602,	// (0x00022c1e) cset_list_set_pane_copy1

0xd615,	// (0x00022c31) aid_position_infowindow_above_copy1

0xd61d,	// (0x00022c39) aid_position_infowindow_below_copy1

0xd625,	// (0x00022c41) cset_list_set_pane_g1_copy1

0x491e,	// (0x00019f3a) cset_list_set_pane_g3_copy1_ParamLimits

0x491e,	// (0x00019f3a) cset_list_set_pane_g3_copy1

0x492d,	// (0x00019f49) cset_list_set_pane_t1_copy1_ParamLimits

0x492d,	// (0x00019f49) cset_list_set_pane_t1_copy1

0x0b45,	// (0x00016161) list_highlight_pane_cp021_copy1_ParamLimits

0x0b45,	// (0x00016161) list_highlight_pane_cp021_copy1

0x51e7,	// (0x0001a803) cset6_slider_pane_ParamLimits

0x51e7,	// (0x0001a803) cset6_slider_pane

0x5213,	// (0x0001a82f) main_cset6_slider_pane_g1_ParamLimits

0x5213,	// (0x0001a82f) main_cset6_slider_pane_g1

0xd62d,	// (0x00022c49) main_cset6_slider_pane_g2_ParamLimits

0xd62d,	// (0x00022c49) main_cset6_slider_pane_g2

0x523b,	// (0x0001a857) main_cset6_slider_pane_g3_ParamLimits

0x523b,	// (0x0001a857) main_cset6_slider_pane_g3

0xd655,	// (0x00022c71) main_cset6_slider_pane_g4_ParamLimits

0xd655,	// (0x00022c71) main_cset6_slider_pane_g4

0xd661,	// (0x00022c7d) main_cset6_slider_pane_g5_ParamLimits

0xd661,	// (0x00022c7d) main_cset6_slider_pane_g5

0x485a,	// (0x00019e76) main_cset6_slider_pane_g7_ParamLimits

0x485a,	// (0x00019e76) main_cset6_slider_pane_g7

0x4866,	// (0x00019e82) main_cset6_slider_pane_g8_ParamLimits

0x4866,	// (0x00019e82) main_cset6_slider_pane_g8

0xd66f,	// (0x00022c8b) main_cset6_slider_pane_g9_ParamLimits

0xd66f,	// (0x00022c8b) main_cset6_slider_pane_g9

0xd67b,	// (0x00022c97) main_cset6_slider_pane_g10_ParamLimits

0xd67b,	// (0x00022c97) main_cset6_slider_pane_g10

0xd687,	// (0x00022ca3) main_cset6_slider_pane_g11_ParamLimits

0xd687,	// (0x00022ca3) main_cset6_slider_pane_g11

0xd693,	// (0x00022caf) main_cset6_slider_pane_g12_ParamLimits

0xd693,	// (0x00022caf) main_cset6_slider_pane_g12

0xd69f,	// (0x00022cbb) main_cset6_slider_pane_g13_ParamLimits

0xd69f,	// (0x00022cbb) main_cset6_slider_pane_g13

0xd6ab,	// (0x00022cc7) main_cset6_slider_pane_g14_ParamLimits

0xd6ab,	// (0x00022cc7) main_cset6_slider_pane_g14

0xd6b7,	// (0x00022cd3) main_cset6_slider_pane_g15_ParamLimits

0xd6b7,	// (0x00022cd3) main_cset6_slider_pane_g15

0xd6cf,	// (0x00022ceb) main_cset6_slider_pane_g16_ParamLimits

0xd6cf,	// (0x00022ceb) main_cset6_slider_pane_g16

0xd6dd,	// (0x00022cf9) main_cset6_slider_pane_g17_ParamLimits

0xd6dd,	// (0x00022cf9) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x00025201) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x00025201) main_cset6_slider_pane_g

0x5247,	// (0x0001a863) main_cset6_slider_pane_t1_ParamLimits

0x5247,	// (0x0001a863) main_cset6_slider_pane_t1

0xd703,	// (0x00022d1f) main_cset6_slider_pane_t2_ParamLimits

0xd703,	// (0x00022d1f) main_cset6_slider_pane_t2

0xd72e,	// (0x00022d4a) main_cset6_slider_pane_t3_ParamLimits

0xd72e,	// (0x00022d4a) main_cset6_slider_pane_t3

0xd759,	// (0x00022d75) main_cset6_slider_pane_t4_ParamLimits

0xd759,	// (0x00022d75) main_cset6_slider_pane_t4

0xd784,	// (0x00022da0) main_cset6_slider_pane_t5_ParamLimits

0xd784,	// (0x00022da0) main_cset6_slider_pane_t5

0x5288,	// (0x0001a8a4) main_cset6_slider_pane_t7_ParamLimits

0x5288,	// (0x0001a8a4) main_cset6_slider_pane_t7

0xd7b1,	// (0x00022dcd) main_cset6_slider_pane_t8_ParamLimits

0xd7b1,	// (0x00022dcd) main_cset6_slider_pane_t8

0xd7d5,	// (0x00022df1) main_cset6_slider_pane_t9_ParamLimits

0xd7d5,	// (0x00022df1) main_cset6_slider_pane_t9

0xd7f9,	// (0x00022e15) main_cset6_slider_pane_t10_ParamLimits

0xd7f9,	// (0x00022e15) main_cset6_slider_pane_t10

0xd81d,	// (0x00022e39) main_cset6_slider_pane_t11_ParamLimits

0xd81d,	// (0x00022e39) main_cset6_slider_pane_t11

0x52be,	// (0x0001a8da) main_cset6_slider_pane_t14_ParamLimits

0x52be,	// (0x0001a8da) main_cset6_slider_pane_t14

0x52f7,	// (0x0001a913) main_cset6_slider_pane_t15_ParamLimits

0x52f7,	// (0x0001a913) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00025226) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00025226) main_cset6_slider_pane_t

0x4962,	// (0x00019f7e) cset_slider_pane_g1_copy1

0x496b,	// (0x00019f87) cset_slider_pane_g2_copy1

0x4974,	// (0x00019f90) cset_slider_pane_g3_copy1

0x0ad5,	// (0x000160f1) bg_popup_sub_pane_cp011_copy1

0x4a51,	// (0x0001a06d) main_cset_text_pane_g1_copy1

0x4a59,	// (0x0001a075) main_cset_text_pane_t1_copy1

0x4a67,	// (0x0001a083) main_cset_text_pane_t2_copy1

0x4a75,	// (0x0001a091) main_cset_text_pane_t3_copy1

0x4a83,	// (0x0001a09f) main_cset_text_pane_t4_copy1

0x4a91,	// (0x0001a0ad) main_cset_text_pane_t5_copy1

0x4a9f,	// (0x0001a0bb) main_cset_text_pane_t6_copy1

0x4aad,	// (0x0001a0c9) main_cset_text_pane_t7_copy1

0xd841,	// (0x00022e5d) main_cset_text2_pane_t1_copy1

0x0ad5,	// (0x000160f1) main_ncimui_pane

0xb06a,	// (0x00020686) popup_query_ncimui_window_ParamLimits

0xb06a,	// (0x00020686) popup_query_ncimui_window

0x3cdd,	// (0x000192f9) field_cale_ev2_pane_g4_ParamLimits

0x3cdd,	// (0x000192f9) field_cale_ev2_pane_g4

0xc4e3,	// (0x00021aff) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc4e3,	// (0x00021aff) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00024f13) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00024f13) cell_video_dialer_keypad_pane_g

0xc4fb,	// (0x00021b17) cell_video_dialer_keypad_pane_t1

0x0ad5,	// (0x000160f1) bg_popup_window_pane_cp012

0x1ddd,	// (0x000173f9) heading_pane_cp06

0x541f,	// (0x0001aa3b) ncim_query_content_pane

0x0ad5,	// (0x000160f1) bg_popup_heading_pane_cp01

0x5427,	// (0x0001aa43) ncim_heading_pane_t1

0x5435,	// (0x0001aa51) ncim_indicator_popup_pane

0x5447,	// (0x0001aa63) ncim_query_button_pane

0x545b,	// (0x0001aa77) ncim_query_content_pane_t1

0x546d,	// (0x0001aa89) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00025265) ncim_query_content_pane_t

0x54a7,	// (0x0001aac3) ncim_query_list_pane

0x54b9,	// (0x0001aad5) ncim_query_popup_pane

0x5435,	// (0x0001aa51) ncim_indicator_popup_pane_ParamLimits

0xd931,	// (0x00022f4d) ncim_query_content_pane_g1_ParamLimits

0xd931,	// (0x00022f4d) ncim_query_content_pane_g1

0x545b,	// (0x0001aa77) ncim_query_content_pane_t1_ParamLimits

0x546d,	// (0x0001aa89) ncim_query_content_pane_t2_ParamLimits

0xd93d,	// (0x00022f59) ncim_query_content_pane_t3_ParamLimits

0xd93d,	// (0x00022f59) ncim_query_content_pane_t3

0xd95a,	// (0x00022f76) ncim_query_content_pane_t4_ParamLimits

0xd95a,	// (0x00022f76) ncim_query_content_pane_t4

0xd977,	// (0x00022f93) ncim_query_content_pane_t5_ParamLimits

0xd977,	// (0x00022f93) ncim_query_content_pane_t5

0x547f,	// (0x0001aa9b) ncim_query_content_pane_t6_ParamLimits

0x547f,	// (0x0001aa9b) ncim_query_content_pane_t6

0xfc49,	// (0x00025265) ncim_query_content_pane_t_ParamLimits

0x54a7,	// (0x0001aac3) ncim_query_list_pane_ParamLimits

0x54b9,	// (0x0001aad5) ncim_query_popup_pane_ParamLimits

0x54cd,	// (0x0001aae9) wait_bar_pane_cp04

0x0ad5,	// (0x000160f1) input_focus_pane_cp011

0x54d5,	// (0x0001aaf1) ncim_query_popup_pane_t1

0x54e3,	// (0x0001aaff) ncim_list_query_list_pane_ParamLimits

0x54e3,	// (0x0001aaff) ncim_list_query_list_pane

0x0ad5,	// (0x000160f1) bg_button_pane_cp027

0x54f0,	// (0x0001ab0c) ncim_query_button_pane_g1

0x0ad5,	// (0x000160f1) list_highlight_pane_cp012

0x54fa,	// (0x0001ab16) ncim_list_query_list_pane_g1

0x5502,	// (0x0001ab1e) ncim_list_query_list_pane_t1

0x7e91,	// (0x0001d4ad) cam4_indicators_pane_g3_ParamLimits

0x7e91,	// (0x0001d4ad) cam4_indicators_pane_g3

0x7f8b,	// (0x0001d5a7) vid4_indicators_pane_g5_ParamLimits

0x7f8b,	// (0x0001d5a7) vid4_indicators_pane_g5

0x847d,	// (0x0001da99) vid4_progress_pane_g5_ParamLimits

0x847d,	// (0x0001da99) vid4_progress_pane_g5

0xd879,	// (0x00022e95) main_ncimui_pane_g1

0xd8bf,	// (0x00022edb) ncimui_group_query_pane_ParamLimits

0xd8bf,	// (0x00022edb) ncimui_group_query_pane

0xd8f3,	// (0x00022f0f) ncimui_list_pane_ParamLimits

0xd8f3,	// (0x00022f0f) ncimui_list_pane

0xd90d,	// (0x00022f29) ncimui_text_pane_ParamLimits

0xd90d,	// (0x00022f29) ncimui_text_pane

0xd994,	// (0x00022fb0) ncimui_text_pane_t1_ParamLimits

0xd994,	// (0x00022fb0) ncimui_text_pane_t1

0x5510,	// (0x0001ab2c) ncimui_list_single_graphic_pane_ParamLimits

0x5510,	// (0x0001ab2c) ncimui_list_single_graphic_pane

0xd9b3,	// (0x00022fcf) ncimui_query_pane_ParamLimits

0xd9b3,	// (0x00022fcf) ncimui_query_pane

0x0ad5,	// (0x000160f1) list_highlight_pane_cp013

0x5520,	// (0x0001ab3c) ncim_list_query_list_pane_t1_copy1

0x54fa,	// (0x0001ab16) ncim_list_single_graphic_pane_g1

0x552e,	// (0x0001ab4a) ncim_query_button_pane_cp01

0x5536,	// (0x0001ab52) ncim_query_entry_pane_ParamLimits

0x5536,	// (0x0001ab52) ncim_query_entry_pane

0x5546,	// (0x0001ab62) ncimui_query_pane_g1

0x554e,	// (0x0001ab6a) ncimui_query_pane_t1_ParamLimits

0x554e,	// (0x0001ab6a) ncimui_query_pane_t1

0x0ad5,	// (0x000160f1) input_focus_pane_cp012

0x54d5,	// (0x0001aaf1) ncim_query_entry_pane_t1

0x12ba,	// (0x000168d6) main_im_pane_ParamLimits

0x0b45,	// (0x00016161) main_mobtv_pane_ParamLimits

0x0b45,	// (0x00016161) main_mobtv_pane

0xd6eb,	// (0x00022d07) main_cset6_slider_pane_g18_ParamLimits

0xd6eb,	// (0x00022d07) main_cset6_slider_pane_g18

0xd6f7,	// (0x00022d13) main_cset6_slider_pane_g19_ParamLimits

0xd6f7,	// (0x00022d13) main_cset6_slider_pane_g19

0x46d1,	// (0x00019ced) bg_main_mobtv_pane_ParamLimits

0x46d1,	// (0x00019ced) bg_main_mobtv_pane

0xd9c3,	// (0x00022fdf) main_mobtv_info_pane

0xd9ce,	// (0x00022fea) main_mobtv_loading_pane_ParamLimits

0xd9ce,	// (0x00022fea) main_mobtv_loading_pane

0x5564,	// (0x0001ab80) main_mobtv_pg_channel_list_pane

0x556e,	// (0x0001ab8a) main_mobtv_pg_hdr_pane

0xd9db,	// (0x00022ff7) main_mobtv_programe_curr_pane_ParamLimits

0xd9db,	// (0x00022ff7) main_mobtv_programe_curr_pane

0xd9e8,	// (0x00023004) main_mobtv_programe_next_pane_ParamLimits

0xd9e8,	// (0x00023004) main_mobtv_programe_next_pane

0x5577,	// (0x0001ab93) popup_mobtv_noti_window

0x3a0c,	// (0x00019028) main_tv_pg_hdr_pane_g1

0x557f,	// (0x0001ab9b) main_tv_pg_hdr_pane_g2

0x5587,	// (0x0001aba3) main_tv_pg_hdr_pane_g3

0x558f,	// (0x0001abab) main_tv_pg_hdr_pane_g4

0x5597,	// (0x0001abb3) main_tv_pg_hdr_pane_g5

0x55a1,	// (0x0001abbd) main_tv_pg_hdr_pane_g6

0x55ab,	// (0x0001abc7) main_tv_pg_hdr_pane_g7

0x55b5,	// (0x0001abd1) main_tv_pg_hdr_pane_g8

0x55bf,	// (0x0001abdb) main_tv_pg_hdr_pane_g9

0x55c9,	// (0x0001abe5) main_tv_pg_hdr_pane_g10

0x55d3,	// (0x0001abef) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x00025272) main_tv_pg_hdr_pane_g

0x55dd,	// (0x0001abf9) main_tv_pg_hdr_pane_t1

0x55eb,	// (0x0001ac07) main_tv_pg_hdr_pane_t2

0x55f9,	// (0x0001ac15) main_tv_pg_hdr_pane_t3

0x5609,	// (0x0001ac25) main_tv_pg_hdr_pane_t4

0x5619,	// (0x0001ac35) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00025289) main_tv_pg_hdr_pane_t

0x5629,	// (0x0001ac45) single_mobtv_pg_channel_pane_ParamLimits

0x5629,	// (0x0001ac45) single_mobtv_pg_channel_pane

0x563b,	// (0x0001ac57) single_mobtv_pg_channel_table_pane

0x5644,	// (0x0001ac60) single_mobtv_pg_channel_thumb_pane

0x564d,	// (0x0001ac69) single_tv_pg_channel_pane_g1

0x5656,	// (0x0001ac72) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00025294) single_tv_pg_channel_pane_g

0x3c78,	// (0x00019294) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3c78,	// (0x00019294) bg_single_mobtv_pg_channel_thumb_pane

0x565f,	// (0x0001ac7b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x565f,	// (0x0001ac7b) single_mobtv_pg_channel_thumb_pane_g1

0x566d,	// (0x0001ac89) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x566d,	// (0x0001ac89) single_mobtv_pg_channel_thumb_pane_g2

0x5679,	// (0x0001ac95) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5679,	// (0x0001ac95) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00025299) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00025299) single_mobtv_pg_channel_thumb_pane_g

0x5685,	// (0x0001aca1) single_mobtv_pg_channel_thumb_pane_t1

0x5693,	// (0x0001acaf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x000252a0) single_mobtv_pg_channel_thumb_pane_t

0x3a0c,	// (0x00019028) bg_single_mobtv_pg_channel_table_pane_g1

0x3a0c,	// (0x00019028) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00024d5f) bg_single_mobtv_pg_channel_table_pane_g

0x56a1,	// (0x0001acbd) single_mobtv_pg_channel_table_pane_t1

0x56af,	// (0x0001accb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x000252a5) single_mobtv_pg_channel_table_pane_t

0xd9fd,	// (0x00023019) main_mobtv_info_pane_g1_ParamLimits

0xd9fd,	// (0x00023019) main_mobtv_info_pane_g1

0xda19,	// (0x00023035) main_mobtv_info_pane_t1_ParamLimits

0xda19,	// (0x00023035) main_mobtv_info_pane_t1

0xda91,	// (0x000230ad) main_mobtv_info_pane_t2_ParamLimits

0xda91,	// (0x000230ad) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x000252af) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x000252af) main_mobtv_info_pane_t

0xdb20,	// (0x0002313c) wait_bar_pane_cp05

0xdb32,	// (0x0002314e) main_mobtv_loading_pane_g1_ParamLimits

0xdb32,	// (0x0002314e) main_mobtv_loading_pane_g1

0xdb40,	// (0x0002315c) main_mobtv_loading_pane_g2_ParamLimits

0xdb40,	// (0x0002315c) main_mobtv_loading_pane_g2

0xdb4c,	// (0x00023168) main_mobtv_loading_pane_g3_ParamLimits

0xdb4c,	// (0x00023168) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x000252b6) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x000252b6) main_mobtv_loading_pane_g

0x56bd,	// (0x0001acd9) main_mobtv_loading_pane_t1_ParamLimits

0x56bd,	// (0x0001acd9) main_mobtv_loading_pane_t1

0x56d5,	// (0x0001acf1) main_mobtv_loading_pane_t2_ParamLimits

0x56d5,	// (0x0001acf1) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x000252bd) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x000252bd) main_mobtv_loading_pane_t

0xdb5a,	// (0x00023176) wait_bar_pane_cp06_ParamLimits

0xdb5a,	// (0x00023176) wait_bar_pane_cp06

0x56f9,	// (0x0001ad15) main_mobtv_programe_curr_pane_t1

0x5707,	// (0x0001ad23) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x000252c2) main_mobtv_programe_curr_pane_t

0x5715,	// (0x0001ad31) main_mobtv_programe_next_pane_t1

0x5723,	// (0x0001ad3f) main_mobtv_programe_next_pane_t2

0x5731,	// (0x0001ad4d) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x000252c7) main_mobtv_programe_next_pane_t

0x0ad5,	// (0x000160f1) bg_popup_mobtv_noti_window_pane

0x573f,	// (0x0001ad5b) popup_mobtv_noti_window_g1

0x5747,	// (0x0001ad63) popup_mobtv_noti_window_t1

0x5755,	// (0x0001ad71) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x000252ce) popup_mobtv_noti_window_t

0x3a0c,	// (0x00019028) bg_popup_mobtv_noti_window_pane_g1

0x0ad5,	// (0x000160f1) sc_clock_pane

0x0ad5,	// (0x000160f1) main_fs_bigclock_pane

0xd309,	// (0x00022925) blid2_tripm_pane_t4_ParamLimits

0xd309,	// (0x00022925) blid2_tripm_pane_t4

0xdb66,	// (0x00023182) sc_clock_pane_g1_ParamLimits

0xdb66,	// (0x00023182) sc_clock_pane_g1

0xdb74,	// (0x00023190) sc_clock_pane_t1_ParamLimits

0xdb74,	// (0x00023190) sc_clock_pane_t1

0xdb87,	// (0x000231a3) sc_clock_pane_t2_ParamLimits

0xdb87,	// (0x000231a3) sc_clock_pane_t2

0xdb99,	// (0x000231b5) sc_clock_pane_t3_ParamLimits

0xdb99,	// (0x000231b5) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x000252d3) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x000252d3) sc_clock_pane_t

0xe855,	// (0x00023e71) main_fs_bigclock_indicator_pane_ParamLimits

0xe855,	// (0x00023e71) main_fs_bigclock_indicator_pane

0xdc1d,	// (0x00023239) main_fs_bigclock_pane_g1_ParamLimits

0xdc1d,	// (0x00023239) main_fs_bigclock_pane_g1

0xe861,	// (0x00023e7d) main_fs_bigclock_pane_t1_ParamLimits

0xe861,	// (0x00023e7d) main_fs_bigclock_pane_t1

0xe873,	// (0x00023e8f) main_fs_bigclock_pane_t2_ParamLimits

0xe873,	// (0x00023e8f) main_fs_bigclock_pane_t2

0xe887,	// (0x00023ea3) main_fs_bigclock_pane_t3_ParamLimits

0xe887,	// (0x00023ea3) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x000254cd) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x000254cd) main_fs_bigclock_pane_t

0xe899,	// (0x00023eb5) main_fs_bigclock_indicator_pane_g1

0x544f,	// (0x0001aa6b) ncim_query_content_pane_g2_ParamLimits

0x544f,	// (0x0001aa6b) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x00025260) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x00025260) ncim_query_content_pane_g

0xdbad,	// (0x000231c9) sc_clock_pane_t4_ParamLimits

0xdbad,	// (0x000231c9) sc_clock_pane_t4

0x0b45,	// (0x00016161) main_radioblah_pane

0x4600,	// (0x00019c1c) cell_call4_button_pane_t1_copy1_ParamLimits

0x4600,	// (0x00019c1c) cell_call4_button_pane_t1_copy1

0xd881,	// (0x00022e9d) main_ncimui_pane_t1_ParamLimits

0xd881,	// (0x00022e9d) main_ncimui_pane_t1

0xd893,	// (0x00022eaf) main_ncimui_pane_t2_ParamLimits

0xd893,	// (0x00022eaf) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00025259) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00025259) main_ncimui_pane_t

0x5883,	// (0x0001ae9f) main_radioblah_anim_pane_ParamLimits

0x5883,	// (0x0001ae9f) main_radioblah_anim_pane

0x5894,	// (0x0001aeb0) main_radioblah_info_pane_ParamLimits

0x5894,	// (0x0001aeb0) main_radioblah_info_pane

0x58a8,	// (0x0001aec4) main_radioblah_pane_t1_ParamLimits

0x58a8,	// (0x0001aec4) main_radioblah_pane_t1

0x58c4,	// (0x0001aee0) main_radioblah_pane_t2_ParamLimits

0x58c4,	// (0x0001aee0) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x000252f4) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x000252f4) main_radioblah_pane_t

0xdc6f,	// (0x0002328b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc6f,	// (0x0002328b) main_radioblah_rocker_ctrl_pane

0x590c,	// (0x0001af28) main_radioblah_info_pane_t1_ParamLimits

0x590c,	// (0x0001af28) main_radioblah_info_pane_t1

0xdcb4,	// (0x000232d0) main_radioblah_info_pane_t2_ParamLimits

0xdcb4,	// (0x000232d0) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x000252fd) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x000252fd) main_radioblah_info_pane_t

0x3a0c,	// (0x00019028) main_radioblah_rocker_ctrl_pane_g1

0xdd64,	// (0x00023380) main_radioblah_rocker_ctrl_pane_g2

0xdd6c,	// (0x00023388) main_radioblah_rocker_ctrl_pane_g3

0xdd74,	// (0x00023390) main_radioblah_rocker_ctrl_pane_g4

0xdd7c,	// (0x00023398) main_radioblah_rocker_ctrl_pane_g5

0xdd84,	// (0x000233a0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00025306) main_radioblah_rocker_ctrl_pane_g

0xd841,	// (0x00022e5d) main_cset_text2_pane_t1_copy1_ParamLimits

0x7dcc,	// (0x0001d3e8) cam4_image_uncrop_qvga_pane

0x7f07,	// (0x0001d523) vid4_image_uncrop_qcif_pane

0x851e,	// (0x0001db3a) cam6_image_uncrop_qvga_pane_ParamLimits

0x851e,	// (0x0001db3a) cam6_image_uncrop_qvga_pane

0x50a9,	// (0x0001a6c5) vid6_image_uncrop_qcif_pane_ParamLimits

0x50a9,	// (0x0001a6c5) vid6_image_uncrop_qcif_pane

0x0ad5,	// (0x000160f1) bg_popup_preview_window_pane_cp03

0x5401,	// (0x0001aa1d) list_cset_text2_pane

0x5409,	// (0x0001aa25) main_cset6_text2_pane_g1

0x5411,	// (0x0001aa2d) main_cset6_text2_pane_t1

0xdd8c,	// (0x000233a8) list_cset_text2_pane_t1_ParamLimits

0xdd8c,	// (0x000233a8) list_cset_text2_pane_t1

0x0b45,	// (0x00016161) main_radioblah_pane_ParamLimits

0xdb0c,	// (0x00023128) main_mobtv_info_pane_t3_ParamLimits

0xdb0c,	// (0x00023128) main_mobtv_info_pane_t3

0xdc5d,	// (0x00023279) main_radioblah_pane_g1

0xdc88,	// (0x000232a4) main_radioblah_info_pane_g1

0xdd09,	// (0x00023325) main_radioblah_info_pane_t3_ParamLimits

0xdd09,	// (0x00023325) main_radioblah_info_pane_t3

0x9e92,	// (0x0001f4ae) highlight_cell_cale_month_pane_ParamLimits

0x9e92,	// (0x0001f4ae) highlight_cell_cale_month_pane

0x0ad5,	// (0x000160f1) main_phob_fisheye_pane

0x3d80,	// (0x0001939c) scroll_pane_cp0031_ParamLimits

0x3d80,	// (0x0001939c) scroll_pane_cp0031

0x51b7,	// (0x0001a7d3) wait_bar_pane_cp08_ParamLimits

0xd602,	// (0x00022c1e) cset_list_set_pane_copy1_ParamLimits

0x5946,	// (0x0001af62) highlight_cell_cale_month_pane_g1

0xdda9,	// (0x000233c5) highlight_cell_cale_month_pane_t1

0x4d15,	// (0x0001a331) list_gen_pane_cp01

0x4845,	// (0x00019e61) scroll_pane_01

0xddb7,	// (0x000233d3) list_single_double_fisheye_pane

0xddc0,	// (0x000233dc) list_double_fisheye_pane_g1_ParamLimits

0xddc0,	// (0x000233dc) list_double_fisheye_pane_g1

0xddcc,	// (0x000233e8) list_double_fisheye_pane_g2_ParamLimits

0xddcc,	// (0x000233e8) list_double_fisheye_pane_g2

0xdde0,	// (0x000233fc) list_double_fisheye_pane_g3_ParamLimits

0xdde0,	// (0x000233fc) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00025313) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00025313) list_double_fisheye_pane_g

0xde09,	// (0x00023425) list_double_fisheye_pane_t1_ParamLimits

0xde09,	// (0x00023425) list_double_fisheye_pane_t1

0xde24,	// (0x00023440) list_double_fisheye_pane_t2_ParamLimits

0xde24,	// (0x00023440) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0002531e) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0002531e) list_double_fisheye_pane_t

0x0ad5,	// (0x000160f1) main_call5_pane

0xdbd3,	// (0x000231ef) sc_swipe_pane_ParamLimits

0xdbd3,	// (0x000231ef) sc_swipe_pane

0xde52,	// (0x0002346e) call5_image_pane_ParamLimits

0xde52,	// (0x0002346e) call5_image_pane

0xde62,	// (0x0002347e) call5_swipe_1_pane_ParamLimits

0xde62,	// (0x0002347e) call5_swipe_1_pane

0xde6e,	// (0x0002348a) call5_swipe_2_pane_ParamLimits

0xde6e,	// (0x0002348a) call5_swipe_2_pane

0xde88,	// (0x000234a4) popup_call5_audio_first_window_ParamLimits

0xde88,	// (0x000234a4) popup_call5_audio_first_window

0x3c78,	// (0x00019294) call5_swipe_1_pane_g1_ParamLimits

0x3c78,	// (0x00019294) call5_swipe_1_pane_g1

0x594e,	// (0x0001af6a) call5_swipe_1_pane_g2_ParamLimits

0x594e,	// (0x0001af6a) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00025323) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00025323) call5_swipe_1_pane_g

0x595a,	// (0x0001af76) call5_swipe_1_pane_t1_ParamLimits

0x595a,	// (0x0001af76) call5_swipe_1_pane_t1

0x3c78,	// (0x00019294) call5_swipe_2_pane_g1_ParamLimits

0x3c78,	// (0x00019294) call5_swipe_2_pane_g1

0x596f,	// (0x0001af8b) call5_swipe_2_pane_g2_ParamLimits

0x596f,	// (0x0001af8b) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00025328) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00025328) call5_swipe_2_pane_g

0x597b,	// (0x0001af97) call5_swipe_2_pane_t1_ParamLimits

0x597b,	// (0x0001af97) call5_swipe_2_pane_t1

0x5990,	// (0x0001afac) sc_swipe_pane_g1_ParamLimits

0x5990,	// (0x0001afac) sc_swipe_pane_g1

0x599d,	// (0x0001afb9) sc_swipe_pane_g2_ParamLimits

0x599d,	// (0x0001afb9) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0002532d) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0002532d) sc_swipe_pane_g

0x59a9,	// (0x0001afc5) sc_swipe_pane_t1_ParamLimits

0x59a9,	// (0x0001afc5) sc_swipe_pane_t1

0x0ad5,	// (0x000160f1) main_cmail_launcher_pane

0xde96,	// (0x000234b2) aid_size_cell_cmail_l_ParamLimits

0xde96,	// (0x000234b2) aid_size_cell_cmail_l

0xdea6,	// (0x000234c2) grid_cmail_l_pane_ParamLimits

0xdea6,	// (0x000234c2) grid_cmail_l_pane

0xdeb6,	// (0x000234d2) cell_cmail_l_pane_ParamLimits

0xdeb6,	// (0x000234d2) cell_cmail_l_pane

0xdeca,	// (0x000234e6) cell_cmail_l_pane_g1_ParamLimits

0xdeca,	// (0x000234e6) cell_cmail_l_pane_g1

0xded6,	// (0x000234f2) cell_cmail_l_pane_t1_ParamLimits

0xded6,	// (0x000234f2) cell_cmail_l_pane_t1

0x59be,	// (0x0001afda) cell_cmail_l_pane_t2_ParamLimits

0x59be,	// (0x0001afda) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x00025332) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x00025332) cell_cmail_l_pane_t

0x0b45,	// (0x00016161) grid_highlight_pane_cp018_ParamLimits

0x0b45,	// (0x00016161) grid_highlight_pane_cp018

0x8663,	// (0x0001dc7f) main2_pane_ParamLimits

0x8663,	// (0x0001dc7f) main2_pane

0x1377,	// (0x00016993) popup_sp_fs_action_menu_bg_pane_g1

0x137f,	// (0x0001699b) popup_sp_fs_action_menu_bg_pane_g2

0x1387,	// (0x000169a3) popup_sp_fs_action_menu_bg_pane_g3

0x138f,	// (0x000169ab) popup_sp_fs_action_menu_bg_pane_g4

0x1397,	// (0x000169b3) popup_sp_fs_action_menu_bg_pane_g5

0x139f,	// (0x000169bb) popup_sp_fs_action_menu_bg_pane_g6

0x13a7,	// (0x000169c3) popup_sp_fs_action_menu_bg_pane_g7

0x13af,	// (0x000169cb) popup_sp_fs_action_menu_bg_pane_g8

0x13b7,	// (0x000169d3) popup_sp_fs_action_menu_bg_pane_g9

0x13bf,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g10

0x13bf,	// (0x000169db) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0002480b) popup_sp_fs_action_menu_bg_pane_g

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g3_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g3_g1

0x159b,	// (0x00016bb7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_t3_g3_g2

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x000248bb) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x000248bb) list_medium_line_x2_t3_g3_g

0x15b3,	// (0x00016bcf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x15b3,	// (0x00016bcf) list_medium_line_x2_t3_g3_t1

0x91b4,	// (0x0001e7d0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x91b4,	// (0x0001e7d0) list_medium_line_x2_t3_g3_t2

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x000248c2) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x000248c2) list_medium_line_x2_t3_g3_t

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g2_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g2_g1

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x000248c9) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x000248c9) list_medium_line_x2_t3_g2_g

0x15dd,	// (0x00016bf9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x15dd,	// (0x00016bf9) list_medium_line_x2_t3_g2_t1

0x15f3,	// (0x00016c0f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x15f3,	// (0x00016c0f) list_medium_line_x2_t3_g2_t2

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x000248ce) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x000248ce) list_medium_line_x2_t3_g2_t

0x158f,	// (0x00016bab) list_medium_line_x2_t4_g4_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t4_g4_g1

0x1605,	// (0x00016c21) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1605,	// (0x00016c21) list_medium_line_x2_t4_g4_g2

0x159b,	// (0x00016bb7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_t4_g4_g3

0x1611,	// (0x00016c2d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1611,	// (0x00016c2d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x000248d5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x000248d5) list_medium_line_x2_t4_g4_g

0x91c6,	// (0x0001e7e2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x91c6,	// (0x0001e7e2) list_medium_line_x2_t4_g4_t1

0x91e0,	// (0x0001e7fc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x91e0,	// (0x0001e7fc) list_medium_line_x2_t4_g4_t2

0x91f6,	// (0x0001e812) list_medium_line_x2_t4_g4_t3_ParamLimits

0x91f6,	// (0x0001e812) list_medium_line_x2_t4_g4_t3

0x161d,	// (0x00016c39) list_medium_line_x2_t4_g4_t4_ParamLimits

0x161d,	// (0x00016c39) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x000248de) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x000248de) list_medium_line_x2_t4_g4_t

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g4_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g4_g1

0x1605,	// (0x00016c21) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1605,	// (0x00016c21) list_medium_line_x2_t2_g4_g2

0x159b,	// (0x00016bb7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_t2_g4_g3

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00024945) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00024945) list_medium_line_x2_t2_g4_g

0x190d,	// (0x00016f29) list_medium_line_x2_t2_g4_t1_ParamLimits

0x190d,	// (0x00016f29) list_medium_line_x2_t2_g4_t1

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0002494e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0002494e) list_medium_line_x2_t2_g4_t

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g3_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g3_g1

0x159b,	// (0x00016bb7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_t2_g3_g2

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x000248bb) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x000248bb) list_medium_line_x2_t2_g3_g

0x1922,	// (0x00016f3e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1922,	// (0x00016f3e) list_medium_line_x2_t2_g3_t1

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00024953) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00024953) list_medium_line_x2_t2_g3_t

0x9ffa,	// (0x0001f616) main_sp_fs_list_pane_ParamLimits

0x9ffa,	// (0x0001f616) main_sp_fs_list_pane

0xa006,	// (0x0001f622) sp_fs_scroll_pane_ParamLimits

0xa006,	// (0x0001f622) sp_fs_scroll_pane

0xa012,	// (0x0001f62e) list_medium_line_x2_t3_t1

0xa022,	// (0x0001f63e) list_medium_line_x2_t3_t2

0x1b7e,	// (0x0001719a) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0002499e) list_medium_line_x2_t3_t

0xa030,	// (0x0001f64c) list_medium_line_x3_t4_t1

0xa040,	// (0x0001f65c) list_medium_line_x3_t4_t2

0x1b8c,	// (0x000171a8) list_medium_line_x3_t4_t3

0x1b7e,	// (0x0001719a) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000249a5) list_medium_line_x3_t4_t

0xa04e,	// (0x0001f66a) list_medium_line_x4_t5_t1

0xa05e,	// (0x0001f67a) list_medium_line_x4_t5_t2

0x1b8c,	// (0x000171a8) list_medium_line_x4_t5_t3

0x1b9a,	// (0x000171b6) list_medium_line_x4_t5_t4

0x1b7e,	// (0x0001719a) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000249ae) list_medium_line_x4_t5_t

0x158f,	// (0x00016bab) list_medium_line_t4_g4_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_t4_g4_g1

0x1611,	// (0x00016c2d) list_medium_line_t4_g4_g2_ParamLimits

0x1611,	// (0x00016c2d) list_medium_line_t4_g4_g2

0x1ba8,	// (0x000171c4) list_medium_line_t4_g4_g3_ParamLimits

0x1ba8,	// (0x000171c4) list_medium_line_t4_g4_g3

0x15a7,	// (0x00016bc3) list_medium_line_t4_g4_g4_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000249b9) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000249b9) list_medium_line_t4_g4_g

0x1bb4,	// (0x000171d0) list_medium_line_t4_g4_t1_ParamLimits

0x1bb4,	// (0x000171d0) list_medium_line_t4_g4_t1

0x1bc9,	// (0x000171e5) list_medium_line_t4_g4_t2_ParamLimits

0x1bc9,	// (0x000171e5) list_medium_line_t4_g4_t2

0x1bde,	// (0x000171fa) list_medium_line_t4_g4_t3_ParamLimits

0x1bde,	// (0x000171fa) list_medium_line_t4_g4_t3

0x15c8,	// (0x00016be4) list_medium_line_t4_g4_t4_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000249c2) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000249c2) list_medium_line_t4_g4_t

0xa10a,	// (0x0001f726) chi_dic_find_pane_g1

0xb039,	// (0x00020655) main_tport_pane

0x49a6,	// (0x00019fc2) list_medium_line_plain_t1

0x49f8,	// (0x0001a014) list_medium_line_t2_g2_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t2_g2_g1

0x4a04,	// (0x0001a020) list_medium_line_t2_g2_g2_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00025075) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00025075) list_medium_line_t2_g2_g

0xcce9,	// (0x00022305) list_medium_line_t2_g2_t1_ParamLimits

0xcce9,	// (0x00022305) list_medium_line_t2_g2_t1

0xcd03,	// (0x0002231f) list_medium_line_t2_g2_t2_ParamLimits

0xcd03,	// (0x0002231f) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0002507a) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0002507a) list_medium_line_t2_g2_t

0x4dbc,	// (0x0001a3d8) aid_sp_fs_list_icon_a_sm

0x4dc4,	// (0x0001a3e0) aid_sp_fs_list_icon_d

0x4dcc,	// (0x0001a3e8) aid_sp_fs_text_primary

0x4dd5,	// (0x0001a3f1) aid_sp_fs_text_secondary

0x4dde,	// (0x0001a3fa) list_medium_line

0x4dde,	// (0x0001a3fa) list_medium_line_g2

0x4dde,	// (0x0001a3fa) list_medium_line_g3

0x4dde,	// (0x0001a3fa) list_medium_line_plain

0x4dde,	// (0x0001a3fa) list_medium_line_plain_t2

0x4dde,	// (0x0001a3fa) list_medium_line_plain_t3

0x4dde,	// (0x0001a3fa) list_medium_line_right_icon

0x4dde,	// (0x0001a3fa) list_medium_line_right_iconx2

0x4dde,	// (0x0001a3fa) list_medium_line_t2

0x4dde,	// (0x0001a3fa) list_medium_line_t2_g2

0x4dde,	// (0x0001a3fa) list_medium_line_t2_g3

0x4dde,	// (0x0001a3fa) list_medium_line_t2_right_icon

0x4dde,	// (0x0001a3fa) list_medium_line_t2_right_iconx2

0x4dde,	// (0x0001a3fa) list_medium_line_t3

0x4dde,	// (0x0001a3fa) list_medium_line_t3_g2

0x4dde,	// (0x0001a3fa) list_medium_line_t3_g3

0x4dde,	// (0x0001a3fa) list_medium_line_t3_right_iconx2

0x4de7,	// (0x0001a403) list_medium_line_t4_g4

0x4df0,	// (0x0001a40c) list_medium_line_x2

0x4df0,	// (0x0001a40c) list_medium_line_x2_t2_g2

0x4df0,	// (0x0001a40c) list_medium_line_x2_t2_g3

0x4df0,	// (0x0001a40c) list_medium_line_x2_t2_g4

0x4df0,	// (0x0001a40c) list_medium_line_x2_t3

0x4df0,	// (0x0001a40c) list_medium_line_x2_t3_g2

0x4df0,	// (0x0001a40c) list_medium_line_x2_t3_g3

0x4df0,	// (0x0001a40c) list_medium_line_x2_t3_g4

0x4df0,	// (0x0001a40c) list_medium_line_x2_t4_g2

0x4df0,	// (0x0001a40c) list_medium_line_x2_t4_g4

0x4df9,	// (0x0001a415) list_medium_line_x3

0x4df9,	// (0x0001a415) list_medium_line_x3_t4

0x4df9,	// (0x0001a415) list_medium_line_x3_t4_g4

0x4de7,	// (0x0001a403) list_medium_line_x4_t4

0x4de7,	// (0x0001a403) list_medium_line_x4_t4_g7

0x4de7,	// (0x0001a403) list_medium_line_x4_t5

0x4e02,	// (0x0001a41e) list_single_fs_dyc_pane_ParamLimits

0x4e02,	// (0x0001a41e) list_single_fs_dyc_pane

0x158f,	// (0x00016bab) list_medium_line_x4_t4_g7_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x4_t4_g7_g1

0x5330,	// (0x0001a94c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5330,	// (0x0001a94c) list_medium_line_x4_t4_g7_g2

0x533c,	// (0x0001a958) list_medium_line_x4_t4_g7_g3_ParamLimits

0x533c,	// (0x0001a958) list_medium_line_x4_t4_g7_g3

0x534b,	// (0x0001a967) list_medium_line_x4_t4_g7_g4_ParamLimits

0x534b,	// (0x0001a967) list_medium_line_x4_t4_g7_g4

0x5357,	// (0x0001a973) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5357,	// (0x0001a973) list_medium_line_x4_t4_g7_g5

0x5366,	// (0x0001a982) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5366,	// (0x0001a982) list_medium_line_x4_t4_g7_g6

0x5375,	// (0x0001a991) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5375,	// (0x0001a991) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0002523f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0002523f) list_medium_line_x4_t4_g7_g

0x5381,	// (0x0001a99d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5381,	// (0x0001a99d) list_medium_line_x4_t4_g7_t1

0x5396,	// (0x0001a9b2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5396,	// (0x0001a9b2) list_medium_line_x4_t4_g7_t2

0x53ab,	// (0x0001a9c7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x53ab,	// (0x0001a9c7) list_medium_line_x4_t4_g7_t3

0x53c0,	// (0x0001a9dc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x53c0,	// (0x0001a9dc) list_medium_line_x4_t4_g7_t4

0x53d2,	// (0x0001a9ee) list_medium_line_x4_t4_g7_t5_ParamLimits

0x53d2,	// (0x0001a9ee) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0002524e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0002524e) list_medium_line_x4_t4_g7_t

0x53e4,	// (0x0001aa00) list_single_dyc_row_pane_ParamLimits

0x53e4,	// (0x0001aa00) list_single_dyc_row_pane

0xde46,	// (0x00023462) call5_gesture_pane_ParamLimits

0xde46,	// (0x00023462) call5_gesture_pane

0xde7a,	// (0x00023496) call5_windows_pane_ParamLimits

0xde7a,	// (0x00023496) call5_windows_pane

0xdeec,	// (0x00023508) call5_swipe_1_pane_cp_ParamLimits

0xdeec,	// (0x00023508) call5_swipe_1_pane_cp

0xdef8,	// (0x00023514) call5_swipe_2_pane_cp_ParamLimits

0xdef8,	// (0x00023514) call5_swipe_2_pane_cp

0x2049,	// (0x00017665) call5_image_pane_cp

0xdf04,	// (0x00023520) popup_call5_audio_first_window_cp_ParamLimits

0xdf04,	// (0x00023520) popup_call5_audio_first_window_cp

0x5990,	// (0x0001afac) call5_swipe_1_pane_g1_cp_ParamLimits

0x5990,	// (0x0001afac) call5_swipe_1_pane_g1_cp

0x59d0,	// (0x0001afec) call5_swipe_1_pane_g2_cp

0x59a9,	// (0x0001afc5) call5_swipe_1_pane_t1_cp_ParamLimits

0x59a9,	// (0x0001afc5) call5_swipe_1_pane_t1_cp

0x5990,	// (0x0001afac) call5_swipe_2_pane_g1_cp_ParamLimits

0x5990,	// (0x0001afac) call5_swipe_2_pane_g1_cp

0x59d8,	// (0x0001aff4) call5_swipe_2_pane_g2_cp

0x59e0,	// (0x0001affc) call5_swipe_2_pane_t1_cp_ParamLimits

0x59e0,	// (0x0001affc) call5_swipe_2_pane_t1_cp

0x0b45,	// (0x00016161) main_sp_fs_email_pane

0x59f5,	// (0x0001b011) main_sp_fs_listscroll_pane_te

0x59fe,	// (0x0001b01a) popup_sp_fs_action_menu_pane_ParamLimits

0x59fe,	// (0x0001b01a) popup_sp_fs_action_menu_pane

0x3a0c,	// (0x00019028) bg_sp_fs_ctrlbar_pane_g1

0x5a42,	// (0x0001b05e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5a4b,	// (0x0001b067) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5a54,	// (0x0001b070) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3a0c,	// (0x00019028) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00025337) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x37f1,	// (0x00018e0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x37f1,	// (0x00018e0d) bg_sp_fs_ctrlbar_ddmenu_pane

0x5a5d,	// (0x0001b079) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5a5d,	// (0x0001b079) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5a69,	// (0x0001b085) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5a69,	// (0x0001b085) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x00025340) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x00025340) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5a75,	// (0x0001b091) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5a75,	// (0x0001b091) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5a8f,	// (0x0001b0ab) list_medium_line_t2_right_icon_g1

0xdf12,	// (0x0002352e) list_medium_line_t2_right_icon_t1

0xdf22,	// (0x0002353e) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00025345) list_medium_line_t2_right_icon_t

0x3506,	// (0x00018b22) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3506,	// (0x00018b22) bg_sp_fs_ctrlbar_pane

0xdf87,	// (0x000235a3) main_sp_fs_ctrlbar_button_pane_cp01

0xdf8f,	// (0x000235ab) main_sp_fs_ctrlbar_ddmenu_pane

0x5acf,	// (0x0001b0eb) main_sp_fs_ctrlbar_pane_g1

0x5adb,	// (0x0001b0f7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0002534a) main_sp_fs_ctrlbar_pane_g

0x5ae7,	// (0x0001b103) main_sp_fs_ctrlbar_pane_t1

0xdf99,	// (0x000235b5) main_sp_fs_ctrlbar_pane

0xdfb5,	// (0x000235d1) main_sp_fs_listscroll_pane_te_cp01

0xdfc6,	// (0x000235e2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfc6,	// (0x000235e2) popup_sp_fs_action_menu_pane_cp01

0x0b45,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0b45,	// (0x00016161) bg_sp_fs_highlight_list_pane_cp01

0x5afc,	// (0x0001b118) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5afc,	// (0x0001b118) sp_fs_action_menu_list_gene_pane_g1

0x5b0b,	// (0x0001b127) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5b0b,	// (0x0001b127) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0002534f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0002534f) sp_fs_action_menu_list_gene_pane_g

0x5b18,	// (0x0001b134) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5b18,	// (0x0001b134) sp_fs_action_menu_list_gene_pane_t1

0x5b30,	// (0x0001b14c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5b30,	// (0x0001b14c) sp_fs_action_menu_list_gene_pane

0x5b51,	// (0x0001b16d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5b51,	// (0x0001b16d) popup_sp_fs_action_menu_bg_pane

0x5b5f,	// (0x0001b17b) sp_fs_action_menu_list_pane_ParamLimits

0x5b5f,	// (0x0001b17b) sp_fs_action_menu_list_pane

0x5b81,	// (0x0001b19d) sp_fs_scroll_pane_cp01_ParamLimits

0x5b81,	// (0x0001b19d) sp_fs_scroll_pane_cp01

0xdfde,	// (0x000235fa) list_medium_line_plain_t2_t1

0xdfee,	// (0x0002360a) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00025354) list_medium_line_plain_t2_t

0xdffc,	// (0x00023618) list_medium_line_plain_t3_t1

0xe00c,	// (0x00023628) list_medium_line_plain_t3_t2

0xe01a,	// (0x00023636) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00025359) list_medium_line_plain_t3_t

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g2_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t2_g2_g1

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x000248c9) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x000248c9) list_medium_line_x2_t2_g2_g

0x1bb4,	// (0x000171d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1bb4,	// (0x000171d0) list_medium_line_x2_t2_g2_t1

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x00025360) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x00025360) list_medium_line_x2_t2_g2_t

0x158f,	// (0x00016bab) list_medium_line_x2_t4_g2_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t4_g2_g1

0x15a7,	// (0x00016bc3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x000248c9) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x000248c9) list_medium_line_x2_t4_g2_g

0xe028,	// (0x00023644) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe028,	// (0x00023644) list_medium_line_x2_t4_g2_t1

0xe042,	// (0x0002365e) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe042,	// (0x0002365e) list_medium_line_x2_t4_g2_t2

0xe057,	// (0x00023673) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe057,	// (0x00023673) list_medium_line_x2_t4_g2_t3

0x15c8,	// (0x00016be4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x00025365) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x00025365) list_medium_line_x2_t4_g2_t

0x5ba7,	// (0x0001b1c3) list_medium_line_t3_right_iconx2_g1

0x5a8f,	// (0x0001b0ab) list_medium_line_t3_right_iconx2_g2

0xe06c,	// (0x00023688) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x0002536e) list_medium_line_t3_right_iconx2_g

0xe074,	// (0x00023690) list_medium_line_t3_right_iconx2_t1

0xe084,	// (0x000236a0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x00025375) list_medium_line_t3_right_iconx2_t

0x158f,	// (0x00016bab) list_medium_line_x3_t4_g4_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x3_t4_g4_g1

0x159b,	// (0x00016bb7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x3_t4_g4_g2

0x1611,	// (0x00016c2d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1611,	// (0x00016c2d) list_medium_line_x3_t4_g4_g3

0x5baf,	// (0x0001b1cb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5baf,	// (0x0001b1cb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x0002537a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x0002537a) list_medium_line_x3_t4_g4_g

0xe092,	// (0x000236ae) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe092,	// (0x000236ae) list_medium_line_x3_t4_g4_t1

0xe0a9,	// (0x000236c5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe0a9,	// (0x000236c5) list_medium_line_x3_t4_g4_t2

0x1bc9,	// (0x000171e5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1bc9,	// (0x000171e5) list_medium_line_x3_t4_g4_t3

0x5bbb,	// (0x0001b1d7) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5bbb,	// (0x0001b1d7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x00025383) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x00025383) list_medium_line_x3_t4_g4_t

0xe0be,	// (0x000236da) list_single_dyc_row_text_pane_t1_ParamLimits

0xe0be,	// (0x000236da) list_single_dyc_row_text_pane_t1

0xe0f5,	// (0x00023711) list_single_dyc_row_text_pane_t2_ParamLimits

0xe0f5,	// (0x00023711) list_single_dyc_row_text_pane_t2

0x5bd8,	// (0x0001b1f4) list_single_dyc_row_text_pane_t3_ParamLimits

0x5bd8,	// (0x0001b1f4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x0002538c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x0002538c) list_single_dyc_row_text_pane_t

0x5bea,	// (0x0001b206) list_single_dyc_row_pane_g1_ParamLimits

0x5bea,	// (0x0001b206) list_single_dyc_row_pane_g1

0x5bf6,	// (0x0001b212) list_single_dyc_row_pane_g2_ParamLimits

0x5bf6,	// (0x0001b212) list_single_dyc_row_pane_g2

0x5c02,	// (0x0001b21e) list_single_dyc_row_pane_g3_ParamLimits

0x5c02,	// (0x0001b21e) list_single_dyc_row_pane_g3

0x5c0e,	// (0x0001b22a) list_single_dyc_row_pane_g4_ParamLimits

0x5c0e,	// (0x0001b22a) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x00025393) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x00025393) list_single_dyc_row_pane_g

0x5c1a,	// (0x0001b236) list_single_dyc_row_text_pane_ParamLimits

0x5c1a,	// (0x0001b236) list_single_dyc_row_text_pane

0x0ad5,	// (0x000160f1) bg_sp_fs_scroll_pane

0x5c39,	// (0x0001b255) thumb_sp_fs_scroll_pane

0x49f8,	// (0x0001a014) list_medium_line_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_g1

0x5c42,	// (0x0001b25e) list_medium_line_t1_ParamLimits

0x5c42,	// (0x0001b25e) list_medium_line_t1

0x158f,	// (0x00016bab) list_medium_line_x2_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_g1

0x159b,	// (0x00016bb7) list_medium_line_x2_g2_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x0002539c) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x0002539c) list_medium_line_x2_g

0x5c57,	// (0x0001b273) list_medium_line_x2_t1_ParamLimits

0x5c57,	// (0x0001b273) list_medium_line_x2_t1

0x158f,	// (0x00016bab) list_medium_line_x3_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x3_g1

0x159b,	// (0x00016bb7) list_medium_line_x3_g2_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x0002539c) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x0002539c) list_medium_line_x3_g

0x5c57,	// (0x0001b273) list_medium_line_x3_t1_ParamLimits

0x5c57,	// (0x0001b273) list_medium_line_x3_t1

0x5c6d,	// (0x0001b289) thumb_sp_fs_scroll_pane_g1

0x5c76,	// (0x0001b292) thumb_sp_fs_scroll_pane_g2

0x5c7f,	// (0x0001b29b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x000253a1) thumb_sp_fs_scroll_pane_g

0x5c6d,	// (0x0001b289) bg_sp_fs_scroll_pane_g1

0x5c76,	// (0x0001b292) bg_sp_fs_scroll_pane_g2

0x5c7f,	// (0x0001b29b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x000253a1) bg_sp_fs_scroll_pane_g

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g4_g1_ParamLimits

0x158f,	// (0x00016bab) list_medium_line_x2_t3_g4_g1

0x1605,	// (0x00016c21) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1605,	// (0x00016c21) list_medium_line_x2_t3_g4_g2

0x159b,	// (0x00016bb7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x159b,	// (0x00016bb7) list_medium_line_x2_t3_g4_g3

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x15a7,	// (0x00016bc3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00024945) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00024945) list_medium_line_x2_t3_g4_g

0xe14f,	// (0x0002376b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe14f,	// (0x0002376b) list_medium_line_x2_t3_g4_t1

0xe165,	// (0x00023781) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe165,	// (0x00023781) list_medium_line_x2_t3_g4_t2

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x15c8,	// (0x00016be4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x000253a8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x000253a8) list_medium_line_x2_t3_g4_t

0x49f8,	// (0x0001a014) list_medium_line_g2_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_g2_g1

0x4a04,	// (0x0001a020) list_medium_line_g2_g2_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00025075) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00025075) list_medium_line_g2_g

0x5c88,	// (0x0001b2a4) list_medium_line_g2_t1_ParamLimits

0x5c88,	// (0x0001b2a4) list_medium_line_g2_t1

0x49f8,	// (0x0001a014) list_medium_line_t3_g2_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t3_g2_g1

0x4a04,	// (0x0001a020) list_medium_line_t3_g2_g2_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00025075) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00025075) list_medium_line_t3_g2_g

0xe17f,	// (0x0002379b) list_medium_line_t3_g2_t1_ParamLimits

0xe17f,	// (0x0002379b) list_medium_line_t3_g2_t1

0xe196,	// (0x000237b2) list_medium_line_t3_g2_t2_ParamLimits

0xe196,	// (0x000237b2) list_medium_line_t3_g2_t2

0xe1ab,	// (0x000237c7) list_medium_line_t3_g2_t3_ParamLimits

0xe1ab,	// (0x000237c7) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x000253af) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x000253af) list_medium_line_t3_g2_t

0x5a8f,	// (0x0001b0ab) list_medium_line_right_icon_g1

0x5c9d,	// (0x0001b2b9) list_medium_line_right_icon_t1

0x49f8,	// (0x0001a014) list_medium_line_t2_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t2_g1

0xe1c0,	// (0x000237dc) list_medium_line_t2_t1_ParamLimits

0xe1c0,	// (0x000237dc) list_medium_line_t2_t1

0xe1da,	// (0x000237f6) list_medium_line_t2_t2_ParamLimits

0xe1da,	// (0x000237f6) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x000253b6) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x000253b6) list_medium_line_t2_t

0x49f8,	// (0x0001a014) list_medium_line_t3_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t3_g1

0xe1ef,	// (0x0002380b) list_medium_line_t3_t1_ParamLimits

0xe1ef,	// (0x0002380b) list_medium_line_t3_t1

0xe209,	// (0x00023825) list_medium_line_t3_t2_ParamLimits

0xe209,	// (0x00023825) list_medium_line_t3_t2

0xe21e,	// (0x0002383a) list_medium_line_t3_t3_ParamLimits

0xe21e,	// (0x0002383a) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x000253bb) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x000253bb) list_medium_line_t3_t

0x49f8,	// (0x0001a014) list_medium_line_g3_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_g3_g1

0x5cab,	// (0x0001b2c7) list_medium_line_g3_g2_ParamLimits

0x5cab,	// (0x0001b2c7) list_medium_line_g3_g2

0x4a04,	// (0x0001a020) list_medium_line_g3_g3_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x000253c2) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x000253c2) list_medium_line_g3_g

0x5cb7,	// (0x0001b2d3) list_medium_line_g3_t1_ParamLimits

0x5cb7,	// (0x0001b2d3) list_medium_line_g3_t1

0x49f8,	// (0x0001a014) list_medium_line_t2_g3_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t2_g3_g1

0x5cab,	// (0x0001b2c7) list_medium_line_t2_g3_g2_ParamLimits

0x5cab,	// (0x0001b2c7) list_medium_line_t2_g3_g2

0x4a04,	// (0x0001a020) list_medium_line_t2_g3_g3_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x000253c2) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x000253c2) list_medium_line_t2_g3_g

0xe233,	// (0x0002384f) list_medium_line_t2_g3_t1_ParamLimits

0xe233,	// (0x0002384f) list_medium_line_t2_g3_t1

0xe24d,	// (0x00023869) list_medium_line_t2_g3_t2_ParamLimits

0xe24d,	// (0x00023869) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x000253c9) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x000253c9) list_medium_line_t2_g3_t

0x49f8,	// (0x0001a014) list_medium_line_t3_g3_g1_ParamLimits

0x49f8,	// (0x0001a014) list_medium_line_t3_g3_g1

0x5cab,	// (0x0001b2c7) list_medium_line_t3_g3_g2_ParamLimits

0x5cab,	// (0x0001b2c7) list_medium_line_t3_g3_g2

0x4a04,	// (0x0001a020) list_medium_line_t3_g3_g3_ParamLimits

0x4a04,	// (0x0001a020) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x000253c2) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x000253c2) list_medium_line_t3_g3_g

0xe262,	// (0x0002387e) list_medium_line_t3_g3_t1_ParamLimits

0xe262,	// (0x0002387e) list_medium_line_t3_g3_t1

0xe276,	// (0x00023892) list_medium_line_t3_g3_t2_ParamLimits

0xe276,	// (0x00023892) list_medium_line_t3_g3_t2

0xe288,	// (0x000238a4) list_medium_line_t3_g3_t3_ParamLimits

0xe288,	// (0x000238a4) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x000253ce) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x000253ce) list_medium_line_t3_g3_t

0x5ba7,	// (0x0001b1c3) list_medium_line_right_iconx2_g1

0x5a8f,	// (0x0001b0ab) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x000253d5) list_medium_line_right_iconx2_g

0x5ccc,	// (0x0001b2e8) list_medium_line_right_iconx2_t1

0x5ba7,	// (0x0001b1c3) list_medium_line_t2_right_iconx2_g1

0x5a8f,	// (0x0001b0ab) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x000253d5) list_medium_line_t2_right_iconx2_g

0xe29a,	// (0x000238b6) list_medium_line_t2_right_iconx2_t1

0xe2aa,	// (0x000238c6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x000253da) list_medium_line_t2_right_iconx2_t

0x5cda,	// (0x0001b2f6) list_medium_line_x4_t4_t1

0xe2b8,	// (0x000238d4) list_medium_line_x4_t4_t2

0xe2c8,	// (0x000238e4) list_medium_line_x4_t4_t3

0xe2d8,	// (0x000238f4) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x000253df) list_medium_line_x4_t4_t

0xe311,	// (0x0002392d) tport_appsw_pane_ParamLimits

0xe311,	// (0x0002392d) tport_appsw_pane

0xe31d,	// (0x00023939) tport_contact_pane_ParamLimits

0xe31d,	// (0x00023939) tport_contact_pane

0xe32d,	// (0x00023949) tport_listscroll_pane_ParamLimits

0xe32d,	// (0x00023949) tport_listscroll_pane

0xe33d,	// (0x00023959) cell_tport_appsw_pane_ParamLimits

0xe33d,	// (0x00023959) cell_tport_appsw_pane

0x3ce9,	// (0x00019305) tport_appsw_pane_g1_ParamLimits

0x3ce9,	// (0x00019305) tport_appsw_pane_g1

0x5ce8,	// (0x0001b304) tport_contact_pane_g1

0x54d5,	// (0x0001aaf1) tport_contact_pane_t1

0x5cf1,	// (0x0001b30d) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x000253e8) tport_contact_pane_t

0x5cff,	// (0x0001b31b) list_tport_pane

0x5d08,	// (0x0001b324) scroll_pane_cp_030

0xe352,	// (0x0002396e) cell_tport_appsw_pane_g1

0x5d11,	// (0x0001b32d) cell_tport_appsw_pane_t1

0x0ad5,	// (0x000160f1) grid_highlight_pane_cp019

0xe36a,	// (0x00023986) list_tport_double_graphic_pane_ParamLimits

0xe36a,	// (0x00023986) list_tport_double_graphic_pane

0x0b45,	// (0x00016161) list_highlight_pane_cp023_ParamLimits

0x0b45,	// (0x00016161) list_highlight_pane_cp023

0xe37c,	// (0x00023998) list_tport_double_graphic_pane_g1_ParamLimits

0xe37c,	// (0x00023998) list_tport_double_graphic_pane_g1

0xe389,	// (0x000239a5) list_tport_double_graphic_pane_t1_ParamLimits

0xe389,	// (0x000239a5) list_tport_double_graphic_pane_t1

0xe39e,	// (0x000239ba) list_tport_double_graphic_pane_t2_ParamLimits

0xe39e,	// (0x000239ba) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x000253f4) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x000253f4) list_tport_double_graphic_pane_t

0x0ad5,	// (0x000160f1) main_cale_note_pane

0x813f,	// (0x0001d75b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x813f,	// (0x0001d75b) cell_vitu2_function_top_wide_pane_cp01

0xdb20,	// (0x0002313c) wait_bar_pane_cp05_ParamLimits

0x0ad5,	// (0x000160f1) listscroll_cmail_pane

0x5d27,	// (0x0001b343) list_cmail_pane

0xe3ba,	// (0x000239d6) list_cmail_body_pane

0xe3d7,	// (0x000239f3) list_single_cmail_header_caption_pane

0xe3fc,	// (0x00023a18) list_single_cmail_header_detail_pane_ParamLimits

0xe3fc,	// (0x00023a18) list_single_cmail_header_detail_pane

0xe42f,	// (0x00023a4b) list_single_cmail_header_caption_pane_t1

0xe43d,	// (0x00023a59) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe43d,	// (0x00023a59) list_single_cmail_header_detail_pane_g1

0x5d48,	// (0x0001b364) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5d48,	// (0x0001b364) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x000253f9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x000253f9) list_single_cmail_header_detail_pane_g

0x5d61,	// (0x0001b37d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5d61,	// (0x0001b37d) list_single_cmail_header_detail_pane_t1

0x5d97,	// (0x0001b3b3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5d97,	// (0x0001b3b3) list_single_cmail_header_editor_pane_bg

0x5656,	// (0x0001ac72) list_cmail_body_pane_g1

0x5dc2,	// (0x0001b3de) list_cmail_body_pane_t1

0x472b,	// (0x00019d47) list_single_cmail_header_editor_pane_bg_g1

0x182c,	// (0x00016e48) list_single_cmail_header_editor_pane_bg_g1_copy1

0x473b,	// (0x00019d57) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4733,	// (0x00019d4f) list_single_cmail_header_editor_pane_bg_g1_copy3

0x49d0,	// (0x00019fec) list_single_cmail_header_editor_pane_bg_g1_copy4

0x475b,	// (0x00019d77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x474b,	// (0x00019d67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4753,	// (0x00019d6f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x180c,	// (0x00016e28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe477,	// (0x00023a93) calenote_gesture_pane_ParamLimits

0xe477,	// (0x00023a93) calenote_gesture_pane

0xe491,	// (0x00023aad) calenote_window_pane_ParamLimits

0xe491,	// (0x00023aad) calenote_window_pane

0x5dd0,	// (0x0001b3ec) popup_note_window_cp01

0xe4a9,	// (0x00023ac5) calenote_swipe_1_pane_ParamLimits

0xe4a9,	// (0x00023ac5) calenote_swipe_1_pane

0xdef8,	// (0x00023514) calenote_swipe_2_pane_ParamLimits

0xdef8,	// (0x00023514) calenote_swipe_2_pane

0x5990,	// (0x0001afac) calenote_swipe_1_pane_g1_ParamLimits

0x5990,	// (0x0001afac) calenote_swipe_1_pane_g1

0x599d,	// (0x0001afb9) calenote_swipe_1_pane_g2_ParamLimits

0x599d,	// (0x0001afb9) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0002532d) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0002532d) calenote_swipe_1_pane_g

0x5de2,	// (0x0001b3fe) calenote_swipe_1_pane_t1_ParamLimits

0x5de2,	// (0x0001b3fe) calenote_swipe_1_pane_t1

0x5990,	// (0x0001afac) calenote_swipe_2_pane_g1_ParamLimits

0x5990,	// (0x0001afac) calenote_swipe_2_pane_g1

0x5e01,	// (0x0001b41d) calenote_swipe_2_pane_g2_ParamLimits

0x5e01,	// (0x0001b41d) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x00025405) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x00025405) calenote_swipe_2_pane_g

0x5e0d,	// (0x0001b429) calenote_swipe_2_pane_t1_ParamLimits

0x5e0d,	// (0x0001b429) calenote_swipe_2_pane_t1

0x0ad5,	// (0x000160f1) main_mup_navstr_pane

0xbd18,	// (0x00021334) main_mup3_pane_t7_ParamLimits

0xbd18,	// (0x00021334) main_mup3_pane_t7

0x7a69,	// (0x0001d085) main_mp4_pane_g6_ParamLimits

0x7a69,	// (0x0001d085) main_mp4_pane_g6

0x7d4e,	// (0x0001d36a) main_image3_pane_t4_ParamLimits

0x7d4e,	// (0x0001d36a) main_image3_pane_t4

0xe4bc,	// (0x00023ad8) popup_navstr_preview_pane_ParamLimits

0xe4bc,	// (0x00023ad8) popup_navstr_preview_pane

0xe4c8,	// (0x00023ae4) scroll_navstr_pane_ParamLimits

0xe4c8,	// (0x00023ae4) scroll_navstr_pane

0x0ad5,	// (0x000160f1) bg_popup_preview_window_pane_cp04

0x5e34,	// (0x0001b450) popup_navstr_preview_pane_t1

0xe4d4,	// (0x00023af0) scroll_navstr_pane_g1_ParamLimits

0xe4d4,	// (0x00023af0) scroll_navstr_pane_g1

0xe4e1,	// (0x00023afd) scroll_navstr_pane_t1_ParamLimits

0xe4e1,	// (0x00023afd) scroll_navstr_pane_t1

0x5dd9,	// (0x0001b3f5) bg_button_pane_cp014

0x5dd9,	// (0x0001b3f5) bg_button_pane_cp030

0xddec,	// (0x00023408) list_double_fisheye_pane_g4_ParamLimits

0xddec,	// (0x00023408) list_double_fisheye_pane_g4

0xddf8,	// (0x00023414) list_double_fisheye_pane_g5_ParamLimits

0xddf8,	// (0x00023414) list_double_fisheye_pane_g5

0x5d2f,	// (0x0001b34b) sp_fs_scroll_pane_cp03

0x5acf,	// (0x0001b0eb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5adb,	// (0x0001b0f7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0002534a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5ae7,	// (0x0001b103) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe3b0,	// (0x000239cc) sp_fs_scroll_pane_cp02

0x142a,	// (0x00016a46) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x142a,	// (0x00016a46) popup_sp_fs_calendar_preview_list_single_pane

0x0ad5,	// (0x000160f1) main_cam6_pano_pane

0x0b45,	// (0x00016161) main_mup3_pane_ParamLimits

0x0ad5,	// (0x000160f1) main_phacti_pane

0xd9f5,	// (0x00023011) bg_button_pane_cp11

0xda0d,	// (0x00023029) main_mobtv_info_pane_g2_ParamLimits

0xda0d,	// (0x00023029) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x000252aa) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x000252aa) main_mobtv_info_pane_g

0xdbbf,	// (0x000231db) sc_clock_pane_t5_ParamLimits

0xdbbf,	// (0x000231db) sc_clock_pane_t5

0xdc5d,	// (0x00023279) main_radioblah_pane_g1_ParamLimits

0x58dc,	// (0x0001aef8) main_radioblah_pane_t3_ParamLimits

0x58dc,	// (0x0001aef8) main_radioblah_pane_t3

0x58f4,	// (0x0001af10) main_radioblah_pane_t4_ParamLimits

0x58f4,	// (0x0001af10) main_radioblah_pane_t4

0xdc7b,	// (0x00023297) main_radioblah_text_pane_ParamLimits

0xdc7b,	// (0x00023297) main_radioblah_text_pane

0xdc88,	// (0x000232a4) main_radioblah_info_pane_g1_ParamLimits

0xdd1d,	// (0x00023339) main_radioblah_info_pane_t4_ParamLimits

0xdd1d,	// (0x00023339) main_radioblah_info_pane_t4

0x0b45,	// (0x00016161) main_sp_fs_calendar_pane

0xe4f3,	// (0x00023b0f) main_phacti_pane_g1

0xe4fb,	// (0x00023b17) phacti_note_pane_ParamLimits

0xe4fb,	// (0x00023b17) phacti_note_pane

0x5e4b,	// (0x0001b467) phacti_term_pane_ParamLimits

0x5e4b,	// (0x0001b467) phacti_term_pane

0x5e60,	// (0x0001b47c) phacti_note_pane_t1_ParamLimits

0x5e60,	// (0x0001b47c) phacti_note_pane_t1

0x5e77,	// (0x0001b493) phacti_term_pane_g1

0x5e7f,	// (0x0001b49b) phacti_term_pane_t1_ParamLimits

0x5e7f,	// (0x0001b49b) phacti_term_pane_t1

0x5ea9,	// (0x0001b4c5) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1587,	// (0x00016ba3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x0002540f) popup_sp_fs_calendar_preview_list_single_pane_g

0x5eb1,	// (0x0001b4cd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5eb1,	// (0x0001b4cd) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5ec6,	// (0x0001b4e2) aid_popup_sp_fs_bg_corner_pane

0x3a0c,	// (0x00019028) popup_sp_fs_calendar_preview_bg_pane_g1

0x0ad5,	// (0x000160f1) popup_sp_fs_calendar_preview_bg_pane

0x5ece,	// (0x0001b4ea) popup_sp_fs_calendar_preview_list_pane

0x0b45,	// (0x00016161) bg_main_sp_fs_cale_pane_ParamLimits

0x0b45,	// (0x00016161) bg_main_sp_fs_cale_pane

0x5edf,	// (0x0001b4fb) listscroll_cale_mrui_pane_ParamLimits

0x5edf,	// (0x0001b4fb) listscroll_cale_mrui_pane

0x5ef3,	// (0x0001b50f) listscroll_sp_fs_schedule_track_pane

0x5efc,	// (0x0001b518) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5efc,	// (0x0001b518) main_sp_fs_ctrlbar_pane_cp01

0x5f0d,	// (0x0001b529) main_sp_fs_ribbon_pane

0x5f15,	// (0x0001b531) popup_sp_fs_cale_preview_window

0x5da9,	// (0x0001b3c5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x5da9,	// (0x0001b3c5) list_single_sp_fs_schedule_track_pane

0x3d26,	// (0x00019342) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3d26,	// (0x00019342) bg_sp_fs_highlight_list_pane_cp03

0xe53a,	// (0x00023b56) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe53a,	// (0x00023b56) list_single_sp_fs_schedule_track_pane_g1

0xe546,	// (0x00023b62) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe546,	// (0x00023b62) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x00025414) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x00025414) list_single_sp_fs_schedule_track_pane_g

0xe552,	// (0x00023b6e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe552,	// (0x00023b6e) list_single_sp_fs_schedule_track_pane_t1

0xe56a,	// (0x00023b86) sp_fs_schedule_track_pane_ParamLimits

0xe56a,	// (0x00023b86) sp_fs_schedule_track_pane

0x5f27,	// (0x0001b543) sp_fs_schedule_track_pane_g1

0x5f2f,	// (0x0001b54b) sp_fs_schedule_track_pane_g2

0x5f37,	// (0x0001b553) sp_fs_schedule_track_pane_g3

0x5f3f,	// (0x0001b55b) sp_fs_schedule_track_pane_g4

0x5f47,	// (0x0001b563) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x00025419) sp_fs_schedule_track_pane_g

0x472b,	// (0x00019d47) bg_sp_fs_schedule_viewer_highlight_g1

0x182c,	// (0x00016e48) bg_sp_fs_schedule_viewer_highlight_g2

0x4733,	// (0x00019d4f) bg_sp_fs_schedule_viewer_highlight_g3

0x473b,	// (0x00019d57) bg_sp_fs_schedule_viewer_highlight_g4

0x49d0,	// (0x00019fec) bg_sp_fs_schedule_viewer_highlight_g5

0x474b,	// (0x00019d67) bg_sp_fs_schedule_viewer_highlight_g6

0x4753,	// (0x00019d6f) bg_sp_fs_schedule_viewer_highlight_g7

0x475b,	// (0x00019d77) bg_sp_fs_schedule_viewer_highlight_g8

0x180c,	// (0x00016e28) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x00025424) bg_sp_fs_schedule_viewer_highlight_g

0x0ad5,	// (0x000160f1) bg_main_sp_fs_ribbon_pane

0xe57a,	// (0x00023b96) main_sp_fs_ribbon_pane_g1

0x5f4f,	// (0x0001b56b) main_sp_fs_ribbon_pane_t1

0xe583,	// (0x00023b9f) main_sp_fs_ribbon_pane_t2

0x5f5e,	// (0x0001b57a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x00025437) main_sp_fs_ribbon_pane_t

0x5f6d,	// (0x0001b589) main_sp_fs_ribbon_scheduler_pane

0x5f75,	// (0x0001b591) bg_main_sp_fs_ribbon_pane_g1

0x5f7e,	// (0x0001b59a) bg_main_sp_fs_ribbon_pane_g2

0x5f87,	// (0x0001b5a3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x0002543e) bg_main_sp_fs_ribbon_pane_g

0x5f8f,	// (0x0001b5ab) main_sp_fs_ribbon_scheduler_pane_g1

0x5f98,	// (0x0001b5b4) main_sp_fs_ribbon_scheduler_pane_g2

0x5fa1,	// (0x0001b5bd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x00025445) main_sp_fs_ribbon_scheduler_pane_g

0x5faa,	// (0x0001b5c6) list_cale_mrui_pane

0xe592,	// (0x00023bae) sp_fs_scroll_pane_cp07_ParamLimits

0xe592,	// (0x00023bae) sp_fs_scroll_pane_cp07

0xe5a8,	// (0x00023bc4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe5a8,	// (0x00023bc4) bg_sp_fs_schedule_viewer_highlight

0x5fb3,	// (0x0001b5cf) list_single_sp_fs_schedule_track_pane_cp01

0x5fbb,	// (0x0001b5d7) list_sp_fs_schedule_track_pane

0x5fc3,	// (0x0001b5df) sp_fs_scroll_pane_cp06_ParamLimits

0x5fc3,	// (0x0001b5df) sp_fs_scroll_pane_cp06

0x3a0c,	// (0x00019028) bgmain_sp_fs_calendar_pane_g1

0xe5b5,	// (0x00023bd1) list_single_cale_mrui_pane_ParamLimits

0xe5b5,	// (0x00023bd1) list_single_cale_mrui_pane

0x5fd5,	// (0x0001b5f1) list_single_cale_mrui_row_pane_ParamLimits

0x5fd5,	// (0x0001b5f1) list_single_cale_mrui_row_pane

0x5fe2,	// (0x0001b5fe) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5fe2,	// (0x0001b5fe) list_single_cale_mrui_row_pane_g1

0x601a,	// (0x0001b636) list_single_cale_mrui_row_pane_t1_ParamLimits

0x601a,	// (0x0001b636) list_single_cale_mrui_row_pane_t1

0xe5da,	// (0x00023bf6) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe5da,	// (0x00023bf6) list_single_cale_mrui_row_pane_t2

0x602c,	// (0x0001b648) list_single_cale_mrui_row_pane_t3_ParamLimits

0x602c,	// (0x0001b648) list_single_cale_mrui_row_pane_t3

0x605b,	// (0x0001b677) list_single_cale_mrui_row_pane_t4_ParamLimits

0x605b,	// (0x0001b677) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x00025451) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x00025451) list_single_cale_mrui_row_pane_t

0xe640,	// (0x00023c5c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe640,	// (0x00023c5c) list_single_cmail_header_editor_pane_bg_cp01

0xe660,	// (0x00023c7c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe660,	// (0x00023c7c) list_single_cmail_header_editor_pane_bg_cp02

0xe67c,	// (0x00023c98) main_radioblah_text_pane_t1_ParamLimits

0xe67c,	// (0x00023c98) main_radioblah_text_pane_t1

0x608a,	// (0x0001b6a6) cam6_indi_pane_cp01

0x6092,	// (0x0001b6ae) cam6_mode_pane_cp01

0x609a,	// (0x0001b6b6) cam6_pano_pane

0x60a3,	// (0x0001b6bf) cam6_zoom_pane_cp01

0x60ab,	// (0x0001b6c7) cam6_pano_image_pane

0x60b6,	// (0x0001b6d2) cam6_pano_pane_g1

0x5656,	// (0x0001ac72) cam6_pano_pane_g2

0x60bf,	// (0x0001b6db) cam6_pano_pane_g3

0x60c8,	// (0x0001b6e4) cam6_pano_pane_g4

0x3fce,	// (0x000195ea) cam6_pano_pane_g5

0x60d1,	// (0x0001b6ed) cam6_pano_pane_g6

0x50a1,	// (0x0001a6bd) cam6_pano_pane_g7

0x60db,	// (0x0001b6f7) cam6_pano_pane_g8

0x60e4,	// (0x0001b700) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x0002545a) cam6_pano_pane_g

0x0ad5,	// (0x000160f1) main_browser_tag_pane

0x5e2c,	// (0x0001b448) grid_navstr_albumart_pane

0x60ef,	// (0x0001b70b) cell_navstr_albumart_pane_ParamLimits

0x60ef,	// (0x0001b70b) cell_navstr_albumart_pane

0x6112,	// (0x0001b72e) cell_navstr_albumart_pane_g1

0x3323,	// (0x0001893f) cell_navstr_albumart_pane_g2

0x3333,	// (0x0001894f) cell_navstr_albumart_pane_g3

0x332b,	// (0x00018947) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x0002546d) cell_navstr_albumart_pane_g

0xe697,	// (0x00023cb3) bt_list_pane_ParamLimits

0xe697,	// (0x00023cb3) bt_list_pane

0xe6b7,	// (0x00023cd3) bt_list_pane_t1

0xe6c6,	// (0x00023ce2) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x00025476) bt_list_pane_t

0x0ad5,	// (0x000160f1) main_cale_prevew_pane

0xe6d5,	// (0x00023cf1) popup_cale_preview_window_ParamLimits

0xe6d5,	// (0x00023cf1) popup_cale_preview_window

0x0b45,	// (0x00016161) bg_popup_preview_window_pane_cp05_ParamLimits

0x0b45,	// (0x00016161) bg_popup_preview_window_pane_cp05

0x611a,	// (0x0001b736) list_cale_preview_pane_ParamLimits

0x611a,	// (0x0001b736) list_cale_preview_pane

0x6126,	// (0x0001b742) list_double_cale_preview_pane_ParamLimits

0x6126,	// (0x0001b742) list_double_cale_preview_pane

0xe6ee,	// (0x00023d0a) list_single_cale_preview_pane_ParamLimits

0xe6ee,	// (0x00023d0a) list_single_cale_preview_pane

0xe704,	// (0x00023d20) list_single_cale_preview_pane_g1

0xe70c,	// (0x00023d28) list_single_cale_preview_pane_t1_ParamLimits

0xe70c,	// (0x00023d28) list_single_cale_preview_pane_t1

0xe721,	// (0x00023d3d) list_double_cale_preview_pane_g1

0xe729,	// (0x00023d45) list_double_cale_preview_pane_t1_ParamLimits

0xe729,	// (0x00023d45) list_double_cale_preview_pane_t1

0xe73e,	// (0x00023d5a) list_double_cale_preview_pane_t2_ParamLimits

0xe73e,	// (0x00023d5a) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x0002547b) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x0002547b) list_double_cale_preview_pane_t

0x0ad5,	// (0x000160f1) main_ezdial_pane

0x0b45,	// (0x00016161) main_sp_fs_email_pane_ParamLimits

0xdf30,	// (0x0002354c) cmail_ddmenu_btn01_pane_ParamLimits

0xdf30,	// (0x0002354c) cmail_ddmenu_btn01_pane

0xdf4d,	// (0x00023569) cmail_ddmenu_btn02_pane_ParamLimits

0xdf4d,	// (0x00023569) cmail_ddmenu_btn02_pane

0xdf6b,	// (0x00023587) cmail_ddmenu_btn03_pane_ParamLimits

0xdf6b,	// (0x00023587) cmail_ddmenu_btn03_pane

0xdf99,	// (0x000235b5) main_sp_fs_ctrlbar_pane_ParamLimits

0xdfb5,	// (0x000235d1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe3ba,	// (0x000239d6) list_cmail_body_pane_ParamLimits

0x5d3f,	// (0x0001b35b) bg_button_pane_cp12

0x5d54,	// (0x0001b370) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5d54,	// (0x0001b370) list_single_cmail_header_detail_pane_g3

0xe453,	// (0x00023a6f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe453,	// (0x00023a6f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x00025400) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x00025400) list_single_cmail_header_detail_pane_t

0x5e94,	// (0x0001b4b0) phacti_term_pane_t2_ParamLimits

0x5e94,	// (0x0001b4b0) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x0002540a) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x0002540a) phacti_term_pane_t

0x6138,	// (0x0001b754) aid_size_list_single_double

0xe756,	// (0x00023d72) popup_ezdial_listscroll_window

0xe776,	// (0x00023d92) popup_number_entry_window_cp01

0x2049,	// (0x00017665) bg_popup_call_pane_cp09

0x6144,	// (0x0001b760) ezdial_list_pane

0x614c,	// (0x0001b768) scroll_pane_cp23

0x37f1,	// (0x00018e0d) bg_button_pane_cp028_ParamLimits

0x37f1,	// (0x00018e0d) bg_button_pane_cp028

0xe784,	// (0x00023da0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe784,	// (0x00023da0) cmail_ddmenu_btn01_pane_g1

0xe794,	// (0x00023db0) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe794,	// (0x00023db0) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x00025480) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x00025480) cmail_ddmenu_btn01_pane_g

0x6154,	// (0x0001b770) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x6154,	// (0x0001b770) cmail_ddmenu_btn01_pane_t1

0x3506,	// (0x00018b22) bg_button_pane_cp029_ParamLimits

0x3506,	// (0x00018b22) bg_button_pane_cp029

0xe794,	// (0x00023db0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe794,	// (0x00023db0) cmail_ddmenu_btn02_pane_g1

0xe7ac,	// (0x00023dc8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe7ac,	// (0x00023dc8) cmail_ddmenu_btn02_pane_t1

0x3d26,	// (0x00019342) bg_button_pane_cp031_ParamLimits

0x3d26,	// (0x00019342) bg_button_pane_cp031

0xe794,	// (0x00023db0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe794,	// (0x00023db0) cmail_ddmenu_btn03_pane_g1

0xe7ac,	// (0x00023dc8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe7ac,	// (0x00023dc8) cmail_ddmenu_btn03_pane_t1

0xc55f,	// (0x00021b7b) cell_dialer2_keypad_pane_t1_ParamLimits

0xc579,	// (0x00021b95) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc579,	// (0x00021b95) cell_dialer2_keypad_pane_t1_copy1

0xd8b7,	// (0x00022ed3) ncimui_group_button_pane

0x0b45,	// (0x00016161) main_sp_fs_calendar_pane_ParamLimits

0xe3d7,	// (0x000239f3) list_single_cmail_header_caption_pane_ParamLimits

0x5ed6,	// (0x0001b4f2) aid_recal_txt_sm_pane

0x0ad5,	// (0x000160f1) mian_recal_day_pane

0x5f15,	// (0x0001b531) popup_sp_fs_cale_preview_window_ParamLimits

0x0ad5,	// (0x000160f1) list_recal_day_pane

0x618b,	// (0x0001b7a7) list_single_recal_day_pane_ParamLimits

0x618b,	// (0x0001b7a7) list_single_recal_day_pane

0x619d,	// (0x0001b7b9) list_single_recal_day_pane_g1_ParamLimits

0x619d,	// (0x0001b7b9) list_single_recal_day_pane_g1

0x61a9,	// (0x0001b7c5) list_single_recal_day_pane_g2_ParamLimits

0x61a9,	// (0x0001b7c5) list_single_recal_day_pane_g2

0x61b8,	// (0x0001b7d4) list_single_recal_day_pane_g3_ParamLimits

0x61b8,	// (0x0001b7d4) list_single_recal_day_pane_g3

0xe7d0,	// (0x00023dec) list_single_recal_day_pane_g4_ParamLimits

0xe7d0,	// (0x00023dec) list_single_recal_day_pane_g4

0x61c4,	// (0x0001b7e0) list_single_recal_day_pane_g5_ParamLimits

0x61c4,	// (0x0001b7e0) list_single_recal_day_pane_g5

0x61d3,	// (0x0001b7ef) list_single_recal_day_pane_g6_ParamLimits

0x61d3,	// (0x0001b7ef) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x0002548f) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x0002548f) list_single_recal_day_pane_g

0x61df,	// (0x0001b7fb) list_single_recal_day_pane_t1

0x61ed,	// (0x0001b809) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x0002549c) list_single_recal_day_pane_t

0xe7e3,	// (0x00023dff) ncimui_query_button_pane_ParamLimits

0xe7e3,	// (0x00023dff) ncimui_query_button_pane

0xe7f3,	// (0x00023e0f) ncimui_query_button_pane_t1_ParamLimits

0xe7f3,	// (0x00023e0f) ncimui_query_button_pane_t1

0x61fb,	// (0x0001b817) ncimui_query_button_pane_t2_ParamLimits

0x61fb,	// (0x0001b817) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x000254a1) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x000254a1) ncimui_query_button_pane_t

0xe806,	// (0x00023e22) query_button_pane_ParamLimits

0xe806,	// (0x00023e22) query_button_pane

0x0ad5,	// (0x000160f1) bg_button_pane_cp0028

0x620e,	// (0x0001b82a) query_button_pane_t1

0xb039,	// (0x00020655) main_tport_pane_ParamLimits

0xe2e8,	// (0x00023904) bg_popup_window_pane_cp01_ParamLimits

0xe2e8,	// (0x00023904) bg_popup_window_pane_cp01

0xe2f5,	// (0x00023911) heading_pane_cp08_ParamLimits

0xe2f5,	// (0x00023911) heading_pane_cp08

0xe303,	// (0x0002391f) heading_pane_cp07_ParamLimits

0xe303,	// (0x0002391f) heading_pane_cp07

0xe35a,	// (0x00023976) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x000253ed) cell_tport_appsw_pane_g

0x21ca,	// (0x000177e6) input_candi_list_open_g1

0x1a2b,	// (0x00017047) list_cale_time_pane_g6_ParamLimits

0x1a2b,	// (0x00017047) list_cale_time_pane_g6

0xb785,	// (0x00020da1) aid_size_touch_calib_1_ParamLimits

0xb785,	// (0x00020da1) aid_size_touch_calib_1

0xb791,	// (0x00020dad) aid_size_touch_calib_2_ParamLimits

0xb791,	// (0x00020dad) aid_size_touch_calib_2

0xb79f,	// (0x00020dbb) aid_size_touch_calib_3_ParamLimits

0xb79f,	// (0x00020dbb) aid_size_touch_calib_3

0xb7af,	// (0x00020dcb) aid_size_touch_calib_4_ParamLimits

0xb7af,	// (0x00020dcb) aid_size_touch_calib_4

0xb7bd,	// (0x00020dd9) main_touch_calib_button_group_pane_ParamLimits

0xb7bd,	// (0x00020dd9) main_touch_calib_button_group_pane

0xb7cb,	// (0x00020de7) main_touch_calib_pane_g1_ParamLimits

0xb7d7,	// (0x00020df3) main_touch_calib_pane_g2_ParamLimits

0xb7e3,	// (0x00020dff) main_touch_calib_pane_g3_ParamLimits

0xb7ef,	// (0x00020e0b) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00024dd4) main_touch_calib_pane_g_ParamLimits

0xb7fb,	// (0x00020e17) main_touch_calib_pane_t1_ParamLimits

0xb812,	// (0x00020e2e) main_touch_calib_pane_t2_ParamLimits

0xb829,	// (0x00020e45) main_touch_calib_pane_t3_ParamLimits

0xb83d,	// (0x00020e59) main_touch_calib_pane_t4_ParamLimits

0xb851,	// (0x00020e6d) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00024ddd) main_touch_calib_pane_t_ParamLimits

0x3da4,	// (0x000193c0) list_single_fp_cale_pane_g3_ParamLimits

0x3da4,	// (0x000193c0) list_single_fp_cale_pane_g3

0x7f49,	// (0x0001d565) bg_button_pane_cp012_ParamLimits

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp03_ParamLimits

0x8345,	// (0x0001d961) cell_vitu2_function_top_pane_g1_ParamLimits

0x7f49,	// (0x0001d565) bg_vkb2_func_pane_cp04_ParamLimits

0xd868,	// (0x00022e84) main_ncimui_button_group_pane_ParamLimits

0xd868,	// (0x00022e84) main_ncimui_button_group_pane

0xd8a5,	// (0x00022ec1) main_ncimui_pane_t3_ParamLimits

0xd8a5,	// (0x00022ec1) main_ncimui_pane_t3

0x5e42,	// (0x0001b45e) phacti_button_group_pane

0x6138,	// (0x0001b754) aid_size_list_single_double_ParamLimits

0xe756,	// (0x00023d72) popup_ezdial_listscroll_window_ParamLimits

0xe776,	// (0x00023d92) popup_number_entry_window_cp01_ParamLimits

0xe813,	// (0x00023e2f) phacti_button_pane_ParamLimits

0xe813,	// (0x00023e2f) phacti_button_pane

0x0ad5,	// (0x000160f1) bg_button_pane_cp14

0x621c,	// (0x0001b838) phacti_button_pane_t1

0xe824,	// (0x00023e40) main_touch_calib_button_pane_ParamLimits

0xe824,	// (0x00023e40) main_touch_calib_button_pane

0x12ba,	// (0x000168d6) bg_button_pane_cp18_ParamLimits

0x12ba,	// (0x000168d6) bg_button_pane_cp18

0x622a,	// (0x0001b846) main_touch_calib_button_pane_t1_ParamLimits

0x622a,	// (0x0001b846) main_touch_calib_button_pane_t1

0x6240,	// (0x0001b85c) main_touch_calib_button_pane_t2_ParamLimits

0x6240,	// (0x0001b85c) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x000254a6) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x000254a6) main_touch_calib_button_pane_t

0x0ad5,	// (0x000160f1) cell_ncimui_button_pane

0x0ad5,	// (0x000160f1) bg_button_pane_cp032

0x625e,	// (0x0001b87a) cell_ncimui_button_pane_t1

0x7c61,	// (0x0001d27d) image3_infobar_pane_ParamLimits

0x7c61,	// (0x0001d27d) image3_infobar_pane

0xdbe1,	// (0x000231fd) fs_bigclock_status_pane_ParamLimits

0xdbe1,	// (0x000231fd) fs_bigclock_status_pane

0xdbee,	// (0x0002320a) main_fs_bigclock_clock_pane_ParamLimits

0xdbee,	// (0x0002320a) main_fs_bigclock_clock_pane

0xdbfe,	// (0x0002321a) main_fs_bigclock_indi_pane_ParamLimits

0xdbfe,	// (0x0002321a) main_fs_bigclock_indi_pane

0xdc2b,	// (0x00023247) main_fs_bigclock_swipe_pane_ParamLimits

0xdc2b,	// (0x00023247) main_fs_bigclock_swipe_pane

0x0ad5,	// (0x000160f1) main_fs_clock_dumped_data

0x5763,	// (0x0001ad7f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5763,	// (0x0001ad7f) list_single_fs_bigclock_indicator_pane_g1

0x577f,	// (0x0001ad9b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x577f,	// (0x0001ad9b) list_single_fs_bigclock_indicator_pane_g2

0x5799,	// (0x0001adb5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5799,	// (0x0001adb5) list_single_fs_bigclock_indicator_pane_g3

0x57b3,	// (0x0001adcf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x57b3,	// (0x0001adcf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x000252de) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x000252de) list_single_fs_bigclock_indicator_pane_g

0x57d9,	// (0x0001adf5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x57d9,	// (0x0001adf5) list_single_fs_bigclock_indicator_pane_t1

0x5801,	// (0x0001ae1d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5801,	// (0x0001ae1d) list_single_fs_bigclock_indicator_pane_t2

0x5829,	// (0x0001ae45) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5829,	// (0x0001ae45) list_single_fs_bigclock_indicator_pane_t3

0x5851,	// (0x0001ae6d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5851,	// (0x0001ae6d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x000252e9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x000252e9) list_single_fs_bigclock_indicator_pane_t

0x626c,	// (0x0001b888) image3_infobar_fav_pane_ParamLimits

0x626c,	// (0x0001b888) image3_infobar_fav_pane

0x627c,	// (0x0001b898) image3_infobar_loc_pane_ParamLimits

0x627c,	// (0x0001b898) image3_infobar_loc_pane

0x6290,	// (0x0001b8ac) image3_infobar_time_pane_ParamLimits

0x6290,	// (0x0001b8ac) image3_infobar_time_pane

0x3a0c,	// (0x00019028) image3_infobar_time_pane_g1

0x62a0,	// (0x0001b8bc) image3_infobar_time_pane_t1

0x3a0c,	// (0x00019028) image3_infobar_loc_pane_g1

0x62ae,	// (0x0001b8ca) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x000254ab) image3_infobar_loc_pane_g

0x62b6,	// (0x0001b8d2) image3_infobar_loc_pane_t1

0x3a0c,	// (0x00019028) image3_infobar_fav_pane_g1

0x62c4,	// (0x0001b8e0) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x000254b0) image3_infobar_fav_pane_g

0x62cc,	// (0x0001b8e8) fs_bigclock_status_battery_pane

0x62d5,	// (0x0001b8f1) fs_bigclock_status_signal_pane

0x62de,	// (0x0001b8fa) fs_bigclock_status_title_pane

0x62e7,	// (0x0001b903) fs_bigclock_status_signal_pane_g1

0x62f0,	// (0x0001b90c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x000254b5) fs_bigclock_status_signal_pane_g

0x62f8,	// (0x0001b914) fs_bigclock_status_battery_pane_g1

0x6301,	// (0x0001b91d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x000254ba) fs_bigclock_status_battery_pane_g

0x6309,	// (0x0001b925) fs_bigclock_status_title_pane_t1

0x3a0c,	// (0x00019028) main_fs_bigclock_clock_pane_g1

0x6317,	// (0x0001b933) main_fs_bigclock_clock_pane_g2

0x6317,	// (0x0001b933) main_fs_bigclock_clock_pane_g3

0x6317,	// (0x0001b933) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x000254bf) main_fs_bigclock_clock_pane_g

0x631f,	// (0x0001b93b) main_fs_bigclock_clock_pane_t1

0x632d,	// (0x0001b949) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x000254c8) main_fs_bigclock_clock_pane_t

0x633c,	// (0x0001b958) list_single_fs_bigclock_indicator_pane_ParamLimits

0x633c,	// (0x0001b958) list_single_fs_bigclock_indicator_pane

0xe836,	// (0x00023e52) list_single_fs_bigclock_pane_ParamLimits

0xe836,	// (0x00023e52) list_single_fs_bigclock_pane

0xe8a2,	// (0x00023ebe) main_fs_bigclock_indicator_pane_t1

0xe8b1,	// (0x00023ecd) list_single_fs_bigclock_pane_g1

0xe8b9,	// (0x00023ed5) list_single_fs_bigclock_pane_t1

0x3a0c,	// (0x00019028) main_fs_bigclock_swipe_pane_g1

0xe8f7,	// (0x00023f13) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x000254d9) main_fs_bigclock_swipe_pane_g

0xe8ff,	// (0x00023f1b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe8ff,	// (0x00023f1b) main_fs_bigclock_swipe_pane_t1

0xa06c,	// (0x0001f688) call_type_pane_ParamLimits

0x0ad5,	// (0x000160f1) main_btmg_pane

0x600e,	// (0x0001b62a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x600e,	// (0x0001b62a) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x0002544c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x0002544c) list_single_cale_mrui_row_pane_g

0x6172,	// (0x0001b78e) list_recal_vselct_arw_lo_pane

0x617a,	// (0x0001b796) list_recal_vselct_arw_up_pane

0x6182,	// (0x0001b79e) list_recal_vselct_pane

0xe91c,	// (0x00023f38) btmg_button_pane

0xe926,	// (0x00023f42) main_btmg_pane_g1

0x0ad5,	// (0x000160f1) bg_button_pane_cp044

0xe92e,	// (0x00023f4a) btmg_button_pane_t1

0x34fe,	// (0x00018b1a) aid_listscroll_gen

0x0b45,	// (0x00016161) main_cntbar_detail_pane

0x5d1f,	// (0x0001b33b) list_cmail_folder_pane

0x5d2f,	// (0x0001b34b) sp_fs_scroll_pane_cp03_ParamLimits

0xe3d7,	// (0x000239f3) list_single_fs_dyc_pane_cp01_ParamLimits

0xe3d7,	// (0x000239f3) list_single_fs_dyc_pane_cp01

0xe93c,	// (0x00023f58) aid_size_cmail_indent

0xe945,	// (0x00023f61) list_single_dyc_row_pane_cp01

0xe96e,	// (0x00023f8a) cntbar_detail_list_pane_ParamLimits

0xe96e,	// (0x00023f8a) cntbar_detail_list_pane

0xe9a8,	// (0x00023fc4) main_cntbar_detail_cont_pane_ParamLimits

0xe9a8,	// (0x00023fc4) main_cntbar_detail_cont_pane

0xa006,	// (0x0001f622) scroll_pane_cp032_ParamLimits

0xa006,	// (0x0001f622) scroll_pane_cp032

0xe9b4,	// (0x00023fd0) cntbar_detail_list_event_pane_ParamLimits

0xe9b4,	// (0x00023fd0) cntbar_detail_list_event_pane

0xe97a,	// (0x00023f96) cntbar_detail_list_shct_pane

0x187a,	// (0x00016e96) aid_list_gen

0xe9c8,	// (0x00023fe4) aid_scroll

0xe9d1,	// (0x00023fed) aid_size_touch_scroll_bar

0xe9da,	// (0x00023ff6) aid_list_double

0xe9e3,	// (0x00023fff) aid_list_single

0xe9ec,	// (0x00024008) aid_list_single_lg

0xe9f5,	// (0x00024011) aid_list_z_g_a_sm

0xe9fd,	// (0x00024019) aid_list_z_g_d

0xea05,	// (0x00024021) aid_txt_z_prm

0xea13,	// (0x0002402f) aid_txt_z_prm_cp01

0xea21,	// (0x0002403d) aid_txt_z_sec

0xea2f,	// (0x0002404b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea2f,	// (0x0002404b) main_cntbar_detail_cont_pane_g1

0xea3c,	// (0x00024058) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea3c,	// (0x00024058) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x000254de) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x000254de) main_cntbar_detail_cont_pane_g

0xea48,	// (0x00024064) main_cntbar_detail_cont_pane_t1

0xea56,	// (0x00024072) main_cntbar_detail_cont_pane_t2

0xea64,	// (0x00024080) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x000254e3) main_cntbar_detail_cont_pane_t

0xea72,	// (0x0002408e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea72,	// (0x0002408e) cell_cntbar_detail_list_shct_pane

0xea86,	// (0x000240a2) cntbar_detail_list_shct_pane_g1

0xea8f,	// (0x000240ab) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x000254ea) cntbar_detail_list_shct_pane_g

0xea98,	// (0x000240b4) cntbar_detail_list_event_pane_g1_ParamLimits

0xea98,	// (0x000240b4) cntbar_detail_list_event_pane_g1

0xeaa4,	// (0x000240c0) cntbar_detail_list_event_pane_g2_ParamLimits

0xeaa4,	// (0x000240c0) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x000254ef) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x000254ef) cntbar_detail_list_event_pane_g

0xeb10,	// (0x0002412c) cntbar_detail_list_event_pane_t1_ParamLimits

0xeb10,	// (0x0002412c) cntbar_detail_list_event_pane_t1

0xeb25,	// (0x00024141) cntbar_detail_list_event_pane_t2_ParamLimits

0xeb25,	// (0x00024141) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x000254fc) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x000254fc) cntbar_detail_list_event_pane_t

0x3a0c,	// (0x00019028) cell_cntbar_detail_list_shct_pane_g1

0xa387,	// (0x0001f9a3) navi_pane_mv_g3

0x0b45,	// (0x00016161) main_cntbar_detail_pane_ParamLimits

0x0ad5,	// (0x000160f1) main_notif_wgt_pane

0x79cc,	// (0x0001cfe8) aid_tch_main_mp4_pane_g4

0x7bd7,	// (0x0001d1f3) popup_slider_window_cp02

0x6169,	// (0x0001b785) list_recal_day_event_pane

0xe94e,	// (0x00023f6a) cntbar_detail_btn_pane_ParamLimits

0xe94e,	// (0x00023f6a) cntbar_detail_btn_pane

0xe95e,	// (0x00023f7a) cntbar_detail_btn_pane_cp01_ParamLimits

0xe95e,	// (0x00023f7a) cntbar_detail_btn_pane_cp01

0xe97a,	// (0x00023f96) cntbar_detail_list_shct_pane_ParamLimits

0xe986,	// (0x00023fa2) cntbar_detail_pane_g1_ParamLimits

0xe986,	// (0x00023fa2) cntbar_detail_pane_g1

0xe992,	// (0x00023fae) cntbar_detail_pane_t1_ParamLimits

0xe992,	// (0x00023fae) cntbar_detail_pane_t1

0xeab0,	// (0x000240cc) cntbar_detail_list_event_pane_g3_ParamLimits

0xeab0,	// (0x000240cc) cntbar_detail_list_event_pane_g3

0xeac8,	// (0x000240e4) cntbar_detail_list_event_pane_g4_ParamLimits

0xeac8,	// (0x000240e4) cntbar_detail_list_event_pane_g4

0xeae0,	// (0x000240fc) cntbar_detail_list_event_pane_g5_ParamLimits

0xeae0,	// (0x000240fc) cntbar_detail_list_event_pane_g5

0xeaf8,	// (0x00024114) cntbar_detail_list_event_pane_g6_ParamLimits

0xeaf8,	// (0x00024114) cntbar_detail_list_event_pane_g6

0xeb3a,	// (0x00024156) cntbar_detail_list_event_pane_t3_ParamLimits

0xeb3a,	// (0x00024156) cntbar_detail_list_event_pane_t3

0xeb4c,	// (0x00024168) popup_notif_wgt_window_ParamLimits

0xeb4c,	// (0x00024168) popup_notif_wgt_window

0xeb5c,	// (0x00024178) popup_submenu_window_cp01_ParamLimits

0xeb5c,	// (0x00024178) popup_submenu_window_cp01

0x2049,	// (0x00017665) bg_popup_window_pane_cp10

0xeb6a,	// (0x00024186) listscroll_notif_wgt_pane

0xeb74,	// (0x00024190) list_notif_wgt_window

0xeb7d,	// (0x00024199) scroll_pane_cp033

0x6126,	// (0x0001b742) list_notif_wgt_row_pane_ParamLimits

0x6126,	// (0x0001b742) list_notif_wgt_row_pane

0xeb86,	// (0x000241a2) aid_size_list_notif_wgt_del

0xeb8f,	// (0x000241ab) list_notif_wgt_row_pane_g1

0xeb97,	// (0x000241b3) list_notif_wgt_row_pane_g2

0xeb9f,	// (0x000241bb) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x00025503) list_notif_wgt_row_pane_g

0xeba8,	// (0x000241c4) list_notif_wgt_row_pane_t1

0xebb6,	// (0x000241d2) list_notif_wgt_row_pane_t2

0xebc4,	// (0x000241e0) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x0002550a) list_notif_wgt_row_pane_t

0x4a10,	// (0x0001a02c) list_recal_day_event_pane_g1

0xebd2,	// (0x000241ee) list_recal_day_event_pane_t1

0x0ad5,	// (0x000160f1) bg_button_pane_cp045

0xebe1,	// (0x000241fd) cntbar_detail_btn_pane_t1

0x3506,	// (0x00018b22) main_callh_pane_ParamLimits

0x3506,	// (0x00018b22) main_callh_pane

0x0ad5,	// (0x000160f1) main_coverflow0_pane

0x0ad5,	// (0x000160f1) main_wgtman_pane

0xdc43,	// (0x0002325f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc43,	// (0x0002325f) main_fs_bigclock_unlock_btn_pane

0xe34a,	// (0x00023966) bg_button_pane_cp16

0xe362,	// (0x0002397e) cell_tport_appsw_pane_g3

0xebef,	// (0x0002420b) cf0_flow_pane_ParamLimits

0xebef,	// (0x0002420b) cf0_flow_pane

0xebfe,	// (0x0002421a) listscroll_cf0_pane

0xec07,	// (0x00024223) main_cf0_pane_g1

0xec11,	// (0x0002422d) main_cf0_pane_t1_ParamLimits

0xec11,	// (0x0002422d) main_cf0_pane_t1

0xec25,	// (0x00024241) main_cf0_pane_t2_ParamLimits

0xec25,	// (0x00024241) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x00025511) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x00025511) main_cf0_pane_t

0xec39,	// (0x00024255) scroll_pane_cp11

0xec44,	// (0x00024260) cf0_flow_pane_g1

0xec4c,	// (0x00024268) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x00025516) cf0_flow_pane_g

0xec54,	// (0x00024270) cf0_flow_pane_t1

0x0ad5,	// (0x000160f1) main_call6_pane

0x0ad5,	// (0x000160f1) main_calllock_pane

0xec62,	// (0x0002427e) call6_btn_grp_pane_ParamLimits

0xec62,	// (0x0002427e) call6_btn_grp_pane

0xec71,	// (0x0002428d) call6_pane_g1_ParamLimits

0xec71,	// (0x0002428d) call6_pane_g1

0xec80,	// (0x0002429c) popup_call6_1st_window_ParamLimits

0xec80,	// (0x0002429c) popup_call6_1st_window

0xec8e,	// (0x000242aa) popup_call6_2nd_window_ParamLimits

0xec8e,	// (0x000242aa) popup_call6_2nd_window

0xec9c,	// (0x000242b8) cell_call6_btn_pane_ParamLimits

0xec9c,	// (0x000242b8) cell_call6_btn_pane

0x2049,	// (0x00017665) bg_popup_call2_in_pane_cp03

0xecab,	// (0x000242c7) popup_call6_1st_window_g1

0xecb3,	// (0x000242cf) popup_call6_1st_window_g2

0xecbb,	// (0x000242d7) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x0002551b) popup_call6_1st_window_g

0xecc3,	// (0x000242df) popup_call6_1st_window_t1

0xecd2,	// (0x000242ee) popup_call6_1st_window_t2

0xece2,	// (0x000242fe) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x00025522) popup_call6_1st_window_t

0x2049,	// (0x00017665) bg_popup_call2_in_pane_cp04

0xecab,	// (0x000242c7) popup_call6_2nd_window_g1

0xecb3,	// (0x000242cf) popup_call6_2nd_window_g2

0xecbb,	// (0x000242d7) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x0002551b) popup_call6_2nd_window_g

0xecc3,	// (0x000242df) popup_call6_2nd_window_t1

0x0ad5,	// (0x000160f1) bg_button_pane_cp15

0xecf2,	// (0x0002430e) cell_call6_btn_pane_g1

0xecfb,	// (0x00024317) cell_call6_btn_pane_t1

0xed0a,	// (0x00024326) listscroll_wgtman_pane_ParamLimits

0xed0a,	// (0x00024326) listscroll_wgtman_pane

0xed19,	// (0x00024335) wgtman_btn_pane_ParamLimits

0xed19,	// (0x00024335) wgtman_btn_pane

0x1f00,	// (0x0001751c) aid_scroll_copy1

0xed27,	// (0x00024343) list_wgtman_pane

0xed31,	// (0x0002434d) wgtman_btn_pane_g1_ParamLimits

0xed31,	// (0x0002434d) wgtman_btn_pane_g1

0xed3d,	// (0x00024359) wgtman_btn_pane_t1_ParamLimits

0xed3d,	// (0x00024359) wgtman_btn_pane_t1

0xed4f,	// (0x0002436b) wgtman_btn_pane_t2_ParamLimits

0xed4f,	// (0x0002436b) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x00025529) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x00025529) wgtman_btn_pane_t

0xed61,	// (0x0002437d) listrow_wgtman_pane_ParamLimits

0xed61,	// (0x0002437d) listrow_wgtman_pane

0xed7c,	// (0x00024398) listrow_wgtman_pane_g1

0xed85,	// (0x000243a1) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x0002552e) listrow_wgtman_pane_g

0xed8f,	// (0x000243ab) listrow_wgtman_pane_t1

0xed9d,	// (0x000243b9) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x00025533) listrow_wgtman_pane_t

0xedab,	// (0x000243c7) wait_bar_pane_cp09

0xedb3,	// (0x000243cf) main_calllock_btn_pane

0xedbd,	// (0x000243d9) main_calllock_pane_g1

0x0ad5,	// (0x000160f1) bg_button_pane_cp17

0xedc9,	// (0x000243e5) main_calllock_btn_pane_g1

0xedd2,	// (0x000243ee) main_calllock_btn_pane_t1

0x0ad5,	// (0x000160f1) main_dialer3_pane

0x0ad5,	// (0x000160f1) main_fmrd2_pane

0x3a0c,	// (0x00019028) main_fs_bigclock_unlock_btn_pane_g1

0xede9,	// (0x00024405) main_fs_bigclock_unlock_btn_pane_t1

0xedf7,	// (0x00024413) area_fmrd2_info_pane_ParamLimits

0xedf7,	// (0x00024413) area_fmrd2_info_pane

0xee06,	// (0x00024422) area_fmrd2_visual_pane_ParamLimits

0xee06,	// (0x00024422) area_fmrd2_visual_pane

0xee14,	// (0x00024430) fmrd2_indi_pane_ParamLimits

0xee14,	// (0x00024430) fmrd2_indi_pane

0xee21,	// (0x0002443d) area_fmrd2_visual_pane_g1

0xee29,	// (0x00024445) area_fmrd2_visual_pane_t1

0xee39,	// (0x00024455) area_fmrd2_visual_pane_t2

0xee49,	// (0x00024465) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x0002553d) area_fmrd2_visual_pane_t

0xee59,	// (0x00024475) area_fmrd2_info_pane_g1

0xee61,	// (0x0002447d) area_fmrd2_info_pane_t1

0xee71,	// (0x0002448d) area_fmrd2_info_pane_t2

0xee81,	// (0x0002449d) area_fmrd2_info_pane_t3

0xee91,	// (0x000244ad) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x00025544) area_fmrd2_info_pane_t

0xee9f,	// (0x000244bb) fmrd2_indi_pane_t1

0xeeaf,	// (0x000244cb) fmrd2_indi_pane_t2

0xeebf,	// (0x000244db) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x0002554d) fmrd2_indi_pane_t

0x57c2,	// (0x0001adde) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x57c2,	// (0x0001adde) list_single_fs_bigclock_indicator_pane_g5

0x5866,	// (0x0001ae82) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5866,	// (0x0001ae82) list_single_fs_bigclock_indicator_pane_t5

0xe511,	// (0x00023b2d) aid_cell_bcale_month_pane_ParamLimits

0xe511,	// (0x00023b2d) aid_cell_bcale_month_pane

0xe51d,	// (0x00023b39) bcale_month_pane_ParamLimits

0xe51d,	// (0x00023b39) bcale_month_pane

0xe52b,	// (0x00023b47) bcale_preview_pane_ParamLimits

0xe52b,	// (0x00023b47) bcale_preview_pane

0xe8b9,	// (0x00023ed5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8d3,	// (0x00023eef) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8d3,	// (0x00023eef) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x000254d4) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x000254d4) list_single_fs_bigclock_pane_t

0xede1,	// (0x000243fd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x00025538) main_fs_bigclock_unlock_btn_pane_g

0xeecd,	// (0x000244e9) aid_dia3_key_size_ParamLimits

0xeecd,	// (0x000244e9) aid_dia3_key_size

0xeed9,	// (0x000244f5) aid_dia3_listrow_size_ParamLimits

0xeed9,	// (0x000244f5) aid_dia3_listrow_size

0xeee7,	// (0x00024503) dia3_keypad_fun_pane_ParamLimits

0xeee7,	// (0x00024503) dia3_keypad_fun_pane

0xeef7,	// (0x00024513) dia3_keypad_num_pane_ParamLimits

0xeef7,	// (0x00024513) dia3_keypad_num_pane

0xef07,	// (0x00024523) dia3_listscroll_pane_ParamLimits

0xef07,	// (0x00024523) dia3_listscroll_pane

0xef15,	// (0x00024531) dia3_numentry_pane_ParamLimits

0xef15,	// (0x00024531) dia3_numentry_pane

0xef23,	// (0x0002453f) dia3_list_pane

0xef2e,	// (0x0002454a) scroll_pane_cp12

0x0ad5,	// (0x000160f1) bg_dia3_numentry_pane

0xef39,	// (0x00024555) dia3_numentry_pane_t1

0xef48,	// (0x00024564) cell_dia3_key_num_pane

0xef50,	// (0x0002456c) cell_dia3_key0_fun_pane_ParamLimits

0xef50,	// (0x0002456c) cell_dia3_key0_fun_pane

0xef5d,	// (0x00024579) cell_dia3_key1_fun_pane_ParamLimits

0xef5d,	// (0x00024579) cell_dia3_key1_fun_pane

0xef6a,	// (0x00024586) dia3_listrow_pane

0x54f0,	// (0x0001ab0c) bg_dia3_numentry_pane_g1

0x0ad5,	// (0x000160f1) bg_button_pane_cp21

0xef73,	// (0x0002458f) cell_dia3_key_num_pane_t1

0xef81,	// (0x0002459d) cell_dia3_key_num_pane_t2

0xef90,	// (0x000245ac) cell_dia3_key_num_pane_t3

0xef9f,	// (0x000245bb) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x00025554) cell_dia3_key_num_pane_t

0x0ad5,	// (0x000160f1) bg_button_pane_cp19

0xefae,	// (0x000245ca) cell_dia3_key0_fun_pane_g1

0x0ad5,	// (0x000160f1) bg_button_pane_cp20

0xefb6,	// (0x000245d2) cell_dia3_key1_fun_pane_g1

0xefbe,	// (0x000245da) area_left_week_number_pane

0xefc7,	// (0x000245e3) area_top_day_name_pane

0xefd0,	// (0x000245ec) frame_month_view_pane

0xefda,	// (0x000245f6) grid_month_view_pane

0xefe4,	// (0x00024600) cell_top_day_name_pane_ParamLimits

0xefe4,	// (0x00024600) cell_top_day_name_pane

0xeffe,	// (0x0002461a) cell_area_left_week_number_pane_ParamLimits

0xeffe,	// (0x0002461a) cell_area_left_week_number_pane

0xf012,	// (0x0002462e) cell_month_view_pane_ParamLimits

0xf012,	// (0x0002462e) cell_month_view_pane

0xf02f,	// (0x0002464b) frm_month_g1

0xf038,	// (0x00024654) frm_month_g2

0xf042,	// (0x0002465e) frm_month_g3

0xf04c,	// (0x00024668) frm_month_g4

0xf056,	// (0x00024672) frm_month_g5

0xf060,	// (0x0002467c) frm_month_g6

0xf06a,	// (0x00024686) frm_month_g7

0xf074,	// (0x00024690) frm_month_g8

0xf07d,	// (0x00024699) frm_month_g9

0xf086,	// (0x000246a2) frm_month_g10

0xf08f,	// (0x000246ab) frm_month_g11

0xf098,	// (0x000246b4) frm_month_g12

0xf0a1,	// (0x000246bd) frm_month_g13

0xf0aa,	// (0x000246c6) frm_month_g14

0xf0b3,	// (0x000246cf) frm_month_g15

0xf0be,	// (0x000246da) frm_month_g16

0x000f,

0xff41,	// (0x0002555d) frm_month_g

0xf0c9,	// (0x000246e5) cell_top_day_name_pane_t1

0xf0d8,	// (0x000246f4) cell_area_left_week_number_pane_g1

0xf0c9,	// (0x000246e5) cell_area_left_week_number_pane_t1

0x3a0c,	// (0x00019028) cell_month_view_pane_g1

0xf0e0,	// (0x000246fc) cell_month_view_pane_t1

0x0ad5,	// (0x000160f1) main_fps_pane

0x5a97,	// (0x0001b0b3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5a97,	// (0x0001b0b3) cmail_ddmenu_btn02_pane_cp1

0x5ab3,	// (0x0001b0cf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5ab3,	// (0x0001b0cf) cmail_ddmenu_btn02_pane_cp2

0xe7a0,	// (0x00023dbc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7a0,	// (0x00023dbc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x00025485) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x00025485) cmail_ddmenu_btn02_pane_g

0xe7be,	// (0x00023dda) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7be,	// (0x00023dda) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x0002548a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x0002548a) cmail_ddmenu_btn02_pane_t

0xf0ef,	// (0x0002470b) fps_text_pane_ParamLimits

0xf0ef,	// (0x0002470b) fps_text_pane

0xf0fc,	// (0x00024718) main_fps_pane_g1_ParamLimits

0xf0fc,	// (0x00024718) main_fps_pane_g1

0xf10a,	// (0x00024726) wait_bar_pane_cp010_ParamLimits

0xf10a,	// (0x00024726) wait_bar_pane_cp010

0xf116,	// (0x00024732) fps_text_pane_t1_ParamLimits

0xf116,	// (0x00024732) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
