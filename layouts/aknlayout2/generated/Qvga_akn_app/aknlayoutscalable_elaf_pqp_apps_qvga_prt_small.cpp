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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00030766 };

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
0x6289,	// (0x000369ef) Screen

0x6293,	// (0x000369f9) application_window

0x62e5,	// (0x00036a4b) area_bottom_pane_ParamLimits

0x62e5,	// (0x00036a4b) area_bottom_pane

0x6336,	// (0x00036a9c) area_top_pane_ParamLimits

0x6336,	// (0x00036a9c) area_top_pane

0x638c,	// (0x00036af2) call_video_uplink_pane_ParamLimits

0x638c,	// (0x00036af2) call_video_uplink_pane

0x63c5,	// (0x00036b2b) main_pane_ParamLimits

0x63c5,	// (0x00036b2b) main_pane

0x0f33,	// (0x00031699) context_pane

0x8f2a,	// (0x00039690) navi_pane

0x8f4a,	// (0x000396b0) popup_cale_events_window_ParamLimits

0x8f4a,	// (0x000396b0) popup_cale_events_window

0x0f46,	// (0x000316ac) popup_mup_playback_window

0x8f61,	// (0x000396c7) signal_pane

0xdb75,	// (0x0003e2db) main_browser_pane

0xdd26,	// (0x0003e48c) main_burst_pane

0x8de8,	// (0x0003954e) main_calc_pane

0x0ed1,	// (0x00031637) main_cale_day_pane

0x6a05,	// (0x0003716b) main_cale_month_pane

0x0ed1,	// (0x00031637) main_cale_week_pane

0xdd26,	// (0x0003e48c) main_call_pane

0xd849,	// (0x0003dfaf) main_call_poc_pane

0xdd26,	// (0x0003e48c) main_camera_pane

0xdd26,	// (0x0003e48c) main_chi_dic_pane

0xe50e,	// (0x0003ec74) main_clock_pane

0xd849,	// (0x0003dfaf) main_fmradio_pane

0xdd26,	// (0x0003e48c) main_graph_messa_pane

0xd849,	// (0x0003dfaf) main_help_pane

0xdb75,	// (0x0003e2db) main_im_pane

0xdaa4,	// (0x0003e20a) main_image_pane_ParamLimits

0xdaa4,	// (0x0003e20a) main_image_pane

0xd849,	// (0x0003dfaf) main_location2_pane

0xdd26,	// (0x0003e48c) main_location_pane

0xdaa4,	// (0x0003e20a) main_messa_pane

0xd849,	// (0x0003dfaf) main_mp2_pane

0xdd26,	// (0x0003e48c) main_mp_pane

0xd849,	// (0x0003dfaf) main_msg_pane

0xd849,	// (0x0003dfaf) main_mup_eq_pane

0xd849,	// (0x0003dfaf) main_mup_pane

0xdb75,	// (0x0003e2db) main_notes_pane

0xd849,	// (0x0003dfaf) main_pec_pane

0xd849,	// (0x0003dfaf) main_phob_pane

0xd849,	// (0x0003dfaf) main_pinb_pane

0xd849,	// (0x0003dfaf) main_postcard_pane

0xd849,	// (0x0003dfaf) main_qdial_pane

0xdd26,	// (0x0003e48c) main_skin_pane

0xd849,	// (0x0003dfaf) main_smil2_pane

0xdd26,	// (0x0003e48c) main_smil_pane

0xdd26,	// (0x0003e48c) main_video_pane

0xdd26,	// (0x0003e48c) main_video_tele_pane

0xdaa4,	// (0x0003e20a) main_viewer_pane_ParamLimits

0xdaa4,	// (0x0003e20a) main_viewer_pane

0xdd26,	// (0x0003e48c) main_vorec_pane

0x8e24,	// (0x0003958a) popup_blid_sat_info_window_ParamLimits

0x8e24,	// (0x0003958a) popup_blid_sat_info_window

0x8e40,	// (0x000395a6) popup_dyc_status_message_window_ParamLimits

0x8e40,	// (0x000395a6) popup_dyc_status_message_window

0x8e4c,	// (0x000395b2) popup_grid_large_graphic_window_ParamLimits

0x8e4c,	// (0x000395b2) popup_grid_large_graphic_window

0x8ec1,	// (0x00039627) popup_loc_request_window_ParamLimits

0x8ec1,	// (0x00039627) popup_loc_request_window

0x8f04,	// (0x0003966a) popup_wml_address_window_ParamLimits

0x8f04,	// (0x0003966a) popup_wml_address_window

0x8cf4,	// (0x0003945a) call_muted_g1

0x8a31,	// (0x00039197) popup_call_audio_conf_window_ParamLimits

0x8a31,	// (0x00039197) popup_call_audio_conf_window

0x8d04,	// (0x0003946a) popup_call_audio_first_window_ParamLimits

0x8d04,	// (0x0003946a) popup_call_audio_first_window

0x8d38,	// (0x0003949e) popup_call_audio_in_window_ParamLimits

0x8d38,	// (0x0003949e) popup_call_audio_in_window

0x8d54,	// (0x000394ba) popup_call_audio_out_window_ParamLimits

0x8d54,	// (0x000394ba) popup_call_audio_out_window

0x8d70,	// (0x000394d6) popup_call_audio_second_window_ParamLimits

0x8d70,	// (0x000394d6) popup_call_audio_second_window

0x8d98,	// (0x000394fe) popup_call_audio_wait_window_ParamLimits

0x8d98,	// (0x000394fe) popup_call_audio_wait_window

0x8db7,	// (0x0003951d) popup_number_entry_window_ParamLimits

0x8db7,	// (0x0003951d) popup_number_entry_window

0xd404,	// (0x0003db6a) bg_popup_call_pane_cp05_ParamLimits

0xd404,	// (0x0003db6a) bg_popup_call_pane_cp05

0xd424,	// (0x0003db8a) popup_number_entry_window_t1

0xd437,	// (0x0003db9d) popup_number_entry_window_t2

0xd449,	// (0x0003dbaf) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003f830) popup_number_entry_window_t

0xd48f,	// (0x0003dbf5) text_title_cp2

0xd4a2,	// (0x0003dc08) bg_popup_call_pane_cp_ParamLimits

0xd4a2,	// (0x0003dc08) bg_popup_call_pane_cp

0xd4b0,	// (0x0003dc16) call_thumbnail_pane

0xd4b8,	// (0x0003dc1e) popup_call_audio_in_window_g1_ParamLimits

0xd4b8,	// (0x0003dc1e) popup_call_audio_in_window_g1

0xd4c4,	// (0x0003dc2a) popup_call_audio_in_window_g2_ParamLimits

0xd4c4,	// (0x0003dc2a) popup_call_audio_in_window_g2

0xd4d0,	// (0x0003dc36) popup_call_audio_in_window_g3_ParamLimits

0xd4d0,	// (0x0003dc36) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003f839) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003f839) popup_call_audio_in_window_g

0xd4dc,	// (0x0003dc42) popup_call_audio_in_window_t1_ParamLimits

0xd4dc,	// (0x0003dc42) popup_call_audio_in_window_t1

0xd4f7,	// (0x0003dc5d) popup_call_audio_in_window_t2_ParamLimits

0xd4f7,	// (0x0003dc5d) popup_call_audio_in_window_t2

0xd512,	// (0x0003dc78) popup_call_audio_in_window_t3_ParamLimits

0xd512,	// (0x0003dc78) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003f840) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003f840) popup_call_audio_in_window_t

0xd4a2,	// (0x0003dc08) bg_popup_call_pane_cp01_ParamLimits

0xd4a2,	// (0x0003dc08) bg_popup_call_pane_cp01

0xd4b0,	// (0x0003dc16) call_thumbnail_pane_cp02

0xd525,	// (0x0003dc8b) call_type_pane_cp022

0xd52d,	// (0x0003dc93) popup_call_audio_out_window_g1_ParamLimits

0xd52d,	// (0x0003dc93) popup_call_audio_out_window_g1

0xd53f,	// (0x0003dca5) popup_call_audio_out_window_g2_ParamLimits

0xd53f,	// (0x0003dca5) popup_call_audio_out_window_g2

0xd54b,	// (0x0003dcb1) popup_call_audio_out_window_g3_ParamLimits

0xd54b,	// (0x0003dcb1) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003f847) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003f847) popup_call_audio_out_window_g

0xd55d,	// (0x0003dcc3) popup_call_audio_out_window_t1_ParamLimits

0xd55d,	// (0x0003dcc3) popup_call_audio_out_window_t1

0xd575,	// (0x0003dcdb) popup_call_audio_out_window_t2_ParamLimits

0xd575,	// (0x0003dcdb) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003f84e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003f84e) popup_call_audio_out_window_t

0xd58a,	// (0x0003dcf0) bg_popup_call_pane_ParamLimits

0xd58a,	// (0x0003dcf0) bg_popup_call_pane

0x6577,	// (0x00036cdd) call_thumbnail_pane_cp_ParamLimits

0x6577,	// (0x00036cdd) call_thumbnail_pane_cp

0xd60e,	// (0x0003dd74) call_type_pane_cp01_ParamLimits

0xd60e,	// (0x0003dd74) call_type_pane_cp01

0xd652,	// (0x0003ddb8) popup_call_audio_first_window_g1_ParamLimits

0xd652,	// (0x0003ddb8) popup_call_audio_first_window_g1

0xd69e,	// (0x0003de04) popup_call_audio_first_window_g2_ParamLimits

0xd69e,	// (0x0003de04) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003f853) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003f853) popup_call_audio_first_window_g

0xd6e2,	// (0x0003de48) popup_call_audio_first_window_t1_ParamLimits

0xd6e2,	// (0x0003de48) popup_call_audio_first_window_t1

0xd78e,	// (0x0003def4) popup_call_audio_first_window_t4_ParamLimits

0xd78e,	// (0x0003def4) popup_call_audio_first_window_t4

0xd81a,	// (0x0003df80) popup_call_audio_first_window_t5_ParamLimits

0xd81a,	// (0x0003df80) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003f858) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003f858) popup_call_audio_first_window_t

0xd849,	// (0x0003dfaf) bg_popup_call_pane_cp02

0xd853,	// (0x0003dfb9) call_type_pane_cp023

0xd85b,	// (0x0003dfc1) popup_call_audio_wait_window_g1

0xd863,	// (0x0003dfc9) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003f85f) popup_call_audio_wait_window_g

0xd86b,	// (0x0003dfd1) popup_call_audio_wait_window_t3

0xd879,	// (0x0003dfdf) bg_popup_call_pane_cp03_ParamLimits

0xd879,	// (0x0003dfdf) bg_popup_call_pane_cp03

0xd8d9,	// (0x0003e03f) call_thumbnail_pane_cp011_ParamLimits

0xd8d9,	// (0x0003e03f) call_thumbnail_pane_cp011

0xd8e5,	// (0x0003e04b) call_type_pane_cp034_ParamLimits

0xd8e5,	// (0x0003e04b) call_type_pane_cp034

0xd921,	// (0x0003e087) popup_call_audio_second_window_g1_ParamLimits

0xd921,	// (0x0003e087) popup_call_audio_second_window_g1

0xd95d,	// (0x0003e0c3) popup_call_audio_second_window_g2_ParamLimits

0xd95d,	// (0x0003e0c3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003f864) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003f864) popup_call_audio_second_window_g

0xd999,	// (0x0003e0ff) popup_call_audio_second_window_t1_ParamLimits

0xd999,	// (0x0003e0ff) popup_call_audio_second_window_t1

0xda1a,	// (0x0003e180) popup_call_audio_second_window_t2_ParamLimits

0xda1a,	// (0x0003e180) popup_call_audio_second_window_t2

0xda50,	// (0x0003e1b6) popup_call_audio_second_window_t3_ParamLimits

0xda50,	// (0x0003e1b6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003f869) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003f869) popup_call_audio_second_window_t

0xd849,	// (0x0003dfaf) bg_popup_call_pane_cp04

0xda86,	// (0x0003e1ec) list_conf_pane

0xda8e,	// (0x0003e1f4) popup_call_audio_conf_window_t1

0xda9c,	// (0x0003e202) call_thumbnail_pane_g1

0xdaa4,	// (0x0003e20a) bg_pinb_pane_ParamLimits

0xdaa4,	// (0x0003e20a) bg_pinb_pane

0xdab2,	// (0x0003e218) find_pinb_pane

0xdabb,	// (0x0003e221) listscroll_pinb_pane_ParamLimits

0xdabb,	// (0x0003e221) listscroll_pinb_pane

0xdaca,	// (0x0003e230) pinb_bg_pane_g1

0x659b,	// (0x00036d01) pinb_bg_pane_g2

0x65a5,	// (0x00036d0b) pinb_bg_pane_g3

0x65af,	// (0x00036d15) pinb_bg_pane_g4

0x65b9,	// (0x00036d1f) pinb_bg_pane_g5

0x65c3,	// (0x00036d29) pinb_bg_pane_g6

0x65ce,	// (0x00036d34) pinb_bg_pane_g7

0x65d9,	// (0x00036d3f) pinb_bg_pane_g8

0x65e2,	// (0x00036d48) pinb_bg_pane_g9

0x65ea,	// (0x00036d50) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003f870) pinb_bg_pane_g

0x6607,	// (0x00036d6d) grid_pinb_pane

0x6610,	// (0x00036d76) list_pinb_pane

0x661b,	// (0x00036d81) scroll_pane_cp01_ParamLimits

0x661b,	// (0x00036d81) scroll_pane_cp01

0xdad4,	// (0x0003e23a) find_pinb_pane_g1_ParamLimits

0xdad4,	// (0x0003e23a) find_pinb_pane_g1

0xdaec,	// (0x0003e252) find_pinb_pane_t1

0xdafe,	// (0x0003e264) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003f88a) find_pinb_pane_t

0xdb13,	// (0x0003e279) input_focus_pane_cp01_ParamLimits

0xdb13,	// (0x0003e279) input_focus_pane_cp01

0x662b,	// (0x00036d91) cell_pinb_pane_ParamLimits

0x662b,	// (0x00036d91) cell_pinb_pane

0x6644,	// (0x00036daa) cell_pinb_pane_g1_ParamLimits

0x6644,	// (0x00036daa) cell_pinb_pane_g1

0x6655,	// (0x00036dbb) cell_pinb_pane_g2_ParamLimits

0x6655,	// (0x00036dbb) cell_pinb_pane_g2

0xdb1f,	// (0x0003e285) cell_pinb_pane_g3_ParamLimits

0xdb1f,	// (0x0003e285) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003f88f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003f88f) cell_pinb_pane_g

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp01

0x6661,	// (0x00036dc7) list_pinb_item_pane_ParamLimits

0x6661,	// (0x00036dc7) list_pinb_item_pane

0xd849,	// (0x0003dfaf) list_highlight_pane_cp02

0x6676,	// (0x00036ddc) list_pinb_item_pane_g1_ParamLimits

0x6676,	// (0x00036ddc) list_pinb_item_pane_g1

0xdb2b,	// (0x0003e291) list_pinb_item_pane_g2_ParamLimits

0xdb2b,	// (0x0003e291) list_pinb_item_pane_g2

0x6683,	// (0x00036de9) list_pinb_item_pane_g3_ParamLimits

0x6683,	// (0x00036de9) list_pinb_item_pane_g3

0x6692,	// (0x00036df8) list_pinb_item_pane_g4_ParamLimits

0x6692,	// (0x00036df8) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003f896) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003f896) list_pinb_item_pane_g

0x669e,	// (0x00036e04) list_pinb_item_pane_t1_ParamLimits

0x669e,	// (0x00036e04) list_pinb_item_pane_t1

0x66cf,	// (0x00036e35) calc_display_pane

0x66e9,	// (0x00036e4f) calc_paper_pane

0x6701,	// (0x00036e67) grid_calc_pane

0xd849,	// (0x0003dfaf) bg_list_pane_cp01

0x6725,	// (0x00036e8b) clock_g1

0x672d,	// (0x00036e93) clock_g2

0x0001,

0xf139,	// (0x0003f89f) clock_g

0x6735,	// (0x00036e9b) clock_t1_ParamLimits

0x6735,	// (0x00036e9b) clock_t1

0x674a,	// (0x00036eb0) clock_t2_ParamLimits

0x674a,	// (0x00036eb0) clock_t2

0x675c,	// (0x00036ec2) clock_t3_ParamLimits

0x675c,	// (0x00036ec2) clock_t3

0x676e,	// (0x00036ed4) clock_t4_ParamLimits

0x676e,	// (0x00036ed4) clock_t4

0x6780,	// (0x00036ee6) clock_t5_ParamLimits

0x6780,	// (0x00036ee6) clock_t5

0x6795,	// (0x00036efb) clock_t6_ParamLimits

0x6795,	// (0x00036efb) clock_t6

0x67a7,	// (0x00036f0d) clock_t7_ParamLimits

0x67a7,	// (0x00036f0d) clock_t7

0x67b9,	// (0x00036f1f) clock_t8_ParamLimits

0x67b9,	// (0x00036f1f) clock_t8

0x67cb,	// (0x00036f31) clock_t9_ParamLimits

0x67cb,	// (0x00036f31) clock_t9

0x0008,

0xf13e,	// (0x0003f8a4) clock_t_ParamLimits

0xf13e,	// (0x0003f8a4) clock_t

0xdb37,	// (0x0003e29d) popup_clock_analogue_window_cp02

0xdb37,	// (0x0003e29d) popup_clock_digital_window_cp01

0xdb3f,	// (0x0003e2a5) listscroll_help_pane

0xd849,	// (0x0003dfaf) phob_pre_status_pane

0xdb49,	// (0x0003e2af) grid_qdial_pane

0xdaa4,	// (0x0003e20a) listscroll_mce_pane

0xdaa4,	// (0x0003e20a) bg_notes_pane

0xdb53,	// (0x0003e2b9) list_notes_pane

0x67dd,	// (0x00036f43) scroll_pane_cp06

0xdb61,	// (0x0003e2c7) bg_calc_paper_pane

0x67ea,	// (0x00036f50) list_calc_pane

0xdb75,	// (0x0003e2db) bg_calc_display_pane

0x6804,	// (0x00036f6a) calc_display_pane_t1

0x6819,	// (0x00036f7f) calc_display_pane_t2

0x682e,	// (0x00036f94) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003f8b7) calc_display_pane_t

0x6840,	// (0x00036fa6) cell_calc_pane_ParamLimits

0x6840,	// (0x00036fa6) cell_calc_pane

0xdb81,	// (0x0003e2e7) bg_calc_paper_pane_g1

0xdb8d,	// (0x0003e2f3) bg_calc_paper_pane_g2

0xdb99,	// (0x0003e2ff) bg_calc_paper_pane_g3

0xdba5,	// (0x0003e30b) bg_calc_paper_pane_g4

0xdbb1,	// (0x0003e317) bg_calc_paper_pane_g5

0x6867,	// (0x00036fcd) bg_calc_paper_pane_g6

0x6876,	// (0x00036fdc) bg_calc_paper_pane_g7

0x6885,	// (0x00036feb) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003f8be) bg_calc_paper_pane_g

0x6894,	// (0x00036ffa) calc_bg_paper_pane_g9

0x68a3,	// (0x00037009) list_calc_item_pane_ParamLimits

0x68a3,	// (0x00037009) list_calc_item_pane

0xdbbd,	// (0x0003e323) list_calc_item_pane_g1

0x68bb,	// (0x00037021) list_calc_item_pane_t1_ParamLimits

0x68bb,	// (0x00037021) list_calc_item_pane_t1

0x68cd,	// (0x00037033) list_calc_item_pane_t2_ParamLimits

0x68cd,	// (0x00037033) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003f8cf) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003f8cf) list_calc_item_pane_t

0xdbca,	// (0x0003e330) cell_calc_pane_g1

0xdbd4,	// (0x0003e33a) grid_highlight_pane_cp02

0xdbf6,	// (0x0003e35c) bg_calc_display_pane_g1

0x68fb,	// (0x00037061) bg_calc_display_pane_g2

0xdbff,	// (0x0003e365) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003f8d9) bg_calc_display_pane_g

0x6905,	// (0x0003706b) cell_qdial_pane_ParamLimits

0x6905,	// (0x0003706b) cell_qdial_pane

0x6917,	// (0x0003707d) cell_qdial_pane_g1_ParamLimits

0x6917,	// (0x0003707d) cell_qdial_pane_g1

0x6924,	// (0x0003708a) cell_qdial_pane_g2_ParamLimits

0x6924,	// (0x0003708a) cell_qdial_pane_g2

0xdc08,	// (0x0003e36e) cell_qdial_pane_g3_ParamLimits

0xdc08,	// (0x0003e36e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003f8e0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003f8e0) cell_qdial_pane_g

0x6942,	// (0x000370a8) cell_qdial_pane_t1_ParamLimits

0x6942,	// (0x000370a8) cell_qdial_pane_t1

0x695a,	// (0x000370c0) cell_qdial_pane_t2_ParamLimits

0x695a,	// (0x000370c0) cell_qdial_pane_t2

0x696d,	// (0x000370d3) cell_qdial_pane_t3_ParamLimits

0x696d,	// (0x000370d3) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003f8e9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003f8e9) cell_qdial_pane_t

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp04

0xdc14,	// (0x0003e37a) thumbnail_qdial_pane_ParamLimits

0xdc14,	// (0x0003e37a) thumbnail_qdial_pane

0xdc70,	// (0x0003e3d6) list_help_pane

0xdc79,	// (0x0003e3df) scroll_pane_cp02

0x6980,	// (0x000370e6) help_list_pane_t1_ParamLimits

0x6980,	// (0x000370e6) help_list_pane_t1

0x699c,	// (0x00037102) bg_notes_pane_g2

0x69a4,	// (0x0003710a) bg_notes_pane_g3

0x69ac,	// (0x00037112) notes_bg_pane_g1

0x69b4,	// (0x0003711a) notes_bg_pane_g4

0x69bc,	// (0x00037122) notes_bg_pane_g5

0x69c4,	// (0x0003712a) notes_bg_pane_g6

0x69cc,	// (0x00037132) notes_bg_pane_g7

0x69d4,	// (0x0003713a) notes_bg_pane_g8

0x69dc,	// (0x00037142) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003f907) notes_bg_pane_g

0x69e4,	// (0x0003714a) list_notes_text_pane_ParamLimits

0x69e4,	// (0x0003714a) list_notes_text_pane

0xdc82,	// (0x0003e3e8) list_notes_text_pane_g1

0x4f90,	// (0x000356f6) list_notes_text_pane_t1

0x6a05,	// (0x0003716b) listscroll_cale_week_pane

0x6a2f,	// (0x00037195) bg_cale_heading_pane

0x6a4c,	// (0x000371b2) bg_cale_pane_cp01

0x6a6e,	// (0x000371d4) cale_week_corner_pane

0x6a8d,	// (0x000371f3) cale_week_day_heading_pane

0x6aaf,	// (0x00037215) cale_week_scroll_pane_g1

0x6ac7,	// (0x0003722d) cale_week_scroll_pane_g2

0x6adf,	// (0x00037245) cale_week_scroll_pane_g3

0x6af7,	// (0x0003725d) cale_week_scroll_pane_g4

0x6b0f,	// (0x00037275) cale_week_scroll_pane_g5

0x6b27,	// (0x0003728d) cale_week_scroll_pane_g6

0x6b3f,	// (0x000372a5) cale_week_scroll_pane_g7

0x6b57,	// (0x000372bd) cale_week_scroll_pane_g8

0x6b6f,	// (0x000372d5) cale_week_scroll_pane_g9

0x6b8c,	// (0x000372f2) cale_week_scroll_pane_g10

0x6ba9,	// (0x0003730f) cale_week_scroll_pane_g11

0x6bc6,	// (0x0003732c) cale_week_scroll_pane_g12

0x6be3,	// (0x00037349) cale_week_scroll_pane_g13

0x6c00,	// (0x00037366) cale_week_scroll_pane_g14

0x6c1d,	// (0x00037383) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003f916) cale_week_scroll_pane_g

0x6c52,	// (0x000373b8) cale_week_time_pane

0x6c6a,	// (0x000373d0) grid_cale_week_pane

0xdcb7,	// (0x0003e41d) scroll_pane_cp08

0x6c89,	// (0x000373ef) cell_cale_week_pane_ParamLimits

0x6c89,	// (0x000373ef) cell_cale_week_pane

0x6cff,	// (0x00037465) cale_week_day_heading_pane_t1

0x6d27,	// (0x0003748d) cale_week_day_heading_pane_t2

0x6d54,	// (0x000374ba) cale_week_day_heading_pane_t3

0x6d81,	// (0x000374e7) cale_week_day_heading_pane_t4

0x6dae,	// (0x00037514) cale_week_day_heading_pane_t5

0x6ddb,	// (0x00037541) cale_week_day_heading_pane_t6

0x6e08,	// (0x0003756e) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003f937) cale_week_day_heading_pane_t

0xdcd4,	// (0x0003e43a) bg_cale_side_pane

0x6e30,	// (0x00037596) cale_week_time_pane_t1

0x6e74,	// (0x000375da) cale_week_time_pane_t2

0x6eb8,	// (0x0003761e) cale_week_time_pane_t3

0x6efc,	// (0x00037662) cale_week_time_pane_t4

0x6f40,	// (0x000376a6) cale_week_time_pane_t5

0x6f84,	// (0x000376ea) cale_week_time_pane_t6

0x6fc8,	// (0x0003772e) cale_week_time_pane_t7

0x700c,	// (0x00037772) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003f946) cale_week_time_pane_t

0x7050,	// (0x000377b6) cell_cale_week_pane_g2

0x7074,	// (0x000377da) cell_cale_week_pane_g3_ParamLimits

0x7074,	// (0x000377da) cell_cale_week_pane_g3

0xdce2,	// (0x0003e448) grid_highlight_pane_cp07

0xdcea,	// (0x0003e450) listscroll_gms_pane

0xdcf4,	// (0x0003e45a) grid_gms_pane

0xdcfd,	// (0x0003e463) listscroll_gms_pane_g1

0xdd05,	// (0x0003e46b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003f957) listscroll_gms_pane_g

0x708c,	// (0x000377f2) scroll_pane_cp010

0x7095,	// (0x000377fb) cell_gms_pane_ParamLimits

0x7095,	// (0x000377fb) cell_gms_pane

0x70a6,	// (0x0003780c) cell_gms_pane_g1

0xdd0d,	// (0x0003e473) cell_gms_pane_g2

0xdc82,	// (0x0003e3e8) cell_gms_pane_g3

0xdd15,	// (0x0003e47b) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003f95c) cell_gms_pane_g

0xdd1e,	// (0x0003e484) grid_highlight_pane_cp09

0x8ca2,	// (0x00039408) phob_pre_status_pane_g1

0x8caa,	// (0x00039410) phob_pre_status_pane_g2

0x8cb2,	// (0x00039418) phob_pre_status_pane_g3

0x8cba,	// (0x00039420) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0003fd5a) phob_pre_status_pane_g

0x8cca,	// (0x00039430) phob_pre_status_pane_t1

0x8cd8,	// (0x0003943e) phob_pre_status_pane_t2

0x8ce6,	// (0x0003944c) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0003fd65) phob_pre_status_pane_t

0xdd26,	// (0x0003e48c) bg_list_pane_cp05

0x70b6,	// (0x0003781c) grid_vorec_pane

0x70be,	// (0x00037824) vorec_t1

0x70cc,	// (0x00037832) vorec_t2

0x70da,	// (0x00037840) vorec_t3

0x70e8,	// (0x0003784e) vorec_t4

0xd3d6,	// (0x0003db3c) vorec_t5

0xd3e4,	// (0x0003db4a) vorec_t6

0x0004,

0xf1ff,	// (0x0003f965) vorec_t

0xd3f2,	// (0x0003db58) wait_bar_pane_cp01

0x7104,	// (0x0003786a) cell_vorec_pane_ParamLimits

0x7104,	// (0x0003786a) cell_vorec_pane

0x7117,	// (0x0003787d) cell_vorec_pane_g1

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp05

0x712d,	// (0x00037893) cams_zoom_pane

0x7139,	// (0x0003789f) image_vga_pane

0x7146,	// (0x000378ac) main_camera_pane_g1

0x7152,	// (0x000378b8) main_camera_pane_g2

0x715e,	// (0x000378c4) main_camera_pane_g3

0x716a,	// (0x000378d0) main_camera_pane_g4

0x7176,	// (0x000378dc) main_camera_pane_g5

0x7182,	// (0x000378e8) main_camera_pane_g6

0x718e,	// (0x000378f4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003f970) main_camera_pane_g

0x719a,	// (0x00037900) main_camera_pane_t1

0x71ac,	// (0x00037912) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003f981) main_camera_pane_t

0x71d0,	// (0x00037936) cams_zoom_pane_cp_ParamLimits

0x71d0,	// (0x00037936) cams_zoom_pane_cp

0x71f4,	// (0x0003795a) image_cif_pane_ParamLimits

0x71f4,	// (0x0003795a) image_cif_pane

0x720e,	// (0x00037974) image_subqcif_pane

0x7216,	// (0x0003797c) main_video_pane_g1_ParamLimits

0x7216,	// (0x0003797c) main_video_pane_g1

0x7236,	// (0x0003799c) main_video_pane_g2_ParamLimits

0x7236,	// (0x0003799c) main_video_pane_g2

0x7264,	// (0x000379ca) main_video_pane_g3_ParamLimits

0x7264,	// (0x000379ca) main_video_pane_g3

0x728d,	// (0x000379f3) main_video_pane_g4_ParamLimits

0x728d,	// (0x000379f3) main_video_pane_g4

0x72b6,	// (0x00037a1c) main_video_pane_g5_ParamLimits

0x72b6,	// (0x00037a1c) main_video_pane_g5

0xdd3a,	// (0x0003e4a0) main_video_pane_g6_ParamLimits

0xdd3a,	// (0x0003e4a0) main_video_pane_g6

0x0006,

0xf220,	// (0x0003f986) main_video_pane_g_ParamLimits

0xf220,	// (0x0003f986) main_video_pane_g

0x72d8,	// (0x00037a3e) main_video_pane_t1_ParamLimits

0x72d8,	// (0x00037a3e) main_video_pane_t1

0xdd54,	// (0x0003e4ba) cams_zoom_pane_g1

0xdd5d,	// (0x0003e4c3) cams_zoom_pane_g2

0xdd66,	// (0x0003e4cc) cams_zoom_pane_g3

0xdd6f,	// (0x0003e4d5) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003f995) cams_zoom_pane_g

0x7322,	// (0x00037a88) grid_cams_pane

0x732e,	// (0x00037a94) linegrid_cams_pane

0x733a,	// (0x00037aa0) cell_cams_pane_ParamLimits

0x733a,	// (0x00037aa0) cell_cams_pane

0xdd78,	// (0x0003e4de) cams_burst_image_pane

0xdd80,	// (0x0003e4e6) cell_cams_pane_g1

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp03

0xdbca,	// (0x0003e330) mp_bg_pane_g1

0xd849,	// (0x0003dfaf) bg_list_pane_cp03

0x0df6,	// (0x0003155c) bg_mp_pane

0x0dfe,	// (0x00031564) grid_mp_pane

0x0e06,	// (0x0003156c) media_player_g1

0x0e0e,	// (0x00031574) media_player_t1

0x0e1c,	// (0x00031582) media_player_t2

0x0e2a,	// (0x00031590) media_player_t3

0x0e38,	// (0x0003159e) media_player_t4

0x0e46,	// (0x000315ac) media_player_t5

0x0e54,	// (0x000315ba) media_player_t6

0x0e62,	// (0x000315c8) media_player_t7

0x0006,

0xf5de,	// (0x0003fd44) media_player_t

0x0e70,	// (0x000315d6) wait_bar_pane_cp02

0xf5c3,	// (0x0003fd29) main_usb_pane_t

0x8c99,	// (0x000393ff) cell_mp_pane

0xdbca,	// (0x0003e330) cell_mp_pane_g1

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp06

0xdd88,	// (0x0003e4ee) grid_skin_colour_pane

0xdd90,	// (0x0003e4f6) list_highlight_pane_cp03

0x734d,	// (0x00037ab3) skin_g1

0xdd98,	// (0x0003e4fe) skin_t1

0xdda7,	// (0x0003e50d) skin_t2

0x0001,

0xf264,	// (0x0003f9ca) skin_t

0x7355,	// (0x00037abb) cell_skin_colour_pane_ParamLimits

0x7355,	// (0x00037abb) cell_skin_colour_pane

0xddb5,	// (0x0003e51b) cell_skin_colour_pane_g1

0x73cb,	// (0x00037b31) call_video_g1_ParamLimits

0x73cb,	// (0x00037b31) call_video_g1

0x73d7,	// (0x00037b3d) call_video_g2_ParamLimits

0x73d7,	// (0x00037b3d) call_video_g2

0x0001,

0xf269,	// (0x0003f9cf) call_video_g_ParamLimits

0xf269,	// (0x0003f9cf) call_video_g

0x7427,	// (0x00037b8d) call_video_uplink_pane_cp1_ParamLimits

0x7427,	// (0x00037b8d) call_video_uplink_pane_cp1

0xddc7,	// (0x0003e52d) call_video_uplink_pane_cp2

0x74e3,	// (0x00037c49) video_down_crop_pane_ParamLimits

0x74e3,	// (0x00037c49) video_down_crop_pane

0x75ad,	// (0x00037d13) video_down_pane_ParamLimits

0x75ad,	// (0x00037d13) video_down_pane

0xddcf,	// (0x0003e535) video_down_subqcif_pane_ParamLimits

0xddcf,	// (0x0003e535) video_down_subqcif_pane

0xdde7,	// (0x0003e54d) video_down_subqcif_pane_cp_ParamLimits

0xdde7,	// (0x0003e54d) video_down_subqcif_pane_cp

0xde0b,	// (0x0003e571) im_reading_pane_ParamLimits

0xde0b,	// (0x0003e571) im_reading_pane

0x7677,	// (0x00037ddd) im_writing_pane_ParamLimits

0x7677,	// (0x00037ddd) im_writing_pane

0x768d,	// (0x00037df3) im_reading_pane_t1

0xde25,	// (0x0003e58b) list_im_pane

0xde36,	// (0x0003e59c) scroll_pane_cp07

0x76c5,	// (0x00037e2b) im_writing_pane_t1_ParamLimits

0x76c5,	// (0x00037e2b) im_writing_pane_t1

0xde4f,	// (0x0003e5b5) im_writing_pane_t2_ParamLimits

0xde4f,	// (0x0003e5b5) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003f9d9) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003f9d9) im_writing_pane_t

0xd849,	// (0x0003dfaf) input_focus_pane_cp04

0xd849,	// (0x0003dfaf) input_focus_pane_cp05

0x76d7,	// (0x00037e3d) list_im_single_pane_ParamLimits

0x76d7,	// (0x00037e3d) list_im_single_pane

0xde6c,	// (0x0003e5d2) list_single_im_pane_t1

0x8c5f,	// (0x000393c5) blid_accuracy_pane

0x8c67,	// (0x000393cd) blid_compass_pane

0x8c6f,	// (0x000393d5) main_location_t1

0x8c7d,	// (0x000393e3) main_location_t2

0x8c8b,	// (0x000393f1) main_location_t3

0x0002,

0xf5ed,	// (0x0003fd53) main_location_t

0xd849,	// (0x0003dfaf) aid_levels_location

0xdbca,	// (0x0003e330) blid_accuracy_pane_g1

0xdbca,	// (0x0003e330) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003fa3b) blid_accuracy_pane_g

0xdea6,	// (0x0003e60c) wml_content_pane

0xdee4,	// (0x0003e64a) wml_button_pane_ParamLimits

0xdee4,	// (0x0003e64a) wml_button_pane

0x76eb,	// (0x00037e51) wml_list_single_large_pane_ParamLimits

0x76eb,	// (0x00037e51) wml_list_single_large_pane

0x7701,	// (0x00037e67) wml_list_single_medium_pane_ParamLimits

0x7701,	// (0x00037e67) wml_list_single_medium_pane

0x7719,	// (0x00037e7f) wml_list_single_small_pane_ParamLimits

0x7719,	// (0x00037e7f) wml_list_single_small_pane

0xdef8,	// (0x0003e65e) wml_selection_box_pane_ParamLimits

0xdef8,	// (0x0003e65e) wml_selection_box_pane

0xdf0b,	// (0x0003e671) wml_list_single_pane_t1

0xdf1a,	// (0x0003e680) wml_list_single_medium_pane_t1

0xdf29,	// (0x0003e68f) wml_list_single_large_pane_t1

0xdf38,	// (0x0003e69e) input_focus_pane_cp02_ParamLimits

0xdf38,	// (0x0003e69e) input_focus_pane_cp02

0xdf4b,	// (0x0003e6b1) wml_selection_box_pane_g1

0xdf54,	// (0x0003e6ba) wml_selection_box_pane_t1_ParamLimits

0xdf54,	// (0x0003e6ba) wml_selection_box_pane_t1

0xdaa4,	// (0x0003e20a) bg_wml_button_pane_ParamLimits

0xdaa4,	// (0x0003e20a) bg_wml_button_pane

0xdf6c,	// (0x0003e6d2) wml_button_pane_g1

0xdf74,	// (0x0003e6da) wml_button_pane_t1

0xdf6c,	// (0x0003e6d2) wml_button_bg_pane_g1

0xdf84,	// (0x0003e6ea) wml_button_bg_pane_g2

0xdf8c,	// (0x0003e6f2) wml_button_bg_pane_g3

0xdf94,	// (0x0003e6fa) wml_button_bg_pane_g4

0xdf9c,	// (0x0003e702) wml_button_bg_pane_g5

0xdfa4,	// (0x0003e70a) wml_button_bg_pane_g6

0xdfac,	// (0x0003e712) wml_button_bg_pane_g7

0xdfb4,	// (0x0003e71a) wml_button_bg_pane_g8

0xdfbc,	// (0x0003e722) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003f9de) wml_button_bg_pane_g

0x7733,	// (0x00037e99) bg_list_pane_cp02

0xdfc4,	// (0x0003e72a) mce_header_pane_ParamLimits

0xdfc4,	// (0x0003e72a) mce_header_pane

0xdfda,	// (0x0003e740) mce_icon_pane

0xdfda,	// (0x0003e740) mce_image_pane

0xdfe3,	// (0x0003e749) mce_text_pane_ParamLimits

0xdfe3,	// (0x0003e749) mce_text_pane

0x773b,	// (0x00037ea1) scroll_pane_cp03

0xdedc,	// (0x0003e642) scroll_pane_cp04

0xdff6,	// (0x0003e75c) scroll_pane_cp05_ParamLimits

0xdff6,	// (0x0003e75c) scroll_pane_cp05

0x7743,	// (0x00037ea9) mce_header_field_pane_ParamLimits

0x7743,	// (0x00037ea9) mce_header_field_pane

0x7763,	// (0x00037ec9) mce_header_field_pane_2_ParamLimits

0x7763,	// (0x00037ec9) mce_header_field_pane_2

0x7779,	// (0x00037edf) mce_header_field_pane_3

0x7781,	// (0x00037ee7) list_single_mce_message_pane_ParamLimits

0x7781,	// (0x00037ee7) list_single_mce_message_pane

0x7796,	// (0x00037efc) list_single_mce_smart_pane_ParamLimits

0x7796,	// (0x00037efc) list_single_mce_smart_pane

0xe002,	// (0x0003e768) input_focus_pane_cp03

0xe00b,	// (0x0003e771) list_header_data_pane

0x77b6,	// (0x00037f1c) mce_header_field_pane_t1

0x77c4,	// (0x00037f2a) list_single_mce_header_pane_ParamLimits

0x77c4,	// (0x00037f2a) list_single_mce_header_pane

0xe013,	// (0x0003e779) list_single_mce_header_pane_t1

0xe022,	// (0x0003e788) list_single_mce_message_pane_g1

0xe02a,	// (0x0003e790) list_single_mce_message_pane_t1

0x7800,	// (0x00037f66) bg_cale_heading_pane_cp01_ParamLimits

0x7800,	// (0x00037f66) bg_cale_heading_pane_cp01

0xe038,	// (0x0003e79e) bg_cale_pane_cp02_ParamLimits

0xe038,	// (0x0003e79e) bg_cale_pane_cp02

0x783a,	// (0x00037fa0) cale_month_corner_pane

0x7852,	// (0x00037fb8) cale_month_day_heading_pane_ParamLimits

0x7852,	// (0x00037fb8) cale_month_day_heading_pane

0x788c,	// (0x00037ff2) cale_month_pane_g1_ParamLimits

0x788c,	// (0x00037ff2) cale_month_pane_g1

0x78bb,	// (0x00038021) cale_month_pane_g2_ParamLimits

0x78bb,	// (0x00038021) cale_month_pane_g2

0x78df,	// (0x00038045) cale_month_pane_g3_ParamLimits

0x78df,	// (0x00038045) cale_month_pane_g3

0x791b,	// (0x00038081) cale_month_pane_g4_ParamLimits

0x791b,	// (0x00038081) cale_month_pane_g4

0x7957,	// (0x000380bd) cale_month_pane_g5_ParamLimits

0x7957,	// (0x000380bd) cale_month_pane_g5

0x7993,	// (0x000380f9) cale_month_pane_g6_ParamLimits

0x7993,	// (0x000380f9) cale_month_pane_g6

0x79cf,	// (0x00038135) cale_month_pane_g7_ParamLimits

0x79cf,	// (0x00038135) cale_month_pane_g7

0x7a0b,	// (0x00038171) cale_month_pane_g8_ParamLimits

0x7a0b,	// (0x00038171) cale_month_pane_g8

0x7a47,	// (0x000381ad) cale_month_pane_g9_ParamLimits

0x7a47,	// (0x000381ad) cale_month_pane_g9

0x7a81,	// (0x000381e7) cale_month_pane_g10_ParamLimits

0x7a81,	// (0x000381e7) cale_month_pane_g10

0x7abb,	// (0x00038221) cale_month_pane_g11_ParamLimits

0x7abb,	// (0x00038221) cale_month_pane_g11

0x7af5,	// (0x0003825b) cale_month_pane_g12_ParamLimits

0x7af5,	// (0x0003825b) cale_month_pane_g12

0x7b2f,	// (0x00038295) cale_month_pane_g13_ParamLimits

0x7b2f,	// (0x00038295) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003f9f1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003f9f1) cale_month_pane_g

0x7b69,	// (0x000382cf) cale_month_week_pane

0x7b81,	// (0x000382e7) grid_cale_month_pane_ParamLimits

0x7b81,	// (0x000382e7) grid_cale_month_pane

0x7bb2,	// (0x00038318) cale_month_day_heading_pane_t1

0x7be5,	// (0x0003834b) cale_month_day_heading_pane_t2

0x7c0f,	// (0x00038375) cale_month_day_heading_pane_t3

0x7c39,	// (0x0003839f) cale_month_day_heading_pane_t4

0x7c63,	// (0x000383c9) cale_month_day_heading_pane_t5

0x7c8d,	// (0x000383f3) cale_month_day_heading_pane_t6

0x7cb7,	// (0x0003841d) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003fa0c) cale_month_day_heading_pane_t

0xdcd4,	// (0x0003e43a) bg_cale_side_pane_cp01

0x7ce1,	// (0x00038447) cale_month_week_pane_t1

0x7cfa,	// (0x00038460) cale_month_week_pane_t2

0x7d13,	// (0x00038479) cale_month_week_pane_t3

0x7d2c,	// (0x00038492) cale_month_week_pane_t4

0x7d45,	// (0x000384ab) cale_month_week_pane_t5

0x7d5e,	// (0x000384c4) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003fa1b) cale_month_week_pane_t

0x7d77,	// (0x000384dd) cell_cale_month_pane_ParamLimits

0x7d77,	// (0x000384dd) cell_cale_month_pane

0x7e65,	// (0x000385cb) cell_cale_month_pane_g1

0x7e71,	// (0x000385d7) cell_cale_month_pane_t1_ParamLimits

0x7e71,	// (0x000385d7) cell_cale_month_pane_t1

0xdce2,	// (0x0003e448) grid_highlight_pane_cp08

0xdbca,	// (0x0003e330) main_smil_g1

0x7e9d,	// (0x00038603) smil_status_pane

0xe077,	// (0x0003e7dd) smil_text_pane

0x0cd6,	// (0x0003143c) bg_popup_call3_rect_pane_g8

0x0cde,	// (0x00031444) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003fcd4) bg_popup_call3_rect_pane_g

0x0fc0,	// (0x00031726) smil_status_volume_pane_g1

0xe081,	// (0x0003e7e7) smil_status_pane_t1

0x8ff3,	// (0x00039759) volume_smil_pane

0xe098,	// (0x0003e7fe) list_smil_text_pane

0x7eae,	// (0x00038614) scroll_pane_cp011

0x7eb7,	// (0x0003861d) smil_text_list_pane_t1_ParamLimits

0x7eb7,	// (0x0003861d) smil_text_list_pane_t1

0x7ef6,	// (0x0003865c) aid_volume_smil_ParamLimits

0x7ef6,	// (0x0003865c) aid_volume_smil

0xdbca,	// (0x0003e330) smil_volume_pane_g1

0xdbca,	// (0x0003e330) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003fa3b) smil_volume_pane_g

0x6a05,	// (0x0003716b) listscroll_cale_day_pane

0xe0a2,	// (0x0003e808) bg_cale_pane

0xe0ba,	// (0x0003e820) list_cale_pane

0xe0dd,	// (0x0003e843) scroll_pane_cp09

0xe0ee,	// (0x0003e854) cale_bg_pane_g1

0xe0f6,	// (0x0003e85c) cale_bg_pane_g2

0xe0fe,	// (0x0003e864) cale_bg_pane_g3

0xe106,	// (0x0003e86c) cale_bg_pane_g4

0xe10e,	// (0x0003e874) cale_bg_pane_g5

0xe116,	// (0x0003e87c) cale_bg_pane_g6

0xe11e,	// (0x0003e884) cale_bg_pane_g7

0xe126,	// (0x0003e88c) cale_bg_pane_g8

0xe12e,	// (0x0003e894) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003fa40) cale_bg_pane_g

0x7f18,	// (0x0003867e) list_cale_time_pane_ParamLimits

0x7f18,	// (0x0003867e) list_cale_time_pane

0xe13e,	// (0x0003e8a4) list_cale_time_pane_g1_ParamLimits

0xe13e,	// (0x0003e8a4) list_cale_time_pane_g1

0xe14a,	// (0x0003e8b0) list_cale_time_pane_g2_ParamLimits

0xe14a,	// (0x0003e8b0) list_cale_time_pane_g2

0x7f2a,	// (0x00038690) list_cale_time_pane_g3_ParamLimits

0x7f2a,	// (0x00038690) list_cale_time_pane_g3

0x7f36,	// (0x0003869c) list_cale_time_pane_g4_ParamLimits

0x7f36,	// (0x0003869c) list_cale_time_pane_g4

0x7f42,	// (0x000386a8) list_cale_time_pane_g5_ParamLimits

0x7f42,	// (0x000386a8) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003fa53) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003fa53) list_cale_time_pane_g

0xe164,	// (0x0003e8ca) list_cale_time_pane_t1_ParamLimits

0xe164,	// (0x0003e8ca) list_cale_time_pane_t1

0xe18c,	// (0x0003e8f2) list_cale_time_pane_t2_ParamLimits

0xe18c,	// (0x0003e8f2) list_cale_time_pane_t2

0x8208,	// (0x0003896e) aid_blid_cardinal_pane

0x8246,	// (0x000389ac) compass_pane_t4

0xe1b4,	// (0x0003e91a) list_cale_time_pane_t4_ParamLimits

0xe1b4,	// (0x0003e91a) list_cale_time_pane_t4

0x8254,	// (0x000389ba) compass_pane_t5

0x8262,	// (0x000389c8) compass_pane_t6

0x8270,	// (0x000389d6) compass_pane_t7

0xe626,	// (0x0003ed8c) navi_pane_cc_t1

0xe801,	// (0x0003ef67) aid_phob_thumbnail_center_pane

0x87ec,	// (0x00038f52) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003fa60) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003fa60) list_cale_time_pane_t

0xd4a2,	// (0x0003dc08) bg_popup_window_pane_cp02_ParamLimits

0xd4a2,	// (0x0003dc08) bg_popup_window_pane_cp02

0xe1dc,	// (0x0003e942) heading_pane_cp01_ParamLimits

0xe1dc,	// (0x0003e942) heading_pane_cp01

0xe1e8,	// (0x0003e94e) loc_req_pane_ParamLimits

0xe1e8,	// (0x0003e94e) loc_req_pane

0xe1f8,	// (0x0003e95e) loc_type_pane_ParamLimits

0xe1f8,	// (0x0003e95e) loc_type_pane

0xe20a,	// (0x0003e970) loc_type_pane_t1_ParamLimits

0xe20a,	// (0x0003e970) loc_type_pane_t1

0xe21c,	// (0x0003e982) loc_type_pane_t2_ParamLimits

0xe21c,	// (0x0003e982) loc_type_pane_t2

0xe22e,	// (0x0003e994) loc_type_pane_t3_ParamLimits

0xe22e,	// (0x0003e994) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003fa67) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003fa67) loc_type_pane_t

0xe240,	// (0x0003e9a6) list_loc_req_pane

0xe24a,	// (0x0003e9b0) scroll_pane_cp012

0xe253,	// (0x0003e9b9) list_single_loc_request_popup_menu_pane_ParamLimits

0xe253,	// (0x0003e9b9) list_single_loc_request_popup_menu_pane

0xe265,	// (0x0003e9cb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe265,	// (0x0003e9cb) list_single_loc_request_popup_menu_pane_g1

0xe271,	// (0x0003e9d7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe271,	// (0x0003e9d7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003fa6e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003fa6e) list_single_loc_request_popup_menu_pane_g

0xe27d,	// (0x0003e9e3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe27d,	// (0x0003e9e3) list_single_loc_request_popup_menu_pane_t1

0x7f4e,	// (0x000386b4) bg_popup_window_pane_cp03_ParamLimits

0x7f4e,	// (0x000386b4) bg_popup_window_pane_cp03

0x7f5c,	// (0x000386c2) heading_loc_req_pane_ParamLimits

0x7f5c,	// (0x000386c2) heading_loc_req_pane

0x7f68,	// (0x000386ce) popup_dyc_status_message_window_g1_ParamLimits

0x7f68,	// (0x000386ce) popup_dyc_status_message_window_g1

0x7f74,	// (0x000386da) popup_dyc_status_message_window_t1_ParamLimits

0x7f74,	// (0x000386da) popup_dyc_status_message_window_t1

0x7f86,	// (0x000386ec) popup_dyc_status_message_window_t2_ParamLimits

0x7f86,	// (0x000386ec) popup_dyc_status_message_window_t2

0x7f98,	// (0x000386fe) popup_dyc_status_message_window_t3_ParamLimits

0x7f98,	// (0x000386fe) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003fa73) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003fa73) popup_dyc_status_message_window_t

0xd849,	// (0x0003dfaf) bg_heading_pane_cp01

0xe293,	// (0x0003e9f9) heading_loc_req_pane_g1

0xe29b,	// (0x0003ea01) heading_loc_req_pane_g2

0xe2a3,	// (0x0003ea09) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003fa7a) heading_loc_req_pane_g

0xe2ab,	// (0x0003ea11) heading_loc_req_pane_t1

0xe2ba,	// (0x0003ea20) bg_popup_sub_pane_cp01_ParamLimits

0xe2ba,	// (0x0003ea20) bg_popup_sub_pane_cp01

0xe2c8,	// (0x0003ea2e) popup_cale_events_window_g1_ParamLimits

0xe2c8,	// (0x0003ea2e) popup_cale_events_window_g1

0xe2e8,	// (0x0003ea4e) popup_cale_events_window_g2_ParamLimits

0xe2e8,	// (0x0003ea4e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003faae) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003faae) popup_cale_events_window_g

0xe308,	// (0x0003ea6e) popup_cale_events_window_t1_ParamLimits

0xe308,	// (0x0003ea6e) popup_cale_events_window_t1

0xe31a,	// (0x0003ea80) popup_cale_events_window_t2_ParamLimits

0xe31a,	// (0x0003ea80) popup_cale_events_window_t2

0xe358,	// (0x0003eabe) popup_cale_events_window_t3_ParamLimits

0xe358,	// (0x0003eabe) popup_cale_events_window_t3

0xe392,	// (0x0003eaf8) popup_cale_events_window_t4_ParamLimits

0xe392,	// (0x0003eaf8) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003fab3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003fab3) popup_cale_events_window_t

0x7fc2,	// (0x00038728) call_type_pane

0xe3c8,	// (0x0003eb2e) popup_call_status_window_g1

0x7fce,	// (0x00038734) popup_call_status_window_g2

0x7fda,	// (0x00038740) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003fabc) popup_call_status_window_g

0xe3d6,	// (0x0003eb3c) call_type_pane_g1

0xe3df,	// (0x0003eb45) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003fac3) call_type_pane_g

0xd849,	// (0x0003dfaf) bg_popup_sub_pane_cp02

0xe3e8,	// (0x0003eb4e) listscroll_popup_wml_pane

0xe3f0,	// (0x0003eb56) list_wml_pane

0xe3fa,	// (0x0003eb60) scroll_pane_cp013

0x7fe6,	// (0x0003874c) list_single_graphic_popup_wml_pane_ParamLimits

0x7fe6,	// (0x0003874c) list_single_graphic_popup_wml_pane

0xdbca,	// (0x0003e330) list_single_graphic_popup_wml_pane_g1

0xe403,	// (0x0003eb69) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003fac8) list_single_graphic_popup_wml_pane_g

0xe40b,	// (0x0003eb71) list_single_graphic_popup_wml_pane_t1

0xe421,	// (0x0003eb87) aid_call_pane

0xda9c,	// (0x0003e202) popup_clock_analogue_window_g1

0xda9c,	// (0x0003e202) popup_clock_analogue_window_g2

0x7ffa,	// (0x00038760) popup_clock_analogue_window_g3

0x7ffa,	// (0x00038760) popup_clock_analogue_window_g4

0xdbca,	// (0x0003e330) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003facd) popup_clock_analogue_window_g

0x8002,	// (0x00038768) popup_clock_analogue_window_t1

0x8010,	// (0x00038776) clock_digital_number_pane_ParamLimits

0x8010,	// (0x00038776) clock_digital_number_pane

0x801c,	// (0x00038782) clock_digital_number_pane_cp02_ParamLimits

0x801c,	// (0x00038782) clock_digital_number_pane_cp02

0x8028,	// (0x0003878e) clock_digital_number_pane_cp03_ParamLimits

0x8028,	// (0x0003878e) clock_digital_number_pane_cp03

0x8034,	// (0x0003879a) clock_digital_number_pane_cp04_ParamLimits

0x8034,	// (0x0003879a) clock_digital_number_pane_cp04

0x8040,	// (0x000387a6) clock_digital_separator_pane_ParamLimits

0x8040,	// (0x000387a6) clock_digital_separator_pane

0x804c,	// (0x000387b2) popup_clock_digital_window_t1

0xdbca,	// (0x0003e330) clock_digital_number_pane_g1

0xdbca,	// (0x0003e330) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003fa3b) clock_digital_number_pane_g

0xdbca,	// (0x0003e330) clock_digital_separator_pane_g1

0xdbca,	// (0x0003e330) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003fa3b) clock_digital_separator_pane_g

0xd849,	// (0x0003dfaf) bg_popup_window_pane_cp04

0xe429,	// (0x0003eb8f) heading_pane_cp03

0xe431,	// (0x0003eb97) listscroll_popup_gms_pane

0xe439,	// (0x0003eb9f) grid_large_graphic_popup_pane

0xe443,	// (0x0003eba9) listscroll_popup_gms_pane_g1

0xe44b,	// (0x0003ebb1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003fad8) listscroll_popup_gms_pane_g

0xdedc,	// (0x0003e642) scroll_pane_cp014

0x8069,	// (0x000387cf) cell_large_graphic_popup_pane_ParamLimits

0x8069,	// (0x000387cf) cell_large_graphic_popup_pane

0x8080,	// (0x000387e6) cell_large_graphic_popup_pane_g1_ParamLimits

0x8080,	// (0x000387e6) cell_large_graphic_popup_pane_g1

0xe453,	// (0x0003ebb9) cell_large_graphic_popup_pane_g2_ParamLimits

0xe453,	// (0x0003ebb9) cell_large_graphic_popup_pane_g2

0xe45f,	// (0x0003ebc5) cell_large_graphic_popup_pane_g3_ParamLimits

0xe45f,	// (0x0003ebc5) cell_large_graphic_popup_pane_g3

0xe46c,	// (0x0003ebd2) cell_large_graphic_popup_pane_g4_ParamLimits

0xe46c,	// (0x0003ebd2) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003fadd) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003fadd) cell_large_graphic_popup_pane_g

0xe47c,	// (0x0003ebe2) grid_highlight_pane_cp010

0xdbca,	// (0x0003e330) bg_popup_call_pane_g1

0xe486,	// (0x0003ebec) list_single_graphic_popup_conf_pane_ParamLimits

0xe486,	// (0x0003ebec) list_single_graphic_popup_conf_pane

0xe499,	// (0x0003ebff) list_highlight_pane_cp01

0xe4a2,	// (0x0003ec08) list_single_graphic_popup_conf_pane_g1

0xe4aa,	// (0x0003ec10) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003fae6) list_single_graphic_popup_conf_pane_g

0xe4b2,	// (0x0003ec18) list_single_graphic_popup_conf_pane_t1

0xe4c0,	// (0x0003ec26) linegrid_cams_pane_g1

0x808c,	// (0x000387f2) linegrid_cams_pane_g2

0xdc82,	// (0x0003e3e8) linegrid_cams_pane_g3

0xe4c9,	// (0x0003ec2f) linegrid_cams_pane_g4

0x8095,	// (0x000387fb) linegrid_cams_pane_g5

0x809e,	// (0x00038804) linegrid_cams_pane_g6

0xdd15,	// (0x0003e47b) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003faeb) linegrid_cams_pane_g

0xe4d2,	// (0x0003ec38) popup_clock_analogue_window

0xe4d2,	// (0x0003ec38) popup_clock_digital_window

0xd849,	// (0x0003dfaf) popup_phob_thumbnail_window

0xdbca,	// (0x0003e330) call_video_uplink_pane_g1

0xe4db,	// (0x0003ec41) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003fafa) call_video_uplink_pane_g

0xdce2,	// (0x0003e448) video_uplink_pane

0xe4e3,	// (0x0003ec49) mce_image_pane_g1

0x80a7,	// (0x0003880d) mce_image_pane_g2

0x80af,	// (0x00038815) mce_image_pane_g3

0x80b7,	// (0x0003881d) mce_image_pane_g4

0x80bf,	// (0x00038825) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003faff) mce_image_pane_g

0xe4ed,	// (0x0003ec53) control_top_pane_stacon_cp01_ParamLimits

0xe4ed,	// (0x0003ec53) control_top_pane_stacon_cp01

0xe4fd,	// (0x0003ec63) uni_indicator_pane_stacon_cp01_ParamLimits

0xe4fd,	// (0x0003ec63) uni_indicator_pane_stacon_cp01

0xe50e,	// (0x0003ec74) bg_popup_sub_pane_cp03

0x80c7,	// (0x0003882d) chi_dic_find_pane

0x80cf,	// (0x00038835) listscroll_chi_dic_pane

0x80d8,	// (0x0003883e) main_pane_chidic_g1

0x80e9,	// (0x0003884f) chi_dic_find_pane_t1

0xe518,	// (0x0003ec7e) find_chidic_pane

0xe521,	// (0x0003ec87) chi_dic_list_pane_ParamLimits

0xe521,	// (0x0003ec87) chi_dic_list_pane

0xe532,	// (0x0003ec98) scroll_pane_cp020

0x80f7,	// (0x0003885d) find_chidic_pane_t1

0xd849,	// (0x0003dfaf) input_focus_pane_cp06

0x8106,	// (0x0003886c) list_chi_dic_pane_ParamLimits

0x8106,	// (0x0003886c) list_chi_dic_pane

0x8118,	// (0x0003887e) list_chi_dic_pane_t1_ParamLimits

0x8118,	// (0x0003887e) list_chi_dic_pane_t1

0xd849,	// (0x0003dfaf) list_highlight_pane_cp020

0xe53a,	// (0x0003eca0) bg_cale_heading_pane_g1

0x812b,	// (0x00038891) bg_cale_heading_pane_g2

0x8133,	// (0x00038899) bg_cale_heading_pane_g3

0x813b,	// (0x000388a1) bg_cale_heading_pane_g4

0x8143,	// (0x000388a9) bg_cale_heading_pane_g5

0x814b,	// (0x000388b1) bg_cale_heading_pane_g6

0x8153,	// (0x000388b9) bg_cale_heading_pane_g7

0x815b,	// (0x000388c1) bg_cale_heading_pane_g8

0x8163,	// (0x000388c9) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003fb0a) bg_cale_heading_pane_g

0xe53a,	// (0x0003eca0) bg_cale_side_pane_g1

0x816b,	// (0x000388d1) bg_cale_side_pane_g2

0x8173,	// (0x000388d9) bg_cale_side_pane_g3

0x817b,	// (0x000388e1) bg_cale_side_pane_g4

0x8183,	// (0x000388e9) bg_cale_side_pane_g5

0x818b,	// (0x000388f1) bg_cale_side_pane_g6

0x8193,	// (0x000388f9) bg_cale_side_pane_g7

0x819b,	// (0x00038901) bg_cale_side_pane_g8

0x81a3,	// (0x00038909) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003fb1d) bg_cale_side_pane_g

0x81ab,	// (0x00038911) popup_call_status_window_ParamLimits

0x81ab,	// (0x00038911) popup_call_status_window

0xe542,	// (0x0003eca8) stacon_top_pane

0xe54a,	// (0x0003ecb0) status_pane_ParamLimits

0xe54a,	// (0x0003ecb0) status_pane

0xe55f,	// (0x0003ecc5) status_small_pane

0xe567,	// (0x0003eccd) control_pane

0xd849,	// (0x0003dfaf) stacon_bottom_pane

0xe56f,	// (0x0003ecd5) list_single_mce_smart_pane_t1_ParamLimits

0xe56f,	// (0x0003ecd5) list_single_mce_smart_pane_t1

0xe582,	// (0x0003ece8) list_single_mce_smart_pane_t2_ParamLimits

0xe582,	// (0x0003ece8) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003fb30) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003fb30) list_single_mce_smart_pane_t

0x81b7,	// (0x0003891d) compass_pane

0x81c0,	// (0x00038926) main_location2_pane_t1

0x81d2,	// (0x00038938) main_location2_pane_t2

0x81e4,	// (0x0003894a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003fb35) main_location2_pane_t

0xe5a1,	// (0x0003ed07) compass_pane_g1_ParamLimits

0xe5a1,	// (0x0003ed07) compass_pane_g1

0x8228,	// (0x0003898e) compass_pane_t1

0x8237,	// (0x0003899d) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003fb3e) compass_pane_t

0x827e,	// (0x000389e4) text_secondary_cp61

0xe61d,	// (0x0003ed83) navi_pane_cams_g5

0xe697,	// (0x0003edfd) navi_pane_im_t1

0xe6a5,	// (0x0003ee0b) navi_pane_mp_g1_ParamLimits

0xe6a5,	// (0x0003ee0b) navi_pane_mp_g1

0xe6b9,	// (0x0003ee1f) navi_pane_mp_g2_ParamLimits

0xe6b9,	// (0x0003ee1f) navi_pane_mp_g2

0xe6c5,	// (0x0003ee2b) navi_pane_mp_g3_ParamLimits

0xe6c5,	// (0x0003ee2b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003fb52) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003fb52) navi_pane_mp_g

0xe6d1,	// (0x0003ee37) navi_pane_mp_t1

0xe6df,	// (0x0003ee45) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003fb59) navi_pane_mp_t

0xe74a,	// (0x0003eeb0) navi_pane_vt_g1

0xe6d1,	// (0x0003ee37) navi_pane_vt_t1

0xe752,	// (0x0003eeb8) navi_slider_pane

0xdd26,	// (0x0003e48c) zooming_pane

0xe762,	// (0x0003eec8) navi_slider_pane_g1

0x82b9,	// (0x00038a1f) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003fb60) navi_slider_pane_g

0xe786,	// (0x0003eeec) aid_levels_zoom

0xe78e,	// (0x0003eef4) zooming_pane_g1

0xe796,	// (0x0003eefc) zooming_pane_g2

0xe796,	// (0x0003eefc) zooming_pane_g3

0x0002,

0xf409,	// (0x0003fb6f) zooming_pane_g

0xe79e,	// (0x0003ef04) level_10_zoom

0xe7a7,	// (0x0003ef0d) level_11_zoom

0xe7b0,	// (0x0003ef16) level_1_zoom

0xe7b9,	// (0x0003ef1f) level_2_zoom

0xe7c2,	// (0x0003ef28) level_3_zoom

0xe7cb,	// (0x0003ef31) level_4_zoom

0xe7d4,	// (0x0003ef3a) level_5_zoom

0xe7dd,	// (0x0003ef43) level_6_zoom

0xe7e6,	// (0x0003ef4c) level_7_zoom

0xe7ef,	// (0x0003ef55) level_8_zoom

0xe7f8,	// (0x0003ef5e) level_9_zoom

0xe809,	// (0x0003ef6f) popup_phob_thumbnail_window_g1

0xe811,	// (0x0003ef77) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003fb76) popup_phob_thumbnail_window_g

0x0e78,	// (0x000315de) level_1_location

0x0e80,	// (0x000315e6) level_2_location

0x0e88,	// (0x000315ee) level_3_location

0x0e90,	// (0x000315f6) level_4_location

0xdd26,	// (0x0003e48c) level_5_location

0x82cb,	// (0x00038a31) mce_icon_pane_g1

0x82d3,	// (0x00038a39) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003fb7b) mce_icon_pane_g

0x82db,	// (0x00038a41) main_mup_pane_g1_ParamLimits

0x82db,	// (0x00038a41) main_mup_pane_g1

0x82f3,	// (0x00038a59) main_mup_pane_g2_ParamLimits

0x82f3,	// (0x00038a59) main_mup_pane_g2

0x830f,	// (0x00038a75) main_mup_pane_g3_ParamLimits

0x830f,	// (0x00038a75) main_mup_pane_g3

0x832b,	// (0x00038a91) main_mup_pane_g4_ParamLimits

0x832b,	// (0x00038a91) main_mup_pane_g4

0x8347,	// (0x00038aad) main_mup_pane_g5_ParamLimits

0x8347,	// (0x00038aad) main_mup_pane_g5

0x8364,	// (0x00038aca) main_mup_pane_g6_ParamLimits

0x8364,	// (0x00038aca) main_mup_pane_g6

0x8380,	// (0x00038ae6) main_mup_pane_g7_ParamLimits

0x8380,	// (0x00038ae6) main_mup_pane_g7

0x839c,	// (0x00038b02) main_mup_pane_g8_ParamLimits

0x839c,	// (0x00038b02) main_mup_pane_g8

0x83b8,	// (0x00038b1e) main_mup_pane_g9_ParamLimits

0x83b8,	// (0x00038b1e) main_mup_pane_g9

0x83cf,	// (0x00038b35) main_mup_pane_g10_ParamLimits

0x83cf,	// (0x00038b35) main_mup_pane_g10

0x83e6,	// (0x00038b4c) main_mup_pane_g11_ParamLimits

0x83e6,	// (0x00038b4c) main_mup_pane_g11

0x83fa,	// (0x00038b60) main_mup_pane_g12_ParamLimits

0x83fa,	// (0x00038b60) main_mup_pane_g12

0x8406,	// (0x00038b6c) main_mup_pane_g13_ParamLimits

0x8406,	// (0x00038b6c) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003fb80) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003fb80) main_mup_pane_g

0x841a,	// (0x00038b80) main_mup_pane_t1_ParamLimits

0x841a,	// (0x00038b80) main_mup_pane_t1

0x8437,	// (0x00038b9d) main_mup_pane_t2_ParamLimits

0x8437,	// (0x00038b9d) main_mup_pane_t2

0x8451,	// (0x00038bb7) main_mup_pane_t3_ParamLimits

0x8451,	// (0x00038bb7) main_mup_pane_t3

0x846b,	// (0x00038bd1) main_mup_pane_t4_ParamLimits

0x846b,	// (0x00038bd1) main_mup_pane_t4

0x847d,	// (0x00038be3) main_mup_pane_t5_ParamLimits

0x847d,	// (0x00038be3) main_mup_pane_t5

0x848f,	// (0x00038bf5) main_mup_pane_t6_ParamLimits

0x848f,	// (0x00038bf5) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003fb9b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003fb9b) main_mup_pane_t

0x84a5,	// (0x00038c0b) mup_progress_pane_ParamLimits

0x84a5,	// (0x00038c0b) mup_progress_pane

0x84b1,	// (0x00038c17) mup_visualizer_pane_ParamLimits

0x84b1,	// (0x00038c17) mup_visualizer_pane

0x84df,	// (0x00038c45) mup_volume_pane_ParamLimits

0x84df,	// (0x00038c45) mup_volume_pane

0xe3c8,	// (0x0003eb2e) mup_visualizer_pane_g1_ParamLimits

0xe3c8,	// (0x0003eb2e) mup_visualizer_pane_g1

0xe3c8,	// (0x0003eb2e) mup_visualizer_pane_g2_ParamLimits

0xe3c8,	// (0x0003eb2e) mup_visualizer_pane_g2

0xe5a1,	// (0x0003ed07) mup_visualizer_pane_g3_ParamLimits

0xe5a1,	// (0x0003ed07) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003fba8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003fba8) mup_visualizer_pane_g

0xdbca,	// (0x0003e330) mup_volume_pane_g1

0xe821,	// (0x0003ef87) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003fbaf) mup_volume_pane_g

0xdbca,	// (0x0003e330) mup_progress_pane_g1

0xe82a,	// (0x0003ef90) mup_progress_pane_g2

0xe833,	// (0x0003ef99) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003fbb4) mup_progress_pane_g

0xd849,	// (0x0003dfaf) bg_popup_window_pane_cp05

0x8502,	// (0x00038c68) heading_pane_cp02_ParamLimits

0x8502,	// (0x00038c68) heading_pane_cp02

0xe83c,	// (0x0003efa2) list_popup_blid_pane

0x851c,	// (0x00038c82) list_blid_sat_info_pane_ParamLimits

0x851c,	// (0x00038c82) list_blid_sat_info_pane

0xe844,	// (0x0003efaa) list_blid_sat_info_pane_g1

0xe84c,	// (0x0003efb2) list_blid_sat_info_pane_t1

0x85ff,	// (0x00038d65) mup_equalizer_pane_ParamLimits

0x85ff,	// (0x00038d65) mup_equalizer_pane

0x8618,	// (0x00038d7e) mup_equalizer_pane_cp1_ParamLimits

0x8618,	// (0x00038d7e) mup_equalizer_pane_cp1

0x8631,	// (0x00038d97) mup_equalizer_pane_cp2_ParamLimits

0x8631,	// (0x00038d97) mup_equalizer_pane_cp2

0x864a,	// (0x00038db0) mup_equalizer_pane_cp3_ParamLimits

0x864a,	// (0x00038db0) mup_equalizer_pane_cp3

0x8663,	// (0x00038dc9) mup_equalizer_pane_cp4_ParamLimits

0x8663,	// (0x00038dc9) mup_equalizer_pane_cp4

0x867c,	// (0x00038de2) mup_equalizer_pane_cp5

0x868e,	// (0x00038df4) mup_equalizer_pane_cp6

0x86a0,	// (0x00038e06) mup_equalizer_pane_cp7

0x0d56,	// (0x000314bc) bg_popup_call_poc_act_pane_g9

0x0d5e,	// (0x000314c4) bg_popup_call_poc_act_pane_g10

0x0d66,	// (0x000314cc) bg_popup_call_poc_act_pane_g11

0x000a,

0xdaa4,	// (0x0003e20a) mup_scale_pane

0xdbca,	// (0x0003e330) mup_scale_pane_g1

0xe85a,	// (0x0003efc0) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003fbd0) mup_scale_pane_g

0xe87e,	// (0x0003efe4) msg_data_pane

0xe886,	// (0x0003efec) scroll_pane_cp017

0x51ae,	// (0x00035914) bg_list_pane_cp04_ParamLimits

0x51ae,	// (0x00035914) bg_list_pane_cp04

0xe88e,	// (0x0003eff4) msg_data_pane_g1

0x86c4,	// (0x00038e2a) msg_data_pane_g2

0x86cc,	// (0x00038e32) msg_data_pane_g3

0x86d4,	// (0x00038e3a) msg_data_pane_g4

0x86dc,	// (0x00038e42) msg_data_pane_g5

0x82cb,	// (0x00038a31) msg_data_pane_g6

0x86e4,	// (0x00038e4a) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003fbdf) msg_data_pane_g

0x51ce,	// (0x00035934) msg_text_pane_ParamLimits

0x51ce,	// (0x00035934) msg_text_pane

0x86ec,	// (0x00038e52) qrid_highlight_pane_cp011_ParamLimits

0x86ec,	// (0x00038e52) qrid_highlight_pane_cp011

0xd849,	// (0x0003dfaf) msg_body_pane

0xd849,	// (0x0003dfaf) msg_header_pane

0xe89f,	// (0x0003f005) input_focus_pane_cp07

0x5200,	// (0x00035966) msg_header_pane_t1_ParamLimits

0x5200,	// (0x00035966) msg_header_pane_t1

0x5212,	// (0x00035978) msg_header_pane_t2_ParamLimits

0x5212,	// (0x00035978) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003fbf3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003fbf3) msg_header_pane_t

0xe8b4,	// (0x0003f01a) msg_body_pane_g1

0x5224,	// (0x0003598a) msg_body_pane_t1_ParamLimits

0x5224,	// (0x0003598a) msg_body_pane_t1

0x5255,	// (0x000359bb) msg_body_pane_t2_ParamLimits

0x5255,	// (0x000359bb) msg_body_pane_t2

0x5267,	// (0x000359cd) msg_body_pane_t3_ParamLimits

0x5267,	// (0x000359cd) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003fbf8) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003fbf8) msg_body_pane_t

0x8750,	// (0x00038eb6) main_viewer_pane_g1_ParamLimits

0x8750,	// (0x00038eb6) main_viewer_pane_g1

0x875c,	// (0x00038ec2) main_viewer_pane_g2_ParamLimits

0x875c,	// (0x00038ec2) main_viewer_pane_g2

0x8768,	// (0x00038ece) main_viewer_pane_g3_ParamLimits

0x8768,	// (0x00038ece) main_viewer_pane_g3

0x8777,	// (0x00038edd) main_viewer_pane_g4_ParamLimits

0x8777,	// (0x00038edd) main_viewer_pane_g4

0x8786,	// (0x00038eec) main_viewer_pane_g5_ParamLimits

0x8786,	// (0x00038eec) main_viewer_pane_g5

0x8786,	// (0x00038eec) main_viewer_pane_g7_ParamLimits

0x8786,	// (0x00038eec) main_viewer_pane_g7

0x8798,	// (0x00038efe) main_viewer_pane_g8_ParamLimits

0x8798,	// (0x00038efe) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003fc08) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003fc08) main_viewer_pane_g

0xe8bc,	// (0x0003f022) viewer_content_pane_ParamLimits

0xe8bc,	// (0x0003f022) viewer_content_pane

0x87c8,	// (0x00038f2e) main_postcard_pane_g1_ParamLimits

0x87c8,	// (0x00038f2e) main_postcard_pane_g1

0x87d4,	// (0x00038f3a) main_postcard_pane_g2_ParamLimits

0x87d4,	// (0x00038f3a) main_postcard_pane_g2

0x87e0,	// (0x00038f46) main_postcard_pane_g3_ParamLimits

0x87e0,	// (0x00038f46) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003fc19) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003fc19) main_postcard_pane_g

0x87ec,	// (0x00038f52) main_postcard_pane_g4

0x0fad,	// (0x00031713) smil_status_volume_pane_g2

0x8810,	// (0x00038f76) postcard_pane_ParamLimits

0x8810,	// (0x00038f76) postcard_pane

0xe3c8,	// (0x0003eb2e) postcard_pane_g1_ParamLimits

0xe3c8,	// (0x0003eb2e) postcard_pane_g1

0x8840,	// (0x00038fa6) postcard_pane_g2_ParamLimits

0x8840,	// (0x00038fa6) postcard_pane_g2

0x884c,	// (0x00038fb2) postcard_pane_g3_ParamLimits

0x884c,	// (0x00038fb2) postcard_pane_g3

0xe8ca,	// (0x0003f030) postcard_pane_g4_ParamLimits

0xe8ca,	// (0x0003f030) postcard_pane_g4

0x8858,	// (0x00038fbe) postcard_pane_g5_ParamLimits

0x8858,	// (0x00038fbe) postcard_pane_g5

0x8864,	// (0x00038fca) postcard_pane_g6_ParamLimits

0x8864,	// (0x00038fca) postcard_pane_g6

0xe8d8,	// (0x0003f03e) postcard_pane_g7_ParamLimits

0xe8d8,	// (0x0003f03e) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003fc26) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003fc26) postcard_pane_g

0x8870,	// (0x00038fd6) main_mp2_pane_g1_ParamLimits

0x8870,	// (0x00038fd6) main_mp2_pane_g1

0x887c,	// (0x00038fe2) main_mp2_pane_g2_ParamLimits

0x887c,	// (0x00038fe2) main_mp2_pane_g2

0x8888,	// (0x00038fee) main_mp2_pane_g3_ParamLimits

0x8888,	// (0x00038fee) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003fc35) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003fc35) main_mp2_pane_g

0x8894,	// (0x00038ffa) main_mp2_pane_t1_ParamLimits

0x8894,	// (0x00038ffa) main_mp2_pane_t1

0x88a9,	// (0x0003900f) main_mp2_pane_t2_ParamLimits

0x88a9,	// (0x0003900f) main_mp2_pane_t2

0x88bb,	// (0x00039021) main_mp2_pane_t3_ParamLimits

0x88bb,	// (0x00039021) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003fc3c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003fc3c) main_mp2_pane_t

0xe8e6,	// (0x0003f04c) pec_content_pane_ParamLimits

0xe8e6,	// (0x0003f04c) pec_content_pane

0xdedc,	// (0x0003e642) scroll_pane_cp015

0xe8f8,	// (0x0003f05e) pec_attribute_pane_ParamLimits

0xe8f8,	// (0x0003f05e) pec_attribute_pane

0x88cd,	// (0x00039033) pec_content_pane_g1_ParamLimits

0x88cd,	// (0x00039033) pec_content_pane_g1

0xe908,	// (0x0003f06e) pec_content_pane_t1_ParamLimits

0xe908,	// (0x0003f06e) pec_content_pane_t1

0xe91a,	// (0x0003f080) pec_content_pane_t2_ParamLimits

0xe91a,	// (0x0003f080) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003fc43) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003fc43) pec_content_pane_t

0x88d9,	// (0x0003903f) list_single_graphic_pane_cp01_ParamLimits

0x88d9,	// (0x0003903f) list_single_graphic_pane_cp01

0xdaa4,	// (0x0003e20a) bg_popup_sub_pane_cp04

0xe92c,	// (0x0003f092) popup_mup_playback_window_g1

0xe938,	// (0x0003f09e) popup_mup_playback_window_t1

0xe94d,	// (0x0003f0b3) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003fc48) popup_mup_playback_window_t

0xe984,	// (0x0003f0ea) main_image_pane_g1_ParamLimits

0xe984,	// (0x0003f0ea) main_image_pane_g1

0xe9c7,	// (0x0003f12d) scroll_pane_cp018_ParamLimits

0xe9c7,	// (0x0003f12d) scroll_pane_cp018

0xe9df,	// (0x0003f145) scroll_pane_cp016_ParamLimits

0xe9df,	// (0x0003f145) scroll_pane_cp016

0x895d,	// (0x000390c3) smil2_image_pane_ParamLimits

0x895d,	// (0x000390c3) smil2_image_pane

0x8985,	// (0x000390eb) smil2_root_pane_ParamLimits

0x8985,	// (0x000390eb) smil2_root_pane

0x89b1,	// (0x00039117) smil2_text_pane_ParamLimits

0x89b1,	// (0x00039117) smil2_text_pane

0xd849,	// (0x0003dfaf) bg_list_pane_cp06

0x89ed,	// (0x00039153) grid_radio_pane

0xd849,	// (0x0003dfaf) bg_popup_window_pane_cp06

0xea13,	// (0x0003f179) main_fmradio_pane_t1

0xe429,	// (0x0003eb8f) heading_pane_cp04

0xea21,	// (0x0003f187) main_fmradio_pane_t2

0x0dae,	// (0x00031514) popup_cale_lunar_info_window_g1

0xea2f,	// (0x0003f195) main_fmradio_pane_t3

0x0db6,	// (0x0003151c) popup_cale_lunar_info_window_g2

0xea3d,	// (0x0003f1a3) main_fmradio_pane_t4

0x0001,

0xea4b,	// (0x0003f1b1) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0003fd36) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003fc5d) main_fmradio_pane_t

0xea59,	// (0x0003f1bf) wait_bar_pane_cp03

0x89f5,	// (0x0003915b) cell_fmradio_pane_ParamLimits

0x89f5,	// (0x0003915b) cell_fmradio_pane

0xe8d8,	// (0x0003f03e) cell_fmradio_pane_g1_ParamLimits

0xe8d8,	// (0x0003f03e) cell_fmradio_pane_g1

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp011

0xea61,	// (0x0003f1c7) poc_content_pane_ParamLimits

0xea61,	// (0x0003f1c7) poc_content_pane

0xea73,	// (0x0003f1d9) scroll_pane_cp019

0x8a08,	// (0x0003916e) popup_call_poc_act_window_ParamLimits

0x8a08,	// (0x0003916e) popup_call_poc_act_window

0x8a15,	// (0x0003917b) popup_call_poc_inact_window_ParamLimits

0x8a15,	// (0x0003917b) popup_call_poc_inact_window

0xf594,	// (0x0003fcfa) bg_popup_call_poc_act_pane_g

0x0d6e,	// (0x000314d4) bg_popup_call_poc_inact_pane_g1

0x0d76,	// (0x000314dc) bg_popup_call_poc_inact_pane_g2

0xea7b,	// (0x0003f1e1) popup_call_poc_act_window_g2

0x0d7e,	// (0x000314e4) bg_popup_call_poc_inact_pane_g3

0x0cfe,	// (0x00031464) bg_popup_call_poc_inact_pane_g4

0x0d86,	// (0x000314ec) bg_popup_call_poc_inact_pane_g5

0xea83,	// (0x0003f1e9) popup_call_poc_act_window_t1_ParamLimits

0xea83,	// (0x0003f1e9) popup_call_poc_act_window_t1

0xeaab,	// (0x0003f211) popup_call_poc_act_window_t2_ParamLimits

0xeaab,	// (0x0003f211) popup_call_poc_act_window_t2

0xead3,	// (0x0003f239) popup_call_poc_act_window_t3_ParamLimits

0xead3,	// (0x0003f239) popup_call_poc_act_window_t3

0xeafb,	// (0x0003f261) popup_call_poc_act_window_t4_ParamLimits

0xeafb,	// (0x0003f261) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003fc68) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003fc68) popup_call_poc_act_window_t

0x0d8e,	// (0x000314f4) bg_popup_call_poc_inact_pane_g6

0x0d96,	// (0x000314fc) bg_popup_call_poc_inact_pane_g7

0x0d9e,	// (0x00031504) bg_popup_call_poc_inact_pane_g8

0xeb0d,	// (0x0003f273) popup_call_poc_inact_window_g2

0x0da6,	// (0x0003150c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0003fd11) bg_popup_call_poc_inact_pane_g

0xeb15,	// (0x0003f27b) popup_call_poc_inact_window_t1_ParamLimits

0xeb15,	// (0x0003f27b) popup_call_poc_inact_window_t1

0xeb2a,	// (0x0003f290) popup_call_poc_inact_window_t2_ParamLimits

0xeb2a,	// (0x0003f290) popup_call_poc_inact_window_t2

0xeb3f,	// (0x0003f2a5) popup_call_poc_inact_window_t3_ParamLimits

0xeb3f,	// (0x0003f2a5) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003fc71) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003fc71) popup_call_poc_inact_window_t

0x0f33,	// (0x00031699) context_pane_ParamLimits

0x8f61,	// (0x000396c7) signal_pane_ParamLimits

0xdd26,	// (0x0003e48c) main_call2_pane

0x8edd,	// (0x00039643) popup_phob_thumbnail2_window_ParamLimits

0x8edd,	// (0x00039643) popup_phob_thumbnail2_window

0x8702,	// (0x00038e68) aid_hotspot_pointer_arrow_pane

0x870a,	// (0x00038e70) aid_hotspot_pointer_hand_pane

0x8cc2,	// (0x00039428) phob_pre_status_pane_g5

0x712d,	// (0x00037893) cams_zoom_pane_ParamLimits

0x7139,	// (0x0003789f) image_vga_pane_ParamLimits

0x7146,	// (0x000378ac) main_camera_pane_g1_ParamLimits

0x7152,	// (0x000378b8) main_camera_pane_g2_ParamLimits

0x715e,	// (0x000378c4) main_camera_pane_g3_ParamLimits

0x716a,	// (0x000378d0) main_camera_pane_g4_ParamLimits

0x7176,	// (0x000378dc) main_camera_pane_g5_ParamLimits

0x7182,	// (0x000378e8) main_camera_pane_g6_ParamLimits

0x718e,	// (0x000378f4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003f970) main_camera_pane_g_ParamLimits

0x719a,	// (0x00037900) main_camera_pane_t1_ParamLimits

0x71ac,	// (0x00037912) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003f981) main_camera_pane_t_ParamLimits

0xdaa4,	// (0x0003e20a) bg_popup_preview_window_pane_cp01_ParamLimits

0xdaa4,	// (0x0003e20a) bg_popup_preview_window_pane_cp01

0xeb54,	// (0x0003f2ba) popup_phob_thumbnail2_window_g1_ParamLimits

0xeb54,	// (0x0003f2ba) popup_phob_thumbnail2_window_g1

0xd849,	// (0x0003dfaf) call2_cli_visual_pane

0x8a31,	// (0x00039197) popup_call2_audio_conf_window_ParamLimits

0x8a31,	// (0x00039197) popup_call2_audio_conf_window

0x8a44,	// (0x000391aa) popup_call2_audio_first_window_ParamLimits

0x8a44,	// (0x000391aa) popup_call2_audio_first_window

0x8ac0,	// (0x00039226) popup_call2_audio_in_window_ParamLimits

0x8ac0,	// (0x00039226) popup_call2_audio_in_window

0x8af0,	// (0x00039256) popup_call2_audio_out_window_ParamLimits

0x8af0,	// (0x00039256) popup_call2_audio_out_window

0x8b3c,	// (0x000392a2) popup_call2_audio_second_window_ParamLimits

0x8b3c,	// (0x000392a2) popup_call2_audio_second_window

0x8b88,	// (0x000392ee) popup_call2_audio_wait_window_ParamLimits

0x8b88,	// (0x000392ee) popup_call2_audio_wait_window

0xd849,	// (0x0003dfaf) bg_popup_call2_act_pane_cp03

0xda86,	// (0x0003e1ec) list_conf_pane_cp

0xeb60,	// (0x0003f2c6) popup_call2_audio_conf_window_t1

0xe486,	// (0x0003ebec) list_single_graphic_popup_conf2_pane_ParamLimits

0xe486,	// (0x0003ebec) list_single_graphic_popup_conf2_pane

0xe499,	// (0x0003ebff) list_highlight_pane_cp04

0xeb6e,	// (0x0003f2d4) list_single_graphic_popup_conf2_pane_g1

0xe4aa,	// (0x0003ec10) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003fc78) list_single_graphic_popup_conf2_pane_g

0xeb76,	// (0x0003f2dc) list_single_graphic_popup_conf2_pane_t1

0xeb84,	// (0x0003f2ea) bg_popup_call2_act_pane_cp01_ParamLimits

0xeb84,	// (0x0003f2ea) bg_popup_call2_act_pane_cp01

0xec0e,	// (0x0003f374) call_type_pane_cp05_ParamLimits

0xec0e,	// (0x0003f374) call_type_pane_cp05

0xec62,	// (0x0003f3c8) popup_call2_audio_second_window_g1_ParamLimits

0xec62,	// (0x0003f3c8) popup_call2_audio_second_window_g1

0xecb6,	// (0x0003f41c) popup_call2_audio_second_window_g2_ParamLimits

0xecb6,	// (0x0003f41c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003fc7d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003fc7d) popup_call2_audio_second_window_g

0xed1b,	// (0x0003f481) popup_call2_audio_second_window_t1_ParamLimits

0xed1b,	// (0x0003f481) popup_call2_audio_second_window_t1

0xedd6,	// (0x0003f53c) popup_call2_audio_second_window_t2_ParamLimits

0xedd6,	// (0x0003f53c) popup_call2_audio_second_window_t2

0xee29,	// (0x0003f58f) popup_call2_audio_second_window_t3_ParamLimits

0xee29,	// (0x0003f58f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003fc84) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003fc84) popup_call2_audio_second_window_t

0xd849,	// (0x0003dfaf) bg_popup_call2_in_pane_cp02

0xd853,	// (0x0003dfb9) call_type_pane_cp04

0xd85b,	// (0x0003dfc1) popup_call2_audio_wait_window_g1

0xd863,	// (0x0003dfc9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003f85f) popup_call2_audio_wait_window_g

0xd86b,	// (0x0003dfd1) popup_call2_audio_wait_window_t3

0xef1c,	// (0x0003f682) bg_popup_call2_act_pane_ParamLimits

0xef1c,	// (0x0003f682) bg_popup_call2_act_pane

0xefdc,	// (0x0003f742) call_type_pane_cp03_ParamLimits

0xefdc,	// (0x0003f742) call_type_pane_cp03

0xf040,	// (0x0003f7a6) popup_call2_audio_first_window_g1_ParamLimits

0xf040,	// (0x0003f7a6) popup_call2_audio_first_window_g1

0x044d,	// (0x00030bb3) popup_call2_audio_first_window_g2_ParamLimits

0x044d,	// (0x00030bb3) popup_call2_audio_first_window_g2

0xe3c8,	// (0x0003eb2e) popup_call2_audio_first_window_g3_ParamLimits

0xe3c8,	// (0x0003eb2e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003fc8d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003fc8d) popup_call2_audio_first_window_g

0x052b,	// (0x00030c91) popup_call2_audio_first_window_t1_ParamLimits

0x052b,	// (0x00030c91) popup_call2_audio_first_window_t1

0x062e,	// (0x00030d94) popup_call2_audio_first_window_t4_ParamLimits

0x062e,	// (0x00030d94) popup_call2_audio_first_window_t4

0x0711,	// (0x00030e77) popup_call2_audio_first_window_t5_ParamLimits

0x0711,	// (0x00030e77) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003fc98) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003fc98) popup_call2_audio_first_window_t

0xda9c,	// (0x0003e202) bg_popup_call2_act_pane_g1

0x0dbe,	// (0x00031524) popup_cale_lunar_info_window_t1

0x0dcc,	// (0x00031532) popup_cale_lunar_info_window_t2

0x0dda,	// (0x00031540) popup_cale_lunar_info_window_t3

0xd849,	// (0x0003dfaf) bg_popup_call2_bubble_pane

0x0812,	// (0x00030f78) bg_popup_call2_in_pane_cp01_ParamLimits

0x0812,	// (0x00030f78) bg_popup_call2_in_pane_cp01

0xd525,	// (0x0003dc8b) call_type_pane_cp02

0x085a,	// (0x00030fc0) popup_call2_audio_out_window_g1_ParamLimits

0x085a,	// (0x00030fc0) popup_call2_audio_out_window_g1

0x0886,	// (0x00030fec) popup_call2_audio_out_window_g2_ParamLimits

0x0886,	// (0x00030fec) popup_call2_audio_out_window_g2

0x08ae,	// (0x00031014) popup_call2_audio_out_window_g3_ParamLimits

0x08ae,	// (0x00031014) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003fca1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003fca1) popup_call2_audio_out_window_g

0x08e9,	// (0x0003104f) popup_call2_audio_out_window_t1_ParamLimits

0x08e9,	// (0x0003104f) popup_call2_audio_out_window_t1

0x0948,	// (0x000310ae) popup_call2_audio_out_window_t2_ParamLimits

0x0948,	// (0x000310ae) popup_call2_audio_out_window_t2

0x099c,	// (0x00031102) popup_call2_audio_out_window_t3_ParamLimits

0x099c,	// (0x00031102) popup_call2_audio_out_window_t3

0x09b2,	// (0x00031118) popup_call2_audio_out_window_t4_ParamLimits

0x09b2,	// (0x00031118) popup_call2_audio_out_window_t4

0x09c8,	// (0x0003112e) popup_call2_audio_out_window_t5_ParamLimits

0x09c8,	// (0x0003112e) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003fcaa) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003fcaa) popup_call2_audio_out_window_t

0x0a2c,	// (0x00031192) bg_popup_call2_in_pane_ParamLimits

0x0a2c,	// (0x00031192) bg_popup_call2_in_pane

0x0a88,	// (0x000311ee) popup_call2_audio_in_window_g1_ParamLimits

0x0a88,	// (0x000311ee) popup_call2_audio_in_window_g1

0x0ac0,	// (0x00031226) popup_call2_audio_in_window_g2_ParamLimits

0x0ac0,	// (0x00031226) popup_call2_audio_in_window_g2

0x0af8,	// (0x0003125e) popup_call2_audio_in_window_g3_ParamLimits

0x0af8,	// (0x0003125e) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003fcb7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003fcb7) popup_call2_audio_in_window_g

0x0b50,	// (0x000312b6) popup_call2_audio_in_window_t1_ParamLimits

0x0b50,	// (0x000312b6) popup_call2_audio_in_window_t1

0x0bd0,	// (0x00031336) popup_call2_audio_in_window_t2_ParamLimits

0x0bd0,	// (0x00031336) popup_call2_audio_in_window_t2

0x0c50,	// (0x000313b6) popup_call2_audio_in_window_t3_ParamLimits

0x0c50,	// (0x000313b6) popup_call2_audio_in_window_t3

0x0c6a,	// (0x000313d0) popup_call2_audio_in_window_t4_ParamLimits

0x0c6a,	// (0x000313d0) popup_call2_audio_in_window_t4

0x0c7c,	// (0x000313e2) popup_call2_audio_in_window_t5_ParamLimits

0x0c7c,	// (0x000313e2) popup_call2_audio_in_window_t5

0x0c91,	// (0x000313f7) popup_call2_audio_in_window_t6_ParamLimits

0x0c91,	// (0x000313f7) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003fcc0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003fcc0) popup_call2_audio_in_window_t

0xda9c,	// (0x0003e202) bg_popup_call2_in_pane_g1

0x0de8,	// (0x0003154e) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0003fd3b) popup_cale_lunar_info_window_t

0xdaa4,	// (0x0003e20a) bg_popup_call2_rect_pane_ParamLimits

0xdaa4,	// (0x0003e20a) bg_popup_call2_rect_pane

0xd849,	// (0x0003dfaf) call2_cli_visual_graphic_pane

0xd849,	// (0x0003dfaf) call2_cli_visual_text_pane

0x8fe6,	// (0x0003974c) smil_status_volume_pane_g3

0x0002,

0xdbca,	// (0x0003e330) call2_cli_visual_graphic_pane_g1

0xdbca,	// (0x0003e330) call2_cli_visual_graphic_pane_g2

0xdbca,	// (0x0003e330) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003fccd) call2_cli_visual_graphic_pane_g

0x0ca6,	// (0x0003140c) bg_popup_call2_rect_pane_g1

0xdc68,	// (0x0003e3ce) bg_popup_call2_rect_pane_g2

0x0cae,	// (0x00031414) bg_popup_call2_rect_pane_g3

0x0cb6,	// (0x0003141c) bg_popup_call2_rect_pane_g4

0x0cbe,	// (0x00031424) bg_popup_call2_rect_pane_g5

0x0cc6,	// (0x0003142c) bg_popup_call2_rect_pane_g6

0x0cce,	// (0x00031434) bg_popup_call2_rect_pane_g7

0x0cd6,	// (0x0003143c) bg_popup_call2_rect_pane_g8

0x0cde,	// (0x00031444) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003fcd4) bg_popup_call2_rect_pane_g

0x0ce6,	// (0x0003144c) bg_popup_call2_bubble_pane_g1

0x0cee,	// (0x00031454) bg_popup_call2_bubble_pane_g2

0x0cf6,	// (0x0003145c) bg_popup_call2_bubble_pane_g3

0x0cfe,	// (0x00031464) bg_popup_call2_bubble_pane_g4

0x0d06,	// (0x0003146c) bg_popup_call2_bubble_pane_g5

0x0d0e,	// (0x00031474) bg_popup_call2_bubble_pane_g6

0x0d16,	// (0x0003147c) bg_popup_call2_bubble_pane_g7

0x0d1e,	// (0x00031484) bg_popup_call2_bubble_pane_g8

0x0d26,	// (0x0003148c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003fce7) bg_popup_call2_bubble_pane_g

0x6a15,	// (0x0003717b) aid_cale_week_size_cell_pane

0x71be,	// (0x00037924) aid_cams_cif_uncrop_pane_ParamLimits

0x71be,	// (0x00037924) aid_cams_cif_uncrop_pane

0x7316,	// (0x00037a7c) aid_cams_size_cell_ParamLimits

0x7316,	// (0x00037a7c) aid_cams_size_cell

0x7322,	// (0x00037a88) grid_cams_pane_ParamLimits

0x732e,	// (0x00037a94) linegrid_cams_pane_ParamLimits

0x73ed,	// (0x00037b53) call_video_pane_t1

0x740a,	// (0x00037b70) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003f9d4) call_video_pane_t

0x77da,	// (0x00037f40) aid_cale_month_size_cell_pane_ParamLimits

0x77da,	// (0x00037f40) aid_cale_month_size_cell_pane

0xf61e,	// (0x0003fd84) smil_status_volume_pane_g

0x8ff3,	// (0x00039759) volume_smil_pane_ParamLimits

0x62a5,	// (0x00036a0b) aid_popup2_width_pane

0x6935,	// (0x0003709b) cell_qdial_pane_g4_ParamLimits

0x6935,	// (0x0003709b) cell_qdial_pane_g4

0x8208,	// (0x0003896e) aid_blid_cardinal_pane_ParamLimits

0x8214,	// (0x0003897a) aid_blid_destination_pane_ParamLimits

0x8214,	// (0x0003897a) aid_blid_destination_pane

0xdaa4,	// (0x0003e20a) bg_popup_call_poc_act_pane_ParamLimits

0xdaa4,	// (0x0003e20a) bg_popup_call_poc_act_pane

0xdaa4,	// (0x0003e20a) bg_popup_call_poc_inact_pane_ParamLimits

0xdaa4,	// (0x0003e20a) bg_popup_call_poc_inact_pane

0x0d2e,	// (0x00031494) bg_popup_call_poc_act_pane_g1

0x0d36,	// (0x0003149c) bg_popup_call_poc_act_pane_g2

0x0d3e,	// (0x000314a4) bg_popup_call_poc_act_pane_g3

0x0cfe,	// (0x00031464) bg_popup_call_poc_act_pane_g4

0x0d06,	// (0x0003146c) bg_popup_call_poc_act_pane_g5

0x0d46,	// (0x000314ac) bg_popup_call_poc_act_pane_g6

0x0d16,	// (0x0003147c) bg_popup_call_poc_act_pane_g7

0x0d4e,	// (0x000314b4) bg_popup_call_poc_act_pane_g8

0xd849,	// (0x0003dfaf) main_usb_pane

0x8e38,	// (0x0003959e) popup_cale_lunar_info_window

0x768d,	// (0x00037df3) im_reading_pane_t1_ParamLimits

0xde25,	// (0x0003e58b) list_im_pane_ParamLimits

0xde36,	// (0x0003e59c) scroll_pane_cp07_ParamLimits

0xd849,	// (0x0003dfaf) grid_highlight_pane_cp012

0xdaa4,	// (0x0003e20a) mup_scale_pane_ParamLimits

0xe3c8,	// (0x0003eb2e) main_usb_pane_g1_ParamLimits

0xe3c8,	// (0x0003eb2e) main_usb_pane_g1

0x8be7,	// (0x0003934d) main_usb_pane_g2_ParamLimits

0x8be7,	// (0x0003934d) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0003fd24) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0003fd24) main_usb_pane_g

0x8bf3,	// (0x00039359) main_usb_pane_t1_ParamLimits

0x8bf3,	// (0x00039359) main_usb_pane_t1

0x8c05,	// (0x0003936b) main_usb_pane_t2_ParamLimits

0x8c05,	// (0x0003936b) main_usb_pane_t2

0x8c17,	// (0x0003937d) main_usb_pane_t3_ParamLimits

0x8c17,	// (0x0003937d) main_usb_pane_t3

0x8c29,	// (0x0003938f) main_usb_pane_t4_ParamLimits

0x8c29,	// (0x0003938f) main_usb_pane_t4

0x8c3b,	// (0x000393a1) main_usb_pane_t5_ParamLimits

0x8c3b,	// (0x000393a1) main_usb_pane_t5

0x8c4d,	// (0x000393b3) main_usb_pane_t6_ParamLimits

0x8c4d,	// (0x000393b3) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0003fd29) main_usb_pane_t_ParamLimits

0x81b7,	// (0x0003891d) aid_text_placing

0x81c0,	// (0x00038926) main_location2_pane_t1_ParamLimits

0x81d2,	// (0x00038938) main_location2_pane_t2_ParamLimits

0x81e4,	// (0x0003894a) main_location2_pane_t3_ParamLimits

0x81f6,	// (0x0003895c) main_location2_pane_t4_ParamLimits

0x81f6,	// (0x0003895c) main_location2_pane_t4

0xf3cf,	// (0x0003fb35) main_location2_pane_t_ParamLimits

0xdae0,	// (0x0003e246) find_pinb_pane_g2_ParamLimits

0xdae0,	// (0x0003e246) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003f885) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003f885) find_pinb_pane_g

0xdaec,	// (0x0003e252) find_pinb_pane_t1_ParamLimits

0xdafe,	// (0x0003e264) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003f88a) find_pinb_pane_t_ParamLimits

0xd849,	// (0x0003dfaf) main_call3_pane

0x7bb2,	// (0x00038318) cale_month_day_heading_pane_t1_ParamLimits

0x7be5,	// (0x0003834b) cale_month_day_heading_pane_t2_ParamLimits

0x7c0f,	// (0x00038375) cale_month_day_heading_pane_t3_ParamLimits

0x7c39,	// (0x0003839f) cale_month_day_heading_pane_t4_ParamLimits

0x7c63,	// (0x000383c9) cale_month_day_heading_pane_t5_ParamLimits

0x7c8d,	// (0x000383f3) cale_month_day_heading_pane_t6_ParamLimits

0x7cb7,	// (0x0003841d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003fa0c) cale_month_day_heading_pane_t_ParamLimits

0xe08f,	// (0x0003e7f5) smil_status_volume_pane

0x8828,	// (0x00038f8e) postcard_address_pane_ParamLimits

0x8828,	// (0x00038f8e) postcard_address_pane

0x8834,	// (0x00038f9a) postcard_message_pane_ParamLimits

0x8834,	// (0x00038f9a) postcard_message_pane

0x8bc5,	// (0x0003932b) call2_cli_visual_pane_t1_ParamLimits

0x8bc5,	// (0x0003932b) call2_cli_visual_pane_t1

0x9144,	// (0x000398aa) postcard_message_pane_t1_ParamLimits

0x9144,	// (0x000398aa) postcard_message_pane_t1

0x912d,	// (0x00039893) postcard_address_pane_t1_ParamLimits

0x912d,	// (0x00039893) postcard_address_pane_t1

0x9120,	// (0x00039886) popup_call3_audio_in_window_ParamLimits

0x9120,	// (0x00039886) popup_call3_audio_in_window

0x9008,	// (0x0003976e) bg_popup_call3_in_pane_ParamLimits

0x9008,	// (0x0003976e) bg_popup_call3_in_pane

0x9066,	// (0x000397cc) popup_call3_audio_in_window_g1_ParamLimits

0x9066,	// (0x000397cc) popup_call3_audio_in_window_g1

0x907e,	// (0x000397e4) popup_call3_audio_in_window_g2_ParamLimits

0x907e,	// (0x000397e4) popup_call3_audio_in_window_g2

0x9096,	// (0x000397fc) popup_call3_audio_in_window_g3_ParamLimits

0x9096,	// (0x000397fc) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0003fd8b) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0003fd8b) popup_call3_audio_in_window_g

0x90be,	// (0x00039824) popup_call3_audio_in_window_t1_ParamLimits

0x90be,	// (0x00039824) popup_call3_audio_in_window_t1

0x90e6,	// (0x0003984c) popup_call3_audio_in_window_t2_ParamLimits

0x90e6,	// (0x0003984c) popup_call3_audio_in_window_t2

0x910e,	// (0x00039874) popup_call3_audio_in_window_t3_ParamLimits

0x910e,	// (0x00039874) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0003fd94) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0003fd94) popup_call3_audio_in_window_t

0xdd26,	// (0x0003e48c) bg_popup_call3_rect_pane

0x0ca6,	// (0x0003140c) bg_popup_call3_rect_pane_g1

0xdc68,	// (0x0003e3ce) bg_popup_call3_rect_pane_g2

0x0cae,	// (0x00031414) bg_popup_call3_rect_pane_g3

0x0cb6,	// (0x0003141c) bg_popup_call3_rect_pane_g4

0x0cbe,	// (0x00031424) bg_popup_call3_rect_pane_g5

0x0cc6,	// (0x0003142c) bg_popup_call3_rect_pane_g6

0x0cce,	// (0x00031434) bg_popup_call3_rect_pane_g7

0x84fa,	// (0x00038c60) mup_visualizer_osc_pane

0xe819,	// (0x0003ef7f) mup_visualizer_spec_pane

0x9028,	// (0x0003978e) call3_video_qcif_pane_ParamLimits

0x9028,	// (0x0003978e) call3_video_qcif_pane

0x9038,	// (0x0003979e) call3_video_qcif_uncrop_pane_ParamLimits

0x9038,	// (0x0003979e) call3_video_qcif_uncrop_pane

0x9044,	// (0x000397aa) call3_video_subqcif_pane_ParamLimits

0x9044,	// (0x000397aa) call3_video_subqcif_pane

0x9056,	// (0x000397bc) call3_video_subqcif_uncrop_pane_ParamLimits

0x9056,	// (0x000397bc) call3_video_subqcif_uncrop_pane

0x90ae,	// (0x00039814) popup_call3_audio_in_window_g4_ParamLimits

0x90ae,	// (0x00039814) popup_call3_audio_in_window_g4

0x8fd5,	// (0x0003973b) mup_spec_half_pane

0x8fde,	// (0x00039744) mup_spec_half_pane_cp

0x0f93,	// (0x000316f9) mup_osc_middle_pane

0x0f9c,	// (0x00031702) mup_visualizer_osc_pane_g1

0x8fb6,	// (0x0003971c) mup_spec_bar_pane_ParamLimits

0x8fb6,	// (0x0003971c) mup_spec_bar_pane

0x0f80,	// (0x000316e6) mup_spec_bar_pane_g1

0x0f8a,	// (0x000316f0) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003fd7f) mup_spec_bar_pane_g

0x6a15,	// (0x0003717b) aid_cale_week_size_cell_pane_ParamLimits

0x6a2f,	// (0x00037195) bg_cale_heading_pane_ParamLimits

0x6a4c,	// (0x000371b2) bg_cale_pane_cp01_ParamLimits

0x6a6e,	// (0x000371d4) cale_week_corner_pane_ParamLimits

0x6a8d,	// (0x000371f3) cale_week_day_heading_pane_ParamLimits

0x6aaf,	// (0x00037215) cale_week_scroll_pane_g1_ParamLimits

0x6ac7,	// (0x0003722d) cale_week_scroll_pane_g2_ParamLimits

0x6adf,	// (0x00037245) cale_week_scroll_pane_g3_ParamLimits

0x6af7,	// (0x0003725d) cale_week_scroll_pane_g4_ParamLimits

0x6b0f,	// (0x00037275) cale_week_scroll_pane_g5_ParamLimits

0x6b27,	// (0x0003728d) cale_week_scroll_pane_g6_ParamLimits

0x6b3f,	// (0x000372a5) cale_week_scroll_pane_g7_ParamLimits

0x6b57,	// (0x000372bd) cale_week_scroll_pane_g8_ParamLimits

0x6b6f,	// (0x000372d5) cale_week_scroll_pane_g9_ParamLimits

0x6b8c,	// (0x000372f2) cale_week_scroll_pane_g10_ParamLimits

0x6ba9,	// (0x0003730f) cale_week_scroll_pane_g11_ParamLimits

0x6bc6,	// (0x0003732c) cale_week_scroll_pane_g12_ParamLimits

0x6be3,	// (0x00037349) cale_week_scroll_pane_g13_ParamLimits

0x6c00,	// (0x00037366) cale_week_scroll_pane_g14_ParamLimits

0x6c1d,	// (0x00037383) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003f916) cale_week_scroll_pane_g_ParamLimits

0x6c52,	// (0x000373b8) cale_week_time_pane_ParamLimits

0x6c6a,	// (0x000373d0) grid_cale_week_pane_ParamLimits

0xdca5,	// (0x0003e40b) listscroll_cale_week_pane_t1

0xdcb7,	// (0x0003e41d) scroll_pane_cp08_ParamLimits

0x783a,	// (0x00037fa0) cale_month_corner_pane_ParamLimits

0xe065,	// (0x0003e7cb) cale_month_pane_t1

0x7b69,	// (0x000382cf) cale_month_week_pane_ParamLimits

0xe3c8,	// (0x0003eb2e) popup_call_status_window_g1_ParamLimits

0x7fce,	// (0x00038734) popup_call_status_window_g2_ParamLimits

0x7fda,	// (0x00038740) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003fabc) popup_call_status_window_g_ParamLimits

0xe419,	// (0x0003eb7f) aid_call2_pane

0x51f4,	// (0x0003595a) msg_header_pane_g1

0x8828,	// (0x00038f8e) postcard_address2_pane_ParamLimits

0x8828,	// (0x00038f8e) postcard_address2_pane

0x8834,	// (0x00038f9a) postcard_message2_pane_ParamLimits

0x8834,	// (0x00038f9a) postcard_message2_pane

0x8f6d,	// (0x000396d3) message2_row_pane_ParamLimits

0x8f6d,	// (0x000396d3) message2_row_pane

0x8f85,	// (0x000396eb) address2_row_pane_ParamLimits

0x8f85,	// (0x000396eb) address2_row_pane

0x0f4e,	// (0x000316b4) postcard_message2_row_pane_g1

0x0f56,	// (0x000316bc) postcard_message2_row_pane_t1

0x0f4e,	// (0x000316b4) address2_row_pane_g1

0x0f56,	// (0x000316bc) address2_row_pane_t1

0x70ae,	// (0x00037814) aid_size_cell_vorec

0xd849,	// (0x0003dfaf) main_rss_pane

0x8f98,	// (0x000396fe) rss_list_single_pane_ParamLimits

0x8f98,	// (0x000396fe) rss_list_single_pane

0x0f64,	// (0x000316ca) rss_list_single_pane_t1

0x0f72,	// (0x000316d8) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0003fd7a) rss_list_single_pane_t

0xd849,	// (0x0003dfaf) main_camera2_pane

0xd849,	// (0x0003dfaf) main_video2_pane

0x9194,	// (0x000398fa) cams_zoom_pane_cp2_ParamLimits

0x9194,	// (0x000398fa) cams_zoom_pane_cp2

0x91a0,	// (0x00039906) image2_vga_pane_ParamLimits

0x91a0,	// (0x00039906) image2_vga_pane

0x91af,	// (0x00039915) main_camera2_pane_g1_ParamLimits

0x91af,	// (0x00039915) main_camera2_pane_g1

0x91bb,	// (0x00039921) main_camera2_pane_g2_ParamLimits

0x91bb,	// (0x00039921) main_camera2_pane_g2

0x91c7,	// (0x0003992d) main_camera2_pane_g3_ParamLimits

0x91c7,	// (0x0003992d) main_camera2_pane_g3

0x91d3,	// (0x00039939) main_camera2_pane_g4_ParamLimits

0x91d3,	// (0x00039939) main_camera2_pane_g4

0x91df,	// (0x00039945) main_camera2_pane_g5_ParamLimits

0x91df,	// (0x00039945) main_camera2_pane_g5

0x91eb,	// (0x00039951) main_camera2_pane_g6_ParamLimits

0x91eb,	// (0x00039951) main_camera2_pane_g6

0x91f7,	// (0x0003995d) main_camera2_pane_g7_ParamLimits

0x91f7,	// (0x0003995d) main_camera2_pane_g7

0x9203,	// (0x00039969) main_camera2_pane_g8_ParamLimits

0x9203,	// (0x00039969) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0003fd9b) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0003fd9b) main_camera2_pane_g

0x921b,	// (0x00039981) main_camera2_pane_t1_ParamLimits

0x921b,	// (0x00039981) main_camera2_pane_t1

0x922d,	// (0x00039993) main_camera2_pane_t2_ParamLimits

0x922d,	// (0x00039993) main_camera2_pane_t2

0x923f,	// (0x000399a5) main_camera2_pane_t3_ParamLimits

0x923f,	// (0x000399a5) main_camera2_pane_t3

0x9251,	// (0x000399b7) main_camera2_pane_t4_ParamLimits

0x9251,	// (0x000399b7) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0003fdae) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0003fdae) main_camera2_pane_t

0x92ac,	// (0x00039a12) cams_zoom_pane_cp4_ParamLimits

0x92ac,	// (0x00039a12) cams_zoom_pane_cp4

0x92bc,	// (0x00039a22) image2_cif_pane_ParamLimits

0x92bc,	// (0x00039a22) image2_cif_pane

0x92cd,	// (0x00039a33) image2_subqcif_pane_ParamLimits

0x92cd,	// (0x00039a33) image2_subqcif_pane

0x92da,	// (0x00039a40) main_video2_pane_g1_ParamLimits

0x92da,	// (0x00039a40) main_video2_pane_g1

0x92ec,	// (0x00039a52) main_video2_pane_g2_ParamLimits

0x92ec,	// (0x00039a52) main_video2_pane_g2

0x92fc,	// (0x00039a62) main_video2_pane_g3_ParamLimits

0x92fc,	// (0x00039a62) main_video2_pane_g3

0x930c,	// (0x00039a72) main_video2_pane_g4_ParamLimits

0x930c,	// (0x00039a72) main_video2_pane_g4

0x931c,	// (0x00039a82) main_video2_pane_g5_ParamLimits

0x931c,	// (0x00039a82) main_video2_pane_g5

0x932c,	// (0x00039a92) main_video2_pane_g6_ParamLimits

0x932c,	// (0x00039a92) main_video2_pane_g6

0x0005,

0xf657,	// (0x0003fdbd) main_video2_pane_g_ParamLimits

0xf657,	// (0x0003fdbd) main_video2_pane_g

0x933e,	// (0x00039aa4) main_video2_pane_t1_ParamLimits

0x933e,	// (0x00039aa4) main_video2_pane_t1

0x9358,	// (0x00039abe) main_video2_pane_t2_ParamLimits

0x9358,	// (0x00039abe) main_video2_pane_t2

0x937e,	// (0x00039ae4) main_video2_pane_t3_ParamLimits

0x937e,	// (0x00039ae4) main_video2_pane_t3

0x0002,

0xf664,	// (0x0003fdca) main_video2_pane_t_ParamLimits

0xf664,	// (0x0003fdca) main_video2_pane_t

0x8cfc,	// (0x00039462) call_muted_g2

0x0001,

0xf606,	// (0x0003fd6c) call_muted_g

0xd849,	// (0x0003dfaf) main_mup2_pane

0x104e,	// (0x000317b4) main_mup2_pane_g1_ParamLimits

0x104e,	// (0x000317b4) main_mup2_pane_g1

0x93a4,	// (0x00039b0a) main_mup2_pane_g2_ParamLimits

0x93a4,	// (0x00039b0a) main_mup2_pane_g2

0x9610,	// (0x00039d76) main_mup_pane_g13_cp1

0x9618,	// (0x00039d7e) mup_volume_pane_cp1

0x93c4,	// (0x00039b2a) main_mup2_pane_g4_ParamLimits

0x93c4,	// (0x00039b2a) main_mup2_pane_g4

0x93d5,	// (0x00039b3b) main_mup2_pane_g5_ParamLimits

0x93d5,	// (0x00039b3b) main_mup2_pane_g5

0x93e6,	// (0x00039b4c) main_mup2_pane_g6_ParamLimits

0x93e6,	// (0x00039b4c) main_mup2_pane_g6

0x93f7,	// (0x00039b5d) main_mup2_pane_g7_ParamLimits

0x93f7,	// (0x00039b5d) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0003fdd1) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0003fdd1) main_mup2_pane_g

0x9413,	// (0x00039b79) main_mup2_pane_t1_ParamLimits

0x9413,	// (0x00039b79) main_mup2_pane_t1

0x942a,	// (0x00039b90) main_mup2_pane_t2_ParamLimits

0x942a,	// (0x00039b90) main_mup2_pane_t2

0x9441,	// (0x00039ba7) main_mup2_pane_t3_ParamLimits

0x9441,	// (0x00039ba7) main_mup2_pane_t3

0x9458,	// (0x00039bbe) main_mup2_pane_t4_ParamLimits

0x9458,	// (0x00039bbe) main_mup2_pane_t4

0x9472,	// (0x00039bd8) main_mup2_pane_t5_ParamLimits

0x9472,	// (0x00039bd8) main_mup2_pane_t5

0x948c,	// (0x00039bf2) main_mup2_pane_t6_ParamLimits

0x948c,	// (0x00039bf2) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0003fde0) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0003fde0) main_mup2_pane_t

0x94c0,	// (0x00039c26) mup2_visualizer_pane_ParamLimits

0x94c0,	// (0x00039c26) mup2_visualizer_pane

0x94f2,	// (0x00039c58) mup_progress_pane_cp_ParamLimits

0x94f2,	// (0x00039c58) mup_progress_pane_cp

0x95fb,	// (0x00039d61) mup_volume_pane_cp_ParamLimits

0x95fb,	// (0x00039d61) mup_volume_pane_cp

0x9509,	// (0x00039c6f) mup2_visualizer_pane_g1_ParamLimits

0x9509,	// (0x00039c6f) mup2_visualizer_pane_g1

0x1020,	// (0x00031786) mup2_visualizer_pane_g2_ParamLimits

0x1020,	// (0x00031786) mup2_visualizer_pane_g2

0x951e,	// (0x00039c84) mup2_visualizer_pane_g3_ParamLimits

0x951e,	// (0x00039c84) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0003fded) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0003fded) mup2_visualizer_pane_g

0x89e5,	// (0x0003914b) aid_size_cell_fmradio

0x8dde,	// (0x00039544) aid_height_parent_landcape

0xdec3,	// (0x0003e629) wml_content_pane_cp

0xdecb,	// (0x0003e631) wml_tabs_pane

0xded4,	// (0x0003e63a) popup_wml_miniature_window

0xdedc,	// (0x0003e642) scroll_pane_cp021

0xdef0,	// (0x0003e656) wml_content_pane_comp8

0xd849,	// (0x0003dfaf) bg_popup_sub_pane_cp05

0x103e,	// (0x000317a4) popup_wml_miniature_window_g1

0x1046,	// (0x000317ac) wml_miniature_view_pane

0x952a,	// (0x00039c90) aid_size_wml_view

0x9532,	// (0x00039c98) wml_miniature_view_pane_g1

0x953b,	// (0x00039ca1) wml_miniature_view_pane_g2

0x9544,	// (0x00039caa) wml_miniature_view_pane_g3

0x954c,	// (0x00039cb2) wml_miniature_view_pane_g4

0x9554,	// (0x00039cba) wml_miniature_view_pane_g5

0x955c,	// (0x00039cc2) wml_miniature_view_pane_g6

0x9564,	// (0x00039cca) wml_miniature_view_pane_g7

0x956c,	// (0x00039cd2) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0003fdf4) wml_miniature_view_pane_g

0x104e,	// (0x000317b4) background_graphic_ParamLimits

0x104e,	// (0x000317b4) background_graphic

0x105a,	// (0x000317c0) wml_tabs_2_pane

0x1063,	// (0x000317c9) wml_tabs_3_pane_ParamLimits

0x1063,	// (0x000317c9) wml_tabs_3_pane

0x1075,	// (0x000317db) wml_tabs_4_pane_ParamLimits

0x1075,	// (0x000317db) wml_tabs_4_pane

0x108b,	// (0x000317f1) wml_tabs_5_pane_ParamLimits

0x108b,	// (0x000317f1) wml_tabs_5_pane

0x10a5,	// (0x0003180b) wml_tabs_pane_g2_ParamLimits

0x10a5,	// (0x0003180b) wml_tabs_pane_g2

0x10b9,	// (0x0003181f) wml_tabs_pane_g3_ParamLimits

0x10b9,	// (0x0003181f) wml_tabs_pane_g3

0x9574,	// (0x00039cda) wml_tabs_2_active_pane_ParamLimits

0x9574,	// (0x00039cda) wml_tabs_2_active_pane

0x9584,	// (0x00039cea) wml_tabs_2_passive_pane_ParamLimits

0x9584,	// (0x00039cea) wml_tabs_2_passive_pane

0x9594,	// (0x00039cfa) wml_tabs_3_active_pane_cp_ParamLimits

0x9594,	// (0x00039cfa) wml_tabs_3_active_pane_cp

0x95a5,	// (0x00039d0b) wml_tabs_3_passive_pane_ParamLimits

0x95a5,	// (0x00039d0b) wml_tabs_3_passive_pane

0x95b6,	// (0x00039d1c) wml_tabs_3_passive_pane_cp_ParamLimits

0x95b6,	// (0x00039d1c) wml_tabs_3_passive_pane_cp

0x95c7,	// (0x00039d2d) tabs_4_active_pane

0x95cf,	// (0x00039d35) tabs_4_passive_pane

0x95d7,	// (0x00039d3d) tabs_4_passive_pane_cp

0x95df,	// (0x00039d45) tabs_4_passive_pane_cp2

0x8bdf,	// (0x00039345) aid_height_text

0x84c7,	// (0x00038c2d) mup_volume_cont_pane_ParamLimits

0x84c7,	// (0x00038c2d) mup_volume_cont_pane

0x65f5,	// (0x00036d5b) aid_size_cell_pinb

0x65ff,	// (0x00036d65) aid_size_list_pinb

0x94db,	// (0x00039c41) mup2_volume_cont_pane_ParamLimits

0x94db,	// (0x00039c41) mup2_volume_cont_pane

0x95e7,	// (0x00039d4d) mup2_volume_cont_pane_g1_ParamLimits

0x95e7,	// (0x00039d4d) mup2_volume_cont_pane_g1

0x62ad,	// (0x00036a13) aid_size_cell_touch_ParamLimits

0x62ad,	// (0x00036a13) aid_size_cell_touch

0x652a,	// (0x00036c90) touch_pane_ParamLimits

0x652a,	// (0x00036c90) touch_pane

0xd3fa,	// (0x0003db60) main_rss2_pane

0x110f,	// (0x00031875) listscroll_rss2_pane

0x1118,	// (0x0003187e) rss2_navigation_pane

0x1120,	// (0x00031886) list_rss2_pane

0xe532,	// (0x0003ec98) scroll_pane_cp22

0x1128,	// (0x0003188e) rss2_navigation_pane_g1

0x1131,	// (0x00031897) rss2_navigation_pane_g2

0x1139,	// (0x0003189f) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0003fe05) rss2_navigation_pane_g

0x1141,	// (0x000318a7) rss2_navigation_pane_t1

0x9620,	// (0x00039d86) rss2_list_single_pane_ParamLimits

0x9620,	// (0x00039d86) rss2_list_single_pane

0x114f,	// (0x000318b5) rss2_list_single_pane_t2

0x115d,	// (0x000318c3) rss2_list_single_pane_t3_ParamLimits

0x115d,	// (0x000318c3) rss2_list_single_pane_t3

0x117a,	// (0x000318e0) rss2_list_single_pane_t4

0x7ea6,	// (0x0003860c) smil_status_pane_g1

0xf0b0,	// (0x0003f816) main_image2_pane_ParamLimits

0xf0b0,	// (0x0003f816) main_image2_pane

0x920f,	// (0x00039975) main_camera2_pane_g9_ParamLimits

0x920f,	// (0x00039975) main_camera2_pane_g9

0x9263,	// (0x000399c9) main_camera2_pane_t5_ParamLimits

0x9263,	// (0x000399c9) main_camera2_pane_t5

0x9275,	// (0x000399db) main_camera2_pane_t6_ParamLimits

0x9275,	// (0x000399db) main_camera2_pane_t6

0x9636,	// (0x00039d9c) main_image2_pane_g1_ParamLimits

0x9636,	// (0x00039d9c) main_image2_pane_g1

0x89d3,	// (0x00039139) smil2_video_pane_ParamLimits

0x89d3,	// (0x00039139) smil2_video_pane

0x4f88,	// (0x000356ee) aid_zoom_text_primary_cp

0x64d9,	// (0x00036c3f) popup_preview_fixed_window

0xde1d,	// (0x0003e583) im_reading_pane_g1

0x916b,	// (0x000398d1) cams2_bc_adjust_pane_cp_ParamLimits

0x916b,	// (0x000398d1) cams2_bc_adjust_pane_cp

0x92a0,	// (0x00039a06) cams2_bc_adjust_pane_ParamLimits

0x92a0,	// (0x00039a06) cams2_bc_adjust_pane

0x9642,	// (0x00039da8) cams2_bc_adjust_pane_g1

0x964a,	// (0x00039db0) cams2_slider_pane

0x9653,	// (0x00039db9) cams2_slider_pane_g1

0x965c,	// (0x00039dc2) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0003fe0c) cams2_slider_pane_g

0x66cf,	// (0x00036e35) calc_display_pane_ParamLimits

0x66e9,	// (0x00036e4f) calc_paper_pane_ParamLimits

0x6701,	// (0x00036e67) grid_calc_pane_ParamLimits

0x804c,	// (0x000387b2) popup_clock_digital_window_t1_ParamLimits

0xe9b0,	// (0x0003f116) main_image_pane_t1

0x66b5,	// (0x00036e1b) aid_size_cell_calc_ParamLimits

0x66b5,	// (0x00036e1b) aid_size_cell_calc

0x8e18,	// (0x0003957e) popup_blid_sat_info2_window_ParamLimits

0x8e18,	// (0x0003957e) popup_blid_sat_info2_window

0x11c4,	// (0x0003192a) aid_size_cell_blid

0x11cc,	// (0x00031932) bg_popup_window_pane_cp07

0x11ef,	// (0x00031955) grid_popup_blid_pane

0x11f7,	// (0x0003195d) heading_pane_cp05_ParamLimits

0x11f7,	// (0x0003195d) heading_pane_cp05

0x12bf,	// (0x00031a25) cell_popup_blid_pane_ParamLimits

0x12bf,	// (0x00031a25) cell_popup_blid_pane

0x12df,	// (0x00031a45) cell_popup_blid_pane_g1

0x12e7,	// (0x00031a4d) cell_popup_blid_pane_t1

0x94a9,	// (0x00039c0f) mup2_indicator_pane_ParamLimits

0x94a9,	// (0x00039c0f) mup2_indicator_pane

0xdd26,	// (0x0003e48c) mup2_visualizer_osc_pane

0x102c,	// (0x00031792) mup2_visualizer_spec_pane_ParamLimits

0x102c,	// (0x00031792) mup2_visualizer_spec_pane

0x9676,	// (0x00039ddc) mup2_spec_half_pane

0x967f,	// (0x00039de5) mup2_spec_half_pane_cp

0x9687,	// (0x00039ded) mup2_spec_bar_pane_ParamLimits

0x9687,	// (0x00039ded) mup2_spec_bar_pane

0x0f80,	// (0x000316e6) mup2_spec_bar_pane_g1

0x0f8a,	// (0x000316f0) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003fd7f) mup2_spec_bar_pane_g

0x96a6,	// (0x00039e0c) mup2_osc_middle_pane

0x0f9c,	// (0x00031702) mup2_visualizer_osc_pane_g1

0xd424,	// (0x0003db8a) popup_number_entry_window_t1_ParamLimits

0xd437,	// (0x0003db9d) popup_number_entry_window_t2_ParamLimits

0xd449,	// (0x0003dbaf) popup_number_entry_window_t3_ParamLimits

0xd45b,	// (0x0003dbc1) popup_number_entry_window_t5_ParamLimits

0xd45b,	// (0x0003dbc1) popup_number_entry_window_t5

0xf0ca,	// (0x0003f830) popup_number_entry_window_t_ParamLimits

0xd48f,	// (0x0003dbf5) text_title_cp2_ParamLimits

0x8712,	// (0x00038e78) aid_hotspot_pointer_text2_pane

0x87a4,	// (0x00038f0a) main_viewer_pane_g9_ParamLimits

0x87a4,	// (0x00038f0a) main_viewer_pane_g9

0xe065,	// (0x0003e7cb) cale_month_pane_t1_ParamLimits

0xe0a2,	// (0x0003e808) bg_cale_pane_ParamLimits

0xe0ba,	// (0x0003e820) list_cale_pane_ParamLimits

0xe0cb,	// (0x0003e831) listscroll_cale_day_pane_t1

0xe0dd,	// (0x0003e843) scroll_pane_cp09_ParamLimits

0x852f,	// (0x00038c95) main_mup_eq_pane_t1_ParamLimits

0x852f,	// (0x00038c95) main_mup_eq_pane_t1

0x8545,	// (0x00038cab) main_mup_eq_pane_t2_ParamLimits

0x8545,	// (0x00038cab) main_mup_eq_pane_t2

0x855b,	// (0x00038cc1) main_mup_eq_pane_t3_ParamLimits

0x855b,	// (0x00038cc1) main_mup_eq_pane_t3

0x8571,	// (0x00038cd7) main_mup_eq_pane_t4_ParamLimits

0x8571,	// (0x00038cd7) main_mup_eq_pane_t4

0x8587,	// (0x00038ced) main_mup_eq_pane_t5_ParamLimits

0x8587,	// (0x00038ced) main_mup_eq_pane_t5

0x859d,	// (0x00038d03) main_mup_eq_pane_t6_ParamLimits

0x859d,	// (0x00038d03) main_mup_eq_pane_t6

0x85af,	// (0x00038d15) main_mup_eq_pane_t7_ParamLimits

0x85af,	// (0x00038d15) main_mup_eq_pane_t7

0x85c1,	// (0x00038d27) main_mup_eq_pane_t8_ParamLimits

0x85c1,	// (0x00038d27) main_mup_eq_pane_t8

0x85d3,	// (0x00038d39) main_mup_eq_pane_t9_ParamLimits

0x85d3,	// (0x00038d39) main_mup_eq_pane_t9

0x85e9,	// (0x00038d4f) main_mup_eq_pane_t10_ParamLimits

0x85e9,	// (0x00038d4f) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003fbbb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003fbbb) main_mup_eq_pane_t

0x867c,	// (0x00038de2) mup_equalizer_pane_cp5_ParamLimits

0x868e,	// (0x00038df4) mup_equalizer_pane_cp6_ParamLimits

0x86a0,	// (0x00038e06) mup_equalizer_pane_cp7_ParamLimits

0xd3fa,	// (0x0003db60) main_gallery_pane

0x0fa5,	// (0x0003170b) smil2_volume_pane

0x0fc0,	// (0x00031726) smil_status_volume_pane_g1_ParamLimits

0x0fad,	// (0x00031713) smil_status_volume_pane_g2_ParamLimits

0x8fe6,	// (0x0003974c) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0003fd84) smil_status_volume_pane_g_ParamLimits

0x11cc,	// (0x00031932) bg_popup_window_pane_cp07_ParamLimits

0x11da,	// (0x00031940) blid_firmament_pane

0x96af,	// (0x00039e15) aid_size_cell_gallery_ParamLimits

0x96af,	// (0x00039e15) aid_size_cell_gallery

0x96bd,	// (0x00039e23) grid_gallery_pane_ParamLimits

0x96bd,	// (0x00039e23) grid_gallery_pane

0x96c9,	// (0x00039e2f) cell_gallery_pane_ParamLimits

0x96c9,	// (0x00039e2f) cell_gallery_pane

0x12f5,	// (0x00031a5b) bg_cell_gallery_focus_pane_ParamLimits

0x12f5,	// (0x00031a5b) bg_cell_gallery_focus_pane

0x1307,	// (0x00031a6d) cell_gallery_pane_g1_ParamLimits

0x1307,	// (0x00031a6d) cell_gallery_pane_g1

0x9705,	// (0x00039e6b) cell_gallery_pane_g2_ParamLimits

0x9705,	// (0x00039e6b) cell_gallery_pane_g2

0x9712,	// (0x00039e78) cell_gallery_pane_g3_ParamLimits

0x9712,	// (0x00039e78) cell_gallery_pane_g3

0x1313,	// (0x00031a79) cell_gallery_pane_g4_ParamLimits

0x1313,	// (0x00031a79) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0003fe32) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0003fe32) cell_gallery_pane_g

0x131f,	// (0x00031a85) bg_cell_gallery_focus_pane_g1

0x1327,	// (0x00031a8d) bg_cell_gallery_focus_pane_g2

0x132f,	// (0x00031a95) bg_cell_gallery_focus_pane_g3

0x1337,	// (0x00031a9d) bg_cell_gallery_focus_pane_g4

0x133f,	// (0x00031aa5) bg_cell_gallery_focus_pane_g5

0x1347,	// (0x00031aad) bg_cell_gallery_focus_pane_g6

0x134f,	// (0x00031ab5) bg_cell_gallery_focus_pane_g7

0x1357,	// (0x00031abd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0003fe3b) bg_cell_gallery_focus_pane_g

0x135f,	// (0x00031ac5) aid_firma_cardinal

0x1373,	// (0x00031ad9) blid_firmament_pane_t1

0x138a,	// (0x00031af0) blid_firmament_pane_t2

0x13a1,	// (0x00031b07) blid_firmament_pane_t3

0x13b8,	// (0x00031b1e) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0003fe4c) blid_firmament_pane_t

0x13cf,	// (0x00031b35) blid_sat_info_pane

0x13df,	// (0x00031b45) blid_sat_info_pane_g1

0x13df,	// (0x00031b45) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0003fe55) blid_sat_info_pane_g

0x13e9,	// (0x00031b4f) blid_sat_info_pane_t1

0x13f7,	// (0x00031b5d) smil2_volume_content_pane

0x1400,	// (0x00031b66) smil2_volume_pane_g1

0x1408,	// (0x00031b6e) smil2_volume_content_pane_g1

0x1411,	// (0x00031b77) smil2_volume_content_pane_g2

0x141a,	// (0x00031b80) smil2_volume_content_pane_g3

0x1423,	// (0x00031b89) smil2_volume_content_pane_g4

0x142c,	// (0x00031b92) smil2_volume_content_pane_g5

0x1435,	// (0x00031b9b) smil2_volume_content_pane_g6

0x143e,	// (0x00031ba4) smil2_volume_content_pane_g7

0x1447,	// (0x00031bad) smil2_volume_content_pane_g8

0x1450,	// (0x00031bb6) smil2_volume_content_pane_g9

0x1459,	// (0x00031bbf) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0003fe5a) smil2_volume_content_pane_g

0x6cff,	// (0x00037465) cale_week_day_heading_pane_t1_ParamLimits

0x6d27,	// (0x0003748d) cale_week_day_heading_pane_t2_ParamLimits

0x6d54,	// (0x000374ba) cale_week_day_heading_pane_t3_ParamLimits

0x6d81,	// (0x000374e7) cale_week_day_heading_pane_t4_ParamLimits

0x6dae,	// (0x00037514) cale_week_day_heading_pane_t5_ParamLimits

0x6ddb,	// (0x00037541) cale_week_day_heading_pane_t6_ParamLimits

0x6e08,	// (0x0003756e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003f937) cale_week_day_heading_pane_t_ParamLimits

0xdcd4,	// (0x0003e43a) bg_cale_side_pane_ParamLimits

0x6e30,	// (0x00037596) cale_week_time_pane_t1_ParamLimits

0x6e74,	// (0x000375da) cale_week_time_pane_t2_ParamLimits

0x6eb8,	// (0x0003761e) cale_week_time_pane_t3_ParamLimits

0x6efc,	// (0x00037662) cale_week_time_pane_t4_ParamLimits

0x6f40,	// (0x000376a6) cale_week_time_pane_t5_ParamLimits

0x6f84,	// (0x000376ea) cale_week_time_pane_t6_ParamLimits

0x6fc8,	// (0x0003772e) cale_week_time_pane_t7_ParamLimits

0x700c,	// (0x00037772) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003f946) cale_week_time_pane_t_ParamLimits

0x7050,	// (0x000377b6) cell_cale_week_pane_g2_ParamLimits

0xdcd4,	// (0x0003e43a) bg_cale_side_pane_cp01_ParamLimits

0x7ce1,	// (0x00038447) cale_month_week_pane_t1_ParamLimits

0x7cfa,	// (0x00038460) cale_month_week_pane_t2_ParamLimits

0x7d13,	// (0x00038479) cale_month_week_pane_t3_ParamLimits

0x7d2c,	// (0x00038492) cale_month_week_pane_t4_ParamLimits

0x7d45,	// (0x000384ab) cale_month_week_pane_t5_ParamLimits

0x7d5e,	// (0x000384c4) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003fa1b) cale_month_week_pane_t_ParamLimits

0x7e65,	// (0x000385cb) cell_cale_month_pane_g1_ParamLimits

0xd3fa,	// (0x0003db60) main_cale_event_viewer_pane

0xd3fa,	// (0x0003db60) listscroll_cale_event_viewer_pane

0x1462,	// (0x00031bc8) list_cale_ev_pane

0x146a,	// (0x00031bd0) scroll_pane_cp023

0x971f,	// (0x00039e85) field_cale_ev_pane_ParamLimits

0x971f,	// (0x00039e85) field_cale_ev_pane

0x1476,	// (0x00031bdc) field_cale_ev_content_pane_ParamLimits

0x1476,	// (0x00031bdc) field_cale_ev_content_pane

0x1482,	// (0x00031be8) field_cale_ev_pane_g1_ParamLimits

0x1482,	// (0x00031be8) field_cale_ev_pane_g1

0x148e,	// (0x00031bf4) field_cale_ev_pane_g2_ParamLimits

0x148e,	// (0x00031bf4) field_cale_ev_pane_g2

0x14a6,	// (0x00031c0c) field_cale_ev_pane_g3_ParamLimits

0x14a6,	// (0x00031c0c) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0003fe6f) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0003fe6f) field_cale_ev_pane_g

0x14be,	// (0x00031c24) field_cale_ev_pane_t1_ParamLimits

0x14be,	// (0x00031c24) field_cale_ev_pane_t1

0x9739,	// (0x00039e9f) field_cale_ev_content_pane_t1_ParamLimits

0x9739,	// (0x00039e9f) field_cale_ev_content_pane_t1

0xe896,	// (0x0003effc) bg_button_pane_cp01

0x6a05,	// (0x0003716b) listscroll_cale_week_pane_ParamLimits

0xdc9c,	// (0x0003e402) popup_toolbar_window_cp01

0xdca5,	// (0x0003e40b) listscroll_cale_week_pane_t1_ParamLimits

0x6a05,	// (0x0003716b) listscroll_cale_day_pane_ParamLimits

0xdc9c,	// (0x0003e402) popup_toolbar_window_cp02

0xe0cb,	// (0x0003e831) listscroll_cale_day_pane_t1_ParamLimits

0x6a05,	// (0x0003716b) main_cale_month_pane_ParamLimits

0x8eef,	// (0x00039655) popup_toolbar_window_cp03_ParamLimits

0x8eef,	// (0x00039655) popup_toolbar_window_cp03

0x88fb,	// (0x00039061) main_image_pane_g2_ParamLimits

0x88fb,	// (0x00039061) main_image_pane_g2

0x8907,	// (0x0003906d) main_image_pane_g3_ParamLimits

0x8907,	// (0x0003906d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003fc4d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003fc4d) main_image_pane_g

0xe9b0,	// (0x0003f116) main_image_pane_t1_ParamLimits

0x8913,	// (0x00039079) main_image_pane_t2_ParamLimits

0x8913,	// (0x00039079) main_image_pane_t2

0x8925,	// (0x0003908b) main_image_pane_t3_ParamLimits

0x8925,	// (0x0003908b) main_image_pane_t3

0x8937,	// (0x0003909d) main_image_pane_t4_ParamLimits

0x8937,	// (0x0003909d) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003fc54) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003fc54) main_image_pane_t

0x8949,	// (0x000390af) popup_image_details_window_cp01

0x8951,	// (0x000390b7) popup_toobar_trans_pane_cp01_ParamLimits

0x8951,	// (0x000390b7) popup_toobar_trans_pane_cp01

0x8e5f,	// (0x000395c5) popup_image_details_window_ParamLimits

0x8e5f,	// (0x000395c5) popup_image_details_window

0x8e6b,	// (0x000395d1) popup_image_focus_window

0x915f,	// (0x000398c5) camera2_autofocus_pane_ParamLimits

0x915f,	// (0x000398c5) camera2_autofocus_pane

0xd3fa,	// (0x0003db60) bg_popup_sub_pane_cp06

0x14d5,	// (0x00031c3b) popup_image_focus_window_g1

0x14dd,	// (0x00031c43) popup_image_focus_window_g2

0x14e5,	// (0x00031c4b) popup_image_focus_window_g3

0x14ed,	// (0x00031c53) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0003fe76) popup_image_focus_window_g

0x14f5,	// (0x00031c5b) popup_image_focus_window_t1

0x1503,	// (0x00031c69) popup_image_focus_window_t2

0x1512,	// (0x00031c78) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0003fe7f) popup_image_focus_window_t

0x1520,	// (0x00031c86) camera2_autofocus_pane_g1

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp01

0x152e,	// (0x00031c94) popup_image_details_window_g1

0x1541,	// (0x00031ca7) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0003fe91) popup_image_details_window_g

0x156a,	// (0x00031cd0) popup_image_details_window_t1

0x157c,	// (0x00031ce2) popup_image_details_window_t2

0x1595,	// (0x00031cfb) popup_image_details_window_t3

0x15a9,	// (0x00031d0f) popup_image_details_window_t4

0x15c4,	// (0x00031d2a) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0003fe98) popup_image_details_window_t

0xdb61,	// (0x0003e2c7) bg_calc_paper_pane_ParamLimits

0xd3fa,	// (0x0003db60) grid_highlight_pane_cp013

0x67ea,	// (0x00036f50) list_calc_pane_ParamLimits

0x67fc,	// (0x00036f62) scroll_pane_cp024

0xdb75,	// (0x0003e2db) bg_calc_display_pane_ParamLimits

0x6804,	// (0x00036f6a) calc_display_pane_t1_ParamLimits

0x6819,	// (0x00036f7f) calc_display_pane_t2_ParamLimits

0x682e,	// (0x00036f94) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003f8b7) calc_display_pane_t_ParamLimits

0x68e3,	// (0x00037049) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003f8d4) cell_calc_pane_g

0x68ec,	// (0x00037052) cell_calc_pane_t1

0xdbd4,	// (0x0003e33a) grid_highlight_pane_cp02_ParamLimits

0xdbea,	// (0x0003e350) toolbar_button_pane_cp01_ParamLimits

0xdbea,	// (0x0003e350) toolbar_button_pane_cp01

0xe9f5,	// (0x0003f15b) temp_image_control_pane_ParamLimits

0xe9f5,	// (0x0003f15b) temp_image_control_pane

0xf0b0,	// (0x0003f816) main_mp3_pane

0x15de,	// (0x00031d44) temp_image_control_pane_g1_ParamLimits

0x15de,	// (0x00031d44) temp_image_control_pane_g1

0x15ec,	// (0x00031d52) temp_image_control_pane_g2_ParamLimits

0x15ec,	// (0x00031d52) temp_image_control_pane_g2

0x15fe,	// (0x00031d64) temp_image_control_pane_g3_ParamLimits

0x15fe,	// (0x00031d64) temp_image_control_pane_g3

0x9782,	// (0x00039ee8) temp_image_control_pane_g4_ParamLimits

0x9782,	// (0x00039ee8) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0003fea3) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0003fea3) temp_image_control_pane_g

0x15de,	// (0x00031d44) main_mp3_pane_g1

0x9793,	// (0x00039ef9) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0003feac) main_mp3_pane_g

0x1641,	// (0x00031da7) main_mp3_pane_t1

0xdd2e,	// (0x0003e494) main_camera_pane_g8_ParamLimits

0xdd2e,	// (0x0003e494) main_camera_pane_g8

0x72cc,	// (0x00037a32) main_video_pane_g7_ParamLimits

0x72cc,	// (0x00037a32) main_video_pane_g7

0x928e,	// (0x000399f4) main_camera2_pane_t7_ParamLimits

0x928e,	// (0x000399f4) main_camera2_pane_t7

0xde83,	// (0x0003e5e9) scroll_pane_cp025_ParamLimits

0xde83,	// (0x0003e5e9) scroll_pane_cp025

0xde97,	// (0x0003e5fd) scroll_pane_cp026_ParamLimits

0xde97,	// (0x0003e5fd) scroll_pane_cp026

0xdea6,	// (0x0003e60c) wml_content_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_touch_calib_pane

0x982b,	// (0x00039f91) main_touch_calib_pane_g1

0x9837,	// (0x00039f9d) main_touch_calib_pane_g2

0x9843,	// (0x00039fa9) main_touch_calib_pane_g3

0x984f,	// (0x00039fb5) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0003feca) main_touch_calib_pane_g

0x985b,	// (0x00039fc1) main_touch_calib_pane_t1

0x9870,	// (0x00039fd6) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0003fed3) main_touch_calib_pane_t

0xe5ff,	// (0x0003ed65) mup_progress_pane_cp02

0xe634,	// (0x0003ed9a) navi_pane_g1

0xe6ed,	// (0x0003ee53) navi_pane_mp_t3

0xf0b0,	// (0x0003f816) main_mp3_pane_ParamLimits

0x8f2a,	// (0x00039690) navi_pane_ParamLimits

0x15de,	// (0x00031d44) main_mp3_pane_g1_ParamLimits

0x9793,	// (0x00039ef9) main_mp3_pane_g2_ParamLimits

0x979f,	// (0x00039f05) main_mp3_pane_g3_ParamLimits

0x979f,	// (0x00039f05) main_mp3_pane_g3

0x97ab,	// (0x00039f11) main_mp3_pane_g4_ParamLimits

0x97ab,	// (0x00039f11) main_mp3_pane_g4

0x160e,	// (0x00031d74) main_mp3_pane_g5_ParamLimits

0x160e,	// (0x00031d74) main_mp3_pane_g5

0x161c,	// (0x00031d82) main_mp3_pane_g6_ParamLimits

0x161c,	// (0x00031d82) main_mp3_pane_g6

0x1629,	// (0x00031d8f) main_mp3_pane_g7_ParamLimits

0x1629,	// (0x00031d8f) main_mp3_pane_g7

0x1635,	// (0x00031d9b) main_mp3_pane_g8_ParamLimits

0x1635,	// (0x00031d9b) main_mp3_pane_g8

0xf746,	// (0x0003feac) main_mp3_pane_g_ParamLimits

0x97b7,	// (0x00039f1d) main_mp3_pane_t2

0x97c5,	// (0x00039f2b) main_mp3_pane_t3

0x164f,	// (0x00031db5) main_mp3_pane_t4

0x165d,	// (0x00031dc3) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0003febd) main_mp3_pane_t

0x166b,	// (0x00031dd1) mup_progress_pane_cp01

0x4f88,	// (0x000356ee) aid_zoom_text_secondary2

0x1462,	// (0x00031bc8) list_cale_ev2_pane

0x146a,	// (0x00031bd0) scroll_pane_cp023_ParamLimits

0x98bb,	// (0x0003a021) field_cale_ev2_pane_ParamLimits

0x98bb,	// (0x0003a021) field_cale_ev2_pane

0x5279,	// (0x000359df) field_cale_ev2_pane_g1_ParamLimits

0x5279,	// (0x000359df) field_cale_ev2_pane_g1

0x5285,	// (0x000359eb) field_cale_ev2_pane_g2_ParamLimits

0x5285,	// (0x000359eb) field_cale_ev2_pane_g2

0x529d,	// (0x00035a03) field_cale_ev2_pane_g3_ParamLimits

0x529d,	// (0x00035a03) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0003fede) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0003fede) field_cale_ev2_pane_g

0x52c1,	// (0x00035a27) field_cale_ev2_pane_t1_ParamLimits

0x52c1,	// (0x00035a27) field_cale_ev2_pane_t1

0x52d8,	// (0x00035a3e) field_cale_ev2_pane_t2_ParamLimits

0x52d8,	// (0x00035a3e) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0003fee7) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0003fee7) field_cale_ev2_pane_t

0x87f8,	// (0x00038f5e) main_postcard_pane_g5_ParamLimits

0x87f8,	// (0x00038f5e) main_postcard_pane_g5

0x8804,	// (0x00038f6a) main_postcard_pane_g6_ParamLimits

0x8804,	// (0x00038f6a) main_postcard_pane_g6

0x7121,	// (0x00037887) camera2_autofocus_pane_cp_ParamLimits

0x7121,	// (0x00037887) camera2_autofocus_pane_cp

0xf0b0,	// (0x0003f816) main_mup3_pane

0x98f0,	// (0x0003a056) main_mup3_pane_g1_ParamLimits

0x98f0,	// (0x0003a056) main_mup3_pane_g1

0x9911,	// (0x0003a077) main_mup3_pane_g2_ParamLimits

0x9911,	// (0x0003a077) main_mup3_pane_g2

0x997e,	// (0x0003a0e4) main_mup3_pane_g3_ParamLimits

0x997e,	// (0x0003a0e4) main_mup3_pane_g3

0x99b9,	// (0x0003a11f) main_mup3_pane_g4_ParamLimits

0x99b9,	// (0x0003a11f) main_mup3_pane_g4

0x99f4,	// (0x0003a15a) main_mup3_pane_g5_ParamLimits

0x99f4,	// (0x0003a15a) main_mup3_pane_g5

0x9a2f,	// (0x0003a195) main_mup3_pane_g6_ParamLimits

0x9a2f,	// (0x0003a195) main_mup3_pane_g6

0x167f,	// (0x00031de5) main_mup3_pane_g7_ParamLimits

0x167f,	// (0x00031de5) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0003fef7) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0003fef7) main_mup3_pane_g

0x9a9b,	// (0x0003a201) main_mup3_pane_t1_ParamLimits

0x9a9b,	// (0x0003a201) main_mup3_pane_t1

0x9afc,	// (0x0003a262) main_mup3_pane_t2_ParamLimits

0x9afc,	// (0x0003a262) main_mup3_pane_t2

0x9bb7,	// (0x0003a31d) main_mup3_pane_t4_ParamLimits

0x9bb7,	// (0x0003a31d) main_mup3_pane_t4

0x9bfd,	// (0x0003a363) main_mup3_pane_t5_ParamLimits

0x9bfd,	// (0x0003a363) main_mup3_pane_t5

0x9ca1,	// (0x0003a407) main_mup3_pane_t6_ParamLimits

0x9ca1,	// (0x0003a407) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0003ff08) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0003ff08) main_mup3_pane_t

0x9d49,	// (0x0003a4af) mup3_progress_pane_ParamLimits

0x9d49,	// (0x0003a4af) mup3_progress_pane

0x9dad,	// (0x0003a513) popup_mup3_control_window_ParamLimits

0x9dad,	// (0x0003a513) popup_mup3_control_window

0x168d,	// (0x00031df3) popup_mup3_text_window

0x9dc6,	// (0x0003a52c) mup3_progress_pane_t1

0x9de4,	// (0x0003a54a) mup3_progress_pane_t2

0x1695,	// (0x00031dfb) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0003ff15) mup3_progress_pane_t

0x16b2,	// (0x00031e18) mup_progress_pane_cp03

0xd3fa,	// (0x0003db60) bg_tb_trans_pane_cp04

0x9e02,	// (0x0003a568) mup3_volume_pane

0x9e0a,	// (0x0003a570) popup_mup3_control_window_g1

0x9e13,	// (0x0003a579) mup3_volume_pane_g1

0x9e1c,	// (0x0003a582) mup3_volume_pane_g2

0x9e25,	// (0x0003a58b) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0003ff1c) mup3_volume_pane_g

0xd3fa,	// (0x0003db60) bg_tb_trans_pane_cp03

0x16dd,	// (0x00031e43) popup_mup3_text_window_g1

0x16e5,	// (0x00031e4b) popup_mup3_text_window_t1

0xdbbd,	// (0x0003e323) list_calc_item_pane_g1_ParamLimits

0x10f6,	// (0x0003185c) mup_volume_pane_cp_g1

0x9885,	// (0x00039feb) main_touch_calib_pane_t3

0x9897,	// (0x00039ffd) main_touch_calib_pane_t4

0x98a9,	// (0x0003a00f) main_touch_calib_pane_t5

0x629d,	// (0x00036a03) aid_cell_size_toolbar2

0x62a5,	// (0x00036a0b) aid_popup3_width_pane

0x4f80,	// (0x000356e6) aid_zoom_text_msg_primary

0x70f6,	// (0x0003785c) vorec_t7

0xdb81,	// (0x0003e2e7) bg_calc_paper_pane_g1_ParamLimits

0xdb8d,	// (0x0003e2f3) bg_calc_paper_pane_g2_ParamLimits

0xdb99,	// (0x0003e2ff) bg_calc_paper_pane_g3_ParamLimits

0xdba5,	// (0x0003e30b) bg_calc_paper_pane_g4_ParamLimits

0xdbb1,	// (0x0003e317) bg_calc_paper_pane_g5_ParamLimits

0x6867,	// (0x00036fcd) bg_calc_paper_pane_g6_ParamLimits

0x6876,	// (0x00036fdc) bg_calc_paper_pane_g7_ParamLimits

0x6885,	// (0x00036feb) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003f8be) bg_calc_paper_pane_g_ParamLimits

0x6894,	// (0x00036ffa) calc_bg_paper_pane_g9_ParamLimits

0x7201,	// (0x00037967) image_qvga_pane_ParamLimits

0x7201,	// (0x00037967) image_qvga_pane

0xdaa4,	// (0x0003e20a) bg_popup_sub_pane_cp04_ParamLimits

0xe92c,	// (0x0003f092) popup_mup_playback_window_g1_ParamLimits

0xe938,	// (0x0003f09e) popup_mup_playback_window_t1_ParamLimits

0xe94d,	// (0x0003f0b3) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003fc48) popup_mup_playback_window_t_ParamLimits

0x93b5,	// (0x00039b1b) main_mup2_pane_g3_ParamLimits

0x93b5,	// (0x00039b1b) main_mup2_pane_g3

0x7491,	// (0x00037bf7) popup_toolbar_window_cp04

0xed0a,	// (0x0003f470) popup_call2_audio_second_window_g3_ParamLimits

0xed0a,	// (0x0003f470) popup_call2_audio_second_window_g3

0x04b1,	// (0x00030c17) popup_call2_audio_first_window_g4_ParamLimits

0x04b1,	// (0x00030c17) popup_call2_audio_first_window_g4

0x0b30,	// (0x00031296) popup_call2_audio_in_window_g4_ParamLimits

0x0b30,	// (0x00031296) popup_call2_audio_in_window_g4

0x88ee,	// (0x00039054) aid_area_sk_bg_cut_ParamLimits

0x88ee,	// (0x00039054) aid_area_sk_bg_cut

0xe962,	// (0x0003f0c8) aid_area_sk_bg_cut_2_ParamLimits

0xe962,	// (0x0003f0c8) aid_area_sk_bg_cut_2

0x96f5,	// (0x00039e5b) aid_placing_details_win

0x96fd,	// (0x00039e63) aid_placing_details_win_2

0x1520,	// (0x00031c86) camera2_autofocus_pane_g1_ParamLimits

0x64ca,	// (0x00036c30) popup_fixed_preview_cale_window_ParamLimits

0x64ca,	// (0x00036c30) popup_fixed_preview_cale_window

0xe76b,	// (0x0003eed1) navi_slider_pane_g3

0xe774,	// (0x0003eeda) navi_slider_pane_g4

0xe77d,	// (0x0003eee3) navi_slider_pane_g5

0xe76b,	// (0x0003eed1) navi_slider_pane_g6

0x82c2,	// (0x00038a28) navi_slider_pane_g7

0xe863,	// (0x0003efc9) mup_scale_pane_g3

0xe86c,	// (0x0003efd2) mup_scale_pane_g4

0xe875,	// (0x0003efdb) mup_scale_pane_g5

0x86b2,	// (0x00038e18) mup_scale_pane_g6

0x86bb,	// (0x00038e21) mup_scale_pane_g7

0xe76b,	// (0x0003eed1) cams2_slider_pane_g3

0x11ab,	// (0x00031911) cams2_slider_pane_g4

0x9665,	// (0x00039dcb) cams2_slider_pane_g5

0xe76b,	// (0x0003eed1) cams2_slider_pane_g6

0x966d,	// (0x00039dd3) cams2_slider_pane_g7

0x13df,	// (0x00031b45) camera2_autofocus_pane_cp_g1

0x0ed1,	// (0x00031637) bg_popup_preview_window_pane_cp02_ParamLimits

0x0ed1,	// (0x00031637) bg_popup_preview_window_pane_cp02

0x16f3,	// (0x00031e59) list_fp_cale_pane_ParamLimits

0x16f3,	// (0x00031e59) list_fp_cale_pane

0x16ff,	// (0x00031e65) popup_fixed_preview_cale_window_t1_ParamLimits

0x16ff,	// (0x00031e65) popup_fixed_preview_cale_window_t1

0x9e2e,	// (0x0003a594) popup_fixed_preview_cale_window_t2_ParamLimits

0x9e2e,	// (0x0003a594) popup_fixed_preview_cale_window_t2

0x9e43,	// (0x0003a5a9) popup_fixed_preview_cale_window_t3_ParamLimits

0x9e43,	// (0x0003a5a9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0003ff23) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0003ff23) popup_fixed_preview_cale_window_t

0x9e58,	// (0x0003a5be) list_single_fp_cale_pane_ParamLimits

0x9e58,	// (0x0003a5be) list_single_fp_cale_pane

0x171d,	// (0x00031e83) list_single_fp_cale_pane_g1_ParamLimits

0x171d,	// (0x00031e83) list_single_fp_cale_pane_g1

0x1729,	// (0x00031e8f) list_single_fp_cale_pane_g2_ParamLimits

0x1729,	// (0x00031e8f) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0003ff2a) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0003ff2a) list_single_fp_cale_pane_g

0x1742,	// (0x00031ea8) list_single_fp_cale_pane_t1_ParamLimits

0x1742,	// (0x00031ea8) list_single_fp_cale_pane_t1

0x1754,	// (0x00031eba) list_single_fp_cale_pane_t2_ParamLimits

0x1754,	// (0x00031eba) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0003ff31) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0003ff31) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd3fa,	// (0x0003db60) main_dialer_pane

0x9e65,	// (0x0003a5cb) aid_cell_size_keypad

0x9e6f,	// (0x0003a5d5) dialer_ne_pane

0x9e77,	// (0x0003a5dd) grid_dialer_command_1_pane

0x9e7f,	// (0x0003a5e5) grid_dialer_command_2_pane

0x9e87,	// (0x0003a5ed) grid_dialer_keypad_pane

0x9e97,	// (0x0003a5fd) bg_popup_call_pane_cp06_ParamLimits

0x9e97,	// (0x0003a5fd) bg_popup_call_pane_cp06

0x9ea3,	// (0x0003a609) dialer_ne_clear_pane_ParamLimits

0x9ea3,	// (0x0003a609) dialer_ne_clear_pane

0x1787,	// (0x00031eed) dialer_ne_pane_g1

0x178f,	// (0x00031ef5) dialer_ne_pane_t1_ParamLimits

0x178f,	// (0x00031ef5) dialer_ne_pane_t1

0x9eaf,	// (0x0003a615) dialer_ne_pane_t2_ParamLimits

0x9eaf,	// (0x0003a615) dialer_ne_pane_t2

0x9ecc,	// (0x0003a632) dialer_ne_pane_t3_ParamLimits

0x9ecc,	// (0x0003a632) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0003ff36) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0003ff36) dialer_ne_pane_t

0x9ef0,	// (0x0003a656) dialer_ne_pane_t3_copy1_ParamLimits

0x9ef0,	// (0x0003a656) dialer_ne_pane_t3_copy1

0x9f14,	// (0x0003a67a) cell_dialer_keypad_pane_ParamLimits

0x9f14,	// (0x0003a67a) cell_dialer_keypad_pane

0x9f29,	// (0x0003a68f) cell_dialer_command_1_pane_ParamLimits

0x9f29,	// (0x0003a68f) cell_dialer_command_1_pane

0x9f3f,	// (0x0003a6a5) cell_dialer_command_2_pane_ParamLimits

0x9f3f,	// (0x0003a6a5) cell_dialer_command_2_pane

0x17a1,	// (0x00031f07) bg_button_pane_cp02_ParamLimits

0x17a1,	// (0x00031f07) bg_button_pane_cp02

0x9f4e,	// (0x0003a6b4) cell_dialer_keypad_pane_g1_ParamLimits

0x9f4e,	// (0x0003a6b4) cell_dialer_keypad_pane_g1

0x17a1,	// (0x00031f07) bg_button_pane_cp03_ParamLimits

0x17a1,	// (0x00031f07) bg_button_pane_cp03

0x9f63,	// (0x0003a6c9) cell_dialer_command_1_pane_g1_ParamLimits

0x9f63,	// (0x0003a6c9) cell_dialer_command_1_pane_g1

0x17ad,	// (0x00031f13) bg_button_pane_cp04

0x9f76,	// (0x0003a6dc) cell_dialer_command_2_pane_g1

0xdd26,	// (0x0003e48c) bg_button_pane_cp06

0x17b5,	// (0x00031f1b) dialer_ne_clear_pane_g1

0xe640,	// (0x0003eda6) navi_pane_g2

0xe66e,	// (0x0003edd4) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003fb4b) navi_pane_g

0xe6fb,	// (0x0003ee61) navi_pane_mv_g2

0xe722,	// (0x0003ee88) navi_pane_mv_g5

0x828d,	// (0x000389f3) navi_pane_mv_t1

0xdb75,	// (0x0003e2db) main_clock2_pane

0x9fb2,	// (0x0003a718) main_clock2_list_pane_ParamLimits

0x9fb2,	// (0x0003a718) main_clock2_list_pane

0x9fd8,	// (0x0003a73e) main_clock2_pane_t1_ParamLimits

0x9fd8,	// (0x0003a73e) main_clock2_pane_t1

0x9ff8,	// (0x0003a75e) main_clock2_pane_t2_ParamLimits

0x9ff8,	// (0x0003a75e) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0003ff42) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0003ff42) main_clock2_pane_t

0xa051,	// (0x0003a7b7) popup_clock_analogue_window_cp03_ParamLimits

0xa051,	// (0x0003a7b7) popup_clock_analogue_window_cp03

0xa06e,	// (0x0003a7d4) popup_clock_digital_window_cp02_ParamLimits

0xa06e,	// (0x0003a7d4) popup_clock_digital_window_cp02

0xa0db,	// (0x0003a841) main_clock2_list_single_pane_ParamLimits

0xa0db,	// (0x0003a841) main_clock2_list_single_pane

0xdd26,	// (0x0003e48c) list_highlight_pane_cp05

0x17ed,	// (0x00031f53) main_clock2_list_single_pane_t1

0x7491,	// (0x00037bf7) popup_toolbar_window_cp04_ParamLimits

0x9752,	// (0x00039eb8) camera2_autofocus_pane_g2_ParamLimits

0x9752,	// (0x00039eb8) camera2_autofocus_pane_g2

0x975e,	// (0x00039ec4) camera2_autofocus_pane_g3_ParamLimits

0x975e,	// (0x00039ec4) camera2_autofocus_pane_g3

0x976a,	// (0x00039ed0) camera2_autofocus_pane_g4_ParamLimits

0x976a,	// (0x00039ed0) camera2_autofocus_pane_g4

0x9776,	// (0x00039edc) camera2_autofocus_pane_g5_ParamLimits

0x9776,	// (0x00039edc) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0003fe86) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0003fe86) camera2_autofocus_pane_g

0x98d0,	// (0x0003a036) camera2_autofocus_pane_cp_g2

0x98d8,	// (0x0003a03e) camera2_autofocus_pane_cp_g3

0x98e0,	// (0x0003a046) camera2_autofocus_pane_cp_g4

0x98e8,	// (0x0003a04e) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0003feec) camera2_autofocus_pane_cp_g

0x9e8f,	// (0x0003a5f5) popup_dialer_spcha_window

0xd3fa,	// (0x0003db60) bg_popup_sub_pane_cp07

0x17fb,	// (0x00031f61) list_spcha_pane

0x1803,	// (0x00031f69) list_single_spcha_pane_ParamLimits

0x1803,	// (0x00031f69) list_single_spcha_pane

0xd3fa,	// (0x0003db60) list_highlight_pane_cp06

0x1814,	// (0x00031f7a) list_single_spcha_pane_t1

0x08da,	// (0x00031040) popup_call2_audio_out_window_g4_ParamLimits

0x08da,	// (0x00031040) popup_call2_audio_out_window_g4

0xd3fa,	// (0x0003db60) main_imed2_pane

0x8e73,	// (0x000395d9) popup_imed_adjust2_window

0x8e84,	// (0x000395ea) popup_imed_trans_window_ParamLimits

0x8e84,	// (0x000395ea) popup_imed_trans_window

0x1223,	// (0x00031989) popup_blid_sat_info2_window_t1

0x1231,	// (0x00031997) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0003fe1b) popup_blid_sat_info2_window_t

0xa185,	// (0x0003a8eb) aid_size_cell_colour_35

0xa19f,	// (0x0003a905) aid_size_cell_colour_112

0xa1b6,	// (0x0003a91c) aid_size_cell_effect

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp02

0xf0be,	// (0x0003f824) heading_imed_pane

0xa1d0,	// (0x0003a936) listscroll_imed_pane

0x1822,	// (0x00031f88) heading_imed_pane_g1

0x182a,	// (0x00031f90) heading_imed_pane_t1

0x1838,	// (0x00031f9e) grid_imed_colour_35_pane_ParamLimits

0x1838,	// (0x00031f9e) grid_imed_colour_35_pane

0xa1dc,	// (0x0003a942) grid_imed_effect_pane

0x184b,	// (0x00031fb1) list_imed_aspect_pane

0xa1e8,	// (0x0003a94e) scroll_pane_cp027_ParamLimits

0xa1e8,	// (0x0003a94e) scroll_pane_cp027

0xa1f4,	// (0x0003a95a) cell_imed_effect_pane_ParamLimits

0xa1f4,	// (0x0003a95a) cell_imed_effect_pane

0x1853,	// (0x00031fb9) cell_imed_colour_pane_ParamLimits

0x1853,	// (0x00031fb9) cell_imed_colour_pane

0x188d,	// (0x00031ff3) cell_imed_colour_pane_g1_ParamLimits

0x188d,	// (0x00031ff3) cell_imed_colour_pane_g1

0x189e,	// (0x00032004) hgihlgiht_grid_pane_cp016_ParamLimits

0x189e,	// (0x00032004) hgihlgiht_grid_pane_cp016

0xa20a,	// (0x0003a970) cell_imed_effect_pane_g1

0xa212,	// (0x0003a978) grid_highlight_pane_cp017

0x18ae,	// (0x00032014) list_imed_single_pane_ParamLimits

0x18ae,	// (0x00032014) list_imed_single_pane

0xd3fa,	// (0x0003db60) list_highlight_pane_cp07

0x18c1,	// (0x00032027) list_imed_aspect_pane_comp1_t1

0x0edd,	// (0x00031643) bg_tb_trans_pane_cp05

0x18e1,	// (0x00032047) popup_imed_adjust2_window_g1

0x1908,	// (0x0003206e) popup_imed_adjust2_window_t1

0x1920,	// (0x00032086) slider_imed_adjust_pane

0x1934,	// (0x0003209a) slider_imed_adjust_pane_g1

0x1944,	// (0x000320aa) slider_imed_adjust_pane_g2

0x1954,	// (0x000320ba) slider_imed_adjust_pane_g3

0x1965,	// (0x000320cb) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0003ff5f) slider_imed_adjust_pane_g

0xa21b,	// (0x0003a981) aid_size_cell_clipart2

0xa227,	// (0x0003a98d) grid_imed_clipart_pane

0x1976,	// (0x000320dc) scroll_pane_cp031

0xa231,	// (0x0003a997) cell_imed_clipart_pane_ParamLimits

0xa231,	// (0x0003a997) cell_imed_clipart_pane

0xa245,	// (0x0003a9ab) cell_imed_clipart_pane_g1

0xd3fa,	// (0x0003db60) grid_highlight_pane_cp014

0x9fbe,	// (0x0003a724) main_clock2_pane_g1_ParamLimits

0x9fbe,	// (0x0003a724) main_clock2_pane_g1

0xa086,	// (0x0003a7ec) aid_call2_pane_cp10

0xa098,	// (0x0003a7fe) aid_call_pane_cp10

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g1

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g2

0xa0aa,	// (0x0003a810) popup_clock_analogue_window_cp10_g3

0xa0aa,	// (0x0003a810) popup_clock_analogue_window_cp10_g4

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0003ff4d) popup_clock_analogue_window_cp10_g

0xa0bc,	// (0x0003a822) popup_clock_analogue_window_cp10_t1

0xa0ed,	// (0x0003a853) clock_digital_number_pane_cp10_ParamLimits

0xa0ed,	// (0x0003a853) clock_digital_number_pane_cp10

0xa105,	// (0x0003a86b) clock_digital_number_pane_cp11_ParamLimits

0xa105,	// (0x0003a86b) clock_digital_number_pane_cp11

0xa11d,	// (0x0003a883) clock_digital_number_pane_cp12_ParamLimits

0xa11d,	// (0x0003a883) clock_digital_number_pane_cp12

0xa135,	// (0x0003a89b) clock_digital_number_pane_cp13_ParamLimits

0xa135,	// (0x0003a89b) clock_digital_number_pane_cp13

0xa14d,	// (0x0003a8b3) clock_digital_separator_pane_cp10_ParamLimits

0xa14d,	// (0x0003a8b3) clock_digital_separator_pane_cp10

0xa165,	// (0x0003a8cb) popup_clock_digital_window_cp02_t1_ParamLimits

0xa165,	// (0x0003a8cb) popup_clock_digital_window_cp02_t1

0xda9c,	// (0x0003e202) clock_digital_number_pane_cp10_g1

0xda9c,	// (0x0003e202) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0003ff68) clock_digital_number_pane_cp10_g

0xda9c,	// (0x0003e202) clock_digital_separator_pane_cp10_g1

0xda9c,	// (0x0003e202) clock_digital_separator_pane_g2_cp10

0xe72a,	// (0x0003ee90) navi_pane_vded_g4

0xe733,	// (0x0003ee99) navi_pane_vded_g5

0xe73c,	// (0x0003eea2) navi_pane_vded_t1

0xd3fa,	// (0x0003db60) main_vded_pane

0xa24e,	// (0x0003a9b4) main_vded_pane_g1

0xa256,	// (0x0003a9bc) main_vded_pane_g2

0xa25e,	// (0x0003a9c4) main_vded_pane_g3

0x0002,

0xf807,	// (0x0003ff6d) main_vded_pane_g

0xa266,	// (0x0003a9cc) main_vded_pane_t1

0xa274,	// (0x0003a9da) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0003ff74) main_vded_pane_t

0xa282,	// (0x0003a9e8) vded_slider_pane

0xa28a,	// (0x0003a9f0) vded_video_pane

0x197e,	// (0x000320e4) vded_video_pane_g1

0xa292,	// (0x0003a9f8) vded_video_pane_g2

0x13df,	// (0x00031b45) vded_video_pane_g3

0x0002,

0xf813,	// (0x0003ff79) vded_video_pane_g

0x1988,	// (0x000320ee) vded_slider_pane_g1

0x10f6,	// (0x0003185c) vded_slider_pane_g2

0x1991,	// (0x000320f7) vded_slider_pane_g3

0x199a,	// (0x00032100) vded_slider_pane_g4

0x19a3,	// (0x00032109) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0003ff80) vded_slider_pane_g

0x9da1,	// (0x0003a507) mup3_rocker_pane_ParamLimits

0x9da1,	// (0x0003a507) mup3_rocker_pane

0xa29b,	// (0x0003aa01) mup3_control_keys_pane_g1

0xa2a3,	// (0x0003aa09) mup3_control_keys_pane_g2

0xa2ab,	// (0x0003aa11) mup3_control_keys_pane_g3

0xa2b3,	// (0x0003aa19) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0003ff8b) mup3_control_keys_pane_g

0x64f0,	// (0x00036c56) popup_toolbar2_fixed_window_cp01_ParamLimits

0x64f0,	// (0x00036c56) popup_toolbar2_fixed_window_cp01

0x9db9,	// (0x0003a51f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9db9,	// (0x0003a51f) popup_toolbar2_fixed_window_cp02

0xee7c,	// (0x0003f5e2) popup_call2_audio_second_window_t4_ParamLimits

0xee7c,	// (0x0003f5e2) popup_call2_audio_second_window_t4

0x0747,	// (0x00030ead) popup_call2_audio_first_window_t6_ParamLimits

0x0747,	// (0x00030ead) popup_call2_audio_first_window_t6

0x09dd,	// (0x00031143) popup_call2_audio_out_window_t6_ParamLimits

0x09dd,	// (0x00031143) popup_call2_audio_out_window_t6

0xd3fa,	// (0x0003db60) main_vitu_pane

0xa2c3,	// (0x0003aa29) aid_size_cell_itu_ParamLimits

0xa2c3,	// (0x0003aa29) aid_size_cell_itu

0x4091,	// (0x000347f7) bg_popup_window_pane_cp08_ParamLimits

0x4091,	// (0x000347f7) bg_popup_window_pane_cp08

0xa2d1,	// (0x0003aa37) field_vitu_entry_pane_ParamLimits

0xa2d1,	// (0x0003aa37) field_vitu_entry_pane

0xa2de,	// (0x0003aa44) grid_vitu_function_pane_ParamLimits

0xa2de,	// (0x0003aa44) grid_vitu_function_pane

0xa2ea,	// (0x0003aa50) grid_vitu_itu_pane_ParamLimits

0xa2ea,	// (0x0003aa50) grid_vitu_itu_pane

0xa2f6,	// (0x0003aa5c) cell_vitu_itu_pane_ParamLimits

0xa2f6,	// (0x0003aa5c) cell_vitu_itu_pane

0xa30b,	// (0x0003aa71) cell_vitu_function_pane_ParamLimits

0xa30b,	// (0x0003aa71) cell_vitu_function_pane

0xf0b0,	// (0x0003f816) bg_popup_sub_pane_cp08_ParamLimits

0xf0b0,	// (0x0003f816) bg_popup_sub_pane_cp08

0xa31d,	// (0x0003aa83) field_vitu_entry_pane_t1_ParamLimits

0xa31d,	// (0x0003aa83) field_vitu_entry_pane_t1

0x19c4,	// (0x0003212a) field_vitu_entry_pane_t2_ParamLimits

0x19c4,	// (0x0003212a) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0003ff99) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0003ff99) field_vitu_entry_pane_t

0x19e1,	// (0x00032147) bg_button_pane_cp05_ParamLimits

0x19e1,	// (0x00032147) bg_button_pane_cp05

0xa336,	// (0x0003aa9c) cell_vitu_itu_pane_g1

0xa34e,	// (0x0003aab4) cell_vitu_itu_pane_t1_ParamLimits

0xa34e,	// (0x0003aab4) cell_vitu_itu_pane_t1

0xa360,	// (0x0003aac6) cell_vitu_itu_pane_t2_ParamLimits

0xa360,	// (0x0003aac6) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0003ff9e) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0003ff9e) cell_vitu_itu_pane_t

0x19ef,	// (0x00032155) bg_button_pane_cp07

0xa395,	// (0x0003aafb) cell_vitu_function_pane_g1

0x671d,	// (0x00036e83) main_calc_pane_g1

0x62d5,	// (0x00036a3b) aid_visual_content_pane

0xd3fa,	// (0x0003db60) main_vradio_pane

0xa39e,	// (0x0003ab04) main_vradio_pane_g1_ParamLimits

0xa39e,	// (0x0003ab04) main_vradio_pane_g1

0x19f9,	// (0x0003215f) main_vradio_pane_g2_ParamLimits

0x19f9,	// (0x0003215f) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0003ffa5) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0003ffa5) main_vradio_pane_g

0xa3ac,	// (0x0003ab12) main_vradio_pane_t1_ParamLimits

0xa3ac,	// (0x0003ab12) main_vradio_pane_t1

0xa3be,	// (0x0003ab24) main_vradio_pane_t2_ParamLimits

0xa3be,	// (0x0003ab24) main_vradio_pane_t2

0x1a06,	// (0x0003216c) main_vradio_pane_t3_ParamLimits

0x1a06,	// (0x0003216c) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0003ffaa) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0003ffaa) main_vradio_pane_t

0xa3d0,	// (0x0003ab36) vradio_rocker_control_pane_ParamLimits

0xa3d0,	// (0x0003ab36) vradio_rocker_control_pane

0xa3dc,	// (0x0003ab42) vradio_station_info_pane_ParamLimits

0xa3dc,	// (0x0003ab42) vradio_station_info_pane

0x1a18,	// (0x0003217e) vradio_frequency_info_pane_ParamLimits

0x1a18,	// (0x0003217e) vradio_frequency_info_pane

0x13df,	// (0x00031b45) vradio_station_info_pane_g1

0x1a27,	// (0x0003218d) vradio_station_info_pane_t1_ParamLimits

0x1a27,	// (0x0003218d) vradio_station_info_pane_t1

0x1a49,	// (0x000321af) vradio_station_info_pane_t2_ParamLimits

0x1a49,	// (0x000321af) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0003ffb1) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0003ffb1) vradio_station_info_pane_t

0x1a5b,	// (0x000321c1) vradio_tuning_pane

0x1a63,	// (0x000321c9) vradio_rocker_control_pane_g1

0x1a6b,	// (0x000321d1) vradio_rocker_control_pane_g2

0x1a73,	// (0x000321d9) vradio_rocker_control_pane_g3

0x1a7b,	// (0x000321e1) vradio_rocker_control_pane_g4

0x1a83,	// (0x000321e9) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0003ffb6) vradio_rocker_control_pane_g

0xa3e9,	// (0x0003ab4f) vradio_frequency_info_pane_g1

0x1a8b,	// (0x000321f1) vradio_frequency_info_pane_t1_ParamLimits

0x1a8b,	// (0x000321f1) vradio_frequency_info_pane_t1

0xa3f1,	// (0x0003ab57) vradio_tuning_pane_g1

0xa3fa,	// (0x0003ab60) vradio_tuning_pane_t1

0x6312,	// (0x00036a78) area_side_right_pane_ParamLimits

0x6312,	// (0x00036a78) area_side_right_pane

0x0e98,	// (0x000315fe) status_small_pane_g1

0x0ea0,	// (0x00031606) status_small_pane_g2

0x0ea9,	// (0x0003160f) status_small_pane_g3

0x0eb2,	// (0x00031618) status_small_pane_g4

0x0003,

0xf60b,	// (0x0003fd71) status_small_pane_g

0x0ebb,	// (0x00031621) status_small_pane_t1

0xd3fa,	// (0x0003db60) main_video3_pane

0x1a9f,	// (0x00032205) cams_zoom_vslider_pane

0x1aa7,	// (0x0003220d) image3_wide_pane_ParamLimits

0x1aa7,	// (0x0003220d) image3_wide_pane

0x1ac1,	// (0x00032227) image3_wide_small_pane

0x1acb,	// (0x00032231) main_video3_pane_g1_ParamLimits

0x1acb,	// (0x00032231) main_video3_pane_g1

0x1ae7,	// (0x0003224d) main_video3_pane_g2_ParamLimits

0x1ae7,	// (0x0003224d) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0003ffc1) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0003ffc1) main_video3_pane_g

0x1b03,	// (0x00032269) main_video3_pane_t1_ParamLimits

0x1b03,	// (0x00032269) main_video3_pane_t1

0x1b2e,	// (0x00032294) main_video3_pane_t2_ParamLimits

0x1b2e,	// (0x00032294) main_video3_pane_t2

0x1b59,	// (0x000322bf) main_video3_pane_t3_ParamLimits

0x1b59,	// (0x000322bf) main_video3_pane_t3

0x0002,

0xf860,	// (0x0003ffc6) main_video3_pane_t_ParamLimits

0xf860,	// (0x0003ffc6) main_video3_pane_t

0x1b84,	// (0x000322ea) cams_zoom_vslider_pane_g1

0x1b8d,	// (0x000322f3) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0003ffcd) cams_zoom_vslider_pane_g

0x1b95,	// (0x000322fb) small_slider_vertical_pane

0x13df,	// (0x00031b45) small_slider_vertical_pane_g1

0x13df,	// (0x00031b45) small_slider_vertical_pane_g2

0x1b9d,	// (0x00032303) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0003ffd2) small_slider_vertical_pane_g

0xd3fa,	// (0x0003db60) main_hwr_training_pane

0x1ba6,	// (0x0003230c) hwr_training_instruct_pane_ParamLimits

0x1ba6,	// (0x0003230c) hwr_training_instruct_pane

0xa409,	// (0x0003ab6f) hwr_training_navi_pane_ParamLimits

0xa409,	// (0x0003ab6f) hwr_training_navi_pane

0xa41d,	// (0x0003ab83) hwr_training_write_pane_ParamLimits

0xa41d,	// (0x0003ab83) hwr_training_write_pane

0xd3fa,	// (0x0003db60) bg_frame_shadow_pane

0x1bd5,	// (0x0003233b) hwr_training_write_pane_g1

0x1bdd,	// (0x00032343) hwr_training_write_pane_g2

0x1be5,	// (0x0003234b) hwr_training_write_pane_g3

0x1bed,	// (0x00032353) hwr_training_write_pane_g4

0x1bf5,	// (0x0003235b) hwr_training_write_pane_g5

0x1bfd,	// (0x00032363) hwr_training_write_pane_g6

0x1c05,	// (0x0003236b) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0003ffd9) hwr_training_write_pane_g

0xa44b,	// (0x0003abb1) hwr_training_navi_pane_g1_ParamLimits

0xa44b,	// (0x0003abb1) hwr_training_navi_pane_g1

0xa45d,	// (0x0003abc3) hwr_training_navi_pane_g2_ParamLimits

0xa45d,	// (0x0003abc3) hwr_training_navi_pane_g2

0xa46f,	// (0x0003abd5) hwr_training_navi_pane_g3_ParamLimits

0xa46f,	// (0x0003abd5) hwr_training_navi_pane_g3

0xa47f,	// (0x0003abe5) hwr_training_navi_pane_g4_ParamLimits

0xa47f,	// (0x0003abe5) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0003ffe8) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0003ffe8) hwr_training_navi_pane_g

0xa499,	// (0x0003abff) hwr_training_navi_pane_t1

0xa4a7,	// (0x0003ac0d) list_single_hwr_training_instruct_pane_ParamLimits

0xa4a7,	// (0x0003ac0d) list_single_hwr_training_instruct_pane

0x1c5c,	// (0x000323c2) list_single_hwr_training_instruct_pane_t1

0x131f,	// (0x00031a85) bg_frame_shadow_pane_g1

0x1c6b,	// (0x000323d1) bg_frame_shadow_pane_g2

0x1c73,	// (0x000323d9) bg_frame_shadow_pane_g3

0x1c7b,	// (0x000323e1) bg_frame_shadow_pane_g4

0x1c83,	// (0x000323e9) bg_frame_shadow_pane_g5

0x1c8b,	// (0x000323f1) bg_frame_shadow_pane_g6

0x1c93,	// (0x000323f9) bg_frame_shadow_pane_g7

0xdc40,	// (0x0003e3a6) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0003fff3) bg_frame_shadow_pane_g

0xd3fa,	// (0x0003db60) main_video_tele_dialer_pane

0xa4be,	// (0x0003ac24) aid_size_cell_video_keypad_ParamLimits

0xa4be,	// (0x0003ac24) aid_size_cell_video_keypad

0xa4ce,	// (0x0003ac34) grid_video_dialer_keypad_pane_ParamLimits

0xa4ce,	// (0x0003ac34) grid_video_dialer_keypad_pane

0xa4fe,	// (0x0003ac64) video_down_pane_cp_ParamLimits

0xa4fe,	// (0x0003ac64) video_down_pane_cp

0xa526,	// (0x0003ac8c) cell_video_dialer_keypad_pane_ParamLimits

0xa526,	// (0x0003ac8c) cell_video_dialer_keypad_pane

0x1c9b,	// (0x00032401) bg_button_pane_cp08_ParamLimits

0x1c9b,	// (0x00032401) bg_button_pane_cp08

0xa53b,	// (0x0003aca1) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa53b,	// (0x0003aca1) cell_video_dialer_keypad_pane_g1

0x9d95,	// (0x0003a4fb) mup3_rocker2_pane_ParamLimits

0x9d95,	// (0x0003a4fb) mup3_rocker2_pane

0x13df,	// (0x00031b45) mup3_rocker2_pane_g1

0x8df5,	// (0x0003955b) main_dialer2_pane

0xd3fa,	// (0x0003db60) main_mp4_pane

0xa57e,	// (0x0003ace4) main_mp4_pane_g1_ParamLimits

0xa57e,	// (0x0003ace4) main_mp4_pane_g1

0xa58c,	// (0x0003acf2) main_mp4_pane_g2_ParamLimits

0xa58c,	// (0x0003acf2) main_mp4_pane_g2

0xa59a,	// (0x0003ad00) main_mp4_pane_g3_ParamLimits

0xa59a,	// (0x0003ad00) main_mp4_pane_g3

0xa5cf,	// (0x0003ad35) main_mp4_pane_g4_ParamLimits

0xa5cf,	// (0x0003ad35) main_mp4_pane_g4

0xa5f7,	// (0x0003ad5d) main_mp4_pane_g5_ParamLimits

0xa5f7,	// (0x0003ad5d) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00040013) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00040013) main_mp4_pane_g

0xa647,	// (0x0003adad) main_mp4_pane_t1_ParamLimits

0xa647,	// (0x0003adad) main_mp4_pane_t1

0xa69f,	// (0x0003ae05) main_mp4_pane_t2_ParamLimits

0xa69f,	// (0x0003ae05) main_mp4_pane_t2

0x1ddf,	// (0x00032545) main_mp4_pane_t3_ParamLimits

0x1ddf,	// (0x00032545) main_mp4_pane_t3

0xa6f1,	// (0x0003ae57) main_mp4_pane_t4_ParamLimits

0xa6f1,	// (0x0003ae57) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00040020) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00040020) main_mp4_pane_t

0xa731,	// (0x0003ae97) mp4_progress_pane_ParamLimits

0xa731,	// (0x0003ae97) mp4_progress_pane

0xa77b,	// (0x0003aee1) mp4_rocker_pane_ParamLimits

0xa77b,	// (0x0003aee1) mp4_rocker_pane

0x1eaf,	// (0x00032615) mp4_progress_pane_t1

0x1ec6,	// (0x0003262c) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00040029) mp4_progress_pane_t

0x1edd,	// (0x00032643) mup_progress_pane_cp04

0x13df,	// (0x00031b45) mp4_rocker_pane_g1

0xa799,	// (0x0003aeff) aid_cell_size_keypad2_ParamLimits

0xa799,	// (0x0003aeff) aid_cell_size_keypad2

0xa7a9,	// (0x0003af0f) dialer2_ne_pane_ParamLimits

0xa7a9,	// (0x0003af0f) dialer2_ne_pane

0xa7b5,	// (0x0003af1b) grid_dialer2_keypad_pane_ParamLimits

0xa7b5,	// (0x0003af1b) grid_dialer2_keypad_pane

0x299f,	// (0x00033105) bg_popup_call_pane_cp07_ParamLimits

0x299f,	// (0x00033105) bg_popup_call_pane_cp07

0xa7c1,	// (0x0003af27) dialer2_ne_pane_t1_ParamLimits

0xa7c1,	// (0x0003af27) dialer2_ne_pane_t1

0xa7e6,	// (0x0003af4c) cell_dialer2_keypad_pane_ParamLimits

0xa7e6,	// (0x0003af4c) cell_dialer2_keypad_pane

0x1f05,	// (0x0003266b) bg_button_pane_pane_cp04_ParamLimits

0x1f05,	// (0x0003266b) bg_button_pane_pane_cp04

0xa7fb,	// (0x0003af61) cell_dialer2_keypad_pane_g1_ParamLimits

0xa7fb,	// (0x0003af61) cell_dialer2_keypad_pane_g1

0x736d,	// (0x00037ad3) aid_placing_vt_set_content_ParamLimits

0x736d,	// (0x00037ad3) aid_placing_vt_set_content

0x7393,	// (0x00037af9) aid_placing_vt_set_title_ParamLimits

0x7393,	// (0x00037af9) aid_placing_vt_set_title

0xd3fa,	// (0x0003db60) main_image3_pane

0xa88b,	// (0x0003aff1) area_side_right_pane_cp01_ParamLimits

0xa88b,	// (0x0003aff1) area_side_right_pane_cp01

0x2e78,	// (0x000335de) main_image3_pane_g1_ParamLimits

0x2e78,	// (0x000335de) main_image3_pane_g1

0xa8b8,	// (0x0003b01e) main_image3_pane_g2_ParamLimits

0xa8b8,	// (0x0003b01e) main_image3_pane_g2

0xa8cf,	// (0x0003b035) main_image3_pane_g3_ParamLimits

0xa8cf,	// (0x0003b035) main_image3_pane_g3

0xa8e6,	// (0x0003b04c) main_image3_pane_g4_ParamLimits

0xa8e6,	// (0x0003b04c) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00040038) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00040038) main_image3_pane_g

0xa8fd,	// (0x0003b063) main_image3_pane_t1_ParamLimits

0xa8fd,	// (0x0003b063) main_image3_pane_t1

0xa922,	// (0x0003b088) main_image3_pane_t2_ParamLimits

0xa922,	// (0x0003b088) main_image3_pane_t2

0xa941,	// (0x0003b0a7) main_image3_pane_t3_ParamLimits

0xa941,	// (0x0003b0a7) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00040041) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00040041) main_image3_pane_t

0x4091,	// (0x000347f7) grid_sctrl_middle_pane_cp01_ParamLimits

0x4091,	// (0x000347f7) grid_sctrl_middle_pane_cp01

0xa99c,	// (0x0003b102) cell_sctrl_middle_pane_cp01_ParamLimits

0xa99c,	// (0x0003b102) cell_sctrl_middle_pane_cp01

0xa9ad,	// (0x0003b113) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa9ad,	// (0x0003b113) cell_sctrl_middle_pane_cp01_g1

0xd3fa,	// (0x0003db60) main_call4_pane

0xa9ba,	// (0x0003b120) aid_size_button_call4_ParamLimits

0xa9ba,	// (0x0003b120) aid_size_button_call4

0xa9e8,	// (0x0003b14e) call4_windows_pane_ParamLimits

0xa9e8,	// (0x0003b14e) call4_windows_pane

0xaa00,	// (0x0003b166) grid_call4_button_pane_ParamLimits

0xaa00,	// (0x0003b166) grid_call4_button_pane

0x1f43,	// (0x000326a9) call4_windows_conf_pane

0xaa1a,	// (0x0003b180) popup_call4_audio_first_window_ParamLimits

0xaa1a,	// (0x0003b180) popup_call4_audio_first_window

0xaa3a,	// (0x0003b1a0) popup_call4_audio_second_window_ParamLimits

0xaa3a,	// (0x0003b1a0) popup_call4_audio_second_window

0x1f76,	// (0x000326dc) popup_call4_audio_wait_window_ParamLimits

0x1f76,	// (0x000326dc) popup_call4_audio_wait_window

0xaa4c,	// (0x0003b1b2) cell_call4_button_pane_ParamLimits

0xaa4c,	// (0x0003b1b2) cell_call4_button_pane

0xaa6f,	// (0x0003b1d5) bg_button_pane_cp09_ParamLimits

0xaa6f,	// (0x0003b1d5) bg_button_pane_cp09

0xaa7b,	// (0x0003b1e1) cell_call4_button_pane_g1_ParamLimits

0xaa7b,	// (0x0003b1e1) cell_call4_button_pane_g1

0xaa88,	// (0x0003b1ee) cell_call4_button_pane_t1_ParamLimits

0xaa88,	// (0x0003b1ee) cell_call4_button_pane_t1

0x1fbc,	// (0x00032722) popup_call4_audio_conf_window_ParamLimits

0x1fbc,	// (0x00032722) popup_call4_audio_conf_window

0x9dc6,	// (0x0003a52c) mup3_progress_pane_t1_ParamLimits

0x9de4,	// (0x0003a54a) mup3_progress_pane_t2_ParamLimits

0x1695,	// (0x00031dfb) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0003ff15) mup3_progress_pane_t_ParamLimits

0x16b2,	// (0x00031e18) mup_progress_pane_cp03_ParamLimits

0xa2bb,	// (0x0003aa21) mup3_control_keys_pane_g4_copy1

0xa75f,	// (0x0003aec5) mp4_rocker2_pane_ParamLimits

0xa75f,	// (0x0003aec5) mp4_rocker2_pane

0x1fd8,	// (0x0003273e) mp4_rocker2_pane_g1

0x1fd0,	// (0x00032736) mp4_rocker2_pane_g2

0xaa9a,	// (0x0003b200) mp4_rocker2_pane_g3

0xaaa2,	// (0x0003b208) mp4_rocker2_pane_g4

0xaaaa,	// (0x0003b210) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0004004a) mp4_rocker2_pane_g

0xd3fa,	// (0x0003db60) main_camera4_pane

0xd3fa,	// (0x0003db60) main_video4_pane

0xa4da,	// (0x0003ac40) main_video_tele_dialer_pane_t1_ParamLimits

0xa4da,	// (0x0003ac40) main_video_tele_dialer_pane_t1

0xa4ec,	// (0x0003ac52) main_video_tele_dialer_pane_t2_ParamLimits

0xa4ec,	// (0x0003ac52) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00040004) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00040004) main_video_tele_dialer_pane_t

0xaac8,	// (0x0003b22e) cam4_autofocus_pane_ParamLimits

0xaac8,	// (0x0003b22e) cam4_autofocus_pane

0xaade,	// (0x0003b244) cam4_image_uncrop_pane_ParamLimits

0xaade,	// (0x0003b244) cam4_image_uncrop_pane

0xaaf3,	// (0x0003b259) cam4_indicators_pane_ParamLimits

0xaaf3,	// (0x0003b259) cam4_indicators_pane

0xab0d,	// (0x0003b273) main_camera4_pane_g1_ParamLimits

0xab0d,	// (0x0003b273) main_camera4_pane_g1

0xab19,	// (0x0003b27f) main_camera4_pane_g2_ParamLimits

0xab19,	// (0x0003b27f) main_camera4_pane_g2

0xab19,	// (0x0003b27f) main_camera4_pane_g3_ParamLimits

0xab19,	// (0x0003b27f) main_camera4_pane_g3

0xab25,	// (0x0003b28b) main_camera4_pane_g4_ParamLimits

0xab25,	// (0x0003b28b) main_camera4_pane_g4

0xab31,	// (0x0003b297) main_camera4_pane_g5_ParamLimits

0xab31,	// (0x0003b297) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00040055) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00040055) main_camera4_pane_g

0xab4b,	// (0x0003b2b1) main_camera4_pane_t1_ParamLimits

0xab4b,	// (0x0003b2b1) main_camera4_pane_t1

0x160e,	// (0x00031d74) bg_tb_trans_pane_cp06

0xab9b,	// (0x0003b301) cam4_indicators_pane_g1

0xabac,	// (0x0003b312) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00040070) cam4_indicators_pane_g

0xabc4,	// (0x0003b32a) cam4_indicators_pane_t1

0xabec,	// (0x0003b352) main_video4_pane_g1_ParamLimits

0xabec,	// (0x0003b352) main_video4_pane_g1

0xabf8,	// (0x0003b35e) main_video4_pane_g2_ParamLimits

0xabf8,	// (0x0003b35e) main_video4_pane_g2

0xac04,	// (0x0003b36a) main_video4_pane_g3_ParamLimits

0xac04,	// (0x0003b36a) main_video4_pane_g3

0xac10,	// (0x0003b376) main_video4_pane_g4_ParamLimits

0xac10,	// (0x0003b376) main_video4_pane_g4

0x0004,

0xf911,	// (0x00040077) main_video4_pane_g_ParamLimits

0xf911,	// (0x00040077) main_video4_pane_g

0xac30,	// (0x0003b396) vid4_indicators_pane_ParamLimits

0xac30,	// (0x0003b396) vid4_indicators_pane

0xac4d,	// (0x0003b3b3) video4_image_uncrop_cif_pane_ParamLimits

0xac4d,	// (0x0003b3b3) video4_image_uncrop_cif_pane

0xac5a,	// (0x0003b3c0) video4_image_uncrop_nhd_pane_ParamLimits

0xac5a,	// (0x0003b3c0) video4_image_uncrop_nhd_pane

0xaade,	// (0x0003b244) video4_image_uncrop_vga_pane_ParamLimits

0xaade,	// (0x0003b244) video4_image_uncrop_vga_pane

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp07

0xac6f,	// (0x0003b3d5) vid4_indicators_pane_g1

0xac83,	// (0x0003b3e9) vid4_indicators_pane_g2

0xac97,	// (0x0003b3fd) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00040082) vid4_indicators_pane_g

0xacc4,	// (0x0003b42a) vid4_indicators_pane_t1

0xacdb,	// (0x0003b441) cam4_autofocus_pane_g1

0xace3,	// (0x0003b449) cam4_autofocus_pane_g2

0xaceb,	// (0x0003b451) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0004008d) cam4_autofocus_pane_g

0xacf3,	// (0x0003b459) cam4_autofocus_pane_g3_copy1

0xa50a,	// (0x0003ac70) video_down_pane_cp_t1

0xa518,	// (0x0003ac7e) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00040009) video_down_pane_cp_t

0x4091,	// (0x000347f7) popup_vitu2_window_ParamLimits

0x4091,	// (0x000347f7) popup_vitu2_window

0xacfb,	// (0x0003b461) aid_size_cell2_itu2_ParamLimits

0xacfb,	// (0x0003b461) aid_size_cell2_itu2

0xad1d,	// (0x0003b483) aid_size_cell_itu2_ParamLimits

0xad1d,	// (0x0003b483) aid_size_cell_itu2

0x299f,	// (0x00033105) bg_popup_window_pane_cp09_ParamLimits

0x299f,	// (0x00033105) bg_popup_window_pane_cp09

0xad5b,	// (0x0003b4c1) field_vitu2_entry_pane_ParamLimits

0xad5b,	// (0x0003b4c1) field_vitu2_entry_pane

0xad6f,	// (0x0003b4d5) grid_vitu2_function_pane_ParamLimits

0xad6f,	// (0x0003b4d5) grid_vitu2_function_pane

0xad9d,	// (0x0003b503) grid_vitu2_itu_pane_ParamLimits

0xad9d,	// (0x0003b503) grid_vitu2_itu_pane

0xadf5,	// (0x0003b55b) cell_vitu2_itu_pane_ParamLimits

0xadf5,	// (0x0003b55b) cell_vitu2_itu_pane

0xae0d,	// (0x0003b573) cell_vitu2_function_pane_ParamLimits

0xae0d,	// (0x0003b573) cell_vitu2_function_pane

0x20f9,	// (0x0003285f) bg_popup_call_pane_cp08_ParamLimits

0x20f9,	// (0x0003285f) bg_popup_call_pane_cp08

0x2110,	// (0x00032876) field_vitu2_entry_pane_g1

0x211c,	// (0x00032882) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00040094) field_vitu2_entry_pane_g

0x52ed,	// (0x00035a53) field_vitu2_entry_pane_t1_ParamLimits

0x52ed,	// (0x00035a53) field_vitu2_entry_pane_t1

0x531b,	// (0x00035a81) field_vitu2_entry_pane_t2_ParamLimits

0x531b,	// (0x00035a81) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0004009b) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0004009b) field_vitu2_entry_pane_t

0xae4c,	// (0x0003b5b2) bg_button_pane_cp010_ParamLimits

0xae4c,	// (0x0003b5b2) bg_button_pane_cp010

0xae5a,	// (0x0003b5c0) cell_vitu2_itu_pane_g1

0xae7a,	// (0x0003b5e0) cell_vitu2_itu_pane_t1_ParamLimits

0xae7a,	// (0x0003b5e0) cell_vitu2_itu_pane_t1

0x5338,	// (0x00035a9e) cell_vitu2_itu_pane_t2_ParamLimits

0x5338,	// (0x00035a9e) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x000400a5) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x000400a5) cell_vitu2_itu_pane_t

0xf0b0,	// (0x0003f816) bg_button_pane_cp011

0xaec6,	// (0x0003b62c) cell_vitu2_function_pane_g1

0xd3fa,	// (0x0003db60) main_myfav_hc_pane

0xa981,	// (0x0003b0e7) popup_image3_note_pane_ParamLimits

0xa981,	// (0x0003b0e7) popup_image3_note_pane

0xa98d,	// (0x0003b0f3) popup_image3_tool_bar_pane_ParamLimits

0xa98d,	// (0x0003b0f3) popup_image3_tool_bar_pane

0x53ae,	// (0x00035b14) cell_vitu2_itu_pane_t3_ParamLimits

0x53ae,	// (0x00035b14) cell_vitu2_itu_pane_t3

0xd3fa,	// (0x0003db60) bg_popup_trans_pane

0x216d,	// (0x000328d3) grid_image3_tool_bar_pane

0x2177,	// (0x000328dd) bg_popup_trans_pane_g1

0xdf8c,	// (0x0003e6f2) bg_popup_trans_pane_g2

0x217f,	// (0x000328e5) bg_popup_trans_pane_g3

0x2187,	// (0x000328ed) bg_popup_trans_pane_g4

0x218f,	// (0x000328f5) bg_popup_trans_pane_g5

0x2197,	// (0x000328fd) bg_popup_trans_pane_g6

0x219f,	// (0x00032905) bg_popup_trans_pane_g7

0x21a7,	// (0x0003290d) bg_popup_trans_pane_g8

0xdf6c,	// (0x0003e6d2) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x000400ac) bg_popup_trans_pane_g

0x21af,	// (0x00032915) cell_image3_tool_bar_pane_ParamLimits

0x21af,	// (0x00032915) cell_image3_tool_bar_pane

0x13df,	// (0x00031b45) cell_image3_tool_bar_pane_g1

0xd3fa,	// (0x0003db60) bg_popup_trans_pane_cp1

0x21c3,	// (0x00032929) popup_image3_note_pane_t1

0x21d1,	// (0x00032937) popup_image3_note_pane_t2

0x21df,	// (0x00032945) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x000400bf) popup_image3_note_pane_t

0x21ed,	// (0x00032953) popup_image3_note_pane_t3_copy1

0xaeda,	// (0x0003b640) bg_myfav_hc_instruction_pane_ParamLimits

0xaeda,	// (0x0003b640) bg_myfav_hc_instruction_pane

0xaeec,	// (0x0003b652) cell_myfav_contact_pane_ParamLimits

0xaeec,	// (0x0003b652) cell_myfav_contact_pane

0xaf06,	// (0x0003b66c) cell_myfav_contact_pane_cp1_ParamLimits

0xaf06,	// (0x0003b66c) cell_myfav_contact_pane_cp1

0xaf1c,	// (0x0003b682) cell_myfav_contact_pane_cp2_ParamLimits

0xaf1c,	// (0x0003b682) cell_myfav_contact_pane_cp2

0xaf32,	// (0x0003b698) cell_myfav_contact_pane_cp3_ParamLimits

0xaf32,	// (0x0003b698) cell_myfav_contact_pane_cp3

0xaf47,	// (0x0003b6ad) cell_myfav_contact_pane_cp4_ParamLimits

0xaf47,	// (0x0003b6ad) cell_myfav_contact_pane_cp4

0xaf5b,	// (0x0003b6c1) cell_myfav_contact_pane_cp5_ParamLimits

0xaf5b,	// (0x0003b6c1) cell_myfav_contact_pane_cp5

0xaf6f,	// (0x0003b6d5) cell_myfav_contact_pane_cp6_ParamLimits

0xaf6f,	// (0x0003b6d5) cell_myfav_contact_pane_cp6

0xaf83,	// (0x0003b6e9) cell_myfav_contact_pane_cp7_ParamLimits

0xaf83,	// (0x0003b6e9) cell_myfav_contact_pane_cp7

0x21fb,	// (0x00032961) listscroll_gen_pane_cp05

0xaf9b,	// (0x0003b701) main_myfav_hc_pane_g1_ParamLimits

0xaf9b,	// (0x0003b701) main_myfav_hc_pane_g1

0xafb1,	// (0x0003b717) main_myfav_hc_pane_g2_ParamLimits

0xafb1,	// (0x0003b717) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x000400c6) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x000400c6) main_myfav_hc_pane_g

0xafdb,	// (0x0003b741) main_myfav_hc_pane_t1_ParamLimits

0xafdb,	// (0x0003b741) main_myfav_hc_pane_t1

0x2204,	// (0x0003296a) main_myfav_hc_pane_t2_ParamLimits

0x2204,	// (0x0003296a) main_myfav_hc_pane_t2

0x2216,	// (0x0003297c) main_myfav_hc_pane_t3_ParamLimits

0x2216,	// (0x0003297c) main_myfav_hc_pane_t3

0xaff0,	// (0x0003b756) main_myfav_hc_pane_t4_ParamLimits

0xaff0,	// (0x0003b756) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x000400cd) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x000400cd) main_myfav_hc_pane_t

0x13df,	// (0x00031b45) bg_myfav_hc_instruction_pane_g1

0x2228,	// (0x0003298e) cell_myfav_contact_pane_g1_ParamLimits

0x2228,	// (0x0003298e) cell_myfav_contact_pane_g1

0x2228,	// (0x0003298e) cell_myfav_contact_pane_g2_ParamLimits

0x2228,	// (0x0003298e) cell_myfav_contact_pane_g2

0x2234,	// (0x0003299a) cell_myfav_contact_pane_g3_ParamLimits

0x2234,	// (0x0003299a) cell_myfav_contact_pane_g3

0x167f,	// (0x00031de5) cell_myfav_contact_pane_g4_ParamLimits

0x167f,	// (0x00031de5) cell_myfav_contact_pane_g4

0x2241,	// (0x000329a7) cell_myfav_contact_pane_g5_ParamLimits

0x2241,	// (0x000329a7) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x000400d8) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x000400d8) cell_myfav_contact_pane_g

0xafc7,	// (0x0003b72d) main_myfav_hc_pane_g3_ParamLimits

0xafc7,	// (0x0003b72d) main_myfav_hc_pane_g3

0x6433,	// (0x00036b99) popup_adpt_find_window

0xb014,	// (0x0003b77a) afind_page_pane_ParamLimits

0xb014,	// (0x0003b77a) afind_page_pane

0xb021,	// (0x0003b787) aid_size_cell_afind_ParamLimits

0xb021,	// (0x0003b787) aid_size_cell_afind

0xb03b,	// (0x0003b7a1) bg_popup_sub_pane_cp09_ParamLimits

0xb03b,	// (0x0003b7a1) bg_popup_sub_pane_cp09

0xb048,	// (0x0003b7ae) find_pane_cp01_ParamLimits

0xb048,	// (0x0003b7ae) find_pane_cp01

0x224d,	// (0x000329b3) grid_afind_control_pane_ParamLimits

0x224d,	// (0x000329b3) grid_afind_control_pane

0xb055,	// (0x0003b7bb) grid_afind_pane_ParamLimits

0xb055,	// (0x0003b7bb) grid_afind_pane

0xb06d,	// (0x0003b7d3) cell_afind_pane_ParamLimits

0xb06d,	// (0x0003b7d3) cell_afind_pane

0x13df,	// (0x00031b45) afind_page_pane_g1

0xb0a3,	// (0x0003b809) afind_page_pane_g2

0xb0ac,	// (0x0003b812) afind_page_pane_g3

0x0002,

0xf97d,	// (0x000400e3) afind_page_pane_g

0xb0b5,	// (0x0003b81b) afind_page_pane_t1

0x2261,	// (0x000329c7) cell_afind_grid_control_pane_ParamLimits

0x2261,	// (0x000329c7) cell_afind_grid_control_pane

0x1f05,	// (0x0003266b) bg_button_pane_cp69_ParamLimits

0x1f05,	// (0x0003266b) bg_button_pane_cp69

0xb0d5,	// (0x0003b83b) cell_afind_pane_g1_ParamLimits

0xb0d5,	// (0x0003b83b) cell_afind_pane_g1

0xb0e2,	// (0x0003b848) cell_afind_pane_t1_ParamLimits

0xb0e2,	// (0x0003b848) cell_afind_pane_t1

0xdd78,	// (0x0003e4de) bg_button_pane_cp72

0x2270,	// (0x000329d6) cell_afind_grid_control_pane_g1

0x8a22,	// (0x00039188) aid_image_placing_area_ParamLimits

0x8a22,	// (0x00039188) aid_image_placing_area

0x19ac,	// (0x00032112) field_vitu_entry_pane_g1_ParamLimits

0x19ac,	// (0x00032112) field_vitu_entry_pane_g1

0x19b8,	// (0x0003211e) field_vitu_entry_pane_g2_ParamLimits

0x19b8,	// (0x0003211e) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0003ff94) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0003ff94) field_vitu_entry_pane_g

0xa336,	// (0x0003aa9c) cell_vitu_itu_pane_g1_ParamLimits

0xa378,	// (0x0003aade) cell_vitu_itu_pane_t3_ParamLimits

0xa378,	// (0x0003aade) cell_vitu_itu_pane_t3

0x1eaf,	// (0x00032615) mp4_progress_pane_t1_ParamLimits

0x1ec6,	// (0x0003262c) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00040029) mp4_progress_pane_t_ParamLimits

0x1edd,	// (0x00032643) mup_progress_pane_cp04_ParamLimits

0xb002,	// (0x0003b768) main_myfav_hc_pane_t5_ParamLimits

0xb002,	// (0x0003b768) main_myfav_hc_pane_t5

0x62dd,	// (0x00036a43) aid_zoom_text_primary

0x6433,	// (0x00036b99) popup_adpt_find_window_ParamLimits

0xf0b0,	// (0x0003f816) main_cam_set_pane

0xab01,	// (0x0003b267) cam4_zoom_pane_ParamLimits

0xab01,	// (0x0003b267) cam4_zoom_pane

0xb0f4,	// (0x0003b85a) main_cam_set_pane_g1_ParamLimits

0xb0f4,	// (0x0003b85a) main_cam_set_pane_g1

0xb102,	// (0x0003b868) main_cam_set_pane_g2_ParamLimits

0xb102,	// (0x0003b868) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x000400ea) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x000400ea) main_cam_set_pane_g

0xb10e,	// (0x0003b874) main_cam_set_pane_t1_ParamLimits

0xb10e,	// (0x0003b874) main_cam_set_pane_t1

0xb12a,	// (0x0003b890) main_cset_listscroll_pane_ParamLimits

0xb12a,	// (0x0003b890) main_cset_listscroll_pane

0xb153,	// (0x0003b8b9) main_cset_slider_pane_ParamLimits

0xb153,	// (0x0003b8b9) main_cset_slider_pane

0x2281,	// (0x000329e7) main_cset_list_pane_ParamLimits

0x2281,	// (0x000329e7) main_cset_list_pane

0x2291,	// (0x000329f7) scroll_pane_cp028

0xb172,	// (0x0003b8d8) aid_area_touch_slider

0x229a,	// (0x00032a00) cset_slider_pane

0xb18e,	// (0x0003b8f4) main_cset_slider_pane_g1

0xb1a3,	// (0x0003b909) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x000400ef) main_cset_slider_pane_g

0x230c,	// (0x00032a72) main_cset_slider_pane_t1

0xb247,	// (0x0003b9ad) main_cset_slider_pane_t2

0xb261,	// (0x0003b9c7) main_cset_slider_pane_t3

0xb27b,	// (0x0003b9e1) main_cset_slider_pane_t4

0xb295,	// (0x0003b9fb) main_cset_slider_pane_t5

0xb2af,	// (0x0003ba15) main_cset_slider_pane_t6

0xb2c4,	// (0x0003ba2a) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00040114) main_cset_slider_pane_t

0xb3c8,	// (0x0003bb2e) cset_list_set_pane_ParamLimits

0xb3c8,	// (0x0003bb2e) cset_list_set_pane

0xb3d7,	// (0x0003bb3d) aid_position_infowindow_above

0xb3df,	// (0x0003bb45) aid_position_infowindow_below

0x5400,	// (0x00035b66) cset_list_set_pane_g1_ParamLimits

0x5400,	// (0x00035b66) cset_list_set_pane_g1

0x540c,	// (0x00035b72) cset_list_set_pane_g3_ParamLimits

0x540c,	// (0x00035b72) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00040133) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00040133) cset_list_set_pane_g

0x541b,	// (0x00035b81) cset_list_set_pane_t1_ParamLimits

0x541b,	// (0x00035b81) cset_list_set_pane_t1

0xf0b0,	// (0x0003f816) list_highlight_pane_cp021_ParamLimits

0xf0b0,	// (0x0003f816) list_highlight_pane_cp021

0xe863,	// (0x0003efc9) cset_slider_pane_g1

0xe875,	// (0x0003efdb) cset_slider_pane_g2

0xe86c,	// (0x0003efd2) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00040138) cset_slider_pane_g

0xb3e7,	// (0x0003bb4d) aid_area_touch_cam4_zoom

0xb3ef,	// (0x0003bb55) cam4_zoom_cont_pane

0xb3f7,	// (0x0003bb5d) cam4_zoom_pane_g1

0xb3ff,	// (0x0003bb65) cam4_zoom_pane_g2

0xb407,	// (0x0003bb6d) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0004013f) cam4_zoom_pane_g

0x2cde,	// (0x00033444) cam4_zoom_cont_pane_g1

0x2ce7,	// (0x0003344d) cam4_zoom_cont_pane_g2

0x2cf0,	// (0x00033456) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00040146) cam4_zoom_cont_pane_g

0xa9d4,	// (0x0003b13a) call4_image_pane_ParamLimits

0xa9d4,	// (0x0003b13a) call4_image_pane

0x1f43,	// (0x000326a9) call4_windows_conf_pane_ParamLimits

0x1f56,	// (0x000326bc) popup_call4_audio_in_window_ParamLimits

0x1f56,	// (0x000326bc) popup_call4_audio_in_window

0xd3fa,	// (0x0003db60) bg_popup_call2_act_pane_cp02

0x1fb4,	// (0x0003271a) call4_list_conf_pane

0x13df,	// (0x00031b45) call4_image_pane_g1

0x13df,	// (0x00031b45) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0003fe55) call4_image_pane_g

0x23e7,	// (0x00032b4d) list_single_graphic_popup_conf4_pane_ParamLimits

0x23e7,	// (0x00032b4d) list_single_graphic_popup_conf4_pane

0xd3fa,	// (0x0003db60) list_highlight_pane_cp022

0x23fa,	// (0x00032b60) list_single_graphic_popup_conf4_pane_g1

0xe4aa,	// (0x0003ec10) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0004014d) list_single_graphic_popup_conf4_pane_g

0x2402,	// (0x00032b68) list_single_graphic_popup_conf4_pane_t1

0x74d7,	// (0x00037c3d) popup_vtel_slider_window_ParamLimits

0x74d7,	// (0x00037c3d) popup_vtel_slider_window

0x1ef3,	// (0x00032659) dialer2_ne_pane_t2_ParamLimits

0x1ef3,	// (0x00032659) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0004002e) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0004002e) dialer2_ne_pane_t

0xf0b0,	// (0x0003f816) bg_popup_sub_pane_cp010_ParamLimits

0xf0b0,	// (0x0003f816) bg_popup_sub_pane_cp010

0xb40f,	// (0x0003bb75) popup_vtel_slider_window_g1_ParamLimits

0xb40f,	// (0x0003bb75) popup_vtel_slider_window_g1

0xb41b,	// (0x0003bb81) popup_vtel_slider_window_g2_ParamLimits

0xb41b,	// (0x0003bb81) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00040152) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00040152) popup_vtel_slider_window_g

0xb461,	// (0x0003bbc7) vtel_slider_pane_ParamLimits

0xb461,	// (0x0003bbc7) vtel_slider_pane

0xb470,	// (0x0003bbd6) vtel_slider_pane_g1_ParamLimits

0xb470,	// (0x0003bbd6) vtel_slider_pane_g1

0xb47d,	// (0x0003bbe3) vtel_slider_pane_g2_ParamLimits

0xb47d,	// (0x0003bbe3) vtel_slider_pane_g2

0xb48a,	// (0x0003bbf0) vtel_slider_pane_g3_ParamLimits

0xb48a,	// (0x0003bbf0) vtel_slider_pane_g3

0xb470,	// (0x0003bbd6) vtel_slider_pane_g4_ParamLimits

0xb470,	// (0x0003bbd6) vtel_slider_pane_g4

0xb497,	// (0x0003bbfd) vtel_slider_pane_g5_ParamLimits

0xb497,	// (0x0003bbfd) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0004015b) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0004015b) vtel_slider_pane_g

0xf0b0,	// (0x0003f816) main_gallery2_pane

0xad43,	// (0x0003b4a9) aid_size_row_itut2_dropdow_list_ParamLimits

0xad43,	// (0x0003b4a9) aid_size_row_itut2_dropdow_list

0xad85,	// (0x0003b4eb) grid_vitu2_function_top_pane_ParamLimits

0xad85,	// (0x0003b4eb) grid_vitu2_function_top_pane

0xadc1,	// (0x0003b527) popup_vitu2_dropdown_list_window_ParamLimits

0xadc1,	// (0x0003b527) popup_vitu2_dropdown_list_window

0xadd9,	// (0x0003b53f) popup_vitu2_match_list_window

0xb4a4,	// (0x0003bc0a) cell_vitu2_function_top_pane_ParamLimits

0xb4a4,	// (0x0003bc0a) cell_vitu2_function_top_pane

0xb4bc,	// (0x0003bc22) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb4bc,	// (0x0003bc22) cell_vitu2_function_top_pane_cp01

0xb4d8,	// (0x0003bc3e) cell_vitu2_function_top_wide_pane_ParamLimits

0xb4d8,	// (0x0003bc3e) cell_vitu2_function_top_wide_pane

0xf0b0,	// (0x0003f816) bg_button_pane_cp012

0xb4f4,	// (0x0003bc5a) cell_vitu2_function_top_pane_g1

0xb508,	// (0x0003bc6e) bg_button_pane_cp013_ParamLimits

0xb508,	// (0x0003bc6e) bg_button_pane_cp013

0xb524,	// (0x0003bc8a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb524,	// (0x0003bc8a) cell_vitu2_function_top_wide_pane_g1

0x4091,	// (0x000347f7) bg_popup_sub_pane_cp20

0xb53c,	// (0x0003bca2) list_vitu2_match_list_pane

0x2177,	// (0x000328dd) bg_popup_sub_pane_cp20_g1

0x217f,	// (0x000328e5) bg_popup_sub_pane_cp20_g2

0xdf8c,	// (0x0003e6f2) bg_popup_sub_pane_cp20_g3

0x2187,	// (0x000328ed) bg_popup_sub_pane_cp20_g4

0xdf6c,	// (0x0003e6d2) bg_popup_sub_pane_cp20_g5

0x2434,	// (0x00032b9a) bg_popup_sub_pane_cp20_g6

0x2197,	// (0x000328fd) bg_popup_sub_pane_cp20_g7

0x219f,	// (0x00032905) bg_popup_sub_pane_cp20_g8

0x21a7,	// (0x0003290d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00040166) bg_popup_sub_pane_cp20_g

0xb554,	// (0x0003bcba) list_vitu2_match_list_item_pane_ParamLimits

0xb554,	// (0x0003bcba) list_vitu2_match_list_item_pane

0xb566,	// (0x0003bccc) list_vitu2_match_list_item_pane_t1

0xd3fa,	// (0x0003db60) bg_popup_sub_pane_cp21

0xe3e8,	// (0x0003eb4e) grid_vitu2_dropdown_list_pane

0xb574,	// (0x0003bcda) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb574,	// (0x0003bcda) cell_vitu2_dropdown_list_char_pane

0xb595,	// (0x0003bcfb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb595,	// (0x0003bcfb) cell_vitu2_dropdown_list_ctrl_pane

0x2476,	// (0x00032bdc) cell_vitu2_dropdown_list_char_pane_g1

0x246d,	// (0x00032bd3) cell_vitu2_dropdown_list_char_pane_g2

0x2464,	// (0x00032bca) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00040183) cell_vitu2_dropdown_list_char_pane_g

0xb5c1,	// (0x0003bd27) cell_vitu2_dropdown_list_char_pane_t1

0xb5cf,	// (0x0003bd35) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb5cf,	// (0x0003bd35) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb5df,	// (0x0003bd45) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb5df,	// (0x0003bd45) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb5f0,	// (0x0003bd56) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb5f0,	// (0x0003bd56) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb600,	// (0x0003bd66) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb600,	// (0x0003bd66) cell_vitu2_dropdown_list_ctrl_pane_g4

0x160e,	// (0x00031d74) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x160e,	// (0x00031d74) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0004018a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0004018a) cell_vitu2_dropdown_list_ctrl_pane_g

0xb619,	// (0x0003bd7f) aid_size_cell_gallery2_ParamLimits

0xb619,	// (0x0003bd7f) aid_size_cell_gallery2

0xb633,	// (0x0003bd99) grid_gallery2_pane_ParamLimits

0xb633,	// (0x0003bd99) grid_gallery2_pane

0xa1e8,	// (0x0003a94e) scroll_pane_cp029_ParamLimits

0xa1e8,	// (0x0003a94e) scroll_pane_cp029

0xb644,	// (0x0003bdaa) cell_gallery2_pane_ParamLimits

0xb644,	// (0x0003bdaa) cell_gallery2_pane

0x247f,	// (0x00032be5) cell_gallery2_pane_g2

0xb68c,	// (0x0003bdf2) cell_gallery2_pane_g3

0x2487,	// (0x00032bed) cell_gallery2_pane_g4

0x248f,	// (0x00032bf5) cell_gallery2_pane_g5

0xdd26,	// (0x0003e48c) grid_highlight_pane_cp10

0xadd9,	// (0x0003b53f) popup_vitu2_match_list_window_ParamLimits

0xade9,	// (0x0003b54f) popup_vitu2_query_window_ParamLimits

0xade9,	// (0x0003b54f) popup_vitu2_query_window

0xd3fa,	// (0x0003db60) bg_vitu2_candi_button_pane

0x2476,	// (0x00032bdc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x246d,	// (0x00032bd3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2464,	// (0x00032bca) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5486,	// (0x00035bec) bg_button_pane_cp015

0xb694,	// (0x0003bdfa) bg_button_pane_cp016

0xb6a7,	// (0x0003be0d) bg_button_pane_cp017

0x0edd,	// (0x00031643) bg_popup_sub_pane_cp22

0x2497,	// (0x00032bfd) popup_vitu2_query_window_g1

0x54b5,	// (0x00035c1b) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00040195) popup_vitu2_query_window_g

0x54d0,	// (0x00035c36) popup_vitu2_query_window_t1_ParamLimits

0x54d0,	// (0x00035c36) popup_vitu2_query_window_t1

0x5503,	// (0x00035c69) popup_vitu2_query_window_t2_ParamLimits

0x5503,	// (0x00035c69) popup_vitu2_query_window_t2

0x5515,	// (0x00035c7b) popup_vitu2_query_window_t3_ParamLimits

0x5515,	// (0x00035c7b) popup_vitu2_query_window_t3

0xb6cb,	// (0x0003be31) popup_vitu2_query_window_t4_ParamLimits

0xb6cb,	// (0x0003be31) popup_vitu2_query_window_t4

0xb6e8,	// (0x0003be4e) popup_vitu2_query_window_t5_ParamLimits

0xb6e8,	// (0x0003be4e) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0004019c) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0004019c) popup_vitu2_query_window_t

0x2279,	// (0x000329df) main_cset_text_pane

0xb172,	// (0x0003b8d8) aid_area_touch_slider_ParamLimits

0x229a,	// (0x00032a00) cset_slider_pane_ParamLimits

0xb18e,	// (0x0003b8f4) main_cset_slider_pane_g1_ParamLimits

0xb1a3,	// (0x0003b909) main_cset_slider_pane_g2_ParamLimits

0x22c4,	// (0x00032a2a) main_cset_slider_pane_g3_ParamLimits

0x22c4,	// (0x00032a2a) main_cset_slider_pane_g3

0xb1b8,	// (0x0003b91e) main_cset_slider_pane_g4_ParamLimits

0xb1b8,	// (0x0003b91e) main_cset_slider_pane_g4

0xb1c7,	// (0x0003b92d) main_cset_slider_pane_g5_ParamLimits

0xb1c7,	// (0x0003b92d) main_cset_slider_pane_g5

0xb1d3,	// (0x0003b939) main_cset_slider_pane_g6_ParamLimits

0xb1d3,	// (0x0003b939) main_cset_slider_pane_g6

0xf989,	// (0x000400ef) main_cset_slider_pane_g_ParamLimits

0x230c,	// (0x00032a72) main_cset_slider_pane_t1_ParamLimits

0xb247,	// (0x0003b9ad) main_cset_slider_pane_t2_ParamLimits

0xb261,	// (0x0003b9c7) main_cset_slider_pane_t3_ParamLimits

0xb27b,	// (0x0003b9e1) main_cset_slider_pane_t4_ParamLimits

0xb295,	// (0x0003b9fb) main_cset_slider_pane_t5_ParamLimits

0xb2af,	// (0x0003ba15) main_cset_slider_pane_t6_ParamLimits

0xb2c4,	// (0x0003ba2a) main_cset_slider_pane_t7_ParamLimits

0xb2ee,	// (0x0003ba54) main_cset_slider_pane_t8_ParamLimits

0xb2ee,	// (0x0003ba54) main_cset_slider_pane_t8

0xb316,	// (0x0003ba7c) main_cset_slider_pane_t9_ParamLimits

0xb316,	// (0x0003ba7c) main_cset_slider_pane_t9

0xb33e,	// (0x0003baa4) main_cset_slider_pane_t10_ParamLimits

0xb33e,	// (0x0003baa4) main_cset_slider_pane_t10

0xb366,	// (0x0003bacc) main_cset_slider_pane_t11_ParamLimits

0xb366,	// (0x0003bacc) main_cset_slider_pane_t11

0xb38e,	// (0x0003baf4) main_cset_slider_pane_t12_ParamLimits

0xb38e,	// (0x0003baf4) main_cset_slider_pane_t12

0xb3ab,	// (0x0003bb11) main_cset_slider_pane_t13_ParamLimits

0xb3ab,	// (0x0003bb11) main_cset_slider_pane_t13

0xf9ae,	// (0x00040114) main_cset_slider_pane_t_ParamLimits

0xd3fa,	// (0x0003db60) bg_popup_sub_pane_cp011

0x24a3,	// (0x00032c09) main_cset_text_pane_g1

0x24ab,	// (0x00032c11) main_cset_text_pane_t1

0x24b9,	// (0x00032c1f) main_cset_text_pane_t2

0x24c7,	// (0x00032c2d) main_cset_text_pane_t3

0x24d5,	// (0x00032c3b) main_cset_text_pane_t4

0x24e3,	// (0x00032c49) main_cset_text_pane_t5

0x24f1,	// (0x00032c57) main_cset_text_pane_t6

0x24ff,	// (0x00032c65) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x000401ab) main_cset_text_pane_t

0xd3fa,	// (0x0003db60) main_cam4_burst_pane

0xd3fa,	// (0x0003db60) main_cam5_pane

0xb0c3,	// (0x0003b829) bg_button_pane_cp019

0xb0cc,	// (0x0003b832) bg_button_pane_cp020

0x22d0,	// (0x00032a36) main_cset_slider_pane_g7_ParamLimits

0x22d0,	// (0x00032a36) main_cset_slider_pane_g7

0x22dc,	// (0x00032a42) main_cset_slider_pane_g8_ParamLimits

0x22dc,	// (0x00032a42) main_cset_slider_pane_g8

0xb1e7,	// (0x0003b94d) main_cset_slider_pane_g9_ParamLimits

0xb1e7,	// (0x0003b94d) main_cset_slider_pane_g9

0xb1f3,	// (0x0003b959) main_cset_slider_pane_g10_ParamLimits

0xb1f3,	// (0x0003b959) main_cset_slider_pane_g10

0xb1ff,	// (0x0003b965) main_cset_slider_pane_g11_ParamLimits

0xb1ff,	// (0x0003b965) main_cset_slider_pane_g11

0xb20b,	// (0x0003b971) main_cset_slider_pane_g12_ParamLimits

0xb20b,	// (0x0003b971) main_cset_slider_pane_g12

0xb217,	// (0x0003b97d) main_cset_slider_pane_g13_ParamLimits

0xb217,	// (0x0003b97d) main_cset_slider_pane_g13

0xb223,	// (0x0003b989) main_cset_slider_pane_g14_ParamLimits

0xb223,	// (0x0003b989) main_cset_slider_pane_g14

0xb22f,	// (0x0003b995) main_cset_slider_pane_g15_ParamLimits

0xb22f,	// (0x0003b995) main_cset_slider_pane_g15

0x233a,	// (0x00032aa0) main_cset_slider_pane_t14_ParamLimits

0x233a,	// (0x00032aa0) main_cset_slider_pane_t14

0x2373,	// (0x00032ad9) main_cset_slider_pane_t15_ParamLimits

0x2373,	// (0x00032ad9) main_cset_slider_pane_t15

0xb705,	// (0x0003be6b) aid_cam4_burst_size_cell_ParamLimits

0xb705,	// (0x0003be6b) aid_cam4_burst_size_cell

0xb721,	// (0x0003be87) grid_cam4_burst_pane_ParamLimits

0xb721,	// (0x0003be87) grid_cam4_burst_pane

0xb745,	// (0x0003beab) linegrid_cam4_burst_pane_ParamLimits

0xb745,	// (0x0003beab) linegrid_cam4_burst_pane

0xb763,	// (0x0003bec9) scroll_pane_cp30_ParamLimits

0xb763,	// (0x0003bec9) scroll_pane_cp30

0xb76f,	// (0x0003bed5) cell_cam4_burst_pane_ParamLimits

0xb76f,	// (0x0003bed5) cell_cam4_burst_pane

0x2519,	// (0x00032c7f) linegrid_cam4_burst_pane_g1_ParamLimits

0x2519,	// (0x00032c7f) linegrid_cam4_burst_pane_g1

0xb7a7,	// (0x0003bf0d) linegrid_cam4_burst_pane_g2_ParamLimits

0xb7a7,	// (0x0003bf0d) linegrid_cam4_burst_pane_g2

0x2526,	// (0x00032c8c) linegrid_cam4_burst_pane_g3_ParamLimits

0x2526,	// (0x00032c8c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x000401ba) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x000401ba) linegrid_cam4_burst_pane_g

0xb7b8,	// (0x0003bf1e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb7b8,	// (0x0003bf1e) linegrid_cam4_burst_pane_g3_copy1

0x2533,	// (0x00032c99) linegrid_cam4_burst_pane_g4_ParamLimits

0x2533,	// (0x00032c99) linegrid_cam4_burst_pane_g4

0xb7d2,	// (0x0003bf38) linegrid_cam4_burst_pane_g5_ParamLimits

0xb7d2,	// (0x0003bf38) linegrid_cam4_burst_pane_g5

0xb7e3,	// (0x0003bf49) linegrid_cam4_burst_pane_g6_ParamLimits

0xb7e3,	// (0x0003bf49) linegrid_cam4_burst_pane_g6

0x2540,	// (0x00032ca6) linegrid_cam4_burst_pane_g7_ParamLimits

0x2540,	// (0x00032ca6) linegrid_cam4_burst_pane_g7

0xb7f4,	// (0x0003bf5a) cell_cam4_burst_pane_g1

0x2559,	// (0x00032cbf) main_cam5_pane_t1_ParamLimits

0x2559,	// (0x00032cbf) main_cam5_pane_t1

0x256b,	// (0x00032cd1) main_cam5_pane_t2_ParamLimits

0x256b,	// (0x00032cd1) main_cam5_pane_t2

0x257d,	// (0x00032ce3) main_cam5_pane_t3_ParamLimits

0x257d,	// (0x00032ce3) main_cam5_pane_t3

0x258f,	// (0x00032cf5) main_cam5_pane_t4_ParamLimits

0x258f,	// (0x00032cf5) main_cam5_pane_t4

0x25a5,	// (0x00032d0b) main_cam5_pane_t5_ParamLimits

0x25a5,	// (0x00032d0b) main_cam5_pane_t5

0x25b7,	// (0x00032d1d) main_cam5_pane_t6_ParamLimits

0x25b7,	// (0x00032d1d) main_cam5_pane_t6

0x25c9,	// (0x00032d2f) main_cam5_pane_t7_ParamLimits

0x25c9,	// (0x00032d2f) main_cam5_pane_t7

0x25db,	// (0x00032d41) main_cam5_pane_t8_ParamLimits

0x25db,	// (0x00032d41) main_cam5_pane_t8

0x25f7,	// (0x00032d5d) main_cam5_pane_t9_ParamLimits

0x25f7,	// (0x00032d5d) main_cam5_pane_t9

0x2609,	// (0x00032d6f) main_cam5_pane_t10_ParamLimits

0x2609,	// (0x00032d6f) main_cam5_pane_t10

0x261b,	// (0x00032d81) main_cam5_pane_t11_ParamLimits

0x261b,	// (0x00032d81) main_cam5_pane_t11

0x262d,	// (0x00032d93) main_cam5_pane_t12_ParamLimits

0x262d,	// (0x00032d93) main_cam5_pane_t12

0x2642,	// (0x00032da8) main_cam5_pane_t13_ParamLimits

0x2642,	// (0x00032da8) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x000401c6) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x000401c6) main_cam5_pane_t

0x64e1,	// (0x00036c47) popup_scut_keymap_window_ParamLimits

0x64e1,	// (0x00036c47) popup_scut_keymap_window

0xb807,	// (0x0003bf6d) aid_size_cell_brow_shortcut

0xdd26,	// (0x0003e48c) bg_popup_window_pane_cp010

0xb813,	// (0x0003bf79) grid_scut_pane

0xb81d,	// (0x0003bf83) cell_scut_pane_ParamLimits

0xb81d,	// (0x0003bf83) cell_scut_pane

0xb832,	// (0x0003bf98) cell_scut_pane_g1

0x265f,	// (0x00032dc5) cell_scut_pane_t1

0x266e,	// (0x00032dd4) cell_scut_pane_t2

0xb83b,	// (0x0003bfa1) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x000401e1) cell_scut_pane_t

0x9a3b,	// (0x0003a1a1) main_mup3_pane_g8_ParamLimits

0x9a3b,	// (0x0003a1a1) main_mup3_pane_g8

0xad4f,	// (0x0003b4b5) area_vitu2_query_pane_ParamLimits

0xad4f,	// (0x0003b4b5) area_vitu2_query_pane

0x5496,	// (0x00035bfc) input_focus_pane_cp08

0x267d,	// (0x00032de3) area_vitu2_query_pane_g1

0x5593,	// (0x00035cf9) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x000401e8) area_vitu2_query_pane_g

0xb849,	// (0x0003bfaf) area_vitu2_query_pane_t1_ParamLimits

0xb849,	// (0x0003bfaf) area_vitu2_query_pane_t1

0xb85b,	// (0x0003bfc1) area_vitu2_query_pane_t2_ParamLimits

0xb85b,	// (0x0003bfc1) area_vitu2_query_pane_t2

0x55a2,	// (0x00035d08) area_vitu2_query_pane_t3_ParamLimits

0x55a2,	// (0x00035d08) area_vitu2_query_pane_t3

0x55ca,	// (0x00035d30) area_vitu2_query_pane_t4_ParamLimits

0x55ca,	// (0x00035d30) area_vitu2_query_pane_t4

0x55f2,	// (0x00035d58) area_vitu2_query_pane_t5_ParamLimits

0x55f2,	// (0x00035d58) area_vitu2_query_pane_t5

0x561a,	// (0x00035d80) area_vitu2_query_pane_t6_ParamLimits

0x561a,	// (0x00035d80) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x000401ed) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x000401ed) area_vitu2_query_pane_t

0xb86d,	// (0x0003bfd3) bg_button_pane_cp018

0xb87a,	// (0x0003bfe0) bg_button_pane_cp021

0x5666,	// (0x00035dcc) bg_button_pane_cp022

0x5675,	// (0x00035ddb) input_focus_pane_cp09

0xe5ad,	// (0x0003ed13) aid_size_touch_mv_arrow_left

0xe5d6,	// (0x0003ed3c) aid_size_touch_mv_arrow_right

0x22e8,	// (0x00032a4e) main_cset_slider_pane_g16_ParamLimits

0x22e8,	// (0x00032a4e) main_cset_slider_pane_g16

0x22f4,	// (0x00032a5a) main_cset_slider_pane_g17_ParamLimits

0x22f4,	// (0x00032a5a) main_cset_slider_pane_g17

0xb7f4,	// (0x0003bf5a) cell_cam4_burst_pane_g1_ParamLimits

0xd3fa,	// (0x0003db60) compa_mode_pane

0xb427,	// (0x0003bb8d) popup_vtel_slider_window_g3_ParamLimits

0xb427,	// (0x0003bb8d) popup_vtel_slider_window_g3

0xb43b,	// (0x0003bba1) popup_vtel_slider_window_g4_ParamLimits

0xb43b,	// (0x0003bba1) popup_vtel_slider_window_g4

0xb44f,	// (0x0003bbb5) popup_vtel_slider_window_t1_ParamLimits

0xb44f,	// (0x0003bbb5) popup_vtel_slider_window_t1

0xd3fa,	// (0x0003db60) main_cl_pane

0x8e73,	// (0x000395d9) popup_imed_adjust2_window_ParamLimits

0x0edd,	// (0x00031643) bg_tb_trans_pane_cp05_ParamLimits

0x18e1,	// (0x00032047) popup_imed_adjust2_window_g1_ParamLimits

0x18f0,	// (0x00032056) popup_imed_adjust2_window_g2_ParamLimits

0x18f0,	// (0x00032056) popup_imed_adjust2_window_g2

0x18fc,	// (0x00032062) popup_imed_adjust2_window_g3_ParamLimits

0x18fc,	// (0x00032062) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0003ff58) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0003ff58) popup_imed_adjust2_window_g

0x1908,	// (0x0003206e) popup_imed_adjust2_window_t1_ParamLimits

0x1920,	// (0x00032086) slider_imed_adjust_pane_ParamLimits

0x1934,	// (0x0003209a) slider_imed_adjust_pane_g1_ParamLimits

0x1944,	// (0x000320aa) slider_imed_adjust_pane_g2_ParamLimits

0x1954,	// (0x000320ba) slider_imed_adjust_pane_g3_ParamLimits

0x1965,	// (0x000320cb) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0003ff5f) slider_imed_adjust_pane_g_ParamLimits

0xaab2,	// (0x0003b218) aid_touch_area_cam4_ParamLimits

0xaab2,	// (0x0003b218) aid_touch_area_cam4

0xaac0,	// (0x0003b226) battery_pane_cp01

0xab3f,	// (0x0003b2a5) main_camera4_pane_g6_ParamLimits

0xab3f,	// (0x0003b2a5) main_camera4_pane_g6

0xab5d,	// (0x0003b2c3) main_camera4_pane_t2_ParamLimits

0xab5d,	// (0x0003b2c3) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00040062) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00040062) main_camera4_pane_t

0xabde,	// (0x0003b344) aid_touch_area_vid4_ParamLimits

0xabde,	// (0x0003b344) aid_touch_area_vid4

0xac1c,	// (0x0003b382) main_video4_pane_g5_ParamLimits

0xac1c,	// (0x0003b382) main_video4_pane_g5

0xac3e,	// (0x0003b3a4) vid4_progress_pane_ParamLimits

0xac3e,	// (0x0003b3a4) vid4_progress_pane

0x2300,	// (0x00032a66) main_cset_slider_pane_g18_ParamLimits

0x2300,	// (0x00032a66) main_cset_slider_pane_g18

0x254d,	// (0x00032cb3) cell_cam4_burst_pane_g2_ParamLimits

0x254d,	// (0x00032cb3) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x000401c1) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000401c1) cell_cam4_burst_pane_g

0xb886,	// (0x0003bfec) bg_cl_pane_ParamLimits

0xb886,	// (0x0003bfec) bg_cl_pane

0xb892,	// (0x0003bff8) cl_header_pane_ParamLimits

0xb892,	// (0x0003bff8) cl_header_pane

0xb89e,	// (0x0003c004) cl_listscroll_pane_ParamLimits

0xb89e,	// (0x0003c004) cl_listscroll_pane

0x2725,	// (0x00032e8b) bg_cl_pane_g1

0x272d,	// (0x00032e93) bg_cl_pane_g2

0x2735,	// (0x00032e9b) bg_cl_pane_g3

0x273d,	// (0x00032ea3) bg_cl_pane_g4

0x2745,	// (0x00032eab) bg_cl_pane_g5

0x274d,	// (0x00032eb3) bg_cl_pane_g6

0x2755,	// (0x00032ebb) bg_cl_pane_g7

0x275d,	// (0x00032ec3) bg_cl_pane_g8

0x2765,	// (0x00032ecb) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x000401fc) bg_cl_pane_g

0xb8aa,	// (0x0003c010) aid_height_cl_leading_ParamLimits

0xb8aa,	// (0x0003c010) aid_height_cl_leading

0xb8b6,	// (0x0003c01c) aid_height_cl_text_ParamLimits

0xb8b6,	// (0x0003c01c) aid_height_cl_text

0x4091,	// (0x000347f7) bg_cl_header_pane_ParamLimits

0x4091,	// (0x000347f7) bg_cl_header_pane

0xb8ce,	// (0x0003c034) cl_header_pane_g1_ParamLimits

0xb8ce,	// (0x0003c034) cl_header_pane_g1

0xb8db,	// (0x0003c041) cl_header_pane_t1_ParamLimits

0xb8db,	// (0x0003c041) cl_header_pane_t1

0x276d,	// (0x00032ed3) cl_list_pane

0x2291,	// (0x000329f7) hc_scroll_pane_cp01

0xdf6c,	// (0x0003e6d2) bg_cl_header_pane_g1

0x2177,	// (0x000328dd) bg_cl_header_pane_g2

0xdf8c,	// (0x0003e6f2) bg_cl_header_pane_g3

0x2187,	// (0x000328ed) bg_cl_header_pane_g4

0x217f,	// (0x000328e5) bg_cl_header_pane_g5

0x2434,	// (0x00032b9a) bg_cl_header_pane_g6

0x219f,	// (0x00032905) bg_cl_header_pane_g7

0x21a7,	// (0x0003290d) bg_cl_header_pane_g8

0x2197,	// (0x000328fd) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0004020f) bg_cl_header_pane_g

0xb8ed,	// (0x0003c053) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb8ed,	// (0x0003c053) hc_cl_list_double_graphic_heading_pane

0xb8fa,	// (0x0003c060) hc_cl_list_single_graphic_pane_ParamLimits

0xb8fa,	// (0x0003c060) hc_cl_list_single_graphic_pane

0xb90b,	// (0x0003c071) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb90b,	// (0x0003c071) hc_cl_list_single_graphic_pane_g1

0xb917,	// (0x0003c07d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb917,	// (0x0003c07d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00040222) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00040222) hc_cl_list_single_graphic_pane_g

0xb92b,	// (0x0003c091) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb92b,	// (0x0003c091) hc_cl_list_single_graphic_pane_t1

0xb90b,	// (0x0003c071) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb90b,	// (0x0003c071) hc_cl_list_double_graphic_heading_pane_g1

0xb940,	// (0x0003c0a6) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb940,	// (0x0003c0a6) hc_cl_list_double_graphic_heading_pane_g2

0xb954,	// (0x0003c0ba) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb954,	// (0x0003c0ba) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00040227) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00040227) hc_cl_list_double_graphic_heading_pane_g

0xb968,	// (0x0003c0ce) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb968,	// (0x0003c0ce) hc_cl_list_double_graphic_heading_pane_t1

0xb97d,	// (0x0003c0e3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb97d,	// (0x0003c0e3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0004022e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0004022e) hc_cl_list_double_graphic_heading_pane_t

0xb99a,	// (0x0003c100) vid4_progress_pane_g1

0xb9aa,	// (0x0003c110) vid4_progress_pane_g2

0xb9ba,	// (0x0003c120) vid4_progress_pane_g3

0xb9ca,	// (0x0003c130) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00040233) vid4_progress_pane_g

0xb9e8,	// (0x0003c14e) vid4_progress_pane_t1

0xb9fe,	// (0x0003c164) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0004023e) vid4_progress_pane_t

0xba29,	// (0x0003c18f) wait_bar_pane_cp07

0x11da,	// (0x00031940) blid_firmament_pane_ParamLimits

0x121b,	// (0x00031981) popup_blid_sat_info2_window_g1

0x123f,	// (0x000319a5) popup_blid_sat_info2_window_t3

0x124d,	// (0x000319b3) popup_blid_sat_info2_window_t4

0x125b,	// (0x000319c1) popup_blid_sat_info2_window_t5

0x1269,	// (0x000319cf) popup_blid_sat_info2_window_t6

0x1279,	// (0x000319df) popup_blid_sat_info2_window_t7

0x1287,	// (0x000319ed) popup_blid_sat_info2_window_t8

0x1295,	// (0x000319fb) popup_blid_sat_info2_window_t9

0x12a3,	// (0x00031a09) popup_blid_sat_info2_window_t10

0x135f,	// (0x00031ac5) aid_firma_cardinal_ParamLimits

0x1373,	// (0x00031ad9) blid_firmament_pane_t1_ParamLimits

0x138a,	// (0x00031af0) blid_firmament_pane_t2_ParamLimits

0x13a1,	// (0x00031b07) blid_firmament_pane_t3_ParamLimits

0x13b8,	// (0x00031b1e) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0003fe4c) blid_firmament_pane_t_ParamLimits

0x13cf,	// (0x00031b35) blid_sat_info_pane_ParamLimits

0xf0b0,	// (0x0003f816) main_cam_set_pane_ParamLimits

0xa185,	// (0x0003a8eb) aid_size_cell_colour_35_ParamLimits

0xa19f,	// (0x0003a905) aid_size_cell_colour_112_ParamLimits

0xa1b6,	// (0x0003a91c) aid_size_cell_effect_ParamLimits

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp02_ParamLimits

0xf0be,	// (0x0003f824) heading_imed_pane_ParamLimits

0xa1d0,	// (0x0003a936) listscroll_imed_pane_ParamLimits

0x04c3,	// (0x00030c29) popup_call2_audio_first_window_g5_ParamLimits

0x04c3,	// (0x00030c29) popup_call2_audio_first_window_g5

0xa863,	// (0x0003afc9) aid_size_touch_image3_arrow_left_ParamLimits

0xa863,	// (0x0003afc9) aid_size_touch_image3_arrow_left

0xa877,	// (0x0003afdd) aid_size_touch_image3_arrow_right_ParamLimits

0xa877,	// (0x0003afdd) aid_size_touch_image3_arrow_right

0xba13,	// (0x0003c179) vid4_progress_pane_t3

0xa431,	// (0x0003ab97) main_hwr_training_symbol_option_pane_ParamLimits

0xa431,	// (0x0003ab97) main_hwr_training_symbol_option_pane

0x1bc0,	// (0x00032326) popup_hwr_training_preview_window_ParamLimits

0x1bc0,	// (0x00032326) popup_hwr_training_preview_window

0xa48c,	// (0x0003abf2) hwr_training_navi_pane_g5_ParamLimits

0xa48c,	// (0x0003abf2) hwr_training_navi_pane_g5

0x2153,	// (0x000328b9) popup_char_count_window

0x4091,	// (0x000347f7) bg_popup_sub_pane_cp20_ParamLimits

0xb53c,	// (0x0003bca2) list_vitu2_match_list_pane_ParamLimits

0xb548,	// (0x0003bcae) vitu2_page_scroll_pane_ParamLimits

0xb548,	// (0x0003bcae) vitu2_page_scroll_pane

0x2812,	// (0x00032f78) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2812,	// (0x00032f78) list_single_hwr_training_symbol_option_pane

0x2825,	// (0x00032f8b) list_single_hwr_training_symbol_option_pane_g1

0x282d,	// (0x00032f93) list_single_hwr_training_symbol_option_pane_t1

0x2809,	// (0x00032f6f) bg_button_pane_cp023

0x283b,	// (0x00032fa1) bg_button_pane_cp024

0xba55,	// (0x0003c1bb) vitu2_page_scroll_pane_g1

0xba5d,	// (0x0003c1c3) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00040245) vitu2_page_scroll_pane_g

0xba65,	// (0x0003c1cb) vitu2_page_scroll_pane_t1

0x1408,	// (0x00031b6e) popup_char_count_window_g1

0x286e,	// (0x00032fd4) popup_char_count_window_g2

0x2877,	// (0x00032fdd) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0004024a) popup_char_count_window_g

0x2880,	// (0x00032fe6) popup_char_count_window_t1

0xd3fa,	// (0x0003db60) main_vded2_pane

0x18cf,	// (0x00032035) aid_size_cell_imed_line

0x18d9,	// (0x0003203f) grid_imed_line_width_pane

0xaca8,	// (0x0003b40e) vid4_indicators_pane_g4

0x288e,	// (0x00032ff4) cell_imed_line_width_pane_ParamLimits

0x288e,	// (0x00032ff4) cell_imed_line_width_pane

0x28a0,	// (0x00033006) cell_imed_line_width_pane_g1

0x1188,	// (0x000318ee) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00040251) cell_imed_line_width_pane_g

0xba74,	// (0x0003c1da) main_vded2_pane_g1_ParamLimits

0xba74,	// (0x0003c1da) main_vded2_pane_g1

0xba81,	// (0x0003c1e7) main_vded2_pane_g2_ParamLimits

0xba81,	// (0x0003c1e7) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00040256) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00040256) main_vded2_pane_g

0xba8d,	// (0x0003c1f3) vded2_slider_pane_ParamLimits

0xba8d,	// (0x0003c1f3) vded2_slider_pane

0xba9a,	// (0x0003c200) aid_size_touch_vded2_end

0xbaa2,	// (0x0003c208) aid_size_touch_vded2_playhead

0x28a9,	// (0x0003300f) aid_size_touch_vded2_start

0x28b1,	// (0x00033017) vded2_slider_bg_pane

0x28ba,	// (0x00033020) vded2_slider_pane_g1

0x28c3,	// (0x00033029) vded2_slider_pane_g2

0xbaaa,	// (0x0003c210) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0004025b) vded2_slider_pane_g

0x28cb,	// (0x00033031) vded2_slider_bg_pane_g1

0x28d4,	// (0x0003303a) vded2_slider_bg_pane_g2

0x28dd,	// (0x00033043) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00040262) vded2_slider_bg_pane_g

0x87b0,	// (0x00038f16) aid_postcard_touch_down_pane_ParamLimits

0x87b0,	// (0x00038f16) aid_postcard_touch_down_pane

0x87bc,	// (0x00038f22) aid_postcard_touch_up_pane_ParamLimits

0x87bc,	// (0x00038f22) aid_postcard_touch_up_pane

0xd3fa,	// (0x0003db60) main_blid2_pane

0x8e10,	// (0x00039576) popup_blid2_search_window

0xd3fa,	// (0x0003db60) blid2_gps_pane

0xd3fa,	// (0x0003db60) blid2_navig_pane

0xd3fa,	// (0x0003db60) blid2_search_pane

0xd3fa,	// (0x0003db60) blid2_tripm_pane

0xbab3,	// (0x0003c219) blid2_search_pane_g1_ParamLimits

0xbab3,	// (0x0003c219) blid2_search_pane_g1

0xbabf,	// (0x0003c225) blid2_search_pane_t1_ParamLimits

0xbabf,	// (0x0003c225) blid2_search_pane_t1

0xbad1,	// (0x0003c237) aid_size_cell_blid2_gps_ParamLimits

0xbad1,	// (0x0003c237) aid_size_cell_blid2_gps

0xbae1,	// (0x0003c247) blid2_gps_pane_g1_ParamLimits

0xbae1,	// (0x0003c247) blid2_gps_pane_g1

0xbaed,	// (0x0003c253) grid_blid2_satellite_pane_ParamLimits

0xbaed,	// (0x0003c253) grid_blid2_satellite_pane

0xbaf9,	// (0x0003c25f) blid2_navig_pane_g1_ParamLimits

0xbaf9,	// (0x0003c25f) blid2_navig_pane_g1

0xbb05,	// (0x0003c26b) blid2_navig_pane_t1_ParamLimits

0xbb05,	// (0x0003c26b) blid2_navig_pane_t1

0xbb17,	// (0x0003c27d) blid2_navig_pane_t2_ParamLimits

0xbb17,	// (0x0003c27d) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00040269) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00040269) blid2_navig_pane_t

0xbb29,	// (0x0003c28f) blid2_navig_ring_pane_ParamLimits

0xbb29,	// (0x0003c28f) blid2_navig_ring_pane

0xbb35,	// (0x0003c29b) blid2_speed_pane_ParamLimits

0xbb35,	// (0x0003c29b) blid2_speed_pane

0xbb41,	// (0x0003c2a7) blid2_tripm_pane_g1_ParamLimits

0xbb41,	// (0x0003c2a7) blid2_tripm_pane_g1

0xbb4d,	// (0x0003c2b3) blid2_tripm_pane_g2_ParamLimits

0xbb4d,	// (0x0003c2b3) blid2_tripm_pane_g2

0xbb59,	// (0x0003c2bf) blid2_tripm_pane_g3_ParamLimits

0xbb59,	// (0x0003c2bf) blid2_tripm_pane_g3

0xbb65,	// (0x0003c2cb) blid2_tripm_pane_g4_ParamLimits

0xbb65,	// (0x0003c2cb) blid2_tripm_pane_g4

0xbb71,	// (0x0003c2d7) blid2_tripm_pane_g5_ParamLimits

0xbb71,	// (0x0003c2d7) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0004026e) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0004026e) blid2_tripm_pane_g

0xbb89,	// (0x0003c2ef) blid2_tripm_pane_t1_ParamLimits

0xbb89,	// (0x0003c2ef) blid2_tripm_pane_t1

0xbb9b,	// (0x0003c301) blid2_tripm_pane_t2_ParamLimits

0xbb9b,	// (0x0003c301) blid2_tripm_pane_t2

0xbbad,	// (0x0003c313) blid2_tripm_pane_t3_ParamLimits

0xbbad,	// (0x0003c313) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0004027b) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0004027b) blid2_tripm_pane_t

0xbbdd,	// (0x0003c343) cell_blid2_satellite_pane_ParamLimits

0xbbdd,	// (0x0003c343) cell_blid2_satellite_pane

0xbbf5,	// (0x0003c35b) cell_blid2_satellite_pane_g1

0x28e6,	// (0x0003304c) cell_blid2_satellite_pane_t1

0x13df,	// (0x00031b45) blid2_speed_pane_g1

0x28f4,	// (0x0003305a) blid2_speed_pane_t1

0x2902,	// (0x00033068) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00040284) blid2_speed_pane_t

0x13df,	// (0x00031b45) blid2_navig_ring_pane_g1

0xbbfe,	// (0x0003c364) blid2_navig_ring_pane_g2

0xbc06,	// (0x0003c36c) blid2_navig_ring_pane_g3

0xbc0e,	// (0x0003c374) blid2_navig_ring_pane_g4

0xbc16,	// (0x0003c37c) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00040289) blid2_navig_ring_pane_g

0xd3fa,	// (0x0003db60) bg_popup_window_pane_cp011

0x2910,	// (0x00033076) popup_blid2_search_window_g1

0x2918,	// (0x0003307e) popup_blid2_search_window_t1

0x2926,	// (0x0003308c) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00040294) popup_blid2_search_window_t

0xde7b,	// (0x0003e5e1) main_browser_pane_g1

0xdb75,	// (0x0003e2db) main_browser_pane_ParamLimits

0xf0b0,	// (0x0003f816) bg_button_pane_cp011_ParamLimits

0xaec6,	// (0x0003b62c) cell_vitu2_function_pane_g1_ParamLimits

0x0edd,	// (0x00031643) bg_popup_sub_pane_cp22_ParamLimits

0x5496,	// (0x00035bfc) input_focus_pane_cp08_ParamLimits

0xb6ba,	// (0x0003be20) popup_vitu2_query_button_pane_ParamLimits

0xb6ba,	// (0x0003be20) popup_vitu2_query_button_pane

0x54ad,	// (0x00035c13) popup_vitu2_query_input_button_pane

0x2497,	// (0x00032bfd) popup_vitu2_query_window_g1_ParamLimits

0x54b5,	// (0x00035c1b) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00040195) popup_vitu2_query_window_g_ParamLimits

0xd3fa,	// (0x0003db60) bg_button_pane_cp026

0xbc1e,	// (0x0003c384) popup_vitu2_query_input_button_pane_g1

0xd3fa,	// (0x0003db60) bg_button_pane_cp025

0x2934,	// (0x0003309a) popup_vitu2_query_button_pane_t1

0x97d3,	// (0x00039f39) main_mp3_pane_t6

0x97e1,	// (0x00039f47) popup_slider_window_cp01

0xab93,	// (0x0003b2f9) cam4_battery_pane

0xac67,	// (0x0003b3cd) cam4_battery_pane_cp02

0xb992,	// (0x0003c0f8) cam4_battery_pane_cp01

0xb992,	// (0x0003c0f8) cam4_battery_pane_cp03

0x13df,	// (0x00031b45) cam4_battery_pane_g1

0x1ee9,	// (0x0003264f) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00040299) cam4_battery_pane_g

0x12b1,	// (0x00031a17) popup_blid_sat_info2_window_t11

0xe5ad,	// (0x0003ed13) aid_size_touch_mv_arrow_left_ParamLimits

0xe5d6,	// (0x0003ed3c) aid_size_touch_mv_arrow_right_ParamLimits

0xe634,	// (0x0003ed9a) navi_pane_g1_ParamLimits

0xe640,	// (0x0003eda6) navi_pane_g2_ParamLimits

0xe66e,	// (0x0003edd4) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003fb4b) navi_pane_g_ParamLimits

0x828d,	// (0x000389f3) navi_pane_mv_t1_ParamLimits

0xa1dc,	// (0x0003a942) grid_imed_effect_pane_ParamLimits

0x73b3,	// (0x00037b19) aid_placing_vt_slider_lsc

0xddbd,	// (0x0003e523) aid_placing_vt_slider_prt

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp01_ParamLimits

0x152e,	// (0x00031c94) popup_image_details_window_g1_ParamLimits

0x1541,	// (0x00031ca7) popup_image_details_window_g2_ParamLimits

0x1556,	// (0x00031cbc) popup_image_details_window_g3_ParamLimits

0x1556,	// (0x00031cbc) popup_image_details_window_g3

0xf72b,	// (0x0003fe91) popup_image_details_window_g_ParamLimits

0x156a,	// (0x00031cd0) popup_image_details_window_t1_ParamLimits

0x157c,	// (0x00031ce2) popup_image_details_window_t2_ParamLimits

0x1595,	// (0x00031cfb) popup_image_details_window_t3_ParamLimits

0x15a9,	// (0x00031d0f) popup_image_details_window_t4_ParamLimits

0x15c4,	// (0x00031d2a) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0003fe98) popup_image_details_window_t_ParamLimits

0xb8c2,	// (0x0003c028) cl_header_name_pane_ParamLimits

0xb8c2,	// (0x0003c028) cl_header_name_pane

0xbc26,	// (0x0003c38c) cl_header_name_pane_t1_ParamLimits

0xbc26,	// (0x0003c38c) cl_header_name_pane_t1

0xbc3d,	// (0x0003c3a3) cl_header_name_pane_t2_ParamLimits

0xbc3d,	// (0x0003c3a3) cl_header_name_pane_t2

0xbc67,	// (0x0003c3cd) cl_header_name_pane_t3_ParamLimits

0xbc67,	// (0x0003c3cd) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0004029e) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0004029e) cl_header_name_pane_t

0xe6fb,	// (0x0003ee61) navi_pane_mv_g2_ParamLimits

0x2110,	// (0x00032876) field_vitu2_entry_pane_g1_ParamLimits

0x211c,	// (0x00032882) field_vitu2_entry_pane_g2_ParamLimits

0x2128,	// (0x0003288e) field_vitu2_entry_pane_g3_ParamLimits

0x2128,	// (0x0003288e) field_vitu2_entry_pane_g3

0xf92e,	// (0x00040094) field_vitu2_entry_pane_g_ParamLimits

0xae5a,	// (0x0003b5c0) cell_vitu2_itu_pane_g1_ParamLimits

0xae6c,	// (0x0003b5d2) cell_vitu2_itu_pane_g2_ParamLimits

0xae6c,	// (0x0003b5d2) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x000400a0) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x000400a0) cell_vitu2_itu_pane_g

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp05_ParamLimits

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp05

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp03

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp04

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp10_ParamLimits

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp10

0x5666,	// (0x00035dcc) bg_vkb2_func_pane_cp08

0xb86d,	// (0x0003bfd3) bg_vkb2_func_pane_cp06

0xb87a,	// (0x0003bfe0) bg_vkb2_func_pane_cp07

0x2844,	// (0x00032faa) bg_vkb2_func_pane_cp11_ParamLimits

0x2844,	// (0x00032faa) bg_vkb2_func_pane_cp11

0x2859,	// (0x00032fbf) bg_vkb2_func_pane_cp12_ParamLimits

0x2859,	// (0x00032fbf) bg_vkb2_func_pane_cp12

0xd3fa,	// (0x0003db60) bg_vkb2_func_pane_cp09

0x2177,	// (0x000328dd) bg_vkb2_func_pane_g1

0xdf8c,	// (0x0003e6f2) bg_vkb2_func_pane_g2

0x217f,	// (0x000328e5) bg_vkb2_func_pane_g3

0x2187,	// (0x000328ed) bg_vkb2_func_pane_g4

0x2434,	// (0x00032b9a) bg_vkb2_func_pane_g5

0x219f,	// (0x00032905) bg_vkb2_func_pane_g6

0x21a7,	// (0x0003290d) bg_vkb2_func_pane_g7

0x2197,	// (0x000328fd) bg_vkb2_func_pane_g8

0xdf6c,	// (0x0003e6d2) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x000402a5) bg_vkb2_func_pane_g

0xbb7d,	// (0x0003c2e3) blid2_tripm_pane_g6_ParamLimits

0xbb7d,	// (0x0003c2e3) blid2_tripm_pane_g6

0x1ea7,	// (0x0003260d) mp4_progress_pane_g1

0xbbd1,	// (0x0003c337) blid2_tripm_values_pane_ParamLimits

0xbbd1,	// (0x0003c337) blid2_tripm_values_pane

0xbc8c,	// (0x0003c3f2) blid2_tripm_values_pane_t1

0xbc9a,	// (0x0003c400) blid2_tripm_values_pane_t2

0xbca8,	// (0x0003c40e) blid2_tripm_values_pane_t3

0xbcb6,	// (0x0003c41c) blid2_tripm_values_pane_t4

0xbcc4,	// (0x0003c42a) blid2_tripm_values_pane_t5

0xbcd2,	// (0x0003c438) blid2_tripm_values_pane_t6

0xbce0,	// (0x0003c446) blid2_tripm_values_pane_t7

0xbcee,	// (0x0003c454) blid2_tripm_values_pane_t8

0xbcfc,	// (0x0003c462) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x000402b8) blid2_tripm_values_pane_t

0x73ed,	// (0x00037b53) call_video_pane_t1_ParamLimits

0x740a,	// (0x00037b70) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003f9d4) call_video_pane_t_ParamLimits

0x51f4,	// (0x0003595a) msg_header_pane_g1_ParamLimits

0xe8a8,	// (0x0003f00e) msg_header_pane_g2_ParamLimits

0xe8a8,	// (0x0003f00e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003fbee) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003fbee) msg_header_pane_g

0xdb75,	// (0x0003e2db) main_clock2_pane_ParamLimits

0x9f7e,	// (0x0003a6e4) grid_clock2_toolbar_pane_ParamLimits

0x9f7e,	// (0x0003a6e4) grid_clock2_toolbar_pane

0x9f7e,	// (0x0003a6e4) listscroll_clock2_pane_ParamLimits

0x9f7e,	// (0x0003a6e4) listscroll_clock2_pane

0xa01a,	// (0x0003a780) main_clock2_pane_t3_ParamLimits

0xa01a,	// (0x0003a780) main_clock2_pane_t3

0xa02c,	// (0x0003a792) main_clock2_pane_t4_ParamLimits

0xa02c,	// (0x0003a792) main_clock2_pane_t4

0x2942,	// (0x000330a8) cell_clock2_toolbar_pane

0x294a,	// (0x000330b0) cell_clock2_toolbar_pane_cp01

0x294a,	// (0x000330b0) cell_clock2_toolbar_pane_cp02

0x2952,	// (0x000330b8) cell_clock2_toolbar_pane_cp03

0x295a,	// (0x000330c0) list_clock2_pane

0xe532,	// (0x0003ec98) scroll_pane_cp10

0x2962,	// (0x000330c8) list_single_clock2_pane_ParamLimits

0x2962,	// (0x000330c8) list_single_clock2_pane

0xdd26,	// (0x0003e48c) list_highlight_pane_cp08

0x296f,	// (0x000330d5) list_single_clock2_pane_t1

0x297d,	// (0x000330e3) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x000402cb) list_single_clock2_pane_t

0xd3fa,	// (0x0003db60) bg_button_pane_cp10

0x298b,	// (0x000330f1) cell_clock2_toolbar_pane_g1

0x871a,	// (0x00038e80) aid_main_viewer_pane_g1_ParamLimits

0x871a,	// (0x00038e80) aid_main_viewer_pane_g1

0x8726,	// (0x00038e8c) aid_main_viewer_pane_g2_ParamLimits

0x8726,	// (0x00038e8c) aid_main_viewer_pane_g2

0x8732,	// (0x00038e98) aid_main_viewer_pane_g3_ParamLimits

0x8732,	// (0x00038e98) aid_main_viewer_pane_g3

0x8741,	// (0x00038ea7) aid_main_viewer_pane_g4_ParamLimits

0x8741,	// (0x00038ea7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003fbff) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003fbff) aid_main_viewer_pane_g

0x8de8,	// (0x0003954e) main_calc_pane_ParamLimits

0x8df5,	// (0x0003955b) main_dialer2_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_cam6_pane

0xd3fa,	// (0x0003db60) main_vid6_pane

0x9f8a,	// (0x0003a6f0) listscroll_gen_pane_cp06_ParamLimits

0x9f8a,	// (0x0003a6f0) listscroll_gen_pane_cp06

0xa03e,	// (0x0003a7a4) main_clock2_pane_t5_ParamLimits

0xa03e,	// (0x0003a7a4) main_clock2_pane_t5

0xa086,	// (0x0003a7ec) aid_call2_pane_cp10_ParamLimits

0xa098,	// (0x0003a7fe) aid_call_pane_cp10_ParamLimits

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa0aa,	// (0x0003a810) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa0aa,	// (0x0003a810) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe5a1,	// (0x0003ed07) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0003ff4d) popup_clock_analogue_window_cp10_g_ParamLimits

0xa0bc,	// (0x0003a822) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa810,	// (0x0003af76) cell_dialer2_keypad_pane_g2_ParamLimits

0xa810,	// (0x0003af76) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00040033) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00040033) cell_dialer2_keypad_pane_g

0xa82c,	// (0x0003af92) cell_dialer2_keypad_pane_t1

0xb15f,	// (0x0003b8c5) main_cset_text2_pane_ParamLimits

0xb15f,	// (0x0003b8c5) main_cset_text2_pane

0x267d,	// (0x00032de3) area_vitu2_query_pane_g1_ParamLimits

0x5593,	// (0x00035cf9) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x000401e8) area_vitu2_query_pane_g_ParamLimits

0x5642,	// (0x00035da8) area_vitu2_query_pane_t7_ParamLimits

0x5642,	// (0x00035da8) area_vitu2_query_pane_t7

0xb86d,	// (0x0003bfd3) bg_button_pane_cp018_ParamLimits

0xb87a,	// (0x0003bfe0) bg_button_pane_cp021_ParamLimits

0x5666,	// (0x00035dcc) bg_button_pane_cp022_ParamLimits

0x5666,	// (0x00035dcc) bg_vkb2_func_pane_cp08_ParamLimits

0xb86d,	// (0x0003bfd3) bg_vkb2_func_pane_cp06_ParamLimits

0xb87a,	// (0x0003bfe0) bg_vkb2_func_pane_cp07_ParamLimits

0x5675,	// (0x00035ddb) input_focus_pane_cp09_ParamLimits

0xbd0a,	// (0x0003c470) cam6_autofocus_pane_ParamLimits

0xbd0a,	// (0x0003c470) cam6_autofocus_pane

0xbd26,	// (0x0003c48c) cam6_image_uncrop_pane_ParamLimits

0xbd26,	// (0x0003c48c) cam6_image_uncrop_pane

0xbd49,	// (0x0003c4af) cam6_indi_pane_ParamLimits

0xbd49,	// (0x0003c4af) cam6_indi_pane

0xbd63,	// (0x0003c4c9) cam6_mode_pane_ParamLimits

0xbd63,	// (0x0003c4c9) cam6_mode_pane

0xbd77,	// (0x0003c4dd) cam6_timer_pane_ParamLimits

0xbd77,	// (0x0003c4dd) cam6_timer_pane

0xbd83,	// (0x0003c4e9) cam6_zoom_pane_ParamLimits

0xbd83,	// (0x0003c4e9) cam6_zoom_pane

0xbd99,	// (0x0003c4ff) cam6_mode_pane_g1_ParamLimits

0xbd99,	// (0x0003c4ff) cam6_mode_pane_g1

0xbda5,	// (0x0003c50b) cam6_mode_pane_g2_ParamLimits

0xbda5,	// (0x0003c50b) cam6_mode_pane_g2

0xbdb1,	// (0x0003c517) cam6_mode_pane_g3_ParamLimits

0xbdb1,	// (0x0003c517) cam6_mode_pane_g3

0xbdbd,	// (0x0003c523) cam6_mode_pane_g4_ParamLimits

0xbdbd,	// (0x0003c523) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x000402d0) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x000402d0) cam6_mode_pane_g

0x299f,	// (0x00033105) bg_tb_trans_pane_cp08_ParamLimits

0x299f,	// (0x00033105) bg_tb_trans_pane_cp08

0x29ad,	// (0x00033113) cam6_battery_pane_ParamLimits

0x29ad,	// (0x00033113) cam6_battery_pane

0x29c3,	// (0x00033129) cam6_indi_pane_g1_ParamLimits

0x29c3,	// (0x00033129) cam6_indi_pane_g1

0x29d5,	// (0x0003313b) cam6_indi_pane_g2_ParamLimits

0x29d5,	// (0x0003313b) cam6_indi_pane_g2

0x29e7,	// (0x0003314d) cam6_indi_pane_g3_ParamLimits

0x29e7,	// (0x0003314d) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x000402d9) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x000402d9) cam6_indi_pane_g

0x29f9,	// (0x0003315f) cam6_indi_pane_t1_ParamLimits

0x29f9,	// (0x0003315f) cam6_indi_pane_t1

0xacdb,	// (0x0003b441) cam6_autofocus_pane_g1

0xace3,	// (0x0003b449) cam6_autofocus_pane_g2

0xaceb,	// (0x0003b451) cam6_autofocus_pane_g3

0xacf3,	// (0x0003b459) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x000402e0) cam6_autofocus_pane_g

0x2a1f,	// (0x00033185) cam6_timer_pane_g1

0x2a27,	// (0x0003318d) cam6_timer_pane_t1

0x2a35,	// (0x0003319b) cam6_zoom_cont_pane

0x2a3d,	// (0x000331a3) cam6_zoom_pane_g1

0x2a45,	// (0x000331ab) cam6_zoom_pane_g2

0xbdc9,	// (0x0003c52f) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x000402e9) cam6_zoom_pane_g

0x13df,	// (0x00031b45) cam6_battery_pane_g1

0x13df,	// (0x00031b45) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0003fe55) cam6_battery_pane_g

0x2a4d,	// (0x000331b3) cam6_zoom_cont_pane_g1

0x2a56,	// (0x000331bc) cam6_zoom_cont_pane_g2

0x2a5f,	// (0x000331c5) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x000402f0) cam6_zoom_cont_pane_g

0xbde6,	// (0x0003c54c) cam6_mode_pane_cp_ParamLimits

0xbde6,	// (0x0003c54c) cam6_mode_pane_cp

0xbd83,	// (0x0003c4e9) cam6_zoom_pane_cp_ParamLimits

0xbd83,	// (0x0003c4e9) cam6_zoom_pane_cp

0xbdfa,	// (0x0003c560) vid6_image_uncrop_cif_pane_ParamLimits

0xbdfa,	// (0x0003c560) vid6_image_uncrop_cif_pane

0xbe1c,	// (0x0003c582) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe1c,	// (0x0003c582) vid6_image_uncrop_nhd_pane

0xbd26,	// (0x0003c48c) vid6_image_uncrop_vga_pane_ParamLimits

0xbd26,	// (0x0003c48c) vid6_image_uncrop_vga_pane

0xbe33,	// (0x0003c599) vid6_image_uncrop_wvga_pane_ParamLimits

0xbe33,	// (0x0003c599) vid6_image_uncrop_wvga_pane

0xbe4a,	// (0x0003c5b0) vid6_indi_pane_ParamLimits

0xbe4a,	// (0x0003c5b0) vid6_indi_pane

0x299f,	// (0x00033105) bg_tb_trans_pane_cp09_ParamLimits

0x299f,	// (0x00033105) bg_tb_trans_pane_cp09

0x2a73,	// (0x000331d9) cam6_battery_pane_cp_ParamLimits

0x2a73,	// (0x000331d9) cam6_battery_pane_cp

0x2a7f,	// (0x000331e5) vid6_indi_pane_g1_ParamLimits

0x2a7f,	// (0x000331e5) vid6_indi_pane_g1

0x2a91,	// (0x000331f7) vid6_indi_pane_g2_ParamLimits

0x2a91,	// (0x000331f7) vid6_indi_pane_g2

0x2aa3,	// (0x00033209) vid6_indi_pane_g3_ParamLimits

0x2aa3,	// (0x00033209) vid6_indi_pane_g3

0x2ab8,	// (0x0003321e) vid6_indi_pane_g4_ParamLimits

0x2ab8,	// (0x0003321e) vid6_indi_pane_g4

0x2acd,	// (0x00033233) vid6_indi_pane_g5_ParamLimits

0x2acd,	// (0x00033233) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x000402f7) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x000402f7) vid6_indi_pane_g

0x2ae7,	// (0x0003324d) vid6_indi_pane_t1_ParamLimits

0x2ae7,	// (0x0003324d) vid6_indi_pane_t1

0x2afd,	// (0x00033263) vid6_indi_pane_t2_ParamLimits

0x2afd,	// (0x00033263) vid6_indi_pane_t2

0x2b25,	// (0x0003328b) vid6_indi_pane_t3_ParamLimits

0x2b25,	// (0x0003328b) vid6_indi_pane_t3

0x2b4d,	// (0x000332b3) vid6_indi_pane_t4_ParamLimits

0x2b4d,	// (0x000332b3) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00040302) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00040302) vid6_indi_pane_t

0x2b71,	// (0x000332d7) wait_bar_pane_cp08

0xbe6a,	// (0x0003c5d0) main_cset_text2_pane_t1_ParamLimits

0xbe6a,	// (0x0003c5d0) main_cset_text2_pane_t1

0xbdd1,	// (0x0003c537) listscroll_gen_pane_cp06_t1_ParamLimits

0xbdd1,	// (0x0003c537) listscroll_gen_pane_cp06_t1

0xd3fa,	// (0x0003db60) main_cam6_set_pane

0x160e,	// (0x00031d74) bg_tb_trans_pane_cp06_ParamLimits

0xab9b,	// (0x0003b301) cam4_indicators_pane_g1_ParamLimits

0xabac,	// (0x0003b312) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00040070) cam4_indicators_pane_g_ParamLimits

0xabc4,	// (0x0003b32a) cam4_indicators_pane_t1_ParamLimits

0xf0b0,	// (0x0003f816) bg_tb_trans_pane_cp07_ParamLimits

0xac6f,	// (0x0003b3d5) vid4_indicators_pane_g1_ParamLimits

0xac83,	// (0x0003b3e9) vid4_indicators_pane_g2_ParamLimits

0xac97,	// (0x0003b3fd) vid4_indicators_pane_g3_ParamLimits

0xaca8,	// (0x0003b40e) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00040082) vid4_indicators_pane_g_ParamLimits

0xacc4,	// (0x0003b42a) vid4_indicators_pane_t1_ParamLimits

0xb99a,	// (0x0003c100) vid4_progress_pane_g1_ParamLimits

0xb9aa,	// (0x0003c110) vid4_progress_pane_g2_ParamLimits

0xb9ba,	// (0x0003c120) vid4_progress_pane_g3_ParamLimits

0xb9ca,	// (0x0003c130) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00040233) vid4_progress_pane_g_ParamLimits

0xb9e8,	// (0x0003c14e) vid4_progress_pane_t1_ParamLimits

0xb9fe,	// (0x0003c164) vid4_progress_pane_t2_ParamLimits

0xba13,	// (0x0003c179) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0004023e) vid4_progress_pane_t_ParamLimits

0xba29,	// (0x0003c18f) wait_bar_pane_cp07_ParamLimits

0xbe86,	// (0x0003c5ec) main_cam6_set_pane_g2_ParamLimits

0xbe86,	// (0x0003c5ec) main_cam6_set_pane_g2

0xbe92,	// (0x0003c5f8) main_cset6_listscroll_pane_ParamLimits

0xbe92,	// (0x0003c5f8) main_cset6_listscroll_pane

0xbebb,	// (0x0003c621) main_cset6_slider_pane_ParamLimits

0xbebb,	// (0x0003c621) main_cset6_slider_pane

0xbec7,	// (0x0003c62d) main_cset6_text2_pane_ParamLimits

0xbec7,	// (0x0003c62d) main_cset6_text2_pane

0x2b80,	// (0x000332e6) main_cset6_text_pane

0x2b88,	// (0x000332ee) main_cset_list_pane_copy1_ParamLimits

0x2b88,	// (0x000332ee) main_cset_list_pane_copy1

0x2b98,	// (0x000332fe) scroll_pane_cp028_copy1

0xbeda,	// (0x0003c640) cset_list_set_pane_copy1

0xbee6,	// (0x0003c64c) aid_position_infowindow_above_copy1

0xbeee,	// (0x0003c654) aid_position_infowindow_below_copy1

0x56b1,	// (0x00035e17) cset_list_set_pane_g1_copy1

0x56b9,	// (0x00035e1f) cset_list_set_pane_g3_copy1_ParamLimits

0x56b9,	// (0x00035e1f) cset_list_set_pane_g3_copy1

0x56c8,	// (0x00035e2e) cset_list_set_pane_t1_copy1_ParamLimits

0x56c8,	// (0x00035e2e) cset_list_set_pane_t1_copy1

0xf0b0,	// (0x0003f816) list_highlight_pane_cp021_copy1_ParamLimits

0xf0b0,	// (0x0003f816) list_highlight_pane_cp021_copy1

0x2ba1,	// (0x00033307) cset6_slider_pane_ParamLimits

0x2ba1,	// (0x00033307) cset6_slider_pane

0x2bcd,	// (0x00033333) main_cset6_slider_pane_g1_ParamLimits

0x2bcd,	// (0x00033333) main_cset6_slider_pane_g1

0xbef6,	// (0x0003c65c) main_cset6_slider_pane_g2_ParamLimits

0xbef6,	// (0x0003c65c) main_cset6_slider_pane_g2

0x22d0,	// (0x00032a36) main_cset6_slider_pane_g3_ParamLimits

0x22d0,	// (0x00032a36) main_cset6_slider_pane_g3

0xbf1e,	// (0x0003c684) main_cset6_slider_pane_g4_ParamLimits

0xbf1e,	// (0x0003c684) main_cset6_slider_pane_g4

0xbf2a,	// (0x0003c690) main_cset6_slider_pane_g5_ParamLimits

0xbf2a,	// (0x0003c690) main_cset6_slider_pane_g5

0x22d0,	// (0x00032a36) main_cset6_slider_pane_g7_ParamLimits

0x22d0,	// (0x00032a36) main_cset6_slider_pane_g7

0x22dc,	// (0x00032a42) main_cset6_slider_pane_g8_ParamLimits

0x22dc,	// (0x00032a42) main_cset6_slider_pane_g8

0xbf36,	// (0x0003c69c) main_cset6_slider_pane_g9_ParamLimits

0xbf36,	// (0x0003c69c) main_cset6_slider_pane_g9

0xbf42,	// (0x0003c6a8) main_cset6_slider_pane_g10_ParamLimits

0xbf42,	// (0x0003c6a8) main_cset6_slider_pane_g10

0xbf4e,	// (0x0003c6b4) main_cset6_slider_pane_g11_ParamLimits

0xbf4e,	// (0x0003c6b4) main_cset6_slider_pane_g11

0xbf5a,	// (0x0003c6c0) main_cset6_slider_pane_g12_ParamLimits

0xbf5a,	// (0x0003c6c0) main_cset6_slider_pane_g12

0xb1e7,	// (0x0003b94d) main_cset6_slider_pane_g13_ParamLimits

0xb1e7,	// (0x0003b94d) main_cset6_slider_pane_g13

0xb1f3,	// (0x0003b959) main_cset6_slider_pane_g14_ParamLimits

0xb1f3,	// (0x0003b959) main_cset6_slider_pane_g14

0xbf66,	// (0x0003c6cc) main_cset6_slider_pane_g15_ParamLimits

0xbf66,	// (0x0003c6cc) main_cset6_slider_pane_g15

0xbf2a,	// (0x0003c690) main_cset6_slider_pane_g16_ParamLimits

0xbf2a,	// (0x0003c690) main_cset6_slider_pane_g16

0xbf7e,	// (0x0003c6e4) main_cset6_slider_pane_g17_ParamLimits

0xbf7e,	// (0x0003c6e4) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0004030b) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0004030b) main_cset6_slider_pane_g

0x2bf5,	// (0x0003335b) main_cset6_slider_pane_t1_ParamLimits

0x2bf5,	// (0x0003335b) main_cset6_slider_pane_t1

0xbf96,	// (0x0003c6fc) main_cset6_slider_pane_t2_ParamLimits

0xbf96,	// (0x0003c6fc) main_cset6_slider_pane_t2

0xbfc1,	// (0x0003c727) main_cset6_slider_pane_t3_ParamLimits

0xbfc1,	// (0x0003c727) main_cset6_slider_pane_t3

0xbfec,	// (0x0003c752) main_cset6_slider_pane_t4_ParamLimits

0xbfec,	// (0x0003c752) main_cset6_slider_pane_t4

0xc017,	// (0x0003c77d) main_cset6_slider_pane_t5_ParamLimits

0xc017,	// (0x0003c77d) main_cset6_slider_pane_t5

0x2c36,	// (0x0003339c) main_cset6_slider_pane_t7_ParamLimits

0x2c36,	// (0x0003339c) main_cset6_slider_pane_t7

0xc042,	// (0x0003c7a8) main_cset6_slider_pane_t8_ParamLimits

0xc042,	// (0x0003c7a8) main_cset6_slider_pane_t8

0xc066,	// (0x0003c7cc) main_cset6_slider_pane_t9_ParamLimits

0xc066,	// (0x0003c7cc) main_cset6_slider_pane_t9

0xc08a,	// (0x0003c7f0) main_cset6_slider_pane_t10_ParamLimits

0xc08a,	// (0x0003c7f0) main_cset6_slider_pane_t10

0xc0ae,	// (0x0003c814) main_cset6_slider_pane_t11_ParamLimits

0xc0ae,	// (0x0003c814) main_cset6_slider_pane_t11

0x2c6c,	// (0x000333d2) main_cset6_slider_pane_t14_ParamLimits

0x2c6c,	// (0x000333d2) main_cset6_slider_pane_t14

0x2ca5,	// (0x0003340b) main_cset6_slider_pane_t15_ParamLimits

0x2ca5,	// (0x0003340b) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00040330) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00040330) main_cset6_slider_pane_t

0x2cde,	// (0x00033444) cset_slider_pane_g1_copy1

0x2ce7,	// (0x0003344d) cset_slider_pane_g2_copy1

0x2cf0,	// (0x00033456) cset_slider_pane_g3_copy1

0xd3fa,	// (0x0003db60) bg_popup_sub_pane_cp011_copy1

0x2cf9,	// (0x0003345f) main_cset_text_pane_g1_copy1

0x24ab,	// (0x00032c11) main_cset_text_pane_t1_copy1

0x24b9,	// (0x00032c1f) main_cset_text_pane_t2_copy1

0x24c7,	// (0x00032c2d) main_cset_text_pane_t3_copy1

0x24d5,	// (0x00032c3b) main_cset_text_pane_t4_copy1

0x2d01,	// (0x00033467) main_cset_text_pane_t5_copy1

0x2d0f,	// (0x00033475) main_cset_text_pane_t6_copy1

0x2d1d,	// (0x00033483) main_cset_text_pane_t7_copy1

0x3f8e,	// (0x000346f4) main_cset_text2_pane_t1_copy1

0xf0b0,	// (0x0003f816) main_ncimui_pane

0x8e40,	// (0x000395a6) popup_query_ncimui_window_ParamLimits

0x8e40,	// (0x000395a6) popup_query_ncimui_window

0x52b5,	// (0x00035a1b) field_cale_ev2_pane_g4_ParamLimits

0x52b5,	// (0x00035a1b) field_cale_ev2_pane_g4

0xa550,	// (0x0003acb6) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa550,	// (0x0003acb6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0004000e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0004000e) cell_video_dialer_keypad_pane_g

0xa568,	// (0x0003acce) cell_video_dialer_keypad_pane_t1

0xd3fa,	// (0x0003db60) bg_popup_window_pane_cp012

0xe429,	// (0x0003eb8f) heading_pane_cp06

0x2d49,	// (0x000334af) ncim_query_content_pane

0xd3fa,	// (0x0003db60) bg_popup_heading_pane_cp01

0x2d51,	// (0x000334b7) ncim_heading_pane_t1

0x2d5f,	// (0x000334c5) ncim_indicator_popup_pane

0x2d71,	// (0x000334d7) ncim_query_button_pane

0x2d85,	// (0x000334eb) ncim_query_content_pane_t1

0x2d97,	// (0x000334fd) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00040374) ncim_query_content_pane_t

0x2dd1,	// (0x00033537) ncim_query_list_pane

0x2de3,	// (0x00033549) ncim_query_popup_pane

0x2d5f,	// (0x000334c5) ncim_indicator_popup_pane_ParamLimits

0xc1f9,	// (0x0003c95f) ncim_query_content_pane_g1_ParamLimits

0xc1f9,	// (0x0003c95f) ncim_query_content_pane_g1

0x2d85,	// (0x000334eb) ncim_query_content_pane_t1_ParamLimits

0x2d97,	// (0x000334fd) ncim_query_content_pane_t2_ParamLimits

0xc205,	// (0x0003c96b) ncim_query_content_pane_t3_ParamLimits

0xc205,	// (0x0003c96b) ncim_query_content_pane_t3

0xc222,	// (0x0003c988) ncim_query_content_pane_t4_ParamLimits

0xc222,	// (0x0003c988) ncim_query_content_pane_t4

0xc23f,	// (0x0003c9a5) ncim_query_content_pane_t5_ParamLimits

0xc23f,	// (0x0003c9a5) ncim_query_content_pane_t5

0x2da9,	// (0x0003350f) ncim_query_content_pane_t6_ParamLimits

0x2da9,	// (0x0003350f) ncim_query_content_pane_t6

0xfc0e,	// (0x00040374) ncim_query_content_pane_t_ParamLimits

0x2dd1,	// (0x00033537) ncim_query_list_pane_ParamLimits

0x2de3,	// (0x00033549) ncim_query_popup_pane_ParamLimits

0x2df7,	// (0x0003355d) wait_bar_pane_cp04

0xd3fa,	// (0x0003db60) input_focus_pane_cp011

0x2dff,	// (0x00033565) ncim_query_popup_pane_t1

0x2e0d,	// (0x00033573) ncim_list_query_list_pane_ParamLimits

0x2e0d,	// (0x00033573) ncim_list_query_list_pane

0xd3fa,	// (0x0003db60) bg_button_pane_cp027

0x2e20,	// (0x00033586) ncim_query_button_pane_g1

0xd3fa,	// (0x0003db60) list_highlight_pane_cp012

0x2e2a,	// (0x00033590) ncim_list_query_list_pane_g1

0x2e32,	// (0x00033598) ncim_list_query_list_pane_t1

0xabb8,	// (0x0003b31e) cam4_indicators_pane_g3_ParamLimits

0xabb8,	// (0x0003b31e) cam4_indicators_pane_g3

0xacb4,	// (0x0003b41a) vid4_indicators_pane_g5_ParamLimits

0xacb4,	// (0x0003b41a) vid4_indicators_pane_g5

0xb9d9,	// (0x0003c13f) vid4_progress_pane_g5_ParamLimits

0xb9d9,	// (0x0003c13f) vid4_progress_pane_g5

0xc0e8,	// (0x0003c84e) main_ncimui_pane_g1

0xc14e,	// (0x0003c8b4) ncimui_group_query_pane_ParamLimits

0xc14e,	// (0x0003c8b4) ncimui_group_query_pane

0xc196,	// (0x0003c8fc) ncimui_list_pane_ParamLimits

0xc196,	// (0x0003c8fc) ncimui_list_pane

0xc1bc,	// (0x0003c922) ncimui_text_pane_ParamLimits

0xc1bc,	// (0x0003c922) ncimui_text_pane

0xc25c,	// (0x0003c9c2) ncimui_text_pane_t1_ParamLimits

0xc25c,	// (0x0003c9c2) ncimui_text_pane_t1

0x2e40,	// (0x000335a6) ncimui_list_single_graphic_pane_ParamLimits

0x2e40,	// (0x000335a6) ncimui_list_single_graphic_pane

0xc27b,	// (0x0003c9e1) ncimui_query_pane_ParamLimits

0xc27b,	// (0x0003c9e1) ncimui_query_pane

0xd3fa,	// (0x0003db60) list_highlight_pane_cp013

0x2e50,	// (0x000335b6) ncim_list_query_list_pane_t1_copy1

0x2e5e,	// (0x000335c4) ncim_list_single_graphic_pane_g1

0xc28e,	// (0x0003c9f4) ncim_query_button_pane_cp01

0xc29a,	// (0x0003ca00) ncim_query_entry_pane_ParamLimits

0xc29a,	// (0x0003ca00) ncim_query_entry_pane

0xc2ad,	// (0x0003ca13) ncimui_query_pane_g1

0xc2b9,	// (0x0003ca1f) ncimui_query_pane_t1_ParamLimits

0xc2b9,	// (0x0003ca1f) ncimui_query_pane_t1

0xf0b0,	// (0x0003f816) input_focus_pane_cp012

0x2e66,	// (0x000335cc) ncim_query_entry_pane_t1

0xdb75,	// (0x0003e2db) main_im_pane_ParamLimits

0xf0b0,	// (0x0003f816) main_mobtv_pane_ParamLimits

0xf0b0,	// (0x0003f816) main_mobtv_pane

0xbf36,	// (0x0003c69c) main_cset6_slider_pane_g18_ParamLimits

0xbf36,	// (0x0003c69c) main_cset6_slider_pane_g18

0xbf8a,	// (0x0003c6f0) main_cset6_slider_pane_g19_ParamLimits

0xbf8a,	// (0x0003c6f0) main_cset6_slider_pane_g19

0x2128,	// (0x0003288e) bg_main_mobtv_pane_ParamLimits

0x2128,	// (0x0003288e) bg_main_mobtv_pane

0xc2d2,	// (0x0003ca38) main_mobtv_info_pane

0xc2db,	// (0x0003ca41) main_mobtv_loading_pane_ParamLimits

0xc2db,	// (0x0003ca41) main_mobtv_loading_pane

0x2e86,	// (0x000335ec) main_mobtv_pg_channel_list_pane

0x2e90,	// (0x000335f6) main_mobtv_pg_hdr_pane

0xc2e8,	// (0x0003ca4e) main_mobtv_programe_curr_pane_ParamLimits

0xc2e8,	// (0x0003ca4e) main_mobtv_programe_curr_pane

0xc2f5,	// (0x0003ca5b) main_mobtv_programe_next_pane_ParamLimits

0xc2f5,	// (0x0003ca5b) main_mobtv_programe_next_pane

0x2e99,	// (0x000335ff) popup_mobtv_noti_window

0x13df,	// (0x00031b45) main_tv_pg_hdr_pane_g1

0x2ea1,	// (0x00033607) main_tv_pg_hdr_pane_g2

0x2ea9,	// (0x0003360f) main_tv_pg_hdr_pane_g3

0x2eb1,	// (0x00033617) main_tv_pg_hdr_pane_g4

0x2eb9,	// (0x0003361f) main_tv_pg_hdr_pane_g5

0x2ec1,	// (0x00033627) main_tv_pg_hdr_pane_g6

0x2ec9,	// (0x0003362f) main_tv_pg_hdr_pane_g7

0x2ed1,	// (0x00033637) main_tv_pg_hdr_pane_g8

0x2ed9,	// (0x0003363f) main_tv_pg_hdr_pane_g9

0x2ee1,	// (0x00033647) main_tv_pg_hdr_pane_g10

0x2eeb,	// (0x00033651) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00040381) main_tv_pg_hdr_pane_g

0x2ef5,	// (0x0003365b) main_tv_pg_hdr_pane_t1

0x2f03,	// (0x00033669) main_tv_pg_hdr_pane_t2

0x2f11,	// (0x00033677) main_tv_pg_hdr_pane_t3

0x2f1f,	// (0x00033685) main_tv_pg_hdr_pane_t4

0x2f2d,	// (0x00033693) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00040398) main_tv_pg_hdr_pane_t

0x2f3b,	// (0x000336a1) single_mobtv_pg_channel_pane_ParamLimits

0x2f3b,	// (0x000336a1) single_mobtv_pg_channel_pane

0x2f4d,	// (0x000336b3) single_mobtv_pg_channel_table_pane

0x2f56,	// (0x000336bc) single_mobtv_pg_channel_thumb_pane

0x2f5f,	// (0x000336c5) single_tv_pg_channel_pane_g1

0x2f68,	// (0x000336ce) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x000403a3) single_tv_pg_channel_pane_g

0x160e,	// (0x00031d74) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x160e,	// (0x00031d74) bg_single_mobtv_pg_channel_thumb_pane

0x2f71,	// (0x000336d7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2f71,	// (0x000336d7) single_mobtv_pg_channel_thumb_pane_g1

0x2f7f,	// (0x000336e5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2f7f,	// (0x000336e5) single_mobtv_pg_channel_thumb_pane_g2

0x2f8b,	// (0x000336f1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2f8b,	// (0x000336f1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x000403a8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x000403a8) single_mobtv_pg_channel_thumb_pane_g

0x2f97,	// (0x000336fd) single_mobtv_pg_channel_thumb_pane_t1

0x2fa5,	// (0x0003370b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x000403af) single_mobtv_pg_channel_thumb_pane_t

0x13df,	// (0x00031b45) bg_single_mobtv_pg_channel_table_pane_g1

0x13df,	// (0x00031b45) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0003fe55) bg_single_mobtv_pg_channel_table_pane_g

0x2fb3,	// (0x00033719) single_mobtv_pg_channel_table_pane_t1

0x2fc1,	// (0x00033727) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x000403b4) single_mobtv_pg_channel_table_pane_t

0xc30a,	// (0x0003ca70) main_mobtv_info_pane_g1_ParamLimits

0xc30a,	// (0x0003ca70) main_mobtv_info_pane_g1

0xc326,	// (0x0003ca8c) main_mobtv_info_pane_t1_ParamLimits

0xc326,	// (0x0003ca8c) main_mobtv_info_pane_t1

0xc38c,	// (0x0003caf2) main_mobtv_info_pane_t2_ParamLimits

0xc38c,	// (0x0003caf2) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x000403be) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x000403be) main_mobtv_info_pane_t

0xc40f,	// (0x0003cb75) wait_bar_pane_cp05

0xc41f,	// (0x0003cb85) main_mobtv_loading_pane_g1_ParamLimits

0xc41f,	// (0x0003cb85) main_mobtv_loading_pane_g1

0xc42b,	// (0x0003cb91) main_mobtv_loading_pane_g2_ParamLimits

0xc42b,	// (0x0003cb91) main_mobtv_loading_pane_g2

0xc437,	// (0x0003cb9d) main_mobtv_loading_pane_g3_ParamLimits

0xc437,	// (0x0003cb9d) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x000403c5) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x000403c5) main_mobtv_loading_pane_g

0x2fcf,	// (0x00033735) main_mobtv_loading_pane_t1_ParamLimits

0x2fcf,	// (0x00033735) main_mobtv_loading_pane_t1

0x2fe7,	// (0x0003374d) main_mobtv_loading_pane_t2_ParamLimits

0x2fe7,	// (0x0003374d) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x000403cc) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x000403cc) main_mobtv_loading_pane_t

0xc443,	// (0x0003cba9) wait_bar_pane_cp06_ParamLimits

0xc443,	// (0x0003cba9) wait_bar_pane_cp06

0x300b,	// (0x00033771) main_mobtv_programe_curr_pane_t1

0x3019,	// (0x0003377f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x000403d1) main_mobtv_programe_curr_pane_t

0x3027,	// (0x0003378d) main_mobtv_programe_next_pane_t1

0x3035,	// (0x0003379b) main_mobtv_programe_next_pane_t2

0x3043,	// (0x000337a9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x000403d6) main_mobtv_programe_next_pane_t

0xd3fa,	// (0x0003db60) bg_popup_mobtv_noti_window_pane

0x3051,	// (0x000337b7) popup_mobtv_noti_window_g1

0x3059,	// (0x000337bf) popup_mobtv_noti_window_t1

0x3067,	// (0x000337cd) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x000403dd) popup_mobtv_noti_window_t

0x13df,	// (0x00031b45) bg_popup_mobtv_noti_window_pane_g1

0xd3fa,	// (0x0003db60) sc_clock_pane

0xd3fa,	// (0x0003db60) main_fs_bigclock_pane

0xbbbf,	// (0x0003c325) blid2_tripm_pane_t4_ParamLimits

0xbbbf,	// (0x0003c325) blid2_tripm_pane_t4

0xc44f,	// (0x0003cbb5) sc_clock_pane_g1_ParamLimits

0xc44f,	// (0x0003cbb5) sc_clock_pane_g1

0xc45d,	// (0x0003cbc3) sc_clock_pane_t1_ParamLimits

0xc45d,	// (0x0003cbc3) sc_clock_pane_t1

0xc470,	// (0x0003cbd6) sc_clock_pane_t2_ParamLimits

0xc470,	// (0x0003cbd6) sc_clock_pane_t2

0xc482,	// (0x0003cbe8) sc_clock_pane_t3_ParamLimits

0xc482,	// (0x0003cbe8) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x000403e2) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x000403e2) sc_clock_pane_t

0xcbd6,	// (0x0003d33c) main_fs_bigclock_indicator_pane_ParamLimits

0xcbd6,	// (0x0003d33c) main_fs_bigclock_indicator_pane

0xc4f7,	// (0x0003cc5d) main_fs_bigclock_pane_g1_ParamLimits

0xc4f7,	// (0x0003cc5d) main_fs_bigclock_pane_g1

0xcbe2,	// (0x0003d348) main_fs_bigclock_pane_t1_ParamLimits

0xcbe2,	// (0x0003d348) main_fs_bigclock_pane_t1

0xcbf4,	// (0x0003d35a) main_fs_bigclock_pane_t2_ParamLimits

0xcbf4,	// (0x0003d35a) main_fs_bigclock_pane_t2

0xcc06,	// (0x0003d36c) main_fs_bigclock_pane_t3_ParamLimits

0xcc06,	// (0x0003d36c) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x000405ec) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x000405ec) main_fs_bigclock_pane_t

0x3c6c,	// (0x000343d2) main_fs_bigclock_indicator_pane_g1

0x2d79,	// (0x000334df) ncim_query_content_pane_g2_ParamLimits

0x2d79,	// (0x000334df) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0004036f) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0004036f) ncim_query_content_pane_g

0xc494,	// (0x0003cbfa) sc_clock_pane_t4_ParamLimits

0xc494,	// (0x0003cbfa) sc_clock_pane_t4

0xf0b0,	// (0x0003f816) main_radioblah_pane

0x1f82,	// (0x000326e8) cell_call4_button_pane_t1_copy1_ParamLimits

0x1f82,	// (0x000326e8) cell_call4_button_pane_t1_copy1

0xc100,	// (0x0003c866) main_ncimui_pane_t1_ParamLimits

0xc100,	// (0x0003c866) main_ncimui_pane_t1

0xc11a,	// (0x0003c880) main_ncimui_pane_t2_ParamLimits

0xc11a,	// (0x0003c880) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00040368) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00040368) main_ncimui_pane_t

0x31a8,	// (0x0003390e) main_radioblah_anim_pane_ParamLimits

0x31a8,	// (0x0003390e) main_radioblah_anim_pane

0x31b9,	// (0x0003391f) main_radioblah_info_pane_ParamLimits

0x31b9,	// (0x0003391f) main_radioblah_info_pane

0x31cd,	// (0x00033933) main_radioblah_pane_t1_ParamLimits

0x31cd,	// (0x00033933) main_radioblah_pane_t1

0x31e9,	// (0x0003394f) main_radioblah_pane_t2_ParamLimits

0x31e9,	// (0x0003394f) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00040403) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00040403) main_radioblah_pane_t

0xc541,	// (0x0003cca7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc541,	// (0x0003cca7) main_radioblah_rocker_ctrl_pane

0x3231,	// (0x00033997) main_radioblah_info_pane_t1_ParamLimits

0x3231,	// (0x00033997) main_radioblah_info_pane_t1

0xc586,	// (0x0003ccec) main_radioblah_info_pane_t2_ParamLimits

0xc586,	// (0x0003ccec) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0004040c) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0004040c) main_radioblah_info_pane_t

0x13df,	// (0x00031b45) main_radioblah_rocker_ctrl_pane_g1

0xc62e,	// (0x0003cd94) main_radioblah_rocker_ctrl_pane_g2

0xc636,	// (0x0003cd9c) main_radioblah_rocker_ctrl_pane_g3

0xc63e,	// (0x0003cda4) main_radioblah_rocker_ctrl_pane_g4

0xc646,	// (0x0003cdac) main_radioblah_rocker_ctrl_pane_g5

0xc64e,	// (0x0003cdb4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00040415) main_radioblah_rocker_ctrl_pane_g

0x3f8e,	// (0x000346f4) main_cset_text2_pane_t1_copy1_ParamLimits

0xaaeb,	// (0x0003b251) cam4_image_uncrop_qvga_pane

0xac28,	// (0x0003b38e) vid4_image_uncrop_qcif_pane

0xbd3d,	// (0x0003c4a3) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd3d,	// (0x0003c4a3) cam6_image_uncrop_qvga_pane

0x2a67,	// (0x000331cd) vid6_image_uncrop_qcif_pane_ParamLimits

0x2a67,	// (0x000331cd) vid6_image_uncrop_qcif_pane

0xd3fa,	// (0x0003db60) bg_popup_preview_window_pane_cp03

0x2d2b,	// (0x00033491) list_cset_text2_pane

0x2d33,	// (0x00033499) main_cset6_text2_pane_g1

0x2d3b,	// (0x000334a1) main_cset6_text2_pane_t1

0xc656,	// (0x0003cdbc) list_cset_text2_pane_t1_ParamLimits

0xc656,	// (0x0003cdbc) list_cset_text2_pane_t1

0xf0b0,	// (0x0003f816) main_radioblah_pane_ParamLimits

0xc3fd,	// (0x0003cb63) main_mobtv_info_pane_t3_ParamLimits

0xc3fd,	// (0x0003cb63) main_mobtv_info_pane_t3

0xc52f,	// (0x0003cc95) main_radioblah_pane_g1

0xc55a,	// (0x0003ccc0) main_radioblah_info_pane_g1

0xc5d5,	// (0x0003cd3b) main_radioblah_info_pane_t3_ParamLimits

0xc5d5,	// (0x0003cd3b) main_radioblah_info_pane_t3

0x7e3f,	// (0x000385a5) highlight_cell_cale_month_pane_ParamLimits

0x7e3f,	// (0x000385a5) highlight_cell_cale_month_pane

0xd3fa,	// (0x0003db60) main_phob_fisheye_pane

0x1711,	// (0x00031e77) scroll_pane_cp0031_ParamLimits

0x1711,	// (0x00031e77) scroll_pane_cp0031

0x2b71,	// (0x000332d7) wait_bar_pane_cp08_ParamLimits

0xbeda,	// (0x0003c640) cset_list_set_pane_copy1_ParamLimits

0x3282,	// (0x000339e8) highlight_cell_cale_month_pane_g1

0xc66b,	// (0x0003cdd1) highlight_cell_cale_month_pane_t1

0x276d,	// (0x00032ed3) list_gen_pane_cp01

0x2291,	// (0x000329f7) scroll_pane_01

0xc679,	// (0x0003cddf) list_single_double_fisheye_pane

0x57ae,	// (0x00035f14) list_double_fisheye_pane_g1_ParamLimits

0x57ae,	// (0x00035f14) list_double_fisheye_pane_g1

0x57ba,	// (0x00035f20) list_double_fisheye_pane_g2_ParamLimits

0x57ba,	// (0x00035f20) list_double_fisheye_pane_g2

0xc682,	// (0x0003cde8) list_double_fisheye_pane_g3_ParamLimits

0xc682,	// (0x0003cde8) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00040422) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00040422) list_double_fisheye_pane_g

0x57eb,	// (0x00035f51) list_double_fisheye_pane_t1_ParamLimits

0x57eb,	// (0x00035f51) list_double_fisheye_pane_t1

0x5806,	// (0x00035f6c) list_double_fisheye_pane_t2_ParamLimits

0x5806,	// (0x00035f6c) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0004042d) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0004042d) list_double_fisheye_pane_t

0xd3fa,	// (0x0003db60) main_call5_pane

0xc4ba,	// (0x0003cc20) sc_swipe_pane_ParamLimits

0xc4ba,	// (0x0003cc20) sc_swipe_pane

0xc69a,	// (0x0003ce00) call5_image_pane_ParamLimits

0xc69a,	// (0x0003ce00) call5_image_pane

0xc6a6,	// (0x0003ce0c) call5_swipe_1_pane_ParamLimits

0xc6a6,	// (0x0003ce0c) call5_swipe_1_pane

0xc6b2,	// (0x0003ce18) call5_swipe_2_pane_ParamLimits

0xc6b2,	// (0x0003ce18) call5_swipe_2_pane

0xc6ca,	// (0x0003ce30) popup_call5_audio_first_window_ParamLimits

0xc6ca,	// (0x0003ce30) popup_call5_audio_first_window

0x160e,	// (0x00031d74) call5_swipe_1_pane_g1_ParamLimits

0x160e,	// (0x00031d74) call5_swipe_1_pane_g1

0x328a,	// (0x000339f0) call5_swipe_1_pane_g2_ParamLimits

0x328a,	// (0x000339f0) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00040432) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00040432) call5_swipe_1_pane_g

0x3296,	// (0x000339fc) call5_swipe_1_pane_t1_ParamLimits

0x3296,	// (0x000339fc) call5_swipe_1_pane_t1

0x160e,	// (0x00031d74) call5_swipe_2_pane_g1_ParamLimits

0x160e,	// (0x00031d74) call5_swipe_2_pane_g1

0x32ab,	// (0x00033a11) call5_swipe_2_pane_g2_ParamLimits

0x32ab,	// (0x00033a11) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00040437) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00040437) call5_swipe_2_pane_g

0x32b7,	// (0x00033a1d) call5_swipe_2_pane_t1_ParamLimits

0x32b7,	// (0x00033a1d) call5_swipe_2_pane_t1

0x32cc,	// (0x00033a32) sc_swipe_pane_g1_ParamLimits

0x32cc,	// (0x00033a32) sc_swipe_pane_g1

0x32d9,	// (0x00033a3f) sc_swipe_pane_g2_ParamLimits

0x32d9,	// (0x00033a3f) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0004043c) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0004043c) sc_swipe_pane_g

0x32e5,	// (0x00033a4b) sc_swipe_pane_t1_ParamLimits

0x32e5,	// (0x00033a4b) sc_swipe_pane_t1

0xd3fa,	// (0x0003db60) main_cmail_launcher_pane

0xc6d6,	// (0x0003ce3c) aid_size_cell_cmail_l_ParamLimits

0xc6d6,	// (0x0003ce3c) aid_size_cell_cmail_l

0xc6e6,	// (0x0003ce4c) grid_cmail_l_pane_ParamLimits

0xc6e6,	// (0x0003ce4c) grid_cmail_l_pane

0xc6f2,	// (0x0003ce58) cell_cmail_l_pane_ParamLimits

0xc6f2,	// (0x0003ce58) cell_cmail_l_pane

0xc704,	// (0x0003ce6a) cell_cmail_l_pane_g1_ParamLimits

0xc704,	// (0x0003ce6a) cell_cmail_l_pane_g1

0xc715,	// (0x0003ce7b) cell_cmail_l_pane_t1_ParamLimits

0xc715,	// (0x0003ce7b) cell_cmail_l_pane_t1

0x32fa,	// (0x00033a60) cell_cmail_l_pane_t2_ParamLimits

0x32fa,	// (0x00033a60) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00040441) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00040441) cell_cmail_l_pane_t

0xf0b0,	// (0x0003f816) grid_highlight_pane_cp018_ParamLimits

0xf0b0,	// (0x0003f816) grid_highlight_pane_cp018

0x63a0,	// (0x00036b06) main2_pane_ParamLimits

0x63a0,	// (0x00036b06) main2_pane

0xdc20,	// (0x0003e386) popup_sp_fs_action_menu_bg_pane_g1

0xdc28,	// (0x0003e38e) popup_sp_fs_action_menu_bg_pane_g2

0xdc30,	// (0x0003e396) popup_sp_fs_action_menu_bg_pane_g3

0xdc38,	// (0x0003e39e) popup_sp_fs_action_menu_bg_pane_g4

0xdc40,	// (0x0003e3a6) popup_sp_fs_action_menu_bg_pane_g5

0xdc48,	// (0x0003e3ae) popup_sp_fs_action_menu_bg_pane_g6

0xdc50,	// (0x0003e3b6) popup_sp_fs_action_menu_bg_pane_g7

0xdc58,	// (0x0003e3be) popup_sp_fs_action_menu_bg_pane_g8

0xdc60,	// (0x0003e3c6) popup_sp_fs_action_menu_bg_pane_g9

0xdc68,	// (0x0003e3ce) popup_sp_fs_action_menu_bg_pane_g10

0xdc68,	// (0x0003e3ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003f8f0) popup_sp_fs_action_menu_bg_pane_g

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g3_g1

0x4faa,	// (0x00035710) list_medium_line_x2_t3_g3_g2_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_t3_g3_g2

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003f99e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003f99e) list_medium_line_x2_t3_g3_g

0x4fc2,	// (0x00035728) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4fc2,	// (0x00035728) list_medium_line_x2_t3_g3_t1

0x4fd7,	// (0x0003573d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4fd7,	// (0x0003573d) list_medium_line_x2_t3_g3_t2

0x4fe9,	// (0x0003574f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003f9a5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003f9a5) list_medium_line_x2_t3_g3_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g2_g1

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003f9ac) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003f9ac) list_medium_line_x2_t3_g2_g

0x4ffe,	// (0x00035764) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4ffe,	// (0x00035764) list_medium_line_x2_t3_g2_t1

0x5014,	// (0x0003577a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5014,	// (0x0003577a) list_medium_line_x2_t3_g2_t2

0x5026,	// (0x0003578c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5026,	// (0x0003578c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003f9b1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003f9b1) list_medium_line_x2_t3_g2_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t4_g4_g1

0x5044,	// (0x000357aa) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5044,	// (0x000357aa) list_medium_line_x2_t4_g4_g2

0x4faa,	// (0x00035710) list_medium_line_x2_t4_g4_g3_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_t4_g4_g3

0x5050,	// (0x000357b6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5050,	// (0x000357b6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003f9b8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003f9b8) list_medium_line_x2_t4_g4_g

0x505c,	// (0x000357c2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x505c,	// (0x000357c2) list_medium_line_x2_t4_g4_t1

0x5076,	// (0x000357dc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5076,	// (0x000357dc) list_medium_line_x2_t4_g4_t2

0x508c,	// (0x000357f2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x508c,	// (0x000357f2) list_medium_line_x2_t4_g4_t3

0x50a1,	// (0x00035807) list_medium_line_x2_t4_g4_t4_ParamLimits

0x50a1,	// (0x00035807) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003f9c1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003f9c1) list_medium_line_x2_t4_g4_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g4_g1

0x5044,	// (0x000357aa) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5044,	// (0x000357aa) list_medium_line_x2_t2_g4_g2

0x4faa,	// (0x00035710) list_medium_line_x2_t2_g4_g3_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_t2_g4_g3

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003fa28) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003fa28) list_medium_line_x2_t2_g4_g

0x50b3,	// (0x00035819) list_medium_line_x2_t2_g4_t1_ParamLimits

0x50b3,	// (0x00035819) list_medium_line_x2_t2_g4_t1

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003fa31) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003fa31) list_medium_line_x2_t2_g4_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g3_g1

0x4faa,	// (0x00035710) list_medium_line_x2_t2_g3_g2_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_t2_g3_g2

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003f99e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003f99e) list_medium_line_x2_t2_g3_g

0x50c8,	// (0x0003582e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x50c8,	// (0x0003582e) list_medium_line_x2_t2_g3_t1

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003fa36) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003fa36) list_medium_line_x2_t2_g3_t

0x7faa,	// (0x00038710) main_sp_fs_list_pane_ParamLimits

0x7faa,	// (0x00038710) main_sp_fs_list_pane

0x7fb6,	// (0x0003871c) sp_fs_scroll_pane_ParamLimits

0x7fb6,	// (0x0003871c) sp_fs_scroll_pane

0x50dd,	// (0x00035843) list_medium_line_x2_t3_t1

0x50ed,	// (0x00035853) list_medium_line_x2_t3_t2

0x50fb,	// (0x00035861) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003fa81) list_medium_line_x2_t3_t

0x5109,	// (0x0003586f) list_medium_line_x3_t4_t1

0x5119,	// (0x0003587f) list_medium_line_x3_t4_t2

0x5127,	// (0x0003588d) list_medium_line_x3_t4_t3

0x50fb,	// (0x00035861) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003fa88) list_medium_line_x3_t4_t

0x5135,	// (0x0003589b) list_medium_line_x4_t5_t1

0x5145,	// (0x000358ab) list_medium_line_x4_t5_t2

0x5127,	// (0x0003588d) list_medium_line_x4_t5_t3

0x5153,	// (0x000358b9) list_medium_line_x4_t5_t4

0x50fb,	// (0x00035861) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003fa91) list_medium_line_x4_t5_t

0x4f9e,	// (0x00035704) list_medium_line_t4_g4_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_t4_g4_g1

0x5050,	// (0x000357b6) list_medium_line_t4_g4_g2_ParamLimits

0x5050,	// (0x000357b6) list_medium_line_t4_g4_g2

0x5161,	// (0x000358c7) list_medium_line_t4_g4_g3_ParamLimits

0x5161,	// (0x000358c7) list_medium_line_t4_g4_g3

0x4fb6,	// (0x0003571c) list_medium_line_t4_g4_g4_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003fa9c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003fa9c) list_medium_line_t4_g4_g

0x516d,	// (0x000358d3) list_medium_line_t4_g4_t1_ParamLimits

0x516d,	// (0x000358d3) list_medium_line_t4_g4_t1

0x5182,	// (0x000358e8) list_medium_line_t4_g4_t2_ParamLimits

0x5182,	// (0x000358e8) list_medium_line_t4_g4_t2

0x5198,	// (0x000358fe) list_medium_line_t4_g4_t3_ParamLimits

0x5198,	// (0x000358fe) list_medium_line_t4_g4_t3

0x4fe9,	// (0x0003574f) list_medium_line_t4_g4_t4_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003faa5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003faa5) list_medium_line_t4_g4_t

0x80e0,	// (0x00038846) chi_dic_find_pane_g1

0x8e03,	// (0x00039569) main_tport_pane

0x5430,	// (0x00035b96) list_medium_line_plain_t1

0x543e,	// (0x00035ba4) list_medium_line_t2_g2_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t2_g2_g1

0x544a,	// (0x00035bb0) list_medium_line_t2_g2_g2_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00040179) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00040179) list_medium_line_t2_g2_g

0x5456,	// (0x00035bbc) list_medium_line_t2_g2_t1_ParamLimits

0x5456,	// (0x00035bbc) list_medium_line_t2_g2_t1

0x5470,	// (0x00035bd6) list_medium_line_t2_g2_t2_ParamLimits

0x5470,	// (0x00035bd6) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0004017e) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0004017e) list_medium_line_t2_g2_t

0x5684,	// (0x00035dea) aid_sp_fs_list_icon_a_sm

0x568c,	// (0x00035df2) aid_sp_fs_list_icon_d

0x5694,	// (0x00035dfa) aid_sp_fs_text_primary

0x377e,	// (0x00033ee4) aid_sp_fs_text_secondary

0xba3a,	// (0x0003c1a0) list_medium_line

0xba3a,	// (0x0003c1a0) list_medium_line_g2

0xba3a,	// (0x0003c1a0) list_medium_line_g3

0xba3a,	// (0x0003c1a0) list_medium_line_plain

0xba3a,	// (0x0003c1a0) list_medium_line_plain_t2

0xba3a,	// (0x0003c1a0) list_medium_line_plain_t3

0xba3a,	// (0x0003c1a0) list_medium_line_right_icon

0xba3a,	// (0x0003c1a0) list_medium_line_right_iconx2

0xba3a,	// (0x0003c1a0) list_medium_line_t2

0xba3a,	// (0x0003c1a0) list_medium_line_t2_g2

0xba3a,	// (0x0003c1a0) list_medium_line_t2_g3

0xba3a,	// (0x0003c1a0) list_medium_line_t2_right_icon

0xba3a,	// (0x0003c1a0) list_medium_line_t2_right_iconx2

0xba3a,	// (0x0003c1a0) list_medium_line_t3

0xba3a,	// (0x0003c1a0) list_medium_line_t3_g2

0xba3a,	// (0x0003c1a0) list_medium_line_t3_g3

0xba3a,	// (0x0003c1a0) list_medium_line_t3_right_iconx2

0xba43,	// (0x0003c1a9) list_medium_line_t4_g4

0xba3a,	// (0x0003c1a0) list_medium_line_x2

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t2_g2

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t2_g3

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t2_g4

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t3

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t3_g2

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t3_g3

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t3_g4

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t4_g2

0xba3a,	// (0x0003c1a0) list_medium_line_x2_t4_g4

0xba4c,	// (0x0003c1b2) list_medium_line_x3

0xba4c,	// (0x0003c1b2) list_medium_line_x3_t4

0xba4c,	// (0x0003c1b2) list_medium_line_x3_t4_g4

0xba43,	// (0x0003c1a9) list_medium_line_x4_t4

0xba43,	// (0x0003c1a9) list_medium_line_x4_t4_g7

0xba43,	// (0x0003c1a9) list_medium_line_x4_t5

0x569d,	// (0x00035e03) list_single_fs_dyc_pane_ParamLimits

0x569d,	// (0x00035e03) list_single_fs_dyc_pane

0x4f9e,	// (0x00035704) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x4_t4_g7_g1

0x56dd,	// (0x00035e43) list_medium_line_x4_t4_g7_g2_ParamLimits

0x56dd,	// (0x00035e43) list_medium_line_x4_t4_g7_g2

0x56e9,	// (0x00035e4f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x56e9,	// (0x00035e4f) list_medium_line_x4_t4_g7_g3

0x56f8,	// (0x00035e5e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x56f8,	// (0x00035e5e) list_medium_line_x4_t4_g7_g4

0x5704,	// (0x00035e6a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5704,	// (0x00035e6a) list_medium_line_x4_t4_g7_g5

0x5713,	// (0x00035e79) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5713,	// (0x00035e79) list_medium_line_x4_t4_g7_g6

0x5722,	// (0x00035e88) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5722,	// (0x00035e88) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00040349) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00040349) list_medium_line_x4_t4_g7_g

0x572e,	// (0x00035e94) list_medium_line_x4_t4_g7_t1_ParamLimits

0x572e,	// (0x00035e94) list_medium_line_x4_t4_g7_t1

0x5743,	// (0x00035ea9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5743,	// (0x00035ea9) list_medium_line_x4_t4_g7_t2

0x5758,	// (0x00035ebe) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5758,	// (0x00035ebe) list_medium_line_x4_t4_g7_t3

0x576d,	// (0x00035ed3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x576d,	// (0x00035ed3) list_medium_line_x4_t4_g7_t4

0x577f,	// (0x00035ee5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x577f,	// (0x00035ee5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00040358) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00040358) list_medium_line_x4_t4_g7_t

0x5791,	// (0x00035ef7) list_single_dyc_row_pane_ParamLimits

0x5791,	// (0x00035ef7) list_single_dyc_row_pane

0xc68e,	// (0x0003cdf4) call5_gesture_pane_ParamLimits

0xc68e,	// (0x0003cdf4) call5_gesture_pane

0xc6be,	// (0x0003ce24) call5_windows_pane_ParamLimits

0xc6be,	// (0x0003ce24) call5_windows_pane

0xc72b,	// (0x0003ce91) call5_swipe_1_pane_cp_ParamLimits

0xc72b,	// (0x0003ce91) call5_swipe_1_pane_cp

0xc737,	// (0x0003ce9d) call5_swipe_2_pane_cp_ParamLimits

0xc737,	// (0x0003ce9d) call5_swipe_2_pane_cp

0xdd26,	// (0x0003e48c) call5_image_pane_cp

0xc743,	// (0x0003cea9) popup_call5_audio_first_window_cp_ParamLimits

0xc743,	// (0x0003cea9) popup_call5_audio_first_window_cp

0x32cc,	// (0x00033a32) call5_swipe_1_pane_g1_cp_ParamLimits

0x32cc,	// (0x00033a32) call5_swipe_1_pane_g1_cp

0x330c,	// (0x00033a72) call5_swipe_1_pane_g2_cp

0x32e5,	// (0x00033a4b) call5_swipe_1_pane_t1_cp_ParamLimits

0x32e5,	// (0x00033a4b) call5_swipe_1_pane_t1_cp

0x32cc,	// (0x00033a32) call5_swipe_2_pane_g1_cp_ParamLimits

0x32cc,	// (0x00033a32) call5_swipe_2_pane_g1_cp

0x3314,	// (0x00033a7a) call5_swipe_2_pane_g2_cp

0x331c,	// (0x00033a82) call5_swipe_2_pane_t1_cp_ParamLimits

0x331c,	// (0x00033a82) call5_swipe_2_pane_t1_cp

0xf0b0,	// (0x0003f816) main_sp_fs_email_pane

0x3331,	// (0x00033a97) main_sp_fs_listscroll_pane_te

0xc74f,	// (0x0003ceb5) popup_sp_fs_action_menu_pane_ParamLimits

0xc74f,	// (0x0003ceb5) popup_sp_fs_action_menu_pane

0x13df,	// (0x00031b45) bg_sp_fs_ctrlbar_pane_g1

0x16c2,	// (0x00031e28) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x16d4,	// (0x00031e3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x16cb,	// (0x00031e31) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x13df,	// (0x00031b45) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00040446) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x11cc,	// (0x00031932) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x11cc,	// (0x00031932) bg_sp_fs_ctrlbar_ddmenu_pane

0x333a,	// (0x00033aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x333a,	// (0x00033aa0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3346,	// (0x00033aac) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3346,	// (0x00033aac) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0004044f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0004044f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3352,	// (0x00033ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3352,	// (0x00033ab8) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5828,	// (0x00035f8e) list_medium_line_t2_right_icon_g1

0x5830,	// (0x00035f96) list_medium_line_t2_right_icon_t1

0x583f,	// (0x00035fa5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00040454) list_medium_line_t2_right_icon_t

0x0edd,	// (0x00031643) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0edd,	// (0x00031643) bg_sp_fs_ctrlbar_pane

0xc7d6,	// (0x0003cf3c) main_sp_fs_ctrlbar_button_pane_cp01

0xc7de,	// (0x0003cf44) main_sp_fs_ctrlbar_ddmenu_pane

0x33a4,	// (0x00033b0a) main_sp_fs_ctrlbar_pane_g1

0x33b0,	// (0x00033b16) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00040459) main_sp_fs_ctrlbar_pane_g

0x33bc,	// (0x00033b22) main_sp_fs_ctrlbar_pane_t1

0xc7e8,	// (0x0003cf4e) main_sp_fs_ctrlbar_pane

0xc7fe,	// (0x0003cf64) main_sp_fs_listscroll_pane_te_cp01

0x584d,	// (0x00035fb3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x584d,	// (0x00035fb3) popup_sp_fs_action_menu_pane_cp01

0xf0b0,	// (0x0003f816) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0b0,	// (0x0003f816) bg_sp_fs_highlight_list_pane_cp01

0x586d,	// (0x00035fd3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x586d,	// (0x00035fd3) sp_fs_action_menu_list_gene_pane_g1

0x33fb,	// (0x00033b61) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x33fb,	// (0x00033b61) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x00040463) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x00040463) sp_fs_action_menu_list_gene_pane_g

0x587c,	// (0x00035fe2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x587c,	// (0x00035fe2) sp_fs_action_menu_list_gene_pane_t1

0x5894,	// (0x00035ffa) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5894,	// (0x00035ffa) sp_fs_action_menu_list_gene_pane

0x343d,	// (0x00033ba3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x343d,	// (0x00033ba3) popup_sp_fs_action_menu_bg_pane

0x58b1,	// (0x00036017) sp_fs_action_menu_list_pane_ParamLimits

0x58b1,	// (0x00036017) sp_fs_action_menu_list_pane

0x3469,	// (0x00033bcf) sp_fs_scroll_pane_cp01_ParamLimits

0x3469,	// (0x00033bcf) sp_fs_scroll_pane_cp01

0x58cf,	// (0x00036035) list_medium_line_plain_t2_t1

0x58de,	// (0x00036044) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x00040468) list_medium_line_plain_t2_t

0x58ec,	// (0x00036052) list_medium_line_plain_t3_t1

0x58fc,	// (0x00036062) list_medium_line_plain_t3_t2

0x590a,	// (0x00036070) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0004046d) list_medium_line_plain_t3_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t2_g2_g1

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003f9ac) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003f9ac) list_medium_line_x2_t2_g2_g

0x516d,	// (0x000358d3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x516d,	// (0x000358d3) list_medium_line_x2_t2_g2_t1

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x00040474) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x00040474) list_medium_line_x2_t2_g2_t

0x4f9e,	// (0x00035704) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t4_g2_g1

0x5918,	// (0x0003607e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5918,	// (0x0003607e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x00040479) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x00040479) list_medium_line_x2_t4_g2_g

0x592a,	// (0x00036090) list_medium_line_x2_t4_g2_t1_ParamLimits

0x592a,	// (0x00036090) list_medium_line_x2_t4_g2_t1

0x5944,	// (0x000360aa) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5944,	// (0x000360aa) list_medium_line_x2_t4_g2_t2

0x595a,	// (0x000360c0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x595a,	// (0x000360c0) list_medium_line_x2_t4_g2_t3

0x4fe9,	// (0x0003574f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0004047e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0004047e) list_medium_line_x2_t4_g2_t

0x596f,	// (0x000360d5) list_medium_line_t3_right_iconx2_g1

0x5828,	// (0x00035f8e) list_medium_line_t3_right_iconx2_g2

0x5977,	// (0x000360dd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x00040487) list_medium_line_t3_right_iconx2_g

0x597f,	// (0x000360e5) list_medium_line_t3_right_iconx2_t1

0x598f,	// (0x000360f5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0004048e) list_medium_line_t3_right_iconx2_t

0x4f9e,	// (0x00035704) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x3_t4_g4_g1

0x4faa,	// (0x00035710) list_medium_line_x3_t4_g4_g2_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x3_t4_g4_g2

0x5050,	// (0x000357b6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5050,	// (0x000357b6) list_medium_line_x3_t4_g4_g3

0x599d,	// (0x00036103) list_medium_line_x3_t4_g4_g4_ParamLimits

0x599d,	// (0x00036103) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x00040493) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x00040493) list_medium_line_x3_t4_g4_g

0x59a9,	// (0x0003610f) list_medium_line_x3_t4_g4_t1_ParamLimits

0x59a9,	// (0x0003610f) list_medium_line_x3_t4_g4_t1

0x59c0,	// (0x00036126) list_medium_line_x3_t4_g4_t2_ParamLimits

0x59c0,	// (0x00036126) list_medium_line_x3_t4_g4_t2

0x59d5,	// (0x0003613b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x59d5,	// (0x0003613b) list_medium_line_x3_t4_g4_t3

0x59ea,	// (0x00036150) list_medium_line_x3_t4_g4_t4_ParamLimits

0x59ea,	// (0x00036150) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0004049c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0004049c) list_medium_line_x3_t4_g4_t

0x5a07,	// (0x0003616d) list_single_dyc_row_text_pane_t1_ParamLimits

0x5a07,	// (0x0003616d) list_single_dyc_row_text_pane_t1

0x5a3e,	// (0x000361a4) list_single_dyc_row_text_pane_t2_ParamLimits

0x5a3e,	// (0x000361a4) list_single_dyc_row_text_pane_t2

0x5aae,	// (0x00036214) list_single_dyc_row_text_pane_t3_ParamLimits

0x5aae,	// (0x00036214) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000404a5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000404a5) list_single_dyc_row_text_pane_t

0x5b79,	// (0x000362df) list_single_dyc_row_pane_g1_ParamLimits

0x5b79,	// (0x000362df) list_single_dyc_row_pane_g1

0x5b85,	// (0x000362eb) list_single_dyc_row_pane_g2_ParamLimits

0x5b85,	// (0x000362eb) list_single_dyc_row_pane_g2

0x5b91,	// (0x000362f7) list_single_dyc_row_pane_g3_ParamLimits

0x5b91,	// (0x000362f7) list_single_dyc_row_pane_g3

0x5b9d,	// (0x00036303) list_single_dyc_row_pane_g4_ParamLimits

0x5b9d,	// (0x00036303) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000404b2) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000404b2) list_single_dyc_row_pane_g

0x5ba9,	// (0x0003630f) list_single_dyc_row_text_pane_ParamLimits

0x5ba9,	// (0x0003630f) list_single_dyc_row_text_pane

0xd3fa,	// (0x0003db60) bg_sp_fs_scroll_pane

0x3502,	// (0x00033c68) thumb_sp_fs_scroll_pane

0x543e,	// (0x00035ba4) list_medium_line_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_g1

0x5bc8,	// (0x0003632e) list_medium_line_t1_ParamLimits

0x5bc8,	// (0x0003632e) list_medium_line_t1

0x4f9e,	// (0x00035704) list_medium_line_x2_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_g1

0x4faa,	// (0x00035710) list_medium_line_x2_g2_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x000404bb) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x000404bb) list_medium_line_x2_g

0x5bdd,	// (0x00036343) list_medium_line_x2_t1_ParamLimits

0x5bdd,	// (0x00036343) list_medium_line_x2_t1

0x4f9e,	// (0x00035704) list_medium_line_x3_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x3_g1

0x4faa,	// (0x00035710) list_medium_line_x3_g2_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x000404bb) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x000404bb) list_medium_line_x3_g

0x5bdd,	// (0x00036343) list_medium_line_x3_t1_ParamLimits

0x5bdd,	// (0x00036343) list_medium_line_x3_t1

0x3521,	// (0x00033c87) thumb_sp_fs_scroll_pane_g1

0x352a,	// (0x00033c90) thumb_sp_fs_scroll_pane_g2

0x3533,	// (0x00033c99) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000404c0) thumb_sp_fs_scroll_pane_g

0x3521,	// (0x00033c87) bg_sp_fs_scroll_pane_g1

0x352a,	// (0x00033c90) bg_sp_fs_scroll_pane_g2

0x3533,	// (0x00033c99) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x000404c0) bg_sp_fs_scroll_pane_g

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4f9e,	// (0x00035704) list_medium_line_x2_t3_g4_g1

0x5044,	// (0x000357aa) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5044,	// (0x000357aa) list_medium_line_x2_t3_g4_g2

0x4faa,	// (0x00035710) list_medium_line_x2_t3_g4_g3_ParamLimits

0x4faa,	// (0x00035710) list_medium_line_x2_t3_g4_g3

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4fb6,	// (0x0003571c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003fa28) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003fa28) list_medium_line_x2_t3_g4_g

0x5bf3,	// (0x00036359) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5bf3,	// (0x00036359) list_medium_line_x2_t3_g4_t1

0x5c09,	// (0x0003636f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5c09,	// (0x0003636f) list_medium_line_x2_t3_g4_t2

0x4fe9,	// (0x0003574f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4fe9,	// (0x0003574f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x000404c7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x000404c7) list_medium_line_x2_t3_g4_t

0x543e,	// (0x00035ba4) list_medium_line_g2_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_g2_g1

0x544a,	// (0x00035bb0) list_medium_line_g2_g2_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00040179) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00040179) list_medium_line_g2_g

0x5c23,	// (0x00036389) list_medium_line_g2_t1_ParamLimits

0x5c23,	// (0x00036389) list_medium_line_g2_t1

0x543e,	// (0x00035ba4) list_medium_line_t3_g2_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t3_g2_g1

0x544a,	// (0x00035bb0) list_medium_line_t3_g2_g2_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00040179) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00040179) list_medium_line_t3_g2_g

0x5c38,	// (0x0003639e) list_medium_line_t3_g2_t1_ParamLimits

0x5c38,	// (0x0003639e) list_medium_line_t3_g2_t1

0x5c52,	// (0x000363b8) list_medium_line_t3_g2_t2_ParamLimits

0x5c52,	// (0x000363b8) list_medium_line_t3_g2_t2

0x5c68,	// (0x000363ce) list_medium_line_t3_g2_t3_ParamLimits

0x5c68,	// (0x000363ce) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x000404ce) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x000404ce) list_medium_line_t3_g2_t

0x5828,	// (0x00035f8e) list_medium_line_right_icon_g1

0x5c7e,	// (0x000363e4) list_medium_line_right_icon_t1

0x543e,	// (0x00035ba4) list_medium_line_t2_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t2_g1

0x5c8c,	// (0x000363f2) list_medium_line_t2_t1_ParamLimits

0x5c8c,	// (0x000363f2) list_medium_line_t2_t1

0x5ca4,	// (0x0003640a) list_medium_line_t2_t2_ParamLimits

0x5ca4,	// (0x0003640a) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x000404d5) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x000404d5) list_medium_line_t2_t

0x543e,	// (0x00035ba4) list_medium_line_t3_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t3_g1

0x5cb9,	// (0x0003641f) list_medium_line_t3_t1_ParamLimits

0x5cb9,	// (0x0003641f) list_medium_line_t3_t1

0x5cd3,	// (0x00036439) list_medium_line_t3_t2_ParamLimits

0x5cd3,	// (0x00036439) list_medium_line_t3_t2

0x5ce9,	// (0x0003644f) list_medium_line_t3_t3_ParamLimits

0x5ce9,	// (0x0003644f) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x000404da) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x000404da) list_medium_line_t3_t

0x543e,	// (0x00035ba4) list_medium_line_g3_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_g3_g1

0x5cfe,	// (0x00036464) list_medium_line_g3_g2_ParamLimits

0x5cfe,	// (0x00036464) list_medium_line_g3_g2

0x544a,	// (0x00035bb0) list_medium_line_g3_g3_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x000404e1) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x000404e1) list_medium_line_g3_g

0x5d0a,	// (0x00036470) list_medium_line_g3_t1_ParamLimits

0x5d0a,	// (0x00036470) list_medium_line_g3_t1

0x543e,	// (0x00035ba4) list_medium_line_t2_g3_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t2_g3_g1

0x5cfe,	// (0x00036464) list_medium_line_t2_g3_g2_ParamLimits

0x5cfe,	// (0x00036464) list_medium_line_t2_g3_g2

0x544a,	// (0x00035bb0) list_medium_line_t2_g3_g3_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x000404e1) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x000404e1) list_medium_line_t2_g3_g

0x5d1f,	// (0x00036485) list_medium_line_t2_g3_t1_ParamLimits

0x5d1f,	// (0x00036485) list_medium_line_t2_g3_t1

0x5d39,	// (0x0003649f) list_medium_line_t2_g3_t2_ParamLimits

0x5d39,	// (0x0003649f) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x000404e8) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x000404e8) list_medium_line_t2_g3_t

0x543e,	// (0x00035ba4) list_medium_line_t3_g3_g1_ParamLimits

0x543e,	// (0x00035ba4) list_medium_line_t3_g3_g1

0x5cfe,	// (0x00036464) list_medium_line_t3_g3_g2_ParamLimits

0x5cfe,	// (0x00036464) list_medium_line_t3_g3_g2

0x544a,	// (0x00035bb0) list_medium_line_t3_g3_g3_ParamLimits

0x544a,	// (0x00035bb0) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x000404e1) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x000404e1) list_medium_line_t3_g3_g

0x5d4f,	// (0x000364b5) list_medium_line_t3_g3_t1_ParamLimits

0x5d4f,	// (0x000364b5) list_medium_line_t3_g3_t1

0x5d68,	// (0x000364ce) list_medium_line_t3_g3_t2_ParamLimits

0x5d68,	// (0x000364ce) list_medium_line_t3_g3_t2

0x5d7e,	// (0x000364e4) list_medium_line_t3_g3_t3_ParamLimits

0x5d7e,	// (0x000364e4) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x000404ed) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x000404ed) list_medium_line_t3_g3_t

0x596f,	// (0x000360d5) list_medium_line_right_iconx2_g1

0x5828,	// (0x00035f8e) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000404f4) list_medium_line_right_iconx2_g

0x5d94,	// (0x000364fa) list_medium_line_right_iconx2_t1

0x596f,	// (0x000360d5) list_medium_line_t2_right_iconx2_g1

0x5828,	// (0x00035f8e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x000404f4) list_medium_line_t2_right_iconx2_g

0x5da2,	// (0x00036508) list_medium_line_t2_right_iconx2_t1

0x5db2,	// (0x00036518) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x000404f9) list_medium_line_t2_right_iconx2_t

0x5dc0,	// (0x00036526) list_medium_line_x4_t4_t1

0x5dce,	// (0x00036534) list_medium_line_x4_t4_t2

0x5ddc,	// (0x00036542) list_medium_line_x4_t4_t3

0x5dea,	// (0x00036550) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x000404fe) list_medium_line_x4_t4_t

0xc833,	// (0x0003cf99) tport_appsw_pane_ParamLimits

0xc833,	// (0x0003cf99) tport_appsw_pane

0xc83f,	// (0x0003cfa5) tport_contact_pane_ParamLimits

0xc83f,	// (0x0003cfa5) tport_contact_pane

0xc84d,	// (0x0003cfb3) tport_listscroll_pane_ParamLimits

0xc84d,	// (0x0003cfb3) tport_listscroll_pane

0xc85b,	// (0x0003cfc1) cell_tport_appsw_pane_ParamLimits

0xc85b,	// (0x0003cfc1) cell_tport_appsw_pane

0x167f,	// (0x00031de5) tport_appsw_pane_g1_ParamLimits

0x167f,	// (0x00031de5) tport_appsw_pane_g1

0x353c,	// (0x00033ca2) tport_contact_pane_g1

0x3545,	// (0x00033cab) tport_contact_pane_t1

0x3553,	// (0x00033cb9) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x00040507) tport_contact_pane_t

0x3561,	// (0x00033cc7) list_tport_pane

0x356a,	// (0x00033cd0) scroll_pane_cp_030

0x357b,	// (0x00033ce1) cell_tport_appsw_pane_g1

0x358b,	// (0x00033cf1) cell_tport_appsw_pane_t1

0x3599,	// (0x00033cff) grid_highlight_pane_cp019

0xc882,	// (0x0003cfe8) list_tport_double_graphic_pane_ParamLimits

0xc882,	// (0x0003cfe8) list_tport_double_graphic_pane

0xf0b0,	// (0x0003f816) list_highlight_pane_cp023_ParamLimits

0xf0b0,	// (0x0003f816) list_highlight_pane_cp023

0xc88f,	// (0x0003cff5) list_tport_double_graphic_pane_g1_ParamLimits

0xc88f,	// (0x0003cff5) list_tport_double_graphic_pane_g1

0xc89c,	// (0x0003d002) list_tport_double_graphic_pane_t1_ParamLimits

0xc89c,	// (0x0003d002) list_tport_double_graphic_pane_t1

0xc8b1,	// (0x0003d017) list_tport_double_graphic_pane_t2_ParamLimits

0xc8b1,	// (0x0003d017) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x00040513) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x00040513) list_tport_double_graphic_pane_t

0xd3fa,	// (0x0003db60) main_cale_note_pane

0xae32,	// (0x0003b598) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xae32,	// (0x0003b598) cell_vitu2_function_top_wide_pane_cp01

0xc40f,	// (0x0003cb75) wait_bar_pane_cp05_ParamLimits

0xf0b0,	// (0x0003f816) listscroll_cmail_pane

0x35a1,	// (0x00033d07) list_cmail_pane

0xc8c3,	// (0x0003d029) list_cmail_body_pane

0xc8d8,	// (0x0003d03e) list_single_cmail_header_caption_pane

0xc8ee,	// (0x0003d054) list_single_cmail_header_detail_pane_ParamLimits

0xc8ee,	// (0x0003d054) list_single_cmail_header_detail_pane

0x35b1,	// (0x00033d17) list_single_cmail_header_caption_pane_t1

0x5df8,	// (0x0003655e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5df8,	// (0x0003655e) list_single_cmail_header_detail_pane_g1

0x5e0e,	// (0x00036574) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5e0e,	// (0x00036574) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x00040518) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x00040518) list_single_cmail_header_detail_pane_g

0x5e1a,	// (0x00036580) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5e1a,	// (0x00036580) list_single_cmail_header_detail_pane_t1

0x5e7a,	// (0x000365e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5e7a,	// (0x000365e0) list_single_cmail_header_editor_pane_bg

0x3658,	// (0x00033dbe) list_cmail_body_pane_g1

0x3661,	// (0x00033dc7) list_cmail_body_pane_t1

0x2177,	// (0x000328dd) list_single_cmail_header_editor_pane_bg_g1

0xdf8c,	// (0x0003e6f2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2187,	// (0x000328ed) list_single_cmail_header_editor_pane_bg_g1_copy2

0x217f,	// (0x000328e5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2434,	// (0x00032b9a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x21a7,	// (0x0003290d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2197,	// (0x000328fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x219f,	// (0x00032905) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdf6c,	// (0x0003e6d2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc915,	// (0x0003d07b) calenote_gesture_pane_ParamLimits

0xc915,	// (0x0003d07b) calenote_gesture_pane

0xc92d,	// (0x0003d093) calenote_window_pane_ParamLimits

0xc92d,	// (0x0003d093) calenote_window_pane

0x366f,	// (0x00033dd5) popup_note_window_cp01

0xc945,	// (0x0003d0ab) calenote_swipe_1_pane_ParamLimits

0xc945,	// (0x0003d0ab) calenote_swipe_1_pane

0xc737,	// (0x0003ce9d) calenote_swipe_2_pane_ParamLimits

0xc737,	// (0x0003ce9d) calenote_swipe_2_pane

0x32cc,	// (0x00033a32) calenote_swipe_1_pane_g1_ParamLimits

0x32cc,	// (0x00033a32) calenote_swipe_1_pane_g1

0x32d9,	// (0x00033a3f) calenote_swipe_1_pane_g2_ParamLimits

0x32d9,	// (0x00033a3f) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0004043c) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0004043c) calenote_swipe_1_pane_g

0x3681,	// (0x00033de7) calenote_swipe_1_pane_t1_ParamLimits

0x3681,	// (0x00033de7) calenote_swipe_1_pane_t1

0x32cc,	// (0x00033a32) calenote_swipe_2_pane_g1_ParamLimits

0x32cc,	// (0x00033a32) calenote_swipe_2_pane_g1

0x36a0,	// (0x00033e06) calenote_swipe_2_pane_g2_ParamLimits

0x36a0,	// (0x00033e06) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x00040524) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x00040524) calenote_swipe_2_pane_g

0x36ac,	// (0x00033e12) calenote_swipe_2_pane_t1_ParamLimits

0x36ac,	// (0x00033e12) calenote_swipe_2_pane_t1

0xd3fa,	// (0x0003db60) main_mup_navstr_pane

0x9cb3,	// (0x0003a419) main_mup3_pane_t7_ParamLimits

0x9cb3,	// (0x0003a419) main_mup3_pane_t7

0xa61f,	// (0x0003ad85) main_mp4_pane_g6_ParamLimits

0xa61f,	// (0x0003ad85) main_mp4_pane_g6

0xa96f,	// (0x0003b0d5) main_image3_pane_t4_ParamLimits

0xa96f,	// (0x0003b0d5) main_image3_pane_t4

0xc958,	// (0x0003d0be) popup_navstr_preview_pane_ParamLimits

0xc958,	// (0x0003d0be) popup_navstr_preview_pane

0xc964,	// (0x0003d0ca) scroll_navstr_pane_ParamLimits

0xc964,	// (0x0003d0ca) scroll_navstr_pane

0xd3fa,	// (0x0003db60) bg_popup_preview_window_pane_cp04

0x36d3,	// (0x00033e39) popup_navstr_preview_pane_t1

0xc970,	// (0x0003d0d6) scroll_navstr_pane_g1_ParamLimits

0xc970,	// (0x0003d0d6) scroll_navstr_pane_g1

0xc97d,	// (0x0003d0e3) scroll_navstr_pane_t1_ParamLimits

0xc97d,	// (0x0003d0e3) scroll_navstr_pane_t1

0x3678,	// (0x00033dde) bg_button_pane_cp014

0x3678,	// (0x00033dde) bg_button_pane_cp030

0x57ce,	// (0x00035f34) list_double_fisheye_pane_g4_ParamLimits

0x57ce,	// (0x00035f34) list_double_fisheye_pane_g4

0x57da,	// (0x00035f40) list_double_fisheye_pane_g5_ParamLimits

0x57da,	// (0x00035f40) list_double_fisheye_pane_g5

0x037e,	// (0x00030ae4) sp_fs_scroll_pane_cp03

0x33a4,	// (0x00033b0a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x33b0,	// (0x00033b16) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00040459) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x33bc,	// (0x00033b22) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x35a9,	// (0x00033d0f) sp_fs_scroll_pane_cp02

0xdc8b,	// (0x0003e3f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdc8b,	// (0x0003e3f1) popup_sp_fs_calendar_preview_list_single_pane

0xd3fa,	// (0x0003db60) main_cam6_pano_pane

0xf0b0,	// (0x0003f816) main_mup3_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_phacti_pane

0xc302,	// (0x0003ca68) bg_button_pane_cp11

0xc31a,	// (0x0003ca80) main_mobtv_info_pane_g2_ParamLimits

0xc31a,	// (0x0003ca80) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x000403b9) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x000403b9) main_mobtv_info_pane_g

0xc4a6,	// (0x0003cc0c) sc_clock_pane_t5_ParamLimits

0xc4a6,	// (0x0003cc0c) sc_clock_pane_t5

0xc52f,	// (0x0003cc95) main_radioblah_pane_g1_ParamLimits

0x3201,	// (0x00033967) main_radioblah_pane_t3_ParamLimits

0x3201,	// (0x00033967) main_radioblah_pane_t3

0x3219,	// (0x0003397f) main_radioblah_pane_t4_ParamLimits

0x3219,	// (0x0003397f) main_radioblah_pane_t4

0xc54d,	// (0x0003ccb3) main_radioblah_text_pane_ParamLimits

0xc54d,	// (0x0003ccb3) main_radioblah_text_pane

0xc55a,	// (0x0003ccc0) main_radioblah_info_pane_g1_ParamLimits

0xc5e7,	// (0x0003cd4d) main_radioblah_info_pane_t4_ParamLimits

0xc5e7,	// (0x0003cd4d) main_radioblah_info_pane_t4

0xf0b0,	// (0x0003f816) main_sp_fs_calendar_pane

0xc98f,	// (0x0003d0f5) main_phacti_pane_g1

0xc997,	// (0x0003d0fd) phacti_note_pane_ParamLimits

0xc997,	// (0x0003d0fd) phacti_note_pane

0x36ea,	// (0x00033e50) phacti_term_pane_ParamLimits

0x36ea,	// (0x00033e50) phacti_term_pane

0x36ff,	// (0x00033e65) phacti_note_pane_t1_ParamLimits

0x36ff,	// (0x00033e65) phacti_note_pane_t1

0x5e91,	// (0x000365f7) phacti_term_pane_g1

0x5e99,	// (0x000365ff) phacti_term_pane_t1_ParamLimits

0x5e99,	// (0x000365ff) phacti_term_pane_t1

0x3748,	// (0x00033eae) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3750,	// (0x00033eb6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0004052e) popup_sp_fs_calendar_preview_list_single_pane_g

0x3758,	// (0x00033ebe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3758,	// (0x00033ebe) popup_sp_fs_calendar_preview_list_single_pane_t1

0x376e,	// (0x00033ed4) aid_popup_sp_fs_bg_corner_pane

0x13df,	// (0x00031b45) popup_sp_fs_calendar_preview_bg_pane_g1

0xd3fa,	// (0x0003db60) popup_sp_fs_calendar_preview_bg_pane

0x3776,	// (0x00033edc) popup_sp_fs_calendar_preview_list_pane

0x0edd,	// (0x00031643) bg_main_sp_fs_cale_pane_ParamLimits

0x0edd,	// (0x00031643) bg_main_sp_fs_cale_pane

0x5ecc,	// (0x00036632) listscroll_cale_mrui_pane_ParamLimits

0x5ecc,	// (0x00036632) listscroll_cale_mrui_pane

0x5ee1,	// (0x00036647) listscroll_sp_fs_schedule_track_pane

0x5eea,	// (0x00036650) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5eea,	// (0x00036650) main_sp_fs_ctrlbar_pane_cp01

0x37af,	// (0x00033f15) main_sp_fs_ribbon_pane

0x5efd,	// (0x00036663) popup_sp_fs_cale_preview_window

0x407e,	// (0x000347e4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x407e,	// (0x000347e4) list_single_sp_fs_schedule_track_pane

0x4091,	// (0x000347f7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4091,	// (0x000347f7) bg_sp_fs_highlight_list_pane_cp03

0xc9ed,	// (0x0003d153) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc9ed,	// (0x0003d153) list_single_sp_fs_schedule_track_pane_g1

0xc9f9,	// (0x0003d15f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc9f9,	// (0x0003d15f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x00040533) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x00040533) list_single_sp_fs_schedule_track_pane_g

0xca05,	// (0x0003d16b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xca05,	// (0x0003d16b) list_single_sp_fs_schedule_track_pane_t1

0xca1d,	// (0x0003d183) sp_fs_schedule_track_pane_ParamLimits

0xca1d,	// (0x0003d183) sp_fs_schedule_track_pane

0x37c9,	// (0x00033f2f) sp_fs_schedule_track_pane_g1

0x37d1,	// (0x00033f37) sp_fs_schedule_track_pane_g2

0x37d9,	// (0x00033f3f) sp_fs_schedule_track_pane_g3

0x37e1,	// (0x00033f47) sp_fs_schedule_track_pane_g4

0x37e9,	// (0x00033f4f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x00040538) sp_fs_schedule_track_pane_g

0x2177,	// (0x000328dd) bg_sp_fs_schedule_viewer_highlight_g1

0xdf8c,	// (0x0003e6f2) bg_sp_fs_schedule_viewer_highlight_g2

0x217f,	// (0x000328e5) bg_sp_fs_schedule_viewer_highlight_g3

0x2187,	// (0x000328ed) bg_sp_fs_schedule_viewer_highlight_g4

0x2434,	// (0x00032b9a) bg_sp_fs_schedule_viewer_highlight_g5

0x2197,	// (0x000328fd) bg_sp_fs_schedule_viewer_highlight_g6

0x219f,	// (0x00032905) bg_sp_fs_schedule_viewer_highlight_g7

0x21a7,	// (0x0003290d) bg_sp_fs_schedule_viewer_highlight_g8

0xdf6c,	// (0x0003e6d2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x00040543) bg_sp_fs_schedule_viewer_highlight_g

0xd3fa,	// (0x0003db60) bg_main_sp_fs_ribbon_pane

0xca2d,	// (0x0003d193) main_sp_fs_ribbon_pane_g1

0x37f1,	// (0x00033f57) main_sp_fs_ribbon_pane_t1

0xca36,	// (0x0003d19c) main_sp_fs_ribbon_pane_t2

0x3800,	// (0x00033f66) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x00040556) main_sp_fs_ribbon_pane_t

0x380f,	// (0x00033f75) main_sp_fs_ribbon_scheduler_pane

0x3817,	// (0x00033f7d) bg_main_sp_fs_ribbon_pane_g1

0x3820,	// (0x00033f86) bg_main_sp_fs_ribbon_pane_g2

0x3829,	// (0x00033f8f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0004055d) bg_main_sp_fs_ribbon_pane_g

0x3831,	// (0x00033f97) main_sp_fs_ribbon_scheduler_pane_g1

0x383a,	// (0x00033fa0) main_sp_fs_ribbon_scheduler_pane_g2

0x3843,	// (0x00033fa9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x00040564) main_sp_fs_ribbon_scheduler_pane_g

0x384c,	// (0x00033fb2) list_cale_mrui_pane

0xca45,	// (0x0003d1ab) sp_fs_scroll_pane_cp07_ParamLimits

0xca45,	// (0x0003d1ab) sp_fs_scroll_pane_cp07

0xca5d,	// (0x0003d1c3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xca5d,	// (0x0003d1c3) bg_sp_fs_schedule_viewer_highlight

0x3859,	// (0x00033fbf) list_single_sp_fs_schedule_track_pane_cp01

0x3861,	// (0x00033fc7) list_sp_fs_schedule_track_pane

0x3869,	// (0x00033fcf) sp_fs_scroll_pane_cp06_ParamLimits

0x3869,	// (0x00033fcf) sp_fs_scroll_pane_cp06

0x13df,	// (0x00031b45) bgmain_sp_fs_calendar_pane_g1

0x5f0c,	// (0x00036672) list_single_cale_mrui_pane_ParamLimits

0x5f0c,	// (0x00036672) list_single_cale_mrui_pane

0x5f2d,	// (0x00036693) list_single_cale_mrui_row_pane_ParamLimits

0x5f2d,	// (0x00036693) list_single_cale_mrui_row_pane

0x5f3a,	// (0x000366a0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5f3a,	// (0x000366a0) list_single_cale_mrui_row_pane_g1

0x5f72,	// (0x000366d8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5f72,	// (0x000366d8) list_single_cale_mrui_row_pane_t1

0x5f84,	// (0x000366ea) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5f84,	// (0x000366ea) list_single_cale_mrui_row_pane_t2

0x5fea,	// (0x00036750) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5fea,	// (0x00036750) list_single_cale_mrui_row_pane_t3

0x6019,	// (0x0003677f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6019,	// (0x0003677f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x00040572) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x00040572) list_single_cale_mrui_row_pane_t

0x6048,	// (0x000367ae) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6048,	// (0x000367ae) list_single_cmail_header_editor_pane_bg_cp01

0x6068,	// (0x000367ce) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6068,	// (0x000367ce) list_single_cmail_header_editor_pane_bg_cp02

0xca6a,	// (0x0003d1d0) main_radioblah_text_pane_t1_ParamLimits

0xca6a,	// (0x0003d1d0) main_radioblah_text_pane_t1

0x3931,	// (0x00034097) cam6_indi_pane_cp01

0x3939,	// (0x0003409f) cam6_mode_pane_cp01

0x3941,	// (0x000340a7) cam6_pano_pane

0x394a,	// (0x000340b0) cam6_zoom_pane_cp01

0x3952,	// (0x000340b8) cam6_pano_image_pane

0x395b,	// (0x000340c1) cam6_pano_pane_g1

0x2f68,	// (0x000336ce) cam6_pano_pane_g2

0x3964,	// (0x000340ca) cam6_pano_pane_g3

0x396d,	// (0x000340d3) cam6_pano_pane_g4

0x197e,	// (0x000320e4) cam6_pano_pane_g5

0x3976,	// (0x000340dc) cam6_pano_pane_g6

0x397e,	// (0x000340e4) cam6_pano_pane_g7

0x3986,	// (0x000340ec) cam6_pano_pane_g8

0x398f,	// (0x000340f5) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0004057b) cam6_pano_pane_g

0xd3fa,	// (0x0003db60) main_browser_tag_pane

0x36cb,	// (0x00033e31) grid_navstr_albumart_pane

0x3998,	// (0x000340fe) cell_navstr_albumart_pane_ParamLimits

0x3998,	// (0x000340fe) cell_navstr_albumart_pane

0xe88e,	// (0x0003eff4) cell_navstr_albumart_pane_g1

0x0cae,	// (0x00031414) cell_navstr_albumart_pane_g2

0x0cbe,	// (0x00031424) cell_navstr_albumart_pane_g3

0x0cb6,	// (0x0003141c) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0004058e) cell_navstr_albumart_pane_g

0xca84,	// (0x0003d1ea) bt_list_pane_ParamLimits

0xca84,	// (0x0003d1ea) bt_list_pane

0xca97,	// (0x0003d1fd) bt_list_pane_t1

0xcaa6,	// (0x0003d20c) bt_list_pane_t2

0x0001,

0xfe31,	// (0x00040597) bt_list_pane_t

0xd3fa,	// (0x0003db60) main_cale_prevew_pane

0xcab5,	// (0x0003d21b) popup_cale_preview_window_ParamLimits

0xcab5,	// (0x0003d21b) popup_cale_preview_window

0xf0b0,	// (0x0003f816) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0b0,	// (0x0003f816) bg_popup_preview_window_pane_cp05

0x39b0,	// (0x00034116) list_cale_preview_pane_ParamLimits

0x39b0,	// (0x00034116) list_cale_preview_pane

0x39bc,	// (0x00034122) list_double_cale_preview_pane_ParamLimits

0x39bc,	// (0x00034122) list_double_cale_preview_pane

0x39ce,	// (0x00034134) list_single_cale_preview_pane_ParamLimits

0x39ce,	// (0x00034134) list_single_cale_preview_pane

0x39e2,	// (0x00034148) list_single_cale_preview_pane_g1

0x39ea,	// (0x00034150) list_single_cale_preview_pane_t1_ParamLimits

0x39ea,	// (0x00034150) list_single_cale_preview_pane_t1

0x39ff,	// (0x00034165) list_double_cale_preview_pane_g1

0x3a07,	// (0x0003416d) list_double_cale_preview_pane_t1_ParamLimits

0x3a07,	// (0x0003416d) list_double_cale_preview_pane_t1

0x3a1c,	// (0x00034182) list_double_cale_preview_pane_t2_ParamLimits

0x3a1c,	// (0x00034182) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0004059c) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0004059c) list_double_cale_preview_pane_t

0xd3fa,	// (0x0003db60) main_ezdial_pane

0xf0b0,	// (0x0003f816) main_sp_fs_email_pane_ParamLimits

0xc781,	// (0x0003cee7) cmail_ddmenu_btn01_pane_ParamLimits

0xc781,	// (0x0003cee7) cmail_ddmenu_btn01_pane

0xc79e,	// (0x0003cf04) cmail_ddmenu_btn02_pane_ParamLimits

0xc79e,	// (0x0003cf04) cmail_ddmenu_btn02_pane

0xc7bc,	// (0x0003cf22) cmail_ddmenu_btn03_pane_ParamLimits

0xc7bc,	// (0x0003cf22) cmail_ddmenu_btn03_pane

0xc7e8,	// (0x0003cf4e) main_sp_fs_ctrlbar_pane_ParamLimits

0xc7fe,	// (0x0003cf64) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc8c3,	// (0x0003d029) list_cmail_body_pane_ParamLimits

0x35bf,	// (0x00033d25) bg_button_pane_cp12

0x35d4,	// (0x00033d3a) list_single_cmail_header_detail_pane_g3_ParamLimits

0x35d4,	// (0x00033d3a) list_single_cmail_header_detail_pane_g3

0x5e56,	// (0x000365bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5e56,	// (0x000365bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0004051f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0004051f) list_single_cmail_header_detail_pane_t

0x5eae,	// (0x00036614) phacti_term_pane_t2_ParamLimits

0x5eae,	// (0x00036614) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00040529) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00040529) phacti_term_pane_t

0x3a34,	// (0x0003419a) aid_size_list_single_double

0xcaca,	// (0x0003d230) popup_ezdial_listscroll_window

0xcae3,	// (0x0003d249) popup_number_entry_window_cp01

0xdd26,	// (0x0003e48c) bg_popup_call_pane_cp09

0x3a40,	// (0x000341a6) ezdial_list_pane

0x3a48,	// (0x000341ae) scroll_pane_cp23

0x11cc,	// (0x00031932) bg_button_pane_cp028_ParamLimits

0x11cc,	// (0x00031932) bg_button_pane_cp028

0xcaef,	// (0x0003d255) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcaef,	// (0x0003d255) cmail_ddmenu_btn01_pane_g1

0xcaff,	// (0x0003d265) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcaff,	// (0x0003d265) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x000405a1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x000405a1) cmail_ddmenu_btn01_pane_g

0x3a50,	// (0x000341b6) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a50,	// (0x000341b6) cmail_ddmenu_btn01_pane_t1

0x0edd,	// (0x00031643) bg_button_pane_cp029_ParamLimits

0x0edd,	// (0x00031643) bg_button_pane_cp029

0xcb0b,	// (0x0003d271) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcb0b,	// (0x0003d271) cmail_ddmenu_btn02_pane_g1

0xcb24,	// (0x0003d28a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcb24,	// (0x0003d28a) cmail_ddmenu_btn02_pane_t1

0x4091,	// (0x000347f7) bg_button_pane_cp031_ParamLimits

0x4091,	// (0x000347f7) bg_button_pane_cp031

0xcb0b,	// (0x0003d271) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcb0b,	// (0x0003d271) cmail_ddmenu_btn03_pane_g1

0xcb24,	// (0x0003d28a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcb24,	// (0x0003d28a) cmail_ddmenu_btn03_pane_t1

0xa82c,	// (0x0003af92) cell_dialer2_keypad_pane_t1_ParamLimits

0xa846,	// (0x0003afac) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa846,	// (0x0003afac) cell_dialer2_keypad_pane_t1_copy1

0xc146,	// (0x0003c8ac) ncimui_group_button_pane

0xf0b0,	// (0x0003f816) main_sp_fs_calendar_pane_ParamLimits

0xc8d8,	// (0x0003d03e) list_single_cmail_header_caption_pane_ParamLimits

0x5ec3,	// (0x00036629) aid_recal_txt_sm_pane

0xd3fa,	// (0x0003db60) mian_recal_day_pane

0x5efd,	// (0x00036663) popup_sp_fs_cale_preview_window_ParamLimits

0x3a66,	// (0x000341cc) list_recal_day_pane

0x609f,	// (0x00036805) list_single_recal_day_pane_ParamLimits

0x609f,	// (0x00036805) list_single_recal_day_pane

0x3aba,	// (0x00034220) list_single_recal_day_pane_g1_ParamLimits

0x3aba,	// (0x00034220) list_single_recal_day_pane_g1

0x60b1,	// (0x00036817) list_single_recal_day_pane_g2_ParamLimits

0x60b1,	// (0x00036817) list_single_recal_day_pane_g2

0x60bd,	// (0x00036823) list_single_recal_day_pane_g3_ParamLimits

0x60bd,	// (0x00036823) list_single_recal_day_pane_g3

0x60c9,	// (0x0003682f) list_single_recal_day_pane_g4_ParamLimits

0x60c9,	// (0x0003682f) list_single_recal_day_pane_g4

0x60d5,	// (0x0003683b) list_single_recal_day_pane_g5_ParamLimits

0x60d5,	// (0x0003683b) list_single_recal_day_pane_g5

0x60e9,	// (0x0003684f) list_single_recal_day_pane_g6_ParamLimits

0x60e9,	// (0x0003684f) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x000405b0) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x000405b0) list_single_recal_day_pane_g

0x60fd,	// (0x00036863) list_single_recal_day_pane_t1

0x610f,	// (0x00036875) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x000405bb) list_single_recal_day_pane_t

0xcb48,	// (0x0003d2ae) ncimui_query_button_pane_ParamLimits

0xcb48,	// (0x0003d2ae) ncimui_query_button_pane

0xcb58,	// (0x0003d2be) ncimui_query_button_pane_t1_ParamLimits

0xcb58,	// (0x0003d2be) ncimui_query_button_pane_t1

0x3b22,	// (0x00034288) ncimui_query_button_pane_t2_ParamLimits

0x3b22,	// (0x00034288) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x000405c0) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x000405c0) ncimui_query_button_pane_t

0xcb6b,	// (0x0003d2d1) query_button_pane_ParamLimits

0xcb6b,	// (0x0003d2d1) query_button_pane

0xd3fa,	// (0x0003db60) bg_button_pane_cp0028

0x3b35,	// (0x0003429b) query_button_pane_t1

0x8e03,	// (0x00039569) main_tport_pane_ParamLimits

0xc80f,	// (0x0003cf75) bg_popup_window_pane_cp01_ParamLimits

0xc80f,	// (0x0003cf75) bg_popup_window_pane_cp01

0xc81b,	// (0x0003cf81) heading_pane_cp08_ParamLimits

0xc81b,	// (0x0003cf81) heading_pane_cp08

0xc827,	// (0x0003cf8d) heading_pane_cp07_ParamLimits

0xc827,	// (0x0003cf8d) heading_pane_cp07

0x357b,	// (0x00033ce1) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0004050c) cell_tport_appsw_pane_g

0x51c6,	// (0x0003592c) input_candi_list_open_g1

0xe157,	// (0x0003e8bd) list_cale_time_pane_g6_ParamLimits

0xe157,	// (0x0003e8bd) list_cale_time_pane_g6

0x97e9,	// (0x00039f4f) aid_size_touch_calib_1_ParamLimits

0x97e9,	// (0x00039f4f) aid_size_touch_calib_1

0x97f5,	// (0x00039f5b) aid_size_touch_calib_2_ParamLimits

0x97f5,	// (0x00039f5b) aid_size_touch_calib_2

0x9801,	// (0x00039f67) aid_size_touch_calib_3_ParamLimits

0x9801,	// (0x00039f67) aid_size_touch_calib_3

0x980f,	// (0x00039f75) aid_size_touch_calib_4_ParamLimits

0x980f,	// (0x00039f75) aid_size_touch_calib_4

0x981d,	// (0x00039f83) main_touch_calib_button_group_pane_ParamLimits

0x981d,	// (0x00039f83) main_touch_calib_button_group_pane

0x982b,	// (0x00039f91) main_touch_calib_pane_g1_ParamLimits

0x9837,	// (0x00039f9d) main_touch_calib_pane_g2_ParamLimits

0x9843,	// (0x00039fa9) main_touch_calib_pane_g3_ParamLimits

0x984f,	// (0x00039fb5) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0003feca) main_touch_calib_pane_g_ParamLimits

0x985b,	// (0x00039fc1) main_touch_calib_pane_t1_ParamLimits

0x9870,	// (0x00039fd6) main_touch_calib_pane_t2_ParamLimits

0x9885,	// (0x00039feb) main_touch_calib_pane_t3_ParamLimits

0x9897,	// (0x00039ffd) main_touch_calib_pane_t4_ParamLimits

0x98a9,	// (0x0003a00f) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0003fed3) main_touch_calib_pane_t_ParamLimits

0x1735,	// (0x00031e9b) list_single_fp_cale_pane_g3_ParamLimits

0x1735,	// (0x00031e9b) list_single_fp_cale_pane_g3

0xf0b0,	// (0x0003f816) bg_button_pane_cp012_ParamLimits

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp03_ParamLimits

0xb4f4,	// (0x0003bc5a) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0b0,	// (0x0003f816) bg_vkb2_func_pane_cp04_ParamLimits

0xc0d2,	// (0x0003c838) main_ncimui_button_group_pane_ParamLimits

0xc0d2,	// (0x0003c838) main_ncimui_button_group_pane

0xc134,	// (0x0003c89a) main_ncimui_pane_t3_ParamLimits

0xc134,	// (0x0003c89a) main_ncimui_pane_t3

0x36e1,	// (0x00033e47) phacti_button_group_pane

0x3a34,	// (0x0003419a) aid_size_list_single_double_ParamLimits

0xcaca,	// (0x0003d230) popup_ezdial_listscroll_window_ParamLimits

0xcae3,	// (0x0003d249) popup_number_entry_window_cp01_ParamLimits

0xcb78,	// (0x0003d2de) phacti_button_pane_ParamLimits

0xcb78,	// (0x0003d2de) phacti_button_pane

0xd3fa,	// (0x0003db60) bg_button_pane_cp14

0x3b43,	// (0x000342a9) phacti_button_pane_t1

0xcb87,	// (0x0003d2ed) main_touch_calib_button_pane_ParamLimits

0xcb87,	// (0x0003d2ed) main_touch_calib_button_pane

0xdb75,	// (0x0003e2db) bg_button_pane_cp18_ParamLimits

0xdb75,	// (0x0003e2db) bg_button_pane_cp18

0x3b51,	// (0x000342b7) main_touch_calib_button_pane_t1_ParamLimits

0x3b51,	// (0x000342b7) main_touch_calib_button_pane_t1

0x3b67,	// (0x000342cd) main_touch_calib_button_pane_t2_ParamLimits

0x3b67,	// (0x000342cd) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x000405c5) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x000405c5) main_touch_calib_button_pane_t

0xd3fa,	// (0x0003db60) cell_ncimui_button_pane

0xd3fa,	// (0x0003db60) bg_button_pane_cp032

0x3b85,	// (0x000342eb) cell_ncimui_button_pane_t1

0xa898,	// (0x0003affe) image3_infobar_pane_ParamLimits

0xa898,	// (0x0003affe) image3_infobar_pane

0xc4c6,	// (0x0003cc2c) fs_bigclock_status_pane_ParamLimits

0xc4c6,	// (0x0003cc2c) fs_bigclock_status_pane

0xc4d3,	// (0x0003cc39) main_fs_bigclock_clock_pane_ParamLimits

0xc4d3,	// (0x0003cc39) main_fs_bigclock_clock_pane

0xc4e5,	// (0x0003cc4b) main_fs_bigclock_indi_pane_ParamLimits

0xc4e5,	// (0x0003cc4b) main_fs_bigclock_indi_pane

0xc505,	// (0x0003cc6b) main_fs_bigclock_swipe_pane_ParamLimits

0xc505,	// (0x0003cc6b) main_fs_bigclock_swipe_pane

0xd3fa,	// (0x0003db60) main_fs_clock_dumped_data

0x3075,	// (0x000337db) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3075,	// (0x000337db) list_single_fs_bigclock_indicator_pane_g1

0x308f,	// (0x000337f5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x308f,	// (0x000337f5) list_single_fs_bigclock_indicator_pane_g2

0x30a9,	// (0x0003380f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x30a9,	// (0x0003380f) list_single_fs_bigclock_indicator_pane_g3

0x30c3,	// (0x00033829) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x30c3,	// (0x00033829) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x000403ed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x000403ed) list_single_fs_bigclock_indicator_pane_g

0x30ec,	// (0x00033852) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x30ec,	// (0x00033852) list_single_fs_bigclock_indicator_pane_t1

0x3114,	// (0x0003387a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3114,	// (0x0003387a) list_single_fs_bigclock_indicator_pane_t2

0x313c,	// (0x000338a2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x313c,	// (0x000338a2) list_single_fs_bigclock_indicator_pane_t3

0x3164,	// (0x000338ca) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3164,	// (0x000338ca) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x000403f8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x000403f8) list_single_fs_bigclock_indicator_pane_t

0x3b93,	// (0x000342f9) image3_infobar_fav_pane_ParamLimits

0x3b93,	// (0x000342f9) image3_infobar_fav_pane

0x3ba3,	// (0x00034309) image3_infobar_loc_pane_ParamLimits

0x3ba3,	// (0x00034309) image3_infobar_loc_pane

0x3bb7,	// (0x0003431d) image3_infobar_time_pane_ParamLimits

0x3bb7,	// (0x0003431d) image3_infobar_time_pane

0x13df,	// (0x00031b45) image3_infobar_time_pane_g1

0x3bc7,	// (0x0003432d) image3_infobar_time_pane_t1

0x13df,	// (0x00031b45) image3_infobar_loc_pane_g1

0x3bd5,	// (0x0003433b) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x000405ca) image3_infobar_loc_pane_g

0x3bdd,	// (0x00034343) image3_infobar_loc_pane_t1

0x13df,	// (0x00031b45) image3_infobar_fav_pane_g1

0x3beb,	// (0x00034351) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x000405cf) image3_infobar_fav_pane_g

0x3bf3,	// (0x00034359) fs_bigclock_status_battery_pane

0x3bfc,	// (0x00034362) fs_bigclock_status_signal_pane

0x3c05,	// (0x0003436b) fs_bigclock_status_title_pane

0x3c0e,	// (0x00034374) fs_bigclock_status_signal_pane_g1

0x3c17,	// (0x0003437d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x000405d4) fs_bigclock_status_signal_pane_g

0x3c1f,	// (0x00034385) fs_bigclock_status_battery_pane_g1

0x3c28,	// (0x0003438e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x000405d9) fs_bigclock_status_battery_pane_g

0x3c30,	// (0x00034396) fs_bigclock_status_title_pane_t1

0xcb97,	// (0x0003d2fd) main_fs_bigclock_clock_pane_g1

0xcb97,	// (0x0003d2fd) main_fs_bigclock_clock_pane_g2

0xcba4,	// (0x0003d30a) main_fs_bigclock_clock_pane_g3

0xcba4,	// (0x0003d30a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x000405de) main_fs_bigclock_clock_pane_g

0xcbb0,	// (0x0003d316) main_fs_bigclock_clock_pane_t1

0xcbc3,	// (0x0003d329) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x000405e7) main_fs_bigclock_clock_pane_t

0x3c3e,	// (0x000343a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3c3e,	// (0x000343a4) list_single_fs_bigclock_indicator_pane

0x3c4f,	// (0x000343b5) list_single_fs_bigclock_pane_ParamLimits

0x3c4f,	// (0x000343b5) list_single_fs_bigclock_pane

0x3c75,	// (0x000343db) main_fs_bigclock_indicator_pane_t1

0x3c84,	// (0x000343ea) list_single_fs_bigclock_pane_g1

0x3c8c,	// (0x000343f2) list_single_fs_bigclock_pane_t1

0x13df,	// (0x00031b45) main_fs_bigclock_swipe_pane_g1

0x3ccf,	// (0x00034435) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x000405f8) main_fs_bigclock_swipe_pane_g

0x3cd7,	// (0x0003443d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3cd7,	// (0x0003443d) main_fs_bigclock_swipe_pane_t1

0x7fc2,	// (0x00038728) call_type_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_btmg_pane

0x5f66,	// (0x000366cc) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5f66,	// (0x000366cc) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0004056b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0004056b) list_single_cale_mrui_row_pane_g

0x608e,	// (0x000367f4) list_recal_vselct_arw_lo_pane

0x3a97,	// (0x000341fd) list_recal_vselct_arw_up_pane

0x6096,	// (0x000367fc) list_recal_vselct_pane

0xcc18,	// (0x0003d37e) btmg_button_pane

0xcc20,	// (0x0003d386) main_btmg_pane_g1

0xd3fa,	// (0x0003db60) bg_button_pane_cp044

0x3cf4,	// (0x0003445a) btmg_button_pane_t1

0x0ec9,	// (0x0003162f) aid_listscroll_gen

0xf0b0,	// (0x0003f816) main_cntbar_detail_pane

0x35a1,	// (0x00033d07) list_cmail_folder_pane

0x037e,	// (0x00030ae4) sp_fs_scroll_pane_cp03_ParamLimits

0xc8d8,	// (0x0003d03e) list_single_fs_dyc_pane_cp01_ParamLimits

0xc8d8,	// (0x0003d03e) list_single_fs_dyc_pane_cp01

0x3d16,	// (0x0003447c) aid_size_cmail_indent

0x6121,	// (0x00036887) list_single_dyc_row_pane_cp01

0xcc42,	// (0x0003d3a8) cntbar_detail_list_pane_ParamLimits

0xcc42,	// (0x0003d3a8) cntbar_detail_list_pane

0xcc78,	// (0x0003d3de) main_cntbar_detail_cont_pane_ParamLimits

0xcc78,	// (0x0003d3de) main_cntbar_detail_cont_pane

0x7fb6,	// (0x0003871c) scroll_pane_cp032_ParamLimits

0x7fb6,	// (0x0003871c) scroll_pane_cp032

0xcc84,	// (0x0003d3ea) cntbar_detail_list_event_pane_ParamLimits

0xcc84,	// (0x0003d3ea) cntbar_detail_list_event_pane

0xcc4e,	// (0x0003d3b4) cntbar_detail_list_shct_pane

0xdfda,	// (0x0003e740) aid_list_gen

0x3d28,	// (0x0003448e) aid_scroll

0x3d31,	// (0x00034497) aid_size_touch_scroll_bar

0xba3a,	// (0x0003c1a0) aid_list_double

0xcc94,	// (0x0003d3fa) aid_list_single

0xba3a,	// (0x0003c1a0) aid_list_single_lg

0x612a,	// (0x00036890) aid_list_z_g_a_sm

0x6132,	// (0x00036898) aid_list_z_g_d

0x613a,	// (0x000368a0) aid_txt_z_prm

0x6148,	// (0x000368ae) aid_txt_z_prm_cp01

0x6156,	// (0x000368bc) aid_txt_z_sec

0xcc9d,	// (0x0003d403) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcc9d,	// (0x0003d403) main_cntbar_detail_cont_pane_g1

0xccaa,	// (0x0003d410) main_cntbar_detail_cont_pane_g2_ParamLimits

0xccaa,	// (0x0003d410) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x000405fd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x000405fd) main_cntbar_detail_cont_pane_g

0x3d42,	// (0x000344a8) main_cntbar_detail_cont_pane_t1

0x3d50,	// (0x000344b6) main_cntbar_detail_cont_pane_t2

0x3d5e,	// (0x000344c4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00040602) main_cntbar_detail_cont_pane_t

0xccb6,	// (0x0003d41c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xccb6,	// (0x0003d41c) cell_cntbar_detail_list_shct_pane

0x3d6c,	// (0x000344d2) cntbar_detail_list_shct_pane_g1

0x3d75,	// (0x000344db) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00040609) cntbar_detail_list_shct_pane_g

0xccc8,	// (0x0003d42e) cntbar_detail_list_event_pane_g1_ParamLimits

0xccc8,	// (0x0003d42e) cntbar_detail_list_event_pane_g1

0xccd4,	// (0x0003d43a) cntbar_detail_list_event_pane_g2_ParamLimits

0xccd4,	// (0x0003d43a) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0004060e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0004060e) cntbar_detail_list_event_pane_g

0xcd40,	// (0x0003d4a6) cntbar_detail_list_event_pane_t1_ParamLimits

0xcd40,	// (0x0003d4a6) cntbar_detail_list_event_pane_t1

0xcd55,	// (0x0003d4bb) cntbar_detail_list_event_pane_t2_ParamLimits

0xcd55,	// (0x0003d4bb) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0004061b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0004061b) cntbar_detail_list_event_pane_t

0x13df,	// (0x00031b45) cell_cntbar_detail_list_shct_pane_g1

0xe71a,	// (0x0003ee80) navi_pane_mv_g3

0xf0b0,	// (0x0003f816) main_cntbar_detail_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_notif_wgt_pane

0xa576,	// (0x0003acdc) aid_tch_main_mp4_pane_g4

0xa791,	// (0x0003aef7) popup_slider_window_cp02

0x6084,	// (0x000367ea) list_recal_day_event_pane

0xcc28,	// (0x0003d38e) cntbar_detail_btn_pane_ParamLimits

0xcc28,	// (0x0003d38e) cntbar_detail_btn_pane

0xcc34,	// (0x0003d39a) cntbar_detail_btn_pane_cp01_ParamLimits

0xcc34,	// (0x0003d39a) cntbar_detail_btn_pane_cp01

0xcc4e,	// (0x0003d3b4) cntbar_detail_list_shct_pane_ParamLimits

0xcc5a,	// (0x0003d3c0) cntbar_detail_pane_g1_ParamLimits

0xcc5a,	// (0x0003d3c0) cntbar_detail_pane_g1

0xcc66,	// (0x0003d3cc) cntbar_detail_pane_t1_ParamLimits

0xcc66,	// (0x0003d3cc) cntbar_detail_pane_t1

0xcce0,	// (0x0003d446) cntbar_detail_list_event_pane_g3_ParamLimits

0xcce0,	// (0x0003d446) cntbar_detail_list_event_pane_g3

0xccf8,	// (0x0003d45e) cntbar_detail_list_event_pane_g4_ParamLimits

0xccf8,	// (0x0003d45e) cntbar_detail_list_event_pane_g4

0xcd10,	// (0x0003d476) cntbar_detail_list_event_pane_g5_ParamLimits

0xcd10,	// (0x0003d476) cntbar_detail_list_event_pane_g5

0xcd28,	// (0x0003d48e) cntbar_detail_list_event_pane_g6_ParamLimits

0xcd28,	// (0x0003d48e) cntbar_detail_list_event_pane_g6

0xcd6a,	// (0x0003d4d0) cntbar_detail_list_event_pane_t3_ParamLimits

0xcd6a,	// (0x0003d4d0) cntbar_detail_list_event_pane_t3

0xcd7c,	// (0x0003d4e2) popup_notif_wgt_window_ParamLimits

0xcd7c,	// (0x0003d4e2) popup_notif_wgt_window

0xcd8a,	// (0x0003d4f0) popup_submenu_window_cp01_ParamLimits

0xcd8a,	// (0x0003d4f0) popup_submenu_window_cp01

0xdd26,	// (0x0003e48c) bg_popup_window_pane_cp10

0x3d7e,	// (0x000344e4) listscroll_notif_wgt_pane

0x3d8f,	// (0x000344f5) list_notif_wgt_window

0x3d98,	// (0x000344fe) scroll_pane_cp033

0xcd96,	// (0x0003d4fc) list_notif_wgt_row_pane_ParamLimits

0xcd96,	// (0x0003d4fc) list_notif_wgt_row_pane

0x3da1,	// (0x00034507) aid_size_list_notif_wgt_del

0x3dae,	// (0x00034514) list_notif_wgt_row_pane_g1

0x3dba,	// (0x00034520) list_notif_wgt_row_pane_g2

0x3dc9,	// (0x0003452f) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00040622) list_notif_wgt_row_pane_g

0x3dd6,	// (0x0003453c) list_notif_wgt_row_pane_t1

0x3dec,	// (0x00034552) list_notif_wgt_row_pane_t2

0x3dfe,	// (0x00034564) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00040629) list_notif_wgt_row_pane_t

0x2476,	// (0x00032bdc) list_recal_day_event_pane_g1

0x3e10,	// (0x00034576) list_recal_day_event_pane_t1

0xd3fa,	// (0x0003db60) bg_button_pane_cp045

0xcda8,	// (0x0003d50e) cntbar_detail_btn_pane_t1

0x0edd,	// (0x00031643) main_callh_pane_ParamLimits

0x0edd,	// (0x00031643) main_callh_pane

0xd3fa,	// (0x0003db60) main_coverflow0_pane

0xd3fa,	// (0x0003db60) main_wgtman_pane

0xc517,	// (0x0003cc7d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc517,	// (0x0003cc7d) main_fs_bigclock_unlock_btn_pane

0x3573,	// (0x00033cd9) bg_button_pane_cp16

0x3583,	// (0x00033ce9) cell_tport_appsw_pane_g3

0xcdb6,	// (0x0003d51c) cf0_flow_pane_ParamLimits

0xcdb6,	// (0x0003d51c) cf0_flow_pane

0x3e1f,	// (0x00034585) listscroll_cf0_pane

0x3e28,	// (0x0003458e) main_cf0_pane_g1

0xcdc5,	// (0x0003d52b) main_cf0_pane_t1_ParamLimits

0xcdc5,	// (0x0003d52b) main_cf0_pane_t1

0xcdd7,	// (0x0003d53d) main_cf0_pane_t2_ParamLimits

0xcdd7,	// (0x0003d53d) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00040635) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00040635) main_cf0_pane_t

0x3e3a,	// (0x000345a0) scroll_pane_cp11

0xcde9,	// (0x0003d54f) cf0_flow_pane_g1

0xcdf1,	// (0x0003d557) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0004063a) cf0_flow_pane_g

0xcdf9,	// (0x0003d55f) cf0_flow_pane_t1

0xd3fa,	// (0x0003db60) main_call6_pane

0xd3fa,	// (0x0003db60) main_calllock_pane

0xce07,	// (0x0003d56d) call6_btn_grp_pane_ParamLimits

0xce07,	// (0x0003d56d) call6_btn_grp_pane

0xce14,	// (0x0003d57a) call6_pane_g1_ParamLimits

0xce14,	// (0x0003d57a) call6_pane_g1

0xce21,	// (0x0003d587) popup_call6_1st_window_ParamLimits

0xce21,	// (0x0003d587) popup_call6_1st_window

0xce2d,	// (0x0003d593) popup_call6_2nd_window_ParamLimits

0xce2d,	// (0x0003d593) popup_call6_2nd_window

0xce39,	// (0x0003d59f) cell_call6_btn_pane_ParamLimits

0xce39,	// (0x0003d59f) cell_call6_btn_pane

0xdd26,	// (0x0003e48c) bg_popup_call2_in_pane_cp03

0x3e43,	// (0x000345a9) popup_call6_1st_window_g1

0x3e4b,	// (0x000345b1) popup_call6_1st_window_g2

0x3e53,	// (0x000345b9) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0004063f) popup_call6_1st_window_g

0x3e5b,	// (0x000345c1) popup_call6_1st_window_t1

0x3e6a,	// (0x000345d0) popup_call6_1st_window_t2

0x3e78,	// (0x000345de) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00040646) popup_call6_1st_window_t

0xdd26,	// (0x0003e48c) bg_popup_call2_in_pane_cp04

0x3e43,	// (0x000345a9) popup_call6_2nd_window_g1

0x3e4b,	// (0x000345b1) popup_call6_2nd_window_g2

0x3e53,	// (0x000345b9) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0004063f) popup_call6_2nd_window_g

0x3e5b,	// (0x000345c1) popup_call6_2nd_window_t1

0xd3fa,	// (0x0003db60) bg_button_pane_cp15

0x3e86,	// (0x000345ec) cell_call6_btn_pane_g1

0x3e8f,	// (0x000345f5) cell_call6_btn_pane_t1

0xce48,	// (0x0003d5ae) listscroll_wgtman_pane_ParamLimits

0xce48,	// (0x0003d5ae) listscroll_wgtman_pane

0xce64,	// (0x0003d5ca) wgtman_btn_pane_ParamLimits

0xce64,	// (0x0003d5ca) wgtman_btn_pane

0xe532,	// (0x0003ec98) aid_scroll_copy1

0x3e9e,	// (0x00034604) list_wgtman_pane

0xce97,	// (0x0003d5fd) wgtman_btn_pane_g1_ParamLimits

0xce97,	// (0x0003d5fd) wgtman_btn_pane_g1

0xcebf,	// (0x0003d625) wgtman_btn_pane_t1_ParamLimits

0xcebf,	// (0x0003d625) wgtman_btn_pane_t1

0x3ea8,	// (0x0003460e) wgtman_btn_pane_t2_ParamLimits

0x3ea8,	// (0x0003460e) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0004064d) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0004064d) wgtman_btn_pane_t

0xcd96,	// (0x0003d4fc) listrow_wgtman_pane_ParamLimits

0xcd96,	// (0x0003d4fc) listrow_wgtman_pane

0xcef6,	// (0x0003d65c) listrow_wgtman_pane_g1

0xcf03,	// (0x0003d669) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00040652) listrow_wgtman_pane_g

0x6164,	// (0x000368ca) listrow_wgtman_pane_t1

0x617c,	// (0x000368e2) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00040657) listrow_wgtman_pane_t

0x61a2,	// (0x00036908) wait_bar_pane_cp09

0x3ebf,	// (0x00034625) main_calllock_btn_pane

0x3ec7,	// (0x0003462d) main_calllock_pane_g1

0xd3fa,	// (0x0003db60) bg_button_pane_cp17

0x3ed0,	// (0x00034636) main_calllock_btn_pane_g1

0x3ed9,	// (0x0003463f) main_calllock_btn_pane_t1

0xd3fa,	// (0x0003db60) main_dialer3_pane

0xd3fa,	// (0x0003db60) main_fmrd2_pane

0x13df,	// (0x00031b45) main_fs_bigclock_unlock_btn_pane_g1

0x3ef0,	// (0x00034656) main_fs_bigclock_unlock_btn_pane_t1

0xcf1b,	// (0x0003d681) area_fmrd2_info_pane_ParamLimits

0xcf1b,	// (0x0003d681) area_fmrd2_info_pane

0xcf27,	// (0x0003d68d) area_fmrd2_visual_pane_ParamLimits

0xcf27,	// (0x0003d68d) area_fmrd2_visual_pane

0xcf35,	// (0x0003d69b) fmrd2_indi_pane_ParamLimits

0xcf35,	// (0x0003d69b) fmrd2_indi_pane

0xcf42,	// (0x0003d6a8) area_fmrd2_visual_pane_g1

0xcf4a,	// (0x0003d6b0) area_fmrd2_visual_pane_t1

0xcf58,	// (0x0003d6be) area_fmrd2_visual_pane_t2

0xcf66,	// (0x0003d6cc) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00040661) area_fmrd2_visual_pane_t

0xcf74,	// (0x0003d6da) area_fmrd2_info_pane_g1

0xcf7c,	// (0x0003d6e2) area_fmrd2_info_pane_t1

0xcf8a,	// (0x0003d6f0) area_fmrd2_info_pane_t2

0xcf98,	// (0x0003d6fe) area_fmrd2_info_pane_t3

0xcfa6,	// (0x0003d70c) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00040668) area_fmrd2_info_pane_t

0xcfb4,	// (0x0003d71a) fmrd2_indi_pane_t1

0xcfc2,	// (0x0003d728) fmrd2_indi_pane_t2

0xcfd0,	// (0x0003d736) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00040671) fmrd2_indi_pane_t

0x30d2,	// (0x00033838) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x30d2,	// (0x00033838) list_single_fs_bigclock_indicator_pane_g5

0x3180,	// (0x000338e6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3180,	// (0x000338e6) list_single_fs_bigclock_indicator_pane_t5

0xc9ab,	// (0x0003d111) aid_cell_bcale_month_pane_ParamLimits

0xc9ab,	// (0x0003d111) aid_cell_bcale_month_pane

0xc9c9,	// (0x0003d12f) bcale_month_pane_ParamLimits

0xc9c9,	// (0x0003d12f) bcale_month_pane

0xc9df,	// (0x0003d145) bcale_preview_pane_ParamLimits

0xc9df,	// (0x0003d145) bcale_preview_pane

0x3c8c,	// (0x000343f2) list_single_fs_bigclock_pane_t1_ParamLimits

0x3cab,	// (0x00034411) list_single_fs_bigclock_pane_t2_ParamLimits

0x3cab,	// (0x00034411) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x000405f3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x000405f3) list_single_fs_bigclock_pane_t

0x3ee8,	// (0x0003464e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0004065c) main_fs_bigclock_unlock_btn_pane_g

0xcfde,	// (0x0003d744) aid_dia3_key_size_ParamLimits

0xcfde,	// (0x0003d744) aid_dia3_key_size

0xcfea,	// (0x0003d750) aid_dia3_listrow_size_ParamLimits

0xcfea,	// (0x0003d750) aid_dia3_listrow_size

0xcff8,	// (0x0003d75e) dia3_keypad_fun_pane_ParamLimits

0xcff8,	// (0x0003d75e) dia3_keypad_fun_pane

0xd004,	// (0x0003d76a) dia3_keypad_num_pane_ParamLimits

0xd004,	// (0x0003d76a) dia3_keypad_num_pane

0xd010,	// (0x0003d776) dia3_listscroll_pane_ParamLimits

0xd010,	// (0x0003d776) dia3_listscroll_pane

0xd01c,	// (0x0003d782) dia3_numentry_pane_ParamLimits

0xd01c,	// (0x0003d782) dia3_numentry_pane

0x3efe,	// (0x00034664) dia3_list_pane

0x3f07,	// (0x0003466d) scroll_pane_cp12

0xd3fa,	// (0x0003db60) bg_dia3_numentry_pane

0xd028,	// (0x0003d78e) dia3_numentry_pane_t1

0xd037,	// (0x0003d79d) cell_dia3_key_num_pane

0xd03f,	// (0x0003d7a5) cell_dia3_key0_fun_pane_ParamLimits

0xd03f,	// (0x0003d7a5) cell_dia3_key0_fun_pane

0xd04c,	// (0x0003d7b2) cell_dia3_key1_fun_pane_ParamLimits

0xd04c,	// (0x0003d7b2) cell_dia3_key1_fun_pane

0xd059,	// (0x0003d7bf) dia3_listrow_pane

0x2e20,	// (0x00033586) bg_dia3_numentry_pane_g1

0xd3fa,	// (0x0003db60) bg_button_pane_cp21

0x3f10,	// (0x00034676) cell_dia3_key_num_pane_t1

0x3f1e,	// (0x00034684) cell_dia3_key_num_pane_t2

0x3f2d,	// (0x00034693) cell_dia3_key_num_pane_t3

0x3f3c,	// (0x000346a2) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00040678) cell_dia3_key_num_pane_t

0xd3fa,	// (0x0003db60) bg_button_pane_cp19

0x3f4b,	// (0x000346b1) cell_dia3_key0_fun_pane_g1

0xd3fa,	// (0x0003db60) bg_button_pane_cp20

0xd066,	// (0x0003d7cc) cell_dia3_key1_fun_pane_g1

0xd06e,	// (0x0003d7d4) area_left_week_number_pane

0xd07f,	// (0x0003d7e5) area_top_day_name_pane

0xd08b,	// (0x0003d7f1) frame_month_view_pane

0x3f53,	// (0x000346b9) grid_month_view_pane

0xd09c,	// (0x0003d802) cell_top_day_name_pane_ParamLimits

0xd09c,	// (0x0003d802) cell_top_day_name_pane

0xd0b2,	// (0x0003d818) cell_area_left_week_number_pane_ParamLimits

0xd0b2,	// (0x0003d818) cell_area_left_week_number_pane

0xd0d1,	// (0x0003d837) cell_month_view_pane_ParamLimits

0xd0d1,	// (0x0003d837) cell_month_view_pane

0x3f61,	// (0x000346c7) frm_month_g1

0xd0f7,	// (0x0003d85d) frm_month_g2

0xd106,	// (0x0003d86c) frm_month_g3

0xd115,	// (0x0003d87b) frm_month_g4

0xd124,	// (0x0003d88a) frm_month_g5

0xd133,	// (0x0003d899) frm_month_g6

0xd142,	// (0x0003d8a8) frm_month_g7

0x3f6e,	// (0x000346d4) frm_month_g8

0xd151,	// (0x0003d8b7) frm_month_g9

0xd15e,	// (0x0003d8c4) frm_month_g10

0xd16b,	// (0x0003d8d1) frm_month_g11

0xd178,	// (0x0003d8de) frm_month_g12

0xd185,	// (0x0003d8eb) frm_month_g13

0xd192,	// (0x0003d8f8) frm_month_g14

0xd19f,	// (0x0003d905) frm_month_g15

0xd1ac,	// (0x0003d912) frm_month_g16

0x000f,

0xff1b,	// (0x00040681) frm_month_g

0x3f7b,	// (0x000346e1) cell_top_day_name_pane_t1

0xd1b9,	// (0x0003d91f) cell_area_left_week_number_pane_g1

0xd1c8,	// (0x0003d92e) cell_area_left_week_number_pane_t1

0x160e,	// (0x00031d74) cell_month_view_pane_g1

0xd1de,	// (0x0003d944) cell_month_view_pane_t1

0xd3fa,	// (0x0003db60) main_fps_pane

0x336c,	// (0x00033ad2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x336c,	// (0x00033ad2) cmail_ddmenu_btn02_pane_cp1

0x3388,	// (0x00033aee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3388,	// (0x00033aee) cmail_ddmenu_btn02_pane_cp2

0xcb17,	// (0x0003d27d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcb17,	// (0x0003d27d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x000405a6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x000405a6) cmail_ddmenu_btn02_pane_g

0xcb36,	// (0x0003d29c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcb36,	// (0x0003d29c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x000405ab) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x000405ab) cmail_ddmenu_btn02_pane_t

0xd1f4,	// (0x0003d95a) fps_text_pane_ParamLimits

0xd1f4,	// (0x0003d95a) fps_text_pane

0xd201,	// (0x0003d967) main_fps_pane_g1_ParamLimits

0xd201,	// (0x0003d967) main_fps_pane_g1

0xd20d,	// (0x0003d973) wait_bar_pane_cp010_ParamLimits

0xd20d,	// (0x0003d973) wait_bar_pane_cp010

0xd219,	// (0x0003d97f) fps_text_pane_t1_ParamLimits

0xd219,	// (0x0003d97f) fps_text_pane_t1

0xab6f,	// (0x0003b2d5) cam4_image_uncrop_pane_g1

0xab78,	// (0x0003b2de) cam4_image_uncrop_pane_g2

0xab81,	// (0x0003b2e7) cam4_image_uncrop_pane_g3

0xab8a,	// (0x0003b2f0) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00040067) cam4_image_uncrop_pane_g

0xd059,	// (0x0003d7bf) dia3_listrow_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_phob2_pane

0xc868,	// (0x0003cfce) cell_tport_appsw_pane_cp02_ParamLimits

0xc868,	// (0x0003cfce) cell_tport_appsw_pane_cp02

0xc875,	// (0x0003cfdb) cell_tport_appsw_pane_cp03_ParamLimits

0xc875,	// (0x0003cfdb) cell_tport_appsw_pane_cp03

0xd3fa,	// (0x0003db60) phob2_contact_card_pane

0xd3fa,	// (0x0003db60) phob2_listscroll_pane

0x3fa6,	// (0x0003470c) phob2_list_pane

0x3fae,	// (0x00034714) scroll_pane_cp034

0xd232,	// (0x0003d998) phob2_cc_data_pane_ParamLimits

0xd232,	// (0x0003d998) phob2_cc_data_pane

0xd24a,	// (0x0003d9b0) phob2_cc_listscroll_pane_ParamLimits

0xd24a,	// (0x0003d9b0) phob2_cc_listscroll_pane

0xd262,	// (0x0003d9c8) list_double_large_graphic_phob2_pane_ParamLimits

0xd262,	// (0x0003d9c8) list_double_large_graphic_phob2_pane

0xd275,	// (0x0003d9db) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd275,	// (0x0003d9db) list_double_large_graphic_phob2_pane_g1

0x61b4,	// (0x0003691a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x61b4,	// (0x0003691a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000406a2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000406a2) list_double_large_graphic_phob2_pane_g

0x61c0,	// (0x00036926) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x61c0,	// (0x00036926) list_double_large_graphic_phob2_pane_t1

0x61d6,	// (0x0003693c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x61d6,	// (0x0003693c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000406a7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000406a7) list_double_large_graphic_phob2_pane_t

0xd3fa,	// (0x0003db60) list_highlight_pane_cp024

0xd28b,	// (0x0003d9f1) phob2_cc_button_pane

0xd293,	// (0x0003d9f9) phob2_cc_data_pane_g1_ParamLimits

0xd293,	// (0x0003d9f9) phob2_cc_data_pane_g1

0xd29f,	// (0x0003da05) phob2_cc_data_pane_g2_ParamLimits

0xd29f,	// (0x0003da05) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000406ac) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000406ac) phob2_cc_data_pane_g

0xd2ab,	// (0x0003da11) phob2_cc_data_pane_t1_ParamLimits

0xd2ab,	// (0x0003da11) phob2_cc_data_pane_t1

0xd2bd,	// (0x0003da23) phob2_cc_data_pane_t2_ParamLimits

0xd2bd,	// (0x0003da23) phob2_cc_data_pane_t2

0xd2cf,	// (0x0003da35) phob2_cc_data_pane_t3_ParamLimits

0xd2cf,	// (0x0003da35) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000406b1) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000406b1) phob2_cc_data_pane_t

0x3fb6,	// (0x0003471c) phob2_cc_list_pane_ParamLimits

0x3fb6,	// (0x0003471c) phob2_cc_list_pane

0x250d,	// (0x00032c73) scroll_pane_cp035_ParamLimits

0x250d,	// (0x00032c73) scroll_pane_cp035

0xf0b0,	// (0x0003f816) bg_button_pane_cp033

0x3fc2,	// (0x00034728) phob2_cc_button_pane_g1

0x3fce,	// (0x00034734) phob2_cc_button_pane_t1

0x3fe3,	// (0x00034749) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000406b8) phob2_cc_button_pane_t

0xd2e1,	// (0x0003da47) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd2e1,	// (0x0003da47) list_double_large_graphic_phob2_cc_pane

0xd2fa,	// (0x0003da60) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd2fa,	// (0x0003da60) list_double_large_graphic_phob2_cc_pane_g1

0x61eb,	// (0x00036951) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x61eb,	// (0x00036951) list_double_large_graphic_phob2_cc_pane_g2

0x61fa,	// (0x00036960) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x61fa,	// (0x00036960) list_double_large_graphic_phob2_cc_pane_g3

0x6209,	// (0x0003696f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6209,	// (0x0003696f) list_double_large_graphic_phob2_cc_pane_g4

0x621a,	// (0x00036980) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x621a,	// (0x00036980) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000406bd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000406bd) list_double_large_graphic_phob2_cc_pane_g

0x6229,	// (0x0003698f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6229,	// (0x0003698f) list_double_large_graphic_phob2_cc_pane_t1

0x6252,	// (0x000369b8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6252,	// (0x000369b8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000406c8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000406c8) list_double_large_graphic_phob2_cc_pane_t

0x3ff5,	// (0x0003475b) list_highlight_pane_cp025_ParamLimits

0x3ff5,	// (0x0003475b) list_highlight_pane_cp025

0xf0b0,	// (0x0003f816) bg_button_pane_cp033_ParamLimits

0x3fc2,	// (0x00034728) phob2_cc_button_pane_g1_ParamLimits

0x3fce,	// (0x00034734) phob2_cc_button_pane_t1_ParamLimits

0x3fe3,	// (0x00034749) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000406b8) phob2_cc_button_pane_t_ParamLimits

0x6522,	// (0x00036c88) popup_wgtman_window

0x2291,	// (0x000329f7) scroll_pane_cp038

0xce7f,	// (0x0003d5e5) wgtman_btn_pane_cp_01_ParamLimits

0xce7f,	// (0x0003d5e5) wgtman_btn_pane_cp_01

0x4003,	// (0x00034769) wgtman_content_pane

0x400c,	// (0x00034772) wgtman_heading_pane

0xd3fa,	// (0x0003db60) bg_heading_pane_cp02

0x4015,	// (0x0003477b) wgtman_heading_pane_g1

0x401d,	// (0x00034783) wgtman_heading_pane_t1

0x402b,	// (0x00034791) scroll_pane_cp036

0x4033,	// (0x00034799) wgtman_list_pane

0x326b,	// (0x000339d1) wgtman_list_pane_t1_ParamLimits

0x326b,	// (0x000339d1) wgtman_list_pane_t1

0xaad4,	// (0x0003b23a) cam4_grid_pane

0x5486,	// (0x00035bec) bg_button_pane_cp015_ParamLimits

0xb694,	// (0x0003bdfa) bg_button_pane_cp016_ParamLimits

0xb6a7,	// (0x0003be0d) bg_button_pane_cp017_ParamLimits

0x54c4,	// (0x00035c2a) popup_vitu2_query_window_g3_ParamLimits

0x54c4,	// (0x00035c2a) popup_vitu2_query_window_g3

0x553d,	// (0x00035ca3) popup_vitu2_query_window_t6_ParamLimits

0x553d,	// (0x00035ca3) popup_vitu2_query_window_t6

0x5568,	// (0x00035cce) popup_vitu2_query_window_t7_ParamLimits

0x5568,	// (0x00035cce) popup_vitu2_query_window_t7

0x2012,	// (0x00032778) cam4_grid_pane_g1

0x201b,	// (0x00032781) cam4_grid_pane_g2

0x403b,	// (0x000347a1) cam4_grid_pane_g3

0x4044,	// (0x000347aa) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000406cd) cam4_grid_pane_g

0x73b3,	// (0x00037b19) aid_placing_vt_slider_lsc_ParamLimits

0x765d,	// (0x00037dc3) vidtel_button_pane_ParamLimits

0x765d,	// (0x00037dc3) vidtel_button_pane

0xd3fa,	// (0x0003db60) bg_button_pane_cp034

0xd30b,	// (0x0003da71) vidtel_button_pane_g1

0xd313,	// (0x0003da79) vidtel_button_pane_t1

0x2410,	// (0x00032b76) aid_size_vtel_slider_touch

0x250d,	// (0x00032c73) scroll_pane_cp039

0xc28e,	// (0x0003c9f4) ncim_query_button_pane_cp01_ParamLimits

0xc2ad,	// (0x0003ca13) ncimui_query_pane_g1_ParamLimits

0xf0b0,	// (0x0003f816) input_focus_pane_cp012_ParamLimits

0x2e66,	// (0x000335cc) ncim_query_entry_pane_t1_ParamLimits

0x250d,	// (0x00032c73) scroll_pane_cp039_ParamLimits

0xe607,	// (0x0003ed6d) navi_pane_bcale_mc_g1

0xe60f,	// (0x0003ed75) navi_pane_bcale_mc_t1

0x33d1,	// (0x00033b37) main_sp_fs_email_pane_g1

0x33dd,	// (0x00033b43) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0004045e) main_sp_fs_email_pane_g

0x38b4,	// (0x0003401a) list_single_cale_mrui_row_pane_g3_ParamLimits

0x38b4,	// (0x0003401a) list_single_cale_mrui_row_pane_g3

0x60e1,	// (0x00036847) list_single_recal_day_pane_g5_event_pane

0x60f5,	// (0x0003685b) list_single_recal_day_pane_g7

0x404d,	// (0x000347b3) list_recal_day_event_pane_cp01

0x4056,	// (0x000347bc) list_recal_vselct_arw_lo_pane_cp01

0x405e,	// (0x000347c4) list_recal_vselct_arw_up_pane_cp01

0x4066,	// (0x000347cc) list_recal_vselct_pane_cp01

0x2476,	// (0x00032bdc) list_recal_day_event_pane_cp01_g1

0x627b,	// (0x000369e1) list_recal_day_event_pane_cp01_t1

0x60fd,	// (0x00036863) list_single_recal_day_pane_t1_ParamLimits

0x610f,	// (0x00036875) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x000405bb) list_single_recal_day_pane_t_ParamLimits

0xdaa4,	// (0x0003e20a) bg_notes_pane_ParamLimits

0xdb53,	// (0x0003e2b9) list_notes_pane_ParamLimits

0x67dd,	// (0x00036f43) scroll_pane_cp06_ParamLimits

0xdb75,	// (0x0003e2db) main_notes_pane_ParamLimits

0xd3fa,	// (0x0003db60) main_welc_pane

0xd329,	// (0x0003da8f) main_welc_body_pane_ParamLimits

0xd329,	// (0x0003da8f) main_welc_body_pane

0xd342,	// (0x0003daa8) main_welc_opti_pane_ParamLimits

0xd342,	// (0x0003daa8) main_welc_opti_pane

0xd36f,	// (0x0003dad5) main_welc_pane_t1_ParamLimits

0xd36f,	// (0x0003dad5) main_welc_pane_t1

0x3d02,	// (0x00034468) main_welc_body_row_pane_ParamLimits

0x3d02,	// (0x00034468) main_welc_body_row_pane

0x4091,	// (0x000347f7) main_welc_opti_row_pane_ParamLimits

0x4091,	// (0x000347f7) main_welc_opti_row_pane

0x409f,	// (0x00034805) main_welc_opti_row_pane_g1

0xd387,	// (0x0003daed) main_welc_opti_row_pane_t1

0x40a7,	// (0x0003480d) main_welc_body_row_pane_t1

0x3d87,	// (0x000344ed) popup_notif_wgt_heading_pane

0x3da1,	// (0x00034507) aid_size_list_notif_wgt_del_ParamLimits

0x3dae,	// (0x00034514) list_notif_wgt_row_pane_g1_ParamLimits

0x3dba,	// (0x00034520) list_notif_wgt_row_pane_g2_ParamLimits

0x3dc9,	// (0x0003452f) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x00040622) list_notif_wgt_row_pane_g_ParamLimits

0x3dd6,	// (0x0003453c) list_notif_wgt_row_pane_t1_ParamLimits

0x3dec,	// (0x00034552) list_notif_wgt_row_pane_t2_ParamLimits

0x3dfe,	// (0x00034564) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x00040629) list_notif_wgt_row_pane_t_ParamLimits

0xcef6,	// (0x0003d65c) listrow_wgtman_pane_g1_ParamLimits

0xcf03,	// (0x0003d669) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00040652) listrow_wgtman_pane_g_ParamLimits

0x6164,	// (0x000368ca) listrow_wgtman_pane_t1_ParamLimits

0x617c,	// (0x000368e2) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x00040657) listrow_wgtman_pane_t_ParamLimits

0x61a2,	// (0x00036908) wait_bar_pane_cp09_ParamLimits

0xd3fa,	// (0x0003db60) bg_popup_heading_pane_cp02

0x40b6,	// (0x0003481c) popup_notif_wgt_heading_pane_g1

0x40be,	// (0x00034824) popup_notif_wgt_heading_pane_t1

0xd3fa,	// (0x0003db60) main_vids_pane

0xd3fa,	// (0x0003db60) vids_listscroll_pane

0xd396,	// (0x0003dafc) scroll_pane_cp040

0xd3fa,	// (0x0003db60) vids_list_pane

0xd39f,	// (0x0003db05) vids_list_double_pane_ParamLimits

0xd39f,	// (0x0003db05) vids_list_double_pane

0xd3b0,	// (0x0003db16) vids_list_double_pane_g1

0xd3b9,	// (0x0003db1f) vids_list_double_pane_t1

0xd3c8,	// (0x0003db2e) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x000406db) vids_list_double_pane_t

0xf0b0,	// (0x0003f816) main_ncimui_pane_ParamLimits

0xc0e8,	// (0x0003c84e) main_ncimui_pane_g1_ParamLimits

0xc0f4,	// (0x0003c85a) main_ncimui_pane_g2_ParamLimits

0xc0f4,	// (0x0003c85a) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00040363) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00040363) main_ncimui_pane_g

0xd357,	// (0x0003dabd) main_welc_pane_g1_ParamLimits

0xd357,	// (0x0003dabd) main_welc_pane_g1

0xd363,	// (0x0003dac9) main_welc_pane_g2_ParamLimits

0xd363,	// (0x0003dac9) main_welc_pane_g2

0x0001,

0xff70,	// (0x000406d6) main_welc_pane_g_ParamLimits

0xff70,	// (0x000406d6) main_welc_pane_g

0xdaa4,	// (0x0003e20a) listscroll_mce_pane_ParamLimits

0xe75a,	// (0x0003eec0) wait_bar_pane_cp10

0x0ed1,	// (0x00031637) main_cale_day_pane_ParamLimits

0x0ed1,	// (0x00031637) main_cale_week_pane_ParamLimits

0xdaa4,	// (0x0003e20a) main_messa_pane_ParamLimits

0x9fa6,	// (0x0003a70c) main_clock2_btn_pane_ParamLimits

0x9fa6,	// (0x0003a70c) main_clock2_btn_pane

0x17bd,	// (0x00031f23) main_clock2_btn_pane_cp01_ParamLimits

0x17bd,	// (0x00031f23) main_clock2_btn_pane_cp01

0x384c,	// (0x00033fb2) list_cale_mrui_pane_ParamLimits

0x3e32,	// (0x00034598) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00040630) main_cf0_pane_g

0xd06e,	// (0x0003d7d4) area_left_week_number_pane_ParamLimits

0xd07f,	// (0x0003d7e5) area_top_day_name_pane_ParamLimits

0xd08b,	// (0x0003d7f1) frame_month_view_pane_ParamLimits

0x3f53,	// (0x000346b9) grid_month_view_pane_ParamLimits

0x3f61,	// (0x000346c7) frm_month_g1_ParamLimits

0xd0f7,	// (0x0003d85d) frm_month_g2_ParamLimits

0xd106,	// (0x0003d86c) frm_month_g3_ParamLimits

0xd115,	// (0x0003d87b) frm_month_g4_ParamLimits

0xd124,	// (0x0003d88a) frm_month_g5_ParamLimits

0xd133,	// (0x0003d899) frm_month_g6_ParamLimits

0xd142,	// (0x0003d8a8) frm_month_g7_ParamLimits

0x3f6e,	// (0x000346d4) frm_month_g8_ParamLimits

0xd151,	// (0x0003d8b7) frm_month_g9_ParamLimits

0xd15e,	// (0x0003d8c4) frm_month_g10_ParamLimits

0xd16b,	// (0x0003d8d1) frm_month_g11_ParamLimits

0xd178,	// (0x0003d8de) frm_month_g12_ParamLimits

0xd185,	// (0x0003d8eb) frm_month_g13_ParamLimits

0xd192,	// (0x0003d8f8) frm_month_g14_ParamLimits

0xd19f,	// (0x0003d905) frm_month_g15_ParamLimits

0xd1ac,	// (0x0003d912) frm_month_g16_ParamLimits

0xff1b,	// (0x00040681) frm_month_g_ParamLimits

0x3f7b,	// (0x000346e1) cell_top_day_name_pane_t1_ParamLimits

0xd1b9,	// (0x0003d91f) cell_area_left_week_number_pane_g1_ParamLimits

0xd1c8,	// (0x0003d92e) cell_area_left_week_number_pane_t1_ParamLimits

0x160e,	// (0x00031d74) cell_month_view_pane_g1_ParamLimits

0xd1de,	// (0x0003d944) cell_month_view_pane_t1_ParamLimits

0xda9c,	// (0x0003e202) main_clock2_btn_pane_g1

0x40cc,	// (0x00034832) main_clock2_btn_pane_t1

0xf0b0,	// (0x0003f816) listscroll_cmail_pane_ParamLimits

0x33d1,	// (0x00033b37) main_sp_fs_email_pane_g1_ParamLimits

0x33dd,	// (0x00033b43) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0004045e) main_sp_fs_email_pane_g_ParamLimits

0x3a66,	// (0x000341cc) list_recal_day_pane_ParamLimits

0x3a77,	// (0x000341dd) mian_recal_day_pane_t1

0x5ac0,	// (0x00036226) list_single_dyc_row_text_pane_t4_ParamLimits

0x5ac0,	// (0x00036226) list_single_dyc_row_text_pane_t4

0x5af7,	// (0x0003625d) list_single_dyc_row_text_pane_t5_ParamLimits

0x5af7,	// (0x0003625d) list_single_dyc_row_text_pane_t5

0x5b67,	// (0x000362cd) list_single_dyc_row_text_pane_t6_ParamLimits

0x5b67,	// (0x000362cd) list_single_dyc_row_text_pane_t6

0xe136,	// (0x0003e89c) aid_mgn_list_cale_time_pane

0xf0b0,	// (0x0003f816) main_gallery2_pane_ParamLimits

0x17d1,	// (0x00031f37) main_clock2_pane_cp01_t1

0x17df,	// (0x00031f45) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0003ff3d) main_clock2_pane_cp01_t

0x6c3a,	// (0x000373a0) cale_week_scroll_pane_g16_ParamLimits

0x6c3a,	// (0x000373a0) cale_week_scroll_pane_g16

0xdd26,	// (0x0003e48c) vorec_slider_pane

0xd313,	// (0x0003da79) vidtel_button_pane_t1_ParamLimits

0xcb97,	// (0x0003d2fd) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcb97,	// (0x0003d2fd) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcba4,	// (0x0003d30a) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcba4,	// (0x0003d30a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x000405de) main_fs_bigclock_clock_pane_g_ParamLimits

0xcbb0,	// (0x0003d316) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcbc3,	// (0x0003d329) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x000405e7) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
