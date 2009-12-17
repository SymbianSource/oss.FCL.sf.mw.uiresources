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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00055849 };

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
0x2cb2,	// (0x000584fb) Screen

0x2cbe,	// (0x00058507) application_window

0x2d0a,	// (0x00058553) area_bottom_pane_ParamLimits

0x2d0a,	// (0x00058553) area_bottom_pane

0x2d43,	// (0x0005858c) area_top_pane_ParamLimits

0x2d43,	// (0x0005858c) area_top_pane

0xb51c,	// (0x00060d65) call_video_uplink_pane_ParamLimits

0xb51c,	// (0x00060d65) call_video_uplink_pane

0x2dbd,	// (0x00058606) main_pane_ParamLimits

0x2dbd,	// (0x00058606) main_pane

0x1c89,	// (0x000574d2) context_pane

0x60bb,	// (0x0005b904) navi_pane

0x60eb,	// (0x0005b934) popup_cale_events_window_ParamLimits

0x60eb,	// (0x0005b934) popup_cale_events_window

0x1c9c,	// (0x000574e5) popup_mup_playback_window

0x6103,	// (0x0005b94c) signal_pane

0xbc9f,	// (0x000614e8) main_browser_pane

0x081f,	// (0x00056068) main_burst_pane

0x5dbd,	// (0x0005b606) main_calc_pane

0x081f,	// (0x00056068) main_cale_day_pane

0xbc9f,	// (0x000614e8) main_cale_month_pane

0x081f,	// (0x00056068) main_cale_week_pane

0x081f,	// (0x00056068) main_call_pane

0xb94d,	// (0x00061196) main_call_poc_pane

0x081f,	// (0x00056068) main_camera_pane

0x081f,	// (0x00056068) main_chi_dic_pane

0x06c1,	// (0x00055f0a) main_clock_pane

0xb94d,	// (0x00061196) main_fmradio_pane

0x081f,	// (0x00056068) main_graph_messa_pane

0xb94d,	// (0x00061196) main_help_pane

0xbc9f,	// (0x000614e8) main_im_pane

0xbba8,	// (0x000613f1) main_image_pane_ParamLimits

0xbba8,	// (0x000613f1) main_image_pane

0xb94d,	// (0x00061196) main_location2_pane

0x081f,	// (0x00056068) main_location_pane

0xb94d,	// (0x00061196) main_messa_pane

0xb94d,	// (0x00061196) main_mp2_pane

0x081f,	// (0x00056068) main_mp_pane

0xb94d,	// (0x00061196) main_msg_pane

0xb94d,	// (0x00061196) main_mup_eq_pane

0xb94d,	// (0x00061196) main_mup_pane

0x081f,	// (0x00056068) main_notes_pane

0xb94d,	// (0x00061196) main_pec_pane

0xb94d,	// (0x00061196) main_phob_pane

0xb94d,	// (0x00061196) main_pinb_pane

0xb94d,	// (0x00061196) main_postcard_pane

0xb94d,	// (0x00061196) main_qdial_pane

0x081f,	// (0x00056068) main_skin_pane

0xb94d,	// (0x00061196) main_smil2_pane

0x081f,	// (0x00056068) main_smil_pane

0x081f,	// (0x00056068) main_video_pane

0x081f,	// (0x00056068) main_video_tele_pane

0xbba8,	// (0x000613f1) main_viewer_pane_ParamLimits

0xbba8,	// (0x000613f1) main_viewer_pane

0x081f,	// (0x00056068) main_vorec_pane

0x5e13,	// (0x0005b65c) popup_blid_sat_info_window_ParamLimits

0x5e13,	// (0x0005b65c) popup_blid_sat_info_window

0x5e77,	// (0x0005b6c0) popup_dyc_status_message_window_ParamLimits

0x5e77,	// (0x0005b6c0) popup_dyc_status_message_window

0x5e91,	// (0x0005b6da) popup_grid_large_graphic_window_ParamLimits

0x5e91,	// (0x0005b6da) popup_grid_large_graphic_window

0x5f53,	// (0x0005b79c) popup_loc_request_window_ParamLimits

0x5f53,	// (0x0005b79c) popup_loc_request_window

0x608f,	// (0x0005b8d8) popup_wml_address_window_ParamLimits

0x608f,	// (0x0005b8d8) popup_wml_address_window

0x5bfb,	// (0x0005b444) call_muted_g1

0x588c,	// (0x0005b0d5) popup_call_audio_conf_window_ParamLimits

0x588c,	// (0x0005b0d5) popup_call_audio_conf_window

0x5c0b,	// (0x0005b454) popup_call_audio_first_window_ParamLimits

0x5c0b,	// (0x0005b454) popup_call_audio_first_window

0x5c81,	// (0x0005b4ca) popup_call_audio_in_window_ParamLimits

0x5c81,	// (0x0005b4ca) popup_call_audio_in_window

0x5cbd,	// (0x0005b506) popup_call_audio_out_window_ParamLimits

0x5cbd,	// (0x0005b506) popup_call_audio_out_window

0x5cf7,	// (0x0005b540) popup_call_audio_second_window_ParamLimits

0x5cf7,	// (0x0005b540) popup_call_audio_second_window

0x5d4d,	// (0x0005b596) popup_call_audio_wait_window_ParamLimits

0x5d4d,	// (0x0005b596) popup_call_audio_wait_window

0x5d82,	// (0x0005b5cb) popup_number_entry_window_ParamLimits

0x5d82,	// (0x0005b5cb) popup_number_entry_window

0xb53a,	// (0x00060d83) bg_popup_call_pane_cp05_ParamLimits

0xb53a,	// (0x00060d83) bg_popup_call_pane_cp05

0xb55a,	// (0x00060da3) popup_number_entry_window_t1

0xb56d,	// (0x00060db6) popup_number_entry_window_t2

0xb57f,	// (0x00060dc8) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00064978) popup_number_entry_window_t

0xb591,	// (0x00060dda) text_title_cp2

0xb5a4,	// (0x00060ded) bg_popup_call_pane_cp_ParamLimits

0xb5a4,	// (0x00060ded) bg_popup_call_pane_cp

0xb5b2,	// (0x00060dfb) call_thumbnail_pane

0xb5ba,	// (0x00060e03) popup_call_audio_in_window_g1_ParamLimits

0xb5ba,	// (0x00060e03) popup_call_audio_in_window_g1

0xb5c6,	// (0x00060e0f) popup_call_audio_in_window_g2_ParamLimits

0xb5c6,	// (0x00060e0f) popup_call_audio_in_window_g2

0xb5d2,	// (0x00060e1b) popup_call_audio_in_window_g3_ParamLimits

0xb5d2,	// (0x00060e1b) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00064981) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00064981) popup_call_audio_in_window_g

0xb5de,	// (0x00060e27) popup_call_audio_in_window_t1_ParamLimits

0xb5de,	// (0x00060e27) popup_call_audio_in_window_t1

0xb5fa,	// (0x00060e43) popup_call_audio_in_window_t2_ParamLimits

0xb5fa,	// (0x00060e43) popup_call_audio_in_window_t2

0xb616,	// (0x00060e5f) popup_call_audio_in_window_t3_ParamLimits

0xb616,	// (0x00060e5f) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00064988) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00064988) popup_call_audio_in_window_t

0xb5a4,	// (0x00060ded) bg_popup_call_pane_cp01_ParamLimits

0xb5a4,	// (0x00060ded) bg_popup_call_pane_cp01

0xb5b2,	// (0x00060dfb) call_thumbnail_pane_cp02

0xb629,	// (0x00060e72) call_type_pane_cp022

0xb631,	// (0x00060e7a) popup_call_audio_out_window_g1_ParamLimits

0xb631,	// (0x00060e7a) popup_call_audio_out_window_g1

0xb643,	// (0x00060e8c) popup_call_audio_out_window_g2_ParamLimits

0xb643,	// (0x00060e8c) popup_call_audio_out_window_g2

0xb64f,	// (0x00060e98) popup_call_audio_out_window_g3_ParamLimits

0xb64f,	// (0x00060e98) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0006498f) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0006498f) popup_call_audio_out_window_g

0xb661,	// (0x00060eaa) popup_call_audio_out_window_t1_ParamLimits

0xb661,	// (0x00060eaa) popup_call_audio_out_window_t1

0xb679,	// (0x00060ec2) popup_call_audio_out_window_t2_ParamLimits

0xb679,	// (0x00060ec2) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00064996) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00064996) popup_call_audio_out_window_t

0xb68e,	// (0x00060ed7) bg_popup_call_pane_ParamLimits

0xb68e,	// (0x00060ed7) bg_popup_call_pane

0x2f70,	// (0x000587b9) call_thumbnail_pane_cp_ParamLimits

0x2f70,	// (0x000587b9) call_thumbnail_pane_cp

0xb712,	// (0x00060f5b) call_type_pane_cp01_ParamLimits

0xb712,	// (0x00060f5b) call_type_pane_cp01

0xb756,	// (0x00060f9f) popup_call_audio_first_window_g1_ParamLimits

0xb756,	// (0x00060f9f) popup_call_audio_first_window_g1

0xb7a2,	// (0x00060feb) popup_call_audio_first_window_g2_ParamLimits

0xb7a2,	// (0x00060feb) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0006499b) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0006499b) popup_call_audio_first_window_g

0xb7e6,	// (0x0006102f) popup_call_audio_first_window_t1_ParamLimits

0xb7e6,	// (0x0006102f) popup_call_audio_first_window_t1

0xb892,	// (0x000610db) popup_call_audio_first_window_t4_ParamLimits

0xb892,	// (0x000610db) popup_call_audio_first_window_t4

0xb91e,	// (0x00061167) popup_call_audio_first_window_t5_ParamLimits

0xb91e,	// (0x00061167) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x000649a0) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x000649a0) popup_call_audio_first_window_t

0xb94d,	// (0x00061196) bg_popup_call_pane_cp02

0xb957,	// (0x000611a0) call_type_pane_cp023

0xb95f,	// (0x000611a8) popup_call_audio_wait_window_g1

0xb967,	// (0x000611b0) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000649a7) popup_call_audio_wait_window_g

0xb96f,	// (0x000611b8) popup_call_audio_wait_window_t3

0xb97d,	// (0x000611c6) bg_popup_call_pane_cp03_ParamLimits

0xb97d,	// (0x000611c6) bg_popup_call_pane_cp03

0xb9dd,	// (0x00061226) call_thumbnail_pane_cp011_ParamLimits

0xb9dd,	// (0x00061226) call_thumbnail_pane_cp011

0xb9e9,	// (0x00061232) call_type_pane_cp034_ParamLimits

0xb9e9,	// (0x00061232) call_type_pane_cp034

0xba25,	// (0x0006126e) popup_call_audio_second_window_g1_ParamLimits

0xba25,	// (0x0006126e) popup_call_audio_second_window_g1

0xba61,	// (0x000612aa) popup_call_audio_second_window_g2_ParamLimits

0xba61,	// (0x000612aa) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x000649ac) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x000649ac) popup_call_audio_second_window_g

0xba9d,	// (0x000612e6) popup_call_audio_second_window_t1_ParamLimits

0xba9d,	// (0x000612e6) popup_call_audio_second_window_t1

0xbb1e,	// (0x00061367) popup_call_audio_second_window_t2_ParamLimits

0xbb1e,	// (0x00061367) popup_call_audio_second_window_t2

0xbb54,	// (0x0006139d) popup_call_audio_second_window_t3_ParamLimits

0xbb54,	// (0x0006139d) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x000649b1) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x000649b1) popup_call_audio_second_window_t

0xb94d,	// (0x00061196) bg_popup_call_pane_cp04

0xbb8a,	// (0x000613d3) list_conf_pane

0xbb92,	// (0x000613db) popup_call_audio_conf_window_t1

0xbba0,	// (0x000613e9) call_thumbnail_pane_g1

0xbba8,	// (0x000613f1) bg_pinb_pane_ParamLimits

0xbba8,	// (0x000613f1) bg_pinb_pane

0xbbb6,	// (0x000613ff) find_pinb_pane

0xbbbf,	// (0x00061408) listscroll_pinb_pane_ParamLimits

0xbbbf,	// (0x00061408) listscroll_pinb_pane

0xbbce,	// (0x00061417) pinb_bg_pane_g1

0x2f94,	// (0x000587dd) pinb_bg_pane_g2

0x2fa0,	// (0x000587e9) pinb_bg_pane_g3

0x2fac,	// (0x000587f5) pinb_bg_pane_g4

0x2fb8,	// (0x00058801) pinb_bg_pane_g5

0x2fc4,	// (0x0005880d) pinb_bg_pane_g6

0x2fcf,	// (0x00058818) pinb_bg_pane_g7

0x2fda,	// (0x00058823) pinb_bg_pane_g8

0x2fe5,	// (0x0005882e) pinb_bg_pane_g9

0x2fef,	// (0x00058838) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x000649b8) pinb_bg_pane_g

0x300c,	// (0x00058855) grid_pinb_pane

0x3017,	// (0x00058860) list_pinb_pane

0x3022,	// (0x0005886b) scroll_pane_cp01_ParamLimits

0x3022,	// (0x0005886b) scroll_pane_cp01

0xbbd8,	// (0x00061421) find_pinb_pane_g1_ParamLimits

0xbbd8,	// (0x00061421) find_pinb_pane_g1

0xbbf0,	// (0x00061439) find_pinb_pane_t1

0xbc02,	// (0x0006144b) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000649d2) find_pinb_pane_t

0xbc17,	// (0x00061460) input_focus_pane_cp01_ParamLimits

0xbc17,	// (0x00061460) input_focus_pane_cp01

0x3034,	// (0x0005887d) cell_pinb_pane_ParamLimits

0x3034,	// (0x0005887d) cell_pinb_pane

0x3056,	// (0x0005889f) cell_pinb_pane_g1_ParamLimits

0x3056,	// (0x0005889f) cell_pinb_pane_g1

0x306a,	// (0x000588b3) cell_pinb_pane_g2_ParamLimits

0x306a,	// (0x000588b3) cell_pinb_pane_g2

0xbc23,	// (0x0006146c) cell_pinb_pane_g3_ParamLimits

0xbc23,	// (0x0006146c) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000649d7) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000649d7) cell_pinb_pane_g

0xb94d,	// (0x00061196) grid_highlight_pane_cp01

0x3076,	// (0x000588bf) list_pinb_item_pane_ParamLimits

0x3076,	// (0x000588bf) list_pinb_item_pane

0xb94d,	// (0x00061196) list_highlight_pane_cp02

0x3089,	// (0x000588d2) list_pinb_item_pane_g1_ParamLimits

0x3089,	// (0x000588d2) list_pinb_item_pane_g1

0x3096,	// (0x000588df) list_pinb_item_pane_g2_ParamLimits

0x3096,	// (0x000588df) list_pinb_item_pane_g2

0x30a2,	// (0x000588eb) list_pinb_item_pane_g3_ParamLimits

0x30a2,	// (0x000588eb) list_pinb_item_pane_g3

0x30b3,	// (0x000588fc) list_pinb_item_pane_g4_ParamLimits

0x30b3,	// (0x000588fc) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000649de) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000649de) list_pinb_item_pane_g

0x30bf,	// (0x00058908) list_pinb_item_pane_t1_ParamLimits

0x30bf,	// (0x00058908) list_pinb_item_pane_t1

0x30f4,	// (0x0005893d) calc_display_pane

0x311a,	// (0x00058963) calc_paper_pane

0x313d,	// (0x00058986) grid_calc_pane

0xb94d,	// (0x00061196) bg_list_pane_cp01

0x316b,	// (0x000589b4) clock_g1

0x3173,	// (0x000589bc) clock_g2

0x0001,

0xf19e,	// (0x000649e7) clock_g

0x317b,	// (0x000589c4) clock_t1_ParamLimits

0x317b,	// (0x000589c4) clock_t1

0x3190,	// (0x000589d9) clock_t2_ParamLimits

0x3190,	// (0x000589d9) clock_t2

0x31a2,	// (0x000589eb) clock_t3_ParamLimits

0x31a2,	// (0x000589eb) clock_t3

0x31b4,	// (0x000589fd) clock_t4_ParamLimits

0x31b4,	// (0x000589fd) clock_t4

0x31c6,	// (0x00058a0f) clock_t5_ParamLimits

0x31c6,	// (0x00058a0f) clock_t5

0x31db,	// (0x00058a24) clock_t6_ParamLimits

0x31db,	// (0x00058a24) clock_t6

0x31ed,	// (0x00058a36) clock_t7_ParamLimits

0x31ed,	// (0x00058a36) clock_t7

0x31ff,	// (0x00058a48) clock_t8_ParamLimits

0x31ff,	// (0x00058a48) clock_t8

0x3213,	// (0x00058a5c) clock_t9_ParamLimits

0x3213,	// (0x00058a5c) clock_t9

0x0008,

0xf1a3,	// (0x000649ec) clock_t_ParamLimits

0xf1a3,	// (0x000649ec) clock_t

0xbc37,	// (0x00061480) popup_clock_analogue_window_cp02

0xbc37,	// (0x00061480) popup_clock_digital_window_cp01

0xbc3f,	// (0x00061488) listscroll_help_pane

0xb94d,	// (0x00061196) phob_pre_status_pane

0xbc49,	// (0x00061492) grid_qdial_pane

0xb94d,	// (0x00061196) listscroll_mce_pane

0xbc53,	// (0x0006149c) bg_notes_pane

0xbc5d,	// (0x000614a6) list_notes_pane

0x3229,	// (0x00058a72) scroll_pane_cp06

0xbc67,	// (0x000614b0) bg_calc_paper_pane

0xbc85,	// (0x000614ce) list_calc_pane

0xbc9f,	// (0x000614e8) bg_calc_display_pane

0x3234,	// (0x00058a7d) calc_display_pane_t1

0x3246,	// (0x00058a8f) calc_display_pane_t2

0xbcab,	// (0x000614f4) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000649ff) calc_display_pane_t

0x3258,	// (0x00058aa1) cell_calc_pane_ParamLimits

0x3258,	// (0x00058aa1) cell_calc_pane

0xbcbd,	// (0x00061506) bg_calc_paper_pane_g1

0xbcc9,	// (0x00061512) bg_calc_paper_pane_g2

0xbcd5,	// (0x0006151e) bg_calc_paper_pane_g3

0xbce1,	// (0x0006152a) bg_calc_paper_pane_g4

0xbced,	// (0x00061536) bg_calc_paper_pane_g5

0x3293,	// (0x00058adc) bg_calc_paper_pane_g6

0x32a6,	// (0x00058aef) bg_calc_paper_pane_g7

0x32b9,	// (0x00058b02) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00064a06) bg_calc_paper_pane_g

0x32ca,	// (0x00058b13) calc_bg_paper_pane_g9

0x32db,	// (0x00058b24) list_calc_item_pane_ParamLimits

0x32db,	// (0x00058b24) list_calc_item_pane

0xbcf9,	// (0x00061542) list_calc_item_pane_g1

0xbd06,	// (0x0006154f) list_calc_item_pane_t1_ParamLimits

0xbd06,	// (0x0006154f) list_calc_item_pane_t1

0x32ef,	// (0x00058b38) list_calc_item_pane_t2_ParamLimits

0x32ef,	// (0x00058b38) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00064a17) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00064a17) list_calc_item_pane_t

0xbd18,	// (0x00061561) cell_calc_pane_g1

0xbd22,	// (0x0006156b) grid_highlight_pane_cp02

0xbd44,	// (0x0006158d) bg_calc_display_pane_g1

0xbd4d,	// (0x00061596) bg_calc_display_pane_g2

0xbd57,	// (0x000615a0) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00064a21) bg_calc_display_pane_g

0x3321,	// (0x00058b6a) cell_qdial_pane_ParamLimits

0x3321,	// (0x00058b6a) cell_qdial_pane

0x3337,	// (0x00058b80) cell_qdial_pane_g1_ParamLimits

0x3337,	// (0x00058b80) cell_qdial_pane_g1

0x334d,	// (0x00058b96) cell_qdial_pane_g2_ParamLimits

0x334d,	// (0x00058b96) cell_qdial_pane_g2

0xbd60,	// (0x000615a9) cell_qdial_pane_g3_ParamLimits

0xbd60,	// (0x000615a9) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00064a28) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00064a28) cell_qdial_pane_g

0x3373,	// (0x00058bbc) cell_qdial_pane_t1_ParamLimits

0x3373,	// (0x00058bbc) cell_qdial_pane_t1

0x338b,	// (0x00058bd4) cell_qdial_pane_t2_ParamLimits

0x338b,	// (0x00058bd4) cell_qdial_pane_t2

0x339e,	// (0x00058be7) cell_qdial_pane_t3_ParamLimits

0x339e,	// (0x00058be7) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00064a31) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00064a31) cell_qdial_pane_t

0xb94d,	// (0x00061196) grid_highlight_pane_cp04

0xbd6c,	// (0x000615b5) thumbnail_qdial_pane_ParamLimits

0xbd6c,	// (0x000615b5) thumbnail_qdial_pane

0xbdc8,	// (0x00061611) list_help_pane

0xbdd1,	// (0x0006161a) scroll_pane_cp02

0x33b1,	// (0x00058bfa) help_list_pane_t1_ParamLimits

0x33b1,	// (0x00058bfa) help_list_pane_t1

0xbdda,	// (0x00061623) bg_notes_pane_g2

0xbde2,	// (0x0006162b) bg_notes_pane_g3

0xbdea,	// (0x00061633) notes_bg_pane_g1

0xbdf2,	// (0x0006163b) notes_bg_pane_g4

0xbdfa,	// (0x00061643) notes_bg_pane_g5

0xbe02,	// (0x0006164b) notes_bg_pane_g6

0xbe0a,	// (0x00061653) notes_bg_pane_g7

0xbe12,	// (0x0006165b) notes_bg_pane_g8

0xbe1a,	// (0x00061663) notes_bg_pane_g9

0x0006,

0xf206,	// (0x00064a4f) notes_bg_pane_g

0x33d5,	// (0x00058c1e) list_notes_text_pane_ParamLimits

0x33d5,	// (0x00058c1e) list_notes_text_pane

0xbe22,	// (0x0006166b) list_notes_text_pane_g1

0x33ec,	// (0x00058c35) list_notes_text_pane_t1

0xbc9f,	// (0x000614e8) listscroll_cale_week_pane

0x3417,	// (0x00058c60) bg_cale_heading_pane

0xbe3c,	// (0x00061685) bg_cale_pane_cp01

0x3433,	// (0x00058c7c) cale_week_corner_pane

0x3449,	// (0x00058c92) cale_week_day_heading_pane

0x3465,	// (0x00058cae) cale_week_scroll_pane_g1

0x347e,	// (0x00058cc7) cale_week_scroll_pane_g2

0x348f,	// (0x00058cd8) cale_week_scroll_pane_g3

0x34a0,	// (0x00058ce9) cale_week_scroll_pane_g4

0x34b1,	// (0x00058cfa) cale_week_scroll_pane_g5

0x34c2,	// (0x00058d0b) cale_week_scroll_pane_g6

0x34d3,	// (0x00058d1c) cale_week_scroll_pane_g7

0x34e4,	// (0x00058d2d) cale_week_scroll_pane_g8

0x34f5,	// (0x00058d3e) cale_week_scroll_pane_g9

0x3506,	// (0x00058d4f) cale_week_scroll_pane_g10

0x3517,	// (0x00058d60) cale_week_scroll_pane_g11

0x3528,	// (0x00058d71) cale_week_scroll_pane_g12

0x3539,	// (0x00058d82) cale_week_scroll_pane_g13

0x3552,	// (0x00058d9b) cale_week_scroll_pane_g14

0x356b,	// (0x00058db4) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00064a5e) cale_week_scroll_pane_g

0x3584,	// (0x00058dcd) cale_week_time_pane

0x3595,	// (0x00058dde) grid_cale_week_pane

0x35b0,	// (0x00058df9) scroll_pane_cp08

0x35c8,	// (0x00058e11) cell_cale_week_pane_ParamLimits

0x35c8,	// (0x00058e11) cell_cale_week_pane

0x3610,	// (0x00058e59) cale_week_day_heading_pane_t1

0x3624,	// (0x00058e6d) cale_week_day_heading_pane_t2

0x3638,	// (0x00058e81) cale_week_day_heading_pane_t3

0x364c,	// (0x00058e95) cale_week_day_heading_pane_t4

0x3660,	// (0x00058ea9) cale_week_day_heading_pane_t5

0x3674,	// (0x00058ebd) cale_week_day_heading_pane_t6

0x3688,	// (0x00058ed1) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00064a7d) cale_week_day_heading_pane_t

0xbe67,	// (0x000616b0) bg_cale_side_pane

0x369c,	// (0x00058ee5) cale_week_time_pane_t1

0x36b4,	// (0x00058efd) cale_week_time_pane_t2

0x36cc,	// (0x00058f15) cale_week_time_pane_t3

0x36e4,	// (0x00058f2d) cale_week_time_pane_t4

0x36fc,	// (0x00058f45) cale_week_time_pane_t5

0x3714,	// (0x00058f5d) cale_week_time_pane_t6

0x372c,	// (0x00058f75) cale_week_time_pane_t7

0x3748,	// (0x00058f91) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00064a8c) cale_week_time_pane_t

0x3768,	// (0x00058fb1) cell_cale_week_pane_g2

0x3779,	// (0x00058fc2) cell_cale_week_pane_g3_ParamLimits

0x3779,	// (0x00058fc2) cell_cale_week_pane_g3

0xbe75,	// (0x000616be) grid_highlight_pane_cp07

0xbe7d,	// (0x000616c6) listscroll_gms_pane

0xbe87,	// (0x000616d0) grid_gms_pane

0xbe90,	// (0x000616d9) listscroll_gms_pane_g1

0xbe98,	// (0x000616e1) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00064a9d) listscroll_gms_pane_g

0x3791,	// (0x00058fda) scroll_pane_cp010

0x379c,	// (0x00058fe5) cell_gms_pane_ParamLimits

0x379c,	// (0x00058fe5) cell_gms_pane

0x37b6,	// (0x00058fff) cell_gms_pane_g1

0xbea0,	// (0x000616e9) cell_gms_pane_g2

0xbea8,	// (0x000616f1) cell_gms_pane_g3

0xbeb1,	// (0x000616fa) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00064aa2) cell_gms_pane_g

0xbeba,	// (0x00061703) grid_highlight_pane_cp09

0x5ba3,	// (0x0005b3ec) phob_pre_status_pane_g1

0x5bab,	// (0x0005b3f4) phob_pre_status_pane_g2

0x5bb3,	// (0x0005b3fc) phob_pre_status_pane_g3

0x5bbb,	// (0x0005b404) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00064e91) phob_pre_status_pane_g

0x5bcb,	// (0x0005b414) phob_pre_status_pane_t1

0x5bdb,	// (0x0005b424) phob_pre_status_pane_t2

0x5beb,	// (0x0005b434) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00064e9c) phob_pre_status_pane_t

0xb94d,	// (0x00061196) bg_list_pane_cp05

0x37c6,	// (0x0005900f) grid_vorec_pane

0xbec2,	// (0x0006170b) vorec_t1

0xbed0,	// (0x00061719) vorec_t2

0xbede,	// (0x00061727) vorec_t3

0xbeec,	// (0x00061735) vorec_t4

0xbefa,	// (0x00061743) vorec_t5

0xbf08,	// (0x00061751) vorec_t6

0x0006,

0xf262,	// (0x00064aab) vorec_t

0xbf24,	// (0x0006176d) wait_bar_pane_cp01

0x37d0,	// (0x00059019) cell_vorec_pane_ParamLimits

0x37d0,	// (0x00059019) cell_vorec_pane

0xbf2c,	// (0x00061775) cell_vorec_pane_g1

0xb94d,	// (0x00061196) grid_highlight_pane_cp05

0x37fb,	// (0x00059044) cams_zoom_pane

0x380a,	// (0x00059053) image_vga_pane

0x3824,	// (0x0005906d) main_camera_pane_g1

0x3836,	// (0x0005907f) main_camera_pane_g2

0x3846,	// (0x0005908f) main_camera_pane_g3

0x385a,	// (0x000590a3) main_camera_pane_g4

0x386e,	// (0x000590b7) main_camera_pane_g5

0x3882,	// (0x000590cb) main_camera_pane_g6

0x3896,	// (0x000590df) main_camera_pane_g7

0x0007,

0xf271,	// (0x00064aba) main_camera_pane_g

0x38aa,	// (0x000590f3) main_camera_pane_t1

0x38c0,	// (0x00059109) main_camera_pane_t2

0x0001,

0xf282,	// (0x00064acb) main_camera_pane_t

0x38fe,	// (0x00059147) cams_zoom_pane_cp_ParamLimits

0x38fe,	// (0x00059147) cams_zoom_pane_cp

0x3926,	// (0x0005916f) image_cif_pane_ParamLimits

0x3926,	// (0x0005916f) image_cif_pane

0x3961,	// (0x000591aa) image_subqcif_pane

0x396b,	// (0x000591b4) main_video_pane_g1_ParamLimits

0x396b,	// (0x000591b4) main_video_pane_g1

0x398f,	// (0x000591d8) main_video_pane_g2_ParamLimits

0x398f,	// (0x000591d8) main_video_pane_g2

0x39c5,	// (0x0005920e) main_video_pane_g3_ParamLimits

0x39c5,	// (0x0005920e) main_video_pane_g3

0x39f3,	// (0x0005923c) main_video_pane_g4_ParamLimits

0x39f3,	// (0x0005923c) main_video_pane_g4

0x3a21,	// (0x0005926a) main_video_pane_g5_ParamLimits

0x3a21,	// (0x0005926a) main_video_pane_g5

0xbf42,	// (0x0006178b) main_video_pane_g6_ParamLimits

0xbf42,	// (0x0006178b) main_video_pane_g6

0x0006,

0xf287,	// (0x00064ad0) main_video_pane_g_ParamLimits

0xf287,	// (0x00064ad0) main_video_pane_g

0x3a4a,	// (0x00059293) main_video_pane_t1_ParamLimits

0x3a4a,	// (0x00059293) main_video_pane_t1

0xbf5c,	// (0x000617a5) cams_zoom_pane_g1

0xbf65,	// (0x000617ae) cams_zoom_pane_g2

0xbf6e,	// (0x000617b7) cams_zoom_pane_g3

0xbf77,	// (0x000617c0) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00064adf) cams_zoom_pane_g

0x3aa7,	// (0x000592f0) grid_cams_pane

0x3ac1,	// (0x0005930a) linegrid_cams_pane

0x3ad5,	// (0x0005931e) cell_cams_pane_ParamLimits

0x3ad5,	// (0x0005931e) cell_cams_pane

0xbf80,	// (0x000617c9) cams_burst_image_pane

0xbf88,	// (0x000617d1) cell_cams_pane_g1

0xb94d,	// (0x00061196) grid_highlight_pane_cp03

0xbd18,	// (0x00061561) mp_bg_pane_g1

0xb94d,	// (0x00061196) bg_list_pane_cp03

0x1b4d,	// (0x00057396) bg_mp_pane

0x1b55,	// (0x0005739e) grid_mp_pane

0x1b5d,	// (0x000573a6) media_player_g1

0x1b67,	// (0x000573b0) media_player_t1

0x1b75,	// (0x000573be) media_player_t2

0x1b83,	// (0x000573cc) media_player_t3

0x1b91,	// (0x000573da) media_player_t4

0x1b9f,	// (0x000573e8) media_player_t5

0x1bad,	// (0x000573f6) media_player_t6

0x1bbb,	// (0x00057404) media_player_t7

0x0006,

0xf632,	// (0x00064e7b) media_player_t

0x1bc9,	// (0x00057412) wait_bar_pane_cp02

0xf617,	// (0x00064e60) main_usb_pane_t

0x5b9a,	// (0x0005b3e3) cell_mp_pane

0xbd18,	// (0x00061561) cell_mp_pane_g1

0xb94d,	// (0x00061196) grid_highlight_pane_cp06

0xbf90,	// (0x000617d9) grid_skin_colour_pane

0xbf98,	// (0x000617e1) list_highlight_pane_cp03

0x3c0e,	// (0x00059457) skin_g1

0xbfa0,	// (0x000617e9) skin_t1

0xbfaf,	// (0x000617f8) skin_t2

0x0001,

0xf2cb,	// (0x00064b14) skin_t

0x3c18,	// (0x00059461) cell_skin_colour_pane_ParamLimits

0x3c18,	// (0x00059461) cell_skin_colour_pane

0xbfbd,	// (0x00061806) cell_skin_colour_pane_g1

0x3c74,	// (0x000594bd) call_video_g1_ParamLimits

0x3c74,	// (0x000594bd) call_video_g1

0x3c90,	// (0x000594d9) call_video_g2_ParamLimits

0x3c90,	// (0x000594d9) call_video_g2

0x0001,

0xf2d0,	// (0x00064b19) call_video_g_ParamLimits

0xf2d0,	// (0x00064b19) call_video_g

0x3cc6,	// (0x0005950f) call_video_uplink_pane_cp1_ParamLimits

0x3cc6,	// (0x0005950f) call_video_uplink_pane_cp1

0xbfd7,	// (0x00061820) call_video_uplink_pane_cp2

0x3d46,	// (0x0005958f) video_down_crop_pane_ParamLimits

0x3d46,	// (0x0005958f) video_down_crop_pane

0x3e0c,	// (0x00059655) video_down_pane_ParamLimits

0x3e0c,	// (0x00059655) video_down_pane

0xbfdf,	// (0x00061828) video_down_subqcif_pane_ParamLimits

0xbfdf,	// (0x00061828) video_down_subqcif_pane

0xbff9,	// (0x00061842) video_down_subqcif_pane_cp_ParamLimits

0xbff9,	// (0x00061842) video_down_subqcif_pane_cp

0xc01f,	// (0x00061868) im_reading_pane_ParamLimits

0xc01f,	// (0x00061868) im_reading_pane

0x3ed8,	// (0x00059721) im_writing_pane_ParamLimits

0x3ed8,	// (0x00059721) im_writing_pane

0x3ef6,	// (0x0005973f) im_reading_pane_t1

0xc039,	// (0x00061882) list_im_pane

0xc04a,	// (0x00061893) scroll_pane_cp07

0x3f35,	// (0x0005977e) im_writing_pane_t1_ParamLimits

0x3f35,	// (0x0005977e) im_writing_pane_t1

0xc063,	// (0x000618ac) im_writing_pane_t2_ParamLimits

0xc063,	// (0x000618ac) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00064b23) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00064b23) im_writing_pane_t

0xb94d,	// (0x00061196) input_focus_pane_cp04

0xb94d,	// (0x00061196) input_focus_pane_cp05

0x3f4a,	// (0x00059793) list_im_single_pane_ParamLimits

0x3f4a,	// (0x00059793) list_im_single_pane

0x3f63,	// (0x000597ac) list_single_im_pane_t1

0x5b5a,	// (0x0005b3a3) blid_accuracy_pane

0x5b62,	// (0x0005b3ab) blid_compass_pane

0x5b6c,	// (0x0005b3b5) main_location_t1

0x5b7c,	// (0x0005b3c5) main_location_t2

0x5b8c,	// (0x0005b3d5) main_location_t3

0x0002,

0xf641,	// (0x00064e8a) main_location_t

0xb94d,	// (0x00061196) aid_levels_location

0xbd18,	// (0x00061561) blid_accuracy_pane_g1

0xbd18,	// (0x00061561) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00064b85) blid_accuracy_pane_g

0xc0ab,	// (0x000618f4) wml_content_pane

0xc0e9,	// (0x00061932) wml_button_pane_ParamLimits

0xc0e9,	// (0x00061932) wml_button_pane

0x3f72,	// (0x000597bb) wml_list_single_large_pane_ParamLimits

0x3f72,	// (0x000597bb) wml_list_single_large_pane

0x3f8b,	// (0x000597d4) wml_list_single_medium_pane_ParamLimits

0x3f8b,	// (0x000597d4) wml_list_single_medium_pane

0x3fa5,	// (0x000597ee) wml_list_single_small_pane_ParamLimits

0x3fa5,	// (0x000597ee) wml_list_single_small_pane

0xc0fd,	// (0x00061946) wml_selection_box_pane_ParamLimits

0xc0fd,	// (0x00061946) wml_selection_box_pane

0xc110,	// (0x00061959) wml_list_single_pane_t1

0xc11f,	// (0x00061968) wml_list_single_medium_pane_t1

0xc12e,	// (0x00061977) wml_list_single_large_pane_t1

0xc13d,	// (0x00061986) input_focus_pane_cp02_ParamLimits

0xc13d,	// (0x00061986) input_focus_pane_cp02

0xc150,	// (0x00061999) wml_selection_box_pane_g1

0xc159,	// (0x000619a2) wml_selection_box_pane_t1_ParamLimits

0xc159,	// (0x000619a2) wml_selection_box_pane_t1

0xbba8,	// (0x000613f1) bg_wml_button_pane_ParamLimits

0xbba8,	// (0x000613f1) bg_wml_button_pane

0xc171,	// (0x000619ba) wml_button_pane_g1

0xc179,	// (0x000619c2) wml_button_pane_t1

0xc171,	// (0x000619ba) wml_button_bg_pane_g1

0xc189,	// (0x000619d2) wml_button_bg_pane_g2

0xc191,	// (0x000619da) wml_button_bg_pane_g3

0xc199,	// (0x000619e2) wml_button_bg_pane_g4

0xc1a1,	// (0x000619ea) wml_button_bg_pane_g5

0xc1a9,	// (0x000619f2) wml_button_bg_pane_g6

0xc1b1,	// (0x000619fa) wml_button_bg_pane_g7

0xc1b9,	// (0x00061a02) wml_button_bg_pane_g8

0xc1c1,	// (0x00061a0a) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00064b28) wml_button_bg_pane_g

0x3fc4,	// (0x0005980d) bg_list_pane_cp02

0xc1c9,	// (0x00061a12) mce_header_pane_ParamLimits

0xc1c9,	// (0x00061a12) mce_header_pane

0xc1df,	// (0x00061a28) mce_icon_pane

0xc1df,	// (0x00061a28) mce_image_pane

0xc1e8,	// (0x00061a31) mce_text_pane_ParamLimits

0xc1e8,	// (0x00061a31) mce_text_pane

0x3fce,	// (0x00059817) scroll_pane_cp03

0xc0e1,	// (0x0006192a) scroll_pane_cp04

0xc1fb,	// (0x00061a44) scroll_pane_cp05_ParamLimits

0xc1fb,	// (0x00061a44) scroll_pane_cp05

0x3fd8,	// (0x00059821) mce_header_field_pane_ParamLimits

0x3fd8,	// (0x00059821) mce_header_field_pane

0x3ff1,	// (0x0005983a) mce_header_field_pane_2_ParamLimits

0x3ff1,	// (0x0005983a) mce_header_field_pane_2

0x4007,	// (0x00059850) mce_header_field_pane_3

0x400f,	// (0x00059858) list_single_mce_message_pane_ParamLimits

0x400f,	// (0x00059858) list_single_mce_message_pane

0x402b,	// (0x00059874) list_single_mce_smart_pane_ParamLimits

0x402b,	// (0x00059874) list_single_mce_smart_pane

0xc207,	// (0x00061a50) input_focus_pane_cp03

0x0254,	// (0x00055a9d) list_header_data_pane

0x4052,	// (0x0005989b) mce_header_field_pane_t1

0x4062,	// (0x000598ab) list_single_mce_header_pane_ParamLimits

0x4062,	// (0x000598ab) list_single_mce_header_pane

0x025c,	// (0x00055aa5) list_single_mce_header_pane_t1

0x026b,	// (0x00055ab4) list_single_mce_message_pane_g1

0x0273,	// (0x00055abc) list_single_mce_message_pane_t1

0x4094,	// (0x000598dd) bg_cale_heading_pane_cp01_ParamLimits

0x4094,	// (0x000598dd) bg_cale_heading_pane_cp01

0x0281,	// (0x00055aca) bg_cale_pane_cp02_ParamLimits

0x0281,	// (0x00055aca) bg_cale_pane_cp02

0x40c7,	// (0x00059910) cale_month_corner_pane

0x40dd,	// (0x00059926) cale_month_day_heading_pane_ParamLimits

0x40dd,	// (0x00059926) cale_month_day_heading_pane

0x4110,	// (0x00059959) cale_month_pane_g1_ParamLimits

0x4110,	// (0x00059959) cale_month_pane_g1

0x413c,	// (0x00059985) cale_month_pane_g2_ParamLimits

0x413c,	// (0x00059985) cale_month_pane_g2

0x415d,	// (0x000599a6) cale_month_pane_g3_ParamLimits

0x415d,	// (0x000599a6) cale_month_pane_g3

0x4199,	// (0x000599e2) cale_month_pane_g4_ParamLimits

0x4199,	// (0x000599e2) cale_month_pane_g4

0x41d5,	// (0x00059a1e) cale_month_pane_g5_ParamLimits

0x41d5,	// (0x00059a1e) cale_month_pane_g5

0x4211,	// (0x00059a5a) cale_month_pane_g6_ParamLimits

0x4211,	// (0x00059a5a) cale_month_pane_g6

0x424d,	// (0x00059a96) cale_month_pane_g7_ParamLimits

0x424d,	// (0x00059a96) cale_month_pane_g7

0x4289,	// (0x00059ad2) cale_month_pane_g8_ParamLimits

0x4289,	// (0x00059ad2) cale_month_pane_g8

0x42c5,	// (0x00059b0e) cale_month_pane_g9_ParamLimits

0x42c5,	// (0x00059b0e) cale_month_pane_g9

0x42fb,	// (0x00059b44) cale_month_pane_g10_ParamLimits

0x42fb,	// (0x00059b44) cale_month_pane_g10

0x4325,	// (0x00059b6e) cale_month_pane_g11_ParamLimits

0x4325,	// (0x00059b6e) cale_month_pane_g11

0x434f,	// (0x00059b98) cale_month_pane_g12_ParamLimits

0x434f,	// (0x00059b98) cale_month_pane_g12

0x437d,	// (0x00059bc6) cale_month_pane_g13_ParamLimits

0x437d,	// (0x00059bc6) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00064b3b) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00064b3b) cale_month_pane_g

0x43ab,	// (0x00059bf4) cale_month_week_pane

0x43bc,	// (0x00059c05) grid_cale_month_pane_ParamLimits

0x43bc,	// (0x00059c05) grid_cale_month_pane

0x43ea,	// (0x00059c33) cale_month_day_heading_pane_t1

0x4448,	// (0x00059c91) cale_month_day_heading_pane_t2

0x44ad,	// (0x00059cf6) cale_month_day_heading_pane_t3

0x4512,	// (0x00059d5b) cale_month_day_heading_pane_t4

0x4577,	// (0x00059dc0) cale_month_day_heading_pane_t5

0x45dc,	// (0x00059e25) cale_month_day_heading_pane_t6

0x4641,	// (0x00059e8a) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00064b56) cale_month_day_heading_pane_t

0xbe67,	// (0x000616b0) bg_cale_side_pane_cp01

0x46a6,	// (0x00059eef) cale_month_week_pane_t1

0x46bd,	// (0x00059f06) cale_month_week_pane_t2

0x46d4,	// (0x00059f1d) cale_month_week_pane_t3

0x46eb,	// (0x00059f34) cale_month_week_pane_t4

0x4702,	// (0x00059f4b) cale_month_week_pane_t5

0x4719,	// (0x00059f62) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00064b65) cale_month_week_pane_t

0x4738,	// (0x00059f81) cell_cale_month_pane_ParamLimits

0x4738,	// (0x00059f81) cell_cale_month_pane

0xc210,	// (0x00061a59) cell_cale_month_pane_g1

0x4810,	// (0x0005a059) cell_cale_month_pane_t1_ParamLimits

0x4810,	// (0x0005a059) cell_cale_month_pane_t1

0xbe75,	// (0x000616be) grid_highlight_pane_cp08

0xbd18,	// (0x00061561) main_smil_g1

0x482c,	// (0x0005a075) smil_status_pane

0x02b6,	// (0x00055aff) smil_text_pane

0x1a6b,	// (0x000572b4) bg_popup_call3_rect_pane_g8

0x1a73,	// (0x000572bc) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00064e1e) bg_popup_call3_rect_pane_g

0x1d16,	// (0x0005755f) smil_status_volume_pane_g1

0x02c0,	// (0x00055b09) smil_status_pane_t1

0xc30e,	// (0x00061b57) volume_smil_pane

0x02d7,	// (0x00055b20) list_smil_text_pane

0x4841,	// (0x0005a08a) scroll_pane_cp011

0x484c,	// (0x0005a095) smil_text_list_pane_t1_ParamLimits

0x484c,	// (0x0005a095) smil_text_list_pane_t1

0xc21c,	// (0x00061a65) aid_volume_smil_ParamLimits

0xc21c,	// (0x00061a65) aid_volume_smil

0xbd18,	// (0x00061561) smil_volume_pane_g1

0xbd18,	// (0x00061561) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00064b85) smil_volume_pane_g

0xbc9f,	// (0x000614e8) listscroll_cale_day_pane

0x02e1,	// (0x00055b2a) bg_cale_pane

0x02f9,	// (0x00055b42) list_cale_pane

0x030a,	// (0x00055b53) scroll_pane_cp09

0x031b,	// (0x00055b64) cale_bg_pane_g1

0x0323,	// (0x00055b6c) cale_bg_pane_g2

0x032b,	// (0x00055b74) cale_bg_pane_g3

0x0333,	// (0x00055b7c) cale_bg_pane_g4

0x033b,	// (0x00055b84) cale_bg_pane_g5

0x0343,	// (0x00055b8c) cale_bg_pane_g6

0x034b,	// (0x00055b94) cale_bg_pane_g7

0x0353,	// (0x00055b9c) cale_bg_pane_g8

0x035b,	// (0x00055ba4) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00064b8a) cale_bg_pane_g

0x48a1,	// (0x0005a0ea) list_cale_time_pane_ParamLimits

0x48a1,	// (0x0005a0ea) list_cale_time_pane

0x48b6,	// (0x0005a0ff) list_cale_time_pane_g1_ParamLimits

0x48b6,	// (0x0005a0ff) list_cale_time_pane_g1

0x0363,	// (0x00055bac) list_cale_time_pane_g2_ParamLimits

0x0363,	// (0x00055bac) list_cale_time_pane_g2

0x48c2,	// (0x0005a10b) list_cale_time_pane_g3_ParamLimits

0x48c2,	// (0x0005a10b) list_cale_time_pane_g3

0x48d0,	// (0x0005a119) list_cale_time_pane_g4_ParamLimits

0x48d0,	// (0x0005a119) list_cale_time_pane_g4

0x48de,	// (0x0005a127) list_cale_time_pane_g5_ParamLimits

0x48de,	// (0x0005a127) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00064b9d) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00064b9d) list_cale_time_pane_g

0x48ec,	// (0x0005a135) list_cale_time_pane_t1_ParamLimits

0x48ec,	// (0x0005a135) list_cale_time_pane_t1

0x4914,	// (0x0005a15d) list_cale_time_pane_t2_ParamLimits

0x4914,	// (0x0005a15d) list_cale_time_pane_t2

0x4d01,	// (0x0005a54a) aid_blid_cardinal_pane

0x4d43,	// (0x0005a58c) compass_pane_t4

0x493c,	// (0x0005a185) list_cale_time_pane_t4_ParamLimits

0x493c,	// (0x0005a185) list_cale_time_pane_t4

0x4d51,	// (0x0005a59a) compass_pane_t5

0x4d61,	// (0x0005a5aa) compass_pane_t6

0x4d6f,	// (0x0005a5b8) compass_pane_t7

0x0771,	// (0x00055fba) navi_pane_cc_t1

0x08c6,	// (0x0005610f) aid_phob_thumbnail_center_pane

0x5520,	// (0x0005ad69) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00064baa) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00064baa) list_cale_time_pane_t

0xb5a4,	// (0x00060ded) bg_popup_window_pane_cp02_ParamLimits

0xb5a4,	// (0x00060ded) bg_popup_window_pane_cp02

0x037d,	// (0x00055bc6) heading_pane_cp01_ParamLimits

0x037d,	// (0x00055bc6) heading_pane_cp01

0x0389,	// (0x00055bd2) loc_req_pane_ParamLimits

0x0389,	// (0x00055bd2) loc_req_pane

0x0399,	// (0x00055be2) loc_type_pane_ParamLimits

0x0399,	// (0x00055be2) loc_type_pane

0x03ab,	// (0x00055bf4) loc_type_pane_t1_ParamLimits

0x03ab,	// (0x00055bf4) loc_type_pane_t1

0x03bd,	// (0x00055c06) loc_type_pane_t2_ParamLimits

0x03bd,	// (0x00055c06) loc_type_pane_t2

0x03cf,	// (0x00055c18) loc_type_pane_t3_ParamLimits

0x03cf,	// (0x00055c18) loc_type_pane_t3

0x0002,

0xf368,	// (0x00064bb1) loc_type_pane_t_ParamLimits

0xf368,	// (0x00064bb1) loc_type_pane_t

0x03e1,	// (0x00055c2a) list_loc_req_pane

0x03eb,	// (0x00055c34) scroll_pane_cp012

0x4964,	// (0x0005a1ad) list_single_loc_request_popup_menu_pane_ParamLimits

0x4964,	// (0x0005a1ad) list_single_loc_request_popup_menu_pane

0x03f6,	// (0x00055c3f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x03f6,	// (0x00055c3f) list_single_loc_request_popup_menu_pane_g1

0x0402,	// (0x00055c4b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0402,	// (0x00055c4b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00064bb8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00064bb8) list_single_loc_request_popup_menu_pane_g

0x040e,	// (0x00055c57) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x040e,	// (0x00055c57) list_single_loc_request_popup_menu_pane_t1

0xbba8,	// (0x000613f1) bg_popup_window_pane_cp03_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_window_pane_cp03

0x1d81,	// (0x000575ca) heading_loc_req_pane_ParamLimits

0x1d81,	// (0x000575ca) heading_loc_req_pane

0x4971,	// (0x0005a1ba) popup_dyc_status_message_window_g1_ParamLimits

0x4971,	// (0x0005a1ba) popup_dyc_status_message_window_g1

0x4985,	// (0x0005a1ce) popup_dyc_status_message_window_t1_ParamLimits

0x4985,	// (0x0005a1ce) popup_dyc_status_message_window_t1

0x499a,	// (0x0005a1e3) popup_dyc_status_message_window_t2_ParamLimits

0x499a,	// (0x0005a1e3) popup_dyc_status_message_window_t2

0x49af,	// (0x0005a1f8) popup_dyc_status_message_window_t3_ParamLimits

0x49af,	// (0x0005a1f8) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00064bbd) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00064bbd) popup_dyc_status_message_window_t

0xb94d,	// (0x00061196) bg_heading_pane_cp01

0x0424,	// (0x00055c6d) heading_loc_req_pane_g1

0x042c,	// (0x00055c75) heading_loc_req_pane_g2

0x0434,	// (0x00055c7d) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00064bc4) heading_loc_req_pane_g

0x043c,	// (0x00055c85) heading_loc_req_pane_t1

0x044c,	// (0x00055c95) bg_popup_sub_pane_cp01_ParamLimits

0x044c,	// (0x00055c95) bg_popup_sub_pane_cp01

0x045a,	// (0x00055ca3) popup_cale_events_window_g1_ParamLimits

0x045a,	// (0x00055ca3) popup_cale_events_window_g1

0x047a,	// (0x00055cc3) popup_cale_events_window_g2_ParamLimits

0x047a,	// (0x00055cc3) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00064bf8) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00064bf8) popup_cale_events_window_g

0x049a,	// (0x00055ce3) popup_cale_events_window_t1_ParamLimits

0x049a,	// (0x00055ce3) popup_cale_events_window_t1

0x04ac,	// (0x00055cf5) popup_cale_events_window_t2_ParamLimits

0x04ac,	// (0x00055cf5) popup_cale_events_window_t2

0x04ea,	// (0x00055d33) popup_cale_events_window_t3_ParamLimits

0x04ea,	// (0x00055d33) popup_cale_events_window_t3

0x0524,	// (0x00055d6d) popup_cale_events_window_t4_ParamLimits

0x0524,	// (0x00055d6d) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00064bfd) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00064bfd) popup_cale_events_window_t

0x4ab4,	// (0x0005a2fd) call_type_pane

0x4ac4,	// (0x0005a30d) popup_call_status_window_g1

0x4ad8,	// (0x0005a321) popup_call_status_window_g2

0x4aec,	// (0x0005a335) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00064c06) popup_call_status_window_g

0x0568,	// (0x00055db1) call_type_pane_g1

0x0571,	// (0x00055dba) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00064c0d) call_type_pane_g

0xb94d,	// (0x00061196) bg_popup_sub_pane_cp02

0x057a,	// (0x00055dc3) listscroll_popup_wml_pane

0x0582,	// (0x00055dcb) list_wml_pane

0x058c,	// (0x00055dd5) scroll_pane_cp013

0x0597,	// (0x00055de0) list_single_graphic_popup_wml_pane_ParamLimits

0x0597,	// (0x00055de0) list_single_graphic_popup_wml_pane

0xbd18,	// (0x00061561) list_single_graphic_popup_wml_pane_g1

0x05ab,	// (0x00055df4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00064c12) list_single_graphic_popup_wml_pane_g

0x05b3,	// (0x00055dfc) list_single_graphic_popup_wml_pane_t1

0x05c9,	// (0x00055e12) aid_call_pane

0xbba0,	// (0x000613e9) popup_clock_analogue_window_g1

0xbba0,	// (0x000613e9) popup_clock_analogue_window_g2

0xc23e,	// (0x00061a87) popup_clock_analogue_window_g3

0xc23e,	// (0x00061a87) popup_clock_analogue_window_g4

0xbd18,	// (0x00061561) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00064c17) popup_clock_analogue_window_g

0xc246,	// (0x00061a8f) popup_clock_analogue_window_t1

0xc254,	// (0x00061a9d) clock_digital_number_pane_ParamLimits

0xc254,	// (0x00061a9d) clock_digital_number_pane

0xc260,	// (0x00061aa9) clock_digital_number_pane_cp02_ParamLimits

0xc260,	// (0x00061aa9) clock_digital_number_pane_cp02

0xc26c,	// (0x00061ab5) clock_digital_number_pane_cp03_ParamLimits

0xc26c,	// (0x00061ab5) clock_digital_number_pane_cp03

0xc278,	// (0x00061ac1) clock_digital_number_pane_cp04_ParamLimits

0xc278,	// (0x00061ac1) clock_digital_number_pane_cp04

0xc284,	// (0x00061acd) clock_digital_separator_pane_ParamLimits

0xc284,	// (0x00061acd) clock_digital_separator_pane

0xc290,	// (0x00061ad9) popup_clock_digital_window_t1

0xbd18,	// (0x00061561) clock_digital_number_pane_g1

0xbd18,	// (0x00061561) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00064b85) clock_digital_number_pane_g

0xbd18,	// (0x00061561) clock_digital_separator_pane_g1

0xbd18,	// (0x00061561) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00064b85) clock_digital_separator_pane_g

0xb94d,	// (0x00061196) bg_popup_window_pane_cp04

0x05d1,	// (0x00055e1a) heading_pane_cp03

0x05d9,	// (0x00055e22) listscroll_popup_gms_pane

0x05e1,	// (0x00055e2a) grid_large_graphic_popup_pane

0x05eb,	// (0x00055e34) listscroll_popup_gms_pane_g1

0x05f3,	// (0x00055e3c) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00064c22) listscroll_popup_gms_pane_g

0xc0e1,	// (0x0006192a) scroll_pane_cp014

0x4afc,	// (0x0005a345) cell_large_graphic_popup_pane_ParamLimits

0x4afc,	// (0x0005a345) cell_large_graphic_popup_pane

0x4b14,	// (0x0005a35d) cell_large_graphic_popup_pane_g1_ParamLimits

0x4b14,	// (0x0005a35d) cell_large_graphic_popup_pane_g1

0x05fb,	// (0x00055e44) cell_large_graphic_popup_pane_g2_ParamLimits

0x05fb,	// (0x00055e44) cell_large_graphic_popup_pane_g2

0x0607,	// (0x00055e50) cell_large_graphic_popup_pane_g3_ParamLimits

0x0607,	// (0x00055e50) cell_large_graphic_popup_pane_g3

0x0614,	// (0x00055e5d) cell_large_graphic_popup_pane_g4_ParamLimits

0x0614,	// (0x00055e5d) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00064c27) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00064c27) cell_large_graphic_popup_pane_g

0x0624,	// (0x00055e6d) grid_highlight_pane_cp010

0xbd18,	// (0x00061561) bg_popup_call_pane_g1

0x062e,	// (0x00055e77) list_single_graphic_popup_conf_pane_ParamLimits

0x062e,	// (0x00055e77) list_single_graphic_popup_conf_pane

0x0640,	// (0x00055e89) list_highlight_pane_cp01

0x0649,	// (0x00055e92) list_single_graphic_popup_conf_pane_g1

0x0651,	// (0x00055e9a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00064c30) list_single_graphic_popup_conf_pane_g

0x0659,	// (0x00055ea2) list_single_graphic_popup_conf_pane_t1

0x0667,	// (0x00055eb0) linegrid_cams_pane_g1

0x4b20,	// (0x0005a369) linegrid_cams_pane_g2

0xbea8,	// (0x000616f1) linegrid_cams_pane_g3

0x0670,	// (0x00055eb9) linegrid_cams_pane_g4

0x4b29,	// (0x0005a372) linegrid_cams_pane_g5

0x4b32,	// (0x0005a37b) linegrid_cams_pane_g6

0xbeb1,	// (0x000616fa) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00064c35) linegrid_cams_pane_g

0x0679,	// (0x00055ec2) popup_clock_analogue_window

0x0679,	// (0x00055ec2) popup_clock_digital_window

0xb94d,	// (0x00061196) popup_phob_thumbnail_window

0xbd18,	// (0x00061561) call_video_uplink_pane_g1

0x0682,	// (0x00055ecb) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00064c44) call_video_uplink_pane_g

0x068a,	// (0x00055ed3) video_uplink_pane

0x0692,	// (0x00055edb) mce_image_pane_g1

0x4b3d,	// (0x0005a386) mce_image_pane_g2

0x4b47,	// (0x0005a390) mce_image_pane_g3

0x4b51,	// (0x0005a39a) mce_image_pane_g4

0x4b59,	// (0x0005a3a2) mce_image_pane_g5

0x0004,

0xf400,	// (0x00064c49) mce_image_pane_g

0x069c,	// (0x00055ee5) control_top_pane_stacon_cp01_ParamLimits

0x069c,	// (0x00055ee5) control_top_pane_stacon_cp01

0x06b0,	// (0x00055ef9) uni_indicator_pane_stacon_cp01_ParamLimits

0x06b0,	// (0x00055ef9) uni_indicator_pane_stacon_cp01

0x06c1,	// (0x00055f0a) bg_popup_sub_pane_cp03

0x4b61,	// (0x0005a3aa) chi_dic_find_pane

0x4b69,	// (0x0005a3b2) listscroll_chi_dic_pane

0x4b72,	// (0x0005a3bb) main_pane_chidic_g1

0x4b85,	// (0x0005a3ce) chi_dic_find_pane_t1

0x06cb,	// (0x00055f14) find_chidic_pane

0x06d4,	// (0x00055f1d) chi_dic_list_pane_ParamLimits

0x06d4,	// (0x00055f1d) chi_dic_list_pane

0x06e5,	// (0x00055f2e) scroll_pane_cp020

0x4b93,	// (0x0005a3dc) find_chidic_pane_t1

0xb94d,	// (0x00061196) input_focus_pane_cp06

0x4ba2,	// (0x0005a3eb) list_chi_dic_pane_ParamLimits

0x4ba2,	// (0x0005a3eb) list_chi_dic_pane

0x4bb4,	// (0x0005a3fd) list_chi_dic_pane_t1_ParamLimits

0x4bb4,	// (0x0005a3fd) list_chi_dic_pane_t1

0xb94d,	// (0x00061196) list_highlight_pane_cp020

0x06ed,	// (0x00055f36) bg_cale_heading_pane_g1

0x4bc7,	// (0x0005a410) bg_cale_heading_pane_g2

0x4bcf,	// (0x0005a418) bg_cale_heading_pane_g3

0x4bd7,	// (0x0005a420) bg_cale_heading_pane_g4

0x4bdf,	// (0x0005a428) bg_cale_heading_pane_g5

0x4be7,	// (0x0005a430) bg_cale_heading_pane_g6

0x4bef,	// (0x0005a438) bg_cale_heading_pane_g7

0x4bf7,	// (0x0005a440) bg_cale_heading_pane_g8

0x4bff,	// (0x0005a448) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00064c54) bg_cale_heading_pane_g

0x06ed,	// (0x00055f36) bg_cale_side_pane_g1

0x4c07,	// (0x0005a450) bg_cale_side_pane_g2

0x4c11,	// (0x0005a45a) bg_cale_side_pane_g3

0x4c1b,	// (0x0005a464) bg_cale_side_pane_g4

0x4c25,	// (0x0005a46e) bg_cale_side_pane_g5

0x4c2f,	// (0x0005a478) bg_cale_side_pane_g6

0x4c39,	// (0x0005a482) bg_cale_side_pane_g7

0x4c43,	// (0x0005a48c) bg_cale_side_pane_g8

0x4c4b,	// (0x0005a494) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00064c67) bg_cale_side_pane_g

0x4c53,	// (0x0005a49c) popup_call_status_window_ParamLimits

0x4c53,	// (0x0005a49c) popup_call_status_window

0x06f5,	// (0x00055f3e) stacon_top_pane

0x06fd,	// (0x00055f46) status_pane_ParamLimits

0x06fd,	// (0x00055f46) status_pane

0x0712,	// (0x00055f5b) status_small_pane

0x071a,	// (0x00055f63) control_pane

0xb94d,	// (0x00061196) stacon_bottom_pane

0x0722,	// (0x00055f6b) list_single_mce_smart_pane_t1_ParamLimits

0x0722,	// (0x00055f6b) list_single_mce_smart_pane_t1

0x0735,	// (0x00055f7e) list_single_mce_smart_pane_t2_ParamLimits

0x0735,	// (0x00055f7e) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00064c7a) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00064c7a) list_single_mce_smart_pane_t

0x4ca0,	// (0x0005a4e9) compass_pane

0x4cab,	// (0x0005a4f4) main_location2_pane_t1

0x4cc1,	// (0x0005a50a) main_location2_pane_t2

0x4cd7,	// (0x0005a520) main_location2_pane_t3

0x0003,

0xf436,	// (0x00064c7f) main_location2_pane_t

0x0754,	// (0x00055f9d) compass_pane_g1_ParamLimits

0x0754,	// (0x00055f9d) compass_pane_g1

0x4d25,	// (0x0005a56e) compass_pane_t1

0x4d34,	// (0x0005a57d) compass_pane_t2

0x0005,

0xf43f,	// (0x00064c88) compass_pane_t

0x4d7f,	// (0x0005a5c8) text_secondary_cp61

0x0768,	// (0x00055fb1) navi_pane_cams_g5

0x078b,	// (0x00055fd4) navi_pane_im_t1

0x0799,	// (0x00055fe2) navi_pane_mp_g1_ParamLimits

0x0799,	// (0x00055fe2) navi_pane_mp_g1

0x07ad,	// (0x00055ff6) navi_pane_mp_g2_ParamLimits

0x07ad,	// (0x00055ff6) navi_pane_mp_g2

0x07b9,	// (0x00056002) navi_pane_mp_g3_ParamLimits

0x07b9,	// (0x00056002) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00064c9c) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00064c9c) navi_pane_mp_g

0x07c5,	// (0x0005600e) navi_pane_mp_t1

0x07d3,	// (0x0005601c) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00064ca3) navi_pane_mp_t

0x080f,	// (0x00056058) navi_pane_vt_g1

0x07c5,	// (0x0005600e) navi_pane_vt_t1

0x0817,	// (0x00056060) navi_slider_pane

0x081f,	// (0x00056068) zooming_pane

0x0827,	// (0x00056070) navi_slider_pane_g1

0xc2ad,	// (0x00061af6) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00064caa) navi_slider_pane_g

0x084b,	// (0x00056094) aid_levels_zoom

0x0853,	// (0x0005609c) zooming_pane_g1

0x085b,	// (0x000560a4) zooming_pane_g2

0x085b,	// (0x000560a4) zooming_pane_g3

0x0002,

0xf470,	// (0x00064cb9) zooming_pane_g

0x0863,	// (0x000560ac) level_10_zoom

0x086c,	// (0x000560b5) level_11_zoom

0x0875,	// (0x000560be) level_1_zoom

0x087e,	// (0x000560c7) level_2_zoom

0x0887,	// (0x000560d0) level_3_zoom

0x0890,	// (0x000560d9) level_4_zoom

0x0899,	// (0x000560e2) level_5_zoom

0x08a2,	// (0x000560eb) level_6_zoom

0x08ab,	// (0x000560f4) level_7_zoom

0x08b4,	// (0x000560fd) level_8_zoom

0x08bd,	// (0x00056106) level_9_zoom

0x08ce,	// (0x00056117) popup_phob_thumbnail_window_g1

0x08d6,	// (0x0005611f) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00064cc0) popup_phob_thumbnail_window_g

0x1bd1,	// (0x0005741a) level_1_location

0x1bd9,	// (0x00057422) level_2_location

0x1be1,	// (0x0005742a) level_3_location

0x1be9,	// (0x00057432) level_4_location

0x081f,	// (0x00056068) level_5_location

0x4eaa,	// (0x0005a6f3) mce_icon_pane_g1

0x4eb2,	// (0x0005a6fb) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00064cc5) mce_icon_pane_g

0x4eba,	// (0x0005a703) main_mup_pane_g1_ParamLimits

0x4eba,	// (0x0005a703) main_mup_pane_g1

0x4ed0,	// (0x0005a719) main_mup_pane_g2_ParamLimits

0x4ed0,	// (0x0005a719) main_mup_pane_g2

0x4ee8,	// (0x0005a731) main_mup_pane_g3_ParamLimits

0x4ee8,	// (0x0005a731) main_mup_pane_g3

0x4f00,	// (0x0005a749) main_mup_pane_g4_ParamLimits

0x4f00,	// (0x0005a749) main_mup_pane_g4

0x4f12,	// (0x0005a75b) main_mup_pane_g5_ParamLimits

0x4f12,	// (0x0005a75b) main_mup_pane_g5

0x4f2e,	// (0x0005a777) main_mup_pane_g6_ParamLimits

0x4f2e,	// (0x0005a777) main_mup_pane_g6

0x4f48,	// (0x0005a791) main_mup_pane_g7_ParamLimits

0x4f48,	// (0x0005a791) main_mup_pane_g7

0x4f66,	// (0x0005a7af) main_mup_pane_g8_ParamLimits

0x4f66,	// (0x0005a7af) main_mup_pane_g8

0x4f84,	// (0x0005a7cd) main_mup_pane_g9_ParamLimits

0x4f84,	// (0x0005a7cd) main_mup_pane_g9

0x4fa0,	// (0x0005a7e9) main_mup_pane_g10_ParamLimits

0x4fa0,	// (0x0005a7e9) main_mup_pane_g10

0x4fbe,	// (0x0005a807) main_mup_pane_g11_ParamLimits

0x4fbe,	// (0x0005a807) main_mup_pane_g11

0x4fd8,	// (0x0005a821) main_mup_pane_g12_ParamLimits

0x4fd8,	// (0x0005a821) main_mup_pane_g12

0x4fee,	// (0x0005a837) main_mup_pane_g13_ParamLimits

0x4fee,	// (0x0005a837) main_mup_pane_g13

0x000c,

0xf481,	// (0x00064cca) main_mup_pane_g_ParamLimits

0xf481,	// (0x00064cca) main_mup_pane_g

0x5002,	// (0x0005a84b) main_mup_pane_t1_ParamLimits

0x5002,	// (0x0005a84b) main_mup_pane_t1

0x501e,	// (0x0005a867) main_mup_pane_t2_ParamLimits

0x501e,	// (0x0005a867) main_mup_pane_t2

0x5036,	// (0x0005a87f) main_mup_pane_t3_ParamLimits

0x5036,	// (0x0005a87f) main_mup_pane_t3

0x504e,	// (0x0005a897) main_mup_pane_t4_ParamLimits

0x504e,	// (0x0005a897) main_mup_pane_t4

0x506c,	// (0x0005a8b5) main_mup_pane_t5_ParamLimits

0x506c,	// (0x0005a8b5) main_mup_pane_t5

0x5081,	// (0x0005a8ca) main_mup_pane_t6_ParamLimits

0x5081,	// (0x0005a8ca) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00064ce5) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00064ce5) main_mup_pane_t

0x5093,	// (0x0005a8dc) mup_progress_pane_ParamLimits

0x5093,	// (0x0005a8dc) mup_progress_pane

0x509f,	// (0x0005a8e8) mup_visualizer_pane_ParamLimits

0x509f,	// (0x0005a8e8) mup_visualizer_pane

0x50d3,	// (0x0005a91c) mup_volume_pane_ParamLimits

0x50d3,	// (0x0005a91c) mup_volume_pane

0x055a,	// (0x00055da3) mup_visualizer_pane_g1_ParamLimits

0x055a,	// (0x00055da3) mup_visualizer_pane_g1

0x055a,	// (0x00055da3) mup_visualizer_pane_g2_ParamLimits

0x055a,	// (0x00055da3) mup_visualizer_pane_g2

0x0754,	// (0x00055f9d) mup_visualizer_pane_g3_ParamLimits

0x0754,	// (0x00055f9d) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00064cf2) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00064cf2) mup_visualizer_pane_g

0xbd18,	// (0x00061561) mup_volume_pane_g1

0x08e6,	// (0x0005612f) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00064cf9) mup_volume_pane_g

0xbd18,	// (0x00061561) mup_progress_pane_g1

0x08ef,	// (0x00056138) mup_progress_pane_g2

0x08f8,	// (0x00056141) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00064cfe) mup_progress_pane_g

0xb94d,	// (0x00061196) bg_popup_window_pane_cp05

0x0901,	// (0x0005614a) heading_pane_cp02_ParamLimits

0x0901,	// (0x0005614a) heading_pane_cp02

0x091d,	// (0x00056166) list_popup_blid_pane

0x0925,	// (0x0005616e) list_blid_sat_info_pane_ParamLimits

0x0925,	// (0x0005616e) list_blid_sat_info_pane

0x0938,	// (0x00056181) list_blid_sat_info_pane_g1

0x0940,	// (0x00056189) list_blid_sat_info_pane_t1

0x51fd,	// (0x0005aa46) mup_equalizer_pane_ParamLimits

0x51fd,	// (0x0005aa46) mup_equalizer_pane

0x521e,	// (0x0005aa67) mup_equalizer_pane_cp1_ParamLimits

0x521e,	// (0x0005aa67) mup_equalizer_pane_cp1

0x523f,	// (0x0005aa88) mup_equalizer_pane_cp2_ParamLimits

0x523f,	// (0x0005aa88) mup_equalizer_pane_cp2

0x5264,	// (0x0005aaad) mup_equalizer_pane_cp3_ParamLimits

0x5264,	// (0x0005aaad) mup_equalizer_pane_cp3

0x528d,	// (0x0005aad6) mup_equalizer_pane_cp4_ParamLimits

0x528d,	// (0x0005aad6) mup_equalizer_pane_cp4

0x52b6,	// (0x0005aaff) mup_equalizer_pane_cp5

0x52ce,	// (0x0005ab17) mup_equalizer_pane_cp6

0x52e6,	// (0x0005ab2f) mup_equalizer_pane_cp7

0x1aeb,	// (0x00057334) bg_popup_call_poc_act_pane_g9

0x1af3,	// (0x0005733c) bg_popup_call_poc_act_pane_g10

0x1afb,	// (0x00057344) bg_popup_call_poc_act_pane_g11

0x000a,

0xbba8,	// (0x000613f1) mup_scale_pane

0xbd18,	// (0x00061561) mup_scale_pane_g1

0x094e,	// (0x00056197) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00064d1a) mup_scale_pane_g

0x0972,	// (0x000561bb) msg_data_pane

0x097a,	// (0x000561c3) scroll_pane_cp017

0x5310,	// (0x0005ab59) bg_list_pane_cp04_ParamLimits

0x5310,	// (0x0005ab59) bg_list_pane_cp04

0x0982,	// (0x000561cb) msg_data_pane_g1

0x5336,	// (0x0005ab7f) msg_data_pane_g2

0x5340,	// (0x0005ab89) msg_data_pane_g3

0x534a,	// (0x0005ab93) msg_data_pane_g4

0x5352,	// (0x0005ab9b) msg_data_pane_g5

0x535a,	// (0x0005aba3) msg_data_pane_g6

0x5362,	// (0x0005abab) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00064d29) msg_data_pane_g

0x536a,	// (0x0005abb3) msg_text_pane_ParamLimits

0x536a,	// (0x0005abb3) msg_text_pane

0x539b,	// (0x0005abe4) qrid_highlight_pane_cp011_ParamLimits

0x539b,	// (0x0005abe4) qrid_highlight_pane_cp011

0xb94d,	// (0x00061196) msg_body_pane

0xb94d,	// (0x00061196) msg_header_pane

0x0993,	// (0x000561dc) input_focus_pane_cp07

0x53bf,	// (0x0005ac08) msg_header_pane_t1_ParamLimits

0x53bf,	// (0x0005ac08) msg_header_pane_t1

0x53d3,	// (0x0005ac1c) msg_header_pane_t2_ParamLimits

0x53d3,	// (0x0005ac1c) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00064d3d) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00064d3d) msg_header_pane_t

0x09a8,	// (0x000561f1) msg_body_pane_g1

0x53e5,	// (0x0005ac2e) msg_body_pane_t1_ParamLimits

0x53e5,	// (0x0005ac2e) msg_body_pane_t1

0x5416,	// (0x0005ac5f) msg_body_pane_t2_ParamLimits

0x5416,	// (0x0005ac5f) msg_body_pane_t2

0x5428,	// (0x0005ac71) msg_body_pane_t3_ParamLimits

0x5428,	// (0x0005ac71) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00064d42) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00064d42) msg_body_pane_t

0x5474,	// (0x0005acbd) main_viewer_pane_g1_ParamLimits

0x5474,	// (0x0005acbd) main_viewer_pane_g1

0x5482,	// (0x0005accb) main_viewer_pane_g2_ParamLimits

0x5482,	// (0x0005accb) main_viewer_pane_g2

0x5490,	// (0x0005acd9) main_viewer_pane_g3_ParamLimits

0x5490,	// (0x0005acd9) main_viewer_pane_g3

0x549f,	// (0x0005ace8) main_viewer_pane_g4_ParamLimits

0x549f,	// (0x0005ace8) main_viewer_pane_g4

0xc2d7,	// (0x00061b20) main_viewer_pane_g5_ParamLimits

0xc2d7,	// (0x00061b20) main_viewer_pane_g5

0xc2d7,	// (0x00061b20) main_viewer_pane_g7_ParamLimits

0xc2d7,	// (0x00061b20) main_viewer_pane_g7

0xc2e9,	// (0x00061b32) main_viewer_pane_g8_ParamLimits

0xc2e9,	// (0x00061b32) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00064d52) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00064d52) main_viewer_pane_g

0x09b0,	// (0x000561f9) viewer_content_pane_ParamLimits

0x09b0,	// (0x000561f9) viewer_content_pane

0x54dd,	// (0x0005ad26) main_postcard_pane_g1_ParamLimits

0x54dd,	// (0x0005ad26) main_postcard_pane_g1

0x54f3,	// (0x0005ad3c) main_postcard_pane_g2_ParamLimits

0x54f3,	// (0x0005ad3c) main_postcard_pane_g2

0x5509,	// (0x0005ad52) main_postcard_pane_g3_ParamLimits

0x5509,	// (0x0005ad52) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00064d63) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00064d63) main_postcard_pane_g

0x5520,	// (0x0005ad69) main_postcard_pane_g4

0x1d29,	// (0x00057572) smil_status_volume_pane_g2

0x5563,	// (0x0005adac) postcard_pane_ParamLimits

0x5563,	// (0x0005adac) postcard_pane

0x09cc,	// (0x00056215) postcard_pane_g1_ParamLimits

0x09cc,	// (0x00056215) postcard_pane_g1

0x55b3,	// (0x0005adfc) postcard_pane_g2_ParamLimits

0x55b3,	// (0x0005adfc) postcard_pane_g2

0x55bf,	// (0x0005ae08) postcard_pane_g3_ParamLimits

0x55bf,	// (0x0005ae08) postcard_pane_g3

0x09be,	// (0x00056207) postcard_pane_g4_ParamLimits

0x09be,	// (0x00056207) postcard_pane_g4

0x55cb,	// (0x0005ae14) postcard_pane_g5_ParamLimits

0x55cb,	// (0x0005ae14) postcard_pane_g5

0x55dd,	// (0x0005ae26) postcard_pane_g6_ParamLimits

0x55dd,	// (0x0005ae26) postcard_pane_g6

0x09cc,	// (0x00056215) postcard_pane_g7_ParamLimits

0x09cc,	// (0x00056215) postcard_pane_g7

0x0006,

0xf527,	// (0x00064d70) postcard_pane_g_ParamLimits

0xf527,	// (0x00064d70) postcard_pane_g

0x55f5,	// (0x0005ae3e) main_mp2_pane_g1_ParamLimits

0x55f5,	// (0x0005ae3e) main_mp2_pane_g1

0x5603,	// (0x0005ae4c) main_mp2_pane_g2_ParamLimits

0x5603,	// (0x0005ae4c) main_mp2_pane_g2

0x560f,	// (0x0005ae58) main_mp2_pane_g3_ParamLimits

0x560f,	// (0x0005ae58) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00064d7f) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00064d7f) main_mp2_pane_g

0x561b,	// (0x0005ae64) main_mp2_pane_t1_ParamLimits

0x561b,	// (0x0005ae64) main_mp2_pane_t1

0x5632,	// (0x0005ae7b) main_mp2_pane_t2_ParamLimits

0x5632,	// (0x0005ae7b) main_mp2_pane_t2

0x5646,	// (0x0005ae8f) main_mp2_pane_t3_ParamLimits

0x5646,	// (0x0005ae8f) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00064d86) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00064d86) main_mp2_pane_t

0x09da,	// (0x00056223) pec_content_pane_ParamLimits

0x09da,	// (0x00056223) pec_content_pane

0xc0e1,	// (0x0006192a) scroll_pane_cp015

0x09ec,	// (0x00056235) pec_attribute_pane_ParamLimits

0x09ec,	// (0x00056235) pec_attribute_pane

0x5658,	// (0x0005aea1) pec_content_pane_g1_ParamLimits

0x5658,	// (0x0005aea1) pec_content_pane_g1

0x09fc,	// (0x00056245) pec_content_pane_t1_ParamLimits

0x09fc,	// (0x00056245) pec_content_pane_t1

0x0a0e,	// (0x00056257) pec_content_pane_t2_ParamLimits

0x0a0e,	// (0x00056257) pec_content_pane_t2

0x0001,

0xf544,	// (0x00064d8d) pec_content_pane_t_ParamLimits

0xf544,	// (0x00064d8d) pec_content_pane_t

0x5664,	// (0x0005aead) list_single_graphic_pane_cp01_ParamLimits

0x5664,	// (0x0005aead) list_single_graphic_pane_cp01

0xbba8,	// (0x000613f1) bg_popup_sub_pane_cp04

0x0a20,	// (0x00056269) popup_mup_playback_window_g1

0x0a2c,	// (0x00056275) popup_mup_playback_window_t1

0x0a41,	// (0x0005628a) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00064d92) popup_mup_playback_window_t

0x0a78,	// (0x000562c1) main_image_pane_g1_ParamLimits

0x0a78,	// (0x000562c1) main_image_pane_g1

0x0abb,	// (0x00056304) scroll_pane_cp018_ParamLimits

0x0abb,	// (0x00056304) scroll_pane_cp018

0x0ad3,	// (0x0005631c) scroll_pane_cp016_ParamLimits

0x0ad3,	// (0x0005631c) scroll_pane_cp016

0x5736,	// (0x0005af7f) smil2_image_pane_ParamLimits

0x5736,	// (0x0005af7f) smil2_image_pane

0x576c,	// (0x0005afb5) smil2_root_pane_ParamLimits

0x576c,	// (0x0005afb5) smil2_root_pane

0x57a4,	// (0x0005afed) smil2_text_pane_ParamLimits

0x57a4,	// (0x0005afed) smil2_text_pane

0xb94d,	// (0x00061196) bg_list_pane_cp06

0x0b0f,	// (0x00056358) grid_radio_pane

0xb94d,	// (0x00061196) bg_popup_window_pane_cp06

0x0b19,	// (0x00056362) main_fmradio_pane_t1

0x05d1,	// (0x00055e1a) heading_pane_cp04

0x0b27,	// (0x00056370) main_fmradio_pane_t2

0x1b03,	// (0x0005734c) popup_cale_lunar_info_window_g1

0x0b35,	// (0x0005637e) main_fmradio_pane_t3

0x1b0b,	// (0x00057354) popup_cale_lunar_info_window_g2

0x0b45,	// (0x0005638e) main_fmradio_pane_t4

0x0001,

0x0b53,	// (0x0005639c) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00064e6d) popup_cale_lunar_info_window_g

0xf55e,	// (0x00064da7) main_fmradio_pane_t

0x0b61,	// (0x000563aa) wait_bar_pane_cp03

0x0b69,	// (0x000563b2) cell_fmradio_pane_ParamLimits

0x0b69,	// (0x000563b2) cell_fmradio_pane

0x09cc,	// (0x00056215) cell_fmradio_pane_g1_ParamLimits

0x09cc,	// (0x00056215) cell_fmradio_pane_g1

0xb94d,	// (0x00061196) grid_highlight_pane_cp011

0x0b7e,	// (0x000563c7) poc_content_pane_ParamLimits

0x0b7e,	// (0x000563c7) poc_content_pane

0x0b90,	// (0x000563d9) scroll_pane_cp019

0x5834,	// (0x0005b07d) popup_call_poc_act_window_ParamLimits

0x5834,	// (0x0005b07d) popup_call_poc_act_window

0x5858,	// (0x0005b0a1) popup_call_poc_inact_window_ParamLimits

0x5858,	// (0x0005b0a1) popup_call_poc_inact_window

0xf5fb,	// (0x00064e44) bg_popup_call_poc_act_pane_g

0x1a7b,	// (0x000572c4) bg_popup_call_poc_inact_pane_g1

0x1a83,	// (0x000572cc) bg_popup_call_poc_inact_pane_g2

0x0b98,	// (0x000563e1) popup_call_poc_act_window_g2

0x1a8b,	// (0x000572d4) bg_popup_call_poc_inact_pane_g3

0x1a93,	// (0x000572dc) bg_popup_call_poc_inact_pane_g4

0x1a9b,	// (0x000572e4) bg_popup_call_poc_inact_pane_g5

0x0ba0,	// (0x000563e9) popup_call_poc_act_window_t1_ParamLimits

0x0ba0,	// (0x000563e9) popup_call_poc_act_window_t1

0x0bc8,	// (0x00056411) popup_call_poc_act_window_t2_ParamLimits

0x0bc8,	// (0x00056411) popup_call_poc_act_window_t2

0x0bf0,	// (0x00056439) popup_call_poc_act_window_t3_ParamLimits

0x0bf0,	// (0x00056439) popup_call_poc_act_window_t3

0x0c18,	// (0x00056461) popup_call_poc_act_window_t4_ParamLimits

0x0c18,	// (0x00056461) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00064db2) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00064db2) popup_call_poc_act_window_t

0x1aa3,	// (0x000572ec) bg_popup_call_poc_inact_pane_g6

0x1aab,	// (0x000572f4) bg_popup_call_poc_inact_pane_g7

0x1ab3,	// (0x000572fc) bg_popup_call_poc_inact_pane_g8

0x0c2a,	// (0x00056473) popup_call_poc_inact_window_g2

0x1abb,	// (0x00057304) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00064e31) bg_popup_call_poc_inact_pane_g

0x0c32,	// (0x0005647b) popup_call_poc_inact_window_t1_ParamLimits

0x0c32,	// (0x0005647b) popup_call_poc_inact_window_t1

0x0c47,	// (0x00056490) popup_call_poc_inact_window_t2_ParamLimits

0x0c47,	// (0x00056490) popup_call_poc_inact_window_t2

0x0c5c,	// (0x000564a5) popup_call_poc_inact_window_t3_ParamLimits

0x0c5c,	// (0x000564a5) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00064dbb) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00064dbb) popup_call_poc_inact_window_t

0x1c89,	// (0x000574d2) context_pane_ParamLimits

0x6103,	// (0x0005b94c) signal_pane_ParamLimits

0x081f,	// (0x00056068) main_call2_pane

0x1c77,	// (0x000574c0) popup_phob_thumbnail2_window_ParamLimits

0x1c77,	// (0x000574c0) popup_phob_thumbnail2_window

0xc2bf,	// (0x00061b08) aid_hotspot_pointer_arrow_pane

0xc2c7,	// (0x00061b10) aid_hotspot_pointer_hand_pane

0x5bc3,	// (0x0005b40c) phob_pre_status_pane_g5

0x37fb,	// (0x00059044) cams_zoom_pane_ParamLimits

0x380a,	// (0x00059053) image_vga_pane_ParamLimits

0x3824,	// (0x0005906d) main_camera_pane_g1_ParamLimits

0x3836,	// (0x0005907f) main_camera_pane_g2_ParamLimits

0x3846,	// (0x0005908f) main_camera_pane_g3_ParamLimits

0x385a,	// (0x000590a3) main_camera_pane_g4_ParamLimits

0x386e,	// (0x000590b7) main_camera_pane_g5_ParamLimits

0x3882,	// (0x000590cb) main_camera_pane_g6_ParamLimits

0x3896,	// (0x000590df) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00064aba) main_camera_pane_g_ParamLimits

0x38aa,	// (0x000590f3) main_camera_pane_t1_ParamLimits

0x38c0,	// (0x00059109) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00064acb) main_camera_pane_t_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_preview_window_pane_cp01_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_preview_window_pane_cp01

0x0c71,	// (0x000564ba) popup_phob_thumbnail2_window_g1_ParamLimits

0x0c71,	// (0x000564ba) popup_phob_thumbnail2_window_g1

0xb94d,	// (0x00061196) call2_cli_visual_pane

0x588c,	// (0x0005b0d5) popup_call2_audio_conf_window_ParamLimits

0x588c,	// (0x0005b0d5) popup_call2_audio_conf_window

0x58b4,	// (0x0005b0fd) popup_call2_audio_first_window_ParamLimits

0x58b4,	// (0x0005b0fd) popup_call2_audio_first_window

0x594a,	// (0x0005b193) popup_call2_audio_in_window_ParamLimits

0x594a,	// (0x0005b193) popup_call2_audio_in_window

0x5996,	// (0x0005b1df) popup_call2_audio_out_window_ParamLimits

0x5996,	// (0x0005b1df) popup_call2_audio_out_window

0x5a08,	// (0x0005b251) popup_call2_audio_second_window_ParamLimits

0x5a08,	// (0x0005b251) popup_call2_audio_second_window

0x5a6e,	// (0x0005b2b7) popup_call2_audio_wait_window_ParamLimits

0x5a6e,	// (0x0005b2b7) popup_call2_audio_wait_window

0xb94d,	// (0x00061196) bg_popup_call2_act_pane_cp03

0xbb8a,	// (0x000613d3) list_conf_pane_cp

0x0c7d,	// (0x000564c6) popup_call2_audio_conf_window_t1

0x0c8b,	// (0x000564d4) list_single_graphic_popup_conf2_pane_ParamLimits

0x0c8b,	// (0x000564d4) list_single_graphic_popup_conf2_pane

0x0640,	// (0x00055e89) list_highlight_pane_cp04

0x0c9e,	// (0x000564e7) list_single_graphic_popup_conf2_pane_g1

0x0651,	// (0x00055e9a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00064dc2) list_single_graphic_popup_conf2_pane_g

0x0ca8,	// (0x000564f1) list_single_graphic_popup_conf2_pane_t1

0x0cb6,	// (0x000564ff) bg_popup_call2_act_pane_cp01_ParamLimits

0x0cb6,	// (0x000564ff) bg_popup_call2_act_pane_cp01

0x0d40,	// (0x00056589) call_type_pane_cp05_ParamLimits

0x0d40,	// (0x00056589) call_type_pane_cp05

0x0d94,	// (0x000565dd) popup_call2_audio_second_window_g1_ParamLimits

0x0d94,	// (0x000565dd) popup_call2_audio_second_window_g1

0x0de8,	// (0x00056631) popup_call2_audio_second_window_g2_ParamLimits

0x0de8,	// (0x00056631) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00064dc7) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00064dc7) popup_call2_audio_second_window_g

0x0e4d,	// (0x00056696) popup_call2_audio_second_window_t1_ParamLimits

0x0e4d,	// (0x00056696) popup_call2_audio_second_window_t1

0x0f08,	// (0x00056751) popup_call2_audio_second_window_t2_ParamLimits

0x0f08,	// (0x00056751) popup_call2_audio_second_window_t2

0x0f5b,	// (0x000567a4) popup_call2_audio_second_window_t3_ParamLimits

0x0f5b,	// (0x000567a4) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00064dce) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00064dce) popup_call2_audio_second_window_t

0xb94d,	// (0x00061196) bg_popup_call2_in_pane_cp02

0xb957,	// (0x000611a0) call_type_pane_cp04

0xb95f,	// (0x000611a8) popup_call2_audio_wait_window_g1

0xb967,	// (0x000611b0) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x000649a7) popup_call2_audio_wait_window_g

0xb96f,	// (0x000611b8) popup_call2_audio_wait_window_t3

0x104e,	// (0x00056897) bg_popup_call2_act_pane_ParamLimits

0x104e,	// (0x00056897) bg_popup_call2_act_pane

0x110e,	// (0x00056957) call_type_pane_cp03_ParamLimits

0x110e,	// (0x00056957) call_type_pane_cp03

0x1172,	// (0x000569bb) popup_call2_audio_first_window_g1_ParamLimits

0x1172,	// (0x000569bb) popup_call2_audio_first_window_g1

0x11e2,	// (0x00056a2b) popup_call2_audio_first_window_g2_ParamLimits

0x11e2,	// (0x00056a2b) popup_call2_audio_first_window_g2

0x055a,	// (0x00055da3) popup_call2_audio_first_window_g3_ParamLimits

0x055a,	// (0x00055da3) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00064dd7) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00064dd7) popup_call2_audio_first_window_g

0x12c0,	// (0x00056b09) popup_call2_audio_first_window_t1_ParamLimits

0x12c0,	// (0x00056b09) popup_call2_audio_first_window_t1

0x13c3,	// (0x00056c0c) popup_call2_audio_first_window_t4_ParamLimits

0x13c3,	// (0x00056c0c) popup_call2_audio_first_window_t4

0x14a6,	// (0x00056cef) popup_call2_audio_first_window_t5_ParamLimits

0x14a6,	// (0x00056cef) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00064de2) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00064de2) popup_call2_audio_first_window_t

0xbba0,	// (0x000613e9) bg_popup_call2_act_pane_g1

0x1b15,	// (0x0005735e) popup_cale_lunar_info_window_t1

0x1b23,	// (0x0005736c) popup_cale_lunar_info_window_t2

0x1b31,	// (0x0005737a) popup_cale_lunar_info_window_t3

0xb94d,	// (0x00061196) bg_popup_call2_bubble_pane

0x15a7,	// (0x00056df0) bg_popup_call2_in_pane_cp01_ParamLimits

0x15a7,	// (0x00056df0) bg_popup_call2_in_pane_cp01

0xb629,	// (0x00060e72) call_type_pane_cp02

0x15ef,	// (0x00056e38) popup_call2_audio_out_window_g1_ParamLimits

0x15ef,	// (0x00056e38) popup_call2_audio_out_window_g1

0x161b,	// (0x00056e64) popup_call2_audio_out_window_g2_ParamLimits

0x161b,	// (0x00056e64) popup_call2_audio_out_window_g2

0x1643,	// (0x00056e8c) popup_call2_audio_out_window_g3_ParamLimits

0x1643,	// (0x00056e8c) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00064deb) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00064deb) popup_call2_audio_out_window_g

0x167e,	// (0x00056ec7) popup_call2_audio_out_window_t1_ParamLimits

0x167e,	// (0x00056ec7) popup_call2_audio_out_window_t1

0x16dd,	// (0x00056f26) popup_call2_audio_out_window_t2_ParamLimits

0x16dd,	// (0x00056f26) popup_call2_audio_out_window_t2

0x1731,	// (0x00056f7a) popup_call2_audio_out_window_t3_ParamLimits

0x1731,	// (0x00056f7a) popup_call2_audio_out_window_t3

0x1747,	// (0x00056f90) popup_call2_audio_out_window_t4_ParamLimits

0x1747,	// (0x00056f90) popup_call2_audio_out_window_t4

0x175d,	// (0x00056fa6) popup_call2_audio_out_window_t5_ParamLimits

0x175d,	// (0x00056fa6) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00064df4) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00064df4) popup_call2_audio_out_window_t

0x17c1,	// (0x0005700a) bg_popup_call2_in_pane_ParamLimits

0x17c1,	// (0x0005700a) bg_popup_call2_in_pane

0x181d,	// (0x00057066) popup_call2_audio_in_window_g1_ParamLimits

0x181d,	// (0x00057066) popup_call2_audio_in_window_g1

0x1855,	// (0x0005709e) popup_call2_audio_in_window_g2_ParamLimits

0x1855,	// (0x0005709e) popup_call2_audio_in_window_g2

0x188d,	// (0x000570d6) popup_call2_audio_in_window_g3_ParamLimits

0x188d,	// (0x000570d6) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00064e01) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00064e01) popup_call2_audio_in_window_g

0x18e5,	// (0x0005712e) popup_call2_audio_in_window_t1_ParamLimits

0x18e5,	// (0x0005712e) popup_call2_audio_in_window_t1

0x1965,	// (0x000571ae) popup_call2_audio_in_window_t2_ParamLimits

0x1965,	// (0x000571ae) popup_call2_audio_in_window_t2

0x19e5,	// (0x0005722e) popup_call2_audio_in_window_t3_ParamLimits

0x19e5,	// (0x0005722e) popup_call2_audio_in_window_t3

0x19ff,	// (0x00057248) popup_call2_audio_in_window_t4_ParamLimits

0x19ff,	// (0x00057248) popup_call2_audio_in_window_t4

0x1a11,	// (0x0005725a) popup_call2_audio_in_window_t5_ParamLimits

0x1a11,	// (0x0005725a) popup_call2_audio_in_window_t5

0x1a26,	// (0x0005726f) popup_call2_audio_in_window_t6_ParamLimits

0x1a26,	// (0x0005726f) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00064e0a) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00064e0a) popup_call2_audio_in_window_t

0xbba0,	// (0x000613e9) bg_popup_call2_in_pane_g1

0x1b3f,	// (0x00057388) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00064e72) popup_cale_lunar_info_window_t

0xbba8,	// (0x000613f1) bg_popup_call2_rect_pane_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_call2_rect_pane

0xb94d,	// (0x00061196) call2_cli_visual_graphic_pane

0xb94d,	// (0x00061196) call2_cli_visual_text_pane

0xc301,	// (0x00061b4a) smil_status_volume_pane_g3

0x0002,

0xbd18,	// (0x00061561) call2_cli_visual_graphic_pane_g1

0xbd18,	// (0x00061561) call2_cli_visual_graphic_pane_g2

0xbd18,	// (0x00061561) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00064e17) call2_cli_visual_graphic_pane_g

0x1a3b,	// (0x00057284) bg_popup_call2_rect_pane_g1

0xbdc0,	// (0x00061609) bg_popup_call2_rect_pane_g2

0x1a43,	// (0x0005728c) bg_popup_call2_rect_pane_g3

0x1a4b,	// (0x00057294) bg_popup_call2_rect_pane_g4

0x1a53,	// (0x0005729c) bg_popup_call2_rect_pane_g5

0x1a5b,	// (0x000572a4) bg_popup_call2_rect_pane_g6

0x1a63,	// (0x000572ac) bg_popup_call2_rect_pane_g7

0x1a6b,	// (0x000572b4) bg_popup_call2_rect_pane_g8

0x1a73,	// (0x000572bc) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00064e1e) bg_popup_call2_rect_pane_g

0x1a7b,	// (0x000572c4) bg_popup_call2_bubble_pane_g1

0x1a83,	// (0x000572cc) bg_popup_call2_bubble_pane_g2

0x1a8b,	// (0x000572d4) bg_popup_call2_bubble_pane_g3

0x1a93,	// (0x000572dc) bg_popup_call2_bubble_pane_g4

0x1a9b,	// (0x000572e4) bg_popup_call2_bubble_pane_g5

0x1aa3,	// (0x000572ec) bg_popup_call2_bubble_pane_g6

0x1aab,	// (0x000572f4) bg_popup_call2_bubble_pane_g7

0x1ab3,	// (0x000572fc) bg_popup_call2_bubble_pane_g8

0x1abb,	// (0x00057304) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00064e31) bg_popup_call2_bubble_pane_g

0x3404,	// (0x00058c4d) aid_cale_week_size_cell_pane

0x38da,	// (0x00059123) aid_cams_cif_uncrop_pane_ParamLimits

0x38da,	// (0x00059123) aid_cams_cif_uncrop_pane

0x3a93,	// (0x000592dc) aid_cams_size_cell_ParamLimits

0x3a93,	// (0x000592dc) aid_cams_size_cell

0x3aa7,	// (0x000592f0) grid_cams_pane_ParamLimits

0x3ac1,	// (0x0005930a) linegrid_cams_pane_ParamLimits

0x3ca2,	// (0x000594eb) call_video_pane_t1

0x3cb4,	// (0x000594fd) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00064b1e) call_video_pane_t

0x4076,	// (0x000598bf) aid_cale_month_size_cell_pane_ParamLimits

0x4076,	// (0x000598bf) aid_cale_month_size_cell_pane

0xf672,	// (0x00064ebb) smil_status_volume_pane_g

0xc30e,	// (0x00061b57) volume_smil_pane_ParamLimits

0xb4e3,	// (0x00060d2c) aid_popup2_width_pane

0x335e,	// (0x00058ba7) cell_qdial_pane_g4_ParamLimits

0x335e,	// (0x00058ba7) cell_qdial_pane_g4

0x4d01,	// (0x0005a54a) aid_blid_cardinal_pane_ParamLimits

0x4d11,	// (0x0005a55a) aid_blid_destination_pane_ParamLimits

0x4d11,	// (0x0005a55a) aid_blid_destination_pane

0xbba8,	// (0x000613f1) bg_popup_call_poc_act_pane_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_call_poc_act_pane

0xbba8,	// (0x000613f1) bg_popup_call_poc_inact_pane_ParamLimits

0xbba8,	// (0x000613f1) bg_popup_call_poc_inact_pane

0x1ac3,	// (0x0005730c) bg_popup_call_poc_act_pane_g1

0x1acb,	// (0x00057314) bg_popup_call_poc_act_pane_g2

0x1ad3,	// (0x0005731c) bg_popup_call_poc_act_pane_g3

0x1a93,	// (0x000572dc) bg_popup_call_poc_act_pane_g4

0x1a9b,	// (0x000572e4) bg_popup_call_poc_act_pane_g5

0x1adb,	// (0x00057324) bg_popup_call_poc_act_pane_g6

0x1aab,	// (0x000572f4) bg_popup_call_poc_act_pane_g7

0x1ae3,	// (0x0005732c) bg_popup_call_poc_act_pane_g8

0xb94d,	// (0x00061196) main_usb_pane

0x1c4e,	// (0x00057497) popup_cale_lunar_info_window

0x3ef6,	// (0x0005973f) im_reading_pane_t1_ParamLimits

0xc039,	// (0x00061882) list_im_pane_ParamLimits

0xc04a,	// (0x00061893) scroll_pane_cp07_ParamLimits

0xb94d,	// (0x00061196) grid_highlight_pane_cp012

0xbba8,	// (0x000613f1) mup_scale_pane_ParamLimits

0x09cc,	// (0x00056215) main_usb_pane_g1_ParamLimits

0x09cc,	// (0x00056215) main_usb_pane_g1

0x5acf,	// (0x0005b318) main_usb_pane_g2_ParamLimits

0x5acf,	// (0x0005b318) main_usb_pane_g2

0x0001,

0xf612,	// (0x00064e5b) main_usb_pane_g_ParamLimits

0xf612,	// (0x00064e5b) main_usb_pane_g

0x5ae5,	// (0x0005b32e) main_usb_pane_t1_ParamLimits

0x5ae5,	// (0x0005b32e) main_usb_pane_t1

0x5af7,	// (0x0005b340) main_usb_pane_t2_ParamLimits

0x5af7,	// (0x0005b340) main_usb_pane_t2

0x5b09,	// (0x0005b352) main_usb_pane_t3_ParamLimits

0x5b09,	// (0x0005b352) main_usb_pane_t3

0x5b1b,	// (0x0005b364) main_usb_pane_t4_ParamLimits

0x5b1b,	// (0x0005b364) main_usb_pane_t4

0x5b30,	// (0x0005b379) main_usb_pane_t5_ParamLimits

0x5b30,	// (0x0005b379) main_usb_pane_t5

0x5b45,	// (0x0005b38e) main_usb_pane_t6_ParamLimits

0x5b45,	// (0x0005b38e) main_usb_pane_t6

0x0005,

0xf617,	// (0x00064e60) main_usb_pane_t_ParamLimits

0x4ca0,	// (0x0005a4e9) aid_text_placing

0x4cab,	// (0x0005a4f4) main_location2_pane_t1_ParamLimits

0x4cc1,	// (0x0005a50a) main_location2_pane_t2_ParamLimits

0x4cd7,	// (0x0005a520) main_location2_pane_t3_ParamLimits

0x4ced,	// (0x0005a536) main_location2_pane_t4_ParamLimits

0x4ced,	// (0x0005a536) main_location2_pane_t4

0xf436,	// (0x00064c7f) main_location2_pane_t_ParamLimits

0xbbe4,	// (0x0006142d) find_pinb_pane_g2_ParamLimits

0xbbe4,	// (0x0006142d) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000649cd) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000649cd) find_pinb_pane_g

0xbbf0,	// (0x00061439) find_pinb_pane_t1_ParamLimits

0xbc02,	// (0x0006144b) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000649d2) find_pinb_pane_t_ParamLimits

0xb94d,	// (0x00061196) main_call3_pane

0x43ea,	// (0x00059c33) cale_month_day_heading_pane_t1_ParamLimits

0x4448,	// (0x00059c91) cale_month_day_heading_pane_t2_ParamLimits

0x44ad,	// (0x00059cf6) cale_month_day_heading_pane_t3_ParamLimits

0x4512,	// (0x00059d5b) cale_month_day_heading_pane_t4_ParamLimits

0x4577,	// (0x00059dc0) cale_month_day_heading_pane_t5_ParamLimits

0x45dc,	// (0x00059e25) cale_month_day_heading_pane_t6_ParamLimits

0x4641,	// (0x00059e8a) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00064b56) cale_month_day_heading_pane_t_ParamLimits

0x02ce,	// (0x00055b17) smil_status_volume_pane

0x5587,	// (0x0005add0) postcard_address_pane_ParamLimits

0x5587,	// (0x0005add0) postcard_address_pane

0x559d,	// (0x0005ade6) postcard_message_pane_ParamLimits

0x559d,	// (0x0005ade6) postcard_message_pane

0x5aa8,	// (0x0005b2f1) call2_cli_visual_pane_t1_ParamLimits

0x5aa8,	// (0x0005b2f1) call2_cli_visual_pane_t1

0x6314,	// (0x0005bb5d) postcard_message_pane_t1_ParamLimits

0x6314,	// (0x0005bb5d) postcard_message_pane_t1

0x1d3c,	// (0x00057585) postcard_address_pane_t1_ParamLimits

0x1d3c,	// (0x00057585) postcard_address_pane_t1

0x6300,	// (0x0005bb49) popup_call3_audio_in_window_ParamLimits

0x6300,	// (0x0005bb49) popup_call3_audio_in_window

0x6185,	// (0x0005b9ce) bg_popup_call3_in_pane_ParamLimits

0x6185,	// (0x0005b9ce) bg_popup_call3_in_pane

0x6201,	// (0x0005ba4a) popup_call3_audio_in_window_g1_ParamLimits

0x6201,	// (0x0005ba4a) popup_call3_audio_in_window_g1

0x6221,	// (0x0005ba6a) popup_call3_audio_in_window_g2_ParamLimits

0x6221,	// (0x0005ba6a) popup_call3_audio_in_window_g2

0x6241,	// (0x0005ba8a) popup_call3_audio_in_window_g3_ParamLimits

0x6241,	// (0x0005ba8a) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00064ec2) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00064ec2) popup_call3_audio_in_window_g

0x6272,	// (0x0005babb) popup_call3_audio_in_window_t1_ParamLimits

0x6272,	// (0x0005babb) popup_call3_audio_in_window_t1

0x62b0,	// (0x0005baf9) popup_call3_audio_in_window_t2_ParamLimits

0x62b0,	// (0x0005baf9) popup_call3_audio_in_window_t2

0x62ee,	// (0x0005bb37) popup_call3_audio_in_window_t3_ParamLimits

0x62ee,	// (0x0005bb37) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00064ecb) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00064ecb) popup_call3_audio_in_window_t

0x081f,	// (0x00056068) bg_popup_call3_rect_pane

0x1a3b,	// (0x00057284) bg_popup_call3_rect_pane_g1

0xbdc0,	// (0x00061609) bg_popup_call3_rect_pane_g2

0x1a43,	// (0x0005728c) bg_popup_call3_rect_pane_g3

0x1a4b,	// (0x00057294) bg_popup_call3_rect_pane_g4

0x1a53,	// (0x0005729c) bg_popup_call3_rect_pane_g5

0x1a5b,	// (0x000572a4) bg_popup_call3_rect_pane_g6

0x1a63,	// (0x000572ac) bg_popup_call3_rect_pane_g7

0x50e9,	// (0x0005a932) mup_visualizer_osc_pane

0x08de,	// (0x00056127) mup_visualizer_spec_pane

0x61b5,	// (0x0005b9fe) call3_video_qcif_pane_ParamLimits

0x61b5,	// (0x0005b9fe) call3_video_qcif_pane

0x61c8,	// (0x0005ba11) call3_video_qcif_uncrop_pane_ParamLimits

0x61c8,	// (0x0005ba11) call3_video_qcif_uncrop_pane

0x61d8,	// (0x0005ba21) call3_video_subqcif_pane_ParamLimits

0x61d8,	// (0x0005ba21) call3_video_subqcif_pane

0x61ee,	// (0x0005ba37) call3_video_subqcif_uncrop_pane_ParamLimits

0x61ee,	// (0x0005ba37) call3_video_subqcif_uncrop_pane

0x6261,	// (0x0005baaa) popup_call3_audio_in_window_g4_ParamLimits

0x6261,	// (0x0005baaa) popup_call3_audio_in_window_g4

0x6174,	// (0x0005b9bd) mup_spec_half_pane

0x617d,	// (0x0005b9c6) mup_spec_half_pane_cp

0x1cfc,	// (0x00057545) mup_osc_middle_pane

0x1d05,	// (0x0005754e) mup_visualizer_osc_pane_g1

0x6154,	// (0x0005b99d) mup_spec_bar_pane_ParamLimits

0x6154,	// (0x0005b99d) mup_spec_bar_pane

0x1ce9,	// (0x00057532) mup_spec_bar_pane_g1

0x1cf3,	// (0x0005753c) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00064eb6) mup_spec_bar_pane_g

0x3404,	// (0x00058c4d) aid_cale_week_size_cell_pane_ParamLimits

0x3417,	// (0x00058c60) bg_cale_heading_pane_ParamLimits

0xbe3c,	// (0x00061685) bg_cale_pane_cp01_ParamLimits

0x3433,	// (0x00058c7c) cale_week_corner_pane_ParamLimits

0x3449,	// (0x00058c92) cale_week_day_heading_pane_ParamLimits

0x3465,	// (0x00058cae) cale_week_scroll_pane_g1_ParamLimits

0x347e,	// (0x00058cc7) cale_week_scroll_pane_g2_ParamLimits

0x348f,	// (0x00058cd8) cale_week_scroll_pane_g3_ParamLimits

0x34a0,	// (0x00058ce9) cale_week_scroll_pane_g4_ParamLimits

0x34b1,	// (0x00058cfa) cale_week_scroll_pane_g5_ParamLimits

0x34c2,	// (0x00058d0b) cale_week_scroll_pane_g6_ParamLimits

0x34d3,	// (0x00058d1c) cale_week_scroll_pane_g7_ParamLimits

0x34e4,	// (0x00058d2d) cale_week_scroll_pane_g8_ParamLimits

0x34f5,	// (0x00058d3e) cale_week_scroll_pane_g9_ParamLimits

0x3506,	// (0x00058d4f) cale_week_scroll_pane_g10_ParamLimits

0x3517,	// (0x00058d60) cale_week_scroll_pane_g11_ParamLimits

0x3528,	// (0x00058d71) cale_week_scroll_pane_g12_ParamLimits

0x3539,	// (0x00058d82) cale_week_scroll_pane_g13_ParamLimits

0x3552,	// (0x00058d9b) cale_week_scroll_pane_g14_ParamLimits

0x356b,	// (0x00058db4) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00064a5e) cale_week_scroll_pane_g_ParamLimits

0x3584,	// (0x00058dcd) cale_week_time_pane_ParamLimits

0x3595,	// (0x00058dde) grid_cale_week_pane_ParamLimits

0xbe55,	// (0x0006169e) listscroll_cale_week_pane_t1

0x35b0,	// (0x00058df9) scroll_pane_cp08_ParamLimits

0x40c7,	// (0x00059910) cale_month_corner_pane_ParamLimits

0x02a4,	// (0x00055aed) cale_month_pane_t1

0x43ab,	// (0x00059bf4) cale_month_week_pane_ParamLimits

0x4ac4,	// (0x0005a30d) popup_call_status_window_g1_ParamLimits

0x4ad8,	// (0x0005a321) popup_call_status_window_g2_ParamLimits

0x4aec,	// (0x0005a335) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00064c06) popup_call_status_window_g_ParamLimits

0x05c1,	// (0x00055e0a) aid_call2_pane

0x53b1,	// (0x0005abfa) msg_header_pane_g1

0x5587,	// (0x0005add0) postcard_address2_pane_ParamLimits

0x5587,	// (0x0005add0) postcard_address2_pane

0x559d,	// (0x0005ade6) postcard_message2_pane_ParamLimits

0x559d,	// (0x0005ade6) postcard_message2_pane

0x6111,	// (0x0005b95a) message2_row_pane_ParamLimits

0x6111,	// (0x0005b95a) message2_row_pane

0x1ca4,	// (0x000574ed) address2_row_pane_ParamLimits

0x1ca4,	// (0x000574ed) address2_row_pane

0x1cb7,	// (0x00057500) postcard_message2_row_pane_g1

0x1cbf,	// (0x00057508) postcard_message2_row_pane_t1

0x1cb7,	// (0x00057500) address2_row_pane_g1

0x1cbf,	// (0x00057508) address2_row_pane_t1

0x37be,	// (0x00059007) aid_size_cell_vorec

0xb94d,	// (0x00061196) main_rss_pane

0x6134,	// (0x0005b97d) rss_list_single_pane_ParamLimits

0x6134,	// (0x0005b97d) rss_list_single_pane

0x1ccd,	// (0x00057516) rss_list_single_pane_t1

0x1cdb,	// (0x00057524) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00064eb1) rss_list_single_pane_t

0xb94d,	// (0x00061196) main_camera2_pane

0xb94d,	// (0x00061196) main_video2_pane

0x6383,	// (0x0005bbcc) cams_zoom_pane_cp2_ParamLimits

0x6383,	// (0x0005bbcc) cams_zoom_pane_cp2

0x639a,	// (0x0005bbe3) image2_vga_pane_ParamLimits

0x639a,	// (0x0005bbe3) image2_vga_pane

0x63e2,	// (0x0005bc2b) main_camera2_pane_g1_ParamLimits

0x63e2,	// (0x0005bc2b) main_camera2_pane_g1

0x6402,	// (0x0005bc4b) main_camera2_pane_g2_ParamLimits

0x6402,	// (0x0005bc4b) main_camera2_pane_g2

0x6419,	// (0x0005bc62) main_camera2_pane_g3_ParamLimits

0x6419,	// (0x0005bc62) main_camera2_pane_g3

0x6430,	// (0x0005bc79) main_camera2_pane_g4_ParamLimits

0x6430,	// (0x0005bc79) main_camera2_pane_g4

0x6447,	// (0x0005bc90) main_camera2_pane_g5_ParamLimits

0x6447,	// (0x0005bc90) main_camera2_pane_g5

0x645e,	// (0x0005bca7) main_camera2_pane_g6_ParamLimits

0x645e,	// (0x0005bca7) main_camera2_pane_g6

0x6475,	// (0x0005bcbe) main_camera2_pane_g7_ParamLimits

0x6475,	// (0x0005bcbe) main_camera2_pane_g7

0x648c,	// (0x0005bcd5) main_camera2_pane_g8_ParamLimits

0x648c,	// (0x0005bcd5) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00064ed2) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00064ed2) main_camera2_pane_g

0x64ba,	// (0x0005bd03) main_camera2_pane_t1_ParamLimits

0x64ba,	// (0x0005bd03) main_camera2_pane_t1

0x64ef,	// (0x0005bd38) main_camera2_pane_t2_ParamLimits

0x64ef,	// (0x0005bd38) main_camera2_pane_t2

0x650c,	// (0x0005bd55) main_camera2_pane_t3_ParamLimits

0x650c,	// (0x0005bd55) main_camera2_pane_t3

0x656a,	// (0x0005bdb3) main_camera2_pane_t4_ParamLimits

0x656a,	// (0x0005bdb3) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00064ee5) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00064ee5) main_camera2_pane_t

0x65f3,	// (0x0005be3c) cams_zoom_pane_cp4_ParamLimits

0x65f3,	// (0x0005be3c) cams_zoom_pane_cp4

0x6609,	// (0x0005be52) image2_cif_pane_ParamLimits

0x6609,	// (0x0005be52) image2_cif_pane

0x6634,	// (0x0005be7d) image2_subqcif_pane_ParamLimits

0x6634,	// (0x0005be7d) image2_subqcif_pane

0x664f,	// (0x0005be98) main_video2_pane_g1_ParamLimits

0x664f,	// (0x0005be98) main_video2_pane_g1

0x6669,	// (0x0005beb2) main_video2_pane_g2_ParamLimits

0x6669,	// (0x0005beb2) main_video2_pane_g2

0x667f,	// (0x0005bec8) main_video2_pane_g3_ParamLimits

0x667f,	// (0x0005bec8) main_video2_pane_g3

0x6695,	// (0x0005bede) main_video2_pane_g4_ParamLimits

0x6695,	// (0x0005bede) main_video2_pane_g4

0x66ab,	// (0x0005bef4) main_video2_pane_g5_ParamLimits

0x66ab,	// (0x0005bef4) main_video2_pane_g5

0x66c1,	// (0x0005bf0a) main_video2_pane_g6_ParamLimits

0x66c1,	// (0x0005bf0a) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00064ef4) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00064ef4) main_video2_pane_g

0x66db,	// (0x0005bf24) main_video2_pane_t1_ParamLimits

0x66db,	// (0x0005bf24) main_video2_pane_t1

0x66ff,	// (0x0005bf48) main_video2_pane_t2_ParamLimits

0x66ff,	// (0x0005bf48) main_video2_pane_t2

0x674f,	// (0x0005bf98) main_video2_pane_t3_ParamLimits

0x674f,	// (0x0005bf98) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00064f01) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00064f01) main_video2_pane_t

0x5c03,	// (0x0005b44c) call_muted_g2

0x0001,

0xf65a,	// (0x00064ea3) call_muted_g

0xb94d,	// (0x00061196) main_mup2_pane

0x6797,	// (0x0005bfe0) main_mup2_pane_g1_ParamLimits

0x6797,	// (0x0005bfe0) main_mup2_pane_g1

0x67a3,	// (0x0005bfec) main_mup2_pane_g2_ParamLimits

0x67a3,	// (0x0005bfec) main_mup2_pane_g2

0xc377,	// (0x00061bc0) main_mup_pane_g13_cp1

0xc37f,	// (0x00061bc8) mup_volume_pane_cp1

0x67c1,	// (0x0005c00a) main_mup2_pane_g4_ParamLimits

0x67c1,	// (0x0005c00a) main_mup2_pane_g4

0x67d3,	// (0x0005c01c) main_mup2_pane_g5_ParamLimits

0x67d3,	// (0x0005c01c) main_mup2_pane_g5

0x67e5,	// (0x0005c02e) main_mup2_pane_g6_ParamLimits

0x67e5,	// (0x0005c02e) main_mup2_pane_g6

0x67f7,	// (0x0005c040) main_mup2_pane_g7_ParamLimits

0x67f7,	// (0x0005c040) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00064f08) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00064f08) main_mup2_pane_g

0x680f,	// (0x0005c058) main_mup2_pane_t1_ParamLimits

0x680f,	// (0x0005c058) main_mup2_pane_t1

0x6825,	// (0x0005c06e) main_mup2_pane_t2_ParamLimits

0x6825,	// (0x0005c06e) main_mup2_pane_t2

0x683b,	// (0x0005c084) main_mup2_pane_t3_ParamLimits

0x683b,	// (0x0005c084) main_mup2_pane_t3

0x6851,	// (0x0005c09a) main_mup2_pane_t4_ParamLimits

0x6851,	// (0x0005c09a) main_mup2_pane_t4

0x6869,	// (0x0005c0b2) main_mup2_pane_t5_ParamLimits

0x6869,	// (0x0005c0b2) main_mup2_pane_t5

0x6881,	// (0x0005c0ca) main_mup2_pane_t6_ParamLimits

0x6881,	// (0x0005c0ca) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00064f17) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00064f17) main_mup2_pane_t

0x68b1,	// (0x0005c0fa) mup2_visualizer_pane_ParamLimits

0x68b1,	// (0x0005c0fa) mup2_visualizer_pane

0x68df,	// (0x0005c128) mup_progress_pane_cp_ParamLimits

0x68df,	// (0x0005c128) mup_progress_pane_cp

0xc362,	// (0x00061bab) mup_volume_pane_cp_ParamLimits

0xc362,	// (0x00061bab) mup_volume_pane_cp

0x68f5,	// (0x0005c13e) mup2_visualizer_pane_g1_ParamLimits

0x68f5,	// (0x0005c13e) mup2_visualizer_pane_g1

0x1d53,	// (0x0005759c) mup2_visualizer_pane_g2_ParamLimits

0x1d53,	// (0x0005759c) mup2_visualizer_pane_g2

0x690a,	// (0x0005c153) mup2_visualizer_pane_g3_ParamLimits

0x690a,	// (0x0005c153) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00064f24) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00064f24) mup2_visualizer_pane_g

0x0b07,	// (0x00056350) aid_size_cell_fmradio

0x5db3,	// (0x0005b5fc) aid_height_parent_landcape

0xc0c8,	// (0x00061911) wml_content_pane_cp

0xc0d0,	// (0x00061919) wml_tabs_pane

0xc0d9,	// (0x00061922) popup_wml_miniature_window

0xc0e1,	// (0x0006192a) scroll_pane_cp021

0xc0f5,	// (0x0006193e) wml_content_pane_comp8

0xb94d,	// (0x00061196) bg_popup_sub_pane_cp05

0x1d71,	// (0x000575ba) popup_wml_miniature_window_g1

0x1d79,	// (0x000575c2) wml_miniature_view_pane

0x6916,	// (0x0005c15f) aid_size_wml_view

0x691e,	// (0x0005c167) wml_miniature_view_pane_g1

0x6927,	// (0x0005c170) wml_miniature_view_pane_g2

0x6930,	// (0x0005c179) wml_miniature_view_pane_g3

0x6938,	// (0x0005c181) wml_miniature_view_pane_g4

0x6940,	// (0x0005c189) wml_miniature_view_pane_g5

0x6948,	// (0x0005c191) wml_miniature_view_pane_g6

0x6950,	// (0x0005c199) wml_miniature_view_pane_g7

0x6958,	// (0x0005c1a1) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00064f2b) wml_miniature_view_pane_g

0x6960,	// (0x0005c1a9) background_graphic_ParamLimits

0x6960,	// (0x0005c1a9) background_graphic

0x696c,	// (0x0005c1b5) wml_tabs_2_pane

0x6975,	// (0x0005c1be) wml_tabs_3_pane_ParamLimits

0x6975,	// (0x0005c1be) wml_tabs_3_pane

0x6987,	// (0x0005c1d0) wml_tabs_4_pane_ParamLimits

0x6987,	// (0x0005c1d0) wml_tabs_4_pane

0x699d,	// (0x0005c1e6) wml_tabs_5_pane_ParamLimits

0x699d,	// (0x0005c1e6) wml_tabs_5_pane

0x69b7,	// (0x0005c200) wml_tabs_pane_g2_ParamLimits

0x69b7,	// (0x0005c200) wml_tabs_pane_g2

0x69cb,	// (0x0005c214) wml_tabs_pane_g3_ParamLimits

0x69cb,	// (0x0005c214) wml_tabs_pane_g3

0x69df,	// (0x0005c228) wml_tabs_2_active_pane_ParamLimits

0x69df,	// (0x0005c228) wml_tabs_2_active_pane

0x69f3,	// (0x0005c23c) wml_tabs_2_passive_pane_ParamLimits

0x69f3,	// (0x0005c23c) wml_tabs_2_passive_pane

0x6a07,	// (0x0005c250) wml_tabs_3_active_pane_cp_ParamLimits

0x6a07,	// (0x0005c250) wml_tabs_3_active_pane_cp

0x6a1c,	// (0x0005c265) wml_tabs_3_passive_pane_ParamLimits

0x6a1c,	// (0x0005c265) wml_tabs_3_passive_pane

0x6a2f,	// (0x0005c278) wml_tabs_3_passive_pane_cp_ParamLimits

0x6a2f,	// (0x0005c278) wml_tabs_3_passive_pane_cp

0x6a46,	// (0x0005c28f) tabs_4_active_pane

0x6a4e,	// (0x0005c297) tabs_4_passive_pane

0x6a58,	// (0x0005c2a1) tabs_4_passive_pane_cp

0x6a60,	// (0x0005c2a9) tabs_4_passive_pane_cp2

0x5ac7,	// (0x0005b310) aid_height_text

0x50bb,	// (0x0005a904) mup_volume_cont_pane_ParamLimits

0x50bb,	// (0x0005a904) mup_volume_cont_pane

0x2ffa,	// (0x00058843) aid_size_cell_pinb

0x3004,	// (0x0005884d) aid_size_list_pinb

0x68cb,	// (0x0005c114) mup2_volume_cont_pane_ParamLimits

0x68cb,	// (0x0005c114) mup2_volume_cont_pane

0xc34e,	// (0x00061b97) mup2_volume_cont_pane_g1_ParamLimits

0xc34e,	// (0x00061b97) mup2_volume_cont_pane_g1

0x2cca,	// (0x00058513) aid_size_cell_touch_ParamLimits

0x2cca,	// (0x00058513) aid_size_cell_touch

0x2ee9,	// (0x00058732) touch_pane_ParamLimits

0x2ee9,	// (0x00058732) touch_pane

0xb4d1,	// (0x00060d1a) main_rss2_pane

0x6a73,	// (0x0005c2bc) listscroll_rss2_pane

0x6a7c,	// (0x0005c2c5) rss2_navigation_pane

0x6a84,	// (0x0005c2cd) list_rss2_pane

0x06e5,	// (0x00055f2e) scroll_pane_cp22

0x6a8c,	// (0x0005c2d5) rss2_navigation_pane_g1

0x6a95,	// (0x0005c2de) rss2_navigation_pane_g2

0x6a9d,	// (0x0005c2e6) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00064f3c) rss2_navigation_pane_g

0x6aa5,	// (0x0005c2ee) rss2_navigation_pane_t1

0x6ab3,	// (0x0005c2fc) rss2_list_single_pane_ParamLimits

0x6ab3,	// (0x0005c2fc) rss2_list_single_pane

0x6acd,	// (0x0005c316) rss2_list_single_pane_t2

0x6adb,	// (0x0005c324) rss2_list_single_pane_t3_ParamLimits

0x6adb,	// (0x0005c324) rss2_list_single_pane_t3

0x6af8,	// (0x0005c341) rss2_list_single_pane_t4

0x4837,	// (0x0005a080) smil_status_pane_g1

0x1c38,	// (0x00057481) main_image2_pane_ParamLimits

0x1c38,	// (0x00057481) main_image2_pane

0x64a3,	// (0x0005bcec) main_camera2_pane_g9_ParamLimits

0x64a3,	// (0x0005bcec) main_camera2_pane_g9

0x65bf,	// (0x0005be08) main_camera2_pane_t5_ParamLimits

0x65bf,	// (0x0005be08) main_camera2_pane_t5

0xc323,	// (0x00061b6c) main_camera2_pane_t6_ParamLimits

0xc323,	// (0x00061b6c) main_camera2_pane_t6

0x6b06,	// (0x0005c34f) main_image2_pane_g1_ParamLimits

0x6b06,	// (0x0005c34f) main_image2_pane_g1

0x57de,	// (0x0005b027) smil2_video_pane_ParamLimits

0x57de,	// (0x0005b027) smil2_video_pane

0x2d02,	// (0x0005854b) aid_zoom_text_primary_cp

0xb530,	// (0x00060d79) popup_preview_fixed_window

0xc031,	// (0x0006187a) im_reading_pane_g1

0x6375,	// (0x0005bbbe) cams2_bc_adjust_pane_cp_ParamLimits

0x6375,	// (0x0005bbbe) cams2_bc_adjust_pane_cp

0x65e5,	// (0x0005be2e) cams2_bc_adjust_pane_ParamLimits

0x65e5,	// (0x0005be2e) cams2_bc_adjust_pane

0xc387,	// (0x00061bd0) cams2_bc_adjust_pane_g1

0xc38f,	// (0x00061bd8) cams2_slider_pane

0xc398,	// (0x00061be1) cams2_slider_pane_g1

0xc3a1,	// (0x00061bea) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00064f43) cams2_slider_pane_g

0x30f4,	// (0x0005893d) calc_display_pane_ParamLimits

0x311a,	// (0x00058963) calc_paper_pane_ParamLimits

0x313d,	// (0x00058986) grid_calc_pane_ParamLimits

0xc290,	// (0x00061ad9) popup_clock_digital_window_t1_ParamLimits

0x0aa4,	// (0x000562ed) main_image_pane_t1

0x30d6,	// (0x0005891f) aid_size_cell_calc_ParamLimits

0x30d6,	// (0x0005891f) aid_size_cell_calc

0x5df9,	// (0x0005b642) popup_blid_sat_info2_window_ParamLimits

0x5df9,	// (0x0005b642) popup_blid_sat_info2_window

0x6b24,	// (0x0005c36d) aid_size_cell_blid

0x6b2c,	// (0x0005c375) bg_popup_window_pane_cp07

0x6b4f,	// (0x0005c398) grid_popup_blid_pane

0x6b59,	// (0x0005c3a2) heading_pane_cp05_ParamLimits

0x6b59,	// (0x0005c3a2) heading_pane_cp05

0x6c23,	// (0x0005c46c) cell_popup_blid_pane_ParamLimits

0x6c23,	// (0x0005c46c) cell_popup_blid_pane

0x6c4d,	// (0x0005c496) cell_popup_blid_pane_g1

0x6c55,	// (0x0005c49e) cell_popup_blid_pane_t1

0x689b,	// (0x0005c0e4) mup2_indicator_pane_ParamLimits

0x689b,	// (0x0005c0e4) mup2_indicator_pane

0x081f,	// (0x00056068) mup2_visualizer_osc_pane

0x1d5f,	// (0x000575a8) mup2_visualizer_spec_pane_ParamLimits

0x1d5f,	// (0x000575a8) mup2_visualizer_spec_pane

0x6c63,	// (0x0005c4ac) mup2_spec_half_pane

0x6c6c,	// (0x0005c4b5) mup2_spec_half_pane_cp

0x6c74,	// (0x0005c4bd) mup2_spec_bar_pane_ParamLimits

0x6c74,	// (0x0005c4bd) mup2_spec_bar_pane

0x1ce9,	// (0x00057532) mup2_spec_bar_pane_g1

0x1cf3,	// (0x0005753c) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00064eb6) mup2_spec_bar_pane_g

0x6c94,	// (0x0005c4dd) mup2_osc_middle_pane

0x1d05,	// (0x0005754e) mup2_visualizer_osc_pane_g1

0xb55a,	// (0x00060da3) popup_number_entry_window_t1_ParamLimits

0xb56d,	// (0x00060db6) popup_number_entry_window_t2_ParamLimits

0xb57f,	// (0x00060dc8) popup_number_entry_window_t3_ParamLimits

0x2f3b,	// (0x00058784) popup_number_entry_window_t5_ParamLimits

0x2f3b,	// (0x00058784) popup_number_entry_window_t5

0xf12f,	// (0x00064978) popup_number_entry_window_t_ParamLimits

0xb591,	// (0x00060dda) text_title_cp2_ParamLimits

0xc2cf,	// (0x00061b18) aid_hotspot_pointer_text2_pane

0xc2f5,	// (0x00061b3e) main_viewer_pane_g9_ParamLimits

0xc2f5,	// (0x00061b3e) main_viewer_pane_g9

0x02a4,	// (0x00055aed) cale_month_pane_t1_ParamLimits

0x02e1,	// (0x00055b2a) bg_cale_pane_ParamLimits

0x02f9,	// (0x00055b42) list_cale_pane_ParamLimits

0xbe55,	// (0x0006169e) listscroll_cale_day_pane_t1

0x030a,	// (0x00055b53) scroll_pane_cp09_ParamLimits

0x50f1,	// (0x0005a93a) main_mup_eq_pane_t1_ParamLimits

0x50f1,	// (0x0005a93a) main_mup_eq_pane_t1

0x510d,	// (0x0005a956) main_mup_eq_pane_t2_ParamLimits

0x510d,	// (0x0005a956) main_mup_eq_pane_t2

0x5129,	// (0x0005a972) main_mup_eq_pane_t3_ParamLimits

0x5129,	// (0x0005a972) main_mup_eq_pane_t3

0x5147,	// (0x0005a990) main_mup_eq_pane_t4_ParamLimits

0x5147,	// (0x0005a990) main_mup_eq_pane_t4

0x5165,	// (0x0005a9ae) main_mup_eq_pane_t5_ParamLimits

0x5165,	// (0x0005a9ae) main_mup_eq_pane_t5

0x5183,	// (0x0005a9cc) main_mup_eq_pane_t6_ParamLimits

0x5183,	// (0x0005a9cc) main_mup_eq_pane_t6

0x5199,	// (0x0005a9e2) main_mup_eq_pane_t7_ParamLimits

0x5199,	// (0x0005a9e2) main_mup_eq_pane_t7

0x51af,	// (0x0005a9f8) main_mup_eq_pane_t8_ParamLimits

0x51af,	// (0x0005a9f8) main_mup_eq_pane_t8

0x51c5,	// (0x0005aa0e) main_mup_eq_pane_t9_ParamLimits

0x51c5,	// (0x0005aa0e) main_mup_eq_pane_t9

0x51e1,	// (0x0005aa2a) main_mup_eq_pane_t10_ParamLimits

0x51e1,	// (0x0005aa2a) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00064d05) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00064d05) main_mup_eq_pane_t

0x52b6,	// (0x0005aaff) mup_equalizer_pane_cp5_ParamLimits

0x52ce,	// (0x0005ab17) mup_equalizer_pane_cp6_ParamLimits

0x52e6,	// (0x0005ab2f) mup_equalizer_pane_cp7_ParamLimits

0xb4d1,	// (0x00060d1a) main_gallery_pane

0x1d0e,	// (0x00057557) smil2_volume_pane

0x1d16,	// (0x0005755f) smil_status_volume_pane_g1_ParamLimits

0x1d29,	// (0x00057572) smil_status_volume_pane_g2_ParamLimits

0xc301,	// (0x00061b4a) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00064ebb) smil_status_volume_pane_g_ParamLimits

0x6b2c,	// (0x0005c375) bg_popup_window_pane_cp07_ParamLimits

0x6b3a,	// (0x0005c383) blid_firmament_pane

0x6c9d,	// (0x0005c4e6) aid_size_cell_gallery_ParamLimits

0x6c9d,	// (0x0005c4e6) aid_size_cell_gallery

0x6cb3,	// (0x0005c4fc) grid_gallery_pane_ParamLimits

0x6cb3,	// (0x0005c4fc) grid_gallery_pane

0x6cce,	// (0x0005c517) cell_gallery_pane_ParamLimits

0x6cce,	// (0x0005c517) cell_gallery_pane

0x6d1f,	// (0x0005c568) bg_cell_gallery_focus_pane_ParamLimits

0x6d1f,	// (0x0005c568) bg_cell_gallery_focus_pane

0x6d31,	// (0x0005c57a) cell_gallery_pane_g1_ParamLimits

0x6d31,	// (0x0005c57a) cell_gallery_pane_g1

0x6d3d,	// (0x0005c586) cell_gallery_pane_g2_ParamLimits

0x6d3d,	// (0x0005c586) cell_gallery_pane_g2

0x6d4a,	// (0x0005c593) cell_gallery_pane_g3_ParamLimits

0x6d4a,	// (0x0005c593) cell_gallery_pane_g3

0x6d57,	// (0x0005c5a0) cell_gallery_pane_g4_ParamLimits

0x6d57,	// (0x0005c5a0) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00064f69) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00064f69) cell_gallery_pane_g

0x6d63,	// (0x0005c5ac) bg_cell_gallery_focus_pane_g1

0x6d6b,	// (0x0005c5b4) bg_cell_gallery_focus_pane_g2

0x6d73,	// (0x0005c5bc) bg_cell_gallery_focus_pane_g3

0x6d7b,	// (0x0005c5c4) bg_cell_gallery_focus_pane_g4

0xc3bb,	// (0x00061c04) bg_cell_gallery_focus_pane_g5

0xc3c3,	// (0x00061c0c) bg_cell_gallery_focus_pane_g6

0xc3cb,	// (0x00061c14) bg_cell_gallery_focus_pane_g7

0xc3d3,	// (0x00061c1c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00064f72) bg_cell_gallery_focus_pane_g

0xc3db,	// (0x00061c24) aid_firma_cardinal

0xc3ef,	// (0x00061c38) blid_firmament_pane_t1

0xc406,	// (0x00061c4f) blid_firmament_pane_t2

0xc41d,	// (0x00061c66) blid_firmament_pane_t3

0xc434,	// (0x00061c7d) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00064f83) blid_firmament_pane_t

0xc44b,	// (0x00061c94) blid_sat_info_pane

0xc45b,	// (0x00061ca4) blid_sat_info_pane_g1

0xc45b,	// (0x00061ca4) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00064f8c) blid_sat_info_pane_g

0xc465,	// (0x00061cae) blid_sat_info_pane_t1

0xc473,	// (0x00061cbc) smil2_volume_content_pane

0xc47c,	// (0x00061cc5) smil2_volume_pane_g1

0xc484,	// (0x00061ccd) smil2_volume_content_pane_g1

0xc48d,	// (0x00061cd6) smil2_volume_content_pane_g2

0xc496,	// (0x00061cdf) smil2_volume_content_pane_g3

0xc49f,	// (0x00061ce8) smil2_volume_content_pane_g4

0xc4a8,	// (0x00061cf1) smil2_volume_content_pane_g5

0xc4b1,	// (0x00061cfa) smil2_volume_content_pane_g6

0xc4ba,	// (0x00061d03) smil2_volume_content_pane_g7

0xc4c3,	// (0x00061d0c) smil2_volume_content_pane_g8

0xc4cc,	// (0x00061d15) smil2_volume_content_pane_g9

0xc4d5,	// (0x00061d1e) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00064f91) smil2_volume_content_pane_g

0x3610,	// (0x00058e59) cale_week_day_heading_pane_t1_ParamLimits

0x3624,	// (0x00058e6d) cale_week_day_heading_pane_t2_ParamLimits

0x3638,	// (0x00058e81) cale_week_day_heading_pane_t3_ParamLimits

0x364c,	// (0x00058e95) cale_week_day_heading_pane_t4_ParamLimits

0x3660,	// (0x00058ea9) cale_week_day_heading_pane_t5_ParamLimits

0x3674,	// (0x00058ebd) cale_week_day_heading_pane_t6_ParamLimits

0x3688,	// (0x00058ed1) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00064a7d) cale_week_day_heading_pane_t_ParamLimits

0xbe67,	// (0x000616b0) bg_cale_side_pane_ParamLimits

0x369c,	// (0x00058ee5) cale_week_time_pane_t1_ParamLimits

0x36b4,	// (0x00058efd) cale_week_time_pane_t2_ParamLimits

0x36cc,	// (0x00058f15) cale_week_time_pane_t3_ParamLimits

0x36e4,	// (0x00058f2d) cale_week_time_pane_t4_ParamLimits

0x36fc,	// (0x00058f45) cale_week_time_pane_t5_ParamLimits

0x3714,	// (0x00058f5d) cale_week_time_pane_t6_ParamLimits

0x372c,	// (0x00058f75) cale_week_time_pane_t7_ParamLimits

0x3748,	// (0x00058f91) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00064a8c) cale_week_time_pane_t_ParamLimits

0x3768,	// (0x00058fb1) cell_cale_week_pane_g2_ParamLimits

0xbe67,	// (0x000616b0) bg_cale_side_pane_cp01_ParamLimits

0x46a6,	// (0x00059eef) cale_month_week_pane_t1_ParamLimits

0x46bd,	// (0x00059f06) cale_month_week_pane_t2_ParamLimits

0x46d4,	// (0x00059f1d) cale_month_week_pane_t3_ParamLimits

0x46eb,	// (0x00059f34) cale_month_week_pane_t4_ParamLimits

0x4702,	// (0x00059f4b) cale_month_week_pane_t5_ParamLimits

0x4719,	// (0x00059f62) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00064b65) cale_month_week_pane_t_ParamLimits

0xc210,	// (0x00061a59) cell_cale_month_pane_g1_ParamLimits

0xb4d1,	// (0x00060d1a) main_cale_event_viewer_pane

0xb4d1,	// (0x00060d1a) listscroll_cale_event_viewer_pane

0xc4de,	// (0x00061d27) list_cale_ev_pane

0xc4e6,	// (0x00061d2f) scroll_pane_cp023

0x6d83,	// (0x0005c5cc) field_cale_ev_pane_ParamLimits

0x6d83,	// (0x0005c5cc) field_cale_ev_pane

0xc4f2,	// (0x00061d3b) field_cale_ev_content_pane_ParamLimits

0xc4f2,	// (0x00061d3b) field_cale_ev_content_pane

0xc4fe,	// (0x00061d47) field_cale_ev_pane_g1_ParamLimits

0xc4fe,	// (0x00061d47) field_cale_ev_pane_g1

0xc50a,	// (0x00061d53) field_cale_ev_pane_g2_ParamLimits

0xc50a,	// (0x00061d53) field_cale_ev_pane_g2

0xc522,	// (0x00061d6b) field_cale_ev_pane_g3_ParamLimits

0xc522,	// (0x00061d6b) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00064fa6) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00064fa6) field_cale_ev_pane_g

0xc53a,	// (0x00061d83) field_cale_ev_pane_t1_ParamLimits

0xc53a,	// (0x00061d83) field_cale_ev_pane_t1

0x6da7,	// (0x0005c5f0) field_cale_ev_content_pane_t1_ParamLimits

0x6da7,	// (0x0005c5f0) field_cale_ev_content_pane_t1

0x098a,	// (0x000561d3) bg_button_pane_cp01

0xbc9f,	// (0x000614e8) listscroll_cale_week_pane_ParamLimits

0x33fa,	// (0x00058c43) popup_toolbar_window_cp01

0xbe55,	// (0x0006169e) listscroll_cale_week_pane_t1_ParamLimits

0xbc9f,	// (0x000614e8) listscroll_cale_day_pane_ParamLimits

0x4897,	// (0x0005a0e0) popup_toolbar_window_cp02

0xbe55,	// (0x0006169e) listscroll_cale_day_pane_t1_ParamLimits

0xbc9f,	// (0x000614e8) main_cale_month_pane_ParamLimits

0x6079,	// (0x0005b8c2) popup_toolbar_window_cp03_ParamLimits

0x6079,	// (0x0005b8c2) popup_toolbar_window_cp03

0x569c,	// (0x0005aee5) main_image_pane_g2_ParamLimits

0x569c,	// (0x0005aee5) main_image_pane_g2

0x56ad,	// (0x0005aef6) main_image_pane_g3_ParamLimits

0x56ad,	// (0x0005aef6) main_image_pane_g3

0x0002,

0xf54e,	// (0x00064d97) main_image_pane_g_ParamLimits

0xf54e,	// (0x00064d97) main_image_pane_g

0x0aa4,	// (0x000562ed) main_image_pane_t1_ParamLimits

0x56be,	// (0x0005af07) main_image_pane_t2_ParamLimits

0x56be,	// (0x0005af07) main_image_pane_t2

0x56d0,	// (0x0005af19) main_image_pane_t3_ParamLimits

0x56d0,	// (0x0005af19) main_image_pane_t3

0x56f8,	// (0x0005af41) main_image_pane_t4_ParamLimits

0x56f8,	// (0x0005af41) main_image_pane_t4

0x0003,

0xf555,	// (0x00064d9e) main_image_pane_t_ParamLimits

0xf555,	// (0x00064d9e) main_image_pane_t

0x5718,	// (0x0005af61) popup_image_details_window_cp01

0x5722,	// (0x0005af6b) popup_toobar_trans_pane_cp01_ParamLimits

0x5722,	// (0x0005af6b) popup_toobar_trans_pane_cp01

0x5eec,	// (0x0005b735) popup_image_details_window_ParamLimits

0x5eec,	// (0x0005b735) popup_image_details_window

0x1c5a,	// (0x000574a3) popup_image_focus_window

0x632f,	// (0x0005bb78) camera2_autofocus_pane_ParamLimits

0x632f,	// (0x0005bb78) camera2_autofocus_pane

0xb4d1,	// (0x00060d1a) bg_popup_sub_pane_cp06

0xc551,	// (0x00061d9a) popup_image_focus_window_g1

0xc559,	// (0x00061da2) popup_image_focus_window_g2

0xc561,	// (0x00061daa) popup_image_focus_window_g3

0xc569,	// (0x00061db2) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00064fad) popup_image_focus_window_g

0xc571,	// (0x00061dba) popup_image_focus_window_t1

0xc57f,	// (0x00061dc8) popup_image_focus_window_t2

0xc58f,	// (0x00061dd8) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00064fb6) popup_image_focus_window_t

0xc59d,	// (0x00061de6) camera2_autofocus_pane_g1

0x1c38,	// (0x00057481) bg_tb_trans_pane_cp01

0xc5ab,	// (0x00061df4) popup_image_details_window_g1

0xc5be,	// (0x00061e07) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00064fc8) popup_image_details_window_g

0xc5e7,	// (0x00061e30) popup_image_details_window_t1

0xc5f9,	// (0x00061e42) popup_image_details_window_t2

0xc612,	// (0x00061e5b) popup_image_details_window_t3

0xc626,	// (0x00061e6f) popup_image_details_window_t4

0xc641,	// (0x00061e8a) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00064fcf) popup_image_details_window_t

0xbc67,	// (0x000614b0) bg_calc_paper_pane_ParamLimits

0xbc7b,	// (0x000614c4) grid_highlight_pane_cp013

0xbc85,	// (0x000614ce) list_calc_pane_ParamLimits

0xbc97,	// (0x000614e0) scroll_pane_cp024

0xbc9f,	// (0x000614e8) bg_calc_display_pane_ParamLimits

0x3234,	// (0x00058a7d) calc_display_pane_t1_ParamLimits

0x3246,	// (0x00058a8f) calc_display_pane_t2_ParamLimits

0xbcab,	// (0x000614f4) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000649ff) calc_display_pane_t_ParamLimits

0x3309,	// (0x00058b52) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00064a1c) cell_calc_pane_g

0x3312,	// (0x00058b5b) cell_calc_pane_t1

0xbd22,	// (0x0006156b) grid_highlight_pane_cp02_ParamLimits

0xbd38,	// (0x00061581) toolbar_button_pane_cp01_ParamLimits

0xbd38,	// (0x00061581) toolbar_button_pane_cp01

0x0ae9,	// (0x00056332) temp_image_control_pane_ParamLimits

0x0ae9,	// (0x00056332) temp_image_control_pane

0x1c38,	// (0x00057481) main_mp3_pane

0xc65b,	// (0x00061ea4) temp_image_control_pane_g1_ParamLimits

0xc65b,	// (0x00061ea4) temp_image_control_pane_g1

0xc669,	// (0x00061eb2) temp_image_control_pane_g2_ParamLimits

0xc669,	// (0x00061eb2) temp_image_control_pane_g2

0xc67b,	// (0x00061ec4) temp_image_control_pane_g3_ParamLimits

0xc67b,	// (0x00061ec4) temp_image_control_pane_g3

0x6df8,	// (0x0005c641) temp_image_control_pane_g4_ParamLimits

0x6df8,	// (0x0005c641) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00064fda) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00064fda) temp_image_control_pane_g

0xc65b,	// (0x00061ea4) main_mp3_pane_g1

0x6e0b,	// (0x0005c654) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00064fe3) main_mp3_pane_g

0xc6be,	// (0x00061f07) main_mp3_pane_t1

0xbf36,	// (0x0006177f) main_camera_pane_g8_ParamLimits

0xbf36,	// (0x0006177f) main_camera_pane_g8

0x3a39,	// (0x00059282) main_video_pane_g7_ParamLimits

0x3a39,	// (0x00059282) main_video_pane_g7

0xc33c,	// (0x00061b85) main_camera2_pane_t7_ParamLimits

0xc33c,	// (0x00061b85) main_camera2_pane_t7

0xc088,	// (0x000618d1) scroll_pane_cp025_ParamLimits

0xc088,	// (0x000618d1) scroll_pane_cp025

0xc09c,	// (0x000618e5) scroll_pane_cp026_ParamLimits

0xc09c,	// (0x000618e5) scroll_pane_cp026

0xc0ab,	// (0x000618f4) wml_content_pane_ParamLimits

0xb4d1,	// (0x00060d1a) main_touch_calib_pane

0x6ed2,	// (0x0005c71b) main_touch_calib_pane_g1

0x6ede,	// (0x0005c727) main_touch_calib_pane_g2

0x6eea,	// (0x0005c733) main_touch_calib_pane_g3

0x6ef6,	// (0x0005c73f) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00065001) main_touch_calib_pane_g

0x6f02,	// (0x0005c74b) main_touch_calib_pane_t1

0x6f1c,	// (0x0005c765) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0006500a) main_touch_calib_pane_t

0x0760,	// (0x00055fa9) mup_progress_pane_cp02

0x077f,	// (0x00055fc8) navi_pane_g1

0x07e1,	// (0x0005602a) navi_pane_mp_t3

0x1c38,	// (0x00057481) main_mp3_pane_ParamLimits

0x60bb,	// (0x0005b904) navi_pane_ParamLimits

0xc65b,	// (0x00061ea4) main_mp3_pane_g1_ParamLimits

0x6e0b,	// (0x0005c654) main_mp3_pane_g2_ParamLimits

0x6e17,	// (0x0005c660) main_mp3_pane_g3_ParamLimits

0x6e17,	// (0x0005c660) main_mp3_pane_g3

0x6e25,	// (0x0005c66e) main_mp3_pane_g4_ParamLimits

0x6e25,	// (0x0005c66e) main_mp3_pane_g4

0xc68b,	// (0x00061ed4) main_mp3_pane_g5_ParamLimits

0xc68b,	// (0x00061ed4) main_mp3_pane_g5

0xc699,	// (0x00061ee2) main_mp3_pane_g6_ParamLimits

0xc699,	// (0x00061ee2) main_mp3_pane_g6

0xc6a6,	// (0x00061eef) main_mp3_pane_g7_ParamLimits

0xc6a6,	// (0x00061eef) main_mp3_pane_g7

0xc6b2,	// (0x00061efb) main_mp3_pane_g8_ParamLimits

0xc6b2,	// (0x00061efb) main_mp3_pane_g8

0xf79a,	// (0x00064fe3) main_mp3_pane_g_ParamLimits

0x6e31,	// (0x0005c67a) main_mp3_pane_t2

0x6e3f,	// (0x0005c688) main_mp3_pane_t3

0xc6cc,	// (0x00061f15) main_mp3_pane_t4

0xc6da,	// (0x00061f23) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00064ff4) main_mp3_pane_t

0xc6e8,	// (0x00061f31) mup_progress_pane_cp01

0x2d02,	// (0x0005854b) aid_zoom_text_secondary2

0xc4de,	// (0x00061d27) list_cale_ev2_pane

0xc4e6,	// (0x00061d2f) scroll_pane_cp023_ParamLimits

0x6f74,	// (0x0005c7bd) field_cale_ev2_pane_ParamLimits

0x6f74,	// (0x0005c7bd) field_cale_ev2_pane

0xc6f0,	// (0x00061f39) field_cale_ev2_pane_g1_ParamLimits

0xc6f0,	// (0x00061f39) field_cale_ev2_pane_g1

0xc6fc,	// (0x00061f45) field_cale_ev2_pane_g2_ParamLimits

0xc6fc,	// (0x00061f45) field_cale_ev2_pane_g2

0xc714,	// (0x00061f5d) field_cale_ev2_pane_g3_ParamLimits

0xc714,	// (0x00061f5d) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00065015) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00065015) field_cale_ev2_pane_g

0xc738,	// (0x00061f81) field_cale_ev2_pane_t1_ParamLimits

0xc738,	// (0x00061f81) field_cale_ev2_pane_t1

0xc74f,	// (0x00061f98) field_cale_ev2_pane_t2_ParamLimits

0xc74f,	// (0x00061f98) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0006501e) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0006501e) field_cale_ev2_pane_t

0x5537,	// (0x0005ad80) main_postcard_pane_g5_ParamLimits

0x5537,	// (0x0005ad80) main_postcard_pane_g5

0x554d,	// (0x0005ad96) main_postcard_pane_g6_ParamLimits

0x554d,	// (0x0005ad96) main_postcard_pane_g6

0x37e5,	// (0x0005902e) camera2_autofocus_pane_cp_ParamLimits

0x37e5,	// (0x0005902e) camera2_autofocus_pane_cp

0x1c38,	// (0x00057481) main_mup3_pane

0x6fb8,	// (0x0005c801) main_mup3_pane_g1_ParamLimits

0x6fb8,	// (0x0005c801) main_mup3_pane_g1

0x6fda,	// (0x0005c823) main_mup3_pane_g2_ParamLimits

0x6fda,	// (0x0005c823) main_mup3_pane_g2

0x705d,	// (0x0005c8a6) main_mup3_pane_g3_ParamLimits

0x705d,	// (0x0005c8a6) main_mup3_pane_g3

0x70a1,	// (0x0005c8ea) main_mup3_pane_g4_ParamLimits

0x70a1,	// (0x0005c8ea) main_mup3_pane_g4

0x70e5,	// (0x0005c92e) main_mup3_pane_g5_ParamLimits

0x70e5,	// (0x0005c92e) main_mup3_pane_g5

0x7129,	// (0x0005c972) main_mup3_pane_g6_ParamLimits

0x7129,	// (0x0005c972) main_mup3_pane_g6

0xc764,	// (0x00061fad) main_mup3_pane_g7_ParamLimits

0xc764,	// (0x00061fad) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0006502e) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0006502e) main_mup3_pane_g

0x71a5,	// (0x0005c9ee) main_mup3_pane_t1_ParamLimits

0x71a5,	// (0x0005c9ee) main_mup3_pane_t1

0x721f,	// (0x0005ca68) main_mup3_pane_t2_ParamLimits

0x721f,	// (0x0005ca68) main_mup3_pane_t2

0x72f9,	// (0x0005cb42) main_mup3_pane_t4_ParamLimits

0x72f9,	// (0x0005cb42) main_mup3_pane_t4

0x7357,	// (0x0005cba0) main_mup3_pane_t5_ParamLimits

0x7357,	// (0x0005cba0) main_mup3_pane_t5

0x740f,	// (0x0005cc58) main_mup3_pane_t6_ParamLimits

0x740f,	// (0x0005cc58) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0006503f) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0006503f) main_mup3_pane_t

0x74c5,	// (0x0005cd0e) mup3_progress_pane_ParamLimits

0x74c5,	// (0x0005cd0e) mup3_progress_pane

0x7549,	// (0x0005cd92) popup_mup3_control_window_ParamLimits

0x7549,	// (0x0005cd92) popup_mup3_control_window

0xc772,	// (0x00061fbb) popup_mup3_text_window

0x757f,	// (0x0005cdc8) mup3_progress_pane_t1

0x7596,	// (0x0005cddf) mup3_progress_pane_t2

0xc77a,	// (0x00061fc3) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0006504c) mup3_progress_pane_t

0xc791,	// (0x00061fda) mup_progress_pane_cp03

0xb4d1,	// (0x00060d1a) bg_tb_trans_pane_cp04

0x75ad,	// (0x0005cdf6) mup3_volume_pane

0x75b5,	// (0x0005cdfe) popup_mup3_control_window_g1

0x75be,	// (0x0005ce07) mup3_volume_pane_g1

0x75c7,	// (0x0005ce10) mup3_volume_pane_g2

0x75d0,	// (0x0005ce19) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00065053) mup3_volume_pane_g

0xb4d1,	// (0x00060d1a) bg_tb_trans_pane_cp03

0xc7a1,	// (0x00061fea) popup_mup3_text_window_g1

0xc7a9,	// (0x00061ff2) popup_mup3_text_window_t1

0xbcf9,	// (0x00061542) list_calc_item_pane_g1_ParamLimits

0x6a6a,	// (0x0005c2b3) mup_volume_pane_cp_g1

0x6f36,	// (0x0005c77f) main_touch_calib_pane_t3

0x6f4a,	// (0x0005c793) main_touch_calib_pane_t4

0x6f5e,	// (0x0005c7a7) main_touch_calib_pane_t5

0xb4db,	// (0x00060d24) aid_cell_size_toolbar2

0xb4e3,	// (0x00060d2c) aid_popup3_width_pane

0x2cfa,	// (0x00058543) aid_zoom_text_msg_primary

0xbf16,	// (0x0006175f) vorec_t7

0xbcbd,	// (0x00061506) bg_calc_paper_pane_g1_ParamLimits

0xbcc9,	// (0x00061512) bg_calc_paper_pane_g2_ParamLimits

0xbcd5,	// (0x0006151e) bg_calc_paper_pane_g3_ParamLimits

0xbce1,	// (0x0006152a) bg_calc_paper_pane_g4_ParamLimits

0xbced,	// (0x00061536) bg_calc_paper_pane_g5_ParamLimits

0x3293,	// (0x00058adc) bg_calc_paper_pane_g6_ParamLimits

0x32a6,	// (0x00058aef) bg_calc_paper_pane_g7_ParamLimits

0x32b9,	// (0x00058b02) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00064a06) bg_calc_paper_pane_g_ParamLimits

0x32ca,	// (0x00058b13) calc_bg_paper_pane_g9_ParamLimits

0x3947,	// (0x00059190) image_qvga_pane_ParamLimits

0x3947,	// (0x00059190) image_qvga_pane

0xbba8,	// (0x000613f1) bg_popup_sub_pane_cp04_ParamLimits

0x0a20,	// (0x00056269) popup_mup_playback_window_g1_ParamLimits

0x0a2c,	// (0x00056275) popup_mup_playback_window_t1_ParamLimits

0x0a41,	// (0x0005628a) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00064d92) popup_mup_playback_window_t_ParamLimits

0x67b3,	// (0x0005bffc) main_mup2_pane_g3_ParamLimits

0x67b3,	// (0x0005bffc) main_mup2_pane_g3

0x3d0a,	// (0x00059553) popup_toolbar_window_cp04

0x0e3c,	// (0x00056685) popup_call2_audio_second_window_g3_ParamLimits

0x0e3c,	// (0x00056685) popup_call2_audio_second_window_g3

0x1246,	// (0x00056a8f) popup_call2_audio_first_window_g4_ParamLimits

0x1246,	// (0x00056a8f) popup_call2_audio_first_window_g4

0x18c5,	// (0x0005710e) popup_call2_audio_in_window_g4_ParamLimits

0x18c5,	// (0x0005710e) popup_call2_audio_in_window_g4

0x567e,	// (0x0005aec7) aid_area_sk_bg_cut_ParamLimits

0x567e,	// (0x0005aec7) aid_area_sk_bg_cut

0x0a56,	// (0x0005629f) aid_area_sk_bg_cut_2_ParamLimits

0x0a56,	// (0x0005629f) aid_area_sk_bg_cut_2

0x6d0f,	// (0x0005c558) aid_placing_details_win

0x6d17,	// (0x0005c560) aid_placing_details_win_2

0xc59d,	// (0x00061de6) camera2_autofocus_pane_g1_ParamLimits

0x2e94,	// (0x000586dd) popup_fixed_preview_cale_window_ParamLimits

0x2e94,	// (0x000586dd) popup_fixed_preview_cale_window

0x0830,	// (0x00056079) navi_slider_pane_g3

0x0839,	// (0x00056082) navi_slider_pane_g4

0x0842,	// (0x0005608b) navi_slider_pane_g5

0x0830,	// (0x00056079) navi_slider_pane_g6

0xc2b6,	// (0x00061aff) navi_slider_pane_g7

0x0957,	// (0x000561a0) mup_scale_pane_g3

0x0960,	// (0x000561a9) mup_scale_pane_g4

0x0969,	// (0x000561b2) mup_scale_pane_g5

0x52fe,	// (0x0005ab47) mup_scale_pane_g6

0x5307,	// (0x0005ab50) mup_scale_pane_g7

0x0830,	// (0x00056079) cams2_slider_pane_g3

0x6b1c,	// (0x0005c365) cams2_slider_pane_g4

0xc3aa,	// (0x00061bf3) cams2_slider_pane_g5

0x0830,	// (0x00056079) cams2_slider_pane_g6

0xc3b2,	// (0x00061bfb) cams2_slider_pane_g7

0xc45b,	// (0x00061ca4) camera2_autofocus_pane_cp_g1

0xc7b7,	// (0x00062000) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7b7,	// (0x00062000) bg_popup_preview_window_pane_cp02

0xc7c3,	// (0x0006200c) list_fp_cale_pane_ParamLimits

0xc7c3,	// (0x0006200c) list_fp_cale_pane

0xc7cf,	// (0x00062018) popup_fixed_preview_cale_window_t1_ParamLimits

0xc7cf,	// (0x00062018) popup_fixed_preview_cale_window_t1

0x75d9,	// (0x0005ce22) popup_fixed_preview_cale_window_t2_ParamLimits

0x75d9,	// (0x0005ce22) popup_fixed_preview_cale_window_t2

0x75ee,	// (0x0005ce37) popup_fixed_preview_cale_window_t3_ParamLimits

0x75ee,	// (0x0005ce37) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0006505a) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0006505a) popup_fixed_preview_cale_window_t

0x1d8d,	// (0x000575d6) list_single_fp_cale_pane_ParamLimits

0x1d8d,	// (0x000575d6) list_single_fp_cale_pane

0xc7ed,	// (0x00062036) list_single_fp_cale_pane_g1_ParamLimits

0xc7ed,	// (0x00062036) list_single_fp_cale_pane_g1

0xc7f9,	// (0x00062042) list_single_fp_cale_pane_g2_ParamLimits

0xc7f9,	// (0x00062042) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00065061) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00065061) list_single_fp_cale_pane_g

0xc812,	// (0x0006205b) list_single_fp_cale_pane_t1_ParamLimits

0xc812,	// (0x0006205b) list_single_fp_cale_pane_t1

0xc824,	// (0x0006206d) list_single_fp_cale_pane_t2_ParamLimits

0xc824,	// (0x0006206d) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00065068) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00065068) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb4d1,	// (0x00060d1a) main_dialer_pane

0x7605,	// (0x0005ce4e) aid_cell_size_keypad

0x760f,	// (0x0005ce58) dialer_ne_pane

0x7619,	// (0x0005ce62) grid_dialer_command_1_pane

0x7621,	// (0x0005ce6a) grid_dialer_command_2_pane

0x7629,	// (0x0005ce72) grid_dialer_keypad_pane

0x763d,	// (0x0005ce86) bg_popup_call_pane_cp06_ParamLimits

0x763d,	// (0x0005ce86) bg_popup_call_pane_cp06

0x7649,	// (0x0005ce92) dialer_ne_clear_pane_ParamLimits

0x7649,	// (0x0005ce92) dialer_ne_clear_pane

0xc857,	// (0x000620a0) dialer_ne_pane_g1

0xc85f,	// (0x000620a8) dialer_ne_pane_t1_ParamLimits

0xc85f,	// (0x000620a8) dialer_ne_pane_t1

0x7655,	// (0x0005ce9e) dialer_ne_pane_t2_ParamLimits

0x7655,	// (0x0005ce9e) dialer_ne_pane_t2

0x767f,	// (0x0005cec8) dialer_ne_pane_t3_ParamLimits

0x767f,	// (0x0005cec8) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0006506d) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0006506d) dialer_ne_pane_t

0x76af,	// (0x0005cef8) dialer_ne_pane_t3_copy1_ParamLimits

0x76af,	// (0x0005cef8) dialer_ne_pane_t3_copy1

0x76de,	// (0x0005cf27) cell_dialer_keypad_pane_ParamLimits

0x76de,	// (0x0005cf27) cell_dialer_keypad_pane

0x76f5,	// (0x0005cf3e) cell_dialer_command_1_pane_ParamLimits

0x76f5,	// (0x0005cf3e) cell_dialer_command_1_pane

0x770b,	// (0x0005cf54) cell_dialer_command_2_pane_ParamLimits

0x770b,	// (0x0005cf54) cell_dialer_command_2_pane

0xc871,	// (0x000620ba) bg_button_pane_cp02_ParamLimits

0xc871,	// (0x000620ba) bg_button_pane_cp02

0x771a,	// (0x0005cf63) cell_dialer_keypad_pane_g1_ParamLimits

0x771a,	// (0x0005cf63) cell_dialer_keypad_pane_g1

0xc871,	// (0x000620ba) bg_button_pane_cp03_ParamLimits

0xc871,	// (0x000620ba) bg_button_pane_cp03

0x772f,	// (0x0005cf78) cell_dialer_command_1_pane_g1_ParamLimits

0x772f,	// (0x0005cf78) cell_dialer_command_1_pane_g1

0xc87d,	// (0x000620c6) bg_button_pane_cp04

0x7743,	// (0x0005cf8c) cell_dialer_command_2_pane_g1

0x081f,	// (0x00056068) bg_button_pane_cp06

0xc885,	// (0x000620ce) dialer_ne_clear_pane_g1

0x4de0,	// (0x0005a629) navi_pane_g2

0x4e0e,	// (0x0005a657) navi_pane_g3

0x0002,

0xf44c,	// (0x00064c95) navi_pane_g

0x4e39,	// (0x0005a682) navi_pane_mv_g2

0x4e60,	// (0x0005a6a9) navi_pane_mv_g5

0x4e68,	// (0x0005a6b1) navi_pane_mv_t1

0xbc9f,	// (0x000614e8) main_clock2_pane

0x777b,	// (0x0005cfc4) main_clock2_list_pane_ParamLimits

0x777b,	// (0x0005cfc4) main_clock2_list_pane

0x77b3,	// (0x0005cffc) main_clock2_pane_t1_ParamLimits

0x77b3,	// (0x0005cffc) main_clock2_pane_t1

0x77ef,	// (0x0005d038) main_clock2_pane_t2_ParamLimits

0x77ef,	// (0x0005d038) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00065074) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00065074) main_clock2_pane_t

0x787b,	// (0x0005d0c4) popup_clock_analogue_window_cp03_ParamLimits

0x787b,	// (0x0005d0c4) popup_clock_analogue_window_cp03

0x78a2,	// (0x0005d0eb) popup_clock_digital_window_cp02_ParamLimits

0x78a2,	// (0x0005d0eb) popup_clock_digital_window_cp02

0x791b,	// (0x0005d164) main_clock2_list_single_pane_ParamLimits

0x791b,	// (0x0005d164) main_clock2_list_single_pane

0x081f,	// (0x00056068) list_highlight_pane_cp05

0xc88d,	// (0x000620d6) main_clock2_list_single_pane_t1

0x3d0a,	// (0x00059553) popup_toolbar_window_cp04_ParamLimits

0x6dc8,	// (0x0005c611) camera2_autofocus_pane_g2_ParamLimits

0x6dc8,	// (0x0005c611) camera2_autofocus_pane_g2

0x6dd4,	// (0x0005c61d) camera2_autofocus_pane_g3_ParamLimits

0x6dd4,	// (0x0005c61d) camera2_autofocus_pane_g3

0x6de0,	// (0x0005c629) camera2_autofocus_pane_g4_ParamLimits

0x6de0,	// (0x0005c629) camera2_autofocus_pane_g4

0x6dec,	// (0x0005c635) camera2_autofocus_pane_g5_ParamLimits

0x6dec,	// (0x0005c635) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00064fbd) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00064fbd) camera2_autofocus_pane_g

0x6f98,	// (0x0005c7e1) camera2_autofocus_pane_cp_g2

0x6fa0,	// (0x0005c7e9) camera2_autofocus_pane_cp_g3

0x6fa8,	// (0x0005c7f1) camera2_autofocus_pane_cp_g4

0x6fb0,	// (0x0005c7f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00065023) camera2_autofocus_pane_cp_g

0x7635,	// (0x0005ce7e) popup_dialer_spcha_window

0xb4d1,	// (0x00060d1a) bg_popup_sub_pane_cp07

0xc89b,	// (0x000620e4) list_spcha_pane

0xc8a3,	// (0x000620ec) list_single_spcha_pane_ParamLimits

0xc8a3,	// (0x000620ec) list_single_spcha_pane

0xb4d1,	// (0x00060d1a) list_highlight_pane_cp06

0xc8b4,	// (0x000620fd) list_single_spcha_pane_t1

0x166f,	// (0x00056eb8) popup_call2_audio_out_window_g4_ParamLimits

0x166f,	// (0x00056eb8) popup_call2_audio_out_window_g4

0xb4d1,	// (0x00060d1a) main_imed2_pane

0x1c64,	// (0x000574ad) popup_imed_adjust2_window

0x5f04,	// (0x0005b74d) popup_imed_trans_window_ParamLimits

0x5f04,	// (0x0005b74d) popup_imed_trans_window

0x6b85,	// (0x0005c3ce) popup_blid_sat_info2_window_t1

0x6b93,	// (0x0005c3dc) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00064f52) popup_blid_sat_info2_window_t

0x79d1,	// (0x0005d21a) aid_size_cell_colour_35

0x79f1,	// (0x0005d23a) aid_size_cell_colour_112

0x7a11,	// (0x0005d25a) aid_size_cell_effect

0x1c2a,	// (0x00057473) bg_tb_trans_pane_cp02

0x037d,	// (0x00055bc6) heading_imed_pane

0x7a31,	// (0x0005d27a) listscroll_imed_pane

0xc8c2,	// (0x0006210b) heading_imed_pane_g1

0xc8ca,	// (0x00062113) heading_imed_pane_t1

0xc8d8,	// (0x00062121) grid_imed_colour_35_pane_ParamLimits

0xc8d8,	// (0x00062121) grid_imed_colour_35_pane

0x7a3d,	// (0x0005d286) grid_imed_effect_pane

0xc8f4,	// (0x0006213d) list_imed_aspect_pane

0x7a54,	// (0x0005d29d) scroll_pane_cp027_ParamLimits

0x7a54,	// (0x0005d29d) scroll_pane_cp027

0x7a65,	// (0x0005d2ae) cell_imed_effect_pane_ParamLimits

0x7a65,	// (0x0005d2ae) cell_imed_effect_pane

0xc8fc,	// (0x00062145) cell_imed_colour_pane_ParamLimits

0xc8fc,	// (0x00062145) cell_imed_colour_pane

0xc946,	// (0x0006218f) cell_imed_colour_pane_g1_ParamLimits

0xc946,	// (0x0006218f) cell_imed_colour_pane_g1

0xc957,	// (0x000621a0) hgihlgiht_grid_pane_cp016_ParamLimits

0xc957,	// (0x000621a0) hgihlgiht_grid_pane_cp016

0x7a8a,	// (0x0005d2d3) cell_imed_effect_pane_g1

0x7a92,	// (0x0005d2db) grid_highlight_pane_cp017

0xc968,	// (0x000621b1) list_imed_single_pane_ParamLimits

0xc968,	// (0x000621b1) list_imed_single_pane

0xb4d1,	// (0x00060d1a) list_highlight_pane_cp07

0xc97c,	// (0x000621c5) list_imed_aspect_pane_comp1_t1

0x1c2a,	// (0x00057473) bg_tb_trans_pane_cp05

0xc99e,	// (0x000621e7) popup_imed_adjust2_window_g1

0xc9c5,	// (0x0006220e) popup_imed_adjust2_window_t1

0xc9dd,	// (0x00062226) slider_imed_adjust_pane

0xc9f1,	// (0x0006223a) slider_imed_adjust_pane_g1

0xca01,	// (0x0006224a) slider_imed_adjust_pane_g2

0xca11,	// (0x0006225a) slider_imed_adjust_pane_g3

0xca22,	// (0x0006226b) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00065091) slider_imed_adjust_pane_g

0x7a9b,	// (0x0005d2e4) aid_size_cell_clipart2

0x7aa7,	// (0x0005d2f0) grid_imed_clipart_pane

0xca33,	// (0x0006227c) scroll_pane_cp031

0x7ab1,	// (0x0005d2fa) cell_imed_clipart_pane_ParamLimits

0x7ab1,	// (0x0005d2fa) cell_imed_clipart_pane

0x7ace,	// (0x0005d317) cell_imed_clipart_pane_g1

0xb4d1,	// (0x00060d1a) grid_highlight_pane_cp014

0x7790,	// (0x0005cfd9) main_clock2_pane_g1_ParamLimits

0x7790,	// (0x0005cfd9) main_clock2_pane_g1

0x78c2,	// (0x0005d10b) aid_call2_pane_cp10

0x78d4,	// (0x0005d11d) aid_call_pane_cp10

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g1

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g2

0x78e6,	// (0x0005d12f) popup_clock_analogue_window_cp10_g3

0x78e6,	// (0x0005d12f) popup_clock_analogue_window_cp10_g4

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0006507f) popup_clock_analogue_window_cp10_g

0x78fc,	// (0x0005d145) popup_clock_analogue_window_cp10_t1

0x792d,	// (0x0005d176) clock_digital_number_pane_cp10_ParamLimits

0x792d,	// (0x0005d176) clock_digital_number_pane_cp10

0x7947,	// (0x0005d190) clock_digital_number_pane_cp11_ParamLimits

0x7947,	// (0x0005d190) clock_digital_number_pane_cp11

0x7961,	// (0x0005d1aa) clock_digital_number_pane_cp12_ParamLimits

0x7961,	// (0x0005d1aa) clock_digital_number_pane_cp12

0x797b,	// (0x0005d1c4) clock_digital_number_pane_cp13_ParamLimits

0x797b,	// (0x0005d1c4) clock_digital_number_pane_cp13

0x7995,	// (0x0005d1de) clock_digital_separator_pane_cp10_ParamLimits

0x7995,	// (0x0005d1de) clock_digital_separator_pane_cp10

0x79af,	// (0x0005d1f8) popup_clock_digital_window_cp02_t1_ParamLimits

0x79af,	// (0x0005d1f8) popup_clock_digital_window_cp02_t1

0xbba0,	// (0x000613e9) clock_digital_number_pane_cp10_g1

0xbba0,	// (0x000613e9) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0006509a) clock_digital_number_pane_cp10_g

0xbba0,	// (0x000613e9) clock_digital_separator_pane_cp10_g1

0xbba0,	// (0x000613e9) clock_digital_separator_pane_g2_cp10

0x07ef,	// (0x00056038) navi_pane_vded_g4

0x07f8,	// (0x00056041) navi_pane_vded_g5

0x0801,	// (0x0005604a) navi_pane_vded_t1

0xb4d1,	// (0x00060d1a) main_vded_pane

0x7ad7,	// (0x0005d320) main_vded_pane_g1

0x7ae3,	// (0x0005d32c) main_vded_pane_g2

0x7aef,	// (0x0005d338) main_vded_pane_g3

0x0002,

0xf856,	// (0x0006509f) main_vded_pane_g

0x7afb,	// (0x0005d344) main_vded_pane_t1

0x7b09,	// (0x0005d352) main_vded_pane_t2

0x0001,

0xf85d,	// (0x000650a6) main_vded_pane_t

0x7b17,	// (0x0005d360) vded_slider_pane

0x7b21,	// (0x0005d36a) vded_video_pane

0xca3b,	// (0x00062284) vded_video_pane_g1

0x7b2d,	// (0x0005d376) vded_video_pane_g2

0xc45b,	// (0x00061ca4) vded_video_pane_g3

0x0002,

0xf862,	// (0x000650ab) vded_video_pane_g

0xca45,	// (0x0006228e) vded_slider_pane_g1

0x6a6a,	// (0x0005c2b3) vded_slider_pane_g2

0xca4e,	// (0x00062297) vded_slider_pane_g3

0xca57,	// (0x000622a0) vded_slider_pane_g4

0xca60,	// (0x000622a9) vded_slider_pane_g5

0x0004,

0xf869,	// (0x000650b2) vded_slider_pane_g

0x7533,	// (0x0005cd7c) mup3_rocker_pane_ParamLimits

0x7533,	// (0x0005cd7c) mup3_rocker_pane

0x7b36,	// (0x0005d37f) mup3_control_keys_pane_g1

0x7b3e,	// (0x0005d387) mup3_control_keys_pane_g2

0x7b46,	// (0x0005d38f) mup3_control_keys_pane_g3

0x7b4e,	// (0x0005d397) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x000650bd) mup3_control_keys_pane_g

0x2ecb,	// (0x00058714) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2ecb,	// (0x00058714) popup_toolbar2_fixed_window_cp01

0x7569,	// (0x0005cdb2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7569,	// (0x0005cdb2) popup_toolbar2_fixed_window_cp02

0x0fae,	// (0x000567f7) popup_call2_audio_second_window_t4_ParamLimits

0x0fae,	// (0x000567f7) popup_call2_audio_second_window_t4

0x14dc,	// (0x00056d25) popup_call2_audio_first_window_t6_ParamLimits

0x14dc,	// (0x00056d25) popup_call2_audio_first_window_t6

0x1772,	// (0x00056fbb) popup_call2_audio_out_window_t6_ParamLimits

0x1772,	// (0x00056fbb) popup_call2_audio_out_window_t6

0xb4d1,	// (0x00060d1a) main_vitu_pane

0x7b5e,	// (0x0005d3a7) aid_size_cell_itu_ParamLimits

0x7b5e,	// (0x0005d3a7) aid_size_cell_itu

0x1c38,	// (0x00057481) bg_popup_window_pane_cp08_ParamLimits

0x1c38,	// (0x00057481) bg_popup_window_pane_cp08

0x7b74,	// (0x0005d3bd) field_vitu_entry_pane_ParamLimits

0x7b74,	// (0x0005d3bd) field_vitu_entry_pane

0x7b8b,	// (0x0005d3d4) grid_vitu_function_pane_ParamLimits

0x7b8b,	// (0x0005d3d4) grid_vitu_function_pane

0x7ba6,	// (0x0005d3ef) grid_vitu_itu_pane_ParamLimits

0x7ba6,	// (0x0005d3ef) grid_vitu_itu_pane

0x7bc4,	// (0x0005d40d) cell_vitu_itu_pane_ParamLimits

0x7bc4,	// (0x0005d40d) cell_vitu_itu_pane

0x7bea,	// (0x0005d433) cell_vitu_function_pane_ParamLimits

0x7bea,	// (0x0005d433) cell_vitu_function_pane

0x1c38,	// (0x00057481) bg_popup_sub_pane_cp08_ParamLimits

0x1c38,	// (0x00057481) bg_popup_sub_pane_cp08

0x7c05,	// (0x0005d44e) field_vitu_entry_pane_t1_ParamLimits

0x7c05,	// (0x0005d44e) field_vitu_entry_pane_t1

0xca81,	// (0x000622ca) field_vitu_entry_pane_t2_ParamLimits

0xca81,	// (0x000622ca) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x000650cb) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x000650cb) field_vitu_entry_pane_t

0xca9e,	// (0x000622e7) bg_button_pane_cp05_ParamLimits

0xca9e,	// (0x000622e7) bg_button_pane_cp05

0x7c25,	// (0x0005d46e) cell_vitu_itu_pane_g1

0x7c3d,	// (0x0005d486) cell_vitu_itu_pane_t1_ParamLimits

0x7c3d,	// (0x0005d486) cell_vitu_itu_pane_t1

0x7c4f,	// (0x0005d498) cell_vitu_itu_pane_t2_ParamLimits

0x7c4f,	// (0x0005d498) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x000650d0) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x000650d0) cell_vitu_itu_pane_t

0xcaac,	// (0x000622f5) bg_button_pane_cp07

0x7c84,	// (0x0005d4cd) cell_vitu_function_pane_g1

0xbc2f,	// (0x00061478) main_calc_pane_g1

0x2cee,	// (0x00058537) aid_visual_content_pane

0xb4d1,	// (0x00060d1a) main_vradio_pane

0x7c8d,	// (0x0005d4d6) main_vradio_pane_g1_ParamLimits

0x7c8d,	// (0x0005d4d6) main_vradio_pane_g1

0xcab6,	// (0x000622ff) main_vradio_pane_g2_ParamLimits

0xcab6,	// (0x000622ff) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x000650d7) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x000650d7) main_vradio_pane_g

0x7ca4,	// (0x0005d4ed) main_vradio_pane_t1_ParamLimits

0x7ca4,	// (0x0005d4ed) main_vradio_pane_t1

0x7cb9,	// (0x0005d502) main_vradio_pane_t2_ParamLimits

0x7cb9,	// (0x0005d502) main_vradio_pane_t2

0xcac3,	// (0x0006230c) main_vradio_pane_t3_ParamLimits

0xcac3,	// (0x0006230c) main_vradio_pane_t3

0x0002,

0xf893,	// (0x000650dc) main_vradio_pane_t_ParamLimits

0xf893,	// (0x000650dc) main_vradio_pane_t

0x7cce,	// (0x0005d517) vradio_rocker_control_pane_ParamLimits

0x7cce,	// (0x0005d517) vradio_rocker_control_pane

0x7ce0,	// (0x0005d529) vradio_station_info_pane_ParamLimits

0x7ce0,	// (0x0005d529) vradio_station_info_pane

0xcad7,	// (0x00062320) vradio_frequency_info_pane_ParamLimits

0xcad7,	// (0x00062320) vradio_frequency_info_pane

0xc45b,	// (0x00061ca4) vradio_station_info_pane_g1

0xcae6,	// (0x0006232f) vradio_station_info_pane_t1_ParamLimits

0xcae6,	// (0x0006232f) vradio_station_info_pane_t1

0xcb08,	// (0x00062351) vradio_station_info_pane_t2_ParamLimits

0xcb08,	// (0x00062351) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x000650e3) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x000650e3) vradio_station_info_pane_t

0xcb1a,	// (0x00062363) vradio_tuning_pane

0xcb22,	// (0x0006236b) vradio_rocker_control_pane_g1

0xcb2a,	// (0x00062373) vradio_rocker_control_pane_g2

0xcb32,	// (0x0006237b) vradio_rocker_control_pane_g3

0xcb3a,	// (0x00062383) vradio_rocker_control_pane_g4

0xcb42,	// (0x0006238b) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x000650e8) vradio_rocker_control_pane_g

0x7cf0,	// (0x0005d539) vradio_frequency_info_pane_g1

0xcb4a,	// (0x00062393) vradio_frequency_info_pane_t1_ParamLimits

0xcb4a,	// (0x00062393) vradio_frequency_info_pane_t1

0x7cfa,	// (0x0005d543) vradio_tuning_pane_g1

0x7d05,	// (0x0005d54e) vradio_tuning_pane_t1

0xb4f7,	// (0x00060d40) area_side_right_pane_ParamLimits

0xb4f7,	// (0x00060d40) area_side_right_pane

0x1bf1,	// (0x0005743a) status_small_pane_g1

0x1bf9,	// (0x00057442) status_small_pane_g2

0x1c02,	// (0x0005744b) status_small_pane_g3

0x1c0b,	// (0x00057454) status_small_pane_g4

0x0003,

0xf65f,	// (0x00064ea8) status_small_pane_g

0x1c14,	// (0x0005745d) status_small_pane_t1

0xb4d1,	// (0x00060d1a) main_video3_pane

0xcb5e,	// (0x000623a7) cams_zoom_vslider_pane

0xcb66,	// (0x000623af) image3_wide_pane_ParamLimits

0xcb66,	// (0x000623af) image3_wide_pane

0xcb80,	// (0x000623c9) image3_wide_small_pane

0xcb8c,	// (0x000623d5) main_video3_pane_g1_ParamLimits

0xcb8c,	// (0x000623d5) main_video3_pane_g1

0xcba8,	// (0x000623f1) main_video3_pane_g2_ParamLimits

0xcba8,	// (0x000623f1) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x000650f3) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x000650f3) main_video3_pane_g

0xcbc4,	// (0x0006240d) main_video3_pane_t1_ParamLimits

0xcbc4,	// (0x0006240d) main_video3_pane_t1

0xcbef,	// (0x00062438) main_video3_pane_t2_ParamLimits

0xcbef,	// (0x00062438) main_video3_pane_t2

0xcc1c,	// (0x00062465) main_video3_pane_t3_ParamLimits

0xcc1c,	// (0x00062465) main_video3_pane_t3

0x0002,

0xf8af,	// (0x000650f8) main_video3_pane_t_ParamLimits

0xf8af,	// (0x000650f8) main_video3_pane_t

0xcc49,	// (0x00062492) cams_zoom_vslider_pane_g1

0xcc52,	// (0x0006249b) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x000650ff) cams_zoom_vslider_pane_g

0xcc5a,	// (0x000624a3) small_slider_vertical_pane

0xc45b,	// (0x00061ca4) small_slider_vertical_pane_g1

0xc45b,	// (0x00061ca4) small_slider_vertical_pane_g2

0xcc62,	// (0x000624ab) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00065104) small_slider_vertical_pane_g

0xb4d1,	// (0x00060d1a) main_hwr_training_pane

0xcc6b,	// (0x000624b4) hwr_training_instruct_pane_ParamLimits

0xcc6b,	// (0x000624b4) hwr_training_instruct_pane

0x7d14,	// (0x0005d55d) hwr_training_navi_pane_ParamLimits

0x7d14,	// (0x0005d55d) hwr_training_navi_pane

0x7d33,	// (0x0005d57c) hwr_training_write_pane_ParamLimits

0x7d33,	// (0x0005d57c) hwr_training_write_pane

0xb4d1,	// (0x00060d1a) bg_frame_shadow_pane

0xcca2,	// (0x000624eb) hwr_training_write_pane_g1

0xccaa,	// (0x000624f3) hwr_training_write_pane_g2

0xccb2,	// (0x000624fb) hwr_training_write_pane_g3

0xccba,	// (0x00062503) hwr_training_write_pane_g4

0xccc2,	// (0x0006250b) hwr_training_write_pane_g5

0xccca,	// (0x00062513) hwr_training_write_pane_g6

0xccd2,	// (0x0006251b) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0006510b) hwr_training_write_pane_g

0xed51,	// (0x0006459a) hwr_training_navi_pane_g1_ParamLimits

0xed51,	// (0x0006459a) hwr_training_navi_pane_g1

0xed63,	// (0x000645ac) hwr_training_navi_pane_g2_ParamLimits

0xed63,	// (0x000645ac) hwr_training_navi_pane_g2

0xed75,	// (0x000645be) hwr_training_navi_pane_g3_ParamLimits

0xed75,	// (0x000645be) hwr_training_navi_pane_g3

0xed85,	// (0x000645ce) hwr_training_navi_pane_g4_ParamLimits

0xed85,	// (0x000645ce) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0006511a) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0006511a) hwr_training_navi_pane_g

0xed92,	// (0x000645db) hwr_training_navi_pane_t1

0x7d7b,	// (0x0005d5c4) list_single_hwr_training_instruct_pane_ParamLimits

0x7d7b,	// (0x0005d5c4) list_single_hwr_training_instruct_pane

0xccda,	// (0x00062523) list_single_hwr_training_instruct_pane_t1

0x6d63,	// (0x0005c5ac) bg_frame_shadow_pane_g1

0xcce9,	// (0x00062532) bg_frame_shadow_pane_g2

0xccf1,	// (0x0006253a) bg_frame_shadow_pane_g3

0xccf9,	// (0x00062542) bg_frame_shadow_pane_g4

0xcd01,	// (0x0006254a) bg_frame_shadow_pane_g5

0xcd09,	// (0x00062552) bg_frame_shadow_pane_g6

0xcd11,	// (0x0006255a) bg_frame_shadow_pane_g7

0xbd98,	// (0x000615e1) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00065125) bg_frame_shadow_pane_g

0xb4d1,	// (0x00060d1a) main_video_tele_dialer_pane

0x7d97,	// (0x0005d5e0) aid_size_cell_video_keypad_ParamLimits

0x7d97,	// (0x0005d5e0) aid_size_cell_video_keypad

0x7db1,	// (0x0005d5fa) grid_video_dialer_keypad_pane_ParamLimits

0x7db1,	// (0x0005d5fa) grid_video_dialer_keypad_pane

0x7dff,	// (0x0005d648) video_down_pane_cp_ParamLimits

0x7dff,	// (0x0005d648) video_down_pane_cp

0x7e33,	// (0x0005d67c) cell_video_dialer_keypad_pane_ParamLimits

0x7e33,	// (0x0005d67c) cell_video_dialer_keypad_pane

0xcd19,	// (0x00062562) bg_button_pane_cp08_ParamLimits

0xcd19,	// (0x00062562) bg_button_pane_cp08

0x7e59,	// (0x0005d6a2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e59,	// (0x0005d6a2) cell_video_dialer_keypad_pane_g1

0x751d,	// (0x0005cd66) mup3_rocker2_pane_ParamLimits

0x751d,	// (0x0005cd66) mup3_rocker2_pane

0xc45b,	// (0x00061ca4) mup3_rocker2_pane_g1

0x5dd1,	// (0x0005b61a) main_dialer2_pane

0xb4d1,	// (0x00060d1a) main_mp4_pane

0xeda8,	// (0x000645f1) main_mp4_pane_g1_ParamLimits

0xeda8,	// (0x000645f1) main_mp4_pane_g1

0xeda8,	// (0x000645f1) main_mp4_pane_g2_ParamLimits

0xeda8,	// (0x000645f1) main_mp4_pane_g2

0x7e94,	// (0x0005d6dd) main_mp4_pane_g3_ParamLimits

0x7e94,	// (0x0005d6dd) main_mp4_pane_g3

0xedb6,	// (0x000645ff) main_mp4_pane_g4_ParamLimits

0xedb6,	// (0x000645ff) main_mp4_pane_g4

0xedd0,	// (0x00064619) main_mp4_pane_g5_ParamLimits

0xedd0,	// (0x00064619) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00065145) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00065145) main_mp4_pane_g

0xee04,	// (0x0006464d) main_mp4_pane_t1_ParamLimits

0xee04,	// (0x0006464d) main_mp4_pane_t1

0xee60,	// (0x000646a9) main_mp4_pane_t2_ParamLimits

0xee60,	// (0x000646a9) main_mp4_pane_t2

0xcd25,	// (0x0006256e) main_mp4_pane_t3_ParamLimits

0xcd25,	// (0x0006256e) main_mp4_pane_t3

0xeeb2,	// (0x000646fb) main_mp4_pane_t4_ParamLimits

0xeeb2,	// (0x000646fb) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00065152) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00065152) main_mp4_pane_t

0xeef2,	// (0x0006473b) mp4_progress_pane_ParamLimits

0xeef2,	// (0x0006473b) mp4_progress_pane

0xef3c,	// (0x00064785) mp4_rocker_pane_ParamLimits

0xef3c,	// (0x00064785) mp4_rocker_pane

0xcd4d,	// (0x00062596) mp4_progress_pane_t1

0xcd66,	// (0x000625af) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0006515b) mp4_progress_pane_t

0xcd7f,	// (0x000625c8) mup_progress_pane_cp04

0xcd8b,	// (0x000625d4) mp4_rocker_pane_g1

0x7ede,	// (0x0005d727) aid_cell_size_keypad2_ParamLimits

0x7ede,	// (0x0005d727) aid_cell_size_keypad2

0x7ef4,	// (0x0005d73d) dialer2_ne_pane_ParamLimits

0x7ef4,	// (0x0005d73d) dialer2_ne_pane

0x7f0c,	// (0x0005d755) grid_dialer2_keypad_pane_ParamLimits

0x7f0c,	// (0x0005d755) grid_dialer2_keypad_pane

0x6b2c,	// (0x0005c375) bg_popup_call_pane_cp07_ParamLimits

0x6b2c,	// (0x0005c375) bg_popup_call_pane_cp07

0x7f28,	// (0x0005d771) dialer2_ne_pane_t1_ParamLimits

0x7f28,	// (0x0005d771) dialer2_ne_pane_t1

0x7f68,	// (0x0005d7b1) cell_dialer2_keypad_pane_ParamLimits

0x7f68,	// (0x0005d7b1) cell_dialer2_keypad_pane

0xcda7,	// (0x000625f0) bg_button_pane_pane_cp04_ParamLimits

0xcda7,	// (0x000625f0) bg_button_pane_pane_cp04

0x7f8e,	// (0x0005d7d7) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f8e,	// (0x0005d7d7) cell_dialer2_keypad_pane_g1

0x3c38,	// (0x00059481) aid_placing_vt_set_content_ParamLimits

0x3c38,	// (0x00059481) aid_placing_vt_set_content

0x3c58,	// (0x000594a1) aid_placing_vt_set_title_ParamLimits

0x3c58,	// (0x000594a1) aid_placing_vt_set_title

0xb4d1,	// (0x00060d1a) main_image3_pane

0x8054,	// (0x0005d89d) area_side_right_pane_cp01_ParamLimits

0x8054,	// (0x0005d89d) area_side_right_pane_cp01

0xeda8,	// (0x000645f1) main_image3_pane_g1_ParamLimits

0xeda8,	// (0x000645f1) main_image3_pane_g1

0x806d,	// (0x0005d8b6) main_image3_pane_g2_ParamLimits

0x806d,	// (0x0005d8b6) main_image3_pane_g2

0x8095,	// (0x0005d8de) main_image3_pane_g3_ParamLimits

0x8095,	// (0x0005d8de) main_image3_pane_g3

0x80bf,	// (0x0005d908) main_image3_pane_g4_ParamLimits

0x80bf,	// (0x0005d908) main_image3_pane_g4

0x0003,

0xf921,	// (0x0006516a) main_image3_pane_g_ParamLimits

0xf921,	// (0x0006516a) main_image3_pane_g

0x80e9,	// (0x0005d932) main_image3_pane_t1_ParamLimits

0x80e9,	// (0x0005d932) main_image3_pane_t1

0x8141,	// (0x0005d98a) main_image3_pane_t2_ParamLimits

0x8141,	// (0x0005d98a) main_image3_pane_t2

0x8193,	// (0x0005d9dc) main_image3_pane_t3_ParamLimits

0x8193,	// (0x0005d9dc) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00065173) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00065173) main_image3_pane_t

0x1c38,	// (0x00057481) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c38,	// (0x00057481) grid_sctrl_middle_pane_cp01

0x821b,	// (0x0005da64) cell_sctrl_middle_pane_cp01_ParamLimits

0x821b,	// (0x0005da64) cell_sctrl_middle_pane_cp01

0x8238,	// (0x0005da81) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8238,	// (0x0005da81) cell_sctrl_middle_pane_cp01_g1

0xb4d1,	// (0x00060d1a) main_call4_pane

0x824d,	// (0x0005da96) aid_size_button_call4_ParamLimits

0x824d,	// (0x0005da96) aid_size_button_call4

0x8280,	// (0x0005dac9) call4_windows_pane_ParamLimits

0x8280,	// (0x0005dac9) call4_windows_pane

0x82a2,	// (0x0005daeb) grid_call4_button_pane_ParamLimits

0x82a2,	// (0x0005daeb) grid_call4_button_pane

0xcdb3,	// (0x000625fc) call4_windows_conf_pane

0xcdce,	// (0x00062617) popup_call4_audio_first_window_ParamLimits

0xcdce,	// (0x00062617) popup_call4_audio_first_window

0xce1c,	// (0x00062665) popup_call4_audio_second_window_ParamLimits

0xce1c,	// (0x00062665) popup_call4_audio_second_window

0xce32,	// (0x0006267b) popup_call4_audio_wait_window_ParamLimits

0xce32,	// (0x0006267b) popup_call4_audio_wait_window

0x82cd,	// (0x0005db16) cell_call4_button_pane_ParamLimits

0x82cd,	// (0x0005db16) cell_call4_button_pane

0x82f4,	// (0x0005db3d) bg_button_pane_cp09_ParamLimits

0x82f4,	// (0x0005db3d) bg_button_pane_cp09

0x8300,	// (0x0005db49) cell_call4_button_pane_g1_ParamLimits

0x8300,	// (0x0005db49) cell_call4_button_pane_g1

0x8326,	// (0x0005db6f) cell_call4_button_pane_t1_ParamLimits

0x8326,	// (0x0005db6f) cell_call4_button_pane_t1

0xce7a,	// (0x000626c3) popup_call4_audio_conf_window_ParamLimits

0xce7a,	// (0x000626c3) popup_call4_audio_conf_window

0x757f,	// (0x0005cdc8) mup3_progress_pane_t1_ParamLimits

0x7596,	// (0x0005cddf) mup3_progress_pane_t2_ParamLimits

0xc77a,	// (0x00061fc3) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0006504c) mup3_progress_pane_t_ParamLimits

0xc791,	// (0x00061fda) mup_progress_pane_cp03_ParamLimits

0x7b56,	// (0x0005d39f) mup3_control_keys_pane_g4_copy1

0xef20,	// (0x00064769) mp4_rocker2_pane_ParamLimits

0xef20,	// (0x00064769) mp4_rocker2_pane

0xce94,	// (0x000626dd) mp4_rocker2_pane_g1

0xce9c,	// (0x000626e5) mp4_rocker2_pane_g2

0xef92,	// (0x000647db) mp4_rocker2_pane_g3

0xef9a,	// (0x000647e3) mp4_rocker2_pane_g4

0xefa2,	// (0x000647eb) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0006517c) mp4_rocker2_pane_g

0xb4d1,	// (0x00060d1a) main_camera4_pane

0xb4d1,	// (0x00060d1a) main_video4_pane

0x7dcd,	// (0x0005d616) main_video_tele_dialer_pane_t1_ParamLimits

0x7dcd,	// (0x0005d616) main_video_tele_dialer_pane_t1

0x7de6,	// (0x0005d62f) main_video_tele_dialer_pane_t2_ParamLimits

0x7de6,	// (0x0005d62f) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00065136) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00065136) main_video_tele_dialer_pane_t

0x8364,	// (0x0005dbad) cam4_autofocus_pane_ParamLimits

0x8364,	// (0x0005dbad) cam4_autofocus_pane

0x837a,	// (0x0005dbc3) cam4_image_uncrop_pane_ParamLimits

0x837a,	// (0x0005dbc3) cam4_image_uncrop_pane

0x8393,	// (0x0005dbdc) cam4_indicators_pane_ParamLimits

0x8393,	// (0x0005dbdc) cam4_indicators_pane

0x83c2,	// (0x0005dc0b) main_camera4_pane_g1_ParamLimits

0x83c2,	// (0x0005dc0b) main_camera4_pane_g1

0x83ce,	// (0x0005dc17) main_camera4_pane_g2_ParamLimits

0x83ce,	// (0x0005dc17) main_camera4_pane_g2

0x83da,	// (0x0005dc23) main_camera4_pane_g3_ParamLimits

0x83da,	// (0x0005dc23) main_camera4_pane_g3

0x83e6,	// (0x0005dc2f) main_camera4_pane_g4_ParamLimits

0x83e6,	// (0x0005dc2f) main_camera4_pane_g4

0x83f2,	// (0x0005dc3b) main_camera4_pane_g5_ParamLimits

0x83f2,	// (0x0005dc3b) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00065187) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00065187) main_camera4_pane_g

0x840f,	// (0x0005dc58) main_camera4_pane_t1_ParamLimits

0x840f,	// (0x0005dc58) main_camera4_pane_t1

0x8447,	// (0x0005dc90) bg_tb_trans_pane_cp06

0x8455,	// (0x0005dc9e) cam4_indicators_pane_g1

0x8462,	// (0x0005dcab) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00065199) cam4_indicators_pane_g

0x847a,	// (0x0005dcc3) cam4_indicators_pane_t1

0x84a4,	// (0x0005dced) main_video4_pane_g1_ParamLimits

0x84a4,	// (0x0005dced) main_video4_pane_g1

0x84b6,	// (0x0005dcff) main_video4_pane_g2_ParamLimits

0x84b6,	// (0x0005dcff) main_video4_pane_g2

0x84ca,	// (0x0005dd13) main_video4_pane_g3_ParamLimits

0x84ca,	// (0x0005dd13) main_video4_pane_g3

0x84da,	// (0x0005dd23) main_video4_pane_g4_ParamLimits

0x84da,	// (0x0005dd23) main_video4_pane_g4

0x0004,

0xf957,	// (0x000651a0) main_video4_pane_g_ParamLimits

0xf957,	// (0x000651a0) main_video4_pane_g

0x84fa,	// (0x0005dd43) vid4_indicators_pane_ParamLimits

0x84fa,	// (0x0005dd43) vid4_indicators_pane

0x852a,	// (0x0005dd73) video4_image_uncrop_cif_pane_ParamLimits

0x852a,	// (0x0005dd73) video4_image_uncrop_cif_pane

0x8544,	// (0x0005dd8d) video4_image_uncrop_nhd_pane_ParamLimits

0x8544,	// (0x0005dd8d) video4_image_uncrop_nhd_pane

0x837a,	// (0x0005dbc3) video4_image_uncrop_vga_pane_ParamLimits

0x837a,	// (0x0005dbc3) video4_image_uncrop_vga_pane

0xefce,	// (0x00064817) bg_tb_trans_pane_cp07

0x8455,	// (0x0005dc9e) vid4_indicators_pane_g1

0x855a,	// (0x0005dda3) vid4_indicators_pane_g2

0x8567,	// (0x0005ddb0) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x000651ab) vid4_indicators_pane_g

0x8580,	// (0x0005ddc9) vid4_indicators_pane_t1

0x8592,	// (0x0005dddb) cam4_autofocus_pane_g1

0x859a,	// (0x0005dde3) cam4_autofocus_pane_g2

0x85a2,	// (0x0005ddeb) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x000651b6) cam4_autofocus_pane_g

0x85aa,	// (0x0005ddf3) cam4_autofocus_pane_g3_copy1

0x7e17,	// (0x0005d660) video_down_pane_cp_t1

0x7e25,	// (0x0005d66e) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0006513b) video_down_pane_cp_t

0x1c38,	// (0x00057481) popup_vitu2_window_ParamLimits

0x1c38,	// (0x00057481) popup_vitu2_window

0x85b2,	// (0x0005ddfb) aid_size_cell2_itu2_ParamLimits

0x85b2,	// (0x0005ddfb) aid_size_cell2_itu2

0x85d8,	// (0x0005de21) aid_size_cell_itu2_ParamLimits

0x85d8,	// (0x0005de21) aid_size_cell_itu2

0x8636,	// (0x0005de7f) bg_popup_window_pane_cp09_ParamLimits

0x8636,	// (0x0005de7f) bg_popup_window_pane_cp09

0x8644,	// (0x0005de8d) field_vitu2_entry_pane_ParamLimits

0x8644,	// (0x0005de8d) field_vitu2_entry_pane

0x866c,	// (0x0005deb5) grid_vitu2_function_pane_ParamLimits

0x866c,	// (0x0005deb5) grid_vitu2_function_pane

0x86bd,	// (0x0005df06) grid_vitu2_itu_pane_ParamLimits

0x86bd,	// (0x0005df06) grid_vitu2_itu_pane

0x8748,	// (0x0005df91) cell_vitu2_itu_pane_ParamLimits

0x8748,	// (0x0005df91) cell_vitu2_itu_pane

0x876e,	// (0x0005dfb7) cell_vitu2_function_pane_ParamLimits

0x876e,	// (0x0005dfb7) cell_vitu2_function_pane

0xcea4,	// (0x000626ed) bg_popup_call_pane_cp08_ParamLimits

0xcea4,	// (0x000626ed) bg_popup_call_pane_cp08

0xcebd,	// (0x00062706) field_vitu2_entry_pane_g1

0xcec9,	// (0x00062712) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x000651bd) field_vitu2_entry_pane_g

0xcee3,	// (0x0006272c) field_vitu2_entry_pane_t1_ParamLimits

0xcee3,	// (0x0006272c) field_vitu2_entry_pane_t1

0xcf00,	// (0x00062749) field_vitu2_entry_pane_t2_ParamLimits

0xcf00,	// (0x00062749) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x000651c4) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x000651c4) field_vitu2_entry_pane_t

0x87b2,	// (0x0005dffb) bg_button_pane_cp010_ParamLimits

0x87b2,	// (0x0005dffb) bg_button_pane_cp010

0x87c0,	// (0x0005e009) cell_vitu2_itu_pane_g1

0x87de,	// (0x0005e027) cell_vitu2_itu_pane_t1_ParamLimits

0x87de,	// (0x0005e027) cell_vitu2_itu_pane_t1

0x2bd6,	// (0x0005841f) cell_vitu2_itu_pane_t2_ParamLimits

0x2bd6,	// (0x0005841f) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x000651ce) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x000651ce) cell_vitu2_itu_pane_t

0xefe6,	// (0x0006482f) bg_button_pane_cp011

0x8844,	// (0x0005e08d) cell_vitu2_function_pane_g1

0xb4d1,	// (0x00060d1a) main_myfav_hc_pane

0x81e3,	// (0x0005da2c) popup_image3_note_pane_ParamLimits

0x81e3,	// (0x0005da2c) popup_image3_note_pane

0x81ff,	// (0x0005da48) popup_image3_tool_bar_pane_ParamLimits

0x81ff,	// (0x0005da48) popup_image3_tool_bar_pane

0x2c5a,	// (0x000584a3) cell_vitu2_itu_pane_t3_ParamLimits

0x2c5a,	// (0x000584a3) cell_vitu2_itu_pane_t3

0xb4d1,	// (0x00060d1a) bg_popup_trans_pane

0xcf25,	// (0x0006276e) grid_image3_tool_bar_pane

0xcf2f,	// (0x00062778) bg_popup_trans_pane_g1

0xc191,	// (0x000619da) bg_popup_trans_pane_g2

0xcf37,	// (0x00062780) bg_popup_trans_pane_g3

0xcf3f,	// (0x00062788) bg_popup_trans_pane_g4

0xcf47,	// (0x00062790) bg_popup_trans_pane_g5

0xcf4f,	// (0x00062798) bg_popup_trans_pane_g6

0xcf57,	// (0x000627a0) bg_popup_trans_pane_g7

0xcf5f,	// (0x000627a8) bg_popup_trans_pane_g8

0xc171,	// (0x000619ba) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x000651d5) bg_popup_trans_pane_g

0xcf67,	// (0x000627b0) cell_image3_tool_bar_pane_ParamLimits

0xcf67,	// (0x000627b0) cell_image3_tool_bar_pane

0xc45b,	// (0x00061ca4) cell_image3_tool_bar_pane_g1

0xb4d1,	// (0x00060d1a) bg_popup_trans_pane_cp1

0xcf7d,	// (0x000627c6) popup_image3_note_pane_t1

0xcf8b,	// (0x000627d4) popup_image3_note_pane_t2

0xcf99,	// (0x000627e2) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x000651e8) popup_image3_note_pane_t

0xcfa9,	// (0x000627f2) popup_image3_note_pane_t3_copy1

0x8858,	// (0x0005e0a1) bg_myfav_hc_instruction_pane_ParamLimits

0x8858,	// (0x0005e0a1) bg_myfav_hc_instruction_pane

0x8870,	// (0x0005e0b9) cell_myfav_contact_pane_ParamLimits

0x8870,	// (0x0005e0b9) cell_myfav_contact_pane

0x888c,	// (0x0005e0d5) cell_myfav_contact_pane_cp1_ParamLimits

0x888c,	// (0x0005e0d5) cell_myfav_contact_pane_cp1

0x88a4,	// (0x0005e0ed) cell_myfav_contact_pane_cp2_ParamLimits

0x88a4,	// (0x0005e0ed) cell_myfav_contact_pane_cp2

0x88bc,	// (0x0005e105) cell_myfav_contact_pane_cp3_ParamLimits

0x88bc,	// (0x0005e105) cell_myfav_contact_pane_cp3

0x88d3,	// (0x0005e11c) cell_myfav_contact_pane_cp4_ParamLimits

0x88d3,	// (0x0005e11c) cell_myfav_contact_pane_cp4

0x88eb,	// (0x0005e134) cell_myfav_contact_pane_cp5_ParamLimits

0x88eb,	// (0x0005e134) cell_myfav_contact_pane_cp5

0x88ff,	// (0x0005e148) cell_myfav_contact_pane_cp6_ParamLimits

0x88ff,	// (0x0005e148) cell_myfav_contact_pane_cp6

0x8915,	// (0x0005e15e) cell_myfav_contact_pane_cp7_ParamLimits

0x8915,	// (0x0005e15e) cell_myfav_contact_pane_cp7

0xcfb7,	// (0x00062800) listscroll_gen_pane_cp05

0x892d,	// (0x0005e176) main_myfav_hc_pane_g1_ParamLimits

0x892d,	// (0x0005e176) main_myfav_hc_pane_g1

0x8947,	// (0x0005e190) main_myfav_hc_pane_g2_ParamLimits

0x8947,	// (0x0005e190) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x000651ef) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x000651ef) main_myfav_hc_pane_g

0x897b,	// (0x0005e1c4) main_myfav_hc_pane_t1_ParamLimits

0x897b,	// (0x0005e1c4) main_myfav_hc_pane_t1

0xcfc0,	// (0x00062809) main_myfav_hc_pane_t2_ParamLimits

0xcfc0,	// (0x00062809) main_myfav_hc_pane_t2

0xcfd2,	// (0x0006281b) main_myfav_hc_pane_t3_ParamLimits

0xcfd2,	// (0x0006281b) main_myfav_hc_pane_t3

0x8992,	// (0x0005e1db) main_myfav_hc_pane_t4_ParamLimits

0x8992,	// (0x0005e1db) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x000651f6) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x000651f6) main_myfav_hc_pane_t

0xc45b,	// (0x00061ca4) bg_myfav_hc_instruction_pane_g1

0xcfe4,	// (0x0006282d) cell_myfav_contact_pane_g1_ParamLimits

0xcfe4,	// (0x0006282d) cell_myfav_contact_pane_g1

0xcfe4,	// (0x0006282d) cell_myfav_contact_pane_g2_ParamLimits

0xcfe4,	// (0x0006282d) cell_myfav_contact_pane_g2

0xcff0,	// (0x00062839) cell_myfav_contact_pane_g3_ParamLimits

0xcff0,	// (0x00062839) cell_myfav_contact_pane_g3

0xc764,	// (0x00061fad) cell_myfav_contact_pane_g4_ParamLimits

0xc764,	// (0x00061fad) cell_myfav_contact_pane_g4

0xcffd,	// (0x00062846) cell_myfav_contact_pane_g5_ParamLimits

0xcffd,	// (0x00062846) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00065201) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00065201) cell_myfav_contact_pane_g

0x8961,	// (0x0005e1aa) main_myfav_hc_pane_g3_ParamLimits

0x8961,	// (0x0005e1aa) main_myfav_hc_pane_g3

0x2e2b,	// (0x00058674) popup_adpt_find_window

0x89bc,	// (0x0005e205) afind_page_pane_ParamLimits

0x89bc,	// (0x0005e205) afind_page_pane

0x89d1,	// (0x0005e21a) aid_size_cell_afind_ParamLimits

0x89d1,	// (0x0005e21a) aid_size_cell_afind

0x89ef,	// (0x0005e238) bg_popup_sub_pane_cp09_ParamLimits

0x89ef,	// (0x0005e238) bg_popup_sub_pane_cp09

0x89fc,	// (0x0005e245) find_pane_cp01_ParamLimits

0x89fc,	// (0x0005e245) find_pane_cp01

0xd009,	// (0x00062852) grid_afind_control_pane_ParamLimits

0xd009,	// (0x00062852) grid_afind_control_pane

0x8a09,	// (0x0005e252) grid_afind_pane_ParamLimits

0x8a09,	// (0x0005e252) grid_afind_pane

0x8a2b,	// (0x0005e274) cell_afind_pane_ParamLimits

0x8a2b,	// (0x0005e274) cell_afind_pane

0xc45b,	// (0x00061ca4) afind_page_pane_g1

0x8a92,	// (0x0005e2db) afind_page_pane_g2

0x8a9b,	// (0x0005e2e4) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0006520c) afind_page_pane_g

0x8aa4,	// (0x0005e2ed) afind_page_pane_t1

0xd01d,	// (0x00062866) cell_afind_grid_control_pane_ParamLimits

0xd01d,	// (0x00062866) cell_afind_grid_control_pane

0xcda7,	// (0x000625f0) bg_button_pane_cp69_ParamLimits

0xcda7,	// (0x000625f0) bg_button_pane_cp69

0x8ac4,	// (0x0005e30d) cell_afind_pane_g1_ParamLimits

0x8ac4,	// (0x0005e30d) cell_afind_pane_g1

0x8ad1,	// (0x0005e31a) cell_afind_pane_t1_ParamLimits

0x8ad1,	// (0x0005e31a) cell_afind_pane_t1

0xbf80,	// (0x000617c9) bg_button_pane_cp72

0xd02c,	// (0x00062875) cell_afind_grid_control_pane_g1

0x5871,	// (0x0005b0ba) aid_image_placing_area_ParamLimits

0x5871,	// (0x0005b0ba) aid_image_placing_area

0xca69,	// (0x000622b2) field_vitu_entry_pane_g1_ParamLimits

0xca69,	// (0x000622b2) field_vitu_entry_pane_g1

0xca75,	// (0x000622be) field_vitu_entry_pane_g2_ParamLimits

0xca75,	// (0x000622be) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x000650c6) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x000650c6) field_vitu_entry_pane_g

0x7c25,	// (0x0005d46e) cell_vitu_itu_pane_g1_ParamLimits

0x7c67,	// (0x0005d4b0) cell_vitu_itu_pane_t3_ParamLimits

0x7c67,	// (0x0005d4b0) cell_vitu_itu_pane_t3

0xcd4d,	// (0x00062596) mp4_progress_pane_t1_ParamLimits

0xcd66,	// (0x000625af) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0006515b) mp4_progress_pane_t_ParamLimits

0xcd7f,	// (0x000625c8) mup_progress_pane_cp04_ParamLimits

0x89a6,	// (0x0005e1ef) main_myfav_hc_pane_t5_ParamLimits

0x89a6,	// (0x0005e1ef) main_myfav_hc_pane_t5

0xb4ef,	// (0x00060d38) aid_zoom_text_primary

0x2e2b,	// (0x00058674) popup_adpt_find_window_ParamLimits

0x1c38,	// (0x00057481) main_cam_set_pane

0x83ac,	// (0x0005dbf5) cam4_zoom_pane_ParamLimits

0x83ac,	// (0x0005dbf5) cam4_zoom_pane

0x8ae3,	// (0x0005e32c) main_cam_set_pane_g1_ParamLimits

0x8ae3,	// (0x0005e32c) main_cam_set_pane_g1

0x8af1,	// (0x0005e33a) main_cam_set_pane_g2_ParamLimits

0x8af1,	// (0x0005e33a) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00065213) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00065213) main_cam_set_pane_g

0x8b14,	// (0x0005e35d) main_cam_set_pane_t1_ParamLimits

0x8b14,	// (0x0005e35d) main_cam_set_pane_t1

0x8b2f,	// (0x0005e378) main_cset_listscroll_pane_ParamLimits

0x8b2f,	// (0x0005e378) main_cset_listscroll_pane

0x8b53,	// (0x0005e39c) main_cset_slider_pane_ParamLimits

0x8b53,	// (0x0005e39c) main_cset_slider_pane

0xd03d,	// (0x00062886) main_cset_list_pane_ParamLimits

0xd03d,	// (0x00062886) main_cset_list_pane

0xd04d,	// (0x00062896) scroll_pane_cp028

0x8b7d,	// (0x0005e3c6) aid_area_touch_slider

0x8b99,	// (0x0005e3e2) cset_slider_pane

0x8bc3,	// (0x0005e40c) main_cset_slider_pane_g1

0x8bd8,	// (0x0005e421) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00065218) main_cset_slider_pane_g

0xd086,	// (0x000628cf) main_cset_slider_pane_t1

0x8c9a,	// (0x0005e4e3) main_cset_slider_pane_t2

0x8cb4,	// (0x0005e4fd) main_cset_slider_pane_t3

0x8cce,	// (0x0005e517) main_cset_slider_pane_t4

0x8ce8,	// (0x0005e531) main_cset_slider_pane_t5

0x8d06,	// (0x0005e54f) main_cset_slider_pane_t6

0x8d1d,	// (0x0005e566) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0006523d) main_cset_slider_pane_t

0x8e29,	// (0x0005e672) cset_list_set_pane_ParamLimits

0x8e29,	// (0x0005e672) cset_list_set_pane

0x8e3d,	// (0x0005e686) aid_position_infowindow_above

0x8e45,	// (0x0005e68e) aid_position_infowindow_below

0xd126,	// (0x0006296f) cset_list_set_pane_g1_ParamLimits

0xd126,	// (0x0006296f) cset_list_set_pane_g1

0x8e4d,	// (0x0005e696) cset_list_set_pane_g3_ParamLimits

0x8e4d,	// (0x0005e696) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0006525c) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0006525c) cset_list_set_pane_g

0xd132,	// (0x0006297b) cset_list_set_pane_t1_ParamLimits

0xd132,	// (0x0006297b) cset_list_set_pane_t1

0x1c38,	// (0x00057481) list_highlight_pane_cp021_ParamLimits

0x1c38,	// (0x00057481) list_highlight_pane_cp021

0x0957,	// (0x000561a0) cset_slider_pane_g1

0x0969,	// (0x000561b2) cset_slider_pane_g2

0x0960,	// (0x000561a9) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00065261) cset_slider_pane_g

0xeff4,	// (0x0006483d) aid_area_touch_cam4_zoom

0xeffc,	// (0x00064845) cam4_zoom_cont_pane

0xf004,	// (0x0006484d) cam4_zoom_pane_g1

0xf00c,	// (0x00064855) cam4_zoom_pane_g2

0x8e5c,	// (0x0005e6a5) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00065268) cam4_zoom_pane_g

0xf014,	// (0x0006485d) cam4_zoom_cont_pane_g1

0xf01d,	// (0x00064866) cam4_zoom_cont_pane_g2

0xf026,	// (0x0006486f) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0006526f) cam4_zoom_cont_pane_g

0x826b,	// (0x0005dab4) call4_image_pane_ParamLimits

0x826b,	// (0x0005dab4) call4_image_pane

0xcdb3,	// (0x000625fc) call4_windows_conf_pane_ParamLimits

0xcdfa,	// (0x00062643) popup_call4_audio_in_window_ParamLimits

0xcdfa,	// (0x00062643) popup_call4_audio_in_window

0xb4d1,	// (0x00060d1a) bg_popup_call2_act_pane_cp02

0xce72,	// (0x000626bb) call4_list_conf_pane

0xc45b,	// (0x00061ca4) call4_image_pane_g1

0xc45b,	// (0x00061ca4) call4_image_pane_g2

0x0001,

0xf743,	// (0x00064f8c) call4_image_pane_g

0xd147,	// (0x00062990) list_single_graphic_popup_conf4_pane_ParamLimits

0xd147,	// (0x00062990) list_single_graphic_popup_conf4_pane

0xb4d1,	// (0x00060d1a) list_highlight_pane_cp022

0xd15c,	// (0x000629a5) list_single_graphic_popup_conf4_pane_g1

0x0651,	// (0x00055e9a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00065276) list_single_graphic_popup_conf4_pane_g

0xd164,	// (0x000629ad) list_single_graphic_popup_conf4_pane_t1

0x3d2c,	// (0x00059575) popup_vtel_slider_window_ParamLimits

0x3d2c,	// (0x00059575) popup_vtel_slider_window

0xcd95,	// (0x000625de) dialer2_ne_pane_t2_ParamLimits

0xcd95,	// (0x000625de) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00065160) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00065160) dialer2_ne_pane_t

0x6b2c,	// (0x0005c375) bg_popup_sub_pane_cp010_ParamLimits

0x6b2c,	// (0x0005c375) bg_popup_sub_pane_cp010

0x8e64,	// (0x0005e6ad) popup_vtel_slider_window_g1_ParamLimits

0x8e64,	// (0x0005e6ad) popup_vtel_slider_window_g1

0x8e77,	// (0x0005e6c0) popup_vtel_slider_window_g2_ParamLimits

0x8e77,	// (0x0005e6c0) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0006527b) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0006527b) popup_vtel_slider_window_g

0x8ecd,	// (0x0005e716) vtel_slider_pane_ParamLimits

0x8ecd,	// (0x0005e716) vtel_slider_pane

0x8eef,	// (0x0005e738) vtel_slider_pane_g1_ParamLimits

0x8eef,	// (0x0005e738) vtel_slider_pane_g1

0x8f03,	// (0x0005e74c) vtel_slider_pane_g2_ParamLimits

0x8f03,	// (0x0005e74c) vtel_slider_pane_g2

0x8f1b,	// (0x0005e764) vtel_slider_pane_g3_ParamLimits

0x8f1b,	// (0x0005e764) vtel_slider_pane_g3

0x8eef,	// (0x0005e738) vtel_slider_pane_g4_ParamLimits

0x8eef,	// (0x0005e738) vtel_slider_pane_g4

0x8f31,	// (0x0005e77a) vtel_slider_pane_g5_ParamLimits

0x8f31,	// (0x0005e77a) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00065284) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00065284) vtel_slider_pane_g

0xb4d1,	// (0x00060d1a) main_gallery2_pane

0x8604,	// (0x0005de4d) aid_size_row_itut2_dropdow_list_ParamLimits

0x8604,	// (0x0005de4d) aid_size_row_itut2_dropdow_list

0x8694,	// (0x0005dedd) grid_vitu2_function_top_pane_ParamLimits

0x8694,	// (0x0005dedd) grid_vitu2_function_top_pane

0x86f3,	// (0x0005df3c) popup_vitu2_dropdown_list_window_ParamLimits

0x86f3,	// (0x0005df3c) popup_vitu2_dropdown_list_window

0x871c,	// (0x0005df65) popup_vitu2_match_list_window

0x8f47,	// (0x0005e790) cell_vitu2_function_top_pane_ParamLimits

0x8f47,	// (0x0005e790) cell_vitu2_function_top_pane

0x8f67,	// (0x0005e7b0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8f67,	// (0x0005e7b0) cell_vitu2_function_top_pane_cp01

0x8f85,	// (0x0005e7ce) cell_vitu2_function_top_wide_pane_ParamLimits

0x8f85,	// (0x0005e7ce) cell_vitu2_function_top_wide_pane

0xefe6,	// (0x0006482f) bg_button_pane_cp012

0x8fa3,	// (0x0005e7ec) cell_vitu2_function_top_pane_g1

0xf02f,	// (0x00064878) bg_button_pane_cp013_ParamLimits

0xf02f,	// (0x00064878) bg_button_pane_cp013

0x8fb7,	// (0x0005e800) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8fb7,	// (0x0005e800) cell_vitu2_function_top_wide_pane_g1

0xefe6,	// (0x0006482f) bg_popup_sub_pane_cp20

0x8fcf,	// (0x0005e818) list_vitu2_match_list_pane

0xcf2f,	// (0x00062778) bg_popup_sub_pane_cp20_g1

0xcf37,	// (0x00062780) bg_popup_sub_pane_cp20_g2

0xc191,	// (0x000619da) bg_popup_sub_pane_cp20_g3

0xcf3f,	// (0x00062788) bg_popup_sub_pane_cp20_g4

0xc171,	// (0x000619ba) bg_popup_sub_pane_cp20_g5

0xd180,	// (0x000629c9) bg_popup_sub_pane_cp20_g6

0xcf4f,	// (0x00062798) bg_popup_sub_pane_cp20_g7

0xcf57,	// (0x000627a0) bg_popup_sub_pane_cp20_g8

0xcf5f,	// (0x000627a8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0006528f) bg_popup_sub_pane_cp20_g

0xf04b,	// (0x00064894) list_vitu2_match_list_item_pane_ParamLimits

0xf04b,	// (0x00064894) list_vitu2_match_list_item_pane

0xf05d,	// (0x000648a6) list_vitu2_match_list_item_pane_t1

0xbc7b,	// (0x000614c4) bg_popup_sub_pane_cp21

0xf06b,	// (0x000648b4) grid_vitu2_dropdown_list_pane

0x9019,	// (0x0005e862) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9019,	// (0x0005e862) cell_vitu2_dropdown_list_char_pane

0x903c,	// (0x0005e885) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x903c,	// (0x0005e885) cell_vitu2_dropdown_list_ctrl_pane

0xd1a0,	// (0x000629e9) cell_vitu2_dropdown_list_char_pane_g1

0xd1a9,	// (0x000629f2) cell_vitu2_dropdown_list_char_pane_g2

0xd1b2,	// (0x000629fb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x000652ac) cell_vitu2_dropdown_list_char_pane_g

0x906a,	// (0x0005e8b3) cell_vitu2_dropdown_list_char_pane_t1

0x9078,	// (0x0005e8c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9078,	// (0x0005e8c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9088,	// (0x0005e8d1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9088,	// (0x0005e8d1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9099,	// (0x0005e8e2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9099,	// (0x0005e8e2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x90a9,	// (0x0005e8f2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x90a9,	// (0x0005e8f2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf073,	// (0x000648bc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf073,	// (0x000648bc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x000652b3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x000652b3) cell_vitu2_dropdown_list_ctrl_pane_g

0x90c5,	// (0x0005e90e) aid_size_cell_gallery2_ParamLimits

0x90c5,	// (0x0005e90e) aid_size_cell_gallery2

0x90db,	// (0x0005e924) grid_gallery2_pane_ParamLimits

0x90db,	// (0x0005e924) grid_gallery2_pane

0x90ef,	// (0x0005e938) scroll_pane_cp029_ParamLimits

0x90ef,	// (0x0005e938) scroll_pane_cp029

0x90fb,	// (0x0005e944) cell_gallery2_pane_ParamLimits

0x90fb,	// (0x0005e944) cell_gallery2_pane

0xd1bb,	// (0x00062a04) cell_gallery2_pane_g2

0x9135,	// (0x0005e97e) cell_gallery2_pane_g3

0xd1c5,	// (0x00062a0e) cell_gallery2_pane_g4

0xd1cd,	// (0x00062a16) cell_gallery2_pane_g5

0x081f,	// (0x00056068) grid_highlight_pane_cp10

0x871c,	// (0x0005df65) popup_vitu2_match_list_window_ParamLimits

0x8733,	// (0x0005df7c) popup_vitu2_query_window_ParamLimits

0x8733,	// (0x0005df7c) popup_vitu2_query_window

0xbc7b,	// (0x000614c4) bg_vitu2_candi_button_pane

0xd1a0,	// (0x000629e9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1a9,	// (0x000629f2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1b2,	// (0x000629fb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x913d,	// (0x0005e986) bg_button_pane_cp015

0x9147,	// (0x0005e990) bg_button_pane_cp016

0x9151,	// (0x0005e99a) bg_button_pane_cp017

0x1c38,	// (0x00057481) bg_popup_sub_pane_cp22

0xd1d5,	// (0x00062a1e) popup_vitu2_query_window_g1

0x9179,	// (0x0005e9c2) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x000652be) popup_vitu2_query_window_g

0x9187,	// (0x0005e9d0) popup_vitu2_query_window_t1_ParamLimits

0x9187,	// (0x0005e9d0) popup_vitu2_query_window_t1

0x91af,	// (0x0005e9f8) popup_vitu2_query_window_t2_ParamLimits

0x91af,	// (0x0005e9f8) popup_vitu2_query_window_t2

0x91c1,	// (0x0005ea0a) popup_vitu2_query_window_t3_ParamLimits

0x91c1,	// (0x0005ea0a) popup_vitu2_query_window_t3

0x91e9,	// (0x0005ea32) popup_vitu2_query_window_t4_ParamLimits

0x91e9,	// (0x0005ea32) popup_vitu2_query_window_t4

0x91fd,	// (0x0005ea46) popup_vitu2_query_window_t5_ParamLimits

0x91fd,	// (0x0005ea46) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x000652c3) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x000652c3) popup_vitu2_query_window_t

0xd035,	// (0x0006287e) main_cset_text_pane

0x8b7d,	// (0x0005e3c6) aid_area_touch_slider_ParamLimits

0x8b99,	// (0x0005e3e2) cset_slider_pane_ParamLimits

0x8bc3,	// (0x0005e40c) main_cset_slider_pane_g1_ParamLimits

0x8bd8,	// (0x0005e421) main_cset_slider_pane_g2_ParamLimits

0xd056,	// (0x0006289f) main_cset_slider_pane_g3_ParamLimits

0xd056,	// (0x0006289f) main_cset_slider_pane_g3

0x8bed,	// (0x0005e436) main_cset_slider_pane_g4_ParamLimits

0x8bed,	// (0x0005e436) main_cset_slider_pane_g4

0x8bfc,	// (0x0005e445) main_cset_slider_pane_g5_ParamLimits

0x8bfc,	// (0x0005e445) main_cset_slider_pane_g5

0x8c0a,	// (0x0005e453) main_cset_slider_pane_g6_ParamLimits

0x8c0a,	// (0x0005e453) main_cset_slider_pane_g6

0xf9cf,	// (0x00065218) main_cset_slider_pane_g_ParamLimits

0xd086,	// (0x000628cf) main_cset_slider_pane_t1_ParamLimits

0x8c9a,	// (0x0005e4e3) main_cset_slider_pane_t2_ParamLimits

0x8cb4,	// (0x0005e4fd) main_cset_slider_pane_t3_ParamLimits

0x8cce,	// (0x0005e517) main_cset_slider_pane_t4_ParamLimits

0x8ce8,	// (0x0005e531) main_cset_slider_pane_t5_ParamLimits

0x8d06,	// (0x0005e54f) main_cset_slider_pane_t6_ParamLimits

0x8d1d,	// (0x0005e566) main_cset_slider_pane_t7_ParamLimits

0x8d4b,	// (0x0005e594) main_cset_slider_pane_t8_ParamLimits

0x8d4b,	// (0x0005e594) main_cset_slider_pane_t8

0x8d73,	// (0x0005e5bc) main_cset_slider_pane_t9_ParamLimits

0x8d73,	// (0x0005e5bc) main_cset_slider_pane_t9

0x8d9b,	// (0x0005e5e4) main_cset_slider_pane_t10_ParamLimits

0x8d9b,	// (0x0005e5e4) main_cset_slider_pane_t10

0x8dc3,	// (0x0005e60c) main_cset_slider_pane_t11_ParamLimits

0x8dc3,	// (0x0005e60c) main_cset_slider_pane_t11

0x8ded,	// (0x0005e636) main_cset_slider_pane_t12_ParamLimits

0x8ded,	// (0x0005e636) main_cset_slider_pane_t12

0x8e0a,	// (0x0005e653) main_cset_slider_pane_t13_ParamLimits

0x8e0a,	// (0x0005e653) main_cset_slider_pane_t13

0xf9f4,	// (0x0006523d) main_cset_slider_pane_t_ParamLimits

0xb4d1,	// (0x00060d1a) bg_popup_sub_pane_cp011

0xd1e1,	// (0x00062a2a) main_cset_text_pane_g1

0xd1e9,	// (0x00062a32) main_cset_text_pane_t1

0xd1f7,	// (0x00062a40) main_cset_text_pane_t2

0xd205,	// (0x00062a4e) main_cset_text_pane_t3

0xd213,	// (0x00062a5c) main_cset_text_pane_t4

0xd221,	// (0x00062a6a) main_cset_text_pane_t5

0xd22f,	// (0x00062a78) main_cset_text_pane_t6

0xd23d,	// (0x00062a86) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x000652ce) main_cset_text_pane_t

0xb4d1,	// (0x00060d1a) main_cam4_burst_pane

0xb4d1,	// (0x00060d1a) main_cam5_pane

0x8ab2,	// (0x0005e2fb) bg_button_pane_cp019

0x8abb,	// (0x0005e304) bg_button_pane_cp020

0xd062,	// (0x000628ab) main_cset_slider_pane_g7_ParamLimits

0xd062,	// (0x000628ab) main_cset_slider_pane_g7

0xd06e,	// (0x000628b7) main_cset_slider_pane_g8_ParamLimits

0xd06e,	// (0x000628b7) main_cset_slider_pane_g8

0x8c1e,	// (0x0005e467) main_cset_slider_pane_g9_ParamLimits

0x8c1e,	// (0x0005e467) main_cset_slider_pane_g9

0x8c2a,	// (0x0005e473) main_cset_slider_pane_g10_ParamLimits

0x8c2a,	// (0x0005e473) main_cset_slider_pane_g10

0x8c36,	// (0x0005e47f) main_cset_slider_pane_g11_ParamLimits

0x8c36,	// (0x0005e47f) main_cset_slider_pane_g11

0x8c42,	// (0x0005e48b) main_cset_slider_pane_g12_ParamLimits

0x8c42,	// (0x0005e48b) main_cset_slider_pane_g12

0x8c4e,	// (0x0005e497) main_cset_slider_pane_g13_ParamLimits

0x8c4e,	// (0x0005e497) main_cset_slider_pane_g13

0x8c5a,	// (0x0005e4a3) main_cset_slider_pane_g14_ParamLimits

0x8c5a,	// (0x0005e4a3) main_cset_slider_pane_g14

0x8c66,	// (0x0005e4af) main_cset_slider_pane_g15_ParamLimits

0x8c66,	// (0x0005e4af) main_cset_slider_pane_g15

0xd0b4,	// (0x000628fd) main_cset_slider_pane_t14_ParamLimits

0xd0b4,	// (0x000628fd) main_cset_slider_pane_t14

0xd0ed,	// (0x00062936) main_cset_slider_pane_t15_ParamLimits

0xd0ed,	// (0x00062936) main_cset_slider_pane_t15

0x9211,	// (0x0005ea5a) aid_cam4_burst_size_cell_ParamLimits

0x9211,	// (0x0005ea5a) aid_cam4_burst_size_cell

0x9231,	// (0x0005ea7a) grid_cam4_burst_pane_ParamLimits

0x9231,	// (0x0005ea7a) grid_cam4_burst_pane

0x926b,	// (0x0005eab4) linegrid_cam4_burst_pane_ParamLimits

0x926b,	// (0x0005eab4) linegrid_cam4_burst_pane

0x928f,	// (0x0005ead8) scroll_pane_cp30_ParamLimits

0x928f,	// (0x0005ead8) scroll_pane_cp30

0x929b,	// (0x0005eae4) cell_cam4_burst_pane_ParamLimits

0x929b,	// (0x0005eae4) cell_cam4_burst_pane

0xd24b,	// (0x00062a94) linegrid_cam4_burst_pane_g1_ParamLimits

0xd24b,	// (0x00062a94) linegrid_cam4_burst_pane_g1

0x92f0,	// (0x0005eb39) linegrid_cam4_burst_pane_g2_ParamLimits

0x92f0,	// (0x0005eb39) linegrid_cam4_burst_pane_g2

0xd258,	// (0x00062aa1) linegrid_cam4_burst_pane_g3_ParamLimits

0xd258,	// (0x00062aa1) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x000652dd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x000652dd) linegrid_cam4_burst_pane_g

0x9301,	// (0x0005eb4a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9301,	// (0x0005eb4a) linegrid_cam4_burst_pane_g3_copy1

0xd265,	// (0x00062aae) linegrid_cam4_burst_pane_g4_ParamLimits

0xd265,	// (0x00062aae) linegrid_cam4_burst_pane_g4

0x931f,	// (0x0005eb68) linegrid_cam4_burst_pane_g5_ParamLimits

0x931f,	// (0x0005eb68) linegrid_cam4_burst_pane_g5

0x9330,	// (0x0005eb79) linegrid_cam4_burst_pane_g6_ParamLimits

0x9330,	// (0x0005eb79) linegrid_cam4_burst_pane_g6

0xd272,	// (0x00062abb) linegrid_cam4_burst_pane_g7_ParamLimits

0xd272,	// (0x00062abb) linegrid_cam4_burst_pane_g7

0x9347,	// (0x0005eb90) cell_cam4_burst_pane_g1

0xd28b,	// (0x00062ad4) main_cam5_pane_t1_ParamLimits

0xd28b,	// (0x00062ad4) main_cam5_pane_t1

0xd29d,	// (0x00062ae6) main_cam5_pane_t2_ParamLimits

0xd29d,	// (0x00062ae6) main_cam5_pane_t2

0xd2af,	// (0x00062af8) main_cam5_pane_t3_ParamLimits

0xd2af,	// (0x00062af8) main_cam5_pane_t3

0xd2c1,	// (0x00062b0a) main_cam5_pane_t4_ParamLimits

0xd2c1,	// (0x00062b0a) main_cam5_pane_t4

0xd2d9,	// (0x00062b22) main_cam5_pane_t5_ParamLimits

0xd2d9,	// (0x00062b22) main_cam5_pane_t5

0xd2ed,	// (0x00062b36) main_cam5_pane_t6_ParamLimits

0xd2ed,	// (0x00062b36) main_cam5_pane_t6

0xd301,	// (0x00062b4a) main_cam5_pane_t7_ParamLimits

0xd301,	// (0x00062b4a) main_cam5_pane_t7

0xd313,	// (0x00062b5c) main_cam5_pane_t8_ParamLimits

0xd313,	// (0x00062b5c) main_cam5_pane_t8

0xd331,	// (0x00062b7a) main_cam5_pane_t9_ParamLimits

0xd331,	// (0x00062b7a) main_cam5_pane_t9

0xd343,	// (0x00062b8c) main_cam5_pane_t10_ParamLimits

0xd343,	// (0x00062b8c) main_cam5_pane_t10

0xd355,	// (0x00062b9e) main_cam5_pane_t11_ParamLimits

0xd355,	// (0x00062b9e) main_cam5_pane_t11

0xd369,	// (0x00062bb2) main_cam5_pane_t12_ParamLimits

0xd369,	// (0x00062bb2) main_cam5_pane_t12

0xd380,	// (0x00062bc9) main_cam5_pane_t13_ParamLimits

0xd380,	// (0x00062bc9) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x000652e9) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x000652e9) main_cam5_pane_t

0x2eaf,	// (0x000586f8) popup_scut_keymap_window_ParamLimits

0x2eaf,	// (0x000586f8) popup_scut_keymap_window

0x935a,	// (0x0005eba3) aid_size_cell_brow_shortcut

0x081f,	// (0x00056068) bg_popup_window_pane_cp010

0x9366,	// (0x0005ebaf) grid_scut_pane

0x9372,	// (0x0005ebbb) cell_scut_pane_ParamLimits

0x9372,	// (0x0005ebbb) cell_scut_pane

0x938b,	// (0x0005ebd4) cell_scut_pane_g1

0xd3a3,	// (0x00062bec) cell_scut_pane_t1

0xd3b2,	// (0x00062bfb) cell_scut_pane_t2

0x9394,	// (0x0005ebdd) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00065304) cell_scut_pane_t

0x713c,	// (0x0005c985) main_mup3_pane_g8_ParamLimits

0x713c,	// (0x0005c985) main_mup3_pane_g8

0x861e,	// (0x0005de67) area_vitu2_query_pane_ParamLimits

0x861e,	// (0x0005de67) area_vitu2_query_pane

0x915b,	// (0x0005e9a4) input_focus_pane_cp08

0xd3c1,	// (0x00062c0a) area_vitu2_query_pane_g1

0x93a2,	// (0x0005ebeb) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0006530b) area_vitu2_query_pane_g

0x93b3,	// (0x0005ebfc) area_vitu2_query_pane_t1_ParamLimits

0x93b3,	// (0x0005ebfc) area_vitu2_query_pane_t1

0x93c7,	// (0x0005ec10) area_vitu2_query_pane_t2_ParamLimits

0x93c7,	// (0x0005ec10) area_vitu2_query_pane_t2

0x93db,	// (0x0005ec24) area_vitu2_query_pane_t3_ParamLimits

0x93db,	// (0x0005ec24) area_vitu2_query_pane_t3

0xd3cd,	// (0x00062c16) area_vitu2_query_pane_t4_ParamLimits

0xd3cd,	// (0x00062c16) area_vitu2_query_pane_t4

0xd3f5,	// (0x00062c3e) area_vitu2_query_pane_t5_ParamLimits

0xd3f5,	// (0x00062c3e) area_vitu2_query_pane_t5

0xd41d,	// (0x00062c66) area_vitu2_query_pane_t6_ParamLimits

0xd41d,	// (0x00062c66) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00065310) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00065310) area_vitu2_query_pane_t

0x9403,	// (0x0005ec4c) bg_button_pane_cp018

0x9411,	// (0x0005ec5a) bg_button_pane_cp021

0x941d,	// (0x0005ec66) bg_button_pane_cp022

0x942e,	// (0x0005ec77) input_focus_pane_cp09

0x4d8e,	// (0x0005a5d7) aid_size_touch_mv_arrow_left

0x4db7,	// (0x0005a600) aid_size_touch_mv_arrow_right

0x8c7e,	// (0x0005e4c7) main_cset_slider_pane_g16_ParamLimits

0x8c7e,	// (0x0005e4c7) main_cset_slider_pane_g16

0x8c8c,	// (0x0005e4d5) main_cset_slider_pane_g17_ParamLimits

0x8c8c,	// (0x0005e4d5) main_cset_slider_pane_g17

0x9347,	// (0x0005eb90) cell_cam4_burst_pane_g1_ParamLimits

0xb4d1,	// (0x00060d1a) compa_mode_pane

0x8e87,	// (0x0005e6d0) popup_vtel_slider_window_g3_ParamLimits

0x8e87,	// (0x0005e6d0) popup_vtel_slider_window_g3

0x8e9e,	// (0x0005e6e7) popup_vtel_slider_window_g4_ParamLimits

0x8e9e,	// (0x0005e6e7) popup_vtel_slider_window_g4

0x8eb5,	// (0x0005e6fe) popup_vtel_slider_window_t1_ParamLimits

0x8eb5,	// (0x0005e6fe) popup_vtel_slider_window_t1

0xb4d1,	// (0x00060d1a) main_cl_pane

0x1c64,	// (0x000574ad) popup_imed_adjust2_window_ParamLimits

0x1c2a,	// (0x00057473) bg_tb_trans_pane_cp05_ParamLimits

0xc99e,	// (0x000621e7) popup_imed_adjust2_window_g1_ParamLimits

0xc9ad,	// (0x000621f6) popup_imed_adjust2_window_g2_ParamLimits

0xc9ad,	// (0x000621f6) popup_imed_adjust2_window_g2

0xc9b9,	// (0x00062202) popup_imed_adjust2_window_g3_ParamLimits

0xc9b9,	// (0x00062202) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0006508a) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0006508a) popup_imed_adjust2_window_g

0xc9c5,	// (0x0006220e) popup_imed_adjust2_window_t1_ParamLimits

0xc9dd,	// (0x00062226) slider_imed_adjust_pane_ParamLimits

0xc9f1,	// (0x0006223a) slider_imed_adjust_pane_g1_ParamLimits

0xca01,	// (0x0006224a) slider_imed_adjust_pane_g2_ParamLimits

0xca11,	// (0x0006225a) slider_imed_adjust_pane_g3_ParamLimits

0xca22,	// (0x0006226b) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00065091) slider_imed_adjust_pane_g_ParamLimits

0x834c,	// (0x0005db95) aid_touch_area_cam4_ParamLimits

0x834c,	// (0x0005db95) aid_touch_area_cam4

0xefaa,	// (0x000647f3) battery_pane_cp01

0x8403,	// (0x0005dc4c) main_camera4_pane_g6_ParamLimits

0x8403,	// (0x0005dc4c) main_camera4_pane_g6

0x8426,	// (0x0005dc6f) main_camera4_pane_t2_ParamLimits

0x8426,	// (0x0005dc6f) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00065194) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00065194) main_camera4_pane_t

0x848c,	// (0x0005dcd5) aid_touch_area_vid4_ParamLimits

0x848c,	// (0x0005dcd5) aid_touch_area_vid4

0x84ea,	// (0x0005dd33) main_video4_pane_g5_ParamLimits

0x84ea,	// (0x0005dd33) main_video4_pane_g5

0x8511,	// (0x0005dd5a) vid4_progress_pane_ParamLimits

0x8511,	// (0x0005dd5a) vid4_progress_pane

0xd07a,	// (0x000628c3) main_cset_slider_pane_g18_ParamLimits

0xd07a,	// (0x000628c3) main_cset_slider_pane_g18

0xd27f,	// (0x00062ac8) cell_cam4_burst_pane_g2_ParamLimits

0xd27f,	// (0x00062ac8) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x000652e4) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x000652e4) cell_cam4_burst_pane_g

0xbc9f,	// (0x000614e8) bg_cl_pane_ParamLimits

0xbc9f,	// (0x000614e8) bg_cl_pane

0x943f,	// (0x0005ec88) cl_header_pane_ParamLimits

0x943f,	// (0x0005ec88) cl_header_pane

0x9453,	// (0x0005ec9c) cl_listscroll_pane_ParamLimits

0x9453,	// (0x0005ec9c) cl_listscroll_pane

0xd469,	// (0x00062cb2) bg_cl_pane_g1

0xd471,	// (0x00062cba) bg_cl_pane_g2

0xd479,	// (0x00062cc2) bg_cl_pane_g3

0xd481,	// (0x00062cca) bg_cl_pane_g4

0xd489,	// (0x00062cd2) bg_cl_pane_g5

0xd491,	// (0x00062cda) bg_cl_pane_g6

0xd499,	// (0x00062ce2) bg_cl_pane_g7

0xd4a1,	// (0x00062cea) bg_cl_pane_g8

0xd4a9,	// (0x00062cf2) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0006531f) bg_cl_pane_g

0x9463,	// (0x0005ecac) aid_height_cl_leading_ParamLimits

0x9463,	// (0x0005ecac) aid_height_cl_leading

0x946f,	// (0x0005ecb8) aid_height_cl_text_ParamLimits

0x946f,	// (0x0005ecb8) aid_height_cl_text

0x1c38,	// (0x00057481) bg_cl_header_pane_ParamLimits

0x1c38,	// (0x00057481) bg_cl_header_pane

0x948e,	// (0x0005ecd7) cl_header_pane_g1_ParamLimits

0x948e,	// (0x0005ecd7) cl_header_pane_g1

0x94a4,	// (0x0005eced) cl_header_pane_t1_ParamLimits

0x94a4,	// (0x0005eced) cl_header_pane_t1

0xd4b1,	// (0x00062cfa) cl_list_pane

0xd04d,	// (0x00062896) hc_scroll_pane_cp01

0xc171,	// (0x000619ba) bg_cl_header_pane_g1

0xcf2f,	// (0x00062778) bg_cl_header_pane_g2

0xc191,	// (0x000619da) bg_cl_header_pane_g3

0xcf3f,	// (0x00062788) bg_cl_header_pane_g4

0xcf37,	// (0x00062780) bg_cl_header_pane_g5

0xd180,	// (0x000629c9) bg_cl_header_pane_g6

0xcf57,	// (0x000627a0) bg_cl_header_pane_g7

0xcf5f,	// (0x000627a8) bg_cl_header_pane_g8

0xcf4f,	// (0x00062798) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00065332) bg_cl_header_pane_g

0x94bd,	// (0x0005ed06) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x94bd,	// (0x0005ed06) hc_cl_list_double_graphic_heading_pane

0x94d0,	// (0x0005ed19) hc_cl_list_single_graphic_pane_ParamLimits

0x94d0,	// (0x0005ed19) hc_cl_list_single_graphic_pane

0x94e8,	// (0x0005ed31) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x94e8,	// (0x0005ed31) hc_cl_list_single_graphic_pane_g1

0x94f4,	// (0x0005ed3d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x94f4,	// (0x0005ed3d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00065345) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00065345) hc_cl_list_single_graphic_pane_g

0x9508,	// (0x0005ed51) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9508,	// (0x0005ed51) hc_cl_list_single_graphic_pane_t1

0x94e8,	// (0x0005ed31) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x94e8,	// (0x0005ed31) hc_cl_list_double_graphic_heading_pane_g1

0x951d,	// (0x0005ed66) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x951d,	// (0x0005ed66) hc_cl_list_double_graphic_heading_pane_g2

0x9531,	// (0x0005ed7a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9531,	// (0x0005ed7a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0006534a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0006534a) hc_cl_list_double_graphic_heading_pane_g

0x9545,	// (0x0005ed8e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9545,	// (0x0005ed8e) hc_cl_list_double_graphic_heading_pane_t1

0x955a,	// (0x0005eda3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x955a,	// (0x0005eda3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00065351) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00065351) hc_cl_list_double_graphic_heading_pane_t

0xf089,	// (0x000648d2) vid4_progress_pane_g1

0xf095,	// (0x000648de) vid4_progress_pane_g2

0xf0a1,	// (0x000648ea) vid4_progress_pane_g3

0xf0b0,	// (0x000648f9) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00065356) vid4_progress_pane_g

0xf0ce,	// (0x00064917) vid4_progress_pane_t1

0xf0e4,	// (0x0006492d) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00065361) vid4_progress_pane_t

0xf10f,	// (0x00064958) wait_bar_pane_cp07

0x6b3a,	// (0x0005c383) blid_firmament_pane_ParamLimits

0x6b7d,	// (0x0005c3c6) popup_blid_sat_info2_window_g1

0x6ba1,	// (0x0005c3ea) popup_blid_sat_info2_window_t3

0x6baf,	// (0x0005c3f8) popup_blid_sat_info2_window_t4

0x6bbd,	// (0x0005c406) popup_blid_sat_info2_window_t5

0x6bcb,	// (0x0005c414) popup_blid_sat_info2_window_t6

0x6bdb,	// (0x0005c424) popup_blid_sat_info2_window_t7

0x6be9,	// (0x0005c432) popup_blid_sat_info2_window_t8

0x6bf7,	// (0x0005c440) popup_blid_sat_info2_window_t9

0x6c05,	// (0x0005c44e) popup_blid_sat_info2_window_t10

0xc3db,	// (0x00061c24) aid_firma_cardinal_ParamLimits

0xc3ef,	// (0x00061c38) blid_firmament_pane_t1_ParamLimits

0xc406,	// (0x00061c4f) blid_firmament_pane_t2_ParamLimits

0xc41d,	// (0x00061c66) blid_firmament_pane_t3_ParamLimits

0xc434,	// (0x00061c7d) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00064f83) blid_firmament_pane_t_ParamLimits

0xc44b,	// (0x00061c94) blid_sat_info_pane_ParamLimits

0x1c38,	// (0x00057481) main_cam_set_pane_ParamLimits

0x79d1,	// (0x0005d21a) aid_size_cell_colour_35_ParamLimits

0x79f1,	// (0x0005d23a) aid_size_cell_colour_112_ParamLimits

0x7a11,	// (0x0005d25a) aid_size_cell_effect_ParamLimits

0x1c2a,	// (0x00057473) bg_tb_trans_pane_cp02_ParamLimits

0x037d,	// (0x00055bc6) heading_imed_pane_ParamLimits

0x7a31,	// (0x0005d27a) listscroll_imed_pane_ParamLimits

0x1258,	// (0x00056aa1) popup_call2_audio_first_window_g5_ParamLimits

0x1258,	// (0x00056aa1) popup_call2_audio_first_window_g5

0x7ff6,	// (0x0005d83f) aid_size_touch_image3_arrow_left_ParamLimits

0x7ff6,	// (0x0005d83f) aid_size_touch_image3_arrow_left

0x8022,	// (0x0005d86b) aid_size_touch_image3_arrow_right_ParamLimits

0x8022,	// (0x0005d86b) aid_size_touch_image3_arrow_right

0xf0fa,	// (0x00064943) vid4_progress_pane_t3

0x7d4e,	// (0x0005d597) main_hwr_training_symbol_option_pane_ParamLimits

0x7d4e,	// (0x0005d597) main_hwr_training_symbol_option_pane

0xcc8d,	// (0x000624d6) popup_hwr_training_preview_window_ParamLimits

0xcc8d,	// (0x000624d6) popup_hwr_training_preview_window

0x7d6e,	// (0x0005d5b7) hwr_training_navi_pane_g5_ParamLimits

0x7d6e,	// (0x0005d5b7) hwr_training_navi_pane_g5

0xcf1d,	// (0x00062766) popup_char_count_window

0xefe6,	// (0x0006482f) bg_popup_sub_pane_cp20_ParamLimits

0x8fcf,	// (0x0005e818) list_vitu2_match_list_pane_ParamLimits

0x8fde,	// (0x0005e827) vitu2_page_scroll_pane_ParamLimits

0x8fde,	// (0x0005e827) vitu2_page_scroll_pane

0xd514,	// (0x00062d5d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd514,	// (0x00062d5d) list_single_hwr_training_symbol_option_pane

0xd527,	// (0x00062d70) list_single_hwr_training_symbol_option_pane_g1

0xd52f,	// (0x00062d78) list_single_hwr_training_symbol_option_pane_t1

0xd53d,	// (0x00062d86) bg_button_pane_cp023

0xd546,	// (0x00062d8f) bg_button_pane_cp024

0x9579,	// (0x0005edc2) vitu2_page_scroll_pane_g1

0x9581,	// (0x0005edca) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00065368) vitu2_page_scroll_pane_g

0x958b,	// (0x0005edd4) vitu2_page_scroll_pane_t1

0x6a6a,	// (0x0005c2b3) popup_char_count_window_g1

0xd579,	// (0x00062dc2) popup_char_count_window_g2

0xd582,	// (0x00062dcb) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0006536d) popup_char_count_window_g

0xd58b,	// (0x00062dd4) popup_char_count_window_t1

0xb4d1,	// (0x00060d1a) main_vded2_pane

0xc98a,	// (0x000621d3) aid_size_cell_imed_line

0xc994,	// (0x000621dd) grid_imed_line_width_pane

0x8574,	// (0x0005ddbd) vid4_indicators_pane_g4

0xd599,	// (0x00062de2) cell_imed_line_width_pane_ParamLimits

0xd599,	// (0x00062de2) cell_imed_line_width_pane

0xd5af,	// (0x00062df8) cell_imed_line_width_pane_g1

0xc387,	// (0x00061bd0) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00065374) cell_imed_line_width_pane_g

0x959a,	// (0x0005ede3) main_vded2_pane_g1_ParamLimits

0x959a,	// (0x0005ede3) main_vded2_pane_g1

0x95b5,	// (0x0005edfe) main_vded2_pane_g2_ParamLimits

0x95b5,	// (0x0005edfe) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00065379) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00065379) main_vded2_pane_g

0x95c7,	// (0x0005ee10) vded2_slider_pane_ParamLimits

0x95c7,	// (0x0005ee10) vded2_slider_pane

0x95d7,	// (0x0005ee20) aid_size_touch_vded2_end

0x95e1,	// (0x0005ee2a) aid_size_touch_vded2_playhead

0xd5b8,	// (0x00062e01) aid_size_touch_vded2_start

0xd5c0,	// (0x00062e09) vded2_slider_bg_pane

0xd5c9,	// (0x00062e12) vded2_slider_pane_g1

0xd5d2,	// (0x00062e1b) vded2_slider_pane_g2

0x95eb,	// (0x0005ee34) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0006537e) vded2_slider_pane_g

0xd5da,	// (0x00062e23) vded2_slider_bg_pane_g1

0xd5e3,	// (0x00062e2c) vded2_slider_bg_pane_g2

0xd5ec,	// (0x00062e35) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00065385) vded2_slider_bg_pane_g

0x54ae,	// (0x0005acf7) aid_postcard_touch_down_pane_ParamLimits

0x54ae,	// (0x0005acf7) aid_postcard_touch_down_pane

0x54c6,	// (0x0005ad0f) aid_postcard_touch_up_pane_ParamLimits

0x54c6,	// (0x0005ad0f) aid_postcard_touch_up_pane

0xb4d1,	// (0x00060d1a) main_blid2_pane

0x1c46,	// (0x0005748f) popup_blid2_search_window

0xb4d1,	// (0x00060d1a) blid2_gps_pane

0xb4d1,	// (0x00060d1a) blid2_navig_pane

0xb4d1,	// (0x00060d1a) blid2_search_pane

0xb4d1,	// (0x00060d1a) blid2_tripm_pane

0x95f6,	// (0x0005ee3f) blid2_search_pane_g1_ParamLimits

0x95f6,	// (0x0005ee3f) blid2_search_pane_g1

0x960e,	// (0x0005ee57) blid2_search_pane_t1_ParamLimits

0x960e,	// (0x0005ee57) blid2_search_pane_t1

0x9620,	// (0x0005ee69) aid_size_cell_blid2_gps_ParamLimits

0x9620,	// (0x0005ee69) aid_size_cell_blid2_gps

0x9638,	// (0x0005ee81) blid2_gps_pane_g1_ParamLimits

0x9638,	// (0x0005ee81) blid2_gps_pane_g1

0x964c,	// (0x0005ee95) grid_blid2_satellite_pane_ParamLimits

0x964c,	// (0x0005ee95) grid_blid2_satellite_pane

0x9664,	// (0x0005eead) blid2_navig_pane_g1_ParamLimits

0x9664,	// (0x0005eead) blid2_navig_pane_g1

0x9670,	// (0x0005eeb9) blid2_navig_pane_t1_ParamLimits

0x9670,	// (0x0005eeb9) blid2_navig_pane_t1

0x968b,	// (0x0005eed4) blid2_navig_pane_t2_ParamLimits

0x968b,	// (0x0005eed4) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0006538c) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0006538c) blid2_navig_pane_t

0x96a6,	// (0x0005eeef) blid2_navig_ring_pane_ParamLimits

0x96a6,	// (0x0005eeef) blid2_navig_ring_pane

0x96c1,	// (0x0005ef0a) blid2_speed_pane_ParamLimits

0x96c1,	// (0x0005ef0a) blid2_speed_pane

0x96cd,	// (0x0005ef16) blid2_tripm_pane_g1_ParamLimits

0x96cd,	// (0x0005ef16) blid2_tripm_pane_g1

0x96e8,	// (0x0005ef31) blid2_tripm_pane_g2_ParamLimits

0x96e8,	// (0x0005ef31) blid2_tripm_pane_g2

0x96fc,	// (0x0005ef45) blid2_tripm_pane_g3_ParamLimits

0x96fc,	// (0x0005ef45) blid2_tripm_pane_g3

0x9710,	// (0x0005ef59) blid2_tripm_pane_g4_ParamLimits

0x9710,	// (0x0005ef59) blid2_tripm_pane_g4

0x9724,	// (0x0005ef6d) blid2_tripm_pane_g5_ParamLimits

0x9724,	// (0x0005ef6d) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00065391) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00065391) blid2_tripm_pane_g

0x974a,	// (0x0005ef93) blid2_tripm_pane_t1_ParamLimits

0x974a,	// (0x0005ef93) blid2_tripm_pane_t1

0x9765,	// (0x0005efae) blid2_tripm_pane_t2_ParamLimits

0x9765,	// (0x0005efae) blid2_tripm_pane_t2

0x977e,	// (0x0005efc7) blid2_tripm_pane_t3_ParamLimits

0x977e,	// (0x0005efc7) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0006539e) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0006539e) blid2_tripm_pane_t

0x97c5,	// (0x0005f00e) cell_blid2_satellite_pane_ParamLimits

0x97c5,	// (0x0005f00e) cell_blid2_satellite_pane

0x97e1,	// (0x0005f02a) cell_blid2_satellite_pane_g1

0xd5f5,	// (0x00062e3e) cell_blid2_satellite_pane_t1

0xc45b,	// (0x00061ca4) blid2_speed_pane_g1

0xd603,	// (0x00062e4c) blid2_speed_pane_t1

0xd611,	// (0x00062e5a) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x000653a7) blid2_speed_pane_t

0xc45b,	// (0x00061ca4) blid2_navig_ring_pane_g1

0x97ea,	// (0x0005f033) blid2_navig_ring_pane_g2

0x97f2,	// (0x0005f03b) blid2_navig_ring_pane_g3

0x97fa,	// (0x0005f043) blid2_navig_ring_pane_g4

0x9802,	// (0x0005f04b) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x000653ac) blid2_navig_ring_pane_g

0xb4d1,	// (0x00060d1a) bg_popup_window_pane_cp011

0xd61f,	// (0x00062e68) popup_blid2_search_window_g1

0xd627,	// (0x00062e70) popup_blid2_search_window_t1

0xd635,	// (0x00062e7e) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x000653b7) popup_blid2_search_window_t

0xc080,	// (0x000618c9) main_browser_pane_g1

0xbc9f,	// (0x000614e8) main_browser_pane_ParamLimits

0xefe6,	// (0x0006482f) bg_button_pane_cp011_ParamLimits

0x8844,	// (0x0005e08d) cell_vitu2_function_pane_g1_ParamLimits

0x1c38,	// (0x00057481) bg_popup_sub_pane_cp22_ParamLimits

0x915b,	// (0x0005e9a4) input_focus_pane_cp08_ParamLimits

0x9168,	// (0x0005e9b1) popup_vitu2_query_button_pane_ParamLimits

0x9168,	// (0x0005e9b1) popup_vitu2_query_button_pane

0x913d,	// (0x0005e986) popup_vitu2_query_input_button_pane

0xd1d5,	// (0x00062a1e) popup_vitu2_query_window_g1_ParamLimits

0x9179,	// (0x0005e9c2) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x000652be) popup_vitu2_query_window_g_ParamLimits

0xb4d1,	// (0x00060d1a) bg_button_pane_cp026

0x980a,	// (0x0005f053) popup_vitu2_query_input_button_pane_g1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp025

0xd643,	// (0x00062e8c) popup_vitu2_query_button_pane_t1

0x6e4d,	// (0x0005c696) main_mp3_pane_t6

0x6e5b,	// (0x0005c6a4) popup_slider_window_cp01

0xefbc,	// (0x00064805) cam4_battery_pane

0xefdc,	// (0x00064825) cam4_battery_pane_cp02

0x956f,	// (0x0005edb8) cam4_battery_pane_cp01

0xf081,	// (0x000648ca) cam4_battery_pane_cp03

0xcd8b,	// (0x000625d4) cam4_battery_pane_g1

0xc45b,	// (0x00061ca4) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x000653bc) cam4_battery_pane_g

0x6c13,	// (0x0005c45c) popup_blid_sat_info2_window_t11

0x4d8e,	// (0x0005a5d7) aid_size_touch_mv_arrow_left_ParamLimits

0x4db7,	// (0x0005a600) aid_size_touch_mv_arrow_right_ParamLimits

0x077f,	// (0x00055fc8) navi_pane_g1_ParamLimits

0x4de0,	// (0x0005a629) navi_pane_g2_ParamLimits

0x4e0e,	// (0x0005a657) navi_pane_g3_ParamLimits

0xf44c,	// (0x00064c95) navi_pane_g_ParamLimits

0x4e68,	// (0x0005a6b1) navi_pane_mv_t1_ParamLimits

0x7a3d,	// (0x0005d286) grid_imed_effect_pane_ParamLimits

0xbfc5,	// (0x0006180e) aid_placing_vt_slider_lsc

0xbfcd,	// (0x00061816) aid_placing_vt_slider_prt

0x1c38,	// (0x00057481) bg_tb_trans_pane_cp01_ParamLimits

0xc5ab,	// (0x00061df4) popup_image_details_window_g1_ParamLimits

0xc5be,	// (0x00061e07) popup_image_details_window_g2_ParamLimits

0xc5d3,	// (0x00061e1c) popup_image_details_window_g3_ParamLimits

0xc5d3,	// (0x00061e1c) popup_image_details_window_g3

0xf77f,	// (0x00064fc8) popup_image_details_window_g_ParamLimits

0xc5e7,	// (0x00061e30) popup_image_details_window_t1_ParamLimits

0xc5f9,	// (0x00061e42) popup_image_details_window_t2_ParamLimits

0xc612,	// (0x00061e5b) popup_image_details_window_t3_ParamLimits

0xc626,	// (0x00061e6f) popup_image_details_window_t4_ParamLimits

0xc641,	// (0x00061e8a) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00064fcf) popup_image_details_window_t_ParamLimits

0x947b,	// (0x0005ecc4) cl_header_name_pane_ParamLimits

0x947b,	// (0x0005ecc4) cl_header_name_pane

0x9812,	// (0x0005f05b) cl_header_name_pane_t1_ParamLimits

0x9812,	// (0x0005f05b) cl_header_name_pane_t1

0x9833,	// (0x0005f07c) cl_header_name_pane_t2_ParamLimits

0x9833,	// (0x0005f07c) cl_header_name_pane_t2

0x9875,	// (0x0005f0be) cl_header_name_pane_t3_ParamLimits

0x9875,	// (0x0005f0be) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x000653c1) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x000653c1) cl_header_name_pane_t

0x4e39,	// (0x0005a682) navi_pane_mv_g2_ParamLimits

0xcebd,	// (0x00062706) field_vitu2_entry_pane_g1_ParamLimits

0xcec9,	// (0x00062712) field_vitu2_entry_pane_g2_ParamLimits

0xced5,	// (0x0006271e) field_vitu2_entry_pane_g3_ParamLimits

0xced5,	// (0x0006271e) field_vitu2_entry_pane_g3

0xf974,	// (0x000651bd) field_vitu2_entry_pane_g_ParamLimits

0x87c0,	// (0x0005e009) cell_vitu2_itu_pane_g1_ParamLimits

0x87d0,	// (0x0005e019) cell_vitu2_itu_pane_g2_ParamLimits

0x87d0,	// (0x0005e019) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x000651c9) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x000651c9) cell_vitu2_itu_pane_g

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp05_ParamLimits

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp05

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp03

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp04

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp10_ParamLimits

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp10

0x941d,	// (0x0005ec66) bg_vkb2_func_pane_cp08

0x9403,	// (0x0005ec4c) bg_vkb2_func_pane_cp06

0x9411,	// (0x0005ec5a) bg_vkb2_func_pane_cp07

0xd54f,	// (0x00062d98) bg_vkb2_func_pane_cp11_ParamLimits

0xd54f,	// (0x00062d98) bg_vkb2_func_pane_cp11

0xd564,	// (0x00062dad) bg_vkb2_func_pane_cp12_ParamLimits

0xd564,	// (0x00062dad) bg_vkb2_func_pane_cp12

0xb4d1,	// (0x00060d1a) bg_vkb2_func_pane_cp09

0xcf2f,	// (0x00062778) bg_vkb2_func_pane_g1

0xc191,	// (0x000619da) bg_vkb2_func_pane_g2

0xcf37,	// (0x00062780) bg_vkb2_func_pane_g3

0xcf3f,	// (0x00062788) bg_vkb2_func_pane_g4

0xd180,	// (0x000629c9) bg_vkb2_func_pane_g5

0xcf57,	// (0x000627a0) bg_vkb2_func_pane_g6

0xcf5f,	// (0x000627a8) bg_vkb2_func_pane_g7

0xcf4f,	// (0x00062798) bg_vkb2_func_pane_g8

0xc171,	// (0x000619ba) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x000653c8) bg_vkb2_func_pane_g

0x9738,	// (0x0005ef81) blid2_tripm_pane_g6_ParamLimits

0x9738,	// (0x0005ef81) blid2_tripm_pane_g6

0xcd45,	// (0x0006258e) mp4_progress_pane_g1

0x97b1,	// (0x0005effa) blid2_tripm_values_pane_ParamLimits

0x97b1,	// (0x0005effa) blid2_tripm_values_pane

0x98a6,	// (0x0005f0ef) blid2_tripm_values_pane_t1

0x98b4,	// (0x0005f0fd) blid2_tripm_values_pane_t2

0x98c2,	// (0x0005f10b) blid2_tripm_values_pane_t3

0x98d0,	// (0x0005f119) blid2_tripm_values_pane_t4

0x98de,	// (0x0005f127) blid2_tripm_values_pane_t5

0x98ec,	// (0x0005f135) blid2_tripm_values_pane_t6

0x98fa,	// (0x0005f143) blid2_tripm_values_pane_t7

0x9908,	// (0x0005f151) blid2_tripm_values_pane_t8

0x9916,	// (0x0005f15f) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x000653db) blid2_tripm_values_pane_t

0x3ca2,	// (0x000594eb) call_video_pane_t1_ParamLimits

0x3cb4,	// (0x000594fd) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00064b1e) call_video_pane_t_ParamLimits

0x53b1,	// (0x0005abfa) msg_header_pane_g1_ParamLimits

0x099c,	// (0x000561e5) msg_header_pane_g2_ParamLimits

0x099c,	// (0x000561e5) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00064d38) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00064d38) msg_header_pane_g

0xbc9f,	// (0x000614e8) main_clock2_pane_ParamLimits

0x774b,	// (0x0005cf94) grid_clock2_toolbar_pane_ParamLimits

0x774b,	// (0x0005cf94) grid_clock2_toolbar_pane

0x774b,	// (0x0005cf94) listscroll_clock2_pane_ParamLimits

0x774b,	// (0x0005cf94) listscroll_clock2_pane

0x782f,	// (0x0005d078) main_clock2_pane_t3_ParamLimits

0x782f,	// (0x0005d078) main_clock2_pane_t3

0x784a,	// (0x0005d093) main_clock2_pane_t4_ParamLimits

0x784a,	// (0x0005d093) main_clock2_pane_t4

0xd651,	// (0x00062e9a) cell_clock2_toolbar_pane

0xd659,	// (0x00062ea2) cell_clock2_toolbar_pane_cp01

0xd659,	// (0x00062ea2) cell_clock2_toolbar_pane_cp02

0xd661,	// (0x00062eaa) cell_clock2_toolbar_pane_cp03

0xd669,	// (0x00062eb2) list_clock2_pane

0x06e5,	// (0x00055f2e) scroll_pane_cp10

0xd671,	// (0x00062eba) list_single_clock2_pane_ParamLimits

0xd671,	// (0x00062eba) list_single_clock2_pane

0x081f,	// (0x00056068) list_highlight_pane_cp08

0xd67e,	// (0x00062ec7) list_single_clock2_pane_t1

0xd68c,	// (0x00062ed5) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x000653ee) list_single_clock2_pane_t

0xb4d1,	// (0x00060d1a) bg_button_pane_cp10

0xd69a,	// (0x00062ee3) cell_clock2_toolbar_pane_g1

0x543a,	// (0x0005ac83) aid_main_viewer_pane_g1_ParamLimits

0x543a,	// (0x0005ac83) aid_main_viewer_pane_g1

0x5448,	// (0x0005ac91) aid_main_viewer_pane_g2_ParamLimits

0x5448,	// (0x0005ac91) aid_main_viewer_pane_g2

0x5456,	// (0x0005ac9f) aid_main_viewer_pane_g3_ParamLimits

0x5456,	// (0x0005ac9f) aid_main_viewer_pane_g3

0x5465,	// (0x0005acae) aid_main_viewer_pane_g4_ParamLimits

0x5465,	// (0x0005acae) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00064d49) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00064d49) aid_main_viewer_pane_g

0x5dbd,	// (0x0005b606) main_calc_pane_ParamLimits

0x5dd1,	// (0x0005b61a) main_dialer2_pane_ParamLimits

0xb4d1,	// (0x00060d1a) main_cam6_pane

0xb4d1,	// (0x00060d1a) main_vid6_pane

0x7757,	// (0x0005cfa0) listscroll_gen_pane_cp06_ParamLimits

0x7757,	// (0x0005cfa0) listscroll_gen_pane_cp06

0x7865,	// (0x0005d0ae) main_clock2_pane_t5_ParamLimits

0x7865,	// (0x0005d0ae) main_clock2_pane_t5

0x78c2,	// (0x0005d10b) aid_call2_pane_cp10_ParamLimits

0x78d4,	// (0x0005d11d) aid_call_pane_cp10_ParamLimits

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x78e6,	// (0x0005d12f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x78e6,	// (0x0005d12f) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0754,	// (0x00055f9d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0006507f) popup_clock_analogue_window_cp10_g_ParamLimits

0x78fc,	// (0x0005d145) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7fa3,	// (0x0005d7ec) cell_dialer2_keypad_pane_g2_ParamLimits

0x7fa3,	// (0x0005d7ec) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00065165) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00065165) cell_dialer2_keypad_pane_g

0x7fbf,	// (0x0005d808) cell_dialer2_keypad_pane_t1

0x8b6f,	// (0x0005e3b8) main_cset_text2_pane_ParamLimits

0x8b6f,	// (0x0005e3b8) main_cset_text2_pane

0xd3c1,	// (0x00062c0a) area_vitu2_query_pane_g1_ParamLimits

0x93a2,	// (0x0005ebeb) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0006530b) area_vitu2_query_pane_g_ParamLimits

0xd445,	// (0x00062c8e) area_vitu2_query_pane_t7_ParamLimits

0xd445,	// (0x00062c8e) area_vitu2_query_pane_t7

0x9403,	// (0x0005ec4c) bg_button_pane_cp018_ParamLimits

0x9411,	// (0x0005ec5a) bg_button_pane_cp021_ParamLimits

0x941d,	// (0x0005ec66) bg_button_pane_cp022_ParamLimits

0x941d,	// (0x0005ec66) bg_vkb2_func_pane_cp08_ParamLimits

0x9403,	// (0x0005ec4c) bg_vkb2_func_pane_cp06_ParamLimits

0x9411,	// (0x0005ec5a) bg_vkb2_func_pane_cp07_ParamLimits

0x942e,	// (0x0005ec77) input_focus_pane_cp09_ParamLimits

0xf121,	// (0x0006496a) cam6_autofocus_pane_ParamLimits

0xf121,	// (0x0006496a) cam6_autofocus_pane

0x9924,	// (0x0005f16d) cam6_image_uncrop_pane_ParamLimits

0x9924,	// (0x0005f16d) cam6_image_uncrop_pane

0x9933,	// (0x0005f17c) cam6_indi_pane_ParamLimits

0x9933,	// (0x0005f17c) cam6_indi_pane

0x9949,	// (0x0005f192) cam6_mode_pane_ParamLimits

0x9949,	// (0x0005f192) cam6_mode_pane

0x995b,	// (0x0005f1a4) cam6_timer_pane_ParamLimits

0x995b,	// (0x0005f1a4) cam6_timer_pane

0x9967,	// (0x0005f1b0) cam6_zoom_pane_ParamLimits

0x9967,	// (0x0005f1b0) cam6_zoom_pane

0x9975,	// (0x0005f1be) cam6_mode_pane_g1_ParamLimits

0x9975,	// (0x0005f1be) cam6_mode_pane_g1

0x9985,	// (0x0005f1ce) cam6_mode_pane_g2_ParamLimits

0x9985,	// (0x0005f1ce) cam6_mode_pane_g2

0x9995,	// (0x0005f1de) cam6_mode_pane_g3_ParamLimits

0x9995,	// (0x0005f1de) cam6_mode_pane_g3

0x99a5,	// (0x0005f1ee) cam6_mode_pane_g4_ParamLimits

0x99a5,	// (0x0005f1ee) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x000653f3) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x000653f3) cam6_mode_pane_g

0xd6a2,	// (0x00062eeb) bg_tb_trans_pane_cp08_ParamLimits

0xd6a2,	// (0x00062eeb) bg_tb_trans_pane_cp08

0xd6b0,	// (0x00062ef9) cam6_battery_pane_ParamLimits

0xd6b0,	// (0x00062ef9) cam6_battery_pane

0xd6c6,	// (0x00062f0f) cam6_indi_pane_g1_ParamLimits

0xd6c6,	// (0x00062f0f) cam6_indi_pane_g1

0xd6d8,	// (0x00062f21) cam6_indi_pane_g2_ParamLimits

0xd6d8,	// (0x00062f21) cam6_indi_pane_g2

0xd6ea,	// (0x00062f33) cam6_indi_pane_g3_ParamLimits

0xd6ea,	// (0x00062f33) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x000653fc) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x000653fc) cam6_indi_pane_g

0xd6fc,	// (0x00062f45) cam6_indi_pane_t1_ParamLimits

0xd6fc,	// (0x00062f45) cam6_indi_pane_t1

0x859a,	// (0x0005dde3) cam6_autofocus_pane_g1

0x8592,	// (0x0005dddb) cam6_autofocus_pane_g2

0x85aa,	// (0x0005ddf3) cam6_autofocus_pane_g3

0x85a2,	// (0x0005ddeb) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x00065403) cam6_autofocus_pane_g

0xd722,	// (0x00062f6b) cam6_timer_pane_g1

0xd72a,	// (0x00062f73) cam6_timer_pane_t1

0xd738,	// (0x00062f81) cam6_zoom_cont_pane

0xd740,	// (0x00062f89) cam6_zoom_pane_g1

0xd748,	// (0x00062f91) cam6_zoom_pane_g2

0x99b5,	// (0x0005f1fe) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0006540c) cam6_zoom_pane_g

0xc45b,	// (0x00061ca4) cam6_battery_pane_g1

0xc45b,	// (0x00061ca4) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00064f8c) cam6_battery_pane_g

0xd750,	// (0x00062f99) cam6_zoom_cont_pane_g1

0xd759,	// (0x00062fa2) cam6_zoom_cont_pane_g2

0xd762,	// (0x00062fab) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00065413) cam6_zoom_cont_pane_g

0x99d2,	// (0x0005f21b) cam6_mode_pane_cp_ParamLimits

0x99d2,	// (0x0005f21b) cam6_mode_pane_cp

0x99e4,	// (0x0005f22d) cam6_zoom_pane_cp_ParamLimits

0x99e4,	// (0x0005f22d) cam6_zoom_pane_cp

0x99f2,	// (0x0005f23b) vid6_image_uncrop_cif_pane_ParamLimits

0x99f2,	// (0x0005f23b) vid6_image_uncrop_cif_pane

0x9a02,	// (0x0005f24b) vid6_image_uncrop_nhd_pane_ParamLimits

0x9a02,	// (0x0005f24b) vid6_image_uncrop_nhd_pane

0x9a11,	// (0x0005f25a) vid6_image_uncrop_vga_pane_ParamLimits

0x9a11,	// (0x0005f25a) vid6_image_uncrop_vga_pane

0x9a20,	// (0x0005f269) vid6_image_uncrop_wvga_pane_ParamLimits

0x9a20,	// (0x0005f269) vid6_image_uncrop_wvga_pane

0x9a2f,	// (0x0005f278) vid6_indi_pane_ParamLimits

0x9a2f,	// (0x0005f278) vid6_indi_pane

0xd6a2,	// (0x00062eeb) bg_tb_trans_pane_cp09_ParamLimits

0xd6a2,	// (0x00062eeb) bg_tb_trans_pane_cp09

0xd77a,	// (0x00062fc3) cam6_battery_pane_cp_ParamLimits

0xd77a,	// (0x00062fc3) cam6_battery_pane_cp

0xd786,	// (0x00062fcf) vid6_indi_pane_g1_ParamLimits

0xd786,	// (0x00062fcf) vid6_indi_pane_g1

0xd798,	// (0x00062fe1) vid6_indi_pane_g2_ParamLimits

0xd798,	// (0x00062fe1) vid6_indi_pane_g2

0xd7aa,	// (0x00062ff3) vid6_indi_pane_g3_ParamLimits

0xd7aa,	// (0x00062ff3) vid6_indi_pane_g3

0xd7c1,	// (0x0006300a) vid6_indi_pane_g4_ParamLimits

0xd7c1,	// (0x0006300a) vid6_indi_pane_g4

0xd7d8,	// (0x00063021) vid6_indi_pane_g5_ParamLimits

0xd7d8,	// (0x00063021) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0006541a) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0006541a) vid6_indi_pane_g

0xd7f2,	// (0x0006303b) vid6_indi_pane_t1_ParamLimits

0xd7f2,	// (0x0006303b) vid6_indi_pane_t1

0xd808,	// (0x00063051) vid6_indi_pane_t2_ParamLimits

0xd808,	// (0x00063051) vid6_indi_pane_t2

0xd830,	// (0x00063079) vid6_indi_pane_t3_ParamLimits

0xd830,	// (0x00063079) vid6_indi_pane_t3

0xd858,	// (0x000630a1) vid6_indi_pane_t4_ParamLimits

0xd858,	// (0x000630a1) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00065425) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00065425) vid6_indi_pane_t

0xd87c,	// (0x000630c5) wait_bar_pane_cp08

0x9a47,	// (0x0005f290) main_cset_text2_pane_t1_ParamLimits

0x9a47,	// (0x0005f290) main_cset_text2_pane_t1

0x99bd,	// (0x0005f206) listscroll_gen_pane_cp06_t1_ParamLimits

0x99bd,	// (0x0005f206) listscroll_gen_pane_cp06_t1

0xb4d1,	// (0x00060d1a) main_cam6_set_pane

0x8447,	// (0x0005dc90) bg_tb_trans_pane_cp06_ParamLimits

0x8455,	// (0x0005dc9e) cam4_indicators_pane_g1_ParamLimits

0x8462,	// (0x0005dcab) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00065199) cam4_indicators_pane_g_ParamLimits

0x847a,	// (0x0005dcc3) cam4_indicators_pane_t1_ParamLimits

0xefce,	// (0x00064817) bg_tb_trans_pane_cp07_ParamLimits

0x8455,	// (0x0005dc9e) vid4_indicators_pane_g1_ParamLimits

0x855a,	// (0x0005dda3) vid4_indicators_pane_g2_ParamLimits

0x8567,	// (0x0005ddb0) vid4_indicators_pane_g3_ParamLimits

0x8574,	// (0x0005ddbd) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x000651ab) vid4_indicators_pane_g_ParamLimits

0x8580,	// (0x0005ddc9) vid4_indicators_pane_t1_ParamLimits

0xf089,	// (0x000648d2) vid4_progress_pane_g1_ParamLimits

0xf095,	// (0x000648de) vid4_progress_pane_g2_ParamLimits

0xf0a1,	// (0x000648ea) vid4_progress_pane_g3_ParamLimits

0xf0b0,	// (0x000648f9) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00065356) vid4_progress_pane_g_ParamLimits

0xf0ce,	// (0x00064917) vid4_progress_pane_t1_ParamLimits

0xf0e4,	// (0x0006492d) vid4_progress_pane_t2_ParamLimits

0xf0fa,	// (0x00064943) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00065361) vid4_progress_pane_t_ParamLimits

0xf10f,	// (0x00064958) wait_bar_pane_cp07_ParamLimits

0x9a68,	// (0x0005f2b1) main_cam6_set_pane_g2_ParamLimits

0x9a68,	// (0x0005f2b1) main_cam6_set_pane_g2

0x9a8e,	// (0x0005f2d7) main_cset6_listscroll_pane_ParamLimits

0x9a8e,	// (0x0005f2d7) main_cset6_listscroll_pane

0x9aac,	// (0x0005f2f5) main_cset6_slider_pane_ParamLimits

0x9aac,	// (0x0005f2f5) main_cset6_slider_pane

0x9ac2,	// (0x0005f30b) main_cset6_text2_pane_ParamLimits

0x9ac2,	// (0x0005f30b) main_cset6_text2_pane

0xd88b,	// (0x000630d4) main_cset6_text_pane

0xd893,	// (0x000630dc) main_cset_list_pane_copy1_ParamLimits

0xd893,	// (0x000630dc) main_cset_list_pane_copy1

0xd8a3,	// (0x000630ec) scroll_pane_cp028_copy1

0x9ad0,	// (0x0005f319) cset_list_set_pane_copy1

0x9ae4,	// (0x0005f32d) aid_position_infowindow_above_copy1

0x9aec,	// (0x0005f335) aid_position_infowindow_below_copy1

0x9af4,	// (0x0005f33d) cset_list_set_pane_g1_copy1

0xd8ac,	// (0x000630f5) cset_list_set_pane_g3_copy1_ParamLimits

0xd8ac,	// (0x000630f5) cset_list_set_pane_g3_copy1

0x9afc,	// (0x0005f345) cset_list_set_pane_t1_copy1_ParamLimits

0x9afc,	// (0x0005f345) cset_list_set_pane_t1_copy1

0x1c38,	// (0x00057481) list_highlight_pane_cp021_copy1_ParamLimits

0x1c38,	// (0x00057481) list_highlight_pane_cp021_copy1

0xd8bb,	// (0x00063104) cset6_slider_pane_ParamLimits

0xd8bb,	// (0x00063104) cset6_slider_pane

0xd8e7,	// (0x00063130) main_cset6_slider_pane_g1_ParamLimits

0xd8e7,	// (0x00063130) main_cset6_slider_pane_g1

0x9b11,	// (0x0005f35a) main_cset6_slider_pane_g2_ParamLimits

0x9b11,	// (0x0005f35a) main_cset6_slider_pane_g2

0xd90f,	// (0x00063158) main_cset6_slider_pane_g3_ParamLimits

0xd90f,	// (0x00063158) main_cset6_slider_pane_g3

0x9b39,	// (0x0005f382) main_cset6_slider_pane_g4_ParamLimits

0x9b39,	// (0x0005f382) main_cset6_slider_pane_g4

0x9b45,	// (0x0005f38e) main_cset6_slider_pane_g5_ParamLimits

0x9b45,	// (0x0005f38e) main_cset6_slider_pane_g5

0xd062,	// (0x000628ab) main_cset6_slider_pane_g7_ParamLimits

0xd062,	// (0x000628ab) main_cset6_slider_pane_g7

0xd06e,	// (0x000628b7) main_cset6_slider_pane_g8_ParamLimits

0xd06e,	// (0x000628b7) main_cset6_slider_pane_g8

0x8c1e,	// (0x0005e467) main_cset6_slider_pane_g9_ParamLimits

0x8c1e,	// (0x0005e467) main_cset6_slider_pane_g9

0x8c2a,	// (0x0005e473) main_cset6_slider_pane_g10_ParamLimits

0x8c2a,	// (0x0005e473) main_cset6_slider_pane_g10

0x8c36,	// (0x0005e47f) main_cset6_slider_pane_g11_ParamLimits

0x8c36,	// (0x0005e47f) main_cset6_slider_pane_g11

0x8c42,	// (0x0005e48b) main_cset6_slider_pane_g12_ParamLimits

0x8c42,	// (0x0005e48b) main_cset6_slider_pane_g12

0x8c4e,	// (0x0005e497) main_cset6_slider_pane_g13_ParamLimits

0x8c4e,	// (0x0005e497) main_cset6_slider_pane_g13

0x8c5a,	// (0x0005e4a3) main_cset6_slider_pane_g14_ParamLimits

0x8c5a,	// (0x0005e4a3) main_cset6_slider_pane_g14

0x9b53,	// (0x0005f39c) main_cset6_slider_pane_g15_ParamLimits

0x9b53,	// (0x0005f39c) main_cset6_slider_pane_g15

0x8c7e,	// (0x0005e4c7) main_cset6_slider_pane_g16_ParamLimits

0x8c7e,	// (0x0005e4c7) main_cset6_slider_pane_g16

0x8c8c,	// (0x0005e4d5) main_cset6_slider_pane_g17_ParamLimits

0x8c8c,	// (0x0005e4d5) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0006542e) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0006542e) main_cset6_slider_pane_g

0xd91b,	// (0x00063164) main_cset6_slider_pane_t1_ParamLimits

0xd91b,	// (0x00063164) main_cset6_slider_pane_t1

0x9b83,	// (0x0005f3cc) main_cset6_slider_pane_t2_ParamLimits

0x9b83,	// (0x0005f3cc) main_cset6_slider_pane_t2

0x9bae,	// (0x0005f3f7) main_cset6_slider_pane_t3_ParamLimits

0x9bae,	// (0x0005f3f7) main_cset6_slider_pane_t3

0x9bd9,	// (0x0005f422) main_cset6_slider_pane_t4_ParamLimits

0x9bd9,	// (0x0005f422) main_cset6_slider_pane_t4

0x9c06,	// (0x0005f44f) main_cset6_slider_pane_t5_ParamLimits

0x9c06,	// (0x0005f44f) main_cset6_slider_pane_t5

0xd95c,	// (0x000631a5) main_cset6_slider_pane_t7_ParamLimits

0xd95c,	// (0x000631a5) main_cset6_slider_pane_t7

0x9c33,	// (0x0005f47c) main_cset6_slider_pane_t8_ParamLimits

0x9c33,	// (0x0005f47c) main_cset6_slider_pane_t8

0x9c57,	// (0x0005f4a0) main_cset6_slider_pane_t9_ParamLimits

0x9c57,	// (0x0005f4a0) main_cset6_slider_pane_t9

0x9c7b,	// (0x0005f4c4) main_cset6_slider_pane_t10_ParamLimits

0x9c7b,	// (0x0005f4c4) main_cset6_slider_pane_t10

0x9c9f,	// (0x0005f4e8) main_cset6_slider_pane_t11_ParamLimits

0x9c9f,	// (0x0005f4e8) main_cset6_slider_pane_t11

0xd992,	// (0x000631db) main_cset6_slider_pane_t14_ParamLimits

0xd992,	// (0x000631db) main_cset6_slider_pane_t14

0xd9cb,	// (0x00063214) main_cset6_slider_pane_t15_ParamLimits

0xd9cb,	// (0x00063214) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00065453) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00065453) main_cset6_slider_pane_t

0xda04,	// (0x0006324d) cset_slider_pane_g1_copy1

0xda0d,	// (0x00063256) cset_slider_pane_g2_copy1

0xda16,	// (0x0006325f) cset_slider_pane_g3_copy1

0xb4d1,	// (0x00060d1a) bg_popup_sub_pane_cp011_copy1

0xd1e1,	// (0x00062a2a) main_cset_text_pane_g1_copy1

0xd1e9,	// (0x00062a32) main_cset_text_pane_t1_copy1

0xd1f7,	// (0x00062a40) main_cset_text_pane_t2_copy1

0xd205,	// (0x00062a4e) main_cset_text_pane_t3_copy1

0xd213,	// (0x00062a5c) main_cset_text_pane_t4_copy1

0xd221,	// (0x00062a6a) main_cset_text_pane_t5_copy1

0xd22f,	// (0x00062a78) main_cset_text_pane_t6_copy1

0xd23d,	// (0x00062a86) main_cset_text_pane_t7_copy1

0x9a47,	// (0x0005f290) main_cset_text2_pane_t1_copy1

0xb4d1,	// (0x00060d1a) main_ncimui_pane

0x605f,	// (0x0005b8a8) popup_query_ncimui_window_ParamLimits

0x605f,	// (0x0005b8a8) popup_query_ncimui_window

0xc72c,	// (0x00061f75) field_cale_ev2_pane_g4_ParamLimits

0xc72c,	// (0x00061f75) field_cale_ev2_pane_g4

0x7e6e,	// (0x0005d6b7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e6e,	// (0x0005d6b7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00065140) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00065140) cell_video_dialer_keypad_pane_g

0x7e86,	// (0x0005d6cf) cell_video_dialer_keypad_pane_t1

0xb4d1,	// (0x00060d1a) bg_popup_window_pane_cp012

0x05d1,	// (0x00055e1a) heading_pane_cp06

0xdb0e,	// (0x00063357) ncim_query_content_pane

0xb4d1,	// (0x00060d1a) bg_popup_heading_pane_cp01

0xdb16,	// (0x0006335f) ncim_heading_pane_t1

0xdb24,	// (0x0006336d) ncim_indicator_popup_pane

0xdb36,	// (0x0006337f) ncim_query_button_pane

0xdb4c,	// (0x00063395) ncim_query_content_pane_t1

0xdb5e,	// (0x000633a7) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00065492) ncim_query_content_pane_t

0xdb98,	// (0x000633e1) ncim_query_list_pane

0xdbaa,	// (0x000633f3) ncim_query_popup_pane

0xdb24,	// (0x0006336d) ncim_indicator_popup_pane_ParamLimits

0x9d8b,	// (0x0005f5d4) ncim_query_content_pane_g1_ParamLimits

0x9d8b,	// (0x0005f5d4) ncim_query_content_pane_g1

0xdb4c,	// (0x00063395) ncim_query_content_pane_t1_ParamLimits

0xdb5e,	// (0x000633a7) ncim_query_content_pane_t2_ParamLimits

0x9d97,	// (0x0005f5e0) ncim_query_content_pane_t3_ParamLimits

0x9d97,	// (0x0005f5e0) ncim_query_content_pane_t3

0x9dbf,	// (0x0005f608) ncim_query_content_pane_t4_ParamLimits

0x9dbf,	// (0x0005f608) ncim_query_content_pane_t4

0x9de7,	// (0x0005f630) ncim_query_content_pane_t5_ParamLimits

0x9de7,	// (0x0005f630) ncim_query_content_pane_t5

0xdb70,	// (0x000633b9) ncim_query_content_pane_t6_ParamLimits

0xdb70,	// (0x000633b9) ncim_query_content_pane_t6

0xfc49,	// (0x00065492) ncim_query_content_pane_t_ParamLimits

0xdb98,	// (0x000633e1) ncim_query_list_pane_ParamLimits

0xdbaa,	// (0x000633f3) ncim_query_popup_pane_ParamLimits

0xdbbe,	// (0x00063407) wait_bar_pane_cp04

0xb4d1,	// (0x00060d1a) input_focus_pane_cp011

0xdbc6,	// (0x0006340f) ncim_query_popup_pane_t1

0xdbd4,	// (0x0006341d) ncim_list_query_list_pane_ParamLimits

0xdbd4,	// (0x0006341d) ncim_list_query_list_pane

0xb4d1,	// (0x00060d1a) bg_button_pane_cp027

0xdbe7,	// (0x00063430) ncim_query_button_pane_g1

0xb4d1,	// (0x00060d1a) list_highlight_pane_cp012

0xdbf1,	// (0x0006343a) ncim_list_query_list_pane_g1

0xdbf9,	// (0x00063442) ncim_list_query_list_pane_t1

0x846e,	// (0x0005dcb7) cam4_indicators_pane_g3_ParamLimits

0x846e,	// (0x0005dcb7) cam4_indicators_pane_g3

0x846e,	// (0x0005dcb7) vid4_indicators_pane_g5_ParamLimits

0x846e,	// (0x0005dcb7) vid4_indicators_pane_g5

0xf0bf,	// (0x00064908) vid4_progress_pane_g5_ParamLimits

0xf0bf,	// (0x00064908) vid4_progress_pane_g5

0x9cd3,	// (0x0005f51c) main_ncimui_pane_g1

0x9d19,	// (0x0005f562) ncimui_group_query_pane_ParamLimits

0x9d19,	// (0x0005f562) ncimui_group_query_pane

0x9d4d,	// (0x0005f596) ncimui_list_pane_ParamLimits

0x9d4d,	// (0x0005f596) ncimui_list_pane

0x9d67,	// (0x0005f5b0) ncimui_text_pane_ParamLimits

0x9d67,	// (0x0005f5b0) ncimui_text_pane

0x9e0f,	// (0x0005f658) ncimui_text_pane_t1_ParamLimits

0x9e0f,	// (0x0005f658) ncimui_text_pane_t1

0xdc07,	// (0x00063450) ncimui_list_single_graphic_pane_ParamLimits

0xdc07,	// (0x00063450) ncimui_list_single_graphic_pane

0x9e2c,	// (0x0005f675) ncimui_query_pane_ParamLimits

0x9e2c,	// (0x0005f675) ncimui_query_pane

0xb4d1,	// (0x00060d1a) list_highlight_pane_cp013

0xdc17,	// (0x00063460) ncim_list_query_list_pane_t1_copy1

0xdbf1,	// (0x0006343a) ncim_list_single_graphic_pane_g1

0xdc25,	// (0x0006346e) ncim_query_button_pane_cp01

0xdc2d,	// (0x00063476) ncim_query_entry_pane_ParamLimits

0xdc2d,	// (0x00063476) ncim_query_entry_pane

0xdc3d,	// (0x00063486) ncimui_query_pane_g1

0xdc45,	// (0x0006348e) ncimui_query_pane_t1_ParamLimits

0xdc45,	// (0x0006348e) ncimui_query_pane_t1

0xb4d1,	// (0x00060d1a) input_focus_pane_cp012

0xdbc6,	// (0x0006340f) ncim_query_entry_pane_t1

0xbc9f,	// (0x000614e8) main_im_pane_ParamLimits

0x1c38,	// (0x00057481) main_mobtv_pane_ParamLimits

0x1c38,	// (0x00057481) main_mobtv_pane

0x9b6b,	// (0x0005f3b4) main_cset6_slider_pane_g18_ParamLimits

0x9b6b,	// (0x0005f3b4) main_cset6_slider_pane_g18

0x9b77,	// (0x0005f3c0) main_cset6_slider_pane_g19_ParamLimits

0x9b77,	// (0x0005f3c0) main_cset6_slider_pane_g19

0xdc5b,	// (0x000634a4) bg_main_mobtv_pane_ParamLimits

0xdc5b,	// (0x000634a4) bg_main_mobtv_pane

0x9e3c,	// (0x0005f685) main_mobtv_info_pane

0x9e47,	// (0x0005f690) main_mobtv_loading_pane_ParamLimits

0x9e47,	// (0x0005f690) main_mobtv_loading_pane

0xdc69,	// (0x000634b2) main_mobtv_pg_channel_list_pane

0xdc73,	// (0x000634bc) main_mobtv_pg_hdr_pane

0x9e54,	// (0x0005f69d) main_mobtv_programe_curr_pane_ParamLimits

0x9e54,	// (0x0005f69d) main_mobtv_programe_curr_pane

0x9e61,	// (0x0005f6aa) main_mobtv_programe_next_pane_ParamLimits

0x9e61,	// (0x0005f6aa) main_mobtv_programe_next_pane

0xdc7c,	// (0x000634c5) popup_mobtv_noti_window

0xc45b,	// (0x00061ca4) main_tv_pg_hdr_pane_g1

0xdc86,	// (0x000634cf) main_tv_pg_hdr_pane_g2

0xdc8e,	// (0x000634d7) main_tv_pg_hdr_pane_g3

0xdc96,	// (0x000634df) main_tv_pg_hdr_pane_g4

0xdc9e,	// (0x000634e7) main_tv_pg_hdr_pane_g5

0xdca8,	// (0x000634f1) main_tv_pg_hdr_pane_g6

0xdcb2,	// (0x000634fb) main_tv_pg_hdr_pane_g7

0xdcbc,	// (0x00063505) main_tv_pg_hdr_pane_g8

0xdcc6,	// (0x0006350f) main_tv_pg_hdr_pane_g9

0xdcd0,	// (0x00063519) main_tv_pg_hdr_pane_g10

0xdcda,	// (0x00063523) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0006549f) main_tv_pg_hdr_pane_g

0xdce4,	// (0x0006352d) main_tv_pg_hdr_pane_t1

0xdcf2,	// (0x0006353b) main_tv_pg_hdr_pane_t2

0xdd00,	// (0x00063549) main_tv_pg_hdr_pane_t3

0xdd10,	// (0x00063559) main_tv_pg_hdr_pane_t4

0xdd20,	// (0x00063569) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x000654b6) main_tv_pg_hdr_pane_t

0xdd30,	// (0x00063579) single_mobtv_pg_channel_pane_ParamLimits

0xdd30,	// (0x00063579) single_mobtv_pg_channel_pane

0xdd42,	// (0x0006358b) single_mobtv_pg_channel_table_pane

0xdd4b,	// (0x00063594) single_mobtv_pg_channel_thumb_pane

0xdd54,	// (0x0006359d) single_tv_pg_channel_pane_g1

0xdd5d,	// (0x000635a6) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x000654c1) single_tv_pg_channel_pane_g

0xc68b,	// (0x00061ed4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc68b,	// (0x00061ed4) bg_single_mobtv_pg_channel_thumb_pane

0xdd66,	// (0x000635af) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdd66,	// (0x000635af) single_mobtv_pg_channel_thumb_pane_g1

0xdd74,	// (0x000635bd) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdd74,	// (0x000635bd) single_mobtv_pg_channel_thumb_pane_g2

0xdd80,	// (0x000635c9) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdd80,	// (0x000635c9) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x000654c6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x000654c6) single_mobtv_pg_channel_thumb_pane_g

0xdd8c,	// (0x000635d5) single_mobtv_pg_channel_thumb_pane_t1

0xdd9a,	// (0x000635e3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x000654cd) single_mobtv_pg_channel_thumb_pane_t

0xc45b,	// (0x00061ca4) bg_single_mobtv_pg_channel_table_pane_g1

0xc45b,	// (0x00061ca4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00064f8c) bg_single_mobtv_pg_channel_table_pane_g

0xdda8,	// (0x000635f1) single_mobtv_pg_channel_table_pane_t1

0xddb6,	// (0x000635ff) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x000654d2) single_mobtv_pg_channel_table_pane_t

0x9e76,	// (0x0005f6bf) main_mobtv_info_pane_g1_ParamLimits

0x9e76,	// (0x0005f6bf) main_mobtv_info_pane_g1

0x9e94,	// (0x0005f6dd) main_mobtv_info_pane_t1_ParamLimits

0x9e94,	// (0x0005f6dd) main_mobtv_info_pane_t1

0x9f0c,	// (0x0005f755) main_mobtv_info_pane_t2_ParamLimits

0x9f0c,	// (0x0005f755) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x000654dc) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x000654dc) main_mobtv_info_pane_t

0x9f9d,	// (0x0005f7e6) wait_bar_pane_cp05

0x9faf,	// (0x0005f7f8) main_mobtv_loading_pane_g1_ParamLimits

0x9faf,	// (0x0005f7f8) main_mobtv_loading_pane_g1

0x9fc0,	// (0x0005f809) main_mobtv_loading_pane_g2_ParamLimits

0x9fc0,	// (0x0005f809) main_mobtv_loading_pane_g2

0x9fcc,	// (0x0005f815) main_mobtv_loading_pane_g3_ParamLimits

0x9fcc,	// (0x0005f815) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x000654e3) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x000654e3) main_mobtv_loading_pane_g

0xddc4,	// (0x0006360d) main_mobtv_loading_pane_t1_ParamLimits

0xddc4,	// (0x0006360d) main_mobtv_loading_pane_t1

0xdddc,	// (0x00063625) main_mobtv_loading_pane_t2_ParamLimits

0xdddc,	// (0x00063625) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x000654ea) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x000654ea) main_mobtv_loading_pane_t

0x9fdf,	// (0x0005f828) wait_bar_pane_cp06_ParamLimits

0x9fdf,	// (0x0005f828) wait_bar_pane_cp06

0xde00,	// (0x00063649) main_mobtv_programe_curr_pane_t1

0xde0e,	// (0x00063657) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x000654ef) main_mobtv_programe_curr_pane_t

0xde1c,	// (0x00063665) main_mobtv_programe_next_pane_t1

0xde2a,	// (0x00063673) main_mobtv_programe_next_pane_t2

0xde38,	// (0x00063681) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x000654f4) main_mobtv_programe_next_pane_t

0xb4d1,	// (0x00060d1a) bg_popup_mobtv_noti_window_pane

0xde46,	// (0x0006368f) popup_mobtv_noti_window_g1

0xde4e,	// (0x00063697) popup_mobtv_noti_window_t1

0xde5c,	// (0x000636a5) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x000654fb) popup_mobtv_noti_window_t

0xc45b,	// (0x00061ca4) bg_popup_mobtv_noti_window_pane_g1

0xb4d1,	// (0x00060d1a) sc_clock_pane

0xb4d1,	// (0x00060d1a) main_fs_bigclock_pane

0x979b,	// (0x0005efe4) blid2_tripm_pane_t4_ParamLimits

0x979b,	// (0x0005efe4) blid2_tripm_pane_t4

0x9fee,	// (0x0005f837) sc_clock_pane_g1_ParamLimits

0x9fee,	// (0x0005f837) sc_clock_pane_g1

0xa000,	// (0x0005f849) sc_clock_pane_t1_ParamLimits

0xa000,	// (0x0005f849) sc_clock_pane_t1

0xa024,	// (0x0005f86d) sc_clock_pane_t2_ParamLimits

0xa024,	// (0x0005f86d) sc_clock_pane_t2

0xa03c,	// (0x0005f885) sc_clock_pane_t3_ParamLimits

0xa03c,	// (0x0005f885) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x00065500) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x00065500) sc_clock_pane_t

0xae20,	// (0x00060669) main_fs_bigclock_indicator_pane_ParamLimits

0xae20,	// (0x00060669) main_fs_bigclock_indicator_pane

0xc65b,	// (0x00061ea4) main_fs_bigclock_pane_g1_ParamLimits

0xc65b,	// (0x00061ea4) main_fs_bigclock_pane_g1

0xae2c,	// (0x00060675) main_fs_bigclock_pane_t1_ParamLimits

0xae2c,	// (0x00060675) main_fs_bigclock_pane_t1

0xae3e,	// (0x00060687) main_fs_bigclock_pane_t2_ParamLimits

0xae3e,	// (0x00060687) main_fs_bigclock_pane_t2

0xae52,	// (0x0006069b) main_fs_bigclock_pane_t3_ParamLimits

0xae52,	// (0x0006069b) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x000656ff) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x000656ff) main_fs_bigclock_pane_t

0xea6d,	// (0x000642b6) main_fs_bigclock_indicator_pane_g1

0xdb3e,	// (0x00063387) ncim_query_content_pane_g2_ParamLimits

0xdb3e,	// (0x00063387) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0006548d) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0006548d) ncim_query_content_pane_g

0xa051,	// (0x0005f89a) sc_clock_pane_t4_ParamLimits

0xa051,	// (0x0005f89a) sc_clock_pane_t4

0x1c38,	// (0x00057481) main_radioblah_pane

0xce40,	// (0x00062689) cell_call4_button_pane_t1_copy1_ParamLimits

0xce40,	// (0x00062689) cell_call4_button_pane_t1_copy1

0x9cdb,	// (0x0005f524) main_ncimui_pane_t1_ParamLimits

0x9cdb,	// (0x0005f524) main_ncimui_pane_t1

0x9ced,	// (0x0005f536) main_ncimui_pane_t2_ParamLimits

0x9ced,	// (0x0005f536) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00065486) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00065486) main_ncimui_pane_t

0xdf94,	// (0x000637dd) main_radioblah_anim_pane_ParamLimits

0xdf94,	// (0x000637dd) main_radioblah_anim_pane

0xdfa5,	// (0x000637ee) main_radioblah_info_pane_ParamLimits

0xdfa5,	// (0x000637ee) main_radioblah_info_pane

0xdfb9,	// (0x00063802) main_radioblah_pane_t1_ParamLimits

0xdfb9,	// (0x00063802) main_radioblah_pane_t1

0xdfd5,	// (0x0006381e) main_radioblah_pane_t2_ParamLimits

0xdfd5,	// (0x0006381e) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00065521) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00065521) main_radioblah_pane_t

0xa0ff,	// (0x0005f948) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa0ff,	// (0x0005f948) main_radioblah_rocker_ctrl_pane

0xe01d,	// (0x00063866) main_radioblah_info_pane_t1_ParamLimits

0xe01d,	// (0x00063866) main_radioblah_info_pane_t1

0xa157,	// (0x0005f9a0) main_radioblah_info_pane_t2_ParamLimits

0xa157,	// (0x0005f9a0) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0006552a) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0006552a) main_radioblah_info_pane_t

0xc45b,	// (0x00061ca4) main_radioblah_rocker_ctrl_pane_g1

0xa207,	// (0x0005fa50) main_radioblah_rocker_ctrl_pane_g2

0xa20f,	// (0x0005fa58) main_radioblah_rocker_ctrl_pane_g3

0xa217,	// (0x0005fa60) main_radioblah_rocker_ctrl_pane_g4

0xa21f,	// (0x0005fa68) main_radioblah_rocker_ctrl_pane_g5

0xa227,	// (0x0005fa70) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00065533) main_radioblah_rocker_ctrl_pane_g

0x9a47,	// (0x0005f290) main_cset_text2_pane_t1_copy1_ParamLimits

0xefb2,	// (0x000647fb) cam4_image_uncrop_qvga_pane

0xefc4,	// (0x0006480d) vid4_image_uncrop_qcif_pane

0xf121,	// (0x0006496a) cam6_image_uncrop_qvga_pane_ParamLimits

0xf121,	// (0x0006496a) cam6_image_uncrop_qvga_pane

0xd76a,	// (0x00062fb3) vid6_image_uncrop_qcif_pane_ParamLimits

0xd76a,	// (0x00062fb3) vid6_image_uncrop_qcif_pane

0xb4d1,	// (0x00060d1a) bg_popup_preview_window_pane_cp03

0xdaf0,	// (0x00063339) list_cset_text2_pane

0xdaf8,	// (0x00063341) main_cset6_text2_pane_g1

0xdb00,	// (0x00063349) main_cset6_text2_pane_t1

0xa22f,	// (0x0005fa78) list_cset_text2_pane_t1_ParamLimits

0xa22f,	// (0x0005fa78) list_cset_text2_pane_t1

0x1c38,	// (0x00057481) main_radioblah_pane_ParamLimits

0x9f89,	// (0x0005f7d2) main_mobtv_info_pane_t3_ParamLimits

0x9f89,	// (0x0005f7d2) main_mobtv_info_pane_t3

0xa0ed,	// (0x0005f936) main_radioblah_pane_g1

0xa127,	// (0x0005f970) main_radioblah_info_pane_g1

0xa1ac,	// (0x0005f9f5) main_radioblah_info_pane_t3_ParamLimits

0xa1ac,	// (0x0005f9f5) main_radioblah_info_pane_t3

0x47c8,	// (0x0005a011) highlight_cell_cale_month_pane_ParamLimits

0x47c8,	// (0x0005a011) highlight_cell_cale_month_pane

0xb4d1,	// (0x00060d1a) main_phob_fisheye_pane

0xc7e1,	// (0x0006202a) scroll_pane_cp0031_ParamLimits

0xc7e1,	// (0x0006202a) scroll_pane_cp0031

0xd87c,	// (0x000630c5) wait_bar_pane_cp08_ParamLimits

0x9ad0,	// (0x0005f319) cset_list_set_pane_copy1_ParamLimits

0xe057,	// (0x000638a0) highlight_cell_cale_month_pane_g1

0xa249,	// (0x0005fa92) highlight_cell_cale_month_pane_t1

0xd4b1,	// (0x00062cfa) list_gen_pane_cp01

0xd04d,	// (0x00062896) scroll_pane_01

0xa257,	// (0x0005faa0) list_single_double_fisheye_pane

0xa260,	// (0x0005faa9) list_double_fisheye_pane_g1_ParamLimits

0xa260,	// (0x0005faa9) list_double_fisheye_pane_g1

0xa26c,	// (0x0005fab5) list_double_fisheye_pane_g2_ParamLimits

0xa26c,	// (0x0005fab5) list_double_fisheye_pane_g2

0xa280,	// (0x0005fac9) list_double_fisheye_pane_g3_ParamLimits

0xa280,	// (0x0005fac9) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00065540) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00065540) list_double_fisheye_pane_g

0xa2a9,	// (0x0005faf2) list_double_fisheye_pane_t1_ParamLimits

0xa2a9,	// (0x0005faf2) list_double_fisheye_pane_t1

0xa2c4,	// (0x0005fb0d) list_double_fisheye_pane_t2_ParamLimits

0xa2c4,	// (0x0005fb0d) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0006554b) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0006554b) list_double_fisheye_pane_t

0xb4d1,	// (0x00060d1a) main_call5_pane

0xa07c,	// (0x0005f8c5) sc_swipe_pane_ParamLimits

0xa07c,	// (0x0005f8c5) sc_swipe_pane

0xa2f9,	// (0x0005fb42) call5_image_pane_ParamLimits

0xa2f9,	// (0x0005fb42) call5_image_pane

0xa316,	// (0x0005fb5f) call5_swipe_1_pane_ParamLimits

0xa316,	// (0x0005fb5f) call5_swipe_1_pane

0xa329,	// (0x0005fb72) call5_swipe_2_pane_ParamLimits

0xa329,	// (0x0005fb72) call5_swipe_2_pane

0xa356,	// (0x0005fb9f) popup_call5_audio_first_window_ParamLimits

0xa356,	// (0x0005fb9f) popup_call5_audio_first_window

0xc68b,	// (0x00061ed4) call5_swipe_1_pane_g1_ParamLimits

0xc68b,	// (0x00061ed4) call5_swipe_1_pane_g1

0xe05f,	// (0x000638a8) call5_swipe_1_pane_g2_ParamLimits

0xe05f,	// (0x000638a8) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00065550) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00065550) call5_swipe_1_pane_g

0xe06b,	// (0x000638b4) call5_swipe_1_pane_t1_ParamLimits

0xe06b,	// (0x000638b4) call5_swipe_1_pane_t1

0xc68b,	// (0x00061ed4) call5_swipe_2_pane_g1_ParamLimits

0xc68b,	// (0x00061ed4) call5_swipe_2_pane_g1

0xe080,	// (0x000638c9) call5_swipe_2_pane_g2_ParamLimits

0xe080,	// (0x000638c9) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00065555) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00065555) call5_swipe_2_pane_g

0xe08c,	// (0x000638d5) call5_swipe_2_pane_t1_ParamLimits

0xe08c,	// (0x000638d5) call5_swipe_2_pane_t1

0xe0a1,	// (0x000638ea) sc_swipe_pane_g1_ParamLimits

0xe0a1,	// (0x000638ea) sc_swipe_pane_g1

0xe0ae,	// (0x000638f7) sc_swipe_pane_g2_ParamLimits

0xe0ae,	// (0x000638f7) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0006555a) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0006555a) sc_swipe_pane_g

0xe0ba,	// (0x00063903) sc_swipe_pane_t1_ParamLimits

0xe0ba,	// (0x00063903) sc_swipe_pane_t1

0xb4d1,	// (0x00060d1a) main_cmail_launcher_pane

0xa36b,	// (0x0005fbb4) aid_size_cell_cmail_l_ParamLimits

0xa36b,	// (0x0005fbb4) aid_size_cell_cmail_l

0xa385,	// (0x0005fbce) grid_cmail_l_pane_ParamLimits

0xa385,	// (0x0005fbce) grid_cmail_l_pane

0xa3a1,	// (0x0005fbea) cell_cmail_l_pane_ParamLimits

0xa3a1,	// (0x0005fbea) cell_cmail_l_pane

0xa3c9,	// (0x0005fc12) cell_cmail_l_pane_g1_ParamLimits

0xa3c9,	// (0x0005fc12) cell_cmail_l_pane_g1

0xa3d5,	// (0x0005fc1e) cell_cmail_l_pane_t1_ParamLimits

0xa3d5,	// (0x0005fc1e) cell_cmail_l_pane_t1

0xe0cf,	// (0x00063918) cell_cmail_l_pane_t2_ParamLimits

0xe0cf,	// (0x00063918) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0006555f) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0006555f) cell_cmail_l_pane_t

0x1c38,	// (0x00057481) grid_highlight_pane_cp018_ParamLimits

0x1c38,	// (0x00057481) grid_highlight_pane_cp018

0x2da0,	// (0x000585e9) main2_pane_ParamLimits

0x2da0,	// (0x000585e9) main2_pane

0xbd78,	// (0x000615c1) popup_sp_fs_action_menu_bg_pane_g1

0xbd80,	// (0x000615c9) popup_sp_fs_action_menu_bg_pane_g2

0xbd88,	// (0x000615d1) popup_sp_fs_action_menu_bg_pane_g3

0xbd90,	// (0x000615d9) popup_sp_fs_action_menu_bg_pane_g4

0xbd98,	// (0x000615e1) popup_sp_fs_action_menu_bg_pane_g5

0xbda0,	// (0x000615e9) popup_sp_fs_action_menu_bg_pane_g6

0xbda8,	// (0x000615f1) popup_sp_fs_action_menu_bg_pane_g7

0xbdb0,	// (0x000615f9) popup_sp_fs_action_menu_bg_pane_g8

0xbdb8,	// (0x00061601) popup_sp_fs_action_menu_bg_pane_g9

0xbdc0,	// (0x00061609) popup_sp_fs_action_menu_bg_pane_g10

0xbdc0,	// (0x00061609) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00064a38) popup_sp_fs_action_menu_bg_pane_g

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g3_g1

0x3b03,	// (0x0005934c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_t3_g3_g2

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00064ae8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00064ae8) list_medium_line_x2_t3_g3_g

0x3b1b,	// (0x00059364) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3b1b,	// (0x00059364) list_medium_line_x2_t3_g3_t1

0x3b30,	// (0x00059379) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3b30,	// (0x00059379) list_medium_line_x2_t3_g3_t2

0x3b44,	// (0x0005938d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00064aef) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00064aef) list_medium_line_x2_t3_g3_t

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g2_g1

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00064af6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00064af6) list_medium_line_x2_t3_g2_g

0x3b59,	// (0x000593a2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3b59,	// (0x000593a2) list_medium_line_x2_t3_g2_t1

0x3b6f,	// (0x000593b8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3b6f,	// (0x000593b8) list_medium_line_x2_t3_g2_t2

0x3b81,	// (0x000593ca) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3b81,	// (0x000593ca) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00064afb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00064afb) list_medium_line_x2_t3_g2_t

0x3af7,	// (0x00059340) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t4_g4_g1

0x3b9f,	// (0x000593e8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3b9f,	// (0x000593e8) list_medium_line_x2_t4_g4_g2

0x3b03,	// (0x0005934c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_t4_g4_g3

0x3bab,	// (0x000593f4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3bab,	// (0x000593f4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00064b02) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00064b02) list_medium_line_x2_t4_g4_g

0x3bb7,	// (0x00059400) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3bb7,	// (0x00059400) list_medium_line_x2_t4_g4_t1

0x3bd1,	// (0x0005941a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3bd1,	// (0x0005941a) list_medium_line_x2_t4_g4_t2

0x3be7,	// (0x00059430) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3be7,	// (0x00059430) list_medium_line_x2_t4_g4_t3

0x3bfc,	// (0x00059445) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3bfc,	// (0x00059445) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00064b0b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00064b0b) list_medium_line_x2_t4_g4_t

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g4_g1

0x3b9f,	// (0x000593e8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3b9f,	// (0x000593e8) list_medium_line_x2_t2_g4_g2

0x3b03,	// (0x0005934c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_t2_g4_g3

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00064b72) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00064b72) list_medium_line_x2_t2_g4_g

0x47e6,	// (0x0005a02f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x47e6,	// (0x0005a02f) list_medium_line_x2_t2_g4_t1

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00064b7b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00064b7b) list_medium_line_x2_t2_g4_t

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g3_g1

0x3b03,	// (0x0005934c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_t2_g3_g2

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00064ae8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00064ae8) list_medium_line_x2_t2_g3_g

0x47fb,	// (0x0005a044) list_medium_line_x2_t2_g3_t1_ParamLimits

0x47fb,	// (0x0005a044) list_medium_line_x2_t2_g3_t1

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00064b80) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00064b80) list_medium_line_x2_t2_g3_t

0x49cb,	// (0x0005a214) main_sp_fs_list_pane_ParamLimits

0x49cb,	// (0x0005a214) main_sp_fs_list_pane

0x49d7,	// (0x0005a220) sp_fs_scroll_pane_ParamLimits

0x49d7,	// (0x0005a220) sp_fs_scroll_pane

0x49e3,	// (0x0005a22c) list_medium_line_x2_t3_t1

0x49f3,	// (0x0005a23c) list_medium_line_x2_t3_t2

0x4a01,	// (0x0005a24a) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00064bcb) list_medium_line_x2_t3_t

0x4a0f,	// (0x0005a258) list_medium_line_x3_t4_t1

0x4a1f,	// (0x0005a268) list_medium_line_x3_t4_t2

0x4a2d,	// (0x0005a276) list_medium_line_x3_t4_t3

0x4a01,	// (0x0005a24a) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00064bd2) list_medium_line_x3_t4_t

0x4a3b,	// (0x0005a284) list_medium_line_x4_t5_t1

0x4a4b,	// (0x0005a294) list_medium_line_x4_t5_t2

0x4a2d,	// (0x0005a276) list_medium_line_x4_t5_t3

0x4a59,	// (0x0005a2a2) list_medium_line_x4_t5_t4

0x4a01,	// (0x0005a24a) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00064bdb) list_medium_line_x4_t5_t

0x3af7,	// (0x00059340) list_medium_line_t4_g4_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_t4_g4_g1

0x3bab,	// (0x000593f4) list_medium_line_t4_g4_g2_ParamLimits

0x3bab,	// (0x000593f4) list_medium_line_t4_g4_g2

0x4a67,	// (0x0005a2b0) list_medium_line_t4_g4_g3_ParamLimits

0x4a67,	// (0x0005a2b0) list_medium_line_t4_g4_g3

0x3b0f,	// (0x00059358) list_medium_line_t4_g4_g4_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00064be6) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00064be6) list_medium_line_t4_g4_g

0x4a73,	// (0x0005a2bc) list_medium_line_t4_g4_t1_ParamLimits

0x4a73,	// (0x0005a2bc) list_medium_line_t4_g4_t1

0x4a88,	// (0x0005a2d1) list_medium_line_t4_g4_t2_ParamLimits

0x4a88,	// (0x0005a2d1) list_medium_line_t4_g4_t2

0x4a9e,	// (0x0005a2e7) list_medium_line_t4_g4_t3_ParamLimits

0x4a9e,	// (0x0005a2e7) list_medium_line_t4_g4_t3

0x3b44,	// (0x0005938d) list_medium_line_t4_g4_t4_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00064bef) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00064bef) list_medium_line_t4_g4_t

0x4b7a,	// (0x0005a3c3) chi_dic_find_pane_g1

0x5de5,	// (0x0005b62e) main_tport_pane

0xd172,	// (0x000629bb) list_medium_line_plain_t1

0xd188,	// (0x000629d1) list_medium_line_t2_g2_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t2_g2_g1

0xd194,	// (0x000629dd) list_medium_line_t2_g2_g2_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x000652a2) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x000652a2) list_medium_line_t2_g2_g

0x8fed,	// (0x0005e836) list_medium_line_t2_g2_t1_ParamLimits

0x8fed,	// (0x0005e836) list_medium_line_t2_g2_t1

0x9004,	// (0x0005e84d) list_medium_line_t2_g2_t2_ParamLimits

0x9004,	// (0x0005e84d) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x000652a7) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x000652a7) list_medium_line_t2_g2_t

0xd4ba,	// (0x00062d03) aid_sp_fs_list_icon_a_sm

0xd4c2,	// (0x00062d0b) aid_sp_fs_list_icon_d

0xd4ca,	// (0x00062d13) aid_sp_fs_text_primary

0xd4d3,	// (0x00062d1c) aid_sp_fs_text_secondary

0xd4dc,	// (0x00062d25) list_medium_line

0xd4dc,	// (0x00062d25) list_medium_line_g2

0xd4dc,	// (0x00062d25) list_medium_line_g3

0xd4dc,	// (0x00062d25) list_medium_line_plain

0xd4dc,	// (0x00062d25) list_medium_line_plain_t2

0xd4dc,	// (0x00062d25) list_medium_line_plain_t3

0xd4dc,	// (0x00062d25) list_medium_line_right_icon

0xd4dc,	// (0x00062d25) list_medium_line_right_iconx2

0xd4dc,	// (0x00062d25) list_medium_line_t2

0xd4dc,	// (0x00062d25) list_medium_line_t2_g2

0xd4dc,	// (0x00062d25) list_medium_line_t2_g3

0xd4dc,	// (0x00062d25) list_medium_line_t2_right_icon

0xd4dc,	// (0x00062d25) list_medium_line_t2_right_iconx2

0xd4dc,	// (0x00062d25) list_medium_line_t3

0xd4dc,	// (0x00062d25) list_medium_line_t3_g2

0xd4dc,	// (0x00062d25) list_medium_line_t3_g3

0xd4dc,	// (0x00062d25) list_medium_line_t3_right_iconx2

0xd4e5,	// (0x00062d2e) list_medium_line_t4_g4

0xd4ee,	// (0x00062d37) list_medium_line_x2

0xd4ee,	// (0x00062d37) list_medium_line_x2_t2_g2

0xd4ee,	// (0x00062d37) list_medium_line_x2_t2_g3

0xd4ee,	// (0x00062d37) list_medium_line_x2_t2_g4

0xd4ee,	// (0x00062d37) list_medium_line_x2_t3

0xd4ee,	// (0x00062d37) list_medium_line_x2_t3_g2

0xd4ee,	// (0x00062d37) list_medium_line_x2_t3_g3

0xd4ee,	// (0x00062d37) list_medium_line_x2_t3_g4

0xd4ee,	// (0x00062d37) list_medium_line_x2_t4_g2

0xd4ee,	// (0x00062d37) list_medium_line_x2_t4_g4

0xd4f7,	// (0x00062d40) list_medium_line_x3

0xd4f7,	// (0x00062d40) list_medium_line_x3_t4

0xd4f7,	// (0x00062d40) list_medium_line_x3_t4_g4

0xd4e5,	// (0x00062d2e) list_medium_line_x4_t4

0xd4e5,	// (0x00062d2e) list_medium_line_x4_t4_g7

0xd4e5,	// (0x00062d2e) list_medium_line_x4_t5

0xd500,	// (0x00062d49) list_single_fs_dyc_pane_ParamLimits

0xd500,	// (0x00062d49) list_single_fs_dyc_pane

0x3af7,	// (0x00059340) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x4_t4_g7_g1

0xda1f,	// (0x00063268) list_medium_line_x4_t4_g7_g2_ParamLimits

0xda1f,	// (0x00063268) list_medium_line_x4_t4_g7_g2

0xda2b,	// (0x00063274) list_medium_line_x4_t4_g7_g3_ParamLimits

0xda2b,	// (0x00063274) list_medium_line_x4_t4_g7_g3

0xda3a,	// (0x00063283) list_medium_line_x4_t4_g7_g4_ParamLimits

0xda3a,	// (0x00063283) list_medium_line_x4_t4_g7_g4

0xda46,	// (0x0006328f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xda46,	// (0x0006328f) list_medium_line_x4_t4_g7_g5

0xda55,	// (0x0006329e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xda55,	// (0x0006329e) list_medium_line_x4_t4_g7_g6

0xda64,	// (0x000632ad) list_medium_line_x4_t4_g7_g7_ParamLimits

0xda64,	// (0x000632ad) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0006546c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0006546c) list_medium_line_x4_t4_g7_g

0xda70,	// (0x000632b9) list_medium_line_x4_t4_g7_t1_ParamLimits

0xda70,	// (0x000632b9) list_medium_line_x4_t4_g7_t1

0xda85,	// (0x000632ce) list_medium_line_x4_t4_g7_t2_ParamLimits

0xda85,	// (0x000632ce) list_medium_line_x4_t4_g7_t2

0xda9a,	// (0x000632e3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xda9a,	// (0x000632e3) list_medium_line_x4_t4_g7_t3

0xdaaf,	// (0x000632f8) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdaaf,	// (0x000632f8) list_medium_line_x4_t4_g7_t4

0xdac1,	// (0x0006330a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdac1,	// (0x0006330a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0006547b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0006547b) list_medium_line_x4_t4_g7_t

0xdad3,	// (0x0006331c) list_single_dyc_row_pane_ParamLimits

0xdad3,	// (0x0006331c) list_single_dyc_row_pane

0xa2e6,	// (0x0005fb2f) call5_gesture_pane_ParamLimits

0xa2e6,	// (0x0005fb2f) call5_gesture_pane

0xa33c,	// (0x0005fb85) call5_windows_pane_ParamLimits

0xa33c,	// (0x0005fb85) call5_windows_pane

0xa3eb,	// (0x0005fc34) call5_swipe_1_pane_cp_ParamLimits

0xa3eb,	// (0x0005fc34) call5_swipe_1_pane_cp

0xa3f7,	// (0x0005fc40) call5_swipe_2_pane_cp_ParamLimits

0xa3f7,	// (0x0005fc40) call5_swipe_2_pane_cp

0x081f,	// (0x00056068) call5_image_pane_cp

0xa403,	// (0x0005fc4c) popup_call5_audio_first_window_cp_ParamLimits

0xa403,	// (0x0005fc4c) popup_call5_audio_first_window_cp

0xe0a1,	// (0x000638ea) call5_swipe_1_pane_g1_cp_ParamLimits

0xe0a1,	// (0x000638ea) call5_swipe_1_pane_g1_cp

0xe0e1,	// (0x0006392a) call5_swipe_1_pane_g2_cp

0xe0ba,	// (0x00063903) call5_swipe_1_pane_t1_cp_ParamLimits

0xe0ba,	// (0x00063903) call5_swipe_1_pane_t1_cp

0xe0a1,	// (0x000638ea) call5_swipe_2_pane_g1_cp_ParamLimits

0xe0a1,	// (0x000638ea) call5_swipe_2_pane_g1_cp

0xe0e9,	// (0x00063932) call5_swipe_2_pane_g2_cp

0xe0f1,	// (0x0006393a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe0f1,	// (0x0006393a) call5_swipe_2_pane_t1_cp

0x1c38,	// (0x00057481) main_sp_fs_email_pane

0xe106,	// (0x0006394f) main_sp_fs_listscroll_pane_te

0xe10f,	// (0x00063958) popup_sp_fs_action_menu_pane_ParamLimits

0xe10f,	// (0x00063958) popup_sp_fs_action_menu_pane

0xc45b,	// (0x00061ca4) bg_sp_fs_ctrlbar_pane_g1

0xe155,	// (0x0006399e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe15e,	// (0x000639a7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe167,	// (0x000639b0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc45b,	// (0x00061ca4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00065564) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x6b2c,	// (0x0005c375) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x6b2c,	// (0x0005c375) bg_sp_fs_ctrlbar_ddmenu_pane

0xe170,	// (0x000639b9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe170,	// (0x000639b9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe17c,	// (0x000639c5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe17c,	// (0x000639c5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0006556d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0006556d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe188,	// (0x000639d1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe188,	// (0x000639d1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe1a2,	// (0x000639eb) list_medium_line_t2_right_icon_g1

0xa411,	// (0x0005fc5a) list_medium_line_t2_right_icon_t1

0xa421,	// (0x0005fc6a) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00065572) list_medium_line_t2_right_icon_t

0x1c2a,	// (0x00057473) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1c2a,	// (0x00057473) bg_sp_fs_ctrlbar_pane

0xa477,	// (0x0005fcc0) main_sp_fs_ctrlbar_button_pane_cp01

0xa47f,	// (0x0005fcc8) main_sp_fs_ctrlbar_ddmenu_pane

0xe1e4,	// (0x00063a2d) main_sp_fs_ctrlbar_pane_g1

0xe1f0,	// (0x00063a39) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00065577) main_sp_fs_ctrlbar_pane_g

0xe1fc,	// (0x00063a45) main_sp_fs_ctrlbar_pane_t1

0xa489,	// (0x0005fcd2) main_sp_fs_ctrlbar_pane

0xa4ad,	// (0x0005fcf6) main_sp_fs_listscroll_pane_te_cp01

0xa4cd,	// (0x0005fd16) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa4cd,	// (0x0005fd16) popup_sp_fs_action_menu_pane_cp01

0x1c38,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1c38,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp01

0xe211,	// (0x00063a5a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe211,	// (0x00063a5a) sp_fs_action_menu_list_gene_pane_g1

0xe220,	// (0x00063a69) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe220,	// (0x00063a69) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0006557c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0006557c) sp_fs_action_menu_list_gene_pane_g

0xe22d,	// (0x00063a76) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe22d,	// (0x00063a76) sp_fs_action_menu_list_gene_pane_t1

0xe245,	// (0x00063a8e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe245,	// (0x00063a8e) sp_fs_action_menu_list_gene_pane

0xe268,	// (0x00063ab1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe268,	// (0x00063ab1) popup_sp_fs_action_menu_bg_pane

0xe276,	// (0x00063abf) sp_fs_action_menu_list_pane_ParamLimits

0xe276,	// (0x00063abf) sp_fs_action_menu_list_pane

0xe29a,	// (0x00063ae3) sp_fs_scroll_pane_cp01_ParamLimits

0xe29a,	// (0x00063ae3) sp_fs_scroll_pane_cp01

0xa4e9,	// (0x0005fd32) list_medium_line_plain_t2_t1

0xa4f9,	// (0x0005fd42) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00065581) list_medium_line_plain_t2_t

0xa507,	// (0x0005fd50) list_medium_line_plain_t3_t1

0xa517,	// (0x0005fd60) list_medium_line_plain_t3_t2

0xa525,	// (0x0005fd6e) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00065586) list_medium_line_plain_t3_t

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t2_g2_g1

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00064af6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00064af6) list_medium_line_x2_t2_g2_g

0x4a73,	// (0x0005a2bc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4a73,	// (0x0005a2bc) list_medium_line_x2_t2_g2_t1

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0006558d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0006558d) list_medium_line_x2_t2_g2_t

0x3af7,	// (0x00059340) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t4_g2_g1

0xe2c0,	// (0x00063b09) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe2c0,	// (0x00063b09) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x00065592) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x00065592) list_medium_line_x2_t4_g2_g

0xa533,	// (0x0005fd7c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa533,	// (0x0005fd7c) list_medium_line_x2_t4_g2_t1

0xa54d,	// (0x0005fd96) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa54d,	// (0x0005fd96) list_medium_line_x2_t4_g2_t2

0xa563,	// (0x0005fdac) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa563,	// (0x0005fdac) list_medium_line_x2_t4_g2_t3

0x3b44,	// (0x0005938d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00065597) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00065597) list_medium_line_x2_t4_g2_t

0xe2d2,	// (0x00063b1b) list_medium_line_t3_right_iconx2_g1

0xe1a2,	// (0x000639eb) list_medium_line_t3_right_iconx2_g2

0xa578,	// (0x0005fdc1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x000655a0) list_medium_line_t3_right_iconx2_g

0xa582,	// (0x0005fdcb) list_medium_line_t3_right_iconx2_t1

0xa592,	// (0x0005fddb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x000655a7) list_medium_line_t3_right_iconx2_t

0x3af7,	// (0x00059340) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x3_t4_g4_g1

0x3b03,	// (0x0005934c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x3_t4_g4_g2

0x3bab,	// (0x000593f4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3bab,	// (0x000593f4) list_medium_line_x3_t4_g4_g3

0xe2da,	// (0x00063b23) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe2da,	// (0x00063b23) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x000655ac) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x000655ac) list_medium_line_x3_t4_g4_g

0xa5a0,	// (0x0005fde9) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa5a0,	// (0x0005fde9) list_medium_line_x3_t4_g4_t1

0xa5b7,	// (0x0005fe00) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa5b7,	// (0x0005fe00) list_medium_line_x3_t4_g4_t2

0xe2e6,	// (0x00063b2f) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe2e6,	// (0x00063b2f) list_medium_line_x3_t4_g4_t3

0xe2fb,	// (0x00063b44) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe2fb,	// (0x00063b44) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x000655b5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x000655b5) list_medium_line_x3_t4_g4_t

0xa5cc,	// (0x0005fe15) list_single_dyc_row_text_pane_t1_ParamLimits

0xa5cc,	// (0x0005fe15) list_single_dyc_row_text_pane_t1

0xa60f,	// (0x0005fe58) list_single_dyc_row_text_pane_t2_ParamLimits

0xa60f,	// (0x0005fe58) list_single_dyc_row_text_pane_t2

0xe318,	// (0x00063b61) list_single_dyc_row_text_pane_t3_ParamLimits

0xe318,	// (0x00063b61) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x000655be) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x000655be) list_single_dyc_row_text_pane_t

0xe32a,	// (0x00063b73) list_single_dyc_row_pane_g1_ParamLimits

0xe32a,	// (0x00063b73) list_single_dyc_row_pane_g1

0xe336,	// (0x00063b7f) list_single_dyc_row_pane_g2_ParamLimits

0xe336,	// (0x00063b7f) list_single_dyc_row_pane_g2

0xe342,	// (0x00063b8b) list_single_dyc_row_pane_g3_ParamLimits

0xe342,	// (0x00063b8b) list_single_dyc_row_pane_g3

0xe34e,	// (0x00063b97) list_single_dyc_row_pane_g4_ParamLimits

0xe34e,	// (0x00063b97) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x000655c5) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x000655c5) list_single_dyc_row_pane_g

0xe35a,	// (0x00063ba3) list_single_dyc_row_text_pane_ParamLimits

0xe35a,	// (0x00063ba3) list_single_dyc_row_text_pane

0xb4d1,	// (0x00060d1a) bg_sp_fs_scroll_pane

0xe379,	// (0x00063bc2) thumb_sp_fs_scroll_pane

0xd188,	// (0x000629d1) list_medium_line_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_g1

0xe382,	// (0x00063bcb) list_medium_line_t1_ParamLimits

0xe382,	// (0x00063bcb) list_medium_line_t1

0x3af7,	// (0x00059340) list_medium_line_x2_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_g1

0x3b03,	// (0x0005934c) list_medium_line_x2_g2_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x000655ce) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x000655ce) list_medium_line_x2_g

0xe397,	// (0x00063be0) list_medium_line_x2_t1_ParamLimits

0xe397,	// (0x00063be0) list_medium_line_x2_t1

0x3af7,	// (0x00059340) list_medium_line_x3_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x3_g1

0x3b03,	// (0x0005934c) list_medium_line_x3_g2_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x000655ce) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x000655ce) list_medium_line_x3_g

0xe397,	// (0x00063be0) list_medium_line_x3_t1_ParamLimits

0xe397,	// (0x00063be0) list_medium_line_x3_t1

0xe3ad,	// (0x00063bf6) thumb_sp_fs_scroll_pane_g1

0xe3b6,	// (0x00063bff) thumb_sp_fs_scroll_pane_g2

0xe3bf,	// (0x00063c08) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000655d3) thumb_sp_fs_scroll_pane_g

0xe3ad,	// (0x00063bf6) bg_sp_fs_scroll_pane_g1

0xe3b6,	// (0x00063bff) bg_sp_fs_scroll_pane_g2

0xe3bf,	// (0x00063c08) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000655d3) bg_sp_fs_scroll_pane_g

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3af7,	// (0x00059340) list_medium_line_x2_t3_g4_g1

0x3b9f,	// (0x000593e8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3b9f,	// (0x000593e8) list_medium_line_x2_t3_g4_g2

0x3b03,	// (0x0005934c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3b03,	// (0x0005934c) list_medium_line_x2_t3_g4_g3

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3b0f,	// (0x00059358) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00064b72) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00064b72) list_medium_line_x2_t3_g4_g

0xa669,	// (0x0005feb2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa669,	// (0x0005feb2) list_medium_line_x2_t3_g4_t1

0xa67f,	// (0x0005fec8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa67f,	// (0x0005fec8) list_medium_line_x2_t3_g4_t2

0x3b44,	// (0x0005938d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3b44,	// (0x0005938d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x000655da) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x000655da) list_medium_line_x2_t3_g4_t

0xd188,	// (0x000629d1) list_medium_line_g2_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_g2_g1

0xd194,	// (0x000629dd) list_medium_line_g2_g2_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x000652a2) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x000652a2) list_medium_line_g2_g

0xe3c8,	// (0x00063c11) list_medium_line_g2_t1_ParamLimits

0xe3c8,	// (0x00063c11) list_medium_line_g2_t1

0xd188,	// (0x000629d1) list_medium_line_t3_g2_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t3_g2_g1

0xd194,	// (0x000629dd) list_medium_line_t3_g2_g2_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x000652a2) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x000652a2) list_medium_line_t3_g2_g

0xa698,	// (0x0005fee1) list_medium_line_t3_g2_t1_ParamLimits

0xa698,	// (0x0005fee1) list_medium_line_t3_g2_t1

0xa6b2,	// (0x0005fefb) list_medium_line_t3_g2_t2_ParamLimits

0xa6b2,	// (0x0005fefb) list_medium_line_t3_g2_t2

0xa6c8,	// (0x0005ff11) list_medium_line_t3_g2_t3_ParamLimits

0xa6c8,	// (0x0005ff11) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x000655e1) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x000655e1) list_medium_line_t3_g2_t

0xe1a2,	// (0x000639eb) list_medium_line_right_icon_g1

0xe3dd,	// (0x00063c26) list_medium_line_right_icon_t1

0xd188,	// (0x000629d1) list_medium_line_t2_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t2_g1

0xa6df,	// (0x0005ff28) list_medium_line_t2_t1_ParamLimits

0xa6df,	// (0x0005ff28) list_medium_line_t2_t1

0xa6f9,	// (0x0005ff42) list_medium_line_t2_t2_ParamLimits

0xa6f9,	// (0x0005ff42) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x000655e8) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x000655e8) list_medium_line_t2_t

0xd188,	// (0x000629d1) list_medium_line_t3_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t3_g1

0xa70e,	// (0x0005ff57) list_medium_line_t3_t1_ParamLimits

0xa70e,	// (0x0005ff57) list_medium_line_t3_t1

0xa725,	// (0x0005ff6e) list_medium_line_t3_t2_ParamLimits

0xa725,	// (0x0005ff6e) list_medium_line_t3_t2

0xa73a,	// (0x0005ff83) list_medium_line_t3_t3_ParamLimits

0xa73a,	// (0x0005ff83) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x000655ed) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x000655ed) list_medium_line_t3_t

0xd188,	// (0x000629d1) list_medium_line_g3_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_g3_g1

0xe3eb,	// (0x00063c34) list_medium_line_g3_g2_ParamLimits

0xe3eb,	// (0x00063c34) list_medium_line_g3_g2

0xd194,	// (0x000629dd) list_medium_line_g3_g3_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x000655f4) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x000655f4) list_medium_line_g3_g

0xe3f7,	// (0x00063c40) list_medium_line_g3_t1_ParamLimits

0xe3f7,	// (0x00063c40) list_medium_line_g3_t1

0xd188,	// (0x000629d1) list_medium_line_t2_g3_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t2_g3_g1

0xe3eb,	// (0x00063c34) list_medium_line_t2_g3_g2_ParamLimits

0xe3eb,	// (0x00063c34) list_medium_line_t2_g3_g2

0xd194,	// (0x000629dd) list_medium_line_t2_g3_g3_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x000655f4) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x000655f4) list_medium_line_t2_g3_g

0xa74c,	// (0x0005ff95) list_medium_line_t2_g3_t1_ParamLimits

0xa74c,	// (0x0005ff95) list_medium_line_t2_g3_t1

0xa763,	// (0x0005ffac) list_medium_line_t2_g3_t2_ParamLimits

0xa763,	// (0x0005ffac) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x000655fb) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x000655fb) list_medium_line_t2_g3_t

0xd188,	// (0x000629d1) list_medium_line_t3_g3_g1_ParamLimits

0xd188,	// (0x000629d1) list_medium_line_t3_g3_g1

0xe3eb,	// (0x00063c34) list_medium_line_t3_g3_g2_ParamLimits

0xe3eb,	// (0x00063c34) list_medium_line_t3_g3_g2

0xd194,	// (0x000629dd) list_medium_line_t3_g3_g3_ParamLimits

0xd194,	// (0x000629dd) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x000655f4) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x000655f4) list_medium_line_t3_g3_g

0xa778,	// (0x0005ffc1) list_medium_line_t3_g3_t1_ParamLimits

0xa778,	// (0x0005ffc1) list_medium_line_t3_g3_t1

0xa791,	// (0x0005ffda) list_medium_line_t3_g3_t2_ParamLimits

0xa791,	// (0x0005ffda) list_medium_line_t3_g3_t2

0xa7a7,	// (0x0005fff0) list_medium_line_t3_g3_t3_ParamLimits

0xa7a7,	// (0x0005fff0) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x00065600) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x00065600) list_medium_line_t3_g3_t

0xe2d2,	// (0x00063b1b) list_medium_line_right_iconx2_g1

0xe1a2,	// (0x000639eb) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00065607) list_medium_line_right_iconx2_g

0xe40c,	// (0x00063c55) list_medium_line_right_iconx2_t1

0xe2d2,	// (0x00063b1b) list_medium_line_t2_right_iconx2_g1

0xe1a2,	// (0x000639eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x00065607) list_medium_line_t2_right_iconx2_g

0xa7c1,	// (0x0006000a) list_medium_line_t2_right_iconx2_t1

0xa7d1,	// (0x0006001a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0006560c) list_medium_line_t2_right_iconx2_t

0xe41a,	// (0x00063c63) list_medium_line_x4_t4_t1

0xa7df,	// (0x00060028) list_medium_line_x4_t4_t2

0xa7ef,	// (0x00060038) list_medium_line_x4_t4_t3

0xa7ff,	// (0x00060048) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00065611) list_medium_line_x4_t4_t

0xa849,	// (0x00060092) tport_appsw_pane_ParamLimits

0xa849,	// (0x00060092) tport_appsw_pane

0xa85c,	// (0x000600a5) tport_contact_pane_ParamLimits

0xa85c,	// (0x000600a5) tport_contact_pane

0xa86f,	// (0x000600b8) tport_listscroll_pane_ParamLimits

0xa86f,	// (0x000600b8) tport_listscroll_pane

0xa885,	// (0x000600ce) cell_tport_appsw_pane_ParamLimits

0xa885,	// (0x000600ce) cell_tport_appsw_pane

0xced5,	// (0x0006271e) tport_appsw_pane_g1_ParamLimits

0xced5,	// (0x0006271e) tport_appsw_pane_g1

0xe428,	// (0x00063c71) tport_contact_pane_g1

0xe431,	// (0x00063c7a) tport_contact_pane_t1

0xe43f,	// (0x00063c88) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0006561a) tport_contact_pane_t

0xe44d,	// (0x00063c96) list_tport_pane

0xe456,	// (0x00063c9f) scroll_pane_cp_030

0xa8a2,	// (0x000600eb) cell_tport_appsw_pane_g1

0xe45f,	// (0x00063ca8) cell_tport_appsw_pane_t1

0xb4d1,	// (0x00060d1a) grid_highlight_pane_cp019

0xa8ba,	// (0x00060103) list_tport_double_graphic_pane_ParamLimits

0xa8ba,	// (0x00060103) list_tport_double_graphic_pane

0x1c38,	// (0x00057481) list_highlight_pane_cp023_ParamLimits

0x1c38,	// (0x00057481) list_highlight_pane_cp023

0xa8ca,	// (0x00060113) list_tport_double_graphic_pane_g1_ParamLimits

0xa8ca,	// (0x00060113) list_tport_double_graphic_pane_g1

0xa8d7,	// (0x00060120) list_tport_double_graphic_pane_t1_ParamLimits

0xa8d7,	// (0x00060120) list_tport_double_graphic_pane_t1

0xa8ec,	// (0x00060135) list_tport_double_graphic_pane_t2_ParamLimits

0xa8ec,	// (0x00060135) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00065626) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00065626) list_tport_double_graphic_pane_t

0xb4d1,	// (0x00060d1a) main_cale_note_pane

0x8797,	// (0x0005dfe0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8797,	// (0x0005dfe0) cell_vitu2_function_top_wide_pane_cp01

0x9f9d,	// (0x0005f7e6) wait_bar_pane_cp05_ParamLimits

0xb4d1,	// (0x00060d1a) listscroll_cmail_pane

0xe475,	// (0x00063cbe) list_cmail_pane

0xa908,	// (0x00060151) list_cmail_body_pane

0xa920,	// (0x00060169) list_single_cmail_header_caption_pane

0xa940,	// (0x00060189) list_single_cmail_header_detail_pane_ParamLimits

0xa940,	// (0x00060189) list_single_cmail_header_detail_pane

0xa972,	// (0x000601bb) list_single_cmail_header_caption_pane_t1

0xa982,	// (0x000601cb) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa982,	// (0x000601cb) list_single_cmail_header_detail_pane_g1

0xe495,	// (0x00063cde) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe495,	// (0x00063cde) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0006562b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0006562b) list_single_cmail_header_detail_pane_g

0xe4ae,	// (0x00063cf7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe4ae,	// (0x00063cf7) list_single_cmail_header_detail_pane_t1

0xe4ec,	// (0x00063d35) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe4ec,	// (0x00063d35) list_single_cmail_header_editor_pane_bg

0xdd5d,	// (0x000635a6) list_cmail_body_pane_g1

0xe4fe,	// (0x00063d47) list_cmail_body_pane_t1

0xcf2f,	// (0x00062778) list_single_cmail_header_editor_pane_bg_g1

0xc191,	// (0x000619da) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf3f,	// (0x00062788) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf37,	// (0x00062780) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd180,	// (0x000629c9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf5f,	// (0x000627a8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf4f,	// (0x00062798) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf57,	// (0x000627a0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc171,	// (0x000619ba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa9c0,	// (0x00060209) calenote_gesture_pane_ParamLimits

0xa9c0,	// (0x00060209) calenote_gesture_pane

0xa9e0,	// (0x00060229) calenote_window_pane_ParamLimits

0xa9e0,	// (0x00060229) calenote_window_pane

0xe50c,	// (0x00063d55) popup_note_window_cp01

0xa9fc,	// (0x00060245) calenote_swipe_1_pane_ParamLimits

0xa9fc,	// (0x00060245) calenote_swipe_1_pane

0xa3f7,	// (0x0005fc40) calenote_swipe_2_pane_ParamLimits

0xa3f7,	// (0x0005fc40) calenote_swipe_2_pane

0xe0a1,	// (0x000638ea) calenote_swipe_1_pane_g1_ParamLimits

0xe0a1,	// (0x000638ea) calenote_swipe_1_pane_g1

0xe0ae,	// (0x000638f7) calenote_swipe_1_pane_g2_ParamLimits

0xe0ae,	// (0x000638f7) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0006555a) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0006555a) calenote_swipe_1_pane_g

0xe51e,	// (0x00063d67) calenote_swipe_1_pane_t1_ParamLimits

0xe51e,	// (0x00063d67) calenote_swipe_1_pane_t1

0xe0a1,	// (0x000638ea) calenote_swipe_2_pane_g1_ParamLimits

0xe0a1,	// (0x000638ea) calenote_swipe_2_pane_g1

0xe53d,	// (0x00063d86) calenote_swipe_2_pane_g2_ParamLimits

0xe53d,	// (0x00063d86) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00065637) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00065637) calenote_swipe_2_pane_g

0xe549,	// (0x00063d92) calenote_swipe_2_pane_t1_ParamLimits

0xe549,	// (0x00063d92) calenote_swipe_2_pane_t1

0xb4d1,	// (0x00060d1a) main_mup_navstr_pane

0x7421,	// (0x0005cc6a) main_mup3_pane_t7_ParamLimits

0x7421,	// (0x0005cc6a) main_mup3_pane_t7

0xedea,	// (0x00064633) main_mp4_pane_g6_ParamLimits

0xedea,	// (0x00064633) main_mp4_pane_g6

0xef80,	// (0x000647c9) main_image3_pane_t4_ParamLimits

0xef80,	// (0x000647c9) main_image3_pane_t4

0xaa11,	// (0x0006025a) popup_navstr_preview_pane_ParamLimits

0xaa11,	// (0x0006025a) popup_navstr_preview_pane

0xaa21,	// (0x0006026a) scroll_navstr_pane_ParamLimits

0xaa21,	// (0x0006026a) scroll_navstr_pane

0xb4d1,	// (0x00060d1a) bg_popup_preview_window_pane_cp04

0xe570,	// (0x00063db9) popup_navstr_preview_pane_t1

0xaa35,	// (0x0006027e) scroll_navstr_pane_g1_ParamLimits

0xaa35,	// (0x0006027e) scroll_navstr_pane_g1

0xaa49,	// (0x00060292) scroll_navstr_pane_t1_ParamLimits

0xaa49,	// (0x00060292) scroll_navstr_pane_t1

0xe515,	// (0x00063d5e) bg_button_pane_cp014

0xe515,	// (0x00063d5e) bg_button_pane_cp030

0xa28c,	// (0x0005fad5) list_double_fisheye_pane_g4_ParamLimits

0xa28c,	// (0x0005fad5) list_double_fisheye_pane_g4

0xa298,	// (0x0005fae1) list_double_fisheye_pane_g5_ParamLimits

0xa298,	// (0x0005fae1) list_double_fisheye_pane_g5

0xe47d,	// (0x00063cc6) sp_fs_scroll_pane_cp03

0xe1e4,	// (0x00063a2d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe1f0,	// (0x00063a39) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00065577) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe1fc,	// (0x00063a45) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa8fe,	// (0x00060147) sp_fs_scroll_pane_cp02

0xbe2b,	// (0x00061674) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbe2b,	// (0x00061674) popup_sp_fs_calendar_preview_list_single_pane

0xb4d1,	// (0x00060d1a) main_cam6_pano_pane

0x1c38,	// (0x00057481) main_mup3_pane_ParamLimits

0xb4d1,	// (0x00060d1a) main_phacti_pane

0x9e6e,	// (0x0005f6b7) bg_button_pane_cp11

0x9e88,	// (0x0005f6d1) main_mobtv_info_pane_g2_ParamLimits

0x9e88,	// (0x0005f6d1) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x000654d7) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x000654d7) main_mobtv_info_pane_g

0xa063,	// (0x0005f8ac) sc_clock_pane_t5_ParamLimits

0xa063,	// (0x0005f8ac) sc_clock_pane_t5

0xa0ed,	// (0x0005f936) main_radioblah_pane_g1_ParamLimits

0xdfed,	// (0x00063836) main_radioblah_pane_t3_ParamLimits

0xdfed,	// (0x00063836) main_radioblah_pane_t3

0xe005,	// (0x0006384e) main_radioblah_pane_t4_ParamLimits

0xe005,	// (0x0006384e) main_radioblah_pane_t4

0xa115,	// (0x0005f95e) main_radioblah_text_pane_ParamLimits

0xa115,	// (0x0005f95e) main_radioblah_text_pane

0xa127,	// (0x0005f970) main_radioblah_info_pane_g1_ParamLimits

0xa1c0,	// (0x0005fa09) main_radioblah_info_pane_t4_ParamLimits

0xa1c0,	// (0x0005fa09) main_radioblah_info_pane_t4

0x1c38,	// (0x00057481) main_sp_fs_calendar_pane

0xaa60,	// (0x000602a9) main_phacti_pane_g1

0xaa68,	// (0x000602b1) phacti_note_pane_ParamLimits

0xaa68,	// (0x000602b1) phacti_note_pane

0xe587,	// (0x00063dd0) phacti_term_pane_ParamLimits

0xe587,	// (0x00063dd0) phacti_term_pane

0xe59c,	// (0x00063de5) phacti_note_pane_t1_ParamLimits

0xe59c,	// (0x00063de5) phacti_note_pane_t1

0xe5b3,	// (0x00063dfc) phacti_term_pane_g1

0xe5bb,	// (0x00063e04) phacti_term_pane_t1_ParamLimits

0xe5bb,	// (0x00063e04) phacti_term_pane_t1

0xe5e5,	// (0x00063e2e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5ed,	// (0x00063e36) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00065641) popup_sp_fs_calendar_preview_list_single_pane_g

0xe5f5,	// (0x00063e3e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe5f5,	// (0x00063e3e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe60b,	// (0x00063e54) aid_popup_sp_fs_bg_corner_pane

0xc45b,	// (0x00061ca4) popup_sp_fs_calendar_preview_bg_pane_g1

0xb4d1,	// (0x00060d1a) popup_sp_fs_calendar_preview_bg_pane

0xe613,	// (0x00063e5c) popup_sp_fs_calendar_preview_list_pane

0x1c38,	// (0x00057481) bg_main_sp_fs_cale_pane_ParamLimits

0x1c38,	// (0x00057481) bg_main_sp_fs_cale_pane

0xe61b,	// (0x00063e64) listscroll_cale_mrui_pane_ParamLimits

0xe61b,	// (0x00063e64) listscroll_cale_mrui_pane

0xe62f,	// (0x00063e78) listscroll_sp_fs_schedule_track_pane

0xe638,	// (0x00063e81) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe638,	// (0x00063e81) main_sp_fs_ctrlbar_pane_cp01

0xe649,	// (0x00063e92) main_sp_fs_ribbon_pane

0xe651,	// (0x00063e9a) popup_sp_fs_cale_preview_window

0xaabf,	// (0x00060308) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaabf,	// (0x00060308) list_single_sp_fs_schedule_track_pane

0x1c38,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c38,	// (0x00057481) bg_sp_fs_highlight_list_pane_cp03

0xaad3,	// (0x0006031c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaad3,	// (0x0006031c) list_single_sp_fs_schedule_track_pane_g1

0xaadf,	// (0x00060328) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaadf,	// (0x00060328) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00065646) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00065646) list_single_sp_fs_schedule_track_pane_g

0xaaeb,	// (0x00060334) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaaeb,	// (0x00060334) list_single_sp_fs_schedule_track_pane_t1

0xab0d,	// (0x00060356) sp_fs_schedule_track_pane_ParamLimits

0xab0d,	// (0x00060356) sp_fs_schedule_track_pane

0xe663,	// (0x00063eac) sp_fs_schedule_track_pane_g1

0xe66b,	// (0x00063eb4) sp_fs_schedule_track_pane_g2

0xe673,	// (0x00063ebc) sp_fs_schedule_track_pane_g3

0xe67b,	// (0x00063ec4) sp_fs_schedule_track_pane_g4

0xe683,	// (0x00063ecc) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0006564b) sp_fs_schedule_track_pane_g

0xcf2f,	// (0x00062778) bg_sp_fs_schedule_viewer_highlight_g1

0xc191,	// (0x000619da) bg_sp_fs_schedule_viewer_highlight_g2

0xcf37,	// (0x00062780) bg_sp_fs_schedule_viewer_highlight_g3

0xcf3f,	// (0x00062788) bg_sp_fs_schedule_viewer_highlight_g4

0xd180,	// (0x000629c9) bg_sp_fs_schedule_viewer_highlight_g5

0xcf4f,	// (0x00062798) bg_sp_fs_schedule_viewer_highlight_g6

0xcf57,	// (0x000627a0) bg_sp_fs_schedule_viewer_highlight_g7

0xcf5f,	// (0x000627a8) bg_sp_fs_schedule_viewer_highlight_g8

0xc171,	// (0x000619ba) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00065656) bg_sp_fs_schedule_viewer_highlight_g

0xb4d1,	// (0x00060d1a) bg_main_sp_fs_ribbon_pane

0xab22,	// (0x0006036b) main_sp_fs_ribbon_pane_g1

0xe68b,	// (0x00063ed4) main_sp_fs_ribbon_pane_t1

0xab2b,	// (0x00060374) main_sp_fs_ribbon_pane_t2

0xe69a,	// (0x00063ee3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00065669) main_sp_fs_ribbon_pane_t

0xe6a9,	// (0x00063ef2) main_sp_fs_ribbon_scheduler_pane

0xe6b1,	// (0x00063efa) bg_main_sp_fs_ribbon_pane_g1

0xe6ba,	// (0x00063f03) bg_main_sp_fs_ribbon_pane_g2

0xe6c3,	// (0x00063f0c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00065670) bg_main_sp_fs_ribbon_pane_g

0xe6cb,	// (0x00063f14) main_sp_fs_ribbon_scheduler_pane_g1

0xe6d4,	// (0x00063f1d) main_sp_fs_ribbon_scheduler_pane_g2

0xe6dd,	// (0x00063f26) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00065677) main_sp_fs_ribbon_scheduler_pane_g

0xe6e6,	// (0x00063f2f) list_cale_mrui_pane

0xab3a,	// (0x00060383) sp_fs_scroll_pane_cp07_ParamLimits

0xab3a,	// (0x00060383) sp_fs_scroll_pane_cp07

0xab50,	// (0x00060399) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xab50,	// (0x00060399) bg_sp_fs_schedule_viewer_highlight

0xe6ef,	// (0x00063f38) list_single_sp_fs_schedule_track_pane_cp01

0xe6f7,	// (0x00063f40) list_sp_fs_schedule_track_pane

0xe6ff,	// (0x00063f48) sp_fs_scroll_pane_cp06_ParamLimits

0xe6ff,	// (0x00063f48) sp_fs_scroll_pane_cp06

0xc45b,	// (0x00061ca4) bgmain_sp_fs_calendar_pane_g1

0xab62,	// (0x000603ab) list_single_cale_mrui_pane_ParamLimits

0xab62,	// (0x000603ab) list_single_cale_mrui_pane

0xe711,	// (0x00063f5a) list_single_cale_mrui_row_pane_ParamLimits

0xe711,	// (0x00063f5a) list_single_cale_mrui_row_pane

0xe71e,	// (0x00063f67) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe71e,	// (0x00063f67) list_single_cale_mrui_row_pane_g1

0xe756,	// (0x00063f9f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe756,	// (0x00063f9f) list_single_cale_mrui_row_pane_t1

0xab88,	// (0x000603d1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xab88,	// (0x000603d1) list_single_cale_mrui_row_pane_t2

0xe768,	// (0x00063fb1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe768,	// (0x00063fb1) list_single_cale_mrui_row_pane_t3

0xe797,	// (0x00063fe0) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe797,	// (0x00063fe0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x00065683) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x00065683) list_single_cale_mrui_row_pane_t

0xabee,	// (0x00060437) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xabee,	// (0x00060437) list_single_cmail_header_editor_pane_bg_cp01

0xac12,	// (0x0006045b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xac12,	// (0x0006045b) list_single_cmail_header_editor_pane_bg_cp02

0xac2e,	// (0x00060477) main_radioblah_text_pane_t1_ParamLimits

0xac2e,	// (0x00060477) main_radioblah_text_pane_t1

0xe7c6,	// (0x0006400f) cam6_indi_pane_cp01

0xe7ce,	// (0x00064017) cam6_mode_pane_cp01

0xe7d6,	// (0x0006401f) cam6_pano_pane

0xe7df,	// (0x00064028) cam6_zoom_pane_cp01

0xe7e9,	// (0x00064032) cam6_pano_image_pane

0xe7f2,	// (0x0006403b) cam6_pano_pane_g1

0xdd5d,	// (0x000635a6) cam6_pano_pane_g2

0xe7fb,	// (0x00064044) cam6_pano_pane_g3

0xe804,	// (0x0006404d) cam6_pano_pane_g4

0xca3b,	// (0x00062284) cam6_pano_pane_g5

0xe80d,	// (0x00064056) cam6_pano_pane_g6

0xe815,	// (0x0006405e) cam6_pano_pane_g7

0xe81d,	// (0x00064066) cam6_pano_pane_g8

0xe826,	// (0x0006406f) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0006568c) cam6_pano_pane_g

0xb4d1,	// (0x00060d1a) main_browser_tag_pane

0xe568,	// (0x00063db1) grid_navstr_albumart_pane

0xe831,	// (0x0006407a) cell_navstr_albumart_pane_ParamLimits

0xe831,	// (0x0006407a) cell_navstr_albumart_pane

0xe84d,	// (0x00064096) cell_navstr_albumart_pane_g1

0x1a43,	// (0x0005728c) cell_navstr_albumart_pane_g2

0x1a53,	// (0x0005729c) cell_navstr_albumart_pane_g3

0x1a4b,	// (0x00057294) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0006569f) cell_navstr_albumart_pane_g

0xac49,	// (0x00060492) bt_list_pane_ParamLimits

0xac49,	// (0x00060492) bt_list_pane

0xac5f,	// (0x000604a8) bt_list_pane_t1

0xac6e,	// (0x000604b7) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x000656a8) bt_list_pane_t

0xb4d1,	// (0x00060d1a) main_cale_prevew_pane

0xac7d,	// (0x000604c6) popup_cale_preview_window_ParamLimits

0xac7d,	// (0x000604c6) popup_cale_preview_window

0x1c38,	// (0x00057481) bg_popup_preview_window_pane_cp05_ParamLimits

0x1c38,	// (0x00057481) bg_popup_preview_window_pane_cp05

0xe855,	// (0x0006409e) list_cale_preview_pane_ParamLimits

0xe855,	// (0x0006409e) list_cale_preview_pane

0xac98,	// (0x000604e1) list_double_cale_preview_pane_ParamLimits

0xac98,	// (0x000604e1) list_double_cale_preview_pane

0xacac,	// (0x000604f5) list_single_cale_preview_pane_ParamLimits

0xacac,	// (0x000604f5) list_single_cale_preview_pane

0xacc4,	// (0x0006050d) list_single_cale_preview_pane_g1

0xaccc,	// (0x00060515) list_single_cale_preview_pane_t1_ParamLimits

0xaccc,	// (0x00060515) list_single_cale_preview_pane_t1

0xace1,	// (0x0006052a) list_double_cale_preview_pane_g1

0xace9,	// (0x00060532) list_double_cale_preview_pane_t1_ParamLimits

0xace9,	// (0x00060532) list_double_cale_preview_pane_t1

0xacfe,	// (0x00060547) list_double_cale_preview_pane_t2_ParamLimits

0xacfe,	// (0x00060547) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x000656ad) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x000656ad) list_double_cale_preview_pane_t

0xb4d1,	// (0x00060d1a) main_ezdial_pane

0x1c38,	// (0x00057481) main_sp_fs_email_pane_ParamLimits

0xa42f,	// (0x0005fc78) cmail_ddmenu_btn01_pane_ParamLimits

0xa42f,	// (0x0005fc78) cmail_ddmenu_btn01_pane

0xa442,	// (0x0005fc8b) cmail_ddmenu_btn02_pane_ParamLimits

0xa442,	// (0x0005fc8b) cmail_ddmenu_btn02_pane

0xa465,	// (0x0005fcae) cmail_ddmenu_btn03_pane_ParamLimits

0xa465,	// (0x0005fcae) cmail_ddmenu_btn03_pane

0xa489,	// (0x0005fcd2) main_sp_fs_ctrlbar_pane_ParamLimits

0xa4ad,	// (0x0005fcf6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa908,	// (0x00060151) list_cmail_body_pane_ParamLimits

0xe48c,	// (0x00063cd5) bg_button_pane_cp12

0xe4a1,	// (0x00063cea) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe4a1,	// (0x00063cea) list_single_cmail_header_detail_pane_g3

0xa99a,	// (0x000601e3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa99a,	// (0x000601e3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00065632) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00065632) list_single_cmail_header_detail_pane_t

0xe5d0,	// (0x00063e19) phacti_term_pane_t2_ParamLimits

0xe5d0,	// (0x00063e19) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0006563c) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0006563c) phacti_term_pane_t

0xe861,	// (0x000640aa) aid_size_list_single_double

0xad16,	// (0x0006055f) popup_ezdial_listscroll_window

0xad32,	// (0x0006057b) popup_number_entry_window_cp01

0x081f,	// (0x00056068) bg_popup_call_pane_cp09

0xe86d,	// (0x000640b6) ezdial_list_pane

0xe875,	// (0x000640be) scroll_pane_cp23

0x1c2a,	// (0x00057473) bg_button_pane_cp028_ParamLimits

0x1c2a,	// (0x00057473) bg_button_pane_cp028

0xad40,	// (0x00060589) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xad40,	// (0x00060589) cmail_ddmenu_btn01_pane_g1

0xad4c,	// (0x00060595) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xad4c,	// (0x00060595) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x000656b2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x000656b2) cmail_ddmenu_btn01_pane_g

0xe87d,	// (0x000640c6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe87d,	// (0x000640c6) cmail_ddmenu_btn01_pane_t1

0x1c2a,	// (0x00057473) bg_button_pane_cp029_ParamLimits

0x1c2a,	// (0x00057473) bg_button_pane_cp029

0xad58,	// (0x000605a1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xad58,	// (0x000605a1) cmail_ddmenu_btn02_pane_g1

0xad70,	// (0x000605b9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xad70,	// (0x000605b9) cmail_ddmenu_btn02_pane_t1

0x1c38,	// (0x00057481) bg_button_pane_cp031_ParamLimits

0x1c38,	// (0x00057481) bg_button_pane_cp031

0xad58,	// (0x000605a1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xad58,	// (0x000605a1) cmail_ddmenu_btn03_pane_g1

0xad70,	// (0x000605b9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xad70,	// (0x000605b9) cmail_ddmenu_btn03_pane_t1

0x7fbf,	// (0x0005d808) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fd9,	// (0x0005d822) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fd9,	// (0x0005d822) cell_dialer2_keypad_pane_t1_copy1

0x9d11,	// (0x0005f55a) ncimui_group_button_pane

0x1c38,	// (0x00057481) main_sp_fs_calendar_pane_ParamLimits

0xa920,	// (0x00060169) list_single_cmail_header_caption_pane_ParamLimits

0xd4d3,	// (0x00062d1c) aid_recal_txt_sm_pane

0xb4d1,	// (0x00060d1a) mian_recal_day_pane

0xe651,	// (0x00063e9a) popup_sp_fs_cale_preview_window_ParamLimits

0xb4d1,	// (0x00060d1a) list_recal_day_pane

0xe8ab,	// (0x000640f4) list_single_recal_day_pane_ParamLimits

0xe8ab,	// (0x000640f4) list_single_recal_day_pane

0xe8bd,	// (0x00064106) list_single_recal_day_pane_g1_ParamLimits

0xe8bd,	// (0x00064106) list_single_recal_day_pane_g1

0xe8c9,	// (0x00064112) list_single_recal_day_pane_g2_ParamLimits

0xe8c9,	// (0x00064112) list_single_recal_day_pane_g2

0xe8d5,	// (0x0006411e) list_single_recal_day_pane_g3_ParamLimits

0xe8d5,	// (0x0006411e) list_single_recal_day_pane_g3

0xad94,	// (0x000605dd) list_single_recal_day_pane_g4_ParamLimits

0xad94,	// (0x000605dd) list_single_recal_day_pane_g4

0xe8e1,	// (0x0006412a) list_single_recal_day_pane_g5_ParamLimits

0xe8e1,	// (0x0006412a) list_single_recal_day_pane_g5

0xe8ed,	// (0x00064136) list_single_recal_day_pane_g6_ParamLimits

0xe8ed,	// (0x00064136) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x000656c1) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x000656c1) list_single_recal_day_pane_g

0xe8f9,	// (0x00064142) list_single_recal_day_pane_t1

0xe907,	// (0x00064150) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x000656ce) list_single_recal_day_pane_t

0xada2,	// (0x000605eb) ncimui_query_button_pane_ParamLimits

0xada2,	// (0x000605eb) ncimui_query_button_pane

0xadb2,	// (0x000605fb) ncimui_query_button_pane_t1_ParamLimits

0xadb2,	// (0x000605fb) ncimui_query_button_pane_t1

0xe915,	// (0x0006415e) ncimui_query_button_pane_t2_ParamLimits

0xe915,	// (0x0006415e) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x000656d3) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x000656d3) ncimui_query_button_pane_t

0xadc5,	// (0x0006060e) query_button_pane_ParamLimits

0xadc5,	// (0x0006060e) query_button_pane

0xb4d1,	// (0x00060d1a) bg_button_pane_cp0028

0xe928,	// (0x00064171) query_button_pane_t1

0x5de5,	// (0x0005b62e) main_tport_pane_ParamLimits

0xa80f,	// (0x00060058) bg_popup_window_pane_cp01_ParamLimits

0xa80f,	// (0x00060058) bg_popup_window_pane_cp01

0xa825,	// (0x0006006e) heading_pane_cp08_ParamLimits

0xa825,	// (0x0006006e) heading_pane_cp08

0xa836,	// (0x0006007f) heading_pane_cp07_ParamLimits

0xa836,	// (0x0006007f) heading_pane_cp07

0xa8aa,	// (0x000600f3) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0006561f) cell_tport_appsw_pane_g

0x532e,	// (0x0005ab77) input_candi_list_open_g1

0x0370,	// (0x00055bb9) list_cale_time_pane_g6_ParamLimits

0x0370,	// (0x00055bb9) list_cale_time_pane_g6

0x6e65,	// (0x0005c6ae) aid_size_touch_calib_1_ParamLimits

0x6e65,	// (0x0005c6ae) aid_size_touch_calib_1

0x6e71,	// (0x0005c6ba) aid_size_touch_calib_2_ParamLimits

0x6e71,	// (0x0005c6ba) aid_size_touch_calib_2

0x6e87,	// (0x0005c6d0) aid_size_touch_calib_3_ParamLimits

0x6e87,	// (0x0005c6d0) aid_size_touch_calib_3

0x6ea5,	// (0x0005c6ee) aid_size_touch_calib_4_ParamLimits

0x6ea5,	// (0x0005c6ee) aid_size_touch_calib_4

0x6ebb,	// (0x0005c704) main_touch_calib_button_group_pane_ParamLimits

0x6ebb,	// (0x0005c704) main_touch_calib_button_group_pane

0x6ed2,	// (0x0005c71b) main_touch_calib_pane_g1_ParamLimits

0x6ede,	// (0x0005c727) main_touch_calib_pane_g2_ParamLimits

0x6eea,	// (0x0005c733) main_touch_calib_pane_g3_ParamLimits

0x6ef6,	// (0x0005c73f) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00065001) main_touch_calib_pane_g_ParamLimits

0x6f02,	// (0x0005c74b) main_touch_calib_pane_t1_ParamLimits

0x6f1c,	// (0x0005c765) main_touch_calib_pane_t2_ParamLimits

0x6f36,	// (0x0005c77f) main_touch_calib_pane_t3_ParamLimits

0x6f4a,	// (0x0005c793) main_touch_calib_pane_t4_ParamLimits

0x6f5e,	// (0x0005c7a7) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0006500a) main_touch_calib_pane_t_ParamLimits

0xc805,	// (0x0006204e) list_single_fp_cale_pane_g3_ParamLimits

0xc805,	// (0x0006204e) list_single_fp_cale_pane_g3

0xefe6,	// (0x0006482f) bg_button_pane_cp012_ParamLimits

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp03_ParamLimits

0x8fa3,	// (0x0005e7ec) cell_vitu2_function_top_pane_g1_ParamLimits

0xefe6,	// (0x0006482f) bg_vkb2_func_pane_cp04_ParamLimits

0x9cc5,	// (0x0005f50e) main_ncimui_button_group_pane_ParamLimits

0x9cc5,	// (0x0005f50e) main_ncimui_button_group_pane

0x9cff,	// (0x0005f548) main_ncimui_pane_t3_ParamLimits

0x9cff,	// (0x0005f548) main_ncimui_pane_t3

0xe57e,	// (0x00063dc7) phacti_button_group_pane

0xe861,	// (0x000640aa) aid_size_list_single_double_ParamLimits

0xad16,	// (0x0006055f) popup_ezdial_listscroll_window_ParamLimits

0xad32,	// (0x0006057b) popup_number_entry_window_cp01_ParamLimits

0xadd8,	// (0x00060621) phacti_button_pane_ParamLimits

0xadd8,	// (0x00060621) phacti_button_pane

0xb4d1,	// (0x00060d1a) bg_button_pane_cp14

0xe936,	// (0x0006417f) phacti_button_pane_t1

0xade9,	// (0x00060632) main_touch_calib_button_pane_ParamLimits

0xade9,	// (0x00060632) main_touch_calib_button_pane

0xbc9f,	// (0x000614e8) bg_button_pane_cp18_ParamLimits

0xbc9f,	// (0x000614e8) bg_button_pane_cp18

0xe944,	// (0x0006418d) main_touch_calib_button_pane_t1_ParamLimits

0xe944,	// (0x0006418d) main_touch_calib_button_pane_t1

0xe95a,	// (0x000641a3) main_touch_calib_button_pane_t2_ParamLimits

0xe95a,	// (0x000641a3) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x000656d8) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x000656d8) main_touch_calib_button_pane_t

0xb4d1,	// (0x00060d1a) cell_ncimui_button_pane

0xb4d1,	// (0x00060d1a) bg_button_pane_cp032

0xe978,	// (0x000641c1) cell_ncimui_button_pane_t1

0xef5e,	// (0x000647a7) image3_infobar_pane_ParamLimits

0xef5e,	// (0x000647a7) image3_infobar_pane

0xa08f,	// (0x0005f8d8) fs_bigclock_status_pane_ParamLimits

0xa08f,	// (0x0005f8d8) fs_bigclock_status_pane

0xa09c,	// (0x0005f8e5) main_fs_bigclock_clock_pane_ParamLimits

0xa09c,	// (0x0005f8e5) main_fs_bigclock_clock_pane

0xa0af,	// (0x0005f8f8) main_fs_bigclock_indi_pane_ParamLimits

0xa0af,	// (0x0005f8f8) main_fs_bigclock_indi_pane

0xa0ca,	// (0x0005f913) main_fs_bigclock_swipe_pane_ParamLimits

0xa0ca,	// (0x0005f913) main_fs_bigclock_swipe_pane

0xb4d1,	// (0x00060d1a) main_fs_clock_dumped_data

0xde6a,	// (0x000636b3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xde6a,	// (0x000636b3) list_single_fs_bigclock_indicator_pane_g1

0xde8a,	// (0x000636d3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xde8a,	// (0x000636d3) list_single_fs_bigclock_indicator_pane_g2

0xdea4,	// (0x000636ed) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdea4,	// (0x000636ed) list_single_fs_bigclock_indicator_pane_g3

0xdec0,	// (0x00063709) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdec0,	// (0x00063709) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0006550b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0006550b) list_single_fs_bigclock_indicator_pane_g

0xdee6,	// (0x0006372f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdee6,	// (0x0006372f) list_single_fs_bigclock_indicator_pane_t1

0xdf0e,	// (0x00063757) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf0e,	// (0x00063757) list_single_fs_bigclock_indicator_pane_t2

0xdf36,	// (0x0006377f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf36,	// (0x0006377f) list_single_fs_bigclock_indicator_pane_t3

0xdf60,	// (0x000637a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf60,	// (0x000637a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00065516) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00065516) list_single_fs_bigclock_indicator_pane_t

0xe986,	// (0x000641cf) image3_infobar_fav_pane_ParamLimits

0xe986,	// (0x000641cf) image3_infobar_fav_pane

0xe996,	// (0x000641df) image3_infobar_loc_pane_ParamLimits

0xe996,	// (0x000641df) image3_infobar_loc_pane

0xe9ac,	// (0x000641f5) image3_infobar_time_pane_ParamLimits

0xe9ac,	// (0x000641f5) image3_infobar_time_pane

0xc45b,	// (0x00061ca4) image3_infobar_time_pane_g1

0xe9bc,	// (0x00064205) image3_infobar_time_pane_t1

0xc45b,	// (0x00061ca4) image3_infobar_loc_pane_g1

0xe9ca,	// (0x00064213) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x000656dd) image3_infobar_loc_pane_g

0xe9d2,	// (0x0006421b) image3_infobar_loc_pane_t1

0xc45b,	// (0x00061ca4) image3_infobar_fav_pane_g1

0xe9e0,	// (0x00064229) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x000656e2) image3_infobar_fav_pane_g

0xe9e8,	// (0x00064231) fs_bigclock_status_battery_pane

0xe9f1,	// (0x0006423a) fs_bigclock_status_signal_pane

0xe9fa,	// (0x00064243) fs_bigclock_status_title_pane

0xea03,	// (0x0006424c) fs_bigclock_status_signal_pane_g1

0xea0c,	// (0x00064255) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x000656e7) fs_bigclock_status_signal_pane_g

0xea14,	// (0x0006425d) fs_bigclock_status_battery_pane_g1

0xea1d,	// (0x00064266) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x000656ec) fs_bigclock_status_battery_pane_g

0xea25,	// (0x0006426e) fs_bigclock_status_title_pane_t1

0xc45b,	// (0x00061ca4) main_fs_bigclock_clock_pane_g1

0xea33,	// (0x0006427c) main_fs_bigclock_clock_pane_g2

0xea33,	// (0x0006427c) main_fs_bigclock_clock_pane_g3

0xea33,	// (0x0006427c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x000656f1) main_fs_bigclock_clock_pane_g

0xea3f,	// (0x00064288) main_fs_bigclock_clock_pane_t1

0xea4d,	// (0x00064296) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x000656fa) main_fs_bigclock_clock_pane_t

0xea5c,	// (0x000642a5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xea5c,	// (0x000642a5) list_single_fs_bigclock_indicator_pane

0xadfe,	// (0x00060647) list_single_fs_bigclock_pane_ParamLimits

0xadfe,	// (0x00060647) list_single_fs_bigclock_pane

0xea76,	// (0x000642bf) main_fs_bigclock_indicator_pane_t1

0xea85,	// (0x000642ce) list_single_fs_bigclock_pane_g1

0xea8d,	// (0x000642d6) list_single_fs_bigclock_pane_t1

0xc45b,	// (0x00061ca4) main_fs_bigclock_swipe_pane_g1

0xeacb,	// (0x00064314) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0006570b) main_fs_bigclock_swipe_pane_g

0xead3,	// (0x0006431c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xead3,	// (0x0006431c) main_fs_bigclock_swipe_pane_t1

0x4ab4,	// (0x0005a2fd) call_type_pane_ParamLimits

0xb4d1,	// (0x00060d1a) main_btmg_pane

0xe74a,	// (0x00063f93) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe74a,	// (0x00063f93) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0006567e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0006567e) list_single_cale_mrui_row_pane_g

0xe89b,	// (0x000640e4) list_recal_vselct_arw_lo_pane

0xe8a3,	// (0x000640ec) list_recal_vselct_arw_up_pane

0xd4ca,	// (0x00062d13) list_recal_vselct_pane

0xeaf0,	// (0x00064339) btmg_button_pane

0xae64,	// (0x000606ad) main_btmg_pane_g1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp044

0xeafa,	// (0x00064343) btmg_button_pane_t1

0x1c22,	// (0x0005746b) aid_listscroll_gen

0x1c38,	// (0x00057481) main_cntbar_detail_pane

0xe46d,	// (0x00063cb6) list_cmail_folder_pane

0xe47d,	// (0x00063cc6) sp_fs_scroll_pane_cp03_ParamLimits

0xae6e,	// (0x000606b7) list_single_fs_dyc_pane_cp01_ParamLimits

0xae6e,	// (0x000606b7) list_single_fs_dyc_pane_cp01

0xeb08,	// (0x00064351) aid_size_cmail_indent

0xeb11,	// (0x0006435a) list_single_dyc_row_pane_cp01

0xaebc,	// (0x00060705) cntbar_detail_list_pane_ParamLimits

0xaebc,	// (0x00060705) cntbar_detail_list_pane

0xaf0e,	// (0x00060757) main_cntbar_detail_cont_pane_ParamLimits

0xaf0e,	// (0x00060757) main_cntbar_detail_cont_pane

0x49d7,	// (0x0005a220) scroll_pane_cp032_ParamLimits

0x49d7,	// (0x0005a220) scroll_pane_cp032

0xaf22,	// (0x0006076b) cntbar_detail_list_event_pane_ParamLimits

0xaf22,	// (0x0006076b) cntbar_detail_list_event_pane

0xaece,	// (0x00060717) cntbar_detail_list_shct_pane

0xc1df,	// (0x00061a28) aid_list_gen

0xeb1a,	// (0x00064363) aid_scroll

0xeb23,	// (0x0006436c) aid_size_touch_scroll_bar

0xeb2c,	// (0x00064375) aid_list_double

0xeb35,	// (0x0006437e) aid_list_single

0x0089,	// (0x000558d2) aid_list_single_lg

0xeb3e,	// (0x00064387) aid_list_z_g_a_sm

0xeb46,	// (0x0006438f) aid_list_z_g_d

0xeb4e,	// (0x00064397) aid_txt_z_prm

0xaf32,	// (0x0006077b) aid_txt_z_prm_cp01

0xaf40,	// (0x00060789) aid_txt_z_sec

0xaf4e,	// (0x00060797) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaf4e,	// (0x00060797) main_cntbar_detail_cont_pane_g1

0xaf62,	// (0x000607ab) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaf62,	// (0x000607ab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00065710) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00065710) main_cntbar_detail_cont_pane_g

0xeb5c,	// (0x000643a5) main_cntbar_detail_cont_pane_t1

0xeb6a,	// (0x000643b3) main_cntbar_detail_cont_pane_t2

0xeb78,	// (0x000643c1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00065715) main_cntbar_detail_cont_pane_t

0xaf72,	// (0x000607bb) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaf72,	// (0x000607bb) cell_cntbar_detail_list_shct_pane

0xeb86,	// (0x000643cf) cntbar_detail_list_shct_pane_g1

0xeb8f,	// (0x000643d8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0006571c) cntbar_detail_list_shct_pane_g

0xaf84,	// (0x000607cd) cntbar_detail_list_event_pane_g1_ParamLimits

0xaf84,	// (0x000607cd) cntbar_detail_list_event_pane_g1

0xaf90,	// (0x000607d9) cntbar_detail_list_event_pane_g2_ParamLimits

0xaf90,	// (0x000607d9) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00065721) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00065721) cntbar_detail_list_event_pane_g

0xaffe,	// (0x00060847) cntbar_detail_list_event_pane_t1_ParamLimits

0xaffe,	// (0x00060847) cntbar_detail_list_event_pane_t1

0xb013,	// (0x0006085c) cntbar_detail_list_event_pane_t2_ParamLimits

0xb013,	// (0x0006085c) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0006572e) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0006572e) cntbar_detail_list_event_pane_t

0xc45b,	// (0x00061ca4) cell_cntbar_detail_list_shct_pane_g1

0x4e58,	// (0x0005a6a1) navi_pane_mv_g3

0x1c38,	// (0x00057481) main_cntbar_detail_pane_ParamLimits

0xb4d1,	// (0x00060d1a) main_notif_wgt_pane

0xeda0,	// (0x000645e9) aid_tch_main_mp4_pane_g4

0xef54,	// (0x0006479d) popup_slider_window_cp02

0xe892,	// (0x000640db) list_recal_day_event_pane

0xae8c,	// (0x000606d5) cntbar_detail_btn_pane_ParamLimits

0xae8c,	// (0x000606d5) cntbar_detail_btn_pane

0xaea4,	// (0x000606ed) cntbar_detail_btn_pane_cp01_ParamLimits

0xaea4,	// (0x000606ed) cntbar_detail_btn_pane_cp01

0xaece,	// (0x00060717) cntbar_detail_list_shct_pane_ParamLimits

0xaede,	// (0x00060727) cntbar_detail_pane_g1_ParamLimits

0xaede,	// (0x00060727) cntbar_detail_pane_g1

0xaef2,	// (0x0006073b) cntbar_detail_pane_t1_ParamLimits

0xaef2,	// (0x0006073b) cntbar_detail_pane_t1

0xaf9c,	// (0x000607e5) cntbar_detail_list_event_pane_g3_ParamLimits

0xaf9c,	// (0x000607e5) cntbar_detail_list_event_pane_g3

0xafb4,	// (0x000607fd) cntbar_detail_list_event_pane_g4_ParamLimits

0xafb4,	// (0x000607fd) cntbar_detail_list_event_pane_g4

0xafcc,	// (0x00060815) cntbar_detail_list_event_pane_g5_ParamLimits

0xafcc,	// (0x00060815) cntbar_detail_list_event_pane_g5

0xafe4,	// (0x0006082d) cntbar_detail_list_event_pane_g6_ParamLimits

0xafe4,	// (0x0006082d) cntbar_detail_list_event_pane_g6

0xb028,	// (0x00060871) cntbar_detail_list_event_pane_t3_ParamLimits

0xb028,	// (0x00060871) cntbar_detail_list_event_pane_t3

0xb03a,	// (0x00060883) popup_notif_wgt_window_ParamLimits

0xb03a,	// (0x00060883) popup_notif_wgt_window

0xb053,	// (0x0006089c) popup_submenu_window_cp01_ParamLimits

0xb053,	// (0x0006089c) popup_submenu_window_cp01

0x081f,	// (0x00056068) bg_popup_window_pane_cp10

0xeb98,	// (0x000643e1) listscroll_notif_wgt_pane

0xeba2,	// (0x000643eb) list_notif_wgt_window

0xebab,	// (0x000643f4) scroll_pane_cp033

0xebb4,	// (0x000643fd) list_notif_wgt_row_pane_ParamLimits

0xebb4,	// (0x000643fd) list_notif_wgt_row_pane

0xebc8,	// (0x00064411) aid_size_list_notif_wgt_del

0xebd1,	// (0x0006441a) list_notif_wgt_row_pane_g1

0xebd9,	// (0x00064422) list_notif_wgt_row_pane_g2

0xebe1,	// (0x0006442a) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00065735) list_notif_wgt_row_pane_g

0xebea,	// (0x00064433) list_notif_wgt_row_pane_t1

0xebf8,	// (0x00064441) list_notif_wgt_row_pane_t2

0xec06,	// (0x0006444f) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0006573c) list_notif_wgt_row_pane_t

0xd1b2,	// (0x000629fb) list_recal_day_event_pane_g1

0xec14,	// (0x0006445d) list_recal_day_event_pane_t1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp045

0xec23,	// (0x0006446c) cntbar_detail_btn_pane_t1

0x1c2a,	// (0x00057473) main_callh_pane_ParamLimits

0x1c2a,	// (0x00057473) main_callh_pane

0xb4d1,	// (0x00060d1a) main_coverflow0_pane

0xb4d1,	// (0x00060d1a) main_wgtman_pane

0xa0d8,	// (0x0005f921) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa0d8,	// (0x0005f921) main_fs_bigclock_unlock_btn_pane

0xa89a,	// (0x000600e3) bg_button_pane_cp16

0xa8b2,	// (0x000600fb) cell_tport_appsw_pane_g3

0xb065,	// (0x000608ae) cf0_flow_pane_ParamLimits

0xb065,	// (0x000608ae) cf0_flow_pane

0xec31,	// (0x0006447a) listscroll_cf0_pane

0xec3a,	// (0x00064483) main_cf0_pane_g1

0xb07a,	// (0x000608c3) main_cf0_pane_t1_ParamLimits

0xb07a,	// (0x000608c3) main_cf0_pane_t1

0xb092,	// (0x000608db) main_cf0_pane_t2_ParamLimits

0xb092,	// (0x000608db) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00065743) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00065743) main_cf0_pane_t

0xec44,	// (0x0006448d) scroll_pane_cp11

0xb0aa,	// (0x000608f3) cf0_flow_pane_g1

0xb0b6,	// (0x000608ff) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00065748) cf0_flow_pane_g

0xb0c2,	// (0x0006090b) cf0_flow_pane_t1

0xb4d1,	// (0x00060d1a) main_call6_pane

0xb4d1,	// (0x00060d1a) main_calllock_pane

0xb0d4,	// (0x0006091d) call6_btn_grp_pane_ParamLimits

0xb0d4,	// (0x0006091d) call6_btn_grp_pane

0xb0f0,	// (0x00060939) call6_pane_g1_ParamLimits

0xb0f0,	// (0x00060939) call6_pane_g1

0xb106,	// (0x0006094f) popup_call6_1st_window_ParamLimits

0xb106,	// (0x0006094f) popup_call6_1st_window

0xb117,	// (0x00060960) popup_call6_2nd_window_ParamLimits

0xb117,	// (0x00060960) popup_call6_2nd_window

0xb128,	// (0x00060971) cell_call6_btn_pane_ParamLimits

0xb128,	// (0x00060971) cell_call6_btn_pane

0x081f,	// (0x00056068) bg_popup_call2_in_pane_cp03

0xec4f,	// (0x00064498) popup_call6_1st_window_g1

0xec57,	// (0x000644a0) popup_call6_1st_window_g2

0xec5f,	// (0x000644a8) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0006574d) popup_call6_1st_window_g

0xec67,	// (0x000644b0) popup_call6_1st_window_t1

0xec76,	// (0x000644bf) popup_call6_1st_window_t2

0xec86,	// (0x000644cf) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00065754) popup_call6_1st_window_t

0x081f,	// (0x00056068) bg_popup_call2_in_pane_cp04

0xec4f,	// (0x00064498) popup_call6_2nd_window_g1

0xec57,	// (0x000644a0) popup_call6_2nd_window_g2

0xec5f,	// (0x000644a8) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0006574d) popup_call6_2nd_window_g

0xec67,	// (0x000644b0) popup_call6_2nd_window_t1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp15

0xec96,	// (0x000644df) cell_call6_btn_pane_g1

0xec9f,	// (0x000644e8) cell_call6_btn_pane_t1

0xb13c,	// (0x00060985) listscroll_wgtman_pane_ParamLimits

0xb13c,	// (0x00060985) listscroll_wgtman_pane

0xb154,	// (0x0006099d) wgtman_btn_pane_ParamLimits

0xb154,	// (0x0006099d) wgtman_btn_pane

0x06e5,	// (0x00055f2e) aid_scroll_copy1

0xecae,	// (0x000644f7) list_wgtman_pane

0xb16d,	// (0x000609b6) wgtman_btn_pane_g1_ParamLimits

0xb16d,	// (0x000609b6) wgtman_btn_pane_g1

0xb181,	// (0x000609ca) wgtman_btn_pane_t1_ParamLimits

0xb181,	// (0x000609ca) wgtman_btn_pane_t1

0xecb8,	// (0x00064501) wgtman_btn_pane_t2_ParamLimits

0xecb8,	// (0x00064501) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0006575b) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0006575b) wgtman_btn_pane_t

0xeccc,	// (0x00064515) listrow_wgtman_pane_ParamLimits

0xeccc,	// (0x00064515) listrow_wgtman_pane

0xece0,	// (0x00064529) listrow_wgtman_pane_g1

0xb19c,	// (0x000609e5) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00065760) listrow_wgtman_pane_g

0xece9,	// (0x00064532) listrow_wgtman_pane_t1

0xecf7,	// (0x00064540) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00065765) listrow_wgtman_pane_t

0xed05,	// (0x0006454e) wait_bar_pane_cp09

0xed0d,	// (0x00064556) main_calllock_btn_pane

0xed17,	// (0x00064560) main_calllock_pane_g1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp17

0xed23,	// (0x0006456c) main_calllock_btn_pane_g1

0xed2c,	// (0x00064575) main_calllock_btn_pane_t1

0xb4d1,	// (0x00060d1a) main_dialer3_pane

0xb4d1,	// (0x00060d1a) main_fmrd2_pane

0xc45b,	// (0x00061ca4) main_fs_bigclock_unlock_btn_pane_g1

0xed43,	// (0x0006458c) main_fs_bigclock_unlock_btn_pane_t1

0xb1a6,	// (0x000609ef) area_fmrd2_info_pane_ParamLimits

0xb1a6,	// (0x000609ef) area_fmrd2_info_pane

0xb1ba,	// (0x00060a03) area_fmrd2_visual_pane_ParamLimits

0xb1ba,	// (0x00060a03) area_fmrd2_visual_pane

0xb1c8,	// (0x00060a11) fmrd2_indi_pane_ParamLimits

0xb1c8,	// (0x00060a11) fmrd2_indi_pane

0xb1d5,	// (0x00060a1e) area_fmrd2_visual_pane_g1

0xb1dd,	// (0x00060a26) area_fmrd2_visual_pane_t1

0xb1ed,	// (0x00060a36) area_fmrd2_visual_pane_t2

0xb1fd,	// (0x00060a46) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0006576f) area_fmrd2_visual_pane_t

0xb20d,	// (0x00060a56) area_fmrd2_info_pane_g1

0xb215,	// (0x00060a5e) area_fmrd2_info_pane_t1

0xb225,	// (0x00060a6e) area_fmrd2_info_pane_t2

0xb235,	// (0x00060a7e) area_fmrd2_info_pane_t3

0xb245,	// (0x00060a8e) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00065776) area_fmrd2_info_pane_t

0xb255,	// (0x00060a9e) fmrd2_indi_pane_t1

0xb265,	// (0x00060aae) fmrd2_indi_pane_t2

0xb275,	// (0x00060abe) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0006577f) fmrd2_indi_pane_t

0xdecf,	// (0x00063718) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdecf,	// (0x00063718) list_single_fs_bigclock_indicator_pane_g5

0xdf75,	// (0x000637be) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdf75,	// (0x000637be) list_single_fs_bigclock_indicator_pane_t5

0xaa7c,	// (0x000602c5) aid_cell_bcale_month_pane_ParamLimits

0xaa7c,	// (0x000602c5) aid_cell_bcale_month_pane

0xaa8e,	// (0x000602d7) bcale_month_pane_ParamLimits

0xaa8e,	// (0x000602d7) bcale_month_pane

0xaaa6,	// (0x000602ef) bcale_preview_pane_ParamLimits

0xaaa6,	// (0x000602ef) bcale_preview_pane

0xea8d,	// (0x000642d6) list_single_fs_bigclock_pane_t1_ParamLimits

0xeaa7,	// (0x000642f0) list_single_fs_bigclock_pane_t2_ParamLimits

0xeaa7,	// (0x000642f0) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x00065706) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x00065706) list_single_fs_bigclock_pane_t

0xed3b,	// (0x00064584) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0006576a) main_fs_bigclock_unlock_btn_pane_g

0xb285,	// (0x00060ace) aid_dia3_key_size_ParamLimits

0xb285,	// (0x00060ace) aid_dia3_key_size

0xb294,	// (0x00060add) aid_dia3_listrow_size_ParamLimits

0xb294,	// (0x00060add) aid_dia3_listrow_size

0xb2a2,	// (0x00060aeb) dia3_keypad_fun_pane_ParamLimits

0xb2a2,	// (0x00060aeb) dia3_keypad_fun_pane

0xb2be,	// (0x00060b07) dia3_keypad_num_pane_ParamLimits

0xb2be,	// (0x00060b07) dia3_keypad_num_pane

0xb2d7,	// (0x00060b20) dia3_listscroll_pane_ParamLimits

0xb2d7,	// (0x00060b20) dia3_listscroll_pane

0xb2ea,	// (0x00060b33) dia3_numentry_pane_ParamLimits

0xb2ea,	// (0x00060b33) dia3_numentry_pane

0x0042,	// (0x0005588b) dia3_list_pane

0x004d,	// (0x00055896) scroll_pane_cp12

0xb4d1,	// (0x00060d1a) bg_dia3_numentry_pane

0x0058,	// (0x000558a1) dia3_numentry_pane_t1

0xb2fb,	// (0x00060b44) cell_dia3_key_num_pane

0xb303,	// (0x00060b4c) cell_dia3_key0_fun_pane_ParamLimits

0xb303,	// (0x00060b4c) cell_dia3_key0_fun_pane

0xb317,	// (0x00060b60) cell_dia3_key1_fun_pane_ParamLimits

0xb317,	// (0x00060b60) cell_dia3_key1_fun_pane

0xb32f,	// (0x00060b78) dia3_listrow_pane

0xdbe7,	// (0x00063430) bg_dia3_numentry_pane_g1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp21

0x0092,	// (0x000558db) cell_dia3_key_num_pane_t1

0x00a0,	// (0x000558e9) cell_dia3_key_num_pane_t2

0x00af,	// (0x000558f8) cell_dia3_key_num_pane_t3

0x00be,	// (0x00055907) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00065786) cell_dia3_key_num_pane_t

0xb4d1,	// (0x00060d1a) bg_button_pane_cp19

0xb338,	// (0x00060b81) cell_dia3_key0_fun_pane_g1

0xb4d1,	// (0x00060d1a) bg_button_pane_cp20

0xb340,	// (0x00060b89) cell_dia3_key1_fun_pane_g1

0xb348,	// (0x00060b91) area_left_week_number_pane

0xb351,	// (0x00060b9a) area_top_day_name_pane

0xb35a,	// (0x00060ba3) frame_month_view_pane

0xb366,	// (0x00060baf) grid_month_view_pane

0xb370,	// (0x00060bb9) cell_top_day_name_pane_ParamLimits

0xb370,	// (0x00060bb9) cell_top_day_name_pane

0xb38c,	// (0x00060bd5) cell_area_left_week_number_pane_ParamLimits

0xb38c,	// (0x00060bd5) cell_area_left_week_number_pane

0xb3a2,	// (0x00060beb) cell_month_view_pane_ParamLimits

0xb3a2,	// (0x00060beb) cell_month_view_pane

0x0152,	// (0x0005599b) frm_month_g1

0xb3c3,	// (0x00060c0c) frm_month_g2

0xb3cd,	// (0x00060c16) frm_month_g3

0xb3d7,	// (0x00060c20) frm_month_g4

0xb3e1,	// (0x00060c2a) frm_month_g5

0xb3eb,	// (0x00060c34) frm_month_g6

0xb3f7,	// (0x00060c40) frm_month_g7

0x0197,	// (0x000559e0) frm_month_g8

0xb403,	// (0x00060c4c) frm_month_g9

0xb40c,	// (0x00060c55) frm_month_g10

0xb415,	// (0x00060c5e) frm_month_g11

0xb41e,	// (0x00060c67) frm_month_g12

0xb427,	// (0x00060c70) frm_month_g13

0xb430,	// (0x00060c79) frm_month_g14

0xb43b,	// (0x00060c84) frm_month_g15

0xb446,	// (0x00060c8f) frm_month_g16

0x000f,

0xff46,	// (0x0006578f) frm_month_g

0xb451,	// (0x00060c9a) cell_top_day_name_pane_t1

0xb460,	// (0x00060ca9) cell_area_left_week_number_pane_g1

0xb451,	// (0x00060c9a) cell_area_left_week_number_pane_t1

0xc45b,	// (0x00061ca4) cell_month_view_pane_g1

0xb468,	// (0x00060cb1) cell_month_view_pane_t1

0xb4d1,	// (0x00060d1a) main_fps_pane

0xe1aa,	// (0x000639f3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1aa,	// (0x000639f3) cmail_ddmenu_btn02_pane_cp1

0xe1c6,	// (0x00063a0f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe1c6,	// (0x00063a0f) cmail_ddmenu_btn02_pane_cp2

0xad64,	// (0x000605ad) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xad64,	// (0x000605ad) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x000656b7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x000656b7) cmail_ddmenu_btn02_pane_g

0xad82,	// (0x000605cb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xad82,	// (0x000605cb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x000656bc) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x000656bc) cmail_ddmenu_btn02_pane_t

0xb477,	// (0x00060cc0) fps_text_pane_ParamLimits

0xb477,	// (0x00060cc0) fps_text_pane

0xb48e,	// (0x00060cd7) main_fps_pane_g1_ParamLimits

0xb48e,	// (0x00060cd7) main_fps_pane_g1

0xb4a6,	// (0x00060cef) wait_bar_pane_cp010_ParamLimits

0xb4a6,	// (0x00060cef) wait_bar_pane_cp010

0xb4b9,	// (0x00060d02) fps_text_pane_t1_ParamLimits

0xb4b9,	// (0x00060d02) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
