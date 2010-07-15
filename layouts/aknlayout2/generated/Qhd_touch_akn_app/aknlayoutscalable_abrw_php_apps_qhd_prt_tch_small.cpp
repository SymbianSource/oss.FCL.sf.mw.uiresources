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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005c797 };

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
0x0d6d,	// (0x0005d504) Screen

0x0d79,	// (0x0005d510) application_window

0x0dd5,	// (0x0005d56c) area_bottom_pane_ParamLimits

0x0dd5,	// (0x0005d56c) area_bottom_pane

0x0e2e,	// (0x0005d5c5) area_top_pane_ParamLimits

0x0e2e,	// (0x0005d5c5) area_top_pane

0x0e92,	// (0x0005d629) call_video_uplink_pane_ParamLimits

0x0e92,	// (0x0005d629) call_video_uplink_pane

0x0ed1,	// (0x0005d668) main_pane_ParamLimits

0x0ed1,	// (0x0005d668) main_pane

0xc90e,	// (0x000690a5) context_pane

0x43b9,	// (0x00060b50) navi_pane

0x43df,	// (0x00060b76) popup_cale_events_window_ParamLimits

0x43df,	// (0x00060b76) popup_cale_events_window

0xc921,	// (0x000690b8) popup_mup_playback_window

0x43f7,	// (0x00060b8e) signal_pane

0xa8c2,	// (0x00067059) main_browser_pane

0xaa87,	// (0x0006721e) main_burst_pane

0x4237,	// (0x000609ce) main_calc_pane

0xc8f4,	// (0x0006908b) main_cale_day_pane

0x163a,	// (0x0005ddd1) main_cale_month_pane

0xc8f4,	// (0x0006908b) main_cale_week_pane

0xaa87,	// (0x0006721e) main_call_pane

0xa0bb,	// (0x00066852) main_call_poc_pane

0xaa87,	// (0x0006721e) main_camera_pane

0xaa87,	// (0x0006721e) main_chi_dic_pane

0xb273,	// (0x00067a0a) main_clock_pane

0xa0bb,	// (0x00066852) main_fmradio_pane

0xaa87,	// (0x0006721e) main_graph_messa_pane

0xa0bb,	// (0x00066852) main_help_pane

0xa8c2,	// (0x00067059) main_im_pane

0xa6d3,	// (0x00066e6a) main_image_pane_ParamLimits

0xa6d3,	// (0x00066e6a) main_image_pane

0xa0bb,	// (0x00066852) main_location2_pane

0xaa87,	// (0x0006721e) main_location_pane

0xa6d3,	// (0x00066e6a) main_messa_pane

0xa0bb,	// (0x00066852) main_mp2_pane

0xaa87,	// (0x0006721e) main_mp_pane

0xa0bb,	// (0x00066852) main_msg_pane

0xa0bb,	// (0x00066852) main_mup_eq_pane

0xa0bb,	// (0x00066852) main_mup_pane

0xa8c2,	// (0x00067059) main_notes_pane

0xa0bb,	// (0x00066852) main_pec_pane

0xa0bb,	// (0x00066852) main_phob_pane

0xa0bb,	// (0x00066852) main_pinb_pane

0xa0bb,	// (0x00066852) main_postcard_pane

0xa0bb,	// (0x00066852) main_qdial_pane

0xaa87,	// (0x0006721e) main_skin_pane

0xa0bb,	// (0x00066852) main_smil2_pane

0xaa87,	// (0x0006721e) main_smil_pane

0xaa87,	// (0x0006721e) main_video_pane

0xaa87,	// (0x0006721e) main_video_tele_pane

0xa6d3,	// (0x00066e6a) main_viewer_pane_ParamLimits

0xa6d3,	// (0x00066e6a) main_viewer_pane

0xaa87,	// (0x0006721e) main_vorec_pane

0x4283,	// (0x00060a1a) popup_blid_sat_info_window_ParamLimits

0x4283,	// (0x00060a1a) popup_blid_sat_info_window

0x42a3,	// (0x00060a3a) popup_dyc_status_message_window_ParamLimits

0x42a3,	// (0x00060a3a) popup_dyc_status_message_window

0x42b3,	// (0x00060a4a) popup_grid_large_graphic_window_ParamLimits

0x42b3,	// (0x00060a4a) popup_grid_large_graphic_window

0x4344,	// (0x00060adb) popup_loc_request_window_ParamLimits

0x4344,	// (0x00060adb) popup_loc_request_window

0x4391,	// (0x00060b28) popup_wml_address_window_ParamLimits

0x4391,	// (0x00060b28) popup_wml_address_window

0x410f,	// (0x000608a6) call_muted_g1

0x3dd1,	// (0x00060568) popup_call_audio_conf_window_ParamLimits

0x3dd1,	// (0x00060568) popup_call_audio_conf_window

0x411f,	// (0x000608b6) popup_call_audio_first_window_ParamLimits

0x411f,	// (0x000608b6) popup_call_audio_first_window

0x415f,	// (0x000608f6) popup_call_audio_in_window_ParamLimits

0x415f,	// (0x000608f6) popup_call_audio_in_window

0x4183,	// (0x0006091a) popup_call_audio_out_window_ParamLimits

0x4183,	// (0x0006091a) popup_call_audio_out_window

0x41a5,	// (0x0006093c) popup_call_audio_second_window_ParamLimits

0x41a5,	// (0x0006093c) popup_call_audio_second_window

0x41d5,	// (0x0006096c) popup_call_audio_wait_window_ParamLimits

0x41d5,	// (0x0006096c) popup_call_audio_wait_window

0x41f6,	// (0x0006098d) popup_number_entry_window_ParamLimits

0x41f6,	// (0x0006098d) popup_number_entry_window

0x9ca8,	// (0x0006643f) bg_popup_call_pane_cp05_ParamLimits

0x9ca8,	// (0x0006643f) bg_popup_call_pane_cp05

0x9cc8,	// (0x0006645f) popup_number_entry_window_t1

0x9cdb,	// (0x00066472) popup_number_entry_window_t2

0x9ced,	// (0x00066484) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0006b846) popup_number_entry_window_t

0x9cff,	// (0x00066496) text_title_cp2

0x9d12,	// (0x000664a9) bg_popup_call_pane_cp_ParamLimits

0x9d12,	// (0x000664a9) bg_popup_call_pane_cp

0x9d20,	// (0x000664b7) call_thumbnail_pane

0x9d28,	// (0x000664bf) popup_call_audio_in_window_g1_ParamLimits

0x9d28,	// (0x000664bf) popup_call_audio_in_window_g1

0x9d34,	// (0x000664cb) popup_call_audio_in_window_g2_ParamLimits

0x9d34,	// (0x000664cb) popup_call_audio_in_window_g2

0x9d40,	// (0x000664d7) popup_call_audio_in_window_g3_ParamLimits

0x9d40,	// (0x000664d7) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0006b84f) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0006b84f) popup_call_audio_in_window_g

0x9d4c,	// (0x000664e3) popup_call_audio_in_window_t1_ParamLimits

0x9d4c,	// (0x000664e3) popup_call_audio_in_window_t1

0x9d68,	// (0x000664ff) popup_call_audio_in_window_t2_ParamLimits

0x9d68,	// (0x000664ff) popup_call_audio_in_window_t2

0x9d84,	// (0x0006651b) popup_call_audio_in_window_t3_ParamLimits

0x9d84,	// (0x0006651b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0006b856) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0006b856) popup_call_audio_in_window_t

0x9d12,	// (0x000664a9) bg_popup_call_pane_cp01_ParamLimits

0x9d12,	// (0x000664a9) bg_popup_call_pane_cp01

0x9d20,	// (0x000664b7) call_thumbnail_pane_cp02

0x9d97,	// (0x0006652e) call_type_pane_cp022

0x9d9f,	// (0x00066536) popup_call_audio_out_window_g1_ParamLimits

0x9d9f,	// (0x00066536) popup_call_audio_out_window_g1

0x9db1,	// (0x00066548) popup_call_audio_out_window_g2_ParamLimits

0x9db1,	// (0x00066548) popup_call_audio_out_window_g2

0x9dbd,	// (0x00066554) popup_call_audio_out_window_g3_ParamLimits

0x9dbd,	// (0x00066554) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0006b85d) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0006b85d) popup_call_audio_out_window_g

0x9dcf,	// (0x00066566) popup_call_audio_out_window_t1_ParamLimits

0x9dcf,	// (0x00066566) popup_call_audio_out_window_t1

0x9de7,	// (0x0006657e) popup_call_audio_out_window_t2_ParamLimits

0x9de7,	// (0x0006657e) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0006b864) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0006b864) popup_call_audio_out_window_t

0x9dfc,	// (0x00066593) bg_popup_call_pane_ParamLimits

0x9dfc,	// (0x00066593) bg_popup_call_pane

0x10ea,	// (0x0005d881) call_thumbnail_pane_cp_ParamLimits

0x10ea,	// (0x0005d881) call_thumbnail_pane_cp

0x9e80,	// (0x00066617) call_type_pane_cp01_ParamLimits

0x9e80,	// (0x00066617) call_type_pane_cp01

0x9ec4,	// (0x0006665b) popup_call_audio_first_window_g1_ParamLimits

0x9ec4,	// (0x0006665b) popup_call_audio_first_window_g1

0x9f10,	// (0x000666a7) popup_call_audio_first_window_g2_ParamLimits

0x9f10,	// (0x000666a7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0006b869) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0006b869) popup_call_audio_first_window_g

0x9f54,	// (0x000666eb) popup_call_audio_first_window_t1_ParamLimits

0x9f54,	// (0x000666eb) popup_call_audio_first_window_t1

0xa000,	// (0x00066797) popup_call_audio_first_window_t4_ParamLimits

0xa000,	// (0x00066797) popup_call_audio_first_window_t4

0xa08c,	// (0x00066823) popup_call_audio_first_window_t5_ParamLimits

0xa08c,	// (0x00066823) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0006b86e) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0006b86e) popup_call_audio_first_window_t

0xa0bb,	// (0x00066852) bg_popup_call_pane_cp02

0xa0c5,	// (0x0006685c) call_type_pane_cp023

0xa0cd,	// (0x00066864) popup_call_audio_wait_window_g1

0xa0d5,	// (0x0006686c) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006b875) popup_call_audio_wait_window_g

0xa0dd,	// (0x00066874) popup_call_audio_wait_window_t3

0xa0eb,	// (0x00066882) bg_popup_call_pane_cp03_ParamLimits

0xa0eb,	// (0x00066882) bg_popup_call_pane_cp03

0xa14b,	// (0x000668e2) call_thumbnail_pane_cp011_ParamLimits

0xa14b,	// (0x000668e2) call_thumbnail_pane_cp011

0xa157,	// (0x000668ee) call_type_pane_cp034_ParamLimits

0xa157,	// (0x000668ee) call_type_pane_cp034

0xa193,	// (0x0006692a) popup_call_audio_second_window_g1_ParamLimits

0xa193,	// (0x0006692a) popup_call_audio_second_window_g1

0xa1cf,	// (0x00066966) popup_call_audio_second_window_g2_ParamLimits

0xa1cf,	// (0x00066966) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0006b87a) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0006b87a) popup_call_audio_second_window_g

0xa20b,	// (0x000669a2) popup_call_audio_second_window_t1_ParamLimits

0xa20b,	// (0x000669a2) popup_call_audio_second_window_t1

0xa649,	// (0x00066de0) popup_call_audio_second_window_t2_ParamLimits

0xa649,	// (0x00066de0) popup_call_audio_second_window_t2

0xa67f,	// (0x00066e16) popup_call_audio_second_window_t3_ParamLimits

0xa67f,	// (0x00066e16) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0006b87f) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0006b87f) popup_call_audio_second_window_t

0xa0bb,	// (0x00066852) bg_popup_call_pane_cp04

0xa6b5,	// (0x00066e4c) list_conf_pane

0xa6bd,	// (0x00066e54) popup_call_audio_conf_window_t1

0xa6cb,	// (0x00066e62) call_thumbnail_pane_g1

0xa6d3,	// (0x00066e6a) bg_pinb_pane_ParamLimits

0xa6d3,	// (0x00066e6a) bg_pinb_pane

0xa6e1,	// (0x00066e78) find_pinb_pane

0xa6ea,	// (0x00066e81) listscroll_pinb_pane_ParamLimits

0xa6ea,	// (0x00066e81) listscroll_pinb_pane

0xa6f9,	// (0x00066e90) pinb_bg_pane_g1

0x110e,	// (0x0005d8a5) pinb_bg_pane_g2

0x111a,	// (0x0005d8b1) pinb_bg_pane_g3

0x1126,	// (0x0005d8bd) pinb_bg_pane_g4

0x1132,	// (0x0005d8c9) pinb_bg_pane_g5

0x113e,	// (0x0005d8d5) pinb_bg_pane_g6

0x1149,	// (0x0005d8e0) pinb_bg_pane_g7

0x1154,	// (0x0005d8eb) pinb_bg_pane_g8

0x115f,	// (0x0005d8f6) pinb_bg_pane_g9

0x1169,	// (0x0005d900) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0006b886) pinb_bg_pane_g

0x1186,	// (0x0005d91d) grid_pinb_pane

0x1191,	// (0x0005d928) list_pinb_pane

0x119c,	// (0x0005d933) scroll_pane_cp01_ParamLimits

0x119c,	// (0x0005d933) scroll_pane_cp01

0xa703,	// (0x00066e9a) find_pinb_pane_g1_ParamLimits

0xa703,	// (0x00066e9a) find_pinb_pane_g1

0xa71b,	// (0x00066eb2) find_pinb_pane_t1

0xa72d,	// (0x00066ec4) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0006b8a0) find_pinb_pane_t

0xa742,	// (0x00066ed9) input_focus_pane_cp01_ParamLimits

0xa742,	// (0x00066ed9) input_focus_pane_cp01

0x11ae,	// (0x0005d945) cell_pinb_pane_ParamLimits

0x11ae,	// (0x0005d945) cell_pinb_pane

0x11d6,	// (0x0005d96d) cell_pinb_pane_g1_ParamLimits

0x11d6,	// (0x0005d96d) cell_pinb_pane_g1

0x11eb,	// (0x0005d982) cell_pinb_pane_g2_ParamLimits

0x11eb,	// (0x0005d982) cell_pinb_pane_g2

0xa878,	// (0x0006700f) cell_pinb_pane_g3_ParamLimits

0xa878,	// (0x0006700f) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0006b8a5) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0006b8a5) cell_pinb_pane_g

0xa0bb,	// (0x00066852) grid_highlight_pane_cp01

0x11f7,	// (0x0005d98e) list_pinb_item_pane_ParamLimits

0x11f7,	// (0x0005d98e) list_pinb_item_pane

0xa0bb,	// (0x00066852) list_highlight_pane_cp02

0x121d,	// (0x0005d9b4) list_pinb_item_pane_g1_ParamLimits

0x121d,	// (0x0005d9b4) list_pinb_item_pane_g1

0x122a,	// (0x0005d9c1) list_pinb_item_pane_g2_ParamLimits

0x122a,	// (0x0005d9c1) list_pinb_item_pane_g2

0x1236,	// (0x0005d9cd) list_pinb_item_pane_g3_ParamLimits

0x1236,	// (0x0005d9cd) list_pinb_item_pane_g3

0x1247,	// (0x0005d9de) list_pinb_item_pane_g4_ParamLimits

0x1247,	// (0x0005d9de) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0006b8ac) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0006b8ac) list_pinb_item_pane_g

0x1253,	// (0x0005d9ea) list_pinb_item_pane_t1_ParamLimits

0x1253,	// (0x0005d9ea) list_pinb_item_pane_t1

0x1284,	// (0x0005da1b) calc_display_pane

0x12a2,	// (0x0005da39) calc_paper_pane

0x12be,	// (0x0005da55) grid_calc_pane

0xa0bb,	// (0x00066852) bg_list_pane_cp01

0x12ea,	// (0x0005da81) clock_g1

0x12f2,	// (0x0005da89) clock_g2

0x0001,

0xf11e,	// (0x0006b8b5) clock_g

0x12fc,	// (0x0005da93) clock_t1_ParamLimits

0x12fc,	// (0x0005da93) clock_t1

0x1311,	// (0x0005daa8) clock_t2_ParamLimits

0x1311,	// (0x0005daa8) clock_t2

0x1323,	// (0x0005daba) clock_t3_ParamLimits

0x1323,	// (0x0005daba) clock_t3

0x1335,	// (0x0005dacc) clock_t4_ParamLimits

0x1335,	// (0x0005dacc) clock_t4

0x1347,	// (0x0005dade) clock_t5_ParamLimits

0x1347,	// (0x0005dade) clock_t5

0x135c,	// (0x0005daf3) clock_t6_ParamLimits

0x135c,	// (0x0005daf3) clock_t6

0x136e,	// (0x0005db05) clock_t7_ParamLimits

0x136e,	// (0x0005db05) clock_t7

0x1380,	// (0x0005db17) clock_t8_ParamLimits

0x1380,	// (0x0005db17) clock_t8

0x1396,	// (0x0005db2d) clock_t9_ParamLimits

0x1396,	// (0x0005db2d) clock_t9

0x0008,

0xf123,	// (0x0006b8ba) clock_t_ParamLimits

0xf123,	// (0x0006b8ba) clock_t

0xa884,	// (0x0006701b) popup_clock_analogue_window_cp02

0xa884,	// (0x0006701b) popup_clock_digital_window_cp01

0xa88c,	// (0x00067023) listscroll_help_pane

0xa0bb,	// (0x00066852) phob_pre_status_pane

0xa896,	// (0x0006702d) grid_qdial_pane

0xa6d3,	// (0x00066e6a) listscroll_mce_pane

0xa6d3,	// (0x00066e6a) bg_notes_pane

0xa8a0,	// (0x00067037) list_notes_pane

0x13ac,	// (0x0005db43) scroll_pane_cp06

0xa8ae,	// (0x00067045) bg_calc_paper_pane

0x13bb,	// (0x0005db52) list_calc_pane

0xa8c2,	// (0x00067059) bg_calc_display_pane

0x13d5,	// (0x0005db6c) calc_display_pane_t1

0x13ea,	// (0x0005db81) calc_display_pane_t2

0x13ff,	// (0x0005db96) calc_display_pane_t3

0x0002,

0xf136,	// (0x0006b8cd) calc_display_pane_t

0x1411,	// (0x0005dba8) cell_calc_pane_ParamLimits

0x1411,	// (0x0005dba8) cell_calc_pane

0xa8ce,	// (0x00067065) bg_calc_paper_pane_g1

0xa8da,	// (0x00067071) bg_calc_paper_pane_g2

0xa8e6,	// (0x0006707d) bg_calc_paper_pane_g3

0xa8f2,	// (0x00067089) bg_calc_paper_pane_g4

0xa8fe,	// (0x00067095) bg_calc_paper_pane_g5

0x143e,	// (0x0005dbd5) bg_calc_paper_pane_g6

0x144f,	// (0x0005dbe6) bg_calc_paper_pane_g7

0x1460,	// (0x0005dbf7) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0006b8d4) bg_calc_paper_pane_g

0x1471,	// (0x0005dc08) calc_bg_paper_pane_g9

0x1482,	// (0x0005dc19) list_calc_item_pane_ParamLimits

0x1482,	// (0x0005dc19) list_calc_item_pane

0xa90a,	// (0x000670a1) list_calc_item_pane_g1

0x14ae,	// (0x0005dc45) list_calc_item_pane_t1_ParamLimits

0x14ae,	// (0x0005dc45) list_calc_item_pane_t1

0x14c0,	// (0x0005dc57) list_calc_item_pane_t2_ParamLimits

0x14c0,	// (0x0005dc57) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0006b8e5) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0006b8e5) list_calc_item_pane_t

0xa917,	// (0x000670ae) cell_calc_pane_g1

0xa921,	// (0x000670b8) grid_highlight_pane_cp02

0x14f0,	// (0x0005dc87) bg_calc_display_pane_g1

0x14f9,	// (0x0005dc90) bg_calc_display_pane_g2

0x1503,	// (0x0005dc9a) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0006b8ef) bg_calc_display_pane_g

0x150c,	// (0x0005dca3) cell_qdial_pane_ParamLimits

0x150c,	// (0x0005dca3) cell_qdial_pane

0x1520,	// (0x0005dcb7) cell_qdial_pane_g1_ParamLimits

0x1520,	// (0x0005dcb7) cell_qdial_pane_g1

0x152d,	// (0x0005dcc4) cell_qdial_pane_g2_ParamLimits

0x152d,	// (0x0005dcc4) cell_qdial_pane_g2

0xa943,	// (0x000670da) cell_qdial_pane_g3_ParamLimits

0xa943,	// (0x000670da) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0006b8f6) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0006b8f6) cell_qdial_pane_g

0x154b,	// (0x0005dce2) cell_qdial_pane_t1_ParamLimits

0x154b,	// (0x0005dce2) cell_qdial_pane_t1

0x1563,	// (0x0005dcfa) cell_qdial_pane_t2_ParamLimits

0x1563,	// (0x0005dcfa) cell_qdial_pane_t2

0x1576,	// (0x0005dd0d) cell_qdial_pane_t3_ParamLimits

0x1576,	// (0x0005dd0d) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0006b8ff) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0006b8ff) cell_qdial_pane_t

0xa0bb,	// (0x00066852) grid_highlight_pane_cp04

0xa94f,	// (0x000670e6) thumbnail_qdial_pane_ParamLimits

0xa94f,	// (0x000670e6) thumbnail_qdial_pane

0xa9ab,	// (0x00067142) list_help_pane

0xa9b4,	// (0x0006714b) scroll_pane_cp02

0x1589,	// (0x0005dd20) help_list_pane_t1_ParamLimits

0x1589,	// (0x0005dd20) help_list_pane_t1

0x15bc,	// (0x0005dd53) bg_notes_pane_g2

0x15c4,	// (0x0005dd5b) bg_notes_pane_g3

0x15cc,	// (0x0005dd63) notes_bg_pane_g1

0x15d4,	// (0x0005dd6b) notes_bg_pane_g4

0x15dc,	// (0x0005dd73) notes_bg_pane_g5

0x15e4,	// (0x0005dd7b) notes_bg_pane_g6

0x15ec,	// (0x0005dd83) notes_bg_pane_g7

0x15f4,	// (0x0005dd8b) notes_bg_pane_g8

0x15fc,	// (0x0005dd93) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0006b91d) notes_bg_pane_g

0x1604,	// (0x0005dd9b) list_notes_text_pane_ParamLimits

0x1604,	// (0x0005dd9b) list_notes_text_pane

0xa9bd,	// (0x00067154) list_notes_text_pane_g1

0x162c,	// (0x0005ddc3) list_notes_text_pane_t1

0x163a,	// (0x0005ddd1) listscroll_cale_week_pane

0x165f,	// (0x0005ddf6) bg_cale_heading_pane

0xa9e0,	// (0x00067177) bg_cale_pane_cp01

0x167f,	// (0x0005de16) cale_week_corner_pane

0x1699,	// (0x0005de30) cale_week_day_heading_pane

0x16b9,	// (0x0005de50) cale_week_scroll_pane_g1

0x16d4,	// (0x0005de6b) cale_week_scroll_pane_g2

0x16e7,	// (0x0005de7e) cale_week_scroll_pane_g3

0x16fa,	// (0x0005de91) cale_week_scroll_pane_g4

0x170d,	// (0x0005dea4) cale_week_scroll_pane_g5

0x1720,	// (0x0005deb7) cale_week_scroll_pane_g6

0x1733,	// (0x0005deca) cale_week_scroll_pane_g7

0x1748,	// (0x0005dedf) cale_week_scroll_pane_g8

0x175d,	// (0x0005def4) cale_week_scroll_pane_g9

0x1770,	// (0x0005df07) cale_week_scroll_pane_g10

0x1783,	// (0x0005df1a) cale_week_scroll_pane_g11

0x1796,	// (0x0005df2d) cale_week_scroll_pane_g12

0x17ad,	// (0x0005df44) cale_week_scroll_pane_g13

0x17c8,	// (0x0005df5f) cale_week_scroll_pane_g14

0x17e3,	// (0x0005df7a) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0006b92c) cale_week_scroll_pane_g

0x1813,	// (0x0005dfaa) cale_week_time_pane

0x1828,	// (0x0005dfbf) grid_cale_week_pane

0xaa0f,	// (0x000671a6) scroll_pane_cp08

0x1847,	// (0x0005dfde) cell_cale_week_pane_ParamLimits

0x1847,	// (0x0005dfde) cell_cale_week_pane

0x18a9,	// (0x0005e040) cale_week_day_heading_pane_t1

0x18c4,	// (0x0005e05b) cale_week_day_heading_pane_t2

0x18df,	// (0x0005e076) cale_week_day_heading_pane_t3

0x18fa,	// (0x0005e091) cale_week_day_heading_pane_t4

0x1915,	// (0x0005e0ac) cale_week_day_heading_pane_t5

0x1930,	// (0x0005e0c7) cale_week_day_heading_pane_t6

0x194b,	// (0x0005e0e2) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0006b94d) cale_week_day_heading_pane_t

0xaa2c,	// (0x000671c3) bg_cale_side_pane

0x1966,	// (0x0005e0fd) cale_week_time_pane_t1

0x1980,	// (0x0005e117) cale_week_time_pane_t2

0x199a,	// (0x0005e131) cale_week_time_pane_t3

0x19b4,	// (0x0005e14b) cale_week_time_pane_t4

0x19ce,	// (0x0005e165) cale_week_time_pane_t5

0x19e8,	// (0x0005e17f) cale_week_time_pane_t6

0x1a06,	// (0x0005e19d) cale_week_time_pane_t7

0x1a28,	// (0x0005e1bf) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0006b95c) cale_week_time_pane_t

0x1a4c,	// (0x0005e1e3) cell_cale_week_pane_g2

0x1a70,	// (0x0005e207) cell_cale_week_pane_g3_ParamLimits

0x1a70,	// (0x0005e207) cell_cale_week_pane_g3

0xaa3a,	// (0x000671d1) grid_highlight_pane_cp07

0xaa42,	// (0x000671d9) listscroll_gms_pane

0xaa4c,	// (0x000671e3) grid_gms_pane

0xaa55,	// (0x000671ec) listscroll_gms_pane_g1

0xaa5d,	// (0x000671f4) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0006b96d) listscroll_gms_pane_g

0x1a88,	// (0x0005e21f) scroll_pane_cp010

0x1a93,	// (0x0005e22a) cell_gms_pane_ParamLimits

0x1a93,	// (0x0005e22a) cell_gms_pane

0x1aa6,	// (0x0005e23d) cell_gms_pane_g1

0xaa65,	// (0x000671fc) cell_gms_pane_g2

0xaa6d,	// (0x00067204) cell_gms_pane_g3

0xaa76,	// (0x0006720d) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0006b972) cell_gms_pane_g

0xaa7f,	// (0x00067216) grid_highlight_pane_cp09

0x40b7,	// (0x0006084e) phob_pre_status_pane_g1

0x40bf,	// (0x00060856) phob_pre_status_pane_g2

0x40c7,	// (0x0006085e) phob_pre_status_pane_g3

0x40cf,	// (0x00060866) phob_pre_status_pane_g4

0x0004,

0xf52b,	// (0x0006bcc2) phob_pre_status_pane_g

0x40df,	// (0x00060876) phob_pre_status_pane_t1

0x40ef,	// (0x00060886) phob_pre_status_pane_t2

0x40ff,	// (0x00060896) phob_pre_status_pane_t3

0x0002,

0xf536,	// (0x0006bccd) phob_pre_status_pane_t

0xaa87,	// (0x0006721e) bg_list_pane_cp05

0x1ab6,	// (0x0005e24d) grid_vorec_pane

0x1ac0,	// (0x0005e257) vorec_t1

0x1ace,	// (0x0005e265) vorec_t2

0x1adc,	// (0x0005e273) vorec_t3

0x1aea,	// (0x0005e281) vorec_t4

0x9c46,	// (0x000663dd) vorec_t5

0x9c54,	// (0x000663eb) vorec_t6

0x0004,

0xf1e4,	// (0x0006b97b) vorec_t

0x9c62,	// (0x000663f9) wait_bar_pane_cp01

0x1b06,	// (0x0005e29d) cell_vorec_pane_ParamLimits

0x1b06,	// (0x0005e29d) cell_vorec_pane

0x1b19,	// (0x0005e2b0) cell_vorec_pane_g1

0xa0bb,	// (0x00066852) grid_highlight_pane_cp05

0x1b33,	// (0x0005e2ca) cams_zoom_pane

0x1b3f,	// (0x0005e2d6) image_vga_pane

0x1b4e,	// (0x0005e2e5) main_camera_pane_g1

0x1b5c,	// (0x0005e2f3) main_camera_pane_g2

0x1b68,	// (0x0005e2ff) main_camera_pane_g3

0x1b74,	// (0x0005e30b) main_camera_pane_g4

0x1b80,	// (0x0005e317) main_camera_pane_g5

0x1b8c,	// (0x0005e323) main_camera_pane_g6

0x1b98,	// (0x0005e32f) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0006b986) main_camera_pane_g

0x1ba4,	// (0x0005e33b) main_camera_pane_t1

0x1bb6,	// (0x0005e34d) main_camera_pane_t2

0x0001,

0xf200,	// (0x0006b997) main_camera_pane_t

0x1bd7,	// (0x0005e36e) cams_zoom_pane_cp_ParamLimits

0x1bd7,	// (0x0005e36e) cams_zoom_pane_cp

0x1bfb,	// (0x0005e392) image_cif_pane_ParamLimits

0x1bfb,	// (0x0005e392) image_cif_pane

0x1c19,	// (0x0005e3b0) image_subqcif_pane

0x1c21,	// (0x0005e3b8) main_video_pane_g1_ParamLimits

0x1c21,	// (0x0005e3b8) main_video_pane_g1

0x1c41,	// (0x0005e3d8) main_video_pane_g2_ParamLimits

0x1c41,	// (0x0005e3d8) main_video_pane_g2

0x1c71,	// (0x0005e408) main_video_pane_g3_ParamLimits

0x1c71,	// (0x0005e408) main_video_pane_g3

0x1c9a,	// (0x0005e431) main_video_pane_g4_ParamLimits

0x1c9a,	// (0x0005e431) main_video_pane_g4

0x1cc3,	// (0x0005e45a) main_video_pane_g5_ParamLimits

0x1cc3,	// (0x0005e45a) main_video_pane_g5

0xaaa4,	// (0x0006723b) main_video_pane_g6_ParamLimits

0xaaa4,	// (0x0006723b) main_video_pane_g6

0x0006,

0xf205,	// (0x0006b99c) main_video_pane_g_ParamLimits

0xf205,	// (0x0006b99c) main_video_pane_g

0x1ce5,	// (0x0005e47c) main_video_pane_t1_ParamLimits

0x1ce5,	// (0x0005e47c) main_video_pane_t1

0xaabe,	// (0x00067255) cams_zoom_pane_g1

0xaac7,	// (0x0006725e) cams_zoom_pane_g2

0xaad0,	// (0x00067267) cams_zoom_pane_g3

0xaad9,	// (0x00067270) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0006b9ab) cams_zoom_pane_g

0x1d2f,	// (0x0005e4c6) grid_cams_pane

0x1d3d,	// (0x0005e4d4) linegrid_cams_pane

0x1d4b,	// (0x0005e4e2) cell_cams_pane_ParamLimits

0x1d4b,	// (0x0005e4e2) cell_cams_pane

0xaae2,	// (0x00067279) cams_burst_image_pane

0xaaea,	// (0x00067281) cell_cams_pane_g1

0xa0bb,	// (0x00066852) grid_highlight_pane_cp03

0xa917,	// (0x000670ae) mp_bg_pane_g1

0xa0bb,	// (0x00066852) bg_list_pane_cp03

0xc819,	// (0x00068fb0) bg_mp_pane

0xc821,	// (0x00068fb8) grid_mp_pane

0xc829,	// (0x00068fc0) media_player_g1

0xc831,	// (0x00068fc8) media_player_t1

0xc83f,	// (0x00068fd6) media_player_t2

0xc84d,	// (0x00068fe4) media_player_t3

0xc85b,	// (0x00068ff2) media_player_t4

0xc869,	// (0x00069000) media_player_t5

0xc877,	// (0x0006900e) media_player_t6

0xc885,	// (0x0006901c) media_player_t7

0x0006,

0x02e3,	// (0x0005ca7a) media_player_t

0xc893,	// (0x0006902a) wait_bar_pane_cp02

0xf517,	// (0x0006bcae) main_usb_pane_t

0x40ae,	// (0x00060845) cell_mp_pane

0xa917,	// (0x000670ae) cell_mp_pane_g1

0xa0bb,	// (0x00066852) grid_highlight_pane_cp06

0xaaf2,	// (0x00067289) grid_skin_colour_pane

0xaafa,	// (0x00067291) list_highlight_pane_cp03

0x1e72,	// (0x0005e609) skin_g1

0xab02,	// (0x00067299) skin_t1

0xab11,	// (0x000672a8) skin_t2

0x0001,

0xf249,	// (0x0006b9e0) skin_t

0x1e7c,	// (0x0005e613) cell_skin_colour_pane_ParamLimits

0x1e7c,	// (0x0005e613) cell_skin_colour_pane

0xab1f,	// (0x000672b6) cell_skin_colour_pane_g1

0x1f00,	// (0x0005e697) call_video_g1_ParamLimits

0x1f00,	// (0x0005e697) call_video_g1

0x1f10,	// (0x0005e6a7) call_video_g2_ParamLimits

0x1f10,	// (0x0005e6a7) call_video_g2

0x0001,

0xf24e,	// (0x0006b9e5) call_video_g_ParamLimits

0xf24e,	// (0x0006b9e5) call_video_g

0x1f6a,	// (0x0005e701) call_video_uplink_pane_cp1_ParamLimits

0x1f6a,	// (0x0005e701) call_video_uplink_pane_cp1

0xab31,	// (0x000672c8) call_video_uplink_pane_cp2

0x2036,	// (0x0005e7cd) video_down_crop_pane_ParamLimits

0x2036,	// (0x0005e7cd) video_down_crop_pane

0x2134,	// (0x0005e8cb) video_down_pane_ParamLimits

0x2134,	// (0x0005e8cb) video_down_pane

0xab39,	// (0x000672d0) video_down_subqcif_pane_ParamLimits

0xab39,	// (0x000672d0) video_down_subqcif_pane

0xab51,	// (0x000672e8) video_down_subqcif_pane_cp_ParamLimits

0xab51,	// (0x000672e8) video_down_subqcif_pane_cp

0xab77,	// (0x0006730e) im_reading_pane_ParamLimits

0xab77,	// (0x0006730e) im_reading_pane

0x2254,	// (0x0005e9eb) im_writing_pane_ParamLimits

0x2254,	// (0x0005e9eb) im_writing_pane

0x2272,	// (0x0005ea09) im_reading_pane_t1

0xab91,	// (0x00067328) list_im_pane

0xaba2,	// (0x00067339) scroll_pane_cp07

0x22c6,	// (0x0005ea5d) im_writing_pane_t1_ParamLimits

0x22c6,	// (0x0005ea5d) im_writing_pane_t1

0xabbb,	// (0x00067352) im_writing_pane_t2_ParamLimits

0xabbb,	// (0x00067352) im_writing_pane_t2

0x0001,

0xf258,	// (0x0006b9ef) im_writing_pane_t_ParamLimits

0xf258,	// (0x0006b9ef) im_writing_pane_t

0xa0bb,	// (0x00066852) input_focus_pane_cp04

0xa0bb,	// (0x00066852) input_focus_pane_cp05

0x22db,	// (0x0005ea72) list_im_single_pane_ParamLimits

0x22db,	// (0x0005ea72) list_im_single_pane

0x22ff,	// (0x0005ea96) list_single_im_pane_t1

0x4072,	// (0x00060809) blid_accuracy_pane

0x407a,	// (0x00060811) blid_compass_pane

0x4084,	// (0x0006081b) main_location_t1

0x4092,	// (0x00060829) main_location_t2

0x40a0,	// (0x00060837) main_location_t3

0x0002,

0xf524,	// (0x0006bcbb) main_location_t

0xa0bb,	// (0x00066852) aid_levels_location

0xa917,	// (0x000670ae) blid_accuracy_pane_g1

0xa917,	// (0x000670ae) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0006ba51) blid_accuracy_pane_g

0xac03,	// (0x0006739a) wml_content_pane

0xac41,	// (0x000673d8) wml_button_pane_ParamLimits

0xac41,	// (0x000673d8) wml_button_pane

0x230e,	// (0x0005eaa5) wml_list_single_large_pane_ParamLimits

0x230e,	// (0x0005eaa5) wml_list_single_large_pane

0x2338,	// (0x0005eacf) wml_list_single_medium_pane_ParamLimits

0x2338,	// (0x0005eacf) wml_list_single_medium_pane

0x2369,	// (0x0005eb00) wml_list_single_small_pane_ParamLimits

0x2369,	// (0x0005eb00) wml_list_single_small_pane

0xac55,	// (0x000673ec) wml_selection_box_pane_ParamLimits

0xac55,	// (0x000673ec) wml_selection_box_pane

0xac68,	// (0x000673ff) wml_list_single_pane_t1

0xac77,	// (0x0006740e) wml_list_single_medium_pane_t1

0xac86,	// (0x0006741d) wml_list_single_large_pane_t1

0xac95,	// (0x0006742c) input_focus_pane_cp02_ParamLimits

0xac95,	// (0x0006742c) input_focus_pane_cp02

0xaca8,	// (0x0006743f) wml_selection_box_pane_g1

0xacb1,	// (0x00067448) wml_selection_box_pane_t1_ParamLimits

0xacb1,	// (0x00067448) wml_selection_box_pane_t1

0xa6d3,	// (0x00066e6a) bg_wml_button_pane_ParamLimits

0xa6d3,	// (0x00066e6a) bg_wml_button_pane

0xacc9,	// (0x00067460) wml_button_pane_g1

0xacd1,	// (0x00067468) wml_button_pane_t1

0xacc9,	// (0x00067460) wml_button_bg_pane_g1

0xace1,	// (0x00067478) wml_button_bg_pane_g2

0xace9,	// (0x00067480) wml_button_bg_pane_g3

0xacf1,	// (0x00067488) wml_button_bg_pane_g4

0xacf9,	// (0x00067490) wml_button_bg_pane_g5

0xad01,	// (0x00067498) wml_button_bg_pane_g6

0xad09,	// (0x000674a0) wml_button_bg_pane_g7

0xad11,	// (0x000674a8) wml_button_bg_pane_g8

0xad19,	// (0x000674b0) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0006b9f4) wml_button_bg_pane_g

0x23a3,	// (0x0005eb3a) bg_list_pane_cp02

0xad21,	// (0x000674b8) mce_header_pane_ParamLimits

0xad21,	// (0x000674b8) mce_header_pane

0xad37,	// (0x000674ce) mce_icon_pane

0xad37,	// (0x000674ce) mce_image_pane

0xad40,	// (0x000674d7) mce_text_pane_ParamLimits

0xad40,	// (0x000674d7) mce_text_pane

0x23ad,	// (0x0005eb44) scroll_pane_cp03

0xac39,	// (0x000673d0) scroll_pane_cp04

0xad53,	// (0x000674ea) scroll_pane_cp05_ParamLimits

0xad53,	// (0x000674ea) scroll_pane_cp05

0x23b7,	// (0x0005eb4e) mce_header_field_pane_ParamLimits

0x23b7,	// (0x0005eb4e) mce_header_field_pane

0x23d7,	// (0x0005eb6e) mce_header_field_pane_2_ParamLimits

0x23d7,	// (0x0005eb6e) mce_header_field_pane_2

0x23ed,	// (0x0005eb84) mce_header_field_pane_3

0x23f5,	// (0x0005eb8c) list_single_mce_message_pane_ParamLimits

0x23f5,	// (0x0005eb8c) list_single_mce_message_pane

0x2420,	// (0x0005ebb7) list_single_mce_smart_pane_ParamLimits

0x2420,	// (0x0005ebb7) list_single_mce_smart_pane

0xad5f,	// (0x000674f6) input_focus_pane_cp03

0xad68,	// (0x000674ff) list_header_data_pane

0x2456,	// (0x0005ebed) mce_header_field_pane_t1

0x2464,	// (0x0005ebfb) list_single_mce_header_pane_ParamLimits

0x2464,	// (0x0005ebfb) list_single_mce_header_pane

0xad70,	// (0x00067507) list_single_mce_header_pane_t1

0xad7f,	// (0x00067516) list_single_mce_message_pane_g1

0xad87,	// (0x0006751e) list_single_mce_message_pane_t1

0x24b6,	// (0x0005ec4d) bg_cale_heading_pane_cp01_ParamLimits

0x24b6,	// (0x0005ec4d) bg_cale_heading_pane_cp01

0xad95,	// (0x0006752c) bg_cale_pane_cp02_ParamLimits

0xad95,	// (0x0006752c) bg_cale_pane_cp02

0x2504,	// (0x0005ec9b) cale_month_corner_pane

0x2523,	// (0x0005ecba) cale_month_day_heading_pane_ParamLimits

0x2523,	// (0x0005ecba) cale_month_day_heading_pane

0x2589,	// (0x0005ed20) cale_month_pane_g1_ParamLimits

0x2589,	// (0x0005ed20) cale_month_pane_g1

0x25cc,	// (0x0005ed63) cale_month_pane_g2_ParamLimits

0x25cc,	// (0x0005ed63) cale_month_pane_g2

0x2604,	// (0x0005ed9b) cale_month_pane_g3_ParamLimits

0x2604,	// (0x0005ed9b) cale_month_pane_g3

0x2650,	// (0x0005ede7) cale_month_pane_g4_ParamLimits

0x2650,	// (0x0005ede7) cale_month_pane_g4

0x269c,	// (0x0005ee33) cale_month_pane_g5_ParamLimits

0x269c,	// (0x0005ee33) cale_month_pane_g5

0x26e8,	// (0x0005ee7f) cale_month_pane_g6_ParamLimits

0x26e8,	// (0x0005ee7f) cale_month_pane_g6

0x2734,	// (0x0005eecb) cale_month_pane_g7_ParamLimits

0x2734,	// (0x0005eecb) cale_month_pane_g7

0x2798,	// (0x0005ef2f) cale_month_pane_g8_ParamLimits

0x2798,	// (0x0005ef2f) cale_month_pane_g8

0x27fc,	// (0x0005ef93) cale_month_pane_g9_ParamLimits

0x27fc,	// (0x0005ef93) cale_month_pane_g9

0x285a,	// (0x0005eff1) cale_month_pane_g10_ParamLimits

0x285a,	// (0x0005eff1) cale_month_pane_g10

0x28b6,	// (0x0005f04d) cale_month_pane_g11_ParamLimits

0x28b6,	// (0x0005f04d) cale_month_pane_g11

0x290a,	// (0x0005f0a1) cale_month_pane_g12_ParamLimits

0x290a,	// (0x0005f0a1) cale_month_pane_g12

0x2960,	// (0x0005f0f7) cale_month_pane_g13_ParamLimits

0x2960,	// (0x0005f0f7) cale_month_pane_g13

0x000c,

0xf270,	// (0x0006ba07) cale_month_pane_g_ParamLimits

0xf270,	// (0x0006ba07) cale_month_pane_g

0x29b6,	// (0x0005f14d) cale_month_week_pane

0x29da,	// (0x0005f171) grid_cale_month_pane_ParamLimits

0x29da,	// (0x0005f171) grid_cale_month_pane

0x2a33,	// (0x0005f1ca) cale_month_day_heading_pane_t1

0x2ab9,	// (0x0005f250) cale_month_day_heading_pane_t2

0x2b32,	// (0x0005f2c9) cale_month_day_heading_pane_t3

0x2bab,	// (0x0005f342) cale_month_day_heading_pane_t4

0x2c24,	// (0x0005f3bb) cale_month_day_heading_pane_t5

0x2c9d,	// (0x0005f434) cale_month_day_heading_pane_t6

0x2d16,	// (0x0005f4ad) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0006ba22) cale_month_day_heading_pane_t

0xaa2c,	// (0x000671c3) bg_cale_side_pane_cp01

0x2da7,	// (0x0005f53e) cale_month_week_pane_t1

0x2dc0,	// (0x0005f557) cale_month_week_pane_t2

0x2dd9,	// (0x0005f570) cale_month_week_pane_t3

0x2df2,	// (0x0005f589) cale_month_week_pane_t4

0x2e0b,	// (0x0005f5a2) cale_month_week_pane_t5

0x2e2c,	// (0x0005f5c3) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0006ba31) cale_month_week_pane_t

0x2e4d,	// (0x0005f5e4) cell_cale_month_pane_ParamLimits

0x2e4d,	// (0x0005f5e4) cell_cale_month_pane

0x2f99,	// (0x0005f730) cell_cale_month_pane_g1

0x2fa5,	// (0x0005f73c) cell_cale_month_pane_t1_ParamLimits

0x2fa5,	// (0x0005f73c) cell_cale_month_pane_t1

0xaa3a,	// (0x000671d1) grid_highlight_pane_cp08

0xa917,	// (0x000670ae) main_smil_g1

0x2fd1,	// (0x0005f768) smil_status_pane

0xadd4,	// (0x0006756b) smil_text_pane

0xc739,	// (0x00068ed0) bg_popup_call3_rect_pane_g8

0xc741,	// (0x00068ed8) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ff,	// (0x0006bc96) bg_popup_call3_rect_pane_g

0xc988,	// (0x0006911f) smil_status_volume_pane_g1

0xadde,	// (0x00067575) smil_status_pane_t1

0x44aa,	// (0x00060c41) volume_smil_pane

0xadf5,	// (0x0006758c) list_smil_text_pane

0x2fe4,	// (0x0005f77b) scroll_pane_cp011

0x2fef,	// (0x0005f786) smil_text_list_pane_t1_ParamLimits

0x2fef,	// (0x0005f786) smil_text_list_pane_t1

0x3067,	// (0x0005f7fe) aid_volume_smil_ParamLimits

0x3067,	// (0x0005f7fe) aid_volume_smil

0xa917,	// (0x000670ae) smil_volume_pane_g1

0xa917,	// (0x000670ae) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0006ba51) smil_volume_pane_g

0x163a,	// (0x0005ddd1) listscroll_cale_day_pane

0xadff,	// (0x00067596) bg_cale_pane

0xae17,	// (0x000675ae) list_cale_pane

0xae3a,	// (0x000675d1) scroll_pane_cp09

0xae4b,	// (0x000675e2) cale_bg_pane_g1

0xae53,	// (0x000675ea) cale_bg_pane_g2

0xae5b,	// (0x000675f2) cale_bg_pane_g3

0xae63,	// (0x000675fa) cale_bg_pane_g4

0xae6b,	// (0x00067602) cale_bg_pane_g5

0xae73,	// (0x0006760a) cale_bg_pane_g6

0xae7b,	// (0x00067612) cale_bg_pane_g7

0xae83,	// (0x0006761a) cale_bg_pane_g8

0xae8b,	// (0x00067622) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0006ba56) cale_bg_pane_g

0x3091,	// (0x0005f828) list_cale_time_pane_ParamLimits

0x3091,	// (0x0005f828) list_cale_time_pane

0xae93,	// (0x0006762a) list_cale_time_pane_g1_ParamLimits

0xae93,	// (0x0006762a) list_cale_time_pane_g1

0xae9f,	// (0x00067636) list_cale_time_pane_g2_ParamLimits

0xae9f,	// (0x00067636) list_cale_time_pane_g2

0x30b3,	// (0x0005f84a) list_cale_time_pane_g3_ParamLimits

0x30b3,	// (0x0005f84a) list_cale_time_pane_g3

0x30c1,	// (0x0005f858) list_cale_time_pane_g4_ParamLimits

0x30c1,	// (0x0005f858) list_cale_time_pane_g4

0x30cf,	// (0x0005f866) list_cale_time_pane_g5_ParamLimits

0x30cf,	// (0x0005f866) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0006ba69) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0006ba69) list_cale_time_pane_g

0xaeb9,	// (0x00067650) list_cale_time_pane_t1_ParamLimits

0xaeb9,	// (0x00067650) list_cale_time_pane_t1

0xaee1,	// (0x00067678) list_cale_time_pane_t2_ParamLimits

0xaee1,	// (0x00067678) list_cale_time_pane_t2

0x3465,	// (0x0005fbfc) aid_blid_cardinal_pane

0x34a7,	// (0x0005fc3e) compass_pane_t4

0xaf09,	// (0x000676a0) list_cale_time_pane_t4_ParamLimits

0xaf09,	// (0x000676a0) list_cale_time_pane_t4

0x34b5,	// (0x0005fc4c) compass_pane_t5

0x34c5,	// (0x0005fc5c) compass_pane_t6

0x34d3,	// (0x0005fc6a) compass_pane_t7

0xb3c6,	// (0x00067b5d) navi_pane_cc_t1

0xb5a3,	// (0x00067d3a) aid_phob_thumbnail_center_pane

0x3b78,	// (0x0006030f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0006ba76) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0006ba76) list_cale_time_pane_t

0x9d12,	// (0x000664a9) bg_popup_window_pane_cp02_ParamLimits

0x9d12,	// (0x000664a9) bg_popup_window_pane_cp02

0xaf31,	// (0x000676c8) heading_pane_cp01_ParamLimits

0xaf31,	// (0x000676c8) heading_pane_cp01

0xaf3d,	// (0x000676d4) loc_req_pane_ParamLimits

0xaf3d,	// (0x000676d4) loc_req_pane

0xaf4d,	// (0x000676e4) loc_type_pane_ParamLimits

0xaf4d,	// (0x000676e4) loc_type_pane

0xaf5f,	// (0x000676f6) loc_type_pane_t1_ParamLimits

0xaf5f,	// (0x000676f6) loc_type_pane_t1

0xaf71,	// (0x00067708) loc_type_pane_t2_ParamLimits

0xaf71,	// (0x00067708) loc_type_pane_t2

0xaf83,	// (0x0006771a) loc_type_pane_t3_ParamLimits

0xaf83,	// (0x0006771a) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0006ba7d) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0006ba7d) loc_type_pane_t

0xaf95,	// (0x0006772c) list_loc_req_pane

0xaf9f,	// (0x00067736) scroll_pane_cp012

0x30dd,	// (0x0005f874) list_single_loc_request_popup_menu_pane_ParamLimits

0x30dd,	// (0x0005f874) list_single_loc_request_popup_menu_pane

0xafaa,	// (0x00067741) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafaa,	// (0x00067741) list_single_loc_request_popup_menu_pane_g1

0xafb6,	// (0x0006774d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafb6,	// (0x0006774d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0006ba84) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0006ba84) list_single_loc_request_popup_menu_pane_g

0xafc2,	// (0x00067759) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafc2,	// (0x00067759) list_single_loc_request_popup_menu_pane_t1

0x30ef,	// (0x0005f886) bg_popup_window_pane_cp03_ParamLimits

0x30ef,	// (0x0005f886) bg_popup_window_pane_cp03

0x30fd,	// (0x0005f894) heading_loc_req_pane_ParamLimits

0x30fd,	// (0x0005f894) heading_loc_req_pane

0x3109,	// (0x0005f8a0) popup_dyc_status_message_window_g1_ParamLimits

0x3109,	// (0x0005f8a0) popup_dyc_status_message_window_g1

0x3115,	// (0x0005f8ac) popup_dyc_status_message_window_t1_ParamLimits

0x3115,	// (0x0005f8ac) popup_dyc_status_message_window_t1

0x3127,	// (0x0005f8be) popup_dyc_status_message_window_t2_ParamLimits

0x3127,	// (0x0005f8be) popup_dyc_status_message_window_t2

0x3139,	// (0x0005f8d0) popup_dyc_status_message_window_t3_ParamLimits

0x3139,	// (0x0005f8d0) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0006ba89) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0006ba89) popup_dyc_status_message_window_t

0xa0bb,	// (0x00066852) bg_heading_pane_cp01

0xafd8,	// (0x0006776f) heading_loc_req_pane_g1

0xafe0,	// (0x00067777) heading_loc_req_pane_g2

0xafe8,	// (0x0006777f) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0006ba90) heading_loc_req_pane_g

0xaff0,	// (0x00067787) heading_loc_req_pane_t1

0xafff,	// (0x00067796) bg_popup_sub_pane_cp01_ParamLimits

0xafff,	// (0x00067796) bg_popup_sub_pane_cp01

0xb00d,	// (0x000677a4) popup_cale_events_window_g1_ParamLimits

0xb00d,	// (0x000677a4) popup_cale_events_window_g1

0xb02d,	// (0x000677c4) popup_cale_events_window_g2_ParamLimits

0xb02d,	// (0x000677c4) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0006bac4) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0006bac4) popup_cale_events_window_g

0xb04d,	// (0x000677e4) popup_cale_events_window_t1_ParamLimits

0xb04d,	// (0x000677e4) popup_cale_events_window_t1

0xb05f,	// (0x000677f6) popup_cale_events_window_t2_ParamLimits

0xb05f,	// (0x000677f6) popup_cale_events_window_t2

0xb09d,	// (0x00067834) popup_cale_events_window_t3_ParamLimits

0xb09d,	// (0x00067834) popup_cale_events_window_t3

0xb0d7,	// (0x0006786e) popup_cale_events_window_t4_ParamLimits

0xb0d7,	// (0x0006786e) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0006bac9) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0006bac9) popup_cale_events_window_t

0x3232,	// (0x0005f9c9) call_type_pane

0xb391,	// (0x00067b28) popup_call_status_window_g1

0x323e,	// (0x0005f9d5) popup_call_status_window_g2

0x324a,	// (0x0005f9e1) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0006bad2) popup_call_status_window_g

0xb10d,	// (0x000678a4) call_type_pane_g1

0xb116,	// (0x000678ad) call_type_pane_g2

0x0001,

0xf342,	// (0x0006bad9) call_type_pane_g

0xa0bb,	// (0x00066852) bg_popup_sub_pane_cp02

0xb11f,	// (0x000678b6) listscroll_popup_wml_pane

0xb127,	// (0x000678be) list_wml_pane

0xb13d,	// (0x000678d4) scroll_pane_cp013

0xb148,	// (0x000678df) list_single_graphic_popup_wml_pane_ParamLimits

0xb148,	// (0x000678df) list_single_graphic_popup_wml_pane

0xa917,	// (0x000670ae) list_single_graphic_popup_wml_pane_g1

0xb15c,	// (0x000678f3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0006bade) list_single_graphic_popup_wml_pane_g

0xb164,	// (0x000678fb) list_single_graphic_popup_wml_pane_t1

0xb17a,	// (0x00067911) aid_call_pane

0xa6cb,	// (0x00066e62) popup_clock_analogue_window_g1

0xa6cb,	// (0x00066e62) popup_clock_analogue_window_g2

0x3256,	// (0x0005f9ed) popup_clock_analogue_window_g3

0x3256,	// (0x0005f9ed) popup_clock_analogue_window_g4

0xa917,	// (0x000670ae) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0006bae3) popup_clock_analogue_window_g

0x325e,	// (0x0005f9f5) popup_clock_analogue_window_t1

0x326c,	// (0x0005fa03) clock_digital_number_pane_ParamLimits

0x326c,	// (0x0005fa03) clock_digital_number_pane

0x3278,	// (0x0005fa0f) clock_digital_number_pane_cp02_ParamLimits

0x3278,	// (0x0005fa0f) clock_digital_number_pane_cp02

0x3284,	// (0x0005fa1b) clock_digital_number_pane_cp03_ParamLimits

0x3284,	// (0x0005fa1b) clock_digital_number_pane_cp03

0x3290,	// (0x0005fa27) clock_digital_number_pane_cp04_ParamLimits

0x3290,	// (0x0005fa27) clock_digital_number_pane_cp04

0x32a0,	// (0x0005fa37) clock_digital_separator_pane_ParamLimits

0x32a0,	// (0x0005fa37) clock_digital_separator_pane

0x32ac,	// (0x0005fa43) popup_clock_digital_window_t1

0xa917,	// (0x000670ae) clock_digital_number_pane_g1

0xa917,	// (0x000670ae) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0006ba51) clock_digital_number_pane_g

0xa917,	// (0x000670ae) clock_digital_separator_pane_g1

0xa917,	// (0x000670ae) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0006ba51) clock_digital_separator_pane_g

0xa0bb,	// (0x00066852) bg_popup_window_pane_cp04

0xb182,	// (0x00067919) heading_pane_cp03

0xb18a,	// (0x00067921) listscroll_popup_gms_pane

0xb192,	// (0x00067929) grid_large_graphic_popup_pane

0xb19c,	// (0x00067933) listscroll_popup_gms_pane_g1

0xb1a4,	// (0x0006793b) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0006baee) listscroll_popup_gms_pane_g

0xac39,	// (0x000673d0) scroll_pane_cp014

0x32c9,	// (0x0005fa60) cell_large_graphic_popup_pane_ParamLimits

0x32c9,	// (0x0005fa60) cell_large_graphic_popup_pane

0x32e1,	// (0x0005fa78) cell_large_graphic_popup_pane_g1_ParamLimits

0x32e1,	// (0x0005fa78) cell_large_graphic_popup_pane_g1

0xb1ac,	// (0x00067943) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1ac,	// (0x00067943) cell_large_graphic_popup_pane_g2

0xb1b8,	// (0x0006794f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1b8,	// (0x0006794f) cell_large_graphic_popup_pane_g3

0xb1c5,	// (0x0006795c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c5,	// (0x0006795c) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0006baf3) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0006baf3) cell_large_graphic_popup_pane_g

0xb1d5,	// (0x0006796c) grid_highlight_pane_cp010

0xa917,	// (0x000670ae) bg_popup_call_pane_g1

0xb1df,	// (0x00067976) list_single_graphic_popup_conf_pane_ParamLimits

0xb1df,	// (0x00067976) list_single_graphic_popup_conf_pane

0xb1f2,	// (0x00067989) list_highlight_pane_cp01

0xb1fb,	// (0x00067992) list_single_graphic_popup_conf_pane_g1

0xb203,	// (0x0006799a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0006bafc) list_single_graphic_popup_conf_pane_g

0xb20b,	// (0x000679a2) list_single_graphic_popup_conf_pane_t1

0xb219,	// (0x000679b0) linegrid_cams_pane_g1

0x32ed,	// (0x0005fa84) linegrid_cams_pane_g2

0xaa6d,	// (0x00067204) linegrid_cams_pane_g3

0xb222,	// (0x000679b9) linegrid_cams_pane_g4

0x32f6,	// (0x0005fa8d) linegrid_cams_pane_g5

0x32ff,	// (0x0005fa96) linegrid_cams_pane_g6

0xaa76,	// (0x0006720d) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0006bb01) linegrid_cams_pane_g

0xb22b,	// (0x000679c2) popup_clock_analogue_window

0xb22b,	// (0x000679c2) popup_clock_digital_window

0xa0bb,	// (0x00066852) popup_phob_thumbnail_window

0xa917,	// (0x000670ae) call_video_uplink_pane_g1

0xb234,	// (0x000679cb) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0006bb10) call_video_uplink_pane_g

0xb23c,	// (0x000679d3) video_uplink_pane

0xb244,	// (0x000679db) mce_image_pane_g1

0x3308,	// (0x0005fa9f) mce_image_pane_g2

0x3312,	// (0x0005faa9) mce_image_pane_g3

0x331a,	// (0x0005fab1) mce_image_pane_g4

0x3322,	// (0x0005fab9) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0006bb15) mce_image_pane_g

0xb24e,	// (0x000679e5) control_top_pane_stacon_cp01_ParamLimits

0xb24e,	// (0x000679e5) control_top_pane_stacon_cp01

0xb262,	// (0x000679f9) uni_indicator_pane_stacon_cp01_ParamLimits

0xb262,	// (0x000679f9) uni_indicator_pane_stacon_cp01

0xb273,	// (0x00067a0a) bg_popup_sub_pane_cp03

0xb27d,	// (0x00067a14) chi_dic_find_pane

0x332a,	// (0x0005fac1) listscroll_chi_dic_pane

0xb285,	// (0x00067a1c) main_pane_chidic_g1

0xb28d,	// (0x00067a24) chi_dic_find_pane_t1

0xb29b,	// (0x00067a32) find_chidic_pane

0xb2a4,	// (0x00067a3b) chi_dic_list_pane_ParamLimits

0xb2a4,	// (0x00067a3b) chi_dic_list_pane

0xb2b5,	// (0x00067a4c) scroll_pane_cp020

0xb2bd,	// (0x00067a54) find_chidic_pane_t1

0xa0bb,	// (0x00066852) input_focus_pane_cp06

0x333e,	// (0x0005fad5) list_chi_dic_pane_ParamLimits

0x333e,	// (0x0005fad5) list_chi_dic_pane

0x3358,	// (0x0005faef) list_chi_dic_pane_t1_ParamLimits

0x3358,	// (0x0005faef) list_chi_dic_pane_t1

0xa0bb,	// (0x00066852) list_highlight_pane_cp020

0xb2cc,	// (0x00067a63) bg_cale_heading_pane_g1

0x336b,	// (0x0005fb02) bg_cale_heading_pane_g2

0x3373,	// (0x0005fb0a) bg_cale_heading_pane_g3

0x337b,	// (0x0005fb12) bg_cale_heading_pane_g4

0x3385,	// (0x0005fb1c) bg_cale_heading_pane_g5

0x338f,	// (0x0005fb26) bg_cale_heading_pane_g6

0x3397,	// (0x0005fb2e) bg_cale_heading_pane_g7

0x339f,	// (0x0005fb36) bg_cale_heading_pane_g8

0x33a9,	// (0x0005fb40) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0006bb20) bg_cale_heading_pane_g

0xb2cc,	// (0x00067a63) bg_cale_side_pane_g1

0x33b3,	// (0x0005fb4a) bg_cale_side_pane_g2

0x33bd,	// (0x0005fb54) bg_cale_side_pane_g3

0x33c7,	// (0x0005fb5e) bg_cale_side_pane_g4

0x33d1,	// (0x0005fb68) bg_cale_side_pane_g5

0x33db,	// (0x0005fb72) bg_cale_side_pane_g6

0x33e5,	// (0x0005fb7c) bg_cale_side_pane_g7

0x33ef,	// (0x0005fb86) bg_cale_side_pane_g8

0x33f7,	// (0x0005fb8e) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0006bb33) bg_cale_side_pane_g

0x33ff,	// (0x0005fb96) popup_call_status_window_ParamLimits

0x33ff,	// (0x0005fb96) popup_call_status_window

0xb2d4,	// (0x00067a6b) stacon_top_pane

0xb2dc,	// (0x00067a73) status_pane_ParamLimits

0xb2dc,	// (0x00067a73) status_pane

0xb2f1,	// (0x00067a88) status_small_pane

0xb2f9,	// (0x00067a90) control_pane

0xa0bb,	// (0x00066852) stacon_bottom_pane

0xb301,	// (0x00067a98) list_single_mce_smart_pane_t1_ParamLimits

0xb301,	// (0x00067a98) list_single_mce_smart_pane_t1

0xb314,	// (0x00067aab) list_single_mce_smart_pane_t2_ParamLimits

0xb314,	// (0x00067aab) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0006bb46) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0006bb46) list_single_mce_smart_pane_t

0x340b,	// (0x0005fba2) compass_pane

0x3417,	// (0x0005fbae) main_location2_pane_t1

0x342b,	// (0x0005fbc2) main_location2_pane_t2

0x343f,	// (0x0005fbd6) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0006bb4b) main_location2_pane_t

0xb333,	// (0x00067aca) compass_pane_g1_ParamLimits

0xb333,	// (0x00067aca) compass_pane_g1

0x3489,	// (0x0005fc20) compass_pane_t1

0x3498,	// (0x0005fc2f) compass_pane_t2

0x0005,

0xf3bd,	// (0x0006bb54) compass_pane_t

0x34e3,	// (0x0005fc7a) text_secondary_cp61

0xb3bd,	// (0x00067b54) navi_pane_cams_g5

0xb439,	// (0x00067bd0) navi_pane_im_t1

0xb447,	// (0x00067bde) navi_pane_mp_g1_ParamLimits

0xb447,	// (0x00067bde) navi_pane_mp_g1

0xb45b,	// (0x00067bf2) navi_pane_mp_g2_ParamLimits

0xb45b,	// (0x00067bf2) navi_pane_mp_g2

0xb467,	// (0x00067bfe) navi_pane_mp_g3_ParamLimits

0xb467,	// (0x00067bfe) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0006bb68) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0006bb68) navi_pane_mp_g

0xb473,	// (0x00067c0a) navi_pane_mp_t1

0xb481,	// (0x00067c18) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0006bb6f) navi_pane_mp_t

0xb4ec,	// (0x00067c83) navi_pane_vt_g1

0xb473,	// (0x00067c0a) navi_pane_vt_t1

0xb4f4,	// (0x00067c8b) navi_slider_pane

0xaa87,	// (0x0006721e) zooming_pane

0xb504,	// (0x00067c9b) navi_slider_pane_g1

0x351e,	// (0x0005fcb5) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0006bb76) navi_slider_pane_g

0xb528,	// (0x00067cbf) aid_levels_zoom

0xb530,	// (0x00067cc7) zooming_pane_g1

0xb538,	// (0x00067ccf) zooming_pane_g2

0xb538,	// (0x00067ccf) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0006bb85) zooming_pane_g

0xb540,	// (0x00067cd7) level_10_zoom

0xb549,	// (0x00067ce0) level_11_zoom

0xb552,	// (0x00067ce9) level_1_zoom

0xb55b,	// (0x00067cf2) level_2_zoom

0xb564,	// (0x00067cfb) level_3_zoom

0xb56d,	// (0x00067d04) level_4_zoom

0xb576,	// (0x00067d0d) level_5_zoom

0xb57f,	// (0x00067d16) level_6_zoom

0xb588,	// (0x00067d1f) level_7_zoom

0xb591,	// (0x00067d28) level_8_zoom

0xb59a,	// (0x00067d31) level_9_zoom

0xb5ab,	// (0x00067d42) popup_phob_thumbnail_window_g1

0xb5b3,	// (0x00067d4a) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0006bb8c) popup_phob_thumbnail_window_g

0xc89b,	// (0x00069032) level_1_location

0xc8a3,	// (0x0006903a) level_2_location

0xc8ab,	// (0x00069042) level_3_location

0xc8b3,	// (0x0006904a) level_4_location

0xaa87,	// (0x0006721e) level_5_location

0x3530,	// (0x0005fcc7) mce_icon_pane_g1

0x3538,	// (0x0005fccf) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0006bb91) mce_icon_pane_g

0x3540,	// (0x0005fcd7) main_mup_pane_g1_ParamLimits

0x3540,	// (0x0005fcd7) main_mup_pane_g1

0x3558,	// (0x0005fcef) main_mup_pane_g2_ParamLimits

0x3558,	// (0x0005fcef) main_mup_pane_g2

0x3574,	// (0x0005fd0b) main_mup_pane_g3_ParamLimits

0x3574,	// (0x0005fd0b) main_mup_pane_g3

0x3590,	// (0x0005fd27) main_mup_pane_g4_ParamLimits

0x3590,	// (0x0005fd27) main_mup_pane_g4

0x35ac,	// (0x0005fd43) main_mup_pane_g5_ParamLimits

0x35ac,	// (0x0005fd43) main_mup_pane_g5

0x35cd,	// (0x0005fd64) main_mup_pane_g6_ParamLimits

0x35cd,	// (0x0005fd64) main_mup_pane_g6

0x35e9,	// (0x0005fd80) main_mup_pane_g7_ParamLimits

0x35e9,	// (0x0005fd80) main_mup_pane_g7

0x3605,	// (0x0005fd9c) main_mup_pane_g8_ParamLimits

0x3605,	// (0x0005fd9c) main_mup_pane_g8

0x3625,	// (0x0005fdbc) main_mup_pane_g9_ParamLimits

0x3625,	// (0x0005fdbc) main_mup_pane_g9

0x3644,	// (0x0005fddb) main_mup_pane_g10_ParamLimits

0x3644,	// (0x0005fddb) main_mup_pane_g10

0x3663,	// (0x0005fdfa) main_mup_pane_g11_ParamLimits

0x3663,	// (0x0005fdfa) main_mup_pane_g11

0x367b,	// (0x0005fe12) main_mup_pane_g12_ParamLimits

0x367b,	// (0x0005fe12) main_mup_pane_g12

0x3689,	// (0x0005fe20) main_mup_pane_g13_ParamLimits

0x3689,	// (0x0005fe20) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0006bb96) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0006bb96) main_mup_pane_g

0x369f,	// (0x0005fe36) main_mup_pane_t1_ParamLimits

0x369f,	// (0x0005fe36) main_mup_pane_t1

0x36bc,	// (0x0005fe53) main_mup_pane_t2_ParamLimits

0x36bc,	// (0x0005fe53) main_mup_pane_t2

0x36d6,	// (0x0005fe6d) main_mup_pane_t3_ParamLimits

0x36d6,	// (0x0005fe6d) main_mup_pane_t3

0x36f0,	// (0x0005fe87) main_mup_pane_t4_ParamLimits

0x36f0,	// (0x0005fe87) main_mup_pane_t4

0x3702,	// (0x0005fe99) main_mup_pane_t5_ParamLimits

0x3702,	// (0x0005fe99) main_mup_pane_t5

0x3714,	// (0x0005feab) main_mup_pane_t6_ParamLimits

0x3714,	// (0x0005feab) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0006bbb1) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0006bbb1) main_mup_pane_t

0x372a,	// (0x0005fec1) mup_progress_pane_ParamLimits

0x372a,	// (0x0005fec1) mup_progress_pane

0x3736,	// (0x0005fecd) mup_visualizer_pane_ParamLimits

0x3736,	// (0x0005fecd) mup_visualizer_pane

0x3770,	// (0x0005ff07) mup_volume_pane_ParamLimits

0x3770,	// (0x0005ff07) mup_volume_pane

0xb391,	// (0x00067b28) mup_visualizer_pane_g1_ParamLimits

0xb391,	// (0x00067b28) mup_visualizer_pane_g1

0xb391,	// (0x00067b28) mup_visualizer_pane_g2_ParamLimits

0xb391,	// (0x00067b28) mup_visualizer_pane_g2

0xb333,	// (0x00067aca) mup_visualizer_pane_g3_ParamLimits

0xb333,	// (0x00067aca) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0006bbbe) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0006bbbe) mup_visualizer_pane_g

0xa917,	// (0x000670ae) mup_volume_pane_g1

0xb5c3,	// (0x00067d5a) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0006bbc5) mup_volume_pane_g

0xa917,	// (0x000670ae) mup_progress_pane_g1

0xb5cc,	// (0x00067d63) mup_progress_pane_g2

0xb5d5,	// (0x00067d6c) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0006bbca) mup_progress_pane_g

0xa0bb,	// (0x00066852) bg_popup_window_pane_cp05

0xb5de,	// (0x00067d75) heading_pane_cp02_ParamLimits

0xb5de,	// (0x00067d75) heading_pane_cp02

0xb5f8,	// (0x00067d8f) list_popup_blid_pane

0xb600,	// (0x00067d97) list_blid_sat_info_pane_ParamLimits

0xb600,	// (0x00067d97) list_blid_sat_info_pane

0xb613,	// (0x00067daa) list_blid_sat_info_pane_g1

0xb61b,	// (0x00067db2) list_blid_sat_info_pane_t1

0x387d,	// (0x00060014) mup_equalizer_pane_ParamLimits

0x387d,	// (0x00060014) mup_equalizer_pane

0x389e,	// (0x00060035) mup_equalizer_pane_cp1_ParamLimits

0x389e,	// (0x00060035) mup_equalizer_pane_cp1

0x38bf,	// (0x00060056) mup_equalizer_pane_cp2_ParamLimits

0x38bf,	// (0x00060056) mup_equalizer_pane_cp2

0x38e0,	// (0x00060077) mup_equalizer_pane_cp3_ParamLimits

0x38e0,	// (0x00060077) mup_equalizer_pane_cp3

0x3901,	// (0x00060098) mup_equalizer_pane_cp4_ParamLimits

0x3901,	// (0x00060098) mup_equalizer_pane_cp4

0x3922,	// (0x000600b9) mup_equalizer_pane_cp5

0x3938,	// (0x000600cf) mup_equalizer_pane_cp6

0x3950,	// (0x000600e7) mup_equalizer_pane_cp7

0xc7b9,	// (0x00068f50) bg_popup_call_poc_act_pane_g9

0xc7c1,	// (0x00068f58) bg_popup_call_poc_act_pane_g10

0xc7c9,	// (0x00068f60) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6d3,	// (0x00066e6a) mup_scale_pane

0xa917,	// (0x000670ae) mup_scale_pane_g1

0xb629,	// (0x00067dc0) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0006bbe6) mup_scale_pane_g

0xb64d,	// (0x00067de4) msg_data_pane

0xb655,	// (0x00067dec) scroll_pane_cp017

0x397a,	// (0x00060111) bg_list_pane_cp04_ParamLimits

0x397a,	// (0x00060111) bg_list_pane_cp04

0xb65d,	// (0x00067df4) msg_data_pane_g1

0x3996,	// (0x0006012d) msg_data_pane_g2

0x39a0,	// (0x00060137) msg_data_pane_g3

0x39a8,	// (0x0006013f) msg_data_pane_g4

0x39b0,	// (0x00060147) msg_data_pane_g5

0x39b8,	// (0x0006014f) msg_data_pane_g6

0x39c0,	// (0x00060157) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0006bbf5) msg_data_pane_g

0x39c8,	// (0x0006015f) msg_text_pane_ParamLimits

0x39c8,	// (0x0006015f) msg_text_pane

0x3a19,	// (0x000601b0) qrid_highlight_pane_cp011_ParamLimits

0x3a19,	// (0x000601b0) qrid_highlight_pane_cp011

0xa0bb,	// (0x00066852) msg_body_pane

0xa0bb,	// (0x00066852) msg_header_pane

0xb66e,	// (0x00067e05) input_focus_pane_cp07

0x3a3f,	// (0x000601d6) msg_header_pane_t1_ParamLimits

0x3a3f,	// (0x000601d6) msg_header_pane_t1

0xa294,	// (0x00066a2b) msg_header_pane_t2_ParamLimits

0xa294,	// (0x00066a2b) msg_header_pane_t2

0x0001,

0xf472,	// (0x0006bc09) msg_header_pane_t_ParamLimits

0xf472,	// (0x0006bc09) msg_header_pane_t

0xb683,	// (0x00067e1a) msg_body_pane_g1

0x3a51,	// (0x000601e8) msg_body_pane_t1_ParamLimits

0x3a51,	// (0x000601e8) msg_body_pane_t1

0xa2a6,	// (0x00066a3d) msg_body_pane_t2_ParamLimits

0xa2a6,	// (0x00066a3d) msg_body_pane_t2

0xa2b8,	// (0x00066a4f) msg_body_pane_t3_ParamLimits

0xa2b8,	// (0x00066a4f) msg_body_pane_t3

0x0002,

0xf477,	// (0x0006bc0e) msg_body_pane_t_ParamLimits

0xf477,	// (0x0006bc0e) msg_body_pane_t

0x3ad4,	// (0x0006026b) main_viewer_pane_g1_ParamLimits

0x3ad4,	// (0x0006026b) main_viewer_pane_g1

0x3ae0,	// (0x00060277) main_viewer_pane_g2_ParamLimits

0x3ae0,	// (0x00060277) main_viewer_pane_g2

0x3aec,	// (0x00060283) main_viewer_pane_g3_ParamLimits

0x3aec,	// (0x00060283) main_viewer_pane_g3

0x3afd,	// (0x00060294) main_viewer_pane_g4_ParamLimits

0x3afd,	// (0x00060294) main_viewer_pane_g4

0x3b0e,	// (0x000602a5) main_viewer_pane_g5_ParamLimits

0x3b0e,	// (0x000602a5) main_viewer_pane_g5

0x3b0e,	// (0x000602a5) main_viewer_pane_g7_ParamLimits

0x3b0e,	// (0x000602a5) main_viewer_pane_g7

0xafaa,	// (0x00067741) main_viewer_pane_g8_ParamLimits

0xafaa,	// (0x00067741) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0006bc1e) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0006bc1e) main_viewer_pane_g

0xb68b,	// (0x00067e22) viewer_content_pane_ParamLimits

0xb68b,	// (0x00067e22) viewer_content_pane

0x3b4c,	// (0x000602e3) main_postcard_pane_g1_ParamLimits

0x3b4c,	// (0x000602e3) main_postcard_pane_g1

0x3b5a,	// (0x000602f1) main_postcard_pane_g2_ParamLimits

0x3b5a,	// (0x000602f1) main_postcard_pane_g2

0x3b68,	// (0x000602ff) main_postcard_pane_g3_ParamLimits

0x3b68,	// (0x000602ff) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0006bc2f) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0006bc2f) main_postcard_pane_g

0x3b78,	// (0x0006030f) main_postcard_pane_g4

0xc99b,	// (0x00069132) smil_status_volume_pane_g2

0x3ba4,	// (0x0006033b) postcard_pane_ParamLimits

0x3ba4,	// (0x0006033b) postcard_pane

0xb391,	// (0x00067b28) postcard_pane_g1_ParamLimits

0xb391,	// (0x00067b28) postcard_pane_g1

0x3bd6,	// (0x0006036d) postcard_pane_g2_ParamLimits

0x3bd6,	// (0x0006036d) postcard_pane_g2

0x3be2,	// (0x00060379) postcard_pane_g3_ParamLimits

0x3be2,	// (0x00060379) postcard_pane_g3

0xb699,	// (0x00067e30) postcard_pane_g4_ParamLimits

0xb699,	// (0x00067e30) postcard_pane_g4

0x3bee,	// (0x00060385) postcard_pane_g5_ParamLimits

0x3bee,	// (0x00060385) postcard_pane_g5

0x3bfa,	// (0x00060391) postcard_pane_g6_ParamLimits

0x3bfa,	// (0x00060391) postcard_pane_g6

0xb6a7,	// (0x00067e3e) postcard_pane_g7_ParamLimits

0xb6a7,	// (0x00067e3e) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0006bc3c) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0006bc3c) postcard_pane_g

0x3c06,	// (0x0006039d) main_mp2_pane_g1_ParamLimits

0x3c06,	// (0x0006039d) main_mp2_pane_g1

0x3c12,	// (0x000603a9) main_mp2_pane_g2_ParamLimits

0x3c12,	// (0x000603a9) main_mp2_pane_g2

0x3c1e,	// (0x000603b5) main_mp2_pane_g3_ParamLimits

0x3c1e,	// (0x000603b5) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0006bc4b) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0006bc4b) main_mp2_pane_g

0x3c2a,	// (0x000603c1) main_mp2_pane_t1_ParamLimits

0x3c2a,	// (0x000603c1) main_mp2_pane_t1

0x3c41,	// (0x000603d8) main_mp2_pane_t2_ParamLimits

0x3c41,	// (0x000603d8) main_mp2_pane_t2

0x3c55,	// (0x000603ec) main_mp2_pane_t3_ParamLimits

0x3c55,	// (0x000603ec) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0006bc52) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0006bc52) main_mp2_pane_t

0xb6b5,	// (0x00067e4c) pec_content_pane_ParamLimits

0xb6b5,	// (0x00067e4c) pec_content_pane

0xac39,	// (0x000673d0) scroll_pane_cp015

0xb6c7,	// (0x00067e5e) pec_attribute_pane_ParamLimits

0xb6c7,	// (0x00067e5e) pec_attribute_pane

0x3c67,	// (0x000603fe) pec_content_pane_g1_ParamLimits

0x3c67,	// (0x000603fe) pec_content_pane_g1

0xb6d7,	// (0x00067e6e) pec_content_pane_t1_ParamLimits

0xb6d7,	// (0x00067e6e) pec_content_pane_t1

0xb6e9,	// (0x00067e80) pec_content_pane_t2_ParamLimits

0xb6e9,	// (0x00067e80) pec_content_pane_t2

0x0001,

0x01f5,	// (0x0005c98c) pec_content_pane_t_ParamLimits

0x01f5,	// (0x0005c98c) pec_content_pane_t

0x3c73,	// (0x0006040a) list_single_graphic_pane_cp01_ParamLimits

0x3c73,	// (0x0006040a) list_single_graphic_pane_cp01

0xa6d3,	// (0x00066e6a) bg_popup_sub_pane_cp04

0xb6fb,	// (0x00067e92) popup_mup_playback_window_g1

0xb707,	// (0x00067e9e) popup_mup_playback_window_t1

0xb71c,	// (0x00067eb3) popup_mup_playback_window_t2

0x0001,

0x01fa,	// (0x0005c991) popup_mup_playback_window_t

0xb753,	// (0x00067eea) main_image_pane_g1_ParamLimits

0xb753,	// (0x00067eea) main_image_pane_g1

0xb796,	// (0x00067f2d) scroll_pane_cp018_ParamLimits

0xb796,	// (0x00067f2d) scroll_pane_cp018

0xb7ae,	// (0x00067f45) scroll_pane_cp016_ParamLimits

0xb7ae,	// (0x00067f45) scroll_pane_cp016

0x3d0c,	// (0x000604a3) smil2_image_pane_ParamLimits

0x3d0c,	// (0x000604a3) smil2_image_pane

0x3d3c,	// (0x000604d3) smil2_root_pane_ParamLimits

0x3d3c,	// (0x000604d3) smil2_root_pane

0x3d68,	// (0x000604ff) smil2_text_pane_ParamLimits

0x3d68,	// (0x000604ff) smil2_text_pane

0xa0bb,	// (0x00066852) bg_list_pane_cp06

0xb7ea,	// (0x00067f81) grid_radio_pane

0xa0bb,	// (0x00066852) bg_popup_window_pane_cp06

0xb7f2,	// (0x00067f89) main_fmradio_pane_t1

0xb182,	// (0x00067919) heading_pane_cp04

0xb800,	// (0x00067f97) main_fmradio_pane_t2

0xc7d1,	// (0x00068f68) popup_cale_lunar_info_window_g1

0xb80e,	// (0x00067fa5) main_fmradio_pane_t3

0xc7d9,	// (0x00068f70) popup_cale_lunar_info_window_g2

0xb81c,	// (0x00067fb3) main_fmradio_pane_t4

0x0001,

0xb82a,	// (0x00067fc1) main_fmradio_pane_t5

0x0004,

0x02d5,	// (0x0005ca6c) popup_cale_lunar_info_window_g

0x020f,	// (0x0005c9a6) main_fmradio_pane_t

0xb838,	// (0x00067fcf) wait_bar_pane_cp03

0xb840,	// (0x00067fd7) cell_fmradio_pane_ParamLimits

0xb840,	// (0x00067fd7) cell_fmradio_pane

0xb6a7,	// (0x00067e3e) cell_fmradio_pane_g1_ParamLimits

0xb6a7,	// (0x00067e3e) cell_fmradio_pane_g1

0xa0bb,	// (0x00066852) grid_highlight_pane_cp011

0xb853,	// (0x00067fea) poc_content_pane_ParamLimits

0xb853,	// (0x00067fea) poc_content_pane

0xb865,	// (0x00067ffc) scroll_pane_cp019

0x3da8,	// (0x0006053f) popup_call_poc_act_window_ParamLimits

0x3da8,	// (0x0006053f) popup_call_poc_act_window

0x3db5,	// (0x0006054c) popup_call_poc_inact_window_ParamLimits

0x3db5,	// (0x0006054c) popup_call_poc_inact_window

0x02ac,	// (0x0005ca43) bg_popup_call_poc_act_pane_g

0xc749,	// (0x00068ee0) bg_popup_call_poc_inact_pane_g1

0xc751,	// (0x00068ee8) bg_popup_call_poc_inact_pane_g2

0xb86d,	// (0x00068004) popup_call_poc_act_window_g2

0xc759,	// (0x00068ef0) bg_popup_call_poc_inact_pane_g3

0xc761,	// (0x00068ef8) bg_popup_call_poc_inact_pane_g4

0xc769,	// (0x00068f00) bg_popup_call_poc_inact_pane_g5

0xb875,	// (0x0006800c) popup_call_poc_act_window_t1_ParamLimits

0xb875,	// (0x0006800c) popup_call_poc_act_window_t1

0xb89d,	// (0x00068034) popup_call_poc_act_window_t2_ParamLimits

0xb89d,	// (0x00068034) popup_call_poc_act_window_t2

0xb8c5,	// (0x0006805c) popup_call_poc_act_window_t3_ParamLimits

0xb8c5,	// (0x0006805c) popup_call_poc_act_window_t3

0xb8ed,	// (0x00068084) popup_call_poc_act_window_t4_ParamLimits

0xb8ed,	// (0x00068084) popup_call_poc_act_window_t4

0x0003,

0x021a,	// (0x0005c9b1) popup_call_poc_act_window_t_ParamLimits

0x021a,	// (0x0005c9b1) popup_call_poc_act_window_t

0xc771,	// (0x00068f08) bg_popup_call_poc_inact_pane_g6

0xc779,	// (0x00068f10) bg_popup_call_poc_inact_pane_g7

0xc781,	// (0x00068f18) bg_popup_call_poc_inact_pane_g8

0xb8ff,	// (0x00068096) popup_call_poc_inact_window_g2

0xc789,	// (0x00068f20) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0299,	// (0x0005ca30) bg_popup_call_poc_inact_pane_g

0xb907,	// (0x0006809e) popup_call_poc_inact_window_t1_ParamLimits

0xb907,	// (0x0006809e) popup_call_poc_inact_window_t1

0xb91c,	// (0x000680b3) popup_call_poc_inact_window_t2_ParamLimits

0xb91c,	// (0x000680b3) popup_call_poc_inact_window_t2

0xb931,	// (0x000680c8) popup_call_poc_inact_window_t3_ParamLimits

0xb931,	// (0x000680c8) popup_call_poc_inact_window_t3

0x0002,

0x0223,	// (0x0005c9ba) popup_call_poc_inact_window_t_ParamLimits

0x0223,	// (0x0005c9ba) popup_call_poc_inact_window_t

0xc90e,	// (0x000690a5) context_pane_ParamLimits

0x43f7,	// (0x00060b8e) signal_pane_ParamLimits

0xaa87,	// (0x0006721e) main_call2_pane

0x436a,	// (0x00060b01) popup_phob_thumbnail2_window_ParamLimits

0x436a,	// (0x00060b01) popup_phob_thumbnail2_window

0x3a82,	// (0x00060219) aid_hotspot_pointer_arrow_pane

0x3a8a,	// (0x00060221) aid_hotspot_pointer_hand_pane

0x40d7,	// (0x0006086e) phob_pre_status_pane_g5

0x1b33,	// (0x0005e2ca) cams_zoom_pane_ParamLimits

0x1b3f,	// (0x0005e2d6) image_vga_pane_ParamLimits

0x1b4e,	// (0x0005e2e5) main_camera_pane_g1_ParamLimits

0x1b5c,	// (0x0005e2f3) main_camera_pane_g2_ParamLimits

0x1b68,	// (0x0005e2ff) main_camera_pane_g3_ParamLimits

0x1b74,	// (0x0005e30b) main_camera_pane_g4_ParamLimits

0x1b80,	// (0x0005e317) main_camera_pane_g5_ParamLimits

0x1b8c,	// (0x0005e323) main_camera_pane_g6_ParamLimits

0x1b98,	// (0x0005e32f) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0006b986) main_camera_pane_g_ParamLimits

0x1ba4,	// (0x0005e33b) main_camera_pane_t1_ParamLimits

0x1bb6,	// (0x0005e34d) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0006b997) main_camera_pane_t_ParamLimits

0xa6d3,	// (0x00066e6a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6d3,	// (0x00066e6a) bg_popup_preview_window_pane_cp01

0xb946,	// (0x000680dd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb946,	// (0x000680dd) popup_phob_thumbnail2_window_g1

0xa0bb,	// (0x00066852) call2_cli_visual_pane

0x3dd1,	// (0x00060568) popup_call2_audio_conf_window_ParamLimits

0x3dd1,	// (0x00060568) popup_call2_audio_conf_window

0x3de6,	// (0x0006057d) popup_call2_audio_first_window_ParamLimits

0x3de6,	// (0x0006057d) popup_call2_audio_first_window

0x3e84,	// (0x0006061b) popup_call2_audio_in_window_ParamLimits

0x3e84,	// (0x0006061b) popup_call2_audio_in_window

0x3ec6,	// (0x0006065d) popup_call2_audio_out_window_ParamLimits

0x3ec6,	// (0x0006065d) popup_call2_audio_out_window

0x3f28,	// (0x000606bf) popup_call2_audio_second_window_ParamLimits

0x3f28,	// (0x000606bf) popup_call2_audio_second_window

0x3f86,	// (0x0006071d) popup_call2_audio_wait_window_ParamLimits

0x3f86,	// (0x0006071d) popup_call2_audio_wait_window

0xa0bb,	// (0x00066852) bg_popup_call2_act_pane_cp03

0xa6b5,	// (0x00066e4c) list_conf_pane_cp

0xb952,	// (0x000680e9) popup_call2_audio_conf_window_t1

0xb1df,	// (0x00067976) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1df,	// (0x00067976) list_single_graphic_popup_conf2_pane

0xb1f2,	// (0x00067989) list_highlight_pane_cp04

0xb960,	// (0x000680f7) list_single_graphic_popup_conf2_pane_g1

0xb203,	// (0x0006799a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4d2,	// (0x0006bc69) list_single_graphic_popup_conf2_pane_g

0xb96a,	// (0x00068101) list_single_graphic_popup_conf2_pane_t1

0xb978,	// (0x0006810f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb978,	// (0x0006810f) bg_popup_call2_act_pane_cp01

0xba02,	// (0x00068199) call_type_pane_cp05_ParamLimits

0xba02,	// (0x00068199) call_type_pane_cp05

0xba56,	// (0x000681ed) popup_call2_audio_second_window_g1_ParamLimits

0xba56,	// (0x000681ed) popup_call2_audio_second_window_g1

0xbaaa,	// (0x00068241) popup_call2_audio_second_window_g2_ParamLimits

0xbaaa,	// (0x00068241) popup_call2_audio_second_window_g2

0x0002,

0x022f,	// (0x0005c9c6) popup_call2_audio_second_window_g_ParamLimits

0x022f,	// (0x0005c9c6) popup_call2_audio_second_window_g

0xbb0f,	// (0x000682a6) popup_call2_audio_second_window_t1_ParamLimits

0xbb0f,	// (0x000682a6) popup_call2_audio_second_window_t1

0xbbca,	// (0x00068361) popup_call2_audio_second_window_t2_ParamLimits

0xbbca,	// (0x00068361) popup_call2_audio_second_window_t2

0xbc1d,	// (0x000683b4) popup_call2_audio_second_window_t3_ParamLimits

0xbc1d,	// (0x000683b4) popup_call2_audio_second_window_t3

0x0003,

0x0236,	// (0x0005c9cd) popup_call2_audio_second_window_t_ParamLimits

0x0236,	// (0x0005c9cd) popup_call2_audio_second_window_t

0xa0bb,	// (0x00066852) bg_popup_call2_in_pane_cp02

0xa0c5,	// (0x0006685c) call_type_pane_cp04

0xa0cd,	// (0x00066864) popup_call2_audio_wait_window_g1

0xa0d5,	// (0x0006686c) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006b875) popup_call2_audio_wait_window_g

0xa0dd,	// (0x00066874) popup_call2_audio_wait_window_t3

0xbd10,	// (0x000684a7) bg_popup_call2_act_pane_ParamLimits

0xbd10,	// (0x000684a7) bg_popup_call2_act_pane

0xbdd0,	// (0x00068567) call_type_pane_cp03_ParamLimits

0xbdd0,	// (0x00068567) call_type_pane_cp03

0xbe34,	// (0x000685cb) popup_call2_audio_first_window_g1_ParamLimits

0xbe34,	// (0x000685cb) popup_call2_audio_first_window_g1

0xbea4,	// (0x0006863b) popup_call2_audio_first_window_g2_ParamLimits

0xbea4,	// (0x0006863b) popup_call2_audio_first_window_g2

0xb391,	// (0x00067b28) popup_call2_audio_first_window_g3_ParamLimits

0xb391,	// (0x00067b28) popup_call2_audio_first_window_g3

0x0004,

0xf4d7,	// (0x0006bc6e) popup_call2_audio_first_window_g_ParamLimits

0xf4d7,	// (0x0006bc6e) popup_call2_audio_first_window_g

0xbf82,	// (0x00068719) popup_call2_audio_first_window_t1_ParamLimits

0xbf82,	// (0x00068719) popup_call2_audio_first_window_t1

0xc085,	// (0x0006881c) popup_call2_audio_first_window_t4_ParamLimits

0xc085,	// (0x0006881c) popup_call2_audio_first_window_t4

0xc168,	// (0x000688ff) popup_call2_audio_first_window_t5_ParamLimits

0xc168,	// (0x000688ff) popup_call2_audio_first_window_t5

0x0003,

0x024a,	// (0x0005c9e1) popup_call2_audio_first_window_t_ParamLimits

0x024a,	// (0x0005c9e1) popup_call2_audio_first_window_t

0xa6cb,	// (0x00066e62) bg_popup_call2_act_pane_g1

0xc7e1,	// (0x00068f78) popup_cale_lunar_info_window_t1

0xc7ef,	// (0x00068f86) popup_cale_lunar_info_window_t2

0xc7fd,	// (0x00068f94) popup_cale_lunar_info_window_t3

0xa0bb,	// (0x00066852) bg_popup_call2_bubble_pane

0xc269,	// (0x00068a00) bg_popup_call2_in_pane_cp01_ParamLimits

0xc269,	// (0x00068a00) bg_popup_call2_in_pane_cp01

0x9d97,	// (0x0006652e) call_type_pane_cp02

0xc2b1,	// (0x00068a48) popup_call2_audio_out_window_g1_ParamLimits

0xc2b1,	// (0x00068a48) popup_call2_audio_out_window_g1

0xc2dd,	// (0x00068a74) popup_call2_audio_out_window_g2_ParamLimits

0xc2dd,	// (0x00068a74) popup_call2_audio_out_window_g2

0xc305,	// (0x00068a9c) popup_call2_audio_out_window_g3_ParamLimits

0xc305,	// (0x00068a9c) popup_call2_audio_out_window_g3

0x0003,

0x0253,	// (0x0005c9ea) popup_call2_audio_out_window_g_ParamLimits

0x0253,	// (0x0005c9ea) popup_call2_audio_out_window_g

0xc340,	// (0x00068ad7) popup_call2_audio_out_window_t1_ParamLimits

0xc340,	// (0x00068ad7) popup_call2_audio_out_window_t1

0xc39f,	// (0x00068b36) popup_call2_audio_out_window_t2_ParamLimits

0xc39f,	// (0x00068b36) popup_call2_audio_out_window_t2

0xc3f3,	// (0x00068b8a) popup_call2_audio_out_window_t3_ParamLimits

0xc3f3,	// (0x00068b8a) popup_call2_audio_out_window_t3

0xc409,	// (0x00068ba0) popup_call2_audio_out_window_t4_ParamLimits

0xc409,	// (0x00068ba0) popup_call2_audio_out_window_t4

0xc41f,	// (0x00068bb6) popup_call2_audio_out_window_t5_ParamLimits

0xc41f,	// (0x00068bb6) popup_call2_audio_out_window_t5

0x0005,

0x025c,	// (0x0005c9f3) popup_call2_audio_out_window_t_ParamLimits

0x025c,	// (0x0005c9f3) popup_call2_audio_out_window_t

0xc483,	// (0x00068c1a) bg_popup_call2_in_pane_ParamLimits

0xc483,	// (0x00068c1a) bg_popup_call2_in_pane

0xc4df,	// (0x00068c76) popup_call2_audio_in_window_g1_ParamLimits

0xc4df,	// (0x00068c76) popup_call2_audio_in_window_g1

0xc517,	// (0x00068cae) popup_call2_audio_in_window_g2_ParamLimits

0xc517,	// (0x00068cae) popup_call2_audio_in_window_g2

0xc54f,	// (0x00068ce6) popup_call2_audio_in_window_g3_ParamLimits

0xc54f,	// (0x00068ce6) popup_call2_audio_in_window_g3

0x0003,

0xf4e2,	// (0x0006bc79) popup_call2_audio_in_window_g_ParamLimits

0xf4e2,	// (0x0006bc79) popup_call2_audio_in_window_g

0xc5a7,	// (0x00068d3e) popup_call2_audio_in_window_t1_ParamLimits

0xc5a7,	// (0x00068d3e) popup_call2_audio_in_window_t1

0xc633,	// (0x00068dca) popup_call2_audio_in_window_t2_ParamLimits

0xc633,	// (0x00068dca) popup_call2_audio_in_window_t2

0xc6b3,	// (0x00068e4a) popup_call2_audio_in_window_t3_ParamLimits

0xc6b3,	// (0x00068e4a) popup_call2_audio_in_window_t3

0xc6cd,	// (0x00068e64) popup_call2_audio_in_window_t4_ParamLimits

0xc6cd,	// (0x00068e64) popup_call2_audio_in_window_t4

0xc6df,	// (0x00068e76) popup_call2_audio_in_window_t5_ParamLimits

0xc6df,	// (0x00068e76) popup_call2_audio_in_window_t5

0xc6f4,	// (0x00068e8b) popup_call2_audio_in_window_t6_ParamLimits

0xc6f4,	// (0x00068e8b) popup_call2_audio_in_window_t6

0x0005,

0xf4eb,	// (0x0006bc82) popup_call2_audio_in_window_t_ParamLimits

0xf4eb,	// (0x0006bc82) popup_call2_audio_in_window_t

0xa6cb,	// (0x00066e62) bg_popup_call2_in_pane_g1

0xc80b,	// (0x00068fa2) popup_cale_lunar_info_window_t4

0x0003,

0x02da,	// (0x0005ca71) popup_cale_lunar_info_window_t

0xa6d3,	// (0x00066e6a) bg_popup_call2_rect_pane_ParamLimits

0xa6d3,	// (0x00066e6a) bg_popup_call2_rect_pane

0xa0bb,	// (0x00066852) call2_cli_visual_graphic_pane

0xa0bb,	// (0x00066852) call2_cli_visual_text_pane

0x449d,	// (0x00060c34) smil_status_volume_pane_g3

0x0002,

0xa917,	// (0x000670ae) call2_cli_visual_graphic_pane_g1

0xa917,	// (0x000670ae) call2_cli_visual_graphic_pane_g2

0xa917,	// (0x000670ae) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4f8,	// (0x0006bc8f) call2_cli_visual_graphic_pane_g

0xc709,	// (0x00068ea0) bg_popup_call2_rect_pane_g1

0xa9a3,	// (0x0006713a) bg_popup_call2_rect_pane_g2

0xc711,	// (0x00068ea8) bg_popup_call2_rect_pane_g3

0xc719,	// (0x00068eb0) bg_popup_call2_rect_pane_g4

0xc721,	// (0x00068eb8) bg_popup_call2_rect_pane_g5

0xc729,	// (0x00068ec0) bg_popup_call2_rect_pane_g6

0xc731,	// (0x00068ec8) bg_popup_call2_rect_pane_g7

0xc739,	// (0x00068ed0) bg_popup_call2_rect_pane_g8

0xc741,	// (0x00068ed8) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ff,	// (0x0006bc96) bg_popup_call2_rect_pane_g

0xc749,	// (0x00068ee0) bg_popup_call2_bubble_pane_g1

0xc751,	// (0x00068ee8) bg_popup_call2_bubble_pane_g2

0xc759,	// (0x00068ef0) bg_popup_call2_bubble_pane_g3

0xc761,	// (0x00068ef8) bg_popup_call2_bubble_pane_g4

0xc769,	// (0x00068f00) bg_popup_call2_bubble_pane_g5

0xc771,	// (0x00068f08) bg_popup_call2_bubble_pane_g6

0xc779,	// (0x00068f10) bg_popup_call2_bubble_pane_g7

0xc781,	// (0x00068f18) bg_popup_call2_bubble_pane_g8

0xc789,	// (0x00068f20) bg_popup_call2_bubble_pane_g9

0x0008,

0x0299,	// (0x0005ca30) bg_popup_call2_bubble_pane_g

0x164a,	// (0x0005dde1) aid_cale_week_size_cell_pane

0x1bc8,	// (0x0005e35f) aid_cams_cif_uncrop_pane_ParamLimits

0x1bc8,	// (0x0005e35f) aid_cams_cif_uncrop_pane

0x1d23,	// (0x0005e4ba) aid_cams_size_cell_ParamLimits

0x1d23,	// (0x0005e4ba) aid_cams_size_cell

0x1d2f,	// (0x0005e4c6) grid_cams_pane_ParamLimits

0x1d3d,	// (0x0005e4d4) linegrid_cams_pane_ParamLimits

0x1f28,	// (0x0005e6bf) call_video_pane_t1

0x1f49,	// (0x0005e6e0) call_video_pane_t2

0x0001,

0xf253,	// (0x0006b9ea) call_video_pane_t

0x2490,	// (0x0005ec27) aid_cale_month_size_cell_pane_ParamLimits

0x2490,	// (0x0005ec27) aid_cale_month_size_cell_pane

0xf542,	// (0x0006bcd9) smil_status_volume_pane_g

0x44aa,	// (0x00060c41) volume_smil_pane_ParamLimits

0x0d8d,	// (0x0005d524) aid_popup2_width_pane

0x153e,	// (0x0005dcd5) cell_qdial_pane_g4_ParamLimits

0x153e,	// (0x0005dcd5) cell_qdial_pane_g4

0x3465,	// (0x0005fbfc) aid_blid_cardinal_pane_ParamLimits

0x3475,	// (0x0005fc0c) aid_blid_destination_pane_ParamLimits

0x3475,	// (0x0005fc0c) aid_blid_destination_pane

0xa6d3,	// (0x00066e6a) bg_popup_call_poc_act_pane_ParamLimits

0xa6d3,	// (0x00066e6a) bg_popup_call_poc_act_pane

0xa6d3,	// (0x00066e6a) bg_popup_call_poc_inact_pane_ParamLimits

0xa6d3,	// (0x00066e6a) bg_popup_call_poc_inact_pane

0xc791,	// (0x00068f28) bg_popup_call_poc_act_pane_g1

0xc799,	// (0x00068f30) bg_popup_call_poc_act_pane_g2

0xc7a1,	// (0x00068f38) bg_popup_call_poc_act_pane_g3

0xc761,	// (0x00068ef8) bg_popup_call_poc_act_pane_g4

0xc769,	// (0x00068f00) bg_popup_call_poc_act_pane_g5

0xc7a9,	// (0x00068f40) bg_popup_call_poc_act_pane_g6

0xc779,	// (0x00068f10) bg_popup_call_poc_act_pane_g7

0xc7b1,	// (0x00068f48) bg_popup_call_poc_act_pane_g8

0xa0bb,	// (0x00066852) main_usb_pane

0x4299,	// (0x00060a30) popup_cale_lunar_info_window

0x2272,	// (0x0005ea09) im_reading_pane_t1_ParamLimits

0xab91,	// (0x00067328) list_im_pane_ParamLimits

0xaba2,	// (0x00067339) scroll_pane_cp07_ParamLimits

0xa0bb,	// (0x00066852) grid_highlight_pane_cp012

0xa6d3,	// (0x00066e6a) mup_scale_pane_ParamLimits

0xb391,	// (0x00067b28) main_usb_pane_g1_ParamLimits

0xb391,	// (0x00067b28) main_usb_pane_g1

0x3ffa,	// (0x00060791) main_usb_pane_g2_ParamLimits

0x3ffa,	// (0x00060791) main_usb_pane_g2

0x0001,

0xf512,	// (0x0006bca9) main_usb_pane_g_ParamLimits

0xf512,	// (0x0006bca9) main_usb_pane_g

0x4006,	// (0x0006079d) main_usb_pane_t1_ParamLimits

0x4006,	// (0x0006079d) main_usb_pane_t1

0x4018,	// (0x000607af) main_usb_pane_t2_ParamLimits

0x4018,	// (0x000607af) main_usb_pane_t2

0x402a,	// (0x000607c1) main_usb_pane_t3_ParamLimits

0x402a,	// (0x000607c1) main_usb_pane_t3

0x403c,	// (0x000607d3) main_usb_pane_t4_ParamLimits

0x403c,	// (0x000607d3) main_usb_pane_t4

0x404e,	// (0x000607e5) main_usb_pane_t5_ParamLimits

0x404e,	// (0x000607e5) main_usb_pane_t5

0x4060,	// (0x000607f7) main_usb_pane_t6_ParamLimits

0x4060,	// (0x000607f7) main_usb_pane_t6

0x0005,

0xf517,	// (0x0006bcae) main_usb_pane_t_ParamLimits

0x340b,	// (0x0005fba2) aid_text_placing

0x3417,	// (0x0005fbae) main_location2_pane_t1_ParamLimits

0x342b,	// (0x0005fbc2) main_location2_pane_t2_ParamLimits

0x343f,	// (0x0005fbd6) main_location2_pane_t3_ParamLimits

0x3453,	// (0x0005fbea) main_location2_pane_t4_ParamLimits

0x3453,	// (0x0005fbea) main_location2_pane_t4

0xf3b4,	// (0x0006bb4b) main_location2_pane_t_ParamLimits

0xa70f,	// (0x00066ea6) find_pinb_pane_g2_ParamLimits

0xa70f,	// (0x00066ea6) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0006b89b) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0006b89b) find_pinb_pane_g

0xa71b,	// (0x00066eb2) find_pinb_pane_t1_ParamLimits

0xa72d,	// (0x00066ec4) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0006b8a0) find_pinb_pane_t_ParamLimits

0xa0bb,	// (0x00066852) main_call3_pane

0x2a33,	// (0x0005f1ca) cale_month_day_heading_pane_t1_ParamLimits

0x2ab9,	// (0x0005f250) cale_month_day_heading_pane_t2_ParamLimits

0x2b32,	// (0x0005f2c9) cale_month_day_heading_pane_t3_ParamLimits

0x2bab,	// (0x0005f342) cale_month_day_heading_pane_t4_ParamLimits

0x2c24,	// (0x0005f3bb) cale_month_day_heading_pane_t5_ParamLimits

0x2c9d,	// (0x0005f434) cale_month_day_heading_pane_t6_ParamLimits

0x2d16,	// (0x0005f4ad) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0006ba22) cale_month_day_heading_pane_t_ParamLimits

0xadec,	// (0x00067583) smil_status_volume_pane

0x3bbe,	// (0x00060355) postcard_address_pane_ParamLimits

0x3bbe,	// (0x00060355) postcard_address_pane

0x3bca,	// (0x00060361) postcard_message_pane_ParamLimits

0x3bca,	// (0x00060361) postcard_message_pane

0x3fc5,	// (0x0006075c) call2_cli_visual_pane_t1_ParamLimits

0x3fc5,	// (0x0006075c) call2_cli_visual_pane_t1

0x4601,	// (0x00060d98) postcard_message_pane_t1_ParamLimits

0x4601,	// (0x00060d98) postcard_message_pane_t1

0x45ea,	// (0x00060d81) postcard_address_pane_t1_ParamLimits

0x45ea,	// (0x00060d81) postcard_address_pane_t1

0x45db,	// (0x00060d72) popup_call3_audio_in_window_ParamLimits

0x45db,	// (0x00060d72) popup_call3_audio_in_window

0x44bf,	// (0x00060c56) bg_popup_call3_in_pane_ParamLimits

0x44bf,	// (0x00060c56) bg_popup_call3_in_pane

0x4521,	// (0x00060cb8) popup_call3_audio_in_window_g1_ParamLimits

0x4521,	// (0x00060cb8) popup_call3_audio_in_window_g1

0x4539,	// (0x00060cd0) popup_call3_audio_in_window_g2_ParamLimits

0x4539,	// (0x00060cd0) popup_call3_audio_in_window_g2

0x4551,	// (0x00060ce8) popup_call3_audio_in_window_g3_ParamLimits

0x4551,	// (0x00060ce8) popup_call3_audio_in_window_g3

0x0003,

0xf549,	// (0x0006bce0) popup_call3_audio_in_window_g_ParamLimits

0xf549,	// (0x0006bce0) popup_call3_audio_in_window_g

0x4579,	// (0x00060d10) popup_call3_audio_in_window_t1_ParamLimits

0x4579,	// (0x00060d10) popup_call3_audio_in_window_t1

0x45a1,	// (0x00060d38) popup_call3_audio_in_window_t2_ParamLimits

0x45a1,	// (0x00060d38) popup_call3_audio_in_window_t2

0x45c9,	// (0x00060d60) popup_call3_audio_in_window_t3_ParamLimits

0x45c9,	// (0x00060d60) popup_call3_audio_in_window_t3

0x0002,

0xf552,	// (0x0006bce9) popup_call3_audio_in_window_t_ParamLimits

0xf552,	// (0x0006bce9) popup_call3_audio_in_window_t

0xaa87,	// (0x0006721e) bg_popup_call3_rect_pane

0xc709,	// (0x00068ea0) bg_popup_call3_rect_pane_g1

0xa9a3,	// (0x0006713a) bg_popup_call3_rect_pane_g2

0xc711,	// (0x00068ea8) bg_popup_call3_rect_pane_g3

0xc719,	// (0x00068eb0) bg_popup_call3_rect_pane_g4

0xc721,	// (0x00068eb8) bg_popup_call3_rect_pane_g5

0xc729,	// (0x00068ec0) bg_popup_call3_rect_pane_g6

0xc731,	// (0x00068ec8) bg_popup_call3_rect_pane_g7

0x378b,	// (0x0005ff22) mup_visualizer_osc_pane

0xb5bb,	// (0x00067d52) mup_visualizer_spec_pane

0x44df,	// (0x00060c76) call3_video_qcif_pane_ParamLimits

0x44df,	// (0x00060c76) call3_video_qcif_pane

0x44f1,	// (0x00060c88) call3_video_qcif_uncrop_pane_ParamLimits

0x44f1,	// (0x00060c88) call3_video_qcif_uncrop_pane

0x44ff,	// (0x00060c96) call3_video_subqcif_pane_ParamLimits

0x44ff,	// (0x00060c96) call3_video_subqcif_pane

0x4511,	// (0x00060ca8) call3_video_subqcif_uncrop_pane_ParamLimits

0x4511,	// (0x00060ca8) call3_video_subqcif_uncrop_pane

0x4569,	// (0x00060d00) popup_call3_audio_in_window_g4_ParamLimits

0x4569,	// (0x00060d00) popup_call3_audio_in_window_g4

0x448c,	// (0x00060c23) mup_spec_half_pane

0x4495,	// (0x00060c2c) mup_spec_half_pane_cp

0xc96e,	// (0x00069105) mup_osc_middle_pane

0xc977,	// (0x0006910e) mup_visualizer_osc_pane_g1

0x446d,	// (0x00060c04) mup_spec_bar_pane_ParamLimits

0x446d,	// (0x00060c04) mup_spec_bar_pane

0xc95b,	// (0x000690f2) mup_spec_bar_pane_g1

0xc965,	// (0x000690fc) mup_spec_bar_pane_g2

0x0001,

0x031e,	// (0x0005cab5) mup_spec_bar_pane_g

0x164a,	// (0x0005dde1) aid_cale_week_size_cell_pane_ParamLimits

0x165f,	// (0x0005ddf6) bg_cale_heading_pane_ParamLimits

0xa9e0,	// (0x00067177) bg_cale_pane_cp01_ParamLimits

0x167f,	// (0x0005de16) cale_week_corner_pane_ParamLimits

0x1699,	// (0x0005de30) cale_week_day_heading_pane_ParamLimits

0x16b9,	// (0x0005de50) cale_week_scroll_pane_g1_ParamLimits

0x16d4,	// (0x0005de6b) cale_week_scroll_pane_g2_ParamLimits

0x16e7,	// (0x0005de7e) cale_week_scroll_pane_g3_ParamLimits

0x16fa,	// (0x0005de91) cale_week_scroll_pane_g4_ParamLimits

0x170d,	// (0x0005dea4) cale_week_scroll_pane_g5_ParamLimits

0x1720,	// (0x0005deb7) cale_week_scroll_pane_g6_ParamLimits

0x1733,	// (0x0005deca) cale_week_scroll_pane_g7_ParamLimits

0x1748,	// (0x0005dedf) cale_week_scroll_pane_g8_ParamLimits

0x175d,	// (0x0005def4) cale_week_scroll_pane_g9_ParamLimits

0x1770,	// (0x0005df07) cale_week_scroll_pane_g10_ParamLimits

0x1783,	// (0x0005df1a) cale_week_scroll_pane_g11_ParamLimits

0x1796,	// (0x0005df2d) cale_week_scroll_pane_g12_ParamLimits

0x17ad,	// (0x0005df44) cale_week_scroll_pane_g13_ParamLimits

0x17c8,	// (0x0005df5f) cale_week_scroll_pane_g14_ParamLimits

0x17e3,	// (0x0005df7a) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0006b92c) cale_week_scroll_pane_g_ParamLimits

0x1813,	// (0x0005dfaa) cale_week_time_pane_ParamLimits

0x1828,	// (0x0005dfbf) grid_cale_week_pane_ParamLimits

0xa9fd,	// (0x00067194) listscroll_cale_week_pane_t1

0xaa0f,	// (0x000671a6) scroll_pane_cp08_ParamLimits

0x2504,	// (0x0005ec9b) cale_month_corner_pane_ParamLimits

0xadc2,	// (0x00067559) cale_month_pane_t1

0x29b6,	// (0x0005f14d) cale_month_week_pane_ParamLimits

0xb391,	// (0x00067b28) popup_call_status_window_g1_ParamLimits

0x323e,	// (0x0005f9d5) popup_call_status_window_g2_ParamLimits

0x324a,	// (0x0005f9e1) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0006bad2) popup_call_status_window_g_ParamLimits

0xb172,	// (0x00067909) aid_call2_pane

0x3a33,	// (0x000601ca) msg_header_pane_g1

0x3bbe,	// (0x00060355) postcard_address2_pane_ParamLimits

0x3bbe,	// (0x00060355) postcard_address2_pane

0x3bca,	// (0x00060361) postcard_message2_pane_ParamLimits

0x3bca,	// (0x00060361) postcard_message2_pane

0x4405,	// (0x00060b9c) message2_row_pane_ParamLimits

0x4405,	// (0x00060b9c) message2_row_pane

0x4420,	// (0x00060bb7) address2_row_pane_ParamLimits

0x4420,	// (0x00060bb7) address2_row_pane

0xc929,	// (0x000690c0) postcard_message2_row_pane_g1

0xc931,	// (0x000690c8) postcard_message2_row_pane_t1

0xc929,	// (0x000690c0) address2_row_pane_g1

0xc931,	// (0x000690c8) address2_row_pane_t1

0x1aae,	// (0x0005e245) aid_size_cell_vorec

0xa0bb,	// (0x00066852) main_rss_pane

0x4433,	// (0x00060bca) rss_list_single_pane_ParamLimits

0x4433,	// (0x00060bca) rss_list_single_pane

0xc93f,	// (0x000690d6) rss_list_single_pane_t1

0xc94d,	// (0x000690e4) rss_list_single_pane_t2

0x0001,

0x0319,	// (0x0005cab0) rss_list_single_pane_t

0xa0bb,	// (0x00066852) main_camera2_pane

0xa0bb,	// (0x00066852) main_video2_pane

0x4665,	// (0x00060dfc) cams_zoom_pane_cp2_ParamLimits

0x4665,	// (0x00060dfc) cams_zoom_pane_cp2

0x4671,	// (0x00060e08) image2_vga_pane_ParamLimits

0x4671,	// (0x00060e08) image2_vga_pane

0x4680,	// (0x00060e17) main_camera2_pane_g1_ParamLimits

0x4680,	// (0x00060e17) main_camera2_pane_g1

0x468c,	// (0x00060e23) main_camera2_pane_g2_ParamLimits

0x468c,	// (0x00060e23) main_camera2_pane_g2

0x4698,	// (0x00060e2f) main_camera2_pane_g3_ParamLimits

0x4698,	// (0x00060e2f) main_camera2_pane_g3

0x46a4,	// (0x00060e3b) main_camera2_pane_g4_ParamLimits

0x46a4,	// (0x00060e3b) main_camera2_pane_g4

0x46b0,	// (0x00060e47) main_camera2_pane_g5_ParamLimits

0x46b0,	// (0x00060e47) main_camera2_pane_g5

0x46bc,	// (0x00060e53) main_camera2_pane_g6_ParamLimits

0x46bc,	// (0x00060e53) main_camera2_pane_g6

0x46c8,	// (0x00060e5f) main_camera2_pane_g7_ParamLimits

0x46c8,	// (0x00060e5f) main_camera2_pane_g7

0x46d4,	// (0x00060e6b) main_camera2_pane_g8_ParamLimits

0x46d4,	// (0x00060e6b) main_camera2_pane_g8

0x0008,

0xf559,	// (0x0006bcf0) main_camera2_pane_g_ParamLimits

0xf559,	// (0x0006bcf0) main_camera2_pane_g

0x46ec,	// (0x00060e83) main_camera2_pane_t1_ParamLimits

0x46ec,	// (0x00060e83) main_camera2_pane_t1

0x46fe,	// (0x00060e95) main_camera2_pane_t2_ParamLimits

0x46fe,	// (0x00060e95) main_camera2_pane_t2

0x4710,	// (0x00060ea7) main_camera2_pane_t3_ParamLimits

0x4710,	// (0x00060ea7) main_camera2_pane_t3

0x4722,	// (0x00060eb9) main_camera2_pane_t4_ParamLimits

0x4722,	// (0x00060eb9) main_camera2_pane_t4

0x0006,

0xf56c,	// (0x0006bd03) main_camera2_pane_t_ParamLimits

0xf56c,	// (0x0006bd03) main_camera2_pane_t

0x4784,	// (0x00060f1b) cams_zoom_pane_cp4_ParamLimits

0x4784,	// (0x00060f1b) cams_zoom_pane_cp4

0x4794,	// (0x00060f2b) image2_cif_pane_ParamLimits

0x4794,	// (0x00060f2b) image2_cif_pane

0x47a9,	// (0x00060f40) image2_subqcif_pane_ParamLimits

0x47a9,	// (0x00060f40) image2_subqcif_pane

0x47b8,	// (0x00060f4f) main_video2_pane_g1_ParamLimits

0x47b8,	// (0x00060f4f) main_video2_pane_g1

0x47ca,	// (0x00060f61) main_video2_pane_g2_ParamLimits

0x47ca,	// (0x00060f61) main_video2_pane_g2

0x47da,	// (0x00060f71) main_video2_pane_g3_ParamLimits

0x47da,	// (0x00060f71) main_video2_pane_g3

0x47ea,	// (0x00060f81) main_video2_pane_g4_ParamLimits

0x47ea,	// (0x00060f81) main_video2_pane_g4

0x47fa,	// (0x00060f91) main_video2_pane_g5_ParamLimits

0x47fa,	// (0x00060f91) main_video2_pane_g5

0x480a,	// (0x00060fa1) main_video2_pane_g6_ParamLimits

0x480a,	// (0x00060fa1) main_video2_pane_g6

0x0005,

0xf57b,	// (0x0006bd12) main_video2_pane_g_ParamLimits

0xf57b,	// (0x0006bd12) main_video2_pane_g

0x481c,	// (0x00060fb3) main_video2_pane_t1_ParamLimits

0x481c,	// (0x00060fb3) main_video2_pane_t1

0x4836,	// (0x00060fcd) main_video2_pane_t2_ParamLimits

0x4836,	// (0x00060fcd) main_video2_pane_t2

0x485c,	// (0x00060ff3) main_video2_pane_t3_ParamLimits

0x485c,	// (0x00060ff3) main_video2_pane_t3

0x0002,

0xf588,	// (0x0006bd1f) main_video2_pane_t_ParamLimits

0xf588,	// (0x0006bd1f) main_video2_pane_t

0x4117,	// (0x000608ae) call_muted_g2

0x0001,

0xf53d,	// (0x0006bcd4) call_muted_g

0xa0bb,	// (0x00066852) main_mup2_pane

0xc9ae,	// (0x00069145) main_mup2_pane_g1_ParamLimits

0xc9ae,	// (0x00069145) main_mup2_pane_g1

0x4882,	// (0x00061019) main_mup2_pane_g2_ParamLimits

0x4882,	// (0x00061019) main_mup2_pane_g2

0x4b04,	// (0x0006129b) main_mup_pane_g13_cp1

0x4b0c,	// (0x000612a3) mup_volume_pane_cp1

0x48a2,	// (0x00061039) main_mup2_pane_g4_ParamLimits

0x48a2,	// (0x00061039) main_mup2_pane_g4

0x48b7,	// (0x0006104e) main_mup2_pane_g5_ParamLimits

0x48b7,	// (0x0006104e) main_mup2_pane_g5

0x48cc,	// (0x00061063) main_mup2_pane_g6_ParamLimits

0x48cc,	// (0x00061063) main_mup2_pane_g6

0x48e1,	// (0x00061078) main_mup2_pane_g7_ParamLimits

0x48e1,	// (0x00061078) main_mup2_pane_g7

0x0006,

0xf58f,	// (0x0006bd26) main_mup2_pane_g_ParamLimits

0xf58f,	// (0x0006bd26) main_mup2_pane_g

0x48fd,	// (0x00061094) main_mup2_pane_t1_ParamLimits

0x48fd,	// (0x00061094) main_mup2_pane_t1

0x4914,	// (0x000610ab) main_mup2_pane_t2_ParamLimits

0x4914,	// (0x000610ab) main_mup2_pane_t2

0x492b,	// (0x000610c2) main_mup2_pane_t3_ParamLimits

0x492b,	// (0x000610c2) main_mup2_pane_t3

0x4942,	// (0x000610d9) main_mup2_pane_t4_ParamLimits

0x4942,	// (0x000610d9) main_mup2_pane_t4

0x495c,	// (0x000610f3) main_mup2_pane_t5_ParamLimits

0x495c,	// (0x000610f3) main_mup2_pane_t5

0x4976,	// (0x0006110d) main_mup2_pane_t6_ParamLimits

0x4976,	// (0x0006110d) main_mup2_pane_t6

0x0005,

0xf59e,	// (0x0006bd35) main_mup2_pane_t_ParamLimits

0xf59e,	// (0x0006bd35) main_mup2_pane_t

0x49ae,	// (0x00061145) mup2_visualizer_pane_ParamLimits

0x49ae,	// (0x00061145) mup2_visualizer_pane

0x49e4,	// (0x0006117b) mup_progress_pane_cp_ParamLimits

0x49e4,	// (0x0006117b) mup_progress_pane_cp

0x4aef,	// (0x00061286) mup_volume_pane_cp_ParamLimits

0x4aef,	// (0x00061286) mup_volume_pane_cp

0x49fb,	// (0x00061192) mup2_visualizer_pane_g1_ParamLimits

0x49fb,	// (0x00061192) mup2_visualizer_pane_g1

0xc9ba,	// (0x00069151) mup2_visualizer_pane_g2_ParamLimits

0xc9ba,	// (0x00069151) mup2_visualizer_pane_g2

0x4a10,	// (0x000611a7) mup2_visualizer_pane_g3_ParamLimits

0x4a10,	// (0x000611a7) mup2_visualizer_pane_g3

0x0002,

0xf5ab,	// (0x0006bd42) mup2_visualizer_pane_g_ParamLimits

0xf5ab,	// (0x0006bd42) mup2_visualizer_pane_g

0xb7e2,	// (0x00067f79) aid_size_cell_fmradio

0x422d,	// (0x000609c4) aid_height_parent_landcape

0xac20,	// (0x000673b7) wml_content_pane_cp

0xac28,	// (0x000673bf) wml_tabs_pane

0xac31,	// (0x000673c8) popup_wml_miniature_window

0xac39,	// (0x000673d0) scroll_pane_cp021

0xac4d,	// (0x000673e4) wml_content_pane_comp8

0xa0bb,	// (0x00066852) bg_popup_sub_pane_cp05

0xc9d8,	// (0x0006916f) popup_wml_miniature_window_g1

0xc9e0,	// (0x00069177) wml_miniature_view_pane

0x4a1e,	// (0x000611b5) aid_size_wml_view

0x4a26,	// (0x000611bd) wml_miniature_view_pane_g1

0x4a2f,	// (0x000611c6) wml_miniature_view_pane_g2

0x4a38,	// (0x000611cf) wml_miniature_view_pane_g3

0x4a40,	// (0x000611d7) wml_miniature_view_pane_g4

0x4a48,	// (0x000611df) wml_miniature_view_pane_g5

0x4a50,	// (0x000611e7) wml_miniature_view_pane_g6

0x4a58,	// (0x000611ef) wml_miniature_view_pane_g7

0x4a60,	// (0x000611f7) wml_miniature_view_pane_g8

0x0007,

0xf5b2,	// (0x0006bd49) wml_miniature_view_pane_g

0xc9ae,	// (0x00069145) background_graphic_ParamLimits

0xc9ae,	// (0x00069145) background_graphic

0xc9e8,	// (0x0006917f) wml_tabs_2_pane

0xc9f1,	// (0x00069188) wml_tabs_3_pane_ParamLimits

0xc9f1,	// (0x00069188) wml_tabs_3_pane

0xca03,	// (0x0006919a) wml_tabs_4_pane_ParamLimits

0xca03,	// (0x0006919a) wml_tabs_4_pane

0xca19,	// (0x000691b0) wml_tabs_5_pane_ParamLimits

0xca19,	// (0x000691b0) wml_tabs_5_pane

0xca33,	// (0x000691ca) wml_tabs_pane_g2_ParamLimits

0xca33,	// (0x000691ca) wml_tabs_pane_g2

0xca47,	// (0x000691de) wml_tabs_pane_g3_ParamLimits

0xca47,	// (0x000691de) wml_tabs_pane_g3

0x4a68,	// (0x000611ff) wml_tabs_2_active_pane_ParamLimits

0x4a68,	// (0x000611ff) wml_tabs_2_active_pane

0x4a78,	// (0x0006120f) wml_tabs_2_passive_pane_ParamLimits

0x4a78,	// (0x0006120f) wml_tabs_2_passive_pane

0x4a88,	// (0x0006121f) wml_tabs_3_active_pane_cp_ParamLimits

0x4a88,	// (0x0006121f) wml_tabs_3_active_pane_cp

0x4a99,	// (0x00061230) wml_tabs_3_passive_pane_ParamLimits

0x4a99,	// (0x00061230) wml_tabs_3_passive_pane

0x4aaa,	// (0x00061241) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aaa,	// (0x00061241) wml_tabs_3_passive_pane_cp

0x4abb,	// (0x00061252) tabs_4_active_pane

0x4ac3,	// (0x0006125a) tabs_4_passive_pane

0x4acb,	// (0x00061262) tabs_4_passive_pane_cp

0x4ad3,	// (0x0006126a) tabs_4_passive_pane_cp2

0x3ff2,	// (0x00060789) aid_height_text

0x3758,	// (0x0005feef) mup_volume_cont_pane_ParamLimits

0x3758,	// (0x0005feef) mup_volume_cont_pane

0x1174,	// (0x0005d90b) aid_size_cell_pinb

0x117e,	// (0x0005d915) aid_size_list_pinb

0x49cd,	// (0x00061164) mup2_volume_cont_pane_ParamLimits

0x49cd,	// (0x00061164) mup2_volume_cont_pane

0x4adb,	// (0x00061272) mup2_volume_cont_pane_g1_ParamLimits

0x4adb,	// (0x00061272) mup2_volume_cont_pane_g1

0x0d99,	// (0x0005d530) aid_size_cell_touch_ParamLimits

0x0d99,	// (0x0005d530) aid_size_cell_touch

0x105a,	// (0x0005d7f1) touch_pane_ParamLimits

0x105a,	// (0x0005d7f1) touch_pane

0x1050,	// (0x0005d7e7) main_rss2_pane

0xca64,	// (0x000691fb) listscroll_rss2_pane

0xca6d,	// (0x00069204) rss2_navigation_pane

0xca75,	// (0x0006920c) list_rss2_pane

0xb2b5,	// (0x00067a4c) scroll_pane_cp22

0xca7d,	// (0x00069214) rss2_navigation_pane_g1

0xca86,	// (0x0006921d) rss2_navigation_pane_g2

0xca8e,	// (0x00069225) rss2_navigation_pane_g3

0x0002,

0x03a4,	// (0x0005cb3b) rss2_navigation_pane_g

0xca96,	// (0x0006922d) rss2_navigation_pane_t1

0x4b14,	// (0x000612ab) rss2_list_single_pane_ParamLimits

0x4b14,	// (0x000612ab) rss2_list_single_pane

0xcaa4,	// (0x0006923b) rss2_list_single_pane_t2

0xcab2,	// (0x00069249) rss2_list_single_pane_t3_ParamLimits

0xcab2,	// (0x00069249) rss2_list_single_pane_t3

0xcacf,	// (0x00069266) rss2_list_single_pane_t4

0x2fdc,	// (0x0005f773) smil_status_pane_g1

0x4244,	// (0x000609db) main_image2_pane_ParamLimits

0x4244,	// (0x000609db) main_image2_pane

0x46e0,	// (0x00060e77) main_camera2_pane_g9_ParamLimits

0x46e0,	// (0x00060e77) main_camera2_pane_g9

0x4734,	// (0x00060ecb) main_camera2_pane_t5_ParamLimits

0x4734,	// (0x00060ecb) main_camera2_pane_t5

0x4746,	// (0x00060edd) main_camera2_pane_t6_ParamLimits

0x4746,	// (0x00060edd) main_camera2_pane_t6

0x4b45,	// (0x000612dc) main_image2_pane_g1_ParamLimits

0x4b45,	// (0x000612dc) main_image2_pane_g1

0x3d92,	// (0x00060529) smil2_video_pane_ParamLimits

0x3d92,	// (0x00060529) smil2_video_pane

0x0c9d,	// (0x0005d434) aid_zoom_text_primary_cp

0x0feb,	// (0x0005d782) popup_preview_fixed_window

0xab89,	// (0x00067320) im_reading_pane_g1

0x462a,	// (0x00060dc1) cams2_bc_adjust_pane_cp_ParamLimits

0x462a,	// (0x00060dc1) cams2_bc_adjust_pane_cp

0x4776,	// (0x00060f0d) cams2_bc_adjust_pane_ParamLimits

0x4776,	// (0x00060f0d) cams2_bc_adjust_pane

0xdbb5,	// (0x0006a34c) cams2_bc_adjust_pane_g1

0x4b51,	// (0x000612e8) cams2_slider_pane

0x4b5a,	// (0x000612f1) cams2_slider_pane_g1

0x4b63,	// (0x000612fa) cams2_slider_pane_g2

0x0006,

0xf5c3,	// (0x0006bd5a) cams2_slider_pane_g

0x1284,	// (0x0005da1b) calc_display_pane_ParamLimits

0x12a2,	// (0x0005da39) calc_paper_pane_ParamLimits

0x12be,	// (0x0005da55) grid_calc_pane_ParamLimits

0x32ac,	// (0x0005fa43) popup_clock_digital_window_t1_ParamLimits

0xb77f,	// (0x00067f16) main_image_pane_t1

0x126a,	// (0x0005da01) aid_size_cell_calc_ParamLimits

0x126a,	// (0x0005da01) aid_size_cell_calc

0x4275,	// (0x00060a0c) popup_blid_sat_info2_window_ParamLimits

0x4275,	// (0x00060a0c) popup_blid_sat_info2_window

0xcae5,	// (0x0006927c) aid_size_cell_blid

0xcaed,	// (0x00069284) bg_popup_window_pane_cp07

0xcb10,	// (0x000692a7) grid_popup_blid_pane

0xcb1a,	// (0x000692b1) heading_pane_cp05_ParamLimits

0xcb1a,	// (0x000692b1) heading_pane_cp05

0xcbe4,	// (0x0006937b) cell_popup_blid_pane_ParamLimits

0xcbe4,	// (0x0006937b) cell_popup_blid_pane

0xcc08,	// (0x0006939f) cell_popup_blid_pane_g1

0xcc10,	// (0x000693a7) cell_popup_blid_pane_t1

0x4993,	// (0x0006112a) mup2_indicator_pane_ParamLimits

0x4993,	// (0x0006112a) mup2_indicator_pane

0xaa87,	// (0x0006721e) mup2_visualizer_osc_pane

0xc9c6,	// (0x0006915d) mup2_visualizer_spec_pane_ParamLimits

0xc9c6,	// (0x0006915d) mup2_visualizer_spec_pane

0x4b7d,	// (0x00061314) mup2_spec_half_pane

0x4b86,	// (0x0006131d) mup2_spec_half_pane_cp

0x4b90,	// (0x00061327) mup2_spec_bar_pane_ParamLimits

0x4b90,	// (0x00061327) mup2_spec_bar_pane

0xc95b,	// (0x000690f2) mup2_spec_bar_pane_g1

0xc965,	// (0x000690fc) mup2_spec_bar_pane_g2

0x0001,

0x031e,	// (0x0005cab5) mup2_spec_bar_pane_g

0x4baf,	// (0x00061346) mup2_osc_middle_pane

0xc977,	// (0x0006910e) mup2_visualizer_osc_pane_g1

0x9cc8,	// (0x0006645f) popup_number_entry_window_t1_ParamLimits

0x9cdb,	// (0x00066472) popup_number_entry_window_t2_ParamLimits

0x9ced,	// (0x00066484) popup_number_entry_window_t3_ParamLimits

0x10b1,	// (0x0005d848) popup_number_entry_window_t5_ParamLimits

0x10b1,	// (0x0005d848) popup_number_entry_window_t5

0xf0af,	// (0x0006b846) popup_number_entry_window_t_ParamLimits

0x9cff,	// (0x00066496) text_title_cp2_ParamLimits

0x3a92,	// (0x00060229) aid_hotspot_pointer_text2_pane

0x3b20,	// (0x000602b7) main_viewer_pane_g9_ParamLimits

0x3b20,	// (0x000602b7) main_viewer_pane_g9

0xadc2,	// (0x00067559) cale_month_pane_t1_ParamLimits

0xadff,	// (0x00067596) bg_cale_pane_ParamLimits

0xae17,	// (0x000675ae) list_cale_pane_ParamLimits

0xae28,	// (0x000675bf) listscroll_cale_day_pane_t1

0xae3a,	// (0x000675d1) scroll_pane_cp09_ParamLimits

0x3793,	// (0x0005ff2a) main_mup_eq_pane_t1_ParamLimits

0x3793,	// (0x0005ff2a) main_mup_eq_pane_t1

0x37ad,	// (0x0005ff44) main_mup_eq_pane_t2_ParamLimits

0x37ad,	// (0x0005ff44) main_mup_eq_pane_t2

0x37c7,	// (0x0005ff5e) main_mup_eq_pane_t3_ParamLimits

0x37c7,	// (0x0005ff5e) main_mup_eq_pane_t3

0x37df,	// (0x0005ff76) main_mup_eq_pane_t4_ParamLimits

0x37df,	// (0x0005ff76) main_mup_eq_pane_t4

0x37f7,	// (0x0005ff8e) main_mup_eq_pane_t5_ParamLimits

0x37f7,	// (0x0005ff8e) main_mup_eq_pane_t5

0x380f,	// (0x0005ffa6) main_mup_eq_pane_t6_ParamLimits

0x380f,	// (0x0005ffa6) main_mup_eq_pane_t6

0x3823,	// (0x0005ffba) main_mup_eq_pane_t7_ParamLimits

0x3823,	// (0x0005ffba) main_mup_eq_pane_t7

0x3837,	// (0x0005ffce) main_mup_eq_pane_t8_ParamLimits

0x3837,	// (0x0005ffce) main_mup_eq_pane_t8

0x384d,	// (0x0005ffe4) main_mup_eq_pane_t9_ParamLimits

0x384d,	// (0x0005ffe4) main_mup_eq_pane_t9

0x3865,	// (0x0005fffc) main_mup_eq_pane_t10_ParamLimits

0x3865,	// (0x0005fffc) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0006bbd1) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0006bbd1) main_mup_eq_pane_t

0x3922,	// (0x000600b9) mup_equalizer_pane_cp5_ParamLimits

0x3938,	// (0x000600cf) mup_equalizer_pane_cp6_ParamLimits

0x3950,	// (0x000600e7) mup_equalizer_pane_cp7_ParamLimits

0x1050,	// (0x0005d7e7) main_gallery_pane

0xc980,	// (0x00069117) smil2_volume_pane

0xc988,	// (0x0006911f) smil_status_volume_pane_g1_ParamLimits

0xc99b,	// (0x00069132) smil_status_volume_pane_g2_ParamLimits

0x449d,	// (0x00060c34) smil_status_volume_pane_g3_ParamLimits

0xf542,	// (0x0006bcd9) smil_status_volume_pane_g_ParamLimits

0xcaed,	// (0x00069284) bg_popup_window_pane_cp07_ParamLimits

0xcafb,	// (0x00069292) blid_firmament_pane

0x4bb8,	// (0x0006134f) aid_size_cell_gallery_ParamLimits

0x4bb8,	// (0x0006134f) aid_size_cell_gallery

0x4bc6,	// (0x0006135d) grid_gallery_pane_ParamLimits

0x4bc6,	// (0x0006135d) grid_gallery_pane

0x4bd6,	// (0x0006136d) cell_gallery_pane_ParamLimits

0x4bd6,	// (0x0006136d) cell_gallery_pane

0xcc1e,	// (0x000693b5) bg_cell_gallery_focus_pane_ParamLimits

0xcc1e,	// (0x000693b5) bg_cell_gallery_focus_pane

0xcc30,	// (0x000693c7) cell_gallery_pane_g1_ParamLimits

0xcc30,	// (0x000693c7) cell_gallery_pane_g1

0x4c24,	// (0x000613bb) cell_gallery_pane_g2_ParamLimits

0x4c24,	// (0x000613bb) cell_gallery_pane_g2

0x4c31,	// (0x000613c8) cell_gallery_pane_g3_ParamLimits

0x4c31,	// (0x000613c8) cell_gallery_pane_g3

0xcc3c,	// (0x000693d3) cell_gallery_pane_g4_ParamLimits

0xcc3c,	// (0x000693d3) cell_gallery_pane_g4

0x0003,

0xf5d2,	// (0x0006bd69) cell_gallery_pane_g_ParamLimits

0xf5d2,	// (0x0006bd69) cell_gallery_pane_g

0xcc48,	// (0x000693df) bg_cell_gallery_focus_pane_g1

0xcc50,	// (0x000693e7) bg_cell_gallery_focus_pane_g2

0xcc58,	// (0x000693ef) bg_cell_gallery_focus_pane_g3

0xcc60,	// (0x000693f7) bg_cell_gallery_focus_pane_g4

0xcc68,	// (0x000693ff) bg_cell_gallery_focus_pane_g5

0xcc70,	// (0x00069407) bg_cell_gallery_focus_pane_g6

0xcc78,	// (0x0006940f) bg_cell_gallery_focus_pane_g7

0xcc80,	// (0x00069417) bg_cell_gallery_focus_pane_g8

0x0007,

0x03da,	// (0x0005cb71) bg_cell_gallery_focus_pane_g

0xcc88,	// (0x0006941f) aid_firma_cardinal

0xcc9c,	// (0x00069433) blid_firmament_pane_t1

0xccb3,	// (0x0006944a) blid_firmament_pane_t2

0xccca,	// (0x00069461) blid_firmament_pane_t3

0xcce1,	// (0x00069478) blid_firmament_pane_t4

0x0003,

0x03eb,	// (0x0005cb82) blid_firmament_pane_t

0xccf8,	// (0x0006948f) blid_sat_info_pane

0xcd08,	// (0x0006949f) blid_sat_info_pane_g1

0xcd08,	// (0x0006949f) blid_sat_info_pane_g2

0x0001,

0x03f4,	// (0x0005cb8b) blid_sat_info_pane_g

0xcd12,	// (0x000694a9) blid_sat_info_pane_t1

0xcd20,	// (0x000694b7) smil2_volume_content_pane

0xcd29,	// (0x000694c0) smil2_volume_pane_g1

0xaa9b,	// (0x00067232) smil2_volume_content_pane_g1

0xcd31,	// (0x000694c8) smil2_volume_content_pane_g2

0xcd3a,	// (0x000694d1) smil2_volume_content_pane_g3

0xcd43,	// (0x000694da) smil2_volume_content_pane_g4

0xcd4c,	// (0x000694e3) smil2_volume_content_pane_g5

0xcd55,	// (0x000694ec) smil2_volume_content_pane_g6

0xcd5e,	// (0x000694f5) smil2_volume_content_pane_g7

0xcd67,	// (0x000694fe) smil2_volume_content_pane_g8

0xcd70,	// (0x00069507) smil2_volume_content_pane_g9

0xcd79,	// (0x00069510) smil2_volume_content_pane_g10

0x0009,

0xf5db,	// (0x0006bd72) smil2_volume_content_pane_g

0x18a9,	// (0x0005e040) cale_week_day_heading_pane_t1_ParamLimits

0x18c4,	// (0x0005e05b) cale_week_day_heading_pane_t2_ParamLimits

0x18df,	// (0x0005e076) cale_week_day_heading_pane_t3_ParamLimits

0x18fa,	// (0x0005e091) cale_week_day_heading_pane_t4_ParamLimits

0x1915,	// (0x0005e0ac) cale_week_day_heading_pane_t5_ParamLimits

0x1930,	// (0x0005e0c7) cale_week_day_heading_pane_t6_ParamLimits

0x194b,	// (0x0005e0e2) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0006b94d) cale_week_day_heading_pane_t_ParamLimits

0xaa2c,	// (0x000671c3) bg_cale_side_pane_ParamLimits

0x1966,	// (0x0005e0fd) cale_week_time_pane_t1_ParamLimits

0x1980,	// (0x0005e117) cale_week_time_pane_t2_ParamLimits

0x199a,	// (0x0005e131) cale_week_time_pane_t3_ParamLimits

0x19b4,	// (0x0005e14b) cale_week_time_pane_t4_ParamLimits

0x19ce,	// (0x0005e165) cale_week_time_pane_t5_ParamLimits

0x19e8,	// (0x0005e17f) cale_week_time_pane_t6_ParamLimits

0x1a06,	// (0x0005e19d) cale_week_time_pane_t7_ParamLimits

0x1a28,	// (0x0005e1bf) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0006b95c) cale_week_time_pane_t_ParamLimits

0x1a4c,	// (0x0005e1e3) cell_cale_week_pane_g2_ParamLimits

0xaa2c,	// (0x000671c3) bg_cale_side_pane_cp01_ParamLimits

0x2da7,	// (0x0005f53e) cale_month_week_pane_t1_ParamLimits

0x2dc0,	// (0x0005f557) cale_month_week_pane_t2_ParamLimits

0x2dd9,	// (0x0005f570) cale_month_week_pane_t3_ParamLimits

0x2df2,	// (0x0005f589) cale_month_week_pane_t4_ParamLimits

0x2e0b,	// (0x0005f5a2) cale_month_week_pane_t5_ParamLimits

0x2e2c,	// (0x0005f5c3) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0006ba31) cale_month_week_pane_t_ParamLimits

0x2f99,	// (0x0005f730) cell_cale_month_pane_g1_ParamLimits

0x1050,	// (0x0005d7e7) main_cale_event_viewer_pane

0x9c9e,	// (0x00066435) listscroll_cale_event_viewer_pane

0xcd82,	// (0x00069519) list_cale_ev_pane

0xcd8a,	// (0x00069521) scroll_pane_cp023

0xcd96,	// (0x0006952d) field_cale_ev_pane_ParamLimits

0xcd96,	// (0x0006952d) field_cale_ev_pane

0xcdb4,	// (0x0006954b) field_cale_ev_content_pane_ParamLimits

0xcdb4,	// (0x0006954b) field_cale_ev_content_pane

0xcdc0,	// (0x00069557) field_cale_ev_pane_g1_ParamLimits

0xcdc0,	// (0x00069557) field_cale_ev_pane_g1

0xcdcc,	// (0x00069563) field_cale_ev_pane_g2_ParamLimits

0xcdcc,	// (0x00069563) field_cale_ev_pane_g2

0xcde4,	// (0x0006957b) field_cale_ev_pane_g3_ParamLimits

0xcde4,	// (0x0006957b) field_cale_ev_pane_g3

0x0002,

0x040e,	// (0x0005cba5) field_cale_ev_pane_g_ParamLimits

0x040e,	// (0x0005cba5) field_cale_ev_pane_g

0xcdfc,	// (0x00069593) field_cale_ev_pane_t1_ParamLimits

0xcdfc,	// (0x00069593) field_cale_ev_pane_t1

0xce13,	// (0x000695aa) field_cale_ev_content_pane_t1_ParamLimits

0xce13,	// (0x000695aa) field_cale_ev_content_pane_t1

0xb665,	// (0x00067dfc) bg_button_pane_cp01

0x163a,	// (0x0005ddd1) listscroll_cale_week_pane_ParamLimits

0xa9d7,	// (0x0006716e) popup_toolbar_window_cp01

0xa9fd,	// (0x00067194) listscroll_cale_week_pane_t1_ParamLimits

0x163a,	// (0x0005ddd1) listscroll_cale_day_pane_ParamLimits

0xa9d7,	// (0x0006716e) popup_toolbar_window_cp02

0xae28,	// (0x000675bf) listscroll_cale_day_pane_t1_ParamLimits

0x163a,	// (0x0005ddd1) main_cale_month_pane_ParamLimits

0x437c,	// (0x00060b13) popup_toolbar_window_cp03_ParamLimits

0x437c,	// (0x00060b13) popup_toolbar_window_cp03

0x3ca8,	// (0x0006043f) main_image_pane_g2_ParamLimits

0x3ca8,	// (0x0006043f) main_image_pane_g2

0x3cb4,	// (0x0006044b) main_image_pane_g3_ParamLimits

0x3cb4,	// (0x0006044b) main_image_pane_g3

0x0002,

0xf4c2,	// (0x0006bc59) main_image_pane_g_ParamLimits

0xf4c2,	// (0x0006bc59) main_image_pane_g

0xb77f,	// (0x00067f16) main_image_pane_t1_ParamLimits

0x3cc0,	// (0x00060457) main_image_pane_t2_ParamLimits

0x3cc0,	// (0x00060457) main_image_pane_t2

0x3cd2,	// (0x00060469) main_image_pane_t3_ParamLimits

0x3cd2,	// (0x00060469) main_image_pane_t3

0x3ce4,	// (0x0006047b) main_image_pane_t4_ParamLimits

0x3ce4,	// (0x0006047b) main_image_pane_t4

0x0003,

0xf4c9,	// (0x0006bc60) main_image_pane_t_ParamLimits

0xf4c9,	// (0x0006bc60) main_image_pane_t

0x3cf6,	// (0x0006048d) popup_image_details_window_cp01

0x3d00,	// (0x00060497) popup_toobar_trans_pane_cp01_ParamLimits

0x3d00,	// (0x00060497) popup_toobar_trans_pane_cp01

0x42cc,	// (0x00060a63) popup_image_details_window_ParamLimits

0x42cc,	// (0x00060a63) popup_image_details_window

0x42da,	// (0x00060a71) popup_image_focus_window

0x461c,	// (0x00060db3) camera2_autofocus_pane_ParamLimits

0x461c,	// (0x00060db3) camera2_autofocus_pane

0x9c9e,	// (0x00066435) bg_popup_sub_pane_cp06

0xce31,	// (0x000695c8) popup_image_focus_window_g1

0xce39,	// (0x000695d0) popup_image_focus_window_g2

0xce41,	// (0x000695d8) popup_image_focus_window_g3

0xce49,	// (0x000695e0) popup_image_focus_window_g4

0x0003,

0x0415,	// (0x0005cbac) popup_image_focus_window_g

0xce51,	// (0x000695e8) popup_image_focus_window_t1

0xce5f,	// (0x000695f6) popup_image_focus_window_t2

0xce6f,	// (0x00069606) popup_image_focus_window_t3

0x0002,

0x041e,	// (0x0005cbb5) popup_image_focus_window_t

0xce7d,	// (0x00069614) camera2_autofocus_pane_g1

0xa74e,	// (0x00066ee5) bg_tb_trans_pane_cp01

0xce8b,	// (0x00069622) popup_image_details_window_g1

0xce9e,	// (0x00069635) popup_image_details_window_g2

0x0002,

0x0430,	// (0x0005cbc7) popup_image_details_window_g

0xcec7,	// (0x0006965e) popup_image_details_window_t1

0xced9,	// (0x00069670) popup_image_details_window_t2

0xcef2,	// (0x00069689) popup_image_details_window_t3

0xcf06,	// (0x0006969d) popup_image_details_window_t4

0xcf21,	// (0x000696b8) popup_image_details_window_t5

0x0004,

0x0437,	// (0x0005cbce) popup_image_details_window_t

0xa8ae,	// (0x00067045) bg_calc_paper_pane_ParamLimits

0x1050,	// (0x0005d7e7) grid_highlight_pane_cp013

0x13bb,	// (0x0005db52) list_calc_pane_ParamLimits

0x13cd,	// (0x0005db64) scroll_pane_cp024

0xa8c2,	// (0x00067059) bg_calc_display_pane_ParamLimits

0x13d5,	// (0x0005db6c) calc_display_pane_t1_ParamLimits

0x13ea,	// (0x0005db81) calc_display_pane_t2_ParamLimits

0x13ff,	// (0x0005db96) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0006b8cd) calc_display_pane_t_ParamLimits

0x14d8,	// (0x0005dc6f) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0006b8ea) cell_calc_pane_g

0x14e1,	// (0x0005dc78) cell_calc_pane_t1

0xa921,	// (0x000670b8) grid_highlight_pane_cp02_ParamLimits

0xa937,	// (0x000670ce) toolbar_button_pane_cp01_ParamLimits

0xa937,	// (0x000670ce) toolbar_button_pane_cp01

0xb7c4,	// (0x00067f5b) temp_image_control_pane_ParamLimits

0xb7c4,	// (0x00067f5b) temp_image_control_pane

0x4244,	// (0x000609db) main_mp3_pane

0xcf3b,	// (0x000696d2) temp_image_control_pane_g1_ParamLimits

0xcf3b,	// (0x000696d2) temp_image_control_pane_g1

0xcf49,	// (0x000696e0) temp_image_control_pane_g2_ParamLimits

0xcf49,	// (0x000696e0) temp_image_control_pane_g2

0xcf5b,	// (0x000696f2) temp_image_control_pane_g3_ParamLimits

0xcf5b,	// (0x000696f2) temp_image_control_pane_g3

0x4c6e,	// (0x00061405) temp_image_control_pane_g4_ParamLimits

0x4c6e,	// (0x00061405) temp_image_control_pane_g4

0x0003,

0xf5fb,	// (0x0006bd92) temp_image_control_pane_g_ParamLimits

0xf5fb,	// (0x0006bd92) temp_image_control_pane_g

0xcf3b,	// (0x000696d2) main_mp3_pane_g1

0x4c7f,	// (0x00061416) main_mp3_pane_g2

0x0007,

0xf604,	// (0x0006bd9b) main_mp3_pane_g

0xcf9e,	// (0x00069735) main_mp3_pane_t1

0xaa8f,	// (0x00067226) main_camera_pane_g8_ParamLimits

0xaa8f,	// (0x00067226) main_camera_pane_g8

0x1cd9,	// (0x0005e470) main_video_pane_g7_ParamLimits

0x1cd9,	// (0x0005e470) main_video_pane_g7

0x4764,	// (0x00060efb) main_camera2_pane_t7_ParamLimits

0x4764,	// (0x00060efb) main_camera2_pane_t7

0xabe0,	// (0x00067377) scroll_pane_cp025_ParamLimits

0xabe0,	// (0x00067377) scroll_pane_cp025

0xabf4,	// (0x0006738b) scroll_pane_cp026_ParamLimits

0xabf4,	// (0x0006738b) scroll_pane_cp026

0xac03,	// (0x0006739a) wml_content_pane_ParamLimits

0x1050,	// (0x0005d7e7) main_touch_calib_pane

0x4d23,	// (0x000614ba) main_touch_calib_pane_g1

0x4d2f,	// (0x000614c6) main_touch_calib_pane_g2

0x4d3b,	// (0x000614d2) main_touch_calib_pane_g3

0x4d47,	// (0x000614de) main_touch_calib_pane_g4

0x0003,

0xf622,	// (0x0006bdb9) main_touch_calib_pane_g

0x4d53,	// (0x000614ea) main_touch_calib_pane_t1

0x4d6c,	// (0x00061503) main_touch_calib_pane_t2

0x0004,

0xf62b,	// (0x0006bdc2) main_touch_calib_pane_t

0xb39f,	// (0x00067b36) mup_progress_pane_cp02

0xb3d4,	// (0x00067b6b) navi_pane_g1

0xb48f,	// (0x00067c26) navi_pane_mp_t3

0x4244,	// (0x000609db) main_mp3_pane_ParamLimits

0x43b9,	// (0x00060b50) navi_pane_ParamLimits

0xcf3b,	// (0x000696d2) main_mp3_pane_g1_ParamLimits

0x4c7f,	// (0x00061416) main_mp3_pane_g2_ParamLimits

0x4c8b,	// (0x00061422) main_mp3_pane_g3_ParamLimits

0x4c8b,	// (0x00061422) main_mp3_pane_g3

0x4c97,	// (0x0006142e) main_mp3_pane_g4_ParamLimits

0x4c97,	// (0x0006142e) main_mp3_pane_g4

0xcf6b,	// (0x00069702) main_mp3_pane_g5_ParamLimits

0xcf6b,	// (0x00069702) main_mp3_pane_g5

0xcf79,	// (0x00069710) main_mp3_pane_g6_ParamLimits

0xcf79,	// (0x00069710) main_mp3_pane_g6

0xcf86,	// (0x0006971d) main_mp3_pane_g7_ParamLimits

0xcf86,	// (0x0006971d) main_mp3_pane_g7

0xcf92,	// (0x00069729) main_mp3_pane_g8_ParamLimits

0xcf92,	// (0x00069729) main_mp3_pane_g8

0xf604,	// (0x0006bd9b) main_mp3_pane_g_ParamLimits

0x4ca3,	// (0x0006143a) main_mp3_pane_t2

0x4cb3,	// (0x0006144a) main_mp3_pane_t3

0xcfac,	// (0x00069743) main_mp3_pane_t4

0xcfba,	// (0x00069751) main_mp3_pane_t5

0x0005,

0xf615,	// (0x0006bdac) main_mp3_pane_t

0xcfc8,	// (0x0006975f) mup_progress_pane_cp01

0x0c9d,	// (0x0005d434) aid_zoom_text_secondary2

0xcd82,	// (0x00069519) list_cale_ev2_pane

0xcd8a,	// (0x00069521) scroll_pane_cp023_ParamLimits

0x4dc7,	// (0x0006155e) field_cale_ev2_pane_ParamLimits

0x4dc7,	// (0x0006155e) field_cale_ev2_pane

0xa2ca,	// (0x00066a61) field_cale_ev2_pane_g1_ParamLimits

0xa2ca,	// (0x00066a61) field_cale_ev2_pane_g1

0xa2d6,	// (0x00066a6d) field_cale_ev2_pane_g2_ParamLimits

0xa2d6,	// (0x00066a6d) field_cale_ev2_pane_g2

0xa2ee,	// (0x00066a85) field_cale_ev2_pane_g3_ParamLimits

0xa2ee,	// (0x00066a85) field_cale_ev2_pane_g3

0x0003,

0xf636,	// (0x0006bdcd) field_cale_ev2_pane_g_ParamLimits

0xf636,	// (0x0006bdcd) field_cale_ev2_pane_g

0x4df0,	// (0x00061587) field_cale_ev2_pane_t1_ParamLimits

0x4df0,	// (0x00061587) field_cale_ev2_pane_t1

0x4e07,	// (0x0006159e) field_cale_ev2_pane_t2_ParamLimits

0x4e07,	// (0x0006159e) field_cale_ev2_pane_t2

0x0001,

0xf63f,	// (0x0006bdd6) field_cale_ev2_pane_t_ParamLimits

0xf63f,	// (0x0006bdd6) field_cale_ev2_pane_t

0x3b88,	// (0x0006031f) main_postcard_pane_g5_ParamLimits

0x3b88,	// (0x0006031f) main_postcard_pane_g5

0x3b96,	// (0x0006032d) main_postcard_pane_g6_ParamLimits

0x3b96,	// (0x0006032d) main_postcard_pane_g6

0x1b23,	// (0x0005e2ba) camera2_autofocus_pane_cp_ParamLimits

0x1b23,	// (0x0005e2ba) camera2_autofocus_pane_cp

0x4244,	// (0x000609db) main_mup3_pane

0x4e3b,	// (0x000615d2) main_mup3_pane_g1_ParamLimits

0x4e3b,	// (0x000615d2) main_mup3_pane_g1

0x4e5c,	// (0x000615f3) main_mup3_pane_g2_ParamLimits

0x4e5c,	// (0x000615f3) main_mup3_pane_g2

0x4ed4,	// (0x0006166b) main_mup3_pane_g3_ParamLimits

0x4ed4,	// (0x0006166b) main_mup3_pane_g3

0x4f17,	// (0x000616ae) main_mup3_pane_g4_ParamLimits

0x4f17,	// (0x000616ae) main_mup3_pane_g4

0x4f5a,	// (0x000616f1) main_mup3_pane_g5_ParamLimits

0x4f5a,	// (0x000616f1) main_mup3_pane_g5

0x4f9d,	// (0x00061734) main_mup3_pane_g6_ParamLimits

0x4f9d,	// (0x00061734) main_mup3_pane_g6

0xcff0,	// (0x00069787) main_mup3_pane_g7_ParamLimits

0xcff0,	// (0x00069787) main_mup3_pane_g7

0x0007,

0xf644,	// (0x0006bddb) main_mup3_pane_g_ParamLimits

0xf644,	// (0x0006bddb) main_mup3_pane_g

0x5013,	// (0x000617aa) main_mup3_pane_t1_ParamLimits

0x5013,	// (0x000617aa) main_mup3_pane_t1

0x5082,	// (0x00061819) main_mup3_pane_t2_ParamLimits

0x5082,	// (0x00061819) main_mup3_pane_t2

0x514b,	// (0x000618e2) main_mup3_pane_t4_ParamLimits

0x514b,	// (0x000618e2) main_mup3_pane_t4

0x5199,	// (0x00061930) main_mup3_pane_t5_ParamLimits

0x5199,	// (0x00061930) main_mup3_pane_t5

0x5249,	// (0x000619e0) main_mup3_pane_t6_ParamLimits

0x5249,	// (0x000619e0) main_mup3_pane_t6

0x0005,

0xf655,	// (0x0006bdec) main_mup3_pane_t_ParamLimits

0xf655,	// (0x0006bdec) main_mup3_pane_t

0x52f5,	// (0x00061a8c) mup3_progress_pane_ParamLimits

0x52f5,	// (0x00061a8c) mup3_progress_pane

0x5373,	// (0x00061b0a) popup_mup3_control_window_ParamLimits

0x5373,	// (0x00061b0a) popup_mup3_control_window

0xcffe,	// (0x00069795) popup_mup3_text_window

0x538c,	// (0x00061b23) mup3_progress_pane_t1

0x53ab,	// (0x00061b42) mup3_progress_pane_t2

0xd006,	// (0x0006979d) mup3_progress_pane_t3

0x0002,

0xf662,	// (0x0006bdf9) mup3_progress_pane_t

0xd023,	// (0x000697ba) mup_progress_pane_cp03

0x9c9e,	// (0x00066435) bg_tb_trans_pane_cp04

0x53ca,	// (0x00061b61) mup3_volume_pane

0x53d2,	// (0x00061b69) popup_mup3_control_window_g1

0x53db,	// (0x00061b72) mup3_volume_pane_g1

0x53e4,	// (0x00061b7b) mup3_volume_pane_g2

0x53ed,	// (0x00061b84) mup3_volume_pane_g3

0x0002,

0xf669,	// (0x0006be00) mup3_volume_pane_g

0x9c9e,	// (0x00066435) bg_tb_trans_pane_cp03

0xd033,	// (0x000697ca) popup_mup3_text_window_g1

0xd03b,	// (0x000697d2) popup_mup3_text_window_t1

0xa90a,	// (0x000670a1) list_calc_item_pane_g1_ParamLimits

0xca5b,	// (0x000691f2) mup_volume_pane_cp_g1

0x4d85,	// (0x0006151c) main_touch_calib_pane_t3

0x4d9b,	// (0x00061532) main_touch_calib_pane_t4

0x4db1,	// (0x00061548) main_touch_calib_pane_t5

0x0d85,	// (0x0005d51c) aid_cell_size_toolbar2

0x0d8d,	// (0x0005d524) aid_popup3_width_pane

0x0c95,	// (0x0005d42c) aid_zoom_text_msg_primary

0x1af8,	// (0x0005e28f) vorec_t7

0xa8ce,	// (0x00067065) bg_calc_paper_pane_g1_ParamLimits

0xa8da,	// (0x00067071) bg_calc_paper_pane_g2_ParamLimits

0xa8e6,	// (0x0006707d) bg_calc_paper_pane_g3_ParamLimits

0xa8f2,	// (0x00067089) bg_calc_paper_pane_g4_ParamLimits

0xa8fe,	// (0x00067095) bg_calc_paper_pane_g5_ParamLimits

0x143e,	// (0x0005dbd5) bg_calc_paper_pane_g6_ParamLimits

0x144f,	// (0x0005dbe6) bg_calc_paper_pane_g7_ParamLimits

0x1460,	// (0x0005dbf7) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0006b8d4) bg_calc_paper_pane_g_ParamLimits

0x1471,	// (0x0005dc08) calc_bg_paper_pane_g9_ParamLimits

0x1c0a,	// (0x0005e3a1) image_qvga_pane_ParamLimits

0x1c0a,	// (0x0005e3a1) image_qvga_pane

0xa6d3,	// (0x00066e6a) bg_popup_sub_pane_cp04_ParamLimits

0xb6fb,	// (0x00067e92) popup_mup_playback_window_g1_ParamLimits

0xb707,	// (0x00067e9e) popup_mup_playback_window_t1_ParamLimits

0xb71c,	// (0x00067eb3) popup_mup_playback_window_t2_ParamLimits

0x01fa,	// (0x0005c991) popup_mup_playback_window_t_ParamLimits

0x4893,	// (0x0006102a) main_mup2_pane_g3_ParamLimits

0x4893,	// (0x0006102a) main_mup2_pane_g3

0x1fd6,	// (0x0005e76d) popup_toolbar_window_cp04

0xbafe,	// (0x00068295) popup_call2_audio_second_window_g3_ParamLimits

0xbafe,	// (0x00068295) popup_call2_audio_second_window_g3

0xbf08,	// (0x0006869f) popup_call2_audio_first_window_g4_ParamLimits

0xbf08,	// (0x0006869f) popup_call2_audio_first_window_g4

0xc587,	// (0x00068d1e) popup_call2_audio_in_window_g4_ParamLimits

0xc587,	// (0x00068d1e) popup_call2_audio_in_window_g4

0x3c9b,	// (0x00060432) aid_area_sk_bg_cut_ParamLimits

0x3c9b,	// (0x00060432) aid_area_sk_bg_cut

0xb731,	// (0x00067ec8) aid_area_sk_bg_cut_2_ParamLimits

0xb731,	// (0x00067ec8) aid_area_sk_bg_cut_2

0x4c14,	// (0x000613ab) aid_placing_details_win

0x4c1c,	// (0x000613b3) aid_placing_details_win_2

0xce7d,	// (0x00069614) camera2_autofocus_pane_g1_ParamLimits

0x0fdc,	// (0x0005d773) popup_fixed_preview_cale_window_ParamLimits

0x0fdc,	// (0x0005d773) popup_fixed_preview_cale_window

0xb50d,	// (0x00067ca4) navi_slider_pane_g3

0xb516,	// (0x00067cad) navi_slider_pane_g4

0xb51f,	// (0x00067cb6) navi_slider_pane_g5

0xb50d,	// (0x00067ca4) navi_slider_pane_g6

0x3527,	// (0x0005fcbe) navi_slider_pane_g7

0xb632,	// (0x00067dc9) mup_scale_pane_g3

0xb63b,	// (0x00067dd2) mup_scale_pane_g4

0xb644,	// (0x00067ddb) mup_scale_pane_g5

0x3968,	// (0x000600ff) mup_scale_pane_g6

0x3971,	// (0x00060108) mup_scale_pane_g7

0xb50d,	// (0x00067ca4) cams2_slider_pane_g3

0xcadd,	// (0x00069274) cams2_slider_pane_g4

0x4b6c,	// (0x00061303) cams2_slider_pane_g5

0xb50d,	// (0x00067ca4) cams2_slider_pane_g6

0x4b74,	// (0x0006130b) cams2_slider_pane_g7

0xcd08,	// (0x0006949f) camera2_autofocus_pane_cp_g1

0xc8f4,	// (0x0006908b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f4,	// (0x0006908b) bg_popup_preview_window_pane_cp02

0xd049,	// (0x000697e0) list_fp_cale_pane_ParamLimits

0xd049,	// (0x000697e0) list_fp_cale_pane

0xd055,	// (0x000697ec) popup_fixed_preview_cale_window_t1_ParamLimits

0xd055,	// (0x000697ec) popup_fixed_preview_cale_window_t1

0x53f6,	// (0x00061b8d) popup_fixed_preview_cale_window_t2_ParamLimits

0x53f6,	// (0x00061b8d) popup_fixed_preview_cale_window_t2

0x540b,	// (0x00061ba2) popup_fixed_preview_cale_window_t3_ParamLimits

0x540b,	// (0x00061ba2) popup_fixed_preview_cale_window_t3

0x0002,

0xf670,	// (0x0006be07) popup_fixed_preview_cale_window_t_ParamLimits

0xf670,	// (0x0006be07) popup_fixed_preview_cale_window_t

0x5420,	// (0x00061bb7) list_single_fp_cale_pane_ParamLimits

0x5420,	// (0x00061bb7) list_single_fp_cale_pane

0xd073,	// (0x0006980a) list_single_fp_cale_pane_g1_ParamLimits

0xd073,	// (0x0006980a) list_single_fp_cale_pane_g1

0xd07f,	// (0x00069816) list_single_fp_cale_pane_g2_ParamLimits

0xd07f,	// (0x00069816) list_single_fp_cale_pane_g2

0x0002,

0x04c9,	// (0x0005cc60) list_single_fp_cale_pane_g_ParamLimits

0x04c9,	// (0x0005cc60) list_single_fp_cale_pane_g

0xd098,	// (0x0006982f) list_single_fp_cale_pane_t1_ParamLimits

0xd098,	// (0x0006982f) list_single_fp_cale_pane_t1

0xd0aa,	// (0x00069841) list_single_fp_cale_pane_t2_ParamLimits

0xd0aa,	// (0x00069841) list_single_fp_cale_pane_t2

0x0001,

0x04d0,	// (0x0005cc67) list_single_fp_cale_pane_t_ParamLimits

0x04d0,	// (0x0005cc67) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1050,	// (0x0005d7e7) main_dialer_pane

0x5433,	// (0x00061bca) aid_cell_size_keypad

0x543d,	// (0x00061bd4) dialer_ne_pane

0x5447,	// (0x00061bde) grid_dialer_command_1_pane

0x544f,	// (0x00061be6) grid_dialer_command_2_pane

0x5457,	// (0x00061bee) grid_dialer_keypad_pane

0x5469,	// (0x00061c00) bg_popup_call_pane_cp06_ParamLimits

0x5469,	// (0x00061c00) bg_popup_call_pane_cp06

0x5475,	// (0x00061c0c) dialer_ne_clear_pane_ParamLimits

0x5475,	// (0x00061c0c) dialer_ne_clear_pane

0xd0dd,	// (0x00069874) dialer_ne_pane_g1

0xd0e5,	// (0x0006987c) dialer_ne_pane_t1_ParamLimits

0xd0e5,	// (0x0006987c) dialer_ne_pane_t1

0x5481,	// (0x00061c18) dialer_ne_pane_t2_ParamLimits

0x5481,	// (0x00061c18) dialer_ne_pane_t2

0x549e,	// (0x00061c35) dialer_ne_pane_t3_ParamLimits

0x549e,	// (0x00061c35) dialer_ne_pane_t3

0x0002,

0xf677,	// (0x0006be0e) dialer_ne_pane_t_ParamLimits

0xf677,	// (0x0006be0e) dialer_ne_pane_t

0x54c2,	// (0x00061c59) dialer_ne_pane_t3_copy1_ParamLimits

0x54c2,	// (0x00061c59) dialer_ne_pane_t3_copy1

0x54e6,	// (0x00061c7d) cell_dialer_keypad_pane_ParamLimits

0x54e6,	// (0x00061c7d) cell_dialer_keypad_pane

0x54fd,	// (0x00061c94) cell_dialer_command_1_pane_ParamLimits

0x54fd,	// (0x00061c94) cell_dialer_command_1_pane

0x5513,	// (0x00061caa) cell_dialer_command_2_pane_ParamLimits

0x5513,	// (0x00061caa) cell_dialer_command_2_pane

0xd0f7,	// (0x0006988e) bg_button_pane_cp02_ParamLimits

0xd0f7,	// (0x0006988e) bg_button_pane_cp02

0x5522,	// (0x00061cb9) cell_dialer_keypad_pane_g1_ParamLimits

0x5522,	// (0x00061cb9) cell_dialer_keypad_pane_g1

0xd0f7,	// (0x0006988e) bg_button_pane_cp03_ParamLimits

0xd0f7,	// (0x0006988e) bg_button_pane_cp03

0x5537,	// (0x00061cce) cell_dialer_command_1_pane_g1_ParamLimits

0x5537,	// (0x00061cce) cell_dialer_command_1_pane_g1

0xd103,	// (0x0006989a) bg_button_pane_cp04

0x554b,	// (0x00061ce2) cell_dialer_command_2_pane_g1

0xaa87,	// (0x0006721e) bg_button_pane_cp06

0xd10b,	// (0x000698a2) dialer_ne_clear_pane_g1

0xb3e0,	// (0x00067b77) navi_pane_g2

0xb40e,	// (0x00067ba5) navi_pane_g3

0x0002,

0xf3ca,	// (0x0006bb61) navi_pane_g

0xb49d,	// (0x00067c34) navi_pane_mv_g2

0xb4c4,	// (0x00067c5b) navi_pane_mv_g5

0x34f2,	// (0x0005fc89) navi_pane_mv_t1

0xa8c2,	// (0x00067059) main_clock2_pane

0xe01d,	// (0x0006a7b4) main_clock2_list_pane_ParamLimits

0xe01d,	// (0x0006a7b4) main_clock2_list_pane

0x55a7,	// (0x00061d3e) main_clock2_pane_t1_ParamLimits

0x55a7,	// (0x00061d3e) main_clock2_pane_t1

0x55d5,	// (0x00061d6c) main_clock2_pane_t2_ParamLimits

0x55d5,	// (0x00061d6c) main_clock2_pane_t2

0x0004,

0xf67e,	// (0x0006be15) main_clock2_pane_t_ParamLimits

0xf67e,	// (0x0006be15) main_clock2_pane_t

0x563a,	// (0x00061dd1) popup_clock_analogue_window_cp03_ParamLimits

0x563a,	// (0x00061dd1) popup_clock_analogue_window_cp03

0x5658,	// (0x00061def) popup_clock_digital_window_cp02_ParamLimits

0x5658,	// (0x00061def) popup_clock_digital_window_cp02

0x56cd,	// (0x00061e64) main_clock2_list_single_pane_ParamLimits

0x56cd,	// (0x00061e64) main_clock2_list_single_pane

0xaa87,	// (0x0006721e) list_highlight_pane_cp05

0xd149,	// (0x000698e0) main_clock2_list_single_pane_t1

0x1fd6,	// (0x0005e76d) popup_toolbar_window_cp04_ParamLimits

0x4c3e,	// (0x000613d5) camera2_autofocus_pane_g2_ParamLimits

0x4c3e,	// (0x000613d5) camera2_autofocus_pane_g2

0x4c4a,	// (0x000613e1) camera2_autofocus_pane_g3_ParamLimits

0x4c4a,	// (0x000613e1) camera2_autofocus_pane_g3

0x4c56,	// (0x000613ed) camera2_autofocus_pane_g4_ParamLimits

0x4c56,	// (0x000613ed) camera2_autofocus_pane_g4

0x4c62,	// (0x000613f9) camera2_autofocus_pane_g5_ParamLimits

0x4c62,	// (0x000613f9) camera2_autofocus_pane_g5

0x0004,

0xf5f0,	// (0x0006bd87) camera2_autofocus_pane_g_ParamLimits

0xf5f0,	// (0x0006bd87) camera2_autofocus_pane_g

0xcfd0,	// (0x00069767) camera2_autofocus_pane_cp_g2

0xcfd8,	// (0x0006976f) camera2_autofocus_pane_cp_g3

0xcfe0,	// (0x00069777) camera2_autofocus_pane_cp_g4

0xcfe8,	// (0x0006977f) camera2_autofocus_pane_cp_g5

0x0004,

0x048b,	// (0x0005cc22) camera2_autofocus_pane_cp_g

0x5461,	// (0x00061bf8) popup_dialer_spcha_window

0x9c9e,	// (0x00066435) bg_popup_sub_pane_cp07

0xd157,	// (0x000698ee) list_spcha_pane

0xd15f,	// (0x000698f6) list_single_spcha_pane_ParamLimits

0xd15f,	// (0x000698f6) list_single_spcha_pane

0x9c9e,	// (0x00066435) list_highlight_pane_cp06

0xd170,	// (0x00069907) list_single_spcha_pane_t1

0xc331,	// (0x00068ac8) popup_call2_audio_out_window_g4_ParamLimits

0xc331,	// (0x00068ac8) popup_call2_audio_out_window_g4

0x1050,	// (0x0005d7e7) main_imed2_pane

0x42e2,	// (0x00060a79) popup_imed_adjust2_window

0x42f5,	// (0x00060a8c) popup_imed_trans_window_ParamLimits

0x42f5,	// (0x00060a8c) popup_imed_trans_window

0xcb46,	// (0x000692dd) popup_blid_sat_info2_window_t1

0xcb54,	// (0x000692eb) popup_blid_sat_info2_window_t2

0x000a,

0x03ba,	// (0x0005cb51) popup_blid_sat_info2_window_t

0x5782,	// (0x00061f19) aid_size_cell_colour_35

0x579c,	// (0x00061f33) aid_size_cell_colour_112

0x57b3,	// (0x00061f4a) aid_size_cell_effect

0xa74e,	// (0x00066ee5) bg_tb_trans_pane_cp02

0xb131,	// (0x000678c8) heading_imed_pane

0x57cd,	// (0x00061f64) listscroll_imed_pane

0xd17e,	// (0x00069915) heading_imed_pane_g1

0xd186,	// (0x0006991d) heading_imed_pane_t1

0xd194,	// (0x0006992b) grid_imed_colour_35_pane_ParamLimits

0xd194,	// (0x0006992b) grid_imed_colour_35_pane

0x57d9,	// (0x00061f70) grid_imed_effect_pane

0xd1ab,	// (0x00069942) list_imed_aspect_pane

0x57e9,	// (0x00061f80) scroll_pane_cp027_ParamLimits

0x57e9,	// (0x00061f80) scroll_pane_cp027

0x57f5,	// (0x00061f8c) cell_imed_effect_pane_ParamLimits

0x57f5,	// (0x00061f8c) cell_imed_effect_pane

0xd1b3,	// (0x0006994a) cell_imed_colour_pane_ParamLimits

0xd1b3,	// (0x0006994a) cell_imed_colour_pane

0xd1f5,	// (0x0006998c) cell_imed_colour_pane_g1_ParamLimits

0xd1f5,	// (0x0006998c) cell_imed_colour_pane_g1

0xd206,	// (0x0006999d) hgihlgiht_grid_pane_cp016_ParamLimits

0xd206,	// (0x0006999d) hgihlgiht_grid_pane_cp016

0x580d,	// (0x00061fa4) cell_imed_effect_pane_g1

0x5815,	// (0x00061fac) grid_highlight_pane_cp017

0xd217,	// (0x000699ae) list_imed_single_pane_ParamLimits

0xd217,	// (0x000699ae) list_imed_single_pane

0x9c9e,	// (0x00066435) list_highlight_pane_cp07

0xd22c,	// (0x000699c3) list_imed_aspect_pane_comp1_t1

0xc900,	// (0x00069097) bg_tb_trans_pane_cp05

0xd24e,	// (0x000699e5) popup_imed_adjust2_window_g1

0xd275,	// (0x00069a0c) popup_imed_adjust2_window_t1

0xd28d,	// (0x00069a24) slider_imed_adjust_pane

0xd2a1,	// (0x00069a38) slider_imed_adjust_pane_g1

0xd2b1,	// (0x00069a48) slider_imed_adjust_pane_g2

0xd2c1,	// (0x00069a58) slider_imed_adjust_pane_g3

0xd2d2,	// (0x00069a69) slider_imed_adjust_pane_g4

0x0003,

0x04fe,	// (0x0005cc95) slider_imed_adjust_pane_g

0x581e,	// (0x00061fb5) aid_size_cell_clipart2

0x582a,	// (0x00061fc1) grid_imed_clipart_pane

0xd2e3,	// (0x00069a7a) scroll_pane_cp031

0x5834,	// (0x00061fcb) cell_imed_clipart_pane_ParamLimits

0x5834,	// (0x00061fcb) cell_imed_clipart_pane

0x5856,	// (0x00061fed) cell_imed_clipart_pane_g1

0x9c9e,	// (0x00066435) grid_highlight_pane_cp014

0x5589,	// (0x00061d20) main_clock2_pane_g1_ParamLimits

0x5589,	// (0x00061d20) main_clock2_pane_g1

0x5674,	// (0x00061e0b) aid_call2_pane_cp10

0x5686,	// (0x00061e1d) aid_call_pane_cp10

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g1

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g2

0x5698,	// (0x00061e2f) popup_clock_analogue_window_cp10_g3

0x5698,	// (0x00061e2f) popup_clock_analogue_window_cp10_g4

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g5

0x0004,

0xf689,	// (0x0006be20) popup_clock_analogue_window_cp10_g

0x56ae,	// (0x00061e45) popup_clock_analogue_window_cp10_t1

0x56df,	// (0x00061e76) clock_digital_number_pane_cp10_ParamLimits

0x56df,	// (0x00061e76) clock_digital_number_pane_cp10

0x56f9,	// (0x00061e90) clock_digital_number_pane_cp11_ParamLimits

0x56f9,	// (0x00061e90) clock_digital_number_pane_cp11

0x5713,	// (0x00061eaa) clock_digital_number_pane_cp12_ParamLimits

0x5713,	// (0x00061eaa) clock_digital_number_pane_cp12

0x572d,	// (0x00061ec4) clock_digital_number_pane_cp13_ParamLimits

0x572d,	// (0x00061ec4) clock_digital_number_pane_cp13

0x5747,	// (0x00061ede) clock_digital_separator_pane_cp10_ParamLimits

0x5747,	// (0x00061ede) clock_digital_separator_pane_cp10

0x5761,	// (0x00061ef8) popup_clock_digital_window_cp02_t1_ParamLimits

0x5761,	// (0x00061ef8) popup_clock_digital_window_cp02_t1

0xa6cb,	// (0x00066e62) clock_digital_number_pane_cp10_g1

0xa6cb,	// (0x00066e62) clock_digital_number_pane_cp10_g2

0x0001,

0xf694,	// (0x0006be2b) clock_digital_number_pane_cp10_g

0xa6cb,	// (0x00066e62) clock_digital_separator_pane_cp10_g1

0xa6cb,	// (0x00066e62) clock_digital_separator_pane_g2_cp10

0xb4cc,	// (0x00067c63) navi_pane_vded_g4

0xb4d5,	// (0x00067c6c) navi_pane_vded_g5

0xb4de,	// (0x00067c75) navi_pane_vded_t1

0x1050,	// (0x0005d7e7) main_vded_pane

0x585f,	// (0x00061ff6) main_vded_pane_g1

0x586b,	// (0x00062002) main_vded_pane_g2

0x5875,	// (0x0006200c) main_vded_pane_g3

0x0002,

0xf699,	// (0x0006be30) main_vded_pane_g

0x587f,	// (0x00062016) main_vded_pane_t1

0x588d,	// (0x00062024) main_vded_pane_t2

0x0001,

0xf6a0,	// (0x0006be37) main_vded_pane_t

0x589b,	// (0x00062032) vded_slider_pane

0x58a5,	// (0x0006203c) vded_video_pane

0xd2eb,	// (0x00069a82) vded_video_pane_g1

0x58af,	// (0x00062046) vded_video_pane_g2

0xcd08,	// (0x0006949f) vded_video_pane_g3

0x0002,

0xf6a5,	// (0x0006be3c) vded_video_pane_g

0xd2f5,	// (0x00069a8c) vded_slider_pane_g1

0xca5b,	// (0x000691f2) vded_slider_pane_g2

0xd2fe,	// (0x00069a95) vded_slider_pane_g3

0xd307,	// (0x00069a9e) vded_slider_pane_g4

0xd310,	// (0x00069aa7) vded_slider_pane_g5

0x0004,

0x051f,	// (0x0005ccb6) vded_slider_pane_g

0x5365,	// (0x00061afc) mup3_rocker_pane_ParamLimits

0x5365,	// (0x00061afc) mup3_rocker_pane

0x58b8,	// (0x0006204f) mup3_control_keys_pane_g1

0x58c0,	// (0x00062057) mup3_control_keys_pane_g2

0x58c8,	// (0x0006205f) mup3_control_keys_pane_g3

0x58d0,	// (0x00062067) mup3_control_keys_pane_g4

0x0003,

0xf6ac,	// (0x0006be43) mup3_control_keys_pane_g

0x1004,	// (0x0005d79b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1004,	// (0x0005d79b) popup_toolbar2_fixed_window_cp01

0x537f,	// (0x00061b16) popup_toolbar2_fixed_window_cp02_ParamLimits

0x537f,	// (0x00061b16) popup_toolbar2_fixed_window_cp02

0xbc70,	// (0x00068407) popup_call2_audio_second_window_t4_ParamLimits

0xbc70,	// (0x00068407) popup_call2_audio_second_window_t4

0xc19e,	// (0x00068935) popup_call2_audio_first_window_t6_ParamLimits

0xc19e,	// (0x00068935) popup_call2_audio_first_window_t6

0xc434,	// (0x00068bcb) popup_call2_audio_out_window_t6_ParamLimits

0xc434,	// (0x00068bcb) popup_call2_audio_out_window_t6

0x1050,	// (0x0005d7e7) main_vitu_pane

0x58e0,	// (0x00062077) aid_size_cell_itu_ParamLimits

0x58e0,	// (0x00062077) aid_size_cell_itu

0xe01d,	// (0x0006a7b4) bg_popup_window_pane_cp08_ParamLimits

0xe01d,	// (0x0006a7b4) bg_popup_window_pane_cp08

0x58ee,	// (0x00062085) field_vitu_entry_pane_ParamLimits

0x58ee,	// (0x00062085) field_vitu_entry_pane

0x58fd,	// (0x00062094) grid_vitu_function_pane_ParamLimits

0x58fd,	// (0x00062094) grid_vitu_function_pane

0x590d,	// (0x000620a4) grid_vitu_itu_pane_ParamLimits

0x590d,	// (0x000620a4) grid_vitu_itu_pane

0x591d,	// (0x000620b4) cell_vitu_itu_pane_ParamLimits

0x591d,	// (0x000620b4) cell_vitu_itu_pane

0x5932,	// (0x000620c9) cell_vitu_function_pane_ParamLimits

0x5932,	// (0x000620c9) cell_vitu_function_pane

0xa74e,	// (0x00066ee5) bg_popup_sub_pane_cp08_ParamLimits

0xa74e,	// (0x00066ee5) bg_popup_sub_pane_cp08

0x5944,	// (0x000620db) field_vitu_entry_pane_t1_ParamLimits

0x5944,	// (0x000620db) field_vitu_entry_pane_t1

0xd331,	// (0x00069ac8) field_vitu_entry_pane_t2_ParamLimits

0xd331,	// (0x00069ac8) field_vitu_entry_pane_t2

0x0001,

0xf6b5,	// (0x0006be4c) field_vitu_entry_pane_t_ParamLimits

0xf6b5,	// (0x0006be4c) field_vitu_entry_pane_t

0xd34e,	// (0x00069ae5) bg_button_pane_cp05_ParamLimits

0xd34e,	// (0x00069ae5) bg_button_pane_cp05

0x5960,	// (0x000620f7) cell_vitu_itu_pane_g1

0x5978,	// (0x0006210f) cell_vitu_itu_pane_t1_ParamLimits

0x5978,	// (0x0006210f) cell_vitu_itu_pane_t1

0x598a,	// (0x00062121) cell_vitu_itu_pane_t2_ParamLimits

0x598a,	// (0x00062121) cell_vitu_itu_pane_t2

0x0002,

0xf6ba,	// (0x0006be51) cell_vitu_itu_pane_t_ParamLimits

0xf6ba,	// (0x0006be51) cell_vitu_itu_pane_t

0xd35c,	// (0x00069af3) bg_button_pane_cp07

0x59bf,	// (0x00062156) cell_vitu_function_pane_g1

0x12e2,	// (0x0005da79) main_calc_pane_g1

0x0dc1,	// (0x0005d558) aid_visual_content_pane

0x1050,	// (0x0005d7e7) main_vradio_pane

0x59c8,	// (0x0006215f) main_vradio_pane_g1_ParamLimits

0x59c8,	// (0x0006215f) main_vradio_pane_g1

0xd366,	// (0x00069afd) main_vradio_pane_g2_ParamLimits

0xd366,	// (0x00069afd) main_vradio_pane_g2

0x0001,

0xf6c1,	// (0x0006be58) main_vradio_pane_g_ParamLimits

0xf6c1,	// (0x0006be58) main_vradio_pane_g

0x59d8,	// (0x0006216f) main_vradio_pane_t1_ParamLimits

0x59d8,	// (0x0006216f) main_vradio_pane_t1

0x59ea,	// (0x00062181) main_vradio_pane_t2_ParamLimits

0x59ea,	// (0x00062181) main_vradio_pane_t2

0xd373,	// (0x00069b0a) main_vradio_pane_t3_ParamLimits

0xd373,	// (0x00069b0a) main_vradio_pane_t3

0x0002,

0xf6c6,	// (0x0006be5d) main_vradio_pane_t_ParamLimits

0xf6c6,	// (0x0006be5d) main_vradio_pane_t

0x59fc,	// (0x00062193) vradio_rocker_control_pane_ParamLimits

0x59fc,	// (0x00062193) vradio_rocker_control_pane

0x5a08,	// (0x0006219f) vradio_station_info_pane_ParamLimits

0x5a08,	// (0x0006219f) vradio_station_info_pane

0xd387,	// (0x00069b1e) vradio_frequency_info_pane_ParamLimits

0xd387,	// (0x00069b1e) vradio_frequency_info_pane

0xcd08,	// (0x0006949f) vradio_station_info_pane_g1

0xd396,	// (0x00069b2d) vradio_station_info_pane_t1_ParamLimits

0xd396,	// (0x00069b2d) vradio_station_info_pane_t1

0xd3b8,	// (0x00069b4f) vradio_station_info_pane_t2_ParamLimits

0xd3b8,	// (0x00069b4f) vradio_station_info_pane_t2

0x0001,

0x0550,	// (0x0005cce7) vradio_station_info_pane_t_ParamLimits

0x0550,	// (0x0005cce7) vradio_station_info_pane_t

0xd3ca,	// (0x00069b61) vradio_tuning_pane

0xd3d2,	// (0x00069b69) vradio_rocker_control_pane_g1

0xd3da,	// (0x00069b71) vradio_rocker_control_pane_g2

0xd3e2,	// (0x00069b79) vradio_rocker_control_pane_g3

0xd3ea,	// (0x00069b81) vradio_rocker_control_pane_g4

0xd3f2,	// (0x00069b89) vradio_rocker_control_pane_g5

0x0004,

0x0555,	// (0x0005ccec) vradio_rocker_control_pane_g

0x5a17,	// (0x000621ae) vradio_frequency_info_pane_g1

0xd3fa,	// (0x00069b91) vradio_frequency_info_pane_t1_ParamLimits

0xd3fa,	// (0x00069b91) vradio_frequency_info_pane_t1

0x5a21,	// (0x000621b8) vradio_tuning_pane_g1

0x5a2a,	// (0x000621c1) vradio_tuning_pane_t1

0x0e0a,	// (0x0005d5a1) area_side_right_pane_ParamLimits

0x0e0a,	// (0x0005d5a1) area_side_right_pane

0xc8bb,	// (0x00069052) status_small_pane_g1

0xc8c3,	// (0x0006905a) status_small_pane_g2

0xc8cc,	// (0x00069063) status_small_pane_g3

0xc8d5,	// (0x0006906c) status_small_pane_g4

0x0003,

0x0310,	// (0x0005caa7) status_small_pane_g

0xc8de,	// (0x00069075) status_small_pane_t1

0x1050,	// (0x0005d7e7) main_video3_pane

0xd40e,	// (0x00069ba5) cams_zoom_vslider_pane

0xd416,	// (0x00069bad) image3_wide_pane_ParamLimits

0xd416,	// (0x00069bad) image3_wide_pane

0xd430,	// (0x00069bc7) image3_wide_small_pane

0xd43c,	// (0x00069bd3) main_video3_pane_g1_ParamLimits

0xd43c,	// (0x00069bd3) main_video3_pane_g1

0xd458,	// (0x00069bef) main_video3_pane_g2_ParamLimits

0xd458,	// (0x00069bef) main_video3_pane_g2

0x0001,

0x0560,	// (0x0005ccf7) main_video3_pane_g_ParamLimits

0x0560,	// (0x0005ccf7) main_video3_pane_g

0xd474,	// (0x00069c0b) main_video3_pane_t1_ParamLimits

0xd474,	// (0x00069c0b) main_video3_pane_t1

0xd49f,	// (0x00069c36) main_video3_pane_t2_ParamLimits

0xd49f,	// (0x00069c36) main_video3_pane_t2

0xd4ca,	// (0x00069c61) main_video3_pane_t3_ParamLimits

0xd4ca,	// (0x00069c61) main_video3_pane_t3

0x0002,

0x0565,	// (0x0005ccfc) main_video3_pane_t_ParamLimits

0x0565,	// (0x0005ccfc) main_video3_pane_t

0xd4f7,	// (0x00069c8e) cams_zoom_vslider_pane_g1

0xd500,	// (0x00069c97) cams_zoom_vslider_pane_g2

0x0001,

0x056c,	// (0x0005cd03) cams_zoom_vslider_pane_g

0xd508,	// (0x00069c9f) small_slider_vertical_pane

0xcd08,	// (0x0006949f) small_slider_vertical_pane_g1

0xcd08,	// (0x0006949f) small_slider_vertical_pane_g2

0xd510,	// (0x00069ca7) small_slider_vertical_pane_g3

0x0002,

0x0571,	// (0x0005cd08) small_slider_vertical_pane_g

0x1050,	// (0x0005d7e7) main_hwr_training_pane

0xd519,	// (0x00069cb0) hwr_training_instruct_pane_ParamLimits

0xd519,	// (0x00069cb0) hwr_training_instruct_pane

0x5a39,	// (0x000621d0) hwr_training_navi_pane_ParamLimits

0x5a39,	// (0x000621d0) hwr_training_navi_pane

0x5a53,	// (0x000621ea) hwr_training_write_pane_ParamLimits

0x5a53,	// (0x000621ea) hwr_training_write_pane

0x9c9e,	// (0x00066435) bg_frame_shadow_pane

0xd550,	// (0x00069ce7) hwr_training_write_pane_g1

0xd558,	// (0x00069cef) hwr_training_write_pane_g2

0xd560,	// (0x00069cf7) hwr_training_write_pane_g3

0xd568,	// (0x00069cff) hwr_training_write_pane_g4

0xd570,	// (0x00069d07) hwr_training_write_pane_g5

0xd578,	// (0x00069d0f) hwr_training_write_pane_g6

0xd580,	// (0x00069d17) hwr_training_write_pane_g7

0x0006,

0x0578,	// (0x0005cd0f) hwr_training_write_pane_g

0x5a8b,	// (0x00062222) hwr_training_navi_pane_g1_ParamLimits

0x5a8b,	// (0x00062222) hwr_training_navi_pane_g1

0x5a9d,	// (0x00062234) hwr_training_navi_pane_g2_ParamLimits

0x5a9d,	// (0x00062234) hwr_training_navi_pane_g2

0x5aaf,	// (0x00062246) hwr_training_navi_pane_g3_ParamLimits

0x5aaf,	// (0x00062246) hwr_training_navi_pane_g3

0x5abf,	// (0x00062256) hwr_training_navi_pane_g4_ParamLimits

0x5abf,	// (0x00062256) hwr_training_navi_pane_g4

0x0004,

0xf6cd,	// (0x0006be64) hwr_training_navi_pane_g_ParamLimits

0xf6cd,	// (0x0006be64) hwr_training_navi_pane_g

0x5ad9,	// (0x00062270) hwr_training_navi_pane_t1

0x5ae7,	// (0x0006227e) list_single_hwr_training_instruct_pane_ParamLimits

0x5ae7,	// (0x0006227e) list_single_hwr_training_instruct_pane

0xd588,	// (0x00069d1f) list_single_hwr_training_instruct_pane_t1

0xcc48,	// (0x000693df) bg_frame_shadow_pane_g1

0xd597,	// (0x00069d2e) bg_frame_shadow_pane_g2

0xd59f,	// (0x00069d36) bg_frame_shadow_pane_g3

0xd5a7,	// (0x00069d3e) bg_frame_shadow_pane_g4

0xd5af,	// (0x00069d46) bg_frame_shadow_pane_g5

0xd5b7,	// (0x00069d4e) bg_frame_shadow_pane_g6

0xd5bf,	// (0x00069d56) bg_frame_shadow_pane_g7

0xa97b,	// (0x00067112) bg_frame_shadow_pane_g8

0x0007,

0xf6d8,	// (0x0006be6f) bg_frame_shadow_pane_g

0x1050,	// (0x0005d7e7) main_video_tele_dialer_pane

0x5b0c,	// (0x000622a3) aid_size_cell_video_keypad_ParamLimits

0x5b0c,	// (0x000622a3) aid_size_cell_video_keypad

0x5b1c,	// (0x000622b3) grid_video_dialer_keypad_pane_ParamLimits

0x5b1c,	// (0x000622b3) grid_video_dialer_keypad_pane

0x5b50,	// (0x000622e7) video_down_pane_cp_ParamLimits

0x5b50,	// (0x000622e7) video_down_pane_cp

0x5b7a,	// (0x00062311) cell_video_dialer_keypad_pane_ParamLimits

0x5b7a,	// (0x00062311) cell_video_dialer_keypad_pane

0xd5c7,	// (0x00069d5e) bg_button_pane_cp08_ParamLimits

0xd5c7,	// (0x00069d5e) bg_button_pane_cp08

0x5b8f,	// (0x00062326) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b8f,	// (0x00062326) cell_video_dialer_keypad_pane_g1

0x5359,	// (0x00061af0) mup3_rocker2_pane_ParamLimits

0x5359,	// (0x00061af0) mup3_rocker2_pane

0xcd08,	// (0x0006949f) mup3_rocker2_pane_g1

0x4252,	// (0x000609e9) main_dialer2_pane

0x1050,	// (0x0005d7e7) main_mp4_pane

0x5be4,	// (0x0006237b) main_mp4_pane_g1_ParamLimits

0x5be4,	// (0x0006237b) main_mp4_pane_g1

0x5bf2,	// (0x00062389) main_mp4_pane_g2_ParamLimits

0x5bf2,	// (0x00062389) main_mp4_pane_g2

0x5c00,	// (0x00062397) main_mp4_pane_g3_ParamLimits

0x5c00,	// (0x00062397) main_mp4_pane_g3

0x5c45,	// (0x000623dc) main_mp4_pane_g4_ParamLimits

0x5c45,	// (0x000623dc) main_mp4_pane_g4

0x5c73,	// (0x0006240a) main_mp4_pane_g5_ParamLimits

0x5c73,	// (0x0006240a) main_mp4_pane_g5

0x0007,

0xf6f8,	// (0x0006be8f) main_mp4_pane_g_ParamLimits

0xf6f8,	// (0x0006be8f) main_mp4_pane_g

0x5ce7,	// (0x0006247e) main_mp4_pane_t1_ParamLimits

0x5ce7,	// (0x0006247e) main_mp4_pane_t1

0x5d43,	// (0x000624da) main_mp4_pane_t2_ParamLimits

0x5d43,	// (0x000624da) main_mp4_pane_t2

0xd5d3,	// (0x00069d6a) main_mp4_pane_t3_ParamLimits

0xd5d3,	// (0x00069d6a) main_mp4_pane_t3

0x5d95,	// (0x0006252c) main_mp4_pane_t4_ParamLimits

0x5d95,	// (0x0006252c) main_mp4_pane_t4

0x0003,

0xf709,	// (0x0006bea0) main_mp4_pane_t_ParamLimits

0xf709,	// (0x0006bea0) main_mp4_pane_t

0x5dd9,	// (0x00062570) mp4_progress_pane_ParamLimits

0x5dd9,	// (0x00062570) mp4_progress_pane

0x5e23,	// (0x000625ba) mp4_rocker_pane_ParamLimits

0x5e23,	// (0x000625ba) mp4_rocker_pane

0xd601,	// (0x00069d98) mp4_progress_pane_t1

0xd61a,	// (0x00069db1) mp4_progress_pane_t2

0x0001,

0x05cc,	// (0x0005cd63) mp4_progress_pane_t

0xd633,	// (0x00069dca) mup_progress_pane_cp04

0xdbbd,	// (0x0006a354) mp4_rocker_pane_g1

0x5e43,	// (0x000625da) aid_cell_size_keypad2_ParamLimits

0x5e43,	// (0x000625da) aid_cell_size_keypad2

0x5e53,	// (0x000625ea) dialer2_ne_pane_ParamLimits

0x5e53,	// (0x000625ea) dialer2_ne_pane

0x5e61,	// (0x000625f8) grid_dialer2_keypad_pane_ParamLimits

0x5e61,	// (0x000625f8) grid_dialer2_keypad_pane

0xdbc7,	// (0x0006a35e) bg_popup_call_pane_cp07_ParamLimits

0xdbc7,	// (0x0006a35e) bg_popup_call_pane_cp07

0x5e71,	// (0x00062608) dialer2_ne_pane_t1_ParamLimits

0x5e71,	// (0x00062608) dialer2_ne_pane_t1

0x5e96,	// (0x0006262d) cell_dialer2_keypad_pane_ParamLimits

0x5e96,	// (0x0006262d) cell_dialer2_keypad_pane

0xd658,	// (0x00069def) bg_button_pane_pane_cp04_ParamLimits

0xd658,	// (0x00069def) bg_button_pane_pane_cp04

0x5eab,	// (0x00062642) cell_dialer2_keypad_pane_g1_ParamLimits

0x5eab,	// (0x00062642) cell_dialer2_keypad_pane_g1

0x1e98,	// (0x0005e62f) aid_placing_vt_set_content_ParamLimits

0x1e98,	// (0x0005e62f) aid_placing_vt_set_content

0x1ec4,	// (0x0005e65b) aid_placing_vt_set_title_ParamLimits

0x1ec4,	// (0x0005e65b) aid_placing_vt_set_title

0x1050,	// (0x0005d7e7) main_image3_pane

0x5f45,	// (0x000626dc) area_side_right_pane_cp01_ParamLimits

0x5f45,	// (0x000626dc) area_side_right_pane_cp01

0x5f72,	// (0x00062709) main_image3_pane_g1_ParamLimits

0x5f72,	// (0x00062709) main_image3_pane_g1

0x5f80,	// (0x00062717) main_image3_pane_g2_ParamLimits

0x5f80,	// (0x00062717) main_image3_pane_g2

0x5f99,	// (0x00062730) main_image3_pane_g3_ParamLimits

0x5f99,	// (0x00062730) main_image3_pane_g3

0x5fb2,	// (0x00062749) main_image3_pane_g4_ParamLimits

0x5fb2,	// (0x00062749) main_image3_pane_g4

0x0003,

0xf71c,	// (0x0006beb3) main_image3_pane_g_ParamLimits

0xf71c,	// (0x0006beb3) main_image3_pane_g

0x5fcb,	// (0x00062762) main_image3_pane_t1_ParamLimits

0x5fcb,	// (0x00062762) main_image3_pane_t1

0x5ff0,	// (0x00062787) main_image3_pane_t2_ParamLimits

0x5ff0,	// (0x00062787) main_image3_pane_t2

0x600f,	// (0x000627a6) main_image3_pane_t3_ParamLimits

0x600f,	// (0x000627a6) main_image3_pane_t3

0x0003,

0xf725,	// (0x0006bebc) main_image3_pane_t_ParamLimits

0xf725,	// (0x0006bebc) main_image3_pane_t

0xe01d,	// (0x0006a7b4) grid_sctrl_middle_pane_cp01_ParamLimits

0xe01d,	// (0x0006a7b4) grid_sctrl_middle_pane_cp01

0x6070,	// (0x00062807) cell_sctrl_middle_pane_cp01_ParamLimits

0x6070,	// (0x00062807) cell_sctrl_middle_pane_cp01

0x6081,	// (0x00062818) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6081,	// (0x00062818) cell_sctrl_middle_pane_cp01_g1

0x1050,	// (0x0005d7e7) main_call4_pane

0x608e,	// (0x00062825) aid_size_button_call4_ParamLimits

0x608e,	// (0x00062825) aid_size_button_call4

0x60c4,	// (0x0006285b) call4_windows_pane_ParamLimits

0x60c4,	// (0x0006285b) call4_windows_pane

0x60d9,	// (0x00062870) grid_call4_button_pane_ParamLimits

0x60d9,	// (0x00062870) grid_call4_button_pane

0x6107,	// (0x0006289e) call4_windows_conf_pane

0x611e,	// (0x000628b5) popup_call4_audio_first_window_ParamLimits

0x611e,	// (0x000628b5) popup_call4_audio_first_window

0x616e,	// (0x00062905) popup_call4_audio_second_window_ParamLimits

0x616e,	// (0x00062905) popup_call4_audio_second_window

0x6187,	// (0x0006291e) popup_call4_audio_wait_window_ParamLimits

0x6187,	// (0x0006291e) popup_call4_audio_wait_window

0x6195,	// (0x0006292c) cell_call4_button_pane_ParamLimits

0x6195,	// (0x0006292c) cell_call4_button_pane

0x61b8,	// (0x0006294f) bg_button_pane_cp09_ParamLimits

0x61b8,	// (0x0006294f) bg_button_pane_cp09

0x61c4,	// (0x0006295b) cell_call4_button_pane_g1_ParamLimits

0x61c4,	// (0x0006295b) cell_call4_button_pane_g1

0x61d1,	// (0x00062968) cell_call4_button_pane_t1_ParamLimits

0x61d1,	// (0x00062968) cell_call4_button_pane_t1

0xd66c,	// (0x00069e03) popup_call4_audio_conf_window_ParamLimits

0xd66c,	// (0x00069e03) popup_call4_audio_conf_window

0x538c,	// (0x00061b23) mup3_progress_pane_t1_ParamLimits

0x53ab,	// (0x00061b42) mup3_progress_pane_t2_ParamLimits

0xd006,	// (0x0006979d) mup3_progress_pane_t3_ParamLimits

0xf662,	// (0x0006bdf9) mup3_progress_pane_t_ParamLimits

0xd023,	// (0x000697ba) mup_progress_pane_cp03_ParamLimits

0x58d8,	// (0x0006206f) mup3_control_keys_pane_g4_copy1

0x5e07,	// (0x0006259e) mp4_rocker2_pane_ParamLimits

0x5e07,	// (0x0006259e) mp4_rocker2_pane

0xd680,	// (0x00069e17) mp4_rocker2_pane_g1

0xd688,	// (0x00069e1f) mp4_rocker2_pane_g2

0x6215,	// (0x000629ac) mp4_rocker2_pane_g3

0x621d,	// (0x000629b4) mp4_rocker2_pane_g4

0x6225,	// (0x000629bc) mp4_rocker2_pane_g5

0x0004,

0xf72e,	// (0x0006bec5) mp4_rocker2_pane_g

0x1050,	// (0x0005d7e7) main_camera4_pane

0x1050,	// (0x0005d7e7) main_video4_pane

0x5b2c,	// (0x000622c3) main_video_tele_dialer_pane_t1_ParamLimits

0x5b2c,	// (0x000622c3) main_video_tele_dialer_pane_t1

0x5b3e,	// (0x000622d5) main_video_tele_dialer_pane_t2_ParamLimits

0x5b3e,	// (0x000622d5) main_video_tele_dialer_pane_t2

0x0001,

0xf6e9,	// (0x0006be80) main_video_tele_dialer_pane_t_ParamLimits

0xf6e9,	// (0x0006be80) main_video_tele_dialer_pane_t

0x6245,	// (0x000629dc) cam4_autofocus_pane_ParamLimits

0x6245,	// (0x000629dc) cam4_autofocus_pane

0x625f,	// (0x000629f6) cam4_image_uncrop_pane_ParamLimits

0x625f,	// (0x000629f6) cam4_image_uncrop_pane

0x6276,	// (0x00062a0d) cam4_indicators_pane_ParamLimits

0x6276,	// (0x00062a0d) cam4_indicators_pane

0x6292,	// (0x00062a29) main_camera4_pane_g1_ParamLimits

0x6292,	// (0x00062a29) main_camera4_pane_g1

0x629e,	// (0x00062a35) main_camera4_pane_g2_ParamLimits

0x629e,	// (0x00062a35) main_camera4_pane_g2

0x629e,	// (0x00062a35) main_camera4_pane_g3_ParamLimits

0x629e,	// (0x00062a35) main_camera4_pane_g3

0x62aa,	// (0x00062a41) main_camera4_pane_g4_ParamLimits

0x62aa,	// (0x00062a41) main_camera4_pane_g4

0x62b6,	// (0x00062a4d) main_camera4_pane_g5_ParamLimits

0x62b6,	// (0x00062a4d) main_camera4_pane_g5

0x0005,

0xf739,	// (0x0006bed0) main_camera4_pane_g_ParamLimits

0xf739,	// (0x0006bed0) main_camera4_pane_g

0x62d0,	// (0x00062a67) main_camera4_pane_t1_ParamLimits

0x62d0,	// (0x00062a67) main_camera4_pane_t1

0x6318,	// (0x00062aaf) bg_tb_trans_pane_cp06

0x632e,	// (0x00062ac5) cam4_indicators_pane_g1

0x633f,	// (0x00062ad6) cam4_indicators_pane_g2

0x0002,

0xf754,	// (0x0006beeb) cam4_indicators_pane_g

0x635d,	// (0x00062af4) cam4_indicators_pane_t1

0x6387,	// (0x00062b1e) main_video4_pane_g1_ParamLimits

0x6387,	// (0x00062b1e) main_video4_pane_g1

0x6393,	// (0x00062b2a) main_video4_pane_g2_ParamLimits

0x6393,	// (0x00062b2a) main_video4_pane_g2

0x639f,	// (0x00062b36) main_video4_pane_g3_ParamLimits

0x639f,	// (0x00062b36) main_video4_pane_g3

0x63ab,	// (0x00062b42) main_video4_pane_g4_ParamLimits

0x63ab,	// (0x00062b42) main_video4_pane_g4

0x0004,

0xf75b,	// (0x0006bef2) main_video4_pane_g_ParamLimits

0xf75b,	// (0x0006bef2) main_video4_pane_g

0x63cb,	// (0x00062b62) vid4_indicators_pane_ParamLimits

0x63cb,	// (0x00062b62) vid4_indicators_pane

0x63ea,	// (0x00062b81) video4_image_uncrop_cif_pane_ParamLimits

0x63ea,	// (0x00062b81) video4_image_uncrop_cif_pane

0x63f9,	// (0x00062b90) video4_image_uncrop_nhd_pane_ParamLimits

0x63f9,	// (0x00062b90) video4_image_uncrop_nhd_pane

0x625f,	// (0x000629f6) video4_image_uncrop_vga_pane_ParamLimits

0x625f,	// (0x000629f6) video4_image_uncrop_vga_pane

0x4244,	// (0x000609db) bg_tb_trans_pane_cp07

0x6410,	// (0x00062ba7) vid4_indicators_pane_g1

0x6424,	// (0x00062bbb) vid4_indicators_pane_g2

0x6438,	// (0x00062bcf) vid4_indicators_pane_g3

0x0004,

0xf766,	// (0x0006befd) vid4_indicators_pane_g

0x6467,	// (0x00062bfe) vid4_indicators_pane_t1

0x647e,	// (0x00062c15) cam4_autofocus_pane_g1

0x6486,	// (0x00062c1d) cam4_autofocus_pane_g2

0x648e,	// (0x00062c25) cam4_autofocus_pane_g3

0x0002,

0xf771,	// (0x0006bf08) cam4_autofocus_pane_g

0x6496,	// (0x00062c2d) cam4_autofocus_pane_g3_copy1

0x5b5e,	// (0x000622f5) video_down_pane_cp_t1

0x5b6c,	// (0x00062303) video_down_pane_cp_t2

0x0001,

0xf6ee,	// (0x0006be85) video_down_pane_cp_t

0x1036,	// (0x0005d7cd) popup_vitu2_window_ParamLimits

0x1036,	// (0x0005d7cd) popup_vitu2_window

0x649e,	// (0x00062c35) aid_size_cell2_itu2_ParamLimits

0x649e,	// (0x00062c35) aid_size_cell2_itu2

0x64c0,	// (0x00062c57) aid_size_cell_itu2_ParamLimits

0x64c0,	// (0x00062c57) aid_size_cell_itu2

0x6504,	// (0x00062c9b) bg_popup_window_pane_cp09_ParamLimits

0x6504,	// (0x00062c9b) bg_popup_window_pane_cp09

0x6512,	// (0x00062ca9) field_vitu2_entry_pane_ParamLimits

0x6512,	// (0x00062ca9) field_vitu2_entry_pane

0x6532,	// (0x00062cc9) grid_vitu2_function_pane_ParamLimits

0x6532,	// (0x00062cc9) grid_vitu2_function_pane

0x6576,	// (0x00062d0d) grid_vitu2_itu_pane_ParamLimits

0x6576,	// (0x00062d0d) grid_vitu2_itu_pane

0x65f2,	// (0x00062d89) cell_vitu2_itu_pane_ParamLimits

0x65f2,	// (0x00062d89) cell_vitu2_itu_pane

0x660b,	// (0x00062da2) cell_vitu2_function_pane_ParamLimits

0x660b,	// (0x00062da2) cell_vitu2_function_pane

0xd690,	// (0x00069e27) bg_popup_call_pane_cp08_ParamLimits

0xd690,	// (0x00069e27) bg_popup_call_pane_cp08

0xd6a7,	// (0x00069e3e) field_vitu2_entry_pane_g1

0xd6b3,	// (0x00069e4a) field_vitu2_entry_pane_g2

0x0002,

0x0637,	// (0x0005cdce) field_vitu2_entry_pane_g

0x664c,	// (0x00062de3) field_vitu2_entry_pane_t1_ParamLimits

0x664c,	// (0x00062de3) field_vitu2_entry_pane_t1

0xa312,	// (0x00066aa9) field_vitu2_entry_pane_t2_ParamLimits

0xa312,	// (0x00066aa9) field_vitu2_entry_pane_t2

0x0001,

0xf778,	// (0x0006bf0f) field_vitu2_entry_pane_t_ParamLimits

0xf778,	// (0x0006bf0f) field_vitu2_entry_pane_t

0x667e,	// (0x00062e15) bg_button_pane_cp010_ParamLimits

0x667e,	// (0x00062e15) bg_button_pane_cp010

0x668c,	// (0x00062e23) cell_vitu2_itu_pane_g1

0x66ac,	// (0x00062e43) cell_vitu2_itu_pane_t1_ParamLimits

0x66ac,	// (0x00062e43) cell_vitu2_itu_pane_t1

0x0ca5,	// (0x0005d43c) cell_vitu2_itu_pane_t2_ParamLimits

0x0ca5,	// (0x0005d43c) cell_vitu2_itu_pane_t2

0x0002,

0xf782,	// (0x0006bf19) cell_vitu2_itu_pane_t_ParamLimits

0xf782,	// (0x0006bf19) cell_vitu2_itu_pane_t

0x4244,	// (0x000609db) bg_button_pane_cp011

0x66f8,	// (0x00062e8f) cell_vitu2_function_pane_g1

0x1050,	// (0x0005d7e7) main_myfav_hc_pane

0x6051,	// (0x000627e8) popup_image3_note_pane_ParamLimits

0x6051,	// (0x000627e8) popup_image3_note_pane

0x605f,	// (0x000627f6) popup_image3_tool_bar_pane_ParamLimits

0x605f,	// (0x000627f6) popup_image3_tool_bar_pane

0x0d1b,	// (0x0005d4b2) cell_vitu2_itu_pane_t3_ParamLimits

0x0d1b,	// (0x0005d4b2) cell_vitu2_itu_pane_t3

0x9c9e,	// (0x00066435) bg_popup_trans_pane

0xd6d5,	// (0x00069e6c) grid_image3_tool_bar_pane

0xd6df,	// (0x00069e76) bg_popup_trans_pane_g1

0xace9,	// (0x00067480) bg_popup_trans_pane_g2

0xd6e7,	// (0x00069e7e) bg_popup_trans_pane_g3

0xd6ef,	// (0x00069e86) bg_popup_trans_pane_g4

0xd6f7,	// (0x00069e8e) bg_popup_trans_pane_g5

0xd6ff,	// (0x00069e96) bg_popup_trans_pane_g6

0xd707,	// (0x00069e9e) bg_popup_trans_pane_g7

0xd70f,	// (0x00069ea6) bg_popup_trans_pane_g8

0xacc9,	// (0x00067460) bg_popup_trans_pane_g9

0x0008,

0xf789,	// (0x0006bf20) bg_popup_trans_pane_g

0xd717,	// (0x00069eae) cell_image3_tool_bar_pane_ParamLimits

0xd717,	// (0x00069eae) cell_image3_tool_bar_pane

0xcd08,	// (0x0006949f) cell_image3_tool_bar_pane_g1

0x9c9e,	// (0x00066435) bg_popup_trans_pane_cp1

0xd72b,	// (0x00069ec2) popup_image3_note_pane_t1

0xd739,	// (0x00069ed0) popup_image3_note_pane_t2

0xd747,	// (0x00069ede) popup_image3_note_pane_t3

0x0002,

0x0662,	// (0x0005cdf9) popup_image3_note_pane_t

0xd755,	// (0x00069eec) popup_image3_note_pane_t3_copy1

0x670c,	// (0x00062ea3) bg_myfav_hc_instruction_pane_ParamLimits

0x670c,	// (0x00062ea3) bg_myfav_hc_instruction_pane

0x6724,	// (0x00062ebb) cell_myfav_contact_pane_ParamLimits

0x6724,	// (0x00062ebb) cell_myfav_contact_pane

0x673e,	// (0x00062ed5) cell_myfav_contact_pane_cp1_ParamLimits

0x673e,	// (0x00062ed5) cell_myfav_contact_pane_cp1

0x6756,	// (0x00062eed) cell_myfav_contact_pane_cp2_ParamLimits

0x6756,	// (0x00062eed) cell_myfav_contact_pane_cp2

0x676e,	// (0x00062f05) cell_myfav_contact_pane_cp3_ParamLimits

0x676e,	// (0x00062f05) cell_myfav_contact_pane_cp3

0x6785,	// (0x00062f1c) cell_myfav_contact_pane_cp4_ParamLimits

0x6785,	// (0x00062f1c) cell_myfav_contact_pane_cp4

0x679b,	// (0x00062f32) cell_myfav_contact_pane_cp5_ParamLimits

0x679b,	// (0x00062f32) cell_myfav_contact_pane_cp5

0x67af,	// (0x00062f46) cell_myfav_contact_pane_cp6_ParamLimits

0x67af,	// (0x00062f46) cell_myfav_contact_pane_cp6

0x67c3,	// (0x00062f5a) cell_myfav_contact_pane_cp7_ParamLimits

0x67c3,	// (0x00062f5a) cell_myfav_contact_pane_cp7

0xd763,	// (0x00069efa) listscroll_gen_pane_cp05

0x67db,	// (0x00062f72) main_myfav_hc_pane_g1_ParamLimits

0x67db,	// (0x00062f72) main_myfav_hc_pane_g1

0x67f1,	// (0x00062f88) main_myfav_hc_pane_g2_ParamLimits

0x67f1,	// (0x00062f88) main_myfav_hc_pane_g2

0x0002,

0xf79c,	// (0x0006bf33) main_myfav_hc_pane_g_ParamLimits

0xf79c,	// (0x0006bf33) main_myfav_hc_pane_g

0x681f,	// (0x00062fb6) main_myfav_hc_pane_t1_ParamLimits

0x681f,	// (0x00062fb6) main_myfav_hc_pane_t1

0xd76c,	// (0x00069f03) main_myfav_hc_pane_t2_ParamLimits

0xd76c,	// (0x00069f03) main_myfav_hc_pane_t2

0xd77e,	// (0x00069f15) main_myfav_hc_pane_t3_ParamLimits

0xd77e,	// (0x00069f15) main_myfav_hc_pane_t3

0x6836,	// (0x00062fcd) main_myfav_hc_pane_t4_ParamLimits

0x6836,	// (0x00062fcd) main_myfav_hc_pane_t4

0x0004,

0xf7a3,	// (0x0006bf3a) main_myfav_hc_pane_t_ParamLimits

0xf7a3,	// (0x0006bf3a) main_myfav_hc_pane_t

0xcd08,	// (0x0006949f) bg_myfav_hc_instruction_pane_g1

0xd790,	// (0x00069f27) cell_myfav_contact_pane_g1_ParamLimits

0xd790,	// (0x00069f27) cell_myfav_contact_pane_g1

0xd790,	// (0x00069f27) cell_myfav_contact_pane_g2_ParamLimits

0xd790,	// (0x00069f27) cell_myfav_contact_pane_g2

0xd79c,	// (0x00069f33) cell_myfav_contact_pane_g3_ParamLimits

0xd79c,	// (0x00069f33) cell_myfav_contact_pane_g3

0xcff0,	// (0x00069787) cell_myfav_contact_pane_g4_ParamLimits

0xcff0,	// (0x00069787) cell_myfav_contact_pane_g4

0xd7a9,	// (0x00069f40) cell_myfav_contact_pane_g5_ParamLimits

0xd7a9,	// (0x00069f40) cell_myfav_contact_pane_g5

0x0004,

0x067b,	// (0x0005ce12) cell_myfav_contact_pane_g_ParamLimits

0x067b,	// (0x0005ce12) cell_myfav_contact_pane_g

0x6807,	// (0x00062f9e) main_myfav_hc_pane_g3_ParamLimits

0x6807,	// (0x00062f9e) main_myfav_hc_pane_g3

0x0f3f,	// (0x0005d6d6) popup_adpt_find_window

0x6860,	// (0x00062ff7) afind_page_pane_ParamLimits

0x6860,	// (0x00062ff7) afind_page_pane

0x686d,	// (0x00063004) aid_size_cell_afind_ParamLimits

0x686d,	// (0x00063004) aid_size_cell_afind

0x6887,	// (0x0006301e) bg_popup_sub_pane_cp09_ParamLimits

0x6887,	// (0x0006301e) bg_popup_sub_pane_cp09

0x6894,	// (0x0006302b) find_pane_cp01_ParamLimits

0x6894,	// (0x0006302b) find_pane_cp01

0xd7b5,	// (0x00069f4c) grid_afind_control_pane_ParamLimits

0xd7b5,	// (0x00069f4c) grid_afind_control_pane

0x68a1,	// (0x00063038) grid_afind_pane_ParamLimits

0x68a1,	// (0x00063038) grid_afind_pane

0x68bd,	// (0x00063054) cell_afind_pane_ParamLimits

0x68bd,	// (0x00063054) cell_afind_pane

0xcd08,	// (0x0006949f) afind_page_pane_g1

0x6905,	// (0x0006309c) afind_page_pane_g2

0x690e,	// (0x000630a5) afind_page_pane_g3

0x0002,

0xf7ae,	// (0x0006bf45) afind_page_pane_g

0x6917,	// (0x000630ae) afind_page_pane_t1

0xd7c9,	// (0x00069f60) cell_afind_grid_control_pane_ParamLimits

0xd7c9,	// (0x00069f60) cell_afind_grid_control_pane

0xd658,	// (0x00069def) bg_button_pane_cp69_ParamLimits

0xd658,	// (0x00069def) bg_button_pane_cp69

0x6937,	// (0x000630ce) cell_afind_pane_g1_ParamLimits

0x6937,	// (0x000630ce) cell_afind_pane_g1

0x6944,	// (0x000630db) cell_afind_pane_t1_ParamLimits

0x6944,	// (0x000630db) cell_afind_pane_t1

0xaae2,	// (0x00067279) bg_button_pane_cp72

0xd7d8,	// (0x00069f6f) cell_afind_grid_control_pane_g1

0x3dc2,	// (0x00060559) aid_image_placing_area_ParamLimits

0x3dc2,	// (0x00060559) aid_image_placing_area

0xd319,	// (0x00069ab0) field_vitu_entry_pane_g1_ParamLimits

0xd319,	// (0x00069ab0) field_vitu_entry_pane_g1

0xd325,	// (0x00069abc) field_vitu_entry_pane_g2_ParamLimits

0xd325,	// (0x00069abc) field_vitu_entry_pane_g2

0x0001,

0x0533,	// (0x0005ccca) field_vitu_entry_pane_g_ParamLimits

0x0533,	// (0x0005ccca) field_vitu_entry_pane_g

0x5960,	// (0x000620f7) cell_vitu_itu_pane_g1_ParamLimits

0x59a2,	// (0x00062139) cell_vitu_itu_pane_t3_ParamLimits

0x59a2,	// (0x00062139) cell_vitu_itu_pane_t3

0xd601,	// (0x00069d98) mp4_progress_pane_t1_ParamLimits

0xd61a,	// (0x00069db1) mp4_progress_pane_t2_ParamLimits

0x05cc,	// (0x0005cd63) mp4_progress_pane_t_ParamLimits

0xd633,	// (0x00069dca) mup_progress_pane_cp04_ParamLimits

0x684a,	// (0x00062fe1) main_myfav_hc_pane_t5_ParamLimits

0x684a,	// (0x00062fe1) main_myfav_hc_pane_t5

0x0dcd,	// (0x0005d564) aid_zoom_text_primary

0x0f3f,	// (0x0005d6d6) popup_adpt_find_window_ParamLimits

0x4244,	// (0x000609db) main_cam_set_pane

0x6284,	// (0x00062a1b) cam4_zoom_pane_ParamLimits

0x6284,	// (0x00062a1b) cam4_zoom_pane

0x6956,	// (0x000630ed) main_cam_set_pane_g1_ParamLimits

0x6956,	// (0x000630ed) main_cam_set_pane_g1

0x6964,	// (0x000630fb) main_cam_set_pane_g2_ParamLimits

0x6964,	// (0x000630fb) main_cam_set_pane_g2

0x0001,

0xf7b5,	// (0x0006bf4c) main_cam_set_pane_g_ParamLimits

0xf7b5,	// (0x0006bf4c) main_cam_set_pane_g

0x6970,	// (0x00063107) main_cam_set_pane_t1_ParamLimits

0x6970,	// (0x00063107) main_cam_set_pane_t1

0x698c,	// (0x00063123) main_cset_listscroll_pane_ParamLimits

0x698c,	// (0x00063123) main_cset_listscroll_pane

0x69b7,	// (0x0006314e) main_cset_slider_pane_ParamLimits

0x69b7,	// (0x0006314e) main_cset_slider_pane

0xd7e9,	// (0x00069f80) main_cset_list_pane_ParamLimits

0xd7e9,	// (0x00069f80) main_cset_list_pane

0xd7f9,	// (0x00069f90) scroll_pane_cp028

0x69d6,	// (0x0006316d) aid_area_touch_slider

0x69f2,	// (0x00063189) cset_slider_pane

0x6a1c,	// (0x000631b3) main_cset_slider_pane_g1

0x6a31,	// (0x000631c8) main_cset_slider_pane_g2

0x0011,

0xf7ba,	// (0x0006bf51) main_cset_slider_pane_g

0xd832,	// (0x00069fc9) main_cset_slider_pane_t1

0x6af3,	// (0x0006328a) main_cset_slider_pane_t2

0x6b0d,	// (0x000632a4) main_cset_slider_pane_t3

0x6b27,	// (0x000632be) main_cset_slider_pane_t4

0x6b41,	// (0x000632d8) main_cset_slider_pane_t5

0x6b5f,	// (0x000632f6) main_cset_slider_pane_t6

0x6b76,	// (0x0006330d) main_cset_slider_pane_t7

0x000e,

0xf7df,	// (0x0006bf76) main_cset_slider_pane_t

0x6c82,	// (0x00063419) cset_list_set_pane_ParamLimits

0x6c82,	// (0x00063419) cset_list_set_pane

0x6c98,	// (0x0006342f) aid_position_infowindow_above

0x6ca0,	// (0x00063437) aid_position_infowindow_below

0xa32f,	// (0x00066ac6) cset_list_set_pane_g1_ParamLimits

0xa32f,	// (0x00066ac6) cset_list_set_pane_g1

0xa33b,	// (0x00066ad2) cset_list_set_pane_g3_ParamLimits

0xa33b,	// (0x00066ad2) cset_list_set_pane_g3

0x0001,

0xf7fe,	// (0x0006bf95) cset_list_set_pane_g_ParamLimits

0xf7fe,	// (0x0006bf95) cset_list_set_pane_g

0xa34a,	// (0x00066ae1) cset_list_set_pane_t1_ParamLimits

0xa34a,	// (0x00066ae1) cset_list_set_pane_t1

0xa74e,	// (0x00066ee5) list_highlight_pane_cp021_ParamLimits

0xa74e,	// (0x00066ee5) list_highlight_pane_cp021

0xb632,	// (0x00067dc9) cset_slider_pane_g1

0xb644,	// (0x00067ddb) cset_slider_pane_g2

0xb63b,	// (0x00067dd2) cset_slider_pane_g3

0x0002,

0x06db,	// (0x0005ce72) cset_slider_pane_g

0x6ca8,	// (0x0006343f) aid_area_touch_cam4_zoom

0x6cb0,	// (0x00063447) cam4_zoom_cont_pane

0x6cb8,	// (0x0006344f) cam4_zoom_pane_g1

0x6cc0,	// (0x00063457) cam4_zoom_pane_g2

0x6cc8,	// (0x0006345f) cam4_zoom_pane_g3

0x0002,

0xf803,	// (0x0006bf9a) cam4_zoom_pane_g

0x6cd0,	// (0x00063467) cam4_zoom_cont_pane_g1

0x6cd9,	// (0x00063470) cam4_zoom_cont_pane_g2

0x6ce2,	// (0x00063479) cam4_zoom_cont_pane_g3

0x0002,

0xf80a,	// (0x0006bfa1) cam4_zoom_cont_pane_g

0x60a8,	// (0x0006283f) call4_image_pane_ParamLimits

0x60a8,	// (0x0006283f) call4_image_pane

0x6107,	// (0x0006289e) call4_windows_conf_pane_ParamLimits

0x614c,	// (0x000628e3) popup_call4_audio_in_window_ParamLimits

0x614c,	// (0x000628e3) popup_call4_audio_in_window

0x9c9e,	// (0x00066435) bg_popup_call2_act_pane_cp02

0xd664,	// (0x00069dfb) call4_list_conf_pane

0xcd08,	// (0x0006949f) call4_image_pane_g1

0xcd08,	// (0x0006949f) call4_image_pane_g2

0x0001,

0x03f4,	// (0x0005cb8b) call4_image_pane_g

0xd8d2,	// (0x0006a069) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8d2,	// (0x0006a069) list_single_graphic_popup_conf4_pane

0x9c9e,	// (0x00066435) list_highlight_pane_cp022

0xd8e5,	// (0x0006a07c) list_single_graphic_popup_conf4_pane_g1

0xb203,	// (0x0006799a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf811,	// (0x0006bfa8) list_single_graphic_popup_conf4_pane_g

0xd8ed,	// (0x0006a084) list_single_graphic_popup_conf4_pane_t1

0x2028,	// (0x0005e7bf) popup_vtel_slider_window_ParamLimits

0x2028,	// (0x0005e7bf) popup_vtel_slider_window

0xd646,	// (0x00069ddd) dialer2_ne_pane_t2_ParamLimits

0xd646,	// (0x00069ddd) dialer2_ne_pane_t2

0x0001,

0xf712,	// (0x0006bea9) dialer2_ne_pane_t_ParamLimits

0xf712,	// (0x0006bea9) dialer2_ne_pane_t

0xa74e,	// (0x00066ee5) bg_popup_sub_pane_cp010_ParamLimits

0xa74e,	// (0x00066ee5) bg_popup_sub_pane_cp010

0x6ceb,	// (0x00063482) popup_vtel_slider_window_g1_ParamLimits

0x6ceb,	// (0x00063482) popup_vtel_slider_window_g1

0x6cf7,	// (0x0006348e) popup_vtel_slider_window_g2_ParamLimits

0x6cf7,	// (0x0006348e) popup_vtel_slider_window_g2

0x0003,

0xf816,	// (0x0006bfad) popup_vtel_slider_window_g_ParamLimits

0xf816,	// (0x0006bfad) popup_vtel_slider_window_g

0x6d3f,	// (0x000634d6) vtel_slider_pane_ParamLimits

0x6d3f,	// (0x000634d6) vtel_slider_pane

0x6d4e,	// (0x000634e5) vtel_slider_pane_g1_ParamLimits

0x6d4e,	// (0x000634e5) vtel_slider_pane_g1

0x6d5b,	// (0x000634f2) vtel_slider_pane_g2_ParamLimits

0x6d5b,	// (0x000634f2) vtel_slider_pane_g2

0x6d68,	// (0x000634ff) vtel_slider_pane_g3_ParamLimits

0x6d68,	// (0x000634ff) vtel_slider_pane_g3

0x6d4e,	// (0x000634e5) vtel_slider_pane_g4_ParamLimits

0x6d4e,	// (0x000634e5) vtel_slider_pane_g4

0x6d75,	// (0x0006350c) vtel_slider_pane_g5_ParamLimits

0x6d75,	// (0x0006350c) vtel_slider_pane_g5

0x0004,

0xf81f,	// (0x0006bfb6) vtel_slider_pane_g_ParamLimits

0xf81f,	// (0x0006bfb6) vtel_slider_pane_g

0x4244,	// (0x000609db) main_gallery2_pane

0x64e6,	// (0x00062c7d) aid_size_row_itut2_dropdow_list_ParamLimits

0x64e6,	// (0x00062c7d) aid_size_row_itut2_dropdow_list

0x6554,	// (0x00062ceb) grid_vitu2_function_top_pane_ParamLimits

0x6554,	// (0x00062ceb) grid_vitu2_function_top_pane

0x65ae,	// (0x00062d45) popup_vitu2_dropdown_list_window_ParamLimits

0x65ae,	// (0x00062d45) popup_vitu2_dropdown_list_window

0x65ce,	// (0x00062d65) popup_vitu2_match_list_window

0x6d90,	// (0x00063527) cell_vitu2_function_top_pane_ParamLimits

0x6d90,	// (0x00063527) cell_vitu2_function_top_pane

0x6daa,	// (0x00063541) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6daa,	// (0x00063541) cell_vitu2_function_top_pane_cp01

0x6dc6,	// (0x0006355d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dc6,	// (0x0006355d) cell_vitu2_function_top_wide_pane

0x4244,	// (0x000609db) bg_button_pane_cp012

0x6de2,	// (0x00063579) cell_vitu2_function_top_pane_g1

0x6df6,	// (0x0006358d) bg_button_pane_cp013_ParamLimits

0x6df6,	// (0x0006358d) bg_button_pane_cp013

0x6e12,	// (0x000635a9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e12,	// (0x000635a9) cell_vitu2_function_top_wide_pane_g1

0x1036,	// (0x0005d7cd) bg_popup_sub_pane_cp20

0x6e2a,	// (0x000635c1) list_vitu2_match_list_pane

0xd6df,	// (0x00069e76) bg_popup_sub_pane_cp20_g1

0xd6e7,	// (0x00069e7e) bg_popup_sub_pane_cp20_g2

0xace9,	// (0x00067480) bg_popup_sub_pane_cp20_g3

0xd6ef,	// (0x00069e86) bg_popup_sub_pane_cp20_g4

0xacc9,	// (0x00067460) bg_popup_sub_pane_cp20_g5

0xd903,	// (0x0006a09a) bg_popup_sub_pane_cp20_g6

0xd6ff,	// (0x00069e96) bg_popup_sub_pane_cp20_g7

0xd707,	// (0x00069e9e) bg_popup_sub_pane_cp20_g8

0xd70f,	// (0x00069ea6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf82a,	// (0x0006bfc1) bg_popup_sub_pane_cp20_g

0x6e42,	// (0x000635d9) list_vitu2_match_list_item_pane_ParamLimits

0x6e42,	// (0x000635d9) list_vitu2_match_list_item_pane

0x6e54,	// (0x000635eb) list_vitu2_match_list_item_pane_t1

0x1050,	// (0x0005d7e7) bg_popup_sub_pane_cp21

0x6eaa,	// (0x00063641) grid_vitu2_dropdown_list_pane

0x6eb2,	// (0x00063649) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6eb2,	// (0x00063649) cell_vitu2_dropdown_list_char_pane

0x6ed3,	// (0x0006366a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ed3,	// (0x0006366a) cell_vitu2_dropdown_list_ctrl_pane

0xd90b,	// (0x0006a0a2) cell_vitu2_dropdown_list_char_pane_g1

0xd914,	// (0x0006a0ab) cell_vitu2_dropdown_list_char_pane_g2

0xd91d,	// (0x0006a0b4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf847,	// (0x0006bfde) cell_vitu2_dropdown_list_char_pane_g

0x6eff,	// (0x00063696) cell_vitu2_dropdown_list_char_pane_t1

0x6f0d,	// (0x000636a4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f0d,	// (0x000636a4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f1d,	// (0x000636b4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f1d,	// (0x000636b4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f2e,	// (0x000636c5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f2e,	// (0x000636c5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f3e,	// (0x000636d5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f3e,	// (0x000636d5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6318,	// (0x00062aaf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6318,	// (0x00062aaf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf84e,	// (0x0006bfe5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf84e,	// (0x0006bfe5) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f5a,	// (0x000636f1) aid_size_cell_gallery2_ParamLimits

0x6f5a,	// (0x000636f1) aid_size_cell_gallery2

0x6f74,	// (0x0006370b) grid_gallery2_pane_ParamLimits

0x6f74,	// (0x0006370b) grid_gallery2_pane

0x6f8b,	// (0x00063722) scroll_pane_cp029_ParamLimits

0x6f8b,	// (0x00063722) scroll_pane_cp029

0x6f9b,	// (0x00063732) cell_gallery2_pane_ParamLimits

0x6f9b,	// (0x00063732) cell_gallery2_pane

0xd926,	// (0x0006a0bd) cell_gallery2_pane_g2

0xe8b7,	// (0x0006b04e) cell_gallery2_pane_g3

0xd92e,	// (0x0006a0c5) cell_gallery2_pane_g4

0xd936,	// (0x0006a0cd) cell_gallery2_pane_g5

0xaa87,	// (0x0006721e) grid_highlight_pane_cp10

0x65ce,	// (0x00062d65) popup_vitu2_match_list_window_ParamLimits

0x65e2,	// (0x00062d79) popup_vitu2_query_window_ParamLimits

0x65e2,	// (0x00062d79) popup_vitu2_query_window

0x1050,	// (0x0005d7e7) bg_vitu2_candi_button_pane

0xd90b,	// (0x0006a0a2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd914,	// (0x0006a0ab) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd91d,	// (0x0006a0b4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ff0,	// (0x00063787) bg_button_pane_cp015

0x7002,	// (0x00063799) bg_button_pane_cp016

0x7015,	// (0x000637ac) bg_button_pane_cp017

0xc900,	// (0x00069097) bg_popup_sub_pane_cp22

0xd93e,	// (0x0006a0d5) popup_vitu2_query_window_g1

0x705a,	// (0x000637f1) popup_vitu2_query_window_g2

0x0002,

0xf859,	// (0x0006bff0) popup_vitu2_query_window_g

0x7077,	// (0x0006380e) popup_vitu2_query_window_t1_ParamLimits

0x7077,	// (0x0006380e) popup_vitu2_query_window_t1

0x70aa,	// (0x00063841) popup_vitu2_query_window_t2_ParamLimits

0x70aa,	// (0x00063841) popup_vitu2_query_window_t2

0x70bc,	// (0x00063853) popup_vitu2_query_window_t3_ParamLimits

0x70bc,	// (0x00063853) popup_vitu2_query_window_t3

0x70e4,	// (0x0006387b) popup_vitu2_query_window_t4_ParamLimits

0x70e4,	// (0x0006387b) popup_vitu2_query_window_t4

0x7105,	// (0x0006389c) popup_vitu2_query_window_t5_ParamLimits

0x7105,	// (0x0006389c) popup_vitu2_query_window_t5

0x0006,

0xf860,	// (0x0006bff7) popup_vitu2_query_window_t_ParamLimits

0xf860,	// (0x0006bff7) popup_vitu2_query_window_t

0xd7e1,	// (0x00069f78) main_cset_text_pane

0x69d6,	// (0x0006316d) aid_area_touch_slider_ParamLimits

0x69f2,	// (0x00063189) cset_slider_pane_ParamLimits

0x6a1c,	// (0x000631b3) main_cset_slider_pane_g1_ParamLimits

0x6a31,	// (0x000631c8) main_cset_slider_pane_g2_ParamLimits

0xd802,	// (0x00069f99) main_cset_slider_pane_g3_ParamLimits

0xd802,	// (0x00069f99) main_cset_slider_pane_g3

0x6a46,	// (0x000631dd) main_cset_slider_pane_g4_ParamLimits

0x6a46,	// (0x000631dd) main_cset_slider_pane_g4

0x6a55,	// (0x000631ec) main_cset_slider_pane_g5_ParamLimits

0x6a55,	// (0x000631ec) main_cset_slider_pane_g5

0x6a63,	// (0x000631fa) main_cset_slider_pane_g6_ParamLimits

0x6a63,	// (0x000631fa) main_cset_slider_pane_g6

0xf7ba,	// (0x0006bf51) main_cset_slider_pane_g_ParamLimits

0xd832,	// (0x00069fc9) main_cset_slider_pane_t1_ParamLimits

0x6af3,	// (0x0006328a) main_cset_slider_pane_t2_ParamLimits

0x6b0d,	// (0x000632a4) main_cset_slider_pane_t3_ParamLimits

0x6b27,	// (0x000632be) main_cset_slider_pane_t4_ParamLimits

0x6b41,	// (0x000632d8) main_cset_slider_pane_t5_ParamLimits

0x6b5f,	// (0x000632f6) main_cset_slider_pane_t6_ParamLimits

0x6b76,	// (0x0006330d) main_cset_slider_pane_t7_ParamLimits

0x6ba4,	// (0x0006333b) main_cset_slider_pane_t8_ParamLimits

0x6ba4,	// (0x0006333b) main_cset_slider_pane_t8

0x6bcc,	// (0x00063363) main_cset_slider_pane_t9_ParamLimits

0x6bcc,	// (0x00063363) main_cset_slider_pane_t9

0x6bf4,	// (0x0006338b) main_cset_slider_pane_t10_ParamLimits

0x6bf4,	// (0x0006338b) main_cset_slider_pane_t10

0x6c1c,	// (0x000633b3) main_cset_slider_pane_t11_ParamLimits

0x6c1c,	// (0x000633b3) main_cset_slider_pane_t11

0x6c46,	// (0x000633dd) main_cset_slider_pane_t12_ParamLimits

0x6c46,	// (0x000633dd) main_cset_slider_pane_t12

0x6c63,	// (0x000633fa) main_cset_slider_pane_t13_ParamLimits

0x6c63,	// (0x000633fa) main_cset_slider_pane_t13

0xf7df,	// (0x0006bf76) main_cset_slider_pane_t_ParamLimits

0x9c9e,	// (0x00066435) bg_popup_sub_pane_cp011

0xd94a,	// (0x0006a0e1) main_cset_text_pane_g1

0xd952,	// (0x0006a0e9) main_cset_text_pane_t1

0xd960,	// (0x0006a0f7) main_cset_text_pane_t2

0xd989,	// (0x0006a120) main_cset_text_pane_t3

0xd997,	// (0x0006a12e) main_cset_text_pane_t4

0xd9a5,	// (0x0006a13c) main_cset_text_pane_t5

0xd9b3,	// (0x0006a14a) main_cset_text_pane_t6

0xd9c1,	// (0x0006a158) main_cset_text_pane_t7

0x0006,

0xf86f,	// (0x0006c006) main_cset_text_pane_t

0x1050,	// (0x0005d7e7) main_cam4_burst_pane

0x1050,	// (0x0005d7e7) main_cam5_pane

0x6925,	// (0x000630bc) bg_button_pane_cp019

0x692e,	// (0x000630c5) bg_button_pane_cp020

0xd80e,	// (0x00069fa5) main_cset_slider_pane_g7_ParamLimits

0xd80e,	// (0x00069fa5) main_cset_slider_pane_g7

0xd81a,	// (0x00069fb1) main_cset_slider_pane_g8_ParamLimits

0xd81a,	// (0x00069fb1) main_cset_slider_pane_g8

0x6a77,	// (0x0006320e) main_cset_slider_pane_g9_ParamLimits

0x6a77,	// (0x0006320e) main_cset_slider_pane_g9

0x6a83,	// (0x0006321a) main_cset_slider_pane_g10_ParamLimits

0x6a83,	// (0x0006321a) main_cset_slider_pane_g10

0x6a8f,	// (0x00063226) main_cset_slider_pane_g11_ParamLimits

0x6a8f,	// (0x00063226) main_cset_slider_pane_g11

0x6a9b,	// (0x00063232) main_cset_slider_pane_g12_ParamLimits

0x6a9b,	// (0x00063232) main_cset_slider_pane_g12

0x6aa7,	// (0x0006323e) main_cset_slider_pane_g13_ParamLimits

0x6aa7,	// (0x0006323e) main_cset_slider_pane_g13

0x6ab3,	// (0x0006324a) main_cset_slider_pane_g14_ParamLimits

0x6ab3,	// (0x0006324a) main_cset_slider_pane_g14

0x6abf,	// (0x00063256) main_cset_slider_pane_g15_ParamLimits

0x6abf,	// (0x00063256) main_cset_slider_pane_g15

0xd860,	// (0x00069ff7) main_cset_slider_pane_t14_ParamLimits

0xd860,	// (0x00069ff7) main_cset_slider_pane_t14

0xd899,	// (0x0006a030) main_cset_slider_pane_t15_ParamLimits

0xd899,	// (0x0006a030) main_cset_slider_pane_t15

0x717c,	// (0x00063913) aid_cam4_burst_size_cell_ParamLimits

0x717c,	// (0x00063913) aid_cam4_burst_size_cell

0x7198,	// (0x0006392f) grid_cam4_burst_pane_ParamLimits

0x7198,	// (0x0006392f) grid_cam4_burst_pane

0x71c8,	// (0x0006395f) linegrid_cam4_burst_pane_ParamLimits

0x71c8,	// (0x0006395f) linegrid_cam4_burst_pane

0x71e8,	// (0x0006397f) scroll_pane_cp30_ParamLimits

0x71e8,	// (0x0006397f) scroll_pane_cp30

0x71f4,	// (0x0006398b) cell_cam4_burst_pane_ParamLimits

0x71f4,	// (0x0006398b) cell_cam4_burst_pane

0xd9cf,	// (0x0006a166) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9cf,	// (0x0006a166) linegrid_cam4_burst_pane_g1

0x7230,	// (0x000639c7) linegrid_cam4_burst_pane_g2_ParamLimits

0x7230,	// (0x000639c7) linegrid_cam4_burst_pane_g2

0xd9dc,	// (0x0006a173) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9dc,	// (0x0006a173) linegrid_cam4_burst_pane_g3

0x0002,

0xf87e,	// (0x0006c015) linegrid_cam4_burst_pane_g_ParamLimits

0xf87e,	// (0x0006c015) linegrid_cam4_burst_pane_g

0x7241,	// (0x000639d8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7241,	// (0x000639d8) linegrid_cam4_burst_pane_g3_copy1

0xd9e9,	// (0x0006a180) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e9,	// (0x0006a180) linegrid_cam4_burst_pane_g4

0x725b,	// (0x000639f2) linegrid_cam4_burst_pane_g5_ParamLimits

0x725b,	// (0x000639f2) linegrid_cam4_burst_pane_g5

0x726c,	// (0x00063a03) linegrid_cam4_burst_pane_g6_ParamLimits

0x726c,	// (0x00063a03) linegrid_cam4_burst_pane_g6

0xd9f6,	// (0x0006a18d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f6,	// (0x0006a18d) linegrid_cam4_burst_pane_g7

0x727d,	// (0x00063a14) cell_cam4_burst_pane_g1

0xda0f,	// (0x0006a1a6) main_cam5_pane_t1_ParamLimits

0xda0f,	// (0x0006a1a6) main_cam5_pane_t1

0xda21,	// (0x0006a1b8) main_cam5_pane_t2_ParamLimits

0xda21,	// (0x0006a1b8) main_cam5_pane_t2

0xda33,	// (0x0006a1ca) main_cam5_pane_t3_ParamLimits

0xda33,	// (0x0006a1ca) main_cam5_pane_t3

0xda45,	// (0x0006a1dc) main_cam5_pane_t4_ParamLimits

0xda45,	// (0x0006a1dc) main_cam5_pane_t4

0xda5d,	// (0x0006a1f4) main_cam5_pane_t5_ParamLimits

0xda5d,	// (0x0006a1f4) main_cam5_pane_t5

0xda71,	// (0x0006a208) main_cam5_pane_t6_ParamLimits

0xda71,	// (0x0006a208) main_cam5_pane_t6

0xda85,	// (0x0006a21c) main_cam5_pane_t7_ParamLimits

0xda85,	// (0x0006a21c) main_cam5_pane_t7

0xda97,	// (0x0006a22e) main_cam5_pane_t8_ParamLimits

0xda97,	// (0x0006a22e) main_cam5_pane_t8

0xdab3,	// (0x0006a24a) main_cam5_pane_t9_ParamLimits

0xdab3,	// (0x0006a24a) main_cam5_pane_t9

0xdac5,	// (0x0006a25c) main_cam5_pane_t10_ParamLimits

0xdac5,	// (0x0006a25c) main_cam5_pane_t10

0xdad7,	// (0x0006a26e) main_cam5_pane_t11_ParamLimits

0xdad7,	// (0x0006a26e) main_cam5_pane_t11

0xdae9,	// (0x0006a280) main_cam5_pane_t12_ParamLimits

0xdae9,	// (0x0006a280) main_cam5_pane_t12

0xdafe,	// (0x0006a295) main_cam5_pane_t13_ParamLimits

0xdafe,	// (0x0006a295) main_cam5_pane_t13

0x000c,

0xf88a,	// (0x0006c021) main_cam5_pane_t_ParamLimits

0xf88a,	// (0x0006c021) main_cam5_pane_t

0x0ff5,	// (0x0005d78c) popup_scut_keymap_window_ParamLimits

0x0ff5,	// (0x0005d78c) popup_scut_keymap_window

0x7290,	// (0x00063a27) aid_size_cell_brow_shortcut

0xaa87,	// (0x0006721e) bg_popup_window_pane_cp010

0x729c,	// (0x00063a33) grid_scut_pane

0x72a8,	// (0x00063a3f) cell_scut_pane_ParamLimits

0x72a8,	// (0x00063a3f) cell_scut_pane

0x72bf,	// (0x00063a56) cell_scut_pane_g1

0xdb1b,	// (0x0006a2b2) cell_scut_pane_t1

0xdb2a,	// (0x0006a2c1) cell_scut_pane_t2

0x72c8,	// (0x00063a5f) cell_scut_pane_t3

0x0002,

0xf8a5,	// (0x0006c03c) cell_scut_pane_t

0x4fab,	// (0x00061742) main_mup3_pane_g8_ParamLimits

0x4fab,	// (0x00061742) main_mup3_pane_g8

0x64f4,	// (0x00062c8b) area_vitu2_query_pane_ParamLimits

0x64f4,	// (0x00062c8b) area_vitu2_query_pane

0x7028,	// (0x000637bf) input_focus_pane_cp08

0xdb39,	// (0x0006a2d0) area_vitu2_query_pane_g1

0x72d6,	// (0x00063a6d) area_vitu2_query_pane_g2

0x0001,

0xf8ac,	// (0x0006c043) area_vitu2_query_pane_g

0x72e7,	// (0x00063a7e) area_vitu2_query_pane_t1_ParamLimits

0x72e7,	// (0x00063a7e) area_vitu2_query_pane_t1

0x72fb,	// (0x00063a92) area_vitu2_query_pane_t2_ParamLimits

0x72fb,	// (0x00063a92) area_vitu2_query_pane_t2

0x730f,	// (0x00063aa6) area_vitu2_query_pane_t3_ParamLimits

0x730f,	// (0x00063aa6) area_vitu2_query_pane_t3

0xa35f,	// (0x00066af6) area_vitu2_query_pane_t4_ParamLimits

0xa35f,	// (0x00066af6) area_vitu2_query_pane_t4

0xa387,	// (0x00066b1e) area_vitu2_query_pane_t5_ParamLimits

0xa387,	// (0x00066b1e) area_vitu2_query_pane_t5

0xa3af,	// (0x00066b46) area_vitu2_query_pane_t6_ParamLimits

0xa3af,	// (0x00066b46) area_vitu2_query_pane_t6

0x0006,

0xf8b1,	// (0x0006c048) area_vitu2_query_pane_t_ParamLimits

0xf8b1,	// (0x0006c048) area_vitu2_query_pane_t

0x7337,	// (0x00063ace) bg_button_pane_cp018

0x7345,	// (0x00063adc) bg_button_pane_cp021

0x7351,	// (0x00063ae8) bg_button_pane_cp022

0x7362,	// (0x00063af9) input_focus_pane_cp09

0xb33f,	// (0x00067ad6) aid_size_touch_mv_arrow_left

0xb368,	// (0x00067aff) aid_size_touch_mv_arrow_right

0x6ad7,	// (0x0006326e) main_cset_slider_pane_g16_ParamLimits

0x6ad7,	// (0x0006326e) main_cset_slider_pane_g16

0x6ae5,	// (0x0006327c) main_cset_slider_pane_g17_ParamLimits

0x6ae5,	// (0x0006327c) main_cset_slider_pane_g17

0x727d,	// (0x00063a14) cell_cam4_burst_pane_g1_ParamLimits

0x9c9e,	// (0x00066435) compa_mode_pane

0x6d03,	// (0x0006349a) popup_vtel_slider_window_g3_ParamLimits

0x6d03,	// (0x0006349a) popup_vtel_slider_window_g3

0x6d17,	// (0x000634ae) popup_vtel_slider_window_g4_ParamLimits

0x6d17,	// (0x000634ae) popup_vtel_slider_window_g4

0x6d2b,	// (0x000634c2) popup_vtel_slider_window_t1_ParamLimits

0x6d2b,	// (0x000634c2) popup_vtel_slider_window_t1

0x1050,	// (0x0005d7e7) main_cl_pane

0x42e2,	// (0x00060a79) popup_imed_adjust2_window_ParamLimits

0xc900,	// (0x00069097) bg_tb_trans_pane_cp05_ParamLimits

0xd24e,	// (0x000699e5) popup_imed_adjust2_window_g1_ParamLimits

0xd25d,	// (0x000699f4) popup_imed_adjust2_window_g2_ParamLimits

0xd25d,	// (0x000699f4) popup_imed_adjust2_window_g2

0xd269,	// (0x00069a00) popup_imed_adjust2_window_g3_ParamLimits

0xd269,	// (0x00069a00) popup_imed_adjust2_window_g3

0x0002,

0x04f7,	// (0x0005cc8e) popup_imed_adjust2_window_g_ParamLimits

0x04f7,	// (0x0005cc8e) popup_imed_adjust2_window_g

0xd275,	// (0x00069a0c) popup_imed_adjust2_window_t1_ParamLimits

0xd28d,	// (0x00069a24) slider_imed_adjust_pane_ParamLimits

0xd2a1,	// (0x00069a38) slider_imed_adjust_pane_g1_ParamLimits

0xd2b1,	// (0x00069a48) slider_imed_adjust_pane_g2_ParamLimits

0xd2c1,	// (0x00069a58) slider_imed_adjust_pane_g3_ParamLimits

0xd2d2,	// (0x00069a69) slider_imed_adjust_pane_g4_ParamLimits

0x04fe,	// (0x0005cc95) slider_imed_adjust_pane_g_ParamLimits

0x622d,	// (0x000629c4) aid_touch_area_cam4_ParamLimits

0x622d,	// (0x000629c4) aid_touch_area_cam4

0x623d,	// (0x000629d4) battery_pane_cp01

0x62c4,	// (0x00062a5b) main_camera4_pane_g6_ParamLimits

0x62c4,	// (0x00062a5b) main_camera4_pane_g6

0x62e2,	// (0x00062a79) main_camera4_pane_t2_ParamLimits

0x62e2,	// (0x00062a79) main_camera4_pane_t2

0x0001,

0xf746,	// (0x0006bedd) main_camera4_pane_t_ParamLimits

0xf746,	// (0x0006bedd) main_camera4_pane_t

0x6377,	// (0x00062b0e) aid_touch_area_vid4_ParamLimits

0x6377,	// (0x00062b0e) aid_touch_area_vid4

0x63b7,	// (0x00062b4e) main_video4_pane_g5_ParamLimits

0x63b7,	// (0x00062b4e) main_video4_pane_g5

0x63db,	// (0x00062b72) vid4_progress_pane_ParamLimits

0x63db,	// (0x00062b72) vid4_progress_pane

0xd826,	// (0x00069fbd) main_cset_slider_pane_g18_ParamLimits

0xd826,	// (0x00069fbd) main_cset_slider_pane_g18

0xda03,	// (0x0006a19a) cell_cam4_burst_pane_g2_ParamLimits

0xda03,	// (0x0006a19a) cell_cam4_burst_pane_g2

0x0001,

0xf885,	// (0x0006c01c) cell_cam4_burst_pane_g_ParamLimits

0xf885,	// (0x0006c01c) cell_cam4_burst_pane_g

0x7373,	// (0x00063b0a) bg_cl_pane_ParamLimits

0x7373,	// (0x00063b0a) bg_cl_pane

0x737f,	// (0x00063b16) cl_header_pane_ParamLimits

0x737f,	// (0x00063b16) cl_header_pane

0x738b,	// (0x00063b22) cl_listscroll_pane_ParamLimits

0x738b,	// (0x00063b22) cl_listscroll_pane

0xdb45,	// (0x0006a2dc) bg_cl_pane_g1

0xdb4d,	// (0x0006a2e4) bg_cl_pane_g2

0xdb55,	// (0x0006a2ec) bg_cl_pane_g3

0xdb5d,	// (0x0006a2f4) bg_cl_pane_g4

0xdb65,	// (0x0006a2fc) bg_cl_pane_g5

0xdb6d,	// (0x0006a304) bg_cl_pane_g6

0xdb75,	// (0x0006a30c) bg_cl_pane_g7

0xdb7d,	// (0x0006a314) bg_cl_pane_g8

0xdb85,	// (0x0006a31c) bg_cl_pane_g9

0x0008,

0xf8c0,	// (0x0006c057) bg_cl_pane_g

0x7397,	// (0x00063b2e) aid_height_cl_leading_ParamLimits

0x7397,	// (0x00063b2e) aid_height_cl_leading

0x73a3,	// (0x00063b3a) aid_height_cl_text_ParamLimits

0x73a3,	// (0x00063b3a) aid_height_cl_text

0xe01d,	// (0x0006a7b4) bg_cl_header_pane_ParamLimits

0xe01d,	// (0x0006a7b4) bg_cl_header_pane

0x73bb,	// (0x00063b52) cl_header_pane_g1_ParamLimits

0x73bb,	// (0x00063b52) cl_header_pane_g1

0x73c8,	// (0x00063b5f) cl_header_pane_t1_ParamLimits

0x73c8,	// (0x00063b5f) cl_header_pane_t1

0xdb8d,	// (0x0006a324) cl_list_pane

0xd7f9,	// (0x00069f90) hc_scroll_pane_cp01

0xacc9,	// (0x00067460) bg_cl_header_pane_g1

0xd6df,	// (0x00069e76) bg_cl_header_pane_g2

0xace9,	// (0x00067480) bg_cl_header_pane_g3

0xd6ef,	// (0x00069e86) bg_cl_header_pane_g4

0xd6e7,	// (0x00069e7e) bg_cl_header_pane_g5

0xd903,	// (0x0006a09a) bg_cl_header_pane_g6

0xd707,	// (0x00069e9e) bg_cl_header_pane_g7

0xd70f,	// (0x00069ea6) bg_cl_header_pane_g8

0xd6ff,	// (0x00069e96) bg_cl_header_pane_g9

0x0008,

0xf8d3,	// (0x0006c06a) bg_cl_header_pane_g

0x73da,	// (0x00063b71) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73da,	// (0x00063b71) hc_cl_list_double_graphic_heading_pane

0x73eb,	// (0x00063b82) hc_cl_list_single_graphic_pane_ParamLimits

0x73eb,	// (0x00063b82) hc_cl_list_single_graphic_pane

0x7404,	// (0x00063b9b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7404,	// (0x00063b9b) hc_cl_list_single_graphic_pane_g1

0x7410,	// (0x00063ba7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7410,	// (0x00063ba7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8e6,	// (0x0006c07d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8e6,	// (0x0006c07d) hc_cl_list_single_graphic_pane_g

0x7424,	// (0x00063bbb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7424,	// (0x00063bbb) hc_cl_list_single_graphic_pane_t1

0x7404,	// (0x00063b9b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7404,	// (0x00063b9b) hc_cl_list_double_graphic_heading_pane_g1

0x7439,	// (0x00063bd0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7439,	// (0x00063bd0) hc_cl_list_double_graphic_heading_pane_g2

0x744d,	// (0x00063be4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x744d,	// (0x00063be4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8eb,	// (0x0006c082) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8eb,	// (0x0006c082) hc_cl_list_double_graphic_heading_pane_g

0x7461,	// (0x00063bf8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7461,	// (0x00063bf8) hc_cl_list_double_graphic_heading_pane_t1

0x7476,	// (0x00063c0d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7476,	// (0x00063c0d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8f2,	// (0x0006c089) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8f2,	// (0x0006c089) hc_cl_list_double_graphic_heading_pane_t

0x7493,	// (0x00063c2a) vid4_progress_pane_g1

0x74a3,	// (0x00063c3a) vid4_progress_pane_g2

0x74b3,	// (0x00063c4a) vid4_progress_pane_g3

0x74c5,	// (0x00063c5c) vid4_progress_pane_g4

0x0004,

0xf8f7,	// (0x0006c08e) vid4_progress_pane_g

0x74dd,	// (0x00063c74) vid4_progress_pane_t1

0x74f3,	// (0x00063c8a) vid4_progress_pane_t2

0x0002,

0xf902,	// (0x0006c099) vid4_progress_pane_t

0x751d,	// (0x00063cb4) wait_bar_pane_cp07

0xcafb,	// (0x00069292) blid_firmament_pane_ParamLimits

0xcb3e,	// (0x000692d5) popup_blid_sat_info2_window_g1

0xcb62,	// (0x000692f9) popup_blid_sat_info2_window_t3

0xcb70,	// (0x00069307) popup_blid_sat_info2_window_t4

0xcb7e,	// (0x00069315) popup_blid_sat_info2_window_t5

0xcb8c,	// (0x00069323) popup_blid_sat_info2_window_t6

0xcb9c,	// (0x00069333) popup_blid_sat_info2_window_t7

0xcbaa,	// (0x00069341) popup_blid_sat_info2_window_t8

0xcbb8,	// (0x0006934f) popup_blid_sat_info2_window_t9

0xcbc6,	// (0x0006935d) popup_blid_sat_info2_window_t10

0xcc88,	// (0x0006941f) aid_firma_cardinal_ParamLimits

0xcc9c,	// (0x00069433) blid_firmament_pane_t1_ParamLimits

0xccb3,	// (0x0006944a) blid_firmament_pane_t2_ParamLimits

0xccca,	// (0x00069461) blid_firmament_pane_t3_ParamLimits

0xcce1,	// (0x00069478) blid_firmament_pane_t4_ParamLimits

0x03eb,	// (0x0005cb82) blid_firmament_pane_t_ParamLimits

0xccf8,	// (0x0006948f) blid_sat_info_pane_ParamLimits

0x4244,	// (0x000609db) main_cam_set_pane_ParamLimits

0x5782,	// (0x00061f19) aid_size_cell_colour_35_ParamLimits

0x579c,	// (0x00061f33) aid_size_cell_colour_112_ParamLimits

0x57b3,	// (0x00061f4a) aid_size_cell_effect_ParamLimits

0xa74e,	// (0x00066ee5) bg_tb_trans_pane_cp02_ParamLimits

0xb131,	// (0x000678c8) heading_imed_pane_ParamLimits

0x57cd,	// (0x00061f64) listscroll_imed_pane_ParamLimits

0xbf1a,	// (0x000686b1) popup_call2_audio_first_window_g5_ParamLimits

0xbf1a,	// (0x000686b1) popup_call2_audio_first_window_g5

0x5f13,	// (0x000626aa) aid_size_touch_image3_arrow_left_ParamLimits

0x5f13,	// (0x000626aa) aid_size_touch_image3_arrow_left

0x5f29,	// (0x000626c0) aid_size_touch_image3_arrow_right_ParamLimits

0x5f29,	// (0x000626c0) aid_size_touch_image3_arrow_right

0x7508,	// (0x00063c9f) vid4_progress_pane_t3

0x5a6b,	// (0x00062202) main_hwr_training_symbol_option_pane_ParamLimits

0x5a6b,	// (0x00062202) main_hwr_training_symbol_option_pane

0xd53b,	// (0x00069cd2) popup_hwr_training_preview_window_ParamLimits

0xd53b,	// (0x00069cd2) popup_hwr_training_preview_window

0x5acc,	// (0x00062263) hwr_training_navi_pane_g5_ParamLimits

0x5acc,	// (0x00062263) hwr_training_navi_pane_g5

0xd6cd,	// (0x00069e64) popup_char_count_window

0x1036,	// (0x0005d7cd) bg_popup_sub_pane_cp20_ParamLimits

0x6e2a,	// (0x000635c1) list_vitu2_match_list_pane_ParamLimits

0x6e36,	// (0x000635cd) vitu2_page_scroll_pane_ParamLimits

0x6e36,	// (0x000635cd) vitu2_page_scroll_pane

0xdb96,	// (0x0006a32d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb96,	// (0x0006a32d) list_single_hwr_training_symbol_option_pane

0xdbd5,	// (0x0006a36c) list_single_hwr_training_symbol_option_pane_g1

0xdbdd,	// (0x0006a374) list_single_hwr_training_symbol_option_pane_t1

0xdbeb,	// (0x0006a382) bg_button_pane_cp023

0xdbf4,	// (0x0006a38b) bg_button_pane_cp024

0x7568,	// (0x00063cff) vitu2_page_scroll_pane_g1

0x7570,	// (0x00063d07) vitu2_page_scroll_pane_g2

0x0001,

0xf909,	// (0x0006c0a0) vitu2_page_scroll_pane_g

0x7578,	// (0x00063d0f) vitu2_page_scroll_pane_t1

0xca5b,	// (0x000691f2) popup_char_count_window_g1

0xdc27,	// (0x0006a3be) popup_char_count_window_g2

0xdc30,	// (0x0006a3c7) popup_char_count_window_g3

0x0002,

0xf90e,	// (0x0006c0a5) popup_char_count_window_g

0xdc39,	// (0x0006a3d0) popup_char_count_window_t1

0x1050,	// (0x0005d7e7) main_vded2_pane

0xd23a,	// (0x000699d1) aid_size_cell_imed_line

0xd244,	// (0x000699db) grid_imed_line_width_pane

0x6449,	// (0x00062be0) vid4_indicators_pane_g4

0xdc47,	// (0x0006a3de) cell_imed_line_width_pane_ParamLimits

0xdc47,	// (0x0006a3de) cell_imed_line_width_pane

0xdc5b,	// (0x0006a3f2) cell_imed_line_width_pane_g1

0xdbb5,	// (0x0006a34c) cell_imed_line_width_pane_g2

0x0001,

0xf915,	// (0x0006c0ac) cell_imed_line_width_pane_g

0x7587,	// (0x00063d1e) main_vded2_pane_g1_ParamLimits

0x7587,	// (0x00063d1e) main_vded2_pane_g1

0x7594,	// (0x00063d2b) main_vded2_pane_g2_ParamLimits

0x7594,	// (0x00063d2b) main_vded2_pane_g2

0x0001,

0xf91a,	// (0x0006c0b1) main_vded2_pane_g_ParamLimits

0xf91a,	// (0x0006c0b1) main_vded2_pane_g

0x75a2,	// (0x00063d39) vded2_slider_pane_ParamLimits

0x75a2,	// (0x00063d39) vded2_slider_pane

0x75af,	// (0x00063d46) aid_size_touch_vded2_end

0x75b9,	// (0x00063d50) aid_size_touch_vded2_playhead

0xdc64,	// (0x0006a3fb) aid_size_touch_vded2_start

0xdc6c,	// (0x0006a403) vded2_slider_bg_pane

0xdc75,	// (0x0006a40c) vded2_slider_pane_g1

0xdc7e,	// (0x0006a415) vded2_slider_pane_g2

0x75c1,	// (0x00063d58) vded2_slider_pane_g3

0x0002,

0xf91f,	// (0x0006c0b6) vded2_slider_pane_g

0xdc86,	// (0x0006a41d) vded2_slider_bg_pane_g1

0xdc8f,	// (0x0006a426) vded2_slider_bg_pane_g2

0xdc98,	// (0x0006a42f) vded2_slider_bg_pane_g3

0x0002,

0xf926,	// (0x0006c0bd) vded2_slider_bg_pane_g

0x3b2c,	// (0x000602c3) aid_postcard_touch_down_pane_ParamLimits

0x3b2c,	// (0x000602c3) aid_postcard_touch_down_pane

0x3b3c,	// (0x000602d3) aid_postcard_touch_up_pane_ParamLimits

0x3b3c,	// (0x000602d3) aid_postcard_touch_up_pane

0x1050,	// (0x0005d7e7) main_blid2_pane

0x426d,	// (0x00060a04) popup_blid2_search_window

0x9c9e,	// (0x00066435) blid2_gps_pane

0x9c9e,	// (0x00066435) blid2_navig_pane

0x9c9e,	// (0x00066435) blid2_search_pane

0x9c9e,	// (0x00066435) blid2_tripm_pane

0x75ca,	// (0x00063d61) blid2_search_pane_g1_ParamLimits

0x75ca,	// (0x00063d61) blid2_search_pane_g1

0x75da,	// (0x00063d71) blid2_search_pane_t1_ParamLimits

0x75da,	// (0x00063d71) blid2_search_pane_t1

0x75ec,	// (0x00063d83) aid_size_cell_blid2_gps_ParamLimits

0x75ec,	// (0x00063d83) aid_size_cell_blid2_gps

0x75fc,	// (0x00063d93) blid2_gps_pane_g1_ParamLimits

0x75fc,	// (0x00063d93) blid2_gps_pane_g1

0x7608,	// (0x00063d9f) grid_blid2_satellite_pane_ParamLimits

0x7608,	// (0x00063d9f) grid_blid2_satellite_pane

0x7618,	// (0x00063daf) blid2_navig_pane_g1_ParamLimits

0x7618,	// (0x00063daf) blid2_navig_pane_g1

0x7624,	// (0x00063dbb) blid2_navig_pane_t1_ParamLimits

0x7624,	// (0x00063dbb) blid2_navig_pane_t1

0x7636,	// (0x00063dcd) blid2_navig_pane_t2_ParamLimits

0x7636,	// (0x00063dcd) blid2_navig_pane_t2

0x0001,

0xf92d,	// (0x0006c0c4) blid2_navig_pane_t_ParamLimits

0xf92d,	// (0x0006c0c4) blid2_navig_pane_t

0x7648,	// (0x00063ddf) blid2_navig_ring_pane_ParamLimits

0x7648,	// (0x00063ddf) blid2_navig_ring_pane

0x7658,	// (0x00063def) blid2_speed_pane_ParamLimits

0x7658,	// (0x00063def) blid2_speed_pane

0x7664,	// (0x00063dfb) blid2_tripm_pane_g1_ParamLimits

0x7664,	// (0x00063dfb) blid2_tripm_pane_g1

0x7674,	// (0x00063e0b) blid2_tripm_pane_g2_ParamLimits

0x7674,	// (0x00063e0b) blid2_tripm_pane_g2

0x7680,	// (0x00063e17) blid2_tripm_pane_g3_ParamLimits

0x7680,	// (0x00063e17) blid2_tripm_pane_g3

0x768c,	// (0x00063e23) blid2_tripm_pane_g4_ParamLimits

0x768c,	// (0x00063e23) blid2_tripm_pane_g4

0x7698,	// (0x00063e2f) blid2_tripm_pane_g5_ParamLimits

0x7698,	// (0x00063e2f) blid2_tripm_pane_g5

0x0005,

0xf932,	// (0x0006c0c9) blid2_tripm_pane_g_ParamLimits

0xf932,	// (0x0006c0c9) blid2_tripm_pane_g

0x76b4,	// (0x00063e4b) blid2_tripm_pane_t1_ParamLimits

0x76b4,	// (0x00063e4b) blid2_tripm_pane_t1

0x76c8,	// (0x00063e5f) blid2_tripm_pane_t2_ParamLimits

0x76c8,	// (0x00063e5f) blid2_tripm_pane_t2

0x76da,	// (0x00063e71) blid2_tripm_pane_t3_ParamLimits

0x76da,	// (0x00063e71) blid2_tripm_pane_t3

0x0003,

0xf93f,	// (0x0006c0d6) blid2_tripm_pane_t_ParamLimits

0xf93f,	// (0x0006c0d6) blid2_tripm_pane_t

0x770c,	// (0x00063ea3) cell_blid2_satellite_pane_ParamLimits

0x770c,	// (0x00063ea3) cell_blid2_satellite_pane

0x7726,	// (0x00063ebd) cell_blid2_satellite_pane_g1

0xdca1,	// (0x0006a438) cell_blid2_satellite_pane_t1

0xcd08,	// (0x0006949f) blid2_speed_pane_g1

0xdcaf,	// (0x0006a446) blid2_speed_pane_t1

0xdcbd,	// (0x0006a454) blid2_speed_pane_t2

0x0001,

0xf948,	// (0x0006c0df) blid2_speed_pane_t

0xcd08,	// (0x0006949f) blid2_navig_ring_pane_g1

0x772f,	// (0x00063ec6) blid2_navig_ring_pane_g2

0x7737,	// (0x00063ece) blid2_navig_ring_pane_g3

0x773f,	// (0x00063ed6) blid2_navig_ring_pane_g4

0x7747,	// (0x00063ede) blid2_navig_ring_pane_g5

0x0004,

0xf94d,	// (0x0006c0e4) blid2_navig_ring_pane_g

0x9c9e,	// (0x00066435) bg_popup_window_pane_cp011

0xdccb,	// (0x0006a462) popup_blid2_search_window_g1

0xdcd3,	// (0x0006a46a) popup_blid2_search_window_t1

0xdce1,	// (0x0006a478) popup_blid2_search_window_t2

0x0001,

0xf958,	// (0x0006c0ef) popup_blid2_search_window_t

0xabd8,	// (0x0006736f) main_browser_pane_g1

0xa8c2,	// (0x00067059) main_browser_pane_ParamLimits

0x4244,	// (0x000609db) bg_button_pane_cp011_ParamLimits

0x66f8,	// (0x00062e8f) cell_vitu2_function_pane_g1_ParamLimits

0xc900,	// (0x00069097) bg_popup_sub_pane_cp22_ParamLimits

0x7028,	// (0x000637bf) input_focus_pane_cp08_ParamLimits

0x703f,	// (0x000637d6) popup_vitu2_query_button_pane_ParamLimits

0x703f,	// (0x000637d6) popup_vitu2_query_button_pane

0x7050,	// (0x000637e7) popup_vitu2_query_input_button_pane

0xd93e,	// (0x0006a0d5) popup_vitu2_query_window_g1_ParamLimits

0x705a,	// (0x000637f1) popup_vitu2_query_window_g2_ParamLimits

0xf859,	// (0x0006bff0) popup_vitu2_query_window_g_ParamLimits

0x9c9e,	// (0x00066435) bg_button_pane_cp026

0x774f,	// (0x00063ee6) popup_vitu2_query_input_button_pane_g1

0x9c9e,	// (0x00066435) bg_button_pane_cp025

0xdcef,	// (0x0006a486) popup_vitu2_query_button_pane_t1

0x4cc3,	// (0x0006145a) main_mp3_pane_t6

0x4cd3,	// (0x0006146a) popup_slider_window_cp01

0x6326,	// (0x00062abd) cam4_battery_pane

0x6406,	// (0x00062b9d) cam4_battery_pane_cp02

0x748b,	// (0x00063c22) cam4_battery_pane_cp01

0x748b,	// (0x00063c22) cam4_battery_pane_cp03

0xdbbd,	// (0x0006a354) cam4_battery_pane_g1

0xcd08,	// (0x0006949f) cam4_battery_pane_g2

0x0001,

0xf95d,	// (0x0006c0f4) cam4_battery_pane_g

0xcbd4,	// (0x0006936b) popup_blid_sat_info2_window_t11

0xb33f,	// (0x00067ad6) aid_size_touch_mv_arrow_left_ParamLimits

0xb368,	// (0x00067aff) aid_size_touch_mv_arrow_right_ParamLimits

0xb3d4,	// (0x00067b6b) navi_pane_g1_ParamLimits

0xb3e0,	// (0x00067b77) navi_pane_g2_ParamLimits

0xb40e,	// (0x00067ba5) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0006bb61) navi_pane_g_ParamLimits

0x34f2,	// (0x0005fc89) navi_pane_mv_t1_ParamLimits

0x57d9,	// (0x00061f70) grid_imed_effect_pane_ParamLimits

0x1ee8,	// (0x0005e67f) aid_placing_vt_slider_lsc

0xab27,	// (0x000672be) aid_placing_vt_slider_prt

0xa74e,	// (0x00066ee5) bg_tb_trans_pane_cp01_ParamLimits

0xce8b,	// (0x00069622) popup_image_details_window_g1_ParamLimits

0xce9e,	// (0x00069635) popup_image_details_window_g2_ParamLimits

0xceb3,	// (0x0006964a) popup_image_details_window_g3_ParamLimits

0xceb3,	// (0x0006964a) popup_image_details_window_g3

0x0430,	// (0x0005cbc7) popup_image_details_window_g_ParamLimits

0xcec7,	// (0x0006965e) popup_image_details_window_t1_ParamLimits

0xced9,	// (0x00069670) popup_image_details_window_t2_ParamLimits

0xcef2,	// (0x00069689) popup_image_details_window_t3_ParamLimits

0xcf06,	// (0x0006969d) popup_image_details_window_t4_ParamLimits

0xcf21,	// (0x000696b8) popup_image_details_window_t5_ParamLimits

0x0437,	// (0x0005cbce) popup_image_details_window_t_ParamLimits

0x73af,	// (0x00063b46) cl_header_name_pane_ParamLimits

0x73af,	// (0x00063b46) cl_header_name_pane

0x7757,	// (0x00063eee) cl_header_name_pane_t1_ParamLimits

0x7757,	// (0x00063eee) cl_header_name_pane_t1

0x776e,	// (0x00063f05) cl_header_name_pane_t2_ParamLimits

0x776e,	// (0x00063f05) cl_header_name_pane_t2

0x7798,	// (0x00063f2f) cl_header_name_pane_t3_ParamLimits

0x7798,	// (0x00063f2f) cl_header_name_pane_t3

0x0002,

0xf962,	// (0x0006c0f9) cl_header_name_pane_t_ParamLimits

0xf962,	// (0x0006c0f9) cl_header_name_pane_t

0xb49d,	// (0x00067c34) navi_pane_mv_g2_ParamLimits

0xd6a7,	// (0x00069e3e) field_vitu2_entry_pane_g1_ParamLimits

0xd6b3,	// (0x00069e4a) field_vitu2_entry_pane_g2_ParamLimits

0xd6bf,	// (0x00069e56) field_vitu2_entry_pane_g3_ParamLimits

0xd6bf,	// (0x00069e56) field_vitu2_entry_pane_g3

0x0637,	// (0x0005cdce) field_vitu2_entry_pane_g_ParamLimits

0x668c,	// (0x00062e23) cell_vitu2_itu_pane_g1_ParamLimits

0x669e,	// (0x00062e35) cell_vitu2_itu_pane_g2_ParamLimits

0x669e,	// (0x00062e35) cell_vitu2_itu_pane_g2

0x0001,

0xf77d,	// (0x0006bf14) cell_vitu2_itu_pane_g_ParamLimits

0xf77d,	// (0x0006bf14) cell_vitu2_itu_pane_g

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp05_ParamLimits

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp05

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp03

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp04

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp10_ParamLimits

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp10

0x7351,	// (0x00063ae8) bg_vkb2_func_pane_cp08

0x7337,	// (0x00063ace) bg_vkb2_func_pane_cp06

0x7345,	// (0x00063adc) bg_vkb2_func_pane_cp07

0xdbfd,	// (0x0006a394) bg_vkb2_func_pane_cp11_ParamLimits

0xdbfd,	// (0x0006a394) bg_vkb2_func_pane_cp11

0xdc12,	// (0x0006a3a9) bg_vkb2_func_pane_cp12_ParamLimits

0xdc12,	// (0x0006a3a9) bg_vkb2_func_pane_cp12

0x9c9e,	// (0x00066435) bg_vkb2_func_pane_cp09

0xd6df,	// (0x00069e76) bg_vkb2_func_pane_g1

0xace9,	// (0x00067480) bg_vkb2_func_pane_g2

0xd6e7,	// (0x00069e7e) bg_vkb2_func_pane_g3

0xd6ef,	// (0x00069e86) bg_vkb2_func_pane_g4

0xd903,	// (0x0006a09a) bg_vkb2_func_pane_g5

0xd707,	// (0x00069e9e) bg_vkb2_func_pane_g6

0xd70f,	// (0x00069ea6) bg_vkb2_func_pane_g7

0xd6ff,	// (0x00069e96) bg_vkb2_func_pane_g8

0xacc9,	// (0x00067460) bg_vkb2_func_pane_g9

0x0008,

0xf969,	// (0x0006c100) bg_vkb2_func_pane_g

0x76a6,	// (0x00063e3d) blid2_tripm_pane_g6_ParamLimits

0x76a6,	// (0x00063e3d) blid2_tripm_pane_g6

0xd5f9,	// (0x00069d90) mp4_progress_pane_g1

0x7700,	// (0x00063e97) blid2_tripm_values_pane_ParamLimits

0x7700,	// (0x00063e97) blid2_tripm_values_pane

0x77bd,	// (0x00063f54) blid2_tripm_values_pane_t1

0x77cb,	// (0x00063f62) blid2_tripm_values_pane_t2

0x77d9,	// (0x00063f70) blid2_tripm_values_pane_t3

0x77e7,	// (0x00063f7e) blid2_tripm_values_pane_t4

0x77f5,	// (0x00063f8c) blid2_tripm_values_pane_t5

0x7803,	// (0x00063f9a) blid2_tripm_values_pane_t6

0x7811,	// (0x00063fa8) blid2_tripm_values_pane_t7

0x781f,	// (0x00063fb6) blid2_tripm_values_pane_t8

0x782d,	// (0x00063fc4) blid2_tripm_values_pane_t9

0x0008,

0xf97c,	// (0x0006c113) blid2_tripm_values_pane_t

0x1f28,	// (0x0005e6bf) call_video_pane_t1_ParamLimits

0x1f49,	// (0x0005e6e0) call_video_pane_t2_ParamLimits

0xf253,	// (0x0006b9ea) call_video_pane_t_ParamLimits

0x3a33,	// (0x000601ca) msg_header_pane_g1_ParamLimits

0xb677,	// (0x00067e0e) msg_header_pane_g2_ParamLimits

0xb677,	// (0x00067e0e) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0006bc04) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0006bc04) msg_header_pane_g

0xa8c2,	// (0x00067059) main_clock2_pane_ParamLimits

0x5553,	// (0x00061cea) grid_clock2_toolbar_pane_ParamLimits

0x5553,	// (0x00061cea) grid_clock2_toolbar_pane

0x5553,	// (0x00061cea) listscroll_clock2_pane_ParamLimits

0x5553,	// (0x00061cea) listscroll_clock2_pane

0x5603,	// (0x00061d9a) main_clock2_pane_t3_ParamLimits

0x5603,	// (0x00061d9a) main_clock2_pane_t3

0x5615,	// (0x00061dac) main_clock2_pane_t4_ParamLimits

0x5615,	// (0x00061dac) main_clock2_pane_t4

0xdcfd,	// (0x0006a494) cell_clock2_toolbar_pane

0xdd05,	// (0x0006a49c) cell_clock2_toolbar_pane_cp01

0xdd05,	// (0x0006a49c) cell_clock2_toolbar_pane_cp02

0xdd0d,	// (0x0006a4a4) cell_clock2_toolbar_pane_cp03

0xdd15,	// (0x0006a4ac) list_clock2_pane

0xb2b5,	// (0x00067a4c) scroll_pane_cp10

0xdd1d,	// (0x0006a4b4) list_single_clock2_pane_ParamLimits

0xdd1d,	// (0x0006a4b4) list_single_clock2_pane

0xaa87,	// (0x0006721e) list_highlight_pane_cp08

0xdd2a,	// (0x0006a4c1) list_single_clock2_pane_t1

0xdd38,	// (0x0006a4cf) list_single_clock2_pane_t2

0x0001,

0xf98f,	// (0x0006c126) list_single_clock2_pane_t

0x9c9e,	// (0x00066435) bg_button_pane_cp10

0xdd46,	// (0x0006a4dd) cell_clock2_toolbar_pane_g1

0x3a9a,	// (0x00060231) aid_main_viewer_pane_g1_ParamLimits

0x3a9a,	// (0x00060231) aid_main_viewer_pane_g1

0x3aa6,	// (0x0006023d) aid_main_viewer_pane_g2_ParamLimits

0x3aa6,	// (0x0006023d) aid_main_viewer_pane_g2

0x3ab2,	// (0x00060249) aid_main_viewer_pane_g3_ParamLimits

0x3ab2,	// (0x00060249) aid_main_viewer_pane_g3

0x3ac3,	// (0x0006025a) aid_main_viewer_pane_g4_ParamLimits

0x3ac3,	// (0x0006025a) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0006bc15) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0006bc15) aid_main_viewer_pane_g

0x4237,	// (0x000609ce) main_calc_pane_ParamLimits

0x4252,	// (0x000609e9) main_dialer2_pane_ParamLimits

0x1050,	// (0x0005d7e7) main_cam6_pane

0x1050,	// (0x0005d7e7) main_vid6_pane

0x555f,	// (0x00061cf6) listscroll_gen_pane_cp06_ParamLimits

0x555f,	// (0x00061cf6) listscroll_gen_pane_cp06

0x5627,	// (0x00061dbe) main_clock2_pane_t5_ParamLimits

0x5627,	// (0x00061dbe) main_clock2_pane_t5

0x5674,	// (0x00061e0b) aid_call2_pane_cp10_ParamLimits

0x5686,	// (0x00061e1d) aid_call_pane_cp10_ParamLimits

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5698,	// (0x00061e2f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5698,	// (0x00061e2f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb333,	// (0x00067aca) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf689,	// (0x0006be20) popup_clock_analogue_window_cp10_g_ParamLimits

0x56ae,	// (0x00061e45) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ec0,	// (0x00062657) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ec0,	// (0x00062657) cell_dialer2_keypad_pane_g2

0x0001,

0xf717,	// (0x0006beae) cell_dialer2_keypad_pane_g_ParamLimits

0xf717,	// (0x0006beae) cell_dialer2_keypad_pane_g

0x5edc,	// (0x00062673) cell_dialer2_keypad_pane_t1

0x69c3,	// (0x0006315a) main_cset_text2_pane_ParamLimits

0x69c3,	// (0x0006315a) main_cset_text2_pane

0xdb39,	// (0x0006a2d0) area_vitu2_query_pane_g1_ParamLimits

0x72d6,	// (0x00063a6d) area_vitu2_query_pane_g2_ParamLimits

0xf8ac,	// (0x0006c043) area_vitu2_query_pane_g_ParamLimits

0xa3d7,	// (0x00066b6e) area_vitu2_query_pane_t7_ParamLimits

0xa3d7,	// (0x00066b6e) area_vitu2_query_pane_t7

0x7337,	// (0x00063ace) bg_button_pane_cp018_ParamLimits

0x7345,	// (0x00063adc) bg_button_pane_cp021_ParamLimits

0x7351,	// (0x00063ae8) bg_button_pane_cp022_ParamLimits

0x7351,	// (0x00063ae8) bg_vkb2_func_pane_cp08_ParamLimits

0x7337,	// (0x00063ace) bg_vkb2_func_pane_cp06_ParamLimits

0x7345,	// (0x00063adc) bg_vkb2_func_pane_cp07_ParamLimits

0x7362,	// (0x00063af9) input_focus_pane_cp09_ParamLimits

0x783b,	// (0x00063fd2) cam6_autofocus_pane_ParamLimits

0x783b,	// (0x00063fd2) cam6_autofocus_pane

0x785d,	// (0x00063ff4) cam6_image_uncrop_pane_ParamLimits

0x785d,	// (0x00063ff4) cam6_image_uncrop_pane

0x788a,	// (0x00064021) cam6_indi_pane_ParamLimits

0x788a,	// (0x00064021) cam6_indi_pane

0x78a4,	// (0x0006403b) cam6_mode_pane_ParamLimits

0x78a4,	// (0x0006403b) cam6_mode_pane

0x78b8,	// (0x0006404f) cam6_timer_pane_ParamLimits

0x78b8,	// (0x0006404f) cam6_timer_pane

0x78c4,	// (0x0006405b) cam6_zoom_pane_ParamLimits

0x78c4,	// (0x0006405b) cam6_zoom_pane

0x78dc,	// (0x00064073) cam6_mode_pane_g1_ParamLimits

0x78dc,	// (0x00064073) cam6_mode_pane_g1

0x78e8,	// (0x0006407f) cam6_mode_pane_g2_ParamLimits

0x78e8,	// (0x0006407f) cam6_mode_pane_g2

0x78f4,	// (0x0006408b) cam6_mode_pane_g3_ParamLimits

0x78f4,	// (0x0006408b) cam6_mode_pane_g3

0x7900,	// (0x00064097) cam6_mode_pane_g4_ParamLimits

0x7900,	// (0x00064097) cam6_mode_pane_g4

0x0003,

0xf994,	// (0x0006c12b) cam6_mode_pane_g_ParamLimits

0xf994,	// (0x0006c12b) cam6_mode_pane_g

0xdbc7,	// (0x0006a35e) bg_tb_trans_pane_cp08_ParamLimits

0xdbc7,	// (0x0006a35e) bg_tb_trans_pane_cp08

0xdd4e,	// (0x0006a4e5) cam6_battery_pane_ParamLimits

0xdd4e,	// (0x0006a4e5) cam6_battery_pane

0xdd64,	// (0x0006a4fb) cam6_indi_pane_g1_ParamLimits

0xdd64,	// (0x0006a4fb) cam6_indi_pane_g1

0xdd76,	// (0x0006a50d) cam6_indi_pane_g2_ParamLimits

0xdd76,	// (0x0006a50d) cam6_indi_pane_g2

0xdd88,	// (0x0006a51f) cam6_indi_pane_g3_ParamLimits

0xdd88,	// (0x0006a51f) cam6_indi_pane_g3

0x0002,

0x087c,	// (0x0005d013) cam6_indi_pane_g_ParamLimits

0x087c,	// (0x0005d013) cam6_indi_pane_g

0xdd9a,	// (0x0006a531) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x0006a531) cam6_indi_pane_t1

0x6486,	// (0x00062c1d) cam6_autofocus_pane_g1

0x647e,	// (0x00062c15) cam6_autofocus_pane_g2

0x6496,	// (0x00062c2d) cam6_autofocus_pane_g3

0x648e,	// (0x00062c25) cam6_autofocus_pane_g4

0x0003,

0xf99d,	// (0x0006c134) cam6_autofocus_pane_g

0xddc0,	// (0x0006a557) cam6_timer_pane_g1

0xddc8,	// (0x0006a55f) cam6_timer_pane_t1

0xddd6,	// (0x0006a56d) cam6_zoom_cont_pane

0xddde,	// (0x0006a575) cam6_zoom_pane_g1

0xdde6,	// (0x0006a57d) cam6_zoom_pane_g2

0x790c,	// (0x000640a3) cam6_zoom_pane_g3

0x0002,

0xf9a6,	// (0x0006c13d) cam6_zoom_pane_g

0xcd08,	// (0x0006949f) cam6_battery_pane_g1

0xcd08,	// (0x0006949f) cam6_battery_pane_g2

0x0001,

0x03f4,	// (0x0005cb8b) cam6_battery_pane_g

0xddee,	// (0x0006a585) cam6_zoom_cont_pane_g1

0xddf7,	// (0x0006a58e) cam6_zoom_cont_pane_g2

0xde00,	// (0x0006a597) cam6_zoom_cont_pane_g3

0x0002,

0x0893,	// (0x0005d02a) cam6_zoom_cont_pane_g

0x7929,	// (0x000640c0) cam6_mode_pane_cp_ParamLimits

0x7929,	// (0x000640c0) cam6_mode_pane_cp

0x793d,	// (0x000640d4) cam6_zoom_pane_cp_ParamLimits

0x793d,	// (0x000640d4) cam6_zoom_pane_cp

0x7955,	// (0x000640ec) vid6_image_uncrop_cif_pane_ParamLimits

0x7955,	// (0x000640ec) vid6_image_uncrop_cif_pane

0x7981,	// (0x00064118) vid6_image_uncrop_nhd_pane_ParamLimits

0x7981,	// (0x00064118) vid6_image_uncrop_nhd_pane

0x799e,	// (0x00064135) vid6_image_uncrop_vga_pane_ParamLimits

0x799e,	// (0x00064135) vid6_image_uncrop_vga_pane

0x79bd,	// (0x00064154) vid6_image_uncrop_wvga_pane_ParamLimits

0x79bd,	// (0x00064154) vid6_image_uncrop_wvga_pane

0x79da,	// (0x00064171) vid6_indi_pane_ParamLimits

0x79da,	// (0x00064171) vid6_indi_pane

0xdbc7,	// (0x0006a35e) bg_tb_trans_pane_cp09_ParamLimits

0xdbc7,	// (0x0006a35e) bg_tb_trans_pane_cp09

0xde18,	// (0x0006a5af) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x0006a5af) cam6_battery_pane_cp

0xde24,	// (0x0006a5bb) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x0006a5bb) vid6_indi_pane_g1

0xde36,	// (0x0006a5cd) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x0006a5cd) vid6_indi_pane_g2

0xde48,	// (0x0006a5df) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x0006a5df) vid6_indi_pane_g3

0xde5d,	// (0x0006a5f4) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x0006a5f4) vid6_indi_pane_g4

0xde72,	// (0x0006a609) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x0006a609) vid6_indi_pane_g5

0x0004,

0x089a,	// (0x0005d031) vid6_indi_pane_g_ParamLimits

0x089a,	// (0x0005d031) vid6_indi_pane_g

0xde8c,	// (0x0006a623) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x0006a623) vid6_indi_pane_t1

0xdea2,	// (0x0006a639) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x0006a639) vid6_indi_pane_t2

0xdeca,	// (0x0006a661) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x0006a661) vid6_indi_pane_t3

0xdef2,	// (0x0006a689) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x0006a689) vid6_indi_pane_t4

0x0003,

0x08a5,	// (0x0005d03c) vid6_indi_pane_t_ParamLimits

0x08a5,	// (0x0005d03c) vid6_indi_pane_t

0xdf16,	// (0x0006a6ad) wait_bar_pane_cp08

0x79ff,	// (0x00064196) main_cset_text2_pane_t1_ParamLimits

0x79ff,	// (0x00064196) main_cset_text2_pane_t1

0x7914,	// (0x000640ab) listscroll_gen_pane_cp06_t1_ParamLimits

0x7914,	// (0x000640ab) listscroll_gen_pane_cp06_t1

0x1050,	// (0x0005d7e7) main_cam6_set_pane

0x6318,	// (0x00062aaf) bg_tb_trans_pane_cp06_ParamLimits

0x632e,	// (0x00062ac5) cam4_indicators_pane_g1_ParamLimits

0x633f,	// (0x00062ad6) cam4_indicators_pane_g2_ParamLimits

0xf754,	// (0x0006beeb) cam4_indicators_pane_g_ParamLimits

0x635d,	// (0x00062af4) cam4_indicators_pane_t1_ParamLimits

0x4244,	// (0x000609db) bg_tb_trans_pane_cp07_ParamLimits

0x6410,	// (0x00062ba7) vid4_indicators_pane_g1_ParamLimits

0x6424,	// (0x00062bbb) vid4_indicators_pane_g2_ParamLimits

0x6438,	// (0x00062bcf) vid4_indicators_pane_g3_ParamLimits

0x6449,	// (0x00062be0) vid4_indicators_pane_g4_ParamLimits

0xf766,	// (0x0006befd) vid4_indicators_pane_g_ParamLimits

0x6467,	// (0x00062bfe) vid4_indicators_pane_t1_ParamLimits

0x7493,	// (0x00063c2a) vid4_progress_pane_g1_ParamLimits

0x74a3,	// (0x00063c3a) vid4_progress_pane_g2_ParamLimits

0x74b3,	// (0x00063c4a) vid4_progress_pane_g3_ParamLimits

0x74c5,	// (0x00063c5c) vid4_progress_pane_g4_ParamLimits

0xf8f7,	// (0x0006c08e) vid4_progress_pane_g_ParamLimits

0x74dd,	// (0x00063c74) vid4_progress_pane_t1_ParamLimits

0x74f3,	// (0x00063c8a) vid4_progress_pane_t2_ParamLimits

0x7508,	// (0x00063c9f) vid4_progress_pane_t3_ParamLimits

0xf902,	// (0x0006c099) vid4_progress_pane_t_ParamLimits

0x751d,	// (0x00063cb4) wait_bar_pane_cp07_ParamLimits

0x7a32,	// (0x000641c9) main_cam6_set_pane_g2_ParamLimits

0x7a32,	// (0x000641c9) main_cam6_set_pane_g2

0x7a3e,	// (0x000641d5) main_cset6_listscroll_pane_ParamLimits

0x7a3e,	// (0x000641d5) main_cset6_listscroll_pane

0x7a69,	// (0x00064200) main_cset6_slider_pane_ParamLimits

0x7a69,	// (0x00064200) main_cset6_slider_pane

0x7a75,	// (0x0006420c) main_cset6_text2_pane_ParamLimits

0x7a75,	// (0x0006420c) main_cset6_text2_pane

0xdf25,	// (0x0006a6bc) main_cset6_text_pane

0xdf2d,	// (0x0006a6c4) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x0006a6c4) main_cset_list_pane_copy1

0xdf3d,	// (0x0006a6d4) scroll_pane_cp028_copy1

0x7a88,	// (0x0006421f) cset_list_set_pane_copy1

0x7a9b,	// (0x00064232) aid_position_infowindow_above_copy1

0x7aa3,	// (0x0006423a) aid_position_infowindow_below_copy1

0x7aab,	// (0x00064242) cset_list_set_pane_g1_copy1

0xa33b,	// (0x00066ad2) cset_list_set_pane_g3_copy1_ParamLimits

0xa33b,	// (0x00066ad2) cset_list_set_pane_g3_copy1

0xa34a,	// (0x00066ae1) cset_list_set_pane_t1_copy1_ParamLimits

0xa34a,	// (0x00066ae1) cset_list_set_pane_t1_copy1

0xa74e,	// (0x00066ee5) list_highlight_pane_cp021_copy1_ParamLimits

0xa74e,	// (0x00066ee5) list_highlight_pane_cp021_copy1

0xdf46,	// (0x0006a6dd) cset6_slider_pane_ParamLimits

0xdf46,	// (0x0006a6dd) cset6_slider_pane

0xdf72,	// (0x0006a709) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x0006a709) main_cset6_slider_pane_g1

0x7ab3,	// (0x0006424a) main_cset6_slider_pane_g2_ParamLimits

0x7ab3,	// (0x0006424a) main_cset6_slider_pane_g2

0xdf9a,	// (0x0006a731) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x0006a731) main_cset6_slider_pane_g3

0x7adb,	// (0x00064272) main_cset6_slider_pane_g4_ParamLimits

0x7adb,	// (0x00064272) main_cset6_slider_pane_g4

0x7ae7,	// (0x0006427e) main_cset6_slider_pane_g5_ParamLimits

0x7ae7,	// (0x0006427e) main_cset6_slider_pane_g5

0xd80e,	// (0x00069fa5) main_cset6_slider_pane_g7_ParamLimits

0xd80e,	// (0x00069fa5) main_cset6_slider_pane_g7

0xd81a,	// (0x00069fb1) main_cset6_slider_pane_g8_ParamLimits

0xd81a,	// (0x00069fb1) main_cset6_slider_pane_g8

0x7af5,	// (0x0006428c) main_cset6_slider_pane_g9_ParamLimits

0x7af5,	// (0x0006428c) main_cset6_slider_pane_g9

0x7b01,	// (0x00064298) main_cset6_slider_pane_g10_ParamLimits

0x7b01,	// (0x00064298) main_cset6_slider_pane_g10

0x7b0d,	// (0x000642a4) main_cset6_slider_pane_g11_ParamLimits

0x7b0d,	// (0x000642a4) main_cset6_slider_pane_g11

0x7b19,	// (0x000642b0) main_cset6_slider_pane_g12_ParamLimits

0x7b19,	// (0x000642b0) main_cset6_slider_pane_g12

0x7b25,	// (0x000642bc) main_cset6_slider_pane_g13_ParamLimits

0x7b25,	// (0x000642bc) main_cset6_slider_pane_g13

0x7b31,	// (0x000642c8) main_cset6_slider_pane_g14_ParamLimits

0x7b31,	// (0x000642c8) main_cset6_slider_pane_g14

0x7b3d,	// (0x000642d4) main_cset6_slider_pane_g15_ParamLimits

0x7b3d,	// (0x000642d4) main_cset6_slider_pane_g15

0x7b55,	// (0x000642ec) main_cset6_slider_pane_g16_ParamLimits

0x7b55,	// (0x000642ec) main_cset6_slider_pane_g16

0x7b63,	// (0x000642fa) main_cset6_slider_pane_g17_ParamLimits

0x7b63,	// (0x000642fa) main_cset6_slider_pane_g17

0x0011,

0xf9ad,	// (0x0006c144) main_cset6_slider_pane_g_ParamLimits

0xf9ad,	// (0x0006c144) main_cset6_slider_pane_g

0xdfa6,	// (0x0006a73d) main_cset6_slider_pane_t1_ParamLimits

0xdfa6,	// (0x0006a73d) main_cset6_slider_pane_t1

0x7b89,	// (0x00064320) main_cset6_slider_pane_t2_ParamLimits

0x7b89,	// (0x00064320) main_cset6_slider_pane_t2

0x7bb4,	// (0x0006434b) main_cset6_slider_pane_t3_ParamLimits

0x7bb4,	// (0x0006434b) main_cset6_slider_pane_t3

0x7bdf,	// (0x00064376) main_cset6_slider_pane_t4_ParamLimits

0x7bdf,	// (0x00064376) main_cset6_slider_pane_t4

0x7c0a,	// (0x000643a1) main_cset6_slider_pane_t5_ParamLimits

0x7c0a,	// (0x000643a1) main_cset6_slider_pane_t5

0xdfe7,	// (0x0006a77e) main_cset6_slider_pane_t7_ParamLimits

0xdfe7,	// (0x0006a77e) main_cset6_slider_pane_t7

0x7c37,	// (0x000643ce) main_cset6_slider_pane_t8_ParamLimits

0x7c37,	// (0x000643ce) main_cset6_slider_pane_t8

0x7c5b,	// (0x000643f2) main_cset6_slider_pane_t9_ParamLimits

0x7c5b,	// (0x000643f2) main_cset6_slider_pane_t9

0x7c7f,	// (0x00064416) main_cset6_slider_pane_t10_ParamLimits

0x7c7f,	// (0x00064416) main_cset6_slider_pane_t10

0x7ca3,	// (0x0006443a) main_cset6_slider_pane_t11_ParamLimits

0x7ca3,	// (0x0006443a) main_cset6_slider_pane_t11

0xe034,	// (0x0006a7cb) main_cset6_slider_pane_t14_ParamLimits

0xe034,	// (0x0006a7cb) main_cset6_slider_pane_t14

0xe06d,	// (0x0006a804) main_cset6_slider_pane_t15_ParamLimits

0xe06d,	// (0x0006a804) main_cset6_slider_pane_t15

0x000b,

0xf9d2,	// (0x0006c169) main_cset6_slider_pane_t_ParamLimits

0xf9d2,	// (0x0006c169) main_cset6_slider_pane_t

0xd96e,	// (0x0006a105) cset_slider_pane_g1_copy1

0xd977,	// (0x0006a10e) cset_slider_pane_g2_copy1

0xd980,	// (0x0006a117) cset_slider_pane_g3_copy1

0x9c9e,	// (0x00066435) bg_popup_sub_pane_cp011_copy1

0xe0a6,	// (0x0006a83d) main_cset_text_pane_g1_copy1

0xd952,	// (0x0006a0e9) main_cset_text_pane_t1_copy1

0xd960,	// (0x0006a0f7) main_cset_text_pane_t2_copy1

0xd989,	// (0x0006a120) main_cset_text_pane_t3_copy1

0xd997,	// (0x0006a12e) main_cset_text_pane_t4_copy1

0xd9a5,	// (0x0006a13c) main_cset_text_pane_t5_copy1

0xe0ae,	// (0x0006a845) main_cset_text_pane_t6_copy1

0xe0bc,	// (0x0006a853) main_cset_text_pane_t7_copy1

0x7d9f,	// (0x00064536) main_cset_text2_pane_t1_copy1

0x4244,	// (0x000609db) main_ncimui_pane

0x42a3,	// (0x00060a3a) popup_query_ncimui_window_ParamLimits

0x42a3,	// (0x00060a3a) popup_query_ncimui_window

0xa306,	// (0x00066a9d) field_cale_ev2_pane_g4_ParamLimits

0xa306,	// (0x00066a9d) field_cale_ev2_pane_g4

0x5ba0,	// (0x00062337) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ba0,	// (0x00062337) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6f3,	// (0x0006be8a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6f3,	// (0x0006be8a) cell_video_dialer_keypad_pane_g

0x5bb8,	// (0x0006234f) cell_video_dialer_keypad_pane_t1

0x9c9e,	// (0x00066435) bg_popup_window_pane_cp012

0xb182,	// (0x00067919) heading_pane_cp06

0xe0e8,	// (0x0006a87f) ncim_query_content_pane

0x9c9e,	// (0x00066435) bg_popup_heading_pane_cp01

0xe0f0,	// (0x0006a887) ncim_heading_pane_t1

0xe0fe,	// (0x0006a895) ncim_indicator_popup_pane

0xe110,	// (0x0006a8a7) ncim_query_button_pane

0xe124,	// (0x0006a8bb) ncim_query_content_pane_t1

0xe136,	// (0x0006a8cd) ncim_query_content_pane_t2

0x0005,

0xfa16,	// (0x0006c1ad) ncim_query_content_pane_t

0xe170,	// (0x0006a907) ncim_query_list_pane

0xe182,	// (0x0006a919) ncim_query_popup_pane

0xe0fe,	// (0x0006a895) ncim_indicator_popup_pane_ParamLimits

0x7ef2,	// (0x00064689) ncim_query_content_pane_g1_ParamLimits

0x7ef2,	// (0x00064689) ncim_query_content_pane_g1

0xe124,	// (0x0006a8bb) ncim_query_content_pane_t1_ParamLimits

0xe136,	// (0x0006a8cd) ncim_query_content_pane_t2_ParamLimits

0x7efe,	// (0x00064695) ncim_query_content_pane_t3_ParamLimits

0x7efe,	// (0x00064695) ncim_query_content_pane_t3

0x7f1b,	// (0x000646b2) ncim_query_content_pane_t4_ParamLimits

0x7f1b,	// (0x000646b2) ncim_query_content_pane_t4

0x7f38,	// (0x000646cf) ncim_query_content_pane_t5_ParamLimits

0x7f38,	// (0x000646cf) ncim_query_content_pane_t5

0xe148,	// (0x0006a8df) ncim_query_content_pane_t6_ParamLimits

0xe148,	// (0x0006a8df) ncim_query_content_pane_t6

0xfa16,	// (0x0006c1ad) ncim_query_content_pane_t_ParamLimits

0xe170,	// (0x0006a907) ncim_query_list_pane_ParamLimits

0xe182,	// (0x0006a919) ncim_query_popup_pane_ParamLimits

0xe196,	// (0x0006a92d) wait_bar_pane_cp04

0x9c9e,	// (0x00066435) input_focus_pane_cp011

0xe19e,	// (0x0006a935) ncim_query_popup_pane_t1

0xe1ac,	// (0x0006a943) ncim_list_query_list_pane_ParamLimits

0xe1ac,	// (0x0006a943) ncim_list_query_list_pane

0x9c9e,	// (0x00066435) bg_button_pane_cp027

0xe1b9,	// (0x0006a950) ncim_query_button_pane_g1

0x9c9e,	// (0x00066435) list_highlight_pane_cp012

0xe1c3,	// (0x0006a95a) ncim_list_query_list_pane_g1

0xe1cb,	// (0x0006a962) ncim_list_query_list_pane_t1

0x634e,	// (0x00062ae5) cam4_indicators_pane_g3_ParamLimits

0x634e,	// (0x00062ae5) cam4_indicators_pane_g3

0x6455,	// (0x00062bec) vid4_indicators_pane_g5_ParamLimits

0x6455,	// (0x00062bec) vid4_indicators_pane_g5

0x74d1,	// (0x00063c68) vid4_progress_pane_g5_ParamLimits

0x74d1,	// (0x00063c68) vid4_progress_pane_g5

0x7dde,	// (0x00064575) main_ncimui_pane_g1

0x7e46,	// (0x000645dd) ncimui_group_query_pane_ParamLimits

0x7e46,	// (0x000645dd) ncimui_group_query_pane

0x7e8e,	// (0x00064625) ncimui_list_pane_ParamLimits

0x7e8e,	// (0x00064625) ncimui_list_pane

0x7eb5,	// (0x0006464c) ncimui_text_pane_ParamLimits

0x7eb5,	// (0x0006464c) ncimui_text_pane

0x7f55,	// (0x000646ec) ncimui_text_pane_t1_ParamLimits

0x7f55,	// (0x000646ec) ncimui_text_pane_t1

0xe1d9,	// (0x0006a970) ncimui_list_single_graphic_pane_ParamLimits

0xe1d9,	// (0x0006a970) ncimui_list_single_graphic_pane

0x7f74,	// (0x0006470b) ncimui_query_pane_ParamLimits

0x7f74,	// (0x0006470b) ncimui_query_pane

0x9c9e,	// (0x00066435) list_highlight_pane_cp013

0xe1e9,	// (0x0006a980) ncim_list_query_list_pane_t1_copy1

0xe1c3,	// (0x0006a95a) ncim_list_single_graphic_pane_g1

0x7f87,	// (0x0006471e) ncim_query_button_pane_cp01

0x7f93,	// (0x0006472a) ncim_query_entry_pane_ParamLimits

0x7f93,	// (0x0006472a) ncim_query_entry_pane

0x7fa6,	// (0x0006473d) ncimui_query_pane_g1

0x7fb2,	// (0x00064749) ncimui_query_pane_t1_ParamLimits

0x7fb2,	// (0x00064749) ncimui_query_pane_t1

0xa74e,	// (0x00066ee5) input_focus_pane_cp012

0xe1f7,	// (0x0006a98e) ncim_query_entry_pane_t1

0xa8c2,	// (0x00067059) main_im_pane_ParamLimits

0x4244,	// (0x000609db) main_mobtv_pane_ParamLimits

0x4244,	// (0x000609db) main_mobtv_pane

0x7b71,	// (0x00064308) main_cset6_slider_pane_g18_ParamLimits

0x7b71,	// (0x00064308) main_cset6_slider_pane_g18

0x7b7d,	// (0x00064314) main_cset6_slider_pane_g19_ParamLimits

0x7b7d,	// (0x00064314) main_cset6_slider_pane_g19

0xd6bf,	// (0x00069e56) bg_main_mobtv_pane_ParamLimits

0xd6bf,	// (0x00069e56) bg_main_mobtv_pane

0x7fcb,	// (0x00064762) main_mobtv_info_pane

0x7fd6,	// (0x0006476d) main_mobtv_loading_pane_ParamLimits

0x7fd6,	// (0x0006476d) main_mobtv_loading_pane

0xe209,	// (0x0006a9a0) main_mobtv_pg_channel_list_pane

0xe213,	// (0x0006a9aa) main_mobtv_pg_hdr_pane

0x7fe3,	// (0x0006477a) main_mobtv_programe_curr_pane_ParamLimits

0x7fe3,	// (0x0006477a) main_mobtv_programe_curr_pane

0x7ff0,	// (0x00064787) main_mobtv_programe_next_pane_ParamLimits

0x7ff0,	// (0x00064787) main_mobtv_programe_next_pane

0xe21c,	// (0x0006a9b3) popup_mobtv_noti_window

0xcd08,	// (0x0006949f) main_tv_pg_hdr_pane_g1

0xe224,	// (0x0006a9bb) main_tv_pg_hdr_pane_g2

0xe23e,	// (0x0006a9d5) main_tv_pg_hdr_pane_g3

0xe246,	// (0x0006a9dd) main_tv_pg_hdr_pane_g4

0xe24e,	// (0x0006a9e5) main_tv_pg_hdr_pane_g5

0xe258,	// (0x0006a9ef) main_tv_pg_hdr_pane_g6

0xe262,	// (0x0006a9f9) main_tv_pg_hdr_pane_g7

0xe26c,	// (0x0006aa03) main_tv_pg_hdr_pane_g8

0xe276,	// (0x0006aa0d) main_tv_pg_hdr_pane_g9

0xe280,	// (0x0006aa17) main_tv_pg_hdr_pane_g10

0xe28a,	// (0x0006aa21) main_tv_pg_hdr_pane_g11

0x000a,

0xfa23,	// (0x0006c1ba) main_tv_pg_hdr_pane_g

0xe294,	// (0x0006aa2b) main_tv_pg_hdr_pane_t1

0xe2a2,	// (0x0006aa39) main_tv_pg_hdr_pane_t2

0xe2b0,	// (0x0006aa47) main_tv_pg_hdr_pane_t3

0xe2c0,	// (0x0006aa57) main_tv_pg_hdr_pane_t4

0xe2d0,	// (0x0006aa67) main_tv_pg_hdr_pane_t5

0x0004,

0x093b,	// (0x0005d0d2) main_tv_pg_hdr_pane_t

0xe2e0,	// (0x0006aa77) single_mobtv_pg_channel_pane_ParamLimits

0xe2e0,	// (0x0006aa77) single_mobtv_pg_channel_pane

0xe2f2,	// (0x0006aa89) single_mobtv_pg_channel_table_pane

0xe2fb,	// (0x0006aa92) single_mobtv_pg_channel_thumb_pane

0xe304,	// (0x0006aa9b) single_tv_pg_channel_pane_g1

0xe30d,	// (0x0006aaa4) single_tv_pg_channel_pane_g2

0x0001,

0x0946,	// (0x0005d0dd) single_tv_pg_channel_pane_g

0xcf6b,	// (0x00069702) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf6b,	// (0x00069702) bg_single_mobtv_pg_channel_thumb_pane

0xe316,	// (0x0006aaad) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe316,	// (0x0006aaad) single_mobtv_pg_channel_thumb_pane_g1

0xe324,	// (0x0006aabb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe324,	// (0x0006aabb) single_mobtv_pg_channel_thumb_pane_g2

0xe330,	// (0x0006aac7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe330,	// (0x0006aac7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x094b,	// (0x0005d0e2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x094b,	// (0x0005d0e2) single_mobtv_pg_channel_thumb_pane_g

0xe33c,	// (0x0006aad3) single_mobtv_pg_channel_thumb_pane_t1

0xe34a,	// (0x0006aae1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0952,	// (0x0005d0e9) single_mobtv_pg_channel_thumb_pane_t

0xcd08,	// (0x0006949f) bg_single_mobtv_pg_channel_table_pane_g1

0xcd08,	// (0x0006949f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x03f4,	// (0x0005cb8b) bg_single_mobtv_pg_channel_table_pane_g

0xe358,	// (0x0006aaef) single_mobtv_pg_channel_table_pane_t1

0xe366,	// (0x0006aafd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0957,	// (0x0005d0ee) single_mobtv_pg_channel_table_pane_t

0x8005,	// (0x0006479c) main_mobtv_info_pane_g1_ParamLimits

0x8005,	// (0x0006479c) main_mobtv_info_pane_g1

0x8021,	// (0x000647b8) main_mobtv_info_pane_t1_ParamLimits

0x8021,	// (0x000647b8) main_mobtv_info_pane_t1

0x8099,	// (0x00064830) main_mobtv_info_pane_t2_ParamLimits

0x8099,	// (0x00064830) main_mobtv_info_pane_t2

0x0002,

0xfa3f,	// (0x0006c1d6) main_mobtv_info_pane_t_ParamLimits

0xfa3f,	// (0x0006c1d6) main_mobtv_info_pane_t

0x8128,	// (0x000648bf) wait_bar_pane_cp05

0x813a,	// (0x000648d1) main_mobtv_loading_pane_g1_ParamLimits

0x813a,	// (0x000648d1) main_mobtv_loading_pane_g1

0x8148,	// (0x000648df) main_mobtv_loading_pane_g2_ParamLimits

0x8148,	// (0x000648df) main_mobtv_loading_pane_g2

0x8154,	// (0x000648eb) main_mobtv_loading_pane_g3_ParamLimits

0x8154,	// (0x000648eb) main_mobtv_loading_pane_g3

0x0002,

0xfa46,	// (0x0006c1dd) main_mobtv_loading_pane_g_ParamLimits

0xfa46,	// (0x0006c1dd) main_mobtv_loading_pane_g

0xe374,	// (0x0006ab0b) main_mobtv_loading_pane_t1_ParamLimits

0xe374,	// (0x0006ab0b) main_mobtv_loading_pane_t1

0xe38c,	// (0x0006ab23) main_mobtv_loading_pane_t2_ParamLimits

0xe38c,	// (0x0006ab23) main_mobtv_loading_pane_t2

0x0001,

0x096f,	// (0x0005d106) main_mobtv_loading_pane_t_ParamLimits

0x096f,	// (0x0005d106) main_mobtv_loading_pane_t

0x8162,	// (0x000648f9) wait_bar_pane_cp06_ParamLimits

0x8162,	// (0x000648f9) wait_bar_pane_cp06

0xe3b0,	// (0x0006ab47) main_mobtv_programe_curr_pane_t1

0xe3be,	// (0x0006ab55) main_mobtv_programe_curr_pane_t2

0x0001,

0x0974,	// (0x0005d10b) main_mobtv_programe_curr_pane_t

0xe3cc,	// (0x0006ab63) main_mobtv_programe_next_pane_t1

0xe3da,	// (0x0006ab71) main_mobtv_programe_next_pane_t2

0xe3e8,	// (0x0006ab7f) main_mobtv_programe_next_pane_t3

0x0002,

0x0979,	// (0x0005d110) main_mobtv_programe_next_pane_t

0x9c9e,	// (0x00066435) bg_popup_mobtv_noti_window_pane

0xe3f6,	// (0x0006ab8d) popup_mobtv_noti_window_g1

0xe3fe,	// (0x0006ab95) popup_mobtv_noti_window_t1

0xe40c,	// (0x0006aba3) popup_mobtv_noti_window_t2

0x0001,

0x0980,	// (0x0005d117) popup_mobtv_noti_window_t

0xcd08,	// (0x0006949f) bg_popup_mobtv_noti_window_pane_g1

0x1050,	// (0x0005d7e7) sc_clock_pane

0x1050,	// (0x0005d7e7) main_fs_bigclock_pane

0x76ee,	// (0x00063e85) blid2_tripm_pane_t4_ParamLimits

0x76ee,	// (0x00063e85) blid2_tripm_pane_t4

0x816e,	// (0x00064905) sc_clock_pane_g1_ParamLimits

0x816e,	// (0x00064905) sc_clock_pane_g1

0x817c,	// (0x00064913) sc_clock_pane_t1_ParamLimits

0x817c,	// (0x00064913) sc_clock_pane_t1

0x818f,	// (0x00064926) sc_clock_pane_t2_ParamLimits

0x818f,	// (0x00064926) sc_clock_pane_t2

0x81a1,	// (0x00064938) sc_clock_pane_t3_ParamLimits

0x81a1,	// (0x00064938) sc_clock_pane_t3

0x0004,

0xfa4d,	// (0x0006c1e4) sc_clock_pane_t_ParamLimits

0xfa4d,	// (0x0006c1e4) sc_clock_pane_t

0x9150,	// (0x000658e7) main_fs_bigclock_indicator_pane_ParamLimits

0x9150,	// (0x000658e7) main_fs_bigclock_indicator_pane

0x8224,	// (0x000649bb) main_fs_bigclock_pane_g1_ParamLimits

0x8224,	// (0x000649bb) main_fs_bigclock_pane_g1

0x915c,	// (0x000658f3) main_fs_bigclock_pane_t1_ParamLimits

0x915c,	// (0x000658f3) main_fs_bigclock_pane_t1

0x916e,	// (0x00065905) main_fs_bigclock_pane_t2_ParamLimits

0x916e,	// (0x00065905) main_fs_bigclock_pane_t2

0x9182,	// (0x00065919) main_fs_bigclock_pane_t3_ParamLimits

0x9182,	// (0x00065919) main_fs_bigclock_pane_t3

0x0002,

0xfbe7,	// (0x0006c37e) main_fs_bigclock_pane_t_ParamLimits

0xfbe7,	// (0x0006c37e) main_fs_bigclock_pane_t

0xec46,	// (0x0006b3dd) main_fs_bigclock_indicator_pane_g1

0xe118,	// (0x0006a8af) ncim_query_content_pane_g2_ParamLimits

0xe118,	// (0x0006a8af) ncim_query_content_pane_g2

0x0001,

0xfa11,	// (0x0006c1a8) ncim_query_content_pane_g_ParamLimits

0xfa11,	// (0x0006c1a8) ncim_query_content_pane_g

0x81b5,	// (0x0006494c) sc_clock_pane_t4_ParamLimits

0x81b5,	// (0x0006494c) sc_clock_pane_t4

0x4244,	// (0x000609db) main_radioblah_pane

0x61e3,	// (0x0006297a) cell_call4_button_pane_t1_copy1_ParamLimits

0x61e3,	// (0x0006297a) cell_call4_button_pane_t1_copy1

0x7df8,	// (0x0006458f) main_ncimui_pane_t1_ParamLimits

0x7df8,	// (0x0006458f) main_ncimui_pane_t1

0x7e12,	// (0x000645a9) main_ncimui_pane_t2_ParamLimits

0x7e12,	// (0x000645a9) main_ncimui_pane_t2

0x0002,

0xfa0a,	// (0x0006c1a1) main_ncimui_pane_t_ParamLimits

0xfa0a,	// (0x0006c1a1) main_ncimui_pane_t

0xe551,	// (0x0006ace8) main_radioblah_anim_pane_ParamLimits

0xe551,	// (0x0006ace8) main_radioblah_anim_pane

0xe562,	// (0x0006acf9) main_radioblah_info_pane_ParamLimits

0xe562,	// (0x0006acf9) main_radioblah_info_pane

0xe576,	// (0x0006ad0d) main_radioblah_pane_t1_ParamLimits

0xe576,	// (0x0006ad0d) main_radioblah_pane_t1

0xe592,	// (0x0006ad29) main_radioblah_pane_t2_ParamLimits

0xe592,	// (0x0006ad29) main_radioblah_pane_t2

0x0003,

0x09a6,	// (0x0005d13d) main_radioblah_pane_t_ParamLimits

0x09a6,	// (0x0005d13d) main_radioblah_pane_t

0x827a,	// (0x00064a11) main_radioblah_rocker_ctrl_pane_ParamLimits

0x827a,	// (0x00064a11) main_radioblah_rocker_ctrl_pane

0xe5da,	// (0x0006ad71) main_radioblah_info_pane_t1_ParamLimits

0xe5da,	// (0x0006ad71) main_radioblah_info_pane_t1

0x82bf,	// (0x00064a56) main_radioblah_info_pane_t2_ParamLimits

0x82bf,	// (0x00064a56) main_radioblah_info_pane_t2

0x0003,

0xfa58,	// (0x0006c1ef) main_radioblah_info_pane_t_ParamLimits

0xfa58,	// (0x0006c1ef) main_radioblah_info_pane_t

0xcd08,	// (0x0006949f) main_radioblah_rocker_ctrl_pane_g1

0x836f,	// (0x00064b06) main_radioblah_rocker_ctrl_pane_g2

0x8377,	// (0x00064b0e) main_radioblah_rocker_ctrl_pane_g3

0x837f,	// (0x00064b16) main_radioblah_rocker_ctrl_pane_g4

0x8387,	// (0x00064b1e) main_radioblah_rocker_ctrl_pane_g5

0x838f,	// (0x00064b26) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa61,	// (0x0006c1f8) main_radioblah_rocker_ctrl_pane_g

0x7d9f,	// (0x00064536) main_cset_text2_pane_t1_copy1_ParamLimits

0x626e,	// (0x00062a05) cam4_image_uncrop_qvga_pane

0x63c3,	// (0x00062b5a) vid4_image_uncrop_qcif_pane

0x787c,	// (0x00064013) cam6_image_uncrop_qvga_pane_ParamLimits

0x787c,	// (0x00064013) cam6_image_uncrop_qvga_pane

0xde08,	// (0x0006a59f) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x0006a59f) vid6_image_uncrop_qcif_pane

0x9c9e,	// (0x00066435) bg_popup_preview_window_pane_cp03

0xe0ca,	// (0x0006a861) list_cset_text2_pane

0xe0d2,	// (0x0006a869) main_cset6_text2_pane_g1

0xe0da,	// (0x0006a871) main_cset6_text2_pane_t1

0x8397,	// (0x00064b2e) list_cset_text2_pane_t1_ParamLimits

0x8397,	// (0x00064b2e) list_cset_text2_pane_t1

0x4244,	// (0x000609db) main_radioblah_pane_ParamLimits

0x8114,	// (0x000648ab) main_mobtv_info_pane_t3_ParamLimits

0x8114,	// (0x000648ab) main_mobtv_info_pane_t3

0x8268,	// (0x000649ff) main_radioblah_pane_g1

0x8293,	// (0x00064a2a) main_radioblah_info_pane_g1

0x8314,	// (0x00064aab) main_radioblah_info_pane_t3_ParamLimits

0x8314,	// (0x00064aab) main_radioblah_info_pane_t3

0x2f49,	// (0x0005f6e0) highlight_cell_cale_month_pane_ParamLimits

0x2f49,	// (0x0005f6e0) highlight_cell_cale_month_pane

0x1050,	// (0x0005d7e7) main_phob_fisheye_pane

0xd067,	// (0x000697fe) scroll_pane_cp0031_ParamLimits

0xd067,	// (0x000697fe) scroll_pane_cp0031

0xdf16,	// (0x0006a6ad) wait_bar_pane_cp08_ParamLimits

0x7a88,	// (0x0006421f) cset_list_set_pane_copy1_ParamLimits

0xe614,	// (0x0006adab) highlight_cell_cale_month_pane_g1

0x83b4,	// (0x00064b4b) highlight_cell_cale_month_pane_t1

0xdb8d,	// (0x0006a324) list_gen_pane_cp01

0xd7f9,	// (0x00069f90) scroll_pane_01

0x83c2,	// (0x00064b59) list_single_double_fisheye_pane

0x83cb,	// (0x00064b62) list_double_fisheye_pane_g1_ParamLimits

0x83cb,	// (0x00064b62) list_double_fisheye_pane_g1

0x83d7,	// (0x00064b6e) list_double_fisheye_pane_g2_ParamLimits

0x83d7,	// (0x00064b6e) list_double_fisheye_pane_g2

0x83eb,	// (0x00064b82) list_double_fisheye_pane_g3_ParamLimits

0x83eb,	// (0x00064b82) list_double_fisheye_pane_g3

0x0004,

0xfa6e,	// (0x0006c205) list_double_fisheye_pane_g_ParamLimits

0xfa6e,	// (0x0006c205) list_double_fisheye_pane_g

0x8414,	// (0x00064bab) list_double_fisheye_pane_t1_ParamLimits

0x8414,	// (0x00064bab) list_double_fisheye_pane_t1

0x842f,	// (0x00064bc6) list_double_fisheye_pane_t2_ParamLimits

0x842f,	// (0x00064bc6) list_double_fisheye_pane_t2

0x0001,

0xfa79,	// (0x0006c210) list_double_fisheye_pane_t_ParamLimits

0xfa79,	// (0x0006c210) list_double_fisheye_pane_t

0x1050,	// (0x0005d7e7) main_call5_pane

0x81db,	// (0x00064972) sc_swipe_pane_ParamLimits

0x81db,	// (0x00064972) sc_swipe_pane

0x845d,	// (0x00064bf4) call5_image_pane_ParamLimits

0x845d,	// (0x00064bf4) call5_image_pane

0x846d,	// (0x00064c04) call5_swipe_1_pane_ParamLimits

0x846d,	// (0x00064c04) call5_swipe_1_pane

0x8479,	// (0x00064c10) call5_swipe_2_pane_ParamLimits

0x8479,	// (0x00064c10) call5_swipe_2_pane

0x8493,	// (0x00064c2a) popup_call5_audio_first_window_ParamLimits

0x8493,	// (0x00064c2a) popup_call5_audio_first_window

0xcf6b,	// (0x00069702) call5_swipe_1_pane_g1_ParamLimits

0xcf6b,	// (0x00069702) call5_swipe_1_pane_g1

0xe61c,	// (0x0006adb3) call5_swipe_1_pane_g2_ParamLimits

0xe61c,	// (0x0006adb3) call5_swipe_1_pane_g2

0x0001,

0x09d5,	// (0x0005d16c) call5_swipe_1_pane_g_ParamLimits

0x09d5,	// (0x0005d16c) call5_swipe_1_pane_g

0xe628,	// (0x0006adbf) call5_swipe_1_pane_t1_ParamLimits

0xe628,	// (0x0006adbf) call5_swipe_1_pane_t1

0xcf6b,	// (0x00069702) call5_swipe_2_pane_g1_ParamLimits

0xcf6b,	// (0x00069702) call5_swipe_2_pane_g1

0xe63d,	// (0x0006add4) call5_swipe_2_pane_g2_ParamLimits

0xe63d,	// (0x0006add4) call5_swipe_2_pane_g2

0x0001,

0x09da,	// (0x0005d171) call5_swipe_2_pane_g_ParamLimits

0x09da,	// (0x0005d171) call5_swipe_2_pane_g

0xe649,	// (0x0006ade0) call5_swipe_2_pane_t1_ParamLimits

0xe649,	// (0x0006ade0) call5_swipe_2_pane_t1

0xe65e,	// (0x0006adf5) sc_swipe_pane_g1_ParamLimits

0xe65e,	// (0x0006adf5) sc_swipe_pane_g1

0xe66b,	// (0x0006ae02) sc_swipe_pane_g2_ParamLimits

0xe66b,	// (0x0006ae02) sc_swipe_pane_g2

0x0001,

0x09df,	// (0x0005d176) sc_swipe_pane_g_ParamLimits

0x09df,	// (0x0005d176) sc_swipe_pane_g

0xe677,	// (0x0006ae0e) sc_swipe_pane_t1_ParamLimits

0xe677,	// (0x0006ae0e) sc_swipe_pane_t1

0x1050,	// (0x0005d7e7) main_cmail_launcher_pane

0x84a1,	// (0x00064c38) aid_size_cell_cmail_l_ParamLimits

0x84a1,	// (0x00064c38) aid_size_cell_cmail_l

0x84af,	// (0x00064c46) grid_cmail_l_pane_ParamLimits

0x84af,	// (0x00064c46) grid_cmail_l_pane

0x84bf,	// (0x00064c56) cell_cmail_l_pane_ParamLimits

0x84bf,	// (0x00064c56) cell_cmail_l_pane

0xe68c,	// (0x0006ae23) cell_cmail_l_pane_g1_ParamLimits

0xe68c,	// (0x0006ae23) cell_cmail_l_pane_g1

0xe698,	// (0x0006ae2f) cell_cmail_l_pane_t1_ParamLimits

0xe698,	// (0x0006ae2f) cell_cmail_l_pane_t1

0xe6ae,	// (0x0006ae45) cell_cmail_l_pane_t2_ParamLimits

0xe6ae,	// (0x0006ae45) cell_cmail_l_pane_t2

0x0001,

0x09e4,	// (0x0005d17b) cell_cmail_l_pane_t_ParamLimits

0x09e4,	// (0x0005d17b) cell_cmail_l_pane_t

0xa74e,	// (0x00066ee5) grid_highlight_pane_cp018_ParamLimits

0xa74e,	// (0x00066ee5) grid_highlight_pane_cp018

0x0ea6,	// (0x0005d63d) main2_pane_ParamLimits

0x0ea6,	// (0x0005d63d) main2_pane

0xa95b,	// (0x000670f2) popup_sp_fs_action_menu_bg_pane_g1

0xa963,	// (0x000670fa) popup_sp_fs_action_menu_bg_pane_g2

0xa96b,	// (0x00067102) popup_sp_fs_action_menu_bg_pane_g3

0xa973,	// (0x0006710a) popup_sp_fs_action_menu_bg_pane_g4

0xa97b,	// (0x00067112) popup_sp_fs_action_menu_bg_pane_g5

0xa983,	// (0x0006711a) popup_sp_fs_action_menu_bg_pane_g6

0xa98b,	// (0x00067122) popup_sp_fs_action_menu_bg_pane_g7

0xa993,	// (0x0006712a) popup_sp_fs_action_menu_bg_pane_g8

0xa99b,	// (0x00067132) popup_sp_fs_action_menu_bg_pane_g9

0xa9a3,	// (0x0006713a) popup_sp_fs_action_menu_bg_pane_g10

0xa9a3,	// (0x0006713a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0006b906) popup_sp_fs_action_menu_bg_pane_g

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g3_g1

0x1d6a,	// (0x0005e501) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_t3_g3_g2

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0006b9b4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0006b9b4) list_medium_line_x2_t3_g3_g

0x1d82,	// (0x0005e519) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d82,	// (0x0005e519) list_medium_line_x2_t3_g3_t1

0x1d97,	// (0x0005e52e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1d97,	// (0x0005e52e) list_medium_line_x2_t3_g3_t2

0x1da9,	// (0x0005e540) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0006b9bb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0006b9bb) list_medium_line_x2_t3_g3_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g2_g1

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0006b9c2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0006b9c2) list_medium_line_x2_t3_g2_g

0x1dbe,	// (0x0005e555) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dbe,	// (0x0005e555) list_medium_line_x2_t3_g2_t1

0x1dd4,	// (0x0005e56b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1dd4,	// (0x0005e56b) list_medium_line_x2_t3_g2_t2

0x1de6,	// (0x0005e57d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1de6,	// (0x0005e57d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0006b9c7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0006b9c7) list_medium_line_x2_t3_g2_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t4_g4_g1

0x1e03,	// (0x0005e59a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e03,	// (0x0005e59a) list_medium_line_x2_t4_g4_g2

0x1d6a,	// (0x0005e501) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_t4_g4_g3

0x1e0f,	// (0x0005e5a6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e0f,	// (0x0005e5a6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0006b9ce) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0006b9ce) list_medium_line_x2_t4_g4_g

0x1e1b,	// (0x0005e5b2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e1b,	// (0x0005e5b2) list_medium_line_x2_t4_g4_t1

0x1e35,	// (0x0005e5cc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e35,	// (0x0005e5cc) list_medium_line_x2_t4_g4_t2

0x1e4b,	// (0x0005e5e2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e4b,	// (0x0005e5e2) list_medium_line_x2_t4_g4_t3

0x1e60,	// (0x0005e5f7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e60,	// (0x0005e5f7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0006b9d7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0006b9d7) list_medium_line_x2_t4_g4_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g4_g1

0x1e03,	// (0x0005e59a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e03,	// (0x0005e59a) list_medium_line_x2_t2_g4_g2

0x1d6a,	// (0x0005e501) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_t2_g4_g3

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0006ba3e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0006ba3e) list_medium_line_x2_t2_g4_g

0x2f6f,	// (0x0005f706) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f6f,	// (0x0005f706) list_medium_line_x2_t2_g4_t1

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0006ba47) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0006ba47) list_medium_line_x2_t2_g4_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g3_g1

0x1d6a,	// (0x0005e501) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_t2_g3_g2

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0006b9b4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0006b9b4) list_medium_line_x2_t2_g3_g

0x2f84,	// (0x0005f71b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2f84,	// (0x0005f71b) list_medium_line_x2_t2_g3_t1

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0006ba4c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0006ba4c) list_medium_line_x2_t2_g3_t

0x314b,	// (0x0005f8e2) main_sp_fs_list_pane_ParamLimits

0x314b,	// (0x0005f8e2) main_sp_fs_list_pane

0x3157,	// (0x0005f8ee) sp_fs_scroll_pane_ParamLimits

0x3157,	// (0x0005f8ee) sp_fs_scroll_pane

0x3163,	// (0x0005f8fa) list_medium_line_x2_t3_t1

0x3173,	// (0x0005f90a) list_medium_line_x2_t3_t2

0x3181,	// (0x0005f918) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0006ba97) list_medium_line_x2_t3_t

0x318f,	// (0x0005f926) list_medium_line_x3_t4_t1

0x319f,	// (0x0005f936) list_medium_line_x3_t4_t2

0x31ad,	// (0x0005f944) list_medium_line_x3_t4_t3

0x3181,	// (0x0005f918) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0006ba9e) list_medium_line_x3_t4_t

0x31bb,	// (0x0005f952) list_medium_line_x4_t5_t1

0x31cb,	// (0x0005f962) list_medium_line_x4_t5_t2

0x31ad,	// (0x0005f944) list_medium_line_x4_t5_t3

0x31d9,	// (0x0005f970) list_medium_line_x4_t5_t4

0x3181,	// (0x0005f918) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0006baa7) list_medium_line_x4_t5_t

0x1d5e,	// (0x0005e4f5) list_medium_line_t4_g4_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_t4_g4_g1

0x1e0f,	// (0x0005e5a6) list_medium_line_t4_g4_g2_ParamLimits

0x1e0f,	// (0x0005e5a6) list_medium_line_t4_g4_g2

0x31e7,	// (0x0005f97e) list_medium_line_t4_g4_g3_ParamLimits

0x31e7,	// (0x0005f97e) list_medium_line_t4_g4_g3

0x1d76,	// (0x0005e50d) list_medium_line_t4_g4_g4_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0006bab2) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0006bab2) list_medium_line_t4_g4_g

0x31f3,	// (0x0005f98a) list_medium_line_t4_g4_t1_ParamLimits

0x31f3,	// (0x0005f98a) list_medium_line_t4_g4_t1

0x3208,	// (0x0005f99f) list_medium_line_t4_g4_t2_ParamLimits

0x3208,	// (0x0005f99f) list_medium_line_t4_g4_t2

0x321d,	// (0x0005f9b4) list_medium_line_t4_g4_t3_ParamLimits

0x321d,	// (0x0005f9b4) list_medium_line_t4_g4_t3

0x1da9,	// (0x0005e540) list_medium_line_t4_g4_t4_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0006babb) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0006babb) list_medium_line_t4_g4_t

0x3333,	// (0x0005faca) chi_dic_find_pane_g1

0x4260,	// (0x000609f7) main_tport_pane

0x6d82,	// (0x00063519) list_medium_line_plain_t1

0x6e62,	// (0x000635f9) list_medium_line_t2_g2_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t2_g2_g1

0x6e6e,	// (0x00063605) list_medium_line_t2_g2_g2_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_t2_g2_g2

0x0001,

0xf83d,	// (0x0006bfd4) list_medium_line_t2_g2_g_ParamLimits

0xf83d,	// (0x0006bfd4) list_medium_line_t2_g2_g

0x6e7a,	// (0x00063611) list_medium_line_t2_g2_t1_ParamLimits

0x6e7a,	// (0x00063611) list_medium_line_t2_g2_t1

0x6e94,	// (0x0006362b) list_medium_line_t2_g2_t2_ParamLimits

0x6e94,	// (0x0006362b) list_medium_line_t2_g2_t2

0x0001,

0xf842,	// (0x0006bfd9) list_medium_line_t2_g2_t_ParamLimits

0xf842,	// (0x0006bfd9) list_medium_line_t2_g2_t

0xa3fb,	// (0x00066b92) aid_sp_fs_list_icon_a_sm

0xa403,	// (0x00066b9a) aid_sp_fs_list_icon_d

0xa40b,	// (0x00066ba2) aid_sp_fs_text_primary

0xe02b,	// (0x0006a7c2) aid_sp_fs_text_secondary

0x7530,	// (0x00063cc7) list_medium_line

0x7530,	// (0x00063cc7) list_medium_line_g2

0x7530,	// (0x00063cc7) list_medium_line_g3

0x7530,	// (0x00063cc7) list_medium_line_plain

0x7530,	// (0x00063cc7) list_medium_line_plain_t2

0x7530,	// (0x00063cc7) list_medium_line_plain_t3

0x7530,	// (0x00063cc7) list_medium_line_right_icon

0x7530,	// (0x00063cc7) list_medium_line_right_iconx2

0x7530,	// (0x00063cc7) list_medium_line_t2

0x7530,	// (0x00063cc7) list_medium_line_t2_g2

0x7530,	// (0x00063cc7) list_medium_line_t2_g3

0x7530,	// (0x00063cc7) list_medium_line_t2_right_icon

0x7530,	// (0x00063cc7) list_medium_line_t2_right_iconx2

0x7530,	// (0x00063cc7) list_medium_line_t3

0x7530,	// (0x00063cc7) list_medium_line_t3_g2

0x7530,	// (0x00063cc7) list_medium_line_t3_g3

0x7530,	// (0x00063cc7) list_medium_line_t3_right_iconx2

0x7539,	// (0x00063cd0) list_medium_line_t4_g4

0x7542,	// (0x00063cd9) list_medium_line_x2

0x7542,	// (0x00063cd9) list_medium_line_x2_t2_g2

0x7542,	// (0x00063cd9) list_medium_line_x2_t2_g3

0x7542,	// (0x00063cd9) list_medium_line_x2_t2_g4

0x7542,	// (0x00063cd9) list_medium_line_x2_t3

0x7542,	// (0x00063cd9) list_medium_line_x2_t3_g2

0x7542,	// (0x00063cd9) list_medium_line_x2_t3_g3

0x7542,	// (0x00063cd9) list_medium_line_x2_t3_g4

0x7542,	// (0x00063cd9) list_medium_line_x2_t4_g2

0x7542,	// (0x00063cd9) list_medium_line_x2_t4_g4

0x754b,	// (0x00063ce2) list_medium_line_x3

0x754b,	// (0x00063ce2) list_medium_line_x3_t4

0x754b,	// (0x00063ce2) list_medium_line_x3_t4_g4

0x7539,	// (0x00063cd0) list_medium_line_x4_t4

0x7539,	// (0x00063cd0) list_medium_line_x4_t4_g7

0x7539,	// (0x00063cd0) list_medium_line_x4_t5

0x7554,	// (0x00063ceb) list_single_fs_dyc_pane_ParamLimits

0x7554,	// (0x00063ceb) list_single_fs_dyc_pane

0x1d5e,	// (0x0005e4f5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x4_t4_g7_g1

0x7cc7,	// (0x0006445e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cc7,	// (0x0006445e) list_medium_line_x4_t4_g7_g2

0x7cd3,	// (0x0006446a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cd3,	// (0x0006446a) list_medium_line_x4_t4_g7_g3

0x7ce2,	// (0x00064479) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7ce2,	// (0x00064479) list_medium_line_x4_t4_g7_g4

0x7cee,	// (0x00064485) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7cee,	// (0x00064485) list_medium_line_x4_t4_g7_g5

0x7cfd,	// (0x00064494) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7cfd,	// (0x00064494) list_medium_line_x4_t4_g7_g6

0x7d0c,	// (0x000644a3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d0c,	// (0x000644a3) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9eb,	// (0x0006c182) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9eb,	// (0x0006c182) list_medium_line_x4_t4_g7_g

0x7d18,	// (0x000644af) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d18,	// (0x000644af) list_medium_line_x4_t4_g7_t1

0x7d2d,	// (0x000644c4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d2d,	// (0x000644c4) list_medium_line_x4_t4_g7_t2

0x7d42,	// (0x000644d9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d42,	// (0x000644d9) list_medium_line_x4_t4_g7_t3

0x7d57,	// (0x000644ee) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d57,	// (0x000644ee) list_medium_line_x4_t4_g7_t4

0x7d69,	// (0x00064500) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d69,	// (0x00064500) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9fa,	// (0x0006c191) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9fa,	// (0x0006c191) list_medium_line_x4_t4_g7_t

0x7d7b,	// (0x00064512) list_single_dyc_row_pane_ParamLimits

0x7d7b,	// (0x00064512) list_single_dyc_row_pane

0x8451,	// (0x00064be8) call5_gesture_pane_ParamLimits

0x8451,	// (0x00064be8) call5_gesture_pane

0x8485,	// (0x00064c1c) call5_windows_pane_ParamLimits

0x8485,	// (0x00064c1c) call5_windows_pane

0x84d8,	// (0x00064c6f) call5_swipe_1_pane_cp_ParamLimits

0x84d8,	// (0x00064c6f) call5_swipe_1_pane_cp

0x84e4,	// (0x00064c7b) call5_swipe_2_pane_cp_ParamLimits

0x84e4,	// (0x00064c7b) call5_swipe_2_pane_cp

0xaa87,	// (0x0006721e) call5_image_pane_cp

0x84f0,	// (0x00064c87) popup_call5_audio_first_window_cp_ParamLimits

0x84f0,	// (0x00064c87) popup_call5_audio_first_window_cp

0xe65e,	// (0x0006adf5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65e,	// (0x0006adf5) call5_swipe_1_pane_g1_cp

0xe6cb,	// (0x0006ae62) call5_swipe_1_pane_g2_cp

0xe677,	// (0x0006ae0e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe677,	// (0x0006ae0e) call5_swipe_1_pane_t1_cp

0xe65e,	// (0x0006adf5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65e,	// (0x0006adf5) call5_swipe_2_pane_g1_cp

0xe6d3,	// (0x0006ae6a) call5_swipe_2_pane_g2_cp

0xe6db,	// (0x0006ae72) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6db,	// (0x0006ae72) call5_swipe_2_pane_t1_cp

0xa74e,	// (0x00066ee5) main_sp_fs_email_pane

0xe6f0,	// (0x0006ae87) main_sp_fs_listscroll_pane_te

0x84fe,	// (0x00064c95) popup_sp_fs_action_menu_pane_ParamLimits

0x84fe,	// (0x00064c95) popup_sp_fs_action_menu_pane

0xcd08,	// (0x0006949f) bg_sp_fs_ctrlbar_pane_g1

0xe6f9,	// (0x0006ae90) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe702,	// (0x0006ae99) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe70b,	// (0x0006aea2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd08,	// (0x0006949f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x09e9,	// (0x0005d180) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaed,	// (0x00069284) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaed,	// (0x00069284) bg_sp_fs_ctrlbar_ddmenu_pane

0xe714,	// (0x0006aeab) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe714,	// (0x0006aeab) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe720,	// (0x0006aeb7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe720,	// (0x0006aeb7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x09f2,	// (0x0005d189) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x09f2,	// (0x0005d189) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe72c,	// (0x0006aec3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe72c,	// (0x0006aec3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8540,	// (0x00064cd7) list_medium_line_t2_right_icon_g1

0x8548,	// (0x00064cdf) list_medium_line_t2_right_icon_t1

0x8558,	// (0x00064cef) list_medium_line_t2_right_icon_t2

0x0001,

0xfa7e,	// (0x0006c215) list_medium_line_t2_right_icon_t

0xc900,	// (0x00069097) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc900,	// (0x00069097) bg_sp_fs_ctrlbar_pane

0x85bd,	// (0x00064d54) main_sp_fs_ctrlbar_button_pane_cp01

0x85c5,	// (0x00064d5c) main_sp_fs_ctrlbar_ddmenu_pane

0xe77e,	// (0x0006af15) main_sp_fs_ctrlbar_pane_g1

0xe78a,	// (0x0006af21) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfa83,	// (0x0006c21a) main_sp_fs_ctrlbar_pane_g

0x8601,	// (0x00064d98) main_sp_fs_ctrlbar_pane_t1

0x863c,	// (0x00064dd3) main_sp_fs_ctrlbar_pane

0x8652,	// (0x00064de9) main_sp_fs_listscroll_pane_te_cp01

0x8663,	// (0x00064dfa) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8663,	// (0x00064dfa) popup_sp_fs_action_menu_pane_cp01

0xa74e,	// (0x00066ee5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa74e,	// (0x00066ee5) bg_sp_fs_highlight_list_pane_cp01

0xa414,	// (0x00066bab) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa414,	// (0x00066bab) sp_fs_action_menu_list_gene_pane_g1

0xe7b1,	// (0x0006af48) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7b1,	// (0x0006af48) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa8c,	// (0x0006c223) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa8c,	// (0x0006c223) sp_fs_action_menu_list_gene_pane_g

0xa423,	// (0x00066bba) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa423,	// (0x00066bba) sp_fs_action_menu_list_gene_pane_t1

0xa43b,	// (0x00066bd2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa43b,	// (0x00066bd2) sp_fs_action_menu_list_gene_pane

0xe7be,	// (0x0006af55) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7be,	// (0x0006af55) popup_sp_fs_action_menu_bg_pane

0xa45a,	// (0x00066bf1) sp_fs_action_menu_list_pane_ParamLimits

0xa45a,	// (0x00066bf1) sp_fs_action_menu_list_pane

0x868d,	// (0x00064e24) sp_fs_scroll_pane_cp01_ParamLimits

0x868d,	// (0x00064e24) sp_fs_scroll_pane_cp01

0x86b3,	// (0x00064e4a) list_medium_line_plain_t2_t1

0x86c3,	// (0x00064e5a) list_medium_line_plain_t2_t2

0x0001,

0xfa91,	// (0x0006c228) list_medium_line_plain_t2_t

0x86d1,	// (0x00064e68) list_medium_line_plain_t3_t1

0x86e1,	// (0x00064e78) list_medium_line_plain_t3_t2

0x86ef,	// (0x00064e86) list_medium_line_plain_t3_t3

0x0002,

0xfa96,	// (0x0006c22d) list_medium_line_plain_t3_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t2_g2_g1

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0006b9c2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0006b9c2) list_medium_line_x2_t2_g2_g

0x31f3,	// (0x0005f98a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x31f3,	// (0x0005f98a) list_medium_line_x2_t2_g2_t1

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa9d,	// (0x0006c234) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa9d,	// (0x0006c234) list_medium_line_x2_t2_g2_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t4_g2_g1

0x86fd,	// (0x00064e94) list_medium_line_x2_t4_g2_g2_ParamLimits

0x86fd,	// (0x00064e94) list_medium_line_x2_t4_g2_g2

0x0001,

0xfaa2,	// (0x0006c239) list_medium_line_x2_t4_g2_g_ParamLimits

0xfaa2,	// (0x0006c239) list_medium_line_x2_t4_g2_g

0x870f,	// (0x00064ea6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x870f,	// (0x00064ea6) list_medium_line_x2_t4_g2_t1

0x8729,	// (0x00064ec0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8729,	// (0x00064ec0) list_medium_line_x2_t4_g2_t2

0x873f,	// (0x00064ed6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x873f,	// (0x00064ed6) list_medium_line_x2_t4_g2_t3

0x1da9,	// (0x0005e540) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t4_g2_t4

0x0003,

0xfaa7,	// (0x0006c23e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfaa7,	// (0x0006c23e) list_medium_line_x2_t4_g2_t

0x8754,	// (0x00064eeb) list_medium_line_t3_right_iconx2_g1

0x8540,	// (0x00064cd7) list_medium_line_t3_right_iconx2_g2

0x875c,	// (0x00064ef3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfab0,	// (0x0006c247) list_medium_line_t3_right_iconx2_g

0x8764,	// (0x00064efb) list_medium_line_t3_right_iconx2_t1

0x8774,	// (0x00064f0b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfab7,	// (0x0006c24e) list_medium_line_t3_right_iconx2_t

0x1d5e,	// (0x0005e4f5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x3_t4_g4_g1

0x1d6a,	// (0x0005e501) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x3_t4_g4_g2

0x1e0f,	// (0x0005e5a6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e0f,	// (0x0005e5a6) list_medium_line_x3_t4_g4_g3

0x8782,	// (0x00064f19) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8782,	// (0x00064f19) list_medium_line_x3_t4_g4_g4

0x0003,

0xfabc,	// (0x0006c253) list_medium_line_x3_t4_g4_g_ParamLimits

0xfabc,	// (0x0006c253) list_medium_line_x3_t4_g4_g

0x878e,	// (0x00064f25) list_medium_line_x3_t4_g4_t1_ParamLimits

0x878e,	// (0x00064f25) list_medium_line_x3_t4_g4_t1

0x87a5,	// (0x00064f3c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87a5,	// (0x00064f3c) list_medium_line_x3_t4_g4_t2

0x3208,	// (0x0005f99f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3208,	// (0x0005f99f) list_medium_line_x3_t4_g4_t3

0x87ba,	// (0x00064f51) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87ba,	// (0x00064f51) list_medium_line_x3_t4_g4_t4

0x0003,

0xfac5,	// (0x0006c25c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfac5,	// (0x0006c25c) list_medium_line_x3_t4_g4_t

0x87d7,	// (0x00064f6e) list_single_dyc_row_text_pane_t1_ParamLimits

0x87d7,	// (0x00064f6e) list_single_dyc_row_text_pane_t1

0x880e,	// (0x00064fa5) list_single_dyc_row_text_pane_t2_ParamLimits

0x880e,	// (0x00064fa5) list_single_dyc_row_text_pane_t2

0xa47a,	// (0x00066c11) list_single_dyc_row_text_pane_t3_ParamLimits

0xa47a,	// (0x00066c11) list_single_dyc_row_text_pane_t3

0x0005,

0xface,	// (0x0006c265) list_single_dyc_row_text_pane_t_ParamLimits

0xface,	// (0x0006c265) list_single_dyc_row_text_pane_t

0xa49e,	// (0x00066c35) list_single_dyc_row_pane_g1_ParamLimits

0xa49e,	// (0x00066c35) list_single_dyc_row_pane_g1

0xa4aa,	// (0x00066c41) list_single_dyc_row_pane_g2_ParamLimits

0xa4aa,	// (0x00066c41) list_single_dyc_row_pane_g2

0xa4b6,	// (0x00066c4d) list_single_dyc_row_pane_g3_ParamLimits

0xa4b6,	// (0x00066c4d) list_single_dyc_row_pane_g3

0xa4c2,	// (0x00066c59) list_single_dyc_row_pane_g4_ParamLimits

0xa4c2,	// (0x00066c59) list_single_dyc_row_pane_g4

0x0003,

0xfadb,	// (0x0006c272) list_single_dyc_row_pane_g_ParamLimits

0xfadb,	// (0x0006c272) list_single_dyc_row_pane_g

0xa4ce,	// (0x00066c65) list_single_dyc_row_text_pane_ParamLimits

0xa4ce,	// (0x00066c65) list_single_dyc_row_text_pane

0x9c9e,	// (0x00066435) bg_sp_fs_scroll_pane

0xe7cc,	// (0x0006af63) thumb_sp_fs_scroll_pane

0x6e62,	// (0x000635f9) list_medium_line_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_g1

0x8931,	// (0x000650c8) list_medium_line_t1_ParamLimits

0x8931,	// (0x000650c8) list_medium_line_t1

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_g1

0x1d6a,	// (0x0005e501) list_medium_line_x2_g2_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_g2

0x0001,

0xfae4,	// (0x0006c27b) list_medium_line_x2_g_ParamLimits

0xfae4,	// (0x0006c27b) list_medium_line_x2_g

0xa4ed,	// (0x00066c84) list_medium_line_x2_t1_ParamLimits

0xa4ed,	// (0x00066c84) list_medium_line_x2_t1

0x1d5e,	// (0x0005e4f5) list_medium_line_x3_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x3_g1

0x1d6a,	// (0x0005e501) list_medium_line_x3_g2_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x3_g2

0x0001,

0xfae4,	// (0x0006c27b) list_medium_line_x3_g_ParamLimits

0xfae4,	// (0x0006c27b) list_medium_line_x3_g

0xa4ed,	// (0x00066c84) list_medium_line_x3_t1_ParamLimits

0xa4ed,	// (0x00066c84) list_medium_line_x3_t1

0xe7d5,	// (0x0006af6c) thumb_sp_fs_scroll_pane_g1

0xe7de,	// (0x0006af75) thumb_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0006af7e) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a67,	// (0x0005d1fe) thumb_sp_fs_scroll_pane_g

0xe7d5,	// (0x0006af6c) bg_sp_fs_scroll_pane_g1

0xe7de,	// (0x0006af75) bg_sp_fs_scroll_pane_g2

0xe7e7,	// (0x0006af7e) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a67,	// (0x0005d1fe) bg_sp_fs_scroll_pane_g

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d5e,	// (0x0005e4f5) list_medium_line_x2_t3_g4_g1

0x1e03,	// (0x0005e59a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e03,	// (0x0005e59a) list_medium_line_x2_t3_g4_g2

0x1d6a,	// (0x0005e501) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d6a,	// (0x0005e501) list_medium_line_x2_t3_g4_g3

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d76,	// (0x0005e50d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0006ba3e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0006ba3e) list_medium_line_x2_t3_g4_g

0x8946,	// (0x000650dd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8946,	// (0x000650dd) list_medium_line_x2_t3_g4_t1

0x895c,	// (0x000650f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x895c,	// (0x000650f3) list_medium_line_x2_t3_g4_t2

0x1da9,	// (0x0005e540) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1da9,	// (0x0005e540) list_medium_line_x2_t3_g4_t3

0x0002,

0xfae9,	// (0x0006c280) list_medium_line_x2_t3_g4_t_ParamLimits

0xfae9,	// (0x0006c280) list_medium_line_x2_t3_g4_t

0x6e62,	// (0x000635f9) list_medium_line_g2_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_g2_g1

0x6e6e,	// (0x00063605) list_medium_line_g2_g2_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_g2_g2

0x0001,

0xf83d,	// (0x0006bfd4) list_medium_line_g2_g_ParamLimits

0xf83d,	// (0x0006bfd4) list_medium_line_g2_g

0x8976,	// (0x0006510d) list_medium_line_g2_t1_ParamLimits

0x8976,	// (0x0006510d) list_medium_line_g2_t1

0x6e62,	// (0x000635f9) list_medium_line_t3_g2_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t3_g2_g1

0x6e6e,	// (0x00063605) list_medium_line_t3_g2_g2_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_t3_g2_g2

0x0001,

0xf83d,	// (0x0006bfd4) list_medium_line_t3_g2_g_ParamLimits

0xf83d,	// (0x0006bfd4) list_medium_line_t3_g2_g

0x898b,	// (0x00065122) list_medium_line_t3_g2_t1_ParamLimits

0x898b,	// (0x00065122) list_medium_line_t3_g2_t1

0x89a5,	// (0x0006513c) list_medium_line_t3_g2_t2_ParamLimits

0x89a5,	// (0x0006513c) list_medium_line_t3_g2_t2

0x89bb,	// (0x00065152) list_medium_line_t3_g2_t3_ParamLimits

0x89bb,	// (0x00065152) list_medium_line_t3_g2_t3

0x0002,

0xfaf0,	// (0x0006c287) list_medium_line_t3_g2_t_ParamLimits

0xfaf0,	// (0x0006c287) list_medium_line_t3_g2_t

0x8540,	// (0x00064cd7) list_medium_line_right_icon_g1

0x89d1,	// (0x00065168) list_medium_line_right_icon_t1

0x6e62,	// (0x000635f9) list_medium_line_t2_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t2_g1

0x89df,	// (0x00065176) list_medium_line_t2_t1_ParamLimits

0x89df,	// (0x00065176) list_medium_line_t2_t1

0x89f9,	// (0x00065190) list_medium_line_t2_t2_ParamLimits

0x89f9,	// (0x00065190) list_medium_line_t2_t2

0x0001,

0xfaf7,	// (0x0006c28e) list_medium_line_t2_t_ParamLimits

0xfaf7,	// (0x0006c28e) list_medium_line_t2_t

0x6e62,	// (0x000635f9) list_medium_line_t3_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t3_g1

0x8a0e,	// (0x000651a5) list_medium_line_t3_t1_ParamLimits

0x8a0e,	// (0x000651a5) list_medium_line_t3_t1

0x8a28,	// (0x000651bf) list_medium_line_t3_t2_ParamLimits

0x8a28,	// (0x000651bf) list_medium_line_t3_t2

0x8a3e,	// (0x000651d5) list_medium_line_t3_t3_ParamLimits

0x8a3e,	// (0x000651d5) list_medium_line_t3_t3

0x0002,

0xfafc,	// (0x0006c293) list_medium_line_t3_t_ParamLimits

0xfafc,	// (0x0006c293) list_medium_line_t3_t

0x6e62,	// (0x000635f9) list_medium_line_g3_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_g3_g1

0x8a53,	// (0x000651ea) list_medium_line_g3_g2_ParamLimits

0x8a53,	// (0x000651ea) list_medium_line_g3_g2

0x6e6e,	// (0x00063605) list_medium_line_g3_g3_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_g3_g3

0x0002,

0xfb03,	// (0x0006c29a) list_medium_line_g3_g_ParamLimits

0xfb03,	// (0x0006c29a) list_medium_line_g3_g

0x8a5f,	// (0x000651f6) list_medium_line_g3_t1_ParamLimits

0x8a5f,	// (0x000651f6) list_medium_line_g3_t1

0x6e62,	// (0x000635f9) list_medium_line_t2_g3_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t2_g3_g1

0x8a53,	// (0x000651ea) list_medium_line_t2_g3_g2_ParamLimits

0x8a53,	// (0x000651ea) list_medium_line_t2_g3_g2

0x6e6e,	// (0x00063605) list_medium_line_t2_g3_g3_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_t2_g3_g3

0x0002,

0xfb03,	// (0x0006c29a) list_medium_line_t2_g3_g_ParamLimits

0xfb03,	// (0x0006c29a) list_medium_line_t2_g3_g

0x8a74,	// (0x0006520b) list_medium_line_t2_g3_t1_ParamLimits

0x8a74,	// (0x0006520b) list_medium_line_t2_g3_t1

0x8a8e,	// (0x00065225) list_medium_line_t2_g3_t2_ParamLimits

0x8a8e,	// (0x00065225) list_medium_line_t2_g3_t2

0x0001,

0xfb0a,	// (0x0006c2a1) list_medium_line_t2_g3_t_ParamLimits

0xfb0a,	// (0x0006c2a1) list_medium_line_t2_g3_t

0x6e62,	// (0x000635f9) list_medium_line_t3_g3_g1_ParamLimits

0x6e62,	// (0x000635f9) list_medium_line_t3_g3_g1

0x8a53,	// (0x000651ea) list_medium_line_t3_g3_g2_ParamLimits

0x8a53,	// (0x000651ea) list_medium_line_t3_g3_g2

0x6e6e,	// (0x00063605) list_medium_line_t3_g3_g3_ParamLimits

0x6e6e,	// (0x00063605) list_medium_line_t3_g3_g3

0x0002,

0xfb03,	// (0x0006c29a) list_medium_line_t3_g3_g_ParamLimits

0xfb03,	// (0x0006c29a) list_medium_line_t3_g3_g

0x8aa4,	// (0x0006523b) list_medium_line_t3_g3_t1_ParamLimits

0x8aa4,	// (0x0006523b) list_medium_line_t3_g3_t1

0x8abd,	// (0x00065254) list_medium_line_t3_g3_t2_ParamLimits

0x8abd,	// (0x00065254) list_medium_line_t3_g3_t2

0x8ad3,	// (0x0006526a) list_medium_line_t3_g3_t3_ParamLimits

0x8ad3,	// (0x0006526a) list_medium_line_t3_g3_t3

0x0002,

0xfb0f,	// (0x0006c2a6) list_medium_line_t3_g3_t_ParamLimits

0xfb0f,	// (0x0006c2a6) list_medium_line_t3_g3_t

0x8754,	// (0x00064eeb) list_medium_line_right_iconx2_g1

0x8540,	// (0x00064cd7) list_medium_line_right_iconx2_g2

0x0001,

0xfb16,	// (0x0006c2ad) list_medium_line_right_iconx2_g

0x8ae9,	// (0x00065280) list_medium_line_right_iconx2_t1

0x8754,	// (0x00064eeb) list_medium_line_t2_right_iconx2_g1

0x8540,	// (0x00064cd7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb16,	// (0x0006c2ad) list_medium_line_t2_right_iconx2_g

0x8af7,	// (0x0006528e) list_medium_line_t2_right_iconx2_t1

0x8b07,	// (0x0006529e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb1b,	// (0x0006c2b2) list_medium_line_t2_right_iconx2_t

0x8b15,	// (0x000652ac) list_medium_line_x4_t4_t1

0x8b23,	// (0x000652ba) list_medium_line_x4_t4_t2

0x8b33,	// (0x000652ca) list_medium_line_x4_t4_t3

0x8b43,	// (0x000652da) list_medium_line_x4_t4_t4

0x0003,

0xfb20,	// (0x0006c2b7) list_medium_line_x4_t4_t

0x8b7d,	// (0x00065314) tport_appsw_pane_ParamLimits

0x8b7d,	// (0x00065314) tport_appsw_pane

0x8b8b,	// (0x00065322) tport_contact_pane_ParamLimits

0x8b8b,	// (0x00065322) tport_contact_pane

0x8b9b,	// (0x00065332) tport_listscroll_pane_ParamLimits

0x8b9b,	// (0x00065332) tport_listscroll_pane

0x8bab,	// (0x00065342) cell_tport_appsw_pane_ParamLimits

0x8bab,	// (0x00065342) cell_tport_appsw_pane

0xcff0,	// (0x00069787) tport_appsw_pane_g1_ParamLimits

0xcff0,	// (0x00069787) tport_appsw_pane_g1

0xe7f0,	// (0x0006af87) tport_contact_pane_g1

0xe19e,	// (0x0006a935) tport_contact_pane_t1

0xe7f9,	// (0x0006af90) tport_contact_pane_t2

0x0001,

0xfb29,	// (0x0006c2c0) tport_contact_pane_t

0xe807,	// (0x0006af9e) list_tport_pane

0xe810,	// (0x0006afa7) scroll_pane_cp_030

0x8bde,	// (0x00065375) cell_tport_appsw_pane_g1

0x8bee,	// (0x00065385) cell_tport_appsw_pane_t1

0x8bfc,	// (0x00065393) grid_highlight_pane_cp019

0x8c04,	// (0x0006539b) list_tport_double_graphic_pane_ParamLimits

0x8c04,	// (0x0006539b) list_tport_double_graphic_pane

0xa74e,	// (0x00066ee5) list_highlight_pane_cp023_ParamLimits

0xa74e,	// (0x00066ee5) list_highlight_pane_cp023

0x8c15,	// (0x000653ac) list_tport_double_graphic_pane_g1_ParamLimits

0x8c15,	// (0x000653ac) list_tport_double_graphic_pane_g1

0x8c22,	// (0x000653b9) list_tport_double_graphic_pane_t1_ParamLimits

0x8c22,	// (0x000653b9) list_tport_double_graphic_pane_t1

0x8c37,	// (0x000653ce) list_tport_double_graphic_pane_t2_ParamLimits

0x8c37,	// (0x000653ce) list_tport_double_graphic_pane_t2

0x0001,

0xfb35,	// (0x0006c2cc) list_tport_double_graphic_pane_t_ParamLimits

0xfb35,	// (0x0006c2cc) list_tport_double_graphic_pane_t

0x9c9e,	// (0x00066435) main_cale_note_pane

0x6632,	// (0x00062dc9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6632,	// (0x00062dc9) cell_vitu2_function_top_wide_pane_cp01

0x8128,	// (0x000648bf) wait_bar_pane_cp05_ParamLimits

0xa74e,	// (0x00066ee5) listscroll_cmail_pane

0xe819,	// (0x0006afb0) list_cmail_pane

0x8c49,	// (0x000653e0) list_cmail_body_pane

0x8c70,	// (0x00065407) list_single_cmail_header_caption_pane

0x8c9b,	// (0x00065432) list_single_cmail_header_detail_pane_ParamLimits

0x8c9b,	// (0x00065432) list_single_cmail_header_detail_pane

0xe829,	// (0x0006afc0) list_single_cmail_header_caption_pane_t1

0x8cd1,	// (0x00065468) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8cd1,	// (0x00065468) list_single_cmail_header_detail_pane_g1

0xa503,	// (0x00066c9a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa503,	// (0x00066c9a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb3a,	// (0x0006c2d1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb3a,	// (0x0006c2d1) list_single_cmail_header_detail_pane_g

0xa50f,	// (0x00066ca6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa50f,	// (0x00066ca6) list_single_cmail_header_detail_pane_t1

0xa56f,	// (0x00066d06) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa56f,	// (0x00066d06) list_single_cmail_header_editor_pane_bg

0xe30d,	// (0x0006aaa4) list_cmail_body_pane_g1

0xe84d,	// (0x0006afe4) list_cmail_body_pane_t1

0xd6df,	// (0x00069e76) list_single_cmail_header_editor_pane_bg_g1

0xace9,	// (0x00067480) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6ef,	// (0x00069e86) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6e7,	// (0x00069e7e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd903,	// (0x0006a09a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd70f,	// (0x00069ea6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6ff,	// (0x00069e96) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd707,	// (0x00069e9e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc9,	// (0x00067460) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ce7,	// (0x0006547e) calenote_gesture_pane_ParamLimits

0x8ce7,	// (0x0006547e) calenote_gesture_pane

0x8d01,	// (0x00065498) calenote_window_pane_ParamLimits

0x8d01,	// (0x00065498) calenote_window_pane

0xe85b,	// (0x0006aff2) popup_note_window_cp01

0x8d19,	// (0x000654b0) calenote_swipe_1_pane_ParamLimits

0x8d19,	// (0x000654b0) calenote_swipe_1_pane

0x84e4,	// (0x00064c7b) calenote_swipe_2_pane_ParamLimits

0x84e4,	// (0x00064c7b) calenote_swipe_2_pane

0xe65e,	// (0x0006adf5) calenote_swipe_1_pane_g1_ParamLimits

0xe65e,	// (0x0006adf5) calenote_swipe_1_pane_g1

0xe66b,	// (0x0006ae02) calenote_swipe_1_pane_g2_ParamLimits

0xe66b,	// (0x0006ae02) calenote_swipe_1_pane_g2

0x0001,

0x09df,	// (0x0005d176) calenote_swipe_1_pane_g_ParamLimits

0x09df,	// (0x0005d176) calenote_swipe_1_pane_g

0xe86d,	// (0x0006b004) calenote_swipe_1_pane_t1_ParamLimits

0xe86d,	// (0x0006b004) calenote_swipe_1_pane_t1

0xe65e,	// (0x0006adf5) calenote_swipe_2_pane_g1_ParamLimits

0xe65e,	// (0x0006adf5) calenote_swipe_2_pane_g1

0xe88c,	// (0x0006b023) calenote_swipe_2_pane_g2_ParamLimits

0xe88c,	// (0x0006b023) calenote_swipe_2_pane_g2

0x0001,

0x0acb,	// (0x0005d262) calenote_swipe_2_pane_g_ParamLimits

0x0acb,	// (0x0005d262) calenote_swipe_2_pane_g

0xe898,	// (0x0006b02f) calenote_swipe_2_pane_t1_ParamLimits

0xe898,	// (0x0006b02f) calenote_swipe_2_pane_t1

0x9c9e,	// (0x00066435) main_mup_navstr_pane

0x525b,	// (0x000619f2) main_mup3_pane_t7_ParamLimits

0x525b,	// (0x000619f2) main_mup3_pane_t7

0x5ca1,	// (0x00062438) main_mp4_pane_g6_ParamLimits

0x5ca1,	// (0x00062438) main_mp4_pane_g6

0x603f,	// (0x000627d6) main_image3_pane_t4_ParamLimits

0x603f,	// (0x000627d6) main_image3_pane_t4

0x8d2c,	// (0x000654c3) popup_navstr_preview_pane_ParamLimits

0x8d2c,	// (0x000654c3) popup_navstr_preview_pane

0x8d38,	// (0x000654cf) scroll_navstr_pane_ParamLimits

0x8d38,	// (0x000654cf) scroll_navstr_pane

0x9c9e,	// (0x00066435) bg_popup_preview_window_pane_cp04

0xe8c7,	// (0x0006b05e) popup_navstr_preview_pane_t1

0x8d44,	// (0x000654db) scroll_navstr_pane_g1_ParamLimits

0x8d44,	// (0x000654db) scroll_navstr_pane_g1

0x8d51,	// (0x000654e8) scroll_navstr_pane_t1_ParamLimits

0x8d51,	// (0x000654e8) scroll_navstr_pane_t1

0xe864,	// (0x0006affb) bg_button_pane_cp014

0xe864,	// (0x0006affb) bg_button_pane_cp030

0x83f7,	// (0x00064b8e) list_double_fisheye_pane_g4_ParamLimits

0x83f7,	// (0x00064b8e) list_double_fisheye_pane_g4

0x8403,	// (0x00064b9a) list_double_fisheye_pane_g5_ParamLimits

0x8403,	// (0x00064b9a) list_double_fisheye_pane_g5

0xc627,	// (0x00068dbe) sp_fs_scroll_pane_cp03

0xe77e,	// (0x0006af15) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe78a,	// (0x0006af21) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa83,	// (0x0006c21a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8601,	// (0x00064d98) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe821,	// (0x0006afb8) sp_fs_scroll_pane_cp02

0xa9c6,	// (0x0006715d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9c6,	// (0x0006715d) popup_sp_fs_calendar_preview_list_single_pane

0x9c9e,	// (0x00066435) main_cam6_pano_pane

0x4244,	// (0x000609db) main_mup3_pane_ParamLimits

0x9c9e,	// (0x00066435) main_phacti_pane

0x7ffd,	// (0x00064794) bg_button_pane_cp11

0x8015,	// (0x000647ac) main_mobtv_info_pane_g2_ParamLimits

0x8015,	// (0x000647ac) main_mobtv_info_pane_g2

0x0001,

0xfa3a,	// (0x0006c1d1) main_mobtv_info_pane_g_ParamLimits

0xfa3a,	// (0x0006c1d1) main_mobtv_info_pane_g

0x81c7,	// (0x0006495e) sc_clock_pane_t5_ParamLimits

0x81c7,	// (0x0006495e) sc_clock_pane_t5

0x8268,	// (0x000649ff) main_radioblah_pane_g1_ParamLimits

0xe5aa,	// (0x0006ad41) main_radioblah_pane_t3_ParamLimits

0xe5aa,	// (0x0006ad41) main_radioblah_pane_t3

0xe5c2,	// (0x0006ad59) main_radioblah_pane_t4_ParamLimits

0xe5c2,	// (0x0006ad59) main_radioblah_pane_t4

0x8286,	// (0x00064a1d) main_radioblah_text_pane_ParamLimits

0x8286,	// (0x00064a1d) main_radioblah_text_pane

0x8293,	// (0x00064a2a) main_radioblah_info_pane_g1_ParamLimits

0x8328,	// (0x00064abf) main_radioblah_info_pane_t4_ParamLimits

0x8328,	// (0x00064abf) main_radioblah_info_pane_t4

0xa74e,	// (0x00066ee5) main_sp_fs_calendar_pane

0x8d63,	// (0x000654fa) main_phacti_pane_g1

0x8d6b,	// (0x00065502) phacti_note_pane_ParamLimits

0x8d6b,	// (0x00065502) phacti_note_pane

0xe8de,	// (0x0006b075) phacti_term_pane_ParamLimits

0xe8de,	// (0x0006b075) phacti_term_pane

0xe8f3,	// (0x0006b08a) phacti_note_pane_t1_ParamLimits

0xe8f3,	// (0x0006b08a) phacti_note_pane_t1

0xa586,	// (0x00066d1d) phacti_term_pane_g1

0xa58e,	// (0x00066d25) phacti_term_pane_t1_ParamLimits

0xa58e,	// (0x00066d25) phacti_term_pane_t1

0xe90a,	// (0x0006b0a1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa65,	// (0x000671fc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb4b,	// (0x0006c2e2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe912,	// (0x0006b0a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe912,	// (0x0006b0a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe928,	// (0x0006b0bf) aid_popup_sp_fs_bg_corner_pane

0xcd08,	// (0x0006949f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c9e,	// (0x00066435) popup_sp_fs_calendar_preview_bg_pane

0xe930,	// (0x0006b0c7) popup_sp_fs_calendar_preview_list_pane

0xc900,	// (0x00069097) bg_main_sp_fs_cale_pane_ParamLimits

0xc900,	// (0x00069097) bg_main_sp_fs_cale_pane

0xa5c1,	// (0x00066d58) listscroll_cale_mrui_pane_ParamLimits

0xa5c1,	// (0x00066d58) listscroll_cale_mrui_pane

0xa5d6,	// (0x00066d6d) listscroll_sp_fs_schedule_track_pane

0xa5df,	// (0x00066d76) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa5df,	// (0x00066d76) main_sp_fs_ctrlbar_pane_cp01

0xe938,	// (0x0006b0cf) main_sp_fs_ribbon_pane

0xa5f2,	// (0x00066d89) popup_sp_fs_cale_preview_window

0x8dce,	// (0x00065565) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8dce,	// (0x00065565) list_single_sp_fs_schedule_track_pane

0xe01d,	// (0x0006a7b4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe01d,	// (0x0006a7b4) bg_sp_fs_highlight_list_pane_cp03

0x8df0,	// (0x00065587) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8df0,	// (0x00065587) list_single_sp_fs_schedule_track_pane_g1

0x8dfc,	// (0x00065593) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dfc,	// (0x00065593) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb50,	// (0x0006c2e7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb50,	// (0x0006c2e7) list_single_sp_fs_schedule_track_pane_g

0x8e08,	// (0x0006559f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e08,	// (0x0006559f) list_single_sp_fs_schedule_track_pane_t1

0x8e20,	// (0x000655b7) sp_fs_schedule_track_pane_ParamLimits

0x8e20,	// (0x000655b7) sp_fs_schedule_track_pane

0xe940,	// (0x0006b0d7) sp_fs_schedule_track_pane_g1

0xe948,	// (0x0006b0df) sp_fs_schedule_track_pane_g2

0xe950,	// (0x0006b0e7) sp_fs_schedule_track_pane_g3

0xe958,	// (0x0006b0ef) sp_fs_schedule_track_pane_g4

0xe960,	// (0x0006b0f7) sp_fs_schedule_track_pane_g5

0x0004,

0xfb55,	// (0x0006c2ec) sp_fs_schedule_track_pane_g

0xd6df,	// (0x00069e76) bg_sp_fs_schedule_viewer_highlight_g1

0xace9,	// (0x00067480) bg_sp_fs_schedule_viewer_highlight_g2

0xd6e7,	// (0x00069e7e) bg_sp_fs_schedule_viewer_highlight_g3

0xd6ef,	// (0x00069e86) bg_sp_fs_schedule_viewer_highlight_g4

0xd903,	// (0x0006a09a) bg_sp_fs_schedule_viewer_highlight_g5

0xd6ff,	// (0x00069e96) bg_sp_fs_schedule_viewer_highlight_g6

0xd707,	// (0x00069e9e) bg_sp_fs_schedule_viewer_highlight_g7

0xd70f,	// (0x00069ea6) bg_sp_fs_schedule_viewer_highlight_g8

0xacc9,	// (0x00067460) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb60,	// (0x0006c2f7) bg_sp_fs_schedule_viewer_highlight_g

0x9c9e,	// (0x00066435) bg_main_sp_fs_ribbon_pane

0x8e30,	// (0x000655c7) main_sp_fs_ribbon_pane_g1

0xe968,	// (0x0006b0ff) main_sp_fs_ribbon_pane_t1

0x8e39,	// (0x000655d0) main_sp_fs_ribbon_pane_t2

0xe977,	// (0x0006b10e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb73,	// (0x0006c30a) main_sp_fs_ribbon_pane_t

0xe986,	// (0x0006b11d) main_sp_fs_ribbon_scheduler_pane

0xe98e,	// (0x0006b125) bg_main_sp_fs_ribbon_pane_g1

0xe997,	// (0x0006b12e) bg_main_sp_fs_ribbon_pane_g2

0xe9a0,	// (0x0006b137) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb7a,	// (0x0006c311) bg_main_sp_fs_ribbon_pane_g

0xe9a8,	// (0x0006b13f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b1,	// (0x0006b148) main_sp_fs_ribbon_scheduler_pane_g2

0xe9ba,	// (0x0006b151) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb81,	// (0x0006c318) main_sp_fs_ribbon_scheduler_pane_g

0xe9c3,	// (0x0006b15a) list_cale_mrui_pane

0x8e48,	// (0x000655df) sp_fs_scroll_pane_cp07_ParamLimits

0x8e48,	// (0x000655df) sp_fs_scroll_pane_cp07

0x8e64,	// (0x000655fb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e64,	// (0x000655fb) bg_sp_fs_schedule_viewer_highlight

0xe9d0,	// (0x0006b167) list_single_sp_fs_schedule_track_pane_cp01

0xe9d8,	// (0x0006b16f) list_sp_fs_schedule_track_pane

0xe9e0,	// (0x0006b177) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e0,	// (0x0006b177) sp_fs_scroll_pane_cp06

0xcd08,	// (0x0006949f) bgmain_sp_fs_calendar_pane_g1

0x8e71,	// (0x00065608) list_single_cale_mrui_pane_ParamLimits

0x8e71,	// (0x00065608) list_single_cale_mrui_pane

0xa604,	// (0x00066d9b) list_single_cale_mrui_row_pane_ParamLimits

0xa604,	// (0x00066d9b) list_single_cale_mrui_row_pane

0xa611,	// (0x00066da8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa611,	// (0x00066da8) list_single_cale_mrui_row_pane_g1

0xa75c,	// (0x00066ef3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa75c,	// (0x00066ef3) list_single_cale_mrui_row_pane_t1

0x8e9f,	// (0x00065636) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e9f,	// (0x00065636) list_single_cale_mrui_row_pane_t2

0xa76e,	// (0x00066f05) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa76e,	// (0x00066f05) list_single_cale_mrui_row_pane_t3

0xa79d,	// (0x00066f34) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa79d,	// (0x00066f34) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb8f,	// (0x0006c326) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb8f,	// (0x0006c326) list_single_cale_mrui_row_pane_t

0x8f05,	// (0x0006569c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f05,	// (0x0006569c) list_single_cmail_header_editor_pane_bg_cp01

0x8f25,	// (0x000656bc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f25,	// (0x000656bc) list_single_cmail_header_editor_pane_bg_cp02

0x8f41,	// (0x000656d8) main_radioblah_text_pane_t1_ParamLimits

0x8f41,	// (0x000656d8) main_radioblah_text_pane_t1

0xe9ff,	// (0x0006b196) cam6_indi_pane_cp01

0xea07,	// (0x0006b19e) cam6_mode_pane_cp01

0xea0f,	// (0x0006b1a6) cam6_pano_pane

0xea18,	// (0x0006b1af) cam6_zoom_pane_cp01

0xea20,	// (0x0006b1b7) cam6_pano_image_pane

0xea2b,	// (0x0006b1c2) cam6_pano_pane_g1

0xe30d,	// (0x0006aaa4) cam6_pano_pane_g2

0xea34,	// (0x0006b1cb) cam6_pano_pane_g3

0xea3d,	// (0x0006b1d4) cam6_pano_pane_g4

0xd2eb,	// (0x00069a82) cam6_pano_pane_g5

0xea46,	// (0x0006b1dd) cam6_pano_pane_g6

0xe8b7,	// (0x0006b04e) cam6_pano_pane_g7

0xea50,	// (0x0006b1e7) cam6_pano_pane_g8

0xea59,	// (0x0006b1f0) cam6_pano_pane_g9

0x0008,

0xfb98,	// (0x0006c32f) cam6_pano_pane_g

0x9c9e,	// (0x00066435) main_browser_tag_pane

0xe8bf,	// (0x0006b056) grid_navstr_albumart_pane

0xea64,	// (0x0006b1fb) cell_navstr_albumart_pane_ParamLimits

0xea64,	// (0x0006b1fb) cell_navstr_albumart_pane

0xea84,	// (0x0006b21b) cell_navstr_albumart_pane_g1

0xc711,	// (0x00068ea8) cell_navstr_albumart_pane_g2

0xc721,	// (0x00068eb8) cell_navstr_albumart_pane_g3

0xc719,	// (0x00068eb0) cell_navstr_albumart_pane_g4

0x0003,

0x0b35,	// (0x0005d2cc) cell_navstr_albumart_pane_g

0x8f5c,	// (0x000656f3) bt_list_pane_ParamLimits

0x8f5c,	// (0x000656f3) bt_list_pane

0x8f7c,	// (0x00065713) bt_list_pane_t1

0x8f8b,	// (0x00065722) bt_list_pane_t2

0x0001,

0xfbab,	// (0x0006c342) bt_list_pane_t

0x9c9e,	// (0x00066435) main_cale_prevew_pane

0x8f9a,	// (0x00065731) popup_cale_preview_window_ParamLimits

0x8f9a,	// (0x00065731) popup_cale_preview_window

0xa74e,	// (0x00066ee5) bg_popup_preview_window_pane_cp05_ParamLimits

0xa74e,	// (0x00066ee5) bg_popup_preview_window_pane_cp05

0xea8c,	// (0x0006b223) list_cale_preview_pane_ParamLimits

0xea8c,	// (0x0006b223) list_cale_preview_pane

0x8fb3,	// (0x0006574a) list_double_cale_preview_pane_ParamLimits

0x8fb3,	// (0x0006574a) list_double_cale_preview_pane

0x8fc5,	// (0x0006575c) list_single_cale_preview_pane_ParamLimits

0x8fc5,	// (0x0006575c) list_single_cale_preview_pane

0x8fdb,	// (0x00065772) list_single_cale_preview_pane_g1

0x8fe3,	// (0x0006577a) list_single_cale_preview_pane_t1_ParamLimits

0x8fe3,	// (0x0006577a) list_single_cale_preview_pane_t1

0x8ff8,	// (0x0006578f) list_double_cale_preview_pane_g1

0x9000,	// (0x00065797) list_double_cale_preview_pane_t1_ParamLimits

0x9000,	// (0x00065797) list_double_cale_preview_pane_t1

0x9015,	// (0x000657ac) list_double_cale_preview_pane_t2_ParamLimits

0x9015,	// (0x000657ac) list_double_cale_preview_pane_t2

0x0001,

0xfbb0,	// (0x0006c347) list_double_cale_preview_pane_t_ParamLimits

0xfbb0,	// (0x0006c347) list_double_cale_preview_pane_t

0x9c9e,	// (0x00066435) main_ezdial_pane

0xa74e,	// (0x00066ee5) main_sp_fs_email_pane_ParamLimits

0x8566,	// (0x00064cfd) cmail_ddmenu_btn01_pane_ParamLimits

0x8566,	// (0x00064cfd) cmail_ddmenu_btn01_pane

0x8583,	// (0x00064d1a) cmail_ddmenu_btn02_pane_ParamLimits

0x8583,	// (0x00064d1a) cmail_ddmenu_btn02_pane

0x85a1,	// (0x00064d38) cmail_ddmenu_btn03_pane_ParamLimits

0x85a1,	// (0x00064d38) cmail_ddmenu_btn03_pane

0x863c,	// (0x00064dd3) main_sp_fs_ctrlbar_pane_ParamLimits

0x8652,	// (0x00064de9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c49,	// (0x000653e0) list_cmail_body_pane_ParamLimits

0xe837,	// (0x0006afce) bg_button_pane_cp12

0xe840,	// (0x0006afd7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe840,	// (0x0006afd7) list_single_cmail_header_detail_pane_g3

0xa54b,	// (0x00066ce2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa54b,	// (0x00066ce2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb41,	// (0x0006c2d8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb41,	// (0x0006c2d8) list_single_cmail_header_detail_pane_t

0xa5a3,	// (0x00066d3a) phacti_term_pane_t2_ParamLimits

0xa5a3,	// (0x00066d3a) phacti_term_pane_t2

0x0001,

0xfb46,	// (0x0006c2dd) phacti_term_pane_t_ParamLimits

0xfb46,	// (0x0006c2dd) phacti_term_pane_t

0xea98,	// (0x0006b22f) aid_size_list_single_double

0x902d,	// (0x000657c4) popup_ezdial_listscroll_window

0x904e,	// (0x000657e5) popup_number_entry_window_cp01

0xaa87,	// (0x0006721e) bg_popup_call_pane_cp09

0xeaa4,	// (0x0006b23b) ezdial_list_pane

0xeaac,	// (0x0006b243) scroll_pane_cp23

0xcaed,	// (0x00069284) bg_button_pane_cp028_ParamLimits

0xcaed,	// (0x00069284) bg_button_pane_cp028

0x905c,	// (0x000657f3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x905c,	// (0x000657f3) cmail_ddmenu_btn01_pane_g1

0x906c,	// (0x00065803) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x906c,	// (0x00065803) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbb5,	// (0x0006c34c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbb5,	// (0x0006c34c) cmail_ddmenu_btn01_pane_g

0xeab4,	// (0x0006b24b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeab4,	// (0x0006b24b) cmail_ddmenu_btn01_pane_t1

0xc900,	// (0x00069097) bg_button_pane_cp029_ParamLimits

0xc900,	// (0x00069097) bg_button_pane_cp029

0x906c,	// (0x00065803) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x906c,	// (0x00065803) cmail_ddmenu_btn02_pane_g1

0x9084,	// (0x0006581b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9084,	// (0x0006581b) cmail_ddmenu_btn02_pane_t1

0xe01d,	// (0x0006a7b4) bg_button_pane_cp031_ParamLimits

0xe01d,	// (0x0006a7b4) bg_button_pane_cp031

0x906c,	// (0x00065803) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x906c,	// (0x00065803) cmail_ddmenu_btn03_pane_g1

0x9084,	// (0x0006581b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9084,	// (0x0006581b) cmail_ddmenu_btn03_pane_t1

0x5edc,	// (0x00062673) cell_dialer2_keypad_pane_t1_ParamLimits

0x5ef6,	// (0x0006268d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5ef6,	// (0x0006268d) cell_dialer2_keypad_pane_t1_copy1

0x7e3e,	// (0x000645d5) ncimui_group_button_pane

0xa74e,	// (0x00066ee5) main_sp_fs_calendar_pane_ParamLimits

0x8c70,	// (0x00065407) list_single_cmail_header_caption_pane_ParamLimits

0xa5b8,	// (0x00066d4f) aid_recal_txt_sm_pane

0x9c9e,	// (0x00066435) mian_recal_day_pane

0xa5f2,	// (0x00066d89) popup_sp_fs_cale_preview_window_ParamLimits

0xeac9,	// (0x0006b260) list_recal_day_pane

0xa7e7,	// (0x00066f7e) list_single_recal_day_pane_ParamLimits

0xa7e7,	// (0x00066f7e) list_single_recal_day_pane

0xeaf0,	// (0x0006b287) list_single_recal_day_pane_g1_ParamLimits

0xeaf0,	// (0x0006b287) list_single_recal_day_pane_g1

0xa7f9,	// (0x00066f90) list_single_recal_day_pane_g2_ParamLimits

0xa7f9,	// (0x00066f90) list_single_recal_day_pane_g2

0xa805,	// (0x00066f9c) list_single_recal_day_pane_g3_ParamLimits

0xa805,	// (0x00066f9c) list_single_recal_day_pane_g3

0x90a8,	// (0x0006583f) list_single_recal_day_pane_g4_ParamLimits

0x90a8,	// (0x0006583f) list_single_recal_day_pane_g4

0xa811,	// (0x00066fa8) list_single_recal_day_pane_g5_ParamLimits

0xa811,	// (0x00066fa8) list_single_recal_day_pane_g5

0xa81d,	// (0x00066fb4) list_single_recal_day_pane_g6_ParamLimits

0xa81d,	// (0x00066fb4) list_single_recal_day_pane_g6

0x0004,

0xfbc4,	// (0x0006c35b) list_single_recal_day_pane_g_ParamLimits

0xfbc4,	// (0x0006c35b) list_single_recal_day_pane_g

0xa831,	// (0x00066fc8) list_single_recal_day_pane_t1

0xa843,	// (0x00066fda) list_single_recal_day_pane_t2

0x0001,

0xfbcf,	// (0x0006c366) list_single_recal_day_pane_t

0x90c0,	// (0x00065857) ncimui_query_button_pane_ParamLimits

0x90c0,	// (0x00065857) ncimui_query_button_pane

0x90d0,	// (0x00065867) ncimui_query_button_pane_t1_ParamLimits

0x90d0,	// (0x00065867) ncimui_query_button_pane_t1

0xeafc,	// (0x0006b293) ncimui_query_button_pane_t2_ParamLimits

0xeafc,	// (0x0006b293) ncimui_query_button_pane_t2

0x0001,

0xfbd4,	// (0x0006c36b) ncimui_query_button_pane_t_ParamLimits

0xfbd4,	// (0x0006c36b) ncimui_query_button_pane_t

0x90e3,	// (0x0006587a) query_button_pane_ParamLimits

0x90e3,	// (0x0006587a) query_button_pane

0x9c9e,	// (0x00066435) bg_button_pane_cp0028

0xeb0f,	// (0x0006b2a6) query_button_pane_t1

0x4260,	// (0x000609f7) main_tport_pane_ParamLimits

0x8b53,	// (0x000652ea) bg_popup_window_pane_cp01_ParamLimits

0x8b53,	// (0x000652ea) bg_popup_window_pane_cp01

0x8b61,	// (0x000652f8) heading_pane_cp08_ParamLimits

0x8b61,	// (0x000652f8) heading_pane_cp08

0x8b6f,	// (0x00065306) heading_pane_cp07_ParamLimits

0x8b6f,	// (0x00065306) heading_pane_cp07

0x8bde,	// (0x00065375) cell_tport_appsw_pane_g2

0x0002,

0xfb2e,	// (0x0006c2c5) cell_tport_appsw_pane_g

0xa28c,	// (0x00066a23) input_candi_list_open_g1

0xaeac,	// (0x00067643) list_cale_time_pane_g6_ParamLimits

0xaeac,	// (0x00067643) list_cale_time_pane_g6

0x4cdd,	// (0x00061474) aid_size_touch_calib_1_ParamLimits

0x4cdd,	// (0x00061474) aid_size_touch_calib_1

0x4ce9,	// (0x00061480) aid_size_touch_calib_2_ParamLimits

0x4ce9,	// (0x00061480) aid_size_touch_calib_2

0x4cf7,	// (0x0006148e) aid_size_touch_calib_3_ParamLimits

0x4cf7,	// (0x0006148e) aid_size_touch_calib_3

0x4d07,	// (0x0006149e) aid_size_touch_calib_4_ParamLimits

0x4d07,	// (0x0006149e) aid_size_touch_calib_4

0x4d15,	// (0x000614ac) main_touch_calib_button_group_pane_ParamLimits

0x4d15,	// (0x000614ac) main_touch_calib_button_group_pane

0x4d23,	// (0x000614ba) main_touch_calib_pane_g1_ParamLimits

0x4d2f,	// (0x000614c6) main_touch_calib_pane_g2_ParamLimits

0x4d3b,	// (0x000614d2) main_touch_calib_pane_g3_ParamLimits

0x4d47,	// (0x000614de) main_touch_calib_pane_g4_ParamLimits

0xf622,	// (0x0006bdb9) main_touch_calib_pane_g_ParamLimits

0x4d53,	// (0x000614ea) main_touch_calib_pane_t1_ParamLimits

0x4d6c,	// (0x00061503) main_touch_calib_pane_t2_ParamLimits

0x4d85,	// (0x0006151c) main_touch_calib_pane_t3_ParamLimits

0x4d9b,	// (0x00061532) main_touch_calib_pane_t4_ParamLimits

0x4db1,	// (0x00061548) main_touch_calib_pane_t5_ParamLimits

0xf62b,	// (0x0006bdc2) main_touch_calib_pane_t_ParamLimits

0xd08b,	// (0x00069822) list_single_fp_cale_pane_g3_ParamLimits

0xd08b,	// (0x00069822) list_single_fp_cale_pane_g3

0x4244,	// (0x000609db) bg_button_pane_cp012_ParamLimits

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp03_ParamLimits

0x6de2,	// (0x00063579) cell_vitu2_function_top_pane_g1_ParamLimits

0x4244,	// (0x000609db) bg_vkb2_func_pane_cp04_ParamLimits

0x7dc6,	// (0x0006455d) main_ncimui_button_group_pane_ParamLimits

0x7dc6,	// (0x0006455d) main_ncimui_button_group_pane

0x7e2c,	// (0x000645c3) main_ncimui_pane_t3_ParamLimits

0x7e2c,	// (0x000645c3) main_ncimui_pane_t3

0xe8d5,	// (0x0006b06c) phacti_button_group_pane

0xea98,	// (0x0006b22f) aid_size_list_single_double_ParamLimits

0x902d,	// (0x000657c4) popup_ezdial_listscroll_window_ParamLimits

0x904e,	// (0x000657e5) popup_number_entry_window_cp01_ParamLimits

0x90f0,	// (0x00065887) phacti_button_pane_ParamLimits

0x90f0,	// (0x00065887) phacti_button_pane

0x9c9e,	// (0x00066435) bg_button_pane_cp14

0xeb1d,	// (0x0006b2b4) phacti_button_pane_t1

0x9101,	// (0x00065898) main_touch_calib_button_pane_ParamLimits

0x9101,	// (0x00065898) main_touch_calib_button_pane

0xa8c2,	// (0x00067059) bg_button_pane_cp18_ParamLimits

0xa8c2,	// (0x00067059) bg_button_pane_cp18

0xeb2b,	// (0x0006b2c2) main_touch_calib_button_pane_t1_ParamLimits

0xeb2b,	// (0x0006b2c2) main_touch_calib_button_pane_t1

0xeb41,	// (0x0006b2d8) main_touch_calib_button_pane_t2_ParamLimits

0xeb41,	// (0x0006b2d8) main_touch_calib_button_pane_t2

0x0001,

0x0b6c,	// (0x0005d303) main_touch_calib_button_pane_t_ParamLimits

0x0b6c,	// (0x0005d303) main_touch_calib_button_pane_t

0x9c9e,	// (0x00066435) cell_ncimui_button_pane

0x9c9e,	// (0x00066435) bg_button_pane_cp032

0xeb5f,	// (0x0006b2f6) cell_ncimui_button_pane_t1

0x5f52,	// (0x000626e9) image3_infobar_pane_ParamLimits

0x5f52,	// (0x000626e9) image3_infobar_pane

0x81e9,	// (0x00064980) fs_bigclock_status_pane_ParamLimits

0x81e9,	// (0x00064980) fs_bigclock_status_pane

0x81f6,	// (0x0006498d) main_fs_bigclock_clock_pane_ParamLimits

0x81f6,	// (0x0006498d) main_fs_bigclock_clock_pane

0x820a,	// (0x000649a1) main_fs_bigclock_indi_pane_ParamLimits

0x820a,	// (0x000649a1) main_fs_bigclock_indi_pane

0x8232,	// (0x000649c9) main_fs_bigclock_swipe_pane_ParamLimits

0x8232,	// (0x000649c9) main_fs_bigclock_swipe_pane

0x9c9e,	// (0x00066435) main_fs_clock_dumped_data

0xe41a,	// (0x0006abb1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe41a,	// (0x0006abb1) list_single_fs_bigclock_indicator_pane_g1

0xe435,	// (0x0006abcc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe435,	// (0x0006abcc) list_single_fs_bigclock_indicator_pane_g2

0xe44f,	// (0x0006abe6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe44f,	// (0x0006abe6) list_single_fs_bigclock_indicator_pane_g3

0xe469,	// (0x0006ac00) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe469,	// (0x0006ac00) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0990,	// (0x0005d127) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0990,	// (0x0005d127) list_single_fs_bigclock_indicator_pane_g

0xe494,	// (0x0006ac2b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe494,	// (0x0006ac2b) list_single_fs_bigclock_indicator_pane_t1

0xe4bc,	// (0x0006ac53) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4bc,	// (0x0006ac53) list_single_fs_bigclock_indicator_pane_t2

0xe4e4,	// (0x0006ac7b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e4,	// (0x0006ac7b) list_single_fs_bigclock_indicator_pane_t3

0xe50c,	// (0x0006aca3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe50c,	// (0x0006aca3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x099b,	// (0x0005d132) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x099b,	// (0x0005d132) list_single_fs_bigclock_indicator_pane_t

0xeb6d,	// (0x0006b304) image3_infobar_fav_pane_ParamLimits

0xeb6d,	// (0x0006b304) image3_infobar_fav_pane

0xeb7d,	// (0x0006b314) image3_infobar_loc_pane_ParamLimits

0xeb7d,	// (0x0006b314) image3_infobar_loc_pane

0xeb91,	// (0x0006b328) image3_infobar_time_pane_ParamLimits

0xeb91,	// (0x0006b328) image3_infobar_time_pane

0xcd08,	// (0x0006949f) image3_infobar_time_pane_g1

0xeba1,	// (0x0006b338) image3_infobar_time_pane_t1

0xcd08,	// (0x0006949f) image3_infobar_loc_pane_g1

0xebaf,	// (0x0006b346) image3_infobar_loc_pane_g2

0x0001,

0x0b71,	// (0x0005d308) image3_infobar_loc_pane_g

0xebb7,	// (0x0006b34e) image3_infobar_loc_pane_t1

0xcd08,	// (0x0006949f) image3_infobar_fav_pane_g1

0xebc5,	// (0x0006b35c) image3_infobar_fav_pane_g2

0x0001,

0x0b76,	// (0x0005d30d) image3_infobar_fav_pane_g

0xebcd,	// (0x0006b364) fs_bigclock_status_battery_pane

0xebd6,	// (0x0006b36d) fs_bigclock_status_signal_pane

0xebdf,	// (0x0006b376) fs_bigclock_status_title_pane

0xebe8,	// (0x0006b37f) fs_bigclock_status_signal_pane_g1

0xebf1,	// (0x0006b388) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b7b,	// (0x0005d312) fs_bigclock_status_signal_pane_g

0xebf9,	// (0x0006b390) fs_bigclock_status_battery_pane_g1

0xec02,	// (0x0006b399) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b80,	// (0x0005d317) fs_bigclock_status_battery_pane_g

0xec0a,	// (0x0006b3a1) fs_bigclock_status_title_pane_t1

0x9111,	// (0x000658a8) main_fs_bigclock_clock_pane_g1

0x9111,	// (0x000658a8) main_fs_bigclock_clock_pane_g2

0x911e,	// (0x000658b5) main_fs_bigclock_clock_pane_g3

0x911e,	// (0x000658b5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbd9,	// (0x0006c370) main_fs_bigclock_clock_pane_g

0x912a,	// (0x000658c1) main_fs_bigclock_clock_pane_t1

0x913d,	// (0x000658d4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbe2,	// (0x0006c379) main_fs_bigclock_clock_pane_t

0xec18,	// (0x0006b3af) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec18,	// (0x0006b3af) list_single_fs_bigclock_indicator_pane

0xec29,	// (0x0006b3c0) list_single_fs_bigclock_pane_ParamLimits

0xec29,	// (0x0006b3c0) list_single_fs_bigclock_pane

0xec4f,	// (0x0006b3e6) main_fs_bigclock_indicator_pane_t1

0xec5e,	// (0x0006b3f5) list_single_fs_bigclock_pane_g1

0xec66,	// (0x0006b3fd) list_single_fs_bigclock_pane_t1

0xcd08,	// (0x0006949f) main_fs_bigclock_swipe_pane_g1

0xeca9,	// (0x0006b440) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b9f,	// (0x0005d336) main_fs_bigclock_swipe_pane_g

0xecb1,	// (0x0006b448) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb1,	// (0x0006b448) main_fs_bigclock_swipe_pane_t1

0x3232,	// (0x0005f9c9) call_type_pane_ParamLimits

0x9c9e,	// (0x00066435) main_btmg_pane

0xa63d,	// (0x00066dd4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa63d,	// (0x00066dd4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb88,	// (0x0006c31f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb88,	// (0x0006c31f) list_single_cale_mrui_row_pane_g

0xa7d6,	// (0x00066f6d) list_recal_vselct_arw_lo_pane

0xeae8,	// (0x0006b27f) list_recal_vselct_arw_up_pane

0xa7de,	// (0x00066f75) list_recal_vselct_pane

0x9194,	// (0x0006592b) btmg_button_pane

0x91a0,	// (0x00065937) main_btmg_pane_g1

0x9c9e,	// (0x00066435) bg_button_pane_cp044

0xecce,	// (0x0006b465) btmg_button_pane_t1

0xc8ec,	// (0x00069083) aid_listscroll_gen

0xa74e,	// (0x00066ee5) main_cntbar_detail_pane

0xe819,	// (0x0006afb0) list_cmail_folder_pane

0xc627,	// (0x00068dbe) sp_fs_scroll_pane_cp03_ParamLimits

0x91a8,	// (0x0006593f) list_single_fs_dyc_pane_cp01_ParamLimits

0x91a8,	// (0x0006593f) list_single_fs_dyc_pane_cp01

0xecdc,	// (0x0006b473) aid_size_cmail_indent

0xa855,	// (0x00066fec) list_single_dyc_row_pane_cp01

0x91f4,	// (0x0006598b) cntbar_detail_list_pane_ParamLimits

0x91f4,	// (0x0006598b) cntbar_detail_list_pane

0x922e,	// (0x000659c5) main_cntbar_detail_cont_pane_ParamLimits

0x922e,	// (0x000659c5) main_cntbar_detail_cont_pane

0x3157,	// (0x0005f8ee) scroll_pane_cp032_ParamLimits

0x3157,	// (0x0005f8ee) scroll_pane_cp032

0x923a,	// (0x000659d1) cntbar_detail_list_event_pane_ParamLimits

0x923a,	// (0x000659d1) cntbar_detail_list_event_pane

0x9200,	// (0x00065997) cntbar_detail_list_shct_pane

0xad37,	// (0x000674ce) aid_list_gen

0xece5,	// (0x0006b47c) aid_scroll

0xecee,	// (0x0006b485) aid_size_touch_scroll_bar

0x7542,	// (0x00063cd9) aid_list_double

0x924e,	// (0x000659e5) aid_list_single

0x7530,	// (0x00063cc7) aid_list_single_lg

0x9257,	// (0x000659ee) aid_list_z_g_a_sm

0x925f,	// (0x000659f6) aid_list_z_g_d

0x9267,	// (0x000659fe) aid_txt_z_prm

0x9275,	// (0x00065a0c) aid_txt_z_prm_cp01

0x9283,	// (0x00065a1a) aid_txt_z_sec

0x9291,	// (0x00065a28) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9291,	// (0x00065a28) main_cntbar_detail_cont_pane_g1

0x929e,	// (0x00065a35) main_cntbar_detail_cont_pane_g2_ParamLimits

0x929e,	// (0x00065a35) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbee,	// (0x0006c385) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbee,	// (0x0006c385) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0006b48e) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0006b49c) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0006b4aa) main_cntbar_detail_cont_pane_t3

0x0002,

0x0ba9,	// (0x0005d340) main_cntbar_detail_cont_pane_t

0x92aa,	// (0x00065a41) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92aa,	// (0x00065a41) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0006b4b8) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0006b4c1) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bb0,	// (0x0005d347) cntbar_detail_list_shct_pane_g

0x92be,	// (0x00065a55) cntbar_detail_list_event_pane_g1_ParamLimits

0x92be,	// (0x00065a55) cntbar_detail_list_event_pane_g1

0x92ca,	// (0x00065a61) cntbar_detail_list_event_pane_g2_ParamLimits

0x92ca,	// (0x00065a61) cntbar_detail_list_event_pane_g2

0x0005,

0xfbf3,	// (0x0006c38a) cntbar_detail_list_event_pane_g_ParamLimits

0xfbf3,	// (0x0006c38a) cntbar_detail_list_event_pane_g

0x9336,	// (0x00065acd) cntbar_detail_list_event_pane_t1_ParamLimits

0x9336,	// (0x00065acd) cntbar_detail_list_event_pane_t1

0x934b,	// (0x00065ae2) cntbar_detail_list_event_pane_t2_ParamLimits

0x934b,	// (0x00065ae2) cntbar_detail_list_event_pane_t2

0x0002,

0xfc00,	// (0x0006c397) cntbar_detail_list_event_pane_t_ParamLimits

0xfc00,	// (0x0006c397) cntbar_detail_list_event_pane_t

0xcd08,	// (0x0006949f) cell_cntbar_detail_list_shct_pane_g1

0xb4bc,	// (0x00067c53) navi_pane_mv_g3

0xa74e,	// (0x00066ee5) main_cntbar_detail_pane_ParamLimits

0x9c9e,	// (0x00066435) main_notif_wgt_pane

0x5bdc,	// (0x00062373) aid_tch_main_mp4_pane_g4

0x5e3b,	// (0x000625d2) popup_slider_window_cp02

0xa7cc,	// (0x00066f63) list_recal_day_event_pane

0x91d4,	// (0x0006596b) cntbar_detail_btn_pane_ParamLimits

0x91d4,	// (0x0006596b) cntbar_detail_btn_pane

0x91e4,	// (0x0006597b) cntbar_detail_btn_pane_cp01_ParamLimits

0x91e4,	// (0x0006597b) cntbar_detail_btn_pane_cp01

0x9200,	// (0x00065997) cntbar_detail_list_shct_pane_ParamLimits

0x920c,	// (0x000659a3) cntbar_detail_pane_g1_ParamLimits

0x920c,	// (0x000659a3) cntbar_detail_pane_g1

0x9218,	// (0x000659af) cntbar_detail_pane_t1_ParamLimits

0x9218,	// (0x000659af) cntbar_detail_pane_t1

0x92d6,	// (0x00065a6d) cntbar_detail_list_event_pane_g3_ParamLimits

0x92d6,	// (0x00065a6d) cntbar_detail_list_event_pane_g3

0x92ee,	// (0x00065a85) cntbar_detail_list_event_pane_g4_ParamLimits

0x92ee,	// (0x00065a85) cntbar_detail_list_event_pane_g4

0x9306,	// (0x00065a9d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9306,	// (0x00065a9d) cntbar_detail_list_event_pane_g5

0x931e,	// (0x00065ab5) cntbar_detail_list_event_pane_g6_ParamLimits

0x931e,	// (0x00065ab5) cntbar_detail_list_event_pane_g6

0x9360,	// (0x00065af7) cntbar_detail_list_event_pane_t3_ParamLimits

0x9360,	// (0x00065af7) cntbar_detail_list_event_pane_t3

0x9372,	// (0x00065b09) popup_notif_wgt_window_ParamLimits

0x9372,	// (0x00065b09) popup_notif_wgt_window

0x9382,	// (0x00065b19) popup_submenu_window_cp01_ParamLimits

0x9382,	// (0x00065b19) popup_submenu_window_cp01

0xaa87,	// (0x0006721e) bg_popup_window_pane_cp10

0xed33,	// (0x0006b4ca) listscroll_notif_wgt_pane

0xed45,	// (0x0006b4dc) list_notif_wgt_window

0xed4e,	// (0x0006b4e5) scroll_pane_cp033

0x9394,	// (0x00065b2b) list_notif_wgt_row_pane_ParamLimits

0x9394,	// (0x00065b2b) list_notif_wgt_row_pane

0xed57,	// (0x0006b4ee) aid_size_list_notif_wgt_del

0xed64,	// (0x0006b4fb) list_notif_wgt_row_pane_g1

0xed70,	// (0x0006b507) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0006b516) list_notif_wgt_row_pane_g3

0x0002,

0x0bc9,	// (0x0005d360) list_notif_wgt_row_pane_g

0xed8c,	// (0x0006b523) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0006b539) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0006b54b) list_notif_wgt_row_pane_t3

0x0002,

0x0bd0,	// (0x0005d367) list_notif_wgt_row_pane_t

0xd91d,	// (0x0006a0b4) list_recal_day_event_pane_g1

0xedc6,	// (0x0006b55d) list_recal_day_event_pane_t1

0x9c9e,	// (0x00066435) bg_button_pane_cp045

0x93a6,	// (0x00065b3d) cntbar_detail_btn_pane_t1

0xc900,	// (0x00069097) main_callh_pane_ParamLimits

0xc900,	// (0x00069097) main_callh_pane

0x9c9e,	// (0x00066435) main_coverflow0_pane

0x9c9e,	// (0x00066435) main_wgtman_pane

0x824a,	// (0x000649e1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x824a,	// (0x000649e1) main_fs_bigclock_unlock_btn_pane

0x8bd6,	// (0x0006536d) bg_button_pane_cp16

0x8be6,	// (0x0006537d) cell_tport_appsw_pane_g3

0x93b4,	// (0x00065b4b) cf0_flow_pane_ParamLimits

0x93b4,	// (0x00065b4b) cf0_flow_pane

0xedd5,	// (0x0006b56c) listscroll_cf0_pane

0xede0,	// (0x0006b577) main_cf0_pane_g1

0x93c3,	// (0x00065b5a) main_cf0_pane_t1_ParamLimits

0x93c3,	// (0x00065b5a) main_cf0_pane_t1

0x93d7,	// (0x00065b6e) main_cf0_pane_t2_ParamLimits

0x93d7,	// (0x00065b6e) main_cf0_pane_t2

0x0001,

0xfc07,	// (0x0006c39e) main_cf0_pane_t_ParamLimits

0xfc07,	// (0x0006c39e) main_cf0_pane_t

0xedf2,	// (0x0006b589) scroll_pane_cp11

0x93eb,	// (0x00065b82) cf0_flow_pane_g1

0x93f3,	// (0x00065b8a) cf0_flow_pane_g2

0x0001,

0xfc0c,	// (0x0006c3a3) cf0_flow_pane_g

0x93fb,	// (0x00065b92) cf0_flow_pane_t1

0x9c9e,	// (0x00066435) main_call6_pane

0x9c9e,	// (0x00066435) main_calllock_pane

0x9409,	// (0x00065ba0) call6_btn_grp_pane_ParamLimits

0x9409,	// (0x00065ba0) call6_btn_grp_pane

0x9418,	// (0x00065baf) call6_pane_g1_ParamLimits

0x9418,	// (0x00065baf) call6_pane_g1

0x9428,	// (0x00065bbf) popup_call6_1st_window_ParamLimits

0x9428,	// (0x00065bbf) popup_call6_1st_window

0x9436,	// (0x00065bcd) popup_call6_2nd_window_ParamLimits

0x9436,	// (0x00065bcd) popup_call6_2nd_window

0x9444,	// (0x00065bdb) cell_call6_btn_pane_ParamLimits

0x9444,	// (0x00065bdb) cell_call6_btn_pane

0xaa87,	// (0x0006721e) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0006b594) popup_call6_1st_window_g1

0xee05,	// (0x0006b59c) popup_call6_1st_window_g2

0xee0d,	// (0x0006b5a4) popup_call6_1st_window_g3

0x0002,

0x0be6,	// (0x0005d37d) popup_call6_1st_window_g

0xee15,	// (0x0006b5ac) popup_call6_1st_window_t1

0xee24,	// (0x0006b5bb) popup_call6_1st_window_t2

0xee32,	// (0x0006b5c9) popup_call6_1st_window_t3

0x0002,

0x0bed,	// (0x0005d384) popup_call6_1st_window_t

0xaa87,	// (0x0006721e) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0006b594) popup_call6_2nd_window_g1

0xee05,	// (0x0006b59c) popup_call6_2nd_window_g2

0xee0d,	// (0x0006b5a4) popup_call6_2nd_window_g3

0x0002,

0x0be6,	// (0x0005d37d) popup_call6_2nd_window_g

0xee15,	// (0x0006b5ac) popup_call6_2nd_window_t1

0x1050,	// (0x0005d7e7) bg_button_pane_cp15

0x9453,	// (0x00065bea) cell_call6_btn_pane_g1

0x945c,	// (0x00065bf3) cell_call6_btn_pane_t1

0x946b,	// (0x00065c02) listscroll_wgtman_pane_ParamLimits

0x946b,	// (0x00065c02) listscroll_wgtman_pane

0x9487,	// (0x00065c1e) wgtman_btn_pane_ParamLimits

0x9487,	// (0x00065c1e) wgtman_btn_pane

0xb2b5,	// (0x00067a4c) aid_scroll_copy1

0xee40,	// (0x0006b5d7) list_wgtman_pane

0x94bc,	// (0x00065c53) wgtman_btn_pane_g1_ParamLimits

0x94bc,	// (0x00065c53) wgtman_btn_pane_g1

0x94e4,	// (0x00065c7b) wgtman_btn_pane_t1_ParamLimits

0x94e4,	// (0x00065c7b) wgtman_btn_pane_t1

0xee4a,	// (0x0006b5e1) wgtman_btn_pane_t2_ParamLimits

0xee4a,	// (0x0006b5e1) wgtman_btn_pane_t2

0x0001,

0xfc11,	// (0x0006c3a8) wgtman_btn_pane_t_ParamLimits

0xfc11,	// (0x0006c3a8) wgtman_btn_pane_t

0x951b,	// (0x00065cb2) listrow_wgtman_pane_ParamLimits

0x951b,	// (0x00065cb2) listrow_wgtman_pane

0x9536,	// (0x00065ccd) listrow_wgtman_pane_g1

0x9543,	// (0x00065cda) listrow_wgtman_pane_g2

0x0001,

0xfc16,	// (0x0006c3ad) listrow_wgtman_pane_g

0x9561,	// (0x00065cf8) listrow_wgtman_pane_t1

0x9579,	// (0x00065d10) listrow_wgtman_pane_t2

0x0001,

0xfc1b,	// (0x0006c3b2) listrow_wgtman_pane_t

0x959f,	// (0x00065d36) wait_bar_pane_cp09

0xee61,	// (0x0006b5f8) main_calllock_btn_pane

0xee6b,	// (0x0006b602) main_calllock_pane_g1

0x9c9e,	// (0x00066435) bg_button_pane_cp17

0xee77,	// (0x0006b60e) main_calllock_btn_pane_g1

0xee80,	// (0x0006b617) main_calllock_btn_pane_t1

0x9c9e,	// (0x00066435) main_dialer3_pane

0x9c9e,	// (0x00066435) main_fmrd2_pane

0xcd08,	// (0x0006949f) main_fs_bigclock_unlock_btn_pane_g1

0x95b9,	// (0x00065d50) main_fs_bigclock_unlock_btn_pane_t1

0x95c7,	// (0x00065d5e) area_fmrd2_info_pane_ParamLimits

0x95c7,	// (0x00065d5e) area_fmrd2_info_pane

0x95d5,	// (0x00065d6c) area_fmrd2_visual_pane_ParamLimits

0x95d5,	// (0x00065d6c) area_fmrd2_visual_pane

0x95e3,	// (0x00065d7a) fmrd2_indi_pane_ParamLimits

0x95e3,	// (0x00065d7a) fmrd2_indi_pane

0x95f0,	// (0x00065d87) area_fmrd2_visual_pane_g1

0x95f8,	// (0x00065d8f) area_fmrd2_visual_pane_t1

0x9608,	// (0x00065d9f) area_fmrd2_visual_pane_t2

0x9618,	// (0x00065daf) area_fmrd2_visual_pane_t3

0x0002,

0xfc25,	// (0x0006c3bc) area_fmrd2_visual_pane_t

0x9628,	// (0x00065dbf) area_fmrd2_info_pane_g1

0x9630,	// (0x00065dc7) area_fmrd2_info_pane_t1

0x9640,	// (0x00065dd7) area_fmrd2_info_pane_t2

0x9650,	// (0x00065de7) area_fmrd2_info_pane_t3

0x9660,	// (0x00065df7) area_fmrd2_info_pane_t4

0x0003,

0xfc2c,	// (0x0006c3c3) area_fmrd2_info_pane_t

0x966e,	// (0x00065e05) fmrd2_indi_pane_t1

0x967e,	// (0x00065e15) fmrd2_indi_pane_t2

0x968e,	// (0x00065e25) fmrd2_indi_pane_t3

0x0002,

0xfc35,	// (0x0006c3cc) fmrd2_indi_pane_t

0xe478,	// (0x0006ac0f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe478,	// (0x0006ac0f) list_single_fs_bigclock_indicator_pane_g5

0xe529,	// (0x0006acc0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe529,	// (0x0006acc0) list_single_fs_bigclock_indicator_pane_t5

0x8d81,	// (0x00065518) aid_cell_bcale_month_pane_ParamLimits

0x8d81,	// (0x00065518) aid_cell_bcale_month_pane

0x8d9f,	// (0x00065536) bcale_month_pane_ParamLimits

0x8d9f,	// (0x00065536) bcale_month_pane

0x8dbd,	// (0x00065554) bcale_preview_pane_ParamLimits

0x8dbd,	// (0x00065554) bcale_preview_pane

0xec66,	// (0x0006b3fd) list_single_fs_bigclock_pane_t1_ParamLimits

0xec85,	// (0x0006b41c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec85,	// (0x0006b41c) list_single_fs_bigclock_pane_t2

0x0001,

0x0b9a,	// (0x0005d331) list_single_fs_bigclock_pane_t_ParamLimits

0x0b9a,	// (0x0005d331) list_single_fs_bigclock_pane_t

0x95b1,	// (0x00065d48) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc20,	// (0x0006c3b7) main_fs_bigclock_unlock_btn_pane_g

0x969c,	// (0x00065e33) aid_dia3_key_size_ParamLimits

0x969c,	// (0x00065e33) aid_dia3_key_size

0x96a8,	// (0x00065e3f) aid_dia3_listrow_size_ParamLimits

0x96a8,	// (0x00065e3f) aid_dia3_listrow_size

0x96b8,	// (0x00065e4f) dia3_keypad_fun_pane_ParamLimits

0x96b8,	// (0x00065e4f) dia3_keypad_fun_pane

0x96ca,	// (0x00065e61) dia3_keypad_num_pane_ParamLimits

0x96ca,	// (0x00065e61) dia3_keypad_num_pane

0x96dc,	// (0x00065e73) dia3_listscroll_pane_ParamLimits

0x96dc,	// (0x00065e73) dia3_listscroll_pane

0x96ea,	// (0x00065e81) dia3_numentry_pane_ParamLimits

0x96ea,	// (0x00065e81) dia3_numentry_pane

0xee8f,	// (0x0006b626) dia3_list_pane

0xee9a,	// (0x0006b631) scroll_pane_cp12

0x9c9e,	// (0x00066435) bg_dia3_numentry_pane

0x96f8,	// (0x00065e8f) dia3_numentry_pane_t1

0x9707,	// (0x00065e9e) cell_dia3_key_num_pane

0x970f,	// (0x00065ea6) cell_dia3_key0_fun_pane_ParamLimits

0x970f,	// (0x00065ea6) cell_dia3_key0_fun_pane

0x971c,	// (0x00065eb3) cell_dia3_key1_fun_pane_ParamLimits

0x971c,	// (0x00065eb3) cell_dia3_key1_fun_pane

0x9729,	// (0x00065ec0) dia3_listrow_pane

0xe1b9,	// (0x0006a950) bg_dia3_numentry_pane_g1

0x9c9e,	// (0x00066435) bg_button_pane_cp21

0xeea5,	// (0x0006b63c) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0006b64a) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0006b659) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0006b668) cell_dia3_key_num_pane_t4

0x0003,

0x0c1f,	// (0x0005d3b6) cell_dia3_key_num_pane_t

0x9c9e,	// (0x00066435) bg_button_pane_cp19

0x9736,	// (0x00065ecd) cell_dia3_key0_fun_pane_g1

0x9c9e,	// (0x00066435) bg_button_pane_cp20

0x973e,	// (0x00065ed5) cell_dia3_key1_fun_pane_g1

0x9746,	// (0x00065edd) area_left_week_number_pane

0x9759,	// (0x00065ef0) area_top_day_name_pane

0x9767,	// (0x00065efe) frame_month_view_pane

0xeee0,	// (0x0006b677) grid_month_view_pane

0x977c,	// (0x00065f13) cell_top_day_name_pane_ParamLimits

0x977c,	// (0x00065f13) cell_top_day_name_pane

0x9796,	// (0x00065f2d) cell_area_left_week_number_pane_ParamLimits

0x9796,	// (0x00065f2d) cell_area_left_week_number_pane

0x97b9,	// (0x00065f50) cell_month_view_pane_ParamLimits

0x97b9,	// (0x00065f50) cell_month_view_pane

0xeeee,	// (0x0006b685) frm_month_g1

0x97e5,	// (0x00065f7c) frm_month_g2

0x97f6,	// (0x00065f8d) frm_month_g3

0x9807,	// (0x00065f9e) frm_month_g4

0x9818,	// (0x00065faf) frm_month_g5

0x982b,	// (0x00065fc2) frm_month_g6

0x983e,	// (0x00065fd5) frm_month_g7

0xeefb,	// (0x0006b692) frm_month_g8

0x9851,	// (0x00065fe8) frm_month_g9

0x985e,	// (0x00065ff5) frm_month_g10

0x986b,	// (0x00066002) frm_month_g11

0x9878,	// (0x0006600f) frm_month_g12

0x9885,	// (0x0006601c) frm_month_g13

0x9892,	// (0x00066029) frm_month_g14

0x98a1,	// (0x00066038) frm_month_g15

0x98b0,	// (0x00066047) frm_month_g16

0x000f,

0xfc3c,	// (0x0006c3d3) frm_month_g

0xef08,	// (0x0006b69f) cell_top_day_name_pane_t1

0x98bf,	// (0x00066056) cell_area_left_week_number_pane_g1

0x98ce,	// (0x00066065) cell_area_left_week_number_pane_t1

0xcf6b,	// (0x00069702) cell_month_view_pane_g1

0x98e4,	// (0x0006607b) cell_month_view_pane_t1

0x9c9e,	// (0x00066435) main_fps_pane

0xe746,	// (0x0006aedd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe746,	// (0x0006aedd) cmail_ddmenu_btn02_pane_cp1

0xe762,	// (0x0006aef9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe762,	// (0x0006aef9) cmail_ddmenu_btn02_pane_cp2

0x9078,	// (0x0006580f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9078,	// (0x0006580f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbba,	// (0x0006c351) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbba,	// (0x0006c351) cmail_ddmenu_btn02_pane_g

0x9096,	// (0x0006582d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9096,	// (0x0006582d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbbf,	// (0x0006c356) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbbf,	// (0x0006c356) cmail_ddmenu_btn02_pane_t

0x98fa,	// (0x00066091) fps_text_pane_ParamLimits

0x98fa,	// (0x00066091) fps_text_pane

0x9907,	// (0x0006609e) main_fps_pane_g1_ParamLimits

0x9907,	// (0x0006609e) main_fps_pane_g1

0x9915,	// (0x000660ac) wait_bar_pane_cp010_ParamLimits

0x9915,	// (0x000660ac) wait_bar_pane_cp010

0x9921,	// (0x000660b8) fps_text_pane_t1_ParamLimits

0x9921,	// (0x000660b8) fps_text_pane_t1

0x62f4,	// (0x00062a8b) cam4_image_uncrop_pane_g1

0x62fd,	// (0x00062a94) cam4_image_uncrop_pane_g2

0x6306,	// (0x00062a9d) cam4_image_uncrop_pane_g3

0x630f,	// (0x00062aa6) cam4_image_uncrop_pane_g4

0x0003,

0xf74b,	// (0x0006bee2) cam4_image_uncrop_pane_g

0x9729,	// (0x00065ec0) dia3_listrow_pane_ParamLimits

0x9c9e,	// (0x00066435) main_phob2_pane

0x8bb8,	// (0x0006534f) cell_tport_appsw_pane_cp02_ParamLimits

0x8bb8,	// (0x0006534f) cell_tport_appsw_pane_cp02

0x8bc7,	// (0x0006535e) cell_tport_appsw_pane_cp03_ParamLimits

0x8bc7,	// (0x0006535e) cell_tport_appsw_pane_cp03

0x9c9e,	// (0x00066435) phob2_contact_card_pane

0x9c9e,	// (0x00066435) phob2_listscroll_pane

0xef1b,	// (0x0006b6b2) phob2_list_pane

0xef23,	// (0x0006b6ba) scroll_pane_cp034

0x993a,	// (0x000660d1) phob2_cc_data_pane_ParamLimits

0x993a,	// (0x000660d1) phob2_cc_data_pane

0x9954,	// (0x000660eb) phob2_cc_listscroll_pane_ParamLimits

0x9954,	// (0x000660eb) phob2_cc_listscroll_pane

0x951b,	// (0x00065cb2) list_double_large_graphic_phob2_pane_ParamLimits

0x951b,	// (0x00065cb2) list_double_large_graphic_phob2_pane

0x996e,	// (0x00066105) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x996e,	// (0x00066105) list_double_large_graphic_phob2_pane_g1

0x9984,	// (0x0006611b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9984,	// (0x0006611b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc5d,	// (0x0006c3f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc5d,	// (0x0006c3f4) list_double_large_graphic_phob2_pane_g

0x9990,	// (0x00066127) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9990,	// (0x00066127) list_double_large_graphic_phob2_pane_t1

0x99a5,	// (0x0006613c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99a5,	// (0x0006613c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc62,	// (0x0006c3f9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc62,	// (0x0006c3f9) list_double_large_graphic_phob2_pane_t

0x9c9e,	// (0x00066435) list_highlight_pane_cp024

0x99b7,	// (0x0006614e) phob2_cc_button_pane

0x99bf,	// (0x00066156) phob2_cc_data_pane_g1_ParamLimits

0x99bf,	// (0x00066156) phob2_cc_data_pane_g1

0x99cb,	// (0x00066162) phob2_cc_data_pane_g2_ParamLimits

0x99cb,	// (0x00066162) phob2_cc_data_pane_g2

0x0001,

0xfc67,	// (0x0006c3fe) phob2_cc_data_pane_g_ParamLimits

0xfc67,	// (0x0006c3fe) phob2_cc_data_pane_g

0x99d7,	// (0x0006616e) phob2_cc_data_pane_t1_ParamLimits

0x99d7,	// (0x0006616e) phob2_cc_data_pane_t1

0x99e9,	// (0x00066180) phob2_cc_data_pane_t2_ParamLimits

0x99e9,	// (0x00066180) phob2_cc_data_pane_t2

0x99fb,	// (0x00066192) phob2_cc_data_pane_t3_ParamLimits

0x99fb,	// (0x00066192) phob2_cc_data_pane_t3

0x0002,

0xfc6c,	// (0x0006c403) phob2_cc_data_pane_t_ParamLimits

0xfc6c,	// (0x0006c403) phob2_cc_data_pane_t

0xef2b,	// (0x0006b6c2) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0006b6c2) phob2_cc_list_pane

0xdba9,	// (0x0006a340) scroll_pane_cp035_ParamLimits

0xdba9,	// (0x0006a340) scroll_pane_cp035

0xa74e,	// (0x00066ee5) bg_button_pane_cp033

0xef37,	// (0x0006b6ce) phob2_cc_button_pane_g1

0xef43,	// (0x0006b6da) phob2_cc_button_pane_t1

0xef58,	// (0x0006b6ef) phob2_cc_button_pane_t2

0x0001,

0xfc73,	// (0x0006c40a) phob2_cc_button_pane_t

0x9a0d,	// (0x000661a4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a0d,	// (0x000661a4) list_double_large_graphic_phob2_cc_pane

0x9a7b,	// (0x00066212) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a7b,	// (0x00066212) list_double_large_graphic_phob2_cc_pane_g1

0xa85e,	// (0x00066ff5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa85e,	// (0x00066ff5) list_double_large_graphic_phob2_cc_pane_g2

0x9a8c,	// (0x00066223) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a8c,	// (0x00066223) list_double_large_graphic_phob2_cc_pane_g3

0x9a98,	// (0x0006622f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a98,	// (0x0006622f) list_double_large_graphic_phob2_cc_pane_g4

0x9aa4,	// (0x0006623b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aa4,	// (0x0006623b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc78,	// (0x0006c40f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc78,	// (0x0006c40f) list_double_large_graphic_phob2_cc_pane_g

0x9ab0,	// (0x00066247) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ab0,	// (0x00066247) list_double_large_graphic_phob2_cc_pane_t1

0x9ad9,	// (0x00066270) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ad9,	// (0x00066270) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc83,	// (0x0006c41a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc83,	// (0x0006c41a) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x0006b701) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x0006b701) list_highlight_pane_cp025

0xa74e,	// (0x00066ee5) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0006b6ce) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0006b6da) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0006b6ef) phob2_cc_button_pane_t2_ParamLimits

0xfc73,	// (0x0006c40a) phob2_cc_button_pane_t_ParamLimits

0x1044,	// (0x0005d7db) popup_wgtman_window

0xd7f9,	// (0x00069f90) scroll_pane_cp038

0x94a4,	// (0x00065c3b) wgtman_btn_pane_cp_01_ParamLimits

0x94a4,	// (0x00065c3b) wgtman_btn_pane_cp_01

0xef78,	// (0x0006b70f) wgtman_content_pane

0xef81,	// (0x0006b718) wgtman_heading_pane

0x9c9e,	// (0x00066435) bg_heading_pane_cp02

0xef8a,	// (0x0006b721) wgtman_heading_pane_g1

0xef92,	// (0x0006b729) wgtman_heading_pane_t1

0xefa0,	// (0x0006b737) scroll_pane_cp036

0xefa8,	// (0x0006b73f) wgtman_list_pane

0xefb0,	// (0x0006b747) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x0006b747) wgtman_list_pane_t1

0x6253,	// (0x000629ea) cam4_grid_pane

0x6ff0,	// (0x00063787) bg_button_pane_cp015_ParamLimits

0x7002,	// (0x00063799) bg_button_pane_cp016_ParamLimits

0x7015,	// (0x000637ac) bg_button_pane_cp017_ParamLimits

0x706b,	// (0x00063802) popup_vitu2_query_window_g3_ParamLimits

0x706b,	// (0x00063802) popup_vitu2_query_window_g3

0x7126,	// (0x000638bd) popup_vitu2_query_window_t6_ParamLimits

0x7126,	// (0x000638bd) popup_vitu2_query_window_t6

0x7151,	// (0x000638e8) popup_vitu2_query_window_t7_ParamLimits

0x7151,	// (0x000638e8) popup_vitu2_query_window_t7

0xe22c,	// (0x0006a9c3) cam4_grid_pane_g1

0xe235,	// (0x0006a9cc) cam4_grid_pane_g2

0xefca,	// (0x0006b761) cam4_grid_pane_g3

0xefd3,	// (0x0006b76a) cam4_grid_pane_g4

0x0003,

0xfc88,	// (0x0006c41f) cam4_grid_pane_g

0x1ee8,	// (0x0005e67f) aid_placing_vt_slider_lsc_ParamLimits

0x2234,	// (0x0005e9cb) vidtel_button_pane_ParamLimits

0x2234,	// (0x0005e9cb) vidtel_button_pane

0x9c9e,	// (0x00066435) bg_button_pane_cp034

0xefde,	// (0x0006b775) vidtel_button_pane_g1

0xefe6,	// (0x0006b77d) vidtel_button_pane_t1

0xd8fb,	// (0x0006a092) aid_size_vtel_slider_touch

0xdba9,	// (0x0006a340) scroll_pane_cp039

0x7f87,	// (0x0006471e) ncim_query_button_pane_cp01_ParamLimits

0x7fa6,	// (0x0006473d) ncimui_query_pane_g1_ParamLimits

0xa74e,	// (0x00066ee5) input_focus_pane_cp012_ParamLimits

0xe1f7,	// (0x0006a98e) ncim_query_entry_pane_t1_ParamLimits

0xdba9,	// (0x0006a340) scroll_pane_cp039_ParamLimits

0xb3a7,	// (0x00067b3e) navi_pane_bcale_mc_g1

0xb3af,	// (0x00067b46) navi_pane_bcale_mc_t1

0xe796,	// (0x0006af2d) main_sp_fs_email_pane_g1

0xe7a2,	// (0x0006af39) main_sp_fs_email_pane_g2

0x0001,

0x0a05,	// (0x0005d19c) main_sp_fs_email_pane_g

0xe9f2,	// (0x0006b189) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f2,	// (0x0006b189) list_single_cale_mrui_row_pane_g3

0x90b6,	// (0x0006584d) list_single_recal_day_pane_g5_event_pane

0xa829,	// (0x00066fc0) list_single_recal_day_pane_g7

0xeffc,	// (0x0006b793) list_recal_day_event_pane_cp01

0xf005,	// (0x0006b79c) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0006b7a4) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0006b7ac) list_recal_vselct_pane_cp01

0xd91d,	// (0x0006a0b4) list_recal_day_event_pane_cp01_g1

0xa86a,	// (0x00067001) list_recal_day_event_pane_cp01_t1

0xa831,	// (0x00066fc8) list_single_recal_day_pane_t1_ParamLimits

0xa843,	// (0x00066fda) list_single_recal_day_pane_t2_ParamLimits

0xfbcf,	// (0x0006c366) list_single_recal_day_pane_t_ParamLimits

0xa6d3,	// (0x00066e6a) bg_notes_pane_ParamLimits

0xa8a0,	// (0x00067037) list_notes_pane_ParamLimits

0x13ac,	// (0x0005db43) scroll_pane_cp06_ParamLimits

0xa8c2,	// (0x00067059) main_notes_pane_ParamLimits

0xa74e,	// (0x00066ee5) main_welc_pane

0x9b11,	// (0x000662a8) main_welc_body_pane_ParamLimits

0x9b11,	// (0x000662a8) main_welc_body_pane

0x9b2b,	// (0x000662c2) main_welc_opti_pane_ParamLimits

0x9b2b,	// (0x000662c2) main_welc_opti_pane

0x9b6a,	// (0x00066301) main_welc_pane_t1_ParamLimits

0x9b6a,	// (0x00066301) main_welc_pane_t1

0x9bc6,	// (0x0006635d) main_welc_body_row_pane_ParamLimits

0x9bc6,	// (0x0006635d) main_welc_body_row_pane

0xe01d,	// (0x0006a7b4) main_welc_opti_row_pane_ParamLimits

0xe01d,	// (0x0006a7b4) main_welc_opti_row_pane

0xf01f,	// (0x0006b7b6) main_welc_opti_row_pane_g1

0x9beb,	// (0x00066382) main_welc_opti_row_pane_t1

0xf027,	// (0x0006b7be) main_welc_body_row_pane_t1

0xed3d,	// (0x0006b4d4) popup_notif_wgt_heading_pane

0xed57,	// (0x0006b4ee) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0006b4fb) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0006b507) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0006b516) list_notif_wgt_row_pane_g3_ParamLimits

0x0bc9,	// (0x0005d360) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0006b523) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0006b539) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0006b54b) list_notif_wgt_row_pane_t3_ParamLimits

0x0bd0,	// (0x0005d367) list_notif_wgt_row_pane_t_ParamLimits

0x9536,	// (0x00065ccd) listrow_wgtman_pane_g1_ParamLimits

0x9543,	// (0x00065cda) listrow_wgtman_pane_g2_ParamLimits

0xfc16,	// (0x0006c3ad) listrow_wgtman_pane_g_ParamLimits

0x9561,	// (0x00065cf8) listrow_wgtman_pane_t1_ParamLimits

0x9579,	// (0x00065d10) listrow_wgtman_pane_t2_ParamLimits

0xfc1b,	// (0x0006c3b2) listrow_wgtman_pane_t_ParamLimits

0x959f,	// (0x00065d36) wait_bar_pane_cp09_ParamLimits

0x9c9e,	// (0x00066435) bg_popup_heading_pane_cp02

0xf036,	// (0x0006b7cd) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0006b7d5) popup_notif_wgt_heading_pane_t1

0x9c9e,	// (0x00066435) main_vids_pane

0x9c9e,	// (0x00066435) vids_listscroll_pane

0x9bfa,	// (0x00066391) scroll_pane_cp040

0x9c9e,	// (0x00066435) vids_list_pane

0x9c05,	// (0x0006639c) vids_list_double_pane_ParamLimits

0x9c05,	// (0x0006639c) vids_list_double_pane

0x9c1f,	// (0x000663b6) vids_list_double_pane_g1

0x9c28,	// (0x000663bf) vids_list_double_pane_t1

0x9c38,	// (0x000663cf) vids_list_double_pane_t2

0x0001,

0xfc9f,	// (0x0006c436) vids_list_double_pane_t

0x4244,	// (0x000609db) main_ncimui_pane_ParamLimits

0x7dde,	// (0x00064575) main_ncimui_pane_g1_ParamLimits

0x7dea,	// (0x00064581) main_ncimui_pane_g2_ParamLimits

0x7dea,	// (0x00064581) main_ncimui_pane_g2

0x0001,

0xfa05,	// (0x0006c19c) main_ncimui_pane_g_ParamLimits

0xfa05,	// (0x0006c19c) main_ncimui_pane_g

0x9b44,	// (0x000662db) main_welc_pane_g1_ParamLimits

0x9b44,	// (0x000662db) main_welc_pane_g1

0x9b50,	// (0x000662e7) main_welc_pane_g2_ParamLimits

0x9b50,	// (0x000662e7) main_welc_pane_g2

0x0002,

0xfc91,	// (0x0006c428) main_welc_pane_g_ParamLimits

0xfc91,	// (0x0006c428) main_welc_pane_g

0xa6d3,	// (0x00066e6a) listscroll_mce_pane_ParamLimits

0xb4fc,	// (0x00067c93) wait_bar_pane_cp10

0xc8f4,	// (0x0006908b) main_cale_day_pane_ParamLimits

0xc8f4,	// (0x0006908b) main_cale_week_pane_ParamLimits

0xa6d3,	// (0x00066e6a) main_messa_pane_ParamLimits

0x557d,	// (0x00061d14) main_clock2_btn_pane_ParamLimits

0x557d,	// (0x00061d14) main_clock2_btn_pane

0xd113,	// (0x000698aa) main_clock2_btn_pane_cp01_ParamLimits

0xd113,	// (0x000698aa) main_clock2_btn_pane_cp01

0xe9c3,	// (0x0006b15a) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0006b581) main_cf0_pane_g2

0x0001,

0x0bd7,	// (0x0005d36e) main_cf0_pane_g

0x9746,	// (0x00065edd) area_left_week_number_pane_ParamLimits

0x9759,	// (0x00065ef0) area_top_day_name_pane_ParamLimits

0x9767,	// (0x00065efe) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0006b677) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0006b685) frm_month_g1_ParamLimits

0x97e5,	// (0x00065f7c) frm_month_g2_ParamLimits

0x97f6,	// (0x00065f8d) frm_month_g3_ParamLimits

0x9807,	// (0x00065f9e) frm_month_g4_ParamLimits

0x9818,	// (0x00065faf) frm_month_g5_ParamLimits

0x982b,	// (0x00065fc2) frm_month_g6_ParamLimits

0x983e,	// (0x00065fd5) frm_month_g7_ParamLimits

0xeefb,	// (0x0006b692) frm_month_g8_ParamLimits

0x9851,	// (0x00065fe8) frm_month_g9_ParamLimits

0x985e,	// (0x00065ff5) frm_month_g10_ParamLimits

0x986b,	// (0x00066002) frm_month_g11_ParamLimits

0x9878,	// (0x0006600f) frm_month_g12_ParamLimits

0x9885,	// (0x0006601c) frm_month_g13_ParamLimits

0x9892,	// (0x00066029) frm_month_g14_ParamLimits

0x98a1,	// (0x00066038) frm_month_g15_ParamLimits

0x98b0,	// (0x00066047) frm_month_g16_ParamLimits

0xfc3c,	// (0x0006c3d3) frm_month_g_ParamLimits

0xef08,	// (0x0006b69f) cell_top_day_name_pane_t1_ParamLimits

0x98bf,	// (0x00066056) cell_area_left_week_number_pane_g1_ParamLimits

0x98ce,	// (0x00066065) cell_area_left_week_number_pane_t1_ParamLimits

0xcf6b,	// (0x00069702) cell_month_view_pane_g1_ParamLimits

0x98e4,	// (0x0006607b) cell_month_view_pane_t1_ParamLimits

0xa6cb,	// (0x00066e62) main_clock2_btn_pane_g1

0xf04c,	// (0x0006b7e3) main_clock2_btn_pane_t1

0xa74e,	// (0x00066ee5) listscroll_cmail_pane_ParamLimits

0xe796,	// (0x0006af2d) main_sp_fs_email_pane_g1_ParamLimits

0xe7a2,	// (0x0006af39) main_sp_fs_email_pane_g2_ParamLimits

0x0a05,	// (0x0005d19c) main_sp_fs_email_pane_g_ParamLimits

0xeac9,	// (0x0006b260) list_recal_day_pane_ParamLimits

0xeada,	// (0x0006b271) mian_recal_day_pane_t1

0x8884,	// (0x0006501b) list_single_dyc_row_text_pane_t4_ParamLimits

0x8884,	// (0x0006501b) list_single_dyc_row_text_pane_t4

0x88bb,	// (0x00065052) list_single_dyc_row_text_pane_t5_ParamLimits

0x88bb,	// (0x00065052) list_single_dyc_row_text_pane_t5

0xa48c,	// (0x00066c23) list_single_dyc_row_text_pane_t6_ParamLimits

0xa48c,	// (0x00066c23) list_single_dyc_row_text_pane_t6

0x3089,	// (0x0005f820) aid_mgn_list_cale_time_pane

0x4244,	// (0x000609db) main_gallery2_pane_ParamLimits

0xd129,	// (0x000698c0) main_clock2_pane_cp01_t1

0xd139,	// (0x000698d0) main_clock2_pane_cp01_t3

0x0001,

0x04dc,	// (0x0005cc73) main_clock2_pane_cp01_t

0x17fe,	// (0x0005df95) cale_week_scroll_pane_g16_ParamLimits

0x17fe,	// (0x0005df95) cale_week_scroll_pane_g16

0xaa87,	// (0x0006721e) vorec_slider_pane

0xefe6,	// (0x0006b77d) vidtel_button_pane_t1_ParamLimits

0x9111,	// (0x000658a8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9111,	// (0x000658a8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x911e,	// (0x000658b5) main_fs_bigclock_clock_pane_g3_ParamLimits

0x911e,	// (0x000658b5) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbd9,	// (0x0006c370) main_fs_bigclock_clock_pane_g_ParamLimits

0x912a,	// (0x000658c1) main_fs_bigclock_clock_pane_t1_ParamLimits

0x913d,	// (0x000658d4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbe2,	// (0x0006c379) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e1c,	// (0x000615b3) main_mup3_lyrics_pane_ParamLimits

0x4e1c,	// (0x000615b3) main_mup3_lyrics_pane

0x9c6c,	// (0x00066403) main_mup3_lyrics_pane_t1_ParamLimits

0x9c6c,	// (0x00066403) main_mup3_lyrics_pane_t1

0x5bc6,	// (0x0006235d) aid_main_mp4_pane_t1_area

0x5bd0,	// (0x00062367) aid_main_mp4_pane_t2_area

0x5ccf,	// (0x00062466) main_mp4_pane_g7_ParamLimits

0x5ccf,	// (0x00062466) main_mp4_pane_g7

0x5cdb,	// (0x00062472) main_mp4_pane_g8_ParamLimits

0x5cdb,	// (0x00062472) main_mp4_pane_g8

0x60fb,	// (0x00062892) aid_call6_pane_g1_size

0x9a4f,	// (0x000661e6) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a4f,	// (0x000661e6) list_double_large_graphic_phob2_other_pane

0xae4b,	// (0x000675e2) list_double_large_graphic_phob2_other_pane_g1

0x9c9e,	// (0x00066435) list_highlight_pane_cp026

0xa74e,	// (0x00066ee5) main_welc_pane_ParamLimits

0x85cf,	// (0x00064d66) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x85cf,	// (0x00064d66) main_sp_fs_ctrlbar_pane_g3

0x85e7,	// (0x00064d7e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x85e7,	// (0x00064d7e) main_sp_fs_ctrlbar_pane_g4

0x8619,	// (0x00064db0) toolbar2_fixed_button_pane_cp01

0x8624,	// (0x00064dbb) toolbar2_fixed_button_pane_cp02

0x862f,	// (0x00064dc6) toolbar2_fixed_button_pane_cp03

0x9b02,	// (0x00066299) list_welc_entry_pane_ParamLimits

0x9b02,	// (0x00066299) list_welc_entry_pane

0x9b5e,	// (0x000662f5) main_welc_pane_g3_ParamLimits

0x9b5e,	// (0x000662f5) main_welc_pane_g3

0x9b84,	// (0x0006631b) main_welc_pane_t2_ParamLimits

0x9b84,	// (0x0006631b) main_welc_pane_t2

0x9b98,	// (0x0006632f) main_welc_pane_t3_ParamLimits

0x9b98,	// (0x0006632f) main_welc_pane_t3

0x0002,

0xfc98,	// (0x0006c42f) main_welc_pane_t_ParamLimits

0xfc98,	// (0x0006c42f) main_welc_pane_t

0x9baa,	// (0x00066341) welc_button_pane_ParamLimits

0x9baa,	// (0x00066341) welc_button_pane

0x9bb8,	// (0x0006634f) welc_service_logo_pane_ParamLimits

0x9bb8,	// (0x0006634f) welc_service_logo_pane

0xf05a,	// (0x0006b7f1) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0006b7f1) list_single_welc_entry_pane

0xf06b,	// (0x0006b802) list_single_welc_entry_pane_g1

0xf073,	// (0x0006b80a) list_single_welc_entry_pane_t1

0xf081,	// (0x0006b818) list_single_welc_entry_pane_t2

0x0001,

0x0c8b,	// (0x0005d422) list_single_welc_entry_pane_t

0x9c9e,	// (0x00066435) bg_button_pane_cp035

0xf08f,	// (0x0006b826) welc_button_pane_t1

0xf09d,	// (0x0006b834) welc_service_logo_pane_g1

0xf0a6,	// (0x0006b83d) welc_service_logo_pane_g2

0x0001,

0x0c90,	// (0x0005d427) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
