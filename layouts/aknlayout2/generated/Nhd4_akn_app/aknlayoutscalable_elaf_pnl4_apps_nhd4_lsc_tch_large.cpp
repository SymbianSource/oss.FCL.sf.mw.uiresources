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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006d299 };

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
0x2a4b,	// (0x0006fce4) Screen

0x2a57,	// (0x0006fcf0) application_window

0x2ab1,	// (0x0006fd4a) area_bottom_pane_ParamLimits

0x2ab1,	// (0x0006fd4a) area_bottom_pane

0x2b0e,	// (0x0006fda7) area_top_pane_ParamLimits

0x2b0e,	// (0x0006fda7) area_top_pane

0x2b6b,	// (0x0006fe04) call_video_uplink_pane_ParamLimits

0x2b6b,	// (0x0006fe04) call_video_uplink_pane

0x2b9c,	// (0x0006fe35) main_pane_ParamLimits

0x2b9c,	// (0x0006fe35) main_pane

0x124e,	// (0x0006e4e7) context_pane

0x5ec9,	// (0x00073162) navi_pane

0x5ef1,	// (0x0007318a) popup_cale_events_window_ParamLimits

0x5ef1,	// (0x0007318a) popup_cale_events_window

0x1261,	// (0x0006e4fa) popup_mup_playback_window

0x5f09,	// (0x000731a2) signal_pane

0xb514,	// (0x000787ad) main_browser_pane

0xc282,	// (0x0007951b) main_burst_pane

0x5c29,	// (0x00072ec2) main_calc_pane

0xc282,	// (0x0007951b) main_cale_day_pane

0xb514,	// (0x000787ad) main_cale_month_pane

0xc282,	// (0x0007951b) main_cale_week_pane

0xc282,	// (0x0007951b) main_call_pane

0x318b,	// (0x00070424) main_call_poc_pane

0xc282,	// (0x0007951b) main_camera_pane

0xc282,	// (0x0007951b) main_chi_dic_pane

0xc111,	// (0x000793aa) main_clock_pane

0x318b,	// (0x00070424) main_fmradio_pane

0xc282,	// (0x0007951b) main_graph_messa_pane

0x318b,	// (0x00070424) main_help_pane

0xb514,	// (0x000787ad) main_im_pane

0xb3e3,	// (0x0007867c) main_image_pane_ParamLimits

0xb3e3,	// (0x0007867c) main_image_pane

0x318b,	// (0x00070424) main_location2_pane

0xc282,	// (0x0007951b) main_location_pane

0x318b,	// (0x00070424) main_messa_pane

0x318b,	// (0x00070424) main_mp2_pane

0xc282,	// (0x0007951b) main_mp_pane

0x318b,	// (0x00070424) main_msg_pane

0x318b,	// (0x00070424) main_mup_eq_pane

0x318b,	// (0x00070424) main_mup_pane

0xc282,	// (0x0007951b) main_notes_pane

0x318b,	// (0x00070424) main_pec_pane

0x318b,	// (0x00070424) main_phob_pane

0x318b,	// (0x00070424) main_pinb_pane

0x318b,	// (0x00070424) main_postcard_pane

0x318b,	// (0x00070424) main_qdial_pane

0xc282,	// (0x0007951b) main_skin_pane

0x318b,	// (0x00070424) main_smil2_pane

0xc282,	// (0x0007951b) main_smil_pane

0xc282,	// (0x0007951b) main_video_pane

0xc282,	// (0x0007951b) main_video_tele_pane

0xb3e3,	// (0x0007867c) main_viewer_pane_ParamLimits

0xb3e3,	// (0x0007867c) main_viewer_pane

0xc282,	// (0x0007951b) main_vorec_pane

0x5c7d,	// (0x00072f16) popup_blid_sat_info_window_ParamLimits

0x5c7d,	// (0x00072f16) popup_blid_sat_info_window

0x5cd5,	// (0x00072f6e) popup_dyc_status_message_window_ParamLimits

0x5cd5,	// (0x00072f6e) popup_dyc_status_message_window

0x5ced,	// (0x00072f86) popup_grid_large_graphic_window_ParamLimits

0x5ced,	// (0x00072f86) popup_grid_large_graphic_window

0x5da3,	// (0x0007303c) popup_loc_request_window_ParamLimits

0x5da3,	// (0x0007303c) popup_loc_request_window

0x5ea1,	// (0x0007313a) popup_wml_address_window_ParamLimits

0x5ea1,	// (0x0007313a) popup_wml_address_window

0x5a63,	// (0x00072cfc) call_muted_g1

0x5713,	// (0x000729ac) popup_call_audio_conf_window_ParamLimits

0x5713,	// (0x000729ac) popup_call_audio_conf_window

0x5a77,	// (0x00072d10) popup_call_audio_first_window_ParamLimits

0x5a77,	// (0x00072d10) popup_call_audio_first_window

0x5aed,	// (0x00072d86) popup_call_audio_in_window_ParamLimits

0x5aed,	// (0x00072d86) popup_call_audio_in_window

0x5b29,	// (0x00072dc2) popup_call_audio_out_window_ParamLimits

0x5b29,	// (0x00072dc2) popup_call_audio_out_window

0x5b63,	// (0x00072dfc) popup_call_audio_second_window_ParamLimits

0x5b63,	// (0x00072dfc) popup_call_audio_second_window

0x5bb9,	// (0x00072e52) popup_call_audio_wait_window_ParamLimits

0x5bb9,	// (0x00072e52) popup_call_audio_wait_window

0x5bee,	// (0x00072e87) popup_number_entry_window_ParamLimits

0x5bee,	// (0x00072e87) popup_number_entry_window

0x2d21,	// (0x0006ffba) bg_popup_call_pane_cp05_ParamLimits

0x2d21,	// (0x0006ffba) bg_popup_call_pane_cp05

0x2d41,	// (0x0006ffda) popup_number_entry_window_t1

0x2d54,	// (0x0006ffed) popup_number_entry_window_t2

0x2d66,	// (0x0006ffff) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0007c3c8) popup_number_entry_window_t

0x2dad,	// (0x00070046) text_title_cp2

0x2dc0,	// (0x00070059) bg_popup_call_pane_cp_ParamLimits

0x2dc0,	// (0x00070059) bg_popup_call_pane_cp

0x2dce,	// (0x00070067) call_thumbnail_pane

0x2dd6,	// (0x0007006f) popup_call_audio_in_window_g1_ParamLimits

0x2dd6,	// (0x0007006f) popup_call_audio_in_window_g1

0x2de2,	// (0x0007007b) popup_call_audio_in_window_g2_ParamLimits

0x2de2,	// (0x0007007b) popup_call_audio_in_window_g2

0x2dee,	// (0x00070087) popup_call_audio_in_window_g3_ParamLimits

0x2dee,	// (0x00070087) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0007c3d1) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0007c3d1) popup_call_audio_in_window_g

0x2dfa,	// (0x00070093) popup_call_audio_in_window_t1_ParamLimits

0x2dfa,	// (0x00070093) popup_call_audio_in_window_t1

0x2e15,	// (0x000700ae) popup_call_audio_in_window_t2_ParamLimits

0x2e15,	// (0x000700ae) popup_call_audio_in_window_t2

0x2e30,	// (0x000700c9) popup_call_audio_in_window_t3_ParamLimits

0x2e30,	// (0x000700c9) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0007c3d8) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0007c3d8) popup_call_audio_in_window_t

0x2dc0,	// (0x00070059) bg_popup_call_pane_cp01_ParamLimits

0x2dc0,	// (0x00070059) bg_popup_call_pane_cp01

0x2dce,	// (0x00070067) call_thumbnail_pane_cp02

0x2e43,	// (0x000700dc) call_type_pane_cp022

0x2e4b,	// (0x000700e4) popup_call_audio_out_window_g1_ParamLimits

0x2e4b,	// (0x000700e4) popup_call_audio_out_window_g1

0x2e5d,	// (0x000700f6) popup_call_audio_out_window_g2_ParamLimits

0x2e5d,	// (0x000700f6) popup_call_audio_out_window_g2

0x2e69,	// (0x00070102) popup_call_audio_out_window_g3_ParamLimits

0x2e69,	// (0x00070102) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0007c3df) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0007c3df) popup_call_audio_out_window_g

0x2e7b,	// (0x00070114) popup_call_audio_out_window_t1_ParamLimits

0x2e7b,	// (0x00070114) popup_call_audio_out_window_t1

0x2e93,	// (0x0007012c) popup_call_audio_out_window_t2_ParamLimits

0x2e93,	// (0x0007012c) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0007c3e6) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0007c3e6) popup_call_audio_out_window_t

0x2ea8,	// (0x00070141) bg_popup_call_pane_ParamLimits

0x2ea8,	// (0x00070141) bg_popup_call_pane

0x2f2c,	// (0x000701c5) call_thumbnail_pane_cp_ParamLimits

0x2f2c,	// (0x000701c5) call_thumbnail_pane_cp

0x2f50,	// (0x000701e9) call_type_pane_cp01_ParamLimits

0x2f50,	// (0x000701e9) call_type_pane_cp01

0x2f94,	// (0x0007022d) popup_call_audio_first_window_g1_ParamLimits

0x2f94,	// (0x0007022d) popup_call_audio_first_window_g1

0x2fe0,	// (0x00070279) popup_call_audio_first_window_g2_ParamLimits

0x2fe0,	// (0x00070279) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0007c3eb) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0007c3eb) popup_call_audio_first_window_g

0x3024,	// (0x000702bd) popup_call_audio_first_window_t1_ParamLimits

0x3024,	// (0x000702bd) popup_call_audio_first_window_t1

0x30d0,	// (0x00070369) popup_call_audio_first_window_t4_ParamLimits

0x30d0,	// (0x00070369) popup_call_audio_first_window_t4

0x315c,	// (0x000703f5) popup_call_audio_first_window_t5_ParamLimits

0x315c,	// (0x000703f5) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0007c3f0) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0007c3f0) popup_call_audio_first_window_t

0x318b,	// (0x00070424) bg_popup_call_pane_cp02

0x3195,	// (0x0007042e) call_type_pane_cp023

0x319d,	// (0x00070436) popup_call_audio_wait_window_g1

0x31a5,	// (0x0007043e) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007c3f7) popup_call_audio_wait_window_g

0x31ad,	// (0x00070446) popup_call_audio_wait_window_t3

0x31bb,	// (0x00070454) bg_popup_call_pane_cp03_ParamLimits

0x31bb,	// (0x00070454) bg_popup_call_pane_cp03

0x321b,	// (0x000704b4) call_thumbnail_pane_cp011_ParamLimits

0x321b,	// (0x000704b4) call_thumbnail_pane_cp011

0x3227,	// (0x000704c0) call_type_pane_cp034_ParamLimits

0x3227,	// (0x000704c0) call_type_pane_cp034

0x3263,	// (0x000704fc) popup_call_audio_second_window_g1_ParamLimits

0x3263,	// (0x000704fc) popup_call_audio_second_window_g1

0x329f,	// (0x00070538) popup_call_audio_second_window_g2_ParamLimits

0x329f,	// (0x00070538) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0007c3fc) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0007c3fc) popup_call_audio_second_window_g

0x32db,	// (0x00070574) popup_call_audio_second_window_t1_ParamLimits

0x32db,	// (0x00070574) popup_call_audio_second_window_t1

0xb359,	// (0x000785f2) popup_call_audio_second_window_t2_ParamLimits

0xb359,	// (0x000785f2) popup_call_audio_second_window_t2

0xb38f,	// (0x00078628) popup_call_audio_second_window_t3_ParamLimits

0xb38f,	// (0x00078628) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0007c401) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0007c401) popup_call_audio_second_window_t

0x318b,	// (0x00070424) bg_popup_call_pane_cp04

0xb3c5,	// (0x0007865e) list_conf_pane

0xb3cd,	// (0x00078666) popup_call_audio_conf_window_t1

0xb3db,	// (0x00078674) call_thumbnail_pane_g1

0xb3e3,	// (0x0007867c) bg_pinb_pane_ParamLimits

0xb3e3,	// (0x0007867c) bg_pinb_pane

0xb3f1,	// (0x0007868a) find_pinb_pane

0xb3fa,	// (0x00078693) listscroll_pinb_pane_ParamLimits

0xb3fa,	// (0x00078693) listscroll_pinb_pane

0xb409,	// (0x000786a2) pinb_bg_pane_g1

0x335c,	// (0x000705f5) pinb_bg_pane_g2

0x3368,	// (0x00070601) pinb_bg_pane_g3

0x3374,	// (0x0007060d) pinb_bg_pane_g4

0x3380,	// (0x00070619) pinb_bg_pane_g5

0x338c,	// (0x00070625) pinb_bg_pane_g6

0x3397,	// (0x00070630) pinb_bg_pane_g7

0x33a2,	// (0x0007063b) pinb_bg_pane_g8

0x33ad,	// (0x00070646) pinb_bg_pane_g9

0x33b7,	// (0x00070650) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0007c408) pinb_bg_pane_g

0x33cc,	// (0x00070665) grid_pinb_pane

0x33d5,	// (0x0007066e) list_pinb_pane

0x33de,	// (0x00070677) scroll_pane_cp01_ParamLimits

0x33de,	// (0x00070677) scroll_pane_cp01

0xb41b,	// (0x000786b4) find_pinb_pane_g1_ParamLimits

0xb41b,	// (0x000786b4) find_pinb_pane_g1

0xb433,	// (0x000786cc) find_pinb_pane_t1

0xb445,	// (0x000786de) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0007c422) find_pinb_pane_t

0xb45a,	// (0x000786f3) input_focus_pane_cp01_ParamLimits

0xb45a,	// (0x000786f3) input_focus_pane_cp01

0x33f0,	// (0x00070689) cell_pinb_pane_ParamLimits

0x33f0,	// (0x00070689) cell_pinb_pane

0x3422,	// (0x000706bb) cell_pinb_pane_g1_ParamLimits

0x3422,	// (0x000706bb) cell_pinb_pane_g1

0x3432,	// (0x000706cb) cell_pinb_pane_g2_ParamLimits

0x3432,	// (0x000706cb) cell_pinb_pane_g2

0xb466,	// (0x000786ff) cell_pinb_pane_g3_ParamLimits

0xb466,	// (0x000786ff) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0007c427) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0007c427) cell_pinb_pane_g

0x318b,	// (0x00070424) grid_highlight_pane_cp01

0x343e,	// (0x000706d7) list_pinb_item_pane_ParamLimits

0x343e,	// (0x000706d7) list_pinb_item_pane

0x318b,	// (0x00070424) list_highlight_pane_cp02

0xb472,	// (0x0007870b) list_pinb_item_pane_g1_ParamLimits

0xb472,	// (0x0007870b) list_pinb_item_pane_g1

0xb47f,	// (0x00078718) list_pinb_item_pane_g2_ParamLimits

0xb47f,	// (0x00078718) list_pinb_item_pane_g2

0x3452,	// (0x000706eb) list_pinb_item_pane_g3_ParamLimits

0x3452,	// (0x000706eb) list_pinb_item_pane_g3

0xb48b,	// (0x00078724) list_pinb_item_pane_g4_ParamLimits

0xb48b,	// (0x00078724) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0007c42e) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0007c42e) list_pinb_item_pane_g

0xb497,	// (0x00078730) list_pinb_item_pane_t1_ParamLimits

0xb497,	// (0x00078730) list_pinb_item_pane_t1

0x3481,	// (0x0007071a) calc_display_pane

0x34a7,	// (0x00070740) calc_paper_pane

0x34ca,	// (0x00070763) grid_calc_pane

0x318b,	// (0x00070424) bg_list_pane_cp01

0x34f6,	// (0x0007078f) clock_g1

0x34fe,	// (0x00070797) clock_g2

0x0001,

0xf19e,	// (0x0007c437) clock_g

0x3506,	// (0x0007079f) clock_t1_ParamLimits

0x3506,	// (0x0007079f) clock_t1

0x351b,	// (0x000707b4) clock_t2_ParamLimits

0x351b,	// (0x000707b4) clock_t2

0x352d,	// (0x000707c6) clock_t3_ParamLimits

0x352d,	// (0x000707c6) clock_t3

0x353f,	// (0x000707d8) clock_t4_ParamLimits

0x353f,	// (0x000707d8) clock_t4

0x3551,	// (0x000707ea) clock_t5_ParamLimits

0x3551,	// (0x000707ea) clock_t5

0x3566,	// (0x000707ff) clock_t6_ParamLimits

0x3566,	// (0x000707ff) clock_t6

0x3578,	// (0x00070811) clock_t7_ParamLimits

0x3578,	// (0x00070811) clock_t7

0x358a,	// (0x00070823) clock_t8_ParamLimits

0x358a,	// (0x00070823) clock_t8

0x359e,	// (0x00070837) clock_t9_ParamLimits

0x359e,	// (0x00070837) clock_t9

0x0008,

0xf1a3,	// (0x0007c43c) clock_t_ParamLimits

0xf1a3,	// (0x0007c43c) clock_t

0xb4b6,	// (0x0007874f) popup_clock_analogue_window_cp02

0xb4b6,	// (0x0007874f) popup_clock_digital_window_cp01

0xb4be,	// (0x00078757) listscroll_help_pane

0x318b,	// (0x00070424) phob_pre_status_pane

0xb4c8,	// (0x00078761) grid_qdial_pane

0x318b,	// (0x00070424) listscroll_mce_pane

0xb4d2,	// (0x0007876b) bg_notes_pane

0xb4dc,	// (0x00078775) list_notes_pane

0x35b2,	// (0x0007084b) scroll_pane_cp06

0xb4e6,	// (0x0007877f) bg_calc_paper_pane

0xb4fa,	// (0x00078793) list_calc_pane

0xb514,	// (0x000787ad) bg_calc_display_pane

0x35bd,	// (0x00070856) calc_display_pane_t1

0x35cf,	// (0x00070868) calc_display_pane_t2

0xb520,	// (0x000787b9) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0007c44f) calc_display_pane_t

0x35e1,	// (0x0007087a) cell_calc_pane_ParamLimits

0x35e1,	// (0x0007087a) cell_calc_pane

0xb532,	// (0x000787cb) bg_calc_paper_pane_g1

0xb53e,	// (0x000787d7) bg_calc_paper_pane_g2

0xb54a,	// (0x000787e3) bg_calc_paper_pane_g3

0xb556,	// (0x000787ef) bg_calc_paper_pane_g4

0xb562,	// (0x000787fb) bg_calc_paper_pane_g5

0x3616,	// (0x000708af) bg_calc_paper_pane_g6

0x3625,	// (0x000708be) bg_calc_paper_pane_g7

0x3634,	// (0x000708cd) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0007c456) bg_calc_paper_pane_g

0x3647,	// (0x000708e0) calc_bg_paper_pane_g9

0x365a,	// (0x000708f3) list_calc_item_pane_ParamLimits

0x365a,	// (0x000708f3) list_calc_item_pane

0xb56e,	// (0x00078807) list_calc_item_pane_g1

0xb57b,	// (0x00078814) list_calc_item_pane_t1_ParamLimits

0xb57b,	// (0x00078814) list_calc_item_pane_t1

0x3670,	// (0x00070909) list_calc_item_pane_t2_ParamLimits

0x3670,	// (0x00070909) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0007c467) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0007c467) list_calc_item_pane_t

0xb58d,	// (0x00078826) cell_calc_pane_g1

0xb597,	// (0x00078830) grid_highlight_pane_cp02

0xb5b9,	// (0x00078852) bg_calc_display_pane_g1

0xb5c2,	// (0x0007885b) bg_calc_display_pane_g2

0xb5cc,	// (0x00078865) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0007c471) bg_calc_display_pane_g

0x36a4,	// (0x0007093d) cell_qdial_pane_ParamLimits

0x36a4,	// (0x0007093d) cell_qdial_pane

0x36b8,	// (0x00070951) cell_qdial_pane_g1_ParamLimits

0x36b8,	// (0x00070951) cell_qdial_pane_g1

0x36ce,	// (0x00070967) cell_qdial_pane_g2_ParamLimits

0x36ce,	// (0x00070967) cell_qdial_pane_g2

0xb5d5,	// (0x0007886e) cell_qdial_pane_g3_ParamLimits

0xb5d5,	// (0x0007886e) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0007c478) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0007c478) cell_qdial_pane_g

0x36f5,	// (0x0007098e) cell_qdial_pane_t1_ParamLimits

0x36f5,	// (0x0007098e) cell_qdial_pane_t1

0x370d,	// (0x000709a6) cell_qdial_pane_t2_ParamLimits

0x370d,	// (0x000709a6) cell_qdial_pane_t2

0x3720,	// (0x000709b9) cell_qdial_pane_t3_ParamLimits

0x3720,	// (0x000709b9) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0007c481) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0007c481) cell_qdial_pane_t

0x318b,	// (0x00070424) grid_highlight_pane_cp04

0xb5e1,	// (0x0007887a) thumbnail_qdial_pane_ParamLimits

0xb5e1,	// (0x0007887a) thumbnail_qdial_pane

0xb63d,	// (0x000788d6) list_help_pane

0xb646,	// (0x000788df) scroll_pane_cp02

0x3733,	// (0x000709cc) help_list_pane_t1_ParamLimits

0x3733,	// (0x000709cc) help_list_pane_t1

0xb64f,	// (0x000788e8) bg_notes_pane_g2

0xb657,	// (0x000788f0) bg_notes_pane_g3

0xb65f,	// (0x000788f8) notes_bg_pane_g1

0xb667,	// (0x00078900) notes_bg_pane_g4

0xb66f,	// (0x00078908) notes_bg_pane_g5

0xb677,	// (0x00078910) notes_bg_pane_g6

0xb67f,	// (0x00078918) notes_bg_pane_g7

0xb687,	// (0x00078920) notes_bg_pane_g8

0xb68f,	// (0x00078928) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0007c49f) notes_bg_pane_g

0x12ba,	// (0x0006e553) list_notes_text_pane_ParamLimits

0x12ba,	// (0x0006e553) list_notes_text_pane

0xb697,	// (0x00078930) list_notes_text_pane_g1

0x2127,	// (0x0006f3c0) list_notes_text_pane_t1

0xb514,	// (0x000787ad) listscroll_cale_week_pane

0x3770,	// (0x00070a09) bg_cale_heading_pane

0xb6b1,	// (0x0007894a) bg_cale_pane_cp01

0x3788,	// (0x00070a21) cale_week_corner_pane

0x3799,	// (0x00070a32) cale_week_day_heading_pane

0x37b1,	// (0x00070a4a) cale_week_scroll_pane_g1

0x37c6,	// (0x00070a5f) cale_week_scroll_pane_g2

0x37d7,	// (0x00070a70) cale_week_scroll_pane_g3

0x37e8,	// (0x00070a81) cale_week_scroll_pane_g4

0x37f9,	// (0x00070a92) cale_week_scroll_pane_g5

0x380a,	// (0x00070aa3) cale_week_scroll_pane_g6

0x381b,	// (0x00070ab4) cale_week_scroll_pane_g7

0x382c,	// (0x00070ac5) cale_week_scroll_pane_g8

0x383d,	// (0x00070ad6) cale_week_scroll_pane_g9

0x384e,	// (0x00070ae7) cale_week_scroll_pane_g10

0x385f,	// (0x00070af8) cale_week_scroll_pane_g11

0x3870,	// (0x00070b09) cale_week_scroll_pane_g12

0x3881,	// (0x00070b1a) cale_week_scroll_pane_g13

0x3892,	// (0x00070b2b) cale_week_scroll_pane_g14

0x38a3,	// (0x00070b3c) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0007c4ae) cale_week_scroll_pane_g

0x38b4,	// (0x00070b4d) cale_week_time_pane

0x38c5,	// (0x00070b5e) grid_cale_week_pane

0x38d8,	// (0x00070b71) scroll_pane_cp08

0x38f2,	// (0x00070b8b) cell_cale_week_pane_ParamLimits

0x38f2,	// (0x00070b8b) cell_cale_week_pane

0x392e,	// (0x00070bc7) cale_week_day_heading_pane_t1

0x3942,	// (0x00070bdb) cale_week_day_heading_pane_t2

0x3956,	// (0x00070bef) cale_week_day_heading_pane_t3

0x396a,	// (0x00070c03) cale_week_day_heading_pane_t4

0x397e,	// (0x00070c17) cale_week_day_heading_pane_t5

0x3992,	// (0x00070c2b) cale_week_day_heading_pane_t6

0x39a6,	// (0x00070c3f) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0007c4cd) cale_week_day_heading_pane_t

0xb6dc,	// (0x00078975) bg_cale_side_pane

0x39ba,	// (0x00070c53) cale_week_time_pane_t1

0x39d2,	// (0x00070c6b) cale_week_time_pane_t2

0x39ea,	// (0x00070c83) cale_week_time_pane_t3

0x3a02,	// (0x00070c9b) cale_week_time_pane_t4

0x3a1a,	// (0x00070cb3) cale_week_time_pane_t5

0x3a32,	// (0x00070ccb) cale_week_time_pane_t6

0x3a4a,	// (0x00070ce3) cale_week_time_pane_t7

0x3a62,	// (0x00070cfb) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0007c4dc) cale_week_time_pane_t

0x3a7a,	// (0x00070d13) cell_cale_week_pane_g2

0x3a96,	// (0x00070d2f) cell_cale_week_pane_g3_ParamLimits

0x3a96,	// (0x00070d2f) cell_cale_week_pane_g3

0xb6ea,	// (0x00078983) grid_highlight_pane_cp07

0xb6f2,	// (0x0007898b) listscroll_gms_pane

0xb6fc,	// (0x00078995) grid_gms_pane

0xb705,	// (0x0007899e) listscroll_gms_pane_g1

0xb70d,	// (0x000789a6) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0007c4ed) listscroll_gms_pane_g

0x3aae,	// (0x00070d47) scroll_pane_cp010

0x3ab9,	// (0x00070d52) cell_gms_pane_ParamLimits

0x3ab9,	// (0x00070d52) cell_gms_pane

0x3acc,	// (0x00070d65) cell_gms_pane_g1

0xb715,	// (0x000789ae) cell_gms_pane_g2

0xb697,	// (0x00078930) cell_gms_pane_g3

0xb71d,	// (0x000789b6) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0007c4f2) cell_gms_pane_g

0xb726,	// (0x000789bf) grid_highlight_pane_cp09

0x5a0b,	// (0x00072ca4) phob_pre_status_pane_g1

0x5a13,	// (0x00072cac) phob_pre_status_pane_g2

0x5a1b,	// (0x00072cb4) phob_pre_status_pane_g3

0x5a23,	// (0x00072cbc) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0007c8e1) phob_pre_status_pane_g

0x5a35,	// (0x00072cce) phob_pre_status_pane_t1

0x5a43,	// (0x00072cdc) phob_pre_status_pane_t2

0x5a53,	// (0x00072cec) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0007c8ec) phob_pre_status_pane_t

0x318b,	// (0x00070424) bg_list_pane_cp05

0xb736,	// (0x000789cf) grid_vorec_pane

0xb73e,	// (0x000789d7) vorec_t1

0xb74c,	// (0x000789e5) vorec_t2

0xb75a,	// (0x000789f3) vorec_t3

0xb768,	// (0x00078a01) vorec_t4

0xb776,	// (0x00078a0f) vorec_t5

0xb784,	// (0x00078a1d) vorec_t6

0x0006,

0xf262,	// (0x0007c4fb) vorec_t

0xb7a0,	// (0x00078a39) wait_bar_pane_cp01

0xb7a8,	// (0x00078a41) cell_vorec_pane_ParamLimits

0xb7a8,	// (0x00078a41) cell_vorec_pane

0xb7bb,	// (0x00078a54) cell_vorec_pane_g1

0x318b,	// (0x00070424) grid_highlight_pane_cp05

0x3aec,	// (0x00070d85) cams_zoom_pane

0x3afb,	// (0x00070d94) image_vga_pane

0x3b15,	// (0x00070dae) main_camera_pane_g1

0x3b27,	// (0x00070dc0) main_camera_pane_g2

0x3b39,	// (0x00070dd2) main_camera_pane_g3

0x3b4b,	// (0x00070de4) main_camera_pane_g4

0x3b5d,	// (0x00070df6) main_camera_pane_g5

0x3b6f,	// (0x00070e08) main_camera_pane_g6

0x3b81,	// (0x00070e1a) main_camera_pane_g7

0x0007,

0xf271,	// (0x0007c50a) main_camera_pane_g

0x3b93,	// (0x00070e2c) main_camera_pane_t1

0x3ba9,	// (0x00070e42) main_camera_pane_t2

0x0001,

0xf282,	// (0x0007c51b) main_camera_pane_t

0x3be5,	// (0x00070e7e) cams_zoom_pane_cp_ParamLimits

0x3be5,	// (0x00070e7e) cams_zoom_pane_cp

0x3c0d,	// (0x00070ea6) image_cif_pane_ParamLimits

0x3c0d,	// (0x00070ea6) image_cif_pane

0x3c48,	// (0x00070ee1) image_subqcif_pane

0x3c50,	// (0x00070ee9) main_video_pane_g1_ParamLimits

0x3c50,	// (0x00070ee9) main_video_pane_g1

0x3c74,	// (0x00070f0d) main_video_pane_g2_ParamLimits

0x3c74,	// (0x00070f0d) main_video_pane_g2

0x3caa,	// (0x00070f43) main_video_pane_g3_ParamLimits

0x3caa,	// (0x00070f43) main_video_pane_g3

0x3cda,	// (0x00070f73) main_video_pane_g4_ParamLimits

0x3cda,	// (0x00070f73) main_video_pane_g4

0x3d0a,	// (0x00070fa3) main_video_pane_g5_ParamLimits

0x3d0a,	// (0x00070fa3) main_video_pane_g5

0xb7d1,	// (0x00078a6a) main_video_pane_g6_ParamLimits

0xb7d1,	// (0x00078a6a) main_video_pane_g6

0x0006,

0xf287,	// (0x0007c520) main_video_pane_g_ParamLimits

0xf287,	// (0x0007c520) main_video_pane_g

0x3d35,	// (0x00070fce) main_video_pane_t1_ParamLimits

0x3d35,	// (0x00070fce) main_video_pane_t1

0xb7eb,	// (0x00078a84) cams_zoom_pane_g1

0xb7f4,	// (0x00078a8d) cams_zoom_pane_g2

0xb7fd,	// (0x00078a96) cams_zoom_pane_g3

0xb806,	// (0x00078a9f) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0007c52f) cams_zoom_pane_g

0x3d92,	// (0x0007102b) grid_cams_pane

0x3dac,	// (0x00071045) linegrid_cams_pane

0x3dbf,	// (0x00071058) cell_cams_pane_ParamLimits

0x3dbf,	// (0x00071058) cell_cams_pane

0xb80f,	// (0x00078aa8) cams_burst_image_pane

0xb817,	// (0x00078ab0) cell_cams_pane_g1

0x318b,	// (0x00070424) grid_highlight_pane_cp03

0xb58d,	// (0x00078826) mp_bg_pane_g1

0x318b,	// (0x00070424) bg_list_pane_cp03

0x1118,	// (0x0006e3b1) bg_mp_pane

0x1120,	// (0x0006e3b9) grid_mp_pane

0x1128,	// (0x0006e3c1) media_player_g1

0x1130,	// (0x0006e3c9) media_player_t1

0x113e,	// (0x0006e3d7) media_player_t2

0x114c,	// (0x0006e3e5) media_player_t3

0x115a,	// (0x0006e3f3) media_player_t4

0x1168,	// (0x0006e401) media_player_t5

0x1176,	// (0x0006e40f) media_player_t6

0x1184,	// (0x0006e41d) media_player_t7

0x0006,

0xf632,	// (0x0007c8cb) media_player_t

0x1192,	// (0x0006e42b) wait_bar_pane_cp02

0xf617,	// (0x0007c8b0) main_usb_pane_t

0x5a02,	// (0x00072c9b) cell_mp_pane

0xb58d,	// (0x00078826) cell_mp_pane_g1

0x318b,	// (0x00070424) grid_highlight_pane_cp06

0xb8dd,	// (0x00078b76) grid_skin_colour_pane

0xb8e5,	// (0x00078b7e) list_highlight_pane_cp03

0x3ddf,	// (0x00071078) skin_g1

0xb8ed,	// (0x00078b86) skin_t1

0xb8fc,	// (0x00078b95) skin_t2

0x0001,

0xf2cb,	// (0x0007c564) skin_t

0x3de7,	// (0x00071080) cell_skin_colour_pane_ParamLimits

0x3de7,	// (0x00071080) cell_skin_colour_pane

0xb90a,	// (0x00078ba3) cell_skin_colour_pane_g1

0x3e4d,	// (0x000710e6) call_video_g1_ParamLimits

0x3e4d,	// (0x000710e6) call_video_g1

0x3e69,	// (0x00071102) call_video_g2_ParamLimits

0x3e69,	// (0x00071102) call_video_g2

0x0001,

0xf2d0,	// (0x0007c569) call_video_g_ParamLimits

0xf2d0,	// (0x0007c569) call_video_g

0x3ea3,	// (0x0007113c) call_video_uplink_pane_cp1_ParamLimits

0x3ea3,	// (0x0007113c) call_video_uplink_pane_cp1

0xb924,	// (0x00078bbd) call_video_uplink_pane_cp2

0x3f21,	// (0x000711ba) video_down_crop_pane_ParamLimits

0x3f21,	// (0x000711ba) video_down_crop_pane

0x3fe7,	// (0x00071280) video_down_pane_ParamLimits

0x3fe7,	// (0x00071280) video_down_pane

0xb92c,	// (0x00078bc5) video_down_subqcif_pane_ParamLimits

0xb92c,	// (0x00078bc5) video_down_subqcif_pane

0xb944,	// (0x00078bdd) video_down_subqcif_pane_cp_ParamLimits

0xb944,	// (0x00078bdd) video_down_subqcif_pane_cp

0xb968,	// (0x00078c01) im_reading_pane_ParamLimits

0xb968,	// (0x00078c01) im_reading_pane

0x40b8,	// (0x00071351) im_writing_pane_ParamLimits

0x40b8,	// (0x00071351) im_writing_pane

0x40ce,	// (0x00071367) im_reading_pane_t1

0xb982,	// (0x00078c1b) list_im_pane

0xb993,	// (0x00078c2c) scroll_pane_cp07

0x410a,	// (0x000713a3) im_writing_pane_t1_ParamLimits

0x410a,	// (0x000713a3) im_writing_pane_t1

0xb9ac,	// (0x00078c45) im_writing_pane_t2_ParamLimits

0xb9ac,	// (0x00078c45) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0007c573) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0007c573) im_writing_pane_t

0x318b,	// (0x00070424) input_focus_pane_cp04

0x318b,	// (0x00070424) input_focus_pane_cp05

0x411f,	// (0x000713b8) list_im_single_pane_ParamLimits

0x411f,	// (0x000713b8) list_im_single_pane

0x4135,	// (0x000713ce) list_single_im_pane_t1

0x59c2,	// (0x00072c5b) blid_accuracy_pane

0x59ca,	// (0x00072c63) blid_compass_pane

0x59d4,	// (0x00072c6d) main_location_t1

0x59e4,	// (0x00072c7d) main_location_t2

0x59f4,	// (0x00072c8d) main_location_t3

0x0002,

0xf641,	// (0x0007c8da) main_location_t

0x318b,	// (0x00070424) aid_levels_location

0xb58d,	// (0x00078826) blid_accuracy_pane_g1

0xb58d,	// (0x00078826) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0007c5d5) blid_accuracy_pane_g

0xb9f4,	// (0x00078c8d) wml_content_pane

0xba32,	// (0x00078ccb) wml_button_pane_ParamLimits

0xba32,	// (0x00078ccb) wml_button_pane

0x4144,	// (0x000713dd) wml_list_single_large_pane_ParamLimits

0x4144,	// (0x000713dd) wml_list_single_large_pane

0x415b,	// (0x000713f4) wml_list_single_medium_pane_ParamLimits

0x415b,	// (0x000713f4) wml_list_single_medium_pane

0x4173,	// (0x0007140c) wml_list_single_small_pane_ParamLimits

0x4173,	// (0x0007140c) wml_list_single_small_pane

0xba46,	// (0x00078cdf) wml_selection_box_pane_ParamLimits

0xba46,	// (0x00078cdf) wml_selection_box_pane

0xba59,	// (0x00078cf2) wml_list_single_pane_t1

0xba68,	// (0x00078d01) wml_list_single_medium_pane_t1

0xba77,	// (0x00078d10) wml_list_single_large_pane_t1

0xba86,	// (0x00078d1f) input_focus_pane_cp02_ParamLimits

0xba86,	// (0x00078d1f) input_focus_pane_cp02

0xba99,	// (0x00078d32) wml_selection_box_pane_g1

0xbaa2,	// (0x00078d3b) wml_selection_box_pane_t1_ParamLimits

0xbaa2,	// (0x00078d3b) wml_selection_box_pane_t1

0xb3e3,	// (0x0007867c) bg_wml_button_pane_ParamLimits

0xb3e3,	// (0x0007867c) bg_wml_button_pane

0xbaba,	// (0x00078d53) wml_button_pane_g1

0xbac2,	// (0x00078d5b) wml_button_pane_t1

0xbaba,	// (0x00078d53) wml_button_bg_pane_g1

0xbad2,	// (0x00078d6b) wml_button_bg_pane_g2

0xbada,	// (0x00078d73) wml_button_bg_pane_g3

0xbae2,	// (0x00078d7b) wml_button_bg_pane_g4

0xbaea,	// (0x00078d83) wml_button_bg_pane_g5

0xbaf2,	// (0x00078d8b) wml_button_bg_pane_g6

0xbafa,	// (0x00078d93) wml_button_bg_pane_g7

0xbb02,	// (0x00078d9b) wml_button_bg_pane_g8

0xbb0a,	// (0x00078da3) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0007c578) wml_button_bg_pane_g

0x4191,	// (0x0007142a) bg_list_pane_cp02

0xbb12,	// (0x00078dab) mce_header_pane_ParamLimits

0xbb12,	// (0x00078dab) mce_header_pane

0xbb28,	// (0x00078dc1) mce_icon_pane

0xbb28,	// (0x00078dc1) mce_image_pane

0xbb31,	// (0x00078dca) mce_text_pane_ParamLimits

0xbb31,	// (0x00078dca) mce_text_pane

0x4199,	// (0x00071432) scroll_pane_cp03

0xba2a,	// (0x00078cc3) scroll_pane_cp04

0xbb44,	// (0x00078ddd) scroll_pane_cp05_ParamLimits

0xbb44,	// (0x00078ddd) scroll_pane_cp05

0x41a3,	// (0x0007143c) mce_header_field_pane_ParamLimits

0x41a3,	// (0x0007143c) mce_header_field_pane

0x41ba,	// (0x00071453) mce_header_field_pane_2_ParamLimits

0x41ba,	// (0x00071453) mce_header_field_pane_2

0x41d0,	// (0x00071469) mce_header_field_pane_3

0x41d8,	// (0x00071471) list_single_mce_message_pane_ParamLimits

0x41d8,	// (0x00071471) list_single_mce_message_pane

0x41f0,	// (0x00071489) list_single_mce_smart_pane_ParamLimits

0x41f0,	// (0x00071489) list_single_mce_smart_pane

0xbb50,	// (0x00078de9) input_focus_pane_cp03

0xbb59,	// (0x00078df2) list_header_data_pane

0x4213,	// (0x000714ac) mce_header_field_pane_t1

0x4223,	// (0x000714bc) list_single_mce_header_pane_ParamLimits

0x4223,	// (0x000714bc) list_single_mce_header_pane

0xbb61,	// (0x00078dfa) list_single_mce_header_pane_t1

0xbb70,	// (0x00078e09) list_single_mce_message_pane_g1

0xbb78,	// (0x00078e11) list_single_mce_message_pane_t1

0x4255,	// (0x000714ee) bg_cale_heading_pane_cp01_ParamLimits

0x4255,	// (0x000714ee) bg_cale_heading_pane_cp01

0xbb86,	// (0x00078e1f) bg_cale_pane_cp02_ParamLimits

0xbb86,	// (0x00078e1f) bg_cale_pane_cp02

0x4278,	// (0x00071511) cale_month_corner_pane

0x428e,	// (0x00071527) cale_month_day_heading_pane_ParamLimits

0x428e,	// (0x00071527) cale_month_day_heading_pane

0x42b9,	// (0x00071552) cale_month_pane_g1_ParamLimits

0x42b9,	// (0x00071552) cale_month_pane_g1

0x42d5,	// (0x0007156e) cale_month_pane_g2_ParamLimits

0x42d5,	// (0x0007156e) cale_month_pane_g2

0x42ee,	// (0x00071587) cale_month_pane_g3_ParamLimits

0x42ee,	// (0x00071587) cale_month_pane_g3

0x431a,	// (0x000715b3) cale_month_pane_g4_ParamLimits

0x431a,	// (0x000715b3) cale_month_pane_g4

0x4346,	// (0x000715df) cale_month_pane_g5_ParamLimits

0x4346,	// (0x000715df) cale_month_pane_g5

0x4372,	// (0x0007160b) cale_month_pane_g6_ParamLimits

0x4372,	// (0x0007160b) cale_month_pane_g6

0x439e,	// (0x00071637) cale_month_pane_g7_ParamLimits

0x439e,	// (0x00071637) cale_month_pane_g7

0x43ca,	// (0x00071663) cale_month_pane_g8_ParamLimits

0x43ca,	// (0x00071663) cale_month_pane_g8

0x43fe,	// (0x00071697) cale_month_pane_g9_ParamLimits

0x43fe,	// (0x00071697) cale_month_pane_g9

0x4430,	// (0x000716c9) cale_month_pane_g10_ParamLimits

0x4430,	// (0x000716c9) cale_month_pane_g10

0x4462,	// (0x000716fb) cale_month_pane_g11_ParamLimits

0x4462,	// (0x000716fb) cale_month_pane_g11

0x4494,	// (0x0007172d) cale_month_pane_g12_ParamLimits

0x4494,	// (0x0007172d) cale_month_pane_g12

0x44c6,	// (0x0007175f) cale_month_pane_g13_ParamLimits

0x44c6,	// (0x0007175f) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0007c58b) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0007c58b) cale_month_pane_g

0x44f8,	// (0x00071791) cale_month_week_pane

0x4509,	// (0x000717a2) grid_cale_month_pane_ParamLimits

0x4509,	// (0x000717a2) grid_cale_month_pane

0x452f,	// (0x000717c8) cale_month_day_heading_pane_t1

0x458d,	// (0x00071826) cale_month_day_heading_pane_t2

0x45f2,	// (0x0007188b) cale_month_day_heading_pane_t3

0x4657,	// (0x000718f0) cale_month_day_heading_pane_t4

0x46bc,	// (0x00071955) cale_month_day_heading_pane_t5

0x4721,	// (0x000719ba) cale_month_day_heading_pane_t6

0x4786,	// (0x00071a1f) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0007c5a6) cale_month_day_heading_pane_t

0xb6dc,	// (0x00078975) bg_cale_side_pane_cp01

0x47eb,	// (0x00071a84) cale_month_week_pane_t1

0x4802,	// (0x00071a9b) cale_month_week_pane_t2

0x4819,	// (0x00071ab2) cale_month_week_pane_t3

0x4830,	// (0x00071ac9) cale_month_week_pane_t4

0x4847,	// (0x00071ae0) cale_month_week_pane_t5

0x485e,	// (0x00071af7) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0007c5b5) cale_month_week_pane_t

0x4875,	// (0x00071b0e) cell_cale_month_pane_ParamLimits

0x4875,	// (0x00071b0e) cell_cale_month_pane

0xbbe5,	// (0x00078e7e) cell_cale_month_pane_g1

0x491b,	// (0x00071bb4) cell_cale_month_pane_t1_ParamLimits

0x491b,	// (0x00071bb4) cell_cale_month_pane_t1

0xb6ea,	// (0x00078983) grid_highlight_pane_cp08

0xb58d,	// (0x00078826) main_smil_g1

0x4937,	// (0x00071bd0) smil_status_pane

0xbbf1,	// (0x00078e8a) smil_text_pane

0x1038,	// (0x0006e2d1) bg_popup_call3_rect_pane_g8

0x1040,	// (0x0006e2d9) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007c86e) bg_popup_call3_rect_pane_g

0x5fb5,	// (0x0007324e) smil_status_volume_pane_g1

0xbbfb,	// (0x00078e94) smil_status_pane_t1

0xcd10,	// (0x00079fa9) volume_smil_pane

0xbc12,	// (0x00078eab) list_smil_text_pane

0x494c,	// (0x00071be5) scroll_pane_cp011

0x4957,	// (0x00071bf0) smil_text_list_pane_t1_ParamLimits

0x4957,	// (0x00071bf0) smil_text_list_pane_t1

0xbc1c,	// (0x00078eb5) aid_volume_smil_ParamLimits

0xbc1c,	// (0x00078eb5) aid_volume_smil

0xb58d,	// (0x00078826) smil_volume_pane_g1

0xb58d,	// (0x00078826) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0007c5d5) smil_volume_pane_g

0xb514,	// (0x000787ad) listscroll_cale_day_pane

0xbc3e,	// (0x00078ed7) bg_cale_pane

0xbc56,	// (0x00078eef) list_cale_pane

0xbc67,	// (0x00078f00) scroll_pane_cp09

0xbc78,	// (0x00078f11) cale_bg_pane_g1

0xbc80,	// (0x00078f19) cale_bg_pane_g2

0xbc88,	// (0x00078f21) cale_bg_pane_g3

0xbc90,	// (0x00078f29) cale_bg_pane_g4

0xbc98,	// (0x00078f31) cale_bg_pane_g5

0xbca0,	// (0x00078f39) cale_bg_pane_g6

0xbca8,	// (0x00078f41) cale_bg_pane_g7

0xbcb0,	// (0x00078f49) cale_bg_pane_g8

0xbcb8,	// (0x00078f51) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0007c5da) cale_bg_pane_g

0x49ab,	// (0x00071c44) list_cale_time_pane_ParamLimits

0x49ab,	// (0x00071c44) list_cale_time_pane

0x49c0,	// (0x00071c59) list_cale_time_pane_g1_ParamLimits

0x49c0,	// (0x00071c59) list_cale_time_pane_g1

0xbcc0,	// (0x00078f59) list_cale_time_pane_g2_ParamLimits

0xbcc0,	// (0x00078f59) list_cale_time_pane_g2

0x49cc,	// (0x00071c65) list_cale_time_pane_g3_ParamLimits

0x49cc,	// (0x00071c65) list_cale_time_pane_g3

0x49e8,	// (0x00071c81) list_cale_time_pane_g4_ParamLimits

0x49e8,	// (0x00071c81) list_cale_time_pane_g4

0x49f6,	// (0x00071c8f) list_cale_time_pane_g5_ParamLimits

0x49f6,	// (0x00071c8f) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0007c5ed) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0007c5ed) list_cale_time_pane_g

0x4a04,	// (0x00071c9d) list_cale_time_pane_t1_ParamLimits

0x4a04,	// (0x00071c9d) list_cale_time_pane_t1

0x4a2c,	// (0x00071cc5) list_cale_time_pane_t2_ParamLimits

0x4a2c,	// (0x00071cc5) list_cale_time_pane_t2

0x4d01,	// (0x00071f9a) aid_blid_cardinal_pane

0x4d3f,	// (0x00071fd8) compass_pane_t4

0x4a54,	// (0x00071ced) list_cale_time_pane_t4_ParamLimits

0x4a54,	// (0x00071ced) list_cale_time_pane_t4

0x4d4d,	// (0x00071fe6) compass_pane_t5

0x4d5b,	// (0x00071ff4) compass_pane_t6

0x4d69,	// (0x00072002) compass_pane_t7

0xc1d4,	// (0x0007946d) navi_pane_cc_t1

0xc33b,	// (0x000795d4) aid_phob_thumbnail_center_pane

0x53ce,	// (0x00072667) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0007c5fa) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0007c5fa) list_cale_time_pane_t

0x2dc0,	// (0x00070059) bg_popup_window_pane_cp02_ParamLimits

0x2dc0,	// (0x00070059) bg_popup_window_pane_cp02

0xbcda,	// (0x00078f73) heading_pane_cp01_ParamLimits

0xbcda,	// (0x00078f73) heading_pane_cp01

0xbce6,	// (0x00078f7f) loc_req_pane_ParamLimits

0xbce6,	// (0x00078f7f) loc_req_pane

0xbcf6,	// (0x00078f8f) loc_type_pane_ParamLimits

0xbcf6,	// (0x00078f8f) loc_type_pane

0xbd08,	// (0x00078fa1) loc_type_pane_t1_ParamLimits

0xbd08,	// (0x00078fa1) loc_type_pane_t1

0xbd1a,	// (0x00078fb3) loc_type_pane_t2_ParamLimits

0xbd1a,	// (0x00078fb3) loc_type_pane_t2

0xbd2c,	// (0x00078fc5) loc_type_pane_t3_ParamLimits

0xbd2c,	// (0x00078fc5) loc_type_pane_t3

0x0002,

0xf368,	// (0x0007c601) loc_type_pane_t_ParamLimits

0xf368,	// (0x0007c601) loc_type_pane_t

0xbd3e,	// (0x00078fd7) list_loc_req_pane

0xbd48,	// (0x00078fe1) scroll_pane_cp012

0x4a7c,	// (0x00071d15) list_single_loc_request_popup_menu_pane_ParamLimits

0x4a7c,	// (0x00071d15) list_single_loc_request_popup_menu_pane

0xbd53,	// (0x00078fec) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbd53,	// (0x00078fec) list_single_loc_request_popup_menu_pane_g1

0xbd5f,	// (0x00078ff8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbd5f,	// (0x00078ff8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0007c608) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0007c608) list_single_loc_request_popup_menu_pane_g

0xbd6b,	// (0x00079004) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbd6b,	// (0x00079004) list_single_loc_request_popup_menu_pane_t1

0xb3e3,	// (0x0007867c) bg_popup_window_pane_cp03_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_window_pane_cp03

0x12ae,	// (0x0006e547) heading_loc_req_pane_ParamLimits

0x12ae,	// (0x0006e547) heading_loc_req_pane

0x4a89,	// (0x00071d22) popup_dyc_status_message_window_g1_ParamLimits

0x4a89,	// (0x00071d22) popup_dyc_status_message_window_g1

0x4a9d,	// (0x00071d36) popup_dyc_status_message_window_t1_ParamLimits

0x4a9d,	// (0x00071d36) popup_dyc_status_message_window_t1

0x4ab2,	// (0x00071d4b) popup_dyc_status_message_window_t2_ParamLimits

0x4ab2,	// (0x00071d4b) popup_dyc_status_message_window_t2

0x4ac7,	// (0x00071d60) popup_dyc_status_message_window_t3_ParamLimits

0x4ac7,	// (0x00071d60) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0007c60d) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0007c60d) popup_dyc_status_message_window_t

0x318b,	// (0x00070424) bg_heading_pane_cp01

0xbd81,	// (0x0007901a) heading_loc_req_pane_g1

0xbd89,	// (0x00079022) heading_loc_req_pane_g2

0xbd91,	// (0x0007902a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0007c614) heading_loc_req_pane_g

0xbd99,	// (0x00079032) heading_loc_req_pane_t1

0xbe1f,	// (0x000790b8) bg_popup_sub_pane_cp01_ParamLimits

0xbe1f,	// (0x000790b8) bg_popup_sub_pane_cp01

0xbe2d,	// (0x000790c6) popup_cale_events_window_g1_ParamLimits

0xbe2d,	// (0x000790c6) popup_cale_events_window_g1

0xbe4d,	// (0x000790e6) popup_cale_events_window_g2_ParamLimits

0xbe4d,	// (0x000790e6) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0007c648) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0007c648) popup_cale_events_window_g

0xbe6d,	// (0x00079106) popup_cale_events_window_t1_ParamLimits

0xbe6d,	// (0x00079106) popup_cale_events_window_t1

0xbe7f,	// (0x00079118) popup_cale_events_window_t2_ParamLimits

0xbe7f,	// (0x00079118) popup_cale_events_window_t2

0xbebd,	// (0x00079156) popup_cale_events_window_t3_ParamLimits

0xbebd,	// (0x00079156) popup_cale_events_window_t3

0xbef7,	// (0x00079190) popup_cale_events_window_t4_ParamLimits

0xbef7,	// (0x00079190) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0007c64d) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0007c64d) popup_cale_events_window_t

0x4afb,	// (0x00071d94) call_type_pane

0x4b0b,	// (0x00071da4) popup_call_status_window_g1

0x4b1f,	// (0x00071db8) popup_call_status_window_g2

0x4b33,	// (0x00071dcc) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0007c656) popup_call_status_window_g

0xbf2d,	// (0x000791c6) call_type_pane_g1

0xbf36,	// (0x000791cf) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0007c65d) call_type_pane_g

0x318b,	// (0x00070424) bg_popup_sub_pane_cp02

0xbf3f,	// (0x000791d8) listscroll_popup_wml_pane

0xbf47,	// (0x000791e0) list_wml_pane

0xbf51,	// (0x000791ea) scroll_pane_cp013

0xbf5c,	// (0x000791f5) list_single_graphic_popup_wml_pane_ParamLimits

0xbf5c,	// (0x000791f5) list_single_graphic_popup_wml_pane

0xb58d,	// (0x00078826) list_single_graphic_popup_wml_pane_g1

0xbf70,	// (0x00079209) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0007c662) list_single_graphic_popup_wml_pane_g

0xbf78,	// (0x00079211) list_single_graphic_popup_wml_pane_t1

0xbf8e,	// (0x00079227) aid_call_pane

0xb3db,	// (0x00078674) popup_clock_analogue_window_g1

0xb3db,	// (0x00078674) popup_clock_analogue_window_g2

0xbf96,	// (0x0007922f) popup_clock_analogue_window_g3

0xbf96,	// (0x0007922f) popup_clock_analogue_window_g4

0xb58d,	// (0x00078826) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0007c667) popup_clock_analogue_window_g

0xbf9e,	// (0x00079237) popup_clock_analogue_window_t1

0xbfac,	// (0x00079245) clock_digital_number_pane_ParamLimits

0xbfac,	// (0x00079245) clock_digital_number_pane

0xbfb8,	// (0x00079251) clock_digital_number_pane_cp02_ParamLimits

0xbfb8,	// (0x00079251) clock_digital_number_pane_cp02

0xbfc4,	// (0x0007925d) clock_digital_number_pane_cp03_ParamLimits

0xbfc4,	// (0x0007925d) clock_digital_number_pane_cp03

0xbfd0,	// (0x00079269) clock_digital_number_pane_cp04_ParamLimits

0xbfd0,	// (0x00079269) clock_digital_number_pane_cp04

0xbfdc,	// (0x00079275) clock_digital_separator_pane_ParamLimits

0xbfdc,	// (0x00079275) clock_digital_separator_pane

0xbfe8,	// (0x00079281) popup_clock_digital_window_t1

0xb58d,	// (0x00078826) clock_digital_number_pane_g1

0xb58d,	// (0x00078826) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0007c5d5) clock_digital_number_pane_g

0xb58d,	// (0x00078826) clock_digital_separator_pane_g1

0xb58d,	// (0x00078826) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0007c5d5) clock_digital_separator_pane_g

0x318b,	// (0x00070424) bg_popup_window_pane_cp04

0xc005,	// (0x0007929e) heading_pane_cp03

0xc00d,	// (0x000792a6) listscroll_popup_gms_pane

0xc015,	// (0x000792ae) grid_large_graphic_popup_pane

0xc01f,	// (0x000792b8) listscroll_popup_gms_pane_g1

0xc027,	// (0x000792c0) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0007c672) listscroll_popup_gms_pane_g

0xba2a,	// (0x00078cc3) scroll_pane_cp014

0xc02f,	// (0x000792c8) cell_large_graphic_popup_pane_ParamLimits

0xc02f,	// (0x000792c8) cell_large_graphic_popup_pane

0xc047,	// (0x000792e0) cell_large_graphic_popup_pane_g1_ParamLimits

0xc047,	// (0x000792e0) cell_large_graphic_popup_pane_g1

0xc053,	// (0x000792ec) cell_large_graphic_popup_pane_g2_ParamLimits

0xc053,	// (0x000792ec) cell_large_graphic_popup_pane_g2

0xc05f,	// (0x000792f8) cell_large_graphic_popup_pane_g3_ParamLimits

0xc05f,	// (0x000792f8) cell_large_graphic_popup_pane_g3

0xc06c,	// (0x00079305) cell_large_graphic_popup_pane_g4_ParamLimits

0xc06c,	// (0x00079305) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0007c677) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0007c677) cell_large_graphic_popup_pane_g

0xc07c,	// (0x00079315) grid_highlight_pane_cp010

0xb58d,	// (0x00078826) bg_popup_call_pane_g1

0xc086,	// (0x0007931f) list_single_graphic_popup_conf_pane_ParamLimits

0xc086,	// (0x0007931f) list_single_graphic_popup_conf_pane

0xc098,	// (0x00079331) list_highlight_pane_cp01

0xc0a1,	// (0x0007933a) list_single_graphic_popup_conf_pane_g1

0xc0a9,	// (0x00079342) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0007c680) list_single_graphic_popup_conf_pane_g

0xc0b1,	// (0x0007934a) list_single_graphic_popup_conf_pane_t1

0xc0bf,	// (0x00079358) linegrid_cams_pane_g1

0x4b43,	// (0x00071ddc) linegrid_cams_pane_g2

0xb697,	// (0x00078930) linegrid_cams_pane_g3

0xc0c8,	// (0x00079361) linegrid_cams_pane_g4

0x4b4c,	// (0x00071de5) linegrid_cams_pane_g5

0x4b55,	// (0x00071dee) linegrid_cams_pane_g6

0xb71d,	// (0x000789b6) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0007c685) linegrid_cams_pane_g

0xc0d1,	// (0x0007936a) popup_clock_analogue_window

0xc0d1,	// (0x0007936a) popup_clock_digital_window

0x318b,	// (0x00070424) popup_phob_thumbnail_window

0xb58d,	// (0x00078826) call_video_uplink_pane_g1

0xc0da,	// (0x00079373) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0007c694) call_video_uplink_pane_g

0xb6ea,	// (0x00078983) video_uplink_pane

0xc0e2,	// (0x0007937b) mce_image_pane_g1

0x4b60,	// (0x00071df9) mce_image_pane_g2

0x4b68,	// (0x00071e01) mce_image_pane_g3

0x4b70,	// (0x00071e09) mce_image_pane_g4

0x4b78,	// (0x00071e11) mce_image_pane_g5

0x0004,

0xf400,	// (0x0007c699) mce_image_pane_g

0xc0ec,	// (0x00079385) control_top_pane_stacon_cp01_ParamLimits

0xc0ec,	// (0x00079385) control_top_pane_stacon_cp01

0xc100,	// (0x00079399) uni_indicator_pane_stacon_cp01_ParamLimits

0xc100,	// (0x00079399) uni_indicator_pane_stacon_cp01

0xc111,	// (0x000793aa) bg_popup_sub_pane_cp03

0x4b80,	// (0x00071e19) chi_dic_find_pane

0x4b88,	// (0x00071e21) listscroll_chi_dic_pane

0x4b91,	// (0x00071e2a) main_pane_chidic_g1

0x4ba4,	// (0x00071e3d) chi_dic_find_pane_t1

0xc11b,	// (0x000793b4) find_chidic_pane

0xc124,	// (0x000793bd) chi_dic_list_pane_ParamLimits

0xc124,	// (0x000793bd) chi_dic_list_pane

0xc135,	// (0x000793ce) scroll_pane_cp020

0x4bb2,	// (0x00071e4b) find_chidic_pane_t1

0x318b,	// (0x00070424) input_focus_pane_cp06

0x4bc1,	// (0x00071e5a) list_chi_dic_pane_ParamLimits

0x4bc1,	// (0x00071e5a) list_chi_dic_pane

0xc13d,	// (0x000793d6) list_chi_dic_pane_t1_ParamLimits

0xc13d,	// (0x000793d6) list_chi_dic_pane_t1

0x318b,	// (0x00070424) list_highlight_pane_cp020

0xc150,	// (0x000793e9) bg_cale_heading_pane_g1

0x4bd5,	// (0x00071e6e) bg_cale_heading_pane_g2

0x4bdd,	// (0x00071e76) bg_cale_heading_pane_g3

0x4be5,	// (0x00071e7e) bg_cale_heading_pane_g4

0x4bef,	// (0x00071e88) bg_cale_heading_pane_g5

0x4bf9,	// (0x00071e92) bg_cale_heading_pane_g6

0x4c01,	// (0x00071e9a) bg_cale_heading_pane_g7

0x4c09,	// (0x00071ea2) bg_cale_heading_pane_g8

0x4c13,	// (0x00071eac) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0007c6a4) bg_cale_heading_pane_g

0xc150,	// (0x000793e9) bg_cale_side_pane_g1

0x4c1d,	// (0x00071eb6) bg_cale_side_pane_g2

0x4c25,	// (0x00071ebe) bg_cale_side_pane_g3

0x4c2d,	// (0x00071ec6) bg_cale_side_pane_g4

0x4c35,	// (0x00071ece) bg_cale_side_pane_g5

0x4c3d,	// (0x00071ed6) bg_cale_side_pane_g6

0x4c45,	// (0x00071ede) bg_cale_side_pane_g7

0x4c4d,	// (0x00071ee6) bg_cale_side_pane_g8

0x4c55,	// (0x00071eee) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0007c6b7) bg_cale_side_pane_g

0x4c5d,	// (0x00071ef6) popup_call_status_window_ParamLimits

0x4c5d,	// (0x00071ef6) popup_call_status_window

0xc158,	// (0x000793f1) stacon_top_pane

0xc160,	// (0x000793f9) status_pane_ParamLimits

0xc160,	// (0x000793f9) status_pane

0xc175,	// (0x0007940e) status_small_pane

0xc17d,	// (0x00079416) control_pane

0x318b,	// (0x00070424) stacon_bottom_pane

0xc185,	// (0x0007941e) list_single_mce_smart_pane_t1_ParamLimits

0xc185,	// (0x0007941e) list_single_mce_smart_pane_t1

0xc198,	// (0x00079431) list_single_mce_smart_pane_t2_ParamLimits

0xc198,	// (0x00079431) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0007c6ca) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0007c6ca) list_single_mce_smart_pane_t

0x4ca6,	// (0x00071f3f) compass_pane

0x4caf,	// (0x00071f48) main_location2_pane_t1

0x4cc3,	// (0x00071f5c) main_location2_pane_t2

0x4cd7,	// (0x00071f70) main_location2_pane_t3

0x0003,

0xf436,	// (0x0007c6cf) main_location2_pane_t

0xc1b7,	// (0x00079450) compass_pane_g1_ParamLimits

0xc1b7,	// (0x00079450) compass_pane_g1

0x4d21,	// (0x00071fba) compass_pane_t1

0x4d30,	// (0x00071fc9) compass_pane_t2

0x0005,

0xf43f,	// (0x0007c6d8) compass_pane_t

0x4d77,	// (0x00072010) text_secondary_cp61

0xc1cb,	// (0x00079464) navi_pane_cams_g5

0xc1ee,	// (0x00079487) navi_pane_im_t1

0xc1fc,	// (0x00079495) navi_pane_mp_g1_ParamLimits

0xc1fc,	// (0x00079495) navi_pane_mp_g1

0xc210,	// (0x000794a9) navi_pane_mp_g2_ParamLimits

0xc210,	// (0x000794a9) navi_pane_mp_g2

0xc21c,	// (0x000794b5) navi_pane_mp_g3_ParamLimits

0xc21c,	// (0x000794b5) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0007c6ec) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0007c6ec) navi_pane_mp_g

0xc228,	// (0x000794c1) navi_pane_mp_t1

0xc236,	// (0x000794cf) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0007c6f3) navi_pane_mp_t

0xc272,	// (0x0007950b) navi_pane_vt_g1

0xc228,	// (0x000794c1) navi_pane_vt_t1

0xc27a,	// (0x00079513) navi_slider_pane

0xc282,	// (0x0007951b) zooming_pane

0xc28a,	// (0x00079523) navi_slider_pane_g1

0xc293,	// (0x0007952c) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0007c6fa) navi_slider_pane_g

0xc2c0,	// (0x00079559) aid_levels_zoom

0xc2c8,	// (0x00079561) zooming_pane_g1

0xc2d0,	// (0x00079569) zooming_pane_g2

0xc2d0,	// (0x00079569) zooming_pane_g3

0x0002,

0xf470,	// (0x0007c709) zooming_pane_g

0xc2d8,	// (0x00079571) level_10_zoom

0xc2e1,	// (0x0007957a) level_11_zoom

0xc2ea,	// (0x00079583) level_1_zoom

0xc2f3,	// (0x0007958c) level_2_zoom

0xc2fc,	// (0x00079595) level_3_zoom

0xc305,	// (0x0007959e) level_4_zoom

0xc30e,	// (0x000795a7) level_5_zoom

0xc317,	// (0x000795b0) level_6_zoom

0xc320,	// (0x000795b9) level_7_zoom

0xc329,	// (0x000795c2) level_8_zoom

0xc332,	// (0x000795cb) level_9_zoom

0xc343,	// (0x000795dc) popup_phob_thumbnail_window_g1

0xc34b,	// (0x000795e4) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0007c710) popup_phob_thumbnail_window_g

0x119a,	// (0x0006e433) level_1_location

0x11a2,	// (0x0006e43b) level_2_location

0x11aa,	// (0x0006e443) level_3_location

0x11b2,	// (0x0006e44b) level_4_location

0xc282,	// (0x0007951b) level_5_location

0x4ea0,	// (0x00072139) mce_icon_pane_g1

0x4ea8,	// (0x00072141) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0007c715) mce_icon_pane_g

0x4eb0,	// (0x00072149) main_mup_pane_g1_ParamLimits

0x4eb0,	// (0x00072149) main_mup_pane_g1

0x4ec6,	// (0x0007215f) main_mup_pane_g2_ParamLimits

0x4ec6,	// (0x0007215f) main_mup_pane_g2

0x4ede,	// (0x00072177) main_mup_pane_g3_ParamLimits

0x4ede,	// (0x00072177) main_mup_pane_g3

0x4ef6,	// (0x0007218f) main_mup_pane_g4_ParamLimits

0x4ef6,	// (0x0007218f) main_mup_pane_g4

0x4f0e,	// (0x000721a7) main_mup_pane_g5_ParamLimits

0x4f0e,	// (0x000721a7) main_mup_pane_g5

0x4f2a,	// (0x000721c3) main_mup_pane_g6_ParamLimits

0x4f2a,	// (0x000721c3) main_mup_pane_g6

0x4f42,	// (0x000721db) main_mup_pane_g7_ParamLimits

0x4f42,	// (0x000721db) main_mup_pane_g7

0x4f5a,	// (0x000721f3) main_mup_pane_g8_ParamLimits

0x4f5a,	// (0x000721f3) main_mup_pane_g8

0x4f72,	// (0x0007220b) main_mup_pane_g9_ParamLimits

0x4f72,	// (0x0007220b) main_mup_pane_g9

0x4f8c,	// (0x00072225) main_mup_pane_g10_ParamLimits

0x4f8c,	// (0x00072225) main_mup_pane_g10

0x4fa6,	// (0x0007223f) main_mup_pane_g11_ParamLimits

0x4fa6,	// (0x0007223f) main_mup_pane_g11

0x4fba,	// (0x00072253) main_mup_pane_g12_ParamLimits

0x4fba,	// (0x00072253) main_mup_pane_g12

0x4fd0,	// (0x00072269) main_mup_pane_g13_ParamLimits

0x4fd0,	// (0x00072269) main_mup_pane_g13

0x000c,

0xf481,	// (0x0007c71a) main_mup_pane_g_ParamLimits

0xf481,	// (0x0007c71a) main_mup_pane_g

0x4fe4,	// (0x0007227d) main_mup_pane_t1_ParamLimits

0x4fe4,	// (0x0007227d) main_mup_pane_t1

0x4ffe,	// (0x00072297) main_mup_pane_t2_ParamLimits

0x4ffe,	// (0x00072297) main_mup_pane_t2

0x5016,	// (0x000722af) main_mup_pane_t3_ParamLimits

0x5016,	// (0x000722af) main_mup_pane_t3

0x502e,	// (0x000722c7) main_mup_pane_t4_ParamLimits

0x502e,	// (0x000722c7) main_mup_pane_t4

0x504c,	// (0x000722e5) main_mup_pane_t5_ParamLimits

0x504c,	// (0x000722e5) main_mup_pane_t5

0x5061,	// (0x000722fa) main_mup_pane_t6_ParamLimits

0x5061,	// (0x000722fa) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0007c735) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0007c735) main_mup_pane_t

0x5073,	// (0x0007230c) mup_progress_pane_ParamLimits

0x5073,	// (0x0007230c) mup_progress_pane

0x507f,	// (0x00072318) mup_visualizer_pane_ParamLimits

0x507f,	// (0x00072318) mup_visualizer_pane

0x50b3,	// (0x0007234c) mup_volume_pane_ParamLimits

0x50b3,	// (0x0007234c) mup_volume_pane

0xc353,	// (0x000795ec) mup_visualizer_pane_g1_ParamLimits

0xc353,	// (0x000795ec) mup_visualizer_pane_g1

0xc353,	// (0x000795ec) mup_visualizer_pane_g2_ParamLimits

0xc353,	// (0x000795ec) mup_visualizer_pane_g2

0xc1b7,	// (0x00079450) mup_visualizer_pane_g3_ParamLimits

0xc1b7,	// (0x00079450) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0007c742) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0007c742) mup_visualizer_pane_g

0xb58d,	// (0x00078826) mup_volume_pane_g1

0xc369,	// (0x00079602) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0007c749) mup_volume_pane_g

0xb58d,	// (0x00078826) mup_progress_pane_g1

0xc372,	// (0x0007960b) mup_progress_pane_g2

0xc37b,	// (0x00079614) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0007c74e) mup_progress_pane_g

0x318b,	// (0x00070424) bg_popup_window_pane_cp05

0xc384,	// (0x0007961d) heading_pane_cp02_ParamLimits

0xc384,	// (0x0007961d) heading_pane_cp02

0xc39e,	// (0x00079637) list_popup_blid_pane

0xc3a6,	// (0x0007963f) list_blid_sat_info_pane_ParamLimits

0xc3a6,	// (0x0007963f) list_blid_sat_info_pane

0xc3b9,	// (0x00079652) list_blid_sat_info_pane_g1

0xc3c1,	// (0x0007965a) list_blid_sat_info_pane_t1

0x51c9,	// (0x00072462) mup_equalizer_pane_ParamLimits

0x51c9,	// (0x00072462) mup_equalizer_pane

0x51e2,	// (0x0007247b) mup_equalizer_pane_cp1_ParamLimits

0x51e2,	// (0x0007247b) mup_equalizer_pane_cp1

0x51ff,	// (0x00072498) mup_equalizer_pane_cp2_ParamLimits

0x51ff,	// (0x00072498) mup_equalizer_pane_cp2

0x521c,	// (0x000724b5) mup_equalizer_pane_cp3_ParamLimits

0x521c,	// (0x000724b5) mup_equalizer_pane_cp3

0x523d,	// (0x000724d6) mup_equalizer_pane_cp4_ParamLimits

0x523d,	// (0x000724d6) mup_equalizer_pane_cp4

0x525e,	// (0x000724f7) mup_equalizer_pane_cp5

0x5272,	// (0x0007250b) mup_equalizer_pane_cp6

0x5286,	// (0x0007251f) mup_equalizer_pane_cp7

0x10b8,	// (0x0006e351) bg_popup_call_poc_act_pane_g9

0x10c0,	// (0x0006e359) bg_popup_call_poc_act_pane_g10

0x10c8,	// (0x0006e361) bg_popup_call_poc_act_pane_g11

0x000a,

0xb3e3,	// (0x0007867c) mup_scale_pane

0xb58d,	// (0x00078826) mup_scale_pane_g1

0xc3cf,	// (0x00079668) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0007c76a) mup_scale_pane_g

0xc3f3,	// (0x0007968c) msg_data_pane

0xc3fb,	// (0x00079694) scroll_pane_cp017

0x21e1,	// (0x0006f47a) bg_list_pane_cp04_ParamLimits

0x21e1,	// (0x0006f47a) bg_list_pane_cp04

0xc403,	// (0x0007969c) msg_data_pane_g1

0x52ac,	// (0x00072545) msg_data_pane_g2

0x4b68,	// (0x00071e01) msg_data_pane_g3

0x52b4,	// (0x0007254d) msg_data_pane_g4

0x52bc,	// (0x00072555) msg_data_pane_g5

0x52c4,	// (0x0007255d) msg_data_pane_g6

0x52cc,	// (0x00072565) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0007c779) msg_data_pane_g

0x2201,	// (0x0006f49a) msg_text_pane_ParamLimits

0x2201,	// (0x0006f49a) msg_text_pane

0x52d4,	// (0x0007256d) qrid_highlight_pane_cp011_ParamLimits

0x52d4,	// (0x0007256d) qrid_highlight_pane_cp011

0x318b,	// (0x00070424) msg_body_pane

0x318b,	// (0x00070424) msg_header_pane

0xc414,	// (0x000796ad) input_focus_pane_cp07

0x2235,	// (0x0006f4ce) msg_header_pane_t1_ParamLimits

0x2235,	// (0x0006f4ce) msg_header_pane_t1

0x2249,	// (0x0006f4e2) msg_header_pane_t2_ParamLimits

0x2249,	// (0x0006f4e2) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0007c78d) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0007c78d) msg_header_pane_t

0xc429,	// (0x000796c2) msg_body_pane_g1

0x225b,	// (0x0006f4f4) msg_body_pane_t1_ParamLimits

0x225b,	// (0x0006f4f4) msg_body_pane_t1

0x228c,	// (0x0006f525) msg_body_pane_t2_ParamLimits

0x228c,	// (0x0006f525) msg_body_pane_t2

0x229e,	// (0x0006f537) msg_body_pane_t3_ParamLimits

0x229e,	// (0x0006f537) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0007c792) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0007c792) msg_body_pane_t

0x5324,	// (0x000725bd) main_viewer_pane_g1_ParamLimits

0x5324,	// (0x000725bd) main_viewer_pane_g1

0x5332,	// (0x000725cb) main_viewer_pane_g2_ParamLimits

0x5332,	// (0x000725cb) main_viewer_pane_g2

0x5340,	// (0x000725d9) main_viewer_pane_g3_ParamLimits

0x5340,	// (0x000725d9) main_viewer_pane_g3

0x534f,	// (0x000725e8) main_viewer_pane_g4_ParamLimits

0x534f,	// (0x000725e8) main_viewer_pane_g4

0xc449,	// (0x000796e2) main_viewer_pane_g5_ParamLimits

0xc449,	// (0x000796e2) main_viewer_pane_g5

0xc449,	// (0x000796e2) main_viewer_pane_g7_ParamLimits

0xc449,	// (0x000796e2) main_viewer_pane_g7

0xc45b,	// (0x000796f4) main_viewer_pane_g8_ParamLimits

0xc45b,	// (0x000796f4) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0007c7a2) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0007c7a2) main_viewer_pane_g

0xc473,	// (0x0007970c) viewer_content_pane_ParamLimits

0xc473,	// (0x0007970c) viewer_content_pane

0x538b,	// (0x00072624) main_postcard_pane_g1_ParamLimits

0x538b,	// (0x00072624) main_postcard_pane_g1

0x53a1,	// (0x0007263a) main_postcard_pane_g2_ParamLimits

0x53a1,	// (0x0007263a) main_postcard_pane_g2

0x53b7,	// (0x00072650) main_postcard_pane_g3_ParamLimits

0x53b7,	// (0x00072650) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0007c7b3) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0007c7b3) main_postcard_pane_g

0x53ce,	// (0x00072667) main_postcard_pane_g4

0x5fc8,	// (0x00073261) smil_status_volume_pane_g2

0x5411,	// (0x000726aa) postcard_pane_ParamLimits

0x5411,	// (0x000726aa) postcard_pane

0xc481,	// (0x0007971a) postcard_pane_g1_ParamLimits

0xc481,	// (0x0007971a) postcard_pane_g1

0x5453,	// (0x000726ec) postcard_pane_g2_ParamLimits

0x5453,	// (0x000726ec) postcard_pane_g2

0x545f,	// (0x000726f8) postcard_pane_g3_ParamLimits

0x545f,	// (0x000726f8) postcard_pane_g3

0xc48f,	// (0x00079728) postcard_pane_g4_ParamLimits

0xc48f,	// (0x00079728) postcard_pane_g4

0x546b,	// (0x00072704) postcard_pane_g5_ParamLimits

0x546b,	// (0x00072704) postcard_pane_g5

0x5480,	// (0x00072719) postcard_pane_g6_ParamLimits

0x5480,	// (0x00072719) postcard_pane_g6

0xc481,	// (0x0007971a) postcard_pane_g7_ParamLimits

0xc481,	// (0x0007971a) postcard_pane_g7

0x0006,

0xf527,	// (0x0007c7c0) postcard_pane_g_ParamLimits

0xf527,	// (0x0007c7c0) postcard_pane_g

0x5494,	// (0x0007272d) main_mp2_pane_g1_ParamLimits

0x5494,	// (0x0007272d) main_mp2_pane_g1

0x54a0,	// (0x00072739) main_mp2_pane_g2_ParamLimits

0x54a0,	// (0x00072739) main_mp2_pane_g2

0x54ac,	// (0x00072745) main_mp2_pane_g3_ParamLimits

0x54ac,	// (0x00072745) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0007c7cf) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0007c7cf) main_mp2_pane_g

0x54b8,	// (0x00072751) main_mp2_pane_t1_ParamLimits

0x54b8,	// (0x00072751) main_mp2_pane_t1

0x54cd,	// (0x00072766) main_mp2_pane_t2_ParamLimits

0x54cd,	// (0x00072766) main_mp2_pane_t2

0x54df,	// (0x00072778) main_mp2_pane_t3_ParamLimits

0x54df,	// (0x00072778) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0007c7d6) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0007c7d6) main_mp2_pane_t

0xc49d,	// (0x00079736) pec_content_pane_ParamLimits

0xc49d,	// (0x00079736) pec_content_pane

0xba2a,	// (0x00078cc3) scroll_pane_cp015

0xc4af,	// (0x00079748) pec_attribute_pane_ParamLimits

0xc4af,	// (0x00079748) pec_attribute_pane

0x54f1,	// (0x0007278a) pec_content_pane_g1_ParamLimits

0x54f1,	// (0x0007278a) pec_content_pane_g1

0xc4bf,	// (0x00079758) pec_content_pane_t1_ParamLimits

0xc4bf,	// (0x00079758) pec_content_pane_t1

0xc4d1,	// (0x0007976a) pec_content_pane_t2_ParamLimits

0xc4d1,	// (0x0007976a) pec_content_pane_t2

0x0001,

0xf544,	// (0x0007c7dd) pec_content_pane_t_ParamLimits

0xf544,	// (0x0007c7dd) pec_content_pane_t

0x54ff,	// (0x00072798) list_single_graphic_pane_cp01_ParamLimits

0x54ff,	// (0x00072798) list_single_graphic_pane_cp01

0xb3e3,	// (0x0007867c) bg_popup_sub_pane_cp04

0xc4e3,	// (0x0007977c) popup_mup_playback_window_g1

0xc4ef,	// (0x00079788) popup_mup_playback_window_t1

0xc504,	// (0x0007979d) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0007c7e2) popup_mup_playback_window_t

0xc53b,	// (0x000797d4) main_image_pane_g1_ParamLimits

0xc53b,	// (0x000797d4) main_image_pane_g1

0xc57e,	// (0x00079817) scroll_pane_cp018_ParamLimits

0xc57e,	// (0x00079817) scroll_pane_cp018

0xc596,	// (0x0007982f) scroll_pane_cp016_ParamLimits

0xc596,	// (0x0007982f) scroll_pane_cp016

0x55cf,	// (0x00072868) smil2_image_pane_ParamLimits

0x55cf,	// (0x00072868) smil2_image_pane

0x5603,	// (0x0007289c) smil2_root_pane_ParamLimits

0x5603,	// (0x0007289c) smil2_root_pane

0x563b,	// (0x000728d4) smil2_text_pane_ParamLimits

0x563b,	// (0x000728d4) smil2_text_pane

0x318b,	// (0x00070424) bg_list_pane_cp06

0xc5d2,	// (0x0007986b) grid_radio_pane

0x318b,	// (0x00070424) bg_popup_window_pane_cp06

0xc5da,	// (0x00079873) main_fmradio_pane_t1

0xc005,	// (0x0007929e) heading_pane_cp04

0xc5e8,	// (0x00079881) main_fmradio_pane_t2

0x10d0,	// (0x0006e369) popup_cale_lunar_info_window_g1

0xc5f6,	// (0x0007988f) main_fmradio_pane_t3

0x10d8,	// (0x0006e371) popup_cale_lunar_info_window_g2

0xc604,	// (0x0007989d) main_fmradio_pane_t4

0x0001,

0xc612,	// (0x000798ab) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0007c8bd) popup_cale_lunar_info_window_g

0xf55e,	// (0x0007c7f7) main_fmradio_pane_t

0xc620,	// (0x000798b9) wait_bar_pane_cp03

0xc628,	// (0x000798c1) cell_fmradio_pane_ParamLimits

0xc628,	// (0x000798c1) cell_fmradio_pane

0xc481,	// (0x0007971a) cell_fmradio_pane_g1_ParamLimits

0xc481,	// (0x0007971a) cell_fmradio_pane_g1

0x318b,	// (0x00070424) grid_highlight_pane_cp011

0xc63b,	// (0x000798d4) poc_content_pane_ParamLimits

0xc63b,	// (0x000798d4) poc_content_pane

0xc64d,	// (0x000798e6) scroll_pane_cp019

0x56bb,	// (0x00072954) popup_call_poc_act_window_ParamLimits

0x56bb,	// (0x00072954) popup_call_poc_act_window

0x56df,	// (0x00072978) popup_call_poc_inact_window_ParamLimits

0x56df,	// (0x00072978) popup_call_poc_inact_window

0xf5fb,	// (0x0007c894) bg_popup_call_poc_act_pane_g

0x1048,	// (0x0006e2e1) bg_popup_call_poc_inact_pane_g1

0x1050,	// (0x0006e2e9) bg_popup_call_poc_inact_pane_g2

0xc655,	// (0x000798ee) popup_call_poc_act_window_g2

0x1058,	// (0x0006e2f1) bg_popup_call_poc_inact_pane_g3

0x1060,	// (0x0006e2f9) bg_popup_call_poc_inact_pane_g4

0x1068,	// (0x0006e301) bg_popup_call_poc_inact_pane_g5

0xc65d,	// (0x000798f6) popup_call_poc_act_window_t1_ParamLimits

0xc65d,	// (0x000798f6) popup_call_poc_act_window_t1

0xc685,	// (0x0007991e) popup_call_poc_act_window_t2_ParamLimits

0xc685,	// (0x0007991e) popup_call_poc_act_window_t2

0xc6ad,	// (0x00079946) popup_call_poc_act_window_t3_ParamLimits

0xc6ad,	// (0x00079946) popup_call_poc_act_window_t3

0xc6d5,	// (0x0007996e) popup_call_poc_act_window_t4_ParamLimits

0xc6d5,	// (0x0007996e) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0007c802) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0007c802) popup_call_poc_act_window_t

0x1070,	// (0x0006e309) bg_popup_call_poc_inact_pane_g6

0x1078,	// (0x0006e311) bg_popup_call_poc_inact_pane_g7

0x1080,	// (0x0006e319) bg_popup_call_poc_inact_pane_g8

0xc6e7,	// (0x00079980) popup_call_poc_inact_window_g2

0x1088,	// (0x0006e321) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0007c881) bg_popup_call_poc_inact_pane_g

0xc6ef,	// (0x00079988) popup_call_poc_inact_window_t1_ParamLimits

0xc6ef,	// (0x00079988) popup_call_poc_inact_window_t1

0xc704,	// (0x0007999d) popup_call_poc_inact_window_t2_ParamLimits

0xc704,	// (0x0007999d) popup_call_poc_inact_window_t2

0xc719,	// (0x000799b2) popup_call_poc_inact_window_t3_ParamLimits

0xc719,	// (0x000799b2) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0007c80b) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0007c80b) popup_call_poc_inact_window_t

0x124e,	// (0x0006e4e7) context_pane_ParamLimits

0x5f09,	// (0x000731a2) signal_pane_ParamLimits

0xc282,	// (0x0007951b) main_call2_pane

0x123c,	// (0x0006e4d5) popup_phob_thumbnail2_window_ParamLimits

0x123c,	// (0x0006e4d5) popup_phob_thumbnail2_window

0xc431,	// (0x000796ca) aid_hotspot_pointer_arrow_pane

0xc439,	// (0x000796d2) aid_hotspot_pointer_hand_pane

0x5a2d,	// (0x00072cc6) phob_pre_status_pane_g5

0x3aec,	// (0x00070d85) cams_zoom_pane_ParamLimits

0x3afb,	// (0x00070d94) image_vga_pane_ParamLimits

0x3b15,	// (0x00070dae) main_camera_pane_g1_ParamLimits

0x3b27,	// (0x00070dc0) main_camera_pane_g2_ParamLimits

0x3b39,	// (0x00070dd2) main_camera_pane_g3_ParamLimits

0x3b4b,	// (0x00070de4) main_camera_pane_g4_ParamLimits

0x3b5d,	// (0x00070df6) main_camera_pane_g5_ParamLimits

0x3b6f,	// (0x00070e08) main_camera_pane_g6_ParamLimits

0x3b81,	// (0x00070e1a) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0007c50a) main_camera_pane_g_ParamLimits

0x3b93,	// (0x00070e2c) main_camera_pane_t1_ParamLimits

0x3ba9,	// (0x00070e42) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0007c51b) main_camera_pane_t_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_preview_window_pane_cp01_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_preview_window_pane_cp01

0xc72e,	// (0x000799c7) popup_phob_thumbnail2_window_g1_ParamLimits

0xc72e,	// (0x000799c7) popup_phob_thumbnail2_window_g1

0x318b,	// (0x00070424) call2_cli_visual_pane

0x5713,	// (0x000729ac) popup_call2_audio_conf_window_ParamLimits

0x5713,	// (0x000729ac) popup_call2_audio_conf_window

0x5733,	// (0x000729cc) popup_call2_audio_first_window_ParamLimits

0x5733,	// (0x000729cc) popup_call2_audio_first_window

0x57c9,	// (0x00072a62) popup_call2_audio_in_window_ParamLimits

0x57c9,	// (0x00072a62) popup_call2_audio_in_window

0x5811,	// (0x00072aaa) popup_call2_audio_out_window_ParamLimits

0x5811,	// (0x00072aaa) popup_call2_audio_out_window

0x587b,	// (0x00072b14) popup_call2_audio_second_window_ParamLimits

0x587b,	// (0x00072b14) popup_call2_audio_second_window

0x58e1,	// (0x00072b7a) popup_call2_audio_wait_window_ParamLimits

0x58e1,	// (0x00072b7a) popup_call2_audio_wait_window

0x318b,	// (0x00070424) bg_popup_call2_act_pane_cp03

0xb3c5,	// (0x0007865e) list_conf_pane_cp

0xc73a,	// (0x000799d3) popup_call2_audio_conf_window_t1

0xc748,	// (0x000799e1) list_single_graphic_popup_conf2_pane_ParamLimits

0xc748,	// (0x000799e1) list_single_graphic_popup_conf2_pane

0xc098,	// (0x00079331) list_highlight_pane_cp04

0xc75b,	// (0x000799f4) list_single_graphic_popup_conf2_pane_g1

0xc0a9,	// (0x00079342) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0007c812) list_single_graphic_popup_conf2_pane_g

0xc765,	// (0x000799fe) list_single_graphic_popup_conf2_pane_t1

0xc773,	// (0x00079a0c) bg_popup_call2_act_pane_cp01_ParamLimits

0xc773,	// (0x00079a0c) bg_popup_call2_act_pane_cp01

0xc7fd,	// (0x00079a96) call_type_pane_cp05_ParamLimits

0xc7fd,	// (0x00079a96) call_type_pane_cp05

0xc851,	// (0x00079aea) popup_call2_audio_second_window_g1_ParamLimits

0xc851,	// (0x00079aea) popup_call2_audio_second_window_g1

0xc8a5,	// (0x00079b3e) popup_call2_audio_second_window_g2_ParamLimits

0xc8a5,	// (0x00079b3e) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0007c817) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0007c817) popup_call2_audio_second_window_g

0xc90a,	// (0x00079ba3) popup_call2_audio_second_window_t1_ParamLimits

0xc90a,	// (0x00079ba3) popup_call2_audio_second_window_t1

0xc9c5,	// (0x00079c5e) popup_call2_audio_second_window_t2_ParamLimits

0xc9c5,	// (0x00079c5e) popup_call2_audio_second_window_t2

0xca18,	// (0x00079cb1) popup_call2_audio_second_window_t3_ParamLimits

0xca18,	// (0x00079cb1) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0007c81e) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0007c81e) popup_call2_audio_second_window_t

0x318b,	// (0x00070424) bg_popup_call2_in_pane_cp02

0x3195,	// (0x0007042e) call_type_pane_cp04

0x319d,	// (0x00070436) popup_call2_audio_wait_window_g1

0x31a5,	// (0x0007043e) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0007c3f7) popup_call2_audio_wait_window_g

0x31ad,	// (0x00070446) popup_call2_audio_wait_window_t3

0xcb0b,	// (0x00079da4) bg_popup_call2_act_pane_ParamLimits

0xcb0b,	// (0x00079da4) bg_popup_call2_act_pane

0xcbcb,	// (0x00079e64) call_type_pane_cp03_ParamLimits

0xcbcb,	// (0x00079e64) call_type_pane_cp03

0xcc2f,	// (0x00079ec8) popup_call2_audio_first_window_g1_ParamLimits

0xcc2f,	// (0x00079ec8) popup_call2_audio_first_window_g1

0xcc9f,	// (0x00079f38) popup_call2_audio_first_window_g2_ParamLimits

0xcc9f,	// (0x00079f38) popup_call2_audio_first_window_g2

0xc353,	// (0x000795ec) popup_call2_audio_first_window_g3_ParamLimits

0xc353,	// (0x000795ec) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0007c827) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0007c827) popup_call2_audio_first_window_g

0x088d,	// (0x0006db26) popup_call2_audio_first_window_t1_ParamLimits

0x088d,	// (0x0006db26) popup_call2_audio_first_window_t1

0x0990,	// (0x0006dc29) popup_call2_audio_first_window_t4_ParamLimits

0x0990,	// (0x0006dc29) popup_call2_audio_first_window_t4

0x0a73,	// (0x0006dd0c) popup_call2_audio_first_window_t5_ParamLimits

0x0a73,	// (0x0006dd0c) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0007c832) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0007c832) popup_call2_audio_first_window_t

0xb3db,	// (0x00078674) bg_popup_call2_act_pane_g1

0x10e0,	// (0x0006e379) popup_cale_lunar_info_window_t1

0x10ee,	// (0x0006e387) popup_cale_lunar_info_window_t2

0x10fc,	// (0x0006e395) popup_cale_lunar_info_window_t3

0x318b,	// (0x00070424) bg_popup_call2_bubble_pane

0x0b74,	// (0x0006de0d) bg_popup_call2_in_pane_cp01_ParamLimits

0x0b74,	// (0x0006de0d) bg_popup_call2_in_pane_cp01

0x2e43,	// (0x000700dc) call_type_pane_cp02

0x0bbc,	// (0x0006de55) popup_call2_audio_out_window_g1_ParamLimits

0x0bbc,	// (0x0006de55) popup_call2_audio_out_window_g1

0x0be8,	// (0x0006de81) popup_call2_audio_out_window_g2_ParamLimits

0x0be8,	// (0x0006de81) popup_call2_audio_out_window_g2

0x0c10,	// (0x0006dea9) popup_call2_audio_out_window_g3_ParamLimits

0x0c10,	// (0x0006dea9) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0007c83b) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0007c83b) popup_call2_audio_out_window_g

0x0c4b,	// (0x0006dee4) popup_call2_audio_out_window_t1_ParamLimits

0x0c4b,	// (0x0006dee4) popup_call2_audio_out_window_t1

0x0caa,	// (0x0006df43) popup_call2_audio_out_window_t2_ParamLimits

0x0caa,	// (0x0006df43) popup_call2_audio_out_window_t2

0x0cfe,	// (0x0006df97) popup_call2_audio_out_window_t3_ParamLimits

0x0cfe,	// (0x0006df97) popup_call2_audio_out_window_t3

0x0d14,	// (0x0006dfad) popup_call2_audio_out_window_t4_ParamLimits

0x0d14,	// (0x0006dfad) popup_call2_audio_out_window_t4

0x0d2a,	// (0x0006dfc3) popup_call2_audio_out_window_t5_ParamLimits

0x0d2a,	// (0x0006dfc3) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0007c844) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0007c844) popup_call2_audio_out_window_t

0x0d8e,	// (0x0006e027) bg_popup_call2_in_pane_ParamLimits

0x0d8e,	// (0x0006e027) bg_popup_call2_in_pane

0x0dea,	// (0x0006e083) popup_call2_audio_in_window_g1_ParamLimits

0x0dea,	// (0x0006e083) popup_call2_audio_in_window_g1

0x0e22,	// (0x0006e0bb) popup_call2_audio_in_window_g2_ParamLimits

0x0e22,	// (0x0006e0bb) popup_call2_audio_in_window_g2

0x0e5a,	// (0x0006e0f3) popup_call2_audio_in_window_g3_ParamLimits

0x0e5a,	// (0x0006e0f3) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0007c851) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0007c851) popup_call2_audio_in_window_g

0x0eb2,	// (0x0006e14b) popup_call2_audio_in_window_t1_ParamLimits

0x0eb2,	// (0x0006e14b) popup_call2_audio_in_window_t1

0x0f32,	// (0x0006e1cb) popup_call2_audio_in_window_t2_ParamLimits

0x0f32,	// (0x0006e1cb) popup_call2_audio_in_window_t2

0x0fb2,	// (0x0006e24b) popup_call2_audio_in_window_t3_ParamLimits

0x0fb2,	// (0x0006e24b) popup_call2_audio_in_window_t3

0x0fcc,	// (0x0006e265) popup_call2_audio_in_window_t4_ParamLimits

0x0fcc,	// (0x0006e265) popup_call2_audio_in_window_t4

0x0fde,	// (0x0006e277) popup_call2_audio_in_window_t5_ParamLimits

0x0fde,	// (0x0006e277) popup_call2_audio_in_window_t5

0x0ff3,	// (0x0006e28c) popup_call2_audio_in_window_t6_ParamLimits

0x0ff3,	// (0x0006e28c) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0007c85a) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0007c85a) popup_call2_audio_in_window_t

0xb3db,	// (0x00078674) bg_popup_call2_in_pane_g1

0x110a,	// (0x0006e3a3) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0007c8c2) popup_cale_lunar_info_window_t

0xb3e3,	// (0x0007867c) bg_popup_call2_rect_pane_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_call2_rect_pane

0x318b,	// (0x00070424) call2_cli_visual_graphic_pane

0x318b,	// (0x00070424) call2_cli_visual_text_pane

0xcd03,	// (0x00079f9c) smil_status_volume_pane_g3

0x0002,

0xb58d,	// (0x00078826) call2_cli_visual_graphic_pane_g1

0xb58d,	// (0x00078826) call2_cli_visual_graphic_pane_g2

0xb58d,	// (0x00078826) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0007c867) call2_cli_visual_graphic_pane_g

0x1008,	// (0x0006e2a1) bg_popup_call2_rect_pane_g1

0xb635,	// (0x000788ce) bg_popup_call2_rect_pane_g2

0x1010,	// (0x0006e2a9) bg_popup_call2_rect_pane_g3

0x1018,	// (0x0006e2b1) bg_popup_call2_rect_pane_g4

0x1020,	// (0x0006e2b9) bg_popup_call2_rect_pane_g5

0x1028,	// (0x0006e2c1) bg_popup_call2_rect_pane_g6

0x1030,	// (0x0006e2c9) bg_popup_call2_rect_pane_g7

0x1038,	// (0x0006e2d1) bg_popup_call2_rect_pane_g8

0x1040,	// (0x0006e2d9) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0007c86e) bg_popup_call2_rect_pane_g

0x1048,	// (0x0006e2e1) bg_popup_call2_bubble_pane_g1

0x1050,	// (0x0006e2e9) bg_popup_call2_bubble_pane_g2

0x1058,	// (0x0006e2f1) bg_popup_call2_bubble_pane_g3

0x1060,	// (0x0006e2f9) bg_popup_call2_bubble_pane_g4

0x1068,	// (0x0006e301) bg_popup_call2_bubble_pane_g5

0x1070,	// (0x0006e309) bg_popup_call2_bubble_pane_g6

0x1078,	// (0x0006e311) bg_popup_call2_bubble_pane_g7

0x1080,	// (0x0006e319) bg_popup_call2_bubble_pane_g8

0x1088,	// (0x0006e321) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0007c881) bg_popup_call2_bubble_pane_g

0x375d,	// (0x000709f6) aid_cale_week_size_cell_pane

0x3bc1,	// (0x00070e5a) aid_cams_cif_uncrop_pane_ParamLimits

0x3bc1,	// (0x00070e5a) aid_cams_cif_uncrop_pane

0x3d7e,	// (0x00071017) aid_cams_size_cell_ParamLimits

0x3d7e,	// (0x00071017) aid_cams_size_cell

0x3d92,	// (0x0007102b) grid_cams_pane_ParamLimits

0x3dac,	// (0x00071045) linegrid_cams_pane_ParamLimits

0x3e7b,	// (0x00071114) call_video_pane_t1

0x3e8f,	// (0x00071128) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0007c56e) call_video_pane_t

0x4237,	// (0x000714d0) aid_cale_month_size_cell_pane_ParamLimits

0x4237,	// (0x000714d0) aid_cale_month_size_cell_pane

0xf672,	// (0x0007c90b) smil_status_volume_pane_g

0xcd10,	// (0x00079fa9) volume_smil_pane_ParamLimits

0x2a75,	// (0x0006fd0e) aid_popup2_width_pane

0x36df,	// (0x00070978) cell_qdial_pane_g4_ParamLimits

0x36df,	// (0x00070978) cell_qdial_pane_g4

0x4d01,	// (0x00071f9a) aid_blid_cardinal_pane_ParamLimits

0x4d0d,	// (0x00071fa6) aid_blid_destination_pane_ParamLimits

0x4d0d,	// (0x00071fa6) aid_blid_destination_pane

0xb3e3,	// (0x0007867c) bg_popup_call_poc_act_pane_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_call_poc_act_pane

0xb3e3,	// (0x0007867c) bg_popup_call_poc_inact_pane_ParamLimits

0xb3e3,	// (0x0007867c) bg_popup_call_poc_inact_pane

0x1090,	// (0x0006e329) bg_popup_call_poc_act_pane_g1

0x1098,	// (0x0006e331) bg_popup_call_poc_act_pane_g2

0x10a0,	// (0x0006e339) bg_popup_call_poc_act_pane_g3

0x1060,	// (0x0006e2f9) bg_popup_call_poc_act_pane_g4

0x1068,	// (0x0006e301) bg_popup_call_poc_act_pane_g5

0x10a8,	// (0x0006e341) bg_popup_call_poc_act_pane_g6

0x1078,	// (0x0006e311) bg_popup_call_poc_act_pane_g7

0x10b0,	// (0x0006e349) bg_popup_call_poc_act_pane_g8

0x318b,	// (0x00070424) main_usb_pane

0x1217,	// (0x0006e4b0) popup_cale_lunar_info_window

0x40ce,	// (0x00071367) im_reading_pane_t1_ParamLimits

0xb982,	// (0x00078c1b) list_im_pane_ParamLimits

0xb993,	// (0x00078c2c) scroll_pane_cp07_ParamLimits

0x318b,	// (0x00070424) grid_highlight_pane_cp012

0xb3e3,	// (0x0007867c) mup_scale_pane_ParamLimits

0xc481,	// (0x0007971a) main_usb_pane_g1_ParamLimits

0xc481,	// (0x0007971a) main_usb_pane_g1

0x5940,	// (0x00072bd9) main_usb_pane_g2_ParamLimits

0x5940,	// (0x00072bd9) main_usb_pane_g2

0x0001,

0xf612,	// (0x0007c8ab) main_usb_pane_g_ParamLimits

0xf612,	// (0x0007c8ab) main_usb_pane_g

0x5956,	// (0x00072bef) main_usb_pane_t1_ParamLimits

0x5956,	// (0x00072bef) main_usb_pane_t1

0x5968,	// (0x00072c01) main_usb_pane_t2_ParamLimits

0x5968,	// (0x00072c01) main_usb_pane_t2

0x597a,	// (0x00072c13) main_usb_pane_t3_ParamLimits

0x597a,	// (0x00072c13) main_usb_pane_t3

0x598c,	// (0x00072c25) main_usb_pane_t4_ParamLimits

0x598c,	// (0x00072c25) main_usb_pane_t4

0x599e,	// (0x00072c37) main_usb_pane_t5_ParamLimits

0x599e,	// (0x00072c37) main_usb_pane_t5

0x59b0,	// (0x00072c49) main_usb_pane_t6_ParamLimits

0x59b0,	// (0x00072c49) main_usb_pane_t6

0x0005,

0xf617,	// (0x0007c8b0) main_usb_pane_t_ParamLimits

0x4ca6,	// (0x00071f3f) aid_text_placing

0x4caf,	// (0x00071f48) main_location2_pane_t1_ParamLimits

0x4cc3,	// (0x00071f5c) main_location2_pane_t2_ParamLimits

0x4cd7,	// (0x00071f70) main_location2_pane_t3_ParamLimits

0x4ced,	// (0x00071f86) main_location2_pane_t4_ParamLimits

0x4ced,	// (0x00071f86) main_location2_pane_t4

0xf436,	// (0x0007c6cf) main_location2_pane_t_ParamLimits

0xb427,	// (0x000786c0) find_pinb_pane_g2_ParamLimits

0xb427,	// (0x000786c0) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0007c41d) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0007c41d) find_pinb_pane_g

0xb433,	// (0x000786cc) find_pinb_pane_t1_ParamLimits

0xb445,	// (0x000786de) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0007c422) find_pinb_pane_t_ParamLimits

0x318b,	// (0x00070424) main_call3_pane

0x452f,	// (0x000717c8) cale_month_day_heading_pane_t1_ParamLimits

0x458d,	// (0x00071826) cale_month_day_heading_pane_t2_ParamLimits

0x45f2,	// (0x0007188b) cale_month_day_heading_pane_t3_ParamLimits

0x4657,	// (0x000718f0) cale_month_day_heading_pane_t4_ParamLimits

0x46bc,	// (0x00071955) cale_month_day_heading_pane_t5_ParamLimits

0x4721,	// (0x000719ba) cale_month_day_heading_pane_t6_ParamLimits

0x4786,	// (0x00071a1f) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0007c5a6) cale_month_day_heading_pane_t_ParamLimits

0xbc09,	// (0x00078ea2) smil_status_volume_pane

0x542f,	// (0x000726c8) postcard_address_pane_ParamLimits

0x542f,	// (0x000726c8) postcard_address_pane

0x5441,	// (0x000726da) postcard_message_pane_ParamLimits

0x5441,	// (0x000726da) postcard_message_pane

0x591b,	// (0x00072bb4) call2_cli_visual_pane_t1_ParamLimits

0x591b,	// (0x00072bb4) call2_cli_visual_pane_t1

0x6177,	// (0x00073410) postcard_message_pane_t1_ParamLimits

0x6177,	// (0x00073410) postcard_message_pane_t1

0x6160,	// (0x000733f9) postcard_address_pane_t1_ParamLimits

0x6160,	// (0x000733f9) postcard_address_pane_t1

0x614c,	// (0x000733e5) popup_call3_audio_in_window_ParamLimits

0x614c,	// (0x000733e5) popup_call3_audio_in_window

0x5fdb,	// (0x00073274) bg_popup_call3_in_pane_ParamLimits

0x5fdb,	// (0x00073274) bg_popup_call3_in_pane

0x604d,	// (0x000732e6) popup_call3_audio_in_window_g1_ParamLimits

0x604d,	// (0x000732e6) popup_call3_audio_in_window_g1

0x606d,	// (0x00073306) popup_call3_audio_in_window_g2_ParamLimits

0x606d,	// (0x00073306) popup_call3_audio_in_window_g2

0x608d,	// (0x00073326) popup_call3_audio_in_window_g3_ParamLimits

0x608d,	// (0x00073326) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0007c912) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0007c912) popup_call3_audio_in_window_g

0x60be,	// (0x00073357) popup_call3_audio_in_window_t1_ParamLimits

0x60be,	// (0x00073357) popup_call3_audio_in_window_t1

0x60fc,	// (0x00073395) popup_call3_audio_in_window_t2_ParamLimits

0x60fc,	// (0x00073395) popup_call3_audio_in_window_t2

0x613a,	// (0x000733d3) popup_call3_audio_in_window_t3_ParamLimits

0x613a,	// (0x000733d3) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0007c91b) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0007c91b) popup_call3_audio_in_window_t

0xc282,	// (0x0007951b) bg_popup_call3_rect_pane

0x1008,	// (0x0006e2a1) bg_popup_call3_rect_pane_g1

0xb635,	// (0x000788ce) bg_popup_call3_rect_pane_g2

0x1010,	// (0x0006e2a9) bg_popup_call3_rect_pane_g3

0x1018,	// (0x0006e2b1) bg_popup_call3_rect_pane_g4

0x1020,	// (0x0006e2b9) bg_popup_call3_rect_pane_g5

0x1028,	// (0x0006e2c1) bg_popup_call3_rect_pane_g6

0x1030,	// (0x0006e2c9) bg_popup_call3_rect_pane_g7

0x50c9,	// (0x00072362) mup_visualizer_osc_pane

0xc361,	// (0x000795fa) mup_visualizer_spec_pane

0x600b,	// (0x000732a4) call3_video_qcif_pane_ParamLimits

0x600b,	// (0x000732a4) call3_video_qcif_pane

0x601c,	// (0x000732b5) call3_video_qcif_uncrop_pane_ParamLimits

0x601c,	// (0x000732b5) call3_video_qcif_uncrop_pane

0x6028,	// (0x000732c1) call3_video_subqcif_pane_ParamLimits

0x6028,	// (0x000732c1) call3_video_subqcif_pane

0x603c,	// (0x000732d5) call3_video_subqcif_uncrop_pane_ParamLimits

0x603c,	// (0x000732d5) call3_video_subqcif_uncrop_pane

0x60ad,	// (0x00073346) popup_call3_audio_in_window_g4_ParamLimits

0x60ad,	// (0x00073346) popup_call3_audio_in_window_g4

0x5f9c,	// (0x00073235) mup_spec_half_pane

0x5fa5,	// (0x0007323e) mup_spec_half_pane_cp

0x5f8a,	// (0x00073223) mup_osc_middle_pane

0x5f93,	// (0x0007322c) mup_visualizer_osc_pane_g1

0x5f6a,	// (0x00073203) mup_spec_bar_pane_ParamLimits

0x5f6a,	// (0x00073203) mup_spec_bar_pane

0x129b,	// (0x0006e534) mup_spec_bar_pane_g1

0x12a5,	// (0x0006e53e) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007c906) mup_spec_bar_pane_g

0x375d,	// (0x000709f6) aid_cale_week_size_cell_pane_ParamLimits

0x3770,	// (0x00070a09) bg_cale_heading_pane_ParamLimits

0xb6b1,	// (0x0007894a) bg_cale_pane_cp01_ParamLimits

0x3788,	// (0x00070a21) cale_week_corner_pane_ParamLimits

0x3799,	// (0x00070a32) cale_week_day_heading_pane_ParamLimits

0x37b1,	// (0x00070a4a) cale_week_scroll_pane_g1_ParamLimits

0x37c6,	// (0x00070a5f) cale_week_scroll_pane_g2_ParamLimits

0x37d7,	// (0x00070a70) cale_week_scroll_pane_g3_ParamLimits

0x37e8,	// (0x00070a81) cale_week_scroll_pane_g4_ParamLimits

0x37f9,	// (0x00070a92) cale_week_scroll_pane_g5_ParamLimits

0x380a,	// (0x00070aa3) cale_week_scroll_pane_g6_ParamLimits

0x381b,	// (0x00070ab4) cale_week_scroll_pane_g7_ParamLimits

0x382c,	// (0x00070ac5) cale_week_scroll_pane_g8_ParamLimits

0x383d,	// (0x00070ad6) cale_week_scroll_pane_g9_ParamLimits

0x384e,	// (0x00070ae7) cale_week_scroll_pane_g10_ParamLimits

0x385f,	// (0x00070af8) cale_week_scroll_pane_g11_ParamLimits

0x3870,	// (0x00070b09) cale_week_scroll_pane_g12_ParamLimits

0x3881,	// (0x00070b1a) cale_week_scroll_pane_g13_ParamLimits

0x3892,	// (0x00070b2b) cale_week_scroll_pane_g14_ParamLimits

0x38a3,	// (0x00070b3c) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0007c4ae) cale_week_scroll_pane_g_ParamLimits

0x38b4,	// (0x00070b4d) cale_week_time_pane_ParamLimits

0x38c5,	// (0x00070b5e) grid_cale_week_pane_ParamLimits

0xb6ca,	// (0x00078963) listscroll_cale_week_pane_t1

0x38d8,	// (0x00070b71) scroll_pane_cp08_ParamLimits

0x4278,	// (0x00071511) cale_month_corner_pane_ParamLimits

0xbba9,	// (0x00078e42) cale_month_pane_t1

0x44f8,	// (0x00071791) cale_month_week_pane_ParamLimits

0x4b0b,	// (0x00071da4) popup_call_status_window_g1_ParamLimits

0x4b1f,	// (0x00071db8) popup_call_status_window_g2_ParamLimits

0x4b33,	// (0x00071dcc) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0007c656) popup_call_status_window_g_ParamLimits

0xbf86,	// (0x0007921f) aid_call2_pane

0x2227,	// (0x0006f4c0) msg_header_pane_g1

0x542f,	// (0x000726c8) postcard_address2_pane_ParamLimits

0x542f,	// (0x000726c8) postcard_address2_pane

0x5441,	// (0x000726da) postcard_message2_pane_ParamLimits

0x5441,	// (0x000726da) postcard_message2_pane

0x5f17,	// (0x000731b0) message2_row_pane_ParamLimits

0x5f17,	// (0x000731b0) message2_row_pane

0x5f36,	// (0x000731cf) address2_row_pane_ParamLimits

0x5f36,	// (0x000731cf) address2_row_pane

0x1269,	// (0x0006e502) postcard_message2_row_pane_g1

0x1271,	// (0x0006e50a) postcard_message2_row_pane_t1

0x1269,	// (0x0006e502) address2_row_pane_g1

0x1271,	// (0x0006e50a) address2_row_pane_t1

0xb72e,	// (0x000789c7) aid_size_cell_vorec

0x318b,	// (0x00070424) main_rss_pane

0x5f49,	// (0x000731e2) rss_list_single_pane_ParamLimits

0x5f49,	// (0x000731e2) rss_list_single_pane

0x127f,	// (0x0006e518) rss_list_single_pane_t1

0x128d,	// (0x0006e526) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0007c901) rss_list_single_pane_t

0x318b,	// (0x00070424) main_camera2_pane

0x318b,	// (0x00070424) main_video2_pane

0x61f0,	// (0x00073489) cams_zoom_pane_cp2_ParamLimits

0x61f0,	// (0x00073489) cams_zoom_pane_cp2

0x6210,	// (0x000734a9) image2_vga_pane_ParamLimits

0x6210,	// (0x000734a9) image2_vga_pane

0x6261,	// (0x000734fa) main_camera2_pane_g1_ParamLimits

0x6261,	// (0x000734fa) main_camera2_pane_g1

0x6281,	// (0x0007351a) main_camera2_pane_g2_ParamLimits

0x6281,	// (0x0007351a) main_camera2_pane_g2

0x62a1,	// (0x0007353a) main_camera2_pane_g3_ParamLimits

0x62a1,	// (0x0007353a) main_camera2_pane_g3

0x62c1,	// (0x0007355a) main_camera2_pane_g4_ParamLimits

0x62c1,	// (0x0007355a) main_camera2_pane_g4

0x62e1,	// (0x0007357a) main_camera2_pane_g5_ParamLimits

0x62e1,	// (0x0007357a) main_camera2_pane_g5

0x6301,	// (0x0007359a) main_camera2_pane_g6_ParamLimits

0x6301,	// (0x0007359a) main_camera2_pane_g6

0x6321,	// (0x000735ba) main_camera2_pane_g7_ParamLimits

0x6321,	// (0x000735ba) main_camera2_pane_g7

0x6341,	// (0x000735da) main_camera2_pane_g8_ParamLimits

0x6341,	// (0x000735da) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0007c922) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0007c922) main_camera2_pane_g

0x6381,	// (0x0007361a) main_camera2_pane_t1_ParamLimits

0x6381,	// (0x0007361a) main_camera2_pane_t1

0x63b6,	// (0x0007364f) main_camera2_pane_t2_ParamLimits

0x63b6,	// (0x0007364f) main_camera2_pane_t2

0x63dc,	// (0x00073675) main_camera2_pane_t3_ParamLimits

0x63dc,	// (0x00073675) main_camera2_pane_t3

0x643a,	// (0x000736d3) main_camera2_pane_t4_ParamLimits

0x643a,	// (0x000736d3) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0007c935) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0007c935) main_camera2_pane_t

0x64cc,	// (0x00073765) cams_zoom_pane_cp4_ParamLimits

0x64cc,	// (0x00073765) cams_zoom_pane_cp4

0x64e2,	// (0x0007377b) image2_cif_pane_ParamLimits

0x64e2,	// (0x0007377b) image2_cif_pane

0x650d,	// (0x000737a6) image2_subqcif_pane_ParamLimits

0x650d,	// (0x000737a6) image2_subqcif_pane

0x6527,	// (0x000737c0) main_video2_pane_g1_ParamLimits

0x6527,	// (0x000737c0) main_video2_pane_g1

0x6541,	// (0x000737da) main_video2_pane_g2_ParamLimits

0x6541,	// (0x000737da) main_video2_pane_g2

0x6557,	// (0x000737f0) main_video2_pane_g3_ParamLimits

0x6557,	// (0x000737f0) main_video2_pane_g3

0x656d,	// (0x00073806) main_video2_pane_g4_ParamLimits

0x656d,	// (0x00073806) main_video2_pane_g4

0x6583,	// (0x0007381c) main_video2_pane_g5_ParamLimits

0x6583,	// (0x0007381c) main_video2_pane_g5

0x6599,	// (0x00073832) main_video2_pane_g6_ParamLimits

0x6599,	// (0x00073832) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0007c944) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0007c944) main_video2_pane_g

0x65b3,	// (0x0007384c) main_video2_pane_t1_ParamLimits

0x65b3,	// (0x0007384c) main_video2_pane_t1

0x65d7,	// (0x00073870) main_video2_pane_t2_ParamLimits

0x65d7,	// (0x00073870) main_video2_pane_t2

0x6625,	// (0x000738be) main_video2_pane_t3_ParamLimits

0x6625,	// (0x000738be) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0007c951) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0007c951) main_video2_pane_t

0x5a6d,	// (0x00072d06) call_muted_g2

0x0001,

0xf65a,	// (0x0007c8f3) call_muted_g

0x318b,	// (0x00070424) main_mup2_pane

0x666d,	// (0x00073906) main_mup2_pane_g1_ParamLimits

0x666d,	// (0x00073906) main_mup2_pane_g1

0x6679,	// (0x00073912) main_mup2_pane_g2_ParamLimits

0x6679,	// (0x00073912) main_mup2_pane_g2

0xed3a,	// (0x0007bfd3) main_mup_pane_g13_cp1

0xed42,	// (0x0007bfdb) mup_volume_pane_cp1

0x6695,	// (0x0007392e) main_mup2_pane_g4_ParamLimits

0x6695,	// (0x0007392e) main_mup2_pane_g4

0x66a7,	// (0x00073940) main_mup2_pane_g5_ParamLimits

0x66a7,	// (0x00073940) main_mup2_pane_g5

0x66b9,	// (0x00073952) main_mup2_pane_g6_ParamLimits

0x66b9,	// (0x00073952) main_mup2_pane_g6

0x66cb,	// (0x00073964) main_mup2_pane_g7_ParamLimits

0x66cb,	// (0x00073964) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0007c958) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0007c958) main_mup2_pane_g

0x66e3,	// (0x0007397c) main_mup2_pane_t1_ParamLimits

0x66e3,	// (0x0007397c) main_mup2_pane_t1

0x66f9,	// (0x00073992) main_mup2_pane_t2_ParamLimits

0x66f9,	// (0x00073992) main_mup2_pane_t2

0x670f,	// (0x000739a8) main_mup2_pane_t3_ParamLimits

0x670f,	// (0x000739a8) main_mup2_pane_t3

0x6725,	// (0x000739be) main_mup2_pane_t4_ParamLimits

0x6725,	// (0x000739be) main_mup2_pane_t4

0x673d,	// (0x000739d6) main_mup2_pane_t5_ParamLimits

0x673d,	// (0x000739d6) main_mup2_pane_t5

0x6755,	// (0x000739ee) main_mup2_pane_t6_ParamLimits

0x6755,	// (0x000739ee) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0007c967) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0007c967) main_mup2_pane_t

0x6785,	// (0x00073a1e) mup2_visualizer_pane_ParamLimits

0x6785,	// (0x00073a1e) mup2_visualizer_pane

0x67b3,	// (0x00073a4c) mup_progress_pane_cp_ParamLimits

0x67b3,	// (0x00073a4c) mup_progress_pane_cp

0xed25,	// (0x0007bfbe) mup_volume_pane_cp_ParamLimits

0xed25,	// (0x0007bfbe) mup_volume_pane_cp

0x67c7,	// (0x00073a60) mup2_visualizer_pane_g1_ParamLimits

0x67c7,	// (0x00073a60) mup2_visualizer_pane_g1

0x67de,	// (0x00073a77) mup2_visualizer_pane_g2_ParamLimits

0x67de,	// (0x00073a77) mup2_visualizer_pane_g2

0x67ea,	// (0x00073a83) mup2_visualizer_pane_g3_ParamLimits

0x67ea,	// (0x00073a83) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0007c974) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0007c974) mup2_visualizer_pane_g

0xc5ca,	// (0x00079863) aid_size_cell_fmradio

0x5c1f,	// (0x00072eb8) aid_height_parent_landcape

0xba11,	// (0x00078caa) wml_content_pane_cp

0xba19,	// (0x00078cb2) wml_tabs_pane

0xba22,	// (0x00078cbb) popup_wml_miniature_window

0xba2a,	// (0x00078cc3) scroll_pane_cp021

0xba3e,	// (0x00078cd7) wml_content_pane_comp8

0x318b,	// (0x00070424) bg_popup_sub_pane_cp05

0x6808,	// (0x00073aa1) popup_wml_miniature_window_g1

0x6810,	// (0x00073aa9) wml_miniature_view_pane

0x6818,	// (0x00073ab1) aid_size_wml_view

0x6820,	// (0x00073ab9) wml_miniature_view_pane_g1

0x6829,	// (0x00073ac2) wml_miniature_view_pane_g2

0x6832,	// (0x00073acb) wml_miniature_view_pane_g3

0x683a,	// (0x00073ad3) wml_miniature_view_pane_g4

0x6842,	// (0x00073adb) wml_miniature_view_pane_g5

0x684a,	// (0x00073ae3) wml_miniature_view_pane_g6

0x6852,	// (0x00073aeb) wml_miniature_view_pane_g7

0x685a,	// (0x00073af3) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0007c97b) wml_miniature_view_pane_g

0x6862,	// (0x00073afb) background_graphic_ParamLimits

0x6862,	// (0x00073afb) background_graphic

0x686e,	// (0x00073b07) wml_tabs_2_pane

0x6877,	// (0x00073b10) wml_tabs_3_pane_ParamLimits

0x6877,	// (0x00073b10) wml_tabs_3_pane

0x6889,	// (0x00073b22) wml_tabs_4_pane_ParamLimits

0x6889,	// (0x00073b22) wml_tabs_4_pane

0x689f,	// (0x00073b38) wml_tabs_5_pane_ParamLimits

0x689f,	// (0x00073b38) wml_tabs_5_pane

0x68b9,	// (0x00073b52) wml_tabs_pane_g2_ParamLimits

0x68b9,	// (0x00073b52) wml_tabs_pane_g2

0x68cd,	// (0x00073b66) wml_tabs_pane_g3_ParamLimits

0x68cd,	// (0x00073b66) wml_tabs_pane_g3

0x68e1,	// (0x00073b7a) wml_tabs_2_active_pane_ParamLimits

0x68e1,	// (0x00073b7a) wml_tabs_2_active_pane

0x68f5,	// (0x00073b8e) wml_tabs_2_passive_pane_ParamLimits

0x68f5,	// (0x00073b8e) wml_tabs_2_passive_pane

0x6909,	// (0x00073ba2) wml_tabs_3_active_pane_cp_ParamLimits

0x6909,	// (0x00073ba2) wml_tabs_3_active_pane_cp

0x691e,	// (0x00073bb7) wml_tabs_3_passive_pane_ParamLimits

0x691e,	// (0x00073bb7) wml_tabs_3_passive_pane

0x6931,	// (0x00073bca) wml_tabs_3_passive_pane_cp_ParamLimits

0x6931,	// (0x00073bca) wml_tabs_3_passive_pane_cp

0x6948,	// (0x00073be1) tabs_4_active_pane

0x6950,	// (0x00073be9) tabs_4_passive_pane

0x695a,	// (0x00073bf3) tabs_4_passive_pane_cp

0x6962,	// (0x00073bfb) tabs_4_passive_pane_cp2

0x5938,	// (0x00072bd1) aid_height_text

0x509b,	// (0x00072334) mup_volume_cont_pane_ParamLimits

0x509b,	// (0x00072334) mup_volume_cont_pane

0x33c2,	// (0x0007065b) aid_size_cell_pinb

0xb413,	// (0x000786ac) aid_size_list_pinb

0x679f,	// (0x00073a38) mup2_volume_cont_pane_ParamLimits

0x679f,	// (0x00073a38) mup2_volume_cont_pane

0xed11,	// (0x0007bfaa) mup2_volume_cont_pane_g1_ParamLimits

0xed11,	// (0x0007bfaa) mup2_volume_cont_pane_g1

0x2a81,	// (0x0006fd1a) aid_size_cell_touch_ParamLimits

0x2a81,	// (0x0006fd1a) aid_size_cell_touch

0x2ccf,	// (0x0006ff68) touch_pane_ParamLimits

0x2ccf,	// (0x0006ff68) touch_pane

0x2a63,	// (0x0006fcfc) main_rss2_pane

0x6975,	// (0x00073c0e) listscroll_rss2_pane

0x697e,	// (0x00073c17) rss2_navigation_pane

0x6986,	// (0x00073c1f) list_rss2_pane

0xc135,	// (0x000793ce) scroll_pane_cp22

0x698e,	// (0x00073c27) rss2_navigation_pane_g1

0x6997,	// (0x00073c30) rss2_navigation_pane_g2

0x699f,	// (0x00073c38) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0007c98c) rss2_navigation_pane_g

0x69a7,	// (0x00073c40) rss2_navigation_pane_t1

0x69b5,	// (0x00073c4e) rss2_list_single_pane_ParamLimits

0x69b5,	// (0x00073c4e) rss2_list_single_pane

0x69cd,	// (0x00073c66) rss2_list_single_pane_t2

0x69db,	// (0x00073c74) rss2_list_single_pane_t3_ParamLimits

0x69db,	// (0x00073c74) rss2_list_single_pane_t3

0x69f8,	// (0x00073c91) rss2_list_single_pane_t4

0x4942,	// (0x00071bdb) smil_status_pane_g1

0x1201,	// (0x0006e49a) main_image2_pane_ParamLimits

0x1201,	// (0x0006e49a) main_image2_pane

0x6361,	// (0x000735fa) main_camera2_pane_g9_ParamLimits

0x6361,	// (0x000735fa) main_camera2_pane_g9

0x648f,	// (0x00073728) main_camera2_pane_t5_ParamLimits

0x648f,	// (0x00073728) main_camera2_pane_t5

0xece1,	// (0x0007bf7a) main_camera2_pane_t6_ParamLimits

0xece1,	// (0x0007bf7a) main_camera2_pane_t6

0x6a06,	// (0x00073c9f) main_image2_pane_g1_ParamLimits

0x6a06,	// (0x00073c9f) main_image2_pane_g1

0x5671,	// (0x0007290a) smil2_video_pane_ParamLimits

0x5671,	// (0x0007290a) smil2_video_pane

0xb351,	// (0x000785ea) aid_zoom_text_primary_cp

0x2c8b,	// (0x0006ff24) popup_preview_fixed_window

0xb97a,	// (0x00078c13) im_reading_pane_g1

0x61d8,	// (0x00073471) cams2_bc_adjust_pane_cp_ParamLimits

0x61d8,	// (0x00073471) cams2_bc_adjust_pane_cp

0x64be,	// (0x00073757) cams2_bc_adjust_pane_ParamLimits

0x64be,	// (0x00073757) cams2_bc_adjust_pane

0xed4a,	// (0x0007bfe3) cams2_bc_adjust_pane_g1

0xed52,	// (0x0007bfeb) cams2_slider_pane

0xed5b,	// (0x0007bff4) cams2_slider_pane_g1

0xed64,	// (0x0007bffd) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0007c993) cams2_slider_pane_g

0x3481,	// (0x0007071a) calc_display_pane_ParamLimits

0x34a7,	// (0x00070740) calc_paper_pane_ParamLimits

0x34ca,	// (0x00070763) grid_calc_pane_ParamLimits

0xbfe8,	// (0x00079281) popup_clock_digital_window_t1_ParamLimits

0xc567,	// (0x00079800) main_image_pane_t1

0x3463,	// (0x000706fc) aid_size_cell_calc_ParamLimits

0x3463,	// (0x000706fc) aid_size_cell_calc

0x5c65,	// (0x00072efe) popup_blid_sat_info2_window_ParamLimits

0x5c65,	// (0x00072efe) popup_blid_sat_info2_window

0x6a24,	// (0x00073cbd) aid_size_cell_blid

0x6a2c,	// (0x00073cc5) bg_popup_window_pane_cp07

0x6a4f,	// (0x00073ce8) grid_popup_blid_pane

0x6a59,	// (0x00073cf2) heading_pane_cp05_ParamLimits

0x6a59,	// (0x00073cf2) heading_pane_cp05

0x6b23,	// (0x00073dbc) cell_popup_blid_pane_ParamLimits

0x6b23,	// (0x00073dbc) cell_popup_blid_pane

0x6b49,	// (0x00073de2) cell_popup_blid_pane_g1

0x6b51,	// (0x00073dea) cell_popup_blid_pane_t1

0x676f,	// (0x00073a08) mup2_indicator_pane_ParamLimits

0x676f,	// (0x00073a08) mup2_indicator_pane

0xc282,	// (0x0007951b) mup2_visualizer_osc_pane

0x67f6,	// (0x00073a8f) mup2_visualizer_spec_pane_ParamLimits

0x67f6,	// (0x00073a8f) mup2_visualizer_spec_pane

0x6b5f,	// (0x00073df8) mup2_spec_half_pane

0x6b68,	// (0x00073e01) mup2_spec_half_pane_cp

0x6b70,	// (0x00073e09) mup2_spec_bar_pane_ParamLimits

0x6b70,	// (0x00073e09) mup2_spec_bar_pane

0x129b,	// (0x0006e534) mup2_spec_bar_pane_g1

0x12a5,	// (0x0006e53e) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0007c906) mup2_spec_bar_pane_g

0x6b90,	// (0x00073e29) mup2_osc_middle_pane

0x5f93,	// (0x0007322c) mup2_visualizer_osc_pane_g1

0x2d41,	// (0x0006ffda) popup_number_entry_window_t1_ParamLimits

0x2d54,	// (0x0006ffed) popup_number_entry_window_t2_ParamLimits

0x2d66,	// (0x0006ffff) popup_number_entry_window_t3_ParamLimits

0x2d78,	// (0x00070011) popup_number_entry_window_t5_ParamLimits

0x2d78,	// (0x00070011) popup_number_entry_window_t5

0xf12f,	// (0x0007c3c8) popup_number_entry_window_t_ParamLimits

0x2dad,	// (0x00070046) text_title_cp2_ParamLimits

0xc441,	// (0x000796da) aid_hotspot_pointer_text2_pane

0xc467,	// (0x00079700) main_viewer_pane_g9_ParamLimits

0xc467,	// (0x00079700) main_viewer_pane_g9

0xbba9,	// (0x00078e42) cale_month_pane_t1_ParamLimits

0xbc3e,	// (0x00078ed7) bg_cale_pane_ParamLimits

0xbc56,	// (0x00078eef) list_cale_pane_ParamLimits

0xb6ca,	// (0x00078963) listscroll_cale_day_pane_t1

0xbc67,	// (0x00078f00) scroll_pane_cp09_ParamLimits

0x50d1,	// (0x0007236a) main_mup_eq_pane_t1_ParamLimits

0x50d1,	// (0x0007236a) main_mup_eq_pane_t1

0x50eb,	// (0x00072384) main_mup_eq_pane_t2_ParamLimits

0x50eb,	// (0x00072384) main_mup_eq_pane_t2

0x5105,	// (0x0007239e) main_mup_eq_pane_t3_ParamLimits

0x5105,	// (0x0007239e) main_mup_eq_pane_t3

0x5121,	// (0x000723ba) main_mup_eq_pane_t4_ParamLimits

0x5121,	// (0x000723ba) main_mup_eq_pane_t4

0x513d,	// (0x000723d6) main_mup_eq_pane_t5_ParamLimits

0x513d,	// (0x000723d6) main_mup_eq_pane_t5

0x5159,	// (0x000723f2) main_mup_eq_pane_t6_ParamLimits

0x5159,	// (0x000723f2) main_mup_eq_pane_t6

0x516d,	// (0x00072406) main_mup_eq_pane_t7_ParamLimits

0x516d,	// (0x00072406) main_mup_eq_pane_t7

0x5181,	// (0x0007241a) main_mup_eq_pane_t8_ParamLimits

0x5181,	// (0x0007241a) main_mup_eq_pane_t8

0x5195,	// (0x0007242e) main_mup_eq_pane_t9_ParamLimits

0x5195,	// (0x0007242e) main_mup_eq_pane_t9

0x51af,	// (0x00072448) main_mup_eq_pane_t10_ParamLimits

0x51af,	// (0x00072448) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0007c755) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0007c755) main_mup_eq_pane_t

0x525e,	// (0x000724f7) mup_equalizer_pane_cp5_ParamLimits

0x5272,	// (0x0007250b) mup_equalizer_pane_cp6_ParamLimits

0x5286,	// (0x0007251f) mup_equalizer_pane_cp7_ParamLimits

0x2a63,	// (0x0006fcfc) main_gallery_pane

0x5fad,	// (0x00073246) smil2_volume_pane

0x5fb5,	// (0x0007324e) smil_status_volume_pane_g1_ParamLimits

0x5fc8,	// (0x00073261) smil_status_volume_pane_g2_ParamLimits

0xcd03,	// (0x00079f9c) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0007c90b) smil_status_volume_pane_g_ParamLimits

0x6a2c,	// (0x00073cc5) bg_popup_window_pane_cp07_ParamLimits

0x6a3a,	// (0x00073cd3) blid_firmament_pane

0x6b99,	// (0x00073e32) aid_size_cell_gallery_ParamLimits

0x6b99,	// (0x00073e32) aid_size_cell_gallery

0x6baf,	// (0x00073e48) grid_gallery_pane_ParamLimits

0x6baf,	// (0x00073e48) grid_gallery_pane

0x6bc8,	// (0x00073e61) cell_gallery_pane_ParamLimits

0x6bc8,	// (0x00073e61) cell_gallery_pane

0x6c11,	// (0x00073eaa) bg_cell_gallery_focus_pane_ParamLimits

0x6c11,	// (0x00073eaa) bg_cell_gallery_focus_pane

0x6c23,	// (0x00073ebc) cell_gallery_pane_g1_ParamLimits

0x6c23,	// (0x00073ebc) cell_gallery_pane_g1

0x6c2f,	// (0x00073ec8) cell_gallery_pane_g2_ParamLimits

0x6c2f,	// (0x00073ec8) cell_gallery_pane_g2

0x6c3c,	// (0x00073ed5) cell_gallery_pane_g3_ParamLimits

0x6c3c,	// (0x00073ed5) cell_gallery_pane_g3

0x6c49,	// (0x00073ee2) cell_gallery_pane_g4_ParamLimits

0x6c49,	// (0x00073ee2) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0007c9b9) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0007c9b9) cell_gallery_pane_g

0x6c55,	// (0x00073eee) bg_cell_gallery_focus_pane_g1

0x6c5d,	// (0x00073ef6) bg_cell_gallery_focus_pane_g2

0x6c65,	// (0x00073efe) bg_cell_gallery_focus_pane_g3

0x6c6d,	// (0x00073f06) bg_cell_gallery_focus_pane_g4

0x6c75,	// (0x00073f0e) bg_cell_gallery_focus_pane_g5

0x6c7d,	// (0x00073f16) bg_cell_gallery_focus_pane_g6

0x6c85,	// (0x00073f1e) bg_cell_gallery_focus_pane_g7

0x6c8d,	// (0x00073f26) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0007c9c2) bg_cell_gallery_focus_pane_g

0x6c95,	// (0x00073f2e) aid_firma_cardinal

0x6ca9,	// (0x00073f42) blid_firmament_pane_t1

0x6cc0,	// (0x00073f59) blid_firmament_pane_t2

0x6cd7,	// (0x00073f70) blid_firmament_pane_t3

0x6cee,	// (0x00073f87) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0007c9d3) blid_firmament_pane_t

0x6d05,	// (0x00073f9e) blid_sat_info_pane

0x6d15,	// (0x00073fae) blid_sat_info_pane_g1

0x6d15,	// (0x00073fae) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0007c9dc) blid_sat_info_pane_g

0x6d1f,	// (0x00073fb8) blid_sat_info_pane_t1

0x6d2d,	// (0x00073fc6) smil2_volume_content_pane

0x6d36,	// (0x00073fcf) smil2_volume_pane_g1

0x6d3e,	// (0x00073fd7) smil2_volume_content_pane_g1

0x6d47,	// (0x00073fe0) smil2_volume_content_pane_g2

0x6d50,	// (0x00073fe9) smil2_volume_content_pane_g3

0x6d59,	// (0x00073ff2) smil2_volume_content_pane_g4

0x6d62,	// (0x00073ffb) smil2_volume_content_pane_g5

0x6d6b,	// (0x00074004) smil2_volume_content_pane_g6

0x6d74,	// (0x0007400d) smil2_volume_content_pane_g7

0x6d7d,	// (0x00074016) smil2_volume_content_pane_g8

0x6d86,	// (0x0007401f) smil2_volume_content_pane_g9

0x6d8f,	// (0x00074028) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0007c9e1) smil2_volume_content_pane_g

0x392e,	// (0x00070bc7) cale_week_day_heading_pane_t1_ParamLimits

0x3942,	// (0x00070bdb) cale_week_day_heading_pane_t2_ParamLimits

0x3956,	// (0x00070bef) cale_week_day_heading_pane_t3_ParamLimits

0x396a,	// (0x00070c03) cale_week_day_heading_pane_t4_ParamLimits

0x397e,	// (0x00070c17) cale_week_day_heading_pane_t5_ParamLimits

0x3992,	// (0x00070c2b) cale_week_day_heading_pane_t6_ParamLimits

0x39a6,	// (0x00070c3f) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0007c4cd) cale_week_day_heading_pane_t_ParamLimits

0xb6dc,	// (0x00078975) bg_cale_side_pane_ParamLimits

0x39ba,	// (0x00070c53) cale_week_time_pane_t1_ParamLimits

0x39d2,	// (0x00070c6b) cale_week_time_pane_t2_ParamLimits

0x39ea,	// (0x00070c83) cale_week_time_pane_t3_ParamLimits

0x3a02,	// (0x00070c9b) cale_week_time_pane_t4_ParamLimits

0x3a1a,	// (0x00070cb3) cale_week_time_pane_t5_ParamLimits

0x3a32,	// (0x00070ccb) cale_week_time_pane_t6_ParamLimits

0x3a4a,	// (0x00070ce3) cale_week_time_pane_t7_ParamLimits

0x3a62,	// (0x00070cfb) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0007c4dc) cale_week_time_pane_t_ParamLimits

0x3a7a,	// (0x00070d13) cell_cale_week_pane_g2_ParamLimits

0xb6dc,	// (0x00078975) bg_cale_side_pane_cp01_ParamLimits

0x47eb,	// (0x00071a84) cale_month_week_pane_t1_ParamLimits

0x4802,	// (0x00071a9b) cale_month_week_pane_t2_ParamLimits

0x4819,	// (0x00071ab2) cale_month_week_pane_t3_ParamLimits

0x4830,	// (0x00071ac9) cale_month_week_pane_t4_ParamLimits

0x4847,	// (0x00071ae0) cale_month_week_pane_t5_ParamLimits

0x485e,	// (0x00071af7) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0007c5b5) cale_month_week_pane_t_ParamLimits

0xbbe5,	// (0x00078e7e) cell_cale_month_pane_g1_ParamLimits

0x2a63,	// (0x0006fcfc) main_cale_event_viewer_pane

0x2a63,	// (0x0006fcfc) listscroll_cale_event_viewer_pane

0x6d98,	// (0x00074031) list_cale_ev_pane

0x6da0,	// (0x00074039) scroll_pane_cp023

0x6dac,	// (0x00074045) field_cale_ev_pane_ParamLimits

0x6dac,	// (0x00074045) field_cale_ev_pane

0x6dc6,	// (0x0007405f) field_cale_ev_content_pane_ParamLimits

0x6dc6,	// (0x0007405f) field_cale_ev_content_pane

0x6dd2,	// (0x0007406b) field_cale_ev_pane_g1_ParamLimits

0x6dd2,	// (0x0007406b) field_cale_ev_pane_g1

0x6dde,	// (0x00074077) field_cale_ev_pane_g2_ParamLimits

0x6dde,	// (0x00074077) field_cale_ev_pane_g2

0x6df6,	// (0x0007408f) field_cale_ev_pane_g3_ParamLimits

0x6df6,	// (0x0007408f) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0007c9f6) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0007c9f6) field_cale_ev_pane_g

0x6e0e,	// (0x000740a7) field_cale_ev_pane_t1_ParamLimits

0x6e0e,	// (0x000740a7) field_cale_ev_pane_t1

0x6e25,	// (0x000740be) field_cale_ev_content_pane_t1_ParamLimits

0x6e25,	// (0x000740be) field_cale_ev_content_pane_t1

0xc40b,	// (0x000796a4) bg_button_pane_cp01

0xb514,	// (0x000787ad) listscroll_cale_week_pane_ParamLimits

0x3753,	// (0x000709ec) popup_toolbar_window_cp01

0xb6ca,	// (0x00078963) listscroll_cale_week_pane_t1_ParamLimits

0xb514,	// (0x000787ad) listscroll_cale_day_pane_ParamLimits

0x49a1,	// (0x00071c3a) popup_toolbar_window_cp02

0xb6ca,	// (0x00078963) listscroll_cale_day_pane_t1_ParamLimits

0xb514,	// (0x000787ad) main_cale_month_pane_ParamLimits

0x5e8b,	// (0x00073124) popup_toolbar_window_cp03_ParamLimits

0x5e8b,	// (0x00073124) popup_toolbar_window_cp03

0x5535,	// (0x000727ce) main_image_pane_g2_ParamLimits

0x5535,	// (0x000727ce) main_image_pane_g2

0x5546,	// (0x000727df) main_image_pane_g3_ParamLimits

0x5546,	// (0x000727df) main_image_pane_g3

0x0002,

0xf54e,	// (0x0007c7e7) main_image_pane_g_ParamLimits

0xf54e,	// (0x0007c7e7) main_image_pane_g

0xc567,	// (0x00079800) main_image_pane_t1_ParamLimits

0x5557,	// (0x000727f0) main_image_pane_t2_ParamLimits

0x5557,	// (0x000727f0) main_image_pane_t2

0x5569,	// (0x00072802) main_image_pane_t3_ParamLimits

0x5569,	// (0x00072802) main_image_pane_t3

0x5591,	// (0x0007282a) main_image_pane_t4_ParamLimits

0x5591,	// (0x0007282a) main_image_pane_t4

0x0003,

0xf555,	// (0x0007c7ee) main_image_pane_t_ParamLimits

0xf555,	// (0x0007c7ee) main_image_pane_t

0x55b1,	// (0x0007284a) popup_image_details_window_cp01

0x55bb,	// (0x00072854) popup_toobar_trans_pane_cp01_ParamLimits

0x55bb,	// (0x00072854) popup_toobar_trans_pane_cp01

0x5d3c,	// (0x00072fd5) popup_image_details_window_ParamLimits

0x5d3c,	// (0x00072fd5) popup_image_details_window

0x1221,	// (0x0006e4ba) popup_image_focus_window

0x6192,	// (0x0007342b) camera2_autofocus_pane_ParamLimits

0x6192,	// (0x0007342b) camera2_autofocus_pane

0x2a63,	// (0x0006fcfc) bg_popup_sub_pane_cp06

0x6e42,	// (0x000740db) popup_image_focus_window_g1

0x6e4a,	// (0x000740e3) popup_image_focus_window_g2

0x6e52,	// (0x000740eb) popup_image_focus_window_g3

0x6e5a,	// (0x000740f3) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0007c9fd) popup_image_focus_window_g

0x6e62,	// (0x000740fb) popup_image_focus_window_t1

0x6e70,	// (0x00074109) popup_image_focus_window_t2

0x6e80,	// (0x00074119) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0007ca06) popup_image_focus_window_t

0x6e8e,	// (0x00074127) camera2_autofocus_pane_g1

0x1201,	// (0x0006e49a) bg_tb_trans_pane_cp01

0x6ecc,	// (0x00074165) popup_image_details_window_g1

0x6edf,	// (0x00074178) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0007ca18) popup_image_details_window_g

0x6f08,	// (0x000741a1) popup_image_details_window_t1

0x6f1a,	// (0x000741b3) popup_image_details_window_t2

0x6f33,	// (0x000741cc) popup_image_details_window_t3

0x6f47,	// (0x000741e0) popup_image_details_window_t4

0x6f62,	// (0x000741fb) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0007ca1f) popup_image_details_window_t

0xb4e6,	// (0x0007877f) bg_calc_paper_pane_ParamLimits

0x2a63,	// (0x0006fcfc) grid_highlight_pane_cp013

0xb4fa,	// (0x00078793) list_calc_pane_ParamLimits

0xb50c,	// (0x000787a5) scroll_pane_cp024

0xb514,	// (0x000787ad) bg_calc_display_pane_ParamLimits

0x35bd,	// (0x00070856) calc_display_pane_t1_ParamLimits

0x35cf,	// (0x00070868) calc_display_pane_t2_ParamLimits

0xb520,	// (0x000787b9) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0007c44f) calc_display_pane_t_ParamLimits

0x368c,	// (0x00070925) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0007c46c) cell_calc_pane_g

0x3695,	// (0x0007092e) cell_calc_pane_t1

0xb597,	// (0x00078830) grid_highlight_pane_cp02_ParamLimits

0xb5ad,	// (0x00078846) toolbar_button_pane_cp01_ParamLimits

0xb5ad,	// (0x00078846) toolbar_button_pane_cp01

0xc5ac,	// (0x00079845) temp_image_control_pane_ParamLimits

0xc5ac,	// (0x00079845) temp_image_control_pane

0x1201,	// (0x0006e49a) main_mp3_pane

0x6f7c,	// (0x00074215) temp_image_control_pane_g1_ParamLimits

0x6f7c,	// (0x00074215) temp_image_control_pane_g1

0x6f8a,	// (0x00074223) temp_image_control_pane_g2_ParamLimits

0x6f8a,	// (0x00074223) temp_image_control_pane_g2

0x6f9c,	// (0x00074235) temp_image_control_pane_g3_ParamLimits

0x6f9c,	// (0x00074235) temp_image_control_pane_g3

0x6fac,	// (0x00074245) temp_image_control_pane_g4_ParamLimits

0x6fac,	// (0x00074245) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0007ca2a) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0007ca2a) temp_image_control_pane_g

0x6f7c,	// (0x00074215) main_mp3_pane_g1

0x6fbf,	// (0x00074258) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0007ca33) main_mp3_pane_g

0x701c,	// (0x000742b5) main_mp3_pane_t1

0xb7c5,	// (0x00078a5e) main_camera_pane_g8_ParamLimits

0xb7c5,	// (0x00078a5e) main_camera_pane_g8

0x3d24,	// (0x00070fbd) main_video_pane_g7_ParamLimits

0x3d24,	// (0x00070fbd) main_video_pane_g7

0xecff,	// (0x0007bf98) main_camera2_pane_t7_ParamLimits

0xecff,	// (0x0007bf98) main_camera2_pane_t7

0xb9d1,	// (0x00078c6a) scroll_pane_cp025_ParamLimits

0xb9d1,	// (0x00078c6a) scroll_pane_cp025

0xb9e5,	// (0x00078c7e) scroll_pane_cp026_ParamLimits

0xb9e5,	// (0x00078c7e) scroll_pane_cp026

0xb9f4,	// (0x00078c8d) wml_content_pane_ParamLimits

0x2a63,	// (0x0006fcfc) main_touch_calib_pane

0x70ef,	// (0x00074388) main_touch_calib_pane_g1

0x70fb,	// (0x00074394) main_touch_calib_pane_g2

0x7107,	// (0x000743a0) main_touch_calib_pane_g3

0x7113,	// (0x000743ac) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0007ca51) main_touch_calib_pane_g

0x711f,	// (0x000743b8) main_touch_calib_pane_t1

0x7139,	// (0x000743d2) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0007ca5a) main_touch_calib_pane_t

0xc1c3,	// (0x0007945c) mup_progress_pane_cp02

0xc1e2,	// (0x0007947b) navi_pane_g1

0xc244,	// (0x000794dd) navi_pane_mp_t3

0x1201,	// (0x0006e49a) main_mp3_pane_ParamLimits

0x5ec9,	// (0x00073162) navi_pane_ParamLimits

0x6f7c,	// (0x00074215) main_mp3_pane_g1_ParamLimits

0x6fbf,	// (0x00074258) main_mp3_pane_g2_ParamLimits

0x6fcd,	// (0x00074266) main_mp3_pane_g3_ParamLimits

0x6fcd,	// (0x00074266) main_mp3_pane_g3

0x6fdb,	// (0x00074274) main_mp3_pane_g4_ParamLimits

0x6fdb,	// (0x00074274) main_mp3_pane_g4

0x6fe9,	// (0x00074282) main_mp3_pane_g5_ParamLimits

0x6fe9,	// (0x00074282) main_mp3_pane_g5

0x6ff7,	// (0x00074290) main_mp3_pane_g6_ParamLimits

0x6ff7,	// (0x00074290) main_mp3_pane_g6

0x7004,	// (0x0007429d) main_mp3_pane_g7_ParamLimits

0x7004,	// (0x0007429d) main_mp3_pane_g7

0x7010,	// (0x000742a9) main_mp3_pane_g8_ParamLimits

0x7010,	// (0x000742a9) main_mp3_pane_g8

0xf79a,	// (0x0007ca33) main_mp3_pane_g_ParamLimits

0x702a,	// (0x000742c3) main_mp3_pane_t2

0x7038,	// (0x000742d1) main_mp3_pane_t3

0x7046,	// (0x000742df) main_mp3_pane_t4

0x7054,	// (0x000742ed) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0007ca44) main_mp3_pane_t

0x7070,	// (0x00074309) mup_progress_pane_cp01

0xb351,	// (0x000785ea) aid_zoom_text_secondary2

0x6d98,	// (0x00074031) list_cale_ev2_pane

0x6da0,	// (0x00074039) scroll_pane_cp023_ParamLimits

0x718f,	// (0x00074428) field_cale_ev2_pane_ParamLimits

0x718f,	// (0x00074428) field_cale_ev2_pane

0x71b5,	// (0x0007444e) field_cale_ev2_pane_g1_ParamLimits

0x71b5,	// (0x0007444e) field_cale_ev2_pane_g1

0x71c1,	// (0x0007445a) field_cale_ev2_pane_g2_ParamLimits

0x71c1,	// (0x0007445a) field_cale_ev2_pane_g2

0x71d9,	// (0x00074472) field_cale_ev2_pane_g3_ParamLimits

0x71d9,	// (0x00074472) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0007ca65) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0007ca65) field_cale_ev2_pane_g

0xcd25,	// (0x00079fbe) field_cale_ev2_pane_t1_ParamLimits

0xcd25,	// (0x00079fbe) field_cale_ev2_pane_t1

0xcd3c,	// (0x00079fd5) field_cale_ev2_pane_t2_ParamLimits

0xcd3c,	// (0x00079fd5) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0007ca6e) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0007ca6e) field_cale_ev2_pane_t

0x53e5,	// (0x0007267e) main_postcard_pane_g5_ParamLimits

0x53e5,	// (0x0007267e) main_postcard_pane_g5

0x53fb,	// (0x00072694) main_postcard_pane_g6_ParamLimits

0x53fb,	// (0x00072694) main_postcard_pane_g6

0x3ad4,	// (0x00070d6d) camera2_autofocus_pane_cp_ParamLimits

0x3ad4,	// (0x00070d6d) camera2_autofocus_pane_cp

0x1201,	// (0x0006e49a) main_mup3_pane

0x7211,	// (0x000744aa) main_mup3_pane_g1_ParamLimits

0x7211,	// (0x000744aa) main_mup3_pane_g1

0x7233,	// (0x000744cc) main_mup3_pane_g2_ParamLimits

0x7233,	// (0x000744cc) main_mup3_pane_g2

0x72b4,	// (0x0007454d) main_mup3_pane_g3_ParamLimits

0x72b4,	// (0x0007454d) main_mup3_pane_g3

0x72f6,	// (0x0007458f) main_mup3_pane_g4_ParamLimits

0x72f6,	// (0x0007458f) main_mup3_pane_g4

0x7338,	// (0x000745d1) main_mup3_pane_g5_ParamLimits

0x7338,	// (0x000745d1) main_mup3_pane_g5

0x737c,	// (0x00074615) main_mup3_pane_g6_ParamLimits

0x737c,	// (0x00074615) main_mup3_pane_g6

0x738f,	// (0x00074628) main_mup3_pane_g7_ParamLimits

0x738f,	// (0x00074628) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0007ca7e) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0007ca7e) main_mup3_pane_g

0x7406,	// (0x0007469f) main_mup3_pane_t1_ParamLimits

0x7406,	// (0x0007469f) main_mup3_pane_t1

0x747a,	// (0x00074713) main_mup3_pane_t2_ParamLimits

0x747a,	// (0x00074713) main_mup3_pane_t2

0x754e,	// (0x000747e7) main_mup3_pane_t4_ParamLimits

0x754e,	// (0x000747e7) main_mup3_pane_t4

0x75a8,	// (0x00074841) main_mup3_pane_t5_ParamLimits

0x75a8,	// (0x00074841) main_mup3_pane_t5

0x765c,	// (0x000748f5) main_mup3_pane_t6_ParamLimits

0x765c,	// (0x000748f5) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0007ca8f) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0007ca8f) main_mup3_pane_t

0x7710,	// (0x000749a9) mup3_progress_pane_ParamLimits

0x7710,	// (0x000749a9) mup3_progress_pane

0x778c,	// (0x00074a25) popup_mup3_control_window_ParamLimits

0x778c,	// (0x00074a25) popup_mup3_control_window

0x77a8,	// (0x00074a41) popup_mup3_text_window

0x77c6,	// (0x00074a5f) mup3_progress_pane_t1

0x77dd,	// (0x00074a76) mup3_progress_pane_t2

0x77f4,	// (0x00074a8d) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0007ca9c) mup3_progress_pane_t

0x780b,	// (0x00074aa4) mup_progress_pane_cp03

0x2a63,	// (0x0006fcfc) bg_tb_trans_pane_cp04

0x781b,	// (0x00074ab4) mup3_volume_pane

0x7823,	// (0x00074abc) popup_mup3_control_window_g1

0x782c,	// (0x00074ac5) mup3_volume_pane_g1

0x7835,	// (0x00074ace) mup3_volume_pane_g2

0x783e,	// (0x00074ad7) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0007caa3) mup3_volume_pane_g

0x2a63,	// (0x0006fcfc) bg_tb_trans_pane_cp03

0x7847,	// (0x00074ae0) popup_mup3_text_window_g1

0x784f,	// (0x00074ae8) popup_mup3_text_window_t1

0xb56e,	// (0x00078807) list_calc_item_pane_g1_ParamLimits

0x696c,	// (0x00073c05) mup_volume_pane_cp_g1

0x7153,	// (0x000743ec) main_touch_calib_pane_t3

0x7167,	// (0x00074400) main_touch_calib_pane_t4

0x717b,	// (0x00074414) main_touch_calib_pane_t5

0x2a6d,	// (0x0006fd06) aid_cell_size_toolbar2

0x2a75,	// (0x0006fd0e) aid_popup3_width_pane

0xb341,	// (0x000785da) aid_zoom_text_msg_primary

0xb792,	// (0x00078a2b) vorec_t7

0xb532,	// (0x000787cb) bg_calc_paper_pane_g1_ParamLimits

0xb53e,	// (0x000787d7) bg_calc_paper_pane_g2_ParamLimits

0xb54a,	// (0x000787e3) bg_calc_paper_pane_g3_ParamLimits

0xb556,	// (0x000787ef) bg_calc_paper_pane_g4_ParamLimits

0xb562,	// (0x000787fb) bg_calc_paper_pane_g5_ParamLimits

0x3616,	// (0x000708af) bg_calc_paper_pane_g6_ParamLimits

0x3625,	// (0x000708be) bg_calc_paper_pane_g7_ParamLimits

0x3634,	// (0x000708cd) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0007c456) bg_calc_paper_pane_g_ParamLimits

0x3647,	// (0x000708e0) calc_bg_paper_pane_g9_ParamLimits

0x3c2e,	// (0x00070ec7) image_qvga_pane_ParamLimits

0x3c2e,	// (0x00070ec7) image_qvga_pane

0xb3e3,	// (0x0007867c) bg_popup_sub_pane_cp04_ParamLimits

0xc4e3,	// (0x0007977c) popup_mup_playback_window_g1_ParamLimits

0xc4ef,	// (0x00079788) popup_mup_playback_window_t1_ParamLimits

0xc504,	// (0x0007979d) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0007c7e2) popup_mup_playback_window_t_ParamLimits

0x6689,	// (0x00073922) main_mup2_pane_g3_ParamLimits

0x6689,	// (0x00073922) main_mup2_pane_g3

0x3ee7,	// (0x00071180) popup_toolbar_window_cp04

0xc8f9,	// (0x00079b92) popup_call2_audio_second_window_g3_ParamLimits

0xc8f9,	// (0x00079b92) popup_call2_audio_second_window_g3

0x0813,	// (0x0006daac) popup_call2_audio_first_window_g4_ParamLimits

0x0813,	// (0x0006daac) popup_call2_audio_first_window_g4

0x0e92,	// (0x0006e12b) popup_call2_audio_in_window_g4_ParamLimits

0x0e92,	// (0x0006e12b) popup_call2_audio_in_window_g4

0x5517,	// (0x000727b0) aid_area_sk_bg_cut_ParamLimits

0x5517,	// (0x000727b0) aid_area_sk_bg_cut

0xc519,	// (0x000797b2) aid_area_sk_bg_cut_2_ParamLimits

0xc519,	// (0x000797b2) aid_area_sk_bg_cut_2

0x6c01,	// (0x00073e9a) aid_placing_details_win

0x6c09,	// (0x00073ea2) aid_placing_details_win_2

0x6e8e,	// (0x00074127) camera2_autofocus_pane_g1_ParamLimits

0x2c70,	// (0x0006ff09) popup_fixed_preview_cale_window_ParamLimits

0x2c70,	// (0x0006ff09) popup_fixed_preview_cale_window

0xc29c,	// (0x00079535) navi_slider_pane_g3

0xc2a5,	// (0x0007953e) navi_slider_pane_g4

0xc2ae,	// (0x00079547) navi_slider_pane_g5

0xc29c,	// (0x00079535) navi_slider_pane_g6

0xc2b7,	// (0x00079550) navi_slider_pane_g7

0xc3d8,	// (0x00079671) mup_scale_pane_g3

0xc3e1,	// (0x0007967a) mup_scale_pane_g4

0xc3ea,	// (0x00079683) mup_scale_pane_g5

0x529a,	// (0x00072533) mup_scale_pane_g6

0x52a3,	// (0x0007253c) mup_scale_pane_g7

0xc29c,	// (0x00079535) cams2_slider_pane_g3

0x6a1c,	// (0x00073cb5) cams2_slider_pane_g4

0xed6d,	// (0x0007c006) cams2_slider_pane_g5

0xc29c,	// (0x00079535) cams2_slider_pane_g6

0xed75,	// (0x0007c00e) cams2_slider_pane_g7

0x6d15,	// (0x00073fae) camera2_autofocus_pane_cp_g1

0x785d,	// (0x00074af6) bg_popup_preview_window_pane_cp02_ParamLimits

0x785d,	// (0x00074af6) bg_popup_preview_window_pane_cp02

0x7869,	// (0x00074b02) list_fp_cale_pane_ParamLimits

0x7869,	// (0x00074b02) list_fp_cale_pane

0x7875,	// (0x00074b0e) popup_fixed_preview_cale_window_t1_ParamLimits

0x7875,	// (0x00074b0e) popup_fixed_preview_cale_window_t1

0x7887,	// (0x00074b20) popup_fixed_preview_cale_window_t2_ParamLimits

0x7887,	// (0x00074b20) popup_fixed_preview_cale_window_t2

0x789c,	// (0x00074b35) popup_fixed_preview_cale_window_t3_ParamLimits

0x789c,	// (0x00074b35) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0007caaa) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0007caaa) popup_fixed_preview_cale_window_t

0x78bd,	// (0x00074b56) list_single_fp_cale_pane_ParamLimits

0x78bd,	// (0x00074b56) list_single_fp_cale_pane

0x78d5,	// (0x00074b6e) list_single_fp_cale_pane_g1_ParamLimits

0x78d5,	// (0x00074b6e) list_single_fp_cale_pane_g1

0x78e1,	// (0x00074b7a) list_single_fp_cale_pane_g2_ParamLimits

0x78e1,	// (0x00074b7a) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0007cab1) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0007cab1) list_single_fp_cale_pane_g

0x78fa,	// (0x00074b93) list_single_fp_cale_pane_t1_ParamLimits

0x78fa,	// (0x00074b93) list_single_fp_cale_pane_t1

0x790c,	// (0x00074ba5) list_single_fp_cale_pane_t2_ParamLimits

0x790c,	// (0x00074ba5) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0007cab8) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0007cab8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2a63,	// (0x0006fcfc) main_dialer_pane

0x793f,	// (0x00074bd8) aid_cell_size_keypad

0x7949,	// (0x00074be2) dialer_ne_pane

0x7951,	// (0x00074bea) grid_dialer_command_1_pane

0x7959,	// (0x00074bf2) grid_dialer_command_2_pane

0x7961,	// (0x00074bfa) grid_dialer_keypad_pane

0x7973,	// (0x00074c0c) bg_popup_call_pane_cp06_ParamLimits

0x7973,	// (0x00074c0c) bg_popup_call_pane_cp06

0x797f,	// (0x00074c18) dialer_ne_clear_pane_ParamLimits

0x797f,	// (0x00074c18) dialer_ne_clear_pane

0x798b,	// (0x00074c24) dialer_ne_pane_g1

0x7993,	// (0x00074c2c) dialer_ne_pane_t1_ParamLimits

0x7993,	// (0x00074c2c) dialer_ne_pane_t1

0x79a5,	// (0x00074c3e) dialer_ne_pane_t2_ParamLimits

0x79a5,	// (0x00074c3e) dialer_ne_pane_t2

0x79cf,	// (0x00074c68) dialer_ne_pane_t3_ParamLimits

0x79cf,	// (0x00074c68) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0007cabd) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0007cabd) dialer_ne_pane_t

0x79ff,	// (0x00074c98) dialer_ne_pane_t3_copy1_ParamLimits

0x79ff,	// (0x00074c98) dialer_ne_pane_t3_copy1

0x7a2e,	// (0x00074cc7) cell_dialer_keypad_pane_ParamLimits

0x7a2e,	// (0x00074cc7) cell_dialer_keypad_pane

0x7a45,	// (0x00074cde) cell_dialer_command_1_pane_ParamLimits

0x7a45,	// (0x00074cde) cell_dialer_command_1_pane

0x7a5b,	// (0x00074cf4) cell_dialer_command_2_pane_ParamLimits

0x7a5b,	// (0x00074cf4) cell_dialer_command_2_pane

0x7a6a,	// (0x00074d03) bg_button_pane_cp02_ParamLimits

0x7a6a,	// (0x00074d03) bg_button_pane_cp02

0x7a76,	// (0x00074d0f) cell_dialer_keypad_pane_g1_ParamLimits

0x7a76,	// (0x00074d0f) cell_dialer_keypad_pane_g1

0x7a6a,	// (0x00074d03) bg_button_pane_cp03_ParamLimits

0x7a6a,	// (0x00074d03) bg_button_pane_cp03

0x7a8b,	// (0x00074d24) cell_dialer_command_1_pane_g1_ParamLimits

0x7a8b,	// (0x00074d24) cell_dialer_command_1_pane_g1

0x7a9f,	// (0x00074d38) bg_button_pane_cp04

0x7aa7,	// (0x00074d40) cell_dialer_command_2_pane_g1

0xc282,	// (0x0007951b) bg_button_pane_cp06

0x7aaf,	// (0x00074d48) dialer_ne_clear_pane_g1

0x4dd8,	// (0x00072071) navi_pane_g2

0x4e06,	// (0x0007209f) navi_pane_g3

0x0002,

0xf44c,	// (0x0007c6e5) navi_pane_g

0x4e2f,	// (0x000720c8) navi_pane_mv_g2

0x4e56,	// (0x000720ef) navi_pane_mv_g5

0x4e5e,	// (0x000720f7) navi_pane_mv_t1

0xb514,	// (0x000787ad) main_clock2_pane

0x7ae2,	// (0x00074d7b) main_clock2_list_pane_ParamLimits

0x7ae2,	// (0x00074d7b) main_clock2_list_pane

0x7b18,	// (0x00074db1) main_clock2_pane_t1_ParamLimits

0x7b18,	// (0x00074db1) main_clock2_pane_t1

0x7b56,	// (0x00074def) main_clock2_pane_t2_ParamLimits

0x7b56,	// (0x00074def) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0007cac4) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0007cac4) main_clock2_pane_t

0x7be0,	// (0x00074e79) popup_clock_analogue_window_cp03_ParamLimits

0x7be0,	// (0x00074e79) popup_clock_analogue_window_cp03

0x7c07,	// (0x00074ea0) popup_clock_digital_window_cp02_ParamLimits

0x7c07,	// (0x00074ea0) popup_clock_digital_window_cp02

0x7c7c,	// (0x00074f15) main_clock2_list_single_pane_ParamLimits

0x7c7c,	// (0x00074f15) main_clock2_list_single_pane

0xc282,	// (0x0007951b) list_highlight_pane_cp05

0x7c8e,	// (0x00074f27) main_clock2_list_single_pane_t1

0x3ee7,	// (0x00071180) popup_toolbar_window_cp04_ParamLimits

0x6e9c,	// (0x00074135) camera2_autofocus_pane_g2_ParamLimits

0x6e9c,	// (0x00074135) camera2_autofocus_pane_g2

0x6ea8,	// (0x00074141) camera2_autofocus_pane_g3_ParamLimits

0x6ea8,	// (0x00074141) camera2_autofocus_pane_g3

0x6eb4,	// (0x0007414d) camera2_autofocus_pane_g4_ParamLimits

0x6eb4,	// (0x0007414d) camera2_autofocus_pane_g4

0x6ec0,	// (0x00074159) camera2_autofocus_pane_g5_ParamLimits

0x6ec0,	// (0x00074159) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0007ca0d) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0007ca0d) camera2_autofocus_pane_g

0x71f1,	// (0x0007448a) camera2_autofocus_pane_cp_g2

0x71f9,	// (0x00074492) camera2_autofocus_pane_cp_g3

0x7201,	// (0x0007449a) camera2_autofocus_pane_cp_g4

0x7209,	// (0x000744a2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0007ca73) camera2_autofocus_pane_cp_g

0x796b,	// (0x00074c04) popup_dialer_spcha_window

0x2a63,	// (0x0006fcfc) bg_popup_sub_pane_cp07

0x7d34,	// (0x00074fcd) list_spcha_pane

0x7d3c,	// (0x00074fd5) list_single_spcha_pane_ParamLimits

0x7d3c,	// (0x00074fd5) list_single_spcha_pane

0x2a63,	// (0x0006fcfc) list_highlight_pane_cp06

0x7d4d,	// (0x00074fe6) list_single_spcha_pane_t1

0x0c3c,	// (0x0006ded5) popup_call2_audio_out_window_g4_ParamLimits

0x0c3c,	// (0x0006ded5) popup_call2_audio_out_window_g4

0x2a63,	// (0x0006fcfc) main_imed2_pane

0x1229,	// (0x0006e4c2) popup_imed_adjust2_window

0x5d54,	// (0x00072fed) popup_imed_trans_window_ParamLimits

0x5d54,	// (0x00072fed) popup_imed_trans_window

0x6a85,	// (0x00073d1e) popup_blid_sat_info2_window_t1

0x6a93,	// (0x00073d2c) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0007c9a2) popup_blid_sat_info2_window_t

0x7d5b,	// (0x00074ff4) aid_size_cell_colour_35

0x7d7b,	// (0x00075014) aid_size_cell_colour_112

0x7d9b,	// (0x00075034) aid_size_cell_effect

0x11f3,	// (0x0006e48c) bg_tb_trans_pane_cp02

0xbcda,	// (0x00078f73) heading_imed_pane

0x7dbb,	// (0x00075054) listscroll_imed_pane

0x7dc7,	// (0x00075060) heading_imed_pane_g1

0x7dcf,	// (0x00075068) heading_imed_pane_t1

0x7ddd,	// (0x00075076) grid_imed_colour_35_pane_ParamLimits

0x7ddd,	// (0x00075076) grid_imed_colour_35_pane

0x7df8,	// (0x00075091) grid_imed_effect_pane

0x7e0d,	// (0x000750a6) list_imed_aspect_pane

0x7e15,	// (0x000750ae) scroll_pane_cp027_ParamLimits

0x7e15,	// (0x000750ae) scroll_pane_cp027

0x7e26,	// (0x000750bf) cell_imed_effect_pane_ParamLimits

0x7e26,	// (0x000750bf) cell_imed_effect_pane

0x7e4d,	// (0x000750e6) cell_imed_colour_pane_ParamLimits

0x7e4d,	// (0x000750e6) cell_imed_colour_pane

0x7e8f,	// (0x00075128) cell_imed_colour_pane_g1_ParamLimits

0x7e8f,	// (0x00075128) cell_imed_colour_pane_g1

0x7ea0,	// (0x00075139) hgihlgiht_grid_pane_cp016_ParamLimits

0x7ea0,	// (0x00075139) hgihlgiht_grid_pane_cp016

0x7eb1,	// (0x0007514a) cell_imed_effect_pane_g1

0x7eb9,	// (0x00075152) grid_highlight_pane_cp017

0x12ba,	// (0x0006e553) list_imed_single_pane_ParamLimits

0x12ba,	// (0x0006e553) list_imed_single_pane

0x2a63,	// (0x0006fcfc) list_highlight_pane_cp07

0x7ec2,	// (0x0007515b) list_imed_aspect_pane_comp1_t1

0x11f3,	// (0x0006e48c) bg_tb_trans_pane_cp05

0x7ee4,	// (0x0007517d) popup_imed_adjust2_window_g1

0x7f0b,	// (0x000751a4) popup_imed_adjust2_window_t1

0x7f23,	// (0x000751bc) slider_imed_adjust_pane

0x7f37,	// (0x000751d0) slider_imed_adjust_pane_g1

0x7f47,	// (0x000751e0) slider_imed_adjust_pane_g2

0x7f57,	// (0x000751f0) slider_imed_adjust_pane_g3

0x7f68,	// (0x00075201) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0007cae1) slider_imed_adjust_pane_g

0x7f79,	// (0x00075212) aid_size_cell_clipart2

0x7f85,	// (0x0007521e) grid_imed_clipart_pane

0x7f8f,	// (0x00075228) scroll_pane_cp031

0x7f97,	// (0x00075230) cell_imed_clipart_pane_ParamLimits

0x7f97,	// (0x00075230) cell_imed_clipart_pane

0x7fbe,	// (0x00075257) cell_imed_clipart_pane_g1

0x2a63,	// (0x0006fcfc) grid_highlight_pane_cp014

0x7af7,	// (0x00074d90) main_clock2_pane_g1_ParamLimits

0x7af7,	// (0x00074d90) main_clock2_pane_g1

0x7c27,	// (0x00074ec0) aid_call2_pane_cp10

0x7c39,	// (0x00074ed2) aid_call_pane_cp10

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g1

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g2

0x7c4b,	// (0x00074ee4) popup_clock_analogue_window_cp10_g3

0x7c4b,	// (0x00074ee4) popup_clock_analogue_window_cp10_g4

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0007cacf) popup_clock_analogue_window_cp10_g

0x7c5d,	// (0x00074ef6) popup_clock_analogue_window_cp10_t1

0x7c9c,	// (0x00074f35) clock_digital_number_pane_cp10_ParamLimits

0x7c9c,	// (0x00074f35) clock_digital_number_pane_cp10

0x7cb4,	// (0x00074f4d) clock_digital_number_pane_cp11_ParamLimits

0x7cb4,	// (0x00074f4d) clock_digital_number_pane_cp11

0x7ccc,	// (0x00074f65) clock_digital_number_pane_cp12_ParamLimits

0x7ccc,	// (0x00074f65) clock_digital_number_pane_cp12

0x7ce4,	// (0x00074f7d) clock_digital_number_pane_cp13_ParamLimits

0x7ce4,	// (0x00074f7d) clock_digital_number_pane_cp13

0x7cfc,	// (0x00074f95) clock_digital_separator_pane_cp10_ParamLimits

0x7cfc,	// (0x00074f95) clock_digital_separator_pane_cp10

0x7d14,	// (0x00074fad) popup_clock_digital_window_cp02_t1_ParamLimits

0x7d14,	// (0x00074fad) popup_clock_digital_window_cp02_t1

0xb3db,	// (0x00078674) clock_digital_number_pane_cp10_g1

0xb3db,	// (0x00078674) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0007caea) clock_digital_number_pane_cp10_g

0xb3db,	// (0x00078674) clock_digital_separator_pane_cp10_g1

0xb3db,	// (0x00078674) clock_digital_separator_pane_g2_cp10

0xc252,	// (0x000794eb) navi_pane_vded_g4

0xc25b,	// (0x000794f4) navi_pane_vded_g5

0xc264,	// (0x000794fd) navi_pane_vded_t1

0x2a63,	// (0x0006fcfc) main_vded_pane

0x7fc7,	// (0x00075260) main_vded_pane_g1

0x7fd3,	// (0x0007526c) main_vded_pane_g2

0x7fdd,	// (0x00075276) main_vded_pane_g3

0x0002,

0xf856,	// (0x0007caef) main_vded_pane_g

0x7fe7,	// (0x00075280) main_vded_pane_t1

0x7ff5,	// (0x0007528e) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0007caf6) main_vded_pane_t

0x8003,	// (0x0007529c) vded_slider_pane

0x800d,	// (0x000752a6) vded_video_pane

0x8017,	// (0x000752b0) vded_video_pane_g1

0x8021,	// (0x000752ba) vded_video_pane_g2

0x6d15,	// (0x00073fae) vded_video_pane_g3

0x0002,

0xf862,	// (0x0007cafb) vded_video_pane_g

0x802a,	// (0x000752c3) vded_slider_pane_g1

0x696c,	// (0x00073c05) vded_slider_pane_g2

0x8033,	// (0x000752cc) vded_slider_pane_g3

0x803c,	// (0x000752d5) vded_slider_pane_g4

0x8045,	// (0x000752de) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0007cb02) vded_slider_pane_g

0x7774,	// (0x00074a0d) mup3_rocker_pane_ParamLimits

0x7774,	// (0x00074a0d) mup3_rocker_pane

0x804e,	// (0x000752e7) mup3_control_keys_pane_g1

0x8056,	// (0x000752ef) mup3_control_keys_pane_g2

0x805e,	// (0x000752f7) mup3_control_keys_pane_g3

0x8066,	// (0x000752ff) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0007cb0d) mup3_control_keys_pane_g

0x2cb1,	// (0x0006ff4a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2cb1,	// (0x0006ff4a) popup_toolbar2_fixed_window_cp01

0x77b0,	// (0x00074a49) popup_toolbar2_fixed_window_cp02_ParamLimits

0x77b0,	// (0x00074a49) popup_toolbar2_fixed_window_cp02

0xca6b,	// (0x00079d04) popup_call2_audio_second_window_t4_ParamLimits

0xca6b,	// (0x00079d04) popup_call2_audio_second_window_t4

0x0aa9,	// (0x0006dd42) popup_call2_audio_first_window_t6_ParamLimits

0x0aa9,	// (0x0006dd42) popup_call2_audio_first_window_t6

0x0d3f,	// (0x0006dfd8) popup_call2_audio_out_window_t6_ParamLimits

0x0d3f,	// (0x0006dfd8) popup_call2_audio_out_window_t6

0x2a63,	// (0x0006fcfc) main_vitu_pane

0x8076,	// (0x0007530f) aid_size_cell_itu_ParamLimits

0x8076,	// (0x0007530f) aid_size_cell_itu

0x1201,	// (0x0006e49a) bg_popup_window_pane_cp08_ParamLimits

0x1201,	// (0x0006e49a) bg_popup_window_pane_cp08

0x808c,	// (0x00075325) field_vitu_entry_pane_ParamLimits

0x808c,	// (0x00075325) field_vitu_entry_pane

0x80a3,	// (0x0007533c) grid_vitu_function_pane_ParamLimits

0x80a3,	// (0x0007533c) grid_vitu_function_pane

0x80be,	// (0x00075357) grid_vitu_itu_pane_ParamLimits

0x80be,	// (0x00075357) grid_vitu_itu_pane

0x80dc,	// (0x00075375) cell_vitu_itu_pane_ParamLimits

0x80dc,	// (0x00075375) cell_vitu_itu_pane

0x8100,	// (0x00075399) cell_vitu_function_pane_ParamLimits

0x8100,	// (0x00075399) cell_vitu_function_pane

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp08_ParamLimits

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp08

0x8133,	// (0x000753cc) field_vitu_entry_pane_t1_ParamLimits

0x8133,	// (0x000753cc) field_vitu_entry_pane_t1

0x8153,	// (0x000753ec) field_vitu_entry_pane_t2_ParamLimits

0x8153,	// (0x000753ec) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0007cb1b) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0007cb1b) field_vitu_entry_pane_t

0x8170,	// (0x00075409) bg_button_pane_cp05_ParamLimits

0x8170,	// (0x00075409) bg_button_pane_cp05

0x817e,	// (0x00075417) cell_vitu_itu_pane_g1

0x8196,	// (0x0007542f) cell_vitu_itu_pane_t1_ParamLimits

0x8196,	// (0x0007542f) cell_vitu_itu_pane_t1

0x81a8,	// (0x00075441) cell_vitu_itu_pane_t2_ParamLimits

0x81a8,	// (0x00075441) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0007cb20) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0007cb20) cell_vitu_itu_pane_t

0x81dd,	// (0x00075476) bg_button_pane_cp07

0x81e7,	// (0x00075480) cell_vitu_function_pane_g1

0xb4ae,	// (0x00078747) main_calc_pane_g1

0x2aa5,	// (0x0006fd3e) aid_visual_content_pane

0x2a63,	// (0x0006fcfc) main_vradio_pane

0x81f0,	// (0x00075489) main_vradio_pane_g1_ParamLimits

0x81f0,	// (0x00075489) main_vradio_pane_g1

0x8209,	// (0x000754a2) main_vradio_pane_g2_ParamLimits

0x8209,	// (0x000754a2) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0007cb27) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0007cb27) main_vradio_pane_g

0x8216,	// (0x000754af) main_vradio_pane_t1_ParamLimits

0x8216,	// (0x000754af) main_vradio_pane_t1

0x822b,	// (0x000754c4) main_vradio_pane_t2_ParamLimits

0x822b,	// (0x000754c4) main_vradio_pane_t2

0x8240,	// (0x000754d9) main_vradio_pane_t3_ParamLimits

0x8240,	// (0x000754d9) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0007cb2c) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0007cb2c) main_vradio_pane_t

0x8254,	// (0x000754ed) vradio_rocker_control_pane_ParamLimits

0x8254,	// (0x000754ed) vradio_rocker_control_pane

0x8266,	// (0x000754ff) vradio_station_info_pane_ParamLimits

0x8266,	// (0x000754ff) vradio_station_info_pane

0x8278,	// (0x00075511) vradio_frequency_info_pane_ParamLimits

0x8278,	// (0x00075511) vradio_frequency_info_pane

0x6d15,	// (0x00073fae) vradio_station_info_pane_g1

0x8287,	// (0x00075520) vradio_station_info_pane_t1_ParamLimits

0x8287,	// (0x00075520) vradio_station_info_pane_t1

0xcd51,	// (0x00079fea) vradio_station_info_pane_t2_ParamLimits

0xcd51,	// (0x00079fea) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0007cb33) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0007cb33) vradio_station_info_pane_t

0xcd63,	// (0x00079ffc) vradio_tuning_pane

0xcd6b,	// (0x0007a004) vradio_rocker_control_pane_g1

0xcd73,	// (0x0007a00c) vradio_rocker_control_pane_g2

0xcd7b,	// (0x0007a014) vradio_rocker_control_pane_g3

0xcd83,	// (0x0007a01c) vradio_rocker_control_pane_g4

0xcd8b,	// (0x0007a024) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0007cb38) vradio_rocker_control_pane_g

0x82a9,	// (0x00075542) vradio_frequency_info_pane_g1

0xcd93,	// (0x0007a02c) vradio_frequency_info_pane_t1_ParamLimits

0xcd93,	// (0x0007a02c) vradio_frequency_info_pane_t1

0x82b3,	// (0x0007554c) vradio_tuning_pane_g1

0x82be,	// (0x00075557) vradio_tuning_pane_t1

0x2aea,	// (0x0006fd83) area_side_right_pane_ParamLimits

0x2aea,	// (0x0006fd83) area_side_right_pane

0x11ba,	// (0x0006e453) status_small_pane_g1

0x11c2,	// (0x0006e45b) status_small_pane_g2

0x11cb,	// (0x0006e464) status_small_pane_g3

0x11d4,	// (0x0006e46d) status_small_pane_g4

0x0003,

0xf65f,	// (0x0007c8f8) status_small_pane_g

0x11dd,	// (0x0006e476) status_small_pane_t1

0x2a63,	// (0x0006fcfc) main_video3_pane

0xcda7,	// (0x0007a040) cams_zoom_vslider_pane

0xcdaf,	// (0x0007a048) image3_wide_pane_ParamLimits

0xcdaf,	// (0x0007a048) image3_wide_pane

0xcdc9,	// (0x0007a062) image3_wide_small_pane

0xcdd5,	// (0x0007a06e) main_video3_pane_g1_ParamLimits

0xcdd5,	// (0x0007a06e) main_video3_pane_g1

0xcdf1,	// (0x0007a08a) main_video3_pane_g2_ParamLimits

0xcdf1,	// (0x0007a08a) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0007cb43) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0007cb43) main_video3_pane_g

0xce0d,	// (0x0007a0a6) main_video3_pane_t1_ParamLimits

0xce0d,	// (0x0007a0a6) main_video3_pane_t1

0xce38,	// (0x0007a0d1) main_video3_pane_t2_ParamLimits

0xce38,	// (0x0007a0d1) main_video3_pane_t2

0xce63,	// (0x0007a0fc) main_video3_pane_t3_ParamLimits

0xce63,	// (0x0007a0fc) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0007cb48) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0007cb48) main_video3_pane_t

0xce90,	// (0x0007a129) cams_zoom_vslider_pane_g1

0xce99,	// (0x0007a132) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0007cb4f) cams_zoom_vslider_pane_g

0xcea1,	// (0x0007a13a) small_slider_vertical_pane

0x6d15,	// (0x00073fae) small_slider_vertical_pane_g1

0x6d15,	// (0x00073fae) small_slider_vertical_pane_g2

0xcea9,	// (0x0007a142) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0007cb54) small_slider_vertical_pane_g

0x2a63,	// (0x0006fcfc) main_hwr_training_pane

0xceb2,	// (0x0007a14b) hwr_training_instruct_pane_ParamLimits

0xceb2,	// (0x0007a14b) hwr_training_instruct_pane

0x82cd,	// (0x00075566) hwr_training_navi_pane_ParamLimits

0x82cd,	// (0x00075566) hwr_training_navi_pane

0x82ec,	// (0x00075585) hwr_training_write_pane_ParamLimits

0x82ec,	// (0x00075585) hwr_training_write_pane

0x2a63,	// (0x0006fcfc) bg_frame_shadow_pane

0xcee9,	// (0x0007a182) hwr_training_write_pane_g1

0xcef1,	// (0x0007a18a) hwr_training_write_pane_g2

0xcef9,	// (0x0007a192) hwr_training_write_pane_g3

0xcf01,	// (0x0007a19a) hwr_training_write_pane_g4

0xcf09,	// (0x0007a1a2) hwr_training_write_pane_g5

0xcf11,	// (0x0007a1aa) hwr_training_write_pane_g6

0xcf19,	// (0x0007a1b2) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0007cb5b) hwr_training_write_pane_g

0xed8a,	// (0x0007c023) hwr_training_navi_pane_g1_ParamLimits

0xed8a,	// (0x0007c023) hwr_training_navi_pane_g1

0xed9c,	// (0x0007c035) hwr_training_navi_pane_g2_ParamLimits

0xed9c,	// (0x0007c035) hwr_training_navi_pane_g2

0xedae,	// (0x0007c047) hwr_training_navi_pane_g3_ParamLimits

0xedae,	// (0x0007c047) hwr_training_navi_pane_g3

0xedbe,	// (0x0007c057) hwr_training_navi_pane_g4_ParamLimits

0xedbe,	// (0x0007c057) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0007cb6a) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0007cb6a) hwr_training_navi_pane_g

0xedcb,	// (0x0007c064) hwr_training_navi_pane_t1

0x8336,	// (0x000755cf) list_single_hwr_training_instruct_pane_ParamLimits

0x8336,	// (0x000755cf) list_single_hwr_training_instruct_pane

0xcf21,	// (0x0007a1ba) list_single_hwr_training_instruct_pane_t1

0x6c55,	// (0x00073eee) bg_frame_shadow_pane_g1

0xcf30,	// (0x0007a1c9) bg_frame_shadow_pane_g2

0xcf38,	// (0x0007a1d1) bg_frame_shadow_pane_g3

0xcf40,	// (0x0007a1d9) bg_frame_shadow_pane_g4

0xcf48,	// (0x0007a1e1) bg_frame_shadow_pane_g5

0xcf50,	// (0x0007a1e9) bg_frame_shadow_pane_g6

0xcf58,	// (0x0007a1f1) bg_frame_shadow_pane_g7

0xb60d,	// (0x000788a6) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0007cb75) bg_frame_shadow_pane_g

0x2a63,	// (0x0006fcfc) main_video_tele_dialer_pane

0x8353,	// (0x000755ec) aid_size_cell_video_keypad_ParamLimits

0x8353,	// (0x000755ec) aid_size_cell_video_keypad

0x836d,	// (0x00075606) grid_video_dialer_keypad_pane_ParamLimits

0x836d,	// (0x00075606) grid_video_dialer_keypad_pane

0x83b9,	// (0x00075652) video_down_pane_cp_ParamLimits

0x83b9,	// (0x00075652) video_down_pane_cp

0x83ed,	// (0x00075686) cell_video_dialer_keypad_pane_ParamLimits

0x83ed,	// (0x00075686) cell_video_dialer_keypad_pane

0xcf60,	// (0x0007a1f9) bg_button_pane_cp08_ParamLimits

0xcf60,	// (0x0007a1f9) bg_button_pane_cp08

0x840f,	// (0x000756a8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x840f,	// (0x000756a8) cell_video_dialer_keypad_pane_g1

0x775e,	// (0x000749f7) mup3_rocker2_pane_ParamLimits

0x775e,	// (0x000749f7) mup3_rocker2_pane

0x6d15,	// (0x00073fae) mup3_rocker2_pane_g1

0x5c3d,	// (0x00072ed6) main_dialer2_pane

0x2a63,	// (0x0006fcfc) main_mp4_pane

0xede1,	// (0x0007c07a) main_mp4_pane_g1_ParamLimits

0xede1,	// (0x0007c07a) main_mp4_pane_g1

0xede1,	// (0x0007c07a) main_mp4_pane_g2_ParamLimits

0xede1,	// (0x0007c07a) main_mp4_pane_g2

0x844a,	// (0x000756e3) main_mp4_pane_g3_ParamLimits

0x844a,	// (0x000756e3) main_mp4_pane_g3

0xedef,	// (0x0007c088) main_mp4_pane_g4_ParamLimits

0xedef,	// (0x0007c088) main_mp4_pane_g4

0xee09,	// (0x0007c0a2) main_mp4_pane_g5_ParamLimits

0xee09,	// (0x0007c0a2) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0007cb95) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0007cb95) main_mp4_pane_g

0xee3d,	// (0x0007c0d6) main_mp4_pane_t1_ParamLimits

0xee3d,	// (0x0007c0d6) main_mp4_pane_t1

0xee99,	// (0x0007c132) main_mp4_pane_t2_ParamLimits

0xee99,	// (0x0007c132) main_mp4_pane_t2

0xcf6c,	// (0x0007a205) main_mp4_pane_t3_ParamLimits

0xcf6c,	// (0x0007a205) main_mp4_pane_t3

0xeeeb,	// (0x0007c184) main_mp4_pane_t4_ParamLimits

0xeeeb,	// (0x0007c184) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0007cba2) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0007cba2) main_mp4_pane_t

0xef2f,	// (0x0007c1c8) mp4_progress_pane_ParamLimits

0xef2f,	// (0x0007c1c8) mp4_progress_pane

0xef79,	// (0x0007c212) mp4_rocker_pane_ParamLimits

0xef79,	// (0x0007c212) mp4_rocker_pane

0xcf94,	// (0x0007a22d) mp4_progress_pane_t1

0xcfad,	// (0x0007a246) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0007cbab) mp4_progress_pane_t

0xcfc6,	// (0x0007a25f) mup_progress_pane_cp04

0x6d15,	// (0x00073fae) mp4_rocker_pane_g1

0x8486,	// (0x0007571f) aid_cell_size_keypad2_ParamLimits

0x8486,	// (0x0007571f) aid_cell_size_keypad2

0x849c,	// (0x00075735) dialer2_ne_pane_ParamLimits

0x849c,	// (0x00075735) dialer2_ne_pane

0x84b6,	// (0x0007574f) grid_dialer2_keypad_pane_ParamLimits

0x84b6,	// (0x0007574f) grid_dialer2_keypad_pane

0x6a2c,	// (0x00073cc5) bg_popup_call_pane_cp07_ParamLimits

0x6a2c,	// (0x00073cc5) bg_popup_call_pane_cp07

0x84d4,	// (0x0007576d) dialer2_ne_pane_t1_ParamLimits

0x84d4,	// (0x0007576d) dialer2_ne_pane_t1

0x8513,	// (0x000757ac) cell_dialer2_keypad_pane_ParamLimits

0x8513,	// (0x000757ac) cell_dialer2_keypad_pane

0xcfe4,	// (0x0007a27d) bg_button_pane_pane_cp04_ParamLimits

0xcfe4,	// (0x0007a27d) bg_button_pane_pane_cp04

0x8537,	// (0x000757d0) cell_dialer2_keypad_pane_g1_ParamLimits

0x8537,	// (0x000757d0) cell_dialer2_keypad_pane_g1

0x3e07,	// (0x000710a0) aid_placing_vt_set_content_ParamLimits

0x3e07,	// (0x000710a0) aid_placing_vt_set_content

0x3e2d,	// (0x000710c6) aid_placing_vt_set_title_ParamLimits

0x3e2d,	// (0x000710c6) aid_placing_vt_set_title

0x2a63,	// (0x0006fcfc) main_image3_pane

0x85fd,	// (0x00075896) area_side_right_pane_cp01_ParamLimits

0x85fd,	// (0x00075896) area_side_right_pane_cp01

0xede1,	// (0x0007c07a) main_image3_pane_g1_ParamLimits

0xede1,	// (0x0007c07a) main_image3_pane_g1

0x8614,	// (0x000758ad) main_image3_pane_g2_ParamLimits

0x8614,	// (0x000758ad) main_image3_pane_g2

0x863c,	// (0x000758d5) main_image3_pane_g3_ParamLimits

0x863c,	// (0x000758d5) main_image3_pane_g3

0x8666,	// (0x000758ff) main_image3_pane_g4_ParamLimits

0x8666,	// (0x000758ff) main_image3_pane_g4

0x0003,

0xf921,	// (0x0007cbba) main_image3_pane_g_ParamLimits

0xf921,	// (0x0007cbba) main_image3_pane_g

0x8690,	// (0x00075929) main_image3_pane_t1_ParamLimits

0x8690,	// (0x00075929) main_image3_pane_t1

0x86e8,	// (0x00075981) main_image3_pane_t2_ParamLimits

0x86e8,	// (0x00075981) main_image3_pane_t2

0x873a,	// (0x000759d3) main_image3_pane_t3_ParamLimits

0x873a,	// (0x000759d3) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0007cbc3) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0007cbc3) main_image3_pane_t

0x1201,	// (0x0006e49a) grid_sctrl_middle_pane_cp01_ParamLimits

0x1201,	// (0x0006e49a) grid_sctrl_middle_pane_cp01

0x87c2,	// (0x00075a5b) cell_sctrl_middle_pane_cp01_ParamLimits

0x87c2,	// (0x00075a5b) cell_sctrl_middle_pane_cp01

0x87df,	// (0x00075a78) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x87df,	// (0x00075a78) cell_sctrl_middle_pane_cp01_g1

0x2a63,	// (0x0006fcfc) main_call4_pane

0x87f5,	// (0x00075a8e) aid_size_button_call4_ParamLimits

0x87f5,	// (0x00075a8e) aid_size_button_call4

0x8826,	// (0x00075abf) call4_windows_pane_ParamLimits

0x8826,	// (0x00075abf) call4_windows_pane

0x8846,	// (0x00075adf) grid_call4_button_pane_ParamLimits

0x8846,	// (0x00075adf) grid_call4_button_pane

0xcff0,	// (0x0007a289) call4_windows_conf_pane

0xd005,	// (0x0007a29e) popup_call4_audio_first_window_ParamLimits

0xd005,	// (0x0007a29e) popup_call4_audio_first_window

0xd051,	// (0x0007a2ea) popup_call4_audio_second_window_ParamLimits

0xd051,	// (0x0007a2ea) popup_call4_audio_second_window

0xd065,	// (0x0007a2fe) popup_call4_audio_wait_window_ParamLimits

0xd065,	// (0x0007a2fe) popup_call4_audio_wait_window

0x8873,	// (0x00075b0c) cell_call4_button_pane_ParamLimits

0x8873,	// (0x00075b0c) cell_call4_button_pane

0x889c,	// (0x00075b35) bg_button_pane_cp09_ParamLimits

0x889c,	// (0x00075b35) bg_button_pane_cp09

0x88a8,	// (0x00075b41) cell_call4_button_pane_g1_ParamLimits

0x88a8,	// (0x00075b41) cell_call4_button_pane_g1

0x88ce,	// (0x00075b67) cell_call4_button_pane_t1_ParamLimits

0x88ce,	// (0x00075b67) cell_call4_button_pane_t1

0xd0ad,	// (0x0007a346) popup_call4_audio_conf_window_ParamLimits

0xd0ad,	// (0x0007a346) popup_call4_audio_conf_window

0x77c6,	// (0x00074a5f) mup3_progress_pane_t1_ParamLimits

0x77dd,	// (0x00074a76) mup3_progress_pane_t2_ParamLimits

0x77f4,	// (0x00074a8d) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0007ca9c) mup3_progress_pane_t_ParamLimits

0x780b,	// (0x00074aa4) mup_progress_pane_cp03_ParamLimits

0x806e,	// (0x00075307) mup3_control_keys_pane_g4_copy1

0xef5d,	// (0x0007c1f6) mp4_rocker2_pane_ParamLimits

0xef5d,	// (0x0007c1f6) mp4_rocker2_pane

0xd0c1,	// (0x0007a35a) mp4_rocker2_pane_g1

0xd0c9,	// (0x0007a362) mp4_rocker2_pane_g2

0xefcb,	// (0x0007c264) mp4_rocker2_pane_g3

0xefd3,	// (0x0007c26c) mp4_rocker2_pane_g4

0xefdb,	// (0x0007c274) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0007cbcc) mp4_rocker2_pane_g

0x2a63,	// (0x0006fcfc) main_camera4_pane

0x2a63,	// (0x0006fcfc) main_video4_pane

0x8389,	// (0x00075622) main_video_tele_dialer_pane_t1_ParamLimits

0x8389,	// (0x00075622) main_video_tele_dialer_pane_t1

0x83a1,	// (0x0007563a) main_video_tele_dialer_pane_t2_ParamLimits

0x83a1,	// (0x0007563a) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0007cb86) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0007cb86) main_video_tele_dialer_pane_t

0x8910,	// (0x00075ba9) cam4_autofocus_pane_ParamLimits

0x8910,	// (0x00075ba9) cam4_autofocus_pane

0x8926,	// (0x00075bbf) cam4_image_uncrop_pane_ParamLimits

0x8926,	// (0x00075bbf) cam4_image_uncrop_pane

0x8940,	// (0x00075bd9) cam4_indicators_pane_ParamLimits

0x8940,	// (0x00075bd9) cam4_indicators_pane

0x896b,	// (0x00075c04) main_camera4_pane_g1_ParamLimits

0x896b,	// (0x00075c04) main_camera4_pane_g1

0x8977,	// (0x00075c10) main_camera4_pane_g2_ParamLimits

0x8977,	// (0x00075c10) main_camera4_pane_g2

0x8983,	// (0x00075c1c) main_camera4_pane_g3_ParamLimits

0x8983,	// (0x00075c1c) main_camera4_pane_g3

0x898f,	// (0x00075c28) main_camera4_pane_g4_ParamLimits

0x898f,	// (0x00075c28) main_camera4_pane_g4

0x899b,	// (0x00075c34) main_camera4_pane_g5_ParamLimits

0x899b,	// (0x00075c34) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0007cbd7) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0007cbd7) main_camera4_pane_g

0x89b8,	// (0x00075c51) main_camera4_pane_t1_ParamLimits

0x89b8,	// (0x00075c51) main_camera4_pane_t1

0x738f,	// (0x00074628) bg_tb_trans_pane_cp06

0x89f0,	// (0x00075c89) cam4_indicators_pane_g1

0x89fd,	// (0x00075c96) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0007cbe9) cam4_indicators_pane_g

0x8a15,	// (0x00075cae) cam4_indicators_pane_t1

0x8a3f,	// (0x00075cd8) main_video4_pane_g1_ParamLimits

0x8a3f,	// (0x00075cd8) main_video4_pane_g1

0x8a51,	// (0x00075cea) main_video4_pane_g2_ParamLimits

0x8a51,	// (0x00075cea) main_video4_pane_g2

0x8a65,	// (0x00075cfe) main_video4_pane_g3_ParamLimits

0x8a65,	// (0x00075cfe) main_video4_pane_g3

0x8a75,	// (0x00075d0e) main_video4_pane_g4_ParamLimits

0x8a75,	// (0x00075d0e) main_video4_pane_g4

0x0004,

0xf957,	// (0x0007cbf0) main_video4_pane_g_ParamLimits

0xf957,	// (0x0007cbf0) main_video4_pane_g

0x8a95,	// (0x00075d2e) vid4_indicators_pane_ParamLimits

0x8a95,	// (0x00075d2e) vid4_indicators_pane

0x8ac7,	// (0x00075d60) video4_image_uncrop_cif_pane_ParamLimits

0x8ac7,	// (0x00075d60) video4_image_uncrop_cif_pane

0x8ae1,	// (0x00075d7a) video4_image_uncrop_nhd_pane_ParamLimits

0x8ae1,	// (0x00075d7a) video4_image_uncrop_nhd_pane

0x8926,	// (0x00075bbf) video4_image_uncrop_vga_pane_ParamLimits

0x8926,	// (0x00075bbf) video4_image_uncrop_vga_pane

0xd0d1,	// (0x0007a36a) bg_tb_trans_pane_cp07

0x89f0,	// (0x00075c89) vid4_indicators_pane_g1

0x8af5,	// (0x00075d8e) vid4_indicators_pane_g2

0x8b02,	// (0x00075d9b) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0007cbfb) vid4_indicators_pane_g

0x8b1b,	// (0x00075db4) vid4_indicators_pane_t1

0x8b2d,	// (0x00075dc6) cam4_autofocus_pane_g1

0x8b35,	// (0x00075dce) cam4_autofocus_pane_g2

0x8b3d,	// (0x00075dd6) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0007cc06) cam4_autofocus_pane_g

0x8b45,	// (0x00075dde) cam4_autofocus_pane_g3_copy1

0x83d1,	// (0x0007566a) video_down_pane_cp_t1

0x83df,	// (0x00075678) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0007cb8b) video_down_pane_cp_t

0x1201,	// (0x0006e49a) popup_vitu2_window_ParamLimits

0x1201,	// (0x0006e49a) popup_vitu2_window

0x8b4d,	// (0x00075de6) aid_size_cell2_itu2_ParamLimits

0x8b4d,	// (0x00075de6) aid_size_cell2_itu2

0x8b73,	// (0x00075e0c) aid_size_cell_itu2_ParamLimits

0x8b73,	// (0x00075e0c) aid_size_cell_itu2

0x8bcf,	// (0x00075e68) bg_popup_window_pane_cp09_ParamLimits

0x8bcf,	// (0x00075e68) bg_popup_window_pane_cp09

0x8bdd,	// (0x00075e76) field_vitu2_entry_pane_ParamLimits

0x8bdd,	// (0x00075e76) field_vitu2_entry_pane

0x8c03,	// (0x00075e9c) grid_vitu2_function_pane_ParamLimits

0x8c03,	// (0x00075e9c) grid_vitu2_function_pane

0x8c54,	// (0x00075eed) grid_vitu2_itu_pane_ParamLimits

0x8c54,	// (0x00075eed) grid_vitu2_itu_pane

0x8ce5,	// (0x00075f7e) cell_vitu2_itu_pane_ParamLimits

0x8ce5,	// (0x00075f7e) cell_vitu2_itu_pane

0x8d09,	// (0x00075fa2) cell_vitu2_function_pane_ParamLimits

0x8d09,	// (0x00075fa2) cell_vitu2_function_pane

0xd0df,	// (0x0007a378) bg_popup_call_pane_cp08_ParamLimits

0xd0df,	// (0x0007a378) bg_popup_call_pane_cp08

0xd0f8,	// (0x0007a391) field_vitu2_entry_pane_g1

0xd104,	// (0x0007a39d) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0007cc0d) field_vitu2_entry_pane_g

0xd11e,	// (0x0007a3b7) field_vitu2_entry_pane_t1_ParamLimits

0xd11e,	// (0x0007a3b7) field_vitu2_entry_pane_t1

0xd13c,	// (0x0007a3d5) field_vitu2_entry_pane_t2_ParamLimits

0xd13c,	// (0x0007a3d5) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0007cc14) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0007cc14) field_vitu2_entry_pane_t

0x8d48,	// (0x00075fe1) bg_button_pane_cp010_ParamLimits

0x8d48,	// (0x00075fe1) bg_button_pane_cp010

0x8d56,	// (0x00075fef) cell_vitu2_itu_pane_g1

0x8d74,	// (0x0007600d) cell_vitu2_itu_pane_t1_ParamLimits

0x8d74,	// (0x0007600d) cell_vitu2_itu_pane_t1

0x22b0,	// (0x0006f549) cell_vitu2_itu_pane_t2_ParamLimits

0x22b0,	// (0x0006f549) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0007cc1e) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0007cc1e) cell_vitu2_itu_pane_t

0x1201,	// (0x0006e49a) bg_button_pane_cp011

0x8dda,	// (0x00076073) cell_vitu2_function_pane_g1

0x2a63,	// (0x0006fcfc) main_myfav_hc_pane

0x878a,	// (0x00075a23) popup_image3_note_pane_ParamLimits

0x878a,	// (0x00075a23) popup_image3_note_pane

0x87a6,	// (0x00075a3f) popup_image3_tool_bar_pane_ParamLimits

0x87a6,	// (0x00075a3f) popup_image3_tool_bar_pane

0x2334,	// (0x0006f5cd) cell_vitu2_itu_pane_t3_ParamLimits

0x2334,	// (0x0006f5cd) cell_vitu2_itu_pane_t3

0x2a63,	// (0x0006fcfc) bg_popup_trans_pane

0xd161,	// (0x0007a3fa) grid_image3_tool_bar_pane

0xd16b,	// (0x0007a404) bg_popup_trans_pane_g1

0xbada,	// (0x00078d73) bg_popup_trans_pane_g2

0xd173,	// (0x0007a40c) bg_popup_trans_pane_g3

0xd17b,	// (0x0007a414) bg_popup_trans_pane_g4

0xd183,	// (0x0007a41c) bg_popup_trans_pane_g5

0xd18b,	// (0x0007a424) bg_popup_trans_pane_g6

0xd193,	// (0x0007a42c) bg_popup_trans_pane_g7

0xd19b,	// (0x0007a434) bg_popup_trans_pane_g8

0xbaba,	// (0x00078d53) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0007cc25) bg_popup_trans_pane_g

0xd1a3,	// (0x0007a43c) cell_image3_tool_bar_pane_ParamLimits

0xd1a3,	// (0x0007a43c) cell_image3_tool_bar_pane

0x6d15,	// (0x00073fae) cell_image3_tool_bar_pane_g1

0x2a63,	// (0x0006fcfc) bg_popup_trans_pane_cp1

0xd1b7,	// (0x0007a450) popup_image3_note_pane_t1

0xd1c5,	// (0x0007a45e) popup_image3_note_pane_t2

0xd1d3,	// (0x0007a46c) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0007cc38) popup_image3_note_pane_t

0xd1e1,	// (0x0007a47a) popup_image3_note_pane_t3_copy1

0x8dee,	// (0x00076087) bg_myfav_hc_instruction_pane_ParamLimits

0x8dee,	// (0x00076087) bg_myfav_hc_instruction_pane

0x8e04,	// (0x0007609d) cell_myfav_contact_pane_ParamLimits

0x8e04,	// (0x0007609d) cell_myfav_contact_pane

0x8e20,	// (0x000760b9) cell_myfav_contact_pane_cp1_ParamLimits

0x8e20,	// (0x000760b9) cell_myfav_contact_pane_cp1

0x8e38,	// (0x000760d1) cell_myfav_contact_pane_cp2_ParamLimits

0x8e38,	// (0x000760d1) cell_myfav_contact_pane_cp2

0x8e50,	// (0x000760e9) cell_myfav_contact_pane_cp3_ParamLimits

0x8e50,	// (0x000760e9) cell_myfav_contact_pane_cp3

0x8e67,	// (0x00076100) cell_myfav_contact_pane_cp4_ParamLimits

0x8e67,	// (0x00076100) cell_myfav_contact_pane_cp4

0x8e7f,	// (0x00076118) cell_myfav_contact_pane_cp5_ParamLimits

0x8e7f,	// (0x00076118) cell_myfav_contact_pane_cp5

0x8e93,	// (0x0007612c) cell_myfav_contact_pane_cp6_ParamLimits

0x8e93,	// (0x0007612c) cell_myfav_contact_pane_cp6

0x8ea9,	// (0x00076142) cell_myfav_contact_pane_cp7_ParamLimits

0x8ea9,	// (0x00076142) cell_myfav_contact_pane_cp7

0xd1ef,	// (0x0007a488) listscroll_gen_pane_cp05

0x8ec3,	// (0x0007615c) main_myfav_hc_pane_g1_ParamLimits

0x8ec3,	// (0x0007615c) main_myfav_hc_pane_g1

0x8edd,	// (0x00076176) main_myfav_hc_pane_g2_ParamLimits

0x8edd,	// (0x00076176) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0007cc3f) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0007cc3f) main_myfav_hc_pane_g

0x8f0f,	// (0x000761a8) main_myfav_hc_pane_t1_ParamLimits

0x8f0f,	// (0x000761a8) main_myfav_hc_pane_t1

0xd1f8,	// (0x0007a491) main_myfav_hc_pane_t2_ParamLimits

0xd1f8,	// (0x0007a491) main_myfav_hc_pane_t2

0xd20a,	// (0x0007a4a3) main_myfav_hc_pane_t3_ParamLimits

0xd20a,	// (0x0007a4a3) main_myfav_hc_pane_t3

0x8f26,	// (0x000761bf) main_myfav_hc_pane_t4_ParamLimits

0x8f26,	// (0x000761bf) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0007cc46) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0007cc46) main_myfav_hc_pane_t

0x6d15,	// (0x00073fae) bg_myfav_hc_instruction_pane_g1

0xd21c,	// (0x0007a4b5) cell_myfav_contact_pane_g1_ParamLimits

0xd21c,	// (0x0007a4b5) cell_myfav_contact_pane_g1

0xd21c,	// (0x0007a4b5) cell_myfav_contact_pane_g2_ParamLimits

0xd21c,	// (0x0007a4b5) cell_myfav_contact_pane_g2

0xd228,	// (0x0007a4c1) cell_myfav_contact_pane_g3_ParamLimits

0xd228,	// (0x0007a4c1) cell_myfav_contact_pane_g3

0x738f,	// (0x00074628) cell_myfav_contact_pane_g4_ParamLimits

0x738f,	// (0x00074628) cell_myfav_contact_pane_g4

0xd235,	// (0x0007a4ce) cell_myfav_contact_pane_g5_ParamLimits

0xd235,	// (0x0007a4ce) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0007cc51) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0007cc51) cell_myfav_contact_pane_g

0x8ef7,	// (0x00076190) main_myfav_hc_pane_g3_ParamLimits

0x8ef7,	// (0x00076190) main_myfav_hc_pane_g3

0x2c08,	// (0x0006fea1) popup_adpt_find_window

0x8f4e,	// (0x000761e7) afind_page_pane_ParamLimits

0x8f4e,	// (0x000761e7) afind_page_pane

0x8f63,	// (0x000761fc) aid_size_cell_afind_ParamLimits

0x8f63,	// (0x000761fc) aid_size_cell_afind

0x8f81,	// (0x0007621a) bg_popup_sub_pane_cp09_ParamLimits

0x8f81,	// (0x0007621a) bg_popup_sub_pane_cp09

0x8f8e,	// (0x00076227) find_pane_cp01_ParamLimits

0x8f8e,	// (0x00076227) find_pane_cp01

0xd241,	// (0x0007a4da) grid_afind_control_pane_ParamLimits

0xd241,	// (0x0007a4da) grid_afind_control_pane

0x8f9b,	// (0x00076234) grid_afind_pane_ParamLimits

0x8f9b,	// (0x00076234) grid_afind_pane

0x8fbd,	// (0x00076256) cell_afind_pane_ParamLimits

0x8fbd,	// (0x00076256) cell_afind_pane

0x6d15,	// (0x00073fae) afind_page_pane_g1

0x901e,	// (0x000762b7) afind_page_pane_g2

0x9027,	// (0x000762c0) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0007cc5c) afind_page_pane_g

0x9030,	// (0x000762c9) afind_page_pane_t1

0xd255,	// (0x0007a4ee) cell_afind_grid_control_pane_ParamLimits

0xd255,	// (0x0007a4ee) cell_afind_grid_control_pane

0xcfe4,	// (0x0007a27d) bg_button_pane_cp69_ParamLimits

0xcfe4,	// (0x0007a27d) bg_button_pane_cp69

0x9050,	// (0x000762e9) cell_afind_pane_g1_ParamLimits

0x9050,	// (0x000762e9) cell_afind_pane_g1

0x905d,	// (0x000762f6) cell_afind_pane_t1_ParamLimits

0x905d,	// (0x000762f6) cell_afind_pane_t1

0xb80f,	// (0x00078aa8) bg_button_pane_cp72

0xd264,	// (0x0007a4fd) cell_afind_grid_control_pane_g1

0x56f8,	// (0x00072991) aid_image_placing_area_ParamLimits

0x56f8,	// (0x00072991) aid_image_placing_area

0x811b,	// (0x000753b4) field_vitu_entry_pane_g1_ParamLimits

0x811b,	// (0x000753b4) field_vitu_entry_pane_g1

0x8127,	// (0x000753c0) field_vitu_entry_pane_g2_ParamLimits

0x8127,	// (0x000753c0) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0007cb16) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0007cb16) field_vitu_entry_pane_g

0x817e,	// (0x00075417) cell_vitu_itu_pane_g1_ParamLimits

0x81c0,	// (0x00075459) cell_vitu_itu_pane_t3_ParamLimits

0x81c0,	// (0x00075459) cell_vitu_itu_pane_t3

0xcf94,	// (0x0007a22d) mp4_progress_pane_t1_ParamLimits

0xcfad,	// (0x0007a246) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0007cbab) mp4_progress_pane_t_ParamLimits

0xcfc6,	// (0x0007a25f) mup_progress_pane_cp04_ParamLimits

0x8f3a,	// (0x000761d3) main_myfav_hc_pane_t5_ParamLimits

0x8f3a,	// (0x000761d3) main_myfav_hc_pane_t5

0xb349,	// (0x000785e2) aid_zoom_text_primary

0x2c08,	// (0x0006fea1) popup_adpt_find_window_ParamLimits

0x1201,	// (0x0006e49a) main_cam_set_pane

0x8957,	// (0x00075bf0) cam4_zoom_pane_ParamLimits

0x8957,	// (0x00075bf0) cam4_zoom_pane

0x906f,	// (0x00076308) main_cam_set_pane_g1_ParamLimits

0x906f,	// (0x00076308) main_cam_set_pane_g1

0x907d,	// (0x00076316) main_cam_set_pane_g2_ParamLimits

0x907d,	// (0x00076316) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0007cc63) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0007cc63) main_cam_set_pane_g

0x90a0,	// (0x00076339) main_cam_set_pane_t1_ParamLimits

0x90a0,	// (0x00076339) main_cam_set_pane_t1

0x90bb,	// (0x00076354) main_cset_listscroll_pane_ParamLimits

0x90bb,	// (0x00076354) main_cset_listscroll_pane

0x90dd,	// (0x00076376) main_cset_slider_pane_ParamLimits

0x90dd,	// (0x00076376) main_cset_slider_pane

0xd275,	// (0x0007a50e) main_cset_list_pane_ParamLimits

0xd275,	// (0x0007a50e) main_cset_list_pane

0xd285,	// (0x0007a51e) scroll_pane_cp028

0x9103,	// (0x0007639c) aid_area_touch_slider

0x911f,	// (0x000763b8) cset_slider_pane

0x9149,	// (0x000763e2) main_cset_slider_pane_g1

0x915e,	// (0x000763f7) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0007cc68) main_cset_slider_pane_g

0xd2be,	// (0x0007a557) main_cset_slider_pane_t1

0x921a,	// (0x000764b3) main_cset_slider_pane_t2

0x9234,	// (0x000764cd) main_cset_slider_pane_t3

0x924e,	// (0x000764e7) main_cset_slider_pane_t4

0x9268,	// (0x00076501) main_cset_slider_pane_t5

0x9284,	// (0x0007651d) main_cset_slider_pane_t6

0x9299,	// (0x00076532) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0007cc8d) main_cset_slider_pane_t

0x939d,	// (0x00076636) cset_list_set_pane_ParamLimits

0x939d,	// (0x00076636) cset_list_set_pane

0x93b1,	// (0x0007664a) aid_position_infowindow_above

0x93b9,	// (0x00076652) aid_position_infowindow_below

0x93c1,	// (0x0007665a) cset_list_set_pane_g1_ParamLimits

0x93c1,	// (0x0007665a) cset_list_set_pane_g1

0x238c,	// (0x0006f625) cset_list_set_pane_g3_ParamLimits

0x238c,	// (0x0006f625) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0007ccac) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0007ccac) cset_list_set_pane_g

0x239b,	// (0x0006f634) cset_list_set_pane_t1_ParamLimits

0x239b,	// (0x0006f634) cset_list_set_pane_t1

0x1201,	// (0x0006e49a) list_highlight_pane_cp021_ParamLimits

0x1201,	// (0x0006e49a) list_highlight_pane_cp021

0xc3d8,	// (0x00079671) cset_slider_pane_g1

0xc3ea,	// (0x00079683) cset_slider_pane_g2

0xc3e1,	// (0x0007967a) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0007ccb1) cset_slider_pane_g

0xf00b,	// (0x0007c2a4) aid_area_touch_cam4_zoom

0xf013,	// (0x0007c2ac) cam4_zoom_cont_pane

0xf01b,	// (0x0007c2b4) cam4_zoom_pane_g1

0xf023,	// (0x0007c2bc) cam4_zoom_pane_g2

0x93cd,	// (0x00076666) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0007ccb8) cam4_zoom_pane_g

0xd35e,	// (0x0007a5f7) cam4_zoom_cont_pane_g1

0xd367,	// (0x0007a600) cam4_zoom_cont_pane_g2

0xd370,	// (0x0007a609) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0007ccbf) cam4_zoom_cont_pane_g

0x8813,	// (0x00075aac) call4_image_pane_ParamLimits

0x8813,	// (0x00075aac) call4_image_pane

0xcff0,	// (0x0007a289) call4_windows_conf_pane_ParamLimits

0xd02f,	// (0x0007a2c8) popup_call4_audio_in_window_ParamLimits

0xd02f,	// (0x0007a2c8) popup_call4_audio_in_window

0x2a63,	// (0x0006fcfc) bg_popup_call2_act_pane_cp02

0xd0a5,	// (0x0007a33e) call4_list_conf_pane

0x6d15,	// (0x00073fae) call4_image_pane_g1

0x6d15,	// (0x00073fae) call4_image_pane_g2

0x0001,

0xf743,	// (0x0007c9dc) call4_image_pane_g

0xd379,	// (0x0007a612) list_single_graphic_popup_conf4_pane_ParamLimits

0xd379,	// (0x0007a612) list_single_graphic_popup_conf4_pane

0x2a63,	// (0x0006fcfc) list_highlight_pane_cp022

0xd38c,	// (0x0007a625) list_single_graphic_popup_conf4_pane_g1

0xc0a9,	// (0x00079342) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0007ccc6) list_single_graphic_popup_conf4_pane_g

0xd394,	// (0x0007a62d) list_single_graphic_popup_conf4_pane_t1

0x3f07,	// (0x000711a0) popup_vtel_slider_window_ParamLimits

0x3f07,	// (0x000711a0) popup_vtel_slider_window

0xcfd2,	// (0x0007a26b) dialer2_ne_pane_t2_ParamLimits

0xcfd2,	// (0x0007a26b) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0007cbb0) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0007cbb0) dialer2_ne_pane_t

0x6a2c,	// (0x00073cc5) bg_popup_sub_pane_cp010_ParamLimits

0x6a2c,	// (0x00073cc5) bg_popup_sub_pane_cp010

0x93d5,	// (0x0007666e) popup_vtel_slider_window_g1_ParamLimits

0x93d5,	// (0x0007666e) popup_vtel_slider_window_g1

0x93e8,	// (0x00076681) popup_vtel_slider_window_g2_ParamLimits

0x93e8,	// (0x00076681) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0007cccb) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0007cccb) popup_vtel_slider_window_g

0x943e,	// (0x000766d7) vtel_slider_pane_ParamLimits

0x943e,	// (0x000766d7) vtel_slider_pane

0x9460,	// (0x000766f9) vtel_slider_pane_g1_ParamLimits

0x9460,	// (0x000766f9) vtel_slider_pane_g1

0x9474,	// (0x0007670d) vtel_slider_pane_g2_ParamLimits

0x9474,	// (0x0007670d) vtel_slider_pane_g2

0x948c,	// (0x00076725) vtel_slider_pane_g3_ParamLimits

0x948c,	// (0x00076725) vtel_slider_pane_g3

0x9460,	// (0x000766f9) vtel_slider_pane_g4_ParamLimits

0x9460,	// (0x000766f9) vtel_slider_pane_g4

0x94a2,	// (0x0007673b) vtel_slider_pane_g5_ParamLimits

0x94a2,	// (0x0007673b) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0007ccd4) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0007ccd4) vtel_slider_pane_g

0x2a63,	// (0x0006fcfc) main_gallery2_pane

0x8b9f,	// (0x00075e38) aid_size_row_itut2_dropdow_list_ParamLimits

0x8b9f,	// (0x00075e38) aid_size_row_itut2_dropdow_list

0x8c2b,	// (0x00075ec4) grid_vitu2_function_top_pane_ParamLimits

0x8c2b,	// (0x00075ec4) grid_vitu2_function_top_pane

0x8c90,	// (0x00075f29) popup_vitu2_dropdown_list_window_ParamLimits

0x8c90,	// (0x00075f29) popup_vitu2_dropdown_list_window

0x8cb9,	// (0x00075f52) popup_vitu2_match_list_window

0x94b8,	// (0x00076751) cell_vitu2_function_top_pane_ParamLimits

0x94b8,	// (0x00076751) cell_vitu2_function_top_pane

0x94d6,	// (0x0007676f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x94d6,	// (0x0007676f) cell_vitu2_function_top_pane_cp01

0x94f4,	// (0x0007678d) cell_vitu2_function_top_wide_pane_ParamLimits

0x94f4,	// (0x0007678d) cell_vitu2_function_top_wide_pane

0x1201,	// (0x0006e49a) bg_button_pane_cp012

0x9512,	// (0x000767ab) cell_vitu2_function_top_pane_g1

0xf02b,	// (0x0007c2c4) bg_button_pane_cp013_ParamLimits

0xf02b,	// (0x0007c2c4) bg_button_pane_cp013

0x9526,	// (0x000767bf) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9526,	// (0x000767bf) cell_vitu2_function_top_wide_pane_g1

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp20

0x953e,	// (0x000767d7) list_vitu2_match_list_pane

0xd16b,	// (0x0007a404) bg_popup_sub_pane_cp20_g1

0xd173,	// (0x0007a40c) bg_popup_sub_pane_cp20_g2

0xbada,	// (0x00078d73) bg_popup_sub_pane_cp20_g3

0xd17b,	// (0x0007a414) bg_popup_sub_pane_cp20_g4

0xbaba,	// (0x00078d53) bg_popup_sub_pane_cp20_g5

0xd3b0,	// (0x0007a649) bg_popup_sub_pane_cp20_g6

0xd18b,	// (0x0007a424) bg_popup_sub_pane_cp20_g7

0xd193,	// (0x0007a42c) bg_popup_sub_pane_cp20_g8

0xd19b,	// (0x0007a434) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0007ccdf) bg_popup_sub_pane_cp20_g

0xf047,	// (0x0007c2e0) list_vitu2_match_list_item_pane_ParamLimits

0xf047,	// (0x0007c2e0) list_vitu2_match_list_item_pane

0xf059,	// (0x0007c2f2) list_vitu2_match_list_item_pane_t1

0x2a63,	// (0x0006fcfc) bg_popup_sub_pane_cp21

0xbf3f,	// (0x000791d8) grid_vitu2_dropdown_list_pane

0x955c,	// (0x000767f5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x955c,	// (0x000767f5) cell_vitu2_dropdown_list_char_pane

0x957d,	// (0x00076816) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x957d,	// (0x00076816) cell_vitu2_dropdown_list_ctrl_pane

0xd3d0,	// (0x0007a669) cell_vitu2_dropdown_list_char_pane_g1

0xd3d9,	// (0x0007a672) cell_vitu2_dropdown_list_char_pane_g2

0xd3e2,	// (0x0007a67b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0007ccfc) cell_vitu2_dropdown_list_char_pane_g

0x95a9,	// (0x00076842) cell_vitu2_dropdown_list_char_pane_t1

0x95b7,	// (0x00076850) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x95b7,	// (0x00076850) cell_vitu2_dropdown_list_ctrl_pane_g1

0x95c7,	// (0x00076860) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x95c7,	// (0x00076860) cell_vitu2_dropdown_list_ctrl_pane_g2

0x95d8,	// (0x00076871) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x95d8,	// (0x00076871) cell_vitu2_dropdown_list_ctrl_pane_g3

0x95e8,	// (0x00076881) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x95e8,	// (0x00076881) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6fe9,	// (0x00074282) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6fe9,	// (0x00074282) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0007cd03) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0007cd03) cell_vitu2_dropdown_list_ctrl_pane_g

0x9604,	// (0x0007689d) aid_size_cell_gallery2_ParamLimits

0x9604,	// (0x0007689d) aid_size_cell_gallery2

0x961a,	// (0x000768b3) grid_gallery2_pane_ParamLimits

0x961a,	// (0x000768b3) grid_gallery2_pane

0x962e,	// (0x000768c7) scroll_pane_cp029_ParamLimits

0x962e,	// (0x000768c7) scroll_pane_cp029

0x963a,	// (0x000768d3) cell_gallery2_pane_ParamLimits

0x963a,	// (0x000768d3) cell_gallery2_pane

0xd3eb,	// (0x0007a684) cell_gallery2_pane_g2

0x9670,	// (0x00076909) cell_gallery2_pane_g3

0xd3f5,	// (0x0007a68e) cell_gallery2_pane_g4

0xd3fd,	// (0x0007a696) cell_gallery2_pane_g5

0xc282,	// (0x0007951b) grid_highlight_pane_cp10

0x8cb9,	// (0x00075f52) popup_vitu2_match_list_window_ParamLimits

0x8cce,	// (0x00075f67) popup_vitu2_query_window_ParamLimits

0x8cce,	// (0x00075f67) popup_vitu2_query_window

0x2a63,	// (0x0006fcfc) bg_vitu2_candi_button_pane

0xd3d0,	// (0x0007a669) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3d9,	// (0x0007a672) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3e2,	// (0x0007a67b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x23e1,	// (0x0006f67a) bg_button_pane_cp015

0x9678,	// (0x00076911) bg_button_pane_cp016

0x9682,	// (0x0007691b) bg_button_pane_cp017

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp22

0xd405,	// (0x0007a69e) popup_vitu2_query_window_g1

0x969d,	// (0x00076936) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0007cd0e) popup_vitu2_query_window_g

0x23f8,	// (0x0006f691) popup_vitu2_query_window_t1_ParamLimits

0x23f8,	// (0x0006f691) popup_vitu2_query_window_t1

0x2420,	// (0x0006f6b9) popup_vitu2_query_window_t2_ParamLimits

0x2420,	// (0x0006f6b9) popup_vitu2_query_window_t2

0x2432,	// (0x0006f6cb) popup_vitu2_query_window_t3_ParamLimits

0x2432,	// (0x0006f6cb) popup_vitu2_query_window_t3

0x96ab,	// (0x00076944) popup_vitu2_query_window_t4_ParamLimits

0x96ab,	// (0x00076944) popup_vitu2_query_window_t4

0x96bf,	// (0x00076958) popup_vitu2_query_window_t5_ParamLimits

0x96bf,	// (0x00076958) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0007cd13) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0007cd13) popup_vitu2_query_window_t

0xd26d,	// (0x0007a506) main_cset_text_pane

0x9103,	// (0x0007639c) aid_area_touch_slider_ParamLimits

0x911f,	// (0x000763b8) cset_slider_pane_ParamLimits

0x9149,	// (0x000763e2) main_cset_slider_pane_g1_ParamLimits

0x915e,	// (0x000763f7) main_cset_slider_pane_g2_ParamLimits

0xd28e,	// (0x0007a527) main_cset_slider_pane_g3_ParamLimits

0xd28e,	// (0x0007a527) main_cset_slider_pane_g3

0x9173,	// (0x0007640c) main_cset_slider_pane_g4_ParamLimits

0x9173,	// (0x0007640c) main_cset_slider_pane_g4

0x9182,	// (0x0007641b) main_cset_slider_pane_g5_ParamLimits

0x9182,	// (0x0007641b) main_cset_slider_pane_g5

0x918e,	// (0x00076427) main_cset_slider_pane_g6_ParamLimits

0x918e,	// (0x00076427) main_cset_slider_pane_g6

0xf9cf,	// (0x0007cc68) main_cset_slider_pane_g_ParamLimits

0xd2be,	// (0x0007a557) main_cset_slider_pane_t1_ParamLimits

0x921a,	// (0x000764b3) main_cset_slider_pane_t2_ParamLimits

0x9234,	// (0x000764cd) main_cset_slider_pane_t3_ParamLimits

0x924e,	// (0x000764e7) main_cset_slider_pane_t4_ParamLimits

0x9268,	// (0x00076501) main_cset_slider_pane_t5_ParamLimits

0x9284,	// (0x0007651d) main_cset_slider_pane_t6_ParamLimits

0x9299,	// (0x00076532) main_cset_slider_pane_t7_ParamLimits

0x92c3,	// (0x0007655c) main_cset_slider_pane_t8_ParamLimits

0x92c3,	// (0x0007655c) main_cset_slider_pane_t8

0x92eb,	// (0x00076584) main_cset_slider_pane_t9_ParamLimits

0x92eb,	// (0x00076584) main_cset_slider_pane_t9

0x9313,	// (0x000765ac) main_cset_slider_pane_t10_ParamLimits

0x9313,	// (0x000765ac) main_cset_slider_pane_t10

0x933b,	// (0x000765d4) main_cset_slider_pane_t11_ParamLimits

0x933b,	// (0x000765d4) main_cset_slider_pane_t11

0x9363,	// (0x000765fc) main_cset_slider_pane_t12_ParamLimits

0x9363,	// (0x000765fc) main_cset_slider_pane_t12

0x9380,	// (0x00076619) main_cset_slider_pane_t13_ParamLimits

0x9380,	// (0x00076619) main_cset_slider_pane_t13

0xf9f4,	// (0x0007cc8d) main_cset_slider_pane_t_ParamLimits

0x2a63,	// (0x0006fcfc) bg_popup_sub_pane_cp011

0xd411,	// (0x0007a6aa) main_cset_text_pane_g1

0xd419,	// (0x0007a6b2) main_cset_text_pane_t1

0xd427,	// (0x0007a6c0) main_cset_text_pane_t2

0xd435,	// (0x0007a6ce) main_cset_text_pane_t3

0xd443,	// (0x0007a6dc) main_cset_text_pane_t4

0xd451,	// (0x0007a6ea) main_cset_text_pane_t5

0xd45f,	// (0x0007a6f8) main_cset_text_pane_t6

0xd46d,	// (0x0007a706) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0007cd1e) main_cset_text_pane_t

0x2a63,	// (0x0006fcfc) main_cam4_burst_pane

0x2a63,	// (0x0006fcfc) main_cam5_pane

0x903e,	// (0x000762d7) bg_button_pane_cp019

0x9047,	// (0x000762e0) bg_button_pane_cp020

0xd29a,	// (0x0007a533) main_cset_slider_pane_g7_ParamLimits

0xd29a,	// (0x0007a533) main_cset_slider_pane_g7

0xd2a6,	// (0x0007a53f) main_cset_slider_pane_g8_ParamLimits

0xd2a6,	// (0x0007a53f) main_cset_slider_pane_g8

0x91a2,	// (0x0007643b) main_cset_slider_pane_g9_ParamLimits

0x91a2,	// (0x0007643b) main_cset_slider_pane_g9

0x91ae,	// (0x00076447) main_cset_slider_pane_g10_ParamLimits

0x91ae,	// (0x00076447) main_cset_slider_pane_g10

0x91ba,	// (0x00076453) main_cset_slider_pane_g11_ParamLimits

0x91ba,	// (0x00076453) main_cset_slider_pane_g11

0x91c6,	// (0x0007645f) main_cset_slider_pane_g12_ParamLimits

0x91c6,	// (0x0007645f) main_cset_slider_pane_g12

0x91d2,	// (0x0007646b) main_cset_slider_pane_g13_ParamLimits

0x91d2,	// (0x0007646b) main_cset_slider_pane_g13

0x91de,	// (0x00076477) main_cset_slider_pane_g14_ParamLimits

0x91de,	// (0x00076477) main_cset_slider_pane_g14

0x91ea,	// (0x00076483) main_cset_slider_pane_g15_ParamLimits

0x91ea,	// (0x00076483) main_cset_slider_pane_g15

0xd2ec,	// (0x0007a585) main_cset_slider_pane_t14_ParamLimits

0xd2ec,	// (0x0007a585) main_cset_slider_pane_t14

0xd325,	// (0x0007a5be) main_cset_slider_pane_t15_ParamLimits

0xd325,	// (0x0007a5be) main_cset_slider_pane_t15

0x96d3,	// (0x0007696c) aid_cam4_burst_size_cell_ParamLimits

0x96d3,	// (0x0007696c) aid_cam4_burst_size_cell

0x96f3,	// (0x0007698c) grid_cam4_burst_pane_ParamLimits

0x96f3,	// (0x0007698c) grid_cam4_burst_pane

0x972b,	// (0x000769c4) linegrid_cam4_burst_pane_ParamLimits

0x972b,	// (0x000769c4) linegrid_cam4_burst_pane

0x9751,	// (0x000769ea) scroll_pane_cp30_ParamLimits

0x9751,	// (0x000769ea) scroll_pane_cp30

0x975d,	// (0x000769f6) cell_cam4_burst_pane_ParamLimits

0x975d,	// (0x000769f6) cell_cam4_burst_pane

0xd47b,	// (0x0007a714) linegrid_cam4_burst_pane_g1_ParamLimits

0xd47b,	// (0x0007a714) linegrid_cam4_burst_pane_g1

0x97aa,	// (0x00076a43) linegrid_cam4_burst_pane_g2_ParamLimits

0x97aa,	// (0x00076a43) linegrid_cam4_burst_pane_g2

0xd488,	// (0x0007a721) linegrid_cam4_burst_pane_g3_ParamLimits

0xd488,	// (0x0007a721) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0007cd2d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0007cd2d) linegrid_cam4_burst_pane_g

0x97bb,	// (0x00076a54) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x97bb,	// (0x00076a54) linegrid_cam4_burst_pane_g3_copy1

0xd495,	// (0x0007a72e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd495,	// (0x0007a72e) linegrid_cam4_burst_pane_g4

0x97d5,	// (0x00076a6e) linegrid_cam4_burst_pane_g5_ParamLimits

0x97d5,	// (0x00076a6e) linegrid_cam4_burst_pane_g5

0x97e6,	// (0x00076a7f) linegrid_cam4_burst_pane_g6_ParamLimits

0x97e6,	// (0x00076a7f) linegrid_cam4_burst_pane_g6

0xd4a2,	// (0x0007a73b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4a2,	// (0x0007a73b) linegrid_cam4_burst_pane_g7

0x97fd,	// (0x00076a96) cell_cam4_burst_pane_g1

0xd4bb,	// (0x0007a754) main_cam5_pane_t1_ParamLimits

0xd4bb,	// (0x0007a754) main_cam5_pane_t1

0xd4cd,	// (0x0007a766) main_cam5_pane_t2_ParamLimits

0xd4cd,	// (0x0007a766) main_cam5_pane_t2

0xd4df,	// (0x0007a778) main_cam5_pane_t3_ParamLimits

0xd4df,	// (0x0007a778) main_cam5_pane_t3

0xd4f1,	// (0x0007a78a) main_cam5_pane_t4_ParamLimits

0xd4f1,	// (0x0007a78a) main_cam5_pane_t4

0xd507,	// (0x0007a7a0) main_cam5_pane_t5_ParamLimits

0xd507,	// (0x0007a7a0) main_cam5_pane_t5

0xd519,	// (0x0007a7b2) main_cam5_pane_t6_ParamLimits

0xd519,	// (0x0007a7b2) main_cam5_pane_t6

0xd52d,	// (0x0007a7c6) main_cam5_pane_t7_ParamLimits

0xd52d,	// (0x0007a7c6) main_cam5_pane_t7

0xd53f,	// (0x0007a7d8) main_cam5_pane_t8_ParamLimits

0xd53f,	// (0x0007a7d8) main_cam5_pane_t8

0xd55b,	// (0x0007a7f4) main_cam5_pane_t9_ParamLimits

0xd55b,	// (0x0007a7f4) main_cam5_pane_t9

0xd56d,	// (0x0007a806) main_cam5_pane_t10_ParamLimits

0xd56d,	// (0x0007a806) main_cam5_pane_t10

0xd57f,	// (0x0007a818) main_cam5_pane_t11_ParamLimits

0xd57f,	// (0x0007a818) main_cam5_pane_t11

0xd591,	// (0x0007a82a) main_cam5_pane_t12_ParamLimits

0xd591,	// (0x0007a82a) main_cam5_pane_t12

0xd5a6,	// (0x0007a83f) main_cam5_pane_t13_ParamLimits

0xd5a6,	// (0x0007a83f) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0007cd39) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0007cd39) main_cam5_pane_t

0x2c95,	// (0x0006ff2e) popup_scut_keymap_window_ParamLimits

0x2c95,	// (0x0006ff2e) popup_scut_keymap_window

0x9810,	// (0x00076aa9) aid_size_cell_brow_shortcut

0xc282,	// (0x0007951b) bg_popup_window_pane_cp010

0x981c,	// (0x00076ab5) grid_scut_pane

0x9828,	// (0x00076ac1) cell_scut_pane_ParamLimits

0x9828,	// (0x00076ac1) cell_scut_pane

0x983f,	// (0x00076ad8) cell_scut_pane_g1

0xd5c3,	// (0x0007a85c) cell_scut_pane_t1

0xd5d2,	// (0x0007a86b) cell_scut_pane_t2

0x9848,	// (0x00076ae1) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0007cd54) cell_scut_pane_t

0x739d,	// (0x00074636) main_mup3_pane_g8_ParamLimits

0x739d,	// (0x00074636) main_mup3_pane_g8

0x8bb7,	// (0x00075e50) area_vitu2_query_pane_ParamLimits

0x8bb7,	// (0x00075e50) area_vitu2_query_pane

0x23eb,	// (0x0006f684) input_focus_pane_cp08

0xd5e1,	// (0x0007a87a) area_vitu2_query_pane_g1

0x245a,	// (0x0006f6f3) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0007cd5b) area_vitu2_query_pane_g

0x9856,	// (0x00076aef) area_vitu2_query_pane_t1_ParamLimits

0x9856,	// (0x00076aef) area_vitu2_query_pane_t1

0x986a,	// (0x00076b03) area_vitu2_query_pane_t2_ParamLimits

0x986a,	// (0x00076b03) area_vitu2_query_pane_t2

0x246b,	// (0x0006f704) area_vitu2_query_pane_t3_ParamLimits

0x246b,	// (0x0006f704) area_vitu2_query_pane_t3

0xd5ed,	// (0x0007a886) area_vitu2_query_pane_t4_ParamLimits

0xd5ed,	// (0x0007a886) area_vitu2_query_pane_t4

0xd615,	// (0x0007a8ae) area_vitu2_query_pane_t5_ParamLimits

0xd615,	// (0x0007a8ae) area_vitu2_query_pane_t5

0xd63d,	// (0x0007a8d6) area_vitu2_query_pane_t6_ParamLimits

0xd63d,	// (0x0007a8d6) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0007cd60) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0007cd60) area_vitu2_query_pane_t

0x987e,	// (0x00076b17) bg_button_pane_cp018

0x988c,	// (0x00076b25) bg_button_pane_cp021

0x2493,	// (0x0006f72c) bg_button_pane_cp022

0x24a4,	// (0x0006f73d) input_focus_pane_cp09

0x4d86,	// (0x0007201f) aid_size_touch_mv_arrow_left

0x4daf,	// (0x00072048) aid_size_touch_mv_arrow_right

0x9202,	// (0x0007649b) main_cset_slider_pane_g16_ParamLimits

0x9202,	// (0x0007649b) main_cset_slider_pane_g16

0x920e,	// (0x000764a7) main_cset_slider_pane_g17_ParamLimits

0x920e,	// (0x000764a7) main_cset_slider_pane_g17

0x97fd,	// (0x00076a96) cell_cam4_burst_pane_g1_ParamLimits

0x2a63,	// (0x0006fcfc) compa_mode_pane

0x93f8,	// (0x00076691) popup_vtel_slider_window_g3_ParamLimits

0x93f8,	// (0x00076691) popup_vtel_slider_window_g3

0x940f,	// (0x000766a8) popup_vtel_slider_window_g4_ParamLimits

0x940f,	// (0x000766a8) popup_vtel_slider_window_g4

0x9426,	// (0x000766bf) popup_vtel_slider_window_t1_ParamLimits

0x9426,	// (0x000766bf) popup_vtel_slider_window_t1

0x2a63,	// (0x0006fcfc) main_cl_pane

0x1229,	// (0x0006e4c2) popup_imed_adjust2_window_ParamLimits

0x11f3,	// (0x0006e48c) bg_tb_trans_pane_cp05_ParamLimits

0x7ee4,	// (0x0007517d) popup_imed_adjust2_window_g1_ParamLimits

0x7ef3,	// (0x0007518c) popup_imed_adjust2_window_g2_ParamLimits

0x7ef3,	// (0x0007518c) popup_imed_adjust2_window_g2

0x7eff,	// (0x00075198) popup_imed_adjust2_window_g3_ParamLimits

0x7eff,	// (0x00075198) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0007cada) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0007cada) popup_imed_adjust2_window_g

0x7f0b,	// (0x000751a4) popup_imed_adjust2_window_t1_ParamLimits

0x7f23,	// (0x000751bc) slider_imed_adjust_pane_ParamLimits

0x7f37,	// (0x000751d0) slider_imed_adjust_pane_g1_ParamLimits

0x7f47,	// (0x000751e0) slider_imed_adjust_pane_g2_ParamLimits

0x7f57,	// (0x000751f0) slider_imed_adjust_pane_g3_ParamLimits

0x7f68,	// (0x00075201) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0007cae1) slider_imed_adjust_pane_g_ParamLimits

0x88f8,	// (0x00075b91) aid_touch_area_cam4_ParamLimits

0x88f8,	// (0x00075b91) aid_touch_area_cam4

0xefe3,	// (0x0007c27c) battery_pane_cp01

0x89ac,	// (0x00075c45) main_camera4_pane_g6_ParamLimits

0x89ac,	// (0x00075c45) main_camera4_pane_g6

0x89cf,	// (0x00075c68) main_camera4_pane_t2_ParamLimits

0x89cf,	// (0x00075c68) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0007cbe4) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0007cbe4) main_camera4_pane_t

0x8a27,	// (0x00075cc0) aid_touch_area_vid4_ParamLimits

0x8a27,	// (0x00075cc0) aid_touch_area_vid4

0x8a85,	// (0x00075d1e) main_video4_pane_g5_ParamLimits

0x8a85,	// (0x00075d1e) main_video4_pane_g5

0x8aac,	// (0x00075d45) vid4_progress_pane_ParamLimits

0x8aac,	// (0x00075d45) vid4_progress_pane

0xd2b2,	// (0x0007a54b) main_cset_slider_pane_g18_ParamLimits

0xd2b2,	// (0x0007a54b) main_cset_slider_pane_g18

0xd4af,	// (0x0007a748) cell_cam4_burst_pane_g2_ParamLimits

0xd4af,	// (0x0007a748) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0007cd34) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0007cd34) cell_cam4_burst_pane_g

0xb514,	// (0x000787ad) bg_cl_pane_ParamLimits

0xb514,	// (0x000787ad) bg_cl_pane

0x9898,	// (0x00076b31) cl_header_pane_ParamLimits

0x9898,	// (0x00076b31) cl_header_pane

0x98ac,	// (0x00076b45) cl_listscroll_pane_ParamLimits

0x98ac,	// (0x00076b45) cl_listscroll_pane

0xd689,	// (0x0007a922) bg_cl_pane_g1

0xd691,	// (0x0007a92a) bg_cl_pane_g2

0xd699,	// (0x0007a932) bg_cl_pane_g3

0xd6a1,	// (0x0007a93a) bg_cl_pane_g4

0xd6a9,	// (0x0007a942) bg_cl_pane_g5

0xd6b1,	// (0x0007a94a) bg_cl_pane_g6

0xd6b9,	// (0x0007a952) bg_cl_pane_g7

0xd6c1,	// (0x0007a95a) bg_cl_pane_g8

0xd6c9,	// (0x0007a962) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0007cd6f) bg_cl_pane_g

0x98bc,	// (0x00076b55) aid_height_cl_leading_ParamLimits

0x98bc,	// (0x00076b55) aid_height_cl_leading

0x98c8,	// (0x00076b61) aid_height_cl_text_ParamLimits

0x98c8,	// (0x00076b61) aid_height_cl_text

0x1201,	// (0x0006e49a) bg_cl_header_pane_ParamLimits

0x1201,	// (0x0006e49a) bg_cl_header_pane

0x98e7,	// (0x00076b80) cl_header_pane_g1_ParamLimits

0x98e7,	// (0x00076b80) cl_header_pane_g1

0x98fd,	// (0x00076b96) cl_header_pane_t1_ParamLimits

0x98fd,	// (0x00076b96) cl_header_pane_t1

0xd6d1,	// (0x0007a96a) cl_list_pane

0xd285,	// (0x0007a51e) hc_scroll_pane_cp01

0xbaba,	// (0x00078d53) bg_cl_header_pane_g1

0xd16b,	// (0x0007a404) bg_cl_header_pane_g2

0xbada,	// (0x00078d73) bg_cl_header_pane_g3

0xd17b,	// (0x0007a414) bg_cl_header_pane_g4

0xd173,	// (0x0007a40c) bg_cl_header_pane_g5

0xd3b0,	// (0x0007a649) bg_cl_header_pane_g6

0xd193,	// (0x0007a42c) bg_cl_header_pane_g7

0xd19b,	// (0x0007a434) bg_cl_header_pane_g8

0xd18b,	// (0x0007a424) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0007cd82) bg_cl_header_pane_g

0x9916,	// (0x00076baf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9916,	// (0x00076baf) hc_cl_list_double_graphic_heading_pane

0x992a,	// (0x00076bc3) hc_cl_list_single_graphic_pane_ParamLimits

0x992a,	// (0x00076bc3) hc_cl_list_single_graphic_pane

0x9944,	// (0x00076bdd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9944,	// (0x00076bdd) hc_cl_list_single_graphic_pane_g1

0x9950,	// (0x00076be9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9950,	// (0x00076be9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0007cd95) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0007cd95) hc_cl_list_single_graphic_pane_g

0x9964,	// (0x00076bfd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9964,	// (0x00076bfd) hc_cl_list_single_graphic_pane_t1

0x9944,	// (0x00076bdd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9944,	// (0x00076bdd) hc_cl_list_double_graphic_heading_pane_g1

0x9979,	// (0x00076c12) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9979,	// (0x00076c12) hc_cl_list_double_graphic_heading_pane_g2

0x998d,	// (0x00076c26) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x998d,	// (0x00076c26) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0007cd9a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0007cd9a) hc_cl_list_double_graphic_heading_pane_g

0x99a1,	// (0x00076c3a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x99a1,	// (0x00076c3a) hc_cl_list_double_graphic_heading_pane_t1

0x99b6,	// (0x00076c4f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x99b6,	// (0x00076c4f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0007cda1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0007cda1) hc_cl_list_double_graphic_heading_pane_t

0xf06f,	// (0x0007c308) vid4_progress_pane_g1

0xf07b,	// (0x0007c314) vid4_progress_pane_g2

0xf087,	// (0x0007c320) vid4_progress_pane_g3

0xf096,	// (0x0007c32f) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0007cda6) vid4_progress_pane_g

0xf0b4,	// (0x0007c34d) vid4_progress_pane_t1

0xf0ca,	// (0x0007c363) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0007cdb1) vid4_progress_pane_t

0xf0f5,	// (0x0007c38e) wait_bar_pane_cp07

0x6a3a,	// (0x00073cd3) blid_firmament_pane_ParamLimits

0x6a7d,	// (0x00073d16) popup_blid_sat_info2_window_g1

0x6aa1,	// (0x00073d3a) popup_blid_sat_info2_window_t3

0x6aaf,	// (0x00073d48) popup_blid_sat_info2_window_t4

0x6abd,	// (0x00073d56) popup_blid_sat_info2_window_t5

0x6acb,	// (0x00073d64) popup_blid_sat_info2_window_t6

0x6adb,	// (0x00073d74) popup_blid_sat_info2_window_t7

0x6ae9,	// (0x00073d82) popup_blid_sat_info2_window_t8

0x6af7,	// (0x00073d90) popup_blid_sat_info2_window_t9

0x6b05,	// (0x00073d9e) popup_blid_sat_info2_window_t10

0x6c95,	// (0x00073f2e) aid_firma_cardinal_ParamLimits

0x6ca9,	// (0x00073f42) blid_firmament_pane_t1_ParamLimits

0x6cc0,	// (0x00073f59) blid_firmament_pane_t2_ParamLimits

0x6cd7,	// (0x00073f70) blid_firmament_pane_t3_ParamLimits

0x6cee,	// (0x00073f87) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0007c9d3) blid_firmament_pane_t_ParamLimits

0x6d05,	// (0x00073f9e) blid_sat_info_pane_ParamLimits

0x1201,	// (0x0006e49a) main_cam_set_pane_ParamLimits

0x7d5b,	// (0x00074ff4) aid_size_cell_colour_35_ParamLimits

0x7d7b,	// (0x00075014) aid_size_cell_colour_112_ParamLimits

0x7d9b,	// (0x00075034) aid_size_cell_effect_ParamLimits

0x11f3,	// (0x0006e48c) bg_tb_trans_pane_cp02_ParamLimits

0xbcda,	// (0x00078f73) heading_imed_pane_ParamLimits

0x7dbb,	// (0x00075054) listscroll_imed_pane_ParamLimits

0x0825,	// (0x0006dabe) popup_call2_audio_first_window_g5_ParamLimits

0x0825,	// (0x0006dabe) popup_call2_audio_first_window_g5

0x859f,	// (0x00075838) aid_size_touch_image3_arrow_left_ParamLimits

0x859f,	// (0x00075838) aid_size_touch_image3_arrow_left

0x85cb,	// (0x00075864) aid_size_touch_image3_arrow_right_ParamLimits

0x85cb,	// (0x00075864) aid_size_touch_image3_arrow_right

0xf0e0,	// (0x0007c379) vid4_progress_pane_t3

0x8307,	// (0x000755a0) main_hwr_training_symbol_option_pane_ParamLimits

0x8307,	// (0x000755a0) main_hwr_training_symbol_option_pane

0xced4,	// (0x0007a16d) popup_hwr_training_preview_window_ParamLimits

0xced4,	// (0x0007a16d) popup_hwr_training_preview_window

0x8327,	// (0x000755c0) hwr_training_navi_pane_g5_ParamLimits

0x8327,	// (0x000755c0) hwr_training_navi_pane_g5

0xd159,	// (0x0007a3f2) popup_char_count_window

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp20_ParamLimits

0x953e,	// (0x000767d7) list_vitu2_match_list_pane_ParamLimits

0x954d,	// (0x000767e6) vitu2_page_scroll_pane_ParamLimits

0x954d,	// (0x000767e6) vitu2_page_scroll_pane

0xd723,	// (0x0007a9bc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd723,	// (0x0007a9bc) list_single_hwr_training_symbol_option_pane

0xd736,	// (0x0007a9cf) list_single_hwr_training_symbol_option_pane_g1

0xd73e,	// (0x0007a9d7) list_single_hwr_training_symbol_option_pane_t1

0xd74c,	// (0x0007a9e5) bg_button_pane_cp023

0xd755,	// (0x0007a9ee) bg_button_pane_cp024

0x99d5,	// (0x00076c6e) vitu2_page_scroll_pane_g1

0x99dd,	// (0x00076c76) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0007cdb8) vitu2_page_scroll_pane_g

0x99e5,	// (0x00076c7e) vitu2_page_scroll_pane_t1

0x696c,	// (0x00073c05) popup_char_count_window_g1

0xd788,	// (0x0007aa21) popup_char_count_window_g2

0xd791,	// (0x0007aa2a) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0007cdbd) popup_char_count_window_g

0xd79a,	// (0x0007aa33) popup_char_count_window_t1

0x2a63,	// (0x0006fcfc) main_vded2_pane

0x7ed0,	// (0x00075169) aid_size_cell_imed_line

0x7eda,	// (0x00075173) grid_imed_line_width_pane

0x8b0f,	// (0x00075da8) vid4_indicators_pane_g4

0xd7a8,	// (0x0007aa41) cell_imed_line_width_pane_ParamLimits

0xd7a8,	// (0x0007aa41) cell_imed_line_width_pane

0xd7bc,	// (0x0007aa55) cell_imed_line_width_pane_g1

0x99f4,	// (0x00076c8d) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0007cdc4) cell_imed_line_width_pane_g

0x99fc,	// (0x00076c95) main_vded2_pane_g1_ParamLimits

0x99fc,	// (0x00076c95) main_vded2_pane_g1

0x9a12,	// (0x00076cab) main_vded2_pane_g2_ParamLimits

0x9a12,	// (0x00076cab) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0007cdc9) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0007cdc9) main_vded2_pane_g

0x9a24,	// (0x00076cbd) vded2_slider_pane_ParamLimits

0x9a24,	// (0x00076cbd) vded2_slider_pane

0x9a34,	// (0x00076ccd) aid_size_touch_vded2_end

0x9a3e,	// (0x00076cd7) aid_size_touch_vded2_playhead

0xd7c5,	// (0x0007aa5e) aid_size_touch_vded2_start

0xd7cd,	// (0x0007aa66) vded2_slider_bg_pane

0xd7d6,	// (0x0007aa6f) vded2_slider_pane_g1

0xd7df,	// (0x0007aa78) vded2_slider_pane_g2

0x9a48,	// (0x00076ce1) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0007cdce) vded2_slider_pane_g

0xd7e7,	// (0x0007aa80) vded2_slider_bg_pane_g1

0xd7f0,	// (0x0007aa89) vded2_slider_bg_pane_g2

0xd7f9,	// (0x0007aa92) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0007cdd5) vded2_slider_bg_pane_g

0x535e,	// (0x000725f7) aid_postcard_touch_down_pane_ParamLimits

0x535e,	// (0x000725f7) aid_postcard_touch_down_pane

0x5374,	// (0x0007260d) aid_postcard_touch_up_pane_ParamLimits

0x5374,	// (0x0007260d) aid_postcard_touch_up_pane

0x2a63,	// (0x0006fcfc) main_blid2_pane

0x120f,	// (0x0006e4a8) popup_blid2_search_window

0x2a63,	// (0x0006fcfc) blid2_gps_pane

0x2a63,	// (0x0006fcfc) blid2_navig_pane

0x2a63,	// (0x0006fcfc) blid2_search_pane

0x2a63,	// (0x0006fcfc) blid2_tripm_pane

0x9a53,	// (0x00076cec) blid2_search_pane_g1_ParamLimits

0x9a53,	// (0x00076cec) blid2_search_pane_g1

0x9a6b,	// (0x00076d04) blid2_search_pane_t1_ParamLimits

0x9a6b,	// (0x00076d04) blid2_search_pane_t1

0x9a7d,	// (0x00076d16) aid_size_cell_blid2_gps_ParamLimits

0x9a7d,	// (0x00076d16) aid_size_cell_blid2_gps

0x9a95,	// (0x00076d2e) blid2_gps_pane_g1_ParamLimits

0x9a95,	// (0x00076d2e) blid2_gps_pane_g1

0x9aa9,	// (0x00076d42) grid_blid2_satellite_pane_ParamLimits

0x9aa9,	// (0x00076d42) grid_blid2_satellite_pane

0x9ac3,	// (0x00076d5c) blid2_navig_pane_g1_ParamLimits

0x9ac3,	// (0x00076d5c) blid2_navig_pane_g1

0x9acf,	// (0x00076d68) blid2_navig_pane_t1_ParamLimits

0x9acf,	// (0x00076d68) blid2_navig_pane_t1

0x9aea,	// (0x00076d83) blid2_navig_pane_t2_ParamLimits

0x9aea,	// (0x00076d83) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0007cddc) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0007cddc) blid2_navig_pane_t

0x9b05,	// (0x00076d9e) blid2_navig_ring_pane_ParamLimits

0x9b05,	// (0x00076d9e) blid2_navig_ring_pane

0x9b1e,	// (0x00076db7) blid2_speed_pane_ParamLimits

0x9b1e,	// (0x00076db7) blid2_speed_pane

0x9b2a,	// (0x00076dc3) blid2_tripm_pane_g1_ParamLimits

0x9b2a,	// (0x00076dc3) blid2_tripm_pane_g1

0x9b45,	// (0x00076dde) blid2_tripm_pane_g2_ParamLimits

0x9b45,	// (0x00076dde) blid2_tripm_pane_g2

0x9b59,	// (0x00076df2) blid2_tripm_pane_g3_ParamLimits

0x9b59,	// (0x00076df2) blid2_tripm_pane_g3

0x9b6d,	// (0x00076e06) blid2_tripm_pane_g4_ParamLimits

0x9b6d,	// (0x00076e06) blid2_tripm_pane_g4

0x9b81,	// (0x00076e1a) blid2_tripm_pane_g5_ParamLimits

0x9b81,	// (0x00076e1a) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0007cde1) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0007cde1) blid2_tripm_pane_g

0x9ba7,	// (0x00076e40) blid2_tripm_pane_t1_ParamLimits

0x9ba7,	// (0x00076e40) blid2_tripm_pane_t1

0x9bc2,	// (0x00076e5b) blid2_tripm_pane_t2_ParamLimits

0x9bc2,	// (0x00076e5b) blid2_tripm_pane_t2

0x9bdd,	// (0x00076e76) blid2_tripm_pane_t3_ParamLimits

0x9bdd,	// (0x00076e76) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0007cdee) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0007cdee) blid2_tripm_pane_t

0x9c24,	// (0x00076ebd) cell_blid2_satellite_pane_ParamLimits

0x9c24,	// (0x00076ebd) cell_blid2_satellite_pane

0x9c42,	// (0x00076edb) cell_blid2_satellite_pane_g1

0xd802,	// (0x0007aa9b) cell_blid2_satellite_pane_t1

0x6d15,	// (0x00073fae) blid2_speed_pane_g1

0xd810,	// (0x0007aaa9) blid2_speed_pane_t1

0xd81e,	// (0x0007aab7) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0007cdf7) blid2_speed_pane_t

0x6d15,	// (0x00073fae) blid2_navig_ring_pane_g1

0x9c4b,	// (0x00076ee4) blid2_navig_ring_pane_g2

0x9c53,	// (0x00076eec) blid2_navig_ring_pane_g3

0x9c5b,	// (0x00076ef4) blid2_navig_ring_pane_g4

0x9c63,	// (0x00076efc) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0007cdfc) blid2_navig_ring_pane_g

0x2a63,	// (0x0006fcfc) bg_popup_window_pane_cp011

0xd82c,	// (0x0007aac5) popup_blid2_search_window_g1

0xd834,	// (0x0007aacd) popup_blid2_search_window_t1

0xd842,	// (0x0007aadb) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0007ce07) popup_blid2_search_window_t

0xb9c9,	// (0x00078c62) main_browser_pane_g1

0xb514,	// (0x000787ad) main_browser_pane_ParamLimits

0x1201,	// (0x0006e49a) bg_button_pane_cp011_ParamLimits

0x8dda,	// (0x00076073) cell_vitu2_function_pane_g1_ParamLimits

0x1201,	// (0x0006e49a) bg_popup_sub_pane_cp22_ParamLimits

0x23eb,	// (0x0006f684) input_focus_pane_cp08_ParamLimits

0x968c,	// (0x00076925) popup_vitu2_query_button_pane_ParamLimits

0x968c,	// (0x00076925) popup_vitu2_query_button_pane

0x23e1,	// (0x0006f67a) popup_vitu2_query_input_button_pane

0xd405,	// (0x0007a69e) popup_vitu2_query_window_g1_ParamLimits

0x969d,	// (0x00076936) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0007cd0e) popup_vitu2_query_window_g_ParamLimits

0x2a63,	// (0x0006fcfc) bg_button_pane_cp026

0x9c6b,	// (0x00076f04) popup_vitu2_query_input_button_pane_g1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp025

0xd850,	// (0x0007aae9) popup_vitu2_query_button_pane_t1

0x7062,	// (0x000742fb) main_mp3_pane_t6

0x7078,	// (0x00074311) popup_slider_window_cp01

0xeff3,	// (0x0007c28c) cam4_battery_pane

0xf003,	// (0x0007c29c) cam4_battery_pane_cp02

0x99cb,	// (0x00076c64) cam4_battery_pane_cp01

0xf067,	// (0x0007c300) cam4_battery_pane_cp03

0x6d15,	// (0x00073fae) cam4_battery_pane_g1

0xd85e,	// (0x0007aaf7) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0007ce0c) cam4_battery_pane_g

0x6b13,	// (0x00073dac) popup_blid_sat_info2_window_t11

0x4d86,	// (0x0007201f) aid_size_touch_mv_arrow_left_ParamLimits

0x4daf,	// (0x00072048) aid_size_touch_mv_arrow_right_ParamLimits

0xc1e2,	// (0x0007947b) navi_pane_g1_ParamLimits

0x4dd8,	// (0x00072071) navi_pane_g2_ParamLimits

0x4e06,	// (0x0007209f) navi_pane_g3_ParamLimits

0xf44c,	// (0x0007c6e5) navi_pane_g_ParamLimits

0x4e5e,	// (0x000720f7) navi_pane_mv_t1_ParamLimits

0x7df8,	// (0x00075091) grid_imed_effect_pane_ParamLimits

0xb912,	// (0x00078bab) aid_placing_vt_slider_lsc

0xb91a,	// (0x00078bb3) aid_placing_vt_slider_prt

0x1201,	// (0x0006e49a) bg_tb_trans_pane_cp01_ParamLimits

0x6ecc,	// (0x00074165) popup_image_details_window_g1_ParamLimits

0x6edf,	// (0x00074178) popup_image_details_window_g2_ParamLimits

0x6ef4,	// (0x0007418d) popup_image_details_window_g3_ParamLimits

0x6ef4,	// (0x0007418d) popup_image_details_window_g3

0xf77f,	// (0x0007ca18) popup_image_details_window_g_ParamLimits

0x6f08,	// (0x000741a1) popup_image_details_window_t1_ParamLimits

0x6f1a,	// (0x000741b3) popup_image_details_window_t2_ParamLimits

0x6f33,	// (0x000741cc) popup_image_details_window_t3_ParamLimits

0x6f47,	// (0x000741e0) popup_image_details_window_t4_ParamLimits

0x6f62,	// (0x000741fb) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0007ca1f) popup_image_details_window_t_ParamLimits

0x98d4,	// (0x00076b6d) cl_header_name_pane_ParamLimits

0x98d4,	// (0x00076b6d) cl_header_name_pane

0x9c73,	// (0x00076f0c) cl_header_name_pane_t1_ParamLimits

0x9c73,	// (0x00076f0c) cl_header_name_pane_t1

0x9c94,	// (0x00076f2d) cl_header_name_pane_t2_ParamLimits

0x9c94,	// (0x00076f2d) cl_header_name_pane_t2

0x9cd6,	// (0x00076f6f) cl_header_name_pane_t3_ParamLimits

0x9cd6,	// (0x00076f6f) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0007ce11) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0007ce11) cl_header_name_pane_t

0x4e2f,	// (0x000720c8) navi_pane_mv_g2_ParamLimits

0xd0f8,	// (0x0007a391) field_vitu2_entry_pane_g1_ParamLimits

0xd104,	// (0x0007a39d) field_vitu2_entry_pane_g2_ParamLimits

0xd110,	// (0x0007a3a9) field_vitu2_entry_pane_g3_ParamLimits

0xd110,	// (0x0007a3a9) field_vitu2_entry_pane_g3

0xf974,	// (0x0007cc0d) field_vitu2_entry_pane_g_ParamLimits

0x8d56,	// (0x00075fef) cell_vitu2_itu_pane_g1_ParamLimits

0x8d66,	// (0x00075fff) cell_vitu2_itu_pane_g2_ParamLimits

0x8d66,	// (0x00075fff) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0007cc19) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0007cc19) cell_vitu2_itu_pane_g

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp05_ParamLimits

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp05

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp03

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp04

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp10_ParamLimits

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp10

0x2493,	// (0x0006f72c) bg_vkb2_func_pane_cp08

0x987e,	// (0x00076b17) bg_vkb2_func_pane_cp06

0x988c,	// (0x00076b25) bg_vkb2_func_pane_cp07

0xd75e,	// (0x0007a9f7) bg_vkb2_func_pane_cp11_ParamLimits

0xd75e,	// (0x0007a9f7) bg_vkb2_func_pane_cp11

0xd773,	// (0x0007aa0c) bg_vkb2_func_pane_cp12_ParamLimits

0xd773,	// (0x0007aa0c) bg_vkb2_func_pane_cp12

0x2a63,	// (0x0006fcfc) bg_vkb2_func_pane_cp09

0xd16b,	// (0x0007a404) bg_vkb2_func_pane_g1

0xbada,	// (0x00078d73) bg_vkb2_func_pane_g2

0xd173,	// (0x0007a40c) bg_vkb2_func_pane_g3

0xd17b,	// (0x0007a414) bg_vkb2_func_pane_g4

0xd3b0,	// (0x0007a649) bg_vkb2_func_pane_g5

0xd193,	// (0x0007a42c) bg_vkb2_func_pane_g6

0xd19b,	// (0x0007a434) bg_vkb2_func_pane_g7

0xd18b,	// (0x0007a424) bg_vkb2_func_pane_g8

0xbaba,	// (0x00078d53) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0007ce18) bg_vkb2_func_pane_g

0x9b95,	// (0x00076e2e) blid2_tripm_pane_g6_ParamLimits

0x9b95,	// (0x00076e2e) blid2_tripm_pane_g6

0xcf8c,	// (0x0007a225) mp4_progress_pane_g1

0x9c10,	// (0x00076ea9) blid2_tripm_values_pane_ParamLimits

0x9c10,	// (0x00076ea9) blid2_tripm_values_pane

0x9d07,	// (0x00076fa0) blid2_tripm_values_pane_t1

0x9d15,	// (0x00076fae) blid2_tripm_values_pane_t2

0x9d23,	// (0x00076fbc) blid2_tripm_values_pane_t3

0x9d31,	// (0x00076fca) blid2_tripm_values_pane_t4

0x9d3f,	// (0x00076fd8) blid2_tripm_values_pane_t5

0x9d4d,	// (0x00076fe6) blid2_tripm_values_pane_t6

0x9d5b,	// (0x00076ff4) blid2_tripm_values_pane_t7

0x9d69,	// (0x00077002) blid2_tripm_values_pane_t8

0x9d77,	// (0x00077010) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0007ce2b) blid2_tripm_values_pane_t

0x3e7b,	// (0x00071114) call_video_pane_t1_ParamLimits

0x3e8f,	// (0x00071128) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0007c56e) call_video_pane_t_ParamLimits

0x2227,	// (0x0006f4c0) msg_header_pane_g1_ParamLimits

0xc41d,	// (0x000796b6) msg_header_pane_g2_ParamLimits

0xc41d,	// (0x000796b6) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0007c788) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0007c788) msg_header_pane_g

0xb514,	// (0x000787ad) main_clock2_pane_ParamLimits

0x7ab7,	// (0x00074d50) grid_clock2_toolbar_pane_ParamLimits

0x7ab7,	// (0x00074d50) grid_clock2_toolbar_pane

0x7ab7,	// (0x00074d50) listscroll_clock2_pane_ParamLimits

0x7ab7,	// (0x00074d50) listscroll_clock2_pane

0x7b94,	// (0x00074e2d) main_clock2_pane_t3_ParamLimits

0x7b94,	// (0x00074e2d) main_clock2_pane_t3

0x7baf,	// (0x00074e48) main_clock2_pane_t4_ParamLimits

0x7baf,	// (0x00074e48) main_clock2_pane_t4

0xd868,	// (0x0007ab01) cell_clock2_toolbar_pane

0xd870,	// (0x0007ab09) cell_clock2_toolbar_pane_cp01

0xd870,	// (0x0007ab09) cell_clock2_toolbar_pane_cp02

0xd878,	// (0x0007ab11) cell_clock2_toolbar_pane_cp03

0xd880,	// (0x0007ab19) list_clock2_pane

0xc135,	// (0x000793ce) scroll_pane_cp10

0xd888,	// (0x0007ab21) list_single_clock2_pane_ParamLimits

0xd888,	// (0x0007ab21) list_single_clock2_pane

0xc282,	// (0x0007951b) list_highlight_pane_cp08

0xd895,	// (0x0007ab2e) list_single_clock2_pane_t1

0xd8a3,	// (0x0007ab3c) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0007ce3e) list_single_clock2_pane_t

0x2a63,	// (0x0006fcfc) bg_button_pane_cp10

0xd8b1,	// (0x0007ab4a) cell_clock2_toolbar_pane_g1

0x52ea,	// (0x00072583) aid_main_viewer_pane_g1_ParamLimits

0x52ea,	// (0x00072583) aid_main_viewer_pane_g1

0x52f8,	// (0x00072591) aid_main_viewer_pane_g2_ParamLimits

0x52f8,	// (0x00072591) aid_main_viewer_pane_g2

0x5306,	// (0x0007259f) aid_main_viewer_pane_g3_ParamLimits

0x5306,	// (0x0007259f) aid_main_viewer_pane_g3

0x5315,	// (0x000725ae) aid_main_viewer_pane_g4_ParamLimits

0x5315,	// (0x000725ae) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0007c799) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0007c799) aid_main_viewer_pane_g

0x5c29,	// (0x00072ec2) main_calc_pane_ParamLimits

0x5c3d,	// (0x00072ed6) main_dialer2_pane_ParamLimits

0x2a63,	// (0x0006fcfc) main_cam6_pane

0x2a63,	// (0x0006fcfc) main_vid6_pane

0x7ac3,	// (0x00074d5c) listscroll_gen_pane_cp06_ParamLimits

0x7ac3,	// (0x00074d5c) listscroll_gen_pane_cp06

0x7bca,	// (0x00074e63) main_clock2_pane_t5_ParamLimits

0x7bca,	// (0x00074e63) main_clock2_pane_t5

0x7c27,	// (0x00074ec0) aid_call2_pane_cp10_ParamLimits

0x7c39,	// (0x00074ed2) aid_call_pane_cp10_ParamLimits

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7c4b,	// (0x00074ee4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7c4b,	// (0x00074ee4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc1b7,	// (0x00079450) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0007cacf) popup_clock_analogue_window_cp10_g_ParamLimits

0x7c5d,	// (0x00074ef6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x854c,	// (0x000757e5) cell_dialer2_keypad_pane_g2_ParamLimits

0x854c,	// (0x000757e5) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0007cbb5) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0007cbb5) cell_dialer2_keypad_pane_g

0x8568,	// (0x00075801) cell_dialer2_keypad_pane_t1

0x90f5,	// (0x0007638e) main_cset_text2_pane_ParamLimits

0x90f5,	// (0x0007638e) main_cset_text2_pane

0xd5e1,	// (0x0007a87a) area_vitu2_query_pane_g1_ParamLimits

0x245a,	// (0x0006f6f3) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0007cd5b) area_vitu2_query_pane_g_ParamLimits

0xd665,	// (0x0007a8fe) area_vitu2_query_pane_t7_ParamLimits

0xd665,	// (0x0007a8fe) area_vitu2_query_pane_t7

0x987e,	// (0x00076b17) bg_button_pane_cp018_ParamLimits

0x988c,	// (0x00076b25) bg_button_pane_cp021_ParamLimits

0x2493,	// (0x0006f72c) bg_button_pane_cp022_ParamLimits

0x2493,	// (0x0006f72c) bg_vkb2_func_pane_cp08_ParamLimits

0x987e,	// (0x00076b17) bg_vkb2_func_pane_cp06_ParamLimits

0x988c,	// (0x00076b25) bg_vkb2_func_pane_cp07_ParamLimits

0x24a4,	// (0x0006f73d) input_focus_pane_cp09_ParamLimits

0xf10d,	// (0x0007c3a6) cam6_autofocus_pane_ParamLimits

0xf10d,	// (0x0007c3a6) cam6_autofocus_pane

0x9d85,	// (0x0007701e) cam6_image_uncrop_pane_ParamLimits

0x9d85,	// (0x0007701e) cam6_image_uncrop_pane

0x9d94,	// (0x0007702d) cam6_indi_pane_ParamLimits

0x9d94,	// (0x0007702d) cam6_indi_pane

0x9daa,	// (0x00077043) cam6_mode_pane_ParamLimits

0x9daa,	// (0x00077043) cam6_mode_pane

0x9dbc,	// (0x00077055) cam6_timer_pane_ParamLimits

0x9dbc,	// (0x00077055) cam6_timer_pane

0x9dc8,	// (0x00077061) cam6_zoom_pane_ParamLimits

0x9dc8,	// (0x00077061) cam6_zoom_pane

0x9dd4,	// (0x0007706d) cam6_mode_pane_g1_ParamLimits

0x9dd4,	// (0x0007706d) cam6_mode_pane_g1

0x9de4,	// (0x0007707d) cam6_mode_pane_g2_ParamLimits

0x9de4,	// (0x0007707d) cam6_mode_pane_g2

0x9df4,	// (0x0007708d) cam6_mode_pane_g3_ParamLimits

0x9df4,	// (0x0007708d) cam6_mode_pane_g3

0x9e04,	// (0x0007709d) cam6_mode_pane_g4_ParamLimits

0x9e04,	// (0x0007709d) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0007ce43) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0007ce43) cam6_mode_pane_g

0xd8b9,	// (0x0007ab52) bg_tb_trans_pane_cp08_ParamLimits

0xd8b9,	// (0x0007ab52) bg_tb_trans_pane_cp08

0xd8c7,	// (0x0007ab60) cam6_battery_pane_ParamLimits

0xd8c7,	// (0x0007ab60) cam6_battery_pane

0xd8dd,	// (0x0007ab76) cam6_indi_pane_g1_ParamLimits

0xd8dd,	// (0x0007ab76) cam6_indi_pane_g1

0xd8ef,	// (0x0007ab88) cam6_indi_pane_g2_ParamLimits

0xd8ef,	// (0x0007ab88) cam6_indi_pane_g2

0xd901,	// (0x0007ab9a) cam6_indi_pane_g3_ParamLimits

0xd901,	// (0x0007ab9a) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0007ce4c) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0007ce4c) cam6_indi_pane_g

0xd913,	// (0x0007abac) cam6_indi_pane_t1_ParamLimits

0xd913,	// (0x0007abac) cam6_indi_pane_t1

0x9e14,	// (0x000770ad) cam6_autofocus_pane_g1

0x9e1c,	// (0x000770b5) cam6_autofocus_pane_g2

0x9e24,	// (0x000770bd) cam6_autofocus_pane_g3

0x9e2c,	// (0x000770c5) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0007ce53) cam6_autofocus_pane_g

0xd939,	// (0x0007abd2) cam6_timer_pane_g1

0xd941,	// (0x0007abda) cam6_timer_pane_t1

0xd94f,	// (0x0007abe8) cam6_zoom_cont_pane

0xd957,	// (0x0007abf0) cam6_zoom_pane_g1

0xd95f,	// (0x0007abf8) cam6_zoom_pane_g2

0x9e34,	// (0x000770cd) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0007ce5c) cam6_zoom_pane_g

0x6d15,	// (0x00073fae) cam6_battery_pane_g1

0x6d15,	// (0x00073fae) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0007c9dc) cam6_battery_pane_g

0xd967,	// (0x0007ac00) cam6_zoom_cont_pane_g1

0xd970,	// (0x0007ac09) cam6_zoom_cont_pane_g2

0xd979,	// (0x0007ac12) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0007ce63) cam6_zoom_cont_pane_g

0x9e51,	// (0x000770ea) cam6_mode_pane_cp_ParamLimits

0x9e51,	// (0x000770ea) cam6_mode_pane_cp

0x9dc8,	// (0x00077061) cam6_zoom_pane_cp_ParamLimits

0x9dc8,	// (0x00077061) cam6_zoom_pane_cp

0x9e63,	// (0x000770fc) vid6_image_uncrop_cif_pane_ParamLimits

0x9e63,	// (0x000770fc) vid6_image_uncrop_cif_pane

0x9e73,	// (0x0007710c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9e73,	// (0x0007710c) vid6_image_uncrop_nhd_pane

0x9d85,	// (0x0007701e) vid6_image_uncrop_vga_pane_ParamLimits

0x9d85,	// (0x0007701e) vid6_image_uncrop_vga_pane

0x9e82,	// (0x0007711b) vid6_image_uncrop_wvga_pane_ParamLimits

0x9e82,	// (0x0007711b) vid6_image_uncrop_wvga_pane

0x9e91,	// (0x0007712a) vid6_indi_pane_ParamLimits

0x9e91,	// (0x0007712a) vid6_indi_pane

0xd8b9,	// (0x0007ab52) bg_tb_trans_pane_cp09_ParamLimits

0xd8b9,	// (0x0007ab52) bg_tb_trans_pane_cp09

0xd991,	// (0x0007ac2a) cam6_battery_pane_cp_ParamLimits

0xd991,	// (0x0007ac2a) cam6_battery_pane_cp

0xd99d,	// (0x0007ac36) vid6_indi_pane_g1_ParamLimits

0xd99d,	// (0x0007ac36) vid6_indi_pane_g1

0xd9af,	// (0x0007ac48) vid6_indi_pane_g2_ParamLimits

0xd9af,	// (0x0007ac48) vid6_indi_pane_g2

0xd9c1,	// (0x0007ac5a) vid6_indi_pane_g3_ParamLimits

0xd9c1,	// (0x0007ac5a) vid6_indi_pane_g3

0xd9d6,	// (0x0007ac6f) vid6_indi_pane_g4_ParamLimits

0xd9d6,	// (0x0007ac6f) vid6_indi_pane_g4

0xd9eb,	// (0x0007ac84) vid6_indi_pane_g5_ParamLimits

0xd9eb,	// (0x0007ac84) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0007ce6a) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0007ce6a) vid6_indi_pane_g

0xda05,	// (0x0007ac9e) vid6_indi_pane_t1_ParamLimits

0xda05,	// (0x0007ac9e) vid6_indi_pane_t1

0xda1b,	// (0x0007acb4) vid6_indi_pane_t2_ParamLimits

0xda1b,	// (0x0007acb4) vid6_indi_pane_t2

0xda43,	// (0x0007acdc) vid6_indi_pane_t3_ParamLimits

0xda43,	// (0x0007acdc) vid6_indi_pane_t3

0xda6b,	// (0x0007ad04) vid6_indi_pane_t4_ParamLimits

0xda6b,	// (0x0007ad04) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0007ce75) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0007ce75) vid6_indi_pane_t

0xda8f,	// (0x0007ad28) wait_bar_pane_cp08

0x9ea9,	// (0x00077142) main_cset_text2_pane_t1_ParamLimits

0x9ea9,	// (0x00077142) main_cset_text2_pane_t1

0x9e3c,	// (0x000770d5) listscroll_gen_pane_cp06_t1_ParamLimits

0x9e3c,	// (0x000770d5) listscroll_gen_pane_cp06_t1

0x2a63,	// (0x0006fcfc) main_cam6_set_pane

0x738f,	// (0x00074628) bg_tb_trans_pane_cp06_ParamLimits

0x89f0,	// (0x00075c89) cam4_indicators_pane_g1_ParamLimits

0x89fd,	// (0x00075c96) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0007cbe9) cam4_indicators_pane_g_ParamLimits

0x8a15,	// (0x00075cae) cam4_indicators_pane_t1_ParamLimits

0xd0d1,	// (0x0007a36a) bg_tb_trans_pane_cp07_ParamLimits

0x89f0,	// (0x00075c89) vid4_indicators_pane_g1_ParamLimits

0x8af5,	// (0x00075d8e) vid4_indicators_pane_g2_ParamLimits

0x8b02,	// (0x00075d9b) vid4_indicators_pane_g3_ParamLimits

0x8b0f,	// (0x00075da8) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0007cbfb) vid4_indicators_pane_g_ParamLimits

0x8b1b,	// (0x00075db4) vid4_indicators_pane_t1_ParamLimits

0xf06f,	// (0x0007c308) vid4_progress_pane_g1_ParamLimits

0xf07b,	// (0x0007c314) vid4_progress_pane_g2_ParamLimits

0xf087,	// (0x0007c320) vid4_progress_pane_g3_ParamLimits

0xf096,	// (0x0007c32f) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0007cda6) vid4_progress_pane_g_ParamLimits

0xf0b4,	// (0x0007c34d) vid4_progress_pane_t1_ParamLimits

0xf0ca,	// (0x0007c363) vid4_progress_pane_t2_ParamLimits

0xf0e0,	// (0x0007c379) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0007cdb1) vid4_progress_pane_t_ParamLimits

0xf0f5,	// (0x0007c38e) wait_bar_pane_cp07_ParamLimits

0x9ec9,	// (0x00077162) main_cam6_set_pane_g2_ParamLimits

0x9ec9,	// (0x00077162) main_cam6_set_pane_g2

0x9eed,	// (0x00077186) main_cset6_listscroll_pane_ParamLimits

0x9eed,	// (0x00077186) main_cset6_listscroll_pane

0x9f09,	// (0x000771a2) main_cset6_slider_pane_ParamLimits

0x9f09,	// (0x000771a2) main_cset6_slider_pane

0x9f1f,	// (0x000771b8) main_cset6_text2_pane_ParamLimits

0x9f1f,	// (0x000771b8) main_cset6_text2_pane

0xda9e,	// (0x0007ad37) main_cset6_text_pane

0xdaa6,	// (0x0007ad3f) main_cset_list_pane_copy1_ParamLimits

0xdaa6,	// (0x0007ad3f) main_cset_list_pane_copy1

0xdab6,	// (0x0007ad4f) scroll_pane_cp028_copy1

0x9f2d,	// (0x000771c6) cset_list_set_pane_copy1

0x9f40,	// (0x000771d9) aid_position_infowindow_above_copy1

0x9f48,	// (0x000771e1) aid_position_infowindow_below_copy1

0xf11b,	// (0x0007c3b4) cset_list_set_pane_g1_copy1

0x238c,	// (0x0006f625) cset_list_set_pane_g3_copy1_ParamLimits

0x238c,	// (0x0006f625) cset_list_set_pane_g3_copy1

0x239b,	// (0x0006f634) cset_list_set_pane_t1_copy1_ParamLimits

0x239b,	// (0x0006f634) cset_list_set_pane_t1_copy1

0x1201,	// (0x0006e49a) list_highlight_pane_cp021_copy1_ParamLimits

0x1201,	// (0x0006e49a) list_highlight_pane_cp021_copy1

0xdabf,	// (0x0007ad58) cset6_slider_pane_ParamLimits

0xdabf,	// (0x0007ad58) cset6_slider_pane

0xdaeb,	// (0x0007ad84) main_cset6_slider_pane_g1_ParamLimits

0xdaeb,	// (0x0007ad84) main_cset6_slider_pane_g1

0x9f50,	// (0x000771e9) main_cset6_slider_pane_g2_ParamLimits

0x9f50,	// (0x000771e9) main_cset6_slider_pane_g2

0xd29a,	// (0x0007a533) main_cset6_slider_pane_g3_ParamLimits

0xd29a,	// (0x0007a533) main_cset6_slider_pane_g3

0x91ba,	// (0x00076453) main_cset6_slider_pane_g4_ParamLimits

0x91ba,	// (0x00076453) main_cset6_slider_pane_g4

0x9202,	// (0x0007649b) main_cset6_slider_pane_g5_ParamLimits

0x9202,	// (0x0007649b) main_cset6_slider_pane_g5

0xd29a,	// (0x0007a533) main_cset6_slider_pane_g7_ParamLimits

0xd29a,	// (0x0007a533) main_cset6_slider_pane_g7

0xd2a6,	// (0x0007a53f) main_cset6_slider_pane_g8_ParamLimits

0xd2a6,	// (0x0007a53f) main_cset6_slider_pane_g8

0x91a2,	// (0x0007643b) main_cset6_slider_pane_g9_ParamLimits

0x91a2,	// (0x0007643b) main_cset6_slider_pane_g9

0x91ae,	// (0x00076447) main_cset6_slider_pane_g10_ParamLimits

0x91ae,	// (0x00076447) main_cset6_slider_pane_g10

0x91ba,	// (0x00076453) main_cset6_slider_pane_g11_ParamLimits

0x91ba,	// (0x00076453) main_cset6_slider_pane_g11

0x91c6,	// (0x0007645f) main_cset6_slider_pane_g12_ParamLimits

0x91c6,	// (0x0007645f) main_cset6_slider_pane_g12

0x91d2,	// (0x0007646b) main_cset6_slider_pane_g13_ParamLimits

0x91d2,	// (0x0007646b) main_cset6_slider_pane_g13

0x91de,	// (0x00076477) main_cset6_slider_pane_g14_ParamLimits

0x91de,	// (0x00076477) main_cset6_slider_pane_g14

0x9f78,	// (0x00077211) main_cset6_slider_pane_g15_ParamLimits

0x9f78,	// (0x00077211) main_cset6_slider_pane_g15

0x9202,	// (0x0007649b) main_cset6_slider_pane_g16_ParamLimits

0x9202,	// (0x0007649b) main_cset6_slider_pane_g16

0x920e,	// (0x000764a7) main_cset6_slider_pane_g17_ParamLimits

0x920e,	// (0x000764a7) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0007ce7e) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0007ce7e) main_cset6_slider_pane_g

0xdb13,	// (0x0007adac) main_cset6_slider_pane_t1_ParamLimits

0xdb13,	// (0x0007adac) main_cset6_slider_pane_t1

0x9f90,	// (0x00077229) main_cset6_slider_pane_t2_ParamLimits

0x9f90,	// (0x00077229) main_cset6_slider_pane_t2

0x9fbb,	// (0x00077254) main_cset6_slider_pane_t3_ParamLimits

0x9fbb,	// (0x00077254) main_cset6_slider_pane_t3

0x9fe6,	// (0x0007727f) main_cset6_slider_pane_t4_ParamLimits

0x9fe6,	// (0x0007727f) main_cset6_slider_pane_t4

0xa011,	// (0x000772aa) main_cset6_slider_pane_t5_ParamLimits

0xa011,	// (0x000772aa) main_cset6_slider_pane_t5

0xdb54,	// (0x0007aded) main_cset6_slider_pane_t7_ParamLimits

0xdb54,	// (0x0007aded) main_cset6_slider_pane_t7

0xa03c,	// (0x000772d5) main_cset6_slider_pane_t8_ParamLimits

0xa03c,	// (0x000772d5) main_cset6_slider_pane_t8

0xa060,	// (0x000772f9) main_cset6_slider_pane_t9_ParamLimits

0xa060,	// (0x000772f9) main_cset6_slider_pane_t9

0xa084,	// (0x0007731d) main_cset6_slider_pane_t10_ParamLimits

0xa084,	// (0x0007731d) main_cset6_slider_pane_t10

0xa0a8,	// (0x00077341) main_cset6_slider_pane_t11_ParamLimits

0xa0a8,	// (0x00077341) main_cset6_slider_pane_t11

0xdb8a,	// (0x0007ae23) main_cset6_slider_pane_t14_ParamLimits

0xdb8a,	// (0x0007ae23) main_cset6_slider_pane_t14

0xdbc3,	// (0x0007ae5c) main_cset6_slider_pane_t15_ParamLimits

0xdbc3,	// (0x0007ae5c) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0007cea3) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0007cea3) main_cset6_slider_pane_t

0xd35e,	// (0x0007a5f7) cset_slider_pane_g1_copy1

0xd367,	// (0x0007a600) cset_slider_pane_g2_copy1

0xd370,	// (0x0007a609) cset_slider_pane_g3_copy1

0x2a63,	// (0x0006fcfc) bg_popup_sub_pane_cp011_copy1

0xd411,	// (0x0007a6aa) main_cset_text_pane_g1_copy1

0xd419,	// (0x0007a6b2) main_cset_text_pane_t1_copy1

0xd427,	// (0x0007a6c0) main_cset_text_pane_t2_copy1

0xd435,	// (0x0007a6ce) main_cset_text_pane_t3_copy1

0xd443,	// (0x0007a6dc) main_cset_text_pane_t4_copy1

0xd451,	// (0x0007a6ea) main_cset_text_pane_t5_copy1

0xd45f,	// (0x0007a6f8) main_cset_text_pane_t6_copy1

0xd46d,	// (0x0007a706) main_cset_text_pane_t7_copy1

0x9ea9,	// (0x00077142) main_cset_text2_pane_t1_copy1

0x2a63,	// (0x0006fcfc) main_ncimui_pane

0x5e73,	// (0x0007310c) popup_query_ncimui_window_ParamLimits

0x5e73,	// (0x0007310c) popup_query_ncimui_window

0xed7e,	// (0x0007c017) field_cale_ev2_pane_g4_ParamLimits

0xed7e,	// (0x0007c017) field_cale_ev2_pane_g4

0x8424,	// (0x000756bd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8424,	// (0x000756bd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0007cb90) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0007cb90) cell_video_dialer_keypad_pane_g

0x843c,	// (0x000756d5) cell_video_dialer_keypad_pane_t1

0x2a63,	// (0x0006fcfc) bg_popup_window_pane_cp012

0xc005,	// (0x0007929e) heading_pane_cp06

0xdceb,	// (0x0007af84) ncim_query_content_pane

0x2a63,	// (0x0006fcfc) bg_popup_heading_pane_cp01

0xdcf3,	// (0x0007af8c) ncim_heading_pane_t1

0xdd01,	// (0x0007af9a) ncim_indicator_popup_pane

0xdd13,	// (0x0007afac) ncim_query_button_pane

0xdd27,	// (0x0007afc0) ncim_query_content_pane_t1

0xdd39,	// (0x0007afd2) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0007cee2) ncim_query_content_pane_t

0xdd73,	// (0x0007b00c) ncim_query_list_pane

0xdd85,	// (0x0007b01e) ncim_query_popup_pane

0xdd01,	// (0x0007af9a) ncim_indicator_popup_pane_ParamLimits

0xa192,	// (0x0007742b) ncim_query_content_pane_g1_ParamLimits

0xa192,	// (0x0007742b) ncim_query_content_pane_g1

0xdd27,	// (0x0007afc0) ncim_query_content_pane_t1_ParamLimits

0xdd39,	// (0x0007afd2) ncim_query_content_pane_t2_ParamLimits

0xa19e,	// (0x00077437) ncim_query_content_pane_t3_ParamLimits

0xa19e,	// (0x00077437) ncim_query_content_pane_t3

0xa1c6,	// (0x0007745f) ncim_query_content_pane_t4_ParamLimits

0xa1c6,	// (0x0007745f) ncim_query_content_pane_t4

0xa1ee,	// (0x00077487) ncim_query_content_pane_t5_ParamLimits

0xa1ee,	// (0x00077487) ncim_query_content_pane_t5

0xdd4b,	// (0x0007afe4) ncim_query_content_pane_t6_ParamLimits

0xdd4b,	// (0x0007afe4) ncim_query_content_pane_t6

0xfc49,	// (0x0007cee2) ncim_query_content_pane_t_ParamLimits

0xdd73,	// (0x0007b00c) ncim_query_list_pane_ParamLimits

0xdd85,	// (0x0007b01e) ncim_query_popup_pane_ParamLimits

0xdd99,	// (0x0007b032) wait_bar_pane_cp04

0x2a63,	// (0x0006fcfc) input_focus_pane_cp011

0xdda1,	// (0x0007b03a) ncim_query_popup_pane_t1

0xddaf,	// (0x0007b048) ncim_list_query_list_pane_ParamLimits

0xddaf,	// (0x0007b048) ncim_list_query_list_pane

0x2a63,	// (0x0006fcfc) bg_button_pane_cp027

0xddc2,	// (0x0007b05b) ncim_query_button_pane_g1

0x2a63,	// (0x0006fcfc) list_highlight_pane_cp012

0xddcc,	// (0x0007b065) ncim_list_query_list_pane_g1

0xddd4,	// (0x0007b06d) ncim_list_query_list_pane_t1

0x8a09,	// (0x00075ca2) cam4_indicators_pane_g3_ParamLimits

0x8a09,	// (0x00075ca2) cam4_indicators_pane_g3

0x8a09,	// (0x00075ca2) vid4_indicators_pane_g5_ParamLimits

0x8a09,	// (0x00075ca2) vid4_indicators_pane_g5

0xf0a5,	// (0x0007c33e) vid4_progress_pane_g5_ParamLimits

0xf0a5,	// (0x0007c33e) vid4_progress_pane_g5

0xa0da,	// (0x00077373) main_ncimui_pane_g1

0xa120,	// (0x000773b9) ncimui_group_query_pane_ParamLimits

0xa120,	// (0x000773b9) ncimui_group_query_pane

0xa154,	// (0x000773ed) ncimui_list_pane_ParamLimits

0xa154,	// (0x000773ed) ncimui_list_pane

0xa16e,	// (0x00077407) ncimui_text_pane_ParamLimits

0xa16e,	// (0x00077407) ncimui_text_pane

0xa216,	// (0x000774af) ncimui_text_pane_t1_ParamLimits

0xa216,	// (0x000774af) ncimui_text_pane_t1

0xdde2,	// (0x0007b07b) ncimui_list_single_graphic_pane_ParamLimits

0xdde2,	// (0x0007b07b) ncimui_list_single_graphic_pane

0xa233,	// (0x000774cc) ncimui_query_pane_ParamLimits

0xa233,	// (0x000774cc) ncimui_query_pane

0x2a63,	// (0x0006fcfc) list_highlight_pane_cp013

0xddf2,	// (0x0007b08b) ncim_list_query_list_pane_t1_copy1

0xddcc,	// (0x0007b065) ncim_list_single_graphic_pane_g1

0xde00,	// (0x0007b099) ncim_query_button_pane_cp01

0xde08,	// (0x0007b0a1) ncim_query_entry_pane_ParamLimits

0xde08,	// (0x0007b0a1) ncim_query_entry_pane

0xde18,	// (0x0007b0b1) ncimui_query_pane_g1

0xde20,	// (0x0007b0b9) ncimui_query_pane_t1_ParamLimits

0xde20,	// (0x0007b0b9) ncimui_query_pane_t1

0x2a63,	// (0x0006fcfc) input_focus_pane_cp012

0xdda1,	// (0x0007b03a) ncim_query_entry_pane_t1

0xb514,	// (0x000787ad) main_im_pane_ParamLimits

0x1201,	// (0x0006e49a) main_mobtv_pane_ParamLimits

0x1201,	// (0x0006e49a) main_mobtv_pane

0x91a2,	// (0x0007643b) main_cset6_slider_pane_g18_ParamLimits

0x91a2,	// (0x0007643b) main_cset6_slider_pane_g18

0x91d2,	// (0x0007646b) main_cset6_slider_pane_g19_ParamLimits

0x91d2,	// (0x0007646b) main_cset6_slider_pane_g19

0xde36,	// (0x0007b0cf) bg_main_mobtv_pane_ParamLimits

0xde36,	// (0x0007b0cf) bg_main_mobtv_pane

0xa243,	// (0x000774dc) main_mobtv_info_pane

0xa24c,	// (0x000774e5) main_mobtv_loading_pane_ParamLimits

0xa24c,	// (0x000774e5) main_mobtv_loading_pane

0xde44,	// (0x0007b0dd) main_mobtv_pg_channel_list_pane

0xde4e,	// (0x0007b0e7) main_mobtv_pg_hdr_pane

0xa259,	// (0x000774f2) main_mobtv_programe_curr_pane_ParamLimits

0xa259,	// (0x000774f2) main_mobtv_programe_curr_pane

0xa266,	// (0x000774ff) main_mobtv_programe_next_pane_ParamLimits

0xa266,	// (0x000774ff) main_mobtv_programe_next_pane

0xde57,	// (0x0007b0f0) popup_mobtv_noti_window

0x6d15,	// (0x00073fae) main_tv_pg_hdr_pane_g1

0xde5f,	// (0x0007b0f8) main_tv_pg_hdr_pane_g2

0xde67,	// (0x0007b100) main_tv_pg_hdr_pane_g3

0xde6f,	// (0x0007b108) main_tv_pg_hdr_pane_g4

0xde77,	// (0x0007b110) main_tv_pg_hdr_pane_g5

0xde81,	// (0x0007b11a) main_tv_pg_hdr_pane_g6

0xde8b,	// (0x0007b124) main_tv_pg_hdr_pane_g7

0xde95,	// (0x0007b12e) main_tv_pg_hdr_pane_g8

0xde9f,	// (0x0007b138) main_tv_pg_hdr_pane_g9

0xdea9,	// (0x0007b142) main_tv_pg_hdr_pane_g10

0xdeb3,	// (0x0007b14c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0007ceef) main_tv_pg_hdr_pane_g

0xdebd,	// (0x0007b156) main_tv_pg_hdr_pane_t1

0xdecb,	// (0x0007b164) main_tv_pg_hdr_pane_t2

0xded9,	// (0x0007b172) main_tv_pg_hdr_pane_t3

0xdee9,	// (0x0007b182) main_tv_pg_hdr_pane_t4

0xdef9,	// (0x0007b192) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0007cf06) main_tv_pg_hdr_pane_t

0xdf09,	// (0x0007b1a2) single_mobtv_pg_channel_pane_ParamLimits

0xdf09,	// (0x0007b1a2) single_mobtv_pg_channel_pane

0xdf1b,	// (0x0007b1b4) single_mobtv_pg_channel_table_pane

0xdf24,	// (0x0007b1bd) single_mobtv_pg_channel_thumb_pane

0xdf2d,	// (0x0007b1c6) single_tv_pg_channel_pane_g1

0xdf36,	// (0x0007b1cf) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0007cf11) single_tv_pg_channel_pane_g

0x6fe9,	// (0x00074282) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x6fe9,	// (0x00074282) bg_single_mobtv_pg_channel_thumb_pane

0xdf3f,	// (0x0007b1d8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf3f,	// (0x0007b1d8) single_mobtv_pg_channel_thumb_pane_g1

0xdf4d,	// (0x0007b1e6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf4d,	// (0x0007b1e6) single_mobtv_pg_channel_thumb_pane_g2

0xdf59,	// (0x0007b1f2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf59,	// (0x0007b1f2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0007cf16) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0007cf16) single_mobtv_pg_channel_thumb_pane_g

0xdf65,	// (0x0007b1fe) single_mobtv_pg_channel_thumb_pane_t1

0xdf73,	// (0x0007b20c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0007cf1d) single_mobtv_pg_channel_thumb_pane_t

0x6d15,	// (0x00073fae) bg_single_mobtv_pg_channel_table_pane_g1

0x6d15,	// (0x00073fae) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0007c9dc) bg_single_mobtv_pg_channel_table_pane_g

0xdf81,	// (0x0007b21a) single_mobtv_pg_channel_table_pane_t1

0xdf8f,	// (0x0007b228) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0007cf22) single_mobtv_pg_channel_table_pane_t

0xa27b,	// (0x00077514) main_mobtv_info_pane_g1_ParamLimits

0xa27b,	// (0x00077514) main_mobtv_info_pane_g1

0xa299,	// (0x00077532) main_mobtv_info_pane_t1_ParamLimits

0xa299,	// (0x00077532) main_mobtv_info_pane_t1

0xa311,	// (0x000775aa) main_mobtv_info_pane_t2_ParamLimits

0xa311,	// (0x000775aa) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0007cf2c) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0007cf2c) main_mobtv_info_pane_t

0xa3a0,	// (0x00077639) wait_bar_pane_cp05

0xa3b2,	// (0x0007764b) main_mobtv_loading_pane_g1_ParamLimits

0xa3b2,	// (0x0007764b) main_mobtv_loading_pane_g1

0xa3c5,	// (0x0007765e) main_mobtv_loading_pane_g2_ParamLimits

0xa3c5,	// (0x0007765e) main_mobtv_loading_pane_g2

0xa3d1,	// (0x0007766a) main_mobtv_loading_pane_g3_ParamLimits

0xa3d1,	// (0x0007766a) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0007cf33) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0007cf33) main_mobtv_loading_pane_g

0xdf9d,	// (0x0007b236) main_mobtv_loading_pane_t1_ParamLimits

0xdf9d,	// (0x0007b236) main_mobtv_loading_pane_t1

0xdfb5,	// (0x0007b24e) main_mobtv_loading_pane_t2_ParamLimits

0xdfb5,	// (0x0007b24e) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0007cf3a) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0007cf3a) main_mobtv_loading_pane_t

0xa3e4,	// (0x0007767d) wait_bar_pane_cp06_ParamLimits

0xa3e4,	// (0x0007767d) wait_bar_pane_cp06

0xdfd9,	// (0x0007b272) main_mobtv_programe_curr_pane_t1

0xdfe7,	// (0x0007b280) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0007cf3f) main_mobtv_programe_curr_pane_t

0xdff5,	// (0x0007b28e) main_mobtv_programe_next_pane_t1

0xe003,	// (0x0007b29c) main_mobtv_programe_next_pane_t2

0xe011,	// (0x0007b2aa) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0007cf44) main_mobtv_programe_next_pane_t

0x2a63,	// (0x0006fcfc) bg_popup_mobtv_noti_window_pane

0xe01f,	// (0x0007b2b8) popup_mobtv_noti_window_g1

0xe027,	// (0x0007b2c0) popup_mobtv_noti_window_t1

0xe035,	// (0x0007b2ce) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0007cf4b) popup_mobtv_noti_window_t

0x6d15,	// (0x00073fae) bg_popup_mobtv_noti_window_pane_g1

0x2a63,	// (0x0006fcfc) sc_clock_pane

0x2a63,	// (0x0006fcfc) main_fs_bigclock_pane

0x9bfa,	// (0x00076e93) blid2_tripm_pane_t4_ParamLimits

0x9bfa,	// (0x00076e93) blid2_tripm_pane_t4

0xa3f3,	// (0x0007768c) sc_clock_pane_g1_ParamLimits

0xa3f3,	// (0x0007768c) sc_clock_pane_g1

0xa405,	// (0x0007769e) sc_clock_pane_t1_ParamLimits

0xa405,	// (0x0007769e) sc_clock_pane_t1

0xa427,	// (0x000776c0) sc_clock_pane_t2_ParamLimits

0xa427,	// (0x000776c0) sc_clock_pane_t2

0xa43f,	// (0x000776d8) sc_clock_pane_t3_ParamLimits

0xa43f,	// (0x000776d8) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0007cf50) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0007cf50) sc_clock_pane_t

0xace1,	// (0x00077f7a) main_fs_bigclock_indicator_pane_ParamLimits

0xace1,	// (0x00077f7a) main_fs_bigclock_indicator_pane

0x6f7c,	// (0x00074215) main_fs_bigclock_pane_g1_ParamLimits

0x6f7c,	// (0x00074215) main_fs_bigclock_pane_g1

0xaced,	// (0x00077f86) main_fs_bigclock_pane_t1_ParamLimits

0xaced,	// (0x00077f86) main_fs_bigclock_pane_t1

0xacff,	// (0x00077f98) main_fs_bigclock_pane_t2_ParamLimits

0xacff,	// (0x00077f98) main_fs_bigclock_pane_t2

0xad11,	// (0x00077faa) main_fs_bigclock_pane_t3_ParamLimits

0xad11,	// (0x00077faa) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0007d14f) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0007d14f) main_fs_bigclock_pane_t

0xec27,	// (0x0007bec0) main_fs_bigclock_indicator_pane_g1

0xdd1b,	// (0x0007afb4) ncim_query_content_pane_g2_ParamLimits

0xdd1b,	// (0x0007afb4) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0007cedd) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0007cedd) ncim_query_content_pane_g

0xa456,	// (0x000776ef) sc_clock_pane_t4_ParamLimits

0xa456,	// (0x000776ef) sc_clock_pane_t4

0x1201,	// (0x0006e49a) main_radioblah_pane

0xd073,	// (0x0007a30c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd073,	// (0x0007a30c) cell_call4_button_pane_t1_copy1

0xa0e2,	// (0x0007737b) main_ncimui_pane_t1_ParamLimits

0xa0e2,	// (0x0007737b) main_ncimui_pane_t1

0xa0f4,	// (0x0007738d) main_ncimui_pane_t2_ParamLimits

0xa0f4,	// (0x0007738d) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0007ced6) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0007ced6) main_ncimui_pane_t

0xe165,	// (0x0007b3fe) main_radioblah_anim_pane_ParamLimits

0xe165,	// (0x0007b3fe) main_radioblah_anim_pane

0xe176,	// (0x0007b40f) main_radioblah_info_pane_ParamLimits

0xe176,	// (0x0007b40f) main_radioblah_info_pane

0xe18a,	// (0x0007b423) main_radioblah_pane_t1_ParamLimits

0xe18a,	// (0x0007b423) main_radioblah_pane_t1

0xe1a6,	// (0x0007b43f) main_radioblah_pane_t2_ParamLimits

0xe1a6,	// (0x0007b43f) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0007cf71) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0007cf71) main_radioblah_pane_t

0xa4ff,	// (0x00077798) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa4ff,	// (0x00077798) main_radioblah_rocker_ctrl_pane

0xe1ee,	// (0x0007b487) main_radioblah_info_pane_t1_ParamLimits

0xe1ee,	// (0x0007b487) main_radioblah_info_pane_t1

0xa557,	// (0x000777f0) main_radioblah_info_pane_t2_ParamLimits

0xa557,	// (0x000777f0) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0007cf7a) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0007cf7a) main_radioblah_info_pane_t

0x6d15,	// (0x00073fae) main_radioblah_rocker_ctrl_pane_g1

0xa609,	// (0x000778a2) main_radioblah_rocker_ctrl_pane_g2

0xa611,	// (0x000778aa) main_radioblah_rocker_ctrl_pane_g3

0xa619,	// (0x000778b2) main_radioblah_rocker_ctrl_pane_g4

0xa621,	// (0x000778ba) main_radioblah_rocker_ctrl_pane_g5

0xa629,	// (0x000778c2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0007cf83) main_radioblah_rocker_ctrl_pane_g

0x9ea9,	// (0x00077142) main_cset_text2_pane_t1_copy1_ParamLimits

0xefeb,	// (0x0007c284) cam4_image_uncrop_qvga_pane

0xeffb,	// (0x0007c294) vid4_image_uncrop_qcif_pane

0xf10d,	// (0x0007c3a6) cam6_image_uncrop_qvga_pane_ParamLimits

0xf10d,	// (0x0007c3a6) cam6_image_uncrop_qvga_pane

0xd981,	// (0x0007ac1a) vid6_image_uncrop_qcif_pane_ParamLimits

0xd981,	// (0x0007ac1a) vid6_image_uncrop_qcif_pane

0x2a63,	// (0x0006fcfc) bg_popup_preview_window_pane_cp03

0xdccd,	// (0x0007af66) list_cset_text2_pane

0xdcd5,	// (0x0007af6e) main_cset6_text2_pane_g1

0xdcdd,	// (0x0007af76) main_cset6_text2_pane_t1

0xa631,	// (0x000778ca) list_cset_text2_pane_t1_ParamLimits

0xa631,	// (0x000778ca) list_cset_text2_pane_t1

0x1201,	// (0x0006e49a) main_radioblah_pane_ParamLimits

0xa38c,	// (0x00077625) main_mobtv_info_pane_t3_ParamLimits

0xa38c,	// (0x00077625) main_mobtv_info_pane_t3

0xa4ed,	// (0x00077786) main_radioblah_pane_g1

0xa527,	// (0x000777c0) main_radioblah_info_pane_g1

0xa5ae,	// (0x00077847) main_radioblah_info_pane_t3_ParamLimits

0xa5ae,	// (0x00077847) main_radioblah_info_pane_t3

0x48fd,	// (0x00071b96) highlight_cell_cale_month_pane_ParamLimits

0x48fd,	// (0x00071b96) highlight_cell_cale_month_pane

0x2a63,	// (0x0006fcfc) main_phob_fisheye_pane

0x78b1,	// (0x00074b4a) scroll_pane_cp0031_ParamLimits

0x78b1,	// (0x00074b4a) scroll_pane_cp0031

0xda8f,	// (0x0007ad28) wait_bar_pane_cp08_ParamLimits

0x9f2d,	// (0x000771c6) cset_list_set_pane_copy1_ParamLimits

0xe228,	// (0x0007b4c1) highlight_cell_cale_month_pane_g1

0xa64e,	// (0x000778e7) highlight_cell_cale_month_pane_t1

0xd6d1,	// (0x0007a96a) list_gen_pane_cp01

0xd285,	// (0x0007a51e) scroll_pane_01

0x12d1,	// (0x0006e56a) list_single_double_fisheye_pane

0x24b5,	// (0x0006f74e) list_double_fisheye_pane_g1_ParamLimits

0x24b5,	// (0x0006f74e) list_double_fisheye_pane_g1

0x24c1,	// (0x0006f75a) list_double_fisheye_pane_g2_ParamLimits

0x24c1,	// (0x0006f75a) list_double_fisheye_pane_g2

0xa65c,	// (0x000778f5) list_double_fisheye_pane_g3_ParamLimits

0xa65c,	// (0x000778f5) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0007cf90) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0007cf90) list_double_fisheye_pane_g

0x24f2,	// (0x0006f78b) list_double_fisheye_pane_t1_ParamLimits

0x24f2,	// (0x0006f78b) list_double_fisheye_pane_t1

0x250d,	// (0x0006f7a6) list_double_fisheye_pane_t2_ParamLimits

0x250d,	// (0x0006f7a6) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0007cf9b) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0007cf9b) list_double_fisheye_pane_t

0x2a63,	// (0x0006fcfc) main_call5_pane

0xa481,	// (0x0007771a) sc_swipe_pane_ParamLimits

0xa481,	// (0x0007771a) sc_swipe_pane

0xa67b,	// (0x00077914) call5_image_pane_ParamLimits

0xa67b,	// (0x00077914) call5_image_pane

0xa698,	// (0x00077931) call5_swipe_1_pane_ParamLimits

0xa698,	// (0x00077931) call5_swipe_1_pane

0xa6ab,	// (0x00077944) call5_swipe_2_pane_ParamLimits

0xa6ab,	// (0x00077944) call5_swipe_2_pane

0xa6d6,	// (0x0007796f) popup_call5_audio_first_window_ParamLimits

0xa6d6,	// (0x0007796f) popup_call5_audio_first_window

0x6fe9,	// (0x00074282) call5_swipe_1_pane_g1_ParamLimits

0x6fe9,	// (0x00074282) call5_swipe_1_pane_g1

0xe230,	// (0x0007b4c9) call5_swipe_1_pane_g2_ParamLimits

0xe230,	// (0x0007b4c9) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0007cfa0) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0007cfa0) call5_swipe_1_pane_g

0xe23c,	// (0x0007b4d5) call5_swipe_1_pane_t1_ParamLimits

0xe23c,	// (0x0007b4d5) call5_swipe_1_pane_t1

0x6fe9,	// (0x00074282) call5_swipe_2_pane_g1_ParamLimits

0x6fe9,	// (0x00074282) call5_swipe_2_pane_g1

0xe251,	// (0x0007b4ea) call5_swipe_2_pane_g2_ParamLimits

0xe251,	// (0x0007b4ea) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0007cfa5) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0007cfa5) call5_swipe_2_pane_g

0xe25d,	// (0x0007b4f6) call5_swipe_2_pane_t1_ParamLimits

0xe25d,	// (0x0007b4f6) call5_swipe_2_pane_t1

0xe272,	// (0x0007b50b) sc_swipe_pane_g1_ParamLimits

0xe272,	// (0x0007b50b) sc_swipe_pane_g1

0xe27f,	// (0x0007b518) sc_swipe_pane_g2_ParamLimits

0xe27f,	// (0x0007b518) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0007cfaa) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0007cfaa) sc_swipe_pane_g

0xe28b,	// (0x0007b524) sc_swipe_pane_t1_ParamLimits

0xe28b,	// (0x0007b524) sc_swipe_pane_t1

0x2a63,	// (0x0006fcfc) main_cmail_launcher_pane

0xa6e7,	// (0x00077980) aid_size_cell_cmail_l_ParamLimits

0xa6e7,	// (0x00077980) aid_size_cell_cmail_l

0xa701,	// (0x0007799a) grid_cmail_l_pane_ParamLimits

0xa701,	// (0x0007799a) grid_cmail_l_pane

0xa71c,	// (0x000779b5) cell_cmail_l_pane_ParamLimits

0xa71c,	// (0x000779b5) cell_cmail_l_pane

0xa742,	// (0x000779db) cell_cmail_l_pane_g1_ParamLimits

0xa742,	// (0x000779db) cell_cmail_l_pane_g1

0xa74e,	// (0x000779e7) cell_cmail_l_pane_t1_ParamLimits

0xa74e,	// (0x000779e7) cell_cmail_l_pane_t1

0xe2a0,	// (0x0007b539) cell_cmail_l_pane_t2_ParamLimits

0xe2a0,	// (0x0007b539) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0007cfaf) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0007cfaf) cell_cmail_l_pane_t

0x1201,	// (0x0006e49a) grid_highlight_pane_cp018_ParamLimits

0x1201,	// (0x0006e49a) grid_highlight_pane_cp018

0x2b7f,	// (0x0006fe18) main2_pane_ParamLimits

0x2b7f,	// (0x0006fe18) main2_pane

0xb5ed,	// (0x00078886) popup_sp_fs_action_menu_bg_pane_g1

0xb5f5,	// (0x0007888e) popup_sp_fs_action_menu_bg_pane_g2

0xb5fd,	// (0x00078896) popup_sp_fs_action_menu_bg_pane_g3

0xb605,	// (0x0007889e) popup_sp_fs_action_menu_bg_pane_g4

0xb60d,	// (0x000788a6) popup_sp_fs_action_menu_bg_pane_g5

0xb615,	// (0x000788ae) popup_sp_fs_action_menu_bg_pane_g6

0xb61d,	// (0x000788b6) popup_sp_fs_action_menu_bg_pane_g7

0xb625,	// (0x000788be) popup_sp_fs_action_menu_bg_pane_g8

0xb62d,	// (0x000788c6) popup_sp_fs_action_menu_bg_pane_g9

0xb635,	// (0x000788ce) popup_sp_fs_action_menu_bg_pane_g10

0xb635,	// (0x000788ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0007c488) popup_sp_fs_action_menu_bg_pane_g

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g3_g1

0xb82b,	// (0x00078ac4) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_t3_g3_g2

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0007c538) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0007c538) list_medium_line_x2_t3_g3_g

0xb843,	// (0x00078adc) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb843,	// (0x00078adc) list_medium_line_x2_t3_g3_t1

0x2135,	// (0x0006f3ce) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2135,	// (0x0006f3ce) list_medium_line_x2_t3_g3_t2

0xb858,	// (0x00078af1) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0007c53f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0007c53f) list_medium_line_x2_t3_g3_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g2_g1

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0007c546) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0007c546) list_medium_line_x2_t3_g2_g

0xb86d,	// (0x00078b06) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb86d,	// (0x00078b06) list_medium_line_x2_t3_g2_t1

0xb883,	// (0x00078b1c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb883,	// (0x00078b1c) list_medium_line_x2_t3_g2_t2

0xb895,	// (0x00078b2e) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb895,	// (0x00078b2e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0007c54b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0007c54b) list_medium_line_x2_t3_g2_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t4_g4_g1

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t4_g4_g2

0xb82b,	// (0x00078ac4) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_t4_g4_g3

0xb8bf,	// (0x00078b58) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb8bf,	// (0x00078b58) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0007c552) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0007c552) list_medium_line_x2_t4_g4_g

0x2149,	// (0x0006f3e2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2149,	// (0x0006f3e2) list_medium_line_x2_t4_g4_t1

0x2160,	// (0x0006f3f9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2160,	// (0x0006f3f9) list_medium_line_x2_t4_g4_t2

0x2175,	// (0x0006f40e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2175,	// (0x0006f40e) list_medium_line_x2_t4_g4_t3

0xb8cb,	// (0x00078b64) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb8cb,	// (0x00078b64) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0007c55b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0007c55b) list_medium_line_x2_t4_g4_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g4_g1

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t2_g4_g2

0xb82b,	// (0x00078ac4) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_t2_g4_g3

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0007c5c2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0007c5c2) list_medium_line_x2_t2_g4_g

0xbbbb,	// (0x00078e54) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbbbb,	// (0x00078e54) list_medium_line_x2_t2_g4_t1

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0007c5cb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0007c5cb) list_medium_line_x2_t2_g4_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g3_g1

0xb82b,	// (0x00078ac4) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_t2_g3_g2

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0007c538) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0007c538) list_medium_line_x2_t2_g3_g

0xbbd0,	// (0x00078e69) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbbd0,	// (0x00078e69) list_medium_line_x2_t2_g3_t1

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0007c5d0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0007c5d0) list_medium_line_x2_t2_g3_t

0x4ae3,	// (0x00071d7c) main_sp_fs_list_pane_ParamLimits

0x4ae3,	// (0x00071d7c) main_sp_fs_list_pane

0x4aef,	// (0x00071d88) sp_fs_scroll_pane_ParamLimits

0x4aef,	// (0x00071d88) sp_fs_scroll_pane

0x2187,	// (0x0006f420) list_medium_line_x2_t3_t1

0x2197,	// (0x0006f430) list_medium_line_x2_t3_t2

0xbda8,	// (0x00079041) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0007c61b) list_medium_line_x2_t3_t

0x21a5,	// (0x0006f43e) list_medium_line_x3_t4_t1

0x21b5,	// (0x0006f44e) list_medium_line_x3_t4_t2

0xbdb6,	// (0x0007904f) list_medium_line_x3_t4_t3

0xbda8,	// (0x00079041) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0007c622) list_medium_line_x3_t4_t

0x21c3,	// (0x0006f45c) list_medium_line_x4_t5_t1

0x21d3,	// (0x0006f46c) list_medium_line_x4_t5_t2

0xbdb6,	// (0x0007904f) list_medium_line_x4_t5_t3

0xbdc4,	// (0x0007905d) list_medium_line_x4_t5_t4

0xbda8,	// (0x00079041) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0007c62b) list_medium_line_x4_t5_t

0xb81f,	// (0x00078ab8) list_medium_line_t4_g4_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_t4_g4_g1

0xb8bf,	// (0x00078b58) list_medium_line_t4_g4_g2_ParamLimits

0xb8bf,	// (0x00078b58) list_medium_line_t4_g4_g2

0xbdd2,	// (0x0007906b) list_medium_line_t4_g4_g3_ParamLimits

0xbdd2,	// (0x0007906b) list_medium_line_t4_g4_g3

0xb837,	// (0x00078ad0) list_medium_line_t4_g4_g4_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0007c636) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0007c636) list_medium_line_t4_g4_g

0xbdde,	// (0x00079077) list_medium_line_t4_g4_t1_ParamLimits

0xbdde,	// (0x00079077) list_medium_line_t4_g4_t1

0xbdf3,	// (0x0007908c) list_medium_line_t4_g4_t2_ParamLimits

0xbdf3,	// (0x0007908c) list_medium_line_t4_g4_t2

0xbe09,	// (0x000790a2) list_medium_line_t4_g4_t3_ParamLimits

0xbe09,	// (0x000790a2) list_medium_line_t4_g4_t3

0xb858,	// (0x00078af1) list_medium_line_t4_g4_t4_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0007c63f) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0007c63f) list_medium_line_t4_g4_t

0x4b99,	// (0x00071e32) chi_dic_find_pane_g1

0x5c51,	// (0x00072eea) main_tport_pane

0xd3a2,	// (0x0007a63b) list_medium_line_plain_t1

0xd3b8,	// (0x0007a651) list_medium_line_t2_g2_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t2_g2_g1

0xd3c4,	// (0x0007a65d) list_medium_line_t2_g2_g2_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0007ccf2) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0007ccf2) list_medium_line_t2_g2_g

0x23b0,	// (0x0006f649) list_medium_line_t2_g2_t1_ParamLimits

0x23b0,	// (0x0006f649) list_medium_line_t2_g2_t1

0x23ca,	// (0x0006f663) list_medium_line_t2_g2_t2_ParamLimits

0x23ca,	// (0x0006f663) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0007ccf7) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0007ccf7) list_medium_line_t2_g2_t

0xd6da,	// (0x0007a973) aid_sp_fs_list_icon_a_sm

0xf105,	// (0x0007c39e) aid_sp_fs_list_icon_d

0xd6e2,	// (0x0007a97b) aid_sp_fs_text_primary

0xd6eb,	// (0x0007a984) aid_sp_fs_text_secondary

0xd6f4,	// (0x0007a98d) list_medium_line

0xd6f4,	// (0x0007a98d) list_medium_line_g2

0xd6f4,	// (0x0007a98d) list_medium_line_g3

0xd6f4,	// (0x0007a98d) list_medium_line_plain

0xd6f4,	// (0x0007a98d) list_medium_line_plain_t2

0xd6f4,	// (0x0007a98d) list_medium_line_plain_t3

0xd6f4,	// (0x0007a98d) list_medium_line_right_icon

0xd6f4,	// (0x0007a98d) list_medium_line_right_iconx2

0xd6f4,	// (0x0007a98d) list_medium_line_t2

0xd6f4,	// (0x0007a98d) list_medium_line_t2_g2

0xd6f4,	// (0x0007a98d) list_medium_line_t2_g3

0xd6f4,	// (0x0007a98d) list_medium_line_t2_right_icon

0xd6f4,	// (0x0007a98d) list_medium_line_t2_right_iconx2

0xd6f4,	// (0x0007a98d) list_medium_line_t3

0xd6f4,	// (0x0007a98d) list_medium_line_t3_g2

0xd6f4,	// (0x0007a98d) list_medium_line_t3_g3

0xd6f4,	// (0x0007a98d) list_medium_line_t3_right_iconx2

0xd6fd,	// (0x0007a996) list_medium_line_t4_g4

0x12d1,	// (0x0006e56a) list_medium_line_x2

0x12d1,	// (0x0006e56a) list_medium_line_x2_t2_g2

0x12d1,	// (0x0006e56a) list_medium_line_x2_t2_g3

0x12d1,	// (0x0006e56a) list_medium_line_x2_t2_g4

0x12d1,	// (0x0006e56a) list_medium_line_x2_t3

0x12d1,	// (0x0006e56a) list_medium_line_x2_t3_g2

0x12d1,	// (0x0006e56a) list_medium_line_x2_t3_g3

0x12d1,	// (0x0006e56a) list_medium_line_x2_t3_g4

0x12d1,	// (0x0006e56a) list_medium_line_x2_t4_g2

0x12d1,	// (0x0006e56a) list_medium_line_x2_t4_g4

0xd706,	// (0x0007a99f) list_medium_line_x3

0xd706,	// (0x0007a99f) list_medium_line_x3_t4

0xd706,	// (0x0007a99f) list_medium_line_x3_t4_g4

0xd6fd,	// (0x0007a996) list_medium_line_x4_t4

0xd6fd,	// (0x0007a996) list_medium_line_x4_t4_g7

0xd6fd,	// (0x0007a996) list_medium_line_x4_t5

0xd70f,	// (0x0007a9a8) list_single_fs_dyc_pane_ParamLimits

0xd70f,	// (0x0007a9a8) list_single_fs_dyc_pane

0xb81f,	// (0x00078ab8) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x4_t4_g7_g1

0xdbfc,	// (0x0007ae95) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbfc,	// (0x0007ae95) list_medium_line_x4_t4_g7_g2

0xdc08,	// (0x0007aea1) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc08,	// (0x0007aea1) list_medium_line_x4_t4_g7_g3

0xdc17,	// (0x0007aeb0) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc17,	// (0x0007aeb0) list_medium_line_x4_t4_g7_g4

0xdc23,	// (0x0007aebc) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc23,	// (0x0007aebc) list_medium_line_x4_t4_g7_g5

0xdc32,	// (0x0007aecb) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc32,	// (0x0007aecb) list_medium_line_x4_t4_g7_g6

0xdc41,	// (0x0007aeda) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc41,	// (0x0007aeda) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0007cebc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0007cebc) list_medium_line_x4_t4_g7_g

0xdc4d,	// (0x0007aee6) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc4d,	// (0x0007aee6) list_medium_line_x4_t4_g7_t1

0xdc62,	// (0x0007aefb) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc62,	// (0x0007aefb) list_medium_line_x4_t4_g7_t2

0xdc77,	// (0x0007af10) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc77,	// (0x0007af10) list_medium_line_x4_t4_g7_t3

0xdc8c,	// (0x0007af25) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc8c,	// (0x0007af25) list_medium_line_x4_t4_g7_t4

0xdc9e,	// (0x0007af37) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc9e,	// (0x0007af37) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0007cecb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0007cecb) list_medium_line_x4_t4_g7_t

0xdcb0,	// (0x0007af49) list_single_dyc_row_pane_ParamLimits

0xdcb0,	// (0x0007af49) list_single_dyc_row_pane

0xa668,	// (0x00077901) call5_gesture_pane_ParamLimits

0xa668,	// (0x00077901) call5_gesture_pane

0xa6be,	// (0x00077957) call5_windows_pane_ParamLimits

0xa6be,	// (0x00077957) call5_windows_pane

0xa764,	// (0x000779fd) call5_swipe_1_pane_cp_ParamLimits

0xa764,	// (0x000779fd) call5_swipe_1_pane_cp

0xa770,	// (0x00077a09) call5_swipe_2_pane_cp_ParamLimits

0xa770,	// (0x00077a09) call5_swipe_2_pane_cp

0xc282,	// (0x0007951b) call5_image_pane_cp

0xa77c,	// (0x00077a15) popup_call5_audio_first_window_cp_ParamLimits

0xa77c,	// (0x00077a15) popup_call5_audio_first_window_cp

0xe272,	// (0x0007b50b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe272,	// (0x0007b50b) call5_swipe_1_pane_g1_cp

0xe2b2,	// (0x0007b54b) call5_swipe_1_pane_g2_cp

0xe28b,	// (0x0007b524) call5_swipe_1_pane_t1_cp_ParamLimits

0xe28b,	// (0x0007b524) call5_swipe_1_pane_t1_cp

0xe272,	// (0x0007b50b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe272,	// (0x0007b50b) call5_swipe_2_pane_g1_cp

0xe2ba,	// (0x0007b553) call5_swipe_2_pane_g2_cp

0xe2c2,	// (0x0007b55b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2c2,	// (0x0007b55b) call5_swipe_2_pane_t1_cp

0x1201,	// (0x0006e49a) main_sp_fs_email_pane

0xe2d7,	// (0x0007b570) main_sp_fs_listscroll_pane_te

0xe2e0,	// (0x0007b579) popup_sp_fs_action_menu_pane_ParamLimits

0xe2e0,	// (0x0007b579) popup_sp_fs_action_menu_pane

0x6d15,	// (0x00073fae) bg_sp_fs_ctrlbar_pane_g1

0xe322,	// (0x0007b5bb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe32b,	// (0x0007b5c4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe334,	// (0x0007b5cd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x6d15,	// (0x00073fae) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0007cfb4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x6a2c,	// (0x00073cc5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x6a2c,	// (0x00073cc5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe33d,	// (0x0007b5d6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe33d,	// (0x0007b5d6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe349,	// (0x0007b5e2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe349,	// (0x0007b5e2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0007cfbd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0007cfbd) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe355,	// (0x0007b5ee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe355,	// (0x0007b5ee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe36f,	// (0x0007b608) list_medium_line_t2_right_icon_g1

0x252f,	// (0x0006f7c8) list_medium_line_t2_right_icon_t1

0x253f,	// (0x0006f7d8) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0007cfc2) list_medium_line_t2_right_icon_t

0x11f3,	// (0x0006e48c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x11f3,	// (0x0006e48c) bg_sp_fs_ctrlbar_pane

0xa7d0,	// (0x00077a69) main_sp_fs_ctrlbar_button_pane_cp01

0xa7d8,	// (0x00077a71) main_sp_fs_ctrlbar_ddmenu_pane

0x12da,	// (0x0006e573) main_sp_fs_ctrlbar_pane_g1

0xe3af,	// (0x0007b648) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0007cfc7) main_sp_fs_ctrlbar_pane_g

0xe3bb,	// (0x0007b654) main_sp_fs_ctrlbar_pane_t1

0x254f,	// (0x0006f7e8) main_sp_fs_ctrlbar_pane

0x2573,	// (0x0006f80c) main_sp_fs_listscroll_pane_te_cp01

0x2593,	// (0x0006f82c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2593,	// (0x0006f82c) popup_sp_fs_action_menu_pane_cp01

0x1201,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1201,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp01

0xe3d0,	// (0x0007b669) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3d0,	// (0x0007b669) sp_fs_action_menu_list_gene_pane_g1

0xe3df,	// (0x0007b678) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3df,	// (0x0007b678) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0007cfcc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0007cfcc) sp_fs_action_menu_list_gene_pane_g

0xe3ec,	// (0x0007b685) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ec,	// (0x0007b685) sp_fs_action_menu_list_gene_pane_t1

0xe404,	// (0x0007b69d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe404,	// (0x0007b69d) sp_fs_action_menu_list_gene_pane

0xe423,	// (0x0007b6bc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe423,	// (0x0007b6bc) popup_sp_fs_action_menu_bg_pane

0xe431,	// (0x0007b6ca) sp_fs_action_menu_list_pane_ParamLimits

0xe431,	// (0x0007b6ca) sp_fs_action_menu_list_pane

0xe451,	// (0x0007b6ea) sp_fs_scroll_pane_cp01_ParamLimits

0xe451,	// (0x0007b6ea) sp_fs_scroll_pane_cp01

0x25ad,	// (0x0006f846) list_medium_line_plain_t2_t1

0x25bd,	// (0x0006f856) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0007cfd1) list_medium_line_plain_t2_t

0x25cd,	// (0x0006f866) list_medium_line_plain_t3_t1

0x25dd,	// (0x0006f876) list_medium_line_plain_t3_t2

0x25eb,	// (0x0006f884) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0007cfd6) list_medium_line_plain_t3_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t2_g2_g1

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0007c546) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0007c546) list_medium_line_x2_t2_g2_g

0xbdde,	// (0x00079077) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbdde,	// (0x00079077) list_medium_line_x2_t2_g2_t1

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0007cfdd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0007cfdd) list_medium_line_x2_t2_g2_t

0xb81f,	// (0x00078ab8) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t4_g2_g1

0xe477,	// (0x0007b710) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe477,	// (0x0007b710) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0007cfe2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0007cfe2) list_medium_line_x2_t4_g2_g

0x25f9,	// (0x0006f892) list_medium_line_x2_t4_g2_t1_ParamLimits

0x25f9,	// (0x0006f892) list_medium_line_x2_t4_g2_t1

0x2610,	// (0x0006f8a9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x2610,	// (0x0006f8a9) list_medium_line_x2_t4_g2_t2

0x2625,	// (0x0006f8be) list_medium_line_x2_t4_g2_t3_ParamLimits

0x2625,	// (0x0006f8be) list_medium_line_x2_t4_g2_t3

0xb858,	// (0x00078af1) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0007cfe7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0007cfe7) list_medium_line_x2_t4_g2_t

0xe489,	// (0x0007b722) list_medium_line_t3_right_iconx2_g1

0xe36f,	// (0x0007b608) list_medium_line_t3_right_iconx2_g2

0x2637,	// (0x0006f8d0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0007cff0) list_medium_line_t3_right_iconx2_g

0x2641,	// (0x0006f8da) list_medium_line_t3_right_iconx2_t1

0x2651,	// (0x0006f8ea) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0007cff7) list_medium_line_t3_right_iconx2_t

0xb81f,	// (0x00078ab8) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x3_t4_g4_g1

0xb82b,	// (0x00078ac4) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x3_t4_g4_g2

0xb8bf,	// (0x00078b58) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb8bf,	// (0x00078b58) list_medium_line_x3_t4_g4_g3

0xe491,	// (0x0007b72a) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe491,	// (0x0007b72a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0007cffc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0007cffc) list_medium_line_x3_t4_g4_g

0x265f,	// (0x0006f8f8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x265f,	// (0x0006f8f8) list_medium_line_x3_t4_g4_t1

0x2676,	// (0x0006f90f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2676,	// (0x0006f90f) list_medium_line_x3_t4_g4_t2

0xe49d,	// (0x0007b736) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe49d,	// (0x0007b736) list_medium_line_x3_t4_g4_t3

0xe4b2,	// (0x0007b74b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4b2,	// (0x0007b74b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0007d005) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0007d005) list_medium_line_x3_t4_g4_t

0x268f,	// (0x0006f928) list_single_dyc_row_text_pane_t1_ParamLimits

0x268f,	// (0x0006f928) list_single_dyc_row_text_pane_t1

0x26d8,	// (0x0006f971) list_single_dyc_row_text_pane_t2_ParamLimits

0x26d8,	// (0x0006f971) list_single_dyc_row_text_pane_t2

0xe4cf,	// (0x0007b768) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cf,	// (0x0007b768) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0007d00e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0007d00e) list_single_dyc_row_text_pane_t

0xe4e1,	// (0x0007b77a) list_single_dyc_row_pane_g1_ParamLimits

0xe4e1,	// (0x0007b77a) list_single_dyc_row_pane_g1

0xe4ed,	// (0x0007b786) list_single_dyc_row_pane_g2_ParamLimits

0xe4ed,	// (0x0007b786) list_single_dyc_row_pane_g2

0xe4f9,	// (0x0007b792) list_single_dyc_row_pane_g3_ParamLimits

0xe4f9,	// (0x0007b792) list_single_dyc_row_pane_g3

0xe505,	// (0x0007b79e) list_single_dyc_row_pane_g4_ParamLimits

0xe505,	// (0x0007b79e) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0007d015) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0007d015) list_single_dyc_row_pane_g

0xe511,	// (0x0007b7aa) list_single_dyc_row_text_pane_ParamLimits

0xe511,	// (0x0007b7aa) list_single_dyc_row_text_pane

0x2a63,	// (0x0006fcfc) bg_sp_fs_scroll_pane

0xe530,	// (0x0007b7c9) thumb_sp_fs_scroll_pane

0xd3b8,	// (0x0007a651) list_medium_line_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_g1

0xe539,	// (0x0007b7d2) list_medium_line_t1_ParamLimits

0xe539,	// (0x0007b7d2) list_medium_line_t1

0xb81f,	// (0x00078ab8) list_medium_line_x2_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_g1

0xb82b,	// (0x00078ac4) list_medium_line_x2_g2_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0007d01e) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0007d01e) list_medium_line_x2_g

0xe54e,	// (0x0007b7e7) list_medium_line_x2_t1_ParamLimits

0xe54e,	// (0x0007b7e7) list_medium_line_x2_t1

0xb81f,	// (0x00078ab8) list_medium_line_x3_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x3_g1

0xb82b,	// (0x00078ac4) list_medium_line_x3_g2_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0007d01e) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0007d01e) list_medium_line_x3_g

0xe54e,	// (0x0007b7e7) list_medium_line_x3_t1_ParamLimits

0xe54e,	// (0x0007b7e7) list_medium_line_x3_t1

0xe564,	// (0x0007b7fd) thumb_sp_fs_scroll_pane_g1

0xe56d,	// (0x0007b806) thumb_sp_fs_scroll_pane_g2

0xe576,	// (0x0007b80f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007d023) thumb_sp_fs_scroll_pane_g

0xe564,	// (0x0007b7fd) bg_sp_fs_scroll_pane_g1

0xe56d,	// (0x0007b806) bg_sp_fs_scroll_pane_g2

0xe576,	// (0x0007b80f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0007d023) bg_sp_fs_scroll_pane_g

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb81f,	// (0x00078ab8) list_medium_line_x2_t3_g4_g1

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb8b3,	// (0x00078b4c) list_medium_line_x2_t3_g4_g2

0xb82b,	// (0x00078ac4) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb82b,	// (0x00078ac4) list_medium_line_x2_t3_g4_g3

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb837,	// (0x00078ad0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0007c5c2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0007c5c2) list_medium_line_x2_t3_g4_g

0x2732,	// (0x0006f9cb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x2732,	// (0x0006f9cb) list_medium_line_x2_t3_g4_t1

0x2748,	// (0x0006f9e1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x2748,	// (0x0006f9e1) list_medium_line_x2_t3_g4_t2

0xb858,	// (0x00078af1) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb858,	// (0x00078af1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0007d02a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0007d02a) list_medium_line_x2_t3_g4_t

0xd3b8,	// (0x0007a651) list_medium_line_g2_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_g2_g1

0xd3c4,	// (0x0007a65d) list_medium_line_g2_g2_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0007ccf2) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0007ccf2) list_medium_line_g2_g

0xe57f,	// (0x0007b818) list_medium_line_g2_t1_ParamLimits

0xe57f,	// (0x0007b818) list_medium_line_g2_t1

0xd3b8,	// (0x0007a651) list_medium_line_t3_g2_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t3_g2_g1

0xd3c4,	// (0x0007a65d) list_medium_line_t3_g2_g2_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0007ccf2) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0007ccf2) list_medium_line_t3_g2_g

0x2761,	// (0x0006f9fa) list_medium_line_t3_g2_t1_ParamLimits

0x2761,	// (0x0006f9fa) list_medium_line_t3_g2_t1

0x2778,	// (0x0006fa11) list_medium_line_t3_g2_t2_ParamLimits

0x2778,	// (0x0006fa11) list_medium_line_t3_g2_t2

0x278d,	// (0x0006fa26) list_medium_line_t3_g2_t3_ParamLimits

0x278d,	// (0x0006fa26) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0007d031) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0007d031) list_medium_line_t3_g2_t

0xe36f,	// (0x0007b608) list_medium_line_right_icon_g1

0xe594,	// (0x0007b82d) list_medium_line_right_icon_t1

0xd3b8,	// (0x0007a651) list_medium_line_t2_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t2_g1

0x27a6,	// (0x0006fa3f) list_medium_line_t2_t1_ParamLimits

0x27a6,	// (0x0006fa3f) list_medium_line_t2_t1

0x27c0,	// (0x0006fa59) list_medium_line_t2_t2_ParamLimits

0x27c0,	// (0x0006fa59) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0007d038) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0007d038) list_medium_line_t2_t

0xd3b8,	// (0x0007a651) list_medium_line_t3_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t3_g1

0x27d5,	// (0x0006fa6e) list_medium_line_t3_t1_ParamLimits

0x27d5,	// (0x0006fa6e) list_medium_line_t3_t1

0x27ef,	// (0x0006fa88) list_medium_line_t3_t2_ParamLimits

0x27ef,	// (0x0006fa88) list_medium_line_t3_t2

0x2804,	// (0x0006fa9d) list_medium_line_t3_t3_ParamLimits

0x2804,	// (0x0006fa9d) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0007d03d) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0007d03d) list_medium_line_t3_t

0xd3b8,	// (0x0007a651) list_medium_line_g3_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_g3_g1

0xe5a2,	// (0x0007b83b) list_medium_line_g3_g2_ParamLimits

0xe5a2,	// (0x0007b83b) list_medium_line_g3_g2

0xd3c4,	// (0x0007a65d) list_medium_line_g3_g3_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0007d044) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0007d044) list_medium_line_g3_g

0xe5ae,	// (0x0007b847) list_medium_line_g3_t1_ParamLimits

0xe5ae,	// (0x0007b847) list_medium_line_g3_t1

0xd3b8,	// (0x0007a651) list_medium_line_t2_g3_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t2_g3_g1

0xe5a2,	// (0x0007b83b) list_medium_line_t2_g3_g2_ParamLimits

0xe5a2,	// (0x0007b83b) list_medium_line_t2_g3_g2

0xd3c4,	// (0x0007a65d) list_medium_line_t2_g3_g3_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0007d044) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0007d044) list_medium_line_t2_g3_g

0x2819,	// (0x0006fab2) list_medium_line_t2_g3_t1_ParamLimits

0x2819,	// (0x0006fab2) list_medium_line_t2_g3_t1

0x2830,	// (0x0006fac9) list_medium_line_t2_g3_t2_ParamLimits

0x2830,	// (0x0006fac9) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0007d04b) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0007d04b) list_medium_line_t2_g3_t

0xd3b8,	// (0x0007a651) list_medium_line_t3_g3_g1_ParamLimits

0xd3b8,	// (0x0007a651) list_medium_line_t3_g3_g1

0xe5a2,	// (0x0007b83b) list_medium_line_t3_g3_g2_ParamLimits

0xe5a2,	// (0x0007b83b) list_medium_line_t3_g3_g2

0xd3c4,	// (0x0007a65d) list_medium_line_t3_g3_g3_ParamLimits

0xd3c4,	// (0x0007a65d) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0007d044) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0007d044) list_medium_line_t3_g3_g

0x2849,	// (0x0006fae2) list_medium_line_t3_g3_t1_ParamLimits

0x2849,	// (0x0006fae2) list_medium_line_t3_g3_t1

0x2862,	// (0x0006fafb) list_medium_line_t3_g3_t2_ParamLimits

0x2862,	// (0x0006fafb) list_medium_line_t3_g3_t2

0x2878,	// (0x0006fb11) list_medium_line_t3_g3_t3_ParamLimits

0x2878,	// (0x0006fb11) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0007d050) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0007d050) list_medium_line_t3_g3_t

0xe489,	// (0x0007b722) list_medium_line_right_iconx2_g1

0xe36f,	// (0x0007b608) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007d057) list_medium_line_right_iconx2_g

0xe5c3,	// (0x0007b85c) list_medium_line_right_iconx2_t1

0xe489,	// (0x0007b722) list_medium_line_t2_right_iconx2_g1

0xe36f,	// (0x0007b608) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0007d057) list_medium_line_t2_right_iconx2_g

0x2892,	// (0x0006fb2b) list_medium_line_t2_right_iconx2_t1

0x28a2,	// (0x0006fb3b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0007d05c) list_medium_line_t2_right_iconx2_t

0xe5d1,	// (0x0007b86a) list_medium_line_x4_t4_t1

0x28b0,	// (0x0006fb49) list_medium_line_x4_t4_t2

0x28c0,	// (0x0006fb59) list_medium_line_x4_t4_t3

0x28d0,	// (0x0006fb69) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0007d061) list_medium_line_x4_t4_t

0xa825,	// (0x00077abe) tport_appsw_pane_ParamLimits

0xa825,	// (0x00077abe) tport_appsw_pane

0xa836,	// (0x00077acf) tport_contact_pane_ParamLimits

0xa836,	// (0x00077acf) tport_contact_pane

0xa84f,	// (0x00077ae8) tport_listscroll_pane_ParamLimits

0xa84f,	// (0x00077ae8) tport_listscroll_pane

0xa86a,	// (0x00077b03) cell_tport_appsw_pane_ParamLimits

0xa86a,	// (0x00077b03) cell_tport_appsw_pane

0xd110,	// (0x0007a3a9) tport_appsw_pane_g1_ParamLimits

0xd110,	// (0x0007a3a9) tport_appsw_pane_g1

0xe5df,	// (0x0007b878) tport_contact_pane_g1

0xe5e8,	// (0x0007b881) tport_contact_pane_t1

0xe5f6,	// (0x0007b88f) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0007d06a) tport_contact_pane_t

0xe604,	// (0x0007b89d) list_tport_pane

0xe60d,	// (0x0007b8a6) scroll_pane_cp_030

0xa885,	// (0x00077b1e) cell_tport_appsw_pane_g1

0xe616,	// (0x0007b8af) cell_tport_appsw_pane_t1

0x2a63,	// (0x0006fcfc) grid_highlight_pane_cp019

0xa89d,	// (0x00077b36) list_tport_double_graphic_pane_ParamLimits

0xa89d,	// (0x00077b36) list_tport_double_graphic_pane

0x1201,	// (0x0006e49a) list_highlight_pane_cp023_ParamLimits

0x1201,	// (0x0006e49a) list_highlight_pane_cp023

0xa8aa,	// (0x00077b43) list_tport_double_graphic_pane_g1_ParamLimits

0xa8aa,	// (0x00077b43) list_tport_double_graphic_pane_g1

0xa8b7,	// (0x00077b50) list_tport_double_graphic_pane_t1_ParamLimits

0xa8b7,	// (0x00077b50) list_tport_double_graphic_pane_t1

0xa8cc,	// (0x00077b65) list_tport_double_graphic_pane_t2_ParamLimits

0xa8cc,	// (0x00077b65) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0007d076) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0007d076) list_tport_double_graphic_pane_t

0x2a63,	// (0x0006fcfc) main_cale_note_pane

0x8d2e,	// (0x00075fc7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8d2e,	// (0x00075fc7) cell_vitu2_function_top_wide_pane_cp01

0xa3a0,	// (0x00077639) wait_bar_pane_cp05_ParamLimits

0x2a63,	// (0x0006fcfc) listscroll_cmail_pane

0xe62c,	// (0x0007b8c5) list_cmail_pane

0xa8e8,	// (0x00077b81) list_cmail_body_pane

0xa900,	// (0x00077b99) list_single_cmail_header_caption_pane

0xa91c,	// (0x00077bb5) list_single_cmail_header_detail_pane_ParamLimits

0xa91c,	// (0x00077bb5) list_single_cmail_header_detail_pane

0xa948,	// (0x00077be1) list_single_cmail_header_caption_pane_t1

0x28e0,	// (0x0006fb79) list_single_cmail_header_detail_pane_g1_ParamLimits

0x28e0,	// (0x0006fb79) list_single_cmail_header_detail_pane_g1

0xf123,	// (0x0007c3bc) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf123,	// (0x0007c3bc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0007d07b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0007d07b) list_single_cmail_header_detail_pane_g

0xe659,	// (0x0007b8f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe659,	// (0x0007b8f2) list_single_cmail_header_detail_pane_t1

0xe68b,	// (0x0007b924) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe68b,	// (0x0007b924) list_single_cmail_header_editor_pane_bg

0xe69d,	// (0x0007b936) list_cmail_body_pane_g1

0xe6a6,	// (0x0007b93f) list_cmail_body_pane_t1

0xd16b,	// (0x0007a404) list_single_cmail_header_editor_pane_bg_g1

0xbada,	// (0x00078d73) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd17b,	// (0x0007a414) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd173,	// (0x0007a40c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3b0,	// (0x0007a649) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd19b,	// (0x0007a434) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd18b,	// (0x0007a424) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd193,	// (0x0007a42c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xbaba,	// (0x00078d53) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa958,	// (0x00077bf1) calenote_gesture_pane_ParamLimits

0xa958,	// (0x00077bf1) calenote_gesture_pane

0xa978,	// (0x00077c11) calenote_window_pane_ParamLimits

0xa978,	// (0x00077c11) calenote_window_pane

0xe6b4,	// (0x0007b94d) popup_note_window_cp01

0xa994,	// (0x00077c2d) calenote_swipe_1_pane_ParamLimits

0xa994,	// (0x00077c2d) calenote_swipe_1_pane

0xa770,	// (0x00077a09) calenote_swipe_2_pane_ParamLimits

0xa770,	// (0x00077a09) calenote_swipe_2_pane

0xe272,	// (0x0007b50b) calenote_swipe_1_pane_g1_ParamLimits

0xe272,	// (0x0007b50b) calenote_swipe_1_pane_g1

0xe27f,	// (0x0007b518) calenote_swipe_1_pane_g2_ParamLimits

0xe27f,	// (0x0007b518) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0007cfaa) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0007cfaa) calenote_swipe_1_pane_g

0xe6c6,	// (0x0007b95f) calenote_swipe_1_pane_t1_ParamLimits

0xe6c6,	// (0x0007b95f) calenote_swipe_1_pane_t1

0xe272,	// (0x0007b50b) calenote_swipe_2_pane_g1_ParamLimits

0xe272,	// (0x0007b50b) calenote_swipe_2_pane_g1

0xe6e5,	// (0x0007b97e) calenote_swipe_2_pane_g2_ParamLimits

0xe6e5,	// (0x0007b97e) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0007d087) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0007d087) calenote_swipe_2_pane_g

0xe6f1,	// (0x0007b98a) calenote_swipe_2_pane_t1_ParamLimits

0xe6f1,	// (0x0007b98a) calenote_swipe_2_pane_t1

0x2a63,	// (0x0006fcfc) main_mup_navstr_pane

0x766e,	// (0x00074907) main_mup3_pane_t7_ParamLimits

0x766e,	// (0x00074907) main_mup3_pane_t7

0xee23,	// (0x0007c0bc) main_mp4_pane_g6_ParamLimits

0xee23,	// (0x0007c0bc) main_mp4_pane_g6

0xefb9,	// (0x0007c252) main_image3_pane_t4_ParamLimits

0xefb9,	// (0x0007c252) main_image3_pane_t4

0xa9a9,	// (0x00077c42) popup_navstr_preview_pane_ParamLimits

0xa9a9,	// (0x00077c42) popup_navstr_preview_pane

0xa9bd,	// (0x00077c56) scroll_navstr_pane_ParamLimits

0xa9bd,	// (0x00077c56) scroll_navstr_pane

0x2a63,	// (0x0006fcfc) bg_popup_preview_window_pane_cp04

0xe718,	// (0x0007b9b1) popup_navstr_preview_pane_t1

0xa9d1,	// (0x00077c6a) scroll_navstr_pane_g1_ParamLimits

0xa9d1,	// (0x00077c6a) scroll_navstr_pane_g1

0xa9e5,	// (0x00077c7e) scroll_navstr_pane_t1_ParamLimits

0xa9e5,	// (0x00077c7e) scroll_navstr_pane_t1

0xe6bd,	// (0x0007b956) bg_button_pane_cp014

0xe6bd,	// (0x0007b956) bg_button_pane_cp030

0x24d5,	// (0x0006f76e) list_double_fisheye_pane_g4_ParamLimits

0x24d5,	// (0x0006f76e) list_double_fisheye_pane_g4

0x24e1,	// (0x0006f77a) list_double_fisheye_pane_g5_ParamLimits

0x24e1,	// (0x0006f77a) list_double_fisheye_pane_g5

0xe634,	// (0x0007b8cd) sp_fs_scroll_pane_cp03

0x12da,	// (0x0006e573) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3af,	// (0x0007b648) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0007cfc7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3bb,	// (0x0007b654) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa8de,	// (0x00077b77) sp_fs_scroll_pane_cp02

0xb6a0,	// (0x00078939) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb6a0,	// (0x00078939) popup_sp_fs_calendar_preview_list_single_pane

0x2a63,	// (0x0006fcfc) main_cam6_pano_pane

0x1201,	// (0x0006e49a) main_mup3_pane_ParamLimits

0x2a63,	// (0x0006fcfc) main_phacti_pane

0xa273,	// (0x0007750c) bg_button_pane_cp11

0xa28d,	// (0x00077526) main_mobtv_info_pane_g2_ParamLimits

0xa28d,	// (0x00077526) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0007cf27) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0007cf27) main_mobtv_info_pane_g

0xa468,	// (0x00077701) sc_clock_pane_t5_ParamLimits

0xa468,	// (0x00077701) sc_clock_pane_t5

0xa4ed,	// (0x00077786) main_radioblah_pane_g1_ParamLimits

0xe1be,	// (0x0007b457) main_radioblah_pane_t3_ParamLimits

0xe1be,	// (0x0007b457) main_radioblah_pane_t3

0xe1d6,	// (0x0007b46f) main_radioblah_pane_t4_ParamLimits

0xe1d6,	// (0x0007b46f) main_radioblah_pane_t4

0xa515,	// (0x000777ae) main_radioblah_text_pane_ParamLimits

0xa515,	// (0x000777ae) main_radioblah_text_pane

0xa527,	// (0x000777c0) main_radioblah_info_pane_g1_ParamLimits

0xa5c2,	// (0x0007785b) main_radioblah_info_pane_t4_ParamLimits

0xa5c2,	// (0x0007785b) main_radioblah_info_pane_t4

0x1201,	// (0x0006e49a) main_sp_fs_calendar_pane

0xa9fb,	// (0x00077c94) main_phacti_pane_g1

0xaa03,	// (0x00077c9c) phacti_note_pane_ParamLimits

0xaa03,	// (0x00077c9c) phacti_note_pane

0xe72f,	// (0x0007b9c8) phacti_term_pane_ParamLimits

0xe72f,	// (0x0007b9c8) phacti_term_pane

0xe744,	// (0x0007b9dd) phacti_note_pane_t1_ParamLimits

0xe744,	// (0x0007b9dd) phacti_note_pane_t1

0xe75b,	// (0x0007b9f4) phacti_term_pane_g1

0xe763,	// (0x0007b9fc) phacti_term_pane_t1_ParamLimits

0xe763,	// (0x0007b9fc) phacti_term_pane_t1

0xe78d,	// (0x0007ba26) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe795,	// (0x0007ba2e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0007d091) popup_sp_fs_calendar_preview_list_single_pane_g

0xe79d,	// (0x0007ba36) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe79d,	// (0x0007ba36) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7b3,	// (0x0007ba4c) aid_popup_sp_fs_bg_corner_pane

0x6d15,	// (0x00073fae) popup_sp_fs_calendar_preview_bg_pane_g1

0x2a63,	// (0x0006fcfc) popup_sp_fs_calendar_preview_bg_pane

0xe7bb,	// (0x0007ba54) popup_sp_fs_calendar_preview_list_pane

0x1201,	// (0x0006e49a) bg_main_sp_fs_cale_pane_ParamLimits

0x1201,	// (0x0006e49a) bg_main_sp_fs_cale_pane

0xe7cc,	// (0x0007ba65) listscroll_cale_mrui_pane_ParamLimits

0xe7cc,	// (0x0007ba65) listscroll_cale_mrui_pane

0xe7e0,	// (0x0007ba79) listscroll_sp_fs_schedule_track_pane

0xe7e9,	// (0x0007ba82) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7e9,	// (0x0007ba82) main_sp_fs_ctrlbar_pane_cp01

0xe7fa,	// (0x0007ba93) main_sp_fs_ribbon_pane

0xe802,	// (0x0007ba9b) popup_sp_fs_cale_preview_window

0xaa5e,	// (0x00077cf7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaa5e,	// (0x00077cf7) list_single_sp_fs_schedule_track_pane

0x1201,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1201,	// (0x0006e49a) bg_sp_fs_highlight_list_pane_cp03

0xaa74,	// (0x00077d0d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xaa74,	// (0x00077d0d) list_single_sp_fs_schedule_track_pane_g1

0xaa80,	// (0x00077d19) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xaa80,	// (0x00077d19) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0007d096) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0007d096) list_single_sp_fs_schedule_track_pane_g

0xaa8c,	// (0x00077d25) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xaa8c,	// (0x00077d25) list_single_sp_fs_schedule_track_pane_t1

0xaaa6,	// (0x00077d3f) sp_fs_schedule_track_pane_ParamLimits

0xaaa6,	// (0x00077d3f) sp_fs_schedule_track_pane

0xe814,	// (0x0007baad) sp_fs_schedule_track_pane_g1

0xe81c,	// (0x0007bab5) sp_fs_schedule_track_pane_g2

0xe824,	// (0x0007babd) sp_fs_schedule_track_pane_g3

0xe82c,	// (0x0007bac5) sp_fs_schedule_track_pane_g4

0xe834,	// (0x0007bacd) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0007d09b) sp_fs_schedule_track_pane_g

0xd16b,	// (0x0007a404) bg_sp_fs_schedule_viewer_highlight_g1

0xbada,	// (0x00078d73) bg_sp_fs_schedule_viewer_highlight_g2

0xd173,	// (0x0007a40c) bg_sp_fs_schedule_viewer_highlight_g3

0xd17b,	// (0x0007a414) bg_sp_fs_schedule_viewer_highlight_g4

0xd3b0,	// (0x0007a649) bg_sp_fs_schedule_viewer_highlight_g5

0xd18b,	// (0x0007a424) bg_sp_fs_schedule_viewer_highlight_g6

0xd193,	// (0x0007a42c) bg_sp_fs_schedule_viewer_highlight_g7

0xd19b,	// (0x0007a434) bg_sp_fs_schedule_viewer_highlight_g8

0xbaba,	// (0x00078d53) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0007d0a6) bg_sp_fs_schedule_viewer_highlight_g

0x2a63,	// (0x0006fcfc) bg_main_sp_fs_ribbon_pane

0xaab7,	// (0x00077d50) main_sp_fs_ribbon_pane_g1

0xe83c,	// (0x0007bad5) main_sp_fs_ribbon_pane_t1

0xaac0,	// (0x00077d59) main_sp_fs_ribbon_pane_t2

0xe84b,	// (0x0007bae4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0007d0b9) main_sp_fs_ribbon_pane_t

0xe85a,	// (0x0007baf3) main_sp_fs_ribbon_scheduler_pane

0xe862,	// (0x0007bafb) bg_main_sp_fs_ribbon_pane_g1

0xe86b,	// (0x0007bb04) bg_main_sp_fs_ribbon_pane_g2

0xe874,	// (0x0007bb0d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0007d0c0) bg_main_sp_fs_ribbon_pane_g

0xe87c,	// (0x0007bb15) main_sp_fs_ribbon_scheduler_pane_g1

0xe885,	// (0x0007bb1e) main_sp_fs_ribbon_scheduler_pane_g2

0xe88e,	// (0x0007bb27) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0007d0c7) main_sp_fs_ribbon_scheduler_pane_g

0xe897,	// (0x0007bb30) list_cale_mrui_pane

0xaacf,	// (0x00077d68) sp_fs_scroll_pane_cp07_ParamLimits

0xaacf,	// (0x00077d68) sp_fs_scroll_pane_cp07

0xaae5,	// (0x00077d7e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xaae5,	// (0x00077d7e) bg_sp_fs_schedule_viewer_highlight

0xe8a0,	// (0x0007bb39) list_single_sp_fs_schedule_track_pane_cp01

0xe8a8,	// (0x0007bb41) list_sp_fs_schedule_track_pane

0xe8b0,	// (0x0007bb49) sp_fs_scroll_pane_cp06_ParamLimits

0xe8b0,	// (0x0007bb49) sp_fs_scroll_pane_cp06

0x6d15,	// (0x00073fae) bgmain_sp_fs_calendar_pane_g1

0x291e,	// (0x0006fbb7) list_single_cale_mrui_pane_ParamLimits

0x291e,	// (0x0006fbb7) list_single_cale_mrui_pane

0xe8c2,	// (0x0007bb5b) list_single_cale_mrui_row_pane_ParamLimits

0xe8c2,	// (0x0007bb5b) list_single_cale_mrui_row_pane

0xe8cf,	// (0x0007bb68) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8cf,	// (0x0007bb68) list_single_cale_mrui_row_pane_g1

0xe907,	// (0x0007bba0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe907,	// (0x0007bba0) list_single_cale_mrui_row_pane_t1

0x2940,	// (0x0006fbd9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x2940,	// (0x0006fbd9) list_single_cale_mrui_row_pane_t2

0xe919,	// (0x0007bbb2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe919,	// (0x0007bbb2) list_single_cale_mrui_row_pane_t3

0xe948,	// (0x0007bbe1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe948,	// (0x0007bbe1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0007d0d3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0007d0d3) list_single_cale_mrui_row_pane_t

0x29a8,	// (0x0006fc41) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x29a8,	// (0x0006fc41) list_single_cmail_header_editor_pane_bg_cp01

0x29ce,	// (0x0006fc67) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x29ce,	// (0x0006fc67) list_single_cmail_header_editor_pane_bg_cp02

0xaaf5,	// (0x00077d8e) main_radioblah_text_pane_t1_ParamLimits

0xaaf5,	// (0x00077d8e) main_radioblah_text_pane_t1

0xe977,	// (0x0007bc10) cam6_indi_pane_cp01

0xe97f,	// (0x0007bc18) cam6_mode_pane_cp01

0xe987,	// (0x0007bc20) cam6_pano_pane

0xe990,	// (0x0007bc29) cam6_zoom_pane_cp01

0xe998,	// (0x0007bc31) cam6_pano_image_pane

0xe9a3,	// (0x0007bc3c) cam6_pano_pane_g1

0xdf36,	// (0x0007b1cf) cam6_pano_pane_g2

0xe9ac,	// (0x0007bc45) cam6_pano_pane_g3

0xe9b5,	// (0x0007bc4e) cam6_pano_pane_g4

0x8017,	// (0x000752b0) cam6_pano_pane_g5

0xe9be,	// (0x0007bc57) cam6_pano_pane_g6

0xe9c8,	// (0x0007bc61) cam6_pano_pane_g7

0xe9d0,	// (0x0007bc69) cam6_pano_pane_g8

0xe9d9,	// (0x0007bc72) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0007d0dc) cam6_pano_pane_g

0x2a63,	// (0x0006fcfc) main_browser_tag_pane

0xe710,	// (0x0007b9a9) grid_navstr_albumart_pane

0xe9e4,	// (0x0007bc7d) cell_navstr_albumart_pane_ParamLimits

0xe9e4,	// (0x0007bc7d) cell_navstr_albumart_pane

0xc403,	// (0x0007969c) cell_navstr_albumart_pane_g1

0x1010,	// (0x0006e2a9) cell_navstr_albumart_pane_g2

0x1020,	// (0x0006e2b9) cell_navstr_albumart_pane_g3

0x1018,	// (0x0006e2b1) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0007d0ef) cell_navstr_albumart_pane_g

0xab10,	// (0x00077da9) bt_list_pane_ParamLimits

0xab10,	// (0x00077da9) bt_list_pane

0xab25,	// (0x00077dbe) bt_list_pane_t1

0xab34,	// (0x00077dcd) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0007d0f8) bt_list_pane_t

0x2a63,	// (0x0006fcfc) main_cale_prevew_pane

0xab43,	// (0x00077ddc) popup_cale_preview_window_ParamLimits

0xab43,	// (0x00077ddc) popup_cale_preview_window

0x1201,	// (0x0006e49a) bg_popup_preview_window_pane_cp05_ParamLimits

0x1201,	// (0x0006e49a) bg_popup_preview_window_pane_cp05

0xea06,	// (0x0007bc9f) list_cale_preview_pane_ParamLimits

0xea06,	// (0x0007bc9f) list_cale_preview_pane

0xab58,	// (0x00077df1) list_double_cale_preview_pane_ParamLimits

0xab58,	// (0x00077df1) list_double_cale_preview_pane

0xab6a,	// (0x00077e03) list_single_cale_preview_pane_ParamLimits

0xab6a,	// (0x00077e03) list_single_cale_preview_pane

0xab7e,	// (0x00077e17) list_single_cale_preview_pane_g1

0xab86,	// (0x00077e1f) list_single_cale_preview_pane_t1_ParamLimits

0xab86,	// (0x00077e1f) list_single_cale_preview_pane_t1

0xab9b,	// (0x00077e34) list_double_cale_preview_pane_g1

0xaba3,	// (0x00077e3c) list_double_cale_preview_pane_t1_ParamLimits

0xaba3,	// (0x00077e3c) list_double_cale_preview_pane_t1

0xabb8,	// (0x00077e51) list_double_cale_preview_pane_t2_ParamLimits

0xabb8,	// (0x00077e51) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0007d0fd) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0007d0fd) list_double_cale_preview_pane_t

0x2a63,	// (0x0006fcfc) main_ezdial_pane

0x1201,	// (0x0006e49a) main_sp_fs_email_pane_ParamLimits

0xa788,	// (0x00077a21) cmail_ddmenu_btn01_pane_ParamLimits

0xa788,	// (0x00077a21) cmail_ddmenu_btn01_pane

0xa79b,	// (0x00077a34) cmail_ddmenu_btn02_pane_ParamLimits

0xa79b,	// (0x00077a34) cmail_ddmenu_btn02_pane

0xa7be,	// (0x00077a57) cmail_ddmenu_btn03_pane_ParamLimits

0xa7be,	// (0x00077a57) cmail_ddmenu_btn03_pane

0x254f,	// (0x0006f7e8) main_sp_fs_ctrlbar_pane_ParamLimits

0x2573,	// (0x0006f80c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa8e8,	// (0x00077b81) list_cmail_body_pane_ParamLimits

0xe643,	// (0x0007b8dc) bg_button_pane_cp12

0xe64c,	// (0x0007b8e5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe64c,	// (0x0007b8e5) list_single_cmail_header_detail_pane_g3

0x28f8,	// (0x0006fb91) list_single_cmail_header_detail_pane_t2_ParamLimits

0x28f8,	// (0x0006fb91) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0007d082) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0007d082) list_single_cmail_header_detail_pane_t

0xe778,	// (0x0007ba11) phacti_term_pane_t2_ParamLimits

0xe778,	// (0x0007ba11) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0007d08c) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0007d08c) phacti_term_pane_t

0xea12,	// (0x0007bcab) aid_size_list_single_double

0xabd0,	// (0x00077e69) popup_ezdial_listscroll_window

0xabec,	// (0x00077e85) popup_number_entry_window_cp01

0xc282,	// (0x0007951b) bg_popup_call_pane_cp09

0xea1e,	// (0x0007bcb7) ezdial_list_pane

0xea26,	// (0x0007bcbf) scroll_pane_cp23

0x11f3,	// (0x0006e48c) bg_button_pane_cp028_ParamLimits

0x11f3,	// (0x0006e48c) bg_button_pane_cp028

0xabfa,	// (0x00077e93) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xabfa,	// (0x00077e93) cmail_ddmenu_btn01_pane_g1

0xac06,	// (0x00077e9f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xac06,	// (0x00077e9f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0007d102) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0007d102) cmail_ddmenu_btn01_pane_g

0xea2e,	// (0x0007bcc7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2e,	// (0x0007bcc7) cmail_ddmenu_btn01_pane_t1

0x11f3,	// (0x0006e48c) bg_button_pane_cp029_ParamLimits

0x11f3,	// (0x0006e48c) bg_button_pane_cp029

0xac12,	// (0x00077eab) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xac12,	// (0x00077eab) cmail_ddmenu_btn02_pane_g1

0xac2a,	// (0x00077ec3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xac2a,	// (0x00077ec3) cmail_ddmenu_btn02_pane_t1

0x1201,	// (0x0006e49a) bg_button_pane_cp031_ParamLimits

0x1201,	// (0x0006e49a) bg_button_pane_cp031

0xac12,	// (0x00077eab) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xac12,	// (0x00077eab) cmail_ddmenu_btn03_pane_g1

0xac2a,	// (0x00077ec3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xac2a,	// (0x00077ec3) cmail_ddmenu_btn03_pane_t1

0x8568,	// (0x00075801) cell_dialer2_keypad_pane_t1_ParamLimits

0x8582,	// (0x0007581b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8582,	// (0x0007581b) cell_dialer2_keypad_pane_t1_copy1

0xa118,	// (0x000773b1) ncimui_group_button_pane

0x1201,	// (0x0006e49a) main_sp_fs_calendar_pane_ParamLimits

0xa900,	// (0x00077b99) list_single_cmail_header_caption_pane_ParamLimits

0xe7c3,	// (0x0007ba5c) aid_recal_txt_sm_pane

0x2a63,	// (0x0006fcfc) mian_recal_day_pane

0xe802,	// (0x0007ba9b) popup_sp_fs_cale_preview_window_ParamLimits

0x2a63,	// (0x0006fcfc) list_recal_day_pane

0xea65,	// (0x0007bcfe) list_single_recal_day_pane_ParamLimits

0xea65,	// (0x0007bcfe) list_single_recal_day_pane

0xea77,	// (0x0007bd10) list_single_recal_day_pane_g1_ParamLimits

0xea77,	// (0x0007bd10) list_single_recal_day_pane_g1

0xea83,	// (0x0007bd1c) list_single_recal_day_pane_g2_ParamLimits

0xea83,	// (0x0007bd1c) list_single_recal_day_pane_g2

0xea92,	// (0x0007bd2b) list_single_recal_day_pane_g3_ParamLimits

0xea92,	// (0x0007bd2b) list_single_recal_day_pane_g3

0xac4e,	// (0x00077ee7) list_single_recal_day_pane_g4_ParamLimits

0xac4e,	// (0x00077ee7) list_single_recal_day_pane_g4

0xea9e,	// (0x0007bd37) list_single_recal_day_pane_g5_ParamLimits

0xea9e,	// (0x0007bd37) list_single_recal_day_pane_g5

0xeaad,	// (0x0007bd46) list_single_recal_day_pane_g6_ParamLimits

0xeaad,	// (0x0007bd46) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0007d111) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0007d111) list_single_recal_day_pane_g

0xeab9,	// (0x0007bd52) list_single_recal_day_pane_t1

0xeac7,	// (0x0007bd60) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0007d11e) list_single_recal_day_pane_t

0xac61,	// (0x00077efa) ncimui_query_button_pane_ParamLimits

0xac61,	// (0x00077efa) ncimui_query_button_pane

0xac71,	// (0x00077f0a) ncimui_query_button_pane_t1_ParamLimits

0xac71,	// (0x00077f0a) ncimui_query_button_pane_t1

0xead5,	// (0x0007bd6e) ncimui_query_button_pane_t2_ParamLimits

0xead5,	// (0x0007bd6e) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0007d123) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0007d123) ncimui_query_button_pane_t

0xac84,	// (0x00077f1d) query_button_pane_ParamLimits

0xac84,	// (0x00077f1d) query_button_pane

0x2a63,	// (0x0006fcfc) bg_button_pane_cp0028

0xeae8,	// (0x0007bd81) query_button_pane_t1

0x5c51,	// (0x00072eea) main_tport_pane_ParamLimits

0xa7e2,	// (0x00077a7b) bg_popup_window_pane_cp01_ParamLimits

0xa7e2,	// (0x00077a7b) bg_popup_window_pane_cp01

0xa7fc,	// (0x00077a95) heading_pane_cp08_ParamLimits

0xa7fc,	// (0x00077a95) heading_pane_cp08

0xa810,	// (0x00077aa9) heading_pane_cp07_ParamLimits

0xa810,	// (0x00077aa9) heading_pane_cp07

0xa88d,	// (0x00077b26) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0007d06f) cell_tport_appsw_pane_g

0x21f9,	// (0x0006f492) input_candi_list_open_g1

0xbccd,	// (0x00078f66) list_cale_time_pane_g6_ParamLimits

0xbccd,	// (0x00078f66) list_cale_time_pane_g6

0x7082,	// (0x0007431b) aid_size_touch_calib_1_ParamLimits

0x7082,	// (0x0007431b) aid_size_touch_calib_1

0x708e,	// (0x00074327) aid_size_touch_calib_2_ParamLimits

0x708e,	// (0x00074327) aid_size_touch_calib_2

0x70a4,	// (0x0007433d) aid_size_touch_calib_3_ParamLimits

0x70a4,	// (0x0007433d) aid_size_touch_calib_3

0x70c2,	// (0x0007435b) aid_size_touch_calib_4_ParamLimits

0x70c2,	// (0x0007435b) aid_size_touch_calib_4

0x70d8,	// (0x00074371) main_touch_calib_button_group_pane_ParamLimits

0x70d8,	// (0x00074371) main_touch_calib_button_group_pane

0x70ef,	// (0x00074388) main_touch_calib_pane_g1_ParamLimits

0x70fb,	// (0x00074394) main_touch_calib_pane_g2_ParamLimits

0x7107,	// (0x000743a0) main_touch_calib_pane_g3_ParamLimits

0x7113,	// (0x000743ac) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0007ca51) main_touch_calib_pane_g_ParamLimits

0x711f,	// (0x000743b8) main_touch_calib_pane_t1_ParamLimits

0x7139,	// (0x000743d2) main_touch_calib_pane_t2_ParamLimits

0x7153,	// (0x000743ec) main_touch_calib_pane_t3_ParamLimits

0x7167,	// (0x00074400) main_touch_calib_pane_t4_ParamLimits

0x717b,	// (0x00074414) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0007ca5a) main_touch_calib_pane_t_ParamLimits

0x78ed,	// (0x00074b86) list_single_fp_cale_pane_g3_ParamLimits

0x78ed,	// (0x00074b86) list_single_fp_cale_pane_g3

0x1201,	// (0x0006e49a) bg_button_pane_cp012_ParamLimits

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp03_ParamLimits

0x9512,	// (0x000767ab) cell_vitu2_function_top_pane_g1_ParamLimits

0x1201,	// (0x0006e49a) bg_vkb2_func_pane_cp04_ParamLimits

0xa0cc,	// (0x00077365) main_ncimui_button_group_pane_ParamLimits

0xa0cc,	// (0x00077365) main_ncimui_button_group_pane

0xa106,	// (0x0007739f) main_ncimui_pane_t3_ParamLimits

0xa106,	// (0x0007739f) main_ncimui_pane_t3

0xe726,	// (0x0007b9bf) phacti_button_group_pane

0xea12,	// (0x0007bcab) aid_size_list_single_double_ParamLimits

0xabd0,	// (0x00077e69) popup_ezdial_listscroll_window_ParamLimits

0xabec,	// (0x00077e85) popup_number_entry_window_cp01_ParamLimits

0xac97,	// (0x00077f30) phacti_button_pane_ParamLimits

0xac97,	// (0x00077f30) phacti_button_pane

0x2a63,	// (0x0006fcfc) bg_button_pane_cp14

0xeaf6,	// (0x0007bd8f) phacti_button_pane_t1

0xaca8,	// (0x00077f41) main_touch_calib_button_pane_ParamLimits

0xaca8,	// (0x00077f41) main_touch_calib_button_pane

0xb514,	// (0x000787ad) bg_button_pane_cp18_ParamLimits

0xb514,	// (0x000787ad) bg_button_pane_cp18

0xeb04,	// (0x0007bd9d) main_touch_calib_button_pane_t1_ParamLimits

0xeb04,	// (0x0007bd9d) main_touch_calib_button_pane_t1

0xeb1a,	// (0x0007bdb3) main_touch_calib_button_pane_t2_ParamLimits

0xeb1a,	// (0x0007bdb3) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0007d128) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0007d128) main_touch_calib_button_pane_t

0x2a63,	// (0x0006fcfc) cell_ncimui_button_pane

0x2a63,	// (0x0006fcfc) bg_button_pane_cp032

0xeb38,	// (0x0007bdd1) cell_ncimui_button_pane_t1

0xef99,	// (0x0007c232) image3_infobar_pane_ParamLimits

0xef99,	// (0x0007c232) image3_infobar_pane

0xa494,	// (0x0007772d) fs_bigclock_status_pane_ParamLimits

0xa494,	// (0x0007772d) fs_bigclock_status_pane

0xa4a1,	// (0x0007773a) main_fs_bigclock_clock_pane_ParamLimits

0xa4a1,	// (0x0007773a) main_fs_bigclock_clock_pane

0xa4b4,	// (0x0007774d) main_fs_bigclock_indi_pane_ParamLimits

0xa4b4,	// (0x0007774d) main_fs_bigclock_indi_pane

0xa4cc,	// (0x00077765) main_fs_bigclock_swipe_pane_ParamLimits

0xa4cc,	// (0x00077765) main_fs_bigclock_swipe_pane

0x2a63,	// (0x0006fcfc) main_fs_clock_dumped_data

0xe043,	// (0x0007b2dc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe043,	// (0x0007b2dc) list_single_fs_bigclock_indicator_pane_g1

0xe061,	// (0x0007b2fa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe061,	// (0x0007b2fa) list_single_fs_bigclock_indicator_pane_g2

0xe07b,	// (0x0007b314) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe07b,	// (0x0007b314) list_single_fs_bigclock_indicator_pane_g3

0xe095,	// (0x0007b32e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe095,	// (0x0007b32e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0007cf5b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0007cf5b) list_single_fs_bigclock_indicator_pane_g

0xe0bb,	// (0x0007b354) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0bb,	// (0x0007b354) list_single_fs_bigclock_indicator_pane_t1

0xe0e3,	// (0x0007b37c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0e3,	// (0x0007b37c) list_single_fs_bigclock_indicator_pane_t2

0xe10b,	// (0x0007b3a4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe10b,	// (0x0007b3a4) list_single_fs_bigclock_indicator_pane_t3

0xe133,	// (0x0007b3cc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe133,	// (0x0007b3cc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0007cf66) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0007cf66) list_single_fs_bigclock_indicator_pane_t

0xeb46,	// (0x0007bddf) image3_infobar_fav_pane_ParamLimits

0xeb46,	// (0x0007bddf) image3_infobar_fav_pane

0xeb56,	// (0x0007bdef) image3_infobar_loc_pane_ParamLimits

0xeb56,	// (0x0007bdef) image3_infobar_loc_pane

0xeb6a,	// (0x0007be03) image3_infobar_time_pane_ParamLimits

0xeb6a,	// (0x0007be03) image3_infobar_time_pane

0x6d15,	// (0x00073fae) image3_infobar_time_pane_g1

0xeb7a,	// (0x0007be13) image3_infobar_time_pane_t1

0x6d15,	// (0x00073fae) image3_infobar_loc_pane_g1

0xeb88,	// (0x0007be21) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0007d12d) image3_infobar_loc_pane_g

0xeb90,	// (0x0007be29) image3_infobar_loc_pane_t1

0x6d15,	// (0x00073fae) image3_infobar_fav_pane_g1

0xeb9e,	// (0x0007be37) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0007d132) image3_infobar_fav_pane_g

0xeba6,	// (0x0007be3f) fs_bigclock_status_battery_pane

0xebaf,	// (0x0007be48) fs_bigclock_status_signal_pane

0xebb8,	// (0x0007be51) fs_bigclock_status_title_pane

0xebc1,	// (0x0007be5a) fs_bigclock_status_signal_pane_g1

0xebca,	// (0x0007be63) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0007d137) fs_bigclock_status_signal_pane_g

0xebd2,	// (0x0007be6b) fs_bigclock_status_battery_pane_g1

0xebdb,	// (0x0007be74) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0007d13c) fs_bigclock_status_battery_pane_g

0xebe3,	// (0x0007be7c) fs_bigclock_status_title_pane_t1

0x6d15,	// (0x00073fae) main_fs_bigclock_clock_pane_g1

0xebf1,	// (0x0007be8a) main_fs_bigclock_clock_pane_g2

0xebf1,	// (0x0007be8a) main_fs_bigclock_clock_pane_g3

0xebf1,	// (0x0007be8a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0007d141) main_fs_bigclock_clock_pane_g

0xebf9,	// (0x0007be92) main_fs_bigclock_clock_pane_t1

0xec07,	// (0x0007bea0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0007d14a) main_fs_bigclock_clock_pane_t

0xec16,	// (0x0007beaf) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec16,	// (0x0007beaf) list_single_fs_bigclock_indicator_pane

0xacbd,	// (0x00077f56) list_single_fs_bigclock_pane_ParamLimits

0xacbd,	// (0x00077f56) list_single_fs_bigclock_pane

0xec30,	// (0x0007bec9) main_fs_bigclock_indicator_pane_t1

0xec3f,	// (0x0007bed8) list_single_fs_bigclock_pane_g1

0xec47,	// (0x0007bee0) list_single_fs_bigclock_pane_t1

0x6d15,	// (0x00073fae) main_fs_bigclock_swipe_pane_g1

0xec85,	// (0x0007bf1e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0007d15b) main_fs_bigclock_swipe_pane_g

0xec8d,	// (0x0007bf26) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec8d,	// (0x0007bf26) main_fs_bigclock_swipe_pane_t1

0x4afb,	// (0x00071d94) call_type_pane_ParamLimits

0x2a63,	// (0x0006fcfc) main_btmg_pane

0xe8fb,	// (0x0007bb94) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8fb,	// (0x0007bb94) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0007d0ce) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0007d0ce) list_single_cale_mrui_row_pane_g

0xea4c,	// (0x0007bce5) list_recal_vselct_arw_lo_pane

0xea54,	// (0x0007bced) list_recal_vselct_arw_up_pane

0xea5c,	// (0x0007bcf5) list_recal_vselct_pane

0xecaa,	// (0x0007bf43) btmg_button_pane

0xad23,	// (0x00077fbc) main_btmg_pane_g1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp044

0xecb4,	// (0x0007bf4d) btmg_button_pane_t1

0x11eb,	// (0x0006e484) aid_listscroll_gen

0x1201,	// (0x0006e49a) main_cntbar_detail_pane

0xe624,	// (0x0007b8bd) list_cmail_folder_pane

0xe634,	// (0x0007b8cd) sp_fs_scroll_pane_cp03_ParamLimits

0x29ee,	// (0x0006fc87) list_single_fs_dyc_pane_cp01_ParamLimits

0x29ee,	// (0x0006fc87) list_single_fs_dyc_pane_cp01

0x007d,	// (0x0006d316) aid_size_cmail_indent

0xecc2,	// (0x0007bf5b) list_single_dyc_row_pane_cp01

0xad59,	// (0x00077ff2) cntbar_detail_list_pane_ParamLimits

0xad59,	// (0x00077ff2) cntbar_detail_list_pane

0xada5,	// (0x0007803e) main_cntbar_detail_cont_pane_ParamLimits

0xada5,	// (0x0007803e) main_cntbar_detail_cont_pane

0x4aef,	// (0x00071d88) scroll_pane_cp032_ParamLimits

0x4aef,	// (0x00071d88) scroll_pane_cp032

0xadb9,	// (0x00078052) cntbar_detail_list_event_pane_ParamLimits

0xadb9,	// (0x00078052) cntbar_detail_list_event_pane

0xad69,	// (0x00078002) cntbar_detail_list_shct_pane

0xbb28,	// (0x00078dc1) aid_list_gen

0x0100,	// (0x0006d399) aid_scroll

0x0109,	// (0x0006d3a2) aid_size_touch_scroll_bar

0xadc9,	// (0x00078062) aid_list_double

0x0112,	// (0x0006d3ab) aid_list_single

0x12e6,	// (0x0006e57f) aid_list_single_lg

0xeccb,	// (0x0007bf64) aid_list_z_g_a_sm

0x011b,	// (0x0006d3b4) aid_list_z_g_d

0xecd3,	// (0x0007bf6c) aid_txt_z_prm

0x2a0b,	// (0x0006fca4) aid_txt_z_prm_cp01

0x2a19,	// (0x0006fcb2) aid_txt_z_sec

0xadd2,	// (0x0007806b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xadd2,	// (0x0007806b) main_cntbar_detail_cont_pane_g1

0xade6,	// (0x0007807f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xade6,	// (0x0007807f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0007d160) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0007d160) main_cntbar_detail_cont_pane_g

0x013c,	// (0x0006d3d5) main_cntbar_detail_cont_pane_t1

0x014a,	// (0x0006d3e3) main_cntbar_detail_cont_pane_t2

0x0158,	// (0x0006d3f1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0007d165) main_cntbar_detail_cont_pane_t

0xadf6,	// (0x0007808f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xadf6,	// (0x0007808f) cell_cntbar_detail_list_shct_pane

0x017a,	// (0x0006d413) cntbar_detail_list_shct_pane_g1

0x0183,	// (0x0006d41c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0007d16c) cntbar_detail_list_shct_pane_g

0xae0a,	// (0x000780a3) cntbar_detail_list_event_pane_g1_ParamLimits

0xae0a,	// (0x000780a3) cntbar_detail_list_event_pane_g1

0xae16,	// (0x000780af) cntbar_detail_list_event_pane_g2_ParamLimits

0xae16,	// (0x000780af) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0007d171) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0007d171) cntbar_detail_list_event_pane_g

0xae82,	// (0x0007811b) cntbar_detail_list_event_pane_t1_ParamLimits

0xae82,	// (0x0007811b) cntbar_detail_list_event_pane_t1

0xae97,	// (0x00078130) cntbar_detail_list_event_pane_t2_ParamLimits

0xae97,	// (0x00078130) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0007d17e) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0007d17e) cntbar_detail_list_event_pane_t

0x6d15,	// (0x00073fae) cell_cntbar_detail_list_shct_pane_g1

0x4e4e,	// (0x000720e7) navi_pane_mv_g3

0x1201,	// (0x0006e49a) main_cntbar_detail_pane_ParamLimits

0x2a63,	// (0x0006fcfc) main_notif_wgt_pane

0xedd9,	// (0x0007c072) aid_tch_main_mp4_pane_g4

0xef91,	// (0x0007c22a) popup_slider_window_cp02

0xea43,	// (0x0007bcdc) list_recal_day_event_pane

0xad2d,	// (0x00077fc6) cntbar_detail_btn_pane_ParamLimits

0xad2d,	// (0x00077fc6) cntbar_detail_btn_pane

0xad43,	// (0x00077fdc) cntbar_detail_btn_pane_cp01_ParamLimits

0xad43,	// (0x00077fdc) cntbar_detail_btn_pane_cp01

0xad69,	// (0x00078002) cntbar_detail_list_shct_pane_ParamLimits

0xad79,	// (0x00078012) cntbar_detail_pane_g1_ParamLimits

0xad79,	// (0x00078012) cntbar_detail_pane_g1

0xad89,	// (0x00078022) cntbar_detail_pane_t1_ParamLimits

0xad89,	// (0x00078022) cntbar_detail_pane_t1

0xae22,	// (0x000780bb) cntbar_detail_list_event_pane_g3_ParamLimits

0xae22,	// (0x000780bb) cntbar_detail_list_event_pane_g3

0xae3a,	// (0x000780d3) cntbar_detail_list_event_pane_g4_ParamLimits

0xae3a,	// (0x000780d3) cntbar_detail_list_event_pane_g4

0xae52,	// (0x000780eb) cntbar_detail_list_event_pane_g5_ParamLimits

0xae52,	// (0x000780eb) cntbar_detail_list_event_pane_g5

0xae6a,	// (0x00078103) cntbar_detail_list_event_pane_g6_ParamLimits

0xae6a,	// (0x00078103) cntbar_detail_list_event_pane_g6

0xaeac,	// (0x00078145) cntbar_detail_list_event_pane_t3_ParamLimits

0xaeac,	// (0x00078145) cntbar_detail_list_event_pane_t3

0xaebe,	// (0x00078157) popup_notif_wgt_window_ParamLimits

0xaebe,	// (0x00078157) popup_notif_wgt_window

0xaed7,	// (0x00078170) popup_submenu_window_cp01_ParamLimits

0xaed7,	// (0x00078170) popup_submenu_window_cp01

0xc282,	// (0x0007951b) bg_popup_window_pane_cp10

0x025e,	// (0x0006d4f7) listscroll_notif_wgt_pane

0x0268,	// (0x0006d501) list_notif_wgt_window

0x0271,	// (0x0006d50a) scroll_pane_cp033

0x027a,	// (0x0006d513) list_notif_wgt_row_pane_ParamLimits

0x027a,	// (0x0006d513) list_notif_wgt_row_pane

0x028e,	// (0x0006d527) aid_size_list_notif_wgt_del

0x0297,	// (0x0006d530) list_notif_wgt_row_pane_g1

0x029f,	// (0x0006d538) list_notif_wgt_row_pane_g2

0x02a7,	// (0x0006d540) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0007d185) list_notif_wgt_row_pane_g

0x02b0,	// (0x0006d549) list_notif_wgt_row_pane_t1

0x02be,	// (0x0006d557) list_notif_wgt_row_pane_t2

0x02cc,	// (0x0006d565) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0007d18c) list_notif_wgt_row_pane_t

0xd3d0,	// (0x0007a669) list_recal_day_event_pane_g1

0x02da,	// (0x0006d573) list_recal_day_event_pane_t1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp045

0x02e9,	// (0x0006d582) cntbar_detail_btn_pane_t1

0x11f3,	// (0x0006e48c) main_callh_pane_ParamLimits

0x11f3,	// (0x0006e48c) main_callh_pane

0x2a63,	// (0x0006fcfc) main_coverflow0_pane

0x2a63,	// (0x0006fcfc) main_wgtman_pane

0xa4da,	// (0x00077773) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa4da,	// (0x00077773) main_fs_bigclock_unlock_btn_pane

0xa87d,	// (0x00077b16) bg_button_pane_cp16

0xa895,	// (0x00077b2e) cell_tport_appsw_pane_g3

0xaee9,	// (0x00078182) cf0_flow_pane_ParamLimits

0xaee9,	// (0x00078182) cf0_flow_pane

0x0306,	// (0x0006d59f) listscroll_cf0_pane

0x030f,	// (0x0006d5a8) main_cf0_pane_g1

0xaefe,	// (0x00078197) main_cf0_pane_t1_ParamLimits

0xaefe,	// (0x00078197) main_cf0_pane_t1

0xaf16,	// (0x000781af) main_cf0_pane_t2_ParamLimits

0xaf16,	// (0x000781af) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0007d193) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0007d193) main_cf0_pane_t

0x0341,	// (0x0006d5da) scroll_pane_cp11

0xaf2e,	// (0x000781c7) cf0_flow_pane_g1

0xaf36,	// (0x000781cf) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0007d198) cf0_flow_pane_g

0xaf3e,	// (0x000781d7) cf0_flow_pane_t1

0x2a63,	// (0x0006fcfc) main_call6_pane

0x2a63,	// (0x0006fcfc) main_calllock_pane

0xaf4c,	// (0x000781e5) call6_btn_grp_pane_ParamLimits

0xaf4c,	// (0x000781e5) call6_btn_grp_pane

0xaf66,	// (0x000781ff) call6_pane_g1_ParamLimits

0xaf66,	// (0x000781ff) call6_pane_g1

0xaf7b,	// (0x00078214) popup_call6_1st_window_ParamLimits

0xaf7b,	// (0x00078214) popup_call6_1st_window

0xaf8c,	// (0x00078225) popup_call6_2nd_window_ParamLimits

0xaf8c,	// (0x00078225) popup_call6_2nd_window

0xaf9d,	// (0x00078236) cell_call6_btn_pane_ParamLimits

0xaf9d,	// (0x00078236) cell_call6_btn_pane

0xc282,	// (0x0007951b) bg_popup_call2_in_pane_cp03

0x03b3,	// (0x0006d64c) popup_call6_1st_window_g1

0x03bb,	// (0x0006d654) popup_call6_1st_window_g2

0x03c3,	// (0x0006d65c) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0007d19d) popup_call6_1st_window_g

0x03cb,	// (0x0006d664) popup_call6_1st_window_t1

0x03da,	// (0x0006d673) popup_call6_1st_window_t2

0x03ea,	// (0x0006d683) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0007d1a4) popup_call6_1st_window_t

0xc282,	// (0x0007951b) bg_popup_call2_in_pane_cp04

0x03b3,	// (0x0006d64c) popup_call6_2nd_window_g1

0x03bb,	// (0x0006d654) popup_call6_2nd_window_g2

0x03c3,	// (0x0006d65c) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0007d19d) popup_call6_2nd_window_g

0x03cb,	// (0x0006d664) popup_call6_2nd_window_t1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp15

0x03fa,	// (0x0006d693) cell_call6_btn_pane_g1

0x0403,	// (0x0006d69c) cell_call6_btn_pane_t1

0xafb1,	// (0x0007824a) listscroll_wgtman_pane_ParamLimits

0xafb1,	// (0x0007824a) listscroll_wgtman_pane

0xafc9,	// (0x00078262) wgtman_btn_pane_ParamLimits

0xafc9,	// (0x00078262) wgtman_btn_pane

0xc135,	// (0x000793ce) aid_scroll_copy1

0x042f,	// (0x0006d6c8) list_wgtman_pane

0xafe2,	// (0x0007827b) wgtman_btn_pane_g1_ParamLimits

0xafe2,	// (0x0007827b) wgtman_btn_pane_g1

0xaff6,	// (0x0007828f) wgtman_btn_pane_t1_ParamLimits

0xaff6,	// (0x0007828f) wgtman_btn_pane_t1

0x0457,	// (0x0006d6f0) wgtman_btn_pane_t2_ParamLimits

0x0457,	// (0x0006d6f0) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0007d1ab) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0007d1ab) wgtman_btn_pane_t

0xb011,	// (0x000782aa) listrow_wgtman_pane_ParamLimits

0xb011,	// (0x000782aa) listrow_wgtman_pane

0xb024,	// (0x000782bd) listrow_wgtman_pane_g1

0xb02d,	// (0x000782c6) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0007d1b0) listrow_wgtman_pane_g

0x2a27,	// (0x0006fcc0) listrow_wgtman_pane_t1

0x2a35,	// (0x0006fcce) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0007d1b5) listrow_wgtman_pane_t

0x2a43,	// (0x0006fcdc) wait_bar_pane_cp09

0x0498,	// (0x0006d731) main_calllock_btn_pane

0x04a2,	// (0x0006d73b) main_calllock_pane_g1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp17

0x04ad,	// (0x0006d746) main_calllock_btn_pane_g1

0x04b6,	// (0x0006d74f) main_calllock_btn_pane_t1

0x2a63,	// (0x0006fcfc) main_dialer3_pane

0x2a63,	// (0x0006fcfc) main_fmrd2_pane

0x6d15,	// (0x00073fae) main_fs_bigclock_unlock_btn_pane_g1

0x04cd,	// (0x0006d766) main_fs_bigclock_unlock_btn_pane_t1

0xb037,	// (0x000782d0) area_fmrd2_info_pane_ParamLimits

0xb037,	// (0x000782d0) area_fmrd2_info_pane

0xb049,	// (0x000782e2) area_fmrd2_visual_pane_ParamLimits

0xb049,	// (0x000782e2) area_fmrd2_visual_pane

0xb057,	// (0x000782f0) fmrd2_indi_pane_ParamLimits

0xb057,	// (0x000782f0) fmrd2_indi_pane

0xb064,	// (0x000782fd) area_fmrd2_visual_pane_g1

0xb06c,	// (0x00078305) area_fmrd2_visual_pane_t1

0xb07c,	// (0x00078315) area_fmrd2_visual_pane_t2

0xb08c,	// (0x00078325) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0007d1bf) area_fmrd2_visual_pane_t

0xb09c,	// (0x00078335) area_fmrd2_info_pane_g1

0xb0a4,	// (0x0007833d) area_fmrd2_info_pane_t1

0xb0b4,	// (0x0007834d) area_fmrd2_info_pane_t2

0xb0c4,	// (0x0007835d) area_fmrd2_info_pane_t3

0xb0d4,	// (0x0007836d) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0007d1c6) area_fmrd2_info_pane_t

0xb0e2,	// (0x0007837b) fmrd2_indi_pane_t1

0xb0f2,	// (0x0007838b) fmrd2_indi_pane_t2

0xb102,	// (0x0007839b) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0007d1cf) fmrd2_indi_pane_t

0xe0a4,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0a4,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g5

0xe148,	// (0x0007b3e1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe148,	// (0x0007b3e1) list_single_fs_bigclock_indicator_pane_t5

0xaa17,	// (0x00077cb0) aid_cell_bcale_month_pane_ParamLimits

0xaa17,	// (0x00077cb0) aid_cell_bcale_month_pane

0xaa29,	// (0x00077cc2) bcale_month_pane_ParamLimits

0xaa29,	// (0x00077cc2) bcale_month_pane

0xaa43,	// (0x00077cdc) bcale_preview_pane_ParamLimits

0xaa43,	// (0x00077cdc) bcale_preview_pane

0xec47,	// (0x0007bee0) list_single_fs_bigclock_pane_t1_ParamLimits

0xec61,	// (0x0007befa) list_single_fs_bigclock_pane_t2_ParamLimits

0xec61,	// (0x0007befa) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0007d156) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0007d156) list_single_fs_bigclock_pane_t

0x04c5,	// (0x0006d75e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0007d1ba) main_fs_bigclock_unlock_btn_pane_g

0xb112,	// (0x000783ab) aid_dia3_key_size_ParamLimits

0xb112,	// (0x000783ab) aid_dia3_key_size

0xb121,	// (0x000783ba) aid_dia3_listrow_size_ParamLimits

0xb121,	// (0x000783ba) aid_dia3_listrow_size

0xb12f,	// (0x000783c8) dia3_keypad_fun_pane_ParamLimits

0xb12f,	// (0x000783c8) dia3_keypad_fun_pane

0xb149,	// (0x000783e2) dia3_keypad_num_pane_ParamLimits

0xb149,	// (0x000783e2) dia3_keypad_num_pane

0xb162,	// (0x000783fb) dia3_listscroll_pane_ParamLimits

0xb162,	// (0x000783fb) dia3_listscroll_pane

0xb175,	// (0x0007840e) dia3_numentry_pane_ParamLimits

0xb175,	// (0x0007840e) dia3_numentry_pane

0x0607,	// (0x0006d8a0) dia3_list_pane

0x0612,	// (0x0006d8ab) scroll_pane_cp12

0x2a63,	// (0x0006fcfc) bg_dia3_numentry_pane

0x061d,	// (0x0006d8b6) dia3_numentry_pane_t1

0xb186,	// (0x0007841f) cell_dia3_key_num_pane

0xb18e,	// (0x00078427) cell_dia3_key0_fun_pane_ParamLimits

0xb18e,	// (0x00078427) cell_dia3_key0_fun_pane

0xb1a2,	// (0x0007843b) cell_dia3_key1_fun_pane_ParamLimits

0xb1a2,	// (0x0007843b) cell_dia3_key1_fun_pane

0xd74c,	// (0x0007a9e5) dia3_listrow_pane

0xddc2,	// (0x0007b05b) bg_dia3_numentry_pane_g1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp21

0x0657,	// (0x0006d8f0) cell_dia3_key_num_pane_t1

0x0665,	// (0x0006d8fe) cell_dia3_key_num_pane_t2

0x0674,	// (0x0006d90d) cell_dia3_key_num_pane_t3

0x0683,	// (0x0006d91c) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0007d1d6) cell_dia3_key_num_pane_t

0x2a63,	// (0x0006fcfc) bg_button_pane_cp19

0xb1ba,	// (0x00078453) cell_dia3_key0_fun_pane_g1

0x2a63,	// (0x0006fcfc) bg_button_pane_cp20

0xb1c2,	// (0x0007845b) cell_dia3_key1_fun_pane_g1

0xb1ca,	// (0x00078463) area_left_week_number_pane

0xb1d3,	// (0x0007846c) area_top_day_name_pane

0xb1dc,	// (0x00078475) frame_month_view_pane

0xb1e8,	// (0x00078481) grid_month_view_pane

0xb1f2,	// (0x0007848b) cell_top_day_name_pane_ParamLimits

0xb1f2,	// (0x0007848b) cell_top_day_name_pane

0xb20a,	// (0x000784a3) cell_area_left_week_number_pane_ParamLimits

0xb20a,	// (0x000784a3) cell_area_left_week_number_pane

0xb21e,	// (0x000784b7) cell_month_view_pane_ParamLimits

0xb21e,	// (0x000784b7) cell_month_view_pane

0x0713,	// (0x0006d9ac) frm_month_g1

0xb239,	// (0x000784d2) frm_month_g2

0xb243,	// (0x000784dc) frm_month_g3

0xb24d,	// (0x000784e6) frm_month_g4

0xb257,	// (0x000784f0) frm_month_g5

0xb261,	// (0x000784fa) frm_month_g6

0xb26b,	// (0x00078504) frm_month_g7

0x0758,	// (0x0006d9f1) frm_month_g8

0xb277,	// (0x00078510) frm_month_g9

0xb280,	// (0x00078519) frm_month_g10

0xb289,	// (0x00078522) frm_month_g11

0xb292,	// (0x0007852b) frm_month_g12

0xb29b,	// (0x00078534) frm_month_g13

0xb2a4,	// (0x0007853d) frm_month_g14

0xb2ad,	// (0x00078546) frm_month_g15

0xb2b6,	// (0x0007854f) frm_month_g16

0x000f,

0xff46,	// (0x0007d1df) frm_month_g

0xb2c1,	// (0x0007855a) cell_top_day_name_pane_t1

0xb2d0,	// (0x00078569) cell_area_left_week_number_pane_g1

0xb2c1,	// (0x0007855a) cell_area_left_week_number_pane_t1

0x6d15,	// (0x00073fae) cell_month_view_pane_g1

0xb2d8,	// (0x00078571) cell_month_view_pane_t1

0x2a63,	// (0x0006fcfc) main_fps_pane

0xe377,	// (0x0007b610) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe377,	// (0x0007b610) cmail_ddmenu_btn02_pane_cp1

0xe393,	// (0x0007b62c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe393,	// (0x0007b62c) cmail_ddmenu_btn02_pane_cp2

0xac1e,	// (0x00077eb7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xac1e,	// (0x00077eb7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0007d107) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0007d107) cmail_ddmenu_btn02_pane_g

0xac3c,	// (0x00077ed5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xac3c,	// (0x00077ed5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0007d10c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0007d10c) cmail_ddmenu_btn02_pane_t

0xb2e7,	// (0x00078580) fps_text_pane_ParamLimits

0xb2e7,	// (0x00078580) fps_text_pane

0xb2fe,	// (0x00078597) main_fps_pane_g1_ParamLimits

0xb2fe,	// (0x00078597) main_fps_pane_g1

0xb318,	// (0x000785b1) wait_bar_pane_cp010_ParamLimits

0xb318,	// (0x000785b1) wait_bar_pane_cp010

0xb329,	// (0x000785c2) fps_text_pane_t1_ParamLimits

0xb329,	// (0x000785c2) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
