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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004648f };

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
0x0a5e,	// (0x00046eed) Screen

0x0a6a,	// (0x00046ef9) application_window

0x0aa6,	// (0x00046f35) area_bottom_pane_ParamLimits

0x0aa6,	// (0x00046f35) area_bottom_pane

0x0adf,	// (0x00046f6e) area_top_pane_ParamLimits

0x0adf,	// (0x00046f6e) area_top_pane

0xa608,	// (0x00050a97) call_video_uplink_pane_ParamLimits

0xa608,	// (0x00050a97) call_video_uplink_pane

0x0b6d,	// (0x00046ffc) main_pane_ParamLimits

0x0b6d,	// (0x00046ffc) main_pane

0xbce4,	// (0x00052173) context_pane

0x4a65,	// (0x0004aef4) navi_pane

0x4a9c,	// (0x0004af2b) popup_cale_events_window_ParamLimits

0x4a9c,	// (0x0004af2b) popup_cale_events_window

0xbcf7,	// (0x00052186) popup_mup_playback_window

0x4ab4,	// (0x0004af43) signal_pane

0x13b0,	// (0x0004783f) main_browser_pane

0x1d9b,	// (0x0004822a) main_burst_pane

0x477d,	// (0x0004ac0c) main_calc_pane

0xbc80,	// (0x0005210f) main_cale_day_pane

0x16e7,	// (0x00047b76) main_cale_month_pane

0xbc80,	// (0x0005210f) main_cale_week_pane

0x1d9b,	// (0x0004822a) main_call_pane

0x0f94,	// (0x00047423) main_call_poc_pane

0x1d9b,	// (0x0004822a) main_camera_pane

0x1d9b,	// (0x0004822a) main_chi_dic_pane

0xa7b4,	// (0x00050c43) main_clock_pane

0x0f94,	// (0x00047423) main_fmradio_pane

0x1d9b,	// (0x0004822a) main_graph_messa_pane

0x0f94,	// (0x00047423) main_help_pane

0x13b0,	// (0x0004783f) main_im_pane

0x11ef,	// (0x0004767e) main_image_pane_ParamLimits

0x11ef,	// (0x0004767e) main_image_pane

0x0f94,	// (0x00047423) main_location2_pane

0x1d9b,	// (0x0004822a) main_location_pane

0x11ef,	// (0x0004767e) main_messa_pane

0x0f94,	// (0x00047423) main_mp2_pane

0x1d9b,	// (0x0004822a) main_mp_pane

0x0f94,	// (0x00047423) main_msg_pane

0x0f94,	// (0x00047423) main_mup_eq_pane

0x0f94,	// (0x00047423) main_mup_pane

0x13b0,	// (0x0004783f) main_notes_pane

0x0f94,	// (0x00047423) main_pec_pane

0x0f94,	// (0x00047423) main_phob_pane

0x0f94,	// (0x00047423) main_pinb_pane

0x0f94,	// (0x00047423) main_postcard_pane

0x0f94,	// (0x00047423) main_qdial_pane

0x1d9b,	// (0x0004822a) main_skin_pane

0x0f94,	// (0x00047423) main_smil2_pane

0x1d9b,	// (0x0004822a) main_smil_pane

0x1d9b,	// (0x0004822a) main_video_pane

0x1d9b,	// (0x0004822a) main_video_tele_pane

0x11ef,	// (0x0004767e) main_viewer_pane_ParamLimits

0x11ef,	// (0x0004767e) main_viewer_pane

0x1d9b,	// (0x0004822a) main_vorec_pane

0x47d3,	// (0x0004ac62) popup_blid_sat_info_window_ParamLimits

0x47d3,	// (0x0004ac62) popup_blid_sat_info_window

0x4837,	// (0x0004acc6) popup_dyc_status_message_window_ParamLimits

0x4837,	// (0x0004acc6) popup_dyc_status_message_window

0x4851,	// (0x0004ace0) popup_grid_large_graphic_window_ParamLimits

0x4851,	// (0x0004ace0) popup_grid_large_graphic_window

0x4913,	// (0x0004ada2) popup_loc_request_window_ParamLimits

0x4913,	// (0x0004ada2) popup_loc_request_window

0x4a39,	// (0x0004aec8) popup_wml_address_window_ParamLimits

0x4a39,	// (0x0004aec8) popup_wml_address_window

0x45bb,	// (0x0004aa4a) call_muted_g1

0x4294,	// (0x0004a723) popup_call_audio_conf_window_ParamLimits

0x4294,	// (0x0004a723) popup_call_audio_conf_window

0x45cb,	// (0x0004aa5a) popup_call_audio_first_window_ParamLimits

0x45cb,	// (0x0004aa5a) popup_call_audio_first_window

0x4641,	// (0x0004aad0) popup_call_audio_in_window_ParamLimits

0x4641,	// (0x0004aad0) popup_call_audio_in_window

0x467d,	// (0x0004ab0c) popup_call_audio_out_window_ParamLimits

0x467d,	// (0x0004ab0c) popup_call_audio_out_window

0x46b7,	// (0x0004ab46) popup_call_audio_second_window_ParamLimits

0x46b7,	// (0x0004ab46) popup_call_audio_second_window

0x470d,	// (0x0004ab9c) popup_call_audio_wait_window_ParamLimits

0x470d,	// (0x0004ab9c) popup_call_audio_wait_window

0x4742,	// (0x0004abd1) popup_number_entry_window_ParamLimits

0x4742,	// (0x0004abd1) popup_number_entry_window

0xe66f,	// (0x00054afe) bg_popup_call_pane_cp05_ParamLimits

0xe66f,	// (0x00054afe) bg_popup_call_pane_cp05

0xe68f,	// (0x00054b1e) popup_number_entry_window_t1

0xe6a2,	// (0x00054b31) popup_number_entry_window_t2

0xe6b4,	// (0x00054b43) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000554ac) popup_number_entry_window_t

0xe6fb,	// (0x00054b8a) text_title_cp2

0xe70e,	// (0x00054b9d) bg_popup_call_pane_cp_ParamLimits

0xe70e,	// (0x00054b9d) bg_popup_call_pane_cp

0xe71c,	// (0x00054bab) call_thumbnail_pane

0xe724,	// (0x00054bb3) popup_call_audio_in_window_g1_ParamLimits

0xe724,	// (0x00054bb3) popup_call_audio_in_window_g1

0xe730,	// (0x00054bbf) popup_call_audio_in_window_g2_ParamLimits

0xe730,	// (0x00054bbf) popup_call_audio_in_window_g2

0xe73c,	// (0x00054bcb) popup_call_audio_in_window_g3_ParamLimits

0xe73c,	// (0x00054bcb) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000554b5) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000554b5) popup_call_audio_in_window_g

0xe748,	// (0x00054bd7) popup_call_audio_in_window_t1_ParamLimits

0xe748,	// (0x00054bd7) popup_call_audio_in_window_t1

0xe764,	// (0x00054bf3) popup_call_audio_in_window_t2_ParamLimits

0xe764,	// (0x00054bf3) popup_call_audio_in_window_t2

0xe780,	// (0x00054c0f) popup_call_audio_in_window_t3_ParamLimits

0xe780,	// (0x00054c0f) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000554bc) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000554bc) popup_call_audio_in_window_t

0xe70e,	// (0x00054b9d) bg_popup_call_pane_cp01_ParamLimits

0xe70e,	// (0x00054b9d) bg_popup_call_pane_cp01

0xe71c,	// (0x00054bab) call_thumbnail_pane_cp02

0xe793,	// (0x00054c22) call_type_pane_cp022

0xe79b,	// (0x00054c2a) popup_call_audio_out_window_g1_ParamLimits

0xe79b,	// (0x00054c2a) popup_call_audio_out_window_g1

0xe7ad,	// (0x00054c3c) popup_call_audio_out_window_g2_ParamLimits

0xe7ad,	// (0x00054c3c) popup_call_audio_out_window_g2

0xe7b9,	// (0x00054c48) popup_call_audio_out_window_g3_ParamLimits

0xe7b9,	// (0x00054c48) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000554c3) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000554c3) popup_call_audio_out_window_g

0xe7cb,	// (0x00054c5a) popup_call_audio_out_window_t1_ParamLimits

0xe7cb,	// (0x00054c5a) popup_call_audio_out_window_t1

0x0c9c,	// (0x0004712b) popup_call_audio_out_window_t2_ParamLimits

0x0c9c,	// (0x0004712b) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000554ca) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000554ca) popup_call_audio_out_window_t

0x0cb1,	// (0x00047140) bg_popup_call_pane_ParamLimits

0x0cb1,	// (0x00047140) bg_popup_call_pane

0x0d35,	// (0x000471c4) call_thumbnail_pane_cp_ParamLimits

0x0d35,	// (0x000471c4) call_thumbnail_pane_cp

0x0d59,	// (0x000471e8) call_type_pane_cp01_ParamLimits

0x0d59,	// (0x000471e8) call_type_pane_cp01

0x0d9d,	// (0x0004722c) popup_call_audio_first_window_g1_ParamLimits

0x0d9d,	// (0x0004722c) popup_call_audio_first_window_g1

0x0de9,	// (0x00047278) popup_call_audio_first_window_g2_ParamLimits

0x0de9,	// (0x00047278) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000554cf) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000554cf) popup_call_audio_first_window_g

0x0e2d,	// (0x000472bc) popup_call_audio_first_window_t1_ParamLimits

0x0e2d,	// (0x000472bc) popup_call_audio_first_window_t1

0x0ed9,	// (0x00047368) popup_call_audio_first_window_t4_ParamLimits

0x0ed9,	// (0x00047368) popup_call_audio_first_window_t4

0x0f65,	// (0x000473f4) popup_call_audio_first_window_t5_ParamLimits

0x0f65,	// (0x000473f4) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000554d4) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000554d4) popup_call_audio_first_window_t

0x0f94,	// (0x00047423) bg_popup_call_pane_cp02

0x0f9e,	// (0x0004742d) call_type_pane_cp023

0x0fa6,	// (0x00047435) popup_call_audio_wait_window_g1

0x0fae,	// (0x0004743d) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000554db) popup_call_audio_wait_window_g

0x0fb6,	// (0x00047445) popup_call_audio_wait_window_t3

0x0fc4,	// (0x00047453) bg_popup_call_pane_cp03_ParamLimits

0x0fc4,	// (0x00047453) bg_popup_call_pane_cp03

0x1024,	// (0x000474b3) call_thumbnail_pane_cp011_ParamLimits

0x1024,	// (0x000474b3) call_thumbnail_pane_cp011

0x1030,	// (0x000474bf) call_type_pane_cp034_ParamLimits

0x1030,	// (0x000474bf) call_type_pane_cp034

0x106c,	// (0x000474fb) popup_call_audio_second_window_g1_ParamLimits

0x106c,	// (0x000474fb) popup_call_audio_second_window_g1

0x10a8,	// (0x00047537) popup_call_audio_second_window_g2_ParamLimits

0x10a8,	// (0x00047537) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000554e0) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000554e0) popup_call_audio_second_window_g

0x10e4,	// (0x00047573) popup_call_audio_second_window_t1_ParamLimits

0x10e4,	// (0x00047573) popup_call_audio_second_window_t1

0x1165,	// (0x000475f4) popup_call_audio_second_window_t2_ParamLimits

0x1165,	// (0x000475f4) popup_call_audio_second_window_t2

0x119b,	// (0x0004762a) popup_call_audio_second_window_t3_ParamLimits

0x119b,	// (0x0004762a) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000554e5) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000554e5) popup_call_audio_second_window_t

0x0f94,	// (0x00047423) bg_popup_call_pane_cp04

0x11d1,	// (0x00047660) list_conf_pane

0x11d9,	// (0x00047668) popup_call_audio_conf_window_t1

0x11e7,	// (0x00047676) call_thumbnail_pane_g1

0x11ef,	// (0x0004767e) bg_pinb_pane_ParamLimits

0x11ef,	// (0x0004767e) bg_pinb_pane

0x11fd,	// (0x0004768c) find_pinb_pane

0x11ef,	// (0x0004767e) listscroll_pinb_pane_ParamLimits

0x11ef,	// (0x0004767e) listscroll_pinb_pane

0x1207,	// (0x00047696) pinb_bg_pane_g1

0x1207,	// (0x00047696) pinb_bg_pane_g2

0x1207,	// (0x00047696) pinb_bg_pane_g3

0x1207,	// (0x00047696) pinb_bg_pane_g4

0x1207,	// (0x00047696) pinb_bg_pane_g5

0x1207,	// (0x00047696) pinb_bg_pane_g6

0x1207,	// (0x00047696) pinb_bg_pane_g7

0x1207,	// (0x00047696) pinb_bg_pane_g8

0x1207,	// (0x00047696) pinb_bg_pane_g9

0x1207,	// (0x00047696) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000554ec) pinb_bg_pane_g

0xe665,	// (0x00054af4) grid_pinb_pane

0xe665,	// (0x00054af4) list_pinb_pane

0x0c30,	// (0x000470bf) scroll_pane_cp01_ParamLimits

0x0c30,	// (0x000470bf) scroll_pane_cp01

0x1211,	// (0x000476a0) find_pinb_pane_g1_ParamLimits

0x1211,	// (0x000476a0) find_pinb_pane_g1

0x1229,	// (0x000476b8) find_pinb_pane_t1

0x123b,	// (0x000476ca) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00055506) find_pinb_pane_t

0x1250,	// (0x000476df) input_focus_pane_cp01_ParamLimits

0x1250,	// (0x000476df) input_focus_pane_cp01

0x125c,	// (0x000476eb) cell_pinb_pane_ParamLimits

0x125c,	// (0x000476eb) cell_pinb_pane

0x126a,	// (0x000476f9) cell_pinb_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_pinb_pane_g1

0x1278,	// (0x00047707) cell_pinb_pane_g2_ParamLimits

0x1278,	// (0x00047707) cell_pinb_pane_g2

0x1278,	// (0x00047707) cell_pinb_pane_g3_ParamLimits

0x1278,	// (0x00047707) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0005550b) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0005550b) cell_pinb_pane_g

0x0f94,	// (0x00047423) grid_highlight_pane_cp01

0x125c,	// (0x000476eb) list_pinb_item_pane_ParamLimits

0x125c,	// (0x000476eb) list_pinb_item_pane

0xe665,	// (0x00054af4) list_highlight_pane_cp02

0x1286,	// (0x00047715) list_pinb_item_pane_g1_ParamLimits

0x1286,	// (0x00047715) list_pinb_item_pane_g1

0x1278,	// (0x00047707) list_pinb_item_pane_g2_ParamLimits

0x1278,	// (0x00047707) list_pinb_item_pane_g2

0x126a,	// (0x000476f9) list_pinb_item_pane_g3_ParamLimits

0x126a,	// (0x000476f9) list_pinb_item_pane_g3

0x1278,	// (0x00047707) list_pinb_item_pane_g4_ParamLimits

0x1278,	// (0x00047707) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00055512) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00055512) list_pinb_item_pane_g

0x1294,	// (0x00047723) list_pinb_item_pane_t1_ParamLimits

0x1294,	// (0x00047723) list_pinb_item_pane_t1

0x12c8,	// (0x00047757) calc_display_pane

0x12ed,	// (0x0004777c) calc_paper_pane

0x1310,	// (0x0004779f) grid_calc_pane

0xe665,	// (0x00054af4) bg_list_pane_cp01

0x133e,	// (0x000477cd) clock_g1

0x133e,	// (0x000477cd) clock_g2

0x0001,

0xf08c,	// (0x0005551b) clock_g

0x1348,	// (0x000477d7) clock_t1_ParamLimits

0x1348,	// (0x000477d7) clock_t1

0x135c,	// (0x000477eb) clock_t2_ParamLimits

0x135c,	// (0x000477eb) clock_t2

0x135c,	// (0x000477eb) clock_t3_ParamLimits

0x135c,	// (0x000477eb) clock_t3

0x135c,	// (0x000477eb) clock_t4_ParamLimits

0x135c,	// (0x000477eb) clock_t4

0x1348,	// (0x000477d7) clock_t5_ParamLimits

0x1348,	// (0x000477d7) clock_t5

0x135c,	// (0x000477eb) clock_t6_ParamLimits

0x135c,	// (0x000477eb) clock_t6

0x135c,	// (0x000477eb) clock_t7_ParamLimits

0x135c,	// (0x000477eb) clock_t7

0x135c,	// (0x000477eb) clock_t8_ParamLimits

0x135c,	// (0x000477eb) clock_t8

0x135c,	// (0x000477eb) clock_t9_ParamLimits

0x135c,	// (0x000477eb) clock_t9

0x0008,

0xf091,	// (0x00055520) clock_t_ParamLimits

0xf091,	// (0x00055520) clock_t

0xe665,	// (0x00054af4) popup_clock_analogue_window_cp02

0xe665,	// (0x00054af4) popup_clock_digital_window_cp01

0x0f94,	// (0x00047423) listscroll_help_pane

0x0f94,	// (0x00047423) phob_pre_status_pane

0x1370,	// (0x000477ff) grid_qdial_pane

0x11ef,	// (0x0004767e) listscroll_mce_pane

0x11ef,	// (0x0004767e) bg_notes_pane

0x137a,	// (0x00047809) list_notes_pane

0x1388,	// (0x00047817) scroll_pane_cp06

0x139c,	// (0x0004782b) bg_calc_paper_pane

0xa62e,	// (0x00050abd) list_calc_pane

0x13b0,	// (0x0004783f) bg_calc_display_pane

0x13bc,	// (0x0004784b) calc_display_pane_t1

0x13d1,	// (0x00047860) calc_display_pane_t2

0xa648,	// (0x00050ad7) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00055533) calc_display_pane_t

0x13e6,	// (0x00047875) cell_calc_pane_ParamLimits

0x13e6,	// (0x00047875) cell_calc_pane

0x1421,	// (0x000478b0) bg_calc_paper_pane_g1

0x142d,	// (0x000478bc) bg_calc_paper_pane_g2

0x1439,	// (0x000478c8) bg_calc_paper_pane_g3

0x1445,	// (0x000478d4) bg_calc_paper_pane_g4

0x1451,	// (0x000478e0) bg_calc_paper_pane_g5

0x145d,	// (0x000478ec) bg_calc_paper_pane_g6

0x1470,	// (0x000478ff) bg_calc_paper_pane_g7

0x1483,	// (0x00047912) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0005553a) bg_calc_paper_pane_g

0x1496,	// (0x00047925) calc_bg_paper_pane_g9

0x14a9,	// (0x00047938) list_calc_item_pane_ParamLimits

0x14a9,	// (0x00047938) list_calc_item_pane

0x14c1,	// (0x00047950) list_calc_item_pane_g1

0xa65a,	// (0x00050ae9) list_calc_item_pane_t1_ParamLimits

0xa65a,	// (0x00050ae9) list_calc_item_pane_t1

0x14ce,	// (0x0004795d) list_calc_item_pane_t2_ParamLimits

0x14ce,	// (0x0004795d) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0005554b) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0005554b) list_calc_item_pane_t

0x1207,	// (0x00047696) cell_calc_pane_g1

0x1500,	// (0x0004798f) grid_highlight_pane_cp02

0x1522,	// (0x000479b1) bg_calc_display_pane_g1

0x152b,	// (0x000479ba) bg_calc_display_pane_g2

0x1535,	// (0x000479c4) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00055555) bg_calc_display_pane_g

0x153e,	// (0x000479cd) cell_qdial_pane_ParamLimits

0x153e,	// (0x000479cd) cell_qdial_pane

0x1552,	// (0x000479e1) cell_qdial_pane_g1_ParamLimits

0x1552,	// (0x000479e1) cell_qdial_pane_g1

0x1568,	// (0x000479f7) cell_qdial_pane_g2_ParamLimits

0x1568,	// (0x000479f7) cell_qdial_pane_g2

0x1579,	// (0x00047a08) cell_qdial_pane_g3_ParamLimits

0x1579,	// (0x00047a08) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0005555c) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0005555c) cell_qdial_pane_g

0x159b,	// (0x00047a2a) cell_qdial_pane_t1_ParamLimits

0x159b,	// (0x00047a2a) cell_qdial_pane_t1

0x15b3,	// (0x00047a42) cell_qdial_pane_t2_ParamLimits

0x15b3,	// (0x00047a42) cell_qdial_pane_t2

0x15c6,	// (0x00047a55) cell_qdial_pane_t3_ParamLimits

0x15c6,	// (0x00047a55) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00055565) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00055565) cell_qdial_pane_t

0x0f94,	// (0x00047423) grid_highlight_pane_cp04

0x15d9,	// (0x00047a68) thumbnail_qdial_pane_ParamLimits

0x15d9,	// (0x00047a68) thumbnail_qdial_pane

0x1635,	// (0x00047ac4) list_help_pane

0x163e,	// (0x00047acd) scroll_pane_cp02

0x1647,	// (0x00047ad6) help_list_pane_t1_ParamLimits

0x1647,	// (0x00047ad6) help_list_pane_t1

0x166b,	// (0x00047afa) bg_notes_pane_g2

0x1673,	// (0x00047b02) bg_notes_pane_g3

0x167b,	// (0x00047b0a) notes_bg_pane_g1

0x1683,	// (0x00047b12) notes_bg_pane_g4

0x168b,	// (0x00047b1a) notes_bg_pane_g5

0x1693,	// (0x00047b22) notes_bg_pane_g6

0x169b,	// (0x00047b2a) notes_bg_pane_g7

0x16a3,	// (0x00047b32) notes_bg_pane_g8

0x16ab,	// (0x00047b3a) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00055583) notes_bg_pane_g

0x16b3,	// (0x00047b42) list_notes_text_pane_ParamLimits

0x16b3,	// (0x00047b42) list_notes_text_pane

0x16cd,	// (0x00047b5c) list_notes_text_pane_g1

0xa66c,	// (0x00050afb) list_notes_text_pane_t1

0x16e7,	// (0x00047b76) listscroll_cale_week_pane

0x171c,	// (0x00047bab) bg_cale_heading_pane

0x1740,	// (0x00047bcf) bg_cale_pane_cp01

0x175d,	// (0x00047bec) cale_week_corner_pane

0x177c,	// (0x00047c0b) cale_week_day_heading_pane

0x17a5,	// (0x00047c34) cale_week_scroll_pane_g1

0x17c4,	// (0x00047c53) cale_week_scroll_pane_g2

0x17dc,	// (0x00047c6b) cale_week_scroll_pane_g3

0x17f4,	// (0x00047c83) cale_week_scroll_pane_g4

0x180c,	// (0x00047c9b) cale_week_scroll_pane_g5

0x182c,	// (0x00047cbb) cale_week_scroll_pane_g6

0x184c,	// (0x00047cdb) cale_week_scroll_pane_g7

0x186c,	// (0x00047cfb) cale_week_scroll_pane_g8

0x1890,	// (0x00047d1f) cale_week_scroll_pane_g9

0x18a8,	// (0x00047d37) cale_week_scroll_pane_g10

0x18c0,	// (0x00047d4f) cale_week_scroll_pane_g11

0x18d8,	// (0x00047d67) cale_week_scroll_pane_g12

0x18f8,	// (0x00047d87) cale_week_scroll_pane_g13

0x191c,	// (0x00047dab) cale_week_scroll_pane_g14

0x1940,	// (0x00047dcf) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00055592) cale_week_scroll_pane_g

0x1988,	// (0x00047e17) cale_week_time_pane

0x19ac,	// (0x00047e3b) grid_cale_week_pane

0x19ec,	// (0x00047e7b) scroll_pane_cp08

0x1a09,	// (0x00047e98) cell_cale_week_pane_ParamLimits

0x1a09,	// (0x00047e98) cell_cale_week_pane

0x1aa1,	// (0x00047f30) cale_week_day_heading_pane_t1

0x1acb,	// (0x00047f5a) cale_week_day_heading_pane_t2

0x1afa,	// (0x00047f89) cale_week_day_heading_pane_t3

0x1b29,	// (0x00047fb8) cale_week_day_heading_pane_t4

0x1b58,	// (0x00047fe7) cale_week_day_heading_pane_t5

0x1b8b,	// (0x0004801a) cale_week_day_heading_pane_t6

0x1bc2,	// (0x00048051) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000555b3) cale_week_day_heading_pane_t

0x1bec,	// (0x0004807b) bg_cale_side_pane

0x1bfa,	// (0x00048089) cale_week_time_pane_t1

0x1c14,	// (0x000480a3) cale_week_time_pane_t2

0x1c2e,	// (0x000480bd) cale_week_time_pane_t3

0x1c48,	// (0x000480d7) cale_week_time_pane_t4

0x1c62,	// (0x000480f1) cale_week_time_pane_t5

0x1c7c,	// (0x0004810b) cale_week_time_pane_t6

0x1c9a,	// (0x00048129) cale_week_time_pane_t7

0x1cbc,	// (0x0004814b) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000555c2) cale_week_time_pane_t

0x1ce0,	// (0x0004816f) cell_cale_week_pane_g2

0x1d04,	// (0x00048193) cell_cale_week_pane_g3_ParamLimits

0x1d04,	// (0x00048193) cell_cale_week_pane_g3

0x1d1c,	// (0x000481ab) grid_highlight_pane_cp07

0x1d24,	// (0x000481b3) listscroll_gms_pane

0x1d2e,	// (0x000481bd) grid_gms_pane

0x1d37,	// (0x000481c6) listscroll_gms_pane_g1

0x1d3f,	// (0x000481ce) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000555d3) listscroll_gms_pane_g

0x1d47,	// (0x000481d6) scroll_pane_cp010

0x1d52,	// (0x000481e1) cell_gms_pane_ParamLimits

0x1d52,	// (0x000481e1) cell_gms_pane

0x1d69,	// (0x000481f8) cell_gms_pane_g1

0x1d71,	// (0x00048200) cell_gms_pane_g2

0x1d79,	// (0x00048208) cell_gms_pane_g3

0x1d82,	// (0x00048211) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000555d8) cell_gms_pane_g

0x1d8b,	// (0x0004821a) grid_highlight_pane_cp09

0x453f,	// (0x0004a9ce) phob_pre_status_pane_g1

0x4547,	// (0x0004a9d6) phob_pre_status_pane_g2

0x454f,	// (0x0004a9de) phob_pre_status_pane_g3

0x4557,	// (0x0004a9e6) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x00055974) phob_pre_status_pane_g

0x4567,	// (0x0004a9f6) phob_pre_status_pane_t1

0x4577,	// (0x0004aa06) phob_pre_status_pane_t2

0x4587,	// (0x0004aa16) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0005597f) phob_pre_status_pane_t

0x1d9b,	// (0x0004822a) bg_list_pane_cp05

0x1da3,	// (0x00048232) grid_vorec_pane

0x1dad,	// (0x0004823c) vorec_t1

0x1dbb,	// (0x0004824a) vorec_t2

0x1dc9,	// (0x00048258) vorec_t3

0x1dd7,	// (0x00048266) vorec_t4

0xdb99,	// (0x00054028) vorec_t5

0x9521,	// (0x0004f9b0) vorec_t6

0x0004,

0xf152,	// (0x000555e1) vorec_t

0x952f,	// (0x0004f9be) wait_bar_pane_cp01

0x1df3,	// (0x00048282) cell_vorec_pane_ParamLimits

0x1df3,	// (0x00048282) cell_vorec_pane

0xa67a,	// (0x00050b09) cell_vorec_pane_g1

0x0f94,	// (0x00047423) grid_highlight_pane_cp05

0x0c30,	// (0x000470bf) cams_zoom_pane

0x0c30,	// (0x000470bf) image_vga_pane

0x126a,	// (0x000476f9) main_camera_pane_g1

0x126a,	// (0x000476f9) main_camera_pane_g2

0x126a,	// (0x000476f9) main_camera_pane_g3

0x126a,	// (0x000476f9) main_camera_pane_g4

0x126a,	// (0x000476f9) main_camera_pane_g5

0x126a,	// (0x000476f9) main_camera_pane_g6

0x126a,	// (0x000476f9) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000555ec) main_camera_pane_g

0x1348,	// (0x000477d7) main_camera_pane_t1

0x1348,	// (0x000477d7) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000555fd) main_camera_pane_t

0x1e1c,	// (0x000482ab) cams_zoom_pane_cp_ParamLimits

0x1e1c,	// (0x000482ab) cams_zoom_pane_cp

0x1e50,	// (0x000482df) image_cif_pane_ParamLimits

0x1e50,	// (0x000482df) image_cif_pane

0xe665,	// (0x00054af4) image_subqcif_pane

0x1e62,	// (0x000482f1) main_video_pane_g1_ParamLimits

0x1e62,	// (0x000482f1) main_video_pane_g1

0x1e90,	// (0x0004831f) main_video_pane_g2_ParamLimits

0x1e90,	// (0x0004831f) main_video_pane_g2

0x1eca,	// (0x00048359) main_video_pane_g3_ParamLimits

0x1eca,	// (0x00048359) main_video_pane_g3

0x1eca,	// (0x00048359) main_video_pane_g4_ParamLimits

0x1eca,	// (0x00048359) main_video_pane_g4

0x1efe,	// (0x0004838d) main_video_pane_g5_ParamLimits

0x1efe,	// (0x0004838d) main_video_pane_g5

0x1f0c,	// (0x0004839b) main_video_pane_g6_ParamLimits

0x1f0c,	// (0x0004839b) main_video_pane_g6

0x0006,

0xf173,	// (0x00055602) main_video_pane_g_ParamLimits

0xf173,	// (0x00055602) main_video_pane_g

0x1f34,	// (0x000483c3) main_video_pane_t1_ParamLimits

0x1f34,	// (0x000483c3) main_video_pane_t1

0x133e,	// (0x000477cd) cams_zoom_pane_g1

0x133e,	// (0x000477cd) cams_zoom_pane_g2

0x133e,	// (0x000477cd) cams_zoom_pane_g3

0x133e,	// (0x000477cd) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00055611) cams_zoom_pane_g

0x0c30,	// (0x000470bf) grid_cams_pane

0x0c30,	// (0x000470bf) linegrid_cams_pane

0x1f78,	// (0x00048407) cell_cams_pane_ParamLimits

0x1f78,	// (0x00048407) cell_cams_pane

0xe665,	// (0x00054af4) cams_burst_image_pane

0x133e,	// (0x000477cd) cell_cams_pane_g1

0xe665,	// (0x00054af4) grid_highlight_pane_cp03

0x1207,	// (0x00047696) mp_bg_pane_g1

0xe665,	// (0x00054af4) bg_list_pane_cp03

0xe665,	// (0x00054af4) bg_mp_pane

0xe665,	// (0x00054af4) grid_mp_pane

0x133e,	// (0x000477cd) media_player_g1

0x3621,	// (0x00049ab0) media_player_t1

0x3621,	// (0x00049ab0) media_player_t2

0x3621,	// (0x00049ab0) media_player_t3

0x3621,	// (0x00049ab0) media_player_t4

0x3621,	// (0x00049ab0) media_player_t5

0x3621,	// (0x00049ab0) media_player_t6

0x3621,	// (0x00049ab0) media_player_t7

0x0006,

0xf4cf,	// (0x0005595e) media_player_t

0xe665,	// (0x00054af4) wait_bar_pane_cp02

0xf4b4,	// (0x00055943) main_usb_pane_t

0xa7b4,	// (0x00050c43) cell_mp_pane

0x1207,	// (0x00047696) cell_mp_pane_g1

0x0f94,	// (0x00047423) grid_highlight_pane_cp06

0x1f8d,	// (0x0004841c) grid_skin_colour_pane

0x1f95,	// (0x00048424) list_highlight_pane_cp03

0x1f9d,	// (0x0004842c) skin_g1

0x1fa5,	// (0x00048434) skin_t1

0x1fb4,	// (0x00048443) skin_t2

0x0001,

0xf1b0,	// (0x0005563f) skin_t

0x1fc2,	// (0x00048451) cell_skin_colour_pane_ParamLimits

0x1fc2,	// (0x00048451) cell_skin_colour_pane

0x1fe2,	// (0x00048471) cell_skin_colour_pane_g1

0x2046,	// (0x000484d5) call_video_g1_ParamLimits

0x2046,	// (0x000484d5) call_video_g1

0x2062,	// (0x000484f1) call_video_g2_ParamLimits

0x2062,	// (0x000484f1) call_video_g2

0x0001,

0xf1b5,	// (0x00055644) call_video_g_ParamLimits

0xf1b5,	// (0x00055644) call_video_g

0x20aa,	// (0x00048539) call_video_uplink_pane_cp1_ParamLimits

0x20aa,	// (0x00048539) call_video_uplink_pane_cp1

0x20fe,	// (0x0004858d) call_video_uplink_pane_cp2

0x2142,	// (0x000485d1) video_down_crop_pane_ParamLimits

0x2142,	// (0x000485d1) video_down_crop_pane

0x222a,	// (0x000486b9) video_down_pane_ParamLimits

0x222a,	// (0x000486b9) video_down_pane

0x231c,	// (0x000487ab) video_down_subqcif_pane_ParamLimits

0x231c,	// (0x000487ab) video_down_subqcif_pane

0x2336,	// (0x000487c5) video_down_subqcif_pane_cp_ParamLimits

0x2336,	// (0x000487c5) video_down_subqcif_pane_cp

0x2375,	// (0x00048804) im_reading_pane_ParamLimits

0x2375,	// (0x00048804) im_reading_pane

0x2387,	// (0x00048816) im_writing_pane_ParamLimits

0x2387,	// (0x00048816) im_writing_pane

0x23ad,	// (0x0004883c) im_reading_pane_t1

0x23ec,	// (0x0004887b) list_im_pane

0x23fd,	// (0x0004888c) scroll_pane_cp07

0x2416,	// (0x000488a5) im_writing_pane_t1_ParamLimits

0x2416,	// (0x000488a5) im_writing_pane_t1

0x242b,	// (0x000488ba) im_writing_pane_t2_ParamLimits

0x242b,	// (0x000488ba) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0005564e) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0005564e) im_writing_pane_t

0x0f94,	// (0x00047423) input_focus_pane_cp04

0x0f94,	// (0x00047423) input_focus_pane_cp05

0x2448,	// (0x000488d7) list_im_single_pane_ParamLimits

0x2448,	// (0x000488d7) list_im_single_pane

0x245e,	// (0x000488ed) list_single_im_pane_t1

0x1d9b,	// (0x0004822a) blid_accuracy_pane

0x1d9b,	// (0x0004822a) blid_compass_pane

0xbc38,	// (0x000520c7) main_location_t1

0xbc38,	// (0x000520c7) main_location_t2

0xbc38,	// (0x000520c7) main_location_t3

0x0002,

0xf4de,	// (0x0005596d) main_location_t

0x0f94,	// (0x00047423) aid_levels_location

0x1207,	// (0x00047696) blid_accuracy_pane_g1

0x1207,	// (0x00047696) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0005569d) blid_accuracy_pane_g

0x2498,	// (0x00048927) wml_content_pane

0x24d6,	// (0x00048965) wml_button_pane_ParamLimits

0x24d6,	// (0x00048965) wml_button_pane

0x24ea,	// (0x00048979) wml_list_single_large_pane_ParamLimits

0x24ea,	// (0x00048979) wml_list_single_large_pane

0x2503,	// (0x00048992) wml_list_single_medium_pane_ParamLimits

0x2503,	// (0x00048992) wml_list_single_medium_pane

0x251d,	// (0x000489ac) wml_list_single_small_pane_ParamLimits

0x251d,	// (0x000489ac) wml_list_single_small_pane

0x2539,	// (0x000489c8) wml_selection_box_pane_ParamLimits

0x2539,	// (0x000489c8) wml_selection_box_pane

0x254c,	// (0x000489db) wml_list_single_pane_t1

0x255b,	// (0x000489ea) wml_list_single_medium_pane_t1

0x256a,	// (0x000489f9) wml_list_single_large_pane_t1

0x2579,	// (0x00048a08) input_focus_pane_cp02_ParamLimits

0x2579,	// (0x00048a08) input_focus_pane_cp02

0x258c,	// (0x00048a1b) wml_selection_box_pane_g1

0x2595,	// (0x00048a24) wml_selection_box_pane_t1_ParamLimits

0x2595,	// (0x00048a24) wml_selection_box_pane_t1

0x11ef,	// (0x0004767e) bg_wml_button_pane_ParamLimits

0x11ef,	// (0x0004767e) bg_wml_button_pane

0x25ad,	// (0x00048a3c) wml_button_pane_g1

0x25b5,	// (0x00048a44) wml_button_pane_t1

0x25ad,	// (0x00048a3c) wml_button_bg_pane_g1

0x25c5,	// (0x00048a54) wml_button_bg_pane_g2

0x25cd,	// (0x00048a5c) wml_button_bg_pane_g3

0x25d5,	// (0x00048a64) wml_button_bg_pane_g4

0x25dd,	// (0x00048a6c) wml_button_bg_pane_g5

0x25e5,	// (0x00048a74) wml_button_bg_pane_g6

0x25ed,	// (0x00048a7c) wml_button_bg_pane_g7

0x25f5,	// (0x00048a84) wml_button_bg_pane_g8

0x25fd,	// (0x00048a8c) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00055653) wml_button_bg_pane_g

0x2605,	// (0x00048a94) bg_list_pane_cp02

0x260f,	// (0x00048a9e) mce_header_pane_ParamLimits

0x260f,	// (0x00048a9e) mce_header_pane

0x2625,	// (0x00048ab4) mce_icon_pane

0x2625,	// (0x00048ab4) mce_image_pane

0x262e,	// (0x00048abd) mce_text_pane_ParamLimits

0x262e,	// (0x00048abd) mce_text_pane

0x2641,	// (0x00048ad0) scroll_pane_cp03

0x24ce,	// (0x0004895d) scroll_pane_cp04

0x264b,	// (0x00048ada) scroll_pane_cp05_ParamLimits

0x264b,	// (0x00048ada) scroll_pane_cp05

0x2657,	// (0x00048ae6) mce_header_field_pane_ParamLimits

0x2657,	// (0x00048ae6) mce_header_field_pane

0x2670,	// (0x00048aff) mce_header_field_pane_2_ParamLimits

0x2670,	// (0x00048aff) mce_header_field_pane_2

0x2686,	// (0x00048b15) mce_header_field_pane_3

0x268e,	// (0x00048b1d) list_single_mce_message_pane_ParamLimits

0x268e,	// (0x00048b1d) list_single_mce_message_pane

0x26aa,	// (0x00048b39) list_single_mce_smart_pane_ParamLimits

0x26aa,	// (0x00048b39) list_single_mce_smart_pane

0x26d1,	// (0x00048b60) input_focus_pane_cp03

0x26da,	// (0x00048b69) list_header_data_pane

0x26e2,	// (0x00048b71) mce_header_field_pane_t1

0x26f2,	// (0x00048b81) list_single_mce_header_pane_ParamLimits

0x26f2,	// (0x00048b81) list_single_mce_header_pane

0x2706,	// (0x00048b95) list_single_mce_header_pane_t1

0x2715,	// (0x00048ba4) list_single_mce_message_pane_g1

0x271d,	// (0x00048bac) list_single_mce_message_pane_t1

0x2751,	// (0x00048be0) bg_cale_heading_pane_cp01_ParamLimits

0x2751,	// (0x00048be0) bg_cale_heading_pane_cp01

0x27a3,	// (0x00048c32) bg_cale_pane_cp02_ParamLimits

0x27a3,	// (0x00048c32) bg_cale_pane_cp02

0x27d0,	// (0x00048c5f) cale_month_corner_pane

0x27ef,	// (0x00048c7e) cale_month_day_heading_pane_ParamLimits

0x27ef,	// (0x00048c7e) cale_month_day_heading_pane

0x2859,	// (0x00048ce8) cale_month_pane_g1_ParamLimits

0x2859,	// (0x00048ce8) cale_month_pane_g1

0x28a0,	// (0x00048d2f) cale_month_pane_g2_ParamLimits

0x28a0,	// (0x00048d2f) cale_month_pane_g2

0x28dc,	// (0x00048d6b) cale_month_pane_g3_ParamLimits

0x28dc,	// (0x00048d6b) cale_month_pane_g3

0x2930,	// (0x00048dbf) cale_month_pane_g4_ParamLimits

0x2930,	// (0x00048dbf) cale_month_pane_g4

0x2984,	// (0x00048e13) cale_month_pane_g5_ParamLimits

0x2984,	// (0x00048e13) cale_month_pane_g5

0x29e0,	// (0x00048e6f) cale_month_pane_g6_ParamLimits

0x29e0,	// (0x00048e6f) cale_month_pane_g6

0x2a44,	// (0x00048ed3) cale_month_pane_g7_ParamLimits

0x2a44,	// (0x00048ed3) cale_month_pane_g7

0x2aac,	// (0x00048f3b) cale_month_pane_g8_ParamLimits

0x2aac,	// (0x00048f3b) cale_month_pane_g8

0x2b18,	// (0x00048fa7) cale_month_pane_g9_ParamLimits

0x2b18,	// (0x00048fa7) cale_month_pane_g9

0x2b7c,	// (0x0004900b) cale_month_pane_g10_ParamLimits

0x2b7c,	// (0x0004900b) cale_month_pane_g10

0x2bce,	// (0x0004905d) cale_month_pane_g11_ParamLimits

0x2bce,	// (0x0004905d) cale_month_pane_g11

0x2c20,	// (0x000490af) cale_month_pane_g12_ParamLimits

0x2c20,	// (0x000490af) cale_month_pane_g12

0x2c78,	// (0x00049107) cale_month_pane_g13_ParamLimits

0x2c78,	// (0x00049107) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00055666) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00055666) cale_month_pane_g

0x2ce2,	// (0x00049171) cale_month_week_pane

0x2d06,	// (0x00049195) grid_cale_month_pane_ParamLimits

0x2d06,	// (0x00049195) grid_cale_month_pane

0x2d67,	// (0x000491f6) cale_month_day_heading_pane_t1

0x2ded,	// (0x0004927c) cale_month_day_heading_pane_t2

0x2e66,	// (0x000492f5) cale_month_day_heading_pane_t3

0x2edf,	// (0x0004936e) cale_month_day_heading_pane_t4

0x2f60,	// (0x000493ef) cale_month_day_heading_pane_t5

0x2fe9,	// (0x00049478) cale_month_day_heading_pane_t6

0x3072,	// (0x00049501) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00055681) cale_month_day_heading_pane_t

0x1bec,	// (0x0004807b) bg_cale_side_pane_cp01

0x3103,	// (0x00049592) cale_month_week_pane_t1

0x311c,	// (0x000495ab) cale_month_week_pane_t2

0x3135,	// (0x000495c4) cale_month_week_pane_t3

0x314e,	// (0x000495dd) cale_month_week_pane_t4

0x3167,	// (0x000495f6) cale_month_week_pane_t5

0x3180,	// (0x0004960f) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00055690) cale_month_week_pane_t

0x31a5,	// (0x00049634) cell_cale_month_pane_ParamLimits

0x31a5,	// (0x00049634) cell_cale_month_pane

0xa684,	// (0x00050b13) cell_cale_month_pane_g1

0x32db,	// (0x0004976a) cell_cale_month_pane_t1_ParamLimits

0x32db,	// (0x0004976a) cell_cale_month_pane_t1

0x1d1c,	// (0x000481ab) grid_highlight_pane_cp08

0x1207,	// (0x00047696) main_smil_g1

0x3307,	// (0x00049796) smil_status_pane

0x3312,	// (0x000497a1) smil_text_pane

0x16a3,	// (0x00047b32) bg_popup_call3_rect_pane_g8

0x16ab,	// (0x00047b3a) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x000556a2) bg_popup_call3_rect_pane_g

0xbd59,	// (0x000521e8) smil_status_volume_pane_g1

0x3326,	// (0x000497b5) smil_status_pane_t1

0xbd8c,	// (0x0005221b) volume_smil_pane

0x333d,	// (0x000497cc) list_smil_text_pane

0x3347,	// (0x000497d6) scroll_pane_cp011

0x3352,	// (0x000497e1) smil_text_list_pane_t1_ParamLimits

0x3352,	// (0x000497e1) smil_text_list_pane_t1

0xa690,	// (0x00050b1f) aid_volume_smil_ParamLimits

0xa690,	// (0x00050b1f) aid_volume_smil

0x1207,	// (0x00047696) smil_volume_pane_g1

0x1207,	// (0x00047696) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0005569d) smil_volume_pane_g

0x16e7,	// (0x00047b76) listscroll_cale_day_pane

0x339e,	// (0x0004982d) bg_cale_pane

0x33b6,	// (0x00049845) list_cale_pane

0x33d9,	// (0x00049868) scroll_pane_cp09

0x167b,	// (0x00047b0a) cale_bg_pane_g1

0x166b,	// (0x00047afa) cale_bg_pane_g2

0x1673,	// (0x00047b02) cale_bg_pane_g3

0x1683,	// (0x00047b12) cale_bg_pane_g4

0x168b,	// (0x00047b1a) cale_bg_pane_g5

0x1693,	// (0x00047b22) cale_bg_pane_g6

0x169b,	// (0x00047b2a) cale_bg_pane_g7

0x16a3,	// (0x00047b32) cale_bg_pane_g8

0x16ab,	// (0x00047b3a) cale_bg_pane_g9

0x0008,

0xf213,	// (0x000556a2) cale_bg_pane_g

0x33f2,	// (0x00049881) list_cale_time_pane_ParamLimits

0x33f2,	// (0x00049881) list_cale_time_pane

0x3409,	// (0x00049898) list_cale_time_pane_g1_ParamLimits

0x3409,	// (0x00049898) list_cale_time_pane_g1

0x3415,	// (0x000498a4) list_cale_time_pane_g2_ParamLimits

0x3415,	// (0x000498a4) list_cale_time_pane_g2

0x3422,	// (0x000498b1) list_cale_time_pane_g3_ParamLimits

0x3422,	// (0x000498b1) list_cale_time_pane_g3

0x3430,	// (0x000498bf) list_cale_time_pane_g4_ParamLimits

0x3430,	// (0x000498bf) list_cale_time_pane_g4

0x343e,	// (0x000498cd) list_cale_time_pane_g5_ParamLimits

0x343e,	// (0x000498cd) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000556b5) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000556b5) list_cale_time_pane_g

0x3459,	// (0x000498e8) list_cale_time_pane_t1_ParamLimits

0x3459,	// (0x000498e8) list_cale_time_pane_t1

0x3481,	// (0x00049910) list_cale_time_pane_t2_ParamLimits

0x3481,	// (0x00049910) list_cale_time_pane_t2

0x3a29,	// (0x00049eb8) aid_blid_cardinal_pane

0x3a67,	// (0x00049ef6) compass_pane_t4

0x34a9,	// (0x00049938) list_cale_time_pane_t4_ParamLimits

0x34a9,	// (0x00049938) list_cale_time_pane_t4

0x3a75,	// (0x00049f04) compass_pane_t5

0x3a85,	// (0x00049f14) compass_pane_t6

0x3a93,	// (0x00049f22) compass_pane_t7

0xa864,	// (0x00050cf3) navi_pane_cc_t1

0xa9c3,	// (0x00050e52) aid_phob_thumbnail_center_pane

0x3f4d,	// (0x0004a3dc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000556c2) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000556c2) list_cale_time_pane_t

0xe70e,	// (0x00054b9d) bg_popup_window_pane_cp02_ParamLimits

0xe70e,	// (0x00054b9d) bg_popup_window_pane_cp02

0x34d1,	// (0x00049960) heading_pane_cp01_ParamLimits

0x34d1,	// (0x00049960) heading_pane_cp01

0x34dd,	// (0x0004996c) loc_req_pane_ParamLimits

0x34dd,	// (0x0004996c) loc_req_pane

0x34ef,	// (0x0004997e) loc_type_pane_ParamLimits

0x34ef,	// (0x0004997e) loc_type_pane

0x3501,	// (0x00049990) loc_type_pane_t1_ParamLimits

0x3501,	// (0x00049990) loc_type_pane_t1

0x3513,	// (0x000499a2) loc_type_pane_t2_ParamLimits

0x3513,	// (0x000499a2) loc_type_pane_t2

0x3525,	// (0x000499b4) loc_type_pane_t3_ParamLimits

0x3525,	// (0x000499b4) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000556c9) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000556c9) loc_type_pane_t

0x3537,	// (0x000499c6) list_loc_req_pane

0x3541,	// (0x000499d0) scroll_pane_cp012

0x354c,	// (0x000499db) list_single_loc_request_popup_menu_pane_ParamLimits

0x354c,	// (0x000499db) list_single_loc_request_popup_menu_pane

0x3559,	// (0x000499e8) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3559,	// (0x000499e8) list_single_loc_request_popup_menu_pane_g1

0x3565,	// (0x000499f4) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3565,	// (0x000499f4) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000556d0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000556d0) list_single_loc_request_popup_menu_pane_g

0x3571,	// (0x00049a00) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3571,	// (0x00049a00) list_single_loc_request_popup_menu_pane_t1

0x11ef,	// (0x0004767e) bg_popup_window_pane_cp03_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_window_pane_cp03

0x3587,	// (0x00049a16) heading_loc_req_pane_ParamLimits

0x3587,	// (0x00049a16) heading_loc_req_pane

0x3593,	// (0x00049a22) popup_dyc_status_message_window_g1_ParamLimits

0x3593,	// (0x00049a22) popup_dyc_status_message_window_g1

0x35a7,	// (0x00049a36) popup_dyc_status_message_window_t1_ParamLimits

0x35a7,	// (0x00049a36) popup_dyc_status_message_window_t1

0x35bc,	// (0x00049a4b) popup_dyc_status_message_window_t2_ParamLimits

0x35bc,	// (0x00049a4b) popup_dyc_status_message_window_t2

0x35d1,	// (0x00049a60) popup_dyc_status_message_window_t3_ParamLimits

0x35d1,	// (0x00049a60) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000556d5) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000556d5) popup_dyc_status_message_window_t

0x0f94,	// (0x00047423) bg_heading_pane_cp01

0x35ed,	// (0x00049a7c) heading_loc_req_pane_g1

0x35f5,	// (0x00049a84) heading_loc_req_pane_g2

0x35fd,	// (0x00049a8c) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000556dc) heading_loc_req_pane_g

0x3605,	// (0x00049a94) heading_loc_req_pane_t1

0x3631,	// (0x00049ac0) bg_popup_sub_pane_cp01_ParamLimits

0x3631,	// (0x00049ac0) bg_popup_sub_pane_cp01

0x363f,	// (0x00049ace) popup_cale_events_window_g1_ParamLimits

0x363f,	// (0x00049ace) popup_cale_events_window_g1

0x365f,	// (0x00049aee) popup_cale_events_window_g2_ParamLimits

0x365f,	// (0x00049aee) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000556fe) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000556fe) popup_cale_events_window_g

0x367f,	// (0x00049b0e) popup_cale_events_window_t1_ParamLimits

0x367f,	// (0x00049b0e) popup_cale_events_window_t1

0x3691,	// (0x00049b20) popup_cale_events_window_t2_ParamLimits

0x3691,	// (0x00049b20) popup_cale_events_window_t2

0x36cf,	// (0x00049b5e) popup_cale_events_window_t3_ParamLimits

0x36cf,	// (0x00049b5e) popup_cale_events_window_t3

0x3709,	// (0x00049b98) popup_cale_events_window_t4_ParamLimits

0x3709,	// (0x00049b98) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x00055703) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x00055703) popup_cale_events_window_t

0x373f,	// (0x00049bce) call_type_pane

0x374f,	// (0x00049bde) popup_call_status_window_g1

0x3763,	// (0x00049bf2) popup_call_status_window_g2

0x3777,	// (0x00049c06) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0005570c) popup_call_status_window_g

0x3787,	// (0x00049c16) call_type_pane_g1

0x3790,	// (0x00049c1f) call_type_pane_g2

0x0001,

0xf284,	// (0x00055713) call_type_pane_g

0x0f94,	// (0x00047423) bg_popup_sub_pane_cp02

0x3799,	// (0x00049c28) listscroll_popup_wml_pane

0x37a1,	// (0x00049c30) list_wml_pane

0x37ab,	// (0x00049c3a) scroll_pane_cp013

0x37b6,	// (0x00049c45) list_single_graphic_popup_wml_pane_ParamLimits

0x37b6,	// (0x00049c45) list_single_graphic_popup_wml_pane

0x1207,	// (0x00047696) list_single_graphic_popup_wml_pane_g1

0x37ca,	// (0x00049c59) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x00055718) list_single_graphic_popup_wml_pane_g

0x37d2,	// (0x00049c61) list_single_graphic_popup_wml_pane_t1

0x37e8,	// (0x00049c77) aid_call_pane

0x11e7,	// (0x00047676) popup_clock_analogue_window_g1

0x11e7,	// (0x00047676) popup_clock_analogue_window_g2

0xa6b2,	// (0x00050b41) popup_clock_analogue_window_g3

0xa6b2,	// (0x00050b41) popup_clock_analogue_window_g4

0x1207,	// (0x00047696) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0005571d) popup_clock_analogue_window_g

0xa6ba,	// (0x00050b49) popup_clock_analogue_window_t1

0xa6c8,	// (0x00050b57) clock_digital_number_pane_ParamLimits

0xa6c8,	// (0x00050b57) clock_digital_number_pane

0xa6d4,	// (0x00050b63) clock_digital_number_pane_cp02_ParamLimits

0xa6d4,	// (0x00050b63) clock_digital_number_pane_cp02

0xa6e0,	// (0x00050b6f) clock_digital_number_pane_cp03_ParamLimits

0xa6e0,	// (0x00050b6f) clock_digital_number_pane_cp03

0xa6ec,	// (0x00050b7b) clock_digital_number_pane_cp04_ParamLimits

0xa6ec,	// (0x00050b7b) clock_digital_number_pane_cp04

0xa6f8,	// (0x00050b87) clock_digital_separator_pane_ParamLimits

0xa6f8,	// (0x00050b87) clock_digital_separator_pane

0xa704,	// (0x00050b93) popup_clock_digital_window_t1

0x1207,	// (0x00047696) clock_digital_number_pane_g1

0x1207,	// (0x00047696) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0005569d) clock_digital_number_pane_g

0x1207,	// (0x00047696) clock_digital_separator_pane_g1

0x1207,	// (0x00047696) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0005569d) clock_digital_separator_pane_g

0x0f94,	// (0x00047423) bg_popup_window_pane_cp04

0x37f0,	// (0x00049c7f) heading_pane_cp03

0x1d9b,	// (0x0004822a) listscroll_popup_gms_pane

0x0f94,	// (0x00047423) grid_large_graphic_popup_pane

0x37f8,	// (0x00049c87) listscroll_popup_gms_pane_g1

0x3801,	// (0x00049c90) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x00055728) listscroll_popup_gms_pane_g

0x380a,	// (0x00049c99) scroll_pane_cp014

0x125c,	// (0x000476eb) cell_large_graphic_popup_pane_ParamLimits

0x125c,	// (0x000476eb) cell_large_graphic_popup_pane

0x126a,	// (0x000476f9) cell_large_graphic_popup_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_large_graphic_popup_pane_g1

0x3813,	// (0x00049ca2) cell_large_graphic_popup_pane_g2_ParamLimits

0x3813,	// (0x00049ca2) cell_large_graphic_popup_pane_g2

0x3821,	// (0x00049cb0) cell_large_graphic_popup_pane_g3_ParamLimits

0x3821,	// (0x00049cb0) cell_large_graphic_popup_pane_g3

0x382f,	// (0x00049cbe) cell_large_graphic_popup_pane_g4_ParamLimits

0x382f,	// (0x00049cbe) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0005572d) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0005572d) cell_large_graphic_popup_pane_g

0x0f94,	// (0x00047423) grid_highlight_pane_cp010

0x1207,	// (0x00047696) bg_popup_call_pane_g1

0xa721,	// (0x00050bb0) list_single_graphic_popup_conf_pane_ParamLimits

0xa721,	// (0x00050bb0) list_single_graphic_popup_conf_pane

0xa733,	// (0x00050bc2) list_highlight_pane_cp01

0xa73c,	// (0x00050bcb) list_single_graphic_popup_conf_pane_g1

0xa744,	// (0x00050bd3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x00055736) list_single_graphic_popup_conf_pane_g

0xa74c,	// (0x00050bdb) list_single_graphic_popup_conf_pane_t1

0xa75a,	// (0x00050be9) linegrid_cams_pane_g1

0x3840,	// (0x00049ccf) linegrid_cams_pane_g2

0x1d79,	// (0x00048208) linegrid_cams_pane_g3

0xa763,	// (0x00050bf2) linegrid_cams_pane_g4

0x3849,	// (0x00049cd8) linegrid_cams_pane_g5

0x3852,	// (0x00049ce1) linegrid_cams_pane_g6

0x1d82,	// (0x00048211) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0005573b) linegrid_cams_pane_g

0xa76c,	// (0x00050bfb) popup_clock_analogue_window

0xa76c,	// (0x00050bfb) popup_clock_digital_window

0x0f94,	// (0x00047423) popup_phob_thumbnail_window

0x1207,	// (0x00047696) call_video_uplink_pane_g1

0xa775,	// (0x00050c04) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0005574a) call_video_uplink_pane_g

0xa77d,	// (0x00050c0c) video_uplink_pane

0xa785,	// (0x00050c14) mce_image_pane_g1

0x385d,	// (0x00049cec) mce_image_pane_g2

0x3867,	// (0x00049cf6) mce_image_pane_g3

0x3871,	// (0x00049d00) mce_image_pane_g4

0x3879,	// (0x00049d08) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0005574f) mce_image_pane_g

0xa78f,	// (0x00050c1e) control_top_pane_stacon_cp01_ParamLimits

0xa78f,	// (0x00050c1e) control_top_pane_stacon_cp01

0xa7a3,	// (0x00050c32) uni_indicator_pane_stacon_cp01_ParamLimits

0xa7a3,	// (0x00050c32) uni_indicator_pane_stacon_cp01

0xa7b4,	// (0x00050c43) bg_popup_sub_pane_cp03

0x3881,	// (0x00049d10) chi_dic_find_pane

0x3889,	// (0x00049d18) listscroll_chi_dic_pane

0x3892,	// (0x00049d21) main_pane_chidic_g1

0x38a5,	// (0x00049d34) chi_dic_find_pane_t1

0xa7be,	// (0x00050c4d) find_chidic_pane

0xa7c7,	// (0x00050c56) chi_dic_list_pane_ParamLimits

0xa7c7,	// (0x00050c56) chi_dic_list_pane

0xa7d8,	// (0x00050c67) scroll_pane_cp020

0x38b3,	// (0x00049d42) find_chidic_pane_t1

0x0f94,	// (0x00047423) input_focus_pane_cp06

0x38c2,	// (0x00049d51) list_chi_dic_pane_ParamLimits

0x38c2,	// (0x00049d51) list_chi_dic_pane

0x38d4,	// (0x00049d63) list_chi_dic_pane_t1_ParamLimits

0x38d4,	// (0x00049d63) list_chi_dic_pane_t1

0x0f94,	// (0x00047423) list_highlight_pane_cp020

0xa7e0,	// (0x00050c6f) bg_cale_heading_pane_g1

0x38e7,	// (0x00049d76) bg_cale_heading_pane_g2

0x38ef,	// (0x00049d7e) bg_cale_heading_pane_g3

0x38f7,	// (0x00049d86) bg_cale_heading_pane_g4

0x3901,	// (0x00049d90) bg_cale_heading_pane_g5

0x390b,	// (0x00049d9a) bg_cale_heading_pane_g6

0x3913,	// (0x00049da2) bg_cale_heading_pane_g7

0x391b,	// (0x00049daa) bg_cale_heading_pane_g8

0x3925,	// (0x00049db4) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0005575a) bg_cale_heading_pane_g

0xa7e0,	// (0x00050c6f) bg_cale_side_pane_g1

0x392f,	// (0x00049dbe) bg_cale_side_pane_g2

0x3939,	// (0x00049dc8) bg_cale_side_pane_g3

0x3943,	// (0x00049dd2) bg_cale_side_pane_g4

0x394d,	// (0x00049ddc) bg_cale_side_pane_g5

0x3957,	// (0x00049de6) bg_cale_side_pane_g6

0x3961,	// (0x00049df0) bg_cale_side_pane_g7

0x396b,	// (0x00049dfa) bg_cale_side_pane_g8

0x3973,	// (0x00049e02) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0005576d) bg_cale_side_pane_g

0x397b,	// (0x00049e0a) popup_call_status_window_ParamLimits

0x397b,	// (0x00049e0a) popup_call_status_window

0xa7e8,	// (0x00050c77) stacon_top_pane

0xa7f0,	// (0x00050c7f) status_pane_ParamLimits

0xa7f0,	// (0x00050c7f) status_pane

0xa805,	// (0x00050c94) status_small_pane

0xa80d,	// (0x00050c9c) control_pane

0x0f94,	// (0x00047423) stacon_bottom_pane

0xa815,	// (0x00050ca4) list_single_mce_smart_pane_t1_ParamLimits

0xa815,	// (0x00050ca4) list_single_mce_smart_pane_t1

0xa828,	// (0x00050cb7) list_single_mce_smart_pane_t2_ParamLimits

0xa828,	// (0x00050cb7) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x00055780) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x00055780) list_single_mce_smart_pane_t

0x39c8,	// (0x00049e57) compass_pane

0x39d3,	// (0x00049e62) main_location2_pane_t1

0x39e9,	// (0x00049e78) main_location2_pane_t2

0x39ff,	// (0x00049e8e) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x00055785) main_location2_pane_t

0xa847,	// (0x00050cd6) compass_pane_g1_ParamLimits

0xa847,	// (0x00050cd6) compass_pane_g1

0x3a49,	// (0x00049ed8) compass_pane_t1

0x3a58,	// (0x00049ee7) compass_pane_t2

0x0005,

0xf2ff,	// (0x0005578e) compass_pane_t

0x3aa3,	// (0x00049f32) text_secondary_cp61

0xa85b,	// (0x00050cea) navi_pane_cams_g5

0xa87e,	// (0x00050d0d) navi_pane_im_t1

0xa88c,	// (0x00050d1b) navi_pane_mp_g1_ParamLimits

0xa88c,	// (0x00050d1b) navi_pane_mp_g1

0xa8a0,	// (0x00050d2f) navi_pane_mp_g2_ParamLimits

0xa8a0,	// (0x00050d2f) navi_pane_mp_g2

0xa8ac,	// (0x00050d3b) navi_pane_mp_g3_ParamLimits

0xa8ac,	// (0x00050d3b) navi_pane_mp_g3

0x0002,

0xf313,	// (0x000557a2) navi_pane_mp_g_ParamLimits

0xf313,	// (0x000557a2) navi_pane_mp_g

0xa8b8,	// (0x00050d47) navi_pane_mp_t1

0xa8c6,	// (0x00050d55) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x000557a9) navi_pane_mp_t

0xa902,	// (0x00050d91) navi_pane_vt_g1

0xa8b8,	// (0x00050d47) navi_pane_vt_t1

0xa90a,	// (0x00050d99) navi_slider_pane

0x1d9b,	// (0x0004822a) zooming_pane

0xa912,	// (0x00050da1) navi_slider_pane_g1

0xa91b,	// (0x00050daa) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000557b0) navi_slider_pane_g

0xa948,	// (0x00050dd7) aid_levels_zoom

0xa950,	// (0x00050ddf) zooming_pane_g1

0xa958,	// (0x00050de7) zooming_pane_g2

0xa958,	// (0x00050de7) zooming_pane_g3

0x0002,

0xf330,	// (0x000557bf) zooming_pane_g

0xa960,	// (0x00050def) level_10_zoom

0xa969,	// (0x00050df8) level_11_zoom

0xa972,	// (0x00050e01) level_1_zoom

0xa97b,	// (0x00050e0a) level_2_zoom

0xa984,	// (0x00050e13) level_3_zoom

0xa98d,	// (0x00050e1c) level_4_zoom

0xa996,	// (0x00050e25) level_5_zoom

0xa99f,	// (0x00050e2e) level_6_zoom

0xa9a8,	// (0x00050e37) level_7_zoom

0xa9b1,	// (0x00050e40) level_8_zoom

0xa9ba,	// (0x00050e49) level_9_zoom

0xa9cb,	// (0x00050e5a) popup_phob_thumbnail_window_g1

0xa9d3,	// (0x00050e62) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000557c6) popup_phob_thumbnail_window_g

0x4597,	// (0x0004aa26) level_1_location

0x459f,	// (0x0004aa2e) level_2_location

0x45a7,	// (0x0004aa36) level_3_location

0x45b1,	// (0x0004aa40) level_4_location

0x1d9b,	// (0x0004822a) level_5_location

0x3bec,	// (0x0004a07b) mce_icon_pane_g1

0x3bf6,	// (0x0004a085) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000557cb) mce_icon_pane_g

0xa9db,	// (0x00050e6a) main_mup_pane_g1_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g1

0xa9db,	// (0x00050e6a) main_mup_pane_g2_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g2

0xa9db,	// (0x00050e6a) main_mup_pane_g3_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g3

0xa9db,	// (0x00050e6a) main_mup_pane_g4_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g4

0xa9db,	// (0x00050e6a) main_mup_pane_g5_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g5

0xa9db,	// (0x00050e6a) main_mup_pane_g6_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g6

0xa9db,	// (0x00050e6a) main_mup_pane_g7_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g7

0xa9db,	// (0x00050e6a) main_mup_pane_g8_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g8

0xa9db,	// (0x00050e6a) main_mup_pane_g9_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g9

0xa9db,	// (0x00050e6a) main_mup_pane_g10_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g10

0xa9db,	// (0x00050e6a) main_mup_pane_g11_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g11

0x126a,	// (0x000476f9) main_mup_pane_g12_ParamLimits

0x126a,	// (0x000476f9) main_mup_pane_g12

0xa9db,	// (0x00050e6a) main_mup_pane_g13_ParamLimits

0xa9db,	// (0x00050e6a) main_mup_pane_g13

0x000c,

0xf341,	// (0x000557d0) main_mup_pane_g_ParamLimits

0xf341,	// (0x000557d0) main_mup_pane_g

0xa9e9,	// (0x00050e78) main_mup_pane_t1_ParamLimits

0xa9e9,	// (0x00050e78) main_mup_pane_t1

0xa9e9,	// (0x00050e78) main_mup_pane_t2_ParamLimits

0xa9e9,	// (0x00050e78) main_mup_pane_t2

0xa9e9,	// (0x00050e78) main_mup_pane_t3_ParamLimits

0xa9e9,	// (0x00050e78) main_mup_pane_t3

0x1348,	// (0x000477d7) main_mup_pane_t4_ParamLimits

0x1348,	// (0x000477d7) main_mup_pane_t4

0x1348,	// (0x000477d7) main_mup_pane_t5_ParamLimits

0x1348,	// (0x000477d7) main_mup_pane_t5

0x135c,	// (0x000477eb) main_mup_pane_t6_ParamLimits

0x135c,	// (0x000477eb) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000557eb) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000557eb) main_mup_pane_t

0x125c,	// (0x000476eb) mup_progress_pane_ParamLimits

0x125c,	// (0x000476eb) mup_progress_pane

0xa9fd,	// (0x00050e8c) mup_visualizer_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup_visualizer_pane

0xa9fd,	// (0x00050e8c) mup_volume_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup_volume_pane

0x1278,	// (0x00047707) mup_visualizer_pane_g1_ParamLimits

0x1278,	// (0x00047707) mup_visualizer_pane_g1

0xaa0b,	// (0x00050e9a) mup_visualizer_pane_g2_ParamLimits

0xaa0b,	// (0x00050e9a) mup_visualizer_pane_g2

0x126a,	// (0x000476f9) mup_visualizer_pane_g3_ParamLimits

0x126a,	// (0x000476f9) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000557f8) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000557f8) mup_visualizer_pane_g

0x133e,	// (0x000477cd) mup_volume_pane_g1

0x133e,	// (0x000477cd) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0005551b) mup_volume_pane_g

0x133e,	// (0x000477cd) mup_progress_pane_g1

0x133e,	// (0x000477cd) mup_progress_pane_g2

0x133e,	// (0x000477cd) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000557ff) mup_progress_pane_g

0x0f94,	// (0x00047423) bg_popup_window_pane_cp05

0xaa19,	// (0x00050ea8) heading_pane_cp02_ParamLimits

0xaa19,	// (0x00050ea8) heading_pane_cp02

0xaa35,	// (0x00050ec4) list_popup_blid_pane

0xaa3d,	// (0x00050ecc) list_blid_sat_info_pane_ParamLimits

0xaa3d,	// (0x00050ecc) list_blid_sat_info_pane

0xaa50,	// (0x00050edf) list_blid_sat_info_pane_g1

0xaa58,	// (0x00050ee7) list_blid_sat_info_pane_t1

0x3d0a,	// (0x0004a199) mup_equalizer_pane_ParamLimits

0x3d0a,	// (0x0004a199) mup_equalizer_pane

0x3d2b,	// (0x0004a1ba) mup_equalizer_pane_cp1_ParamLimits

0x3d2b,	// (0x0004a1ba) mup_equalizer_pane_cp1

0x3d4c,	// (0x0004a1db) mup_equalizer_pane_cp2_ParamLimits

0x3d4c,	// (0x0004a1db) mup_equalizer_pane_cp2

0x3d71,	// (0x0004a200) mup_equalizer_pane_cp3_ParamLimits

0x3d71,	// (0x0004a200) mup_equalizer_pane_cp3

0x3d9a,	// (0x0004a229) mup_equalizer_pane_cp4_ParamLimits

0x3d9a,	// (0x0004a229) mup_equalizer_pane_cp4

0x3dc3,	// (0x0004a252) mup_equalizer_pane_cp5

0x3ddb,	// (0x0004a26a) mup_equalizer_pane_cp6

0x3df3,	// (0x0004a282) mup_equalizer_pane_cp7

0xbbd6,	// (0x00052065) bg_popup_call_poc_act_pane_g9

0xbbde,	// (0x0005206d) bg_popup_call_poc_act_pane_g10

0xbbe6,	// (0x00052075) bg_popup_call_poc_act_pane_g11

0x000a,

0x11ef,	// (0x0004767e) mup_scale_pane

0x1207,	// (0x00047696) mup_scale_pane_g1

0xaa66,	// (0x00050ef5) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0005581b) mup_scale_pane_g

0xaa8a,	// (0x00050f19) msg_data_pane

0xaa92,	// (0x00050f21) scroll_pane_cp017

0x0414,	// (0x000468a3) bg_list_pane_cp04_ParamLimits

0x0414,	// (0x000468a3) bg_list_pane_cp04

0xaaa2,	// (0x00050f31) msg_data_pane_g1

0x3e1d,	// (0x0004a2ac) msg_data_pane_g2

0x3e27,	// (0x0004a2b6) msg_data_pane_g3

0x3e31,	// (0x0004a2c0) msg_data_pane_g4

0x3e39,	// (0x0004a2c8) msg_data_pane_g5

0x3e41,	// (0x0004a2d0) msg_data_pane_g6

0x3e49,	// (0x0004a2d8) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0005582a) msg_data_pane_g

0x0432,	// (0x000468c1) msg_text_pane_ParamLimits

0x0432,	// (0x000468c1) msg_text_pane

0x3e51,	// (0x0004a2e0) qrid_highlight_pane_cp011_ParamLimits

0x3e51,	// (0x0004a2e0) qrid_highlight_pane_cp011

0x0f94,	// (0x00047423) msg_body_pane

0x11ef,	// (0x0004767e) msg_header_pane

0xaabe,	// (0x00050f4d) input_focus_pane_cp07

0xaadf,	// (0x00050f6e) msg_header_pane_t1_ParamLimits

0xaadf,	// (0x00050f6e) msg_header_pane_t1

0xaafb,	// (0x00050f8a) msg_header_pane_t2_ParamLimits

0xaafb,	// (0x00050f8a) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0005583e) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0005583e) msg_header_pane_t

0xab1b,	// (0x00050faa) msg_body_pane_g1

0xab23,	// (0x00050fb2) msg_body_pane_t1_ParamLimits

0xab23,	// (0x00050fb2) msg_body_pane_t1

0xab54,	// (0x00050fe3) msg_body_pane_t2_ParamLimits

0xab54,	// (0x00050fe3) msg_body_pane_t2

0xab66,	// (0x00050ff5) msg_body_pane_t3_ParamLimits

0xab66,	// (0x00050ff5) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00055843) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00055843) msg_body_pane_t

0x3ea1,	// (0x0004a330) main_viewer_pane_g1_ParamLimits

0x3ea1,	// (0x0004a330) main_viewer_pane_g1

0x3eaf,	// (0x0004a33e) main_viewer_pane_g2_ParamLimits

0x3eaf,	// (0x0004a33e) main_viewer_pane_g2

0x3ebd,	// (0x0004a34c) main_viewer_pane_g3_ParamLimits

0x3ebd,	// (0x0004a34c) main_viewer_pane_g3

0x3ecc,	// (0x0004a35b) main_viewer_pane_g4_ParamLimits

0x3ecc,	// (0x0004a35b) main_viewer_pane_g4

0xab90,	// (0x0005101f) main_viewer_pane_g5_ParamLimits

0xab90,	// (0x0005101f) main_viewer_pane_g5

0xab90,	// (0x0005101f) main_viewer_pane_g7_ParamLimits

0xab90,	// (0x0005101f) main_viewer_pane_g7

0xaba2,	// (0x00051031) main_viewer_pane_g8_ParamLimits

0xaba2,	// (0x00051031) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00055853) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00055853) main_viewer_pane_g

0xabba,	// (0x00051049) viewer_content_pane_ParamLimits

0xabba,	// (0x00051049) viewer_content_pane

0x3f0a,	// (0x0004a399) main_postcard_pane_g1_ParamLimits

0x3f0a,	// (0x0004a399) main_postcard_pane_g1

0x3f20,	// (0x0004a3af) main_postcard_pane_g2_ParamLimits

0x3f20,	// (0x0004a3af) main_postcard_pane_g2

0x3f36,	// (0x0004a3c5) main_postcard_pane_g3_ParamLimits

0x3f36,	// (0x0004a3c5) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00055864) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00055864) main_postcard_pane_g

0x3f4d,	// (0x0004a3dc) main_postcard_pane_g4

0xbd6c,	// (0x000521fb) smil_status_volume_pane_g2

0x3f90,	// (0x0004a41f) postcard_pane_ParamLimits

0x3f90,	// (0x0004a41f) postcard_pane

0xabc8,	// (0x00051057) postcard_pane_g1_ParamLimits

0xabc8,	// (0x00051057) postcard_pane_g1

0x3fe0,	// (0x0004a46f) postcard_pane_g2_ParamLimits

0x3fe0,	// (0x0004a46f) postcard_pane_g2

0x3fec,	// (0x0004a47b) postcard_pane_g3_ParamLimits

0x3fec,	// (0x0004a47b) postcard_pane_g3

0xabd6,	// (0x00051065) postcard_pane_g4_ParamLimits

0xabd6,	// (0x00051065) postcard_pane_g4

0x3ff8,	// (0x0004a487) postcard_pane_g5_ParamLimits

0x3ff8,	// (0x0004a487) postcard_pane_g5

0x400d,	// (0x0004a49c) postcard_pane_g6_ParamLimits

0x400d,	// (0x0004a49c) postcard_pane_g6

0xabc8,	// (0x00051057) postcard_pane_g7_ParamLimits

0xabc8,	// (0x00051057) postcard_pane_g7

0x0006,

0xf3e2,	// (0x00055871) postcard_pane_g_ParamLimits

0xf3e2,	// (0x00055871) postcard_pane_g

0x4025,	// (0x0004a4b4) main_mp2_pane_g1_ParamLimits

0x4025,	// (0x0004a4b4) main_mp2_pane_g1

0x4033,	// (0x0004a4c2) main_mp2_pane_g2_ParamLimits

0x4033,	// (0x0004a4c2) main_mp2_pane_g2

0x403f,	// (0x0004a4ce) main_mp2_pane_g3_ParamLimits

0x403f,	// (0x0004a4ce) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x00055880) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x00055880) main_mp2_pane_g

0x404b,	// (0x0004a4da) main_mp2_pane_t1_ParamLimits

0x404b,	// (0x0004a4da) main_mp2_pane_t1

0x4062,	// (0x0004a4f1) main_mp2_pane_t2_ParamLimits

0x4062,	// (0x0004a4f1) main_mp2_pane_t2

0x4074,	// (0x0004a503) main_mp2_pane_t3_ParamLimits

0x4074,	// (0x0004a503) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x00055887) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x00055887) main_mp2_pane_t

0x0c30,	// (0x000470bf) pec_content_pane_ParamLimits

0x0c30,	// (0x000470bf) pec_content_pane

0xe665,	// (0x00054af4) scroll_pane_cp015

0xa9fd,	// (0x00050e8c) pec_attribute_pane_ParamLimits

0xa9fd,	// (0x00050e8c) pec_attribute_pane

0x126a,	// (0x000476f9) pec_content_pane_g1_ParamLimits

0x126a,	// (0x000476f9) pec_content_pane_g1

0xabe4,	// (0x00051073) pec_content_pane_t1_ParamLimits

0xabe4,	// (0x00051073) pec_content_pane_t1

0xabf8,	// (0x00051087) pec_content_pane_t2_ParamLimits

0xabf8,	// (0x00051087) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0005588e) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0005588e) pec_content_pane_t

0x125c,	// (0x000476eb) list_single_graphic_pane_cp01_ParamLimits

0x125c,	// (0x000476eb) list_single_graphic_pane_cp01

0x11ef,	// (0x0004767e) bg_popup_sub_pane_cp04

0xac0c,	// (0x0005109b) popup_mup_playback_window_g1

0xac18,	// (0x000510a7) popup_mup_playback_window_t1

0xac2d,	// (0x000510bc) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00055893) popup_mup_playback_window_t

0xac64,	// (0x000510f3) main_image_pane_g1_ParamLimits

0xac64,	// (0x000510f3) main_image_pane_g1

0xaca7,	// (0x00051136) scroll_pane_cp018_ParamLimits

0xaca7,	// (0x00051136) scroll_pane_cp018

0xacbf,	// (0x0005114e) scroll_pane_cp016_ParamLimits

0xacbf,	// (0x0005114e) scroll_pane_cp016

0x413e,	// (0x0004a5cd) smil2_image_pane_ParamLimits

0x413e,	// (0x0004a5cd) smil2_image_pane

0x4174,	// (0x0004a603) smil2_root_pane_ParamLimits

0x4174,	// (0x0004a603) smil2_root_pane

0x41ac,	// (0x0004a63b) smil2_text_pane_ParamLimits

0x41ac,	// (0x0004a63b) smil2_text_pane

0xe665,	// (0x00054af4) bg_list_pane_cp06

0xe665,	// (0x00054af4) grid_radio_pane

0x0f94,	// (0x00047423) bg_popup_window_pane_cp06

0x3621,	// (0x00049ab0) main_fmradio_pane_t1

0x37f0,	// (0x00049c7f) heading_pane_cp04

0x3621,	// (0x00049ab0) main_fmradio_pane_t2

0xbbee,	// (0x0005207d) popup_cale_lunar_info_window_g1

0x3621,	// (0x00049ab0) main_fmradio_pane_t3

0xbbf6,	// (0x00052085) popup_cale_lunar_info_window_g2

0x3621,	// (0x00049ab0) main_fmradio_pane_t4

0x0001,

0x3621,	// (0x00049ab0) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x00055950) popup_cale_lunar_info_window_g

0xf264,	// (0x000556f3) main_fmradio_pane_t

0xe665,	// (0x00054af4) wait_bar_pane_cp03

0x125c,	// (0x000476eb) cell_fmradio_pane_ParamLimits

0x125c,	// (0x000476eb) cell_fmradio_pane

0x126a,	// (0x000476f9) cell_fmradio_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_fmradio_pane_g1

0xe665,	// (0x00054af4) grid_highlight_pane_cp011

0xacf3,	// (0x00051182) poc_content_pane_ParamLimits

0xacf3,	// (0x00051182) poc_content_pane

0xad05,	// (0x00051194) scroll_pane_cp019

0x423c,	// (0x0004a6cb) popup_call_poc_act_window_ParamLimits

0x423c,	// (0x0004a6cb) popup_call_poc_act_window

0x4260,	// (0x0004a6ef) popup_call_poc_inact_window_ParamLimits

0x4260,	// (0x0004a6ef) popup_call_poc_inact_window

0xf49d,	// (0x0005592c) bg_popup_call_poc_act_pane_g

0xbb66,	// (0x00051ff5) bg_popup_call_poc_inact_pane_g1

0xbb6e,	// (0x00051ffd) bg_popup_call_poc_inact_pane_g2

0xad0d,	// (0x0005119c) popup_call_poc_act_window_g2

0xbb76,	// (0x00052005) bg_popup_call_poc_inact_pane_g3

0xbb7e,	// (0x0005200d) bg_popup_call_poc_inact_pane_g4

0xbb86,	// (0x00052015) bg_popup_call_poc_inact_pane_g5

0xad15,	// (0x000511a4) popup_call_poc_act_window_t1_ParamLimits

0xad15,	// (0x000511a4) popup_call_poc_act_window_t1

0xad3d,	// (0x000511cc) popup_call_poc_act_window_t2_ParamLimits

0xad3d,	// (0x000511cc) popup_call_poc_act_window_t2

0xad65,	// (0x000511f4) popup_call_poc_act_window_t3_ParamLimits

0xad65,	// (0x000511f4) popup_call_poc_act_window_t3

0xad8d,	// (0x0005121c) popup_call_poc_act_window_t4_ParamLimits

0xad8d,	// (0x0005121c) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x000558a8) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x000558a8) popup_call_poc_act_window_t

0xbb8e,	// (0x0005201d) bg_popup_call_poc_inact_pane_g6

0xbb96,	// (0x00052025) bg_popup_call_poc_inact_pane_g7

0xbb9e,	// (0x0005202d) bg_popup_call_poc_inact_pane_g8

0xad9f,	// (0x0005122e) popup_call_poc_inact_window_g2

0xbba6,	// (0x00052035) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x00055919) bg_popup_call_poc_inact_pane_g

0xada7,	// (0x00051236) popup_call_poc_inact_window_t1_ParamLimits

0xada7,	// (0x00051236) popup_call_poc_inact_window_t1

0xadbc,	// (0x0005124b) popup_call_poc_inact_window_t2_ParamLimits

0xadbc,	// (0x0005124b) popup_call_poc_inact_window_t2

0xadd1,	// (0x00051260) popup_call_poc_inact_window_t3_ParamLimits

0xadd1,	// (0x00051260) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000558b1) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000558b1) popup_call_poc_inact_window_t

0xbce4,	// (0x00052173) context_pane_ParamLimits

0x4ab4,	// (0x0004af43) signal_pane_ParamLimits

0x1d9b,	// (0x0004822a) main_call2_pane

0xbcbd,	// (0x0005214c) popup_phob_thumbnail2_window_ParamLimits

0xbcbd,	// (0x0005214c) popup_phob_thumbnail2_window

0xab78,	// (0x00051007) aid_hotspot_pointer_arrow_pane

0xab80,	// (0x0005100f) aid_hotspot_pointer_hand_pane

0x455f,	// (0x0004a9ee) phob_pre_status_pane_g5

0x0c30,	// (0x000470bf) cams_zoom_pane_ParamLimits

0x0c30,	// (0x000470bf) image_vga_pane_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g1_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g2_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g3_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g4_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g5_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g6_ParamLimits

0x126a,	// (0x000476f9) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000555ec) main_camera_pane_g_ParamLimits

0x1348,	// (0x000477d7) main_camera_pane_t1_ParamLimits

0x1348,	// (0x000477d7) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000555fd) main_camera_pane_t_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_preview_window_pane_cp01_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_preview_window_pane_cp01

0xade6,	// (0x00051275) popup_phob_thumbnail2_window_g1_ParamLimits

0xade6,	// (0x00051275) popup_phob_thumbnail2_window_g1

0x0f94,	// (0x00047423) call2_cli_visual_pane

0x4294,	// (0x0004a723) popup_call2_audio_conf_window_ParamLimits

0x4294,	// (0x0004a723) popup_call2_audio_conf_window

0x42bc,	// (0x0004a74b) popup_call2_audio_first_window_ParamLimits

0x42bc,	// (0x0004a74b) popup_call2_audio_first_window

0x4352,	// (0x0004a7e1) popup_call2_audio_in_window_ParamLimits

0x4352,	// (0x0004a7e1) popup_call2_audio_in_window

0x439e,	// (0x0004a82d) popup_call2_audio_out_window_ParamLimits

0x439e,	// (0x0004a82d) popup_call2_audio_out_window

0x4410,	// (0x0004a89f) popup_call2_audio_second_window_ParamLimits

0x4410,	// (0x0004a89f) popup_call2_audio_second_window

0x4476,	// (0x0004a905) popup_call2_audio_wait_window_ParamLimits

0x4476,	// (0x0004a905) popup_call2_audio_wait_window

0x0f94,	// (0x00047423) bg_popup_call2_act_pane_cp03

0x11d1,	// (0x00047660) list_conf_pane_cp

0xadf2,	// (0x00051281) popup_call2_audio_conf_window_t1

0xae00,	// (0x0005128f) list_single_graphic_popup_conf2_pane_ParamLimits

0xae00,	// (0x0005128f) list_single_graphic_popup_conf2_pane

0xa733,	// (0x00050bc2) list_highlight_pane_cp04

0xae13,	// (0x000512a2) list_single_graphic_popup_conf2_pane_g1

0xa744,	// (0x00050bd3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000558b8) list_single_graphic_popup_conf2_pane_g

0xae1d,	// (0x000512ac) list_single_graphic_popup_conf2_pane_t1

0xae2b,	// (0x000512ba) bg_popup_call2_act_pane_cp01_ParamLimits

0xae2b,	// (0x000512ba) bg_popup_call2_act_pane_cp01

0xaeb5,	// (0x00051344) call_type_pane_cp05_ParamLimits

0xaeb5,	// (0x00051344) call_type_pane_cp05

0xaf09,	// (0x00051398) popup_call2_audio_second_window_g1_ParamLimits

0xaf09,	// (0x00051398) popup_call2_audio_second_window_g1

0xaf5d,	// (0x000513ec) popup_call2_audio_second_window_g2_ParamLimits

0xaf5d,	// (0x000513ec) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000558bd) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000558bd) popup_call2_audio_second_window_g

0xafc2,	// (0x00051451) popup_call2_audio_second_window_t1_ParamLimits

0xafc2,	// (0x00051451) popup_call2_audio_second_window_t1

0xb07d,	// (0x0005150c) popup_call2_audio_second_window_t2_ParamLimits

0xb07d,	// (0x0005150c) popup_call2_audio_second_window_t2

0xb0d0,	// (0x0005155f) popup_call2_audio_second_window_t3_ParamLimits

0xb0d0,	// (0x0005155f) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000558c4) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000558c4) popup_call2_audio_second_window_t

0x0f94,	// (0x00047423) bg_popup_call2_in_pane_cp02

0x0f9e,	// (0x0004742d) call_type_pane_cp04

0x44b0,	// (0x0004a93f) popup_call2_audio_wait_window_g1

0x44b8,	// (0x0004a947) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000558cd) popup_call2_audio_wait_window_g

0x0fb6,	// (0x00047445) popup_call2_audio_wait_window_t3

0xb1c3,	// (0x00051652) bg_popup_call2_act_pane_ParamLimits

0xb1c3,	// (0x00051652) bg_popup_call2_act_pane

0xb283,	// (0x00051712) call_type_pane_cp03_ParamLimits

0xb283,	// (0x00051712) call_type_pane_cp03

0xb2e7,	// (0x00051776) popup_call2_audio_first_window_g1_ParamLimits

0xb2e7,	// (0x00051776) popup_call2_audio_first_window_g1

0xb357,	// (0x000517e6) popup_call2_audio_first_window_g2_ParamLimits

0xb357,	// (0x000517e6) popup_call2_audio_first_window_g2

0xb3bb,	// (0x0005184a) popup_call2_audio_first_window_g3_ParamLimits

0xb3bb,	// (0x0005184a) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000558d2) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000558d2) popup_call2_audio_first_window_g

0xb443,	// (0x000518d2) popup_call2_audio_first_window_t1_ParamLimits

0xb443,	// (0x000518d2) popup_call2_audio_first_window_t1

0xb546,	// (0x000519d5) popup_call2_audio_first_window_t4_ParamLimits

0xb546,	// (0x000519d5) popup_call2_audio_first_window_t4

0xb629,	// (0x00051ab8) popup_call2_audio_first_window_t5_ParamLimits

0xb629,	// (0x00051ab8) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000558dd) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000558dd) popup_call2_audio_first_window_t

0x11e7,	// (0x00047676) bg_popup_call2_act_pane_g1

0xbc00,	// (0x0005208f) popup_cale_lunar_info_window_t1

0xbc0e,	// (0x0005209d) popup_cale_lunar_info_window_t2

0xbc1c,	// (0x000520ab) popup_cale_lunar_info_window_t3

0x0f94,	// (0x00047423) bg_popup_call2_bubble_pane

0xb72a,	// (0x00051bb9) bg_popup_call2_in_pane_cp01_ParamLimits

0xb72a,	// (0x00051bb9) bg_popup_call2_in_pane_cp01

0xe793,	// (0x00054c22) call_type_pane_cp02

0x44c0,	// (0x0004a94f) popup_call2_audio_out_window_g1_ParamLimits

0x44c0,	// (0x0004a94f) popup_call2_audio_out_window_g1

0xb772,	// (0x00051c01) popup_call2_audio_out_window_g2_ParamLimits

0xb772,	// (0x00051c01) popup_call2_audio_out_window_g2

0x44ec,	// (0x0004a97b) popup_call2_audio_out_window_g3_ParamLimits

0x44ec,	// (0x0004a97b) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000558e6) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000558e6) popup_call2_audio_out_window_g

0xb7a9,	// (0x00051c38) popup_call2_audio_out_window_t1_ParamLimits

0xb7a9,	// (0x00051c38) popup_call2_audio_out_window_t1

0xb808,	// (0x00051c97) popup_call2_audio_out_window_t2_ParamLimits

0xb808,	// (0x00051c97) popup_call2_audio_out_window_t2

0xb85c,	// (0x00051ceb) popup_call2_audio_out_window_t3_ParamLimits

0xb85c,	// (0x00051ceb) popup_call2_audio_out_window_t3

0xb872,	// (0x00051d01) popup_call2_audio_out_window_t4_ParamLimits

0xb872,	// (0x00051d01) popup_call2_audio_out_window_t4

0xb888,	// (0x00051d17) popup_call2_audio_out_window_t5_ParamLimits

0xb888,	// (0x00051d17) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x000558ef) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x000558ef) popup_call2_audio_out_window_t

0xb8ec,	// (0x00051d7b) bg_popup_call2_in_pane_ParamLimits

0xb8ec,	// (0x00051d7b) bg_popup_call2_in_pane

0xb948,	// (0x00051dd7) popup_call2_audio_in_window_g1_ParamLimits

0xb948,	// (0x00051dd7) popup_call2_audio_in_window_g1

0xb980,	// (0x00051e0f) popup_call2_audio_in_window_g2_ParamLimits

0xb980,	// (0x00051e0f) popup_call2_audio_in_window_g2

0xb9b8,	// (0x00051e47) popup_call2_audio_in_window_g3_ParamLimits

0xb9b8,	// (0x00051e47) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x000558fc) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x000558fc) popup_call2_audio_in_window_g

0xba10,	// (0x00051e9f) popup_call2_audio_in_window_t1_ParamLimits

0xba10,	// (0x00051e9f) popup_call2_audio_in_window_t1

0xba90,	// (0x00051f1f) popup_call2_audio_in_window_t2_ParamLimits

0xba90,	// (0x00051f1f) popup_call2_audio_in_window_t2

0xbb10,	// (0x00051f9f) popup_call2_audio_in_window_t3_ParamLimits

0xbb10,	// (0x00051f9f) popup_call2_audio_in_window_t3

0xbb2a,	// (0x00051fb9) popup_call2_audio_in_window_t4_ParamLimits

0xbb2a,	// (0x00051fb9) popup_call2_audio_in_window_t4

0xbb3c,	// (0x00051fcb) popup_call2_audio_in_window_t5_ParamLimits

0xbb3c,	// (0x00051fcb) popup_call2_audio_in_window_t5

0xbb51,	// (0x00051fe0) popup_call2_audio_in_window_t6_ParamLimits

0xbb51,	// (0x00051fe0) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x00055905) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x00055905) popup_call2_audio_in_window_t

0x11e7,	// (0x00047676) bg_popup_call2_in_pane_g1

0xbc2a,	// (0x000520b9) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x00055955) popup_cale_lunar_info_window_t

0x11ef,	// (0x0004767e) bg_popup_call2_rect_pane_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_call2_rect_pane

0x0f94,	// (0x00047423) call2_cli_visual_graphic_pane

0x0f94,	// (0x00047423) call2_cli_visual_text_pane

0xbd7f,	// (0x0005220e) smil_status_volume_pane_g3

0x0002,

0x1207,	// (0x00047696) call2_cli_visual_graphic_pane_g1

0x1207,	// (0x00047696) call2_cli_visual_graphic_pane_g2

0x1207,	// (0x00047696) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x00055912) call2_cli_visual_graphic_pane_g

0x167b,	// (0x00047b0a) bg_popup_call2_rect_pane_g1

0x166b,	// (0x00047afa) bg_popup_call2_rect_pane_g2

0x1673,	// (0x00047b02) bg_popup_call2_rect_pane_g3

0x1683,	// (0x00047b12) bg_popup_call2_rect_pane_g4

0x168b,	// (0x00047b1a) bg_popup_call2_rect_pane_g5

0x1693,	// (0x00047b22) bg_popup_call2_rect_pane_g6

0x169b,	// (0x00047b2a) bg_popup_call2_rect_pane_g7

0x16a3,	// (0x00047b32) bg_popup_call2_rect_pane_g8

0x16ab,	// (0x00047b3a) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x000556a2) bg_popup_call2_rect_pane_g

0xbb66,	// (0x00051ff5) bg_popup_call2_bubble_pane_g1

0xbb6e,	// (0x00051ffd) bg_popup_call2_bubble_pane_g2

0xbb76,	// (0x00052005) bg_popup_call2_bubble_pane_g3

0xbb7e,	// (0x0005200d) bg_popup_call2_bubble_pane_g4

0xbb86,	// (0x00052015) bg_popup_call2_bubble_pane_g5

0xbb8e,	// (0x0005201d) bg_popup_call2_bubble_pane_g6

0xbb96,	// (0x00052025) bg_popup_call2_bubble_pane_g7

0xbb9e,	// (0x0005202d) bg_popup_call2_bubble_pane_g8

0xbba6,	// (0x00052035) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x00055919) bg_popup_call2_bubble_pane_g

0x1702,	// (0x00047b91) aid_cale_week_size_cell_pane

0x1e08,	// (0x00048297) aid_cams_cif_uncrop_pane_ParamLimits

0x1e08,	// (0x00048297) aid_cams_cif_uncrop_pane

0x0c30,	// (0x000470bf) aid_cams_size_cell_ParamLimits

0x0c30,	// (0x000470bf) aid_cams_size_cell

0x0c30,	// (0x000470bf) grid_cams_pane_ParamLimits

0x0c30,	// (0x000470bf) linegrid_cams_pane_ParamLimits

0x2076,	// (0x00048505) call_video_pane_t1

0x2090,	// (0x0004851f) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00055649) call_video_pane_t

0x272b,	// (0x00048bba) aid_cale_month_size_cell_pane_ParamLimits

0x272b,	// (0x00048bba) aid_cale_month_size_cell_pane

0xf50a,	// (0x00055999) smil_status_volume_pane_g

0xbd8c,	// (0x0005221b) volume_smil_pane_ParamLimits

0xa5bb,	// (0x00050a4a) aid_popup2_width_pane

0x1585,	// (0x00047a14) cell_qdial_pane_g4_ParamLimits

0x1585,	// (0x00047a14) cell_qdial_pane_g4

0x3a29,	// (0x00049eb8) aid_blid_cardinal_pane_ParamLimits

0x3a35,	// (0x00049ec4) aid_blid_destination_pane_ParamLimits

0x3a35,	// (0x00049ec4) aid_blid_destination_pane

0x11ef,	// (0x0004767e) bg_popup_call_poc_act_pane_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_call_poc_act_pane

0x11ef,	// (0x0004767e) bg_popup_call_poc_inact_pane_ParamLimits

0x11ef,	// (0x0004767e) bg_popup_call_poc_inact_pane

0xbbae,	// (0x0005203d) bg_popup_call_poc_act_pane_g1

0xbbb6,	// (0x00052045) bg_popup_call_poc_act_pane_g2

0xbbbe,	// (0x0005204d) bg_popup_call_poc_act_pane_g3

0xbb7e,	// (0x0005200d) bg_popup_call_poc_act_pane_g4

0xbb86,	// (0x00052015) bg_popup_call_poc_act_pane_g5

0xbbc6,	// (0x00052055) bg_popup_call_poc_act_pane_g6

0xbb96,	// (0x00052025) bg_popup_call_poc_act_pane_g7

0xbbce,	// (0x0005205d) bg_popup_call_poc_act_pane_g8

0x0f94,	// (0x00047423) main_usb_pane

0xbc94,	// (0x00052123) popup_cale_lunar_info_window

0x23ad,	// (0x0004883c) im_reading_pane_t1_ParamLimits

0x23ec,	// (0x0004887b) list_im_pane_ParamLimits

0x23fd,	// (0x0004888c) scroll_pane_cp07_ParamLimits

0x0f94,	// (0x00047423) grid_highlight_pane_cp012

0x11ef,	// (0x0004767e) mup_scale_pane_ParamLimits

0x126a,	// (0x000476f9) main_usb_pane_g1_ParamLimits

0x126a,	// (0x000476f9) main_usb_pane_g1

0x126a,	// (0x000476f9) main_usb_pane_g2_ParamLimits

0x126a,	// (0x000476f9) main_usb_pane_g2

0x0001,

0xf199,	// (0x00055628) main_usb_pane_g_ParamLimits

0xf199,	// (0x00055628) main_usb_pane_g

0x1348,	// (0x000477d7) main_usb_pane_t1_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t1

0x1348,	// (0x000477d7) main_usb_pane_t2_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t2

0x1348,	// (0x000477d7) main_usb_pane_t3_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t3

0x1348,	// (0x000477d7) main_usb_pane_t4_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t4

0x1348,	// (0x000477d7) main_usb_pane_t5_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t5

0x1348,	// (0x000477d7) main_usb_pane_t6_ParamLimits

0x1348,	// (0x000477d7) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x00055943) main_usb_pane_t_ParamLimits

0x39c8,	// (0x00049e57) aid_text_placing

0x39d3,	// (0x00049e62) main_location2_pane_t1_ParamLimits

0x39e9,	// (0x00049e78) main_location2_pane_t2_ParamLimits

0x39ff,	// (0x00049e8e) main_location2_pane_t3_ParamLimits

0x3a15,	// (0x00049ea4) main_location2_pane_t4_ParamLimits

0x3a15,	// (0x00049ea4) main_location2_pane_t4

0xf2f6,	// (0x00055785) main_location2_pane_t_ParamLimits

0x121d,	// (0x000476ac) find_pinb_pane_g2_ParamLimits

0x121d,	// (0x000476ac) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00055501) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00055501) find_pinb_pane_g

0x1229,	// (0x000476b8) find_pinb_pane_t1_ParamLimits

0x123b,	// (0x000476ca) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00055506) find_pinb_pane_t_ParamLimits

0x0f94,	// (0x00047423) main_call3_pane

0x2d67,	// (0x000491f6) cale_month_day_heading_pane_t1_ParamLimits

0x2ded,	// (0x0004927c) cale_month_day_heading_pane_t2_ParamLimits

0x2e66,	// (0x000492f5) cale_month_day_heading_pane_t3_ParamLimits

0x2edf,	// (0x0004936e) cale_month_day_heading_pane_t4_ParamLimits

0x2f60,	// (0x000493ef) cale_month_day_heading_pane_t5_ParamLimits

0x2fe9,	// (0x00049478) cale_month_day_heading_pane_t6_ParamLimits

0x3072,	// (0x00049501) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00055681) cale_month_day_heading_pane_t_ParamLimits

0x3334,	// (0x000497c3) smil_status_volume_pane

0x3fb4,	// (0x0004a443) postcard_address_pane_ParamLimits

0x3fb4,	// (0x0004a443) postcard_address_pane

0x3fca,	// (0x0004a459) postcard_message_pane_ParamLimits

0x3fca,	// (0x0004a459) postcard_message_pane

0x4518,	// (0x0004a9a7) call2_cli_visual_pane_t1_ParamLimits

0x4518,	// (0x0004a9a7) call2_cli_visual_pane_t1

0xbdb9,	// (0x00052248) postcard_message_pane_t1_ParamLimits

0xbdb9,	// (0x00052248) postcard_message_pane_t1

0xbda1,	// (0x00052230) postcard_address_pane_t1_ParamLimits

0xbda1,	// (0x00052230) postcard_address_pane_t1

0x4c70,	// (0x0004b0ff) popup_call3_audio_in_window_ParamLimits

0x4c70,	// (0x0004b0ff) popup_call3_audio_in_window

0x4af5,	// (0x0004af84) bg_popup_call3_in_pane_ParamLimits

0x4af5,	// (0x0004af84) bg_popup_call3_in_pane

0x4b71,	// (0x0004b000) popup_call3_audio_in_window_g1_ParamLimits

0x4b71,	// (0x0004b000) popup_call3_audio_in_window_g1

0x4b91,	// (0x0004b020) popup_call3_audio_in_window_g2_ParamLimits

0x4b91,	// (0x0004b020) popup_call3_audio_in_window_g2

0x4bb1,	// (0x0004b040) popup_call3_audio_in_window_g3_ParamLimits

0x4bb1,	// (0x0004b040) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x000559a0) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x000559a0) popup_call3_audio_in_window_g

0x4be2,	// (0x0004b071) popup_call3_audio_in_window_t1_ParamLimits

0x4be2,	// (0x0004b071) popup_call3_audio_in_window_t1

0x4c20,	// (0x0004b0af) popup_call3_audio_in_window_t2_ParamLimits

0x4c20,	// (0x0004b0af) popup_call3_audio_in_window_t2

0x4c5e,	// (0x0004b0ed) popup_call3_audio_in_window_t3_ParamLimits

0x4c5e,	// (0x0004b0ed) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x000559a9) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x000559a9) popup_call3_audio_in_window_t

0x1d9b,	// (0x0004822a) bg_popup_call3_rect_pane

0x167b,	// (0x00047b0a) bg_popup_call3_rect_pane_g1

0x166b,	// (0x00047afa) bg_popup_call3_rect_pane_g2

0x1673,	// (0x00047b02) bg_popup_call3_rect_pane_g3

0x1683,	// (0x00047b12) bg_popup_call3_rect_pane_g4

0x168b,	// (0x00047b1a) bg_popup_call3_rect_pane_g5

0x1693,	// (0x00047b22) bg_popup_call3_rect_pane_g6

0x169b,	// (0x00047b2a) bg_popup_call3_rect_pane_g7

0xe665,	// (0x00054af4) mup_visualizer_osc_pane

0xe665,	// (0x00054af4) mup_visualizer_spec_pane

0x4b25,	// (0x0004afb4) call3_video_qcif_pane_ParamLimits

0x4b25,	// (0x0004afb4) call3_video_qcif_pane

0x4b38,	// (0x0004afc7) call3_video_qcif_uncrop_pane_ParamLimits

0x4b38,	// (0x0004afc7) call3_video_qcif_uncrop_pane

0x4b48,	// (0x0004afd7) call3_video_subqcif_pane_ParamLimits

0x4b48,	// (0x0004afd7) call3_video_subqcif_pane

0x4b5e,	// (0x0004afed) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b5e,	// (0x0004afed) call3_video_subqcif_uncrop_pane

0x4bd1,	// (0x0004b060) popup_call3_audio_in_window_g4_ParamLimits

0x4bd1,	// (0x0004b060) popup_call3_audio_in_window_g4

0xe665,	// (0x00054af4) mup_spec_half_pane

0xe665,	// (0x00054af4) mup_spec_half_pane_cp

0xe665,	// (0x00054af4) mup_osc_middle_pane

0x133e,	// (0x000477cd) mup_visualizer_osc_pane_g1

0xbd32,	// (0x000521c1) mup_spec_bar_pane_ParamLimits

0xbd32,	// (0x000521c1) mup_spec_bar_pane

0x133e,	// (0x000477cd) mup_spec_bar_pane_g1

0x133e,	// (0x000477cd) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0005551b) mup_spec_bar_pane_g

0x1702,	// (0x00047b91) aid_cale_week_size_cell_pane_ParamLimits

0x171c,	// (0x00047bab) bg_cale_heading_pane_ParamLimits

0x1740,	// (0x00047bcf) bg_cale_pane_cp01_ParamLimits

0x175d,	// (0x00047bec) cale_week_corner_pane_ParamLimits

0x177c,	// (0x00047c0b) cale_week_day_heading_pane_ParamLimits

0x17a5,	// (0x00047c34) cale_week_scroll_pane_g1_ParamLimits

0x17c4,	// (0x00047c53) cale_week_scroll_pane_g2_ParamLimits

0x17dc,	// (0x00047c6b) cale_week_scroll_pane_g3_ParamLimits

0x17f4,	// (0x00047c83) cale_week_scroll_pane_g4_ParamLimits

0x180c,	// (0x00047c9b) cale_week_scroll_pane_g5_ParamLimits

0x182c,	// (0x00047cbb) cale_week_scroll_pane_g6_ParamLimits

0x184c,	// (0x00047cdb) cale_week_scroll_pane_g7_ParamLimits

0x186c,	// (0x00047cfb) cale_week_scroll_pane_g8_ParamLimits

0x1890,	// (0x00047d1f) cale_week_scroll_pane_g9_ParamLimits

0x18a8,	// (0x00047d37) cale_week_scroll_pane_g10_ParamLimits

0x18c0,	// (0x00047d4f) cale_week_scroll_pane_g11_ParamLimits

0x18d8,	// (0x00047d67) cale_week_scroll_pane_g12_ParamLimits

0x18f8,	// (0x00047d87) cale_week_scroll_pane_g13_ParamLimits

0x191c,	// (0x00047dab) cale_week_scroll_pane_g14_ParamLimits

0x1940,	// (0x00047dcf) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00055592) cale_week_scroll_pane_g_ParamLimits

0x1988,	// (0x00047e17) cale_week_time_pane_ParamLimits

0x19ac,	// (0x00047e3b) grid_cale_week_pane_ParamLimits

0x19da,	// (0x00047e69) listscroll_cale_week_pane_t1

0x19ec,	// (0x00047e7b) scroll_pane_cp08_ParamLimits

0x27d0,	// (0x00048c5f) cale_month_corner_pane_ParamLimits

0x2cd0,	// (0x0004915f) cale_month_pane_t1

0x2ce2,	// (0x00049171) cale_month_week_pane_ParamLimits

0x374f,	// (0x00049bde) popup_call_status_window_g1_ParamLimits

0x3763,	// (0x00049bf2) popup_call_status_window_g2_ParamLimits

0x3777,	// (0x00049c06) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0005570c) popup_call_status_window_g_ParamLimits

0x37e0,	// (0x00049c6f) aid_call2_pane

0x0477,	// (0x00046906) msg_header_pane_g1

0x3fb4,	// (0x0004a443) postcard_address2_pane_ParamLimits

0x3fb4,	// (0x0004a443) postcard_address2_pane

0x3fca,	// (0x0004a459) postcard_message2_pane_ParamLimits

0x3fca,	// (0x0004a459) postcard_message2_pane

0x4ac2,	// (0x0004af51) message2_row_pane_ParamLimits

0x4ac2,	// (0x0004af51) message2_row_pane

0x4ae2,	// (0x0004af71) address2_row_pane_ParamLimits

0x4ae2,	// (0x0004af71) address2_row_pane

0xbcff,	// (0x0005218e) postcard_message2_row_pane_g1

0xbd07,	// (0x00052196) postcard_message2_row_pane_t1

0xbcff,	// (0x0005218e) address2_row_pane_g1

0xbd07,	// (0x00052196) address2_row_pane_t1

0x1d93,	// (0x00048222) aid_size_cell_vorec

0x0f94,	// (0x00047423) main_rss_pane

0xbd15,	// (0x000521a4) rss_list_single_pane_ParamLimits

0xbd15,	// (0x000521a4) rss_list_single_pane

0xbd23,	// (0x000521b2) rss_list_single_pane_t1

0xbd23,	// (0x000521b2) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x00055994) rss_list_single_pane_t

0x0f94,	// (0x00047423) main_camera2_pane

0x0f94,	// (0x00047423) main_video2_pane

0xbdd5,	// (0x00052264) cams_zoom_pane_cp2_ParamLimits

0xbdd5,	// (0x00052264) cams_zoom_pane_cp2

0xbdd5,	// (0x00052264) image2_vga_pane_ParamLimits

0xbdd5,	// (0x00052264) image2_vga_pane

0xbde3,	// (0x00052272) main_camera2_pane_g1_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g1

0xbde3,	// (0x00052272) main_camera2_pane_g2_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g2

0xbde3,	// (0x00052272) main_camera2_pane_g3_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g3

0xbde3,	// (0x00052272) main_camera2_pane_g4_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g4

0xbde3,	// (0x00052272) main_camera2_pane_g5_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g5

0xbde3,	// (0x00052272) main_camera2_pane_g6_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g6

0xbde3,	// (0x00052272) main_camera2_pane_g7_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g7

0xbde3,	// (0x00052272) main_camera2_pane_g8_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g8

0x0008,

0xf521,	// (0x000559b0) main_camera2_pane_g_ParamLimits

0xf521,	// (0x000559b0) main_camera2_pane_g

0x4c92,	// (0x0004b121) main_camera2_pane_t1_ParamLimits

0x4c92,	// (0x0004b121) main_camera2_pane_t1

0x4c92,	// (0x0004b121) main_camera2_pane_t2_ParamLimits

0x4c92,	// (0x0004b121) main_camera2_pane_t2

0x4c92,	// (0x0004b121) main_camera2_pane_t3_ParamLimits

0x4c92,	// (0x0004b121) main_camera2_pane_t3

0x4c92,	// (0x0004b121) main_camera2_pane_t4_ParamLimits

0x4c92,	// (0x0004b121) main_camera2_pane_t4

0x0006,

0xf534,	// (0x000559c3) main_camera2_pane_t_ParamLimits

0xf534,	// (0x000559c3) main_camera2_pane_t

0xbe05,	// (0x00052294) cams_zoom_pane_cp4_ParamLimits

0xbe05,	// (0x00052294) cams_zoom_pane_cp4

0xbe13,	// (0x000522a2) image2_cif_pane_ParamLimits

0xbe13,	// (0x000522a2) image2_cif_pane

0x0c30,	// (0x000470bf) image2_subqcif_pane_ParamLimits

0x0c30,	// (0x000470bf) image2_subqcif_pane

0x4ca6,	// (0x0004b135) main_video2_pane_g1_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g1

0x4ca6,	// (0x0004b135) main_video2_pane_g2_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g2

0x4ca6,	// (0x0004b135) main_video2_pane_g3_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g3

0x4ca6,	// (0x0004b135) main_video2_pane_g4_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g4

0x4ca6,	// (0x0004b135) main_video2_pane_g5_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g5

0x4ca6,	// (0x0004b135) main_video2_pane_g6_ParamLimits

0x4ca6,	// (0x0004b135) main_video2_pane_g6

0x0005,

0xf543,	// (0x000559d2) main_video2_pane_g_ParamLimits

0xf543,	// (0x000559d2) main_video2_pane_g

0x4cb4,	// (0x0004b143) main_video2_pane_t1_ParamLimits

0x4cb4,	// (0x0004b143) main_video2_pane_t1

0x4cb4,	// (0x0004b143) main_video2_pane_t2_ParamLimits

0x4cb4,	// (0x0004b143) main_video2_pane_t2

0x4cb4,	// (0x0004b143) main_video2_pane_t3_ParamLimits

0x4cb4,	// (0x0004b143) main_video2_pane_t3

0x0002,

0xf550,	// (0x000559df) main_video2_pane_t_ParamLimits

0xf550,	// (0x000559df) main_video2_pane_t

0x45c3,	// (0x0004aa52) call_muted_g2

0x0001,

0xf4f7,	// (0x00055986) call_muted_g

0x0f94,	// (0x00047423) main_mup2_pane

0xa9db,	// (0x00050e6a) main_mup2_pane_g1_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g1

0xa9db,	// (0x00050e6a) main_mup2_pane_g2_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g2

0x133e,	// (0x000477cd) main_mup_pane_g13_cp1

0xe665,	// (0x00054af4) mup_volume_pane_cp1

0xa9db,	// (0x00050e6a) main_mup2_pane_g4_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g4

0xa9db,	// (0x00050e6a) main_mup2_pane_g5_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g5

0xa9db,	// (0x00050e6a) main_mup2_pane_g6_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g6

0xa9db,	// (0x00050e6a) main_mup2_pane_g7_ParamLimits

0xa9db,	// (0x00050e6a) main_mup2_pane_g7

0x0006,

0xf557,	// (0x000559e6) main_mup2_pane_g_ParamLimits

0xf557,	// (0x000559e6) main_mup2_pane_g

0xa9e9,	// (0x00050e78) main_mup2_pane_t1_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t1

0xa9e9,	// (0x00050e78) main_mup2_pane_t2_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t2

0xa9e9,	// (0x00050e78) main_mup2_pane_t3_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t3

0xa9e9,	// (0x00050e78) main_mup2_pane_t4_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t4

0xa9e9,	// (0x00050e78) main_mup2_pane_t5_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t5

0xa9e9,	// (0x00050e78) main_mup2_pane_t6_ParamLimits

0xa9e9,	// (0x00050e78) main_mup2_pane_t6

0x0005,

0xf566,	// (0x000559f5) main_mup2_pane_t_ParamLimits

0xf566,	// (0x000559f5) main_mup2_pane_t

0xa9fd,	// (0x00050e8c) mup2_visualizer_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup2_visualizer_pane

0xa9fd,	// (0x00050e8c) mup_progress_pane_cp_ParamLimits

0xa9fd,	// (0x00050e8c) mup_progress_pane_cp

0xbe21,	// (0x000522b0) mup_volume_pane_cp_ParamLimits

0xbe21,	// (0x000522b0) mup_volume_pane_cp

0x126a,	// (0x000476f9) mup2_visualizer_pane_g1_ParamLimits

0x126a,	// (0x000476f9) mup2_visualizer_pane_g1

0x1278,	// (0x00047707) mup2_visualizer_pane_g2_ParamLimits

0x1278,	// (0x00047707) mup2_visualizer_pane_g2

0x1278,	// (0x00047707) mup2_visualizer_pane_g3_ParamLimits

0x1278,	// (0x00047707) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0005550b) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0005550b) mup2_visualizer_pane_g

0xe665,	// (0x00054af4) aid_size_cell_fmradio

0x4773,	// (0x0004ac02) aid_height_parent_landcape

0x24b5,	// (0x00048944) wml_content_pane_cp

0x24bd,	// (0x0004894c) wml_tabs_pane

0x24c6,	// (0x00048955) popup_wml_miniature_window

0x24ce,	// (0x0004895d) scroll_pane_cp021

0x24e2,	// (0x00048971) wml_content_pane_comp8

0x0f94,	// (0x00047423) bg_popup_sub_pane_cp05

0xbe37,	// (0x000522c6) popup_wml_miniature_window_g1

0xbe3f,	// (0x000522ce) wml_miniature_view_pane

0x4cc8,	// (0x0004b157) aid_size_wml_view

0x4cd0,	// (0x0004b15f) wml_miniature_view_pane_g1

0x4cd9,	// (0x0004b168) wml_miniature_view_pane_g2

0x4ce2,	// (0x0004b171) wml_miniature_view_pane_g3

0x4cea,	// (0x0004b179) wml_miniature_view_pane_g4

0x4cf2,	// (0x0004b181) wml_miniature_view_pane_g5

0x4cfa,	// (0x0004b189) wml_miniature_view_pane_g6

0x4d02,	// (0x0004b191) wml_miniature_view_pane_g7

0x4d0a,	// (0x0004b199) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x00055a02) wml_miniature_view_pane_g

0xbe47,	// (0x000522d6) background_graphic_ParamLimits

0xbe47,	// (0x000522d6) background_graphic

0xbe53,	// (0x000522e2) wml_tabs_2_pane

0xbe5c,	// (0x000522eb) wml_tabs_3_pane_ParamLimits

0xbe5c,	// (0x000522eb) wml_tabs_3_pane

0xbe6e,	// (0x000522fd) wml_tabs_4_pane_ParamLimits

0xbe6e,	// (0x000522fd) wml_tabs_4_pane

0xbe84,	// (0x00052313) wml_tabs_5_pane_ParamLimits

0xbe84,	// (0x00052313) wml_tabs_5_pane

0xbe9e,	// (0x0005232d) wml_tabs_pane_g2_ParamLimits

0xbe9e,	// (0x0005232d) wml_tabs_pane_g2

0xbeb3,	// (0x00052342) wml_tabs_pane_g3_ParamLimits

0xbeb3,	// (0x00052342) wml_tabs_pane_g3

0xbec8,	// (0x00052357) wml_tabs_2_active_pane_ParamLimits

0xbec8,	// (0x00052357) wml_tabs_2_active_pane

0xbec8,	// (0x00052357) wml_tabs_2_passive_pane_ParamLimits

0xbec8,	// (0x00052357) wml_tabs_2_passive_pane

0x4d12,	// (0x0004b1a1) wml_tabs_3_active_pane_cp_ParamLimits

0x4d12,	// (0x0004b1a1) wml_tabs_3_active_pane_cp

0x4d27,	// (0x0004b1b6) wml_tabs_3_passive_pane_ParamLimits

0x4d27,	// (0x0004b1b6) wml_tabs_3_passive_pane

0x4d3a,	// (0x0004b1c9) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d3a,	// (0x0004b1c9) wml_tabs_3_passive_pane_cp

0x4d51,	// (0x0004b1e0) tabs_4_active_pane

0x4d59,	// (0x0004b1e8) tabs_4_passive_pane

0x4d63,	// (0x0004b1f2) tabs_4_passive_pane_cp

0x4d6b,	// (0x0004b1fa) tabs_4_passive_pane_cp2

0x4537,	// (0x0004a9c6) aid_height_text

0xa9fd,	// (0x00050e8c) mup_volume_cont_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup_volume_cont_pane

0xe665,	// (0x00054af4) aid_size_cell_pinb

0xe665,	// (0x00054af4) aid_size_list_pinb

0xa9fd,	// (0x00050e8c) mup2_volume_cont_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup2_volume_cont_pane

0xbed6,	// (0x00052365) mup2_volume_cont_pane_g1_ParamLimits

0xbed6,	// (0x00052365) mup2_volume_cont_pane_g1

0x0a76,	// (0x00046f05) aid_size_cell_touch_ParamLimits

0x0a76,	// (0x00046f05) aid_size_cell_touch

0x0c4a,	// (0x000470d9) touch_pane_ParamLimits

0x0c4a,	// (0x000470d9) touch_pane

0xe665,	// (0x00054af4) main_rss2_pane

0xbef5,	// (0x00052384) listscroll_rss2_pane

0xbefe,	// (0x0005238d) rss2_navigation_pane

0xbf06,	// (0x00052395) list_rss2_pane

0xa7d8,	// (0x00050c67) scroll_pane_cp22

0xbf0e,	// (0x0005239d) rss2_navigation_pane_g1

0xbf17,	// (0x000523a6) rss2_navigation_pane_g2

0xbf1f,	// (0x000523ae) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x00055a13) rss2_navigation_pane_g

0xbf27,	// (0x000523b6) rss2_navigation_pane_t1

0x4d75,	// (0x0004b204) rss2_list_single_pane_ParamLimits

0x4d75,	// (0x0004b204) rss2_list_single_pane

0xbf35,	// (0x000523c4) rss2_list_single_pane_t2

0xbf43,	// (0x000523d2) rss2_list_single_pane_t3_ParamLimits

0xbf43,	// (0x000523d2) rss2_list_single_pane_t3

0xbf60,	// (0x000523ef) rss2_list_single_pane_t4

0x331c,	// (0x000497ab) smil_status_pane_g1

0x0c30,	// (0x000470bf) main_image2_pane_ParamLimits

0x0c30,	// (0x000470bf) main_image2_pane

0xbde3,	// (0x00052272) main_camera2_pane_g9_ParamLimits

0xbde3,	// (0x00052272) main_camera2_pane_g9

0x4c92,	// (0x0004b121) main_camera2_pane_t5_ParamLimits

0x4c92,	// (0x0004b121) main_camera2_pane_t5

0xbdf1,	// (0x00052280) main_camera2_pane_t6_ParamLimits

0xbdf1,	// (0x00052280) main_camera2_pane_t6

0x4d8c,	// (0x0004b21b) main_image2_pane_g1_ParamLimits

0x4d8c,	// (0x0004b21b) main_image2_pane_g1

0x41e6,	// (0x0004a675) smil2_video_pane_ParamLimits

0x41e6,	// (0x0004a675) smil2_video_pane

0xa5d7,	// (0x00050a66) aid_zoom_text_primary_cp

0xa61c,	// (0x00050aab) popup_preview_fixed_window

0x23a5,	// (0x00048834) im_reading_pane_g1

0x4c84,	// (0x0004b113) cams2_bc_adjust_pane_cp_ParamLimits

0x4c84,	// (0x0004b113) cams2_bc_adjust_pane_cp

0xa9fd,	// (0x00050e8c) cams2_bc_adjust_pane_ParamLimits

0xa9fd,	// (0x00050e8c) cams2_bc_adjust_pane

0x133e,	// (0x000477cd) cams2_bc_adjust_pane_g1

0xe665,	// (0x00054af4) cams2_slider_pane

0x133e,	// (0x000477cd) cams2_slider_pane_g1

0x133e,	// (0x000477cd) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x00055a1a) cams2_slider_pane_g

0x12c8,	// (0x00047757) calc_display_pane_ParamLimits

0x12ed,	// (0x0004777c) calc_paper_pane_ParamLimits

0x1310,	// (0x0004779f) grid_calc_pane_ParamLimits

0xa704,	// (0x00050b93) popup_clock_digital_window_t1_ParamLimits

0xac90,	// (0x0005111f) main_image_pane_t1

0x12a8,	// (0x00047737) aid_size_cell_calc_ParamLimits

0x12a8,	// (0x00047737) aid_size_cell_calc

0x47b9,	// (0x0004ac48) popup_blid_sat_info2_window_ParamLimits

0x47b9,	// (0x0004ac48) popup_blid_sat_info2_window

0xbf6e,	// (0x000523fd) aid_size_cell_blid

0xbe13,	// (0x000522a2) bg_popup_window_pane_cp07

0xbf8b,	// (0x0005241a) grid_popup_blid_pane

0xbf95,	// (0x00052424) heading_pane_cp05_ParamLimits

0xbf95,	// (0x00052424) heading_pane_cp05

0xc05f,	// (0x000524ee) cell_popup_blid_pane_ParamLimits

0xc05f,	// (0x000524ee) cell_popup_blid_pane

0xc089,	// (0x00052518) cell_popup_blid_pane_g1

0xc091,	// (0x00052520) cell_popup_blid_pane_t1

0xa9fd,	// (0x00050e8c) mup2_indicator_pane_ParamLimits

0xa9fd,	// (0x00050e8c) mup2_indicator_pane

0xe665,	// (0x00054af4) mup2_visualizer_osc_pane

0xbe21,	// (0x000522b0) mup2_visualizer_spec_pane_ParamLimits

0xbe21,	// (0x000522b0) mup2_visualizer_spec_pane

0xe665,	// (0x00054af4) mup2_spec_half_pane

0xe665,	// (0x00054af4) mup2_spec_half_pane_cp

0xc09f,	// (0x0005252e) mup2_spec_bar_pane_ParamLimits

0xc09f,	// (0x0005252e) mup2_spec_bar_pane

0x133e,	// (0x000477cd) mup2_spec_bar_pane_g1

0xc0be,	// (0x0005254d) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x00055a40) mup2_spec_bar_pane_g

0xe665,	// (0x00054af4) mup2_osc_middle_pane

0x133e,	// (0x000477cd) mup2_visualizer_osc_pane_g1

0xe68f,	// (0x00054b1e) popup_number_entry_window_t1_ParamLimits

0xe6a2,	// (0x00054b31) popup_number_entry_window_t2_ParamLimits

0xe6b4,	// (0x00054b43) popup_number_entry_window_t3_ParamLimits

0xe6c6,	// (0x00054b55) popup_number_entry_window_t5_ParamLimits

0xe6c6,	// (0x00054b55) popup_number_entry_window_t5

0xf01d,	// (0x000554ac) popup_number_entry_window_t_ParamLimits

0xe6fb,	// (0x00054b8a) text_title_cp2_ParamLimits

0xab88,	// (0x00051017) aid_hotspot_pointer_text2_pane

0xabae,	// (0x0005103d) main_viewer_pane_g9_ParamLimits

0xabae,	// (0x0005103d) main_viewer_pane_g9

0x2cd0,	// (0x0004915f) cale_month_pane_t1_ParamLimits

0x339e,	// (0x0004982d) bg_cale_pane_ParamLimits

0x33b6,	// (0x00049845) list_cale_pane_ParamLimits

0x33c7,	// (0x00049856) listscroll_cale_day_pane_t1

0x33d9,	// (0x00049868) scroll_pane_cp09_ParamLimits

0x3bfe,	// (0x0004a08d) main_mup_eq_pane_t1_ParamLimits

0x3bfe,	// (0x0004a08d) main_mup_eq_pane_t1

0x3c1a,	// (0x0004a0a9) main_mup_eq_pane_t2_ParamLimits

0x3c1a,	// (0x0004a0a9) main_mup_eq_pane_t2

0x3c36,	// (0x0004a0c5) main_mup_eq_pane_t3_ParamLimits

0x3c36,	// (0x0004a0c5) main_mup_eq_pane_t3

0x3c54,	// (0x0004a0e3) main_mup_eq_pane_t4_ParamLimits

0x3c54,	// (0x0004a0e3) main_mup_eq_pane_t4

0x3c72,	// (0x0004a101) main_mup_eq_pane_t5_ParamLimits

0x3c72,	// (0x0004a101) main_mup_eq_pane_t5

0x3c90,	// (0x0004a11f) main_mup_eq_pane_t6_ParamLimits

0x3c90,	// (0x0004a11f) main_mup_eq_pane_t6

0x3ca6,	// (0x0004a135) main_mup_eq_pane_t7_ParamLimits

0x3ca6,	// (0x0004a135) main_mup_eq_pane_t7

0x3cbc,	// (0x0004a14b) main_mup_eq_pane_t8_ParamLimits

0x3cbc,	// (0x0004a14b) main_mup_eq_pane_t8

0x3cd2,	// (0x0004a161) main_mup_eq_pane_t9_ParamLimits

0x3cd2,	// (0x0004a161) main_mup_eq_pane_t9

0x3cee,	// (0x0004a17d) main_mup_eq_pane_t10_ParamLimits

0x3cee,	// (0x0004a17d) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00055806) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00055806) main_mup_eq_pane_t

0x3dc3,	// (0x0004a252) mup_equalizer_pane_cp5_ParamLimits

0x3ddb,	// (0x0004a26a) mup_equalizer_pane_cp6_ParamLimits

0x3df3,	// (0x0004a282) mup_equalizer_pane_cp7_ParamLimits

0xe665,	// (0x00054af4) main_gallery_pane

0xbd51,	// (0x000521e0) smil2_volume_pane

0xbd59,	// (0x000521e8) smil_status_volume_pane_g1_ParamLimits

0xbd6c,	// (0x000521fb) smil_status_volume_pane_g2_ParamLimits

0xbd7f,	// (0x0005220e) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x00055999) smil_status_volume_pane_g_ParamLimits

0xbe13,	// (0x000522a2) bg_popup_window_pane_cp07_ParamLimits

0xbf76,	// (0x00052405) blid_firmament_pane

0x0c30,	// (0x000470bf) aid_size_cell_gallery_ParamLimits

0x0c30,	// (0x000470bf) aid_size_cell_gallery

0x0c30,	// (0x000470bf) grid_gallery_pane_ParamLimits

0x0c30,	// (0x000470bf) grid_gallery_pane

0xbe13,	// (0x000522a2) cell_gallery_pane_ParamLimits

0xbe13,	// (0x000522a2) cell_gallery_pane

0x0c30,	// (0x000470bf) bg_cell_gallery_focus_pane_ParamLimits

0x0c30,	// (0x000470bf) bg_cell_gallery_focus_pane

0x126a,	// (0x000476f9) cell_gallery_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_gallery_pane_g1

0x126a,	// (0x000476f9) cell_gallery_pane_g2_ParamLimits

0x126a,	// (0x000476f9) cell_gallery_pane_g2

0x126a,	// (0x000476f9) cell_gallery_pane_g3_ParamLimits

0x126a,	// (0x000476f9) cell_gallery_pane_g3

0x1278,	// (0x00047707) cell_gallery_pane_g4_ParamLimits

0x1278,	// (0x00047707) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x00055a45) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x00055a45) cell_gallery_pane_g

0xc0c8,	// (0x00052557) bg_cell_gallery_focus_pane_g1

0xc0d0,	// (0x0005255f) bg_cell_gallery_focus_pane_g2

0xc0d8,	// (0x00052567) bg_cell_gallery_focus_pane_g3

0xc0e0,	// (0x0005256f) bg_cell_gallery_focus_pane_g4

0xc0e8,	// (0x00052577) bg_cell_gallery_focus_pane_g5

0xc0f0,	// (0x0005257f) bg_cell_gallery_focus_pane_g6

0xc0f8,	// (0x00052587) bg_cell_gallery_focus_pane_g7

0xc100,	// (0x0005258f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x00055a4e) bg_cell_gallery_focus_pane_g

0xc108,	// (0x00052597) aid_firma_cardinal

0xc11c,	// (0x000525ab) blid_firmament_pane_t1

0xc133,	// (0x000525c2) blid_firmament_pane_t2

0xc14a,	// (0x000525d9) blid_firmament_pane_t3

0xc161,	// (0x000525f0) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x00055a5f) blid_firmament_pane_t

0xc178,	// (0x00052607) blid_sat_info_pane

0x133e,	// (0x000477cd) blid_sat_info_pane_g1

0x133e,	// (0x000477cd) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0005551b) blid_sat_info_pane_g

0xc188,	// (0x00052617) blid_sat_info_pane_t1

0xc196,	// (0x00052625) smil2_volume_content_pane

0xc19f,	// (0x0005262e) smil2_volume_pane_g1

0x1522,	// (0x000479b1) smil2_volume_content_pane_g1

0xc1a7,	// (0x00052636) smil2_volume_content_pane_g2

0xc1b0,	// (0x0005263f) smil2_volume_content_pane_g3

0xc1b9,	// (0x00052648) smil2_volume_content_pane_g4

0xc1c2,	// (0x00052651) smil2_volume_content_pane_g5

0xc1cb,	// (0x0005265a) smil2_volume_content_pane_g6

0xc1d4,	// (0x00052663) smil2_volume_content_pane_g7

0xc1dd,	// (0x0005266c) smil2_volume_content_pane_g8

0xc1e6,	// (0x00052675) smil2_volume_content_pane_g9

0xc1ef,	// (0x0005267e) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x00055a68) smil2_volume_content_pane_g

0x1aa1,	// (0x00047f30) cale_week_day_heading_pane_t1_ParamLimits

0x1acb,	// (0x00047f5a) cale_week_day_heading_pane_t2_ParamLimits

0x1afa,	// (0x00047f89) cale_week_day_heading_pane_t3_ParamLimits

0x1b29,	// (0x00047fb8) cale_week_day_heading_pane_t4_ParamLimits

0x1b58,	// (0x00047fe7) cale_week_day_heading_pane_t5_ParamLimits

0x1b8b,	// (0x0004801a) cale_week_day_heading_pane_t6_ParamLimits

0x1bc2,	// (0x00048051) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000555b3) cale_week_day_heading_pane_t_ParamLimits

0x1bec,	// (0x0004807b) bg_cale_side_pane_ParamLimits

0x1bfa,	// (0x00048089) cale_week_time_pane_t1_ParamLimits

0x1c14,	// (0x000480a3) cale_week_time_pane_t2_ParamLimits

0x1c2e,	// (0x000480bd) cale_week_time_pane_t3_ParamLimits

0x1c48,	// (0x000480d7) cale_week_time_pane_t4_ParamLimits

0x1c62,	// (0x000480f1) cale_week_time_pane_t5_ParamLimits

0x1c7c,	// (0x0004810b) cale_week_time_pane_t6_ParamLimits

0x1c9a,	// (0x00048129) cale_week_time_pane_t7_ParamLimits

0x1cbc,	// (0x0004814b) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000555c2) cale_week_time_pane_t_ParamLimits

0x1ce0,	// (0x0004816f) cell_cale_week_pane_g2_ParamLimits

0x1bec,	// (0x0004807b) bg_cale_side_pane_cp01_ParamLimits

0x3103,	// (0x00049592) cale_month_week_pane_t1_ParamLimits

0x311c,	// (0x000495ab) cale_month_week_pane_t2_ParamLimits

0x3135,	// (0x000495c4) cale_month_week_pane_t3_ParamLimits

0x314e,	// (0x000495dd) cale_month_week_pane_t4_ParamLimits

0x3167,	// (0x000495f6) cale_month_week_pane_t5_ParamLimits

0x3180,	// (0x0004960f) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00055690) cale_month_week_pane_t_ParamLimits

0xa684,	// (0x00050b13) cell_cale_month_pane_g1_ParamLimits

0xe665,	// (0x00054af4) main_cale_event_viewer_pane

0xe665,	// (0x00054af4) listscroll_cale_event_viewer_pane

0xc1f8,	// (0x00052687) list_cale_ev_pane

0xc200,	// (0x0005268f) scroll_pane_cp023

0x4da2,	// (0x0004b231) field_cale_ev_pane_ParamLimits

0x4da2,	// (0x0004b231) field_cale_ev_pane

0xc20c,	// (0x0005269b) field_cale_ev_content_pane_ParamLimits

0xc20c,	// (0x0005269b) field_cale_ev_content_pane

0xc218,	// (0x000526a7) field_cale_ev_pane_g1_ParamLimits

0xc218,	// (0x000526a7) field_cale_ev_pane_g1

0xc224,	// (0x000526b3) field_cale_ev_pane_g2_ParamLimits

0xc224,	// (0x000526b3) field_cale_ev_pane_g2

0xc23c,	// (0x000526cb) field_cale_ev_pane_g3_ParamLimits

0xc23c,	// (0x000526cb) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x00055a7d) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x00055a7d) field_cale_ev_pane_g

0xc254,	// (0x000526e3) field_cale_ev_pane_t1_ParamLimits

0xc254,	// (0x000526e3) field_cale_ev_pane_t1

0x4dc6,	// (0x0004b255) field_cale_ev_content_pane_t1_ParamLimits

0x4dc6,	// (0x0004b255) field_cale_ev_content_pane_t1

0xaaaa,	// (0x00050f39) bg_button_pane_cp01

0x16e7,	// (0x00047b76) listscroll_cale_week_pane_ParamLimits

0x16f9,	// (0x00047b88) popup_toolbar_window_cp01

0x19da,	// (0x00047e69) listscroll_cale_week_pane_t1_ParamLimits

0x16e7,	// (0x00047b76) listscroll_cale_day_pane_ParamLimits

0x16f9,	// (0x00047b88) popup_toolbar_window_cp02

0x33c7,	// (0x00049856) listscroll_cale_day_pane_t1_ParamLimits

0x16e7,	// (0x00047b76) main_cale_month_pane_ParamLimits

0xbccf,	// (0x0005215e) popup_toolbar_window_cp03_ParamLimits

0xbccf,	// (0x0005215e) popup_toolbar_window_cp03

0x40a4,	// (0x0004a533) main_image_pane_g2_ParamLimits

0x40a4,	// (0x0004a533) main_image_pane_g2

0x40b5,	// (0x0004a544) main_image_pane_g3_ParamLimits

0x40b5,	// (0x0004a544) main_image_pane_g3

0x0002,

0xf409,	// (0x00055898) main_image_pane_g_ParamLimits

0xf409,	// (0x00055898) main_image_pane_g

0xac90,	// (0x0005111f) main_image_pane_t1_ParamLimits

0x40c6,	// (0x0004a555) main_image_pane_t2_ParamLimits

0x40c6,	// (0x0004a555) main_image_pane_t2

0x40d8,	// (0x0004a567) main_image_pane_t3_ParamLimits

0x40d8,	// (0x0004a567) main_image_pane_t3

0x4100,	// (0x0004a58f) main_image_pane_t4_ParamLimits

0x4100,	// (0x0004a58f) main_image_pane_t4

0x0003,

0xf410,	// (0x0005589f) main_image_pane_t_ParamLimits

0xf410,	// (0x0005589f) main_image_pane_t

0x4120,	// (0x0004a5af) popup_image_details_window_cp01

0x412a,	// (0x0004a5b9) popup_toobar_trans_pane_cp01_ParamLimits

0x412a,	// (0x0004a5b9) popup_toobar_trans_pane_cp01

0x48ac,	// (0x0004ad3b) popup_image_details_window_ParamLimits

0x48ac,	// (0x0004ad3b) popup_image_details_window

0xbca0,	// (0x0005212f) popup_image_focus_window

0xbdd5,	// (0x00052264) camera2_autofocus_pane_ParamLimits

0xbdd5,	// (0x00052264) camera2_autofocus_pane

0xe665,	// (0x00054af4) bg_popup_sub_pane_cp06

0xc26b,	// (0x000526fa) popup_image_focus_window_g1

0xc273,	// (0x00052702) popup_image_focus_window_g2

0xc27b,	// (0x0005270a) popup_image_focus_window_g3

0xc283,	// (0x00052712) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x00055a84) popup_image_focus_window_g

0xc28b,	// (0x0005271a) popup_image_focus_window_t1

0xc299,	// (0x00052728) popup_image_focus_window_t2

0xc2a9,	// (0x00052738) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x00055a8d) popup_image_focus_window_t

0x126a,	// (0x000476f9) camera2_autofocus_pane_g1

0x0c30,	// (0x000470bf) bg_tb_trans_pane_cp01

0xc2b7,	// (0x00052746) popup_image_details_window_g1

0xc2ca,	// (0x00052759) popup_image_details_window_g2

0x0002,

0xf610,	// (0x00055a9f) popup_image_details_window_g

0xc2f3,	// (0x00052782) popup_image_details_window_t1

0xc305,	// (0x00052794) popup_image_details_window_t2

0xc31e,	// (0x000527ad) popup_image_details_window_t3

0xc332,	// (0x000527c1) popup_image_details_window_t4

0xc34d,	// (0x000527dc) popup_image_details_window_t5

0x0004,

0xf617,	// (0x00055aa6) popup_image_details_window_t

0x139c,	// (0x0004782b) bg_calc_paper_pane_ParamLimits

0xe665,	// (0x00054af4) grid_highlight_pane_cp013

0xa62e,	// (0x00050abd) list_calc_pane_ParamLimits

0xa640,	// (0x00050acf) scroll_pane_cp024

0x13b0,	// (0x0004783f) bg_calc_display_pane_ParamLimits

0x13bc,	// (0x0004784b) calc_display_pane_t1_ParamLimits

0x13d1,	// (0x00047860) calc_display_pane_t2_ParamLimits

0xa648,	// (0x00050ad7) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00055533) calc_display_pane_t_ParamLimits

0x14e8,	// (0x00047977) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00055550) cell_calc_pane_g

0x14f1,	// (0x00047980) cell_calc_pane_t1

0x1500,	// (0x0004798f) grid_highlight_pane_cp02_ParamLimits

0x1516,	// (0x000479a5) toolbar_button_pane_cp01_ParamLimits

0x1516,	// (0x000479a5) toolbar_button_pane_cp01

0xacd5,	// (0x00051164) temp_image_control_pane_ParamLimits

0xacd5,	// (0x00051164) temp_image_control_pane

0x0c30,	// (0x000470bf) main_mp3_pane

0xc367,	// (0x000527f6) temp_image_control_pane_g1_ParamLimits

0xc367,	// (0x000527f6) temp_image_control_pane_g1

0xc375,	// (0x00052804) temp_image_control_pane_g2_ParamLimits

0xc375,	// (0x00052804) temp_image_control_pane_g2

0xc387,	// (0x00052816) temp_image_control_pane_g3_ParamLimits

0xc387,	// (0x00052816) temp_image_control_pane_g3

0x4de7,	// (0x0004b276) temp_image_control_pane_g4_ParamLimits

0x4de7,	// (0x0004b276) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x00055ab1) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x00055ab1) temp_image_control_pane_g

0xc367,	// (0x000527f6) main_mp3_pane_g1

0x4dfa,	// (0x0004b289) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x00055aba) main_mp3_pane_g

0xc3bc,	// (0x0005284b) main_mp3_pane_t1

0x1278,	// (0x00047707) main_camera_pane_g8_ParamLimits

0x1278,	// (0x00047707) main_camera_pane_g8

0x1f26,	// (0x000483b5) main_video_pane_g7_ParamLimits

0x1f26,	// (0x000483b5) main_video_pane_g7

0x135c,	// (0x000477eb) main_camera2_pane_t7_ParamLimits

0x135c,	// (0x000477eb) main_camera2_pane_t7

0x2475,	// (0x00048904) scroll_pane_cp025_ParamLimits

0x2475,	// (0x00048904) scroll_pane_cp025

0x2489,	// (0x00048918) scroll_pane_cp026_ParamLimits

0x2489,	// (0x00048918) scroll_pane_cp026

0x2498,	// (0x00048927) wml_content_pane_ParamLimits

0xe665,	// (0x00054af4) main_touch_calib_pane

0x4ecc,	// (0x0004b35b) main_touch_calib_pane_g1

0x4ede,	// (0x0004b36d) main_touch_calib_pane_g2

0x4ef0,	// (0x0004b37f) main_touch_calib_pane_g3

0x4f02,	// (0x0004b391) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x00055ad8) main_touch_calib_pane_g

0x4f14,	// (0x0004b3a3) main_touch_calib_pane_t1

0x4f2e,	// (0x0004b3bd) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x00055ae1) main_touch_calib_pane_t

0xa853,	// (0x00050ce2) mup_progress_pane_cp02

0xa872,	// (0x00050d01) navi_pane_g1

0xa8d4,	// (0x00050d63) navi_pane_mp_t3

0x0c30,	// (0x000470bf) main_mp3_pane_ParamLimits

0x4a65,	// (0x0004aef4) navi_pane_ParamLimits

0xc367,	// (0x000527f6) main_mp3_pane_g1_ParamLimits

0x4dfa,	// (0x0004b289) main_mp3_pane_g2_ParamLimits

0x4e06,	// (0x0004b295) main_mp3_pane_g3_ParamLimits

0x4e06,	// (0x0004b295) main_mp3_pane_g3

0x4e14,	// (0x0004b2a3) main_mp3_pane_g4_ParamLimits

0x4e14,	// (0x0004b2a3) main_mp3_pane_g4

0x126a,	// (0x000476f9) main_mp3_pane_g5_ParamLimits

0x126a,	// (0x000476f9) main_mp3_pane_g5

0xc397,	// (0x00052826) main_mp3_pane_g6_ParamLimits

0xc397,	// (0x00052826) main_mp3_pane_g6

0xc3a4,	// (0x00052833) main_mp3_pane_g7_ParamLimits

0xc3a4,	// (0x00052833) main_mp3_pane_g7

0xc3b0,	// (0x0005283f) main_mp3_pane_g8_ParamLimits

0xc3b0,	// (0x0005283f) main_mp3_pane_g8

0xf62b,	// (0x00055aba) main_mp3_pane_g_ParamLimits

0x4e20,	// (0x0004b2af) main_mp3_pane_t2

0x4e2e,	// (0x0004b2bd) main_mp3_pane_t3

0xc3ca,	// (0x00052859) main_mp3_pane_t4

0xc3d8,	// (0x00052867) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x00055acb) main_mp3_pane_t

0xc3e6,	// (0x00052875) mup_progress_pane_cp01

0xa5cf,	// (0x00050a5e) aid_zoom_text_secondary2

0xc1f8,	// (0x00052687) list_cale_ev2_pane

0xc200,	// (0x0005268f) scroll_pane_cp023_ParamLimits

0x4f88,	// (0x0004b417) field_cale_ev2_pane_ParamLimits

0x4f88,	// (0x0004b417) field_cale_ev2_pane

0x0485,	// (0x00046914) field_cale_ev2_pane_g1_ParamLimits

0x0485,	// (0x00046914) field_cale_ev2_pane_g1

0x0491,	// (0x00046920) field_cale_ev2_pane_g2_ParamLimits

0x0491,	// (0x00046920) field_cale_ev2_pane_g2

0x04a9,	// (0x00046938) field_cale_ev2_pane_g3_ParamLimits

0x04a9,	// (0x00046938) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x00055aec) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x00055aec) field_cale_ev2_pane_g

0x04c1,	// (0x00046950) field_cale_ev2_pane_t1_ParamLimits

0x04c1,	// (0x00046950) field_cale_ev2_pane_t1

0x04d8,	// (0x00046967) field_cale_ev2_pane_t2_ParamLimits

0x04d8,	// (0x00046967) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x00055af5) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x00055af5) field_cale_ev2_pane_t

0x3f64,	// (0x0004a3f3) main_postcard_pane_g5_ParamLimits

0x3f64,	// (0x0004a3f3) main_postcard_pane_g5

0x3f7a,	// (0x0004a409) main_postcard_pane_g6_ParamLimits

0x3f7a,	// (0x0004a409) main_postcard_pane_g6

0x0c30,	// (0x000470bf) camera2_autofocus_pane_cp_ParamLimits

0x0c30,	// (0x000470bf) camera2_autofocus_pane_cp

0x0c30,	// (0x000470bf) main_mup3_pane

0x4ff6,	// (0x0004b485) main_mup3_pane_g1_ParamLimits

0x4ff6,	// (0x0004b485) main_mup3_pane_g1

0x5048,	// (0x0004b4d7) main_mup3_pane_g2_ParamLimits

0x5048,	// (0x0004b4d7) main_mup3_pane_g2

0x50a8,	// (0x0004b537) main_mup3_pane_g3_ParamLimits

0x50a8,	// (0x0004b537) main_mup3_pane_g3

0x5110,	// (0x0004b59f) main_mup3_pane_g4_ParamLimits

0x5110,	// (0x0004b59f) main_mup3_pane_g4

0x5178,	// (0x0004b607) main_mup3_pane_g5_ParamLimits

0x5178,	// (0x0004b607) main_mup3_pane_g5

0xe7e3,	// (0x00054c72) main_mup3_pane_g6_ParamLimits

0xe7e3,	// (0x00054c72) main_mup3_pane_g6

0x1278,	// (0x00047707) main_mup3_pane_g7_ParamLimits

0x1278,	// (0x00047707) main_mup3_pane_g7

0x0007,

0xf676,	// (0x00055b05) main_mup3_pane_g_ParamLimits

0xf676,	// (0x00055b05) main_mup3_pane_g

0x5251,	// (0x0004b6e0) main_mup3_pane_t1_ParamLimits

0x5251,	// (0x0004b6e0) main_mup3_pane_t1

0x5337,	// (0x0004b7c6) main_mup3_pane_t2_ParamLimits

0x5337,	// (0x0004b7c6) main_mup3_pane_t2

0x5421,	// (0x0004b8b0) main_mup3_pane_t4_ParamLimits

0x5421,	// (0x0004b8b0) main_mup3_pane_t4

0x5433,	// (0x0004b8c2) main_mup3_pane_t5_ParamLimits

0x5433,	// (0x0004b8c2) main_mup3_pane_t5

0x550d,	// (0x0004b99c) main_mup3_pane_t6_ParamLimits

0x550d,	// (0x0004b99c) main_mup3_pane_t6

0x0005,

0xf687,	// (0x00055b16) main_mup3_pane_t_ParamLimits

0xf687,	// (0x00055b16) main_mup3_pane_t

0x55b5,	// (0x0004ba44) mup3_progress_pane_ParamLimits

0x55b5,	// (0x0004ba44) mup3_progress_pane

0x561d,	// (0x0004baac) popup_mup3_control_window_ParamLimits

0x561d,	// (0x0004baac) popup_mup3_control_window

0xc3fa,	// (0x00052889) popup_mup3_text_window

0x5635,	// (0x0004bac4) mup3_progress_pane_t1

0x564c,	// (0x0004badb) mup3_progress_pane_t2

0xc402,	// (0x00052891) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x00055b23) mup3_progress_pane_t

0xc419,	// (0x000528a8) mup_progress_pane_cp03

0xc42a,	// (0x000528b9) bg_tb_trans_pane_cp04

0xc42a,	// (0x000528b9) mup3_volume_pane

0xc432,	// (0x000528c1) popup_mup3_control_window_g1

0xc432,	// (0x000528c1) mup3_volume_pane_g1

0xc432,	// (0x000528c1) mup3_volume_pane_g2

0xc432,	// (0x000528c1) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x00055b2a) mup3_volume_pane_g

0xe665,	// (0x00054af4) bg_tb_trans_pane_cp03

0xc43a,	// (0x000528c9) popup_mup3_text_window_g1

0xc442,	// (0x000528d1) popup_mup3_text_window_t1

0x14c1,	// (0x00047950) list_calc_item_pane_g1_ParamLimits

0xbeec,	// (0x0005237b) mup_volume_pane_cp_g1

0x4f48,	// (0x0004b3d7) main_touch_calib_pane_t3

0x4f5c,	// (0x0004b3eb) main_touch_calib_pane_t4

0x4f72,	// (0x0004b401) main_touch_calib_pane_t5

0xa5b3,	// (0x00050a42) aid_cell_size_toolbar2

0xa5bb,	// (0x00050a4a) aid_popup3_width_pane

0xa5c7,	// (0x00050a56) aid_zoom_text_msg_primary

0x1de5,	// (0x00048274) vorec_t7

0x1421,	// (0x000478b0) bg_calc_paper_pane_g1_ParamLimits

0x142d,	// (0x000478bc) bg_calc_paper_pane_g2_ParamLimits

0x1439,	// (0x000478c8) bg_calc_paper_pane_g3_ParamLimits

0x1445,	// (0x000478d4) bg_calc_paper_pane_g4_ParamLimits

0x1451,	// (0x000478e0) bg_calc_paper_pane_g5_ParamLimits

0x145d,	// (0x000478ec) bg_calc_paper_pane_g6_ParamLimits

0x1470,	// (0x000478ff) bg_calc_paper_pane_g7_ParamLimits

0x1483,	// (0x00047912) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0005553a) bg_calc_paper_pane_g_ParamLimits

0x1496,	// (0x00047925) calc_bg_paper_pane_g9_ParamLimits

0x0c30,	// (0x000470bf) image_qvga_pane_ParamLimits

0x0c30,	// (0x000470bf) image_qvga_pane

0x11ef,	// (0x0004767e) bg_popup_sub_pane_cp04_ParamLimits

0xac0c,	// (0x0005109b) popup_mup_playback_window_g1_ParamLimits

0xac18,	// (0x000510a7) popup_mup_playback_window_t1_ParamLimits

0xac2d,	// (0x000510bc) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00055893) popup_mup_playback_window_t_ParamLimits

0x1278,	// (0x00047707) main_mup2_pane_g3_ParamLimits

0x1278,	// (0x00047707) main_mup2_pane_g3

0x2106,	// (0x00048595) popup_toolbar_window_cp04

0xafb1,	// (0x00051440) popup_call2_audio_second_window_g3_ParamLimits

0xafb1,	// (0x00051440) popup_call2_audio_second_window_g3

0xb3c9,	// (0x00051858) popup_call2_audio_first_window_g4_ParamLimits

0xb3c9,	// (0x00051858) popup_call2_audio_first_window_g4

0xb9f0,	// (0x00051e7f) popup_call2_audio_in_window_g4_ParamLimits

0xb9f0,	// (0x00051e7f) popup_call2_audio_in_window_g4

0x4086,	// (0x0004a515) aid_area_sk_bg_cut_ParamLimits

0x4086,	// (0x0004a515) aid_area_sk_bg_cut

0xac42,	// (0x000510d1) aid_area_sk_bg_cut_2_ParamLimits

0xac42,	// (0x000510d1) aid_area_sk_bg_cut_2

0xe665,	// (0x00054af4) aid_placing_details_win

0xe665,	// (0x00054af4) aid_placing_details_win_2

0x126a,	// (0x000476f9) camera2_autofocus_pane_g1_ParamLimits

0x0bd5,	// (0x00047064) popup_fixed_preview_cale_window_ParamLimits

0x0bd5,	// (0x00047064) popup_fixed_preview_cale_window

0xa924,	// (0x00050db3) navi_slider_pane_g3

0xa92d,	// (0x00050dbc) navi_slider_pane_g4

0xa936,	// (0x00050dc5) navi_slider_pane_g5

0xa924,	// (0x00050db3) navi_slider_pane_g6

0xa93f,	// (0x00050dce) navi_slider_pane_g7

0xaa6f,	// (0x00050efe) mup_scale_pane_g3

0xaa78,	// (0x00050f07) mup_scale_pane_g4

0xaa81,	// (0x00050f10) mup_scale_pane_g5

0x3e0b,	// (0x0004a29a) mup_scale_pane_g6

0x3e14,	// (0x0004a2a3) mup_scale_pane_g7

0x133e,	// (0x000477cd) cams2_slider_pane_g3

0x133e,	// (0x000477cd) cams2_slider_pane_g4

0x133e,	// (0x000477cd) cams2_slider_pane_g5

0x133e,	// (0x000477cd) cams2_slider_pane_g6

0x133e,	// (0x000477cd) cams2_slider_pane_g7

0x133e,	// (0x000477cd) camera2_autofocus_pane_cp_g1

0xbc80,	// (0x0005210f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc80,	// (0x0005210f) bg_popup_preview_window_pane_cp02

0xc450,	// (0x000528df) list_fp_cale_pane_ParamLimits

0xc450,	// (0x000528df) list_fp_cale_pane

0xc45c,	// (0x000528eb) popup_fixed_preview_cale_window_t1_ParamLimits

0xc45c,	// (0x000528eb) popup_fixed_preview_cale_window_t1

0x5663,	// (0x0004baf2) popup_fixed_preview_cale_window_t2_ParamLimits

0x5663,	// (0x0004baf2) popup_fixed_preview_cale_window_t2

0x5678,	// (0x0004bb07) popup_fixed_preview_cale_window_t3_ParamLimits

0x5678,	// (0x0004bb07) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x00055b31) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x00055b31) popup_fixed_preview_cale_window_t

0x568f,	// (0x0004bb1e) list_single_fp_cale_pane_ParamLimits

0x568f,	// (0x0004bb1e) list_single_fp_cale_pane

0xc47a,	// (0x00052909) list_single_fp_cale_pane_g1_ParamLimits

0xc47a,	// (0x00052909) list_single_fp_cale_pane_g1

0xc486,	// (0x00052915) list_single_fp_cale_pane_g2_ParamLimits

0xc486,	// (0x00052915) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x00055b38) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x00055b38) list_single_fp_cale_pane_g

0xc49f,	// (0x0005292e) list_single_fp_cale_pane_t1_ParamLimits

0xc49f,	// (0x0005292e) list_single_fp_cale_pane_t1

0xc4b1,	// (0x00052940) list_single_fp_cale_pane_t2_ParamLimits

0xc4b1,	// (0x00052940) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x00055b3f) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x00055b3f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe665,	// (0x00054af4) main_dialer_pane

0xe665,	// (0x00054af4) aid_cell_size_keypad

0xe665,	// (0x00054af4) dialer_ne_pane

0xe665,	// (0x00054af4) grid_dialer_command_1_pane

0xe665,	// (0x00054af4) grid_dialer_command_2_pane

0xe665,	// (0x00054af4) grid_dialer_keypad_pane

0x56a4,	// (0x0004bb33) bg_popup_call_pane_cp06_ParamLimits

0x56a4,	// (0x0004bb33) bg_popup_call_pane_cp06

0x56a4,	// (0x0004bb33) dialer_ne_clear_pane_ParamLimits

0x56a4,	// (0x0004bb33) dialer_ne_clear_pane

0x133e,	// (0x000477cd) dialer_ne_pane_g1

0x135c,	// (0x000477eb) dialer_ne_pane_t1_ParamLimits

0x135c,	// (0x000477eb) dialer_ne_pane_t1

0x56b2,	// (0x0004bb41) dialer_ne_pane_t2_ParamLimits

0x56b2,	// (0x0004bb41) dialer_ne_pane_t2

0x56da,	// (0x0004bb69) dialer_ne_pane_t3_ParamLimits

0x56da,	// (0x0004bb69) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x00055b44) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x00055b44) dialer_ne_pane_t

0x56da,	// (0x0004bb69) dialer_ne_pane_t3_copy1_ParamLimits

0x56da,	// (0x0004bb69) dialer_ne_pane_t3_copy1

0xc4e4,	// (0x00052973) cell_dialer_keypad_pane_ParamLimits

0xc4e4,	// (0x00052973) cell_dialer_keypad_pane

0x0c30,	// (0x000470bf) cell_dialer_command_1_pane_ParamLimits

0x0c30,	// (0x000470bf) cell_dialer_command_1_pane

0xc4fb,	// (0x0005298a) cell_dialer_command_2_pane_ParamLimits

0xc4fb,	// (0x0005298a) cell_dialer_command_2_pane

0x0c30,	// (0x000470bf) bg_button_pane_cp02_ParamLimits

0x0c30,	// (0x000470bf) bg_button_pane_cp02

0x126a,	// (0x000476f9) cell_dialer_keypad_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_dialer_keypad_pane_g1

0x0c30,	// (0x000470bf) bg_button_pane_cp03_ParamLimits

0x0c30,	// (0x000470bf) bg_button_pane_cp03

0x126a,	// (0x000476f9) cell_dialer_command_1_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_dialer_command_1_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp04

0x133e,	// (0x000477cd) cell_dialer_command_2_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp06

0x133e,	// (0x000477cd) dialer_ne_clear_pane_g1

0x3b1a,	// (0x00049fa9) navi_pane_g2

0x3b48,	// (0x00049fd7) navi_pane_g3

0x0002,

0xf30c,	// (0x0005579b) navi_pane_g

0x3b73,	// (0x0004a002) navi_pane_mv_g2

0x3b9a,	// (0x0004a029) navi_pane_mv_g5

0x3ba2,	// (0x0004a031) navi_pane_mv_t1

0x13b0,	// (0x0004783f) main_clock2_pane

0x0c30,	// (0x000470bf) main_clock2_list_pane_ParamLimits

0x0c30,	// (0x000470bf) main_clock2_list_pane

0x576d,	// (0x0004bbfc) main_clock2_pane_t1_ParamLimits

0x576d,	// (0x0004bbfc) main_clock2_pane_t1

0x57a8,	// (0x0004bc37) main_clock2_pane_t2_ParamLimits

0x57a8,	// (0x0004bc37) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x00055b50) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x00055b50) main_clock2_pane_t

0x583e,	// (0x0004bccd) popup_clock_analogue_window_cp03_ParamLimits

0x583e,	// (0x0004bccd) popup_clock_analogue_window_cp03

0x5863,	// (0x0004bcf2) popup_clock_digital_window_cp02_ParamLimits

0x5863,	// (0x0004bcf2) popup_clock_digital_window_cp02

0x58dc,	// (0x0004bd6b) main_clock2_list_single_pane_ParamLimits

0x58dc,	// (0x0004bd6b) main_clock2_list_single_pane

0x1d9b,	// (0x0004822a) list_highlight_pane_cp05

0xc53c,	// (0x000529cb) main_clock2_list_single_pane_t1

0x2106,	// (0x00048595) popup_toolbar_window_cp04_ParamLimits

0x1278,	// (0x00047707) camera2_autofocus_pane_g2_ParamLimits

0x1278,	// (0x00047707) camera2_autofocus_pane_g2

0x1278,	// (0x00047707) camera2_autofocus_pane_g3_ParamLimits

0x1278,	// (0x00047707) camera2_autofocus_pane_g3

0x1278,	// (0x00047707) camera2_autofocus_pane_g4_ParamLimits

0x1278,	// (0x00047707) camera2_autofocus_pane_g4

0x1278,	// (0x00047707) camera2_autofocus_pane_g5_ParamLimits

0x1278,	// (0x00047707) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x00055a94) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x00055a94) camera2_autofocus_pane_g

0x4fac,	// (0x0004b43b) camera2_autofocus_pane_cp_g2

0x4fb4,	// (0x0004b443) camera2_autofocus_pane_cp_g3

0x4fbc,	// (0x0004b44b) camera2_autofocus_pane_cp_g4

0x4fc4,	// (0x0004b453) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x00055afa) camera2_autofocus_pane_cp_g

0xe665,	// (0x00054af4) popup_dialer_spcha_window

0xe665,	// (0x00054af4) bg_popup_sub_pane_cp07

0xe665,	// (0x00054af4) list_spcha_pane

0xc54a,	// (0x000529d9) list_single_spcha_pane_ParamLimits

0xc54a,	// (0x000529d9) list_single_spcha_pane

0xe665,	// (0x00054af4) list_highlight_pane_cp06

0x3621,	// (0x00049ab0) list_single_spcha_pane_t1

0xb79a,	// (0x00051c29) popup_call2_audio_out_window_g4_ParamLimits

0xb79a,	// (0x00051c29) popup_call2_audio_out_window_g4

0xe665,	// (0x00054af4) main_imed2_pane

0xbcaa,	// (0x00052139) popup_imed_adjust2_window

0x48c4,	// (0x0004ad53) popup_imed_trans_window_ParamLimits

0x48c4,	// (0x0004ad53) popup_imed_trans_window

0xbfc1,	// (0x00052450) popup_blid_sat_info2_window_t1

0xbfcf,	// (0x0005245e) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x00055a29) popup_blid_sat_info2_window_t

0x5997,	// (0x0004be26) aid_size_cell_colour_35

0x59b7,	// (0x0004be46) aid_size_cell_colour_112

0x59d7,	// (0x0004be66) aid_size_cell_effect

0xa9fd,	// (0x00050e8c) bg_tb_trans_pane_cp02

0x59f7,	// (0x0004be86) heading_imed_pane

0x5a03,	// (0x0004be92) listscroll_imed_pane

0xc55c,	// (0x000529eb) heading_imed_pane_g1

0xc564,	// (0x000529f3) heading_imed_pane_t1

0xc572,	// (0x00052a01) grid_imed_colour_35_pane_ParamLimits

0xc572,	// (0x00052a01) grid_imed_colour_35_pane

0x5a0f,	// (0x0004be9e) grid_imed_effect_pane

0xc58e,	// (0x00052a1d) list_imed_aspect_pane

0x5a26,	// (0x0004beb5) scroll_pane_cp027_ParamLimits

0x5a26,	// (0x0004beb5) scroll_pane_cp027

0x5a37,	// (0x0004bec6) cell_imed_effect_pane_ParamLimits

0x5a37,	// (0x0004bec6) cell_imed_effect_pane

0xc596,	// (0x00052a25) cell_imed_colour_pane_ParamLimits

0xc596,	// (0x00052a25) cell_imed_colour_pane

0xc5e0,	// (0x00052a6f) cell_imed_colour_pane_g1_ParamLimits

0xc5e0,	// (0x00052a6f) cell_imed_colour_pane_g1

0xc5f1,	// (0x00052a80) hgihlgiht_grid_pane_cp016_ParamLimits

0xc5f1,	// (0x00052a80) hgihlgiht_grid_pane_cp016

0x5a62,	// (0x0004bef1) cell_imed_effect_pane_g1

0x5a6a,	// (0x0004bef9) grid_highlight_pane_cp017

0xc602,	// (0x00052a91) list_imed_single_pane_ParamLimits

0xc602,	// (0x00052a91) list_imed_single_pane

0xe665,	// (0x00054af4) list_highlight_pane_cp07

0xc616,	// (0x00052aa5) list_imed_aspect_pane_comp1_t1

0xa9fd,	// (0x00050e8c) bg_tb_trans_pane_cp05

0xc638,	// (0x00052ac7) popup_imed_adjust2_window_g1

0xc65f,	// (0x00052aee) popup_imed_adjust2_window_t1

0xc677,	// (0x00052b06) slider_imed_adjust_pane

0xc68b,	// (0x00052b1a) slider_imed_adjust_pane_g1

0xc69b,	// (0x00052b2a) slider_imed_adjust_pane_g2

0xc6ab,	// (0x00052b3a) slider_imed_adjust_pane_g3

0xc6bc,	// (0x00052b4b) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x00055b6d) slider_imed_adjust_pane_g

0x5a73,	// (0x0004bf02) aid_size_cell_clipart2

0xc6cd,	// (0x00052b5c) grid_imed_clipart_pane

0xaa92,	// (0x00050f21) scroll_pane_cp031

0x5a7f,	// (0x0004bf0e) cell_imed_clipart_pane_ParamLimits

0x5a7f,	// (0x0004bf0e) cell_imed_clipart_pane

0x5a9c,	// (0x0004bf2b) cell_imed_clipart_pane_g1

0xe665,	// (0x00054af4) grid_highlight_pane_cp014

0x5749,	// (0x0004bbd8) main_clock2_pane_g1_ParamLimits

0x5749,	// (0x0004bbd8) main_clock2_pane_g1

0x5883,	// (0x0004bd12) aid_call2_pane_cp10

0x5895,	// (0x0004bd24) aid_call_pane_cp10

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g1

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g2

0x58a7,	// (0x0004bd36) popup_clock_analogue_window_cp10_g3

0x58a7,	// (0x0004bd36) popup_clock_analogue_window_cp10_g4

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x00055b5b) popup_clock_analogue_window_cp10_g

0x58bd,	// (0x0004bd4c) popup_clock_analogue_window_cp10_t1

0x58ee,	// (0x0004bd7d) clock_digital_number_pane_cp10_ParamLimits

0x58ee,	// (0x0004bd7d) clock_digital_number_pane_cp10

0x5908,	// (0x0004bd97) clock_digital_number_pane_cp11_ParamLimits

0x5908,	// (0x0004bd97) clock_digital_number_pane_cp11

0x5922,	// (0x0004bdb1) clock_digital_number_pane_cp12_ParamLimits

0x5922,	// (0x0004bdb1) clock_digital_number_pane_cp12

0x593e,	// (0x0004bdcd) clock_digital_number_pane_cp13_ParamLimits

0x593e,	// (0x0004bdcd) clock_digital_number_pane_cp13

0x595a,	// (0x0004bde9) clock_digital_separator_pane_cp10_ParamLimits

0x595a,	// (0x0004bde9) clock_digital_separator_pane_cp10

0x5976,	// (0x0004be05) popup_clock_digital_window_cp02_t1_ParamLimits

0x5976,	// (0x0004be05) popup_clock_digital_window_cp02_t1

0x11e7,	// (0x00047676) clock_digital_number_pane_cp10_g1

0x11e7,	// (0x00047676) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x00055b76) clock_digital_number_pane_cp10_g

0x11e7,	// (0x00047676) clock_digital_separator_pane_cp10_g1

0x11e7,	// (0x00047676) clock_digital_separator_pane_g2_cp10

0xa8e2,	// (0x00050d71) navi_pane_vded_g4

0xa8eb,	// (0x00050d7a) navi_pane_vded_g5

0xa8f4,	// (0x00050d83) navi_pane_vded_t1

0xe665,	// (0x00054af4) main_vded_pane

0x5aa5,	// (0x0004bf34) main_vded_pane_g1

0x5ab1,	// (0x0004bf40) main_vded_pane_g2

0x5abd,	// (0x0004bf4c) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x00055b7b) main_vded_pane_g

0x5ac9,	// (0x0004bf58) main_vded_pane_t1

0x5ad7,	// (0x0004bf66) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x00055b82) main_vded_pane_t

0x5ae5,	// (0x0004bf74) vded_slider_pane

0x5aef,	// (0x0004bf7e) vded_video_pane

0xc6d7,	// (0x00052b66) vded_video_pane_g1

0x5afb,	// (0x0004bf8a) vded_video_pane_g2

0x133e,	// (0x000477cd) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x00055b87) vded_video_pane_g

0xc6e1,	// (0x00052b70) vded_slider_pane_g1

0xbeec,	// (0x0005237b) vded_slider_pane_g2

0xc6ea,	// (0x00052b79) vded_slider_pane_g3

0xc6f3,	// (0x00052b82) vded_slider_pane_g4

0xc6fc,	// (0x00052b8b) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x00055b8e) vded_slider_pane_g

0xe7ef,	// (0x00054c7e) mup3_rocker_pane_ParamLimits

0xe7ef,	// (0x00054c7e) mup3_rocker_pane

0xc432,	// (0x000528c1) mup3_control_keys_pane_g1

0xc705,	// (0x00052b94) mup3_control_keys_pane_g2

0xc432,	// (0x000528c1) mup3_control_keys_pane_g3

0xc70d,	// (0x00052b9c) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x00055b99) mup3_control_keys_pane_g

0x0c0c,	// (0x0004709b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c0c,	// (0x0004709b) popup_toolbar2_fixed_window_cp01

0xe7ef,	// (0x00054c7e) popup_toolbar2_fixed_window_cp02_ParamLimits

0xe7ef,	// (0x00054c7e) popup_toolbar2_fixed_window_cp02

0xb123,	// (0x000515b2) popup_call2_audio_second_window_t4_ParamLimits

0xb123,	// (0x000515b2) popup_call2_audio_second_window_t4

0xb65f,	// (0x00051aee) popup_call2_audio_first_window_t6_ParamLimits

0xb65f,	// (0x00051aee) popup_call2_audio_first_window_t6

0xb89d,	// (0x00051d2c) popup_call2_audio_out_window_t6_ParamLimits

0xb89d,	// (0x00051d2c) popup_call2_audio_out_window_t6

0xe665,	// (0x00054af4) main_vitu_pane

0x0c30,	// (0x000470bf) aid_size_cell_itu_ParamLimits

0x0c30,	// (0x000470bf) aid_size_cell_itu

0x0c30,	// (0x000470bf) bg_popup_window_pane_cp08_ParamLimits

0x0c30,	// (0x000470bf) bg_popup_window_pane_cp08

0x0c30,	// (0x000470bf) field_vitu_entry_pane_ParamLimits

0x0c30,	// (0x000470bf) field_vitu_entry_pane

0x0c30,	// (0x000470bf) grid_vitu_function_pane_ParamLimits

0x0c30,	// (0x000470bf) grid_vitu_function_pane

0x0c30,	// (0x000470bf) grid_vitu_itu_pane_ParamLimits

0x0c30,	// (0x000470bf) grid_vitu_itu_pane

0x0c30,	// (0x000470bf) cell_vitu_itu_pane_ParamLimits

0x0c30,	// (0x000470bf) cell_vitu_itu_pane

0x0c30,	// (0x000470bf) cell_vitu_function_pane_ParamLimits

0x0c30,	// (0x000470bf) cell_vitu_function_pane

0x0c30,	// (0x000470bf) bg_popup_sub_pane_cp08_ParamLimits

0x0c30,	// (0x000470bf) bg_popup_sub_pane_cp08

0x1348,	// (0x000477d7) field_vitu_entry_pane_t1_ParamLimits

0x1348,	// (0x000477d7) field_vitu_entry_pane_t1

0xc715,	// (0x00052ba4) field_vitu_entry_pane_t2_ParamLimits

0xc715,	// (0x00052ba4) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x00055ba2) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x00055ba2) field_vitu_entry_pane_t

0xbe13,	// (0x000522a2) bg_button_pane_cp05_ParamLimits

0xbe13,	// (0x000522a2) bg_button_pane_cp05

0xc732,	// (0x00052bc1) cell_vitu_itu_pane_g1

0xa9e9,	// (0x00050e78) cell_vitu_itu_pane_t1_ParamLimits

0xa9e9,	// (0x00050e78) cell_vitu_itu_pane_t1

0xa9e9,	// (0x00050e78) cell_vitu_itu_pane_t2_ParamLimits

0xa9e9,	// (0x00050e78) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x00055ba7) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x00055ba7) cell_vitu_itu_pane_t

0xe665,	// (0x00054af4) bg_button_pane_cp07

0x133e,	// (0x000477cd) cell_vitu_function_pane_g1

0xa626,	// (0x00050ab5) main_calc_pane_g1

0x0a9a,	// (0x00046f29) aid_visual_content_pane

0xe665,	// (0x00054af4) main_vradio_pane

0x126a,	// (0x000476f9) main_vradio_pane_g1_ParamLimits

0x126a,	// (0x000476f9) main_vradio_pane_g1

0x1278,	// (0x00047707) main_vradio_pane_g2_ParamLimits

0x1278,	// (0x00047707) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x00055bae) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x00055bae) main_vradio_pane_g

0x1348,	// (0x000477d7) main_vradio_pane_t1_ParamLimits

0x1348,	// (0x000477d7) main_vradio_pane_t1

0x1348,	// (0x000477d7) main_vradio_pane_t2_ParamLimits

0x1348,	// (0x000477d7) main_vradio_pane_t2

0x135c,	// (0x000477eb) main_vradio_pane_t3_ParamLimits

0x135c,	// (0x000477eb) main_vradio_pane_t3

0x0002,

0xf724,	// (0x00055bb3) main_vradio_pane_t_ParamLimits

0xf724,	// (0x00055bb3) main_vradio_pane_t

0x0c30,	// (0x000470bf) vradio_rocker_control_pane_ParamLimits

0x0c30,	// (0x000470bf) vradio_rocker_control_pane

0x0c30,	// (0x000470bf) vradio_station_info_pane_ParamLimits

0x0c30,	// (0x000470bf) vradio_station_info_pane

0x0c30,	// (0x000470bf) vradio_frequency_info_pane_ParamLimits

0x0c30,	// (0x000470bf) vradio_frequency_info_pane

0x133e,	// (0x000477cd) vradio_station_info_pane_g1

0xa9e9,	// (0x00050e78) vradio_station_info_pane_t1_ParamLimits

0xa9e9,	// (0x00050e78) vradio_station_info_pane_t1

0x135c,	// (0x000477eb) vradio_station_info_pane_t2_ParamLimits

0x135c,	// (0x000477eb) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x00055bba) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x00055bba) vradio_station_info_pane_t

0xe665,	// (0x00054af4) vradio_tuning_pane

0x5b04,	// (0x0004bf93) vradio_rocker_control_pane_g1

0xc74e,	// (0x00052bdd) vradio_rocker_control_pane_g2

0x5b0e,	// (0x0004bf9d) vradio_rocker_control_pane_g3

0x5b18,	// (0x0004bfa7) vradio_rocker_control_pane_g4

0x5b22,	// (0x0004bfb1) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x00055bbf) vradio_rocker_control_pane_g

0x133e,	// (0x000477cd) vradio_frequency_info_pane_g1

0x1348,	// (0x000477d7) vradio_frequency_info_pane_t1_ParamLimits

0x1348,	// (0x000477d7) vradio_frequency_info_pane_t1

0x5b2c,	// (0x0004bfbb) vradio_tuning_pane_g1

0x5b37,	// (0x0004bfc6) vradio_tuning_pane_t1

0xa5df,	// (0x00050a6e) area_side_right_pane_ParamLimits

0xa5df,	// (0x00050a6e) area_side_right_pane

0xbc47,	// (0x000520d6) status_small_pane_g1

0xbc4f,	// (0x000520de) status_small_pane_g2

0xbc58,	// (0x000520e7) status_small_pane_g3

0xbc61,	// (0x000520f0) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0005598b) status_small_pane_g

0xbc6a,	// (0x000520f9) status_small_pane_t1

0xe665,	// (0x00054af4) main_video3_pane

0xe665,	// (0x00054af4) cams_zoom_vslider_pane

0xc756,	// (0x00052be5) image3_wide_pane_ParamLimits

0xc756,	// (0x00052be5) image3_wide_pane

0xe665,	// (0x00054af4) image3_wide_small_pane

0xc770,	// (0x00052bff) main_video3_pane_g1_ParamLimits

0xc770,	// (0x00052bff) main_video3_pane_g1

0xc770,	// (0x00052bff) main_video3_pane_g2_ParamLimits

0xc770,	// (0x00052bff) main_video3_pane_g2

0x0001,

0xf73b,	// (0x00055bca) main_video3_pane_g_ParamLimits

0xf73b,	// (0x00055bca) main_video3_pane_g

0xc78e,	// (0x00052c1d) main_video3_pane_t1_ParamLimits

0xc78e,	// (0x00052c1d) main_video3_pane_t1

0xc78e,	// (0x00052c1d) main_video3_pane_t2_ParamLimits

0xc78e,	// (0x00052c1d) main_video3_pane_t2

0xc78e,	// (0x00052c1d) main_video3_pane_t3_ParamLimits

0xc78e,	// (0x00052c1d) main_video3_pane_t3

0x0002,

0xf740,	// (0x00055bcf) main_video3_pane_t_ParamLimits

0xf740,	// (0x00055bcf) main_video3_pane_t

0x133e,	// (0x000477cd) cams_zoom_vslider_pane_g1

0x133e,	// (0x000477cd) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0005551b) cams_zoom_vslider_pane_g

0xe665,	// (0x00054af4) small_slider_vertical_pane

0x133e,	// (0x000477cd) small_slider_vertical_pane_g1

0x133e,	// (0x000477cd) small_slider_vertical_pane_g2

0xc7b5,	// (0x00052c44) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x00055bd6) small_slider_vertical_pane_g

0xe665,	// (0x00054af4) main_hwr_training_pane

0xc7be,	// (0x00052c4d) hwr_training_instruct_pane_ParamLimits

0xc7be,	// (0x00052c4d) hwr_training_instruct_pane

0x5b46,	// (0x0004bfd5) hwr_training_navi_pane_ParamLimits

0x5b46,	// (0x0004bfd5) hwr_training_navi_pane

0x5b65,	// (0x0004bff4) hwr_training_write_pane_ParamLimits

0x5b65,	// (0x0004bff4) hwr_training_write_pane

0xe665,	// (0x00054af4) bg_frame_shadow_pane

0xc7f5,	// (0x00052c84) hwr_training_write_pane_g1

0xc7fd,	// (0x00052c8c) hwr_training_write_pane_g2

0xc805,	// (0x00052c94) hwr_training_write_pane_g3

0xc80d,	// (0x00052c9c) hwr_training_write_pane_g4

0xc815,	// (0x00052ca4) hwr_training_write_pane_g5

0xc81d,	// (0x00052cac) hwr_training_write_pane_g6

0xc825,	// (0x00052cb4) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x00055bdd) hwr_training_write_pane_g

0xc82d,	// (0x00052cbc) hwr_training_navi_pane_g1_ParamLimits

0xc82d,	// (0x00052cbc) hwr_training_navi_pane_g1

0xc83f,	// (0x00052cce) hwr_training_navi_pane_g2_ParamLimits

0xc83f,	// (0x00052cce) hwr_training_navi_pane_g2

0xc851,	// (0x00052ce0) hwr_training_navi_pane_g3_ParamLimits

0xc851,	// (0x00052ce0) hwr_training_navi_pane_g3

0xc861,	// (0x00052cf0) hwr_training_navi_pane_g4_ParamLimits

0xc861,	// (0x00052cf0) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x00055bec) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x00055bec) hwr_training_navi_pane_g

0xc86e,	// (0x00052cfd) hwr_training_navi_pane_t1

0x5bad,	// (0x0004c03c) list_single_hwr_training_instruct_pane_ParamLimits

0x5bad,	// (0x0004c03c) list_single_hwr_training_instruct_pane

0xc87c,	// (0x00052d0b) list_single_hwr_training_instruct_pane_t1

0xc0c8,	// (0x00052557) bg_frame_shadow_pane_g1

0xc88b,	// (0x00052d1a) bg_frame_shadow_pane_g2

0xc893,	// (0x00052d22) bg_frame_shadow_pane_g3

0xc89b,	// (0x00052d2a) bg_frame_shadow_pane_g4

0xc8a3,	// (0x00052d32) bg_frame_shadow_pane_g5

0xc8ab,	// (0x00052d3a) bg_frame_shadow_pane_g6

0xc8b3,	// (0x00052d42) bg_frame_shadow_pane_g7

0x1605,	// (0x00047a94) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x00055bf7) bg_frame_shadow_pane_g

0xe665,	// (0x00054af4) main_video_tele_dialer_pane

0x5bc9,	// (0x0004c058) aid_size_cell_video_keypad_ParamLimits

0x5bc9,	// (0x0004c058) aid_size_cell_video_keypad

0x5be3,	// (0x0004c072) grid_video_dialer_keypad_pane_ParamLimits

0x5be3,	// (0x0004c072) grid_video_dialer_keypad_pane

0x5c2f,	// (0x0004c0be) video_down_pane_cp_ParamLimits

0x5c2f,	// (0x0004c0be) video_down_pane_cp

0x5c61,	// (0x0004c0f0) cell_video_dialer_keypad_pane_ParamLimits

0x5c61,	// (0x0004c0f0) cell_video_dialer_keypad_pane

0xc8bb,	// (0x00052d4a) bg_button_pane_cp08_ParamLimits

0xc8bb,	// (0x00052d4a) bg_button_pane_cp08

0x5c87,	// (0x0004c116) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c87,	// (0x0004c116) cell_video_dialer_keypad_pane_g1

0xe7ef,	// (0x00054c7e) mup3_rocker2_pane_ParamLimits

0xe7ef,	// (0x00054c7e) mup3_rocker2_pane

0x133e,	// (0x000477cd) mup3_rocker2_pane_g1

0x4791,	// (0x0004ac20) main_dialer2_pane

0xe665,	// (0x00054af4) main_mp4_pane

0xc8e5,	// (0x00052d74) main_mp4_pane_g1_ParamLimits

0xc8e5,	// (0x00052d74) main_mp4_pane_g1

0xc8e5,	// (0x00052d74) main_mp4_pane_g2_ParamLimits

0xc8e5,	// (0x00052d74) main_mp4_pane_g2

0x5cc2,	// (0x0004c151) main_mp4_pane_g3_ParamLimits

0x5cc2,	// (0x0004c151) main_mp4_pane_g3

0xc903,	// (0x00052d92) main_mp4_pane_g4_ParamLimits

0xc903,	// (0x00052d92) main_mp4_pane_g4

0xc92b,	// (0x00052dba) main_mp4_pane_g5_ParamLimits

0xc92b,	// (0x00052dba) main_mp4_pane_g5

0x0007,

0xf788,	// (0x00055c17) main_mp4_pane_g_ParamLimits

0xf788,	// (0x00055c17) main_mp4_pane_g

0xc993,	// (0x00052e22) main_mp4_pane_t1_ParamLimits

0xc993,	// (0x00052e22) main_mp4_pane_t1

0xc9f5,	// (0x00052e84) main_mp4_pane_t2_ParamLimits

0xc9f5,	// (0x00052e84) main_mp4_pane_t2

0xca59,	// (0x00052ee8) main_mp4_pane_t3_ParamLimits

0xca59,	// (0x00052ee8) main_mp4_pane_t3

0xcab7,	// (0x00052f46) main_mp4_pane_t4_ParamLimits

0xcab7,	// (0x00052f46) main_mp4_pane_t4

0x0003,

0xf799,	// (0x00055c28) main_mp4_pane_t_ParamLimits

0xf799,	// (0x00055c28) main_mp4_pane_t

0xcb15,	// (0x00052fa4) mp4_progress_pane_ParamLimits

0xcb15,	// (0x00052fa4) mp4_progress_pane

0xd0de,	// (0x0005356d) mp4_rocker_pane_ParamLimits

0xd0de,	// (0x0005356d) mp4_rocker_pane

0xd0f2,	// (0x00053581) mp4_progress_pane_t1

0xd110,	// (0x0005359f) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x00055c31) mp4_progress_pane_t

0xd12f,	// (0x000535be) mup_progress_pane_cp04

0x133e,	// (0x000477cd) mp4_rocker_pane_g1

0x0c30,	// (0x000470bf) aid_cell_size_keypad2_ParamLimits

0x0c30,	// (0x000470bf) aid_cell_size_keypad2

0x0c30,	// (0x000470bf) dialer2_ne_pane_ParamLimits

0x0c30,	// (0x000470bf) dialer2_ne_pane

0x0c30,	// (0x000470bf) grid_dialer2_keypad_pane_ParamLimits

0x0c30,	// (0x000470bf) grid_dialer2_keypad_pane

0xbe13,	// (0x000522a2) bg_popup_call_pane_cp07_ParamLimits

0xbe13,	// (0x000522a2) bg_popup_call_pane_cp07

0x5cf4,	// (0x0004c183) dialer2_ne_pane_t1_ParamLimits

0x5cf4,	// (0x0004c183) dialer2_ne_pane_t1

0x5d34,	// (0x0004c1c3) cell_dialer2_keypad_pane_ParamLimits

0x5d34,	// (0x0004c1c3) cell_dialer2_keypad_pane

0xbe13,	// (0x000522a2) bg_button_pane_pane_cp04_ParamLimits

0xbe13,	// (0x000522a2) bg_button_pane_pane_cp04

0x126a,	// (0x000476f9) cell_dialer2_keypad_pane_g1_ParamLimits

0x126a,	// (0x000476f9) cell_dialer2_keypad_pane_g1

0x1fea,	// (0x00048479) aid_placing_vt_set_content_ParamLimits

0x1fea,	// (0x00048479) aid_placing_vt_set_content

0x200e,	// (0x0004849d) aid_placing_vt_set_title_ParamLimits

0x200e,	// (0x0004849d) aid_placing_vt_set_title

0xe665,	// (0x00054af4) main_image3_pane

0x5da9,	// (0x0004c238) area_side_right_pane_cp01_ParamLimits

0x5da9,	// (0x0004c238) area_side_right_pane_cp01

0x5dc2,	// (0x0004c251) main_image3_pane_g1_ParamLimits

0x5dc2,	// (0x0004c251) main_image3_pane_g1

0x5dd0,	// (0x0004c25f) main_image3_pane_g2_ParamLimits

0x5dd0,	// (0x0004c25f) main_image3_pane_g2

0x5df8,	// (0x0004c287) main_image3_pane_g3_ParamLimits

0x5df8,	// (0x0004c287) main_image3_pane_g3

0x5e22,	// (0x0004c2b1) main_image3_pane_g4_ParamLimits

0x5e22,	// (0x0004c2b1) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x00055c40) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x00055c40) main_image3_pane_g

0x5e4c,	// (0x0004c2db) main_image3_pane_t1_ParamLimits

0x5e4c,	// (0x0004c2db) main_image3_pane_t1

0x5ea4,	// (0x0004c333) main_image3_pane_t2_ParamLimits

0x5ea4,	// (0x0004c333) main_image3_pane_t2

0x5ef6,	// (0x0004c385) main_image3_pane_t3_ParamLimits

0x5ef6,	// (0x0004c385) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x00055c49) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x00055c49) main_image3_pane_t

0x0c30,	// (0x000470bf) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c30,	// (0x000470bf) grid_sctrl_middle_pane_cp01

0x5f7e,	// (0x0004c40d) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f7e,	// (0x0004c40d) cell_sctrl_middle_pane_cp01

0x5f9b,	// (0x0004c42a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f9b,	// (0x0004c42a) cell_sctrl_middle_pane_cp01_g1

0xe665,	// (0x00054af4) main_call4_pane

0x5fb0,	// (0x0004c43f) aid_size_button_call4_ParamLimits

0x5fb0,	// (0x0004c43f) aid_size_button_call4

0x5fe3,	// (0x0004c472) call4_windows_pane_ParamLimits

0x5fe3,	// (0x0004c472) call4_windows_pane

0x6002,	// (0x0004c491) grid_call4_button_pane_ParamLimits

0x6002,	// (0x0004c491) grid_call4_button_pane

0x6039,	// (0x0004c4c8) call4_windows_conf_pane

0x6052,	// (0x0004c4e1) popup_call4_audio_first_window_ParamLimits

0x6052,	// (0x0004c4e1) popup_call4_audio_first_window

0x60a2,	// (0x0004c531) popup_call4_audio_second_window_ParamLimits

0x60a2,	// (0x0004c531) popup_call4_audio_second_window

0x60bb,	// (0x0004c54a) popup_call4_audio_wait_window_ParamLimits

0x60bb,	// (0x0004c54a) popup_call4_audio_wait_window

0x60c9,	// (0x0004c558) cell_call4_button_pane_ParamLimits

0x60c9,	// (0x0004c558) cell_call4_button_pane

0x60f0,	// (0x0004c57f) bg_button_pane_cp09_ParamLimits

0x60f0,	// (0x0004c57f) bg_button_pane_cp09

0x60fc,	// (0x0004c58b) cell_call4_button_pane_g1_ParamLimits

0x60fc,	// (0x0004c58b) cell_call4_button_pane_g1

0x6122,	// (0x0004c5b1) cell_call4_button_pane_t1_ParamLimits

0x6122,	// (0x0004c5b1) cell_call4_button_pane_t1

0xd178,	// (0x00053607) popup_call4_audio_conf_window_ParamLimits

0xd178,	// (0x00053607) popup_call4_audio_conf_window

0x5635,	// (0x0004bac4) mup3_progress_pane_t1_ParamLimits

0x564c,	// (0x0004badb) mup3_progress_pane_t2_ParamLimits

0xc402,	// (0x00052891) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x00055b23) mup3_progress_pane_t_ParamLimits

0xc419,	// (0x000528a8) mup_progress_pane_cp03_ParamLimits

0xc432,	// (0x000528c1) mup3_control_keys_pane_g4_copy1

0xd0de,	// (0x0005356d) mp4_rocker2_pane_ParamLimits

0xd0de,	// (0x0005356d) mp4_rocker2_pane

0xc432,	// (0x000528c1) mp4_rocker2_pane_g1

0xc432,	// (0x000528c1) mp4_rocker2_pane_g2

0xc432,	// (0x000528c1) mp4_rocker2_pane_g3

0xc432,	// (0x000528c1) mp4_rocker2_pane_g4

0xc432,	// (0x000528c1) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x00055c52) mp4_rocker2_pane_g

0xe665,	// (0x00054af4) main_camera4_pane

0xe665,	// (0x00054af4) main_video4_pane

0x5bfd,	// (0x0004c08c) main_video_tele_dialer_pane_t1_ParamLimits

0x5bfd,	// (0x0004c08c) main_video_tele_dialer_pane_t1

0x5c16,	// (0x0004c0a5) main_video_tele_dialer_pane_t2_ParamLimits

0x5c16,	// (0x0004c0a5) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x00055c08) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x00055c08) main_video_tele_dialer_pane_t

0x6160,	// (0x0004c5ef) cam4_autofocus_pane_ParamLimits

0x6160,	// (0x0004c5ef) cam4_autofocus_pane

0x6176,	// (0x0004c605) cam4_image_uncrop_pane_ParamLimits

0x6176,	// (0x0004c605) cam4_image_uncrop_pane

0x618f,	// (0x0004c61e) cam4_indicators_pane_ParamLimits

0x618f,	// (0x0004c61e) cam4_indicators_pane

0x61bf,	// (0x0004c64e) main_camera4_pane_g1_ParamLimits

0x61bf,	// (0x0004c64e) main_camera4_pane_g1

0x61d1,	// (0x0004c660) main_camera4_pane_g2_ParamLimits

0x61d1,	// (0x0004c660) main_camera4_pane_g2

0x61e4,	// (0x0004c673) main_camera4_pane_g3_ParamLimits

0x61e4,	// (0x0004c673) main_camera4_pane_g3

0x61f7,	// (0x0004c686) main_camera4_pane_g4_ParamLimits

0x61f7,	// (0x0004c686) main_camera4_pane_g4

0x620a,	// (0x0004c699) main_camera4_pane_g5_ParamLimits

0x620a,	// (0x0004c699) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x00055c5d) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x00055c5d) main_camera4_pane_g

0x622e,	// (0x0004c6bd) main_camera4_pane_t1_ParamLimits

0x622e,	// (0x0004c6bd) main_camera4_pane_t1

0x126a,	// (0x000476f9) bg_tb_trans_pane_cp06

0xcbdf,	// (0x0005306e) cam4_indicators_pane_g1

0xcbf0,	// (0x0005307f) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x00055c78) cam4_indicators_pane_g

0xcc08,	// (0x00053097) cam4_indicators_pane_t1

0x6292,	// (0x0004c721) main_video4_pane_g1_ParamLimits

0x6292,	// (0x0004c721) main_video4_pane_g1

0x62a1,	// (0x0004c730) main_video4_pane_g2_ParamLimits

0x62a1,	// (0x0004c730) main_video4_pane_g2

0x62b1,	// (0x0004c740) main_video4_pane_g3_ParamLimits

0x62b1,	// (0x0004c740) main_video4_pane_g3

0x62c1,	// (0x0004c750) main_video4_pane_g4_ParamLimits

0x62c1,	// (0x0004c750) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x00055c7f) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x00055c7f) main_video4_pane_g

0x62e1,	// (0x0004c770) vid4_indicators_pane_ParamLimits

0x62e1,	// (0x0004c770) vid4_indicators_pane

0x630b,	// (0x0004c79a) video4_image_uncrop_cif_pane_ParamLimits

0x630b,	// (0x0004c79a) video4_image_uncrop_cif_pane

0x6325,	// (0x0004c7b4) video4_image_uncrop_nhd_pane_ParamLimits

0x6325,	// (0x0004c7b4) video4_image_uncrop_nhd_pane

0x6176,	// (0x0004c605) video4_image_uncrop_vga_pane_ParamLimits

0x6176,	// (0x0004c605) video4_image_uncrop_vga_pane

0x0c30,	// (0x000470bf) bg_tb_trans_pane_cp07

0xcc36,	// (0x000530c5) vid4_indicators_pane_g1

0xcc4c,	// (0x000530db) vid4_indicators_pane_g2

0xcc60,	// (0x000530ef) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x00055c8a) vid4_indicators_pane_g

0xcc91,	// (0x00053120) vid4_indicators_pane_t1

0x633c,	// (0x0004c7cb) cam4_autofocus_pane_g1

0x6344,	// (0x0004c7d3) cam4_autofocus_pane_g2

0x634c,	// (0x0004c7db) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x00055c95) cam4_autofocus_pane_g

0x6354,	// (0x0004c7e3) cam4_autofocus_pane_g3_copy1

0x5c45,	// (0x0004c0d4) video_down_pane_cp_t1

0x5c53,	// (0x0004c0e2) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x00055c0d) video_down_pane_cp_t

0x0c30,	// (0x000470bf) popup_vitu2_window_ParamLimits

0x0c30,	// (0x000470bf) popup_vitu2_window

0x635c,	// (0x0004c7eb) aid_size_cell2_itu2_ParamLimits

0x635c,	// (0x0004c7eb) aid_size_cell2_itu2

0x6382,	// (0x0004c811) aid_size_cell_itu2_ParamLimits

0x6382,	// (0x0004c811) aid_size_cell_itu2

0x56a4,	// (0x0004bb33) bg_popup_window_pane_cp09_ParamLimits

0x56a4,	// (0x0004bb33) bg_popup_window_pane_cp09

0x63e0,	// (0x0004c86f) field_vitu2_entry_pane_ParamLimits

0x63e0,	// (0x0004c86f) field_vitu2_entry_pane

0x6408,	// (0x0004c897) grid_vitu2_function_pane_ParamLimits

0x6408,	// (0x0004c897) grid_vitu2_function_pane

0x6459,	// (0x0004c8e8) grid_vitu2_itu_pane_ParamLimits

0x6459,	// (0x0004c8e8) grid_vitu2_itu_pane

0x64e9,	// (0x0004c978) cell_vitu2_itu_pane_ParamLimits

0x64e9,	// (0x0004c978) cell_vitu2_itu_pane

0x6517,	// (0x0004c9a6) cell_vitu2_function_pane_ParamLimits

0x6517,	// (0x0004c9a6) cell_vitu2_function_pane

0xd192,	// (0x00053621) bg_popup_call_pane_cp08_ParamLimits

0xd192,	// (0x00053621) bg_popup_call_pane_cp08

0xd1a9,	// (0x00053638) field_vitu2_entry_pane_g1

0xd1b5,	// (0x00053644) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x00055c9c) field_vitu2_entry_pane_g

0xd1c1,	// (0x00053650) field_vitu2_entry_pane_t1_ParamLimits

0xd1c1,	// (0x00053650) field_vitu2_entry_pane_t1

0xd1f0,	// (0x0005367f) field_vitu2_entry_pane_t2_ParamLimits

0xd1f0,	// (0x0005367f) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x00055ca3) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x00055ca3) field_vitu2_entry_pane_t

0x655b,	// (0x0004c9ea) bg_button_pane_cp010_ParamLimits

0x655b,	// (0x0004c9ea) bg_button_pane_cp010

0x6569,	// (0x0004c9f8) cell_vitu2_itu_pane_g1

0x658f,	// (0x0004ca1e) cell_vitu2_itu_pane_t1_ParamLimits

0x658f,	// (0x0004ca1e) cell_vitu2_itu_pane_t1

0x65ed,	// (0x0004ca7c) cell_vitu2_itu_pane_t2_ParamLimits

0x65ed,	// (0x0004ca7c) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x00055cad) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x00055cad) cell_vitu2_itu_pane_t

0x0c30,	// (0x000470bf) bg_button_pane_cp011

0x66d9,	// (0x0004cb68) cell_vitu2_function_pane_g1

0xe665,	// (0x00054af4) main_myfav_hc_pane

0x5f46,	// (0x0004c3d5) popup_image3_note_pane_ParamLimits

0x5f46,	// (0x0004c3d5) popup_image3_note_pane

0x5f62,	// (0x0004c3f1) popup_image3_tool_bar_pane_ParamLimits

0x5f62,	// (0x0004c3f1) popup_image3_tool_bar_pane

0x667b,	// (0x0004cb0a) cell_vitu2_itu_pane_t3_ParamLimits

0x667b,	// (0x0004cb0a) cell_vitu2_itu_pane_t3

0xe665,	// (0x00054af4) bg_popup_trans_pane

0xd215,	// (0x000536a4) grid_image3_tool_bar_pane

0xd21f,	// (0x000536ae) bg_popup_trans_pane_g1

0x25cd,	// (0x00048a5c) bg_popup_trans_pane_g2

0xd227,	// (0x000536b6) bg_popup_trans_pane_g3

0xd22f,	// (0x000536be) bg_popup_trans_pane_g4

0xd237,	// (0x000536c6) bg_popup_trans_pane_g5

0xd23f,	// (0x000536ce) bg_popup_trans_pane_g6

0xd247,	// (0x000536d6) bg_popup_trans_pane_g7

0xd24f,	// (0x000536de) bg_popup_trans_pane_g8

0x25ad,	// (0x00048a3c) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x00055cb4) bg_popup_trans_pane_g

0xd257,	// (0x000536e6) cell_image3_tool_bar_pane_ParamLimits

0xd257,	// (0x000536e6) cell_image3_tool_bar_pane

0x133e,	// (0x000477cd) cell_image3_tool_bar_pane_g1

0xe665,	// (0x00054af4) bg_popup_trans_pane_cp1

0xd26d,	// (0x000536fc) popup_image3_note_pane_t1

0xd27b,	// (0x0005370a) popup_image3_note_pane_t2

0xd289,	// (0x00053718) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x00055cc7) popup_image3_note_pane_t

0xd299,	// (0x00053728) popup_image3_note_pane_t3_copy1

0x66ed,	// (0x0004cb7c) bg_myfav_hc_instruction_pane_ParamLimits

0x66ed,	// (0x0004cb7c) bg_myfav_hc_instruction_pane

0x6705,	// (0x0004cb94) cell_myfav_contact_pane_ParamLimits

0x6705,	// (0x0004cb94) cell_myfav_contact_pane

0x6721,	// (0x0004cbb0) cell_myfav_contact_pane_cp1_ParamLimits

0x6721,	// (0x0004cbb0) cell_myfav_contact_pane_cp1

0x6739,	// (0x0004cbc8) cell_myfav_contact_pane_cp2_ParamLimits

0x6739,	// (0x0004cbc8) cell_myfav_contact_pane_cp2

0x6751,	// (0x0004cbe0) cell_myfav_contact_pane_cp3_ParamLimits

0x6751,	// (0x0004cbe0) cell_myfav_contact_pane_cp3

0x6768,	// (0x0004cbf7) cell_myfav_contact_pane_cp4_ParamLimits

0x6768,	// (0x0004cbf7) cell_myfav_contact_pane_cp4

0x6780,	// (0x0004cc0f) cell_myfav_contact_pane_cp5_ParamLimits

0x6780,	// (0x0004cc0f) cell_myfav_contact_pane_cp5

0x6794,	// (0x0004cc23) cell_myfav_contact_pane_cp6_ParamLimits

0x6794,	// (0x0004cc23) cell_myfav_contact_pane_cp6

0x67aa,	// (0x0004cc39) cell_myfav_contact_pane_cp7_ParamLimits

0x67aa,	// (0x0004cc39) cell_myfav_contact_pane_cp7

0xd2a7,	// (0x00053736) listscroll_gen_pane_cp05

0x67c2,	// (0x0004cc51) main_myfav_hc_pane_g1_ParamLimits

0x67c2,	// (0x0004cc51) main_myfav_hc_pane_g1

0x67dc,	// (0x0004cc6b) main_myfav_hc_pane_g2_ParamLimits

0x67dc,	// (0x0004cc6b) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x00055cce) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x00055cce) main_myfav_hc_pane_g

0x6810,	// (0x0004cc9f) main_myfav_hc_pane_t1_ParamLimits

0x6810,	// (0x0004cc9f) main_myfav_hc_pane_t1

0xd2b0,	// (0x0005373f) main_myfav_hc_pane_t2_ParamLimits

0xd2b0,	// (0x0005373f) main_myfav_hc_pane_t2

0xd2c2,	// (0x00053751) main_myfav_hc_pane_t3_ParamLimits

0xd2c2,	// (0x00053751) main_myfav_hc_pane_t3

0x6827,	// (0x0004ccb6) main_myfav_hc_pane_t4_ParamLimits

0x6827,	// (0x0004ccb6) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x00055cd5) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x00055cd5) main_myfav_hc_pane_t

0x133e,	// (0x000477cd) bg_myfav_hc_instruction_pane_g1

0xd2d4,	// (0x00053763) cell_myfav_contact_pane_g1_ParamLimits

0xd2d4,	// (0x00053763) cell_myfav_contact_pane_g1

0xd2d4,	// (0x00053763) cell_myfav_contact_pane_g2_ParamLimits

0xd2d4,	// (0x00053763) cell_myfav_contact_pane_g2

0xd2e0,	// (0x0005376f) cell_myfav_contact_pane_g3_ParamLimits

0xd2e0,	// (0x0005376f) cell_myfav_contact_pane_g3

0x1278,	// (0x00047707) cell_myfav_contact_pane_g4_ParamLimits

0x1278,	// (0x00047707) cell_myfav_contact_pane_g4

0xd2ed,	// (0x0005377c) cell_myfav_contact_pane_g5_ParamLimits

0xd2ed,	// (0x0005377c) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x00055ce0) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x00055ce0) cell_myfav_contact_pane_g

0x67f6,	// (0x0004cc85) main_myfav_hc_pane_g3_ParamLimits

0x67f6,	// (0x0004cc85) main_myfav_hc_pane_g3

0x03ae,	// (0x0004683d) popup_adpt_find_window

0x6851,	// (0x0004cce0) afind_page_pane_ParamLimits

0x6851,	// (0x0004cce0) afind_page_pane

0x6867,	// (0x0004ccf6) aid_size_cell_afind_ParamLimits

0x6867,	// (0x0004ccf6) aid_size_cell_afind

0x6885,	// (0x0004cd14) bg_popup_sub_pane_cp09_ParamLimits

0x6885,	// (0x0004cd14) bg_popup_sub_pane_cp09

0x6897,	// (0x0004cd26) find_pane_cp01_ParamLimits

0x6897,	// (0x0004cd26) find_pane_cp01

0xd2f9,	// (0x00053788) grid_afind_control_pane_ParamLimits

0xd2f9,	// (0x00053788) grid_afind_control_pane

0x68ab,	// (0x0004cd3a) grid_afind_pane_ParamLimits

0x68ab,	// (0x0004cd3a) grid_afind_pane

0x68cd,	// (0x0004cd5c) cell_afind_pane_ParamLimits

0x68cd,	// (0x0004cd5c) cell_afind_pane

0x133e,	// (0x000477cd) afind_page_pane_g1

0x6936,	// (0x0004cdc5) afind_page_pane_g2

0x693e,	// (0x0004cdcd) afind_page_pane_g3

0x0002,

0xf85c,	// (0x00055ceb) afind_page_pane_g

0x6946,	// (0x0004cdd5) afind_page_pane_t1

0xd31f,	// (0x000537ae) cell_afind_grid_control_pane_ParamLimits

0xd31f,	// (0x000537ae) cell_afind_grid_control_pane

0xd32e,	// (0x000537bd) bg_button_pane_cp69_ParamLimits

0xd32e,	// (0x000537bd) bg_button_pane_cp69

0x6954,	// (0x0004cde3) cell_afind_pane_g1_ParamLimits

0x6954,	// (0x0004cde3) cell_afind_pane_g1

0x6961,	// (0x0004cdf0) cell_afind_pane_t1_ParamLimits

0x6961,	// (0x0004cdf0) cell_afind_pane_t1

0xd33a,	// (0x000537c9) bg_button_pane_cp72

0xd342,	// (0x000537d1) cell_afind_grid_control_pane_g1

0x4279,	// (0x0004a708) aid_image_placing_area_ParamLimits

0x4279,	// (0x0004a708) aid_image_placing_area

0x126a,	// (0x000476f9) field_vitu_entry_pane_g1_ParamLimits

0x126a,	// (0x000476f9) field_vitu_entry_pane_g1

0x126a,	// (0x000476f9) field_vitu_entry_pane_g2_ParamLimits

0x126a,	// (0x000476f9) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00055628) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00055628) field_vitu_entry_pane_g

0xc732,	// (0x00052bc1) cell_vitu_itu_pane_g1_ParamLimits

0xc715,	// (0x00052ba4) cell_vitu_itu_pane_t3_ParamLimits

0xc715,	// (0x00052ba4) cell_vitu_itu_pane_t3

0xd0f2,	// (0x00053581) mp4_progress_pane_t1_ParamLimits

0xd110,	// (0x0005359f) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x00055c31) mp4_progress_pane_t_ParamLimits

0xd12f,	// (0x000535be) mup_progress_pane_cp04_ParamLimits

0x683b,	// (0x0004ccca) main_myfav_hc_pane_t5_ParamLimits

0x683b,	// (0x0004ccca) main_myfav_hc_pane_t5

0xa5cf,	// (0x00050a5e) aid_zoom_text_primary

0x03ae,	// (0x0004683d) popup_adpt_find_window_ParamLimits

0x0c30,	// (0x000470bf) main_cam_set_pane

0x61a8,	// (0x0004c637) cam4_zoom_pane_ParamLimits

0x61a8,	// (0x0004c637) cam4_zoom_pane

0x6973,	// (0x0004ce02) main_cam_set_pane_g1_ParamLimits

0x6973,	// (0x0004ce02) main_cam_set_pane_g1

0x6981,	// (0x0004ce10) main_cam_set_pane_g2_ParamLimits

0x6981,	// (0x0004ce10) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x00055cf2) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x00055cf2) main_cam_set_pane_g

0x69a2,	// (0x0004ce31) main_cam_set_pane_t1_ParamLimits

0x69a2,	// (0x0004ce31) main_cam_set_pane_t1

0x69bd,	// (0x0004ce4c) main_cset_listscroll_pane_ParamLimits

0x69bd,	// (0x0004ce4c) main_cset_listscroll_pane

0x69e5,	// (0x0004ce74) main_cset_slider_pane_ParamLimits

0x69e5,	// (0x0004ce74) main_cset_slider_pane

0xd353,	// (0x000537e2) main_cset_list_pane_ParamLimits

0xd353,	// (0x000537e2) main_cset_list_pane

0xd363,	// (0x000537f2) scroll_pane_cp028

0x6a0f,	// (0x0004ce9e) aid_area_touch_slider

0x6a2b,	// (0x0004ceba) cset_slider_pane

0x6a4e,	// (0x0004cedd) main_cset_slider_pane_g1

0x6a63,	// (0x0004cef2) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x00055cf7) main_cset_slider_pane_g

0xd39c,	// (0x0005382b) main_cset_slider_pane_t1

0x6b25,	// (0x0004cfb4) main_cset_slider_pane_t2

0x6b3f,	// (0x0004cfce) main_cset_slider_pane_t3

0x6b59,	// (0x0004cfe8) main_cset_slider_pane_t4

0x6b73,	// (0x0004d002) main_cset_slider_pane_t5

0x6b91,	// (0x0004d020) main_cset_slider_pane_t6

0x6ba6,	// (0x0004d035) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x00055d1c) main_cset_slider_pane_t

0x6cb2,	// (0x0004d141) cset_list_set_pane_ParamLimits

0x6cb2,	// (0x0004d141) cset_list_set_pane

0xd436,	// (0x000538c5) aid_position_infowindow_above

0xd43e,	// (0x000538cd) aid_position_infowindow_below

0x04ed,	// (0x0004697c) cset_list_set_pane_g1_ParamLimits

0x04ed,	// (0x0004697c) cset_list_set_pane_g1

0x04f9,	// (0x00046988) cset_list_set_pane_g3_ParamLimits

0x04f9,	// (0x00046988) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x00055d3b) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x00055d3b) cset_list_set_pane_g

0x0508,	// (0x00046997) cset_list_set_pane_t1_ParamLimits

0x0508,	// (0x00046997) cset_list_set_pane_t1

0x0c30,	// (0x000470bf) list_highlight_pane_cp021_ParamLimits

0x0c30,	// (0x000470bf) list_highlight_pane_cp021

0xaa6f,	// (0x00050efe) cset_slider_pane_g1

0xaa81,	// (0x00050f10) cset_slider_pane_g2

0xaa78,	// (0x00050f07) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x00055d40) cset_slider_pane_g

0xd446,	// (0x000538d5) aid_area_touch_cam4_zoom

0x6cc6,	// (0x0004d155) cam4_zoom_cont_pane

0x6cce,	// (0x0004d15d) cam4_zoom_pane_g1

0x6cd6,	// (0x0004d165) cam4_zoom_pane_g2

0x6cde,	// (0x0004d16d) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x00055d47) cam4_zoom_pane_g

0xd44f,	// (0x000538de) cam4_zoom_cont_pane_g1

0xd458,	// (0x000538e7) cam4_zoom_cont_pane_g2

0xd461,	// (0x000538f0) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x00055d4e) cam4_zoom_cont_pane_g

0x5fce,	// (0x0004c45d) call4_image_pane_ParamLimits

0x5fce,	// (0x0004c45d) call4_image_pane

0x6039,	// (0x0004c4c8) call4_windows_conf_pane_ParamLimits

0x6080,	// (0x0004c50f) popup_call4_audio_in_window_ParamLimits

0x6080,	// (0x0004c50f) popup_call4_audio_in_window

0xe665,	// (0x00054af4) bg_popup_call2_act_pane_cp02

0xd170,	// (0x000535ff) call4_list_conf_pane

0x133e,	// (0x000477cd) call4_image_pane_g1

0x133e,	// (0x000477cd) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0005551b) call4_image_pane_g

0xd46a,	// (0x000538f9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd46a,	// (0x000538f9) list_single_graphic_popup_conf4_pane

0xe665,	// (0x00054af4) list_highlight_pane_cp022

0xd47f,	// (0x0005390e) list_single_graphic_popup_conf4_pane_g1

0xa744,	// (0x00050bd3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x00055d55) list_single_graphic_popup_conf4_pane_g

0xd487,	// (0x00053916) list_single_graphic_popup_conf4_pane_t1

0x2128,	// (0x000485b7) popup_vtel_slider_window_ParamLimits

0x2128,	// (0x000485b7) popup_vtel_slider_window

0xd142,	// (0x000535d1) dialer2_ne_pane_t2_ParamLimits

0xd142,	// (0x000535d1) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x00055c36) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x00055c36) dialer2_ne_pane_t

0xbe13,	// (0x000522a2) bg_popup_sub_pane_cp010_ParamLimits

0xbe13,	// (0x000522a2) bg_popup_sub_pane_cp010

0x6ce6,	// (0x0004d175) popup_vtel_slider_window_g1_ParamLimits

0x6ce6,	// (0x0004d175) popup_vtel_slider_window_g1

0x6cf9,	// (0x0004d188) popup_vtel_slider_window_g2_ParamLimits

0x6cf9,	// (0x0004d188) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x00055d5a) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x00055d5a) popup_vtel_slider_window_g

0x6d4f,	// (0x0004d1de) vtel_slider_pane_ParamLimits

0x6d4f,	// (0x0004d1de) vtel_slider_pane

0x6d71,	// (0x0004d200) vtel_slider_pane_g1_ParamLimits

0x6d71,	// (0x0004d200) vtel_slider_pane_g1

0x6d85,	// (0x0004d214) vtel_slider_pane_g2_ParamLimits

0x6d85,	// (0x0004d214) vtel_slider_pane_g2

0x6d9d,	// (0x0004d22c) vtel_slider_pane_g3_ParamLimits

0x6d9d,	// (0x0004d22c) vtel_slider_pane_g3

0x6d71,	// (0x0004d200) vtel_slider_pane_g4_ParamLimits

0x6d71,	// (0x0004d200) vtel_slider_pane_g4

0x6db3,	// (0x0004d242) vtel_slider_pane_g5_ParamLimits

0x6db3,	// (0x0004d242) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x00055d63) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x00055d63) vtel_slider_pane_g

0x0c30,	// (0x000470bf) main_gallery2_pane

0x63ae,	// (0x0004c83d) aid_size_row_itut2_dropdow_list_ParamLimits

0x63ae,	// (0x0004c83d) aid_size_row_itut2_dropdow_list

0x6430,	// (0x0004c8bf) grid_vitu2_function_top_pane_ParamLimits

0x6430,	// (0x0004c8bf) grid_vitu2_function_top_pane

0x6494,	// (0x0004c923) popup_vitu2_dropdown_list_window_ParamLimits

0x6494,	// (0x0004c923) popup_vitu2_dropdown_list_window

0x64bb,	// (0x0004c94a) popup_vitu2_match_list_window

0x6dc9,	// (0x0004d258) cell_vitu2_function_top_pane_ParamLimits

0x6dc9,	// (0x0004d258) cell_vitu2_function_top_pane

0x6de3,	// (0x0004d272) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6de3,	// (0x0004d272) cell_vitu2_function_top_pane_cp01

0x6dff,	// (0x0004d28e) cell_vitu2_function_top_wide_pane_ParamLimits

0x6dff,	// (0x0004d28e) cell_vitu2_function_top_wide_pane

0x0c30,	// (0x000470bf) bg_button_pane_cp012

0x6e1d,	// (0x0004d2ac) cell_vitu2_function_top_pane_g1

0xcca8,	// (0x00053137) bg_button_pane_cp013_ParamLimits

0xcca8,	// (0x00053137) bg_button_pane_cp013

0x6e31,	// (0x0004d2c0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e31,	// (0x0004d2c0) cell_vitu2_function_top_wide_pane_g1

0x0c30,	// (0x000470bf) bg_popup_sub_pane_cp20

0x6e49,	// (0x0004d2d8) list_vitu2_match_list_pane

0xd21f,	// (0x000536ae) bg_popup_sub_pane_cp20_g1

0xd227,	// (0x000536b6) bg_popup_sub_pane_cp20_g2

0x25cd,	// (0x00048a5c) bg_popup_sub_pane_cp20_g3

0xd22f,	// (0x000536be) bg_popup_sub_pane_cp20_g4

0x25ad,	// (0x00048a3c) bg_popup_sub_pane_cp20_g5

0xd49d,	// (0x0005392c) bg_popup_sub_pane_cp20_g6

0xd23f,	// (0x000536ce) bg_popup_sub_pane_cp20_g7

0xd247,	// (0x000536d6) bg_popup_sub_pane_cp20_g8

0xd24f,	// (0x000536de) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x00055d6e) bg_popup_sub_pane_cp20_g

0xccc4,	// (0x00053153) list_vitu2_match_list_item_pane_ParamLimits

0xccc4,	// (0x00053153) list_vitu2_match_list_item_pane

0xccd6,	// (0x00053165) list_vitu2_match_list_item_pane_t1

0xe665,	// (0x00054af4) bg_popup_sub_pane_cp21

0x1d9b,	// (0x0004822a) grid_vitu2_dropdown_list_pane

0x6e61,	// (0x0004d2f0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e61,	// (0x0004d2f0) cell_vitu2_dropdown_list_char_pane

0x6e83,	// (0x0004d312) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e83,	// (0x0004d312) cell_vitu2_dropdown_list_ctrl_pane

0xd4a5,	// (0x00053934) cell_vitu2_dropdown_list_char_pane_g1

0xd4ae,	// (0x0005393d) cell_vitu2_dropdown_list_char_pane_g2

0xd4b7,	// (0x00053946) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x00055d81) cell_vitu2_dropdown_list_char_pane_g

0x6ead,	// (0x0004d33c) cell_vitu2_dropdown_list_char_pane_t1

0x6ebb,	// (0x0004d34a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6ebb,	// (0x0004d34a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ecb,	// (0x0004d35a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ecb,	// (0x0004d35a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6edc,	// (0x0004d36b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6edc,	// (0x0004d36b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6eec,	// (0x0004d37b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6eec,	// (0x0004d37b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x126a,	// (0x000476f9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x126a,	// (0x000476f9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x00055d88) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x00055d88) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f08,	// (0x0004d397) aid_size_cell_gallery2_ParamLimits

0x6f08,	// (0x0004d397) aid_size_cell_gallery2

0x6f26,	// (0x0004d3b5) grid_gallery2_pane_ParamLimits

0x6f26,	// (0x0004d3b5) grid_gallery2_pane

0x6f40,	// (0x0004d3cf) scroll_pane_cp029_ParamLimits

0x6f40,	// (0x0004d3cf) scroll_pane_cp029

0x6f51,	// (0x0004d3e0) cell_gallery2_pane_ParamLimits

0x6f51,	// (0x0004d3e0) cell_gallery2_pane

0xd4c0,	// (0x0005394f) cell_gallery2_pane_g2

0x6fb5,	// (0x0004d444) cell_gallery2_pane_g3

0xd4c8,	// (0x00053957) cell_gallery2_pane_g4

0xd4d0,	// (0x0005395f) cell_gallery2_pane_g5

0x1d9b,	// (0x0004822a) grid_highlight_pane_cp10

0x64bb,	// (0x0004c94a) popup_vitu2_match_list_window_ParamLimits

0x64d2,	// (0x0004c961) popup_vitu2_query_window_ParamLimits

0x64d2,	// (0x0004c961) popup_vitu2_query_window

0xe665,	// (0x00054af4) bg_vitu2_candi_button_pane

0xd4a5,	// (0x00053934) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4ae,	// (0x0005393d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4b7,	// (0x00053946) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6fbd,	// (0x0004d44c) bg_button_pane_cp015

0x6fd4,	// (0x0004d463) bg_button_pane_cp016

0x6fe0,	// (0x0004d46f) bg_button_pane_cp017

0xa9fd,	// (0x00050e8c) bg_popup_sub_pane_cp22

0xd4d8,	// (0x00053967) popup_vitu2_query_window_g1

0x7021,	// (0x0004d4b0) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x00055d93) popup_vitu2_query_window_g

0x7047,	// (0x0004d4d6) popup_vitu2_query_window_t1_ParamLimits

0x7047,	// (0x0004d4d6) popup_vitu2_query_window_t1

0x707c,	// (0x0004d50b) popup_vitu2_query_window_t2_ParamLimits

0x707c,	// (0x0004d50b) popup_vitu2_query_window_t2

0x708e,	// (0x0004d51d) popup_vitu2_query_window_t3_ParamLimits

0x708e,	// (0x0004d51d) popup_vitu2_query_window_t3

0x70b6,	// (0x0004d545) popup_vitu2_query_window_t4_ParamLimits

0x70b6,	// (0x0004d545) popup_vitu2_query_window_t4

0x70ca,	// (0x0004d559) popup_vitu2_query_window_t5_ParamLimits

0x70ca,	// (0x0004d559) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x00055d9a) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x00055d9a) popup_vitu2_query_window_t

0xd34b,	// (0x000537da) main_cset_text_pane

0x6a0f,	// (0x0004ce9e) aid_area_touch_slider_ParamLimits

0x6a2b,	// (0x0004ceba) cset_slider_pane_ParamLimits

0x6a4e,	// (0x0004cedd) main_cset_slider_pane_g1_ParamLimits

0x6a63,	// (0x0004cef2) main_cset_slider_pane_g2_ParamLimits

0xd36c,	// (0x000537fb) main_cset_slider_pane_g3_ParamLimits

0xd36c,	// (0x000537fb) main_cset_slider_pane_g3

0x6a78,	// (0x0004cf07) main_cset_slider_pane_g4_ParamLimits

0x6a78,	// (0x0004cf07) main_cset_slider_pane_g4

0x6a87,	// (0x0004cf16) main_cset_slider_pane_g5_ParamLimits

0x6a87,	// (0x0004cf16) main_cset_slider_pane_g5

0x6a95,	// (0x0004cf24) main_cset_slider_pane_g6_ParamLimits

0x6a95,	// (0x0004cf24) main_cset_slider_pane_g6

0xf868,	// (0x00055cf7) main_cset_slider_pane_g_ParamLimits

0xd39c,	// (0x0005382b) main_cset_slider_pane_t1_ParamLimits

0x6b25,	// (0x0004cfb4) main_cset_slider_pane_t2_ParamLimits

0x6b3f,	// (0x0004cfce) main_cset_slider_pane_t3_ParamLimits

0x6b59,	// (0x0004cfe8) main_cset_slider_pane_t4_ParamLimits

0x6b73,	// (0x0004d002) main_cset_slider_pane_t5_ParamLimits

0x6b91,	// (0x0004d020) main_cset_slider_pane_t6_ParamLimits

0x6ba6,	// (0x0004d035) main_cset_slider_pane_t7_ParamLimits

0x6bd4,	// (0x0004d063) main_cset_slider_pane_t8_ParamLimits

0x6bd4,	// (0x0004d063) main_cset_slider_pane_t8

0x6bfc,	// (0x0004d08b) main_cset_slider_pane_t9_ParamLimits

0x6bfc,	// (0x0004d08b) main_cset_slider_pane_t9

0x6c24,	// (0x0004d0b3) main_cset_slider_pane_t10_ParamLimits

0x6c24,	// (0x0004d0b3) main_cset_slider_pane_t10

0x6c4c,	// (0x0004d0db) main_cset_slider_pane_t11_ParamLimits

0x6c4c,	// (0x0004d0db) main_cset_slider_pane_t11

0x6c76,	// (0x0004d105) main_cset_slider_pane_t12_ParamLimits

0x6c76,	// (0x0004d105) main_cset_slider_pane_t12

0x6c93,	// (0x0004d122) main_cset_slider_pane_t13_ParamLimits

0x6c93,	// (0x0004d122) main_cset_slider_pane_t13

0xf88d,	// (0x00055d1c) main_cset_slider_pane_t_ParamLimits

0xe665,	// (0x00054af4) bg_popup_sub_pane_cp011

0xd4e4,	// (0x00053973) main_cset_text_pane_g1

0xd4ec,	// (0x0005397b) main_cset_text_pane_t1

0xd4fa,	// (0x00053989) main_cset_text_pane_t2

0xd508,	// (0x00053997) main_cset_text_pane_t3

0xd516,	// (0x000539a5) main_cset_text_pane_t4

0xd524,	// (0x000539b3) main_cset_text_pane_t5

0xd532,	// (0x000539c1) main_cset_text_pane_t6

0xd540,	// (0x000539cf) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x00055da9) main_cset_text_pane_t

0xe665,	// (0x00054af4) main_cam4_burst_pane

0xe665,	// (0x00054af4) main_cam5_pane

0xd30d,	// (0x0005379c) bg_button_pane_cp019

0xd316,	// (0x000537a5) bg_button_pane_cp020

0xd378,	// (0x00053807) main_cset_slider_pane_g7_ParamLimits

0xd378,	// (0x00053807) main_cset_slider_pane_g7

0xd384,	// (0x00053813) main_cset_slider_pane_g8_ParamLimits

0xd384,	// (0x00053813) main_cset_slider_pane_g8

0x6aa9,	// (0x0004cf38) main_cset_slider_pane_g9_ParamLimits

0x6aa9,	// (0x0004cf38) main_cset_slider_pane_g9

0x6ab5,	// (0x0004cf44) main_cset_slider_pane_g10_ParamLimits

0x6ab5,	// (0x0004cf44) main_cset_slider_pane_g10

0x6ac1,	// (0x0004cf50) main_cset_slider_pane_g11_ParamLimits

0x6ac1,	// (0x0004cf50) main_cset_slider_pane_g11

0x6acd,	// (0x0004cf5c) main_cset_slider_pane_g12_ParamLimits

0x6acd,	// (0x0004cf5c) main_cset_slider_pane_g12

0x6ad9,	// (0x0004cf68) main_cset_slider_pane_g13_ParamLimits

0x6ad9,	// (0x0004cf68) main_cset_slider_pane_g13

0x6ae5,	// (0x0004cf74) main_cset_slider_pane_g14_ParamLimits

0x6ae5,	// (0x0004cf74) main_cset_slider_pane_g14

0x6af1,	// (0x0004cf80) main_cset_slider_pane_g15_ParamLimits

0x6af1,	// (0x0004cf80) main_cset_slider_pane_g15

0xd3c4,	// (0x00053853) main_cset_slider_pane_t14_ParamLimits

0xd3c4,	// (0x00053853) main_cset_slider_pane_t14

0xd3fd,	// (0x0005388c) main_cset_slider_pane_t15_ParamLimits

0xd3fd,	// (0x0005388c) main_cset_slider_pane_t15

0x7134,	// (0x0004d5c3) aid_cam4_burst_size_cell_ParamLimits

0x7134,	// (0x0004d5c3) aid_cam4_burst_size_cell

0x7154,	// (0x0004d5e3) grid_cam4_burst_pane_ParamLimits

0x7154,	// (0x0004d5e3) grid_cam4_burst_pane

0x718e,	// (0x0004d61d) linegrid_cam4_burst_pane_ParamLimits

0x718e,	// (0x0004d61d) linegrid_cam4_burst_pane

0xdbb3,	// (0x00054042) scroll_pane_cp30_ParamLimits

0xdbb3,	// (0x00054042) scroll_pane_cp30

0x71b0,	// (0x0004d63f) cell_cam4_burst_pane_ParamLimits

0x71b0,	// (0x0004d63f) cell_cam4_burst_pane

0xd54e,	// (0x000539dd) linegrid_cam4_burst_pane_g1_ParamLimits

0xd54e,	// (0x000539dd) linegrid_cam4_burst_pane_g1

0x7205,	// (0x0004d694) linegrid_cam4_burst_pane_g2_ParamLimits

0x7205,	// (0x0004d694) linegrid_cam4_burst_pane_g2

0xd55b,	// (0x000539ea) linegrid_cam4_burst_pane_g3_ParamLimits

0xd55b,	// (0x000539ea) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x00055db8) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x00055db8) linegrid_cam4_burst_pane_g

0x7216,	// (0x0004d6a5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7216,	// (0x0004d6a5) linegrid_cam4_burst_pane_g3_copy1

0xd568,	// (0x000539f7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd568,	// (0x000539f7) linegrid_cam4_burst_pane_g4

0x7234,	// (0x0004d6c3) linegrid_cam4_burst_pane_g5_ParamLimits

0x7234,	// (0x0004d6c3) linegrid_cam4_burst_pane_g5

0x7245,	// (0x0004d6d4) linegrid_cam4_burst_pane_g6_ParamLimits

0x7245,	// (0x0004d6d4) linegrid_cam4_burst_pane_g6

0xd575,	// (0x00053a04) linegrid_cam4_burst_pane_g7_ParamLimits

0xd575,	// (0x00053a04) linegrid_cam4_burst_pane_g7

0x725c,	// (0x0004d6eb) cell_cam4_burst_pane_g1

0xd58e,	// (0x00053a1d) main_cam5_pane_t1_ParamLimits

0xd58e,	// (0x00053a1d) main_cam5_pane_t1

0xd5a0,	// (0x00053a2f) main_cam5_pane_t2_ParamLimits

0xd5a0,	// (0x00053a2f) main_cam5_pane_t2

0xd5b2,	// (0x00053a41) main_cam5_pane_t3_ParamLimits

0xd5b2,	// (0x00053a41) main_cam5_pane_t3

0xd5c4,	// (0x00053a53) main_cam5_pane_t4_ParamLimits

0xd5c4,	// (0x00053a53) main_cam5_pane_t4

0xd5dc,	// (0x00053a6b) main_cam5_pane_t5_ParamLimits

0xd5dc,	// (0x00053a6b) main_cam5_pane_t5

0xd5f0,	// (0x00053a7f) main_cam5_pane_t6_ParamLimits

0xd5f0,	// (0x00053a7f) main_cam5_pane_t6

0xd604,	// (0x00053a93) main_cam5_pane_t7_ParamLimits

0xd604,	// (0x00053a93) main_cam5_pane_t7

0xd616,	// (0x00053aa5) main_cam5_pane_t8_ParamLimits

0xd616,	// (0x00053aa5) main_cam5_pane_t8

0xd634,	// (0x00053ac3) main_cam5_pane_t9_ParamLimits

0xd634,	// (0x00053ac3) main_cam5_pane_t9

0xd646,	// (0x00053ad5) main_cam5_pane_t10_ParamLimits

0xd646,	// (0x00053ad5) main_cam5_pane_t10

0xd658,	// (0x00053ae7) main_cam5_pane_t11_ParamLimits

0xd658,	// (0x00053ae7) main_cam5_pane_t11

0xd66c,	// (0x00053afb) main_cam5_pane_t12_ParamLimits

0xd66c,	// (0x00053afb) main_cam5_pane_t12

0xd683,	// (0x00053b12) main_cam5_pane_t13_ParamLimits

0xd683,	// (0x00053b12) main_cam5_pane_t13

0x000c,

0xf935,	// (0x00055dc4) main_cam5_pane_t_ParamLimits

0xf935,	// (0x00055dc4) main_cam5_pane_t

0x0bf0,	// (0x0004707f) popup_scut_keymap_window_ParamLimits

0x0bf0,	// (0x0004707f) popup_scut_keymap_window

0x726f,	// (0x0004d6fe) aid_size_cell_brow_shortcut

0x1d9b,	// (0x0004822a) bg_popup_window_pane_cp010

0x727b,	// (0x0004d70a) grid_scut_pane

0x7287,	// (0x0004d716) cell_scut_pane_ParamLimits

0x7287,	// (0x0004d716) cell_scut_pane

0x72a0,	// (0x0004d72f) cell_scut_pane_g1

0xd6a6,	// (0x00053b35) cell_scut_pane_t1

0xd6b5,	// (0x00053b44) cell_scut_pane_t2

0x72a9,	// (0x0004d738) cell_scut_pane_t3

0x0002,

0xf950,	// (0x00055ddf) cell_scut_pane_t

0x51e0,	// (0x0004b66f) main_mup3_pane_g8_ParamLimits

0x51e0,	// (0x0004b66f) main_mup3_pane_g8

0x63c8,	// (0x0004c857) area_vitu2_query_pane_ParamLimits

0x63c8,	// (0x0004c857) area_vitu2_query_pane

0x6fec,	// (0x0004d47b) input_focus_pane_cp08

0xd6c4,	// (0x00053b53) area_vitu2_query_pane_g1

0x72b7,	// (0x0004d746) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x00055de6) area_vitu2_query_pane_g

0x72cc,	// (0x0004d75b) area_vitu2_query_pane_t1_ParamLimits

0x72cc,	// (0x0004d75b) area_vitu2_query_pane_t1

0x72e0,	// (0x0004d76f) area_vitu2_query_pane_t2_ParamLimits

0x72e0,	// (0x0004d76f) area_vitu2_query_pane_t2

0x72f4,	// (0x0004d783) area_vitu2_query_pane_t3_ParamLimits

0x72f4,	// (0x0004d783) area_vitu2_query_pane_t3

0xd6d0,	// (0x00053b5f) area_vitu2_query_pane_t4_ParamLimits

0xd6d0,	// (0x00053b5f) area_vitu2_query_pane_t4

0xd6f8,	// (0x00053b87) area_vitu2_query_pane_t5_ParamLimits

0xd6f8,	// (0x00053b87) area_vitu2_query_pane_t5

0xd720,	// (0x00053baf) area_vitu2_query_pane_t6_ParamLimits

0xd720,	// (0x00053baf) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x00055deb) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x00055deb) area_vitu2_query_pane_t

0x7320,	// (0x0004d7af) bg_button_pane_cp018

0x732c,	// (0x0004d7bb) bg_button_pane_cp021

0x7338,	// (0x0004d7c7) bg_button_pane_cp022

0x7363,	// (0x0004d7f2) input_focus_pane_cp09

0x3ab2,	// (0x00049f41) aid_size_touch_mv_arrow_left

0x3adb,	// (0x00049f6a) aid_size_touch_mv_arrow_right

0x6b09,	// (0x0004cf98) main_cset_slider_pane_g16_ParamLimits

0x6b09,	// (0x0004cf98) main_cset_slider_pane_g16

0x6b17,	// (0x0004cfa6) main_cset_slider_pane_g17_ParamLimits

0x6b17,	// (0x0004cfa6) main_cset_slider_pane_g17

0x725c,	// (0x0004d6eb) cell_cam4_burst_pane_g1_ParamLimits

0xe665,	// (0x00054af4) compa_mode_pane

0x6d09,	// (0x0004d198) popup_vtel_slider_window_g3_ParamLimits

0x6d09,	// (0x0004d198) popup_vtel_slider_window_g3

0x6d20,	// (0x0004d1af) popup_vtel_slider_window_g4_ParamLimits

0x6d20,	// (0x0004d1af) popup_vtel_slider_window_g4

0x6d37,	// (0x0004d1c6) popup_vtel_slider_window_t1_ParamLimits

0x6d37,	// (0x0004d1c6) popup_vtel_slider_window_t1

0xe665,	// (0x00054af4) main_cl_pane

0xbcaa,	// (0x00052139) popup_imed_adjust2_window_ParamLimits

0xa9fd,	// (0x00050e8c) bg_tb_trans_pane_cp05_ParamLimits

0xc638,	// (0x00052ac7) popup_imed_adjust2_window_g1_ParamLimits

0xc647,	// (0x00052ad6) popup_imed_adjust2_window_g2_ParamLimits

0xc647,	// (0x00052ad6) popup_imed_adjust2_window_g2

0xc653,	// (0x00052ae2) popup_imed_adjust2_window_g3_ParamLimits

0xc653,	// (0x00052ae2) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x00055b66) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x00055b66) popup_imed_adjust2_window_g

0xc65f,	// (0x00052aee) popup_imed_adjust2_window_t1_ParamLimits

0xc677,	// (0x00052b06) slider_imed_adjust_pane_ParamLimits

0xc68b,	// (0x00052b1a) slider_imed_adjust_pane_g1_ParamLimits

0xc69b,	// (0x00052b2a) slider_imed_adjust_pane_g2_ParamLimits

0xc6ab,	// (0x00052b3a) slider_imed_adjust_pane_g3_ParamLimits

0xc6bc,	// (0x00052b4b) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x00055b6d) slider_imed_adjust_pane_g_ParamLimits

0x6148,	// (0x0004c5d7) aid_touch_area_cam4_ParamLimits

0x6148,	// (0x0004c5d7) aid_touch_area_cam4

0xcbb9,	// (0x00053048) battery_pane_cp01

0x621b,	// (0x0004c6aa) main_camera4_pane_g6_ParamLimits

0x621b,	// (0x0004c6aa) main_camera4_pane_g6

0x6245,	// (0x0004c6d4) main_camera4_pane_t2_ParamLimits

0x6245,	// (0x0004c6d4) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x00055c6a) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x00055c6a) main_camera4_pane_t

0x627a,	// (0x0004c709) aid_touch_area_vid4_ParamLimits

0x627a,	// (0x0004c709) aid_touch_area_vid4

0x62d1,	// (0x0004c760) main_video4_pane_g5_ParamLimits

0x62d1,	// (0x0004c760) main_video4_pane_g5

0x62f7,	// (0x0004c786) vid4_progress_pane_ParamLimits

0x62f7,	// (0x0004c786) vid4_progress_pane

0xd390,	// (0x0005381f) main_cset_slider_pane_g18_ParamLimits

0xd390,	// (0x0005381f) main_cset_slider_pane_g18

0xd582,	// (0x00053a11) cell_cam4_burst_pane_g2_ParamLimits

0xd582,	// (0x00053a11) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x00055dbf) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x00055dbf) cell_cam4_burst_pane_g

0x13b0,	// (0x0004783f) bg_cl_pane_ParamLimits

0x13b0,	// (0x0004783f) bg_cl_pane

0x7374,	// (0x0004d803) cl_header_pane_ParamLimits

0x7374,	// (0x0004d803) cl_header_pane

0x7388,	// (0x0004d817) cl_listscroll_pane_ParamLimits

0x7388,	// (0x0004d817) cl_listscroll_pane

0xd76c,	// (0x00053bfb) bg_cl_pane_g1

0xd774,	// (0x00053c03) bg_cl_pane_g2

0xd77c,	// (0x00053c0b) bg_cl_pane_g3

0xd784,	// (0x00053c13) bg_cl_pane_g4

0xd78c,	// (0x00053c1b) bg_cl_pane_g5

0xd794,	// (0x00053c23) bg_cl_pane_g6

0xd79c,	// (0x00053c2b) bg_cl_pane_g7

0xd7a4,	// (0x00053c33) bg_cl_pane_g8

0xd7ac,	// (0x00053c3b) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x00055dfa) bg_cl_pane_g

0x7398,	// (0x0004d827) aid_height_cl_leading_ParamLimits

0x7398,	// (0x0004d827) aid_height_cl_leading

0x73a4,	// (0x0004d833) aid_height_cl_text_ParamLimits

0x73a4,	// (0x0004d833) aid_height_cl_text

0x0c30,	// (0x000470bf) bg_cl_header_pane_ParamLimits

0x0c30,	// (0x000470bf) bg_cl_header_pane

0x73c3,	// (0x0004d852) cl_header_pane_g1_ParamLimits

0x73c3,	// (0x0004d852) cl_header_pane_g1

0x73d9,	// (0x0004d868) cl_header_pane_t1_ParamLimits

0x73d9,	// (0x0004d868) cl_header_pane_t1

0xd7b4,	// (0x00053c43) cl_list_pane

0xd363,	// (0x000537f2) hc_scroll_pane_cp01

0x25ad,	// (0x00048a3c) bg_cl_header_pane_g1

0xd21f,	// (0x000536ae) bg_cl_header_pane_g2

0x25cd,	// (0x00048a5c) bg_cl_header_pane_g3

0xd22f,	// (0x000536be) bg_cl_header_pane_g4

0xd227,	// (0x000536b6) bg_cl_header_pane_g5

0xd49d,	// (0x0005392c) bg_cl_header_pane_g6

0xd247,	// (0x000536d6) bg_cl_header_pane_g7

0xd24f,	// (0x000536de) bg_cl_header_pane_g8

0xd23f,	// (0x000536ce) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x00055e0d) bg_cl_header_pane_g

0x73f2,	// (0x0004d881) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73f2,	// (0x0004d881) hc_cl_list_double_graphic_heading_pane

0x7405,	// (0x0004d894) hc_cl_list_single_graphic_pane_ParamLimits

0x7405,	// (0x0004d894) hc_cl_list_single_graphic_pane

0x741d,	// (0x0004d8ac) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x741d,	// (0x0004d8ac) hc_cl_list_single_graphic_pane_g1

0x7429,	// (0x0004d8b8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7429,	// (0x0004d8b8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x00055e20) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x00055e20) hc_cl_list_single_graphic_pane_g

0x743d,	// (0x0004d8cc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x743d,	// (0x0004d8cc) hc_cl_list_single_graphic_pane_t1

0x741d,	// (0x0004d8ac) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x741d,	// (0x0004d8ac) hc_cl_list_double_graphic_heading_pane_g1

0x7452,	// (0x0004d8e1) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7452,	// (0x0004d8e1) hc_cl_list_double_graphic_heading_pane_g2

0x7466,	// (0x0004d8f5) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7466,	// (0x0004d8f5) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x00055e25) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x00055e25) hc_cl_list_double_graphic_heading_pane_g

0x747a,	// (0x0004d909) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x747a,	// (0x0004d909) hc_cl_list_double_graphic_heading_pane_t1

0x748f,	// (0x0004d91e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x748f,	// (0x0004d91e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x00055e2c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x00055e2c) hc_cl_list_double_graphic_heading_pane_t

0xccec,	// (0x0005317b) vid4_progress_pane_g1

0xccfc,	// (0x0005318b) vid4_progress_pane_g2

0x74a4,	// (0x0004d933) vid4_progress_pane_g3

0xcd0c,	// (0x0005319b) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x00055e31) vid4_progress_pane_g

0x74b6,	// (0x0004d945) vid4_progress_pane_t1

0xcd2a,	// (0x000531b9) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x00055e3c) vid4_progress_pane_t

0x74d0,	// (0x0004d95f) wait_bar_pane_cp07

0xbf76,	// (0x00052405) blid_firmament_pane_ParamLimits

0xbfb9,	// (0x00052448) popup_blid_sat_info2_window_g1

0xbfdd,	// (0x0005246c) popup_blid_sat_info2_window_t3

0xbfeb,	// (0x0005247a) popup_blid_sat_info2_window_t4

0xbff9,	// (0x00052488) popup_blid_sat_info2_window_t5

0xc007,	// (0x00052496) popup_blid_sat_info2_window_t6

0xc017,	// (0x000524a6) popup_blid_sat_info2_window_t7

0xc025,	// (0x000524b4) popup_blid_sat_info2_window_t8

0xc033,	// (0x000524c2) popup_blid_sat_info2_window_t9

0xc041,	// (0x000524d0) popup_blid_sat_info2_window_t10

0xc108,	// (0x00052597) aid_firma_cardinal_ParamLimits

0xc11c,	// (0x000525ab) blid_firmament_pane_t1_ParamLimits

0xc133,	// (0x000525c2) blid_firmament_pane_t2_ParamLimits

0xc14a,	// (0x000525d9) blid_firmament_pane_t3_ParamLimits

0xc161,	// (0x000525f0) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x00055a5f) blid_firmament_pane_t_ParamLimits

0xc178,	// (0x00052607) blid_sat_info_pane_ParamLimits

0x0c30,	// (0x000470bf) main_cam_set_pane_ParamLimits

0x5997,	// (0x0004be26) aid_size_cell_colour_35_ParamLimits

0x59b7,	// (0x0004be46) aid_size_cell_colour_112_ParamLimits

0x59d7,	// (0x0004be66) aid_size_cell_effect_ParamLimits

0xa9fd,	// (0x00050e8c) bg_tb_trans_pane_cp02_ParamLimits

0x59f7,	// (0x0004be86) heading_imed_pane_ParamLimits

0x5a03,	// (0x0004be92) listscroll_imed_pane_ParamLimits

0xb3db,	// (0x0005186a) popup_call2_audio_first_window_g5_ParamLimits

0xb3db,	// (0x0005186a) popup_call2_audio_first_window_g5

0x5d4b,	// (0x0004c1da) aid_size_touch_image3_arrow_left_ParamLimits

0x5d4b,	// (0x0004c1da) aid_size_touch_image3_arrow_left

0x5d77,	// (0x0004c206) aid_size_touch_image3_arrow_right_ParamLimits

0x5d77,	// (0x0004c206) aid_size_touch_image3_arrow_right

0xcd43,	// (0x000531d2) vid4_progress_pane_t3

0x5b80,	// (0x0004c00f) main_hwr_training_symbol_option_pane_ParamLimits

0x5b80,	// (0x0004c00f) main_hwr_training_symbol_option_pane

0xc7e0,	// (0x00052c6f) popup_hwr_training_preview_window_ParamLimits

0xc7e0,	// (0x00052c6f) popup_hwr_training_preview_window

0x5ba0,	// (0x0004c02f) hwr_training_navi_pane_g5_ParamLimits

0x5ba0,	// (0x0004c02f) hwr_training_navi_pane_g5

0xd20d,	// (0x0005369c) popup_char_count_window

0x0c30,	// (0x000470bf) bg_popup_sub_pane_cp20_ParamLimits

0x6e49,	// (0x0004d2d8) list_vitu2_match_list_pane_ParamLimits

0x6e55,	// (0x0004d2e4) vitu2_page_scroll_pane_ParamLimits

0x6e55,	// (0x0004d2e4) vitu2_page_scroll_pane

0xd7c6,	// (0x00053c55) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7c6,	// (0x00053c55) list_single_hwr_training_symbol_option_pane

0xd7d9,	// (0x00053c68) list_single_hwr_training_symbol_option_pane_g1

0xd7e1,	// (0x00053c70) list_single_hwr_training_symbol_option_pane_t1

0xd7ef,	// (0x00053c7e) bg_button_pane_cp023

0xd7f8,	// (0x00053c87) bg_button_pane_cp024

0xd82b,	// (0x00053cba) vitu2_page_scroll_pane_g1

0xd833,	// (0x00053cc2) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x00055e43) vitu2_page_scroll_pane_g

0xd83b,	// (0x00053cca) vitu2_page_scroll_pane_t1

0xd84a,	// (0x00053cd9) popup_char_count_window_g1

0xd853,	// (0x00053ce2) popup_char_count_window_g2

0xd85c,	// (0x00053ceb) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x00055e48) popup_char_count_window_g

0xd865,	// (0x00053cf4) popup_char_count_window_t1

0xe665,	// (0x00054af4) main_vded2_pane

0xc624,	// (0x00052ab3) aid_size_cell_imed_line

0xc62e,	// (0x00052abd) grid_imed_line_width_pane

0xcc73,	// (0x00053102) vid4_indicators_pane_g4

0xd873,	// (0x00053d02) cell_imed_line_width_pane_ParamLimits

0xd873,	// (0x00053d02) cell_imed_line_width_pane

0xd889,	// (0x00053d18) cell_imed_line_width_pane_g1

0xd892,	// (0x00053d21) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x00055e4f) cell_imed_line_width_pane_g

0x74e3,	// (0x0004d972) main_vded2_pane_g1_ParamLimits

0x74e3,	// (0x0004d972) main_vded2_pane_g1

0x74fe,	// (0x0004d98d) main_vded2_pane_g2_ParamLimits

0x74fe,	// (0x0004d98d) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x00055e54) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x00055e54) main_vded2_pane_g

0x7510,	// (0x0004d99f) vded2_slider_pane_ParamLimits

0x7510,	// (0x0004d99f) vded2_slider_pane

0x7520,	// (0x0004d9af) aid_size_touch_vded2_end

0x752a,	// (0x0004d9b9) aid_size_touch_vded2_playhead

0xd89a,	// (0x00053d29) aid_size_touch_vded2_start

0xd8a2,	// (0x00053d31) vded2_slider_bg_pane

0xd8ab,	// (0x00053d3a) vded2_slider_pane_g1

0xd8b4,	// (0x00053d43) vded2_slider_pane_g2

0x7534,	// (0x0004d9c3) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x00055e59) vded2_slider_pane_g

0xd8bc,	// (0x00053d4b) vded2_slider_bg_pane_g1

0xd8c5,	// (0x00053d54) vded2_slider_bg_pane_g2

0xd8ce,	// (0x00053d5d) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x00055e60) vded2_slider_bg_pane_g

0x3edb,	// (0x0004a36a) aid_postcard_touch_down_pane_ParamLimits

0x3edb,	// (0x0004a36a) aid_postcard_touch_down_pane

0x3ef3,	// (0x0004a382) aid_postcard_touch_up_pane_ParamLimits

0x3ef3,	// (0x0004a382) aid_postcard_touch_up_pane

0xe665,	// (0x00054af4) main_blid2_pane

0xbc8c,	// (0x0005211b) popup_blid2_search_window

0xe665,	// (0x00054af4) blid2_gps_pane

0xe665,	// (0x00054af4) blid2_navig_pane

0xe665,	// (0x00054af4) blid2_search_pane

0xe665,	// (0x00054af4) blid2_tripm_pane

0x753f,	// (0x0004d9ce) blid2_search_pane_g1_ParamLimits

0x753f,	// (0x0004d9ce) blid2_search_pane_g1

0x7552,	// (0x0004d9e1) blid2_search_pane_t1_ParamLimits

0x7552,	// (0x0004d9e1) blid2_search_pane_t1

0x7564,	// (0x0004d9f3) aid_size_cell_blid2_gps_ParamLimits

0x7564,	// (0x0004d9f3) aid_size_cell_blid2_gps

0x757c,	// (0x0004da0b) blid2_gps_pane_g1_ParamLimits

0x757c,	// (0x0004da0b) blid2_gps_pane_g1

0x7590,	// (0x0004da1f) grid_blid2_satellite_pane_ParamLimits

0x7590,	// (0x0004da1f) grid_blid2_satellite_pane

0x75a8,	// (0x0004da37) blid2_navig_pane_g1_ParamLimits

0x75a8,	// (0x0004da37) blid2_navig_pane_g1

0x75b4,	// (0x0004da43) blid2_navig_pane_t1_ParamLimits

0x75b4,	// (0x0004da43) blid2_navig_pane_t1

0x75cf,	// (0x0004da5e) blid2_navig_pane_t2_ParamLimits

0x75cf,	// (0x0004da5e) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x00055e67) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x00055e67) blid2_navig_pane_t

0x75ea,	// (0x0004da79) blid2_navig_ring_pane_ParamLimits

0x75ea,	// (0x0004da79) blid2_navig_ring_pane

0x7605,	// (0x0004da94) blid2_speed_pane_ParamLimits

0x7605,	// (0x0004da94) blid2_speed_pane

0x7611,	// (0x0004daa0) blid2_tripm_pane_g1_ParamLimits

0x7611,	// (0x0004daa0) blid2_tripm_pane_g1

0x762c,	// (0x0004dabb) blid2_tripm_pane_g2_ParamLimits

0x762c,	// (0x0004dabb) blid2_tripm_pane_g2

0x763f,	// (0x0004dace) blid2_tripm_pane_g3_ParamLimits

0x763f,	// (0x0004dace) blid2_tripm_pane_g3

0x7650,	// (0x0004dadf) blid2_tripm_pane_g4_ParamLimits

0x7650,	// (0x0004dadf) blid2_tripm_pane_g4

0x7661,	// (0x0004daf0) blid2_tripm_pane_g5_ParamLimits

0x7661,	// (0x0004daf0) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x00055e6c) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x00055e6c) blid2_tripm_pane_g

0x7687,	// (0x0004db16) blid2_tripm_pane_t1_ParamLimits

0x7687,	// (0x0004db16) blid2_tripm_pane_t1

0x76a0,	// (0x0004db2f) blid2_tripm_pane_t2_ParamLimits

0x76a0,	// (0x0004db2f) blid2_tripm_pane_t2

0x76b9,	// (0x0004db48) blid2_tripm_pane_t3_ParamLimits

0x76b9,	// (0x0004db48) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x00055e79) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x00055e79) blid2_tripm_pane_t

0x7700,	// (0x0004db8f) cell_blid2_satellite_pane_ParamLimits

0x7700,	// (0x0004db8f) cell_blid2_satellite_pane

0x771c,	// (0x0004dbab) cell_blid2_satellite_pane_g1

0xd8d7,	// (0x00053d66) cell_blid2_satellite_pane_t1

0x133e,	// (0x000477cd) blid2_speed_pane_g1

0xd8e5,	// (0x00053d74) blid2_speed_pane_t1

0xd8f3,	// (0x00053d82) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x00055e82) blid2_speed_pane_t

0x133e,	// (0x000477cd) blid2_navig_ring_pane_g1

0x7725,	// (0x0004dbb4) blid2_navig_ring_pane_g2

0x772d,	// (0x0004dbbc) blid2_navig_ring_pane_g3

0x7735,	// (0x0004dbc4) blid2_navig_ring_pane_g4

0x773d,	// (0x0004dbcc) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x00055e87) blid2_navig_ring_pane_g

0xe665,	// (0x00054af4) bg_popup_window_pane_cp011

0xd901,	// (0x00053d90) popup_blid2_search_window_g1

0xd909,	// (0x00053d98) popup_blid2_search_window_t1

0xd917,	// (0x00053da6) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x00055e92) popup_blid2_search_window_t

0x246d,	// (0x000488fc) main_browser_pane_g1

0x13b0,	// (0x0004783f) main_browser_pane_ParamLimits

0x0c30,	// (0x000470bf) bg_button_pane_cp011_ParamLimits

0x66d9,	// (0x0004cb68) cell_vitu2_function_pane_g1_ParamLimits

0xa9fd,	// (0x00050e8c) bg_popup_sub_pane_cp22_ParamLimits

0x6fec,	// (0x0004d47b) input_focus_pane_cp08_ParamLimits

0x7008,	// (0x0004d497) popup_vitu2_query_button_pane_ParamLimits

0x7008,	// (0x0004d497) popup_vitu2_query_button_pane

0x7017,	// (0x0004d4a6) popup_vitu2_query_input_button_pane

0xd4d8,	// (0x00053967) popup_vitu2_query_window_g1_ParamLimits

0x7021,	// (0x0004d4b0) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x00055d93) popup_vitu2_query_window_g_ParamLimits

0xe665,	// (0x00054af4) bg_button_pane_cp026

0x7745,	// (0x0004dbd4) popup_vitu2_query_input_button_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp025

0xd925,	// (0x00053db4) popup_vitu2_query_button_pane_t1

0x4e3c,	// (0x0004b2cb) main_mp3_pane_t6

0x4e4a,	// (0x0004b2d9) popup_slider_window_cp01

0xcbd7,	// (0x00053066) cam4_battery_pane

0xcc2c,	// (0x000530bb) cam4_battery_pane_cp02

0xcce4,	// (0x00053173) cam4_battery_pane_cp01

0xcce4,	// (0x00053173) cam4_battery_pane_cp03

0x133e,	// (0x000477cd) cam4_battery_pane_g1

0xd933,	// (0x00053dc2) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x00055e97) cam4_battery_pane_g

0xc04f,	// (0x000524de) popup_blid_sat_info2_window_t11

0x3ab2,	// (0x00049f41) aid_size_touch_mv_arrow_left_ParamLimits

0x3adb,	// (0x00049f6a) aid_size_touch_mv_arrow_right_ParamLimits

0xa872,	// (0x00050d01) navi_pane_g1_ParamLimits

0x3b1a,	// (0x00049fa9) navi_pane_g2_ParamLimits

0x3b48,	// (0x00049fd7) navi_pane_g3_ParamLimits

0xf30c,	// (0x0005579b) navi_pane_g_ParamLimits

0x3ba2,	// (0x0004a031) navi_pane_mv_t1_ParamLimits

0x5a0f,	// (0x0004be9e) grid_imed_effect_pane_ParamLimits

0x202d,	// (0x000484bc) aid_placing_vt_slider_lsc

0x203c,	// (0x000484cb) aid_placing_vt_slider_prt

0x0c30,	// (0x000470bf) bg_tb_trans_pane_cp01_ParamLimits

0xc2b7,	// (0x00052746) popup_image_details_window_g1_ParamLimits

0xc2ca,	// (0x00052759) popup_image_details_window_g2_ParamLimits

0xc2df,	// (0x0005276e) popup_image_details_window_g3_ParamLimits

0xc2df,	// (0x0005276e) popup_image_details_window_g3

0xf610,	// (0x00055a9f) popup_image_details_window_g_ParamLimits

0xc2f3,	// (0x00052782) popup_image_details_window_t1_ParamLimits

0xc305,	// (0x00052794) popup_image_details_window_t2_ParamLimits

0xc31e,	// (0x000527ad) popup_image_details_window_t3_ParamLimits

0xc332,	// (0x000527c1) popup_image_details_window_t4_ParamLimits

0xc34d,	// (0x000527dc) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x00055aa6) popup_image_details_window_t_ParamLimits

0x73b0,	// (0x0004d83f) cl_header_name_pane_ParamLimits

0x73b0,	// (0x0004d83f) cl_header_name_pane

0x774d,	// (0x0004dbdc) cl_header_name_pane_t1_ParamLimits

0x774d,	// (0x0004dbdc) cl_header_name_pane_t1

0x776e,	// (0x0004dbfd) cl_header_name_pane_t2_ParamLimits

0x776e,	// (0x0004dbfd) cl_header_name_pane_t2

0x77b0,	// (0x0004dc3f) cl_header_name_pane_t3_ParamLimits

0x77b0,	// (0x0004dc3f) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x00055e9c) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x00055e9c) cl_header_name_pane_t

0x3b73,	// (0x0004a002) navi_pane_mv_g2_ParamLimits

0xd1a9,	// (0x00053638) field_vitu2_entry_pane_g1_ParamLimits

0xd1b5,	// (0x00053644) field_vitu2_entry_pane_g2_ParamLimits

0xa9db,	// (0x00050e6a) field_vitu2_entry_pane_g3_ParamLimits

0xa9db,	// (0x00050e6a) field_vitu2_entry_pane_g3

0xf80d,	// (0x00055c9c) field_vitu2_entry_pane_g_ParamLimits

0x6569,	// (0x0004c9f8) cell_vitu2_itu_pane_g1_ParamLimits

0x6581,	// (0x0004ca10) cell_vitu2_itu_pane_g2_ParamLimits

0x6581,	// (0x0004ca10) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x00055ca8) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x00055ca8) cell_vitu2_itu_pane_g

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp05_ParamLimits

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp05

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp03

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp04

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp10_ParamLimits

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp10

0x734d,	// (0x0004d7dc) bg_vkb2_func_pane_cp08

0x7320,	// (0x0004d7af) bg_vkb2_func_pane_cp06

0x732c,	// (0x0004d7bb) bg_vkb2_func_pane_cp07

0xd801,	// (0x00053c90) bg_vkb2_func_pane_cp11_ParamLimits

0xd801,	// (0x00053c90) bg_vkb2_func_pane_cp11

0xd816,	// (0x00053ca5) bg_vkb2_func_pane_cp12_ParamLimits

0xd816,	// (0x00053ca5) bg_vkb2_func_pane_cp12

0xe665,	// (0x00054af4) bg_vkb2_func_pane_cp09

0xd21f,	// (0x000536ae) bg_vkb2_func_pane_g1

0x25cd,	// (0x00048a5c) bg_vkb2_func_pane_g2

0xd227,	// (0x000536b6) bg_vkb2_func_pane_g3

0xd22f,	// (0x000536be) bg_vkb2_func_pane_g4

0xd49d,	// (0x0005392c) bg_vkb2_func_pane_g5

0xd247,	// (0x000536d6) bg_vkb2_func_pane_g6

0xd24f,	// (0x000536de) bg_vkb2_func_pane_g7

0xd23f,	// (0x000536ce) bg_vkb2_func_pane_g8

0x25ad,	// (0x00048a3c) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x00055ea3) bg_vkb2_func_pane_g

0x7675,	// (0x0004db04) blid2_tripm_pane_g6_ParamLimits

0x7675,	// (0x0004db04) blid2_tripm_pane_g6

0xd0ea,	// (0x00053579) mp4_progress_pane_g1

0x76ec,	// (0x0004db7b) blid2_tripm_values_pane_ParamLimits

0x76ec,	// (0x0004db7b) blid2_tripm_values_pane

0x77e1,	// (0x0004dc70) blid2_tripm_values_pane_t1

0x77ef,	// (0x0004dc7e) blid2_tripm_values_pane_t2

0xd93d,	// (0x00053dcc) blid2_tripm_values_pane_t3

0x77fd,	// (0x0004dc8c) blid2_tripm_values_pane_t4

0x780b,	// (0x0004dc9a) blid2_tripm_values_pane_t5

0x7819,	// (0x0004dca8) blid2_tripm_values_pane_t6

0xd94b,	// (0x00053dda) blid2_tripm_values_pane_t7

0x7827,	// (0x0004dcb6) blid2_tripm_values_pane_t8

0x7835,	// (0x0004dcc4) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x00055eb6) blid2_tripm_values_pane_t

0x2076,	// (0x00048505) call_video_pane_t1_ParamLimits

0x2090,	// (0x0004851f) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00055649) call_video_pane_t_ParamLimits

0x0477,	// (0x00046906) msg_header_pane_g1_ParamLimits

0xaad3,	// (0x00050f62) msg_header_pane_g2_ParamLimits

0xaad3,	// (0x00050f62) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x00055839) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x00055839) msg_header_pane_g

0x13b0,	// (0x0004783f) main_clock2_pane_ParamLimits

0x5707,	// (0x0004bb96) grid_clock2_toolbar_pane_ParamLimits

0x5707,	// (0x0004bb96) grid_clock2_toolbar_pane

0x5707,	// (0x0004bb96) listscroll_clock2_pane_ParamLimits

0x5707,	// (0x0004bb96) listscroll_clock2_pane

0x57e3,	// (0x0004bc72) main_clock2_pane_t3_ParamLimits

0x57e3,	// (0x0004bc72) main_clock2_pane_t3

0x5804,	// (0x0004bc93) main_clock2_pane_t4_ParamLimits

0x5804,	// (0x0004bc93) main_clock2_pane_t4

0xd959,	// (0x00053de8) cell_clock2_toolbar_pane

0xd961,	// (0x00053df0) cell_clock2_toolbar_pane_cp01

0xd961,	// (0x00053df0) cell_clock2_toolbar_pane_cp02

0xd969,	// (0x00053df8) cell_clock2_toolbar_pane_cp03

0xd971,	// (0x00053e00) list_clock2_pane

0xa7d8,	// (0x00050c67) scroll_pane_cp10

0xd979,	// (0x00053e08) list_single_clock2_pane_ParamLimits

0xd979,	// (0x00053e08) list_single_clock2_pane

0x1d9b,	// (0x0004822a) list_highlight_pane_cp08

0xd986,	// (0x00053e15) list_single_clock2_pane_t1

0xd994,	// (0x00053e23) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x00055ec9) list_single_clock2_pane_t

0xe665,	// (0x00054af4) bg_button_pane_cp10

0xd9a2,	// (0x00053e31) cell_clock2_toolbar_pane_g1

0x3e67,	// (0x0004a2f6) aid_main_viewer_pane_g1_ParamLimits

0x3e67,	// (0x0004a2f6) aid_main_viewer_pane_g1

0x3e75,	// (0x0004a304) aid_main_viewer_pane_g2_ParamLimits

0x3e75,	// (0x0004a304) aid_main_viewer_pane_g2

0x3e83,	// (0x0004a312) aid_main_viewer_pane_g3_ParamLimits

0x3e83,	// (0x0004a312) aid_main_viewer_pane_g3

0x3e92,	// (0x0004a321) aid_main_viewer_pane_g4_ParamLimits

0x3e92,	// (0x0004a321) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0005584a) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0005584a) aid_main_viewer_pane_g

0x477d,	// (0x0004ac0c) main_calc_pane_ParamLimits

0x4791,	// (0x0004ac20) main_dialer2_pane_ParamLimits

0xe665,	// (0x00054af4) main_cam6_pane

0xe665,	// (0x00054af4) main_vid6_pane

0x5713,	// (0x0004bba2) listscroll_gen_pane_cp06_ParamLimits

0x5713,	// (0x0004bba2) listscroll_gen_pane_cp06

0x5825,	// (0x0004bcb4) main_clock2_pane_t5_ParamLimits

0x5825,	// (0x0004bcb4) main_clock2_pane_t5

0x5883,	// (0x0004bd12) aid_call2_pane_cp10_ParamLimits

0x5895,	// (0x0004bd24) aid_call_pane_cp10_ParamLimits

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58a7,	// (0x0004bd36) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58a7,	// (0x0004bd36) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa847,	// (0x00050cd6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x00055b5b) popup_clock_analogue_window_cp10_g_ParamLimits

0x58bd,	// (0x0004bd4c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd154,	// (0x000535e3) cell_dialer2_keypad_pane_g2_ParamLimits

0xd154,	// (0x000535e3) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x00055c3b) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x00055c3b) cell_dialer2_keypad_pane_g

0x1348,	// (0x000477d7) cell_dialer2_keypad_pane_t1

0x6a01,	// (0x0004ce90) main_cset_text2_pane_ParamLimits

0x6a01,	// (0x0004ce90) main_cset_text2_pane

0xd6c4,	// (0x00053b53) area_vitu2_query_pane_g1_ParamLimits

0x72b7,	// (0x0004d746) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x00055de6) area_vitu2_query_pane_g_ParamLimits

0xd748,	// (0x00053bd7) area_vitu2_query_pane_t7_ParamLimits

0xd748,	// (0x00053bd7) area_vitu2_query_pane_t7

0x7320,	// (0x0004d7af) bg_button_pane_cp018_ParamLimits

0x732c,	// (0x0004d7bb) bg_button_pane_cp021_ParamLimits

0x7338,	// (0x0004d7c7) bg_button_pane_cp022_ParamLimits

0x734d,	// (0x0004d7dc) bg_vkb2_func_pane_cp08_ParamLimits

0x7320,	// (0x0004d7af) bg_vkb2_func_pane_cp06_ParamLimits

0x732c,	// (0x0004d7bb) bg_vkb2_func_pane_cp07_ParamLimits

0x7363,	// (0x0004d7f2) input_focus_pane_cp09_ParamLimits

0xcd71,	// (0x00053200) cam6_autofocus_pane_ParamLimits

0xcd71,	// (0x00053200) cam6_autofocus_pane

0x7843,	// (0x0004dcd2) cam6_image_uncrop_pane_ParamLimits

0x7843,	// (0x0004dcd2) cam6_image_uncrop_pane

0x7853,	// (0x0004dce2) cam6_indi_pane_ParamLimits

0x7853,	// (0x0004dce2) cam6_indi_pane

0x7869,	// (0x0004dcf8) cam6_mode_pane_ParamLimits

0x7869,	// (0x0004dcf8) cam6_mode_pane

0x787b,	// (0x0004dd0a) cam6_timer_pane_ParamLimits

0x787b,	// (0x0004dd0a) cam6_timer_pane

0x7887,	// (0x0004dd16) cam6_zoom_pane_ParamLimits

0x7887,	// (0x0004dd16) cam6_zoom_pane

0x7895,	// (0x0004dd24) cam6_mode_pane_g1_ParamLimits

0x7895,	// (0x0004dd24) cam6_mode_pane_g1

0x78a5,	// (0x0004dd34) cam6_mode_pane_g2_ParamLimits

0x78a5,	// (0x0004dd34) cam6_mode_pane_g2

0x78b5,	// (0x0004dd44) cam6_mode_pane_g3_ParamLimits

0x78b5,	// (0x0004dd44) cam6_mode_pane_g3

0x78c5,	// (0x0004dd54) cam6_mode_pane_g4_ParamLimits

0x78c5,	// (0x0004dd54) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x00055ece) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x00055ece) cam6_mode_pane_g

0xbe05,	// (0x00052294) bg_tb_trans_pane_cp08_ParamLimits

0xbe05,	// (0x00052294) bg_tb_trans_pane_cp08

0xd9aa,	// (0x00053e39) cam6_battery_pane_ParamLimits

0xd9aa,	// (0x00053e39) cam6_battery_pane

0xd9c0,	// (0x00053e4f) cam6_indi_pane_g1_ParamLimits

0xd9c0,	// (0x00053e4f) cam6_indi_pane_g1

0xd9d2,	// (0x00053e61) cam6_indi_pane_g2_ParamLimits

0xd9d2,	// (0x00053e61) cam6_indi_pane_g2

0xd9e4,	// (0x00053e73) cam6_indi_pane_g3_ParamLimits

0xd9e4,	// (0x00053e73) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x00055ed7) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x00055ed7) cam6_indi_pane_g

0xd9f6,	// (0x00053e85) cam6_indi_pane_t1_ParamLimits

0xd9f6,	// (0x00053e85) cam6_indi_pane_t1

0x633c,	// (0x0004c7cb) cam6_autofocus_pane_g1

0x6344,	// (0x0004c7d3) cam6_autofocus_pane_g2

0x634c,	// (0x0004c7db) cam6_autofocus_pane_g3

0x6354,	// (0x0004c7e3) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x00055ede) cam6_autofocus_pane_g

0xda1c,	// (0x00053eab) cam6_timer_pane_g1

0xda24,	// (0x00053eb3) cam6_timer_pane_t1

0xda32,	// (0x00053ec1) cam6_zoom_cont_pane

0xda3a,	// (0x00053ec9) cam6_zoom_pane_g1

0xda43,	// (0x00053ed2) cam6_zoom_pane_g2

0x78d5,	// (0x0004dd64) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x00055ee7) cam6_zoom_pane_g

0x133e,	// (0x000477cd) cam6_battery_pane_g1

0x133e,	// (0x000477cd) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0005551b) cam6_battery_pane_g

0xda3a,	// (0x00053ec9) cam6_zoom_cont_pane_g1

0xda43,	// (0x00053ed2) cam6_zoom_cont_pane_g2

0xda4c,	// (0x00053edb) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x00055eee) cam6_zoom_cont_pane_g

0x78f3,	// (0x0004dd82) cam6_mode_pane_cp_ParamLimits

0x78f3,	// (0x0004dd82) cam6_mode_pane_cp

0x7905,	// (0x0004dd94) cam6_zoom_pane_cp_ParamLimits

0x7905,	// (0x0004dd94) cam6_zoom_pane_cp

0x7913,	// (0x0004dda2) vid6_image_uncrop_cif_pane_ParamLimits

0x7913,	// (0x0004dda2) vid6_image_uncrop_cif_pane

0x7923,	// (0x0004ddb2) vid6_image_uncrop_nhd_pane_ParamLimits

0x7923,	// (0x0004ddb2) vid6_image_uncrop_nhd_pane

0x7932,	// (0x0004ddc1) vid6_image_uncrop_vga_pane_ParamLimits

0x7932,	// (0x0004ddc1) vid6_image_uncrop_vga_pane

0x7941,	// (0x0004ddd0) vid6_image_uncrop_wvga_pane_ParamLimits

0x7941,	// (0x0004ddd0) vid6_image_uncrop_wvga_pane

0x7950,	// (0x0004dddf) vid6_indi_pane_ParamLimits

0x7950,	// (0x0004dddf) vid6_indi_pane

0xbe05,	// (0x00052294) bg_tb_trans_pane_cp09_ParamLimits

0xbe05,	// (0x00052294) bg_tb_trans_pane_cp09

0xda64,	// (0x00053ef3) cam6_battery_pane_cp_ParamLimits

0xda64,	// (0x00053ef3) cam6_battery_pane_cp

0xda70,	// (0x00053eff) vid6_indi_pane_g1_ParamLimits

0xda70,	// (0x00053eff) vid6_indi_pane_g1

0xda82,	// (0x00053f11) vid6_indi_pane_g2_ParamLimits

0xda82,	// (0x00053f11) vid6_indi_pane_g2

0xda94,	// (0x00053f23) vid6_indi_pane_g3_ParamLimits

0xda94,	// (0x00053f23) vid6_indi_pane_g3

0xdaab,	// (0x00053f3a) vid6_indi_pane_g4_ParamLimits

0xdaab,	// (0x00053f3a) vid6_indi_pane_g4

0xdac2,	// (0x00053f51) vid6_indi_pane_g5_ParamLimits

0xdac2,	// (0x00053f51) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x00055ef5) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x00055ef5) vid6_indi_pane_g

0xdadc,	// (0x00053f6b) vid6_indi_pane_t1_ParamLimits

0xdadc,	// (0x00053f6b) vid6_indi_pane_t1

0xdaf2,	// (0x00053f81) vid6_indi_pane_t2_ParamLimits

0xdaf2,	// (0x00053f81) vid6_indi_pane_t2

0xdb1a,	// (0x00053fa9) vid6_indi_pane_t3_ParamLimits

0xdb1a,	// (0x00053fa9) vid6_indi_pane_t3

0xdb42,	// (0x00053fd1) vid6_indi_pane_t4_ParamLimits

0xdb42,	// (0x00053fd1) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x00055f00) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x00055f00) vid6_indi_pane_t

0xdb66,	// (0x00053ff5) wait_bar_pane_cp08

0x7968,	// (0x0004ddf7) main_cset_text2_pane_t1_ParamLimits

0x7968,	// (0x0004ddf7) main_cset_text2_pane_t1

0x78de,	// (0x0004dd6d) listscroll_gen_pane_cp06_t1_ParamLimits

0x78de,	// (0x0004dd6d) listscroll_gen_pane_cp06_t1

0xe665,	// (0x00054af4) main_cam6_set_pane

0x126a,	// (0x000476f9) bg_tb_trans_pane_cp06_ParamLimits

0xcbdf,	// (0x0005306e) cam4_indicators_pane_g1_ParamLimits

0xcbf0,	// (0x0005307f) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x00055c78) cam4_indicators_pane_g_ParamLimits

0xcc08,	// (0x00053097) cam4_indicators_pane_t1_ParamLimits

0x0c30,	// (0x000470bf) bg_tb_trans_pane_cp07_ParamLimits

0xcc36,	// (0x000530c5) vid4_indicators_pane_g1_ParamLimits

0xcc4c,	// (0x000530db) vid4_indicators_pane_g2_ParamLimits

0xcc60,	// (0x000530ef) vid4_indicators_pane_g3_ParamLimits

0xcc73,	// (0x00053102) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x00055c8a) vid4_indicators_pane_g_ParamLimits

0xcc91,	// (0x00053120) vid4_indicators_pane_t1_ParamLimits

0xccec,	// (0x0005317b) vid4_progress_pane_g1_ParamLimits

0xccfc,	// (0x0005318b) vid4_progress_pane_g2_ParamLimits

0x74a4,	// (0x0004d933) vid4_progress_pane_g3_ParamLimits

0xcd0c,	// (0x0005319b) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x00055e31) vid4_progress_pane_g_ParamLimits

0x74b6,	// (0x0004d945) vid4_progress_pane_t1_ParamLimits

0xcd2a,	// (0x000531b9) vid4_progress_pane_t2_ParamLimits

0xcd43,	// (0x000531d2) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x00055e3c) vid4_progress_pane_t_ParamLimits

0x74d0,	// (0x0004d95f) wait_bar_pane_cp07_ParamLimits

0x7989,	// (0x0004de18) main_cam6_set_pane_g2_ParamLimits

0x7989,	// (0x0004de18) main_cam6_set_pane_g2

0x79af,	// (0x0004de3e) main_cset6_listscroll_pane_ParamLimits

0x79af,	// (0x0004de3e) main_cset6_listscroll_pane

0x79cd,	// (0x0004de5c) main_cset6_slider_pane_ParamLimits

0x79cd,	// (0x0004de5c) main_cset6_slider_pane

0x79e3,	// (0x0004de72) main_cset6_text2_pane_ParamLimits

0x79e3,	// (0x0004de72) main_cset6_text2_pane

0xdb75,	// (0x00054004) main_cset6_text_pane

0xdb7d,	// (0x0005400c) main_cset_list_pane_copy1_ParamLimits

0xdb7d,	// (0x0005400c) main_cset_list_pane_copy1

0xdbbf,	// (0x0005404e) scroll_pane_cp028_copy1

0x79f1,	// (0x0004de80) cset_list_set_pane_copy1

0x7a05,	// (0x0004de94) aid_position_infowindow_above_copy1

0x7a0d,	// (0x0004de9c) aid_position_infowindow_below_copy1

0x0531,	// (0x000469c0) cset_list_set_pane_g1_copy1

0x0539,	// (0x000469c8) cset_list_set_pane_g3_copy1_ParamLimits

0x0539,	// (0x000469c8) cset_list_set_pane_g3_copy1

0x0548,	// (0x000469d7) cset_list_set_pane_t1_copy1_ParamLimits

0x0548,	// (0x000469d7) cset_list_set_pane_t1_copy1

0x0c30,	// (0x000470bf) list_highlight_pane_cp021_copy1_ParamLimits

0x0c30,	// (0x000470bf) list_highlight_pane_cp021_copy1

0xdbc8,	// (0x00054057) cset6_slider_pane_ParamLimits

0xdbc8,	// (0x00054057) cset6_slider_pane

0xdbf4,	// (0x00054083) main_cset6_slider_pane_g1_ParamLimits

0xdbf4,	// (0x00054083) main_cset6_slider_pane_g1

0x7a15,	// (0x0004dea4) main_cset6_slider_pane_g2_ParamLimits

0x7a15,	// (0x0004dea4) main_cset6_slider_pane_g2

0xdc1c,	// (0x000540ab) main_cset6_slider_pane_g3_ParamLimits

0xdc1c,	// (0x000540ab) main_cset6_slider_pane_g3

0x7a3d,	// (0x0004decc) main_cset6_slider_pane_g4_ParamLimits

0x7a3d,	// (0x0004decc) main_cset6_slider_pane_g4

0x7a49,	// (0x0004ded8) main_cset6_slider_pane_g5_ParamLimits

0x7a49,	// (0x0004ded8) main_cset6_slider_pane_g5

0xd378,	// (0x00053807) main_cset6_slider_pane_g7_ParamLimits

0xd378,	// (0x00053807) main_cset6_slider_pane_g7

0xd384,	// (0x00053813) main_cset6_slider_pane_g8_ParamLimits

0xd384,	// (0x00053813) main_cset6_slider_pane_g8

0x6aa9,	// (0x0004cf38) main_cset6_slider_pane_g9_ParamLimits

0x6aa9,	// (0x0004cf38) main_cset6_slider_pane_g9

0x6ab5,	// (0x0004cf44) main_cset6_slider_pane_g10_ParamLimits

0x6ab5,	// (0x0004cf44) main_cset6_slider_pane_g10

0x6ac1,	// (0x0004cf50) main_cset6_slider_pane_g11_ParamLimits

0x6ac1,	// (0x0004cf50) main_cset6_slider_pane_g11

0x6acd,	// (0x0004cf5c) main_cset6_slider_pane_g12_ParamLimits

0x6acd,	// (0x0004cf5c) main_cset6_slider_pane_g12

0x6ad9,	// (0x0004cf68) main_cset6_slider_pane_g13_ParamLimits

0x6ad9,	// (0x0004cf68) main_cset6_slider_pane_g13

0x6ae5,	// (0x0004cf74) main_cset6_slider_pane_g14_ParamLimits

0x6ae5,	// (0x0004cf74) main_cset6_slider_pane_g14

0x7a57,	// (0x0004dee6) main_cset6_slider_pane_g15_ParamLimits

0x7a57,	// (0x0004dee6) main_cset6_slider_pane_g15

0x6b09,	// (0x0004cf98) main_cset6_slider_pane_g16_ParamLimits

0x6b09,	// (0x0004cf98) main_cset6_slider_pane_g16

0x6b17,	// (0x0004cfa6) main_cset6_slider_pane_g17_ParamLimits

0x6b17,	// (0x0004cfa6) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x00055f09) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x00055f09) main_cset6_slider_pane_g

0xdc28,	// (0x000540b7) main_cset6_slider_pane_t1_ParamLimits

0xdc28,	// (0x000540b7) main_cset6_slider_pane_t1

0x7a87,	// (0x0004df16) main_cset6_slider_pane_t2_ParamLimits

0x7a87,	// (0x0004df16) main_cset6_slider_pane_t2

0x7ab2,	// (0x0004df41) main_cset6_slider_pane_t3_ParamLimits

0x7ab2,	// (0x0004df41) main_cset6_slider_pane_t3

0x7add,	// (0x0004df6c) main_cset6_slider_pane_t4_ParamLimits

0x7add,	// (0x0004df6c) main_cset6_slider_pane_t4

0x7b08,	// (0x0004df97) main_cset6_slider_pane_t5_ParamLimits

0x7b08,	// (0x0004df97) main_cset6_slider_pane_t5

0xdc69,	// (0x000540f8) main_cset6_slider_pane_t7_ParamLimits

0xdc69,	// (0x000540f8) main_cset6_slider_pane_t7

0x7b35,	// (0x0004dfc4) main_cset6_slider_pane_t8_ParamLimits

0x7b35,	// (0x0004dfc4) main_cset6_slider_pane_t8

0x7b59,	// (0x0004dfe8) main_cset6_slider_pane_t9_ParamLimits

0x7b59,	// (0x0004dfe8) main_cset6_slider_pane_t9

0x7b7d,	// (0x0004e00c) main_cset6_slider_pane_t10_ParamLimits

0x7b7d,	// (0x0004e00c) main_cset6_slider_pane_t10

0x7ba1,	// (0x0004e030) main_cset6_slider_pane_t11_ParamLimits

0x7ba1,	// (0x0004e030) main_cset6_slider_pane_t11

0xdc9f,	// (0x0005412e) main_cset6_slider_pane_t14_ParamLimits

0xdc9f,	// (0x0005412e) main_cset6_slider_pane_t14

0xdcd8,	// (0x00054167) main_cset6_slider_pane_t15_ParamLimits

0xdcd8,	// (0x00054167) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x00055f2e) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x00055f2e) main_cset6_slider_pane_t

0xd44f,	// (0x000538de) cset_slider_pane_g1_copy1

0xd458,	// (0x000538e7) cset_slider_pane_g2_copy1

0xd461,	// (0x000538f0) cset_slider_pane_g3_copy1

0xe665,	// (0x00054af4) bg_popup_sub_pane_cp011_copy1

0xdd1a,	// (0x000541a9) main_cset_text_pane_g1_copy1

0xd4ec,	// (0x0005397b) main_cset_text_pane_t1_copy1

0xd4fa,	// (0x00053989) main_cset_text_pane_t2_copy1

0xd508,	// (0x00053997) main_cset_text_pane_t3_copy1

0xd516,	// (0x000539a5) main_cset_text_pane_t4_copy1

0xd524,	// (0x000539b3) main_cset_text_pane_t5_copy1

0xdd22,	// (0x000541b1) main_cset_text_pane_t6_copy1

0xdd30,	// (0x000541bf) main_cset_text_pane_t7_copy1

0x7968,	// (0x0004ddf7) main_cset_text2_pane_t1_copy1

0x0c30,	// (0x000470bf) main_ncimui_pane

0x4a1f,	// (0x0004aeae) popup_query_ncimui_window_ParamLimits

0x4a1f,	// (0x0004aeae) popup_query_ncimui_window

0xc3ee,	// (0x0005287d) field_cale_ev2_pane_g4_ParamLimits

0xc3ee,	// (0x0005287d) field_cale_ev2_pane_g4

0x5c9c,	// (0x0004c12b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c9c,	// (0x0004c12b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x00055c12) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x00055c12) cell_video_dialer_keypad_pane_g

0x5cb4,	// (0x0004c143) cell_video_dialer_keypad_pane_t1

0xe665,	// (0x00054af4) bg_popup_window_pane_cp012

0x37f0,	// (0x00049c7f) heading_pane_cp06

0xdd5c,	// (0x000541eb) ncim_query_content_pane

0xe665,	// (0x00054af4) bg_popup_heading_pane_cp01

0xdd64,	// (0x000541f3) ncim_heading_pane_t1

0xdd72,	// (0x00054201) ncim_indicator_popup_pane

0xdd84,	// (0x00054213) ncim_query_button_pane

0xdd9a,	// (0x00054229) ncim_query_content_pane_t1

0xddac,	// (0x0005423b) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x00055f72) ncim_query_content_pane_t

0xdde6,	// (0x00054275) ncim_query_list_pane

0xddf8,	// (0x00054287) ncim_query_popup_pane

0xdd72,	// (0x00054201) ncim_indicator_popup_pane_ParamLimits

0x7cf0,	// (0x0004e17f) ncim_query_content_pane_g1_ParamLimits

0x7cf0,	// (0x0004e17f) ncim_query_content_pane_g1

0xdd9a,	// (0x00054229) ncim_query_content_pane_t1_ParamLimits

0xddac,	// (0x0005423b) ncim_query_content_pane_t2_ParamLimits

0x7cfc,	// (0x0004e18b) ncim_query_content_pane_t3_ParamLimits

0x7cfc,	// (0x0004e18b) ncim_query_content_pane_t3

0x7d24,	// (0x0004e1b3) ncim_query_content_pane_t4_ParamLimits

0x7d24,	// (0x0004e1b3) ncim_query_content_pane_t4

0x7d4c,	// (0x0004e1db) ncim_query_content_pane_t5_ParamLimits

0x7d4c,	// (0x0004e1db) ncim_query_content_pane_t5

0xddbe,	// (0x0005424d) ncim_query_content_pane_t6_ParamLimits

0xddbe,	// (0x0005424d) ncim_query_content_pane_t6

0xfae3,	// (0x00055f72) ncim_query_content_pane_t_ParamLimits

0xdde6,	// (0x00054275) ncim_query_list_pane_ParamLimits

0xddf8,	// (0x00054287) ncim_query_popup_pane_ParamLimits

0xde0c,	// (0x0005429b) wait_bar_pane_cp04

0xe665,	// (0x00054af4) input_focus_pane_cp011

0xde14,	// (0x000542a3) ncim_query_popup_pane_t1

0xde22,	// (0x000542b1) ncim_list_query_list_pane_ParamLimits

0xde22,	// (0x000542b1) ncim_list_query_list_pane

0xe665,	// (0x00054af4) bg_button_pane_cp027

0xde35,	// (0x000542c4) ncim_query_button_pane_g1

0xe665,	// (0x00054af4) list_highlight_pane_cp012

0xde3f,	// (0x000542ce) ncim_list_query_list_pane_g1

0xde47,	// (0x000542d6) ncim_list_query_list_pane_t1

0xcbfc,	// (0x0005308b) cam4_indicators_pane_g3_ParamLimits

0xcbfc,	// (0x0005308b) cam4_indicators_pane_g3

0xcc7f,	// (0x0005310e) vid4_indicators_pane_g5_ParamLimits

0xcc7f,	// (0x0005310e) vid4_indicators_pane_g5

0xcd1b,	// (0x000531aa) vid4_progress_pane_g5_ParamLimits

0xcd1b,	// (0x000531aa) vid4_progress_pane_g5

0x7bdb,	// (0x0004e06a) main_ncimui_pane_g1

0x7c44,	// (0x0004e0d3) ncimui_group_query_pane_ParamLimits

0x7c44,	// (0x0004e0d3) ncimui_group_query_pane

0x7c8c,	// (0x0004e11b) ncimui_list_pane_ParamLimits

0x7c8c,	// (0x0004e11b) ncimui_list_pane

0x7cb3,	// (0x0004e142) ncimui_text_pane_ParamLimits

0x7cb3,	// (0x0004e142) ncimui_text_pane

0x7d74,	// (0x0004e203) ncimui_text_pane_t1_ParamLimits

0x7d74,	// (0x0004e203) ncimui_text_pane_t1

0xde55,	// (0x000542e4) ncimui_list_single_graphic_pane_ParamLimits

0xde55,	// (0x000542e4) ncimui_list_single_graphic_pane

0x7d92,	// (0x0004e221) ncimui_query_pane_ParamLimits

0x7d92,	// (0x0004e221) ncimui_query_pane

0xe665,	// (0x00054af4) list_highlight_pane_cp013

0xde65,	// (0x000542f4) ncim_list_query_list_pane_t1_copy1

0xde3f,	// (0x000542ce) ncim_list_single_graphic_pane_g1

0x7da5,	// (0x0004e234) ncim_query_button_pane_cp01

0x7db1,	// (0x0004e240) ncim_query_entry_pane_ParamLimits

0x7db1,	// (0x0004e240) ncim_query_entry_pane

0x7dc4,	// (0x0004e253) ncimui_query_pane_g1

0x7dd0,	// (0x0004e25f) ncimui_query_pane_t1_ParamLimits

0x7dd0,	// (0x0004e25f) ncimui_query_pane_t1

0x0c30,	// (0x000470bf) input_focus_pane_cp012

0xde73,	// (0x00054302) ncim_query_entry_pane_t1

0x13b0,	// (0x0004783f) main_im_pane_ParamLimits

0x0c30,	// (0x000470bf) main_mobtv_pane_ParamLimits

0x0c30,	// (0x000470bf) main_mobtv_pane

0x7a6f,	// (0x0004defe) main_cset6_slider_pane_g18_ParamLimits

0x7a6f,	// (0x0004defe) main_cset6_slider_pane_g18

0x7a7b,	// (0x0004df0a) main_cset6_slider_pane_g19_ParamLimits

0x7a7b,	// (0x0004df0a) main_cset6_slider_pane_g19

0x1286,	// (0x00047715) bg_main_mobtv_pane_ParamLimits

0x1286,	// (0x00047715) bg_main_mobtv_pane

0x7de9,	// (0x0004e278) main_mobtv_info_pane

0x7df4,	// (0x0004e283) main_mobtv_loading_pane_ParamLimits

0x7df4,	// (0x0004e283) main_mobtv_loading_pane

0xde85,	// (0x00054314) main_mobtv_pg_channel_list_pane

0xde8f,	// (0x0005431e) main_mobtv_pg_hdr_pane

0x7e01,	// (0x0004e290) main_mobtv_programe_curr_pane_ParamLimits

0x7e01,	// (0x0004e290) main_mobtv_programe_curr_pane

0x7e0e,	// (0x0004e29d) main_mobtv_programe_next_pane_ParamLimits

0x7e0e,	// (0x0004e29d) main_mobtv_programe_next_pane

0xde98,	// (0x00054327) popup_mobtv_noti_window

0x133e,	// (0x000477cd) main_tv_pg_hdr_pane_g1

0xdea2,	// (0x00054331) main_tv_pg_hdr_pane_g2

0xdeaa,	// (0x00054339) main_tv_pg_hdr_pane_g3

0xdeb2,	// (0x00054341) main_tv_pg_hdr_pane_g4

0xdeba,	// (0x00054349) main_tv_pg_hdr_pane_g5

0xdec4,	// (0x00054353) main_tv_pg_hdr_pane_g6

0xdece,	// (0x0005435d) main_tv_pg_hdr_pane_g7

0xded8,	// (0x00054367) main_tv_pg_hdr_pane_g8

0xdee2,	// (0x00054371) main_tv_pg_hdr_pane_g9

0xdeec,	// (0x0005437b) main_tv_pg_hdr_pane_g10

0xdef6,	// (0x00054385) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x00055f7f) main_tv_pg_hdr_pane_g

0xdf00,	// (0x0005438f) main_tv_pg_hdr_pane_t1

0xdf0e,	// (0x0005439d) main_tv_pg_hdr_pane_t2

0xdf1c,	// (0x000543ab) main_tv_pg_hdr_pane_t3

0xdf2c,	// (0x000543bb) main_tv_pg_hdr_pane_t4

0xdf3c,	// (0x000543cb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x00055f96) main_tv_pg_hdr_pane_t

0xdf4c,	// (0x000543db) single_mobtv_pg_channel_pane_ParamLimits

0xdf4c,	// (0x000543db) single_mobtv_pg_channel_pane

0xdf5e,	// (0x000543ed) single_mobtv_pg_channel_table_pane

0xdf67,	// (0x000543f6) single_mobtv_pg_channel_thumb_pane

0xdf70,	// (0x000543ff) single_tv_pg_channel_pane_g1

0xdf79,	// (0x00054408) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x00055fa1) single_tv_pg_channel_pane_g

0x126a,	// (0x000476f9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x126a,	// (0x000476f9) bg_single_mobtv_pg_channel_thumb_pane

0xdf82,	// (0x00054411) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf82,	// (0x00054411) single_mobtv_pg_channel_thumb_pane_g1

0xdf90,	// (0x0005441f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf90,	// (0x0005441f) single_mobtv_pg_channel_thumb_pane_g2

0xdf9c,	// (0x0005442b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf9c,	// (0x0005442b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x00055fa6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x00055fa6) single_mobtv_pg_channel_thumb_pane_g

0xdfa8,	// (0x00054437) single_mobtv_pg_channel_thumb_pane_t1

0xdfb6,	// (0x00054445) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x00055fad) single_mobtv_pg_channel_thumb_pane_t

0x133e,	// (0x000477cd) bg_single_mobtv_pg_channel_table_pane_g1

0x133e,	// (0x000477cd) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0005551b) bg_single_mobtv_pg_channel_table_pane_g

0xdfc4,	// (0x00054453) single_mobtv_pg_channel_table_pane_t1

0xdfd2,	// (0x00054461) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x00055fb2) single_mobtv_pg_channel_table_pane_t

0x7e23,	// (0x0004e2b2) main_mobtv_info_pane_g1_ParamLimits

0x7e23,	// (0x0004e2b2) main_mobtv_info_pane_g1

0x7e41,	// (0x0004e2d0) main_mobtv_info_pane_t1_ParamLimits

0x7e41,	// (0x0004e2d0) main_mobtv_info_pane_t1

0x7eb9,	// (0x0004e348) main_mobtv_info_pane_t2_ParamLimits

0x7eb9,	// (0x0004e348) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x00055fbc) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x00055fbc) main_mobtv_info_pane_t

0x7f4a,	// (0x0004e3d9) wait_bar_pane_cp05

0x7f5c,	// (0x0004e3eb) main_mobtv_loading_pane_g1_ParamLimits

0x7f5c,	// (0x0004e3eb) main_mobtv_loading_pane_g1

0x7f6d,	// (0x0004e3fc) main_mobtv_loading_pane_g2_ParamLimits

0x7f6d,	// (0x0004e3fc) main_mobtv_loading_pane_g2

0x7f79,	// (0x0004e408) main_mobtv_loading_pane_g3_ParamLimits

0x7f79,	// (0x0004e408) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x00055fc3) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x00055fc3) main_mobtv_loading_pane_g

0xdfe0,	// (0x0005446f) main_mobtv_loading_pane_t1_ParamLimits

0xdfe0,	// (0x0005446f) main_mobtv_loading_pane_t1

0xdff8,	// (0x00054487) main_mobtv_loading_pane_t2_ParamLimits

0xdff8,	// (0x00054487) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x00055fca) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x00055fca) main_mobtv_loading_pane_t

0x7f8c,	// (0x0004e41b) wait_bar_pane_cp06_ParamLimits

0x7f8c,	// (0x0004e41b) wait_bar_pane_cp06

0xe01c,	// (0x000544ab) main_mobtv_programe_curr_pane_t1

0xe02a,	// (0x000544b9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x00055fcf) main_mobtv_programe_curr_pane_t

0xe038,	// (0x000544c7) main_mobtv_programe_next_pane_t1

0xe046,	// (0x000544d5) main_mobtv_programe_next_pane_t2

0xe054,	// (0x000544e3) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x00055fd4) main_mobtv_programe_next_pane_t

0xe665,	// (0x00054af4) bg_popup_mobtv_noti_window_pane

0xe062,	// (0x000544f1) popup_mobtv_noti_window_g1

0xe06a,	// (0x000544f9) popup_mobtv_noti_window_t1

0xe078,	// (0x00054507) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x00055fdb) popup_mobtv_noti_window_t

0x133e,	// (0x000477cd) bg_popup_mobtv_noti_window_pane_g1

0xe665,	// (0x00054af4) sc_clock_pane

0xe665,	// (0x00054af4) main_fs_bigclock_pane

0x76d6,	// (0x0004db65) blid2_tripm_pane_t4_ParamLimits

0x76d6,	// (0x0004db65) blid2_tripm_pane_t4

0x126a,	// (0x000476f9) sc_clock_pane_g1_ParamLimits

0x126a,	// (0x000476f9) sc_clock_pane_g1

0x1348,	// (0x000477d7) sc_clock_pane_t1_ParamLimits

0x1348,	// (0x000477d7) sc_clock_pane_t1

0x1348,	// (0x000477d7) sc_clock_pane_t2_ParamLimits

0x1348,	// (0x000477d7) sc_clock_pane_t2

0x1348,	// (0x000477d7) sc_clock_pane_t3_ParamLimits

0x1348,	// (0x000477d7) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x00055fe0) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x00055fe0) sc_clock_pane_t

0x895f,	// (0x0004edee) main_fs_bigclock_indicator_pane_ParamLimits

0x895f,	// (0x0004edee) main_fs_bigclock_indicator_pane

0x800c,	// (0x0004e49b) main_fs_bigclock_pane_g1_ParamLimits

0x800c,	// (0x0004e49b) main_fs_bigclock_pane_g1

0x896b,	// (0x0004edfa) main_fs_bigclock_pane_t1_ParamLimits

0x896b,	// (0x0004edfa) main_fs_bigclock_pane_t1

0x897d,	// (0x0004ee0c) main_fs_bigclock_pane_t2_ParamLimits

0x897d,	// (0x0004ee0c) main_fs_bigclock_pane_t2

0x8991,	// (0x0004ee20) main_fs_bigclock_pane_t3_ParamLimits

0x8991,	// (0x0004ee20) main_fs_bigclock_pane_t3

0x0002,

0xfccf,	// (0x0005615e) main_fs_bigclock_pane_t_ParamLimits

0xfccf,	// (0x0005615e) main_fs_bigclock_pane_t

0xe8b8,	// (0x00054d47) main_fs_bigclock_indicator_pane_g1

0xdd8c,	// (0x0005421b) ncim_query_content_pane_g2_ParamLimits

0xdd8c,	// (0x0005421b) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x00055f6d) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x00055f6d) ncim_query_content_pane_g

0x1348,	// (0x000477d7) sc_clock_pane_t4_ParamLimits

0x1348,	// (0x000477d7) sc_clock_pane_t4

0x0c30,	// (0x000470bf) main_radioblah_pane

0xcb87,	// (0x00053016) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb87,	// (0x00053016) cell_call4_button_pane_t1_copy1

0x7bf3,	// (0x0004e082) main_ncimui_pane_t1_ParamLimits

0x7bf3,	// (0x0004e082) main_ncimui_pane_t1

0x7c0d,	// (0x0004e09c) main_ncimui_pane_t2_ParamLimits

0x7c0d,	// (0x0004e09c) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x00055f66) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x00055f66) main_ncimui_pane_t

0xa9fd,	// (0x00050e8c) main_radioblah_anim_pane_ParamLimits

0xa9fd,	// (0x00050e8c) main_radioblah_anim_pane

0xa9fd,	// (0x00050e8c) main_radioblah_info_pane_ParamLimits

0xa9fd,	// (0x00050e8c) main_radioblah_info_pane

0xa9e9,	// (0x00050e78) main_radioblah_pane_t1_ParamLimits

0xa9e9,	// (0x00050e78) main_radioblah_pane_t1

0xa9e9,	// (0x00050e78) main_radioblah_pane_t2_ParamLimits

0xa9e9,	// (0x00050e78) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x00056001) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x00056001) main_radioblah_pane_t

0x0c30,	// (0x000470bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x0c30,	// (0x000470bf) main_radioblah_rocker_ctrl_pane

0xbdf1,	// (0x00052280) main_radioblah_info_pane_t1_ParamLimits

0xbdf1,	// (0x00052280) main_radioblah_info_pane_t1

0xe0b6,	// (0x00054545) main_radioblah_info_pane_t2_ParamLimits

0xe0b6,	// (0x00054545) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x0005600a) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x0005600a) main_radioblah_info_pane_t

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g1

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g2

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g3

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g4

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g5

0x133e,	// (0x000477cd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x00056013) main_radioblah_rocker_ctrl_pane_g

0x7968,	// (0x0004ddf7) main_cset_text2_pane_t1_copy1_ParamLimits

0xcbcd,	// (0x0005305c) cam4_image_uncrop_qvga_pane

0xcc22,	// (0x000530b1) vid4_image_uncrop_qcif_pane

0xcd71,	// (0x00053200) cam6_image_uncrop_qvga_pane_ParamLimits

0xcd71,	// (0x00053200) cam6_image_uncrop_qvga_pane

0xda54,	// (0x00053ee3) vid6_image_uncrop_qcif_pane_ParamLimits

0xda54,	// (0x00053ee3) vid6_image_uncrop_qcif_pane

0xe665,	// (0x00054af4) bg_popup_preview_window_pane_cp03

0xdd3e,	// (0x000541cd) list_cset_text2_pane

0xdd46,	// (0x000541d5) main_cset6_text2_pane_g1

0xdd4e,	// (0x000541dd) main_cset6_text2_pane_t1

0xe80f,	// (0x00054c9e) list_cset_text2_pane_t1_ParamLimits

0xe80f,	// (0x00054c9e) list_cset_text2_pane_t1

0x0c30,	// (0x000470bf) main_radioblah_pane_ParamLimits

0x7f36,	// (0x0004e3c5) main_mobtv_info_pane_t3_ParamLimits

0x7f36,	// (0x0004e3c5) main_mobtv_info_pane_t3

0xa9db,	// (0x00050e6a) main_radioblah_pane_g1

0xe086,	// (0x00054515) main_radioblah_info_pane_g1

0x135c,	// (0x000477eb) main_radioblah_info_pane_t3_ParamLimits

0x135c,	// (0x000477eb) main_radioblah_info_pane_t3

0x32b5,	// (0x00049744) highlight_cell_cale_month_pane_ParamLimits

0x32b5,	// (0x00049744) highlight_cell_cale_month_pane

0xe665,	// (0x00054af4) main_phob_fisheye_pane

0xc46e,	// (0x000528fd) scroll_pane_cp0031_ParamLimits

0xc46e,	// (0x000528fd) scroll_pane_cp0031

0xdb66,	// (0x00053ff5) wait_bar_pane_cp08_ParamLimits

0x79f1,	// (0x0004de80) cset_list_set_pane_copy1_ParamLimits

0xe105,	// (0x00054594) highlight_cell_cale_month_pane_g1

0x81a3,	// (0x0004e632) highlight_cell_cale_month_pane_t1

0xd7b4,	// (0x00053c43) list_gen_pane_cp01

0xd363,	// (0x000537f2) scroll_pane_01

0x81b1,	// (0x0004e640) list_single_double_fisheye_pane

0x81ba,	// (0x0004e649) list_double_fisheye_pane_g1_ParamLimits

0x81ba,	// (0x0004e649) list_double_fisheye_pane_g1

0x81c6,	// (0x0004e655) list_double_fisheye_pane_g2_ParamLimits

0x81c6,	// (0x0004e655) list_double_fisheye_pane_g2

0x81da,	// (0x0004e669) list_double_fisheye_pane_g3_ParamLimits

0x81da,	// (0x0004e669) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x00056020) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x00056020) list_double_fisheye_pane_g

0x8203,	// (0x0004e692) list_double_fisheye_pane_t1_ParamLimits

0x8203,	// (0x0004e692) list_double_fisheye_pane_t1

0x821e,	// (0x0004e6ad) list_double_fisheye_pane_t2_ParamLimits

0x821e,	// (0x0004e6ad) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x0005602b) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x0005602b) list_double_fisheye_pane_t

0xe665,	// (0x00054af4) main_call5_pane

0x0c30,	// (0x000470bf) sc_swipe_pane_ParamLimits

0x0c30,	// (0x000470bf) sc_swipe_pane

0x8253,	// (0x0004e6e2) call5_image_pane_ParamLimits

0x8253,	// (0x0004e6e2) call5_image_pane

0x8270,	// (0x0004e6ff) call5_swipe_1_pane_ParamLimits

0x8270,	// (0x0004e6ff) call5_swipe_1_pane

0x8283,	// (0x0004e712) call5_swipe_2_pane_ParamLimits

0x8283,	// (0x0004e712) call5_swipe_2_pane

0x82ae,	// (0x0004e73d) popup_call5_audio_first_window_ParamLimits

0x82ae,	// (0x0004e73d) popup_call5_audio_first_window

0x126a,	// (0x000476f9) call5_swipe_1_pane_g1_ParamLimits

0x126a,	// (0x000476f9) call5_swipe_1_pane_g1

0xe10d,	// (0x0005459c) call5_swipe_1_pane_g2_ParamLimits

0xe10d,	// (0x0005459c) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x00056030) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x00056030) call5_swipe_1_pane_g

0xe119,	// (0x000545a8) call5_swipe_1_pane_t1_ParamLimits

0xe119,	// (0x000545a8) call5_swipe_1_pane_t1

0x126a,	// (0x000476f9) call5_swipe_2_pane_g1_ParamLimits

0x126a,	// (0x000476f9) call5_swipe_2_pane_g1

0xe12e,	// (0x000545bd) call5_swipe_2_pane_g2_ParamLimits

0xe12e,	// (0x000545bd) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x00056035) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x00056035) call5_swipe_2_pane_g

0xe13a,	// (0x000545c9) call5_swipe_2_pane_t1_ParamLimits

0xe13a,	// (0x000545c9) call5_swipe_2_pane_t1

0x126a,	// (0x000476f9) sc_swipe_pane_g1_ParamLimits

0x126a,	// (0x000476f9) sc_swipe_pane_g1

0x1278,	// (0x00047707) sc_swipe_pane_g2_ParamLimits

0x1278,	// (0x00047707) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x00055bae) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x00055bae) sc_swipe_pane_g

0x1348,	// (0x000477d7) sc_swipe_pane_t1_ParamLimits

0x1348,	// (0x000477d7) sc_swipe_pane_t1

0xe665,	// (0x00054af4) main_cmail_launcher_pane

0x82c3,	// (0x0004e752) aid_size_cell_cmail_l_ParamLimits

0x82c3,	// (0x0004e752) aid_size_cell_cmail_l

0x82d8,	// (0x0004e767) grid_cmail_l_pane_ParamLimits

0x82d8,	// (0x0004e767) grid_cmail_l_pane

0x82f2,	// (0x0004e781) cell_cmail_l_pane_ParamLimits

0x82f2,	// (0x0004e781) cell_cmail_l_pane

0x8313,	// (0x0004e7a2) cell_cmail_l_pane_g1_ParamLimits

0x8313,	// (0x0004e7a2) cell_cmail_l_pane_g1

0x831f,	// (0x0004e7ae) cell_cmail_l_pane_t1_ParamLimits

0x831f,	// (0x0004e7ae) cell_cmail_l_pane_t1

0x8335,	// (0x0004e7c4) cell_cmail_l_pane_t2_ParamLimits

0x8335,	// (0x0004e7c4) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x0005603a) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x0005603a) cell_cmail_l_pane_t

0x0c30,	// (0x000470bf) grid_highlight_pane_cp018_ParamLimits

0x0c30,	// (0x000470bf) grid_highlight_pane_cp018

0x0b3c,	// (0x00046fcb) main2_pane_ParamLimits

0x0b3c,	// (0x00046fcb) main2_pane

0x15e5,	// (0x00047a74) popup_sp_fs_action_menu_bg_pane_g1

0x15ed,	// (0x00047a7c) popup_sp_fs_action_menu_bg_pane_g2

0x15f5,	// (0x00047a84) popup_sp_fs_action_menu_bg_pane_g3

0x15fd,	// (0x00047a8c) popup_sp_fs_action_menu_bg_pane_g4

0x1605,	// (0x00047a94) popup_sp_fs_action_menu_bg_pane_g5

0x160d,	// (0x00047a9c) popup_sp_fs_action_menu_bg_pane_g6

0x1615,	// (0x00047aa4) popup_sp_fs_action_menu_bg_pane_g7

0x161d,	// (0x00047aac) popup_sp_fs_action_menu_bg_pane_g8

0x1625,	// (0x00047ab4) popup_sp_fs_action_menu_bg_pane_g9

0x162d,	// (0x00047abc) popup_sp_fs_action_menu_bg_pane_g10

0x162d,	// (0x00047abc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0005556c) popup_sp_fs_action_menu_bg_pane_g

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g2

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0005561a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0005561a) list_medium_line_x2_t3_g3_g

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t2

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_x2_t3_g3_t

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g2_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_x2_t3_g2_g

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t2

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_x2_t3_g2_t

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g2

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g3

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0005562d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0005562d) list_medium_line_x2_t4_g4_g

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t2

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t3

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00055636) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00055636) list_medium_line_x2_t4_g4_t

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g2

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g3

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0005562d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0005562d) list_medium_line_x2_t2_g4_g

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g4_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g4_t

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g2

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0005561a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0005561a) list_medium_line_x2_t2_g3_g

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g3_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g3_t

0x3615,	// (0x00049aa4) main_sp_fs_list_pane_ParamLimits

0x3615,	// (0x00049aa4) main_sp_fs_list_pane

0xdba7,	// (0x00054036) sp_fs_scroll_pane_ParamLimits

0xdba7,	// (0x00054036) sp_fs_scroll_pane

0x3621,	// (0x00049ab0) list_medium_line_x2_t3_t1

0x3621,	// (0x00049ab0) list_medium_line_x2_t3_t2

0x3621,	// (0x00049ab0) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000556e3) list_medium_line_x2_t3_t

0x3621,	// (0x00049ab0) list_medium_line_x3_t4_t1

0x3621,	// (0x00049ab0) list_medium_line_x3_t4_t2

0x3621,	// (0x00049ab0) list_medium_line_x3_t4_t3

0x3621,	// (0x00049ab0) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000556ea) list_medium_line_x3_t4_t

0x3621,	// (0x00049ab0) list_medium_line_x4_t5_t1

0x3621,	// (0x00049ab0) list_medium_line_x4_t5_t2

0x3621,	// (0x00049ab0) list_medium_line_x4_t5_t3

0x3621,	// (0x00049ab0) list_medium_line_x4_t5_t4

0x3621,	// (0x00049ab0) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000556f3) list_medium_line_x4_t5_t

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g1

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g2

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g3

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0005562d) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0005562d) list_medium_line_t4_g4_g

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t1

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t2

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t3

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t4_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00055636) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00055636) list_medium_line_t4_g4_t

0x389a,	// (0x00049d29) chi_dic_find_pane_g1

0x47a5,	// (0x0004ac34) main_tport_pane

0x3621,	// (0x00049ab0) list_medium_line_plain_t1

0x126a,	// (0x000476f9) list_medium_line_t2_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g2_g1

0x126a,	// (0x000476f9) list_medium_line_t2_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_t2_g2_g

0x1348,	// (0x000477d7) list_medium_line_t2_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_g2_t1

0x1348,	// (0x000477d7) list_medium_line_t2_g2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_t2_g2_t

0xcd58,	// (0x000531e7) aid_sp_fs_list_icon_a_sm

0xcd60,	// (0x000531ef) aid_sp_fs_list_icon_d

0xcd68,	// (0x000531f7) aid_sp_fs_text_primary

0xd7bd,	// (0x00053c4c) aid_sp_fs_text_secondary

0xe665,	// (0x00054af4) list_medium_line

0xe665,	// (0x00054af4) list_medium_line_g2

0xe665,	// (0x00054af4) list_medium_line_g3

0xe665,	// (0x00054af4) list_medium_line_plain

0xe665,	// (0x00054af4) list_medium_line_plain_t2

0xe665,	// (0x00054af4) list_medium_line_plain_t3

0xe665,	// (0x00054af4) list_medium_line_right_icon

0xe665,	// (0x00054af4) list_medium_line_right_iconx2

0xe665,	// (0x00054af4) list_medium_line_t2

0xe665,	// (0x00054af4) list_medium_line_t2_g2

0xe665,	// (0x00054af4) list_medium_line_t2_g3

0xe665,	// (0x00054af4) list_medium_line_t2_right_icon

0xe665,	// (0x00054af4) list_medium_line_t2_right_iconx2

0xe665,	// (0x00054af4) list_medium_line_t3

0xe665,	// (0x00054af4) list_medium_line_t3_g2

0xe665,	// (0x00054af4) list_medium_line_t3_g3

0xe665,	// (0x00054af4) list_medium_line_t3_right_iconx2

0xe665,	// (0x00054af4) list_medium_line_t4_g4

0xe665,	// (0x00054af4) list_medium_line_x2

0xe665,	// (0x00054af4) list_medium_line_x2_t2_g2

0xe665,	// (0x00054af4) list_medium_line_x2_t2_g3

0xe665,	// (0x00054af4) list_medium_line_x2_t2_g4

0xe665,	// (0x00054af4) list_medium_line_x2_t3

0xe665,	// (0x00054af4) list_medium_line_x2_t3_g2

0xe665,	// (0x00054af4) list_medium_line_x2_t3_g3

0xe665,	// (0x00054af4) list_medium_line_x2_t3_g4

0xe665,	// (0x00054af4) list_medium_line_x2_t4_g2

0xe665,	// (0x00054af4) list_medium_line_x2_t4_g4

0xe665,	// (0x00054af4) list_medium_line_x3

0xe665,	// (0x00054af4) list_medium_line_x3_t4

0xe665,	// (0x00054af4) list_medium_line_x3_t4_g4

0xe665,	// (0x00054af4) list_medium_line_x4_t4

0xe665,	// (0x00054af4) list_medium_line_x4_t4_g7

0xe665,	// (0x00054af4) list_medium_line_x4_t5

0x051d,	// (0x000469ac) list_single_fs_dyc_pane_ParamLimits

0x051d,	// (0x000469ac) list_single_fs_dyc_pane

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g1

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g2

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g3

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g4

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g5

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x4_t4_g7_g6

0x1278,	// (0x00047707) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1278,	// (0x00047707) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x00055f47) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x00055f47) list_medium_line_x4_t4_g7_g

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t1

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t2

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x4_t4_g7_t3

0x135c,	// (0x000477eb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x135c,	// (0x000477eb) list_medium_line_x4_t4_g7_t4

0x135c,	// (0x000477eb) list_medium_line_x4_t4_g7_t5_ParamLimits

0x135c,	// (0x000477eb) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x00055f56) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x00055f56) list_medium_line_x4_t4_g7_t

0x055d,	// (0x000469ec) list_single_dyc_row_pane_ParamLimits

0x055d,	// (0x000469ec) list_single_dyc_row_pane

0x8240,	// (0x0004e6cf) call5_gesture_pane_ParamLimits

0x8240,	// (0x0004e6cf) call5_gesture_pane

0x8296,	// (0x0004e725) call5_windows_pane_ParamLimits

0x8296,	// (0x0004e725) call5_windows_pane

0x8352,	// (0x0004e7e1) call5_swipe_1_pane_cp_ParamLimits

0x8352,	// (0x0004e7e1) call5_swipe_1_pane_cp

0x835e,	// (0x0004e7ed) call5_swipe_2_pane_cp_ParamLimits

0x835e,	// (0x0004e7ed) call5_swipe_2_pane_cp

0x1d9b,	// (0x0004822a) call5_image_pane_cp

0x836a,	// (0x0004e7f9) popup_call5_audio_first_window_cp_ParamLimits

0x836a,	// (0x0004e7f9) popup_call5_audio_first_window_cp

0xe14f,	// (0x000545de) call5_swipe_1_pane_g1_cp_ParamLimits

0xe14f,	// (0x000545de) call5_swipe_1_pane_g1_cp

0xe15c,	// (0x000545eb) call5_swipe_1_pane_g2_cp

0xe164,	// (0x000545f3) call5_swipe_1_pane_t1_cp_ParamLimits

0xe164,	// (0x000545f3) call5_swipe_1_pane_t1_cp

0xe14f,	// (0x000545de) call5_swipe_2_pane_g1_cp_ParamLimits

0xe14f,	// (0x000545de) call5_swipe_2_pane_g1_cp

0xe179,	// (0x00054608) call5_swipe_2_pane_g2_cp

0xe181,	// (0x00054610) call5_swipe_2_pane_t1_cp_ParamLimits

0xe181,	// (0x00054610) call5_swipe_2_pane_t1_cp

0x0c30,	// (0x000470bf) main_sp_fs_email_pane

0xd446,	// (0x000538d5) main_sp_fs_listscroll_pane_te

0x057a,	// (0x00046a09) popup_sp_fs_action_menu_pane_ParamLimits

0x057a,	// (0x00046a09) popup_sp_fs_action_menu_pane

0x133e,	// (0x000477cd) bg_sp_fs_ctrlbar_pane_g1

0xe196,	// (0x00054625) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe19f,	// (0x0005462e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1a8,	// (0x00054637) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x133e,	// (0x000477cd) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x0005603f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe13,	// (0x000522a2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe13,	// (0x000522a2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1b1,	// (0x00054640) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1b1,	// (0x00054640) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1bd,	// (0x0005464c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe1bd,	// (0x0005464c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x00056048) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x00056048) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1c9,	// (0x00054658) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1c9,	// (0x00054658) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x133e,	// (0x000477cd) list_medium_line_t2_right_icon_g1

0x3621,	// (0x00049ab0) list_medium_line_t2_right_icon_t1

0x3621,	// (0x00049ab0) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x0005604d) list_medium_line_t2_right_icon_t

0xa9fd,	// (0x00050e8c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa9fd,	// (0x00050e8c) bg_sp_fs_ctrlbar_pane

0x83c5,	// (0x0004e854) main_sp_fs_ctrlbar_button_pane_cp01

0x83cf,	// (0x0004e85e) main_sp_fs_ctrlbar_ddmenu_pane

0xe21d,	// (0x000546ac) main_sp_fs_ctrlbar_pane_g1

0xe229,	// (0x000546b8) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x00056052) main_sp_fs_ctrlbar_pane_g

0x840d,	// (0x0004e89c) main_sp_fs_ctrlbar_pane_t1

0x844c,	// (0x0004e8db) main_sp_fs_ctrlbar_pane

0x8470,	// (0x0004e8ff) main_sp_fs_listscroll_pane_te_cp01

0x05c0,	// (0x00046a4f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x05c0,	// (0x00046a4f) popup_sp_fs_action_menu_pane_cp01

0x0c30,	// (0x000470bf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0c30,	// (0x000470bf) bg_sp_fs_highlight_list_pane_cp01

0xcd7f,	// (0x0005320e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcd7f,	// (0x0005320e) sp_fs_action_menu_list_gene_pane_g1

0xe250,	// (0x000546df) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe250,	// (0x000546df) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x00056060) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x00056060) sp_fs_action_menu_list_gene_pane_g

0xcd8e,	// (0x0005321d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcd8e,	// (0x0005321d) sp_fs_action_menu_list_gene_pane_t1

0xcda6,	// (0x00053235) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcda6,	// (0x00053235) sp_fs_action_menu_list_gene_pane

0xe25d,	// (0x000546ec) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe25d,	// (0x000546ec) popup_sp_fs_action_menu_bg_pane

0xcdc9,	// (0x00053258) sp_fs_action_menu_list_pane_ParamLimits

0xcdc9,	// (0x00053258) sp_fs_action_menu_list_pane

0xcded,	// (0x0005327c) sp_fs_scroll_pane_cp01_ParamLimits

0xcded,	// (0x0005327c) sp_fs_scroll_pane_cp01

0x3621,	// (0x00049ab0) list_medium_line_plain_t2_t1

0x3621,	// (0x00049ab0) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x0005604d) list_medium_line_plain_t2_t

0x3621,	// (0x00049ab0) list_medium_line_plain_t3_t1

0x3621,	// (0x00049ab0) list_medium_line_plain_t3_t2

0x3621,	// (0x00049ab0) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000556e3) list_medium_line_plain_t3_t

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g2_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_x2_t2_g2_g

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g2_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_x2_t2_g2_t

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g2_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_x2_t4_g2_g

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t2

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t3

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00055636) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00055636) list_medium_line_x2_t4_g2_t

0x133e,	// (0x000477cd) list_medium_line_t3_right_iconx2_g1

0x133e,	// (0x000477cd) list_medium_line_t3_right_iconx2_g2

0x133e,	// (0x000477cd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000557ff) list_medium_line_t3_right_iconx2_g

0x3621,	// (0x00049ab0) list_medium_line_t3_right_iconx2_t1

0x3621,	// (0x00049ab0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0005604d) list_medium_line_t3_right_iconx2_t

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g1

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g2

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g3

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0005562d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0005562d) list_medium_line_x3_t4_g4_g

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t1

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t2

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t3

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00055636) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00055636) list_medium_line_x3_t4_g4_t

0x05e5,	// (0x00046a74) list_single_dyc_row_text_pane_t1_ParamLimits

0x05e5,	// (0x00046a74) list_single_dyc_row_text_pane_t1

0x062e,	// (0x00046abd) list_single_dyc_row_text_pane_t2_ParamLimits

0x062e,	// (0x00046abd) list_single_dyc_row_text_pane_t2

0xce13,	// (0x000532a2) list_single_dyc_row_text_pane_t3_ParamLimits

0xce13,	// (0x000532a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x00056065) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x00056065) list_single_dyc_row_text_pane_t

0xce37,	// (0x000532c6) list_single_dyc_row_pane_g1_ParamLimits

0xce37,	// (0x000532c6) list_single_dyc_row_pane_g1

0xce43,	// (0x000532d2) list_single_dyc_row_pane_g2_ParamLimits

0xce43,	// (0x000532d2) list_single_dyc_row_pane_g2

0xce4f,	// (0x000532de) list_single_dyc_row_pane_g3_ParamLimits

0xce4f,	// (0x000532de) list_single_dyc_row_pane_g3

0xce62,	// (0x000532f1) list_single_dyc_row_pane_g4_ParamLimits

0xce62,	// (0x000532f1) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x00056072) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x00056072) list_single_dyc_row_pane_g

0xceb4,	// (0x00053343) list_single_dyc_row_text_pane_ParamLimits

0xceb4,	// (0x00053343) list_single_dyc_row_text_pane

0xe665,	// (0x00054af4) bg_sp_fs_scroll_pane

0xe26b,	// (0x000546fa) thumb_sp_fs_scroll_pane

0x126a,	// (0x000476f9) list_medium_line_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g1

0x1348,	// (0x000477d7) list_medium_line_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t1

0x126a,	// (0x000476f9) list_medium_line_x2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_g1

0x126a,	// (0x000476f9) list_medium_line_x2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_x2_g

0x1348,	// (0x000477d7) list_medium_line_x2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t1

0x126a,	// (0x000476f9) list_medium_line_x3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x3_g1

0xe274,	// (0x00054703) list_medium_line_x3_g2_ParamLimits

0xe274,	// (0x00054703) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x00056081) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x00056081) list_medium_line_x3_g

0xe282,	// (0x00054711) list_medium_line_x3_t1_ParamLimits

0xe282,	// (0x00054711) list_medium_line_x3_t1

0xe296,	// (0x00054725) thumb_sp_fs_scroll_pane_g1

0xe29f,	// (0x0005472e) thumb_sp_fs_scroll_pane_g2

0xe2a8,	// (0x00054737) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00056086) thumb_sp_fs_scroll_pane_g

0xe296,	// (0x00054725) bg_sp_fs_scroll_pane_g1

0xe29f,	// (0x0005472e) bg_sp_fs_scroll_pane_g2

0xe2a8,	// (0x00054737) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00056086) bg_sp_fs_scroll_pane_g

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g1

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g2

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g3

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0005562d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0005562d) list_medium_line_x2_t3_g4_g

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t1

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t2

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_x2_t3_g4_t

0x126a,	// (0x000476f9) list_medium_line_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g2_g1

0x126a,	// (0x000476f9) list_medium_line_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_g2_g

0x1348,	// (0x000477d7) list_medium_line_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_g2_t1

0x126a,	// (0x000476f9) list_medium_line_t3_g2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g2_g1

0x126a,	// (0x000476f9) list_medium_line_t3_g2_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00055628) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00055628) list_medium_line_t3_g2_g

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t1

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t2

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_t3_g2_t

0x133e,	// (0x000477cd) list_medium_line_right_icon_g1

0x3621,	// (0x00049ab0) list_medium_line_right_icon_t1

0x126a,	// (0x000476f9) list_medium_line_t2_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g1

0x1348,	// (0x000477d7) list_medium_line_t2_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_t1

0x1348,	// (0x000477d7) list_medium_line_t2_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_t2_t

0x126a,	// (0x000476f9) list_medium_line_t3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g1

0x1348,	// (0x000477d7) list_medium_line_t3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_t1

0x1348,	// (0x000477d7) list_medium_line_t3_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_t2

0x1348,	// (0x000477d7) list_medium_line_t3_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_t3_t

0x126a,	// (0x000476f9) list_medium_line_g3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g3_g1

0x126a,	// (0x000476f9) list_medium_line_g3_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g3_g2

0x126a,	// (0x000476f9) list_medium_line_g3_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0005561a) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0005561a) list_medium_line_g3_g

0x1348,	// (0x000477d7) list_medium_line_g3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_g3_t1

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g1

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g2

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0005561a) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0005561a) list_medium_line_t2_g3_g

0x1348,	// (0x000477d7) list_medium_line_t2_g3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_g3_t1

0x1348,	// (0x000477d7) list_medium_line_t2_g3_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000555fd) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000555fd) list_medium_line_t2_g3_t

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g1_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g1

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g2_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g2

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g3_ParamLimits

0x126a,	// (0x000476f9) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0005561a) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0005561a) list_medium_line_t3_g3_g

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t1_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t1

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t2_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t2

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t3_ParamLimits

0x1348,	// (0x000477d7) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00055621) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00055621) list_medium_line_t3_g3_t

0x133e,	// (0x000477cd) list_medium_line_right_iconx2_g1

0x133e,	// (0x000477cd) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005551b) list_medium_line_right_iconx2_g

0x3621,	// (0x00049ab0) list_medium_line_right_iconx2_t1

0x133e,	// (0x000477cd) list_medium_line_t2_right_iconx2_g1

0x133e,	// (0x000477cd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005551b) list_medium_line_t2_right_iconx2_g

0x3621,	// (0x00049ab0) list_medium_line_t2_right_iconx2_t1

0x3621,	// (0x00049ab0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x0005604d) list_medium_line_t2_right_iconx2_t

0x3621,	// (0x00049ab0) list_medium_line_x4_t4_t1

0x3621,	// (0x00049ab0) list_medium_line_x4_t4_t2

0x3621,	// (0x00049ab0) list_medium_line_x4_t4_t3

0x3621,	// (0x00049ab0) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000556ea) list_medium_line_x4_t4_t

0x84e0,	// (0x0004e96f) tport_appsw_pane_ParamLimits

0x84e0,	// (0x0004e96f) tport_appsw_pane

0x84f8,	// (0x0004e987) tport_contact_pane_ParamLimits

0x84f8,	// (0x0004e987) tport_contact_pane

0x8513,	// (0x0004e9a2) tport_listscroll_pane_ParamLimits

0x8513,	// (0x0004e9a2) tport_listscroll_pane

0x852b,	// (0x0004e9ba) cell_tport_appsw_pane_ParamLimits

0x852b,	// (0x0004e9ba) cell_tport_appsw_pane

0xa9db,	// (0x00050e6a) tport_appsw_pane_g1_ParamLimits

0xa9db,	// (0x00050e6a) tport_appsw_pane_g1

0x8575,	// (0x0004ea04) tport_contact_pane_g1

0x857e,	// (0x0004ea0d) tport_contact_pane_t1

0x858c,	// (0x0004ea1b) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0005608d) tport_contact_pane_t

0xe2b1,	// (0x00054740) list_tport_pane

0xe2ba,	// (0x00054749) scroll_pane_cp_030

0x85a2,	// (0x0004ea31) cell_tport_appsw_pane_g1

0x85b2,	// (0x0004ea41) cell_tport_appsw_pane_t1

0x85c0,	// (0x0004ea4f) grid_highlight_pane_cp019

0x85c8,	// (0x0004ea57) list_tport_double_graphic_pane_ParamLimits

0x85c8,	// (0x0004ea57) list_tport_double_graphic_pane

0x0c30,	// (0x000470bf) list_highlight_pane_cp023_ParamLimits

0x0c30,	// (0x000470bf) list_highlight_pane_cp023

0x85d5,	// (0x0004ea64) list_tport_double_graphic_pane_g1_ParamLimits

0x85d5,	// (0x0004ea64) list_tport_double_graphic_pane_g1

0x85e2,	// (0x0004ea71) list_tport_double_graphic_pane_t1_ParamLimits

0x85e2,	// (0x0004ea71) list_tport_double_graphic_pane_t1

0x85f7,	// (0x0004ea86) list_tport_double_graphic_pane_t2_ParamLimits

0x85f7,	// (0x0004ea86) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x00056099) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x00056099) list_tport_double_graphic_pane_t

0xe665,	// (0x00054af4) main_cale_note_pane

0x6540,	// (0x0004c9cf) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6540,	// (0x0004c9cf) cell_vitu2_function_top_wide_pane_cp01

0x7f4a,	// (0x0004e3d9) wait_bar_pane_cp05_ParamLimits

0x0c30,	// (0x000470bf) listscroll_cmail_pane

0xe2cb,	// (0x0005475a) list_cmail_pane

0x8609,	// (0x0004ea98) list_cmail_body_pane

0x8620,	// (0x0004eaaf) list_single_cmail_header_caption_pane

0x863a,	// (0x0004eac9) list_single_cmail_header_detail_pane_ParamLimits

0x863a,	// (0x0004eac9) list_single_cmail_header_detail_pane

0xe2e2,	// (0x00054771) list_single_cmail_header_caption_pane_t1

0x0763,	// (0x00046bf2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0763,	// (0x00046bf2) list_single_cmail_header_detail_pane_g1

0xced9,	// (0x00053368) list_single_cmail_header_detail_pane_g2_ParamLimits

0xced9,	// (0x00053368) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0005609e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0005609e) list_single_cmail_header_detail_pane_g

0x077b,	// (0x00046c0a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x077b,	// (0x00046c0a) list_single_cmail_header_detail_pane_t1

0x07b7,	// (0x00046c46) list_single_cmail_header_editor_pane_bg_ParamLimits

0x07b7,	// (0x00046c46) list_single_cmail_header_editor_pane_bg

0xdf79,	// (0x00054408) list_cmail_body_pane_g1

0xe306,	// (0x00054795) list_cmail_body_pane_t1

0xd21f,	// (0x000536ae) list_single_cmail_header_editor_pane_bg_g1

0x25cd,	// (0x00048a5c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd22f,	// (0x000536be) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd227,	// (0x000536b6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd49d,	// (0x0005392c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd24f,	// (0x000536de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd23f,	// (0x000536ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd247,	// (0x000536d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x25ad,	// (0x00048a3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x866d,	// (0x0004eafc) calenote_gesture_pane_ParamLimits

0x866d,	// (0x0004eafc) calenote_gesture_pane

0x868d,	// (0x0004eb1c) calenote_window_pane_ParamLimits

0x868d,	// (0x0004eb1c) calenote_window_pane

0xe314,	// (0x000547a3) popup_note_window_cp01

0x86a9,	// (0x0004eb38) calenote_swipe_1_pane_ParamLimits

0x86a9,	// (0x0004eb38) calenote_swipe_1_pane

0x835e,	// (0x0004e7ed) calenote_swipe_2_pane_ParamLimits

0x835e,	// (0x0004e7ed) calenote_swipe_2_pane

0xe14f,	// (0x000545de) calenote_swipe_1_pane_g1_ParamLimits

0xe14f,	// (0x000545de) calenote_swipe_1_pane_g1

0xe326,	// (0x000547b5) calenote_swipe_1_pane_g2_ParamLimits

0xe326,	// (0x000547b5) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x000560aa) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x000560aa) calenote_swipe_1_pane_g

0xe332,	// (0x000547c1) calenote_swipe_1_pane_t1_ParamLimits

0xe332,	// (0x000547c1) calenote_swipe_1_pane_t1

0xe14f,	// (0x000545de) calenote_swipe_2_pane_g1_ParamLimits

0xe14f,	// (0x000545de) calenote_swipe_2_pane_g1

0xe351,	// (0x000547e0) calenote_swipe_2_pane_g2_ParamLimits

0xe351,	// (0x000547e0) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x000560af) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x000560af) calenote_swipe_2_pane_g

0xe35d,	// (0x000547ec) calenote_swipe_2_pane_t1_ParamLimits

0xe35d,	// (0x000547ec) calenote_swipe_2_pane_t1

0xe665,	// (0x00054af4) main_mup_navstr_pane

0x551f,	// (0x0004b9ae) main_mup3_pane_t7_ParamLimits

0x551f,	// (0x0004b9ae) main_mup3_pane_t7

0xc953,	// (0x00052de2) main_mp4_pane_g6_ParamLimits

0xc953,	// (0x00052de2) main_mp4_pane_g6

0xcb75,	// (0x00053004) main_image3_pane_t4_ParamLimits

0xcb75,	// (0x00053004) main_image3_pane_t4

0x86be,	// (0x0004eb4d) popup_navstr_preview_pane_ParamLimits

0x86be,	// (0x0004eb4d) popup_navstr_preview_pane

0x86ce,	// (0x0004eb5d) scroll_navstr_pane_ParamLimits

0x86ce,	// (0x0004eb5d) scroll_navstr_pane

0xe665,	// (0x00054af4) bg_popup_preview_window_pane_cp04

0xe384,	// (0x00054813) popup_navstr_preview_pane_t1

0x86e2,	// (0x0004eb71) scroll_navstr_pane_g1_ParamLimits

0x86e2,	// (0x0004eb71) scroll_navstr_pane_g1

0x86f6,	// (0x0004eb85) scroll_navstr_pane_t1_ParamLimits

0x86f6,	// (0x0004eb85) scroll_navstr_pane_t1

0xe31d,	// (0x000547ac) bg_button_pane_cp014

0xe31d,	// (0x000547ac) bg_button_pane_cp030

0x81e6,	// (0x0004e675) list_double_fisheye_pane_g4_ParamLimits

0x81e6,	// (0x0004e675) list_double_fisheye_pane_g4

0x81f2,	// (0x0004e681) list_double_fisheye_pane_g5_ParamLimits

0x81f2,	// (0x0004e681) list_double_fisheye_pane_g5

0xdba7,	// (0x00054036) sp_fs_scroll_pane_cp03

0xe21d,	// (0x000546ac) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe229,	// (0x000546b8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x00056052) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x840d,	// (0x0004e89c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2da,	// (0x00054769) sp_fs_scroll_pane_cp02

0x16d6,	// (0x00047b65) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x16d6,	// (0x00047b65) popup_sp_fs_calendar_preview_list_single_pane

0xe665,	// (0x00054af4) main_cam6_pano_pane

0x0c30,	// (0x000470bf) main_mup3_pane_ParamLimits

0xe665,	// (0x00054af4) main_phacti_pane

0x7e1b,	// (0x0004e2aa) bg_button_pane_cp11

0x7e35,	// (0x0004e2c4) main_mobtv_info_pane_g2_ParamLimits

0x7e35,	// (0x0004e2c4) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x00055fb7) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x00055fb7) main_mobtv_info_pane_g

0x1348,	// (0x000477d7) sc_clock_pane_t5_ParamLimits

0x1348,	// (0x000477d7) sc_clock_pane_t5

0xa9db,	// (0x00050e6a) main_radioblah_pane_g1_ParamLimits

0xa9e9,	// (0x00050e78) main_radioblah_pane_t3_ParamLimits

0xa9e9,	// (0x00050e78) main_radioblah_pane_t3

0xa9e9,	// (0x00050e78) main_radioblah_pane_t4_ParamLimits

0xa9e9,	// (0x00050e78) main_radioblah_pane_t4

0x0c30,	// (0x000470bf) main_radioblah_text_pane_ParamLimits

0x0c30,	// (0x000470bf) main_radioblah_text_pane

0xe086,	// (0x00054515) main_radioblah_info_pane_g1_ParamLimits

0xe0ca,	// (0x00054559) main_radioblah_info_pane_t4_ParamLimits

0xe0ca,	// (0x00054559) main_radioblah_info_pane_t4

0x0c30,	// (0x000470bf) main_sp_fs_calendar_pane

0x870d,	// (0x0004eb9c) main_phacti_pane_g1

0x8715,	// (0x0004eba4) phacti_note_pane_ParamLimits

0x8715,	// (0x0004eba4) phacti_note_pane

0xe39b,	// (0x0005482a) phacti_term_pane_ParamLimits

0xe39b,	// (0x0005482a) phacti_term_pane

0xe3b0,	// (0x0005483f) phacti_note_pane_t1_ParamLimits

0xe3b0,	// (0x0005483f) phacti_note_pane_t1

0xcf09,	// (0x00053398) phacti_term_pane_g1

0xcf11,	// (0x000533a0) phacti_term_pane_t1_ParamLimits

0xcf11,	// (0x000533a0) phacti_term_pane_t1

0xe3c7,	// (0x00054856) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3cf,	// (0x0005485e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x000560b9) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3d7,	// (0x00054866) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3d7,	// (0x00054866) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3ed,	// (0x0005487c) aid_popup_sp_fs_bg_corner_pane

0x133e,	// (0x000477cd) popup_sp_fs_calendar_preview_bg_pane_g1

0xe665,	// (0x00054af4) popup_sp_fs_calendar_preview_bg_pane

0xe3f5,	// (0x00054884) popup_sp_fs_calendar_preview_list_pane

0xe3fd,	// (0x0005488c) bg_main_sp_fs_cale_pane_ParamLimits

0xe3fd,	// (0x0005488c) bg_main_sp_fs_cale_pane

0xe415,	// (0x000548a4) listscroll_cale_mrui_pane_ParamLimits

0xe415,	// (0x000548a4) listscroll_cale_mrui_pane

0xc42a,	// (0x000528b9) listscroll_sp_fs_schedule_track_pane

0xcf44,	// (0x000533d3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcf44,	// (0x000533d3) main_sp_fs_ctrlbar_pane_cp01

0xc42a,	// (0x000528b9) main_sp_fs_ribbon_pane

0xcf5a,	// (0x000533e9) popup_sp_fs_cale_preview_window

0xdb8d,	// (0x0005401c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdb8d,	// (0x0005401c) list_single_sp_fs_schedule_track_pane

0xe7ef,	// (0x00054c7e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe7ef,	// (0x00054c7e) bg_sp_fs_highlight_list_pane_cp03

0xe7e3,	// (0x00054c72) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe7e3,	// (0x00054c72) list_single_sp_fs_schedule_track_pane_g1

0xe7e3,	// (0x00054c72) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe7e3,	// (0x00054c72) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x000560be) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x000560be) list_single_sp_fs_schedule_track_pane_g

0x8729,	// (0x0004ebb8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8729,	// (0x0004ebb8) list_single_sp_fs_schedule_track_pane_t1

0x873b,	// (0x0004ebca) sp_fs_schedule_track_pane_ParamLimits

0x873b,	// (0x0004ebca) sp_fs_schedule_track_pane

0xc432,	// (0x000528c1) sp_fs_schedule_track_pane_g1

0xc432,	// (0x000528c1) sp_fs_schedule_track_pane_g2

0xc432,	// (0x000528c1) sp_fs_schedule_track_pane_g3

0xc432,	// (0x000528c1) sp_fs_schedule_track_pane_g4

0xc432,	// (0x000528c1) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c3,	// (0x00055c52) sp_fs_schedule_track_pane_g

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g1

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g2

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g3

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g4

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g5

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g6

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g7

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g8

0xc432,	// (0x000528c1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc34,	// (0x000560c3) bg_sp_fs_schedule_viewer_highlight_g

0xc42a,	// (0x000528b9) bg_main_sp_fs_ribbon_pane

0xc432,	// (0x000528c1) main_sp_fs_ribbon_pane_g1

0xe42d,	// (0x000548bc) main_sp_fs_ribbon_pane_t1

0xe42d,	// (0x000548bc) main_sp_fs_ribbon_pane_t2

0xe42d,	// (0x000548bc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc47,	// (0x000560d6) main_sp_fs_ribbon_pane_t

0xc42a,	// (0x000528b9) main_sp_fs_ribbon_scheduler_pane

0xc432,	// (0x000528c1) bg_main_sp_fs_ribbon_pane_g1

0xc432,	// (0x000528c1) bg_main_sp_fs_ribbon_pane_g2

0xc432,	// (0x000528c1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x00055b2a) bg_main_sp_fs_ribbon_pane_g

0xc432,	// (0x000528c1) main_sp_fs_ribbon_scheduler_pane_g1

0xc432,	// (0x000528c1) main_sp_fs_ribbon_scheduler_pane_g2

0xc432,	// (0x000528c1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x00055b2a) main_sp_fs_ribbon_scheduler_pane_g

0xe43b,	// (0x000548ca) list_cale_mrui_pane

0x8747,	// (0x0004ebd6) sp_fs_scroll_pane_cp07_ParamLimits

0x8747,	// (0x0004ebd6) sp_fs_scroll_pane_cp07

0xe7ef,	// (0x00054c7e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe7ef,	// (0x00054c7e) bg_sp_fs_schedule_viewer_highlight

0xc42a,	// (0x000528b9) list_single_sp_fs_schedule_track_pane_cp01

0xc42a,	// (0x000528b9) list_sp_fs_schedule_track_pane

0xe448,	// (0x000548d7) sp_fs_scroll_pane_cp06_ParamLimits

0xe448,	// (0x000548d7) sp_fs_scroll_pane_cp06

0x133e,	// (0x000477cd) bgmain_sp_fs_calendar_pane_g1

0x07ca,	// (0x00046c59) list_single_cale_mrui_pane_ParamLimits

0x07ca,	// (0x00046c59) list_single_cale_mrui_pane

0xcf6c,	// (0x000533fb) list_single_cale_mrui_row_pane_ParamLimits

0xcf6c,	// (0x000533fb) list_single_cale_mrui_row_pane

0xcf79,	// (0x00053408) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf79,	// (0x00053408) list_single_cale_mrui_row_pane_g1

0xcfb1,	// (0x00053440) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcfb1,	// (0x00053440) list_single_cale_mrui_row_pane_t1

0x07ed,	// (0x00046c7c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x07ed,	// (0x00046c7c) list_single_cale_mrui_row_pane_t2

0xcfc3,	// (0x00053452) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcfc3,	// (0x00053452) list_single_cale_mrui_row_pane_t3

0xcff2,	// (0x00053481) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcff2,	// (0x00053481) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc55,	// (0x000560e4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc55,	// (0x000560e4) list_single_cale_mrui_row_pane_t

0x0853,	// (0x00046ce2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0853,	// (0x00046ce2) list_single_cmail_header_editor_pane_bg_cp01

0x087f,	// (0x00046d0e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x087f,	// (0x00046d0e) list_single_cmail_header_editor_pane_bg_cp02

0xe469,	// (0x000548f8) main_radioblah_text_pane_t1_ParamLimits

0xe469,	// (0x000548f8) main_radioblah_text_pane_t1

0xe483,	// (0x00054912) cam6_indi_pane_cp01

0xe48b,	// (0x0005491a) cam6_mode_pane_cp01

0xe493,	// (0x00054922) cam6_pano_pane

0xe49c,	// (0x0005492b) cam6_zoom_pane_cp01

0xe4a6,	// (0x00054935) cam6_pano_image_pane

0xe4af,	// (0x0005493e) cam6_pano_pane_g1

0xdf79,	// (0x00054408) cam6_pano_pane_g2

0xe4b8,	// (0x00054947) cam6_pano_pane_g3

0xe4c1,	// (0x00054950) cam6_pano_pane_g4

0xc6d7,	// (0x00052b66) cam6_pano_pane_g5

0xe4ca,	// (0x00054959) cam6_pano_pane_g6

0xe4d2,	// (0x00054961) cam6_pano_pane_g7

0xe4da,	// (0x00054969) cam6_pano_pane_g8

0xe4e3,	// (0x00054972) cam6_pano_pane_g9

0x0008,

0xfc5e,	// (0x000560ed) cam6_pano_pane_g

0xe665,	// (0x00054af4) main_browser_tag_pane

0xe37c,	// (0x0005480b) grid_navstr_albumart_pane

0xe4ee,	// (0x0005497d) cell_navstr_albumart_pane_ParamLimits

0xe4ee,	// (0x0005497d) cell_navstr_albumart_pane

0xe50a,	// (0x00054999) cell_navstr_albumart_pane_g1

0xe512,	// (0x000549a1) cell_navstr_albumart_pane_g2

0xe51a,	// (0x000549a9) cell_navstr_albumart_pane_g3

0xe522,	// (0x000549b1) cell_navstr_albumart_pane_g4

0x0003,

0xfc71,	// (0x00056100) cell_navstr_albumart_pane_g

0x8763,	// (0x0004ebf2) bt_list_pane_ParamLimits

0x8763,	// (0x0004ebf2) bt_list_pane

0x8779,	// (0x0004ec08) bt_list_pane_t1

0x8788,	// (0x0004ec17) bt_list_pane_t2

0x0001,

0xfc7a,	// (0x00056109) bt_list_pane_t

0xe665,	// (0x00054af4) main_cale_prevew_pane

0x8797,	// (0x0004ec26) popup_cale_preview_window_ParamLimits

0x8797,	// (0x0004ec26) popup_cale_preview_window

0x0c30,	// (0x000470bf) bg_popup_preview_window_pane_cp05_ParamLimits

0x0c30,	// (0x000470bf) bg_popup_preview_window_pane_cp05

0xe52a,	// (0x000549b9) list_cale_preview_pane_ParamLimits

0xe52a,	// (0x000549b9) list_cale_preview_pane

0x87b4,	// (0x0004ec43) list_double_cale_preview_pane_ParamLimits

0x87b4,	// (0x0004ec43) list_double_cale_preview_pane

0x87c8,	// (0x0004ec57) list_single_cale_preview_pane_ParamLimits

0x87c8,	// (0x0004ec57) list_single_cale_preview_pane

0x87e0,	// (0x0004ec6f) list_single_cale_preview_pane_g1

0x87e8,	// (0x0004ec77) list_single_cale_preview_pane_t1_ParamLimits

0x87e8,	// (0x0004ec77) list_single_cale_preview_pane_t1

0x87fd,	// (0x0004ec8c) list_double_cale_preview_pane_g1

0x8805,	// (0x0004ec94) list_double_cale_preview_pane_t1_ParamLimits

0x8805,	// (0x0004ec94) list_double_cale_preview_pane_t1

0x881a,	// (0x0004eca9) list_double_cale_preview_pane_t2_ParamLimits

0x881a,	// (0x0004eca9) list_double_cale_preview_pane_t2

0x0001,

0xfc7f,	// (0x0005610e) list_double_cale_preview_pane_t_ParamLimits

0xfc7f,	// (0x0005610e) list_double_cale_preview_pane_t

0xe665,	// (0x00054af4) main_ezdial_pane

0x0c30,	// (0x000470bf) main_sp_fs_email_pane_ParamLimits

0x8378,	// (0x0004e807) cmail_ddmenu_btn01_pane_ParamLimits

0x8378,	// (0x0004e807) cmail_ddmenu_btn01_pane

0x838b,	// (0x0004e81a) cmail_ddmenu_btn02_pane_ParamLimits

0x838b,	// (0x0004e81a) cmail_ddmenu_btn02_pane

0x83ae,	// (0x0004e83d) cmail_ddmenu_btn03_pane_ParamLimits

0x83ae,	// (0x0004e83d) cmail_ddmenu_btn03_pane

0x844c,	// (0x0004e8db) main_sp_fs_ctrlbar_pane_ParamLimits

0x8470,	// (0x0004e8ff) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8609,	// (0x0004ea98) list_cmail_body_pane_ParamLimits

0xe2f0,	// (0x0005477f) bg_button_pane_cp12

0xe2f9,	// (0x00054788) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2f9,	// (0x00054788) list_single_cmail_header_detail_pane_g3

0xcee5,	// (0x00053374) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcee5,	// (0x00053374) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x000560a5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x000560a5) list_single_cmail_header_detail_pane_t

0xcf26,	// (0x000533b5) phacti_term_pane_t2_ParamLimits

0xcf26,	// (0x000533b5) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x000560b4) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x000560b4) phacti_term_pane_t

0xe536,	// (0x000549c5) aid_size_list_single_double

0x8832,	// (0x0004ecc1) popup_ezdial_listscroll_window

0xe542,	// (0x000549d1) popup_number_entry_window_cp01

0x1d9b,	// (0x0004822a) bg_popup_call_pane_cp09

0xe54f,	// (0x000549de) ezdial_list_pane

0xe557,	// (0x000549e6) scroll_pane_cp23

0xa9fd,	// (0x00050e8c) bg_button_pane_cp028_ParamLimits

0xa9fd,	// (0x00050e8c) bg_button_pane_cp028

0x884e,	// (0x0004ecdd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x884e,	// (0x0004ecdd) cmail_ddmenu_btn01_pane_g1

0x885d,	// (0x0004ecec) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x885d,	// (0x0004ecec) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc84,	// (0x00056113) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc84,	// (0x00056113) cmail_ddmenu_btn01_pane_g

0xe55f,	// (0x000549ee) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe55f,	// (0x000549ee) cmail_ddmenu_btn01_pane_t1

0xa9fd,	// (0x00050e8c) bg_button_pane_cp029_ParamLimits

0xa9fd,	// (0x00050e8c) bg_button_pane_cp029

0x8873,	// (0x0004ed02) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8873,	// (0x0004ed02) cmail_ddmenu_btn02_pane_g1

0x888e,	// (0x0004ed1d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x888e,	// (0x0004ed1d) cmail_ddmenu_btn02_pane_t1

0x0c30,	// (0x000470bf) bg_button_pane_cp031_ParamLimits

0x0c30,	// (0x000470bf) bg_button_pane_cp031

0x8873,	// (0x0004ed02) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8873,	// (0x0004ed02) cmail_ddmenu_btn03_pane_g1

0x888e,	// (0x0004ed1d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x888e,	// (0x0004ed1d) cmail_ddmenu_btn03_pane_t1

0x1348,	// (0x000477d7) cell_dialer2_keypad_pane_t1_ParamLimits

0xc715,	// (0x00052ba4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc715,	// (0x00052ba4) cell_dialer2_keypad_pane_t1_copy1

0x7c3c,	// (0x0004e0cb) ncimui_group_button_pane

0x0c30,	// (0x000470bf) main_sp_fs_calendar_pane_ParamLimits

0x8620,	// (0x0004eaaf) list_single_cmail_header_caption_pane_ParamLimits

0xcf3b,	// (0x000533ca) aid_recal_txt_sm_pane

0xe665,	// (0x00054af4) mian_recal_day_pane

0xcf5a,	// (0x000533e9) popup_sp_fs_cale_preview_window_ParamLimits

0xe575,	// (0x00054a04) list_recal_day_pane

0xd03d,	// (0x000534cc) list_single_recal_day_pane_ParamLimits

0xd03d,	// (0x000534cc) list_single_recal_day_pane

0xe59c,	// (0x00054a2b) list_single_recal_day_pane_g1_ParamLimits

0xe59c,	// (0x00054a2b) list_single_recal_day_pane_g1

0xd04f,	// (0x000534de) list_single_recal_day_pane_g2_ParamLimits

0xd04f,	// (0x000534de) list_single_recal_day_pane_g2

0xd05b,	// (0x000534ea) list_single_recal_day_pane_g3_ParamLimits

0xd05b,	// (0x000534ea) list_single_recal_day_pane_g3

0x089d,	// (0x00046d2c) list_single_recal_day_pane_g4_ParamLimits

0x089d,	// (0x00046d2c) list_single_recal_day_pane_g4

0xd067,	// (0x000534f6) list_single_recal_day_pane_g5_ParamLimits

0xd067,	// (0x000534f6) list_single_recal_day_pane_g5

0xd073,	// (0x00053502) list_single_recal_day_pane_g6_ParamLimits

0xd073,	// (0x00053502) list_single_recal_day_pane_g6

0x0004,

0xfc93,	// (0x00056122) list_single_recal_day_pane_g_ParamLimits

0xfc93,	// (0x00056122) list_single_recal_day_pane_g

0xd087,	// (0x00053516) list_single_recal_day_pane_t1

0xd099,	// (0x00053528) list_single_recal_day_pane_t2

0x0001,

0xfc9e,	// (0x0005612d) list_single_recal_day_pane_t

0x88b5,	// (0x0004ed44) ncimui_query_button_pane_ParamLimits

0x88b5,	// (0x0004ed44) ncimui_query_button_pane

0x88c5,	// (0x0004ed54) ncimui_query_button_pane_t1_ParamLimits

0x88c5,	// (0x0004ed54) ncimui_query_button_pane_t1

0xe5a8,	// (0x00054a37) ncimui_query_button_pane_t2_ParamLimits

0xe5a8,	// (0x00054a37) ncimui_query_button_pane_t2

0x0001,

0xfca3,	// (0x00056132) ncimui_query_button_pane_t_ParamLimits

0xfca3,	// (0x00056132) ncimui_query_button_pane_t

0x88d8,	// (0x0004ed67) query_button_pane_ParamLimits

0x88d8,	// (0x0004ed67) query_button_pane

0xe665,	// (0x00054af4) bg_button_pane_cp0028

0xe5bb,	// (0x00054a4a) query_button_pane_t1

0x47a5,	// (0x0004ac34) main_tport_pane_ParamLimits

0x849c,	// (0x0004e92b) bg_popup_window_pane_cp01_ParamLimits

0x849c,	// (0x0004e92b) bg_popup_window_pane_cp01

0x84b5,	// (0x0004e944) heading_pane_cp08_ParamLimits

0x84b5,	// (0x0004e944) heading_pane_cp08

0x84cb,	// (0x0004e95a) heading_pane_cp07_ParamLimits

0x84cb,	// (0x0004e95a) heading_pane_cp07

0x85a2,	// (0x0004ea31) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x00056092) cell_tport_appsw_pane_g

0xaa9a,	// (0x00050f29) input_candi_list_open_g1

0x344c,	// (0x000498db) list_cale_time_pane_g6_ParamLimits

0x344c,	// (0x000498db) list_cale_time_pane_g6

0x4e54,	// (0x0004b2e3) aid_size_touch_calib_1_ParamLimits

0x4e54,	// (0x0004b2e3) aid_size_touch_calib_1

0x4e66,	// (0x0004b2f5) aid_size_touch_calib_2_ParamLimits

0x4e66,	// (0x0004b2f5) aid_size_touch_calib_2

0x4e7e,	// (0x0004b30d) aid_size_touch_calib_3_ParamLimits

0x4e7e,	// (0x0004b30d) aid_size_touch_calib_3

0x4e9c,	// (0x0004b32b) aid_size_touch_calib_4_ParamLimits

0x4e9c,	// (0x0004b32b) aid_size_touch_calib_4

0x4eb4,	// (0x0004b343) main_touch_calib_button_group_pane_ParamLimits

0x4eb4,	// (0x0004b343) main_touch_calib_button_group_pane

0x4ecc,	// (0x0004b35b) main_touch_calib_pane_g1_ParamLimits

0x4ede,	// (0x0004b36d) main_touch_calib_pane_g2_ParamLimits

0x4ef0,	// (0x0004b37f) main_touch_calib_pane_g3_ParamLimits

0x4f02,	// (0x0004b391) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x00055ad8) main_touch_calib_pane_g_ParamLimits

0x4f14,	// (0x0004b3a3) main_touch_calib_pane_t1_ParamLimits

0x4f2e,	// (0x0004b3bd) main_touch_calib_pane_t2_ParamLimits

0x4f48,	// (0x0004b3d7) main_touch_calib_pane_t3_ParamLimits

0x4f5c,	// (0x0004b3eb) main_touch_calib_pane_t4_ParamLimits

0x4f72,	// (0x0004b401) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x00055ae1) main_touch_calib_pane_t_ParamLimits

0xc492,	// (0x00052921) list_single_fp_cale_pane_g3_ParamLimits

0xc492,	// (0x00052921) list_single_fp_cale_pane_g3

0x0c30,	// (0x000470bf) bg_button_pane_cp012_ParamLimits

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp03_ParamLimits

0x6e1d,	// (0x0004d2ac) cell_vitu2_function_top_pane_g1_ParamLimits

0x0c30,	// (0x000470bf) bg_vkb2_func_pane_cp04_ParamLimits

0x7bc7,	// (0x0004e056) main_ncimui_button_group_pane_ParamLimits

0x7bc7,	// (0x0004e056) main_ncimui_button_group_pane

0x7c27,	// (0x0004e0b6) main_ncimui_pane_t3_ParamLimits

0x7c27,	// (0x0004e0b6) main_ncimui_pane_t3

0xe392,	// (0x00054821) phacti_button_group_pane

0xe536,	// (0x000549c5) aid_size_list_single_double_ParamLimits

0x8832,	// (0x0004ecc1) popup_ezdial_listscroll_window_ParamLimits

0xe542,	// (0x000549d1) popup_number_entry_window_cp01_ParamLimits

0x88eb,	// (0x0004ed7a) phacti_button_pane_ParamLimits

0x88eb,	// (0x0004ed7a) phacti_button_pane

0xe665,	// (0x00054af4) bg_button_pane_cp14

0xe5c9,	// (0x00054a58) phacti_button_pane_t1

0x88fc,	// (0x0004ed8b) main_touch_calib_button_pane_ParamLimits

0x88fc,	// (0x0004ed8b) main_touch_calib_button_pane

0x13b0,	// (0x0004783f) bg_button_pane_cp18_ParamLimits

0x13b0,	// (0x0004783f) bg_button_pane_cp18

0xe5d7,	// (0x00054a66) main_touch_calib_button_pane_t1_ParamLimits

0xe5d7,	// (0x00054a66) main_touch_calib_button_pane_t1

0xe5ed,	// (0x00054a7c) main_touch_calib_button_pane_t2_ParamLimits

0xe5ed,	// (0x00054a7c) main_touch_calib_button_pane_t2

0x0001,

0xfca8,	// (0x00056137) main_touch_calib_button_pane_t_ParamLimits

0xfca8,	// (0x00056137) main_touch_calib_button_pane_t

0xe665,	// (0x00054af4) cell_ncimui_button_pane

0xe665,	// (0x00054af4) bg_button_pane_cp032

0xe60b,	// (0x00054a9a) cell_ncimui_button_pane_t1

0xcb53,	// (0x00052fe2) image3_infobar_pane_ParamLimits

0xcb53,	// (0x00052fe2) image3_infobar_pane

0x7f9b,	// (0x0004e42a) fs_bigclock_status_pane_ParamLimits

0x7f9b,	// (0x0004e42a) fs_bigclock_status_pane

0x7fa8,	// (0x0004e437) main_fs_bigclock_clock_pane_ParamLimits

0x7fa8,	// (0x0004e437) main_fs_bigclock_clock_pane

0x7fda,	// (0x0004e469) main_fs_bigclock_indi_pane_ParamLimits

0x7fda,	// (0x0004e469) main_fs_bigclock_indi_pane

0x801a,	// (0x0004e4a9) main_fs_bigclock_swipe_pane_ParamLimits

0x801a,	// (0x0004e4a9) main_fs_bigclock_swipe_pane

0xe665,	// (0x00054af4) main_fs_clock_dumped_data

0x8066,	// (0x0004e4f5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8066,	// (0x0004e4f5) list_single_fs_bigclock_indicator_pane_g1

0x807f,	// (0x0004e50e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x807f,	// (0x0004e50e) list_single_fs_bigclock_indicator_pane_g2

0x8099,	// (0x0004e528) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8099,	// (0x0004e528) list_single_fs_bigclock_indicator_pane_g3

0x80b3,	// (0x0004e542) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x80b3,	// (0x0004e542) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x00055feb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x00055feb) list_single_fs_bigclock_indicator_pane_g

0x80e2,	// (0x0004e571) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x80e2,	// (0x0004e571) list_single_fs_bigclock_indicator_pane_t1

0x810a,	// (0x0004e599) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x810a,	// (0x0004e599) list_single_fs_bigclock_indicator_pane_t2

0x8132,	// (0x0004e5c1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8132,	// (0x0004e5c1) list_single_fs_bigclock_indicator_pane_t3

0x815a,	// (0x0004e5e9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x815a,	// (0x0004e5e9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x00055ff6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x00055ff6) list_single_fs_bigclock_indicator_pane_t

0xe619,	// (0x00054aa8) image3_infobar_fav_pane_ParamLimits

0xe619,	// (0x00054aa8) image3_infobar_fav_pane

0xe629,	// (0x00054ab8) image3_infobar_loc_pane_ParamLimits

0xe629,	// (0x00054ab8) image3_infobar_loc_pane

0xe63f,	// (0x00054ace) image3_infobar_time_pane_ParamLimits

0xe63f,	// (0x00054ace) image3_infobar_time_pane

0x133e,	// (0x000477cd) image3_infobar_time_pane_g1

0xe64f,	// (0x00054ade) image3_infobar_time_pane_t1

0x133e,	// (0x000477cd) image3_infobar_loc_pane_g1

0xe65d,	// (0x00054aec) image3_infobar_loc_pane_g2

0x0001,

0xfcad,	// (0x0005613c) image3_infobar_loc_pane_g

0xe829,	// (0x00054cb8) image3_infobar_loc_pane_t1

0x133e,	// (0x000477cd) image3_infobar_fav_pane_g1

0xe837,	// (0x00054cc6) image3_infobar_fav_pane_g2

0x0001,

0xfcb2,	// (0x00056141) image3_infobar_fav_pane_g

0xe83f,	// (0x00054cce) fs_bigclock_status_battery_pane

0xe848,	// (0x00054cd7) fs_bigclock_status_signal_pane

0xe851,	// (0x00054ce0) fs_bigclock_status_title_pane

0xe85a,	// (0x00054ce9) fs_bigclock_status_signal_pane_g1

0xe863,	// (0x00054cf2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcb7,	// (0x00056146) fs_bigclock_status_signal_pane_g

0xe86b,	// (0x00054cfa) fs_bigclock_status_battery_pane_g1

0xe874,	// (0x00054d03) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcbc,	// (0x0005614b) fs_bigclock_status_battery_pane_g

0xe87c,	// (0x00054d0b) fs_bigclock_status_title_pane_t1

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g1

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g2

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g3

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcc1,	// (0x00056150) main_fs_bigclock_clock_pane_g

0x8929,	// (0x0004edb8) main_fs_bigclock_clock_pane_t1

0x8941,	// (0x0004edd0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcca,	// (0x00056159) main_fs_bigclock_clock_pane_t

0xe88a,	// (0x00054d19) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe88a,	// (0x00054d19) list_single_fs_bigclock_indicator_pane

0xe89b,	// (0x00054d2a) list_single_fs_bigclock_pane_ParamLimits

0xe89b,	// (0x00054d2a) list_single_fs_bigclock_pane

0xe8c1,	// (0x00054d50) main_fs_bigclock_indicator_pane_t1

0xe8d0,	// (0x00054d5f) list_single_fs_bigclock_pane_g1

0xe8d8,	// (0x00054d67) list_single_fs_bigclock_pane_t1

0x133e,	// (0x000477cd) main_fs_bigclock_swipe_pane_g1

0xe91b,	// (0x00054daa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcdb,	// (0x0005616a) main_fs_bigclock_swipe_pane_g

0xe923,	// (0x00054db2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe923,	// (0x00054db2) main_fs_bigclock_swipe_pane_t1

0x373f,	// (0x00049bce) call_type_pane_ParamLimits

0xe665,	// (0x00054af4) main_btmg_pane

0xcfa5,	// (0x00053434) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcfa5,	// (0x00053434) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc4e,	// (0x000560dd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc4e,	// (0x000560dd) list_single_cale_mrui_row_pane_g

0xd02b,	// (0x000534ba) list_recal_vselct_arw_lo_pane

0xe594,	// (0x00054a23) list_recal_vselct_arw_up_pane

0xd033,	// (0x000534c2) list_recal_vselct_pane

0x89a3,	// (0x0004ee32) btmg_button_pane

0x89ad,	// (0x0004ee3c) main_btmg_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp044

0xe940,	// (0x00054dcf) btmg_button_pane_t1

0xbc78,	// (0x00052107) aid_listscroll_gen

0x0c30,	// (0x000470bf) main_cntbar_detail_pane

0xe2c3,	// (0x00054752) list_cmail_folder_pane

0xdba7,	// (0x00054036) sp_fs_scroll_pane_cp03_ParamLimits

0x08b5,	// (0x00046d44) list_single_fs_dyc_pane_cp01_ParamLimits

0x08b5,	// (0x00046d44) list_single_fs_dyc_pane_cp01

0xe94e,	// (0x00054ddd) aid_size_cmail_indent

0xd0ab,	// (0x0005353a) list_single_dyc_row_pane_cp01

0x89eb,	// (0x0004ee7a) cntbar_detail_list_pane_ParamLimits

0x89eb,	// (0x0004ee7a) cntbar_detail_list_pane

0x8a3d,	// (0x0004eecc) main_cntbar_detail_cont_pane_ParamLimits

0x8a3d,	// (0x0004eecc) main_cntbar_detail_cont_pane

0xdba7,	// (0x00054036) scroll_pane_cp032_ParamLimits

0xdba7,	// (0x00054036) scroll_pane_cp032

0x8a51,	// (0x0004eee0) cntbar_detail_list_event_pane_ParamLimits

0x8a51,	// (0x0004eee0) cntbar_detail_list_event_pane

0x89fd,	// (0x0004ee8c) cntbar_detail_list_shct_pane

0x2625,	// (0x00048ab4) aid_list_gen

0xe957,	// (0x00054de6) aid_scroll

0xe960,	// (0x00054def) aid_size_touch_scroll_bar

0x8a61,	// (0x0004eef0) aid_list_double

0x08d0,	// (0x00046d5f) aid_list_single

0x8a61,	// (0x0004eef0) aid_list_single_lg

0x08d9,	// (0x00046d68) aid_list_z_g_a_sm

0x08e1,	// (0x00046d70) aid_list_z_g_d

0x08e9,	// (0x00046d78) aid_txt_z_prm

0x08f7,	// (0x00046d86) aid_txt_z_prm_cp01

0x0905,	// (0x00046d94) aid_txt_z_sec

0x8a6a,	// (0x0004eef9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a6a,	// (0x0004eef9) main_cntbar_detail_cont_pane_g1

0x8a7e,	// (0x0004ef0d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a7e,	// (0x0004ef0d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfce0,	// (0x0005616f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfce0,	// (0x0005616f) main_cntbar_detail_cont_pane_g

0xe969,	// (0x00054df8) main_cntbar_detail_cont_pane_t1

0xe977,	// (0x00054e06) main_cntbar_detail_cont_pane_t2

0xe985,	// (0x00054e14) main_cntbar_detail_cont_pane_t3

0x0002,

0xfce5,	// (0x00056174) main_cntbar_detail_cont_pane_t

0x8a8e,	// (0x0004ef1d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a8e,	// (0x0004ef1d) cell_cntbar_detail_list_shct_pane

0xe993,	// (0x00054e22) cntbar_detail_list_shct_pane_g1

0xe99c,	// (0x00054e2b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcec,	// (0x0005617b) cntbar_detail_list_shct_pane_g

0x8aa0,	// (0x0004ef2f) cntbar_detail_list_event_pane_g1_ParamLimits

0x8aa0,	// (0x0004ef2f) cntbar_detail_list_event_pane_g1

0x8aac,	// (0x0004ef3b) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aac,	// (0x0004ef3b) cntbar_detail_list_event_pane_g2

0x0005,

0xfcf1,	// (0x00056180) cntbar_detail_list_event_pane_g_ParamLimits

0xfcf1,	// (0x00056180) cntbar_detail_list_event_pane_g

0x8b1a,	// (0x0004efa9) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b1a,	// (0x0004efa9) cntbar_detail_list_event_pane_t1

0x8b2f,	// (0x0004efbe) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b2f,	// (0x0004efbe) cntbar_detail_list_event_pane_t2

0x0002,

0xfcfe,	// (0x0005618d) cntbar_detail_list_event_pane_t_ParamLimits

0xfcfe,	// (0x0005618d) cntbar_detail_list_event_pane_t

0x133e,	// (0x000477cd) cell_cntbar_detail_list_shct_pane_g1

0x3b92,	// (0x0004a021) navi_pane_mv_g3

0x0c30,	// (0x000470bf) main_cntbar_detail_pane_ParamLimits

0xe665,	// (0x00054af4) main_notif_wgt_pane

0xc8dd,	// (0x00052d6c) aid_tch_main_mp4_pane_g4

0xcb49,	// (0x00052fd8) popup_slider_window_cp02

0xd021,	// (0x000534b0) list_recal_day_event_pane

0x89b7,	// (0x0004ee46) cntbar_detail_btn_pane_ParamLimits

0x89b7,	// (0x0004ee46) cntbar_detail_btn_pane

0x89d0,	// (0x0004ee5f) cntbar_detail_btn_pane_cp01_ParamLimits

0x89d0,	// (0x0004ee5f) cntbar_detail_btn_pane_cp01

0x89fd,	// (0x0004ee8c) cntbar_detail_list_shct_pane_ParamLimits

0x8a0d,	// (0x0004ee9c) cntbar_detail_pane_g1_ParamLimits

0x8a0d,	// (0x0004ee9c) cntbar_detail_pane_g1

0x8a21,	// (0x0004eeb0) cntbar_detail_pane_t1_ParamLimits

0x8a21,	// (0x0004eeb0) cntbar_detail_pane_t1

0x8ab8,	// (0x0004ef47) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ab8,	// (0x0004ef47) cntbar_detail_list_event_pane_g3

0x8ad0,	// (0x0004ef5f) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ad0,	// (0x0004ef5f) cntbar_detail_list_event_pane_g4

0x8ae8,	// (0x0004ef77) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ae8,	// (0x0004ef77) cntbar_detail_list_event_pane_g5

0x8b00,	// (0x0004ef8f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b00,	// (0x0004ef8f) cntbar_detail_list_event_pane_g6

0x8b44,	// (0x0004efd3) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b44,	// (0x0004efd3) cntbar_detail_list_event_pane_t3

0x8b56,	// (0x0004efe5) popup_notif_wgt_window_ParamLimits

0x8b56,	// (0x0004efe5) popup_notif_wgt_window

0x8b6f,	// (0x0004effe) popup_submenu_window_cp01_ParamLimits

0x8b6f,	// (0x0004effe) popup_submenu_window_cp01

0x1d9b,	// (0x0004822a) bg_popup_window_pane_cp10

0xe9a5,	// (0x00054e34) listscroll_notif_wgt_pane

0xe9b7,	// (0x00054e46) list_notif_wgt_window

0xe9c0,	// (0x00054e4f) scroll_pane_cp033

0x8b83,	// (0x0004f012) list_notif_wgt_row_pane_ParamLimits

0x8b83,	// (0x0004f012) list_notif_wgt_row_pane

0xe9c9,	// (0x00054e58) aid_size_list_notif_wgt_del

0xe9d6,	// (0x00054e65) list_notif_wgt_row_pane_g1

0xe9e2,	// (0x00054e71) list_notif_wgt_row_pane_g2

0xe9f1,	// (0x00054e80) list_notif_wgt_row_pane_g3

0x0002,

0xfd05,	// (0x00056194) list_notif_wgt_row_pane_g

0xe9fe,	// (0x00054e8d) list_notif_wgt_row_pane_t1

0xea14,	// (0x00054ea3) list_notif_wgt_row_pane_t2

0xea26,	// (0x00054eb5) list_notif_wgt_row_pane_t3

0x0002,

0xfd0c,	// (0x0005619b) list_notif_wgt_row_pane_t

0xd4a5,	// (0x00053934) list_recal_day_event_pane_g1

0xea38,	// (0x00054ec7) list_recal_day_event_pane_t1

0xe665,	// (0x00054af4) bg_button_pane_cp045

0x8b93,	// (0x0004f022) cntbar_detail_btn_pane_t1

0xa9fd,	// (0x00050e8c) main_callh_pane_ParamLimits

0xa9fd,	// (0x00050e8c) main_callh_pane

0xe665,	// (0x00054af4) main_coverflow0_pane

0xe665,	// (0x00054af4) main_wgtman_pane

0x803b,	// (0x0004e4ca) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x803b,	// (0x0004e4ca) main_fs_bigclock_unlock_btn_pane

0x859a,	// (0x0004ea29) bg_button_pane_cp16

0x85aa,	// (0x0004ea39) cell_tport_appsw_pane_g3

0x8ba1,	// (0x0004f030) cf0_flow_pane_ParamLimits

0x8ba1,	// (0x0004f030) cf0_flow_pane

0xea47,	// (0x00054ed6) listscroll_cf0_pane

0xea52,	// (0x00054ee1) main_cf0_pane_g1

0x8bb6,	// (0x0004f045) main_cf0_pane_t1_ParamLimits

0x8bb6,	// (0x0004f045) main_cf0_pane_t1

0x8bcd,	// (0x0004f05c) main_cf0_pane_t2_ParamLimits

0x8bcd,	// (0x0004f05c) main_cf0_pane_t2

0x0001,

0xfd18,	// (0x000561a7) main_cf0_pane_t_ParamLimits

0xfd18,	// (0x000561a7) main_cf0_pane_t

0xea64,	// (0x00054ef3) scroll_pane_cp11

0x8be4,	// (0x0004f073) cf0_flow_pane_g1

0x8bf0,	// (0x0004f07f) cf0_flow_pane_g2

0x0001,

0xfd1d,	// (0x000561ac) cf0_flow_pane_g

0x8bfc,	// (0x0004f08b) cf0_flow_pane_t1

0xe665,	// (0x00054af4) main_call6_pane

0xe665,	// (0x00054af4) main_calllock_pane

0x8c0e,	// (0x0004f09d) call6_btn_grp_pane_ParamLimits

0x8c0e,	// (0x0004f09d) call6_btn_grp_pane

0x8c28,	// (0x0004f0b7) call6_pane_g1_ParamLimits

0x8c28,	// (0x0004f0b7) call6_pane_g1

0x8c41,	// (0x0004f0d0) popup_call6_1st_window_ParamLimits

0x8c41,	// (0x0004f0d0) popup_call6_1st_window

0x8c55,	// (0x0004f0e4) popup_call6_2nd_window_ParamLimits

0x8c55,	// (0x0004f0e4) popup_call6_2nd_window

0x8c69,	// (0x0004f0f8) cell_call6_btn_pane_ParamLimits

0x8c69,	// (0x0004f0f8) cell_call6_btn_pane

0x1d9b,	// (0x0004822a) bg_popup_call2_in_pane_cp03

0xea6f,	// (0x00054efe) popup_call6_1st_window_g1

0xea77,	// (0x00054f06) popup_call6_1st_window_g2

0xea7f,	// (0x00054f0e) popup_call6_1st_window_g3

0x0002,

0xfd22,	// (0x000561b1) popup_call6_1st_window_g

0xea87,	// (0x00054f16) popup_call6_1st_window_t1

0xea96,	// (0x00054f25) popup_call6_1st_window_t2

0xeaa6,	// (0x00054f35) popup_call6_1st_window_t3

0x0002,

0xfd29,	// (0x000561b8) popup_call6_1st_window_t

0x1d9b,	// (0x0004822a) bg_popup_call2_in_pane_cp04

0xeab6,	// (0x00054f45) popup_call6_2nd_window_g1

0xeabe,	// (0x00054f4d) popup_call6_2nd_window_g2

0xeac6,	// (0x00054f55) popup_call6_2nd_window_g3

0x0002,

0xfd30,	// (0x000561bf) popup_call6_2nd_window_g

0xeace,	// (0x00054f5d) popup_call6_2nd_window_t1

0xe665,	// (0x00054af4) bg_button_pane_cp15

0xeadd,	// (0x00054f6c) cell_call6_btn_pane_g1

0xeae6,	// (0x00054f75) cell_call6_btn_pane_t1

0x8c7d,	// (0x0004f10c) listscroll_wgtman_pane_ParamLimits

0x8c7d,	// (0x0004f10c) listscroll_wgtman_pane

0x8c9e,	// (0x0004f12d) wgtman_btn_pane_ParamLimits

0x8c9e,	// (0x0004f12d) wgtman_btn_pane

0xa7d8,	// (0x00050c67) aid_scroll_copy1

0xeaf5,	// (0x00054f84) list_wgtman_pane

0x8ce1,	// (0x0004f170) wgtman_btn_pane_g1_ParamLimits

0x8ce1,	// (0x0004f170) wgtman_btn_pane_g1

0x8d0d,	// (0x0004f19c) wgtman_btn_pane_t1_ParamLimits

0x8d0d,	// (0x0004f19c) wgtman_btn_pane_t1

0xeaff,	// (0x00054f8e) wgtman_btn_pane_t2_ParamLimits

0xeaff,	// (0x00054f8e) wgtman_btn_pane_t2

0x0001,

0xfd37,	// (0x000561c6) wgtman_btn_pane_t_ParamLimits

0xfd37,	// (0x000561c6) wgtman_btn_pane_t

0x8d4a,	// (0x0004f1d9) listrow_wgtman_pane_ParamLimits

0x8d4a,	// (0x0004f1d9) listrow_wgtman_pane

0x8d5e,	// (0x0004f1ed) listrow_wgtman_pane_g1

0x8d6b,	// (0x0004f1fa) listrow_wgtman_pane_g2

0x0001,

0xfd3c,	// (0x000561cb) listrow_wgtman_pane_g

0x0913,	// (0x00046da2) listrow_wgtman_pane_t1

0x092b,	// (0x00046dba) listrow_wgtman_pane_t2

0x0001,

0xfd41,	// (0x000561d0) listrow_wgtman_pane_t

0x0951,	// (0x00046de0) wait_bar_pane_cp09

0xeb16,	// (0x00054fa5) main_calllock_btn_pane

0xeb20,	// (0x00054faf) main_calllock_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp17

0xeadd,	// (0x00054f6c) main_calllock_btn_pane_g1

0xeb2c,	// (0x00054fbb) main_calllock_btn_pane_t1

0xe665,	// (0x00054af4) main_dialer3_pane

0xe665,	// (0x00054af4) main_fmrd2_pane

0x133e,	// (0x000477cd) main_fs_bigclock_unlock_btn_pane_g1

0x8d91,	// (0x0004f220) main_fs_bigclock_unlock_btn_pane_t1

0x8d9f,	// (0x0004f22e) area_fmrd2_info_pane_ParamLimits

0x8d9f,	// (0x0004f22e) area_fmrd2_info_pane

0x8db0,	// (0x0004f23f) area_fmrd2_visual_pane_ParamLimits

0x8db0,	// (0x0004f23f) area_fmrd2_visual_pane

0x8dbe,	// (0x0004f24d) fmrd2_indi_pane_ParamLimits

0x8dbe,	// (0x0004f24d) fmrd2_indi_pane

0x8dcb,	// (0x0004f25a) area_fmrd2_visual_pane_g1

0x8dd3,	// (0x0004f262) area_fmrd2_visual_pane_t1

0x8de3,	// (0x0004f272) area_fmrd2_visual_pane_t2

0x8df3,	// (0x0004f282) area_fmrd2_visual_pane_t3

0x0002,

0xfd4b,	// (0x000561da) area_fmrd2_visual_pane_t

0x8e03,	// (0x0004f292) area_fmrd2_info_pane_g1

0x8e0b,	// (0x0004f29a) area_fmrd2_info_pane_t1

0x8e1b,	// (0x0004f2aa) area_fmrd2_info_pane_t2

0x8e2b,	// (0x0004f2ba) area_fmrd2_info_pane_t3

0x8e3b,	// (0x0004f2ca) area_fmrd2_info_pane_t4

0x0003,

0xfd52,	// (0x000561e1) area_fmrd2_info_pane_t

0x8e4b,	// (0x0004f2da) fmrd2_indi_pane_t1

0x8e5b,	// (0x0004f2ea) fmrd2_indi_pane_t2

0x8e6b,	// (0x0004f2fa) fmrd2_indi_pane_t3

0x0002,

0xfd5b,	// (0x000561ea) fmrd2_indi_pane_t

0x80c4,	// (0x0004e553) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x80c4,	// (0x0004e553) list_single_fs_bigclock_indicator_pane_g5

0x8179,	// (0x0004e608) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8179,	// (0x0004e608) list_single_fs_bigclock_indicator_pane_t5

0xd0de,	// (0x0005356d) aid_cell_bcale_month_pane_ParamLimits

0xd0de,	// (0x0005356d) aid_cell_bcale_month_pane

0xd0de,	// (0x0005356d) bcale_month_pane_ParamLimits

0xd0de,	// (0x0005356d) bcale_month_pane

0xe7ef,	// (0x00054c7e) bcale_preview_pane_ParamLimits

0xe7ef,	// (0x00054c7e) bcale_preview_pane

0xe8d8,	// (0x00054d67) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8f7,	// (0x00054d86) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8f7,	// (0x00054d86) list_single_fs_bigclock_pane_t2

0x0001,

0xfcd6,	// (0x00056165) list_single_fs_bigclock_pane_t_ParamLimits

0xfcd6,	// (0x00056165) list_single_fs_bigclock_pane_t

0x8d89,	// (0x0004f218) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd46,	// (0x000561d5) main_fs_bigclock_unlock_btn_pane_g

0x8e7b,	// (0x0004f30a) aid_dia3_key_size_ParamLimits

0x8e7b,	// (0x0004f30a) aid_dia3_key_size

0x8e8f,	// (0x0004f31e) aid_dia3_listrow_size_ParamLimits

0x8e8f,	// (0x0004f31e) aid_dia3_listrow_size

0x8ea9,	// (0x0004f338) dia3_keypad_fun_pane_ParamLimits

0x8ea9,	// (0x0004f338) dia3_keypad_fun_pane

0x8ec3,	// (0x0004f352) dia3_keypad_num_pane_ParamLimits

0x8ec3,	// (0x0004f352) dia3_keypad_num_pane

0x8edd,	// (0x0004f36c) dia3_listscroll_pane_ParamLimits

0x8edd,	// (0x0004f36c) dia3_listscroll_pane

0x8ef3,	// (0x0004f382) dia3_numentry_pane_ParamLimits

0x8ef3,	// (0x0004f382) dia3_numentry_pane

0xeb3b,	// (0x00054fca) dia3_list_pane

0x8f0d,	// (0x0004f39c) scroll_pane_cp12

0xe665,	// (0x00054af4) bg_dia3_numentry_pane

0x8f18,	// (0x0004f3a7) dia3_numentry_pane_t1

0xc42a,	// (0x000528b9) cell_dia3_key_num_pane

0x8f27,	// (0x0004f3b6) cell_dia3_key0_fun_pane_ParamLimits

0x8f27,	// (0x0004f3b6) cell_dia3_key0_fun_pane

0x8f3b,	// (0x0004f3ca) cell_dia3_key1_fun_pane_ParamLimits

0x8f3b,	// (0x0004f3ca) cell_dia3_key1_fun_pane

0x8f50,	// (0x0004f3df) dia3_listrow_pane

0xde35,	// (0x000542c4) bg_dia3_numentry_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp21

0x8f62,	// (0x0004f3f1) cell_dia3_key_num_pane_t1

0x8f70,	// (0x0004f3ff) cell_dia3_key_num_pane_t2

0x8f70,	// (0x0004f3ff) cell_dia3_key_num_pane_t3

0x8f70,	// (0x0004f3ff) cell_dia3_key_num_pane_t4

0x0003,

0xfd62,	// (0x000561f1) cell_dia3_key_num_pane_t

0xe665,	// (0x00054af4) bg_button_pane_cp19

0x8f7f,	// (0x0004f40e) cell_dia3_key0_fun_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp20

0x8f87,	// (0x0004f416) cell_dia3_key1_fun_pane_g1

0xe7ef,	// (0x00054c7e) area_left_week_number_pane

0xe7ef,	// (0x00054c7e) area_top_day_name_pane

0xe7ef,	// (0x00054c7e) frame_month_view_pane

0xe7ef,	// (0x00054c7e) grid_month_view_pane

0xe7ef,	// (0x00054c7e) cell_top_day_name_pane_ParamLimits

0xe7ef,	// (0x00054c7e) cell_top_day_name_pane

0xe7ef,	// (0x00054c7e) cell_area_left_week_number_pane_ParamLimits

0xe7ef,	// (0x00054c7e) cell_area_left_week_number_pane

0xe7ef,	// (0x00054c7e) cell_month_view_pane_ParamLimits

0xe7ef,	// (0x00054c7e) cell_month_view_pane

0xe7e3,	// (0x00054c72) frm_month_g1

0xe7e3,	// (0x00054c72) frm_month_g2

0xe7e3,	// (0x00054c72) frm_month_g3

0xe7e3,	// (0x00054c72) frm_month_g4

0xe7e3,	// (0x00054c72) frm_month_g5

0xe7e3,	// (0x00054c72) frm_month_g6

0xe7e3,	// (0x00054c72) frm_month_g7

0xe7e3,	// (0x00054c72) frm_month_g8

0xe7e3,	// (0x00054c72) frm_month_g9

0xe7e3,	// (0x00054c72) frm_month_g10

0xe7e3,	// (0x00054c72) frm_month_g11

0xe7e3,	// (0x00054c72) frm_month_g12

0xe7e3,	// (0x00054c72) frm_month_g13

0xe7e3,	// (0x00054c72) frm_month_g14

0xe7e3,	// (0x00054c72) frm_month_g15

0xe7e3,	// (0x00054c72) frm_month_g16

0x000f,

0xfd6b,	// (0x000561fa) frm_month_g

0xeb45,	// (0x00054fd4) cell_top_day_name_pane_t1

0xe7e3,	// (0x00054c72) cell_area_left_week_number_pane_g1

0xeb45,	// (0x00054fd4) cell_area_left_week_number_pane_t1

0xe7e3,	// (0x00054c72) cell_month_view_pane_g1

0xeb45,	// (0x00054fd4) cell_month_view_pane_t1

0xe665,	// (0x00054af4) main_fps_pane

0xe1e3,	// (0x00054672) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1e3,	// (0x00054672) cmail_ddmenu_btn02_pane_cp1

0xe1ff,	// (0x0005468e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe1ff,	// (0x0005468e) cmail_ddmenu_btn02_pane_cp2

0x8882,	// (0x0004ed11) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8882,	// (0x0004ed11) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc89,	// (0x00056118) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc89,	// (0x00056118) cmail_ddmenu_btn02_pane_g

0x88a3,	// (0x0004ed32) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88a3,	// (0x0004ed32) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc8e,	// (0x0005611d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc8e,	// (0x0005611d) cmail_ddmenu_btn02_pane_t

0x8f8f,	// (0x0004f41e) fps_text_pane_ParamLimits

0x8f8f,	// (0x0004f41e) fps_text_pane

0x8fa6,	// (0x0004f435) main_fps_pane_g1_ParamLimits

0x8fa6,	// (0x0004f435) main_fps_pane_g1

0x8fbe,	// (0x0004f44d) wait_bar_pane_cp010_ParamLimits

0x8fbe,	// (0x0004f44d) wait_bar_pane_cp010

0x8fd1,	// (0x0004f460) fps_text_pane_t1_ParamLimits

0x8fd1,	// (0x0004f460) fps_text_pane_t1

0xe7fb,	// (0x00054c8a) cam4_image_uncrop_pane_g1

0xe804,	// (0x00054c93) cam4_image_uncrop_pane_g2

0x6266,	// (0x0004c6f5) cam4_image_uncrop_pane_g3

0x626f,	// (0x0004c6fe) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x00055c6f) cam4_image_uncrop_pane_g

0x8f50,	// (0x0004f3df) dia3_listrow_pane_ParamLimits

0xe665,	// (0x00054af4) main_phob2_pane

0x8544,	// (0x0004e9d3) cell_tport_appsw_pane_cp02_ParamLimits

0x8544,	// (0x0004e9d3) cell_tport_appsw_pane_cp02

0x8558,	// (0x0004e9e7) cell_tport_appsw_pane_cp03_ParamLimits

0x8558,	// (0x0004e9e7) cell_tport_appsw_pane_cp03

0xe665,	// (0x00054af4) phob2_contact_card_pane

0xe665,	// (0x00054af4) phob2_listscroll_pane

0xeb57,	// (0x00054fe6) phob2_list_pane

0xeb5f,	// (0x00054fee) scroll_pane_cp034

0x8fe9,	// (0x0004f478) phob2_cc_data_pane_ParamLimits

0x8fe9,	// (0x0004f478) phob2_cc_data_pane

0x9002,	// (0x0004f491) phob2_cc_listscroll_pane_ParamLimits

0x9002,	// (0x0004f491) phob2_cc_listscroll_pane

0x9023,	// (0x0004f4b2) list_double_large_graphic_phob2_pane_ParamLimits

0x9023,	// (0x0004f4b2) list_double_large_graphic_phob2_pane

0x9044,	// (0x0004f4d3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9044,	// (0x0004f4d3) list_double_large_graphic_phob2_pane_g1

0x0963,	// (0x00046df2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0963,	// (0x00046df2) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd8c,	// (0x0005621b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd8c,	// (0x0005621b) list_double_large_graphic_phob2_pane_g

0x0997,	// (0x00046e26) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0997,	// (0x00046e26) list_double_large_graphic_phob2_pane_t1

0x09bb,	// (0x00046e4a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x09bb,	// (0x00046e4a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd95,	// (0x00056224) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd95,	// (0x00056224) list_double_large_graphic_phob2_pane_t

0x0c30,	// (0x000470bf) list_highlight_pane_cp024

0x9056,	// (0x0004f4e5) phob2_cc_button_pane

0x9062,	// (0x0004f4f1) phob2_cc_data_pane_g1_ParamLimits

0x9062,	// (0x0004f4f1) phob2_cc_data_pane_g1

0x907a,	// (0x0004f509) phob2_cc_data_pane_g2_ParamLimits

0x907a,	// (0x0004f509) phob2_cc_data_pane_g2

0x0001,

0xfd9a,	// (0x00056229) phob2_cc_data_pane_g_ParamLimits

0xfd9a,	// (0x00056229) phob2_cc_data_pane_g

0x9092,	// (0x0004f521) phob2_cc_data_pane_t1_ParamLimits

0x9092,	// (0x0004f521) phob2_cc_data_pane_t1

0x90c0,	// (0x0004f54f) phob2_cc_data_pane_t2_ParamLimits

0x90c0,	// (0x0004f54f) phob2_cc_data_pane_t2

0x90f2,	// (0x0004f581) phob2_cc_data_pane_t3_ParamLimits

0x90f2,	// (0x0004f581) phob2_cc_data_pane_t3

0x0002,

0xfd9f,	// (0x0005622e) phob2_cc_data_pane_t_ParamLimits

0xfd9f,	// (0x0005622e) phob2_cc_data_pane_t

0xeb67,	// (0x00054ff6) phob2_cc_list_pane_ParamLimits

0xeb67,	// (0x00054ff6) phob2_cc_list_pane

0xdbb3,	// (0x00054042) scroll_pane_cp035_ParamLimits

0xdbb3,	// (0x00054042) scroll_pane_cp035

0x0c30,	// (0x000470bf) bg_button_pane_cp033

0x9122,	// (0x0004f5b1) phob2_cc_button_pane_g1

0x912e,	// (0x0004f5bd) phob2_cc_button_pane_t1

0x9143,	// (0x0004f5d2) phob2_cc_button_pane_t2

0x0001,

0xfda6,	// (0x00056235) phob2_cc_button_pane_t

0x9155,	// (0x0004f5e4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9155,	// (0x0004f5e4) list_double_large_graphic_phob2_cc_pane

0x918c,	// (0x0004f61b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x918c,	// (0x0004f61b) list_double_large_graphic_phob2_cc_pane_g1

0x09dc,	// (0x00046e6b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09dc,	// (0x00046e6b) list_double_large_graphic_phob2_cc_pane_g2

0x09e8,	// (0x00046e77) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09e8,	// (0x00046e77) list_double_large_graphic_phob2_cc_pane_g3

0x09f4,	// (0x00046e83) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09f4,	// (0x00046e83) list_double_large_graphic_phob2_cc_pane_g4

0x0a00,	// (0x00046e8f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0a00,	// (0x00046e8f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdab,	// (0x0005623a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdab,	// (0x0005623a) list_double_large_graphic_phob2_cc_pane_g

0x0a0c,	// (0x00046e9b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0a0c,	// (0x00046e9b) list_double_large_graphic_phob2_cc_pane_t1

0x0a35,	// (0x00046ec4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0a35,	// (0x00046ec4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdb6,	// (0x00056245) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdb6,	// (0x00056245) list_double_large_graphic_phob2_cc_pane_t

0xeb73,	// (0x00055002) list_highlight_pane_cp025_ParamLimits

0xeb73,	// (0x00055002) list_highlight_pane_cp025

0x0c30,	// (0x000470bf) bg_button_pane_cp033_ParamLimits

0x9122,	// (0x0004f5b1) phob2_cc_button_pane_g1_ParamLimits

0x912e,	// (0x0004f5bd) phob2_cc_button_pane_t1_ParamLimits

0x9143,	// (0x0004f5d2) phob2_cc_button_pane_t2_ParamLimits

0xfda6,	// (0x00056235) phob2_cc_button_pane_t_ParamLimits

0x0c3e,	// (0x000470cd) popup_wgtman_window

0xd363,	// (0x000537f2) scroll_pane_cp038

0x8cc3,	// (0x0004f152) wgtman_btn_pane_cp_01_ParamLimits

0x8cc3,	// (0x0004f152) wgtman_btn_pane_cp_01

0xeb81,	// (0x00055010) wgtman_content_pane

0xeb8a,	// (0x00055019) wgtman_heading_pane

0xe665,	// (0x00054af4) bg_heading_pane_cp02

0xeb93,	// (0x00055022) wgtman_heading_pane_g1

0xeb9b,	// (0x0005502a) wgtman_heading_pane_t1

0xeba9,	// (0x00055038) scroll_pane_cp036

0xebb1,	// (0x00055040) wgtman_list_pane

0xe80f,	// (0x00054c9e) wgtman_list_pane_t1_ParamLimits

0xe80f,	// (0x00054c9e) wgtman_list_pane_t1

0xcbc1,	// (0x00053050) cam4_grid_pane

0x6fbd,	// (0x0004d44c) bg_button_pane_cp015_ParamLimits

0x6fd4,	// (0x0004d463) bg_button_pane_cp016_ParamLimits

0x6fe0,	// (0x0004d46f) bg_button_pane_cp017_ParamLimits

0x703b,	// (0x0004d4ca) popup_vitu2_query_window_g3_ParamLimits

0x703b,	// (0x0004d4ca) popup_vitu2_query_window_g3

0x70de,	// (0x0004d56d) popup_vitu2_query_window_t6_ParamLimits

0x70de,	// (0x0004d56d) popup_vitu2_query_window_t6

0x7109,	// (0x0004d598) popup_vitu2_query_window_t7_ParamLimits

0x7109,	// (0x0004d598) popup_vitu2_query_window_t7

0xe7fb,	// (0x00054c8a) cam4_grid_pane_g1

0xe804,	// (0x00054c93) cam4_grid_pane_g2

0xebb9,	// (0x00055048) cam4_grid_pane_g3

0xebc2,	// (0x00055051) cam4_grid_pane_g4

0x0003,

0xfdbb,	// (0x0005624a) cam4_grid_pane_g

0x202d,	// (0x000484bc) aid_placing_vt_slider_lsc_ParamLimits

0x235c,	// (0x000487eb) vidtel_button_pane_ParamLimits

0x235c,	// (0x000487eb) vidtel_button_pane

0xe665,	// (0x00054af4) bg_button_pane_cp034

0xebcd,	// (0x0005505c) vidtel_button_pane_g1

0xebd5,	// (0x00055064) vidtel_button_pane_t1

0xd495,	// (0x00053924) aid_size_vtel_slider_touch

0xdbb3,	// (0x00054042) scroll_pane_cp039

0x7da5,	// (0x0004e234) ncim_query_button_pane_cp01_ParamLimits

0x7dc4,	// (0x0004e253) ncimui_query_pane_g1_ParamLimits

0x0c30,	// (0x000470bf) input_focus_pane_cp012_ParamLimits

0xde73,	// (0x00054302) ncim_query_entry_pane_t1_ParamLimits

0xdbb3,	// (0x00054042) scroll_pane_cp039_ParamLimits

0x3b04,	// (0x00049f93) navi_pane_bcale_mc_g1

0x3b0c,	// (0x00049f9b) navi_pane_bcale_mc_t1

0xe235,	// (0x000546c4) main_sp_fs_email_pane_g1

0xe241,	// (0x000546d0) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x0005605b) main_sp_fs_email_pane_g

0xe45c,	// (0x000548eb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe45c,	// (0x000548eb) list_single_cale_mrui_row_pane_g3

0x08ab,	// (0x00046d3a) list_single_recal_day_pane_g5_event_pane

0xd07f,	// (0x0005350e) list_single_recal_day_pane_g7

0xebeb,	// (0x0005507a) list_recal_day_event_pane_cp01

0xebf4,	// (0x00055083) list_recal_vselct_arw_lo_pane_cp01

0xebfc,	// (0x0005508b) list_recal_vselct_arw_up_pane_cp01

0xec04,	// (0x00055093) list_recal_vselct_pane_cp01

0xd4a5,	// (0x00053934) list_recal_day_event_pane_cp01_g1

0xd0b4,	// (0x00053543) list_recal_day_event_pane_cp01_t1

0xd087,	// (0x00053516) list_single_recal_day_pane_t1_ParamLimits

0xd099,	// (0x00053528) list_single_recal_day_pane_t2_ParamLimits

0xfc9e,	// (0x0005612d) list_single_recal_day_pane_t_ParamLimits

0x11ef,	// (0x0004767e) bg_notes_pane_ParamLimits

0x137a,	// (0x00047809) list_notes_pane_ParamLimits

0x1388,	// (0x00047817) scroll_pane_cp06_ParamLimits

0x13b0,	// (0x0004783f) main_notes_pane_ParamLimits

0x0c30,	// (0x000470bf) main_welc_pane

0x91e0,	// (0x0004f66f) main_welc_body_pane_ParamLimits

0x91e0,	// (0x0004f66f) main_welc_body_pane

0x91ff,	// (0x0004f68e) main_welc_opti_pane_ParamLimits

0x91ff,	// (0x0004f68e) main_welc_opti_pane

0x9274,	// (0x0004f703) main_welc_pane_t1_ParamLimits

0x9274,	// (0x0004f703) main_welc_pane_t1

0x94b7,	// (0x0004f946) main_welc_body_row_pane_ParamLimits

0x94b7,	// (0x0004f946) main_welc_body_row_pane

0x125c,	// (0x000476eb) main_welc_opti_row_pane_ParamLimits

0x125c,	// (0x000476eb) main_welc_opti_row_pane

0xec16,	// (0x000550a5) main_welc_opti_row_pane_g1

0x94cb,	// (0x0004f95a) main_welc_opti_row_pane_t1

0xec1e,	// (0x000550ad) main_welc_body_row_pane_t1

0xe9af,	// (0x00054e3e) popup_notif_wgt_heading_pane

0xe9c9,	// (0x00054e58) aid_size_list_notif_wgt_del_ParamLimits

0xe9d6,	// (0x00054e65) list_notif_wgt_row_pane_g1_ParamLimits

0xe9e2,	// (0x00054e71) list_notif_wgt_row_pane_g2_ParamLimits

0xe9f1,	// (0x00054e80) list_notif_wgt_row_pane_g3_ParamLimits

0xfd05,	// (0x00056194) list_notif_wgt_row_pane_g_ParamLimits

0xe9fe,	// (0x00054e8d) list_notif_wgt_row_pane_t1_ParamLimits

0xea14,	// (0x00054ea3) list_notif_wgt_row_pane_t2_ParamLimits

0xea26,	// (0x00054eb5) list_notif_wgt_row_pane_t3_ParamLimits

0xfd0c,	// (0x0005619b) list_notif_wgt_row_pane_t_ParamLimits

0x8d5e,	// (0x0004f1ed) listrow_wgtman_pane_g1_ParamLimits

0x8d6b,	// (0x0004f1fa) listrow_wgtman_pane_g2_ParamLimits

0xfd3c,	// (0x000561cb) listrow_wgtman_pane_g_ParamLimits

0x0913,	// (0x00046da2) listrow_wgtman_pane_t1_ParamLimits

0x092b,	// (0x00046dba) listrow_wgtman_pane_t2_ParamLimits

0xfd41,	// (0x000561d0) listrow_wgtman_pane_t_ParamLimits

0x0951,	// (0x00046de0) wait_bar_pane_cp09_ParamLimits

0xe665,	// (0x00054af4) bg_popup_heading_pane_cp02

0xec2d,	// (0x000550bc) popup_notif_wgt_heading_pane_g1

0xec35,	// (0x000550c4) popup_notif_wgt_heading_pane_t1

0xe665,	// (0x00054af4) main_vids_pane

0xe665,	// (0x00054af4) vids_listscroll_pane

0x94da,	// (0x0004f969) scroll_pane_cp040

0xe665,	// (0x00054af4) vids_list_pane

0x94e5,	// (0x0004f974) vids_list_double_pane_ParamLimits

0x94e5,	// (0x0004f974) vids_list_double_pane

0x94f8,	// (0x0004f987) vids_list_double_pane_g1

0x9501,	// (0x0004f990) vids_list_double_pane_t1

0x9511,	// (0x0004f9a0) vids_list_double_pane_t2

0x0001,

0xfdda,	// (0x00056269) vids_list_double_pane_t

0x0c30,	// (0x000470bf) main_ncimui_pane_ParamLimits

0x7bdb,	// (0x0004e06a) main_ncimui_pane_g1_ParamLimits

0x7be7,	// (0x0004e076) main_ncimui_pane_g2_ParamLimits

0x7be7,	// (0x0004e076) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x00055f61) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x00055f61) main_ncimui_pane_g

0x921e,	// (0x0004f6ad) main_welc_pane_g1_ParamLimits

0x921e,	// (0x0004f6ad) main_welc_pane_g1

0x9233,	// (0x0004f6c2) main_welc_pane_g2_ParamLimits

0x9233,	// (0x0004f6c2) main_welc_pane_g2

0x0003,

0xfdc4,	// (0x00056253) main_welc_pane_g_ParamLimits

0xfdc4,	// (0x00056253) main_welc_pane_g

0x11ef,	// (0x0004767e) listscroll_mce_pane_ParamLimits

0x3be4,	// (0x0004a073) wait_bar_pane_cp10

0xbc80,	// (0x0005210f) main_cale_day_pane_ParamLimits

0xbc80,	// (0x0005210f) main_cale_week_pane_ParamLimits

0x11ef,	// (0x0004767e) main_messa_pane_ParamLimits

0x5737,	// (0x0004bbc6) main_clock2_btn_pane_ParamLimits

0x5737,	// (0x0004bbc6) main_clock2_btn_pane

0xc50c,	// (0x0005299b) main_clock2_btn_pane_cp01_ParamLimits

0xc50c,	// (0x0005299b) main_clock2_btn_pane_cp01

0xe43b,	// (0x000548ca) list_cale_mrui_pane_ParamLimits

0xea5c,	// (0x00054eeb) main_cf0_pane_g2

0x0001,

0xfd13,	// (0x000561a2) main_cf0_pane_g

0xe7ef,	// (0x00054c7e) area_left_week_number_pane_ParamLimits

0xe7ef,	// (0x00054c7e) area_top_day_name_pane_ParamLimits

0xe7ef,	// (0x00054c7e) frame_month_view_pane_ParamLimits

0xe7ef,	// (0x00054c7e) grid_month_view_pane_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g1_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g2_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g3_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g4_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g5_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g6_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g7_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g8_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g9_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g10_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g11_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g12_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g13_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g14_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g15_ParamLimits

0xe7e3,	// (0x00054c72) frm_month_g16_ParamLimits

0xfd6b,	// (0x000561fa) frm_month_g_ParamLimits

0xeb45,	// (0x00054fd4) cell_top_day_name_pane_t1_ParamLimits

0xe7e3,	// (0x00054c72) cell_area_left_week_number_pane_g1_ParamLimits

0xeb45,	// (0x00054fd4) cell_area_left_week_number_pane_t1_ParamLimits

0xe7e3,	// (0x00054c72) cell_month_view_pane_g1_ParamLimits

0xeb45,	// (0x00054fd4) cell_month_view_pane_t1_ParamLimits

0x11e7,	// (0x00047676) main_clock2_btn_pane_g1

0xec43,	// (0x000550d2) main_clock2_btn_pane_t1

0x0c30,	// (0x000470bf) listscroll_cmail_pane_ParamLimits

0xe235,	// (0x000546c4) main_sp_fs_email_pane_g1_ParamLimits

0xe241,	// (0x000546d0) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x0005605b) main_sp_fs_email_pane_g_ParamLimits

0xe575,	// (0x00054a04) list_recal_day_pane_ParamLimits

0xe586,	// (0x00054a15) mian_recal_day_pane_t1

0x06a4,	// (0x00046b33) list_single_dyc_row_text_pane_t4_ParamLimits

0x06a4,	// (0x00046b33) list_single_dyc_row_text_pane_t4

0x06ed,	// (0x00046b7c) list_single_dyc_row_text_pane_t5_ParamLimits

0x06ed,	// (0x00046b7c) list_single_dyc_row_text_pane_t5

0xce25,	// (0x000532b4) list_single_dyc_row_text_pane_t6_ParamLimits

0xce25,	// (0x000532b4) list_single_dyc_row_text_pane_t6

0x33ea,	// (0x00049879) aid_mgn_list_cale_time_pane

0x0c30,	// (0x000470bf) main_gallery2_pane_ParamLimits

0xc520,	// (0x000529af) main_clock2_pane_cp01_t1

0xc52e,	// (0x000529bd) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x00055b4b) main_clock2_pane_cp01_t

0x1964,	// (0x00047df3) cale_week_scroll_pane_g16_ParamLimits

0x1964,	// (0x00047df3) cale_week_scroll_pane_g16

0x1d9b,	// (0x0004822a) vorec_slider_pane

0xebd5,	// (0x00055064) vidtel_button_pane_t1_ParamLimits

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8911,	// (0x0004eda0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcc1,	// (0x00056150) main_fs_bigclock_clock_pane_g_ParamLimits

0x8929,	// (0x0004edb8) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8941,	// (0x0004edd0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcca,	// (0x00056159) main_fs_bigclock_clock_pane_t_ParamLimits

0x4fcc,	// (0x0004b45b) main_mup3_lyrics_pane_ParamLimits

0x4fcc,	// (0x0004b45b) main_mup3_lyrics_pane

0x9539,	// (0x0004f9c8) main_mup3_lyrics_pane_t1_ParamLimits

0x9539,	// (0x0004f9c8) main_mup3_lyrics_pane_t1

0xc8c7,	// (0x00052d56) aid_main_mp4_pane_t1_area

0xc8d1,	// (0x00052d60) aid_main_mp4_pane_t2_area

0xc97b,	// (0x00052e0a) main_mp4_pane_g7_ParamLimits

0xc97b,	// (0x00052e0a) main_mp4_pane_g7

0xc987,	// (0x00052e16) main_mp4_pane_g8_ParamLimits

0xc987,	// (0x00052e16) main_mp4_pane_g8

0x602d,	// (0x0004c4bc) aid_call6_pane_g1_size

0x9174,	// (0x0004f603) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9174,	// (0x0004f603) list_double_large_graphic_phob2_other_pane

0x167b,	// (0x00047b0a) list_double_large_graphic_phob2_other_pane_g1

0xe665,	// (0x00054af4) list_highlight_pane_cp026

0x0c30,	// (0x000470bf) main_welc_pane_ParamLimits

0x83d9,	// (0x0004e868) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x83d9,	// (0x0004e868) main_sp_fs_ctrlbar_pane_g3

0x83f3,	// (0x0004e882) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x83f3,	// (0x0004e882) main_sp_fs_ctrlbar_pane_g4

0x8427,	// (0x0004e8b6) toolbar2_fixed_button_pane_cp01

0x8432,	// (0x0004e8c1) toolbar2_fixed_button_pane_cp02

0x843f,	// (0x0004e8ce) toolbar2_fixed_button_pane_cp03

0x91ba,	// (0x0004f649) list_welc_entry_pane_ParamLimits

0x91ba,	// (0x0004f649) list_welc_entry_pane

0x9248,	// (0x0004f6d7) main_welc_pane_g3_ParamLimits

0x9248,	// (0x0004f6d7) main_welc_pane_g3

0x9296,	// (0x0004f725) main_welc_pane_t2_ParamLimits

0x9296,	// (0x0004f725) main_welc_pane_t2

0x92b9,	// (0x0004f748) main_welc_pane_t3_ParamLimits

0x92b9,	// (0x0004f748) main_welc_pane_t3

0x0005,

0xfdcd,	// (0x0005625c) main_welc_pane_t_ParamLimits

0xfdcd,	// (0x0005625c) main_welc_pane_t

0x9406,	// (0x0004f895) welc_button_pane_ParamLimits

0x9406,	// (0x0004f895) welc_button_pane

0x949f,	// (0x0004f92e) welc_service_logo_pane_ParamLimits

0x949f,	// (0x0004f92e) welc_service_logo_pane

0x9554,	// (0x0004f9e3) list_single_welc_entry_pane_ParamLimits

0x9554,	// (0x0004f9e3) list_single_welc_entry_pane

0x9565,	// (0x0004f9f4) list_single_welc_entry_pane_g1

0x956d,	// (0x0004f9fc) list_single_welc_entry_pane_t1

0x957b,	// (0x0004fa0a) list_single_welc_entry_pane_t2

0x0001,

0xfddf,	// (0x0005626e) list_single_welc_entry_pane_t

0xe665,	// (0x00054af4) bg_button_pane_cp035

0xec51,	// (0x000550e0) welc_button_pane_t1

0x9589,	// (0x0004fa18) welc_service_logo_pane_g1

0x9592,	// (0x0004fa21) welc_service_logo_pane_g2

0x0001,

0xfde4,	// (0x00056273) welc_service_logo_pane_g

0xe665,	// (0x00054af4) main_int_radio_pane

0xdd11,	// (0x000541a0) list_single_fs_dyc_pane_g1

0x0972,	// (0x00046e01) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0972,	// (0x00046e01) list_double_large_graphic_phob2_pane_g3

0x0984,	// (0x00046e13) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0984,	// (0x00046e13) list_double_large_graphic_phob2_pane_g4

0x959b,	// (0x0004fa2a) main_int_radio1_pane_ParamLimits

0x959b,	// (0x0004fa2a) main_int_radio1_pane

0xec5f,	// (0x000550ee) find_pane_cp02

0x95b8,	// (0x0004fa47) input_focus_pane_cp12_ParamLimits

0x95b8,	// (0x0004fa47) input_focus_pane_cp12

0x95c8,	// (0x0004fa57) input_focus_pane_cp13_ParamLimits

0x95c8,	// (0x0004fa57) input_focus_pane_cp13

0x95dc,	// (0x0004fa6b) input_focus_pane_cp14_ParamLimits

0x95dc,	// (0x0004fa6b) input_focus_pane_cp14

0xec68,	// (0x000550f7) int_radio1_listscroll_pane

0x95f0,	// (0x0004fa7f) main_int_radio1_pane_g1_ParamLimits

0x95f0,	// (0x0004fa7f) main_int_radio1_pane_g1

0x9606,	// (0x0004fa95) main_int_radio1_pane_t1_ParamLimits

0x9606,	// (0x0004fa95) main_int_radio1_pane_t1

0x961f,	// (0x0004faae) main_int_radio1_pane_t2_ParamLimits

0x961f,	// (0x0004faae) main_int_radio1_pane_t2

0x963a,	// (0x0004fac9) main_int_radio1_pane_t3_ParamLimits

0x963a,	// (0x0004fac9) main_int_radio1_pane_t3

0x9655,	// (0x0004fae4) main_int_radio1_pane_t4_ParamLimits

0x9655,	// (0x0004fae4) main_int_radio1_pane_t4

0xec72,	// (0x00055101) main_int_radio1_pane_t5_ParamLimits

0xec72,	// (0x00055101) main_int_radio1_pane_t5

0x9667,	// (0x0004faf6) main_int_radio1_pane_t6_ParamLimits

0x9667,	// (0x0004faf6) main_int_radio1_pane_t6

0x967c,	// (0x0004fb0b) main_int_radio1_pane_t7_ParamLimits

0x967c,	// (0x0004fb0b) main_int_radio1_pane_t7

0x9691,	// (0x0004fb20) main_int_radio1_pane_t8_ParamLimits

0x9691,	// (0x0004fb20) main_int_radio1_pane_t8

0x96ae,	// (0x0004fb3d) main_int_radio1_pane_t9_ParamLimits

0x96ae,	// (0x0004fb3d) main_int_radio1_pane_t9

0x96c0,	// (0x0004fb4f) main_int_radio1_pane_t10_ParamLimits

0x96c0,	// (0x0004fb4f) main_int_radio1_pane_t10

0x96e6,	// (0x0004fb75) main_int_radio1_pane_t11_ParamLimits

0x96e6,	// (0x0004fb75) main_int_radio1_pane_t11

0x970c,	// (0x0004fb9b) main_int_radio1_pane_t12_ParamLimits

0x970c,	// (0x0004fb9b) main_int_radio1_pane_t12

0x000b,

0xfde9,	// (0x00056278) main_int_radio1_pane_t_ParamLimits

0xfde9,	// (0x00056278) main_int_radio1_pane_t

0xeb57,	// (0x00054fe6) int_radio_list_pane

0xeb5f,	// (0x00054fee) scroll_pane_cp037

0xec84,	// (0x00055113) list_double_large_graphic_int_radio_pane_ParamLimits

0xec84,	// (0x00055113) list_double_large_graphic_int_radio_pane

0xec98,	// (0x00055127) list_double_large_graphic_int_radio_pane_g1

0xd0c2,	// (0x00053551) list_double_large_graphic_int_radio_pane_t1

0xd0d0,	// (0x0005355f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe02,	// (0x00056291) list_double_large_graphic_int_radio_pane_t

0xe665,	// (0x00054af4) list_highlight_pane_cp027

0xec0e,	// (0x0005509d) main_button_pane_4

0x925c,	// (0x0004f6eb) main_welc_pane_g4_ParamLimits

0x925c,	// (0x0004f6eb) main_welc_pane_g4

0x92dc,	// (0x0004f76b) main_welc_pane_t4_ParamLimits

0x92dc,	// (0x0004f76b) main_welc_pane_t4

0x92ff,	// (0x0004f78e) main_welc_pane_t5_ParamLimits

0x92ff,	// (0x0004f78e) main_welc_pane_t5

0x933e,	// (0x0004f7cd) main_welc_pane_t6_ParamLimits

0x933e,	// (0x0004f7cd) main_welc_pane_t6

0x941a,	// (0x0004f8a9) welc_button_pane_2_ParamLimits

0x941a,	// (0x0004f8a9) welc_button_pane_2

0x9441,	// (0x0004f8d0) welc_button_pane_3_ParamLimits

0x9441,	// (0x0004f8d0) welc_button_pane_3

0xec0e,	// (0x0005509d) welc_button_pane_4

0x946b,	// (0x0004f8fa) welc_button_pane_5_ParamLimits

0x946b,	// (0x0004f8fa) welc_button_pane_5

0x0a9a,	// (0x00046f29) main_popup_welc_pane

0xecb9,	// (0x00055148) main_welc_sk_g3

0xecc3,	// (0x00055152) main_welc_sk_g4

0xeccd,	// (0x0005515c) main_welc_sk_t3

0xecdd,	// (0x0005516c) main_welc_sk_t4

0xeced,	// (0x0005517c) popup_welc_pane_t4

0xecfb,	// (0x0005518a) popup_welc_pane_t5

0xed09,	// (0x00055198) popup_welc_pane_t6

0xe665,	// (0x00054af4) main_acti_pane

0xe665,	// (0x00054af4) main_sso_pane

0x971e,	// (0x0004fbad) sso_body_pane_ParamLimits

0x971e,	// (0x0004fbad) sso_body_pane

0x9741,	// (0x0004fbd0) sso_logo_pane_ParamLimits

0x9741,	// (0x0004fbd0) sso_logo_pane

0x977f,	// (0x0004fc0e) sso_sk_pane_ParamLimits

0x977f,	// (0x0004fc0e) sso_sk_pane

0x9791,	// (0x0004fc20) main_sso_logo_pane_g1

0x979a,	// (0x0004fc29) sso_sk_pane_t1_ParamLimits

0x979a,	// (0x0004fc29) sso_sk_pane_t1

0x97b4,	// (0x0004fc43) sso_sk_pane_t2_ParamLimits

0x97b4,	// (0x0004fc43) sso_sk_pane_t2

0x0001,

0xfe07,	// (0x00056296) sso_sk_pane_t_ParamLimits

0xfe07,	// (0x00056296) sso_sk_pane_t

0xed4b,	// (0x000551da) aid_sso_gap

0xed54,	// (0x000551e3) aid_sso_txt1

0xed5e,	// (0x000551ed) aid_sso_txt2

0xed68,	// (0x000551f7) aid_sso_txt3

0x0002,

0xfe0c,	// (0x0005629b) aid_sso_txt

0xed72,	// (0x00055201) aid_sso_widget

0x981e,	// (0x0004fcad) sso_btn_pane_ParamLimits

0x981e,	// (0x0004fcad) sso_btn_pane

0x98b2,	// (0x0004fd41) sso_option_pane_ParamLimits

0x98b2,	// (0x0004fd41) sso_option_pane

0x9966,	// (0x0004fdf5) sso_query_pane_ParamLimits

0x9966,	// (0x0004fdf5) sso_query_pane

0x99bc,	// (0x0004fe4b) sso_query_pane_cp01_ParamLimits

0x99bc,	// (0x0004fe4b) sso_query_pane_cp01

0x9a1a,	// (0x0004fea9) sso_t_hdr_pane_ParamLimits

0x9a1a,	// (0x0004fea9) sso_t_hdr_pane

0x9a44,	// (0x0004fed3) sso_t_nml_pane_ParamLimits

0x9a44,	// (0x0004fed3) sso_t_nml_pane

0xed7c,	// (0x0005520b) sso_t_sub_pane

0x9753,	// (0x0004fbe2) sso_popup_window_ParamLimits

0x9753,	// (0x0004fbe2) sso_popup_window

0x97ca,	// (0x0004fc59) sso_apps_pane_ParamLimits

0x97ca,	// (0x0004fc59) sso_apps_pane

0x97f4,	// (0x0004fc83) sso_body_pane_g1

0x97fe,	// (0x0004fc8d) sso_body_pane_t1

0x980e,	// (0x0004fc9d) sso_body_pane_t2

0x0001,

0xfe13,	// (0x000562a2) sso_body_pane_t

0x986a,	// (0x0004fcf9) sso_btn_pane_cp01_ParamLimits

0x986a,	// (0x0004fcf9) sso_btn_pane_cp01

0x993a,	// (0x0004fdc9) sso_prog_pane_ParamLimits

0x993a,	// (0x0004fdc9) sso_prog_pane

0x9ab6,	// (0x0004ff45) sso_t_hdr_pane_t1_ParamLimits

0x9ab6,	// (0x0004ff45) sso_t_hdr_pane_t1

0xed91,	// (0x00055220) input_focus_pane_cp10_ParamLimits

0xed91,	// (0x00055220) input_focus_pane_cp10

0xeda5,	// (0x00055234) sso_query_pane_t1_ParamLimits

0xeda5,	// (0x00055234) sso_query_pane_t1

0xedb8,	// (0x00055247) sso_query_pane_t2_ParamLimits

0xedb8,	// (0x00055247) sso_query_pane_t2

0xedd2,	// (0x00055261) sso_query_pane_t3_ParamLimits

0xedd2,	// (0x00055261) sso_query_pane_t3

0xedfc,	// (0x0005528b) sso_query_pane_t4_ParamLimits

0xedfc,	// (0x0005528b) sso_query_pane_t4

0x0003,

0xfe18,	// (0x000562a7) sso_query_pane_t_ParamLimits

0xfe18,	// (0x000562a7) sso_query_pane_t

0xee20,	// (0x000552af) bg_button_pane_cp22

0xee29,	// (0x000552b8) sso_btn_pane_t1

0x9ac9,	// (0x0004ff58) sso_t_nml_pane_t1_ParamLimits

0x9ac9,	// (0x0004ff58) sso_t_nml_pane_t1

0xee38,	// (0x000552c7) sso_option_row_pane_ParamLimits

0xee38,	// (0x000552c7) sso_option_row_pane

0xee45,	// (0x000552d4) sso_t_sub_pane_t1_ParamLimits

0xee45,	// (0x000552d4) sso_t_sub_pane_t1

0x0c30,	// (0x000470bf) bg_popup_window_pane_cp11_ParamLimits

0x0c30,	// (0x000470bf) bg_popup_window_pane_cp11

0xee62,	// (0x000552f1) popup_sk_window_cp01_ParamLimits

0xee62,	// (0x000552f1) popup_sk_window_cp01

0xee6f,	// (0x000552fe) sso_popup_body_pane_ParamLimits

0xee6f,	// (0x000552fe) sso_popup_body_pane

0xee7c,	// (0x0005530b) scroll_pane_cp21_ParamLimits

0xee7c,	// (0x0005530b) scroll_pane_cp21

0xee89,	// (0x00055318) sso_popup_body_t_pane_ParamLimits

0xee89,	// (0x00055318) sso_popup_body_t_pane

0xee96,	// (0x00055325) sso_popup_body_t_hdr_pane_ParamLimits

0xee96,	// (0x00055325) sso_popup_body_t_hdr_pane

0x9ae4,	// (0x0004ff73) sso_popup_body_t_nml_pane_ParamLimits

0x9ae4,	// (0x0004ff73) sso_popup_body_t_nml_pane

0x9b0b,	// (0x0004ff9a) sso_popup_body_t_sub_pane_ParamLimits

0x9b0b,	// (0x0004ff9a) sso_popup_body_t_sub_pane

0xeea8,	// (0x00055337) sso_popup_body_t_hdr_pane_t1

0x9b2e,	// (0x0004ffbd) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9b2e,	// (0x0004ffbd) sso_popup_body_t_nml_pane_t1

0xeeb8,	// (0x00055347) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeeb8,	// (0x00055347) sso_popup_body_t_sub_pane_t1

0x133e,	// (0x000477cd) sso_prog_pane_g1

0x9b66,	// (0x0004fff5) sso_apps_pane_comp1_ParamLimits

0x9b66,	// (0x0004fff5) sso_apps_pane_comp1

0xeedd,	// (0x0005536c) sso_apps_pane_comp1_g1

0xeee5,	// (0x00055374) sso_apps_pane_comp1_t1

0xef01,	// (0x00055390) sso_option_row_pane_g1

0xef19,	// (0x000553a8) sso_option_row_pane_t1

0xe2cb,	// (0x0005475a) list_cmail_pane_ParamLimits

0xe665,	// (0x00054af4) main_call7_pane

0x9198,	// (0x0004f627) bg_welc_area_ParamLimits

0x9198,	// (0x0004f627) bg_welc_area

0x9381,	// (0x0004f810) sso_t_hdr_pane_a_t1_ParamLimits

0x9381,	// (0x0004f810) sso_t_hdr_pane_a_t1

0x939c,	// (0x0004f82b) sso_t_nml_pane_a_t1_ParamLimits

0x939c,	// (0x0004f82b) sso_t_nml_pane_a_t1

0x93cb,	// (0x0004f85a) sso_t_sub_pane_a_t1_ParamLimits

0x93cb,	// (0x0004f85a) sso_t_sub_pane_a_t1

0x9486,	// (0x0004f915) welc_button_pane_cp01_ParamLimits

0x9486,	// (0x0004f915) welc_button_pane_cp01

0xeca1,	// (0x00055130) sso_btn_pane_t1_copy1

0xecb0,	// (0x0005513f) welc_button_pane_2_comp1

0xed19,	// (0x000551a8) sso_t_hdr_pane_p_t1

0xed29,	// (0x000551b8) sso_t_nml_pane_p_t1

0xed39,	// (0x000551c8) sso_t_sub_pane_p_t1

0xe665,	// (0x00054af4) main_att_pane

0xe665,	// (0x00054af4) main_vod_pane

0xed7c,	// (0x0005520b) sso_t_sub_pane_ParamLimits

0xeef3,	// (0x00055382) input_focus_pane_cp10_t1

0xef19,	// (0x000553a8) sso_option_row_pane_t1_ParamLimits

0x9b80,	// (0x0005000f) main_att_body_pane_ParamLimits

0x9b80,	// (0x0005000f) main_att_body_pane

0x9b96,	// (0x00050025) att_btn_emg_pane_ParamLimits

0x9b96,	// (0x00050025) att_btn_emg_pane

0x9bb5,	// (0x00050044) att_btn_pane_ParamLimits

0x9bb5,	// (0x00050044) att_btn_pane

0x9c28,	// (0x000500b7) att_btn_pane_cp01_ParamLimits

0x9c28,	// (0x000500b7) att_btn_pane_cp01

0x9c66,	// (0x000500f5) att_li_srv_pane_ParamLimits

0x9c66,	// (0x000500f5) att_li_srv_pane

0x9c83,	// (0x00050112) att_opt_pane_ParamLimits

0x9c83,	// (0x00050112) att_opt_pane

0x9ccd,	// (0x0005015c) att_query_pane_ParamLimits

0x9ccd,	// (0x0005015c) att_query_pane

0x9d46,	// (0x000501d5) att_query_pane_cp01_ParamLimits

0x9d46,	// (0x000501d5) att_query_pane_cp01

0x9d92,	// (0x00050221) att_t_hdr_pane_ParamLimits

0x9d92,	// (0x00050221) att_t_hdr_pane

0x9e02,	// (0x00050291) att_t_nml_pane_ParamLimits

0x9e02,	// (0x00050291) att_t_nml_pane

0x9e80,	// (0x0005030f) att_t_nml_pane_cp01_ParamLimits

0x9e80,	// (0x0005030f) att_t_nml_pane_cp01

0x9eae,	// (0x0005033d) att_t_nmlb_pane_ParamLimits

0x9eae,	// (0x0005033d) att_t_nmlb_pane

0x9f1d,	// (0x000503ac) att_term_pane_ParamLimits

0x9f1d,	// (0x000503ac) att_term_pane

0x9f6d,	// (0x000503fc) main_att_body_pane_g1_ParamLimits

0x9f6d,	// (0x000503fc) main_att_body_pane_g1

0xef35,	// (0x000553c4) att_t_hdr_pane_t1_ParamLimits

0xef35,	// (0x000553c4) att_t_hdr_pane_t1

0xef48,	// (0x000553d7) att_t_nml_pane_t1_ParamLimits

0xef48,	// (0x000553d7) att_t_nml_pane_t1

0xee29,	// (0x000552b8) att_btn_pane_t1

0xee20,	// (0x000552af) bg_button_pane_cp23

0x9f99,	// (0x00050428) att_li_srv_row_pane_ParamLimits

0x9f99,	// (0x00050428) att_li_srv_row_pane

0xef6d,	// (0x000553fc) att_t_nmlb_pane_t1_ParamLimits

0xef6d,	// (0x000553fc) att_t_nmlb_pane_t1

0xef89,	// (0x00055418) att_query_pane_t1

0xef98,	// (0x00055427) att_query_pane_t2

0xefa7,	// (0x00055436) att_query_pane_t3

0x0002,

0xfe26,	// (0x000562b5) att_query_pane_t

0xefb6,	// (0x00055445) input_focus_pane_cp11

0xefbf,	// (0x0005544e) att_term_pane_t1_ParamLimits

0xefbf,	// (0x0005544e) att_term_pane_t1

0xe665,	// (0x00054af4) att_opt_row_pane

0xefdc,	// (0x0005546b) att_opt_row_pane_g1

0xefe4,	// (0x00055473) att_opt_row_pane_t1_ParamLimits

0xefe4,	// (0x00055473) att_opt_row_pane_t1

0x9fa9,	// (0x00050438) att_li_srv_row_pane_g1

0x9fb1,	// (0x00050440) att_li_srv_row_pane_t1_ParamLimits

0x9fb1,	// (0x00050440) att_li_srv_row_pane_t1

0x9fb1,	// (0x00050440) att_li_srv_row_pane_t2_ParamLimits

0x9fb1,	// (0x00050440) att_li_srv_row_pane_t2

0x0001,

0xfe2d,	// (0x000562bc) att_li_srv_row_pane_t_ParamLimits

0xfe2d,	// (0x000562bc) att_li_srv_row_pane_t

0xeffd,	// (0x0005548c) att_btn_close_pane_g1

0xe665,	// (0x00054af4) bg_button_pane_cp24

0x9fc6,	// (0x00050455) main_vod_body_pane_ParamLimits

0x9fc6,	// (0x00050455) main_vod_body_pane

0x9fda,	// (0x00050469) main_vod_body_pane_g1_ParamLimits

0x9fda,	// (0x00050469) main_vod_body_pane_g1

0xa00e,	// (0x0005049d) scroll_pane_cp24_ParamLimits

0xa00e,	// (0x0005049d) scroll_pane_cp24

0xa05c,	// (0x000504eb) vod_btn_pane_ParamLimits

0xa05c,	// (0x000504eb) vod_btn_pane

0xa0a2,	// (0x00050531) vod_det_pane_ParamLimits

0xa0a2,	// (0x00050531) vod_det_pane

0xa0d6,	// (0x00050565) vod_logo_g1_ParamLimits

0xa0d6,	// (0x00050565) vod_logo_g1

0xa114,	// (0x000505a3) vod_opt_pane_ParamLimits

0xa114,	// (0x000505a3) vod_opt_pane

0xa147,	// (0x000505d6) vod_opt_pane_cp01_ParamLimits

0xa147,	// (0x000505d6) vod_opt_pane_cp01

0xa173,	// (0x00050602) vod_query_pane_ParamLimits

0xa173,	// (0x00050602) vod_query_pane

0xa19e,	// (0x0005062d) vod_query_pane_cp01_ParamLimits

0xa19e,	// (0x0005062d) vod_query_pane_cp01

0xa1aa,	// (0x00050639) vod_t_nml_pane_ParamLimits

0xa1aa,	// (0x00050639) vod_t_nml_pane

0xa25b,	// (0x000506ea) vod_t_nml_pane_cp01_ParamLimits

0xa25b,	// (0x000506ea) vod_t_nml_pane_cp01

0xa297,	// (0x00050726) vod_t_sub_pane_ParamLimits

0xa297,	// (0x00050726) vod_t_sub_pane

0xa2c8,	// (0x00050757) vod_t_sub_pane_cp01_ParamLimits

0xa2c8,	// (0x00050757) vod_t_sub_pane_cp01

0xefb6,	// (0x00055445) vod_query_field_pane

0xf005,	// (0x00055494) vod_query_pane_t1

0xf014,	// (0x000554a3) bg_button_pane_cp25

0xee29,	// (0x000552b8) sso_btn_pane_t1_copy2

0xa2f4,	// (0x00050783) vod_t_nml_pane_t1_ParamLimits

0xa2f4,	// (0x00050783) vod_t_nml_pane_t1

0xa329,	// (0x000507b8) vod_opt_row_pane_ParamLimits

0xa329,	// (0x000507b8) vod_opt_row_pane

0xa33b,	// (0x000507ca) vod_t_sub_pane_t1_ParamLimits

0xa33b,	// (0x000507ca) vod_t_sub_pane_t1

0xa354,	// (0x000507e3) vod_det_cell_pane_ParamLimits

0xa354,	// (0x000507e3) vod_det_cell_pane

0xe665,	// (0x00054af4) input_focus_pane_cp15

0xa365,	// (0x000507f4) vod_query_field_pane_t1

0xa373,	// (0x00050802) vod_opt_row_pane_g1_ParamLimits

0xa373,	// (0x00050802) vod_opt_row_pane_g1

0xa37f,	// (0x0005080e) vod_opt_row_pane_t1_ParamLimits

0xa37f,	// (0x0005080e) vod_opt_row_pane_t1

0xa3a1,	// (0x00050830) vod_det_cell_field_pane

0xa3aa,	// (0x00050839) vod_det_cell_pane_g1

0xa3b2,	// (0x00050841) vod_det_cell_pane_t1

0xe665,	// (0x00054af4) input_focus_pane_cp16

0xa3c1,	// (0x00050850) vod_det_cell_field_pane_t1

0x8c0e,	// (0x0004f09d) call7_btn_grp_pane_ParamLimits

0x8c0e,	// (0x0004f09d) call7_btn_grp_pane

0x0c30,	// (0x000470bf) call7_bubble_pane_ParamLimits

0x0c30,	// (0x000470bf) call7_bubble_pane

0xa3cf,	// (0x0005085e) cell_call7_btn_pane_ParamLimits

0xa3cf,	// (0x0005085e) cell_call7_btn_pane

0xa3e3,	// (0x00050872) call7_pane_g1_ParamLimits

0xa3e3,	// (0x00050872) call7_pane_g1

0xa3f5,	// (0x00050884) call7_windows_conf_pane_ParamLimits

0xa3f5,	// (0x00050884) call7_windows_conf_pane

0xa413,	// (0x000508a2) popup_call7_1st_window_ParamLimits

0xa413,	// (0x000508a2) popup_call7_1st_window

0xa425,	// (0x000508b4) popup_call7_2nd_window_ParamLimits

0xa425,	// (0x000508b4) popup_call7_2nd_window

0xa437,	// (0x000508c6) popup_call7_3rd_window_ParamLimits

0xa437,	// (0x000508c6) popup_call7_3rd_window

0xe665,	// (0x00054af4) bg_button_pane_cp26

0xeadd,	// (0x00054f6c) cell_call7_btn_pane_g1

0xeae6,	// (0x00054f75) cell_call7_btn_pane_t1

0xe665,	// (0x00054af4) bg_popup_window_pane_cp12

0xa449,	// (0x000508d8) popup_call7_1st_window_g1

0xa451,	// (0x000508e0) popup_call7_1st_window_g2

0xa459,	// (0x000508e8) popup_call7_1st_window_g3

0x0002,

0xfe32,	// (0x000562c1) popup_call7_1st_window_g

0xa461,	// (0x000508f0) popup_call7_1st_window_t1

0xa470,	// (0x000508ff) popup_call7_1st_window_t2

0xa480,	// (0x0005090f) popup_call7_1st_window_t3

0x0002,

0xfe39,	// (0x000562c8) popup_call7_1st_window_t

0xe665,	// (0x00054af4) bg_popup_window_pane_cp13

0xa490,	// (0x0005091f) popup_call7_2nd_window_g1

0xa498,	// (0x00050927) popup_call7_2nd_window_g2

0xa4a0,	// (0x0005092f) popup_call7_2nd_window_g3

0x0002,

0xfe40,	// (0x000562cf) popup_call7_2nd_window_g

0xa4a8,	// (0x00050937) popup_call7_2nd_window_t1

0xe665,	// (0x00054af4) bg_popup_window_pane_cp14

0xa4b7,	// (0x00050946) call7_list_conf_pane

0xa4bf,	// (0x0005094e) call7_list_conf_row_pane_ParamLimits

0xa4bf,	// (0x0005094e) call7_list_conf_row_pane

0xa4d2,	// (0x00050961) call7_list_conf_row_pane_g1

0xa4da,	// (0x00050969) call7_list_conf_row_pane_g2

0x0001,

0xfe47,	// (0x000562d6) call7_list_conf_row_pane_g

0xa4e2,	// (0x00050971) call7_list_conf_row_pane_t1

0xe665,	// (0x00054af4) list_highlight_pane_cp22

0x9906,	// (0x0004fd95) sso_option_pane_cp01_ParamLimits

0x9906,	// (0x0004fd95) sso_option_pane_cp01

0x11ef,	// (0x0004767e) msg_header_pane_ParamLimits

0xaaaa,	// (0x00050f39) bg_button_pane_cp01_ParamLimits

0xaabe,	// (0x00050f4d) input_focus_pane_cp07_ParamLimits

0x8490,	// (0x0004e91f) popup_email_progress_window

0x133e,	// (0x000477cd) popup_email_progress_window_g1

0xa4f0,	// (0x0005097f) popup_email_progress_window_g2

0x0001,

0xfe4c,	// (0x000562db) popup_email_progress_window_g

0xa4f8,	// (0x00050987) popup_email_progress_window_t1

0xe665,	// (0x00054af4) cmail_conv_pane

0xce78,	// (0x00053307) list_single_dyc_row_pane_g5_ParamLimits

0xce78,	// (0x00053307) list_single_dyc_row_pane_g5

0xce84,	// (0x00053313) list_single_dyc_row_pane_g6_ParamLimits

0xce84,	// (0x00053313) list_single_dyc_row_pane_g6

0xce9c,	// (0x0005332b) list_single_dyc_row_pane_g7_ParamLimits

0xce9c,	// (0x0005332b) list_single_dyc_row_pane_g7

0x91d4,	// (0x0004f663) main_button_pane_5_ParamLimits

0x91d4,	// (0x0004f663) main_button_pane_5

0x9735,	// (0x0004fbc4) sso_emg_call_btn_pane_ParamLimits

0x9735,	// (0x0004fbc4) sso_emg_call_btn_pane

0x9a9a,	// (0x0004ff29) sso_t_sub_pane_cp01_ParamLimits

0x9a9a,	// (0x0004ff29) sso_t_sub_pane_cp01

0xef01,	// (0x00055390) sso_option_row_pane_g1_ParamLimits

0xef0d,	// (0x0005539c) sso_option_row_pane_g2_ParamLimits

0xef0d,	// (0x0005539c) sso_option_row_pane_g2

0x0001,

0xfe21,	// (0x000562b0) sso_option_row_pane_g_ParamLimits

0xfe21,	// (0x000562b0) sso_option_row_pane_g

0x9c44,	// (0x000500d3) att_btn_pane_cp02_ParamLimits

0x9c44,	// (0x000500d3) att_btn_pane_cp02

0xa506,	// (0x00050995) cmail_conv_hdr_pane

0xa50f,	// (0x0005099e) list_cmail_conv_pane

0xa519,	// (0x000509a8) scroll_pane_cp31

0xa521,	// (0x000509b0) cmail_conv_hdr_pane_t1

0xa52f,	// (0x000509be) cmail_conv_hdr_pane_t2

0x0001,

0xfe51,	// (0x000562e0) cmail_conv_hdr_pane_t

0xa53d,	// (0x000509cc) bubble_cmail_conv_pane_ParamLimits

0xa53d,	// (0x000509cc) bubble_cmail_conv_pane

0xe3ed,	// (0x0005487c) aid_size_colorization_pane

0x1d9b,	// (0x0004822a) bg_bubble_cmail_conv_pane

0xa559,	// (0x000509e8) body_bubble_cmail_conv_pane

0x35ed,	// (0x00049a7c) bubble_cmail_conv_pane_g1

0x35f5,	// (0x00049a84) bubble_cmail_conv_pane_g2

0x35fd,	// (0x00049a8c) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x000556dc) bubble_cmail_conv_pane_g

0xa561,	// (0x000509f0) bubble_cmail_conv_pane_t1

0xa56f,	// (0x000509fe) bg_bubble_cmail_conv_pane_g1

0xa578,	// (0x00050a07) bg_bubble_cmail_conv_pane_g2

0xa581,	// (0x00050a10) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe56,	// (0x000562e5) bg_bubble_cmail_conv_pane_g

0xa58a,	// (0x00050a19) body_bubble_cmail_conv_pane_t1_ParamLimits

0xa58a,	// (0x00050a19) body_bubble_cmail_conv_pane_t1

0xa5a1,	// (0x00050a30) body_bubble_cmail_conv_pane_t2_ParamLimits

0xa5a1,	// (0x00050a30) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe5d,	// (0x000562ec) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe5d,	// (0x000562ec) body_bubble_cmail_conv_pane_t

0x0c30,	// (0x000470bf) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
