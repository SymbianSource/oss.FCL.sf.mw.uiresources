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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001678e };

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
0x84c2,	// (0x0001ec50) Screen

0x84ce,	// (0x0001ec5c) application_window

0x850e,	// (0x0001ec9c) area_bottom_pane_ParamLimits

0x850e,	// (0x0001ec9c) area_bottom_pane

0x8543,	// (0x0001ecd1) area_top_pane_ParamLimits

0x8543,	// (0x0001ecd1) area_top_pane

0x04cb,	// (0x00016c59) call_video_uplink_pane_ParamLimits

0x04cb,	// (0x00016c59) call_video_uplink_pane

0x85d1,	// (0x0001ed5f) main_pane_ParamLimits

0x85d1,	// (0x0001ed5f) main_pane

0x2e54,	// (0x000195e2) context_pane

0xb21f,	// (0x000219ad) navi_pane

0xb243,	// (0x000219d1) popup_cale_events_window_ParamLimits

0xb243,	// (0x000219d1) popup_cale_events_window

0x2e67,	// (0x000195f5) popup_mup_playback_window

0xb25b,	// (0x000219e9) signal_pane

0x0c52,	// (0x000173e0) main_browser_pane

0x1996,	// (0x00018124) main_burst_pane

0xb0d1,	// (0x0002185f) main_calc_pane

0x1996,	// (0x00018124) main_cale_day_pane

0x0c52,	// (0x000173e0) main_cale_month_pane

0x1996,	// (0x00018124) main_cale_week_pane

0x1996,	// (0x00018124) main_call_pane

0x090a,	// (0x00017098) main_call_poc_pane

0x1996,	// (0x00018124) main_camera_pane

0x1996,	// (0x00018124) main_chi_dic_pane

0x1838,	// (0x00017fc6) main_clock_pane

0x090a,	// (0x00017098) main_fmradio_pane

0x1996,	// (0x00018124) main_graph_messa_pane

0x090a,	// (0x00017098) main_help_pane

0x0c52,	// (0x000173e0) main_im_pane

0x0b65,	// (0x000172f3) main_image_pane_ParamLimits

0x0b65,	// (0x000172f3) main_image_pane

0x090a,	// (0x00017098) main_location2_pane

0x1996,	// (0x00018124) main_location_pane

0x090a,	// (0x00017098) main_messa_pane

0x090a,	// (0x00017098) main_mp2_pane

0x1996,	// (0x00018124) main_mp_pane

0x090a,	// (0x00017098) main_msg_pane

0x090a,	// (0x00017098) main_mup_eq_pane

0x090a,	// (0x00017098) main_mup_pane

0x1996,	// (0x00018124) main_notes_pane

0x090a,	// (0x00017098) main_pec_pane

0x090a,	// (0x00017098) main_phob_pane

0x090a,	// (0x00017098) main_pinb_pane

0x090a,	// (0x00017098) main_postcard_pane

0x090a,	// (0x00017098) main_qdial_pane

0x1996,	// (0x00018124) main_skin_pane

0x090a,	// (0x00017098) main_smil2_pane

0x1996,	// (0x00018124) main_smil_pane

0x1996,	// (0x00018124) main_video_pane

0x1996,	// (0x00018124) main_video_tele_pane

0x0b65,	// (0x000172f3) main_viewer_pane_ParamLimits

0x0b65,	// (0x000172f3) main_viewer_pane

0x1996,	// (0x00018124) main_vorec_pane

0xb109,	// (0x00021897) popup_blid_sat_info_window_ParamLimits

0xb109,	// (0x00021897) popup_blid_sat_info_window

0xb123,	// (0x000218b1) popup_dyc_status_message_window_ParamLimits

0xb123,	// (0x000218b1) popup_dyc_status_message_window

0xb133,	// (0x000218c1) popup_grid_large_graphic_window_ParamLimits

0xb133,	// (0x000218c1) popup_grid_large_graphic_window

0xb1ab,	// (0x00021939) popup_loc_request_window_ParamLimits

0xb1ab,	// (0x00021939) popup_loc_request_window

0xb1f3,	// (0x00021981) popup_wml_address_window_ParamLimits

0xb1f3,	// (0x00021981) popup_wml_address_window

0xafa9,	// (0x00021737) call_muted_g1

0xac65,	// (0x000213f3) popup_call_audio_conf_window_ParamLimits

0xac65,	// (0x000213f3) popup_call_audio_conf_window

0xafb9,	// (0x00021747) popup_call_audio_first_window_ParamLimits

0xafb9,	// (0x00021747) popup_call_audio_first_window

0xaff9,	// (0x00021787) popup_call_audio_in_window_ParamLimits

0xaff9,	// (0x00021787) popup_call_audio_in_window

0xb01d,	// (0x000217ab) popup_call_audio_out_window_ParamLimits

0xb01d,	// (0x000217ab) popup_call_audio_out_window

0xb03f,	// (0x000217cd) popup_call_audio_second_window_ParamLimits

0xb03f,	// (0x000217cd) popup_call_audio_second_window

0xb06f,	// (0x000217fd) popup_call_audio_wait_window_ParamLimits

0xb06f,	// (0x000217fd) popup_call_audio_wait_window

0xb090,	// (0x0002181e) popup_number_entry_window_ParamLimits

0xb090,	// (0x0002181e) popup_number_entry_window

0x04f7,	// (0x00016c85) bg_popup_call_pane_cp05_ParamLimits

0x04f7,	// (0x00016c85) bg_popup_call_pane_cp05

0x0517,	// (0x00016ca5) popup_number_entry_window_t1

0x052a,	// (0x00016cb8) popup_number_entry_window_t2

0x053c,	// (0x00016cca) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00025889) popup_number_entry_window_t

0x054e,	// (0x00016cdc) text_title_cp2

0x0561,	// (0x00016cef) bg_popup_call_pane_cp_ParamLimits

0x0561,	// (0x00016cef) bg_popup_call_pane_cp

0x056f,	// (0x00016cfd) call_thumbnail_pane

0x0577,	// (0x00016d05) popup_call_audio_in_window_g1_ParamLimits

0x0577,	// (0x00016d05) popup_call_audio_in_window_g1

0x0583,	// (0x00016d11) popup_call_audio_in_window_g2_ParamLimits

0x0583,	// (0x00016d11) popup_call_audio_in_window_g2

0x058f,	// (0x00016d1d) popup_call_audio_in_window_g3_ParamLimits

0x058f,	// (0x00016d1d) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00025892) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00025892) popup_call_audio_in_window_g

0x059b,	// (0x00016d29) popup_call_audio_in_window_t1_ParamLimits

0x059b,	// (0x00016d29) popup_call_audio_in_window_t1

0x05b7,	// (0x00016d45) popup_call_audio_in_window_t2_ParamLimits

0x05b7,	// (0x00016d45) popup_call_audio_in_window_t2

0x05d3,	// (0x00016d61) popup_call_audio_in_window_t3_ParamLimits

0x05d3,	// (0x00016d61) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00025899) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00025899) popup_call_audio_in_window_t

0x0561,	// (0x00016cef) bg_popup_call_pane_cp01_ParamLimits

0x0561,	// (0x00016cef) bg_popup_call_pane_cp01

0x056f,	// (0x00016cfd) call_thumbnail_pane_cp02

0x05e6,	// (0x00016d74) call_type_pane_cp022

0x05ee,	// (0x00016d7c) popup_call_audio_out_window_g1_ParamLimits

0x05ee,	// (0x00016d7c) popup_call_audio_out_window_g1

0x0600,	// (0x00016d8e) popup_call_audio_out_window_g2_ParamLimits

0x0600,	// (0x00016d8e) popup_call_audio_out_window_g2

0x060c,	// (0x00016d9a) popup_call_audio_out_window_g3_ParamLimits

0x060c,	// (0x00016d9a) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000258a0) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000258a0) popup_call_audio_out_window_g

0x061e,	// (0x00016dac) popup_call_audio_out_window_t1_ParamLimits

0x061e,	// (0x00016dac) popup_call_audio_out_window_t1

0x0636,	// (0x00016dc4) popup_call_audio_out_window_t2_ParamLimits

0x0636,	// (0x00016dc4) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000258a7) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000258a7) popup_call_audio_out_window_t

0x064b,	// (0x00016dd9) bg_popup_call_pane_ParamLimits

0x064b,	// (0x00016dd9) bg_popup_call_pane

0x87c5,	// (0x0001ef53) call_thumbnail_pane_cp_ParamLimits

0x87c5,	// (0x0001ef53) call_thumbnail_pane_cp

0x06cf,	// (0x00016e5d) call_type_pane_cp01_ParamLimits

0x06cf,	// (0x00016e5d) call_type_pane_cp01

0x0713,	// (0x00016ea1) popup_call_audio_first_window_g1_ParamLimits

0x0713,	// (0x00016ea1) popup_call_audio_first_window_g1

0x075f,	// (0x00016eed) popup_call_audio_first_window_g2_ParamLimits

0x075f,	// (0x00016eed) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000258ac) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000258ac) popup_call_audio_first_window_g

0x07a3,	// (0x00016f31) popup_call_audio_first_window_t1_ParamLimits

0x07a3,	// (0x00016f31) popup_call_audio_first_window_t1

0x084f,	// (0x00016fdd) popup_call_audio_first_window_t4_ParamLimits

0x084f,	// (0x00016fdd) popup_call_audio_first_window_t4

0x08db,	// (0x00017069) popup_call_audio_first_window_t5_ParamLimits

0x08db,	// (0x00017069) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000258b1) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000258b1) popup_call_audio_first_window_t

0x090a,	// (0x00017098) bg_popup_call_pane_cp02

0x0914,	// (0x000170a2) call_type_pane_cp023

0x091c,	// (0x000170aa) popup_call_audio_wait_window_g1

0x0924,	// (0x000170b2) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000258b8) popup_call_audio_wait_window_g

0x092c,	// (0x000170ba) popup_call_audio_wait_window_t3

0x093a,	// (0x000170c8) bg_popup_call_pane_cp03_ParamLimits

0x093a,	// (0x000170c8) bg_popup_call_pane_cp03

0x099a,	// (0x00017128) call_thumbnail_pane_cp011_ParamLimits

0x099a,	// (0x00017128) call_thumbnail_pane_cp011

0x09a6,	// (0x00017134) call_type_pane_cp034_ParamLimits

0x09a6,	// (0x00017134) call_type_pane_cp034

0x09e2,	// (0x00017170) popup_call_audio_second_window_g1_ParamLimits

0x09e2,	// (0x00017170) popup_call_audio_second_window_g1

0x0a1e,	// (0x000171ac) popup_call_audio_second_window_g2_ParamLimits

0x0a1e,	// (0x000171ac) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000258bd) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000258bd) popup_call_audio_second_window_g

0x0a5a,	// (0x000171e8) popup_call_audio_second_window_t1_ParamLimits

0x0a5a,	// (0x000171e8) popup_call_audio_second_window_t1

0x0adb,	// (0x00017269) popup_call_audio_second_window_t2_ParamLimits

0x0adb,	// (0x00017269) popup_call_audio_second_window_t2

0x0b11,	// (0x0001729f) popup_call_audio_second_window_t3_ParamLimits

0x0b11,	// (0x0001729f) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000258c2) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000258c2) popup_call_audio_second_window_t

0x090a,	// (0x00017098) bg_popup_call_pane_cp04

0x0b47,	// (0x000172d5) list_conf_pane

0x0b4f,	// (0x000172dd) popup_call_audio_conf_window_t1

0x0b5d,	// (0x000172eb) call_thumbnail_pane_g1

0x0b65,	// (0x000172f3) bg_pinb_pane_ParamLimits

0x0b65,	// (0x000172f3) bg_pinb_pane

0x0b73,	// (0x00017301) find_pinb_pane

0x0b7c,	// (0x0001730a) listscroll_pinb_pane_ParamLimits

0x0b7c,	// (0x0001730a) listscroll_pinb_pane

0x0b8b,	// (0x00017319) pinb_bg_pane_g1

0x87e9,	// (0x0001ef77) pinb_bg_pane_g2

0x87f5,	// (0x0001ef83) pinb_bg_pane_g3

0x8801,	// (0x0001ef8f) pinb_bg_pane_g4

0x880d,	// (0x0001ef9b) pinb_bg_pane_g5

0x8819,	// (0x0001efa7) pinb_bg_pane_g6

0x8824,	// (0x0001efb2) pinb_bg_pane_g7

0x882f,	// (0x0001efbd) pinb_bg_pane_g8

0x883a,	// (0x0001efc8) pinb_bg_pane_g9

0x8844,	// (0x0001efd2) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000258c9) pinb_bg_pane_g

0x8861,	// (0x0001efef) grid_pinb_pane

0x886c,	// (0x0001effa) list_pinb_pane

0x8877,	// (0x0001f005) scroll_pane_cp01_ParamLimits

0x8877,	// (0x0001f005) scroll_pane_cp01

0x0b95,	// (0x00017323) find_pinb_pane_g1_ParamLimits

0x0b95,	// (0x00017323) find_pinb_pane_g1

0x0bad,	// (0x0001733b) find_pinb_pane_t1

0x0bbf,	// (0x0001734d) find_pinb_pane_t2

0x0001,

0xf155,	// (0x000258e3) find_pinb_pane_t

0x0bd4,	// (0x00017362) input_focus_pane_cp01_ParamLimits

0x0bd4,	// (0x00017362) input_focus_pane_cp01

0x8889,	// (0x0001f017) cell_pinb_pane_ParamLimits

0x8889,	// (0x0001f017) cell_pinb_pane

0x88a9,	// (0x0001f037) cell_pinb_pane_g1_ParamLimits

0x88a9,	// (0x0001f037) cell_pinb_pane_g1

0x88be,	// (0x0001f04c) cell_pinb_pane_g2_ParamLimits

0x88be,	// (0x0001f04c) cell_pinb_pane_g2

0x0be0,	// (0x0001736e) cell_pinb_pane_g3_ParamLimits

0x0be0,	// (0x0001736e) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000258e8) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000258e8) cell_pinb_pane_g

0x090a,	// (0x00017098) grid_highlight_pane_cp01

0x88ca,	// (0x0001f058) list_pinb_item_pane_ParamLimits

0x88ca,	// (0x0001f058) list_pinb_item_pane

0x090a,	// (0x00017098) list_highlight_pane_cp02

0x88e5,	// (0x0001f073) list_pinb_item_pane_g1_ParamLimits

0x88e5,	// (0x0001f073) list_pinb_item_pane_g1

0x88f2,	// (0x0001f080) list_pinb_item_pane_g2_ParamLimits

0x88f2,	// (0x0001f080) list_pinb_item_pane_g2

0x88fe,	// (0x0001f08c) list_pinb_item_pane_g3_ParamLimits

0x88fe,	// (0x0001f08c) list_pinb_item_pane_g3

0x890f,	// (0x0001f09d) list_pinb_item_pane_g4_ParamLimits

0x890f,	// (0x0001f09d) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x000258ef) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x000258ef) list_pinb_item_pane_g

0x891b,	// (0x0001f0a9) list_pinb_item_pane_t1_ParamLimits

0x891b,	// (0x0001f0a9) list_pinb_item_pane_t1

0x7021,	// (0x0001d7af) calc_display_pane

0x703f,	// (0x0001d7cd) calc_paper_pane

0x705b,	// (0x0001d7e9) grid_calc_pane

0x090a,	// (0x00017098) bg_list_pane_cp01

0x8932,	// (0x0001f0c0) clock_g1

0x893a,	// (0x0001f0c8) clock_g2

0x0001,

0xf16a,	// (0x000258f8) clock_g

0x8944,	// (0x0001f0d2) clock_t1_ParamLimits

0x8944,	// (0x0001f0d2) clock_t1

0x8959,	// (0x0001f0e7) clock_t2_ParamLimits

0x8959,	// (0x0001f0e7) clock_t2

0x896b,	// (0x0001f0f9) clock_t3_ParamLimits

0x896b,	// (0x0001f0f9) clock_t3

0x897d,	// (0x0001f10b) clock_t4_ParamLimits

0x897d,	// (0x0001f10b) clock_t4

0x898f,	// (0x0001f11d) clock_t5_ParamLimits

0x898f,	// (0x0001f11d) clock_t5

0x89a4,	// (0x0001f132) clock_t6_ParamLimits

0x89a4,	// (0x0001f132) clock_t6

0x89b6,	// (0x0001f144) clock_t7_ParamLimits

0x89b6,	// (0x0001f144) clock_t7

0x89c8,	// (0x0001f156) clock_t8_ParamLimits

0x89c8,	// (0x0001f156) clock_t8

0x89de,	// (0x0001f16c) clock_t9_ParamLimits

0x89de,	// (0x0001f16c) clock_t9

0x0008,

0xf16f,	// (0x000258fd) clock_t_ParamLimits

0xf16f,	// (0x000258fd) clock_t

0x0bf4,	// (0x00017382) popup_clock_analogue_window_cp02

0x0bf4,	// (0x00017382) popup_clock_digital_window_cp01

0x0bfc,	// (0x0001738a) listscroll_help_pane

0x090a,	// (0x00017098) phob_pre_status_pane

0x0c06,	// (0x00017394) grid_qdial_pane

0x090a,	// (0x00017098) listscroll_mce_pane

0x0c10,	// (0x0001739e) bg_notes_pane

0x0c1a,	// (0x000173a8) list_notes_pane

0x89f4,	// (0x0001f182) scroll_pane_cp06

0x0c24,	// (0x000173b2) bg_calc_paper_pane

0x7091,	// (0x0001d81f) list_calc_pane

0x0c52,	// (0x000173e0) bg_calc_display_pane

0x70ab,	// (0x0001d839) calc_display_pane_t1

0x70c0,	// (0x0001d84e) calc_display_pane_t2

0x70d5,	// (0x0001d863) calc_display_pane_t3

0x0002,

0xf182,	// (0x00025910) calc_display_pane_t

0x70e7,	// (0x0001d875) cell_calc_pane_ParamLimits

0x70e7,	// (0x0001d875) cell_calc_pane

0x0c70,	// (0x000173fe) bg_calc_paper_pane_g1

0x0c88,	// (0x00017416) bg_calc_paper_pane_g2

0x0c7c,	// (0x0001740a) bg_calc_paper_pane_g3

0x0ca0,	// (0x0001742e) bg_calc_paper_pane_g4

0x0c94,	// (0x00017422) bg_calc_paper_pane_g5

0x89ff,	// (0x0001f18d) bg_calc_paper_pane_g6

0x8a10,	// (0x0001f19e) bg_calc_paper_pane_g7

0x8a21,	// (0x0001f1af) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00025917) bg_calc_paper_pane_g

0x8a32,	// (0x0001f1c0) calc_bg_paper_pane_g9

0x8a43,	// (0x0001f1d1) list_calc_item_pane_ParamLimits

0x8a43,	// (0x0001f1d1) list_calc_item_pane

0x0cac,	// (0x0001743a) list_calc_item_pane_g1

0x7116,	// (0x0001d8a4) list_calc_item_pane_t1_ParamLimits

0x7116,	// (0x0001d8a4) list_calc_item_pane_t1

0x7128,	// (0x0001d8b6) list_calc_item_pane_t2_ParamLimits

0x7128,	// (0x0001d8b6) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00025928) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00025928) list_calc_item_pane_t

0x0ccb,	// (0x00017459) cell_calc_pane_g1

0x0cd5,	// (0x00017463) grid_highlight_pane_cp02

0x0d0a,	// (0x00017498) bg_calc_display_pane_g1

0x7158,	// (0x0001d8e6) bg_calc_display_pane_g2

0x0cf7,	// (0x00017485) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00025932) bg_calc_display_pane_g

0x7162,	// (0x0001d8f0) cell_qdial_pane_ParamLimits

0x7162,	// (0x0001d8f0) cell_qdial_pane

0x8a67,	// (0x0001f1f5) cell_qdial_pane_g1_ParamLimits

0x8a67,	// (0x0001f1f5) cell_qdial_pane_g1

0x8a74,	// (0x0001f202) cell_qdial_pane_g2_ParamLimits

0x8a74,	// (0x0001f202) cell_qdial_pane_g2

0x0d13,	// (0x000174a1) cell_qdial_pane_g3_ParamLimits

0x0d13,	// (0x000174a1) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00025939) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00025939) cell_qdial_pane_g

0x8a92,	// (0x0001f220) cell_qdial_pane_t1_ParamLimits

0x8a92,	// (0x0001f220) cell_qdial_pane_t1

0x8aaa,	// (0x0001f238) cell_qdial_pane_t2_ParamLimits

0x8aaa,	// (0x0001f238) cell_qdial_pane_t2

0x8abd,	// (0x0001f24b) cell_qdial_pane_t3_ParamLimits

0x8abd,	// (0x0001f24b) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00025942) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00025942) cell_qdial_pane_t

0x090a,	// (0x00017098) grid_highlight_pane_cp04

0x0d1f,	// (0x000174ad) thumbnail_qdial_pane_ParamLimits

0x0d1f,	// (0x000174ad) thumbnail_qdial_pane

0x0d7b,	// (0x00017509) list_help_pane

0x0d84,	// (0x00017512) scroll_pane_cp02

0x8ad0,	// (0x0001f25e) help_list_pane_t1_ParamLimits

0x8ad0,	// (0x0001f25e) help_list_pane_t1

0x7178,	// (0x0001d906) bg_notes_pane_g2

0x7180,	// (0x0001d90e) bg_notes_pane_g3

0x7188,	// (0x0001d916) notes_bg_pane_g1

0x7190,	// (0x0001d91e) notes_bg_pane_g4

0x7198,	// (0x0001d926) notes_bg_pane_g5

0x71a0,	// (0x0001d92e) notes_bg_pane_g6

0x71a8,	// (0x0001d936) notes_bg_pane_g7

0x71b0,	// (0x0001d93e) notes_bg_pane_g8

0x71b8,	// (0x0001d946) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00025960) notes_bg_pane_g

0x8afa,	// (0x0001f288) list_notes_text_pane_ParamLimits

0x8afa,	// (0x0001f288) list_notes_text_pane

0x0dd5,	// (0x00017563) list_notes_text_pane_g1

0x0dde,	// (0x0001756c) list_notes_text_pane_t1

0x0c52,	// (0x000173e0) listscroll_cale_week_pane

0x8b34,	// (0x0001f2c2) bg_cale_heading_pane

0x0dfd,	// (0x0001758b) bg_cale_pane_cp01

0x8b48,	// (0x0001f2d6) cale_week_corner_pane

0x8b5e,	// (0x0001f2ec) cale_week_day_heading_pane

0x8b72,	// (0x0001f300) cale_week_scroll_pane_g1

0x8b83,	// (0x0001f311) cale_week_scroll_pane_g2

0x8b94,	// (0x0001f322) cale_week_scroll_pane_g3

0x8ba5,	// (0x0001f333) cale_week_scroll_pane_g4

0x8bb6,	// (0x0001f344) cale_week_scroll_pane_g5

0x8bc7,	// (0x0001f355) cale_week_scroll_pane_g6

0x8bda,	// (0x0001f368) cale_week_scroll_pane_g7

0x8bed,	// (0x0001f37b) cale_week_scroll_pane_g8

0x8c00,	// (0x0001f38e) cale_week_scroll_pane_g9

0x8c11,	// (0x0001f39f) cale_week_scroll_pane_g10

0x8c22,	// (0x0001f3b0) cale_week_scroll_pane_g11

0x8c33,	// (0x0001f3c1) cale_week_scroll_pane_g12

0x8c44,	// (0x0001f3d2) cale_week_scroll_pane_g13

0x8c55,	// (0x0001f3e3) cale_week_scroll_pane_g14

0x8c66,	// (0x0001f3f4) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0002596f) cale_week_scroll_pane_g

0x8c77,	// (0x0001f405) cale_week_time_pane

0x8c8a,	// (0x0001f418) grid_cale_week_pane

0x8c9f,	// (0x0001f42d) scroll_pane_cp08

0x8cb9,	// (0x0001f447) cell_cale_week_pane_ParamLimits

0x8cb9,	// (0x0001f447) cell_cale_week_pane

0x8cf7,	// (0x0001f485) cale_week_day_heading_pane_t1

0x8d24,	// (0x0001f4b2) cale_week_day_heading_pane_t2

0x8d51,	// (0x0001f4df) cale_week_day_heading_pane_t3

0x8d7e,	// (0x0001f50c) cale_week_day_heading_pane_t4

0x8dab,	// (0x0001f539) cale_week_day_heading_pane_t5

0x8dd8,	// (0x0001f566) cale_week_day_heading_pane_t6

0x8e05,	// (0x0001f593) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0002598e) cale_week_day_heading_pane_t

0x0e28,	// (0x000175b6) bg_cale_side_pane

0x71c0,	// (0x0001d94e) cale_week_time_pane_t1

0x71ec,	// (0x0001d97a) cale_week_time_pane_t2

0x7218,	// (0x0001d9a6) cale_week_time_pane_t3

0x7244,	// (0x0001d9d2) cale_week_time_pane_t4

0x7270,	// (0x0001d9fe) cale_week_time_pane_t5

0x729c,	// (0x0001da2a) cale_week_time_pane_t6

0x72c8,	// (0x0001da56) cale_week_time_pane_t7

0x72f4,	// (0x0001da82) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0002599d) cale_week_time_pane_t

0x8e32,	// (0x0001f5c0) cell_cale_week_pane_g2

0x8e4b,	// (0x0001f5d9) cell_cale_week_pane_g3_ParamLimits

0x8e4b,	// (0x0001f5d9) cell_cale_week_pane_g3

0x0e36,	// (0x000175c4) grid_highlight_pane_cp07

0x0e3e,	// (0x000175cc) listscroll_gms_pane

0x0e48,	// (0x000175d6) grid_gms_pane

0x0e51,	// (0x000175df) listscroll_gms_pane_g1

0x0e59,	// (0x000175e7) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000259ae) listscroll_gms_pane_g

0x8e63,	// (0x0001f5f1) scroll_pane_cp010

0x8e6e,	// (0x0001f5fc) cell_gms_pane_ParamLimits

0x8e6e,	// (0x0001f5fc) cell_gms_pane

0x8e81,	// (0x0001f60f) cell_gms_pane_g1

0x0e61,	// (0x000175ef) cell_gms_pane_g2

0x0e69,	// (0x000175f7) cell_gms_pane_g3

0x0e72,	// (0x00017600) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000259b3) cell_gms_pane_g

0x0e7b,	// (0x00017609) grid_highlight_pane_cp09

0xaf51,	// (0x000216df) phob_pre_status_pane_g1

0xaf59,	// (0x000216e7) phob_pre_status_pane_g2

0xaf61,	// (0x000216ef) phob_pre_status_pane_g3

0xaf69,	// (0x000216f7) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00025da2) phob_pre_status_pane_g

0xaf79,	// (0x00021707) phob_pre_status_pane_t1

0xaf89,	// (0x00021717) phob_pre_status_pane_t2

0xaf99,	// (0x00021727) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00025dad) phob_pre_status_pane_t

0x090a,	// (0x00017098) bg_list_pane_cp05

0x7328,	// (0x0001dab6) grid_vorec_pane

0x7332,	// (0x0001dac0) vorec_t1

0x7340,	// (0x0001dace) vorec_t2

0x734e,	// (0x0001dadc) vorec_t3

0x735c,	// (0x0001daea) vorec_t4

0x736a,	// (0x0001daf8) vorec_t5

0x7378,	// (0x0001db06) vorec_t6

0x0006,

0xf22e,	// (0x000259bc) vorec_t

0x7394,	// (0x0001db22) wait_bar_pane_cp01

0x8e89,	// (0x0001f617) cell_vorec_pane_ParamLimits

0x8e89,	// (0x0001f617) cell_vorec_pane

0x0eed,	// (0x0001767b) cell_vorec_pane_g1

0x090a,	// (0x00017098) grid_highlight_pane_cp05

0x8eae,	// (0x0001f63c) cams_zoom_pane

0x8eba,	// (0x0001f648) image_vga_pane

0x8ec9,	// (0x0001f657) main_camera_pane_g1

0x8ed7,	// (0x0001f665) main_camera_pane_g2

0x8ee3,	// (0x0001f671) main_camera_pane_g3

0x8ef1,	// (0x0001f67f) main_camera_pane_g4

0x8eff,	// (0x0001f68d) main_camera_pane_g5

0x8f0d,	// (0x0001f69b) main_camera_pane_g6

0x8f1b,	// (0x0001f6a9) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000259cb) main_camera_pane_g

0x8f29,	// (0x0001f6b7) main_camera_pane_t1

0x8f3b,	// (0x0001f6c9) main_camera_pane_t2

0x0001,

0xf24e,	// (0x000259dc) main_camera_pane_t

0x8f5e,	// (0x0001f6ec) cams_zoom_pane_cp_ParamLimits

0x8f5e,	// (0x0001f6ec) cams_zoom_pane_cp

0x8f82,	// (0x0001f710) image_cif_pane_ParamLimits

0x8f82,	// (0x0001f710) image_cif_pane

0x8fa0,	// (0x0001f72e) image_subqcif_pane

0x8faa,	// (0x0001f738) main_video_pane_g1_ParamLimits

0x8faa,	// (0x0001f738) main_video_pane_g1

0x8fca,	// (0x0001f758) main_video_pane_g2_ParamLimits

0x8fca,	// (0x0001f758) main_video_pane_g2

0x8ffa,	// (0x0001f788) main_video_pane_g3_ParamLimits

0x8ffa,	// (0x0001f788) main_video_pane_g3

0x9023,	// (0x0001f7b1) main_video_pane_g4_ParamLimits

0x9023,	// (0x0001f7b1) main_video_pane_g4

0x904c,	// (0x0001f7da) main_video_pane_g5_ParamLimits

0x904c,	// (0x0001f7da) main_video_pane_g5

0x0f03,	// (0x00017691) main_video_pane_g6_ParamLimits

0x0f03,	// (0x00017691) main_video_pane_g6

0x0006,

0xf253,	// (0x000259e1) main_video_pane_g_ParamLimits

0xf253,	// (0x000259e1) main_video_pane_g

0x906e,	// (0x0001f7fc) main_video_pane_t1_ParamLimits

0x906e,	// (0x0001f7fc) main_video_pane_t1

0x0f1d,	// (0x000176ab) cams_zoom_pane_g1

0x0f26,	// (0x000176b4) cams_zoom_pane_g2

0x0f2f,	// (0x000176bd) cams_zoom_pane_g3

0x0f38,	// (0x000176c6) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x000259f0) cams_zoom_pane_g

0x90b8,	// (0x0001f846) grid_cams_pane

0x90c6,	// (0x0001f854) linegrid_cams_pane

0x90d4,	// (0x0001f862) cell_cams_pane_ParamLimits

0x90d4,	// (0x0001f862) cell_cams_pane

0x0f41,	// (0x000176cf) cams_burst_image_pane

0x0f49,	// (0x000176d7) cell_cams_pane_g1

0x090a,	// (0x00017098) grid_highlight_pane_cp03

0x0ccb,	// (0x00017459) mp_bg_pane_g1

0x090a,	// (0x00017098) bg_list_pane_cp03

0x2d26,	// (0x000194b4) bg_mp_pane

0x2d2e,	// (0x000194bc) grid_mp_pane

0x2d36,	// (0x000194c4) media_player_g1

0x2d40,	// (0x000194ce) media_player_t1

0x2d4e,	// (0x000194dc) media_player_t2

0x2d5c,	// (0x000194ea) media_player_t3

0x2d6a,	// (0x000194f8) media_player_t4

0x2d78,	// (0x00019506) media_player_t5

0x2d86,	// (0x00019514) media_player_t6

0x2d94,	// (0x00019522) media_player_t7

0x0006,

0xf5fe,	// (0x00025d8c) media_player_t

0x2da2,	// (0x00019530) wait_bar_pane_cp02

0xf5e3,	// (0x00025d71) main_usb_pane_t

0xaf48,	// (0x000216d6) cell_mp_pane

0x0ccb,	// (0x00017459) cell_mp_pane_g1

0x090a,	// (0x00017098) grid_highlight_pane_cp06

0x100f,	// (0x0001779d) grid_skin_colour_pane

0x1017,	// (0x000177a5) list_highlight_pane_cp03

0x9142,	// (0x0001f8d0) skin_g1

0x101f,	// (0x000177ad) skin_t1

0x102e,	// (0x000177bc) skin_t2

0x0001,

0xf297,	// (0x00025a25) skin_t

0x914c,	// (0x0001f8da) cell_skin_colour_pane_ParamLimits

0x914c,	// (0x0001f8da) cell_skin_colour_pane

0x103c,	// (0x000177ca) cell_skin_colour_pane_g1

0x919b,	// (0x0001f929) call_video_g1_ParamLimits

0x919b,	// (0x0001f929) call_video_g1

0x91ab,	// (0x0001f939) call_video_g2_ParamLimits

0x91ab,	// (0x0001f939) call_video_g2

0x0001,

0xf29c,	// (0x00025a2a) call_video_g_ParamLimits

0xf29c,	// (0x00025a2a) call_video_g

0x91e3,	// (0x0001f971) call_video_uplink_pane_cp1_ParamLimits

0x91e3,	// (0x0001f971) call_video_uplink_pane_cp1

0x1056,	// (0x000177e4) call_video_uplink_pane_cp2

0x9291,	// (0x0001fa1f) video_down_crop_pane_ParamLimits

0x9291,	// (0x0001fa1f) video_down_crop_pane

0x9369,	// (0x0001faf7) video_down_pane_ParamLimits

0x9369,	// (0x0001faf7) video_down_pane

0x105e,	// (0x000177ec) video_down_subqcif_pane_ParamLimits

0x105e,	// (0x000177ec) video_down_subqcif_pane

0x1078,	// (0x00017806) video_down_subqcif_pane_cp_ParamLimits

0x1078,	// (0x00017806) video_down_subqcif_pane_cp

0x109e,	// (0x0001782c) im_reading_pane_ParamLimits

0x109e,	// (0x0001782c) im_reading_pane

0x9446,	// (0x0001fbd4) im_writing_pane_ParamLimits

0x9446,	// (0x0001fbd4) im_writing_pane

0x9464,	// (0x0001fbf2) im_reading_pane_t1

0x10b8,	// (0x00017846) list_im_pane

0x10c9,	// (0x00017857) scroll_pane_cp07

0x94ac,	// (0x0001fc3a) im_writing_pane_t1_ParamLimits

0x94ac,	// (0x0001fc3a) im_writing_pane_t1

0x10e2,	// (0x00017870) im_writing_pane_t2_ParamLimits

0x10e2,	// (0x00017870) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00025a34) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00025a34) im_writing_pane_t

0x090a,	// (0x00017098) input_focus_pane_cp04

0x090a,	// (0x00017098) input_focus_pane_cp05

0x94be,	// (0x0001fc4c) list_im_single_pane_ParamLimits

0x94be,	// (0x0001fc4c) list_im_single_pane

0x94da,	// (0x0001fc68) list_single_im_pane_t1

0xaf0c,	// (0x0002169a) blid_accuracy_pane

0xaf14,	// (0x000216a2) blid_compass_pane

0xaf1e,	// (0x000216ac) main_location_t1

0xaf2c,	// (0x000216ba) main_location_t2

0xaf3a,	// (0x000216c8) main_location_t3

0x0002,

0xf60d,	// (0x00025d9b) main_location_t

0x090a,	// (0x00017098) aid_levels_location

0x0ccb,	// (0x00017459) blid_accuracy_pane_g1

0x0ccb,	// (0x00017459) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00025a96) blid_accuracy_pane_g

0x112a,	// (0x000178b8) wml_content_pane

0x1168,	// (0x000178f6) wml_button_pane_ParamLimits

0x1168,	// (0x000178f6) wml_button_pane

0x94e9,	// (0x0001fc77) wml_list_single_large_pane_ParamLimits

0x94e9,	// (0x0001fc77) wml_list_single_large_pane

0x950b,	// (0x0001fc99) wml_list_single_medium_pane_ParamLimits

0x950b,	// (0x0001fc99) wml_list_single_medium_pane

0x9531,	// (0x0001fcbf) wml_list_single_small_pane_ParamLimits

0x9531,	// (0x0001fcbf) wml_list_single_small_pane

0x117c,	// (0x0001790a) wml_selection_box_pane_ParamLimits

0x117c,	// (0x0001790a) wml_selection_box_pane

0x118f,	// (0x0001791d) wml_list_single_pane_t1

0x119e,	// (0x0001792c) wml_list_single_medium_pane_t1

0x11ad,	// (0x0001793b) wml_list_single_large_pane_t1

0x11bc,	// (0x0001794a) input_focus_pane_cp02_ParamLimits

0x11bc,	// (0x0001794a) input_focus_pane_cp02

0x11cf,	// (0x0001795d) wml_selection_box_pane_g1

0x11d8,	// (0x00017966) wml_selection_box_pane_t1_ParamLimits

0x11d8,	// (0x00017966) wml_selection_box_pane_t1

0x0b65,	// (0x000172f3) bg_wml_button_pane_ParamLimits

0x0b65,	// (0x000172f3) bg_wml_button_pane

0x11f0,	// (0x0001797e) wml_button_pane_g1

0x11f8,	// (0x00017986) wml_button_pane_t1

0x11f0,	// (0x0001797e) wml_button_bg_pane_g1

0x1208,	// (0x00017996) wml_button_bg_pane_g2

0x1210,	// (0x0001799e) wml_button_bg_pane_g3

0x1218,	// (0x000179a6) wml_button_bg_pane_g4

0x1220,	// (0x000179ae) wml_button_bg_pane_g5

0x1228,	// (0x000179b6) wml_button_bg_pane_g6

0x1230,	// (0x000179be) wml_button_bg_pane_g7

0x1238,	// (0x000179c6) wml_button_bg_pane_g8

0x1240,	// (0x000179ce) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00025a39) wml_button_bg_pane_g

0x955c,	// (0x0001fcea) bg_list_pane_cp02

0x1248,	// (0x000179d6) mce_header_pane_ParamLimits

0x1248,	// (0x000179d6) mce_header_pane

0x125e,	// (0x000179ec) mce_icon_pane

0x125e,	// (0x000179ec) mce_image_pane

0x1267,	// (0x000179f5) mce_text_pane_ParamLimits

0x1267,	// (0x000179f5) mce_text_pane

0x9566,	// (0x0001fcf4) scroll_pane_cp03

0x1160,	// (0x000178ee) scroll_pane_cp04

0x127a,	// (0x00017a08) scroll_pane_cp05_ParamLimits

0x127a,	// (0x00017a08) scroll_pane_cp05

0x9570,	// (0x0001fcfe) mce_header_field_pane_ParamLimits

0x9570,	// (0x0001fcfe) mce_header_field_pane

0x9592,	// (0x0001fd20) mce_header_field_pane_2_ParamLimits

0x9592,	// (0x0001fd20) mce_header_field_pane_2

0x95a8,	// (0x0001fd36) mce_header_field_pane_3

0x95b0,	// (0x0001fd3e) list_single_mce_message_pane_ParamLimits

0x95b0,	// (0x0001fd3e) list_single_mce_message_pane

0x95cf,	// (0x0001fd5d) list_single_mce_smart_pane_ParamLimits

0x95cf,	// (0x0001fd5d) list_single_mce_smart_pane

0x1286,	// (0x00017a14) input_focus_pane_cp03

0x128f,	// (0x00017a1d) list_header_data_pane

0x95f9,	// (0x0001fd87) mce_header_field_pane_t1

0x9609,	// (0x0001fd97) list_single_mce_header_pane_ParamLimits

0x9609,	// (0x0001fd97) list_single_mce_header_pane

0x1297,	// (0x00017a25) list_single_mce_header_pane_t1

0x12a6,	// (0x00017a34) list_single_mce_message_pane_g1

0x12ae,	// (0x00017a3c) list_single_mce_message_pane_t1

0x9645,	// (0x0001fdd3) bg_cale_heading_pane_cp01_ParamLimits

0x9645,	// (0x0001fdd3) bg_cale_heading_pane_cp01

0x12bc,	// (0x00017a4a) bg_cale_pane_cp02_ParamLimits

0x12bc,	// (0x00017a4a) bg_cale_pane_cp02

0x9668,	// (0x0001fdf6) cale_month_corner_pane

0x967e,	// (0x0001fe0c) cale_month_day_heading_pane_ParamLimits

0x967e,	// (0x0001fe0c) cale_month_day_heading_pane

0x96b1,	// (0x0001fe3f) cale_month_pane_g1_ParamLimits

0x96b1,	// (0x0001fe3f) cale_month_pane_g1

0x96cd,	// (0x0001fe5b) cale_month_pane_g2_ParamLimits

0x96cd,	// (0x0001fe5b) cale_month_pane_g2

0x96e8,	// (0x0001fe76) cale_month_pane_g3_ParamLimits

0x96e8,	// (0x0001fe76) cale_month_pane_g3

0x9714,	// (0x0001fea2) cale_month_pane_g4_ParamLimits

0x9714,	// (0x0001fea2) cale_month_pane_g4

0x9740,	// (0x0001fece) cale_month_pane_g5_ParamLimits

0x9740,	// (0x0001fece) cale_month_pane_g5

0x976c,	// (0x0001fefa) cale_month_pane_g6_ParamLimits

0x976c,	// (0x0001fefa) cale_month_pane_g6

0x97a8,	// (0x0001ff36) cale_month_pane_g7_ParamLimits

0x97a8,	// (0x0001ff36) cale_month_pane_g7

0x97e4,	// (0x0001ff72) cale_month_pane_g8_ParamLimits

0x97e4,	// (0x0001ff72) cale_month_pane_g8

0x9820,	// (0x0001ffae) cale_month_pane_g9_ParamLimits

0x9820,	// (0x0001ffae) cale_month_pane_g9

0x985a,	// (0x0001ffe8) cale_month_pane_g10_ParamLimits

0x985a,	// (0x0001ffe8) cale_month_pane_g10

0x9894,	// (0x00020022) cale_month_pane_g11_ParamLimits

0x9894,	// (0x00020022) cale_month_pane_g11

0x98ce,	// (0x0002005c) cale_month_pane_g12_ParamLimits

0x98ce,	// (0x0002005c) cale_month_pane_g12

0x9908,	// (0x00020096) cale_month_pane_g13_ParamLimits

0x9908,	// (0x00020096) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00025a4c) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00025a4c) cale_month_pane_g

0x9942,	// (0x000200d0) cale_month_week_pane

0x9955,	// (0x000200e3) grid_cale_month_pane_ParamLimits

0x9955,	// (0x000200e3) grid_cale_month_pane

0x9983,	// (0x00020111) cale_month_day_heading_pane_t1

0x99e1,	// (0x0002016f) cale_month_day_heading_pane_t2

0x9a46,	// (0x000201d4) cale_month_day_heading_pane_t3

0x9aab,	// (0x00020239) cale_month_day_heading_pane_t4

0x9b10,	// (0x0002029e) cale_month_day_heading_pane_t5

0x9b7d,	// (0x0002030b) cale_month_day_heading_pane_t6

0x9bf2,	// (0x00020380) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00025a67) cale_month_day_heading_pane_t

0x0e28,	// (0x000175b6) bg_cale_side_pane_cp01

0x9c67,	// (0x000203f5) cale_month_week_pane_t1

0x9c92,	// (0x00020420) cale_month_week_pane_t2

0x9cbd,	// (0x0002044b) cale_month_week_pane_t3

0x9ce8,	// (0x00020476) cale_month_week_pane_t4

0x9d13,	// (0x000204a1) cale_month_week_pane_t5

0x9d3e,	// (0x000204cc) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00025a76) cale_month_week_pane_t

0x9d69,	// (0x000204f7) cell_cale_month_pane_ParamLimits

0x9d69,	// (0x000204f7) cell_cale_month_pane

0x739c,	// (0x0001db2a) cell_cale_month_pane_g1

0x73a8,	// (0x0001db36) cell_cale_month_pane_t1_ParamLimits

0x73a8,	// (0x0001db36) cell_cale_month_pane_t1

0x0e36,	// (0x000175c4) grid_highlight_pane_cp08

0x0ccb,	// (0x00017459) main_smil_g1

0x9e37,	// (0x000205c5) smil_status_pane

0x1327,	// (0x00017ab5) smil_text_pane

0x2c44,	// (0x000193d2) bg_popup_call3_rect_pane_g8

0x2c4c,	// (0x000193da) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025d2f) bg_popup_call3_rect_pane_g

0x2ef4,	// (0x00019682) smil_status_volume_pane_g1

0x1331,	// (0x00017abf) smil_status_pane_t1

0x74e6,	// (0x0001dc74) volume_smil_pane

0x1348,	// (0x00017ad6) list_smil_text_pane

0x9e4a,	// (0x000205d8) scroll_pane_cp011

0x9e55,	// (0x000205e3) smil_text_list_pane_t1_ParamLimits

0x9e55,	// (0x000205e3) smil_text_list_pane_t1

0x73c4,	// (0x0001db52) aid_volume_smil_ParamLimits

0x73c4,	// (0x0001db52) aid_volume_smil

0x0ccb,	// (0x00017459) smil_volume_pane_g1

0x0ccb,	// (0x00017459) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00025a96) smil_volume_pane_g

0x0c52,	// (0x000173e0) listscroll_cale_day_pane

0x1374,	// (0x00017b02) bg_cale_pane

0x138c,	// (0x00017b1a) list_cale_pane

0x139d,	// (0x00017b2b) scroll_pane_cp09

0x13ae,	// (0x00017b3c) cale_bg_pane_g1

0x13b6,	// (0x00017b44) cale_bg_pane_g2

0x13be,	// (0x00017b4c) cale_bg_pane_g3

0x13c6,	// (0x00017b54) cale_bg_pane_g4

0x13ce,	// (0x00017b5c) cale_bg_pane_g5

0x13d6,	// (0x00017b64) cale_bg_pane_g6

0x13de,	// (0x00017b6c) cale_bg_pane_g7

0x13e6,	// (0x00017b74) cale_bg_pane_g8

0x13ee,	// (0x00017b7c) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00025a9b) cale_bg_pane_g

0x9eb9,	// (0x00020647) list_cale_time_pane_ParamLimits

0x9eb9,	// (0x00020647) list_cale_time_pane

0x9ed1,	// (0x0002065f) list_cale_time_pane_g1_ParamLimits

0x9ed1,	// (0x0002065f) list_cale_time_pane_g1

0x13f6,	// (0x00017b84) list_cale_time_pane_g2_ParamLimits

0x13f6,	// (0x00017b84) list_cale_time_pane_g2

0x9edd,	// (0x0002066b) list_cale_time_pane_g3_ParamLimits

0x9edd,	// (0x0002066b) list_cale_time_pane_g3

0x9eeb,	// (0x00020679) list_cale_time_pane_g4_ParamLimits

0x9eeb,	// (0x00020679) list_cale_time_pane_g4

0x9ef9,	// (0x00020687) list_cale_time_pane_g5_ParamLimits

0x9ef9,	// (0x00020687) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00025aae) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00025aae) list_cale_time_pane_g

0x9f07,	// (0x00020695) list_cale_time_pane_t1_ParamLimits

0x9f07,	// (0x00020695) list_cale_time_pane_t1

0x9f2f,	// (0x000206bd) list_cale_time_pane_t2_ParamLimits

0x9f2f,	// (0x000206bd) list_cale_time_pane_t2

0xa22f,	// (0x000209bd) aid_blid_cardinal_pane

0xa271,	// (0x000209ff) compass_pane_t4

0x9f57,	// (0x000206e5) list_cale_time_pane_t4_ParamLimits

0x9f57,	// (0x000206e5) list_cale_time_pane_t4

0xa27f,	// (0x00020a0d) compass_pane_t5

0xa28f,	// (0x00020a1d) compass_pane_t6

0xa29d,	// (0x00020a2b) compass_pane_t7

0x18e8,	// (0x00018076) navi_pane_cc_t1

0x1a4f,	// (0x000181dd) aid_phob_thumbnail_center_pane

0xaa02,	// (0x00021190) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00025abb) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00025abb) list_cale_time_pane_t

0x0561,	// (0x00016cef) bg_popup_window_pane_cp02_ParamLimits

0x0561,	// (0x00016cef) bg_popup_window_pane_cp02

0x1410,	// (0x00017b9e) heading_pane_cp01_ParamLimits

0x1410,	// (0x00017b9e) heading_pane_cp01

0x141c,	// (0x00017baa) loc_req_pane_ParamLimits

0x141c,	// (0x00017baa) loc_req_pane

0x142c,	// (0x00017bba) loc_type_pane_ParamLimits

0x142c,	// (0x00017bba) loc_type_pane

0x143e,	// (0x00017bcc) loc_type_pane_t1_ParamLimits

0x143e,	// (0x00017bcc) loc_type_pane_t1

0x1450,	// (0x00017bde) loc_type_pane_t2_ParamLimits

0x1450,	// (0x00017bde) loc_type_pane_t2

0x1462,	// (0x00017bf0) loc_type_pane_t3_ParamLimits

0x1462,	// (0x00017bf0) loc_type_pane_t3

0x0002,

0xf334,	// (0x00025ac2) loc_type_pane_t_ParamLimits

0xf334,	// (0x00025ac2) loc_type_pane_t

0x1474,	// (0x00017c02) list_loc_req_pane

0x147e,	// (0x00017c0c) scroll_pane_cp012

0x9f7f,	// (0x0002070d) list_single_loc_request_popup_menu_pane_ParamLimits

0x9f7f,	// (0x0002070d) list_single_loc_request_popup_menu_pane

0x1489,	// (0x00017c17) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1489,	// (0x00017c17) list_single_loc_request_popup_menu_pane_g1

0x1495,	// (0x00017c23) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1495,	// (0x00017c23) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x00025ac9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x00025ac9) list_single_loc_request_popup_menu_pane_g

0x14a1,	// (0x00017c2f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x14a1,	// (0x00017c2f) list_single_loc_request_popup_menu_pane_t1

0x9f91,	// (0x0002071f) bg_popup_window_pane_cp03_ParamLimits

0x9f91,	// (0x0002071f) bg_popup_window_pane_cp03

0x9f9f,	// (0x0002072d) heading_loc_req_pane_ParamLimits

0x9f9f,	// (0x0002072d) heading_loc_req_pane

0x9fab,	// (0x00020739) popup_dyc_status_message_window_g1_ParamLimits

0x9fab,	// (0x00020739) popup_dyc_status_message_window_g1

0x9fb7,	// (0x00020745) popup_dyc_status_message_window_t1_ParamLimits

0x9fb7,	// (0x00020745) popup_dyc_status_message_window_t1

0x9fc9,	// (0x00020757) popup_dyc_status_message_window_t2_ParamLimits

0x9fc9,	// (0x00020757) popup_dyc_status_message_window_t2

0x9fdb,	// (0x00020769) popup_dyc_status_message_window_t3_ParamLimits

0x9fdb,	// (0x00020769) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00025ace) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00025ace) popup_dyc_status_message_window_t

0x090a,	// (0x00017098) bg_heading_pane_cp01

0x14c3,	// (0x00017c51) heading_loc_req_pane_g1

0x14cb,	// (0x00017c59) heading_loc_req_pane_g2

0x14d3,	// (0x00017c61) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00025ad5) heading_loc_req_pane_g

0x14db,	// (0x00017c69) heading_loc_req_pane_t1

0x1562,	// (0x00017cf0) bg_popup_sub_pane_cp01_ParamLimits

0x1562,	// (0x00017cf0) bg_popup_sub_pane_cp01

0x1570,	// (0x00017cfe) popup_cale_events_window_g1_ParamLimits

0x1570,	// (0x00017cfe) popup_cale_events_window_g1

0x1590,	// (0x00017d1e) popup_cale_events_window_g2_ParamLimits

0x1590,	// (0x00017d1e) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00025b09) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00025b09) popup_cale_events_window_g

0x15b0,	// (0x00017d3e) popup_cale_events_window_t1_ParamLimits

0x15b0,	// (0x00017d3e) popup_cale_events_window_t1

0x15c2,	// (0x00017d50) popup_cale_events_window_t2_ParamLimits

0x15c2,	// (0x00017d50) popup_cale_events_window_t2

0x1600,	// (0x00017d8e) popup_cale_events_window_t3_ParamLimits

0x1600,	// (0x00017d8e) popup_cale_events_window_t3

0x163a,	// (0x00017dc8) popup_cale_events_window_t4_ParamLimits

0x163a,	// (0x00017dc8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00025b0e) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00025b0e) popup_cale_events_window_t

0xa05f,	// (0x000207ed) call_type_pane

0x1a67,	// (0x000181f5) popup_call_status_window_g1

0xa06b,	// (0x000207f9) popup_call_status_window_g2

0xa077,	// (0x00020805) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00025b17) popup_call_status_window_g

0x1670,	// (0x00017dfe) call_type_pane_g1

0x1679,	// (0x00017e07) call_type_pane_g2

0x0001,

0xf390,	// (0x00025b1e) call_type_pane_g

0x090a,	// (0x00017098) bg_popup_sub_pane_cp02

0x1682,	// (0x00017e10) listscroll_popup_wml_pane

0x168a,	// (0x00017e18) list_wml_pane

0x1694,	// (0x00017e22) scroll_pane_cp013

0x169f,	// (0x00017e2d) list_single_graphic_popup_wml_pane_ParamLimits

0x169f,	// (0x00017e2d) list_single_graphic_popup_wml_pane

0x0ccb,	// (0x00017459) list_single_graphic_popup_wml_pane_g1

0x16b3,	// (0x00017e41) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00025b23) list_single_graphic_popup_wml_pane_g

0x16bb,	// (0x00017e49) list_single_graphic_popup_wml_pane_t1

0x16c9,	// (0x00017e57) aid_call_pane

0x0b5d,	// (0x000172eb) popup_clock_analogue_window_g1

0x0b5d,	// (0x000172eb) popup_clock_analogue_window_g2

0x73e6,	// (0x0001db74) popup_clock_analogue_window_g3

0x73e6,	// (0x0001db74) popup_clock_analogue_window_g4

0x0ccb,	// (0x00017459) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00025b28) popup_clock_analogue_window_g

0x73ee,	// (0x0001db7c) popup_clock_analogue_window_t1

0x73fc,	// (0x0001db8a) clock_digital_number_pane_ParamLimits

0x73fc,	// (0x0001db8a) clock_digital_number_pane

0x7408,	// (0x0001db96) clock_digital_number_pane_cp02_ParamLimits

0x7408,	// (0x0001db96) clock_digital_number_pane_cp02

0x7414,	// (0x0001dba2) clock_digital_number_pane_cp03_ParamLimits

0x7414,	// (0x0001dba2) clock_digital_number_pane_cp03

0x7420,	// (0x0001dbae) clock_digital_number_pane_cp04_ParamLimits

0x7420,	// (0x0001dbae) clock_digital_number_pane_cp04

0x742c,	// (0x0001dbba) clock_digital_separator_pane_ParamLimits

0x742c,	// (0x0001dbba) clock_digital_separator_pane

0x7438,	// (0x0001dbc6) popup_clock_digital_window_t1

0x0ccb,	// (0x00017459) clock_digital_number_pane_g1

0x0ccb,	// (0x00017459) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00025a96) clock_digital_number_pane_g

0x0ccb,	// (0x00017459) clock_digital_separator_pane_g1

0x0ccb,	// (0x00017459) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00025a96) clock_digital_separator_pane_g

0x090a,	// (0x00017098) bg_popup_window_pane_cp04

0x1748,	// (0x00017ed6) heading_pane_cp03

0x1750,	// (0x00017ede) listscroll_popup_gms_pane

0x1758,	// (0x00017ee6) grid_large_graphic_popup_pane

0x1762,	// (0x00017ef0) listscroll_popup_gms_pane_g1

0x176a,	// (0x00017ef8) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00025b33) listscroll_popup_gms_pane_g

0x1160,	// (0x000178ee) scroll_pane_cp014

0xa083,	// (0x00020811) cell_large_graphic_popup_pane_ParamLimits

0xa083,	// (0x00020811) cell_large_graphic_popup_pane

0xa09d,	// (0x0002082b) cell_large_graphic_popup_pane_g1_ParamLimits

0xa09d,	// (0x0002082b) cell_large_graphic_popup_pane_g1

0x1772,	// (0x00017f00) cell_large_graphic_popup_pane_g2_ParamLimits

0x1772,	// (0x00017f00) cell_large_graphic_popup_pane_g2

0x177e,	// (0x00017f0c) cell_large_graphic_popup_pane_g3_ParamLimits

0x177e,	// (0x00017f0c) cell_large_graphic_popup_pane_g3

0x178b,	// (0x00017f19) cell_large_graphic_popup_pane_g4_ParamLimits

0x178b,	// (0x00017f19) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00025b38) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00025b38) cell_large_graphic_popup_pane_g

0x179b,	// (0x00017f29) grid_highlight_pane_cp010

0x0ccb,	// (0x00017459) bg_popup_call_pane_g1

0x17a5,	// (0x00017f33) list_single_graphic_popup_conf_pane_ParamLimits

0x17a5,	// (0x00017f33) list_single_graphic_popup_conf_pane

0x17b7,	// (0x00017f45) list_highlight_pane_cp01

0x17c0,	// (0x00017f4e) list_single_graphic_popup_conf_pane_g1

0x17c8,	// (0x00017f56) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00025b41) list_single_graphic_popup_conf_pane_g

0x17d0,	// (0x00017f5e) list_single_graphic_popup_conf_pane_t1

0x17de,	// (0x00017f6c) linegrid_cams_pane_g1

0xa0a9,	// (0x00020837) linegrid_cams_pane_g2

0x0e69,	// (0x000175f7) linegrid_cams_pane_g3

0x17e7,	// (0x00017f75) linegrid_cams_pane_g4

0xa0b2,	// (0x00020840) linegrid_cams_pane_g5

0xa0bb,	// (0x00020849) linegrid_cams_pane_g6

0x0e72,	// (0x00017600) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00025b46) linegrid_cams_pane_g

0x17f0,	// (0x00017f7e) popup_clock_analogue_window

0x17f0,	// (0x00017f7e) popup_clock_digital_window

0x090a,	// (0x00017098) popup_phob_thumbnail_window

0x0ccb,	// (0x00017459) call_video_uplink_pane_g1

0x17f9,	// (0x00017f87) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00025b55) call_video_uplink_pane_g

0x1801,	// (0x00017f8f) video_uplink_pane

0x1809,	// (0x00017f97) mce_image_pane_g1

0xa0c6,	// (0x00020854) mce_image_pane_g2

0xa0d0,	// (0x0002085e) mce_image_pane_g3

0xa0da,	// (0x00020868) mce_image_pane_g4

0xa0e2,	// (0x00020870) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00025b5a) mce_image_pane_g

0x1813,	// (0x00017fa1) control_top_pane_stacon_cp01_ParamLimits

0x1813,	// (0x00017fa1) control_top_pane_stacon_cp01

0x1827,	// (0x00017fb5) uni_indicator_pane_stacon_cp01_ParamLimits

0x1827,	// (0x00017fb5) uni_indicator_pane_stacon_cp01

0x1838,	// (0x00017fc6) bg_popup_sub_pane_cp03

0xa0ea,	// (0x00020878) chi_dic_find_pane

0xa0f2,	// (0x00020880) listscroll_chi_dic_pane

0xa0fb,	// (0x00020889) main_pane_chidic_g1

0xa10e,	// (0x0002089c) chi_dic_find_pane_t1

0x1842,	// (0x00017fd0) find_chidic_pane

0x184b,	// (0x00017fd9) chi_dic_list_pane_ParamLimits

0x184b,	// (0x00017fd9) chi_dic_list_pane

0x185c,	// (0x00017fea) scroll_pane_cp020

0xa11c,	// (0x000208aa) find_chidic_pane_t1

0x090a,	// (0x00017098) input_focus_pane_cp06

0xa12b,	// (0x000208b9) list_chi_dic_pane_ParamLimits

0xa12b,	// (0x000208b9) list_chi_dic_pane

0xa143,	// (0x000208d1) list_chi_dic_pane_t1_ParamLimits

0xa143,	// (0x000208d1) list_chi_dic_pane_t1

0x090a,	// (0x00017098) list_highlight_pane_cp020

0x1864,	// (0x00017ff2) bg_cale_heading_pane_g1

0xa156,	// (0x000208e4) bg_cale_heading_pane_g2

0xa15e,	// (0x000208ec) bg_cale_heading_pane_g3

0xa166,	// (0x000208f4) bg_cale_heading_pane_g4

0xa170,	// (0x000208fe) bg_cale_heading_pane_g5

0xa17a,	// (0x00020908) bg_cale_heading_pane_g6

0xa182,	// (0x00020910) bg_cale_heading_pane_g7

0xa18a,	// (0x00020918) bg_cale_heading_pane_g8

0xa194,	// (0x00020922) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00025b65) bg_cale_heading_pane_g

0x1864,	// (0x00017ff2) bg_cale_side_pane_g1

0xa19e,	// (0x0002092c) bg_cale_side_pane_g2

0xa1a6,	// (0x00020934) bg_cale_side_pane_g3

0xa1ae,	// (0x0002093c) bg_cale_side_pane_g4

0xa1b6,	// (0x00020944) bg_cale_side_pane_g5

0xa1be,	// (0x0002094c) bg_cale_side_pane_g6

0xa1c6,	// (0x00020954) bg_cale_side_pane_g7

0xa1ce,	// (0x0002095c) bg_cale_side_pane_g8

0xa1d6,	// (0x00020964) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00025b78) bg_cale_side_pane_g

0xa1de,	// (0x0002096c) popup_call_status_window_ParamLimits

0xa1de,	// (0x0002096c) popup_call_status_window

0x186c,	// (0x00017ffa) stacon_top_pane

0x1874,	// (0x00018002) status_pane_ParamLimits

0x1874,	// (0x00018002) status_pane

0x1889,	// (0x00018017) status_small_pane

0x1891,	// (0x0001801f) control_pane

0x090a,	// (0x00017098) stacon_bottom_pane

0x1899,	// (0x00018027) list_single_mce_smart_pane_t1_ParamLimits

0x1899,	// (0x00018027) list_single_mce_smart_pane_t1

0x18ac,	// (0x0001803a) list_single_mce_smart_pane_t2_ParamLimits

0x18ac,	// (0x0001803a) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00025b8b) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00025b8b) list_single_mce_smart_pane_t

0xa1ea,	// (0x00020978) compass_pane

0xa1f5,	// (0x00020983) main_location2_pane_t1

0xa209,	// (0x00020997) main_location2_pane_t2

0xa209,	// (0x00020997) main_location2_pane_t3

0x0003,

0xf402,	// (0x00025b90) main_location2_pane_t

0x18cb,	// (0x00018059) compass_pane_g1_ParamLimits

0x18cb,	// (0x00018059) compass_pane_g1

0xa253,	// (0x000209e1) compass_pane_t1

0xa262,	// (0x000209f0) compass_pane_t2

0x0005,

0xf40b,	// (0x00025b99) compass_pane_t

0xa2ad,	// (0x00020a3b) text_secondary_cp61

0x18df,	// (0x0001806d) navi_pane_cams_g5

0x1902,	// (0x00018090) navi_pane_im_t1

0x1910,	// (0x0001809e) navi_pane_mp_g1_ParamLimits

0x1910,	// (0x0001809e) navi_pane_mp_g1

0x1924,	// (0x000180b2) navi_pane_mp_g2_ParamLimits

0x1924,	// (0x000180b2) navi_pane_mp_g2

0x1930,	// (0x000180be) navi_pane_mp_g3_ParamLimits

0x1930,	// (0x000180be) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00025bad) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00025bad) navi_pane_mp_g

0x193c,	// (0x000180ca) navi_pane_mp_t1

0x194a,	// (0x000180d8) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00025bb4) navi_pane_mp_t

0x1986,	// (0x00018114) navi_pane_vt_g1

0x193c,	// (0x000180ca) navi_pane_vt_t1

0x198e,	// (0x0001811c) navi_slider_pane

0x1996,	// (0x00018124) zooming_pane

0x199e,	// (0x0001812c) navi_slider_pane_g1

0x7455,	// (0x0001dbe3) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00025bbb) navi_slider_pane_g

0x19d4,	// (0x00018162) aid_levels_zoom

0x19dc,	// (0x0001816a) zooming_pane_g1

0x19e4,	// (0x00018172) zooming_pane_g2

0x19e4,	// (0x00018172) zooming_pane_g3

0x0002,

0xf43c,	// (0x00025bca) zooming_pane_g

0x19ec,	// (0x0001817a) level_10_zoom

0x19f5,	// (0x00018183) level_11_zoom

0x19fe,	// (0x0001818c) level_1_zoom

0x1a07,	// (0x00018195) level_2_zoom

0x1a10,	// (0x0001819e) level_3_zoom

0x1a19,	// (0x000181a7) level_4_zoom

0x1a22,	// (0x000181b0) level_5_zoom

0x1a2b,	// (0x000181b9) level_6_zoom

0x1a34,	// (0x000181c2) level_7_zoom

0x1a3d,	// (0x000181cb) level_8_zoom

0x1a46,	// (0x000181d4) level_9_zoom

0x1a57,	// (0x000181e5) popup_phob_thumbnail_window_g1

0x1a5f,	// (0x000181ed) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00025bd1) popup_phob_thumbnail_window_g

0x2daa,	// (0x00019538) level_1_location

0x2db2,	// (0x00019540) level_2_location

0x2dba,	// (0x00019548) level_3_location

0x2dc2,	// (0x00019550) level_4_location

0x1996,	// (0x00018124) level_5_location

0xa3c4,	// (0x00020b52) mce_icon_pane_g1

0xa3cc,	// (0x00020b5a) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00025bd6) mce_icon_pane_g

0xa3d4,	// (0x00020b62) main_mup_pane_g1_ParamLimits

0xa3d4,	// (0x00020b62) main_mup_pane_g1

0xa3ec,	// (0x00020b7a) main_mup_pane_g2_ParamLimits

0xa3ec,	// (0x00020b7a) main_mup_pane_g2

0xa408,	// (0x00020b96) main_mup_pane_g3_ParamLimits

0xa408,	// (0x00020b96) main_mup_pane_g3

0xa424,	// (0x00020bb2) main_mup_pane_g4_ParamLimits

0xa424,	// (0x00020bb2) main_mup_pane_g4

0xa438,	// (0x00020bc6) main_mup_pane_g5_ParamLimits

0xa438,	// (0x00020bc6) main_mup_pane_g5

0xa459,	// (0x00020be7) main_mup_pane_g6_ParamLimits

0xa459,	// (0x00020be7) main_mup_pane_g6

0xa479,	// (0x00020c07) main_mup_pane_g7_ParamLimits

0xa479,	// (0x00020c07) main_mup_pane_g7

0xa49d,	// (0x00020c2b) main_mup_pane_g8_ParamLimits

0xa49d,	// (0x00020c2b) main_mup_pane_g8

0xa4c1,	// (0x00020c4f) main_mup_pane_g9_ParamLimits

0xa4c1,	// (0x00020c4f) main_mup_pane_g9

0xa4e4,	// (0x00020c72) main_mup_pane_g10_ParamLimits

0xa4e4,	// (0x00020c72) main_mup_pane_g10

0xa507,	// (0x00020c95) main_mup_pane_g11_ParamLimits

0xa507,	// (0x00020c95) main_mup_pane_g11

0xa527,	// (0x00020cb5) main_mup_pane_g12_ParamLimits

0xa527,	// (0x00020cb5) main_mup_pane_g12

0xa535,	// (0x00020cc3) main_mup_pane_g13_ParamLimits

0xa535,	// (0x00020cc3) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00025bdb) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00025bdb) main_mup_pane_g

0xa54b,	// (0x00020cd9) main_mup_pane_t1_ParamLimits

0xa54b,	// (0x00020cd9) main_mup_pane_t1

0xa56a,	// (0x00020cf8) main_mup_pane_t2_ParamLimits

0xa56a,	// (0x00020cf8) main_mup_pane_t2

0xa584,	// (0x00020d12) main_mup_pane_t3_ParamLimits

0xa584,	// (0x00020d12) main_mup_pane_t3

0xa59e,	// (0x00020d2c) main_mup_pane_t4_ParamLimits

0xa59e,	// (0x00020d2c) main_mup_pane_t4

0xa5b0,	// (0x00020d3e) main_mup_pane_t5_ParamLimits

0xa5b0,	// (0x00020d3e) main_mup_pane_t5

0xa5c2,	// (0x00020d50) main_mup_pane_t6_ParamLimits

0xa5c2,	// (0x00020d50) main_mup_pane_t6

0x0005,

0xf468,	// (0x00025bf6) main_mup_pane_t_ParamLimits

0xf468,	// (0x00025bf6) main_mup_pane_t

0xa5d8,	// (0x00020d66) mup_progress_pane_ParamLimits

0xa5d8,	// (0x00020d66) mup_progress_pane

0xa5e4,	// (0x00020d72) mup_visualizer_pane_ParamLimits

0xa5e4,	// (0x00020d72) mup_visualizer_pane

0xa622,	// (0x00020db0) mup_volume_pane_ParamLimits

0xa622,	// (0x00020db0) mup_volume_pane

0x1a67,	// (0x000181f5) mup_visualizer_pane_g1_ParamLimits

0x1a67,	// (0x000181f5) mup_visualizer_pane_g1

0x1a67,	// (0x000181f5) mup_visualizer_pane_g2_ParamLimits

0x1a67,	// (0x000181f5) mup_visualizer_pane_g2

0x18cb,	// (0x00018059) mup_visualizer_pane_g3_ParamLimits

0x18cb,	// (0x00018059) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00025c03) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00025c03) mup_visualizer_pane_g

0x0ccb,	// (0x00017459) mup_volume_pane_g1

0x1a7d,	// (0x0001820b) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00025c0a) mup_volume_pane_g

0x0ccb,	// (0x00017459) mup_progress_pane_g1

0x1a86,	// (0x00018214) mup_progress_pane_g2

0x1a8f,	// (0x0001821d) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00025c0f) mup_progress_pane_g

0x090a,	// (0x00017098) bg_popup_window_pane_cp05

0x1a98,	// (0x00018226) heading_pane_cp02_ParamLimits

0x1a98,	// (0x00018226) heading_pane_cp02

0x1ab4,	// (0x00018242) list_popup_blid_pane

0x1abc,	// (0x0001824a) list_blid_sat_info_pane_ParamLimits

0x1abc,	// (0x0001824a) list_blid_sat_info_pane

0x1acf,	// (0x0001825d) list_blid_sat_info_pane_g1

0x1ad7,	// (0x00018265) list_blid_sat_info_pane_t1

0xa741,	// (0x00020ecf) mup_equalizer_pane_ParamLimits

0xa741,	// (0x00020ecf) mup_equalizer_pane

0xa762,	// (0x00020ef0) mup_equalizer_pane_cp1_ParamLimits

0xa762,	// (0x00020ef0) mup_equalizer_pane_cp1

0xa783,	// (0x00020f11) mup_equalizer_pane_cp2_ParamLimits

0xa783,	// (0x00020f11) mup_equalizer_pane_cp2

0xa7a4,	// (0x00020f32) mup_equalizer_pane_cp3_ParamLimits

0xa7a4,	// (0x00020f32) mup_equalizer_pane_cp3

0xa7c9,	// (0x00020f57) mup_equalizer_pane_cp4_ParamLimits

0xa7c9,	// (0x00020f57) mup_equalizer_pane_cp4

0xa7ee,	// (0x00020f7c) mup_equalizer_pane_cp5

0xa806,	// (0x00020f94) mup_equalizer_pane_cp6

0xa81e,	// (0x00020fac) mup_equalizer_pane_cp7

0x2cc4,	// (0x00019452) bg_popup_call_poc_act_pane_g9

0x2ccc,	// (0x0001945a) bg_popup_call_poc_act_pane_g10

0x2cd4,	// (0x00019462) bg_popup_call_poc_act_pane_g11

0x000a,

0x0b65,	// (0x000172f3) mup_scale_pane

0x0ccb,	// (0x00017459) mup_scale_pane_g1

0x1ae5,	// (0x00018273) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00025c2b) mup_scale_pane_g

0x1b09,	// (0x00018297) msg_data_pane

0x1b11,	// (0x0001829f) scroll_pane_cp017

0xa848,	// (0x00020fd6) bg_list_pane_cp04_ParamLimits

0xa848,	// (0x00020fd6) bg_list_pane_cp04

0x1b19,	// (0x000182a7) msg_data_pane_g1

0xa870,	// (0x00020ffe) msg_data_pane_g2

0xa87a,	// (0x00021008) msg_data_pane_g3

0xa884,	// (0x00021012) msg_data_pane_g4

0xa88c,	// (0x0002101a) msg_data_pane_g5

0xa894,	// (0x00021022) msg_data_pane_g6

0xa89c,	// (0x0002102a) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00025c3a) msg_data_pane_g

0xa8a4,	// (0x00021032) msg_text_pane_ParamLimits

0xa8a4,	// (0x00021032) msg_text_pane

0xa8d3,	// (0x00021061) qrid_highlight_pane_cp011_ParamLimits

0xa8d3,	// (0x00021061) qrid_highlight_pane_cp011

0x090a,	// (0x00017098) msg_body_pane

0x090a,	// (0x00017098) msg_header_pane

0x1b2a,	// (0x000182b8) input_focus_pane_cp07

0xa8f7,	// (0x00021085) msg_header_pane_t1_ParamLimits

0xa8f7,	// (0x00021085) msg_header_pane_t1

0xa90b,	// (0x00021099) msg_header_pane_t2_ParamLimits

0xa90b,	// (0x00021099) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x00025c4e) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x00025c4e) msg_header_pane_t

0x1b3f,	// (0x000182cd) msg_body_pane_g1

0xa91d,	// (0x000210ab) msg_body_pane_t1_ParamLimits

0xa91d,	// (0x000210ab) msg_body_pane_t1

0xa94e,	// (0x000210dc) msg_body_pane_t2_ParamLimits

0xa94e,	// (0x000210dc) msg_body_pane_t2

0xa960,	// (0x000210ee) msg_body_pane_t3_ParamLimits

0xa960,	// (0x000210ee) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00025c53) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00025c53) msg_body_pane_t

0x7497,	// (0x0001dc25) main_viewer_pane_g1_ParamLimits

0x7497,	// (0x0001dc25) main_viewer_pane_g1

0x74a3,	// (0x0001dc31) main_viewer_pane_g2_ParamLimits

0x74a3,	// (0x0001dc31) main_viewer_pane_g2

0xa994,	// (0x00021122) main_viewer_pane_g3_ParamLimits

0xa994,	// (0x00021122) main_viewer_pane_g3

0xa9a5,	// (0x00021133) main_viewer_pane_g4_ParamLimits

0xa9a5,	// (0x00021133) main_viewer_pane_g4

0x74af,	// (0x0001dc3d) main_viewer_pane_g5_ParamLimits

0x74af,	// (0x0001dc3d) main_viewer_pane_g5

0x74af,	// (0x0001dc3d) main_viewer_pane_g7_ParamLimits

0x74af,	// (0x0001dc3d) main_viewer_pane_g7

0x74c1,	// (0x0001dc4f) main_viewer_pane_g8_ParamLimits

0x74c1,	// (0x0001dc4f) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00025c63) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00025c63) main_viewer_pane_g

0x1b89,	// (0x00018317) viewer_content_pane_ParamLimits

0x1b89,	// (0x00018317) viewer_content_pane

0xa9d6,	// (0x00021164) main_postcard_pane_g1_ParamLimits

0xa9d6,	// (0x00021164) main_postcard_pane_g1

0xa9e4,	// (0x00021172) main_postcard_pane_g2_ParamLimits

0xa9e4,	// (0x00021172) main_postcard_pane_g2

0xa9f2,	// (0x00021180) main_postcard_pane_g3_ParamLimits

0xa9f2,	// (0x00021180) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00025c74) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00025c74) main_postcard_pane_g

0xaa02,	// (0x00021190) main_postcard_pane_g4

0x2ee1,	// (0x0001966f) smil_status_volume_pane_g2

0xaa2e,	// (0x000211bc) postcard_pane_ParamLimits

0xaa2e,	// (0x000211bc) postcard_pane

0x1a67,	// (0x000181f5) postcard_pane_g1_ParamLimits

0x1a67,	// (0x000181f5) postcard_pane_g1

0xaa68,	// (0x000211f6) postcard_pane_g2_ParamLimits

0xaa68,	// (0x000211f6) postcard_pane_g2

0xaa74,	// (0x00021202) postcard_pane_g3_ParamLimits

0xaa74,	// (0x00021202) postcard_pane_g3

0x1ba5,	// (0x00018333) postcard_pane_g4_ParamLimits

0x1ba5,	// (0x00018333) postcard_pane_g4

0xaa80,	// (0x0002120e) postcard_pane_g5_ParamLimits

0xaa80,	// (0x0002120e) postcard_pane_g5

0xaa8c,	// (0x0002121a) postcard_pane_g6_ParamLimits

0xaa8c,	// (0x0002121a) postcard_pane_g6

0x1b97,	// (0x00018325) postcard_pane_g7_ParamLimits

0x1b97,	// (0x00018325) postcard_pane_g7

0x0006,

0xf4f3,	// (0x00025c81) postcard_pane_g_ParamLimits

0xf4f3,	// (0x00025c81) postcard_pane_g

0xaa9a,	// (0x00021228) main_mp2_pane_g1_ParamLimits

0xaa9a,	// (0x00021228) main_mp2_pane_g1

0xaaa8,	// (0x00021236) main_mp2_pane_g2_ParamLimits

0xaaa8,	// (0x00021236) main_mp2_pane_g2

0xaab4,	// (0x00021242) main_mp2_pane_g3_ParamLimits

0xaab4,	// (0x00021242) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00025c90) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00025c90) main_mp2_pane_g

0xaac0,	// (0x0002124e) main_mp2_pane_t1_ParamLimits

0xaac0,	// (0x0002124e) main_mp2_pane_t1

0xaad7,	// (0x00021265) main_mp2_pane_t2_ParamLimits

0xaad7,	// (0x00021265) main_mp2_pane_t2

0xaaeb,	// (0x00021279) main_mp2_pane_t3_ParamLimits

0xaaeb,	// (0x00021279) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00025c97) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00025c97) main_mp2_pane_t

0x1bb3,	// (0x00018341) pec_content_pane_ParamLimits

0x1bb3,	// (0x00018341) pec_content_pane

0x1160,	// (0x000178ee) scroll_pane_cp015

0x1bc5,	// (0x00018353) pec_attribute_pane_ParamLimits

0x1bc5,	// (0x00018353) pec_attribute_pane

0xaafd,	// (0x0002128b) pec_content_pane_g1_ParamLimits

0xaafd,	// (0x0002128b) pec_content_pane_g1

0x1bd5,	// (0x00018363) pec_content_pane_t1_ParamLimits

0x1bd5,	// (0x00018363) pec_content_pane_t1

0x1be7,	// (0x00018375) pec_content_pane_t2_ParamLimits

0x1be7,	// (0x00018375) pec_content_pane_t2

0x0001,

0xf510,	// (0x00025c9e) pec_content_pane_t_ParamLimits

0xf510,	// (0x00025c9e) pec_content_pane_t

0xab09,	// (0x00021297) list_single_graphic_pane_cp01_ParamLimits

0xab09,	// (0x00021297) list_single_graphic_pane_cp01

0x0b65,	// (0x000172f3) bg_popup_sub_pane_cp04

0x1bf9,	// (0x00018387) popup_mup_playback_window_g1

0x1c05,	// (0x00018393) popup_mup_playback_window_t1

0x1c1a,	// (0x000183a8) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00025ca3) popup_mup_playback_window_t

0x1c51,	// (0x000183df) main_image_pane_g1_ParamLimits

0x1c51,	// (0x000183df) main_image_pane_g1

0x1c94,	// (0x00018422) scroll_pane_cp018_ParamLimits

0x1c94,	// (0x00018422) scroll_pane_cp018

0x1cac,	// (0x0001843a) scroll_pane_cp016_ParamLimits

0x1cac,	// (0x0001843a) scroll_pane_cp016

0xab9a,	// (0x00021328) smil2_image_pane_ParamLimits

0xab9a,	// (0x00021328) smil2_image_pane

0xabd0,	// (0x0002135e) smil2_root_pane_ParamLimits

0xabd0,	// (0x0002135e) smil2_root_pane

0xabfc,	// (0x0002138a) smil2_text_pane_ParamLimits

0xabfc,	// (0x0002138a) smil2_text_pane

0x090a,	// (0x00017098) bg_list_pane_cp06

0x1ce8,	// (0x00018476) grid_radio_pane

0x090a,	// (0x00017098) bg_popup_window_pane_cp06

0x1cf2,	// (0x00018480) main_fmradio_pane_t1

0x1748,	// (0x00017ed6) heading_pane_cp04

0x1d00,	// (0x0001848e) main_fmradio_pane_t2

0x2cdc,	// (0x0001946a) popup_cale_lunar_info_window_g1

0x1d0e,	// (0x0001849c) main_fmradio_pane_t3

0x2ce4,	// (0x00019472) popup_cale_lunar_info_window_g2

0x1d1e,	// (0x000184ac) main_fmradio_pane_t4

0x0001,

0x1d2c,	// (0x000184ba) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00025d7e) popup_cale_lunar_info_window_g

0xf52a,	// (0x00025cb8) main_fmradio_pane_t

0x1d3a,	// (0x000184c8) wait_bar_pane_cp03

0x1d42,	// (0x000184d0) cell_fmradio_pane_ParamLimits

0x1d42,	// (0x000184d0) cell_fmradio_pane

0x1b97,	// (0x00018325) cell_fmradio_pane_g1_ParamLimits

0x1b97,	// (0x00018325) cell_fmradio_pane_g1

0x090a,	// (0x00017098) grid_highlight_pane_cp011

0x1d57,	// (0x000184e5) poc_content_pane_ParamLimits

0x1d57,	// (0x000184e5) poc_content_pane

0x1d69,	// (0x000184f7) scroll_pane_cp019

0xac3c,	// (0x000213ca) popup_call_poc_act_window_ParamLimits

0xac3c,	// (0x000213ca) popup_call_poc_act_window

0xac49,	// (0x000213d7) popup_call_poc_inact_window_ParamLimits

0xac49,	// (0x000213d7) popup_call_poc_inact_window

0xf5c7,	// (0x00025d55) bg_popup_call_poc_act_pane_g

0x2c54,	// (0x000193e2) bg_popup_call_poc_inact_pane_g1

0x2c5c,	// (0x000193ea) bg_popup_call_poc_inact_pane_g2

0x1d71,	// (0x000184ff) popup_call_poc_act_window_g2

0x2c64,	// (0x000193f2) bg_popup_call_poc_inact_pane_g3

0x2c6c,	// (0x000193fa) bg_popup_call_poc_inact_pane_g4

0x2c74,	// (0x00019402) bg_popup_call_poc_inact_pane_g5

0x1d79,	// (0x00018507) popup_call_poc_act_window_t1_ParamLimits

0x1d79,	// (0x00018507) popup_call_poc_act_window_t1

0x1da1,	// (0x0001852f) popup_call_poc_act_window_t2_ParamLimits

0x1da1,	// (0x0001852f) popup_call_poc_act_window_t2

0x1dc9,	// (0x00018557) popup_call_poc_act_window_t3_ParamLimits

0x1dc9,	// (0x00018557) popup_call_poc_act_window_t3

0x1df1,	// (0x0001857f) popup_call_poc_act_window_t4_ParamLimits

0x1df1,	// (0x0001857f) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00025cc3) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00025cc3) popup_call_poc_act_window_t

0x2c7c,	// (0x0001940a) bg_popup_call_poc_inact_pane_g6

0x2c84,	// (0x00019412) bg_popup_call_poc_inact_pane_g7

0x2c8c,	// (0x0001941a) bg_popup_call_poc_inact_pane_g8

0x1e03,	// (0x00018591) popup_call_poc_inact_window_g2

0x2c94,	// (0x00019422) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00025d42) bg_popup_call_poc_inact_pane_g

0x1e0b,	// (0x00018599) popup_call_poc_inact_window_t1_ParamLimits

0x1e0b,	// (0x00018599) popup_call_poc_inact_window_t1

0x1e20,	// (0x000185ae) popup_call_poc_inact_window_t2_ParamLimits

0x1e20,	// (0x000185ae) popup_call_poc_inact_window_t2

0x1e35,	// (0x000185c3) popup_call_poc_inact_window_t3_ParamLimits

0x1e35,	// (0x000185c3) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00025ccc) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00025ccc) popup_call_poc_inact_window_t

0x2e54,	// (0x000195e2) context_pane_ParamLimits

0xb25b,	// (0x000219e9) signal_pane_ParamLimits

0x1996,	// (0x00018124) main_call2_pane

0x2e42,	// (0x000195d0) popup_phob_thumbnail2_window_ParamLimits

0x2e42,	// (0x000195d0) popup_phob_thumbnail2_window

0x7467,	// (0x0001dbf5) aid_hotspot_pointer_arrow_pane

0x746f,	// (0x0001dbfd) aid_hotspot_pointer_hand_pane

0xaf71,	// (0x000216ff) phob_pre_status_pane_g5

0x8eae,	// (0x0001f63c) cams_zoom_pane_ParamLimits

0x8eba,	// (0x0001f648) image_vga_pane_ParamLimits

0x8ec9,	// (0x0001f657) main_camera_pane_g1_ParamLimits

0x8ed7,	// (0x0001f665) main_camera_pane_g2_ParamLimits

0x8ee3,	// (0x0001f671) main_camera_pane_g3_ParamLimits

0x8ef1,	// (0x0001f67f) main_camera_pane_g4_ParamLimits

0x8eff,	// (0x0001f68d) main_camera_pane_g5_ParamLimits

0x8f0d,	// (0x0001f69b) main_camera_pane_g6_ParamLimits

0x8f1b,	// (0x0001f6a9) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000259cb) main_camera_pane_g_ParamLimits

0x8f29,	// (0x0001f6b7) main_camera_pane_t1_ParamLimits

0x8f3b,	// (0x0001f6c9) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x000259dc) main_camera_pane_t_ParamLimits

0x0b65,	// (0x000172f3) bg_popup_preview_window_pane_cp01_ParamLimits

0x0b65,	// (0x000172f3) bg_popup_preview_window_pane_cp01

0x1e4a,	// (0x000185d8) popup_phob_thumbnail2_window_g1_ParamLimits

0x1e4a,	// (0x000185d8) popup_phob_thumbnail2_window_g1

0x090a,	// (0x00017098) call2_cli_visual_pane

0xac65,	// (0x000213f3) popup_call2_audio_conf_window_ParamLimits

0xac65,	// (0x000213f3) popup_call2_audio_conf_window

0xac7e,	// (0x0002140c) popup_call2_audio_first_window_ParamLimits

0xac7e,	// (0x0002140c) popup_call2_audio_first_window

0xad1c,	// (0x000214aa) popup_call2_audio_in_window_ParamLimits

0xad1c,	// (0x000214aa) popup_call2_audio_in_window

0xad60,	// (0x000214ee) popup_call2_audio_out_window_ParamLimits

0xad60,	// (0x000214ee) popup_call2_audio_out_window

0xadca,	// (0x00021558) popup_call2_audio_second_window_ParamLimits

0xadca,	// (0x00021558) popup_call2_audio_second_window

0xae28,	// (0x000215b6) popup_call2_audio_wait_window_ParamLimits

0xae28,	// (0x000215b6) popup_call2_audio_wait_window

0x090a,	// (0x00017098) bg_popup_call2_act_pane_cp03

0x0b47,	// (0x000172d5) list_conf_pane_cp

0x1e56,	// (0x000185e4) popup_call2_audio_conf_window_t1

0x1e64,	// (0x000185f2) list_single_graphic_popup_conf2_pane_ParamLimits

0x1e64,	// (0x000185f2) list_single_graphic_popup_conf2_pane

0x17b7,	// (0x00017f45) list_highlight_pane_cp04

0x1e77,	// (0x00018605) list_single_graphic_popup_conf2_pane_g1

0x17c8,	// (0x00017f56) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00025cd3) list_single_graphic_popup_conf2_pane_g

0x1e81,	// (0x0001860f) list_single_graphic_popup_conf2_pane_t1

0x1e8f,	// (0x0001861d) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e8f,	// (0x0001861d) bg_popup_call2_act_pane_cp01

0x1f19,	// (0x000186a7) call_type_pane_cp05_ParamLimits

0x1f19,	// (0x000186a7) call_type_pane_cp05

0x1f6d,	// (0x000186fb) popup_call2_audio_second_window_g1_ParamLimits

0x1f6d,	// (0x000186fb) popup_call2_audio_second_window_g1

0x1fc1,	// (0x0001874f) popup_call2_audio_second_window_g2_ParamLimits

0x1fc1,	// (0x0001874f) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00025cd8) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00025cd8) popup_call2_audio_second_window_g

0x2026,	// (0x000187b4) popup_call2_audio_second_window_t1_ParamLimits

0x2026,	// (0x000187b4) popup_call2_audio_second_window_t1

0x20e1,	// (0x0001886f) popup_call2_audio_second_window_t2_ParamLimits

0x20e1,	// (0x0001886f) popup_call2_audio_second_window_t2

0x2134,	// (0x000188c2) popup_call2_audio_second_window_t3_ParamLimits

0x2134,	// (0x000188c2) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00025cdf) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00025cdf) popup_call2_audio_second_window_t

0x090a,	// (0x00017098) bg_popup_call2_in_pane_cp02

0x0914,	// (0x000170a2) call_type_pane_cp04

0x091c,	// (0x000170aa) popup_call2_audio_wait_window_g1

0x0924,	// (0x000170b2) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000258b8) popup_call2_audio_wait_window_g

0x092c,	// (0x000170ba) popup_call2_audio_wait_window_t3

0x2227,	// (0x000189b5) bg_popup_call2_act_pane_ParamLimits

0x2227,	// (0x000189b5) bg_popup_call2_act_pane

0x22e7,	// (0x00018a75) call_type_pane_cp03_ParamLimits

0x22e7,	// (0x00018a75) call_type_pane_cp03

0x234b,	// (0x00018ad9) popup_call2_audio_first_window_g1_ParamLimits

0x234b,	// (0x00018ad9) popup_call2_audio_first_window_g1

0x23bb,	// (0x00018b49) popup_call2_audio_first_window_g2_ParamLimits

0x23bb,	// (0x00018b49) popup_call2_audio_first_window_g2

0x1a67,	// (0x000181f5) popup_call2_audio_first_window_g3_ParamLimits

0x1a67,	// (0x000181f5) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00025ce8) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00025ce8) popup_call2_audio_first_window_g

0x2499,	// (0x00018c27) popup_call2_audio_first_window_t1_ParamLimits

0x2499,	// (0x00018c27) popup_call2_audio_first_window_t1

0x259c,	// (0x00018d2a) popup_call2_audio_first_window_t4_ParamLimits

0x259c,	// (0x00018d2a) popup_call2_audio_first_window_t4

0x267f,	// (0x00018e0d) popup_call2_audio_first_window_t5_ParamLimits

0x267f,	// (0x00018e0d) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00025cf3) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00025cf3) popup_call2_audio_first_window_t

0x0b5d,	// (0x000172eb) bg_popup_call2_act_pane_g1

0x2cee,	// (0x0001947c) popup_cale_lunar_info_window_t1

0x2cfc,	// (0x0001948a) popup_cale_lunar_info_window_t2

0x2d0a,	// (0x00019498) popup_cale_lunar_info_window_t3

0x090a,	// (0x00017098) bg_popup_call2_bubble_pane

0x2780,	// (0x00018f0e) bg_popup_call2_in_pane_cp01_ParamLimits

0x2780,	// (0x00018f0e) bg_popup_call2_in_pane_cp01

0x05e6,	// (0x00016d74) call_type_pane_cp02

0x27c8,	// (0x00018f56) popup_call2_audio_out_window_g1_ParamLimits

0x27c8,	// (0x00018f56) popup_call2_audio_out_window_g1

0x27f4,	// (0x00018f82) popup_call2_audio_out_window_g2_ParamLimits

0x27f4,	// (0x00018f82) popup_call2_audio_out_window_g2

0x281c,	// (0x00018faa) popup_call2_audio_out_window_g3_ParamLimits

0x281c,	// (0x00018faa) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00025cfc) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00025cfc) popup_call2_audio_out_window_g

0x2857,	// (0x00018fe5) popup_call2_audio_out_window_t1_ParamLimits

0x2857,	// (0x00018fe5) popup_call2_audio_out_window_t1

0x28b6,	// (0x00019044) popup_call2_audio_out_window_t2_ParamLimits

0x28b6,	// (0x00019044) popup_call2_audio_out_window_t2

0x290a,	// (0x00019098) popup_call2_audio_out_window_t3_ParamLimits

0x290a,	// (0x00019098) popup_call2_audio_out_window_t3

0x2920,	// (0x000190ae) popup_call2_audio_out_window_t4_ParamLimits

0x2920,	// (0x000190ae) popup_call2_audio_out_window_t4

0x2936,	// (0x000190c4) popup_call2_audio_out_window_t5_ParamLimits

0x2936,	// (0x000190c4) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00025d05) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00025d05) popup_call2_audio_out_window_t

0x299a,	// (0x00019128) bg_popup_call2_in_pane_ParamLimits

0x299a,	// (0x00019128) bg_popup_call2_in_pane

0x29f6,	// (0x00019184) popup_call2_audio_in_window_g1_ParamLimits

0x29f6,	// (0x00019184) popup_call2_audio_in_window_g1

0x2a2e,	// (0x000191bc) popup_call2_audio_in_window_g2_ParamLimits

0x2a2e,	// (0x000191bc) popup_call2_audio_in_window_g2

0x2a66,	// (0x000191f4) popup_call2_audio_in_window_g3_ParamLimits

0x2a66,	// (0x000191f4) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00025d12) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00025d12) popup_call2_audio_in_window_g

0x2abe,	// (0x0001924c) popup_call2_audio_in_window_t1_ParamLimits

0x2abe,	// (0x0001924c) popup_call2_audio_in_window_t1

0x2b3e,	// (0x000192cc) popup_call2_audio_in_window_t2_ParamLimits

0x2b3e,	// (0x000192cc) popup_call2_audio_in_window_t2

0x2bbe,	// (0x0001934c) popup_call2_audio_in_window_t3_ParamLimits

0x2bbe,	// (0x0001934c) popup_call2_audio_in_window_t3

0x2bd8,	// (0x00019366) popup_call2_audio_in_window_t4_ParamLimits

0x2bd8,	// (0x00019366) popup_call2_audio_in_window_t4

0x2bea,	// (0x00019378) popup_call2_audio_in_window_t5_ParamLimits

0x2bea,	// (0x00019378) popup_call2_audio_in_window_t5

0x2bff,	// (0x0001938d) popup_call2_audio_in_window_t6_ParamLimits

0x2bff,	// (0x0001938d) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00025d1b) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00025d1b) popup_call2_audio_in_window_t

0x0b5d,	// (0x000172eb) bg_popup_call2_in_pane_g1

0x2d18,	// (0x000194a6) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00025d83) popup_cale_lunar_info_window_t

0x0b65,	// (0x000172f3) bg_popup_call2_rect_pane_ParamLimits

0x0b65,	// (0x000172f3) bg_popup_call2_rect_pane

0x090a,	// (0x00017098) call2_cli_visual_graphic_pane

0x090a,	// (0x00017098) call2_cli_visual_text_pane

0x74d9,	// (0x0001dc67) smil_status_volume_pane_g3

0x0002,

0x0ccb,	// (0x00017459) call2_cli_visual_graphic_pane_g1

0x0ccb,	// (0x00017459) call2_cli_visual_graphic_pane_g2

0x0ccb,	// (0x00017459) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00025d28) call2_cli_visual_graphic_pane_g

0x2c14,	// (0x000193a2) bg_popup_call2_rect_pane_g1

0x0d73,	// (0x00017501) bg_popup_call2_rect_pane_g2

0x2c1c,	// (0x000193aa) bg_popup_call2_rect_pane_g3

0x2c24,	// (0x000193b2) bg_popup_call2_rect_pane_g4

0x2c2c,	// (0x000193ba) bg_popup_call2_rect_pane_g5

0x2c34,	// (0x000193c2) bg_popup_call2_rect_pane_g6

0x2c3c,	// (0x000193ca) bg_popup_call2_rect_pane_g7

0x2c44,	// (0x000193d2) bg_popup_call2_rect_pane_g8

0x2c4c,	// (0x000193da) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00025d2f) bg_popup_call2_rect_pane_g

0x2c54,	// (0x000193e2) bg_popup_call2_bubble_pane_g1

0x2c5c,	// (0x000193ea) bg_popup_call2_bubble_pane_g2

0x2c64,	// (0x000193f2) bg_popup_call2_bubble_pane_g3

0x2c6c,	// (0x000193fa) bg_popup_call2_bubble_pane_g4

0x2c74,	// (0x00019402) bg_popup_call2_bubble_pane_g5

0x2c7c,	// (0x0001940a) bg_popup_call2_bubble_pane_g6

0x2c84,	// (0x00019412) bg_popup_call2_bubble_pane_g7

0x2c8c,	// (0x0001941a) bg_popup_call2_bubble_pane_g8

0x2c94,	// (0x00019422) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00025d42) bg_popup_call2_bubble_pane_g

0x8b21,	// (0x0001f2af) aid_cale_week_size_cell_pane

0x8f4f,	// (0x0001f6dd) aid_cams_cif_uncrop_pane_ParamLimits

0x8f4f,	// (0x0001f6dd) aid_cams_cif_uncrop_pane

0x90ac,	// (0x0001f83a) aid_cams_size_cell_ParamLimits

0x90ac,	// (0x0001f83a) aid_cams_size_cell

0x90b8,	// (0x0001f846) grid_cams_pane_ParamLimits

0x90c6,	// (0x0001f854) linegrid_cams_pane_ParamLimits

0x91b7,	// (0x0001f945) call_video_pane_t1

0x91cd,	// (0x0001f95b) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00025a2f) call_video_pane_t

0x9627,	// (0x0001fdb5) aid_cale_month_size_cell_pane_ParamLimits

0x9627,	// (0x0001fdb5) aid_cale_month_size_cell_pane

0xf63e,	// (0x00025dcc) smil_status_volume_pane_g

0x74e6,	// (0x0001dc74) volume_smil_pane_ParamLimits

0x048a,	// (0x00016c18) aid_popup2_width_pane

0x8a85,	// (0x0001f213) cell_qdial_pane_g4_ParamLimits

0x8a85,	// (0x0001f213) cell_qdial_pane_g4

0xa22f,	// (0x000209bd) aid_blid_cardinal_pane_ParamLimits

0xa23f,	// (0x000209cd) aid_blid_destination_pane_ParamLimits

0xa23f,	// (0x000209cd) aid_blid_destination_pane

0x0b65,	// (0x000172f3) bg_popup_call_poc_act_pane_ParamLimits

0x0b65,	// (0x000172f3) bg_popup_call_poc_act_pane

0x0b65,	// (0x000172f3) bg_popup_call_poc_inact_pane_ParamLimits

0x0b65,	// (0x000172f3) bg_popup_call_poc_inact_pane

0x2c9c,	// (0x0001942a) bg_popup_call_poc_act_pane_g1

0x2ca4,	// (0x00019432) bg_popup_call_poc_act_pane_g2

0x2cac,	// (0x0001943a) bg_popup_call_poc_act_pane_g3

0x2c6c,	// (0x000193fa) bg_popup_call_poc_act_pane_g4

0x2c74,	// (0x00019402) bg_popup_call_poc_act_pane_g5

0x2cb4,	// (0x00019442) bg_popup_call_poc_act_pane_g6

0x2c84,	// (0x00019412) bg_popup_call_poc_act_pane_g7

0x2cbc,	// (0x0001944a) bg_popup_call_poc_act_pane_g8

0x090a,	// (0x00017098) main_usb_pane

0x2e19,	// (0x000195a7) popup_cale_lunar_info_window

0x9464,	// (0x0001fbf2) im_reading_pane_t1_ParamLimits

0x10b8,	// (0x00017846) list_im_pane_ParamLimits

0x10c9,	// (0x00017857) scroll_pane_cp07_ParamLimits

0x090a,	// (0x00017098) grid_highlight_pane_cp012

0x0b65,	// (0x000172f3) mup_scale_pane_ParamLimits

0x1a67,	// (0x000181f5) main_usb_pane_g1_ParamLimits

0x1a67,	// (0x000181f5) main_usb_pane_g1

0xae94,	// (0x00021622) main_usb_pane_g2_ParamLimits

0xae94,	// (0x00021622) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00025d6c) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00025d6c) main_usb_pane_g

0xaea0,	// (0x0002162e) main_usb_pane_t1_ParamLimits

0xaea0,	// (0x0002162e) main_usb_pane_t1

0xaeb2,	// (0x00021640) main_usb_pane_t2_ParamLimits

0xaeb2,	// (0x00021640) main_usb_pane_t2

0xaec4,	// (0x00021652) main_usb_pane_t3_ParamLimits

0xaec4,	// (0x00021652) main_usb_pane_t3

0xaed6,	// (0x00021664) main_usb_pane_t4_ParamLimits

0xaed6,	// (0x00021664) main_usb_pane_t4

0xaee8,	// (0x00021676) main_usb_pane_t5_ParamLimits

0xaee8,	// (0x00021676) main_usb_pane_t5

0xaefa,	// (0x00021688) main_usb_pane_t6_ParamLimits

0xaefa,	// (0x00021688) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00025d71) main_usb_pane_t_ParamLimits

0xa1ea,	// (0x00020978) aid_text_placing

0xa1f5,	// (0x00020983) main_location2_pane_t1_ParamLimits

0xa209,	// (0x00020997) main_location2_pane_t2_ParamLimits

0xa209,	// (0x00020997) main_location2_pane_t3_ParamLimits

0xa21d,	// (0x000209ab) main_location2_pane_t4_ParamLimits

0xa21d,	// (0x000209ab) main_location2_pane_t4

0xf402,	// (0x00025b90) main_location2_pane_t_ParamLimits

0x0ba1,	// (0x0001732f) find_pinb_pane_g2_ParamLimits

0x0ba1,	// (0x0001732f) find_pinb_pane_g2

0x0001,

0xf150,	// (0x000258de) find_pinb_pane_g_ParamLimits

0xf150,	// (0x000258de) find_pinb_pane_g

0x0bad,	// (0x0001733b) find_pinb_pane_t1_ParamLimits

0x0bbf,	// (0x0001734d) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x000258e3) find_pinb_pane_t_ParamLimits

0x090a,	// (0x00017098) main_call3_pane

0x9983,	// (0x00020111) cale_month_day_heading_pane_t1_ParamLimits

0x99e1,	// (0x0002016f) cale_month_day_heading_pane_t2_ParamLimits

0x9a46,	// (0x000201d4) cale_month_day_heading_pane_t3_ParamLimits

0x9aab,	// (0x00020239) cale_month_day_heading_pane_t4_ParamLimits

0x9b10,	// (0x0002029e) cale_month_day_heading_pane_t5_ParamLimits

0x9b7d,	// (0x0002030b) cale_month_day_heading_pane_t6_ParamLimits

0x9bf2,	// (0x00020380) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00025a67) cale_month_day_heading_pane_t_ParamLimits

0x133f,	// (0x00017acd) smil_status_volume_pane

0xaa4c,	// (0x000211da) postcard_address_pane_ParamLimits

0xaa4c,	// (0x000211da) postcard_address_pane

0xaa5a,	// (0x000211e8) postcard_message_pane_ParamLimits

0xaa5a,	// (0x000211e8) postcard_message_pane

0xae67,	// (0x000215f5) call2_cli_visual_pane_t1_ParamLimits

0xae67,	// (0x000215f5) call2_cli_visual_pane_t1

0xb411,	// (0x00021b9f) postcard_message_pane_t1_ParamLimits

0xb411,	// (0x00021b9f) postcard_message_pane_t1

0x2f29,	// (0x000196b7) postcard_address_pane_t1_ParamLimits

0x2f29,	// (0x000196b7) postcard_address_pane_t1

0xb402,	// (0x00021b90) popup_call3_audio_in_window_ParamLimits

0xb402,	// (0x00021b90) popup_call3_audio_in_window

0xb2e0,	// (0x00021a6e) bg_popup_call3_in_pane_ParamLimits

0xb2e0,	// (0x00021a6e) bg_popup_call3_in_pane

0xb348,	// (0x00021ad6) popup_call3_audio_in_window_g1_ParamLimits

0xb348,	// (0x00021ad6) popup_call3_audio_in_window_g1

0xb360,	// (0x00021aee) popup_call3_audio_in_window_g2_ParamLimits

0xb360,	// (0x00021aee) popup_call3_audio_in_window_g2

0xb378,	// (0x00021b06) popup_call3_audio_in_window_g3_ParamLimits

0xb378,	// (0x00021b06) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00025dd3) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00025dd3) popup_call3_audio_in_window_g

0xb3a0,	// (0x00021b2e) popup_call3_audio_in_window_t1_ParamLimits

0xb3a0,	// (0x00021b2e) popup_call3_audio_in_window_t1

0xb3c8,	// (0x00021b56) popup_call3_audio_in_window_t2_ParamLimits

0xb3c8,	// (0x00021b56) popup_call3_audio_in_window_t2

0xb3f0,	// (0x00021b7e) popup_call3_audio_in_window_t3_ParamLimits

0xb3f0,	// (0x00021b7e) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00025ddc) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00025ddc) popup_call3_audio_in_window_t

0x1996,	// (0x00018124) bg_popup_call3_rect_pane

0x2c14,	// (0x000193a2) bg_popup_call3_rect_pane_g1

0x0d73,	// (0x00017501) bg_popup_call3_rect_pane_g2

0x2c1c,	// (0x000193aa) bg_popup_call3_rect_pane_g3

0x2c24,	// (0x000193b2) bg_popup_call3_rect_pane_g4

0x2c2c,	// (0x000193ba) bg_popup_call3_rect_pane_g5

0x2c34,	// (0x000193c2) bg_popup_call3_rect_pane_g6

0x2c3c,	// (0x000193ca) bg_popup_call3_rect_pane_g7

0xa63d,	// (0x00020dcb) mup_visualizer_osc_pane

0x1a75,	// (0x00018203) mup_visualizer_spec_pane

0xb300,	// (0x00021a8e) call3_video_qcif_pane_ParamLimits

0xb300,	// (0x00021a8e) call3_video_qcif_pane

0xb312,	// (0x00021aa0) call3_video_qcif_uncrop_pane_ParamLimits

0xb312,	// (0x00021aa0) call3_video_qcif_uncrop_pane

0xb322,	// (0x00021ab0) call3_video_subqcif_pane_ParamLimits

0xb322,	// (0x00021ab0) call3_video_subqcif_pane

0xb336,	// (0x00021ac4) call3_video_subqcif_uncrop_pane_ParamLimits

0xb336,	// (0x00021ac4) call3_video_subqcif_uncrop_pane

0xb390,	// (0x00021b1e) popup_call3_audio_in_window_g4_ParamLimits

0xb390,	// (0x00021b1e) popup_call3_audio_in_window_g4

0xb2cf,	// (0x00021a5d) mup_spec_half_pane

0xb2d8,	// (0x00021a66) mup_spec_half_pane_cp

0x2ec7,	// (0x00019655) mup_osc_middle_pane

0x2ed0,	// (0x0001965e) mup_visualizer_osc_pane_g1

0xb2af,	// (0x00021a3d) mup_spec_bar_pane_ParamLimits

0xb2af,	// (0x00021a3d) mup_spec_bar_pane

0x2eb4,	// (0x00019642) mup_spec_bar_pane_g1

0x2ebe,	// (0x0001964c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00025dc7) mup_spec_bar_pane_g

0x8b21,	// (0x0001f2af) aid_cale_week_size_cell_pane_ParamLimits

0x8b34,	// (0x0001f2c2) bg_cale_heading_pane_ParamLimits

0x0dfd,	// (0x0001758b) bg_cale_pane_cp01_ParamLimits

0x8b48,	// (0x0001f2d6) cale_week_corner_pane_ParamLimits

0x8b5e,	// (0x0001f2ec) cale_week_day_heading_pane_ParamLimits

0x8b72,	// (0x0001f300) cale_week_scroll_pane_g1_ParamLimits

0x8b83,	// (0x0001f311) cale_week_scroll_pane_g2_ParamLimits

0x8b94,	// (0x0001f322) cale_week_scroll_pane_g3_ParamLimits

0x8ba5,	// (0x0001f333) cale_week_scroll_pane_g4_ParamLimits

0x8bb6,	// (0x0001f344) cale_week_scroll_pane_g5_ParamLimits

0x8bc7,	// (0x0001f355) cale_week_scroll_pane_g6_ParamLimits

0x8bda,	// (0x0001f368) cale_week_scroll_pane_g7_ParamLimits

0x8bed,	// (0x0001f37b) cale_week_scroll_pane_g8_ParamLimits

0x8c00,	// (0x0001f38e) cale_week_scroll_pane_g9_ParamLimits

0x8c11,	// (0x0001f39f) cale_week_scroll_pane_g10_ParamLimits

0x8c22,	// (0x0001f3b0) cale_week_scroll_pane_g11_ParamLimits

0x8c33,	// (0x0001f3c1) cale_week_scroll_pane_g12_ParamLimits

0x8c44,	// (0x0001f3d2) cale_week_scroll_pane_g13_ParamLimits

0x8c55,	// (0x0001f3e3) cale_week_scroll_pane_g14_ParamLimits

0x8c66,	// (0x0001f3f4) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0002596f) cale_week_scroll_pane_g_ParamLimits

0x8c77,	// (0x0001f405) cale_week_time_pane_ParamLimits

0x8c8a,	// (0x0001f418) grid_cale_week_pane_ParamLimits

0x0e16,	// (0x000175a4) listscroll_cale_week_pane_t1

0x8c9f,	// (0x0001f42d) scroll_pane_cp08_ParamLimits

0x9668,	// (0x0001fdf6) cale_month_corner_pane_ParamLimits

0x12df,	// (0x00017a6d) cale_month_pane_t1

0x9942,	// (0x000200d0) cale_month_week_pane_ParamLimits

0x1a67,	// (0x000181f5) popup_call_status_window_g1_ParamLimits

0xa06b,	// (0x000207f9) popup_call_status_window_g2_ParamLimits

0xa077,	// (0x00020805) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00025b17) popup_call_status_window_g_ParamLimits

0x16d1,	// (0x00017e5f) aid_call2_pane

0xa8e9,	// (0x00021077) msg_header_pane_g1

0xaa4c,	// (0x000211da) postcard_address2_pane_ParamLimits

0xaa4c,	// (0x000211da) postcard_address2_pane

0xaa5a,	// (0x000211e8) postcard_message2_pane_ParamLimits

0xaa5a,	// (0x000211e8) postcard_message2_pane

0xb269,	// (0x000219f7) message2_row_pane_ParamLimits

0xb269,	// (0x000219f7) message2_row_pane

0x2e6f,	// (0x000195fd) address2_row_pane_ParamLimits

0x2e6f,	// (0x000195fd) address2_row_pane

0x2e82,	// (0x00019610) postcard_message2_row_pane_g1

0x2e8a,	// (0x00019618) postcard_message2_row_pane_t1

0x2e82,	// (0x00019610) address2_row_pane_g1

0x2e8a,	// (0x00019618) address2_row_pane_t1

0x7320,	// (0x0001daae) aid_size_cell_vorec

0x090a,	// (0x00017098) main_rss_pane

0xb283,	// (0x00021a11) rss_list_single_pane_ParamLimits

0xb283,	// (0x00021a11) rss_list_single_pane

0x2e98,	// (0x00019626) rss_list_single_pane_t1

0x2ea6,	// (0x00019634) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00025dc2) rss_list_single_pane_t

0x090a,	// (0x00017098) main_camera2_pane

0x090a,	// (0x00017098) main_video2_pane

0x7544,	// (0x0001dcd2) cams_zoom_pane_cp2_ParamLimits

0x7544,	// (0x0001dcd2) cams_zoom_pane_cp2

0x7550,	// (0x0001dcde) image2_vga_pane_ParamLimits

0x7550,	// (0x0001dcde) image2_vga_pane

0x755f,	// (0x0001dced) main_camera2_pane_g1_ParamLimits

0x755f,	// (0x0001dced) main_camera2_pane_g1

0x756b,	// (0x0001dcf9) main_camera2_pane_g2_ParamLimits

0x756b,	// (0x0001dcf9) main_camera2_pane_g2

0x7577,	// (0x0001dd05) main_camera2_pane_g3_ParamLimits

0x7577,	// (0x0001dd05) main_camera2_pane_g3

0x7583,	// (0x0001dd11) main_camera2_pane_g4_ParamLimits

0x7583,	// (0x0001dd11) main_camera2_pane_g4

0x758f,	// (0x0001dd1d) main_camera2_pane_g5_ParamLimits

0x758f,	// (0x0001dd1d) main_camera2_pane_g5

0x759b,	// (0x0001dd29) main_camera2_pane_g6_ParamLimits

0x759b,	// (0x0001dd29) main_camera2_pane_g6

0x75a7,	// (0x0001dd35) main_camera2_pane_g7_ParamLimits

0x75a7,	// (0x0001dd35) main_camera2_pane_g7

0x75b3,	// (0x0001dd41) main_camera2_pane_g8_ParamLimits

0x75b3,	// (0x0001dd41) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00025de3) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00025de3) main_camera2_pane_g

0x75cb,	// (0x0001dd59) main_camera2_pane_t1_ParamLimits

0x75cb,	// (0x0001dd59) main_camera2_pane_t1

0x75dd,	// (0x0001dd6b) main_camera2_pane_t2_ParamLimits

0x75dd,	// (0x0001dd6b) main_camera2_pane_t2

0x75ef,	// (0x0001dd7d) main_camera2_pane_t3_ParamLimits

0x75ef,	// (0x0001dd7d) main_camera2_pane_t3

0x7601,	// (0x0001dd8f) main_camera2_pane_t4_ParamLimits

0x7601,	// (0x0001dd8f) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00025df6) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00025df6) main_camera2_pane_t

0x765e,	// (0x0001ddec) cams_zoom_pane_cp4_ParamLimits

0x765e,	// (0x0001ddec) cams_zoom_pane_cp4

0x766e,	// (0x0001ddfc) image2_cif_pane_ParamLimits

0x766e,	// (0x0001ddfc) image2_cif_pane

0x7683,	// (0x0001de11) image2_subqcif_pane_ParamLimits

0x7683,	// (0x0001de11) image2_subqcif_pane

0x7692,	// (0x0001de20) main_video2_pane_g1_ParamLimits

0x7692,	// (0x0001de20) main_video2_pane_g1

0x76a4,	// (0x0001de32) main_video2_pane_g2_ParamLimits

0x76a4,	// (0x0001de32) main_video2_pane_g2

0x76b4,	// (0x0001de42) main_video2_pane_g3_ParamLimits

0x76b4,	// (0x0001de42) main_video2_pane_g3

0x76c4,	// (0x0001de52) main_video2_pane_g4_ParamLimits

0x76c4,	// (0x0001de52) main_video2_pane_g4

0x76d4,	// (0x0001de62) main_video2_pane_g5_ParamLimits

0x76d4,	// (0x0001de62) main_video2_pane_g5

0x76e4,	// (0x0001de72) main_video2_pane_g6_ParamLimits

0x76e4,	// (0x0001de72) main_video2_pane_g6

0x0005,

0xf677,	// (0x00025e05) main_video2_pane_g_ParamLimits

0xf677,	// (0x00025e05) main_video2_pane_g

0x76f6,	// (0x0001de84) main_video2_pane_t1_ParamLimits

0x76f6,	// (0x0001de84) main_video2_pane_t1

0x7710,	// (0x0001de9e) main_video2_pane_t2_ParamLimits

0x7710,	// (0x0001de9e) main_video2_pane_t2

0x7736,	// (0x0001dec4) main_video2_pane_t3_ParamLimits

0x7736,	// (0x0001dec4) main_video2_pane_t3

0x0002,

0xf684,	// (0x00025e12) main_video2_pane_t_ParamLimits

0xf684,	// (0x00025e12) main_video2_pane_t

0xafb1,	// (0x0002173f) call_muted_g2

0x0001,

0xf626,	// (0x00025db4) call_muted_g

0x090a,	// (0x00017098) main_mup2_pane

0x2f99,	// (0x00019727) main_mup2_pane_g1_ParamLimits

0x2f99,	// (0x00019727) main_mup2_pane_g1

0xb42c,	// (0x00021bba) main_mup2_pane_g2_ParamLimits

0xb42c,	// (0x00021bba) main_mup2_pane_g2

0x7785,	// (0x0001df13) main_mup_pane_g13_cp1

0x778d,	// (0x0001df1b) mup_volume_pane_cp1

0xb44e,	// (0x00021bdc) main_mup2_pane_g4_ParamLimits

0xb44e,	// (0x00021bdc) main_mup2_pane_g4

0xb463,	// (0x00021bf1) main_mup2_pane_g5_ParamLimits

0xb463,	// (0x00021bf1) main_mup2_pane_g5

0xb478,	// (0x00021c06) main_mup2_pane_g6_ParamLimits

0xb478,	// (0x00021c06) main_mup2_pane_g6

0xb48d,	// (0x00021c1b) main_mup2_pane_g7_ParamLimits

0xb48d,	// (0x00021c1b) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00025e19) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00025e19) main_mup2_pane_g

0xb4a9,	// (0x00021c37) main_mup2_pane_t1_ParamLimits

0xb4a9,	// (0x00021c37) main_mup2_pane_t1

0xb4c0,	// (0x00021c4e) main_mup2_pane_t2_ParamLimits

0xb4c0,	// (0x00021c4e) main_mup2_pane_t2

0xb4d7,	// (0x00021c65) main_mup2_pane_t3_ParamLimits

0xb4d7,	// (0x00021c65) main_mup2_pane_t3

0xb4ee,	// (0x00021c7c) main_mup2_pane_t4_ParamLimits

0xb4ee,	// (0x00021c7c) main_mup2_pane_t4

0xb508,	// (0x00021c96) main_mup2_pane_t5_ParamLimits

0xb508,	// (0x00021c96) main_mup2_pane_t5

0xb522,	// (0x00021cb0) main_mup2_pane_t6_ParamLimits

0xb522,	// (0x00021cb0) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00025e28) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00025e28) main_mup2_pane_t

0xb55a,	// (0x00021ce8) mup2_visualizer_pane_ParamLimits

0xb55a,	// (0x00021ce8) mup2_visualizer_pane

0xb590,	// (0x00021d1e) mup_progress_pane_cp_ParamLimits

0xb590,	// (0x00021d1e) mup_progress_pane_cp

0x7770,	// (0x0001defe) mup_volume_pane_cp_ParamLimits

0x7770,	// (0x0001defe) mup_volume_pane_cp

0xb5a9,	// (0x00021d37) mup2_visualizer_pane_g1_ParamLimits

0xb5a9,	// (0x00021d37) mup2_visualizer_pane_g1

0x2f6b,	// (0x000196f9) mup2_visualizer_pane_g2_ParamLimits

0x2f6b,	// (0x000196f9) mup2_visualizer_pane_g2

0xb5be,	// (0x00021d4c) mup2_visualizer_pane_g3_ParamLimits

0xb5be,	// (0x00021d4c) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00025e35) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00025e35) mup2_visualizer_pane_g

0x1ce0,	// (0x0001846e) aid_size_cell_fmradio

0xb0c7,	// (0x00021855) aid_height_parent_landcape

0x1147,	// (0x000178d5) wml_content_pane_cp

0x114f,	// (0x000178dd) wml_tabs_pane

0x1158,	// (0x000178e6) popup_wml_miniature_window

0x1160,	// (0x000178ee) scroll_pane_cp021

0x1174,	// (0x00017902) wml_content_pane_comp8

0x090a,	// (0x00017098) bg_popup_sub_pane_cp05

0x2f89,	// (0x00019717) popup_wml_miniature_window_g1

0x2f91,	// (0x0001971f) wml_miniature_view_pane

0xb5cc,	// (0x00021d5a) aid_size_wml_view

0xb5d4,	// (0x00021d62) wml_miniature_view_pane_g1

0xb5dd,	// (0x00021d6b) wml_miniature_view_pane_g2

0xb5e6,	// (0x00021d74) wml_miniature_view_pane_g3

0xb5ee,	// (0x00021d7c) wml_miniature_view_pane_g4

0xb5f6,	// (0x00021d84) wml_miniature_view_pane_g5

0xb5fe,	// (0x00021d8c) wml_miniature_view_pane_g6

0xb606,	// (0x00021d94) wml_miniature_view_pane_g7

0xb60e,	// (0x00021d9c) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00025e3c) wml_miniature_view_pane_g

0x2f99,	// (0x00019727) background_graphic_ParamLimits

0x2f99,	// (0x00019727) background_graphic

0x2fa5,	// (0x00019733) wml_tabs_2_pane

0x2fae,	// (0x0001973c) wml_tabs_3_pane_ParamLimits

0x2fae,	// (0x0001973c) wml_tabs_3_pane

0x2fc0,	// (0x0001974e) wml_tabs_4_pane_ParamLimits

0x2fc0,	// (0x0001974e) wml_tabs_4_pane

0x2fd6,	// (0x00019764) wml_tabs_5_pane_ParamLimits

0x2fd6,	// (0x00019764) wml_tabs_5_pane

0x2ff0,	// (0x0001977e) wml_tabs_pane_g2_ParamLimits

0x2ff0,	// (0x0001977e) wml_tabs_pane_g2

0x3004,	// (0x00019792) wml_tabs_pane_g3_ParamLimits

0x3004,	// (0x00019792) wml_tabs_pane_g3

0xb616,	// (0x00021da4) wml_tabs_2_active_pane_ParamLimits

0xb616,	// (0x00021da4) wml_tabs_2_active_pane

0xb628,	// (0x00021db6) wml_tabs_2_passive_pane_ParamLimits

0xb628,	// (0x00021db6) wml_tabs_2_passive_pane

0xb63a,	// (0x00021dc8) wml_tabs_3_active_pane_cp_ParamLimits

0xb63a,	// (0x00021dc8) wml_tabs_3_active_pane_cp

0xb64d,	// (0x00021ddb) wml_tabs_3_passive_pane_ParamLimits

0xb64d,	// (0x00021ddb) wml_tabs_3_passive_pane

0xb65e,	// (0x00021dec) wml_tabs_3_passive_pane_cp_ParamLimits

0xb65e,	// (0x00021dec) wml_tabs_3_passive_pane_cp

0xb673,	// (0x00021e01) tabs_4_active_pane

0xb67b,	// (0x00021e09) tabs_4_passive_pane

0xb683,	// (0x00021e11) tabs_4_passive_pane_cp

0xb68b,	// (0x00021e19) tabs_4_passive_pane_cp2

0xae8c,	// (0x0002161a) aid_height_text

0xa606,	// (0x00020d94) mup_volume_cont_pane_ParamLimits

0xa606,	// (0x00020d94) mup_volume_cont_pane

0x884f,	// (0x0001efdd) aid_size_cell_pinb

0x8859,	// (0x0001efe7) aid_size_list_pinb

0xb579,	// (0x00021d07) mup2_volume_cont_pane_ParamLimits

0xb579,	// (0x00021d07) mup2_volume_cont_pane

0x775c,	// (0x0001deea) mup2_volume_cont_pane_g1_ParamLimits

0x775c,	// (0x0001deea) mup2_volume_cont_pane_g1

0x84da,	// (0x0001ec68) aid_size_cell_touch_ParamLimits

0x84da,	// (0x0001ec68) aid_size_cell_touch

0x8736,	// (0x0001eec4) touch_pane_ParamLimits

0x8736,	// (0x0001eec4) touch_pane

0x0478,	// (0x00016c06) main_rss2_pane

0x305a,	// (0x000197e8) listscroll_rss2_pane

0x3063,	// (0x000197f1) rss2_navigation_pane

0x306b,	// (0x000197f9) list_rss2_pane

0x185c,	// (0x00017fea) scroll_pane_cp22

0x3073,	// (0x00019801) rss2_navigation_pane_g1

0x307c,	// (0x0001980a) rss2_navigation_pane_g2

0x3084,	// (0x00019812) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x00025e4d) rss2_navigation_pane_g

0x308c,	// (0x0001981a) rss2_navigation_pane_t1

0xb695,	// (0x00021e23) rss2_list_single_pane_ParamLimits

0xb695,	// (0x00021e23) rss2_list_single_pane

0x309a,	// (0x00019828) rss2_list_single_pane_t2

0x30a8,	// (0x00019836) rss2_list_single_pane_t3_ParamLimits

0x30a8,	// (0x00019836) rss2_list_single_pane_t3

0x30c5,	// (0x00019853) rss2_list_single_pane_t4

0x9e42,	// (0x000205d0) smil_status_pane_g1

0x04e9,	// (0x00016c77) main_image2_pane_ParamLimits

0x04e9,	// (0x00016c77) main_image2_pane

0x75bf,	// (0x0001dd4d) main_camera2_pane_g9_ParamLimits

0x75bf,	// (0x0001dd4d) main_camera2_pane_g9

0x7613,	// (0x0001dda1) main_camera2_pane_t5_ParamLimits

0x7613,	// (0x0001dda1) main_camera2_pane_t5

0x7625,	// (0x0001ddb3) main_camera2_pane_t6_ParamLimits

0x7625,	// (0x0001ddb3) main_camera2_pane_t6

0xb6bb,	// (0x00021e49) main_image2_pane_g1_ParamLimits

0xb6bb,	// (0x00021e49) main_image2_pane_g1

0xac26,	// (0x000213b4) smil2_video_pane_ParamLimits

0xac26,	// (0x000213b4) smil2_video_pane

0x0496,	// (0x00016c24) aid_zoom_text_primary_cp

0x04df,	// (0x00016c6d) popup_preview_fixed_window

0x10b0,	// (0x0001783e) im_reading_pane_g1

0x7509,	// (0x0001dc97) cams2_bc_adjust_pane_cp_ParamLimits

0x7509,	// (0x0001dc97) cams2_bc_adjust_pane_cp

0x7650,	// (0x0001ddde) cams2_bc_adjust_pane_ParamLimits

0x7650,	// (0x0001ddde) cams2_bc_adjust_pane

0x4867,	// (0x0001aff5) cams2_bc_adjust_pane_g1

0x7795,	// (0x0001df23) cams2_slider_pane

0x779e,	// (0x0001df2c) cams2_slider_pane_g1

0x77a7,	// (0x0001df35) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00025e54) cams2_slider_pane_g

0x7021,	// (0x0001d7af) calc_display_pane_ParamLimits

0x703f,	// (0x0001d7cd) calc_paper_pane_ParamLimits

0x705b,	// (0x0001d7e9) grid_calc_pane_ParamLimits

0x7438,	// (0x0001dbc6) popup_clock_digital_window_t1_ParamLimits

0x1c7d,	// (0x0001840b) main_image_pane_t1

0x7007,	// (0x0001d795) aid_size_cell_calc_ParamLimits

0x7007,	// (0x0001d795) aid_size_cell_calc

0xb0f9,	// (0x00021887) popup_blid_sat_info2_window_ParamLimits

0xb0f9,	// (0x00021887) popup_blid_sat_info2_window

0x310f,	// (0x0001989d) aid_size_cell_blid

0x3117,	// (0x000198a5) bg_popup_window_pane_cp07

0x313a,	// (0x000198c8) grid_popup_blid_pane

0x3144,	// (0x000198d2) heading_pane_cp05_ParamLimits

0x3144,	// (0x000198d2) heading_pane_cp05

0x320e,	// (0x0001999c) cell_popup_blid_pane_ParamLimits

0x320e,	// (0x0001999c) cell_popup_blid_pane

0x3238,	// (0x000199c6) cell_popup_blid_pane_g1

0x3240,	// (0x000199ce) cell_popup_blid_pane_t1

0xb53f,	// (0x00021ccd) mup2_indicator_pane_ParamLimits

0xb53f,	// (0x00021ccd) mup2_indicator_pane

0x1996,	// (0x00018124) mup2_visualizer_osc_pane

0x2f77,	// (0x00019705) mup2_visualizer_spec_pane_ParamLimits

0x2f77,	// (0x00019705) mup2_visualizer_spec_pane

0xb6c7,	// (0x00021e55) mup2_spec_half_pane

0xb6d0,	// (0x00021e5e) mup2_spec_half_pane_cp

0xb6da,	// (0x00021e68) mup2_spec_bar_pane_ParamLimits

0xb6da,	// (0x00021e68) mup2_spec_bar_pane

0x2eb4,	// (0x00019642) mup2_spec_bar_pane_g1

0x2ebe,	// (0x0001964c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00025dc7) mup2_spec_bar_pane_g

0xb6f9,	// (0x00021e87) mup2_osc_middle_pane

0x2ed0,	// (0x0001965e) mup2_visualizer_osc_pane_g1

0x0517,	// (0x00016ca5) popup_number_entry_window_t1_ParamLimits

0x052a,	// (0x00016cb8) popup_number_entry_window_t2_ParamLimits

0x053c,	// (0x00016cca) popup_number_entry_window_t3_ParamLimits

0x878d,	// (0x0001ef1b) popup_number_entry_window_t5_ParamLimits

0x878d,	// (0x0001ef1b) popup_number_entry_window_t5

0xf0fb,	// (0x00025889) popup_number_entry_window_t_ParamLimits

0x054e,	// (0x00016cdc) text_title_cp2_ParamLimits

0x7477,	// (0x0001dc05) aid_hotspot_pointer_text2_pane

0x74cd,	// (0x0001dc5b) main_viewer_pane_g9_ParamLimits

0x74cd,	// (0x0001dc5b) main_viewer_pane_g9

0x12df,	// (0x00017a6d) cale_month_pane_t1_ParamLimits

0x1374,	// (0x00017b02) bg_cale_pane_ParamLimits

0x138c,	// (0x00017b1a) list_cale_pane_ParamLimits

0x0e16,	// (0x000175a4) listscroll_cale_day_pane_t1

0x139d,	// (0x00017b2b) scroll_pane_cp09_ParamLimits

0xa645,	// (0x00020dd3) main_mup_eq_pane_t1_ParamLimits

0xa645,	// (0x00020dd3) main_mup_eq_pane_t1

0xa661,	// (0x00020def) main_mup_eq_pane_t2_ParamLimits

0xa661,	// (0x00020def) main_mup_eq_pane_t2

0xa67d,	// (0x00020e0b) main_mup_eq_pane_t3_ParamLimits

0xa67d,	// (0x00020e0b) main_mup_eq_pane_t3

0xa697,	// (0x00020e25) main_mup_eq_pane_t4_ParamLimits

0xa697,	// (0x00020e25) main_mup_eq_pane_t4

0xa6b1,	// (0x00020e3f) main_mup_eq_pane_t5_ParamLimits

0xa6b1,	// (0x00020e3f) main_mup_eq_pane_t5

0xa6cb,	// (0x00020e59) main_mup_eq_pane_t6_ParamLimits

0xa6cb,	// (0x00020e59) main_mup_eq_pane_t6

0xa6e1,	// (0x00020e6f) main_mup_eq_pane_t7_ParamLimits

0xa6e1,	// (0x00020e6f) main_mup_eq_pane_t7

0xa6f7,	// (0x00020e85) main_mup_eq_pane_t8_ParamLimits

0xa6f7,	// (0x00020e85) main_mup_eq_pane_t8

0xa70d,	// (0x00020e9b) main_mup_eq_pane_t9_ParamLimits

0xa70d,	// (0x00020e9b) main_mup_eq_pane_t9

0xa729,	// (0x00020eb7) main_mup_eq_pane_t10_ParamLimits

0xa729,	// (0x00020eb7) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00025c16) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00025c16) main_mup_eq_pane_t

0xa7ee,	// (0x00020f7c) mup_equalizer_pane_cp5_ParamLimits

0xa806,	// (0x00020f94) mup_equalizer_pane_cp6_ParamLimits

0xa81e,	// (0x00020fac) mup_equalizer_pane_cp7_ParamLimits

0x0478,	// (0x00016c06) main_gallery_pane

0x2ed9,	// (0x00019667) smil2_volume_pane

0x2ef4,	// (0x00019682) smil_status_volume_pane_g1_ParamLimits

0x2ee1,	// (0x0001966f) smil_status_volume_pane_g2_ParamLimits

0x74d9,	// (0x0001dc67) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00025dcc) smil_status_volume_pane_g_ParamLimits

0x3117,	// (0x000198a5) bg_popup_window_pane_cp07_ParamLimits

0x3125,	// (0x000198b3) blid_firmament_pane

0xb702,	// (0x00021e90) aid_size_cell_gallery_ParamLimits

0xb702,	// (0x00021e90) aid_size_cell_gallery

0xb710,	// (0x00021e9e) grid_gallery_pane_ParamLimits

0xb710,	// (0x00021e9e) grid_gallery_pane

0xb720,	// (0x00021eae) cell_gallery_pane_ParamLimits

0xb720,	// (0x00021eae) cell_gallery_pane

0x324e,	// (0x000199dc) bg_cell_gallery_focus_pane_ParamLimits

0x324e,	// (0x000199dc) bg_cell_gallery_focus_pane

0x3260,	// (0x000199ee) cell_gallery_pane_g1_ParamLimits

0x3260,	// (0x000199ee) cell_gallery_pane_g1

0xb76e,	// (0x00021efc) cell_gallery_pane_g2_ParamLimits

0xb76e,	// (0x00021efc) cell_gallery_pane_g2

0xb77b,	// (0x00021f09) cell_gallery_pane_g3_ParamLimits

0xb77b,	// (0x00021f09) cell_gallery_pane_g3

0x326c,	// (0x000199fa) cell_gallery_pane_g4_ParamLimits

0x326c,	// (0x000199fa) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00025e7a) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00025e7a) cell_gallery_pane_g

0x3278,	// (0x00019a06) bg_cell_gallery_focus_pane_g1

0x3280,	// (0x00019a0e) bg_cell_gallery_focus_pane_g2

0x3288,	// (0x00019a16) bg_cell_gallery_focus_pane_g3

0x3290,	// (0x00019a1e) bg_cell_gallery_focus_pane_g4

0x3298,	// (0x00019a26) bg_cell_gallery_focus_pane_g5

0x32a0,	// (0x00019a2e) bg_cell_gallery_focus_pane_g6

0x32a8,	// (0x00019a36) bg_cell_gallery_focus_pane_g7

0x32b0,	// (0x00019a3e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00025e83) bg_cell_gallery_focus_pane_g

0x32b8,	// (0x00019a46) aid_firma_cardinal

0x32cc,	// (0x00019a5a) blid_firmament_pane_t1

0x32e3,	// (0x00019a71) blid_firmament_pane_t2

0x32fa,	// (0x00019a88) blid_firmament_pane_t3

0x3311,	// (0x00019a9f) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00025e94) blid_firmament_pane_t

0x3328,	// (0x00019ab6) blid_sat_info_pane

0x3338,	// (0x00019ac6) blid_sat_info_pane_g1

0x3338,	// (0x00019ac6) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00025e9d) blid_sat_info_pane_g

0x3342,	// (0x00019ad0) blid_sat_info_pane_t1

0x3350,	// (0x00019ade) smil2_volume_content_pane

0x3359,	// (0x00019ae7) smil2_volume_pane_g1

0x3361,	// (0x00019aef) smil2_volume_content_pane_g1

0x336a,	// (0x00019af8) smil2_volume_content_pane_g2

0x3373,	// (0x00019b01) smil2_volume_content_pane_g3

0x337c,	// (0x00019b0a) smil2_volume_content_pane_g4

0x3385,	// (0x00019b13) smil2_volume_content_pane_g5

0x338e,	// (0x00019b1c) smil2_volume_content_pane_g6

0x3397,	// (0x00019b25) smil2_volume_content_pane_g7

0x33a0,	// (0x00019b2e) smil2_volume_content_pane_g8

0x33a9,	// (0x00019b37) smil2_volume_content_pane_g9

0x33b2,	// (0x00019b40) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00025ea2) smil2_volume_content_pane_g

0x8cf7,	// (0x0001f485) cale_week_day_heading_pane_t1_ParamLimits

0x8d24,	// (0x0001f4b2) cale_week_day_heading_pane_t2_ParamLimits

0x8d51,	// (0x0001f4df) cale_week_day_heading_pane_t3_ParamLimits

0x8d7e,	// (0x0001f50c) cale_week_day_heading_pane_t4_ParamLimits

0x8dab,	// (0x0001f539) cale_week_day_heading_pane_t5_ParamLimits

0x8dd8,	// (0x0001f566) cale_week_day_heading_pane_t6_ParamLimits

0x8e05,	// (0x0001f593) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0002598e) cale_week_day_heading_pane_t_ParamLimits

0x0e28,	// (0x000175b6) bg_cale_side_pane_ParamLimits

0x71c0,	// (0x0001d94e) cale_week_time_pane_t1_ParamLimits

0x71ec,	// (0x0001d97a) cale_week_time_pane_t2_ParamLimits

0x7218,	// (0x0001d9a6) cale_week_time_pane_t3_ParamLimits

0x7244,	// (0x0001d9d2) cale_week_time_pane_t4_ParamLimits

0x7270,	// (0x0001d9fe) cale_week_time_pane_t5_ParamLimits

0x729c,	// (0x0001da2a) cale_week_time_pane_t6_ParamLimits

0x72c8,	// (0x0001da56) cale_week_time_pane_t7_ParamLimits

0x72f4,	// (0x0001da82) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0002599d) cale_week_time_pane_t_ParamLimits

0x8e32,	// (0x0001f5c0) cell_cale_week_pane_g2_ParamLimits

0x0e28,	// (0x000175b6) bg_cale_side_pane_cp01_ParamLimits

0x9c67,	// (0x000203f5) cale_month_week_pane_t1_ParamLimits

0x9c92,	// (0x00020420) cale_month_week_pane_t2_ParamLimits

0x9cbd,	// (0x0002044b) cale_month_week_pane_t3_ParamLimits

0x9ce8,	// (0x00020476) cale_month_week_pane_t4_ParamLimits

0x9d13,	// (0x000204a1) cale_month_week_pane_t5_ParamLimits

0x9d3e,	// (0x000204cc) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00025a76) cale_month_week_pane_t_ParamLimits

0x739c,	// (0x0001db2a) cell_cale_month_pane_g1_ParamLimits

0x0478,	// (0x00016c06) main_cale_event_viewer_pane

0x0478,	// (0x00016c06) listscroll_cale_event_viewer_pane

0x33bb,	// (0x00019b49) list_cale_ev_pane

0x33c3,	// (0x00019b51) scroll_pane_cp023

0xb788,	// (0x00021f16) field_cale_ev_pane_ParamLimits

0xb788,	// (0x00021f16) field_cale_ev_pane

0x33cf,	// (0x00019b5d) field_cale_ev_content_pane_ParamLimits

0x33cf,	// (0x00019b5d) field_cale_ev_content_pane

0x33db,	// (0x00019b69) field_cale_ev_pane_g1_ParamLimits

0x33db,	// (0x00019b69) field_cale_ev_pane_g1

0x33e7,	// (0x00019b75) field_cale_ev_pane_g2_ParamLimits

0x33e7,	// (0x00019b75) field_cale_ev_pane_g2

0x33ff,	// (0x00019b8d) field_cale_ev_pane_g3_ParamLimits

0x33ff,	// (0x00019b8d) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00025eb7) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00025eb7) field_cale_ev_pane_g

0x3417,	// (0x00019ba5) field_cale_ev_pane_t1_ParamLimits

0x3417,	// (0x00019ba5) field_cale_ev_pane_t1

0xb7ac,	// (0x00021f3a) field_cale_ev_content_pane_t1_ParamLimits

0xb7ac,	// (0x00021f3a) field_cale_ev_content_pane_t1

0x1b21,	// (0x000182af) bg_button_pane_cp01

0x0c52,	// (0x000173e0) listscroll_cale_week_pane_ParamLimits

0x8b17,	// (0x0001f2a5) popup_toolbar_window_cp01

0x0e16,	// (0x000175a4) listscroll_cale_week_pane_t1_ParamLimits

0x0c52,	// (0x000173e0) listscroll_cale_day_pane_ParamLimits

0x8b17,	// (0x0001f2a5) popup_toolbar_window_cp02

0x0e16,	// (0x000175a4) listscroll_cale_day_pane_t1_ParamLimits

0x0c52,	// (0x000173e0) main_cale_month_pane_ParamLimits

0xb1dd,	// (0x0002196b) popup_toolbar_window_cp03_ParamLimits

0xb1dd,	// (0x0002196b) popup_toolbar_window_cp03

0xab36,	// (0x000212c4) main_image_pane_g2_ParamLimits

0xab36,	// (0x000212c4) main_image_pane_g2

0xab42,	// (0x000212d0) main_image_pane_g3_ParamLimits

0xab42,	// (0x000212d0) main_image_pane_g3

0x0002,

0xf51a,	// (0x00025ca8) main_image_pane_g_ParamLimits

0xf51a,	// (0x00025ca8) main_image_pane_g

0x1c7d,	// (0x0001840b) main_image_pane_t1_ParamLimits

0xab4e,	// (0x000212dc) main_image_pane_t2_ParamLimits

0xab4e,	// (0x000212dc) main_image_pane_t2

0xab60,	// (0x000212ee) main_image_pane_t3_ParamLimits

0xab60,	// (0x000212ee) main_image_pane_t3

0xab72,	// (0x00021300) main_image_pane_t4_ParamLimits

0xab72,	// (0x00021300) main_image_pane_t4

0x0003,

0xf521,	// (0x00025caf) main_image_pane_t_ParamLimits

0xf521,	// (0x00025caf) main_image_pane_t

0xab84,	// (0x00021312) popup_image_details_window_cp01

0xab8e,	// (0x0002131c) popup_toobar_trans_pane_cp01_ParamLimits

0xab8e,	// (0x0002131c) popup_toobar_trans_pane_cp01

0xb14e,	// (0x000218dc) popup_image_details_window_ParamLimits

0xb14e,	// (0x000218dc) popup_image_details_window

0x2e25,	// (0x000195b3) popup_image_focus_window

0x74fb,	// (0x0001dc89) camera2_autofocus_pane_ParamLimits

0x74fb,	// (0x0001dc89) camera2_autofocus_pane

0x0478,	// (0x00016c06) bg_popup_sub_pane_cp06

0x342e,	// (0x00019bbc) popup_image_focus_window_g1

0x3436,	// (0x00019bc4) popup_image_focus_window_g2

0x343e,	// (0x00019bcc) popup_image_focus_window_g3

0x3446,	// (0x00019bd4) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00025ebe) popup_image_focus_window_g

0x344e,	// (0x00019bdc) popup_image_focus_window_t1

0x345c,	// (0x00019bea) popup_image_focus_window_t2

0x346c,	// (0x00019bfa) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00025ec7) popup_image_focus_window_t

0x347a,	// (0x00019c08) camera2_autofocus_pane_g1

0x04e9,	// (0x00016c77) bg_tb_trans_pane_cp01

0x3488,	// (0x00019c16) popup_image_details_window_g1

0x349b,	// (0x00019c29) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00025ed9) popup_image_details_window_g

0x34c4,	// (0x00019c52) popup_image_details_window_t1

0x34d6,	// (0x00019c64) popup_image_details_window_t2

0x34ef,	// (0x00019c7d) popup_image_details_window_t3

0x3503,	// (0x00019c91) popup_image_details_window_t4

0x351e,	// (0x00019cac) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00025ee0) popup_image_details_window_t

0x0c24,	// (0x000173b2) bg_calc_paper_pane_ParamLimits

0x7087,	// (0x0001d815) grid_highlight_pane_cp013

0x7091,	// (0x0001d81f) list_calc_pane_ParamLimits

0x70a3,	// (0x0001d831) scroll_pane_cp024

0x0c52,	// (0x000173e0) bg_calc_display_pane_ParamLimits

0x70ab,	// (0x0001d839) calc_display_pane_t1_ParamLimits

0x70c0,	// (0x0001d84e) calc_display_pane_t2_ParamLimits

0x70d5,	// (0x0001d863) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00025910) calc_display_pane_t_ParamLimits

0x7140,	// (0x0001d8ce) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0002592d) cell_calc_pane_g

0x7149,	// (0x0001d8d7) cell_calc_pane_t1

0x0cd5,	// (0x00017463) grid_highlight_pane_cp02_ParamLimits

0x0ceb,	// (0x00017479) toolbar_button_pane_cp01_ParamLimits

0x0ceb,	// (0x00017479) toolbar_button_pane_cp01

0x1cc2,	// (0x00018450) temp_image_control_pane_ParamLimits

0x1cc2,	// (0x00018450) temp_image_control_pane

0x04e9,	// (0x00016c77) main_mp3_pane

0x3538,	// (0x00019cc6) temp_image_control_pane_g1_ParamLimits

0x3538,	// (0x00019cc6) temp_image_control_pane_g1

0x3546,	// (0x00019cd4) temp_image_control_pane_g2_ParamLimits

0x3546,	// (0x00019cd4) temp_image_control_pane_g2

0x3558,	// (0x00019ce6) temp_image_control_pane_g3_ParamLimits

0x3558,	// (0x00019ce6) temp_image_control_pane_g3

0xb7fa,	// (0x00021f88) temp_image_control_pane_g4_ParamLimits

0xb7fa,	// (0x00021f88) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00025eeb) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00025eeb) temp_image_control_pane_g

0x3538,	// (0x00019cc6) main_mp3_pane_g1

0xb80b,	// (0x00021f99) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00025ef4) main_mp3_pane_g

0x359b,	// (0x00019d29) main_mp3_pane_t1

0x0ef7,	// (0x00017685) main_camera_pane_g8_ParamLimits

0x0ef7,	// (0x00017685) main_camera_pane_g8

0x9062,	// (0x0001f7f0) main_video_pane_g7_ParamLimits

0x9062,	// (0x0001f7f0) main_video_pane_g7

0x763e,	// (0x0001ddcc) main_camera2_pane_t7_ParamLimits

0x763e,	// (0x0001ddcc) main_camera2_pane_t7

0x1107,	// (0x00017895) scroll_pane_cp025_ParamLimits

0x1107,	// (0x00017895) scroll_pane_cp025

0x111b,	// (0x000178a9) scroll_pane_cp026_ParamLimits

0x111b,	// (0x000178a9) scroll_pane_cp026

0x112a,	// (0x000178b8) wml_content_pane_ParamLimits

0x0478,	// (0x00016c06) main_touch_calib_pane

0xb8af,	// (0x0002203d) main_touch_calib_pane_g1

0xb8bb,	// (0x00022049) main_touch_calib_pane_g2

0xb8c7,	// (0x00022055) main_touch_calib_pane_g3

0xb8d3,	// (0x00022061) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00025f12) main_touch_calib_pane_g

0xb8df,	// (0x0002206d) main_touch_calib_pane_t1

0xb8f6,	// (0x00022084) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00025f1b) main_touch_calib_pane_t

0x18d7,	// (0x00018065) mup_progress_pane_cp02

0x18f6,	// (0x00018084) navi_pane_g1

0x1958,	// (0x000180e6) navi_pane_mp_t3

0x04e9,	// (0x00016c77) main_mp3_pane_ParamLimits

0xb21f,	// (0x000219ad) navi_pane_ParamLimits

0x3538,	// (0x00019cc6) main_mp3_pane_g1_ParamLimits

0xb80b,	// (0x00021f99) main_mp3_pane_g2_ParamLimits

0xb817,	// (0x00021fa5) main_mp3_pane_g3_ParamLimits

0xb817,	// (0x00021fa5) main_mp3_pane_g3

0xb823,	// (0x00021fb1) main_mp3_pane_g4_ParamLimits

0xb823,	// (0x00021fb1) main_mp3_pane_g4

0x3568,	// (0x00019cf6) main_mp3_pane_g5_ParamLimits

0x3568,	// (0x00019cf6) main_mp3_pane_g5

0x3576,	// (0x00019d04) main_mp3_pane_g6_ParamLimits

0x3576,	// (0x00019d04) main_mp3_pane_g6

0x3583,	// (0x00019d11) main_mp3_pane_g7_ParamLimits

0x3583,	// (0x00019d11) main_mp3_pane_g7

0x358f,	// (0x00019d1d) main_mp3_pane_g8_ParamLimits

0x358f,	// (0x00019d1d) main_mp3_pane_g8

0xf766,	// (0x00025ef4) main_mp3_pane_g_ParamLimits

0xb82f,	// (0x00021fbd) main_mp3_pane_t2

0xb83f,	// (0x00021fcd) main_mp3_pane_t3

0x35a9,	// (0x00019d37) main_mp3_pane_t4

0x35b7,	// (0x00019d45) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00025f05) main_mp3_pane_t

0x35c5,	// (0x00019d53) mup_progress_pane_cp01

0x0496,	// (0x00016c24) aid_zoom_text_secondary2

0x33bb,	// (0x00019b49) list_cale_ev2_pane

0x33c3,	// (0x00019b51) scroll_pane_cp023_ParamLimits

0xb94d,	// (0x000220db) field_cale_ev2_pane_ParamLimits

0xb94d,	// (0x000220db) field_cale_ev2_pane

0x35cd,	// (0x00019d5b) field_cale_ev2_pane_g1_ParamLimits

0x35cd,	// (0x00019d5b) field_cale_ev2_pane_g1

0x35d9,	// (0x00019d67) field_cale_ev2_pane_g2_ParamLimits

0x35d9,	// (0x00019d67) field_cale_ev2_pane_g2

0x35f1,	// (0x00019d7f) field_cale_ev2_pane_g3_ParamLimits

0x35f1,	// (0x00019d7f) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00025f26) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00025f26) field_cale_ev2_pane_g

0x3615,	// (0x00019da3) field_cale_ev2_pane_t1_ParamLimits

0x3615,	// (0x00019da3) field_cale_ev2_pane_t1

0x362c,	// (0x00019dba) field_cale_ev2_pane_t2_ParamLimits

0x362c,	// (0x00019dba) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00025f2f) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00025f2f) field_cale_ev2_pane_t

0xaa12,	// (0x000211a0) main_postcard_pane_g5_ParamLimits

0xaa12,	// (0x000211a0) main_postcard_pane_g5

0xaa20,	// (0x000211ae) main_postcard_pane_g6_ParamLimits

0xaa20,	// (0x000211ae) main_postcard_pane_g6

0x8ea0,	// (0x0001f62e) camera2_autofocus_pane_cp_ParamLimits

0x8ea0,	// (0x0001f62e) camera2_autofocus_pane_cp

0x04e9,	// (0x00016c77) main_mup3_pane

0xb98b,	// (0x00022119) main_mup3_pane_g1_ParamLimits

0xb98b,	// (0x00022119) main_mup3_pane_g1

0xb9ac,	// (0x0002213a) main_mup3_pane_g2_ParamLimits

0xb9ac,	// (0x0002213a) main_mup3_pane_g2

0xba28,	// (0x000221b6) main_mup3_pane_g3_ParamLimits

0xba28,	// (0x000221b6) main_mup3_pane_g3

0xba69,	// (0x000221f7) main_mup3_pane_g4_ParamLimits

0xba69,	// (0x000221f7) main_mup3_pane_g4

0xbaaa,	// (0x00022238) main_mup3_pane_g5_ParamLimits

0xbaaa,	// (0x00022238) main_mup3_pane_g5

0xbaeb,	// (0x00022279) main_mup3_pane_g6_ParamLimits

0xbaeb,	// (0x00022279) main_mup3_pane_g6

0x3641,	// (0x00019dcf) main_mup3_pane_g7_ParamLimits

0x3641,	// (0x00019dcf) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00025f3f) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00025f3f) main_mup3_pane_g

0xbb5d,	// (0x000222eb) main_mup3_pane_t1_ParamLimits

0xbb5d,	// (0x000222eb) main_mup3_pane_t1

0xbbd0,	// (0x0002235e) main_mup3_pane_t2_ParamLimits

0xbbd0,	// (0x0002235e) main_mup3_pane_t2

0xbc9d,	// (0x0002242b) main_mup3_pane_t4_ParamLimits

0xbc9d,	// (0x0002242b) main_mup3_pane_t4

0xbcf1,	// (0x0002247f) main_mup3_pane_t5_ParamLimits

0xbcf1,	// (0x0002247f) main_mup3_pane_t5

0xbd9d,	// (0x0002252b) main_mup3_pane_t6_ParamLimits

0xbd9d,	// (0x0002252b) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00025f50) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00025f50) main_mup3_pane_t

0xbe45,	// (0x000225d3) mup3_progress_pane_ParamLimits

0xbe45,	// (0x000225d3) mup3_progress_pane

0xbeb0,	// (0x0002263e) popup_mup3_control_window_ParamLimits

0xbeb0,	// (0x0002263e) popup_mup3_control_window

0x364f,	// (0x00019ddd) popup_mup3_text_window

0xbecd,	// (0x0002265b) mup3_progress_pane_t1

0xbee4,	// (0x00022672) mup3_progress_pane_t2

0x3657,	// (0x00019de5) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00025f5d) mup3_progress_pane_t

0x366e,	// (0x00019dfc) mup_progress_pane_cp03

0x0478,	// (0x00016c06) bg_tb_trans_pane_cp04

0xbefb,	// (0x00022689) mup3_volume_pane

0xbf03,	// (0x00022691) popup_mup3_control_window_g1

0x3a05,	// (0x0001a193) mup3_volume_pane_g1

0x3a0e,	// (0x0001a19c) mup3_volume_pane_g2

0x3a17,	// (0x0001a1a5) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00025f64) mup3_volume_pane_g

0x0478,	// (0x00016c06) bg_tb_trans_pane_cp03

0x367e,	// (0x00019e0c) popup_mup3_text_window_g1

0x3686,	// (0x00019e14) popup_mup3_text_window_t1

0x0cac,	// (0x0001743a) list_calc_item_pane_g1_ParamLimits

0x3041,	// (0x000197cf) mup_volume_pane_cp_g1

0xb90d,	// (0x0002209b) main_touch_calib_pane_t3

0xb921,	// (0x000220af) main_touch_calib_pane_t4

0xb937,	// (0x000220c5) main_touch_calib_pane_t5

0x0482,	// (0x00016c10) aid_cell_size_toolbar2

0x048a,	// (0x00016c18) aid_popup3_width_pane

0x0496,	// (0x00016c24) aid_zoom_text_msg_primary

0x7386,	// (0x0001db14) vorec_t7

0x0c70,	// (0x000173fe) bg_calc_paper_pane_g1_ParamLimits

0x0c88,	// (0x00017416) bg_calc_paper_pane_g2_ParamLimits

0x0c7c,	// (0x0001740a) bg_calc_paper_pane_g3_ParamLimits

0x0ca0,	// (0x0001742e) bg_calc_paper_pane_g4_ParamLimits

0x0c94,	// (0x00017422) bg_calc_paper_pane_g5_ParamLimits

0x89ff,	// (0x0001f18d) bg_calc_paper_pane_g6_ParamLimits

0x8a10,	// (0x0001f19e) bg_calc_paper_pane_g7_ParamLimits

0x8a21,	// (0x0001f1af) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00025917) bg_calc_paper_pane_g_ParamLimits

0x8a32,	// (0x0001f1c0) calc_bg_paper_pane_g9_ParamLimits

0x8f91,	// (0x0001f71f) image_qvga_pane_ParamLimits

0x8f91,	// (0x0001f71f) image_qvga_pane

0x0b65,	// (0x000172f3) bg_popup_sub_pane_cp04_ParamLimits

0x1bf9,	// (0x00018387) popup_mup_playback_window_g1_ParamLimits

0x1c05,	// (0x00018393) popup_mup_playback_window_t1_ParamLimits

0x1c1a,	// (0x000183a8) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00025ca3) popup_mup_playback_window_t_ParamLimits

0xb43d,	// (0x00021bcb) main_mup2_pane_g3_ParamLimits

0xb43d,	// (0x00021bcb) main_mup2_pane_g3

0x922f,	// (0x0001f9bd) popup_toolbar_window_cp04

0x2015,	// (0x000187a3) popup_call2_audio_second_window_g3_ParamLimits

0x2015,	// (0x000187a3) popup_call2_audio_second_window_g3

0x241f,	// (0x00018bad) popup_call2_audio_first_window_g4_ParamLimits

0x241f,	// (0x00018bad) popup_call2_audio_first_window_g4

0x2a9e,	// (0x0001922c) popup_call2_audio_in_window_g4_ParamLimits

0x2a9e,	// (0x0001922c) popup_call2_audio_in_window_g4

0xab29,	// (0x000212b7) aid_area_sk_bg_cut_ParamLimits

0xab29,	// (0x000212b7) aid_area_sk_bg_cut

0x1c2f,	// (0x000183bd) aid_area_sk_bg_cut_2_ParamLimits

0x1c2f,	// (0x000183bd) aid_area_sk_bg_cut_2

0xb75e,	// (0x00021eec) aid_placing_details_win

0xb766,	// (0x00021ef4) aid_placing_details_win_2

0x347a,	// (0x00019c08) camera2_autofocus_pane_g1_ParamLimits

0x86e4,	// (0x0001ee72) popup_fixed_preview_cale_window_ParamLimits

0x86e4,	// (0x0001ee72) popup_fixed_preview_cale_window

0x19c2,	// (0x00018150) navi_slider_pane_g3

0x19b9,	// (0x00018147) navi_slider_pane_g4

0x19b0,	// (0x0001813e) navi_slider_pane_g5

0x19c2,	// (0x00018150) navi_slider_pane_g6

0x745e,	// (0x0001dbec) navi_slider_pane_g7

0x1aee,	// (0x0001827c) mup_scale_pane_g3

0x1af7,	// (0x00018285) mup_scale_pane_g4

0x1b00,	// (0x0001828e) mup_scale_pane_g5

0xa836,	// (0x00020fc4) mup_scale_pane_g6

0xa83f,	// (0x00020fcd) mup_scale_pane_g7

0x19c2,	// (0x00018150) cams2_slider_pane_g3

0x30f6,	// (0x00019884) cams2_slider_pane_g4

0x77b0,	// (0x0001df3e) cams2_slider_pane_g5

0x19c2,	// (0x00018150) cams2_slider_pane_g6

0x77b8,	// (0x0001df46) cams2_slider_pane_g7

0x3338,	// (0x00019ac6) camera2_autofocus_pane_cp_g1

0x3694,	// (0x00019e22) bg_popup_preview_window_pane_cp02_ParamLimits

0x3694,	// (0x00019e22) bg_popup_preview_window_pane_cp02

0x36a0,	// (0x00019e2e) list_fp_cale_pane_ParamLimits

0x36a0,	// (0x00019e2e) list_fp_cale_pane

0x36ac,	// (0x00019e3a) popup_fixed_preview_cale_window_t1_ParamLimits

0x36ac,	// (0x00019e3a) popup_fixed_preview_cale_window_t1

0xbf0c,	// (0x0002269a) popup_fixed_preview_cale_window_t2_ParamLimits

0xbf0c,	// (0x0002269a) popup_fixed_preview_cale_window_t2

0xbf21,	// (0x000226af) popup_fixed_preview_cale_window_t3_ParamLimits

0xbf21,	// (0x000226af) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00025f6b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00025f6b) popup_fixed_preview_cale_window_t

0xbf36,	// (0x000226c4) list_single_fp_cale_pane_ParamLimits

0xbf36,	// (0x000226c4) list_single_fp_cale_pane

0x36ca,	// (0x00019e58) list_single_fp_cale_pane_g1_ParamLimits

0x36ca,	// (0x00019e58) list_single_fp_cale_pane_g1

0x36d6,	// (0x00019e64) list_single_fp_cale_pane_g2_ParamLimits

0x36d6,	// (0x00019e64) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00025f72) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00025f72) list_single_fp_cale_pane_g

0x36ef,	// (0x00019e7d) list_single_fp_cale_pane_t1_ParamLimits

0x36ef,	// (0x00019e7d) list_single_fp_cale_pane_t1

0x3701,	// (0x00019e8f) list_single_fp_cale_pane_t2_ParamLimits

0x3701,	// (0x00019e8f) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00025f79) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00025f79) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0478,	// (0x00016c06) main_dialer_pane

0xbf46,	// (0x000226d4) aid_cell_size_keypad

0xbf50,	// (0x000226de) dialer_ne_pane

0xbf5a,	// (0x000226e8) grid_dialer_command_1_pane

0xbf62,	// (0x000226f0) grid_dialer_command_2_pane

0xbf6a,	// (0x000226f8) grid_dialer_keypad_pane

0xbf7e,	// (0x0002270c) bg_popup_call_pane_cp06_ParamLimits

0xbf7e,	// (0x0002270c) bg_popup_call_pane_cp06

0xbf8a,	// (0x00022718) dialer_ne_clear_pane_ParamLimits

0xbf8a,	// (0x00022718) dialer_ne_clear_pane

0x3734,	// (0x00019ec2) dialer_ne_pane_g1

0x373c,	// (0x00019eca) dialer_ne_pane_t1_ParamLimits

0x373c,	// (0x00019eca) dialer_ne_pane_t1

0xbf96,	// (0x00022724) dialer_ne_pane_t2_ParamLimits

0xbf96,	// (0x00022724) dialer_ne_pane_t2

0xbfb3,	// (0x00022741) dialer_ne_pane_t3_ParamLimits

0xbfb3,	// (0x00022741) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00025f7e) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00025f7e) dialer_ne_pane_t

0xbfd7,	// (0x00022765) dialer_ne_pane_t3_copy1_ParamLimits

0xbfd7,	// (0x00022765) dialer_ne_pane_t3_copy1

0xbffb,	// (0x00022789) cell_dialer_keypad_pane_ParamLimits

0xbffb,	// (0x00022789) cell_dialer_keypad_pane

0xc012,	// (0x000227a0) cell_dialer_command_1_pane_ParamLimits

0xc012,	// (0x000227a0) cell_dialer_command_1_pane

0xc028,	// (0x000227b6) cell_dialer_command_2_pane_ParamLimits

0xc028,	// (0x000227b6) cell_dialer_command_2_pane

0x374e,	// (0x00019edc) bg_button_pane_cp02_ParamLimits

0x374e,	// (0x00019edc) bg_button_pane_cp02

0xc037,	// (0x000227c5) cell_dialer_keypad_pane_g1_ParamLimits

0xc037,	// (0x000227c5) cell_dialer_keypad_pane_g1

0x374e,	// (0x00019edc) bg_button_pane_cp03_ParamLimits

0x374e,	// (0x00019edc) bg_button_pane_cp03

0xc04b,	// (0x000227d9) cell_dialer_command_1_pane_g1_ParamLimits

0xc04b,	// (0x000227d9) cell_dialer_command_1_pane_g1

0x375a,	// (0x00019ee8) bg_button_pane_cp04

0xc05f,	// (0x000227ed) cell_dialer_command_2_pane_g1

0x1996,	// (0x00018124) bg_button_pane_cp06

0x3762,	// (0x00019ef0) dialer_ne_clear_pane_g1

0xa310,	// (0x00020a9e) navi_pane_g2

0xa33e,	// (0x00020acc) navi_pane_g3

0x0002,

0xf418,	// (0x00025ba6) navi_pane_g

0xa369,	// (0x00020af7) navi_pane_mv_g2

0xa390,	// (0x00020b1e) navi_pane_mv_g5

0xa398,	// (0x00020b26) navi_pane_mv_t1

0x0c52,	// (0x000173e0) main_clock2_pane

0xc091,	// (0x0002281f) main_clock2_list_pane_ParamLimits

0xc091,	// (0x0002281f) main_clock2_list_pane

0xc0bb,	// (0x00022849) main_clock2_pane_t1_ParamLimits

0xc0bb,	// (0x00022849) main_clock2_pane_t1

0xc0e9,	// (0x00022877) main_clock2_pane_t2_ParamLimits

0xc0e9,	// (0x00022877) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00025f85) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00025f85) main_clock2_pane_t

0xc152,	// (0x000228e0) popup_clock_analogue_window_cp03_ParamLimits

0xc152,	// (0x000228e0) popup_clock_analogue_window_cp03

0xc172,	// (0x00022900) popup_clock_digital_window_cp02_ParamLimits

0xc172,	// (0x00022900) popup_clock_digital_window_cp02

0xc1e3,	// (0x00022971) main_clock2_list_single_pane_ParamLimits

0xc1e3,	// (0x00022971) main_clock2_list_single_pane

0x1996,	// (0x00018124) list_highlight_pane_cp05

0x376a,	// (0x00019ef8) main_clock2_list_single_pane_t1

0x922f,	// (0x0001f9bd) popup_toolbar_window_cp04_ParamLimits

0xb7ca,	// (0x00021f58) camera2_autofocus_pane_g2_ParamLimits

0xb7ca,	// (0x00021f58) camera2_autofocus_pane_g2

0xb7d6,	// (0x00021f64) camera2_autofocus_pane_g3_ParamLimits

0xb7d6,	// (0x00021f64) camera2_autofocus_pane_g3

0xb7e2,	// (0x00021f70) camera2_autofocus_pane_g4_ParamLimits

0xb7e2,	// (0x00021f70) camera2_autofocus_pane_g4

0xb7ee,	// (0x00021f7c) camera2_autofocus_pane_g5_ParamLimits

0xb7ee,	// (0x00021f7c) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00025ece) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00025ece) camera2_autofocus_pane_g

0xb96b,	// (0x000220f9) camera2_autofocus_pane_cp_g2

0xb973,	// (0x00022101) camera2_autofocus_pane_cp_g3

0xb97b,	// (0x00022109) camera2_autofocus_pane_cp_g4

0xb983,	// (0x00022111) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00025f34) camera2_autofocus_pane_cp_g

0xbf76,	// (0x00022704) popup_dialer_spcha_window

0x0478,	// (0x00016c06) bg_popup_sub_pane_cp07

0x3778,	// (0x00019f06) list_spcha_pane

0x3780,	// (0x00019f0e) list_single_spcha_pane_ParamLimits

0x3780,	// (0x00019f0e) list_single_spcha_pane

0x0478,	// (0x00016c06) list_highlight_pane_cp06

0x3791,	// (0x00019f1f) list_single_spcha_pane_t1

0x2848,	// (0x00018fd6) popup_call2_audio_out_window_g4_ParamLimits

0x2848,	// (0x00018fd6) popup_call2_audio_out_window_g4

0x0478,	// (0x00016c06) main_imed2_pane

0x2e2f,	// (0x000195bd) popup_imed_adjust2_window

0xb15c,	// (0x000218ea) popup_imed_trans_window_ParamLimits

0xb15c,	// (0x000218ea) popup_imed_trans_window

0x3170,	// (0x000198fe) popup_blid_sat_info2_window_t1

0x317e,	// (0x0001990c) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00025e63) popup_blid_sat_info2_window_t

0xc215,	// (0x000229a3) aid_size_cell_colour_35

0xc22f,	// (0x000229bd) aid_size_cell_colour_112

0xc246,	// (0x000229d4) aid_size_cell_effect

0x04e9,	// (0x00016c77) bg_tb_trans_pane_cp02

0x14b7,	// (0x00017c45) heading_imed_pane

0xc260,	// (0x000229ee) listscroll_imed_pane

0x379f,	// (0x00019f2d) heading_imed_pane_g1

0x37a7,	// (0x00019f35) heading_imed_pane_t1

0x37b5,	// (0x00019f43) grid_imed_colour_35_pane_ParamLimits

0x37b5,	// (0x00019f43) grid_imed_colour_35_pane

0xc26c,	// (0x000229fa) grid_imed_effect_pane

0x37d1,	// (0x00019f5f) list_imed_aspect_pane

0xc27c,	// (0x00022a0a) scroll_pane_cp027_ParamLimits

0xc27c,	// (0x00022a0a) scroll_pane_cp027

0xc288,	// (0x00022a16) cell_imed_effect_pane_ParamLimits

0xc288,	// (0x00022a16) cell_imed_effect_pane

0x37d9,	// (0x00019f67) cell_imed_colour_pane_ParamLimits

0x37d9,	// (0x00019f67) cell_imed_colour_pane

0x3823,	// (0x00019fb1) cell_imed_colour_pane_g1_ParamLimits

0x3823,	// (0x00019fb1) cell_imed_colour_pane_g1

0x3834,	// (0x00019fc2) hgihlgiht_grid_pane_cp016_ParamLimits

0x3834,	// (0x00019fc2) hgihlgiht_grid_pane_cp016

0xc2a4,	// (0x00022a32) cell_imed_effect_pane_g1

0xc2ac,	// (0x00022a3a) grid_highlight_pane_cp017

0x3845,	// (0x00019fd3) list_imed_single_pane_ParamLimits

0x3845,	// (0x00019fd3) list_imed_single_pane

0x0478,	// (0x00016c06) list_highlight_pane_cp07

0x3859,	// (0x00019fe7) list_imed_aspect_pane_comp1_t1

0x2e03,	// (0x00019591) bg_tb_trans_pane_cp05

0x387b,	// (0x0001a009) popup_imed_adjust2_window_g1

0x38a2,	// (0x0001a030) popup_imed_adjust2_window_t1

0x38ba,	// (0x0001a048) slider_imed_adjust_pane

0x38ce,	// (0x0001a05c) slider_imed_adjust_pane_g1

0x38de,	// (0x0001a06c) slider_imed_adjust_pane_g2

0x38ee,	// (0x0001a07c) slider_imed_adjust_pane_g3

0x38ff,	// (0x0001a08d) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00025fa2) slider_imed_adjust_pane_g

0xc2b5,	// (0x00022a43) aid_size_cell_clipart2

0xc2c1,	// (0x00022a4f) grid_imed_clipart_pane

0x3910,	// (0x0001a09e) scroll_pane_cp031

0xc2cb,	// (0x00022a59) cell_imed_clipart_pane_ParamLimits

0xc2cb,	// (0x00022a59) cell_imed_clipart_pane

0xc2e9,	// (0x00022a77) cell_imed_clipart_pane_g1

0x0478,	// (0x00016c06) grid_highlight_pane_cp014

0xc09d,	// (0x0002282b) main_clock2_pane_g1_ParamLimits

0xc09d,	// (0x0002282b) main_clock2_pane_g1

0xc18e,	// (0x0002291c) aid_call2_pane_cp10

0xc1a0,	// (0x0002292e) aid_call_pane_cp10

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g1

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g2

0xc1b2,	// (0x00022940) popup_clock_analogue_window_cp10_g3

0xc1b2,	// (0x00022940) popup_clock_analogue_window_cp10_g4

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00025f90) popup_clock_analogue_window_cp10_g

0xc1c4,	// (0x00022952) popup_clock_analogue_window_cp10_t1

0x77c1,	// (0x0001df4f) clock_digital_number_pane_cp10_ParamLimits

0x77c1,	// (0x0001df4f) clock_digital_number_pane_cp10

0x77d9,	// (0x0001df67) clock_digital_number_pane_cp11_ParamLimits

0x77d9,	// (0x0001df67) clock_digital_number_pane_cp11

0x77f1,	// (0x0001df7f) clock_digital_number_pane_cp12_ParamLimits

0x77f1,	// (0x0001df7f) clock_digital_number_pane_cp12

0x7809,	// (0x0001df97) clock_digital_number_pane_cp13_ParamLimits

0x7809,	// (0x0001df97) clock_digital_number_pane_cp13

0x7821,	// (0x0001dfaf) clock_digital_separator_pane_cp10_ParamLimits

0x7821,	// (0x0001dfaf) clock_digital_separator_pane_cp10

0xc1f5,	// (0x00022983) popup_clock_digital_window_cp02_t1_ParamLimits

0xc1f5,	// (0x00022983) popup_clock_digital_window_cp02_t1

0x0b5d,	// (0x000172eb) clock_digital_number_pane_cp10_g1

0x0b5d,	// (0x000172eb) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00025fab) clock_digital_number_pane_cp10_g

0x0b5d,	// (0x000172eb) clock_digital_separator_pane_cp10_g1

0x0b5d,	// (0x000172eb) clock_digital_separator_pane_g2_cp10

0x1966,	// (0x000180f4) navi_pane_vded_g4

0x196f,	// (0x000180fd) navi_pane_vded_g5

0x1978,	// (0x00018106) navi_pane_vded_t1

0x0478,	// (0x00016c06) main_vded_pane

0xc2f2,	// (0x00022a80) main_vded_pane_g1

0xc2fe,	// (0x00022a8c) main_vded_pane_g2

0xc308,	// (0x00022a96) main_vded_pane_g3

0x0002,

0xf822,	// (0x00025fb0) main_vded_pane_g

0xc312,	// (0x00022aa0) main_vded_pane_t1

0xc320,	// (0x00022aae) main_vded_pane_t2

0x0001,

0xf829,	// (0x00025fb7) main_vded_pane_t

0xc32e,	// (0x00022abc) vded_slider_pane

0xc338,	// (0x00022ac6) vded_video_pane

0x3918,	// (0x0001a0a6) vded_video_pane_g1

0xc344,	// (0x00022ad2) vded_video_pane_g2

0x3338,	// (0x00019ac6) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00025fbc) vded_video_pane_g

0x3922,	// (0x0001a0b0) vded_slider_pane_g1

0x3041,	// (0x000197cf) vded_slider_pane_g2

0x392b,	// (0x0001a0b9) vded_slider_pane_g3

0x3934,	// (0x0001a0c2) vded_slider_pane_g4

0x393d,	// (0x0001a0cb) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00025fc3) vded_slider_pane_g

0xbea4,	// (0x00022632) mup3_rocker_pane_ParamLimits

0xbea4,	// (0x00022632) mup3_rocker_pane

0xc34d,	// (0x00022adb) mup3_control_keys_pane_g1

0xc355,	// (0x00022ae3) mup3_control_keys_pane_g2

0xc35d,	// (0x00022aeb) mup3_control_keys_pane_g3

0xc365,	// (0x00022af3) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00025fce) mup3_control_keys_pane_g

0x8702,	// (0x0001ee90) popup_toolbar2_fixed_window_cp01_ParamLimits

0x8702,	// (0x0001ee90) popup_toolbar2_fixed_window_cp01

0xbec0,	// (0x0002264e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbec0,	// (0x0002264e) popup_toolbar2_fixed_window_cp02

0x2187,	// (0x00018915) popup_call2_audio_second_window_t4_ParamLimits

0x2187,	// (0x00018915) popup_call2_audio_second_window_t4

0x26b5,	// (0x00018e43) popup_call2_audio_first_window_t6_ParamLimits

0x26b5,	// (0x00018e43) popup_call2_audio_first_window_t6

0x294b,	// (0x000190d9) popup_call2_audio_out_window_t6_ParamLimits

0x294b,	// (0x000190d9) popup_call2_audio_out_window_t6

0x0478,	// (0x00016c06) main_vitu_pane

0xc375,	// (0x00022b03) aid_size_cell_itu_ParamLimits

0xc375,	// (0x00022b03) aid_size_cell_itu

0x39f7,	// (0x0001a185) bg_popup_window_pane_cp08_ParamLimits

0x39f7,	// (0x0001a185) bg_popup_window_pane_cp08

0xc383,	// (0x00022b11) field_vitu_entry_pane_ParamLimits

0xc383,	// (0x00022b11) field_vitu_entry_pane

0xc392,	// (0x00022b20) grid_vitu_function_pane_ParamLimits

0xc392,	// (0x00022b20) grid_vitu_function_pane

0xc3a2,	// (0x00022b30) grid_vitu_itu_pane_ParamLimits

0xc3a2,	// (0x00022b30) grid_vitu_itu_pane

0xc3b2,	// (0x00022b40) cell_vitu_itu_pane_ParamLimits

0xc3b2,	// (0x00022b40) cell_vitu_itu_pane

0xc3c9,	// (0x00022b57) cell_vitu_function_pane_ParamLimits

0xc3c9,	// (0x00022b57) cell_vitu_function_pane

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp08_ParamLimits

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp08

0xc3dd,	// (0x00022b6b) field_vitu_entry_pane_t1_ParamLimits

0xc3dd,	// (0x00022b6b) field_vitu_entry_pane_t1

0x395e,	// (0x0001a0ec) field_vitu_entry_pane_t2_ParamLimits

0x395e,	// (0x0001a0ec) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00025fdc) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00025fdc) field_vitu_entry_pane_t

0x397b,	// (0x0001a109) bg_button_pane_cp05_ParamLimits

0x397b,	// (0x0001a109) bg_button_pane_cp05

0xc3f7,	// (0x00022b85) cell_vitu_itu_pane_g1

0xc40f,	// (0x00022b9d) cell_vitu_itu_pane_t1_ParamLimits

0xc40f,	// (0x00022b9d) cell_vitu_itu_pane_t1

0xc421,	// (0x00022baf) cell_vitu_itu_pane_t2_ParamLimits

0xc421,	// (0x00022baf) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00025fe1) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00025fe1) cell_vitu_itu_pane_t

0x3989,	// (0x0001a117) bg_button_pane_cp07

0xc456,	// (0x00022be4) cell_vitu_function_pane_g1

0x707f,	// (0x0001d80d) main_calc_pane_g1

0x8502,	// (0x0001ec90) aid_visual_content_pane

0x0478,	// (0x00016c06) main_vradio_pane

0xc45f,	// (0x00022bed) main_vradio_pane_g1_ParamLimits

0xc45f,	// (0x00022bed) main_vradio_pane_g1

0x3993,	// (0x0001a121) main_vradio_pane_g2_ParamLimits

0x3993,	// (0x0001a121) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00025fe8) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00025fe8) main_vradio_pane_g

0xc46d,	// (0x00022bfb) main_vradio_pane_t1_ParamLimits

0xc46d,	// (0x00022bfb) main_vradio_pane_t1

0xc47f,	// (0x00022c0d) main_vradio_pane_t2_ParamLimits

0xc47f,	// (0x00022c0d) main_vradio_pane_t2

0x39a0,	// (0x0001a12e) main_vradio_pane_t3_ParamLimits

0x39a0,	// (0x0001a12e) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00025fed) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00025fed) main_vradio_pane_t

0xc491,	// (0x00022c1f) vradio_rocker_control_pane_ParamLimits

0xc491,	// (0x00022c1f) vradio_rocker_control_pane

0xc49d,	// (0x00022c2b) vradio_station_info_pane_ParamLimits

0xc49d,	// (0x00022c2b) vradio_station_info_pane

0x39b4,	// (0x0001a142) vradio_frequency_info_pane_ParamLimits

0x39b4,	// (0x0001a142) vradio_frequency_info_pane

0x3338,	// (0x00019ac6) vradio_station_info_pane_g1

0x39c3,	// (0x0001a151) vradio_station_info_pane_t1_ParamLimits

0x39c3,	// (0x0001a151) vradio_station_info_pane_t1

0x39e5,	// (0x0001a173) vradio_station_info_pane_t2_ParamLimits

0x39e5,	// (0x0001a173) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00025ff4) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00025ff4) vradio_station_info_pane_t

0x3a20,	// (0x0001a1ae) vradio_tuning_pane

0x3a28,	// (0x0001a1b6) vradio_rocker_control_pane_g1

0x3a30,	// (0x0001a1be) vradio_rocker_control_pane_g2

0x3a38,	// (0x0001a1c6) vradio_rocker_control_pane_g3

0x3a40,	// (0x0001a1ce) vradio_rocker_control_pane_g4

0x3a48,	// (0x0001a1d6) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00025ff9) vradio_rocker_control_pane_g

0xc4aa,	// (0x00022c38) vradio_frequency_info_pane_g1

0x3a50,	// (0x0001a1de) vradio_frequency_info_pane_t1_ParamLimits

0x3a50,	// (0x0001a1de) vradio_frequency_info_pane_t1

0xc4b4,	// (0x00022c42) vradio_tuning_pane_g1

0xc4bf,	// (0x00022c4d) vradio_tuning_pane_t1

0x04a6,	// (0x00016c34) area_side_right_pane_ParamLimits

0x04a6,	// (0x00016c34) area_side_right_pane

0x2dca,	// (0x00019558) status_small_pane_g1

0x2dd2,	// (0x00019560) status_small_pane_g2

0x2ddb,	// (0x00019569) status_small_pane_g3

0x2de4,	// (0x00019572) status_small_pane_g4

0x0003,

0xf62b,	// (0x00025db9) status_small_pane_g

0x2ded,	// (0x0001957b) status_small_pane_t1

0x0478,	// (0x00016c06) main_video3_pane

0x3a64,	// (0x0001a1f2) cams_zoom_vslider_pane

0x3a6c,	// (0x0001a1fa) image3_wide_pane_ParamLimits

0x3a6c,	// (0x0001a1fa) image3_wide_pane

0x3a86,	// (0x0001a214) image3_wide_small_pane

0x3a92,	// (0x0001a220) main_video3_pane_g1_ParamLimits

0x3a92,	// (0x0001a220) main_video3_pane_g1

0x3aae,	// (0x0001a23c) main_video3_pane_g2_ParamLimits

0x3aae,	// (0x0001a23c) main_video3_pane_g2

0x0001,

0xf876,	// (0x00026004) main_video3_pane_g_ParamLimits

0xf876,	// (0x00026004) main_video3_pane_g

0x3aca,	// (0x0001a258) main_video3_pane_t1_ParamLimits

0x3aca,	// (0x0001a258) main_video3_pane_t1

0x3af5,	// (0x0001a283) main_video3_pane_t2_ParamLimits

0x3af5,	// (0x0001a283) main_video3_pane_t2

0x3b22,	// (0x0001a2b0) main_video3_pane_t3_ParamLimits

0x3b22,	// (0x0001a2b0) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00026009) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00026009) main_video3_pane_t

0x3b4f,	// (0x0001a2dd) cams_zoom_vslider_pane_g1

0x3b58,	// (0x0001a2e6) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00026010) cams_zoom_vslider_pane_g

0x3b60,	// (0x0001a2ee) small_slider_vertical_pane

0x3338,	// (0x00019ac6) small_slider_vertical_pane_g1

0x3338,	// (0x00019ac6) small_slider_vertical_pane_g2

0x3b68,	// (0x0001a2f6) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00026015) small_slider_vertical_pane_g

0x0478,	// (0x00016c06) main_hwr_training_pane

0x3b71,	// (0x0001a2ff) hwr_training_instruct_pane_ParamLimits

0x3b71,	// (0x0001a2ff) hwr_training_instruct_pane

0xc4ce,	// (0x00022c5c) hwr_training_navi_pane_ParamLimits

0xc4ce,	// (0x00022c5c) hwr_training_navi_pane

0xc4e8,	// (0x00022c76) hwr_training_write_pane_ParamLimits

0xc4e8,	// (0x00022c76) hwr_training_write_pane

0x0478,	// (0x00016c06) bg_frame_shadow_pane

0x3ba8,	// (0x0001a336) hwr_training_write_pane_g1

0x3bb0,	// (0x0001a33e) hwr_training_write_pane_g2

0x3bb8,	// (0x0001a346) hwr_training_write_pane_g3

0x3bc0,	// (0x0001a34e) hwr_training_write_pane_g4

0x3bc8,	// (0x0001a356) hwr_training_write_pane_g5

0x3bd0,	// (0x0001a35e) hwr_training_write_pane_g6

0x3bd8,	// (0x0001a366) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0002601c) hwr_training_write_pane_g

0x7839,	// (0x0001dfc7) hwr_training_navi_pane_g1_ParamLimits

0x7839,	// (0x0001dfc7) hwr_training_navi_pane_g1

0x784b,	// (0x0001dfd9) hwr_training_navi_pane_g2_ParamLimits

0x784b,	// (0x0001dfd9) hwr_training_navi_pane_g2

0x785d,	// (0x0001dfeb) hwr_training_navi_pane_g3_ParamLimits

0x785d,	// (0x0001dfeb) hwr_training_navi_pane_g3

0x786d,	// (0x0001dffb) hwr_training_navi_pane_g4_ParamLimits

0x786d,	// (0x0001dffb) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0002602b) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0002602b) hwr_training_navi_pane_g

0x7887,	// (0x0001e015) hwr_training_navi_pane_t1

0xc520,	// (0x00022cae) list_single_hwr_training_instruct_pane_ParamLimits

0xc520,	// (0x00022cae) list_single_hwr_training_instruct_pane

0x3c2f,	// (0x0001a3bd) list_single_hwr_training_instruct_pane_t1

0x3278,	// (0x00019a06) bg_frame_shadow_pane_g1

0x3c3e,	// (0x0001a3cc) bg_frame_shadow_pane_g2

0x3c46,	// (0x0001a3d4) bg_frame_shadow_pane_g3

0x3c4e,	// (0x0001a3dc) bg_frame_shadow_pane_g4

0x3c56,	// (0x0001a3e4) bg_frame_shadow_pane_g5

0x3c5e,	// (0x0001a3ec) bg_frame_shadow_pane_g6

0x3c66,	// (0x0001a3f4) bg_frame_shadow_pane_g7

0x0d4b,	// (0x000174d9) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00026036) bg_frame_shadow_pane_g

0x0478,	// (0x00016c06) main_video_tele_dialer_pane

0x7895,	// (0x0001e023) aid_size_cell_video_keypad_ParamLimits

0x7895,	// (0x0001e023) aid_size_cell_video_keypad

0x78a5,	// (0x0001e033) grid_video_dialer_keypad_pane_ParamLimits

0x78a5,	// (0x0001e033) grid_video_dialer_keypad_pane

0x78d9,	// (0x0001e067) video_down_pane_cp_ParamLimits

0x78d9,	// (0x0001e067) video_down_pane_cp

0x78e7,	// (0x0001e075) cell_video_dialer_keypad_pane_ParamLimits

0x78e7,	// (0x0001e075) cell_video_dialer_keypad_pane

0x3c6e,	// (0x0001a3fc) bg_button_pane_cp08_ParamLimits

0x3c6e,	// (0x0001a3fc) bg_button_pane_cp08

0xc55b,	// (0x00022ce9) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc55b,	// (0x00022ce9) cell_video_dialer_keypad_pane_g1

0xbe98,	// (0x00022626) mup3_rocker2_pane_ParamLimits

0xbe98,	// (0x00022626) mup3_rocker2_pane

0x3338,	// (0x00019ac6) mup3_rocker2_pane_g1

0xb0de,	// (0x0002186c) main_dialer2_pane

0x0478,	// (0x00016c06) main_mp4_pane

0x7906,	// (0x0001e094) main_mp4_pane_g1_ParamLimits

0x7906,	// (0x0001e094) main_mp4_pane_g1

0x7914,	// (0x0001e0a2) main_mp4_pane_g2_ParamLimits

0x7914,	// (0x0001e0a2) main_mp4_pane_g2

0x7922,	// (0x0001e0b0) main_mp4_pane_g3_ParamLimits

0x7922,	// (0x0001e0b0) main_mp4_pane_g3

0x7975,	// (0x0001e103) main_mp4_pane_g4_ParamLimits

0x7975,	// (0x0001e103) main_mp4_pane_g4

0x798f,	// (0x0001e11d) main_mp4_pane_g5_ParamLimits

0x798f,	// (0x0001e11d) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00026056) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00026056) main_mp4_pane_g

0x79c3,	// (0x0001e151) main_mp4_pane_t1_ParamLimits

0x79c3,	// (0x0001e151) main_mp4_pane_t1

0x7a1f,	// (0x0001e1ad) main_mp4_pane_t2_ParamLimits

0x7a1f,	// (0x0001e1ad) main_mp4_pane_t2

0x3d8c,	// (0x0001a51a) main_mp4_pane_t3_ParamLimits

0x3d8c,	// (0x0001a51a) main_mp4_pane_t3

0x7a71,	// (0x0001e1ff) main_mp4_pane_t4_ParamLimits

0x7a71,	// (0x0001e1ff) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00026063) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00026063) main_mp4_pane_t

0x7ab1,	// (0x0001e23f) mp4_progress_pane_ParamLimits

0x7ab1,	// (0x0001e23f) mp4_progress_pane

0x7afb,	// (0x0001e289) mp4_rocker_pane_ParamLimits

0x7afb,	// (0x0001e289) mp4_rocker_pane

0x3e60,	// (0x0001a5ee) mp4_progress_pane_t1

0x3e79,	// (0x0001a607) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0002606c) mp4_progress_pane_t

0x3e92,	// (0x0001a620) mup_progress_pane_cp04

0x48ed,	// (0x0001b07b) mp4_rocker_pane_g1

0x7b1d,	// (0x0001e2ab) aid_cell_size_keypad2_ParamLimits

0x7b1d,	// (0x0001e2ab) aid_cell_size_keypad2

0x7b2d,	// (0x0001e2bb) dialer2_ne_pane_ParamLimits

0x7b2d,	// (0x0001e2bb) dialer2_ne_pane

0x7b39,	// (0x0001e2c7) grid_dialer2_keypad_pane_ParamLimits

0x7b39,	// (0x0001e2c7) grid_dialer2_keypad_pane

0x4956,	// (0x0001b0e4) bg_popup_call_pane_cp07_ParamLimits

0x4956,	// (0x0001b0e4) bg_popup_call_pane_cp07

0xc596,	// (0x00022d24) dialer2_ne_pane_t1_ParamLimits

0xc596,	// (0x00022d24) dialer2_ne_pane_t1

0x7b47,	// (0x0001e2d5) cell_dialer2_keypad_pane_ParamLimits

0x7b47,	// (0x0001e2d5) cell_dialer2_keypad_pane

0x3eb0,	// (0x0001a63e) bg_button_pane_pane_cp04_ParamLimits

0x3eb0,	// (0x0001a63e) bg_button_pane_pane_cp04

0xc5bb,	// (0x00022d49) cell_dialer2_keypad_pane_g1_ParamLimits

0xc5bb,	// (0x00022d49) cell_dialer2_keypad_pane_g1

0x916a,	// (0x0001f8f8) aid_placing_vt_set_content_ParamLimits

0x916a,	// (0x0001f8f8) aid_placing_vt_set_content

0x9184,	// (0x0001f912) aid_placing_vt_set_title_ParamLimits

0x9184,	// (0x0001f912) aid_placing_vt_set_title

0x0478,	// (0x00016c06) main_image3_pane

0x7b90,	// (0x0001e31e) area_side_right_pane_cp01_ParamLimits

0x7b90,	// (0x0001e31e) area_side_right_pane_cp01

0x7bbf,	// (0x0001e34d) main_image3_pane_g1_ParamLimits

0x7bbf,	// (0x0001e34d) main_image3_pane_g1

0x7bcd,	// (0x0001e35b) main_image3_pane_g2_ParamLimits

0x7bcd,	// (0x0001e35b) main_image3_pane_g2

0x7be6,	// (0x0001e374) main_image3_pane_g3_ParamLimits

0x7be6,	// (0x0001e374) main_image3_pane_g3

0x7bff,	// (0x0001e38d) main_image3_pane_g4_ParamLimits

0x7bff,	// (0x0001e38d) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0002607b) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0002607b) main_image3_pane_g

0x7c18,	// (0x0001e3a6) main_image3_pane_t1_ParamLimits

0x7c18,	// (0x0001e3a6) main_image3_pane_t1

0x7c3d,	// (0x0001e3cb) main_image3_pane_t2_ParamLimits

0x7c3d,	// (0x0001e3cb) main_image3_pane_t2

0x7c5c,	// (0x0001e3ea) main_image3_pane_t3_ParamLimits

0x7c5c,	// (0x0001e3ea) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00026084) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00026084) main_image3_pane_t

0x39f7,	// (0x0001a185) grid_sctrl_middle_pane_cp01_ParamLimits

0x39f7,	// (0x0001a185) grid_sctrl_middle_pane_cp01

0xc623,	// (0x00022db1) cell_sctrl_middle_pane_cp01_ParamLimits

0xc623,	// (0x00022db1) cell_sctrl_middle_pane_cp01

0xc634,	// (0x00022dc2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc634,	// (0x00022dc2) cell_sctrl_middle_pane_cp01_g1

0x0478,	// (0x00016c06) main_call4_pane

0xc641,	// (0x00022dcf) aid_size_button_call4_ParamLimits

0xc641,	// (0x00022dcf) aid_size_button_call4

0xc673,	// (0x00022e01) call4_windows_pane_ParamLimits

0xc673,	// (0x00022e01) call4_windows_pane

0xc68f,	// (0x00022e1d) grid_call4_button_pane_ParamLimits

0xc68f,	// (0x00022e1d) grid_call4_button_pane

0x3ef0,	// (0x0001a67e) call4_windows_conf_pane

0x3f0b,	// (0x0001a699) popup_call4_audio_first_window_ParamLimits

0x3f0b,	// (0x0001a699) popup_call4_audio_first_window

0x3f59,	// (0x0001a6e7) popup_call4_audio_second_window_ParamLimits

0x3f59,	// (0x0001a6e7) popup_call4_audio_second_window

0x3f6f,	// (0x0001a6fd) popup_call4_audio_wait_window_ParamLimits

0x3f6f,	// (0x0001a6fd) popup_call4_audio_wait_window

0xc6b3,	// (0x00022e41) cell_call4_button_pane_ParamLimits

0xc6b3,	// (0x00022e41) cell_call4_button_pane

0xc6d6,	// (0x00022e64) bg_button_pane_cp09_ParamLimits

0xc6d6,	// (0x00022e64) bg_button_pane_cp09

0xc6e2,	// (0x00022e70) cell_call4_button_pane_g1_ParamLimits

0xc6e2,	// (0x00022e70) cell_call4_button_pane_g1

0xc6ef,	// (0x00022e7d) cell_call4_button_pane_t1_ParamLimits

0xc6ef,	// (0x00022e7d) cell_call4_button_pane_t1

0x3fb7,	// (0x0001a745) popup_call4_audio_conf_window_ParamLimits

0x3fb7,	// (0x0001a745) popup_call4_audio_conf_window

0xbecd,	// (0x0002265b) mup3_progress_pane_t1_ParamLimits

0xbee4,	// (0x00022672) mup3_progress_pane_t2_ParamLimits

0x3657,	// (0x00019de5) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00025f5d) mup3_progress_pane_t_ParamLimits

0x366e,	// (0x00019dfc) mup_progress_pane_cp03_ParamLimits

0xc36d,	// (0x00022afb) mup3_control_keys_pane_g4_copy1

0x7adf,	// (0x0001e26d) mp4_rocker2_pane_ParamLimits

0x7adf,	// (0x0001e26d) mp4_rocker2_pane

0x3fd9,	// (0x0001a767) mp4_rocker2_pane_g1

0x3fd1,	// (0x0001a75f) mp4_rocker2_pane_g2

0x7cbd,	// (0x0001e44b) mp4_rocker2_pane_g3

0x7cc5,	// (0x0001e453) mp4_rocker2_pane_g4

0x7ccd,	// (0x0001e45b) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0002608d) mp4_rocker2_pane_g

0x0478,	// (0x00016c06) main_camera4_pane

0x0478,	// (0x00016c06) main_video4_pane

0x78b5,	// (0x0001e043) main_video_tele_dialer_pane_t1_ParamLimits

0x78b5,	// (0x0001e043) main_video_tele_dialer_pane_t1

0x78c7,	// (0x0001e055) main_video_tele_dialer_pane_t2_ParamLimits

0x78c7,	// (0x0001e055) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00026047) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00026047) main_video_tele_dialer_pane_t

0x7ced,	// (0x0001e47b) cam4_autofocus_pane_ParamLimits

0x7ced,	// (0x0001e47b) cam4_autofocus_pane

0x7cf9,	// (0x0001e487) cam4_image_uncrop_pane_ParamLimits

0x7cf9,	// (0x0001e487) cam4_image_uncrop_pane

0x7d12,	// (0x0001e4a0) cam4_indicators_pane_ParamLimits

0x7d12,	// (0x0001e4a0) cam4_indicators_pane

0x7d2e,	// (0x0001e4bc) main_camera4_pane_g1_ParamLimits

0x7d2e,	// (0x0001e4bc) main_camera4_pane_g1

0x7d3a,	// (0x0001e4c8) main_camera4_pane_g2_ParamLimits

0x7d3a,	// (0x0001e4c8) main_camera4_pane_g2

0x7d3a,	// (0x0001e4c8) main_camera4_pane_g3_ParamLimits

0x7d3a,	// (0x0001e4c8) main_camera4_pane_g3

0x7d46,	// (0x0001e4d4) main_camera4_pane_g4_ParamLimits

0x7d46,	// (0x0001e4d4) main_camera4_pane_g4

0x7d52,	// (0x0001e4e0) main_camera4_pane_g5_ParamLimits

0x7d52,	// (0x0001e4e0) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00026098) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00026098) main_camera4_pane_g

0x7d6c,	// (0x0001e4fa) main_camera4_pane_t1_ParamLimits

0x7d6c,	// (0x0001e4fa) main_camera4_pane_t1

0x7d90,	// (0x0001e51e) bg_tb_trans_pane_cp06

0x7da6,	// (0x0001e534) cam4_indicators_pane_g1

0x7db3,	// (0x0001e541) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x000260b3) cam4_indicators_pane_g

0x7dd3,	// (0x0001e561) cam4_indicators_pane_t1

0x7dfd,	// (0x0001e58b) main_video4_pane_g1_ParamLimits

0x7dfd,	// (0x0001e58b) main_video4_pane_g1

0x7e09,	// (0x0001e597) main_video4_pane_g2_ParamLimits

0x7e09,	// (0x0001e597) main_video4_pane_g2

0x7e15,	// (0x0001e5a3) main_video4_pane_g3_ParamLimits

0x7e15,	// (0x0001e5a3) main_video4_pane_g3

0x7e21,	// (0x0001e5af) main_video4_pane_g4_ParamLimits

0x7e21,	// (0x0001e5af) main_video4_pane_g4

0x0004,

0xf92c,	// (0x000260ba) main_video4_pane_g_ParamLimits

0xf92c,	// (0x000260ba) main_video4_pane_g

0x7e43,	// (0x0001e5d1) vid4_indicators_pane_ParamLimits

0x7e43,	// (0x0001e5d1) vid4_indicators_pane

0x7e61,	// (0x0001e5ef) video4_image_uncrop_cif_pane_ParamLimits

0x7e61,	// (0x0001e5ef) video4_image_uncrop_cif_pane

0x7e70,	// (0x0001e5fe) video4_image_uncrop_nhd_pane_ParamLimits

0x7e70,	// (0x0001e5fe) video4_image_uncrop_nhd_pane

0x7cf9,	// (0x0001e487) video4_image_uncrop_vga_pane_ParamLimits

0x7cf9,	// (0x0001e487) video4_image_uncrop_vga_pane

0x7e7f,	// (0x0001e60d) bg_tb_trans_pane_cp07

0x7da6,	// (0x0001e534) vid4_indicators_pane_g1

0x7e97,	// (0x0001e625) vid4_indicators_pane_g2

0x7ea4,	// (0x0001e632) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x000260c5) vid4_indicators_pane_g

0x7ed1,	// (0x0001e65f) vid4_indicators_pane_t1

0xc727,	// (0x00022eb5) cam4_autofocus_pane_g1

0xc72f,	// (0x00022ebd) cam4_autofocus_pane_g2

0xc737,	// (0x00022ec5) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x000260d0) cam4_autofocus_pane_g

0xc73f,	// (0x00022ecd) cam4_autofocus_pane_g3_copy1

0xc53f,	// (0x00022ccd) video_down_pane_cp_t1

0xc54d,	// (0x00022cdb) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0002604c) video_down_pane_cp_t

0x39f7,	// (0x0001a185) popup_vitu2_window_ParamLimits

0x39f7,	// (0x0001a185) popup_vitu2_window

0x7eeb,	// (0x0001e679) aid_size_cell2_itu2_ParamLimits

0x7eeb,	// (0x0001e679) aid_size_cell2_itu2

0x7f0d,	// (0x0001e69b) aid_size_cell_itu2_ParamLimits

0x7f0d,	// (0x0001e69b) aid_size_cell_itu2

0x7f51,	// (0x0001e6df) bg_popup_window_pane_cp09_ParamLimits

0x7f51,	// (0x0001e6df) bg_popup_window_pane_cp09

0x7f5f,	// (0x0001e6ed) field_vitu2_entry_pane_ParamLimits

0x7f5f,	// (0x0001e6ed) field_vitu2_entry_pane

0x7f7f,	// (0x0001e70d) grid_vitu2_function_pane_ParamLimits

0x7f7f,	// (0x0001e70d) grid_vitu2_function_pane

0x7fc3,	// (0x0001e751) grid_vitu2_itu_pane_ParamLimits

0x7fc3,	// (0x0001e751) grid_vitu2_itu_pane

0x8037,	// (0x0001e7c5) cell_vitu2_itu_pane_ParamLimits

0x8037,	// (0x0001e7c5) cell_vitu2_itu_pane

0x804e,	// (0x0001e7dc) cell_vitu2_function_pane_ParamLimits

0x804e,	// (0x0001e7dc) cell_vitu2_function_pane

0x406e,	// (0x0001a7fc) bg_popup_call_pane_cp08_ParamLimits

0x406e,	// (0x0001a7fc) bg_popup_call_pane_cp08

0x4087,	// (0x0001a815) field_vitu2_entry_pane_g1

0x4093,	// (0x0001a821) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x000260d7) field_vitu2_entry_pane_g

0xc747,	// (0x00022ed5) field_vitu2_entry_pane_t1_ParamLimits

0xc747,	// (0x00022ed5) field_vitu2_entry_pane_t1

0x40ad,	// (0x0001a83b) field_vitu2_entry_pane_t2_ParamLimits

0x40ad,	// (0x0001a83b) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x000260de) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x000260de) field_vitu2_entry_pane_t

0x8092,	// (0x0001e820) bg_button_pane_cp010_ParamLimits

0x8092,	// (0x0001e820) bg_button_pane_cp010

0x80a0,	// (0x0001e82e) cell_vitu2_itu_pane_g1

0x80be,	// (0x0001e84c) cell_vitu2_itu_pane_t1_ParamLimits

0x80be,	// (0x0001e84c) cell_vitu2_itu_pane_t1

0x8110,	// (0x0001e89e) cell_vitu2_itu_pane_t2_ParamLimits

0x8110,	// (0x0001e89e) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x000260e8) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x000260e8) cell_vitu2_itu_pane_t

0x7e7f,	// (0x0001e60d) bg_button_pane_cp011

0x81cb,	// (0x0001e959) cell_vitu2_function_pane_g1

0x0478,	// (0x00016c06) main_myfav_hc_pane

0x7c9e,	// (0x0001e42c) popup_image3_note_pane_ParamLimits

0x7c9e,	// (0x0001e42c) popup_image3_note_pane

0x7cac,	// (0x0001e43a) popup_image3_tool_bar_pane_ParamLimits

0x7cac,	// (0x0001e43a) popup_image3_tool_bar_pane

0x817e,	// (0x0001e90c) cell_vitu2_itu_pane_t3_ParamLimits

0x817e,	// (0x0001e90c) cell_vitu2_itu_pane_t3

0x0478,	// (0x00016c06) bg_popup_trans_pane

0x40d2,	// (0x0001a860) grid_image3_tool_bar_pane

0x40dc,	// (0x0001a86a) bg_popup_trans_pane_g1

0x1210,	// (0x0001799e) bg_popup_trans_pane_g2

0x40e4,	// (0x0001a872) bg_popup_trans_pane_g3

0x40ec,	// (0x0001a87a) bg_popup_trans_pane_g4

0x40f4,	// (0x0001a882) bg_popup_trans_pane_g5

0x40fc,	// (0x0001a88a) bg_popup_trans_pane_g6

0x4104,	// (0x0001a892) bg_popup_trans_pane_g7

0x410c,	// (0x0001a89a) bg_popup_trans_pane_g8

0x11f0,	// (0x0001797e) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x000260ef) bg_popup_trans_pane_g

0x4114,	// (0x0001a8a2) cell_image3_tool_bar_pane_ParamLimits

0x4114,	// (0x0001a8a2) cell_image3_tool_bar_pane

0x3338,	// (0x00019ac6) cell_image3_tool_bar_pane_g1

0x0478,	// (0x00016c06) bg_popup_trans_pane_cp1

0x412a,	// (0x0001a8b8) popup_image3_note_pane_t1

0x4138,	// (0x0001a8c6) popup_image3_note_pane_t2

0x4146,	// (0x0001a8d4) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00026102) popup_image3_note_pane_t

0x4156,	// (0x0001a8e4) popup_image3_note_pane_t3_copy1

0xc762,	// (0x00022ef0) bg_myfav_hc_instruction_pane_ParamLimits

0xc762,	// (0x00022ef0) bg_myfav_hc_instruction_pane

0xc77a,	// (0x00022f08) cell_myfav_contact_pane_ParamLimits

0xc77a,	// (0x00022f08) cell_myfav_contact_pane

0xc794,	// (0x00022f22) cell_myfav_contact_pane_cp1_ParamLimits

0xc794,	// (0x00022f22) cell_myfav_contact_pane_cp1

0xc7ac,	// (0x00022f3a) cell_myfav_contact_pane_cp2_ParamLimits

0xc7ac,	// (0x00022f3a) cell_myfav_contact_pane_cp2

0xc7c4,	// (0x00022f52) cell_myfav_contact_pane_cp3_ParamLimits

0xc7c4,	// (0x00022f52) cell_myfav_contact_pane_cp3

0xc7db,	// (0x00022f69) cell_myfav_contact_pane_cp4_ParamLimits

0xc7db,	// (0x00022f69) cell_myfav_contact_pane_cp4

0xc7f1,	// (0x00022f7f) cell_myfav_contact_pane_cp5_ParamLimits

0xc7f1,	// (0x00022f7f) cell_myfav_contact_pane_cp5

0xc805,	// (0x00022f93) cell_myfav_contact_pane_cp6_ParamLimits

0xc805,	// (0x00022f93) cell_myfav_contact_pane_cp6

0xc819,	// (0x00022fa7) cell_myfav_contact_pane_cp7_ParamLimits

0xc819,	// (0x00022fa7) cell_myfav_contact_pane_cp7

0x4164,	// (0x0001a8f2) listscroll_gen_pane_cp05

0xc831,	// (0x00022fbf) main_myfav_hc_pane_g1_ParamLimits

0xc831,	// (0x00022fbf) main_myfav_hc_pane_g1

0xc84b,	// (0x00022fd9) main_myfav_hc_pane_g2_ParamLimits

0xc84b,	// (0x00022fd9) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00026109) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00026109) main_myfav_hc_pane_g

0xc87d,	// (0x0002300b) main_myfav_hc_pane_t1_ParamLimits

0xc87d,	// (0x0002300b) main_myfav_hc_pane_t1

0x416d,	// (0x0001a8fb) main_myfav_hc_pane_t2_ParamLimits

0x416d,	// (0x0001a8fb) main_myfav_hc_pane_t2

0x417f,	// (0x0001a90d) main_myfav_hc_pane_t3_ParamLimits

0x417f,	// (0x0001a90d) main_myfav_hc_pane_t3

0xc894,	// (0x00023022) main_myfav_hc_pane_t4_ParamLimits

0xc894,	// (0x00023022) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00026110) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00026110) main_myfav_hc_pane_t

0x3338,	// (0x00019ac6) bg_myfav_hc_instruction_pane_g1

0x4191,	// (0x0001a91f) cell_myfav_contact_pane_g1_ParamLimits

0x4191,	// (0x0001a91f) cell_myfav_contact_pane_g1

0x4191,	// (0x0001a91f) cell_myfav_contact_pane_g2_ParamLimits

0x4191,	// (0x0001a91f) cell_myfav_contact_pane_g2

0x419d,	// (0x0001a92b) cell_myfav_contact_pane_g3_ParamLimits

0x419d,	// (0x0001a92b) cell_myfav_contact_pane_g3

0x3641,	// (0x00019dcf) cell_myfav_contact_pane_g4_ParamLimits

0x3641,	// (0x00019dcf) cell_myfav_contact_pane_g4

0x41aa,	// (0x0001a938) cell_myfav_contact_pane_g5_ParamLimits

0x41aa,	// (0x0001a938) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0002611b) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0002611b) cell_myfav_contact_pane_g

0xc865,	// (0x00022ff3) main_myfav_hc_pane_g3_ParamLimits

0xc865,	// (0x00022ff3) main_myfav_hc_pane_g3

0x8645,	// (0x0001edd3) popup_adpt_find_window

0xc8be,	// (0x0002304c) afind_page_pane_ParamLimits

0xc8be,	// (0x0002304c) afind_page_pane

0xc8cb,	// (0x00023059) aid_size_cell_afind_ParamLimits

0xc8cb,	// (0x00023059) aid_size_cell_afind

0xc8e5,	// (0x00023073) bg_popup_sub_pane_cp09_ParamLimits

0xc8e5,	// (0x00023073) bg_popup_sub_pane_cp09

0xc8f2,	// (0x00023080) find_pane_cp01_ParamLimits

0xc8f2,	// (0x00023080) find_pane_cp01

0x41b6,	// (0x0001a944) grid_afind_control_pane_ParamLimits

0x41b6,	// (0x0001a944) grid_afind_control_pane

0xc8ff,	// (0x0002308d) grid_afind_pane_ParamLimits

0xc8ff,	// (0x0002308d) grid_afind_pane

0xc91b,	// (0x000230a9) cell_afind_pane_ParamLimits

0xc91b,	// (0x000230a9) cell_afind_pane

0x3338,	// (0x00019ac6) afind_page_pane_g1

0xc967,	// (0x000230f5) afind_page_pane_g2

0xc970,	// (0x000230fe) afind_page_pane_g3

0x0002,

0xf998,	// (0x00026126) afind_page_pane_g

0xc979,	// (0x00023107) afind_page_pane_t1

0x41ca,	// (0x0001a958) cell_afind_grid_control_pane_ParamLimits

0x41ca,	// (0x0001a958) cell_afind_grid_control_pane

0x3eb0,	// (0x0001a63e) bg_button_pane_cp69_ParamLimits

0x3eb0,	// (0x0001a63e) bg_button_pane_cp69

0xc999,	// (0x00023127) cell_afind_pane_g1_ParamLimits

0xc999,	// (0x00023127) cell_afind_pane_g1

0xc9a6,	// (0x00023134) cell_afind_pane_t1_ParamLimits

0xc9a6,	// (0x00023134) cell_afind_pane_t1

0x0f41,	// (0x000176cf) bg_button_pane_cp72

0x41d9,	// (0x0001a967) cell_afind_grid_control_pane_g1

0xac56,	// (0x000213e4) aid_image_placing_area_ParamLimits

0xac56,	// (0x000213e4) aid_image_placing_area

0x3946,	// (0x0001a0d4) field_vitu_entry_pane_g1_ParamLimits

0x3946,	// (0x0001a0d4) field_vitu_entry_pane_g1

0x3952,	// (0x0001a0e0) field_vitu_entry_pane_g2_ParamLimits

0x3952,	// (0x0001a0e0) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00025fd7) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00025fd7) field_vitu_entry_pane_g

0xc3f7,	// (0x00022b85) cell_vitu_itu_pane_g1_ParamLimits

0xc439,	// (0x00022bc7) cell_vitu_itu_pane_t3_ParamLimits

0xc439,	// (0x00022bc7) cell_vitu_itu_pane_t3

0x3e60,	// (0x0001a5ee) mp4_progress_pane_t1_ParamLimits

0x3e79,	// (0x0001a607) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0002606c) mp4_progress_pane_t_ParamLimits

0x3e92,	// (0x0001a620) mup_progress_pane_cp04_ParamLimits

0xc8a8,	// (0x00023036) main_myfav_hc_pane_t5_ParamLimits

0xc8a8,	// (0x00023036) main_myfav_hc_pane_t5

0x049e,	// (0x00016c2c) aid_zoom_text_primary

0x8645,	// (0x0001edd3) popup_adpt_find_window_ParamLimits

0x04e9,	// (0x00016c77) main_cam_set_pane

0x7d20,	// (0x0001e4ae) cam4_zoom_pane_ParamLimits

0x7d20,	// (0x0001e4ae) cam4_zoom_pane

0xc9b8,	// (0x00023146) main_cam_set_pane_g1_ParamLimits

0xc9b8,	// (0x00023146) main_cam_set_pane_g1

0xc9c6,	// (0x00023154) main_cam_set_pane_g2_ParamLimits

0xc9c6,	// (0x00023154) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0002612d) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0002612d) main_cam_set_pane_g

0xc9d2,	// (0x00023160) main_cam_set_pane_t1_ParamLimits

0xc9d2,	// (0x00023160) main_cam_set_pane_t1

0xc9ee,	// (0x0002317c) main_cset_listscroll_pane_ParamLimits

0xc9ee,	// (0x0002317c) main_cset_listscroll_pane

0xca1d,	// (0x000231ab) main_cset_slider_pane_ParamLimits

0xca1d,	// (0x000231ab) main_cset_slider_pane

0x41ea,	// (0x0001a978) main_cset_list_pane_ParamLimits

0x41ea,	// (0x0001a978) main_cset_list_pane

0x41fa,	// (0x0001a988) scroll_pane_cp028

0xca3e,	// (0x000231cc) aid_area_touch_slider

0xca5a,	// (0x000231e8) cset_slider_pane

0xca84,	// (0x00023212) main_cset_slider_pane_g1

0xca99,	// (0x00023227) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00026132) main_cset_slider_pane_g

0x4233,	// (0x0001a9c1) main_cset_slider_pane_t1

0xcb55,	// (0x000232e3) main_cset_slider_pane_t2

0xcb6f,	// (0x000232fd) main_cset_slider_pane_t3

0xcb89,	// (0x00023317) main_cset_slider_pane_t4

0xcba3,	// (0x00023331) main_cset_slider_pane_t5

0xcbbf,	// (0x0002334d) main_cset_slider_pane_t6

0xcbd4,	// (0x00023362) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00026157) main_cset_slider_pane_t

0xccd8,	// (0x00023466) cset_list_set_pane_ParamLimits

0xccd8,	// (0x00023466) cset_list_set_pane

0xcce9,	// (0x00023477) aid_position_infowindow_above

0xccf1,	// (0x0002347f) aid_position_infowindow_below

0x42d3,	// (0x0001aa61) cset_list_set_pane_g1_ParamLimits

0x42d3,	// (0x0001aa61) cset_list_set_pane_g1

0x4b60,	// (0x0001b2ee) cset_list_set_pane_g3_ParamLimits

0x4b60,	// (0x0001b2ee) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00026176) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00026176) cset_list_set_pane_g

0x4b6f,	// (0x0001b2fd) cset_list_set_pane_t1_ParamLimits

0x4b6f,	// (0x0001b2fd) cset_list_set_pane_t1

0x04e9,	// (0x00016c77) list_highlight_pane_cp021_ParamLimits

0x04e9,	// (0x00016c77) list_highlight_pane_cp021

0x1aee,	// (0x0001827c) cset_slider_pane_g1

0x1b00,	// (0x0001828e) cset_slider_pane_g2

0x1af7,	// (0x00018285) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0002617b) cset_slider_pane_g

0x81df,	// (0x0001e96d) aid_area_touch_cam4_zoom

0x81e7,	// (0x0001e975) cam4_zoom_cont_pane

0x81ef,	// (0x0001e97d) cam4_zoom_pane_g1

0x81f7,	// (0x0001e985) cam4_zoom_pane_g2

0x81ff,	// (0x0001e98d) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00026182) cam4_zoom_pane_g

0x8207,	// (0x0001e995) cam4_zoom_cont_pane_g1

0x8210,	// (0x0001e99e) cam4_zoom_cont_pane_g2

0x8219,	// (0x0001e9a7) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00026189) cam4_zoom_cont_pane_g

0xc65b,	// (0x00022de9) call4_image_pane_ParamLimits

0xc65b,	// (0x00022de9) call4_image_pane

0x3ef0,	// (0x0001a67e) call4_windows_conf_pane_ParamLimits

0x3f37,	// (0x0001a6c5) popup_call4_audio_in_window_ParamLimits

0x3f37,	// (0x0001a6c5) popup_call4_audio_in_window

0x0478,	// (0x00016c06) bg_popup_call2_act_pane_cp02

0x3faf,	// (0x0001a73d) call4_list_conf_pane

0x3338,	// (0x00019ac6) call4_image_pane_g1

0x3338,	// (0x00019ac6) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00025e9d) call4_image_pane_g

0x431a,	// (0x0001aaa8) list_single_graphic_popup_conf4_pane_ParamLimits

0x431a,	// (0x0001aaa8) list_single_graphic_popup_conf4_pane

0x0478,	// (0x00016c06) list_highlight_pane_cp022

0x432f,	// (0x0001aabd) list_single_graphic_popup_conf4_pane_g1

0x17c8,	// (0x00017f56) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00026190) list_single_graphic_popup_conf4_pane_g

0x4337,	// (0x0001aac5) list_single_graphic_popup_conf4_pane_t1

0x9283,	// (0x0001fa11) popup_vtel_slider_window_ParamLimits

0x9283,	// (0x0001fa11) popup_vtel_slider_window

0x3e9e,	// (0x0001a62c) dialer2_ne_pane_t2_ParamLimits

0x3e9e,	// (0x0001a62c) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00026071) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00026071) dialer2_ne_pane_t

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp010_ParamLimits

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp010

0xccf9,	// (0x00023487) popup_vtel_slider_window_g1_ParamLimits

0xccf9,	// (0x00023487) popup_vtel_slider_window_g1

0xcd05,	// (0x00023493) popup_vtel_slider_window_g2_ParamLimits

0xcd05,	// (0x00023493) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00026195) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00026195) popup_vtel_slider_window_g

0xcd4d,	// (0x000234db) vtel_slider_pane_ParamLimits

0xcd4d,	// (0x000234db) vtel_slider_pane

0xcd5c,	// (0x000234ea) vtel_slider_pane_g1_ParamLimits

0xcd5c,	// (0x000234ea) vtel_slider_pane_g1

0xcd69,	// (0x000234f7) vtel_slider_pane_g2_ParamLimits

0xcd69,	// (0x000234f7) vtel_slider_pane_g2

0xcd76,	// (0x00023504) vtel_slider_pane_g3_ParamLimits

0xcd76,	// (0x00023504) vtel_slider_pane_g3

0xcd5c,	// (0x000234ea) vtel_slider_pane_g4_ParamLimits

0xcd5c,	// (0x000234ea) vtel_slider_pane_g4

0xcd83,	// (0x00023511) vtel_slider_pane_g5_ParamLimits

0xcd83,	// (0x00023511) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0002619e) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0002619e) vtel_slider_pane_g

0x0478,	// (0x00016c06) main_gallery2_pane

0x7f33,	// (0x0001e6c1) aid_size_row_itut2_dropdow_list_ParamLimits

0x7f33,	// (0x0001e6c1) aid_size_row_itut2_dropdow_list

0x7fa1,	// (0x0001e72f) grid_vitu2_function_top_pane_ParamLimits

0x7fa1,	// (0x0001e72f) grid_vitu2_function_top_pane

0x7ff3,	// (0x0001e781) popup_vitu2_dropdown_list_window_ParamLimits

0x7ff3,	// (0x0001e781) popup_vitu2_dropdown_list_window

0x8013,	// (0x0001e7a1) popup_vitu2_match_list_window

0x8222,	// (0x0001e9b0) cell_vitu2_function_top_pane_ParamLimits

0x8222,	// (0x0001e9b0) cell_vitu2_function_top_pane

0x8242,	// (0x0001e9d0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8242,	// (0x0001e9d0) cell_vitu2_function_top_pane_cp01

0x8260,	// (0x0001e9ee) cell_vitu2_function_top_wide_pane_ParamLimits

0x8260,	// (0x0001e9ee) cell_vitu2_function_top_wide_pane

0x7e7f,	// (0x0001e60d) bg_button_pane_cp012

0x827e,	// (0x0001ea0c) cell_vitu2_function_top_pane_g1

0x828d,	// (0x0001ea1b) bg_button_pane_cp013_ParamLimits

0x828d,	// (0x0001ea1b) bg_button_pane_cp013

0xcd90,	// (0x0002351e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcd90,	// (0x0002351e) cell_vitu2_function_top_wide_pane_g1

0x82a9,	// (0x0001ea37) bg_popup_sub_pane_cp20

0x82b7,	// (0x0001ea45) list_vitu2_match_list_pane

0x40dc,	// (0x0001a86a) bg_popup_sub_pane_cp20_g1

0x40e4,	// (0x0001a872) bg_popup_sub_pane_cp20_g2

0x1210,	// (0x0001799e) bg_popup_sub_pane_cp20_g3

0x40ec,	// (0x0001a87a) bg_popup_sub_pane_cp20_g4

0x11f0,	// (0x0001797e) bg_popup_sub_pane_cp20_g5

0x436f,	// (0x0001aafd) bg_popup_sub_pane_cp20_g6

0x40fc,	// (0x0001a88a) bg_popup_sub_pane_cp20_g7

0x4104,	// (0x0001a892) bg_popup_sub_pane_cp20_g8

0x410c,	// (0x0001a89a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x000261a9) bg_popup_sub_pane_cp20_g

0x82cf,	// (0x0001ea5d) list_vitu2_match_list_item_pane_ParamLimits

0x82cf,	// (0x0001ea5d) list_vitu2_match_list_item_pane

0x82e1,	// (0x0001ea6f) list_vitu2_match_list_item_pane_t1

0x7087,	// (0x0001d815) bg_popup_sub_pane_cp21

0x82ef,	// (0x0001ea7d) grid_vitu2_dropdown_list_pane

0x82f7,	// (0x0001ea85) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x82f7,	// (0x0001ea85) cell_vitu2_dropdown_list_char_pane

0x831c,	// (0x0001eaaa) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x831c,	// (0x0001eaaa) cell_vitu2_dropdown_list_ctrl_pane

0x43c1,	// (0x0001ab4f) cell_vitu2_dropdown_list_char_pane_g1

0x43b8,	// (0x0001ab46) cell_vitu2_dropdown_list_char_pane_g2

0x43af,	// (0x0001ab3d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x000261c6) cell_vitu2_dropdown_list_char_pane_g

0x834a,	// (0x0001ead8) cell_vitu2_dropdown_list_char_pane_t1

0xcdd4,	// (0x00023562) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcdd4,	// (0x00023562) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcde4,	// (0x00023572) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcde4,	// (0x00023572) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcdf5,	// (0x00023583) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcdf5,	// (0x00023583) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8358,	// (0x0001eae6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8358,	// (0x0001eae6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7d90,	// (0x0001e51e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7d90,	// (0x0001e51e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x000261cd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x000261cd) cell_vitu2_dropdown_list_ctrl_pane_g

0xce05,	// (0x00023593) aid_size_cell_gallery2_ParamLimits

0xce05,	// (0x00023593) aid_size_cell_gallery2

0xce13,	// (0x000235a1) grid_gallery2_pane_ParamLimits

0xce13,	// (0x000235a1) grid_gallery2_pane

0xce22,	// (0x000235b0) scroll_pane_cp029_ParamLimits

0xce22,	// (0x000235b0) scroll_pane_cp029

0xce2e,	// (0x000235bc) cell_gallery2_pane_ParamLimits

0xce2e,	// (0x000235bc) cell_gallery2_pane

0x43ca,	// (0x0001ab58) cell_gallery2_pane_g2

0xce58,	// (0x000235e6) cell_gallery2_pane_g3

0x43d4,	// (0x0001ab62) cell_gallery2_pane_g4

0x43dc,	// (0x0001ab6a) cell_gallery2_pane_g5

0x1996,	// (0x00018124) grid_highlight_pane_cp10

0x8013,	// (0x0001e7a1) popup_vitu2_match_list_window_ParamLimits

0x8027,	// (0x0001e7b5) popup_vitu2_query_window_ParamLimits

0x8027,	// (0x0001e7b5) popup_vitu2_query_window

0x7087,	// (0x0001d815) bg_vitu2_candi_button_pane

0x43c1,	// (0x0001ab4f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x43b8,	// (0x0001ab46) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x43af,	// (0x0001ab3d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xce60,	// (0x000235ee) bg_button_pane_cp015

0xce6a,	// (0x000235f8) bg_button_pane_cp016

0xce74,	// (0x00023602) bg_button_pane_cp017

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp22

0x43e4,	// (0x0001ab72) popup_vitu2_query_window_g1

0xce9c,	// (0x0002362a) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x000261d8) popup_vitu2_query_window_g

0xceaa,	// (0x00023638) popup_vitu2_query_window_t1_ParamLimits

0xceaa,	// (0x00023638) popup_vitu2_query_window_t1

0xced2,	// (0x00023660) popup_vitu2_query_window_t2_ParamLimits

0xced2,	// (0x00023660) popup_vitu2_query_window_t2

0xcee4,	// (0x00023672) popup_vitu2_query_window_t3_ParamLimits

0xcee4,	// (0x00023672) popup_vitu2_query_window_t3

0xcf0c,	// (0x0002369a) popup_vitu2_query_window_t4_ParamLimits

0xcf0c,	// (0x0002369a) popup_vitu2_query_window_t4

0xcf22,	// (0x000236b0) popup_vitu2_query_window_t5_ParamLimits

0xcf22,	// (0x000236b0) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x000261dd) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x000261dd) popup_vitu2_query_window_t

0x41e2,	// (0x0001a970) main_cset_text_pane

0xca3e,	// (0x000231cc) aid_area_touch_slider_ParamLimits

0xca5a,	// (0x000231e8) cset_slider_pane_ParamLimits

0xca84,	// (0x00023212) main_cset_slider_pane_g1_ParamLimits

0xca99,	// (0x00023227) main_cset_slider_pane_g2_ParamLimits

0x4203,	// (0x0001a991) main_cset_slider_pane_g3_ParamLimits

0x4203,	// (0x0001a991) main_cset_slider_pane_g3

0xcaae,	// (0x0002323c) main_cset_slider_pane_g4_ParamLimits

0xcaae,	// (0x0002323c) main_cset_slider_pane_g4

0xcabd,	// (0x0002324b) main_cset_slider_pane_g5_ParamLimits

0xcabd,	// (0x0002324b) main_cset_slider_pane_g5

0xcac9,	// (0x00023257) main_cset_slider_pane_g6_ParamLimits

0xcac9,	// (0x00023257) main_cset_slider_pane_g6

0xf9a4,	// (0x00026132) main_cset_slider_pane_g_ParamLimits

0x4233,	// (0x0001a9c1) main_cset_slider_pane_t1_ParamLimits

0xcb55,	// (0x000232e3) main_cset_slider_pane_t2_ParamLimits

0xcb6f,	// (0x000232fd) main_cset_slider_pane_t3_ParamLimits

0xcb89,	// (0x00023317) main_cset_slider_pane_t4_ParamLimits

0xcba3,	// (0x00023331) main_cset_slider_pane_t5_ParamLimits

0xcbbf,	// (0x0002334d) main_cset_slider_pane_t6_ParamLimits

0xcbd4,	// (0x00023362) main_cset_slider_pane_t7_ParamLimits

0xcbfe,	// (0x0002338c) main_cset_slider_pane_t8_ParamLimits

0xcbfe,	// (0x0002338c) main_cset_slider_pane_t8

0xcc26,	// (0x000233b4) main_cset_slider_pane_t9_ParamLimits

0xcc26,	// (0x000233b4) main_cset_slider_pane_t9

0xcc4e,	// (0x000233dc) main_cset_slider_pane_t10_ParamLimits

0xcc4e,	// (0x000233dc) main_cset_slider_pane_t10

0xcc76,	// (0x00023404) main_cset_slider_pane_t11_ParamLimits

0xcc76,	// (0x00023404) main_cset_slider_pane_t11

0xcc9e,	// (0x0002342c) main_cset_slider_pane_t12_ParamLimits

0xcc9e,	// (0x0002342c) main_cset_slider_pane_t12

0xccbb,	// (0x00023449) main_cset_slider_pane_t13_ParamLimits

0xccbb,	// (0x00023449) main_cset_slider_pane_t13

0xf9c9,	// (0x00026157) main_cset_slider_pane_t_ParamLimits

0x0478,	// (0x00016c06) bg_popup_sub_pane_cp011

0x43f0,	// (0x0001ab7e) main_cset_text_pane_g1

0x43f8,	// (0x0001ab86) main_cset_text_pane_t1

0x4406,	// (0x0001ab94) main_cset_text_pane_t2

0x4414,	// (0x0001aba2) main_cset_text_pane_t3

0x4422,	// (0x0001abb0) main_cset_text_pane_t4

0x4430,	// (0x0001abbe) main_cset_text_pane_t5

0x443e,	// (0x0001abcc) main_cset_text_pane_t6

0x444c,	// (0x0001abda) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x000261e8) main_cset_text_pane_t

0x0478,	// (0x00016c06) main_cam4_burst_pane

0x0478,	// (0x00016c06) main_cam5_pane

0xc987,	// (0x00023115) bg_button_pane_cp019

0xc990,	// (0x0002311e) bg_button_pane_cp020

0x420f,	// (0x0001a99d) main_cset_slider_pane_g7_ParamLimits

0x420f,	// (0x0001a99d) main_cset_slider_pane_g7

0x421b,	// (0x0001a9a9) main_cset_slider_pane_g8_ParamLimits

0x421b,	// (0x0001a9a9) main_cset_slider_pane_g8

0xcadd,	// (0x0002326b) main_cset_slider_pane_g9_ParamLimits

0xcadd,	// (0x0002326b) main_cset_slider_pane_g9

0xcae9,	// (0x00023277) main_cset_slider_pane_g10_ParamLimits

0xcae9,	// (0x00023277) main_cset_slider_pane_g10

0xcaf5,	// (0x00023283) main_cset_slider_pane_g11_ParamLimits

0xcaf5,	// (0x00023283) main_cset_slider_pane_g11

0xcb01,	// (0x0002328f) main_cset_slider_pane_g12_ParamLimits

0xcb01,	// (0x0002328f) main_cset_slider_pane_g12

0xcb0d,	// (0x0002329b) main_cset_slider_pane_g13_ParamLimits

0xcb0d,	// (0x0002329b) main_cset_slider_pane_g13

0xcb19,	// (0x000232a7) main_cset_slider_pane_g14_ParamLimits

0xcb19,	// (0x000232a7) main_cset_slider_pane_g14

0xcb25,	// (0x000232b3) main_cset_slider_pane_g15_ParamLimits

0xcb25,	// (0x000232b3) main_cset_slider_pane_g15

0x4261,	// (0x0001a9ef) main_cset_slider_pane_t14_ParamLimits

0x4261,	// (0x0001a9ef) main_cset_slider_pane_t14

0x429a,	// (0x0001aa28) main_cset_slider_pane_t15_ParamLimits

0x429a,	// (0x0001aa28) main_cset_slider_pane_t15

0xcf38,	// (0x000236c6) aid_cam4_burst_size_cell_ParamLimits

0xcf38,	// (0x000236c6) aid_cam4_burst_size_cell

0xcf54,	// (0x000236e2) grid_cam4_burst_pane_ParamLimits

0xcf54,	// (0x000236e2) grid_cam4_burst_pane

0xcf86,	// (0x00023714) linegrid_cam4_burst_pane_ParamLimits

0xcf86,	// (0x00023714) linegrid_cam4_burst_pane

0xcfa6,	// (0x00023734) scroll_pane_cp30_ParamLimits

0xcfa6,	// (0x00023734) scroll_pane_cp30

0xcfb2,	// (0x00023740) cell_cam4_burst_pane_ParamLimits

0xcfb2,	// (0x00023740) cell_cam4_burst_pane

0x445a,	// (0x0001abe8) linegrid_cam4_burst_pane_g1_ParamLimits

0x445a,	// (0x0001abe8) linegrid_cam4_burst_pane_g1

0xcff2,	// (0x00023780) linegrid_cam4_burst_pane_g2_ParamLimits

0xcff2,	// (0x00023780) linegrid_cam4_burst_pane_g2

0x4467,	// (0x0001abf5) linegrid_cam4_burst_pane_g3_ParamLimits

0x4467,	// (0x0001abf5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x000261f7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x000261f7) linegrid_cam4_burst_pane_g

0xd003,	// (0x00023791) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xd003,	// (0x00023791) linegrid_cam4_burst_pane_g3_copy1

0x4474,	// (0x0001ac02) linegrid_cam4_burst_pane_g4_ParamLimits

0x4474,	// (0x0001ac02) linegrid_cam4_burst_pane_g4

0xd01d,	// (0x000237ab) linegrid_cam4_burst_pane_g5_ParamLimits

0xd01d,	// (0x000237ab) linegrid_cam4_burst_pane_g5

0xd02e,	// (0x000237bc) linegrid_cam4_burst_pane_g6_ParamLimits

0xd02e,	// (0x000237bc) linegrid_cam4_burst_pane_g6

0x4481,	// (0x0001ac0f) linegrid_cam4_burst_pane_g7_ParamLimits

0x4481,	// (0x0001ac0f) linegrid_cam4_burst_pane_g7

0xd045,	// (0x000237d3) cell_cam4_burst_pane_g1

0x449a,	// (0x0001ac28) main_cam5_pane_t1_ParamLimits

0x449a,	// (0x0001ac28) main_cam5_pane_t1

0x44ac,	// (0x0001ac3a) main_cam5_pane_t2_ParamLimits

0x44ac,	// (0x0001ac3a) main_cam5_pane_t2

0x44be,	// (0x0001ac4c) main_cam5_pane_t3_ParamLimits

0x44be,	// (0x0001ac4c) main_cam5_pane_t3

0x44d0,	// (0x0001ac5e) main_cam5_pane_t4_ParamLimits

0x44d0,	// (0x0001ac5e) main_cam5_pane_t4

0x44e8,	// (0x0001ac76) main_cam5_pane_t5_ParamLimits

0x44e8,	// (0x0001ac76) main_cam5_pane_t5

0x44fc,	// (0x0001ac8a) main_cam5_pane_t6_ParamLimits

0x44fc,	// (0x0001ac8a) main_cam5_pane_t6

0x4510,	// (0x0001ac9e) main_cam5_pane_t7_ParamLimits

0x4510,	// (0x0001ac9e) main_cam5_pane_t7

0x4522,	// (0x0001acb0) main_cam5_pane_t8_ParamLimits

0x4522,	// (0x0001acb0) main_cam5_pane_t8

0x4540,	// (0x0001acce) main_cam5_pane_t9_ParamLimits

0x4540,	// (0x0001acce) main_cam5_pane_t9

0x4552,	// (0x0001ace0) main_cam5_pane_t10_ParamLimits

0x4552,	// (0x0001ace0) main_cam5_pane_t10

0x4564,	// (0x0001acf2) main_cam5_pane_t11_ParamLimits

0x4564,	// (0x0001acf2) main_cam5_pane_t11

0x4578,	// (0x0001ad06) main_cam5_pane_t12_ParamLimits

0x4578,	// (0x0001ad06) main_cam5_pane_t12

0x458f,	// (0x0001ad1d) main_cam5_pane_t13_ParamLimits

0x458f,	// (0x0001ad1d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00026203) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00026203) main_cam5_pane_t

0x86f3,	// (0x0001ee81) popup_scut_keymap_window_ParamLimits

0x86f3,	// (0x0001ee81) popup_scut_keymap_window

0xd058,	// (0x000237e6) aid_size_cell_brow_shortcut

0x1996,	// (0x00018124) bg_popup_window_pane_cp010

0xd064,	// (0x000237f2) grid_scut_pane

0xd070,	// (0x000237fe) cell_scut_pane_ParamLimits

0xd070,	// (0x000237fe) cell_scut_pane

0xd08b,	// (0x00023819) cell_scut_pane_g1

0x45b2,	// (0x0001ad40) cell_scut_pane_t1

0x45c1,	// (0x0001ad4f) cell_scut_pane_t2

0xd094,	// (0x00023822) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0002621e) cell_scut_pane_t

0xbaf9,	// (0x00022287) main_mup3_pane_g8_ParamLimits

0xbaf9,	// (0x00022287) main_mup3_pane_g8

0x7f41,	// (0x0001e6cf) area_vitu2_query_pane_ParamLimits

0x7f41,	// (0x0001e6cf) area_vitu2_query_pane

0xce7e,	// (0x0002360c) input_focus_pane_cp08

0x45d0,	// (0x0001ad5e) area_vitu2_query_pane_g1

0xd0a2,	// (0x00023830) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00026225) area_vitu2_query_pane_g

0xd0b3,	// (0x00023841) area_vitu2_query_pane_t1_ParamLimits

0xd0b3,	// (0x00023841) area_vitu2_query_pane_t1

0xd0c7,	// (0x00023855) area_vitu2_query_pane_t2_ParamLimits

0xd0c7,	// (0x00023855) area_vitu2_query_pane_t2

0xd0db,	// (0x00023869) area_vitu2_query_pane_t3_ParamLimits

0xd0db,	// (0x00023869) area_vitu2_query_pane_t3

0x45dc,	// (0x0001ad6a) area_vitu2_query_pane_t4_ParamLimits

0x45dc,	// (0x0001ad6a) area_vitu2_query_pane_t4

0x4604,	// (0x0001ad92) area_vitu2_query_pane_t5_ParamLimits

0x4604,	// (0x0001ad92) area_vitu2_query_pane_t5

0x462c,	// (0x0001adba) area_vitu2_query_pane_t6_ParamLimits

0x462c,	// (0x0001adba) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0002622a) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0002622a) area_vitu2_query_pane_t

0xd103,	// (0x00023891) bg_button_pane_cp018

0xd111,	// (0x0002389f) bg_button_pane_cp021

0xd11d,	// (0x000238ab) bg_button_pane_cp022

0xd12e,	// (0x000238bc) input_focus_pane_cp09

0xa2bc,	// (0x00020a4a) aid_size_touch_mv_arrow_left

0xa2e7,	// (0x00020a75) aid_size_touch_mv_arrow_right

0xcb3d,	// (0x000232cb) main_cset_slider_pane_g16_ParamLimits

0xcb3d,	// (0x000232cb) main_cset_slider_pane_g16

0xcb49,	// (0x000232d7) main_cset_slider_pane_g17_ParamLimits

0xcb49,	// (0x000232d7) main_cset_slider_pane_g17

0xd045,	// (0x000237d3) cell_cam4_burst_pane_g1_ParamLimits

0x0478,	// (0x00016c06) compa_mode_pane

0xcd11,	// (0x0002349f) popup_vtel_slider_window_g3_ParamLimits

0xcd11,	// (0x0002349f) popup_vtel_slider_window_g3

0xcd25,	// (0x000234b3) popup_vtel_slider_window_g4_ParamLimits

0xcd25,	// (0x000234b3) popup_vtel_slider_window_g4

0xcd39,	// (0x000234c7) popup_vtel_slider_window_t1_ParamLimits

0xcd39,	// (0x000234c7) popup_vtel_slider_window_t1

0x0478,	// (0x00016c06) main_cl_pane

0x2e2f,	// (0x000195bd) popup_imed_adjust2_window_ParamLimits

0x2e03,	// (0x00019591) bg_tb_trans_pane_cp05_ParamLimits

0x387b,	// (0x0001a009) popup_imed_adjust2_window_g1_ParamLimits

0x388a,	// (0x0001a018) popup_imed_adjust2_window_g2_ParamLimits

0x388a,	// (0x0001a018) popup_imed_adjust2_window_g2

0x3896,	// (0x0001a024) popup_imed_adjust2_window_g3_ParamLimits

0x3896,	// (0x0001a024) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00025f9b) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00025f9b) popup_imed_adjust2_window_g

0x38a2,	// (0x0001a030) popup_imed_adjust2_window_t1_ParamLimits

0x38ba,	// (0x0001a048) slider_imed_adjust_pane_ParamLimits

0x38ce,	// (0x0001a05c) slider_imed_adjust_pane_g1_ParamLimits

0x38de,	// (0x0001a06c) slider_imed_adjust_pane_g2_ParamLimits

0x38ee,	// (0x0001a07c) slider_imed_adjust_pane_g3_ParamLimits

0x38ff,	// (0x0001a08d) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00025fa2) slider_imed_adjust_pane_g_ParamLimits

0x7cd5,	// (0x0001e463) aid_touch_area_cam4_ParamLimits

0x7cd5,	// (0x0001e463) aid_touch_area_cam4

0x7ce5,	// (0x0001e473) battery_pane_cp01

0x7d60,	// (0x0001e4ee) main_camera4_pane_g6_ParamLimits

0x7d60,	// (0x0001e4ee) main_camera4_pane_g6

0x7d7e,	// (0x0001e50c) main_camera4_pane_t2_ParamLimits

0x7d7e,	// (0x0001e50c) main_camera4_pane_t2

0x0001,

0xf917,	// (0x000260a5) main_camera4_pane_t_ParamLimits

0xf917,	// (0x000260a5) main_camera4_pane_t

0x7ded,	// (0x0001e57b) aid_touch_area_vid4_ParamLimits

0x7ded,	// (0x0001e57b) aid_touch_area_vid4

0x7e2d,	// (0x0001e5bb) main_video4_pane_g5_ParamLimits

0x7e2d,	// (0x0001e5bb) main_video4_pane_g5

0x7e51,	// (0x0001e5df) vid4_progress_pane_ParamLimits

0x7e51,	// (0x0001e5df) vid4_progress_pane

0x4227,	// (0x0001a9b5) main_cset_slider_pane_g18_ParamLimits

0x4227,	// (0x0001a9b5) main_cset_slider_pane_g18

0x448e,	// (0x0001ac1c) cell_cam4_burst_pane_g2_ParamLimits

0x448e,	// (0x0001ac1c) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x000261fe) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x000261fe) cell_cam4_burst_pane_g

0xd13f,	// (0x000238cd) bg_cl_pane_ParamLimits

0xd13f,	// (0x000238cd) bg_cl_pane

0xd14b,	// (0x000238d9) cl_header_pane_ParamLimits

0xd14b,	// (0x000238d9) cl_header_pane

0xd157,	// (0x000238e5) cl_listscroll_pane_ParamLimits

0xd157,	// (0x000238e5) cl_listscroll_pane

0x4678,	// (0x0001ae06) bg_cl_pane_g1

0x4680,	// (0x0001ae0e) bg_cl_pane_g2

0x4688,	// (0x0001ae16) bg_cl_pane_g3

0x4690,	// (0x0001ae1e) bg_cl_pane_g4

0x4698,	// (0x0001ae26) bg_cl_pane_g5

0x46a0,	// (0x0001ae2e) bg_cl_pane_g6

0x46a8,	// (0x0001ae36) bg_cl_pane_g7

0x46b0,	// (0x0001ae3e) bg_cl_pane_g8

0x46b8,	// (0x0001ae46) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00026239) bg_cl_pane_g

0xd163,	// (0x000238f1) aid_height_cl_leading_ParamLimits

0xd163,	// (0x000238f1) aid_height_cl_leading

0xd16f,	// (0x000238fd) aid_height_cl_text_ParamLimits

0xd16f,	// (0x000238fd) aid_height_cl_text

0x39f7,	// (0x0001a185) bg_cl_header_pane_ParamLimits

0x39f7,	// (0x0001a185) bg_cl_header_pane

0xd187,	// (0x00023915) cl_header_pane_g1_ParamLimits

0xd187,	// (0x00023915) cl_header_pane_g1

0xd194,	// (0x00023922) cl_header_pane_t1_ParamLimits

0xd194,	// (0x00023922) cl_header_pane_t1

0x46c0,	// (0x0001ae4e) cl_list_pane

0x41fa,	// (0x0001a988) hc_scroll_pane_cp01

0x11f0,	// (0x0001797e) bg_cl_header_pane_g1

0x40dc,	// (0x0001a86a) bg_cl_header_pane_g2

0x1210,	// (0x0001799e) bg_cl_header_pane_g3

0x40ec,	// (0x0001a87a) bg_cl_header_pane_g4

0x40e4,	// (0x0001a872) bg_cl_header_pane_g5

0x436f,	// (0x0001aafd) bg_cl_header_pane_g6

0x4104,	// (0x0001a892) bg_cl_header_pane_g7

0x410c,	// (0x0001a89a) bg_cl_header_pane_g8

0x40fc,	// (0x0001a88a) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0002624c) bg_cl_header_pane_g

0xd1a6,	// (0x00023934) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd1a6,	// (0x00023934) hc_cl_list_double_graphic_heading_pane

0x4377,	// (0x0001ab05) hc_cl_list_single_graphic_pane_ParamLimits

0x4377,	// (0x0001ab05) hc_cl_list_single_graphic_pane

0xd1b6,	// (0x00023944) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd1b6,	// (0x00023944) hc_cl_list_single_graphic_pane_g1

0xd1c2,	// (0x00023950) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd1c2,	// (0x00023950) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0002625f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0002625f) hc_cl_list_single_graphic_pane_g

0xd1d6,	// (0x00023964) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd1d6,	// (0x00023964) hc_cl_list_single_graphic_pane_t1

0xd1b6,	// (0x00023944) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd1b6,	// (0x00023944) hc_cl_list_double_graphic_heading_pane_g1

0xd1eb,	// (0x00023979) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd1eb,	// (0x00023979) hc_cl_list_double_graphic_heading_pane_g2

0xd1ff,	// (0x0002398d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd1ff,	// (0x0002398d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00026264) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00026264) hc_cl_list_double_graphic_heading_pane_g

0xd213,	// (0x000239a1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd213,	// (0x000239a1) hc_cl_list_double_graphic_heading_pane_t1

0xd228,	// (0x000239b6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd228,	// (0x000239b6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0002626b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0002626b) hc_cl_list_double_graphic_heading_pane_t

0x8383,	// (0x0001eb11) vid4_progress_pane_g1

0x838f,	// (0x0001eb1d) vid4_progress_pane_g2

0x839b,	// (0x0001eb29) vid4_progress_pane_g3

0x83aa,	// (0x0001eb38) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00026270) vid4_progress_pane_g

0x83c8,	// (0x0001eb56) vid4_progress_pane_t1

0x83de,	// (0x0001eb6c) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0002627b) vid4_progress_pane_t

0x8409,	// (0x0001eb97) wait_bar_pane_cp07

0x3125,	// (0x000198b3) blid_firmament_pane_ParamLimits

0x3168,	// (0x000198f6) popup_blid_sat_info2_window_g1

0x318c,	// (0x0001991a) popup_blid_sat_info2_window_t3

0x319a,	// (0x00019928) popup_blid_sat_info2_window_t4

0x31a8,	// (0x00019936) popup_blid_sat_info2_window_t5

0x31b6,	// (0x00019944) popup_blid_sat_info2_window_t6

0x31c6,	// (0x00019954) popup_blid_sat_info2_window_t7

0x31d4,	// (0x00019962) popup_blid_sat_info2_window_t8

0x31e2,	// (0x00019970) popup_blid_sat_info2_window_t9

0x31f0,	// (0x0001997e) popup_blid_sat_info2_window_t10

0x32b8,	// (0x00019a46) aid_firma_cardinal_ParamLimits

0x32cc,	// (0x00019a5a) blid_firmament_pane_t1_ParamLimits

0x32e3,	// (0x00019a71) blid_firmament_pane_t2_ParamLimits

0x32fa,	// (0x00019a88) blid_firmament_pane_t3_ParamLimits

0x3311,	// (0x00019a9f) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00025e94) blid_firmament_pane_t_ParamLimits

0x3328,	// (0x00019ab6) blid_sat_info_pane_ParamLimits

0x04e9,	// (0x00016c77) main_cam_set_pane_ParamLimits

0xc215,	// (0x000229a3) aid_size_cell_colour_35_ParamLimits

0xc22f,	// (0x000229bd) aid_size_cell_colour_112_ParamLimits

0xc246,	// (0x000229d4) aid_size_cell_effect_ParamLimits

0x04e9,	// (0x00016c77) bg_tb_trans_pane_cp02_ParamLimits

0x14b7,	// (0x00017c45) heading_imed_pane_ParamLimits

0xc260,	// (0x000229ee) listscroll_imed_pane_ParamLimits

0x2431,	// (0x00018bbf) popup_call2_audio_first_window_g5_ParamLimits

0x2431,	// (0x00018bbf) popup_call2_audio_first_window_g5

0x7b5e,	// (0x0001e2ec) aid_size_touch_image3_arrow_left_ParamLimits

0x7b5e,	// (0x0001e2ec) aid_size_touch_image3_arrow_left

0x7b74,	// (0x0001e302) aid_size_touch_image3_arrow_right_ParamLimits

0x7b74,	// (0x0001e302) aid_size_touch_image3_arrow_right

0x83f4,	// (0x0001eb82) vid4_progress_pane_t3

0xc500,	// (0x00022c8e) main_hwr_training_symbol_option_pane_ParamLimits

0xc500,	// (0x00022c8e) main_hwr_training_symbol_option_pane

0x3b93,	// (0x0001a321) popup_hwr_training_preview_window_ParamLimits

0x3b93,	// (0x0001a321) popup_hwr_training_preview_window

0x787a,	// (0x0001e008) hwr_training_navi_pane_g5_ParamLimits

0x787a,	// (0x0001e008) hwr_training_navi_pane_g5

0x40ca,	// (0x0001a858) popup_char_count_window

0x82a9,	// (0x0001ea37) bg_popup_sub_pane_cp20_ParamLimits

0x82b7,	// (0x0001ea45) list_vitu2_match_list_pane_ParamLimits

0x82c3,	// (0x0001ea51) vitu2_page_scroll_pane_ParamLimits

0x82c3,	// (0x0001ea51) vitu2_page_scroll_pane

0x47c3,	// (0x0001af51) list_single_hwr_training_symbol_option_pane_ParamLimits

0x47c3,	// (0x0001af51) list_single_hwr_training_symbol_option_pane

0x47d6,	// (0x0001af64) list_single_hwr_training_symbol_option_pane_g1

0x47de,	// (0x0001af6c) list_single_hwr_training_symbol_option_pane_t1

0x47ec,	// (0x0001af7a) bg_button_pane_cp023

0x47f5,	// (0x0001af83) bg_button_pane_cp024

0xd23d,	// (0x000239cb) vitu2_page_scroll_pane_g1

0xd245,	// (0x000239d3) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00026282) vitu2_page_scroll_pane_g

0xd24f,	// (0x000239dd) vitu2_page_scroll_pane_t1

0x3041,	// (0x000197cf) popup_char_count_window_g1

0x4828,	// (0x0001afb6) popup_char_count_window_g2

0x4831,	// (0x0001afbf) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00026287) popup_char_count_window_g

0x483a,	// (0x0001afc8) popup_char_count_window_t1

0x0478,	// (0x00016c06) main_vded2_pane

0x3867,	// (0x00019ff5) aid_size_cell_imed_line

0x3871,	// (0x00019fff) grid_imed_line_width_pane

0x7eb5,	// (0x0001e643) vid4_indicators_pane_g4

0x4848,	// (0x0001afd6) cell_imed_line_width_pane_ParamLimits

0x4848,	// (0x0001afd6) cell_imed_line_width_pane

0x485e,	// (0x0001afec) cell_imed_line_width_pane_g1

0x4867,	// (0x0001aff5) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0002628e) cell_imed_line_width_pane_g

0xd25e,	// (0x000239ec) main_vded2_pane_g1_ParamLimits

0xd25e,	// (0x000239ec) main_vded2_pane_g1

0xd26d,	// (0x000239fb) main_vded2_pane_g2_ParamLimits

0xd26d,	// (0x000239fb) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00026293) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00026293) main_vded2_pane_g

0xd27b,	// (0x00023a09) vded2_slider_pane_ParamLimits

0xd27b,	// (0x00023a09) vded2_slider_pane

0xd288,	// (0x00023a16) aid_size_touch_vded2_end

0xd292,	// (0x00023a20) aid_size_touch_vded2_playhead

0x486f,	// (0x0001affd) aid_size_touch_vded2_start

0x4877,	// (0x0001b005) vded2_slider_bg_pane

0x4880,	// (0x0001b00e) vded2_slider_pane_g1

0x4889,	// (0x0001b017) vded2_slider_pane_g2

0xd29a,	// (0x00023a28) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00026298) vded2_slider_pane_g

0x3a05,	// (0x0001a193) vded2_slider_bg_pane_g1

0x3a0e,	// (0x0001a19c) vded2_slider_bg_pane_g2

0x3a17,	// (0x0001a1a5) vded2_slider_bg_pane_g3

0x0002,

0xf7d6,	// (0x00025f64) vded2_slider_bg_pane_g

0xa9b6,	// (0x00021144) aid_postcard_touch_down_pane_ParamLimits

0xa9b6,	// (0x00021144) aid_postcard_touch_down_pane

0xa9c6,	// (0x00021154) aid_postcard_touch_up_pane_ParamLimits

0xa9c6,	// (0x00021154) aid_postcard_touch_up_pane

0x0478,	// (0x00016c06) main_blid2_pane

0x2e11,	// (0x0001959f) popup_blid2_search_window

0x0478,	// (0x00016c06) blid2_gps_pane

0x0478,	// (0x00016c06) blid2_navig_pane

0x0478,	// (0x00016c06) blid2_search_pane

0x0478,	// (0x00016c06) blid2_tripm_pane

0xd2a3,	// (0x00023a31) blid2_search_pane_g1_ParamLimits

0xd2a3,	// (0x00023a31) blid2_search_pane_g1

0xd2b3,	// (0x00023a41) blid2_search_pane_t1_ParamLimits

0xd2b3,	// (0x00023a41) blid2_search_pane_t1

0xd2c5,	// (0x00023a53) aid_size_cell_blid2_gps_ParamLimits

0xd2c5,	// (0x00023a53) aid_size_cell_blid2_gps

0xd2d5,	// (0x00023a63) blid2_gps_pane_g1_ParamLimits

0xd2d5,	// (0x00023a63) blid2_gps_pane_g1

0xd2e1,	// (0x00023a6f) grid_blid2_satellite_pane_ParamLimits

0xd2e1,	// (0x00023a6f) grid_blid2_satellite_pane

0xd2ef,	// (0x00023a7d) blid2_navig_pane_g1_ParamLimits

0xd2ef,	// (0x00023a7d) blid2_navig_pane_g1

0xd2fb,	// (0x00023a89) blid2_navig_pane_t1_ParamLimits

0xd2fb,	// (0x00023a89) blid2_navig_pane_t1

0xd30d,	// (0x00023a9b) blid2_navig_pane_t2_ParamLimits

0xd30d,	// (0x00023a9b) blid2_navig_pane_t2

0x0001,

0xfb11,	// (0x0002629f) blid2_navig_pane_t_ParamLimits

0xfb11,	// (0x0002629f) blid2_navig_pane_t

0xd31f,	// (0x00023aad) blid2_navig_ring_pane_ParamLimits

0xd31f,	// (0x00023aad) blid2_navig_ring_pane

0xd32f,	// (0x00023abd) blid2_speed_pane_ParamLimits

0xd32f,	// (0x00023abd) blid2_speed_pane

0xd33b,	// (0x00023ac9) blid2_tripm_pane_g1_ParamLimits

0xd33b,	// (0x00023ac9) blid2_tripm_pane_g1

0xd34b,	// (0x00023ad9) blid2_tripm_pane_g2_ParamLimits

0xd34b,	// (0x00023ad9) blid2_tripm_pane_g2

0xd357,	// (0x00023ae5) blid2_tripm_pane_g3_ParamLimits

0xd357,	// (0x00023ae5) blid2_tripm_pane_g3

0xd363,	// (0x00023af1) blid2_tripm_pane_g4_ParamLimits

0xd363,	// (0x00023af1) blid2_tripm_pane_g4

0xd36f,	// (0x00023afd) blid2_tripm_pane_g5_ParamLimits

0xd36f,	// (0x00023afd) blid2_tripm_pane_g5

0x0005,

0xfb16,	// (0x000262a4) blid2_tripm_pane_g_ParamLimits

0xfb16,	// (0x000262a4) blid2_tripm_pane_g

0xd38b,	// (0x00023b19) blid2_tripm_pane_t1_ParamLimits

0xd38b,	// (0x00023b19) blid2_tripm_pane_t1

0xd39f,	// (0x00023b2d) blid2_tripm_pane_t2_ParamLimits

0xd39f,	// (0x00023b2d) blid2_tripm_pane_t2

0xd3b1,	// (0x00023b3f) blid2_tripm_pane_t3_ParamLimits

0xd3b1,	// (0x00023b3f) blid2_tripm_pane_t3

0x0003,

0xfb23,	// (0x000262b1) blid2_tripm_pane_t_ParamLimits

0xfb23,	// (0x000262b1) blid2_tripm_pane_t

0xd3e3,	// (0x00023b71) cell_blid2_satellite_pane_ParamLimits

0xd3e3,	// (0x00023b71) cell_blid2_satellite_pane

0xd401,	// (0x00023b8f) cell_blid2_satellite_pane_g1

0x4891,	// (0x0001b01f) cell_blid2_satellite_pane_t1

0x3338,	// (0x00019ac6) blid2_speed_pane_g1

0x489f,	// (0x0001b02d) blid2_speed_pane_t1

0x48ad,	// (0x0001b03b) blid2_speed_pane_t2

0x0001,

0xfb2c,	// (0x000262ba) blid2_speed_pane_t

0x3338,	// (0x00019ac6) blid2_navig_ring_pane_g1

0xd40a,	// (0x00023b98) blid2_navig_ring_pane_g2

0xd412,	// (0x00023ba0) blid2_navig_ring_pane_g3

0xd41a,	// (0x00023ba8) blid2_navig_ring_pane_g4

0xd422,	// (0x00023bb0) blid2_navig_ring_pane_g5

0x0004,

0xfb31,	// (0x000262bf) blid2_navig_ring_pane_g

0x0478,	// (0x00016c06) bg_popup_window_pane_cp011

0x48bb,	// (0x0001b049) popup_blid2_search_window_g1

0x48c3,	// (0x0001b051) popup_blid2_search_window_t1

0x48d1,	// (0x0001b05f) popup_blid2_search_window_t2

0x0001,

0xfb3c,	// (0x000262ca) popup_blid2_search_window_t

0x10ff,	// (0x0001788d) main_browser_pane_g1

0x0c52,	// (0x000173e0) main_browser_pane_ParamLimits

0x7e7f,	// (0x0001e60d) bg_button_pane_cp011_ParamLimits

0x81cb,	// (0x0001e959) cell_vitu2_function_pane_g1_ParamLimits

0x04e9,	// (0x00016c77) bg_popup_sub_pane_cp22_ParamLimits

0xce7e,	// (0x0002360c) input_focus_pane_cp08_ParamLimits

0xce8b,	// (0x00023619) popup_vitu2_query_button_pane_ParamLimits

0xce8b,	// (0x00023619) popup_vitu2_query_button_pane

0xce60,	// (0x000235ee) popup_vitu2_query_input_button_pane

0x43e4,	// (0x0001ab72) popup_vitu2_query_window_g1_ParamLimits

0xce9c,	// (0x0002362a) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x000261d8) popup_vitu2_query_window_g_ParamLimits

0x0478,	// (0x00016c06) bg_button_pane_cp026

0xd42a,	// (0x00023bb8) popup_vitu2_query_input_button_pane_g1

0x0478,	// (0x00016c06) bg_button_pane_cp025

0x48df,	// (0x0001b06d) popup_vitu2_query_button_pane_t1

0xb84f,	// (0x00021fdd) main_mp3_pane_t6

0xb85f,	// (0x00021fed) popup_slider_window_cp01

0x7d9e,	// (0x0001e52c) cam4_battery_pane

0x7e8d,	// (0x0001e61b) cam4_battery_pane_cp02

0x8371,	// (0x0001eaff) cam4_battery_pane_cp01

0x837b,	// (0x0001eb09) cam4_battery_pane_cp03

0x48ed,	// (0x0001b07b) cam4_battery_pane_g1

0x3338,	// (0x00019ac6) cam4_battery_pane_g2

0x0001,

0xfb41,	// (0x000262cf) cam4_battery_pane_g

0x31fe,	// (0x0001998c) popup_blid_sat_info2_window_t11

0xa2bc,	// (0x00020a4a) aid_size_touch_mv_arrow_left_ParamLimits

0xa2e7,	// (0x00020a75) aid_size_touch_mv_arrow_right_ParamLimits

0x18f6,	// (0x00018084) navi_pane_g1_ParamLimits

0xa310,	// (0x00020a9e) navi_pane_g2_ParamLimits

0xa33e,	// (0x00020acc) navi_pane_g3_ParamLimits

0xf418,	// (0x00025ba6) navi_pane_g_ParamLimits

0xa398,	// (0x00020b26) navi_pane_mv_t1_ParamLimits

0xc26c,	// (0x000229fa) grid_imed_effect_pane_ParamLimits

0x1044,	// (0x000177d2) aid_placing_vt_slider_lsc

0x104c,	// (0x000177da) aid_placing_vt_slider_prt

0x04e9,	// (0x00016c77) bg_tb_trans_pane_cp01_ParamLimits

0x3488,	// (0x00019c16) popup_image_details_window_g1_ParamLimits

0x349b,	// (0x00019c29) popup_image_details_window_g2_ParamLimits

0x34b0,	// (0x00019c3e) popup_image_details_window_g3_ParamLimits

0x34b0,	// (0x00019c3e) popup_image_details_window_g3

0xf74b,	// (0x00025ed9) popup_image_details_window_g_ParamLimits

0x34c4,	// (0x00019c52) popup_image_details_window_t1_ParamLimits

0x34d6,	// (0x00019c64) popup_image_details_window_t2_ParamLimits

0x34ef,	// (0x00019c7d) popup_image_details_window_t3_ParamLimits

0x3503,	// (0x00019c91) popup_image_details_window_t4_ParamLimits

0x351e,	// (0x00019cac) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00025ee0) popup_image_details_window_t_ParamLimits

0xd17b,	// (0x00023909) cl_header_name_pane_ParamLimits

0xd17b,	// (0x00023909) cl_header_name_pane

0xd432,	// (0x00023bc0) cl_header_name_pane_t1_ParamLimits

0xd432,	// (0x00023bc0) cl_header_name_pane_t1

0xd449,	// (0x00023bd7) cl_header_name_pane_t2_ParamLimits

0xd449,	// (0x00023bd7) cl_header_name_pane_t2

0xd473,	// (0x00023c01) cl_header_name_pane_t3_ParamLimits

0xd473,	// (0x00023c01) cl_header_name_pane_t3

0x0002,

0xfb46,	// (0x000262d4) cl_header_name_pane_t_ParamLimits

0xfb46,	// (0x000262d4) cl_header_name_pane_t

0xa369,	// (0x00020af7) navi_pane_mv_g2_ParamLimits

0x4087,	// (0x0001a815) field_vitu2_entry_pane_g1_ParamLimits

0x4093,	// (0x0001a821) field_vitu2_entry_pane_g2_ParamLimits

0x409f,	// (0x0001a82d) field_vitu2_entry_pane_g3_ParamLimits

0x409f,	// (0x0001a82d) field_vitu2_entry_pane_g3

0xf949,	// (0x000260d7) field_vitu2_entry_pane_g_ParamLimits

0x80a0,	// (0x0001e82e) cell_vitu2_itu_pane_g1_ParamLimits

0x80b0,	// (0x0001e83e) cell_vitu2_itu_pane_g2_ParamLimits

0x80b0,	// (0x0001e83e) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x000260e3) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x000260e3) cell_vitu2_itu_pane_g

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp05_ParamLimits

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp05

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp03

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp04

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp10_ParamLimits

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp10

0xd11d,	// (0x000238ab) bg_vkb2_func_pane_cp08

0xd103,	// (0x00023891) bg_vkb2_func_pane_cp06

0xd111,	// (0x0002389f) bg_vkb2_func_pane_cp07

0x47fe,	// (0x0001af8c) bg_vkb2_func_pane_cp11_ParamLimits

0x47fe,	// (0x0001af8c) bg_vkb2_func_pane_cp11

0x4813,	// (0x0001afa1) bg_vkb2_func_pane_cp12_ParamLimits

0x4813,	// (0x0001afa1) bg_vkb2_func_pane_cp12

0x0478,	// (0x00016c06) bg_vkb2_func_pane_cp09

0x40dc,	// (0x0001a86a) bg_vkb2_func_pane_g1

0x1210,	// (0x0001799e) bg_vkb2_func_pane_g2

0x40e4,	// (0x0001a872) bg_vkb2_func_pane_g3

0x40ec,	// (0x0001a87a) bg_vkb2_func_pane_g4

0x436f,	// (0x0001aafd) bg_vkb2_func_pane_g5

0x4104,	// (0x0001a892) bg_vkb2_func_pane_g6

0x410c,	// (0x0001a89a) bg_vkb2_func_pane_g7

0x40fc,	// (0x0001a88a) bg_vkb2_func_pane_g8

0x11f0,	// (0x0001797e) bg_vkb2_func_pane_g9

0x0008,

0xfb4d,	// (0x000262db) bg_vkb2_func_pane_g

0xd37d,	// (0x00023b0b) blid2_tripm_pane_g6_ParamLimits

0xd37d,	// (0x00023b0b) blid2_tripm_pane_g6

0x3e58,	// (0x0001a5e6) mp4_progress_pane_g1

0xd3d7,	// (0x00023b65) blid2_tripm_values_pane_ParamLimits

0xd3d7,	// (0x00023b65) blid2_tripm_values_pane

0xd498,	// (0x00023c26) blid2_tripm_values_pane_t1

0xd4a6,	// (0x00023c34) blid2_tripm_values_pane_t2

0xd4b4,	// (0x00023c42) blid2_tripm_values_pane_t3

0xd4c2,	// (0x00023c50) blid2_tripm_values_pane_t4

0xd4d0,	// (0x00023c5e) blid2_tripm_values_pane_t5

0xd4de,	// (0x00023c6c) blid2_tripm_values_pane_t6

0xd4ec,	// (0x00023c7a) blid2_tripm_values_pane_t7

0xd4fa,	// (0x00023c88) blid2_tripm_values_pane_t8

0xd508,	// (0x00023c96) blid2_tripm_values_pane_t9

0x0008,

0xfb60,	// (0x000262ee) blid2_tripm_values_pane_t

0x91b7,	// (0x0001f945) call_video_pane_t1_ParamLimits

0x91cd,	// (0x0001f95b) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00025a2f) call_video_pane_t_ParamLimits

0xa8e9,	// (0x00021077) msg_header_pane_g1_ParamLimits

0x1b33,	// (0x000182c1) msg_header_pane_g2_ParamLimits

0x1b33,	// (0x000182c1) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00025c49) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00025c49) msg_header_pane_g

0x0c52,	// (0x000173e0) main_clock2_pane_ParamLimits

0xc067,	// (0x000227f5) grid_clock2_toolbar_pane_ParamLimits

0xc067,	// (0x000227f5) grid_clock2_toolbar_pane

0xc067,	// (0x000227f5) listscroll_clock2_pane_ParamLimits

0xc067,	// (0x000227f5) listscroll_clock2_pane

0xc11b,	// (0x000228a9) main_clock2_pane_t3_ParamLimits

0xc11b,	// (0x000228a9) main_clock2_pane_t3

0xc12d,	// (0x000228bb) main_clock2_pane_t4_ParamLimits

0xc12d,	// (0x000228bb) main_clock2_pane_t4

0x48f7,	// (0x0001b085) cell_clock2_toolbar_pane

0x48ff,	// (0x0001b08d) cell_clock2_toolbar_pane_cp01

0x48ff,	// (0x0001b08d) cell_clock2_toolbar_pane_cp02

0x4907,	// (0x0001b095) cell_clock2_toolbar_pane_cp03

0x490f,	// (0x0001b09d) list_clock2_pane

0x185c,	// (0x00017fea) scroll_pane_cp10

0x4917,	// (0x0001b0a5) list_single_clock2_pane_ParamLimits

0x4917,	// (0x0001b0a5) list_single_clock2_pane

0x1996,	// (0x00018124) list_highlight_pane_cp08

0x4924,	// (0x0001b0b2) list_single_clock2_pane_t1

0x4932,	// (0x0001b0c0) list_single_clock2_pane_t2

0x0001,

0xfb73,	// (0x00026301) list_single_clock2_pane_t

0x0478,	// (0x00016c06) bg_button_pane_cp10

0x4940,	// (0x0001b0ce) cell_clock2_toolbar_pane_g1

0x747f,	// (0x0001dc0d) aid_main_viewer_pane_g1_ParamLimits

0x747f,	// (0x0001dc0d) aid_main_viewer_pane_g1

0x748b,	// (0x0001dc19) aid_main_viewer_pane_g2_ParamLimits

0x748b,	// (0x0001dc19) aid_main_viewer_pane_g2

0xa972,	// (0x00021100) aid_main_viewer_pane_g3_ParamLimits

0xa972,	// (0x00021100) aid_main_viewer_pane_g3

0xa983,	// (0x00021111) aid_main_viewer_pane_g4_ParamLimits

0xa983,	// (0x00021111) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00025c5a) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00025c5a) aid_main_viewer_pane_g

0xb0d1,	// (0x0002185f) main_calc_pane_ParamLimits

0xb0de,	// (0x0002186c) main_dialer2_pane_ParamLimits

0x0478,	// (0x00016c06) main_cam6_pane

0x0478,	// (0x00016c06) main_vid6_pane

0xc073,	// (0x00022801) listscroll_gen_pane_cp06_ParamLimits

0xc073,	// (0x00022801) listscroll_gen_pane_cp06

0xc13f,	// (0x000228cd) main_clock2_pane_t5_ParamLimits

0xc13f,	// (0x000228cd) main_clock2_pane_t5

0xc18e,	// (0x0002291c) aid_call2_pane_cp10_ParamLimits

0xc1a0,	// (0x0002292e) aid_call_pane_cp10_ParamLimits

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g1_ParamLimits

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc1b2,	// (0x00022940) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc1b2,	// (0x00022940) popup_clock_analogue_window_cp10_g4_ParamLimits

0x18cb,	// (0x00018059) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00025f90) popup_clock_analogue_window_cp10_g_ParamLimits

0xc1c4,	// (0x00022952) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc5d0,	// (0x00022d5e) cell_dialer2_keypad_pane_g2_ParamLimits

0xc5d0,	// (0x00022d5e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00026076) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00026076) cell_dialer2_keypad_pane_g

0xc5ec,	// (0x00022d7a) cell_dialer2_keypad_pane_t1

0xca2b,	// (0x000231b9) main_cset_text2_pane_ParamLimits

0xca2b,	// (0x000231b9) main_cset_text2_pane

0x45d0,	// (0x0001ad5e) area_vitu2_query_pane_g1_ParamLimits

0xd0a2,	// (0x00023830) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00026225) area_vitu2_query_pane_g_ParamLimits

0x4654,	// (0x0001ade2) area_vitu2_query_pane_t7_ParamLimits

0x4654,	// (0x0001ade2) area_vitu2_query_pane_t7

0xd103,	// (0x00023891) bg_button_pane_cp018_ParamLimits

0xd111,	// (0x0002389f) bg_button_pane_cp021_ParamLimits

0xd11d,	// (0x000238ab) bg_button_pane_cp022_ParamLimits

0xd11d,	// (0x000238ab) bg_vkb2_func_pane_cp08_ParamLimits

0xd103,	// (0x00023891) bg_vkb2_func_pane_cp06_ParamLimits

0xd111,	// (0x0002389f) bg_vkb2_func_pane_cp07_ParamLimits

0xd12e,	// (0x000238bc) input_focus_pane_cp09_ParamLimits

0x841b,	// (0x0001eba9) cam6_autofocus_pane_ParamLimits

0x841b,	// (0x0001eba9) cam6_autofocus_pane

0x843d,	// (0x0001ebcb) cam6_image_uncrop_pane_ParamLimits

0x843d,	// (0x0001ebcb) cam6_image_uncrop_pane

0x846a,	// (0x0001ebf8) cam6_indi_pane_ParamLimits

0x846a,	// (0x0001ebf8) cam6_indi_pane

0x8484,	// (0x0001ec12) cam6_mode_pane_ParamLimits

0x8484,	// (0x0001ec12) cam6_mode_pane

0x8498,	// (0x0001ec26) cam6_timer_pane_ParamLimits

0x8498,	// (0x0001ec26) cam6_timer_pane

0x84a4,	// (0x0001ec32) cam6_zoom_pane_ParamLimits

0x84a4,	// (0x0001ec32) cam6_zoom_pane

0xd516,	// (0x00023ca4) cam6_mode_pane_g1_ParamLimits

0xd516,	// (0x00023ca4) cam6_mode_pane_g1

0xd522,	// (0x00023cb0) cam6_mode_pane_g2_ParamLimits

0xd522,	// (0x00023cb0) cam6_mode_pane_g2

0xd52e,	// (0x00023cbc) cam6_mode_pane_g3_ParamLimits

0xd52e,	// (0x00023cbc) cam6_mode_pane_g3

0xd53a,	// (0x00023cc8) cam6_mode_pane_g4_ParamLimits

0xd53a,	// (0x00023cc8) cam6_mode_pane_g4

0x0003,

0xfb78,	// (0x00026306) cam6_mode_pane_g_ParamLimits

0xfb78,	// (0x00026306) cam6_mode_pane_g

0x4956,	// (0x0001b0e4) bg_tb_trans_pane_cp08_ParamLimits

0x4956,	// (0x0001b0e4) bg_tb_trans_pane_cp08

0x4964,	// (0x0001b0f2) cam6_battery_pane_ParamLimits

0x4964,	// (0x0001b0f2) cam6_battery_pane

0x497a,	// (0x0001b108) cam6_indi_pane_g1_ParamLimits

0x497a,	// (0x0001b108) cam6_indi_pane_g1

0x498c,	// (0x0001b11a) cam6_indi_pane_g2_ParamLimits

0x498c,	// (0x0001b11a) cam6_indi_pane_g2

0x499e,	// (0x0001b12c) cam6_indi_pane_g3_ParamLimits

0x499e,	// (0x0001b12c) cam6_indi_pane_g3

0x0002,

0xfb81,	// (0x0002630f) cam6_indi_pane_g_ParamLimits

0xfb81,	// (0x0002630f) cam6_indi_pane_g

0x49b0,	// (0x0001b13e) cam6_indi_pane_t1_ParamLimits

0x49b0,	// (0x0001b13e) cam6_indi_pane_t1

0xc72f,	// (0x00022ebd) cam6_autofocus_pane_g1

0xc727,	// (0x00022eb5) cam6_autofocus_pane_g2

0xc73f,	// (0x00022ecd) cam6_autofocus_pane_g3

0xc737,	// (0x00022ec5) cam6_autofocus_pane_g4

0x0003,

0xfb88,	// (0x00026316) cam6_autofocus_pane_g

0x49d6,	// (0x0001b164) cam6_timer_pane_g1

0x49de,	// (0x0001b16c) cam6_timer_pane_t1

0x49ec,	// (0x0001b17a) cam6_zoom_cont_pane

0x49f4,	// (0x0001b182) cam6_zoom_pane_g1

0x49fc,	// (0x0001b18a) cam6_zoom_pane_g2

0xd546,	// (0x00023cd4) cam6_zoom_pane_g3

0x0002,

0xfb91,	// (0x0002631f) cam6_zoom_pane_g

0x3338,	// (0x00019ac6) cam6_battery_pane_g1

0x3338,	// (0x00019ac6) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00025e9d) cam6_battery_pane_g

0x4a04,	// (0x0001b192) cam6_zoom_cont_pane_g1

0x4a0d,	// (0x0001b19b) cam6_zoom_cont_pane_g2

0x4a16,	// (0x0001b1a4) cam6_zoom_cont_pane_g3

0x0002,

0xfb98,	// (0x00026326) cam6_zoom_cont_pane_g

0xd563,	// (0x00023cf1) cam6_mode_pane_cp_ParamLimits

0xd563,	// (0x00023cf1) cam6_mode_pane_cp

0xd577,	// (0x00023d05) cam6_zoom_pane_cp_ParamLimits

0xd577,	// (0x00023d05) cam6_zoom_pane_cp

0xd595,	// (0x00023d23) vid6_image_uncrop_cif_pane_ParamLimits

0xd595,	// (0x00023d23) vid6_image_uncrop_cif_pane

0xd5c1,	// (0x00023d4f) vid6_image_uncrop_nhd_pane_ParamLimits

0xd5c1,	// (0x00023d4f) vid6_image_uncrop_nhd_pane

0xd5e0,	// (0x00023d6e) vid6_image_uncrop_vga_pane_ParamLimits

0xd5e0,	// (0x00023d6e) vid6_image_uncrop_vga_pane

0xd5ff,	// (0x00023d8d) vid6_image_uncrop_wvga_pane_ParamLimits

0xd5ff,	// (0x00023d8d) vid6_image_uncrop_wvga_pane

0xd61e,	// (0x00023dac) vid6_indi_pane_ParamLimits

0xd61e,	// (0x00023dac) vid6_indi_pane

0x4956,	// (0x0001b0e4) bg_tb_trans_pane_cp09_ParamLimits

0x4956,	// (0x0001b0e4) bg_tb_trans_pane_cp09

0x4a2e,	// (0x0001b1bc) cam6_battery_pane_cp_ParamLimits

0x4a2e,	// (0x0001b1bc) cam6_battery_pane_cp

0x4a3a,	// (0x0001b1c8) vid6_indi_pane_g1_ParamLimits

0x4a3a,	// (0x0001b1c8) vid6_indi_pane_g1

0x4a4c,	// (0x0001b1da) vid6_indi_pane_g2_ParamLimits

0x4a4c,	// (0x0001b1da) vid6_indi_pane_g2

0x4a5e,	// (0x0001b1ec) vid6_indi_pane_g3_ParamLimits

0x4a5e,	// (0x0001b1ec) vid6_indi_pane_g3

0x4a75,	// (0x0001b203) vid6_indi_pane_g4_ParamLimits

0x4a75,	// (0x0001b203) vid6_indi_pane_g4

0x4a8c,	// (0x0001b21a) vid6_indi_pane_g5_ParamLimits

0x4a8c,	// (0x0001b21a) vid6_indi_pane_g5

0x0004,

0xfb9f,	// (0x0002632d) vid6_indi_pane_g_ParamLimits

0xfb9f,	// (0x0002632d) vid6_indi_pane_g

0x4aa6,	// (0x0001b234) vid6_indi_pane_t1_ParamLimits

0x4aa6,	// (0x0001b234) vid6_indi_pane_t1

0x4abc,	// (0x0001b24a) vid6_indi_pane_t2_ParamLimits

0x4abc,	// (0x0001b24a) vid6_indi_pane_t2

0x4ae4,	// (0x0001b272) vid6_indi_pane_t3_ParamLimits

0x4ae4,	// (0x0001b272) vid6_indi_pane_t3

0x4b0c,	// (0x0001b29a) vid6_indi_pane_t4_ParamLimits

0x4b0c,	// (0x0001b29a) vid6_indi_pane_t4

0x0003,

0xfbaa,	// (0x00026338) vid6_indi_pane_t_ParamLimits

0xfbaa,	// (0x00026338) vid6_indi_pane_t

0x4b30,	// (0x0001b2be) wait_bar_pane_cp08

0xd643,	// (0x00023dd1) main_cset_text2_pane_t1_ParamLimits

0xd643,	// (0x00023dd1) main_cset_text2_pane_t1

0xd54e,	// (0x00023cdc) listscroll_gen_pane_cp06_t1_ParamLimits

0xd54e,	// (0x00023cdc) listscroll_gen_pane_cp06_t1

0x0478,	// (0x00016c06) main_cam6_set_pane

0x7d90,	// (0x0001e51e) bg_tb_trans_pane_cp06_ParamLimits

0x7da6,	// (0x0001e534) cam4_indicators_pane_g1_ParamLimits

0x7db3,	// (0x0001e541) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x000260b3) cam4_indicators_pane_g_ParamLimits

0x7dd3,	// (0x0001e561) cam4_indicators_pane_t1_ParamLimits

0x7e7f,	// (0x0001e60d) bg_tb_trans_pane_cp07_ParamLimits

0x7da6,	// (0x0001e534) vid4_indicators_pane_g1_ParamLimits

0x7e97,	// (0x0001e625) vid4_indicators_pane_g2_ParamLimits

0x7ea4,	// (0x0001e632) vid4_indicators_pane_g3_ParamLimits

0x7eb5,	// (0x0001e643) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x000260c5) vid4_indicators_pane_g_ParamLimits

0x7ed1,	// (0x0001e65f) vid4_indicators_pane_t1_ParamLimits

0x8383,	// (0x0001eb11) vid4_progress_pane_g1_ParamLimits

0x838f,	// (0x0001eb1d) vid4_progress_pane_g2_ParamLimits

0x839b,	// (0x0001eb29) vid4_progress_pane_g3_ParamLimits

0x83aa,	// (0x0001eb38) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00026270) vid4_progress_pane_g_ParamLimits

0x83c8,	// (0x0001eb56) vid4_progress_pane_t1_ParamLimits

0x83de,	// (0x0001eb6c) vid4_progress_pane_t2_ParamLimits

0x83f4,	// (0x0001eb82) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0002627b) vid4_progress_pane_t_ParamLimits

0x8409,	// (0x0001eb97) wait_bar_pane_cp07_ParamLimits

0xd66a,	// (0x00023df8) main_cam6_set_pane_g2_ParamLimits

0xd66a,	// (0x00023df8) main_cam6_set_pane_g2

0xd676,	// (0x00023e04) main_cset6_listscroll_pane_ParamLimits

0xd676,	// (0x00023e04) main_cset6_listscroll_pane

0xd6a3,	// (0x00023e31) main_cset6_slider_pane_ParamLimits

0xd6a3,	// (0x00023e31) main_cset6_slider_pane

0xd6af,	// (0x00023e3d) main_cset6_text2_pane_ParamLimits

0xd6af,	// (0x00023e3d) main_cset6_text2_pane

0x4b3f,	// (0x0001b2cd) main_cset6_text_pane

0x4b47,	// (0x0001b2d5) main_cset_list_pane_copy1_ParamLimits

0x4b47,	// (0x0001b2d5) main_cset_list_pane_copy1

0x4b57,	// (0x0001b2e5) scroll_pane_cp028_copy1

0xd6c2,	// (0x00023e50) cset_list_set_pane_copy1

0xd6d2,	// (0x00023e60) aid_position_infowindow_above_copy1

0xd6da,	// (0x00023e68) aid_position_infowindow_below_copy1

0xd6e2,	// (0x00023e70) cset_list_set_pane_g1_copy1

0xd6ea,	// (0x00023e78) cset_list_set_pane_g3_copy1_ParamLimits

0xd6ea,	// (0x00023e78) cset_list_set_pane_g3_copy1

0xd6f9,	// (0x00023e87) cset_list_set_pane_t1_copy1_ParamLimits

0xd6f9,	// (0x00023e87) cset_list_set_pane_t1_copy1

0x04e9,	// (0x00016c77) list_highlight_pane_cp021_copy1_ParamLimits

0x04e9,	// (0x00016c77) list_highlight_pane_cp021_copy1

0x4b84,	// (0x0001b312) cset6_slider_pane_ParamLimits

0x4b84,	// (0x0001b312) cset6_slider_pane

0x4bb0,	// (0x0001b33e) main_cset6_slider_pane_g1_ParamLimits

0x4bb0,	// (0x0001b33e) main_cset6_slider_pane_g1

0xd70e,	// (0x00023e9c) main_cset6_slider_pane_g2_ParamLimits

0xd70e,	// (0x00023e9c) main_cset6_slider_pane_g2

0x4bd8,	// (0x0001b366) main_cset6_slider_pane_g3_ParamLimits

0x4bd8,	// (0x0001b366) main_cset6_slider_pane_g3

0xd736,	// (0x00023ec4) main_cset6_slider_pane_g4_ParamLimits

0xd736,	// (0x00023ec4) main_cset6_slider_pane_g4

0xd742,	// (0x00023ed0) main_cset6_slider_pane_g5_ParamLimits

0xd742,	// (0x00023ed0) main_cset6_slider_pane_g5

0x420f,	// (0x0001a99d) main_cset6_slider_pane_g7_ParamLimits

0x420f,	// (0x0001a99d) main_cset6_slider_pane_g7

0x421b,	// (0x0001a9a9) main_cset6_slider_pane_g8_ParamLimits

0x421b,	// (0x0001a9a9) main_cset6_slider_pane_g8

0xd74e,	// (0x00023edc) main_cset6_slider_pane_g9_ParamLimits

0xd74e,	// (0x00023edc) main_cset6_slider_pane_g9

0xd75a,	// (0x00023ee8) main_cset6_slider_pane_g10_ParamLimits

0xd75a,	// (0x00023ee8) main_cset6_slider_pane_g10

0xd766,	// (0x00023ef4) main_cset6_slider_pane_g11_ParamLimits

0xd766,	// (0x00023ef4) main_cset6_slider_pane_g11

0xd772,	// (0x00023f00) main_cset6_slider_pane_g12_ParamLimits

0xd772,	// (0x00023f00) main_cset6_slider_pane_g12

0xd77e,	// (0x00023f0c) main_cset6_slider_pane_g13_ParamLimits

0xd77e,	// (0x00023f0c) main_cset6_slider_pane_g13

0xd78a,	// (0x00023f18) main_cset6_slider_pane_g14_ParamLimits

0xd78a,	// (0x00023f18) main_cset6_slider_pane_g14

0xd796,	// (0x00023f24) main_cset6_slider_pane_g15_ParamLimits

0xd796,	// (0x00023f24) main_cset6_slider_pane_g15

0xd7ae,	// (0x00023f3c) main_cset6_slider_pane_g16_ParamLimits

0xd7ae,	// (0x00023f3c) main_cset6_slider_pane_g16

0xd7ba,	// (0x00023f48) main_cset6_slider_pane_g17_ParamLimits

0xd7ba,	// (0x00023f48) main_cset6_slider_pane_g17

0x0011,

0xfbb3,	// (0x00026341) main_cset6_slider_pane_g_ParamLimits

0xfbb3,	// (0x00026341) main_cset6_slider_pane_g

0x4be4,	// (0x0001b372) main_cset6_slider_pane_t1_ParamLimits

0x4be4,	// (0x0001b372) main_cset6_slider_pane_t1

0xd7de,	// (0x00023f6c) main_cset6_slider_pane_t2_ParamLimits

0xd7de,	// (0x00023f6c) main_cset6_slider_pane_t2

0xd809,	// (0x00023f97) main_cset6_slider_pane_t3_ParamLimits

0xd809,	// (0x00023f97) main_cset6_slider_pane_t3

0xd834,	// (0x00023fc2) main_cset6_slider_pane_t4_ParamLimits

0xd834,	// (0x00023fc2) main_cset6_slider_pane_t4

0xd85f,	// (0x00023fed) main_cset6_slider_pane_t5_ParamLimits

0xd85f,	// (0x00023fed) main_cset6_slider_pane_t5

0x4c25,	// (0x0001b3b3) main_cset6_slider_pane_t7_ParamLimits

0x4c25,	// (0x0001b3b3) main_cset6_slider_pane_t7

0xd88a,	// (0x00024018) main_cset6_slider_pane_t8_ParamLimits

0xd88a,	// (0x00024018) main_cset6_slider_pane_t8

0xd8ae,	// (0x0002403c) main_cset6_slider_pane_t9_ParamLimits

0xd8ae,	// (0x0002403c) main_cset6_slider_pane_t9

0xd8d2,	// (0x00024060) main_cset6_slider_pane_t10_ParamLimits

0xd8d2,	// (0x00024060) main_cset6_slider_pane_t10

0xd8f6,	// (0x00024084) main_cset6_slider_pane_t11_ParamLimits

0xd8f6,	// (0x00024084) main_cset6_slider_pane_t11

0x4c5b,	// (0x0001b3e9) main_cset6_slider_pane_t14_ParamLimits

0x4c5b,	// (0x0001b3e9) main_cset6_slider_pane_t14

0x4c94,	// (0x0001b422) main_cset6_slider_pane_t15_ParamLimits

0x4c94,	// (0x0001b422) main_cset6_slider_pane_t15

0x000b,

0xfbd8,	// (0x00026366) main_cset6_slider_pane_t_ParamLimits

0xfbd8,	// (0x00026366) main_cset6_slider_pane_t

0x42ff,	// (0x0001aa8d) cset_slider_pane_g1_copy1

0x4308,	// (0x0001aa96) cset_slider_pane_g2_copy1

0x4311,	// (0x0001aa9f) cset_slider_pane_g3_copy1

0x0478,	// (0x00016c06) bg_popup_sub_pane_cp011_copy1

0x43f0,	// (0x0001ab7e) main_cset_text_pane_g1_copy1

0x43f8,	// (0x0001ab86) main_cset_text_pane_t1_copy1

0x4406,	// (0x0001ab94) main_cset_text_pane_t2_copy1

0x4414,	// (0x0001aba2) main_cset_text_pane_t3_copy1

0x4422,	// (0x0001abb0) main_cset_text_pane_t4_copy1

0x4430,	// (0x0001abbe) main_cset_text_pane_t5_copy1

0x443e,	// (0x0001abcc) main_cset_text_pane_t6_copy1

0x444c,	// (0x0001abda) main_cset_text_pane_t7_copy1

0xd91a,	// (0x000240a8) main_cset_text2_pane_t1_copy1

0x0478,	// (0x00016c06) main_ncimui_pane

0xb123,	// (0x000218b1) popup_query_ncimui_window_ParamLimits

0xb123,	// (0x000218b1) popup_query_ncimui_window

0x3609,	// (0x00019d97) field_cale_ev2_pane_g4_ParamLimits

0x3609,	// (0x00019d97) field_cale_ev2_pane_g4

0xc570,	// (0x00022cfe) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc570,	// (0x00022cfe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00026051) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00026051) cell_video_dialer_keypad_pane_g

0xc588,	// (0x00022d16) cell_video_dialer_keypad_pane_t1

0x0478,	// (0x00016c06) bg_popup_window_pane_cp012

0x1748,	// (0x00017ed6) heading_pane_cp06

0x4dbc,	// (0x0001b54a) ncim_query_content_pane

0x0478,	// (0x00016c06) bg_popup_heading_pane_cp01

0x4dc4,	// (0x0001b552) ncim_heading_pane_t1

0x4dd2,	// (0x0001b560) ncim_indicator_popup_pane

0x4de4,	// (0x0001b572) ncim_query_button_pane

0x4dfa,	// (0x0001b588) ncim_query_content_pane_t1

0x4e0c,	// (0x0001b59a) ncim_query_content_pane_t2

0x0005,

0xfc17,	// (0x000263a5) ncim_query_content_pane_t

0x4e46,	// (0x0001b5d4) ncim_query_list_pane

0x4e58,	// (0x0001b5e6) ncim_query_popup_pane

0x4dd2,	// (0x0001b560) ncim_indicator_popup_pane_ParamLimits

0xda0f,	// (0x0002419d) ncim_query_content_pane_g1_ParamLimits

0xda0f,	// (0x0002419d) ncim_query_content_pane_g1

0x4dfa,	// (0x0001b588) ncim_query_content_pane_t1_ParamLimits

0x4e0c,	// (0x0001b59a) ncim_query_content_pane_t2_ParamLimits

0xda1b,	// (0x000241a9) ncim_query_content_pane_t3_ParamLimits

0xda1b,	// (0x000241a9) ncim_query_content_pane_t3

0xda38,	// (0x000241c6) ncim_query_content_pane_t4_ParamLimits

0xda38,	// (0x000241c6) ncim_query_content_pane_t4

0xda55,	// (0x000241e3) ncim_query_content_pane_t5_ParamLimits

0xda55,	// (0x000241e3) ncim_query_content_pane_t5

0x4e1e,	// (0x0001b5ac) ncim_query_content_pane_t6_ParamLimits

0x4e1e,	// (0x0001b5ac) ncim_query_content_pane_t6

0xfc17,	// (0x000263a5) ncim_query_content_pane_t_ParamLimits

0x4e46,	// (0x0001b5d4) ncim_query_list_pane_ParamLimits

0x4e58,	// (0x0001b5e6) ncim_query_popup_pane_ParamLimits

0x4e6c,	// (0x0001b5fa) wait_bar_pane_cp04

0x0478,	// (0x00016c06) input_focus_pane_cp011

0x4e74,	// (0x0001b602) ncim_query_popup_pane_t1

0x4e82,	// (0x0001b610) ncim_list_query_list_pane_ParamLimits

0x4e82,	// (0x0001b610) ncim_list_query_list_pane

0x0478,	// (0x00016c06) bg_button_pane_cp027

0x4e95,	// (0x0001b623) ncim_query_button_pane_g1

0x0478,	// (0x00016c06) list_highlight_pane_cp012

0x4e9f,	// (0x0001b62d) ncim_list_query_list_pane_g1

0x4ea7,	// (0x0001b635) ncim_list_query_list_pane_t1

0x7dc3,	// (0x0001e551) cam4_indicators_pane_g3_ParamLimits

0x7dc3,	// (0x0001e551) cam4_indicators_pane_g3

0x7ec1,	// (0x0001e64f) vid4_indicators_pane_g5_ParamLimits

0x7ec1,	// (0x0001e64f) vid4_indicators_pane_g5

0x83b9,	// (0x0001eb47) vid4_progress_pane_g5_ParamLimits

0x83b9,	// (0x0001eb47) vid4_progress_pane_g5

0xd949,	// (0x000240d7) main_ncimui_pane_g1

0xd993,	// (0x00024121) ncimui_group_query_pane_ParamLimits

0xd993,	// (0x00024121) ncimui_group_query_pane

0xd9d1,	// (0x0002415f) ncimui_list_pane_ParamLimits

0xd9d1,	// (0x0002415f) ncimui_list_pane

0xd9eb,	// (0x00024179) ncimui_text_pane_ParamLimits

0xd9eb,	// (0x00024179) ncimui_text_pane

0xda72,	// (0x00024200) ncimui_text_pane_t1_ParamLimits

0xda72,	// (0x00024200) ncimui_text_pane_t1

0x4eb5,	// (0x0001b643) ncimui_list_single_graphic_pane_ParamLimits

0x4eb5,	// (0x0001b643) ncimui_list_single_graphic_pane

0xda91,	// (0x0002421f) ncimui_query_pane_ParamLimits

0xda91,	// (0x0002421f) ncimui_query_pane

0x0478,	// (0x00016c06) list_highlight_pane_cp013

0x4ec5,	// (0x0001b653) ncim_list_query_list_pane_t1_copy1

0x4e9f,	// (0x0001b62d) ncim_list_single_graphic_pane_g1

0x4ed3,	// (0x0001b661) ncim_query_button_pane_cp01

0x4edb,	// (0x0001b669) ncim_query_entry_pane_ParamLimits

0x4edb,	// (0x0001b669) ncim_query_entry_pane

0x4eeb,	// (0x0001b679) ncimui_query_pane_g1

0x4ef3,	// (0x0001b681) ncimui_query_pane_t1_ParamLimits

0x4ef3,	// (0x0001b681) ncimui_query_pane_t1

0x0478,	// (0x00016c06) input_focus_pane_cp012

0x4e74,	// (0x0001b602) ncim_query_entry_pane_t1

0x0c52,	// (0x000173e0) main_im_pane_ParamLimits

0x04e9,	// (0x00016c77) main_mobtv_pane_ParamLimits

0x04e9,	// (0x00016c77) main_mobtv_pane

0xd7c6,	// (0x00023f54) main_cset6_slider_pane_g18_ParamLimits

0xd7c6,	// (0x00023f54) main_cset6_slider_pane_g18

0xd7d2,	// (0x00023f60) main_cset6_slider_pane_g19_ParamLimits

0xd7d2,	// (0x00023f60) main_cset6_slider_pane_g19

0x409f,	// (0x0001a82d) bg_main_mobtv_pane_ParamLimits

0x409f,	// (0x0001a82d) bg_main_mobtv_pane

0xdaa1,	// (0x0002422f) main_mobtv_info_pane

0xdaac,	// (0x0002423a) main_mobtv_loading_pane_ParamLimits

0xdaac,	// (0x0002423a) main_mobtv_loading_pane

0x4f17,	// (0x0001b6a5) main_mobtv_pg_channel_list_pane

0x4f21,	// (0x0001b6af) main_mobtv_pg_hdr_pane

0xdab9,	// (0x00024247) main_mobtv_programe_curr_pane_ParamLimits

0xdab9,	// (0x00024247) main_mobtv_programe_curr_pane

0xdac6,	// (0x00024254) main_mobtv_programe_next_pane_ParamLimits

0xdac6,	// (0x00024254) main_mobtv_programe_next_pane

0x4f2a,	// (0x0001b6b8) popup_mobtv_noti_window

0x3338,	// (0x00019ac6) main_tv_pg_hdr_pane_g1

0x4f34,	// (0x0001b6c2) main_tv_pg_hdr_pane_g2

0x4f3c,	// (0x0001b6ca) main_tv_pg_hdr_pane_g3

0x4f44,	// (0x0001b6d2) main_tv_pg_hdr_pane_g4

0x4f4c,	// (0x0001b6da) main_tv_pg_hdr_pane_g5

0x4f56,	// (0x0001b6e4) main_tv_pg_hdr_pane_g6

0x4f60,	// (0x0001b6ee) main_tv_pg_hdr_pane_g7

0x4f6a,	// (0x0001b6f8) main_tv_pg_hdr_pane_g8

0x4f74,	// (0x0001b702) main_tv_pg_hdr_pane_g9

0x4f7e,	// (0x0001b70c) main_tv_pg_hdr_pane_g10

0x4f88,	// (0x0001b716) main_tv_pg_hdr_pane_g11

0x000a,

0xfc24,	// (0x000263b2) main_tv_pg_hdr_pane_g

0x4f92,	// (0x0001b720) main_tv_pg_hdr_pane_t1

0x4fa0,	// (0x0001b72e) main_tv_pg_hdr_pane_t2

0x4fae,	// (0x0001b73c) main_tv_pg_hdr_pane_t3

0x4fbe,	// (0x0001b74c) main_tv_pg_hdr_pane_t4

0x4fce,	// (0x0001b75c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc3b,	// (0x000263c9) main_tv_pg_hdr_pane_t

0x4fde,	// (0x0001b76c) single_mobtv_pg_channel_pane_ParamLimits

0x4fde,	// (0x0001b76c) single_mobtv_pg_channel_pane

0x4ff0,	// (0x0001b77e) single_mobtv_pg_channel_table_pane

0x4ff9,	// (0x0001b787) single_mobtv_pg_channel_thumb_pane

0x5002,	// (0x0001b790) single_tv_pg_channel_pane_g1

0x500b,	// (0x0001b799) single_tv_pg_channel_pane_g2

0x0001,

0xfc46,	// (0x000263d4) single_tv_pg_channel_pane_g

0x3568,	// (0x00019cf6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3568,	// (0x00019cf6) bg_single_mobtv_pg_channel_thumb_pane

0x5014,	// (0x0001b7a2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5014,	// (0x0001b7a2) single_mobtv_pg_channel_thumb_pane_g1

0x5022,	// (0x0001b7b0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5022,	// (0x0001b7b0) single_mobtv_pg_channel_thumb_pane_g2

0x502e,	// (0x0001b7bc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x502e,	// (0x0001b7bc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc4b,	// (0x000263d9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc4b,	// (0x000263d9) single_mobtv_pg_channel_thumb_pane_g

0x503a,	// (0x0001b7c8) single_mobtv_pg_channel_thumb_pane_t1

0x5048,	// (0x0001b7d6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc52,	// (0x000263e0) single_mobtv_pg_channel_thumb_pane_t

0x3338,	// (0x00019ac6) bg_single_mobtv_pg_channel_table_pane_g1

0x3338,	// (0x00019ac6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00025e9d) bg_single_mobtv_pg_channel_table_pane_g

0x5056,	// (0x0001b7e4) single_mobtv_pg_channel_table_pane_t1

0x5064,	// (0x0001b7f2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc57,	// (0x000263e5) single_mobtv_pg_channel_table_pane_t

0xdadb,	// (0x00024269) main_mobtv_info_pane_g1_ParamLimits

0xdadb,	// (0x00024269) main_mobtv_info_pane_g1

0xdaf7,	// (0x00024285) main_mobtv_info_pane_t1_ParamLimits

0xdaf7,	// (0x00024285) main_mobtv_info_pane_t1

0xdb6f,	// (0x000242fd) main_mobtv_info_pane_t2_ParamLimits

0xdb6f,	// (0x000242fd) main_mobtv_info_pane_t2

0x0002,

0xfc61,	// (0x000263ef) main_mobtv_info_pane_t_ParamLimits

0xfc61,	// (0x000263ef) main_mobtv_info_pane_t

0xdc02,	// (0x00024390) wait_bar_pane_cp05

0xdc14,	// (0x000243a2) main_mobtv_loading_pane_g1_ParamLimits

0xdc14,	// (0x000243a2) main_mobtv_loading_pane_g1

0xdc20,	// (0x000243ae) main_mobtv_loading_pane_g2_ParamLimits

0xdc20,	// (0x000243ae) main_mobtv_loading_pane_g2

0xdc2c,	// (0x000243ba) main_mobtv_loading_pane_g3_ParamLimits

0xdc2c,	// (0x000243ba) main_mobtv_loading_pane_g3

0x0002,

0xfc68,	// (0x000263f6) main_mobtv_loading_pane_g_ParamLimits

0xfc68,	// (0x000263f6) main_mobtv_loading_pane_g

0x5072,	// (0x0001b800) main_mobtv_loading_pane_t1_ParamLimits

0x5072,	// (0x0001b800) main_mobtv_loading_pane_t1

0x508a,	// (0x0001b818) main_mobtv_loading_pane_t2_ParamLimits

0x508a,	// (0x0001b818) main_mobtv_loading_pane_t2

0x0001,

0xfc6f,	// (0x000263fd) main_mobtv_loading_pane_t_ParamLimits

0xfc6f,	// (0x000263fd) main_mobtv_loading_pane_t

0xdc3a,	// (0x000243c8) wait_bar_pane_cp06_ParamLimits

0xdc3a,	// (0x000243c8) wait_bar_pane_cp06

0x50ae,	// (0x0001b83c) main_mobtv_programe_curr_pane_t1

0x50bc,	// (0x0001b84a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc74,	// (0x00026402) main_mobtv_programe_curr_pane_t

0x50ca,	// (0x0001b858) main_mobtv_programe_next_pane_t1

0x50d8,	// (0x0001b866) main_mobtv_programe_next_pane_t2

0x50e6,	// (0x0001b874) main_mobtv_programe_next_pane_t3

0x0002,

0xfc79,	// (0x00026407) main_mobtv_programe_next_pane_t

0x0478,	// (0x00016c06) bg_popup_mobtv_noti_window_pane

0x50f4,	// (0x0001b882) popup_mobtv_noti_window_g1

0x50fc,	// (0x0001b88a) popup_mobtv_noti_window_t1

0x510a,	// (0x0001b898) popup_mobtv_noti_window_t2

0x0001,

0xfc80,	// (0x0002640e) popup_mobtv_noti_window_t

0x3338,	// (0x00019ac6) bg_popup_mobtv_noti_window_pane_g1

0x0478,	// (0x00016c06) sc_clock_pane

0x0478,	// (0x00016c06) main_fs_bigclock_pane

0xd3c5,	// (0x00023b53) blid2_tripm_pane_t4_ParamLimits

0xd3c5,	// (0x00023b53) blid2_tripm_pane_t4

0xdc46,	// (0x000243d4) sc_clock_pane_g1_ParamLimits

0xdc46,	// (0x000243d4) sc_clock_pane_g1

0xdc54,	// (0x000243e2) sc_clock_pane_t1_ParamLimits

0xdc54,	// (0x000243e2) sc_clock_pane_t1

0xdc69,	// (0x000243f7) sc_clock_pane_t2_ParamLimits

0xdc69,	// (0x000243f7) sc_clock_pane_t2

0xdc7b,	// (0x00024409) sc_clock_pane_t3_ParamLimits

0xdc7b,	// (0x00024409) sc_clock_pane_t3

0x0004,

0xfc85,	// (0x00026413) sc_clock_pane_t_ParamLimits

0xfc85,	// (0x00026413) sc_clock_pane_t

0xe940,	// (0x000250ce) main_fs_bigclock_indicator_pane_ParamLimits

0xe940,	// (0x000250ce) main_fs_bigclock_indicator_pane

0xdd02,	// (0x00024490) main_fs_bigclock_pane_g1_ParamLimits

0xdd02,	// (0x00024490) main_fs_bigclock_pane_g1

0xe94c,	// (0x000250da) main_fs_bigclock_pane_t1_ParamLimits

0xe94c,	// (0x000250da) main_fs_bigclock_pane_t1

0xe95e,	// (0x000250ec) main_fs_bigclock_pane_t2_ParamLimits

0xe95e,	// (0x000250ec) main_fs_bigclock_pane_t2

0xe972,	// (0x00025100) main_fs_bigclock_pane_t3_ParamLimits

0xe972,	// (0x00025100) main_fs_bigclock_pane_t3

0x0002,

0xfe7f,	// (0x0002660d) main_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0002660d) main_fs_bigclock_pane_t

0x5d68,	// (0x0001c4f6) main_fs_bigclock_indicator_pane_g1

0x4dec,	// (0x0001b57a) ncim_query_content_pane_g2_ParamLimits

0x4dec,	// (0x0001b57a) ncim_query_content_pane_g2

0x0001,

0xfc12,	// (0x000263a0) ncim_query_content_pane_g_ParamLimits

0xfc12,	// (0x000263a0) ncim_query_content_pane_g

0xdc8d,	// (0x0002441b) sc_clock_pane_t4_ParamLimits

0xdc8d,	// (0x0002441b) sc_clock_pane_t4

0x04e9,	// (0x00016c77) main_radioblah_pane

0x3f7d,	// (0x0001a70b) cell_call4_button_pane_t1_copy1_ParamLimits

0x3f7d,	// (0x0001a70b) cell_call4_button_pane_t1_copy1

0xd953,	// (0x000240e1) main_ncimui_pane_t1_ParamLimits

0xd953,	// (0x000240e1) main_ncimui_pane_t1

0xd965,	// (0x000240f3) main_ncimui_pane_t2_ParamLimits

0xd965,	// (0x000240f3) main_ncimui_pane_t2

0x0002,

0xfc0b,	// (0x00026399) main_ncimui_pane_t_ParamLimits

0xfc0b,	// (0x00026399) main_ncimui_pane_t

0x5242,	// (0x0001b9d0) main_radioblah_anim_pane_ParamLimits

0x5242,	// (0x0001b9d0) main_radioblah_anim_pane

0x5253,	// (0x0001b9e1) main_radioblah_info_pane_ParamLimits

0x5253,	// (0x0001b9e1) main_radioblah_info_pane

0x5267,	// (0x0001b9f5) main_radioblah_pane_t1_ParamLimits

0x5267,	// (0x0001b9f5) main_radioblah_pane_t1

0x5283,	// (0x0001ba11) main_radioblah_pane_t2_ParamLimits

0x5283,	// (0x0001ba11) main_radioblah_pane_t2

0x0003,

0xfca6,	// (0x00026434) main_radioblah_pane_t_ParamLimits

0xfca6,	// (0x00026434) main_radioblah_pane_t

0xdd56,	// (0x000244e4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdd56,	// (0x000244e4) main_radioblah_rocker_ctrl_pane

0x52cb,	// (0x0001ba59) main_radioblah_info_pane_t1_ParamLimits

0x52cb,	// (0x0001ba59) main_radioblah_info_pane_t1

0xdd9f,	// (0x0002452d) main_radioblah_info_pane_t2_ParamLimits

0xdd9f,	// (0x0002452d) main_radioblah_info_pane_t2

0x0003,

0xfcaf,	// (0x0002643d) main_radioblah_info_pane_t_ParamLimits

0xfcaf,	// (0x0002643d) main_radioblah_info_pane_t

0x3338,	// (0x00019ac6) main_radioblah_rocker_ctrl_pane_g1

0xde4f,	// (0x000245dd) main_radioblah_rocker_ctrl_pane_g2

0xde57,	// (0x000245e5) main_radioblah_rocker_ctrl_pane_g3

0xde5f,	// (0x000245ed) main_radioblah_rocker_ctrl_pane_g4

0xde67,	// (0x000245f5) main_radioblah_rocker_ctrl_pane_g5

0xde6f,	// (0x000245fd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb8,	// (0x00026446) main_radioblah_rocker_ctrl_pane_g

0xd91a,	// (0x000240a8) main_cset_text2_pane_t1_copy1_ParamLimits

0x7d08,	// (0x0001e496) cam4_image_uncrop_qvga_pane

0x7e39,	// (0x0001e5c7) vid4_image_uncrop_qcif_pane

0x845c,	// (0x0001ebea) cam6_image_uncrop_qvga_pane_ParamLimits

0x845c,	// (0x0001ebea) cam6_image_uncrop_qvga_pane

0x4a1e,	// (0x0001b1ac) vid6_image_uncrop_qcif_pane_ParamLimits

0x4a1e,	// (0x0001b1ac) vid6_image_uncrop_qcif_pane

0x0478,	// (0x00016c06) bg_popup_preview_window_pane_cp03

0x4d9e,	// (0x0001b52c) list_cset_text2_pane

0x4da6,	// (0x0001b534) main_cset6_text2_pane_g1

0x4dae,	// (0x0001b53c) main_cset6_text2_pane_t1

0xde77,	// (0x00024605) list_cset_text2_pane_t1_ParamLimits

0xde77,	// (0x00024605) list_cset_text2_pane_t1

0x04e9,	// (0x00016c77) main_radioblah_pane_ParamLimits

0xdbee,	// (0x0002437c) main_mobtv_info_pane_t3_ParamLimits

0xdbee,	// (0x0002437c) main_mobtv_info_pane_t3

0xdd44,	// (0x000244d2) main_radioblah_pane_g1

0xdd6f,	// (0x000244fd) main_radioblah_info_pane_g1

0xddf4,	// (0x00024582) main_radioblah_info_pane_t3_ParamLimits

0xddf4,	// (0x00024582) main_radioblah_info_pane_t3

0x9e19,	// (0x000205a7) highlight_cell_cale_month_pane_ParamLimits

0x9e19,	// (0x000205a7) highlight_cell_cale_month_pane

0x0478,	// (0x00016c06) main_phob_fisheye_pane

0x36be,	// (0x00019e4c) scroll_pane_cp0031_ParamLimits

0x36be,	// (0x00019e4c) scroll_pane_cp0031

0x4b30,	// (0x0001b2be) wait_bar_pane_cp08_ParamLimits

0xd6c2,	// (0x00023e50) cset_list_set_pane_copy1_ParamLimits

0x5305,	// (0x0001ba93) highlight_cell_cale_month_pane_g1

0xde90,	// (0x0002461e) highlight_cell_cale_month_pane_t1

0x46c0,	// (0x0001ae4e) list_gen_pane_cp01

0x41fa,	// (0x0001a988) scroll_pane_01

0xde9e,	// (0x0002462c) list_single_double_fisheye_pane

0x530d,	// (0x0001ba9b) list_double_fisheye_pane_g1_ParamLimits

0x530d,	// (0x0001ba9b) list_double_fisheye_pane_g1

0x5319,	// (0x0001baa7) list_double_fisheye_pane_g2_ParamLimits

0x5319,	// (0x0001baa7) list_double_fisheye_pane_g2

0xdea7,	// (0x00024635) list_double_fisheye_pane_g3_ParamLimits

0xdea7,	// (0x00024635) list_double_fisheye_pane_g3

0x0004,

0xfcc5,	// (0x00026453) list_double_fisheye_pane_g_ParamLimits

0xfcc5,	// (0x00026453) list_double_fisheye_pane_g

0xdeb3,	// (0x00024641) list_double_fisheye_pane_t1_ParamLimits

0xdeb3,	// (0x00024641) list_double_fisheye_pane_t1

0xdece,	// (0x0002465c) list_double_fisheye_pane_t2_ParamLimits

0xdece,	// (0x0002465c) list_double_fisheye_pane_t2

0x0001,

0xfcd0,	// (0x0002645e) list_double_fisheye_pane_t_ParamLimits

0xfcd0,	// (0x0002645e) list_double_fisheye_pane_t

0x0478,	// (0x00016c06) main_call5_pane

0xdcb3,	// (0x00024441) sc_swipe_pane_ParamLimits

0xdcb3,	// (0x00024441) sc_swipe_pane

0xdefc,	// (0x0002468a) call5_image_pane_ParamLimits

0xdefc,	// (0x0002468a) call5_image_pane

0xdf0e,	// (0x0002469c) call5_swipe_1_pane_ParamLimits

0xdf0e,	// (0x0002469c) call5_swipe_1_pane

0xdf1a,	// (0x000246a8) call5_swipe_2_pane_ParamLimits

0xdf1a,	// (0x000246a8) call5_swipe_2_pane

0xdf36,	// (0x000246c4) popup_call5_audio_first_window_ParamLimits

0xdf36,	// (0x000246c4) popup_call5_audio_first_window

0x3568,	// (0x00019cf6) call5_swipe_1_pane_g1_ParamLimits

0x3568,	// (0x00019cf6) call5_swipe_1_pane_g1

0x534a,	// (0x0001bad8) call5_swipe_1_pane_g2_ParamLimits

0x534a,	// (0x0001bad8) call5_swipe_1_pane_g2

0x0001,

0xfcd5,	// (0x00026463) call5_swipe_1_pane_g_ParamLimits

0xfcd5,	// (0x00026463) call5_swipe_1_pane_g

0x5356,	// (0x0001bae4) call5_swipe_1_pane_t1_ParamLimits

0x5356,	// (0x0001bae4) call5_swipe_1_pane_t1

0x3568,	// (0x00019cf6) call5_swipe_2_pane_g1_ParamLimits

0x3568,	// (0x00019cf6) call5_swipe_2_pane_g1

0x536b,	// (0x0001baf9) call5_swipe_2_pane_g2_ParamLimits

0x536b,	// (0x0001baf9) call5_swipe_2_pane_g2

0x0001,

0xfcda,	// (0x00026468) call5_swipe_2_pane_g_ParamLimits

0xfcda,	// (0x00026468) call5_swipe_2_pane_g

0x5377,	// (0x0001bb05) call5_swipe_2_pane_t1_ParamLimits

0x5377,	// (0x0001bb05) call5_swipe_2_pane_t1

0x538c,	// (0x0001bb1a) sc_swipe_pane_g1_ParamLimits

0x538c,	// (0x0001bb1a) sc_swipe_pane_g1

0x5399,	// (0x0001bb27) sc_swipe_pane_g2_ParamLimits

0x5399,	// (0x0001bb27) sc_swipe_pane_g2

0x0001,

0xfcdf,	// (0x0002646d) sc_swipe_pane_g_ParamLimits

0xfcdf,	// (0x0002646d) sc_swipe_pane_g

0x53a5,	// (0x0001bb33) sc_swipe_pane_t1_ParamLimits

0x53a5,	// (0x0001bb33) sc_swipe_pane_t1

0x0478,	// (0x00016c06) main_cmail_launcher_pane

0xdf46,	// (0x000246d4) aid_size_cell_cmail_l_ParamLimits

0xdf46,	// (0x000246d4) aid_size_cell_cmail_l

0xdf56,	// (0x000246e4) grid_cmail_l_pane_ParamLimits

0xdf56,	// (0x000246e4) grid_cmail_l_pane

0xdf66,	// (0x000246f4) cell_cmail_l_pane_ParamLimits

0xdf66,	// (0x000246f4) cell_cmail_l_pane

0xdf7c,	// (0x0002470a) cell_cmail_l_pane_g1_ParamLimits

0xdf7c,	// (0x0002470a) cell_cmail_l_pane_g1

0xdf88,	// (0x00024716) cell_cmail_l_pane_t1_ParamLimits

0xdf88,	// (0x00024716) cell_cmail_l_pane_t1

0x53ba,	// (0x0001bb48) cell_cmail_l_pane_t2_ParamLimits

0x53ba,	// (0x0001bb48) cell_cmail_l_pane_t2

0x0001,

0xfce4,	// (0x00026472) cell_cmail_l_pane_t_ParamLimits

0xfce4,	// (0x00026472) cell_cmail_l_pane_t

0x04e9,	// (0x00016c77) grid_highlight_pane_cp018_ParamLimits

0x04e9,	// (0x00016c77) grid_highlight_pane_cp018

0x85a7,	// (0x0001ed35) main2_pane_ParamLimits

0x85a7,	// (0x0001ed35) main2_pane

0x0d2b,	// (0x000174b9) popup_sp_fs_action_menu_bg_pane_g1

0x0d33,	// (0x000174c1) popup_sp_fs_action_menu_bg_pane_g2

0x0d3b,	// (0x000174c9) popup_sp_fs_action_menu_bg_pane_g3

0x0d43,	// (0x000174d1) popup_sp_fs_action_menu_bg_pane_g4

0x0d4b,	// (0x000174d9) popup_sp_fs_action_menu_bg_pane_g5

0x0d53,	// (0x000174e1) popup_sp_fs_action_menu_bg_pane_g6

0x0d5b,	// (0x000174e9) popup_sp_fs_action_menu_bg_pane_g7

0x0d63,	// (0x000174f1) popup_sp_fs_action_menu_bg_pane_g8

0x0d6b,	// (0x000174f9) popup_sp_fs_action_menu_bg_pane_g9

0x0d73,	// (0x00017501) popup_sp_fs_action_menu_bg_pane_g10

0x0d73,	// (0x00017501) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00025949) popup_sp_fs_action_menu_bg_pane_g

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g3_g1

0x0f5d,	// (0x000176eb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_t3_g3_g2

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x000259f9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x000259f9) list_medium_line_x2_t3_g3_g

0x0f75,	// (0x00017703) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f75,	// (0x00017703) list_medium_line_x2_t3_g3_t1

0x90e9,	// (0x0001f877) list_medium_line_x2_t3_g3_t2_ParamLimits

0x90e9,	// (0x0001f877) list_medium_line_x2_t3_g3_t2

0x0f8a,	// (0x00017718) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00025a00) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00025a00) list_medium_line_x2_t3_g3_t

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g2_g1

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00025a07) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00025a07) list_medium_line_x2_t3_g2_g

0x0f9f,	// (0x0001772d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f9f,	// (0x0001772d) list_medium_line_x2_t3_g2_t1

0x0fb5,	// (0x00017743) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fb5,	// (0x00017743) list_medium_line_x2_t3_g2_t2

0x0fc7,	// (0x00017755) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fc7,	// (0x00017755) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00025a0c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00025a0c) list_medium_line_x2_t3_g2_t

0x0f51,	// (0x000176df) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t4_g4_g1

0x0fe5,	// (0x00017773) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fe5,	// (0x00017773) list_medium_line_x2_t4_g4_g2

0x0f5d,	// (0x000176eb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_t4_g4_g3

0x0ff1,	// (0x0001777f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ff1,	// (0x0001777f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00025a13) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00025a13) list_medium_line_x2_t4_g4_g

0x90fd,	// (0x0001f88b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x90fd,	// (0x0001f88b) list_medium_line_x2_t4_g4_t1

0x9117,	// (0x0001f8a5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9117,	// (0x0001f8a5) list_medium_line_x2_t4_g4_t2

0x912d,	// (0x0001f8bb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x912d,	// (0x0001f8bb) list_medium_line_x2_t4_g4_t3

0x0ffd,	// (0x0001778b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ffd,	// (0x0001778b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00025a1c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00025a1c) list_medium_line_x2_t4_g4_t

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g4_g1

0x0fe5,	// (0x00017773) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fe5,	// (0x00017773) list_medium_line_x2_t2_g4_g2

0x0f5d,	// (0x000176eb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_t2_g4_g3

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00025a83) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00025a83) list_medium_line_x2_t2_g4_g

0x12f1,	// (0x00017a7f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x12f1,	// (0x00017a7f) list_medium_line_x2_t2_g4_t1

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00025a8c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00025a8c) list_medium_line_x2_t2_g4_t

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g3_g1

0x0f5d,	// (0x000176eb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_t2_g3_g2

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x000259f9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x000259f9) list_medium_line_x2_t2_g3_g

0x1306,	// (0x00017a94) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1306,	// (0x00017a94) list_medium_line_x2_t2_g3_t1

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00025a91) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00025a91) list_medium_line_x2_t2_g3_t

0x9fed,	// (0x0002077b) main_sp_fs_list_pane_ParamLimits

0x9fed,	// (0x0002077b) main_sp_fs_list_pane

0x9ff9,	// (0x00020787) sp_fs_scroll_pane_ParamLimits

0x9ff9,	// (0x00020787) sp_fs_scroll_pane

0xa005,	// (0x00020793) list_medium_line_x2_t3_t1

0xa015,	// (0x000207a3) list_medium_line_x2_t3_t2

0x14eb,	// (0x00017c79) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00025adc) list_medium_line_x2_t3_t

0xa023,	// (0x000207b1) list_medium_line_x3_t4_t1

0xa033,	// (0x000207c1) list_medium_line_x3_t4_t2

0x14f9,	// (0x00017c87) list_medium_line_x3_t4_t3

0x14eb,	// (0x00017c79) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00025ae3) list_medium_line_x3_t4_t

0xa041,	// (0x000207cf) list_medium_line_x4_t5_t1

0xa051,	// (0x000207df) list_medium_line_x4_t5_t2

0x14f9,	// (0x00017c87) list_medium_line_x4_t5_t3

0x1507,	// (0x00017c95) list_medium_line_x4_t5_t4

0x14eb,	// (0x00017c79) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00025aec) list_medium_line_x4_t5_t

0x0f51,	// (0x000176df) list_medium_line_t4_g4_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_t4_g4_g1

0x0ff1,	// (0x0001777f) list_medium_line_t4_g4_g2_ParamLimits

0x0ff1,	// (0x0001777f) list_medium_line_t4_g4_g2

0x1515,	// (0x00017ca3) list_medium_line_t4_g4_g3_ParamLimits

0x1515,	// (0x00017ca3) list_medium_line_t4_g4_g3

0x0f69,	// (0x000176f7) list_medium_line_t4_g4_g4_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00025af7) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00025af7) list_medium_line_t4_g4_g

0x1521,	// (0x00017caf) list_medium_line_t4_g4_t1_ParamLimits

0x1521,	// (0x00017caf) list_medium_line_t4_g4_t1

0x1536,	// (0x00017cc4) list_medium_line_t4_g4_t2_ParamLimits

0x1536,	// (0x00017cc4) list_medium_line_t4_g4_t2

0x154c,	// (0x00017cda) list_medium_line_t4_g4_t3_ParamLimits

0x154c,	// (0x00017cda) list_medium_line_t4_g4_t3

0x0f8a,	// (0x00017718) list_medium_line_t4_g4_t4_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00025b00) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00025b00) list_medium_line_t4_g4_t

0xa103,	// (0x00020891) chi_dic_find_pane_g1

0xb0ec,	// (0x0002187a) main_tport_pane

0x4345,	// (0x0001aad3) list_medium_line_plain_t1

0x4397,	// (0x0001ab25) list_medium_line_t2_g2_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t2_g2_g1

0x43a3,	// (0x0001ab31) list_medium_line_t2_g2_g2_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x000261bc) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x000261bc) list_medium_line_t2_g2_g

0xcda8,	// (0x00023536) list_medium_line_t2_g2_t1_ParamLimits

0xcda8,	// (0x00023536) list_medium_line_t2_g2_t1

0xcdbf,	// (0x0002354d) list_medium_line_t2_g2_t2_ParamLimits

0xcdbf,	// (0x0002354d) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x000261c1) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x000261c1) list_medium_line_t2_g2_t

0x4769,	// (0x0001aef7) aid_sp_fs_list_icon_a_sm

0x4771,	// (0x0001aeff) aid_sp_fs_list_icon_d

0x4779,	// (0x0001af07) aid_sp_fs_text_primary

0x4782,	// (0x0001af10) aid_sp_fs_text_secondary

0x478b,	// (0x0001af19) list_medium_line

0x478b,	// (0x0001af19) list_medium_line_g2

0x478b,	// (0x0001af19) list_medium_line_g3

0x478b,	// (0x0001af19) list_medium_line_plain

0x478b,	// (0x0001af19) list_medium_line_plain_t2

0x478b,	// (0x0001af19) list_medium_line_plain_t3

0x478b,	// (0x0001af19) list_medium_line_right_icon

0x478b,	// (0x0001af19) list_medium_line_right_iconx2

0x478b,	// (0x0001af19) list_medium_line_t2

0x478b,	// (0x0001af19) list_medium_line_t2_g2

0x478b,	// (0x0001af19) list_medium_line_t2_g3

0x478b,	// (0x0001af19) list_medium_line_t2_right_icon

0x478b,	// (0x0001af19) list_medium_line_t2_right_iconx2

0x478b,	// (0x0001af19) list_medium_line_t3

0x478b,	// (0x0001af19) list_medium_line_t3_g2

0x478b,	// (0x0001af19) list_medium_line_t3_g3

0x478b,	// (0x0001af19) list_medium_line_t3_right_iconx2

0x4794,	// (0x0001af22) list_medium_line_t4_g4

0x479d,	// (0x0001af2b) list_medium_line_x2

0x479d,	// (0x0001af2b) list_medium_line_x2_t2_g2

0x479d,	// (0x0001af2b) list_medium_line_x2_t2_g3

0x479d,	// (0x0001af2b) list_medium_line_x2_t2_g4

0x479d,	// (0x0001af2b) list_medium_line_x2_t3

0x479d,	// (0x0001af2b) list_medium_line_x2_t3_g2

0x479d,	// (0x0001af2b) list_medium_line_x2_t3_g3

0x479d,	// (0x0001af2b) list_medium_line_x2_t3_g4

0x479d,	// (0x0001af2b) list_medium_line_x2_t4_g2

0x479d,	// (0x0001af2b) list_medium_line_x2_t4_g4

0x47a6,	// (0x0001af34) list_medium_line_x3

0x47a6,	// (0x0001af34) list_medium_line_x3_t4

0x47a6,	// (0x0001af34) list_medium_line_x3_t4_g4

0x4794,	// (0x0001af22) list_medium_line_x4_t4

0x4794,	// (0x0001af22) list_medium_line_x4_t4_g7

0x4794,	// (0x0001af22) list_medium_line_x4_t5

0x47af,	// (0x0001af3d) list_single_fs_dyc_pane_ParamLimits

0x47af,	// (0x0001af3d) list_single_fs_dyc_pane

0x0f51,	// (0x000176df) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x4_t4_g7_g1

0x4ccd,	// (0x0001b45b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4ccd,	// (0x0001b45b) list_medium_line_x4_t4_g7_g2

0x4cd9,	// (0x0001b467) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4cd9,	// (0x0001b467) list_medium_line_x4_t4_g7_g3

0x4ce8,	// (0x0001b476) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4ce8,	// (0x0001b476) list_medium_line_x4_t4_g7_g4

0x4cf4,	// (0x0001b482) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4cf4,	// (0x0001b482) list_medium_line_x4_t4_g7_g5

0x4d03,	// (0x0001b491) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4d03,	// (0x0001b491) list_medium_line_x4_t4_g7_g6

0x4d12,	// (0x0001b4a0) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4d12,	// (0x0001b4a0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf1,	// (0x0002637f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf1,	// (0x0002637f) list_medium_line_x4_t4_g7_g

0x4d1e,	// (0x0001b4ac) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4d1e,	// (0x0001b4ac) list_medium_line_x4_t4_g7_t1

0x4d33,	// (0x0001b4c1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4d33,	// (0x0001b4c1) list_medium_line_x4_t4_g7_t2

0x4d48,	// (0x0001b4d6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4d48,	// (0x0001b4d6) list_medium_line_x4_t4_g7_t3

0x4d5d,	// (0x0001b4eb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4d5d,	// (0x0001b4eb) list_medium_line_x4_t4_g7_t4

0x4d6f,	// (0x0001b4fd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4d6f,	// (0x0001b4fd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc00,	// (0x0002638e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc00,	// (0x0002638e) list_medium_line_x4_t4_g7_t

0x4d81,	// (0x0001b50f) list_single_dyc_row_pane_ParamLimits

0x4d81,	// (0x0001b50f) list_single_dyc_row_pane

0xdef0,	// (0x0002467e) call5_gesture_pane_ParamLimits

0xdef0,	// (0x0002467e) call5_gesture_pane

0xdf26,	// (0x000246b4) call5_windows_pane_ParamLimits

0xdf26,	// (0x000246b4) call5_windows_pane

0xdf9e,	// (0x0002472c) call5_swipe_1_pane_cp_ParamLimits

0xdf9e,	// (0x0002472c) call5_swipe_1_pane_cp

0xdfaa,	// (0x00024738) call5_swipe_2_pane_cp_ParamLimits

0xdfaa,	// (0x00024738) call5_swipe_2_pane_cp

0x1996,	// (0x00018124) call5_image_pane_cp

0xdfb6,	// (0x00024744) popup_call5_audio_first_window_cp_ParamLimits

0xdfb6,	// (0x00024744) popup_call5_audio_first_window_cp

0x538c,	// (0x0001bb1a) call5_swipe_1_pane_g1_cp_ParamLimits

0x538c,	// (0x0001bb1a) call5_swipe_1_pane_g1_cp

0x53cc,	// (0x0001bb5a) call5_swipe_1_pane_g2_cp

0x53a5,	// (0x0001bb33) call5_swipe_1_pane_t1_cp_ParamLimits

0x53a5,	// (0x0001bb33) call5_swipe_1_pane_t1_cp

0x538c,	// (0x0001bb1a) call5_swipe_2_pane_g1_cp_ParamLimits

0x538c,	// (0x0001bb1a) call5_swipe_2_pane_g1_cp

0x53d4,	// (0x0001bb62) call5_swipe_2_pane_g2_cp

0x53dc,	// (0x0001bb6a) call5_swipe_2_pane_t1_cp_ParamLimits

0x53dc,	// (0x0001bb6a) call5_swipe_2_pane_t1_cp

0x04e9,	// (0x00016c77) main_sp_fs_email_pane

0x53f1,	// (0x0001bb7f) main_sp_fs_listscroll_pane_te

0x53fa,	// (0x0001bb88) popup_sp_fs_action_menu_pane_ParamLimits

0x53fa,	// (0x0001bb88) popup_sp_fs_action_menu_pane

0x3338,	// (0x00019ac6) bg_sp_fs_ctrlbar_pane_g1

0x5440,	// (0x0001bbce) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5449,	// (0x0001bbd7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5452,	// (0x0001bbe0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3338,	// (0x00019ac6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce9,	// (0x00026477) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3117,	// (0x000198a5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3117,	// (0x000198a5) bg_sp_fs_ctrlbar_ddmenu_pane

0x545b,	// (0x0001bbe9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x545b,	// (0x0001bbe9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5467,	// (0x0001bbf5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5467,	// (0x0001bbf5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf2,	// (0x00026480) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf2,	// (0x00026480) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5473,	// (0x0001bc01) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5473,	// (0x0001bc01) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x548d,	// (0x0001bc1b) list_medium_line_t2_right_icon_g1

0xdfc4,	// (0x00024752) list_medium_line_t2_right_icon_t1

0xdfd4,	// (0x00024762) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf7,	// (0x00026485) list_medium_line_t2_right_icon_t

0x2e03,	// (0x00019591) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2e03,	// (0x00019591) bg_sp_fs_ctrlbar_pane

0xe039,	// (0x000247c7) main_sp_fs_ctrlbar_button_pane_cp01

0xe041,	// (0x000247cf) main_sp_fs_ctrlbar_ddmenu_pane

0x54cf,	// (0x0001bc5d) main_sp_fs_ctrlbar_pane_g1

0x54db,	// (0x0001bc69) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfc,	// (0x0002648a) main_sp_fs_ctrlbar_pane_g

0x54e7,	// (0x0001bc75) main_sp_fs_ctrlbar_pane_t1

0xe04b,	// (0x000247d9) main_sp_fs_ctrlbar_pane

0xe067,	// (0x000247f5) main_sp_fs_listscroll_pane_te_cp01

0xe078,	// (0x00024806) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xe078,	// (0x00024806) popup_sp_fs_action_menu_pane_cp01

0x04e9,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x04e9,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp01

0x54fc,	// (0x0001bc8a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x54fc,	// (0x0001bc8a) sp_fs_action_menu_list_gene_pane_g1

0x550b,	// (0x0001bc99) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x550b,	// (0x0001bc99) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd01,	// (0x0002648f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd01,	// (0x0002648f) sp_fs_action_menu_list_gene_pane_g

0x5518,	// (0x0001bca6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5518,	// (0x0001bca6) sp_fs_action_menu_list_gene_pane_t1

0x5530,	// (0x0001bcbe) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5530,	// (0x0001bcbe) sp_fs_action_menu_list_gene_pane

0x5553,	// (0x0001bce1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5553,	// (0x0001bce1) popup_sp_fs_action_menu_bg_pane

0x5561,	// (0x0001bcef) sp_fs_action_menu_list_pane_ParamLimits

0x5561,	// (0x0001bcef) sp_fs_action_menu_list_pane

0x5585,	// (0x0001bd13) sp_fs_scroll_pane_cp01_ParamLimits

0x5585,	// (0x0001bd13) sp_fs_scroll_pane_cp01

0xe092,	// (0x00024820) list_medium_line_plain_t2_t1

0xe0a2,	// (0x00024830) list_medium_line_plain_t2_t2

0x0001,

0xfd06,	// (0x00026494) list_medium_line_plain_t2_t

0xe0b0,	// (0x0002483e) list_medium_line_plain_t3_t1

0xe0c0,	// (0x0002484e) list_medium_line_plain_t3_t2

0xe0ce,	// (0x0002485c) list_medium_line_plain_t3_t3

0x0002,

0xfd0b,	// (0x00026499) list_medium_line_plain_t3_t

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t2_g2_g1

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00025a07) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00025a07) list_medium_line_x2_t2_g2_g

0x1521,	// (0x00017caf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1521,	// (0x00017caf) list_medium_line_x2_t2_g2_t1

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd12,	// (0x000264a0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd12,	// (0x000264a0) list_medium_line_x2_t2_g2_t

0x0f51,	// (0x000176df) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t4_g2_g1

0x0f69,	// (0x000176f7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x00025a07) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x00025a07) list_medium_line_x2_t4_g2_g

0xe0dc,	// (0x0002486a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe0dc,	// (0x0002486a) list_medium_line_x2_t4_g2_t1

0xe0f6,	// (0x00024884) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe0f6,	// (0x00024884) list_medium_line_x2_t4_g2_t2

0xe10c,	// (0x0002489a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe10c,	// (0x0002489a) list_medium_line_x2_t4_g2_t3

0x0f8a,	// (0x00017718) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd17,	// (0x000264a5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd17,	// (0x000264a5) list_medium_line_x2_t4_g2_t

0x55ab,	// (0x0001bd39) list_medium_line_t3_right_iconx2_g1

0x548d,	// (0x0001bc1b) list_medium_line_t3_right_iconx2_g2

0xe121,	// (0x000248af) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd20,	// (0x000264ae) list_medium_line_t3_right_iconx2_g

0xe129,	// (0x000248b7) list_medium_line_t3_right_iconx2_t1

0xe139,	// (0x000248c7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd27,	// (0x000264b5) list_medium_line_t3_right_iconx2_t

0x0f51,	// (0x000176df) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x3_t4_g4_g1

0x0f5d,	// (0x000176eb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x3_t4_g4_g2

0x0ff1,	// (0x0001777f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ff1,	// (0x0001777f) list_medium_line_x3_t4_g4_g3

0x55b3,	// (0x0001bd41) list_medium_line_x3_t4_g4_g4_ParamLimits

0x55b3,	// (0x0001bd41) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2c,	// (0x000264ba) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2c,	// (0x000264ba) list_medium_line_x3_t4_g4_g

0xe147,	// (0x000248d5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe147,	// (0x000248d5) list_medium_line_x3_t4_g4_t1

0xe15e,	// (0x000248ec) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe15e,	// (0x000248ec) list_medium_line_x3_t4_g4_t2

0x55bf,	// (0x0001bd4d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x55bf,	// (0x0001bd4d) list_medium_line_x3_t4_g4_t3

0x55d4,	// (0x0001bd62) list_medium_line_x3_t4_g4_t4_ParamLimits

0x55d4,	// (0x0001bd62) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd35,	// (0x000264c3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd35,	// (0x000264c3) list_medium_line_x3_t4_g4_t

0xe173,	// (0x00024901) list_single_dyc_row_text_pane_t1_ParamLimits

0xe173,	// (0x00024901) list_single_dyc_row_text_pane_t1

0xe1b2,	// (0x00024940) list_single_dyc_row_text_pane_t2_ParamLimits

0xe1b2,	// (0x00024940) list_single_dyc_row_text_pane_t2

0x55f1,	// (0x0001bd7f) list_single_dyc_row_text_pane_t3_ParamLimits

0x55f1,	// (0x0001bd7f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3e,	// (0x000264cc) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3e,	// (0x000264cc) list_single_dyc_row_text_pane_t

0x5603,	// (0x0001bd91) list_single_dyc_row_pane_g1_ParamLimits

0x5603,	// (0x0001bd91) list_single_dyc_row_pane_g1

0x560f,	// (0x0001bd9d) list_single_dyc_row_pane_g2_ParamLimits

0x560f,	// (0x0001bd9d) list_single_dyc_row_pane_g2

0x561b,	// (0x0001bda9) list_single_dyc_row_pane_g3_ParamLimits

0x561b,	// (0x0001bda9) list_single_dyc_row_pane_g3

0x5627,	// (0x0001bdb5) list_single_dyc_row_pane_g4_ParamLimits

0x5627,	// (0x0001bdb5) list_single_dyc_row_pane_g4

0x0003,

0xfd45,	// (0x000264d3) list_single_dyc_row_pane_g_ParamLimits

0xfd45,	// (0x000264d3) list_single_dyc_row_pane_g

0x5633,	// (0x0001bdc1) list_single_dyc_row_text_pane_ParamLimits

0x5633,	// (0x0001bdc1) list_single_dyc_row_text_pane

0x0478,	// (0x00016c06) bg_sp_fs_scroll_pane

0x5652,	// (0x0001bde0) thumb_sp_fs_scroll_pane

0x4397,	// (0x0001ab25) list_medium_line_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_g1

0x565b,	// (0x0001bde9) list_medium_line_t1_ParamLimits

0x565b,	// (0x0001bde9) list_medium_line_t1

0x0f51,	// (0x000176df) list_medium_line_x2_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_g1

0x0f5d,	// (0x000176eb) list_medium_line_x2_g2_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_g2

0x0001,

0xfd4e,	// (0x000264dc) list_medium_line_x2_g_ParamLimits

0xfd4e,	// (0x000264dc) list_medium_line_x2_g

0x5670,	// (0x0001bdfe) list_medium_line_x2_t1_ParamLimits

0x5670,	// (0x0001bdfe) list_medium_line_x2_t1

0x0f51,	// (0x000176df) list_medium_line_x3_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x3_g1

0x0f5d,	// (0x000176eb) list_medium_line_x3_g2_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x3_g2

0x0001,

0xfd4e,	// (0x000264dc) list_medium_line_x3_g_ParamLimits

0xfd4e,	// (0x000264dc) list_medium_line_x3_g

0x5670,	// (0x0001bdfe) list_medium_line_x3_t1_ParamLimits

0x5670,	// (0x0001bdfe) list_medium_line_x3_t1

0x5686,	// (0x0001be14) thumb_sp_fs_scroll_pane_g1

0x568f,	// (0x0001be1d) thumb_sp_fs_scroll_pane_g2

0x5698,	// (0x0001be26) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd53,	// (0x000264e1) thumb_sp_fs_scroll_pane_g

0x5686,	// (0x0001be14) bg_sp_fs_scroll_pane_g1

0x568f,	// (0x0001be1d) bg_sp_fs_scroll_pane_g2

0x5698,	// (0x0001be26) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd53,	// (0x000264e1) bg_sp_fs_scroll_pane_g

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f51,	// (0x000176df) list_medium_line_x2_t3_g4_g1

0x0fe5,	// (0x00017773) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fe5,	// (0x00017773) list_medium_line_x2_t3_g4_g2

0x0f5d,	// (0x000176eb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f5d,	// (0x000176eb) list_medium_line_x2_t3_g4_g3

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f69,	// (0x000176f7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00025a83) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00025a83) list_medium_line_x2_t3_g4_g

0xe20c,	// (0x0002499a) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe20c,	// (0x0002499a) list_medium_line_x2_t3_g4_t1

0xe222,	// (0x000249b0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe222,	// (0x000249b0) list_medium_line_x2_t3_g4_t2

0x0f8a,	// (0x00017718) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f8a,	// (0x00017718) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5a,	// (0x000264e8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5a,	// (0x000264e8) list_medium_line_x2_t3_g4_t

0x4397,	// (0x0001ab25) list_medium_line_g2_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_g2_g1

0x43a3,	// (0x0001ab31) list_medium_line_g2_g2_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x000261bc) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x000261bc) list_medium_line_g2_g

0x56a1,	// (0x0001be2f) list_medium_line_g2_t1_ParamLimits

0x56a1,	// (0x0001be2f) list_medium_line_g2_t1

0x4397,	// (0x0001ab25) list_medium_line_t3_g2_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t3_g2_g1

0x43a3,	// (0x0001ab31) list_medium_line_t3_g2_g2_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x000261bc) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x000261bc) list_medium_line_t3_g2_g

0xe23b,	// (0x000249c9) list_medium_line_t3_g2_t1_ParamLimits

0xe23b,	// (0x000249c9) list_medium_line_t3_g2_t1

0xe252,	// (0x000249e0) list_medium_line_t3_g2_t2_ParamLimits

0xe252,	// (0x000249e0) list_medium_line_t3_g2_t2

0xe267,	// (0x000249f5) list_medium_line_t3_g2_t3_ParamLimits

0xe267,	// (0x000249f5) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x000264ef) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x000264ef) list_medium_line_t3_g2_t

0x548d,	// (0x0001bc1b) list_medium_line_right_icon_g1

0x56b6,	// (0x0001be44) list_medium_line_right_icon_t1

0x4397,	// (0x0001ab25) list_medium_line_t2_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t2_g1

0xe280,	// (0x00024a0e) list_medium_line_t2_t1_ParamLimits

0xe280,	// (0x00024a0e) list_medium_line_t2_t1

0xe29a,	// (0x00024a28) list_medium_line_t2_t2_ParamLimits

0xe29a,	// (0x00024a28) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x000264f6) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x000264f6) list_medium_line_t2_t

0x4397,	// (0x0001ab25) list_medium_line_t3_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t3_g1

0xe2af,	// (0x00024a3d) list_medium_line_t3_t1_ParamLimits

0xe2af,	// (0x00024a3d) list_medium_line_t3_t1

0xe2c6,	// (0x00024a54) list_medium_line_t3_t2_ParamLimits

0xe2c6,	// (0x00024a54) list_medium_line_t3_t2

0xe2db,	// (0x00024a69) list_medium_line_t3_t3_ParamLimits

0xe2db,	// (0x00024a69) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x000264fb) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x000264fb) list_medium_line_t3_t

0x4397,	// (0x0001ab25) list_medium_line_g3_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_g3_g1

0x56c4,	// (0x0001be52) list_medium_line_g3_g2_ParamLimits

0x56c4,	// (0x0001be52) list_medium_line_g3_g2

0x43a3,	// (0x0001ab31) list_medium_line_g3_g3_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x00026502) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x00026502) list_medium_line_g3_g

0x56d0,	// (0x0001be5e) list_medium_line_g3_t1_ParamLimits

0x56d0,	// (0x0001be5e) list_medium_line_g3_t1

0x4397,	// (0x0001ab25) list_medium_line_t2_g3_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t2_g3_g1

0x56c4,	// (0x0001be52) list_medium_line_t2_g3_g2_ParamLimits

0x56c4,	// (0x0001be52) list_medium_line_t2_g3_g2

0x43a3,	// (0x0001ab31) list_medium_line_t2_g3_g3_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x00026502) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x00026502) list_medium_line_t2_g3_g

0xe2ed,	// (0x00024a7b) list_medium_line_t2_g3_t1_ParamLimits

0xe2ed,	// (0x00024a7b) list_medium_line_t2_g3_t1

0xe304,	// (0x00024a92) list_medium_line_t2_g3_t2_ParamLimits

0xe304,	// (0x00024a92) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x00026509) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x00026509) list_medium_line_t2_g3_t

0x4397,	// (0x0001ab25) list_medium_line_t3_g3_g1_ParamLimits

0x4397,	// (0x0001ab25) list_medium_line_t3_g3_g1

0x56c4,	// (0x0001be52) list_medium_line_t3_g3_g2_ParamLimits

0x56c4,	// (0x0001be52) list_medium_line_t3_g3_g2

0x43a3,	// (0x0001ab31) list_medium_line_t3_g3_g3_ParamLimits

0x43a3,	// (0x0001ab31) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x00026502) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x00026502) list_medium_line_t3_g3_g

0xe319,	// (0x00024aa7) list_medium_line_t3_g3_t1_ParamLimits

0xe319,	// (0x00024aa7) list_medium_line_t3_g3_t1

0xe332,	// (0x00024ac0) list_medium_line_t3_g3_t2_ParamLimits

0xe332,	// (0x00024ac0) list_medium_line_t3_g3_t2

0xe348,	// (0x00024ad6) list_medium_line_t3_g3_t3_ParamLimits

0xe348,	// (0x00024ad6) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0002650e) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0002650e) list_medium_line_t3_g3_t

0x55ab,	// (0x0001bd39) list_medium_line_right_iconx2_g1

0x548d,	// (0x0001bc1b) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x00026515) list_medium_line_right_iconx2_g

0x56e5,	// (0x0001be73) list_medium_line_right_iconx2_t1

0x55ab,	// (0x0001bd39) list_medium_line_t2_right_iconx2_g1

0x548d,	// (0x0001bc1b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x00026515) list_medium_line_t2_right_iconx2_g

0xe362,	// (0x00024af0) list_medium_line_t2_right_iconx2_t1

0xe372,	// (0x00024b00) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0002651a) list_medium_line_t2_right_iconx2_t

0x56f3,	// (0x0001be81) list_medium_line_x4_t4_t1

0xe380,	// (0x00024b0e) list_medium_line_x4_t4_t2

0xe390,	// (0x00024b1e) list_medium_line_x4_t4_t3

0xe3a0,	// (0x00024b2e) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0002651f) list_medium_line_x4_t4_t

0xe3d9,	// (0x00024b67) tport_appsw_pane_ParamLimits

0xe3d9,	// (0x00024b67) tport_appsw_pane

0xe3e7,	// (0x00024b75) tport_contact_pane_ParamLimits

0xe3e7,	// (0x00024b75) tport_contact_pane

0xe3f5,	// (0x00024b83) tport_listscroll_pane_ParamLimits

0xe3f5,	// (0x00024b83) tport_listscroll_pane

0xe403,	// (0x00024b91) cell_tport_appsw_pane_ParamLimits

0xe403,	// (0x00024b91) cell_tport_appsw_pane

0x3641,	// (0x00019dcf) tport_appsw_pane_g1_ParamLimits

0x3641,	// (0x00019dcf) tport_appsw_pane_g1

0x5701,	// (0x0001be8f) tport_contact_pane_g1

0x570a,	// (0x0001be98) tport_contact_pane_t1

0x5718,	// (0x0001bea6) tport_contact_pane_t2

0x0001,

0xfd9a,	// (0x00026528) tport_contact_pane_t

0x5726,	// (0x0001beb4) list_tport_pane

0x572f,	// (0x0001bebd) scroll_pane_cp_030

0xe42e,	// (0x00024bbc) cell_tport_appsw_pane_g1

0x5748,	// (0x0001bed6) cell_tport_appsw_pane_t1

0x0478,	// (0x00016c06) grid_highlight_pane_cp019

0xe43e,	// (0x00024bcc) list_tport_double_graphic_pane_ParamLimits

0xe43e,	// (0x00024bcc) list_tport_double_graphic_pane

0x04e9,	// (0x00016c77) list_highlight_pane_cp023_ParamLimits

0x04e9,	// (0x00016c77) list_highlight_pane_cp023

0xe44f,	// (0x00024bdd) list_tport_double_graphic_pane_g1_ParamLimits

0xe44f,	// (0x00024bdd) list_tport_double_graphic_pane_g1

0xe45c,	// (0x00024bea) list_tport_double_graphic_pane_t1_ParamLimits

0xe45c,	// (0x00024bea) list_tport_double_graphic_pane_t1

0xe471,	// (0x00024bff) list_tport_double_graphic_pane_t2_ParamLimits

0xe471,	// (0x00024bff) list_tport_double_graphic_pane_t2

0x0001,

0xfda6,	// (0x00026534) list_tport_double_graphic_pane_t_ParamLimits

0xfda6,	// (0x00026534) list_tport_double_graphic_pane_t

0x0478,	// (0x00016c06) main_cale_note_pane

0x8077,	// (0x0001e805) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8077,	// (0x0001e805) cell_vitu2_function_top_wide_pane_cp01

0xdc02,	// (0x00024390) wait_bar_pane_cp05_ParamLimits

0x0478,	// (0x00016c06) listscroll_cmail_pane

0x575e,	// (0x0001beec) list_cmail_pane

0xe48d,	// (0x00024c1b) list_cmail_body_pane

0xe4a2,	// (0x00024c30) list_single_cmail_header_caption_pane

0xe4bc,	// (0x00024c4a) list_single_cmail_header_detail_pane_ParamLimits

0xe4bc,	// (0x00024c4a) list_single_cmail_header_detail_pane

0xe4eb,	// (0x00024c79) list_single_cmail_header_caption_pane_t1

0xe4fb,	// (0x00024c89) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe4fb,	// (0x00024c89) list_single_cmail_header_detail_pane_g1

0x577e,	// (0x0001bf0c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x577e,	// (0x0001bf0c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdab,	// (0x00026539) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdab,	// (0x00026539) list_single_cmail_header_detail_pane_g

0x5797,	// (0x0001bf25) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5797,	// (0x0001bf25) list_single_cmail_header_detail_pane_t1

0x57d5,	// (0x0001bf63) list_single_cmail_header_editor_pane_bg_ParamLimits

0x57d5,	// (0x0001bf63) list_single_cmail_header_editor_pane_bg

0x500b,	// (0x0001b799) list_cmail_body_pane_g1

0x57e7,	// (0x0001bf75) list_cmail_body_pane_t1

0x40dc,	// (0x0001a86a) list_single_cmail_header_editor_pane_bg_g1

0x1210,	// (0x0001799e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x40ec,	// (0x0001a87a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x40e4,	// (0x0001a872) list_single_cmail_header_editor_pane_bg_g1_copy3

0x436f,	// (0x0001aafd) list_single_cmail_header_editor_pane_bg_g1_copy4

0x410c,	// (0x0001a89a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x40fc,	// (0x0001a88a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4104,	// (0x0001a892) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x11f0,	// (0x0001797e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe539,	// (0x00024cc7) calenote_gesture_pane_ParamLimits

0xe539,	// (0x00024cc7) calenote_gesture_pane

0xe553,	// (0x00024ce1) calenote_window_pane_ParamLimits

0xe553,	// (0x00024ce1) calenote_window_pane

0x57f5,	// (0x0001bf83) popup_note_window_cp01

0xe56b,	// (0x00024cf9) calenote_swipe_1_pane_ParamLimits

0xe56b,	// (0x00024cf9) calenote_swipe_1_pane

0xdfaa,	// (0x00024738) calenote_swipe_2_pane_ParamLimits

0xdfaa,	// (0x00024738) calenote_swipe_2_pane

0x538c,	// (0x0001bb1a) calenote_swipe_1_pane_g1_ParamLimits

0x538c,	// (0x0001bb1a) calenote_swipe_1_pane_g1

0x5399,	// (0x0001bb27) calenote_swipe_1_pane_g2_ParamLimits

0x5399,	// (0x0001bb27) calenote_swipe_1_pane_g2

0x0001,

0xfcdf,	// (0x0002646d) calenote_swipe_1_pane_g_ParamLimits

0xfcdf,	// (0x0002646d) calenote_swipe_1_pane_g

0x5807,	// (0x0001bf95) calenote_swipe_1_pane_t1_ParamLimits

0x5807,	// (0x0001bf95) calenote_swipe_1_pane_t1

0x538c,	// (0x0001bb1a) calenote_swipe_2_pane_g1_ParamLimits

0x538c,	// (0x0001bb1a) calenote_swipe_2_pane_g1

0x5826,	// (0x0001bfb4) calenote_swipe_2_pane_g2_ParamLimits

0x5826,	// (0x0001bfb4) calenote_swipe_2_pane_g2

0x0001,

0xfdb7,	// (0x00026545) calenote_swipe_2_pane_g_ParamLimits

0xfdb7,	// (0x00026545) calenote_swipe_2_pane_g

0x5832,	// (0x0001bfc0) calenote_swipe_2_pane_t1_ParamLimits

0x5832,	// (0x0001bfc0) calenote_swipe_2_pane_t1

0x0478,	// (0x00016c06) main_mup_navstr_pane

0xbdaf,	// (0x0002253d) main_mup3_pane_t7_ParamLimits

0xbdaf,	// (0x0002253d) main_mup3_pane_t7

0x79a9,	// (0x0001e137) main_mp4_pane_g6_ParamLimits

0x79a9,	// (0x0001e137) main_mp4_pane_g6

0x7c8c,	// (0x0001e41a) main_image3_pane_t4_ParamLimits

0x7c8c,	// (0x0001e41a) main_image3_pane_t4

0xe57e,	// (0x00024d0c) popup_navstr_preview_pane_ParamLimits

0xe57e,	// (0x00024d0c) popup_navstr_preview_pane

0xe58a,	// (0x00024d18) scroll_navstr_pane_ParamLimits

0xe58a,	// (0x00024d18) scroll_navstr_pane

0x0478,	// (0x00016c06) bg_popup_preview_window_pane_cp04

0x5859,	// (0x0001bfe7) popup_navstr_preview_pane_t1

0xe596,	// (0x00024d24) scroll_navstr_pane_g1_ParamLimits

0xe596,	// (0x00024d24) scroll_navstr_pane_g1

0xe5a3,	// (0x00024d31) scroll_navstr_pane_t1_ParamLimits

0xe5a3,	// (0x00024d31) scroll_navstr_pane_t1

0x57fe,	// (0x0001bf8c) bg_button_pane_cp014

0x57fe,	// (0x0001bf8c) bg_button_pane_cp030

0x532d,	// (0x0001babb) list_double_fisheye_pane_g4_ParamLimits

0x532d,	// (0x0001babb) list_double_fisheye_pane_g4

0x5339,	// (0x0001bac7) list_double_fisheye_pane_g5_ParamLimits

0x5339,	// (0x0001bac7) list_double_fisheye_pane_g5

0x5766,	// (0x0001bef4) sp_fs_scroll_pane_cp03

0x54cf,	// (0x0001bc5d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x54db,	// (0x0001bc69) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfc,	// (0x0002648a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x54e7,	// (0x0001bc75) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe483,	// (0x00024c11) sp_fs_scroll_pane_cp02

0x0dec,	// (0x0001757a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0dec,	// (0x0001757a) popup_sp_fs_calendar_preview_list_single_pane

0x0478,	// (0x00016c06) main_cam6_pano_pane

0x04e9,	// (0x00016c77) main_mup3_pane_ParamLimits

0x0478,	// (0x00016c06) main_phacti_pane

0xdad3,	// (0x00024261) bg_button_pane_cp11

0xdaeb,	// (0x00024279) main_mobtv_info_pane_g2_ParamLimits

0xdaeb,	// (0x00024279) main_mobtv_info_pane_g2

0x0001,

0xfc5c,	// (0x000263ea) main_mobtv_info_pane_g_ParamLimits

0xfc5c,	// (0x000263ea) main_mobtv_info_pane_g

0xdc9f,	// (0x0002442d) sc_clock_pane_t5_ParamLimits

0xdc9f,	// (0x0002442d) sc_clock_pane_t5

0xdd44,	// (0x000244d2) main_radioblah_pane_g1_ParamLimits

0x529b,	// (0x0001ba29) main_radioblah_pane_t3_ParamLimits

0x529b,	// (0x0001ba29) main_radioblah_pane_t3

0x52b3,	// (0x0001ba41) main_radioblah_pane_t4_ParamLimits

0x52b3,	// (0x0001ba41) main_radioblah_pane_t4

0xdd62,	// (0x000244f0) main_radioblah_text_pane_ParamLimits

0xdd62,	// (0x000244f0) main_radioblah_text_pane

0xdd6f,	// (0x000244fd) main_radioblah_info_pane_g1_ParamLimits

0xde08,	// (0x00024596) main_radioblah_info_pane_t4_ParamLimits

0xde08,	// (0x00024596) main_radioblah_info_pane_t4

0x04e9,	// (0x00016c77) main_sp_fs_calendar_pane

0xe5b5,	// (0x00024d43) main_phacti_pane_g1

0xe5bd,	// (0x00024d4b) phacti_note_pane_ParamLimits

0xe5bd,	// (0x00024d4b) phacti_note_pane

0x5870,	// (0x0001bffe) phacti_term_pane_ParamLimits

0x5870,	// (0x0001bffe) phacti_term_pane

0x5885,	// (0x0001c013) phacti_note_pane_t1_ParamLimits

0x5885,	// (0x0001c013) phacti_note_pane_t1

0x589c,	// (0x0001c02a) phacti_term_pane_g1

0x58a4,	// (0x0001c032) phacti_term_pane_t1_ParamLimits

0x58a4,	// (0x0001c032) phacti_term_pane_t1

0x58ce,	// (0x0001c05c) popup_sp_fs_calendar_preview_list_single_pane_g1

0x58d6,	// (0x0001c064) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc1,	// (0x0002654f) popup_sp_fs_calendar_preview_list_single_pane_g

0x58de,	// (0x0001c06c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x58de,	// (0x0001c06c) popup_sp_fs_calendar_preview_list_single_pane_t1

0x58f4,	// (0x0001c082) aid_popup_sp_fs_bg_corner_pane

0x3338,	// (0x00019ac6) popup_sp_fs_calendar_preview_bg_pane_g1

0x0478,	// (0x00016c06) popup_sp_fs_calendar_preview_bg_pane

0x58fc,	// (0x0001c08a) popup_sp_fs_calendar_preview_list_pane

0x04e9,	// (0x00016c77) bg_main_sp_fs_cale_pane_ParamLimits

0x04e9,	// (0x00016c77) bg_main_sp_fs_cale_pane

0x590d,	// (0x0001c09b) listscroll_cale_mrui_pane_ParamLimits

0x590d,	// (0x0001c09b) listscroll_cale_mrui_pane

0x5921,	// (0x0001c0af) listscroll_sp_fs_schedule_track_pane

0x592a,	// (0x0001c0b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x592a,	// (0x0001c0b8) main_sp_fs_ctrlbar_pane_cp01

0x593b,	// (0x0001c0c9) main_sp_fs_ribbon_pane

0x5943,	// (0x0001c0d1) popup_sp_fs_cale_preview_window

0xe5fc,	// (0x00024d8a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5fc,	// (0x00024d8a) list_single_sp_fs_schedule_track_pane

0x39f7,	// (0x0001a185) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x39f7,	// (0x0001a185) bg_sp_fs_highlight_list_pane_cp03

0xe60e,	// (0x00024d9c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe60e,	// (0x00024d9c) list_single_sp_fs_schedule_track_pane_g1

0xe61a,	// (0x00024da8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe61a,	// (0x00024da8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc6,	// (0x00026554) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc6,	// (0x00026554) list_single_sp_fs_schedule_track_pane_g

0xe626,	// (0x00024db4) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe626,	// (0x00024db4) list_single_sp_fs_schedule_track_pane_t1

0xe644,	// (0x00024dd2) sp_fs_schedule_track_pane_ParamLimits

0xe644,	// (0x00024dd2) sp_fs_schedule_track_pane

0x5955,	// (0x0001c0e3) sp_fs_schedule_track_pane_g1

0x595d,	// (0x0001c0eb) sp_fs_schedule_track_pane_g2

0x5965,	// (0x0001c0f3) sp_fs_schedule_track_pane_g3

0x596d,	// (0x0001c0fb) sp_fs_schedule_track_pane_g4

0x5975,	// (0x0001c103) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcb,	// (0x00026559) sp_fs_schedule_track_pane_g

0x40dc,	// (0x0001a86a) bg_sp_fs_schedule_viewer_highlight_g1

0x1210,	// (0x0001799e) bg_sp_fs_schedule_viewer_highlight_g2

0x40e4,	// (0x0001a872) bg_sp_fs_schedule_viewer_highlight_g3

0x40ec,	// (0x0001a87a) bg_sp_fs_schedule_viewer_highlight_g4

0x436f,	// (0x0001aafd) bg_sp_fs_schedule_viewer_highlight_g5

0x40fc,	// (0x0001a88a) bg_sp_fs_schedule_viewer_highlight_g6

0x4104,	// (0x0001a892) bg_sp_fs_schedule_viewer_highlight_g7

0x410c,	// (0x0001a89a) bg_sp_fs_schedule_viewer_highlight_g8

0x11f0,	// (0x0001797e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd6,	// (0x00026564) bg_sp_fs_schedule_viewer_highlight_g

0x0478,	// (0x00016c06) bg_main_sp_fs_ribbon_pane

0xe656,	// (0x00024de4) main_sp_fs_ribbon_pane_g1

0x597d,	// (0x0001c10b) main_sp_fs_ribbon_pane_t1

0xe65f,	// (0x00024ded) main_sp_fs_ribbon_pane_t2

0x598c,	// (0x0001c11a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde9,	// (0x00026577) main_sp_fs_ribbon_pane_t

0x599b,	// (0x0001c129) main_sp_fs_ribbon_scheduler_pane

0x59a3,	// (0x0001c131) bg_main_sp_fs_ribbon_pane_g1

0x59ac,	// (0x0001c13a) bg_main_sp_fs_ribbon_pane_g2

0x59b5,	// (0x0001c143) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf0,	// (0x0002657e) bg_main_sp_fs_ribbon_pane_g

0x59bd,	// (0x0001c14b) main_sp_fs_ribbon_scheduler_pane_g1

0x59c6,	// (0x0001c154) main_sp_fs_ribbon_scheduler_pane_g2

0x59cf,	// (0x0001c15d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf7,	// (0x00026585) main_sp_fs_ribbon_scheduler_pane_g

0x59d8,	// (0x0001c166) list_cale_mrui_pane

0xe66e,	// (0x00024dfc) sp_fs_scroll_pane_cp07_ParamLimits

0xe66e,	// (0x00024dfc) sp_fs_scroll_pane_cp07

0xe684,	// (0x00024e12) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe684,	// (0x00024e12) bg_sp_fs_schedule_viewer_highlight

0x59e1,	// (0x0001c16f) list_single_sp_fs_schedule_track_pane_cp01

0x59e9,	// (0x0001c177) list_sp_fs_schedule_track_pane

0x59f1,	// (0x0001c17f) sp_fs_scroll_pane_cp06_ParamLimits

0x59f1,	// (0x0001c17f) sp_fs_scroll_pane_cp06

0x3338,	// (0x00019ac6) bgmain_sp_fs_calendar_pane_g1

0xe691,	// (0x00024e1f) list_single_cale_mrui_pane_ParamLimits

0xe691,	// (0x00024e1f) list_single_cale_mrui_pane

0x5a03,	// (0x0001c191) list_single_cale_mrui_row_pane_ParamLimits

0x5a03,	// (0x0001c191) list_single_cale_mrui_row_pane

0x5a10,	// (0x0001c19e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5a10,	// (0x0001c19e) list_single_cale_mrui_row_pane_g1

0x5a48,	// (0x0001c1d6) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5a48,	// (0x0001c1d6) list_single_cale_mrui_row_pane_t1

0xe6b5,	// (0x00024e43) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe6b5,	// (0x00024e43) list_single_cale_mrui_row_pane_t2

0x5a5a,	// (0x0001c1e8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5a5a,	// (0x0001c1e8) list_single_cale_mrui_row_pane_t3

0x5a89,	// (0x0001c217) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5a89,	// (0x0001c217) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00026591) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00026591) list_single_cale_mrui_row_pane_t

0xe71b,	// (0x00024ea9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe71b,	// (0x00024ea9) list_single_cmail_header_editor_pane_bg_cp01

0xe73f,	// (0x00024ecd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe73f,	// (0x00024ecd) list_single_cmail_header_editor_pane_bg_cp02

0xe75b,	// (0x00024ee9) main_radioblah_text_pane_t1_ParamLimits

0xe75b,	// (0x00024ee9) main_radioblah_text_pane_t1

0x5ab8,	// (0x0001c246) cam6_indi_pane_cp01

0x5ac0,	// (0x0001c24e) cam6_mode_pane_cp01

0x5ac8,	// (0x0001c256) cam6_pano_pane

0x5ad1,	// (0x0001c25f) cam6_zoom_pane_cp01

0x5adb,	// (0x0001c269) cam6_pano_image_pane

0x5ae4,	// (0x0001c272) cam6_pano_pane_g1

0x500b,	// (0x0001b799) cam6_pano_pane_g2

0x5aed,	// (0x0001c27b) cam6_pano_pane_g3

0x5af6,	// (0x0001c284) cam6_pano_pane_g4

0x3918,	// (0x0001a0a6) cam6_pano_pane_g5

0x5aff,	// (0x0001c28d) cam6_pano_pane_g6

0x5b07,	// (0x0001c295) cam6_pano_pane_g7

0x5b0f,	// (0x0001c29d) cam6_pano_pane_g8

0x5b18,	// (0x0001c2a6) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x0002659a) cam6_pano_pane_g

0x0478,	// (0x00016c06) main_browser_tag_pane

0x5851,	// (0x0001bfdf) grid_navstr_albumart_pane

0x5b23,	// (0x0001c2b1) cell_navstr_albumart_pane_ParamLimits

0x5b23,	// (0x0001c2b1) cell_navstr_albumart_pane

0x5b3f,	// (0x0001c2cd) cell_navstr_albumart_pane_g1

0x2c1c,	// (0x000193aa) cell_navstr_albumart_pane_g2

0x2c2c,	// (0x000193ba) cell_navstr_albumart_pane_g3

0x2c24,	// (0x000193b2) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x000265ad) cell_navstr_albumart_pane_g

0xe776,	// (0x00024f04) bt_list_pane_ParamLimits

0xe776,	// (0x00024f04) bt_list_pane

0xe78f,	// (0x00024f1d) bt_list_pane_t1

0xe79e,	// (0x00024f2c) bt_list_pane_t2

0x0001,

0xfe28,	// (0x000265b6) bt_list_pane_t

0x0478,	// (0x00016c06) main_cale_prevew_pane

0xe7ad,	// (0x00024f3b) popup_cale_preview_window_ParamLimits

0xe7ad,	// (0x00024f3b) popup_cale_preview_window

0x04e9,	// (0x00016c77) bg_popup_preview_window_pane_cp05_ParamLimits

0x04e9,	// (0x00016c77) bg_popup_preview_window_pane_cp05

0x5b47,	// (0x0001c2d5) list_cale_preview_pane_ParamLimits

0x5b47,	// (0x0001c2d5) list_cale_preview_pane

0xe7c8,	// (0x00024f56) list_double_cale_preview_pane_ParamLimits

0xe7c8,	// (0x00024f56) list_double_cale_preview_pane

0xe7dc,	// (0x00024f6a) list_single_cale_preview_pane_ParamLimits

0xe7dc,	// (0x00024f6a) list_single_cale_preview_pane

0xe7f4,	// (0x00024f82) list_single_cale_preview_pane_g1

0xe7fc,	// (0x00024f8a) list_single_cale_preview_pane_t1_ParamLimits

0xe7fc,	// (0x00024f8a) list_single_cale_preview_pane_t1

0xe811,	// (0x00024f9f) list_double_cale_preview_pane_g1

0xe819,	// (0x00024fa7) list_double_cale_preview_pane_t1_ParamLimits

0xe819,	// (0x00024fa7) list_double_cale_preview_pane_t1

0xe82e,	// (0x00024fbc) list_double_cale_preview_pane_t2_ParamLimits

0xe82e,	// (0x00024fbc) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x000265bb) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x000265bb) list_double_cale_preview_pane_t

0x0478,	// (0x00016c06) main_ezdial_pane

0x04e9,	// (0x00016c77) main_sp_fs_email_pane_ParamLimits

0xdfe2,	// (0x00024770) cmail_ddmenu_btn01_pane_ParamLimits

0xdfe2,	// (0x00024770) cmail_ddmenu_btn01_pane

0xdfff,	// (0x0002478d) cmail_ddmenu_btn02_pane_ParamLimits

0xdfff,	// (0x0002478d) cmail_ddmenu_btn02_pane

0xe01d,	// (0x000247ab) cmail_ddmenu_btn03_pane_ParamLimits

0xe01d,	// (0x000247ab) cmail_ddmenu_btn03_pane

0xe04b,	// (0x000247d9) main_sp_fs_ctrlbar_pane_ParamLimits

0xe067,	// (0x000247f5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe48d,	// (0x00024c1b) list_cmail_body_pane_ParamLimits

0x5775,	// (0x0001bf03) bg_button_pane_cp12

0x578a,	// (0x0001bf18) list_single_cmail_header_detail_pane_g3_ParamLimits

0x578a,	// (0x0001bf18) list_single_cmail_header_detail_pane_g3

0xe513,	// (0x00024ca1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe513,	// (0x00024ca1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb2,	// (0x00026540) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb2,	// (0x00026540) list_single_cmail_header_detail_pane_t

0x58b9,	// (0x0001c047) phacti_term_pane_t2_ParamLimits

0x58b9,	// (0x0001c047) phacti_term_pane_t2

0x0001,

0xfdbc,	// (0x0002654a) phacti_term_pane_t_ParamLimits

0xfdbc,	// (0x0002654a) phacti_term_pane_t

0x5b53,	// (0x0001c2e1) aid_size_list_single_double

0xe846,	// (0x00024fd4) popup_ezdial_listscroll_window

0xe866,	// (0x00024ff4) popup_number_entry_window_cp01

0x1996,	// (0x00018124) bg_popup_call_pane_cp09

0x5b5f,	// (0x0001c2ed) ezdial_list_pane

0x5b67,	// (0x0001c2f5) scroll_pane_cp23

0x3117,	// (0x000198a5) bg_button_pane_cp028_ParamLimits

0x3117,	// (0x000198a5) bg_button_pane_cp028

0xe874,	// (0x00025002) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe874,	// (0x00025002) cmail_ddmenu_btn01_pane_g1

0xe884,	// (0x00025012) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe884,	// (0x00025012) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x000265c0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x000265c0) cmail_ddmenu_btn01_pane_g

0x5b6f,	// (0x0001c2fd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5b6f,	// (0x0001c2fd) cmail_ddmenu_btn01_pane_t1

0x2e03,	// (0x00019591) bg_button_pane_cp029_ParamLimits

0x2e03,	// (0x00019591) bg_button_pane_cp029

0xe884,	// (0x00025012) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe884,	// (0x00025012) cmail_ddmenu_btn02_pane_g1

0xe89c,	// (0x0002502a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe89c,	// (0x0002502a) cmail_ddmenu_btn02_pane_t1

0x39f7,	// (0x0001a185) bg_button_pane_cp031_ParamLimits

0x39f7,	// (0x0001a185) bg_button_pane_cp031

0xe884,	// (0x00025012) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe884,	// (0x00025012) cmail_ddmenu_btn03_pane_g1

0xe89c,	// (0x0002502a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe89c,	// (0x0002502a) cmail_ddmenu_btn03_pane_t1

0xc5ec,	// (0x00022d7a) cell_dialer2_keypad_pane_t1_ParamLimits

0xc606,	// (0x00022d94) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc606,	// (0x00022d94) cell_dialer2_keypad_pane_t1_copy1

0xd989,	// (0x00024117) ncimui_group_button_pane

0x04e9,	// (0x00016c77) main_sp_fs_calendar_pane_ParamLimits

0xe4a2,	// (0x00024c30) list_single_cmail_header_caption_pane_ParamLimits

0x5904,	// (0x0001c092) aid_recal_txt_sm_pane

0x0478,	// (0x00016c06) mian_recal_day_pane

0x5943,	// (0x0001c0d1) popup_sp_fs_cale_preview_window_ParamLimits

0x0478,	// (0x00016c06) list_recal_day_pane

0x5ba6,	// (0x0001c334) list_single_recal_day_pane_ParamLimits

0x5ba6,	// (0x0001c334) list_single_recal_day_pane

0x5bb8,	// (0x0001c346) list_single_recal_day_pane_g1_ParamLimits

0x5bb8,	// (0x0001c346) list_single_recal_day_pane_g1

0x5bc4,	// (0x0001c352) list_single_recal_day_pane_g2_ParamLimits

0x5bc4,	// (0x0001c352) list_single_recal_day_pane_g2

0x5bd0,	// (0x0001c35e) list_single_recal_day_pane_g3_ParamLimits

0x5bd0,	// (0x0001c35e) list_single_recal_day_pane_g3

0xe8c0,	// (0x0002504e) list_single_recal_day_pane_g4_ParamLimits

0xe8c0,	// (0x0002504e) list_single_recal_day_pane_g4

0x5bdc,	// (0x0001c36a) list_single_recal_day_pane_g5_ParamLimits

0x5bdc,	// (0x0001c36a) list_single_recal_day_pane_g5

0x5be8,	// (0x0001c376) list_single_recal_day_pane_g6_ParamLimits

0x5be8,	// (0x0001c376) list_single_recal_day_pane_g6

0x0005,

0xfe41,	// (0x000265cf) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x000265cf) list_single_recal_day_pane_g

0x5bf4,	// (0x0001c382) list_single_recal_day_pane_t1

0x5c02,	// (0x0001c390) list_single_recal_day_pane_t2

0x0001,

0xfe4e,	// (0x000265dc) list_single_recal_day_pane_t

0xe8ce,	// (0x0002505c) ncimui_query_button_pane_ParamLimits

0xe8ce,	// (0x0002505c) ncimui_query_button_pane

0xe8de,	// (0x0002506c) ncimui_query_button_pane_t1_ParamLimits

0xe8de,	// (0x0002506c) ncimui_query_button_pane_t1

0x5c10,	// (0x0001c39e) ncimui_query_button_pane_t2_ParamLimits

0x5c10,	// (0x0001c39e) ncimui_query_button_pane_t2

0x0001,

0xfe53,	// (0x000265e1) ncimui_query_button_pane_t_ParamLimits

0xfe53,	// (0x000265e1) ncimui_query_button_pane_t

0xe8f1,	// (0x0002507f) query_button_pane_ParamLimits

0xe8f1,	// (0x0002507f) query_button_pane

0x0478,	// (0x00016c06) bg_button_pane_cp0028

0x5c23,	// (0x0001c3b1) query_button_pane_t1

0xb0ec,	// (0x0002187a) main_tport_pane_ParamLimits

0xe3b0,	// (0x00024b3e) bg_popup_window_pane_cp01_ParamLimits

0xe3b0,	// (0x00024b3e) bg_popup_window_pane_cp01

0xe3bd,	// (0x00024b4b) heading_pane_cp08_ParamLimits

0xe3bd,	// (0x00024b4b) heading_pane_cp08

0xe3cb,	// (0x00024b59) heading_pane_cp07_ParamLimits

0xe3cb,	// (0x00024b59) heading_pane_cp07

0x5740,	// (0x0001bece) cell_tport_appsw_pane_g2

0x0002,

0xfd9f,	// (0x0002652d) cell_tport_appsw_pane_g

0xa868,	// (0x00020ff6) input_candi_list_open_g1

0x1403,	// (0x00017b91) list_cale_time_pane_g6_ParamLimits

0x1403,	// (0x00017b91) list_cale_time_pane_g6

0xb869,	// (0x00021ff7) aid_size_touch_calib_1_ParamLimits

0xb869,	// (0x00021ff7) aid_size_touch_calib_1

0xb875,	// (0x00022003) aid_size_touch_calib_2_ParamLimits

0xb875,	// (0x00022003) aid_size_touch_calib_2

0xb883,	// (0x00022011) aid_size_touch_calib_3_ParamLimits

0xb883,	// (0x00022011) aid_size_touch_calib_3

0xb893,	// (0x00022021) aid_size_touch_calib_4_ParamLimits

0xb893,	// (0x00022021) aid_size_touch_calib_4

0xb8a1,	// (0x0002202f) main_touch_calib_button_group_pane_ParamLimits

0xb8a1,	// (0x0002202f) main_touch_calib_button_group_pane

0xb8af,	// (0x0002203d) main_touch_calib_pane_g1_ParamLimits

0xb8bb,	// (0x00022049) main_touch_calib_pane_g2_ParamLimits

0xb8c7,	// (0x00022055) main_touch_calib_pane_g3_ParamLimits

0xb8d3,	// (0x00022061) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00025f12) main_touch_calib_pane_g_ParamLimits

0xb8df,	// (0x0002206d) main_touch_calib_pane_t1_ParamLimits

0xb8f6,	// (0x00022084) main_touch_calib_pane_t2_ParamLimits

0xb90d,	// (0x0002209b) main_touch_calib_pane_t3_ParamLimits

0xb921,	// (0x000220af) main_touch_calib_pane_t4_ParamLimits

0xb937,	// (0x000220c5) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00025f1b) main_touch_calib_pane_t_ParamLimits

0x36e2,	// (0x00019e70) list_single_fp_cale_pane_g3_ParamLimits

0x36e2,	// (0x00019e70) list_single_fp_cale_pane_g3

0x7e7f,	// (0x0001e60d) bg_button_pane_cp012_ParamLimits

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp03_ParamLimits

0x827e,	// (0x0001ea0c) cell_vitu2_function_top_pane_g1_ParamLimits

0x7e7f,	// (0x0001e60d) bg_vkb2_func_pane_cp04_ParamLimits

0xd938,	// (0x000240c6) main_ncimui_button_group_pane_ParamLimits

0xd938,	// (0x000240c6) main_ncimui_button_group_pane

0xd977,	// (0x00024105) main_ncimui_pane_t3_ParamLimits

0xd977,	// (0x00024105) main_ncimui_pane_t3

0x5867,	// (0x0001bff5) phacti_button_group_pane

0x5b53,	// (0x0001c2e1) aid_size_list_single_double_ParamLimits

0xe846,	// (0x00024fd4) popup_ezdial_listscroll_window_ParamLimits

0xe866,	// (0x00024ff4) popup_number_entry_window_cp01_ParamLimits

0xe8fe,	// (0x0002508c) phacti_button_pane_ParamLimits

0xe8fe,	// (0x0002508c) phacti_button_pane

0x0478,	// (0x00016c06) bg_button_pane_cp14

0x5c31,	// (0x0001c3bf) phacti_button_pane_t1

0xe90f,	// (0x0002509d) main_touch_calib_button_pane_ParamLimits

0xe90f,	// (0x0002509d) main_touch_calib_button_pane

0x0c52,	// (0x000173e0) bg_button_pane_cp18_ParamLimits

0x0c52,	// (0x000173e0) bg_button_pane_cp18

0x5c3f,	// (0x0001c3cd) main_touch_calib_button_pane_t1_ParamLimits

0x5c3f,	// (0x0001c3cd) main_touch_calib_button_pane_t1

0x5c55,	// (0x0001c3e3) main_touch_calib_button_pane_t2_ParamLimits

0x5c55,	// (0x0001c3e3) main_touch_calib_button_pane_t2

0x0001,

0xfe58,	// (0x000265e6) main_touch_calib_button_pane_t_ParamLimits

0xfe58,	// (0x000265e6) main_touch_calib_button_pane_t

0x0478,	// (0x00016c06) cell_ncimui_button_pane

0x0478,	// (0x00016c06) bg_button_pane_cp032

0x5c73,	// (0x0001c401) cell_ncimui_button_pane_t1

0x7b9d,	// (0x0001e32b) image3_infobar_pane_ParamLimits

0x7b9d,	// (0x0001e32b) image3_infobar_pane

0xdcc1,	// (0x0002444f) fs_bigclock_status_pane_ParamLimits

0xdcc1,	// (0x0002444f) fs_bigclock_status_pane

0xdcce,	// (0x0002445c) main_fs_bigclock_clock_pane_ParamLimits

0xdcce,	// (0x0002445c) main_fs_bigclock_clock_pane

0xdcde,	// (0x0002446c) main_fs_bigclock_indi_pane_ParamLimits

0xdcde,	// (0x0002446c) main_fs_bigclock_indi_pane

0xdd10,	// (0x0002449e) main_fs_bigclock_swipe_pane_ParamLimits

0xdd10,	// (0x0002449e) main_fs_bigclock_swipe_pane

0x0478,	// (0x00016c06) main_fs_clock_dumped_data

0x5118,	// (0x0001b8a6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5118,	// (0x0001b8a6) list_single_fs_bigclock_indicator_pane_g1

0x5138,	// (0x0001b8c6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5138,	// (0x0001b8c6) list_single_fs_bigclock_indicator_pane_g2

0x5152,	// (0x0001b8e0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5152,	// (0x0001b8e0) list_single_fs_bigclock_indicator_pane_g3

0x516e,	// (0x0001b8fc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x516e,	// (0x0001b8fc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc90,	// (0x0002641e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc90,	// (0x0002641e) list_single_fs_bigclock_indicator_pane_g

0x5194,	// (0x0001b922) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5194,	// (0x0001b922) list_single_fs_bigclock_indicator_pane_t1

0x51bc,	// (0x0001b94a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x51bc,	// (0x0001b94a) list_single_fs_bigclock_indicator_pane_t2

0x51e4,	// (0x0001b972) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x51e4,	// (0x0001b972) list_single_fs_bigclock_indicator_pane_t3

0x520e,	// (0x0001b99c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x520e,	// (0x0001b99c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc9b,	// (0x00026429) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc9b,	// (0x00026429) list_single_fs_bigclock_indicator_pane_t

0x5c81,	// (0x0001c40f) image3_infobar_fav_pane_ParamLimits

0x5c81,	// (0x0001c40f) image3_infobar_fav_pane

0x5c91,	// (0x0001c41f) image3_infobar_loc_pane_ParamLimits

0x5c91,	// (0x0001c41f) image3_infobar_loc_pane

0x5ca7,	// (0x0001c435) image3_infobar_time_pane_ParamLimits

0x5ca7,	// (0x0001c435) image3_infobar_time_pane

0x3338,	// (0x00019ac6) image3_infobar_time_pane_g1

0x5cb7,	// (0x0001c445) image3_infobar_time_pane_t1

0x3338,	// (0x00019ac6) image3_infobar_loc_pane_g1

0x5cc5,	// (0x0001c453) image3_infobar_loc_pane_g2

0x0001,

0xfe5d,	// (0x000265eb) image3_infobar_loc_pane_g

0x5ccd,	// (0x0001c45b) image3_infobar_loc_pane_t1

0x3338,	// (0x00019ac6) image3_infobar_fav_pane_g1

0x5cdb,	// (0x0001c469) image3_infobar_fav_pane_g2

0x0001,

0xfe62,	// (0x000265f0) image3_infobar_fav_pane_g

0x5ce3,	// (0x0001c471) fs_bigclock_status_battery_pane

0x5cec,	// (0x0001c47a) fs_bigclock_status_signal_pane

0x5cf5,	// (0x0001c483) fs_bigclock_status_title_pane

0x5cfe,	// (0x0001c48c) fs_bigclock_status_signal_pane_g1

0x5d07,	// (0x0001c495) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe67,	// (0x000265f5) fs_bigclock_status_signal_pane_g

0x5d0f,	// (0x0001c49d) fs_bigclock_status_battery_pane_g1

0x5d18,	// (0x0001c4a6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6c,	// (0x000265fa) fs_bigclock_status_battery_pane_g

0x5d20,	// (0x0001c4ae) fs_bigclock_status_title_pane_t1

0x3338,	// (0x00019ac6) main_fs_bigclock_clock_pane_g1

0x5d2e,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g2

0x5d2e,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g3

0x5d2e,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe71,	// (0x000265ff) main_fs_bigclock_clock_pane_g

0x5d3a,	// (0x0001c4c8) main_fs_bigclock_clock_pane_t1

0x5d48,	// (0x0001c4d6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7a,	// (0x00026608) main_fs_bigclock_clock_pane_t

0x5d57,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5d57,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane

0xe921,	// (0x000250af) list_single_fs_bigclock_pane_ParamLimits

0xe921,	// (0x000250af) list_single_fs_bigclock_pane

0x5d71,	// (0x0001c4ff) main_fs_bigclock_indicator_pane_t1

0x5d80,	// (0x0001c50e) list_single_fs_bigclock_pane_g1

0x5d88,	// (0x0001c516) list_single_fs_bigclock_pane_t1

0x3338,	// (0x00019ac6) main_fs_bigclock_swipe_pane_g1

0x5dc6,	// (0x0001c554) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8b,	// (0x00026619) main_fs_bigclock_swipe_pane_g

0x5dce,	// (0x0001c55c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5dce,	// (0x0001c55c) main_fs_bigclock_swipe_pane_t1

0xa05f,	// (0x000207ed) call_type_pane_ParamLimits

0x0478,	// (0x00016c06) main_btmg_pane

0x5a3c,	// (0x0001c1ca) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5a3c,	// (0x0001c1ca) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfe,	// (0x0002658c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfe,	// (0x0002658c) list_single_cale_mrui_row_pane_g

0x5b8d,	// (0x0001c31b) list_recal_vselct_arw_lo_pane

0x5b95,	// (0x0001c323) list_recal_vselct_arw_up_pane

0x5b9d,	// (0x0001c32b) list_recal_vselct_pane

0x5deb,	// (0x0001c579) btmg_button_pane

0xe984,	// (0x00025112) main_btmg_pane_g1

0x0478,	// (0x00016c06) bg_button_pane_cp044

0x5df5,	// (0x0001c583) btmg_button_pane_t1

0x2dfb,	// (0x00019589) aid_listscroll_gen

0x04e9,	// (0x00016c77) main_cntbar_detail_pane

0x5756,	// (0x0001bee4) list_cmail_folder_pane

0x5766,	// (0x0001bef4) sp_fs_scroll_pane_cp03_ParamLimits

0xe98c,	// (0x0002511a) list_single_fs_dyc_pane_cp01_ParamLimits

0xe98c,	// (0x0002511a) list_single_fs_dyc_pane_cp01

0x5e03,	// (0x0001c591) aid_size_cmail_indent

0x5e0c,	// (0x0001c59a) list_single_dyc_row_pane_cp01

0xe9c3,	// (0x00025151) cntbar_detail_list_pane_ParamLimits

0xe9c3,	// (0x00025151) cntbar_detail_list_pane

0xea03,	// (0x00025191) main_cntbar_detail_cont_pane_ParamLimits

0xea03,	// (0x00025191) main_cntbar_detail_cont_pane

0x9ff9,	// (0x00020787) scroll_pane_cp032_ParamLimits

0x9ff9,	// (0x00020787) scroll_pane_cp032

0xea0f,	// (0x0002519d) cntbar_detail_list_event_pane_ParamLimits

0xea0f,	// (0x0002519d) cntbar_detail_list_event_pane

0xe9d1,	// (0x0002515f) cntbar_detail_list_shct_pane

0x125e,	// (0x000179ec) aid_list_gen

0x5e15,	// (0x0001c5a3) aid_scroll

0x5e1e,	// (0x0001c5ac) aid_size_touch_scroll_bar

0x5e27,	// (0x0001c5b5) aid_list_double

0x5e30,	// (0x0001c5be) aid_list_single

0xea1f,	// (0x000251ad) aid_list_single_lg

0x5e39,	// (0x0001c5c7) aid_list_z_g_a_sm

0x5e41,	// (0x0001c5cf) aid_list_z_g_d

0x5e49,	// (0x0001c5d7) aid_txt_z_prm

0x5e57,	// (0x0001c5e5) aid_txt_z_prm_cp01

0x5e65,	// (0x0001c5f3) aid_txt_z_sec

0xea28,	// (0x000251b6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea28,	// (0x000251b6) main_cntbar_detail_cont_pane_g1

0xea35,	// (0x000251c3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea35,	// (0x000251c3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe90,	// (0x0002661e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe90,	// (0x0002661e) main_cntbar_detail_cont_pane_g

0x5e73,	// (0x0001c601) main_cntbar_detail_cont_pane_t1

0x5e81,	// (0x0001c60f) main_cntbar_detail_cont_pane_t2

0x5e8f,	// (0x0001c61d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe95,	// (0x00026623) main_cntbar_detail_cont_pane_t

0xea41,	// (0x000251cf) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea41,	// (0x000251cf) cell_cntbar_detail_list_shct_pane

0x5e9d,	// (0x0001c62b) cntbar_detail_list_shct_pane_g1

0x5ea6,	// (0x0001c634) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9c,	// (0x0002662a) cntbar_detail_list_shct_pane_g

0xea55,	// (0x000251e3) cntbar_detail_list_event_pane_g1_ParamLimits

0xea55,	// (0x000251e3) cntbar_detail_list_event_pane_g1

0xea61,	// (0x000251ef) cntbar_detail_list_event_pane_g2_ParamLimits

0xea61,	// (0x000251ef) cntbar_detail_list_event_pane_g2

0x0005,

0xfea1,	// (0x0002662f) cntbar_detail_list_event_pane_g_ParamLimits

0xfea1,	// (0x0002662f) cntbar_detail_list_event_pane_g

0xeacf,	// (0x0002525d) cntbar_detail_list_event_pane_t1_ParamLimits

0xeacf,	// (0x0002525d) cntbar_detail_list_event_pane_t1

0xeae4,	// (0x00025272) cntbar_detail_list_event_pane_t2_ParamLimits

0xeae4,	// (0x00025272) cntbar_detail_list_event_pane_t2

0x0002,

0xfeae,	// (0x0002663c) cntbar_detail_list_event_pane_t_ParamLimits

0xfeae,	// (0x0002663c) cntbar_detail_list_event_pane_t

0x3338,	// (0x00019ac6) cell_cntbar_detail_list_shct_pane_g1

0xa388,	// (0x00020b16) navi_pane_mv_g3

0x04e9,	// (0x00016c77) main_cntbar_detail_pane_ParamLimits

0x0478,	// (0x00016c06) main_notif_wgt_pane

0x78fe,	// (0x0001e08c) aid_tch_main_mp4_pane_g4

0x7b13,	// (0x0001e2a1) popup_slider_window_cp02

0x5b84,	// (0x0001c312) list_recal_day_event_pane

0xe9a3,	// (0x00025131) cntbar_detail_btn_pane_ParamLimits

0xe9a3,	// (0x00025131) cntbar_detail_btn_pane

0xe9b3,	// (0x00025141) cntbar_detail_btn_pane_cp01_ParamLimits

0xe9b3,	// (0x00025141) cntbar_detail_btn_pane_cp01

0xe9d1,	// (0x0002515f) cntbar_detail_list_shct_pane_ParamLimits

0xe9dd,	// (0x0002516b) cntbar_detail_pane_g1_ParamLimits

0xe9dd,	// (0x0002516b) cntbar_detail_pane_g1

0xe9ed,	// (0x0002517b) cntbar_detail_pane_t1_ParamLimits

0xe9ed,	// (0x0002517b) cntbar_detail_pane_t1

0xea6d,	// (0x000251fb) cntbar_detail_list_event_pane_g3_ParamLimits

0xea6d,	// (0x000251fb) cntbar_detail_list_event_pane_g3

0xea85,	// (0x00025213) cntbar_detail_list_event_pane_g4_ParamLimits

0xea85,	// (0x00025213) cntbar_detail_list_event_pane_g4

0xea9d,	// (0x0002522b) cntbar_detail_list_event_pane_g5_ParamLimits

0xea9d,	// (0x0002522b) cntbar_detail_list_event_pane_g5

0xeab5,	// (0x00025243) cntbar_detail_list_event_pane_g6_ParamLimits

0xeab5,	// (0x00025243) cntbar_detail_list_event_pane_g6

0xeaf9,	// (0x00025287) cntbar_detail_list_event_pane_t3_ParamLimits

0xeaf9,	// (0x00025287) cntbar_detail_list_event_pane_t3

0xeb0b,	// (0x00025299) popup_notif_wgt_window_ParamLimits

0xeb0b,	// (0x00025299) popup_notif_wgt_window

0xeb1b,	// (0x000252a9) popup_submenu_window_cp01_ParamLimits

0xeb1b,	// (0x000252a9) popup_submenu_window_cp01

0x1996,	// (0x00018124) bg_popup_window_pane_cp10

0x5eaf,	// (0x0001c63d) listscroll_notif_wgt_pane

0x5eb9,	// (0x0001c647) list_notif_wgt_window

0x5ec2,	// (0x0001c650) scroll_pane_cp033

0x5ecb,	// (0x0001c659) list_notif_wgt_row_pane_ParamLimits

0x5ecb,	// (0x0001c659) list_notif_wgt_row_pane

0x5edf,	// (0x0001c66d) aid_size_list_notif_wgt_del

0x5ee8,	// (0x0001c676) list_notif_wgt_row_pane_g1

0x5ef0,	// (0x0001c67e) list_notif_wgt_row_pane_g2

0x5ef8,	// (0x0001c686) list_notif_wgt_row_pane_g3

0x0002,

0xfeb5,	// (0x00026643) list_notif_wgt_row_pane_g

0x5f01,	// (0x0001c68f) list_notif_wgt_row_pane_t1

0x5f0f,	// (0x0001c69d) list_notif_wgt_row_pane_t2

0x5f1d,	// (0x0001c6ab) list_notif_wgt_row_pane_t3

0x0002,

0xfebc,	// (0x0002664a) list_notif_wgt_row_pane_t

0x43af,	// (0x0001ab3d) list_recal_day_event_pane_g1

0x5f2b,	// (0x0001c6b9) list_recal_day_event_pane_t1

0x0478,	// (0x00016c06) bg_button_pane_cp045

0x5f3a,	// (0x0001c6c8) cntbar_detail_btn_pane_t1

0x2e03,	// (0x00019591) main_callh_pane_ParamLimits

0x2e03,	// (0x00019591) main_callh_pane

0x0478,	// (0x00016c06) main_coverflow0_pane

0x0478,	// (0x00016c06) main_wgtman_pane

0xdd28,	// (0x000244b6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdd28,	// (0x000244b6) main_fs_bigclock_unlock_btn_pane

0x5738,	// (0x0001bec6) bg_button_pane_cp16

0xe436,	// (0x00024bc4) cell_tport_appsw_pane_g3

0xeb29,	// (0x000252b7) cf0_flow_pane_ParamLimits

0xeb29,	// (0x000252b7) cf0_flow_pane

0x5f48,	// (0x0001c6d6) listscroll_cf0_pane

0x5f51,	// (0x0001c6df) main_cf0_pane_g1

0xeb38,	// (0x000252c6) main_cf0_pane_t1_ParamLimits

0xeb38,	// (0x000252c6) main_cf0_pane_t1

0xeb4c,	// (0x000252da) main_cf0_pane_t2_ParamLimits

0xeb4c,	// (0x000252da) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x00026651) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x00026651) main_cf0_pane_t

0x5f5b,	// (0x0001c6e9) scroll_pane_cp11

0xeb60,	// (0x000252ee) cf0_flow_pane_g1

0xeb68,	// (0x000252f6) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x00026656) cf0_flow_pane_g

0xeb70,	// (0x000252fe) cf0_flow_pane_t1

0x0478,	// (0x00016c06) main_call6_pane

0x0478,	// (0x00016c06) main_calllock_pane

0xeb7e,	// (0x0002530c) call6_btn_grp_pane_ParamLimits

0xeb7e,	// (0x0002530c) call6_btn_grp_pane

0xeb8d,	// (0x0002531b) call6_pane_g1_ParamLimits

0xeb8d,	// (0x0002531b) call6_pane_g1

0xeb9d,	// (0x0002532b) popup_call6_1st_window_ParamLimits

0xeb9d,	// (0x0002532b) popup_call6_1st_window

0xebab,	// (0x00025339) popup_call6_2nd_window_ParamLimits

0xebab,	// (0x00025339) popup_call6_2nd_window

0xebb9,	// (0x00025347) cell_call6_btn_pane_ParamLimits

0xebb9,	// (0x00025347) cell_call6_btn_pane

0x1996,	// (0x00018124) bg_popup_call2_in_pane_cp03

0x5f66,	// (0x0001c6f4) popup_call6_1st_window_g1

0x5f6e,	// (0x0001c6fc) popup_call6_1st_window_g2

0x5f76,	// (0x0001c704) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0002665b) popup_call6_1st_window_g

0x5f7e,	// (0x0001c70c) popup_call6_1st_window_t1

0x5f8d,	// (0x0001c71b) popup_call6_1st_window_t2

0x5f9d,	// (0x0001c72b) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x00026662) popup_call6_1st_window_t

0x1996,	// (0x00018124) bg_popup_call2_in_pane_cp04

0x5f66,	// (0x0001c6f4) popup_call6_2nd_window_g1

0x5f6e,	// (0x0001c6fc) popup_call6_2nd_window_g2

0x5f76,	// (0x0001c704) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0002665b) popup_call6_2nd_window_g

0x5f7e,	// (0x0001c70c) popup_call6_2nd_window_t1

0x0478,	// (0x00016c06) bg_button_pane_cp15

0x5fad,	// (0x0001c73b) cell_call6_btn_pane_g1

0x5fb6,	// (0x0001c744) cell_call6_btn_pane_t1

0xebc8,	// (0x00025356) listscroll_wgtman_pane_ParamLimits

0xebc8,	// (0x00025356) listscroll_wgtman_pane

0xebe6,	// (0x00025374) wgtman_btn_pane_ParamLimits

0xebe6,	// (0x00025374) wgtman_btn_pane

0x185c,	// (0x00017fea) aid_scroll_copy1

0x5fc5,	// (0x0001c753) list_wgtman_pane

0xec1b,	// (0x000253a9) wgtman_btn_pane_g1_ParamLimits

0xec1b,	// (0x000253a9) wgtman_btn_pane_g1

0xec43,	// (0x000253d1) wgtman_btn_pane_t1_ParamLimits

0xec43,	// (0x000253d1) wgtman_btn_pane_t1

0x5fcf,	// (0x0001c75d) wgtman_btn_pane_t2_ParamLimits

0x5fcf,	// (0x0001c75d) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x00026669) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x00026669) wgtman_btn_pane_t

0x5fe6,	// (0x0001c774) listrow_wgtman_pane_ParamLimits

0x5fe6,	// (0x0001c774) listrow_wgtman_pane

0x5ffa,	// (0x0001c788) listrow_wgtman_pane_g1

0xec7a,	// (0x00025408) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0002666e) listrow_wgtman_pane_g

0x6003,	// (0x0001c791) listrow_wgtman_pane_t1

0x6011,	// (0x0001c79f) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x00026673) listrow_wgtman_pane_t

0x601f,	// (0x0001c7ad) wait_bar_pane_cp09

0x6027,	// (0x0001c7b5) main_calllock_btn_pane

0x6031,	// (0x0001c7bf) main_calllock_pane_g1

0x0478,	// (0x00016c06) bg_button_pane_cp17

0x603d,	// (0x0001c7cb) main_calllock_btn_pane_g1

0x6046,	// (0x0001c7d4) main_calllock_btn_pane_t1

0x0478,	// (0x00016c06) main_dialer3_pane

0x0478,	// (0x00016c06) main_fmrd2_pane

0x3338,	// (0x00019ac6) main_fs_bigclock_unlock_btn_pane_g1

0x605d,	// (0x0001c7eb) main_fs_bigclock_unlock_btn_pane_t1

0xec84,	// (0x00025412) area_fmrd2_info_pane_ParamLimits

0xec84,	// (0x00025412) area_fmrd2_info_pane

0xec92,	// (0x00025420) area_fmrd2_visual_pane_ParamLimits

0xec92,	// (0x00025420) area_fmrd2_visual_pane

0xeca0,	// (0x0002542e) fmrd2_indi_pane_ParamLimits

0xeca0,	// (0x0002542e) fmrd2_indi_pane

0xecad,	// (0x0002543b) area_fmrd2_visual_pane_g1

0xecb5,	// (0x00025443) area_fmrd2_visual_pane_t1

0xecc5,	// (0x00025453) area_fmrd2_visual_pane_t2

0xecd5,	// (0x00025463) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0002667d) area_fmrd2_visual_pane_t

0xece5,	// (0x00025473) area_fmrd2_info_pane_g1

0xeced,	// (0x0002547b) area_fmrd2_info_pane_t1

0xecfd,	// (0x0002548b) area_fmrd2_info_pane_t2

0xed0d,	// (0x0002549b) area_fmrd2_info_pane_t3

0xed1d,	// (0x000254ab) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x00026684) area_fmrd2_info_pane_t

0xed2d,	// (0x000254bb) fmrd2_indi_pane_t1

0xed3d,	// (0x000254cb) fmrd2_indi_pane_t2

0xed4d,	// (0x000254db) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0002668d) fmrd2_indi_pane_t

0x517d,	// (0x0001b90b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x517d,	// (0x0001b90b) list_single_fs_bigclock_indicator_pane_g5

0x5223,	// (0x0001b9b1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5223,	// (0x0001b9b1) list_single_fs_bigclock_indicator_pane_t5

0xe5d3,	// (0x00024d61) aid_cell_bcale_month_pane_ParamLimits

0xe5d3,	// (0x00024d61) aid_cell_bcale_month_pane

0xe5df,	// (0x00024d6d) bcale_month_pane_ParamLimits

0xe5df,	// (0x00024d6d) bcale_month_pane

0xe5ed,	// (0x00024d7b) bcale_preview_pane_ParamLimits

0xe5ed,	// (0x00024d7b) bcale_preview_pane

0x5d88,	// (0x0001c516) list_single_fs_bigclock_pane_t1_ParamLimits

0x5da2,	// (0x0001c530) list_single_fs_bigclock_pane_t2_ParamLimits

0x5da2,	// (0x0001c530) list_single_fs_bigclock_pane_t2

0x0001,

0xfe86,	// (0x00026614) list_single_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00026614) list_single_fs_bigclock_pane_t

0x6055,	// (0x0001c7e3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x00026678) main_fs_bigclock_unlock_btn_pane_g

0xed5d,	// (0x000254eb) aid_dia3_key_size_ParamLimits

0xed5d,	// (0x000254eb) aid_dia3_key_size

0xed69,	// (0x000254f7) aid_dia3_listrow_size_ParamLimits

0xed69,	// (0x000254f7) aid_dia3_listrow_size

0xed77,	// (0x00025505) dia3_keypad_fun_pane_ParamLimits

0xed77,	// (0x00025505) dia3_keypad_fun_pane

0xed87,	// (0x00025515) dia3_keypad_num_pane_ParamLimits

0xed87,	// (0x00025515) dia3_keypad_num_pane

0xed97,	// (0x00025525) dia3_listscroll_pane_ParamLimits

0xed97,	// (0x00025525) dia3_listscroll_pane

0xeda7,	// (0x00025535) dia3_numentry_pane_ParamLimits

0xeda7,	// (0x00025535) dia3_numentry_pane

0x6091,	// (0x0001c81f) dia3_list_pane

0x609c,	// (0x0001c82a) scroll_pane_cp12

0x0478,	// (0x00016c06) bg_dia3_numentry_pane

0x60a7,	// (0x0001c835) dia3_numentry_pane_t1

0xedb7,	// (0x00025545) cell_dia3_key_num_pane

0xedbf,	// (0x0002554d) cell_dia3_key0_fun_pane_ParamLimits

0xedbf,	// (0x0002554d) cell_dia3_key0_fun_pane

0xedcc,	// (0x0002555a) cell_dia3_key1_fun_pane_ParamLimits

0xedcc,	// (0x0002555a) cell_dia3_key1_fun_pane

0xedd9,	// (0x00025567) dia3_listrow_pane

0x4e95,	// (0x0001b623) bg_dia3_numentry_pane_g1

0x0478,	// (0x00016c06) bg_button_pane_cp21

0x60b6,	// (0x0001c844) cell_dia3_key_num_pane_t1

0x60c4,	// (0x0001c852) cell_dia3_key_num_pane_t2

0x60d3,	// (0x0001c861) cell_dia3_key_num_pane_t3

0x60e2,	// (0x0001c870) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x00026694) cell_dia3_key_num_pane_t

0x0478,	// (0x00016c06) bg_button_pane_cp19

0xede6,	// (0x00025574) cell_dia3_key0_fun_pane_g1

0x0478,	// (0x00016c06) bg_button_pane_cp20

0xedee,	// (0x0002557c) cell_dia3_key1_fun_pane_g1

0xedf6,	// (0x00025584) area_left_week_number_pane

0xedff,	// (0x0002558d) area_top_day_name_pane

0xee08,	// (0x00025596) frame_month_view_pane

0xee12,	// (0x000255a0) grid_month_view_pane

0xee1c,	// (0x000255aa) cell_top_day_name_pane_ParamLimits

0xee1c,	// (0x000255aa) cell_top_day_name_pane

0xee38,	// (0x000255c6) cell_area_left_week_number_pane_ParamLimits

0xee38,	// (0x000255c6) cell_area_left_week_number_pane

0xee4c,	// (0x000255da) cell_month_view_pane_ParamLimits

0xee4c,	// (0x000255da) cell_month_view_pane

0x60f1,	// (0x0001c87f) frm_month_g1

0xee6b,	// (0x000255f9) frm_month_g2

0xee75,	// (0x00025603) frm_month_g3

0xee7f,	// (0x0002560d) frm_month_g4

0xee89,	// (0x00025617) frm_month_g5

0xee93,	// (0x00025621) frm_month_g6

0xee9d,	// (0x0002562b) frm_month_g7

0x60fa,	// (0x0001c888) frm_month_g8

0xeea7,	// (0x00025635) frm_month_g9

0xeeb0,	// (0x0002563e) frm_month_g10

0xeeb9,	// (0x00025647) frm_month_g11

0xeec2,	// (0x00025650) frm_month_g12

0xeecb,	// (0x00025659) frm_month_g13

0xeed6,	// (0x00025664) frm_month_g14

0xeee1,	// (0x0002566f) frm_month_g15

0xeeec,	// (0x0002567a) frm_month_g16

0x000f,

0xff0f,	// (0x0002669d) frm_month_g

0xeef7,	// (0x00025685) cell_top_day_name_pane_t1

0xef06,	// (0x00025694) cell_area_left_week_number_pane_g1

0xeef7,	// (0x00025685) cell_area_left_week_number_pane_t1

0x3338,	// (0x00019ac6) cell_month_view_pane_g1

0xef0e,	// (0x0002569c) cell_month_view_pane_t1

0x0478,	// (0x00016c06) main_fps_pane

0x5495,	// (0x0001bc23) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5495,	// (0x0001bc23) cmail_ddmenu_btn02_pane_cp1

0x54b1,	// (0x0001bc3f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x54b1,	// (0x0001bc3f) cmail_ddmenu_btn02_pane_cp2

0xe890,	// (0x0002501e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe890,	// (0x0002501e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x000265c5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x000265c5) cmail_ddmenu_btn02_pane_g

0xe8ae,	// (0x0002503c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe8ae,	// (0x0002503c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x000265ca) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x000265ca) cmail_ddmenu_btn02_pane_t

0xef1d,	// (0x000256ab) fps_text_pane_ParamLimits

0xef1d,	// (0x000256ab) fps_text_pane

0xef2a,	// (0x000256b8) main_fps_pane_g1_ParamLimits

0xef2a,	// (0x000256b8) main_fps_pane_g1

0xef36,	// (0x000256c4) wait_bar_pane_cp010_ParamLimits

0xef36,	// (0x000256c4) wait_bar_pane_cp010

0xef42,	// (0x000256d0) fps_text_pane_t1_ParamLimits

0xef42,	// (0x000256d0) fps_text_pane_t1

0xc701,	// (0x00022e8f) cam4_image_uncrop_pane_g1

0xc70a,	// (0x00022e98) cam4_image_uncrop_pane_g2

0xc713,	// (0x00022ea1) cam4_image_uncrop_pane_g3

0xc71c,	// (0x00022eaa) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x000260aa) cam4_image_uncrop_pane_g

0xedd9,	// (0x00025567) dia3_listrow_pane_ParamLimits

0x0478,	// (0x00016c06) main_phob2_pane

0xe410,	// (0x00024b9e) cell_tport_appsw_pane_cp02_ParamLimits

0xe410,	// (0x00024b9e) cell_tport_appsw_pane_cp02

0xe41f,	// (0x00024bad) cell_tport_appsw_pane_cp03_ParamLimits

0xe41f,	// (0x00024bad) cell_tport_appsw_pane_cp03

0x0478,	// (0x00016c06) phob2_contact_card_pane

0x0478,	// (0x00016c06) phob2_listscroll_pane

0x6103,	// (0x0001c891) phob2_list_pane

0x610b,	// (0x0001c899) scroll_pane_cp034

0xef5b,	// (0x000256e9) phob2_cc_data_pane_ParamLimits

0xef5b,	// (0x000256e9) phob2_cc_data_pane

0xef77,	// (0x00025705) phob2_cc_listscroll_pane_ParamLimits

0xef77,	// (0x00025705) phob2_cc_listscroll_pane

0xef93,	// (0x00025721) list_double_large_graphic_phob2_pane_ParamLimits

0xef93,	// (0x00025721) list_double_large_graphic_phob2_pane

0xefad,	// (0x0002573b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefad,	// (0x0002573b) list_double_large_graphic_phob2_pane_g1

0xefba,	// (0x00025748) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xefba,	// (0x00025748) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x000266be) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x000266be) list_double_large_graphic_phob2_pane_g

0xefc6,	// (0x00025754) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xefc6,	// (0x00025754) list_double_large_graphic_phob2_pane_t1

0xefdb,	// (0x00025769) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefdb,	// (0x00025769) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x000266c3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x000266c3) list_double_large_graphic_phob2_pane_t

0x0478,	// (0x00016c06) list_highlight_pane_cp024

0x6113,	// (0x0001c8a1) phob2_cc_button_pane

0xefed,	// (0x0002577b) phob2_cc_data_pane_g1_ParamLimits

0xefed,	// (0x0002577b) phob2_cc_data_pane_g1

0xeff9,	// (0x00025787) phob2_cc_data_pane_g2_ParamLimits

0xeff9,	// (0x00025787) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x000266c8) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x000266c8) phob2_cc_data_pane_g

0xf005,	// (0x00025793) phob2_cc_data_pane_t1_ParamLimits

0xf005,	// (0x00025793) phob2_cc_data_pane_t1

0xf017,	// (0x000257a5) phob2_cc_data_pane_t2_ParamLimits

0xf017,	// (0x000257a5) phob2_cc_data_pane_t2

0xf029,	// (0x000257b7) phob2_cc_data_pane_t3_ParamLimits

0xf029,	// (0x000257b7) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x000266cd) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x000266cd) phob2_cc_data_pane_t

0x611b,	// (0x0001c8a9) phob2_cc_list_pane_ParamLimits

0x611b,	// (0x0001c8a9) phob2_cc_list_pane

0x606b,	// (0x0001c7f9) scroll_pane_cp035_ParamLimits

0x606b,	// (0x0001c7f9) scroll_pane_cp035

0x04e9,	// (0x00016c77) bg_button_pane_cp033

0x6127,	// (0x0001c8b5) phob2_cc_button_pane_g1

0x6133,	// (0x0001c8c1) phob2_cc_button_pane_t1

0x6148,	// (0x0001c8d6) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x000266d4) phob2_cc_button_pane_t

0xf03b,	// (0x000257c9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf03b,	// (0x000257c9) list_double_large_graphic_phob2_cc_pane

0xf05a,	// (0x000257e8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf05a,	// (0x000257e8) list_double_large_graphic_phob2_cc_pane_g1

0xf06b,	// (0x000257f9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf06b,	// (0x000257f9) list_double_large_graphic_phob2_cc_pane_g2

0xf07a,	// (0x00025808) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf07a,	// (0x00025808) list_double_large_graphic_phob2_cc_pane_g3

0xf089,	// (0x00025817) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf089,	// (0x00025817) list_double_large_graphic_phob2_cc_pane_g4

0xf09a,	// (0x00025828) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf09a,	// (0x00025828) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x000266d9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x000266d9) list_double_large_graphic_phob2_cc_pane_g

0xf0a9,	// (0x00025837) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf0a9,	// (0x00025837) list_double_large_graphic_phob2_cc_pane_t1

0xf0d2,	// (0x00025860) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0d2,	// (0x00025860) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x000266e4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x000266e4) list_double_large_graphic_phob2_cc_pane_t

0x615a,	// (0x0001c8e8) list_highlight_pane_cp025_ParamLimits

0x615a,	// (0x0001c8e8) list_highlight_pane_cp025

0x04e9,	// (0x00016c77) bg_button_pane_cp033_ParamLimits

0x6127,	// (0x0001c8b5) phob2_cc_button_pane_g1_ParamLimits

0x6133,	// (0x0001c8c1) phob2_cc_button_pane_t1_ParamLimits

0x6148,	// (0x0001c8d6) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x000266d4) phob2_cc_button_pane_t_ParamLimits

0x872a,	// (0x0001eeb8) popup_wgtman_window

0x41fa,	// (0x0001a988) scroll_pane_cp038

0xec03,	// (0x00025391) wgtman_btn_pane_cp_01_ParamLimits

0xec03,	// (0x00025391) wgtman_btn_pane_cp_01

0x6168,	// (0x0001c8f6) wgtman_content_pane

0x6171,	// (0x0001c8ff) wgtman_heading_pane

0x0478,	// (0x00016c06) bg_heading_pane_cp02

0x617a,	// (0x0001c908) wgtman_heading_pane_g1

0x6182,	// (0x0001c910) wgtman_heading_pane_t1

0x6190,	// (0x0001c91e) scroll_pane_cp036

0x6198,	// (0x0001c926) wgtman_list_pane

0x6077,	// (0x0001c805) wgtman_list_pane_t1_ParamLimits

0x6077,	// (0x0001c805) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
