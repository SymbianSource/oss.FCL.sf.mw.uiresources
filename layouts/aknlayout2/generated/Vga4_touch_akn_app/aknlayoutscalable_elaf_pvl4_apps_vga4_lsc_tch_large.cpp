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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00077178 };

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
0x1028,	// (0x000781a0) Screen

0x1034,	// (0x000781ac) application_window

0x1070,	// (0x000781e8) area_bottom_pane_ParamLimits

0x1070,	// (0x000781e8) area_bottom_pane

0x10a9,	// (0x00078221) area_top_pane_ParamLimits

0x10a9,	// (0x00078221) area_top_pane

0xaac6,	// (0x00081c3e) call_video_uplink_pane_ParamLimits

0xaac6,	// (0x00081c3e) call_video_uplink_pane

0x1137,	// (0x000782af) main_pane_ParamLimits

0x1137,	// (0x000782af) main_pane

0xbe78,	// (0x00082ff0) context_pane

0x57fe,	// (0x0007c976) navi_pane

0x5835,	// (0x0007c9ad) popup_cale_events_window_ParamLimits

0x5835,	// (0x0007c9ad) popup_cale_events_window

0xbe8b,	// (0x00083003) popup_mup_playback_window

0x584d,	// (0x0007c9c5) signal_pane

0xb2a4,	// (0x0008241c) main_browser_pane

0x1cca,	// (0x00078e42) main_burst_pane

0x5516,	// (0x0007c68e) main_calc_pane

0xbe14,	// (0x00082f8c) main_cale_day_pane

0x1648,	// (0x000787c0) main_cale_month_pane

0xbe14,	// (0x00082f8c) main_cale_week_pane

0x1cca,	// (0x00078e42) main_call_pane

0xaf3a,	// (0x000820b2) main_call_poc_pane

0x1cca,	// (0x00078e42) main_camera_pane

0x1cca,	// (0x00078e42) main_chi_dic_pane

0x3931,	// (0x0007aaa9) main_clock_pane

0xaf3a,	// (0x000820b2) main_fmradio_pane

0x1cca,	// (0x00078e42) main_graph_messa_pane

0xaf3a,	// (0x000820b2) main_help_pane

0xb2a4,	// (0x0008241c) main_im_pane

0xb195,	// (0x0008230d) main_image_pane_ParamLimits

0xb195,	// (0x0008230d) main_image_pane

0xaf3a,	// (0x000820b2) main_location2_pane

0x1cca,	// (0x00078e42) main_location_pane

0xb195,	// (0x0008230d) main_messa_pane

0xaf3a,	// (0x000820b2) main_mp2_pane

0x1cca,	// (0x00078e42) main_mp_pane

0xaf3a,	// (0x000820b2) main_msg_pane

0xaf3a,	// (0x000820b2) main_mup_eq_pane

0xaf3a,	// (0x000820b2) main_mup_pane

0xb2a4,	// (0x0008241c) main_notes_pane

0xaf3a,	// (0x000820b2) main_pec_pane

0xaf3a,	// (0x000820b2) main_phob_pane

0xaf3a,	// (0x000820b2) main_pinb_pane

0xaf3a,	// (0x000820b2) main_postcard_pane

0xaf3a,	// (0x000820b2) main_qdial_pane

0x1cca,	// (0x00078e42) main_skin_pane

0xaf3a,	// (0x000820b2) main_smil2_pane

0x1cca,	// (0x00078e42) main_smil_pane

0x1cca,	// (0x00078e42) main_video_pane

0x1cca,	// (0x00078e42) main_video_tele_pane

0xb195,	// (0x0008230d) main_viewer_pane_ParamLimits

0xb195,	// (0x0008230d) main_viewer_pane

0x1cca,	// (0x00078e42) main_vorec_pane

0x556c,	// (0x0007c6e4) popup_blid_sat_info_window_ParamLimits

0x556c,	// (0x0007c6e4) popup_blid_sat_info_window

0x55d0,	// (0x0007c748) popup_dyc_status_message_window_ParamLimits

0x55d0,	// (0x0007c748) popup_dyc_status_message_window

0x55ea,	// (0x0007c762) popup_grid_large_graphic_window_ParamLimits

0x55ea,	// (0x0007c762) popup_grid_large_graphic_window

0x56ac,	// (0x0007c824) popup_loc_request_window_ParamLimits

0x56ac,	// (0x0007c824) popup_loc_request_window

0x57d2,	// (0x0007c94a) popup_wml_address_window_ParamLimits

0x57d2,	// (0x0007c94a) popup_wml_address_window

0x5354,	// (0x0007c4cc) call_muted_g1

0x4951,	// (0x0007bac9) popup_call_audio_conf_window_ParamLimits

0x4951,	// (0x0007bac9) popup_call_audio_conf_window

0x5364,	// (0x0007c4dc) popup_call_audio_first_window_ParamLimits

0x5364,	// (0x0007c4dc) popup_call_audio_first_window

0x53da,	// (0x0007c552) popup_call_audio_in_window_ParamLimits

0x53da,	// (0x0007c552) popup_call_audio_in_window

0x5416,	// (0x0007c58e) popup_call_audio_out_window_ParamLimits

0x5416,	// (0x0007c58e) popup_call_audio_out_window

0x5450,	// (0x0007c5c8) popup_call_audio_second_window_ParamLimits

0x5450,	// (0x0007c5c8) popup_call_audio_second_window

0x54a6,	// (0x0007c61e) popup_call_audio_wait_window_ParamLimits

0x54a6,	// (0x0007c61e) popup_call_audio_wait_window

0x54db,	// (0x0007c653) popup_number_entry_window_ParamLimits

0x54db,	// (0x0007c653) popup_number_entry_window

0xaaf2,	// (0x00081c6a) bg_popup_call_pane_cp05_ParamLimits

0xaaf2,	// (0x00081c6a) bg_popup_call_pane_cp05

0xab12,	// (0x00081c8a) popup_number_entry_window_t1

0xab25,	// (0x00081c9d) popup_number_entry_window_t2

0xab37,	// (0x00081caf) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000861e3) popup_number_entry_window_t

0xab7e,	// (0x00081cf6) text_title_cp2

0xab91,	// (0x00081d09) bg_popup_call_pane_cp_ParamLimits

0xab91,	// (0x00081d09) bg_popup_call_pane_cp

0xab9f,	// (0x00081d17) call_thumbnail_pane

0xaba7,	// (0x00081d1f) popup_call_audio_in_window_g1_ParamLimits

0xaba7,	// (0x00081d1f) popup_call_audio_in_window_g1

0xabb3,	// (0x00081d2b) popup_call_audio_in_window_g2_ParamLimits

0xabb3,	// (0x00081d2b) popup_call_audio_in_window_g2

0xabbf,	// (0x00081d37) popup_call_audio_in_window_g3_ParamLimits

0xabbf,	// (0x00081d37) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000861ec) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000861ec) popup_call_audio_in_window_g

0xabcb,	// (0x00081d43) popup_call_audio_in_window_t1_ParamLimits

0xabcb,	// (0x00081d43) popup_call_audio_in_window_t1

0xabe7,	// (0x00081d5f) popup_call_audio_in_window_t2_ParamLimits

0xabe7,	// (0x00081d5f) popup_call_audio_in_window_t2

0xac03,	// (0x00081d7b) popup_call_audio_in_window_t3_ParamLimits

0xac03,	// (0x00081d7b) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000861f3) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000861f3) popup_call_audio_in_window_t

0xab91,	// (0x00081d09) bg_popup_call_pane_cp01_ParamLimits

0xab91,	// (0x00081d09) bg_popup_call_pane_cp01

0xab9f,	// (0x00081d17) call_thumbnail_pane_cp02

0xac16,	// (0x00081d8e) call_type_pane_cp022

0xac1e,	// (0x00081d96) popup_call_audio_out_window_g1_ParamLimits

0xac1e,	// (0x00081d96) popup_call_audio_out_window_g1

0xac30,	// (0x00081da8) popup_call_audio_out_window_g2_ParamLimits

0xac30,	// (0x00081da8) popup_call_audio_out_window_g2

0xac3c,	// (0x00081db4) popup_call_audio_out_window_g3_ParamLimits

0xac3c,	// (0x00081db4) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000861fa) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000861fa) popup_call_audio_out_window_g

0xac4e,	// (0x00081dc6) popup_call_audio_out_window_t1_ParamLimits

0xac4e,	// (0x00081dc6) popup_call_audio_out_window_t1

0xac66,	// (0x00081dde) popup_call_audio_out_window_t2_ParamLimits

0xac66,	// (0x00081dde) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00086201) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00086201) popup_call_audio_out_window_t

0xac7b,	// (0x00081df3) bg_popup_call_pane_ParamLimits

0xac7b,	// (0x00081df3) bg_popup_call_pane

0x12be,	// (0x00078436) call_thumbnail_pane_cp_ParamLimits

0x12be,	// (0x00078436) call_thumbnail_pane_cp

0xacff,	// (0x00081e77) call_type_pane_cp01_ParamLimits

0xacff,	// (0x00081e77) call_type_pane_cp01

0xad43,	// (0x00081ebb) popup_call_audio_first_window_g1_ParamLimits

0xad43,	// (0x00081ebb) popup_call_audio_first_window_g1

0xad8f,	// (0x00081f07) popup_call_audio_first_window_g2_ParamLimits

0xad8f,	// (0x00081f07) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00086206) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00086206) popup_call_audio_first_window_g

0xadd3,	// (0x00081f4b) popup_call_audio_first_window_t1_ParamLimits

0xadd3,	// (0x00081f4b) popup_call_audio_first_window_t1

0xae7f,	// (0x00081ff7) popup_call_audio_first_window_t4_ParamLimits

0xae7f,	// (0x00081ff7) popup_call_audio_first_window_t4

0xaf0b,	// (0x00082083) popup_call_audio_first_window_t5_ParamLimits

0xaf0b,	// (0x00082083) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0008620b) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0008620b) popup_call_audio_first_window_t

0xaf3a,	// (0x000820b2) bg_popup_call_pane_cp02

0xaf44,	// (0x000820bc) call_type_pane_cp023

0xaf4c,	// (0x000820c4) popup_call_audio_wait_window_g1

0xaf54,	// (0x000820cc) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00086212) popup_call_audio_wait_window_g

0xaf5c,	// (0x000820d4) popup_call_audio_wait_window_t3

0xaf6a,	// (0x000820e2) bg_popup_call_pane_cp03_ParamLimits

0xaf6a,	// (0x000820e2) bg_popup_call_pane_cp03

0xafca,	// (0x00082142) call_thumbnail_pane_cp011_ParamLimits

0xafca,	// (0x00082142) call_thumbnail_pane_cp011

0xafd6,	// (0x0008214e) call_type_pane_cp034_ParamLimits

0xafd6,	// (0x0008214e) call_type_pane_cp034

0xb012,	// (0x0008218a) popup_call_audio_second_window_g1_ParamLimits

0xb012,	// (0x0008218a) popup_call_audio_second_window_g1

0xb04e,	// (0x000821c6) popup_call_audio_second_window_g2_ParamLimits

0xb04e,	// (0x000821c6) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00086217) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00086217) popup_call_audio_second_window_g

0xb08a,	// (0x00082202) popup_call_audio_second_window_t1_ParamLimits

0xb08a,	// (0x00082202) popup_call_audio_second_window_t1

0xb10b,	// (0x00082283) popup_call_audio_second_window_t2_ParamLimits

0xb10b,	// (0x00082283) popup_call_audio_second_window_t2

0xb141,	// (0x000822b9) popup_call_audio_second_window_t3_ParamLimits

0xb141,	// (0x000822b9) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0008621c) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0008621c) popup_call_audio_second_window_t

0xaf3a,	// (0x000820b2) bg_popup_call_pane_cp04

0xb177,	// (0x000822ef) list_conf_pane

0xb17f,	// (0x000822f7) popup_call_audio_conf_window_t1

0xb18d,	// (0x00082305) call_thumbnail_pane_g1

0xb195,	// (0x0008230d) bg_pinb_pane_ParamLimits

0xb195,	// (0x0008230d) bg_pinb_pane

0xb1a3,	// (0x0008231b) find_pinb_pane

0xb195,	// (0x0008230d) listscroll_pinb_pane_ParamLimits

0xb195,	// (0x0008230d) listscroll_pinb_pane

0xb1ad,	// (0x00082325) pinb_bg_pane_g1

0xb1ad,	// (0x00082325) pinb_bg_pane_g2

0xb1ad,	// (0x00082325) pinb_bg_pane_g3

0xb1ad,	// (0x00082325) pinb_bg_pane_g4

0xb1ad,	// (0x00082325) pinb_bg_pane_g5

0xb1ad,	// (0x00082325) pinb_bg_pane_g6

0xb1ad,	// (0x00082325) pinb_bg_pane_g7

0xb1ad,	// (0x00082325) pinb_bg_pane_g8

0xb1ad,	// (0x00082325) pinb_bg_pane_g9

0xb1ad,	// (0x00082325) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00086223) pinb_bg_pane_g

0xaa67,	// (0x00081bdf) grid_pinb_pane

0xaa67,	// (0x00081bdf) list_pinb_pane

0xaae4,	// (0x00081c5c) scroll_pane_cp01_ParamLimits

0xaae4,	// (0x00081c5c) scroll_pane_cp01

0xb1b7,	// (0x0008232f) find_pinb_pane_g1_ParamLimits

0xb1b7,	// (0x0008232f) find_pinb_pane_g1

0xb1cf,	// (0x00082347) find_pinb_pane_t1

0xb1e1,	// (0x00082359) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0008623d) find_pinb_pane_t

0xb1f6,	// (0x0008236e) input_focus_pane_cp01_ParamLimits

0xb1f6,	// (0x0008236e) input_focus_pane_cp01

0xb202,	// (0x0008237a) cell_pinb_pane_ParamLimits

0xb202,	// (0x0008237a) cell_pinb_pane

0xb210,	// (0x00082388) cell_pinb_pane_g1_ParamLimits

0xb210,	// (0x00082388) cell_pinb_pane_g1

0xb21e,	// (0x00082396) cell_pinb_pane_g2_ParamLimits

0xb21e,	// (0x00082396) cell_pinb_pane_g2

0xb21e,	// (0x00082396) cell_pinb_pane_g3_ParamLimits

0xb21e,	// (0x00082396) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00086242) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00086242) cell_pinb_pane_g

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp01

0xb202,	// (0x0008237a) list_pinb_item_pane_ParamLimits

0xb202,	// (0x0008237a) list_pinb_item_pane

0xaa67,	// (0x00081bdf) list_highlight_pane_cp02

0xb22c,	// (0x000823a4) list_pinb_item_pane_g1_ParamLimits

0xb22c,	// (0x000823a4) list_pinb_item_pane_g1

0xb21e,	// (0x00082396) list_pinb_item_pane_g2_ParamLimits

0xb21e,	// (0x00082396) list_pinb_item_pane_g2

0xb210,	// (0x00082388) list_pinb_item_pane_g3_ParamLimits

0xb210,	// (0x00082388) list_pinb_item_pane_g3

0xb21e,	// (0x00082396) list_pinb_item_pane_g4_ParamLimits

0xb21e,	// (0x00082396) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00086249) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00086249) list_pinb_item_pane_g

0xb23a,	// (0x000823b2) list_pinb_item_pane_t1_ParamLimits

0xb23a,	// (0x000823b2) list_pinb_item_pane_t1

0x1302,	// (0x0007847a) calc_display_pane

0x1327,	// (0x0007849f) calc_paper_pane

0x134a,	// (0x000784c2) grid_calc_pane

0xaf3a,	// (0x000820b2) bg_list_pane_cp01

0x1378,	// (0x000784f0) clock_g1

0x1380,	// (0x000784f8) clock_g2

0x0001,

0xf0da,	// (0x00086252) clock_g

0x1388,	// (0x00078500) clock_t1_ParamLimits

0x1388,	// (0x00078500) clock_t1

0x139d,	// (0x00078515) clock_t2_ParamLimits

0x139d,	// (0x00078515) clock_t2

0x13af,	// (0x00078527) clock_t3_ParamLimits

0x13af,	// (0x00078527) clock_t3

0x13c1,	// (0x00078539) clock_t4_ParamLimits

0x13c1,	// (0x00078539) clock_t4

0x13d3,	// (0x0007854b) clock_t5_ParamLimits

0x13d3,	// (0x0007854b) clock_t5

0x13e8,	// (0x00078560) clock_t6_ParamLimits

0x13e8,	// (0x00078560) clock_t6

0x13fa,	// (0x00078572) clock_t7_ParamLimits

0x13fa,	// (0x00078572) clock_t7

0x140c,	// (0x00078584) clock_t8_ParamLimits

0x140c,	// (0x00078584) clock_t8

0x1420,	// (0x00078598) clock_t9_ParamLimits

0x1420,	// (0x00078598) clock_t9

0x0008,

0xf0df,	// (0x00086257) clock_t_ParamLimits

0xf0df,	// (0x00086257) clock_t

0xb256,	// (0x000823ce) popup_clock_analogue_window_cp02

0xb256,	// (0x000823ce) popup_clock_digital_window_cp01

0xaf3a,	// (0x000820b2) listscroll_help_pane

0xaf3a,	// (0x000820b2) phob_pre_status_pane

0xb25e,	// (0x000823d6) grid_qdial_pane

0x1436,	// (0x000785ae) listscroll_mce_pane

0xb195,	// (0x0008230d) bg_notes_pane

0xb268,	// (0x000823e0) list_notes_pane

0x1452,	// (0x000785ca) scroll_pane_cp06

0xb276,	// (0x000823ee) bg_calc_paper_pane

0xb28a,	// (0x00082402) list_calc_pane

0xb2a4,	// (0x0008241c) bg_calc_display_pane

0x1466,	// (0x000785de) calc_display_pane_t1

0x1478,	// (0x000785f0) calc_display_pane_t2

0xb2b0,	// (0x00082428) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0008626a) calc_display_pane_t

0x148a,	// (0x00078602) cell_calc_pane_ParamLimits

0x148a,	// (0x00078602) cell_calc_pane

0xb2c2,	// (0x0008243a) bg_calc_paper_pane_g1

0xb2ce,	// (0x00082446) bg_calc_paper_pane_g2

0xb2da,	// (0x00082452) bg_calc_paper_pane_g3

0xb2e6,	// (0x0008245e) bg_calc_paper_pane_g4

0xb2f2,	// (0x0008246a) bg_calc_paper_pane_g5

0x14c5,	// (0x0007863d) bg_calc_paper_pane_g6

0x14d3,	// (0x0007864b) bg_calc_paper_pane_g7

0x14e1,	// (0x00078659) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00086271) bg_calc_paper_pane_g

0x14f4,	// (0x0007866c) calc_bg_paper_pane_g9

0x1507,	// (0x0007867f) list_calc_item_pane_ParamLimits

0x1507,	// (0x0007867f) list_calc_item_pane

0xb2fe,	// (0x00082476) list_calc_item_pane_g1

0xb30b,	// (0x00082483) list_calc_item_pane_t1_ParamLimits

0xb30b,	// (0x00082483) list_calc_item_pane_t1

0x151f,	// (0x00078697) list_calc_item_pane_t2_ParamLimits

0x151f,	// (0x00078697) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00086282) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00086282) list_calc_item_pane_t

0xb1ad,	// (0x00082325) cell_calc_pane_g1

0xb31d,	// (0x00082495) grid_highlight_pane_cp02

0xb33f,	// (0x000824b7) bg_calc_display_pane_g1

0x1551,	// (0x000786c9) bg_calc_display_pane_g2

0x155b,	// (0x000786d3) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0008628c) bg_calc_display_pane_g

0x1564,	// (0x000786dc) cell_qdial_pane_ParamLimits

0x1564,	// (0x000786dc) cell_qdial_pane

0x1578,	// (0x000786f0) cell_qdial_pane_g1_ParamLimits

0x1578,	// (0x000786f0) cell_qdial_pane_g1

0x158e,	// (0x00078706) cell_qdial_pane_g2_ParamLimits

0x158e,	// (0x00078706) cell_qdial_pane_g2

0xb348,	// (0x000824c0) cell_qdial_pane_g3_ParamLimits

0xb348,	// (0x000824c0) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00086293) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00086293) cell_qdial_pane_g

0x15b5,	// (0x0007872d) cell_qdial_pane_t1_ParamLimits

0x15b5,	// (0x0007872d) cell_qdial_pane_t1

0x15cd,	// (0x00078745) cell_qdial_pane_t2_ParamLimits

0x15cd,	// (0x00078745) cell_qdial_pane_t2

0x15e0,	// (0x00078758) cell_qdial_pane_t3_ParamLimits

0x15e0,	// (0x00078758) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0008629c) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0008629c) cell_qdial_pane_t

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp04

0xb354,	// (0x000824cc) thumbnail_qdial_pane_ParamLimits

0xb354,	// (0x000824cc) thumbnail_qdial_pane

0xb3b0,	// (0x00082528) list_help_pane

0xb3b9,	// (0x00082531) scroll_pane_cp02

0x15f3,	// (0x0007876b) help_list_pane_t1_ParamLimits

0x15f3,	// (0x0007876b) help_list_pane_t1

0xb3c2,	// (0x0008253a) bg_notes_pane_g2

0xb3ca,	// (0x00082542) bg_notes_pane_g3

0xb3d2,	// (0x0008254a) notes_bg_pane_g1

0xb3da,	// (0x00082552) notes_bg_pane_g4

0xb3e2,	// (0x0008255a) notes_bg_pane_g5

0xb3ea,	// (0x00082562) notes_bg_pane_g6

0xb3f2,	// (0x0008256a) notes_bg_pane_g7

0xb3fa,	// (0x00082572) notes_bg_pane_g8

0xb402,	// (0x0008257a) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000862ba) notes_bg_pane_g

0x1617,	// (0x0007878f) list_notes_text_pane_ParamLimits

0x1617,	// (0x0007878f) list_notes_text_pane

0x162e,	// (0x000787a6) list_notes_text_pane_g1

0x07a2,	// (0x0007791a) list_notes_text_pane_t1

0x1648,	// (0x000787c0) listscroll_cale_week_pane

0x167b,	// (0x000787f3) bg_cale_heading_pane

0x169f,	// (0x00078817) bg_cale_pane_cp01

0x16bc,	// (0x00078834) cale_week_corner_pane

0x16db,	// (0x00078853) cale_week_day_heading_pane

0x1704,	// (0x0007887c) cale_week_scroll_pane_g1

0x1723,	// (0x0007889b) cale_week_scroll_pane_g2

0x173b,	// (0x000788b3) cale_week_scroll_pane_g3

0x1753,	// (0x000788cb) cale_week_scroll_pane_g4

0x176b,	// (0x000788e3) cale_week_scroll_pane_g5

0x178b,	// (0x00078903) cale_week_scroll_pane_g6

0x17ab,	// (0x00078923) cale_week_scroll_pane_g7

0x17cf,	// (0x00078947) cale_week_scroll_pane_g8

0x17f3,	// (0x0007896b) cale_week_scroll_pane_g9

0x180b,	// (0x00078983) cale_week_scroll_pane_g10

0x1823,	// (0x0007899b) cale_week_scroll_pane_g11

0x183b,	// (0x000789b3) cale_week_scroll_pane_g12

0x185f,	// (0x000789d7) cale_week_scroll_pane_g13

0x185f,	// (0x000789d7) cale_week_scroll_pane_g14

0x185f,	// (0x000789d7) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000862c9) cale_week_scroll_pane_g

0x18a7,	// (0x00078a1f) cale_week_time_pane

0x18cb,	// (0x00078a43) grid_cale_week_pane

0x190f,	// (0x00078a87) scroll_pane_cp08

0x192c,	// (0x00078aa4) cell_cale_week_pane_ParamLimits

0x192c,	// (0x00078aa4) cell_cale_week_pane

0x19c8,	// (0x00078b40) cale_week_day_heading_pane_t1

0x19f2,	// (0x00078b6a) cale_week_day_heading_pane_t2

0x1a21,	// (0x00078b99) cale_week_day_heading_pane_t3

0x1a50,	// (0x00078bc8) cale_week_day_heading_pane_t4

0x1a7f,	// (0x00078bf7) cale_week_day_heading_pane_t5

0x1ab2,	// (0x00078c2a) cale_week_day_heading_pane_t6

0x1ae9,	// (0x00078c61) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000862ea) cale_week_day_heading_pane_t

0x1b13,	// (0x00078c8b) bg_cale_side_pane

0x1b21,	// (0x00078c99) cale_week_time_pane_t1

0x1b3b,	// (0x00078cb3) cale_week_time_pane_t2

0x1b55,	// (0x00078ccd) cale_week_time_pane_t3

0x1b6f,	// (0x00078ce7) cale_week_time_pane_t4

0x1b89,	// (0x00078d01) cale_week_time_pane_t5

0x1ba3,	// (0x00078d1b) cale_week_time_pane_t6

0x1bc3,	// (0x00078d3b) cale_week_time_pane_t7

0x1be9,	// (0x00078d61) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000862f9) cale_week_time_pane_t

0x1c0f,	// (0x00078d87) cell_cale_week_pane_g2

0x1c33,	// (0x00078dab) cell_cale_week_pane_g3_ParamLimits

0x1c33,	// (0x00078dab) cell_cale_week_pane_g3

0x1c4b,	// (0x00078dc3) grid_highlight_pane_cp07

0x1c53,	// (0x00078dcb) listscroll_gms_pane

0x1c5d,	// (0x00078dd5) grid_gms_pane

0x1c66,	// (0x00078dde) listscroll_gms_pane_g1

0x1c6e,	// (0x00078de6) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0008630a) listscroll_gms_pane_g

0x1c76,	// (0x00078dee) scroll_pane_cp010

0x1c81,	// (0x00078df9) cell_gms_pane_ParamLimits

0x1c81,	// (0x00078df9) cell_gms_pane

0x1c98,	// (0x00078e10) cell_gms_pane_g1

0x1ca0,	// (0x00078e18) cell_gms_pane_g2

0x1ca8,	// (0x00078e20) cell_gms_pane_g3

0x1cb1,	// (0x00078e29) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0008630f) cell_gms_pane_g

0x1cba,	// (0x00078e32) grid_highlight_pane_cp09

0x52d8,	// (0x0007c450) phob_pre_status_pane_g1

0x52e0,	// (0x0007c458) phob_pre_status_pane_g2

0x52e8,	// (0x0007c460) phob_pre_status_pane_g3

0x52f0,	// (0x0007c468) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x000866d3) phob_pre_status_pane_g

0x5300,	// (0x0007c478) phob_pre_status_pane_t1

0x5310,	// (0x0007c488) phob_pre_status_pane_t2

0x5320,	// (0x0007c498) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x000866de) phob_pre_status_pane_t

0x1cca,	// (0x00078e42) bg_list_pane_cp05

0x1cd2,	// (0x00078e4a) grid_vorec_pane

0x1cdc,	// (0x00078e54) vorec_t1

0x1cea,	// (0x00078e62) vorec_t2

0x1cf8,	// (0x00078e70) vorec_t3

0x1d06,	// (0x00078e7e) vorec_t4

0xa4dd,	// (0x00081655) vorec_t5

0xa4eb,	// (0x00081663) vorec_t6

0x0004,

0xf1a0,	// (0x00086318) vorec_t

0xa4f9,	// (0x00081671) wait_bar_pane_cp01

0x1d22,	// (0x00078e9a) cell_vorec_pane_ParamLimits

0x1d22,	// (0x00078e9a) cell_vorec_pane

0xb40a,	// (0x00082582) cell_vorec_pane_g1

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp05

0xaae4,	// (0x00081c5c) cams_zoom_pane

0xaae4,	// (0x00081c5c) image_vga_pane

0xb210,	// (0x00082388) main_camera_pane_g1

0xb210,	// (0x00082388) main_camera_pane_g2

0xb210,	// (0x00082388) main_camera_pane_g3

0xb210,	// (0x00082388) main_camera_pane_g4

0xb210,	// (0x00082388) main_camera_pane_g5

0xb210,	// (0x00082388) main_camera_pane_g6

0xb210,	// (0x00082388) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00086323) main_camera_pane_g

0x1d37,	// (0x00078eaf) main_camera_pane_t1

0x1d37,	// (0x00078eaf) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00086334) main_camera_pane_t

0x1d5f,	// (0x00078ed7) cams_zoom_pane_cp_ParamLimits

0x1d5f,	// (0x00078ed7) cams_zoom_pane_cp

0x1d93,	// (0x00078f0b) image_cif_pane_ParamLimits

0x1d93,	// (0x00078f0b) image_cif_pane

0xaa67,	// (0x00081bdf) image_subqcif_pane

0x1da5,	// (0x00078f1d) main_video_pane_g1_ParamLimits

0x1da5,	// (0x00078f1d) main_video_pane_g1

0x1dd3,	// (0x00078f4b) main_video_pane_g2_ParamLimits

0x1dd3,	// (0x00078f4b) main_video_pane_g2

0x1e0d,	// (0x00078f85) main_video_pane_g3_ParamLimits

0x1e0d,	// (0x00078f85) main_video_pane_g3

0x1e0d,	// (0x00078f85) main_video_pane_g4_ParamLimits

0x1e0d,	// (0x00078f85) main_video_pane_g4

0x1e41,	// (0x00078fb9) main_video_pane_g5_ParamLimits

0x1e41,	// (0x00078fb9) main_video_pane_g5

0x1e4f,	// (0x00078fc7) main_video_pane_g6_ParamLimits

0x1e4f,	// (0x00078fc7) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00086339) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00086339) main_video_pane_g

0x1e77,	// (0x00078fef) main_video_pane_t1_ParamLimits

0x1e77,	// (0x00078fef) main_video_pane_t1

0x1ebb,	// (0x00079033) cams_zoom_pane_g1

0x1ebb,	// (0x00079033) cams_zoom_pane_g2

0x1ebb,	// (0x00079033) cams_zoom_pane_g3

0x1ebb,	// (0x00079033) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00086348) cams_zoom_pane_g

0x1ed9,	// (0x00079051) grid_cams_pane

0x1ef3,	// (0x0007906b) linegrid_cams_pane

0x1f05,	// (0x0007907d) cell_cams_pane_ParamLimits

0x1f05,	// (0x0007907d) cell_cams_pane

0x1f27,	// (0x0007909f) cams_burst_image_pane

0x1f2f,	// (0x000790a7) cell_cams_pane_g1

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp03

0xb1ad,	// (0x00082325) mp_bg_pane_g1

0xaa67,	// (0x00081bdf) bg_list_pane_cp03

0xaa67,	// (0x00081bdf) bg_mp_pane

0xaa67,	// (0x00081bdf) grid_mp_pane

0x1ebb,	// (0x00079033) media_player_g1

0x363d,	// (0x0007a7b5) media_player_t1

0x363d,	// (0x0007a7b5) media_player_t2

0x363d,	// (0x0007a7b5) media_player_t3

0x363d,	// (0x0007a7b5) media_player_t4

0x363d,	// (0x0007a7b5) media_player_t5

0x363d,	// (0x0007a7b5) media_player_t6

0x363d,	// (0x0007a7b5) media_player_t7

0x0006,

0xf545,	// (0x000866bd) media_player_t

0xaa67,	// (0x00081bdf) wait_bar_pane_cp02

0xf52a,	// (0x000866a2) main_usb_pane_t

0x3931,	// (0x0007aaa9) cell_mp_pane

0xb1ad,	// (0x00082325) cell_mp_pane_g1

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp06

0x1f37,	// (0x000790af) grid_skin_colour_pane

0x1f3f,	// (0x000790b7) list_highlight_pane_cp03

0x1f47,	// (0x000790bf) skin_g1

0x1f51,	// (0x000790c9) skin_t1

0x1f60,	// (0x000790d8) skin_t2

0x0001,

0xf1fe,	// (0x00086376) skin_t

0x1f6e,	// (0x000790e6) cell_skin_colour_pane_ParamLimits

0x1f6e,	// (0x000790e6) cell_skin_colour_pane

0x1f8e,	// (0x00079106) cell_skin_colour_pane_g1

0x1ff3,	// (0x0007916b) call_video_g1_ParamLimits

0x1ff3,	// (0x0007916b) call_video_g1

0x200f,	// (0x00079187) call_video_g2_ParamLimits

0x200f,	// (0x00079187) call_video_g2

0x0001,

0xf203,	// (0x0008637b) call_video_g_ParamLimits

0xf203,	// (0x0008637b) call_video_g

0x2054,	// (0x000791cc) call_video_uplink_pane_cp1_ParamLimits

0x2054,	// (0x000791cc) call_video_uplink_pane_cp1

0x20b9,	// (0x00079231) call_video_uplink_pane_cp2

0x20fd,	// (0x00079275) video_down_crop_pane_ParamLimits

0x20fd,	// (0x00079275) video_down_crop_pane

0x21e6,	// (0x0007935e) video_down_pane_ParamLimits

0x21e6,	// (0x0007935e) video_down_pane

0x22d8,	// (0x00079450) video_down_subqcif_pane_ParamLimits

0x22d8,	// (0x00079450) video_down_subqcif_pane

0x22f2,	// (0x0007946a) video_down_subqcif_pane_cp_ParamLimits

0x22f2,	// (0x0007946a) video_down_subqcif_pane_cp

0x2333,	// (0x000794ab) im_reading_pane_ParamLimits

0x2333,	// (0x000794ab) im_reading_pane

0x2345,	// (0x000794bd) im_writing_pane_ParamLimits

0x2345,	// (0x000794bd) im_writing_pane

0x236b,	// (0x000794e3) im_reading_pane_t1

0x23aa,	// (0x00079522) list_im_pane

0x23bb,	// (0x00079533) scroll_pane_cp07

0x23d4,	// (0x0007954c) im_writing_pane_t1_ParamLimits

0x23d4,	// (0x0007954c) im_writing_pane_t1

0x23e9,	// (0x00079561) im_writing_pane_t2_ParamLimits

0x23e9,	// (0x00079561) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00086385) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00086385) im_writing_pane_t

0xaf3a,	// (0x000820b2) input_focus_pane_cp04

0xaf3a,	// (0x000820b2) input_focus_pane_cp05

0x2406,	// (0x0007957e) list_im_single_pane_ParamLimits

0x2406,	// (0x0007957e) list_im_single_pane

0x241f,	// (0x00079597) list_single_im_pane_t1

0x1cca,	// (0x00078e42) blid_accuracy_pane

0x1cca,	// (0x00078e42) blid_compass_pane

0xbdcc,	// (0x00082f44) main_location_t1

0xbdcc,	// (0x00082f44) main_location_t2

0xbdcc,	// (0x00082f44) main_location_t3

0x0002,

0xf554,	// (0x000866cc) main_location_t

0xaf3a,	// (0x000820b2) aid_levels_location

0xb1ad,	// (0x00082325) blid_accuracy_pane_g1

0xb1ad,	// (0x00082325) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x000863d4) blid_accuracy_pane_g

0x2459,	// (0x000795d1) wml_content_pane

0x2497,	// (0x0007960f) wml_button_pane_ParamLimits

0x2497,	// (0x0007960f) wml_button_pane

0x24ab,	// (0x00079623) wml_list_single_large_pane_ParamLimits

0x24ab,	// (0x00079623) wml_list_single_large_pane

0x24c4,	// (0x0007963c) wml_list_single_medium_pane_ParamLimits

0x24c4,	// (0x0007963c) wml_list_single_medium_pane

0x24de,	// (0x00079656) wml_list_single_small_pane_ParamLimits

0x24de,	// (0x00079656) wml_list_single_small_pane

0x24fd,	// (0x00079675) wml_selection_box_pane_ParamLimits

0x24fd,	// (0x00079675) wml_selection_box_pane

0x2510,	// (0x00079688) wml_list_single_pane_t1

0x251f,	// (0x00079697) wml_list_single_medium_pane_t1

0x252e,	// (0x000796a6) wml_list_single_large_pane_t1

0x253d,	// (0x000796b5) input_focus_pane_cp02_ParamLimits

0x253d,	// (0x000796b5) input_focus_pane_cp02

0x2550,	// (0x000796c8) wml_selection_box_pane_g1

0x2559,	// (0x000796d1) wml_selection_box_pane_t1_ParamLimits

0x2559,	// (0x000796d1) wml_selection_box_pane_t1

0xb195,	// (0x0008230d) bg_wml_button_pane_ParamLimits

0xb195,	// (0x0008230d) bg_wml_button_pane

0x2571,	// (0x000796e9) wml_button_pane_g1

0x2579,	// (0x000796f1) wml_button_pane_t1

0x2571,	// (0x000796e9) wml_button_bg_pane_g1

0x2589,	// (0x00079701) wml_button_bg_pane_g2

0x2591,	// (0x00079709) wml_button_bg_pane_g3

0x2599,	// (0x00079711) wml_button_bg_pane_g4

0x25a1,	// (0x00079719) wml_button_bg_pane_g5

0x25a9,	// (0x00079721) wml_button_bg_pane_g6

0x25b1,	// (0x00079729) wml_button_bg_pane_g7

0x25b9,	// (0x00079731) wml_button_bg_pane_g8

0x25c1,	// (0x00079739) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0008638a) wml_button_bg_pane_g

0x25c9,	// (0x00079741) bg_list_pane_cp02

0x25d1,	// (0x00079749) mce_header_pane_ParamLimits

0x25d1,	// (0x00079749) mce_header_pane

0x25e7,	// (0x0007975f) mce_icon_pane

0x25e7,	// (0x0007975f) mce_image_pane

0x25f0,	// (0x00079768) mce_text_pane_ParamLimits

0x25f0,	// (0x00079768) mce_text_pane

0x2603,	// (0x0007977b) scroll_pane_cp03

0x248f,	// (0x00079607) scroll_pane_cp04

0x260b,	// (0x00079783) scroll_pane_cp05_ParamLimits

0x260b,	// (0x00079783) scroll_pane_cp05

0x2617,	// (0x0007978f) mce_header_field_pane_ParamLimits

0x2617,	// (0x0007978f) mce_header_field_pane

0x2630,	// (0x000797a8) mce_header_field_pane_2_ParamLimits

0x2630,	// (0x000797a8) mce_header_field_pane_2

0x2646,	// (0x000797be) mce_header_field_pane_3

0x264e,	// (0x000797c6) list_single_mce_message_pane_ParamLimits

0x264e,	// (0x000797c6) list_single_mce_message_pane

0x265d,	// (0x000797d5) list_single_mce_smart_pane_ParamLimits

0x265d,	// (0x000797d5) list_single_mce_smart_pane

0x2677,	// (0x000797ef) input_focus_pane_cp03

0x2680,	// (0x000797f8) list_header_data_pane

0x2688,	// (0x00079800) mce_header_field_pane_t1

0x2696,	// (0x0007980e) list_single_mce_header_pane_ParamLimits

0x2696,	// (0x0007980e) list_single_mce_header_pane

0x26aa,	// (0x00079822) list_single_mce_header_pane_t1

0x26b9,	// (0x00079831) list_single_mce_message_pane_g1

0x26c1,	// (0x00079839) list_single_mce_message_pane_t1

0x26f5,	// (0x0007986d) bg_cale_heading_pane_cp01_ParamLimits

0x26f5,	// (0x0007986d) bg_cale_heading_pane_cp01

0x2747,	// (0x000798bf) bg_cale_pane_cp02_ParamLimits

0x2747,	// (0x000798bf) bg_cale_pane_cp02

0x2774,	// (0x000798ec) cale_month_corner_pane

0x2793,	// (0x0007990b) cale_month_day_heading_pane_ParamLimits

0x2793,	// (0x0007990b) cale_month_day_heading_pane

0x27fd,	// (0x00079975) cale_month_pane_g1_ParamLimits

0x27fd,	// (0x00079975) cale_month_pane_g1

0x2844,	// (0x000799bc) cale_month_pane_g2_ParamLimits

0x2844,	// (0x000799bc) cale_month_pane_g2

0x2880,	// (0x000799f8) cale_month_pane_g3_ParamLimits

0x2880,	// (0x000799f8) cale_month_pane_g3

0x28d4,	// (0x00079a4c) cale_month_pane_g4_ParamLimits

0x28d4,	// (0x00079a4c) cale_month_pane_g4

0x2928,	// (0x00079aa0) cale_month_pane_g5_ParamLimits

0x2928,	// (0x00079aa0) cale_month_pane_g5

0x2984,	// (0x00079afc) cale_month_pane_g6_ParamLimits

0x2984,	// (0x00079afc) cale_month_pane_g6

0x29ec,	// (0x00079b64) cale_month_pane_g7_ParamLimits

0x29ec,	// (0x00079b64) cale_month_pane_g7

0x2a58,	// (0x00079bd0) cale_month_pane_g8_ParamLimits

0x2a58,	// (0x00079bd0) cale_month_pane_g8

0x2ac4,	// (0x00079c3c) cale_month_pane_g9_ParamLimits

0x2ac4,	// (0x00079c3c) cale_month_pane_g9

0x2b28,	// (0x00079ca0) cale_month_pane_g10_ParamLimits

0x2b28,	// (0x00079ca0) cale_month_pane_g10

0x2b7a,	// (0x00079cf2) cale_month_pane_g11_ParamLimits

0x2b7a,	// (0x00079cf2) cale_month_pane_g11

0x2bcc,	// (0x00079d44) cale_month_pane_g12_ParamLimits

0x2bcc,	// (0x00079d44) cale_month_pane_g12

0x2c24,	// (0x00079d9c) cale_month_pane_g13_ParamLimits

0x2c24,	// (0x00079d9c) cale_month_pane_g13

0x000c,

0xf225,	// (0x0008639d) cale_month_pane_g_ParamLimits

0xf225,	// (0x0008639d) cale_month_pane_g

0x2c8e,	// (0x00079e06) cale_month_week_pane

0x2cb2,	// (0x00079e2a) grid_cale_month_pane_ParamLimits

0x2cb2,	// (0x00079e2a) grid_cale_month_pane

0x2d13,	// (0x00079e8b) cale_month_day_heading_pane_t1

0x2d99,	// (0x00079f11) cale_month_day_heading_pane_t2

0x2e12,	// (0x00079f8a) cale_month_day_heading_pane_t3

0x2e8b,	// (0x0007a003) cale_month_day_heading_pane_t4

0x2f0c,	// (0x0007a084) cale_month_day_heading_pane_t5

0x2f95,	// (0x0007a10d) cale_month_day_heading_pane_t6

0x3026,	// (0x0007a19e) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x000863b8) cale_month_day_heading_pane_t

0x1b13,	// (0x00078c8b) bg_cale_side_pane_cp01

0x30b7,	// (0x0007a22f) cale_month_week_pane_t1

0x30d0,	// (0x0007a248) cale_month_week_pane_t2

0x30e9,	// (0x0007a261) cale_month_week_pane_t3

0x3102,	// (0x0007a27a) cale_month_week_pane_t4

0x311b,	// (0x0007a293) cale_month_week_pane_t5

0x3134,	// (0x0007a2ac) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x000863c7) cale_month_week_pane_t

0x3159,	// (0x0007a2d1) cell_cale_month_pane_ParamLimits

0x3159,	// (0x0007a2d1) cell_cale_month_pane

0xb414,	// (0x0008258c) cell_cale_month_pane_g1

0x32a3,	// (0x0007a41b) cell_cale_month_pane_t1_ParamLimits

0x32a3,	// (0x0007a41b) cell_cale_month_pane_t1

0x1c4b,	// (0x00078dc3) grid_highlight_pane_cp08

0xb1ad,	// (0x00082325) main_smil_g1

0x32cf,	// (0x0007a447) smil_status_pane

0x32da,	// (0x0007a452) smil_text_pane

0xbce2,	// (0x00082e5a) bg_popup_call3_rect_pane_g8

0xbcea,	// (0x00082e62) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00086660) bg_popup_call3_rect_pane_g

0xbf00,	// (0x00083078) smil_status_volume_pane_g1

0x32ee,	// (0x0007a466) smil_status_pane_t1

0xbf33,	// (0x000830ab) volume_smil_pane

0x3305,	// (0x0007a47d) list_smil_text_pane

0x330f,	// (0x0007a487) scroll_pane_cp011

0x331a,	// (0x0007a492) smil_text_list_pane_t1_ParamLimits

0x331a,	// (0x0007a492) smil_text_list_pane_t1

0xb420,	// (0x00082598) aid_volume_smil_ParamLimits

0xb420,	// (0x00082598) aid_volume_smil

0xb1ad,	// (0x00082325) smil_volume_pane_g1

0xb1ad,	// (0x00082325) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x000863d4) smil_volume_pane_g

0x1648,	// (0x000787c0) listscroll_cale_day_pane

0x3365,	// (0x0007a4dd) bg_cale_pane

0x337d,	// (0x0007a4f5) list_cale_pane

0x33a0,	// (0x0007a518) scroll_pane_cp09

0x33b1,	// (0x0007a529) cale_bg_pane_g1

0x33b9,	// (0x0007a531) cale_bg_pane_g2

0x33c1,	// (0x0007a539) cale_bg_pane_g3

0x33c9,	// (0x0007a541) cale_bg_pane_g4

0x33d1,	// (0x0007a549) cale_bg_pane_g5

0x33d9,	// (0x0007a551) cale_bg_pane_g6

0x33e1,	// (0x0007a559) cale_bg_pane_g7

0x33e9,	// (0x0007a561) cale_bg_pane_g8

0x33f1,	// (0x0007a569) cale_bg_pane_g9

0x0008,

0xf261,	// (0x000863d9) cale_bg_pane_g

0x3401,	// (0x0007a579) list_cale_time_pane_ParamLimits

0x3401,	// (0x0007a579) list_cale_time_pane

0x341b,	// (0x0007a593) list_cale_time_pane_g1_ParamLimits

0x341b,	// (0x0007a593) list_cale_time_pane_g1

0x3427,	// (0x0007a59f) list_cale_time_pane_g2_ParamLimits

0x3427,	// (0x0007a59f) list_cale_time_pane_g2

0x3434,	// (0x0007a5ac) list_cale_time_pane_g3_ParamLimits

0x3434,	// (0x0007a5ac) list_cale_time_pane_g3

0x3442,	// (0x0007a5ba) list_cale_time_pane_g4_ParamLimits

0x3442,	// (0x0007a5ba) list_cale_time_pane_g4

0x3450,	// (0x0007a5c8) list_cale_time_pane_g5_ParamLimits

0x3450,	// (0x0007a5c8) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x000863ec) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x000863ec) list_cale_time_pane_g

0x346b,	// (0x0007a5e3) list_cale_time_pane_t1_ParamLimits

0x346b,	// (0x0007a5e3) list_cale_time_pane_t1

0x3493,	// (0x0007a60b) list_cale_time_pane_t2_ParamLimits

0x3493,	// (0x0007a60b) list_cale_time_pane_t2

0x3b6c,	// (0x0007ace4) aid_blid_cardinal_pane

0x3bba,	// (0x0007ad32) compass_pane_t4

0x34bb,	// (0x0007a633) list_cale_time_pane_t4_ParamLimits

0x34bb,	// (0x0007a633) list_cale_time_pane_t4

0x3bc8,	// (0x0007ad40) compass_pane_t5

0x3bd8,	// (0x0007ad50) compass_pane_t6

0x3be6,	// (0x0007ad5e) compass_pane_t7

0x3c7e,	// (0x0007adf6) navi_pane_cc_t1

0x3e9d,	// (0x0007b015) aid_phob_thumbnail_center_pane

0x4323,	// (0x0007b49b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x000863f9) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x000863f9) list_cale_time_pane_t

0xab91,	// (0x00081d09) bg_popup_window_pane_cp02_ParamLimits

0xab91,	// (0x00081d09) bg_popup_window_pane_cp02

0x34e3,	// (0x0007a65b) heading_pane_cp01_ParamLimits

0x34e3,	// (0x0007a65b) heading_pane_cp01

0x34ef,	// (0x0007a667) loc_req_pane_ParamLimits

0x34ef,	// (0x0007a667) loc_req_pane

0x34ff,	// (0x0007a677) loc_type_pane_ParamLimits

0x34ff,	// (0x0007a677) loc_type_pane

0x3511,	// (0x0007a689) loc_type_pane_t1_ParamLimits

0x3511,	// (0x0007a689) loc_type_pane_t1

0x3523,	// (0x0007a69b) loc_type_pane_t2_ParamLimits

0x3523,	// (0x0007a69b) loc_type_pane_t2

0x3535,	// (0x0007a6ad) loc_type_pane_t3_ParamLimits

0x3535,	// (0x0007a6ad) loc_type_pane_t3

0x0002,

0xf288,	// (0x00086400) loc_type_pane_t_ParamLimits

0xf288,	// (0x00086400) loc_type_pane_t

0x3547,	// (0x0007a6bf) list_loc_req_pane

0x3551,	// (0x0007a6c9) scroll_pane_cp012

0x355c,	// (0x0007a6d4) list_single_loc_request_popup_menu_pane_ParamLimits

0x355c,	// (0x0007a6d4) list_single_loc_request_popup_menu_pane

0x3569,	// (0x0007a6e1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3569,	// (0x0007a6e1) list_single_loc_request_popup_menu_pane_g1

0x3575,	// (0x0007a6ed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3575,	// (0x0007a6ed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00086407) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00086407) list_single_loc_request_popup_menu_pane_g

0x3581,	// (0x0007a6f9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3581,	// (0x0007a6f9) list_single_loc_request_popup_menu_pane_t1

0xb195,	// (0x0008230d) bg_popup_window_pane_cp03_ParamLimits

0xb195,	// (0x0008230d) bg_popup_window_pane_cp03

0x3597,	// (0x0007a70f) heading_loc_req_pane_ParamLimits

0x3597,	// (0x0007a70f) heading_loc_req_pane

0x35a3,	// (0x0007a71b) popup_dyc_status_message_window_g1_ParamLimits

0x35a3,	// (0x0007a71b) popup_dyc_status_message_window_g1

0x35b7,	// (0x0007a72f) popup_dyc_status_message_window_t1_ParamLimits

0x35b7,	// (0x0007a72f) popup_dyc_status_message_window_t1

0x35cc,	// (0x0007a744) popup_dyc_status_message_window_t2_ParamLimits

0x35cc,	// (0x0007a744) popup_dyc_status_message_window_t2

0x35e1,	// (0x0007a759) popup_dyc_status_message_window_t3_ParamLimits

0x35e1,	// (0x0007a759) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0008640c) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0008640c) popup_dyc_status_message_window_t

0xaf3a,	// (0x000820b2) bg_heading_pane_cp01

0x35fd,	// (0x0007a775) heading_loc_req_pane_g1

0x3605,	// (0x0007a77d) heading_loc_req_pane_g2

0x360d,	// (0x0007a785) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00086413) heading_loc_req_pane_g

0x3615,	// (0x0007a78d) heading_loc_req_pane_t1

0x364d,	// (0x0007a7c5) bg_popup_sub_pane_cp01_ParamLimits

0x364d,	// (0x0007a7c5) bg_popup_sub_pane_cp01

0x365b,	// (0x0007a7d3) popup_cale_events_window_g1_ParamLimits

0x365b,	// (0x0007a7d3) popup_cale_events_window_g1

0x367b,	// (0x0007a7f3) popup_cale_events_window_g2_ParamLimits

0x367b,	// (0x0007a7f3) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00086435) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00086435) popup_cale_events_window_g

0x369b,	// (0x0007a813) popup_cale_events_window_t1_ParamLimits

0x369b,	// (0x0007a813) popup_cale_events_window_t1

0x36ad,	// (0x0007a825) popup_cale_events_window_t2_ParamLimits

0x36ad,	// (0x0007a825) popup_cale_events_window_t2

0x36eb,	// (0x0007a863) popup_cale_events_window_t3_ParamLimits

0x36eb,	// (0x0007a863) popup_cale_events_window_t3

0x3725,	// (0x0007a89d) popup_cale_events_window_t4_ParamLimits

0x3725,	// (0x0007a89d) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0008643a) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0008643a) popup_cale_events_window_t

0x375b,	// (0x0007a8d3) call_type_pane

0x376b,	// (0x0007a8e3) popup_call_status_window_g1

0x377f,	// (0x0007a8f7) popup_call_status_window_g2

0x3793,	// (0x0007a90b) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00086443) popup_call_status_window_g

0x37a3,	// (0x0007a91b) call_type_pane_g1

0x37ac,	// (0x0007a924) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0008644a) call_type_pane_g

0xaf3a,	// (0x000820b2) bg_popup_sub_pane_cp02

0x37b5,	// (0x0007a92d) listscroll_popup_wml_pane

0x37bd,	// (0x0007a935) list_wml_pane

0x37c7,	// (0x0007a93f) scroll_pane_cp013

0x37d2,	// (0x0007a94a) list_single_graphic_popup_wml_pane_ParamLimits

0x37d2,	// (0x0007a94a) list_single_graphic_popup_wml_pane

0xb1ad,	// (0x00082325) list_single_graphic_popup_wml_pane_g1

0x37e6,	// (0x0007a95e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0008644f) list_single_graphic_popup_wml_pane_g

0x37ee,	// (0x0007a966) list_single_graphic_popup_wml_pane_t1

0x3804,	// (0x0007a97c) aid_call_pane

0xb18d,	// (0x00082305) popup_clock_analogue_window_g1

0xb18d,	// (0x00082305) popup_clock_analogue_window_g2

0xb442,	// (0x000825ba) popup_clock_analogue_window_g3

0xb442,	// (0x000825ba) popup_clock_analogue_window_g4

0xb1ad,	// (0x00082325) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00086454) popup_clock_analogue_window_g

0xb44a,	// (0x000825c2) popup_clock_analogue_window_t1

0xb458,	// (0x000825d0) clock_digital_number_pane_ParamLimits

0xb458,	// (0x000825d0) clock_digital_number_pane

0xb464,	// (0x000825dc) clock_digital_number_pane_cp02_ParamLimits

0xb464,	// (0x000825dc) clock_digital_number_pane_cp02

0xb470,	// (0x000825e8) clock_digital_number_pane_cp03_ParamLimits

0xb470,	// (0x000825e8) clock_digital_number_pane_cp03

0xb47c,	// (0x000825f4) clock_digital_number_pane_cp04_ParamLimits

0xb47c,	// (0x000825f4) clock_digital_number_pane_cp04

0xb488,	// (0x00082600) clock_digital_separator_pane_ParamLimits

0xb488,	// (0x00082600) clock_digital_separator_pane

0xb494,	// (0x0008260c) popup_clock_digital_window_t1

0xb1ad,	// (0x00082325) clock_digital_number_pane_g1

0xb1ad,	// (0x00082325) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x000863d4) clock_digital_number_pane_g

0xb1ad,	// (0x00082325) clock_digital_separator_pane_g1

0xb1ad,	// (0x00082325) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x000863d4) clock_digital_separator_pane_g

0xaf3a,	// (0x000820b2) bg_popup_window_pane_cp04

0x380c,	// (0x0007a984) heading_pane_cp03

0x1cca,	// (0x00078e42) listscroll_popup_gms_pane

0xaf3a,	// (0x000820b2) grid_large_graphic_popup_pane

0x3815,	// (0x0007a98d) listscroll_popup_gms_pane_g1

0x381e,	// (0x0007a996) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0008645f) listscroll_popup_gms_pane_g

0x3827,	// (0x0007a99f) scroll_pane_cp014

0xb202,	// (0x0008237a) cell_large_graphic_popup_pane_ParamLimits

0xb202,	// (0x0008237a) cell_large_graphic_popup_pane

0xb210,	// (0x00082388) cell_large_graphic_popup_pane_g1_ParamLimits

0xb210,	// (0x00082388) cell_large_graphic_popup_pane_g1

0x3830,	// (0x0007a9a8) cell_large_graphic_popup_pane_g2_ParamLimits

0x3830,	// (0x0007a9a8) cell_large_graphic_popup_pane_g2

0x383e,	// (0x0007a9b6) cell_large_graphic_popup_pane_g3_ParamLimits

0x383e,	// (0x0007a9b6) cell_large_graphic_popup_pane_g3

0x384c,	// (0x0007a9c4) cell_large_graphic_popup_pane_g4_ParamLimits

0x384c,	// (0x0007a9c4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00086464) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00086464) cell_large_graphic_popup_pane_g

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp010

0xb1ad,	// (0x00082325) bg_popup_call_pane_g1

0x385d,	// (0x0007a9d5) list_single_graphic_popup_conf_pane_ParamLimits

0x385d,	// (0x0007a9d5) list_single_graphic_popup_conf_pane

0x386f,	// (0x0007a9e7) list_highlight_pane_cp01

0x3878,	// (0x0007a9f0) list_single_graphic_popup_conf_pane_g1

0x3880,	// (0x0007a9f8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0008646d) list_single_graphic_popup_conf_pane_g

0x3888,	// (0x0007aa00) list_single_graphic_popup_conf_pane_t1

0x3896,	// (0x0007aa0e) linegrid_cams_pane_g1

0x389f,	// (0x0007aa17) linegrid_cams_pane_g2

0x1ca8,	// (0x00078e20) linegrid_cams_pane_g3

0x38a8,	// (0x0007aa20) linegrid_cams_pane_g4

0x38b1,	// (0x0007aa29) linegrid_cams_pane_g5

0x38ba,	// (0x0007aa32) linegrid_cams_pane_g6

0x1cb1,	// (0x00078e29) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00086472) linegrid_cams_pane_g

0x38c5,	// (0x0007aa3d) popup_clock_analogue_window

0x38c5,	// (0x0007aa3d) popup_clock_digital_window

0xaf3a,	// (0x000820b2) popup_phob_thumbnail_window

0xb1ad,	// (0x00082325) call_video_uplink_pane_g1

0x38ce,	// (0x0007aa46) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00086481) call_video_uplink_pane_g

0x38d6,	// (0x0007aa4e) video_uplink_pane

0x38de,	// (0x0007aa56) mce_image_pane_g1

0x38e8,	// (0x0007aa60) mce_image_pane_g2

0x38f2,	// (0x0007aa6a) mce_image_pane_g3

0x38fc,	// (0x0007aa74) mce_image_pane_g4

0x3904,	// (0x0007aa7c) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00086486) mce_image_pane_g

0x390c,	// (0x0007aa84) control_top_pane_stacon_cp01_ParamLimits

0x390c,	// (0x0007aa84) control_top_pane_stacon_cp01

0x3920,	// (0x0007aa98) uni_indicator_pane_stacon_cp01_ParamLimits

0x3920,	// (0x0007aa98) uni_indicator_pane_stacon_cp01

0x3931,	// (0x0007aaa9) bg_popup_sub_pane_cp03

0x393b,	// (0x0007aab3) chi_dic_find_pane

0x3943,	// (0x0007aabb) listscroll_chi_dic_pane

0x394c,	// (0x0007aac4) main_pane_chidic_g1

0x395f,	// (0x0007aad7) chi_dic_find_pane_t1

0x396d,	// (0x0007aae5) find_chidic_pane

0x3976,	// (0x0007aaee) chi_dic_list_pane_ParamLimits

0x3976,	// (0x0007aaee) chi_dic_list_pane

0x3987,	// (0x0007aaff) scroll_pane_cp020

0x398f,	// (0x0007ab07) find_chidic_pane_t1

0xaf3a,	// (0x000820b2) input_focus_pane_cp06

0x399e,	// (0x0007ab16) list_chi_dic_pane_ParamLimits

0x399e,	// (0x0007ab16) list_chi_dic_pane

0x39b0,	// (0x0007ab28) list_chi_dic_pane_t1_ParamLimits

0x39b0,	// (0x0007ab28) list_chi_dic_pane_t1

0xaf3a,	// (0x000820b2) list_highlight_pane_cp020

0x39c3,	// (0x0007ab3b) bg_cale_heading_pane_g1

0x39cb,	// (0x0007ab43) bg_cale_heading_pane_g2

0x39d3,	// (0x0007ab4b) bg_cale_heading_pane_g3

0x39db,	// (0x0007ab53) bg_cale_heading_pane_g4

0x39e5,	// (0x0007ab5d) bg_cale_heading_pane_g5

0x39ef,	// (0x0007ab67) bg_cale_heading_pane_g6

0x39f7,	// (0x0007ab6f) bg_cale_heading_pane_g7

0x39ff,	// (0x0007ab77) bg_cale_heading_pane_g8

0x3a09,	// (0x0007ab81) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00086491) bg_cale_heading_pane_g

0x39c3,	// (0x0007ab3b) bg_cale_side_pane_g1

0x3a13,	// (0x0007ab8b) bg_cale_side_pane_g2

0x3a1d,	// (0x0007ab95) bg_cale_side_pane_g3

0x3a27,	// (0x0007ab9f) bg_cale_side_pane_g4

0x3a31,	// (0x0007aba9) bg_cale_side_pane_g5

0x3a3b,	// (0x0007abb3) bg_cale_side_pane_g6

0x3a45,	// (0x0007abbd) bg_cale_side_pane_g7

0x3a4f,	// (0x0007abc7) bg_cale_side_pane_g8

0x3a57,	// (0x0007abcf) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x000864a4) bg_cale_side_pane_g

0x3a5f,	// (0x0007abd7) popup_call_status_window_ParamLimits

0x3a5f,	// (0x0007abd7) popup_call_status_window

0x3aac,	// (0x0007ac24) stacon_top_pane

0x3ab4,	// (0x0007ac2c) status_pane_ParamLimits

0x3ab4,	// (0x0007ac2c) status_pane

0x3ac9,	// (0x0007ac41) status_small_pane

0x3ad1,	// (0x0007ac49) control_pane

0xaf3a,	// (0x000820b2) stacon_bottom_pane

0x3ad9,	// (0x0007ac51) list_single_mce_smart_pane_t1_ParamLimits

0x3ad9,	// (0x0007ac51) list_single_mce_smart_pane_t1

0x3aec,	// (0x0007ac64) list_single_mce_smart_pane_t2_ParamLimits

0x3aec,	// (0x0007ac64) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x000864b7) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x000864b7) list_single_mce_smart_pane_t

0x3b0b,	// (0x0007ac83) compass_pane

0x3b16,	// (0x0007ac8e) main_location2_pane_t1

0x3b2c,	// (0x0007aca4) main_location2_pane_t2

0x3b42,	// (0x0007acba) main_location2_pane_t3

0x0003,

0xf344,	// (0x000864bc) main_location2_pane_t

0x3b90,	// (0x0007ad08) compass_pane_g1_ParamLimits

0x3b90,	// (0x0007ad08) compass_pane_g1

0x3b9c,	// (0x0007ad14) compass_pane_t1

0x3bab,	// (0x0007ad23) compass_pane_t2

0x0005,

0xf34d,	// (0x000864c5) compass_pane_t

0x3bf6,	// (0x0007ad6e) text_secondary_cp61

0x3c75,	// (0x0007aded) navi_pane_cams_g5

0x3cf1,	// (0x0007ae69) navi_pane_im_t1

0x3cff,	// (0x0007ae77) navi_pane_mp_g1_ParamLimits

0x3cff,	// (0x0007ae77) navi_pane_mp_g1

0x3d13,	// (0x0007ae8b) navi_pane_mp_g2_ParamLimits

0x3d13,	// (0x0007ae8b) navi_pane_mp_g2

0x3d1f,	// (0x0007ae97) navi_pane_mp_g3_ParamLimits

0x3d1f,	// (0x0007ae97) navi_pane_mp_g3

0x0002,

0xf361,	// (0x000864d9) navi_pane_mp_g_ParamLimits

0xf361,	// (0x000864d9) navi_pane_mp_g

0x3d2b,	// (0x0007aea3) navi_pane_mp_t1

0x3d39,	// (0x0007aeb1) navi_pane_mp_t2

0x0002,

0xf368,	// (0x000864e0) navi_pane_mp_t

0x3de6,	// (0x0007af5e) navi_pane_vt_g1

0x3d2b,	// (0x0007aea3) navi_pane_vt_t1

0x3dee,	// (0x0007af66) navi_slider_pane

0x1cca,	// (0x00078e42) zooming_pane

0x3dfe,	// (0x0007af76) navi_slider_pane_g1

0xb4b1,	// (0x00082629) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x000864e7) navi_slider_pane_g

0x3e22,	// (0x0007af9a) aid_levels_zoom

0x3e2a,	// (0x0007afa2) zooming_pane_g1

0x3e32,	// (0x0007afaa) zooming_pane_g2

0x3e32,	// (0x0007afaa) zooming_pane_g3

0x0002,

0xf37e,	// (0x000864f6) zooming_pane_g

0x3e3a,	// (0x0007afb2) level_10_zoom

0x3e43,	// (0x0007afbb) level_11_zoom

0x3e4c,	// (0x0007afc4) level_1_zoom

0x3e55,	// (0x0007afcd) level_2_zoom

0x3e5e,	// (0x0007afd6) level_3_zoom

0x3e67,	// (0x0007afdf) level_4_zoom

0x3e70,	// (0x0007afe8) level_5_zoom

0x3e79,	// (0x0007aff1) level_6_zoom

0x3e82,	// (0x0007affa) level_7_zoom

0x3e8b,	// (0x0007b003) level_8_zoom

0x3e94,	// (0x0007b00c) level_9_zoom

0x3ea5,	// (0x0007b01d) popup_phob_thumbnail_window_g1

0x3ead,	// (0x0007b025) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x000864fd) popup_phob_thumbnail_window_g

0x5330,	// (0x0007c4a8) level_1_location

0x5338,	// (0x0007c4b0) level_2_location

0x5340,	// (0x0007c4b8) level_3_location

0x534a,	// (0x0007c4c2) level_4_location

0x1cca,	// (0x00078e42) level_5_location

0x3eb5,	// (0x0007b02d) mce_icon_pane_g1

0x3ebd,	// (0x0007b035) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00086502) mce_icon_pane_g

0x3ec5,	// (0x0007b03d) main_mup_pane_g1_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g1

0x3ec5,	// (0x0007b03d) main_mup_pane_g2_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g2

0x3ec5,	// (0x0007b03d) main_mup_pane_g3_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g3

0x3ec5,	// (0x0007b03d) main_mup_pane_g4_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g4

0x3ec5,	// (0x0007b03d) main_mup_pane_g5_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g5

0x3ec5,	// (0x0007b03d) main_mup_pane_g6_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g6

0x3ec5,	// (0x0007b03d) main_mup_pane_g7_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g7

0x3ec5,	// (0x0007b03d) main_mup_pane_g8_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g8

0x3ec5,	// (0x0007b03d) main_mup_pane_g9_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g9

0x3ec5,	// (0x0007b03d) main_mup_pane_g10_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g10

0x3ec5,	// (0x0007b03d) main_mup_pane_g11_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g11

0xb210,	// (0x00082388) main_mup_pane_g12_ParamLimits

0xb210,	// (0x00082388) main_mup_pane_g12

0x3ec5,	// (0x0007b03d) main_mup_pane_g13_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00086507) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00086507) main_mup_pane_g

0x3ed3,	// (0x0007b04b) main_mup_pane_t1_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup_pane_t1

0x3ed3,	// (0x0007b04b) main_mup_pane_t2_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup_pane_t2

0x3ed3,	// (0x0007b04b) main_mup_pane_t3_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup_pane_t3

0x1d37,	// (0x00078eaf) main_mup_pane_t4_ParamLimits

0x1d37,	// (0x00078eaf) main_mup_pane_t4

0x1d37,	// (0x00078eaf) main_mup_pane_t5_ParamLimits

0x1d37,	// (0x00078eaf) main_mup_pane_t5

0x3ee7,	// (0x0007b05f) main_mup_pane_t6_ParamLimits

0x3ee7,	// (0x0007b05f) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00086522) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00086522) main_mup_pane_t

0xb202,	// (0x0008237a) mup_progress_pane_ParamLimits

0xb202,	// (0x0008237a) mup_progress_pane

0x3efb,	// (0x0007b073) mup_visualizer_pane_ParamLimits

0x3efb,	// (0x0007b073) mup_visualizer_pane

0x3efb,	// (0x0007b073) mup_volume_pane_ParamLimits

0x3efb,	// (0x0007b073) mup_volume_pane

0xb21e,	// (0x00082396) mup_visualizer_pane_g1_ParamLimits

0xb21e,	// (0x00082396) mup_visualizer_pane_g1

0x3f09,	// (0x0007b081) mup_visualizer_pane_g2_ParamLimits

0x3f09,	// (0x0007b081) mup_visualizer_pane_g2

0xb210,	// (0x00082388) mup_visualizer_pane_g3_ParamLimits

0xb210,	// (0x00082388) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0008652f) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0008652f) mup_visualizer_pane_g

0x1ebb,	// (0x00079033) mup_volume_pane_g1

0x1ebb,	// (0x00079033) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00086536) mup_volume_pane_g

0x1ebb,	// (0x00079033) mup_progress_pane_g1

0x1ebb,	// (0x00079033) mup_progress_pane_g2

0x1ebb,	// (0x00079033) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0008653b) mup_progress_pane_g

0xaf3a,	// (0x000820b2) bg_popup_window_pane_cp05

0x3f17,	// (0x0007b08f) heading_pane_cp02_ParamLimits

0x3f17,	// (0x0007b08f) heading_pane_cp02

0x3f33,	// (0x0007b0ab) list_popup_blid_pane

0x3f3b,	// (0x0007b0b3) list_blid_sat_info_pane_ParamLimits

0x3f3b,	// (0x0007b0b3) list_blid_sat_info_pane

0x3f4e,	// (0x0007b0c6) list_blid_sat_info_pane_g1

0x3f56,	// (0x0007b0ce) list_blid_sat_info_pane_t1

0x4070,	// (0x0007b1e8) mup_equalizer_pane_ParamLimits

0x4070,	// (0x0007b1e8) mup_equalizer_pane

0x4091,	// (0x0007b209) mup_equalizer_pane_cp1_ParamLimits

0x4091,	// (0x0007b209) mup_equalizer_pane_cp1

0x40b2,	// (0x0007b22a) mup_equalizer_pane_cp2_ParamLimits

0x40b2,	// (0x0007b22a) mup_equalizer_pane_cp2

0x40d7,	// (0x0007b24f) mup_equalizer_pane_cp3_ParamLimits

0x40d7,	// (0x0007b24f) mup_equalizer_pane_cp3

0x4100,	// (0x0007b278) mup_equalizer_pane_cp4_ParamLimits

0x4100,	// (0x0007b278) mup_equalizer_pane_cp4

0x4129,	// (0x0007b2a1) mup_equalizer_pane_cp5

0x4141,	// (0x0007b2b9) mup_equalizer_pane_cp6

0x4159,	// (0x0007b2d1) mup_equalizer_pane_cp7

0xbd62,	// (0x00082eda) bg_popup_call_poc_act_pane_g9

0xbd6a,	// (0x00082ee2) bg_popup_call_poc_act_pane_g10

0xbd72,	// (0x00082eea) bg_popup_call_poc_act_pane_g11

0x000a,

0xb195,	// (0x0008230d) mup_scale_pane

0xb1ad,	// (0x00082325) mup_scale_pane_g1

0x4171,	// (0x0007b2e9) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00086557) mup_scale_pane_g

0x41a7,	// (0x0007b31f) msg_data_pane

0x41af,	// (0x0007b327) scroll_pane_cp017

0x07b0,	// (0x00077928) bg_list_pane_cp04_ParamLimits

0x07b0,	// (0x00077928) bg_list_pane_cp04

0x41b7,	// (0x0007b32f) msg_data_pane_g1

0x41bf,	// (0x0007b337) msg_data_pane_g2

0x41c9,	// (0x0007b341) msg_data_pane_g3

0x41d3,	// (0x0007b34b) msg_data_pane_g4

0x41db,	// (0x0007b353) msg_data_pane_g5

0x41e3,	// (0x0007b35b) msg_data_pane_g6

0x41eb,	// (0x0007b363) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00086566) msg_data_pane_g

0x07d0,	// (0x00077948) msg_text_pane_ParamLimits

0x07d0,	// (0x00077948) msg_text_pane

0x41f3,	// (0x0007b36b) qrid_highlight_pane_cp011_ParamLimits

0x41f3,	// (0x0007b36b) qrid_highlight_pane_cp011

0xaf3a,	// (0x000820b2) msg_body_pane

0xaf3a,	// (0x000820b2) msg_header_pane

0x4212,	// (0x0007b38a) input_focus_pane_cp07

0xb4cb,	// (0x00082643) msg_header_pane_t1_ParamLimits

0xb4cb,	// (0x00082643) msg_header_pane_t1

0xb4e1,	// (0x00082659) msg_header_pane_t2_ParamLimits

0xb4e1,	// (0x00082659) msg_header_pane_t2

0x0001,

0xf402,	// (0x0008657a) msg_header_pane_t_ParamLimits

0xf402,	// (0x0008657a) msg_header_pane_t

0x4227,	// (0x0007b39f) msg_body_pane_g1

0xb4f8,	// (0x00082670) msg_body_pane_t1_ParamLimits

0xb4f8,	// (0x00082670) msg_body_pane_t1

0xb529,	// (0x000826a1) msg_body_pane_t2_ParamLimits

0xb529,	// (0x000826a1) msg_body_pane_t2

0xb53b,	// (0x000826b3) msg_body_pane_t3_ParamLimits

0xb53b,	// (0x000826b3) msg_body_pane_t3

0x0002,

0xf407,	// (0x0008657f) msg_body_pane_t_ParamLimits

0xf407,	// (0x0008657f) msg_body_pane_t

0x4269,	// (0x0007b3e1) main_viewer_pane_g1_ParamLimits

0x4269,	// (0x0007b3e1) main_viewer_pane_g1

0x4277,	// (0x0007b3ef) main_viewer_pane_g2_ParamLimits

0x4277,	// (0x0007b3ef) main_viewer_pane_g2

0x4285,	// (0x0007b3fd) main_viewer_pane_g3_ParamLimits

0x4285,	// (0x0007b3fd) main_viewer_pane_g3

0x4294,	// (0x0007b40c) main_viewer_pane_g4_ParamLimits

0x4294,	// (0x0007b40c) main_viewer_pane_g4

0xb565,	// (0x000826dd) main_viewer_pane_g5_ParamLimits

0xb565,	// (0x000826dd) main_viewer_pane_g5

0xb565,	// (0x000826dd) main_viewer_pane_g7_ParamLimits

0xb565,	// (0x000826dd) main_viewer_pane_g7

0xb577,	// (0x000826ef) main_viewer_pane_g8_ParamLimits

0xb577,	// (0x000826ef) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0008658f) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0008658f) main_viewer_pane_g

0x42a3,	// (0x0007b41b) viewer_content_pane_ParamLimits

0x42a3,	// (0x0007b41b) viewer_content_pane

0x42e0,	// (0x0007b458) main_postcard_pane_g1_ParamLimits

0x42e0,	// (0x0007b458) main_postcard_pane_g1

0x42f6,	// (0x0007b46e) main_postcard_pane_g2_ParamLimits

0x42f6,	// (0x0007b46e) main_postcard_pane_g2

0x430c,	// (0x0007b484) main_postcard_pane_g3_ParamLimits

0x430c,	// (0x0007b484) main_postcard_pane_g3

0x0005,

0xf428,	// (0x000865a0) main_postcard_pane_g_ParamLimits

0xf428,	// (0x000865a0) main_postcard_pane_g

0x4323,	// (0x0007b49b) main_postcard_pane_g4

0xbf13,	// (0x0008308b) smil_status_volume_pane_g2

0x4366,	// (0x0007b4de) postcard_pane_ParamLimits

0x4366,	// (0x0007b4de) postcard_pane

0x43b6,	// (0x0007b52e) postcard_pane_g1_ParamLimits

0x43b6,	// (0x0007b52e) postcard_pane_g1

0x43c4,	// (0x0007b53c) postcard_pane_g2_ParamLimits

0x43c4,	// (0x0007b53c) postcard_pane_g2

0x43d0,	// (0x0007b548) postcard_pane_g3_ParamLimits

0x43d0,	// (0x0007b548) postcard_pane_g3

0x43dc,	// (0x0007b554) postcard_pane_g4_ParamLimits

0x43dc,	// (0x0007b554) postcard_pane_g4

0x43ea,	// (0x0007b562) postcard_pane_g5_ParamLimits

0x43ea,	// (0x0007b562) postcard_pane_g5

0x43ff,	// (0x0007b577) postcard_pane_g6_ParamLimits

0x43ff,	// (0x0007b577) postcard_pane_g6

0x43b6,	// (0x0007b52e) postcard_pane_g7_ParamLimits

0x43b6,	// (0x0007b52e) postcard_pane_g7

0x0006,

0xf435,	// (0x000865ad) postcard_pane_g_ParamLimits

0xf435,	// (0x000865ad) postcard_pane_g

0x4417,	// (0x0007b58f) main_mp2_pane_g1_ParamLimits

0x4417,	// (0x0007b58f) main_mp2_pane_g1

0x4425,	// (0x0007b59d) main_mp2_pane_g2_ParamLimits

0x4425,	// (0x0007b59d) main_mp2_pane_g2

0x4431,	// (0x0007b5a9) main_mp2_pane_g3_ParamLimits

0x4431,	// (0x0007b5a9) main_mp2_pane_g3

0x0002,

0xf444,	// (0x000865bc) main_mp2_pane_g_ParamLimits

0xf444,	// (0x000865bc) main_mp2_pane_g

0x443d,	// (0x0007b5b5) main_mp2_pane_t1_ParamLimits

0x443d,	// (0x0007b5b5) main_mp2_pane_t1

0x4454,	// (0x0007b5cc) main_mp2_pane_t2_ParamLimits

0x4454,	// (0x0007b5cc) main_mp2_pane_t2

0x4468,	// (0x0007b5e0) main_mp2_pane_t3_ParamLimits

0x4468,	// (0x0007b5e0) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x000865c3) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x000865c3) main_mp2_pane_t

0x447a,	// (0x0007b5f2) pec_content_pane_ParamLimits

0x447a,	// (0x0007b5f2) pec_content_pane

0x248f,	// (0x00079607) scroll_pane_cp015

0x448c,	// (0x0007b604) pec_attribute_pane_ParamLimits

0x448c,	// (0x0007b604) pec_attribute_pane

0x449c,	// (0x0007b614) pec_content_pane_g1_ParamLimits

0x449c,	// (0x0007b614) pec_content_pane_g1

0x44a8,	// (0x0007b620) pec_content_pane_t1_ParamLimits

0x44a8,	// (0x0007b620) pec_content_pane_t1

0x44ba,	// (0x0007b632) pec_content_pane_t2_ParamLimits

0x44ba,	// (0x0007b632) pec_content_pane_t2

0x0001,

0xf452,	// (0x000865ca) pec_content_pane_t_ParamLimits

0xf452,	// (0x000865ca) pec_content_pane_t

0x44cc,	// (0x0007b644) list_single_graphic_pane_cp01_ParamLimits

0x44cc,	// (0x0007b644) list_single_graphic_pane_cp01

0xb195,	// (0x0008230d) bg_popup_sub_pane_cp04

0x44e6,	// (0x0007b65e) popup_mup_playback_window_g1

0x44f2,	// (0x0007b66a) popup_mup_playback_window_t1

0x4507,	// (0x0007b67f) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x000865cf) popup_mup_playback_window_t

0x455c,	// (0x0007b6d4) main_image_pane_g1_ParamLimits

0x455c,	// (0x0007b6d4) main_image_pane_g1

0x4639,	// (0x0007b7b1) scroll_pane_cp018_ParamLimits

0x4639,	// (0x0007b7b1) scroll_pane_cp018

0x4651,	// (0x0007b7c9) scroll_pane_cp016_ParamLimits

0x4651,	// (0x0007b7c9) scroll_pane_cp016

0x4685,	// (0x0007b7fd) smil2_image_pane_ParamLimits

0x4685,	// (0x0007b7fd) smil2_image_pane

0x46bb,	// (0x0007b833) smil2_root_pane_ParamLimits

0x46bb,	// (0x0007b833) smil2_root_pane

0x46f3,	// (0x0007b86b) smil2_text_pane_ParamLimits

0x46f3,	// (0x0007b86b) smil2_text_pane

0xaf3a,	// (0x000820b2) bg_list_pane_cp06

0x478b,	// (0x0007b903) grid_radio_pane

0xaf3a,	// (0x000820b2) bg_popup_window_pane_cp06

0x4795,	// (0x0007b90d) main_fmradio_pane_t1

0xbd7a,	// (0x00082ef2) heading_pane_cp04

0x47a3,	// (0x0007b91b) main_fmradio_pane_t2

0xbd82,	// (0x00082efa) popup_cale_lunar_info_window_g1

0x47b1,	// (0x0007b929) main_fmradio_pane_t3

0xbd8a,	// (0x00082f02) popup_cale_lunar_info_window_g2

0x47c1,	// (0x0007b939) main_fmradio_pane_t4

0x0001,

0x47cf,	// (0x0007b947) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x000866af) popup_cale_lunar_info_window_g

0xf46c,	// (0x000865e4) main_fmradio_pane_t

0x47dd,	// (0x0007b955) wait_bar_pane_cp03

0x47e5,	// (0x0007b95d) cell_fmradio_pane_ParamLimits

0x47e5,	// (0x0007b95d) cell_fmradio_pane

0x43b6,	// (0x0007b52e) cell_fmradio_pane_g1_ParamLimits

0x43b6,	// (0x0007b52e) cell_fmradio_pane_g1

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp011

0x47fa,	// (0x0007b972) poc_content_pane_ParamLimits

0x47fa,	// (0x0007b972) poc_content_pane

0x480c,	// (0x0007b984) scroll_pane_cp019

0x4814,	// (0x0007b98c) popup_call_poc_act_window_ParamLimits

0x4814,	// (0x0007b98c) popup_call_poc_act_window

0x4838,	// (0x0007b9b0) popup_call_poc_inact_window_ParamLimits

0x4838,	// (0x0007b9b0) popup_call_poc_inact_window

0xf50e,	// (0x00086686) bg_popup_call_poc_act_pane_g

0xbcf2,	// (0x00082e6a) bg_popup_call_poc_inact_pane_g1

0xbcfa,	// (0x00082e72) bg_popup_call_poc_inact_pane_g2

0x4851,	// (0x0007b9c9) popup_call_poc_act_window_g2

0xbd02,	// (0x00082e7a) bg_popup_call_poc_inact_pane_g3

0xbd0a,	// (0x00082e82) bg_popup_call_poc_inact_pane_g4

0xbd12,	// (0x00082e8a) bg_popup_call_poc_inact_pane_g5

0x4859,	// (0x0007b9d1) popup_call_poc_act_window_t1_ParamLimits

0x4859,	// (0x0007b9d1) popup_call_poc_act_window_t1

0x4881,	// (0x0007b9f9) popup_call_poc_act_window_t2_ParamLimits

0x4881,	// (0x0007b9f9) popup_call_poc_act_window_t2

0x48a9,	// (0x0007ba21) popup_call_poc_act_window_t3_ParamLimits

0x48a9,	// (0x0007ba21) popup_call_poc_act_window_t3

0x48d1,	// (0x0007ba49) popup_call_poc_act_window_t4_ParamLimits

0x48d1,	// (0x0007ba49) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x000865ef) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x000865ef) popup_call_poc_act_window_t

0xbd1a,	// (0x00082e92) bg_popup_call_poc_inact_pane_g6

0xbd22,	// (0x00082e9a) bg_popup_call_poc_inact_pane_g7

0xbd2a,	// (0x00082ea2) bg_popup_call_poc_inact_pane_g8

0x48e3,	// (0x0007ba5b) popup_call_poc_inact_window_g2

0xbd32,	// (0x00082eaa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x00086673) bg_popup_call_poc_inact_pane_g

0x48eb,	// (0x0007ba63) popup_call_poc_inact_window_t1_ParamLimits

0x48eb,	// (0x0007ba63) popup_call_poc_inact_window_t1

0x4900,	// (0x0007ba78) popup_call_poc_inact_window_t2_ParamLimits

0x4900,	// (0x0007ba78) popup_call_poc_inact_window_t2

0x4915,	// (0x0007ba8d) popup_call_poc_inact_window_t3_ParamLimits

0x4915,	// (0x0007ba8d) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x000865f8) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x000865f8) popup_call_poc_inact_window_t

0xbe78,	// (0x00082ff0) context_pane_ParamLimits

0x584d,	// (0x0007c9c5) signal_pane_ParamLimits

0x1cca,	// (0x00078e42) main_call2_pane

0xbe51,	// (0x00082fc9) popup_phob_thumbnail2_window_ParamLimits

0xbe51,	// (0x00082fc9) popup_phob_thumbnail2_window

0xb54d,	// (0x000826c5) aid_hotspot_pointer_arrow_pane

0xb555,	// (0x000826cd) aid_hotspot_pointer_hand_pane

0x52f8,	// (0x0007c470) phob_pre_status_pane_g5

0xaae4,	// (0x00081c5c) cams_zoom_pane_ParamLimits

0xaae4,	// (0x00081c5c) image_vga_pane_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g1_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g2_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g3_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g4_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g5_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g6_ParamLimits

0xb210,	// (0x00082388) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00086323) main_camera_pane_g_ParamLimits

0x1d37,	// (0x00078eaf) main_camera_pane_t1_ParamLimits

0x1d37,	// (0x00078eaf) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00086334) main_camera_pane_t_ParamLimits

0xb195,	// (0x0008230d) bg_popup_preview_window_pane_cp01_ParamLimits

0xb195,	// (0x0008230d) bg_popup_preview_window_pane_cp01

0x492a,	// (0x0007baa2) popup_phob_thumbnail2_window_g1_ParamLimits

0x492a,	// (0x0007baa2) popup_phob_thumbnail2_window_g1

0xaf3a,	// (0x000820b2) call2_cli_visual_pane

0x4951,	// (0x0007bac9) popup_call2_audio_conf_window_ParamLimits

0x4951,	// (0x0007bac9) popup_call2_audio_conf_window

0x4979,	// (0x0007baf1) popup_call2_audio_first_window_ParamLimits

0x4979,	// (0x0007baf1) popup_call2_audio_first_window

0x4a0f,	// (0x0007bb87) popup_call2_audio_in_window_ParamLimits

0x4a0f,	// (0x0007bb87) popup_call2_audio_in_window

0x4a5b,	// (0x0007bbd3) popup_call2_audio_out_window_ParamLimits

0x4a5b,	// (0x0007bbd3) popup_call2_audio_out_window

0x4acd,	// (0x0007bc45) popup_call2_audio_second_window_ParamLimits

0x4acd,	// (0x0007bc45) popup_call2_audio_second_window

0x4b33,	// (0x0007bcab) popup_call2_audio_wait_window_ParamLimits

0x4b33,	// (0x0007bcab) popup_call2_audio_wait_window

0xaf3a,	// (0x000820b2) bg_popup_call2_act_pane_cp03

0xb177,	// (0x000822ef) list_conf_pane_cp

0x4b6d,	// (0x0007bce5) popup_call2_audio_conf_window_t1

0x4b7b,	// (0x0007bcf3) list_single_graphic_popup_conf2_pane_ParamLimits

0x4b7b,	// (0x0007bcf3) list_single_graphic_popup_conf2_pane

0x386f,	// (0x0007a9e7) list_highlight_pane_cp04

0x4b8e,	// (0x0007bd06) list_single_graphic_popup_conf2_pane_g1

0x3880,	// (0x0007a9f8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x000865ff) list_single_graphic_popup_conf2_pane_g

0x4b98,	// (0x0007bd10) list_single_graphic_popup_conf2_pane_t1

0x4ba6,	// (0x0007bd1e) bg_popup_call2_act_pane_cp01_ParamLimits

0x4ba6,	// (0x0007bd1e) bg_popup_call2_act_pane_cp01

0x4c30,	// (0x0007bda8) call_type_pane_cp05_ParamLimits

0x4c30,	// (0x0007bda8) call_type_pane_cp05

0x4c84,	// (0x0007bdfc) popup_call2_audio_second_window_g1_ParamLimits

0x4c84,	// (0x0007bdfc) popup_call2_audio_second_window_g1

0x4cd8,	// (0x0007be50) popup_call2_audio_second_window_g2_ParamLimits

0x4cd8,	// (0x0007be50) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00086604) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00086604) popup_call2_audio_second_window_g

0x4d3d,	// (0x0007beb5) popup_call2_audio_second_window_t1_ParamLimits

0x4d3d,	// (0x0007beb5) popup_call2_audio_second_window_t1

0x4df8,	// (0x0007bf70) popup_call2_audio_second_window_t2_ParamLimits

0x4df8,	// (0x0007bf70) popup_call2_audio_second_window_t2

0x4e4b,	// (0x0007bfc3) popup_call2_audio_second_window_t3_ParamLimits

0x4e4b,	// (0x0007bfc3) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0008660b) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0008660b) popup_call2_audio_second_window_t

0xaf3a,	// (0x000820b2) bg_popup_call2_in_pane_cp02

0xaf44,	// (0x000820bc) call_type_pane_cp04

0x4f3e,	// (0x0007c0b6) popup_call2_audio_wait_window_g1

0x4f46,	// (0x0007c0be) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00086614) popup_call2_audio_wait_window_g

0xaf5c,	// (0x000820d4) popup_call2_audio_wait_window_t3

0x4f4e,	// (0x0007c0c6) bg_popup_call2_act_pane_ParamLimits

0x4f4e,	// (0x0007c0c6) bg_popup_call2_act_pane

0x500e,	// (0x0007c186) call_type_pane_cp03_ParamLimits

0x500e,	// (0x0007c186) call_type_pane_cp03

0x5072,	// (0x0007c1ea) popup_call2_audio_first_window_g1_ParamLimits

0x5072,	// (0x0007c1ea) popup_call2_audio_first_window_g1

0x50e2,	// (0x0007c25a) popup_call2_audio_first_window_g2_ParamLimits

0x50e2,	// (0x0007c25a) popup_call2_audio_first_window_g2

0x5146,	// (0x0007c2be) popup_call2_audio_first_window_g3_ParamLimits

0x5146,	// (0x0007c2be) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00086619) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00086619) popup_call2_audio_first_window_g

0xb58f,	// (0x00082707) popup_call2_audio_first_window_t1_ParamLimits

0xb58f,	// (0x00082707) popup_call2_audio_first_window_t1

0xb692,	// (0x0008280a) popup_call2_audio_first_window_t4_ParamLimits

0xb692,	// (0x0008280a) popup_call2_audio_first_window_t4

0xb775,	// (0x000828ed) popup_call2_audio_first_window_t5_ParamLimits

0xb775,	// (0x000828ed) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00086624) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00086624) popup_call2_audio_first_window_t

0xb18d,	// (0x00082305) bg_popup_call2_act_pane_g1

0xbd94,	// (0x00082f0c) popup_cale_lunar_info_window_t1

0xbda2,	// (0x00082f1a) popup_cale_lunar_info_window_t2

0xbdb0,	// (0x00082f28) popup_cale_lunar_info_window_t3

0xaf3a,	// (0x000820b2) bg_popup_call2_bubble_pane

0xb876,	// (0x000829ee) bg_popup_call2_in_pane_cp01_ParamLimits

0xb876,	// (0x000829ee) bg_popup_call2_in_pane_cp01

0xac16,	// (0x00081d8e) call_type_pane_cp02

0x51ce,	// (0x0007c346) popup_call2_audio_out_window_g1_ParamLimits

0x51ce,	// (0x0007c346) popup_call2_audio_out_window_g1

0xb8be,	// (0x00082a36) popup_call2_audio_out_window_g2_ParamLimits

0xb8be,	// (0x00082a36) popup_call2_audio_out_window_g2

0x51fa,	// (0x0007c372) popup_call2_audio_out_window_g3_ParamLimits

0x51fa,	// (0x0007c372) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0008662d) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0008662d) popup_call2_audio_out_window_g

0xb8f5,	// (0x00082a6d) popup_call2_audio_out_window_t1_ParamLimits

0xb8f5,	// (0x00082a6d) popup_call2_audio_out_window_t1

0xb954,	// (0x00082acc) popup_call2_audio_out_window_t2_ParamLimits

0xb954,	// (0x00082acc) popup_call2_audio_out_window_t2

0xb9a8,	// (0x00082b20) popup_call2_audio_out_window_t3_ParamLimits

0xb9a8,	// (0x00082b20) popup_call2_audio_out_window_t3

0xb9be,	// (0x00082b36) popup_call2_audio_out_window_t4_ParamLimits

0xb9be,	// (0x00082b36) popup_call2_audio_out_window_t4

0xb9d4,	// (0x00082b4c) popup_call2_audio_out_window_t5_ParamLimits

0xb9d4,	// (0x00082b4c) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00086636) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00086636) popup_call2_audio_out_window_t

0xba38,	// (0x00082bb0) bg_popup_call2_in_pane_ParamLimits

0xba38,	// (0x00082bb0) bg_popup_call2_in_pane

0xba94,	// (0x00082c0c) popup_call2_audio_in_window_g1_ParamLimits

0xba94,	// (0x00082c0c) popup_call2_audio_in_window_g1

0xbacc,	// (0x00082c44) popup_call2_audio_in_window_g2_ParamLimits

0xbacc,	// (0x00082c44) popup_call2_audio_in_window_g2

0xbb04,	// (0x00082c7c) popup_call2_audio_in_window_g3_ParamLimits

0xbb04,	// (0x00082c7c) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00086643) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00086643) popup_call2_audio_in_window_g

0xbb5c,	// (0x00082cd4) popup_call2_audio_in_window_t1_ParamLimits

0xbb5c,	// (0x00082cd4) popup_call2_audio_in_window_t1

0xbbdc,	// (0x00082d54) popup_call2_audio_in_window_t2_ParamLimits

0xbbdc,	// (0x00082d54) popup_call2_audio_in_window_t2

0xbc5c,	// (0x00082dd4) popup_call2_audio_in_window_t3_ParamLimits

0xbc5c,	// (0x00082dd4) popup_call2_audio_in_window_t3

0xbc76,	// (0x00082dee) popup_call2_audio_in_window_t4_ParamLimits

0xbc76,	// (0x00082dee) popup_call2_audio_in_window_t4

0xbc88,	// (0x00082e00) popup_call2_audio_in_window_t5_ParamLimits

0xbc88,	// (0x00082e00) popup_call2_audio_in_window_t5

0xbc9d,	// (0x00082e15) popup_call2_audio_in_window_t6_ParamLimits

0xbc9d,	// (0x00082e15) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0008664c) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0008664c) popup_call2_audio_in_window_t

0xb18d,	// (0x00082305) bg_popup_call2_in_pane_g1

0xbdbe,	// (0x00082f36) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x000866b4) popup_cale_lunar_info_window_t

0xb195,	// (0x0008230d) bg_popup_call2_rect_pane_ParamLimits

0xb195,	// (0x0008230d) bg_popup_call2_rect_pane

0xaf3a,	// (0x000820b2) call2_cli_visual_graphic_pane

0xaf3a,	// (0x000820b2) call2_cli_visual_text_pane

0xbf26,	// (0x0008309e) smil_status_volume_pane_g3

0x0002,

0xb1ad,	// (0x00082325) call2_cli_visual_graphic_pane_g1

0xb1ad,	// (0x00082325) call2_cli_visual_graphic_pane_g2

0xb1ad,	// (0x00082325) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00086659) call2_cli_visual_graphic_pane_g

0xbcb2,	// (0x00082e2a) bg_popup_call2_rect_pane_g1

0xb3a8,	// (0x00082520) bg_popup_call2_rect_pane_g2

0xbcba,	// (0x00082e32) bg_popup_call2_rect_pane_g3

0xbcc2,	// (0x00082e3a) bg_popup_call2_rect_pane_g4

0xbcca,	// (0x00082e42) bg_popup_call2_rect_pane_g5

0xbcd2,	// (0x00082e4a) bg_popup_call2_rect_pane_g6

0xbcda,	// (0x00082e52) bg_popup_call2_rect_pane_g7

0xbce2,	// (0x00082e5a) bg_popup_call2_rect_pane_g8

0xbcea,	// (0x00082e62) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00086660) bg_popup_call2_rect_pane_g

0xbcf2,	// (0x00082e6a) bg_popup_call2_bubble_pane_g1

0xbcfa,	// (0x00082e72) bg_popup_call2_bubble_pane_g2

0xbd02,	// (0x00082e7a) bg_popup_call2_bubble_pane_g3

0xbd0a,	// (0x00082e82) bg_popup_call2_bubble_pane_g4

0xbd12,	// (0x00082e8a) bg_popup_call2_bubble_pane_g5

0xbd1a,	// (0x00082e92) bg_popup_call2_bubble_pane_g6

0xbd22,	// (0x00082e9a) bg_popup_call2_bubble_pane_g7

0xbd2a,	// (0x00082ea2) bg_popup_call2_bubble_pane_g8

0xbd32,	// (0x00082eaa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00086673) bg_popup_call2_bubble_pane_g

0x1661,	// (0x000787d9) aid_cale_week_size_cell_pane

0x1d4b,	// (0x00078ec3) aid_cams_cif_uncrop_pane_ParamLimits

0x1d4b,	// (0x00078ec3) aid_cams_cif_uncrop_pane

0x1ec5,	// (0x0007903d) aid_cams_size_cell_ParamLimits

0x1ec5,	// (0x0007903d) aid_cams_size_cell

0x1ed9,	// (0x00079051) grid_cams_pane_ParamLimits

0x1ef3,	// (0x0007906b) linegrid_cams_pane_ParamLimits

0x2020,	// (0x00079198) call_video_pane_t1

0x203a,	// (0x000791b2) call_video_pane_t2

0x0001,

0xf208,	// (0x00086380) call_video_pane_t

0x26cf,	// (0x00079847) aid_cale_month_size_cell_pane_ParamLimits

0x26cf,	// (0x00079847) aid_cale_month_size_cell_pane

0xf580,	// (0x000866f8) smil_status_volume_pane_g

0xbf33,	// (0x000830ab) volume_smil_pane_ParamLimits

0xaa79,	// (0x00081bf1) aid_popup2_width_pane

0x159f,	// (0x00078717) cell_qdial_pane_g4_ParamLimits

0x159f,	// (0x00078717) cell_qdial_pane_g4

0x3b6c,	// (0x0007ace4) aid_blid_cardinal_pane_ParamLimits

0x3b7c,	// (0x0007acf4) aid_blid_destination_pane_ParamLimits

0x3b7c,	// (0x0007acf4) aid_blid_destination_pane

0xb195,	// (0x0008230d) bg_popup_call_poc_act_pane_ParamLimits

0xb195,	// (0x0008230d) bg_popup_call_poc_act_pane

0xb195,	// (0x0008230d) bg_popup_call_poc_inact_pane_ParamLimits

0xb195,	// (0x0008230d) bg_popup_call_poc_inact_pane

0xbd3a,	// (0x00082eb2) bg_popup_call_poc_act_pane_g1

0xbd42,	// (0x00082eba) bg_popup_call_poc_act_pane_g2

0xbd4a,	// (0x00082ec2) bg_popup_call_poc_act_pane_g3

0xbd0a,	// (0x00082e82) bg_popup_call_poc_act_pane_g4

0xbd12,	// (0x00082e8a) bg_popup_call_poc_act_pane_g5

0xbd52,	// (0x00082eca) bg_popup_call_poc_act_pane_g6

0xbd22,	// (0x00082e9a) bg_popup_call_poc_act_pane_g7

0xbd5a,	// (0x00082ed2) bg_popup_call_poc_act_pane_g8

0xaf3a,	// (0x000820b2) main_usb_pane

0xbe28,	// (0x00082fa0) popup_cale_lunar_info_window

0x236b,	// (0x000794e3) im_reading_pane_t1_ParamLimits

0x23aa,	// (0x00079522) list_im_pane_ParamLimits

0x23bb,	// (0x00079533) scroll_pane_cp07_ParamLimits

0xaf3a,	// (0x000820b2) grid_highlight_pane_cp012

0xb195,	// (0x0008230d) mup_scale_pane_ParamLimits

0x43b6,	// (0x0007b52e) main_usb_pane_g1_ParamLimits

0x43b6,	// (0x0007b52e) main_usb_pane_g1

0x524d,	// (0x0007c3c5) main_usb_pane_g2_ParamLimits

0x524d,	// (0x0007c3c5) main_usb_pane_g2

0x0001,

0xf525,	// (0x0008669d) main_usb_pane_g_ParamLimits

0xf525,	// (0x0008669d) main_usb_pane_g

0x5263,	// (0x0007c3db) main_usb_pane_t1_ParamLimits

0x5263,	// (0x0007c3db) main_usb_pane_t1

0x5275,	// (0x0007c3ed) main_usb_pane_t2_ParamLimits

0x5275,	// (0x0007c3ed) main_usb_pane_t2

0x5287,	// (0x0007c3ff) main_usb_pane_t3_ParamLimits

0x5287,	// (0x0007c3ff) main_usb_pane_t3

0x5299,	// (0x0007c411) main_usb_pane_t4_ParamLimits

0x5299,	// (0x0007c411) main_usb_pane_t4

0x52ae,	// (0x0007c426) main_usb_pane_t5_ParamLimits

0x52ae,	// (0x0007c426) main_usb_pane_t5

0x52c3,	// (0x0007c43b) main_usb_pane_t6_ParamLimits

0x52c3,	// (0x0007c43b) main_usb_pane_t6

0x0005,

0xf52a,	// (0x000866a2) main_usb_pane_t_ParamLimits

0x3b0b,	// (0x0007ac83) aid_text_placing

0x3b16,	// (0x0007ac8e) main_location2_pane_t1_ParamLimits

0x3b2c,	// (0x0007aca4) main_location2_pane_t2_ParamLimits

0x3b42,	// (0x0007acba) main_location2_pane_t3_ParamLimits

0x3b58,	// (0x0007acd0) main_location2_pane_t4_ParamLimits

0x3b58,	// (0x0007acd0) main_location2_pane_t4

0xf344,	// (0x000864bc) main_location2_pane_t_ParamLimits

0xb1c3,	// (0x0008233b) find_pinb_pane_g2_ParamLimits

0xb1c3,	// (0x0008233b) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00086238) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00086238) find_pinb_pane_g

0xb1cf,	// (0x00082347) find_pinb_pane_t1_ParamLimits

0xb1e1,	// (0x00082359) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0008623d) find_pinb_pane_t_ParamLimits

0xaf3a,	// (0x000820b2) main_call3_pane

0x2d13,	// (0x00079e8b) cale_month_day_heading_pane_t1_ParamLimits

0x2d99,	// (0x00079f11) cale_month_day_heading_pane_t2_ParamLimits

0x2e12,	// (0x00079f8a) cale_month_day_heading_pane_t3_ParamLimits

0x2e8b,	// (0x0007a003) cale_month_day_heading_pane_t4_ParamLimits

0x2f0c,	// (0x0007a084) cale_month_day_heading_pane_t5_ParamLimits

0x2f95,	// (0x0007a10d) cale_month_day_heading_pane_t6_ParamLimits

0x3026,	// (0x0007a19e) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x000863b8) cale_month_day_heading_pane_t_ParamLimits

0x32fc,	// (0x0007a474) smil_status_volume_pane

0x438a,	// (0x0007b502) postcard_address_pane_ParamLimits

0x438a,	// (0x0007b502) postcard_address_pane

0x43a0,	// (0x0007b518) postcard_message_pane_ParamLimits

0x43a0,	// (0x0007b518) postcard_message_pane

0x5226,	// (0x0007c39e) call2_cli_visual_pane_t1_ParamLimits

0x5226,	// (0x0007c39e) call2_cli_visual_pane_t1

0xbf60,	// (0x000830d8) postcard_message_pane_t1_ParamLimits

0xbf60,	// (0x000830d8) postcard_message_pane_t1

0xbf48,	// (0x000830c0) postcard_address_pane_t1_ParamLimits

0xbf48,	// (0x000830c0) postcard_address_pane_t1

0x59f9,	// (0x0007cb71) popup_call3_audio_in_window_ParamLimits

0x59f9,	// (0x0007cb71) popup_call3_audio_in_window

0x587e,	// (0x0007c9f6) bg_popup_call3_in_pane_ParamLimits

0x587e,	// (0x0007c9f6) bg_popup_call3_in_pane

0x58fa,	// (0x0007ca72) popup_call3_audio_in_window_g1_ParamLimits

0x58fa,	// (0x0007ca72) popup_call3_audio_in_window_g1

0x591a,	// (0x0007ca92) popup_call3_audio_in_window_g2_ParamLimits

0x591a,	// (0x0007ca92) popup_call3_audio_in_window_g2

0x593a,	// (0x0007cab2) popup_call3_audio_in_window_g3_ParamLimits

0x593a,	// (0x0007cab2) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x000866ff) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x000866ff) popup_call3_audio_in_window_g

0x596b,	// (0x0007cae3) popup_call3_audio_in_window_t1_ParamLimits

0x596b,	// (0x0007cae3) popup_call3_audio_in_window_t1

0x59a9,	// (0x0007cb21) popup_call3_audio_in_window_t2_ParamLimits

0x59a9,	// (0x0007cb21) popup_call3_audio_in_window_t2

0x59e7,	// (0x0007cb5f) popup_call3_audio_in_window_t3_ParamLimits

0x59e7,	// (0x0007cb5f) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x00086708) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x00086708) popup_call3_audio_in_window_t

0x1cca,	// (0x00078e42) bg_popup_call3_rect_pane

0xbcb2,	// (0x00082e2a) bg_popup_call3_rect_pane_g1

0xb3a8,	// (0x00082520) bg_popup_call3_rect_pane_g2

0xbcba,	// (0x00082e32) bg_popup_call3_rect_pane_g3

0xbcc2,	// (0x00082e3a) bg_popup_call3_rect_pane_g4

0xbcca,	// (0x00082e42) bg_popup_call3_rect_pane_g5

0xbcd2,	// (0x00082e4a) bg_popup_call3_rect_pane_g6

0xbcda,	// (0x00082e52) bg_popup_call3_rect_pane_g7

0xaa67,	// (0x00081bdf) mup_visualizer_osc_pane

0xaa67,	// (0x00081bdf) mup_visualizer_spec_pane

0x58ae,	// (0x0007ca26) call3_video_qcif_pane_ParamLimits

0x58ae,	// (0x0007ca26) call3_video_qcif_pane

0x58c1,	// (0x0007ca39) call3_video_qcif_uncrop_pane_ParamLimits

0x58c1,	// (0x0007ca39) call3_video_qcif_uncrop_pane

0x58d1,	// (0x0007ca49) call3_video_subqcif_pane_ParamLimits

0x58d1,	// (0x0007ca49) call3_video_subqcif_pane

0x58e7,	// (0x0007ca5f) call3_video_subqcif_uncrop_pane_ParamLimits

0x58e7,	// (0x0007ca5f) call3_video_subqcif_uncrop_pane

0x595a,	// (0x0007cad2) popup_call3_audio_in_window_g4_ParamLimits

0x595a,	// (0x0007cad2) popup_call3_audio_in_window_g4

0xaa67,	// (0x00081bdf) mup_spec_half_pane

0xaa67,	// (0x00081bdf) mup_spec_half_pane_cp

0xaa67,	// (0x00081bdf) mup_osc_middle_pane

0x1ebb,	// (0x00079033) mup_visualizer_osc_pane_g1

0xbed9,	// (0x00083051) mup_spec_bar_pane_ParamLimits

0xbed9,	// (0x00083051) mup_spec_bar_pane

0x1ebb,	// (0x00079033) mup_spec_bar_pane_g1

0x1ebb,	// (0x00079033) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00086536) mup_spec_bar_pane_g

0x1661,	// (0x000787d9) aid_cale_week_size_cell_pane_ParamLimits

0x167b,	// (0x000787f3) bg_cale_heading_pane_ParamLimits

0x169f,	// (0x00078817) bg_cale_pane_cp01_ParamLimits

0x16bc,	// (0x00078834) cale_week_corner_pane_ParamLimits

0x16db,	// (0x00078853) cale_week_day_heading_pane_ParamLimits

0x1704,	// (0x0007887c) cale_week_scroll_pane_g1_ParamLimits

0x1723,	// (0x0007889b) cale_week_scroll_pane_g2_ParamLimits

0x173b,	// (0x000788b3) cale_week_scroll_pane_g3_ParamLimits

0x1753,	// (0x000788cb) cale_week_scroll_pane_g4_ParamLimits

0x176b,	// (0x000788e3) cale_week_scroll_pane_g5_ParamLimits

0x178b,	// (0x00078903) cale_week_scroll_pane_g6_ParamLimits

0x17ab,	// (0x00078923) cale_week_scroll_pane_g7_ParamLimits

0x17cf,	// (0x00078947) cale_week_scroll_pane_g8_ParamLimits

0x17f3,	// (0x0007896b) cale_week_scroll_pane_g9_ParamLimits

0x180b,	// (0x00078983) cale_week_scroll_pane_g10_ParamLimits

0x1823,	// (0x0007899b) cale_week_scroll_pane_g11_ParamLimits

0x183b,	// (0x000789b3) cale_week_scroll_pane_g12_ParamLimits

0x185f,	// (0x000789d7) cale_week_scroll_pane_g13_ParamLimits

0x185f,	// (0x000789d7) cale_week_scroll_pane_g14_ParamLimits

0x185f,	// (0x000789d7) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000862c9) cale_week_scroll_pane_g_ParamLimits

0x18a7,	// (0x00078a1f) cale_week_time_pane_ParamLimits

0x18cb,	// (0x00078a43) grid_cale_week_pane_ParamLimits

0x18fd,	// (0x00078a75) listscroll_cale_week_pane_t1

0x190f,	// (0x00078a87) scroll_pane_cp08_ParamLimits

0x2774,	// (0x000798ec) cale_month_corner_pane_ParamLimits

0x2c7c,	// (0x00079df4) cale_month_pane_t1

0x2c8e,	// (0x00079e06) cale_month_week_pane_ParamLimits

0x376b,	// (0x0007a8e3) popup_call_status_window_g1_ParamLimits

0x377f,	// (0x0007a8f7) popup_call_status_window_g2_ParamLimits

0x3793,	// (0x0007a90b) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00086443) popup_call_status_window_g_ParamLimits

0x37fc,	// (0x0007a974) aid_call2_pane

0x0803,	// (0x0007797b) msg_header_pane_g1

0x438a,	// (0x0007b502) postcard_address2_pane_ParamLimits

0x438a,	// (0x0007b502) postcard_address2_pane

0x43a0,	// (0x0007b518) postcard_message2_pane_ParamLimits

0x43a0,	// (0x0007b518) postcard_message2_pane

0x585b,	// (0x0007c9d3) message2_row_pane_ParamLimits

0x585b,	// (0x0007c9d3) message2_row_pane

0xbe93,	// (0x0008300b) address2_row_pane_ParamLimits

0xbe93,	// (0x0008300b) address2_row_pane

0xbea6,	// (0x0008301e) postcard_message2_row_pane_g1

0xbeae,	// (0x00083026) postcard_message2_row_pane_t1

0xbea6,	// (0x0008301e) address2_row_pane_g1

0xbeae,	// (0x00083026) address2_row_pane_t1

0x1cc2,	// (0x00078e3a) aid_size_cell_vorec

0xaf3a,	// (0x000820b2) main_rss_pane

0xbebc,	// (0x00083034) rss_list_single_pane_ParamLimits

0xbebc,	// (0x00083034) rss_list_single_pane

0xbeca,	// (0x00083042) rss_list_single_pane_t1

0xbeca,	// (0x00083042) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x000866f3) rss_list_single_pane_t

0xaf3a,	// (0x000820b2) main_camera2_pane

0xaf3a,	// (0x000820b2) main_video2_pane

0xbf7c,	// (0x000830f4) cams_zoom_pane_cp2_ParamLimits

0xbf7c,	// (0x000830f4) cams_zoom_pane_cp2

0xbf7c,	// (0x000830f4) image2_vga_pane_ParamLimits

0xbf7c,	// (0x000830f4) image2_vga_pane

0xe96e,	// (0x00085ae6) main_camera2_pane_g1_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g1

0xe96e,	// (0x00085ae6) main_camera2_pane_g2_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g2

0xe96e,	// (0x00085ae6) main_camera2_pane_g3_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g3

0xe96e,	// (0x00085ae6) main_camera2_pane_g4_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g4

0xe96e,	// (0x00085ae6) main_camera2_pane_g5_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g5

0xe96e,	// (0x00085ae6) main_camera2_pane_g6_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g6

0xe96e,	// (0x00085ae6) main_camera2_pane_g7_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g7

0xe96e,	// (0x00085ae6) main_camera2_pane_g8_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g8

0x0008,

0xf597,	// (0x0008670f) main_camera2_pane_g_ParamLimits

0xf597,	// (0x0008670f) main_camera2_pane_g

0x5a1b,	// (0x0007cb93) main_camera2_pane_t1_ParamLimits

0x5a1b,	// (0x0007cb93) main_camera2_pane_t1

0x5a1b,	// (0x0007cb93) main_camera2_pane_t2_ParamLimits

0x5a1b,	// (0x0007cb93) main_camera2_pane_t2

0x5a1b,	// (0x0007cb93) main_camera2_pane_t3_ParamLimits

0x5a1b,	// (0x0007cb93) main_camera2_pane_t3

0x5a1b,	// (0x0007cb93) main_camera2_pane_t4_ParamLimits

0x5a1b,	// (0x0007cb93) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x00086722) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x00086722) main_camera2_pane_t

0xbf9e,	// (0x00083116) cams_zoom_pane_cp4_ParamLimits

0xbf9e,	// (0x00083116) cams_zoom_pane_cp4

0xbfac,	// (0x00083124) image2_cif_pane_ParamLimits

0xbfac,	// (0x00083124) image2_cif_pane

0xaae4,	// (0x00081c5c) image2_subqcif_pane_ParamLimits

0xaae4,	// (0x00081c5c) image2_subqcif_pane

0x5a2f,	// (0x0007cba7) main_video2_pane_g1_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g1

0x5a2f,	// (0x0007cba7) main_video2_pane_g2_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g2

0x5a2f,	// (0x0007cba7) main_video2_pane_g3_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g3

0x5a2f,	// (0x0007cba7) main_video2_pane_g4_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g4

0x5a2f,	// (0x0007cba7) main_video2_pane_g5_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g5

0x5a2f,	// (0x0007cba7) main_video2_pane_g6_ParamLimits

0x5a2f,	// (0x0007cba7) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x00086731) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x00086731) main_video2_pane_g

0x5a3d,	// (0x0007cbb5) main_video2_pane_t1_ParamLimits

0x5a3d,	// (0x0007cbb5) main_video2_pane_t1

0x5a3d,	// (0x0007cbb5) main_video2_pane_t2_ParamLimits

0x5a3d,	// (0x0007cbb5) main_video2_pane_t2

0x5a3d,	// (0x0007cbb5) main_video2_pane_t3_ParamLimits

0x5a3d,	// (0x0007cbb5) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0008673e) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0008673e) main_video2_pane_t

0x535c,	// (0x0007c4d4) call_muted_g2

0x0001,

0xf56d,	// (0x000866e5) call_muted_g

0xaf3a,	// (0x000820b2) main_mup2_pane

0x3ec5,	// (0x0007b03d) main_mup2_pane_g1_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g1

0x3ec5,	// (0x0007b03d) main_mup2_pane_g2_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g2

0x1ebb,	// (0x00079033) main_mup_pane_g13_cp1

0xaa67,	// (0x00081bdf) mup_volume_pane_cp1

0x3ec5,	// (0x0007b03d) main_mup2_pane_g4_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g4

0x3ec5,	// (0x0007b03d) main_mup2_pane_g5_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g5

0x3ec5,	// (0x0007b03d) main_mup2_pane_g6_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g6

0x3ec5,	// (0x0007b03d) main_mup2_pane_g7_ParamLimits

0x3ec5,	// (0x0007b03d) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x00086745) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x00086745) main_mup2_pane_g

0x3ed3,	// (0x0007b04b) main_mup2_pane_t1_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t1

0x3ed3,	// (0x0007b04b) main_mup2_pane_t2_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t2

0x3ed3,	// (0x0007b04b) main_mup2_pane_t3_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t3

0x3ed3,	// (0x0007b04b) main_mup2_pane_t4_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t4

0x3ed3,	// (0x0007b04b) main_mup2_pane_t5_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t5

0x3ed3,	// (0x0007b04b) main_mup2_pane_t6_ParamLimits

0x3ed3,	// (0x0007b04b) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x00086754) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x00086754) main_mup2_pane_t

0x3efb,	// (0x0007b073) mup2_visualizer_pane_ParamLimits

0x3efb,	// (0x0007b073) mup2_visualizer_pane

0x3efb,	// (0x0007b073) mup_progress_pane_cp_ParamLimits

0x3efb,	// (0x0007b073) mup_progress_pane_cp

0xbfba,	// (0x00083132) mup_volume_pane_cp_ParamLimits

0xbfba,	// (0x00083132) mup_volume_pane_cp

0xb210,	// (0x00082388) mup2_visualizer_pane_g1_ParamLimits

0xb210,	// (0x00082388) mup2_visualizer_pane_g1

0xb21e,	// (0x00082396) mup2_visualizer_pane_g2_ParamLimits

0xb21e,	// (0x00082396) mup2_visualizer_pane_g2

0xb21e,	// (0x00082396) mup2_visualizer_pane_g3_ParamLimits

0xb21e,	// (0x00082396) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00086242) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00086242) mup2_visualizer_pane_g

0x4783,	// (0x0007b8fb) aid_size_cell_fmradio

0x550c,	// (0x0007c684) aid_height_parent_landcape

0x2476,	// (0x000795ee) wml_content_pane_cp

0x247e,	// (0x000795f6) wml_tabs_pane

0x2487,	// (0x000795ff) popup_wml_miniature_window

0x248f,	// (0x00079607) scroll_pane_cp021

0x24a3,	// (0x0007961b) wml_content_pane_comp8

0xaf3a,	// (0x000820b2) bg_popup_sub_pane_cp05

0xbfd0,	// (0x00083148) popup_wml_miniature_window_g1

0xbfd8,	// (0x00083150) wml_miniature_view_pane

0x5a51,	// (0x0007cbc9) aid_size_wml_view

0x5a59,	// (0x0007cbd1) wml_miniature_view_pane_g1

0x5a62,	// (0x0007cbda) wml_miniature_view_pane_g2

0x5a6b,	// (0x0007cbe3) wml_miniature_view_pane_g3

0x5a73,	// (0x0007cbeb) wml_miniature_view_pane_g4

0x5a7b,	// (0x0007cbf3) wml_miniature_view_pane_g5

0x5a83,	// (0x0007cbfb) wml_miniature_view_pane_g6

0x5a8b,	// (0x0007cc03) wml_miniature_view_pane_g7

0x5a93,	// (0x0007cc0b) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00086761) wml_miniature_view_pane_g

0xbfe0,	// (0x00083158) background_graphic_ParamLimits

0xbfe0,	// (0x00083158) background_graphic

0xbfec,	// (0x00083164) wml_tabs_2_pane

0xbff5,	// (0x0008316d) wml_tabs_3_pane_ParamLimits

0xbff5,	// (0x0008316d) wml_tabs_3_pane

0xc007,	// (0x0008317f) wml_tabs_4_pane_ParamLimits

0xc007,	// (0x0008317f) wml_tabs_4_pane

0xc01d,	// (0x00083195) wml_tabs_5_pane_ParamLimits

0xc01d,	// (0x00083195) wml_tabs_5_pane

0xc037,	// (0x000831af) wml_tabs_pane_g2_ParamLimits

0xc037,	// (0x000831af) wml_tabs_pane_g2

0xc04c,	// (0x000831c4) wml_tabs_pane_g3_ParamLimits

0xc04c,	// (0x000831c4) wml_tabs_pane_g3

0xc061,	// (0x000831d9) wml_tabs_2_active_pane_ParamLimits

0xc061,	// (0x000831d9) wml_tabs_2_active_pane

0xc061,	// (0x000831d9) wml_tabs_2_passive_pane_ParamLimits

0xc061,	// (0x000831d9) wml_tabs_2_passive_pane

0x5a9b,	// (0x0007cc13) wml_tabs_3_active_pane_cp_ParamLimits

0x5a9b,	// (0x0007cc13) wml_tabs_3_active_pane_cp

0x5ab0,	// (0x0007cc28) wml_tabs_3_passive_pane_ParamLimits

0x5ab0,	// (0x0007cc28) wml_tabs_3_passive_pane

0x5ac3,	// (0x0007cc3b) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ac3,	// (0x0007cc3b) wml_tabs_3_passive_pane_cp

0x5ada,	// (0x0007cc52) tabs_4_active_pane

0x5ae2,	// (0x0007cc5a) tabs_4_passive_pane

0x5aec,	// (0x0007cc64) tabs_4_passive_pane_cp

0x5af4,	// (0x0007cc6c) tabs_4_passive_pane_cp2

0x5245,	// (0x0007c3bd) aid_height_text

0x3efb,	// (0x0007b073) mup_volume_cont_pane_ParamLimits

0x3efb,	// (0x0007b073) mup_volume_cont_pane

0xaa67,	// (0x00081bdf) aid_size_cell_pinb

0xaa67,	// (0x00081bdf) aid_size_list_pinb

0x3efb,	// (0x0007b073) mup2_volume_cont_pane_ParamLimits

0x3efb,	// (0x0007b073) mup2_volume_cont_pane

0xc06f,	// (0x000831e7) mup2_volume_cont_pane_g1_ParamLimits

0xc06f,	// (0x000831e7) mup2_volume_cont_pane_g1

0x1040,	// (0x000781b8) aid_size_cell_touch_ParamLimits

0x1040,	// (0x000781b8) aid_size_cell_touch

0x126c,	// (0x000783e4) touch_pane_ParamLimits

0x126c,	// (0x000783e4) touch_pane

0xaa67,	// (0x00081bdf) main_rss2_pane

0xc08e,	// (0x00083206) listscroll_rss2_pane

0xc097,	// (0x0008320f) rss2_navigation_pane

0xc09f,	// (0x00083217) list_rss2_pane

0x3987,	// (0x0007aaff) scroll_pane_cp22

0xc0a7,	// (0x0008321f) rss2_navigation_pane_g1

0xc0b0,	// (0x00083228) rss2_navigation_pane_g2

0xc0b8,	// (0x00083230) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x00086772) rss2_navigation_pane_g

0xc0c0,	// (0x00083238) rss2_navigation_pane_t1

0x5afe,	// (0x0007cc76) rss2_list_single_pane_ParamLimits

0x5afe,	// (0x0007cc76) rss2_list_single_pane

0xc0ce,	// (0x00083246) rss2_list_single_pane_t2

0xc0dc,	// (0x00083254) rss2_list_single_pane_t3_ParamLimits

0xc0dc,	// (0x00083254) rss2_list_single_pane_t3

0xc0f9,	// (0x00083271) rss2_list_single_pane_t4

0x32e4,	// (0x0007a45c) smil_status_pane_g1

0xaae4,	// (0x00081c5c) main_image2_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_image2_pane

0xe96e,	// (0x00085ae6) main_camera2_pane_g9_ParamLimits

0xe96e,	// (0x00085ae6) main_camera2_pane_g9

0x5a1b,	// (0x0007cb93) main_camera2_pane_t5_ParamLimits

0x5a1b,	// (0x0007cb93) main_camera2_pane_t5

0xbf8a,	// (0x00083102) main_camera2_pane_t6_ParamLimits

0xbf8a,	// (0x00083102) main_camera2_pane_t6

0x5b18,	// (0x0007cc90) main_image2_pane_g1_ParamLimits

0x5b18,	// (0x0007cc90) main_image2_pane_g1

0x472d,	// (0x0007b8a5) smil2_video_pane_ParamLimits

0x472d,	// (0x0007b8a5) smil2_video_pane

0xaa95,	// (0x00081c0d) aid_zoom_text_primary_cp

0xaada,	// (0x00081c52) popup_preview_fixed_window

0x2363,	// (0x000794db) im_reading_pane_g1

0x5a0d,	// (0x0007cb85) cams2_bc_adjust_pane_cp_ParamLimits

0x5a0d,	// (0x0007cb85) cams2_bc_adjust_pane_cp

0x3efb,	// (0x0007b073) cams2_bc_adjust_pane_ParamLimits

0x3efb,	// (0x0007b073) cams2_bc_adjust_pane

0x1ebb,	// (0x00079033) cams2_bc_adjust_pane_g1

0xaa67,	// (0x00081bdf) cams2_slider_pane

0x1ebb,	// (0x00079033) cams2_slider_pane_g1

0x1ebb,	// (0x00079033) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x00086779) cams2_slider_pane_g

0x1302,	// (0x0007847a) calc_display_pane_ParamLimits

0x1327,	// (0x0007849f) calc_paper_pane_ParamLimits

0x134a,	// (0x000784c2) grid_calc_pane_ParamLimits

0xb494,	// (0x0008260c) popup_clock_digital_window_t1_ParamLimits

0x45aa,	// (0x0007b722) main_image_pane_t1

0x12e2,	// (0x0007845a) aid_size_cell_calc_ParamLimits

0x12e2,	// (0x0007845a) aid_size_cell_calc

0x5552,	// (0x0007c6ca) popup_blid_sat_info2_window_ParamLimits

0x5552,	// (0x0007c6ca) popup_blid_sat_info2_window

0xc107,	// (0x0008327f) aid_size_cell_blid

0xbfac,	// (0x00083124) bg_popup_window_pane_cp07

0xc124,	// (0x0008329c) grid_popup_blid_pane

0xc12e,	// (0x000832a6) heading_pane_cp05_ParamLimits

0xc12e,	// (0x000832a6) heading_pane_cp05

0xc1f8,	// (0x00083370) cell_popup_blid_pane_ParamLimits

0xc1f8,	// (0x00083370) cell_popup_blid_pane

0xc222,	// (0x0008339a) cell_popup_blid_pane_g1

0xc22a,	// (0x000833a2) cell_popup_blid_pane_t1

0x3efb,	// (0x0007b073) mup2_indicator_pane_ParamLimits

0x3efb,	// (0x0007b073) mup2_indicator_pane

0xaa67,	// (0x00081bdf) mup2_visualizer_osc_pane

0xbfba,	// (0x00083132) mup2_visualizer_spec_pane_ParamLimits

0xbfba,	// (0x00083132) mup2_visualizer_spec_pane

0xaa67,	// (0x00081bdf) mup2_spec_half_pane

0xaa67,	// (0x00081bdf) mup2_spec_half_pane_cp

0xc238,	// (0x000833b0) mup2_spec_bar_pane_ParamLimits

0xc238,	// (0x000833b0) mup2_spec_bar_pane

0x1ebb,	// (0x00079033) mup2_spec_bar_pane_g1

0xc257,	// (0x000833cf) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x0008679f) mup2_spec_bar_pane_g

0xaa67,	// (0x00081bdf) mup2_osc_middle_pane

0x1ebb,	// (0x00079033) mup2_visualizer_osc_pane_g1

0xab12,	// (0x00081c8a) popup_number_entry_window_t1_ParamLimits

0xab25,	// (0x00081c9d) popup_number_entry_window_t2_ParamLimits

0xab37,	// (0x00081caf) popup_number_entry_window_t3_ParamLimits

0xab49,	// (0x00081cc1) popup_number_entry_window_t5_ParamLimits

0xab49,	// (0x00081cc1) popup_number_entry_window_t5

0xf06b,	// (0x000861e3) popup_number_entry_window_t_ParamLimits

0xab7e,	// (0x00081cf6) text_title_cp2_ParamLimits

0xb55d,	// (0x000826d5) aid_hotspot_pointer_text2_pane

0xb583,	// (0x000826fb) main_viewer_pane_g9_ParamLimits

0xb583,	// (0x000826fb) main_viewer_pane_g9

0x2c7c,	// (0x00079df4) cale_month_pane_t1_ParamLimits

0x3365,	// (0x0007a4dd) bg_cale_pane_ParamLimits

0x337d,	// (0x0007a4f5) list_cale_pane_ParamLimits

0x338e,	// (0x0007a506) listscroll_cale_day_pane_t1

0x33a0,	// (0x0007a518) scroll_pane_cp09_ParamLimits

0x3f64,	// (0x0007b0dc) main_mup_eq_pane_t1_ParamLimits

0x3f64,	// (0x0007b0dc) main_mup_eq_pane_t1

0x3f80,	// (0x0007b0f8) main_mup_eq_pane_t2_ParamLimits

0x3f80,	// (0x0007b0f8) main_mup_eq_pane_t2

0x3f9c,	// (0x0007b114) main_mup_eq_pane_t3_ParamLimits

0x3f9c,	// (0x0007b114) main_mup_eq_pane_t3

0x3fba,	// (0x0007b132) main_mup_eq_pane_t4_ParamLimits

0x3fba,	// (0x0007b132) main_mup_eq_pane_t4

0x3fd8,	// (0x0007b150) main_mup_eq_pane_t5_ParamLimits

0x3fd8,	// (0x0007b150) main_mup_eq_pane_t5

0x3ff6,	// (0x0007b16e) main_mup_eq_pane_t6_ParamLimits

0x3ff6,	// (0x0007b16e) main_mup_eq_pane_t6

0x400c,	// (0x0007b184) main_mup_eq_pane_t7_ParamLimits

0x400c,	// (0x0007b184) main_mup_eq_pane_t7

0x4022,	// (0x0007b19a) main_mup_eq_pane_t8_ParamLimits

0x4022,	// (0x0007b19a) main_mup_eq_pane_t8

0x4038,	// (0x0007b1b0) main_mup_eq_pane_t9_ParamLimits

0x4038,	// (0x0007b1b0) main_mup_eq_pane_t9

0x4054,	// (0x0007b1cc) main_mup_eq_pane_t10_ParamLimits

0x4054,	// (0x0007b1cc) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00086542) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00086542) main_mup_eq_pane_t

0x4129,	// (0x0007b2a1) mup_equalizer_pane_cp5_ParamLimits

0x4141,	// (0x0007b2b9) mup_equalizer_pane_cp6_ParamLimits

0x4159,	// (0x0007b2d1) mup_equalizer_pane_cp7_ParamLimits

0xaa67,	// (0x00081bdf) main_gallery_pane

0xbef8,	// (0x00083070) smil2_volume_pane

0xbf00,	// (0x00083078) smil_status_volume_pane_g1_ParamLimits

0xbf13,	// (0x0008308b) smil_status_volume_pane_g2_ParamLimits

0xbf26,	// (0x0008309e) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x000866f8) smil_status_volume_pane_g_ParamLimits

0xbfac,	// (0x00083124) bg_popup_window_pane_cp07_ParamLimits

0xc10f,	// (0x00083287) blid_firmament_pane

0xaae4,	// (0x00081c5c) aid_size_cell_gallery_ParamLimits

0xaae4,	// (0x00081c5c) aid_size_cell_gallery

0xaae4,	// (0x00081c5c) grid_gallery_pane_ParamLimits

0xaae4,	// (0x00081c5c) grid_gallery_pane

0xbfac,	// (0x00083124) cell_gallery_pane_ParamLimits

0xbfac,	// (0x00083124) cell_gallery_pane

0xaae4,	// (0x00081c5c) bg_cell_gallery_focus_pane_ParamLimits

0xaae4,	// (0x00081c5c) bg_cell_gallery_focus_pane

0xb210,	// (0x00082388) cell_gallery_pane_g1_ParamLimits

0xb210,	// (0x00082388) cell_gallery_pane_g1

0xb210,	// (0x00082388) cell_gallery_pane_g2_ParamLimits

0xb210,	// (0x00082388) cell_gallery_pane_g2

0xb210,	// (0x00082388) cell_gallery_pane_g3_ParamLimits

0xb210,	// (0x00082388) cell_gallery_pane_g3

0xb21e,	// (0x00082396) cell_gallery_pane_g4_ParamLimits

0xb21e,	// (0x00082396) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x000867a4) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x000867a4) cell_gallery_pane_g

0xc261,	// (0x000833d9) bg_cell_gallery_focus_pane_g1

0xc269,	// (0x000833e1) bg_cell_gallery_focus_pane_g2

0xc271,	// (0x000833e9) bg_cell_gallery_focus_pane_g3

0xc279,	// (0x000833f1) bg_cell_gallery_focus_pane_g4

0xc281,	// (0x000833f9) bg_cell_gallery_focus_pane_g5

0xc289,	// (0x00083401) bg_cell_gallery_focus_pane_g6

0xc291,	// (0x00083409) bg_cell_gallery_focus_pane_g7

0xc299,	// (0x00083411) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x000867ad) bg_cell_gallery_focus_pane_g

0xc2a1,	// (0x00083419) aid_firma_cardinal

0xc2b5,	// (0x0008342d) blid_firmament_pane_t1

0xc2cc,	// (0x00083444) blid_firmament_pane_t2

0xc2e3,	// (0x0008345b) blid_firmament_pane_t3

0xc2fa,	// (0x00083472) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x000867be) blid_firmament_pane_t

0xc311,	// (0x00083489) blid_sat_info_pane

0x1ebb,	// (0x00079033) blid_sat_info_pane_g1

0x1ebb,	// (0x00079033) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00086536) blid_sat_info_pane_g

0xc321,	// (0x00083499) blid_sat_info_pane_t1

0xc32f,	// (0x000834a7) smil2_volume_content_pane

0xc338,	// (0x000834b0) smil2_volume_pane_g1

0xb33f,	// (0x000824b7) smil2_volume_content_pane_g1

0xc340,	// (0x000834b8) smil2_volume_content_pane_g2

0xc349,	// (0x000834c1) smil2_volume_content_pane_g3

0xc352,	// (0x000834ca) smil2_volume_content_pane_g4

0xc35b,	// (0x000834d3) smil2_volume_content_pane_g5

0xc364,	// (0x000834dc) smil2_volume_content_pane_g6

0xc36d,	// (0x000834e5) smil2_volume_content_pane_g7

0xc376,	// (0x000834ee) smil2_volume_content_pane_g8

0xc37f,	// (0x000834f7) smil2_volume_content_pane_g9

0xc388,	// (0x00083500) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x000867c7) smil2_volume_content_pane_g

0x19c8,	// (0x00078b40) cale_week_day_heading_pane_t1_ParamLimits

0x19f2,	// (0x00078b6a) cale_week_day_heading_pane_t2_ParamLimits

0x1a21,	// (0x00078b99) cale_week_day_heading_pane_t3_ParamLimits

0x1a50,	// (0x00078bc8) cale_week_day_heading_pane_t4_ParamLimits

0x1a7f,	// (0x00078bf7) cale_week_day_heading_pane_t5_ParamLimits

0x1ab2,	// (0x00078c2a) cale_week_day_heading_pane_t6_ParamLimits

0x1ae9,	// (0x00078c61) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000862ea) cale_week_day_heading_pane_t_ParamLimits

0x1b13,	// (0x00078c8b) bg_cale_side_pane_ParamLimits

0x1b21,	// (0x00078c99) cale_week_time_pane_t1_ParamLimits

0x1b3b,	// (0x00078cb3) cale_week_time_pane_t2_ParamLimits

0x1b55,	// (0x00078ccd) cale_week_time_pane_t3_ParamLimits

0x1b6f,	// (0x00078ce7) cale_week_time_pane_t4_ParamLimits

0x1b89,	// (0x00078d01) cale_week_time_pane_t5_ParamLimits

0x1ba3,	// (0x00078d1b) cale_week_time_pane_t6_ParamLimits

0x1bc3,	// (0x00078d3b) cale_week_time_pane_t7_ParamLimits

0x1be9,	// (0x00078d61) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000862f9) cale_week_time_pane_t_ParamLimits

0x1c0f,	// (0x00078d87) cell_cale_week_pane_g2_ParamLimits

0x1b13,	// (0x00078c8b) bg_cale_side_pane_cp01_ParamLimits

0x30b7,	// (0x0007a22f) cale_month_week_pane_t1_ParamLimits

0x30d0,	// (0x0007a248) cale_month_week_pane_t2_ParamLimits

0x30e9,	// (0x0007a261) cale_month_week_pane_t3_ParamLimits

0x3102,	// (0x0007a27a) cale_month_week_pane_t4_ParamLimits

0x311b,	// (0x0007a293) cale_month_week_pane_t5_ParamLimits

0x3134,	// (0x0007a2ac) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x000863c7) cale_month_week_pane_t_ParamLimits

0xb414,	// (0x0008258c) cell_cale_month_pane_g1_ParamLimits

0xaa67,	// (0x00081bdf) main_cale_event_viewer_pane

0xaa67,	// (0x00081bdf) listscroll_cale_event_viewer_pane

0xc391,	// (0x00083509) list_cale_ev_pane

0xc399,	// (0x00083511) scroll_pane_cp023

0x5b2e,	// (0x0007cca6) field_cale_ev_pane_ParamLimits

0x5b2e,	// (0x0007cca6) field_cale_ev_pane

0xc3a5,	// (0x0008351d) field_cale_ev_content_pane_ParamLimits

0xc3a5,	// (0x0008351d) field_cale_ev_content_pane

0xc3b1,	// (0x00083529) field_cale_ev_pane_g1_ParamLimits

0xc3b1,	// (0x00083529) field_cale_ev_pane_g1

0xc3bd,	// (0x00083535) field_cale_ev_pane_g2_ParamLimits

0xc3bd,	// (0x00083535) field_cale_ev_pane_g2

0xc3d5,	// (0x0008354d) field_cale_ev_pane_g3_ParamLimits

0xc3d5,	// (0x0008354d) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x000867dc) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x000867dc) field_cale_ev_pane_g

0xc3ed,	// (0x00083565) field_cale_ev_pane_t1_ParamLimits

0xc3ed,	// (0x00083565) field_cale_ev_pane_t1

0x5b52,	// (0x0007ccca) field_cale_ev_content_pane_t1_ParamLimits

0x5b52,	// (0x0007ccca) field_cale_ev_content_pane_t1

0x4209,	// (0x0007b381) bg_button_pane_cp01

0x1648,	// (0x000787c0) listscroll_cale_week_pane_ParamLimits

0x1658,	// (0x000787d0) popup_toolbar_window_cp01

0x18fd,	// (0x00078a75) listscroll_cale_week_pane_t1_ParamLimits

0x1648,	// (0x000787c0) listscroll_cale_day_pane_ParamLimits

0x1658,	// (0x000787d0) popup_toolbar_window_cp02

0x338e,	// (0x0007a506) listscroll_cale_day_pane_t1_ParamLimits

0x1648,	// (0x000787c0) main_cale_month_pane_ParamLimits

0xbe63,	// (0x00082fdb) popup_toolbar_window_cp03_ParamLimits

0xbe63,	// (0x00082fdb) popup_toolbar_window_cp03

0x4588,	// (0x0007b700) main_image_pane_g2_ParamLimits

0x4588,	// (0x0007b700) main_image_pane_g2

0x4599,	// (0x0007b711) main_image_pane_g3_ParamLimits

0x4599,	// (0x0007b711) main_image_pane_g3

0x0002,

0xf45c,	// (0x000865d4) main_image_pane_g_ParamLimits

0xf45c,	// (0x000865d4) main_image_pane_g

0x45aa,	// (0x0007b722) main_image_pane_t1_ParamLimits

0x45c1,	// (0x0007b739) main_image_pane_t2_ParamLimits

0x45c1,	// (0x0007b739) main_image_pane_t2

0x45d3,	// (0x0007b74b) main_image_pane_t3_ParamLimits

0x45d3,	// (0x0007b74b) main_image_pane_t3

0x45fb,	// (0x0007b773) main_image_pane_t4_ParamLimits

0x45fb,	// (0x0007b773) main_image_pane_t4

0x0003,

0xf463,	// (0x000865db) main_image_pane_t_ParamLimits

0xf463,	// (0x000865db) main_image_pane_t

0x461b,	// (0x0007b793) popup_image_details_window_cp01

0x4625,	// (0x0007b79d) popup_toobar_trans_pane_cp01_ParamLimits

0x4625,	// (0x0007b79d) popup_toobar_trans_pane_cp01

0x5645,	// (0x0007c7bd) popup_image_details_window_ParamLimits

0x5645,	// (0x0007c7bd) popup_image_details_window

0xbe34,	// (0x00082fac) popup_image_focus_window

0xbf7c,	// (0x000830f4) camera2_autofocus_pane_ParamLimits

0xbf7c,	// (0x000830f4) camera2_autofocus_pane

0xaa67,	// (0x00081bdf) bg_popup_sub_pane_cp06

0xc404,	// (0x0008357c) popup_image_focus_window_g1

0xc40c,	// (0x00083584) popup_image_focus_window_g2

0xc414,	// (0x0008358c) popup_image_focus_window_g3

0xc41c,	// (0x00083594) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x000867e3) popup_image_focus_window_g

0xc424,	// (0x0008359c) popup_image_focus_window_t1

0xc432,	// (0x000835aa) popup_image_focus_window_t2

0xc442,	// (0x000835ba) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x000867ec) popup_image_focus_window_t

0xb210,	// (0x00082388) camera2_autofocus_pane_g1

0xaae4,	// (0x00081c5c) bg_tb_trans_pane_cp01

0xc450,	// (0x000835c8) popup_image_details_window_g1

0xc463,	// (0x000835db) popup_image_details_window_g2

0x0002,

0xf686,	// (0x000867fe) popup_image_details_window_g

0xc48c,	// (0x00083604) popup_image_details_window_t1

0xc49e,	// (0x00083616) popup_image_details_window_t2

0xc4b7,	// (0x0008362f) popup_image_details_window_t3

0xc4cb,	// (0x00083643) popup_image_details_window_t4

0xc4e6,	// (0x0008365e) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x00086805) popup_image_details_window_t

0xb276,	// (0x000823ee) bg_calc_paper_pane_ParamLimits

0xaa67,	// (0x00081bdf) grid_highlight_pane_cp013

0xb28a,	// (0x00082402) list_calc_pane_ParamLimits

0xb29c,	// (0x00082414) scroll_pane_cp024

0xb2a4,	// (0x0008241c) bg_calc_display_pane_ParamLimits

0x1466,	// (0x000785de) calc_display_pane_t1_ParamLimits

0x1478,	// (0x000785f0) calc_display_pane_t2_ParamLimits

0xb2b0,	// (0x00082428) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0008626a) calc_display_pane_t_ParamLimits

0x1539,	// (0x000786b1) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00086287) cell_calc_pane_g

0x1542,	// (0x000786ba) cell_calc_pane_t1

0xb31d,	// (0x00082495) grid_highlight_pane_cp02_ParamLimits

0xb333,	// (0x000824ab) toolbar_button_pane_cp01_ParamLimits

0xb333,	// (0x000824ab) toolbar_button_pane_cp01

0x4667,	// (0x0007b7df) temp_image_control_pane_ParamLimits

0x4667,	// (0x0007b7df) temp_image_control_pane

0xaae4,	// (0x00081c5c) main_mp3_pane

0xc500,	// (0x00083678) temp_image_control_pane_g1_ParamLimits

0xc500,	// (0x00083678) temp_image_control_pane_g1

0xc50e,	// (0x00083686) temp_image_control_pane_g2_ParamLimits

0xc50e,	// (0x00083686) temp_image_control_pane_g2

0xc520,	// (0x00083698) temp_image_control_pane_g3_ParamLimits

0xc520,	// (0x00083698) temp_image_control_pane_g3

0x5b73,	// (0x0007cceb) temp_image_control_pane_g4_ParamLimits

0x5b73,	// (0x0007cceb) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x00086810) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x00086810) temp_image_control_pane_g

0xc500,	// (0x00083678) main_mp3_pane_g1

0x5b86,	// (0x0007ccfe) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x00086819) main_mp3_pane_g

0xc555,	// (0x000836cd) main_mp3_pane_t1

0xb21e,	// (0x00082396) main_camera_pane_g8_ParamLimits

0xb21e,	// (0x00082396) main_camera_pane_g8

0x1e69,	// (0x00078fe1) main_video_pane_g7_ParamLimits

0x1e69,	// (0x00078fe1) main_video_pane_g7

0x3ee7,	// (0x0007b05f) main_camera2_pane_t7_ParamLimits

0x3ee7,	// (0x0007b05f) main_camera2_pane_t7

0x2436,	// (0x000795ae) scroll_pane_cp025_ParamLimits

0x2436,	// (0x000795ae) scroll_pane_cp025

0x244a,	// (0x000795c2) scroll_pane_cp026_ParamLimits

0x244a,	// (0x000795c2) scroll_pane_cp026

0x2459,	// (0x000795d1) wml_content_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_touch_calib_pane

0x5c58,	// (0x0007cdd0) main_touch_calib_pane_g1

0x5c6a,	// (0x0007cde2) main_touch_calib_pane_g2

0x5c7c,	// (0x0007cdf4) main_touch_calib_pane_g3

0x5c8e,	// (0x0007ce06) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x00086837) main_touch_calib_pane_g

0x5ca0,	// (0x0007ce18) main_touch_calib_pane_t1

0x5cba,	// (0x0007ce32) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x00086840) main_touch_calib_pane_t

0x3c57,	// (0x0007adcf) mup_progress_pane_cp02

0x3c8c,	// (0x0007ae04) navi_pane_g1

0x3d47,	// (0x0007aebf) navi_pane_mp_t3

0xaae4,	// (0x00081c5c) main_mp3_pane_ParamLimits

0x57fe,	// (0x0007c976) navi_pane_ParamLimits

0xc500,	// (0x00083678) main_mp3_pane_g1_ParamLimits

0x5b86,	// (0x0007ccfe) main_mp3_pane_g2_ParamLimits

0x5b92,	// (0x0007cd0a) main_mp3_pane_g3_ParamLimits

0x5b92,	// (0x0007cd0a) main_mp3_pane_g3

0x5ba0,	// (0x0007cd18) main_mp3_pane_g4_ParamLimits

0x5ba0,	// (0x0007cd18) main_mp3_pane_g4

0xb210,	// (0x00082388) main_mp3_pane_g5_ParamLimits

0xb210,	// (0x00082388) main_mp3_pane_g5

0xc530,	// (0x000836a8) main_mp3_pane_g6_ParamLimits

0xc530,	// (0x000836a8) main_mp3_pane_g6

0xc53d,	// (0x000836b5) main_mp3_pane_g7_ParamLimits

0xc53d,	// (0x000836b5) main_mp3_pane_g7

0xc549,	// (0x000836c1) main_mp3_pane_g8_ParamLimits

0xc549,	// (0x000836c1) main_mp3_pane_g8

0xf6a1,	// (0x00086819) main_mp3_pane_g_ParamLimits

0x5bac,	// (0x0007cd24) main_mp3_pane_t2

0x5bba,	// (0x0007cd32) main_mp3_pane_t3

0xc563,	// (0x000836db) main_mp3_pane_t4

0xc571,	// (0x000836e9) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0008682a) main_mp3_pane_t

0xc57f,	// (0x000836f7) mup_progress_pane_cp01

0xaa95,	// (0x00081c0d) aid_zoom_text_secondary2

0xc391,	// (0x00083509) list_cale_ev2_pane

0xc399,	// (0x00083511) scroll_pane_cp023_ParamLimits

0x5d14,	// (0x0007ce8c) field_cale_ev2_pane_ParamLimits

0x5d14,	// (0x0007ce8c) field_cale_ev2_pane

0x5d38,	// (0x0007ceb0) field_cale_ev2_pane_g1_ParamLimits

0x5d38,	// (0x0007ceb0) field_cale_ev2_pane_g1

0x5d44,	// (0x0007cebc) field_cale_ev2_pane_g2_ParamLimits

0x5d44,	// (0x0007cebc) field_cale_ev2_pane_g2

0x5d5c,	// (0x0007ced4) field_cale_ev2_pane_g3_ParamLimits

0x5d5c,	// (0x0007ced4) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0008684b) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0008684b) field_cale_ev2_pane_g

0x0811,	// (0x00077989) field_cale_ev2_pane_t1_ParamLimits

0x0811,	// (0x00077989) field_cale_ev2_pane_t1

0x0828,	// (0x000779a0) field_cale_ev2_pane_t2_ParamLimits

0x0828,	// (0x000779a0) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x00086854) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x00086854) field_cale_ev2_pane_t

0x433a,	// (0x0007b4b2) main_postcard_pane_g5_ParamLimits

0x433a,	// (0x0007b4b2) main_postcard_pane_g5

0x4350,	// (0x0007b4c8) main_postcard_pane_g6_ParamLimits

0x4350,	// (0x0007b4c8) main_postcard_pane_g6

0xaae4,	// (0x00081c5c) camera2_autofocus_pane_cp_ParamLimits

0xaae4,	// (0x00081c5c) camera2_autofocus_pane_cp

0xaae4,	// (0x00081c5c) main_mup3_pane

0x5dbe,	// (0x0007cf36) main_mup3_pane_g1_ParamLimits

0x5dbe,	// (0x0007cf36) main_mup3_pane_g1

0x5de0,	// (0x0007cf58) main_mup3_pane_g2_ParamLimits

0x5de0,	// (0x0007cf58) main_mup3_pane_g2

0x5e5b,	// (0x0007cfd3) main_mup3_pane_g3_ParamLimits

0x5e5b,	// (0x0007cfd3) main_mup3_pane_g3

0x5ec5,	// (0x0007d03d) main_mup3_pane_g4_ParamLimits

0x5ec5,	// (0x0007d03d) main_mup3_pane_g4

0x5f2f,	// (0x0007d0a7) main_mup3_pane_g5_ParamLimits

0x5f2f,	// (0x0007d0a7) main_mup3_pane_g5

0x5f99,	// (0x0007d111) main_mup3_pane_g6_ParamLimits

0x5f99,	// (0x0007d111) main_mup3_pane_g6

0xb21e,	// (0x00082396) main_mup3_pane_g7_ParamLimits

0xb21e,	// (0x00082396) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x00086864) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x00086864) main_mup3_pane_g

0x601d,	// (0x0007d195) main_mup3_pane_t1_ParamLimits

0x601d,	// (0x0007d195) main_mup3_pane_t1

0x608f,	// (0x0007d207) main_mup3_pane_t2_ParamLimits

0x608f,	// (0x0007d207) main_mup3_pane_t2

0x6165,	// (0x0007d2dd) main_mup3_pane_t4_ParamLimits

0x6165,	// (0x0007d2dd) main_mup3_pane_t4

0x61c3,	// (0x0007d33b) main_mup3_pane_t5_ParamLimits

0x61c3,	// (0x0007d33b) main_mup3_pane_t5

0x6287,	// (0x0007d3ff) main_mup3_pane_t6_ParamLimits

0x6287,	// (0x0007d3ff) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x00086875) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x00086875) main_mup3_pane_t

0x633f,	// (0x0007d4b7) mup3_progress_pane_ParamLimits

0x633f,	// (0x0007d4b7) mup3_progress_pane

0x63d7,	// (0x0007d54f) popup_mup3_control_window_ParamLimits

0x63d7,	// (0x0007d54f) popup_mup3_control_window

0xc593,	// (0x0008370b) popup_mup3_text_window

0x640d,	// (0x0007d585) mup3_progress_pane_t1

0x642c,	// (0x0007d5a4) mup3_progress_pane_t2

0xc59b,	// (0x00083713) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x00086882) mup3_progress_pane_t

0xc5b8,	// (0x00083730) mup_progress_pane_cp03

0xaa67,	// (0x00081bdf) bg_tb_trans_pane_cp04

0x644b,	// (0x0007d5c3) mup3_volume_pane

0x6453,	// (0x0007d5cb) popup_mup3_control_window_g1

0x645c,	// (0x0007d5d4) mup3_volume_pane_g1

0x6465,	// (0x0007d5dd) mup3_volume_pane_g2

0x646e,	// (0x0007d5e6) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x00086889) mup3_volume_pane_g

0xaa67,	// (0x00081bdf) bg_tb_trans_pane_cp03

0xc5c8,	// (0x00083740) popup_mup3_text_window_g1

0xc5d0,	// (0x00083748) popup_mup3_text_window_t1

0xb2fe,	// (0x00082476) list_calc_item_pane_g1_ParamLimits

0xc085,	// (0x000831fd) mup_volume_pane_cp_g1

0x5cd4,	// (0x0007ce4c) main_touch_calib_pane_t3

0x5ce8,	// (0x0007ce60) main_touch_calib_pane_t4

0x5cfe,	// (0x0007ce76) main_touch_calib_pane_t5

0xaa71,	// (0x00081be9) aid_cell_size_toolbar2

0xaa79,	// (0x00081bf1) aid_popup3_width_pane

0xaa85,	// (0x00081bfd) aid_zoom_text_msg_primary

0x1d14,	// (0x00078e8c) vorec_t7

0xb2c2,	// (0x0008243a) bg_calc_paper_pane_g1_ParamLimits

0xb2ce,	// (0x00082446) bg_calc_paper_pane_g2_ParamLimits

0xb2da,	// (0x00082452) bg_calc_paper_pane_g3_ParamLimits

0xb2e6,	// (0x0008245e) bg_calc_paper_pane_g4_ParamLimits

0xb2f2,	// (0x0008246a) bg_calc_paper_pane_g5_ParamLimits

0x14c5,	// (0x0007863d) bg_calc_paper_pane_g6_ParamLimits

0x14d3,	// (0x0007864b) bg_calc_paper_pane_g7_ParamLimits

0x14e1,	// (0x00078659) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00086271) bg_calc_paper_pane_g_ParamLimits

0x14f4,	// (0x0007866c) calc_bg_paper_pane_g9_ParamLimits

0xaae4,	// (0x00081c5c) image_qvga_pane_ParamLimits

0xaae4,	// (0x00081c5c) image_qvga_pane

0xb195,	// (0x0008230d) bg_popup_sub_pane_cp04_ParamLimits

0x44e6,	// (0x0007b65e) popup_mup_playback_window_g1_ParamLimits

0x44f2,	// (0x0007b66a) popup_mup_playback_window_t1_ParamLimits

0x4507,	// (0x0007b67f) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x000865cf) popup_mup_playback_window_t_ParamLimits

0xb21e,	// (0x00082396) main_mup2_pane_g3_ParamLimits

0xb21e,	// (0x00082396) main_mup2_pane_g3

0x20c1,	// (0x00079239) popup_toolbar_window_cp04

0x4d2c,	// (0x0007bea4) popup_call2_audio_second_window_g3_ParamLimits

0x4d2c,	// (0x0007bea4) popup_call2_audio_second_window_g3

0x5154,	// (0x0007c2cc) popup_call2_audio_first_window_g4_ParamLimits

0x5154,	// (0x0007c2cc) popup_call2_audio_first_window_g4

0xbb3c,	// (0x00082cb4) popup_call2_audio_in_window_g4_ParamLimits

0xbb3c,	// (0x00082cb4) popup_call2_audio_in_window_g4

0x451c,	// (0x0007b694) aid_area_sk_bg_cut_ParamLimits

0x451c,	// (0x0007b694) aid_area_sk_bg_cut

0x453a,	// (0x0007b6b2) aid_area_sk_bg_cut_2_ParamLimits

0x453a,	// (0x0007b6b2) aid_area_sk_bg_cut_2

0xaa67,	// (0x00081bdf) aid_placing_details_win

0xaa67,	// (0x00081bdf) aid_placing_details_win_2

0xb210,	// (0x00082388) camera2_autofocus_pane_g1_ParamLimits

0x1207,	// (0x0007837f) popup_fixed_preview_cale_window_ParamLimits

0x1207,	// (0x0007837f) popup_fixed_preview_cale_window

0x3e07,	// (0x0007af7f) navi_slider_pane_g3

0x3e10,	// (0x0007af88) navi_slider_pane_g4

0x3e19,	// (0x0007af91) navi_slider_pane_g5

0x3e07,	// (0x0007af7f) navi_slider_pane_g6

0xb4ba,	// (0x00082632) navi_slider_pane_g7

0x417a,	// (0x0007b2f2) mup_scale_pane_g3

0x4183,	// (0x0007b2fb) mup_scale_pane_g4

0x418c,	// (0x0007b304) mup_scale_pane_g5

0x4195,	// (0x0007b30d) mup_scale_pane_g6

0x419e,	// (0x0007b316) mup_scale_pane_g7

0x1ebb,	// (0x00079033) cams2_slider_pane_g3

0x1ebb,	// (0x00079033) cams2_slider_pane_g4

0x1ebb,	// (0x00079033) cams2_slider_pane_g5

0x1ebb,	// (0x00079033) cams2_slider_pane_g6

0x1ebb,	// (0x00079033) cams2_slider_pane_g7

0x1ebb,	// (0x00079033) camera2_autofocus_pane_cp_g1

0xbe14,	// (0x00082f8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe14,	// (0x00082f8c) bg_popup_preview_window_pane_cp02

0xc5de,	// (0x00083756) list_fp_cale_pane_ParamLimits

0xc5de,	// (0x00083756) list_fp_cale_pane

0xc5ea,	// (0x00083762) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5ea,	// (0x00083762) popup_fixed_preview_cale_window_t1

0x6477,	// (0x0007d5ef) popup_fixed_preview_cale_window_t2_ParamLimits

0x6477,	// (0x0007d5ef) popup_fixed_preview_cale_window_t2

0x648c,	// (0x0007d604) popup_fixed_preview_cale_window_t3_ParamLimits

0x648c,	// (0x0007d604) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x00086890) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x00086890) popup_fixed_preview_cale_window_t

0x64a3,	// (0x0007d61b) list_single_fp_cale_pane_ParamLimits

0x64a3,	// (0x0007d61b) list_single_fp_cale_pane

0xc608,	// (0x00083780) list_single_fp_cale_pane_g1_ParamLimits

0xc608,	// (0x00083780) list_single_fp_cale_pane_g1

0xc614,	// (0x0008378c) list_single_fp_cale_pane_g2_ParamLimits

0xc614,	// (0x0008378c) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x00086897) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x00086897) list_single_fp_cale_pane_g

0xc62d,	// (0x000837a5) list_single_fp_cale_pane_t1_ParamLimits

0xc62d,	// (0x000837a5) list_single_fp_cale_pane_t1

0xc63f,	// (0x000837b7) list_single_fp_cale_pane_t2_ParamLimits

0xc63f,	// (0x000837b7) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x0008689e) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x0008689e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaa67,	// (0x00081bdf) main_dialer_pane

0xaa67,	// (0x00081bdf) aid_cell_size_keypad

0xaa67,	// (0x00081bdf) dialer_ne_pane

0xaa67,	// (0x00081bdf) grid_dialer_command_1_pane

0xaa67,	// (0x00081bdf) grid_dialer_command_2_pane

0xaa67,	// (0x00081bdf) grid_dialer_keypad_pane

0x64bb,	// (0x0007d633) bg_popup_call_pane_cp06_ParamLimits

0x64bb,	// (0x0007d633) bg_popup_call_pane_cp06

0x64bb,	// (0x0007d633) dialer_ne_clear_pane_ParamLimits

0x64bb,	// (0x0007d633) dialer_ne_clear_pane

0x1ebb,	// (0x00079033) dialer_ne_pane_g1

0x3ee7,	// (0x0007b05f) dialer_ne_pane_t1_ParamLimits

0x3ee7,	// (0x0007b05f) dialer_ne_pane_t1

0x64c9,	// (0x0007d641) dialer_ne_pane_t2_ParamLimits

0x64c9,	// (0x0007d641) dialer_ne_pane_t2

0x64f1,	// (0x0007d669) dialer_ne_pane_t3_ParamLimits

0x64f1,	// (0x0007d669) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x000868a3) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x000868a3) dialer_ne_pane_t

0x64f1,	// (0x0007d669) dialer_ne_pane_t3_copy1_ParamLimits

0x64f1,	// (0x0007d669) dialer_ne_pane_t3_copy1

0xc672,	// (0x000837ea) cell_dialer_keypad_pane_ParamLimits

0xc672,	// (0x000837ea) cell_dialer_keypad_pane

0xaae4,	// (0x00081c5c) cell_dialer_command_1_pane_ParamLimits

0xaae4,	// (0x00081c5c) cell_dialer_command_1_pane

0xc689,	// (0x00083801) cell_dialer_command_2_pane_ParamLimits

0xc689,	// (0x00083801) cell_dialer_command_2_pane

0xaae4,	// (0x00081c5c) bg_button_pane_cp02_ParamLimits

0xaae4,	// (0x00081c5c) bg_button_pane_cp02

0xb210,	// (0x00082388) cell_dialer_keypad_pane_g1_ParamLimits

0xb210,	// (0x00082388) cell_dialer_keypad_pane_g1

0xaae4,	// (0x00081c5c) bg_button_pane_cp03_ParamLimits

0xaae4,	// (0x00081c5c) bg_button_pane_cp03

0xb210,	// (0x00082388) cell_dialer_command_1_pane_g1_ParamLimits

0xb210,	// (0x00082388) cell_dialer_command_1_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp04

0x1ebb,	// (0x00079033) cell_dialer_command_2_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp06

0x1ebb,	// (0x00079033) dialer_ne_clear_pane_g1

0x3c98,	// (0x0007ae10) navi_pane_g2

0x3cc6,	// (0x0007ae3e) navi_pane_g3

0x0002,

0xf35a,	// (0x000864d2) navi_pane_g

0x3d55,	// (0x0007aecd) navi_pane_mv_g2

0x3d7c,	// (0x0007aef4) navi_pane_mv_g5

0x3d84,	// (0x0007aefc) navi_pane_mv_t1

0xb2a4,	// (0x0008241c) main_clock2_pane

0xaae4,	// (0x00081c5c) main_clock2_list_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_clock2_list_pane

0x6582,	// (0x0007d6fa) main_clock2_pane_t1_ParamLimits

0x6582,	// (0x0007d6fa) main_clock2_pane_t1

0x65bd,	// (0x0007d735) main_clock2_pane_t2_ParamLimits

0x65bd,	// (0x0007d735) main_clock2_pane_t2

0x0004,

0xf737,	// (0x000868af) main_clock2_pane_t_ParamLimits

0xf737,	// (0x000868af) main_clock2_pane_t

0x665c,	// (0x0007d7d4) popup_clock_analogue_window_cp03_ParamLimits

0x665c,	// (0x0007d7d4) popup_clock_analogue_window_cp03

0x6681,	// (0x0007d7f9) popup_clock_digital_window_cp02_ParamLimits

0x6681,	// (0x0007d7f9) popup_clock_digital_window_cp02

0x66fa,	// (0x0007d872) main_clock2_list_single_pane_ParamLimits

0x66fa,	// (0x0007d872) main_clock2_list_single_pane

0x1cca,	// (0x00078e42) list_highlight_pane_cp05

0xc6ca,	// (0x00083842) main_clock2_list_single_pane_t1

0x20c1,	// (0x00079239) popup_toolbar_window_cp04_ParamLimits

0xb21e,	// (0x00082396) camera2_autofocus_pane_g2_ParamLimits

0xb21e,	// (0x00082396) camera2_autofocus_pane_g2

0xb21e,	// (0x00082396) camera2_autofocus_pane_g3_ParamLimits

0xb21e,	// (0x00082396) camera2_autofocus_pane_g3

0xb21e,	// (0x00082396) camera2_autofocus_pane_g4_ParamLimits

0xb21e,	// (0x00082396) camera2_autofocus_pane_g4

0xb21e,	// (0x00082396) camera2_autofocus_pane_g5_ParamLimits

0xb21e,	// (0x00082396) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x000867f3) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x000867f3) camera2_autofocus_pane_g

0x5d74,	// (0x0007ceec) camera2_autofocus_pane_cp_g2

0x5d7c,	// (0x0007cef4) camera2_autofocus_pane_cp_g3

0x5d84,	// (0x0007cefc) camera2_autofocus_pane_cp_g4

0x5d8c,	// (0x0007cf04) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x00086859) camera2_autofocus_pane_cp_g

0xaa67,	// (0x00081bdf) popup_dialer_spcha_window

0xaa67,	// (0x00081bdf) bg_popup_sub_pane_cp07

0xaa67,	// (0x00081bdf) list_spcha_pane

0xc6d8,	// (0x00083850) list_single_spcha_pane_ParamLimits

0xc6d8,	// (0x00083850) list_single_spcha_pane

0xaa67,	// (0x00081bdf) list_highlight_pane_cp06

0x363d,	// (0x0007a7b5) list_single_spcha_pane_t1

0xb8e6,	// (0x00082a5e) popup_call2_audio_out_window_g4_ParamLimits

0xb8e6,	// (0x00082a5e) popup_call2_audio_out_window_g4

0xaa67,	// (0x00081bdf) main_imed2_pane

0xbe3e,	// (0x00082fb6) popup_imed_adjust2_window

0x565d,	// (0x0007c7d5) popup_imed_trans_window_ParamLimits

0x565d,	// (0x0007c7d5) popup_imed_trans_window

0xc15a,	// (0x000832d2) popup_blid_sat_info2_window_t1

0xc168,	// (0x000832e0) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x00086788) popup_blid_sat_info2_window_t

0x67b5,	// (0x0007d92d) aid_size_cell_colour_35

0x67d5,	// (0x0007d94d) aid_size_cell_colour_112

0x67f5,	// (0x0007d96d) aid_size_cell_effect

0x3efb,	// (0x0007b073) bg_tb_trans_pane_cp02

0x34e3,	// (0x0007a65b) heading_imed_pane

0x6815,	// (0x0007d98d) listscroll_imed_pane

0xc6ea,	// (0x00083862) heading_imed_pane_g1

0xc6f2,	// (0x0008386a) heading_imed_pane_t1

0xc700,	// (0x00083878) grid_imed_colour_35_pane_ParamLimits

0xc700,	// (0x00083878) grid_imed_colour_35_pane

0x6821,	// (0x0007d999) grid_imed_effect_pane

0xc71c,	// (0x00083894) list_imed_aspect_pane

0x6838,	// (0x0007d9b0) scroll_pane_cp027_ParamLimits

0x6838,	// (0x0007d9b0) scroll_pane_cp027

0x6849,	// (0x0007d9c1) cell_imed_effect_pane_ParamLimits

0x6849,	// (0x0007d9c1) cell_imed_effect_pane

0xc724,	// (0x0008389c) cell_imed_colour_pane_ParamLimits

0xc724,	// (0x0008389c) cell_imed_colour_pane

0xc76e,	// (0x000838e6) cell_imed_colour_pane_g1_ParamLimits

0xc76e,	// (0x000838e6) cell_imed_colour_pane_g1

0xc77f,	// (0x000838f7) hgihlgiht_grid_pane_cp016_ParamLimits

0xc77f,	// (0x000838f7) hgihlgiht_grid_pane_cp016

0x6874,	// (0x0007d9ec) cell_imed_effect_pane_g1

0x687c,	// (0x0007d9f4) grid_highlight_pane_cp017

0xc790,	// (0x00083908) list_imed_single_pane_ParamLimits

0xc790,	// (0x00083908) list_imed_single_pane

0xaa67,	// (0x00081bdf) list_highlight_pane_cp07

0xc7a4,	// (0x0008391c) list_imed_aspect_pane_comp1_t1

0x3efb,	// (0x0007b073) bg_tb_trans_pane_cp05

0xc7c6,	// (0x0008393e) popup_imed_adjust2_window_g1

0xc7ed,	// (0x00083965) popup_imed_adjust2_window_t1

0xc805,	// (0x0008397d) slider_imed_adjust_pane

0xc819,	// (0x00083991) slider_imed_adjust_pane_g1

0xc829,	// (0x000839a1) slider_imed_adjust_pane_g2

0xc839,	// (0x000839b1) slider_imed_adjust_pane_g3

0xc84a,	// (0x000839c2) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x000868cc) slider_imed_adjust_pane_g

0x6885,	// (0x0007d9fd) aid_size_cell_clipart2

0xc85b,	// (0x000839d3) grid_imed_clipart_pane

0xc865,	// (0x000839dd) scroll_pane_cp031

0x6891,	// (0x0007da09) cell_imed_clipart_pane_ParamLimits

0x6891,	// (0x0007da09) cell_imed_clipart_pane

0x68ae,	// (0x0007da26) cell_imed_clipart_pane_g1

0xaa67,	// (0x00081bdf) grid_highlight_pane_cp014

0x6560,	// (0x0007d6d8) main_clock2_pane_g1_ParamLimits

0x6560,	// (0x0007d6d8) main_clock2_pane_g1

0x66a1,	// (0x0007d819) aid_call2_pane_cp10

0x66b3,	// (0x0007d82b) aid_call_pane_cp10

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g1

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g2

0x66c5,	// (0x0007d83d) popup_clock_analogue_window_cp10_g3

0x66c5,	// (0x0007d83d) popup_clock_analogue_window_cp10_g4

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x000868ba) popup_clock_analogue_window_cp10_g

0x66db,	// (0x0007d853) popup_clock_analogue_window_cp10_t1

0x670c,	// (0x0007d884) clock_digital_number_pane_cp10_ParamLimits

0x670c,	// (0x0007d884) clock_digital_number_pane_cp10

0x6726,	// (0x0007d89e) clock_digital_number_pane_cp11_ParamLimits

0x6726,	// (0x0007d89e) clock_digital_number_pane_cp11

0x6740,	// (0x0007d8b8) clock_digital_number_pane_cp12_ParamLimits

0x6740,	// (0x0007d8b8) clock_digital_number_pane_cp12

0x675c,	// (0x0007d8d4) clock_digital_number_pane_cp13_ParamLimits

0x675c,	// (0x0007d8d4) clock_digital_number_pane_cp13

0x6778,	// (0x0007d8f0) clock_digital_separator_pane_cp10_ParamLimits

0x6778,	// (0x0007d8f0) clock_digital_separator_pane_cp10

0x6794,	// (0x0007d90c) popup_clock_digital_window_cp02_t1_ParamLimits

0x6794,	// (0x0007d90c) popup_clock_digital_window_cp02_t1

0xb18d,	// (0x00082305) clock_digital_number_pane_cp10_g1

0xb18d,	// (0x00082305) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x000868d5) clock_digital_number_pane_cp10_g

0xb18d,	// (0x00082305) clock_digital_separator_pane_cp10_g1

0xb18d,	// (0x00082305) clock_digital_separator_pane_g2_cp10

0x3dc6,	// (0x0007af3e) navi_pane_vded_g4

0x3dcf,	// (0x0007af47) navi_pane_vded_g5

0x3dd8,	// (0x0007af50) navi_pane_vded_t1

0xaa67,	// (0x00081bdf) main_vded_pane

0x68b7,	// (0x0007da2f) main_vded_pane_g1

0x68c3,	// (0x0007da3b) main_vded_pane_g2

0x68cf,	// (0x0007da47) main_vded_pane_g3

0x0002,

0xf762,	// (0x000868da) main_vded_pane_g

0x68db,	// (0x0007da53) main_vded_pane_t1

0x68e9,	// (0x0007da61) main_vded_pane_t2

0x0001,

0xf769,	// (0x000868e1) main_vded_pane_t

0x68f7,	// (0x0007da6f) vded_slider_pane

0x6901,	// (0x0007da79) vded_video_pane

0xc86d,	// (0x000839e5) vded_video_pane_g1

0x690d,	// (0x0007da85) vded_video_pane_g2

0x1ebb,	// (0x00079033) vded_video_pane_g3

0x0002,

0xf76e,	// (0x000868e6) vded_video_pane_g

0xc877,	// (0x000839ef) vded_slider_pane_g1

0xc085,	// (0x000831fd) vded_slider_pane_g2

0xc880,	// (0x000839f8) vded_slider_pane_g3

0xc889,	// (0x00083a01) vded_slider_pane_g4

0xc892,	// (0x00083a0a) vded_slider_pane_g5

0x0004,

0xf775,	// (0x000868ed) vded_slider_pane_g

0x63c1,	// (0x0007d539) mup3_rocker_pane_ParamLimits

0x63c1,	// (0x0007d539) mup3_rocker_pane

0x6916,	// (0x0007da8e) mup3_control_keys_pane_g1

0x691e,	// (0x0007da96) mup3_control_keys_pane_g2

0x6926,	// (0x0007da9e) mup3_control_keys_pane_g3

0x692e,	// (0x0007daa6) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x000868f8) mup3_control_keys_pane_g

0x123c,	// (0x000783b4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x123c,	// (0x000783b4) popup_toolbar2_fixed_window_cp01

0x63f7,	// (0x0007d56f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x63f7,	// (0x0007d56f) popup_toolbar2_fixed_window_cp02

0x4e9e,	// (0x0007c016) popup_call2_audio_second_window_t4_ParamLimits

0x4e9e,	// (0x0007c016) popup_call2_audio_second_window_t4

0xb7ab,	// (0x00082923) popup_call2_audio_first_window_t6_ParamLimits

0xb7ab,	// (0x00082923) popup_call2_audio_first_window_t6

0xb9e9,	// (0x00082b61) popup_call2_audio_out_window_t6_ParamLimits

0xb9e9,	// (0x00082b61) popup_call2_audio_out_window_t6

0xaa67,	// (0x00081bdf) main_vitu_pane

0xaae4,	// (0x00081c5c) aid_size_cell_itu_ParamLimits

0xaae4,	// (0x00081c5c) aid_size_cell_itu

0xaae4,	// (0x00081c5c) bg_popup_window_pane_cp08_ParamLimits

0xaae4,	// (0x00081c5c) bg_popup_window_pane_cp08

0xaae4,	// (0x00081c5c) field_vitu_entry_pane_ParamLimits

0xaae4,	// (0x00081c5c) field_vitu_entry_pane

0xaae4,	// (0x00081c5c) grid_vitu_function_pane_ParamLimits

0xaae4,	// (0x00081c5c) grid_vitu_function_pane

0xaae4,	// (0x00081c5c) grid_vitu_itu_pane_ParamLimits

0xaae4,	// (0x00081c5c) grid_vitu_itu_pane

0xaae4,	// (0x00081c5c) cell_vitu_itu_pane_ParamLimits

0xaae4,	// (0x00081c5c) cell_vitu_itu_pane

0xaae4,	// (0x00081c5c) cell_vitu_function_pane_ParamLimits

0xaae4,	// (0x00081c5c) cell_vitu_function_pane

0xaae4,	// (0x00081c5c) bg_popup_sub_pane_cp08_ParamLimits

0xaae4,	// (0x00081c5c) bg_popup_sub_pane_cp08

0x1d37,	// (0x00078eaf) field_vitu_entry_pane_t1_ParamLimits

0x1d37,	// (0x00078eaf) field_vitu_entry_pane_t1

0xc89b,	// (0x00083a13) field_vitu_entry_pane_t2_ParamLimits

0xc89b,	// (0x00083a13) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x00086901) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x00086901) field_vitu_entry_pane_t

0xbfac,	// (0x00083124) bg_button_pane_cp05_ParamLimits

0xbfac,	// (0x00083124) bg_button_pane_cp05

0xc8b8,	// (0x00083a30) cell_vitu_itu_pane_g1

0x3ed3,	// (0x0007b04b) cell_vitu_itu_pane_t1_ParamLimits

0x3ed3,	// (0x0007b04b) cell_vitu_itu_pane_t1

0x3ed3,	// (0x0007b04b) cell_vitu_itu_pane_t2_ParamLimits

0x3ed3,	// (0x0007b04b) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x00086906) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x00086906) cell_vitu_itu_pane_t

0xaa67,	// (0x00081bdf) bg_button_pane_cp07

0x1ebb,	// (0x00079033) cell_vitu_function_pane_g1

0xb24e,	// (0x000823c6) main_calc_pane_g1

0x1064,	// (0x000781dc) aid_visual_content_pane

0xaa67,	// (0x00081bdf) main_vradio_pane

0xb210,	// (0x00082388) main_vradio_pane_g1_ParamLimits

0xb210,	// (0x00082388) main_vradio_pane_g1

0xb21e,	// (0x00082396) main_vradio_pane_g2_ParamLimits

0xb21e,	// (0x00082396) main_vradio_pane_g2

0x0001,

0xf795,	// (0x0008690d) main_vradio_pane_g_ParamLimits

0xf795,	// (0x0008690d) main_vradio_pane_g

0x1d37,	// (0x00078eaf) main_vradio_pane_t1_ParamLimits

0x1d37,	// (0x00078eaf) main_vradio_pane_t1

0x1d37,	// (0x00078eaf) main_vradio_pane_t2_ParamLimits

0x1d37,	// (0x00078eaf) main_vradio_pane_t2

0x3ee7,	// (0x0007b05f) main_vradio_pane_t3_ParamLimits

0x3ee7,	// (0x0007b05f) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x00086912) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x00086912) main_vradio_pane_t

0xaae4,	// (0x00081c5c) vradio_rocker_control_pane_ParamLimits

0xaae4,	// (0x00081c5c) vradio_rocker_control_pane

0xaae4,	// (0x00081c5c) vradio_station_info_pane_ParamLimits

0xaae4,	// (0x00081c5c) vradio_station_info_pane

0xaae4,	// (0x00081c5c) vradio_frequency_info_pane_ParamLimits

0xaae4,	// (0x00081c5c) vradio_frequency_info_pane

0x1ebb,	// (0x00079033) vradio_station_info_pane_g1

0x3ed3,	// (0x0007b04b) vradio_station_info_pane_t1_ParamLimits

0x3ed3,	// (0x0007b04b) vradio_station_info_pane_t1

0x3ee7,	// (0x0007b05f) vradio_station_info_pane_t2_ParamLimits

0x3ee7,	// (0x0007b05f) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x00086919) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x00086919) vradio_station_info_pane_t

0xaa67,	// (0x00081bdf) vradio_tuning_pane

0x693e,	// (0x0007dab6) vradio_rocker_control_pane_g1

0xc8d4,	// (0x00083a4c) vradio_rocker_control_pane_g2

0x6948,	// (0x0007dac0) vradio_rocker_control_pane_g3

0x6952,	// (0x0007daca) vradio_rocker_control_pane_g4

0x695c,	// (0x0007dad4) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x0008691e) vradio_rocker_control_pane_g

0x1ebb,	// (0x00079033) vradio_frequency_info_pane_g1

0x1d37,	// (0x00078eaf) vradio_frequency_info_pane_t1_ParamLimits

0x1d37,	// (0x00078eaf) vradio_frequency_info_pane_t1

0x6966,	// (0x0007dade) vradio_tuning_pane_g1

0x6971,	// (0x0007dae9) vradio_tuning_pane_t1

0xaa9d,	// (0x00081c15) area_side_right_pane_ParamLimits

0xaa9d,	// (0x00081c15) area_side_right_pane

0xbddb,	// (0x00082f53) status_small_pane_g1

0xbde3,	// (0x00082f5b) status_small_pane_g2

0xbdec,	// (0x00082f64) status_small_pane_g3

0xbdf5,	// (0x00082f6d) status_small_pane_g4

0x0003,

0xf572,	// (0x000866ea) status_small_pane_g

0xbdfe,	// (0x00082f76) status_small_pane_t1

0xaa67,	// (0x00081bdf) main_video3_pane

0xc8dc,	// (0x00083a54) cams_zoom_vslider_pane

0xc8e4,	// (0x00083a5c) image3_wide_pane_ParamLimits

0xc8e4,	// (0x00083a5c) image3_wide_pane

0xc8fe,	// (0x00083a76) image3_wide_small_pane

0xc90a,	// (0x00083a82) main_video3_pane_g1_ParamLimits

0xc90a,	// (0x00083a82) main_video3_pane_g1

0xc926,	// (0x00083a9e) main_video3_pane_g2_ParamLimits

0xc926,	// (0x00083a9e) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x00086929) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x00086929) main_video3_pane_g

0xc942,	// (0x00083aba) main_video3_pane_t1_ParamLimits

0xc942,	// (0x00083aba) main_video3_pane_t1

0xc96d,	// (0x00083ae5) main_video3_pane_t2_ParamLimits

0xc96d,	// (0x00083ae5) main_video3_pane_t2

0xc99a,	// (0x00083b12) main_video3_pane_t3_ParamLimits

0xc99a,	// (0x00083b12) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x0008692e) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x0008692e) main_video3_pane_t

0xc9c7,	// (0x00083b3f) cams_zoom_vslider_pane_g1

0xc9d0,	// (0x00083b48) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x00086935) cams_zoom_vslider_pane_g

0xc9d8,	// (0x00083b50) small_slider_vertical_pane

0x1ebb,	// (0x00079033) small_slider_vertical_pane_g1

0x1ebb,	// (0x00079033) small_slider_vertical_pane_g2

0xc9e0,	// (0x00083b58) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x0008693a) small_slider_vertical_pane_g

0xaa67,	// (0x00081bdf) main_hwr_training_pane

0xc9e9,	// (0x00083b61) hwr_training_instruct_pane_ParamLimits

0xc9e9,	// (0x00083b61) hwr_training_instruct_pane

0x6980,	// (0x0007daf8) hwr_training_navi_pane_ParamLimits

0x6980,	// (0x0007daf8) hwr_training_navi_pane

0x699f,	// (0x0007db17) hwr_training_write_pane_ParamLimits

0x699f,	// (0x0007db17) hwr_training_write_pane

0xaa67,	// (0x00081bdf) bg_frame_shadow_pane

0xca20,	// (0x00083b98) hwr_training_write_pane_g1

0xca28,	// (0x00083ba0) hwr_training_write_pane_g2

0xca30,	// (0x00083ba8) hwr_training_write_pane_g3

0xca38,	// (0x00083bb0) hwr_training_write_pane_g4

0xca40,	// (0x00083bb8) hwr_training_write_pane_g5

0xca48,	// (0x00083bc0) hwr_training_write_pane_g6

0xca50,	// (0x00083bc8) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x00086941) hwr_training_write_pane_g

0xca58,	// (0x00083bd0) hwr_training_navi_pane_g1_ParamLimits

0xca58,	// (0x00083bd0) hwr_training_navi_pane_g1

0xca6a,	// (0x00083be2) hwr_training_navi_pane_g2_ParamLimits

0xca6a,	// (0x00083be2) hwr_training_navi_pane_g2

0xca7c,	// (0x00083bf4) hwr_training_navi_pane_g3_ParamLimits

0xca7c,	// (0x00083bf4) hwr_training_navi_pane_g3

0xca8c,	// (0x00083c04) hwr_training_navi_pane_g4_ParamLimits

0xca8c,	// (0x00083c04) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x00086950) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x00086950) hwr_training_navi_pane_g

0xca99,	// (0x00083c11) hwr_training_navi_pane_t1

0x69e7,	// (0x0007db5f) list_single_hwr_training_instruct_pane_ParamLimits

0x69e7,	// (0x0007db5f) list_single_hwr_training_instruct_pane

0xcaa7,	// (0x00083c1f) list_single_hwr_training_instruct_pane_t1

0xc261,	// (0x000833d9) bg_frame_shadow_pane_g1

0xcab6,	// (0x00083c2e) bg_frame_shadow_pane_g2

0xcabe,	// (0x00083c36) bg_frame_shadow_pane_g3

0xcac6,	// (0x00083c3e) bg_frame_shadow_pane_g4

0xcace,	// (0x00083c46) bg_frame_shadow_pane_g5

0xcad6,	// (0x00083c4e) bg_frame_shadow_pane_g6

0xcade,	// (0x00083c56) bg_frame_shadow_pane_g7

0xb380,	// (0x000824f8) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x0008695b) bg_frame_shadow_pane_g

0xaa67,	// (0x00081bdf) main_video_tele_dialer_pane

0x6a03,	// (0x0007db7b) aid_size_cell_video_keypad_ParamLimits

0x6a03,	// (0x0007db7b) aid_size_cell_video_keypad

0x6a1d,	// (0x0007db95) grid_video_dialer_keypad_pane_ParamLimits

0x6a1d,	// (0x0007db95) grid_video_dialer_keypad_pane

0x6a69,	// (0x0007dbe1) video_down_pane_cp_ParamLimits

0x6a69,	// (0x0007dbe1) video_down_pane_cp

0x6a9b,	// (0x0007dc13) cell_video_dialer_keypad_pane_ParamLimits

0x6a9b,	// (0x0007dc13) cell_video_dialer_keypad_pane

0xcae6,	// (0x00083c5e) bg_button_pane_cp08_ParamLimits

0xcae6,	// (0x00083c5e) bg_button_pane_cp08

0x6ac1,	// (0x0007dc39) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6ac1,	// (0x0007dc39) cell_video_dialer_keypad_pane_g1

0x63ab,	// (0x0007d523) mup3_rocker2_pane_ParamLimits

0x63ab,	// (0x0007d523) mup3_rocker2_pane

0x1ebb,	// (0x00079033) mup3_rocker2_pane_g1

0x552a,	// (0x0007c6a2) main_dialer2_pane

0xaa67,	// (0x00081bdf) main_mp4_pane

0xcb10,	// (0x00083c88) main_mp4_pane_g1_ParamLimits

0xcb10,	// (0x00083c88) main_mp4_pane_g1

0xcb10,	// (0x00083c88) main_mp4_pane_g2_ParamLimits

0xcb10,	// (0x00083c88) main_mp4_pane_g2

0x6afc,	// (0x0007dc74) main_mp4_pane_g3_ParamLimits

0x6afc,	// (0x0007dc74) main_mp4_pane_g3

0xcb1e,	// (0x00083c96) main_mp4_pane_g4_ParamLimits

0xcb1e,	// (0x00083c96) main_mp4_pane_g4

0xcb4c,	// (0x00083cc4) main_mp4_pane_g5_ParamLimits

0xcb4c,	// (0x00083cc4) main_mp4_pane_g5

0x0007,

0xf803,	// (0x0008697b) main_mp4_pane_g_ParamLimits

0xf803,	// (0x0008697b) main_mp4_pane_g

0xcbc0,	// (0x00083d38) main_mp4_pane_t1_ParamLimits

0xcbc0,	// (0x00083d38) main_mp4_pane_t1

0xcc1c,	// (0x00083d94) main_mp4_pane_t2_ParamLimits

0xcc1c,	// (0x00083d94) main_mp4_pane_t2

0xcc6e,	// (0x00083de6) main_mp4_pane_t3_ParamLimits

0xcc6e,	// (0x00083de6) main_mp4_pane_t3

0xcc94,	// (0x00083e0c) main_mp4_pane_t4_ParamLimits

0xcc94,	// (0x00083e0c) main_mp4_pane_t4

0x0003,

0xf814,	// (0x0008698c) main_mp4_pane_t_ParamLimits

0xf814,	// (0x0008698c) main_mp4_pane_t

0xccd4,	// (0x00083e4c) mp4_progress_pane_ParamLimits

0xccd4,	// (0x00083e4c) mp4_progress_pane

0xcd1e,	// (0x00083e96) mp4_rocker_pane_ParamLimits

0xcd1e,	// (0x00083e96) mp4_rocker_pane

0xcd3e,	// (0x00083eb6) mp4_progress_pane_t1

0xcd57,	// (0x00083ecf) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x00086995) mp4_progress_pane_t

0xcd70,	// (0x00083ee8) mup_progress_pane_cp04

0x1ebb,	// (0x00079033) mp4_rocker_pane_g1

0x6b46,	// (0x0007dcbe) aid_cell_size_keypad2_ParamLimits

0x6b46,	// (0x0007dcbe) aid_cell_size_keypad2

0x6b5c,	// (0x0007dcd4) dialer2_ne_pane_ParamLimits

0x6b5c,	// (0x0007dcd4) dialer2_ne_pane

0x6b74,	// (0x0007dcec) grid_dialer2_keypad_pane_ParamLimits

0x6b74,	// (0x0007dcec) grid_dialer2_keypad_pane

0xbfac,	// (0x00083124) bg_popup_call_pane_cp07_ParamLimits

0xbfac,	// (0x00083124) bg_popup_call_pane_cp07

0x6b90,	// (0x0007dd08) dialer2_ne_pane_t1_ParamLimits

0x6b90,	// (0x0007dd08) dialer2_ne_pane_t1

0x6bd0,	// (0x0007dd48) cell_dialer2_keypad_pane_ParamLimits

0x6bd0,	// (0x0007dd48) cell_dialer2_keypad_pane

0xcd95,	// (0x00083f0d) bg_button_pane_pane_cp04_ParamLimits

0xcd95,	// (0x00083f0d) bg_button_pane_pane_cp04

0x6bf6,	// (0x0007dd6e) cell_dialer2_keypad_pane_g1_ParamLimits

0x6bf6,	// (0x0007dd6e) cell_dialer2_keypad_pane_g1

0x1f96,	// (0x0007910e) aid_placing_vt_set_content_ParamLimits

0x1f96,	// (0x0007910e) aid_placing_vt_set_content

0x1fba,	// (0x00079132) aid_placing_vt_set_title_ParamLimits

0x1fba,	// (0x00079132) aid_placing_vt_set_title

0xaa67,	// (0x00081bdf) main_image3_pane

0x6cbc,	// (0x0007de34) area_side_right_pane_cp01_ParamLimits

0x6cbc,	// (0x0007de34) area_side_right_pane_cp01

0xcb10,	// (0x00083c88) main_image3_pane_g1_ParamLimits

0xcb10,	// (0x00083c88) main_image3_pane_g1

0x6cd5,	// (0x0007de4d) main_image3_pane_g2_ParamLimits

0x6cd5,	// (0x0007de4d) main_image3_pane_g2

0x6cfd,	// (0x0007de75) main_image3_pane_g3_ParamLimits

0x6cfd,	// (0x0007de75) main_image3_pane_g3

0x6d27,	// (0x0007de9f) main_image3_pane_g4_ParamLimits

0x6d27,	// (0x0007de9f) main_image3_pane_g4

0x0003,

0xf82c,	// (0x000869a4) main_image3_pane_g_ParamLimits

0xf82c,	// (0x000869a4) main_image3_pane_g

0x6d51,	// (0x0007dec9) main_image3_pane_t1_ParamLimits

0x6d51,	// (0x0007dec9) main_image3_pane_t1

0x6da9,	// (0x0007df21) main_image3_pane_t2_ParamLimits

0x6da9,	// (0x0007df21) main_image3_pane_t2

0x6dfb,	// (0x0007df73) main_image3_pane_t3_ParamLimits

0x6dfb,	// (0x0007df73) main_image3_pane_t3

0x0003,

0xf835,	// (0x000869ad) main_image3_pane_t_ParamLimits

0xf835,	// (0x000869ad) main_image3_pane_t

0xaae4,	// (0x00081c5c) grid_sctrl_middle_pane_cp01_ParamLimits

0xaae4,	// (0x00081c5c) grid_sctrl_middle_pane_cp01

0x6e83,	// (0x0007dffb) cell_sctrl_middle_pane_cp01_ParamLimits

0x6e83,	// (0x0007dffb) cell_sctrl_middle_pane_cp01

0x6ea0,	// (0x0007e018) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6ea0,	// (0x0007e018) cell_sctrl_middle_pane_cp01_g1

0xaa67,	// (0x00081bdf) main_call4_pane

0x6eb5,	// (0x0007e02d) aid_size_button_call4_ParamLimits

0x6eb5,	// (0x0007e02d) aid_size_button_call4

0x6ee8,	// (0x0007e060) call4_windows_pane_ParamLimits

0x6ee8,	// (0x0007e060) call4_windows_pane

0x6f07,	// (0x0007e07f) grid_call4_button_pane_ParamLimits

0x6f07,	// (0x0007e07f) grid_call4_button_pane

0x6f3e,	// (0x0007e0b6) call4_windows_conf_pane

0x6f57,	// (0x0007e0cf) popup_call4_audio_first_window_ParamLimits

0x6f57,	// (0x0007e0cf) popup_call4_audio_first_window

0x6fa7,	// (0x0007e11f) popup_call4_audio_second_window_ParamLimits

0x6fa7,	// (0x0007e11f) popup_call4_audio_second_window

0x6fc0,	// (0x0007e138) popup_call4_audio_wait_window_ParamLimits

0x6fc0,	// (0x0007e138) popup_call4_audio_wait_window

0x6fce,	// (0x0007e146) cell_call4_button_pane_ParamLimits

0x6fce,	// (0x0007e146) cell_call4_button_pane

0x6ff5,	// (0x0007e16d) bg_button_pane_cp09_ParamLimits

0x6ff5,	// (0x0007e16d) bg_button_pane_cp09

0x7001,	// (0x0007e179) cell_call4_button_pane_g1_ParamLimits

0x7001,	// (0x0007e179) cell_call4_button_pane_g1

0x7027,	// (0x0007e19f) cell_call4_button_pane_t1_ParamLimits

0x7027,	// (0x0007e19f) cell_call4_button_pane_t1

0xcda9,	// (0x00083f21) popup_call4_audio_conf_window_ParamLimits

0xcda9,	// (0x00083f21) popup_call4_audio_conf_window

0x640d,	// (0x0007d585) mup3_progress_pane_t1_ParamLimits

0x642c,	// (0x0007d5a4) mup3_progress_pane_t2_ParamLimits

0xc59b,	// (0x00083713) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x00086882) mup3_progress_pane_t_ParamLimits

0xc5b8,	// (0x00083730) mup_progress_pane_cp03_ParamLimits

0x6936,	// (0x0007daae) mup3_control_keys_pane_g4_copy1

0xcd02,	// (0x00083e7a) mp4_rocker2_pane_ParamLimits

0xcd02,	// (0x00083e7a) mp4_rocker2_pane

0xcdc3,	// (0x00083f3b) mp4_rocker2_pane_g1

0xcdcb,	// (0x00083f43) mp4_rocker2_pane_g2

0xe9ea,	// (0x00085b62) mp4_rocker2_pane_g3

0xe9f2,	// (0x00085b6a) mp4_rocker2_pane_g4

0xe9fa,	// (0x00085b72) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x000869b6) mp4_rocker2_pane_g

0xaa67,	// (0x00081bdf) main_camera4_pane

0xaa67,	// (0x00081bdf) main_video4_pane

0x6a37,	// (0x0007dbaf) main_video_tele_dialer_pane_t1_ParamLimits

0x6a37,	// (0x0007dbaf) main_video_tele_dialer_pane_t1

0x6a50,	// (0x0007dbc8) main_video_tele_dialer_pane_t2_ParamLimits

0x6a50,	// (0x0007dbc8) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x0008696c) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x0008696c) main_video_tele_dialer_pane_t

0x7065,	// (0x0007e1dd) cam4_autofocus_pane_ParamLimits

0x7065,	// (0x0007e1dd) cam4_autofocus_pane

0x707b,	// (0x0007e1f3) cam4_image_uncrop_pane_ParamLimits

0x707b,	// (0x0007e1f3) cam4_image_uncrop_pane

0x7094,	// (0x0007e20c) cam4_indicators_pane_ParamLimits

0x7094,	// (0x0007e20c) cam4_indicators_pane

0x70c4,	// (0x0007e23c) main_camera4_pane_g1_ParamLimits

0x70c4,	// (0x0007e23c) main_camera4_pane_g1

0x70d6,	// (0x0007e24e) main_camera4_pane_g2_ParamLimits

0x70d6,	// (0x0007e24e) main_camera4_pane_g2

0x70e9,	// (0x0007e261) main_camera4_pane_g3_ParamLimits

0x70e9,	// (0x0007e261) main_camera4_pane_g3

0x70fc,	// (0x0007e274) main_camera4_pane_g4_ParamLimits

0x70fc,	// (0x0007e274) main_camera4_pane_g4

0x710f,	// (0x0007e287) main_camera4_pane_g5_ParamLimits

0x710f,	// (0x0007e287) main_camera4_pane_g5

0x0005,

0xf849,	// (0x000869c1) main_camera4_pane_g_ParamLimits

0xf849,	// (0x000869c1) main_camera4_pane_g

0x7133,	// (0x0007e2ab) main_camera4_pane_t1_ParamLimits

0x7133,	// (0x0007e2ab) main_camera4_pane_t1

0xb210,	// (0x00082388) bg_tb_trans_pane_cp06

0xea28,	// (0x00085ba0) cam4_indicators_pane_g1

0xea39,	// (0x00085bb1) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x000869dc) cam4_indicators_pane_g

0xea51,	// (0x00085bc9) cam4_indicators_pane_t1

0x7197,	// (0x0007e30f) main_video4_pane_g1_ParamLimits

0x7197,	// (0x0007e30f) main_video4_pane_g1

0x71a6,	// (0x0007e31e) main_video4_pane_g2_ParamLimits

0x71a6,	// (0x0007e31e) main_video4_pane_g2

0x71b6,	// (0x0007e32e) main_video4_pane_g3_ParamLimits

0x71b6,	// (0x0007e32e) main_video4_pane_g3

0x71c6,	// (0x0007e33e) main_video4_pane_g4_ParamLimits

0x71c6,	// (0x0007e33e) main_video4_pane_g4

0x0004,

0xf86b,	// (0x000869e3) main_video4_pane_g_ParamLimits

0xf86b,	// (0x000869e3) main_video4_pane_g

0x71e6,	// (0x0007e35e) vid4_indicators_pane_ParamLimits

0x71e6,	// (0x0007e35e) vid4_indicators_pane

0x7210,	// (0x0007e388) video4_image_uncrop_cif_pane_ParamLimits

0x7210,	// (0x0007e388) video4_image_uncrop_cif_pane

0x722a,	// (0x0007e3a2) video4_image_uncrop_nhd_pane_ParamLimits

0x722a,	// (0x0007e3a2) video4_image_uncrop_nhd_pane

0x707b,	// (0x0007e1f3) video4_image_uncrop_vga_pane_ParamLimits

0x707b,	// (0x0007e1f3) video4_image_uncrop_vga_pane

0xaae4,	// (0x00081c5c) bg_tb_trans_pane_cp07

0xea7f,	// (0x00085bf7) vid4_indicators_pane_g1

0xea95,	// (0x00085c0d) vid4_indicators_pane_g2

0xeaa9,	// (0x00085c21) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x000869ee) vid4_indicators_pane_g

0xeada,	// (0x00085c52) vid4_indicators_pane_t1

0x7241,	// (0x0007e3b9) cam4_autofocus_pane_g1

0x7249,	// (0x0007e3c1) cam4_autofocus_pane_g2

0x7251,	// (0x0007e3c9) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x000869f9) cam4_autofocus_pane_g

0x7259,	// (0x0007e3d1) cam4_autofocus_pane_g3_copy1

0x6a7f,	// (0x0007dbf7) video_down_pane_cp_t1

0x6a8d,	// (0x0007dc05) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x00086971) video_down_pane_cp_t

0xaae4,	// (0x00081c5c) popup_vitu2_window_ParamLimits

0xaae4,	// (0x00081c5c) popup_vitu2_window

0x7261,	// (0x0007e3d9) aid_size_cell2_itu2_ParamLimits

0x7261,	// (0x0007e3d9) aid_size_cell2_itu2

0x7287,	// (0x0007e3ff) aid_size_cell_itu2_ParamLimits

0x7287,	// (0x0007e3ff) aid_size_cell_itu2

0x64bb,	// (0x0007d633) bg_popup_window_pane_cp09_ParamLimits

0x64bb,	// (0x0007d633) bg_popup_window_pane_cp09

0x72e5,	// (0x0007e45d) field_vitu2_entry_pane_ParamLimits

0x72e5,	// (0x0007e45d) field_vitu2_entry_pane

0x730d,	// (0x0007e485) grid_vitu2_function_pane_ParamLimits

0x730d,	// (0x0007e485) grid_vitu2_function_pane

0x735e,	// (0x0007e4d6) grid_vitu2_itu_pane_ParamLimits

0x735e,	// (0x0007e4d6) grid_vitu2_itu_pane

0x73ee,	// (0x0007e566) cell_vitu2_itu_pane_ParamLimits

0x73ee,	// (0x0007e566) cell_vitu2_itu_pane

0x741c,	// (0x0007e594) cell_vitu2_function_pane_ParamLimits

0x741c,	// (0x0007e594) cell_vitu2_function_pane

0xcde7,	// (0x00083f5f) bg_popup_call_pane_cp08_ParamLimits

0xcde7,	// (0x00083f5f) bg_popup_call_pane_cp08

0xcdfe,	// (0x00083f76) field_vitu2_entry_pane_g1

0xce0a,	// (0x00083f82) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x00086a00) field_vitu2_entry_pane_g

0xce16,	// (0x00083f8e) field_vitu2_entry_pane_t1_ParamLimits

0xce16,	// (0x00083f8e) field_vitu2_entry_pane_t1

0xce45,	// (0x00083fbd) field_vitu2_entry_pane_t2_ParamLimits

0xce45,	// (0x00083fbd) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x00086a07) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x00086a07) field_vitu2_entry_pane_t

0x7460,	// (0x0007e5d8) bg_button_pane_cp010_ParamLimits

0x7460,	// (0x0007e5d8) bg_button_pane_cp010

0x746e,	// (0x0007e5e6) cell_vitu2_itu_pane_g1

0x7494,	// (0x0007e60c) cell_vitu2_itu_pane_t1_ParamLimits

0x7494,	// (0x0007e60c) cell_vitu2_itu_pane_t1

0x083d,	// (0x000779b5) cell_vitu2_itu_pane_t2_ParamLimits

0x083d,	// (0x000779b5) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x00086a11) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x00086a11) cell_vitu2_itu_pane_t

0xaae4,	// (0x00081c5c) bg_button_pane_cp011

0x74f2,	// (0x0007e66a) cell_vitu2_function_pane_g1

0xaa67,	// (0x00081bdf) main_myfav_hc_pane

0x6e4b,	// (0x0007dfc3) popup_image3_note_pane_ParamLimits

0x6e4b,	// (0x0007dfc3) popup_image3_note_pane

0x6e67,	// (0x0007dfdf) popup_image3_tool_bar_pane_ParamLimits

0x6e67,	// (0x0007dfdf) popup_image3_tool_bar_pane

0x08cb,	// (0x00077a43) cell_vitu2_itu_pane_t3_ParamLimits

0x08cb,	// (0x00077a43) cell_vitu2_itu_pane_t3

0xaa67,	// (0x00081bdf) bg_popup_trans_pane

0xce6a,	// (0x00083fe2) grid_image3_tool_bar_pane

0xce74,	// (0x00083fec) bg_popup_trans_pane_g1

0x2591,	// (0x00079709) bg_popup_trans_pane_g2

0xce7c,	// (0x00083ff4) bg_popup_trans_pane_g3

0xce84,	// (0x00083ffc) bg_popup_trans_pane_g4

0xce8c,	// (0x00084004) bg_popup_trans_pane_g5

0xce94,	// (0x0008400c) bg_popup_trans_pane_g6

0xce9c,	// (0x00084014) bg_popup_trans_pane_g7

0xcea4,	// (0x0008401c) bg_popup_trans_pane_g8

0x2571,	// (0x000796e9) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x00086a18) bg_popup_trans_pane_g

0xceac,	// (0x00084024) cell_image3_tool_bar_pane_ParamLimits

0xceac,	// (0x00084024) cell_image3_tool_bar_pane

0x1ebb,	// (0x00079033) cell_image3_tool_bar_pane_g1

0xaa67,	// (0x00081bdf) bg_popup_trans_pane_cp1

0xcec2,	// (0x0008403a) popup_image3_note_pane_t1

0xced0,	// (0x00084048) popup_image3_note_pane_t2

0xcede,	// (0x00084056) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x00086a2b) popup_image3_note_pane_t

0xceee,	// (0x00084066) popup_image3_note_pane_t3_copy1

0x7506,	// (0x0007e67e) bg_myfav_hc_instruction_pane_ParamLimits

0x7506,	// (0x0007e67e) bg_myfav_hc_instruction_pane

0x751e,	// (0x0007e696) cell_myfav_contact_pane_ParamLimits

0x751e,	// (0x0007e696) cell_myfav_contact_pane

0x753a,	// (0x0007e6b2) cell_myfav_contact_pane_cp1_ParamLimits

0x753a,	// (0x0007e6b2) cell_myfav_contact_pane_cp1

0x7552,	// (0x0007e6ca) cell_myfav_contact_pane_cp2_ParamLimits

0x7552,	// (0x0007e6ca) cell_myfav_contact_pane_cp2

0x756a,	// (0x0007e6e2) cell_myfav_contact_pane_cp3_ParamLimits

0x756a,	// (0x0007e6e2) cell_myfav_contact_pane_cp3

0x7581,	// (0x0007e6f9) cell_myfav_contact_pane_cp4_ParamLimits

0x7581,	// (0x0007e6f9) cell_myfav_contact_pane_cp4

0x7599,	// (0x0007e711) cell_myfav_contact_pane_cp5_ParamLimits

0x7599,	// (0x0007e711) cell_myfav_contact_pane_cp5

0x75ad,	// (0x0007e725) cell_myfav_contact_pane_cp6_ParamLimits

0x75ad,	// (0x0007e725) cell_myfav_contact_pane_cp6

0x75c3,	// (0x0007e73b) cell_myfav_contact_pane_cp7_ParamLimits

0x75c3,	// (0x0007e73b) cell_myfav_contact_pane_cp7

0xcefc,	// (0x00084074) listscroll_gen_pane_cp05

0x75db,	// (0x0007e753) main_myfav_hc_pane_g1_ParamLimits

0x75db,	// (0x0007e753) main_myfav_hc_pane_g1

0x75f5,	// (0x0007e76d) main_myfav_hc_pane_g2_ParamLimits

0x75f5,	// (0x0007e76d) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x00086a32) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x00086a32) main_myfav_hc_pane_g

0x7629,	// (0x0007e7a1) main_myfav_hc_pane_t1_ParamLimits

0x7629,	// (0x0007e7a1) main_myfav_hc_pane_t1

0xcf05,	// (0x0008407d) main_myfav_hc_pane_t2_ParamLimits

0xcf05,	// (0x0008407d) main_myfav_hc_pane_t2

0xcf17,	// (0x0008408f) main_myfav_hc_pane_t3_ParamLimits

0xcf17,	// (0x0008408f) main_myfav_hc_pane_t3

0x7640,	// (0x0007e7b8) main_myfav_hc_pane_t4_ParamLimits

0x7640,	// (0x0007e7b8) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x00086a39) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x00086a39) main_myfav_hc_pane_t

0x1ebb,	// (0x00079033) bg_myfav_hc_instruction_pane_g1

0xcf29,	// (0x000840a1) cell_myfav_contact_pane_g1_ParamLimits

0xcf29,	// (0x000840a1) cell_myfav_contact_pane_g1

0xcf29,	// (0x000840a1) cell_myfav_contact_pane_g2_ParamLimits

0xcf29,	// (0x000840a1) cell_myfav_contact_pane_g2

0xcf35,	// (0x000840ad) cell_myfav_contact_pane_g3_ParamLimits

0xcf35,	// (0x000840ad) cell_myfav_contact_pane_g3

0xb21e,	// (0x00082396) cell_myfav_contact_pane_g4_ParamLimits

0xb21e,	// (0x00082396) cell_myfav_contact_pane_g4

0xcf42,	// (0x000840ba) cell_myfav_contact_pane_g5_ParamLimits

0xcf42,	// (0x000840ba) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x00086a44) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x00086a44) cell_myfav_contact_pane_g

0x760f,	// (0x0007e787) main_myfav_hc_pane_g3_ParamLimits

0x760f,	// (0x0007e787) main_myfav_hc_pane_g3

0x119f,	// (0x00078317) popup_adpt_find_window

0x766a,	// (0x0007e7e2) afind_page_pane_ParamLimits

0x766a,	// (0x0007e7e2) afind_page_pane

0x767f,	// (0x0007e7f7) aid_size_cell_afind_ParamLimits

0x767f,	// (0x0007e7f7) aid_size_cell_afind

0x769d,	// (0x0007e815) bg_popup_sub_pane_cp09_ParamLimits

0x769d,	// (0x0007e815) bg_popup_sub_pane_cp09

0x76aa,	// (0x0007e822) find_pane_cp01_ParamLimits

0x76aa,	// (0x0007e822) find_pane_cp01

0xcf4e,	// (0x000840c6) grid_afind_control_pane_ParamLimits

0xcf4e,	// (0x000840c6) grid_afind_control_pane

0x76b7,	// (0x0007e82f) grid_afind_pane_ParamLimits

0x76b7,	// (0x0007e82f) grid_afind_pane

0x76d9,	// (0x0007e851) cell_afind_pane_ParamLimits

0x76d9,	// (0x0007e851) cell_afind_pane

0x1ebb,	// (0x00079033) afind_page_pane_g1

0x7746,	// (0x0007e8be) afind_page_pane_g2

0x774f,	// (0x0007e8c7) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x00086a4f) afind_page_pane_g

0x7758,	// (0x0007e8d0) afind_page_pane_t1

0xcf62,	// (0x000840da) cell_afind_grid_control_pane_ParamLimits

0xcf62,	// (0x000840da) cell_afind_grid_control_pane

0xcd95,	// (0x00083f0d) bg_button_pane_cp69_ParamLimits

0xcd95,	// (0x00083f0d) bg_button_pane_cp69

0x7778,	// (0x0007e8f0) cell_afind_pane_g1_ParamLimits

0x7778,	// (0x0007e8f0) cell_afind_pane_g1

0x7785,	// (0x0007e8fd) cell_afind_pane_t1_ParamLimits

0x7785,	// (0x0007e8fd) cell_afind_pane_t1

0x1f27,	// (0x0007909f) bg_button_pane_cp72

0xcf71,	// (0x000840e9) cell_afind_grid_control_pane_g1

0x4936,	// (0x0007baae) aid_image_placing_area_ParamLimits

0x4936,	// (0x0007baae) aid_image_placing_area

0xb210,	// (0x00082388) field_vitu_entry_pane_g1_ParamLimits

0xb210,	// (0x00082388) field_vitu_entry_pane_g1

0xb210,	// (0x00082388) field_vitu_entry_pane_g2_ParamLimits

0xb210,	// (0x00082388) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0008635f) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0008635f) field_vitu_entry_pane_g

0xc8b8,	// (0x00083a30) cell_vitu_itu_pane_g1_ParamLimits

0xc89b,	// (0x00083a13) cell_vitu_itu_pane_t3_ParamLimits

0xc89b,	// (0x00083a13) cell_vitu_itu_pane_t3

0xcd3e,	// (0x00083eb6) mp4_progress_pane_t1_ParamLimits

0xcd57,	// (0x00083ecf) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x00086995) mp4_progress_pane_t_ParamLimits

0xcd70,	// (0x00083ee8) mup_progress_pane_cp04_ParamLimits

0x7654,	// (0x0007e7cc) main_myfav_hc_pane_t5_ParamLimits

0x7654,	// (0x0007e7cc) main_myfav_hc_pane_t5

0xaa8d,	// (0x00081c05) aid_zoom_text_primary

0x119f,	// (0x00078317) popup_adpt_find_window_ParamLimits

0xaae4,	// (0x00081c5c) main_cam_set_pane

0x70ad,	// (0x0007e225) cam4_zoom_pane_ParamLimits

0x70ad,	// (0x0007e225) cam4_zoom_pane

0x7797,	// (0x0007e90f) main_cam_set_pane_g1_ParamLimits

0x7797,	// (0x0007e90f) main_cam_set_pane_g1

0x77a5,	// (0x0007e91d) main_cam_set_pane_g2_ParamLimits

0x77a5,	// (0x0007e91d) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x00086a56) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x00086a56) main_cam_set_pane_g

0x77c6,	// (0x0007e93e) main_cam_set_pane_t1_ParamLimits

0x77c6,	// (0x0007e93e) main_cam_set_pane_t1

0x77e1,	// (0x0007e959) main_cset_listscroll_pane_ParamLimits

0x77e1,	// (0x0007e959) main_cset_listscroll_pane

0x7809,	// (0x0007e981) main_cset_slider_pane_ParamLimits

0x7809,	// (0x0007e981) main_cset_slider_pane

0xcf82,	// (0x000840fa) main_cset_list_pane_ParamLimits

0xcf82,	// (0x000840fa) main_cset_list_pane

0xcf92,	// (0x0008410a) scroll_pane_cp028

0x7833,	// (0x0007e9ab) aid_area_touch_slider

0x784f,	// (0x0007e9c7) cset_slider_pane

0x7872,	// (0x0007e9ea) main_cset_slider_pane_g1

0x7887,	// (0x0007e9ff) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x00086a5b) main_cset_slider_pane_g

0xcfcb,	// (0x00084143) main_cset_slider_pane_t1

0x7949,	// (0x0007eac1) main_cset_slider_pane_t2

0x7963,	// (0x0007eadb) main_cset_slider_pane_t3

0x797d,	// (0x0007eaf5) main_cset_slider_pane_t4

0x7997,	// (0x0007eb0f) main_cset_slider_pane_t5

0x79b5,	// (0x0007eb2d) main_cset_slider_pane_t6

0x79cc,	// (0x0007eb44) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x00086a80) main_cset_slider_pane_t

0x7ad8,	// (0x0007ec50) cset_list_set_pane_ParamLimits

0x7ad8,	// (0x0007ec50) cset_list_set_pane

0xd065,	// (0x000841dd) aid_position_infowindow_above

0xd06d,	// (0x000841e5) aid_position_infowindow_below

0x7aec,	// (0x0007ec64) cset_list_set_pane_g1_ParamLimits

0x7aec,	// (0x0007ec64) cset_list_set_pane_g1

0x0929,	// (0x00077aa1) cset_list_set_pane_g3_ParamLimits

0x0929,	// (0x00077aa1) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x00086a9f) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x00086a9f) cset_list_set_pane_g

0x0938,	// (0x00077ab0) cset_list_set_pane_t1_ParamLimits

0x0938,	// (0x00077ab0) cset_list_set_pane_t1

0xaae4,	// (0x00081c5c) list_highlight_pane_cp021_ParamLimits

0xaae4,	// (0x00081c5c) list_highlight_pane_cp021

0x417a,	// (0x0007b2f2) cset_slider_pane_g1

0x418c,	// (0x0007b304) cset_slider_pane_g2

0x4183,	// (0x0007b2fb) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x00086aa4) cset_slider_pane_g

0xd075,	// (0x000841ed) aid_area_touch_cam4_zoom

0x7af8,	// (0x0007ec70) cam4_zoom_cont_pane

0x7b00,	// (0x0007ec78) cam4_zoom_pane_g1

0x7b08,	// (0x0007ec80) cam4_zoom_pane_g2

0x7b10,	// (0x0007ec88) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x00086aab) cam4_zoom_pane_g

0xeaf1,	// (0x00085c69) cam4_zoom_cont_pane_g1

0xeafa,	// (0x00085c72) cam4_zoom_cont_pane_g2

0xeb03,	// (0x00085c7b) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x00086ab2) cam4_zoom_cont_pane_g

0x6ed3,	// (0x0007e04b) call4_image_pane_ParamLimits

0x6ed3,	// (0x0007e04b) call4_image_pane

0x6f3e,	// (0x0007e0b6) call4_windows_conf_pane_ParamLimits

0x6f85,	// (0x0007e0fd) popup_call4_audio_in_window_ParamLimits

0x6f85,	// (0x0007e0fd) popup_call4_audio_in_window

0xaa67,	// (0x00081bdf) bg_popup_call2_act_pane_cp02

0xcda1,	// (0x00083f19) call4_list_conf_pane

0x1ebb,	// (0x00079033) call4_image_pane_g1

0x1ebb,	// (0x00079033) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00086536) call4_image_pane_g

0xd07e,	// (0x000841f6) list_single_graphic_popup_conf4_pane_ParamLimits

0xd07e,	// (0x000841f6) list_single_graphic_popup_conf4_pane

0xaa67,	// (0x00081bdf) list_highlight_pane_cp022

0xd093,	// (0x0008420b) list_single_graphic_popup_conf4_pane_g1

0x3880,	// (0x0007a9f8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x00086ab9) list_single_graphic_popup_conf4_pane_g

0xd09b,	// (0x00084213) list_single_graphic_popup_conf4_pane_t1

0x20e3,	// (0x0007925b) popup_vtel_slider_window_ParamLimits

0x20e3,	// (0x0007925b) popup_vtel_slider_window

0xcd83,	// (0x00083efb) dialer2_ne_pane_t2_ParamLimits

0xcd83,	// (0x00083efb) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x0008699a) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x0008699a) dialer2_ne_pane_t

0xbfac,	// (0x00083124) bg_popup_sub_pane_cp010_ParamLimits

0xbfac,	// (0x00083124) bg_popup_sub_pane_cp010

0x7b18,	// (0x0007ec90) popup_vtel_slider_window_g1_ParamLimits

0x7b18,	// (0x0007ec90) popup_vtel_slider_window_g1

0x7b2b,	// (0x0007eca3) popup_vtel_slider_window_g2_ParamLimits

0x7b2b,	// (0x0007eca3) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x00086abe) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x00086abe) popup_vtel_slider_window_g

0x7b81,	// (0x0007ecf9) vtel_slider_pane_ParamLimits

0x7b81,	// (0x0007ecf9) vtel_slider_pane

0x7ba3,	// (0x0007ed1b) vtel_slider_pane_g1_ParamLimits

0x7ba3,	// (0x0007ed1b) vtel_slider_pane_g1

0x7bb7,	// (0x0007ed2f) vtel_slider_pane_g2_ParamLimits

0x7bb7,	// (0x0007ed2f) vtel_slider_pane_g2

0x7bcf,	// (0x0007ed47) vtel_slider_pane_g3_ParamLimits

0x7bcf,	// (0x0007ed47) vtel_slider_pane_g3

0x7ba3,	// (0x0007ed1b) vtel_slider_pane_g4_ParamLimits

0x7ba3,	// (0x0007ed1b) vtel_slider_pane_g4

0x7be5,	// (0x0007ed5d) vtel_slider_pane_g5_ParamLimits

0x7be5,	// (0x0007ed5d) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x00086ac7) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x00086ac7) vtel_slider_pane_g

0xaae4,	// (0x00081c5c) main_gallery2_pane

0x72b3,	// (0x0007e42b) aid_size_row_itut2_dropdow_list_ParamLimits

0x72b3,	// (0x0007e42b) aid_size_row_itut2_dropdow_list

0x7335,	// (0x0007e4ad) grid_vitu2_function_top_pane_ParamLimits

0x7335,	// (0x0007e4ad) grid_vitu2_function_top_pane

0x7399,	// (0x0007e511) popup_vitu2_dropdown_list_window_ParamLimits

0x7399,	// (0x0007e511) popup_vitu2_dropdown_list_window

0x73c0,	// (0x0007e538) popup_vitu2_match_list_window

0x7bfb,	// (0x0007ed73) cell_vitu2_function_top_pane_ParamLimits

0x7bfb,	// (0x0007ed73) cell_vitu2_function_top_pane

0x7c15,	// (0x0007ed8d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7c15,	// (0x0007ed8d) cell_vitu2_function_top_pane_cp01

0x7c31,	// (0x0007eda9) cell_vitu2_function_top_wide_pane_ParamLimits

0x7c31,	// (0x0007eda9) cell_vitu2_function_top_wide_pane

0xaae4,	// (0x00081c5c) bg_button_pane_cp012

0x7c4f,	// (0x0007edc7) cell_vitu2_function_top_pane_g1

0xeb0c,	// (0x00085c84) bg_button_pane_cp013_ParamLimits

0xeb0c,	// (0x00085c84) bg_button_pane_cp013

0x7c63,	// (0x0007eddb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7c63,	// (0x0007eddb) cell_vitu2_function_top_wide_pane_g1

0xaae4,	// (0x00081c5c) bg_popup_sub_pane_cp20

0x7c7b,	// (0x0007edf3) list_vitu2_match_list_pane

0xce74,	// (0x00083fec) bg_popup_sub_pane_cp20_g1

0xce7c,	// (0x00083ff4) bg_popup_sub_pane_cp20_g2

0x2591,	// (0x00079709) bg_popup_sub_pane_cp20_g3

0xce84,	// (0x00083ffc) bg_popup_sub_pane_cp20_g4

0x2571,	// (0x000796e9) bg_popup_sub_pane_cp20_g5

0xd0b1,	// (0x00084229) bg_popup_sub_pane_cp20_g6

0xce94,	// (0x0008400c) bg_popup_sub_pane_cp20_g7

0xce9c,	// (0x00084014) bg_popup_sub_pane_cp20_g8

0xcea4,	// (0x0008401c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x00086ad2) bg_popup_sub_pane_cp20_g

0xeb28,	// (0x00085ca0) list_vitu2_match_list_item_pane_ParamLimits

0xeb28,	// (0x00085ca0) list_vitu2_match_list_item_pane

0xeb3a,	// (0x00085cb2) list_vitu2_match_list_item_pane_t1

0xaa67,	// (0x00081bdf) bg_popup_sub_pane_cp21

0x1cca,	// (0x00078e42) grid_vitu2_dropdown_list_pane

0x7c93,	// (0x0007ee0b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7c93,	// (0x0007ee0b) cell_vitu2_dropdown_list_char_pane

0x7cb5,	// (0x0007ee2d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7cb5,	// (0x0007ee2d) cell_vitu2_dropdown_list_ctrl_pane

0xd0b9,	// (0x00084231) cell_vitu2_dropdown_list_char_pane_g1

0xd0c2,	// (0x0008423a) cell_vitu2_dropdown_list_char_pane_g2

0xd0cb,	// (0x00084243) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x00086ae5) cell_vitu2_dropdown_list_char_pane_g

0x7cdf,	// (0x0007ee57) cell_vitu2_dropdown_list_char_pane_t1

0x7ced,	// (0x0007ee65) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ced,	// (0x0007ee65) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7cfd,	// (0x0007ee75) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7cfd,	// (0x0007ee75) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7d0e,	// (0x0007ee86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7d0e,	// (0x0007ee86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7d1e,	// (0x0007ee96) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7d1e,	// (0x0007ee96) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb210,	// (0x00082388) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb210,	// (0x00082388) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x00086aec) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x00086aec) cell_vitu2_dropdown_list_ctrl_pane_g

0x7d3a,	// (0x0007eeb2) aid_size_cell_gallery2_ParamLimits

0x7d3a,	// (0x0007eeb2) aid_size_cell_gallery2

0x7d58,	// (0x0007eed0) grid_gallery2_pane_ParamLimits

0x7d58,	// (0x0007eed0) grid_gallery2_pane

0x7d72,	// (0x0007eeea) scroll_pane_cp029_ParamLimits

0x7d72,	// (0x0007eeea) scroll_pane_cp029

0x7d83,	// (0x0007eefb) cell_gallery2_pane_ParamLimits

0x7d83,	// (0x0007eefb) cell_gallery2_pane

0xd0d4,	// (0x0008424c) cell_gallery2_pane_g2

0x7de7,	// (0x0007ef5f) cell_gallery2_pane_g3

0xd0dc,	// (0x00084254) cell_gallery2_pane_g4

0xd0e4,	// (0x0008425c) cell_gallery2_pane_g5

0x1cca,	// (0x00078e42) grid_highlight_pane_cp10

0x73c0,	// (0x0007e538) popup_vitu2_match_list_window_ParamLimits

0x73d7,	// (0x0007e54f) popup_vitu2_query_window_ParamLimits

0x73d7,	// (0x0007e54f) popup_vitu2_query_window

0xaa67,	// (0x00081bdf) bg_vitu2_candi_button_pane

0xd0b9,	// (0x00084231) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd0c2,	// (0x0008423a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd0cb,	// (0x00084243) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x094d,	// (0x00077ac5) bg_button_pane_cp015

0x7def,	// (0x0007ef67) bg_button_pane_cp016

0x7dfb,	// (0x0007ef73) bg_button_pane_cp017

0x3efb,	// (0x0007b073) bg_popup_sub_pane_cp22

0xd0ec,	// (0x00084264) popup_vitu2_query_window_g1

0x098a,	// (0x00077b02) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x00086af7) popup_vitu2_query_window_g

0x09a4,	// (0x00077b1c) popup_vitu2_query_window_t1_ParamLimits

0x09a4,	// (0x00077b1c) popup_vitu2_query_window_t1

0x09d9,	// (0x00077b51) popup_vitu2_query_window_t2_ParamLimits

0x09d9,	// (0x00077b51) popup_vitu2_query_window_t2

0x09eb,	// (0x00077b63) popup_vitu2_query_window_t3_ParamLimits

0x09eb,	// (0x00077b63) popup_vitu2_query_window_t3

0x7e22,	// (0x0007ef9a) popup_vitu2_query_window_t4_ParamLimits

0x7e22,	// (0x0007ef9a) popup_vitu2_query_window_t4

0x7e36,	// (0x0007efae) popup_vitu2_query_window_t5_ParamLimits

0x7e36,	// (0x0007efae) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x00086afe) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x00086afe) popup_vitu2_query_window_t

0xcf7a,	// (0x000840f2) main_cset_text_pane

0x7833,	// (0x0007e9ab) aid_area_touch_slider_ParamLimits

0x784f,	// (0x0007e9c7) cset_slider_pane_ParamLimits

0x7872,	// (0x0007e9ea) main_cset_slider_pane_g1_ParamLimits

0x7887,	// (0x0007e9ff) main_cset_slider_pane_g2_ParamLimits

0xcf9b,	// (0x00084113) main_cset_slider_pane_g3_ParamLimits

0xcf9b,	// (0x00084113) main_cset_slider_pane_g3

0x789c,	// (0x0007ea14) main_cset_slider_pane_g4_ParamLimits

0x789c,	// (0x0007ea14) main_cset_slider_pane_g4

0x78ab,	// (0x0007ea23) main_cset_slider_pane_g5_ParamLimits

0x78ab,	// (0x0007ea23) main_cset_slider_pane_g5

0x78b9,	// (0x0007ea31) main_cset_slider_pane_g6_ParamLimits

0x78b9,	// (0x0007ea31) main_cset_slider_pane_g6

0xf8e3,	// (0x00086a5b) main_cset_slider_pane_g_ParamLimits

0xcfcb,	// (0x00084143) main_cset_slider_pane_t1_ParamLimits

0x7949,	// (0x0007eac1) main_cset_slider_pane_t2_ParamLimits

0x7963,	// (0x0007eadb) main_cset_slider_pane_t3_ParamLimits

0x797d,	// (0x0007eaf5) main_cset_slider_pane_t4_ParamLimits

0x7997,	// (0x0007eb0f) main_cset_slider_pane_t5_ParamLimits

0x79b5,	// (0x0007eb2d) main_cset_slider_pane_t6_ParamLimits

0x79cc,	// (0x0007eb44) main_cset_slider_pane_t7_ParamLimits

0x79fa,	// (0x0007eb72) main_cset_slider_pane_t8_ParamLimits

0x79fa,	// (0x0007eb72) main_cset_slider_pane_t8

0x7a22,	// (0x0007eb9a) main_cset_slider_pane_t9_ParamLimits

0x7a22,	// (0x0007eb9a) main_cset_slider_pane_t9

0x7a4a,	// (0x0007ebc2) main_cset_slider_pane_t10_ParamLimits

0x7a4a,	// (0x0007ebc2) main_cset_slider_pane_t10

0x7a72,	// (0x0007ebea) main_cset_slider_pane_t11_ParamLimits

0x7a72,	// (0x0007ebea) main_cset_slider_pane_t11

0x7a9c,	// (0x0007ec14) main_cset_slider_pane_t12_ParamLimits

0x7a9c,	// (0x0007ec14) main_cset_slider_pane_t12

0x7ab9,	// (0x0007ec31) main_cset_slider_pane_t13_ParamLimits

0x7ab9,	// (0x0007ec31) main_cset_slider_pane_t13

0xf908,	// (0x00086a80) main_cset_slider_pane_t_ParamLimits

0xaa67,	// (0x00081bdf) bg_popup_sub_pane_cp011

0xd0f8,	// (0x00084270) main_cset_text_pane_g1

0xd100,	// (0x00084278) main_cset_text_pane_t1

0xd10e,	// (0x00084286) main_cset_text_pane_t2

0xd11c,	// (0x00084294) main_cset_text_pane_t3

0xd12a,	// (0x000842a2) main_cset_text_pane_t4

0xd138,	// (0x000842b0) main_cset_text_pane_t5

0xd146,	// (0x000842be) main_cset_text_pane_t6

0xd154,	// (0x000842cc) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x00086b0d) main_cset_text_pane_t

0xaa67,	// (0x00081bdf) main_cam4_burst_pane

0xaa67,	// (0x00081bdf) main_cam5_pane

0x7766,	// (0x0007e8de) bg_button_pane_cp019

0x776f,	// (0x0007e8e7) bg_button_pane_cp020

0xcfa7,	// (0x0008411f) main_cset_slider_pane_g7_ParamLimits

0xcfa7,	// (0x0008411f) main_cset_slider_pane_g7

0xcfb3,	// (0x0008412b) main_cset_slider_pane_g8_ParamLimits

0xcfb3,	// (0x0008412b) main_cset_slider_pane_g8

0x78cd,	// (0x0007ea45) main_cset_slider_pane_g9_ParamLimits

0x78cd,	// (0x0007ea45) main_cset_slider_pane_g9

0x78d9,	// (0x0007ea51) main_cset_slider_pane_g10_ParamLimits

0x78d9,	// (0x0007ea51) main_cset_slider_pane_g10

0x78e5,	// (0x0007ea5d) main_cset_slider_pane_g11_ParamLimits

0x78e5,	// (0x0007ea5d) main_cset_slider_pane_g11

0x78f1,	// (0x0007ea69) main_cset_slider_pane_g12_ParamLimits

0x78f1,	// (0x0007ea69) main_cset_slider_pane_g12

0x78fd,	// (0x0007ea75) main_cset_slider_pane_g13_ParamLimits

0x78fd,	// (0x0007ea75) main_cset_slider_pane_g13

0x7909,	// (0x0007ea81) main_cset_slider_pane_g14_ParamLimits

0x7909,	// (0x0007ea81) main_cset_slider_pane_g14

0x7915,	// (0x0007ea8d) main_cset_slider_pane_g15_ParamLimits

0x7915,	// (0x0007ea8d) main_cset_slider_pane_g15

0xcff3,	// (0x0008416b) main_cset_slider_pane_t14_ParamLimits

0xcff3,	// (0x0008416b) main_cset_slider_pane_t14

0xd02c,	// (0x000841a4) main_cset_slider_pane_t15_ParamLimits

0xd02c,	// (0x000841a4) main_cset_slider_pane_t15

0x7e4a,	// (0x0007efc2) aid_cam4_burst_size_cell_ParamLimits

0x7e4a,	// (0x0007efc2) aid_cam4_burst_size_cell

0x7e6a,	// (0x0007efe2) grid_cam4_burst_pane_ParamLimits

0x7e6a,	// (0x0007efe2) grid_cam4_burst_pane

0x7ea4,	// (0x0007f01c) linegrid_cam4_burst_pane_ParamLimits

0x7ea4,	// (0x0007f01c) linegrid_cam4_burst_pane

0xd162,	// (0x000842da) scroll_pane_cp30_ParamLimits

0xd162,	// (0x000842da) scroll_pane_cp30

0x7ec6,	// (0x0007f03e) cell_cam4_burst_pane_ParamLimits

0x7ec6,	// (0x0007f03e) cell_cam4_burst_pane

0xd16e,	// (0x000842e6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd16e,	// (0x000842e6) linegrid_cam4_burst_pane_g1

0x7f1b,	// (0x0007f093) linegrid_cam4_burst_pane_g2_ParamLimits

0x7f1b,	// (0x0007f093) linegrid_cam4_burst_pane_g2

0xd17b,	// (0x000842f3) linegrid_cam4_burst_pane_g3_ParamLimits

0xd17b,	// (0x000842f3) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x00086b1c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x00086b1c) linegrid_cam4_burst_pane_g

0x7f2c,	// (0x0007f0a4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7f2c,	// (0x0007f0a4) linegrid_cam4_burst_pane_g3_copy1

0xd188,	// (0x00084300) linegrid_cam4_burst_pane_g4_ParamLimits

0xd188,	// (0x00084300) linegrid_cam4_burst_pane_g4

0x7f4a,	// (0x0007f0c2) linegrid_cam4_burst_pane_g5_ParamLimits

0x7f4a,	// (0x0007f0c2) linegrid_cam4_burst_pane_g5

0x7f5b,	// (0x0007f0d3) linegrid_cam4_burst_pane_g6_ParamLimits

0x7f5b,	// (0x0007f0d3) linegrid_cam4_burst_pane_g6

0xd195,	// (0x0008430d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd195,	// (0x0008430d) linegrid_cam4_burst_pane_g7

0x7f72,	// (0x0007f0ea) cell_cam4_burst_pane_g1

0xd1ae,	// (0x00084326) main_cam5_pane_t1_ParamLimits

0xd1ae,	// (0x00084326) main_cam5_pane_t1

0xd1c0,	// (0x00084338) main_cam5_pane_t2_ParamLimits

0xd1c0,	// (0x00084338) main_cam5_pane_t2

0xd1d2,	// (0x0008434a) main_cam5_pane_t3_ParamLimits

0xd1d2,	// (0x0008434a) main_cam5_pane_t3

0xd1e4,	// (0x0008435c) main_cam5_pane_t4_ParamLimits

0xd1e4,	// (0x0008435c) main_cam5_pane_t4

0xd1fc,	// (0x00084374) main_cam5_pane_t5_ParamLimits

0xd1fc,	// (0x00084374) main_cam5_pane_t5

0xd210,	// (0x00084388) main_cam5_pane_t6_ParamLimits

0xd210,	// (0x00084388) main_cam5_pane_t6

0xd224,	// (0x0008439c) main_cam5_pane_t7_ParamLimits

0xd224,	// (0x0008439c) main_cam5_pane_t7

0xd236,	// (0x000843ae) main_cam5_pane_t8_ParamLimits

0xd236,	// (0x000843ae) main_cam5_pane_t8

0xd254,	// (0x000843cc) main_cam5_pane_t9_ParamLimits

0xd254,	// (0x000843cc) main_cam5_pane_t9

0xd266,	// (0x000843de) main_cam5_pane_t10_ParamLimits

0xd266,	// (0x000843de) main_cam5_pane_t10

0xd278,	// (0x000843f0) main_cam5_pane_t11_ParamLimits

0xd278,	// (0x000843f0) main_cam5_pane_t11

0xd28c,	// (0x00084404) main_cam5_pane_t12_ParamLimits

0xd28c,	// (0x00084404) main_cam5_pane_t12

0xd2a3,	// (0x0008441b) main_cam5_pane_t13_ParamLimits

0xd2a3,	// (0x0008441b) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x00086b28) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x00086b28) main_cam5_pane_t

0x1220,	// (0x00078398) popup_scut_keymap_window_ParamLimits

0x1220,	// (0x00078398) popup_scut_keymap_window

0x7f85,	// (0x0007f0fd) aid_size_cell_brow_shortcut

0x1cca,	// (0x00078e42) bg_popup_window_pane_cp010

0x7f91,	// (0x0007f109) grid_scut_pane

0x7f9d,	// (0x0007f115) cell_scut_pane_ParamLimits

0x7f9d,	// (0x0007f115) cell_scut_pane

0x7fb6,	// (0x0007f12e) cell_scut_pane_g1

0xd2c6,	// (0x0008443e) cell_scut_pane_t1

0xd2d5,	// (0x0008444d) cell_scut_pane_t2

0x7fbf,	// (0x0007f137) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x00086b43) cell_scut_pane_t

0x5fac,	// (0x0007d124) main_mup3_pane_g8_ParamLimits

0x5fac,	// (0x0007d124) main_mup3_pane_g8

0x72cd,	// (0x0007e445) area_vitu2_query_pane_ParamLimits

0x72cd,	// (0x0007e445) area_vitu2_query_pane

0x0964,	// (0x00077adc) input_focus_pane_cp08

0xd2e4,	// (0x0008445c) area_vitu2_query_pane_g1

0x0a69,	// (0x00077be1) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x00086b4a) area_vitu2_query_pane_g

0x7fcd,	// (0x0007f145) area_vitu2_query_pane_t1_ParamLimits

0x7fcd,	// (0x0007f145) area_vitu2_query_pane_t1

0x7fe1,	// (0x0007f159) area_vitu2_query_pane_t2_ParamLimits

0x7fe1,	// (0x0007f159) area_vitu2_query_pane_t2

0x0a7e,	// (0x00077bf6) area_vitu2_query_pane_t3_ParamLimits

0x0a7e,	// (0x00077bf6) area_vitu2_query_pane_t3

0xd2f0,	// (0x00084468) area_vitu2_query_pane_t4_ParamLimits

0xd2f0,	// (0x00084468) area_vitu2_query_pane_t4

0xd318,	// (0x00084490) area_vitu2_query_pane_t5_ParamLimits

0xd318,	// (0x00084490) area_vitu2_query_pane_t5

0xd340,	// (0x000844b8) area_vitu2_query_pane_t6_ParamLimits

0xd340,	// (0x000844b8) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x00086b4f) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x00086b4f) area_vitu2_query_pane_t

0x7ff5,	// (0x0007f16d) bg_button_pane_cp018

0x8001,	// (0x0007f179) bg_button_pane_cp021

0x0aaa,	// (0x00077c22) bg_button_pane_cp022

0x0ad5,	// (0x00077c4d) input_focus_pane_cp09

0x3c05,	// (0x0007ad7d) aid_size_touch_mv_arrow_left

0x3c2e,	// (0x0007ada6) aid_size_touch_mv_arrow_right

0x792d,	// (0x0007eaa5) main_cset_slider_pane_g16_ParamLimits

0x792d,	// (0x0007eaa5) main_cset_slider_pane_g16

0x793b,	// (0x0007eab3) main_cset_slider_pane_g17_ParamLimits

0x793b,	// (0x0007eab3) main_cset_slider_pane_g17

0x7f72,	// (0x0007f0ea) cell_cam4_burst_pane_g1_ParamLimits

0xaa67,	// (0x00081bdf) compa_mode_pane

0x7b3b,	// (0x0007ecb3) popup_vtel_slider_window_g3_ParamLimits

0x7b3b,	// (0x0007ecb3) popup_vtel_slider_window_g3

0x7b52,	// (0x0007ecca) popup_vtel_slider_window_g4_ParamLimits

0x7b52,	// (0x0007ecca) popup_vtel_slider_window_g4

0x7b69,	// (0x0007ece1) popup_vtel_slider_window_t1_ParamLimits

0x7b69,	// (0x0007ece1) popup_vtel_slider_window_t1

0xaa67,	// (0x00081bdf) main_cl_pane

0xbe3e,	// (0x00082fb6) popup_imed_adjust2_window_ParamLimits

0x3efb,	// (0x0007b073) bg_tb_trans_pane_cp05_ParamLimits

0xc7c6,	// (0x0008393e) popup_imed_adjust2_window_g1_ParamLimits

0xc7d5,	// (0x0008394d) popup_imed_adjust2_window_g2_ParamLimits

0xc7d5,	// (0x0008394d) popup_imed_adjust2_window_g2

0xc7e1,	// (0x00083959) popup_imed_adjust2_window_g3_ParamLimits

0xc7e1,	// (0x00083959) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x000868c5) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x000868c5) popup_imed_adjust2_window_g

0xc7ed,	// (0x00083965) popup_imed_adjust2_window_t1_ParamLimits

0xc805,	// (0x0008397d) slider_imed_adjust_pane_ParamLimits

0xc819,	// (0x00083991) slider_imed_adjust_pane_g1_ParamLimits

0xc829,	// (0x000839a1) slider_imed_adjust_pane_g2_ParamLimits

0xc839,	// (0x000839b1) slider_imed_adjust_pane_g3_ParamLimits

0xc84a,	// (0x000839c2) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x000868cc) slider_imed_adjust_pane_g_ParamLimits

0x704d,	// (0x0007e1c5) aid_touch_area_cam4_ParamLimits

0x704d,	// (0x0007e1c5) aid_touch_area_cam4

0xea02,	// (0x00085b7a) battery_pane_cp01

0x7120,	// (0x0007e298) main_camera4_pane_g6_ParamLimits

0x7120,	// (0x0007e298) main_camera4_pane_g6

0x714a,	// (0x0007e2c2) main_camera4_pane_t2_ParamLimits

0x714a,	// (0x0007e2c2) main_camera4_pane_t2

0x0001,

0xf856,	// (0x000869ce) main_camera4_pane_t_ParamLimits

0xf856,	// (0x000869ce) main_camera4_pane_t

0x717f,	// (0x0007e2f7) aid_touch_area_vid4_ParamLimits

0x717f,	// (0x0007e2f7) aid_touch_area_vid4

0x71d6,	// (0x0007e34e) main_video4_pane_g5_ParamLimits

0x71d6,	// (0x0007e34e) main_video4_pane_g5

0x71fc,	// (0x0007e374) vid4_progress_pane_ParamLimits

0x71fc,	// (0x0007e374) vid4_progress_pane

0xcfbf,	// (0x00084137) main_cset_slider_pane_g18_ParamLimits

0xcfbf,	// (0x00084137) main_cset_slider_pane_g18

0xd1a2,	// (0x0008431a) cell_cam4_burst_pane_g2_ParamLimits

0xd1a2,	// (0x0008431a) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x00086b23) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x00086b23) cell_cam4_burst_pane_g

0xb2a4,	// (0x0008241c) bg_cl_pane_ParamLimits

0xb2a4,	// (0x0008241c) bg_cl_pane

0x800d,	// (0x0007f185) cl_header_pane_ParamLimits

0x800d,	// (0x0007f185) cl_header_pane

0x8021,	// (0x0007f199) cl_listscroll_pane_ParamLimits

0x8021,	// (0x0007f199) cl_listscroll_pane

0xd38c,	// (0x00084504) bg_cl_pane_g1

0xd394,	// (0x0008450c) bg_cl_pane_g2

0xd39c,	// (0x00084514) bg_cl_pane_g3

0xd3a4,	// (0x0008451c) bg_cl_pane_g4

0xd3ac,	// (0x00084524) bg_cl_pane_g5

0xd3b4,	// (0x0008452c) bg_cl_pane_g6

0xd3bc,	// (0x00084534) bg_cl_pane_g7

0xd3c4,	// (0x0008453c) bg_cl_pane_g8

0xd3cc,	// (0x00084544) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x00086b5e) bg_cl_pane_g

0x8031,	// (0x0007f1a9) aid_height_cl_leading_ParamLimits

0x8031,	// (0x0007f1a9) aid_height_cl_leading

0x803d,	// (0x0007f1b5) aid_height_cl_text_ParamLimits

0x803d,	// (0x0007f1b5) aid_height_cl_text

0xaae4,	// (0x00081c5c) bg_cl_header_pane_ParamLimits

0xaae4,	// (0x00081c5c) bg_cl_header_pane

0x805c,	// (0x0007f1d4) cl_header_pane_g1_ParamLimits

0x805c,	// (0x0007f1d4) cl_header_pane_g1

0x8072,	// (0x0007f1ea) cl_header_pane_t1_ParamLimits

0x8072,	// (0x0007f1ea) cl_header_pane_t1

0xd3d4,	// (0x0008454c) cl_list_pane

0xcf92,	// (0x0008410a) hc_scroll_pane_cp01

0x2571,	// (0x000796e9) bg_cl_header_pane_g1

0xce74,	// (0x00083fec) bg_cl_header_pane_g2

0x2591,	// (0x00079709) bg_cl_header_pane_g3

0xce84,	// (0x00083ffc) bg_cl_header_pane_g4

0xce7c,	// (0x00083ff4) bg_cl_header_pane_g5

0xd0b1,	// (0x00084229) bg_cl_header_pane_g6

0xce9c,	// (0x00084014) bg_cl_header_pane_g7

0xcea4,	// (0x0008401c) bg_cl_header_pane_g8

0xce94,	// (0x0008400c) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x00086b71) bg_cl_header_pane_g

0x808b,	// (0x0007f203) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x808b,	// (0x0007f203) hc_cl_list_double_graphic_heading_pane

0x809e,	// (0x0007f216) hc_cl_list_single_graphic_pane_ParamLimits

0x809e,	// (0x0007f216) hc_cl_list_single_graphic_pane

0x80b6,	// (0x0007f22e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x80b6,	// (0x0007f22e) hc_cl_list_single_graphic_pane_g1

0x80c2,	// (0x0007f23a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x80c2,	// (0x0007f23a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x00086b84) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x00086b84) hc_cl_list_single_graphic_pane_g

0x80d6,	// (0x0007f24e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x80d6,	// (0x0007f24e) hc_cl_list_single_graphic_pane_t1

0x80b6,	// (0x0007f22e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x80b6,	// (0x0007f22e) hc_cl_list_double_graphic_heading_pane_g1

0x80eb,	// (0x0007f263) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x80eb,	// (0x0007f263) hc_cl_list_double_graphic_heading_pane_g2

0x80ff,	// (0x0007f277) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x80ff,	// (0x0007f277) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x00086b89) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x00086b89) hc_cl_list_double_graphic_heading_pane_g

0x8113,	// (0x0007f28b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8113,	// (0x0007f28b) hc_cl_list_double_graphic_heading_pane_t1

0x8128,	// (0x0007f2a0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8128,	// (0x0007f2a0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x00086b90) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x00086b90) hc_cl_list_double_graphic_heading_pane_t

0xeb50,	// (0x00085cc8) vid4_progress_pane_g1

0xeb60,	// (0x00085cd8) vid4_progress_pane_g2

0x813d,	// (0x0007f2b5) vid4_progress_pane_g3

0xeb70,	// (0x00085ce8) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x00086b95) vid4_progress_pane_g

0x814f,	// (0x0007f2c7) vid4_progress_pane_t1

0xeb8e,	// (0x00085d06) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x00086ba0) vid4_progress_pane_t

0x8169,	// (0x0007f2e1) wait_bar_pane_cp07

0xc10f,	// (0x00083287) blid_firmament_pane_ParamLimits

0xc152,	// (0x000832ca) popup_blid_sat_info2_window_g1

0xc176,	// (0x000832ee) popup_blid_sat_info2_window_t3

0xc184,	// (0x000832fc) popup_blid_sat_info2_window_t4

0xc192,	// (0x0008330a) popup_blid_sat_info2_window_t5

0xc1a0,	// (0x00083318) popup_blid_sat_info2_window_t6

0xc1b0,	// (0x00083328) popup_blid_sat_info2_window_t7

0xc1be,	// (0x00083336) popup_blid_sat_info2_window_t8

0xc1cc,	// (0x00083344) popup_blid_sat_info2_window_t9

0xc1da,	// (0x00083352) popup_blid_sat_info2_window_t10

0xc2a1,	// (0x00083419) aid_firma_cardinal_ParamLimits

0xc2b5,	// (0x0008342d) blid_firmament_pane_t1_ParamLimits

0xc2cc,	// (0x00083444) blid_firmament_pane_t2_ParamLimits

0xc2e3,	// (0x0008345b) blid_firmament_pane_t3_ParamLimits

0xc2fa,	// (0x00083472) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x000867be) blid_firmament_pane_t_ParamLimits

0xc311,	// (0x00083489) blid_sat_info_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_cam_set_pane_ParamLimits

0x67b5,	// (0x0007d92d) aid_size_cell_colour_35_ParamLimits

0x67d5,	// (0x0007d94d) aid_size_cell_colour_112_ParamLimits

0x67f5,	// (0x0007d96d) aid_size_cell_effect_ParamLimits

0x3efb,	// (0x0007b073) bg_tb_trans_pane_cp02_ParamLimits

0x34e3,	// (0x0007a65b) heading_imed_pane_ParamLimits

0x6815,	// (0x0007d98d) listscroll_imed_pane_ParamLimits

0x5166,	// (0x0007c2de) popup_call2_audio_first_window_g5_ParamLimits

0x5166,	// (0x0007c2de) popup_call2_audio_first_window_g5

0x6c5e,	// (0x0007ddd6) aid_size_touch_image3_arrow_left_ParamLimits

0x6c5e,	// (0x0007ddd6) aid_size_touch_image3_arrow_left

0x6c8a,	// (0x0007de02) aid_size_touch_image3_arrow_right_ParamLimits

0x6c8a,	// (0x0007de02) aid_size_touch_image3_arrow_right

0xeba4,	// (0x00085d1c) vid4_progress_pane_t3

0x69ba,	// (0x0007db32) main_hwr_training_symbol_option_pane_ParamLimits

0x69ba,	// (0x0007db32) main_hwr_training_symbol_option_pane

0xca0b,	// (0x00083b83) popup_hwr_training_preview_window_ParamLimits

0xca0b,	// (0x00083b83) popup_hwr_training_preview_window

0x69da,	// (0x0007db52) hwr_training_navi_pane_g5_ParamLimits

0x69da,	// (0x0007db52) hwr_training_navi_pane_g5

0xce62,	// (0x00083fda) popup_char_count_window

0xaae4,	// (0x00081c5c) bg_popup_sub_pane_cp20_ParamLimits

0x7c7b,	// (0x0007edf3) list_vitu2_match_list_pane_ParamLimits

0x7c87,	// (0x0007edff) vitu2_page_scroll_pane_ParamLimits

0x7c87,	// (0x0007edff) vitu2_page_scroll_pane

0xd3ee,	// (0x00084566) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd3ee,	// (0x00084566) list_single_hwr_training_symbol_option_pane

0xd401,	// (0x00084579) list_single_hwr_training_symbol_option_pane_g1

0xd409,	// (0x00084581) list_single_hwr_training_symbol_option_pane_t1

0xd417,	// (0x0008458f) bg_button_pane_cp023

0xd420,	// (0x00084598) bg_button_pane_cp024

0xd453,	// (0x000845cb) vitu2_page_scroll_pane_g1

0xd45b,	// (0x000845d3) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x00086ba7) vitu2_page_scroll_pane_g

0xd463,	// (0x000845db) vitu2_page_scroll_pane_t1

0xd472,	// (0x000845ea) popup_char_count_window_g1

0xd47b,	// (0x000845f3) popup_char_count_window_g2

0xd484,	// (0x000845fc) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x00086bac) popup_char_count_window_g

0xd48d,	// (0x00084605) popup_char_count_window_t1

0xaa67,	// (0x00081bdf) main_vded2_pane

0xc7b2,	// (0x0008392a) aid_size_cell_imed_line

0xc7bc,	// (0x00083934) grid_imed_line_width_pane

0xeabc,	// (0x00085c34) vid4_indicators_pane_g4

0xd49b,	// (0x00084613) cell_imed_line_width_pane_ParamLimits

0xd49b,	// (0x00084613) cell_imed_line_width_pane

0xd4b1,	// (0x00084629) cell_imed_line_width_pane_g1

0xd4ba,	// (0x00084632) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x00086bb3) cell_imed_line_width_pane_g

0x817c,	// (0x0007f2f4) main_vded2_pane_g1_ParamLimits

0x817c,	// (0x0007f2f4) main_vded2_pane_g1

0x8197,	// (0x0007f30f) main_vded2_pane_g2_ParamLimits

0x8197,	// (0x0007f30f) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x00086bb8) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x00086bb8) main_vded2_pane_g

0x81a9,	// (0x0007f321) vded2_slider_pane_ParamLimits

0x81a9,	// (0x0007f321) vded2_slider_pane

0x81b9,	// (0x0007f331) aid_size_touch_vded2_end

0x81c3,	// (0x0007f33b) aid_size_touch_vded2_playhead

0xd4c2,	// (0x0008463a) aid_size_touch_vded2_start

0xd4ca,	// (0x00084642) vded2_slider_bg_pane

0xd4d3,	// (0x0008464b) vded2_slider_pane_g1

0xd4dc,	// (0x00084654) vded2_slider_pane_g2

0x81cd,	// (0x0007f345) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x00086bbd) vded2_slider_pane_g

0xd4e4,	// (0x0008465c) vded2_slider_bg_pane_g1

0xd4ed,	// (0x00084665) vded2_slider_bg_pane_g2

0xd4f6,	// (0x0008466e) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x00086bc4) vded2_slider_bg_pane_g

0x42b1,	// (0x0007b429) aid_postcard_touch_down_pane_ParamLimits

0x42b1,	// (0x0007b429) aid_postcard_touch_down_pane

0x42c9,	// (0x0007b441) aid_postcard_touch_up_pane_ParamLimits

0x42c9,	// (0x0007b441) aid_postcard_touch_up_pane

0xaa67,	// (0x00081bdf) main_blid2_pane

0xbe20,	// (0x00082f98) popup_blid2_search_window

0xaa67,	// (0x00081bdf) blid2_gps_pane

0xaa67,	// (0x00081bdf) blid2_navig_pane

0xaa67,	// (0x00081bdf) blid2_search_pane

0xaa67,	// (0x00081bdf) blid2_tripm_pane

0x81d8,	// (0x0007f350) blid2_search_pane_g1_ParamLimits

0x81d8,	// (0x0007f350) blid2_search_pane_g1

0x81eb,	// (0x0007f363) blid2_search_pane_t1_ParamLimits

0x81eb,	// (0x0007f363) blid2_search_pane_t1

0x81fd,	// (0x0007f375) aid_size_cell_blid2_gps_ParamLimits

0x81fd,	// (0x0007f375) aid_size_cell_blid2_gps

0x8215,	// (0x0007f38d) blid2_gps_pane_g1_ParamLimits

0x8215,	// (0x0007f38d) blid2_gps_pane_g1

0x8229,	// (0x0007f3a1) grid_blid2_satellite_pane_ParamLimits

0x8229,	// (0x0007f3a1) grid_blid2_satellite_pane

0x8241,	// (0x0007f3b9) blid2_navig_pane_g1_ParamLimits

0x8241,	// (0x0007f3b9) blid2_navig_pane_g1

0x824d,	// (0x0007f3c5) blid2_navig_pane_t1_ParamLimits

0x824d,	// (0x0007f3c5) blid2_navig_pane_t1

0x8268,	// (0x0007f3e0) blid2_navig_pane_t2_ParamLimits

0x8268,	// (0x0007f3e0) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x00086bcb) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x00086bcb) blid2_navig_pane_t

0x8283,	// (0x0007f3fb) blid2_navig_ring_pane_ParamLimits

0x8283,	// (0x0007f3fb) blid2_navig_ring_pane

0x829e,	// (0x0007f416) blid2_speed_pane_ParamLimits

0x829e,	// (0x0007f416) blid2_speed_pane

0x82aa,	// (0x0007f422) blid2_tripm_pane_g1_ParamLimits

0x82aa,	// (0x0007f422) blid2_tripm_pane_g1

0x82c5,	// (0x0007f43d) blid2_tripm_pane_g2_ParamLimits

0x82c5,	// (0x0007f43d) blid2_tripm_pane_g2

0x82d9,	// (0x0007f451) blid2_tripm_pane_g3_ParamLimits

0x82d9,	// (0x0007f451) blid2_tripm_pane_g3

0x82ed,	// (0x0007f465) blid2_tripm_pane_g4_ParamLimits

0x82ed,	// (0x0007f465) blid2_tripm_pane_g4

0x8301,	// (0x0007f479) blid2_tripm_pane_g5_ParamLimits

0x8301,	// (0x0007f479) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x00086bd0) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x00086bd0) blid2_tripm_pane_g

0x8327,	// (0x0007f49f) blid2_tripm_pane_t1_ParamLimits

0x8327,	// (0x0007f49f) blid2_tripm_pane_t1

0x8340,	// (0x0007f4b8) blid2_tripm_pane_t2_ParamLimits

0x8340,	// (0x0007f4b8) blid2_tripm_pane_t2

0x8359,	// (0x0007f4d1) blid2_tripm_pane_t3_ParamLimits

0x8359,	// (0x0007f4d1) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x00086bdd) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x00086bdd) blid2_tripm_pane_t

0x83a0,	// (0x0007f518) cell_blid2_satellite_pane_ParamLimits

0x83a0,	// (0x0007f518) cell_blid2_satellite_pane

0x83bc,	// (0x0007f534) cell_blid2_satellite_pane_g1

0xd4ff,	// (0x00084677) cell_blid2_satellite_pane_t1

0x1ebb,	// (0x00079033) blid2_speed_pane_g1

0xd50d,	// (0x00084685) blid2_speed_pane_t1

0xd51b,	// (0x00084693) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x00086be6) blid2_speed_pane_t

0x1ebb,	// (0x00079033) blid2_navig_ring_pane_g1

0x83c5,	// (0x0007f53d) blid2_navig_ring_pane_g2

0x83cd,	// (0x0007f545) blid2_navig_ring_pane_g3

0x83d5,	// (0x0007f54d) blid2_navig_ring_pane_g4

0x83dd,	// (0x0007f555) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x00086beb) blid2_navig_ring_pane_g

0xaa67,	// (0x00081bdf) bg_popup_window_pane_cp011

0xd529,	// (0x000846a1) popup_blid2_search_window_g1

0xd531,	// (0x000846a9) popup_blid2_search_window_t1

0xd53f,	// (0x000846b7) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x00086bf6) popup_blid2_search_window_t

0x242e,	// (0x000795a6) main_browser_pane_g1

0xb2a4,	// (0x0008241c) main_browser_pane_ParamLimits

0xaae4,	// (0x00081c5c) bg_button_pane_cp011_ParamLimits

0x74f2,	// (0x0007e66a) cell_vitu2_function_pane_g1_ParamLimits

0x3efb,	// (0x0007b073) bg_popup_sub_pane_cp22_ParamLimits

0x0964,	// (0x00077adc) input_focus_pane_cp08_ParamLimits

0x7e07,	// (0x0007ef7f) popup_vitu2_query_button_pane_ParamLimits

0x7e07,	// (0x0007ef7f) popup_vitu2_query_button_pane

0x0980,	// (0x00077af8) popup_vitu2_query_input_button_pane

0xd0ec,	// (0x00084264) popup_vitu2_query_window_g1_ParamLimits

0x098a,	// (0x00077b02) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x00086af7) popup_vitu2_query_window_g_ParamLimits

0xaa67,	// (0x00081bdf) bg_button_pane_cp026

0x83e5,	// (0x0007f55d) popup_vitu2_query_input_button_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp025

0xd54d,	// (0x000846c5) popup_vitu2_query_button_pane_t1

0x5bc8,	// (0x0007cd40) main_mp3_pane_t6

0x5bd6,	// (0x0007cd4e) popup_slider_window_cp01

0xea20,	// (0x00085b98) cam4_battery_pane

0xea75,	// (0x00085bed) cam4_battery_pane_cp02

0xeb48,	// (0x00085cc0) cam4_battery_pane_cp01

0xeb48,	// (0x00085cc0) cam4_battery_pane_cp03

0x1ebb,	// (0x00079033) cam4_battery_pane_g1

0xd55b,	// (0x000846d3) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x00086bfb) cam4_battery_pane_g

0xc1e8,	// (0x00083360) popup_blid_sat_info2_window_t11

0x3c05,	// (0x0007ad7d) aid_size_touch_mv_arrow_left_ParamLimits

0x3c2e,	// (0x0007ada6) aid_size_touch_mv_arrow_right_ParamLimits

0x3c8c,	// (0x0007ae04) navi_pane_g1_ParamLimits

0x3c98,	// (0x0007ae10) navi_pane_g2_ParamLimits

0x3cc6,	// (0x0007ae3e) navi_pane_g3_ParamLimits

0xf35a,	// (0x000864d2) navi_pane_g_ParamLimits

0x3d84,	// (0x0007aefc) navi_pane_mv_t1_ParamLimits

0x6821,	// (0x0007d999) grid_imed_effect_pane_ParamLimits

0x1fd9,	// (0x00079151) aid_placing_vt_slider_lsc

0x1fe9,	// (0x00079161) aid_placing_vt_slider_prt

0xaae4,	// (0x00081c5c) bg_tb_trans_pane_cp01_ParamLimits

0xc450,	// (0x000835c8) popup_image_details_window_g1_ParamLimits

0xc463,	// (0x000835db) popup_image_details_window_g2_ParamLimits

0xc478,	// (0x000835f0) popup_image_details_window_g3_ParamLimits

0xc478,	// (0x000835f0) popup_image_details_window_g3

0xf686,	// (0x000867fe) popup_image_details_window_g_ParamLimits

0xc48c,	// (0x00083604) popup_image_details_window_t1_ParamLimits

0xc49e,	// (0x00083616) popup_image_details_window_t2_ParamLimits

0xc4b7,	// (0x0008362f) popup_image_details_window_t3_ParamLimits

0xc4cb,	// (0x00083643) popup_image_details_window_t4_ParamLimits

0xc4e6,	// (0x0008365e) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x00086805) popup_image_details_window_t_ParamLimits

0x8049,	// (0x0007f1c1) cl_header_name_pane_ParamLimits

0x8049,	// (0x0007f1c1) cl_header_name_pane

0x83ed,	// (0x0007f565) cl_header_name_pane_t1_ParamLimits

0x83ed,	// (0x0007f565) cl_header_name_pane_t1

0x840e,	// (0x0007f586) cl_header_name_pane_t2_ParamLimits

0x840e,	// (0x0007f586) cl_header_name_pane_t2

0x8450,	// (0x0007f5c8) cl_header_name_pane_t3_ParamLimits

0x8450,	// (0x0007f5c8) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x00086c00) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x00086c00) cl_header_name_pane_t

0x3d55,	// (0x0007aecd) navi_pane_mv_g2_ParamLimits

0xcdfe,	// (0x00083f76) field_vitu2_entry_pane_g1_ParamLimits

0xce0a,	// (0x00083f82) field_vitu2_entry_pane_g2_ParamLimits

0x3ec5,	// (0x0007b03d) field_vitu2_entry_pane_g3_ParamLimits

0x3ec5,	// (0x0007b03d) field_vitu2_entry_pane_g3

0xf888,	// (0x00086a00) field_vitu2_entry_pane_g_ParamLimits

0x746e,	// (0x0007e5e6) cell_vitu2_itu_pane_g1_ParamLimits

0x7486,	// (0x0007e5fe) cell_vitu2_itu_pane_g2_ParamLimits

0x7486,	// (0x0007e5fe) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x00086a0c) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x00086a0c) cell_vitu2_itu_pane_g

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp05_ParamLimits

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp05

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp03

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp04

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp10_ParamLimits

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp10

0x0abf,	// (0x00077c37) bg_vkb2_func_pane_cp08

0x7ff5,	// (0x0007f16d) bg_vkb2_func_pane_cp06

0x8001,	// (0x0007f179) bg_vkb2_func_pane_cp07

0xd429,	// (0x000845a1) bg_vkb2_func_pane_cp11_ParamLimits

0xd429,	// (0x000845a1) bg_vkb2_func_pane_cp11

0xd43e,	// (0x000845b6) bg_vkb2_func_pane_cp12_ParamLimits

0xd43e,	// (0x000845b6) bg_vkb2_func_pane_cp12

0xaa67,	// (0x00081bdf) bg_vkb2_func_pane_cp09

0xce74,	// (0x00083fec) bg_vkb2_func_pane_g1

0x2591,	// (0x00079709) bg_vkb2_func_pane_g2

0xce7c,	// (0x00083ff4) bg_vkb2_func_pane_g3

0xce84,	// (0x00083ffc) bg_vkb2_func_pane_g4

0xd0b1,	// (0x00084229) bg_vkb2_func_pane_g5

0xce9c,	// (0x00084014) bg_vkb2_func_pane_g6

0xcea4,	// (0x0008401c) bg_vkb2_func_pane_g7

0xce94,	// (0x0008400c) bg_vkb2_func_pane_g8

0x2571,	// (0x000796e9) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x00086c07) bg_vkb2_func_pane_g

0x8315,	// (0x0007f48d) blid2_tripm_pane_g6_ParamLimits

0x8315,	// (0x0007f48d) blid2_tripm_pane_g6

0xcd36,	// (0x00083eae) mp4_progress_pane_g1

0x838c,	// (0x0007f504) blid2_tripm_values_pane_ParamLimits

0x838c,	// (0x0007f504) blid2_tripm_values_pane

0x8481,	// (0x0007f5f9) blid2_tripm_values_pane_t1

0x848f,	// (0x0007f607) blid2_tripm_values_pane_t2

0x849d,	// (0x0007f615) blid2_tripm_values_pane_t3

0x84ab,	// (0x0007f623) blid2_tripm_values_pane_t4

0x84b9,	// (0x0007f631) blid2_tripm_values_pane_t5

0x84c7,	// (0x0007f63f) blid2_tripm_values_pane_t6

0x84d5,	// (0x0007f64d) blid2_tripm_values_pane_t7

0x84e3,	// (0x0007f65b) blid2_tripm_values_pane_t8

0x84f1,	// (0x0007f669) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x00086c1a) blid2_tripm_values_pane_t

0x2020,	// (0x00079198) call_video_pane_t1_ParamLimits

0x203a,	// (0x000791b2) call_video_pane_t2_ParamLimits

0xf208,	// (0x00086380) call_video_pane_t_ParamLimits

0x0803,	// (0x0007797b) msg_header_pane_g1_ParamLimits

0x421b,	// (0x0007b393) msg_header_pane_g2_ParamLimits

0x421b,	// (0x0007b393) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00086575) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00086575) msg_header_pane_g

0xb2a4,	// (0x0008241c) main_clock2_pane_ParamLimits

0x651e,	// (0x0007d696) grid_clock2_toolbar_pane_ParamLimits

0x651e,	// (0x0007d696) grid_clock2_toolbar_pane

0x651e,	// (0x0007d696) listscroll_clock2_pane_ParamLimits

0x651e,	// (0x0007d696) listscroll_clock2_pane

0x65fd,	// (0x0007d775) main_clock2_pane_t3_ParamLimits

0x65fd,	// (0x0007d775) main_clock2_pane_t3

0x6620,	// (0x0007d798) main_clock2_pane_t4_ParamLimits

0x6620,	// (0x0007d798) main_clock2_pane_t4

0xd565,	// (0x000846dd) cell_clock2_toolbar_pane

0xd56d,	// (0x000846e5) cell_clock2_toolbar_pane_cp01

0xd56d,	// (0x000846e5) cell_clock2_toolbar_pane_cp02

0xd575,	// (0x000846ed) cell_clock2_toolbar_pane_cp03

0xd57d,	// (0x000846f5) list_clock2_pane

0x3987,	// (0x0007aaff) scroll_pane_cp10

0xd585,	// (0x000846fd) list_single_clock2_pane_ParamLimits

0xd585,	// (0x000846fd) list_single_clock2_pane

0x1cca,	// (0x00078e42) list_highlight_pane_cp08

0xd592,	// (0x0008470a) list_single_clock2_pane_t1

0xd5a0,	// (0x00084718) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x00086c2d) list_single_clock2_pane_t

0xaa67,	// (0x00081bdf) bg_button_pane_cp10

0xd5ae,	// (0x00084726) cell_clock2_toolbar_pane_g1

0x422f,	// (0x0007b3a7) aid_main_viewer_pane_g1_ParamLimits

0x422f,	// (0x0007b3a7) aid_main_viewer_pane_g1

0x423d,	// (0x0007b3b5) aid_main_viewer_pane_g2_ParamLimits

0x423d,	// (0x0007b3b5) aid_main_viewer_pane_g2

0x424b,	// (0x0007b3c3) aid_main_viewer_pane_g3_ParamLimits

0x424b,	// (0x0007b3c3) aid_main_viewer_pane_g3

0x425a,	// (0x0007b3d2) aid_main_viewer_pane_g4_ParamLimits

0x425a,	// (0x0007b3d2) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00086586) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00086586) aid_main_viewer_pane_g

0x5516,	// (0x0007c68e) main_calc_pane_ParamLimits

0x552a,	// (0x0007c6a2) main_dialer2_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_cam6_pane

0xaa67,	// (0x00081bdf) main_vid6_pane

0x652a,	// (0x0007d6a2) listscroll_gen_pane_cp06_ParamLimits

0x652a,	// (0x0007d6a2) listscroll_gen_pane_cp06

0x6643,	// (0x0007d7bb) main_clock2_pane_t5_ParamLimits

0x6643,	// (0x0007d7bb) main_clock2_pane_t5

0x66a1,	// (0x0007d819) aid_call2_pane_cp10_ParamLimits

0x66b3,	// (0x0007d82b) aid_call_pane_cp10_ParamLimits

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66c5,	// (0x0007d83d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66c5,	// (0x0007d83d) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3b90,	// (0x0007ad08) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x000868ba) popup_clock_analogue_window_cp10_g_ParamLimits

0x66db,	// (0x0007d853) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6c0b,	// (0x0007dd83) cell_dialer2_keypad_pane_g2_ParamLimits

0x6c0b,	// (0x0007dd83) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x0008699f) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x0008699f) cell_dialer2_keypad_pane_g

0x6c27,	// (0x0007dd9f) cell_dialer2_keypad_pane_t1

0x7825,	// (0x0007e99d) main_cset_text2_pane_ParamLimits

0x7825,	// (0x0007e99d) main_cset_text2_pane

0xd2e4,	// (0x0008445c) area_vitu2_query_pane_g1_ParamLimits

0x0a69,	// (0x00077be1) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x00086b4a) area_vitu2_query_pane_g_ParamLimits

0xd368,	// (0x000844e0) area_vitu2_query_pane_t7_ParamLimits

0xd368,	// (0x000844e0) area_vitu2_query_pane_t7

0x7ff5,	// (0x0007f16d) bg_button_pane_cp018_ParamLimits

0x8001,	// (0x0007f179) bg_button_pane_cp021_ParamLimits

0x0aaa,	// (0x00077c22) bg_button_pane_cp022_ParamLimits

0x0abf,	// (0x00077c37) bg_vkb2_func_pane_cp08_ParamLimits

0x7ff5,	// (0x0007f16d) bg_vkb2_func_pane_cp06_ParamLimits

0x8001,	// (0x0007f179) bg_vkb2_func_pane_cp07_ParamLimits

0x0ad5,	// (0x00077c4d) input_focus_pane_cp09_ParamLimits

0xebca,	// (0x00085d42) cam6_autofocus_pane_ParamLimits

0xebca,	// (0x00085d42) cam6_autofocus_pane

0x84ff,	// (0x0007f677) cam6_image_uncrop_pane_ParamLimits

0x84ff,	// (0x0007f677) cam6_image_uncrop_pane

0x850e,	// (0x0007f686) cam6_indi_pane_ParamLimits

0x850e,	// (0x0007f686) cam6_indi_pane

0x8524,	// (0x0007f69c) cam6_mode_pane_ParamLimits

0x8524,	// (0x0007f69c) cam6_mode_pane

0x8536,	// (0x0007f6ae) cam6_timer_pane_ParamLimits

0x8536,	// (0x0007f6ae) cam6_timer_pane

0x8542,	// (0x0007f6ba) cam6_zoom_pane_ParamLimits

0x8542,	// (0x0007f6ba) cam6_zoom_pane

0x8550,	// (0x0007f6c8) cam6_mode_pane_g1_ParamLimits

0x8550,	// (0x0007f6c8) cam6_mode_pane_g1

0x8560,	// (0x0007f6d8) cam6_mode_pane_g2_ParamLimits

0x8560,	// (0x0007f6d8) cam6_mode_pane_g2

0x8570,	// (0x0007f6e8) cam6_mode_pane_g3_ParamLimits

0x8570,	// (0x0007f6e8) cam6_mode_pane_g3

0x8580,	// (0x0007f6f8) cam6_mode_pane_g4_ParamLimits

0x8580,	// (0x0007f6f8) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x00086c32) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x00086c32) cam6_mode_pane_g

0xbf9e,	// (0x00083116) bg_tb_trans_pane_cp08_ParamLimits

0xbf9e,	// (0x00083116) bg_tb_trans_pane_cp08

0xd5b6,	// (0x0008472e) cam6_battery_pane_ParamLimits

0xd5b6,	// (0x0008472e) cam6_battery_pane

0xd5cc,	// (0x00084744) cam6_indi_pane_g1_ParamLimits

0xd5cc,	// (0x00084744) cam6_indi_pane_g1

0xd5de,	// (0x00084756) cam6_indi_pane_g2_ParamLimits

0xd5de,	// (0x00084756) cam6_indi_pane_g2

0xd5f0,	// (0x00084768) cam6_indi_pane_g3_ParamLimits

0xd5f0,	// (0x00084768) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x00086c3b) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x00086c3b) cam6_indi_pane_g

0xd602,	// (0x0008477a) cam6_indi_pane_t1_ParamLimits

0xd602,	// (0x0008477a) cam6_indi_pane_t1

0x7241,	// (0x0007e3b9) cam6_autofocus_pane_g1

0x7249,	// (0x0007e3c1) cam6_autofocus_pane_g2

0x7251,	// (0x0007e3c9) cam6_autofocus_pane_g3

0x7259,	// (0x0007e3d1) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x00086c42) cam6_autofocus_pane_g

0xd628,	// (0x000847a0) cam6_timer_pane_g1

0xd630,	// (0x000847a8) cam6_timer_pane_t1

0xd63e,	// (0x000847b6) cam6_zoom_cont_pane

0xd646,	// (0x000847be) cam6_zoom_pane_g1

0xd64e,	// (0x000847c6) cam6_zoom_pane_g2

0x8590,	// (0x0007f708) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x00086c4b) cam6_zoom_pane_g

0x1ebb,	// (0x00079033) cam6_battery_pane_g1

0x1ebb,	// (0x00079033) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00086536) cam6_battery_pane_g

0xd656,	// (0x000847ce) cam6_zoom_cont_pane_g1

0xd65f,	// (0x000847d7) cam6_zoom_cont_pane_g2

0xd668,	// (0x000847e0) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x00086c52) cam6_zoom_cont_pane_g

0x85ad,	// (0x0007f725) cam6_mode_pane_cp_ParamLimits

0x85ad,	// (0x0007f725) cam6_mode_pane_cp

0x8542,	// (0x0007f6ba) cam6_zoom_pane_cp_ParamLimits

0x8542,	// (0x0007f6ba) cam6_zoom_pane_cp

0x85bf,	// (0x0007f737) vid6_image_uncrop_cif_pane_ParamLimits

0x85bf,	// (0x0007f737) vid6_image_uncrop_cif_pane

0x85cf,	// (0x0007f747) vid6_image_uncrop_nhd_pane_ParamLimits

0x85cf,	// (0x0007f747) vid6_image_uncrop_nhd_pane

0x84ff,	// (0x0007f677) vid6_image_uncrop_vga_pane_ParamLimits

0x84ff,	// (0x0007f677) vid6_image_uncrop_vga_pane

0x85de,	// (0x0007f756) vid6_image_uncrop_wvga_pane_ParamLimits

0x85de,	// (0x0007f756) vid6_image_uncrop_wvga_pane

0x85ed,	// (0x0007f765) vid6_indi_pane_ParamLimits

0x85ed,	// (0x0007f765) vid6_indi_pane

0xbf9e,	// (0x00083116) bg_tb_trans_pane_cp09_ParamLimits

0xbf9e,	// (0x00083116) bg_tb_trans_pane_cp09

0xd680,	// (0x000847f8) cam6_battery_pane_cp_ParamLimits

0xd680,	// (0x000847f8) cam6_battery_pane_cp

0xd68c,	// (0x00084804) vid6_indi_pane_g1_ParamLimits

0xd68c,	// (0x00084804) vid6_indi_pane_g1

0xd69e,	// (0x00084816) vid6_indi_pane_g2_ParamLimits

0xd69e,	// (0x00084816) vid6_indi_pane_g2

0xd6b0,	// (0x00084828) vid6_indi_pane_g3_ParamLimits

0xd6b0,	// (0x00084828) vid6_indi_pane_g3

0xd6c7,	// (0x0008483f) vid6_indi_pane_g4_ParamLimits

0xd6c7,	// (0x0008483f) vid6_indi_pane_g4

0xd6de,	// (0x00084856) vid6_indi_pane_g5_ParamLimits

0xd6de,	// (0x00084856) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x00086c59) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x00086c59) vid6_indi_pane_g

0xd6f8,	// (0x00084870) vid6_indi_pane_t1_ParamLimits

0xd6f8,	// (0x00084870) vid6_indi_pane_t1

0xd70e,	// (0x00084886) vid6_indi_pane_t2_ParamLimits

0xd70e,	// (0x00084886) vid6_indi_pane_t2

0xd736,	// (0x000848ae) vid6_indi_pane_t3_ParamLimits

0xd736,	// (0x000848ae) vid6_indi_pane_t3

0xd75e,	// (0x000848d6) vid6_indi_pane_t4_ParamLimits

0xd75e,	// (0x000848d6) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x00086c64) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x00086c64) vid6_indi_pane_t

0xd782,	// (0x000848fa) wait_bar_pane_cp08

0x8605,	// (0x0007f77d) main_cset_text2_pane_t1_ParamLimits

0x8605,	// (0x0007f77d) main_cset_text2_pane_t1

0x8598,	// (0x0007f710) listscroll_gen_pane_cp06_t1_ParamLimits

0x8598,	// (0x0007f710) listscroll_gen_pane_cp06_t1

0xaa67,	// (0x00081bdf) main_cam6_set_pane

0xb210,	// (0x00082388) bg_tb_trans_pane_cp06_ParamLimits

0xea28,	// (0x00085ba0) cam4_indicators_pane_g1_ParamLimits

0xea39,	// (0x00085bb1) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x000869dc) cam4_indicators_pane_g_ParamLimits

0xea51,	// (0x00085bc9) cam4_indicators_pane_t1_ParamLimits

0xaae4,	// (0x00081c5c) bg_tb_trans_pane_cp07_ParamLimits

0xea7f,	// (0x00085bf7) vid4_indicators_pane_g1_ParamLimits

0xea95,	// (0x00085c0d) vid4_indicators_pane_g2_ParamLimits

0xeaa9,	// (0x00085c21) vid4_indicators_pane_g3_ParamLimits

0xeabc,	// (0x00085c34) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x000869ee) vid4_indicators_pane_g_ParamLimits

0xeada,	// (0x00085c52) vid4_indicators_pane_t1_ParamLimits

0xeb50,	// (0x00085cc8) vid4_progress_pane_g1_ParamLimits

0xeb60,	// (0x00085cd8) vid4_progress_pane_g2_ParamLimits

0x813d,	// (0x0007f2b5) vid4_progress_pane_g3_ParamLimits

0xeb70,	// (0x00085ce8) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x00086b95) vid4_progress_pane_g_ParamLimits

0x814f,	// (0x0007f2c7) vid4_progress_pane_t1_ParamLimits

0xeb8e,	// (0x00085d06) vid4_progress_pane_t2_ParamLimits

0xeba4,	// (0x00085d1c) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x00086ba0) vid4_progress_pane_t_ParamLimits

0x8169,	// (0x0007f2e1) wait_bar_pane_cp07_ParamLimits

0x8626,	// (0x0007f79e) main_cam6_set_pane_g2_ParamLimits

0x8626,	// (0x0007f79e) main_cam6_set_pane_g2

0x864c,	// (0x0007f7c4) main_cset6_listscroll_pane_ParamLimits

0x864c,	// (0x0007f7c4) main_cset6_listscroll_pane

0x866a,	// (0x0007f7e2) main_cset6_slider_pane_ParamLimits

0x866a,	// (0x0007f7e2) main_cset6_slider_pane

0x8680,	// (0x0007f7f8) main_cset6_text2_pane_ParamLimits

0x8680,	// (0x0007f7f8) main_cset6_text2_pane

0xd791,	// (0x00084909) main_cset6_text_pane

0xd799,	// (0x00084911) main_cset_list_pane_copy1_ParamLimits

0xd799,	// (0x00084911) main_cset_list_pane_copy1

0xd7a9,	// (0x00084921) scroll_pane_cp028_copy1

0x868e,	// (0x0007f806) cset_list_set_pane_copy1

0x86a2,	// (0x0007f81a) aid_position_infowindow_above_copy1

0x86aa,	// (0x0007f822) aid_position_infowindow_below_copy1

0x86b2,	// (0x0007f82a) cset_list_set_pane_g1_copy1

0x0afa,	// (0x00077c72) cset_list_set_pane_g3_copy1_ParamLimits

0x0afa,	// (0x00077c72) cset_list_set_pane_g3_copy1

0x0b09,	// (0x00077c81) cset_list_set_pane_t1_copy1_ParamLimits

0x0b09,	// (0x00077c81) cset_list_set_pane_t1_copy1

0xaae4,	// (0x00081c5c) list_highlight_pane_cp021_copy1_ParamLimits

0xaae4,	// (0x00081c5c) list_highlight_pane_cp021_copy1

0xd7b2,	// (0x0008492a) cset6_slider_pane_ParamLimits

0xd7b2,	// (0x0008492a) cset6_slider_pane

0xd7de,	// (0x00084956) main_cset6_slider_pane_g1_ParamLimits

0xd7de,	// (0x00084956) main_cset6_slider_pane_g1

0x86ba,	// (0x0007f832) main_cset6_slider_pane_g2_ParamLimits

0x86ba,	// (0x0007f832) main_cset6_slider_pane_g2

0xd806,	// (0x0008497e) main_cset6_slider_pane_g3_ParamLimits

0xd806,	// (0x0008497e) main_cset6_slider_pane_g3

0x86e2,	// (0x0007f85a) main_cset6_slider_pane_g4_ParamLimits

0x86e2,	// (0x0007f85a) main_cset6_slider_pane_g4

0x86ee,	// (0x0007f866) main_cset6_slider_pane_g5_ParamLimits

0x86ee,	// (0x0007f866) main_cset6_slider_pane_g5

0xcfa7,	// (0x0008411f) main_cset6_slider_pane_g7_ParamLimits

0xcfa7,	// (0x0008411f) main_cset6_slider_pane_g7

0xcfb3,	// (0x0008412b) main_cset6_slider_pane_g8_ParamLimits

0xcfb3,	// (0x0008412b) main_cset6_slider_pane_g8

0x78cd,	// (0x0007ea45) main_cset6_slider_pane_g9_ParamLimits

0x78cd,	// (0x0007ea45) main_cset6_slider_pane_g9

0x78d9,	// (0x0007ea51) main_cset6_slider_pane_g10_ParamLimits

0x78d9,	// (0x0007ea51) main_cset6_slider_pane_g10

0x78e5,	// (0x0007ea5d) main_cset6_slider_pane_g11_ParamLimits

0x78e5,	// (0x0007ea5d) main_cset6_slider_pane_g11

0x78f1,	// (0x0007ea69) main_cset6_slider_pane_g12_ParamLimits

0x78f1,	// (0x0007ea69) main_cset6_slider_pane_g12

0x78fd,	// (0x0007ea75) main_cset6_slider_pane_g13_ParamLimits

0x78fd,	// (0x0007ea75) main_cset6_slider_pane_g13

0x7909,	// (0x0007ea81) main_cset6_slider_pane_g14_ParamLimits

0x7909,	// (0x0007ea81) main_cset6_slider_pane_g14

0x86fc,	// (0x0007f874) main_cset6_slider_pane_g15_ParamLimits

0x86fc,	// (0x0007f874) main_cset6_slider_pane_g15

0x792d,	// (0x0007eaa5) main_cset6_slider_pane_g16_ParamLimits

0x792d,	// (0x0007eaa5) main_cset6_slider_pane_g16

0x793b,	// (0x0007eab3) main_cset6_slider_pane_g17_ParamLimits

0x793b,	// (0x0007eab3) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x00086c6d) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x00086c6d) main_cset6_slider_pane_g

0xd812,	// (0x0008498a) main_cset6_slider_pane_t1_ParamLimits

0xd812,	// (0x0008498a) main_cset6_slider_pane_t1

0x872c,	// (0x0007f8a4) main_cset6_slider_pane_t2_ParamLimits

0x872c,	// (0x0007f8a4) main_cset6_slider_pane_t2

0x8757,	// (0x0007f8cf) main_cset6_slider_pane_t3_ParamLimits

0x8757,	// (0x0007f8cf) main_cset6_slider_pane_t3

0x8782,	// (0x0007f8fa) main_cset6_slider_pane_t4_ParamLimits

0x8782,	// (0x0007f8fa) main_cset6_slider_pane_t4

0x87af,	// (0x0007f927) main_cset6_slider_pane_t5_ParamLimits

0x87af,	// (0x0007f927) main_cset6_slider_pane_t5

0xd853,	// (0x000849cb) main_cset6_slider_pane_t7_ParamLimits

0xd853,	// (0x000849cb) main_cset6_slider_pane_t7

0x87dc,	// (0x0007f954) main_cset6_slider_pane_t8_ParamLimits

0x87dc,	// (0x0007f954) main_cset6_slider_pane_t8

0x8800,	// (0x0007f978) main_cset6_slider_pane_t9_ParamLimits

0x8800,	// (0x0007f978) main_cset6_slider_pane_t9

0x8824,	// (0x0007f99c) main_cset6_slider_pane_t10_ParamLimits

0x8824,	// (0x0007f99c) main_cset6_slider_pane_t10

0x8848,	// (0x0007f9c0) main_cset6_slider_pane_t11_ParamLimits

0x8848,	// (0x0007f9c0) main_cset6_slider_pane_t11

0xd889,	// (0x00084a01) main_cset6_slider_pane_t14_ParamLimits

0xd889,	// (0x00084a01) main_cset6_slider_pane_t14

0xd8c2,	// (0x00084a3a) main_cset6_slider_pane_t15_ParamLimits

0xd8c2,	// (0x00084a3a) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x00086c92) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x00086c92) main_cset6_slider_pane_t

0xd8fb,	// (0x00084a73) cset_slider_pane_g1_copy1

0xd904,	// (0x00084a7c) cset_slider_pane_g2_copy1

0xd90d,	// (0x00084a85) cset_slider_pane_g3_copy1

0xaa67,	// (0x00081bdf) bg_popup_sub_pane_cp011_copy1

0xd91f,	// (0x00084a97) main_cset_text_pane_g1_copy1

0xd100,	// (0x00084278) main_cset_text_pane_t1_copy1

0xd10e,	// (0x00084286) main_cset_text_pane_t2_copy1

0xd11c,	// (0x00084294) main_cset_text_pane_t3_copy1

0xd12a,	// (0x000842a2) main_cset_text_pane_t4_copy1

0xd138,	// (0x000842b0) main_cset_text_pane_t5_copy1

0xd927,	// (0x00084a9f) main_cset_text_pane_t6_copy1

0xd935,	// (0x00084aad) main_cset_text_pane_t7_copy1

0x8605,	// (0x0007f77d) main_cset_text2_pane_t1_copy1

0xaae4,	// (0x00081c5c) main_ncimui_pane

0x57b8,	// (0x0007c930) popup_query_ncimui_window_ParamLimits

0x57b8,	// (0x0007c930) popup_query_ncimui_window

0xc587,	// (0x000836ff) field_cale_ev2_pane_g4_ParamLimits

0xc587,	// (0x000836ff) field_cale_ev2_pane_g4

0x6ad6,	// (0x0007dc4e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ad6,	// (0x0007dc4e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x00086976) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x00086976) cell_video_dialer_keypad_pane_g

0x6aee,	// (0x0007dc66) cell_video_dialer_keypad_pane_t1

0xaa67,	// (0x00081bdf) bg_popup_window_pane_cp012

0xbd7a,	// (0x00082ef2) heading_pane_cp06

0xd961,	// (0x00084ad9) ncim_query_content_pane

0xaa67,	// (0x00081bdf) bg_popup_heading_pane_cp01

0xd969,	// (0x00084ae1) ncim_heading_pane_t1

0xd977,	// (0x00084aef) ncim_indicator_popup_pane

0xd989,	// (0x00084b01) ncim_query_button_pane

0xd99f,	// (0x00084b17) ncim_query_content_pane_t1

0xd9b1,	// (0x00084b29) ncim_query_content_pane_t2

0x0005,

0xfb5e,	// (0x00086cd6) ncim_query_content_pane_t

0xd9eb,	// (0x00084b63) ncim_query_list_pane

0xd9fd,	// (0x00084b75) ncim_query_popup_pane

0xd977,	// (0x00084aef) ncim_indicator_popup_pane_ParamLimits

0x8997,	// (0x0007fb0f) ncim_query_content_pane_g1_ParamLimits

0x8997,	// (0x0007fb0f) ncim_query_content_pane_g1

0xd99f,	// (0x00084b17) ncim_query_content_pane_t1_ParamLimits

0xd9b1,	// (0x00084b29) ncim_query_content_pane_t2_ParamLimits

0x89a3,	// (0x0007fb1b) ncim_query_content_pane_t3_ParamLimits

0x89a3,	// (0x0007fb1b) ncim_query_content_pane_t3

0x89cb,	// (0x0007fb43) ncim_query_content_pane_t4_ParamLimits

0x89cb,	// (0x0007fb43) ncim_query_content_pane_t4

0x89f3,	// (0x0007fb6b) ncim_query_content_pane_t5_ParamLimits

0x89f3,	// (0x0007fb6b) ncim_query_content_pane_t5

0xd9c3,	// (0x00084b3b) ncim_query_content_pane_t6_ParamLimits

0xd9c3,	// (0x00084b3b) ncim_query_content_pane_t6

0xfb5e,	// (0x00086cd6) ncim_query_content_pane_t_ParamLimits

0xd9eb,	// (0x00084b63) ncim_query_list_pane_ParamLimits

0xd9fd,	// (0x00084b75) ncim_query_popup_pane_ParamLimits

0xda11,	// (0x00084b89) wait_bar_pane_cp04

0xaa67,	// (0x00081bdf) input_focus_pane_cp011

0xda19,	// (0x00084b91) ncim_query_popup_pane_t1

0xda27,	// (0x00084b9f) ncim_list_query_list_pane_ParamLimits

0xda27,	// (0x00084b9f) ncim_list_query_list_pane

0xaa67,	// (0x00081bdf) bg_button_pane_cp027

0xda3a,	// (0x00084bb2) ncim_query_button_pane_g1

0xaa67,	// (0x00081bdf) list_highlight_pane_cp012

0xda44,	// (0x00084bbc) ncim_list_query_list_pane_g1

0xda4c,	// (0x00084bc4) ncim_list_query_list_pane_t1

0xea45,	// (0x00085bbd) cam4_indicators_pane_g3_ParamLimits

0xea45,	// (0x00085bbd) cam4_indicators_pane_g3

0xeac8,	// (0x00085c40) vid4_indicators_pane_g5_ParamLimits

0xeac8,	// (0x00085c40) vid4_indicators_pane_g5

0xeb7f,	// (0x00085cf7) vid4_progress_pane_g5_ParamLimits

0xeb7f,	// (0x00085cf7) vid4_progress_pane_g5

0x8882,	// (0x0007f9fa) main_ncimui_pane_g1

0x88eb,	// (0x0007fa63) ncimui_group_query_pane_ParamLimits

0x88eb,	// (0x0007fa63) ncimui_group_query_pane

0x8933,	// (0x0007faab) ncimui_list_pane_ParamLimits

0x8933,	// (0x0007faab) ncimui_list_pane

0x895a,	// (0x0007fad2) ncimui_text_pane_ParamLimits

0x895a,	// (0x0007fad2) ncimui_text_pane

0x8a1b,	// (0x0007fb93) ncimui_text_pane_t1_ParamLimits

0x8a1b,	// (0x0007fb93) ncimui_text_pane_t1

0xda5a,	// (0x00084bd2) ncimui_list_single_graphic_pane_ParamLimits

0xda5a,	// (0x00084bd2) ncimui_list_single_graphic_pane

0x8a39,	// (0x0007fbb1) ncimui_query_pane_ParamLimits

0x8a39,	// (0x0007fbb1) ncimui_query_pane

0xaa67,	// (0x00081bdf) list_highlight_pane_cp013

0xda6a,	// (0x00084be2) ncim_list_query_list_pane_t1_copy1

0xda44,	// (0x00084bbc) ncim_list_single_graphic_pane_g1

0x8a4c,	// (0x0007fbc4) ncim_query_button_pane_cp01

0x8a58,	// (0x0007fbd0) ncim_query_entry_pane_ParamLimits

0x8a58,	// (0x0007fbd0) ncim_query_entry_pane

0x8a6b,	// (0x0007fbe3) ncimui_query_pane_g1

0x8a77,	// (0x0007fbef) ncimui_query_pane_t1_ParamLimits

0x8a77,	// (0x0007fbef) ncimui_query_pane_t1

0xaae4,	// (0x00081c5c) input_focus_pane_cp012

0xda78,	// (0x00084bf0) ncim_query_entry_pane_t1

0xb2a4,	// (0x0008241c) main_im_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_mobtv_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_mobtv_pane

0x8714,	// (0x0007f88c) main_cset6_slider_pane_g18_ParamLimits

0x8714,	// (0x0007f88c) main_cset6_slider_pane_g18

0x8720,	// (0x0007f898) main_cset6_slider_pane_g19_ParamLimits

0x8720,	// (0x0007f898) main_cset6_slider_pane_g19

0xb22c,	// (0x000823a4) bg_main_mobtv_pane_ParamLimits

0xb22c,	// (0x000823a4) bg_main_mobtv_pane

0x8a90,	// (0x0007fc08) main_mobtv_info_pane

0x8a9b,	// (0x0007fc13) main_mobtv_loading_pane_ParamLimits

0x8a9b,	// (0x0007fc13) main_mobtv_loading_pane

0xda8a,	// (0x00084c02) main_mobtv_pg_channel_list_pane

0xda94,	// (0x00084c0c) main_mobtv_pg_hdr_pane

0x8aa8,	// (0x0007fc20) main_mobtv_programe_curr_pane_ParamLimits

0x8aa8,	// (0x0007fc20) main_mobtv_programe_curr_pane

0x8ab5,	// (0x0007fc2d) main_mobtv_programe_next_pane_ParamLimits

0x8ab5,	// (0x0007fc2d) main_mobtv_programe_next_pane

0xda9d,	// (0x00084c15) popup_mobtv_noti_window

0x1ebb,	// (0x00079033) main_tv_pg_hdr_pane_g1

0xdaa7,	// (0x00084c1f) main_tv_pg_hdr_pane_g2

0xdaaf,	// (0x00084c27) main_tv_pg_hdr_pane_g3

0xdab7,	// (0x00084c2f) main_tv_pg_hdr_pane_g4

0xdabf,	// (0x00084c37) main_tv_pg_hdr_pane_g5

0xdac9,	// (0x00084c41) main_tv_pg_hdr_pane_g6

0xdad3,	// (0x00084c4b) main_tv_pg_hdr_pane_g7

0xdadd,	// (0x00084c55) main_tv_pg_hdr_pane_g8

0xdae7,	// (0x00084c5f) main_tv_pg_hdr_pane_g9

0xdaf1,	// (0x00084c69) main_tv_pg_hdr_pane_g10

0xdafb,	// (0x00084c73) main_tv_pg_hdr_pane_g11

0x000a,

0xfb6b,	// (0x00086ce3) main_tv_pg_hdr_pane_g

0xdb05,	// (0x00084c7d) main_tv_pg_hdr_pane_t1

0xdb13,	// (0x00084c8b) main_tv_pg_hdr_pane_t2

0xdb21,	// (0x00084c99) main_tv_pg_hdr_pane_t3

0xdb31,	// (0x00084ca9) main_tv_pg_hdr_pane_t4

0xdb41,	// (0x00084cb9) main_tv_pg_hdr_pane_t5

0x0004,

0xfb82,	// (0x00086cfa) main_tv_pg_hdr_pane_t

0xdb51,	// (0x00084cc9) single_mobtv_pg_channel_pane_ParamLimits

0xdb51,	// (0x00084cc9) single_mobtv_pg_channel_pane

0xdb63,	// (0x00084cdb) single_mobtv_pg_channel_table_pane

0xdb6c,	// (0x00084ce4) single_mobtv_pg_channel_thumb_pane

0xdb75,	// (0x00084ced) single_tv_pg_channel_pane_g1

0xdb7e,	// (0x00084cf6) single_tv_pg_channel_pane_g2

0x0001,

0xfb8d,	// (0x00086d05) single_tv_pg_channel_pane_g

0xb210,	// (0x00082388) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb210,	// (0x00082388) bg_single_mobtv_pg_channel_thumb_pane

0xdb87,	// (0x00084cff) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdb87,	// (0x00084cff) single_mobtv_pg_channel_thumb_pane_g1

0xdb95,	// (0x00084d0d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdb95,	// (0x00084d0d) single_mobtv_pg_channel_thumb_pane_g2

0xdba1,	// (0x00084d19) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdba1,	// (0x00084d19) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb92,	// (0x00086d0a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb92,	// (0x00086d0a) single_mobtv_pg_channel_thumb_pane_g

0xdbad,	// (0x00084d25) single_mobtv_pg_channel_thumb_pane_t1

0xdbbb,	// (0x00084d33) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb99,	// (0x00086d11) single_mobtv_pg_channel_thumb_pane_t

0x1ebb,	// (0x00079033) bg_single_mobtv_pg_channel_table_pane_g1

0x1ebb,	// (0x00079033) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00086536) bg_single_mobtv_pg_channel_table_pane_g

0xdbc9,	// (0x00084d41) single_mobtv_pg_channel_table_pane_t1

0xdbd7,	// (0x00084d4f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9e,	// (0x00086d16) single_mobtv_pg_channel_table_pane_t

0x8aca,	// (0x0007fc42) main_mobtv_info_pane_g1_ParamLimits

0x8aca,	// (0x0007fc42) main_mobtv_info_pane_g1

0x8ae8,	// (0x0007fc60) main_mobtv_info_pane_t1_ParamLimits

0x8ae8,	// (0x0007fc60) main_mobtv_info_pane_t1

0x8b60,	// (0x0007fcd8) main_mobtv_info_pane_t2_ParamLimits

0x8b60,	// (0x0007fcd8) main_mobtv_info_pane_t2

0x0002,

0xfba8,	// (0x00086d20) main_mobtv_info_pane_t_ParamLimits

0xfba8,	// (0x00086d20) main_mobtv_info_pane_t

0x8bf1,	// (0x0007fd69) wait_bar_pane_cp05

0x8c03,	// (0x0007fd7b) main_mobtv_loading_pane_g1_ParamLimits

0x8c03,	// (0x0007fd7b) main_mobtv_loading_pane_g1

0x8c14,	// (0x0007fd8c) main_mobtv_loading_pane_g2_ParamLimits

0x8c14,	// (0x0007fd8c) main_mobtv_loading_pane_g2

0x8c20,	// (0x0007fd98) main_mobtv_loading_pane_g3_ParamLimits

0x8c20,	// (0x0007fd98) main_mobtv_loading_pane_g3

0x0002,

0xfbaf,	// (0x00086d27) main_mobtv_loading_pane_g_ParamLimits

0xfbaf,	// (0x00086d27) main_mobtv_loading_pane_g

0xdbe5,	// (0x00084d5d) main_mobtv_loading_pane_t1_ParamLimits

0xdbe5,	// (0x00084d5d) main_mobtv_loading_pane_t1

0xdbfd,	// (0x00084d75) main_mobtv_loading_pane_t2_ParamLimits

0xdbfd,	// (0x00084d75) main_mobtv_loading_pane_t2

0x0001,

0xfbb6,	// (0x00086d2e) main_mobtv_loading_pane_t_ParamLimits

0xfbb6,	// (0x00086d2e) main_mobtv_loading_pane_t

0x8c33,	// (0x0007fdab) wait_bar_pane_cp06_ParamLimits

0x8c33,	// (0x0007fdab) wait_bar_pane_cp06

0xdc21,	// (0x00084d99) main_mobtv_programe_curr_pane_t1

0xdc2f,	// (0x00084da7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbbb,	// (0x00086d33) main_mobtv_programe_curr_pane_t

0xdc3d,	// (0x00084db5) main_mobtv_programe_next_pane_t1

0xdc4b,	// (0x00084dc3) main_mobtv_programe_next_pane_t2

0xdc59,	// (0x00084dd1) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc0,	// (0x00086d38) main_mobtv_programe_next_pane_t

0xaa67,	// (0x00081bdf) bg_popup_mobtv_noti_window_pane

0xdc67,	// (0x00084ddf) popup_mobtv_noti_window_g1

0xdc6f,	// (0x00084de7) popup_mobtv_noti_window_t1

0xdc7d,	// (0x00084df5) popup_mobtv_noti_window_t2

0x0001,

0xfbc7,	// (0x00086d3f) popup_mobtv_noti_window_t

0x1ebb,	// (0x00079033) bg_popup_mobtv_noti_window_pane_g1

0xaa67,	// (0x00081bdf) sc_clock_pane

0xaa67,	// (0x00081bdf) main_fs_bigclock_pane

0x8376,	// (0x0007f4ee) blid2_tripm_pane_t4_ParamLimits

0x8376,	// (0x0007f4ee) blid2_tripm_pane_t4

0x8c42,	// (0x0007fdba) sc_clock_pane_g1_ParamLimits

0x8c42,	// (0x0007fdba) sc_clock_pane_g1

0x8c54,	// (0x0007fdcc) sc_clock_pane_t1_ParamLimits

0x8c54,	// (0x0007fdcc) sc_clock_pane_t1

0x8c78,	// (0x0007fdf0) sc_clock_pane_t2_ParamLimits

0x8c78,	// (0x0007fdf0) sc_clock_pane_t2

0x8c90,	// (0x0007fe08) sc_clock_pane_t3_ParamLimits

0x8c90,	// (0x0007fe08) sc_clock_pane_t3

0x0004,

0xfbcc,	// (0x00086d44) sc_clock_pane_t_ParamLimits

0xfbcc,	// (0x00086d44) sc_clock_pane_t

0x9815,	// (0x0008098d) main_fs_bigclock_indicator_pane_ParamLimits

0x9815,	// (0x0008098d) main_fs_bigclock_indicator_pane

0x8d56,	// (0x0007fece) main_fs_bigclock_pane_g1_ParamLimits

0x8d56,	// (0x0007fece) main_fs_bigclock_pane_g1

0x9821,	// (0x00080999) main_fs_bigclock_pane_t1_ParamLimits

0x9821,	// (0x00080999) main_fs_bigclock_pane_t1

0x9833,	// (0x000809ab) main_fs_bigclock_pane_t2_ParamLimits

0x9833,	// (0x000809ab) main_fs_bigclock_pane_t2

0x9847,	// (0x000809bf) main_fs_bigclock_pane_t3_ParamLimits

0x9847,	// (0x000809bf) main_fs_bigclock_pane_t3

0x0002,

0xfd5d,	// (0x00086ed5) main_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x00086ed5) main_fs_bigclock_pane_t

0xef78,	// (0x000860f0) main_fs_bigclock_indicator_pane_g1

0xd991,	// (0x00084b09) ncim_query_content_pane_g2_ParamLimits

0xd991,	// (0x00084b09) ncim_query_content_pane_g2

0x0001,

0xfb59,	// (0x00086cd1) ncim_query_content_pane_g_ParamLimits

0xfb59,	// (0x00086cd1) ncim_query_content_pane_g

0x8ca7,	// (0x0007fe1f) sc_clock_pane_t4_ParamLimits

0x8ca7,	// (0x0007fe1f) sc_clock_pane_t4

0xaae4,	// (0x00081c5c) main_radioblah_pane

0xe9b8,	// (0x00085b30) cell_call4_button_pane_t1_copy1_ParamLimits

0xe9b8,	// (0x00085b30) cell_call4_button_pane_t1_copy1

0x889a,	// (0x0007fa12) main_ncimui_pane_t1_ParamLimits

0x889a,	// (0x0007fa12) main_ncimui_pane_t1

0x88b4,	// (0x0007fa2c) main_ncimui_pane_t2_ParamLimits

0x88b4,	// (0x0007fa2c) main_ncimui_pane_t2

0x0002,

0xfb52,	// (0x00086cca) main_ncimui_pane_t_ParamLimits

0xfb52,	// (0x00086cca) main_ncimui_pane_t

0xdc8b,	// (0x00084e03) main_radioblah_anim_pane_ParamLimits

0xdc8b,	// (0x00084e03) main_radioblah_anim_pane

0xdc9c,	// (0x00084e14) main_radioblah_info_pane_ParamLimits

0xdc9c,	// (0x00084e14) main_radioblah_info_pane

0xdcb0,	// (0x00084e28) main_radioblah_pane_t1_ParamLimits

0xdcb0,	// (0x00084e28) main_radioblah_pane_t1

0xdccc,	// (0x00084e44) main_radioblah_pane_t2_ParamLimits

0xdccc,	// (0x00084e44) main_radioblah_pane_t2

0x0003,

0xfbed,	// (0x00086d65) main_radioblah_pane_t_ParamLimits

0xfbed,	// (0x00086d65) main_radioblah_pane_t

0x8eff,	// (0x00080077) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8eff,	// (0x00080077) main_radioblah_rocker_ctrl_pane

0xdd14,	// (0x00084e8c) main_radioblah_info_pane_t1_ParamLimits

0xdd14,	// (0x00084e8c) main_radioblah_info_pane_t1

0x8f57,	// (0x000800cf) main_radioblah_info_pane_t2_ParamLimits

0x8f57,	// (0x000800cf) main_radioblah_info_pane_t2

0x0003,

0xfbf6,	// (0x00086d6e) main_radioblah_info_pane_t_ParamLimits

0xfbf6,	// (0x00086d6e) main_radioblah_info_pane_t

0x1ebb,	// (0x00079033) main_radioblah_rocker_ctrl_pane_g1

0x9007,	// (0x0008017f) main_radioblah_rocker_ctrl_pane_g2

0x900f,	// (0x00080187) main_radioblah_rocker_ctrl_pane_g3

0x9017,	// (0x0008018f) main_radioblah_rocker_ctrl_pane_g4

0x901f,	// (0x00080197) main_radioblah_rocker_ctrl_pane_g5

0x9027,	// (0x0008019f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbff,	// (0x00086d77) main_radioblah_rocker_ctrl_pane_g

0x8605,	// (0x0007f77d) main_cset_text2_pane_t1_copy1_ParamLimits

0xea16,	// (0x00085b8e) cam4_image_uncrop_qvga_pane

0xea6b,	// (0x00085be3) vid4_image_uncrop_qcif_pane

0xebca,	// (0x00085d42) cam6_image_uncrop_qvga_pane_ParamLimits

0xebca,	// (0x00085d42) cam6_image_uncrop_qvga_pane

0xd670,	// (0x000847e8) vid6_image_uncrop_qcif_pane_ParamLimits

0xd670,	// (0x000847e8) vid6_image_uncrop_qcif_pane

0xaa67,	// (0x00081bdf) bg_popup_preview_window_pane_cp03

0xd943,	// (0x00084abb) list_cset_text2_pane

0xd94b,	// (0x00084ac3) main_cset6_text2_pane_g1

0xd953,	// (0x00084acb) main_cset6_text2_pane_t1

0xdd4e,	// (0x00084ec6) list_cset_text2_pane_t1_ParamLimits

0xdd4e,	// (0x00084ec6) list_cset_text2_pane_t1

0xaae4,	// (0x00081c5c) main_radioblah_pane_ParamLimits

0x8bdd,	// (0x0007fd55) main_mobtv_info_pane_t3_ParamLimits

0x8bdd,	// (0x0007fd55) main_mobtv_info_pane_t3

0x8eed,	// (0x00080065) main_radioblah_pane_g1

0x8f27,	// (0x0008009f) main_radioblah_info_pane_g1

0x8fac,	// (0x00080124) main_radioblah_info_pane_t3_ParamLimits

0x8fac,	// (0x00080124) main_radioblah_info_pane_t3

0x327d,	// (0x0007a3f5) highlight_cell_cale_month_pane_ParamLimits

0x327d,	// (0x0007a3f5) highlight_cell_cale_month_pane

0xaa67,	// (0x00081bdf) main_phob_fisheye_pane

0xc5fc,	// (0x00083774) scroll_pane_cp0031_ParamLimits

0xc5fc,	// (0x00083774) scroll_pane_cp0031

0xd782,	// (0x000848fa) wait_bar_pane_cp08_ParamLimits

0x868e,	// (0x0007f806) cset_list_set_pane_copy1_ParamLimits

0xdd68,	// (0x00084ee0) highlight_cell_cale_month_pane_g1

0x902f,	// (0x000801a7) highlight_cell_cale_month_pane_t1

0xd3d4,	// (0x0008454c) list_gen_pane_cp01

0xcf92,	// (0x0008410a) scroll_pane_01

0x903d,	// (0x000801b5) list_single_double_fisheye_pane

0x0b3b,	// (0x00077cb3) list_double_fisheye_pane_g1_ParamLimits

0x0b3b,	// (0x00077cb3) list_double_fisheye_pane_g1

0x0b47,	// (0x00077cbf) list_double_fisheye_pane_g2_ParamLimits

0x0b47,	// (0x00077cbf) list_double_fisheye_pane_g2

0x9046,	// (0x000801be) list_double_fisheye_pane_g3_ParamLimits

0x9046,	// (0x000801be) list_double_fisheye_pane_g3

0x0004,

0xfc0c,	// (0x00086d84) list_double_fisheye_pane_g_ParamLimits

0xfc0c,	// (0x00086d84) list_double_fisheye_pane_g

0x0b78,	// (0x00077cf0) list_double_fisheye_pane_t1_ParamLimits

0x0b78,	// (0x00077cf0) list_double_fisheye_pane_t1

0x0b93,	// (0x00077d0b) list_double_fisheye_pane_t2_ParamLimits

0x0b93,	// (0x00077d0b) list_double_fisheye_pane_t2

0x0001,

0xfc17,	// (0x00086d8f) list_double_fisheye_pane_t_ParamLimits

0xfc17,	// (0x00086d8f) list_double_fisheye_pane_t

0xaa67,	// (0x00081bdf) main_call5_pane

0x8cd2,	// (0x0007fe4a) sc_swipe_pane_ParamLimits

0x8cd2,	// (0x0007fe4a) sc_swipe_pane

0x9065,	// (0x000801dd) call5_image_pane_ParamLimits

0x9065,	// (0x000801dd) call5_image_pane

0x9082,	// (0x000801fa) call5_swipe_1_pane_ParamLimits

0x9082,	// (0x000801fa) call5_swipe_1_pane

0x9095,	// (0x0008020d) call5_swipe_2_pane_ParamLimits

0x9095,	// (0x0008020d) call5_swipe_2_pane

0x90c0,	// (0x00080238) popup_call5_audio_first_window_ParamLimits

0x90c0,	// (0x00080238) popup_call5_audio_first_window

0xb210,	// (0x00082388) call5_swipe_1_pane_g1_ParamLimits

0xb210,	// (0x00082388) call5_swipe_1_pane_g1

0xdd70,	// (0x00084ee8) call5_swipe_1_pane_g2_ParamLimits

0xdd70,	// (0x00084ee8) call5_swipe_1_pane_g2

0x0001,

0xfc1c,	// (0x00086d94) call5_swipe_1_pane_g_ParamLimits

0xfc1c,	// (0x00086d94) call5_swipe_1_pane_g

0xdd7c,	// (0x00084ef4) call5_swipe_1_pane_t1_ParamLimits

0xdd7c,	// (0x00084ef4) call5_swipe_1_pane_t1

0xb210,	// (0x00082388) call5_swipe_2_pane_g1_ParamLimits

0xb210,	// (0x00082388) call5_swipe_2_pane_g1

0xdd91,	// (0x00084f09) call5_swipe_2_pane_g2_ParamLimits

0xdd91,	// (0x00084f09) call5_swipe_2_pane_g2

0x0001,

0xfc21,	// (0x00086d99) call5_swipe_2_pane_g_ParamLimits

0xfc21,	// (0x00086d99) call5_swipe_2_pane_g

0xdd9d,	// (0x00084f15) call5_swipe_2_pane_t1_ParamLimits

0xdd9d,	// (0x00084f15) call5_swipe_2_pane_t1

0xddb2,	// (0x00084f2a) sc_swipe_pane_g1_ParamLimits

0xddb2,	// (0x00084f2a) sc_swipe_pane_g1

0xddbf,	// (0x00084f37) sc_swipe_pane_g2_ParamLimits

0xddbf,	// (0x00084f37) sc_swipe_pane_g2

0x0001,

0xfc26,	// (0x00086d9e) sc_swipe_pane_g_ParamLimits

0xfc26,	// (0x00086d9e) sc_swipe_pane_g

0xddcb,	// (0x00084f43) sc_swipe_pane_t1_ParamLimits

0xddcb,	// (0x00084f43) sc_swipe_pane_t1

0xaa67,	// (0x00081bdf) main_cmail_launcher_pane

0x90d5,	// (0x0008024d) aid_size_cell_cmail_l_ParamLimits

0x90d5,	// (0x0008024d) aid_size_cell_cmail_l

0x90eb,	// (0x00080263) grid_cmail_l_pane_ParamLimits

0x90eb,	// (0x00080263) grid_cmail_l_pane

0x9105,	// (0x0008027d) cell_cmail_l_pane_ParamLimits

0x9105,	// (0x0008027d) cell_cmail_l_pane

0x912a,	// (0x000802a2) cell_cmail_l_pane_g1_ParamLimits

0x912a,	// (0x000802a2) cell_cmail_l_pane_g1

0x9136,	// (0x000802ae) cell_cmail_l_pane_t1_ParamLimits

0x9136,	// (0x000802ae) cell_cmail_l_pane_t1

0x914c,	// (0x000802c4) cell_cmail_l_pane_t2_ParamLimits

0x914c,	// (0x000802c4) cell_cmail_l_pane_t2

0x0001,

0xfc2b,	// (0x00086da3) cell_cmail_l_pane_t_ParamLimits

0xfc2b,	// (0x00086da3) cell_cmail_l_pane_t

0xaae4,	// (0x00081c5c) grid_highlight_pane_cp018_ParamLimits

0xaae4,	// (0x00081c5c) grid_highlight_pane_cp018

0x1106,	// (0x0007827e) main2_pane_ParamLimits

0x1106,	// (0x0007827e) main2_pane

0xb360,	// (0x000824d8) popup_sp_fs_action_menu_bg_pane_g1

0xb368,	// (0x000824e0) popup_sp_fs_action_menu_bg_pane_g2

0xb370,	// (0x000824e8) popup_sp_fs_action_menu_bg_pane_g3

0xb378,	// (0x000824f0) popup_sp_fs_action_menu_bg_pane_g4

0xb380,	// (0x000824f8) popup_sp_fs_action_menu_bg_pane_g5

0xb388,	// (0x00082500) popup_sp_fs_action_menu_bg_pane_g6

0xb390,	// (0x00082508) popup_sp_fs_action_menu_bg_pane_g7

0xb398,	// (0x00082510) popup_sp_fs_action_menu_bg_pane_g8

0xb3a0,	// (0x00082518) popup_sp_fs_action_menu_bg_pane_g9

0xb3a8,	// (0x00082520) popup_sp_fs_action_menu_bg_pane_g10

0xb3a8,	// (0x00082520) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000862a3) popup_sp_fs_action_menu_bg_pane_g

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g1

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g2

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00086351) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00086351) list_medium_line_x2_t3_g3_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t2

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g3_t

0xb210,	// (0x00082388) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g2_g1

0xb210,	// (0x00082388) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_x2_t3_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t2

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g2_t

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g1

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g2

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g3

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00086364) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00086364) list_medium_line_x2_t4_g4_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t2

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t3

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008636d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008636d) list_medium_line_x2_t4_g4_t

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g1

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g2

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g3

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00086364) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00086364) list_medium_line_x2_t2_g4_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g4_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g4_t

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g1

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g2

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00086351) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00086351) list_medium_line_x2_t2_g3_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g3_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g3_t

0x3625,	// (0x0007a79d) main_sp_fs_list_pane_ParamLimits

0x3625,	// (0x0007a79d) main_sp_fs_list_pane

0x3631,	// (0x0007a7a9) sp_fs_scroll_pane_ParamLimits

0x3631,	// (0x0007a7a9) sp_fs_scroll_pane

0x363d,	// (0x0007a7b5) list_medium_line_x2_t3_t1

0x363d,	// (0x0007a7b5) list_medium_line_x2_t3_t2

0x363d,	// (0x0007a7b5) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0008641a) list_medium_line_x2_t3_t

0x363d,	// (0x0007a7b5) list_medium_line_x3_t4_t1

0x363d,	// (0x0007a7b5) list_medium_line_x3_t4_t2

0x363d,	// (0x0007a7b5) list_medium_line_x3_t4_t3

0x363d,	// (0x0007a7b5) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00086421) list_medium_line_x3_t4_t

0x363d,	// (0x0007a7b5) list_medium_line_x4_t5_t1

0x363d,	// (0x0007a7b5) list_medium_line_x4_t5_t2

0x363d,	// (0x0007a7b5) list_medium_line_x4_t5_t3

0x363d,	// (0x0007a7b5) list_medium_line_x4_t5_t4

0x363d,	// (0x0007a7b5) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0008642a) list_medium_line_x4_t5_t

0xb210,	// (0x00082388) list_medium_line_t4_g4_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t4_g4_g1

0xb210,	// (0x00082388) list_medium_line_t4_g4_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t4_g4_g2

0xb210,	// (0x00082388) list_medium_line_t4_g4_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t4_g4_g3

0xb210,	// (0x00082388) list_medium_line_t4_g4_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00086364) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00086364) list_medium_line_t4_g4_g

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t1

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t2

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t3

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t4_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008636d) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008636d) list_medium_line_t4_g4_t

0x3954,	// (0x0007aacc) chi_dic_find_pane_g1

0x553e,	// (0x0007c6b6) main_tport_pane

0x363d,	// (0x0007a7b5) list_medium_line_plain_t1

0xb210,	// (0x00082388) list_medium_line_t2_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g2_g1

0xb210,	// (0x00082388) list_medium_line_t2_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_t2_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_t2_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_g2_t1

0x1d37,	// (0x00078eaf) list_medium_line_t2_g2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_t2_g2_t

0xd3dd,	// (0x00084555) aid_sp_fs_list_icon_a_sm

0xebb9,	// (0x00085d31) aid_sp_fs_list_icon_d

0xebc1,	// (0x00085d39) aid_sp_fs_text_primary

0xd3e5,	// (0x0008455d) aid_sp_fs_text_secondary

0xaa67,	// (0x00081bdf) list_medium_line

0xaa67,	// (0x00081bdf) list_medium_line_g2

0xaa67,	// (0x00081bdf) list_medium_line_g3

0xaa67,	// (0x00081bdf) list_medium_line_plain

0xaa67,	// (0x00081bdf) list_medium_line_plain_t2

0xaa67,	// (0x00081bdf) list_medium_line_plain_t3

0xaa67,	// (0x00081bdf) list_medium_line_right_icon

0xaa67,	// (0x00081bdf) list_medium_line_right_iconx2

0xaa67,	// (0x00081bdf) list_medium_line_t2

0xaa67,	// (0x00081bdf) list_medium_line_t2_g2

0xaa67,	// (0x00081bdf) list_medium_line_t2_g3

0xaa67,	// (0x00081bdf) list_medium_line_t2_right_icon

0xaa67,	// (0x00081bdf) list_medium_line_t2_right_iconx2

0xaa67,	// (0x00081bdf) list_medium_line_t3

0xaa67,	// (0x00081bdf) list_medium_line_t3_g2

0xaa67,	// (0x00081bdf) list_medium_line_t3_g3

0xaa67,	// (0x00081bdf) list_medium_line_t3_right_iconx2

0xaa67,	// (0x00081bdf) list_medium_line_t4_g4

0xaa67,	// (0x00081bdf) list_medium_line_x2

0xaa67,	// (0x00081bdf) list_medium_line_x2_t2_g2

0xaa67,	// (0x00081bdf) list_medium_line_x2_t2_g3

0xaa67,	// (0x00081bdf) list_medium_line_x2_t2_g4

0xaa67,	// (0x00081bdf) list_medium_line_x2_t3

0xaa67,	// (0x00081bdf) list_medium_line_x2_t3_g2

0xaa67,	// (0x00081bdf) list_medium_line_x2_t3_g3

0xaa67,	// (0x00081bdf) list_medium_line_x2_t3_g4

0xaa67,	// (0x00081bdf) list_medium_line_x2_t4_g2

0xaa67,	// (0x00081bdf) list_medium_line_x2_t4_g4

0xaa67,	// (0x00081bdf) list_medium_line_x3

0xaa67,	// (0x00081bdf) list_medium_line_x3_t4

0xaa67,	// (0x00081bdf) list_medium_line_x3_t4_g4

0xaa67,	// (0x00081bdf) list_medium_line_x4_t4

0xaa67,	// (0x00081bdf) list_medium_line_x4_t4_g7

0xaa67,	// (0x00081bdf) list_medium_line_x4_t5

0x0ae6,	// (0x00077c5e) list_single_fs_dyc_pane_ParamLimits

0x0ae6,	// (0x00077c5e) list_single_fs_dyc_pane

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g1

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g2

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g3

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g4

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g5

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x4_t4_g7_g6

0xb21e,	// (0x00082396) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb21e,	// (0x00082396) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb33,	// (0x00086cab) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb33,	// (0x00086cab) list_medium_line_x4_t4_g7_g

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t1

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t2

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x4_t4_g7_t3

0x3ee7,	// (0x0007b05f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3ee7,	// (0x0007b05f) list_medium_line_x4_t4_g7_t4

0x3ee7,	// (0x0007b05f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3ee7,	// (0x0007b05f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb42,	// (0x00086cba) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb42,	// (0x00086cba) list_medium_line_x4_t4_g7_t

0x0b1e,	// (0x00077c96) list_single_dyc_row_pane_ParamLimits

0x0b1e,	// (0x00077c96) list_single_dyc_row_pane

0x9052,	// (0x000801ca) call5_gesture_pane_ParamLimits

0x9052,	// (0x000801ca) call5_gesture_pane

0x90a8,	// (0x00080220) call5_windows_pane_ParamLimits

0x90a8,	// (0x00080220) call5_windows_pane

0x9169,	// (0x000802e1) call5_swipe_1_pane_cp_ParamLimits

0x9169,	// (0x000802e1) call5_swipe_1_pane_cp

0x9175,	// (0x000802ed) call5_swipe_2_pane_cp_ParamLimits

0x9175,	// (0x000802ed) call5_swipe_2_pane_cp

0x1cca,	// (0x00078e42) call5_image_pane_cp

0x9181,	// (0x000802f9) popup_call5_audio_first_window_cp_ParamLimits

0x9181,	// (0x000802f9) popup_call5_audio_first_window_cp

0xddb2,	// (0x00084f2a) call5_swipe_1_pane_g1_cp_ParamLimits

0xddb2,	// (0x00084f2a) call5_swipe_1_pane_g1_cp

0xdde0,	// (0x00084f58) call5_swipe_1_pane_g2_cp

0xddcb,	// (0x00084f43) call5_swipe_1_pane_t1_cp_ParamLimits

0xddcb,	// (0x00084f43) call5_swipe_1_pane_t1_cp

0xddb2,	// (0x00084f2a) call5_swipe_2_pane_g1_cp_ParamLimits

0xddb2,	// (0x00084f2a) call5_swipe_2_pane_g1_cp

0xdde8,	// (0x00084f60) call5_swipe_2_pane_g2_cp

0xddf0,	// (0x00084f68) call5_swipe_2_pane_t1_cp_ParamLimits

0xddf0,	// (0x00084f68) call5_swipe_2_pane_t1_cp

0xaae4,	// (0x00081c5c) main_sp_fs_email_pane

0xd075,	// (0x000841ed) main_sp_fs_listscroll_pane_te

0x0bb5,	// (0x00077d2d) popup_sp_fs_action_menu_pane_ParamLimits

0x0bb5,	// (0x00077d2d) popup_sp_fs_action_menu_pane

0x1ebb,	// (0x00079033) bg_sp_fs_ctrlbar_pane_g1

0xde05,	// (0x00084f7d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde0e,	// (0x00084f86) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde17,	// (0x00084f8f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1ebb,	// (0x00079033) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc30,	// (0x00086da8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbfac,	// (0x00083124) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbfac,	// (0x00083124) bg_sp_fs_ctrlbar_ddmenu_pane

0xde20,	// (0x00084f98) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde20,	// (0x00084f98) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde2c,	// (0x00084fa4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde2c,	// (0x00084fa4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc39,	// (0x00086db1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc39,	// (0x00086db1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde38,	// (0x00084fb0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde38,	// (0x00084fb0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1ebb,	// (0x00079033) list_medium_line_t2_right_icon_g1

0x363d,	// (0x0007a7b5) list_medium_line_t2_right_icon_t1

0x363d,	// (0x0007a7b5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3e,	// (0x00086db6) list_medium_line_t2_right_icon_t

0x3efb,	// (0x0007b073) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3efb,	// (0x0007b073) bg_sp_fs_ctrlbar_pane

0x91dc,	// (0x00080354) main_sp_fs_ctrlbar_button_pane_cp01

0x91e6,	// (0x0008035e) main_sp_fs_ctrlbar_ddmenu_pane

0xde8c,	// (0x00085004) main_sp_fs_ctrlbar_pane_g1

0xde98,	// (0x00085010) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc43,	// (0x00086dbb) main_sp_fs_ctrlbar_pane_g

0x9224,	// (0x0008039c) main_sp_fs_ctrlbar_pane_t1

0x9263,	// (0x000803db) main_sp_fs_ctrlbar_pane

0x9287,	// (0x000803ff) main_sp_fs_listscroll_pane_te_cp01

0x0bfd,	// (0x00077d75) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0bfd,	// (0x00077d75) popup_sp_fs_action_menu_pane_cp01

0xaae4,	// (0x00081c5c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaae4,	// (0x00081c5c) bg_sp_fs_highlight_list_pane_cp01

0xdebf,	// (0x00085037) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdebf,	// (0x00085037) sp_fs_action_menu_list_gene_pane_g1

0xdece,	// (0x00085046) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdece,	// (0x00085046) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc51,	// (0x00086dc9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc51,	// (0x00086dc9) sp_fs_action_menu_list_gene_pane_g

0xdedb,	// (0x00085053) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdedb,	// (0x00085053) sp_fs_action_menu_list_gene_pane_t1

0xdef3,	// (0x0008506b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdef3,	// (0x0008506b) sp_fs_action_menu_list_gene_pane

0xdf16,	// (0x0008508e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf16,	// (0x0008508e) popup_sp_fs_action_menu_bg_pane

0xdf24,	// (0x0008509c) sp_fs_action_menu_list_pane_ParamLimits

0xdf24,	// (0x0008509c) sp_fs_action_menu_list_pane

0x0c22,	// (0x00077d9a) sp_fs_scroll_pane_cp01_ParamLimits

0x0c22,	// (0x00077d9a) sp_fs_scroll_pane_cp01

0x363d,	// (0x0007a7b5) list_medium_line_plain_t2_t1

0x363d,	// (0x0007a7b5) list_medium_line_plain_t2_t2

0x0001,

0xfc3e,	// (0x00086db6) list_medium_line_plain_t2_t

0x363d,	// (0x0007a7b5) list_medium_line_plain_t3_t1

0x363d,	// (0x0007a7b5) list_medium_line_plain_t3_t2

0x363d,	// (0x0007a7b5) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0008641a) list_medium_line_plain_t3_t

0xb210,	// (0x00082388) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g2_g1

0xb210,	// (0x00082388) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_x2_t2_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g2_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_x2_t2_g2_t

0xb210,	// (0x00082388) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g2_g1

0xb210,	// (0x00082388) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_x2_t4_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t2

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t3

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0008636d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0008636d) list_medium_line_x2_t4_g2_t

0x1ebb,	// (0x00079033) list_medium_line_t3_right_iconx2_g1

0x1ebb,	// (0x00079033) list_medium_line_t3_right_iconx2_g2

0x1ebb,	// (0x00079033) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0008653b) list_medium_line_t3_right_iconx2_g

0x363d,	// (0x0007a7b5) list_medium_line_t3_right_iconx2_t1

0x363d,	// (0x0007a7b5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3e,	// (0x00086db6) list_medium_line_t3_right_iconx2_t

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g1

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g2

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g3

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00086364) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00086364) list_medium_line_x3_t4_g4_g

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t1

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t2

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t3

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008636d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008636d) list_medium_line_x3_t4_g4_t

0x0c48,	// (0x00077dc0) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c48,	// (0x00077dc0) list_single_dyc_row_text_pane_t1

0x0c91,	// (0x00077e09) list_single_dyc_row_text_pane_t2_ParamLimits

0x0c91,	// (0x00077e09) list_single_dyc_row_text_pane_t2

0xdf48,	// (0x000850c0) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf48,	// (0x000850c0) list_single_dyc_row_text_pane_t3

0x0005,

0xfc56,	// (0x00086dce) list_single_dyc_row_text_pane_t_ParamLimits

0xfc56,	// (0x00086dce) list_single_dyc_row_text_pane_t

0xdf6c,	// (0x000850e4) list_single_dyc_row_pane_g1_ParamLimits

0xdf6c,	// (0x000850e4) list_single_dyc_row_pane_g1

0xdf78,	// (0x000850f0) list_single_dyc_row_pane_g2_ParamLimits

0xdf78,	// (0x000850f0) list_single_dyc_row_pane_g2

0xdf84,	// (0x000850fc) list_single_dyc_row_pane_g3_ParamLimits

0xdf84,	// (0x000850fc) list_single_dyc_row_pane_g3

0xdf90,	// (0x00085108) list_single_dyc_row_pane_g4_ParamLimits

0xdf90,	// (0x00085108) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x00086ddb) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x00086ddb) list_single_dyc_row_pane_g

0xdf9c,	// (0x00085114) list_single_dyc_row_text_pane_ParamLimits

0xdf9c,	// (0x00085114) list_single_dyc_row_text_pane

0xaa67,	// (0x00081bdf) bg_sp_fs_scroll_pane

0xdfbb,	// (0x00085133) thumb_sp_fs_scroll_pane

0xb210,	// (0x00082388) list_medium_line_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g1

0x1d37,	// (0x00078eaf) list_medium_line_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t1

0xb210,	// (0x00082388) list_medium_line_x2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_g1

0xb210,	// (0x00082388) list_medium_line_x2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_x2_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t1

0xb210,	// (0x00082388) list_medium_line_x3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x3_g1

0xdfc4,	// (0x0008513c) list_medium_line_x3_g2_ParamLimits

0xdfc4,	// (0x0008513c) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x00086de4) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x00086de4) list_medium_line_x3_g

0xdfd2,	// (0x0008514a) list_medium_line_x3_t1_ParamLimits

0xdfd2,	// (0x0008514a) list_medium_line_x3_t1

0xdfe6,	// (0x0008515e) thumb_sp_fs_scroll_pane_g1

0xdfef,	// (0x00085167) thumb_sp_fs_scroll_pane_g2

0xdff8,	// (0x00085170) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00086de9) thumb_sp_fs_scroll_pane_g

0xdfe6,	// (0x0008515e) bg_sp_fs_scroll_pane_g1

0xdfef,	// (0x00085167) bg_sp_fs_scroll_pane_g2

0xdff8,	// (0x00085170) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x00086de9) bg_sp_fs_scroll_pane_g

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g1

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g2

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g3

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb210,	// (0x00082388) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00086364) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00086364) list_medium_line_x2_t3_g4_g

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t1

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t2

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_x2_t3_g4_t

0xb210,	// (0x00082388) list_medium_line_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g2_g1

0xb210,	// (0x00082388) list_medium_line_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_g2_t1

0xb210,	// (0x00082388) list_medium_line_t3_g2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g2_g1

0xb210,	// (0x00082388) list_medium_line_t3_g2_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0008635f) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0008635f) list_medium_line_t3_g2_g

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t1

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t2

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_t3_g2_t

0x1ebb,	// (0x00079033) list_medium_line_right_icon_g1

0x363d,	// (0x0007a7b5) list_medium_line_right_icon_t1

0xb210,	// (0x00082388) list_medium_line_t2_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g1

0x1d37,	// (0x00078eaf) list_medium_line_t2_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_t1

0x1d37,	// (0x00078eaf) list_medium_line_t2_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_t2_t

0xb210,	// (0x00082388) list_medium_line_t3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g1

0x1d37,	// (0x00078eaf) list_medium_line_t3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_t1

0x1d37,	// (0x00078eaf) list_medium_line_t3_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_t2

0x1d37,	// (0x00078eaf) list_medium_line_t3_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_t3_t

0xb210,	// (0x00082388) list_medium_line_g3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g3_g1

0xb210,	// (0x00082388) list_medium_line_g3_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g3_g2

0xb210,	// (0x00082388) list_medium_line_g3_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00086351) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00086351) list_medium_line_g3_g

0x1d37,	// (0x00078eaf) list_medium_line_g3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_g3_t1

0xb210,	// (0x00082388) list_medium_line_t2_g3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g3_g1

0xb210,	// (0x00082388) list_medium_line_t2_g3_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g3_g2

0xb210,	// (0x00082388) list_medium_line_t2_g3_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00086351) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00086351) list_medium_line_t2_g3_g

0x1d37,	// (0x00078eaf) list_medium_line_t2_g3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_g3_t1

0x1d37,	// (0x00078eaf) list_medium_line_t2_g3_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x00086334) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x00086334) list_medium_line_t2_g3_t

0xb210,	// (0x00082388) list_medium_line_t3_g3_g1_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g3_g1

0xb210,	// (0x00082388) list_medium_line_t3_g3_g2_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g3_g2

0xb210,	// (0x00082388) list_medium_line_t3_g3_g3_ParamLimits

0xb210,	// (0x00082388) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00086351) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00086351) list_medium_line_t3_g3_g

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t1_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t1

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t2_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t2

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t3_ParamLimits

0x1d37,	// (0x00078eaf) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00086358) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00086358) list_medium_line_t3_g3_t

0x1ebb,	// (0x00079033) list_medium_line_right_iconx2_g1

0x1ebb,	// (0x00079033) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00086536) list_medium_line_right_iconx2_g

0x363d,	// (0x0007a7b5) list_medium_line_right_iconx2_t1

0x1ebb,	// (0x00079033) list_medium_line_t2_right_iconx2_g1

0x1ebb,	// (0x00079033) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00086536) list_medium_line_t2_right_iconx2_g

0x363d,	// (0x0007a7b5) list_medium_line_t2_right_iconx2_t1

0x363d,	// (0x0007a7b5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3e,	// (0x00086db6) list_medium_line_t2_right_iconx2_t

0x363d,	// (0x0007a7b5) list_medium_line_x4_t4_t1

0x363d,	// (0x0007a7b5) list_medium_line_x4_t4_t2

0x363d,	// (0x0007a7b5) list_medium_line_x4_t4_t3

0x363d,	// (0x0007a7b5) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00086421) list_medium_line_x4_t4_t

0x92e8,	// (0x00080460) tport_appsw_pane_ParamLimits

0x92e8,	// (0x00080460) tport_appsw_pane

0x92ff,	// (0x00080477) tport_contact_pane_ParamLimits

0x92ff,	// (0x00080477) tport_contact_pane

0x9317,	// (0x0008048f) tport_listscroll_pane_ParamLimits

0x9317,	// (0x0008048f) tport_listscroll_pane

0x932b,	// (0x000804a3) cell_tport_appsw_pane_ParamLimits

0x932b,	// (0x000804a3) cell_tport_appsw_pane

0x3ec5,	// (0x0007b03d) tport_appsw_pane_g1_ParamLimits

0x3ec5,	// (0x0007b03d) tport_appsw_pane_g1

0xe001,	// (0x00085179) tport_contact_pane_g1

0xe00a,	// (0x00085182) tport_contact_pane_t1

0xe018,	// (0x00085190) tport_contact_pane_t2

0x0001,

0xfc78,	// (0x00086df0) tport_contact_pane_t

0xe026,	// (0x0008519e) list_tport_pane

0xe02f,	// (0x000851a7) scroll_pane_cp_030

0x9375,	// (0x000804ed) cell_tport_appsw_pane_g1

0x9385,	// (0x000804fd) cell_tport_appsw_pane_t1

0x9393,	// (0x0008050b) grid_highlight_pane_cp019

0x939b,	// (0x00080513) list_tport_double_graphic_pane_ParamLimits

0x939b,	// (0x00080513) list_tport_double_graphic_pane

0xaae4,	// (0x00081c5c) list_highlight_pane_cp023_ParamLimits

0xaae4,	// (0x00081c5c) list_highlight_pane_cp023

0x93b2,	// (0x0008052a) list_tport_double_graphic_pane_g1_ParamLimits

0x93b2,	// (0x0008052a) list_tport_double_graphic_pane_g1

0x93bf,	// (0x00080537) list_tport_double_graphic_pane_t1_ParamLimits

0x93bf,	// (0x00080537) list_tport_double_graphic_pane_t1

0x93d4,	// (0x0008054c) list_tport_double_graphic_pane_t2_ParamLimits

0x93d4,	// (0x0008054c) list_tport_double_graphic_pane_t2

0x0001,

0xfc84,	// (0x00086dfc) list_tport_double_graphic_pane_t_ParamLimits

0xfc84,	// (0x00086dfc) list_tport_double_graphic_pane_t

0xaa67,	// (0x00081bdf) main_cale_note_pane

0x7445,	// (0x0007e5bd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7445,	// (0x0007e5bd) cell_vitu2_function_top_wide_pane_cp01

0x8bf1,	// (0x0007fd69) wait_bar_pane_cp05_ParamLimits

0xaae4,	// (0x00081c5c) listscroll_cmail_pane

0xe038,	// (0x000851b0) list_cmail_pane

0x93e6,	// (0x0008055e) list_cmail_body_pane

0x93fd,	// (0x00080575) list_single_cmail_header_caption_pane

0xe048,	// (0x000851c0) list_single_cmail_header_detail_pane_ParamLimits

0xe048,	// (0x000851c0) list_single_cmail_header_detail_pane

0xe07a,	// (0x000851f2) list_single_cmail_header_caption_pane_t1

0x0dc6,	// (0x00077f3e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0dc6,	// (0x00077f3e) list_single_cmail_header_detail_pane_g1

0xebd8,	// (0x00085d50) list_single_cmail_header_detail_pane_g2_ParamLimits

0xebd8,	// (0x00085d50) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc89,	// (0x00086e01) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc89,	// (0x00086e01) list_single_cmail_header_detail_pane_g

0xe09e,	// (0x00085216) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe09e,	// (0x00085216) list_single_cmail_header_detail_pane_t1

0xe0fe,	// (0x00085276) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe0fe,	// (0x00085276) list_single_cmail_header_editor_pane_bg

0xdb7e,	// (0x00084cf6) list_cmail_body_pane_g1

0xe115,	// (0x0008528d) list_cmail_body_pane_t1

0xce74,	// (0x00083fec) list_single_cmail_header_editor_pane_bg_g1

0x2591,	// (0x00079709) list_single_cmail_header_editor_pane_bg_g1_copy1

0xce84,	// (0x00083ffc) list_single_cmail_header_editor_pane_bg_g1_copy2

0xce7c,	// (0x00083ff4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd0b1,	// (0x00084229) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcea4,	// (0x0008401c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xce94,	// (0x0008400c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xce9c,	// (0x00084014) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2571,	// (0x000796e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x941a,	// (0x00080592) calenote_gesture_pane_ParamLimits

0x941a,	// (0x00080592) calenote_gesture_pane

0x943a,	// (0x000805b2) calenote_window_pane_ParamLimits

0x943a,	// (0x000805b2) calenote_window_pane

0xe123,	// (0x0008529b) popup_note_window_cp01

0x9456,	// (0x000805ce) calenote_swipe_1_pane_ParamLimits

0x9456,	// (0x000805ce) calenote_swipe_1_pane

0x9175,	// (0x000802ed) calenote_swipe_2_pane_ParamLimits

0x9175,	// (0x000802ed) calenote_swipe_2_pane

0xddb2,	// (0x00084f2a) calenote_swipe_1_pane_g1_ParamLimits

0xddb2,	// (0x00084f2a) calenote_swipe_1_pane_g1

0xddbf,	// (0x00084f37) calenote_swipe_1_pane_g2_ParamLimits

0xddbf,	// (0x00084f37) calenote_swipe_1_pane_g2

0x0001,

0xfc26,	// (0x00086d9e) calenote_swipe_1_pane_g_ParamLimits

0xfc26,	// (0x00086d9e) calenote_swipe_1_pane_g

0xe135,	// (0x000852ad) calenote_swipe_1_pane_t1_ParamLimits

0xe135,	// (0x000852ad) calenote_swipe_1_pane_t1

0xddb2,	// (0x00084f2a) calenote_swipe_2_pane_g1_ParamLimits

0xddb2,	// (0x00084f2a) calenote_swipe_2_pane_g1

0xe154,	// (0x000852cc) calenote_swipe_2_pane_g2_ParamLimits

0xe154,	// (0x000852cc) calenote_swipe_2_pane_g2

0x0001,

0xfc95,	// (0x00086e0d) calenote_swipe_2_pane_g_ParamLimits

0xfc95,	// (0x00086e0d) calenote_swipe_2_pane_g

0xe160,	// (0x000852d8) calenote_swipe_2_pane_t1_ParamLimits

0xe160,	// (0x000852d8) calenote_swipe_2_pane_t1

0xaa67,	// (0x00081bdf) main_mup_navstr_pane

0x6299,	// (0x0007d411) main_mup3_pane_t7_ParamLimits

0x6299,	// (0x0007d411) main_mup3_pane_t7

0xcb7a,	// (0x00083cf2) main_mp4_pane_g6_ParamLimits

0xcb7a,	// (0x00083cf2) main_mp4_pane_g6

0xe9a6,	// (0x00085b1e) main_image3_pane_t4_ParamLimits

0xe9a6,	// (0x00085b1e) main_image3_pane_t4

0x946b,	// (0x000805e3) popup_navstr_preview_pane_ParamLimits

0x946b,	// (0x000805e3) popup_navstr_preview_pane

0x947b,	// (0x000805f3) scroll_navstr_pane_ParamLimits

0x947b,	// (0x000805f3) scroll_navstr_pane

0xaa67,	// (0x00081bdf) bg_popup_preview_window_pane_cp04

0xebec,	// (0x00085d64) popup_navstr_preview_pane_t1

0x948f,	// (0x00080607) scroll_navstr_pane_g1_ParamLimits

0x948f,	// (0x00080607) scroll_navstr_pane_g1

0x94a3,	// (0x0008061b) scroll_navstr_pane_t1_ParamLimits

0x94a3,	// (0x0008061b) scroll_navstr_pane_t1

0xe12c,	// (0x000852a4) bg_button_pane_cp014

0xe12c,	// (0x000852a4) bg_button_pane_cp030

0x0b5b,	// (0x00077cd3) list_double_fisheye_pane_g4_ParamLimits

0x0b5b,	// (0x00077cd3) list_double_fisheye_pane_g4

0x0b67,	// (0x00077cdf) list_double_fisheye_pane_g5_ParamLimits

0x0b67,	// (0x00077cdf) list_double_fisheye_pane_g5

0x3631,	// (0x0007a7a9) sp_fs_scroll_pane_cp03

0xde8c,	// (0x00085004) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde98,	// (0x00085010) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc43,	// (0x00086dbb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9224,	// (0x0008039c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe040,	// (0x000851b8) sp_fs_scroll_pane_cp02

0x1637,	// (0x000787af) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1637,	// (0x000787af) popup_sp_fs_calendar_preview_list_single_pane

0xaa67,	// (0x00081bdf) main_cam6_pano_pane

0xaae4,	// (0x00081c5c) main_mup3_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_phacti_pane

0x8ac2,	// (0x0007fc3a) bg_button_pane_cp11

0x8adc,	// (0x0007fc54) main_mobtv_info_pane_g2_ParamLimits

0x8adc,	// (0x0007fc54) main_mobtv_info_pane_g2

0x0001,

0xfba3,	// (0x00086d1b) main_mobtv_info_pane_g_ParamLimits

0xfba3,	// (0x00086d1b) main_mobtv_info_pane_g

0x8cb9,	// (0x0007fe31) sc_clock_pane_t5_ParamLimits

0x8cb9,	// (0x0007fe31) sc_clock_pane_t5

0x8eed,	// (0x00080065) main_radioblah_pane_g1_ParamLimits

0xdce4,	// (0x00084e5c) main_radioblah_pane_t3_ParamLimits

0xdce4,	// (0x00084e5c) main_radioblah_pane_t3

0xdcfc,	// (0x00084e74) main_radioblah_pane_t4_ParamLimits

0xdcfc,	// (0x00084e74) main_radioblah_pane_t4

0x8f15,	// (0x0008008d) main_radioblah_text_pane_ParamLimits

0x8f15,	// (0x0008008d) main_radioblah_text_pane

0x8f27,	// (0x0008009f) main_radioblah_info_pane_g1_ParamLimits

0x8fc0,	// (0x00080138) main_radioblah_info_pane_t4_ParamLimits

0x8fc0,	// (0x00080138) main_radioblah_info_pane_t4

0xaae4,	// (0x00081c5c) main_sp_fs_calendar_pane

0x94ba,	// (0x00080632) main_phacti_pane_g1

0x94c2,	// (0x0008063a) phacti_note_pane_ParamLimits

0x94c2,	// (0x0008063a) phacti_note_pane

0xec03,	// (0x00085d7b) phacti_term_pane_ParamLimits

0xec03,	// (0x00085d7b) phacti_term_pane

0xec18,	// (0x00085d90) phacti_note_pane_t1_ParamLimits

0xec18,	// (0x00085d90) phacti_note_pane_t1

0xe17f,	// (0x000852f7) phacti_term_pane_g1

0xe187,	// (0x000852ff) phacti_term_pane_t1_ParamLimits

0xe187,	// (0x000852ff) phacti_term_pane_t1

0xec2f,	// (0x00085da7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xec37,	// (0x00085daf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9f,	// (0x00086e17) popup_sp_fs_calendar_preview_list_single_pane_g

0xec3f,	// (0x00085db7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xec3f,	// (0x00085db7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xec55,	// (0x00085dcd) aid_popup_sp_fs_bg_corner_pane

0x1ebb,	// (0x00079033) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa67,	// (0x00081bdf) popup_sp_fs_calendar_preview_bg_pane

0xec5d,	// (0x00085dd5) popup_sp_fs_calendar_preview_list_pane

0x3efb,	// (0x0007b073) bg_main_sp_fs_cale_pane_ParamLimits

0x3efb,	// (0x0007b073) bg_main_sp_fs_cale_pane

0xe1ba,	// (0x00085332) listscroll_cale_mrui_pane_ParamLimits

0xe1ba,	// (0x00085332) listscroll_cale_mrui_pane

0xe1cf,	// (0x00085347) listscroll_sp_fs_schedule_track_pane

0xe1d8,	// (0x00085350) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1d8,	// (0x00085350) main_sp_fs_ctrlbar_pane_cp01

0xec65,	// (0x00085ddd) main_sp_fs_ribbon_pane

0xe1eb,	// (0x00085363) popup_sp_fs_cale_preview_window

0x9537,	// (0x000806af) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9537,	// (0x000806af) list_single_sp_fs_schedule_track_pane

0xaae4,	// (0x00081c5c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaae4,	// (0x00081c5c) bg_sp_fs_highlight_list_pane_cp03

0x954b,	// (0x000806c3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x954b,	// (0x000806c3) list_single_sp_fs_schedule_track_pane_g1

0x9557,	// (0x000806cf) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9557,	// (0x000806cf) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca4,	// (0x00086e1c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca4,	// (0x00086e1c) list_single_sp_fs_schedule_track_pane_g

0x9563,	// (0x000806db) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9563,	// (0x000806db) list_single_sp_fs_schedule_track_pane_t1

0x9585,	// (0x000806fd) sp_fs_schedule_track_pane_ParamLimits

0x9585,	// (0x000806fd) sp_fs_schedule_track_pane

0xec6d,	// (0x00085de5) sp_fs_schedule_track_pane_g1

0xec75,	// (0x00085ded) sp_fs_schedule_track_pane_g2

0xec7d,	// (0x00085df5) sp_fs_schedule_track_pane_g3

0xec85,	// (0x00085dfd) sp_fs_schedule_track_pane_g4

0xec8d,	// (0x00085e05) sp_fs_schedule_track_pane_g5

0x0004,

0xfca9,	// (0x00086e21) sp_fs_schedule_track_pane_g

0xce74,	// (0x00083fec) bg_sp_fs_schedule_viewer_highlight_g1

0x2591,	// (0x00079709) bg_sp_fs_schedule_viewer_highlight_g2

0xce7c,	// (0x00083ff4) bg_sp_fs_schedule_viewer_highlight_g3

0xce84,	// (0x00083ffc) bg_sp_fs_schedule_viewer_highlight_g4

0xd0b1,	// (0x00084229) bg_sp_fs_schedule_viewer_highlight_g5

0xce94,	// (0x0008400c) bg_sp_fs_schedule_viewer_highlight_g6

0xce9c,	// (0x00084014) bg_sp_fs_schedule_viewer_highlight_g7

0xcea4,	// (0x0008401c) bg_sp_fs_schedule_viewer_highlight_g8

0x2571,	// (0x000796e9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb4,	// (0x00086e2c) bg_sp_fs_schedule_viewer_highlight_g

0xaa67,	// (0x00081bdf) bg_main_sp_fs_ribbon_pane

0x959a,	// (0x00080712) main_sp_fs_ribbon_pane_g1

0xec95,	// (0x00085e0d) main_sp_fs_ribbon_pane_t1

0x95a3,	// (0x0008071b) main_sp_fs_ribbon_pane_t2

0xeca4,	// (0x00085e1c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc7,	// (0x00086e3f) main_sp_fs_ribbon_pane_t

0xecb3,	// (0x00085e2b) main_sp_fs_ribbon_scheduler_pane

0xecbb,	// (0x00085e33) bg_main_sp_fs_ribbon_pane_g1

0xecc4,	// (0x00085e3c) bg_main_sp_fs_ribbon_pane_g2

0xeccd,	// (0x00085e45) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcce,	// (0x00086e46) bg_main_sp_fs_ribbon_pane_g

0xecd5,	// (0x00085e4d) main_sp_fs_ribbon_scheduler_pane_g1

0xecde,	// (0x00085e56) main_sp_fs_ribbon_scheduler_pane_g2

0xece7,	// (0x00085e5f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd5,	// (0x00086e4d) main_sp_fs_ribbon_scheduler_pane_g

0xecf0,	// (0x00085e68) list_cale_mrui_pane

0x95b2,	// (0x0008072a) sp_fs_scroll_pane_cp07_ParamLimits

0x95b2,	// (0x0008072a) sp_fs_scroll_pane_cp07

0x95ce,	// (0x00080746) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x95ce,	// (0x00080746) bg_sp_fs_schedule_viewer_highlight

0xecfd,	// (0x00085e75) list_single_sp_fs_schedule_track_pane_cp01

0xed05,	// (0x00085e7d) list_sp_fs_schedule_track_pane

0xed0d,	// (0x00085e85) sp_fs_scroll_pane_cp06_ParamLimits

0xed0d,	// (0x00085e85) sp_fs_scroll_pane_cp06

0x1ebb,	// (0x00079033) bgmain_sp_fs_calendar_pane_g1

0x0dde,	// (0x00077f56) list_single_cale_mrui_pane_ParamLimits

0x0dde,	// (0x00077f56) list_single_cale_mrui_pane

0xe1fd,	// (0x00085375) list_single_cale_mrui_row_pane_ParamLimits

0xe1fd,	// (0x00085375) list_single_cale_mrui_row_pane

0xe20a,	// (0x00085382) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe20a,	// (0x00085382) list_single_cale_mrui_row_pane_g1

0xe242,	// (0x000853ba) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe242,	// (0x000853ba) list_single_cale_mrui_row_pane_t1

0x0dfe,	// (0x00077f76) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0dfe,	// (0x00077f76) list_single_cale_mrui_row_pane_t2

0xe254,	// (0x000853cc) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe254,	// (0x000853cc) list_single_cale_mrui_row_pane_t3

0xe283,	// (0x000853fb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe283,	// (0x000853fb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce3,	// (0x00086e5b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce3,	// (0x00086e5b) list_single_cale_mrui_row_pane_t

0x0e64,	// (0x00077fdc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e64,	// (0x00077fdc) list_single_cmail_header_editor_pane_bg_cp01

0x0e88,	// (0x00078000) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e88,	// (0x00078000) list_single_cmail_header_editor_pane_bg_cp02

0x95e0,	// (0x00080758) main_radioblah_text_pane_t1_ParamLimits

0x95e0,	// (0x00080758) main_radioblah_text_pane_t1

0xed2c,	// (0x00085ea4) cam6_indi_pane_cp01

0xed34,	// (0x00085eac) cam6_mode_pane_cp01

0xed3c,	// (0x00085eb4) cam6_pano_pane

0xed45,	// (0x00085ebd) cam6_zoom_pane_cp01

0xed4f,	// (0x00085ec7) cam6_pano_image_pane

0xed58,	// (0x00085ed0) cam6_pano_pane_g1

0xdb7e,	// (0x00084cf6) cam6_pano_pane_g2

0xed61,	// (0x00085ed9) cam6_pano_pane_g3

0xed6a,	// (0x00085ee2) cam6_pano_pane_g4

0xc86d,	// (0x000839e5) cam6_pano_pane_g5

0xed73,	// (0x00085eeb) cam6_pano_pane_g6

0xed7b,	// (0x00085ef3) cam6_pano_pane_g7

0xed83,	// (0x00085efb) cam6_pano_pane_g8

0xed8c,	// (0x00085f04) cam6_pano_pane_g9

0x0008,

0xfcec,	// (0x00086e64) cam6_pano_pane_g

0xaa67,	// (0x00081bdf) main_browser_tag_pane

0xebe4,	// (0x00085d5c) grid_navstr_albumart_pane

0xed97,	// (0x00085f0f) cell_navstr_albumart_pane_ParamLimits

0xed97,	// (0x00085f0f) cell_navstr_albumart_pane

0xedb3,	// (0x00085f2b) cell_navstr_albumart_pane_g1

0xbcba,	// (0x00082e32) cell_navstr_albumart_pane_g2

0xbcca,	// (0x00082e42) cell_navstr_albumart_pane_g3

0xbcc2,	// (0x00082e3a) cell_navstr_albumart_pane_g4

0x0003,

0xfcff,	// (0x00086e77) cell_navstr_albumart_pane_g

0x95fb,	// (0x00080773) bt_list_pane_ParamLimits

0x95fb,	// (0x00080773) bt_list_pane

0x9611,	// (0x00080789) bt_list_pane_t1

0x9620,	// (0x00080798) bt_list_pane_t2

0x0001,

0xfd08,	// (0x00086e80) bt_list_pane_t

0xaa67,	// (0x00081bdf) main_cale_prevew_pane

0x962f,	// (0x000807a7) popup_cale_preview_window_ParamLimits

0x962f,	// (0x000807a7) popup_cale_preview_window

0xaae4,	// (0x00081c5c) bg_popup_preview_window_pane_cp05_ParamLimits

0xaae4,	// (0x00081c5c) bg_popup_preview_window_pane_cp05

0xedbb,	// (0x00085f33) list_cale_preview_pane_ParamLimits

0xedbb,	// (0x00085f33) list_cale_preview_pane

0x964c,	// (0x000807c4) list_double_cale_preview_pane_ParamLimits

0x964c,	// (0x000807c4) list_double_cale_preview_pane

0x9660,	// (0x000807d8) list_single_cale_preview_pane_ParamLimits

0x9660,	// (0x000807d8) list_single_cale_preview_pane

0x9678,	// (0x000807f0) list_single_cale_preview_pane_g1

0x9680,	// (0x000807f8) list_single_cale_preview_pane_t1_ParamLimits

0x9680,	// (0x000807f8) list_single_cale_preview_pane_t1

0x9695,	// (0x0008080d) list_double_cale_preview_pane_g1

0x969d,	// (0x00080815) list_double_cale_preview_pane_t1_ParamLimits

0x969d,	// (0x00080815) list_double_cale_preview_pane_t1

0x96b2,	// (0x0008082a) list_double_cale_preview_pane_t2_ParamLimits

0x96b2,	// (0x0008082a) list_double_cale_preview_pane_t2

0x0001,

0xfd0d,	// (0x00086e85) list_double_cale_preview_pane_t_ParamLimits

0xfd0d,	// (0x00086e85) list_double_cale_preview_pane_t

0xaa67,	// (0x00081bdf) main_ezdial_pane

0xaae4,	// (0x00081c5c) main_sp_fs_email_pane_ParamLimits

0x918f,	// (0x00080307) cmail_ddmenu_btn01_pane_ParamLimits

0x918f,	// (0x00080307) cmail_ddmenu_btn01_pane

0x91a2,	// (0x0008031a) cmail_ddmenu_btn02_pane_ParamLimits

0x91a2,	// (0x0008031a) cmail_ddmenu_btn02_pane

0x91c5,	// (0x0008033d) cmail_ddmenu_btn03_pane_ParamLimits

0x91c5,	// (0x0008033d) cmail_ddmenu_btn03_pane

0x9263,	// (0x000803db) main_sp_fs_ctrlbar_pane_ParamLimits

0x9287,	// (0x000803ff) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x93e6,	// (0x0008055e) list_cmail_body_pane_ParamLimits

0xe088,	// (0x00085200) bg_button_pane_cp12

0xe091,	// (0x00085209) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe091,	// (0x00085209) list_single_cmail_header_detail_pane_g3

0xe0da,	// (0x00085252) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe0da,	// (0x00085252) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc90,	// (0x00086e08) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc90,	// (0x00086e08) list_single_cmail_header_detail_pane_t

0xe19c,	// (0x00085314) phacti_term_pane_t2_ParamLimits

0xe19c,	// (0x00085314) phacti_term_pane_t2

0x0001,

0xfc9a,	// (0x00086e12) phacti_term_pane_t_ParamLimits

0xfc9a,	// (0x00086e12) phacti_term_pane_t

0xedc7,	// (0x00085f3f) aid_size_list_single_double

0x96ca,	// (0x00080842) popup_ezdial_listscroll_window

0x96e6,	// (0x0008085e) popup_number_entry_window_cp01

0x1cca,	// (0x00078e42) bg_popup_call_pane_cp09

0xedd3,	// (0x00085f4b) ezdial_list_pane

0xeddb,	// (0x00085f53) scroll_pane_cp23

0x3efb,	// (0x0007b073) bg_button_pane_cp028_ParamLimits

0x3efb,	// (0x0007b073) bg_button_pane_cp028

0x96f4,	// (0x0008086c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x96f4,	// (0x0008086c) cmail_ddmenu_btn01_pane_g1

0x9703,	// (0x0008087b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9703,	// (0x0008087b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd12,	// (0x00086e8a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd12,	// (0x00086e8a) cmail_ddmenu_btn01_pane_g

0xede3,	// (0x00085f5b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xede3,	// (0x00085f5b) cmail_ddmenu_btn01_pane_t1

0x3efb,	// (0x0007b073) bg_button_pane_cp029_ParamLimits

0x3efb,	// (0x0007b073) bg_button_pane_cp029

0x9719,	// (0x00080891) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9719,	// (0x00080891) cmail_ddmenu_btn02_pane_g1

0x9734,	// (0x000808ac) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9734,	// (0x000808ac) cmail_ddmenu_btn02_pane_t1

0xaae4,	// (0x00081c5c) bg_button_pane_cp031_ParamLimits

0xaae4,	// (0x00081c5c) bg_button_pane_cp031

0x9719,	// (0x00080891) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9719,	// (0x00080891) cmail_ddmenu_btn03_pane_g1

0x9734,	// (0x000808ac) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9734,	// (0x000808ac) cmail_ddmenu_btn03_pane_t1

0x6c27,	// (0x0007dd9f) cell_dialer2_keypad_pane_t1_ParamLimits

0x6c41,	// (0x0007ddb9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6c41,	// (0x0007ddb9) cell_dialer2_keypad_pane_t1_copy1

0x88e3,	// (0x0007fa5b) ncimui_group_button_pane

0xaae4,	// (0x00081c5c) main_sp_fs_calendar_pane_ParamLimits

0x93fd,	// (0x00080575) list_single_cmail_header_caption_pane_ParamLimits

0xe1b1,	// (0x00085329) aid_recal_txt_sm_pane

0xaa67,	// (0x00081bdf) mian_recal_day_pane

0xe1eb,	// (0x00085363) popup_sp_fs_cale_preview_window_ParamLimits

0xedf9,	// (0x00085f71) list_recal_day_pane

0xe2d0,	// (0x00085448) list_single_recal_day_pane_ParamLimits

0xe2d0,	// (0x00085448) list_single_recal_day_pane

0xee20,	// (0x00085f98) list_single_recal_day_pane_g1_ParamLimits

0xee20,	// (0x00085f98) list_single_recal_day_pane_g1

0xe2e2,	// (0x0008545a) list_single_recal_day_pane_g2_ParamLimits

0xe2e2,	// (0x0008545a) list_single_recal_day_pane_g2

0xe2ee,	// (0x00085466) list_single_recal_day_pane_g3_ParamLimits

0xe2ee,	// (0x00085466) list_single_recal_day_pane_g3

0x0ea8,	// (0x00078020) list_single_recal_day_pane_g4_ParamLimits

0x0ea8,	// (0x00078020) list_single_recal_day_pane_g4

0xe2fa,	// (0x00085472) list_single_recal_day_pane_g5_ParamLimits

0xe2fa,	// (0x00085472) list_single_recal_day_pane_g5

0xe306,	// (0x0008547e) list_single_recal_day_pane_g6_ParamLimits

0xe306,	// (0x0008547e) list_single_recal_day_pane_g6

0x0004,

0xfd21,	// (0x00086e99) list_single_recal_day_pane_g_ParamLimits

0xfd21,	// (0x00086e99) list_single_recal_day_pane_g

0xe31a,	// (0x00085492) list_single_recal_day_pane_t1

0xe32c,	// (0x000854a4) list_single_recal_day_pane_t2

0x0001,

0xfd2c,	// (0x00086ea4) list_single_recal_day_pane_t

0x975b,	// (0x000808d3) ncimui_query_button_pane_ParamLimits

0x975b,	// (0x000808d3) ncimui_query_button_pane

0x976b,	// (0x000808e3) ncimui_query_button_pane_t1_ParamLimits

0x976b,	// (0x000808e3) ncimui_query_button_pane_t1

0xee2c,	// (0x00085fa4) ncimui_query_button_pane_t2_ParamLimits

0xee2c,	// (0x00085fa4) ncimui_query_button_pane_t2

0x0001,

0xfd31,	// (0x00086ea9) ncimui_query_button_pane_t_ParamLimits

0xfd31,	// (0x00086ea9) ncimui_query_button_pane_t

0x977e,	// (0x000808f6) query_button_pane_ParamLimits

0x977e,	// (0x000808f6) query_button_pane

0xaa67,	// (0x00081bdf) bg_button_pane_cp0028

0xee3f,	// (0x00085fb7) query_button_pane_t1

0x553e,	// (0x0007c6b6) main_tport_pane_ParamLimits

0x92a7,	// (0x0008041f) bg_popup_window_pane_cp01_ParamLimits

0x92a7,	// (0x0008041f) bg_popup_window_pane_cp01

0x92c0,	// (0x00080438) heading_pane_cp08_ParamLimits

0x92c0,	// (0x00080438) heading_pane_cp08

0x92d3,	// (0x0008044b) heading_pane_cp07_ParamLimits

0x92d3,	// (0x0008044b) heading_pane_cp07

0x9375,	// (0x000804ed) cell_tport_appsw_pane_g2

0x0002,

0xfc7d,	// (0x00086df5) cell_tport_appsw_pane_g

0xb4c3,	// (0x0008263b) input_candi_list_open_g1

0x345e,	// (0x0007a5d6) list_cale_time_pane_g6_ParamLimits

0x345e,	// (0x0007a5d6) list_cale_time_pane_g6

0x5be0,	// (0x0007cd58) aid_size_touch_calib_1_ParamLimits

0x5be0,	// (0x0007cd58) aid_size_touch_calib_1

0x5bf2,	// (0x0007cd6a) aid_size_touch_calib_2_ParamLimits

0x5bf2,	// (0x0007cd6a) aid_size_touch_calib_2

0x5c0a,	// (0x0007cd82) aid_size_touch_calib_3_ParamLimits

0x5c0a,	// (0x0007cd82) aid_size_touch_calib_3

0x5c28,	// (0x0007cda0) aid_size_touch_calib_4_ParamLimits

0x5c28,	// (0x0007cda0) aid_size_touch_calib_4

0x5c40,	// (0x0007cdb8) main_touch_calib_button_group_pane_ParamLimits

0x5c40,	// (0x0007cdb8) main_touch_calib_button_group_pane

0x5c58,	// (0x0007cdd0) main_touch_calib_pane_g1_ParamLimits

0x5c6a,	// (0x0007cde2) main_touch_calib_pane_g2_ParamLimits

0x5c7c,	// (0x0007cdf4) main_touch_calib_pane_g3_ParamLimits

0x5c8e,	// (0x0007ce06) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x00086837) main_touch_calib_pane_g_ParamLimits

0x5ca0,	// (0x0007ce18) main_touch_calib_pane_t1_ParamLimits

0x5cba,	// (0x0007ce32) main_touch_calib_pane_t2_ParamLimits

0x5cd4,	// (0x0007ce4c) main_touch_calib_pane_t3_ParamLimits

0x5ce8,	// (0x0007ce60) main_touch_calib_pane_t4_ParamLimits

0x5cfe,	// (0x0007ce76) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x00086840) main_touch_calib_pane_t_ParamLimits

0xc620,	// (0x00083798) list_single_fp_cale_pane_g3_ParamLimits

0xc620,	// (0x00083798) list_single_fp_cale_pane_g3

0xaae4,	// (0x00081c5c) bg_button_pane_cp012_ParamLimits

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp03_ParamLimits

0x7c4f,	// (0x0007edc7) cell_vitu2_function_top_pane_g1_ParamLimits

0xaae4,	// (0x00081c5c) bg_vkb2_func_pane_cp04_ParamLimits

0x886e,	// (0x0007f9e6) main_ncimui_button_group_pane_ParamLimits

0x886e,	// (0x0007f9e6) main_ncimui_button_group_pane

0x88ce,	// (0x0007fa46) main_ncimui_pane_t3_ParamLimits

0x88ce,	// (0x0007fa46) main_ncimui_pane_t3

0xebfa,	// (0x00085d72) phacti_button_group_pane

0xedc7,	// (0x00085f3f) aid_size_list_single_double_ParamLimits

0x96ca,	// (0x00080842) popup_ezdial_listscroll_window_ParamLimits

0x96e6,	// (0x0008085e) popup_number_entry_window_cp01_ParamLimits

0x9791,	// (0x00080909) phacti_button_pane_ParamLimits

0x9791,	// (0x00080909) phacti_button_pane

0xaa67,	// (0x00081bdf) bg_button_pane_cp14

0xee4d,	// (0x00085fc5) phacti_button_pane_t1

0x97a2,	// (0x0008091a) main_touch_calib_button_pane_ParamLimits

0x97a2,	// (0x0008091a) main_touch_calib_button_pane

0xb2a4,	// (0x0008241c) bg_button_pane_cp18_ParamLimits

0xb2a4,	// (0x0008241c) bg_button_pane_cp18

0xee5b,	// (0x00085fd3) main_touch_calib_button_pane_t1_ParamLimits

0xee5b,	// (0x00085fd3) main_touch_calib_button_pane_t1

0xee71,	// (0x00085fe9) main_touch_calib_button_pane_t2_ParamLimits

0xee71,	// (0x00085fe9) main_touch_calib_button_pane_t2

0x0001,

0xfd36,	// (0x00086eae) main_touch_calib_button_pane_t_ParamLimits

0xfd36,	// (0x00086eae) main_touch_calib_button_pane_t

0xaa67,	// (0x00081bdf) cell_ncimui_button_pane

0xaa67,	// (0x00081bdf) bg_button_pane_cp032

0xee8f,	// (0x00086007) cell_ncimui_button_pane_t1

0xe984,	// (0x00085afc) image3_infobar_pane_ParamLimits

0xe984,	// (0x00085afc) image3_infobar_pane

0x8ce5,	// (0x0007fe5d) fs_bigclock_status_pane_ParamLimits

0x8ce5,	// (0x0007fe5d) fs_bigclock_status_pane

0x8cf2,	// (0x0007fe6a) main_fs_bigclock_clock_pane_ParamLimits

0x8cf2,	// (0x0007fe6a) main_fs_bigclock_clock_pane

0x8d24,	// (0x0007fe9c) main_fs_bigclock_indi_pane_ParamLimits

0x8d24,	// (0x0007fe9c) main_fs_bigclock_indi_pane

0x8d64,	// (0x0007fedc) main_fs_bigclock_swipe_pane_ParamLimits

0x8d64,	// (0x0007fedc) main_fs_bigclock_swipe_pane

0xaa67,	// (0x00081bdf) main_fs_clock_dumped_data

0x8db0,	// (0x0007ff28) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8db0,	// (0x0007ff28) list_single_fs_bigclock_indicator_pane_g1

0x8dc9,	// (0x0007ff41) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8dc9,	// (0x0007ff41) list_single_fs_bigclock_indicator_pane_g2

0x8de3,	// (0x0007ff5b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8de3,	// (0x0007ff5b) list_single_fs_bigclock_indicator_pane_g3

0x8dfd,	// (0x0007ff75) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8dfd,	// (0x0007ff75) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd7,	// (0x00086d4f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd7,	// (0x00086d4f) list_single_fs_bigclock_indicator_pane_g

0x8e2c,	// (0x0007ffa4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8e2c,	// (0x0007ffa4) list_single_fs_bigclock_indicator_pane_t1

0x8e54,	// (0x0007ffcc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8e54,	// (0x0007ffcc) list_single_fs_bigclock_indicator_pane_t2

0x8e7c,	// (0x0007fff4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8e7c,	// (0x0007fff4) list_single_fs_bigclock_indicator_pane_t3

0x8ea4,	// (0x0008001c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8ea4,	// (0x0008001c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe2,	// (0x00086d5a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe2,	// (0x00086d5a) list_single_fs_bigclock_indicator_pane_t

0xee9d,	// (0x00086015) image3_infobar_fav_pane_ParamLimits

0xee9d,	// (0x00086015) image3_infobar_fav_pane

0xeead,	// (0x00086025) image3_infobar_loc_pane_ParamLimits

0xeead,	// (0x00086025) image3_infobar_loc_pane

0xeec3,	// (0x0008603b) image3_infobar_time_pane_ParamLimits

0xeec3,	// (0x0008603b) image3_infobar_time_pane

0x1ebb,	// (0x00079033) image3_infobar_time_pane_g1

0xeed3,	// (0x0008604b) image3_infobar_time_pane_t1

0x1ebb,	// (0x00079033) image3_infobar_loc_pane_g1

0xeee1,	// (0x00086059) image3_infobar_loc_pane_g2

0x0001,

0xfd3b,	// (0x00086eb3) image3_infobar_loc_pane_g

0xeee9,	// (0x00086061) image3_infobar_loc_pane_t1

0x1ebb,	// (0x00079033) image3_infobar_fav_pane_g1

0xeef7,	// (0x0008606f) image3_infobar_fav_pane_g2

0x0001,

0xfd40,	// (0x00086eb8) image3_infobar_fav_pane_g

0xeeff,	// (0x00086077) fs_bigclock_status_battery_pane

0xef08,	// (0x00086080) fs_bigclock_status_signal_pane

0xef11,	// (0x00086089) fs_bigclock_status_title_pane

0xef1a,	// (0x00086092) fs_bigclock_status_signal_pane_g1

0xef23,	// (0x0008609b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd45,	// (0x00086ebd) fs_bigclock_status_signal_pane_g

0xef2b,	// (0x000860a3) fs_bigclock_status_battery_pane_g1

0xef34,	// (0x000860ac) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4a,	// (0x00086ec2) fs_bigclock_status_battery_pane_g

0xef3c,	// (0x000860b4) fs_bigclock_status_title_pane_t1

0x97b7,	// (0x0008092f) main_fs_bigclock_clock_pane_g1

0x97b7,	// (0x0008092f) main_fs_bigclock_clock_pane_g2

0x97ca,	// (0x00080942) main_fs_bigclock_clock_pane_g3

0x97ca,	// (0x00080942) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4f,	// (0x00086ec7) main_fs_bigclock_clock_pane_g

0x97e1,	// (0x00080959) main_fs_bigclock_clock_pane_t1

0x97f7,	// (0x0008096f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd58,	// (0x00086ed0) main_fs_bigclock_clock_pane_t

0xef4a,	// (0x000860c2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xef4a,	// (0x000860c2) list_single_fs_bigclock_indicator_pane

0xef5b,	// (0x000860d3) list_single_fs_bigclock_pane_ParamLimits

0xef5b,	// (0x000860d3) list_single_fs_bigclock_pane

0xef81,	// (0x000860f9) main_fs_bigclock_indicator_pane_t1

0xef90,	// (0x00086108) list_single_fs_bigclock_pane_g1

0xef98,	// (0x00086110) list_single_fs_bigclock_pane_t1

0x1ebb,	// (0x00079033) main_fs_bigclock_swipe_pane_g1

0xefdb,	// (0x00086153) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd69,	// (0x00086ee1) main_fs_bigclock_swipe_pane_g

0xefe3,	// (0x0008615b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xefe3,	// (0x0008615b) main_fs_bigclock_swipe_pane_t1

0x375b,	// (0x0007a8d3) call_type_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_btmg_pane

0xe236,	// (0x000853ae) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe236,	// (0x000853ae) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcdc,	// (0x00086e54) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdc,	// (0x00086e54) list_single_cale_mrui_row_pane_g

0xe2be,	// (0x00085436) list_recal_vselct_arw_lo_pane

0xee18,	// (0x00085f90) list_recal_vselct_arw_up_pane

0xe2c6,	// (0x0008543e) list_recal_vselct_pane

0x9859,	// (0x000809d1) btmg_button_pane

0x9863,	// (0x000809db) main_btmg_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp044

0xf00f,	// (0x00086187) btmg_button_pane_t1

0xbe0c,	// (0x00082f84) aid_listscroll_gen

0xaae4,	// (0x00081c5c) main_cntbar_detail_pane

0xe038,	// (0x000851b0) list_cmail_folder_pane

0x3631,	// (0x0007a7a9) sp_fs_scroll_pane_cp03_ParamLimits

0x0ec0,	// (0x00078038) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ec0,	// (0x00078038) list_single_fs_dyc_pane_cp01

0xf01d,	// (0x00086195) aid_size_cmail_indent

0xe33e,	// (0x000854b6) list_single_dyc_row_pane_cp01

0x98a1,	// (0x00080a19) cntbar_detail_list_pane_ParamLimits

0x98a1,	// (0x00080a19) cntbar_detail_list_pane

0x98f3,	// (0x00080a6b) main_cntbar_detail_cont_pane_ParamLimits

0x98f3,	// (0x00080a6b) main_cntbar_detail_cont_pane

0x3631,	// (0x0007a7a9) scroll_pane_cp032_ParamLimits

0x3631,	// (0x0007a7a9) scroll_pane_cp032

0x9907,	// (0x00080a7f) cntbar_detail_list_event_pane_ParamLimits

0x9907,	// (0x00080a7f) cntbar_detail_list_event_pane

0x98b3,	// (0x00080a2b) cntbar_detail_list_shct_pane

0x25e7,	// (0x0007975f) aid_list_gen

0xf026,	// (0x0008619e) aid_scroll

0xf02f,	// (0x000861a7) aid_size_touch_scroll_bar

0x903d,	// (0x000801b5) aid_list_double

0x9917,	// (0x00080a8f) aid_list_single

0x9917,	// (0x00080a8f) aid_list_single_lg

0x0eda,	// (0x00078052) aid_list_z_g_a_sm

0x0ee2,	// (0x0007805a) aid_list_z_g_d

0x0eea,	// (0x00078062) aid_txt_z_prm

0x0ef8,	// (0x00078070) aid_txt_z_prm_cp01

0x0f06,	// (0x0007807e) aid_txt_z_sec

0x9920,	// (0x00080a98) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9920,	// (0x00080a98) main_cntbar_detail_cont_pane_g1

0x9934,	// (0x00080aac) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9934,	// (0x00080aac) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6e,	// (0x00086ee6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6e,	// (0x00086ee6) main_cntbar_detail_cont_pane_g

0xf038,	// (0x000861b0) main_cntbar_detail_cont_pane_t1

0xf046,	// (0x000861be) main_cntbar_detail_cont_pane_t2

0xf054,	// (0x000861cc) main_cntbar_detail_cont_pane_t3

0x0002,

0x0666,	// (0x000777de) main_cntbar_detail_cont_pane_t

0x9944,	// (0x00080abc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9944,	// (0x00080abc) cell_cntbar_detail_list_shct_pane

0xf062,	// (0x000861da) cntbar_detail_list_shct_pane_g1

0xe347,	// (0x000854bf) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd73,	// (0x00086eeb) cntbar_detail_list_shct_pane_g

0x9956,	// (0x00080ace) cntbar_detail_list_event_pane_g1_ParamLimits

0x9956,	// (0x00080ace) cntbar_detail_list_event_pane_g1

0x9962,	// (0x00080ada) cntbar_detail_list_event_pane_g2_ParamLimits

0x9962,	// (0x00080ada) cntbar_detail_list_event_pane_g2

0x0005,

0xfd78,	// (0x00086ef0) cntbar_detail_list_event_pane_g_ParamLimits

0xfd78,	// (0x00086ef0) cntbar_detail_list_event_pane_g

0x99d0,	// (0x00080b48) cntbar_detail_list_event_pane_t1_ParamLimits

0x99d0,	// (0x00080b48) cntbar_detail_list_event_pane_t1

0x99e5,	// (0x00080b5d) cntbar_detail_list_event_pane_t2_ParamLimits

0x99e5,	// (0x00080b5d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd85,	// (0x00086efd) cntbar_detail_list_event_pane_t_ParamLimits

0xfd85,	// (0x00086efd) cntbar_detail_list_event_pane_t

0x1ebb,	// (0x00079033) cell_cntbar_detail_list_shct_pane_g1

0x3d74,	// (0x0007aeec) navi_pane_mv_g3

0xaae4,	// (0x00081c5c) main_cntbar_detail_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_notif_wgt_pane

0xcb08,	// (0x00083c80) aid_tch_main_mp4_pane_g4

0xe97c,	// (0x00085af4) popup_slider_window_cp02

0xe2b4,	// (0x0008542c) list_recal_day_event_pane

0x986d,	// (0x000809e5) cntbar_detail_btn_pane_ParamLimits

0x986d,	// (0x000809e5) cntbar_detail_btn_pane

0x9886,	// (0x000809fe) cntbar_detail_btn_pane_cp01_ParamLimits

0x9886,	// (0x000809fe) cntbar_detail_btn_pane_cp01

0x98b3,	// (0x00080a2b) cntbar_detail_list_shct_pane_ParamLimits

0x98c3,	// (0x00080a3b) cntbar_detail_pane_g1_ParamLimits

0x98c3,	// (0x00080a3b) cntbar_detail_pane_g1

0x98d7,	// (0x00080a4f) cntbar_detail_pane_t1_ParamLimits

0x98d7,	// (0x00080a4f) cntbar_detail_pane_t1

0x996e,	// (0x00080ae6) cntbar_detail_list_event_pane_g3_ParamLimits

0x996e,	// (0x00080ae6) cntbar_detail_list_event_pane_g3

0x9986,	// (0x00080afe) cntbar_detail_list_event_pane_g4_ParamLimits

0x9986,	// (0x00080afe) cntbar_detail_list_event_pane_g4

0x999e,	// (0x00080b16) cntbar_detail_list_event_pane_g5_ParamLimits

0x999e,	// (0x00080b16) cntbar_detail_list_event_pane_g5

0x99b6,	// (0x00080b2e) cntbar_detail_list_event_pane_g6_ParamLimits

0x99b6,	// (0x00080b2e) cntbar_detail_list_event_pane_g6

0x99fa,	// (0x00080b72) cntbar_detail_list_event_pane_t3_ParamLimits

0x99fa,	// (0x00080b72) cntbar_detail_list_event_pane_t3

0x9a0c,	// (0x00080b84) popup_notif_wgt_window_ParamLimits

0x9a0c,	// (0x00080b84) popup_notif_wgt_window

0x9a25,	// (0x00080b9d) popup_submenu_window_cp01_ParamLimits

0x9a25,	// (0x00080b9d) popup_submenu_window_cp01

0x1cca,	// (0x00078e42) bg_popup_window_pane_cp10

0xe350,	// (0x000854c8) listscroll_notif_wgt_pane

0xe362,	// (0x000854da) list_notif_wgt_window

0xe36b,	// (0x000854e3) scroll_pane_cp033

0x9a39,	// (0x00080bb1) list_notif_wgt_row_pane_ParamLimits

0x9a39,	// (0x00080bb1) list_notif_wgt_row_pane

0xe374,	// (0x000854ec) aid_size_list_notif_wgt_del

0xe381,	// (0x000854f9) list_notif_wgt_row_pane_g1

0xe38d,	// (0x00085505) list_notif_wgt_row_pane_g2

0xe39c,	// (0x00085514) list_notif_wgt_row_pane_g3

0x0002,

0xfd8c,	// (0x00086f04) list_notif_wgt_row_pane_g

0xe3a9,	// (0x00085521) list_notif_wgt_row_pane_t1

0xe3bf,	// (0x00085537) list_notif_wgt_row_pane_t2

0xe3d1,	// (0x00085549) list_notif_wgt_row_pane_t3

0x0002,

0xfd93,	// (0x00086f0b) list_notif_wgt_row_pane_t

0xd0b9,	// (0x00084231) list_recal_day_event_pane_g1

0xe3e3,	// (0x0008555b) list_recal_day_event_pane_t1

0xaa67,	// (0x00081bdf) bg_button_pane_cp045

0x9a49,	// (0x00080bc1) cntbar_detail_btn_pane_t1

0x3efb,	// (0x0007b073) main_callh_pane_ParamLimits

0x3efb,	// (0x0007b073) main_callh_pane

0xaa67,	// (0x00081bdf) main_coverflow0_pane

0xaa67,	// (0x00081bdf) main_wgtman_pane

0x8d85,	// (0x0007fefd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8d85,	// (0x0007fefd) main_fs_bigclock_unlock_btn_pane

0x936d,	// (0x000804e5) bg_button_pane_cp16

0x937d,	// (0x000804f5) cell_tport_appsw_pane_g3

0x9a57,	// (0x00080bcf) cf0_flow_pane_ParamLimits

0x9a57,	// (0x00080bcf) cf0_flow_pane

0xe3f2,	// (0x0008556a) listscroll_cf0_pane

0xe3fd,	// (0x00085575) main_cf0_pane_g1

0x9a6c,	// (0x00080be4) main_cf0_pane_t1_ParamLimits

0x9a6c,	// (0x00080be4) main_cf0_pane_t1

0x9a83,	// (0x00080bfb) main_cf0_pane_t2_ParamLimits

0x9a83,	// (0x00080bfb) main_cf0_pane_t2

0x0001,

0xfd9f,	// (0x00086f17) main_cf0_pane_t_ParamLimits

0xfd9f,	// (0x00086f17) main_cf0_pane_t

0xe40f,	// (0x00085587) scroll_pane_cp11

0x9a9a,	// (0x00080c12) cf0_flow_pane_g1

0x9aa6,	// (0x00080c1e) cf0_flow_pane_g2

0x0001,

0xfda4,	// (0x00086f1c) cf0_flow_pane_g

0x9ab2,	// (0x00080c2a) cf0_flow_pane_t1

0xaa67,	// (0x00081bdf) main_call6_pane

0xaa67,	// (0x00081bdf) main_calllock_pane

0x9ac4,	// (0x00080c3c) call6_btn_grp_pane_ParamLimits

0x9ac4,	// (0x00080c3c) call6_btn_grp_pane

0x9ade,	// (0x00080c56) call6_pane_g1_ParamLimits

0x9ade,	// (0x00080c56) call6_pane_g1

0x9af7,	// (0x00080c6f) popup_call6_1st_window_ParamLimits

0x9af7,	// (0x00080c6f) popup_call6_1st_window

0x9b0b,	// (0x00080c83) popup_call6_2nd_window_ParamLimits

0x9b0b,	// (0x00080c83) popup_call6_2nd_window

0x9b1f,	// (0x00080c97) cell_call6_btn_pane_ParamLimits

0x9b1f,	// (0x00080c97) cell_call6_btn_pane

0x1cca,	// (0x00078e42) bg_popup_call2_in_pane_cp03

0xe41a,	// (0x00085592) popup_call6_1st_window_g1

0xe422,	// (0x0008559a) popup_call6_1st_window_g2

0xe42a,	// (0x000855a2) popup_call6_1st_window_g3

0x0002,

0xfda9,	// (0x00086f21) popup_call6_1st_window_g

0xe432,	// (0x000855aa) popup_call6_1st_window_t1

0xe441,	// (0x000855b9) popup_call6_1st_window_t2

0xe451,	// (0x000855c9) popup_call6_1st_window_t3

0x0002,

0xfdb0,	// (0x00086f28) popup_call6_1st_window_t

0x1cca,	// (0x00078e42) bg_popup_call2_in_pane_cp04

0xe461,	// (0x000855d9) popup_call6_2nd_window_g1

0xe469,	// (0x000855e1) popup_call6_2nd_window_g2

0xe471,	// (0x000855e9) popup_call6_2nd_window_g3

0x0002,

0xfdb7,	// (0x00086f2f) popup_call6_2nd_window_g

0xe479,	// (0x000855f1) popup_call6_2nd_window_t1

0xaa67,	// (0x00081bdf) bg_button_pane_cp15

0xe488,	// (0x00085600) cell_call6_btn_pane_g1

0xf000,	// (0x00086178) cell_call6_btn_pane_t1

0x9b33,	// (0x00080cab) listscroll_wgtman_pane_ParamLimits

0x9b33,	// (0x00080cab) listscroll_wgtman_pane

0x9b54,	// (0x00080ccc) wgtman_btn_pane_ParamLimits

0x9b54,	// (0x00080ccc) wgtman_btn_pane

0x3987,	// (0x0007aaff) aid_scroll_copy1

0xe491,	// (0x00085609) list_wgtman_pane

0x9b97,	// (0x00080d0f) wgtman_btn_pane_g1_ParamLimits

0x9b97,	// (0x00080d0f) wgtman_btn_pane_g1

0x9bc3,	// (0x00080d3b) wgtman_btn_pane_t1_ParamLimits

0x9bc3,	// (0x00080d3b) wgtman_btn_pane_t1

0xe49b,	// (0x00085613) wgtman_btn_pane_t2_ParamLimits

0xe49b,	// (0x00085613) wgtman_btn_pane_t2

0x0001,

0xfdbe,	// (0x00086f36) wgtman_btn_pane_t_ParamLimits

0xfdbe,	// (0x00086f36) wgtman_btn_pane_t

0x9c00,	// (0x00080d78) listrow_wgtman_pane_ParamLimits

0x9c00,	// (0x00080d78) listrow_wgtman_pane

0x9c14,	// (0x00080d8c) listrow_wgtman_pane_g1

0x9c21,	// (0x00080d99) listrow_wgtman_pane_g2

0x0001,

0xfdc3,	// (0x00086f3b) listrow_wgtman_pane_g

0x0f14,	// (0x0007808c) listrow_wgtman_pane_t1

0x0f2c,	// (0x000780a4) listrow_wgtman_pane_t2

0x0001,

0xfdc8,	// (0x00086f40) listrow_wgtman_pane_t

0x0f52,	// (0x000780ca) wait_bar_pane_cp09

0xe4b2,	// (0x0008562a) main_calllock_btn_pane

0xe4bc,	// (0x00085634) main_calllock_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp17

0xe488,	// (0x00085600) main_calllock_btn_pane_g1

0xe4c8,	// (0x00085640) main_calllock_btn_pane_t1

0xaa67,	// (0x00081bdf) main_dialer3_pane

0xaa67,	// (0x00081bdf) main_fmrd2_pane

0x1ebb,	// (0x00079033) main_fs_bigclock_unlock_btn_pane_g1

0x9c47,	// (0x00080dbf) main_fs_bigclock_unlock_btn_pane_t1

0x9c55,	// (0x00080dcd) area_fmrd2_info_pane_ParamLimits

0x9c55,	// (0x00080dcd) area_fmrd2_info_pane

0x9c66,	// (0x00080dde) area_fmrd2_visual_pane_ParamLimits

0x9c66,	// (0x00080dde) area_fmrd2_visual_pane

0x9c74,	// (0x00080dec) fmrd2_indi_pane_ParamLimits

0x9c74,	// (0x00080dec) fmrd2_indi_pane

0x9c81,	// (0x00080df9) area_fmrd2_visual_pane_g1

0x9c89,	// (0x00080e01) area_fmrd2_visual_pane_t1

0x9c99,	// (0x00080e11) area_fmrd2_visual_pane_t2

0x9ca9,	// (0x00080e21) area_fmrd2_visual_pane_t3

0x0002,

0xfdd2,	// (0x00086f4a) area_fmrd2_visual_pane_t

0x9cb9,	// (0x00080e31) area_fmrd2_info_pane_g1

0x9cc1,	// (0x00080e39) area_fmrd2_info_pane_t1

0x9cd1,	// (0x00080e49) area_fmrd2_info_pane_t2

0x9ce1,	// (0x00080e59) area_fmrd2_info_pane_t3

0x9cf1,	// (0x00080e69) area_fmrd2_info_pane_t4

0x0003,

0xfdd9,	// (0x00086f51) area_fmrd2_info_pane_t

0x9d01,	// (0x00080e79) fmrd2_indi_pane_t1

0x9d11,	// (0x00080e89) fmrd2_indi_pane_t2

0x9d21,	// (0x00080e99) fmrd2_indi_pane_t3

0x0002,

0xfde2,	// (0x00086f5a) fmrd2_indi_pane_t

0x8e0e,	// (0x0007ff86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8e0e,	// (0x0007ff86) list_single_fs_bigclock_indicator_pane_g5

0x8ec3,	// (0x0008003b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8ec3,	// (0x0008003b) list_single_fs_bigclock_indicator_pane_t5

0x94d6,	// (0x0008064e) aid_cell_bcale_month_pane_ParamLimits

0x94d6,	// (0x0008064e) aid_cell_bcale_month_pane

0x94f4,	// (0x0008066c) bcale_month_pane_ParamLimits

0x94f4,	// (0x0008066c) bcale_month_pane

0x9518,	// (0x00080690) bcale_preview_pane_ParamLimits

0x9518,	// (0x00080690) bcale_preview_pane

0xef98,	// (0x00086110) list_single_fs_bigclock_pane_t1_ParamLimits

0xefb7,	// (0x0008612f) list_single_fs_bigclock_pane_t2_ParamLimits

0xefb7,	// (0x0008612f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd64,	// (0x00086edc) list_single_fs_bigclock_pane_t_ParamLimits

0xfd64,	// (0x00086edc) list_single_fs_bigclock_pane_t

0x9c3f,	// (0x00080db7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdcd,	// (0x00086f45) main_fs_bigclock_unlock_btn_pane_g

0x9d31,	// (0x00080ea9) aid_dia3_key_size_ParamLimits

0x9d31,	// (0x00080ea9) aid_dia3_key_size

0x9d45,	// (0x00080ebd) aid_dia3_listrow_size_ParamLimits

0x9d45,	// (0x00080ebd) aid_dia3_listrow_size

0x9d5f,	// (0x00080ed7) dia3_keypad_fun_pane_ParamLimits

0x9d5f,	// (0x00080ed7) dia3_keypad_fun_pane

0x9d79,	// (0x00080ef1) dia3_keypad_num_pane_ParamLimits

0x9d79,	// (0x00080ef1) dia3_keypad_num_pane

0x9d93,	// (0x00080f0b) dia3_listscroll_pane_ParamLimits

0x9d93,	// (0x00080f0b) dia3_listscroll_pane

0x9da9,	// (0x00080f21) dia3_numentry_pane_ParamLimits

0x9da9,	// (0x00080f21) dia3_numentry_pane

0xe4d7,	// (0x0008564f) dia3_list_pane

0x9dc3,	// (0x00080f3b) scroll_pane_cp12

0xaa67,	// (0x00081bdf) bg_dia3_numentry_pane

0x9dce,	// (0x00080f46) dia3_numentry_pane_t1

0x9ddd,	// (0x00080f55) cell_dia3_key_num_pane

0x9de5,	// (0x00080f5d) cell_dia3_key0_fun_pane_ParamLimits

0x9de5,	// (0x00080f5d) cell_dia3_key0_fun_pane

0x9df9,	// (0x00080f71) cell_dia3_key1_fun_pane_ParamLimits

0x9df9,	// (0x00080f71) cell_dia3_key1_fun_pane

0x9e0e,	// (0x00080f86) dia3_listrow_pane

0xda3a,	// (0x00084bb2) bg_dia3_numentry_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp21

0x9e20,	// (0x00080f98) cell_dia3_key_num_pane_t1

0x9e2e,	// (0x00080fa6) cell_dia3_key_num_pane_t2

0x9e2e,	// (0x00080fa6) cell_dia3_key_num_pane_t3

0x9e2e,	// (0x00080fa6) cell_dia3_key_num_pane_t4

0x0003,

0xfde9,	// (0x00086f61) cell_dia3_key_num_pane_t

0xaa67,	// (0x00081bdf) bg_button_pane_cp19

0x9e3d,	// (0x00080fb5) cell_dia3_key0_fun_pane_g1

0xaa67,	// (0x00081bdf) bg_button_pane_cp20

0x9e45,	// (0x00080fbd) cell_dia3_key1_fun_pane_g1

0x9e4d,	// (0x00080fc5) area_left_week_number_pane

0x9e5b,	// (0x00080fd3) area_top_day_name_pane

0x9e6e,	// (0x00080fe6) frame_month_view_pane

0xe4e2,	// (0x0008565a) grid_month_view_pane

0x9e83,	// (0x00080ffb) cell_top_day_name_pane_ParamLimits

0x9e83,	// (0x00080ffb) cell_top_day_name_pane

0x9eb2,	// (0x0008102a) cell_area_left_week_number_pane_ParamLimits

0x9eb2,	// (0x0008102a) cell_area_left_week_number_pane

0x9ec8,	// (0x00081040) cell_month_view_pane_ParamLimits

0x9ec8,	// (0x00081040) cell_month_view_pane

0xe4f0,	// (0x00085668) frm_month_g1

0x9ef9,	// (0x00081071) frm_month_g2

0x9f0c,	// (0x00081084) frm_month_g3

0x9f1f,	// (0x00081097) frm_month_g4

0x9f32,	// (0x000810aa) frm_month_g5

0x9f45,	// (0x000810bd) frm_month_g6

0x9f5a,	// (0x000810d2) frm_month_g7

0xe4fd,	// (0x00085675) frm_month_g8

0x9f6f,	// (0x000810e7) frm_month_g9

0x9f7f,	// (0x000810f7) frm_month_g10

0x9f8f,	// (0x00081107) frm_month_g11

0x9f9f,	// (0x00081117) frm_month_g12

0x9fb1,	// (0x00081129) frm_month_g13

0x9fc5,	// (0x0008113d) frm_month_g14

0x9fd9,	// (0x00081151) frm_month_g15

0x9fed,	// (0x00081165) frm_month_g16

0x000f,

0xfdf2,	// (0x00086f6a) frm_month_g

0xe50a,	// (0x00085682) cell_top_day_name_pane_t1

0xa001,	// (0x00081179) cell_area_left_week_number_pane_g1

0xa00d,	// (0x00081185) cell_area_left_week_number_pane_t1

0xb210,	// (0x00082388) cell_month_view_pane_g1

0xa020,	// (0x00081198) cell_month_view_pane_t1

0xaa67,	// (0x00081bdf) main_fps_pane

0xde52,	// (0x00084fca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde52,	// (0x00084fca) cmail_ddmenu_btn02_pane_cp1

0xde6e,	// (0x00084fe6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde6e,	// (0x00084fe6) cmail_ddmenu_btn02_pane_cp2

0x9728,	// (0x000808a0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9728,	// (0x000808a0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd17,	// (0x00086e8f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd17,	// (0x00086e8f) cmail_ddmenu_btn02_pane_g

0x9749,	// (0x000808c1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9749,	// (0x000808c1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1c,	// (0x00086e94) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1c,	// (0x00086e94) cmail_ddmenu_btn02_pane_t

0xa033,	// (0x000811ab) fps_text_pane_ParamLimits

0xa033,	// (0x000811ab) fps_text_pane

0xa04a,	// (0x000811c2) main_fps_pane_g1_ParamLimits

0xa04a,	// (0x000811c2) main_fps_pane_g1

0xa062,	// (0x000811da) wait_bar_pane_cp010_ParamLimits

0xa062,	// (0x000811da) wait_bar_pane_cp010

0xa075,	// (0x000811ed) fps_text_pane_t1_ParamLimits

0xa075,	// (0x000811ed) fps_text_pane_t1

0xcdd3,	// (0x00083f4b) cam4_image_uncrop_pane_g1

0xcddc,	// (0x00083f54) cam4_image_uncrop_pane_g2

0x716b,	// (0x0007e2e3) cam4_image_uncrop_pane_g3

0x7174,	// (0x0007e2ec) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x000869d3) cam4_image_uncrop_pane_g

0x9e0e,	// (0x00080f86) dia3_listrow_pane_ParamLimits

0xaa67,	// (0x00081bdf) main_phob2_pane

0x9340,	// (0x000804b8) cell_tport_appsw_pane_cp02_ParamLimits

0x9340,	// (0x000804b8) cell_tport_appsw_pane_cp02

0x9354,	// (0x000804cc) cell_tport_appsw_pane_cp03_ParamLimits

0x9354,	// (0x000804cc) cell_tport_appsw_pane_cp03

0xaa67,	// (0x00081bdf) phob2_contact_card_pane

0xaa67,	// (0x00081bdf) phob2_listscroll_pane

0xe51d,	// (0x00085695) phob2_list_pane

0xe525,	// (0x0008569d) scroll_pane_cp034

0xa08d,	// (0x00081205) phob2_cc_data_pane_ParamLimits

0xa08d,	// (0x00081205) phob2_cc_data_pane

0xa0a6,	// (0x0008121e) phob2_cc_listscroll_pane_ParamLimits

0xa0a6,	// (0x0008121e) phob2_cc_listscroll_pane

0x9c00,	// (0x00080d78) list_double_large_graphic_phob2_pane_ParamLimits

0x9c00,	// (0x00080d78) list_double_large_graphic_phob2_pane

0xa0c8,	// (0x00081240) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa0c8,	// (0x00081240) list_double_large_graphic_phob2_pane_g1

0x0f64,	// (0x000780dc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f64,	// (0x000780dc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe13,	// (0x00086f8b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe13,	// (0x00086f8b) list_double_large_graphic_phob2_pane_g

0x0f7c,	// (0x000780f4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f7c,	// (0x000780f4) list_double_large_graphic_phob2_pane_t1

0x0f91,	// (0x00078109) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0f91,	// (0x00078109) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe1c,	// (0x00086f94) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe1c,	// (0x00086f94) list_double_large_graphic_phob2_pane_t

0xaa67,	// (0x00081bdf) list_highlight_pane_cp024

0xa0e3,	// (0x0008125b) phob2_cc_button_pane

0xa0ed,	// (0x00081265) phob2_cc_data_pane_g1_ParamLimits

0xa0ed,	// (0x00081265) phob2_cc_data_pane_g1

0xa107,	// (0x0008127f) phob2_cc_data_pane_g2_ParamLimits

0xa107,	// (0x0008127f) phob2_cc_data_pane_g2

0x0001,

0xfe21,	// (0x00086f99) phob2_cc_data_pane_g_ParamLimits

0xfe21,	// (0x00086f99) phob2_cc_data_pane_g

0xa119,	// (0x00081291) phob2_cc_data_pane_t1_ParamLimits

0xa119,	// (0x00081291) phob2_cc_data_pane_t1

0xa139,	// (0x000812b1) phob2_cc_data_pane_t2_ParamLimits

0xa139,	// (0x000812b1) phob2_cc_data_pane_t2

0xa159,	// (0x000812d1) phob2_cc_data_pane_t3_ParamLimits

0xa159,	// (0x000812d1) phob2_cc_data_pane_t3

0x0002,

0xfe26,	// (0x00086f9e) phob2_cc_data_pane_t_ParamLimits

0xfe26,	// (0x00086f9e) phob2_cc_data_pane_t

0xe52d,	// (0x000856a5) phob2_cc_list_pane_ParamLimits

0xe52d,	// (0x000856a5) phob2_cc_list_pane

0xd162,	// (0x000842da) scroll_pane_cp035_ParamLimits

0xd162,	// (0x000842da) scroll_pane_cp035

0xaae4,	// (0x00081c5c) bg_button_pane_cp033

0xe539,	// (0x000856b1) phob2_cc_button_pane_g1

0xe545,	// (0x000856bd) phob2_cc_button_pane_t1

0xe55a,	// (0x000856d2) phob2_cc_button_pane_t2

0x0001,

0xfe2d,	// (0x00086fa5) phob2_cc_button_pane_t

0xa179,	// (0x000812f1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa179,	// (0x000812f1) list_double_large_graphic_phob2_cc_pane

0xa1b7,	// (0x0008132f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa1b7,	// (0x0008132f) list_double_large_graphic_phob2_cc_pane_g1

0x0fa6,	// (0x0007811e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fa6,	// (0x0007811e) list_double_large_graphic_phob2_cc_pane_g2

0x0fb2,	// (0x0007812a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0fb2,	// (0x0007812a) list_double_large_graphic_phob2_cc_pane_g3

0x0fbe,	// (0x00078136) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fbe,	// (0x00078136) list_double_large_graphic_phob2_cc_pane_g4

0x0fca,	// (0x00078142) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0fca,	// (0x00078142) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe32,	// (0x00086faa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe32,	// (0x00086faa) list_double_large_graphic_phob2_cc_pane_g

0x0fd6,	// (0x0007814e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fd6,	// (0x0007814e) list_double_large_graphic_phob2_cc_pane_t1

0x0fff,	// (0x00078177) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0fff,	// (0x00078177) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3d,	// (0x00086fb5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3d,	// (0x00086fb5) list_double_large_graphic_phob2_cc_pane_t

0xe56c,	// (0x000856e4) list_highlight_pane_cp025_ParamLimits

0xe56c,	// (0x000856e4) list_highlight_pane_cp025

0xaae4,	// (0x00081c5c) bg_button_pane_cp033_ParamLimits

0xe539,	// (0x000856b1) phob2_cc_button_pane_g1_ParamLimits

0xe545,	// (0x000856bd) phob2_cc_button_pane_t1_ParamLimits

0xe55a,	// (0x000856d2) phob2_cc_button_pane_t2_ParamLimits

0xfe2d,	// (0x00086fa5) phob2_cc_button_pane_t_ParamLimits

0x1260,	// (0x000783d8) popup_wgtman_window

0xcf92,	// (0x0008410a) scroll_pane_cp038

0x9b79,	// (0x00080cf1) wgtman_btn_pane_cp_01_ParamLimits

0x9b79,	// (0x00080cf1) wgtman_btn_pane_cp_01

0xe57a,	// (0x000856f2) wgtman_content_pane

0xe583,	// (0x000856fb) wgtman_heading_pane

0xaa67,	// (0x00081bdf) bg_heading_pane_cp02

0xe58c,	// (0x00085704) wgtman_heading_pane_g1

0xe594,	// (0x0008570c) wgtman_heading_pane_t1

0xe5a2,	// (0x0008571a) scroll_pane_cp036

0xe5aa,	// (0x00085722) wgtman_list_pane

0xdd4e,	// (0x00084ec6) wgtman_list_pane_t1_ParamLimits

0xdd4e,	// (0x00084ec6) wgtman_list_pane_t1

0xea0a,	// (0x00085b82) cam4_grid_pane

0x094d,	// (0x00077ac5) bg_button_pane_cp015_ParamLimits

0x7def,	// (0x0007ef67) bg_button_pane_cp016_ParamLimits

0x7dfb,	// (0x0007ef73) bg_button_pane_cp017_ParamLimits

0x7e16,	// (0x0007ef8e) popup_vitu2_query_window_g3_ParamLimits

0x7e16,	// (0x0007ef8e) popup_vitu2_query_window_g3

0x0a13,	// (0x00077b8b) popup_vitu2_query_window_t6_ParamLimits

0x0a13,	// (0x00077b8b) popup_vitu2_query_window_t6

0x0a3e,	// (0x00077bb6) popup_vitu2_query_window_t7_ParamLimits

0x0a3e,	// (0x00077bb6) popup_vitu2_query_window_t7

0xcdd3,	// (0x00083f4b) cam4_grid_pane_g1

0xcddc,	// (0x00083f54) cam4_grid_pane_g2

0xe5b2,	// (0x0008572a) cam4_grid_pane_g3

0xe5bb,	// (0x00085733) cam4_grid_pane_g4

0x0003,

0xfe42,	// (0x00086fba) cam4_grid_pane_g

0x1fd9,	// (0x00079151) aid_placing_vt_slider_lsc_ParamLimits

0x231a,	// (0x00079492) vidtel_button_pane_ParamLimits

0x231a,	// (0x00079492) vidtel_button_pane

0xaa67,	// (0x00081bdf) bg_button_pane_cp034

0xe5c6,	// (0x0008573e) vidtel_button_pane_g1

0xe5ce,	// (0x00085746) vidtel_button_pane_t1

0xd0a9,	// (0x00084221) aid_size_vtel_slider_touch

0xd162,	// (0x000842da) scroll_pane_cp039

0x8a4c,	// (0x0007fbc4) ncim_query_button_pane_cp01_ParamLimits

0x8a6b,	// (0x0007fbe3) ncimui_query_pane_g1_ParamLimits

0xaae4,	// (0x00081c5c) input_focus_pane_cp012_ParamLimits

0xda78,	// (0x00084bf0) ncim_query_entry_pane_t1_ParamLimits

0xd162,	// (0x000842da) scroll_pane_cp039_ParamLimits

0x3c5f,	// (0x0007add7) navi_pane_bcale_mc_g1

0x3c67,	// (0x0007addf) navi_pane_bcale_mc_t1

0xdea4,	// (0x0008501c) main_sp_fs_email_pane_g1

0xdeb0,	// (0x00085028) main_sp_fs_email_pane_g2

0x0001,

0xfc4c,	// (0x00086dc4) main_sp_fs_email_pane_g

0xed1f,	// (0x00085e97) list_single_cale_mrui_row_pane_g3_ParamLimits

0xed1f,	// (0x00085e97) list_single_cale_mrui_row_pane_g3

0x0eb6,	// (0x0007802e) list_single_recal_day_pane_g5_event_pane

0xe312,	// (0x0008548a) list_single_recal_day_pane_g7

0xe5e4,	// (0x0008575c) list_recal_day_event_pane_cp01

0xe5ed,	// (0x00085765) list_recal_vselct_arw_lo_pane_cp01

0xe5f5,	// (0x0008576d) list_recal_vselct_arw_up_pane_cp01

0xe5fd,	// (0x00085775) list_recal_vselct_pane_cp01

0xd0b9,	// (0x00084231) list_recal_day_event_pane_cp01_g1

0xe607,	// (0x0008577f) list_recal_day_event_pane_cp01_t1

0xe31a,	// (0x00085492) list_single_recal_day_pane_t1_ParamLimits

0xe32c,	// (0x000854a4) list_single_recal_day_pane_t2_ParamLimits

0xfd2c,	// (0x00086ea4) list_single_recal_day_pane_t_ParamLimits

0xb195,	// (0x0008230d) bg_notes_pane_ParamLimits

0xb268,	// (0x000823e0) list_notes_pane_ParamLimits

0x1452,	// (0x000785ca) scroll_pane_cp06_ParamLimits

0xb2a4,	// (0x0008241c) main_notes_pane_ParamLimits

0xaae4,	// (0x00081c5c) main_welc_pane

0xa1f2,	// (0x0008136a) main_welc_body_pane_ParamLimits

0xa1f2,	// (0x0008136a) main_welc_body_pane

0xa211,	// (0x00081389) main_welc_opti_pane_ParamLimits

0xa211,	// (0x00081389) main_welc_opti_pane

0xa292,	// (0x0008140a) main_welc_pane_t1_ParamLimits

0xa292,	// (0x0008140a) main_welc_pane_t1

0xe625,	// (0x0008579d) main_welc_body_row_pane_ParamLimits

0xe625,	// (0x0008579d) main_welc_body_row_pane

0xb202,	// (0x0008237a) main_welc_opti_row_pane_ParamLimits

0xb202,	// (0x0008237a) main_welc_opti_row_pane

0xe63c,	// (0x000857b4) main_welc_opti_row_pane_g1

0xa487,	// (0x000815ff) main_welc_opti_row_pane_t1

0xe644,	// (0x000857bc) main_welc_body_row_pane_t1

0xe35a,	// (0x000854d2) popup_notif_wgt_heading_pane

0xe374,	// (0x000854ec) aid_size_list_notif_wgt_del_ParamLimits

0xe381,	// (0x000854f9) list_notif_wgt_row_pane_g1_ParamLimits

0xe38d,	// (0x00085505) list_notif_wgt_row_pane_g2_ParamLimits

0xe39c,	// (0x00085514) list_notif_wgt_row_pane_g3_ParamLimits

0xfd8c,	// (0x00086f04) list_notif_wgt_row_pane_g_ParamLimits

0xe3a9,	// (0x00085521) list_notif_wgt_row_pane_t1_ParamLimits

0xe3bf,	// (0x00085537) list_notif_wgt_row_pane_t2_ParamLimits

0xe3d1,	// (0x00085549) list_notif_wgt_row_pane_t3_ParamLimits

0xfd93,	// (0x00086f0b) list_notif_wgt_row_pane_t_ParamLimits

0x9c14,	// (0x00080d8c) listrow_wgtman_pane_g1_ParamLimits

0x9c21,	// (0x00080d99) listrow_wgtman_pane_g2_ParamLimits

0xfdc3,	// (0x00086f3b) listrow_wgtman_pane_g_ParamLimits

0x0f14,	// (0x0007808c) listrow_wgtman_pane_t1_ParamLimits

0x0f2c,	// (0x000780a4) listrow_wgtman_pane_t2_ParamLimits

0xfdc8,	// (0x00086f40) listrow_wgtman_pane_t_ParamLimits

0x0f52,	// (0x000780ca) wait_bar_pane_cp09_ParamLimits

0xaa67,	// (0x00081bdf) bg_popup_heading_pane_cp02

0xe653,	// (0x000857cb) popup_notif_wgt_heading_pane_g1

0xe65b,	// (0x000857d3) popup_notif_wgt_heading_pane_t1

0xaa67,	// (0x00081bdf) main_vids_pane

0xaa67,	// (0x00081bdf) vids_listscroll_pane

0xa496,	// (0x0008160e) scroll_pane_cp040

0xaa67,	// (0x00081bdf) vids_list_pane

0xa4a1,	// (0x00081619) vids_list_double_pane_ParamLimits

0xa4a1,	// (0x00081619) vids_list_double_pane

0xa4b4,	// (0x0008162c) vids_list_double_pane_g1

0xa4bd,	// (0x00081635) vids_list_double_pane_t1

0xa4cd,	// (0x00081645) vids_list_double_pane_t2

0x0001,

0xfe61,	// (0x00086fd9) vids_list_double_pane_t

0xaae4,	// (0x00081c5c) main_ncimui_pane_ParamLimits

0x8882,	// (0x0007f9fa) main_ncimui_pane_g1_ParamLimits

0x888e,	// (0x0007fa06) main_ncimui_pane_g2_ParamLimits

0x888e,	// (0x0007fa06) main_ncimui_pane_g2

0x0001,

0xfb4d,	// (0x00086cc5) main_ncimui_pane_g_ParamLimits

0xfb4d,	// (0x00086cc5) main_ncimui_pane_g

0xa230,	// (0x000813a8) main_welc_pane_g1_ParamLimits

0xa230,	// (0x000813a8) main_welc_pane_g1

0xa245,	// (0x000813bd) main_welc_pane_g2_ParamLimits

0xa245,	// (0x000813bd) main_welc_pane_g2

0x0003,

0xfe4b,	// (0x00086fc3) main_welc_pane_g_ParamLimits

0xfe4b,	// (0x00086fc3) main_welc_pane_g

0x1436,	// (0x000785ae) listscroll_mce_pane_ParamLimits

0x3df6,	// (0x0007af6e) wait_bar_pane_cp10

0xbe14,	// (0x00082f8c) main_cale_day_pane_ParamLimits

0xbe14,	// (0x00082f8c) main_cale_week_pane_ParamLimits

0xb195,	// (0x0008230d) main_messa_pane_ParamLimits

0x654e,	// (0x0007d6c6) main_clock2_btn_pane_ParamLimits

0x654e,	// (0x0007d6c6) main_clock2_btn_pane

0xc69a,	// (0x00083812) main_clock2_btn_pane_cp01_ParamLimits

0xc69a,	// (0x00083812) main_clock2_btn_pane_cp01

0xecf0,	// (0x00085e68) list_cale_mrui_pane_ParamLimits

0xe407,	// (0x0008557f) main_cf0_pane_g2

0x0001,

0xfd9a,	// (0x00086f12) main_cf0_pane_g

0x9e4d,	// (0x00080fc5) area_left_week_number_pane_ParamLimits

0x9e5b,	// (0x00080fd3) area_top_day_name_pane_ParamLimits

0x9e6e,	// (0x00080fe6) frame_month_view_pane_ParamLimits

0xe4e2,	// (0x0008565a) grid_month_view_pane_ParamLimits

0xe4f0,	// (0x00085668) frm_month_g1_ParamLimits

0x9ef9,	// (0x00081071) frm_month_g2_ParamLimits

0x9f0c,	// (0x00081084) frm_month_g3_ParamLimits

0x9f1f,	// (0x00081097) frm_month_g4_ParamLimits

0x9f32,	// (0x000810aa) frm_month_g5_ParamLimits

0x9f45,	// (0x000810bd) frm_month_g6_ParamLimits

0x9f5a,	// (0x000810d2) frm_month_g7_ParamLimits

0xe4fd,	// (0x00085675) frm_month_g8_ParamLimits

0x9f6f,	// (0x000810e7) frm_month_g9_ParamLimits

0x9f7f,	// (0x000810f7) frm_month_g10_ParamLimits

0x9f8f,	// (0x00081107) frm_month_g11_ParamLimits

0x9f9f,	// (0x00081117) frm_month_g12_ParamLimits

0x9fb1,	// (0x00081129) frm_month_g13_ParamLimits

0x9fc5,	// (0x0008113d) frm_month_g14_ParamLimits

0x9fd9,	// (0x00081151) frm_month_g15_ParamLimits

0x9fed,	// (0x00081165) frm_month_g16_ParamLimits

0xfdf2,	// (0x00086f6a) frm_month_g_ParamLimits

0xe50a,	// (0x00085682) cell_top_day_name_pane_t1_ParamLimits

0xa001,	// (0x00081179) cell_area_left_week_number_pane_g1_ParamLimits

0xa00d,	// (0x00081185) cell_area_left_week_number_pane_t1_ParamLimits

0xb210,	// (0x00082388) cell_month_view_pane_g1_ParamLimits

0xa020,	// (0x00081198) cell_month_view_pane_t1_ParamLimits

0xb18d,	// (0x00082305) main_clock2_btn_pane_g1

0xe669,	// (0x000857e1) main_clock2_btn_pane_t1

0xaae4,	// (0x00081c5c) listscroll_cmail_pane_ParamLimits

0xdea4,	// (0x0008501c) main_sp_fs_email_pane_g1_ParamLimits

0xdeb0,	// (0x00085028) main_sp_fs_email_pane_g2_ParamLimits

0xfc4c,	// (0x00086dc4) main_sp_fs_email_pane_g_ParamLimits

0xedf9,	// (0x00085f71) list_recal_day_pane_ParamLimits

0xee0a,	// (0x00085f82) mian_recal_day_pane_t1

0x0d07,	// (0x00077e7f) list_single_dyc_row_text_pane_t4_ParamLimits

0x0d07,	// (0x00077e7f) list_single_dyc_row_text_pane_t4

0x0d50,	// (0x00077ec8) list_single_dyc_row_text_pane_t5_ParamLimits

0x0d50,	// (0x00077ec8) list_single_dyc_row_text_pane_t5

0xdf5a,	// (0x000850d2) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf5a,	// (0x000850d2) list_single_dyc_row_text_pane_t6

0x33f9,	// (0x0007a571) aid_mgn_list_cale_time_pane

0xaae4,	// (0x00081c5c) main_gallery2_pane_ParamLimits

0xc6ae,	// (0x00083826) main_clock2_pane_cp01_t1

0xc6bc,	// (0x00083834) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x000868aa) main_clock2_pane_cp01_t

0x1883,	// (0x000789fb) cale_week_scroll_pane_g16_ParamLimits

0x1883,	// (0x000789fb) cale_week_scroll_pane_g16

0x1cca,	// (0x00078e42) vorec_slider_pane

0xe5ce,	// (0x00085746) vidtel_button_pane_t1_ParamLimits

0x97b7,	// (0x0008092f) main_fs_bigclock_clock_pane_g1_ParamLimits

0x97b7,	// (0x0008092f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x97ca,	// (0x00080942) main_fs_bigclock_clock_pane_g3_ParamLimits

0x97ca,	// (0x00080942) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4f,	// (0x00086ec7) main_fs_bigclock_clock_pane_g_ParamLimits

0x97e1,	// (0x00080959) main_fs_bigclock_clock_pane_t1_ParamLimits

0x97f7,	// (0x0008096f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd58,	// (0x00086ed0) main_fs_bigclock_clock_pane_t_ParamLimits

0x5d94,	// (0x0007cf0c) main_mup3_lyrics_pane_ParamLimits

0x5d94,	// (0x0007cf0c) main_mup3_lyrics_pane

0xa503,	// (0x0008167b) main_mup3_lyrics_pane_t1_ParamLimits

0xa503,	// (0x0008167b) main_mup3_lyrics_pane_t1

0xcaf2,	// (0x00083c6a) aid_main_mp4_pane_t1_area

0xcafc,	// (0x00083c74) aid_main_mp4_pane_t2_area

0xcba8,	// (0x00083d20) main_mp4_pane_g7_ParamLimits

0xcba8,	// (0x00083d20) main_mp4_pane_g7

0xcbb4,	// (0x00083d2c) main_mp4_pane_g8_ParamLimits

0xcbb4,	// (0x00083d2c) main_mp4_pane_g8

0x6f32,	// (0x0007e0aa) aid_call6_pane_g1_size

0xa1a7,	// (0x0008131f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa1a7,	// (0x0008131f) list_double_large_graphic_phob2_other_pane

0xa51e,	// (0x00081696) list_double_large_graphic_phob2_other_pane_g1

0xaa67,	// (0x00081bdf) list_highlight_pane_cp026

0xaae4,	// (0x00081c5c) main_welc_pane_ParamLimits

0x91f0,	// (0x00080368) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x91f0,	// (0x00080368) main_sp_fs_ctrlbar_pane_g3

0x920a,	// (0x00080382) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x920a,	// (0x00080382) main_sp_fs_ctrlbar_pane_g4

0x923e,	// (0x000803b6) toolbar2_fixed_button_pane_cp01

0x9249,	// (0x000803c1) toolbar2_fixed_button_pane_cp02

0x9256,	// (0x000803ce) toolbar2_fixed_button_pane_cp03

0xa1d6,	// (0x0008134e) list_welc_entry_pane_ParamLimits

0xa1d6,	// (0x0008134e) list_welc_entry_pane

0xa25a,	// (0x000813d2) main_welc_pane_g3_ParamLimits

0xa25a,	// (0x000813d2) main_welc_pane_g3

0xa2b4,	// (0x0008142c) main_welc_pane_t2_ParamLimits

0xa2b4,	// (0x0008142c) main_welc_pane_t2

0xa2cf,	// (0x00081447) main_welc_pane_t3_ParamLimits

0xa2cf,	// (0x00081447) main_welc_pane_t3

0x0005,

0xfe54,	// (0x00086fcc) main_welc_pane_t_ParamLimits

0xfe54,	// (0x00086fcc) main_welc_pane_t

0xa40b,	// (0x00081583) welc_button_pane_ParamLimits

0xa40b,	// (0x00081583) welc_button_pane

0xa473,	// (0x000815eb) welc_service_logo_pane_ParamLimits

0xa473,	// (0x000815eb) welc_service_logo_pane

0xa526,	// (0x0008169e) list_single_welc_entry_pane_ParamLimits

0xa526,	// (0x0008169e) list_single_welc_entry_pane

0xa539,	// (0x000816b1) list_single_welc_entry_pane_g1

0xa541,	// (0x000816b9) list_single_welc_entry_pane_t1

0xa54f,	// (0x000816c7) list_single_welc_entry_pane_t2

0x0001,

0xfe66,	// (0x00086fde) list_single_welc_entry_pane_t

0xaa67,	// (0x00081bdf) bg_button_pane_cp035

0xe677,	// (0x000857ef) welc_button_pane_t1

0xe685,	// (0x000857fd) welc_service_logo_pane_g1

0xe68e,	// (0x00085806) welc_service_logo_pane_g2

0x0001,

0xfe6b,	// (0x00086fe3) welc_service_logo_pane_g

0xaa67,	// (0x00081bdf) main_int_radio_pane

0xd916,	// (0x00084a8e) list_single_fs_dyc_pane_g1

0x0f70,	// (0x000780e8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0f70,	// (0x000780e8) list_double_large_graphic_phob2_pane_g3

0xa0d5,	// (0x0008124d) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa0d5,	// (0x0008124d) list_double_large_graphic_phob2_pane_g4

0xa55d,	// (0x000816d5) main_int_radio1_pane_ParamLimits

0xa55d,	// (0x000816d5) main_int_radio1_pane

0xe697,	// (0x0008580f) find_pane_cp02

0xa57a,	// (0x000816f2) input_focus_pane_cp12_ParamLimits

0xa57a,	// (0x000816f2) input_focus_pane_cp12

0xa58a,	// (0x00081702) input_focus_pane_cp13_ParamLimits

0xa58a,	// (0x00081702) input_focus_pane_cp13

0xa59e,	// (0x00081716) input_focus_pane_cp14_ParamLimits

0xa59e,	// (0x00081716) input_focus_pane_cp14

0xe6a0,	// (0x00085818) int_radio1_listscroll_pane

0xa5b2,	// (0x0008172a) main_int_radio1_pane_g1_ParamLimits

0xa5b2,	// (0x0008172a) main_int_radio1_pane_g1

0xa5c8,	// (0x00081740) main_int_radio1_pane_t1_ParamLimits

0xa5c8,	// (0x00081740) main_int_radio1_pane_t1

0xa5e1,	// (0x00081759) main_int_radio1_pane_t2_ParamLimits

0xa5e1,	// (0x00081759) main_int_radio1_pane_t2

0xa5fc,	// (0x00081774) main_int_radio1_pane_t3_ParamLimits

0xa5fc,	// (0x00081774) main_int_radio1_pane_t3

0xa617,	// (0x0008178f) main_int_radio1_pane_t4_ParamLimits

0xa617,	// (0x0008178f) main_int_radio1_pane_t4

0xe6aa,	// (0x00085822) main_int_radio1_pane_t5_ParamLimits

0xe6aa,	// (0x00085822) main_int_radio1_pane_t5

0xa629,	// (0x000817a1) main_int_radio1_pane_t6_ParamLimits

0xa629,	// (0x000817a1) main_int_radio1_pane_t6

0xa63e,	// (0x000817b6) main_int_radio1_pane_t7_ParamLimits

0xa63e,	// (0x000817b6) main_int_radio1_pane_t7

0xa653,	// (0x000817cb) main_int_radio1_pane_t8_ParamLimits

0xa653,	// (0x000817cb) main_int_radio1_pane_t8

0xa670,	// (0x000817e8) main_int_radio1_pane_t9_ParamLimits

0xa670,	// (0x000817e8) main_int_radio1_pane_t9

0xa682,	// (0x000817fa) main_int_radio1_pane_t10_ParamLimits

0xa682,	// (0x000817fa) main_int_radio1_pane_t10

0xa6a8,	// (0x00081820) main_int_radio1_pane_t11_ParamLimits

0xa6a8,	// (0x00081820) main_int_radio1_pane_t11

0xa6ce,	// (0x00081846) main_int_radio1_pane_t12_ParamLimits

0xa6ce,	// (0x00081846) main_int_radio1_pane_t12

0x000b,

0xfe70,	// (0x00086fe8) main_int_radio1_pane_t_ParamLimits

0xfe70,	// (0x00086fe8) main_int_radio1_pane_t

0xe51d,	// (0x00085695) int_radio_list_pane

0xe525,	// (0x0008569d) scroll_pane_cp037

0xe6bc,	// (0x00085834) list_double_large_graphic_int_radio_pane_ParamLimits

0xe6bc,	// (0x00085834) list_double_large_graphic_int_radio_pane

0xe6d0,	// (0x00085848) list_double_large_graphic_int_radio_pane_g1

0xe6d9,	// (0x00085851) list_double_large_graphic_int_radio_pane_t1

0xe6e7,	// (0x0008585f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe89,	// (0x00087001) list_double_large_graphic_int_radio_pane_t

0xaa67,	// (0x00081bdf) list_highlight_pane_cp027

0xe615,	// (0x0008578d) main_button_pane_4

0xa26e,	// (0x000813e6) main_welc_pane_g4_ParamLimits

0xa26e,	// (0x000813e6) main_welc_pane_g4

0xa2ec,	// (0x00081464) main_welc_pane_t4_ParamLimits

0xa2ec,	// (0x00081464) main_welc_pane_t4

0xa303,	// (0x0008147b) main_welc_pane_t5_ParamLimits

0xa303,	// (0x0008147b) main_welc_pane_t5

0xa344,	// (0x000814bc) main_welc_pane_t6_ParamLimits

0xa344,	// (0x000814bc) main_welc_pane_t6

0xa422,	// (0x0008159a) welc_button_pane_2_ParamLimits

0xa422,	// (0x0008159a) welc_button_pane_2

0xa43c,	// (0x000815b4) welc_button_pane_3_ParamLimits

0xa43c,	// (0x000815b4) welc_button_pane_3

0xe61d,	// (0x00085795) welc_button_pane_4

0xa45b,	// (0x000815d3) welc_button_pane_5_ParamLimits

0xa45b,	// (0x000815d3) welc_button_pane_5

0x1064,	// (0x000781dc) main_popup_welc_pane

0xe704,	// (0x0008587c) main_welc_sk_g3

0xe70e,	// (0x00085886) main_welc_sk_g4

0xe718,	// (0x00085890) main_welc_sk_t3

0xe728,	// (0x000858a0) main_welc_sk_t4

0xe738,	// (0x000858b0) popup_welc_pane_t4

0xe746,	// (0x000858be) popup_welc_pane_t5

0xe756,	// (0x000858ce) popup_welc_pane_t6

0xaa67,	// (0x00081bdf) main_acti_pane

0xaa67,	// (0x00081bdf) main_sso_pane

0xa6e0,	// (0x00081858) sso_body_pane_ParamLimits

0xa6e0,	// (0x00081858) sso_body_pane

0xa6f5,	// (0x0008186d) sso_logo_pane_ParamLimits

0xa6f5,	// (0x0008186d) sso_logo_pane

0xa725,	// (0x0008189d) sso_sk_pane_ParamLimits

0xa725,	// (0x0008189d) sso_sk_pane

0x1ebb,	// (0x00079033) main_sso_logo_pane_g1

0xa737,	// (0x000818af) sso_sk_pane_t1_ParamLimits

0xa737,	// (0x000818af) sso_sk_pane_t1

0xa751,	// (0x000818c9) sso_sk_pane_t2_ParamLimits

0xa751,	// (0x000818c9) sso_sk_pane_t2

0x0001,

0xfe8e,	// (0x00087006) sso_sk_pane_t_ParamLimits

0xfe8e,	// (0x00087006) sso_sk_pane_t

0xe798,	// (0x00085910) aid_sso_gap

0xe7a1,	// (0x00085919) aid_sso_txt1

0xe7ab,	// (0x00085923) aid_sso_txt2

0xe7b5,	// (0x0008592d) aid_sso_txt3

0x0002,

0xfe93,	// (0x0008700b) aid_sso_txt

0xe7bf,	// (0x00085937) aid_sso_widget

0xa7bb,	// (0x00081933) sso_btn_pane_ParamLimits

0xa7bb,	// (0x00081933) sso_btn_pane

0xa843,	// (0x000819bb) sso_option_pane_ParamLimits

0xa843,	// (0x000819bb) sso_option_pane

0xa8c7,	// (0x00081a3f) sso_query_pane_ParamLimits

0xa8c7,	// (0x00081a3f) sso_query_pane

0xa91f,	// (0x00081a97) sso_query_pane_cp01_ParamLimits

0xa91f,	// (0x00081a97) sso_query_pane_cp01

0xa97d,	// (0x00081af5) sso_t_hdr_pane_ParamLimits

0xa97d,	// (0x00081af5) sso_t_hdr_pane

0xa9a1,	// (0x00081b19) sso_t_nml_pane_ParamLimits

0xa9a1,	// (0x00081b19) sso_t_nml_pane

0xe7b5,	// (0x0008592d) sso_t_sub_pane

0xa702,	// (0x0008187a) sso_popup_window_ParamLimits

0xa702,	// (0x0008187a) sso_popup_window

0xa767,	// (0x000818df) sso_apps_pane_ParamLimits

0xa767,	// (0x000818df) sso_apps_pane

0xa791,	// (0x00081909) sso_body_pane_g1

0xa79b,	// (0x00081913) sso_body_pane_t1

0xa7ab,	// (0x00081923) sso_body_pane_t2

0x0001,

0xfe9a,	// (0x00087012) sso_body_pane_t

0xa80d,	// (0x00081985) sso_btn_pane_cp01_ParamLimits

0xa80d,	// (0x00081985) sso_btn_pane_cp01

0xa89b,	// (0x00081a13) sso_prog_pane_ParamLimits

0xa89b,	// (0x00081a13) sso_prog_pane

0xe7c9,	// (0x00085941) sso_t_hdr_pane_t1_ParamLimits

0xe7c9,	// (0x00085941) sso_t_hdr_pane_t1

0xe7dc,	// (0x00085954) input_focus_pane_cp10_ParamLimits

0xe7dc,	// (0x00085954) input_focus_pane_cp10

0xe7f2,	// (0x0008596a) sso_query_pane_t1_ParamLimits

0xe7f2,	// (0x0008596a) sso_query_pane_t1

0xe805,	// (0x0008597d) sso_query_pane_t2_ParamLimits

0xe805,	// (0x0008597d) sso_query_pane_t2

0xe81f,	// (0x00085997) sso_query_pane_t3_ParamLimits

0xe81f,	// (0x00085997) sso_query_pane_t3

0xe849,	// (0x000859c1) sso_query_pane_t4_ParamLimits

0xe849,	// (0x000859c1) sso_query_pane_t4

0x0003,

0xfe9f,	// (0x00087017) sso_query_pane_t_ParamLimits

0xfe9f,	// (0x00087017) sso_query_pane_t

0xaa67,	// (0x00081bdf) bg_button_pane_cp22

0xe6f5,	// (0x0008586d) sso_btn_pane_t1

0xa9f7,	// (0x00081b6f) sso_t_nml_pane_t1_ParamLimits

0xa9f7,	// (0x00081b6f) sso_t_nml_pane_t1

0xe86d,	// (0x000859e5) sso_option_row_pane_ParamLimits

0xe86d,	// (0x000859e5) sso_option_row_pane

0xe87a,	// (0x000859f2) sso_t_sub_pane_t1_ParamLimits

0xe87a,	// (0x000859f2) sso_t_sub_pane_t1

0xaae4,	// (0x00081c5c) bg_popup_window_pane_cp11_ParamLimits

0xaae4,	// (0x00081c5c) bg_popup_window_pane_cp11

0xe88d,	// (0x00085a05) popup_sk_window_cp01_ParamLimits

0xe88d,	// (0x00085a05) popup_sk_window_cp01

0xe89a,	// (0x00085a12) sso_popup_body_pane_ParamLimits

0xe89a,	// (0x00085a12) sso_popup_body_pane

0xe8a7,	// (0x00085a1f) scroll_pane_cp21_ParamLimits

0xe8a7,	// (0x00085a1f) scroll_pane_cp21

0xe8b4,	// (0x00085a2c) sso_popup_body_t_pane_ParamLimits

0xe8b4,	// (0x00085a2c) sso_popup_body_t_pane

0xe8c1,	// (0x00085a39) sso_popup_body_t_hdr_pane_ParamLimits

0xe8c1,	// (0x00085a39) sso_popup_body_t_hdr_pane

0xe8cf,	// (0x00085a47) sso_popup_body_t_nml_pane_ParamLimits

0xe8cf,	// (0x00085a47) sso_popup_body_t_nml_pane

0xe8ea,	// (0x00085a62) sso_popup_body_t_sub_pane_ParamLimits

0xe8ea,	// (0x00085a62) sso_popup_body_t_sub_pane

0xe90d,	// (0x00085a85) sso_popup_body_t_hdr_pane_t1

0xaa12,	// (0x00081b8a) sso_popup_body_t_nml_pane_t1_ParamLimits

0xaa12,	// (0x00081b8a) sso_popup_body_t_nml_pane_t1

0xe91d,	// (0x00085a95) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe91d,	// (0x00085a95) sso_popup_body_t_sub_pane_t1

0x1ebb,	// (0x00079033) sso_prog_pane_g1

0xaa4d,	// (0x00081bc5) sso_apps_pane_comp1_ParamLimits

0xaa4d,	// (0x00081bc5) sso_apps_pane_comp1

0xe942,	// (0x00085aba) sso_apps_pane_comp1_g1

0xe94a,	// (0x00085ac2) sso_apps_pane_comp1_t1

0xe958,	// (0x00085ad0) sso_option_row_pane_g1

0xe960,	// (0x00085ad8) sso_option_row_pane_t1

0xa1c3,	// (0x0008133b) bg_welc_area_ParamLimits

0xa1c3,	// (0x0008133b) bg_welc_area

0xa382,	// (0x000814fa) sso_t_hdr_pane_a_t1_ParamLimits

0xa382,	// (0x000814fa) sso_t_hdr_pane_a_t1

0xa39d,	// (0x00081515) sso_t_nml_pane_a_t1_ParamLimits

0xa39d,	// (0x00081515) sso_t_nml_pane_a_t1

0xa3d0,	// (0x00081548) sso_t_sub_pane_a_t1_ParamLimits

0xa3d0,	// (0x00081548) sso_t_sub_pane_a_t1

0xe6f5,	// (0x0008586d) sso_btn_pane_t1_copy1

0xaa67,	// (0x00081bdf) welc_button_pane_2_comp1

0xe766,	// (0x000858de) sso_t_hdr_pane_p_t1

0xe776,	// (0x000858ee) sso_t_nml_pane_p_t1

0xe786,	// (0x000858fe) sso_t_sub_pane_p_t1
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
