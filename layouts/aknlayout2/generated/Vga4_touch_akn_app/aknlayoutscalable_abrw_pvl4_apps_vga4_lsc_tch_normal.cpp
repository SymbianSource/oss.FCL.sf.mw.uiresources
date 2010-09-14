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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000277fa };

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
0x1c28,	// (0x00029422) Screen

0x1c34,	// (0x0002942e) application_window

0x1c40,	// (0x0002943a) area_bottom_pane_ParamLimits

0x1c40,	// (0x0002943a) area_bottom_pane

0x071e,	// (0x00027f18) area_top_pane_ParamLimits

0x071e,	// (0x00027f18) area_top_pane

0xb72a,	// (0x00032f24) call_video_uplink_pane_ParamLimits

0xb72a,	// (0x00032f24) call_video_uplink_pane

0x07ac,	// (0x00027fa6) main_pane_ParamLimits

0x07ac,	// (0x00027fa6) main_pane

0x65bb,	// (0x0002ddb5) context_pane

0x65ce,	// (0x0002ddc8) navi_pane

0x6605,	// (0x0002ddff) popup_cale_events_window_ParamLimits

0x6605,	// (0x0002ddff) popup_cale_events_window

0x661d,	// (0x0002de17) popup_mup_playback_window

0x6625,	// (0x0002de1f) signal_pane

0xef71,	// (0x0003676b) main_browser_pane

0x246c,	// (0x00029c66) main_burst_pane

0x0bc8,	// (0x000283c2) main_calc_pane

0x65af,	// (0x0002dda9) main_cale_day_pane

0x0bdc,	// (0x000283d6) main_cale_month_pane

0x65af,	// (0x0002dda9) main_cale_week_pane

0x246c,	// (0x00029c66) main_call_pane

0xec1b,	// (0x00036415) main_call_poc_pane

0x246c,	// (0x00029c66) main_camera_pane

0x246c,	// (0x00029c66) main_chi_dic_pane

0x409b,	// (0x0002b895) main_clock_pane

0xec1b,	// (0x00036415) main_fmradio_pane

0x246c,	// (0x00029c66) main_graph_messa_pane

0xec1b,	// (0x00036415) main_help_pane

0xef71,	// (0x0003676b) main_im_pane

0xee76,	// (0x00036670) main_image_pane_ParamLimits

0xee76,	// (0x00036670) main_image_pane

0xec1b,	// (0x00036415) main_location2_pane

0x246c,	// (0x00029c66) main_location_pane

0xee76,	// (0x00036670) main_messa_pane

0xec1b,	// (0x00036415) main_mp2_pane

0x246c,	// (0x00029c66) main_mp_pane

0xec1b,	// (0x00036415) main_msg_pane

0xec1b,	// (0x00036415) main_mup_eq_pane

0xec1b,	// (0x00036415) main_mup_pane

0xef71,	// (0x0003676b) main_notes_pane

0xec1b,	// (0x00036415) main_pec_pane

0xec1b,	// (0x00036415) main_phob_pane

0xec1b,	// (0x00036415) main_pinb_pane

0xec1b,	// (0x00036415) main_postcard_pane

0xec1b,	// (0x00036415) main_qdial_pane

0x246c,	// (0x00029c66) main_skin_pane

0xec1b,	// (0x00036415) main_smil2_pane

0x246c,	// (0x00029c66) main_smil_pane

0x246c,	// (0x00029c66) main_video_pane

0x246c,	// (0x00029c66) main_video_tele_pane

0xee76,	// (0x00036670) main_viewer_pane_ParamLimits

0xee76,	// (0x00036670) main_viewer_pane

0x246c,	// (0x00029c66) main_vorec_pane

0x0c2e,	// (0x00028428) popup_blid_sat_info_window_ParamLimits

0x0c2e,	// (0x00028428) popup_blid_sat_info_window

0x0c92,	// (0x0002848c) popup_dyc_status_message_window_ParamLimits

0x0c92,	// (0x0002848c) popup_dyc_status_message_window

0x0cac,	// (0x000284a6) popup_grid_large_graphic_window_ParamLimits

0x0cac,	// (0x000284a6) popup_grid_large_graphic_window

0x0d6e,	// (0x00028568) popup_loc_request_window_ParamLimits

0x0d6e,	// (0x00028568) popup_loc_request_window

0x0e94,	// (0x0002868e) popup_wml_address_window_ParamLimits

0x0e94,	// (0x0002868e) popup_wml_address_window

0x63be,	// (0x0002dbb8) call_muted_g1

0x516f,	// (0x0002c969) popup_call_audio_conf_window_ParamLimits

0x516f,	// (0x0002c969) popup_call_audio_conf_window

0x63ce,	// (0x0002dbc8) popup_call_audio_first_window_ParamLimits

0x63ce,	// (0x0002dbc8) popup_call_audio_first_window

0x6444,	// (0x0002dc3e) popup_call_audio_in_window_ParamLimits

0x6444,	// (0x0002dc3e) popup_call_audio_in_window

0x6480,	// (0x0002dc7a) popup_call_audio_out_window_ParamLimits

0x6480,	// (0x0002dc7a) popup_call_audio_out_window

0x64ba,	// (0x0002dcb4) popup_call_audio_second_window_ParamLimits

0x64ba,	// (0x0002dcb4) popup_call_audio_second_window

0x6510,	// (0x0002dd0a) popup_call_audio_wait_window_ParamLimits

0x6510,	// (0x0002dd0a) popup_call_audio_wait_window

0x6545,	// (0x0002dd3f) popup_number_entry_window_ParamLimits

0x6545,	// (0x0002dd3f) popup_number_entry_window

0xe7d3,	// (0x00035fcd) bg_popup_call_pane_cp05_ParamLimits

0xe7d3,	// (0x00035fcd) bg_popup_call_pane_cp05

0xe7f3,	// (0x00035fed) popup_number_entry_window_t1

0xe806,	// (0x00036000) popup_number_entry_window_t2

0xe818,	// (0x00036012) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00036865) popup_number_entry_window_t

0xe85f,	// (0x00036059) text_title_cp2

0xe872,	// (0x0003606c) bg_popup_call_pane_cp_ParamLimits

0xe872,	// (0x0003606c) bg_popup_call_pane_cp

0xe880,	// (0x0003607a) call_thumbnail_pane

0xe888,	// (0x00036082) popup_call_audio_in_window_g1_ParamLimits

0xe888,	// (0x00036082) popup_call_audio_in_window_g1

0xe894,	// (0x0003608e) popup_call_audio_in_window_g2_ParamLimits

0xe894,	// (0x0003608e) popup_call_audio_in_window_g2

0xe8a0,	// (0x0003609a) popup_call_audio_in_window_g3_ParamLimits

0xe8a0,	// (0x0003609a) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0003686e) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0003686e) popup_call_audio_in_window_g

0xe8ac,	// (0x000360a6) popup_call_audio_in_window_t1_ParamLimits

0xe8ac,	// (0x000360a6) popup_call_audio_in_window_t1

0xe8c8,	// (0x000360c2) popup_call_audio_in_window_t2_ParamLimits

0xe8c8,	// (0x000360c2) popup_call_audio_in_window_t2

0xe8e4,	// (0x000360de) popup_call_audio_in_window_t3_ParamLimits

0xe8e4,	// (0x000360de) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00036875) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00036875) popup_call_audio_in_window_t

0xe872,	// (0x0003606c) bg_popup_call_pane_cp01_ParamLimits

0xe872,	// (0x0003606c) bg_popup_call_pane_cp01

0xe880,	// (0x0003607a) call_thumbnail_pane_cp02

0xe8f7,	// (0x000360f1) call_type_pane_cp022

0xe8ff,	// (0x000360f9) popup_call_audio_out_window_g1_ParamLimits

0xe8ff,	// (0x000360f9) popup_call_audio_out_window_g1

0xe911,	// (0x0003610b) popup_call_audio_out_window_g2_ParamLimits

0xe911,	// (0x0003610b) popup_call_audio_out_window_g2

0xe91d,	// (0x00036117) popup_call_audio_out_window_g3_ParamLimits

0xe91d,	// (0x00036117) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0003687c) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0003687c) popup_call_audio_out_window_g

0xe92f,	// (0x00036129) popup_call_audio_out_window_t1_ParamLimits

0xe92f,	// (0x00036129) popup_call_audio_out_window_t1

0xe947,	// (0x00036141) popup_call_audio_out_window_t2_ParamLimits

0xe947,	// (0x00036141) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00036883) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00036883) popup_call_audio_out_window_t

0xe95c,	// (0x00036156) bg_popup_call_pane_ParamLimits

0xe95c,	// (0x00036156) bg_popup_call_pane

0x1c85,	// (0x0002947f) call_thumbnail_pane_cp_ParamLimits

0x1c85,	// (0x0002947f) call_thumbnail_pane_cp

0xe9e0,	// (0x000361da) call_type_pane_cp01_ParamLimits

0xe9e0,	// (0x000361da) call_type_pane_cp01

0xea24,	// (0x0003621e) popup_call_audio_first_window_g1_ParamLimits

0xea24,	// (0x0003621e) popup_call_audio_first_window_g1

0xea70,	// (0x0003626a) popup_call_audio_first_window_g2_ParamLimits

0xea70,	// (0x0003626a) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00036888) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00036888) popup_call_audio_first_window_g

0xeab4,	// (0x000362ae) popup_call_audio_first_window_t1_ParamLimits

0xeab4,	// (0x000362ae) popup_call_audio_first_window_t1

0xeb60,	// (0x0003635a) popup_call_audio_first_window_t4_ParamLimits

0xeb60,	// (0x0003635a) popup_call_audio_first_window_t4

0xebec,	// (0x000363e6) popup_call_audio_first_window_t5_ParamLimits

0xebec,	// (0x000363e6) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0003688d) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0003688d) popup_call_audio_first_window_t

0xec1b,	// (0x00036415) bg_popup_call_pane_cp02

0xec25,	// (0x0003641f) call_type_pane_cp023

0xec2d,	// (0x00036427) popup_call_audio_wait_window_g1

0xec35,	// (0x0003642f) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00036894) popup_call_audio_wait_window_g

0xec3d,	// (0x00036437) popup_call_audio_wait_window_t3

0xec4b,	// (0x00036445) bg_popup_call_pane_cp03_ParamLimits

0xec4b,	// (0x00036445) bg_popup_call_pane_cp03

0xecab,	// (0x000364a5) call_thumbnail_pane_cp011_ParamLimits

0xecab,	// (0x000364a5) call_thumbnail_pane_cp011

0xecb7,	// (0x000364b1) call_type_pane_cp034_ParamLimits

0xecb7,	// (0x000364b1) call_type_pane_cp034

0xecf3,	// (0x000364ed) popup_call_audio_second_window_g1_ParamLimits

0xecf3,	// (0x000364ed) popup_call_audio_second_window_g1

0xed2f,	// (0x00036529) popup_call_audio_second_window_g2_ParamLimits

0xed2f,	// (0x00036529) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00036899) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00036899) popup_call_audio_second_window_g

0xed6b,	// (0x00036565) popup_call_audio_second_window_t1_ParamLimits

0xed6b,	// (0x00036565) popup_call_audio_second_window_t1

0xedec,	// (0x000365e6) popup_call_audio_second_window_t2_ParamLimits

0xedec,	// (0x000365e6) popup_call_audio_second_window_t2

0xee22,	// (0x0003661c) popup_call_audio_second_window_t3_ParamLimits

0xee22,	// (0x0003661c) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0003689e) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0003689e) popup_call_audio_second_window_t

0xec1b,	// (0x00036415) bg_popup_call_pane_cp04

0xee58,	// (0x00036652) list_conf_pane

0xee60,	// (0x0003665a) popup_call_audio_conf_window_t1

0xee6e,	// (0x00036668) call_thumbnail_pane_g1

0xee76,	// (0x00036670) bg_pinb_pane_ParamLimits

0xee76,	// (0x00036670) bg_pinb_pane

0xee84,	// (0x0003667e) find_pinb_pane

0xee76,	// (0x00036670) listscroll_pinb_pane_ParamLimits

0xee76,	// (0x00036670) listscroll_pinb_pane

0xee8e,	// (0x00036688) pinb_bg_pane_g1

0xee8e,	// (0x00036688) pinb_bg_pane_g2

0xee8e,	// (0x00036688) pinb_bg_pane_g3

0xee8e,	// (0x00036688) pinb_bg_pane_g4

0xee8e,	// (0x00036688) pinb_bg_pane_g5

0xee8e,	// (0x00036688) pinb_bg_pane_g6

0xee8e,	// (0x00036688) pinb_bg_pane_g7

0xee8e,	// (0x00036688) pinb_bg_pane_g8

0xee8e,	// (0x00036688) pinb_bg_pane_g9

0xee8e,	// (0x00036688) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000368a5) pinb_bg_pane_g

0xe7c9,	// (0x00035fc3) grid_pinb_pane

0xe7c9,	// (0x00035fc3) list_pinb_pane

0xee98,	// (0x00036692) scroll_pane_cp01_ParamLimits

0xee98,	// (0x00036692) scroll_pane_cp01

0xeea6,	// (0x000366a0) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x000366a0) find_pinb_pane_g1

0xeebe,	// (0x000366b8) find_pinb_pane_t1

0xeed0,	// (0x000366ca) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x000368bf) find_pinb_pane_t

0xeee5,	// (0x000366df) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x000366df) input_focus_pane_cp01

0xeef1,	// (0x000366eb) cell_pinb_pane_ParamLimits

0xeef1,	// (0x000366eb) cell_pinb_pane

0xeeff,	// (0x000366f9) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) cell_pinb_pane_g1

0xef0d,	// (0x00036707) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x00036707) cell_pinb_pane_g2

0xef0d,	// (0x00036707) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x00036707) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x000368c4) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x000368c4) cell_pinb_pane_g

0xec1b,	// (0x00036415) grid_highlight_pane_cp01

0xeef1,	// (0x000366eb) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x000366eb) list_pinb_item_pane

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp02

0xef1b,	// (0x00036715) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x00036715) list_pinb_item_pane_g1

0xef0d,	// (0x00036707) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x00036707) list_pinb_item_pane_g2

0xeeff,	// (0x000366f9) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x000366f9) list_pinb_item_pane_g3

0xef0d,	// (0x00036707) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x00036707) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x000368cb) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x000368cb) list_pinb_item_pane_g

0xef29,	// (0x00036723) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x00036723) list_pinb_item_pane_t1

0x0947,	// (0x00028141) calc_display_pane

0x096c,	// (0x00028166) calc_paper_pane

0x098f,	// (0x00028189) grid_calc_pane

0xec1b,	// (0x00036415) bg_list_pane_cp01

0x1ca9,	// (0x000294a3) clock_g1

0x1cb1,	// (0x000294ab) clock_g2

0x0001,

0xf0da,	// (0x000368d4) clock_g

0x1cb9,	// (0x000294b3) clock_t1_ParamLimits

0x1cb9,	// (0x000294b3) clock_t1

0x1cce,	// (0x000294c8) clock_t2_ParamLimits

0x1cce,	// (0x000294c8) clock_t2

0x1ce0,	// (0x000294da) clock_t3_ParamLimits

0x1ce0,	// (0x000294da) clock_t3

0x1cf2,	// (0x000294ec) clock_t4_ParamLimits

0x1cf2,	// (0x000294ec) clock_t4

0x1d04,	// (0x000294fe) clock_t5_ParamLimits

0x1d04,	// (0x000294fe) clock_t5

0x1d19,	// (0x00029513) clock_t6_ParamLimits

0x1d19,	// (0x00029513) clock_t6

0x1d2b,	// (0x00029525) clock_t7_ParamLimits

0x1d2b,	// (0x00029525) clock_t7

0x1d3d,	// (0x00029537) clock_t8_ParamLimits

0x1d3d,	// (0x00029537) clock_t8

0x1d51,	// (0x0002954b) clock_t9_ParamLimits

0x1d51,	// (0x0002954b) clock_t9

0x0008,

0xf0df,	// (0x000368d9) clock_t_ParamLimits

0xf0df,	// (0x000368d9) clock_t

0xef3d,	// (0x00036737) popup_clock_analogue_window_cp02

0xef3d,	// (0x00036737) popup_clock_digital_window_cp01

0xec1b,	// (0x00036415) listscroll_help_pane

0xec1b,	// (0x00036415) phob_pre_status_pane

0xef45,	// (0x0003673f) grid_qdial_pane

0x1d67,	// (0x00029561) listscroll_mce_pane

0xee76,	// (0x00036670) bg_notes_pane

0xef4f,	// (0x00036749) list_notes_pane

0x1d83,	// (0x0002957d) scroll_pane_cp06

0xef5d,	// (0x00036757) bg_calc_paper_pane

0xb768,	// (0x00032f62) list_calc_pane

0xef71,	// (0x0003676b) bg_calc_display_pane

0x09bd,	// (0x000281b7) calc_display_pane_t1

0x09cf,	// (0x000281c9) calc_display_pane_t2

0xb782,	// (0x00032f7c) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000368ec) calc_display_pane_t

0x09e1,	// (0x000281db) cell_calc_pane_ParamLimits

0x09e1,	// (0x000281db) cell_calc_pane

0xef7d,	// (0x00036777) bg_calc_paper_pane_g1

0xef89,	// (0x00036783) bg_calc_paper_pane_g2

0xef95,	// (0x0003678f) bg_calc_paper_pane_g3

0xefa1,	// (0x0003679b) bg_calc_paper_pane_g4

0xefad,	// (0x000367a7) bg_calc_paper_pane_g5

0x1d97,	// (0x00029591) bg_calc_paper_pane_g6

0x1da5,	// (0x0002959f) bg_calc_paper_pane_g7

0x1db3,	// (0x000295ad) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000368f3) bg_calc_paper_pane_g

0x1dc6,	// (0x000295c0) calc_bg_paper_pane_g9

0x1dd9,	// (0x000295d3) list_calc_item_pane_ParamLimits

0x1dd9,	// (0x000295d3) list_calc_item_pane

0xefb9,	// (0x000367b3) list_calc_item_pane_g1

0xb794,	// (0x00032f8e) list_calc_item_pane_t1_ParamLimits

0xb794,	// (0x00032f8e) list_calc_item_pane_t1

0x0a1c,	// (0x00028216) list_calc_item_pane_t2_ParamLimits

0x0a1c,	// (0x00028216) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00036904) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00036904) list_calc_item_pane_t

0xee8e,	// (0x00036688) cell_calc_pane_g1

0xefc6,	// (0x000367c0) grid_highlight_pane_cp02

0x1df1,	// (0x000295eb) bg_calc_display_pane_g1

0x0a4e,	// (0x00028248) bg_calc_display_pane_g2

0xefe8,	// (0x000367e2) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0003690e) bg_calc_display_pane_g

0x0a58,	// (0x00028252) cell_qdial_pane_ParamLimits

0x0a58,	// (0x00028252) cell_qdial_pane

0x1dfa,	// (0x000295f4) cell_qdial_pane_g1_ParamLimits

0x1dfa,	// (0x000295f4) cell_qdial_pane_g1

0x1e10,	// (0x0002960a) cell_qdial_pane_g2_ParamLimits

0x1e10,	// (0x0002960a) cell_qdial_pane_g2

0xeff1,	// (0x000367eb) cell_qdial_pane_g3_ParamLimits

0xeff1,	// (0x000367eb) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00036915) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00036915) cell_qdial_pane_g

0x1e37,	// (0x00029631) cell_qdial_pane_t1_ParamLimits

0x1e37,	// (0x00029631) cell_qdial_pane_t1

0x1e4f,	// (0x00029649) cell_qdial_pane_t2_ParamLimits

0x1e4f,	// (0x00029649) cell_qdial_pane_t2

0x1e62,	// (0x0002965c) cell_qdial_pane_t3_ParamLimits

0x1e62,	// (0x0002965c) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0003691e) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0003691e) cell_qdial_pane_t

0xec1b,	// (0x00036415) grid_highlight_pane_cp04

0xeffd,	// (0x000367f7) thumbnail_qdial_pane_ParamLimits

0xeffd,	// (0x000367f7) thumbnail_qdial_pane

0xf059,	// (0x00036853) list_help_pane

0xf062,	// (0x0003685c) scroll_pane_cp02

0x1e75,	// (0x0002966f) help_list_pane_t1_ParamLimits

0x1e75,	// (0x0002966f) help_list_pane_t1

0xb7a6,	// (0x00032fa0) bg_notes_pane_g2

0xb7ae,	// (0x00032fa8) bg_notes_pane_g3

0xb7b6,	// (0x00032fb0) notes_bg_pane_g1

0xb7be,	// (0x00032fb8) notes_bg_pane_g4

0xb7c6,	// (0x00032fc0) notes_bg_pane_g5

0xb7ce,	// (0x00032fc8) notes_bg_pane_g6

0xb7d6,	// (0x00032fd0) notes_bg_pane_g7

0xb7de,	// (0x00032fd8) notes_bg_pane_g8

0xb7e6,	// (0x00032fe0) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0003693c) notes_bg_pane_g

0x1e99,	// (0x00029693) list_notes_text_pane_ParamLimits

0x1e99,	// (0x00029693) list_notes_text_pane

0x1eb0,	// (0x000296aa) list_notes_text_pane_g1

0x1eb9,	// (0x000296b3) list_notes_text_pane_t1

0x1ed8,	// (0x000296d2) listscroll_cale_week_pane

0x1f0b,	// (0x00029705) bg_cale_heading_pane

0x1f2f,	// (0x00029729) bg_cale_pane_cp01

0x1f4c,	// (0x00029746) cale_week_corner_pane

0x1f6b,	// (0x00029765) cale_week_day_heading_pane

0x1f94,	// (0x0002978e) cale_week_scroll_pane_g1

0x1fb3,	// (0x000297ad) cale_week_scroll_pane_g2

0x1fcb,	// (0x000297c5) cale_week_scroll_pane_g3

0x1fe3,	// (0x000297dd) cale_week_scroll_pane_g4

0x1ffb,	// (0x000297f5) cale_week_scroll_pane_g5

0x201b,	// (0x00029815) cale_week_scroll_pane_g6

0x203b,	// (0x00029835) cale_week_scroll_pane_g7

0x205f,	// (0x00029859) cale_week_scroll_pane_g8

0x2083,	// (0x0002987d) cale_week_scroll_pane_g9

0x209b,	// (0x00029895) cale_week_scroll_pane_g10

0x20b3,	// (0x000298ad) cale_week_scroll_pane_g11

0x20cb,	// (0x000298c5) cale_week_scroll_pane_g12

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g13

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g14

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0003694b) cale_week_scroll_pane_g

0x2137,	// (0x00029931) cale_week_time_pane

0x215b,	// (0x00029955) grid_cale_week_pane

0x219f,	// (0x00029999) scroll_pane_cp08

0x21bc,	// (0x000299b6) cell_cale_week_pane_ParamLimits

0x21bc,	// (0x000299b6) cell_cale_week_pane

0x2258,	// (0x00029a52) cale_week_day_heading_pane_t1

0x2282,	// (0x00029a7c) cale_week_day_heading_pane_t2

0x22b1,	// (0x00029aab) cale_week_day_heading_pane_t3

0x22e0,	// (0x00029ada) cale_week_day_heading_pane_t4

0x230f,	// (0x00029b09) cale_week_day_heading_pane_t5

0x2342,	// (0x00029b3c) cale_week_day_heading_pane_t6

0x2379,	// (0x00029b73) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0003696c) cale_week_day_heading_pane_t

0x23a3,	// (0x00029b9d) bg_cale_side_pane

0x0a6c,	// (0x00028266) cale_week_time_pane_t1

0x0a86,	// (0x00028280) cale_week_time_pane_t2

0x0aa0,	// (0x0002829a) cale_week_time_pane_t3

0x0aba,	// (0x000282b4) cale_week_time_pane_t4

0x0ad4,	// (0x000282ce) cale_week_time_pane_t5

0x0aee,	// (0x000282e8) cale_week_time_pane_t6

0x0b0e,	// (0x00028308) cale_week_time_pane_t7

0x0b34,	// (0x0002832e) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0003697b) cale_week_time_pane_t

0x23b1,	// (0x00029bab) cell_cale_week_pane_g2

0x23d5,	// (0x00029bcf) cell_cale_week_pane_g3_ParamLimits

0x23d5,	// (0x00029bcf) cell_cale_week_pane_g3

0x23ed,	// (0x00029be7) grid_highlight_pane_cp07

0x23f5,	// (0x00029bef) listscroll_gms_pane

0x23ff,	// (0x00029bf9) grid_gms_pane

0x2408,	// (0x00029c02) listscroll_gms_pane_g1

0x2410,	// (0x00029c0a) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0003698c) listscroll_gms_pane_g

0x2418,	// (0x00029c12) scroll_pane_cp010

0x2423,	// (0x00029c1d) cell_gms_pane_ParamLimits

0x2423,	// (0x00029c1d) cell_gms_pane

0x243a,	// (0x00029c34) cell_gms_pane_g1

0x2442,	// (0x00029c3c) cell_gms_pane_g2

0x244a,	// (0x00029c44) cell_gms_pane_g3

0x2453,	// (0x00029c4d) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00036991) cell_gms_pane_g

0x245c,	// (0x00029c56) grid_highlight_pane_cp09

0x6342,	// (0x0002db3c) phob_pre_status_pane_g1

0x634a,	// (0x0002db44) phob_pre_status_pane_g2

0x6352,	// (0x0002db4c) phob_pre_status_pane_g3

0x635a,	// (0x0002db54) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x00036d55) phob_pre_status_pane_g

0x636a,	// (0x0002db64) phob_pre_status_pane_t1

0x637a,	// (0x0002db74) phob_pre_status_pane_t2

0x638a,	// (0x0002db84) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x00036d60) phob_pre_status_pane_t

0x246c,	// (0x00029c66) bg_list_pane_cp05

0x2474,	// (0x00029c6e) grid_vorec_pane

0x247e,	// (0x00029c78) vorec_t1

0x248c,	// (0x00029c86) vorec_t2

0x249a,	// (0x00029c94) vorec_t3

0x24a8,	// (0x00029ca2) vorec_t4

0x1c02,	// (0x000293fc) vorec_t5

0x1c10,	// (0x0002940a) vorec_t6

0x0004,

0xf1a0,	// (0x0003699a) vorec_t

0x1c1e,	// (0x00029418) wait_bar_pane_cp01

0x24c4,	// (0x00029cbe) cell_vorec_pane_ParamLimits

0x24c4,	// (0x00029cbe) cell_vorec_pane

0xb7ee,	// (0x00032fe8) cell_vorec_pane_g1

0xec1b,	// (0x00036415) grid_highlight_pane_cp05

0xee98,	// (0x00036692) cams_zoom_pane

0xee98,	// (0x00036692) image_vga_pane

0xeeff,	// (0x000366f9) main_camera_pane_g1

0xeeff,	// (0x000366f9) main_camera_pane_g2

0xeeff,	// (0x000366f9) main_camera_pane_g3

0xeeff,	// (0x000366f9) main_camera_pane_g4

0xeeff,	// (0x000366f9) main_camera_pane_g5

0xeeff,	// (0x000366f9) main_camera_pane_g6

0xeeff,	// (0x000366f9) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x000369a5) main_camera_pane_g

0x24d9,	// (0x00029cd3) main_camera_pane_t1

0x24d9,	// (0x00029cd3) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x000369b6) main_camera_pane_t

0x2501,	// (0x00029cfb) cams_zoom_pane_cp_ParamLimits

0x2501,	// (0x00029cfb) cams_zoom_pane_cp

0x2535,	// (0x00029d2f) image_cif_pane_ParamLimits

0x2535,	// (0x00029d2f) image_cif_pane

0xe7c9,	// (0x00035fc3) image_subqcif_pane

0x2547,	// (0x00029d41) main_video_pane_g1_ParamLimits

0x2547,	// (0x00029d41) main_video_pane_g1

0x2575,	// (0x00029d6f) main_video_pane_g2_ParamLimits

0x2575,	// (0x00029d6f) main_video_pane_g2

0x25af,	// (0x00029da9) main_video_pane_g3_ParamLimits

0x25af,	// (0x00029da9) main_video_pane_g3

0x25af,	// (0x00029da9) main_video_pane_g4_ParamLimits

0x25af,	// (0x00029da9) main_video_pane_g4

0x25e3,	// (0x00029ddd) main_video_pane_g5_ParamLimits

0x25e3,	// (0x00029ddd) main_video_pane_g5

0x25f1,	// (0x00029deb) main_video_pane_g6_ParamLimits

0x25f1,	// (0x00029deb) main_video_pane_g6

0x0006,

0xf1c1,	// (0x000369bb) main_video_pane_g_ParamLimits

0xf1c1,	// (0x000369bb) main_video_pane_g

0x2619,	// (0x00029e13) main_video_pane_t1_ParamLimits

0x2619,	// (0x00029e13) main_video_pane_t1

0x265d,	// (0x00029e57) cams_zoom_pane_g1

0x265d,	// (0x00029e57) cams_zoom_pane_g2

0x265d,	// (0x00029e57) cams_zoom_pane_g3

0x265d,	// (0x00029e57) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x000369ca) cams_zoom_pane_g

0x267b,	// (0x00029e75) grid_cams_pane

0x2695,	// (0x00029e8f) linegrid_cams_pane

0x26a7,	// (0x00029ea1) cell_cams_pane_ParamLimits

0x26a7,	// (0x00029ea1) cell_cams_pane

0x26c9,	// (0x00029ec3) cams_burst_image_pane

0x26d1,	// (0x00029ecb) cell_cams_pane_g1

0xec1b,	// (0x00036415) grid_highlight_pane_cp03

0xee8e,	// (0x00036688) mp_bg_pane_g1

0xe7c9,	// (0x00035fc3) bg_list_pane_cp03

0xe7c9,	// (0x00035fc3) bg_mp_pane

0xe7c9,	// (0x00035fc3) grid_mp_pane

0x265d,	// (0x00029e57) media_player_g1

0x3da7,	// (0x0002b5a1) media_player_t1

0x3da7,	// (0x0002b5a1) media_player_t2

0x3da7,	// (0x0002b5a1) media_player_t3

0x3da7,	// (0x0002b5a1) media_player_t4

0x3da7,	// (0x0002b5a1) media_player_t5

0x3da7,	// (0x0002b5a1) media_player_t6

0x3da7,	// (0x0002b5a1) media_player_t7

0x0006,

0xf545,	// (0x00036d3f) media_player_t

0xe7c9,	// (0x00035fc3) wait_bar_pane_cp02

0xf52a,	// (0x00036d24) main_usb_pane_t

0x409b,	// (0x0002b895) cell_mp_pane

0xee8e,	// (0x00036688) cell_mp_pane_g1

0xec1b,	// (0x00036415) grid_highlight_pane_cp06

0x26d9,	// (0x00029ed3) grid_skin_colour_pane

0x26e1,	// (0x00029edb) list_highlight_pane_cp03

0x26e9,	// (0x00029ee3) skin_g1

0x26f3,	// (0x00029eed) skin_t1

0x2702,	// (0x00029efc) skin_t2

0x0001,

0xf1fe,	// (0x000369f8) skin_t

0x2710,	// (0x00029f0a) cell_skin_colour_pane_ParamLimits

0x2710,	// (0x00029f0a) cell_skin_colour_pane

0x2730,	// (0x00029f2a) cell_skin_colour_pane_g1

0x2795,	// (0x00029f8f) call_video_g1_ParamLimits

0x2795,	// (0x00029f8f) call_video_g1

0x27b1,	// (0x00029fab) call_video_g2_ParamLimits

0x27b1,	// (0x00029fab) call_video_g2

0x0001,

0xf203,	// (0x000369fd) call_video_g_ParamLimits

0xf203,	// (0x000369fd) call_video_g

0x27f6,	// (0x00029ff0) call_video_uplink_pane_cp1_ParamLimits

0x27f6,	// (0x00029ff0) call_video_uplink_pane_cp1

0x285b,	// (0x0002a055) call_video_uplink_pane_cp2

0x289f,	// (0x0002a099) video_down_crop_pane_ParamLimits

0x289f,	// (0x0002a099) video_down_crop_pane

0x2988,	// (0x0002a182) video_down_pane_ParamLimits

0x2988,	// (0x0002a182) video_down_pane

0x2a7a,	// (0x0002a274) video_down_subqcif_pane_ParamLimits

0x2a7a,	// (0x0002a274) video_down_subqcif_pane

0x2a94,	// (0x0002a28e) video_down_subqcif_pane_cp_ParamLimits

0x2a94,	// (0x0002a28e) video_down_subqcif_pane_cp

0x2ad5,	// (0x0002a2cf) im_reading_pane_ParamLimits

0x2ad5,	// (0x0002a2cf) im_reading_pane

0x2ae7,	// (0x0002a2e1) im_writing_pane_ParamLimits

0x2ae7,	// (0x0002a2e1) im_writing_pane

0x2b0d,	// (0x0002a307) im_reading_pane_t1

0x2b4c,	// (0x0002a346) list_im_pane

0x2b5d,	// (0x0002a357) scroll_pane_cp07

0x2b76,	// (0x0002a370) im_writing_pane_t1_ParamLimits

0x2b76,	// (0x0002a370) im_writing_pane_t1

0x2b8b,	// (0x0002a385) im_writing_pane_t2_ParamLimits

0x2b8b,	// (0x0002a385) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00036a07) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00036a07) im_writing_pane_t

0xec1b,	// (0x00036415) input_focus_pane_cp04

0xec1b,	// (0x00036415) input_focus_pane_cp05

0x2ba8,	// (0x0002a3a2) list_im_single_pane_ParamLimits

0x2ba8,	// (0x0002a3a2) list_im_single_pane

0x2bc1,	// (0x0002a3bb) list_single_im_pane_t1

0x246c,	// (0x00029c66) blid_accuracy_pane

0x246c,	// (0x00029c66) blid_compass_pane

0x6333,	// (0x0002db2d) main_location_t1

0x6333,	// (0x0002db2d) main_location_t2

0x6333,	// (0x0002db2d) main_location_t3

0x0002,

0xf554,	// (0x00036d4e) main_location_t

0xec1b,	// (0x00036415) aid_levels_location

0xee8e,	// (0x00036688) blid_accuracy_pane_g1

0xee8e,	// (0x00036688) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x00036a56) blid_accuracy_pane_g

0x2bfb,	// (0x0002a3f5) wml_content_pane

0x2c39,	// (0x0002a433) wml_button_pane_ParamLimits

0x2c39,	// (0x0002a433) wml_button_pane

0x2c4d,	// (0x0002a447) wml_list_single_large_pane_ParamLimits

0x2c4d,	// (0x0002a447) wml_list_single_large_pane

0x2c66,	// (0x0002a460) wml_list_single_medium_pane_ParamLimits

0x2c66,	// (0x0002a460) wml_list_single_medium_pane

0x2c80,	// (0x0002a47a) wml_list_single_small_pane_ParamLimits

0x2c80,	// (0x0002a47a) wml_list_single_small_pane

0x2c9f,	// (0x0002a499) wml_selection_box_pane_ParamLimits

0x2c9f,	// (0x0002a499) wml_selection_box_pane

0x2cb2,	// (0x0002a4ac) wml_list_single_pane_t1

0x2cc1,	// (0x0002a4bb) wml_list_single_medium_pane_t1

0x2cd0,	// (0x0002a4ca) wml_list_single_large_pane_t1

0x2cdf,	// (0x0002a4d9) input_focus_pane_cp02_ParamLimits

0x2cdf,	// (0x0002a4d9) input_focus_pane_cp02

0x2cf2,	// (0x0002a4ec) wml_selection_box_pane_g1

0x2cfb,	// (0x0002a4f5) wml_selection_box_pane_t1_ParamLimits

0x2cfb,	// (0x0002a4f5) wml_selection_box_pane_t1

0xee76,	// (0x00036670) bg_wml_button_pane_ParamLimits

0xee76,	// (0x00036670) bg_wml_button_pane

0x2d13,	// (0x0002a50d) wml_button_pane_g1

0x2d1b,	// (0x0002a515) wml_button_pane_t1

0x2d13,	// (0x0002a50d) wml_button_bg_pane_g1

0x2d2b,	// (0x0002a525) wml_button_bg_pane_g2

0x2d33,	// (0x0002a52d) wml_button_bg_pane_g3

0x2d3b,	// (0x0002a535) wml_button_bg_pane_g4

0x2d43,	// (0x0002a53d) wml_button_bg_pane_g5

0x2d4b,	// (0x0002a545) wml_button_bg_pane_g6

0x2d53,	// (0x0002a54d) wml_button_bg_pane_g7

0x2d5b,	// (0x0002a555) wml_button_bg_pane_g8

0x2d63,	// (0x0002a55d) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00036a0c) wml_button_bg_pane_g

0x2d6b,	// (0x0002a565) bg_list_pane_cp02

0x2d73,	// (0x0002a56d) mce_header_pane_ParamLimits

0x2d73,	// (0x0002a56d) mce_header_pane

0x2d89,	// (0x0002a583) mce_icon_pane

0x2d89,	// (0x0002a583) mce_image_pane

0x2d92,	// (0x0002a58c) mce_text_pane_ParamLimits

0x2d92,	// (0x0002a58c) mce_text_pane

0x2da5,	// (0x0002a59f) scroll_pane_cp03

0x2c31,	// (0x0002a42b) scroll_pane_cp04

0x2dad,	// (0x0002a5a7) scroll_pane_cp05_ParamLimits

0x2dad,	// (0x0002a5a7) scroll_pane_cp05

0x2db9,	// (0x0002a5b3) mce_header_field_pane_ParamLimits

0x2db9,	// (0x0002a5b3) mce_header_field_pane

0x2dd2,	// (0x0002a5cc) mce_header_field_pane_2_ParamLimits

0x2dd2,	// (0x0002a5cc) mce_header_field_pane_2

0x2de8,	// (0x0002a5e2) mce_header_field_pane_3

0x2df0,	// (0x0002a5ea) list_single_mce_message_pane_ParamLimits

0x2df0,	// (0x0002a5ea) list_single_mce_message_pane

0x2dff,	// (0x0002a5f9) list_single_mce_smart_pane_ParamLimits

0x2dff,	// (0x0002a5f9) list_single_mce_smart_pane

0x2e19,	// (0x0002a613) input_focus_pane_cp03

0x2e22,	// (0x0002a61c) list_header_data_pane

0x2e2a,	// (0x0002a624) mce_header_field_pane_t1

0x2e38,	// (0x0002a632) list_single_mce_header_pane_ParamLimits

0x2e38,	// (0x0002a632) list_single_mce_header_pane

0x2e4c,	// (0x0002a646) list_single_mce_header_pane_t1

0x2e5b,	// (0x0002a655) list_single_mce_message_pane_g1

0x2e63,	// (0x0002a65d) list_single_mce_message_pane_t1

0x2e97,	// (0x0002a691) bg_cale_heading_pane_cp01_ParamLimits

0x2e97,	// (0x0002a691) bg_cale_heading_pane_cp01

0x2ee9,	// (0x0002a6e3) bg_cale_pane_cp02_ParamLimits

0x2ee9,	// (0x0002a6e3) bg_cale_pane_cp02

0x2f16,	// (0x0002a710) cale_month_corner_pane

0x2f35,	// (0x0002a72f) cale_month_day_heading_pane_ParamLimits

0x2f35,	// (0x0002a72f) cale_month_day_heading_pane

0x2f9f,	// (0x0002a799) cale_month_pane_g1_ParamLimits

0x2f9f,	// (0x0002a799) cale_month_pane_g1

0x2fe6,	// (0x0002a7e0) cale_month_pane_g2_ParamLimits

0x2fe6,	// (0x0002a7e0) cale_month_pane_g2

0x3022,	// (0x0002a81c) cale_month_pane_g3_ParamLimits

0x3022,	// (0x0002a81c) cale_month_pane_g3

0x3076,	// (0x0002a870) cale_month_pane_g4_ParamLimits

0x3076,	// (0x0002a870) cale_month_pane_g4

0x30ca,	// (0x0002a8c4) cale_month_pane_g5_ParamLimits

0x30ca,	// (0x0002a8c4) cale_month_pane_g5

0x3126,	// (0x0002a920) cale_month_pane_g6_ParamLimits

0x3126,	// (0x0002a920) cale_month_pane_g6

0x318e,	// (0x0002a988) cale_month_pane_g7_ParamLimits

0x318e,	// (0x0002a988) cale_month_pane_g7

0x31fa,	// (0x0002a9f4) cale_month_pane_g8_ParamLimits

0x31fa,	// (0x0002a9f4) cale_month_pane_g8

0x3266,	// (0x0002aa60) cale_month_pane_g9_ParamLimits

0x3266,	// (0x0002aa60) cale_month_pane_g9

0x32ca,	// (0x0002aac4) cale_month_pane_g10_ParamLimits

0x32ca,	// (0x0002aac4) cale_month_pane_g10

0x331c,	// (0x0002ab16) cale_month_pane_g11_ParamLimits

0x331c,	// (0x0002ab16) cale_month_pane_g11

0x336e,	// (0x0002ab68) cale_month_pane_g12_ParamLimits

0x336e,	// (0x0002ab68) cale_month_pane_g12

0x33c6,	// (0x0002abc0) cale_month_pane_g13_ParamLimits

0x33c6,	// (0x0002abc0) cale_month_pane_g13

0x000c,

0xf225,	// (0x00036a1f) cale_month_pane_g_ParamLimits

0xf225,	// (0x00036a1f) cale_month_pane_g

0x3430,	// (0x0002ac2a) cale_month_week_pane

0x3454,	// (0x0002ac4e) grid_cale_month_pane_ParamLimits

0x3454,	// (0x0002ac4e) grid_cale_month_pane

0x34b5,	// (0x0002acaf) cale_month_day_heading_pane_t1

0x353b,	// (0x0002ad35) cale_month_day_heading_pane_t2

0x35b4,	// (0x0002adae) cale_month_day_heading_pane_t3

0x362d,	// (0x0002ae27) cale_month_day_heading_pane_t4

0x36ae,	// (0x0002aea8) cale_month_day_heading_pane_t5

0x3737,	// (0x0002af31) cale_month_day_heading_pane_t6

0x37c8,	// (0x0002afc2) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00036a3a) cale_month_day_heading_pane_t

0x23a3,	// (0x00029b9d) bg_cale_side_pane_cp01

0x3859,	// (0x0002b053) cale_month_week_pane_t1

0x3872,	// (0x0002b06c) cale_month_week_pane_t2

0x388b,	// (0x0002b085) cale_month_week_pane_t3

0x38a4,	// (0x0002b09e) cale_month_week_pane_t4

0x38bd,	// (0x0002b0b7) cale_month_week_pane_t5

0x38d6,	// (0x0002b0d0) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00036a49) cale_month_week_pane_t

0x38fb,	// (0x0002b0f5) cell_cale_month_pane_ParamLimits

0x38fb,	// (0x0002b0f5) cell_cale_month_pane

0xb7f8,	// (0x00032ff2) cell_cale_month_pane_g1

0x0b5a,	// (0x00028354) cell_cale_month_pane_t1_ParamLimits

0x0b5a,	// (0x00028354) cell_cale_month_pane_t1

0x23ed,	// (0x00029be7) grid_highlight_pane_cp08

0xee8e,	// (0x00036688) main_smil_g1

0x3a45,	// (0x0002b23f) smil_status_pane

0x3a50,	// (0x0002b24a) smil_text_pane

0x61b6,	// (0x0002d9b0) bg_popup_call3_rect_pane_g8

0x61be,	// (0x0002d9b8) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00036ce2) bg_popup_call3_rect_pane_g

0x66c3,	// (0x0002debd) smil_status_volume_pane_g1

0x3a64,	// (0x0002b25e) smil_status_pane_t1

0xb95a,	// (0x00033154) volume_smil_pane

0x3a7b,	// (0x0002b275) list_smil_text_pane

0x3a85,	// (0x0002b27f) scroll_pane_cp011

0x3a90,	// (0x0002b28a) smil_text_list_pane_t1_ParamLimits

0x3a90,	// (0x0002b28a) smil_text_list_pane_t1

0xb804,	// (0x00032ffe) aid_volume_smil_ParamLimits

0xb804,	// (0x00032ffe) aid_volume_smil

0xee8e,	// (0x00036688) smil_volume_pane_g1

0xee8e,	// (0x00036688) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x00036a56) smil_volume_pane_g

0x1ed8,	// (0x000296d2) listscroll_cale_day_pane

0x3adb,	// (0x0002b2d5) bg_cale_pane

0x3af3,	// (0x0002b2ed) list_cale_pane

0x3b16,	// (0x0002b310) scroll_pane_cp09

0x3b27,	// (0x0002b321) cale_bg_pane_g1

0x3b2f,	// (0x0002b329) cale_bg_pane_g2

0x3b37,	// (0x0002b331) cale_bg_pane_g3

0x3b3f,	// (0x0002b339) cale_bg_pane_g4

0x3b47,	// (0x0002b341) cale_bg_pane_g5

0x3b4f,	// (0x0002b349) cale_bg_pane_g6

0x3b57,	// (0x0002b351) cale_bg_pane_g7

0x3b5f,	// (0x0002b359) cale_bg_pane_g8

0x3b67,	// (0x0002b361) cale_bg_pane_g9

0x0008,

0xf261,	// (0x00036a5b) cale_bg_pane_g

0x3b77,	// (0x0002b371) list_cale_time_pane_ParamLimits

0x3b77,	// (0x0002b371) list_cale_time_pane

0x3b91,	// (0x0002b38b) list_cale_time_pane_g1_ParamLimits

0x3b91,	// (0x0002b38b) list_cale_time_pane_g1

0x3b9d,	// (0x0002b397) list_cale_time_pane_g2_ParamLimits

0x3b9d,	// (0x0002b397) list_cale_time_pane_g2

0x3baa,	// (0x0002b3a4) list_cale_time_pane_g3_ParamLimits

0x3baa,	// (0x0002b3a4) list_cale_time_pane_g3

0x3bb8,	// (0x0002b3b2) list_cale_time_pane_g4_ParamLimits

0x3bb8,	// (0x0002b3b2) list_cale_time_pane_g4

0x3bc6,	// (0x0002b3c0) list_cale_time_pane_g5_ParamLimits

0x3bc6,	// (0x0002b3c0) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x00036a6e) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x00036a6e) list_cale_time_pane_g

0x3be1,	// (0x0002b3db) list_cale_time_pane_t1_ParamLimits

0x3be1,	// (0x0002b3db) list_cale_time_pane_t1

0x3c09,	// (0x0002b403) list_cale_time_pane_t2_ParamLimits

0x3c09,	// (0x0002b403) list_cale_time_pane_t2

0x42d6,	// (0x0002bad0) aid_blid_cardinal_pane

0x4324,	// (0x0002bb1e) compass_pane_t4

0x3c31,	// (0x0002b42b) list_cale_time_pane_t4_ParamLimits

0x3c31,	// (0x0002b42b) list_cale_time_pane_t4

0x4332,	// (0x0002bb2c) compass_pane_t5

0x4342,	// (0x0002bb3c) compass_pane_t6

0x4350,	// (0x0002bb4a) compass_pane_t7

0x43e8,	// (0x0002bbe2) navi_pane_cc_t1

0x4607,	// (0x0002be01) aid_phob_thumbnail_center_pane

0x4b41,	// (0x0002c33b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x00036a7b) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x00036a7b) list_cale_time_pane_t

0xe872,	// (0x0003606c) bg_popup_window_pane_cp02_ParamLimits

0xe872,	// (0x0003606c) bg_popup_window_pane_cp02

0x3c59,	// (0x0002b453) heading_pane_cp01_ParamLimits

0x3c59,	// (0x0002b453) heading_pane_cp01

0x3c65,	// (0x0002b45f) loc_req_pane_ParamLimits

0x3c65,	// (0x0002b45f) loc_req_pane

0x3c75,	// (0x0002b46f) loc_type_pane_ParamLimits

0x3c75,	// (0x0002b46f) loc_type_pane

0x3c87,	// (0x0002b481) loc_type_pane_t1_ParamLimits

0x3c87,	// (0x0002b481) loc_type_pane_t1

0x3c99,	// (0x0002b493) loc_type_pane_t2_ParamLimits

0x3c99,	// (0x0002b493) loc_type_pane_t2

0x3cab,	// (0x0002b4a5) loc_type_pane_t3_ParamLimits

0x3cab,	// (0x0002b4a5) loc_type_pane_t3

0x0002,

0xf288,	// (0x00036a82) loc_type_pane_t_ParamLimits

0xf288,	// (0x00036a82) loc_type_pane_t

0x3cbd,	// (0x0002b4b7) list_loc_req_pane

0x3cc7,	// (0x0002b4c1) scroll_pane_cp012

0x3cd2,	// (0x0002b4cc) list_single_loc_request_popup_menu_pane_ParamLimits

0x3cd2,	// (0x0002b4cc) list_single_loc_request_popup_menu_pane

0x3cdf,	// (0x0002b4d9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3cdf,	// (0x0002b4d9) list_single_loc_request_popup_menu_pane_g1

0x3ceb,	// (0x0002b4e5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3ceb,	// (0x0002b4e5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x00036a89) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x00036a89) list_single_loc_request_popup_menu_pane_g

0x3cf7,	// (0x0002b4f1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3cf7,	// (0x0002b4f1) list_single_loc_request_popup_menu_pane_t1

0xee76,	// (0x00036670) bg_popup_window_pane_cp03_ParamLimits

0xee76,	// (0x00036670) bg_popup_window_pane_cp03

0x3d0d,	// (0x0002b507) heading_loc_req_pane_ParamLimits

0x3d0d,	// (0x0002b507) heading_loc_req_pane

0x3d19,	// (0x0002b513) popup_dyc_status_message_window_g1_ParamLimits

0x3d19,	// (0x0002b513) popup_dyc_status_message_window_g1

0x3d2d,	// (0x0002b527) popup_dyc_status_message_window_t1_ParamLimits

0x3d2d,	// (0x0002b527) popup_dyc_status_message_window_t1

0x3d42,	// (0x0002b53c) popup_dyc_status_message_window_t2_ParamLimits

0x3d42,	// (0x0002b53c) popup_dyc_status_message_window_t2

0x3d57,	// (0x0002b551) popup_dyc_status_message_window_t3_ParamLimits

0x3d57,	// (0x0002b551) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x00036a8e) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x00036a8e) popup_dyc_status_message_window_t

0xec1b,	// (0x00036415) bg_heading_pane_cp01

0x3d73,	// (0x0002b56d) heading_loc_req_pane_g1

0x3d7b,	// (0x0002b575) heading_loc_req_pane_g2

0x3d83,	// (0x0002b57d) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x00036a95) heading_loc_req_pane_g

0x3d8b,	// (0x0002b585) heading_loc_req_pane_t1

0x3db7,	// (0x0002b5b1) bg_popup_sub_pane_cp01_ParamLimits

0x3db7,	// (0x0002b5b1) bg_popup_sub_pane_cp01

0x3dc5,	// (0x0002b5bf) popup_cale_events_window_g1_ParamLimits

0x3dc5,	// (0x0002b5bf) popup_cale_events_window_g1

0x3de5,	// (0x0002b5df) popup_cale_events_window_g2_ParamLimits

0x3de5,	// (0x0002b5df) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x00036ab7) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x00036ab7) popup_cale_events_window_g

0x3e05,	// (0x0002b5ff) popup_cale_events_window_t1_ParamLimits

0x3e05,	// (0x0002b5ff) popup_cale_events_window_t1

0x3e17,	// (0x0002b611) popup_cale_events_window_t2_ParamLimits

0x3e17,	// (0x0002b611) popup_cale_events_window_t2

0x3e55,	// (0x0002b64f) popup_cale_events_window_t3_ParamLimits

0x3e55,	// (0x0002b64f) popup_cale_events_window_t3

0x3e8f,	// (0x0002b689) popup_cale_events_window_t4_ParamLimits

0x3e8f,	// (0x0002b689) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00036abc) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00036abc) popup_cale_events_window_t

0x3ec5,	// (0x0002b6bf) call_type_pane

0x3ed5,	// (0x0002b6cf) popup_call_status_window_g1

0x3ee9,	// (0x0002b6e3) popup_call_status_window_g2

0x3efd,	// (0x0002b6f7) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x00036ac5) popup_call_status_window_g

0x3f0d,	// (0x0002b707) call_type_pane_g1

0x3f16,	// (0x0002b710) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00036acc) call_type_pane_g

0xec1b,	// (0x00036415) bg_popup_sub_pane_cp02

0x3f1f,	// (0x0002b719) listscroll_popup_wml_pane

0x3f27,	// (0x0002b721) list_wml_pane

0x3f31,	// (0x0002b72b) scroll_pane_cp013

0x3f3c,	// (0x0002b736) list_single_graphic_popup_wml_pane_ParamLimits

0x3f3c,	// (0x0002b736) list_single_graphic_popup_wml_pane

0xee8e,	// (0x00036688) list_single_graphic_popup_wml_pane_g1

0x3f50,	// (0x0002b74a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00036ad1) list_single_graphic_popup_wml_pane_g

0x3f58,	// (0x0002b752) list_single_graphic_popup_wml_pane_t1

0x3f6e,	// (0x0002b768) aid_call_pane

0xee6e,	// (0x00036668) popup_clock_analogue_window_g1

0xee6e,	// (0x00036668) popup_clock_analogue_window_g2

0xb832,	// (0x0003302c) popup_clock_analogue_window_g3

0xb832,	// (0x0003302c) popup_clock_analogue_window_g4

0xee8e,	// (0x00036688) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x00036ad6) popup_clock_analogue_window_g

0xb83a,	// (0x00033034) popup_clock_analogue_window_t1

0xb848,	// (0x00033042) clock_digital_number_pane_ParamLimits

0xb848,	// (0x00033042) clock_digital_number_pane

0xb854,	// (0x0003304e) clock_digital_number_pane_cp02_ParamLimits

0xb854,	// (0x0003304e) clock_digital_number_pane_cp02

0xb860,	// (0x0003305a) clock_digital_number_pane_cp03_ParamLimits

0xb860,	// (0x0003305a) clock_digital_number_pane_cp03

0xb86c,	// (0x00033066) clock_digital_number_pane_cp04_ParamLimits

0xb86c,	// (0x00033066) clock_digital_number_pane_cp04

0xb878,	// (0x00033072) clock_digital_separator_pane_ParamLimits

0xb878,	// (0x00033072) clock_digital_separator_pane

0xb884,	// (0x0003307e) popup_clock_digital_window_t1

0xee8e,	// (0x00036688) clock_digital_number_pane_g1

0xee8e,	// (0x00036688) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x00036a56) clock_digital_number_pane_g

0xee8e,	// (0x00036688) clock_digital_separator_pane_g1

0xee8e,	// (0x00036688) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x00036a56) clock_digital_separator_pane_g

0xec1b,	// (0x00036415) bg_popup_window_pane_cp04

0x3f76,	// (0x0002b770) heading_pane_cp03

0x246c,	// (0x00029c66) listscroll_popup_gms_pane

0xec1b,	// (0x00036415) grid_large_graphic_popup_pane

0x3f7f,	// (0x0002b779) listscroll_popup_gms_pane_g1

0x3f88,	// (0x0002b782) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00036ae1) listscroll_popup_gms_pane_g

0x3f91,	// (0x0002b78b) scroll_pane_cp014

0xeef1,	// (0x000366eb) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x000366eb) cell_large_graphic_popup_pane

0xeeff,	// (0x000366f9) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) cell_large_graphic_popup_pane_g1

0x3f9a,	// (0x0002b794) cell_large_graphic_popup_pane_g2_ParamLimits

0x3f9a,	// (0x0002b794) cell_large_graphic_popup_pane_g2

0x3fa8,	// (0x0002b7a2) cell_large_graphic_popup_pane_g3_ParamLimits

0x3fa8,	// (0x0002b7a2) cell_large_graphic_popup_pane_g3

0x3fb6,	// (0x0002b7b0) cell_large_graphic_popup_pane_g4_ParamLimits

0x3fb6,	// (0x0002b7b0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x00036ae6) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x00036ae6) cell_large_graphic_popup_pane_g

0xec1b,	// (0x00036415) grid_highlight_pane_cp010

0xee8e,	// (0x00036688) bg_popup_call_pane_g1

0x3fc7,	// (0x0002b7c1) list_single_graphic_popup_conf_pane_ParamLimits

0x3fc7,	// (0x0002b7c1) list_single_graphic_popup_conf_pane

0x3fd9,	// (0x0002b7d3) list_highlight_pane_cp01

0x3fe2,	// (0x0002b7dc) list_single_graphic_popup_conf_pane_g1

0x3fea,	// (0x0002b7e4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00036aef) list_single_graphic_popup_conf_pane_g

0x3ff2,	// (0x0002b7ec) list_single_graphic_popup_conf_pane_t1

0x4000,	// (0x0002b7fa) linegrid_cams_pane_g1

0x4009,	// (0x0002b803) linegrid_cams_pane_g2

0x244a,	// (0x00029c44) linegrid_cams_pane_g3

0x4012,	// (0x0002b80c) linegrid_cams_pane_g4

0x401b,	// (0x0002b815) linegrid_cams_pane_g5

0x4024,	// (0x0002b81e) linegrid_cams_pane_g6

0x2453,	// (0x00029c4d) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x00036af4) linegrid_cams_pane_g

0x402f,	// (0x0002b829) popup_clock_analogue_window

0x402f,	// (0x0002b829) popup_clock_digital_window

0xec1b,	// (0x00036415) popup_phob_thumbnail_window

0xee8e,	// (0x00036688) call_video_uplink_pane_g1

0x4038,	// (0x0002b832) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00036b03) call_video_uplink_pane_g

0x4040,	// (0x0002b83a) video_uplink_pane

0x4048,	// (0x0002b842) mce_image_pane_g1

0x4052,	// (0x0002b84c) mce_image_pane_g2

0x405c,	// (0x0002b856) mce_image_pane_g3

0x4066,	// (0x0002b860) mce_image_pane_g4

0x406e,	// (0x0002b868) mce_image_pane_g5

0x0004,

0xf30e,	// (0x00036b08) mce_image_pane_g

0x4076,	// (0x0002b870) control_top_pane_stacon_cp01_ParamLimits

0x4076,	// (0x0002b870) control_top_pane_stacon_cp01

0x408a,	// (0x0002b884) uni_indicator_pane_stacon_cp01_ParamLimits

0x408a,	// (0x0002b884) uni_indicator_pane_stacon_cp01

0x409b,	// (0x0002b895) bg_popup_sub_pane_cp03

0x40a5,	// (0x0002b89f) chi_dic_find_pane

0x40ad,	// (0x0002b8a7) listscroll_chi_dic_pane

0x40b6,	// (0x0002b8b0) main_pane_chidic_g1

0x40c9,	// (0x0002b8c3) chi_dic_find_pane_t1

0x40d7,	// (0x0002b8d1) find_chidic_pane

0x40e0,	// (0x0002b8da) chi_dic_list_pane_ParamLimits

0x40e0,	// (0x0002b8da) chi_dic_list_pane

0x40f1,	// (0x0002b8eb) scroll_pane_cp020

0x40f9,	// (0x0002b8f3) find_chidic_pane_t1

0xec1b,	// (0x00036415) input_focus_pane_cp06

0x4108,	// (0x0002b902) list_chi_dic_pane_ParamLimits

0x4108,	// (0x0002b902) list_chi_dic_pane

0x411a,	// (0x0002b914) list_chi_dic_pane_t1_ParamLimits

0x411a,	// (0x0002b914) list_chi_dic_pane_t1

0xec1b,	// (0x00036415) list_highlight_pane_cp020

0x412d,	// (0x0002b927) bg_cale_heading_pane_g1

0x4135,	// (0x0002b92f) bg_cale_heading_pane_g2

0x413d,	// (0x0002b937) bg_cale_heading_pane_g3

0x4145,	// (0x0002b93f) bg_cale_heading_pane_g4

0x414f,	// (0x0002b949) bg_cale_heading_pane_g5

0x4159,	// (0x0002b953) bg_cale_heading_pane_g6

0x4161,	// (0x0002b95b) bg_cale_heading_pane_g7

0x4169,	// (0x0002b963) bg_cale_heading_pane_g8

0x4173,	// (0x0002b96d) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00036b13) bg_cale_heading_pane_g

0x412d,	// (0x0002b927) bg_cale_side_pane_g1

0x417d,	// (0x0002b977) bg_cale_side_pane_g2

0x4187,	// (0x0002b981) bg_cale_side_pane_g3

0x4191,	// (0x0002b98b) bg_cale_side_pane_g4

0x419b,	// (0x0002b995) bg_cale_side_pane_g5

0x41a5,	// (0x0002b99f) bg_cale_side_pane_g6

0x41af,	// (0x0002b9a9) bg_cale_side_pane_g7

0x41b9,	// (0x0002b9b3) bg_cale_side_pane_g8

0x41c1,	// (0x0002b9bb) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x00036b26) bg_cale_side_pane_g

0x41c9,	// (0x0002b9c3) popup_call_status_window_ParamLimits

0x41c9,	// (0x0002b9c3) popup_call_status_window

0x4216,	// (0x0002ba10) stacon_top_pane

0x421e,	// (0x0002ba18) status_pane_ParamLimits

0x421e,	// (0x0002ba18) status_pane

0x4233,	// (0x0002ba2d) status_small_pane

0x423b,	// (0x0002ba35) control_pane

0xec1b,	// (0x00036415) stacon_bottom_pane

0x4243,	// (0x0002ba3d) list_single_mce_smart_pane_t1_ParamLimits

0x4243,	// (0x0002ba3d) list_single_mce_smart_pane_t1

0x4256,	// (0x0002ba50) list_single_mce_smart_pane_t2_ParamLimits

0x4256,	// (0x0002ba50) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x00036b39) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x00036b39) list_single_mce_smart_pane_t

0x4275,	// (0x0002ba6f) compass_pane

0x4280,	// (0x0002ba7a) main_location2_pane_t1

0x4296,	// (0x0002ba90) main_location2_pane_t2

0x42ac,	// (0x0002baa6) main_location2_pane_t3

0x0003,

0xf344,	// (0x00036b3e) main_location2_pane_t

0x42fa,	// (0x0002baf4) compass_pane_g1_ParamLimits

0x42fa,	// (0x0002baf4) compass_pane_g1

0x4306,	// (0x0002bb00) compass_pane_t1

0x4315,	// (0x0002bb0f) compass_pane_t2

0x0005,

0xf34d,	// (0x00036b47) compass_pane_t

0x4360,	// (0x0002bb5a) text_secondary_cp61

0x43df,	// (0x0002bbd9) navi_pane_cams_g5

0x445b,	// (0x0002bc55) navi_pane_im_t1

0x4469,	// (0x0002bc63) navi_pane_mp_g1_ParamLimits

0x4469,	// (0x0002bc63) navi_pane_mp_g1

0x447d,	// (0x0002bc77) navi_pane_mp_g2_ParamLimits

0x447d,	// (0x0002bc77) navi_pane_mp_g2

0x4489,	// (0x0002bc83) navi_pane_mp_g3_ParamLimits

0x4489,	// (0x0002bc83) navi_pane_mp_g3

0x0002,

0xf361,	// (0x00036b5b) navi_pane_mp_g_ParamLimits

0xf361,	// (0x00036b5b) navi_pane_mp_g

0x4495,	// (0x0002bc8f) navi_pane_mp_t1

0x44a3,	// (0x0002bc9d) navi_pane_mp_t2

0x0002,

0xf368,	// (0x00036b62) navi_pane_mp_t

0x4550,	// (0x0002bd4a) navi_pane_vt_g1

0x4495,	// (0x0002bc8f) navi_pane_vt_t1

0x4558,	// (0x0002bd52) navi_slider_pane

0x246c,	// (0x00029c66) zooming_pane

0x4568,	// (0x0002bd62) navi_slider_pane_g1

0xb8a1,	// (0x0003309b) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x00036b69) navi_slider_pane_g

0x458c,	// (0x0002bd86) aid_levels_zoom

0x4594,	// (0x0002bd8e) zooming_pane_g1

0x459c,	// (0x0002bd96) zooming_pane_g2

0x459c,	// (0x0002bd96) zooming_pane_g3

0x0002,

0xf37e,	// (0x00036b78) zooming_pane_g

0x45a4,	// (0x0002bd9e) level_10_zoom

0x45ad,	// (0x0002bda7) level_11_zoom

0x45b6,	// (0x0002bdb0) level_1_zoom

0x45bf,	// (0x0002bdb9) level_2_zoom

0x45c8,	// (0x0002bdc2) level_3_zoom

0x45d1,	// (0x0002bdcb) level_4_zoom

0x45da,	// (0x0002bdd4) level_5_zoom

0x45e3,	// (0x0002bddd) level_6_zoom

0x45ec,	// (0x0002bde6) level_7_zoom

0x45f5,	// (0x0002bdef) level_8_zoom

0x45fe,	// (0x0002bdf8) level_9_zoom

0x460f,	// (0x0002be09) popup_phob_thumbnail_window_g1

0x4617,	// (0x0002be11) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x00036b7f) popup_phob_thumbnail_window_g

0x639a,	// (0x0002db94) level_1_location

0x63a2,	// (0x0002db9c) level_2_location

0x63aa,	// (0x0002dba4) level_3_location

0x63b4,	// (0x0002dbae) level_4_location

0x246c,	// (0x00029c66) level_5_location

0x461f,	// (0x0002be19) mce_icon_pane_g1

0x4627,	// (0x0002be21) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x00036b84) mce_icon_pane_g

0x462f,	// (0x0002be29) main_mup_pane_g1_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g1

0x462f,	// (0x0002be29) main_mup_pane_g2_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g2

0x462f,	// (0x0002be29) main_mup_pane_g3_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g3

0x462f,	// (0x0002be29) main_mup_pane_g4_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g4

0x462f,	// (0x0002be29) main_mup_pane_g5_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g5

0x462f,	// (0x0002be29) main_mup_pane_g6_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g6

0x462f,	// (0x0002be29) main_mup_pane_g7_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g7

0x462f,	// (0x0002be29) main_mup_pane_g8_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g8

0x462f,	// (0x0002be29) main_mup_pane_g9_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g9

0x462f,	// (0x0002be29) main_mup_pane_g10_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g10

0x462f,	// (0x0002be29) main_mup_pane_g11_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g11

0xeeff,	// (0x000366f9) main_mup_pane_g12_ParamLimits

0xeeff,	// (0x000366f9) main_mup_pane_g12

0x462f,	// (0x0002be29) main_mup_pane_g13_ParamLimits

0x462f,	// (0x0002be29) main_mup_pane_g13

0x000c,

0xf38f,	// (0x00036b89) main_mup_pane_g_ParamLimits

0xf38f,	// (0x00036b89) main_mup_pane_g

0x463d,	// (0x0002be37) main_mup_pane_t1_ParamLimits

0x463d,	// (0x0002be37) main_mup_pane_t1

0x463d,	// (0x0002be37) main_mup_pane_t2_ParamLimits

0x463d,	// (0x0002be37) main_mup_pane_t2

0x463d,	// (0x0002be37) main_mup_pane_t3_ParamLimits

0x463d,	// (0x0002be37) main_mup_pane_t3

0x24d9,	// (0x00029cd3) main_mup_pane_t4_ParamLimits

0x24d9,	// (0x00029cd3) main_mup_pane_t4

0x24d9,	// (0x00029cd3) main_mup_pane_t5_ParamLimits

0x24d9,	// (0x00029cd3) main_mup_pane_t5

0x4651,	// (0x0002be4b) main_mup_pane_t6_ParamLimits

0x4651,	// (0x0002be4b) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x00036ba4) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x00036ba4) main_mup_pane_t

0xeef1,	// (0x000366eb) mup_progress_pane_ParamLimits

0xeef1,	// (0x000366eb) mup_progress_pane

0x4665,	// (0x0002be5f) mup_visualizer_pane_ParamLimits

0x4665,	// (0x0002be5f) mup_visualizer_pane

0x4665,	// (0x0002be5f) mup_volume_pane_ParamLimits

0x4665,	// (0x0002be5f) mup_volume_pane

0xef0d,	// (0x00036707) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x00036707) mup_visualizer_pane_g1

0x4673,	// (0x0002be6d) mup_visualizer_pane_g2_ParamLimits

0x4673,	// (0x0002be6d) mup_visualizer_pane_g2

0xeeff,	// (0x000366f9) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x000366f9) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x00036bb1) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x00036bb1) mup_visualizer_pane_g

0x265d,	// (0x00029e57) mup_volume_pane_g1

0x265d,	// (0x00029e57) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) mup_volume_pane_g

0x265d,	// (0x00029e57) mup_progress_pane_g1

0x265d,	// (0x00029e57) mup_progress_pane_g2

0x265d,	// (0x00029e57) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00036bbd) mup_progress_pane_g

0xec1b,	// (0x00036415) bg_popup_window_pane_cp05

0x4681,	// (0x0002be7b) heading_pane_cp02_ParamLimits

0x4681,	// (0x0002be7b) heading_pane_cp02

0x469d,	// (0x0002be97) list_popup_blid_pane

0x46a5,	// (0x0002be9f) list_blid_sat_info_pane_ParamLimits

0x46a5,	// (0x0002be9f) list_blid_sat_info_pane

0x46b8,	// (0x0002beb2) list_blid_sat_info_pane_g1

0x46c0,	// (0x0002beba) list_blid_sat_info_pane_t1

0x47da,	// (0x0002bfd4) mup_equalizer_pane_ParamLimits

0x47da,	// (0x0002bfd4) mup_equalizer_pane

0x47fb,	// (0x0002bff5) mup_equalizer_pane_cp1_ParamLimits

0x47fb,	// (0x0002bff5) mup_equalizer_pane_cp1

0x481c,	// (0x0002c016) mup_equalizer_pane_cp2_ParamLimits

0x481c,	// (0x0002c016) mup_equalizer_pane_cp2

0x4841,	// (0x0002c03b) mup_equalizer_pane_cp3_ParamLimits

0x4841,	// (0x0002c03b) mup_equalizer_pane_cp3

0x486a,	// (0x0002c064) mup_equalizer_pane_cp4_ParamLimits

0x486a,	// (0x0002c064) mup_equalizer_pane_cp4

0x4893,	// (0x0002c08d) mup_equalizer_pane_cp5

0x48ab,	// (0x0002c0a5) mup_equalizer_pane_cp6

0x48c3,	// (0x0002c0bd) mup_equalizer_pane_cp7

0x623e,	// (0x0002da38) bg_popup_call_poc_act_pane_g9

0x6246,	// (0x0002da40) bg_popup_call_poc_act_pane_g10

0x624e,	// (0x0002da48) bg_popup_call_poc_act_pane_g11

0x000a,

0xee76,	// (0x00036670) mup_scale_pane

0xee8e,	// (0x00036688) mup_scale_pane_g1

0x48db,	// (0x0002c0d5) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x00036bd9) mup_scale_pane_g

0x4911,	// (0x0002c10b) msg_data_pane

0x4919,	// (0x0002c113) scroll_pane_cp017

0x4921,	// (0x0002c11b) bg_list_pane_cp04_ParamLimits

0x4921,	// (0x0002c11b) bg_list_pane_cp04

0x4949,	// (0x0002c143) msg_data_pane_g1

0x4951,	// (0x0002c14b) msg_data_pane_g2

0x495b,	// (0x0002c155) msg_data_pane_g3

0x4965,	// (0x0002c15f) msg_data_pane_g4

0x496d,	// (0x0002c167) msg_data_pane_g5

0x4975,	// (0x0002c16f) msg_data_pane_g6

0x497d,	// (0x0002c177) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x00036be8) msg_data_pane_g

0x4985,	// (0x0002c17f) msg_text_pane_ParamLimits

0x4985,	// (0x0002c17f) msg_text_pane

0x49b9,	// (0x0002c1b3) qrid_highlight_pane_cp011_ParamLimits

0x49b9,	// (0x0002c1b3) qrid_highlight_pane_cp011

0xec1b,	// (0x00036415) msg_body_pane

0xec1b,	// (0x00036415) msg_header_pane

0x49d8,	// (0x0002c1d2) input_focus_pane_cp07

0x49fb,	// (0x0002c1f5) msg_header_pane_t1_ParamLimits

0x49fb,	// (0x0002c1f5) msg_header_pane_t1

0x4a11,	// (0x0002c20b) msg_header_pane_t2_ParamLimits

0x4a11,	// (0x0002c20b) msg_header_pane_t2

0x0001,

0xf402,	// (0x00036bfc) msg_header_pane_t_ParamLimits

0xf402,	// (0x00036bfc) msg_header_pane_t

0x4a28,	// (0x0002c222) msg_body_pane_g1

0x4a30,	// (0x0002c22a) msg_body_pane_t1_ParamLimits

0x4a30,	// (0x0002c22a) msg_body_pane_t1

0x4a61,	// (0x0002c25b) msg_body_pane_t2_ParamLimits

0x4a61,	// (0x0002c25b) msg_body_pane_t2

0x4a73,	// (0x0002c26d) msg_body_pane_t3_ParamLimits

0x4a73,	// (0x0002c26d) msg_body_pane_t3

0x0002,

0xf407,	// (0x00036c01) msg_body_pane_t_ParamLimits

0xf407,	// (0x00036c01) msg_body_pane_t

0x0ba2,	// (0x0002839c) main_viewer_pane_g1_ParamLimits

0x0ba2,	// (0x0002839c) main_viewer_pane_g1

0x0bb0,	// (0x000283aa) main_viewer_pane_g2_ParamLimits

0x0bb0,	// (0x000283aa) main_viewer_pane_g2

0x4aa3,	// (0x0002c29d) main_viewer_pane_g3_ParamLimits

0x4aa3,	// (0x0002c29d) main_viewer_pane_g3

0x4ab2,	// (0x0002c2ac) main_viewer_pane_g4_ParamLimits

0x4ab2,	// (0x0002c2ac) main_viewer_pane_g4

0xb8cb,	// (0x000330c5) main_viewer_pane_g5_ParamLimits

0xb8cb,	// (0x000330c5) main_viewer_pane_g5

0xb8cb,	// (0x000330c5) main_viewer_pane_g7_ParamLimits

0xb8cb,	// (0x000330c5) main_viewer_pane_g7

0xb8dd,	// (0x000330d7) main_viewer_pane_g8_ParamLimits

0xb8dd,	// (0x000330d7) main_viewer_pane_g8

0x0007,

0xf417,	// (0x00036c11) main_viewer_pane_g_ParamLimits

0xf417,	// (0x00036c11) main_viewer_pane_g

0x4ac1,	// (0x0002c2bb) viewer_content_pane_ParamLimits

0x4ac1,	// (0x0002c2bb) viewer_content_pane

0x4afe,	// (0x0002c2f8) main_postcard_pane_g1_ParamLimits

0x4afe,	// (0x0002c2f8) main_postcard_pane_g1

0x4b14,	// (0x0002c30e) main_postcard_pane_g2_ParamLimits

0x4b14,	// (0x0002c30e) main_postcard_pane_g2

0x4b2a,	// (0x0002c324) main_postcard_pane_g3_ParamLimits

0x4b2a,	// (0x0002c324) main_postcard_pane_g3

0x0005,

0xf428,	// (0x00036c22) main_postcard_pane_g_ParamLimits

0xf428,	// (0x00036c22) main_postcard_pane_g

0x4b41,	// (0x0002c33b) main_postcard_pane_g4

0x66d6,	// (0x0002ded0) smil_status_volume_pane_g2

0x4b84,	// (0x0002c37e) postcard_pane_ParamLimits

0x4b84,	// (0x0002c37e) postcard_pane

0x4bd4,	// (0x0002c3ce) postcard_pane_g1_ParamLimits

0x4bd4,	// (0x0002c3ce) postcard_pane_g1

0x4be2,	// (0x0002c3dc) postcard_pane_g2_ParamLimits

0x4be2,	// (0x0002c3dc) postcard_pane_g2

0x4bee,	// (0x0002c3e8) postcard_pane_g3_ParamLimits

0x4bee,	// (0x0002c3e8) postcard_pane_g3

0x4bfa,	// (0x0002c3f4) postcard_pane_g4_ParamLimits

0x4bfa,	// (0x0002c3f4) postcard_pane_g4

0x4c08,	// (0x0002c402) postcard_pane_g5_ParamLimits

0x4c08,	// (0x0002c402) postcard_pane_g5

0x4c1d,	// (0x0002c417) postcard_pane_g6_ParamLimits

0x4c1d,	// (0x0002c417) postcard_pane_g6

0x4bd4,	// (0x0002c3ce) postcard_pane_g7_ParamLimits

0x4bd4,	// (0x0002c3ce) postcard_pane_g7

0x0006,

0xf435,	// (0x00036c2f) postcard_pane_g_ParamLimits

0xf435,	// (0x00036c2f) postcard_pane_g

0x4c35,	// (0x0002c42f) main_mp2_pane_g1_ParamLimits

0x4c35,	// (0x0002c42f) main_mp2_pane_g1

0x4c43,	// (0x0002c43d) main_mp2_pane_g2_ParamLimits

0x4c43,	// (0x0002c43d) main_mp2_pane_g2

0x4c4f,	// (0x0002c449) main_mp2_pane_g3_ParamLimits

0x4c4f,	// (0x0002c449) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00036c3e) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00036c3e) main_mp2_pane_g

0x4c5b,	// (0x0002c455) main_mp2_pane_t1_ParamLimits

0x4c5b,	// (0x0002c455) main_mp2_pane_t1

0x4c72,	// (0x0002c46c) main_mp2_pane_t2_ParamLimits

0x4c72,	// (0x0002c46c) main_mp2_pane_t2

0x4c86,	// (0x0002c480) main_mp2_pane_t3_ParamLimits

0x4c86,	// (0x0002c480) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x00036c45) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x00036c45) main_mp2_pane_t

0x4c98,	// (0x0002c492) pec_content_pane_ParamLimits

0x4c98,	// (0x0002c492) pec_content_pane

0x2c31,	// (0x0002a42b) scroll_pane_cp015

0x4caa,	// (0x0002c4a4) pec_attribute_pane_ParamLimits

0x4caa,	// (0x0002c4a4) pec_attribute_pane

0x4cba,	// (0x0002c4b4) pec_content_pane_g1_ParamLimits

0x4cba,	// (0x0002c4b4) pec_content_pane_g1

0x4cc6,	// (0x0002c4c0) pec_content_pane_t1_ParamLimits

0x4cc6,	// (0x0002c4c0) pec_content_pane_t1

0x4cd8,	// (0x0002c4d2) pec_content_pane_t2_ParamLimits

0x4cd8,	// (0x0002c4d2) pec_content_pane_t2

0x0001,

0xf452,	// (0x00036c4c) pec_content_pane_t_ParamLimits

0xf452,	// (0x00036c4c) pec_content_pane_t

0x4cea,	// (0x0002c4e4) list_single_graphic_pane_cp01_ParamLimits

0x4cea,	// (0x0002c4e4) list_single_graphic_pane_cp01

0xee76,	// (0x00036670) bg_popup_sub_pane_cp04

0x4d04,	// (0x0002c4fe) popup_mup_playback_window_g1

0x4d10,	// (0x0002c50a) popup_mup_playback_window_t1

0x4d25,	// (0x0002c51f) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x00036c51) popup_mup_playback_window_t

0x4d7a,	// (0x0002c574) main_image_pane_g1_ParamLimits

0x4d7a,	// (0x0002c574) main_image_pane_g1

0x4e57,	// (0x0002c651) scroll_pane_cp018_ParamLimits

0x4e57,	// (0x0002c651) scroll_pane_cp018

0x4e6f,	// (0x0002c669) scroll_pane_cp016_ParamLimits

0x4e6f,	// (0x0002c669) scroll_pane_cp016

0x4ea3,	// (0x0002c69d) smil2_image_pane_ParamLimits

0x4ea3,	// (0x0002c69d) smil2_image_pane

0x4ed9,	// (0x0002c6d3) smil2_root_pane_ParamLimits

0x4ed9,	// (0x0002c6d3) smil2_root_pane

0x4f11,	// (0x0002c70b) smil2_text_pane_ParamLimits

0x4f11,	// (0x0002c70b) smil2_text_pane

0xec1b,	// (0x00036415) bg_list_pane_cp06

0x4fa9,	// (0x0002c7a3) grid_radio_pane

0xec1b,	// (0x00036415) bg_popup_window_pane_cp06

0x4fb3,	// (0x0002c7ad) main_fmradio_pane_t1

0x62e1,	// (0x0002dadb) heading_pane_cp04

0x4fc1,	// (0x0002c7bb) main_fmradio_pane_t2

0x62e9,	// (0x0002dae3) popup_cale_lunar_info_window_g1

0x4fcf,	// (0x0002c7c9) main_fmradio_pane_t3

0x62f1,	// (0x0002daeb) popup_cale_lunar_info_window_g2

0x4fdf,	// (0x0002c7d9) main_fmradio_pane_t4

0x0001,

0x4fed,	// (0x0002c7e7) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x00036d31) popup_cale_lunar_info_window_g

0xf46c,	// (0x00036c66) main_fmradio_pane_t

0x4ffb,	// (0x0002c7f5) wait_bar_pane_cp03

0x5003,	// (0x0002c7fd) cell_fmradio_pane_ParamLimits

0x5003,	// (0x0002c7fd) cell_fmradio_pane

0x4bd4,	// (0x0002c3ce) cell_fmradio_pane_g1_ParamLimits

0x4bd4,	// (0x0002c3ce) cell_fmradio_pane_g1

0xec1b,	// (0x00036415) grid_highlight_pane_cp011

0x5018,	// (0x0002c812) poc_content_pane_ParamLimits

0x5018,	// (0x0002c812) poc_content_pane

0x502a,	// (0x0002c824) scroll_pane_cp019

0x5032,	// (0x0002c82c) popup_call_poc_act_window_ParamLimits

0x5032,	// (0x0002c82c) popup_call_poc_act_window

0x5056,	// (0x0002c850) popup_call_poc_inact_window_ParamLimits

0x5056,	// (0x0002c850) popup_call_poc_inact_window

0xf50e,	// (0x00036d08) bg_popup_call_poc_act_pane_g

0x61c6,	// (0x0002d9c0) bg_popup_call_poc_inact_pane_g1

0x61ce,	// (0x0002d9c8) bg_popup_call_poc_inact_pane_g2

0x506f,	// (0x0002c869) popup_call_poc_act_window_g2

0x61d6,	// (0x0002d9d0) bg_popup_call_poc_inact_pane_g3

0x61de,	// (0x0002d9d8) bg_popup_call_poc_inact_pane_g4

0x61e6,	// (0x0002d9e0) bg_popup_call_poc_inact_pane_g5

0x5077,	// (0x0002c871) popup_call_poc_act_window_t1_ParamLimits

0x5077,	// (0x0002c871) popup_call_poc_act_window_t1

0x509f,	// (0x0002c899) popup_call_poc_act_window_t2_ParamLimits

0x509f,	// (0x0002c899) popup_call_poc_act_window_t2

0x50c7,	// (0x0002c8c1) popup_call_poc_act_window_t3_ParamLimits

0x50c7,	// (0x0002c8c1) popup_call_poc_act_window_t3

0x50ef,	// (0x0002c8e9) popup_call_poc_act_window_t4_ParamLimits

0x50ef,	// (0x0002c8e9) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x00036c71) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x00036c71) popup_call_poc_act_window_t

0x61ee,	// (0x0002d9e8) bg_popup_call_poc_inact_pane_g6

0x61f6,	// (0x0002d9f0) bg_popup_call_poc_inact_pane_g7

0x61fe,	// (0x0002d9f8) bg_popup_call_poc_inact_pane_g8

0x5101,	// (0x0002c8fb) popup_call_poc_inact_window_g2

0x6206,	// (0x0002da00) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x00036cf5) bg_popup_call_poc_inact_pane_g

0x5109,	// (0x0002c903) popup_call_poc_inact_window_t1_ParamLimits

0x5109,	// (0x0002c903) popup_call_poc_inact_window_t1

0x511e,	// (0x0002c918) popup_call_poc_inact_window_t2_ParamLimits

0x511e,	// (0x0002c918) popup_call_poc_inact_window_t2

0x5133,	// (0x0002c92d) popup_call_poc_inact_window_t3_ParamLimits

0x5133,	// (0x0002c92d) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x00036c7a) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x00036c7a) popup_call_poc_inact_window_t

0x65bb,	// (0x0002ddb5) context_pane_ParamLimits

0x6625,	// (0x0002de1f) signal_pane_ParamLimits

0x246c,	// (0x00029c66) main_call2_pane

0xb926,	// (0x00033120) popup_phob_thumbnail2_window_ParamLimits

0xb926,	// (0x00033120) popup_phob_thumbnail2_window

0xb8b3,	// (0x000330ad) aid_hotspot_pointer_arrow_pane

0xb8bb,	// (0x000330b5) aid_hotspot_pointer_hand_pane

0x6362,	// (0x0002db5c) phob_pre_status_pane_g5

0xee98,	// (0x00036692) cams_zoom_pane_ParamLimits

0xee98,	// (0x00036692) image_vga_pane_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g2_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g3_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g4_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g5_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g6_ParamLimits

0xeeff,	// (0x000366f9) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x000369a5) main_camera_pane_g_ParamLimits

0x24d9,	// (0x00029cd3) main_camera_pane_t1_ParamLimits

0x24d9,	// (0x00029cd3) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x000369b6) main_camera_pane_t_ParamLimits

0xee76,	// (0x00036670) bg_popup_preview_window_pane_cp01_ParamLimits

0xee76,	// (0x00036670) bg_popup_preview_window_pane_cp01

0x5148,	// (0x0002c942) popup_phob_thumbnail2_window_g1_ParamLimits

0x5148,	// (0x0002c942) popup_phob_thumbnail2_window_g1

0xec1b,	// (0x00036415) call2_cli_visual_pane

0x516f,	// (0x0002c969) popup_call2_audio_conf_window_ParamLimits

0x516f,	// (0x0002c969) popup_call2_audio_conf_window

0x5197,	// (0x0002c991) popup_call2_audio_first_window_ParamLimits

0x5197,	// (0x0002c991) popup_call2_audio_first_window

0x522d,	// (0x0002ca27) popup_call2_audio_in_window_ParamLimits

0x522d,	// (0x0002ca27) popup_call2_audio_in_window

0x5279,	// (0x0002ca73) popup_call2_audio_out_window_ParamLimits

0x5279,	// (0x0002ca73) popup_call2_audio_out_window

0x52eb,	// (0x0002cae5) popup_call2_audio_second_window_ParamLimits

0x52eb,	// (0x0002cae5) popup_call2_audio_second_window

0x5351,	// (0x0002cb4b) popup_call2_audio_wait_window_ParamLimits

0x5351,	// (0x0002cb4b) popup_call2_audio_wait_window

0xec1b,	// (0x00036415) bg_popup_call2_act_pane_cp03

0xee58,	// (0x00036652) list_conf_pane_cp

0x538b,	// (0x0002cb85) popup_call2_audio_conf_window_t1

0x5399,	// (0x0002cb93) list_single_graphic_popup_conf2_pane_ParamLimits

0x5399,	// (0x0002cb93) list_single_graphic_popup_conf2_pane

0x3fd9,	// (0x0002b7d3) list_highlight_pane_cp04

0x53ac,	// (0x0002cba6) list_single_graphic_popup_conf2_pane_g1

0x3fea,	// (0x0002b7e4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x00036c81) list_single_graphic_popup_conf2_pane_g

0x53b6,	// (0x0002cbb0) list_single_graphic_popup_conf2_pane_t1

0x53c4,	// (0x0002cbbe) bg_popup_call2_act_pane_cp01_ParamLimits

0x53c4,	// (0x0002cbbe) bg_popup_call2_act_pane_cp01

0x544e,	// (0x0002cc48) call_type_pane_cp05_ParamLimits

0x544e,	// (0x0002cc48) call_type_pane_cp05

0x54a2,	// (0x0002cc9c) popup_call2_audio_second_window_g1_ParamLimits

0x54a2,	// (0x0002cc9c) popup_call2_audio_second_window_g1

0x54f6,	// (0x0002ccf0) popup_call2_audio_second_window_g2_ParamLimits

0x54f6,	// (0x0002ccf0) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x00036c86) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x00036c86) popup_call2_audio_second_window_g

0x555b,	// (0x0002cd55) popup_call2_audio_second_window_t1_ParamLimits

0x555b,	// (0x0002cd55) popup_call2_audio_second_window_t1

0x5616,	// (0x0002ce10) popup_call2_audio_second_window_t2_ParamLimits

0x5616,	// (0x0002ce10) popup_call2_audio_second_window_t2

0x5669,	// (0x0002ce63) popup_call2_audio_second_window_t3_ParamLimits

0x5669,	// (0x0002ce63) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x00036c8d) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x00036c8d) popup_call2_audio_second_window_t

0xec1b,	// (0x00036415) bg_popup_call2_in_pane_cp02

0xec25,	// (0x0003641f) call_type_pane_cp04

0x575c,	// (0x0002cf56) popup_call2_audio_wait_window_g1

0x5764,	// (0x0002cf5e) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x00036c96) popup_call2_audio_wait_window_g

0xec3d,	// (0x00036437) popup_call2_audio_wait_window_t3

0x576c,	// (0x0002cf66) bg_popup_call2_act_pane_ParamLimits

0x576c,	// (0x0002cf66) bg_popup_call2_act_pane

0x582c,	// (0x0002d026) call_type_pane_cp03_ParamLimits

0x582c,	// (0x0002d026) call_type_pane_cp03

0x5890,	// (0x0002d08a) popup_call2_audio_first_window_g1_ParamLimits

0x5890,	// (0x0002d08a) popup_call2_audio_first_window_g1

0x5900,	// (0x0002d0fa) popup_call2_audio_first_window_g2_ParamLimits

0x5900,	// (0x0002d0fa) popup_call2_audio_first_window_g2

0x5964,	// (0x0002d15e) popup_call2_audio_first_window_g3_ParamLimits

0x5964,	// (0x0002d15e) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x00036c9b) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x00036c9b) popup_call2_audio_first_window_g

0x59ec,	// (0x0002d1e6) popup_call2_audio_first_window_t1_ParamLimits

0x59ec,	// (0x0002d1e6) popup_call2_audio_first_window_t1

0x5aef,	// (0x0002d2e9) popup_call2_audio_first_window_t4_ParamLimits

0x5aef,	// (0x0002d2e9) popup_call2_audio_first_window_t4

0x5bd2,	// (0x0002d3cc) popup_call2_audio_first_window_t5_ParamLimits

0x5bd2,	// (0x0002d3cc) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x00036ca6) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x00036ca6) popup_call2_audio_first_window_t

0xee6e,	// (0x00036668) bg_popup_call2_act_pane_g1

0x62fb,	// (0x0002daf5) popup_cale_lunar_info_window_t1

0x6309,	// (0x0002db03) popup_cale_lunar_info_window_t2

0x6317,	// (0x0002db11) popup_cale_lunar_info_window_t3

0xec1b,	// (0x00036415) bg_popup_call2_bubble_pane

0x5cd3,	// (0x0002d4cd) bg_popup_call2_in_pane_cp01_ParamLimits

0x5cd3,	// (0x0002d4cd) bg_popup_call2_in_pane_cp01

0xe8f7,	// (0x000360f1) call_type_pane_cp02

0x5d1b,	// (0x0002d515) popup_call2_audio_out_window_g1_ParamLimits

0x5d1b,	// (0x0002d515) popup_call2_audio_out_window_g1

0x5d47,	// (0x0002d541) popup_call2_audio_out_window_g2_ParamLimits

0x5d47,	// (0x0002d541) popup_call2_audio_out_window_g2

0x5d6f,	// (0x0002d569) popup_call2_audio_out_window_g3_ParamLimits

0x5d6f,	// (0x0002d569) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x00036caf) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x00036caf) popup_call2_audio_out_window_g

0x5daa,	// (0x0002d5a4) popup_call2_audio_out_window_t1_ParamLimits

0x5daa,	// (0x0002d5a4) popup_call2_audio_out_window_t1

0x5e09,	// (0x0002d603) popup_call2_audio_out_window_t2_ParamLimits

0x5e09,	// (0x0002d603) popup_call2_audio_out_window_t2

0x5e5d,	// (0x0002d657) popup_call2_audio_out_window_t3_ParamLimits

0x5e5d,	// (0x0002d657) popup_call2_audio_out_window_t3

0x5e73,	// (0x0002d66d) popup_call2_audio_out_window_t4_ParamLimits

0x5e73,	// (0x0002d66d) popup_call2_audio_out_window_t4

0x5e89,	// (0x0002d683) popup_call2_audio_out_window_t5_ParamLimits

0x5e89,	// (0x0002d683) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x00036cb8) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x00036cb8) popup_call2_audio_out_window_t

0x5eed,	// (0x0002d6e7) bg_popup_call2_in_pane_ParamLimits

0x5eed,	// (0x0002d6e7) bg_popup_call2_in_pane

0x5f49,	// (0x0002d743) popup_call2_audio_in_window_g1_ParamLimits

0x5f49,	// (0x0002d743) popup_call2_audio_in_window_g1

0x5f81,	// (0x0002d77b) popup_call2_audio_in_window_g2_ParamLimits

0x5f81,	// (0x0002d77b) popup_call2_audio_in_window_g2

0x5fb9,	// (0x0002d7b3) popup_call2_audio_in_window_g3_ParamLimits

0x5fb9,	// (0x0002d7b3) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x00036cc5) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x00036cc5) popup_call2_audio_in_window_g

0x6011,	// (0x0002d80b) popup_call2_audio_in_window_t1_ParamLimits

0x6011,	// (0x0002d80b) popup_call2_audio_in_window_t1

0x6091,	// (0x0002d88b) popup_call2_audio_in_window_t2_ParamLimits

0x6091,	// (0x0002d88b) popup_call2_audio_in_window_t2

0x6111,	// (0x0002d90b) popup_call2_audio_in_window_t3_ParamLimits

0x6111,	// (0x0002d90b) popup_call2_audio_in_window_t3

0x612b,	// (0x0002d925) popup_call2_audio_in_window_t4_ParamLimits

0x612b,	// (0x0002d925) popup_call2_audio_in_window_t4

0x613d,	// (0x0002d937) popup_call2_audio_in_window_t5_ParamLimits

0x613d,	// (0x0002d937) popup_call2_audio_in_window_t5

0x6152,	// (0x0002d94c) popup_call2_audio_in_window_t6_ParamLimits

0x6152,	// (0x0002d94c) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00036cce) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00036cce) popup_call2_audio_in_window_t

0xee6e,	// (0x00036668) bg_popup_call2_in_pane_g1

0x6325,	// (0x0002db1f) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x00036d36) popup_cale_lunar_info_window_t

0xee76,	// (0x00036670) bg_popup_call2_rect_pane_ParamLimits

0xee76,	// (0x00036670) bg_popup_call2_rect_pane

0xec1b,	// (0x00036415) call2_cli_visual_graphic_pane

0xec1b,	// (0x00036415) call2_cli_visual_text_pane

0xb94d,	// (0x00033147) smil_status_volume_pane_g3

0x0002,

0xee8e,	// (0x00036688) call2_cli_visual_graphic_pane_g1

0xee8e,	// (0x00036688) call2_cli_visual_graphic_pane_g2

0xee8e,	// (0x00036688) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00036cdb) call2_cli_visual_graphic_pane_g

0x6186,	// (0x0002d980) bg_popup_call2_rect_pane_g1

0xf051,	// (0x0003684b) bg_popup_call2_rect_pane_g2

0x618e,	// (0x0002d988) bg_popup_call2_rect_pane_g3

0x6196,	// (0x0002d990) bg_popup_call2_rect_pane_g4

0x619e,	// (0x0002d998) bg_popup_call2_rect_pane_g5

0x61a6,	// (0x0002d9a0) bg_popup_call2_rect_pane_g6

0x61ae,	// (0x0002d9a8) bg_popup_call2_rect_pane_g7

0x61b6,	// (0x0002d9b0) bg_popup_call2_rect_pane_g8

0x61be,	// (0x0002d9b8) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00036ce2) bg_popup_call2_rect_pane_g

0x61c6,	// (0x0002d9c0) bg_popup_call2_bubble_pane_g1

0x61ce,	// (0x0002d9c8) bg_popup_call2_bubble_pane_g2

0x61d6,	// (0x0002d9d0) bg_popup_call2_bubble_pane_g3

0x61de,	// (0x0002d9d8) bg_popup_call2_bubble_pane_g4

0x61e6,	// (0x0002d9e0) bg_popup_call2_bubble_pane_g5

0x61ee,	// (0x0002d9e8) bg_popup_call2_bubble_pane_g6

0x61f6,	// (0x0002d9f0) bg_popup_call2_bubble_pane_g7

0x61fe,	// (0x0002d9f8) bg_popup_call2_bubble_pane_g8

0x6206,	// (0x0002da00) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x00036cf5) bg_popup_call2_bubble_pane_g

0x1ef1,	// (0x000296eb) aid_cale_week_size_cell_pane

0x24ed,	// (0x00029ce7) aid_cams_cif_uncrop_pane_ParamLimits

0x24ed,	// (0x00029ce7) aid_cams_cif_uncrop_pane

0x2667,	// (0x00029e61) aid_cams_size_cell_ParamLimits

0x2667,	// (0x00029e61) aid_cams_size_cell

0x267b,	// (0x00029e75) grid_cams_pane_ParamLimits

0x2695,	// (0x00029e8f) linegrid_cams_pane_ParamLimits

0x27c2,	// (0x00029fbc) call_video_pane_t1

0x27dc,	// (0x00029fd6) call_video_pane_t2

0x0001,

0xf208,	// (0x00036a02) call_video_pane_t

0x2e71,	// (0x0002a66b) aid_cale_month_size_cell_pane_ParamLimits

0x2e71,	// (0x0002a66b) aid_cale_month_size_cell_pane

0xf580,	// (0x00036d7a) smil_status_volume_pane_g

0xb95a,	// (0x00033154) volume_smil_pane_ParamLimits

0xb6e5,	// (0x00032edf) aid_popup2_width_pane

0x1e21,	// (0x0002961b) cell_qdial_pane_g4_ParamLimits

0x1e21,	// (0x0002961b) cell_qdial_pane_g4

0x42d6,	// (0x0002bad0) aid_blid_cardinal_pane_ParamLimits

0x42e6,	// (0x0002bae0) aid_blid_destination_pane_ParamLimits

0x42e6,	// (0x0002bae0) aid_blid_destination_pane

0xee76,	// (0x00036670) bg_popup_call_poc_act_pane_ParamLimits

0xee76,	// (0x00036670) bg_popup_call_poc_act_pane

0xee76,	// (0x00036670) bg_popup_call_poc_inact_pane_ParamLimits

0xee76,	// (0x00036670) bg_popup_call_poc_inact_pane

0x6216,	// (0x0002da10) bg_popup_call_poc_act_pane_g1

0x621e,	// (0x0002da18) bg_popup_call_poc_act_pane_g2

0x6226,	// (0x0002da20) bg_popup_call_poc_act_pane_g3

0x61de,	// (0x0002d9d8) bg_popup_call_poc_act_pane_g4

0x61e6,	// (0x0002d9e0) bg_popup_call_poc_act_pane_g5

0x622e,	// (0x0002da28) bg_popup_call_poc_act_pane_g6

0x61f6,	// (0x0002d9f0) bg_popup_call_poc_act_pane_g7

0x6236,	// (0x0002da30) bg_popup_call_poc_act_pane_g8

0xec1b,	// (0x00036415) main_usb_pane

0xb8fd,	// (0x000330f7) popup_cale_lunar_info_window

0x2b0d,	// (0x0002a307) im_reading_pane_t1_ParamLimits

0x2b4c,	// (0x0002a346) list_im_pane_ParamLimits

0x2b5d,	// (0x0002a357) scroll_pane_cp07_ParamLimits

0xec1b,	// (0x00036415) grid_highlight_pane_cp012

0xee76,	// (0x00036670) mup_scale_pane_ParamLimits

0x4bd4,	// (0x0002c3ce) main_usb_pane_g1_ParamLimits

0x4bd4,	// (0x0002c3ce) main_usb_pane_g1

0x6256,	// (0x0002da50) main_usb_pane_g2_ParamLimits

0x6256,	// (0x0002da50) main_usb_pane_g2

0x0001,

0xf525,	// (0x00036d1f) main_usb_pane_g_ParamLimits

0xf525,	// (0x00036d1f) main_usb_pane_g

0x626c,	// (0x0002da66) main_usb_pane_t1_ParamLimits

0x626c,	// (0x0002da66) main_usb_pane_t1

0x627e,	// (0x0002da78) main_usb_pane_t2_ParamLimits

0x627e,	// (0x0002da78) main_usb_pane_t2

0x6290,	// (0x0002da8a) main_usb_pane_t3_ParamLimits

0x6290,	// (0x0002da8a) main_usb_pane_t3

0x62a2,	// (0x0002da9c) main_usb_pane_t4_ParamLimits

0x62a2,	// (0x0002da9c) main_usb_pane_t4

0x62b7,	// (0x0002dab1) main_usb_pane_t5_ParamLimits

0x62b7,	// (0x0002dab1) main_usb_pane_t5

0x62cc,	// (0x0002dac6) main_usb_pane_t6_ParamLimits

0x62cc,	// (0x0002dac6) main_usb_pane_t6

0x0005,

0xf52a,	// (0x00036d24) main_usb_pane_t_ParamLimits

0x4275,	// (0x0002ba6f) aid_text_placing

0x4280,	// (0x0002ba7a) main_location2_pane_t1_ParamLimits

0x4296,	// (0x0002ba90) main_location2_pane_t2_ParamLimits

0x42ac,	// (0x0002baa6) main_location2_pane_t3_ParamLimits

0x42c2,	// (0x0002babc) main_location2_pane_t4_ParamLimits

0x42c2,	// (0x0002babc) main_location2_pane_t4

0xf344,	// (0x00036b3e) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x000366ac) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x000366ac) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x000368ba) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x000368ba) find_pinb_pane_g

0xeebe,	// (0x000366b8) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x000366ca) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x000368bf) find_pinb_pane_t_ParamLimits

0xec1b,	// (0x00036415) main_call3_pane

0x34b5,	// (0x0002acaf) cale_month_day_heading_pane_t1_ParamLimits

0x353b,	// (0x0002ad35) cale_month_day_heading_pane_t2_ParamLimits

0x35b4,	// (0x0002adae) cale_month_day_heading_pane_t3_ParamLimits

0x362d,	// (0x0002ae27) cale_month_day_heading_pane_t4_ParamLimits

0x36ae,	// (0x0002aea8) cale_month_day_heading_pane_t5_ParamLimits

0x3737,	// (0x0002af31) cale_month_day_heading_pane_t6_ParamLimits

0x37c8,	// (0x0002afc2) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00036a3a) cale_month_day_heading_pane_t_ParamLimits

0x3a72,	// (0x0002b26c) smil_status_volume_pane

0x4ba8,	// (0x0002c3a2) postcard_address_pane_ParamLimits

0x4ba8,	// (0x0002c3a2) postcard_address_pane

0x4bbe,	// (0x0002c3b8) postcard_message_pane_ParamLimits

0x4bbe,	// (0x0002c3b8) postcard_message_pane

0x6167,	// (0x0002d961) call2_cli_visual_pane_t1_ParamLimits

0x6167,	// (0x0002d961) call2_cli_visual_pane_t1

0x6890,	// (0x0002e08a) postcard_message_pane_t1_ParamLimits

0x6890,	// (0x0002e08a) postcard_message_pane_t1

0x6878,	// (0x0002e072) postcard_address_pane_t1_ParamLimits

0x6878,	// (0x0002e072) postcard_address_pane_t1

0x6864,	// (0x0002e05e) popup_call3_audio_in_window_ParamLimits

0x6864,	// (0x0002e05e) popup_call3_audio_in_window

0x66e9,	// (0x0002dee3) bg_popup_call3_in_pane_ParamLimits

0x66e9,	// (0x0002dee3) bg_popup_call3_in_pane

0x6765,	// (0x0002df5f) popup_call3_audio_in_window_g1_ParamLimits

0x6765,	// (0x0002df5f) popup_call3_audio_in_window_g1

0x6785,	// (0x0002df7f) popup_call3_audio_in_window_g2_ParamLimits

0x6785,	// (0x0002df7f) popup_call3_audio_in_window_g2

0x67a5,	// (0x0002df9f) popup_call3_audio_in_window_g3_ParamLimits

0x67a5,	// (0x0002df9f) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x00036d81) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x00036d81) popup_call3_audio_in_window_g

0x67d6,	// (0x0002dfd0) popup_call3_audio_in_window_t1_ParamLimits

0x67d6,	// (0x0002dfd0) popup_call3_audio_in_window_t1

0x6814,	// (0x0002e00e) popup_call3_audio_in_window_t2_ParamLimits

0x6814,	// (0x0002e00e) popup_call3_audio_in_window_t2

0x6852,	// (0x0002e04c) popup_call3_audio_in_window_t3_ParamLimits

0x6852,	// (0x0002e04c) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x00036d8a) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x00036d8a) popup_call3_audio_in_window_t

0x246c,	// (0x00029c66) bg_popup_call3_rect_pane

0x6186,	// (0x0002d980) bg_popup_call3_rect_pane_g1

0xf051,	// (0x0003684b) bg_popup_call3_rect_pane_g2

0x618e,	// (0x0002d988) bg_popup_call3_rect_pane_g3

0x6196,	// (0x0002d990) bg_popup_call3_rect_pane_g4

0x619e,	// (0x0002d998) bg_popup_call3_rect_pane_g5

0x61a6,	// (0x0002d9a0) bg_popup_call3_rect_pane_g6

0x61ae,	// (0x0002d9a8) bg_popup_call3_rect_pane_g7

0xe7c9,	// (0x00035fc3) mup_visualizer_osc_pane

0xe7c9,	// (0x00035fc3) mup_visualizer_spec_pane

0x6719,	// (0x0002df13) call3_video_qcif_pane_ParamLimits

0x6719,	// (0x0002df13) call3_video_qcif_pane

0x672c,	// (0x0002df26) call3_video_qcif_uncrop_pane_ParamLimits

0x672c,	// (0x0002df26) call3_video_qcif_uncrop_pane

0x673c,	// (0x0002df36) call3_video_subqcif_pane_ParamLimits

0x673c,	// (0x0002df36) call3_video_subqcif_pane

0x6752,	// (0x0002df4c) call3_video_subqcif_uncrop_pane_ParamLimits

0x6752,	// (0x0002df4c) call3_video_subqcif_uncrop_pane

0x67c5,	// (0x0002dfbf) popup_call3_audio_in_window_g4_ParamLimits

0x67c5,	// (0x0002dfbf) popup_call3_audio_in_window_g4

0xe7c9,	// (0x00035fc3) mup_spec_half_pane

0xe7c9,	// (0x00035fc3) mup_spec_half_pane_cp

0xe7c9,	// (0x00035fc3) mup_osc_middle_pane

0x265d,	// (0x00029e57) mup_visualizer_osc_pane_g1

0x669c,	// (0x0002de96) mup_spec_bar_pane_ParamLimits

0x669c,	// (0x0002de96) mup_spec_bar_pane

0x265d,	// (0x00029e57) mup_spec_bar_pane_g1

0x265d,	// (0x00029e57) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) mup_spec_bar_pane_g

0x1ef1,	// (0x000296eb) aid_cale_week_size_cell_pane_ParamLimits

0x1f0b,	// (0x00029705) bg_cale_heading_pane_ParamLimits

0x1f2f,	// (0x00029729) bg_cale_pane_cp01_ParamLimits

0x1f4c,	// (0x00029746) cale_week_corner_pane_ParamLimits

0x1f6b,	// (0x00029765) cale_week_day_heading_pane_ParamLimits

0x1f94,	// (0x0002978e) cale_week_scroll_pane_g1_ParamLimits

0x1fb3,	// (0x000297ad) cale_week_scroll_pane_g2_ParamLimits

0x1fcb,	// (0x000297c5) cale_week_scroll_pane_g3_ParamLimits

0x1fe3,	// (0x000297dd) cale_week_scroll_pane_g4_ParamLimits

0x1ffb,	// (0x000297f5) cale_week_scroll_pane_g5_ParamLimits

0x201b,	// (0x00029815) cale_week_scroll_pane_g6_ParamLimits

0x203b,	// (0x00029835) cale_week_scroll_pane_g7_ParamLimits

0x205f,	// (0x00029859) cale_week_scroll_pane_g8_ParamLimits

0x2083,	// (0x0002987d) cale_week_scroll_pane_g9_ParamLimits

0x209b,	// (0x00029895) cale_week_scroll_pane_g10_ParamLimits

0x20b3,	// (0x000298ad) cale_week_scroll_pane_g11_ParamLimits

0x20cb,	// (0x000298c5) cale_week_scroll_pane_g12_ParamLimits

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g13_ParamLimits

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g14_ParamLimits

0x20ef,	// (0x000298e9) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0003694b) cale_week_scroll_pane_g_ParamLimits

0x2137,	// (0x00029931) cale_week_time_pane_ParamLimits

0x215b,	// (0x00029955) grid_cale_week_pane_ParamLimits

0x218d,	// (0x00029987) listscroll_cale_week_pane_t1

0x219f,	// (0x00029999) scroll_pane_cp08_ParamLimits

0x2f16,	// (0x0002a710) cale_month_corner_pane_ParamLimits

0x341e,	// (0x0002ac18) cale_month_pane_t1

0x3430,	// (0x0002ac2a) cale_month_week_pane_ParamLimits

0x3ed5,	// (0x0002b6cf) popup_call_status_window_g1_ParamLimits

0x3ee9,	// (0x0002b6e3) popup_call_status_window_g2_ParamLimits

0x3efd,	// (0x0002b6f7) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x00036ac5) popup_call_status_window_g_ParamLimits

0x3f66,	// (0x0002b760) aid_call2_pane

0x49e1,	// (0x0002c1db) msg_header_pane_g1

0x4ba8,	// (0x0002c3a2) postcard_address2_pane_ParamLimits

0x4ba8,	// (0x0002c3a2) postcard_address2_pane

0x4bbe,	// (0x0002c3b8) postcard_message2_pane_ParamLimits

0x4bbe,	// (0x0002c3b8) postcard_message2_pane

0x6633,	// (0x0002de2d) message2_row_pane_ParamLimits

0x6633,	// (0x0002de2d) message2_row_pane

0x6656,	// (0x0002de50) address2_row_pane_ParamLimits

0x6656,	// (0x0002de50) address2_row_pane

0x6669,	// (0x0002de63) postcard_message2_row_pane_g1

0x6671,	// (0x0002de6b) postcard_message2_row_pane_t1

0x6669,	// (0x0002de63) address2_row_pane_g1

0x6671,	// (0x0002de6b) address2_row_pane_t1

0x2464,	// (0x00029c5e) aid_size_cell_vorec

0xec1b,	// (0x00036415) main_rss_pane

0x667f,	// (0x0002de79) rss_list_single_pane_ParamLimits

0x667f,	// (0x0002de79) rss_list_single_pane

0x668d,	// (0x0002de87) rss_list_single_pane_t1

0x668d,	// (0x0002de87) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x00036d75) rss_list_single_pane_t

0xec1b,	// (0x00036415) main_camera2_pane

0xec1b,	// (0x00036415) main_video2_pane

0xb96f,	// (0x00033169) cams_zoom_pane_cp2_ParamLimits

0xb96f,	// (0x00033169) cams_zoom_pane_cp2

0xb96f,	// (0x00033169) image2_vga_pane_ParamLimits

0xb96f,	// (0x00033169) image2_vga_pane

0xb97d,	// (0x00033177) main_camera2_pane_g1_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g1

0xb97d,	// (0x00033177) main_camera2_pane_g2_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g2

0xb97d,	// (0x00033177) main_camera2_pane_g3_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g3

0xb97d,	// (0x00033177) main_camera2_pane_g4_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g4

0xb97d,	// (0x00033177) main_camera2_pane_g5_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g5

0xb97d,	// (0x00033177) main_camera2_pane_g6_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g6

0xb97d,	// (0x00033177) main_camera2_pane_g7_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g7

0xb97d,	// (0x00033177) main_camera2_pane_g8_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g8

0x0008,

0xf597,	// (0x00036d91) main_camera2_pane_g_ParamLimits

0xf597,	// (0x00036d91) main_camera2_pane_g

0x0ece,	// (0x000286c8) main_camera2_pane_t1_ParamLimits

0x0ece,	// (0x000286c8) main_camera2_pane_t1

0x0ece,	// (0x000286c8) main_camera2_pane_t2_ParamLimits

0x0ece,	// (0x000286c8) main_camera2_pane_t2

0x0ece,	// (0x000286c8) main_camera2_pane_t3_ParamLimits

0x0ece,	// (0x000286c8) main_camera2_pane_t3

0x0ece,	// (0x000286c8) main_camera2_pane_t4_ParamLimits

0x0ece,	// (0x000286c8) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x00036da4) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x00036da4) main_camera2_pane_t

0xb9c1,	// (0x000331bb) cams_zoom_pane_cp4_ParamLimits

0xb9c1,	// (0x000331bb) cams_zoom_pane_cp4

0x0ee2,	// (0x000286dc) image2_cif_pane_ParamLimits

0x0ee2,	// (0x000286dc) image2_cif_pane

0xb748,	// (0x00032f42) image2_subqcif_pane_ParamLimits

0xb748,	// (0x00032f42) image2_subqcif_pane

0x0ef0,	// (0x000286ea) main_video2_pane_g1_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g1

0x0ef0,	// (0x000286ea) main_video2_pane_g2_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g2

0x0ef0,	// (0x000286ea) main_video2_pane_g3_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g3

0x0ef0,	// (0x000286ea) main_video2_pane_g4_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g4

0x0ef0,	// (0x000286ea) main_video2_pane_g5_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g5

0x0ef0,	// (0x000286ea) main_video2_pane_g6_ParamLimits

0x0ef0,	// (0x000286ea) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x00036db3) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x00036db3) main_video2_pane_g

0x0efe,	// (0x000286f8) main_video2_pane_t1_ParamLimits

0x0efe,	// (0x000286f8) main_video2_pane_t1

0x0efe,	// (0x000286f8) main_video2_pane_t2_ParamLimits

0x0efe,	// (0x000286f8) main_video2_pane_t2

0x0efe,	// (0x000286f8) main_video2_pane_t3_ParamLimits

0x0efe,	// (0x000286f8) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x00036dc0) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x00036dc0) main_video2_pane_t

0x63c6,	// (0x0002dbc0) call_muted_g2

0x0001,

0xf56d,	// (0x00036d67) call_muted_g

0xec1b,	// (0x00036415) main_mup2_pane

0x462f,	// (0x0002be29) main_mup2_pane_g1_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g1

0x462f,	// (0x0002be29) main_mup2_pane_g2_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g2

0xb9fb,	// (0x000331f5) main_mup_pane_g13_cp1

0xb756,	// (0x00032f50) mup_volume_pane_cp1

0x462f,	// (0x0002be29) main_mup2_pane_g4_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g4

0x462f,	// (0x0002be29) main_mup2_pane_g5_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g5

0x462f,	// (0x0002be29) main_mup2_pane_g6_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g6

0x462f,	// (0x0002be29) main_mup2_pane_g7_ParamLimits

0x462f,	// (0x0002be29) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x00036dc7) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x00036dc7) main_mup2_pane_g

0x463d,	// (0x0002be37) main_mup2_pane_t1_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t1

0x463d,	// (0x0002be37) main_mup2_pane_t2_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t2

0x463d,	// (0x0002be37) main_mup2_pane_t3_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t3

0x463d,	// (0x0002be37) main_mup2_pane_t4_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t4

0x463d,	// (0x0002be37) main_mup2_pane_t5_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t5

0x463d,	// (0x0002be37) main_mup2_pane_t6_ParamLimits

0x463d,	// (0x0002be37) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x00036dd6) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x00036dd6) main_mup2_pane_t

0x4665,	// (0x0002be5f) mup2_visualizer_pane_ParamLimits

0x4665,	// (0x0002be5f) mup2_visualizer_pane

0x4665,	// (0x0002be5f) mup_progress_pane_cp_ParamLimits

0x4665,	// (0x0002be5f) mup_progress_pane_cp

0xb9e5,	// (0x000331df) mup_volume_pane_cp_ParamLimits

0xb9e5,	// (0x000331df) mup_volume_pane_cp

0xeeff,	// (0x000366f9) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) mup2_visualizer_pane_g1

0xef0d,	// (0x00036707) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x00036707) mup2_visualizer_pane_g2

0xef0d,	// (0x00036707) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x00036707) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x000368c4) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x000368c4) mup2_visualizer_pane_g

0x4fa1,	// (0x0002c79b) aid_size_cell_fmradio

0x0bbe,	// (0x000283b8) aid_height_parent_landcape

0x2c18,	// (0x0002a412) wml_content_pane_cp

0x2c20,	// (0x0002a41a) wml_tabs_pane

0x2c29,	// (0x0002a423) popup_wml_miniature_window

0x2c31,	// (0x0002a42b) scroll_pane_cp021

0x2c45,	// (0x0002a43f) wml_content_pane_comp8

0xec1b,	// (0x00036415) bg_popup_sub_pane_cp05

0x68c2,	// (0x0002e0bc) popup_wml_miniature_window_g1

0x68ca,	// (0x0002e0c4) wml_miniature_view_pane

0x68d2,	// (0x0002e0cc) aid_size_wml_view

0x68da,	// (0x0002e0d4) wml_miniature_view_pane_g1

0x68e3,	// (0x0002e0dd) wml_miniature_view_pane_g2

0x68ec,	// (0x0002e0e6) wml_miniature_view_pane_g3

0x68f4,	// (0x0002e0ee) wml_miniature_view_pane_g4

0x68fc,	// (0x0002e0f6) wml_miniature_view_pane_g5

0x6904,	// (0x0002e0fe) wml_miniature_view_pane_g6

0x690c,	// (0x0002e106) wml_miniature_view_pane_g7

0x6914,	// (0x0002e10e) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00036de3) wml_miniature_view_pane_g

0x691c,	// (0x0002e116) background_graphic_ParamLimits

0x691c,	// (0x0002e116) background_graphic

0x6928,	// (0x0002e122) wml_tabs_2_pane

0x6931,	// (0x0002e12b) wml_tabs_3_pane_ParamLimits

0x6931,	// (0x0002e12b) wml_tabs_3_pane

0x6943,	// (0x0002e13d) wml_tabs_4_pane_ParamLimits

0x6943,	// (0x0002e13d) wml_tabs_4_pane

0x6959,	// (0x0002e153) wml_tabs_5_pane_ParamLimits

0x6959,	// (0x0002e153) wml_tabs_5_pane

0x6973,	// (0x0002e16d) wml_tabs_pane_g2_ParamLimits

0x6973,	// (0x0002e16d) wml_tabs_pane_g2

0x6988,	// (0x0002e182) wml_tabs_pane_g3_ParamLimits

0x6988,	// (0x0002e182) wml_tabs_pane_g3

0x699d,	// (0x0002e197) wml_tabs_2_active_pane_ParamLimits

0x699d,	// (0x0002e197) wml_tabs_2_active_pane

0x699d,	// (0x0002e197) wml_tabs_2_passive_pane_ParamLimits

0x699d,	// (0x0002e197) wml_tabs_2_passive_pane

0x69ab,	// (0x0002e1a5) wml_tabs_3_active_pane_cp_ParamLimits

0x69ab,	// (0x0002e1a5) wml_tabs_3_active_pane_cp

0x69c0,	// (0x0002e1ba) wml_tabs_3_passive_pane_ParamLimits

0x69c0,	// (0x0002e1ba) wml_tabs_3_passive_pane

0x69d3,	// (0x0002e1cd) wml_tabs_3_passive_pane_cp_ParamLimits

0x69d3,	// (0x0002e1cd) wml_tabs_3_passive_pane_cp

0x69ea,	// (0x0002e1e4) tabs_4_active_pane

0x69f2,	// (0x0002e1ec) tabs_4_passive_pane

0x69fc,	// (0x0002e1f6) tabs_4_passive_pane_cp

0x6a04,	// (0x0002e1fe) tabs_4_passive_pane_cp2

0x620e,	// (0x0002da08) aid_height_text

0x4665,	// (0x0002be5f) mup_volume_cont_pane_ParamLimits

0x4665,	// (0x0002be5f) mup_volume_cont_pane

0xe7c9,	// (0x00035fc3) aid_size_cell_pinb

0xe7c9,	// (0x00035fc3) aid_size_list_pinb

0x4665,	// (0x0002be5f) mup2_volume_cont_pane_ParamLimits

0x4665,	// (0x0002be5f) mup2_volume_cont_pane

0xb9cf,	// (0x000331c9) mup2_volume_cont_pane_g1_ParamLimits

0xb9cf,	// (0x000331c9) mup2_volume_cont_pane_g1

0x06ee,	// (0x00027ee8) aid_size_cell_touch_ParamLimits

0x06ee,	// (0x00027ee8) aid_size_cell_touch

0x08d5,	// (0x000280cf) touch_pane_ParamLimits

0x08d5,	// (0x000280cf) touch_pane

0xb756,	// (0x00032f50) main_rss2_pane

0x6a17,	// (0x0002e211) listscroll_rss2_pane

0x6a20,	// (0x0002e21a) rss2_navigation_pane

0x6a28,	// (0x0002e222) list_rss2_pane

0x40f1,	// (0x0002b8eb) scroll_pane_cp22

0x6a30,	// (0x0002e22a) rss2_navigation_pane_g1

0x6a39,	// (0x0002e233) rss2_navigation_pane_g2

0x6a41,	// (0x0002e23b) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x00036df4) rss2_navigation_pane_g

0x6a49,	// (0x0002e243) rss2_navigation_pane_t1

0x6a57,	// (0x0002e251) rss2_list_single_pane_ParamLimits

0x6a57,	// (0x0002e251) rss2_list_single_pane

0x6a71,	// (0x0002e26b) rss2_list_single_pane_t2

0x6a7f,	// (0x0002e279) rss2_list_single_pane_t3_ParamLimits

0x6a7f,	// (0x0002e279) rss2_list_single_pane_t3

0x6a9c,	// (0x0002e296) rss2_list_single_pane_t4

0x3a5a,	// (0x0002b254) smil_status_pane_g1

0xb748,	// (0x00032f42) main_image2_pane_ParamLimits

0xb748,	// (0x00032f42) main_image2_pane

0xb97d,	// (0x00033177) main_camera2_pane_g9_ParamLimits

0xb97d,	// (0x00033177) main_camera2_pane_g9

0x0ece,	// (0x000286c8) main_camera2_pane_t5_ParamLimits

0x0ece,	// (0x000286c8) main_camera2_pane_t5

0xb98b,	// (0x00033185) main_camera2_pane_t6_ParamLimits

0xb98b,	// (0x00033185) main_camera2_pane_t6

0x6aaa,	// (0x0002e2a4) main_image2_pane_g1_ParamLimits

0x6aaa,	// (0x0002e2a4) main_image2_pane_g1

0x4f4b,	// (0x0002c745) smil2_video_pane_ParamLimits

0x4f4b,	// (0x0002c745) smil2_video_pane

0xb6f1,	// (0x00032eeb) aid_zoom_text_primary_cp

0xb73e,	// (0x00032f38) popup_preview_fixed_window

0x2b05,	// (0x0002a2ff) im_reading_pane_g1

0x0ec0,	// (0x000286ba) cams2_bc_adjust_pane_cp_ParamLimits

0x0ec0,	// (0x000286ba) cams2_bc_adjust_pane_cp

0xb9b3,	// (0x000331ad) cams2_bc_adjust_pane_ParamLimits

0xb9b3,	// (0x000331ad) cams2_bc_adjust_pane

0xb9fb,	// (0x000331f5) cams2_bc_adjust_pane_g1

0xb756,	// (0x00032f50) cams2_slider_pane

0xb9fb,	// (0x000331f5) cams2_slider_pane_g1

0xb9fb,	// (0x000331f5) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x00036dfb) cams2_slider_pane_g

0x0947,	// (0x00028141) calc_display_pane_ParamLimits

0x096c,	// (0x00028166) calc_paper_pane_ParamLimits

0x098f,	// (0x00028189) grid_calc_pane_ParamLimits

0xb884,	// (0x0003307e) popup_clock_digital_window_t1_ParamLimits

0x4dc8,	// (0x0002c5c2) main_image_pane_t1

0x0927,	// (0x00028121) aid_size_cell_calc_ParamLimits

0x0927,	// (0x00028121) aid_size_cell_calc

0x0c14,	// (0x0002840e) popup_blid_sat_info2_window_ParamLimits

0x0c14,	// (0x0002840e) popup_blid_sat_info2_window

0x6ac0,	// (0x0002e2ba) aid_size_cell_blid

0x6ac8,	// (0x0002e2c2) bg_popup_window_pane_cp07

0x6aeb,	// (0x0002e2e5) grid_popup_blid_pane

0x6af5,	// (0x0002e2ef) heading_pane_cp05_ParamLimits

0x6af5,	// (0x0002e2ef) heading_pane_cp05

0x6bbf,	// (0x0002e3b9) cell_popup_blid_pane_ParamLimits

0x6bbf,	// (0x0002e3b9) cell_popup_blid_pane

0x6be9,	// (0x0002e3e3) cell_popup_blid_pane_g1

0x6bf1,	// (0x0002e3eb) cell_popup_blid_pane_t1

0x4665,	// (0x0002be5f) mup2_indicator_pane_ParamLimits

0x4665,	// (0x0002be5f) mup2_indicator_pane

0xe7c9,	// (0x00035fc3) mup2_visualizer_osc_pane

0x68ac,	// (0x0002e0a6) mup2_visualizer_spec_pane_ParamLimits

0x68ac,	// (0x0002e0a6) mup2_visualizer_spec_pane

0xe7c9,	// (0x00035fc3) mup2_spec_half_pane

0xe7c9,	// (0x00035fc3) mup2_spec_half_pane_cp

0x6bff,	// (0x0002e3f9) mup2_spec_bar_pane_ParamLimits

0x6bff,	// (0x0002e3f9) mup2_spec_bar_pane

0x265d,	// (0x00029e57) mup2_spec_bar_pane_g1

0x6c1e,	// (0x0002e418) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x00036e21) mup2_spec_bar_pane_g

0xe7c9,	// (0x00035fc3) mup2_osc_middle_pane

0x265d,	// (0x00029e57) mup2_visualizer_osc_pane_g1

0xe7f3,	// (0x00035fed) popup_number_entry_window_t1_ParamLimits

0xe806,	// (0x00036000) popup_number_entry_window_t2_ParamLimits

0xe818,	// (0x00036012) popup_number_entry_window_t3_ParamLimits

0xe82a,	// (0x00036024) popup_number_entry_window_t5_ParamLimits

0xe82a,	// (0x00036024) popup_number_entry_window_t5

0xf06b,	// (0x00036865) popup_number_entry_window_t_ParamLimits

0xe85f,	// (0x00036059) text_title_cp2_ParamLimits

0xb8c3,	// (0x000330bd) aid_hotspot_pointer_text2_pane

0xb8e9,	// (0x000330e3) main_viewer_pane_g9_ParamLimits

0xb8e9,	// (0x000330e3) main_viewer_pane_g9

0x341e,	// (0x0002ac18) cale_month_pane_t1_ParamLimits

0x3adb,	// (0x0002b2d5) bg_cale_pane_ParamLimits

0x3af3,	// (0x0002b2ed) list_cale_pane_ParamLimits

0x3b04,	// (0x0002b2fe) listscroll_cale_day_pane_t1

0x3b16,	// (0x0002b310) scroll_pane_cp09_ParamLimits

0x46ce,	// (0x0002bec8) main_mup_eq_pane_t1_ParamLimits

0x46ce,	// (0x0002bec8) main_mup_eq_pane_t1

0x46ea,	// (0x0002bee4) main_mup_eq_pane_t2_ParamLimits

0x46ea,	// (0x0002bee4) main_mup_eq_pane_t2

0x4706,	// (0x0002bf00) main_mup_eq_pane_t3_ParamLimits

0x4706,	// (0x0002bf00) main_mup_eq_pane_t3

0x4724,	// (0x0002bf1e) main_mup_eq_pane_t4_ParamLimits

0x4724,	// (0x0002bf1e) main_mup_eq_pane_t4

0x4742,	// (0x0002bf3c) main_mup_eq_pane_t5_ParamLimits

0x4742,	// (0x0002bf3c) main_mup_eq_pane_t5

0x4760,	// (0x0002bf5a) main_mup_eq_pane_t6_ParamLimits

0x4760,	// (0x0002bf5a) main_mup_eq_pane_t6

0x4776,	// (0x0002bf70) main_mup_eq_pane_t7_ParamLimits

0x4776,	// (0x0002bf70) main_mup_eq_pane_t7

0x478c,	// (0x0002bf86) main_mup_eq_pane_t8_ParamLimits

0x478c,	// (0x0002bf86) main_mup_eq_pane_t8

0x47a2,	// (0x0002bf9c) main_mup_eq_pane_t9_ParamLimits

0x47a2,	// (0x0002bf9c) main_mup_eq_pane_t9

0x47be,	// (0x0002bfb8) main_mup_eq_pane_t10_ParamLimits

0x47be,	// (0x0002bfb8) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x00036bc4) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x00036bc4) main_mup_eq_pane_t

0x4893,	// (0x0002c08d) mup_equalizer_pane_cp5_ParamLimits

0x48ab,	// (0x0002c0a5) mup_equalizer_pane_cp6_ParamLimits

0x48c3,	// (0x0002c0bd) mup_equalizer_pane_cp7_ParamLimits

0xb756,	// (0x00032f50) main_gallery_pane

0x66bb,	// (0x0002deb5) smil2_volume_pane

0x66c3,	// (0x0002debd) smil_status_volume_pane_g1_ParamLimits

0x66d6,	// (0x0002ded0) smil_status_volume_pane_g2_ParamLimits

0xb94d,	// (0x00033147) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x00036d7a) smil_status_volume_pane_g_ParamLimits

0x6ac8,	// (0x0002e2c2) bg_popup_window_pane_cp07_ParamLimits

0x6ad6,	// (0x0002e2d0) blid_firmament_pane

0xee98,	// (0x00036692) aid_size_cell_gallery_ParamLimits

0xee98,	// (0x00036692) aid_size_cell_gallery

0xee98,	// (0x00036692) grid_gallery_pane_ParamLimits

0xee98,	// (0x00036692) grid_gallery_pane

0x6ac8,	// (0x0002e2c2) cell_gallery_pane_ParamLimits

0x6ac8,	// (0x0002e2c2) cell_gallery_pane

0xee98,	// (0x00036692) bg_cell_gallery_focus_pane_ParamLimits

0xee98,	// (0x00036692) bg_cell_gallery_focus_pane

0xeeff,	// (0x000366f9) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) cell_gallery_pane_g1

0xeeff,	// (0x000366f9) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x000366f9) cell_gallery_pane_g2

0xeeff,	// (0x000366f9) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x000366f9) cell_gallery_pane_g3

0xef0d,	// (0x00036707) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x00036707) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x00036e26) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x00036e26) cell_gallery_pane_g

0x6c28,	// (0x0002e422) bg_cell_gallery_focus_pane_g1

0x6c30,	// (0x0002e42a) bg_cell_gallery_focus_pane_g2

0x6c38,	// (0x0002e432) bg_cell_gallery_focus_pane_g3

0x6c40,	// (0x0002e43a) bg_cell_gallery_focus_pane_g4

0x6c48,	// (0x0002e442) bg_cell_gallery_focus_pane_g5

0x6c50,	// (0x0002e44a) bg_cell_gallery_focus_pane_g6

0x6c58,	// (0x0002e452) bg_cell_gallery_focus_pane_g7

0x6c60,	// (0x0002e45a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x00036e2f) bg_cell_gallery_focus_pane_g

0x6c68,	// (0x0002e462) aid_firma_cardinal

0xba05,	// (0x000331ff) blid_firmament_pane_t1

0xba1c,	// (0x00033216) blid_firmament_pane_t2

0xba33,	// (0x0003322d) blid_firmament_pane_t3

0xba4a,	// (0x00033244) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x00036e40) blid_firmament_pane_t

0xba61,	// (0x0003325b) blid_sat_info_pane

0x265d,	// (0x00029e57) blid_sat_info_pane_g1

0x265d,	// (0x00029e57) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) blid_sat_info_pane_g

0xba71,	// (0x0003326b) blid_sat_info_pane_t1

0xba7f,	// (0x00033279) smil2_volume_content_pane

0xba88,	// (0x00033282) smil2_volume_pane_g1

0xefe8,	// (0x000367e2) smil2_volume_content_pane_g1

0xba90,	// (0x0003328a) smil2_volume_content_pane_g2

0xba99,	// (0x00033293) smil2_volume_content_pane_g3

0xbaa2,	// (0x0003329c) smil2_volume_content_pane_g4

0xbaab,	// (0x000332a5) smil2_volume_content_pane_g5

0xbab4,	// (0x000332ae) smil2_volume_content_pane_g6

0xbabd,	// (0x000332b7) smil2_volume_content_pane_g7

0xbac6,	// (0x000332c0) smil2_volume_content_pane_g8

0xbacf,	// (0x000332c9) smil2_volume_content_pane_g9

0xbad8,	// (0x000332d2) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x00036e49) smil2_volume_content_pane_g

0x2258,	// (0x00029a52) cale_week_day_heading_pane_t1_ParamLimits

0x2282,	// (0x00029a7c) cale_week_day_heading_pane_t2_ParamLimits

0x22b1,	// (0x00029aab) cale_week_day_heading_pane_t3_ParamLimits

0x22e0,	// (0x00029ada) cale_week_day_heading_pane_t4_ParamLimits

0x230f,	// (0x00029b09) cale_week_day_heading_pane_t5_ParamLimits

0x2342,	// (0x00029b3c) cale_week_day_heading_pane_t6_ParamLimits

0x2379,	// (0x00029b73) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0003696c) cale_week_day_heading_pane_t_ParamLimits

0x23a3,	// (0x00029b9d) bg_cale_side_pane_ParamLimits

0x0a6c,	// (0x00028266) cale_week_time_pane_t1_ParamLimits

0x0a86,	// (0x00028280) cale_week_time_pane_t2_ParamLimits

0x0aa0,	// (0x0002829a) cale_week_time_pane_t3_ParamLimits

0x0aba,	// (0x000282b4) cale_week_time_pane_t4_ParamLimits

0x0ad4,	// (0x000282ce) cale_week_time_pane_t5_ParamLimits

0x0aee,	// (0x000282e8) cale_week_time_pane_t6_ParamLimits

0x0b0e,	// (0x00028308) cale_week_time_pane_t7_ParamLimits

0x0b34,	// (0x0002832e) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0003697b) cale_week_time_pane_t_ParamLimits

0x23b1,	// (0x00029bab) cell_cale_week_pane_g2_ParamLimits

0x23a3,	// (0x00029b9d) bg_cale_side_pane_cp01_ParamLimits

0x3859,	// (0x0002b053) cale_month_week_pane_t1_ParamLimits

0x3872,	// (0x0002b06c) cale_month_week_pane_t2_ParamLimits

0x388b,	// (0x0002b085) cale_month_week_pane_t3_ParamLimits

0x38a4,	// (0x0002b09e) cale_month_week_pane_t4_ParamLimits

0x38bd,	// (0x0002b0b7) cale_month_week_pane_t5_ParamLimits

0x38d6,	// (0x0002b0d0) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00036a49) cale_month_week_pane_t_ParamLimits

0xb7f8,	// (0x00032ff2) cell_cale_month_pane_g1_ParamLimits

0xb756,	// (0x00032f50) main_cale_event_viewer_pane

0xe7c9,	// (0x00035fc3) listscroll_cale_event_viewer_pane

0xbae1,	// (0x000332db) list_cale_ev_pane

0xbae9,	// (0x000332e3) scroll_pane_cp023

0x6c7c,	// (0x0002e476) field_cale_ev_pane_ParamLimits

0x6c7c,	// (0x0002e476) field_cale_ev_pane

0xbaf5,	// (0x000332ef) field_cale_ev_content_pane_ParamLimits

0xbaf5,	// (0x000332ef) field_cale_ev_content_pane

0xbb01,	// (0x000332fb) field_cale_ev_pane_g1_ParamLimits

0xbb01,	// (0x000332fb) field_cale_ev_pane_g1

0xbb0d,	// (0x00033307) field_cale_ev_pane_g2_ParamLimits

0xbb0d,	// (0x00033307) field_cale_ev_pane_g2

0xbb25,	// (0x0003331f) field_cale_ev_pane_g3_ParamLimits

0xbb25,	// (0x0003331f) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x00036e5e) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x00036e5e) field_cale_ev_pane_g

0xbb3d,	// (0x00033337) field_cale_ev_pane_t1_ParamLimits

0xbb3d,	// (0x00033337) field_cale_ev_pane_t1

0x6ca0,	// (0x0002e49a) field_cale_ev_content_pane_t1_ParamLimits

0x6ca0,	// (0x0002e49a) field_cale_ev_content_pane_t1

0x49cf,	// (0x0002c1c9) bg_button_pane_cp01

0x1ed8,	// (0x000296d2) listscroll_cale_week_pane_ParamLimits

0x1ee8,	// (0x000296e2) popup_toolbar_window_cp01

0x218d,	// (0x00029987) listscroll_cale_week_pane_t1_ParamLimits

0x1ed8,	// (0x000296d2) listscroll_cale_day_pane_ParamLimits

0x1ee8,	// (0x000296e2) popup_toolbar_window_cp02

0x3b04,	// (0x0002b2fe) listscroll_cale_day_pane_t1_ParamLimits

0x0bdc,	// (0x000283d6) main_cale_month_pane_ParamLimits

0xb938,	// (0x00033132) popup_toolbar_window_cp03_ParamLimits

0xb938,	// (0x00033132) popup_toolbar_window_cp03

0x4da6,	// (0x0002c5a0) main_image_pane_g2_ParamLimits

0x4da6,	// (0x0002c5a0) main_image_pane_g2

0x4db7,	// (0x0002c5b1) main_image_pane_g3_ParamLimits

0x4db7,	// (0x0002c5b1) main_image_pane_g3

0x0002,

0xf45c,	// (0x00036c56) main_image_pane_g_ParamLimits

0xf45c,	// (0x00036c56) main_image_pane_g

0x4dc8,	// (0x0002c5c2) main_image_pane_t1_ParamLimits

0x4ddf,	// (0x0002c5d9) main_image_pane_t2_ParamLimits

0x4ddf,	// (0x0002c5d9) main_image_pane_t2

0x4df1,	// (0x0002c5eb) main_image_pane_t3_ParamLimits

0x4df1,	// (0x0002c5eb) main_image_pane_t3

0x4e19,	// (0x0002c613) main_image_pane_t4_ParamLimits

0x4e19,	// (0x0002c613) main_image_pane_t4

0x0003,

0xf463,	// (0x00036c5d) main_image_pane_t_ParamLimits

0xf463,	// (0x00036c5d) main_image_pane_t

0x4e39,	// (0x0002c633) popup_image_details_window_cp01

0x4e43,	// (0x0002c63d) popup_toobar_trans_pane_cp01_ParamLimits

0x4e43,	// (0x0002c63d) popup_toobar_trans_pane_cp01

0x0d07,	// (0x00028501) popup_image_details_window_ParamLimits

0x0d07,	// (0x00028501) popup_image_details_window

0xb909,	// (0x00033103) popup_image_focus_window

0xb96f,	// (0x00033169) camera2_autofocus_pane_ParamLimits

0xb96f,	// (0x00033169) camera2_autofocus_pane

0xe7c9,	// (0x00035fc3) bg_popup_sub_pane_cp06

0xbb54,	// (0x0003334e) popup_image_focus_window_g1

0xbb5c,	// (0x00033356) popup_image_focus_window_g2

0xbb64,	// (0x0003335e) popup_image_focus_window_g3

0xbb6c,	// (0x00033366) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x00036e65) popup_image_focus_window_g

0xbb74,	// (0x0003336e) popup_image_focus_window_t1

0xbb82,	// (0x0003337c) popup_image_focus_window_t2

0xbb92,	// (0x0003338c) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x00036e6e) popup_image_focus_window_t

0xeeff,	// (0x000366f9) camera2_autofocus_pane_g1

0xee98,	// (0x00036692) bg_tb_trans_pane_cp01

0xbba0,	// (0x0003339a) popup_image_details_window_g1

0xbbb3,	// (0x000333ad) popup_image_details_window_g2

0x0002,

0xf686,	// (0x00036e80) popup_image_details_window_g

0xbbdc,	// (0x000333d6) popup_image_details_window_t1

0xbbee,	// (0x000333e8) popup_image_details_window_t2

0xbc07,	// (0x00033401) popup_image_details_window_t3

0xbc1b,	// (0x00033415) popup_image_details_window_t4

0xbc36,	// (0x00033430) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x00036e87) popup_image_details_window_t

0xef5d,	// (0x00036757) bg_calc_paper_pane_ParamLimits

0xb756,	// (0x00032f50) grid_highlight_pane_cp013

0xb768,	// (0x00032f62) list_calc_pane_ParamLimits

0xb77a,	// (0x00032f74) scroll_pane_cp024

0xef71,	// (0x0003676b) bg_calc_display_pane_ParamLimits

0x09bd,	// (0x000281b7) calc_display_pane_t1_ParamLimits

0x09cf,	// (0x000281c9) calc_display_pane_t2_ParamLimits

0xb782,	// (0x00032f7c) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000368ec) calc_display_pane_t_ParamLimits

0x0a36,	// (0x00028230) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00036909) cell_calc_pane_g

0x0a3f,	// (0x00028239) cell_calc_pane_t1

0xefc6,	// (0x000367c0) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x000367d6) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x000367d6) toolbar_button_pane_cp01

0x4e85,	// (0x0002c67f) temp_image_control_pane_ParamLimits

0x4e85,	// (0x0002c67f) temp_image_control_pane

0xb748,	// (0x00032f42) main_mp3_pane

0xbc50,	// (0x0003344a) temp_image_control_pane_g1_ParamLimits

0xbc50,	// (0x0003344a) temp_image_control_pane_g1

0xbc5e,	// (0x00033458) temp_image_control_pane_g2_ParamLimits

0xbc5e,	// (0x00033458) temp_image_control_pane_g2

0xbc70,	// (0x0003346a) temp_image_control_pane_g3_ParamLimits

0xbc70,	// (0x0003346a) temp_image_control_pane_g3

0x6cc1,	// (0x0002e4bb) temp_image_control_pane_g4_ParamLimits

0x6cc1,	// (0x0002e4bb) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x00036e92) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x00036e92) temp_image_control_pane_g

0xbc50,	// (0x0003344a) main_mp3_pane_g1

0x6cd4,	// (0x0002e4ce) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x00036e9b) main_mp3_pane_g

0xbca5,	// (0x0003349f) main_mp3_pane_t1

0xef0d,	// (0x00036707) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x00036707) main_camera_pane_g8

0x260b,	// (0x00029e05) main_video_pane_g7_ParamLimits

0x260b,	// (0x00029e05) main_video_pane_g7

0xb99f,	// (0x00033199) main_camera2_pane_t7_ParamLimits

0xb99f,	// (0x00033199) main_camera2_pane_t7

0x2bd8,	// (0x0002a3d2) scroll_pane_cp025_ParamLimits

0x2bd8,	// (0x0002a3d2) scroll_pane_cp025

0x2bec,	// (0x0002a3e6) scroll_pane_cp026_ParamLimits

0x2bec,	// (0x0002a3e6) scroll_pane_cp026

0x2bfb,	// (0x0002a3f5) wml_content_pane_ParamLimits

0xb756,	// (0x00032f50) main_touch_calib_pane

0x6da6,	// (0x0002e5a0) main_touch_calib_pane_g1

0x6db8,	// (0x0002e5b2) main_touch_calib_pane_g2

0x6dca,	// (0x0002e5c4) main_touch_calib_pane_g3

0x6ddc,	// (0x0002e5d6) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x00036eb9) main_touch_calib_pane_g

0x6dee,	// (0x0002e5e8) main_touch_calib_pane_t1

0x6e08,	// (0x0002e602) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x00036ec2) main_touch_calib_pane_t

0x43c1,	// (0x0002bbbb) mup_progress_pane_cp02

0x43f6,	// (0x0002bbf0) navi_pane_g1

0x44b1,	// (0x0002bcab) navi_pane_mp_t3

0xb748,	// (0x00032f42) main_mp3_pane_ParamLimits

0x65ce,	// (0x0002ddc8) navi_pane_ParamLimits

0xbc50,	// (0x0003344a) main_mp3_pane_g1_ParamLimits

0x6cd4,	// (0x0002e4ce) main_mp3_pane_g2_ParamLimits

0x6ce0,	// (0x0002e4da) main_mp3_pane_g3_ParamLimits

0x6ce0,	// (0x0002e4da) main_mp3_pane_g3

0x6cee,	// (0x0002e4e8) main_mp3_pane_g4_ParamLimits

0x6cee,	// (0x0002e4e8) main_mp3_pane_g4

0xeeff,	// (0x000366f9) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x000366f9) main_mp3_pane_g5

0xbc80,	// (0x0003347a) main_mp3_pane_g6_ParamLimits

0xbc80,	// (0x0003347a) main_mp3_pane_g6

0xbc8d,	// (0x00033487) main_mp3_pane_g7_ParamLimits

0xbc8d,	// (0x00033487) main_mp3_pane_g7

0xbc99,	// (0x00033493) main_mp3_pane_g8_ParamLimits

0xbc99,	// (0x00033493) main_mp3_pane_g8

0xf6a1,	// (0x00036e9b) main_mp3_pane_g_ParamLimits

0x6cfa,	// (0x0002e4f4) main_mp3_pane_t2

0x6d08,	// (0x0002e502) main_mp3_pane_t3

0xbcb3,	// (0x000334ad) main_mp3_pane_t4

0xbcc1,	// (0x000334bb) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x00036eac) main_mp3_pane_t

0xbccf,	// (0x000334c9) mup_progress_pane_cp01

0xb6f1,	// (0x00032eeb) aid_zoom_text_secondary2

0xbae1,	// (0x000332db) list_cale_ev2_pane

0xbae9,	// (0x000332e3) scroll_pane_cp023_ParamLimits

0x6e62,	// (0x0002e65c) field_cale_ev2_pane_ParamLimits

0x6e62,	// (0x0002e65c) field_cale_ev2_pane

0x6e86,	// (0x0002e680) field_cale_ev2_pane_g1_ParamLimits

0x6e86,	// (0x0002e680) field_cale_ev2_pane_g1

0x6e92,	// (0x0002e68c) field_cale_ev2_pane_g2_ParamLimits

0x6e92,	// (0x0002e68c) field_cale_ev2_pane_g2

0x6eaa,	// (0x0002e6a4) field_cale_ev2_pane_g3_ParamLimits

0x6eaa,	// (0x0002e6a4) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x00036ecd) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x00036ecd) field_cale_ev2_pane_g

0x6ec2,	// (0x0002e6bc) field_cale_ev2_pane_t1_ParamLimits

0x6ec2,	// (0x0002e6bc) field_cale_ev2_pane_t1

0x6ed9,	// (0x0002e6d3) field_cale_ev2_pane_t2_ParamLimits

0x6ed9,	// (0x0002e6d3) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x00036ed6) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x00036ed6) field_cale_ev2_pane_t

0x4b58,	// (0x0002c352) main_postcard_pane_g5_ParamLimits

0x4b58,	// (0x0002c352) main_postcard_pane_g5

0x4b6e,	// (0x0002c368) main_postcard_pane_g6_ParamLimits

0x4b6e,	// (0x0002c368) main_postcard_pane_g6

0xee98,	// (0x00036692) camera2_autofocus_pane_cp_ParamLimits

0xee98,	// (0x00036692) camera2_autofocus_pane_cp

0xb748,	// (0x00032f42) main_mup3_pane

0x6f38,	// (0x0002e732) main_mup3_pane_g1_ParamLimits

0x6f38,	// (0x0002e732) main_mup3_pane_g1

0x6f5a,	// (0x0002e754) main_mup3_pane_g2_ParamLimits

0x6f5a,	// (0x0002e754) main_mup3_pane_g2

0x6fd5,	// (0x0002e7cf) main_mup3_pane_g3_ParamLimits

0x6fd5,	// (0x0002e7cf) main_mup3_pane_g3

0x703f,	// (0x0002e839) main_mup3_pane_g4_ParamLimits

0x703f,	// (0x0002e839) main_mup3_pane_g4

0x70a9,	// (0x0002e8a3) main_mup3_pane_g5_ParamLimits

0x70a9,	// (0x0002e8a3) main_mup3_pane_g5

0x7113,	// (0x0002e90d) main_mup3_pane_g6_ParamLimits

0x7113,	// (0x0002e90d) main_mup3_pane_g6

0xef0d,	// (0x00036707) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x00036707) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x00036ee6) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x00036ee6) main_mup3_pane_g

0x7197,	// (0x0002e991) main_mup3_pane_t1_ParamLimits

0x7197,	// (0x0002e991) main_mup3_pane_t1

0x7209,	// (0x0002ea03) main_mup3_pane_t2_ParamLimits

0x7209,	// (0x0002ea03) main_mup3_pane_t2

0x72df,	// (0x0002ead9) main_mup3_pane_t4_ParamLimits

0x72df,	// (0x0002ead9) main_mup3_pane_t4

0x733d,	// (0x0002eb37) main_mup3_pane_t5_ParamLimits

0x733d,	// (0x0002eb37) main_mup3_pane_t5

0x7401,	// (0x0002ebfb) main_mup3_pane_t6_ParamLimits

0x7401,	// (0x0002ebfb) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x00036ef7) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x00036ef7) main_mup3_pane_t

0x74b9,	// (0x0002ecb3) mup3_progress_pane_ParamLimits

0x74b9,	// (0x0002ecb3) mup3_progress_pane

0x7551,	// (0x0002ed4b) popup_mup3_control_window_ParamLimits

0x7551,	// (0x0002ed4b) popup_mup3_control_window

0xbce3,	// (0x000334dd) popup_mup3_text_window

0x7587,	// (0x0002ed81) mup3_progress_pane_t1

0x75a6,	// (0x0002eda0) mup3_progress_pane_t2

0xbceb,	// (0x000334e5) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x00036f04) mup3_progress_pane_t

0xbd08,	// (0x00033502) mup_progress_pane_cp03

0xe7c9,	// (0x00035fc3) bg_tb_trans_pane_cp04

0x75c5,	// (0x0002edbf) mup3_volume_pane

0x75cd,	// (0x0002edc7) popup_mup3_control_window_g1

0x75d6,	// (0x0002edd0) mup3_volume_pane_g1

0x75df,	// (0x0002edd9) mup3_volume_pane_g2

0x75e8,	// (0x0002ede2) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x00036f0b) mup3_volume_pane_g

0xe7c9,	// (0x00035fc3) bg_tb_trans_pane_cp03

0xbd18,	// (0x00033512) popup_mup3_text_window_g1

0xbd20,	// (0x0003351a) popup_mup3_text_window_t1

0xefb9,	// (0x000367b3) list_calc_item_pane_g1_ParamLimits

0x6a0e,	// (0x0002e208) mup_volume_pane_cp_g1

0x6e22,	// (0x0002e61c) main_touch_calib_pane_t3

0x6e36,	// (0x0002e630) main_touch_calib_pane_t4

0x6e4c,	// (0x0002e646) main_touch_calib_pane_t5

0xb6dd,	// (0x00032ed7) aid_cell_size_toolbar2

0xb6e5,	// (0x00032edf) aid_popup3_width_pane

0xb6f1,	// (0x00032eeb) aid_zoom_text_msg_primary

0x24b6,	// (0x00029cb0) vorec_t7

0xef7d,	// (0x00036777) bg_calc_paper_pane_g1_ParamLimits

0xef89,	// (0x00036783) bg_calc_paper_pane_g2_ParamLimits

0xef95,	// (0x0003678f) bg_calc_paper_pane_g3_ParamLimits

0xefa1,	// (0x0003679b) bg_calc_paper_pane_g4_ParamLimits

0xefad,	// (0x000367a7) bg_calc_paper_pane_g5_ParamLimits

0x1d97,	// (0x00029591) bg_calc_paper_pane_g6_ParamLimits

0x1da5,	// (0x0002959f) bg_calc_paper_pane_g7_ParamLimits

0x1db3,	// (0x000295ad) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000368f3) bg_calc_paper_pane_g_ParamLimits

0x1dc6,	// (0x000295c0) calc_bg_paper_pane_g9_ParamLimits

0xee98,	// (0x00036692) image_qvga_pane_ParamLimits

0xee98,	// (0x00036692) image_qvga_pane

0xee76,	// (0x00036670) bg_popup_sub_pane_cp04_ParamLimits

0x4d04,	// (0x0002c4fe) popup_mup_playback_window_g1_ParamLimits

0x4d10,	// (0x0002c50a) popup_mup_playback_window_t1_ParamLimits

0x4d25,	// (0x0002c51f) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x00036c51) popup_mup_playback_window_t_ParamLimits

0xef0d,	// (0x00036707) main_mup2_pane_g3_ParamLimits

0xef0d,	// (0x00036707) main_mup2_pane_g3

0x2863,	// (0x0002a05d) popup_toolbar_window_cp04

0x554a,	// (0x0002cd44) popup_call2_audio_second_window_g3_ParamLimits

0x554a,	// (0x0002cd44) popup_call2_audio_second_window_g3

0x5972,	// (0x0002d16c) popup_call2_audio_first_window_g4_ParamLimits

0x5972,	// (0x0002d16c) popup_call2_audio_first_window_g4

0x5ff1,	// (0x0002d7eb) popup_call2_audio_in_window_g4_ParamLimits

0x5ff1,	// (0x0002d7eb) popup_call2_audio_in_window_g4

0x4d3a,	// (0x0002c534) aid_area_sk_bg_cut_ParamLimits

0x4d3a,	// (0x0002c534) aid_area_sk_bg_cut

0x4d58,	// (0x0002c552) aid_area_sk_bg_cut_2_ParamLimits

0x4d58,	// (0x0002c552) aid_area_sk_bg_cut_2

0xe7c9,	// (0x00035fc3) aid_placing_details_win

0xe7c9,	// (0x00035fc3) aid_placing_details_win_2

0xeeff,	// (0x000366f9) camera2_autofocus_pane_g1_ParamLimits

0x087c,	// (0x00028076) popup_fixed_preview_cale_window_ParamLimits

0x087c,	// (0x00028076) popup_fixed_preview_cale_window

0x4571,	// (0x0002bd6b) navi_slider_pane_g3

0x457a,	// (0x0002bd74) navi_slider_pane_g4

0x4583,	// (0x0002bd7d) navi_slider_pane_g5

0x4571,	// (0x0002bd6b) navi_slider_pane_g6

0xb8aa,	// (0x000330a4) navi_slider_pane_g7

0x48e4,	// (0x0002c0de) mup_scale_pane_g3

0x48ed,	// (0x0002c0e7) mup_scale_pane_g4

0x48f6,	// (0x0002c0f0) mup_scale_pane_g5

0x48ff,	// (0x0002c0f9) mup_scale_pane_g6

0x4908,	// (0x0002c102) mup_scale_pane_g7

0xb9fb,	// (0x000331f5) cams2_slider_pane_g3

0xb9fb,	// (0x000331f5) cams2_slider_pane_g4

0xb9fb,	// (0x000331f5) cams2_slider_pane_g5

0xb9fb,	// (0x000331f5) cams2_slider_pane_g6

0xb9fb,	// (0x000331f5) cams2_slider_pane_g7

0x265d,	// (0x00029e57) camera2_autofocus_pane_cp_g1

0x65af,	// (0x0002dda9) bg_popup_preview_window_pane_cp02_ParamLimits

0x65af,	// (0x0002dda9) bg_popup_preview_window_pane_cp02

0xbd2e,	// (0x00033528) list_fp_cale_pane_ParamLimits

0xbd2e,	// (0x00033528) list_fp_cale_pane

0xbd3a,	// (0x00033534) popup_fixed_preview_cale_window_t1_ParamLimits

0xbd3a,	// (0x00033534) popup_fixed_preview_cale_window_t1

0x75f1,	// (0x0002edeb) popup_fixed_preview_cale_window_t2_ParamLimits

0x75f1,	// (0x0002edeb) popup_fixed_preview_cale_window_t2

0x7606,	// (0x0002ee00) popup_fixed_preview_cale_window_t3_ParamLimits

0x7606,	// (0x0002ee00) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x00036f12) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x00036f12) popup_fixed_preview_cale_window_t

0x761d,	// (0x0002ee17) list_single_fp_cale_pane_ParamLimits

0x761d,	// (0x0002ee17) list_single_fp_cale_pane

0xbd58,	// (0x00033552) list_single_fp_cale_pane_g1_ParamLimits

0xbd58,	// (0x00033552) list_single_fp_cale_pane_g1

0xbd64,	// (0x0003355e) list_single_fp_cale_pane_g2_ParamLimits

0xbd64,	// (0x0003355e) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x00036f19) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x00036f19) list_single_fp_cale_pane_g

0xbd7d,	// (0x00033577) list_single_fp_cale_pane_t1_ParamLimits

0xbd7d,	// (0x00033577) list_single_fp_cale_pane_t1

0xbd8f,	// (0x00033589) list_single_fp_cale_pane_t2_ParamLimits

0xbd8f,	// (0x00033589) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x00036f20) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x00036f20) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb756,	// (0x00032f50) main_dialer_pane

0xe7c9,	// (0x00035fc3) aid_cell_size_keypad

0xe7c9,	// (0x00035fc3) dialer_ne_pane

0xe7c9,	// (0x00035fc3) grid_dialer_command_1_pane

0xe7c9,	// (0x00035fc3) grid_dialer_command_2_pane

0xe7c9,	// (0x00035fc3) grid_dialer_keypad_pane

0x7635,	// (0x0002ee2f) bg_popup_call_pane_cp06_ParamLimits

0x7635,	// (0x0002ee2f) bg_popup_call_pane_cp06

0x7635,	// (0x0002ee2f) dialer_ne_clear_pane_ParamLimits

0x7635,	// (0x0002ee2f) dialer_ne_clear_pane

0x265d,	// (0x00029e57) dialer_ne_pane_g1

0x4651,	// (0x0002be4b) dialer_ne_pane_t1_ParamLimits

0x4651,	// (0x0002be4b) dialer_ne_pane_t1

0x7643,	// (0x0002ee3d) dialer_ne_pane_t2_ParamLimits

0x7643,	// (0x0002ee3d) dialer_ne_pane_t2

0x766b,	// (0x0002ee65) dialer_ne_pane_t3_ParamLimits

0x766b,	// (0x0002ee65) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x00036f25) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x00036f25) dialer_ne_pane_t

0x766b,	// (0x0002ee65) dialer_ne_pane_t3_copy1_ParamLimits

0x766b,	// (0x0002ee65) dialer_ne_pane_t3_copy1

0xbdc2,	// (0x000335bc) cell_dialer_keypad_pane_ParamLimits

0xbdc2,	// (0x000335bc) cell_dialer_keypad_pane

0xee98,	// (0x00036692) cell_dialer_command_1_pane_ParamLimits

0xee98,	// (0x00036692) cell_dialer_command_1_pane

0xbdd9,	// (0x000335d3) cell_dialer_command_2_pane_ParamLimits

0xbdd9,	// (0x000335d3) cell_dialer_command_2_pane

0xee98,	// (0x00036692) bg_button_pane_cp02_ParamLimits

0xee98,	// (0x00036692) bg_button_pane_cp02

0xeeff,	// (0x000366f9) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) cell_dialer_keypad_pane_g1

0xee98,	// (0x00036692) bg_button_pane_cp03_ParamLimits

0xee98,	// (0x00036692) bg_button_pane_cp03

0xeeff,	// (0x000366f9) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) cell_dialer_command_1_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp04

0x265d,	// (0x00029e57) cell_dialer_command_2_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp06

0x265d,	// (0x00029e57) dialer_ne_clear_pane_g1

0x4402,	// (0x0002bbfc) navi_pane_g2

0x4430,	// (0x0002bc2a) navi_pane_g3

0x0002,

0xf35a,	// (0x00036b54) navi_pane_g

0x44bf,	// (0x0002bcb9) navi_pane_mv_g2

0x44e6,	// (0x0002bce0) navi_pane_mv_g5

0x44ee,	// (0x0002bce8) navi_pane_mv_t1

0xef71,	// (0x0003676b) main_clock2_pane

0xee98,	// (0x00036692) main_clock2_list_pane_ParamLimits

0xee98,	// (0x00036692) main_clock2_list_pane

0x76fc,	// (0x0002eef6) main_clock2_pane_t1_ParamLimits

0x76fc,	// (0x0002eef6) main_clock2_pane_t1

0x7737,	// (0x0002ef31) main_clock2_pane_t2_ParamLimits

0x7737,	// (0x0002ef31) main_clock2_pane_t2

0x0004,

0xf737,	// (0x00036f31) main_clock2_pane_t_ParamLimits

0xf737,	// (0x00036f31) main_clock2_pane_t

0x77d6,	// (0x0002efd0) popup_clock_analogue_window_cp03_ParamLimits

0x77d6,	// (0x0002efd0) popup_clock_analogue_window_cp03

0x77fb,	// (0x0002eff5) popup_clock_digital_window_cp02_ParamLimits

0x77fb,	// (0x0002eff5) popup_clock_digital_window_cp02

0x783f,	// (0x0002f039) main_clock2_list_single_pane_ParamLimits

0x783f,	// (0x0002f039) main_clock2_list_single_pane

0x246c,	// (0x00029c66) list_highlight_pane_cp05

0xbe1a,	// (0x00033614) main_clock2_list_single_pane_t1

0x2863,	// (0x0002a05d) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x00036707) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x00036707) camera2_autofocus_pane_g2

0xef0d,	// (0x00036707) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x00036707) camera2_autofocus_pane_g3

0xef0d,	// (0x00036707) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x00036707) camera2_autofocus_pane_g4

0xef0d,	// (0x00036707) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x00036707) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x00036e75) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x00036e75) camera2_autofocus_pane_g

0x6eee,	// (0x0002e6e8) camera2_autofocus_pane_cp_g2

0x6ef6,	// (0x0002e6f0) camera2_autofocus_pane_cp_g3

0x6efe,	// (0x0002e6f8) camera2_autofocus_pane_cp_g4

0x6f06,	// (0x0002e700) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x00036edb) camera2_autofocus_pane_cp_g

0xe7c9,	// (0x00035fc3) popup_dialer_spcha_window

0xe7c9,	// (0x00035fc3) bg_popup_sub_pane_cp07

0xe7c9,	// (0x00035fc3) list_spcha_pane

0xbe28,	// (0x00033622) list_single_spcha_pane_ParamLimits

0xbe28,	// (0x00033622) list_single_spcha_pane

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp06

0x3da7,	// (0x0002b5a1) list_single_spcha_pane_t1

0x5d9b,	// (0x0002d595) popup_call2_audio_out_window_g4_ParamLimits

0x5d9b,	// (0x0002d595) popup_call2_audio_out_window_g4

0xb756,	// (0x00032f50) main_imed2_pane

0xb913,	// (0x0003310d) popup_imed_adjust2_window

0x0d1f,	// (0x00028519) popup_imed_trans_window_ParamLimits

0x0d1f,	// (0x00028519) popup_imed_trans_window

0x6b21,	// (0x0002e31b) popup_blid_sat_info2_window_t1

0x6b2f,	// (0x0002e329) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x00036e0a) popup_blid_sat_info2_window_t

0x7851,	// (0x0002f04b) aid_size_cell_colour_35

0x7871,	// (0x0002f06b) aid_size_cell_colour_112

0x7891,	// (0x0002f08b) aid_size_cell_effect

0x4665,	// (0x0002be5f) bg_tb_trans_pane_cp02

0x3c59,	// (0x0002b453) heading_imed_pane

0x78b1,	// (0x0002f0ab) listscroll_imed_pane

0xbe3a,	// (0x00033634) heading_imed_pane_g1

0xbe42,	// (0x0003363c) heading_imed_pane_t1

0xbe50,	// (0x0003364a) grid_imed_colour_35_pane_ParamLimits

0xbe50,	// (0x0003364a) grid_imed_colour_35_pane

0x78bd,	// (0x0002f0b7) grid_imed_effect_pane

0xbe6c,	// (0x00033666) list_imed_aspect_pane

0x78d4,	// (0x0002f0ce) scroll_pane_cp027_ParamLimits

0x78d4,	// (0x0002f0ce) scroll_pane_cp027

0x78e5,	// (0x0002f0df) cell_imed_effect_pane_ParamLimits

0x78e5,	// (0x0002f0df) cell_imed_effect_pane

0xbe74,	// (0x0003366e) cell_imed_colour_pane_ParamLimits

0xbe74,	// (0x0003366e) cell_imed_colour_pane

0xbebe,	// (0x000336b8) cell_imed_colour_pane_g1_ParamLimits

0xbebe,	// (0x000336b8) cell_imed_colour_pane_g1

0xbecf,	// (0x000336c9) hgihlgiht_grid_pane_cp016_ParamLimits

0xbecf,	// (0x000336c9) hgihlgiht_grid_pane_cp016

0x7910,	// (0x0002f10a) cell_imed_effect_pane_g1

0x7918,	// (0x0002f112) grid_highlight_pane_cp017

0xbee0,	// (0x000336da) list_imed_single_pane_ParamLimits

0xbee0,	// (0x000336da) list_imed_single_pane

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp07

0xbef4,	// (0x000336ee) list_imed_aspect_pane_comp1_t1

0x4665,	// (0x0002be5f) bg_tb_trans_pane_cp05

0xbf16,	// (0x00033710) popup_imed_adjust2_window_g1

0xbf3d,	// (0x00033737) popup_imed_adjust2_window_t1

0xbf55,	// (0x0003374f) slider_imed_adjust_pane

0xbf69,	// (0x00033763) slider_imed_adjust_pane_g1

0xbf79,	// (0x00033773) slider_imed_adjust_pane_g2

0xbf89,	// (0x00033783) slider_imed_adjust_pane_g3

0xbf9a,	// (0x00033794) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x00036f4e) slider_imed_adjust_pane_g

0x7921,	// (0x0002f11b) aid_size_cell_clipart2

0xbfab,	// (0x000337a5) grid_imed_clipart_pane

0xbfb5,	// (0x000337af) scroll_pane_cp031

0x792d,	// (0x0002f127) cell_imed_clipart_pane_ParamLimits

0x792d,	// (0x0002f127) cell_imed_clipart_pane

0x794a,	// (0x0002f144) cell_imed_clipart_pane_g1

0xe7c9,	// (0x00035fc3) grid_highlight_pane_cp014

0x76da,	// (0x0002eed4) main_clock2_pane_g1_ParamLimits

0x76da,	// (0x0002eed4) main_clock2_pane_g1

0x781b,	// (0x0002f015) aid_call2_pane_cp10

0x782d,	// (0x0002f027) aid_call_pane_cp10

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g1

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g2

0x0f12,	// (0x0002870c) popup_clock_analogue_window_cp10_g3

0x0f12,	// (0x0002870c) popup_clock_analogue_window_cp10_g4

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x00036f3c) popup_clock_analogue_window_cp10_g

0x0f28,	// (0x00028722) popup_clock_analogue_window_cp10_t1

0x0f47,	// (0x00028741) clock_digital_number_pane_cp10_ParamLimits

0x0f47,	// (0x00028741) clock_digital_number_pane_cp10

0x0f61,	// (0x0002875b) clock_digital_number_pane_cp11_ParamLimits

0x0f61,	// (0x0002875b) clock_digital_number_pane_cp11

0x0f7b,	// (0x00028775) clock_digital_number_pane_cp12_ParamLimits

0x0f7b,	// (0x00028775) clock_digital_number_pane_cp12

0x0f97,	// (0x00028791) clock_digital_number_pane_cp13_ParamLimits

0x0f97,	// (0x00028791) clock_digital_number_pane_cp13

0x0fb3,	// (0x000287ad) clock_digital_separator_pane_cp10_ParamLimits

0x0fb3,	// (0x000287ad) clock_digital_separator_pane_cp10

0x0fcf,	// (0x000287c9) popup_clock_digital_window_cp02_t1_ParamLimits

0x0fcf,	// (0x000287c9) popup_clock_digital_window_cp02_t1

0xee6e,	// (0x00036668) clock_digital_number_pane_cp10_g1

0xee6e,	// (0x00036668) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x00036f57) clock_digital_number_pane_cp10_g

0xee6e,	// (0x00036668) clock_digital_separator_pane_cp10_g1

0xee6e,	// (0x00036668) clock_digital_separator_pane_g2_cp10

0x4530,	// (0x0002bd2a) navi_pane_vded_g4

0x4539,	// (0x0002bd33) navi_pane_vded_g5

0x4542,	// (0x0002bd3c) navi_pane_vded_t1

0xb756,	// (0x00032f50) main_vded_pane

0x7953,	// (0x0002f14d) main_vded_pane_g1

0x795f,	// (0x0002f159) main_vded_pane_g2

0x796b,	// (0x0002f165) main_vded_pane_g3

0x0002,

0xf762,	// (0x00036f5c) main_vded_pane_g

0x7977,	// (0x0002f171) main_vded_pane_t1

0x7985,	// (0x0002f17f) main_vded_pane_t2

0x0001,

0xf769,	// (0x00036f63) main_vded_pane_t

0x7993,	// (0x0002f18d) vded_slider_pane

0x799d,	// (0x0002f197) vded_video_pane

0xbfbd,	// (0x000337b7) vded_video_pane_g1

0x79a9,	// (0x0002f1a3) vded_video_pane_g2

0x265d,	// (0x00029e57) vded_video_pane_g3

0x0002,

0xf76e,	// (0x00036f68) vded_video_pane_g

0xbfc7,	// (0x000337c1) vded_slider_pane_g1

0x6a0e,	// (0x0002e208) vded_slider_pane_g2

0xbfd0,	// (0x000337ca) vded_slider_pane_g3

0xbfd9,	// (0x000337d3) vded_slider_pane_g4

0xbfe2,	// (0x000337dc) vded_slider_pane_g5

0x0004,

0xf775,	// (0x00036f6f) vded_slider_pane_g

0x753b,	// (0x0002ed35) mup3_rocker_pane_ParamLimits

0x753b,	// (0x0002ed35) mup3_rocker_pane

0x79b2,	// (0x0002f1ac) mup3_control_keys_pane_g1

0x79ba,	// (0x0002f1b4) mup3_control_keys_pane_g2

0x79c2,	// (0x0002f1bc) mup3_control_keys_pane_g3

0x79ca,	// (0x0002f1c4) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x00036f7a) mup3_control_keys_pane_g

0x08b1,	// (0x000280ab) popup_toolbar2_fixed_window_cp01_ParamLimits

0x08b1,	// (0x000280ab) popup_toolbar2_fixed_window_cp01

0x7571,	// (0x0002ed6b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7571,	// (0x0002ed6b) popup_toolbar2_fixed_window_cp02

0x56bc,	// (0x0002ceb6) popup_call2_audio_second_window_t4_ParamLimits

0x56bc,	// (0x0002ceb6) popup_call2_audio_second_window_t4

0x5c08,	// (0x0002d402) popup_call2_audio_first_window_t6_ParamLimits

0x5c08,	// (0x0002d402) popup_call2_audio_first_window_t6

0x5e9e,	// (0x0002d698) popup_call2_audio_out_window_t6_ParamLimits

0x5e9e,	// (0x0002d698) popup_call2_audio_out_window_t6

0xb756,	// (0x00032f50) main_vitu_pane

0xee98,	// (0x00036692) aid_size_cell_itu_ParamLimits

0xee98,	// (0x00036692) aid_size_cell_itu

0xee98,	// (0x00036692) bg_popup_window_pane_cp08_ParamLimits

0xee98,	// (0x00036692) bg_popup_window_pane_cp08

0xee98,	// (0x00036692) field_vitu_entry_pane_ParamLimits

0xee98,	// (0x00036692) field_vitu_entry_pane

0xee98,	// (0x00036692) grid_vitu_function_pane_ParamLimits

0xee98,	// (0x00036692) grid_vitu_function_pane

0xee98,	// (0x00036692) grid_vitu_itu_pane_ParamLimits

0xee98,	// (0x00036692) grid_vitu_itu_pane

0xee98,	// (0x00036692) cell_vitu_itu_pane_ParamLimits

0xee98,	// (0x00036692) cell_vitu_itu_pane

0xee98,	// (0x00036692) cell_vitu_function_pane_ParamLimits

0xee98,	// (0x00036692) cell_vitu_function_pane

0xee98,	// (0x00036692) bg_popup_sub_pane_cp08_ParamLimits

0xee98,	// (0x00036692) bg_popup_sub_pane_cp08

0x24d9,	// (0x00029cd3) field_vitu_entry_pane_t1_ParamLimits

0x24d9,	// (0x00029cd3) field_vitu_entry_pane_t1

0xbfeb,	// (0x000337e5) field_vitu_entry_pane_t2_ParamLimits

0xbfeb,	// (0x000337e5) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x00036f83) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x00036f83) field_vitu_entry_pane_t

0x6ac8,	// (0x0002e2c2) bg_button_pane_cp05_ParamLimits

0x6ac8,	// (0x0002e2c2) bg_button_pane_cp05

0xc008,	// (0x00033802) cell_vitu_itu_pane_g1

0x463d,	// (0x0002be37) cell_vitu_itu_pane_t1_ParamLimits

0x463d,	// (0x0002be37) cell_vitu_itu_pane_t1

0x463d,	// (0x0002be37) cell_vitu_itu_pane_t2_ParamLimits

0x463d,	// (0x0002be37) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x00036f88) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x00036f88) cell_vitu_itu_pane_t

0xe7c9,	// (0x00035fc3) bg_button_pane_cp07

0x265d,	// (0x00029e57) cell_vitu_function_pane_g1

0xb760,	// (0x00032f5a) main_calc_pane_g1

0x0712,	// (0x00027f0c) aid_visual_content_pane

0xb756,	// (0x00032f50) main_vradio_pane

0xeeff,	// (0x000366f9) main_vradio_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) main_vradio_pane_g1

0xef0d,	// (0x00036707) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x00036707) main_vradio_pane_g2

0x0001,

0xf795,	// (0x00036f8f) main_vradio_pane_g_ParamLimits

0xf795,	// (0x00036f8f) main_vradio_pane_g

0x24d9,	// (0x00029cd3) main_vradio_pane_t1_ParamLimits

0x24d9,	// (0x00029cd3) main_vradio_pane_t1

0x24d9,	// (0x00029cd3) main_vradio_pane_t2_ParamLimits

0x24d9,	// (0x00029cd3) main_vradio_pane_t2

0x4651,	// (0x0002be4b) main_vradio_pane_t3_ParamLimits

0x4651,	// (0x0002be4b) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x00036f94) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x00036f94) main_vradio_pane_t

0xee98,	// (0x00036692) vradio_rocker_control_pane_ParamLimits

0xee98,	// (0x00036692) vradio_rocker_control_pane

0xee98,	// (0x00036692) vradio_station_info_pane_ParamLimits

0xee98,	// (0x00036692) vradio_station_info_pane

0xee98,	// (0x00036692) vradio_frequency_info_pane_ParamLimits

0xee98,	// (0x00036692) vradio_frequency_info_pane

0x265d,	// (0x00029e57) vradio_station_info_pane_g1

0x463d,	// (0x0002be37) vradio_station_info_pane_t1_ParamLimits

0x463d,	// (0x0002be37) vradio_station_info_pane_t1

0x4651,	// (0x0002be4b) vradio_station_info_pane_t2_ParamLimits

0x4651,	// (0x0002be4b) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x00036f9b) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x00036f9b) vradio_station_info_pane_t

0xe7c9,	// (0x00035fc3) vradio_tuning_pane

0x79da,	// (0x0002f1d4) vradio_rocker_control_pane_g1

0xc024,	// (0x0003381e) vradio_rocker_control_pane_g2

0x79e4,	// (0x0002f1de) vradio_rocker_control_pane_g3

0x79ee,	// (0x0002f1e8) vradio_rocker_control_pane_g4

0x79f8,	// (0x0002f1f2) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x00036fa0) vradio_rocker_control_pane_g

0x265d,	// (0x00029e57) vradio_frequency_info_pane_g1

0x24d9,	// (0x00029cd3) vradio_frequency_info_pane_t1_ParamLimits

0x24d9,	// (0x00029cd3) vradio_frequency_info_pane_t1

0x7a02,	// (0x0002f1fc) vradio_tuning_pane_g1

0x7a0d,	// (0x0002f207) vradio_tuning_pane_t1

0xb701,	// (0x00032efb) area_side_right_pane_ParamLimits

0xb701,	// (0x00032efb) area_side_right_pane

0x6576,	// (0x0002dd70) status_small_pane_g1

0x657e,	// (0x0002dd78) status_small_pane_g2

0x6587,	// (0x0002dd81) status_small_pane_g3

0x6590,	// (0x0002dd8a) status_small_pane_g4

0x0003,

0xf572,	// (0x00036d6c) status_small_pane_g

0x6599,	// (0x0002dd93) status_small_pane_t1

0xb756,	// (0x00032f50) main_video3_pane

0xc02c,	// (0x00033826) cams_zoom_vslider_pane

0xc034,	// (0x0003382e) image3_wide_pane_ParamLimits

0xc034,	// (0x0003382e) image3_wide_pane

0xc04e,	// (0x00033848) image3_wide_small_pane

0xc05a,	// (0x00033854) main_video3_pane_g1_ParamLimits

0xc05a,	// (0x00033854) main_video3_pane_g1

0xc076,	// (0x00033870) main_video3_pane_g2_ParamLimits

0xc076,	// (0x00033870) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x00036fab) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x00036fab) main_video3_pane_g

0xc092,	// (0x0003388c) main_video3_pane_t1_ParamLimits

0xc092,	// (0x0003388c) main_video3_pane_t1

0xc0bd,	// (0x000338b7) main_video3_pane_t2_ParamLimits

0xc0bd,	// (0x000338b7) main_video3_pane_t2

0xc0ea,	// (0x000338e4) main_video3_pane_t3_ParamLimits

0xc0ea,	// (0x000338e4) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x00036fb0) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x00036fb0) main_video3_pane_t

0xc117,	// (0x00033911) cams_zoom_vslider_pane_g1

0xc120,	// (0x0003391a) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x00036fb7) cams_zoom_vslider_pane_g

0xc128,	// (0x00033922) small_slider_vertical_pane

0x265d,	// (0x00029e57) small_slider_vertical_pane_g1

0x265d,	// (0x00029e57) small_slider_vertical_pane_g2

0xc130,	// (0x0003392a) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x00036fbc) small_slider_vertical_pane_g

0xb756,	// (0x00032f50) main_hwr_training_pane

0xc139,	// (0x00033933) hwr_training_instruct_pane_ParamLimits

0xc139,	// (0x00033933) hwr_training_instruct_pane

0x7a1c,	// (0x0002f216) hwr_training_navi_pane_ParamLimits

0x7a1c,	// (0x0002f216) hwr_training_navi_pane

0x7a3b,	// (0x0002f235) hwr_training_write_pane_ParamLimits

0x7a3b,	// (0x0002f235) hwr_training_write_pane

0xe7c9,	// (0x00035fc3) bg_frame_shadow_pane

0xc170,	// (0x0003396a) hwr_training_write_pane_g1

0xc178,	// (0x00033972) hwr_training_write_pane_g2

0xc180,	// (0x0003397a) hwr_training_write_pane_g3

0xc188,	// (0x00033982) hwr_training_write_pane_g4

0xc190,	// (0x0003398a) hwr_training_write_pane_g5

0xc198,	// (0x00033992) hwr_training_write_pane_g6

0xc1a0,	// (0x0003399a) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x00036fc3) hwr_training_write_pane_g

0xc1a8,	// (0x000339a2) hwr_training_navi_pane_g1_ParamLimits

0xc1a8,	// (0x000339a2) hwr_training_navi_pane_g1

0xc1ba,	// (0x000339b4) hwr_training_navi_pane_g2_ParamLimits

0xc1ba,	// (0x000339b4) hwr_training_navi_pane_g2

0xc1cc,	// (0x000339c6) hwr_training_navi_pane_g3_ParamLimits

0xc1cc,	// (0x000339c6) hwr_training_navi_pane_g3

0xc1dc,	// (0x000339d6) hwr_training_navi_pane_g4_ParamLimits

0xc1dc,	// (0x000339d6) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x00036fd2) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x00036fd2) hwr_training_navi_pane_g

0xc1e9,	// (0x000339e3) hwr_training_navi_pane_t1

0x7a76,	// (0x0002f270) list_single_hwr_training_instruct_pane_ParamLimits

0x7a76,	// (0x0002f270) list_single_hwr_training_instruct_pane

0xc1f7,	// (0x000339f1) list_single_hwr_training_instruct_pane_t1

0x6c28,	// (0x0002e422) bg_frame_shadow_pane_g1

0xc206,	// (0x00033a00) bg_frame_shadow_pane_g2

0xc20e,	// (0x00033a08) bg_frame_shadow_pane_g3

0xc216,	// (0x00033a10) bg_frame_shadow_pane_g4

0xc21e,	// (0x00033a18) bg_frame_shadow_pane_g5

0xc226,	// (0x00033a20) bg_frame_shadow_pane_g6

0xc22e,	// (0x00033a28) bg_frame_shadow_pane_g7

0xf029,	// (0x00036823) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x00036fdd) bg_frame_shadow_pane_g

0xb756,	// (0x00032f50) main_video_tele_dialer_pane

0x0ffd,	// (0x000287f7) aid_size_cell_video_keypad_ParamLimits

0x0ffd,	// (0x000287f7) aid_size_cell_video_keypad

0x1017,	// (0x00028811) grid_video_dialer_keypad_pane_ParamLimits

0x1017,	// (0x00028811) grid_video_dialer_keypad_pane

0x1063,	// (0x0002885d) video_down_pane_cp_ParamLimits

0x1063,	// (0x0002885d) video_down_pane_cp

0x1079,	// (0x00028873) cell_video_dialer_keypad_pane_ParamLimits

0x1079,	// (0x00028873) cell_video_dialer_keypad_pane

0xc236,	// (0x00033a30) bg_button_pane_cp08_ParamLimits

0xc236,	// (0x00033a30) bg_button_pane_cp08

0x7aae,	// (0x0002f2a8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7aae,	// (0x0002f2a8) cell_video_dialer_keypad_pane_g1

0x7525,	// (0x0002ed1f) mup3_rocker2_pane_ParamLimits

0x7525,	// (0x0002ed1f) mup3_rocker2_pane

0x265d,	// (0x00029e57) mup3_rocker2_pane_g1

0x0bec,	// (0x000283e6) main_dialer2_pane

0xb756,	// (0x00032f50) main_mp4_pane

0xc260,	// (0x00033a5a) main_mp4_pane_g1_ParamLimits

0xc260,	// (0x00033a5a) main_mp4_pane_g1

0xc260,	// (0x00033a5a) main_mp4_pane_g2_ParamLimits

0xc260,	// (0x00033a5a) main_mp4_pane_g2

0x109f,	// (0x00028899) main_mp4_pane_g3_ParamLimits

0x109f,	// (0x00028899) main_mp4_pane_g3

0xc26e,	// (0x00033a68) main_mp4_pane_g4_ParamLimits

0xc26e,	// (0x00033a68) main_mp4_pane_g4

0xc29c,	// (0x00033a96) main_mp4_pane_g5_ParamLimits

0xc29c,	// (0x00033a96) main_mp4_pane_g5

0x0007,

0xf803,	// (0x00036ffd) main_mp4_pane_g_ParamLimits

0xf803,	// (0x00036ffd) main_mp4_pane_g

0xc310,	// (0x00033b0a) main_mp4_pane_t1_ParamLimits

0xc310,	// (0x00033b0a) main_mp4_pane_t1

0xc36c,	// (0x00033b66) main_mp4_pane_t2_ParamLimits

0xc36c,	// (0x00033b66) main_mp4_pane_t2

0xc3be,	// (0x00033bb8) main_mp4_pane_t3_ParamLimits

0xc3be,	// (0x00033bb8) main_mp4_pane_t3

0xc3e4,	// (0x00033bde) main_mp4_pane_t4_ParamLimits

0xc3e4,	// (0x00033bde) main_mp4_pane_t4

0x0003,

0xf814,	// (0x0003700e) main_mp4_pane_t_ParamLimits

0xf814,	// (0x0003700e) main_mp4_pane_t

0xc424,	// (0x00033c1e) mp4_progress_pane_ParamLimits

0xc424,	// (0x00033c1e) mp4_progress_pane

0xc46e,	// (0x00033c68) mp4_rocker_pane_ParamLimits

0xc46e,	// (0x00033c68) mp4_rocker_pane

0xc496,	// (0x00033c90) mp4_progress_pane_t1

0xc4af,	// (0x00033ca9) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x00037017) mp4_progress_pane_t

0xc4c8,	// (0x00033cc2) mup_progress_pane_cp04

0xb9fb,	// (0x000331f5) mp4_rocker_pane_g1

0x10e9,	// (0x000288e3) aid_cell_size_keypad2_ParamLimits

0x10e9,	// (0x000288e3) aid_cell_size_keypad2

0x10ff,	// (0x000288f9) dialer2_ne_pane_ParamLimits

0x10ff,	// (0x000288f9) dialer2_ne_pane

0x1117,	// (0x00028911) grid_dialer2_keypad_pane_ParamLimits

0x1117,	// (0x00028911) grid_dialer2_keypad_pane

0x6ac8,	// (0x0002e2c2) bg_popup_call_pane_cp07_ParamLimits

0x6ac8,	// (0x0002e2c2) bg_popup_call_pane_cp07

0x7ae9,	// (0x0002f2e3) dialer2_ne_pane_t1_ParamLimits

0x7ae9,	// (0x0002f2e3) dialer2_ne_pane_t1

0x1133,	// (0x0002892d) cell_dialer2_keypad_pane_ParamLimits

0x1133,	// (0x0002892d) cell_dialer2_keypad_pane

0xc4ed,	// (0x00033ce7) bg_button_pane_pane_cp04_ParamLimits

0xc4ed,	// (0x00033ce7) bg_button_pane_pane_cp04

0x7b29,	// (0x0002f323) cell_dialer2_keypad_pane_g1_ParamLimits

0x7b29,	// (0x0002f323) cell_dialer2_keypad_pane_g1

0x2738,	// (0x00029f32) aid_placing_vt_set_content_ParamLimits

0x2738,	// (0x00029f32) aid_placing_vt_set_content

0x275c,	// (0x00029f56) aid_placing_vt_set_title_ParamLimits

0x275c,	// (0x00029f56) aid_placing_vt_set_title

0xb756,	// (0x00032f50) main_image3_pane

0x11b7,	// (0x000289b1) area_side_right_pane_cp01_ParamLimits

0x11b7,	// (0x000289b1) area_side_right_pane_cp01

0xc260,	// (0x00033a5a) main_image3_pane_g1_ParamLimits

0xc260,	// (0x00033a5a) main_image3_pane_g1

0x11d0,	// (0x000289ca) main_image3_pane_g2_ParamLimits

0x11d0,	// (0x000289ca) main_image3_pane_g2

0x11f8,	// (0x000289f2) main_image3_pane_g3_ParamLimits

0x11f8,	// (0x000289f2) main_image3_pane_g3

0x1222,	// (0x00028a1c) main_image3_pane_g4_ParamLimits

0x1222,	// (0x00028a1c) main_image3_pane_g4

0x0003,

0xf82c,	// (0x00037026) main_image3_pane_g_ParamLimits

0xf82c,	// (0x00037026) main_image3_pane_g

0x124c,	// (0x00028a46) main_image3_pane_t1_ParamLimits

0x124c,	// (0x00028a46) main_image3_pane_t1

0x12a4,	// (0x00028a9e) main_image3_pane_t2_ParamLimits

0x12a4,	// (0x00028a9e) main_image3_pane_t2

0x12f6,	// (0x00028af0) main_image3_pane_t3_ParamLimits

0x12f6,	// (0x00028af0) main_image3_pane_t3

0x0003,

0xf835,	// (0x0003702f) main_image3_pane_t_ParamLimits

0xf835,	// (0x0003702f) main_image3_pane_t

0xee98,	// (0x00036692) grid_sctrl_middle_pane_cp01_ParamLimits

0xee98,	// (0x00036692) grid_sctrl_middle_pane_cp01

0x7b91,	// (0x0002f38b) cell_sctrl_middle_pane_cp01_ParamLimits

0x7b91,	// (0x0002f38b) cell_sctrl_middle_pane_cp01

0x7bae,	// (0x0002f3a8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7bae,	// (0x0002f3a8) cell_sctrl_middle_pane_cp01_g1

0xb756,	// (0x00032f50) main_call4_pane

0x137e,	// (0x00028b78) aid_size_button_call4_ParamLimits

0x137e,	// (0x00028b78) aid_size_button_call4

0x13b1,	// (0x00028bab) call4_windows_pane_ParamLimits

0x13b1,	// (0x00028bab) call4_windows_pane

0x13d0,	// (0x00028bca) grid_call4_button_pane_ParamLimits

0x13d0,	// (0x00028bca) grid_call4_button_pane

0x7bcf,	// (0x0002f3c9) call4_windows_conf_pane

0x7be8,	// (0x0002f3e2) popup_call4_audio_first_window_ParamLimits

0x7be8,	// (0x0002f3e2) popup_call4_audio_first_window

0x7c38,	// (0x0002f432) popup_call4_audio_second_window_ParamLimits

0x7c38,	// (0x0002f432) popup_call4_audio_second_window

0x7c51,	// (0x0002f44b) popup_call4_audio_wait_window_ParamLimits

0x7c51,	// (0x0002f44b) popup_call4_audio_wait_window

0x13fb,	// (0x00028bf5) cell_call4_button_pane_ParamLimits

0x13fb,	// (0x00028bf5) cell_call4_button_pane

0x7c5f,	// (0x0002f459) bg_button_pane_cp09_ParamLimits

0x7c5f,	// (0x0002f459) bg_button_pane_cp09

0x1422,	// (0x00028c1c) cell_call4_button_pane_g1_ParamLimits

0x1422,	// (0x00028c1c) cell_call4_button_pane_g1

0x1448,	// (0x00028c42) cell_call4_button_pane_t1_ParamLimits

0x1448,	// (0x00028c42) cell_call4_button_pane_t1

0xc567,	// (0x00033d61) popup_call4_audio_conf_window_ParamLimits

0xc567,	// (0x00033d61) popup_call4_audio_conf_window

0x7587,	// (0x0002ed81) mup3_progress_pane_t1_ParamLimits

0x75a6,	// (0x0002eda0) mup3_progress_pane_t2_ParamLimits

0xbceb,	// (0x000334e5) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x00036f04) mup3_progress_pane_t_ParamLimits

0xbd08,	// (0x00033502) mup_progress_pane_cp03_ParamLimits

0x79d2,	// (0x0002f1cc) mup3_control_keys_pane_g4_copy1

0xc452,	// (0x00033c4c) mp4_rocker2_pane_ParamLimits

0xc452,	// (0x00033c4c) mp4_rocker2_pane

0xc581,	// (0x00033d7b) mp4_rocker2_pane_g1

0xc589,	// (0x00033d83) mp4_rocker2_pane_g2

0xc591,	// (0x00033d8b) mp4_rocker2_pane_g3

0xc599,	// (0x00033d93) mp4_rocker2_pane_g4

0xc5a1,	// (0x00033d9b) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x00037038) mp4_rocker2_pane_g

0xb756,	// (0x00032f50) main_camera4_pane

0xb756,	// (0x00032f50) main_video4_pane

0x1031,	// (0x0002882b) main_video_tele_dialer_pane_t1_ParamLimits

0x1031,	// (0x0002882b) main_video_tele_dialer_pane_t1

0x104a,	// (0x00028844) main_video_tele_dialer_pane_t2_ParamLimits

0x104a,	// (0x00028844) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x00036fee) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x00036fee) main_video_tele_dialer_pane_t

0x1486,	// (0x00028c80) cam4_autofocus_pane_ParamLimits

0x1486,	// (0x00028c80) cam4_autofocus_pane

0x149c,	// (0x00028c96) cam4_image_uncrop_pane_ParamLimits

0x149c,	// (0x00028c96) cam4_image_uncrop_pane

0x14b5,	// (0x00028caf) cam4_indicators_pane_ParamLimits

0x14b5,	// (0x00028caf) cam4_indicators_pane

0x14e5,	// (0x00028cdf) main_camera4_pane_g1_ParamLimits

0x14e5,	// (0x00028cdf) main_camera4_pane_g1

0x14f7,	// (0x00028cf1) main_camera4_pane_g2_ParamLimits

0x14f7,	// (0x00028cf1) main_camera4_pane_g2

0x150a,	// (0x00028d04) main_camera4_pane_g3_ParamLimits

0x150a,	// (0x00028d04) main_camera4_pane_g3

0x151d,	// (0x00028d17) main_camera4_pane_g4_ParamLimits

0x151d,	// (0x00028d17) main_camera4_pane_g4

0x1530,	// (0x00028d2a) main_camera4_pane_g5_ParamLimits

0x1530,	// (0x00028d2a) main_camera4_pane_g5

0x0005,

0xf849,	// (0x00037043) main_camera4_pane_g_ParamLimits

0xf849,	// (0x00037043) main_camera4_pane_g

0x1554,	// (0x00028d4e) main_camera4_pane_t1_ParamLimits

0x1554,	// (0x00028d4e) main_camera4_pane_t1

0xc5db,	// (0x00033dd5) bg_tb_trans_pane_cp06

0xc5f1,	// (0x00033deb) cam4_indicators_pane_g1

0xc602,	// (0x00033dfc) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x0003705e) cam4_indicators_pane_g

0xc61a,	// (0x00033e14) cam4_indicators_pane_t1

0x15a4,	// (0x00028d9e) main_video4_pane_g1_ParamLimits

0x15a4,	// (0x00028d9e) main_video4_pane_g1

0x15b3,	// (0x00028dad) main_video4_pane_g2_ParamLimits

0x15b3,	// (0x00028dad) main_video4_pane_g2

0x15c3,	// (0x00028dbd) main_video4_pane_g3_ParamLimits

0x15c3,	// (0x00028dbd) main_video4_pane_g3

0x15d3,	// (0x00028dcd) main_video4_pane_g4_ParamLimits

0x15d3,	// (0x00028dcd) main_video4_pane_g4

0x0004,

0xf86b,	// (0x00037065) main_video4_pane_g_ParamLimits

0xf86b,	// (0x00037065) main_video4_pane_g

0x15f3,	// (0x00028ded) vid4_indicators_pane_ParamLimits

0x15f3,	// (0x00028ded) vid4_indicators_pane

0x161d,	// (0x00028e17) video4_image_uncrop_cif_pane_ParamLimits

0x161d,	// (0x00028e17) video4_image_uncrop_cif_pane

0x1637,	// (0x00028e31) video4_image_uncrop_nhd_pane_ParamLimits

0x1637,	// (0x00028e31) video4_image_uncrop_nhd_pane

0x149c,	// (0x00028c96) video4_image_uncrop_vga_pane_ParamLimits

0x149c,	// (0x00028c96) video4_image_uncrop_vga_pane

0xb748,	// (0x00032f42) bg_tb_trans_pane_cp07

0xc648,	// (0x00033e42) vid4_indicators_pane_g1

0xc65e,	// (0x00033e58) vid4_indicators_pane_g2

0xc672,	// (0x00033e6c) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x00037070) vid4_indicators_pane_g

0xc6a3,	// (0x00033e9d) vid4_indicators_pane_t1

0x7c7f,	// (0x0002f479) cam4_autofocus_pane_g1

0x7c87,	// (0x0002f481) cam4_autofocus_pane_g2

0x7c8f,	// (0x0002f489) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x0003707b) cam4_autofocus_pane_g

0x7c97,	// (0x0002f491) cam4_autofocus_pane_g3_copy1

0x7a92,	// (0x0002f28c) video_down_pane_cp_t1

0x7aa0,	// (0x0002f29a) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x00036ff3) video_down_pane_cp_t

0xb748,	// (0x00032f42) popup_vitu2_window_ParamLimits

0xb748,	// (0x00032f42) popup_vitu2_window

0x164e,	// (0x00028e48) aid_size_cell2_itu2_ParamLimits

0x164e,	// (0x00028e48) aid_size_cell2_itu2

0x1674,	// (0x00028e6e) aid_size_cell_itu2_ParamLimits

0x1674,	// (0x00028e6e) aid_size_cell_itu2

0x16d2,	// (0x00028ecc) bg_popup_window_pane_cp09_ParamLimits

0x16d2,	// (0x00028ecc) bg_popup_window_pane_cp09

0x16e0,	// (0x00028eda) field_vitu2_entry_pane_ParamLimits

0x16e0,	// (0x00028eda) field_vitu2_entry_pane

0x1708,	// (0x00028f02) grid_vitu2_function_pane_ParamLimits

0x1708,	// (0x00028f02) grid_vitu2_function_pane

0x1759,	// (0x00028f53) grid_vitu2_itu_pane_ParamLimits

0x1759,	// (0x00028f53) grid_vitu2_itu_pane

0x17e9,	// (0x00028fe3) cell_vitu2_itu_pane_ParamLimits

0x17e9,	// (0x00028fe3) cell_vitu2_itu_pane

0x1817,	// (0x00029011) cell_vitu2_function_pane_ParamLimits

0x1817,	// (0x00029011) cell_vitu2_function_pane

0xc6ba,	// (0x00033eb4) bg_popup_call_pane_cp08_ParamLimits

0xc6ba,	// (0x00033eb4) bg_popup_call_pane_cp08

0xc6d1,	// (0x00033ecb) field_vitu2_entry_pane_g1

0xc6dd,	// (0x00033ed7) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x00037082) field_vitu2_entry_pane_g

0xc6e9,	// (0x00033ee3) field_vitu2_entry_pane_t1_ParamLimits

0xc6e9,	// (0x00033ee3) field_vitu2_entry_pane_t1

0xc718,	// (0x00033f12) field_vitu2_entry_pane_t2_ParamLimits

0xc718,	// (0x00033f12) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x00037089) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x00037089) field_vitu2_entry_pane_t

0x185b,	// (0x00029055) bg_button_pane_cp010_ParamLimits

0x185b,	// (0x00029055) bg_button_pane_cp010

0x1869,	// (0x00029063) cell_vitu2_itu_pane_g1

0x188f,	// (0x00029089) cell_vitu2_itu_pane_t1_ParamLimits

0x188f,	// (0x00029089) cell_vitu2_itu_pane_t1

0x18ed,	// (0x000290e7) cell_vitu2_itu_pane_t2_ParamLimits

0x18ed,	// (0x000290e7) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x00037093) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x00037093) cell_vitu2_itu_pane_t

0xb748,	// (0x00032f42) bg_button_pane_cp011

0x19d9,	// (0x000291d3) cell_vitu2_function_pane_g1

0xb756,	// (0x00032f50) main_myfav_hc_pane

0x1346,	// (0x00028b40) popup_image3_note_pane_ParamLimits

0x1346,	// (0x00028b40) popup_image3_note_pane

0x1362,	// (0x00028b5c) popup_image3_tool_bar_pane_ParamLimits

0x1362,	// (0x00028b5c) popup_image3_tool_bar_pane

0x197b,	// (0x00029175) cell_vitu2_itu_pane_t3_ParamLimits

0x197b,	// (0x00029175) cell_vitu2_itu_pane_t3

0xe7c9,	// (0x00035fc3) bg_popup_trans_pane

0xc73d,	// (0x00033f37) grid_image3_tool_bar_pane

0xc747,	// (0x00033f41) bg_popup_trans_pane_g1

0x2d33,	// (0x0002a52d) bg_popup_trans_pane_g2

0xc74f,	// (0x00033f49) bg_popup_trans_pane_g3

0xc757,	// (0x00033f51) bg_popup_trans_pane_g4

0xc75f,	// (0x00033f59) bg_popup_trans_pane_g5

0xc767,	// (0x00033f61) bg_popup_trans_pane_g6

0xc76f,	// (0x00033f69) bg_popup_trans_pane_g7

0xc777,	// (0x00033f71) bg_popup_trans_pane_g8

0x2d13,	// (0x0002a50d) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x0003709a) bg_popup_trans_pane_g

0xc77f,	// (0x00033f79) cell_image3_tool_bar_pane_ParamLimits

0xc77f,	// (0x00033f79) cell_image3_tool_bar_pane

0x265d,	// (0x00029e57) cell_image3_tool_bar_pane_g1

0xe7c9,	// (0x00035fc3) bg_popup_trans_pane_cp1

0xc795,	// (0x00033f8f) popup_image3_note_pane_t1

0xc7a3,	// (0x00033f9d) popup_image3_note_pane_t2

0xc7b1,	// (0x00033fab) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x000370ad) popup_image3_note_pane_t

0xc7c1,	// (0x00033fbb) popup_image3_note_pane_t3_copy1

0x7c9f,	// (0x0002f499) bg_myfav_hc_instruction_pane_ParamLimits

0x7c9f,	// (0x0002f499) bg_myfav_hc_instruction_pane

0x7cb7,	// (0x0002f4b1) cell_myfav_contact_pane_ParamLimits

0x7cb7,	// (0x0002f4b1) cell_myfav_contact_pane

0x7cd3,	// (0x0002f4cd) cell_myfav_contact_pane_cp1_ParamLimits

0x7cd3,	// (0x0002f4cd) cell_myfav_contact_pane_cp1

0x7ceb,	// (0x0002f4e5) cell_myfav_contact_pane_cp2_ParamLimits

0x7ceb,	// (0x0002f4e5) cell_myfav_contact_pane_cp2

0x7d03,	// (0x0002f4fd) cell_myfav_contact_pane_cp3_ParamLimits

0x7d03,	// (0x0002f4fd) cell_myfav_contact_pane_cp3

0x7d1a,	// (0x0002f514) cell_myfav_contact_pane_cp4_ParamLimits

0x7d1a,	// (0x0002f514) cell_myfav_contact_pane_cp4

0x7d32,	// (0x0002f52c) cell_myfav_contact_pane_cp5_ParamLimits

0x7d32,	// (0x0002f52c) cell_myfav_contact_pane_cp5

0x7d46,	// (0x0002f540) cell_myfav_contact_pane_cp6_ParamLimits

0x7d46,	// (0x0002f540) cell_myfav_contact_pane_cp6

0x7d5c,	// (0x0002f556) cell_myfav_contact_pane_cp7_ParamLimits

0x7d5c,	// (0x0002f556) cell_myfav_contact_pane_cp7

0xc7cf,	// (0x00033fc9) listscroll_gen_pane_cp05

0x7d74,	// (0x0002f56e) main_myfav_hc_pane_g1_ParamLimits

0x7d74,	// (0x0002f56e) main_myfav_hc_pane_g1

0x7d8e,	// (0x0002f588) main_myfav_hc_pane_g2_ParamLimits

0x7d8e,	// (0x0002f588) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x000370b4) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x000370b4) main_myfav_hc_pane_g

0x7dc2,	// (0x0002f5bc) main_myfav_hc_pane_t1_ParamLimits

0x7dc2,	// (0x0002f5bc) main_myfav_hc_pane_t1

0xc7d8,	// (0x00033fd2) main_myfav_hc_pane_t2_ParamLimits

0xc7d8,	// (0x00033fd2) main_myfav_hc_pane_t2

0xc7ea,	// (0x00033fe4) main_myfav_hc_pane_t3_ParamLimits

0xc7ea,	// (0x00033fe4) main_myfav_hc_pane_t3

0x7dd9,	// (0x0002f5d3) main_myfav_hc_pane_t4_ParamLimits

0x7dd9,	// (0x0002f5d3) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x000370bb) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x000370bb) main_myfav_hc_pane_t

0x265d,	// (0x00029e57) bg_myfav_hc_instruction_pane_g1

0xc7fc,	// (0x00033ff6) cell_myfav_contact_pane_g1_ParamLimits

0xc7fc,	// (0x00033ff6) cell_myfav_contact_pane_g1

0xc7fc,	// (0x00033ff6) cell_myfav_contact_pane_g2_ParamLimits

0xc7fc,	// (0x00033ff6) cell_myfav_contact_pane_g2

0xc808,	// (0x00034002) cell_myfav_contact_pane_g3_ParamLimits

0xc808,	// (0x00034002) cell_myfav_contact_pane_g3

0xef0d,	// (0x00036707) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x00036707) cell_myfav_contact_pane_g4

0xc815,	// (0x0003400f) cell_myfav_contact_pane_g5_ParamLimits

0xc815,	// (0x0003400f) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x000370c6) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x000370c6) cell_myfav_contact_pane_g

0x7da8,	// (0x0002f5a2) main_myfav_hc_pane_g3_ParamLimits

0x7da8,	// (0x0002f5a2) main_myfav_hc_pane_g3

0x0814,	// (0x0002800e) popup_adpt_find_window

0x7e03,	// (0x0002f5fd) afind_page_pane_ParamLimits

0x7e03,	// (0x0002f5fd) afind_page_pane

0x7e18,	// (0x0002f612) aid_size_cell_afind_ParamLimits

0x7e18,	// (0x0002f612) aid_size_cell_afind

0x7e36,	// (0x0002f630) bg_popup_sub_pane_cp09_ParamLimits

0x7e36,	// (0x0002f630) bg_popup_sub_pane_cp09

0x7e43,	// (0x0002f63d) find_pane_cp01_ParamLimits

0x7e43,	// (0x0002f63d) find_pane_cp01

0xc821,	// (0x0003401b) grid_afind_control_pane_ParamLimits

0xc821,	// (0x0003401b) grid_afind_control_pane

0x7e50,	// (0x0002f64a) grid_afind_pane_ParamLimits

0x7e50,	// (0x0002f64a) grid_afind_pane

0x7e72,	// (0x0002f66c) cell_afind_pane_ParamLimits

0x7e72,	// (0x0002f66c) cell_afind_pane

0x265d,	// (0x00029e57) afind_page_pane_g1

0x7edf,	// (0x0002f6d9) afind_page_pane_g2

0x7ee8,	// (0x0002f6e2) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x000370d1) afind_page_pane_g

0x7ef1,	// (0x0002f6eb) afind_page_pane_t1

0xc835,	// (0x0003402f) cell_afind_grid_control_pane_ParamLimits

0xc835,	// (0x0003402f) cell_afind_grid_control_pane

0xc4ed,	// (0x00033ce7) bg_button_pane_cp69_ParamLimits

0xc4ed,	// (0x00033ce7) bg_button_pane_cp69

0x7f11,	// (0x0002f70b) cell_afind_pane_g1_ParamLimits

0x7f11,	// (0x0002f70b) cell_afind_pane_g1

0x7f1e,	// (0x0002f718) cell_afind_pane_t1_ParamLimits

0x7f1e,	// (0x0002f718) cell_afind_pane_t1

0x26c9,	// (0x00029ec3) bg_button_pane_cp72

0xc844,	// (0x0003403e) cell_afind_grid_control_pane_g1

0x5154,	// (0x0002c94e) aid_image_placing_area_ParamLimits

0x5154,	// (0x0002c94e) aid_image_placing_area

0xeeff,	// (0x000366f9) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) field_vitu_entry_pane_g1

0xeeff,	// (0x000366f9) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x000366f9) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x000369e1) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x000369e1) field_vitu_entry_pane_g

0xc008,	// (0x00033802) cell_vitu_itu_pane_g1_ParamLimits

0xbfeb,	// (0x000337e5) cell_vitu_itu_pane_t3_ParamLimits

0xbfeb,	// (0x000337e5) cell_vitu_itu_pane_t3

0xc496,	// (0x00033c90) mp4_progress_pane_t1_ParamLimits

0xc4af,	// (0x00033ca9) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x00037017) mp4_progress_pane_t_ParamLimits

0xc4c8,	// (0x00033cc2) mup_progress_pane_cp04_ParamLimits

0x7ded,	// (0x0002f5e7) main_myfav_hc_pane_t5_ParamLimits

0x7ded,	// (0x0002f5e7) main_myfav_hc_pane_t5

0xb6f9,	// (0x00032ef3) aid_zoom_text_primary

0x0814,	// (0x0002800e) popup_adpt_find_window_ParamLimits

0xb748,	// (0x00032f42) main_cam_set_pane

0x14ce,	// (0x00028cc8) cam4_zoom_pane_ParamLimits

0x14ce,	// (0x00028cc8) cam4_zoom_pane

0x7f30,	// (0x0002f72a) main_cam_set_pane_g1_ParamLimits

0x7f30,	// (0x0002f72a) main_cam_set_pane_g1

0x7f3e,	// (0x0002f738) main_cam_set_pane_g2_ParamLimits

0x7f3e,	// (0x0002f738) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x000370d8) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x000370d8) main_cam_set_pane_g

0x7f5f,	// (0x0002f759) main_cam_set_pane_t1_ParamLimits

0x7f5f,	// (0x0002f759) main_cam_set_pane_t1

0x7f7a,	// (0x0002f774) main_cset_listscroll_pane_ParamLimits

0x7f7a,	// (0x0002f774) main_cset_listscroll_pane

0x7fa2,	// (0x0002f79c) main_cset_slider_pane_ParamLimits

0x7fa2,	// (0x0002f79c) main_cset_slider_pane

0xc855,	// (0x0003404f) main_cset_list_pane_ParamLimits

0xc855,	// (0x0003404f) main_cset_list_pane

0xc865,	// (0x0003405f) scroll_pane_cp028

0x7fcc,	// (0x0002f7c6) aid_area_touch_slider

0x7fe8,	// (0x0002f7e2) cset_slider_pane

0x800b,	// (0x0002f805) main_cset_slider_pane_g1

0x8020,	// (0x0002f81a) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x000370dd) main_cset_slider_pane_g

0xc89e,	// (0x00034098) main_cset_slider_pane_t1

0x80e2,	// (0x0002f8dc) main_cset_slider_pane_t2

0x80fc,	// (0x0002f8f6) main_cset_slider_pane_t3

0x8116,	// (0x0002f910) main_cset_slider_pane_t4

0x8130,	// (0x0002f92a) main_cset_slider_pane_t5

0x814e,	// (0x0002f948) main_cset_slider_pane_t6

0x8165,	// (0x0002f95f) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x00037102) main_cset_slider_pane_t

0x8271,	// (0x0002fa6b) cset_list_set_pane_ParamLimits

0x8271,	// (0x0002fa6b) cset_list_set_pane

0xc938,	// (0x00034132) aid_position_infowindow_above

0xc940,	// (0x0003413a) aid_position_infowindow_below

0x8285,	// (0x0002fa7f) cset_list_set_pane_g1_ParamLimits

0x8285,	// (0x0002fa7f) cset_list_set_pane_g1

0x8291,	// (0x0002fa8b) cset_list_set_pane_g3_ParamLimits

0x8291,	// (0x0002fa8b) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x00037121) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x00037121) cset_list_set_pane_g

0x82a0,	// (0x0002fa9a) cset_list_set_pane_t1_ParamLimits

0x82a0,	// (0x0002fa9a) cset_list_set_pane_t1

0xee98,	// (0x00036692) list_highlight_pane_cp021_ParamLimits

0xee98,	// (0x00036692) list_highlight_pane_cp021

0x48e4,	// (0x0002c0de) cset_slider_pane_g1

0x48f6,	// (0x0002c0f0) cset_slider_pane_g2

0x48ed,	// (0x0002c0e7) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x00037126) cset_slider_pane_g

0x3f91,	// (0x0002b78b) aid_area_touch_cam4_zoom

0x19ed,	// (0x000291e7) cam4_zoom_cont_pane

0x19f5,	// (0x000291ef) cam4_zoom_pane_g1

0x19fd,	// (0x000291f7) cam4_zoom_pane_g2

0x1a05,	// (0x000291ff) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x0003712d) cam4_zoom_pane_g

0xc948,	// (0x00034142) cam4_zoom_cont_pane_g1

0xc951,	// (0x0003414b) cam4_zoom_cont_pane_g2

0xc95a,	// (0x00034154) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x00037134) cam4_zoom_cont_pane_g

0x139c,	// (0x00028b96) call4_image_pane_ParamLimits

0x139c,	// (0x00028b96) call4_image_pane

0x7bcf,	// (0x0002f3c9) call4_windows_conf_pane_ParamLimits

0x7c16,	// (0x0002f410) popup_call4_audio_in_window_ParamLimits

0x7c16,	// (0x0002f410) popup_call4_audio_in_window

0xe7c9,	// (0x00035fc3) bg_popup_call2_act_pane_cp02

0xc55f,	// (0x00033d59) call4_list_conf_pane

0x265d,	// (0x00029e57) call4_image_pane_g1

0x265d,	// (0x00029e57) call4_image_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) call4_image_pane_g

0xc963,	// (0x0003415d) list_single_graphic_popup_conf4_pane_ParamLimits

0xc963,	// (0x0003415d) list_single_graphic_popup_conf4_pane

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp022

0xc978,	// (0x00034172) list_single_graphic_popup_conf4_pane_g1

0x3fea,	// (0x0002b7e4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x0003713b) list_single_graphic_popup_conf4_pane_g

0xc980,	// (0x0003417a) list_single_graphic_popup_conf4_pane_t1

0x2885,	// (0x0002a07f) popup_vtel_slider_window_ParamLimits

0x2885,	// (0x0002a07f) popup_vtel_slider_window

0xc4db,	// (0x00033cd5) dialer2_ne_pane_t2_ParamLimits

0xc4db,	// (0x00033cd5) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x0003701c) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x0003701c) dialer2_ne_pane_t

0x6ac8,	// (0x0002e2c2) bg_popup_sub_pane_cp010_ParamLimits

0x6ac8,	// (0x0002e2c2) bg_popup_sub_pane_cp010

0x82b5,	// (0x0002faaf) popup_vtel_slider_window_g1_ParamLimits

0x82b5,	// (0x0002faaf) popup_vtel_slider_window_g1

0x82c8,	// (0x0002fac2) popup_vtel_slider_window_g2_ParamLimits

0x82c8,	// (0x0002fac2) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x00037140) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x00037140) popup_vtel_slider_window_g

0x831e,	// (0x0002fb18) vtel_slider_pane_ParamLimits

0x831e,	// (0x0002fb18) vtel_slider_pane

0x8340,	// (0x0002fb3a) vtel_slider_pane_g1_ParamLimits

0x8340,	// (0x0002fb3a) vtel_slider_pane_g1

0x8354,	// (0x0002fb4e) vtel_slider_pane_g2_ParamLimits

0x8354,	// (0x0002fb4e) vtel_slider_pane_g2

0x836c,	// (0x0002fb66) vtel_slider_pane_g3_ParamLimits

0x836c,	// (0x0002fb66) vtel_slider_pane_g3

0x8340,	// (0x0002fb3a) vtel_slider_pane_g4_ParamLimits

0x8340,	// (0x0002fb3a) vtel_slider_pane_g4

0x8382,	// (0x0002fb7c) vtel_slider_pane_g5_ParamLimits

0x8382,	// (0x0002fb7c) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x00037149) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x00037149) vtel_slider_pane_g

0xb748,	// (0x00032f42) main_gallery2_pane

0x16a0,	// (0x00028e9a) aid_size_row_itut2_dropdow_list_ParamLimits

0x16a0,	// (0x00028e9a) aid_size_row_itut2_dropdow_list

0x1730,	// (0x00028f2a) grid_vitu2_function_top_pane_ParamLimits

0x1730,	// (0x00028f2a) grid_vitu2_function_top_pane

0x1794,	// (0x00028f8e) popup_vitu2_dropdown_list_window_ParamLimits

0x1794,	// (0x00028f8e) popup_vitu2_dropdown_list_window

0x17bb,	// (0x00028fb5) popup_vitu2_match_list_window

0x1a0d,	// (0x00029207) cell_vitu2_function_top_pane_ParamLimits

0x1a0d,	// (0x00029207) cell_vitu2_function_top_pane

0x1a27,	// (0x00029221) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1a27,	// (0x00029221) cell_vitu2_function_top_pane_cp01

0x1a43,	// (0x0002923d) cell_vitu2_function_top_wide_pane_ParamLimits

0x1a43,	// (0x0002923d) cell_vitu2_function_top_wide_pane

0xb748,	// (0x00032f42) bg_button_pane_cp012

0x1a61,	// (0x0002925b) cell_vitu2_function_top_pane_g1

0xc996,	// (0x00034190) bg_button_pane_cp013_ParamLimits

0xc996,	// (0x00034190) bg_button_pane_cp013

0x8398,	// (0x0002fb92) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8398,	// (0x0002fb92) cell_vitu2_function_top_wide_pane_g1

0xb748,	// (0x00032f42) bg_popup_sub_pane_cp20

0x1a75,	// (0x0002926f) list_vitu2_match_list_pane

0xc747,	// (0x00033f41) bg_popup_sub_pane_cp20_g1

0xc74f,	// (0x00033f49) bg_popup_sub_pane_cp20_g2

0x2d33,	// (0x0002a52d) bg_popup_sub_pane_cp20_g3

0xc757,	// (0x00033f51) bg_popup_sub_pane_cp20_g4

0x2d13,	// (0x0002a50d) bg_popup_sub_pane_cp20_g5

0xc9b2,	// (0x000341ac) bg_popup_sub_pane_cp20_g6

0xc767,	// (0x00033f61) bg_popup_sub_pane_cp20_g7

0xc76f,	// (0x00033f69) bg_popup_sub_pane_cp20_g8

0xc777,	// (0x00033f71) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x00037154) bg_popup_sub_pane_cp20_g

0xc9ba,	// (0x000341b4) list_vitu2_match_list_item_pane_ParamLimits

0xc9ba,	// (0x000341b4) list_vitu2_match_list_item_pane

0xc9cc,	// (0x000341c6) list_vitu2_match_list_item_pane_t1

0xb756,	// (0x00032f50) bg_popup_sub_pane_cp21

0x246c,	// (0x00029c66) grid_vitu2_dropdown_list_pane

0x1a8d,	// (0x00029287) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1a8d,	// (0x00029287) cell_vitu2_dropdown_list_char_pane

0x1aaf,	// (0x000292a9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1aaf,	// (0x000292a9) cell_vitu2_dropdown_list_ctrl_pane

0xc9da,	// (0x000341d4) cell_vitu2_dropdown_list_char_pane_g1

0xc9e3,	// (0x000341dd) cell_vitu2_dropdown_list_char_pane_g2

0xc9ec,	// (0x000341e6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x00037167) cell_vitu2_dropdown_list_char_pane_g

0x1ad9,	// (0x000292d3) cell_vitu2_dropdown_list_char_pane_t1

0x83b0,	// (0x0002fbaa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x83b0,	// (0x0002fbaa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x83c0,	// (0x0002fbba) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x83c0,	// (0x0002fbba) cell_vitu2_dropdown_list_ctrl_pane_g2

0x83d1,	// (0x0002fbcb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x83d1,	// (0x0002fbcb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1ae7,	// (0x000292e1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1ae7,	// (0x000292e1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc5db,	// (0x00033dd5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc5db,	// (0x00033dd5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x0003716e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x0003716e) cell_vitu2_dropdown_list_ctrl_pane_g

0x83e1,	// (0x0002fbdb) aid_size_cell_gallery2_ParamLimits

0x83e1,	// (0x0002fbdb) aid_size_cell_gallery2

0x83ff,	// (0x0002fbf9) grid_gallery2_pane_ParamLimits

0x83ff,	// (0x0002fbf9) grid_gallery2_pane

0x8419,	// (0x0002fc13) scroll_pane_cp029_ParamLimits

0x8419,	// (0x0002fc13) scroll_pane_cp029

0x842a,	// (0x0002fc24) cell_gallery2_pane_ParamLimits

0x842a,	// (0x0002fc24) cell_gallery2_pane

0xc9f5,	// (0x000341ef) cell_gallery2_pane_g2

0x848e,	// (0x0002fc88) cell_gallery2_pane_g3

0xc9fd,	// (0x000341f7) cell_gallery2_pane_g4

0xca05,	// (0x000341ff) cell_gallery2_pane_g5

0x246c,	// (0x00029c66) grid_highlight_pane_cp10

0x17bb,	// (0x00028fb5) popup_vitu2_match_list_window_ParamLimits

0x17d2,	// (0x00028fcc) popup_vitu2_query_window_ParamLimits

0x17d2,	// (0x00028fcc) popup_vitu2_query_window

0xb756,	// (0x00032f50) bg_vitu2_candi_button_pane

0xc9da,	// (0x000341d4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc9e3,	// (0x000341dd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc9ec,	// (0x000341e6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8496,	// (0x0002fc90) bg_button_pane_cp015

0x84ad,	// (0x0002fca7) bg_button_pane_cp016

0x84b9,	// (0x0002fcb3) bg_button_pane_cp017

0x4665,	// (0x0002be5f) bg_popup_sub_pane_cp22

0xca0d,	// (0x00034207) popup_vitu2_query_window_g1

0x84fa,	// (0x0002fcf4) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x00037179) popup_vitu2_query_window_g

0x8520,	// (0x0002fd1a) popup_vitu2_query_window_t1_ParamLimits

0x8520,	// (0x0002fd1a) popup_vitu2_query_window_t1

0x8555,	// (0x0002fd4f) popup_vitu2_query_window_t2_ParamLimits

0x8555,	// (0x0002fd4f) popup_vitu2_query_window_t2

0x8567,	// (0x0002fd61) popup_vitu2_query_window_t3_ParamLimits

0x8567,	// (0x0002fd61) popup_vitu2_query_window_t3

0x858f,	// (0x0002fd89) popup_vitu2_query_window_t4_ParamLimits

0x858f,	// (0x0002fd89) popup_vitu2_query_window_t4

0x85a3,	// (0x0002fd9d) popup_vitu2_query_window_t5_ParamLimits

0x85a3,	// (0x0002fd9d) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x00037180) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x00037180) popup_vitu2_query_window_t

0xc84d,	// (0x00034047) main_cset_text_pane

0x7fcc,	// (0x0002f7c6) aid_area_touch_slider_ParamLimits

0x7fe8,	// (0x0002f7e2) cset_slider_pane_ParamLimits

0x800b,	// (0x0002f805) main_cset_slider_pane_g1_ParamLimits

0x8020,	// (0x0002f81a) main_cset_slider_pane_g2_ParamLimits

0xc86e,	// (0x00034068) main_cset_slider_pane_g3_ParamLimits

0xc86e,	// (0x00034068) main_cset_slider_pane_g3

0x8035,	// (0x0002f82f) main_cset_slider_pane_g4_ParamLimits

0x8035,	// (0x0002f82f) main_cset_slider_pane_g4

0x8044,	// (0x0002f83e) main_cset_slider_pane_g5_ParamLimits

0x8044,	// (0x0002f83e) main_cset_slider_pane_g5

0x8052,	// (0x0002f84c) main_cset_slider_pane_g6_ParamLimits

0x8052,	// (0x0002f84c) main_cset_slider_pane_g6

0xf8e3,	// (0x000370dd) main_cset_slider_pane_g_ParamLimits

0xc89e,	// (0x00034098) main_cset_slider_pane_t1_ParamLimits

0x80e2,	// (0x0002f8dc) main_cset_slider_pane_t2_ParamLimits

0x80fc,	// (0x0002f8f6) main_cset_slider_pane_t3_ParamLimits

0x8116,	// (0x0002f910) main_cset_slider_pane_t4_ParamLimits

0x8130,	// (0x0002f92a) main_cset_slider_pane_t5_ParamLimits

0x814e,	// (0x0002f948) main_cset_slider_pane_t6_ParamLimits

0x8165,	// (0x0002f95f) main_cset_slider_pane_t7_ParamLimits

0x8193,	// (0x0002f98d) main_cset_slider_pane_t8_ParamLimits

0x8193,	// (0x0002f98d) main_cset_slider_pane_t8

0x81bb,	// (0x0002f9b5) main_cset_slider_pane_t9_ParamLimits

0x81bb,	// (0x0002f9b5) main_cset_slider_pane_t9

0x81e3,	// (0x0002f9dd) main_cset_slider_pane_t10_ParamLimits

0x81e3,	// (0x0002f9dd) main_cset_slider_pane_t10

0x820b,	// (0x0002fa05) main_cset_slider_pane_t11_ParamLimits

0x820b,	// (0x0002fa05) main_cset_slider_pane_t11

0x8235,	// (0x0002fa2f) main_cset_slider_pane_t12_ParamLimits

0x8235,	// (0x0002fa2f) main_cset_slider_pane_t12

0x8252,	// (0x0002fa4c) main_cset_slider_pane_t13_ParamLimits

0x8252,	// (0x0002fa4c) main_cset_slider_pane_t13

0xf908,	// (0x00037102) main_cset_slider_pane_t_ParamLimits

0xe7c9,	// (0x00035fc3) bg_popup_sub_pane_cp011

0xca19,	// (0x00034213) main_cset_text_pane_g1

0xca21,	// (0x0003421b) main_cset_text_pane_t1

0xca2f,	// (0x00034229) main_cset_text_pane_t2

0xca3d,	// (0x00034237) main_cset_text_pane_t3

0xca4b,	// (0x00034245) main_cset_text_pane_t4

0xca59,	// (0x00034253) main_cset_text_pane_t5

0xca67,	// (0x00034261) main_cset_text_pane_t6

0xca75,	// (0x0003426f) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x0003718f) main_cset_text_pane_t

0xb756,	// (0x00032f50) main_cam4_burst_pane

0xb756,	// (0x00032f50) main_cam5_pane

0x7eff,	// (0x0002f6f9) bg_button_pane_cp019

0x7f08,	// (0x0002f702) bg_button_pane_cp020

0xc87a,	// (0x00034074) main_cset_slider_pane_g7_ParamLimits

0xc87a,	// (0x00034074) main_cset_slider_pane_g7

0xc886,	// (0x00034080) main_cset_slider_pane_g8_ParamLimits

0xc886,	// (0x00034080) main_cset_slider_pane_g8

0x8066,	// (0x0002f860) main_cset_slider_pane_g9_ParamLimits

0x8066,	// (0x0002f860) main_cset_slider_pane_g9

0x8072,	// (0x0002f86c) main_cset_slider_pane_g10_ParamLimits

0x8072,	// (0x0002f86c) main_cset_slider_pane_g10

0x807e,	// (0x0002f878) main_cset_slider_pane_g11_ParamLimits

0x807e,	// (0x0002f878) main_cset_slider_pane_g11

0x808a,	// (0x0002f884) main_cset_slider_pane_g12_ParamLimits

0x808a,	// (0x0002f884) main_cset_slider_pane_g12

0x8096,	// (0x0002f890) main_cset_slider_pane_g13_ParamLimits

0x8096,	// (0x0002f890) main_cset_slider_pane_g13

0x80a2,	// (0x0002f89c) main_cset_slider_pane_g14_ParamLimits

0x80a2,	// (0x0002f89c) main_cset_slider_pane_g14

0x80ae,	// (0x0002f8a8) main_cset_slider_pane_g15_ParamLimits

0x80ae,	// (0x0002f8a8) main_cset_slider_pane_g15

0xc8c6,	// (0x000340c0) main_cset_slider_pane_t14_ParamLimits

0xc8c6,	// (0x000340c0) main_cset_slider_pane_t14

0xc8ff,	// (0x000340f9) main_cset_slider_pane_t15_ParamLimits

0xc8ff,	// (0x000340f9) main_cset_slider_pane_t15

0x860d,	// (0x0002fe07) aid_cam4_burst_size_cell_ParamLimits

0x860d,	// (0x0002fe07) aid_cam4_burst_size_cell

0x862d,	// (0x0002fe27) grid_cam4_burst_pane_ParamLimits

0x862d,	// (0x0002fe27) grid_cam4_burst_pane

0x8667,	// (0x0002fe61) linegrid_cam4_burst_pane_ParamLimits

0x8667,	// (0x0002fe61) linegrid_cam4_burst_pane

0xca83,	// (0x0003427d) scroll_pane_cp30_ParamLimits

0xca83,	// (0x0003427d) scroll_pane_cp30

0x8689,	// (0x0002fe83) cell_cam4_burst_pane_ParamLimits

0x8689,	// (0x0002fe83) cell_cam4_burst_pane

0xca8f,	// (0x00034289) linegrid_cam4_burst_pane_g1_ParamLimits

0xca8f,	// (0x00034289) linegrid_cam4_burst_pane_g1

0x86de,	// (0x0002fed8) linegrid_cam4_burst_pane_g2_ParamLimits

0x86de,	// (0x0002fed8) linegrid_cam4_burst_pane_g2

0xca9c,	// (0x00034296) linegrid_cam4_burst_pane_g3_ParamLimits

0xca9c,	// (0x00034296) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x0003719e) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x0003719e) linegrid_cam4_burst_pane_g

0x86ef,	// (0x0002fee9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x86ef,	// (0x0002fee9) linegrid_cam4_burst_pane_g3_copy1

0xcaa9,	// (0x000342a3) linegrid_cam4_burst_pane_g4_ParamLimits

0xcaa9,	// (0x000342a3) linegrid_cam4_burst_pane_g4

0x870d,	// (0x0002ff07) linegrid_cam4_burst_pane_g5_ParamLimits

0x870d,	// (0x0002ff07) linegrid_cam4_burst_pane_g5

0x871e,	// (0x0002ff18) linegrid_cam4_burst_pane_g6_ParamLimits

0x871e,	// (0x0002ff18) linegrid_cam4_burst_pane_g6

0xcab6,	// (0x000342b0) linegrid_cam4_burst_pane_g7_ParamLimits

0xcab6,	// (0x000342b0) linegrid_cam4_burst_pane_g7

0x8735,	// (0x0002ff2f) cell_cam4_burst_pane_g1

0xcacf,	// (0x000342c9) main_cam5_pane_t1_ParamLimits

0xcacf,	// (0x000342c9) main_cam5_pane_t1

0xcae1,	// (0x000342db) main_cam5_pane_t2_ParamLimits

0xcae1,	// (0x000342db) main_cam5_pane_t2

0xcaf3,	// (0x000342ed) main_cam5_pane_t3_ParamLimits

0xcaf3,	// (0x000342ed) main_cam5_pane_t3

0xcb05,	// (0x000342ff) main_cam5_pane_t4_ParamLimits

0xcb05,	// (0x000342ff) main_cam5_pane_t4

0xcb1d,	// (0x00034317) main_cam5_pane_t5_ParamLimits

0xcb1d,	// (0x00034317) main_cam5_pane_t5

0xcb31,	// (0x0003432b) main_cam5_pane_t6_ParamLimits

0xcb31,	// (0x0003432b) main_cam5_pane_t6

0xcb45,	// (0x0003433f) main_cam5_pane_t7_ParamLimits

0xcb45,	// (0x0003433f) main_cam5_pane_t7

0xcb57,	// (0x00034351) main_cam5_pane_t8_ParamLimits

0xcb57,	// (0x00034351) main_cam5_pane_t8

0xcb75,	// (0x0003436f) main_cam5_pane_t9_ParamLimits

0xcb75,	// (0x0003436f) main_cam5_pane_t9

0xcb87,	// (0x00034381) main_cam5_pane_t10_ParamLimits

0xcb87,	// (0x00034381) main_cam5_pane_t10

0xcb99,	// (0x00034393) main_cam5_pane_t11_ParamLimits

0xcb99,	// (0x00034393) main_cam5_pane_t11

0xcbad,	// (0x000343a7) main_cam5_pane_t12_ParamLimits

0xcbad,	// (0x000343a7) main_cam5_pane_t12

0xcbc4,	// (0x000343be) main_cam5_pane_t13_ParamLimits

0xcbc4,	// (0x000343be) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x000371aa) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x000371aa) main_cam5_pane_t

0x0895,	// (0x0002808f) popup_scut_keymap_window_ParamLimits

0x0895,	// (0x0002808f) popup_scut_keymap_window

0x8748,	// (0x0002ff42) aid_size_cell_brow_shortcut

0x246c,	// (0x00029c66) bg_popup_window_pane_cp010

0x8754,	// (0x0002ff4e) grid_scut_pane

0x8760,	// (0x0002ff5a) cell_scut_pane_ParamLimits

0x8760,	// (0x0002ff5a) cell_scut_pane

0x8779,	// (0x0002ff73) cell_scut_pane_g1

0xcbe7,	// (0x000343e1) cell_scut_pane_t1

0xcbf6,	// (0x000343f0) cell_scut_pane_t2

0x8782,	// (0x0002ff7c) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x000371c5) cell_scut_pane_t

0x7126,	// (0x0002e920) main_mup3_pane_g8_ParamLimits

0x7126,	// (0x0002e920) main_mup3_pane_g8

0x16ba,	// (0x00028eb4) area_vitu2_query_pane_ParamLimits

0x16ba,	// (0x00028eb4) area_vitu2_query_pane

0x84c5,	// (0x0002fcbf) input_focus_pane_cp08

0xcc05,	// (0x000343ff) area_vitu2_query_pane_g1

0x8790,	// (0x0002ff8a) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x000371cc) area_vitu2_query_pane_g

0x87a5,	// (0x0002ff9f) area_vitu2_query_pane_t1_ParamLimits

0x87a5,	// (0x0002ff9f) area_vitu2_query_pane_t1

0x87b9,	// (0x0002ffb3) area_vitu2_query_pane_t2_ParamLimits

0x87b9,	// (0x0002ffb3) area_vitu2_query_pane_t2

0x87cd,	// (0x0002ffc7) area_vitu2_query_pane_t3_ParamLimits

0x87cd,	// (0x0002ffc7) area_vitu2_query_pane_t3

0xcc11,	// (0x0003440b) area_vitu2_query_pane_t4_ParamLimits

0xcc11,	// (0x0003440b) area_vitu2_query_pane_t4

0xcc39,	// (0x00034433) area_vitu2_query_pane_t5_ParamLimits

0xcc39,	// (0x00034433) area_vitu2_query_pane_t5

0xcc61,	// (0x0003445b) area_vitu2_query_pane_t6_ParamLimits

0xcc61,	// (0x0003445b) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x000371d1) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x000371d1) area_vitu2_query_pane_t

0x87f9,	// (0x0002fff3) bg_button_pane_cp018

0x8805,	// (0x0002ffff) bg_button_pane_cp021

0x8811,	// (0x0003000b) bg_button_pane_cp022

0x883c,	// (0x00030036) input_focus_pane_cp09

0x436f,	// (0x0002bb69) aid_size_touch_mv_arrow_left

0x4398,	// (0x0002bb92) aid_size_touch_mv_arrow_right

0x80c6,	// (0x0002f8c0) main_cset_slider_pane_g16_ParamLimits

0x80c6,	// (0x0002f8c0) main_cset_slider_pane_g16

0x80d4,	// (0x0002f8ce) main_cset_slider_pane_g17_ParamLimits

0x80d4,	// (0x0002f8ce) main_cset_slider_pane_g17

0x8735,	// (0x0002ff2f) cell_cam4_burst_pane_g1_ParamLimits

0xe7c9,	// (0x00035fc3) compa_mode_pane

0x82d8,	// (0x0002fad2) popup_vtel_slider_window_g3_ParamLimits

0x82d8,	// (0x0002fad2) popup_vtel_slider_window_g3

0x82ef,	// (0x0002fae9) popup_vtel_slider_window_g4_ParamLimits

0x82ef,	// (0x0002fae9) popup_vtel_slider_window_g4

0x8306,	// (0x0002fb00) popup_vtel_slider_window_t1_ParamLimits

0x8306,	// (0x0002fb00) popup_vtel_slider_window_t1

0xb756,	// (0x00032f50) main_cl_pane

0xb913,	// (0x0003310d) popup_imed_adjust2_window_ParamLimits

0x4665,	// (0x0002be5f) bg_tb_trans_pane_cp05_ParamLimits

0xbf16,	// (0x00033710) popup_imed_adjust2_window_g1_ParamLimits

0xbf25,	// (0x0003371f) popup_imed_adjust2_window_g2_ParamLimits

0xbf25,	// (0x0003371f) popup_imed_adjust2_window_g2

0xbf31,	// (0x0003372b) popup_imed_adjust2_window_g3_ParamLimits

0xbf31,	// (0x0003372b) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x00036f47) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x00036f47) popup_imed_adjust2_window_g

0xbf3d,	// (0x00033737) popup_imed_adjust2_window_t1_ParamLimits

0xbf55,	// (0x0003374f) slider_imed_adjust_pane_ParamLimits

0xbf69,	// (0x00033763) slider_imed_adjust_pane_g1_ParamLimits

0xbf79,	// (0x00033773) slider_imed_adjust_pane_g2_ParamLimits

0xbf89,	// (0x00033783) slider_imed_adjust_pane_g3_ParamLimits

0xbf9a,	// (0x00033794) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x00036f4e) slider_imed_adjust_pane_g_ParamLimits

0x146e,	// (0x00028c68) aid_touch_area_cam4_ParamLimits

0x146e,	// (0x00028c68) aid_touch_area_cam4

0xc5a9,	// (0x00033da3) battery_pane_cp01

0x1541,	// (0x00028d3b) main_camera4_pane_g6_ParamLimits

0x1541,	// (0x00028d3b) main_camera4_pane_g6

0x156b,	// (0x00028d65) main_camera4_pane_t2_ParamLimits

0x156b,	// (0x00028d65) main_camera4_pane_t2

0x0001,

0xf856,	// (0x00037050) main_camera4_pane_t_ParamLimits

0xf856,	// (0x00037050) main_camera4_pane_t

0x158c,	// (0x00028d86) aid_touch_area_vid4_ParamLimits

0x158c,	// (0x00028d86) aid_touch_area_vid4

0x15e3,	// (0x00028ddd) main_video4_pane_g5_ParamLimits

0x15e3,	// (0x00028ddd) main_video4_pane_g5

0x1609,	// (0x00028e03) vid4_progress_pane_ParamLimits

0x1609,	// (0x00028e03) vid4_progress_pane

0xc892,	// (0x0003408c) main_cset_slider_pane_g18_ParamLimits

0xc892,	// (0x0003408c) main_cset_slider_pane_g18

0xcac3,	// (0x000342bd) cell_cam4_burst_pane_g2_ParamLimits

0xcac3,	// (0x000342bd) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x000371a5) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x000371a5) cell_cam4_burst_pane_g

0xef71,	// (0x0003676b) bg_cl_pane_ParamLimits

0xef71,	// (0x0003676b) bg_cl_pane

0x884d,	// (0x00030047) cl_header_pane_ParamLimits

0x884d,	// (0x00030047) cl_header_pane

0x8861,	// (0x0003005b) cl_listscroll_pane_ParamLimits

0x8861,	// (0x0003005b) cl_listscroll_pane

0xccad,	// (0x000344a7) bg_cl_pane_g1

0xccb5,	// (0x000344af) bg_cl_pane_g2

0xccbd,	// (0x000344b7) bg_cl_pane_g3

0xccc5,	// (0x000344bf) bg_cl_pane_g4

0xcccd,	// (0x000344c7) bg_cl_pane_g5

0xccd5,	// (0x000344cf) bg_cl_pane_g6

0xccdd,	// (0x000344d7) bg_cl_pane_g7

0xcce5,	// (0x000344df) bg_cl_pane_g8

0xcced,	// (0x000344e7) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x000371e0) bg_cl_pane_g

0x8871,	// (0x0003006b) aid_height_cl_leading_ParamLimits

0x8871,	// (0x0003006b) aid_height_cl_leading

0x887d,	// (0x00030077) aid_height_cl_text_ParamLimits

0x887d,	// (0x00030077) aid_height_cl_text

0xee98,	// (0x00036692) bg_cl_header_pane_ParamLimits

0xee98,	// (0x00036692) bg_cl_header_pane

0x889c,	// (0x00030096) cl_header_pane_g1_ParamLimits

0x889c,	// (0x00030096) cl_header_pane_g1

0x88b2,	// (0x000300ac) cl_header_pane_t1_ParamLimits

0x88b2,	// (0x000300ac) cl_header_pane_t1

0xccf5,	// (0x000344ef) cl_list_pane

0xc865,	// (0x0003405f) hc_scroll_pane_cp01

0x2d13,	// (0x0002a50d) bg_cl_header_pane_g1

0xc747,	// (0x00033f41) bg_cl_header_pane_g2

0x2d33,	// (0x0002a52d) bg_cl_header_pane_g3

0xc757,	// (0x00033f51) bg_cl_header_pane_g4

0xc74f,	// (0x00033f49) bg_cl_header_pane_g5

0xc9b2,	// (0x000341ac) bg_cl_header_pane_g6

0xc76f,	// (0x00033f69) bg_cl_header_pane_g7

0xc777,	// (0x00033f71) bg_cl_header_pane_g8

0xc767,	// (0x00033f61) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x000371f3) bg_cl_header_pane_g

0x88cb,	// (0x000300c5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x88cb,	// (0x000300c5) hc_cl_list_double_graphic_heading_pane

0x88de,	// (0x000300d8) hc_cl_list_single_graphic_pane_ParamLimits

0x88de,	// (0x000300d8) hc_cl_list_single_graphic_pane

0x88f6,	// (0x000300f0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x88f6,	// (0x000300f0) hc_cl_list_single_graphic_pane_g1

0x8902,	// (0x000300fc) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8902,	// (0x000300fc) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x00037206) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x00037206) hc_cl_list_single_graphic_pane_g

0x8916,	// (0x00030110) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8916,	// (0x00030110) hc_cl_list_single_graphic_pane_t1

0x88f6,	// (0x000300f0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x88f6,	// (0x000300f0) hc_cl_list_double_graphic_heading_pane_g1

0x892b,	// (0x00030125) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x892b,	// (0x00030125) hc_cl_list_double_graphic_heading_pane_g2

0x893f,	// (0x00030139) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x893f,	// (0x00030139) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x0003720b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x0003720b) hc_cl_list_double_graphic_heading_pane_g

0x8953,	// (0x0003014d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8953,	// (0x0003014d) hc_cl_list_double_graphic_heading_pane_t1

0x8968,	// (0x00030162) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8968,	// (0x00030162) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x00037212) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x00037212) hc_cl_list_double_graphic_heading_pane_t

0xcd06,	// (0x00034500) vid4_progress_pane_g1

0xcd16,	// (0x00034510) vid4_progress_pane_g2

0x1b03,	// (0x000292fd) vid4_progress_pane_g3

0xcd26,	// (0x00034520) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x00037217) vid4_progress_pane_g

0x1b15,	// (0x0002930f) vid4_progress_pane_t1

0xcd44,	// (0x0003453e) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x00037222) vid4_progress_pane_t

0x1b2f,	// (0x00029329) wait_bar_pane_cp07

0x6ad6,	// (0x0002e2d0) blid_firmament_pane_ParamLimits

0x6b19,	// (0x0002e313) popup_blid_sat_info2_window_g1

0x6b3d,	// (0x0002e337) popup_blid_sat_info2_window_t3

0x6b4b,	// (0x0002e345) popup_blid_sat_info2_window_t4

0x6b59,	// (0x0002e353) popup_blid_sat_info2_window_t5

0x6b67,	// (0x0002e361) popup_blid_sat_info2_window_t6

0x6b77,	// (0x0002e371) popup_blid_sat_info2_window_t7

0x6b85,	// (0x0002e37f) popup_blid_sat_info2_window_t8

0x6b93,	// (0x0002e38d) popup_blid_sat_info2_window_t9

0x6ba1,	// (0x0002e39b) popup_blid_sat_info2_window_t10

0x6c68,	// (0x0002e462) aid_firma_cardinal_ParamLimits

0xba05,	// (0x000331ff) blid_firmament_pane_t1_ParamLimits

0xba1c,	// (0x00033216) blid_firmament_pane_t2_ParamLimits

0xba33,	// (0x0003322d) blid_firmament_pane_t3_ParamLimits

0xba4a,	// (0x00033244) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x00036e40) blid_firmament_pane_t_ParamLimits

0xba61,	// (0x0003325b) blid_sat_info_pane_ParamLimits

0xb748,	// (0x00032f42) main_cam_set_pane_ParamLimits

0x7851,	// (0x0002f04b) aid_size_cell_colour_35_ParamLimits

0x7871,	// (0x0002f06b) aid_size_cell_colour_112_ParamLimits

0x7891,	// (0x0002f08b) aid_size_cell_effect_ParamLimits

0x4665,	// (0x0002be5f) bg_tb_trans_pane_cp02_ParamLimits

0x3c59,	// (0x0002b453) heading_imed_pane_ParamLimits

0x78b1,	// (0x0002f0ab) listscroll_imed_pane_ParamLimits

0x5984,	// (0x0002d17e) popup_call2_audio_first_window_g5_ParamLimits

0x5984,	// (0x0002d17e) popup_call2_audio_first_window_g5

0x1159,	// (0x00028953) aid_size_touch_image3_arrow_left_ParamLimits

0x1159,	// (0x00028953) aid_size_touch_image3_arrow_left

0x1185,	// (0x0002897f) aid_size_touch_image3_arrow_right_ParamLimits

0x1185,	// (0x0002897f) aid_size_touch_image3_arrow_right

0xcd5a,	// (0x00034554) vid4_progress_pane_t3

0x7a56,	// (0x0002f250) main_hwr_training_symbol_option_pane_ParamLimits

0x7a56,	// (0x0002f250) main_hwr_training_symbol_option_pane

0xc15b,	// (0x00033955) popup_hwr_training_preview_window_ParamLimits

0xc15b,	// (0x00033955) popup_hwr_training_preview_window

0x0ff0,	// (0x000287ea) hwr_training_navi_pane_g5_ParamLimits

0x0ff0,	// (0x000287ea) hwr_training_navi_pane_g5

0xc735,	// (0x00033f2f) popup_char_count_window

0xb748,	// (0x00032f42) bg_popup_sub_pane_cp20_ParamLimits

0x1a75,	// (0x0002926f) list_vitu2_match_list_pane_ParamLimits

0x1a81,	// (0x0002927b) vitu2_page_scroll_pane_ParamLimits

0x1a81,	// (0x0002927b) vitu2_page_scroll_pane

0xcd91,	// (0x0003458b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcd91,	// (0x0003458b) list_single_hwr_training_symbol_option_pane

0xcda4,	// (0x0003459e) list_single_hwr_training_symbol_option_pane_g1

0xcdac,	// (0x000345a6) list_single_hwr_training_symbol_option_pane_t1

0xcdba,	// (0x000345b4) bg_button_pane_cp023

0xcdc3,	// (0x000345bd) bg_button_pane_cp024

0xcdf6,	// (0x000345f0) vitu2_page_scroll_pane_g1

0xcdfe,	// (0x000345f8) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x00037229) vitu2_page_scroll_pane_g

0xce06,	// (0x00034600) vitu2_page_scroll_pane_t1

0xce15,	// (0x0003460f) popup_char_count_window_g1

0xce1e,	// (0x00034618) popup_char_count_window_g2

0xce27,	// (0x00034621) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x0003722e) popup_char_count_window_g

0xce30,	// (0x0003462a) popup_char_count_window_t1

0xb756,	// (0x00032f50) main_vded2_pane

0xbf02,	// (0x000336fc) aid_size_cell_imed_line

0xbf0c,	// (0x00033706) grid_imed_line_width_pane

0xc685,	// (0x00033e7f) vid4_indicators_pane_g4

0xce3e,	// (0x00034638) cell_imed_line_width_pane_ParamLimits

0xce3e,	// (0x00034638) cell_imed_line_width_pane

0xce54,	// (0x0003464e) cell_imed_line_width_pane_g1

0xce5d,	// (0x00034657) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x00037235) cell_imed_line_width_pane_g

0x8991,	// (0x0003018b) main_vded2_pane_g1_ParamLimits

0x8991,	// (0x0003018b) main_vded2_pane_g1

0x89ac,	// (0x000301a6) main_vded2_pane_g2_ParamLimits

0x89ac,	// (0x000301a6) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x0003723a) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x0003723a) main_vded2_pane_g

0x89be,	// (0x000301b8) vded2_slider_pane_ParamLimits

0x89be,	// (0x000301b8) vded2_slider_pane

0x89ce,	// (0x000301c8) aid_size_touch_vded2_end

0x89d8,	// (0x000301d2) aid_size_touch_vded2_playhead

0xce65,	// (0x0003465f) aid_size_touch_vded2_start

0xce6d,	// (0x00034667) vded2_slider_bg_pane

0xce76,	// (0x00034670) vded2_slider_pane_g1

0xce7f,	// (0x00034679) vded2_slider_pane_g2

0x89e2,	// (0x000301dc) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x0003723f) vded2_slider_pane_g

0xce87,	// (0x00034681) vded2_slider_bg_pane_g1

0xce90,	// (0x0003468a) vded2_slider_bg_pane_g2

0xce99,	// (0x00034693) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x00037246) vded2_slider_bg_pane_g

0x4acf,	// (0x0002c2c9) aid_postcard_touch_down_pane_ParamLimits

0x4acf,	// (0x0002c2c9) aid_postcard_touch_down_pane

0x4ae7,	// (0x0002c2e1) aid_postcard_touch_up_pane_ParamLimits

0x4ae7,	// (0x0002c2e1) aid_postcard_touch_up_pane

0xb756,	// (0x00032f50) main_blid2_pane

0xb8f5,	// (0x000330ef) popup_blid2_search_window

0xe7c9,	// (0x00035fc3) blid2_gps_pane

0xe7c9,	// (0x00035fc3) blid2_navig_pane

0xe7c9,	// (0x00035fc3) blid2_search_pane

0xe7c9,	// (0x00035fc3) blid2_tripm_pane

0x89ed,	// (0x000301e7) blid2_search_pane_g1_ParamLimits

0x89ed,	// (0x000301e7) blid2_search_pane_g1

0x8a00,	// (0x000301fa) blid2_search_pane_t1_ParamLimits

0x8a00,	// (0x000301fa) blid2_search_pane_t1

0x8a12,	// (0x0003020c) aid_size_cell_blid2_gps_ParamLimits

0x8a12,	// (0x0003020c) aid_size_cell_blid2_gps

0x8a2a,	// (0x00030224) blid2_gps_pane_g1_ParamLimits

0x8a2a,	// (0x00030224) blid2_gps_pane_g1

0x8a3e,	// (0x00030238) grid_blid2_satellite_pane_ParamLimits

0x8a3e,	// (0x00030238) grid_blid2_satellite_pane

0x8a56,	// (0x00030250) blid2_navig_pane_g1_ParamLimits

0x8a56,	// (0x00030250) blid2_navig_pane_g1

0x8a62,	// (0x0003025c) blid2_navig_pane_t1_ParamLimits

0x8a62,	// (0x0003025c) blid2_navig_pane_t1

0x8a7d,	// (0x00030277) blid2_navig_pane_t2_ParamLimits

0x8a7d,	// (0x00030277) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x0003724d) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x0003724d) blid2_navig_pane_t

0x8a98,	// (0x00030292) blid2_navig_ring_pane_ParamLimits

0x8a98,	// (0x00030292) blid2_navig_ring_pane

0x8ab3,	// (0x000302ad) blid2_speed_pane_ParamLimits

0x8ab3,	// (0x000302ad) blid2_speed_pane

0x8abf,	// (0x000302b9) blid2_tripm_pane_g1_ParamLimits

0x8abf,	// (0x000302b9) blid2_tripm_pane_g1

0x8ada,	// (0x000302d4) blid2_tripm_pane_g2_ParamLimits

0x8ada,	// (0x000302d4) blid2_tripm_pane_g2

0x8aee,	// (0x000302e8) blid2_tripm_pane_g3_ParamLimits

0x8aee,	// (0x000302e8) blid2_tripm_pane_g3

0x8b02,	// (0x000302fc) blid2_tripm_pane_g4_ParamLimits

0x8b02,	// (0x000302fc) blid2_tripm_pane_g4

0x8b16,	// (0x00030310) blid2_tripm_pane_g5_ParamLimits

0x8b16,	// (0x00030310) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x00037252) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x00037252) blid2_tripm_pane_g

0x8b3c,	// (0x00030336) blid2_tripm_pane_t1_ParamLimits

0x8b3c,	// (0x00030336) blid2_tripm_pane_t1

0x8b55,	// (0x0003034f) blid2_tripm_pane_t2_ParamLimits

0x8b55,	// (0x0003034f) blid2_tripm_pane_t2

0x8b6e,	// (0x00030368) blid2_tripm_pane_t3_ParamLimits

0x8b6e,	// (0x00030368) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x0003725f) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x0003725f) blid2_tripm_pane_t

0x8bb5,	// (0x000303af) cell_blid2_satellite_pane_ParamLimits

0x8bb5,	// (0x000303af) cell_blid2_satellite_pane

0x8bd1,	// (0x000303cb) cell_blid2_satellite_pane_g1

0xcea2,	// (0x0003469c) cell_blid2_satellite_pane_t1

0x265d,	// (0x00029e57) blid2_speed_pane_g1

0xceb0,	// (0x000346aa) blid2_speed_pane_t1

0xcebe,	// (0x000346b8) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x00037268) blid2_speed_pane_t

0x265d,	// (0x00029e57) blid2_navig_ring_pane_g1

0x8bda,	// (0x000303d4) blid2_navig_ring_pane_g2

0x8be2,	// (0x000303dc) blid2_navig_ring_pane_g3

0x8bea,	// (0x000303e4) blid2_navig_ring_pane_g4

0x8bf2,	// (0x000303ec) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x0003726d) blid2_navig_ring_pane_g

0xe7c9,	// (0x00035fc3) bg_popup_window_pane_cp011

0xcecc,	// (0x000346c6) popup_blid2_search_window_g1

0xced4,	// (0x000346ce) popup_blid2_search_window_t1

0xcee2,	// (0x000346dc) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x00037278) popup_blid2_search_window_t

0x2bd0,	// (0x0002a3ca) main_browser_pane_g1

0xef71,	// (0x0003676b) main_browser_pane_ParamLimits

0xb748,	// (0x00032f42) bg_button_pane_cp011_ParamLimits

0x19d9,	// (0x000291d3) cell_vitu2_function_pane_g1_ParamLimits

0x4665,	// (0x0002be5f) bg_popup_sub_pane_cp22_ParamLimits

0x84c5,	// (0x0002fcbf) input_focus_pane_cp08_ParamLimits

0x84e1,	// (0x0002fcdb) popup_vitu2_query_button_pane_ParamLimits

0x84e1,	// (0x0002fcdb) popup_vitu2_query_button_pane

0x84f0,	// (0x0002fcea) popup_vitu2_query_input_button_pane

0xca0d,	// (0x00034207) popup_vitu2_query_window_g1_ParamLimits

0x84fa,	// (0x0002fcf4) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x00037179) popup_vitu2_query_window_g_ParamLimits

0xe7c9,	// (0x00035fc3) bg_button_pane_cp026

0x8bfa,	// (0x000303f4) popup_vitu2_query_input_button_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp025

0xcef0,	// (0x000346ea) popup_vitu2_query_button_pane_t1

0x6d16,	// (0x0002e510) main_mp3_pane_t6

0x6d24,	// (0x0002e51e) popup_slider_window_cp01

0xc5e9,	// (0x00033de3) cam4_battery_pane

0xc63e,	// (0x00033e38) cam4_battery_pane_cp02

0xccfe,	// (0x000344f8) cam4_battery_pane_cp01

0xccfe,	// (0x000344f8) cam4_battery_pane_cp03

0xb9fb,	// (0x000331f5) cam4_battery_pane_g1

0x265d,	// (0x00029e57) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x0003727d) cam4_battery_pane_g

0x6baf,	// (0x0002e3a9) popup_blid_sat_info2_window_t11

0x436f,	// (0x0002bb69) aid_size_touch_mv_arrow_left_ParamLimits

0x4398,	// (0x0002bb92) aid_size_touch_mv_arrow_right_ParamLimits

0x43f6,	// (0x0002bbf0) navi_pane_g1_ParamLimits

0x4402,	// (0x0002bbfc) navi_pane_g2_ParamLimits

0x4430,	// (0x0002bc2a) navi_pane_g3_ParamLimits

0xf35a,	// (0x00036b54) navi_pane_g_ParamLimits

0x44ee,	// (0x0002bce8) navi_pane_mv_t1_ParamLimits

0x78bd,	// (0x0002f0b7) grid_imed_effect_pane_ParamLimits

0x277b,	// (0x00029f75) aid_placing_vt_slider_lsc

0x278b,	// (0x00029f85) aid_placing_vt_slider_prt

0xee98,	// (0x00036692) bg_tb_trans_pane_cp01_ParamLimits

0xbba0,	// (0x0003339a) popup_image_details_window_g1_ParamLimits

0xbbb3,	// (0x000333ad) popup_image_details_window_g2_ParamLimits

0xbbc8,	// (0x000333c2) popup_image_details_window_g3_ParamLimits

0xbbc8,	// (0x000333c2) popup_image_details_window_g3

0xf686,	// (0x00036e80) popup_image_details_window_g_ParamLimits

0xbbdc,	// (0x000333d6) popup_image_details_window_t1_ParamLimits

0xbbee,	// (0x000333e8) popup_image_details_window_t2_ParamLimits

0xbc07,	// (0x00033401) popup_image_details_window_t3_ParamLimits

0xbc1b,	// (0x00033415) popup_image_details_window_t4_ParamLimits

0xbc36,	// (0x00033430) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x00036e87) popup_image_details_window_t_ParamLimits

0x8889,	// (0x00030083) cl_header_name_pane_ParamLimits

0x8889,	// (0x00030083) cl_header_name_pane

0x8c02,	// (0x000303fc) cl_header_name_pane_t1_ParamLimits

0x8c02,	// (0x000303fc) cl_header_name_pane_t1

0x8c23,	// (0x0003041d) cl_header_name_pane_t2_ParamLimits

0x8c23,	// (0x0003041d) cl_header_name_pane_t2

0x8c65,	// (0x0003045f) cl_header_name_pane_t3_ParamLimits

0x8c65,	// (0x0003045f) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x00037282) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x00037282) cl_header_name_pane_t

0x44bf,	// (0x0002bcb9) navi_pane_mv_g2_ParamLimits

0xc6d1,	// (0x00033ecb) field_vitu2_entry_pane_g1_ParamLimits

0xc6dd,	// (0x00033ed7) field_vitu2_entry_pane_g2_ParamLimits

0x462f,	// (0x0002be29) field_vitu2_entry_pane_g3_ParamLimits

0x462f,	// (0x0002be29) field_vitu2_entry_pane_g3

0xf888,	// (0x00037082) field_vitu2_entry_pane_g_ParamLimits

0x1869,	// (0x00029063) cell_vitu2_itu_pane_g1_ParamLimits

0x1881,	// (0x0002907b) cell_vitu2_itu_pane_g2_ParamLimits

0x1881,	// (0x0002907b) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x0003708e) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x0003708e) cell_vitu2_itu_pane_g

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp05_ParamLimits

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp05

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp03

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp04

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp10_ParamLimits

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp10

0x8826,	// (0x00030020) bg_vkb2_func_pane_cp08

0x87f9,	// (0x0002fff3) bg_vkb2_func_pane_cp06

0x8805,	// (0x0002ffff) bg_vkb2_func_pane_cp07

0xcdcc,	// (0x000345c6) bg_vkb2_func_pane_cp11_ParamLimits

0xcdcc,	// (0x000345c6) bg_vkb2_func_pane_cp11

0xcde1,	// (0x000345db) bg_vkb2_func_pane_cp12_ParamLimits

0xcde1,	// (0x000345db) bg_vkb2_func_pane_cp12

0xe7c9,	// (0x00035fc3) bg_vkb2_func_pane_cp09

0xc747,	// (0x00033f41) bg_vkb2_func_pane_g1

0x2d33,	// (0x0002a52d) bg_vkb2_func_pane_g2

0xc74f,	// (0x00033f49) bg_vkb2_func_pane_g3

0xc757,	// (0x00033f51) bg_vkb2_func_pane_g4

0xc9b2,	// (0x000341ac) bg_vkb2_func_pane_g5

0xc76f,	// (0x00033f69) bg_vkb2_func_pane_g6

0xc777,	// (0x00033f71) bg_vkb2_func_pane_g7

0xc767,	// (0x00033f61) bg_vkb2_func_pane_g8

0x2d13,	// (0x0002a50d) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x00037289) bg_vkb2_func_pane_g

0x8b2a,	// (0x00030324) blid2_tripm_pane_g6_ParamLimits

0x8b2a,	// (0x00030324) blid2_tripm_pane_g6

0xc48e,	// (0x00033c88) mp4_progress_pane_g1

0x8ba1,	// (0x0003039b) blid2_tripm_values_pane_ParamLimits

0x8ba1,	// (0x0003039b) blid2_tripm_values_pane

0x8c96,	// (0x00030490) blid2_tripm_values_pane_t1

0x8ca4,	// (0x0003049e) blid2_tripm_values_pane_t2

0x8cb2,	// (0x000304ac) blid2_tripm_values_pane_t3

0x8cc0,	// (0x000304ba) blid2_tripm_values_pane_t4

0x8cce,	// (0x000304c8) blid2_tripm_values_pane_t5

0x8cdc,	// (0x000304d6) blid2_tripm_values_pane_t6

0x8cea,	// (0x000304e4) blid2_tripm_values_pane_t7

0x8cf8,	// (0x000304f2) blid2_tripm_values_pane_t8

0x8d06,	// (0x00030500) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x0003729c) blid2_tripm_values_pane_t

0x27c2,	// (0x00029fbc) call_video_pane_t1_ParamLimits

0x27dc,	// (0x00029fd6) call_video_pane_t2_ParamLimits

0xf208,	// (0x00036a02) call_video_pane_t_ParamLimits

0x49e1,	// (0x0002c1db) msg_header_pane_g1_ParamLimits

0x49ef,	// (0x0002c1e9) msg_header_pane_g2_ParamLimits

0x49ef,	// (0x0002c1e9) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x00036bf7) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x00036bf7) msg_header_pane_g

0xef71,	// (0x0003676b) main_clock2_pane_ParamLimits

0x7698,	// (0x0002ee92) grid_clock2_toolbar_pane_ParamLimits

0x7698,	// (0x0002ee92) grid_clock2_toolbar_pane

0x7698,	// (0x0002ee92) listscroll_clock2_pane_ParamLimits

0x7698,	// (0x0002ee92) listscroll_clock2_pane

0x7777,	// (0x0002ef71) main_clock2_pane_t3_ParamLimits

0x7777,	// (0x0002ef71) main_clock2_pane_t3

0x779a,	// (0x0002ef94) main_clock2_pane_t4_ParamLimits

0x779a,	// (0x0002ef94) main_clock2_pane_t4

0xcefe,	// (0x000346f8) cell_clock2_toolbar_pane

0xcf06,	// (0x00034700) cell_clock2_toolbar_pane_cp01

0xcf06,	// (0x00034700) cell_clock2_toolbar_pane_cp02

0xcf0e,	// (0x00034708) cell_clock2_toolbar_pane_cp03

0xcf16,	// (0x00034710) list_clock2_pane

0x40f1,	// (0x0002b8eb) scroll_pane_cp10

0xcf1e,	// (0x00034718) list_single_clock2_pane_ParamLimits

0xcf1e,	// (0x00034718) list_single_clock2_pane

0x246c,	// (0x00029c66) list_highlight_pane_cp08

0xcf2b,	// (0x00034725) list_single_clock2_pane_t1

0xcf39,	// (0x00034733) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x000372af) list_single_clock2_pane_t

0xe7c9,	// (0x00035fc3) bg_button_pane_cp10

0xcf47,	// (0x00034741) cell_clock2_toolbar_pane_g1

0x0b86,	// (0x00028380) aid_main_viewer_pane_g1_ParamLimits

0x0b86,	// (0x00028380) aid_main_viewer_pane_g1

0x0b94,	// (0x0002838e) aid_main_viewer_pane_g2_ParamLimits

0x0b94,	// (0x0002838e) aid_main_viewer_pane_g2

0x4a85,	// (0x0002c27f) aid_main_viewer_pane_g3_ParamLimits

0x4a85,	// (0x0002c27f) aid_main_viewer_pane_g3

0x4a94,	// (0x0002c28e) aid_main_viewer_pane_g4_ParamLimits

0x4a94,	// (0x0002c28e) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x00036c08) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x00036c08) aid_main_viewer_pane_g

0x0bc8,	// (0x000283c2) main_calc_pane_ParamLimits

0x0bec,	// (0x000283e6) main_dialer2_pane_ParamLimits

0xb756,	// (0x00032f50) main_cam6_pane

0xb756,	// (0x00032f50) main_vid6_pane

0x76a4,	// (0x0002ee9e) listscroll_gen_pane_cp06_ParamLimits

0x76a4,	// (0x0002ee9e) listscroll_gen_pane_cp06

0x77bd,	// (0x0002efb7) main_clock2_pane_t5_ParamLimits

0x77bd,	// (0x0002efb7) main_clock2_pane_t5

0x781b,	// (0x0002f015) aid_call2_pane_cp10_ParamLimits

0x782d,	// (0x0002f027) aid_call_pane_cp10_ParamLimits

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g1_ParamLimits

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x0f12,	// (0x0002870c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x0f12,	// (0x0002870c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x42fa,	// (0x0002baf4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x00036f3c) popup_clock_analogue_window_cp10_g_ParamLimits

0x0f28,	// (0x00028722) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7b3e,	// (0x0002f338) cell_dialer2_keypad_pane_g2_ParamLimits

0x7b3e,	// (0x0002f338) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x00037021) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x00037021) cell_dialer2_keypad_pane_g

0x7b5a,	// (0x0002f354) cell_dialer2_keypad_pane_t1

0x7fbe,	// (0x0002f7b8) main_cset_text2_pane_ParamLimits

0x7fbe,	// (0x0002f7b8) main_cset_text2_pane

0xcc05,	// (0x000343ff) area_vitu2_query_pane_g1_ParamLimits

0x8790,	// (0x0002ff8a) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x000371cc) area_vitu2_query_pane_g_ParamLimits

0xcc89,	// (0x00034483) area_vitu2_query_pane_t7_ParamLimits

0xcc89,	// (0x00034483) area_vitu2_query_pane_t7

0x87f9,	// (0x0002fff3) bg_button_pane_cp018_ParamLimits

0x8805,	// (0x0002ffff) bg_button_pane_cp021_ParamLimits

0x8811,	// (0x0003000b) bg_button_pane_cp022_ParamLimits

0x8826,	// (0x00030020) bg_vkb2_func_pane_cp08_ParamLimits

0x87f9,	// (0x0002fff3) bg_vkb2_func_pane_cp06_ParamLimits

0x8805,	// (0x0002ffff) bg_vkb2_func_pane_cp07_ParamLimits

0x883c,	// (0x00030036) input_focus_pane_cp09_ParamLimits

0xcf4f,	// (0x00034749) cam6_autofocus_pane_ParamLimits

0xcf4f,	// (0x00034749) cam6_autofocus_pane

0x1b42,	// (0x0002933c) cam6_image_uncrop_pane_ParamLimits

0x1b42,	// (0x0002933c) cam6_image_uncrop_pane

0x1b51,	// (0x0002934b) cam6_indi_pane_ParamLimits

0x1b51,	// (0x0002934b) cam6_indi_pane

0x1b67,	// (0x00029361) cam6_mode_pane_ParamLimits

0x1b67,	// (0x00029361) cam6_mode_pane

0x1b79,	// (0x00029373) cam6_timer_pane_ParamLimits

0x1b79,	// (0x00029373) cam6_timer_pane

0x1b85,	// (0x0002937f) cam6_zoom_pane_ParamLimits

0x1b85,	// (0x0002937f) cam6_zoom_pane

0x8d14,	// (0x0003050e) cam6_mode_pane_g1_ParamLimits

0x8d14,	// (0x0003050e) cam6_mode_pane_g1

0x8d24,	// (0x0003051e) cam6_mode_pane_g2_ParamLimits

0x8d24,	// (0x0003051e) cam6_mode_pane_g2

0x8d34,	// (0x0003052e) cam6_mode_pane_g3_ParamLimits

0x8d34,	// (0x0003052e) cam6_mode_pane_g3

0x8d44,	// (0x0003053e) cam6_mode_pane_g4_ParamLimits

0x8d44,	// (0x0003053e) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x000372b4) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x000372b4) cam6_mode_pane_g

0x8d54,	// (0x0003054e) bg_tb_trans_pane_cp08_ParamLimits

0x8d54,	// (0x0003054e) bg_tb_trans_pane_cp08

0xcf5d,	// (0x00034757) cam6_battery_pane_ParamLimits

0xcf5d,	// (0x00034757) cam6_battery_pane

0xcf73,	// (0x0003476d) cam6_indi_pane_g1_ParamLimits

0xcf73,	// (0x0003476d) cam6_indi_pane_g1

0xcf85,	// (0x0003477f) cam6_indi_pane_g2_ParamLimits

0xcf85,	// (0x0003477f) cam6_indi_pane_g2

0xcf97,	// (0x00034791) cam6_indi_pane_g3_ParamLimits

0xcf97,	// (0x00034791) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x000372bd) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x000372bd) cam6_indi_pane_g

0xcfa9,	// (0x000347a3) cam6_indi_pane_t1_ParamLimits

0xcfa9,	// (0x000347a3) cam6_indi_pane_t1

0x7c87,	// (0x0002f481) cam6_autofocus_pane_g1

0x7c7f,	// (0x0002f479) cam6_autofocus_pane_g2

0x7c97,	// (0x0002f491) cam6_autofocus_pane_g3

0x7c8f,	// (0x0002f489) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x000372c4) cam6_autofocus_pane_g

0xcfcf,	// (0x000347c9) cam6_timer_pane_g1

0xcfd7,	// (0x000347d1) cam6_timer_pane_t1

0xcfe5,	// (0x000347df) cam6_zoom_cont_pane

0xcfed,	// (0x000347e7) cam6_zoom_pane_g1

0xcff5,	// (0x000347ef) cam6_zoom_pane_g2

0x8d62,	// (0x0003055c) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x000372cd) cam6_zoom_pane_g

0x265d,	// (0x00029e57) cam6_battery_pane_g1

0x265d,	// (0x00029e57) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) cam6_battery_pane_g

0xcffd,	// (0x000347f7) cam6_zoom_cont_pane_g1

0xd006,	// (0x00034800) cam6_zoom_cont_pane_g2

0xd00f,	// (0x00034809) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x000372d4) cam6_zoom_cont_pane_g

0x8d7f,	// (0x00030579) cam6_mode_pane_cp_ParamLimits

0x8d7f,	// (0x00030579) cam6_mode_pane_cp

0x8d91,	// (0x0003058b) cam6_zoom_pane_cp_ParamLimits

0x8d91,	// (0x0003058b) cam6_zoom_pane_cp

0x8d9f,	// (0x00030599) vid6_image_uncrop_cif_pane_ParamLimits

0x8d9f,	// (0x00030599) vid6_image_uncrop_cif_pane

0x8daf,	// (0x000305a9) vid6_image_uncrop_nhd_pane_ParamLimits

0x8daf,	// (0x000305a9) vid6_image_uncrop_nhd_pane

0x8dbe,	// (0x000305b8) vid6_image_uncrop_vga_pane_ParamLimits

0x8dbe,	// (0x000305b8) vid6_image_uncrop_vga_pane

0x8dcd,	// (0x000305c7) vid6_image_uncrop_wvga_pane_ParamLimits

0x8dcd,	// (0x000305c7) vid6_image_uncrop_wvga_pane

0x8ddc,	// (0x000305d6) vid6_indi_pane_ParamLimits

0x8ddc,	// (0x000305d6) vid6_indi_pane

0x8d54,	// (0x0003054e) bg_tb_trans_pane_cp09_ParamLimits

0x8d54,	// (0x0003054e) bg_tb_trans_pane_cp09

0xd027,	// (0x00034821) cam6_battery_pane_cp_ParamLimits

0xd027,	// (0x00034821) cam6_battery_pane_cp

0xd033,	// (0x0003482d) vid6_indi_pane_g1_ParamLimits

0xd033,	// (0x0003482d) vid6_indi_pane_g1

0xd045,	// (0x0003483f) vid6_indi_pane_g2_ParamLimits

0xd045,	// (0x0003483f) vid6_indi_pane_g2

0xd057,	// (0x00034851) vid6_indi_pane_g3_ParamLimits

0xd057,	// (0x00034851) vid6_indi_pane_g3

0xd06e,	// (0x00034868) vid6_indi_pane_g4_ParamLimits

0xd06e,	// (0x00034868) vid6_indi_pane_g4

0xd085,	// (0x0003487f) vid6_indi_pane_g5_ParamLimits

0xd085,	// (0x0003487f) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x000372db) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x000372db) vid6_indi_pane_g

0xd09f,	// (0x00034899) vid6_indi_pane_t1_ParamLimits

0xd09f,	// (0x00034899) vid6_indi_pane_t1

0xd0b5,	// (0x000348af) vid6_indi_pane_t2_ParamLimits

0xd0b5,	// (0x000348af) vid6_indi_pane_t2

0xd0dd,	// (0x000348d7) vid6_indi_pane_t3_ParamLimits

0xd0dd,	// (0x000348d7) vid6_indi_pane_t3

0xd105,	// (0x000348ff) vid6_indi_pane_t4_ParamLimits

0xd105,	// (0x000348ff) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x000372e6) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x000372e6) vid6_indi_pane_t

0xd129,	// (0x00034923) wait_bar_pane_cp08

0x8df4,	// (0x000305ee) main_cset_text2_pane_t1_ParamLimits

0x8df4,	// (0x000305ee) main_cset_text2_pane_t1

0x8d6a,	// (0x00030564) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d6a,	// (0x00030564) listscroll_gen_pane_cp06_t1

0xb756,	// (0x00032f50) main_cam6_set_pane

0xc5db,	// (0x00033dd5) bg_tb_trans_pane_cp06_ParamLimits

0xc5f1,	// (0x00033deb) cam4_indicators_pane_g1_ParamLimits

0xc602,	// (0x00033dfc) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x0003705e) cam4_indicators_pane_g_ParamLimits

0xc61a,	// (0x00033e14) cam4_indicators_pane_t1_ParamLimits

0xb748,	// (0x00032f42) bg_tb_trans_pane_cp07_ParamLimits

0xc648,	// (0x00033e42) vid4_indicators_pane_g1_ParamLimits

0xc65e,	// (0x00033e58) vid4_indicators_pane_g2_ParamLimits

0xc672,	// (0x00033e6c) vid4_indicators_pane_g3_ParamLimits

0xc685,	// (0x00033e7f) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x00037070) vid4_indicators_pane_g_ParamLimits

0xc6a3,	// (0x00033e9d) vid4_indicators_pane_t1_ParamLimits

0xcd06,	// (0x00034500) vid4_progress_pane_g1_ParamLimits

0xcd16,	// (0x00034510) vid4_progress_pane_g2_ParamLimits

0x1b03,	// (0x000292fd) vid4_progress_pane_g3_ParamLimits

0xcd26,	// (0x00034520) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x00037217) vid4_progress_pane_g_ParamLimits

0x1b15,	// (0x0002930f) vid4_progress_pane_t1_ParamLimits

0xcd44,	// (0x0003453e) vid4_progress_pane_t2_ParamLimits

0xcd5a,	// (0x00034554) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x00037222) vid4_progress_pane_t_ParamLimits

0x1b2f,	// (0x00029329) wait_bar_pane_cp07_ParamLimits

0x8e15,	// (0x0003060f) main_cam6_set_pane_g2_ParamLimits

0x8e15,	// (0x0003060f) main_cam6_set_pane_g2

0x8e3b,	// (0x00030635) main_cset6_listscroll_pane_ParamLimits

0x8e3b,	// (0x00030635) main_cset6_listscroll_pane

0x8e59,	// (0x00030653) main_cset6_slider_pane_ParamLimits

0x8e59,	// (0x00030653) main_cset6_slider_pane

0x8e6f,	// (0x00030669) main_cset6_text2_pane_ParamLimits

0x8e6f,	// (0x00030669) main_cset6_text2_pane

0xd138,	// (0x00034932) main_cset6_text_pane

0xd140,	// (0x0003493a) main_cset_list_pane_copy1_ParamLimits

0xd140,	// (0x0003493a) main_cset_list_pane_copy1

0xd150,	// (0x0003494a) scroll_pane_cp028_copy1

0x8e7d,	// (0x00030677) cset_list_set_pane_copy1

0x8e91,	// (0x0003068b) aid_position_infowindow_above_copy1

0x8e99,	// (0x00030693) aid_position_infowindow_below_copy1

0x8ea1,	// (0x0003069b) cset_list_set_pane_g1_copy1

0x8ea9,	// (0x000306a3) cset_list_set_pane_g3_copy1_ParamLimits

0x8ea9,	// (0x000306a3) cset_list_set_pane_g3_copy1

0x8eb8,	// (0x000306b2) cset_list_set_pane_t1_copy1_ParamLimits

0x8eb8,	// (0x000306b2) cset_list_set_pane_t1_copy1

0xee98,	// (0x00036692) list_highlight_pane_cp021_copy1_ParamLimits

0xee98,	// (0x00036692) list_highlight_pane_cp021_copy1

0xd159,	// (0x00034953) cset6_slider_pane_ParamLimits

0xd159,	// (0x00034953) cset6_slider_pane

0xd185,	// (0x0003497f) main_cset6_slider_pane_g1_ParamLimits

0xd185,	// (0x0003497f) main_cset6_slider_pane_g1

0x8ecd,	// (0x000306c7) main_cset6_slider_pane_g2_ParamLimits

0x8ecd,	// (0x000306c7) main_cset6_slider_pane_g2

0xd1ad,	// (0x000349a7) main_cset6_slider_pane_g3_ParamLimits

0xd1ad,	// (0x000349a7) main_cset6_slider_pane_g3

0x8ef5,	// (0x000306ef) main_cset6_slider_pane_g4_ParamLimits

0x8ef5,	// (0x000306ef) main_cset6_slider_pane_g4

0x8f01,	// (0x000306fb) main_cset6_slider_pane_g5_ParamLimits

0x8f01,	// (0x000306fb) main_cset6_slider_pane_g5

0xc87a,	// (0x00034074) main_cset6_slider_pane_g7_ParamLimits

0xc87a,	// (0x00034074) main_cset6_slider_pane_g7

0xc886,	// (0x00034080) main_cset6_slider_pane_g8_ParamLimits

0xc886,	// (0x00034080) main_cset6_slider_pane_g8

0x8066,	// (0x0002f860) main_cset6_slider_pane_g9_ParamLimits

0x8066,	// (0x0002f860) main_cset6_slider_pane_g9

0x8072,	// (0x0002f86c) main_cset6_slider_pane_g10_ParamLimits

0x8072,	// (0x0002f86c) main_cset6_slider_pane_g10

0x807e,	// (0x0002f878) main_cset6_slider_pane_g11_ParamLimits

0x807e,	// (0x0002f878) main_cset6_slider_pane_g11

0x808a,	// (0x0002f884) main_cset6_slider_pane_g12_ParamLimits

0x808a,	// (0x0002f884) main_cset6_slider_pane_g12

0x8096,	// (0x0002f890) main_cset6_slider_pane_g13_ParamLimits

0x8096,	// (0x0002f890) main_cset6_slider_pane_g13

0x80a2,	// (0x0002f89c) main_cset6_slider_pane_g14_ParamLimits

0x80a2,	// (0x0002f89c) main_cset6_slider_pane_g14

0x8f0f,	// (0x00030709) main_cset6_slider_pane_g15_ParamLimits

0x8f0f,	// (0x00030709) main_cset6_slider_pane_g15

0x80c6,	// (0x0002f8c0) main_cset6_slider_pane_g16_ParamLimits

0x80c6,	// (0x0002f8c0) main_cset6_slider_pane_g16

0x80d4,	// (0x0002f8ce) main_cset6_slider_pane_g17_ParamLimits

0x80d4,	// (0x0002f8ce) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x000372ef) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x000372ef) main_cset6_slider_pane_g

0xd1b9,	// (0x000349b3) main_cset6_slider_pane_t1_ParamLimits

0xd1b9,	// (0x000349b3) main_cset6_slider_pane_t1

0x8f3f,	// (0x00030739) main_cset6_slider_pane_t2_ParamLimits

0x8f3f,	// (0x00030739) main_cset6_slider_pane_t2

0x8f6a,	// (0x00030764) main_cset6_slider_pane_t3_ParamLimits

0x8f6a,	// (0x00030764) main_cset6_slider_pane_t3

0x8f95,	// (0x0003078f) main_cset6_slider_pane_t4_ParamLimits

0x8f95,	// (0x0003078f) main_cset6_slider_pane_t4

0x8fc2,	// (0x000307bc) main_cset6_slider_pane_t5_ParamLimits

0x8fc2,	// (0x000307bc) main_cset6_slider_pane_t5

0xd1fa,	// (0x000349f4) main_cset6_slider_pane_t7_ParamLimits

0xd1fa,	// (0x000349f4) main_cset6_slider_pane_t7

0x8fef,	// (0x000307e9) main_cset6_slider_pane_t8_ParamLimits

0x8fef,	// (0x000307e9) main_cset6_slider_pane_t8

0x9013,	// (0x0003080d) main_cset6_slider_pane_t9_ParamLimits

0x9013,	// (0x0003080d) main_cset6_slider_pane_t9

0x9037,	// (0x00030831) main_cset6_slider_pane_t10_ParamLimits

0x9037,	// (0x00030831) main_cset6_slider_pane_t10

0x905b,	// (0x00030855) main_cset6_slider_pane_t11_ParamLimits

0x905b,	// (0x00030855) main_cset6_slider_pane_t11

0xd230,	// (0x00034a2a) main_cset6_slider_pane_t14_ParamLimits

0xd230,	// (0x00034a2a) main_cset6_slider_pane_t14

0xd269,	// (0x00034a63) main_cset6_slider_pane_t15_ParamLimits

0xd269,	// (0x00034a63) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x00037314) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x00037314) main_cset6_slider_pane_t

0xd2a2,	// (0x00034a9c) cset_slider_pane_g1_copy1

0xd2ab,	// (0x00034aa5) cset_slider_pane_g2_copy1

0xd2b4,	// (0x00034aae) cset_slider_pane_g3_copy1

0xe7c9,	// (0x00035fc3) bg_popup_sub_pane_cp011_copy1

0xd2c6,	// (0x00034ac0) main_cset_text_pane_g1_copy1

0xca21,	// (0x0003421b) main_cset_text_pane_t1_copy1

0xca2f,	// (0x00034229) main_cset_text_pane_t2_copy1

0xca3d,	// (0x00034237) main_cset_text_pane_t3_copy1

0xca4b,	// (0x00034245) main_cset_text_pane_t4_copy1

0xca59,	// (0x00034253) main_cset_text_pane_t5_copy1

0xd2ce,	// (0x00034ac8) main_cset_text_pane_t6_copy1

0xd2dc,	// (0x00034ad6) main_cset_text_pane_t7_copy1

0x8df4,	// (0x000305ee) main_cset_text2_pane_t1_copy1

0xb748,	// (0x00032f42) main_ncimui_pane

0x0e7a,	// (0x00028674) popup_query_ncimui_window_ParamLimits

0x0e7a,	// (0x00028674) popup_query_ncimui_window

0xbcd7,	// (0x000334d1) field_cale_ev2_pane_g4_ParamLimits

0xbcd7,	// (0x000334d1) field_cale_ev2_pane_g4

0x7ac3,	// (0x0002f2bd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ac3,	// (0x0002f2bd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x00036ff8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x00036ff8) cell_video_dialer_keypad_pane_g

0x7adb,	// (0x0002f2d5) cell_video_dialer_keypad_pane_t1

0xe7c9,	// (0x00035fc3) bg_popup_window_pane_cp012

0x62e1,	// (0x0002dadb) heading_pane_cp06

0xd308,	// (0x00034b02) ncim_query_content_pane

0xe7c9,	// (0x00035fc3) bg_popup_heading_pane_cp01

0xd310,	// (0x00034b0a) ncim_heading_pane_t1

0xd31e,	// (0x00034b18) ncim_indicator_popup_pane

0xd330,	// (0x00034b2a) ncim_query_button_pane

0xd346,	// (0x00034b40) ncim_query_content_pane_t1

0xd358,	// (0x00034b52) ncim_query_content_pane_t2

0x0005,

0xfb4f,	// (0x00037349) ncim_query_content_pane_t

0xd392,	// (0x00034b8c) ncim_query_list_pane

0xd3a4,	// (0x00034b9e) ncim_query_popup_pane

0xd31e,	// (0x00034b18) ncim_indicator_popup_pane_ParamLimits

0x91c7,	// (0x000309c1) ncim_query_content_pane_g1_ParamLimits

0x91c7,	// (0x000309c1) ncim_query_content_pane_g1

0xd346,	// (0x00034b40) ncim_query_content_pane_t1_ParamLimits

0xd358,	// (0x00034b52) ncim_query_content_pane_t2_ParamLimits

0x91d3,	// (0x000309cd) ncim_query_content_pane_t3_ParamLimits

0x91d3,	// (0x000309cd) ncim_query_content_pane_t3

0x91fb,	// (0x000309f5) ncim_query_content_pane_t4_ParamLimits

0x91fb,	// (0x000309f5) ncim_query_content_pane_t4

0x9223,	// (0x00030a1d) ncim_query_content_pane_t5_ParamLimits

0x9223,	// (0x00030a1d) ncim_query_content_pane_t5

0xd36a,	// (0x00034b64) ncim_query_content_pane_t6_ParamLimits

0xd36a,	// (0x00034b64) ncim_query_content_pane_t6

0xfb4f,	// (0x00037349) ncim_query_content_pane_t_ParamLimits

0xd392,	// (0x00034b8c) ncim_query_list_pane_ParamLimits

0xd3a4,	// (0x00034b9e) ncim_query_popup_pane_ParamLimits

0xd3b8,	// (0x00034bb2) wait_bar_pane_cp04

0xe7c9,	// (0x00035fc3) input_focus_pane_cp011

0xd3c0,	// (0x00034bba) ncim_query_popup_pane_t1

0xd3ce,	// (0x00034bc8) ncim_list_query_list_pane_ParamLimits

0xd3ce,	// (0x00034bc8) ncim_list_query_list_pane

0xe7c9,	// (0x00035fc3) bg_button_pane_cp027

0xd3e1,	// (0x00034bdb) ncim_query_button_pane_g1

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp012

0xd3eb,	// (0x00034be5) ncim_list_query_list_pane_g1

0xd3f3,	// (0x00034bed) ncim_list_query_list_pane_t1

0xc60e,	// (0x00033e08) cam4_indicators_pane_g3_ParamLimits

0xc60e,	// (0x00033e08) cam4_indicators_pane_g3

0xc691,	// (0x00033e8b) vid4_indicators_pane_g5_ParamLimits

0xc691,	// (0x00033e8b) vid4_indicators_pane_g5

0xcd35,	// (0x0003452f) vid4_progress_pane_g5_ParamLimits

0xcd35,	// (0x0003452f) vid4_progress_pane_g5

0x90b2,	// (0x000308ac) main_ncimui_pane_g1

0x911b,	// (0x00030915) ncimui_group_query_pane_ParamLimits

0x911b,	// (0x00030915) ncimui_group_query_pane

0x9163,	// (0x0003095d) ncimui_list_pane_ParamLimits

0x9163,	// (0x0003095d) ncimui_list_pane

0x918a,	// (0x00030984) ncimui_text_pane_ParamLimits

0x918a,	// (0x00030984) ncimui_text_pane

0x924b,	// (0x00030a45) ncimui_text_pane_t1_ParamLimits

0x924b,	// (0x00030a45) ncimui_text_pane_t1

0xd401,	// (0x00034bfb) ncimui_list_single_graphic_pane_ParamLimits

0xd401,	// (0x00034bfb) ncimui_list_single_graphic_pane

0x9269,	// (0x00030a63) ncimui_query_pane_ParamLimits

0x9269,	// (0x00030a63) ncimui_query_pane

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp013

0xd411,	// (0x00034c0b) ncim_list_query_list_pane_t1_copy1

0xd3eb,	// (0x00034be5) ncim_list_single_graphic_pane_g1

0x927c,	// (0x00030a76) ncim_query_button_pane_cp01

0x9288,	// (0x00030a82) ncim_query_entry_pane_ParamLimits

0x9288,	// (0x00030a82) ncim_query_entry_pane

0x929b,	// (0x00030a95) ncimui_query_pane_g1

0x92a7,	// (0x00030aa1) ncimui_query_pane_t1_ParamLimits

0x92a7,	// (0x00030aa1) ncimui_query_pane_t1

0xee98,	// (0x00036692) input_focus_pane_cp012

0xd41f,	// (0x00034c19) ncim_query_entry_pane_t1

0xef71,	// (0x0003676b) main_im_pane_ParamLimits

0xb748,	// (0x00032f42) main_mobtv_pane_ParamLimits

0xb748,	// (0x00032f42) main_mobtv_pane

0x8f27,	// (0x00030721) main_cset6_slider_pane_g18_ParamLimits

0x8f27,	// (0x00030721) main_cset6_slider_pane_g18

0x8f33,	// (0x0003072d) main_cset6_slider_pane_g19_ParamLimits

0x8f33,	// (0x0003072d) main_cset6_slider_pane_g19

0xef1b,	// (0x00036715) bg_main_mobtv_pane_ParamLimits

0xef1b,	// (0x00036715) bg_main_mobtv_pane

0x92c0,	// (0x00030aba) main_mobtv_info_pane

0x92cb,	// (0x00030ac5) main_mobtv_loading_pane_ParamLimits

0x92cb,	// (0x00030ac5) main_mobtv_loading_pane

0xd431,	// (0x00034c2b) main_mobtv_pg_channel_list_pane

0xd43b,	// (0x00034c35) main_mobtv_pg_hdr_pane

0x92d8,	// (0x00030ad2) main_mobtv_programe_curr_pane_ParamLimits

0x92d8,	// (0x00030ad2) main_mobtv_programe_curr_pane

0x92e5,	// (0x00030adf) main_mobtv_programe_next_pane_ParamLimits

0x92e5,	// (0x00030adf) main_mobtv_programe_next_pane

0xd444,	// (0x00034c3e) popup_mobtv_noti_window

0x265d,	// (0x00029e57) main_tv_pg_hdr_pane_g1

0xd44e,	// (0x00034c48) main_tv_pg_hdr_pane_g2

0xd456,	// (0x00034c50) main_tv_pg_hdr_pane_g3

0xd45e,	// (0x00034c58) main_tv_pg_hdr_pane_g4

0xd466,	// (0x00034c60) main_tv_pg_hdr_pane_g5

0xd470,	// (0x00034c6a) main_tv_pg_hdr_pane_g6

0xd47a,	// (0x00034c74) main_tv_pg_hdr_pane_g7

0xd484,	// (0x00034c7e) main_tv_pg_hdr_pane_g8

0xd48e,	// (0x00034c88) main_tv_pg_hdr_pane_g9

0xd498,	// (0x00034c92) main_tv_pg_hdr_pane_g10

0xd4a2,	// (0x00034c9c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5c,	// (0x00037356) main_tv_pg_hdr_pane_g

0xd4ac,	// (0x00034ca6) main_tv_pg_hdr_pane_t1

0xd4ba,	// (0x00034cb4) main_tv_pg_hdr_pane_t2

0xd4c8,	// (0x00034cc2) main_tv_pg_hdr_pane_t3

0xd4d8,	// (0x00034cd2) main_tv_pg_hdr_pane_t4

0xd4e8,	// (0x00034ce2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb73,	// (0x0003736d) main_tv_pg_hdr_pane_t

0xd4f8,	// (0x00034cf2) single_mobtv_pg_channel_pane_ParamLimits

0xd4f8,	// (0x00034cf2) single_mobtv_pg_channel_pane

0xd50a,	// (0x00034d04) single_mobtv_pg_channel_table_pane

0xd513,	// (0x00034d0d) single_mobtv_pg_channel_thumb_pane

0xd51c,	// (0x00034d16) single_tv_pg_channel_pane_g1

0xd525,	// (0x00034d1f) single_tv_pg_channel_pane_g2

0x0001,

0xfb7e,	// (0x00037378) single_tv_pg_channel_pane_g

0xeeff,	// (0x000366f9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x000366f9) bg_single_mobtv_pg_channel_thumb_pane

0xd52e,	// (0x00034d28) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd52e,	// (0x00034d28) single_mobtv_pg_channel_thumb_pane_g1

0xd53c,	// (0x00034d36) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd53c,	// (0x00034d36) single_mobtv_pg_channel_thumb_pane_g2

0xd548,	// (0x00034d42) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd548,	// (0x00034d42) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb83,	// (0x0003737d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb83,	// (0x0003737d) single_mobtv_pg_channel_thumb_pane_g

0xd554,	// (0x00034d4e) single_mobtv_pg_channel_thumb_pane_t1

0xd562,	// (0x00034d5c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8a,	// (0x00037384) single_mobtv_pg_channel_thumb_pane_t

0x265d,	// (0x00029e57) bg_single_mobtv_pg_channel_table_pane_g1

0x265d,	// (0x00029e57) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x00036bb8) bg_single_mobtv_pg_channel_table_pane_g

0xd570,	// (0x00034d6a) single_mobtv_pg_channel_table_pane_t1

0xd57e,	// (0x00034d78) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8f,	// (0x00037389) single_mobtv_pg_channel_table_pane_t

0x92fa,	// (0x00030af4) main_mobtv_info_pane_g1_ParamLimits

0x92fa,	// (0x00030af4) main_mobtv_info_pane_g1

0x9318,	// (0x00030b12) main_mobtv_info_pane_t1_ParamLimits

0x9318,	// (0x00030b12) main_mobtv_info_pane_t1

0x9390,	// (0x00030b8a) main_mobtv_info_pane_t2_ParamLimits

0x9390,	// (0x00030b8a) main_mobtv_info_pane_t2

0x0002,

0xfb99,	// (0x00037393) main_mobtv_info_pane_t_ParamLimits

0xfb99,	// (0x00037393) main_mobtv_info_pane_t

0x9421,	// (0x00030c1b) wait_bar_pane_cp05

0x9433,	// (0x00030c2d) main_mobtv_loading_pane_g1_ParamLimits

0x9433,	// (0x00030c2d) main_mobtv_loading_pane_g1

0x9444,	// (0x00030c3e) main_mobtv_loading_pane_g2_ParamLimits

0x9444,	// (0x00030c3e) main_mobtv_loading_pane_g2

0x9450,	// (0x00030c4a) main_mobtv_loading_pane_g3_ParamLimits

0x9450,	// (0x00030c4a) main_mobtv_loading_pane_g3

0x0002,

0xfba0,	// (0x0003739a) main_mobtv_loading_pane_g_ParamLimits

0xfba0,	// (0x0003739a) main_mobtv_loading_pane_g

0xd58c,	// (0x00034d86) main_mobtv_loading_pane_t1_ParamLimits

0xd58c,	// (0x00034d86) main_mobtv_loading_pane_t1

0xd5a4,	// (0x00034d9e) main_mobtv_loading_pane_t2_ParamLimits

0xd5a4,	// (0x00034d9e) main_mobtv_loading_pane_t2

0x0001,

0xfba7,	// (0x000373a1) main_mobtv_loading_pane_t_ParamLimits

0xfba7,	// (0x000373a1) main_mobtv_loading_pane_t

0x9463,	// (0x00030c5d) wait_bar_pane_cp06_ParamLimits

0x9463,	// (0x00030c5d) wait_bar_pane_cp06

0xd5c8,	// (0x00034dc2) main_mobtv_programe_curr_pane_t1

0xd5d6,	// (0x00034dd0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbac,	// (0x000373a6) main_mobtv_programe_curr_pane_t

0xd5e4,	// (0x00034dde) main_mobtv_programe_next_pane_t1

0xd5f2,	// (0x00034dec) main_mobtv_programe_next_pane_t2

0xd600,	// (0x00034dfa) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb1,	// (0x000373ab) main_mobtv_programe_next_pane_t

0xe7c9,	// (0x00035fc3) bg_popup_mobtv_noti_window_pane

0xd60e,	// (0x00034e08) popup_mobtv_noti_window_g1

0xd616,	// (0x00034e10) popup_mobtv_noti_window_t1

0xd624,	// (0x00034e1e) popup_mobtv_noti_window_t2

0x0001,

0xfbb8,	// (0x000373b2) popup_mobtv_noti_window_t

0x265d,	// (0x00029e57) bg_popup_mobtv_noti_window_pane_g1

0xb756,	// (0x00032f50) sc_clock_pane

0xb756,	// (0x00032f50) main_fs_bigclock_pane

0x8b8b,	// (0x00030385) blid2_tripm_pane_t4_ParamLimits

0x8b8b,	// (0x00030385) blid2_tripm_pane_t4

0x9472,	// (0x00030c6c) sc_clock_pane_g1_ParamLimits

0x9472,	// (0x00030c6c) sc_clock_pane_g1

0x9484,	// (0x00030c7e) sc_clock_pane_t1_ParamLimits

0x9484,	// (0x00030c7e) sc_clock_pane_t1

0x94a8,	// (0x00030ca2) sc_clock_pane_t2_ParamLimits

0x94a8,	// (0x00030ca2) sc_clock_pane_t2

0x94c0,	// (0x00030cba) sc_clock_pane_t3_ParamLimits

0x94c0,	// (0x00030cba) sc_clock_pane_t3

0x0004,

0xfbbd,	// (0x000373b7) sc_clock_pane_t_ParamLimits

0xfbbd,	// (0x000373b7) sc_clock_pane_t

0xa3c9,	// (0x00031bc3) main_fs_bigclock_indicator_pane_ParamLimits

0xa3c9,	// (0x00031bc3) main_fs_bigclock_indicator_pane

0x9586,	// (0x00030d80) main_fs_bigclock_pane_g1_ParamLimits

0x9586,	// (0x00030d80) main_fs_bigclock_pane_g1

0xa3d5,	// (0x00031bcf) main_fs_bigclock_pane_t1_ParamLimits

0xa3d5,	// (0x00031bcf) main_fs_bigclock_pane_t1

0xa3e7,	// (0x00031be1) main_fs_bigclock_pane_t2_ParamLimits

0xa3e7,	// (0x00031be1) main_fs_bigclock_pane_t2

0xa3fb,	// (0x00031bf5) main_fs_bigclock_pane_t3_ParamLimits

0xa3fb,	// (0x00031bf5) main_fs_bigclock_pane_t3

0x0002,

0xfd4e,	// (0x00037548) main_fs_bigclock_pane_t_ParamLimits

0xfd4e,	// (0x00037548) main_fs_bigclock_pane_t

0xe080,	// (0x0003587a) main_fs_bigclock_indicator_pane_g1

0xd338,	// (0x00034b32) ncim_query_content_pane_g2_ParamLimits

0xd338,	// (0x00034b32) ncim_query_content_pane_g2

0x0001,

0xfb4a,	// (0x00037344) ncim_query_content_pane_g_ParamLimits

0xfb4a,	// (0x00037344) ncim_query_content_pane_g

0x94d7,	// (0x00030cd1) sc_clock_pane_t4_ParamLimits

0x94d7,	// (0x00030cd1) sc_clock_pane_t4

0xb748,	// (0x00032f42) main_radioblah_pane

0xc52d,	// (0x00033d27) cell_call4_button_pane_t1_copy1_ParamLimits

0xc52d,	// (0x00033d27) cell_call4_button_pane_t1_copy1

0x90ca,	// (0x000308c4) main_ncimui_pane_t1_ParamLimits

0x90ca,	// (0x000308c4) main_ncimui_pane_t1

0x90e4,	// (0x000308de) main_ncimui_pane_t2_ParamLimits

0x90e4,	// (0x000308de) main_ncimui_pane_t2

0x0002,

0xfb43,	// (0x0003733d) main_ncimui_pane_t_ParamLimits

0xfb43,	// (0x0003733d) main_ncimui_pane_t

0xd632,	// (0x00034e2c) main_radioblah_anim_pane_ParamLimits

0xd632,	// (0x00034e2c) main_radioblah_anim_pane

0xd643,	// (0x00034e3d) main_radioblah_info_pane_ParamLimits

0xd643,	// (0x00034e3d) main_radioblah_info_pane

0xd657,	// (0x00034e51) main_radioblah_pane_t1_ParamLimits

0xd657,	// (0x00034e51) main_radioblah_pane_t1

0xd673,	// (0x00034e6d) main_radioblah_pane_t2_ParamLimits

0xd673,	// (0x00034e6d) main_radioblah_pane_t2

0x0003,

0xfbde,	// (0x000373d8) main_radioblah_pane_t_ParamLimits

0xfbde,	// (0x000373d8) main_radioblah_pane_t

0x972f,	// (0x00030f29) main_radioblah_rocker_ctrl_pane_ParamLimits

0x972f,	// (0x00030f29) main_radioblah_rocker_ctrl_pane

0xd6bb,	// (0x00034eb5) main_radioblah_info_pane_t1_ParamLimits

0xd6bb,	// (0x00034eb5) main_radioblah_info_pane_t1

0x9787,	// (0x00030f81) main_radioblah_info_pane_t2_ParamLimits

0x9787,	// (0x00030f81) main_radioblah_info_pane_t2

0x0003,

0xfbe7,	// (0x000373e1) main_radioblah_info_pane_t_ParamLimits

0xfbe7,	// (0x000373e1) main_radioblah_info_pane_t

0x265d,	// (0x00029e57) main_radioblah_rocker_ctrl_pane_g1

0x9837,	// (0x00031031) main_radioblah_rocker_ctrl_pane_g2

0x983f,	// (0x00031039) main_radioblah_rocker_ctrl_pane_g3

0x9847,	// (0x00031041) main_radioblah_rocker_ctrl_pane_g4

0x984f,	// (0x00031049) main_radioblah_rocker_ctrl_pane_g5

0x9857,	// (0x00031051) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf0,	// (0x000373ea) main_radioblah_rocker_ctrl_pane_g

0x8df4,	// (0x000305ee) main_cset_text2_pane_t1_copy1_ParamLimits

0xc5bd,	// (0x00033db7) cam4_image_uncrop_qvga_pane

0xc634,	// (0x00033e2e) vid4_image_uncrop_qcif_pane

0xcf4f,	// (0x00034749) cam6_image_uncrop_qvga_pane_ParamLimits

0xcf4f,	// (0x00034749) cam6_image_uncrop_qvga_pane

0xd017,	// (0x00034811) vid6_image_uncrop_qcif_pane_ParamLimits

0xd017,	// (0x00034811) vid6_image_uncrop_qcif_pane

0xe7c9,	// (0x00035fc3) bg_popup_preview_window_pane_cp03

0xd2ea,	// (0x00034ae4) list_cset_text2_pane

0xd2f2,	// (0x00034aec) main_cset6_text2_pane_g1

0xd2fa,	// (0x00034af4) main_cset6_text2_pane_t1

0xd6f5,	// (0x00034eef) list_cset_text2_pane_t1_ParamLimits

0xd6f5,	// (0x00034eef) list_cset_text2_pane_t1

0xb748,	// (0x00032f42) main_radioblah_pane_ParamLimits

0x940d,	// (0x00030c07) main_mobtv_info_pane_t3_ParamLimits

0x940d,	// (0x00030c07) main_mobtv_info_pane_t3

0x971d,	// (0x00030f17) main_radioblah_pane_g1

0x9757,	// (0x00030f51) main_radioblah_info_pane_g1

0x97dc,	// (0x00030fd6) main_radioblah_info_pane_t3_ParamLimits

0x97dc,	// (0x00030fd6) main_radioblah_info_pane_t3

0x3a1f,	// (0x0002b219) highlight_cell_cale_month_pane_ParamLimits

0x3a1f,	// (0x0002b219) highlight_cell_cale_month_pane

0xb756,	// (0x00032f50) main_phob_fisheye_pane

0xbd4c,	// (0x00033546) scroll_pane_cp0031_ParamLimits

0xbd4c,	// (0x00033546) scroll_pane_cp0031

0xd129,	// (0x00034923) wait_bar_pane_cp08_ParamLimits

0x8e7d,	// (0x00030677) cset_list_set_pane_copy1_ParamLimits

0xd70f,	// (0x00034f09) highlight_cell_cale_month_pane_g1

0x985f,	// (0x00031059) highlight_cell_cale_month_pane_t1

0xccf5,	// (0x000344ef) list_gen_pane_cp01

0xc865,	// (0x0003405f) scroll_pane_01

0x986d,	// (0x00031067) list_single_double_fisheye_pane

0x9876,	// (0x00031070) list_double_fisheye_pane_g1_ParamLimits

0x9876,	// (0x00031070) list_double_fisheye_pane_g1

0x9882,	// (0x0003107c) list_double_fisheye_pane_g2_ParamLimits

0x9882,	// (0x0003107c) list_double_fisheye_pane_g2

0x9896,	// (0x00031090) list_double_fisheye_pane_g3_ParamLimits

0x9896,	// (0x00031090) list_double_fisheye_pane_g3

0x0004,

0xfbfd,	// (0x000373f7) list_double_fisheye_pane_g_ParamLimits

0xfbfd,	// (0x000373f7) list_double_fisheye_pane_g

0x98bf,	// (0x000310b9) list_double_fisheye_pane_t1_ParamLimits

0x98bf,	// (0x000310b9) list_double_fisheye_pane_t1

0x98da,	// (0x000310d4) list_double_fisheye_pane_t2_ParamLimits

0x98da,	// (0x000310d4) list_double_fisheye_pane_t2

0x0001,

0xfc08,	// (0x00037402) list_double_fisheye_pane_t_ParamLimits

0xfc08,	// (0x00037402) list_double_fisheye_pane_t

0xb756,	// (0x00032f50) main_call5_pane

0x9502,	// (0x00030cfc) sc_swipe_pane_ParamLimits

0x9502,	// (0x00030cfc) sc_swipe_pane

0x990f,	// (0x00031109) call5_image_pane_ParamLimits

0x990f,	// (0x00031109) call5_image_pane

0x992c,	// (0x00031126) call5_swipe_1_pane_ParamLimits

0x992c,	// (0x00031126) call5_swipe_1_pane

0x993f,	// (0x00031139) call5_swipe_2_pane_ParamLimits

0x993f,	// (0x00031139) call5_swipe_2_pane

0x996a,	// (0x00031164) popup_call5_audio_first_window_ParamLimits

0x996a,	// (0x00031164) popup_call5_audio_first_window

0xeeff,	// (0x000366f9) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) call5_swipe_1_pane_g1

0xd717,	// (0x00034f11) call5_swipe_1_pane_g2_ParamLimits

0xd717,	// (0x00034f11) call5_swipe_1_pane_g2

0x0001,

0xfc0d,	// (0x00037407) call5_swipe_1_pane_g_ParamLimits

0xfc0d,	// (0x00037407) call5_swipe_1_pane_g

0xd723,	// (0x00034f1d) call5_swipe_1_pane_t1_ParamLimits

0xd723,	// (0x00034f1d) call5_swipe_1_pane_t1

0xeeff,	// (0x000366f9) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x000366f9) call5_swipe_2_pane_g1

0xd738,	// (0x00034f32) call5_swipe_2_pane_g2_ParamLimits

0xd738,	// (0x00034f32) call5_swipe_2_pane_g2

0x0001,

0xfc12,	// (0x0003740c) call5_swipe_2_pane_g_ParamLimits

0xfc12,	// (0x0003740c) call5_swipe_2_pane_g

0xd744,	// (0x00034f3e) call5_swipe_2_pane_t1_ParamLimits

0xd744,	// (0x00034f3e) call5_swipe_2_pane_t1

0xd759,	// (0x00034f53) sc_swipe_pane_g1_ParamLimits

0xd759,	// (0x00034f53) sc_swipe_pane_g1

0xd766,	// (0x00034f60) sc_swipe_pane_g2_ParamLimits

0xd766,	// (0x00034f60) sc_swipe_pane_g2

0x0001,

0xfc17,	// (0x00037411) sc_swipe_pane_g_ParamLimits

0xfc17,	// (0x00037411) sc_swipe_pane_g

0xd772,	// (0x00034f6c) sc_swipe_pane_t1_ParamLimits

0xd772,	// (0x00034f6c) sc_swipe_pane_t1

0xb756,	// (0x00032f50) main_cmail_launcher_pane

0x997f,	// (0x00031179) aid_size_cell_cmail_l_ParamLimits

0x997f,	// (0x00031179) aid_size_cell_cmail_l

0x9995,	// (0x0003118f) grid_cmail_l_pane_ParamLimits

0x9995,	// (0x0003118f) grid_cmail_l_pane

0x99af,	// (0x000311a9) cell_cmail_l_pane_ParamLimits

0x99af,	// (0x000311a9) cell_cmail_l_pane

0x99d4,	// (0x000311ce) cell_cmail_l_pane_g1_ParamLimits

0x99d4,	// (0x000311ce) cell_cmail_l_pane_g1

0x99e0,	// (0x000311da) cell_cmail_l_pane_t1_ParamLimits

0x99e0,	// (0x000311da) cell_cmail_l_pane_t1

0x99f6,	// (0x000311f0) cell_cmail_l_pane_t2_ParamLimits

0x99f6,	// (0x000311f0) cell_cmail_l_pane_t2

0x0001,

0xfc1c,	// (0x00037416) cell_cmail_l_pane_t_ParamLimits

0xfc1c,	// (0x00037416) cell_cmail_l_pane_t

0xee98,	// (0x00036692) grid_highlight_pane_cp018_ParamLimits

0xee98,	// (0x00036692) grid_highlight_pane_cp018

0x077b,	// (0x00027f75) main2_pane_ParamLimits

0x077b,	// (0x00027f75) main2_pane

0xf009,	// (0x00036803) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x0003680b) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x00036813) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x0003681b) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x00036823) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x0003682b) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x00036833) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x0003683b) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x00036843) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x0003684b) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x0003684b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00036925) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x000369d3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x000369d3) list_medium_line_x2_t3_g3_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t2

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_x2_t3_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t2

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x000369e6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x000369e6) list_medium_line_x2_t4_g4_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t2

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t3

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x000369ef) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x000369ef) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x000369e6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x000369e6) list_medium_line_x2_t2_g4_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g4_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x000369d3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x000369d3) list_medium_line_x2_t2_g3_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g3_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g3_t

0x3d9b,	// (0x0002b595) main_sp_fs_list_pane_ParamLimits

0x3d9b,	// (0x0002b595) main_sp_fs_list_pane

0xb826,	// (0x00033020) sp_fs_scroll_pane_ParamLimits

0xb826,	// (0x00033020) sp_fs_scroll_pane

0x3da7,	// (0x0002b5a1) list_medium_line_x2_t3_t1

0x3da7,	// (0x0002b5a1) list_medium_line_x2_t3_t2

0x3da7,	// (0x0002b5a1) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x00036a9c) list_medium_line_x2_t3_t

0x3da7,	// (0x0002b5a1) list_medium_line_x3_t4_t1

0x3da7,	// (0x0002b5a1) list_medium_line_x3_t4_t2

0x3da7,	// (0x0002b5a1) list_medium_line_x3_t4_t3

0x3da7,	// (0x0002b5a1) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x00036aa3) list_medium_line_x3_t4_t

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t5_t1

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t5_t2

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t5_t3

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t5_t4

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x00036aac) list_medium_line_x4_t5_t

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g1

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g2

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g3

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x000369e6) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x000369e6) list_medium_line_t4_g4_g

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t1

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t2

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t3

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t4_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x000369ef) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x000369ef) list_medium_line_t4_g4_t

0x40be,	// (0x0002b8b8) chi_dic_find_pane_g1

0x0c00,	// (0x000283fa) main_tport_pane

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t1

0xeeff,	// (0x000366f9) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_t2_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_t2_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_g2_t1

0x24d9,	// (0x00029cd3) list_medium_line_t2_g2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_t2_g2_t

0xcd6f,	// (0x00034569) aid_sp_fs_list_icon_a_sm

0xcd77,	// (0x00034571) aid_sp_fs_list_icon_d

0xcd7f,	// (0x00034579) aid_sp_fs_text_primary

0xcd88,	// (0x00034582) aid_sp_fs_text_secondary

0xe7c9,	// (0x00035fc3) list_medium_line

0xe7c9,	// (0x00035fc3) list_medium_line_g2

0xe7c9,	// (0x00035fc3) list_medium_line_g3

0xe7c9,	// (0x00035fc3) list_medium_line_plain

0xe7c9,	// (0x00035fc3) list_medium_line_plain_t2

0xe7c9,	// (0x00035fc3) list_medium_line_plain_t3

0xe7c9,	// (0x00035fc3) list_medium_line_right_icon

0xe7c9,	// (0x00035fc3) list_medium_line_right_iconx2

0xe7c9,	// (0x00035fc3) list_medium_line_t2

0xe7c9,	// (0x00035fc3) list_medium_line_t2_g2

0xe7c9,	// (0x00035fc3) list_medium_line_t2_g3

0xe7c9,	// (0x00035fc3) list_medium_line_t2_right_icon

0xe7c9,	// (0x00035fc3) list_medium_line_t2_right_iconx2

0xe7c9,	// (0x00035fc3) list_medium_line_t3

0xe7c9,	// (0x00035fc3) list_medium_line_t3_g2

0xe7c9,	// (0x00035fc3) list_medium_line_t3_g3

0xe7c9,	// (0x00035fc3) list_medium_line_t3_right_iconx2

0xe7c9,	// (0x00035fc3) list_medium_line_t4_g4

0xe7c9,	// (0x00035fc3) list_medium_line_x2

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t2_g2

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t2_g3

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t2_g4

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t3

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t3_g2

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t3_g3

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t3_g4

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t4_g2

0xe7c9,	// (0x00035fc3) list_medium_line_x2_t4_g4

0xe7c9,	// (0x00035fc3) list_medium_line_x3

0xe7c9,	// (0x00035fc3) list_medium_line_x3_t4

0xe7c9,	// (0x00035fc3) list_medium_line_x3_t4_g4

0xe7c9,	// (0x00035fc3) list_medium_line_x4_t4

0xe7c9,	// (0x00035fc3) list_medium_line_x4_t4_g7

0xe7c9,	// (0x00035fc3) list_medium_line_x4_t5

0x897d,	// (0x00030177) list_single_fs_dyc_pane_ParamLimits

0x897d,	// (0x00030177) list_single_fs_dyc_pane

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x00036707) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x00036707) list_medium_line_x4_t4_g7_g7

0x0006,

0x0372,	// (0x00027b6c) list_medium_line_x4_t4_g7_g_ParamLimits

0x0372,	// (0x00027b6c) list_medium_line_x4_t4_g7_g

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t1

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t2

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x4_t4_g7_t3

0x4651,	// (0x0002be4b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4651,	// (0x0002be4b) list_medium_line_x4_t4_g7_t4

0x4651,	// (0x0002be4b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4651,	// (0x0002be4b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb33,	// (0x0003732d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb33,	// (0x0003732d) list_medium_line_x4_t4_g7_t

0x9081,	// (0x0003087b) list_single_dyc_row_pane_ParamLimits

0x9081,	// (0x0003087b) list_single_dyc_row_pane

0x98fc,	// (0x000310f6) call5_gesture_pane_ParamLimits

0x98fc,	// (0x000310f6) call5_gesture_pane

0x9952,	// (0x0003114c) call5_windows_pane_ParamLimits

0x9952,	// (0x0003114c) call5_windows_pane

0x9a13,	// (0x0003120d) call5_swipe_1_pane_cp_ParamLimits

0x9a13,	// (0x0003120d) call5_swipe_1_pane_cp

0x9a1f,	// (0x00031219) call5_swipe_2_pane_cp_ParamLimits

0x9a1f,	// (0x00031219) call5_swipe_2_pane_cp

0x246c,	// (0x00029c66) call5_image_pane_cp

0x9a2b,	// (0x00031225) popup_call5_audio_first_window_cp_ParamLimits

0x9a2b,	// (0x00031225) popup_call5_audio_first_window_cp

0xd759,	// (0x00034f53) call5_swipe_1_pane_g1_cp_ParamLimits

0xd759,	// (0x00034f53) call5_swipe_1_pane_g1_cp

0xd787,	// (0x00034f81) call5_swipe_1_pane_g2_cp

0xd772,	// (0x00034f6c) call5_swipe_1_pane_t1_cp_ParamLimits

0xd772,	// (0x00034f6c) call5_swipe_1_pane_t1_cp

0xd759,	// (0x00034f53) call5_swipe_2_pane_g1_cp_ParamLimits

0xd759,	// (0x00034f53) call5_swipe_2_pane_g1_cp

0xd78f,	// (0x00034f89) call5_swipe_2_pane_g2_cp

0xd797,	// (0x00034f91) call5_swipe_2_pane_t1_cp_ParamLimits

0xd797,	// (0x00034f91) call5_swipe_2_pane_t1_cp

0xee98,	// (0x00036692) main_sp_fs_email_pane

0xd7ac,	// (0x00034fa6) main_sp_fs_listscroll_pane_te

0x9a39,	// (0x00031233) popup_sp_fs_action_menu_pane_ParamLimits

0x9a39,	// (0x00031233) popup_sp_fs_action_menu_pane

0x265d,	// (0x00029e57) bg_sp_fs_ctrlbar_pane_g1

0xd7b5,	// (0x00034faf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7be,	// (0x00034fb8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd7c7,	// (0x00034fc1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x265d,	// (0x00029e57) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc21,	// (0x0003741b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x6ac8,	// (0x0002e2c2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x6ac8,	// (0x0002e2c2) bg_sp_fs_ctrlbar_ddmenu_pane

0xd7d0,	// (0x00034fca) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd7d0,	// (0x00034fca) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7dc,	// (0x00034fd6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd7dc,	// (0x00034fd6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2a,	// (0x00037424) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2a,	// (0x00037424) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd7e8,	// (0x00034fe2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd7e8,	// (0x00034fe2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x265d,	// (0x00029e57) list_medium_line_t2_right_icon_g1

0x3da7,	// (0x0002b5a1) list_medium_line_t2_right_icon_t1

0x3da7,	// (0x0002b5a1) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2f,	// (0x00037429) list_medium_line_t2_right_icon_t

0x4665,	// (0x0002be5f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4665,	// (0x0002be5f) bg_sp_fs_ctrlbar_pane

0x9acc,	// (0x000312c6) main_sp_fs_ctrlbar_button_pane_cp01

0x9ad6,	// (0x000312d0) main_sp_fs_ctrlbar_ddmenu_pane

0xd83c,	// (0x00035036) main_sp_fs_ctrlbar_pane_g1

0xd848,	// (0x00035042) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc34,	// (0x0003742e) main_sp_fs_ctrlbar_pane_g

0x9b14,	// (0x0003130e) main_sp_fs_ctrlbar_pane_t1

0x9b53,	// (0x0003134d) main_sp_fs_ctrlbar_pane

0x9b77,	// (0x00031371) main_sp_fs_listscroll_pane_te_cp01

0x9b97,	// (0x00031391) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9b97,	// (0x00031391) popup_sp_fs_action_menu_pane_cp01

0xee98,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xee98,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp01

0xd86f,	// (0x00035069) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd86f,	// (0x00035069) sp_fs_action_menu_list_gene_pane_g1

0xd87e,	// (0x00035078) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd87e,	// (0x00035078) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc42,	// (0x0003743c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc42,	// (0x0003743c) sp_fs_action_menu_list_gene_pane_g

0xd88b,	// (0x00035085) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd88b,	// (0x00035085) sp_fs_action_menu_list_gene_pane_t1

0xd8a3,	// (0x0003509d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd8a3,	// (0x0003509d) sp_fs_action_menu_list_gene_pane

0xd8c6,	// (0x000350c0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd8c6,	// (0x000350c0) popup_sp_fs_action_menu_bg_pane

0xd8d4,	// (0x000350ce) sp_fs_action_menu_list_pane_ParamLimits

0xd8d4,	// (0x000350ce) sp_fs_action_menu_list_pane

0x9bbc,	// (0x000313b6) sp_fs_scroll_pane_cp01_ParamLimits

0x9bbc,	// (0x000313b6) sp_fs_scroll_pane_cp01

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t2_t1

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t2_t2

0x0001,

0xfc2f,	// (0x00037429) list_medium_line_plain_t2_t

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t3_t1

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t3_t2

0x3da7,	// (0x0002b5a1) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x00036a9c) list_medium_line_plain_t3_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_x2_t2_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g2_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_x2_t4_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t2

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t3

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x000369ef) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x000369ef) list_medium_line_x2_t4_g2_t

0x265d,	// (0x00029e57) list_medium_line_t3_right_iconx2_g1

0x265d,	// (0x00029e57) list_medium_line_t3_right_iconx2_g2

0x265d,	// (0x00029e57) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00036bbd) list_medium_line_t3_right_iconx2_g

0x3da7,	// (0x0002b5a1) list_medium_line_t3_right_iconx2_t1

0x3da7,	// (0x0002b5a1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2f,	// (0x00037429) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x000369e6) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x000369e6) list_medium_line_x3_t4_g4_g

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t1

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t2

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t3

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x000369ef) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x000369ef) list_medium_line_x3_t4_g4_t

0x9be2,	// (0x000313dc) list_single_dyc_row_text_pane_t1_ParamLimits

0x9be2,	// (0x000313dc) list_single_dyc_row_text_pane_t1

0x9c2b,	// (0x00031425) list_single_dyc_row_text_pane_t2_ParamLimits

0x9c2b,	// (0x00031425) list_single_dyc_row_text_pane_t2

0xd8f8,	// (0x000350f2) list_single_dyc_row_text_pane_t3_ParamLimits

0xd8f8,	// (0x000350f2) list_single_dyc_row_text_pane_t3

0x0005,

0xfc47,	// (0x00037441) list_single_dyc_row_text_pane_t_ParamLimits

0xfc47,	// (0x00037441) list_single_dyc_row_text_pane_t

0xd91c,	// (0x00035116) list_single_dyc_row_pane_g1_ParamLimits

0xd91c,	// (0x00035116) list_single_dyc_row_pane_g1

0xd928,	// (0x00035122) list_single_dyc_row_pane_g2_ParamLimits

0xd928,	// (0x00035122) list_single_dyc_row_pane_g2

0xd934,	// (0x0003512e) list_single_dyc_row_pane_g3_ParamLimits

0xd934,	// (0x0003512e) list_single_dyc_row_pane_g3

0xd940,	// (0x0003513a) list_single_dyc_row_pane_g4_ParamLimits

0xd940,	// (0x0003513a) list_single_dyc_row_pane_g4

0x0003,

0xfc54,	// (0x0003744e) list_single_dyc_row_pane_g_ParamLimits

0xfc54,	// (0x0003744e) list_single_dyc_row_pane_g

0xd94c,	// (0x00035146) list_single_dyc_row_text_pane_ParamLimits

0xd94c,	// (0x00035146) list_single_dyc_row_text_pane

0xe7c9,	// (0x00035fc3) bg_sp_fs_scroll_pane

0xd96b,	// (0x00035165) thumb_sp_fs_scroll_pane

0xeeff,	// (0x000366f9) list_medium_line_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g1

0x24d9,	// (0x00029cd3) list_medium_line_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t1

0xeeff,	// (0x000366f9) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_x2_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t1

0xeeff,	// (0x000366f9) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x3_g1

0xc5db,	// (0x00033dd5) list_medium_line_x3_g2_ParamLimits

0xc5db,	// (0x00033dd5) list_medium_line_x3_g2

0x0001,

0xfc5d,	// (0x00037457) list_medium_line_x3_g_ParamLimits

0xfc5d,	// (0x00037457) list_medium_line_x3_g

0xd974,	// (0x0003516e) list_medium_line_x3_t1_ParamLimits

0xd974,	// (0x0003516e) list_medium_line_x3_t1

0xd988,	// (0x00035182) thumb_sp_fs_scroll_pane_g1

0xd991,	// (0x0003518b) thumb_sp_fs_scroll_pane_g2

0xd99a,	// (0x00035194) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc62,	// (0x0003745c) thumb_sp_fs_scroll_pane_g

0xd988,	// (0x00035182) bg_sp_fs_scroll_pane_g1

0xd991,	// (0x0003518b) bg_sp_fs_scroll_pane_g2

0xd99a,	// (0x00035194) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc62,	// (0x0003745c) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x000369e6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x000369e6) list_medium_line_x2_t3_g4_g

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t1

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t2

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x000366f9) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_g2_t1

0xeeff,	// (0x000366f9) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g2_g1

0xeeff,	// (0x000366f9) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x000369e1) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x000369e1) list_medium_line_t3_g2_g

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t1

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t2

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_t3_g2_t

0x265d,	// (0x00029e57) list_medium_line_right_icon_g1

0x3da7,	// (0x0002b5a1) list_medium_line_right_icon_t1

0xeeff,	// (0x000366f9) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g1

0x24d9,	// (0x00029cd3) list_medium_line_t2_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_t1

0x24d9,	// (0x00029cd3) list_medium_line_t2_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_t2_t

0xeeff,	// (0x000366f9) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g1

0x24d9,	// (0x00029cd3) list_medium_line_t3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_t1

0x24d9,	// (0x00029cd3) list_medium_line_t3_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_t2

0x24d9,	// (0x00029cd3) list_medium_line_t3_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_t3_t

0xeeff,	// (0x000366f9) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g3_g1

0xeeff,	// (0x000366f9) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g3_g2

0xeeff,	// (0x000366f9) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x000369d3) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x000369d3) list_medium_line_g3_g

0x24d9,	// (0x00029cd3) list_medium_line_g3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_g3_t1

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g1

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g2

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x000369d3) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x000369d3) list_medium_line_t2_g3_g

0x24d9,	// (0x00029cd3) list_medium_line_t2_g3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_g3_t1

0x24d9,	// (0x00029cd3) list_medium_line_t2_g3_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x000369b6) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x000369b6) list_medium_line_t2_g3_t

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g1

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g2

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x000366f9) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x000369d3) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x000369d3) list_medium_line_t3_g3_g

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t1_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t1

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t2_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t2

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t3_ParamLimits

0x24d9,	// (0x00029cd3) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000369da) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000369da) list_medium_line_t3_g3_t

0x265d,	// (0x00029e57) list_medium_line_right_iconx2_g1

0x265d,	// (0x00029e57) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x00036bb8) list_medium_line_right_iconx2_g

0x3da7,	// (0x0002b5a1) list_medium_line_right_iconx2_t1

0x265d,	// (0x00029e57) list_medium_line_t2_right_iconx2_g1

0x265d,	// (0x00029e57) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x00036bb8) list_medium_line_t2_right_iconx2_g

0x3da7,	// (0x0002b5a1) list_medium_line_t2_right_iconx2_t1

0x3da7,	// (0x0002b5a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc2f,	// (0x00037429) list_medium_line_t2_right_iconx2_t

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t4_t1

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t4_t2

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t4_t3

0x3da7,	// (0x0002b5a1) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x00036aa3) list_medium_line_x4_t4_t

0x9da1,	// (0x0003159b) tport_appsw_pane_ParamLimits

0x9da1,	// (0x0003159b) tport_appsw_pane

0x9db8,	// (0x000315b2) tport_contact_pane_ParamLimits

0x9db8,	// (0x000315b2) tport_contact_pane

0x9dd0,	// (0x000315ca) tport_listscroll_pane_ParamLimits

0x9dd0,	// (0x000315ca) tport_listscroll_pane

0x9de4,	// (0x000315de) cell_tport_appsw_pane_ParamLimits

0x9de4,	// (0x000315de) cell_tport_appsw_pane

0x462f,	// (0x0002be29) tport_appsw_pane_g1_ParamLimits

0x462f,	// (0x0002be29) tport_appsw_pane_g1

0xd9a3,	// (0x0003519d) tport_contact_pane_g1

0xd9ac,	// (0x000351a6) tport_contact_pane_t1

0xd9ba,	// (0x000351b4) tport_contact_pane_t2

0x0001,

0xfc69,	// (0x00037463) tport_contact_pane_t

0xd9c8,	// (0x000351c2) list_tport_pane

0xd9d1,	// (0x000351cb) scroll_pane_cp_030

0x9e2e,	// (0x00031628) cell_tport_appsw_pane_g1

0x9e3e,	// (0x00031638) cell_tport_appsw_pane_t1

0x9e4c,	// (0x00031646) grid_highlight_pane_cp019

0x9e54,	// (0x0003164e) list_tport_double_graphic_pane_ParamLimits

0x9e54,	// (0x0003164e) list_tport_double_graphic_pane

0xee98,	// (0x00036692) list_highlight_pane_cp023_ParamLimits

0xee98,	// (0x00036692) list_highlight_pane_cp023

0x9e6b,	// (0x00031665) list_tport_double_graphic_pane_g1_ParamLimits

0x9e6b,	// (0x00031665) list_tport_double_graphic_pane_g1

0x9e78,	// (0x00031672) list_tport_double_graphic_pane_t1_ParamLimits

0x9e78,	// (0x00031672) list_tport_double_graphic_pane_t1

0x9e8d,	// (0x00031687) list_tport_double_graphic_pane_t2_ParamLimits

0x9e8d,	// (0x00031687) list_tport_double_graphic_pane_t2

0x0001,

0xfc75,	// (0x0003746f) list_tport_double_graphic_pane_t_ParamLimits

0xfc75,	// (0x0003746f) list_tport_double_graphic_pane_t

0xe7c9,	// (0x00035fc3) main_cale_note_pane

0x1840,	// (0x0002903a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1840,	// (0x0002903a) cell_vitu2_function_top_wide_pane_cp01

0x9421,	// (0x00030c1b) wait_bar_pane_cp05_ParamLimits

0xee98,	// (0x00036692) listscroll_cmail_pane

0xd9da,	// (0x000351d4) list_cmail_pane

0x9e9f,	// (0x00031699) list_cmail_body_pane

0x9eb6,	// (0x000316b0) list_single_cmail_header_caption_pane

0xd9ea,	// (0x000351e4) list_single_cmail_header_detail_pane_ParamLimits

0xd9ea,	// (0x000351e4) list_single_cmail_header_detail_pane

0xda1c,	// (0x00035216) list_single_cmail_header_caption_pane_t1

0x9ed3,	// (0x000316cd) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9ed3,	// (0x000316cd) list_single_cmail_header_detail_pane_g1

0xda33,	// (0x0003522d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xda33,	// (0x0003522d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7a,	// (0x00037474) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7a,	// (0x00037474) list_single_cmail_header_detail_pane_g

0xda4c,	// (0x00035246) list_single_cmail_header_detail_pane_t1_ParamLimits

0xda4c,	// (0x00035246) list_single_cmail_header_detail_pane_t1

0xdaac,	// (0x000352a6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdaac,	// (0x000352a6) list_single_cmail_header_editor_pane_bg

0xd525,	// (0x00034d1f) list_cmail_body_pane_g1

0xdac3,	// (0x000352bd) list_cmail_body_pane_t1

0xc747,	// (0x00033f41) list_single_cmail_header_editor_pane_bg_g1

0x2d33,	// (0x0002a52d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc757,	// (0x00033f51) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc74f,	// (0x00033f49) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc9b2,	// (0x000341ac) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc777,	// (0x00033f71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc767,	// (0x00033f61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc76f,	// (0x00033f69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2d13,	// (0x0002a50d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9eeb,	// (0x000316e5) calenote_gesture_pane_ParamLimits

0x9eeb,	// (0x000316e5) calenote_gesture_pane

0x9f0b,	// (0x00031705) calenote_window_pane_ParamLimits

0x9f0b,	// (0x00031705) calenote_window_pane

0xdad1,	// (0x000352cb) popup_note_window_cp01

0x9f27,	// (0x00031721) calenote_swipe_1_pane_ParamLimits

0x9f27,	// (0x00031721) calenote_swipe_1_pane

0x9a1f,	// (0x00031219) calenote_swipe_2_pane_ParamLimits

0x9a1f,	// (0x00031219) calenote_swipe_2_pane

0xd759,	// (0x00034f53) calenote_swipe_1_pane_g1_ParamLimits

0xd759,	// (0x00034f53) calenote_swipe_1_pane_g1

0xd766,	// (0x00034f60) calenote_swipe_1_pane_g2_ParamLimits

0xd766,	// (0x00034f60) calenote_swipe_1_pane_g2

0x0001,

0xfc17,	// (0x00037411) calenote_swipe_1_pane_g_ParamLimits

0xfc17,	// (0x00037411) calenote_swipe_1_pane_g

0xdae3,	// (0x000352dd) calenote_swipe_1_pane_t1_ParamLimits

0xdae3,	// (0x000352dd) calenote_swipe_1_pane_t1

0xd759,	// (0x00034f53) calenote_swipe_2_pane_g1_ParamLimits

0xd759,	// (0x00034f53) calenote_swipe_2_pane_g1

0xdb02,	// (0x000352fc) calenote_swipe_2_pane_g2_ParamLimits

0xdb02,	// (0x000352fc) calenote_swipe_2_pane_g2

0x0001,

0xfc86,	// (0x00037480) calenote_swipe_2_pane_g_ParamLimits

0xfc86,	// (0x00037480) calenote_swipe_2_pane_g

0xdb0e,	// (0x00035308) calenote_swipe_2_pane_t1_ParamLimits

0xdb0e,	// (0x00035308) calenote_swipe_2_pane_t1

0xe7c9,	// (0x00035fc3) main_mup_navstr_pane

0x7413,	// (0x0002ec0d) main_mup3_pane_t7_ParamLimits

0x7413,	// (0x0002ec0d) main_mup3_pane_t7

0xc2ca,	// (0x00033ac4) main_mp4_pane_g6_ParamLimits

0xc2ca,	// (0x00033ac4) main_mp4_pane_g6

0xc51b,	// (0x00033d15) main_image3_pane_t4_ParamLimits

0xc51b,	// (0x00033d15) main_image3_pane_t4

0x9f3c,	// (0x00031736) popup_navstr_preview_pane_ParamLimits

0x9f3c,	// (0x00031736) popup_navstr_preview_pane

0x9f4c,	// (0x00031746) scroll_navstr_pane_ParamLimits

0x9f4c,	// (0x00031746) scroll_navstr_pane

0xe7c9,	// (0x00035fc3) bg_popup_preview_window_pane_cp04

0xdb35,	// (0x0003532f) popup_navstr_preview_pane_t1

0x9f60,	// (0x0003175a) scroll_navstr_pane_g1_ParamLimits

0x9f60,	// (0x0003175a) scroll_navstr_pane_g1

0x9f74,	// (0x0003176e) scroll_navstr_pane_t1_ParamLimits

0x9f74,	// (0x0003176e) scroll_navstr_pane_t1

0xdada,	// (0x000352d4) bg_button_pane_cp014

0xdada,	// (0x000352d4) bg_button_pane_cp030

0x98a2,	// (0x0003109c) list_double_fisheye_pane_g4_ParamLimits

0x98a2,	// (0x0003109c) list_double_fisheye_pane_g4

0x98ae,	// (0x000310a8) list_double_fisheye_pane_g5_ParamLimits

0x98ae,	// (0x000310a8) list_double_fisheye_pane_g5

0xb826,	// (0x00033020) sp_fs_scroll_pane_cp03

0xd83c,	// (0x00035036) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd848,	// (0x00035042) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc34,	// (0x0003742e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9b14,	// (0x0003130e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd9e2,	// (0x000351dc) sp_fs_scroll_pane_cp02

0x1ec7,	// (0x000296c1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1ec7,	// (0x000296c1) popup_sp_fs_calendar_preview_list_single_pane

0xe7c9,	// (0x00035fc3) main_cam6_pano_pane

0xb748,	// (0x00032f42) main_mup3_pane_ParamLimits

0xe7c9,	// (0x00035fc3) main_phacti_pane

0x92f2,	// (0x00030aec) bg_button_pane_cp11

0x930c,	// (0x00030b06) main_mobtv_info_pane_g2_ParamLimits

0x930c,	// (0x00030b06) main_mobtv_info_pane_g2

0x0001,

0xfb94,	// (0x0003738e) main_mobtv_info_pane_g_ParamLimits

0xfb94,	// (0x0003738e) main_mobtv_info_pane_g

0x94e9,	// (0x00030ce3) sc_clock_pane_t5_ParamLimits

0x94e9,	// (0x00030ce3) sc_clock_pane_t5

0x971d,	// (0x00030f17) main_radioblah_pane_g1_ParamLimits

0xd68b,	// (0x00034e85) main_radioblah_pane_t3_ParamLimits

0xd68b,	// (0x00034e85) main_radioblah_pane_t3

0xd6a3,	// (0x00034e9d) main_radioblah_pane_t4_ParamLimits

0xd6a3,	// (0x00034e9d) main_radioblah_pane_t4

0x9745,	// (0x00030f3f) main_radioblah_text_pane_ParamLimits

0x9745,	// (0x00030f3f) main_radioblah_text_pane

0x9757,	// (0x00030f51) main_radioblah_info_pane_g1_ParamLimits

0x97f0,	// (0x00030fea) main_radioblah_info_pane_t4_ParamLimits

0x97f0,	// (0x00030fea) main_radioblah_info_pane_t4

0xee98,	// (0x00036692) main_sp_fs_calendar_pane

0x9f8b,	// (0x00031785) main_phacti_pane_g1

0x9f93,	// (0x0003178d) phacti_note_pane_ParamLimits

0x9f93,	// (0x0003178d) phacti_note_pane

0xdb4c,	// (0x00035346) phacti_term_pane_ParamLimits

0xdb4c,	// (0x00035346) phacti_term_pane

0xdb61,	// (0x0003535b) phacti_note_pane_t1_ParamLimits

0xdb61,	// (0x0003535b) phacti_note_pane_t1

0xdb78,	// (0x00035372) phacti_term_pane_g1

0xdb80,	// (0x0003537a) phacti_term_pane_t1_ParamLimits

0xdb80,	// (0x0003537a) phacti_term_pane_t1

0xdbaa,	// (0x000353a4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdbb2,	// (0x000353ac) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc90,	// (0x0003748a) popup_sp_fs_calendar_preview_list_single_pane_g

0xdbba,	// (0x000353b4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdbba,	// (0x000353b4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdbd0,	// (0x000353ca) aid_popup_sp_fs_bg_corner_pane

0x265d,	// (0x00029e57) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7c9,	// (0x00035fc3) popup_sp_fs_calendar_preview_bg_pane

0xdbd8,	// (0x000353d2) popup_sp_fs_calendar_preview_list_pane

0x4665,	// (0x0002be5f) bg_main_sp_fs_cale_pane_ParamLimits

0x4665,	// (0x0002be5f) bg_main_sp_fs_cale_pane

0xdbe9,	// (0x000353e3) listscroll_cale_mrui_pane_ParamLimits

0xdbe9,	// (0x000353e3) listscroll_cale_mrui_pane

0xdbfe,	// (0x000353f8) listscroll_sp_fs_schedule_track_pane

0xdc07,	// (0x00035401) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdc07,	// (0x00035401) main_sp_fs_ctrlbar_pane_cp01

0xdc1a,	// (0x00035414) main_sp_fs_ribbon_pane

0xdc22,	// (0x0003541c) popup_sp_fs_cale_preview_window

0xa008,	// (0x00031802) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa008,	// (0x00031802) list_single_sp_fs_schedule_track_pane

0xee98,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xee98,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp03

0xa01c,	// (0x00031816) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa01c,	// (0x00031816) list_single_sp_fs_schedule_track_pane_g1

0xa028,	// (0x00031822) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa028,	// (0x00031822) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc95,	// (0x0003748f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc95,	// (0x0003748f) list_single_sp_fs_schedule_track_pane_g

0xa034,	// (0x0003182e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa034,	// (0x0003182e) list_single_sp_fs_schedule_track_pane_t1

0xa056,	// (0x00031850) sp_fs_schedule_track_pane_ParamLimits

0xa056,	// (0x00031850) sp_fs_schedule_track_pane

0xdc34,	// (0x0003542e) sp_fs_schedule_track_pane_g1

0xdc3c,	// (0x00035436) sp_fs_schedule_track_pane_g2

0xdc44,	// (0x0003543e) sp_fs_schedule_track_pane_g3

0xdc4c,	// (0x00035446) sp_fs_schedule_track_pane_g4

0xdc54,	// (0x0003544e) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9a,	// (0x00037494) sp_fs_schedule_track_pane_g

0xc747,	// (0x00033f41) bg_sp_fs_schedule_viewer_highlight_g1

0x2d33,	// (0x0002a52d) bg_sp_fs_schedule_viewer_highlight_g2

0xc74f,	// (0x00033f49) bg_sp_fs_schedule_viewer_highlight_g3

0xc757,	// (0x00033f51) bg_sp_fs_schedule_viewer_highlight_g4

0xc9b2,	// (0x000341ac) bg_sp_fs_schedule_viewer_highlight_g5

0xc767,	// (0x00033f61) bg_sp_fs_schedule_viewer_highlight_g6

0xc76f,	// (0x00033f69) bg_sp_fs_schedule_viewer_highlight_g7

0xc777,	// (0x00033f71) bg_sp_fs_schedule_viewer_highlight_g8

0x2d13,	// (0x0002a50d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca5,	// (0x0003749f) bg_sp_fs_schedule_viewer_highlight_g

0xe7c9,	// (0x00035fc3) bg_main_sp_fs_ribbon_pane

0xa06b,	// (0x00031865) main_sp_fs_ribbon_pane_g1

0xdc5c,	// (0x00035456) main_sp_fs_ribbon_pane_t1

0xa074,	// (0x0003186e) main_sp_fs_ribbon_pane_t2

0xdc6b,	// (0x00035465) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb8,	// (0x000374b2) main_sp_fs_ribbon_pane_t

0xdc7a,	// (0x00035474) main_sp_fs_ribbon_scheduler_pane

0xdc82,	// (0x0003547c) bg_main_sp_fs_ribbon_pane_g1

0xdc8b,	// (0x00035485) bg_main_sp_fs_ribbon_pane_g2

0xdc94,	// (0x0003548e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcbf,	// (0x000374b9) bg_main_sp_fs_ribbon_pane_g

0xdc9c,	// (0x00035496) main_sp_fs_ribbon_scheduler_pane_g1

0xdca5,	// (0x0003549f) main_sp_fs_ribbon_scheduler_pane_g2

0xdcae,	// (0x000354a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc6,	// (0x000374c0) main_sp_fs_ribbon_scheduler_pane_g

0xdcb7,	// (0x000354b1) list_cale_mrui_pane

0xa083,	// (0x0003187d) sp_fs_scroll_pane_cp07_ParamLimits

0xa083,	// (0x0003187d) sp_fs_scroll_pane_cp07

0xa09f,	// (0x00031899) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa09f,	// (0x00031899) bg_sp_fs_schedule_viewer_highlight

0xdcc4,	// (0x000354be) list_single_sp_fs_schedule_track_pane_cp01

0xdccc,	// (0x000354c6) list_sp_fs_schedule_track_pane

0xdcd4,	// (0x000354ce) sp_fs_scroll_pane_cp06_ParamLimits

0xdcd4,	// (0x000354ce) sp_fs_scroll_pane_cp06

0x265d,	// (0x00029e57) bgmain_sp_fs_calendar_pane_g1

0xa0b1,	// (0x000318ab) list_single_cale_mrui_pane_ParamLimits

0xa0b1,	// (0x000318ab) list_single_cale_mrui_pane

0xdce6,	// (0x000354e0) list_single_cale_mrui_row_pane_ParamLimits

0xdce6,	// (0x000354e0) list_single_cale_mrui_row_pane

0xdcf3,	// (0x000354ed) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdcf3,	// (0x000354ed) list_single_cale_mrui_row_pane_g1

0xdd38,	// (0x00035532) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdd38,	// (0x00035532) list_single_cale_mrui_row_pane_t1

0xa0d4,	// (0x000318ce) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa0d4,	// (0x000318ce) list_single_cale_mrui_row_pane_t2

0xdd4a,	// (0x00035544) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdd4a,	// (0x00035544) list_single_cale_mrui_row_pane_t3

0xdd79,	// (0x00035573) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdd79,	// (0x00035573) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd4,	// (0x000374ce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd4,	// (0x000374ce) list_single_cale_mrui_row_pane_t

0xa13a,	// (0x00031934) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa13a,	// (0x00031934) list_single_cmail_header_editor_pane_bg_cp01

0xa15e,	// (0x00031958) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa15e,	// (0x00031958) list_single_cmail_header_editor_pane_bg_cp02

0xa17c,	// (0x00031976) main_radioblah_text_pane_t1_ParamLimits

0xa17c,	// (0x00031976) main_radioblah_text_pane_t1

0xddaa,	// (0x000355a4) cam6_indi_pane_cp01

0xddb2,	// (0x000355ac) cam6_mode_pane_cp01

0xddba,	// (0x000355b4) cam6_pano_pane

0xddc3,	// (0x000355bd) cam6_zoom_pane_cp01

0xddcd,	// (0x000355c7) cam6_pano_image_pane

0xddd6,	// (0x000355d0) cam6_pano_pane_g1

0xd525,	// (0x00034d1f) cam6_pano_pane_g2

0xdddf,	// (0x000355d9) cam6_pano_pane_g3

0xdde8,	// (0x000355e2) cam6_pano_pane_g4

0xbfbd,	// (0x000337b7) cam6_pano_pane_g5

0xddf1,	// (0x000355eb) cam6_pano_pane_g6

0xddf9,	// (0x000355f3) cam6_pano_pane_g7

0xde01,	// (0x000355fb) cam6_pano_pane_g8

0xde0a,	// (0x00035604) cam6_pano_pane_g9

0x0008,

0xfcdd,	// (0x000374d7) cam6_pano_pane_g

0xe7c9,	// (0x00035fc3) main_browser_tag_pane

0xdb2d,	// (0x00035327) grid_navstr_albumart_pane

0xde15,	// (0x0003560f) cell_navstr_albumart_pane_ParamLimits

0xde15,	// (0x0003560f) cell_navstr_albumart_pane

0xde31,	// (0x0003562b) cell_navstr_albumart_pane_g1

0x618e,	// (0x0002d988) cell_navstr_albumart_pane_g2

0x619e,	// (0x0002d998) cell_navstr_albumart_pane_g3

0x6196,	// (0x0002d990) cell_navstr_albumart_pane_g4

0x0003,

0xfcf0,	// (0x000374ea) cell_navstr_albumart_pane_g

0xa197,	// (0x00031991) bt_list_pane_ParamLimits

0xa197,	// (0x00031991) bt_list_pane

0xa1ad,	// (0x000319a7) bt_list_pane_t1

0xa1bc,	// (0x000319b6) bt_list_pane_t2

0x0001,

0xfcf9,	// (0x000374f3) bt_list_pane_t

0xe7c9,	// (0x00035fc3) main_cale_prevew_pane

0xa1cb,	// (0x000319c5) popup_cale_preview_window_ParamLimits

0xa1cb,	// (0x000319c5) popup_cale_preview_window

0xee98,	// (0x00036692) bg_popup_preview_window_pane_cp05_ParamLimits

0xee98,	// (0x00036692) bg_popup_preview_window_pane_cp05

0xde39,	// (0x00035633) list_cale_preview_pane_ParamLimits

0xde39,	// (0x00035633) list_cale_preview_pane

0xa1e8,	// (0x000319e2) list_double_cale_preview_pane_ParamLimits

0xa1e8,	// (0x000319e2) list_double_cale_preview_pane

0xa1fc,	// (0x000319f6) list_single_cale_preview_pane_ParamLimits

0xa1fc,	// (0x000319f6) list_single_cale_preview_pane

0xa214,	// (0x00031a0e) list_single_cale_preview_pane_g1

0xa21c,	// (0x00031a16) list_single_cale_preview_pane_t1_ParamLimits

0xa21c,	// (0x00031a16) list_single_cale_preview_pane_t1

0xa231,	// (0x00031a2b) list_double_cale_preview_pane_g1

0xa239,	// (0x00031a33) list_double_cale_preview_pane_t1_ParamLimits

0xa239,	// (0x00031a33) list_double_cale_preview_pane_t1

0xa24e,	// (0x00031a48) list_double_cale_preview_pane_t2_ParamLimits

0xa24e,	// (0x00031a48) list_double_cale_preview_pane_t2

0x0001,

0xfcfe,	// (0x000374f8) list_double_cale_preview_pane_t_ParamLimits

0xfcfe,	// (0x000374f8) list_double_cale_preview_pane_t

0xe7c9,	// (0x00035fc3) main_ezdial_pane

0xee98,	// (0x00036692) main_sp_fs_email_pane_ParamLimits

0x9a7f,	// (0x00031279) cmail_ddmenu_btn01_pane_ParamLimits

0x9a7f,	// (0x00031279) cmail_ddmenu_btn01_pane

0x9a92,	// (0x0003128c) cmail_ddmenu_btn02_pane_ParamLimits

0x9a92,	// (0x0003128c) cmail_ddmenu_btn02_pane

0x9ab5,	// (0x000312af) cmail_ddmenu_btn03_pane_ParamLimits

0x9ab5,	// (0x000312af) cmail_ddmenu_btn03_pane

0x9b53,	// (0x0003134d) main_sp_fs_ctrlbar_pane_ParamLimits

0x9b77,	// (0x00031371) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9e9f,	// (0x00031699) list_cmail_body_pane_ParamLimits

0xda2a,	// (0x00035224) bg_button_pane_cp12

0xda3f,	// (0x00035239) list_single_cmail_header_detail_pane_g3_ParamLimits

0xda3f,	// (0x00035239) list_single_cmail_header_detail_pane_g3

0xda88,	// (0x00035282) list_single_cmail_header_detail_pane_t2_ParamLimits

0xda88,	// (0x00035282) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc81,	// (0x0003747b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc81,	// (0x0003747b) list_single_cmail_header_detail_pane_t

0xdb95,	// (0x0003538f) phacti_term_pane_t2_ParamLimits

0xdb95,	// (0x0003538f) phacti_term_pane_t2

0x0001,

0xfc8b,	// (0x00037485) phacti_term_pane_t_ParamLimits

0xfc8b,	// (0x00037485) phacti_term_pane_t

0xde45,	// (0x0003563f) aid_size_list_single_double

0xa266,	// (0x00031a60) popup_ezdial_listscroll_window

0xa282,	// (0x00031a7c) popup_number_entry_window_cp01

0x246c,	// (0x00029c66) bg_popup_call_pane_cp09

0xde51,	// (0x0003564b) ezdial_list_pane

0xde59,	// (0x00035653) scroll_pane_cp23

0x4665,	// (0x0002be5f) bg_button_pane_cp028_ParamLimits

0x4665,	// (0x0002be5f) bg_button_pane_cp028

0xa290,	// (0x00031a8a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa290,	// (0x00031a8a) cmail_ddmenu_btn01_pane_g1

0xa29f,	// (0x00031a99) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa29f,	// (0x00031a99) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd03,	// (0x000374fd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd03,	// (0x000374fd) cmail_ddmenu_btn01_pane_g

0xde61,	// (0x0003565b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xde61,	// (0x0003565b) cmail_ddmenu_btn01_pane_t1

0x4665,	// (0x0002be5f) bg_button_pane_cp029_ParamLimits

0x4665,	// (0x0002be5f) bg_button_pane_cp029

0xa2b5,	// (0x00031aaf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa2b5,	// (0x00031aaf) cmail_ddmenu_btn02_pane_g1

0xa2d0,	// (0x00031aca) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa2d0,	// (0x00031aca) cmail_ddmenu_btn02_pane_t1

0xee98,	// (0x00036692) bg_button_pane_cp031_ParamLimits

0xee98,	// (0x00036692) bg_button_pane_cp031

0xa2b5,	// (0x00031aaf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa2b5,	// (0x00031aaf) cmail_ddmenu_btn03_pane_g1

0xa2d0,	// (0x00031aca) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa2d0,	// (0x00031aca) cmail_ddmenu_btn03_pane_t1

0x7b5a,	// (0x0002f354) cell_dialer2_keypad_pane_t1_ParamLimits

0x7b74,	// (0x0002f36e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7b74,	// (0x0002f36e) cell_dialer2_keypad_pane_t1_copy1

0x9113,	// (0x0003090d) ncimui_group_button_pane

0xee98,	// (0x00036692) main_sp_fs_calendar_pane_ParamLimits

0x9eb6,	// (0x000316b0) list_single_cmail_header_caption_pane_ParamLimits

0xdbe0,	// (0x000353da) aid_recal_txt_sm_pane

0xe7c9,	// (0x00035fc3) mian_recal_day_pane

0xdc22,	// (0x0003541c) popup_sp_fs_cale_preview_window_ParamLimits

0xde77,	// (0x00035671) list_recal_day_pane

0xdeba,	// (0x000356b4) list_single_recal_day_pane_ParamLimits

0xdeba,	// (0x000356b4) list_single_recal_day_pane

0xdecc,	// (0x000356c6) list_single_recal_day_pane_g1_ParamLimits

0xdecc,	// (0x000356c6) list_single_recal_day_pane_g1

0xded8,	// (0x000356d2) list_single_recal_day_pane_g2_ParamLimits

0xded8,	// (0x000356d2) list_single_recal_day_pane_g2

0xdee4,	// (0x000356de) list_single_recal_day_pane_g3_ParamLimits

0xdee4,	// (0x000356de) list_single_recal_day_pane_g3

0xa2f7,	// (0x00031af1) list_single_recal_day_pane_g4_ParamLimits

0xa2f7,	// (0x00031af1) list_single_recal_day_pane_g4

0xdef0,	// (0x000356ea) list_single_recal_day_pane_g5_ParamLimits

0xdef0,	// (0x000356ea) list_single_recal_day_pane_g5

0xdefc,	// (0x000356f6) list_single_recal_day_pane_g6_ParamLimits

0xdefc,	// (0x000356f6) list_single_recal_day_pane_g6

0x0004,

0xfd12,	// (0x0003750c) list_single_recal_day_pane_g_ParamLimits

0xfd12,	// (0x0003750c) list_single_recal_day_pane_g

0xdf10,	// (0x0003570a) list_single_recal_day_pane_t1

0xdf22,	// (0x0003571c) list_single_recal_day_pane_t2

0x0001,

0xfd1d,	// (0x00037517) list_single_recal_day_pane_t

0xa30f,	// (0x00031b09) ncimui_query_button_pane_ParamLimits

0xa30f,	// (0x00031b09) ncimui_query_button_pane

0xa31f,	// (0x00031b19) ncimui_query_button_pane_t1_ParamLimits

0xa31f,	// (0x00031b19) ncimui_query_button_pane_t1

0xdf34,	// (0x0003572e) ncimui_query_button_pane_t2_ParamLimits

0xdf34,	// (0x0003572e) ncimui_query_button_pane_t2

0x0001,

0xfd22,	// (0x0003751c) ncimui_query_button_pane_t_ParamLimits

0xfd22,	// (0x0003751c) ncimui_query_button_pane_t

0xa332,	// (0x00031b2c) query_button_pane_ParamLimits

0xa332,	// (0x00031b2c) query_button_pane

0xe7c9,	// (0x00035fc3) bg_button_pane_cp0028

0xdf47,	// (0x00035741) query_button_pane_t1

0x0c00,	// (0x000283fa) main_tport_pane_ParamLimits

0x9d60,	// (0x0003155a) bg_popup_window_pane_cp01_ParamLimits

0x9d60,	// (0x0003155a) bg_popup_window_pane_cp01

0x9d79,	// (0x00031573) heading_pane_cp08_ParamLimits

0x9d79,	// (0x00031573) heading_pane_cp08

0x9d8c,	// (0x00031586) heading_pane_cp07_ParamLimits

0x9d8c,	// (0x00031586) heading_pane_cp07

0x9e2e,	// (0x00031628) cell_tport_appsw_pane_g2

0x0002,

0xfc6e,	// (0x00037468) cell_tport_appsw_pane_g

0x4941,	// (0x0002c13b) input_candi_list_open_g1

0x3bd4,	// (0x0002b3ce) list_cale_time_pane_g6_ParamLimits

0x3bd4,	// (0x0002b3ce) list_cale_time_pane_g6

0x6d2e,	// (0x0002e528) aid_size_touch_calib_1_ParamLimits

0x6d2e,	// (0x0002e528) aid_size_touch_calib_1

0x6d40,	// (0x0002e53a) aid_size_touch_calib_2_ParamLimits

0x6d40,	// (0x0002e53a) aid_size_touch_calib_2

0x6d58,	// (0x0002e552) aid_size_touch_calib_3_ParamLimits

0x6d58,	// (0x0002e552) aid_size_touch_calib_3

0x6d76,	// (0x0002e570) aid_size_touch_calib_4_ParamLimits

0x6d76,	// (0x0002e570) aid_size_touch_calib_4

0x6d8e,	// (0x0002e588) main_touch_calib_button_group_pane_ParamLimits

0x6d8e,	// (0x0002e588) main_touch_calib_button_group_pane

0x6da6,	// (0x0002e5a0) main_touch_calib_pane_g1_ParamLimits

0x6db8,	// (0x0002e5b2) main_touch_calib_pane_g2_ParamLimits

0x6dca,	// (0x0002e5c4) main_touch_calib_pane_g3_ParamLimits

0x6ddc,	// (0x0002e5d6) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x00036eb9) main_touch_calib_pane_g_ParamLimits

0x6dee,	// (0x0002e5e8) main_touch_calib_pane_t1_ParamLimits

0x6e08,	// (0x0002e602) main_touch_calib_pane_t2_ParamLimits

0x6e22,	// (0x0002e61c) main_touch_calib_pane_t3_ParamLimits

0x6e36,	// (0x0002e630) main_touch_calib_pane_t4_ParamLimits

0x6e4c,	// (0x0002e646) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x00036ec2) main_touch_calib_pane_t_ParamLimits

0xbd70,	// (0x0003356a) list_single_fp_cale_pane_g3_ParamLimits

0xbd70,	// (0x0003356a) list_single_fp_cale_pane_g3

0xb748,	// (0x00032f42) bg_button_pane_cp012_ParamLimits

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp03_ParamLimits

0x1a61,	// (0x0002925b) cell_vitu2_function_top_pane_g1_ParamLimits

0xb748,	// (0x00032f42) bg_vkb2_func_pane_cp04_ParamLimits

0x909e,	// (0x00030898) main_ncimui_button_group_pane_ParamLimits

0x909e,	// (0x00030898) main_ncimui_button_group_pane

0x90fe,	// (0x000308f8) main_ncimui_pane_t3_ParamLimits

0x90fe,	// (0x000308f8) main_ncimui_pane_t3

0xdb43,	// (0x0003533d) phacti_button_group_pane

0xde45,	// (0x0003563f) aid_size_list_single_double_ParamLimits

0xa266,	// (0x00031a60) popup_ezdial_listscroll_window_ParamLimits

0xa282,	// (0x00031a7c) popup_number_entry_window_cp01_ParamLimits

0xa345,	// (0x00031b3f) phacti_button_pane_ParamLimits

0xa345,	// (0x00031b3f) phacti_button_pane

0xe7c9,	// (0x00035fc3) bg_button_pane_cp14

0xdf55,	// (0x0003574f) phacti_button_pane_t1

0xa356,	// (0x00031b50) main_touch_calib_button_pane_ParamLimits

0xa356,	// (0x00031b50) main_touch_calib_button_pane

0xef71,	// (0x0003676b) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x0003676b) bg_button_pane_cp18

0xdf63,	// (0x0003575d) main_touch_calib_button_pane_t1_ParamLimits

0xdf63,	// (0x0003575d) main_touch_calib_button_pane_t1

0xdf79,	// (0x00035773) main_touch_calib_button_pane_t2_ParamLimits

0xdf79,	// (0x00035773) main_touch_calib_button_pane_t2

0x0001,

0xfd27,	// (0x00037521) main_touch_calib_button_pane_t_ParamLimits

0xfd27,	// (0x00037521) main_touch_calib_button_pane_t

0xe7c9,	// (0x00035fc3) cell_ncimui_button_pane

0xe7c9,	// (0x00035fc3) bg_button_pane_cp032

0xdf97,	// (0x00035791) cell_ncimui_button_pane_t1

0xc4f9,	// (0x00033cf3) image3_infobar_pane_ParamLimits

0xc4f9,	// (0x00033cf3) image3_infobar_pane

0x9515,	// (0x00030d0f) fs_bigclock_status_pane_ParamLimits

0x9515,	// (0x00030d0f) fs_bigclock_status_pane

0x9522,	// (0x00030d1c) main_fs_bigclock_clock_pane_ParamLimits

0x9522,	// (0x00030d1c) main_fs_bigclock_clock_pane

0x9554,	// (0x00030d4e) main_fs_bigclock_indi_pane_ParamLimits

0x9554,	// (0x00030d4e) main_fs_bigclock_indi_pane

0x9594,	// (0x00030d8e) main_fs_bigclock_swipe_pane_ParamLimits

0x9594,	// (0x00030d8e) main_fs_bigclock_swipe_pane

0xe7c9,	// (0x00035fc3) main_fs_clock_dumped_data

0x95e0,	// (0x00030dda) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x95e0,	// (0x00030dda) list_single_fs_bigclock_indicator_pane_g1

0x95f9,	// (0x00030df3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x95f9,	// (0x00030df3) list_single_fs_bigclock_indicator_pane_g2

0x9613,	// (0x00030e0d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9613,	// (0x00030e0d) list_single_fs_bigclock_indicator_pane_g3

0x962d,	// (0x00030e27) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x962d,	// (0x00030e27) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc8,	// (0x000373c2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc8,	// (0x000373c2) list_single_fs_bigclock_indicator_pane_g

0x965c,	// (0x00030e56) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x965c,	// (0x00030e56) list_single_fs_bigclock_indicator_pane_t1

0x9684,	// (0x00030e7e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9684,	// (0x00030e7e) list_single_fs_bigclock_indicator_pane_t2

0x96ac,	// (0x00030ea6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x96ac,	// (0x00030ea6) list_single_fs_bigclock_indicator_pane_t3

0x96d4,	// (0x00030ece) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x96d4,	// (0x00030ece) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd3,	// (0x000373cd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd3,	// (0x000373cd) list_single_fs_bigclock_indicator_pane_t

0xdfa5,	// (0x0003579f) image3_infobar_fav_pane_ParamLimits

0xdfa5,	// (0x0003579f) image3_infobar_fav_pane

0xdfb5,	// (0x000357af) image3_infobar_loc_pane_ParamLimits

0xdfb5,	// (0x000357af) image3_infobar_loc_pane

0xdfcb,	// (0x000357c5) image3_infobar_time_pane_ParamLimits

0xdfcb,	// (0x000357c5) image3_infobar_time_pane

0x265d,	// (0x00029e57) image3_infobar_time_pane_g1

0xdfdb,	// (0x000357d5) image3_infobar_time_pane_t1

0x265d,	// (0x00029e57) image3_infobar_loc_pane_g1

0xdfe9,	// (0x000357e3) image3_infobar_loc_pane_g2

0x0001,

0xfd2c,	// (0x00037526) image3_infobar_loc_pane_g

0xdff1,	// (0x000357eb) image3_infobar_loc_pane_t1

0x265d,	// (0x00029e57) image3_infobar_fav_pane_g1

0xdfff,	// (0x000357f9) image3_infobar_fav_pane_g2

0x0001,

0xfd31,	// (0x0003752b) image3_infobar_fav_pane_g

0xe007,	// (0x00035801) fs_bigclock_status_battery_pane

0xe010,	// (0x0003580a) fs_bigclock_status_signal_pane

0xe019,	// (0x00035813) fs_bigclock_status_title_pane

0xe022,	// (0x0003581c) fs_bigclock_status_signal_pane_g1

0xe02b,	// (0x00035825) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd36,	// (0x00037530) fs_bigclock_status_signal_pane_g

0xe033,	// (0x0003582d) fs_bigclock_status_battery_pane_g1

0xe03c,	// (0x00035836) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3b,	// (0x00037535) fs_bigclock_status_battery_pane_g

0xe044,	// (0x0003583e) fs_bigclock_status_title_pane_t1

0xa36b,	// (0x00031b65) main_fs_bigclock_clock_pane_g1

0xa36b,	// (0x00031b65) main_fs_bigclock_clock_pane_g2

0xa37e,	// (0x00031b78) main_fs_bigclock_clock_pane_g3

0xa37e,	// (0x00031b78) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd40,	// (0x0003753a) main_fs_bigclock_clock_pane_g

0xa395,	// (0x00031b8f) main_fs_bigclock_clock_pane_t1

0xa3ab,	// (0x00031ba5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd49,	// (0x00037543) main_fs_bigclock_clock_pane_t

0xe052,	// (0x0003584c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe052,	// (0x0003584c) list_single_fs_bigclock_indicator_pane

0xe063,	// (0x0003585d) list_single_fs_bigclock_pane_ParamLimits

0xe063,	// (0x0003585d) list_single_fs_bigclock_pane

0xe089,	// (0x00035883) main_fs_bigclock_indicator_pane_t1

0xe098,	// (0x00035892) list_single_fs_bigclock_pane_g1

0xe0a0,	// (0x0003589a) list_single_fs_bigclock_pane_t1

0x265d,	// (0x00029e57) main_fs_bigclock_swipe_pane_g1

0xe0e3,	// (0x000358dd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5a,	// (0x00037554) main_fs_bigclock_swipe_pane_g

0xe0eb,	// (0x000358e5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe0eb,	// (0x000358e5) main_fs_bigclock_swipe_pane_t1

0x3ec5,	// (0x0002b6bf) call_type_pane_ParamLimits

0xe7c9,	// (0x00035fc3) main_btmg_pane

0xdd1f,	// (0x00035519) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdd1f,	// (0x00035519) list_single_cale_mrui_row_pane_g2

0x0002,

0xfccd,	// (0x000374c7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfccd,	// (0x000374c7) list_single_cale_mrui_row_pane_g

0xdea0,	// (0x0003569a) list_recal_vselct_arw_lo_pane

0xdea8,	// (0x000356a2) list_recal_vselct_arw_up_pane

0xdeb0,	// (0x000356aa) list_recal_vselct_pane

0xa40d,	// (0x00031c07) btmg_button_pane

0xa417,	// (0x00031c11) main_btmg_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp044

0xe108,	// (0x00035902) btmg_button_pane_t1

0x65a7,	// (0x0002dda1) aid_listscroll_gen

0xee98,	// (0x00036692) main_cntbar_detail_pane

0xd9da,	// (0x000351d4) list_cmail_folder_pane

0xb826,	// (0x00033020) sp_fs_scroll_pane_cp03_ParamLimits

0xe116,	// (0x00035910) list_single_fs_dyc_pane_cp01_ParamLimits

0xe116,	// (0x00035910) list_single_fs_dyc_pane_cp01

0xe133,	// (0x0003592d) aid_size_cmail_indent

0xe13c,	// (0x00035936) list_single_dyc_row_pane_cp01

0xa455,	// (0x00031c4f) cntbar_detail_list_pane_ParamLimits

0xa455,	// (0x00031c4f) cntbar_detail_list_pane

0xa4a7,	// (0x00031ca1) main_cntbar_detail_cont_pane_ParamLimits

0xa4a7,	// (0x00031ca1) main_cntbar_detail_cont_pane

0xb826,	// (0x00033020) scroll_pane_cp032_ParamLimits

0xb826,	// (0x00033020) scroll_pane_cp032

0xa4bb,	// (0x00031cb5) cntbar_detail_list_event_pane_ParamLimits

0xa4bb,	// (0x00031cb5) cntbar_detail_list_event_pane

0xa467,	// (0x00031c61) cntbar_detail_list_shct_pane

0x2d89,	// (0x0002a583) aid_list_gen

0xe145,	// (0x0003593f) aid_scroll

0xe14e,	// (0x00035948) aid_size_touch_scroll_bar

0x986d,	// (0x00031067) aid_list_double

0xa4cb,	// (0x00031cc5) aid_list_single

0xa4d4,	// (0x00031cce) aid_list_single_lg

0xa4dd,	// (0x00031cd7) aid_list_z_g_a_sm

0xa4e5,	// (0x00031cdf) aid_list_z_g_d

0xa4ed,	// (0x00031ce7) aid_txt_z_prm

0xa4fb,	// (0x00031cf5) aid_txt_z_prm_cp01

0xa509,	// (0x00031d03) aid_txt_z_sec

0xa517,	// (0x00031d11) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa517,	// (0x00031d11) main_cntbar_detail_cont_pane_g1

0xa52b,	// (0x00031d25) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa52b,	// (0x00031d25) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd5f,	// (0x00037559) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd5f,	// (0x00037559) main_cntbar_detail_cont_pane_g

0xe157,	// (0x00035951) main_cntbar_detail_cont_pane_t1

0xe165,	// (0x0003595f) main_cntbar_detail_cont_pane_t2

0xe173,	// (0x0003596d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd64,	// (0x0003755e) main_cntbar_detail_cont_pane_t

0xa53b,	// (0x00031d35) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa53b,	// (0x00031d35) cell_cntbar_detail_list_shct_pane

0xe181,	// (0x0003597b) cntbar_detail_list_shct_pane_g1

0xe18a,	// (0x00035984) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6b,	// (0x00037565) cntbar_detail_list_shct_pane_g

0xa54d,	// (0x00031d47) cntbar_detail_list_event_pane_g1_ParamLimits

0xa54d,	// (0x00031d47) cntbar_detail_list_event_pane_g1

0xa559,	// (0x00031d53) cntbar_detail_list_event_pane_g2_ParamLimits

0xa559,	// (0x00031d53) cntbar_detail_list_event_pane_g2

0x0005,

0xfd70,	// (0x0003756a) cntbar_detail_list_event_pane_g_ParamLimits

0xfd70,	// (0x0003756a) cntbar_detail_list_event_pane_g

0xa5c7,	// (0x00031dc1) cntbar_detail_list_event_pane_t1_ParamLimits

0xa5c7,	// (0x00031dc1) cntbar_detail_list_event_pane_t1

0xa5dc,	// (0x00031dd6) cntbar_detail_list_event_pane_t2_ParamLimits

0xa5dc,	// (0x00031dd6) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7d,	// (0x00037577) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7d,	// (0x00037577) cntbar_detail_list_event_pane_t

0x265d,	// (0x00029e57) cell_cntbar_detail_list_shct_pane_g1

0x44de,	// (0x0002bcd8) navi_pane_mv_g3

0xee98,	// (0x00036692) main_cntbar_detail_pane_ParamLimits

0xe7c9,	// (0x00035fc3) main_notif_wgt_pane

0xc258,	// (0x00033a52) aid_tch_main_mp4_pane_g4

0xc486,	// (0x00033c80) popup_slider_window_cp02

0xde96,	// (0x00035690) list_recal_day_event_pane

0xa421,	// (0x00031c1b) cntbar_detail_btn_pane_ParamLimits

0xa421,	// (0x00031c1b) cntbar_detail_btn_pane

0xa43a,	// (0x00031c34) cntbar_detail_btn_pane_cp01_ParamLimits

0xa43a,	// (0x00031c34) cntbar_detail_btn_pane_cp01

0xa467,	// (0x00031c61) cntbar_detail_list_shct_pane_ParamLimits

0xa477,	// (0x00031c71) cntbar_detail_pane_g1_ParamLimits

0xa477,	// (0x00031c71) cntbar_detail_pane_g1

0xa48b,	// (0x00031c85) cntbar_detail_pane_t1_ParamLimits

0xa48b,	// (0x00031c85) cntbar_detail_pane_t1

0xa565,	// (0x00031d5f) cntbar_detail_list_event_pane_g3_ParamLimits

0xa565,	// (0x00031d5f) cntbar_detail_list_event_pane_g3

0xa57d,	// (0x00031d77) cntbar_detail_list_event_pane_g4_ParamLimits

0xa57d,	// (0x00031d77) cntbar_detail_list_event_pane_g4

0xa595,	// (0x00031d8f) cntbar_detail_list_event_pane_g5_ParamLimits

0xa595,	// (0x00031d8f) cntbar_detail_list_event_pane_g5

0xa5ad,	// (0x00031da7) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5ad,	// (0x00031da7) cntbar_detail_list_event_pane_g6

0xa5f1,	// (0x00031deb) cntbar_detail_list_event_pane_t3_ParamLimits

0xa5f1,	// (0x00031deb) cntbar_detail_list_event_pane_t3

0xa603,	// (0x00031dfd) popup_notif_wgt_window_ParamLimits

0xa603,	// (0x00031dfd) popup_notif_wgt_window

0xa61c,	// (0x00031e16) popup_submenu_window_cp01_ParamLimits

0xa61c,	// (0x00031e16) popup_submenu_window_cp01

0x246c,	// (0x00029c66) bg_popup_window_pane_cp10

0xe193,	// (0x0003598d) listscroll_notif_wgt_pane

0xe1a5,	// (0x0003599f) list_notif_wgt_window

0xe1ae,	// (0x000359a8) scroll_pane_cp033

0xa630,	// (0x00031e2a) list_notif_wgt_row_pane_ParamLimits

0xa630,	// (0x00031e2a) list_notif_wgt_row_pane

0xe1b7,	// (0x000359b1) aid_size_list_notif_wgt_del

0xe1c4,	// (0x000359be) list_notif_wgt_row_pane_g1

0xe1d0,	// (0x000359ca) list_notif_wgt_row_pane_g2

0xe1df,	// (0x000359d9) list_notif_wgt_row_pane_g3

0x0002,

0xfd84,	// (0x0003757e) list_notif_wgt_row_pane_g

0xe1ec,	// (0x000359e6) list_notif_wgt_row_pane_t1

0xe202,	// (0x000359fc) list_notif_wgt_row_pane_t2

0xe214,	// (0x00035a0e) list_notif_wgt_row_pane_t3

0x0002,

0xfd8b,	// (0x00037585) list_notif_wgt_row_pane_t

0xc9ec,	// (0x000341e6) list_recal_day_event_pane_g1

0xe226,	// (0x00035a20) list_recal_day_event_pane_t1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp045

0xa640,	// (0x00031e3a) cntbar_detail_btn_pane_t1

0x4665,	// (0x0002be5f) main_callh_pane_ParamLimits

0x4665,	// (0x0002be5f) main_callh_pane

0xe7c9,	// (0x00035fc3) main_coverflow0_pane

0xe7c9,	// (0x00035fc3) main_wgtman_pane

0x95b5,	// (0x00030daf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x95b5,	// (0x00030daf) main_fs_bigclock_unlock_btn_pane

0x9e26,	// (0x00031620) bg_button_pane_cp16

0x9e36,	// (0x00031630) cell_tport_appsw_pane_g3

0xa64e,	// (0x00031e48) cf0_flow_pane_ParamLimits

0xa64e,	// (0x00031e48) cf0_flow_pane

0xe235,	// (0x00035a2f) listscroll_cf0_pane

0xe240,	// (0x00035a3a) main_cf0_pane_g1

0xa663,	// (0x00031e5d) main_cf0_pane_t1_ParamLimits

0xa663,	// (0x00031e5d) main_cf0_pane_t1

0xa67a,	// (0x00031e74) main_cf0_pane_t2_ParamLimits

0xa67a,	// (0x00031e74) main_cf0_pane_t2

0x0001,

0xfd97,	// (0x00037591) main_cf0_pane_t_ParamLimits

0xfd97,	// (0x00037591) main_cf0_pane_t

0xe252,	// (0x00035a4c) scroll_pane_cp11

0xa691,	// (0x00031e8b) cf0_flow_pane_g1

0xa69d,	// (0x00031e97) cf0_flow_pane_g2

0x0001,

0xfd9c,	// (0x00037596) cf0_flow_pane_g

0xa6a9,	// (0x00031ea3) cf0_flow_pane_t1

0xe7c9,	// (0x00035fc3) main_call6_pane

0xe7c9,	// (0x00035fc3) main_calllock_pane

0x1b93,	// (0x0002938d) call6_btn_grp_pane_ParamLimits

0x1b93,	// (0x0002938d) call6_btn_grp_pane

0x1bad,	// (0x000293a7) call6_pane_g1_ParamLimits

0x1bad,	// (0x000293a7) call6_pane_g1

0x1bc6,	// (0x000293c0) popup_call6_1st_window_ParamLimits

0x1bc6,	// (0x000293c0) popup_call6_1st_window

0x1bda,	// (0x000293d4) popup_call6_2nd_window_ParamLimits

0x1bda,	// (0x000293d4) popup_call6_2nd_window

0x1bee,	// (0x000293e8) cell_call6_btn_pane_ParamLimits

0x1bee,	// (0x000293e8) cell_call6_btn_pane

0x246c,	// (0x00029c66) bg_popup_call2_in_pane_cp03

0xe25d,	// (0x00035a57) popup_call6_1st_window_g1

0xe265,	// (0x00035a5f) popup_call6_1st_window_g2

0xe26d,	// (0x00035a67) popup_call6_1st_window_g3

0x0002,

0xfda1,	// (0x0003759b) popup_call6_1st_window_g

0xe275,	// (0x00035a6f) popup_call6_1st_window_t1

0xe284,	// (0x00035a7e) popup_call6_1st_window_t2

0xe294,	// (0x00035a8e) popup_call6_1st_window_t3

0x0002,

0xfda8,	// (0x000375a2) popup_call6_1st_window_t

0x246c,	// (0x00029c66) bg_popup_call2_in_pane_cp04

0xe2a4,	// (0x00035a9e) popup_call6_2nd_window_g1

0xe2ac,	// (0x00035aa6) popup_call6_2nd_window_g2

0xe2b4,	// (0x00035aae) popup_call6_2nd_window_g3

0x0002,

0xfdaf,	// (0x000375a9) popup_call6_2nd_window_g

0xe2bc,	// (0x00035ab6) popup_call6_2nd_window_t1

0xb756,	// (0x00032f50) bg_button_pane_cp15

0xe2cb,	// (0x00035ac5) cell_call6_btn_pane_g1

0xe2d4,	// (0x00035ace) cell_call6_btn_pane_t1

0xa6bb,	// (0x00031eb5) listscroll_wgtman_pane_ParamLimits

0xa6bb,	// (0x00031eb5) listscroll_wgtman_pane

0xa6dc,	// (0x00031ed6) wgtman_btn_pane_ParamLimits

0xa6dc,	// (0x00031ed6) wgtman_btn_pane

0x40f1,	// (0x0002b8eb) aid_scroll_copy1

0xe2e3,	// (0x00035add) list_wgtman_pane

0xa71f,	// (0x00031f19) wgtman_btn_pane_g1_ParamLimits

0xa71f,	// (0x00031f19) wgtman_btn_pane_g1

0xa74b,	// (0x00031f45) wgtman_btn_pane_t1_ParamLimits

0xa74b,	// (0x00031f45) wgtman_btn_pane_t1

0xe2ed,	// (0x00035ae7) wgtman_btn_pane_t2_ParamLimits

0xe2ed,	// (0x00035ae7) wgtman_btn_pane_t2

0x0001,

0xfdb6,	// (0x000375b0) wgtman_btn_pane_t_ParamLimits

0xfdb6,	// (0x000375b0) wgtman_btn_pane_t

0xa788,	// (0x00031f82) listrow_wgtman_pane_ParamLimits

0xa788,	// (0x00031f82) listrow_wgtman_pane

0xa79c,	// (0x00031f96) listrow_wgtman_pane_g1

0xa7a9,	// (0x00031fa3) listrow_wgtman_pane_g2

0x0001,

0xfdbb,	// (0x000375b5) listrow_wgtman_pane_g

0xa7c7,	// (0x00031fc1) listrow_wgtman_pane_t1

0xa7df,	// (0x00031fd9) listrow_wgtman_pane_t2

0x0001,

0xfdc0,	// (0x000375ba) listrow_wgtman_pane_t

0xa805,	// (0x00031fff) wait_bar_pane_cp09

0xe304,	// (0x00035afe) main_calllock_btn_pane

0xe30e,	// (0x00035b08) main_calllock_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp17

0xe31a,	// (0x00035b14) main_calllock_btn_pane_g1

0xe323,	// (0x00035b1d) main_calllock_btn_pane_t1

0xe7c9,	// (0x00035fc3) main_dialer3_pane

0xe7c9,	// (0x00035fc3) main_fmrd2_pane

0x265d,	// (0x00029e57) main_fs_bigclock_unlock_btn_pane_g1

0xa81f,	// (0x00032019) main_fs_bigclock_unlock_btn_pane_t1

0xa82d,	// (0x00032027) area_fmrd2_info_pane_ParamLimits

0xa82d,	// (0x00032027) area_fmrd2_info_pane

0xa83e,	// (0x00032038) area_fmrd2_visual_pane_ParamLimits

0xa83e,	// (0x00032038) area_fmrd2_visual_pane

0xa84c,	// (0x00032046) fmrd2_indi_pane_ParamLimits

0xa84c,	// (0x00032046) fmrd2_indi_pane

0xa859,	// (0x00032053) area_fmrd2_visual_pane_g1

0xa861,	// (0x0003205b) area_fmrd2_visual_pane_t1

0xa871,	// (0x0003206b) area_fmrd2_visual_pane_t2

0xa881,	// (0x0003207b) area_fmrd2_visual_pane_t3

0x0002,

0xfdca,	// (0x000375c4) area_fmrd2_visual_pane_t

0xa891,	// (0x0003208b) area_fmrd2_info_pane_g1

0xa899,	// (0x00032093) area_fmrd2_info_pane_t1

0xa8a9,	// (0x000320a3) area_fmrd2_info_pane_t2

0xa8b9,	// (0x000320b3) area_fmrd2_info_pane_t3

0xa8c9,	// (0x000320c3) area_fmrd2_info_pane_t4

0x0003,

0xfdd1,	// (0x000375cb) area_fmrd2_info_pane_t

0xa8d9,	// (0x000320d3) fmrd2_indi_pane_t1

0xa8e9,	// (0x000320e3) fmrd2_indi_pane_t2

0xa8f9,	// (0x000320f3) fmrd2_indi_pane_t3

0x0002,

0xfdda,	// (0x000375d4) fmrd2_indi_pane_t

0x963e,	// (0x00030e38) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x963e,	// (0x00030e38) list_single_fs_bigclock_indicator_pane_g5

0x96f3,	// (0x00030eed) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x96f3,	// (0x00030eed) list_single_fs_bigclock_indicator_pane_t5

0x9fa7,	// (0x000317a1) aid_cell_bcale_month_pane_ParamLimits

0x9fa7,	// (0x000317a1) aid_cell_bcale_month_pane

0x9fc5,	// (0x000317bf) bcale_month_pane_ParamLimits

0x9fc5,	// (0x000317bf) bcale_month_pane

0x9fe9,	// (0x000317e3) bcale_preview_pane_ParamLimits

0x9fe9,	// (0x000317e3) bcale_preview_pane

0xe0a0,	// (0x0003589a) list_single_fs_bigclock_pane_t1_ParamLimits

0xe0bf,	// (0x000358b9) list_single_fs_bigclock_pane_t2_ParamLimits

0xe0bf,	// (0x000358b9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd55,	// (0x0003754f) list_single_fs_bigclock_pane_t_ParamLimits

0xfd55,	// (0x0003754f) list_single_fs_bigclock_pane_t

0xa817,	// (0x00032011) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc5,	// (0x000375bf) main_fs_bigclock_unlock_btn_pane_g

0xa909,	// (0x00032103) aid_dia3_key_size_ParamLimits

0xa909,	// (0x00032103) aid_dia3_key_size

0xa91d,	// (0x00032117) aid_dia3_listrow_size_ParamLimits

0xa91d,	// (0x00032117) aid_dia3_listrow_size

0xa937,	// (0x00032131) dia3_keypad_fun_pane_ParamLimits

0xa937,	// (0x00032131) dia3_keypad_fun_pane

0xa951,	// (0x0003214b) dia3_keypad_num_pane_ParamLimits

0xa951,	// (0x0003214b) dia3_keypad_num_pane

0xa96b,	// (0x00032165) dia3_listscroll_pane_ParamLimits

0xa96b,	// (0x00032165) dia3_listscroll_pane

0xa981,	// (0x0003217b) dia3_numentry_pane_ParamLimits

0xa981,	// (0x0003217b) dia3_numentry_pane

0xe332,	// (0x00035b2c) dia3_list_pane

0xa99b,	// (0x00032195) scroll_pane_cp12

0xe7c9,	// (0x00035fc3) bg_dia3_numentry_pane

0xa9a6,	// (0x000321a0) dia3_numentry_pane_t1

0xa9b5,	// (0x000321af) cell_dia3_key_num_pane

0xa9bd,	// (0x000321b7) cell_dia3_key0_fun_pane_ParamLimits

0xa9bd,	// (0x000321b7) cell_dia3_key0_fun_pane

0xa9d1,	// (0x000321cb) cell_dia3_key1_fun_pane_ParamLimits

0xa9d1,	// (0x000321cb) cell_dia3_key1_fun_pane

0xa9e6,	// (0x000321e0) dia3_listrow_pane

0xd3e1,	// (0x00034bdb) bg_dia3_numentry_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp21

0xa9f8,	// (0x000321f2) cell_dia3_key_num_pane_t1

0xaa06,	// (0x00032200) cell_dia3_key_num_pane_t2

0xaa06,	// (0x00032200) cell_dia3_key_num_pane_t3

0xaa06,	// (0x00032200) cell_dia3_key_num_pane_t4

0x0003,

0xfde1,	// (0x000375db) cell_dia3_key_num_pane_t

0xe7c9,	// (0x00035fc3) bg_button_pane_cp19

0xaa15,	// (0x0003220f) cell_dia3_key0_fun_pane_g1

0xe7c9,	// (0x00035fc3) bg_button_pane_cp20

0xaa1d,	// (0x00032217) cell_dia3_key1_fun_pane_g1

0xaa25,	// (0x0003221f) area_left_week_number_pane

0xaa33,	// (0x0003222d) area_top_day_name_pane

0xaa46,	// (0x00032240) frame_month_view_pane

0xe33d,	// (0x00035b37) grid_month_view_pane

0xaa5b,	// (0x00032255) cell_top_day_name_pane_ParamLimits

0xaa5b,	// (0x00032255) cell_top_day_name_pane

0xaa8a,	// (0x00032284) cell_area_left_week_number_pane_ParamLimits

0xaa8a,	// (0x00032284) cell_area_left_week_number_pane

0xaaa0,	// (0x0003229a) cell_month_view_pane_ParamLimits

0xaaa0,	// (0x0003229a) cell_month_view_pane

0xe34b,	// (0x00035b45) frm_month_g1

0xaad1,	// (0x000322cb) frm_month_g2

0xaae4,	// (0x000322de) frm_month_g3

0xaaf7,	// (0x000322f1) frm_month_g4

0xab0a,	// (0x00032304) frm_month_g5

0xab1d,	// (0x00032317) frm_month_g6

0xab32,	// (0x0003232c) frm_month_g7

0xe358,	// (0x00035b52) frm_month_g8

0xab47,	// (0x00032341) frm_month_g9

0xab57,	// (0x00032351) frm_month_g10

0xab67,	// (0x00032361) frm_month_g11

0xab77,	// (0x00032371) frm_month_g12

0xab89,	// (0x00032383) frm_month_g13

0xab9d,	// (0x00032397) frm_month_g14

0xabb1,	// (0x000323ab) frm_month_g15

0xabc5,	// (0x000323bf) frm_month_g16

0x000f,

0xfdea,	// (0x000375e4) frm_month_g

0xe365,	// (0x00035b5f) cell_top_day_name_pane_t1

0xabd9,	// (0x000323d3) cell_area_left_week_number_pane_g1

0xabe5,	// (0x000323df) cell_area_left_week_number_pane_t1

0xeeff,	// (0x000366f9) cell_month_view_pane_g1

0xabf8,	// (0x000323f2) cell_month_view_pane_t1

0xe7c9,	// (0x00035fc3) main_fps_pane

0xd802,	// (0x00034ffc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd802,	// (0x00034ffc) cmail_ddmenu_btn02_pane_cp1

0xd81e,	// (0x00035018) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd81e,	// (0x00035018) cmail_ddmenu_btn02_pane_cp2

0xa2c4,	// (0x00031abe) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa2c4,	// (0x00031abe) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd08,	// (0x00037502) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd08,	// (0x00037502) cmail_ddmenu_btn02_pane_g

0xa2e5,	// (0x00031adf) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa2e5,	// (0x00031adf) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0d,	// (0x00037507) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0d,	// (0x00037507) cmail_ddmenu_btn02_pane_t

0xac0b,	// (0x00032405) fps_text_pane_ParamLimits

0xac0b,	// (0x00032405) fps_text_pane

0xac22,	// (0x0003241c) main_fps_pane_g1_ParamLimits

0xac22,	// (0x0003241c) main_fps_pane_g1

0xac3a,	// (0x00032434) wait_bar_pane_cp010_ParamLimits

0xac3a,	// (0x00032434) wait_bar_pane_cp010

0xac4d,	// (0x00032447) fps_text_pane_t1_ParamLimits

0xac4d,	// (0x00032447) fps_text_pane_t1

0xc5c7,	// (0x00033dc1) cam4_image_uncrop_pane_g1

0xc5d0,	// (0x00033dca) cam4_image_uncrop_pane_g2

0x7c6b,	// (0x0002f465) cam4_image_uncrop_pane_g3

0x7c74,	// (0x0002f46e) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x00037055) cam4_image_uncrop_pane_g

0xa9e6,	// (0x000321e0) dia3_listrow_pane_ParamLimits

0xe7c9,	// (0x00035fc3) main_phob2_pane

0x9df9,	// (0x000315f3) cell_tport_appsw_pane_cp02_ParamLimits

0x9df9,	// (0x000315f3) cell_tport_appsw_pane_cp02

0x9e0d,	// (0x00031607) cell_tport_appsw_pane_cp03_ParamLimits

0x9e0d,	// (0x00031607) cell_tport_appsw_pane_cp03

0xe7c9,	// (0x00035fc3) phob2_contact_card_pane

0xe7c9,	// (0x00035fc3) phob2_listscroll_pane

0xe378,	// (0x00035b72) phob2_list_pane

0xe380,	// (0x00035b7a) scroll_pane_cp034

0xac65,	// (0x0003245f) phob2_cc_data_pane_ParamLimits

0xac65,	// (0x0003245f) phob2_cc_data_pane

0xac7e,	// (0x00032478) phob2_cc_listscroll_pane_ParamLimits

0xac7e,	// (0x00032478) phob2_cc_listscroll_pane

0xa788,	// (0x00031f82) list_double_large_graphic_phob2_pane_ParamLimits

0xa788,	// (0x00031f82) list_double_large_graphic_phob2_pane

0xaca0,	// (0x0003249a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaca0,	// (0x0003249a) list_double_large_graphic_phob2_pane_g1

0xacad,	// (0x000324a7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xacad,	// (0x000324a7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0b,	// (0x00037605) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0b,	// (0x00037605) list_double_large_graphic_phob2_pane_g

0xacd3,	// (0x000324cd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xacd3,	// (0x000324cd) list_double_large_graphic_phob2_pane_t1

0xace8,	// (0x000324e2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xace8,	// (0x000324e2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe14,	// (0x0003760e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe14,	// (0x0003760e) list_double_large_graphic_phob2_pane_t

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp024

0xacfd,	// (0x000324f7) phob2_cc_button_pane

0xad07,	// (0x00032501) phob2_cc_data_pane_g1_ParamLimits

0xad07,	// (0x00032501) phob2_cc_data_pane_g1

0xad21,	// (0x0003251b) phob2_cc_data_pane_g2_ParamLimits

0xad21,	// (0x0003251b) phob2_cc_data_pane_g2

0x0001,

0xfe19,	// (0x00037613) phob2_cc_data_pane_g_ParamLimits

0xfe19,	// (0x00037613) phob2_cc_data_pane_g

0xad33,	// (0x0003252d) phob2_cc_data_pane_t1_ParamLimits

0xad33,	// (0x0003252d) phob2_cc_data_pane_t1

0xad53,	// (0x0003254d) phob2_cc_data_pane_t2_ParamLimits

0xad53,	// (0x0003254d) phob2_cc_data_pane_t2

0xad73,	// (0x0003256d) phob2_cc_data_pane_t3_ParamLimits

0xad73,	// (0x0003256d) phob2_cc_data_pane_t3

0x0002,

0xfe1e,	// (0x00037618) phob2_cc_data_pane_t_ParamLimits

0xfe1e,	// (0x00037618) phob2_cc_data_pane_t

0xe388,	// (0x00035b82) phob2_cc_list_pane_ParamLimits

0xe388,	// (0x00035b82) phob2_cc_list_pane

0xca83,	// (0x0003427d) scroll_pane_cp035_ParamLimits

0xca83,	// (0x0003427d) scroll_pane_cp035

0xee98,	// (0x00036692) bg_button_pane_cp033

0xe394,	// (0x00035b8e) phob2_cc_button_pane_g1

0xe3a0,	// (0x00035b9a) phob2_cc_button_pane_t1

0xe3b5,	// (0x00035baf) phob2_cc_button_pane_t2

0x0001,

0xfe25,	// (0x0003761f) phob2_cc_button_pane_t

0xad93,	// (0x0003258d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad93,	// (0x0003258d) list_double_large_graphic_phob2_cc_pane

0xadd1,	// (0x000325cb) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xadd1,	// (0x000325cb) list_double_large_graphic_phob2_cc_pane_g1

0xaddd,	// (0x000325d7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xaddd,	// (0x000325d7) list_double_large_graphic_phob2_cc_pane_g2

0xade9,	// (0x000325e3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xade9,	// (0x000325e3) list_double_large_graphic_phob2_cc_pane_g3

0xadf5,	// (0x000325ef) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xadf5,	// (0x000325ef) list_double_large_graphic_phob2_cc_pane_g4

0xae01,	// (0x000325fb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xae01,	// (0x000325fb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2a,	// (0x00037624) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2a,	// (0x00037624) list_double_large_graphic_phob2_cc_pane_g

0xae0d,	// (0x00032607) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xae0d,	// (0x00032607) list_double_large_graphic_phob2_cc_pane_t1

0xae36,	// (0x00032630) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xae36,	// (0x00032630) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe35,	// (0x0003762f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe35,	// (0x0003762f) list_double_large_graphic_phob2_cc_pane_t

0xe3c7,	// (0x00035bc1) list_highlight_pane_cp025_ParamLimits

0xe3c7,	// (0x00035bc1) list_highlight_pane_cp025

0xee98,	// (0x00036692) bg_button_pane_cp033_ParamLimits

0xe394,	// (0x00035b8e) phob2_cc_button_pane_g1_ParamLimits

0xe3a0,	// (0x00035b9a) phob2_cc_button_pane_t1_ParamLimits

0xe3b5,	// (0x00035baf) phob2_cc_button_pane_t2_ParamLimits

0xfe25,	// (0x0003761f) phob2_cc_button_pane_t_ParamLimits

0x1c79,	// (0x00029473) popup_wgtman_window

0xc865,	// (0x0003405f) scroll_pane_cp038

0xa701,	// (0x00031efb) wgtman_btn_pane_cp_01_ParamLimits

0xa701,	// (0x00031efb) wgtman_btn_pane_cp_01

0xe3d5,	// (0x00035bcf) wgtman_content_pane

0xe3de,	// (0x00035bd8) wgtman_heading_pane

0xe7c9,	// (0x00035fc3) bg_heading_pane_cp02

0xe3e7,	// (0x00035be1) wgtman_heading_pane_g1

0xe3ef,	// (0x00035be9) wgtman_heading_pane_t1

0xe3fd,	// (0x00035bf7) scroll_pane_cp036

0xe405,	// (0x00035bff) wgtman_list_pane

0xd6f5,	// (0x00034eef) wgtman_list_pane_t1_ParamLimits

0xd6f5,	// (0x00034eef) wgtman_list_pane_t1

0xc5b1,	// (0x00033dab) cam4_grid_pane

0x8496,	// (0x0002fc90) bg_button_pane_cp015_ParamLimits

0x84ad,	// (0x0002fca7) bg_button_pane_cp016_ParamLimits

0x84b9,	// (0x0002fcb3) bg_button_pane_cp017_ParamLimits

0x8514,	// (0x0002fd0e) popup_vitu2_query_window_g3_ParamLimits

0x8514,	// (0x0002fd0e) popup_vitu2_query_window_g3

0x85b7,	// (0x0002fdb1) popup_vitu2_query_window_t6_ParamLimits

0x85b7,	// (0x0002fdb1) popup_vitu2_query_window_t6

0x85e2,	// (0x0002fddc) popup_vitu2_query_window_t7_ParamLimits

0x85e2,	// (0x0002fddc) popup_vitu2_query_window_t7

0xc5c7,	// (0x00033dc1) cam4_grid_pane_g1

0xc5d0,	// (0x00033dca) cam4_grid_pane_g2

0xe40d,	// (0x00035c07) cam4_grid_pane_g3

0xe416,	// (0x00035c10) cam4_grid_pane_g4

0x0003,

0xfe3a,	// (0x00037634) cam4_grid_pane_g

0x277b,	// (0x00029f75) aid_placing_vt_slider_lsc_ParamLimits

0x2abc,	// (0x0002a2b6) vidtel_button_pane_ParamLimits

0x2abc,	// (0x0002a2b6) vidtel_button_pane

0xe7c9,	// (0x00035fc3) bg_button_pane_cp034

0xe421,	// (0x00035c1b) vidtel_button_pane_g1

0xe429,	// (0x00035c23) vidtel_button_pane_t1

0xc98e,	// (0x00034188) aid_size_vtel_slider_touch

0xca83,	// (0x0003427d) scroll_pane_cp039

0x927c,	// (0x00030a76) ncim_query_button_pane_cp01_ParamLimits

0x929b,	// (0x00030a95) ncimui_query_pane_g1_ParamLimits

0xee98,	// (0x00036692) input_focus_pane_cp012_ParamLimits

0xd41f,	// (0x00034c19) ncim_query_entry_pane_t1_ParamLimits

0xca83,	// (0x0003427d) scroll_pane_cp039_ParamLimits

0x43c9,	// (0x0002bbc3) navi_pane_bcale_mc_g1

0x43d1,	// (0x0002bbcb) navi_pane_bcale_mc_t1

0xd854,	// (0x0003504e) main_sp_fs_email_pane_g1

0xd860,	// (0x0003505a) main_sp_fs_email_pane_g2

0x0001,

0xfc3d,	// (0x00037437) main_sp_fs_email_pane_g

0xdd2b,	// (0x00035525) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdd2b,	// (0x00035525) list_single_cale_mrui_row_pane_g3

0xa305,	// (0x00031aff) list_single_recal_day_pane_g5_event_pane

0xdf08,	// (0x00035702) list_single_recal_day_pane_g7

0xe43f,	// (0x00035c39) list_recal_day_event_pane_cp01

0xe448,	// (0x00035c42) list_recal_vselct_arw_lo_pane_cp01

0xe450,	// (0x00035c4a) list_recal_vselct_arw_up_pane_cp01

0xe458,	// (0x00035c52) list_recal_vselct_pane_cp01

0xc9ec,	// (0x000341e6) list_recal_day_event_pane_cp01_g1

0xe462,	// (0x00035c5c) list_recal_day_event_pane_cp01_t1

0xdf10,	// (0x0003570a) list_single_recal_day_pane_t1_ParamLimits

0xdf22,	// (0x0003571c) list_single_recal_day_pane_t2_ParamLimits

0xfd1d,	// (0x00037517) list_single_recal_day_pane_t_ParamLimits

0xee76,	// (0x00036670) bg_notes_pane_ParamLimits

0xef4f,	// (0x00036749) list_notes_pane_ParamLimits

0x1d83,	// (0x0002957d) scroll_pane_cp06_ParamLimits

0xef71,	// (0x0003676b) main_notes_pane_ParamLimits

0xee98,	// (0x00036692) main_welc_pane

0xae8e,	// (0x00032688) main_welc_body_pane_ParamLimits

0xae8e,	// (0x00032688) main_welc_body_pane

0xaead,	// (0x000326a7) main_welc_opti_pane_ParamLimits

0xaead,	// (0x000326a7) main_welc_opti_pane

0xaf2e,	// (0x00032728) main_welc_pane_t1_ParamLimits

0xaf2e,	// (0x00032728) main_welc_pane_t1

0xe480,	// (0x00035c7a) main_welc_body_row_pane_ParamLimits

0xe480,	// (0x00035c7a) main_welc_body_row_pane

0xeef1,	// (0x000366eb) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x000366eb) main_welc_opti_row_pane

0xe497,	// (0x00035c91) main_welc_opti_row_pane_g1

0xb123,	// (0x0003291d) main_welc_opti_row_pane_t1

0xe49f,	// (0x00035c99) main_welc_body_row_pane_t1

0xe19d,	// (0x00035997) popup_notif_wgt_heading_pane

0xe1b7,	// (0x000359b1) aid_size_list_notif_wgt_del_ParamLimits

0xe1c4,	// (0x000359be) list_notif_wgt_row_pane_g1_ParamLimits

0xe1d0,	// (0x000359ca) list_notif_wgt_row_pane_g2_ParamLimits

0xe1df,	// (0x000359d9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd84,	// (0x0003757e) list_notif_wgt_row_pane_g_ParamLimits

0xe1ec,	// (0x000359e6) list_notif_wgt_row_pane_t1_ParamLimits

0xe202,	// (0x000359fc) list_notif_wgt_row_pane_t2_ParamLimits

0xe214,	// (0x00035a0e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8b,	// (0x00037585) list_notif_wgt_row_pane_t_ParamLimits

0xa79c,	// (0x00031f96) listrow_wgtman_pane_g1_ParamLimits

0xa7a9,	// (0x00031fa3) listrow_wgtman_pane_g2_ParamLimits

0xfdbb,	// (0x000375b5) listrow_wgtman_pane_g_ParamLimits

0xa7c7,	// (0x00031fc1) listrow_wgtman_pane_t1_ParamLimits

0xa7df,	// (0x00031fd9) listrow_wgtman_pane_t2_ParamLimits

0xfdc0,	// (0x000375ba) listrow_wgtman_pane_t_ParamLimits

0xa805,	// (0x00031fff) wait_bar_pane_cp09_ParamLimits

0xe7c9,	// (0x00035fc3) bg_popup_heading_pane_cp02

0xe4ae,	// (0x00035ca8) popup_notif_wgt_heading_pane_g1

0xe4b6,	// (0x00035cb0) popup_notif_wgt_heading_pane_t1

0xe7c9,	// (0x00035fc3) main_vids_pane

0xe7c9,	// (0x00035fc3) vids_listscroll_pane

0xb132,	// (0x0003292c) scroll_pane_cp040

0xe7c9,	// (0x00035fc3) vids_list_pane

0xb13d,	// (0x00032937) vids_list_double_pane_ParamLimits

0xb13d,	// (0x00032937) vids_list_double_pane

0xb150,	// (0x0003294a) vids_list_double_pane_g1

0xb159,	// (0x00032953) vids_list_double_pane_t1

0xb169,	// (0x00032963) vids_list_double_pane_t2

0x0001,

0xfe59,	// (0x00037653) vids_list_double_pane_t

0xb748,	// (0x00032f42) main_ncimui_pane_ParamLimits

0x90b2,	// (0x000308ac) main_ncimui_pane_g1_ParamLimits

0x90be,	// (0x000308b8) main_ncimui_pane_g2_ParamLimits

0x90be,	// (0x000308b8) main_ncimui_pane_g2

0x0001,

0xfb3e,	// (0x00037338) main_ncimui_pane_g_ParamLimits

0xfb3e,	// (0x00037338) main_ncimui_pane_g

0xaecc,	// (0x000326c6) main_welc_pane_g1_ParamLimits

0xaecc,	// (0x000326c6) main_welc_pane_g1

0xaee1,	// (0x000326db) main_welc_pane_g2_ParamLimits

0xaee1,	// (0x000326db) main_welc_pane_g2

0x0003,

0xfe43,	// (0x0003763d) main_welc_pane_g_ParamLimits

0xfe43,	// (0x0003763d) main_welc_pane_g

0x1d67,	// (0x00029561) listscroll_mce_pane_ParamLimits

0x4560,	// (0x0002bd5a) wait_bar_pane_cp10

0x65af,	// (0x0002dda9) main_cale_day_pane_ParamLimits

0x65af,	// (0x0002dda9) main_cale_week_pane_ParamLimits

0xee76,	// (0x00036670) main_messa_pane_ParamLimits

0x76c8,	// (0x0002eec2) main_clock2_btn_pane_ParamLimits

0x76c8,	// (0x0002eec2) main_clock2_btn_pane

0xbdea,	// (0x000335e4) main_clock2_btn_pane_cp01_ParamLimits

0xbdea,	// (0x000335e4) main_clock2_btn_pane_cp01

0xdcb7,	// (0x000354b1) list_cale_mrui_pane_ParamLimits

0xe24a,	// (0x00035a44) main_cf0_pane_g2

0x0001,

0xfd92,	// (0x0003758c) main_cf0_pane_g

0xaa25,	// (0x0003221f) area_left_week_number_pane_ParamLimits

0xaa33,	// (0x0003222d) area_top_day_name_pane_ParamLimits

0xaa46,	// (0x00032240) frame_month_view_pane_ParamLimits

0xe33d,	// (0x00035b37) grid_month_view_pane_ParamLimits

0xe34b,	// (0x00035b45) frm_month_g1_ParamLimits

0xaad1,	// (0x000322cb) frm_month_g2_ParamLimits

0xaae4,	// (0x000322de) frm_month_g3_ParamLimits

0xaaf7,	// (0x000322f1) frm_month_g4_ParamLimits

0xab0a,	// (0x00032304) frm_month_g5_ParamLimits

0xab1d,	// (0x00032317) frm_month_g6_ParamLimits

0xab32,	// (0x0003232c) frm_month_g7_ParamLimits

0xe358,	// (0x00035b52) frm_month_g8_ParamLimits

0xab47,	// (0x00032341) frm_month_g9_ParamLimits

0xab57,	// (0x00032351) frm_month_g10_ParamLimits

0xab67,	// (0x00032361) frm_month_g11_ParamLimits

0xab77,	// (0x00032371) frm_month_g12_ParamLimits

0xab89,	// (0x00032383) frm_month_g13_ParamLimits

0xab9d,	// (0x00032397) frm_month_g14_ParamLimits

0xabb1,	// (0x000323ab) frm_month_g15_ParamLimits

0xabc5,	// (0x000323bf) frm_month_g16_ParamLimits

0xfdea,	// (0x000375e4) frm_month_g_ParamLimits

0xe365,	// (0x00035b5f) cell_top_day_name_pane_t1_ParamLimits

0xabd9,	// (0x000323d3) cell_area_left_week_number_pane_g1_ParamLimits

0xabe5,	// (0x000323df) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x000366f9) cell_month_view_pane_g1_ParamLimits

0xabf8,	// (0x000323f2) cell_month_view_pane_t1_ParamLimits

0xee6e,	// (0x00036668) main_clock2_btn_pane_g1

0xe4c4,	// (0x00035cbe) main_clock2_btn_pane_t1

0xee98,	// (0x00036692) listscroll_cmail_pane_ParamLimits

0xd854,	// (0x0003504e) main_sp_fs_email_pane_g1_ParamLimits

0xd860,	// (0x0003505a) main_sp_fs_email_pane_g2_ParamLimits

0xfc3d,	// (0x00037437) main_sp_fs_email_pane_g_ParamLimits

0xde77,	// (0x00035671) list_recal_day_pane_ParamLimits

0xde88,	// (0x00035682) mian_recal_day_pane_t1

0x9ca1,	// (0x0003149b) list_single_dyc_row_text_pane_t4_ParamLimits

0x9ca1,	// (0x0003149b) list_single_dyc_row_text_pane_t4

0x9cea,	// (0x000314e4) list_single_dyc_row_text_pane_t5_ParamLimits

0x9cea,	// (0x000314e4) list_single_dyc_row_text_pane_t5

0xd90a,	// (0x00035104) list_single_dyc_row_text_pane_t6_ParamLimits

0xd90a,	// (0x00035104) list_single_dyc_row_text_pane_t6

0x3b6f,	// (0x0002b369) aid_mgn_list_cale_time_pane

0xb748,	// (0x00032f42) main_gallery2_pane_ParamLimits

0xbdfe,	// (0x000335f8) main_clock2_pane_cp01_t1

0xbe0c,	// (0x00033606) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x00036f2c) main_clock2_pane_cp01_t

0x2113,	// (0x0002990d) cale_week_scroll_pane_g16_ParamLimits

0x2113,	// (0x0002990d) cale_week_scroll_pane_g16

0x246c,	// (0x00029c66) vorec_slider_pane

0xe429,	// (0x00035c23) vidtel_button_pane_t1_ParamLimits

0xa36b,	// (0x00031b65) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa36b,	// (0x00031b65) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa37e,	// (0x00031b78) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa37e,	// (0x00031b78) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd40,	// (0x0003753a) main_fs_bigclock_clock_pane_g_ParamLimits

0xa395,	// (0x00031b8f) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa3ab,	// (0x00031ba5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd49,	// (0x00037543) main_fs_bigclock_clock_pane_t_ParamLimits

0x6f0e,	// (0x0002e708) main_mup3_lyrics_pane_ParamLimits

0x6f0e,	// (0x0002e708) main_mup3_lyrics_pane

0xb179,	// (0x00032973) main_mup3_lyrics_pane_t1_ParamLimits

0xb179,	// (0x00032973) main_mup3_lyrics_pane_t1

0xc242,	// (0x00033a3c) aid_main_mp4_pane_t1_area

0xc24c,	// (0x00033a46) aid_main_mp4_pane_t2_area

0xc2f8,	// (0x00033af2) main_mp4_pane_g7_ParamLimits

0xc2f8,	// (0x00033af2) main_mp4_pane_g7

0xc304,	// (0x00033afe) main_mp4_pane_g8_ParamLimits

0xc304,	// (0x00033afe) main_mp4_pane_g8

0x7bc3,	// (0x0002f3bd) aid_call6_pane_g1_size

0xadc1,	// (0x000325bb) list_double_large_graphic_phob2_other_pane_ParamLimits

0xadc1,	// (0x000325bb) list_double_large_graphic_phob2_other_pane

0xb194,	// (0x0003298e) list_double_large_graphic_phob2_other_pane_g1

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp026

0xee98,	// (0x00036692) main_welc_pane_ParamLimits

0x9ae0,	// (0x000312da) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9ae0,	// (0x000312da) main_sp_fs_ctrlbar_pane_g3

0x9afa,	// (0x000312f4) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9afa,	// (0x000312f4) main_sp_fs_ctrlbar_pane_g4

0x9b2e,	// (0x00031328) toolbar2_fixed_button_pane_cp01

0x9b39,	// (0x00031333) toolbar2_fixed_button_pane_cp02

0x9b46,	// (0x00031340) toolbar2_fixed_button_pane_cp03

0xae72,	// (0x0003266c) list_welc_entry_pane_ParamLimits

0xae72,	// (0x0003266c) list_welc_entry_pane

0xaef6,	// (0x000326f0) main_welc_pane_g3_ParamLimits

0xaef6,	// (0x000326f0) main_welc_pane_g3

0xaf50,	// (0x0003274a) main_welc_pane_t2_ParamLimits

0xaf50,	// (0x0003274a) main_welc_pane_t2

0xaf6b,	// (0x00032765) main_welc_pane_t3_ParamLimits

0xaf6b,	// (0x00032765) main_welc_pane_t3

0x0005,

0xfe4c,	// (0x00037646) main_welc_pane_t_ParamLimits

0xfe4c,	// (0x00037646) main_welc_pane_t

0xb0a7,	// (0x000328a1) welc_button_pane_ParamLimits

0xb0a7,	// (0x000328a1) welc_button_pane

0xb10f,	// (0x00032909) welc_service_logo_pane_ParamLimits

0xb10f,	// (0x00032909) welc_service_logo_pane

0xb19c,	// (0x00032996) list_single_welc_entry_pane_ParamLimits

0xb19c,	// (0x00032996) list_single_welc_entry_pane

0xb1af,	// (0x000329a9) list_single_welc_entry_pane_g1

0xb1b7,	// (0x000329b1) list_single_welc_entry_pane_t1

0xb1c5,	// (0x000329bf) list_single_welc_entry_pane_t2

0x0001,

0xfe5e,	// (0x00037658) list_single_welc_entry_pane_t

0xe7c9,	// (0x00035fc3) bg_button_pane_cp035

0xe4d2,	// (0x00035ccc) welc_button_pane_t1

0xe4e0,	// (0x00035cda) welc_service_logo_pane_g1

0xe4e9,	// (0x00035ce3) welc_service_logo_pane_g2

0x0001,

0xfe63,	// (0x0003765d) welc_service_logo_pane_g

0xb756,	// (0x00032f50) main_int_radio_pane

0xd2bd,	// (0x00034ab7) list_single_fs_dyc_pane_g1

0xacb9,	// (0x000324b3) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xacb9,	// (0x000324b3) list_double_large_graphic_phob2_pane_g3

0xacc5,	// (0x000324bf) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xacc5,	// (0x000324bf) list_double_large_graphic_phob2_pane_g4

0xb1d3,	// (0x000329cd) main_int_radio1_pane_ParamLimits

0xb1d3,	// (0x000329cd) main_int_radio1_pane

0xe4f2,	// (0x00035cec) find_pane_cp02

0xb1f0,	// (0x000329ea) input_focus_pane_cp12_ParamLimits

0xb1f0,	// (0x000329ea) input_focus_pane_cp12

0xb200,	// (0x000329fa) input_focus_pane_cp13_ParamLimits

0xb200,	// (0x000329fa) input_focus_pane_cp13

0xb214,	// (0x00032a0e) input_focus_pane_cp14_ParamLimits

0xb214,	// (0x00032a0e) input_focus_pane_cp14

0xe4fb,	// (0x00035cf5) int_radio1_listscroll_pane

0xb228,	// (0x00032a22) main_int_radio1_pane_g1_ParamLimits

0xb228,	// (0x00032a22) main_int_radio1_pane_g1

0xb23e,	// (0x00032a38) main_int_radio1_pane_t1_ParamLimits

0xb23e,	// (0x00032a38) main_int_radio1_pane_t1

0xb257,	// (0x00032a51) main_int_radio1_pane_t2_ParamLimits

0xb257,	// (0x00032a51) main_int_radio1_pane_t2

0xb272,	// (0x00032a6c) main_int_radio1_pane_t3_ParamLimits

0xb272,	// (0x00032a6c) main_int_radio1_pane_t3

0xb28d,	// (0x00032a87) main_int_radio1_pane_t4_ParamLimits

0xb28d,	// (0x00032a87) main_int_radio1_pane_t4

0xe505,	// (0x00035cff) main_int_radio1_pane_t5_ParamLimits

0xe505,	// (0x00035cff) main_int_radio1_pane_t5

0xb29f,	// (0x00032a99) main_int_radio1_pane_t6_ParamLimits

0xb29f,	// (0x00032a99) main_int_radio1_pane_t6

0xb2b4,	// (0x00032aae) main_int_radio1_pane_t7_ParamLimits

0xb2b4,	// (0x00032aae) main_int_radio1_pane_t7

0xb2c9,	// (0x00032ac3) main_int_radio1_pane_t8_ParamLimits

0xb2c9,	// (0x00032ac3) main_int_radio1_pane_t8

0xb2e6,	// (0x00032ae0) main_int_radio1_pane_t9_ParamLimits

0xb2e6,	// (0x00032ae0) main_int_radio1_pane_t9

0xb2f8,	// (0x00032af2) main_int_radio1_pane_t10_ParamLimits

0xb2f8,	// (0x00032af2) main_int_radio1_pane_t10

0xb31e,	// (0x00032b18) main_int_radio1_pane_t11_ParamLimits

0xb31e,	// (0x00032b18) main_int_radio1_pane_t11

0xb344,	// (0x00032b3e) main_int_radio1_pane_t12_ParamLimits

0xb344,	// (0x00032b3e) main_int_radio1_pane_t12

0x000b,

0xfe68,	// (0x00037662) main_int_radio1_pane_t_ParamLimits

0xfe68,	// (0x00037662) main_int_radio1_pane_t

0xe378,	// (0x00035b72) int_radio_list_pane

0xe380,	// (0x00035b7a) scroll_pane_cp037

0xe517,	// (0x00035d11) list_double_large_graphic_int_radio_pane_ParamLimits

0xe517,	// (0x00035d11) list_double_large_graphic_int_radio_pane

0xe52b,	// (0x00035d25) list_double_large_graphic_int_radio_pane_g1

0xe534,	// (0x00035d2e) list_double_large_graphic_int_radio_pane_t1

0xe542,	// (0x00035d3c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe81,	// (0x0003767b) list_double_large_graphic_int_radio_pane_t

0xe7c9,	// (0x00035fc3) list_highlight_pane_cp027

0xe470,	// (0x00035c6a) main_button_pane_4

0xaf0a,	// (0x00032704) main_welc_pane_g4_ParamLimits

0xaf0a,	// (0x00032704) main_welc_pane_g4

0xaf88,	// (0x00032782) main_welc_pane_t4_ParamLimits

0xaf88,	// (0x00032782) main_welc_pane_t4

0xaf9f,	// (0x00032799) main_welc_pane_t5_ParamLimits

0xaf9f,	// (0x00032799) main_welc_pane_t5

0xafe0,	// (0x000327da) main_welc_pane_t6_ParamLimits

0xafe0,	// (0x000327da) main_welc_pane_t6

0xb0be,	// (0x000328b8) welc_button_pane_2_ParamLimits

0xb0be,	// (0x000328b8) welc_button_pane_2

0xb0d8,	// (0x000328d2) welc_button_pane_3_ParamLimits

0xb0d8,	// (0x000328d2) welc_button_pane_3

0xe478,	// (0x00035c72) welc_button_pane_4

0xb0f7,	// (0x000328f1) welc_button_pane_5_ParamLimits

0xb0f7,	// (0x000328f1) welc_button_pane_5

0x0712,	// (0x00027f0c) main_popup_welc_pane

0xe55f,	// (0x00035d59) main_welc_sk_g3

0xe569,	// (0x00035d63) main_welc_sk_g4

0xe573,	// (0x00035d6d) main_welc_sk_t3

0xe583,	// (0x00035d7d) main_welc_sk_t4

0xe593,	// (0x00035d8d) popup_welc_pane_t4

0xe5a1,	// (0x00035d9b) popup_welc_pane_t5

0xe5b1,	// (0x00035dab) popup_welc_pane_t6

0xb756,	// (0x00032f50) main_acti_pane

0xe7c9,	// (0x00035fc3) main_sso_pane

0xb356,	// (0x00032b50) sso_body_pane_ParamLimits

0xb356,	// (0x00032b50) sso_body_pane

0xb36b,	// (0x00032b65) sso_logo_pane_ParamLimits

0xb36b,	// (0x00032b65) sso_logo_pane

0xb39b,	// (0x00032b95) sso_sk_pane_ParamLimits

0xb39b,	// (0x00032b95) sso_sk_pane

0x265d,	// (0x00029e57) main_sso_logo_pane_g1

0xb3ad,	// (0x00032ba7) sso_sk_pane_t1_ParamLimits

0xb3ad,	// (0x00032ba7) sso_sk_pane_t1

0xb3c7,	// (0x00032bc1) sso_sk_pane_t2_ParamLimits

0xb3c7,	// (0x00032bc1) sso_sk_pane_t2

0x0001,

0xfe86,	// (0x00037680) sso_sk_pane_t_ParamLimits

0xfe86,	// (0x00037680) sso_sk_pane_t

0xe5f3,	// (0x00035ded) aid_sso_gap

0xe5fc,	// (0x00035df6) aid_sso_txt1

0xe606,	// (0x00035e00) aid_sso_txt2

0xe610,	// (0x00035e0a) aid_sso_txt3

0x0002,

0xfe8b,	// (0x00037685) aid_sso_txt

0xe61a,	// (0x00035e14) aid_sso_widget

0xb431,	// (0x00032c2b) sso_btn_pane_ParamLimits

0xb431,	// (0x00032c2b) sso_btn_pane

0xb4b9,	// (0x00032cb3) sso_option_pane_ParamLimits

0xb4b9,	// (0x00032cb3) sso_option_pane

0xb53d,	// (0x00032d37) sso_query_pane_ParamLimits

0xb53d,	// (0x00032d37) sso_query_pane

0xb595,	// (0x00032d8f) sso_query_pane_cp01_ParamLimits

0xb595,	// (0x00032d8f) sso_query_pane_cp01

0xb5f3,	// (0x00032ded) sso_t_hdr_pane_ParamLimits

0xb5f3,	// (0x00032ded) sso_t_hdr_pane

0xb617,	// (0x00032e11) sso_t_nml_pane_ParamLimits

0xb617,	// (0x00032e11) sso_t_nml_pane

0xe610,	// (0x00035e0a) sso_t_sub_pane

0xb378,	// (0x00032b72) sso_popup_window_ParamLimits

0xb378,	// (0x00032b72) sso_popup_window

0xb3dd,	// (0x00032bd7) sso_apps_pane_ParamLimits

0xb3dd,	// (0x00032bd7) sso_apps_pane

0xb407,	// (0x00032c01) sso_body_pane_g1

0xb411,	// (0x00032c0b) sso_body_pane_t1

0xb421,	// (0x00032c1b) sso_body_pane_t2

0x0001,

0xfe92,	// (0x0003768c) sso_body_pane_t

0xb483,	// (0x00032c7d) sso_btn_pane_cp01_ParamLimits

0xb483,	// (0x00032c7d) sso_btn_pane_cp01

0xb511,	// (0x00032d0b) sso_prog_pane_ParamLimits

0xb511,	// (0x00032d0b) sso_prog_pane

0xe624,	// (0x00035e1e) sso_t_hdr_pane_t1_ParamLimits

0xe624,	// (0x00035e1e) sso_t_hdr_pane_t1

0xe637,	// (0x00035e31) input_focus_pane_cp10_ParamLimits

0xe637,	// (0x00035e31) input_focus_pane_cp10

0xe64d,	// (0x00035e47) sso_query_pane_t1_ParamLimits

0xe64d,	// (0x00035e47) sso_query_pane_t1

0xe660,	// (0x00035e5a) sso_query_pane_t2_ParamLimits

0xe660,	// (0x00035e5a) sso_query_pane_t2

0xe67a,	// (0x00035e74) sso_query_pane_t3_ParamLimits

0xe67a,	// (0x00035e74) sso_query_pane_t3

0xe6a4,	// (0x00035e9e) sso_query_pane_t4_ParamLimits

0xe6a4,	// (0x00035e9e) sso_query_pane_t4

0x0003,

0xfe97,	// (0x00037691) sso_query_pane_t_ParamLimits

0xfe97,	// (0x00037691) sso_query_pane_t

0xe7c9,	// (0x00035fc3) bg_button_pane_cp22

0xe550,	// (0x00035d4a) sso_btn_pane_t1

0xb66d,	// (0x00032e67) sso_t_nml_pane_t1_ParamLimits

0xb66d,	// (0x00032e67) sso_t_nml_pane_t1

0xe6c8,	// (0x00035ec2) sso_option_row_pane_ParamLimits

0xe6c8,	// (0x00035ec2) sso_option_row_pane

0xe6d5,	// (0x00035ecf) sso_t_sub_pane_t1_ParamLimits

0xe6d5,	// (0x00035ecf) sso_t_sub_pane_t1

0xee98,	// (0x00036692) bg_popup_window_pane_cp11_ParamLimits

0xee98,	// (0x00036692) bg_popup_window_pane_cp11

0xe6e8,	// (0x00035ee2) popup_sk_window_cp01_ParamLimits

0xe6e8,	// (0x00035ee2) popup_sk_window_cp01

0xe6f5,	// (0x00035eef) sso_popup_body_pane_ParamLimits

0xe6f5,	// (0x00035eef) sso_popup_body_pane

0xe702,	// (0x00035efc) scroll_pane_cp21_ParamLimits

0xe702,	// (0x00035efc) scroll_pane_cp21

0xe70f,	// (0x00035f09) sso_popup_body_t_pane_ParamLimits

0xe70f,	// (0x00035f09) sso_popup_body_t_pane

0xe71c,	// (0x00035f16) sso_popup_body_t_hdr_pane_ParamLimits

0xe71c,	// (0x00035f16) sso_popup_body_t_hdr_pane

0xe72a,	// (0x00035f24) sso_popup_body_t_nml_pane_ParamLimits

0xe72a,	// (0x00035f24) sso_popup_body_t_nml_pane

0xe745,	// (0x00035f3f) sso_popup_body_t_sub_pane_ParamLimits

0xe745,	// (0x00035f3f) sso_popup_body_t_sub_pane

0xe768,	// (0x00035f62) sso_popup_body_t_hdr_pane_t1

0xb688,	// (0x00032e82) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb688,	// (0x00032e82) sso_popup_body_t_nml_pane_t1

0xe778,	// (0x00035f72) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe778,	// (0x00035f72) sso_popup_body_t_sub_pane_t1

0x265d,	// (0x00029e57) sso_prog_pane_g1

0xb6c3,	// (0x00032ebd) sso_apps_pane_comp1_ParamLimits

0xb6c3,	// (0x00032ebd) sso_apps_pane_comp1

0xe79d,	// (0x00035f97) sso_apps_pane_comp1_g1

0xe7a5,	// (0x00035f9f) sso_apps_pane_comp1_t1

0xe7b3,	// (0x00035fad) sso_option_row_pane_g1

0xe7bb,	// (0x00035fb5) sso_option_row_pane_t1

0xae5f,	// (0x00032659) bg_welc_area_ParamLimits

0xae5f,	// (0x00032659) bg_welc_area

0xb01e,	// (0x00032818) sso_t_hdr_pane_a_t1_ParamLimits

0xb01e,	// (0x00032818) sso_t_hdr_pane_a_t1

0xb039,	// (0x00032833) sso_t_nml_pane_a_t1_ParamLimits

0xb039,	// (0x00032833) sso_t_nml_pane_a_t1

0xb06c,	// (0x00032866) sso_t_sub_pane_a_t1_ParamLimits

0xb06c,	// (0x00032866) sso_t_sub_pane_a_t1

0xe550,	// (0x00035d4a) sso_btn_pane_t1_copy1

0xe7c9,	// (0x00035fc3) welc_button_pane_2_comp1

0xe5c1,	// (0x00035dbb) sso_t_hdr_pane_p_t1

0xe5d1,	// (0x00035dcb) sso_t_nml_pane_p_t1

0xe5e1,	// (0x00035ddb) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
