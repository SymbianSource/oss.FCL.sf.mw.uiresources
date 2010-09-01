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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008b28a };

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
0x0e58,	// (0x0008c0e2) Screen

0x0e64,	// (0x0008c0ee) application_window

0x0ea0,	// (0x0008c12a) area_bottom_pane_ParamLimits

0x0ea0,	// (0x0008c12a) area_bottom_pane

0x0ed9,	// (0x0008c163) area_top_pane_ParamLimits

0x0ed9,	// (0x0008c163) area_top_pane

0x9f54,	// (0x000951de) call_video_uplink_pane_ParamLimits

0x9f54,	// (0x000951de) call_video_uplink_pane

0x0f67,	// (0x0008c1f1) main_pane_ParamLimits

0x0f67,	// (0x0008c1f1) main_pane

0xad6f,	// (0x00095ff9) context_pane

0x49ed,	// (0x0008fc77) navi_pane

0x4a24,	// (0x0008fcae) popup_cale_events_window_ParamLimits

0x4a24,	// (0x0008fcae) popup_cale_events_window

0xad82,	// (0x0009600c) popup_mup_playback_window

0x4a3c,	// (0x0008fcc6) signal_pane

0xe5a2,	// (0x0009982c) main_browser_pane

0xe740,	// (0x000999ca) main_burst_pane

0x46e9,	// (0x0008f973) main_calc_pane

0xad0b,	// (0x00095f95) main_cale_day_pane

0x46fd,	// (0x0008f987) main_cale_month_pane

0xad0b,	// (0x00095f95) main_cale_week_pane

0xe740,	// (0x000999ca) main_call_pane

0xe24c,	// (0x000994d6) main_call_poc_pane

0xe740,	// (0x000999ca) main_camera_pane

0xe740,	// (0x000999ca) main_chi_dic_pane

0xef22,	// (0x0009a1ac) main_clock_pane

0xe24c,	// (0x000994d6) main_fmradio_pane

0xe740,	// (0x000999ca) main_graph_messa_pane

0xe24c,	// (0x000994d6) main_help_pane

0xe5a2,	// (0x0009982c) main_im_pane

0xe4a7,	// (0x00099731) main_image_pane_ParamLimits

0xe4a7,	// (0x00099731) main_image_pane

0xe24c,	// (0x000994d6) main_location2_pane

0xe740,	// (0x000999ca) main_location_pane

0xe4a7,	// (0x00099731) main_messa_pane

0xe24c,	// (0x000994d6) main_mp2_pane

0xe740,	// (0x000999ca) main_mp_pane

0xe24c,	// (0x000994d6) main_msg_pane

0xe24c,	// (0x000994d6) main_mup_eq_pane

0xe24c,	// (0x000994d6) main_mup_pane

0xe5a2,	// (0x0009982c) main_notes_pane

0xe24c,	// (0x000994d6) main_pec_pane

0xe24c,	// (0x000994d6) main_phob_pane

0xe24c,	// (0x000994d6) main_pinb_pane

0xe24c,	// (0x000994d6) main_postcard_pane

0xe24c,	// (0x000994d6) main_qdial_pane

0xe740,	// (0x000999ca) main_skin_pane

0xe24c,	// (0x000994d6) main_smil2_pane

0xe740,	// (0x000999ca) main_smil_pane

0xe740,	// (0x000999ca) main_video_pane

0xe740,	// (0x000999ca) main_video_tele_pane

0xe4a7,	// (0x00099731) main_viewer_pane_ParamLimits

0xe4a7,	// (0x00099731) main_viewer_pane

0xe740,	// (0x000999ca) main_vorec_pane

0x475b,	// (0x0008f9e5) popup_blid_sat_info_window_ParamLimits

0x475b,	// (0x0008f9e5) popup_blid_sat_info_window

0x47bf,	// (0x0008fa49) popup_dyc_status_message_window_ParamLimits

0x47bf,	// (0x0008fa49) popup_dyc_status_message_window

0x47d9,	// (0x0008fa63) popup_grid_large_graphic_window_ParamLimits

0x47d9,	// (0x0008fa63) popup_grid_large_graphic_window

0x489b,	// (0x0008fb25) popup_loc_request_window_ParamLimits

0x489b,	// (0x0008fb25) popup_loc_request_window

0x49c1,	// (0x0008fc4b) popup_wml_address_window_ParamLimits

0x49c1,	// (0x0008fc4b) popup_wml_address_window

0x4527,	// (0x0008f7b1) call_muted_g1

0x3e97,	// (0x0008f121) popup_call_audio_conf_window_ParamLimits

0x3e97,	// (0x0008f121) popup_call_audio_conf_window

0x4537,	// (0x0008f7c1) popup_call_audio_first_window_ParamLimits

0x4537,	// (0x0008f7c1) popup_call_audio_first_window

0x45ad,	// (0x0008f837) popup_call_audio_in_window_ParamLimits

0x45ad,	// (0x0008f837) popup_call_audio_in_window

0x45e9,	// (0x0008f873) popup_call_audio_out_window_ParamLimits

0x45e9,	// (0x0008f873) popup_call_audio_out_window

0x4623,	// (0x0008f8ad) popup_call_audio_second_window_ParamLimits

0x4623,	// (0x0008f8ad) popup_call_audio_second_window

0x4679,	// (0x0008f903) popup_call_audio_wait_window_ParamLimits

0x4679,	// (0x0008f903) popup_call_audio_wait_window

0x46ae,	// (0x0008f938) popup_number_entry_window_ParamLimits

0x46ae,	// (0x0008f938) popup_number_entry_window

0xde04,	// (0x0009908e) bg_popup_call_pane_cp05_ParamLimits

0xde04,	// (0x0009908e) bg_popup_call_pane_cp05

0xde24,	// (0x000990ae) popup_number_entry_window_t1

0xde37,	// (0x000990c1) popup_number_entry_window_t2

0xde49,	// (0x000990d3) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0009a30f) popup_number_entry_window_t

0xde90,	// (0x0009911a) text_title_cp2

0xdea3,	// (0x0009912d) bg_popup_call_pane_cp_ParamLimits

0xdea3,	// (0x0009912d) bg_popup_call_pane_cp

0xdeb1,	// (0x0009913b) call_thumbnail_pane

0xdeb9,	// (0x00099143) popup_call_audio_in_window_g1_ParamLimits

0xdeb9,	// (0x00099143) popup_call_audio_in_window_g1

0xdec5,	// (0x0009914f) popup_call_audio_in_window_g2_ParamLimits

0xdec5,	// (0x0009914f) popup_call_audio_in_window_g2

0xded1,	// (0x0009915b) popup_call_audio_in_window_g3_ParamLimits

0xded1,	// (0x0009915b) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0009a318) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0009a318) popup_call_audio_in_window_g

0xdedd,	// (0x00099167) popup_call_audio_in_window_t1_ParamLimits

0xdedd,	// (0x00099167) popup_call_audio_in_window_t1

0xdef9,	// (0x00099183) popup_call_audio_in_window_t2_ParamLimits

0xdef9,	// (0x00099183) popup_call_audio_in_window_t2

0xdf15,	// (0x0009919f) popup_call_audio_in_window_t3_ParamLimits

0xdf15,	// (0x0009919f) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0009a31f) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0009a31f) popup_call_audio_in_window_t

0xdea3,	// (0x0009912d) bg_popup_call_pane_cp01_ParamLimits

0xdea3,	// (0x0009912d) bg_popup_call_pane_cp01

0xdeb1,	// (0x0009913b) call_thumbnail_pane_cp02

0xdf28,	// (0x000991b2) call_type_pane_cp022

0xdf30,	// (0x000991ba) popup_call_audio_out_window_g1_ParamLimits

0xdf30,	// (0x000991ba) popup_call_audio_out_window_g1

0xdf42,	// (0x000991cc) popup_call_audio_out_window_g2_ParamLimits

0xdf42,	// (0x000991cc) popup_call_audio_out_window_g2

0xdf4e,	// (0x000991d8) popup_call_audio_out_window_g3_ParamLimits

0xdf4e,	// (0x000991d8) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0009a326) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0009a326) popup_call_audio_out_window_g

0xdf60,	// (0x000991ea) popup_call_audio_out_window_t1_ParamLimits

0xdf60,	// (0x000991ea) popup_call_audio_out_window_t1

0xdf78,	// (0x00099202) popup_call_audio_out_window_t2_ParamLimits

0xdf78,	// (0x00099202) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0009a32d) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0009a32d) popup_call_audio_out_window_t

0xdf8d,	// (0x00099217) bg_popup_call_pane_ParamLimits

0xdf8d,	// (0x00099217) bg_popup_call_pane

0x10ee,	// (0x0008c378) call_thumbnail_pane_cp_ParamLimits

0x10ee,	// (0x0008c378) call_thumbnail_pane_cp

0xe011,	// (0x0009929b) call_type_pane_cp01_ParamLimits

0xe011,	// (0x0009929b) call_type_pane_cp01

0xe055,	// (0x000992df) popup_call_audio_first_window_g1_ParamLimits

0xe055,	// (0x000992df) popup_call_audio_first_window_g1

0xe0a1,	// (0x0009932b) popup_call_audio_first_window_g2_ParamLimits

0xe0a1,	// (0x0009932b) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0009a332) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0009a332) popup_call_audio_first_window_g

0xe0e5,	// (0x0009936f) popup_call_audio_first_window_t1_ParamLimits

0xe0e5,	// (0x0009936f) popup_call_audio_first_window_t1

0xe191,	// (0x0009941b) popup_call_audio_first_window_t4_ParamLimits

0xe191,	// (0x0009941b) popup_call_audio_first_window_t4

0xe21d,	// (0x000994a7) popup_call_audio_first_window_t5_ParamLimits

0xe21d,	// (0x000994a7) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0009a337) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0009a337) popup_call_audio_first_window_t

0xe24c,	// (0x000994d6) bg_popup_call_pane_cp02

0xe256,	// (0x000994e0) call_type_pane_cp023

0xe25e,	// (0x000994e8) popup_call_audio_wait_window_g1

0xe266,	// (0x000994f0) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0009a33e) popup_call_audio_wait_window_g

0xe26e,	// (0x000994f8) popup_call_audio_wait_window_t3

0xe27c,	// (0x00099506) bg_popup_call_pane_cp03_ParamLimits

0xe27c,	// (0x00099506) bg_popup_call_pane_cp03

0xe2dc,	// (0x00099566) call_thumbnail_pane_cp011_ParamLimits

0xe2dc,	// (0x00099566) call_thumbnail_pane_cp011

0xe2e8,	// (0x00099572) call_type_pane_cp034_ParamLimits

0xe2e8,	// (0x00099572) call_type_pane_cp034

0xe324,	// (0x000995ae) popup_call_audio_second_window_g1_ParamLimits

0xe324,	// (0x000995ae) popup_call_audio_second_window_g1

0xe360,	// (0x000995ea) popup_call_audio_second_window_g2_ParamLimits

0xe360,	// (0x000995ea) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0009a343) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0009a343) popup_call_audio_second_window_g

0xe39c,	// (0x00099626) popup_call_audio_second_window_t1_ParamLimits

0xe39c,	// (0x00099626) popup_call_audio_second_window_t1

0xe41d,	// (0x000996a7) popup_call_audio_second_window_t2_ParamLimits

0xe41d,	// (0x000996a7) popup_call_audio_second_window_t2

0xe453,	// (0x000996dd) popup_call_audio_second_window_t3_ParamLimits

0xe453,	// (0x000996dd) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0009a348) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0009a348) popup_call_audio_second_window_t

0xe24c,	// (0x000994d6) bg_popup_call_pane_cp04

0xe489,	// (0x00099713) list_conf_pane

0xe491,	// (0x0009971b) popup_call_audio_conf_window_t1

0xe49f,	// (0x00099729) call_thumbnail_pane_g1

0xe4a7,	// (0x00099731) bg_pinb_pane_ParamLimits

0xe4a7,	// (0x00099731) bg_pinb_pane

0xe4b5,	// (0x0009973f) find_pinb_pane

0xe4a7,	// (0x00099731) listscroll_pinb_pane_ParamLimits

0xe4a7,	// (0x00099731) listscroll_pinb_pane

0xe4bf,	// (0x00099749) pinb_bg_pane_g1

0xe4bf,	// (0x00099749) pinb_bg_pane_g2

0xe4bf,	// (0x00099749) pinb_bg_pane_g3

0xe4bf,	// (0x00099749) pinb_bg_pane_g4

0xe4bf,	// (0x00099749) pinb_bg_pane_g5

0xe4bf,	// (0x00099749) pinb_bg_pane_g6

0xe4bf,	// (0x00099749) pinb_bg_pane_g7

0xe4bf,	// (0x00099749) pinb_bg_pane_g8

0xe4bf,	// (0x00099749) pinb_bg_pane_g9

0xe4bf,	// (0x00099749) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0009a34f) pinb_bg_pane_g

0xddfa,	// (0x00099084) grid_pinb_pane

0xddfa,	// (0x00099084) list_pinb_pane

0xe4c9,	// (0x00099753) scroll_pane_cp01_ParamLimits

0xe4c9,	// (0x00099753) scroll_pane_cp01

0xe4d7,	// (0x00099761) find_pinb_pane_g1_ParamLimits

0xe4d7,	// (0x00099761) find_pinb_pane_g1

0xe4ef,	// (0x00099779) find_pinb_pane_t1

0xe501,	// (0x0009978b) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0009a369) find_pinb_pane_t

0xe516,	// (0x000997a0) input_focus_pane_cp01_ParamLimits

0xe516,	// (0x000997a0) input_focus_pane_cp01

0xe522,	// (0x000997ac) cell_pinb_pane_ParamLimits

0xe522,	// (0x000997ac) cell_pinb_pane

0xe530,	// (0x000997ba) cell_pinb_pane_g1_ParamLimits

0xe530,	// (0x000997ba) cell_pinb_pane_g1

0xe53e,	// (0x000997c8) cell_pinb_pane_g2_ParamLimits

0xe53e,	// (0x000997c8) cell_pinb_pane_g2

0xe53e,	// (0x000997c8) cell_pinb_pane_g3_ParamLimits

0xe53e,	// (0x000997c8) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0009a36e) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0009a36e) cell_pinb_pane_g

0xe24c,	// (0x000994d6) grid_highlight_pane_cp01

0xe522,	// (0x000997ac) list_pinb_item_pane_ParamLimits

0xe522,	// (0x000997ac) list_pinb_item_pane

0xddfa,	// (0x00099084) list_highlight_pane_cp02

0xe54c,	// (0x000997d6) list_pinb_item_pane_g1_ParamLimits

0xe54c,	// (0x000997d6) list_pinb_item_pane_g1

0xe53e,	// (0x000997c8) list_pinb_item_pane_g2_ParamLimits

0xe53e,	// (0x000997c8) list_pinb_item_pane_g2

0xe530,	// (0x000997ba) list_pinb_item_pane_g3_ParamLimits

0xe530,	// (0x000997ba) list_pinb_item_pane_g3

0xe53e,	// (0x000997c8) list_pinb_item_pane_g4_ParamLimits

0xe53e,	// (0x000997c8) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0009a375) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0009a375) list_pinb_item_pane_g

0xe55a,	// (0x000997e4) list_pinb_item_pane_t1_ParamLimits

0xe55a,	// (0x000997e4) list_pinb_item_pane_t1

0x1132,	// (0x0008c3bc) calc_display_pane

0x1157,	// (0x0008c3e1) calc_paper_pane

0x117a,	// (0x0008c404) grid_calc_pane

0xe24c,	// (0x000994d6) bg_list_pane_cp01

0x11a8,	// (0x0008c432) clock_g1

0x11b0,	// (0x0008c43a) clock_g2

0x0001,

0xf0f4,	// (0x0009a37e) clock_g

0x11b8,	// (0x0008c442) clock_t1_ParamLimits

0x11b8,	// (0x0008c442) clock_t1

0x11cd,	// (0x0008c457) clock_t2_ParamLimits

0x11cd,	// (0x0008c457) clock_t2

0x11df,	// (0x0008c469) clock_t3_ParamLimits

0x11df,	// (0x0008c469) clock_t3

0x11f1,	// (0x0008c47b) clock_t4_ParamLimits

0x11f1,	// (0x0008c47b) clock_t4

0x1203,	// (0x0008c48d) clock_t5_ParamLimits

0x1203,	// (0x0008c48d) clock_t5

0x1218,	// (0x0008c4a2) clock_t6_ParamLimits

0x1218,	// (0x0008c4a2) clock_t6

0x122a,	// (0x0008c4b4) clock_t7_ParamLimits

0x122a,	// (0x0008c4b4) clock_t7

0x123c,	// (0x0008c4c6) clock_t8_ParamLimits

0x123c,	// (0x0008c4c6) clock_t8

0x1250,	// (0x0008c4da) clock_t9_ParamLimits

0x1250,	// (0x0008c4da) clock_t9

0x0008,

0xf0f9,	// (0x0009a383) clock_t_ParamLimits

0xf0f9,	// (0x0009a383) clock_t

0xe56e,	// (0x000997f8) popup_clock_analogue_window_cp02

0xe56e,	// (0x000997f8) popup_clock_digital_window_cp01

0xe24c,	// (0x000994d6) listscroll_help_pane

0xe24c,	// (0x000994d6) phob_pre_status_pane

0xe576,	// (0x00099800) grid_qdial_pane

0xe4a7,	// (0x00099731) listscroll_mce_pane

0xe4a7,	// (0x00099731) bg_notes_pane

0xe580,	// (0x0009980a) list_notes_pane

0x1266,	// (0x0008c4f0) scroll_pane_cp06

0xe58e,	// (0x00099818) bg_calc_paper_pane

0x9f92,	// (0x0009521c) list_calc_pane

0xe5a2,	// (0x0009982c) bg_calc_display_pane

0x127a,	// (0x0008c504) calc_display_pane_t1

0x128c,	// (0x0008c516) calc_display_pane_t2

0x9fac,	// (0x00095236) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0009a396) calc_display_pane_t

0x129e,	// (0x0008c528) cell_calc_pane_ParamLimits

0x129e,	// (0x0008c528) cell_calc_pane

0xe5ae,	// (0x00099838) bg_calc_paper_pane_g1

0xe5ba,	// (0x00099844) bg_calc_paper_pane_g2

0xe5c6,	// (0x00099850) bg_calc_paper_pane_g3

0xe5d2,	// (0x0009985c) bg_calc_paper_pane_g4

0xe5de,	// (0x00099868) bg_calc_paper_pane_g5

0x12d9,	// (0x0008c563) bg_calc_paper_pane_g6

0x12e7,	// (0x0008c571) bg_calc_paper_pane_g7

0x12f5,	// (0x0008c57f) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0009a39d) bg_calc_paper_pane_g

0x1308,	// (0x0008c592) calc_bg_paper_pane_g9

0x131b,	// (0x0008c5a5) list_calc_item_pane_ParamLimits

0x131b,	// (0x0008c5a5) list_calc_item_pane

0xe5ea,	// (0x00099874) list_calc_item_pane_g1

0x9fbe,	// (0x00095248) list_calc_item_pane_t1_ParamLimits

0x9fbe,	// (0x00095248) list_calc_item_pane_t1

0x1333,	// (0x0008c5bd) list_calc_item_pane_t2_ParamLimits

0x1333,	// (0x0008c5bd) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0009a3ae) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0009a3ae) list_calc_item_pane_t

0xe4bf,	// (0x00099749) cell_calc_pane_g1

0xe5f7,	// (0x00099881) grid_highlight_pane_cp02

0x1365,	// (0x0008c5ef) bg_calc_display_pane_g1

0x136e,	// (0x0008c5f8) bg_calc_display_pane_g2

0xefc9,	// (0x0009a253) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0009a3b8) bg_calc_display_pane_g

0x1378,	// (0x0008c602) cell_qdial_pane_ParamLimits

0x1378,	// (0x0008c602) cell_qdial_pane

0x138c,	// (0x0008c616) cell_qdial_pane_g1_ParamLimits

0x138c,	// (0x0008c616) cell_qdial_pane_g1

0x13a2,	// (0x0008c62c) cell_qdial_pane_g2_ParamLimits

0x13a2,	// (0x0008c62c) cell_qdial_pane_g2

0xe619,	// (0x000998a3) cell_qdial_pane_g3_ParamLimits

0xe619,	// (0x000998a3) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0009a3bf) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0009a3bf) cell_qdial_pane_g

0x13c9,	// (0x0008c653) cell_qdial_pane_t1_ParamLimits

0x13c9,	// (0x0008c653) cell_qdial_pane_t1

0x13e1,	// (0x0008c66b) cell_qdial_pane_t2_ParamLimits

0x13e1,	// (0x0008c66b) cell_qdial_pane_t2

0x13f4,	// (0x0008c67e) cell_qdial_pane_t3_ParamLimits

0x13f4,	// (0x0008c67e) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0009a3c8) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0009a3c8) cell_qdial_pane_t

0xe24c,	// (0x000994d6) grid_highlight_pane_cp04

0xe625,	// (0x000998af) thumbnail_qdial_pane_ParamLimits

0xe625,	// (0x000998af) thumbnail_qdial_pane

0xe681,	// (0x0009990b) list_help_pane

0xe68a,	// (0x00099914) scroll_pane_cp02

0x1407,	// (0x0008c691) help_list_pane_t1_ParamLimits

0x1407,	// (0x0008c691) help_list_pane_t1

0x9fd0,	// (0x0009525a) bg_notes_pane_g2

0x9fd8,	// (0x00095262) bg_notes_pane_g3

0x9fe0,	// (0x0009526a) notes_bg_pane_g1

0x9fe8,	// (0x00095272) notes_bg_pane_g4

0x9ff0,	// (0x0009527a) notes_bg_pane_g5

0x9ff8,	// (0x00095282) notes_bg_pane_g6

0xa000,	// (0x0009528a) notes_bg_pane_g7

0xa008,	// (0x00095292) notes_bg_pane_g8

0xa010,	// (0x0009529a) notes_bg_pane_g9

0x0006,

0xf145,	// (0x0009a3cf) notes_bg_pane_g

0x142b,	// (0x0008c6b5) list_notes_text_pane_ParamLimits

0x142b,	// (0x0008c6b5) list_notes_text_pane

0xe693,	// (0x0009991d) list_notes_text_pane_g1

0x1442,	// (0x0008c6cc) list_notes_text_pane_t1

0x1450,	// (0x0008c6da) listscroll_cale_week_pane

0x147a,	// (0x0008c704) bg_cale_heading_pane

0x149e,	// (0x0008c728) bg_cale_pane_cp01

0x14bb,	// (0x0008c745) cale_week_corner_pane

0x14da,	// (0x0008c764) cale_week_day_heading_pane

0x1503,	// (0x0008c78d) cale_week_scroll_pane_g1

0x1522,	// (0x0008c7ac) cale_week_scroll_pane_g2

0x153a,	// (0x0008c7c4) cale_week_scroll_pane_g3

0x1552,	// (0x0008c7dc) cale_week_scroll_pane_g4

0x156a,	// (0x0008c7f4) cale_week_scroll_pane_g5

0x158a,	// (0x0008c814) cale_week_scroll_pane_g6

0x15aa,	// (0x0008c834) cale_week_scroll_pane_g7

0x15ce,	// (0x0008c858) cale_week_scroll_pane_g8

0x15f2,	// (0x0008c87c) cale_week_scroll_pane_g9

0x160a,	// (0x0008c894) cale_week_scroll_pane_g10

0x1622,	// (0x0008c8ac) cale_week_scroll_pane_g11

0x163a,	// (0x0008c8c4) cale_week_scroll_pane_g12

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g13

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g14

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g15

0x000f,

0xf154,	// (0x0009a3de) cale_week_scroll_pane_g

0x16a6,	// (0x0008c930) cale_week_time_pane

0x16ca,	// (0x0008c954) grid_cale_week_pane

0xe6c8,	// (0x00099952) scroll_pane_cp08

0x16fc,	// (0x0008c986) cell_cale_week_pane_ParamLimits

0x16fc,	// (0x0008c986) cell_cale_week_pane

0x1798,	// (0x0008ca22) cale_week_day_heading_pane_t1

0x17c2,	// (0x0008ca4c) cale_week_day_heading_pane_t2

0x17f1,	// (0x0008ca7b) cale_week_day_heading_pane_t3

0x1820,	// (0x0008caaa) cale_week_day_heading_pane_t4

0x184f,	// (0x0008cad9) cale_week_day_heading_pane_t5

0x1882,	// (0x0008cb0c) cale_week_day_heading_pane_t6

0x18b9,	// (0x0008cb43) cale_week_day_heading_pane_t7

0x0006,

0xf175,	// (0x0009a3ff) cale_week_day_heading_pane_t

0xe6e5,	// (0x0009996f) bg_cale_side_pane

0x18e3,	// (0x0008cb6d) cale_week_time_pane_t1

0x18fd,	// (0x0008cb87) cale_week_time_pane_t2

0x1917,	// (0x0008cba1) cale_week_time_pane_t3

0x1931,	// (0x0008cbbb) cale_week_time_pane_t4

0x194b,	// (0x0008cbd5) cale_week_time_pane_t5

0x1965,	// (0x0008cbef) cale_week_time_pane_t6

0x1985,	// (0x0008cc0f) cale_week_time_pane_t7

0x19ab,	// (0x0008cc35) cale_week_time_pane_t8

0x0007,

0xf184,	// (0x0009a40e) cale_week_time_pane_t

0x19d1,	// (0x0008cc5b) cell_cale_week_pane_g2

0x19f5,	// (0x0008cc7f) cell_cale_week_pane_g3_ParamLimits

0x19f5,	// (0x0008cc7f) cell_cale_week_pane_g3

0xe6f3,	// (0x0009997d) grid_highlight_pane_cp07

0xe6fb,	// (0x00099985) listscroll_gms_pane

0xe705,	// (0x0009998f) grid_gms_pane

0xe70e,	// (0x00099998) listscroll_gms_pane_g1

0xe716,	// (0x000999a0) listscroll_gms_pane_g2

0x0001,

0x006b,	// (0x0008b2f5) listscroll_gms_pane_g

0x1a0d,	// (0x0008cc97) scroll_pane_cp010

0x1a18,	// (0x0008cca2) cell_gms_pane_ParamLimits

0x1a18,	// (0x0008cca2) cell_gms_pane

0x1a2f,	// (0x0008ccb9) cell_gms_pane_g1

0xe71e,	// (0x000999a8) cell_gms_pane_g2

0xe726,	// (0x000999b0) cell_gms_pane_g3

0xe72f,	// (0x000999b9) cell_gms_pane_g4

0x0003,

0xf195,	// (0x0009a41f) cell_gms_pane_g

0xe738,	// (0x000999c2) grid_highlight_pane_cp09

0x44ab,	// (0x0008f735) phob_pre_status_pane_g1

0x44b3,	// (0x0008f73d) phob_pre_status_pane_g2

0x44bb,	// (0x0008f745) phob_pre_status_pane_g3

0x44c3,	// (0x0008f74d) phob_pre_status_pane_g4

0x0004,

0xf494,	// (0x0009a71e) phob_pre_status_pane_g

0x44d3,	// (0x0008f75d) phob_pre_status_pane_t1

0x44e3,	// (0x0008f76d) phob_pre_status_pane_t2

0x44f3,	// (0x0008f77d) phob_pre_status_pane_t3

0x0002,

0xf49f,	// (0x0009a729) phob_pre_status_pane_t

0xe740,	// (0x000999ca) bg_list_pane_cp05

0x1a3f,	// (0x0008ccc9) grid_vorec_pane

0x1a49,	// (0x0008ccd3) vorec_t1

0x1a57,	// (0x0008cce1) vorec_t2

0x1a65,	// (0x0008ccef) vorec_t3

0x1a73,	// (0x0008ccfd) vorec_t4

0x9cfc,	// (0x00094f86) vorec_t5

0x9d0a,	// (0x00094f94) vorec_t6

0x0004,

0xf19e,	// (0x0009a428) vorec_t

0x9d18,	// (0x00094fa2) wait_bar_pane_cp01

0xef0d,	// (0x0009a197) cell_vorec_pane_ParamLimits

0xef0d,	// (0x0009a197) cell_vorec_pane

0xa018,	// (0x000952a2) cell_vorec_pane_g1

0xe24c,	// (0x000994d6) grid_highlight_pane_cp05

0xe4c9,	// (0x00099753) cams_zoom_pane

0xe4c9,	// (0x00099753) image_vga_pane

0xe530,	// (0x000997ba) main_camera_pane_g1

0xe530,	// (0x000997ba) main_camera_pane_g2

0xe530,	// (0x000997ba) main_camera_pane_g3

0xe530,	// (0x000997ba) main_camera_pane_g4

0xe530,	// (0x000997ba) main_camera_pane_g5

0xe530,	// (0x000997ba) main_camera_pane_g6

0xe530,	// (0x000997ba) main_camera_pane_g7

0x0007,

0xf1a9,	// (0x0009a433) main_camera_pane_g

0xe748,	// (0x000999d2) main_camera_pane_t1

0xe748,	// (0x000999d2) main_camera_pane_t2

0x0001,

0xf1ba,	// (0x0009a444) main_camera_pane_t

0x1aa3,	// (0x0008cd2d) cams_zoom_pane_cp_ParamLimits

0x1aa3,	// (0x0008cd2d) cams_zoom_pane_cp

0x1ad7,	// (0x0008cd61) image_cif_pane_ParamLimits

0x1ad7,	// (0x0008cd61) image_cif_pane

0xddfa,	// (0x00099084) image_subqcif_pane

0x1ae9,	// (0x0008cd73) main_video_pane_g1_ParamLimits

0x1ae9,	// (0x0008cd73) main_video_pane_g1

0x1b17,	// (0x0008cda1) main_video_pane_g2_ParamLimits

0x1b17,	// (0x0008cda1) main_video_pane_g2

0x1b51,	// (0x0008cddb) main_video_pane_g3_ParamLimits

0x1b51,	// (0x0008cddb) main_video_pane_g3

0x1b51,	// (0x0008cddb) main_video_pane_g4_ParamLimits

0x1b51,	// (0x0008cddb) main_video_pane_g4

0x1b85,	// (0x0008ce0f) main_video_pane_g5_ParamLimits

0x1b85,	// (0x0008ce0f) main_video_pane_g5

0xe75c,	// (0x000999e6) main_video_pane_g6_ParamLimits

0xe75c,	// (0x000999e6) main_video_pane_g6

0x0006,

0xf1bf,	// (0x0009a449) main_video_pane_g_ParamLimits

0xf1bf,	// (0x0009a449) main_video_pane_g

0x1ba1,	// (0x0008ce2b) main_video_pane_t1_ParamLimits

0x1ba1,	// (0x0008ce2b) main_video_pane_t1

0xe776,	// (0x00099a00) cams_zoom_pane_g1

0xe776,	// (0x00099a00) cams_zoom_pane_g2

0xe776,	// (0x00099a00) cams_zoom_pane_g3

0xe776,	// (0x00099a00) cams_zoom_pane_g4

0x0003,

0xf1ce,	// (0x0009a458) cams_zoom_pane_g

0x1bf9,	// (0x0008ce83) grid_cams_pane

0x1c13,	// (0x0008ce9d) linegrid_cams_pane

0x1c25,	// (0x0008ceaf) cell_cams_pane_ParamLimits

0x1c25,	// (0x0008ceaf) cell_cams_pane

0xe780,	// (0x00099a0a) cams_burst_image_pane

0xe788,	// (0x00099a12) cell_cams_pane_g1

0xe24c,	// (0x000994d6) grid_highlight_pane_cp03

0xe4bf,	// (0x00099749) mp_bg_pane_g1

0xddfa,	// (0x00099084) bg_list_pane_cp03

0xddfa,	// (0x00099084) bg_mp_pane

0xddfa,	// (0x00099084) grid_mp_pane

0xe776,	// (0x00099a00) media_player_g1

0xeca2,	// (0x00099f2c) media_player_t1

0xeca2,	// (0x00099f2c) media_player_t2

0xeca2,	// (0x00099f2c) media_player_t3

0xeca2,	// (0x00099f2c) media_player_t4

0xeca2,	// (0x00099f2c) media_player_t5

0xeca2,	// (0x00099f2c) media_player_t6

0xeca2,	// (0x00099f2c) media_player_t7

0x0006,

0x0423,	// (0x0008b6ad) media_player_t

0xddfa,	// (0x00099084) wait_bar_pane_cp02

0xf472,	// (0x0009a6fc) main_usb_pane_t

0xef22,	// (0x0009a1ac) cell_mp_pane

0xe4bf,	// (0x00099749) cell_mp_pane_g1

0xe24c,	// (0x000994d6) grid_highlight_pane_cp06

0xe790,	// (0x00099a1a) grid_skin_colour_pane

0xe798,	// (0x00099a22) list_highlight_pane_cp03

0x1c47,	// (0x0008ced1) skin_g1

0xe7a0,	// (0x00099a2a) skin_t1

0xe7af,	// (0x00099a39) skin_t2

0x0001,

0x00d7,	// (0x0008b361) skin_t

0x1c51,	// (0x0008cedb) cell_skin_colour_pane_ParamLimits

0x1c51,	// (0x0008cedb) cell_skin_colour_pane

0xe7bd,	// (0x00099a47) cell_skin_colour_pane_g1

0x1cc4,	// (0x0008cf4e) call_video_g1_ParamLimits

0x1cc4,	// (0x0008cf4e) call_video_g1

0x1ce0,	// (0x0008cf6a) call_video_g2_ParamLimits

0x1ce0,	// (0x0008cf6a) call_video_g2

0x0001,

0xf1e7,	// (0x0009a471) call_video_g_ParamLimits

0xf1e7,	// (0x0009a471) call_video_g

0x1d25,	// (0x0008cfaf) call_video_uplink_pane_cp1_ParamLimits

0x1d25,	// (0x0008cfaf) call_video_uplink_pane_cp1

0xe7cf,	// (0x00099a59) call_video_uplink_pane_cp2

0x1dc6,	// (0x0008d050) video_down_crop_pane_ParamLimits

0x1dc6,	// (0x0008d050) video_down_crop_pane

0x1eaf,	// (0x0008d139) video_down_pane_ParamLimits

0x1eaf,	// (0x0008d139) video_down_pane

0xe7d7,	// (0x00099a61) video_down_subqcif_pane_ParamLimits

0xe7d7,	// (0x00099a61) video_down_subqcif_pane

0xe7f1,	// (0x00099a7b) video_down_subqcif_pane_cp_ParamLimits

0xe7f1,	// (0x00099a7b) video_down_subqcif_pane_cp

0xe819,	// (0x00099aa3) im_reading_pane_ParamLimits

0xe819,	// (0x00099aa3) im_reading_pane

0x1fba,	// (0x0008d244) im_writing_pane_ParamLimits

0x1fba,	// (0x0008d244) im_writing_pane

0x1fd8,	// (0x0008d262) im_reading_pane_t1

0xe833,	// (0x00099abd) list_im_pane

0xe844,	// (0x00099ace) scroll_pane_cp07

0x2017,	// (0x0008d2a1) im_writing_pane_t1_ParamLimits

0x2017,	// (0x0008d2a1) im_writing_pane_t1

0xe85d,	// (0x00099ae7) im_writing_pane_t2_ParamLimits

0xe85d,	// (0x00099ae7) im_writing_pane_t2

0x0001,

0xf1f1,	// (0x0009a47b) im_writing_pane_t_ParamLimits

0xf1f1,	// (0x0009a47b) im_writing_pane_t

0xe24c,	// (0x000994d6) input_focus_pane_cp04

0xe24c,	// (0x000994d6) input_focus_pane_cp05

0x202c,	// (0x0008d2b6) list_im_single_pane_ParamLimits

0x202c,	// (0x0008d2b6) list_im_single_pane

0x2045,	// (0x0008d2cf) list_single_im_pane_t1

0xe740,	// (0x000999ca) blid_accuracy_pane

0xe740,	// (0x000999ca) blid_compass_pane

0xacc3,	// (0x00095f4d) main_location_t1

0xacc3,	// (0x00095f4d) main_location_t2

0xacc3,	// (0x00095f4d) main_location_t3

0x0002,

0xf48d,	// (0x0009a717) main_location_t

0xe24c,	// (0x000994d6) aid_levels_location

0xe4bf,	// (0x00099749) blid_accuracy_pane_g1

0xe4bf,	// (0x00099749) blid_accuracy_pane_g2

0x0001,

0x013a,	// (0x0008b3c4) blid_accuracy_pane_g

0xe8a5,	// (0x00099b2f) wml_content_pane

0xe8e3,	// (0x00099b6d) wml_button_pane_ParamLimits

0xe8e3,	// (0x00099b6d) wml_button_pane

0x2054,	// (0x0008d2de) wml_list_single_large_pane_ParamLimits

0x2054,	// (0x0008d2de) wml_list_single_large_pane

0x206d,	// (0x0008d2f7) wml_list_single_medium_pane_ParamLimits

0x206d,	// (0x0008d2f7) wml_list_single_medium_pane

0x2087,	// (0x0008d311) wml_list_single_small_pane_ParamLimits

0x2087,	// (0x0008d311) wml_list_single_small_pane

0xe8f7,	// (0x00099b81) wml_selection_box_pane_ParamLimits

0xe8f7,	// (0x00099b81) wml_selection_box_pane

0xe90a,	// (0x00099b94) wml_list_single_pane_t1

0xe919,	// (0x00099ba3) wml_list_single_medium_pane_t1

0xe928,	// (0x00099bb2) wml_list_single_large_pane_t1

0xe937,	// (0x00099bc1) input_focus_pane_cp02_ParamLimits

0xe937,	// (0x00099bc1) input_focus_pane_cp02

0xe94a,	// (0x00099bd4) wml_selection_box_pane_g1

0xe953,	// (0x00099bdd) wml_selection_box_pane_t1_ParamLimits

0xe953,	// (0x00099bdd) wml_selection_box_pane_t1

0xe4a7,	// (0x00099731) bg_wml_button_pane_ParamLimits

0xe4a7,	// (0x00099731) bg_wml_button_pane

0xe96b,	// (0x00099bf5) wml_button_pane_g1

0xe973,	// (0x00099bfd) wml_button_pane_t1

0xe96b,	// (0x00099bf5) wml_button_bg_pane_g1

0xe983,	// (0x00099c0d) wml_button_bg_pane_g2

0xe98b,	// (0x00099c15) wml_button_bg_pane_g3

0xe993,	// (0x00099c1d) wml_button_bg_pane_g4

0xe99b,	// (0x00099c25) wml_button_bg_pane_g5

0xe9a3,	// (0x00099c2d) wml_button_bg_pane_g6

0xe9ab,	// (0x00099c35) wml_button_bg_pane_g7

0xe9b3,	// (0x00099c3d) wml_button_bg_pane_g8

0xe9bb,	// (0x00099c45) wml_button_bg_pane_g9

0x0008,

0x00eb,	// (0x0008b375) wml_button_bg_pane_g

0x20a6,	// (0x0008d330) bg_list_pane_cp02

0xe9c3,	// (0x00099c4d) mce_header_pane_ParamLimits

0xe9c3,	// (0x00099c4d) mce_header_pane

0xe9d9,	// (0x00099c63) mce_icon_pane

0xe9d9,	// (0x00099c63) mce_image_pane

0xe9e2,	// (0x00099c6c) mce_text_pane_ParamLimits

0xe9e2,	// (0x00099c6c) mce_text_pane

0x20b0,	// (0x0008d33a) scroll_pane_cp03

0xe8db,	// (0x00099b65) scroll_pane_cp04

0xe9f5,	// (0x00099c7f) scroll_pane_cp05_ParamLimits

0xe9f5,	// (0x00099c7f) scroll_pane_cp05

0x20ba,	// (0x0008d344) mce_header_field_pane_ParamLimits

0x20ba,	// (0x0008d344) mce_header_field_pane

0x20d3,	// (0x0008d35d) mce_header_field_pane_2_ParamLimits

0x20d3,	// (0x0008d35d) mce_header_field_pane_2

0x20e9,	// (0x0008d373) mce_header_field_pane_3

0x20f1,	// (0x0008d37b) list_single_mce_message_pane_ParamLimits

0x20f1,	// (0x0008d37b) list_single_mce_message_pane

0x210d,	// (0x0008d397) list_single_mce_smart_pane_ParamLimits

0x210d,	// (0x0008d397) list_single_mce_smart_pane

0xea01,	// (0x00099c8b) input_focus_pane_cp03

0xea0a,	// (0x00099c94) list_header_data_pane

0x2134,	// (0x0008d3be) mce_header_field_pane_t1

0x2144,	// (0x0008d3ce) list_single_mce_header_pane_ParamLimits

0x2144,	// (0x0008d3ce) list_single_mce_header_pane

0xea12,	// (0x00099c9c) list_single_mce_header_pane_t1

0xea21,	// (0x00099cab) list_single_mce_message_pane_g1

0xea29,	// (0x00099cb3) list_single_mce_message_pane_t1

0x217e,	// (0x0008d408) bg_cale_heading_pane_cp01_ParamLimits

0x217e,	// (0x0008d408) bg_cale_heading_pane_cp01

0xea37,	// (0x00099cc1) bg_cale_pane_cp02_ParamLimits

0xea37,	// (0x00099cc1) bg_cale_pane_cp02

0x21d0,	// (0x0008d45a) cale_month_corner_pane

0x21ef,	// (0x0008d479) cale_month_day_heading_pane_ParamLimits

0x21ef,	// (0x0008d479) cale_month_day_heading_pane

0x2259,	// (0x0008d4e3) cale_month_pane_g1_ParamLimits

0x2259,	// (0x0008d4e3) cale_month_pane_g1

0x22a0,	// (0x0008d52a) cale_month_pane_g2_ParamLimits

0x22a0,	// (0x0008d52a) cale_month_pane_g2

0x22dc,	// (0x0008d566) cale_month_pane_g3_ParamLimits

0x22dc,	// (0x0008d566) cale_month_pane_g3

0x2330,	// (0x0008d5ba) cale_month_pane_g4_ParamLimits

0x2330,	// (0x0008d5ba) cale_month_pane_g4

0x2384,	// (0x0008d60e) cale_month_pane_g5_ParamLimits

0x2384,	// (0x0008d60e) cale_month_pane_g5

0x23e0,	// (0x0008d66a) cale_month_pane_g6_ParamLimits

0x23e0,	// (0x0008d66a) cale_month_pane_g6

0x2448,	// (0x0008d6d2) cale_month_pane_g7_ParamLimits

0x2448,	// (0x0008d6d2) cale_month_pane_g7

0x24b4,	// (0x0008d73e) cale_month_pane_g8_ParamLimits

0x24b4,	// (0x0008d73e) cale_month_pane_g8

0x2520,	// (0x0008d7aa) cale_month_pane_g9_ParamLimits

0x2520,	// (0x0008d7aa) cale_month_pane_g9

0x2584,	// (0x0008d80e) cale_month_pane_g10_ParamLimits

0x2584,	// (0x0008d80e) cale_month_pane_g10

0x25d6,	// (0x0008d860) cale_month_pane_g11_ParamLimits

0x25d6,	// (0x0008d860) cale_month_pane_g11

0x2628,	// (0x0008d8b2) cale_month_pane_g12_ParamLimits

0x2628,	// (0x0008d8b2) cale_month_pane_g12

0x2680,	// (0x0008d90a) cale_month_pane_g13_ParamLimits

0x2680,	// (0x0008d90a) cale_month_pane_g13

0x000c,

0xf1f6,	// (0x0009a480) cale_month_pane_g_ParamLimits

0xf1f6,	// (0x0009a480) cale_month_pane_g

0x26d8,	// (0x0008d962) cale_month_week_pane

0x26fc,	// (0x0008d986) grid_cale_month_pane_ParamLimits

0x26fc,	// (0x0008d986) grid_cale_month_pane

0x275d,	// (0x0008d9e7) cale_month_day_heading_pane_t1

0x27e3,	// (0x0008da6d) cale_month_day_heading_pane_t2

0x285c,	// (0x0008dae6) cale_month_day_heading_pane_t3

0x28d5,	// (0x0008db5f) cale_month_day_heading_pane_t4

0x2956,	// (0x0008dbe0) cale_month_day_heading_pane_t5

0x29df,	// (0x0008dc69) cale_month_day_heading_pane_t6

0x2a70,	// (0x0008dcfa) cale_month_day_heading_pane_t7

0x0006,

0xf211,	// (0x0009a49b) cale_month_day_heading_pane_t

0xe6e5,	// (0x0009996f) bg_cale_side_pane_cp01

0x2b01,	// (0x0008dd8b) cale_month_week_pane_t1

0x2b1a,	// (0x0008dda4) cale_month_week_pane_t2

0x2b33,	// (0x0008ddbd) cale_month_week_pane_t3

0x2b4c,	// (0x0008ddd6) cale_month_week_pane_t4

0x2b65,	// (0x0008ddef) cale_month_week_pane_t5

0x2b7e,	// (0x0008de08) cale_month_week_pane_t6

0x0005,

0xf220,	// (0x0009a4aa) cale_month_week_pane_t

0x2ba3,	// (0x0008de2d) cell_cale_month_pane_ParamLimits

0x2ba3,	// (0x0008de2d) cell_cale_month_pane

0xa022,	// (0x000952ac) cell_cale_month_pane_g1

0x2ced,	// (0x0008df77) cell_cale_month_pane_t1_ParamLimits

0x2ced,	// (0x0008df77) cell_cale_month_pane_t1

0xe6f3,	// (0x0009997d) grid_highlight_pane_cp08

0xe4bf,	// (0x00099749) main_smil_g1

0x2d19,	// (0x0008dfa3) smil_status_pane

0xea76,	// (0x00099d00) smil_text_pane

0xabd9,	// (0x00095e63) bg_popup_call3_rect_pane_g8

0xabe1,	// (0x00095e6b) bg_popup_call3_rect_pane_g9

0x0008,

0xf430,	// (0x0009a6ba) bg_popup_call3_rect_pane_g

0xadf7,	// (0x00096081) smil_status_volume_pane_g1

0xea80,	// (0x00099d0a) smil_status_pane_t1

0xae2a,	// (0x000960b4) volume_smil_pane

0xea97,	// (0x00099d21) list_smil_text_pane

0x2d2e,	// (0x0008dfb8) scroll_pane_cp011

0x2d39,	// (0x0008dfc3) smil_text_list_pane_t1_ParamLimits

0x2d39,	// (0x0008dfc3) smil_text_list_pane_t1

0xa02e,	// (0x000952b8) aid_volume_smil_ParamLimits

0xa02e,	// (0x000952b8) aid_volume_smil

0xe4bf,	// (0x00099749) smil_volume_pane_g1

0xe4bf,	// (0x00099749) smil_volume_pane_g2

0x0001,

0x013a,	// (0x0008b3c4) smil_volume_pane_g

0x1450,	// (0x0008c6da) listscroll_cale_day_pane

0xeaa1,	// (0x00099d2b) bg_cale_pane

0xeab9,	// (0x00099d43) list_cale_pane

0xeadc,	// (0x00099d66) scroll_pane_cp09

0xeaed,	// (0x00099d77) cale_bg_pane_g1

0xeaf5,	// (0x00099d7f) cale_bg_pane_g2

0xeafd,	// (0x00099d87) cale_bg_pane_g3

0xeb05,	// (0x00099d8f) cale_bg_pane_g4

0xeb0d,	// (0x00099d97) cale_bg_pane_g5

0xeb15,	// (0x00099d9f) cale_bg_pane_g6

0xeb1d,	// (0x00099da7) cale_bg_pane_g7

0xeb25,	// (0x00099daf) cale_bg_pane_g8

0xeb2d,	// (0x00099db7) cale_bg_pane_g9

0x0008,

0x013f,	// (0x0008b3c9) cale_bg_pane_g

0x2d8c,	// (0x0008e016) list_cale_time_pane_ParamLimits

0x2d8c,	// (0x0008e016) list_cale_time_pane

0xeb35,	// (0x00099dbf) list_cale_time_pane_g1_ParamLimits

0xeb35,	// (0x00099dbf) list_cale_time_pane_g1

0xeb41,	// (0x00099dcb) list_cale_time_pane_g2_ParamLimits

0xeb41,	// (0x00099dcb) list_cale_time_pane_g2

0x2da6,	// (0x0008e030) list_cale_time_pane_g3_ParamLimits

0x2da6,	// (0x0008e030) list_cale_time_pane_g3

0x2db4,	// (0x0008e03e) list_cale_time_pane_g4_ParamLimits

0x2db4,	// (0x0008e03e) list_cale_time_pane_g4

0x2dc2,	// (0x0008e04c) list_cale_time_pane_g5_ParamLimits

0x2dc2,	// (0x0008e04c) list_cale_time_pane_g5

0x0005,

0xf22d,	// (0x0009a4b7) list_cale_time_pane_g_ParamLimits

0xf22d,	// (0x0009a4b7) list_cale_time_pane_g

0xeb5b,	// (0x00099de5) list_cale_time_pane_t1_ParamLimits

0xeb5b,	// (0x00099de5) list_cale_time_pane_t1

0xeb83,	// (0x00099e0d) list_cale_time_pane_t2_ParamLimits

0xeb83,	// (0x00099e0d) list_cale_time_pane_t2

0x3080,	// (0x0008e30a) aid_blid_cardinal_pane

0x30c2,	// (0x0008e34c) compass_pane_t4

0xebab,	// (0x00099e35) list_cale_time_pane_t4_ParamLimits

0xebab,	// (0x00099e35) list_cale_time_pane_t4

0x30d0,	// (0x0008e35a) compass_pane_t5

0x30e0,	// (0x0008e36a) compass_pane_t6

0x30ee,	// (0x0008e378) compass_pane_t7

0xefe7,	// (0x0009a271) navi_pane_cc_t1

0x32f6,	// (0x0008e580) aid_phob_thumbnail_center_pane

0x3869,	// (0x0008eaf3) main_postcard_pane_g4_ParamLimits

0x0002,

0x015f,	// (0x0008b3e9) list_cale_time_pane_t_ParamLimits

0x015f,	// (0x0008b3e9) list_cale_time_pane_t

0xdea3,	// (0x0009912d) bg_popup_window_pane_cp02_ParamLimits

0xdea3,	// (0x0009912d) bg_popup_window_pane_cp02

0xebd3,	// (0x00099e5d) heading_pane_cp01_ParamLimits

0xebd3,	// (0x00099e5d) heading_pane_cp01

0xebdf,	// (0x00099e69) loc_req_pane_ParamLimits

0xebdf,	// (0x00099e69) loc_req_pane

0xebef,	// (0x00099e79) loc_type_pane_ParamLimits

0xebef,	// (0x00099e79) loc_type_pane

0xec01,	// (0x00099e8b) loc_type_pane_t1_ParamLimits

0xec01,	// (0x00099e8b) loc_type_pane_t1

0xec13,	// (0x00099e9d) loc_type_pane_t2_ParamLimits

0xec13,	// (0x00099e9d) loc_type_pane_t2

0xec25,	// (0x00099eaf) loc_type_pane_t3_ParamLimits

0xec25,	// (0x00099eaf) loc_type_pane_t3

0x0002,

0x0166,	// (0x0008b3f0) loc_type_pane_t_ParamLimits

0x0166,	// (0x0008b3f0) loc_type_pane_t

0xec37,	// (0x00099ec1) list_loc_req_pane

0xec41,	// (0x00099ecb) scroll_pane_cp012

0x2dd0,	// (0x0008e05a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2dd0,	// (0x0008e05a) list_single_loc_request_popup_menu_pane

0xec4c,	// (0x00099ed6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xec4c,	// (0x00099ed6) list_single_loc_request_popup_menu_pane_g1

0xec58,	// (0x00099ee2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xec58,	// (0x00099ee2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x016d,	// (0x0008b3f7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x016d,	// (0x0008b3f7) list_single_loc_request_popup_menu_pane_g

0xec64,	// (0x00099eee) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xec64,	// (0x00099eee) list_single_loc_request_popup_menu_pane_t1

0xe4a7,	// (0x00099731) bg_popup_window_pane_cp03_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_window_pane_cp03

0xefd2,	// (0x0009a25c) heading_loc_req_pane_ParamLimits

0xefd2,	// (0x0009a25c) heading_loc_req_pane

0x2ddd,	// (0x0008e067) popup_dyc_status_message_window_g1_ParamLimits

0x2ddd,	// (0x0008e067) popup_dyc_status_message_window_g1

0x2df1,	// (0x0008e07b) popup_dyc_status_message_window_t1_ParamLimits

0x2df1,	// (0x0008e07b) popup_dyc_status_message_window_t1

0x2e06,	// (0x0008e090) popup_dyc_status_message_window_t2_ParamLimits

0x2e06,	// (0x0008e090) popup_dyc_status_message_window_t2

0x2e1b,	// (0x0008e0a5) popup_dyc_status_message_window_t3_ParamLimits

0x2e1b,	// (0x0008e0a5) popup_dyc_status_message_window_t3

0x0002,

0xf23a,	// (0x0009a4c4) popup_dyc_status_message_window_t_ParamLimits

0xf23a,	// (0x0009a4c4) popup_dyc_status_message_window_t

0xe24c,	// (0x000994d6) bg_heading_pane_cp01

0xec7a,	// (0x00099f04) heading_loc_req_pane_g1

0xec82,	// (0x00099f0c) heading_loc_req_pane_g2

0xec8a,	// (0x00099f14) heading_loc_req_pane_g3

0x0002,

0x0179,	// (0x0008b403) heading_loc_req_pane_g

0xec92,	// (0x00099f1c) heading_loc_req_pane_t1

0xecb2,	// (0x00099f3c) bg_popup_sub_pane_cp01_ParamLimits

0xecb2,	// (0x00099f3c) bg_popup_sub_pane_cp01

0xecc0,	// (0x00099f4a) popup_cale_events_window_g1_ParamLimits

0xecc0,	// (0x00099f4a) popup_cale_events_window_g1

0xece0,	// (0x00099f6a) popup_cale_events_window_g2_ParamLimits

0xece0,	// (0x00099f6a) popup_cale_events_window_g2

0x0001,

0x019b,	// (0x0008b425) popup_cale_events_window_g_ParamLimits

0x019b,	// (0x0008b425) popup_cale_events_window_g

0xed00,	// (0x00099f8a) popup_cale_events_window_t1_ParamLimits

0xed00,	// (0x00099f8a) popup_cale_events_window_t1

0xed12,	// (0x00099f9c) popup_cale_events_window_t2_ParamLimits

0xed12,	// (0x00099f9c) popup_cale_events_window_t2

0xed50,	// (0x00099fda) popup_cale_events_window_t3_ParamLimits

0xed50,	// (0x00099fda) popup_cale_events_window_t3

0xed8a,	// (0x0009a014) popup_cale_events_window_t4_ParamLimits

0xed8a,	// (0x0009a014) popup_cale_events_window_t4

0x0003,

0x01a0,	// (0x0008b42a) popup_cale_events_window_t_ParamLimits

0x01a0,	// (0x0008b42a) popup_cale_events_window_t

0x2e4f,	// (0x0008e0d9) call_type_pane

0x2e5f,	// (0x0008e0e9) popup_call_status_window_g1

0x2e73,	// (0x0008e0fd) popup_call_status_window_g2

0x2e87,	// (0x0008e111) popup_call_status_window_g3

0x0002,

0xf241,	// (0x0009a4cb) popup_call_status_window_g

0xedc0,	// (0x0009a04a) call_type_pane_g1

0xedc9,	// (0x0009a053) call_type_pane_g2

0x0001,

0x01b0,	// (0x0008b43a) call_type_pane_g

0xe24c,	// (0x000994d6) bg_popup_sub_pane_cp02

0xedd2,	// (0x0009a05c) listscroll_popup_wml_pane

0xedda,	// (0x0009a064) list_wml_pane

0xede4,	// (0x0009a06e) scroll_pane_cp013

0xedef,	// (0x0009a079) list_single_graphic_popup_wml_pane_ParamLimits

0xedef,	// (0x0009a079) list_single_graphic_popup_wml_pane

0xe4bf,	// (0x00099749) list_single_graphic_popup_wml_pane_g1

0xee03,	// (0x0009a08d) list_single_graphic_popup_wml_pane_g2

0x0001,

0x01b5,	// (0x0008b43f) list_single_graphic_popup_wml_pane_g

0xee0b,	// (0x0009a095) list_single_graphic_popup_wml_pane_t1

0xee21,	// (0x0009a0ab) aid_call_pane

0xe49f,	// (0x00099729) popup_clock_analogue_window_g1

0xe49f,	// (0x00099729) popup_clock_analogue_window_g2

0xa050,	// (0x000952da) popup_clock_analogue_window_g3

0xa050,	// (0x000952da) popup_clock_analogue_window_g4

0xe4bf,	// (0x00099749) popup_clock_analogue_window_g5

0x0004,

0xf248,	// (0x0009a4d2) popup_clock_analogue_window_g

0xa058,	// (0x000952e2) popup_clock_analogue_window_t1

0xa066,	// (0x000952f0) clock_digital_number_pane_ParamLimits

0xa066,	// (0x000952f0) clock_digital_number_pane

0xa072,	// (0x000952fc) clock_digital_number_pane_cp02_ParamLimits

0xa072,	// (0x000952fc) clock_digital_number_pane_cp02

0xa07e,	// (0x00095308) clock_digital_number_pane_cp03_ParamLimits

0xa07e,	// (0x00095308) clock_digital_number_pane_cp03

0xa08a,	// (0x00095314) clock_digital_number_pane_cp04_ParamLimits

0xa08a,	// (0x00095314) clock_digital_number_pane_cp04

0xa096,	// (0x00095320) clock_digital_separator_pane_ParamLimits

0xa096,	// (0x00095320) clock_digital_separator_pane

0xa0a2,	// (0x0009532c) popup_clock_digital_window_t1

0xe4bf,	// (0x00099749) clock_digital_number_pane_g1

0xe4bf,	// (0x00099749) clock_digital_number_pane_g2

0x0001,

0x013a,	// (0x0008b3c4) clock_digital_number_pane_g

0xe4bf,	// (0x00099749) clock_digital_separator_pane_g1

0xe4bf,	// (0x00099749) clock_digital_separator_pane_g2

0x0001,

0x013a,	// (0x0008b3c4) clock_digital_separator_pane_g

0xe24c,	// (0x000994d6) bg_popup_window_pane_cp04

0xee29,	// (0x0009a0b3) heading_pane_cp03

0xe740,	// (0x000999ca) listscroll_popup_gms_pane

0xe24c,	// (0x000994d6) grid_large_graphic_popup_pane

0xee32,	// (0x0009a0bc) listscroll_popup_gms_pane_g1

0xee3b,	// (0x0009a0c5) listscroll_popup_gms_pane_g2

0x0001,

0x01c5,	// (0x0008b44f) listscroll_popup_gms_pane_g

0xee44,	// (0x0009a0ce) scroll_pane_cp014

0xe522,	// (0x000997ac) cell_large_graphic_popup_pane_ParamLimits

0xe522,	// (0x000997ac) cell_large_graphic_popup_pane

0xe530,	// (0x000997ba) cell_large_graphic_popup_pane_g1_ParamLimits

0xe530,	// (0x000997ba) cell_large_graphic_popup_pane_g1

0xee4d,	// (0x0009a0d7) cell_large_graphic_popup_pane_g2_ParamLimits

0xee4d,	// (0x0009a0d7) cell_large_graphic_popup_pane_g2

0xee5b,	// (0x0009a0e5) cell_large_graphic_popup_pane_g3_ParamLimits

0xee5b,	// (0x0009a0e5) cell_large_graphic_popup_pane_g3

0xee69,	// (0x0009a0f3) cell_large_graphic_popup_pane_g4_ParamLimits

0xee69,	// (0x0009a0f3) cell_large_graphic_popup_pane_g4

0x0003,

0x01ca,	// (0x0008b454) cell_large_graphic_popup_pane_g_ParamLimits

0x01ca,	// (0x0008b454) cell_large_graphic_popup_pane_g

0xe24c,	// (0x000994d6) grid_highlight_pane_cp010

0xe4bf,	// (0x00099749) bg_popup_call_pane_g1

0xee7a,	// (0x0009a104) list_single_graphic_popup_conf_pane_ParamLimits

0xee7a,	// (0x0009a104) list_single_graphic_popup_conf_pane

0xee8c,	// (0x0009a116) list_highlight_pane_cp01

0xee95,	// (0x0009a11f) list_single_graphic_popup_conf_pane_g1

0xee9d,	// (0x0009a127) list_single_graphic_popup_conf_pane_g2

0x0001,

0x01d3,	// (0x0008b45d) list_single_graphic_popup_conf_pane_g

0xeea5,	// (0x0009a12f) list_single_graphic_popup_conf_pane_t1

0xeeb3,	// (0x0009a13d) linegrid_cams_pane_g1

0x2e97,	// (0x0008e121) linegrid_cams_pane_g2

0xe726,	// (0x000999b0) linegrid_cams_pane_g3

0xeebc,	// (0x0009a146) linegrid_cams_pane_g4

0x2ea0,	// (0x0008e12a) linegrid_cams_pane_g5

0x2ea9,	// (0x0008e133) linegrid_cams_pane_g6

0xe72f,	// (0x000999b9) linegrid_cams_pane_g7

0x0006,

0xf253,	// (0x0009a4dd) linegrid_cams_pane_g

0xeec5,	// (0x0009a14f) popup_clock_analogue_window

0xeec5,	// (0x0009a14f) popup_clock_digital_window

0xe24c,	// (0x000994d6) popup_phob_thumbnail_window

0xe4bf,	// (0x00099749) call_video_uplink_pane_g1

0xeece,	// (0x0009a158) call_video_uplink_pane_g2

0x0001,

0x01e7,	// (0x0008b471) call_video_uplink_pane_g

0xeed6,	// (0x0009a160) video_uplink_pane

0xeede,	// (0x0009a168) mce_image_pane_g1

0x2eb4,	// (0x0008e13e) mce_image_pane_g2

0x2ebe,	// (0x0008e148) mce_image_pane_g3

0x2ec8,	// (0x0008e152) mce_image_pane_g4

0x2ed0,	// (0x0008e15a) mce_image_pane_g5

0x0004,

0xf262,	// (0x0009a4ec) mce_image_pane_g

0xeee8,	// (0x0009a172) control_top_pane_stacon_cp01_ParamLimits

0xeee8,	// (0x0009a172) control_top_pane_stacon_cp01

0xeefc,	// (0x0009a186) uni_indicator_pane_stacon_cp01_ParamLimits

0xeefc,	// (0x0009a186) uni_indicator_pane_stacon_cp01

0xef22,	// (0x0009a1ac) bg_popup_sub_pane_cp03

0x2ed8,	// (0x0008e162) chi_dic_find_pane

0x2ee0,	// (0x0008e16a) listscroll_chi_dic_pane

0x2ee9,	// (0x0008e173) main_pane_chidic_g1

0x2efc,	// (0x0008e186) chi_dic_find_pane_t1

0xef2c,	// (0x0009a1b6) find_chidic_pane

0xef35,	// (0x0009a1bf) chi_dic_list_pane_ParamLimits

0xef35,	// (0x0009a1bf) chi_dic_list_pane

0xef46,	// (0x0009a1d0) scroll_pane_cp020

0x2f0a,	// (0x0008e194) find_chidic_pane_t1

0xe24c,	// (0x000994d6) input_focus_pane_cp06

0x2f19,	// (0x0008e1a3) list_chi_dic_pane_ParamLimits

0x2f19,	// (0x0008e1a3) list_chi_dic_pane

0x2f2b,	// (0x0008e1b5) list_chi_dic_pane_t1_ParamLimits

0x2f2b,	// (0x0008e1b5) list_chi_dic_pane_t1

0xe24c,	// (0x000994d6) list_highlight_pane_cp020

0xef4e,	// (0x0009a1d8) bg_cale_heading_pane_g1

0x2f3e,	// (0x0008e1c8) bg_cale_heading_pane_g2

0x2f46,	// (0x0008e1d0) bg_cale_heading_pane_g3

0x2f4e,	// (0x0008e1d8) bg_cale_heading_pane_g4

0x2f58,	// (0x0008e1e2) bg_cale_heading_pane_g5

0x2f62,	// (0x0008e1ec) bg_cale_heading_pane_g6

0x2f6a,	// (0x0008e1f4) bg_cale_heading_pane_g7

0x2f72,	// (0x0008e1fc) bg_cale_heading_pane_g8

0x2f7c,	// (0x0008e206) bg_cale_heading_pane_g9

0x0008,

0xf26d,	// (0x0009a4f7) bg_cale_heading_pane_g

0xef4e,	// (0x0009a1d8) bg_cale_side_pane_g1

0x2f86,	// (0x0008e210) bg_cale_side_pane_g2

0x2f90,	// (0x0008e21a) bg_cale_side_pane_g3

0x2f9a,	// (0x0008e224) bg_cale_side_pane_g4

0x2fa4,	// (0x0008e22e) bg_cale_side_pane_g5

0x2fae,	// (0x0008e238) bg_cale_side_pane_g6

0x2fb8,	// (0x0008e242) bg_cale_side_pane_g7

0x2fc2,	// (0x0008e24c) bg_cale_side_pane_g8

0x2fca,	// (0x0008e254) bg_cale_side_pane_g9

0x0008,

0xf280,	// (0x0009a50a) bg_cale_side_pane_g

0x2fd2,	// (0x0008e25c) popup_call_status_window_ParamLimits

0x2fd2,	// (0x0008e25c) popup_call_status_window

0xef56,	// (0x0009a1e0) stacon_top_pane

0xef5e,	// (0x0009a1e8) status_pane_ParamLimits

0xef5e,	// (0x0009a1e8) status_pane

0xef73,	// (0x0009a1fd) status_small_pane

0xef7b,	// (0x0009a205) control_pane

0xe24c,	// (0x000994d6) stacon_bottom_pane

0xef83,	// (0x0009a20d) list_single_mce_smart_pane_t1_ParamLimits

0xef83,	// (0x0009a20d) list_single_mce_smart_pane_t1

0xef96,	// (0x0009a220) list_single_mce_smart_pane_t2_ParamLimits

0xef96,	// (0x0009a220) list_single_mce_smart_pane_t2

0x0001,

0x021d,	// (0x0008b4a7) list_single_mce_smart_pane_t_ParamLimits

0x021d,	// (0x0008b4a7) list_single_mce_smart_pane_t

0x301f,	// (0x0008e2a9) compass_pane

0x302a,	// (0x0008e2b4) main_location2_pane_t1

0x3040,	// (0x0008e2ca) main_location2_pane_t2

0x3056,	// (0x0008e2e0) main_location2_pane_t3

0x0003,

0xf293,	// (0x0009a51d) main_location2_pane_t

0xefb5,	// (0x0009a23f) compass_pane_g1_ParamLimits

0xefb5,	// (0x0009a23f) compass_pane_g1

0x30a4,	// (0x0008e32e) compass_pane_t1

0x30b3,	// (0x0008e33d) compass_pane_t2

0x0005,

0xf29c,	// (0x0009a526) compass_pane_t

0x30fe,	// (0x0008e388) text_secondary_cp61

0xefde,	// (0x0009a268) navi_pane_cams_g5

0xf001,	// (0x0009a28b) navi_pane_im_t1

0xf00f,	// (0x0009a299) navi_pane_mp_g1_ParamLimits

0xf00f,	// (0x0009a299) navi_pane_mp_g1

0xf023,	// (0x0009a2ad) navi_pane_mp_g2_ParamLimits

0xf023,	// (0x0009a2ad) navi_pane_mp_g2

0xf02f,	// (0x0009a2b9) navi_pane_mp_g3_ParamLimits

0xf02f,	// (0x0009a2b9) navi_pane_mp_g3

0x0002,

0xf2b0,	// (0x0009a53a) navi_pane_mp_g_ParamLimits

0xf2b0,	// (0x0009a53a) navi_pane_mp_g

0xf03b,	// (0x0009a2c5) navi_pane_mp_t1

0xf049,	// (0x0009a2d3) navi_pane_mp_t2

0x0002,

0xf2b7,	// (0x0009a541) navi_pane_mp_t

0x323f,	// (0x0008e4c9) navi_pane_vt_g1

0xf03b,	// (0x0009a2c5) navi_pane_vt_t1

0x3247,	// (0x0008e4d1) navi_slider_pane

0xe740,	// (0x000999ca) zooming_pane

0x3257,	// (0x0008e4e1) navi_slider_pane_g1

0xa0bf,	// (0x00095349) navi_slider_pane_g2

0x0006,

0xf2be,	// (0x0009a548) navi_slider_pane_g

0x327b,	// (0x0008e505) aid_levels_zoom

0x3283,	// (0x0008e50d) zooming_pane_g1

0x328b,	// (0x0008e515) zooming_pane_g2

0x328b,	// (0x0008e515) zooming_pane_g3

0x0002,

0xf2cd,	// (0x0009a557) zooming_pane_g

0x3293,	// (0x0008e51d) level_10_zoom

0x329c,	// (0x0008e526) level_11_zoom

0x32a5,	// (0x0008e52f) level_1_zoom

0x32ae,	// (0x0008e538) level_2_zoom

0x32b7,	// (0x0008e541) level_3_zoom

0x32c0,	// (0x0008e54a) level_4_zoom

0x32c9,	// (0x0008e553) level_5_zoom

0x32d2,	// (0x0008e55c) level_6_zoom

0x32db,	// (0x0008e565) level_7_zoom

0x32e4,	// (0x0008e56e) level_8_zoom

0x32ed,	// (0x0008e577) level_9_zoom

0x32fe,	// (0x0008e588) popup_phob_thumbnail_window_g1

0x3306,	// (0x0008e590) popup_phob_thumbnail_window_g2

0x0001,

0xf2d4,	// (0x0009a55e) popup_phob_thumbnail_window_g

0x4503,	// (0x0008f78d) level_1_location

0x450b,	// (0x0008f795) level_2_location

0x4513,	// (0x0008f79d) level_3_location

0x451d,	// (0x0008f7a7) level_4_location

0xe740,	// (0x000999ca) level_5_location

0x330e,	// (0x0008e598) mce_icon_pane_g1

0x3318,	// (0x0008e5a2) mce_icon_pane_g2

0x0001,

0xf2d9,	// (0x0009a563) mce_icon_pane_g

0x3320,	// (0x0008e5aa) main_mup_pane_g1_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g1

0x3320,	// (0x0008e5aa) main_mup_pane_g2_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g2

0x3320,	// (0x0008e5aa) main_mup_pane_g3_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g3

0x3320,	// (0x0008e5aa) main_mup_pane_g4_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g4

0x3320,	// (0x0008e5aa) main_mup_pane_g5_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g5

0x3320,	// (0x0008e5aa) main_mup_pane_g6_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g6

0x3320,	// (0x0008e5aa) main_mup_pane_g7_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g7

0x3320,	// (0x0008e5aa) main_mup_pane_g8_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g8

0x3320,	// (0x0008e5aa) main_mup_pane_g9_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g9

0x3320,	// (0x0008e5aa) main_mup_pane_g10_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g10

0x3320,	// (0x0008e5aa) main_mup_pane_g11_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g11

0xe530,	// (0x000997ba) main_mup_pane_g12_ParamLimits

0xe530,	// (0x000997ba) main_mup_pane_g12

0x3320,	// (0x0008e5aa) main_mup_pane_g13_ParamLimits

0x3320,	// (0x0008e5aa) main_mup_pane_g13

0x000c,

0xf2de,	// (0x0009a568) main_mup_pane_g_ParamLimits

0xf2de,	// (0x0009a568) main_mup_pane_g

0x332e,	// (0x0008e5b8) main_mup_pane_t1_ParamLimits

0x332e,	// (0x0008e5b8) main_mup_pane_t1

0x332e,	// (0x0008e5b8) main_mup_pane_t2_ParamLimits

0x332e,	// (0x0008e5b8) main_mup_pane_t2

0x332e,	// (0x0008e5b8) main_mup_pane_t3_ParamLimits

0x332e,	// (0x0008e5b8) main_mup_pane_t3

0xe748,	// (0x000999d2) main_mup_pane_t4_ParamLimits

0xe748,	// (0x000999d2) main_mup_pane_t4

0xe748,	// (0x000999d2) main_mup_pane_t5_ParamLimits

0xe748,	// (0x000999d2) main_mup_pane_t5

0x3342,	// (0x0008e5cc) main_mup_pane_t6_ParamLimits

0x3342,	// (0x0008e5cc) main_mup_pane_t6

0x0005,

0xf2f9,	// (0x0009a583) main_mup_pane_t_ParamLimits

0xf2f9,	// (0x0009a583) main_mup_pane_t

0xe522,	// (0x000997ac) mup_progress_pane_ParamLimits

0xe522,	// (0x000997ac) mup_progress_pane

0x3356,	// (0x0008e5e0) mup_visualizer_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup_visualizer_pane

0x3356,	// (0x0008e5e0) mup_volume_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup_volume_pane

0xe53e,	// (0x000997c8) mup_visualizer_pane_g1_ParamLimits

0xe53e,	// (0x000997c8) mup_visualizer_pane_g1

0x3364,	// (0x0008e5ee) mup_visualizer_pane_g2_ParamLimits

0x3364,	// (0x0008e5ee) mup_visualizer_pane_g2

0xe530,	// (0x000997ba) mup_visualizer_pane_g3_ParamLimits

0xe530,	// (0x000997ba) mup_visualizer_pane_g3

0x0002,

0xf306,	// (0x0009a590) mup_visualizer_pane_g_ParamLimits

0xf306,	// (0x0009a590) mup_visualizer_pane_g

0xe776,	// (0x00099a00) mup_volume_pane_g1

0xe776,	// (0x00099a00) mup_volume_pane_g2

0x0001,

0xf30d,	// (0x0009a597) mup_volume_pane_g

0xe776,	// (0x00099a00) mup_progress_pane_g1

0xe776,	// (0x00099a00) mup_progress_pane_g2

0xe776,	// (0x00099a00) mup_progress_pane_g3

0x0002,

0xf312,	// (0x0009a59c) mup_progress_pane_g

0xe24c,	// (0x000994d6) bg_popup_window_pane_cp05

0x3372,	// (0x0008e5fc) heading_pane_cp02_ParamLimits

0x3372,	// (0x0008e5fc) heading_pane_cp02

0x338e,	// (0x0008e618) list_popup_blid_pane

0x3396,	// (0x0008e620) list_blid_sat_info_pane_ParamLimits

0x3396,	// (0x0008e620) list_blid_sat_info_pane

0x33a9,	// (0x0008e633) list_blid_sat_info_pane_g1

0x33b1,	// (0x0008e63b) list_blid_sat_info_pane_t1

0x34cb,	// (0x0008e755) mup_equalizer_pane_ParamLimits

0x34cb,	// (0x0008e755) mup_equalizer_pane

0x34ec,	// (0x0008e776) mup_equalizer_pane_cp1_ParamLimits

0x34ec,	// (0x0008e776) mup_equalizer_pane_cp1

0x350d,	// (0x0008e797) mup_equalizer_pane_cp2_ParamLimits

0x350d,	// (0x0008e797) mup_equalizer_pane_cp2

0x3532,	// (0x0008e7bc) mup_equalizer_pane_cp3_ParamLimits

0x3532,	// (0x0008e7bc) mup_equalizer_pane_cp3

0x355b,	// (0x0008e7e5) mup_equalizer_pane_cp4_ParamLimits

0x355b,	// (0x0008e7e5) mup_equalizer_pane_cp4

0x3584,	// (0x0008e80e) mup_equalizer_pane_cp5

0x359c,	// (0x0008e826) mup_equalizer_pane_cp6

0x35b4,	// (0x0008e83e) mup_equalizer_pane_cp7

0xac59,	// (0x00095ee3) bg_popup_call_poc_act_pane_g9

0xac61,	// (0x00095eeb) bg_popup_call_poc_act_pane_g10

0xac69,	// (0x00095ef3) bg_popup_call_poc_act_pane_g11

0x000a,

0xe4a7,	// (0x00099731) mup_scale_pane

0xe4bf,	// (0x00099749) mup_scale_pane_g1

0x35cc,	// (0x0008e856) mup_scale_pane_g2

0x0006,

0xf32e,	// (0x0009a5b8) mup_scale_pane_g

0x3602,	// (0x0008e88c) msg_data_pane

0x360a,	// (0x0008e894) scroll_pane_cp017

0x3612,	// (0x0008e89c) bg_list_pane_cp04_ParamLimits

0x3612,	// (0x0008e89c) bg_list_pane_cp04

0x363a,	// (0x0008e8c4) msg_data_pane_g1

0x3642,	// (0x0008e8cc) msg_data_pane_g2

0x364c,	// (0x0008e8d6) msg_data_pane_g3

0x3656,	// (0x0008e8e0) msg_data_pane_g4

0x365e,	// (0x0008e8e8) msg_data_pane_g5

0x3666,	// (0x0008e8f0) msg_data_pane_g6

0x366e,	// (0x0008e8f8) msg_data_pane_g7

0x0006,

0xf33d,	// (0x0009a5c7) msg_data_pane_g

0x3676,	// (0x0008e900) msg_text_pane_ParamLimits

0x3676,	// (0x0008e900) msg_text_pane

0x36a9,	// (0x0008e933) qrid_highlight_pane_cp011_ParamLimits

0x36a9,	// (0x0008e933) qrid_highlight_pane_cp011

0xe24c,	// (0x000994d6) msg_body_pane

0xe24c,	// (0x000994d6) msg_header_pane

0x36c8,	// (0x0008e952) input_focus_pane_cp07

0x36eb,	// (0x0008e975) msg_header_pane_t1_ParamLimits

0x36eb,	// (0x0008e975) msg_header_pane_t1

0x3701,	// (0x0008e98b) msg_header_pane_t2_ParamLimits

0x3701,	// (0x0008e98b) msg_header_pane_t2

0x0001,

0xf351,	// (0x0009a5db) msg_header_pane_t_ParamLimits

0xf351,	// (0x0009a5db) msg_header_pane_t

0x3718,	// (0x0008e9a2) msg_body_pane_g1

0x3720,	// (0x0008e9aa) msg_body_pane_t1_ParamLimits

0x3720,	// (0x0008e9aa) msg_body_pane_t1

0x3751,	// (0x0008e9db) msg_body_pane_t2_ParamLimits

0x3751,	// (0x0008e9db) msg_body_pane_t2

0x3763,	// (0x0008e9ed) msg_body_pane_t3_ParamLimits

0x3763,	// (0x0008e9ed) msg_body_pane_t3

0x0002,

0xf356,	// (0x0009a5e0) msg_body_pane_t_ParamLimits

0xf356,	// (0x0009a5e0) msg_body_pane_t

0x37af,	// (0x0008ea39) main_viewer_pane_g1_ParamLimits

0x37af,	// (0x0008ea39) main_viewer_pane_g1

0x37bd,	// (0x0008ea47) main_viewer_pane_g2_ParamLimits

0x37bd,	// (0x0008ea47) main_viewer_pane_g2

0x37cb,	// (0x0008ea55) main_viewer_pane_g3_ParamLimits

0x37cb,	// (0x0008ea55) main_viewer_pane_g3

0x37da,	// (0x0008ea64) main_viewer_pane_g4_ParamLimits

0x37da,	// (0x0008ea64) main_viewer_pane_g4

0xa0e9,	// (0x00095373) main_viewer_pane_g5_ParamLimits

0xa0e9,	// (0x00095373) main_viewer_pane_g5

0xa0e9,	// (0x00095373) main_viewer_pane_g7_ParamLimits

0xa0e9,	// (0x00095373) main_viewer_pane_g7

0xa0fb,	// (0x00095385) main_viewer_pane_g8_ParamLimits

0xa0fb,	// (0x00095385) main_viewer_pane_g8

0x0007,

0xf366,	// (0x0009a5f0) main_viewer_pane_g_ParamLimits

0xf366,	// (0x0009a5f0) main_viewer_pane_g

0x37e9,	// (0x0008ea73) viewer_content_pane_ParamLimits

0x37e9,	// (0x0008ea73) viewer_content_pane

0x3826,	// (0x0008eab0) main_postcard_pane_g1_ParamLimits

0x3826,	// (0x0008eab0) main_postcard_pane_g1

0x383c,	// (0x0008eac6) main_postcard_pane_g2_ParamLimits

0x383c,	// (0x0008eac6) main_postcard_pane_g2

0x3852,	// (0x0008eadc) main_postcard_pane_g3_ParamLimits

0x3852,	// (0x0008eadc) main_postcard_pane_g3

0x0005,

0xf377,	// (0x0009a601) main_postcard_pane_g_ParamLimits

0xf377,	// (0x0009a601) main_postcard_pane_g

0x3869,	// (0x0008eaf3) main_postcard_pane_g4

0xae0a,	// (0x00096094) smil_status_volume_pane_g2

0x38ac,	// (0x0008eb36) postcard_pane_ParamLimits

0x38ac,	// (0x0008eb36) postcard_pane

0x38fc,	// (0x0008eb86) postcard_pane_g1_ParamLimits

0x38fc,	// (0x0008eb86) postcard_pane_g1

0x390a,	// (0x0008eb94) postcard_pane_g2_ParamLimits

0x390a,	// (0x0008eb94) postcard_pane_g2

0x3916,	// (0x0008eba0) postcard_pane_g3_ParamLimits

0x3916,	// (0x0008eba0) postcard_pane_g3

0x3922,	// (0x0008ebac) postcard_pane_g4_ParamLimits

0x3922,	// (0x0008ebac) postcard_pane_g4

0x3930,	// (0x0008ebba) postcard_pane_g5_ParamLimits

0x3930,	// (0x0008ebba) postcard_pane_g5

0x3945,	// (0x0008ebcf) postcard_pane_g6_ParamLimits

0x3945,	// (0x0008ebcf) postcard_pane_g6

0x38fc,	// (0x0008eb86) postcard_pane_g7_ParamLimits

0x38fc,	// (0x0008eb86) postcard_pane_g7

0x0006,

0xf384,	// (0x0009a60e) postcard_pane_g_ParamLimits

0xf384,	// (0x0009a60e) postcard_pane_g

0x395d,	// (0x0008ebe7) main_mp2_pane_g1_ParamLimits

0x395d,	// (0x0008ebe7) main_mp2_pane_g1

0x396b,	// (0x0008ebf5) main_mp2_pane_g2_ParamLimits

0x396b,	// (0x0008ebf5) main_mp2_pane_g2

0x3977,	// (0x0008ec01) main_mp2_pane_g3_ParamLimits

0x3977,	// (0x0008ec01) main_mp2_pane_g3

0x0002,

0xf393,	// (0x0009a61d) main_mp2_pane_g_ParamLimits

0xf393,	// (0x0009a61d) main_mp2_pane_g

0x3983,	// (0x0008ec0d) main_mp2_pane_t1_ParamLimits

0x3983,	// (0x0008ec0d) main_mp2_pane_t1

0x399a,	// (0x0008ec24) main_mp2_pane_t2_ParamLimits

0x399a,	// (0x0008ec24) main_mp2_pane_t2

0x39ae,	// (0x0008ec38) main_mp2_pane_t3_ParamLimits

0x39ae,	// (0x0008ec38) main_mp2_pane_t3

0x0002,

0xf39a,	// (0x0009a624) main_mp2_pane_t_ParamLimits

0xf39a,	// (0x0009a624) main_mp2_pane_t

0x39c0,	// (0x0008ec4a) pec_content_pane_ParamLimits

0x39c0,	// (0x0008ec4a) pec_content_pane

0xe8db,	// (0x00099b65) scroll_pane_cp015

0x39d2,	// (0x0008ec5c) pec_attribute_pane_ParamLimits

0x39d2,	// (0x0008ec5c) pec_attribute_pane

0x39e2,	// (0x0008ec6c) pec_content_pane_g1_ParamLimits

0x39e2,	// (0x0008ec6c) pec_content_pane_g1

0x39ee,	// (0x0008ec78) pec_content_pane_t1_ParamLimits

0x39ee,	// (0x0008ec78) pec_content_pane_t1

0x3a00,	// (0x0008ec8a) pec_content_pane_t2_ParamLimits

0x3a00,	// (0x0008ec8a) pec_content_pane_t2

0x0001,

0xf3a1,	// (0x0009a62b) pec_content_pane_t_ParamLimits

0xf3a1,	// (0x0009a62b) pec_content_pane_t

0x3a12,	// (0x0008ec9c) list_single_graphic_pane_cp01_ParamLimits

0x3a12,	// (0x0008ec9c) list_single_graphic_pane_cp01

0xe4a7,	// (0x00099731) bg_popup_sub_pane_cp04

0x3a2c,	// (0x0008ecb6) popup_mup_playback_window_g1

0x3a38,	// (0x0008ecc2) popup_mup_playback_window_t1

0x3a4d,	// (0x0008ecd7) popup_mup_playback_window_t2

0x0001,

0xf3a6,	// (0x0009a630) popup_mup_playback_window_t

0x3aa2,	// (0x0008ed2c) main_image_pane_g1_ParamLimits

0x3aa2,	// (0x0008ed2c) main_image_pane_g1

0x3b7f,	// (0x0008ee09) scroll_pane_cp018_ParamLimits

0x3b7f,	// (0x0008ee09) scroll_pane_cp018

0x3b97,	// (0x0008ee21) scroll_pane_cp016_ParamLimits

0x3b97,	// (0x0008ee21) scroll_pane_cp016

0x3bcb,	// (0x0008ee55) smil2_image_pane_ParamLimits

0x3bcb,	// (0x0008ee55) smil2_image_pane

0x3c01,	// (0x0008ee8b) smil2_root_pane_ParamLimits

0x3c01,	// (0x0008ee8b) smil2_root_pane

0x3c39,	// (0x0008eec3) smil2_text_pane_ParamLimits

0x3c39,	// (0x0008eec3) smil2_text_pane

0xe24c,	// (0x000994d6) bg_list_pane_cp06

0x3cd1,	// (0x0008ef5b) grid_radio_pane

0xe24c,	// (0x000994d6) bg_popup_window_pane_cp06

0x3cdb,	// (0x0008ef65) main_fmradio_pane_t1

0xac71,	// (0x00095efb) heading_pane_cp04

0x3ce9,	// (0x0008ef73) main_fmradio_pane_t2

0xac79,	// (0x00095f03) popup_cale_lunar_info_window_g1

0x3cf7,	// (0x0008ef81) main_fmradio_pane_t3

0xac81,	// (0x00095f0b) popup_cale_lunar_info_window_g2

0x3d07,	// (0x0008ef91) main_fmradio_pane_t4

0x0001,

0x3d15,	// (0x0008ef9f) main_fmradio_pane_t5

0x0004,

0xf47f,	// (0x0009a709) popup_cale_lunar_info_window_g

0xf3bb,	// (0x0009a645) main_fmradio_pane_t

0x3d23,	// (0x0008efad) wait_bar_pane_cp03

0x3d2b,	// (0x0008efb5) cell_fmradio_pane_ParamLimits

0x3d2b,	// (0x0008efb5) cell_fmradio_pane

0x38fc,	// (0x0008eb86) cell_fmradio_pane_g1_ParamLimits

0x38fc,	// (0x0008eb86) cell_fmradio_pane_g1

0xe24c,	// (0x000994d6) grid_highlight_pane_cp011

0x3d40,	// (0x0008efca) poc_content_pane_ParamLimits

0x3d40,	// (0x0008efca) poc_content_pane

0x3d52,	// (0x0008efdc) scroll_pane_cp019

0x3d5a,	// (0x0008efe4) popup_call_poc_act_window_ParamLimits

0x3d5a,	// (0x0008efe4) popup_call_poc_act_window

0x3d7e,	// (0x0008f008) popup_call_poc_inact_window_ParamLimits

0x3d7e,	// (0x0008f008) popup_call_poc_inact_window

0xf456,	// (0x0009a6e0) bg_popup_call_poc_act_pane_g

0xabe9,	// (0x00095e73) bg_popup_call_poc_inact_pane_g1

0xabf1,	// (0x00095e7b) bg_popup_call_poc_inact_pane_g2

0x3d97,	// (0x0008f021) popup_call_poc_act_window_g2

0xabf9,	// (0x00095e83) bg_popup_call_poc_inact_pane_g3

0xac01,	// (0x00095e8b) bg_popup_call_poc_inact_pane_g4

0xac09,	// (0x00095e93) bg_popup_call_poc_inact_pane_g5

0x3d9f,	// (0x0008f029) popup_call_poc_act_window_t1_ParamLimits

0x3d9f,	// (0x0008f029) popup_call_poc_act_window_t1

0x3dc7,	// (0x0008f051) popup_call_poc_act_window_t2_ParamLimits

0x3dc7,	// (0x0008f051) popup_call_poc_act_window_t2

0x3def,	// (0x0008f079) popup_call_poc_act_window_t3_ParamLimits

0x3def,	// (0x0008f079) popup_call_poc_act_window_t3

0x3e17,	// (0x0008f0a1) popup_call_poc_act_window_t4_ParamLimits

0x3e17,	// (0x0008f0a1) popup_call_poc_act_window_t4

0x0003,

0xf3c6,	// (0x0009a650) popup_call_poc_act_window_t_ParamLimits

0xf3c6,	// (0x0009a650) popup_call_poc_act_window_t

0xac11,	// (0x00095e9b) bg_popup_call_poc_inact_pane_g6

0xac19,	// (0x00095ea3) bg_popup_call_poc_inact_pane_g7

0xac21,	// (0x00095eab) bg_popup_call_poc_inact_pane_g8

0x3e29,	// (0x0008f0b3) popup_call_poc_inact_window_g2

0xac29,	// (0x00095eb3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf443,	// (0x0009a6cd) bg_popup_call_poc_inact_pane_g

0x3e31,	// (0x0008f0bb) popup_call_poc_inact_window_t1_ParamLimits

0x3e31,	// (0x0008f0bb) popup_call_poc_inact_window_t1

0x3e46,	// (0x0008f0d0) popup_call_poc_inact_window_t2_ParamLimits

0x3e46,	// (0x0008f0d0) popup_call_poc_inact_window_t2

0x3e5b,	// (0x0008f0e5) popup_call_poc_inact_window_t3_ParamLimits

0x3e5b,	// (0x0008f0e5) popup_call_poc_inact_window_t3

0x0002,

0xf3cf,	// (0x0009a659) popup_call_poc_inact_window_t_ParamLimits

0xf3cf,	// (0x0009a659) popup_call_poc_inact_window_t

0xad6f,	// (0x00095ff9) context_pane_ParamLimits

0x4a3c,	// (0x0008fcc6) signal_pane_ParamLimits

0xe740,	// (0x000999ca) main_call2_pane

0xad48,	// (0x00095fd2) popup_phob_thumbnail2_window_ParamLimits

0xad48,	// (0x00095fd2) popup_phob_thumbnail2_window

0xa0d1,	// (0x0009535b) aid_hotspot_pointer_arrow_pane

0xa0d9,	// (0x00095363) aid_hotspot_pointer_hand_pane

0x44cb,	// (0x0008f755) phob_pre_status_pane_g5

0xe4c9,	// (0x00099753) cams_zoom_pane_ParamLimits

0xe4c9,	// (0x00099753) image_vga_pane_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g1_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g2_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g3_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g4_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g5_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g6_ParamLimits

0xe530,	// (0x000997ba) main_camera_pane_g7_ParamLimits

0xf1a9,	// (0x0009a433) main_camera_pane_g_ParamLimits

0xe748,	// (0x000999d2) main_camera_pane_t1_ParamLimits

0xe748,	// (0x000999d2) main_camera_pane_t2_ParamLimits

0xf1ba,	// (0x0009a444) main_camera_pane_t_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_preview_window_pane_cp01_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_preview_window_pane_cp01

0x3e70,	// (0x0008f0fa) popup_phob_thumbnail2_window_g1_ParamLimits

0x3e70,	// (0x0008f0fa) popup_phob_thumbnail2_window_g1

0xe24c,	// (0x000994d6) call2_cli_visual_pane

0x3e97,	// (0x0008f121) popup_call2_audio_conf_window_ParamLimits

0x3e97,	// (0x0008f121) popup_call2_audio_conf_window

0x3ebf,	// (0x0008f149) popup_call2_audio_first_window_ParamLimits

0x3ebf,	// (0x0008f149) popup_call2_audio_first_window

0x3f55,	// (0x0008f1df) popup_call2_audio_in_window_ParamLimits

0x3f55,	// (0x0008f1df) popup_call2_audio_in_window

0x3fa1,	// (0x0008f22b) popup_call2_audio_out_window_ParamLimits

0x3fa1,	// (0x0008f22b) popup_call2_audio_out_window

0x4013,	// (0x0008f29d) popup_call2_audio_second_window_ParamLimits

0x4013,	// (0x0008f29d) popup_call2_audio_second_window

0x4079,	// (0x0008f303) popup_call2_audio_wait_window_ParamLimits

0x4079,	// (0x0008f303) popup_call2_audio_wait_window

0xe24c,	// (0x000994d6) bg_popup_call2_act_pane_cp03

0xe489,	// (0x00099713) list_conf_pane_cp

0x40b3,	// (0x0008f33d) popup_call2_audio_conf_window_t1

0x40c1,	// (0x0008f34b) list_single_graphic_popup_conf2_pane_ParamLimits

0x40c1,	// (0x0008f34b) list_single_graphic_popup_conf2_pane

0xee8c,	// (0x0009a116) list_highlight_pane_cp04

0x40d4,	// (0x0008f35e) list_single_graphic_popup_conf2_pane_g1

0xee9d,	// (0x0009a127) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf3d6,	// (0x0009a660) list_single_graphic_popup_conf2_pane_g

0x40de,	// (0x0008f368) list_single_graphic_popup_conf2_pane_t1

0x40ec,	// (0x0008f376) bg_popup_call2_act_pane_cp01_ParamLimits

0x40ec,	// (0x0008f376) bg_popup_call2_act_pane_cp01

0x4176,	// (0x0008f400) call_type_pane_cp05_ParamLimits

0x4176,	// (0x0008f400) call_type_pane_cp05

0x41ca,	// (0x0008f454) popup_call2_audio_second_window_g1_ParamLimits

0x41ca,	// (0x0008f454) popup_call2_audio_second_window_g1

0x421e,	// (0x0008f4a8) popup_call2_audio_second_window_g2_ParamLimits

0x421e,	// (0x0008f4a8) popup_call2_audio_second_window_g2

0x0002,

0xf3db,	// (0x0009a665) popup_call2_audio_second_window_g_ParamLimits

0xf3db,	// (0x0009a665) popup_call2_audio_second_window_g

0x4283,	// (0x0008f50d) popup_call2_audio_second_window_t1_ParamLimits

0x4283,	// (0x0008f50d) popup_call2_audio_second_window_t1

0x433e,	// (0x0008f5c8) popup_call2_audio_second_window_t2_ParamLimits

0x433e,	// (0x0008f5c8) popup_call2_audio_second_window_t2

0xa113,	// (0x0009539d) popup_call2_audio_second_window_t3_ParamLimits

0xa113,	// (0x0009539d) popup_call2_audio_second_window_t3

0x0003,

0xf3e2,	// (0x0009a66c) popup_call2_audio_second_window_t_ParamLimits

0xf3e2,	// (0x0009a66c) popup_call2_audio_second_window_t

0xe24c,	// (0x000994d6) bg_popup_call2_in_pane_cp02

0xe256,	// (0x000994e0) call_type_pane_cp04

0x4391,	// (0x0008f61b) popup_call2_audio_wait_window_g1

0x4399,	// (0x0008f623) popup_call2_audio_wait_window_g2

0x0001,

0xf3eb,	// (0x0009a675) popup_call2_audio_wait_window_g

0xe26e,	// (0x000994f8) popup_call2_audio_wait_window_t3

0xa206,	// (0x00095490) bg_popup_call2_act_pane_ParamLimits

0xa206,	// (0x00095490) bg_popup_call2_act_pane

0xa2c6,	// (0x00095550) call_type_pane_cp03_ParamLimits

0xa2c6,	// (0x00095550) call_type_pane_cp03

0xa32a,	// (0x000955b4) popup_call2_audio_first_window_g1_ParamLimits

0xa32a,	// (0x000955b4) popup_call2_audio_first_window_g1

0xa39a,	// (0x00095624) popup_call2_audio_first_window_g2_ParamLimits

0xa39a,	// (0x00095624) popup_call2_audio_first_window_g2

0xa3fe,	// (0x00095688) popup_call2_audio_first_window_g3_ParamLimits

0xa3fe,	// (0x00095688) popup_call2_audio_first_window_g3

0x0004,

0xf3f0,	// (0x0009a67a) popup_call2_audio_first_window_g_ParamLimits

0xf3f0,	// (0x0009a67a) popup_call2_audio_first_window_g

0xa486,	// (0x00095710) popup_call2_audio_first_window_t1_ParamLimits

0xa486,	// (0x00095710) popup_call2_audio_first_window_t1

0xa589,	// (0x00095813) popup_call2_audio_first_window_t4_ParamLimits

0xa589,	// (0x00095813) popup_call2_audio_first_window_t4

0xa66c,	// (0x000958f6) popup_call2_audio_first_window_t5_ParamLimits

0xa66c,	// (0x000958f6) popup_call2_audio_first_window_t5

0x0003,

0xf3fb,	// (0x0009a685) popup_call2_audio_first_window_t_ParamLimits

0xf3fb,	// (0x0009a685) popup_call2_audio_first_window_t

0xe49f,	// (0x00099729) bg_popup_call2_act_pane_g1

0xac8b,	// (0x00095f15) popup_cale_lunar_info_window_t1

0xac99,	// (0x00095f23) popup_cale_lunar_info_window_t2

0xaca7,	// (0x00095f31) popup_cale_lunar_info_window_t3

0xe24c,	// (0x000994d6) bg_popup_call2_bubble_pane

0xa76d,	// (0x000959f7) bg_popup_call2_in_pane_cp01_ParamLimits

0xa76d,	// (0x000959f7) bg_popup_call2_in_pane_cp01

0xdf28,	// (0x000991b2) call_type_pane_cp02

0x43a1,	// (0x0008f62b) popup_call2_audio_out_window_g1_ParamLimits

0x43a1,	// (0x0008f62b) popup_call2_audio_out_window_g1

0xa7b5,	// (0x00095a3f) popup_call2_audio_out_window_g2_ParamLimits

0xa7b5,	// (0x00095a3f) popup_call2_audio_out_window_g2

0x43cd,	// (0x0008f657) popup_call2_audio_out_window_g3_ParamLimits

0x43cd,	// (0x0008f657) popup_call2_audio_out_window_g3

0x0003,

0xf404,	// (0x0009a68e) popup_call2_audio_out_window_g_ParamLimits

0xf404,	// (0x0009a68e) popup_call2_audio_out_window_g

0xa7ec,	// (0x00095a76) popup_call2_audio_out_window_t1_ParamLimits

0xa7ec,	// (0x00095a76) popup_call2_audio_out_window_t1

0xa84b,	// (0x00095ad5) popup_call2_audio_out_window_t2_ParamLimits

0xa84b,	// (0x00095ad5) popup_call2_audio_out_window_t2

0xa89f,	// (0x00095b29) popup_call2_audio_out_window_t3_ParamLimits

0xa89f,	// (0x00095b29) popup_call2_audio_out_window_t3

0xa8b5,	// (0x00095b3f) popup_call2_audio_out_window_t4_ParamLimits

0xa8b5,	// (0x00095b3f) popup_call2_audio_out_window_t4

0xa8cb,	// (0x00095b55) popup_call2_audio_out_window_t5_ParamLimits

0xa8cb,	// (0x00095b55) popup_call2_audio_out_window_t5

0x0005,

0xf40d,	// (0x0009a697) popup_call2_audio_out_window_t_ParamLimits

0xf40d,	// (0x0009a697) popup_call2_audio_out_window_t

0xa92f,	// (0x00095bb9) bg_popup_call2_in_pane_ParamLimits

0xa92f,	// (0x00095bb9) bg_popup_call2_in_pane

0xa98b,	// (0x00095c15) popup_call2_audio_in_window_g1_ParamLimits

0xa98b,	// (0x00095c15) popup_call2_audio_in_window_g1

0xa9c3,	// (0x00095c4d) popup_call2_audio_in_window_g2_ParamLimits

0xa9c3,	// (0x00095c4d) popup_call2_audio_in_window_g2

0xa9fb,	// (0x00095c85) popup_call2_audio_in_window_g3_ParamLimits

0xa9fb,	// (0x00095c85) popup_call2_audio_in_window_g3

0x0003,

0xf41a,	// (0x0009a6a4) popup_call2_audio_in_window_g_ParamLimits

0xf41a,	// (0x0009a6a4) popup_call2_audio_in_window_g

0xaa53,	// (0x00095cdd) popup_call2_audio_in_window_t1_ParamLimits

0xaa53,	// (0x00095cdd) popup_call2_audio_in_window_t1

0xaad3,	// (0x00095d5d) popup_call2_audio_in_window_t2_ParamLimits

0xaad3,	// (0x00095d5d) popup_call2_audio_in_window_t2

0xab53,	// (0x00095ddd) popup_call2_audio_in_window_t3_ParamLimits

0xab53,	// (0x00095ddd) popup_call2_audio_in_window_t3

0xab6d,	// (0x00095df7) popup_call2_audio_in_window_t4_ParamLimits

0xab6d,	// (0x00095df7) popup_call2_audio_in_window_t4

0xab7f,	// (0x00095e09) popup_call2_audio_in_window_t5_ParamLimits

0xab7f,	// (0x00095e09) popup_call2_audio_in_window_t5

0xab94,	// (0x00095e1e) popup_call2_audio_in_window_t6_ParamLimits

0xab94,	// (0x00095e1e) popup_call2_audio_in_window_t6

0x0005,

0xf423,	// (0x0009a6ad) popup_call2_audio_in_window_t_ParamLimits

0xf423,	// (0x0009a6ad) popup_call2_audio_in_window_t

0xe49f,	// (0x00099729) bg_popup_call2_in_pane_g1

0xacb5,	// (0x00095f3f) popup_cale_lunar_info_window_t4

0x0003,

0xf484,	// (0x0009a70e) popup_cale_lunar_info_window_t

0xe4a7,	// (0x00099731) bg_popup_call2_rect_pane_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_call2_rect_pane

0xe24c,	// (0x000994d6) call2_cli_visual_graphic_pane

0xe24c,	// (0x000994d6) call2_cli_visual_text_pane

0xae1d,	// (0x000960a7) smil_status_volume_pane_g3

0x0002,

0xe4bf,	// (0x00099749) call2_cli_visual_graphic_pane_g1

0xe4bf,	// (0x00099749) call2_cli_visual_graphic_pane_g2

0xe4bf,	// (0x00099749) call2_cli_visual_graphic_pane_g3

0x0002,

0x03bf,	// (0x0008b649) call2_cli_visual_graphic_pane_g

0xaba9,	// (0x00095e33) bg_popup_call2_rect_pane_g1

0xe679,	// (0x00099903) bg_popup_call2_rect_pane_g2

0xabb1,	// (0x00095e3b) bg_popup_call2_rect_pane_g3

0xabb9,	// (0x00095e43) bg_popup_call2_rect_pane_g4

0xabc1,	// (0x00095e4b) bg_popup_call2_rect_pane_g5

0xabc9,	// (0x00095e53) bg_popup_call2_rect_pane_g6

0xabd1,	// (0x00095e5b) bg_popup_call2_rect_pane_g7

0xabd9,	// (0x00095e63) bg_popup_call2_rect_pane_g8

0xabe1,	// (0x00095e6b) bg_popup_call2_rect_pane_g9

0x0008,

0xf430,	// (0x0009a6ba) bg_popup_call2_rect_pane_g

0xabe9,	// (0x00095e73) bg_popup_call2_bubble_pane_g1

0xabf1,	// (0x00095e7b) bg_popup_call2_bubble_pane_g2

0xabf9,	// (0x00095e83) bg_popup_call2_bubble_pane_g3

0xac01,	// (0x00095e8b) bg_popup_call2_bubble_pane_g4

0xac09,	// (0x00095e93) bg_popup_call2_bubble_pane_g5

0xac11,	// (0x00095e9b) bg_popup_call2_bubble_pane_g6

0xac19,	// (0x00095ea3) bg_popup_call2_bubble_pane_g7

0xac21,	// (0x00095eab) bg_popup_call2_bubble_pane_g8

0xac29,	// (0x00095eb3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf443,	// (0x0009a6cd) bg_popup_call2_bubble_pane_g

0x1460,	// (0x0008c6ea) aid_cale_week_size_cell_pane

0x1a8f,	// (0x0008cd19) aid_cams_cif_uncrop_pane_ParamLimits

0x1a8f,	// (0x0008cd19) aid_cams_cif_uncrop_pane

0x1be5,	// (0x0008ce6f) aid_cams_size_cell_ParamLimits

0x1be5,	// (0x0008ce6f) aid_cams_size_cell

0x1bf9,	// (0x0008ce83) grid_cams_pane_ParamLimits

0x1c13,	// (0x0008ce9d) linegrid_cams_pane_ParamLimits

0x1cf1,	// (0x0008cf7b) call_video_pane_t1

0x1d0b,	// (0x0008cf95) call_video_pane_t2

0x0001,

0xf1ec,	// (0x0009a476) call_video_pane_t

0x2158,	// (0x0008d3e2) aid_cale_month_size_cell_pane_ParamLimits

0x2158,	// (0x0008d3e2) aid_cale_month_size_cell_pane

0xf4b9,	// (0x0009a743) smil_status_volume_pane_g

0xae2a,	// (0x000960b4) volume_smil_pane_ParamLimits

0x9f07,	// (0x00095191) aid_popup2_width_pane

0x13b3,	// (0x0008c63d) cell_qdial_pane_g4_ParamLimits

0x13b3,	// (0x0008c63d) cell_qdial_pane_g4

0x3080,	// (0x0008e30a) aid_blid_cardinal_pane_ParamLimits

0x3090,	// (0x0008e31a) aid_blid_destination_pane_ParamLimits

0x3090,	// (0x0008e31a) aid_blid_destination_pane

0xe4a7,	// (0x00099731) bg_popup_call_poc_act_pane_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_call_poc_act_pane

0xe4a7,	// (0x00099731) bg_popup_call_poc_inact_pane_ParamLimits

0xe4a7,	// (0x00099731) bg_popup_call_poc_inact_pane

0xac31,	// (0x00095ebb) bg_popup_call_poc_act_pane_g1

0xac39,	// (0x00095ec3) bg_popup_call_poc_act_pane_g2

0xac41,	// (0x00095ecb) bg_popup_call_poc_act_pane_g3

0xac01,	// (0x00095e8b) bg_popup_call_poc_act_pane_g4

0xac09,	// (0x00095e93) bg_popup_call_poc_act_pane_g5

0xac49,	// (0x00095ed3) bg_popup_call_poc_act_pane_g6

0xac19,	// (0x00095ea3) bg_popup_call_poc_act_pane_g7

0xac51,	// (0x00095edb) bg_popup_call_poc_act_pane_g8

0xe24c,	// (0x000994d6) main_usb_pane

0xad1f,	// (0x00095fa9) popup_cale_lunar_info_window

0x1fd8,	// (0x0008d262) im_reading_pane_t1_ParamLimits

0xe833,	// (0x00099abd) list_im_pane_ParamLimits

0xe844,	// (0x00099ace) scroll_pane_cp07_ParamLimits

0xe24c,	// (0x000994d6) grid_highlight_pane_cp012

0xe4a7,	// (0x00099731) mup_scale_pane_ParamLimits

0x38fc,	// (0x0008eb86) main_usb_pane_g1_ParamLimits

0x38fc,	// (0x0008eb86) main_usb_pane_g1

0x4420,	// (0x0008f6aa) main_usb_pane_g2_ParamLimits

0x4420,	// (0x0008f6aa) main_usb_pane_g2

0x0001,

0xf46d,	// (0x0009a6f7) main_usb_pane_g_ParamLimits

0xf46d,	// (0x0009a6f7) main_usb_pane_g

0x4436,	// (0x0008f6c0) main_usb_pane_t1_ParamLimits

0x4436,	// (0x0008f6c0) main_usb_pane_t1

0x4448,	// (0x0008f6d2) main_usb_pane_t2_ParamLimits

0x4448,	// (0x0008f6d2) main_usb_pane_t2

0x445a,	// (0x0008f6e4) main_usb_pane_t3_ParamLimits

0x445a,	// (0x0008f6e4) main_usb_pane_t3

0x446c,	// (0x0008f6f6) main_usb_pane_t4_ParamLimits

0x446c,	// (0x0008f6f6) main_usb_pane_t4

0x4481,	// (0x0008f70b) main_usb_pane_t5_ParamLimits

0x4481,	// (0x0008f70b) main_usb_pane_t5

0x4496,	// (0x0008f720) main_usb_pane_t6_ParamLimits

0x4496,	// (0x0008f720) main_usb_pane_t6

0x0005,

0xf472,	// (0x0009a6fc) main_usb_pane_t_ParamLimits

0x301f,	// (0x0008e2a9) aid_text_placing

0x302a,	// (0x0008e2b4) main_location2_pane_t1_ParamLimits

0x3040,	// (0x0008e2ca) main_location2_pane_t2_ParamLimits

0x3056,	// (0x0008e2e0) main_location2_pane_t3_ParamLimits

0x306c,	// (0x0008e2f6) main_location2_pane_t4_ParamLimits

0x306c,	// (0x0008e2f6) main_location2_pane_t4

0xf293,	// (0x0009a51d) main_location2_pane_t_ParamLimits

0xe4e3,	// (0x0009976d) find_pinb_pane_g2_ParamLimits

0xe4e3,	// (0x0009976d) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0009a364) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0009a364) find_pinb_pane_g

0xe4ef,	// (0x00099779) find_pinb_pane_t1_ParamLimits

0xe501,	// (0x0009978b) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0009a369) find_pinb_pane_t_ParamLimits

0xe24c,	// (0x000994d6) main_call3_pane

0x275d,	// (0x0008d9e7) cale_month_day_heading_pane_t1_ParamLimits

0x27e3,	// (0x0008da6d) cale_month_day_heading_pane_t2_ParamLimits

0x285c,	// (0x0008dae6) cale_month_day_heading_pane_t3_ParamLimits

0x28d5,	// (0x0008db5f) cale_month_day_heading_pane_t4_ParamLimits

0x2956,	// (0x0008dbe0) cale_month_day_heading_pane_t5_ParamLimits

0x29df,	// (0x0008dc69) cale_month_day_heading_pane_t6_ParamLimits

0x2a70,	// (0x0008dcfa) cale_month_day_heading_pane_t7_ParamLimits

0xf211,	// (0x0009a49b) cale_month_day_heading_pane_t_ParamLimits

0xea8e,	// (0x00099d18) smil_status_volume_pane

0x38d0,	// (0x0008eb5a) postcard_address_pane_ParamLimits

0x38d0,	// (0x0008eb5a) postcard_address_pane

0x38e6,	// (0x0008eb70) postcard_message_pane_ParamLimits

0x38e6,	// (0x0008eb70) postcard_message_pane

0x43f9,	// (0x0008f683) call2_cli_visual_pane_t1_ParamLimits

0x43f9,	// (0x0008f683) call2_cli_visual_pane_t1

0xae57,	// (0x000960e1) postcard_message_pane_t1_ParamLimits

0xae57,	// (0x000960e1) postcard_message_pane_t1

0xae3f,	// (0x000960c9) postcard_address_pane_t1_ParamLimits

0xae3f,	// (0x000960c9) postcard_address_pane_t1

0x4be8,	// (0x0008fe72) popup_call3_audio_in_window_ParamLimits

0x4be8,	// (0x0008fe72) popup_call3_audio_in_window

0x4a6d,	// (0x0008fcf7) bg_popup_call3_in_pane_ParamLimits

0x4a6d,	// (0x0008fcf7) bg_popup_call3_in_pane

0x4ae9,	// (0x0008fd73) popup_call3_audio_in_window_g1_ParamLimits

0x4ae9,	// (0x0008fd73) popup_call3_audio_in_window_g1

0x4b09,	// (0x0008fd93) popup_call3_audio_in_window_g2_ParamLimits

0x4b09,	// (0x0008fd93) popup_call3_audio_in_window_g2

0x4b29,	// (0x0008fdb3) popup_call3_audio_in_window_g3_ParamLimits

0x4b29,	// (0x0008fdb3) popup_call3_audio_in_window_g3

0x0003,

0xf4c0,	// (0x0009a74a) popup_call3_audio_in_window_g_ParamLimits

0xf4c0,	// (0x0009a74a) popup_call3_audio_in_window_g

0x4b5a,	// (0x0008fde4) popup_call3_audio_in_window_t1_ParamLimits

0x4b5a,	// (0x0008fde4) popup_call3_audio_in_window_t1

0x4b98,	// (0x0008fe22) popup_call3_audio_in_window_t2_ParamLimits

0x4b98,	// (0x0008fe22) popup_call3_audio_in_window_t2

0x4bd6,	// (0x0008fe60) popup_call3_audio_in_window_t3_ParamLimits

0x4bd6,	// (0x0008fe60) popup_call3_audio_in_window_t3

0x0002,

0xf4c9,	// (0x0009a753) popup_call3_audio_in_window_t_ParamLimits

0xf4c9,	// (0x0009a753) popup_call3_audio_in_window_t

0xe740,	// (0x000999ca) bg_popup_call3_rect_pane

0xaba9,	// (0x00095e33) bg_popup_call3_rect_pane_g1

0xe679,	// (0x00099903) bg_popup_call3_rect_pane_g2

0xabb1,	// (0x00095e3b) bg_popup_call3_rect_pane_g3

0xabb9,	// (0x00095e43) bg_popup_call3_rect_pane_g4

0xabc1,	// (0x00095e4b) bg_popup_call3_rect_pane_g5

0xabc9,	// (0x00095e53) bg_popup_call3_rect_pane_g6

0xabd1,	// (0x00095e5b) bg_popup_call3_rect_pane_g7

0xddfa,	// (0x00099084) mup_visualizer_osc_pane

0xddfa,	// (0x00099084) mup_visualizer_spec_pane

0x4a9d,	// (0x0008fd27) call3_video_qcif_pane_ParamLimits

0x4a9d,	// (0x0008fd27) call3_video_qcif_pane

0x4ab0,	// (0x0008fd3a) call3_video_qcif_uncrop_pane_ParamLimits

0x4ab0,	// (0x0008fd3a) call3_video_qcif_uncrop_pane

0x4ac0,	// (0x0008fd4a) call3_video_subqcif_pane_ParamLimits

0x4ac0,	// (0x0008fd4a) call3_video_subqcif_pane

0x4ad6,	// (0x0008fd60) call3_video_subqcif_uncrop_pane_ParamLimits

0x4ad6,	// (0x0008fd60) call3_video_subqcif_uncrop_pane

0x4b49,	// (0x0008fdd3) popup_call3_audio_in_window_g4_ParamLimits

0x4b49,	// (0x0008fdd3) popup_call3_audio_in_window_g4

0xddfa,	// (0x00099084) mup_spec_half_pane

0xddfa,	// (0x00099084) mup_spec_half_pane_cp

0xddfa,	// (0x00099084) mup_osc_middle_pane

0xe776,	// (0x00099a00) mup_visualizer_osc_pane_g1

0xadd0,	// (0x0009605a) mup_spec_bar_pane_ParamLimits

0xadd0,	// (0x0009605a) mup_spec_bar_pane

0xe776,	// (0x00099a00) mup_spec_bar_pane_g1

0xe776,	// (0x00099a00) mup_spec_bar_pane_g2

0x0001,

0xf30d,	// (0x0009a597) mup_spec_bar_pane_g

0x1460,	// (0x0008c6ea) aid_cale_week_size_cell_pane_ParamLimits

0x147a,	// (0x0008c704) bg_cale_heading_pane_ParamLimits

0x149e,	// (0x0008c728) bg_cale_pane_cp01_ParamLimits

0x14bb,	// (0x0008c745) cale_week_corner_pane_ParamLimits

0x14da,	// (0x0008c764) cale_week_day_heading_pane_ParamLimits

0x1503,	// (0x0008c78d) cale_week_scroll_pane_g1_ParamLimits

0x1522,	// (0x0008c7ac) cale_week_scroll_pane_g2_ParamLimits

0x153a,	// (0x0008c7c4) cale_week_scroll_pane_g3_ParamLimits

0x1552,	// (0x0008c7dc) cale_week_scroll_pane_g4_ParamLimits

0x156a,	// (0x0008c7f4) cale_week_scroll_pane_g5_ParamLimits

0x158a,	// (0x0008c814) cale_week_scroll_pane_g6_ParamLimits

0x15aa,	// (0x0008c834) cale_week_scroll_pane_g7_ParamLimits

0x15ce,	// (0x0008c858) cale_week_scroll_pane_g8_ParamLimits

0x15f2,	// (0x0008c87c) cale_week_scroll_pane_g9_ParamLimits

0x160a,	// (0x0008c894) cale_week_scroll_pane_g10_ParamLimits

0x1622,	// (0x0008c8ac) cale_week_scroll_pane_g11_ParamLimits

0x163a,	// (0x0008c8c4) cale_week_scroll_pane_g12_ParamLimits

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g13_ParamLimits

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g14_ParamLimits

0x165e,	// (0x0008c8e8) cale_week_scroll_pane_g15_ParamLimits

0xf154,	// (0x0009a3de) cale_week_scroll_pane_g_ParamLimits

0x16a6,	// (0x0008c930) cale_week_time_pane_ParamLimits

0x16ca,	// (0x0008c954) grid_cale_week_pane_ParamLimits

0xe6b6,	// (0x00099940) listscroll_cale_week_pane_t1

0xe6c8,	// (0x00099952) scroll_pane_cp08_ParamLimits

0x21d0,	// (0x0008d45a) cale_month_corner_pane_ParamLimits

0xea64,	// (0x00099cee) cale_month_pane_t1

0x26d8,	// (0x0008d962) cale_month_week_pane_ParamLimits

0x2e5f,	// (0x0008e0e9) popup_call_status_window_g1_ParamLimits

0x2e73,	// (0x0008e0fd) popup_call_status_window_g2_ParamLimits

0x2e87,	// (0x0008e111) popup_call_status_window_g3_ParamLimits

0xf241,	// (0x0009a4cb) popup_call_status_window_g_ParamLimits

0xee19,	// (0x0009a0a3) aid_call2_pane

0x36d1,	// (0x0008e95b) msg_header_pane_g1

0x38d0,	// (0x0008eb5a) postcard_address2_pane_ParamLimits

0x38d0,	// (0x0008eb5a) postcard_address2_pane

0x38e6,	// (0x0008eb70) postcard_message2_pane_ParamLimits

0x38e6,	// (0x0008eb70) postcard_message2_pane

0x4a4a,	// (0x0008fcd4) message2_row_pane_ParamLimits

0x4a4a,	// (0x0008fcd4) message2_row_pane

0xad8a,	// (0x00096014) address2_row_pane_ParamLimits

0xad8a,	// (0x00096014) address2_row_pane

0xad9d,	// (0x00096027) postcard_message2_row_pane_g1

0xada5,	// (0x0009602f) postcard_message2_row_pane_t1

0xad9d,	// (0x00096027) address2_row_pane_g1

0xada5,	// (0x0009602f) address2_row_pane_t1

0x1a37,	// (0x0008ccc1) aid_size_cell_vorec

0xe24c,	// (0x000994d6) main_rss_pane

0xadb3,	// (0x0009603d) rss_list_single_pane_ParamLimits

0xadb3,	// (0x0009603d) rss_list_single_pane

0xadc1,	// (0x0009604b) rss_list_single_pane_t1

0xadc1,	// (0x0009604b) rss_list_single_pane_t2

0x0001,

0xf4b4,	// (0x0009a73e) rss_list_single_pane_t

0xe24c,	// (0x000994d6) main_camera2_pane

0xe24c,	// (0x000994d6) main_video2_pane

0xae73,	// (0x000960fd) cams_zoom_pane_cp2_ParamLimits

0xae73,	// (0x000960fd) cams_zoom_pane_cp2

0xae73,	// (0x000960fd) image2_vga_pane_ParamLimits

0xae73,	// (0x000960fd) image2_vga_pane

0xdaee,	// (0x00098d78) main_camera2_pane_g1_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g1

0xdaee,	// (0x00098d78) main_camera2_pane_g2_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g2

0xdaee,	// (0x00098d78) main_camera2_pane_g3_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g3

0xdaee,	// (0x00098d78) main_camera2_pane_g4_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g4

0xdaee,	// (0x00098d78) main_camera2_pane_g5_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g5

0xdaee,	// (0x00098d78) main_camera2_pane_g6_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g6

0xdaee,	// (0x00098d78) main_camera2_pane_g7_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g7

0xdaee,	// (0x00098d78) main_camera2_pane_g8_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g8

0x0008,

0xf4d0,	// (0x0009a75a) main_camera2_pane_g_ParamLimits

0xf4d0,	// (0x0009a75a) main_camera2_pane_g

0x4c0a,	// (0x0008fe94) main_camera2_pane_t1_ParamLimits

0x4c0a,	// (0x0008fe94) main_camera2_pane_t1

0x4c0a,	// (0x0008fe94) main_camera2_pane_t2_ParamLimits

0x4c0a,	// (0x0008fe94) main_camera2_pane_t2

0x4c0a,	// (0x0008fe94) main_camera2_pane_t3_ParamLimits

0x4c0a,	// (0x0008fe94) main_camera2_pane_t3

0x4c0a,	// (0x0008fe94) main_camera2_pane_t4_ParamLimits

0x4c0a,	// (0x0008fe94) main_camera2_pane_t4

0x0006,

0xf4e3,	// (0x0009a76d) main_camera2_pane_t_ParamLimits

0xf4e3,	// (0x0009a76d) main_camera2_pane_t

0xdafc,	// (0x00098d86) cams_zoom_pane_cp4_ParamLimits

0xdafc,	// (0x00098d86) cams_zoom_pane_cp4

0x4c1e,	// (0x0008fea8) image2_cif_pane_ParamLimits

0x4c1e,	// (0x0008fea8) image2_cif_pane

0x9f72,	// (0x000951fc) image2_subqcif_pane_ParamLimits

0x9f72,	// (0x000951fc) image2_subqcif_pane

0x4c2c,	// (0x0008feb6) main_video2_pane_g1_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g1

0x4c2c,	// (0x0008feb6) main_video2_pane_g2_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g2

0x4c2c,	// (0x0008feb6) main_video2_pane_g3_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g3

0x4c2c,	// (0x0008feb6) main_video2_pane_g4_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g4

0x4c2c,	// (0x0008feb6) main_video2_pane_g5_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g5

0x4c2c,	// (0x0008feb6) main_video2_pane_g6_ParamLimits

0x4c2c,	// (0x0008feb6) main_video2_pane_g6

0x0005,

0xf4f2,	// (0x0009a77c) main_video2_pane_g_ParamLimits

0xf4f2,	// (0x0009a77c) main_video2_pane_g

0x4c3a,	// (0x0008fec4) main_video2_pane_t1_ParamLimits

0x4c3a,	// (0x0008fec4) main_video2_pane_t1

0x4c3a,	// (0x0008fec4) main_video2_pane_t2_ParamLimits

0x4c3a,	// (0x0008fec4) main_video2_pane_t2

0x4c3a,	// (0x0008fec4) main_video2_pane_t3_ParamLimits

0x4c3a,	// (0x0008fec4) main_video2_pane_t3

0x0002,

0xf4ff,	// (0x0009a789) main_video2_pane_t_ParamLimits

0xf4ff,	// (0x0009a789) main_video2_pane_t

0x452f,	// (0x0008f7b9) call_muted_g2

0x0001,

0xf4a6,	// (0x0009a730) call_muted_g

0xe24c,	// (0x000994d6) main_mup2_pane

0x3320,	// (0x0008e5aa) main_mup2_pane_g1_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g1

0x3320,	// (0x0008e5aa) main_mup2_pane_g2_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g2

0xafa1,	// (0x0009622b) main_mup_pane_g13_cp1

0x9f80,	// (0x0009520a) mup_volume_pane_cp1

0x3320,	// (0x0008e5aa) main_mup2_pane_g4_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g4

0x3320,	// (0x0008e5aa) main_mup2_pane_g5_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g5

0x3320,	// (0x0008e5aa) main_mup2_pane_g6_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g6

0x3320,	// (0x0008e5aa) main_mup2_pane_g7_ParamLimits

0x3320,	// (0x0008e5aa) main_mup2_pane_g7

0x0006,

0xf506,	// (0x0009a790) main_mup2_pane_g_ParamLimits

0xf506,	// (0x0009a790) main_mup2_pane_g

0x332e,	// (0x0008e5b8) main_mup2_pane_t1_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t1

0x332e,	// (0x0008e5b8) main_mup2_pane_t2_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t2

0x332e,	// (0x0008e5b8) main_mup2_pane_t3_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t3

0x332e,	// (0x0008e5b8) main_mup2_pane_t4_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t4

0x332e,	// (0x0008e5b8) main_mup2_pane_t5_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t5

0x332e,	// (0x0008e5b8) main_mup2_pane_t6_ParamLimits

0x332e,	// (0x0008e5b8) main_mup2_pane_t6

0x0005,

0xf515,	// (0x0009a79f) main_mup2_pane_t_ParamLimits

0xf515,	// (0x0009a79f) main_mup2_pane_t

0x3356,	// (0x0008e5e0) mup2_visualizer_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup2_visualizer_pane

0x3356,	// (0x0008e5e0) mup_progress_pane_cp_ParamLimits

0x3356,	// (0x0008e5e0) mup_progress_pane_cp

0xaf82,	// (0x0009620c) mup_volume_pane_cp_ParamLimits

0xaf82,	// (0x0009620c) mup_volume_pane_cp

0xe530,	// (0x000997ba) mup2_visualizer_pane_g1_ParamLimits

0xe530,	// (0x000997ba) mup2_visualizer_pane_g1

0xe53e,	// (0x000997c8) mup2_visualizer_pane_g2_ParamLimits

0xe53e,	// (0x000997c8) mup2_visualizer_pane_g2

0xe53e,	// (0x000997c8) mup2_visualizer_pane_g3_ParamLimits

0xe53e,	// (0x000997c8) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0009a36e) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0009a36e) mup2_visualizer_pane_g

0x3cc9,	// (0x0008ef53) aid_size_cell_fmradio

0x46df,	// (0x0008f969) aid_height_parent_landcape

0xe8c2,	// (0x00099b4c) wml_content_pane_cp

0xe8ca,	// (0x00099b54) wml_tabs_pane

0xe8d3,	// (0x00099b5d) popup_wml_miniature_window

0xe8db,	// (0x00099b65) scroll_pane_cp021

0xe8ef,	// (0x00099b79) wml_content_pane_comp8

0xe24c,	// (0x000994d6) bg_popup_sub_pane_cp05

0xaecd,	// (0x00096157) popup_wml_miniature_window_g1

0xaed5,	// (0x0009615f) wml_miniature_view_pane

0x4c4e,	// (0x0008fed8) aid_size_wml_view

0x4c56,	// (0x0008fee0) wml_miniature_view_pane_g1

0x4c5f,	// (0x0008fee9) wml_miniature_view_pane_g2

0x4c68,	// (0x0008fef2) wml_miniature_view_pane_g3

0x4c70,	// (0x0008fefa) wml_miniature_view_pane_g4

0x4c78,	// (0x0008ff02) wml_miniature_view_pane_g5

0x4c80,	// (0x0008ff0a) wml_miniature_view_pane_g6

0x4c88,	// (0x0008ff12) wml_miniature_view_pane_g7

0x4c90,	// (0x0008ff1a) wml_miniature_view_pane_g8

0x0007,

0xf522,	// (0x0009a7ac) wml_miniature_view_pane_g

0xaedd,	// (0x00096167) background_graphic_ParamLimits

0xaedd,	// (0x00096167) background_graphic

0xaee9,	// (0x00096173) wml_tabs_2_pane

0xaef2,	// (0x0009617c) wml_tabs_3_pane_ParamLimits

0xaef2,	// (0x0009617c) wml_tabs_3_pane

0xaf04,	// (0x0009618e) wml_tabs_4_pane_ParamLimits

0xaf04,	// (0x0009618e) wml_tabs_4_pane

0xaf1a,	// (0x000961a4) wml_tabs_5_pane_ParamLimits

0xaf1a,	// (0x000961a4) wml_tabs_5_pane

0xaf34,	// (0x000961be) wml_tabs_pane_g2_ParamLimits

0xaf34,	// (0x000961be) wml_tabs_pane_g2

0xaf49,	// (0x000961d3) wml_tabs_pane_g3_ParamLimits

0xaf49,	// (0x000961d3) wml_tabs_pane_g3

0xaf5e,	// (0x000961e8) wml_tabs_2_active_pane_ParamLimits

0xaf5e,	// (0x000961e8) wml_tabs_2_active_pane

0xaf5e,	// (0x000961e8) wml_tabs_2_passive_pane_ParamLimits

0xaf5e,	// (0x000961e8) wml_tabs_2_passive_pane

0x4c98,	// (0x0008ff22) wml_tabs_3_active_pane_cp_ParamLimits

0x4c98,	// (0x0008ff22) wml_tabs_3_active_pane_cp

0x4cad,	// (0x0008ff37) wml_tabs_3_passive_pane_ParamLimits

0x4cad,	// (0x0008ff37) wml_tabs_3_passive_pane

0x4cc0,	// (0x0008ff4a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cc0,	// (0x0008ff4a) wml_tabs_3_passive_pane_cp

0x4cd7,	// (0x0008ff61) tabs_4_active_pane

0x4cdf,	// (0x0008ff69) tabs_4_passive_pane

0x4ce9,	// (0x0008ff73) tabs_4_passive_pane_cp

0x4cf1,	// (0x0008ff7b) tabs_4_passive_pane_cp2

0x4418,	// (0x0008f6a2) aid_height_text

0x3356,	// (0x0008e5e0) mup_volume_cont_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup_volume_cont_pane

0xddfa,	// (0x00099084) aid_size_cell_pinb

0xddfa,	// (0x00099084) aid_size_list_pinb

0x3356,	// (0x0008e5e0) mup2_volume_cont_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup2_volume_cont_pane

0xaf6c,	// (0x000961f6) mup2_volume_cont_pane_g1_ParamLimits

0xaf6c,	// (0x000961f6) mup2_volume_cont_pane_g1

0x0e70,	// (0x0008c0fa) aid_size_cell_touch_ParamLimits

0x0e70,	// (0x0008c0fa) aid_size_cell_touch

0x109c,	// (0x0008c326) touch_pane_ParamLimits

0x109c,	// (0x0008c326) touch_pane

0x9f80,	// (0x0009520a) main_rss2_pane

0xafab,	// (0x00096235) listscroll_rss2_pane

0xafb4,	// (0x0009623e) rss2_navigation_pane

0xafbc,	// (0x00096246) list_rss2_pane

0xef46,	// (0x0009a1d0) scroll_pane_cp22

0xafc4,	// (0x0009624e) rss2_navigation_pane_g1

0xafcd,	// (0x00096257) rss2_navigation_pane_g2

0xafd5,	// (0x0009625f) rss2_navigation_pane_g3

0x0002,

0xf533,	// (0x0009a7bd) rss2_navigation_pane_g

0xafdd,	// (0x00096267) rss2_navigation_pane_t1

0x4cfb,	// (0x0008ff85) rss2_list_single_pane_ParamLimits

0x4cfb,	// (0x0008ff85) rss2_list_single_pane

0xafeb,	// (0x00096275) rss2_list_single_pane_t2

0xaff9,	// (0x00096283) rss2_list_single_pane_t3_ParamLimits

0xaff9,	// (0x00096283) rss2_list_single_pane_t3

0xb016,	// (0x000962a0) rss2_list_single_pane_t4

0x2d24,	// (0x0008dfae) smil_status_pane_g1

0x9f72,	// (0x000951fc) main_image2_pane_ParamLimits

0x9f72,	// (0x000951fc) main_image2_pane

0xdaee,	// (0x00098d78) main_camera2_pane_g9_ParamLimits

0xdaee,	// (0x00098d78) main_camera2_pane_g9

0x4c0a,	// (0x0008fe94) main_camera2_pane_t5_ParamLimits

0x4c0a,	// (0x0008fe94) main_camera2_pane_t5

0xae81,	// (0x0009610b) main_camera2_pane_t6_ParamLimits

0xae81,	// (0x0009610b) main_camera2_pane_t6

0x4d15,	// (0x0008ff9f) main_image2_pane_g1_ParamLimits

0x4d15,	// (0x0008ff9f) main_image2_pane_g1

0x3c73,	// (0x0008eefd) smil2_video_pane_ParamLimits

0x3c73,	// (0x0008eefd) smil2_video_pane

0x9f23,	// (0x000951ad) aid_zoom_text_primary_cp

0x9f68,	// (0x000951f2) popup_preview_fixed_window

0xe82b,	// (0x00099ab5) im_reading_pane_g1

0x4bfc,	// (0x0008fe86) cams2_bc_adjust_pane_cp_ParamLimits

0x4bfc,	// (0x0008fe86) cams2_bc_adjust_pane_cp

0xaea9,	// (0x00096133) cams2_bc_adjust_pane_ParamLimits

0xaea9,	// (0x00096133) cams2_bc_adjust_pane

0xafa1,	// (0x0009622b) cams2_bc_adjust_pane_g1

0x9f80,	// (0x0009520a) cams2_slider_pane

0xafa1,	// (0x0009622b) cams2_slider_pane_g1

0xafa1,	// (0x0009622b) cams2_slider_pane_g2

0x0006,

0xf53a,	// (0x0009a7c4) cams2_slider_pane_g

0x1132,	// (0x0008c3bc) calc_display_pane_ParamLimits

0x1157,	// (0x0008c3e1) calc_paper_pane_ParamLimits

0x117a,	// (0x0008c404) grid_calc_pane_ParamLimits

0xa0a2,	// (0x0009532c) popup_clock_digital_window_t1_ParamLimits

0x3af0,	// (0x0008ed7a) main_image_pane_t1

0x1112,	// (0x0008c39c) aid_size_cell_calc_ParamLimits

0x1112,	// (0x0008c39c) aid_size_cell_calc

0x4741,	// (0x0008f9cb) popup_blid_sat_info2_window_ParamLimits

0x4741,	// (0x0008f9cb) popup_blid_sat_info2_window

0xb024,	// (0x000962ae) aid_size_cell_blid

0xb02c,	// (0x000962b6) bg_popup_window_pane_cp07

0xb04f,	// (0x000962d9) grid_popup_blid_pane

0xb059,	// (0x000962e3) heading_pane_cp05_ParamLimits

0xb059,	// (0x000962e3) heading_pane_cp05

0xb123,	// (0x000963ad) cell_popup_blid_pane_ParamLimits

0xb123,	// (0x000963ad) cell_popup_blid_pane

0xb14d,	// (0x000963d7) cell_popup_blid_pane_g1

0xb155,	// (0x000963df) cell_popup_blid_pane_t1

0x3356,	// (0x0008e5e0) mup2_indicator_pane_ParamLimits

0x3356,	// (0x0008e5e0) mup2_indicator_pane

0xddfa,	// (0x00099084) mup2_visualizer_osc_pane

0xaeb7,	// (0x00096141) mup2_visualizer_spec_pane_ParamLimits

0xaeb7,	// (0x00096141) mup2_visualizer_spec_pane

0xddfa,	// (0x00099084) mup2_spec_half_pane

0xddfa,	// (0x00099084) mup2_spec_half_pane_cp

0xb163,	// (0x000963ed) mup2_spec_bar_pane_ParamLimits

0xb163,	// (0x000963ed) mup2_spec_bar_pane

0xe776,	// (0x00099a00) mup2_spec_bar_pane_g1

0xb182,	// (0x0009640c) mup2_spec_bar_pane_g2

0x0001,

0xf560,	// (0x0009a7ea) mup2_spec_bar_pane_g

0xddfa,	// (0x00099084) mup2_osc_middle_pane

0xe776,	// (0x00099a00) mup2_visualizer_osc_pane_g1

0xde24,	// (0x000990ae) popup_number_entry_window_t1_ParamLimits

0xde37,	// (0x000990c1) popup_number_entry_window_t2_ParamLimits

0xde49,	// (0x000990d3) popup_number_entry_window_t3_ParamLimits

0xde5b,	// (0x000990e5) popup_number_entry_window_t5_ParamLimits

0xde5b,	// (0x000990e5) popup_number_entry_window_t5

0xf085,	// (0x0009a30f) popup_number_entry_window_t_ParamLimits

0xde90,	// (0x0009911a) text_title_cp2_ParamLimits

0xa0e1,	// (0x0009536b) aid_hotspot_pointer_text2_pane

0xa107,	// (0x00095391) main_viewer_pane_g9_ParamLimits

0xa107,	// (0x00095391) main_viewer_pane_g9

0xea64,	// (0x00099cee) cale_month_pane_t1_ParamLimits

0xeaa1,	// (0x00099d2b) bg_cale_pane_ParamLimits

0xeab9,	// (0x00099d43) list_cale_pane_ParamLimits

0xeaca,	// (0x00099d54) listscroll_cale_day_pane_t1

0xeadc,	// (0x00099d66) scroll_pane_cp09_ParamLimits

0x33bf,	// (0x0008e649) main_mup_eq_pane_t1_ParamLimits

0x33bf,	// (0x0008e649) main_mup_eq_pane_t1

0x33db,	// (0x0008e665) main_mup_eq_pane_t2_ParamLimits

0x33db,	// (0x0008e665) main_mup_eq_pane_t2

0x33f7,	// (0x0008e681) main_mup_eq_pane_t3_ParamLimits

0x33f7,	// (0x0008e681) main_mup_eq_pane_t3

0x3415,	// (0x0008e69f) main_mup_eq_pane_t4_ParamLimits

0x3415,	// (0x0008e69f) main_mup_eq_pane_t4

0x3433,	// (0x0008e6bd) main_mup_eq_pane_t5_ParamLimits

0x3433,	// (0x0008e6bd) main_mup_eq_pane_t5

0x3451,	// (0x0008e6db) main_mup_eq_pane_t6_ParamLimits

0x3451,	// (0x0008e6db) main_mup_eq_pane_t6

0x3467,	// (0x0008e6f1) main_mup_eq_pane_t7_ParamLimits

0x3467,	// (0x0008e6f1) main_mup_eq_pane_t7

0x347d,	// (0x0008e707) main_mup_eq_pane_t8_ParamLimits

0x347d,	// (0x0008e707) main_mup_eq_pane_t8

0x3493,	// (0x0008e71d) main_mup_eq_pane_t9_ParamLimits

0x3493,	// (0x0008e71d) main_mup_eq_pane_t9

0x34af,	// (0x0008e739) main_mup_eq_pane_t10_ParamLimits

0x34af,	// (0x0008e739) main_mup_eq_pane_t10

0x0009,

0xf319,	// (0x0009a5a3) main_mup_eq_pane_t_ParamLimits

0xf319,	// (0x0009a5a3) main_mup_eq_pane_t

0x3584,	// (0x0008e80e) mup_equalizer_pane_cp5_ParamLimits

0x359c,	// (0x0008e826) mup_equalizer_pane_cp6_ParamLimits

0x35b4,	// (0x0008e83e) mup_equalizer_pane_cp7_ParamLimits

0x9f80,	// (0x0009520a) main_gallery_pane

0xadef,	// (0x00096079) smil2_volume_pane

0xadf7,	// (0x00096081) smil_status_volume_pane_g1_ParamLimits

0xae0a,	// (0x00096094) smil_status_volume_pane_g2_ParamLimits

0xae1d,	// (0x000960a7) smil_status_volume_pane_g3_ParamLimits

0xf4b9,	// (0x0009a743) smil_status_volume_pane_g_ParamLimits

0xb02c,	// (0x000962b6) bg_popup_window_pane_cp07_ParamLimits

0xb03a,	// (0x000962c4) blid_firmament_pane

0xe4c9,	// (0x00099753) aid_size_cell_gallery_ParamLimits

0xe4c9,	// (0x00099753) aid_size_cell_gallery

0xe4c9,	// (0x00099753) grid_gallery_pane_ParamLimits

0xe4c9,	// (0x00099753) grid_gallery_pane

0xb02c,	// (0x000962b6) cell_gallery_pane_ParamLimits

0xb02c,	// (0x000962b6) cell_gallery_pane

0xe4c9,	// (0x00099753) bg_cell_gallery_focus_pane_ParamLimits

0xe4c9,	// (0x00099753) bg_cell_gallery_focus_pane

0xe530,	// (0x000997ba) cell_gallery_pane_g1_ParamLimits

0xe530,	// (0x000997ba) cell_gallery_pane_g1

0xe530,	// (0x000997ba) cell_gallery_pane_g2_ParamLimits

0xe530,	// (0x000997ba) cell_gallery_pane_g2

0xe530,	// (0x000997ba) cell_gallery_pane_g3_ParamLimits

0xe530,	// (0x000997ba) cell_gallery_pane_g3

0xe53e,	// (0x000997c8) cell_gallery_pane_g4_ParamLimits

0xe53e,	// (0x000997c8) cell_gallery_pane_g4

0x0003,

0x050a,	// (0x0008b794) cell_gallery_pane_g_ParamLimits

0x050a,	// (0x0008b794) cell_gallery_pane_g

0xb18c,	// (0x00096416) bg_cell_gallery_focus_pane_g1

0xb194,	// (0x0009641e) bg_cell_gallery_focus_pane_g2

0xb19c,	// (0x00096426) bg_cell_gallery_focus_pane_g3

0xb1a4,	// (0x0009642e) bg_cell_gallery_focus_pane_g4

0xb1ac,	// (0x00096436) bg_cell_gallery_focus_pane_g5

0xb1b4,	// (0x0009643e) bg_cell_gallery_focus_pane_g6

0xb1bc,	// (0x00096446) bg_cell_gallery_focus_pane_g7

0xb1c4,	// (0x0009644e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf565,	// (0x0009a7ef) bg_cell_gallery_focus_pane_g

0xb1cc,	// (0x00096456) aid_firma_cardinal

0xb1e0,	// (0x0009646a) blid_firmament_pane_t1

0xb1f7,	// (0x00096481) blid_firmament_pane_t2

0xb20e,	// (0x00096498) blid_firmament_pane_t3

0xb225,	// (0x000964af) blid_firmament_pane_t4

0x0003,

0xf576,	// (0x0009a800) blid_firmament_pane_t

0xb23c,	// (0x000964c6) blid_sat_info_pane

0xe776,	// (0x00099a00) blid_sat_info_pane_g1

0xe776,	// (0x00099a00) blid_sat_info_pane_g2

0x0001,

0xf30d,	// (0x0009a597) blid_sat_info_pane_g

0xb24c,	// (0x000964d6) blid_sat_info_pane_t1

0xb25a,	// (0x000964e4) smil2_volume_content_pane

0xb263,	// (0x000964ed) smil2_volume_pane_g1

0xefc9,	// (0x0009a253) smil2_volume_content_pane_g1

0xb26b,	// (0x000964f5) smil2_volume_content_pane_g2

0xb274,	// (0x000964fe) smil2_volume_content_pane_g3

0xb27d,	// (0x00096507) smil2_volume_content_pane_g4

0xb286,	// (0x00096510) smil2_volume_content_pane_g5

0xb28f,	// (0x00096519) smil2_volume_content_pane_g6

0xb298,	// (0x00096522) smil2_volume_content_pane_g7

0xb2a1,	// (0x0009652b) smil2_volume_content_pane_g8

0xb2aa,	// (0x00096534) smil2_volume_content_pane_g9

0xb2b3,	// (0x0009653d) smil2_volume_content_pane_g10

0x0009,

0xf57f,	// (0x0009a809) smil2_volume_content_pane_g

0x1798,	// (0x0008ca22) cale_week_day_heading_pane_t1_ParamLimits

0x17c2,	// (0x0008ca4c) cale_week_day_heading_pane_t2_ParamLimits

0x17f1,	// (0x0008ca7b) cale_week_day_heading_pane_t3_ParamLimits

0x1820,	// (0x0008caaa) cale_week_day_heading_pane_t4_ParamLimits

0x184f,	// (0x0008cad9) cale_week_day_heading_pane_t5_ParamLimits

0x1882,	// (0x0008cb0c) cale_week_day_heading_pane_t6_ParamLimits

0x18b9,	// (0x0008cb43) cale_week_day_heading_pane_t7_ParamLimits

0xf175,	// (0x0009a3ff) cale_week_day_heading_pane_t_ParamLimits

0xe6e5,	// (0x0009996f) bg_cale_side_pane_ParamLimits

0x18e3,	// (0x0008cb6d) cale_week_time_pane_t1_ParamLimits

0x18fd,	// (0x0008cb87) cale_week_time_pane_t2_ParamLimits

0x1917,	// (0x0008cba1) cale_week_time_pane_t3_ParamLimits

0x1931,	// (0x0008cbbb) cale_week_time_pane_t4_ParamLimits

0x194b,	// (0x0008cbd5) cale_week_time_pane_t5_ParamLimits

0x1965,	// (0x0008cbef) cale_week_time_pane_t6_ParamLimits

0x1985,	// (0x0008cc0f) cale_week_time_pane_t7_ParamLimits

0x19ab,	// (0x0008cc35) cale_week_time_pane_t8_ParamLimits

0xf184,	// (0x0009a40e) cale_week_time_pane_t_ParamLimits

0x19d1,	// (0x0008cc5b) cell_cale_week_pane_g2_ParamLimits

0xe6e5,	// (0x0009996f) bg_cale_side_pane_cp01_ParamLimits

0x2b01,	// (0x0008dd8b) cale_month_week_pane_t1_ParamLimits

0x2b1a,	// (0x0008dda4) cale_month_week_pane_t2_ParamLimits

0x2b33,	// (0x0008ddbd) cale_month_week_pane_t3_ParamLimits

0x2b4c,	// (0x0008ddd6) cale_month_week_pane_t4_ParamLimits

0x2b65,	// (0x0008ddef) cale_month_week_pane_t5_ParamLimits

0x2b7e,	// (0x0008de08) cale_month_week_pane_t6_ParamLimits

0xf220,	// (0x0009a4aa) cale_month_week_pane_t_ParamLimits

0xa022,	// (0x000952ac) cell_cale_month_pane_g1_ParamLimits

0x9f80,	// (0x0009520a) main_cale_event_viewer_pane

0xddfa,	// (0x00099084) listscroll_cale_event_viewer_pane

0xb2bc,	// (0x00096546) list_cale_ev_pane

0xb2c4,	// (0x0009654e) scroll_pane_cp023

0x4d2b,	// (0x0008ffb5) field_cale_ev_pane_ParamLimits

0x4d2b,	// (0x0008ffb5) field_cale_ev_pane

0xb2d0,	// (0x0009655a) field_cale_ev_content_pane_ParamLimits

0xb2d0,	// (0x0009655a) field_cale_ev_content_pane

0xb2dc,	// (0x00096566) field_cale_ev_pane_g1_ParamLimits

0xb2dc,	// (0x00096566) field_cale_ev_pane_g1

0xb2e8,	// (0x00096572) field_cale_ev_pane_g2_ParamLimits

0xb2e8,	// (0x00096572) field_cale_ev_pane_g2

0xb300,	// (0x0009658a) field_cale_ev_pane_g3_ParamLimits

0xb300,	// (0x0009658a) field_cale_ev_pane_g3

0x0002,

0xf594,	// (0x0009a81e) field_cale_ev_pane_g_ParamLimits

0xf594,	// (0x0009a81e) field_cale_ev_pane_g

0xb318,	// (0x000965a2) field_cale_ev_pane_t1_ParamLimits

0xb318,	// (0x000965a2) field_cale_ev_pane_t1

0x4d4f,	// (0x0008ffd9) field_cale_ev_content_pane_t1_ParamLimits

0x4d4f,	// (0x0008ffd9) field_cale_ev_content_pane_t1

0x36bf,	// (0x0008e949) bg_button_pane_cp01

0x1450,	// (0x0008c6da) listscroll_cale_week_pane_ParamLimits

0xe6ad,	// (0x00099937) popup_toolbar_window_cp01

0xe6b6,	// (0x00099940) listscroll_cale_week_pane_t1_ParamLimits

0x1450,	// (0x0008c6da) listscroll_cale_day_pane_ParamLimits

0xe6ad,	// (0x00099937) popup_toolbar_window_cp02

0xeaca,	// (0x00099d54) listscroll_cale_day_pane_t1_ParamLimits

0x46fd,	// (0x0008f987) main_cale_month_pane_ParamLimits

0xad5a,	// (0x00095fe4) popup_toolbar_window_cp03_ParamLimits

0xad5a,	// (0x00095fe4) popup_toolbar_window_cp03

0x3ace,	// (0x0008ed58) main_image_pane_g2_ParamLimits

0x3ace,	// (0x0008ed58) main_image_pane_g2

0x3adf,	// (0x0008ed69) main_image_pane_g3_ParamLimits

0x3adf,	// (0x0008ed69) main_image_pane_g3

0x0002,

0xf3ab,	// (0x0009a635) main_image_pane_g_ParamLimits

0xf3ab,	// (0x0009a635) main_image_pane_g

0x3af0,	// (0x0008ed7a) main_image_pane_t1_ParamLimits

0x3b07,	// (0x0008ed91) main_image_pane_t2_ParamLimits

0x3b07,	// (0x0008ed91) main_image_pane_t2

0x3b19,	// (0x0008eda3) main_image_pane_t3_ParamLimits

0x3b19,	// (0x0008eda3) main_image_pane_t3

0x3b41,	// (0x0008edcb) main_image_pane_t4_ParamLimits

0x3b41,	// (0x0008edcb) main_image_pane_t4

0x0003,

0xf3b2,	// (0x0009a63c) main_image_pane_t_ParamLimits

0xf3b2,	// (0x0009a63c) main_image_pane_t

0x3b61,	// (0x0008edeb) popup_image_details_window_cp01

0x3b6b,	// (0x0008edf5) popup_toobar_trans_pane_cp01_ParamLimits

0x3b6b,	// (0x0008edf5) popup_toobar_trans_pane_cp01

0x4834,	// (0x0008fabe) popup_image_details_window_ParamLimits

0x4834,	// (0x0008fabe) popup_image_details_window

0xad2b,	// (0x00095fb5) popup_image_focus_window

0xae73,	// (0x000960fd) camera2_autofocus_pane_ParamLimits

0xae73,	// (0x000960fd) camera2_autofocus_pane

0xddfa,	// (0x00099084) bg_popup_sub_pane_cp06

0xb32f,	// (0x000965b9) popup_image_focus_window_g1

0xb337,	// (0x000965c1) popup_image_focus_window_g2

0xb33f,	// (0x000965c9) popup_image_focus_window_g3

0xb347,	// (0x000965d1) popup_image_focus_window_g4

0x0003,

0xf59b,	// (0x0009a825) popup_image_focus_window_g

0xb34f,	// (0x000965d9) popup_image_focus_window_t1

0xb35d,	// (0x000965e7) popup_image_focus_window_t2

0xb36d,	// (0x000965f7) popup_image_focus_window_t3

0x0002,

0xf5a4,	// (0x0009a82e) popup_image_focus_window_t

0xe530,	// (0x000997ba) camera2_autofocus_pane_g1

0xe4c9,	// (0x00099753) bg_tb_trans_pane_cp01

0xb37b,	// (0x00096605) popup_image_details_window_g1

0xb38e,	// (0x00096618) popup_image_details_window_g2

0x0002,

0xf5ab,	// (0x0009a835) popup_image_details_window_g

0xb3b7,	// (0x00096641) popup_image_details_window_t1

0xb3c9,	// (0x00096653) popup_image_details_window_t2

0xb3e2,	// (0x0009666c) popup_image_details_window_t3

0xb3f6,	// (0x00096680) popup_image_details_window_t4

0xb411,	// (0x0009669b) popup_image_details_window_t5

0x0004,

0xf5b2,	// (0x0009a83c) popup_image_details_window_t

0xe58e,	// (0x00099818) bg_calc_paper_pane_ParamLimits

0x9f80,	// (0x0009520a) grid_highlight_pane_cp013

0x9f92,	// (0x0009521c) list_calc_pane_ParamLimits

0x9fa4,	// (0x0009522e) scroll_pane_cp024

0xe5a2,	// (0x0009982c) bg_calc_display_pane_ParamLimits

0x127a,	// (0x0008c504) calc_display_pane_t1_ParamLimits

0x128c,	// (0x0008c516) calc_display_pane_t2_ParamLimits

0x9fac,	// (0x00095236) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0009a396) calc_display_pane_t_ParamLimits

0x134d,	// (0x0008c5d7) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0009a3b3) cell_calc_pane_g

0x1356,	// (0x0008c5e0) cell_calc_pane_t1

0xe5f7,	// (0x00099881) grid_highlight_pane_cp02_ParamLimits

0xe60d,	// (0x00099897) toolbar_button_pane_cp01_ParamLimits

0xe60d,	// (0x00099897) toolbar_button_pane_cp01

0x3bad,	// (0x0008ee37) temp_image_control_pane_ParamLimits

0x3bad,	// (0x0008ee37) temp_image_control_pane

0x9f72,	// (0x000951fc) main_mp3_pane

0xb42b,	// (0x000966b5) temp_image_control_pane_g1_ParamLimits

0xb42b,	// (0x000966b5) temp_image_control_pane_g1

0xb439,	// (0x000966c3) temp_image_control_pane_g2_ParamLimits

0xb439,	// (0x000966c3) temp_image_control_pane_g2

0xb44b,	// (0x000966d5) temp_image_control_pane_g3_ParamLimits

0xb44b,	// (0x000966d5) temp_image_control_pane_g3

0x4d70,	// (0x0008fffa) temp_image_control_pane_g4_ParamLimits

0x4d70,	// (0x0008fffa) temp_image_control_pane_g4

0x0003,

0xf5bd,	// (0x0009a847) temp_image_control_pane_g_ParamLimits

0xf5bd,	// (0x0009a847) temp_image_control_pane_g

0xb42b,	// (0x000966b5) main_mp3_pane_g1

0x4d83,	// (0x0009000d) main_mp3_pane_g2

0x0007,

0xf5c6,	// (0x0009a850) main_mp3_pane_g

0xb480,	// (0x0009670a) main_mp3_pane_t1

0xe53e,	// (0x000997c8) main_camera_pane_g8_ParamLimits

0xe53e,	// (0x000997c8) main_camera_pane_g8

0x1b93,	// (0x0008ce1d) main_video_pane_g7_ParamLimits

0x1b93,	// (0x0008ce1d) main_video_pane_g7

0xae95,	// (0x0009611f) main_camera2_pane_t7_ParamLimits

0xae95,	// (0x0009611f) main_camera2_pane_t7

0xe882,	// (0x00099b0c) scroll_pane_cp025_ParamLimits

0xe882,	// (0x00099b0c) scroll_pane_cp025

0xe896,	// (0x00099b20) scroll_pane_cp026_ParamLimits

0xe896,	// (0x00099b20) scroll_pane_cp026

0xe8a5,	// (0x00099b2f) wml_content_pane_ParamLimits

0x9f80,	// (0x0009520a) main_touch_calib_pane

0x4e55,	// (0x000900df) main_touch_calib_pane_g1

0x4e67,	// (0x000900f1) main_touch_calib_pane_g2

0x4e79,	// (0x00090103) main_touch_calib_pane_g3

0x4e8b,	// (0x00090115) main_touch_calib_pane_g4

0x0003,

0xf5e4,	// (0x0009a86e) main_touch_calib_pane_g

0x4e9d,	// (0x00090127) main_touch_calib_pane_t1

0x4eb7,	// (0x00090141) main_touch_calib_pane_t2

0x0004,

0xf5ed,	// (0x0009a877) main_touch_calib_pane_t

0xefc1,	// (0x0009a24b) mup_progress_pane_cp02

0xeff5,	// (0x0009a27f) navi_pane_g1

0xf057,	// (0x0009a2e1) navi_pane_mp_t3

0x9f72,	// (0x000951fc) main_mp3_pane_ParamLimits

0x49ed,	// (0x0008fc77) navi_pane_ParamLimits

0xb42b,	// (0x000966b5) main_mp3_pane_g1_ParamLimits

0x4d83,	// (0x0009000d) main_mp3_pane_g2_ParamLimits

0x4d8f,	// (0x00090019) main_mp3_pane_g3_ParamLimits

0x4d8f,	// (0x00090019) main_mp3_pane_g3

0x4d9d,	// (0x00090027) main_mp3_pane_g4_ParamLimits

0x4d9d,	// (0x00090027) main_mp3_pane_g4

0xe530,	// (0x000997ba) main_mp3_pane_g5_ParamLimits

0xe530,	// (0x000997ba) main_mp3_pane_g5

0xb45b,	// (0x000966e5) main_mp3_pane_g6_ParamLimits

0xb45b,	// (0x000966e5) main_mp3_pane_g6

0xb468,	// (0x000966f2) main_mp3_pane_g7_ParamLimits

0xb468,	// (0x000966f2) main_mp3_pane_g7

0xb474,	// (0x000966fe) main_mp3_pane_g8_ParamLimits

0xb474,	// (0x000966fe) main_mp3_pane_g8

0xf5c6,	// (0x0009a850) main_mp3_pane_g_ParamLimits

0x4da9,	// (0x00090033) main_mp3_pane_t2

0x4db7,	// (0x00090041) main_mp3_pane_t3

0xb48e,	// (0x00096718) main_mp3_pane_t4

0xb49c,	// (0x00096726) main_mp3_pane_t5

0x0005,

0xf5d7,	// (0x0009a861) main_mp3_pane_t

0xb4aa,	// (0x00096734) mup_progress_pane_cp01

0x9f23,	// (0x000951ad) aid_zoom_text_secondary2

0xb2bc,	// (0x00096546) list_cale_ev2_pane

0xb2c4,	// (0x0009654e) scroll_pane_cp023_ParamLimits

0x4f11,	// (0x0009019b) field_cale_ev2_pane_ParamLimits

0x4f11,	// (0x0009019b) field_cale_ev2_pane

0x4f35,	// (0x000901bf) field_cale_ev2_pane_g1_ParamLimits

0x4f35,	// (0x000901bf) field_cale_ev2_pane_g1

0x4f41,	// (0x000901cb) field_cale_ev2_pane_g2_ParamLimits

0x4f41,	// (0x000901cb) field_cale_ev2_pane_g2

0x4f59,	// (0x000901e3) field_cale_ev2_pane_g3_ParamLimits

0x4f59,	// (0x000901e3) field_cale_ev2_pane_g3

0x0003,

0xf5f8,	// (0x0009a882) field_cale_ev2_pane_g_ParamLimits

0xf5f8,	// (0x0009a882) field_cale_ev2_pane_g

0x4f71,	// (0x000901fb) field_cale_ev2_pane_t1_ParamLimits

0x4f71,	// (0x000901fb) field_cale_ev2_pane_t1

0x4f88,	// (0x00090212) field_cale_ev2_pane_t2_ParamLimits

0x4f88,	// (0x00090212) field_cale_ev2_pane_t2

0x0001,

0xf601,	// (0x0009a88b) field_cale_ev2_pane_t_ParamLimits

0xf601,	// (0x0009a88b) field_cale_ev2_pane_t

0x3880,	// (0x0008eb0a) main_postcard_pane_g5_ParamLimits

0x3880,	// (0x0008eb0a) main_postcard_pane_g5

0x3896,	// (0x0008eb20) main_postcard_pane_g6_ParamLimits

0x3896,	// (0x0008eb20) main_postcard_pane_g6

0xe4c9,	// (0x00099753) camera2_autofocus_pane_cp_ParamLimits

0xe4c9,	// (0x00099753) camera2_autofocus_pane_cp

0x9f72,	// (0x000951fc) main_mup3_pane

0x4fe7,	// (0x00090271) main_mup3_pane_g1_ParamLimits

0x4fe7,	// (0x00090271) main_mup3_pane_g1

0x5009,	// (0x00090293) main_mup3_pane_g2_ParamLimits

0x5009,	// (0x00090293) main_mup3_pane_g2

0x5084,	// (0x0009030e) main_mup3_pane_g3_ParamLimits

0x5084,	// (0x0009030e) main_mup3_pane_g3

0x50ee,	// (0x00090378) main_mup3_pane_g4_ParamLimits

0x50ee,	// (0x00090378) main_mup3_pane_g4

0x5158,	// (0x000903e2) main_mup3_pane_g5_ParamLimits

0x5158,	// (0x000903e2) main_mup3_pane_g5

0x51c2,	// (0x0009044c) main_mup3_pane_g6_ParamLimits

0x51c2,	// (0x0009044c) main_mup3_pane_g6

0xe53e,	// (0x000997c8) main_mup3_pane_g7_ParamLimits

0xe53e,	// (0x000997c8) main_mup3_pane_g7

0x0007,

0xf611,	// (0x0009a89b) main_mup3_pane_g_ParamLimits

0xf611,	// (0x0009a89b) main_mup3_pane_g

0x5246,	// (0x000904d0) main_mup3_pane_t1_ParamLimits

0x5246,	// (0x000904d0) main_mup3_pane_t1

0x52b8,	// (0x00090542) main_mup3_pane_t2_ParamLimits

0x52b8,	// (0x00090542) main_mup3_pane_t2

0x538e,	// (0x00090618) main_mup3_pane_t4_ParamLimits

0x538e,	// (0x00090618) main_mup3_pane_t4

0x53ec,	// (0x00090676) main_mup3_pane_t5_ParamLimits

0x53ec,	// (0x00090676) main_mup3_pane_t5

0x54b0,	// (0x0009073a) main_mup3_pane_t6_ParamLimits

0x54b0,	// (0x0009073a) main_mup3_pane_t6

0x0005,

0xf622,	// (0x0009a8ac) main_mup3_pane_t_ParamLimits

0xf622,	// (0x0009a8ac) main_mup3_pane_t

0x5568,	// (0x000907f2) mup3_progress_pane_ParamLimits

0x5568,	// (0x000907f2) mup3_progress_pane

0x5600,	// (0x0009088a) popup_mup3_control_window_ParamLimits

0x5600,	// (0x0009088a) popup_mup3_control_window

0xb4be,	// (0x00096748) popup_mup3_text_window

0x5636,	// (0x000908c0) mup3_progress_pane_t1

0x5655,	// (0x000908df) mup3_progress_pane_t2

0xb4c6,	// (0x00096750) mup3_progress_pane_t3

0x0002,

0xf62f,	// (0x0009a8b9) mup3_progress_pane_t

0xb4e3,	// (0x0009676d) mup_progress_pane_cp03

0xddfa,	// (0x00099084) bg_tb_trans_pane_cp04

0x5674,	// (0x000908fe) mup3_volume_pane

0x567c,	// (0x00090906) popup_mup3_control_window_g1

0x5685,	// (0x0009090f) mup3_volume_pane_g1

0x568e,	// (0x00090918) mup3_volume_pane_g2

0x5697,	// (0x00090921) mup3_volume_pane_g3

0x0002,

0xf636,	// (0x0009a8c0) mup3_volume_pane_g

0xddfa,	// (0x00099084) bg_tb_trans_pane_cp03

0xb4f3,	// (0x0009677d) popup_mup3_text_window_g1

0xb4fb,	// (0x00096785) popup_mup3_text_window_t1

0xe5ea,	// (0x00099874) list_calc_item_pane_g1_ParamLimits

0xaf98,	// (0x00096222) mup_volume_pane_cp_g1

0x4ed1,	// (0x0009015b) main_touch_calib_pane_t3

0x4ee5,	// (0x0009016f) main_touch_calib_pane_t4

0x4efb,	// (0x00090185) main_touch_calib_pane_t5

0x9eff,	// (0x00095189) aid_cell_size_toolbar2

0x9f07,	// (0x00095191) aid_popup3_width_pane

0x9f13,	// (0x0009519d) aid_zoom_text_msg_primary

0x1a81,	// (0x0008cd0b) vorec_t7

0xe5ae,	// (0x00099838) bg_calc_paper_pane_g1_ParamLimits

0xe5ba,	// (0x00099844) bg_calc_paper_pane_g2_ParamLimits

0xe5c6,	// (0x00099850) bg_calc_paper_pane_g3_ParamLimits

0xe5d2,	// (0x0009985c) bg_calc_paper_pane_g4_ParamLimits

0xe5de,	// (0x00099868) bg_calc_paper_pane_g5_ParamLimits

0x12d9,	// (0x0008c563) bg_calc_paper_pane_g6_ParamLimits

0x12e7,	// (0x0008c571) bg_calc_paper_pane_g7_ParamLimits

0x12f5,	// (0x0008c57f) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0009a39d) bg_calc_paper_pane_g_ParamLimits

0x1308,	// (0x0008c592) calc_bg_paper_pane_g9_ParamLimits

0xe4c9,	// (0x00099753) image_qvga_pane_ParamLimits

0xe4c9,	// (0x00099753) image_qvga_pane

0xe4a7,	// (0x00099731) bg_popup_sub_pane_cp04_ParamLimits

0x3a2c,	// (0x0008ecb6) popup_mup_playback_window_g1_ParamLimits

0x3a38,	// (0x0008ecc2) popup_mup_playback_window_t1_ParamLimits

0x3a4d,	// (0x0008ecd7) popup_mup_playback_window_t2_ParamLimits

0xf3a6,	// (0x0009a630) popup_mup_playback_window_t_ParamLimits

0xe53e,	// (0x000997c8) main_mup2_pane_g3_ParamLimits

0xe53e,	// (0x000997c8) main_mup2_pane_g3

0x1d8a,	// (0x0008d014) popup_toolbar_window_cp04

0x4272,	// (0x0008f4fc) popup_call2_audio_second_window_g3_ParamLimits

0x4272,	// (0x0008f4fc) popup_call2_audio_second_window_g3

0xa40c,	// (0x00095696) popup_call2_audio_first_window_g4_ParamLimits

0xa40c,	// (0x00095696) popup_call2_audio_first_window_g4

0xaa33,	// (0x00095cbd) popup_call2_audio_in_window_g4_ParamLimits

0xaa33,	// (0x00095cbd) popup_call2_audio_in_window_g4

0x3a62,	// (0x0008ecec) aid_area_sk_bg_cut_ParamLimits

0x3a62,	// (0x0008ecec) aid_area_sk_bg_cut

0x3a80,	// (0x0008ed0a) aid_area_sk_bg_cut_2_ParamLimits

0x3a80,	// (0x0008ed0a) aid_area_sk_bg_cut_2

0xddfa,	// (0x00099084) aid_placing_details_win

0xddfa,	// (0x00099084) aid_placing_details_win_2

0xe530,	// (0x000997ba) camera2_autofocus_pane_g1_ParamLimits

0x1037,	// (0x0008c2c1) popup_fixed_preview_cale_window_ParamLimits

0x1037,	// (0x0008c2c1) popup_fixed_preview_cale_window

0x3260,	// (0x0008e4ea) navi_slider_pane_g3

0x3269,	// (0x0008e4f3) navi_slider_pane_g4

0x3272,	// (0x0008e4fc) navi_slider_pane_g5

0x3260,	// (0x0008e4ea) navi_slider_pane_g6

0xa0c8,	// (0x00095352) navi_slider_pane_g7

0x35d5,	// (0x0008e85f) mup_scale_pane_g3

0x35de,	// (0x0008e868) mup_scale_pane_g4

0x35e7,	// (0x0008e871) mup_scale_pane_g5

0x35f0,	// (0x0008e87a) mup_scale_pane_g6

0x35f9,	// (0x0008e883) mup_scale_pane_g7

0xafa1,	// (0x0009622b) cams2_slider_pane_g3

0xafa1,	// (0x0009622b) cams2_slider_pane_g4

0xafa1,	// (0x0009622b) cams2_slider_pane_g5

0xafa1,	// (0x0009622b) cams2_slider_pane_g6

0xafa1,	// (0x0009622b) cams2_slider_pane_g7

0xe776,	// (0x00099a00) camera2_autofocus_pane_cp_g1

0xad0b,	// (0x00095f95) bg_popup_preview_window_pane_cp02_ParamLimits

0xad0b,	// (0x00095f95) bg_popup_preview_window_pane_cp02

0xb509,	// (0x00096793) list_fp_cale_pane_ParamLimits

0xb509,	// (0x00096793) list_fp_cale_pane

0xb515,	// (0x0009679f) popup_fixed_preview_cale_window_t1_ParamLimits

0xb515,	// (0x0009679f) popup_fixed_preview_cale_window_t1

0x56a0,	// (0x0009092a) popup_fixed_preview_cale_window_t2_ParamLimits

0x56a0,	// (0x0009092a) popup_fixed_preview_cale_window_t2

0x56b5,	// (0x0009093f) popup_fixed_preview_cale_window_t3_ParamLimits

0x56b5,	// (0x0009093f) popup_fixed_preview_cale_window_t3

0x0002,

0xf63d,	// (0x0009a8c7) popup_fixed_preview_cale_window_t_ParamLimits

0xf63d,	// (0x0009a8c7) popup_fixed_preview_cale_window_t

0x56cc,	// (0x00090956) list_single_fp_cale_pane_ParamLimits

0x56cc,	// (0x00090956) list_single_fp_cale_pane

0xb533,	// (0x000967bd) list_single_fp_cale_pane_g1_ParamLimits

0xb533,	// (0x000967bd) list_single_fp_cale_pane_g1

0xb53f,	// (0x000967c9) list_single_fp_cale_pane_g2_ParamLimits

0xb53f,	// (0x000967c9) list_single_fp_cale_pane_g2

0x0002,

0xf644,	// (0x0009a8ce) list_single_fp_cale_pane_g_ParamLimits

0xf644,	// (0x0009a8ce) list_single_fp_cale_pane_g

0xb558,	// (0x000967e2) list_single_fp_cale_pane_t1_ParamLimits

0xb558,	// (0x000967e2) list_single_fp_cale_pane_t1

0xb56a,	// (0x000967f4) list_single_fp_cale_pane_t2_ParamLimits

0xb56a,	// (0x000967f4) list_single_fp_cale_pane_t2

0x0001,

0xf64b,	// (0x0009a8d5) list_single_fp_cale_pane_t_ParamLimits

0xf64b,	// (0x0009a8d5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9f80,	// (0x0009520a) main_dialer_pane

0xddfa,	// (0x00099084) aid_cell_size_keypad

0xddfa,	// (0x00099084) dialer_ne_pane

0xddfa,	// (0x00099084) grid_dialer_command_1_pane

0xddfa,	// (0x00099084) grid_dialer_command_2_pane

0xddfa,	// (0x00099084) grid_dialer_keypad_pane

0x56e4,	// (0x0009096e) bg_popup_call_pane_cp06_ParamLimits

0x56e4,	// (0x0009096e) bg_popup_call_pane_cp06

0x56e4,	// (0x0009096e) dialer_ne_clear_pane_ParamLimits

0x56e4,	// (0x0009096e) dialer_ne_clear_pane

0xe776,	// (0x00099a00) dialer_ne_pane_g1

0x3342,	// (0x0008e5cc) dialer_ne_pane_t1_ParamLimits

0x3342,	// (0x0008e5cc) dialer_ne_pane_t1

0x56f2,	// (0x0009097c) dialer_ne_pane_t2_ParamLimits

0x56f2,	// (0x0009097c) dialer_ne_pane_t2

0x571a,	// (0x000909a4) dialer_ne_pane_t3_ParamLimits

0x571a,	// (0x000909a4) dialer_ne_pane_t3

0x0002,

0xf650,	// (0x0009a8da) dialer_ne_pane_t_ParamLimits

0xf650,	// (0x0009a8da) dialer_ne_pane_t

0x571a,	// (0x000909a4) dialer_ne_pane_t3_copy1_ParamLimits

0x571a,	// (0x000909a4) dialer_ne_pane_t3_copy1

0xb59d,	// (0x00096827) cell_dialer_keypad_pane_ParamLimits

0xb59d,	// (0x00096827) cell_dialer_keypad_pane

0xe4c9,	// (0x00099753) cell_dialer_command_1_pane_ParamLimits

0xe4c9,	// (0x00099753) cell_dialer_command_1_pane

0xb5b4,	// (0x0009683e) cell_dialer_command_2_pane_ParamLimits

0xb5b4,	// (0x0009683e) cell_dialer_command_2_pane

0xe4c9,	// (0x00099753) bg_button_pane_cp02_ParamLimits

0xe4c9,	// (0x00099753) bg_button_pane_cp02

0xe530,	// (0x000997ba) cell_dialer_keypad_pane_g1_ParamLimits

0xe530,	// (0x000997ba) cell_dialer_keypad_pane_g1

0xe4c9,	// (0x00099753) bg_button_pane_cp03_ParamLimits

0xe4c9,	// (0x00099753) bg_button_pane_cp03

0xe530,	// (0x000997ba) cell_dialer_command_1_pane_g1_ParamLimits

0xe530,	// (0x000997ba) cell_dialer_command_1_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp04

0xe776,	// (0x00099a00) cell_dialer_command_2_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp06

0xe776,	// (0x00099a00) dialer_ne_clear_pane_g1

0x3175,	// (0x0008e3ff) navi_pane_g2

0x31a3,	// (0x0008e42d) navi_pane_g3

0x0002,

0xf2a9,	// (0x0009a533) navi_pane_g

0x31ce,	// (0x0008e458) navi_pane_mv_g2

0x31f5,	// (0x0008e47f) navi_pane_mv_g5

0x31fd,	// (0x0008e487) navi_pane_mv_t1

0xe5a2,	// (0x0009982c) main_clock2_pane

0xe4c9,	// (0x00099753) main_clock2_list_pane_ParamLimits

0xe4c9,	// (0x00099753) main_clock2_list_pane

0x57ab,	// (0x00090a35) main_clock2_pane_t1_ParamLimits

0x57ab,	// (0x00090a35) main_clock2_pane_t1

0x57e6,	// (0x00090a70) main_clock2_pane_t2_ParamLimits

0x57e6,	// (0x00090a70) main_clock2_pane_t2

0x0004,

0xf65c,	// (0x0009a8e6) main_clock2_pane_t_ParamLimits

0xf65c,	// (0x0009a8e6) main_clock2_pane_t

0x5885,	// (0x00090b0f) popup_clock_analogue_window_cp03_ParamLimits

0x5885,	// (0x00090b0f) popup_clock_analogue_window_cp03

0x58aa,	// (0x00090b34) popup_clock_digital_window_cp02_ParamLimits

0x58aa,	// (0x00090b34) popup_clock_digital_window_cp02

0x5923,	// (0x00090bad) main_clock2_list_single_pane_ParamLimits

0x5923,	// (0x00090bad) main_clock2_list_single_pane

0xe740,	// (0x000999ca) list_highlight_pane_cp05

0xb5f5,	// (0x0009687f) main_clock2_list_single_pane_t1

0x1d8a,	// (0x0008d014) popup_toolbar_window_cp04_ParamLimits

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g2_ParamLimits

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g2

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g3_ParamLimits

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g3

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g4_ParamLimits

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g4

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g5_ParamLimits

0xe53e,	// (0x000997c8) camera2_autofocus_pane_g5

0x0004,

0x0559,	// (0x0008b7e3) camera2_autofocus_pane_g_ParamLimits

0x0559,	// (0x0008b7e3) camera2_autofocus_pane_g

0x4f9d,	// (0x00090227) camera2_autofocus_pane_cp_g2

0x4fa5,	// (0x0009022f) camera2_autofocus_pane_cp_g3

0x4fad,	// (0x00090237) camera2_autofocus_pane_cp_g4

0x4fb5,	// (0x0009023f) camera2_autofocus_pane_cp_g5

0x0004,

0xf606,	// (0x0009a890) camera2_autofocus_pane_cp_g

0xddfa,	// (0x00099084) popup_dialer_spcha_window

0xddfa,	// (0x00099084) bg_popup_sub_pane_cp07

0xddfa,	// (0x00099084) list_spcha_pane

0xb603,	// (0x0009688d) list_single_spcha_pane_ParamLimits

0xb603,	// (0x0009688d) list_single_spcha_pane

0xddfa,	// (0x00099084) list_highlight_pane_cp06

0xeca2,	// (0x00099f2c) list_single_spcha_pane_t1

0xa7dd,	// (0x00095a67) popup_call2_audio_out_window_g4_ParamLimits

0xa7dd,	// (0x00095a67) popup_call2_audio_out_window_g4

0x9f80,	// (0x0009520a) main_imed2_pane

0xad35,	// (0x00095fbf) popup_imed_adjust2_window

0x484c,	// (0x0008fad6) popup_imed_trans_window_ParamLimits

0x484c,	// (0x0008fad6) popup_imed_trans_window

0xb085,	// (0x0009630f) popup_blid_sat_info2_window_t1

0xb093,	// (0x0009631d) popup_blid_sat_info2_window_t2

0x000a,

0xf549,	// (0x0009a7d3) popup_blid_sat_info2_window_t

0x59de,	// (0x00090c68) aid_size_cell_colour_35

0x59fe,	// (0x00090c88) aid_size_cell_colour_112

0x5a1e,	// (0x00090ca8) aid_size_cell_effect

0x3356,	// (0x0008e5e0) bg_tb_trans_pane_cp02

0xebd3,	// (0x00099e5d) heading_imed_pane

0x5a3e,	// (0x00090cc8) listscroll_imed_pane

0xb615,	// (0x0009689f) heading_imed_pane_g1

0xb61d,	// (0x000968a7) heading_imed_pane_t1

0xb62b,	// (0x000968b5) grid_imed_colour_35_pane_ParamLimits

0xb62b,	// (0x000968b5) grid_imed_colour_35_pane

0x5a4a,	// (0x00090cd4) grid_imed_effect_pane

0xb647,	// (0x000968d1) list_imed_aspect_pane

0x5a61,	// (0x00090ceb) scroll_pane_cp027_ParamLimits

0x5a61,	// (0x00090ceb) scroll_pane_cp027

0x5a72,	// (0x00090cfc) cell_imed_effect_pane_ParamLimits

0x5a72,	// (0x00090cfc) cell_imed_effect_pane

0xb64f,	// (0x000968d9) cell_imed_colour_pane_ParamLimits

0xb64f,	// (0x000968d9) cell_imed_colour_pane

0xb699,	// (0x00096923) cell_imed_colour_pane_g1_ParamLimits

0xb699,	// (0x00096923) cell_imed_colour_pane_g1

0xb6aa,	// (0x00096934) hgihlgiht_grid_pane_cp016_ParamLimits

0xb6aa,	// (0x00096934) hgihlgiht_grid_pane_cp016

0x5a9d,	// (0x00090d27) cell_imed_effect_pane_g1

0x5aa5,	// (0x00090d2f) grid_highlight_pane_cp017

0xb6bb,	// (0x00096945) list_imed_single_pane_ParamLimits

0xb6bb,	// (0x00096945) list_imed_single_pane

0xddfa,	// (0x00099084) list_highlight_pane_cp07

0xb6cf,	// (0x00096959) list_imed_aspect_pane_comp1_t1

0x3356,	// (0x0008e5e0) bg_tb_trans_pane_cp05

0xb6f1,	// (0x0009697b) popup_imed_adjust2_window_g1

0xb718,	// (0x000969a2) popup_imed_adjust2_window_t1

0xb730,	// (0x000969ba) slider_imed_adjust_pane

0xb744,	// (0x000969ce) slider_imed_adjust_pane_g1

0xb754,	// (0x000969de) slider_imed_adjust_pane_g2

0xb764,	// (0x000969ee) slider_imed_adjust_pane_g3

0xb775,	// (0x000969ff) slider_imed_adjust_pane_g4

0x0003,

0xf679,	// (0x0009a903) slider_imed_adjust_pane_g

0x5aae,	// (0x00090d38) aid_size_cell_clipart2

0xb786,	// (0x00096a10) grid_imed_clipart_pane

0xb790,	// (0x00096a1a) scroll_pane_cp031

0x5aba,	// (0x00090d44) cell_imed_clipart_pane_ParamLimits

0x5aba,	// (0x00090d44) cell_imed_clipart_pane

0x5ad7,	// (0x00090d61) cell_imed_clipart_pane_g1

0xddfa,	// (0x00099084) grid_highlight_pane_cp014

0x5789,	// (0x00090a13) main_clock2_pane_g1_ParamLimits

0x5789,	// (0x00090a13) main_clock2_pane_g1

0x58ca,	// (0x00090b54) aid_call2_pane_cp10

0x58dc,	// (0x00090b66) aid_call_pane_cp10

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g1

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g2

0x58ee,	// (0x00090b78) popup_clock_analogue_window_cp10_g3

0x58ee,	// (0x00090b78) popup_clock_analogue_window_cp10_g4

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf667,	// (0x0009a8f1) popup_clock_analogue_window_cp10_g

0x5904,	// (0x00090b8e) popup_clock_analogue_window_cp10_t1

0x5935,	// (0x00090bbf) clock_digital_number_pane_cp10_ParamLimits

0x5935,	// (0x00090bbf) clock_digital_number_pane_cp10

0x594f,	// (0x00090bd9) clock_digital_number_pane_cp11_ParamLimits

0x594f,	// (0x00090bd9) clock_digital_number_pane_cp11

0x5969,	// (0x00090bf3) clock_digital_number_pane_cp12_ParamLimits

0x5969,	// (0x00090bf3) clock_digital_number_pane_cp12

0x5985,	// (0x00090c0f) clock_digital_number_pane_cp13_ParamLimits

0x5985,	// (0x00090c0f) clock_digital_number_pane_cp13

0x59a1,	// (0x00090c2b) clock_digital_separator_pane_cp10_ParamLimits

0x59a1,	// (0x00090c2b) clock_digital_separator_pane_cp10

0x59bd,	// (0x00090c47) popup_clock_digital_window_cp02_t1_ParamLimits

0x59bd,	// (0x00090c47) popup_clock_digital_window_cp02_t1

0xe49f,	// (0x00099729) clock_digital_number_pane_cp10_g1

0xe49f,	// (0x00099729) clock_digital_number_pane_cp10_g2

0x0001,

0x063b,	// (0x0008b8c5) clock_digital_number_pane_cp10_g

0xe49f,	// (0x00099729) clock_digital_separator_pane_cp10_g1

0xe49f,	// (0x00099729) clock_digital_separator_pane_g2_cp10

0xf065,	// (0x0009a2ef) navi_pane_vded_g4

0xf06e,	// (0x0009a2f8) navi_pane_vded_g5

0xf077,	// (0x0009a301) navi_pane_vded_t1

0x9f80,	// (0x0009520a) main_vded_pane

0x5ae0,	// (0x00090d6a) main_vded_pane_g1

0x5aec,	// (0x00090d76) main_vded_pane_g2

0x5af8,	// (0x00090d82) main_vded_pane_g3

0x0002,

0xf682,	// (0x0009a90c) main_vded_pane_g

0x5b04,	// (0x00090d8e) main_vded_pane_t1

0x5b12,	// (0x00090d9c) main_vded_pane_t2

0x0001,

0xf689,	// (0x0009a913) main_vded_pane_t

0x5b20,	// (0x00090daa) vded_slider_pane

0x5b2a,	// (0x00090db4) vded_video_pane

0xb798,	// (0x00096a22) vded_video_pane_g1

0x5b36,	// (0x00090dc0) vded_video_pane_g2

0xe776,	// (0x00099a00) vded_video_pane_g3

0x0002,

0xf68e,	// (0x0009a918) vded_video_pane_g

0xb7a2,	// (0x00096a2c) vded_slider_pane_g1

0xaf98,	// (0x00096222) vded_slider_pane_g2

0xb7ab,	// (0x00096a35) vded_slider_pane_g3

0xb7b4,	// (0x00096a3e) vded_slider_pane_g4

0xb7bd,	// (0x00096a47) vded_slider_pane_g5

0x0004,

0xf695,	// (0x0009a91f) vded_slider_pane_g

0x55ea,	// (0x00090874) mup3_rocker_pane_ParamLimits

0x55ea,	// (0x00090874) mup3_rocker_pane

0x5b3f,	// (0x00090dc9) mup3_control_keys_pane_g1

0x5b47,	// (0x00090dd1) mup3_control_keys_pane_g2

0x5b4f,	// (0x00090dd9) mup3_control_keys_pane_g3

0x5b57,	// (0x00090de1) mup3_control_keys_pane_g4

0x0003,

0xf6a0,	// (0x0009a92a) mup3_control_keys_pane_g

0x106c,	// (0x0008c2f6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x106c,	// (0x0008c2f6) popup_toolbar2_fixed_window_cp01

0x5620,	// (0x000908aa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5620,	// (0x000908aa) popup_toolbar2_fixed_window_cp02

0xa166,	// (0x000953f0) popup_call2_audio_second_window_t4_ParamLimits

0xa166,	// (0x000953f0) popup_call2_audio_second_window_t4

0xa6a2,	// (0x0009592c) popup_call2_audio_first_window_t6_ParamLimits

0xa6a2,	// (0x0009592c) popup_call2_audio_first_window_t6

0xa8e0,	// (0x00095b6a) popup_call2_audio_out_window_t6_ParamLimits

0xa8e0,	// (0x00095b6a) popup_call2_audio_out_window_t6

0x9f80,	// (0x0009520a) main_vitu_pane

0xe4c9,	// (0x00099753) aid_size_cell_itu_ParamLimits

0xe4c9,	// (0x00099753) aid_size_cell_itu

0xe4c9,	// (0x00099753) bg_popup_window_pane_cp08_ParamLimits

0xe4c9,	// (0x00099753) bg_popup_window_pane_cp08

0xe4c9,	// (0x00099753) field_vitu_entry_pane_ParamLimits

0xe4c9,	// (0x00099753) field_vitu_entry_pane

0xe4c9,	// (0x00099753) grid_vitu_function_pane_ParamLimits

0xe4c9,	// (0x00099753) grid_vitu_function_pane

0xe4c9,	// (0x00099753) grid_vitu_itu_pane_ParamLimits

0xe4c9,	// (0x00099753) grid_vitu_itu_pane

0xe4c9,	// (0x00099753) cell_vitu_itu_pane_ParamLimits

0xe4c9,	// (0x00099753) cell_vitu_itu_pane

0xe4c9,	// (0x00099753) cell_vitu_function_pane_ParamLimits

0xe4c9,	// (0x00099753) cell_vitu_function_pane

0xe4c9,	// (0x00099753) bg_popup_sub_pane_cp08_ParamLimits

0xe4c9,	// (0x00099753) bg_popup_sub_pane_cp08

0xe748,	// (0x000999d2) field_vitu_entry_pane_t1_ParamLimits

0xe748,	// (0x000999d2) field_vitu_entry_pane_t1

0xb7c6,	// (0x00096a50) field_vitu_entry_pane_t2_ParamLimits

0xb7c6,	// (0x00096a50) field_vitu_entry_pane_t2

0x0001,

0xf6a9,	// (0x0009a933) field_vitu_entry_pane_t_ParamLimits

0xf6a9,	// (0x0009a933) field_vitu_entry_pane_t

0xb02c,	// (0x000962b6) bg_button_pane_cp05_ParamLimits

0xb02c,	// (0x000962b6) bg_button_pane_cp05

0xb7e3,	// (0x00096a6d) cell_vitu_itu_pane_g1

0x332e,	// (0x0008e5b8) cell_vitu_itu_pane_t1_ParamLimits

0x332e,	// (0x0008e5b8) cell_vitu_itu_pane_t1

0x332e,	// (0x0008e5b8) cell_vitu_itu_pane_t2_ParamLimits

0x332e,	// (0x0008e5b8) cell_vitu_itu_pane_t2

0x0002,

0xf6ae,	// (0x0009a938) cell_vitu_itu_pane_t_ParamLimits

0xf6ae,	// (0x0009a938) cell_vitu_itu_pane_t

0xddfa,	// (0x00099084) bg_button_pane_cp07

0xe776,	// (0x00099a00) cell_vitu_function_pane_g1

0x9f8a,	// (0x00095214) main_calc_pane_g1

0x0e94,	// (0x0008c11e) aid_visual_content_pane

0x9f80,	// (0x0009520a) main_vradio_pane

0xe530,	// (0x000997ba) main_vradio_pane_g1_ParamLimits

0xe530,	// (0x000997ba) main_vradio_pane_g1

0xe53e,	// (0x000997c8) main_vradio_pane_g2_ParamLimits

0xe53e,	// (0x000997c8) main_vradio_pane_g2

0x0001,

0xf6b5,	// (0x0009a93f) main_vradio_pane_g_ParamLimits

0xf6b5,	// (0x0009a93f) main_vradio_pane_g

0xe748,	// (0x000999d2) main_vradio_pane_t1_ParamLimits

0xe748,	// (0x000999d2) main_vradio_pane_t1

0xe748,	// (0x000999d2) main_vradio_pane_t2_ParamLimits

0xe748,	// (0x000999d2) main_vradio_pane_t2

0x3342,	// (0x0008e5cc) main_vradio_pane_t3_ParamLimits

0x3342,	// (0x0008e5cc) main_vradio_pane_t3

0x0002,

0xf6ba,	// (0x0009a944) main_vradio_pane_t_ParamLimits

0xf6ba,	// (0x0009a944) main_vradio_pane_t

0xe4c9,	// (0x00099753) vradio_rocker_control_pane_ParamLimits

0xe4c9,	// (0x00099753) vradio_rocker_control_pane

0xe4c9,	// (0x00099753) vradio_station_info_pane_ParamLimits

0xe4c9,	// (0x00099753) vradio_station_info_pane

0xe4c9,	// (0x00099753) vradio_frequency_info_pane_ParamLimits

0xe4c9,	// (0x00099753) vradio_frequency_info_pane

0xe776,	// (0x00099a00) vradio_station_info_pane_g1

0x332e,	// (0x0008e5b8) vradio_station_info_pane_t1_ParamLimits

0x332e,	// (0x0008e5b8) vradio_station_info_pane_t1

0x3342,	// (0x0008e5cc) vradio_station_info_pane_t2_ParamLimits

0x3342,	// (0x0008e5cc) vradio_station_info_pane_t2

0x0001,

0xf6c1,	// (0x0009a94b) vradio_station_info_pane_t_ParamLimits

0xf6c1,	// (0x0009a94b) vradio_station_info_pane_t

0xddfa,	// (0x00099084) vradio_tuning_pane

0x5b67,	// (0x00090df1) vradio_rocker_control_pane_g1

0xb7ff,	// (0x00096a89) vradio_rocker_control_pane_g2

0x5b71,	// (0x00090dfb) vradio_rocker_control_pane_g3

0x5b7b,	// (0x00090e05) vradio_rocker_control_pane_g4

0x5b85,	// (0x00090e0f) vradio_rocker_control_pane_g5

0x0004,

0xf6c6,	// (0x0009a950) vradio_rocker_control_pane_g

0xe776,	// (0x00099a00) vradio_frequency_info_pane_g1

0xe748,	// (0x000999d2) vradio_frequency_info_pane_t1_ParamLimits

0xe748,	// (0x000999d2) vradio_frequency_info_pane_t1

0x5b8f,	// (0x00090e19) vradio_tuning_pane_g1

0x5b9a,	// (0x00090e24) vradio_tuning_pane_t1

0x9f2b,	// (0x000951b5) area_side_right_pane_ParamLimits

0x9f2b,	// (0x000951b5) area_side_right_pane

0xacd2,	// (0x00095f5c) status_small_pane_g1

0xacda,	// (0x00095f64) status_small_pane_g2

0xace3,	// (0x00095f6d) status_small_pane_g3

0xacec,	// (0x00095f76) status_small_pane_g4

0x0003,

0xf4ab,	// (0x0009a735) status_small_pane_g

0xacf5,	// (0x00095f7f) status_small_pane_t1

0x9f80,	// (0x0009520a) main_video3_pane

0xb807,	// (0x00096a91) cams_zoom_vslider_pane

0xb80f,	// (0x00096a99) image3_wide_pane_ParamLimits

0xb80f,	// (0x00096a99) image3_wide_pane

0xb829,	// (0x00096ab3) image3_wide_small_pane

0xb835,	// (0x00096abf) main_video3_pane_g1_ParamLimits

0xb835,	// (0x00096abf) main_video3_pane_g1

0xb851,	// (0x00096adb) main_video3_pane_g2_ParamLimits

0xb851,	// (0x00096adb) main_video3_pane_g2

0x0001,

0xf6d1,	// (0x0009a95b) main_video3_pane_g_ParamLimits

0xf6d1,	// (0x0009a95b) main_video3_pane_g

0xb86d,	// (0x00096af7) main_video3_pane_t1_ParamLimits

0xb86d,	// (0x00096af7) main_video3_pane_t1

0xb898,	// (0x00096b22) main_video3_pane_t2_ParamLimits

0xb898,	// (0x00096b22) main_video3_pane_t2

0xb8c5,	// (0x00096b4f) main_video3_pane_t3_ParamLimits

0xb8c5,	// (0x00096b4f) main_video3_pane_t3

0x0002,

0xf6d6,	// (0x0009a960) main_video3_pane_t_ParamLimits

0xf6d6,	// (0x0009a960) main_video3_pane_t

0xb8f2,	// (0x00096b7c) cams_zoom_vslider_pane_g1

0xb8fb,	// (0x00096b85) cams_zoom_vslider_pane_g2

0x0001,

0xf6dd,	// (0x0009a967) cams_zoom_vslider_pane_g

0xb903,	// (0x00096b8d) small_slider_vertical_pane

0xe776,	// (0x00099a00) small_slider_vertical_pane_g1

0xe776,	// (0x00099a00) small_slider_vertical_pane_g2

0xb90b,	// (0x00096b95) small_slider_vertical_pane_g3

0x0002,

0xf6e2,	// (0x0009a96c) small_slider_vertical_pane_g

0x9f80,	// (0x0009520a) main_hwr_training_pane

0xb914,	// (0x00096b9e) hwr_training_instruct_pane_ParamLimits

0xb914,	// (0x00096b9e) hwr_training_instruct_pane

0x5ba9,	// (0x00090e33) hwr_training_navi_pane_ParamLimits

0x5ba9,	// (0x00090e33) hwr_training_navi_pane

0x5bc8,	// (0x00090e52) hwr_training_write_pane_ParamLimits

0x5bc8,	// (0x00090e52) hwr_training_write_pane

0xddfa,	// (0x00099084) bg_frame_shadow_pane

0xb94b,	// (0x00096bd5) hwr_training_write_pane_g1

0xb953,	// (0x00096bdd) hwr_training_write_pane_g2

0xb95b,	// (0x00096be5) hwr_training_write_pane_g3

0xb963,	// (0x00096bed) hwr_training_write_pane_g4

0xb96b,	// (0x00096bf5) hwr_training_write_pane_g5

0xb973,	// (0x00096bfd) hwr_training_write_pane_g6

0xb97b,	// (0x00096c05) hwr_training_write_pane_g7

0x0006,

0xf6e9,	// (0x0009a973) hwr_training_write_pane_g

0xb983,	// (0x00096c0d) hwr_training_navi_pane_g1_ParamLimits

0xb983,	// (0x00096c0d) hwr_training_navi_pane_g1

0xb995,	// (0x00096c1f) hwr_training_navi_pane_g2_ParamLimits

0xb995,	// (0x00096c1f) hwr_training_navi_pane_g2

0xb9a7,	// (0x00096c31) hwr_training_navi_pane_g3_ParamLimits

0xb9a7,	// (0x00096c31) hwr_training_navi_pane_g3

0xb9b7,	// (0x00096c41) hwr_training_navi_pane_g4_ParamLimits

0xb9b7,	// (0x00096c41) hwr_training_navi_pane_g4

0x0004,

0xf6f8,	// (0x0009a982) hwr_training_navi_pane_g_ParamLimits

0xf6f8,	// (0x0009a982) hwr_training_navi_pane_g

0xb9c4,	// (0x00096c4e) hwr_training_navi_pane_t1

0x5c10,	// (0x00090e9a) list_single_hwr_training_instruct_pane_ParamLimits

0x5c10,	// (0x00090e9a) list_single_hwr_training_instruct_pane

0xb9d2,	// (0x00096c5c) list_single_hwr_training_instruct_pane_t1

0xb18c,	// (0x00096416) bg_frame_shadow_pane_g1

0xb9e1,	// (0x00096c6b) bg_frame_shadow_pane_g2

0xb9e9,	// (0x00096c73) bg_frame_shadow_pane_g3

0xb9f1,	// (0x00096c7b) bg_frame_shadow_pane_g4

0xb9f9,	// (0x00096c83) bg_frame_shadow_pane_g5

0xba01,	// (0x00096c8b) bg_frame_shadow_pane_g6

0xba09,	// (0x00096c93) bg_frame_shadow_pane_g7

0xe651,	// (0x000998db) bg_frame_shadow_pane_g8

0x0007,

0xf703,	// (0x0009a98d) bg_frame_shadow_pane_g

0x9f80,	// (0x0009520a) main_video_tele_dialer_pane

0x5c2c,	// (0x00090eb6) aid_size_cell_video_keypad_ParamLimits

0x5c2c,	// (0x00090eb6) aid_size_cell_video_keypad

0x5c46,	// (0x00090ed0) grid_video_dialer_keypad_pane_ParamLimits

0x5c46,	// (0x00090ed0) grid_video_dialer_keypad_pane

0x5c92,	// (0x00090f1c) video_down_pane_cp_ParamLimits

0x5c92,	// (0x00090f1c) video_down_pane_cp

0x5cc4,	// (0x00090f4e) cell_video_dialer_keypad_pane_ParamLimits

0x5cc4,	// (0x00090f4e) cell_video_dialer_keypad_pane

0xba11,	// (0x00096c9b) bg_button_pane_cp08_ParamLimits

0xba11,	// (0x00096c9b) bg_button_pane_cp08

0x5cea,	// (0x00090f74) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5cea,	// (0x00090f74) cell_video_dialer_keypad_pane_g1

0x55d4,	// (0x0009085e) mup3_rocker2_pane_ParamLimits

0x55d4,	// (0x0009085e) mup3_rocker2_pane

0xe776,	// (0x00099a00) mup3_rocker2_pane_g1

0x470d,	// (0x0008f997) main_dialer2_pane

0x9f80,	// (0x0009520a) main_mp4_pane

0xba3b,	// (0x00096cc5) main_mp4_pane_g1_ParamLimits

0xba3b,	// (0x00096cc5) main_mp4_pane_g1

0xba3b,	// (0x00096cc5) main_mp4_pane_g2_ParamLimits

0xba3b,	// (0x00096cc5) main_mp4_pane_g2

0x5d25,	// (0x00090faf) main_mp4_pane_g3_ParamLimits

0x5d25,	// (0x00090faf) main_mp4_pane_g3

0xba49,	// (0x00096cd3) main_mp4_pane_g4_ParamLimits

0xba49,	// (0x00096cd3) main_mp4_pane_g4

0xba77,	// (0x00096d01) main_mp4_pane_g5_ParamLimits

0xba77,	// (0x00096d01) main_mp4_pane_g5

0x0007,

0xf723,	// (0x0009a9ad) main_mp4_pane_g_ParamLimits

0xf723,	// (0x0009a9ad) main_mp4_pane_g

0xbaeb,	// (0x00096d75) main_mp4_pane_t1_ParamLimits

0xbaeb,	// (0x00096d75) main_mp4_pane_t1

0xbb47,	// (0x00096dd1) main_mp4_pane_t2_ParamLimits

0xbb47,	// (0x00096dd1) main_mp4_pane_t2

0xbb99,	// (0x00096e23) main_mp4_pane_t3_ParamLimits

0xbb99,	// (0x00096e23) main_mp4_pane_t3

0xbbbf,	// (0x00096e49) main_mp4_pane_t4_ParamLimits

0xbbbf,	// (0x00096e49) main_mp4_pane_t4

0x0003,

0xf734,	// (0x0009a9be) main_mp4_pane_t_ParamLimits

0xf734,	// (0x0009a9be) main_mp4_pane_t

0xdb0a,	// (0x00098d94) mp4_progress_pane_ParamLimits

0xdb0a,	// (0x00098d94) mp4_progress_pane

0xdb54,	// (0x00098dde) mp4_rocker_pane_ParamLimits

0xdb54,	// (0x00098dde) mp4_rocker_pane

0xbc07,	// (0x00096e91) mp4_progress_pane_t1

0xbc20,	// (0x00096eaa) mp4_progress_pane_t2

0x0001,

0xf73d,	// (0x0009a9c7) mp4_progress_pane_t

0xbc39,	// (0x00096ec3) mup_progress_pane_cp04

0xafa1,	// (0x0009622b) mp4_rocker_pane_g1

0x5d6f,	// (0x00090ff9) aid_cell_size_keypad2_ParamLimits

0x5d6f,	// (0x00090ff9) aid_cell_size_keypad2

0x5d85,	// (0x0009100f) dialer2_ne_pane_ParamLimits

0x5d85,	// (0x0009100f) dialer2_ne_pane

0x5d9d,	// (0x00091027) grid_dialer2_keypad_pane_ParamLimits

0x5d9d,	// (0x00091027) grid_dialer2_keypad_pane

0xb02c,	// (0x000962b6) bg_popup_call_pane_cp07_ParamLimits

0xb02c,	// (0x000962b6) bg_popup_call_pane_cp07

0x5db9,	// (0x00091043) dialer2_ne_pane_t1_ParamLimits

0x5db9,	// (0x00091043) dialer2_ne_pane_t1

0x5df9,	// (0x00091083) cell_dialer2_keypad_pane_ParamLimits

0x5df9,	// (0x00091083) cell_dialer2_keypad_pane

0xbc5e,	// (0x00096ee8) bg_button_pane_pane_cp04_ParamLimits

0xbc5e,	// (0x00096ee8) bg_button_pane_pane_cp04

0x5e1f,	// (0x000910a9) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e1f,	// (0x000910a9) cell_dialer2_keypad_pane_g1

0x1c71,	// (0x0008cefb) aid_placing_vt_set_content_ParamLimits

0x1c71,	// (0x0008cefb) aid_placing_vt_set_content

0x1c95,	// (0x0008cf1f) aid_placing_vt_set_title_ParamLimits

0x1c95,	// (0x0008cf1f) aid_placing_vt_set_title

0x9f80,	// (0x0009520a) main_image3_pane

0x5ee5,	// (0x0009116f) area_side_right_pane_cp01_ParamLimits

0x5ee5,	// (0x0009116f) area_side_right_pane_cp01

0xba3b,	// (0x00096cc5) main_image3_pane_g1_ParamLimits

0xba3b,	// (0x00096cc5) main_image3_pane_g1

0x5efe,	// (0x00091188) main_image3_pane_g2_ParamLimits

0x5efe,	// (0x00091188) main_image3_pane_g2

0x5f26,	// (0x000911b0) main_image3_pane_g3_ParamLimits

0x5f26,	// (0x000911b0) main_image3_pane_g3

0x5f50,	// (0x000911da) main_image3_pane_g4_ParamLimits

0x5f50,	// (0x000911da) main_image3_pane_g4

0x0003,

0xf74c,	// (0x0009a9d6) main_image3_pane_g_ParamLimits

0xf74c,	// (0x0009a9d6) main_image3_pane_g

0x5f7a,	// (0x00091204) main_image3_pane_t1_ParamLimits

0x5f7a,	// (0x00091204) main_image3_pane_t1

0x5fd2,	// (0x0009125c) main_image3_pane_t2_ParamLimits

0x5fd2,	// (0x0009125c) main_image3_pane_t2

0x6024,	// (0x000912ae) main_image3_pane_t3_ParamLimits

0x6024,	// (0x000912ae) main_image3_pane_t3

0x0003,

0xf755,	// (0x0009a9df) main_image3_pane_t_ParamLimits

0xf755,	// (0x0009a9df) main_image3_pane_t

0xe4c9,	// (0x00099753) grid_sctrl_middle_pane_cp01_ParamLimits

0xe4c9,	// (0x00099753) grid_sctrl_middle_pane_cp01

0x60ac,	// (0x00091336) cell_sctrl_middle_pane_cp01_ParamLimits

0x60ac,	// (0x00091336) cell_sctrl_middle_pane_cp01

0x60c9,	// (0x00091353) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60c9,	// (0x00091353) cell_sctrl_middle_pane_cp01_g1

0x9f80,	// (0x0009520a) main_call4_pane

0x60de,	// (0x00091368) aid_size_button_call4_ParamLimits

0x60de,	// (0x00091368) aid_size_button_call4

0x6111,	// (0x0009139b) call4_windows_pane_ParamLimits

0x6111,	// (0x0009139b) call4_windows_pane

0x6130,	// (0x000913ba) grid_call4_button_pane_ParamLimits

0x6130,	// (0x000913ba) grid_call4_button_pane

0x6167,	// (0x000913f1) call4_windows_conf_pane

0x6180,	// (0x0009140a) popup_call4_audio_first_window_ParamLimits

0x6180,	// (0x0009140a) popup_call4_audio_first_window

0x61d0,	// (0x0009145a) popup_call4_audio_second_window_ParamLimits

0x61d0,	// (0x0009145a) popup_call4_audio_second_window

0x61e9,	// (0x00091473) popup_call4_audio_wait_window_ParamLimits

0x61e9,	// (0x00091473) popup_call4_audio_wait_window

0x61f7,	// (0x00091481) cell_call4_button_pane_ParamLimits

0x61f7,	// (0x00091481) cell_call4_button_pane

0x621e,	// (0x000914a8) bg_button_pane_cp09_ParamLimits

0x621e,	// (0x000914a8) bg_button_pane_cp09

0x622a,	// (0x000914b4) cell_call4_button_pane_g1_ParamLimits

0x622a,	// (0x000914b4) cell_call4_button_pane_g1

0x6250,	// (0x000914da) cell_call4_button_pane_t1_ParamLimits

0x6250,	// (0x000914da) cell_call4_button_pane_t1

0xbc72,	// (0x00096efc) popup_call4_audio_conf_window_ParamLimits

0xbc72,	// (0x00096efc) popup_call4_audio_conf_window

0x5636,	// (0x000908c0) mup3_progress_pane_t1_ParamLimits

0x5655,	// (0x000908df) mup3_progress_pane_t2_ParamLimits

0xb4c6,	// (0x00096750) mup3_progress_pane_t3_ParamLimits

0xf62f,	// (0x0009a8b9) mup3_progress_pane_t_ParamLimits

0xb4e3,	// (0x0009676d) mup_progress_pane_cp03_ParamLimits

0x5b5f,	// (0x00090de9) mup3_control_keys_pane_g4_copy1

0xdb38,	// (0x00098dc2) mp4_rocker2_pane_ParamLimits

0xdb38,	// (0x00098dc2) mp4_rocker2_pane

0xbc8c,	// (0x00096f16) mp4_rocker2_pane_g1

0xbc94,	// (0x00096f1e) mp4_rocker2_pane_g2

0xdbda,	// (0x00098e64) mp4_rocker2_pane_g3

0xdbe2,	// (0x00098e6c) mp4_rocker2_pane_g4

0xdbea,	// (0x00098e74) mp4_rocker2_pane_g5

0x0004,

0xf75e,	// (0x0009a9e8) mp4_rocker2_pane_g

0x9f80,	// (0x0009520a) main_camera4_pane

0x9f80,	// (0x0009520a) main_video4_pane

0x5c60,	// (0x00090eea) main_video_tele_dialer_pane_t1_ParamLimits

0x5c60,	// (0x00090eea) main_video_tele_dialer_pane_t1

0x5c79,	// (0x00090f03) main_video_tele_dialer_pane_t2_ParamLimits

0x5c79,	// (0x00090f03) main_video_tele_dialer_pane_t2

0x0001,

0xf714,	// (0x0009a99e) main_video_tele_dialer_pane_t_ParamLimits

0xf714,	// (0x0009a99e) main_video_tele_dialer_pane_t

0x628e,	// (0x00091518) cam4_autofocus_pane_ParamLimits

0x628e,	// (0x00091518) cam4_autofocus_pane

0x62a4,	// (0x0009152e) cam4_image_uncrop_pane_ParamLimits

0x62a4,	// (0x0009152e) cam4_image_uncrop_pane

0x62bd,	// (0x00091547) cam4_indicators_pane_ParamLimits

0x62bd,	// (0x00091547) cam4_indicators_pane

0x62ed,	// (0x00091577) main_camera4_pane_g1_ParamLimits

0x62ed,	// (0x00091577) main_camera4_pane_g1

0x62ff,	// (0x00091589) main_camera4_pane_g2_ParamLimits

0x62ff,	// (0x00091589) main_camera4_pane_g2

0x6312,	// (0x0009159c) main_camera4_pane_g3_ParamLimits

0x6312,	// (0x0009159c) main_camera4_pane_g3

0x6325,	// (0x000915af) main_camera4_pane_g4_ParamLimits

0x6325,	// (0x000915af) main_camera4_pane_g4

0x6338,	// (0x000915c2) main_camera4_pane_g5_ParamLimits

0x6338,	// (0x000915c2) main_camera4_pane_g5

0x0005,

0xf769,	// (0x0009a9f3) main_camera4_pane_g_ParamLimits

0xf769,	// (0x0009a9f3) main_camera4_pane_g

0x635c,	// (0x000915e6) main_camera4_pane_t1_ParamLimits

0x635c,	// (0x000915e6) main_camera4_pane_t1

0xbcb0,	// (0x00096f3a) bg_tb_trans_pane_cp06

0xdc18,	// (0x00098ea2) cam4_indicators_pane_g1

0xdc29,	// (0x00098eb3) cam4_indicators_pane_g2

0x0002,

0xf784,	// (0x0009aa0e) cam4_indicators_pane_g

0xdc41,	// (0x00098ecb) cam4_indicators_pane_t1

0x63c0,	// (0x0009164a) main_video4_pane_g1_ParamLimits

0x63c0,	// (0x0009164a) main_video4_pane_g1

0x63cf,	// (0x00091659) main_video4_pane_g2_ParamLimits

0x63cf,	// (0x00091659) main_video4_pane_g2

0x63df,	// (0x00091669) main_video4_pane_g3_ParamLimits

0x63df,	// (0x00091669) main_video4_pane_g3

0x63ef,	// (0x00091679) main_video4_pane_g4_ParamLimits

0x63ef,	// (0x00091679) main_video4_pane_g4

0x0004,

0xf78b,	// (0x0009aa15) main_video4_pane_g_ParamLimits

0xf78b,	// (0x0009aa15) main_video4_pane_g

0x640f,	// (0x00091699) vid4_indicators_pane_ParamLimits

0x640f,	// (0x00091699) vid4_indicators_pane

0x6439,	// (0x000916c3) video4_image_uncrop_cif_pane_ParamLimits

0x6439,	// (0x000916c3) video4_image_uncrop_cif_pane

0x6453,	// (0x000916dd) video4_image_uncrop_nhd_pane_ParamLimits

0x6453,	// (0x000916dd) video4_image_uncrop_nhd_pane

0x62a4,	// (0x0009152e) video4_image_uncrop_vga_pane_ParamLimits

0x62a4,	// (0x0009152e) video4_image_uncrop_vga_pane

0x9f72,	// (0x000951fc) bg_tb_trans_pane_cp07

0xdc6f,	// (0x00098ef9) vid4_indicators_pane_g1

0xdc85,	// (0x00098f0f) vid4_indicators_pane_g2

0xdc99,	// (0x00098f23) vid4_indicators_pane_g3

0x0004,

0xf796,	// (0x0009aa20) vid4_indicators_pane_g

0xdcca,	// (0x00098f54) vid4_indicators_pane_t1

0x646a,	// (0x000916f4) cam4_autofocus_pane_g1

0x6472,	// (0x000916fc) cam4_autofocus_pane_g2

0x647a,	// (0x00091704) cam4_autofocus_pane_g3

0x0002,

0xf7a1,	// (0x0009aa2b) cam4_autofocus_pane_g

0x6482,	// (0x0009170c) cam4_autofocus_pane_g3_copy1

0x5ca8,	// (0x00090f32) video_down_pane_cp_t1

0x5cb6,	// (0x00090f40) video_down_pane_cp_t2

0x0001,

0xf719,	// (0x0009a9a3) video_down_pane_cp_t

0x9f72,	// (0x000951fc) popup_vitu2_window_ParamLimits

0x9f72,	// (0x000951fc) popup_vitu2_window

0x648a,	// (0x00091714) aid_size_cell2_itu2_ParamLimits

0x648a,	// (0x00091714) aid_size_cell2_itu2

0x64aa,	// (0x00091734) aid_size_cell_itu2_ParamLimits

0x64aa,	// (0x00091734) aid_size_cell_itu2

0x64f9,	// (0x00091783) bg_popup_window_pane_cp09_ParamLimits

0x64f9,	// (0x00091783) bg_popup_window_pane_cp09

0x6507,	// (0x00091791) field_vitu2_entry_pane_ParamLimits

0x6507,	// (0x00091791) field_vitu2_entry_pane

0x652c,	// (0x000917b6) grid_vitu2_function_pane_ParamLimits

0x652c,	// (0x000917b6) grid_vitu2_function_pane

0x6577,	// (0x00091801) grid_vitu2_itu_pane_ParamLimits

0x6577,	// (0x00091801) grid_vitu2_itu_pane

0x65ff,	// (0x00091889) cell_vitu2_itu_pane_ParamLimits

0x65ff,	// (0x00091889) cell_vitu2_itu_pane

0x662d,	// (0x000918b7) cell_vitu2_function_pane_ParamLimits

0x662d,	// (0x000918b7) cell_vitu2_function_pane

0xbcbe,	// (0x00096f48) bg_popup_call_pane_cp08_ParamLimits

0xbcbe,	// (0x00096f48) bg_popup_call_pane_cp08

0xbcd5,	// (0x00096f5f) field_vitu2_entry_pane_g1

0xbce1,	// (0x00096f6b) field_vitu2_entry_pane_g2

0x0002,

0xf7a8,	// (0x0009aa32) field_vitu2_entry_pane_g

0xbced,	// (0x00096f77) field_vitu2_entry_pane_t1_ParamLimits

0xbced,	// (0x00096f77) field_vitu2_entry_pane_t1

0xbd1c,	// (0x00096fa6) field_vitu2_entry_pane_t2_ParamLimits

0xbd1c,	// (0x00096fa6) field_vitu2_entry_pane_t2

0x0001,

0xf7af,	// (0x0009aa39) field_vitu2_entry_pane_t_ParamLimits

0xf7af,	// (0x0009aa39) field_vitu2_entry_pane_t

0x6671,	// (0x000918fb) bg_button_pane_cp010_ParamLimits

0x6671,	// (0x000918fb) bg_button_pane_cp010

0x667f,	// (0x00091909) cell_vitu2_itu_pane_g1

0x66a5,	// (0x0009192f) cell_vitu2_itu_pane_t1_ParamLimits

0x66a5,	// (0x0009192f) cell_vitu2_itu_pane_t1

0x0d6c,	// (0x0008bff6) cell_vitu2_itu_pane_t2_ParamLimits

0x0d6c,	// (0x0008bff6) cell_vitu2_itu_pane_t2

0x0002,

0xf7b9,	// (0x0009aa43) cell_vitu2_itu_pane_t_ParamLimits

0xf7b9,	// (0x0009aa43) cell_vitu2_itu_pane_t

0x9f72,	// (0x000951fc) bg_button_pane_cp011

0x6703,	// (0x0009198d) cell_vitu2_function_pane_g1

0x9f80,	// (0x0009520a) main_myfav_hc_pane

0x6074,	// (0x000912fe) popup_image3_note_pane_ParamLimits

0x6074,	// (0x000912fe) popup_image3_note_pane

0x6090,	// (0x0009131a) popup_image3_tool_bar_pane_ParamLimits

0x6090,	// (0x0009131a) popup_image3_tool_bar_pane

0x0dfa,	// (0x0008c084) cell_vitu2_itu_pane_t3_ParamLimits

0x0dfa,	// (0x0008c084) cell_vitu2_itu_pane_t3

0xddfa,	// (0x00099084) bg_popup_trans_pane

0xbd41,	// (0x00096fcb) grid_image3_tool_bar_pane

0xbd4b,	// (0x00096fd5) bg_popup_trans_pane_g1

0xe98b,	// (0x00099c15) bg_popup_trans_pane_g2

0xbd53,	// (0x00096fdd) bg_popup_trans_pane_g3

0xbd5b,	// (0x00096fe5) bg_popup_trans_pane_g4

0xbd63,	// (0x00096fed) bg_popup_trans_pane_g5

0xbd6b,	// (0x00096ff5) bg_popup_trans_pane_g6

0xbd73,	// (0x00096ffd) bg_popup_trans_pane_g7

0xbd7b,	// (0x00097005) bg_popup_trans_pane_g8

0xe96b,	// (0x00099bf5) bg_popup_trans_pane_g9

0x0008,

0xf7c0,	// (0x0009aa4a) bg_popup_trans_pane_g

0xbd83,	// (0x0009700d) cell_image3_tool_bar_pane_ParamLimits

0xbd83,	// (0x0009700d) cell_image3_tool_bar_pane

0xe776,	// (0x00099a00) cell_image3_tool_bar_pane_g1

0xddfa,	// (0x00099084) bg_popup_trans_pane_cp1

0xbd99,	// (0x00097023) popup_image3_note_pane_t1

0xbda7,	// (0x00097031) popup_image3_note_pane_t2

0xbdb5,	// (0x0009703f) popup_image3_note_pane_t3

0x0002,

0xf7d3,	// (0x0009aa5d) popup_image3_note_pane_t

0xbdc5,	// (0x0009704f) popup_image3_note_pane_t3_copy1

0x6717,	// (0x000919a1) bg_myfav_hc_instruction_pane_ParamLimits

0x6717,	// (0x000919a1) bg_myfav_hc_instruction_pane

0x672f,	// (0x000919b9) cell_myfav_contact_pane_ParamLimits

0x672f,	// (0x000919b9) cell_myfav_contact_pane

0x674b,	// (0x000919d5) cell_myfav_contact_pane_cp1_ParamLimits

0x674b,	// (0x000919d5) cell_myfav_contact_pane_cp1

0x6763,	// (0x000919ed) cell_myfav_contact_pane_cp2_ParamLimits

0x6763,	// (0x000919ed) cell_myfav_contact_pane_cp2

0x677b,	// (0x00091a05) cell_myfav_contact_pane_cp3_ParamLimits

0x677b,	// (0x00091a05) cell_myfav_contact_pane_cp3

0x6792,	// (0x00091a1c) cell_myfav_contact_pane_cp4_ParamLimits

0x6792,	// (0x00091a1c) cell_myfav_contact_pane_cp4

0x67aa,	// (0x00091a34) cell_myfav_contact_pane_cp5_ParamLimits

0x67aa,	// (0x00091a34) cell_myfav_contact_pane_cp5

0x67be,	// (0x00091a48) cell_myfav_contact_pane_cp6_ParamLimits

0x67be,	// (0x00091a48) cell_myfav_contact_pane_cp6

0x67d4,	// (0x00091a5e) cell_myfav_contact_pane_cp7_ParamLimits

0x67d4,	// (0x00091a5e) cell_myfav_contact_pane_cp7

0xbdd3,	// (0x0009705d) listscroll_gen_pane_cp05

0x67ec,	// (0x00091a76) main_myfav_hc_pane_g1_ParamLimits

0x67ec,	// (0x00091a76) main_myfav_hc_pane_g1

0x6806,	// (0x00091a90) main_myfav_hc_pane_g2_ParamLimits

0x6806,	// (0x00091a90) main_myfav_hc_pane_g2

0x0002,

0xf7da,	// (0x0009aa64) main_myfav_hc_pane_g_ParamLimits

0xf7da,	// (0x0009aa64) main_myfav_hc_pane_g

0x683a,	// (0x00091ac4) main_myfav_hc_pane_t1_ParamLimits

0x683a,	// (0x00091ac4) main_myfav_hc_pane_t1

0xbddc,	// (0x00097066) main_myfav_hc_pane_t2_ParamLimits

0xbddc,	// (0x00097066) main_myfav_hc_pane_t2

0xbdee,	// (0x00097078) main_myfav_hc_pane_t3_ParamLimits

0xbdee,	// (0x00097078) main_myfav_hc_pane_t3

0x6851,	// (0x00091adb) main_myfav_hc_pane_t4_ParamLimits

0x6851,	// (0x00091adb) main_myfav_hc_pane_t4

0x0004,

0xf7e1,	// (0x0009aa6b) main_myfav_hc_pane_t_ParamLimits

0xf7e1,	// (0x0009aa6b) main_myfav_hc_pane_t

0xe776,	// (0x00099a00) bg_myfav_hc_instruction_pane_g1

0xbe00,	// (0x0009708a) cell_myfav_contact_pane_g1_ParamLimits

0xbe00,	// (0x0009708a) cell_myfav_contact_pane_g1

0xbe00,	// (0x0009708a) cell_myfav_contact_pane_g2_ParamLimits

0xbe00,	// (0x0009708a) cell_myfav_contact_pane_g2

0xbe0c,	// (0x00097096) cell_myfav_contact_pane_g3_ParamLimits

0xbe0c,	// (0x00097096) cell_myfav_contact_pane_g3

0xe53e,	// (0x000997c8) cell_myfav_contact_pane_g4_ParamLimits

0xe53e,	// (0x000997c8) cell_myfav_contact_pane_g4

0xbe19,	// (0x000970a3) cell_myfav_contact_pane_g5_ParamLimits

0xbe19,	// (0x000970a3) cell_myfav_contact_pane_g5

0x0004,

0xf7ec,	// (0x0009aa76) cell_myfav_contact_pane_g_ParamLimits

0xf7ec,	// (0x0009aa76) cell_myfav_contact_pane_g

0x6820,	// (0x00091aaa) main_myfav_hc_pane_g3_ParamLimits

0x6820,	// (0x00091aaa) main_myfav_hc_pane_g3

0x0fcf,	// (0x0008c259) popup_adpt_find_window

0x687b,	// (0x00091b05) afind_page_pane_ParamLimits

0x687b,	// (0x00091b05) afind_page_pane

0x6890,	// (0x00091b1a) aid_size_cell_afind_ParamLimits

0x6890,	// (0x00091b1a) aid_size_cell_afind

0x68ae,	// (0x00091b38) bg_popup_sub_pane_cp09_ParamLimits

0x68ae,	// (0x00091b38) bg_popup_sub_pane_cp09

0x68bb,	// (0x00091b45) find_pane_cp01_ParamLimits

0x68bb,	// (0x00091b45) find_pane_cp01

0xbe25,	// (0x000970af) grid_afind_control_pane_ParamLimits

0xbe25,	// (0x000970af) grid_afind_control_pane

0x68c8,	// (0x00091b52) grid_afind_pane_ParamLimits

0x68c8,	// (0x00091b52) grid_afind_pane

0x68ea,	// (0x00091b74) cell_afind_pane_ParamLimits

0x68ea,	// (0x00091b74) cell_afind_pane

0xe776,	// (0x00099a00) afind_page_pane_g1

0x6957,	// (0x00091be1) afind_page_pane_g2

0x6960,	// (0x00091bea) afind_page_pane_g3

0x0002,

0xf7f7,	// (0x0009aa81) afind_page_pane_g

0x6969,	// (0x00091bf3) afind_page_pane_t1

0xbe39,	// (0x000970c3) cell_afind_grid_control_pane_ParamLimits

0xbe39,	// (0x000970c3) cell_afind_grid_control_pane

0xbc5e,	// (0x00096ee8) bg_button_pane_cp69_ParamLimits

0xbc5e,	// (0x00096ee8) bg_button_pane_cp69

0x6989,	// (0x00091c13) cell_afind_pane_g1_ParamLimits

0x6989,	// (0x00091c13) cell_afind_pane_g1

0x6996,	// (0x00091c20) cell_afind_pane_t1_ParamLimits

0x6996,	// (0x00091c20) cell_afind_pane_t1

0xe780,	// (0x00099a0a) bg_button_pane_cp72

0xbe48,	// (0x000970d2) cell_afind_grid_control_pane_g1

0x3e7c,	// (0x0008f106) aid_image_placing_area_ParamLimits

0x3e7c,	// (0x0008f106) aid_image_placing_area

0xe530,	// (0x000997ba) field_vitu_entry_pane_g1_ParamLimits

0xe530,	// (0x000997ba) field_vitu_entry_pane_g1

0xe530,	// (0x000997ba) field_vitu_entry_pane_g2_ParamLimits

0xe530,	// (0x000997ba) field_vitu_entry_pane_g2

0x0001,

0x00c0,	// (0x0008b34a) field_vitu_entry_pane_g_ParamLimits

0x00c0,	// (0x0008b34a) field_vitu_entry_pane_g

0xb7e3,	// (0x00096a6d) cell_vitu_itu_pane_g1_ParamLimits

0xb7c6,	// (0x00096a50) cell_vitu_itu_pane_t3_ParamLimits

0xb7c6,	// (0x00096a50) cell_vitu_itu_pane_t3

0xbc07,	// (0x00096e91) mp4_progress_pane_t1_ParamLimits

0xbc20,	// (0x00096eaa) mp4_progress_pane_t2_ParamLimits

0xf73d,	// (0x0009a9c7) mp4_progress_pane_t_ParamLimits

0xbc39,	// (0x00096ec3) mup_progress_pane_cp04_ParamLimits

0x6865,	// (0x00091aef) main_myfav_hc_pane_t5_ParamLimits

0x6865,	// (0x00091aef) main_myfav_hc_pane_t5

0x9f1b,	// (0x000951a5) aid_zoom_text_primary

0x0fcf,	// (0x0008c259) popup_adpt_find_window_ParamLimits

0x9f72,	// (0x000951fc) main_cam_set_pane

0x62d6,	// (0x00091560) cam4_zoom_pane_ParamLimits

0x62d6,	// (0x00091560) cam4_zoom_pane

0x69a8,	// (0x00091c32) main_cam_set_pane_g1_ParamLimits

0x69a8,	// (0x00091c32) main_cam_set_pane_g1

0x69b6,	// (0x00091c40) main_cam_set_pane_g2_ParamLimits

0x69b6,	// (0x00091c40) main_cam_set_pane_g2

0x0001,

0xf7fe,	// (0x0009aa88) main_cam_set_pane_g_ParamLimits

0xf7fe,	// (0x0009aa88) main_cam_set_pane_g

0x69d7,	// (0x00091c61) main_cam_set_pane_t1_ParamLimits

0x69d7,	// (0x00091c61) main_cam_set_pane_t1

0x69f2,	// (0x00091c7c) main_cset_listscroll_pane_ParamLimits

0x69f2,	// (0x00091c7c) main_cset_listscroll_pane

0x6a1a,	// (0x00091ca4) main_cset_slider_pane_ParamLimits

0x6a1a,	// (0x00091ca4) main_cset_slider_pane

0xbe59,	// (0x000970e3) main_cset_list_pane_ParamLimits

0xbe59,	// (0x000970e3) main_cset_list_pane

0xbe69,	// (0x000970f3) scroll_pane_cp028

0x6a44,	// (0x00091cce) aid_area_touch_slider

0x6a60,	// (0x00091cea) cset_slider_pane

0x6a83,	// (0x00091d0d) main_cset_slider_pane_g1

0x6a98,	// (0x00091d22) main_cset_slider_pane_g2

0x0011,

0xf803,	// (0x0009aa8d) main_cset_slider_pane_g

0xbea2,	// (0x0009712c) main_cset_slider_pane_t1

0x6b5a,	// (0x00091de4) main_cset_slider_pane_t2

0x6b74,	// (0x00091dfe) main_cset_slider_pane_t3

0x6b8e,	// (0x00091e18) main_cset_slider_pane_t4

0x6ba8,	// (0x00091e32) main_cset_slider_pane_t5

0x6bc6,	// (0x00091e50) main_cset_slider_pane_t6

0x6bdd,	// (0x00091e67) main_cset_slider_pane_t7

0x000e,

0xf828,	// (0x0009aab2) main_cset_slider_pane_t

0x6ce9,	// (0x00091f73) cset_list_set_pane_ParamLimits

0x6ce9,	// (0x00091f73) cset_list_set_pane

0xbf3c,	// (0x000971c6) aid_position_infowindow_above

0xbf44,	// (0x000971ce) aid_position_infowindow_below

0x6cfd,	// (0x00091f87) cset_list_set_pane_g1_ParamLimits

0x6cfd,	// (0x00091f87) cset_list_set_pane_g1

0x6d09,	// (0x00091f93) cset_list_set_pane_g3_ParamLimits

0x6d09,	// (0x00091f93) cset_list_set_pane_g3

0x0001,

0xf847,	// (0x0009aad1) cset_list_set_pane_g_ParamLimits

0xf847,	// (0x0009aad1) cset_list_set_pane_g

0x6d18,	// (0x00091fa2) cset_list_set_pane_t1_ParamLimits

0x6d18,	// (0x00091fa2) cset_list_set_pane_t1

0xe4c9,	// (0x00099753) list_highlight_pane_cp021_ParamLimits

0xe4c9,	// (0x00099753) list_highlight_pane_cp021

0x35d5,	// (0x0008e85f) cset_slider_pane_g1

0x35e7,	// (0x0008e871) cset_slider_pane_g2

0x35de,	// (0x0008e868) cset_slider_pane_g3

0x0002,

0xf84c,	// (0x0009aad6) cset_slider_pane_g

0xee44,	// (0x0009a0ce) aid_area_touch_cam4_zoom

0x6d2d,	// (0x00091fb7) cam4_zoom_cont_pane

0x6d35,	// (0x00091fbf) cam4_zoom_pane_g1

0x6d3d,	// (0x00091fc7) cam4_zoom_pane_g2

0x6d45,	// (0x00091fcf) cam4_zoom_pane_g3

0x0002,

0xf853,	// (0x0009aadd) cam4_zoom_pane_g

0xdce1,	// (0x00098f6b) cam4_zoom_cont_pane_g1

0xdcea,	// (0x00098f74) cam4_zoom_cont_pane_g2

0xdcf3,	// (0x00098f7d) cam4_zoom_cont_pane_g3

0x0002,

0xf85a,	// (0x0009aae4) cam4_zoom_cont_pane_g

0x60fc,	// (0x00091386) call4_image_pane_ParamLimits

0x60fc,	// (0x00091386) call4_image_pane

0x6167,	// (0x000913f1) call4_windows_conf_pane_ParamLimits

0x61ae,	// (0x00091438) popup_call4_audio_in_window_ParamLimits

0x61ae,	// (0x00091438) popup_call4_audio_in_window

0xddfa,	// (0x00099084) bg_popup_call2_act_pane_cp02

0xbc6a,	// (0x00096ef4) call4_list_conf_pane

0xe776,	// (0x00099a00) call4_image_pane_g1

0xe776,	// (0x00099a00) call4_image_pane_g2

0x0001,

0xf30d,	// (0x0009a597) call4_image_pane_g

0xbf4c,	// (0x000971d6) list_single_graphic_popup_conf4_pane_ParamLimits

0xbf4c,	// (0x000971d6) list_single_graphic_popup_conf4_pane

0xddfa,	// (0x00099084) list_highlight_pane_cp022

0xbf61,	// (0x000971eb) list_single_graphic_popup_conf4_pane_g1

0xee9d,	// (0x0009a127) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf861,	// (0x0009aaeb) list_single_graphic_popup_conf4_pane_g

0xbf69,	// (0x000971f3) list_single_graphic_popup_conf4_pane_t1

0x1dac,	// (0x0008d036) popup_vtel_slider_window_ParamLimits

0x1dac,	// (0x0008d036) popup_vtel_slider_window

0xbc4c,	// (0x00096ed6) dialer2_ne_pane_t2_ParamLimits

0xbc4c,	// (0x00096ed6) dialer2_ne_pane_t2

0x0001,

0xf742,	// (0x0009a9cc) dialer2_ne_pane_t_ParamLimits

0xf742,	// (0x0009a9cc) dialer2_ne_pane_t

0xb02c,	// (0x000962b6) bg_popup_sub_pane_cp010_ParamLimits

0xb02c,	// (0x000962b6) bg_popup_sub_pane_cp010

0x6d4d,	// (0x00091fd7) popup_vtel_slider_window_g1_ParamLimits

0x6d4d,	// (0x00091fd7) popup_vtel_slider_window_g1

0x6d60,	// (0x00091fea) popup_vtel_slider_window_g2_ParamLimits

0x6d60,	// (0x00091fea) popup_vtel_slider_window_g2

0x0003,

0xf866,	// (0x0009aaf0) popup_vtel_slider_window_g_ParamLimits

0xf866,	// (0x0009aaf0) popup_vtel_slider_window_g

0x6db6,	// (0x00092040) vtel_slider_pane_ParamLimits

0x6db6,	// (0x00092040) vtel_slider_pane

0x6dd8,	// (0x00092062) vtel_slider_pane_g1_ParamLimits

0x6dd8,	// (0x00092062) vtel_slider_pane_g1

0x6dec,	// (0x00092076) vtel_slider_pane_g2_ParamLimits

0x6dec,	// (0x00092076) vtel_slider_pane_g2

0x6e04,	// (0x0009208e) vtel_slider_pane_g3_ParamLimits

0x6e04,	// (0x0009208e) vtel_slider_pane_g3

0x6dd8,	// (0x00092062) vtel_slider_pane_g4_ParamLimits

0x6dd8,	// (0x00092062) vtel_slider_pane_g4

0x6e1a,	// (0x000920a4) vtel_slider_pane_g5_ParamLimits

0x6e1a,	// (0x000920a4) vtel_slider_pane_g5

0x0004,

0xf86f,	// (0x0009aaf9) vtel_slider_pane_g_ParamLimits

0xf86f,	// (0x0009aaf9) vtel_slider_pane_g

0x9f72,	// (0x000951fc) main_gallery2_pane

0x64ca,	// (0x00091754) aid_size_row_itut2_dropdow_list_ParamLimits

0x64ca,	// (0x00091754) aid_size_row_itut2_dropdow_list

0x6551,	// (0x000917db) grid_vitu2_function_top_pane_ParamLimits

0x6551,	// (0x000917db) grid_vitu2_function_top_pane

0x65ad,	// (0x00091837) popup_vitu2_dropdown_list_window_ParamLimits

0x65ad,	// (0x00091837) popup_vitu2_dropdown_list_window

0x65d3,	// (0x0009185d) popup_vitu2_match_list_window

0x6e30,	// (0x000920ba) cell_vitu2_function_top_pane_ParamLimits

0x6e30,	// (0x000920ba) cell_vitu2_function_top_pane

0x6e4a,	// (0x000920d4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e4a,	// (0x000920d4) cell_vitu2_function_top_pane_cp01

0x6e66,	// (0x000920f0) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e66,	// (0x000920f0) cell_vitu2_function_top_wide_pane

0x9f72,	// (0x000951fc) bg_button_pane_cp012

0x6e84,	// (0x0009210e) cell_vitu2_function_top_pane_g1

0xdcfc,	// (0x00098f86) bg_button_pane_cp013_ParamLimits

0xdcfc,	// (0x00098f86) bg_button_pane_cp013

0x6e98,	// (0x00092122) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e98,	// (0x00092122) cell_vitu2_function_top_wide_pane_g1

0x9f72,	// (0x000951fc) bg_popup_sub_pane_cp20

0x6eb0,	// (0x0009213a) list_vitu2_match_list_pane

0xbd4b,	// (0x00096fd5) bg_popup_sub_pane_cp20_g1

0xbd53,	// (0x00096fdd) bg_popup_sub_pane_cp20_g2

0xe98b,	// (0x00099c15) bg_popup_sub_pane_cp20_g3

0xbd5b,	// (0x00096fe5) bg_popup_sub_pane_cp20_g4

0xe96b,	// (0x00099bf5) bg_popup_sub_pane_cp20_g5

0xbf7f,	// (0x00097209) bg_popup_sub_pane_cp20_g6

0xbd6b,	// (0x00096ff5) bg_popup_sub_pane_cp20_g7

0xbd73,	// (0x00096ffd) bg_popup_sub_pane_cp20_g8

0xbd7b,	// (0x00097005) bg_popup_sub_pane_cp20_g9

0x0008,

0xf87a,	// (0x0009ab04) bg_popup_sub_pane_cp20_g

0xdd18,	// (0x00098fa2) list_vitu2_match_list_item_pane_ParamLimits

0xdd18,	// (0x00098fa2) list_vitu2_match_list_item_pane

0xdd2a,	// (0x00098fb4) list_vitu2_match_list_item_pane_t1

0x9f80,	// (0x0009520a) bg_popup_sub_pane_cp21

0xe740,	// (0x000999ca) grid_vitu2_dropdown_list_pane

0x6ec8,	// (0x00092152) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ec8,	// (0x00092152) cell_vitu2_dropdown_list_char_pane

0x6eeb,	// (0x00092175) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6eeb,	// (0x00092175) cell_vitu2_dropdown_list_ctrl_pane

0xbf87,	// (0x00097211) cell_vitu2_dropdown_list_char_pane_g1

0xbf90,	// (0x0009721a) cell_vitu2_dropdown_list_char_pane_g2

0xbf99,	// (0x00097223) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf88d,	// (0x0009ab17) cell_vitu2_dropdown_list_char_pane_g

0x6f17,	// (0x000921a1) cell_vitu2_dropdown_list_char_pane_t1

0x6f25,	// (0x000921af) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f25,	// (0x000921af) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f35,	// (0x000921bf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f35,	// (0x000921bf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f46,	// (0x000921d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f46,	// (0x000921d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f56,	// (0x000921e0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f56,	// (0x000921e0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbcb0,	// (0x00096f3a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbcb0,	// (0x00096f3a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf894,	// (0x0009ab1e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf894,	// (0x0009ab1e) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f72,	// (0x000921fc) aid_size_cell_gallery2_ParamLimits

0x6f72,	// (0x000921fc) aid_size_cell_gallery2

0x6f90,	// (0x0009221a) grid_gallery2_pane_ParamLimits

0x6f90,	// (0x0009221a) grid_gallery2_pane

0x6faa,	// (0x00092234) scroll_pane_cp029_ParamLimits

0x6faa,	// (0x00092234) scroll_pane_cp029

0x6fbb,	// (0x00092245) cell_gallery2_pane_ParamLimits

0x6fbb,	// (0x00092245) cell_gallery2_pane

0xbfa2,	// (0x0009722c) cell_gallery2_pane_g2

0x701f,	// (0x000922a9) cell_gallery2_pane_g3

0xbfaa,	// (0x00097234) cell_gallery2_pane_g4

0xbfb2,	// (0x0009723c) cell_gallery2_pane_g5

0xe740,	// (0x000999ca) grid_highlight_pane_cp10

0x65d3,	// (0x0009185d) popup_vitu2_match_list_window_ParamLimits

0x65ea,	// (0x00091874) popup_vitu2_query_window_ParamLimits

0x65ea,	// (0x00091874) popup_vitu2_query_window

0x9f80,	// (0x0009520a) bg_vitu2_candi_button_pane

0xbf87,	// (0x00097211) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbf90,	// (0x0009721a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbf99,	// (0x00097223) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7027,	// (0x000922b1) bg_button_pane_cp015

0x703b,	// (0x000922c5) bg_button_pane_cp016

0x704e,	// (0x000922d8) bg_button_pane_cp017

0x3356,	// (0x0008e5e0) bg_popup_sub_pane_cp22

0xbfba,	// (0x00097244) popup_vitu2_query_window_g1

0x7093,	// (0x0009231d) popup_vitu2_query_window_g2

0x0002,

0xf89f,	// (0x0009ab29) popup_vitu2_query_window_g

0x70b2,	// (0x0009233c) popup_vitu2_query_window_t1_ParamLimits

0x70b2,	// (0x0009233c) popup_vitu2_query_window_t1

0x70e7,	// (0x00092371) popup_vitu2_query_window_t2_ParamLimits

0x70e7,	// (0x00092371) popup_vitu2_query_window_t2

0x70f9,	// (0x00092383) popup_vitu2_query_window_t3_ParamLimits

0x70f9,	// (0x00092383) popup_vitu2_query_window_t3

0x7121,	// (0x000923ab) popup_vitu2_query_window_t4_ParamLimits

0x7121,	// (0x000923ab) popup_vitu2_query_window_t4

0x7142,	// (0x000923cc) popup_vitu2_query_window_t5_ParamLimits

0x7142,	// (0x000923cc) popup_vitu2_query_window_t5

0x0006,

0xf8a6,	// (0x0009ab30) popup_vitu2_query_window_t_ParamLimits

0xf8a6,	// (0x0009ab30) popup_vitu2_query_window_t

0xbe51,	// (0x000970db) main_cset_text_pane

0x6a44,	// (0x00091cce) aid_area_touch_slider_ParamLimits

0x6a60,	// (0x00091cea) cset_slider_pane_ParamLimits

0x6a83,	// (0x00091d0d) main_cset_slider_pane_g1_ParamLimits

0x6a98,	// (0x00091d22) main_cset_slider_pane_g2_ParamLimits

0xbe72,	// (0x000970fc) main_cset_slider_pane_g3_ParamLimits

0xbe72,	// (0x000970fc) main_cset_slider_pane_g3

0x6aad,	// (0x00091d37) main_cset_slider_pane_g4_ParamLimits

0x6aad,	// (0x00091d37) main_cset_slider_pane_g4

0x6abc,	// (0x00091d46) main_cset_slider_pane_g5_ParamLimits

0x6abc,	// (0x00091d46) main_cset_slider_pane_g5

0x6aca,	// (0x00091d54) main_cset_slider_pane_g6_ParamLimits

0x6aca,	// (0x00091d54) main_cset_slider_pane_g6

0xf803,	// (0x0009aa8d) main_cset_slider_pane_g_ParamLimits

0xbea2,	// (0x0009712c) main_cset_slider_pane_t1_ParamLimits

0x6b5a,	// (0x00091de4) main_cset_slider_pane_t2_ParamLimits

0x6b74,	// (0x00091dfe) main_cset_slider_pane_t3_ParamLimits

0x6b8e,	// (0x00091e18) main_cset_slider_pane_t4_ParamLimits

0x6ba8,	// (0x00091e32) main_cset_slider_pane_t5_ParamLimits

0x6bc6,	// (0x00091e50) main_cset_slider_pane_t6_ParamLimits

0x6bdd,	// (0x00091e67) main_cset_slider_pane_t7_ParamLimits

0x6c0b,	// (0x00091e95) main_cset_slider_pane_t8_ParamLimits

0x6c0b,	// (0x00091e95) main_cset_slider_pane_t8

0x6c33,	// (0x00091ebd) main_cset_slider_pane_t9_ParamLimits

0x6c33,	// (0x00091ebd) main_cset_slider_pane_t9

0x6c5b,	// (0x00091ee5) main_cset_slider_pane_t10_ParamLimits

0x6c5b,	// (0x00091ee5) main_cset_slider_pane_t10

0x6c83,	// (0x00091f0d) main_cset_slider_pane_t11_ParamLimits

0x6c83,	// (0x00091f0d) main_cset_slider_pane_t11

0x6cad,	// (0x00091f37) main_cset_slider_pane_t12_ParamLimits

0x6cad,	// (0x00091f37) main_cset_slider_pane_t12

0x6cca,	// (0x00091f54) main_cset_slider_pane_t13_ParamLimits

0x6cca,	// (0x00091f54) main_cset_slider_pane_t13

0xf828,	// (0x0009aab2) main_cset_slider_pane_t_ParamLimits

0xddfa,	// (0x00099084) bg_popup_sub_pane_cp011

0xbfc6,	// (0x00097250) main_cset_text_pane_g1

0xbfce,	// (0x00097258) main_cset_text_pane_t1

0xbfdc,	// (0x00097266) main_cset_text_pane_t2

0xbfea,	// (0x00097274) main_cset_text_pane_t3

0xbff8,	// (0x00097282) main_cset_text_pane_t4

0xc006,	// (0x00097290) main_cset_text_pane_t5

0xc014,	// (0x0009729e) main_cset_text_pane_t6

0xc022,	// (0x000972ac) main_cset_text_pane_t7

0x0006,

0xf8b5,	// (0x0009ab3f) main_cset_text_pane_t

0x9f80,	// (0x0009520a) main_cam4_burst_pane

0x9f80,	// (0x0009520a) main_cam5_pane

0x6977,	// (0x00091c01) bg_button_pane_cp019

0x6980,	// (0x00091c0a) bg_button_pane_cp020

0xbe7e,	// (0x00097108) main_cset_slider_pane_g7_ParamLimits

0xbe7e,	// (0x00097108) main_cset_slider_pane_g7

0xbe8a,	// (0x00097114) main_cset_slider_pane_g8_ParamLimits

0xbe8a,	// (0x00097114) main_cset_slider_pane_g8

0x6ade,	// (0x00091d68) main_cset_slider_pane_g9_ParamLimits

0x6ade,	// (0x00091d68) main_cset_slider_pane_g9

0x6aea,	// (0x00091d74) main_cset_slider_pane_g10_ParamLimits

0x6aea,	// (0x00091d74) main_cset_slider_pane_g10

0x6af6,	// (0x00091d80) main_cset_slider_pane_g11_ParamLimits

0x6af6,	// (0x00091d80) main_cset_slider_pane_g11

0x6b02,	// (0x00091d8c) main_cset_slider_pane_g12_ParamLimits

0x6b02,	// (0x00091d8c) main_cset_slider_pane_g12

0x6b0e,	// (0x00091d98) main_cset_slider_pane_g13_ParamLimits

0x6b0e,	// (0x00091d98) main_cset_slider_pane_g13

0x6b1a,	// (0x00091da4) main_cset_slider_pane_g14_ParamLimits

0x6b1a,	// (0x00091da4) main_cset_slider_pane_g14

0x6b26,	// (0x00091db0) main_cset_slider_pane_g15_ParamLimits

0x6b26,	// (0x00091db0) main_cset_slider_pane_g15

0xbeca,	// (0x00097154) main_cset_slider_pane_t14_ParamLimits

0xbeca,	// (0x00097154) main_cset_slider_pane_t14

0xbf03,	// (0x0009718d) main_cset_slider_pane_t15_ParamLimits

0xbf03,	// (0x0009718d) main_cset_slider_pane_t15

0x71b9,	// (0x00092443) aid_cam4_burst_size_cell_ParamLimits

0x71b9,	// (0x00092443) aid_cam4_burst_size_cell

0x71d9,	// (0x00092463) grid_cam4_burst_pane_ParamLimits

0x71d9,	// (0x00092463) grid_cam4_burst_pane

0x7213,	// (0x0009249d) linegrid_cam4_burst_pane_ParamLimits

0x7213,	// (0x0009249d) linegrid_cam4_burst_pane

0xc030,	// (0x000972ba) scroll_pane_cp30_ParamLimits

0xc030,	// (0x000972ba) scroll_pane_cp30

0x7235,	// (0x000924bf) cell_cam4_burst_pane_ParamLimits

0x7235,	// (0x000924bf) cell_cam4_burst_pane

0xc03c,	// (0x000972c6) linegrid_cam4_burst_pane_g1_ParamLimits

0xc03c,	// (0x000972c6) linegrid_cam4_burst_pane_g1

0x728a,	// (0x00092514) linegrid_cam4_burst_pane_g2_ParamLimits

0x728a,	// (0x00092514) linegrid_cam4_burst_pane_g2

0xc049,	// (0x000972d3) linegrid_cam4_burst_pane_g3_ParamLimits

0xc049,	// (0x000972d3) linegrid_cam4_burst_pane_g3

0x0002,

0xf8c4,	// (0x0009ab4e) linegrid_cam4_burst_pane_g_ParamLimits

0xf8c4,	// (0x0009ab4e) linegrid_cam4_burst_pane_g

0x729b,	// (0x00092525) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x729b,	// (0x00092525) linegrid_cam4_burst_pane_g3_copy1

0xc056,	// (0x000972e0) linegrid_cam4_burst_pane_g4_ParamLimits

0xc056,	// (0x000972e0) linegrid_cam4_burst_pane_g4

0x72b9,	// (0x00092543) linegrid_cam4_burst_pane_g5_ParamLimits

0x72b9,	// (0x00092543) linegrid_cam4_burst_pane_g5

0x72ca,	// (0x00092554) linegrid_cam4_burst_pane_g6_ParamLimits

0x72ca,	// (0x00092554) linegrid_cam4_burst_pane_g6

0xc063,	// (0x000972ed) linegrid_cam4_burst_pane_g7_ParamLimits

0xc063,	// (0x000972ed) linegrid_cam4_burst_pane_g7

0x72e1,	// (0x0009256b) cell_cam4_burst_pane_g1

0xc07c,	// (0x00097306) main_cam5_pane_t1_ParamLimits

0xc07c,	// (0x00097306) main_cam5_pane_t1

0xc08e,	// (0x00097318) main_cam5_pane_t2_ParamLimits

0xc08e,	// (0x00097318) main_cam5_pane_t2

0xc0a0,	// (0x0009732a) main_cam5_pane_t3_ParamLimits

0xc0a0,	// (0x0009732a) main_cam5_pane_t3

0xc0b2,	// (0x0009733c) main_cam5_pane_t4_ParamLimits

0xc0b2,	// (0x0009733c) main_cam5_pane_t4

0xc0ca,	// (0x00097354) main_cam5_pane_t5_ParamLimits

0xc0ca,	// (0x00097354) main_cam5_pane_t5

0xc0de,	// (0x00097368) main_cam5_pane_t6_ParamLimits

0xc0de,	// (0x00097368) main_cam5_pane_t6

0xc0f2,	// (0x0009737c) main_cam5_pane_t7_ParamLimits

0xc0f2,	// (0x0009737c) main_cam5_pane_t7

0xc104,	// (0x0009738e) main_cam5_pane_t8_ParamLimits

0xc104,	// (0x0009738e) main_cam5_pane_t8

0xc122,	// (0x000973ac) main_cam5_pane_t9_ParamLimits

0xc122,	// (0x000973ac) main_cam5_pane_t9

0xc134,	// (0x000973be) main_cam5_pane_t10_ParamLimits

0xc134,	// (0x000973be) main_cam5_pane_t10

0xc146,	// (0x000973d0) main_cam5_pane_t11_ParamLimits

0xc146,	// (0x000973d0) main_cam5_pane_t11

0xc15a,	// (0x000973e4) main_cam5_pane_t12_ParamLimits

0xc15a,	// (0x000973e4) main_cam5_pane_t12

0xc171,	// (0x000973fb) main_cam5_pane_t13_ParamLimits

0xc171,	// (0x000973fb) main_cam5_pane_t13

0x000c,

0xf8d0,	// (0x0009ab5a) main_cam5_pane_t_ParamLimits

0xf8d0,	// (0x0009ab5a) main_cam5_pane_t

0x1050,	// (0x0008c2da) popup_scut_keymap_window_ParamLimits

0x1050,	// (0x0008c2da) popup_scut_keymap_window

0x72f4,	// (0x0009257e) aid_size_cell_brow_shortcut

0xe740,	// (0x000999ca) bg_popup_window_pane_cp010

0x7300,	// (0x0009258a) grid_scut_pane

0x730c,	// (0x00092596) cell_scut_pane_ParamLimits

0x730c,	// (0x00092596) cell_scut_pane

0x7325,	// (0x000925af) cell_scut_pane_g1

0xc194,	// (0x0009741e) cell_scut_pane_t1

0xc1a3,	// (0x0009742d) cell_scut_pane_t2

0x732e,	// (0x000925b8) cell_scut_pane_t3

0x0002,

0xf8eb,	// (0x0009ab75) cell_scut_pane_t

0x51d5,	// (0x0009045f) main_mup3_pane_g8_ParamLimits

0x51d5,	// (0x0009045f) main_mup3_pane_g8

0x64e3,	// (0x0009176d) area_vitu2_query_pane_ParamLimits

0x64e3,	// (0x0009176d) area_vitu2_query_pane

0x7061,	// (0x000922eb) input_focus_pane_cp08

0xc1b2,	// (0x0009743c) area_vitu2_query_pane_g1

0x733c,	// (0x000925c6) area_vitu2_query_pane_g2

0x0001,

0xf8f2,	// (0x0009ab7c) area_vitu2_query_pane_g

0x7351,	// (0x000925db) area_vitu2_query_pane_t1_ParamLimits

0x7351,	// (0x000925db) area_vitu2_query_pane_t1

0x7365,	// (0x000925ef) area_vitu2_query_pane_t2_ParamLimits

0x7365,	// (0x000925ef) area_vitu2_query_pane_t2

0x7379,	// (0x00092603) area_vitu2_query_pane_t3_ParamLimits

0x7379,	// (0x00092603) area_vitu2_query_pane_t3

0xc1be,	// (0x00097448) area_vitu2_query_pane_t4_ParamLimits

0xc1be,	// (0x00097448) area_vitu2_query_pane_t4

0xc1e6,	// (0x00097470) area_vitu2_query_pane_t5_ParamLimits

0xc1e6,	// (0x00097470) area_vitu2_query_pane_t5

0xc20e,	// (0x00097498) area_vitu2_query_pane_t6_ParamLimits

0xc20e,	// (0x00097498) area_vitu2_query_pane_t6

0x0006,

0xf8f7,	// (0x0009ab81) area_vitu2_query_pane_t_ParamLimits

0xf8f7,	// (0x0009ab81) area_vitu2_query_pane_t

0x73a5,	// (0x0009262f) bg_button_pane_cp018

0x73b3,	// (0x0009263d) bg_button_pane_cp021

0x73bf,	// (0x00092649) bg_button_pane_cp022

0x73d4,	// (0x0009265e) input_focus_pane_cp09

0x310d,	// (0x0008e397) aid_size_touch_mv_arrow_left

0x3136,	// (0x0008e3c0) aid_size_touch_mv_arrow_right

0x6b3e,	// (0x00091dc8) main_cset_slider_pane_g16_ParamLimits

0x6b3e,	// (0x00091dc8) main_cset_slider_pane_g16

0x6b4c,	// (0x00091dd6) main_cset_slider_pane_g17_ParamLimits

0x6b4c,	// (0x00091dd6) main_cset_slider_pane_g17

0x72e1,	// (0x0009256b) cell_cam4_burst_pane_g1_ParamLimits

0xddfa,	// (0x00099084) compa_mode_pane

0x6d70,	// (0x00091ffa) popup_vtel_slider_window_g3_ParamLimits

0x6d70,	// (0x00091ffa) popup_vtel_slider_window_g3

0x6d87,	// (0x00092011) popup_vtel_slider_window_g4_ParamLimits

0x6d87,	// (0x00092011) popup_vtel_slider_window_g4

0x6d9e,	// (0x00092028) popup_vtel_slider_window_t1_ParamLimits

0x6d9e,	// (0x00092028) popup_vtel_slider_window_t1

0x9f80,	// (0x0009520a) main_cl_pane

0xad35,	// (0x00095fbf) popup_imed_adjust2_window_ParamLimits

0x3356,	// (0x0008e5e0) bg_tb_trans_pane_cp05_ParamLimits

0xb6f1,	// (0x0009697b) popup_imed_adjust2_window_g1_ParamLimits

0xb700,	// (0x0009698a) popup_imed_adjust2_window_g2_ParamLimits

0xb700,	// (0x0009698a) popup_imed_adjust2_window_g2

0xb70c,	// (0x00096996) popup_imed_adjust2_window_g3_ParamLimits

0xb70c,	// (0x00096996) popup_imed_adjust2_window_g3

0x0002,

0xf672,	// (0x0009a8fc) popup_imed_adjust2_window_g_ParamLimits

0xf672,	// (0x0009a8fc) popup_imed_adjust2_window_g

0xb718,	// (0x000969a2) popup_imed_adjust2_window_t1_ParamLimits

0xb730,	// (0x000969ba) slider_imed_adjust_pane_ParamLimits

0xb744,	// (0x000969ce) slider_imed_adjust_pane_g1_ParamLimits

0xb754,	// (0x000969de) slider_imed_adjust_pane_g2_ParamLimits

0xb764,	// (0x000969ee) slider_imed_adjust_pane_g3_ParamLimits

0xb775,	// (0x000969ff) slider_imed_adjust_pane_g4_ParamLimits

0xf679,	// (0x0009a903) slider_imed_adjust_pane_g_ParamLimits

0x6276,	// (0x00091500) aid_touch_area_cam4_ParamLimits

0x6276,	// (0x00091500) aid_touch_area_cam4

0xdbf2,	// (0x00098e7c) battery_pane_cp01

0x6349,	// (0x000915d3) main_camera4_pane_g6_ParamLimits

0x6349,	// (0x000915d3) main_camera4_pane_g6

0x6373,	// (0x000915fd) main_camera4_pane_t2_ParamLimits

0x6373,	// (0x000915fd) main_camera4_pane_t2

0x0001,

0xf776,	// (0x0009aa00) main_camera4_pane_t_ParamLimits

0xf776,	// (0x0009aa00) main_camera4_pane_t

0x63a8,	// (0x00091632) aid_touch_area_vid4_ParamLimits

0x63a8,	// (0x00091632) aid_touch_area_vid4

0x63ff,	// (0x00091689) main_video4_pane_g5_ParamLimits

0x63ff,	// (0x00091689) main_video4_pane_g5

0x6425,	// (0x000916af) vid4_progress_pane_ParamLimits

0x6425,	// (0x000916af) vid4_progress_pane

0xbe96,	// (0x00097120) main_cset_slider_pane_g18_ParamLimits

0xbe96,	// (0x00097120) main_cset_slider_pane_g18

0xc070,	// (0x000972fa) cell_cam4_burst_pane_g2_ParamLimits

0xc070,	// (0x000972fa) cell_cam4_burst_pane_g2

0x0001,

0xf8cb,	// (0x0009ab55) cell_cam4_burst_pane_g_ParamLimits

0xf8cb,	// (0x0009ab55) cell_cam4_burst_pane_g

0xe5a2,	// (0x0009982c) bg_cl_pane_ParamLimits

0xe5a2,	// (0x0009982c) bg_cl_pane

0x73e5,	// (0x0009266f) cl_header_pane_ParamLimits

0x73e5,	// (0x0009266f) cl_header_pane

0x73f9,	// (0x00092683) cl_listscroll_pane_ParamLimits

0x73f9,	// (0x00092683) cl_listscroll_pane

0xc25a,	// (0x000974e4) bg_cl_pane_g1

0xc262,	// (0x000974ec) bg_cl_pane_g2

0xc26a,	// (0x000974f4) bg_cl_pane_g3

0xc272,	// (0x000974fc) bg_cl_pane_g4

0xc27a,	// (0x00097504) bg_cl_pane_g5

0xc282,	// (0x0009750c) bg_cl_pane_g6

0xc28a,	// (0x00097514) bg_cl_pane_g7

0xc292,	// (0x0009751c) bg_cl_pane_g8

0xc29a,	// (0x00097524) bg_cl_pane_g9

0x0008,

0xf906,	// (0x0009ab90) bg_cl_pane_g

0x7409,	// (0x00092693) aid_height_cl_leading_ParamLimits

0x7409,	// (0x00092693) aid_height_cl_leading

0x7415,	// (0x0009269f) aid_height_cl_text_ParamLimits

0x7415,	// (0x0009269f) aid_height_cl_text

0xe4c9,	// (0x00099753) bg_cl_header_pane_ParamLimits

0xe4c9,	// (0x00099753) bg_cl_header_pane

0x7434,	// (0x000926be) cl_header_pane_g1_ParamLimits

0x7434,	// (0x000926be) cl_header_pane_g1

0x744a,	// (0x000926d4) cl_header_pane_t1_ParamLimits

0x744a,	// (0x000926d4) cl_header_pane_t1

0xc2a2,	// (0x0009752c) cl_list_pane

0xbe69,	// (0x000970f3) hc_scroll_pane_cp01

0xe96b,	// (0x00099bf5) bg_cl_header_pane_g1

0xbd4b,	// (0x00096fd5) bg_cl_header_pane_g2

0xe98b,	// (0x00099c15) bg_cl_header_pane_g3

0xbd5b,	// (0x00096fe5) bg_cl_header_pane_g4

0xbd53,	// (0x00096fdd) bg_cl_header_pane_g5

0xbf7f,	// (0x00097209) bg_cl_header_pane_g6

0xbd73,	// (0x00096ffd) bg_cl_header_pane_g7

0xbd7b,	// (0x00097005) bg_cl_header_pane_g8

0xbd6b,	// (0x00096ff5) bg_cl_header_pane_g9

0x0008,

0xf919,	// (0x0009aba3) bg_cl_header_pane_g

0x7463,	// (0x000926ed) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7463,	// (0x000926ed) hc_cl_list_double_graphic_heading_pane

0x7476,	// (0x00092700) hc_cl_list_single_graphic_pane_ParamLimits

0x7476,	// (0x00092700) hc_cl_list_single_graphic_pane

0x748e,	// (0x00092718) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x748e,	// (0x00092718) hc_cl_list_single_graphic_pane_g1

0x749a,	// (0x00092724) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x749a,	// (0x00092724) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf92c,	// (0x0009abb6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf92c,	// (0x0009abb6) hc_cl_list_single_graphic_pane_g

0x74ae,	// (0x00092738) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74ae,	// (0x00092738) hc_cl_list_single_graphic_pane_t1

0x748e,	// (0x00092718) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x748e,	// (0x00092718) hc_cl_list_double_graphic_heading_pane_g1

0x74c3,	// (0x0009274d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74c3,	// (0x0009274d) hc_cl_list_double_graphic_heading_pane_g2

0x74d7,	// (0x00092761) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74d7,	// (0x00092761) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf931,	// (0x0009abbb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf931,	// (0x0009abbb) hc_cl_list_double_graphic_heading_pane_g

0x74eb,	// (0x00092775) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74eb,	// (0x00092775) hc_cl_list_double_graphic_heading_pane_t1

0x7500,	// (0x0009278a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7500,	// (0x0009278a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf938,	// (0x0009abc2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf938,	// (0x0009abc2) hc_cl_list_double_graphic_heading_pane_t

0xdd40,	// (0x00098fca) vid4_progress_pane_g1

0xdd50,	// (0x00098fda) vid4_progress_pane_g2

0xdd60,	// (0x00098fea) vid4_progress_pane_g3

0xdd72,	// (0x00098ffc) vid4_progress_pane_g4

0x0004,

0xf93d,	// (0x0009abc7) vid4_progress_pane_g

0xdd90,	// (0x0009901a) vid4_progress_pane_t1

0xddaa,	// (0x00099034) vid4_progress_pane_t2

0x0002,

0xf948,	// (0x0009abd2) vid4_progress_pane_t

0x7515,	// (0x0009279f) wait_bar_pane_cp07

0xb03a,	// (0x000962c4) blid_firmament_pane_ParamLimits

0xb07d,	// (0x00096307) popup_blid_sat_info2_window_g1

0xb0a1,	// (0x0009632b) popup_blid_sat_info2_window_t3

0xb0af,	// (0x00096339) popup_blid_sat_info2_window_t4

0xb0bd,	// (0x00096347) popup_blid_sat_info2_window_t5

0xb0cb,	// (0x00096355) popup_blid_sat_info2_window_t6

0xb0db,	// (0x00096365) popup_blid_sat_info2_window_t7

0xb0e9,	// (0x00096373) popup_blid_sat_info2_window_t8

0xb0f7,	// (0x00096381) popup_blid_sat_info2_window_t9

0xb105,	// (0x0009638f) popup_blid_sat_info2_window_t10

0xb1cc,	// (0x00096456) aid_firma_cardinal_ParamLimits

0xb1e0,	// (0x0009646a) blid_firmament_pane_t1_ParamLimits

0xb1f7,	// (0x00096481) blid_firmament_pane_t2_ParamLimits

0xb20e,	// (0x00096498) blid_firmament_pane_t3_ParamLimits

0xb225,	// (0x000964af) blid_firmament_pane_t4_ParamLimits

0xf576,	// (0x0009a800) blid_firmament_pane_t_ParamLimits

0xb23c,	// (0x000964c6) blid_sat_info_pane_ParamLimits

0x9f72,	// (0x000951fc) main_cam_set_pane_ParamLimits

0x59de,	// (0x00090c68) aid_size_cell_colour_35_ParamLimits

0x59fe,	// (0x00090c88) aid_size_cell_colour_112_ParamLimits

0x5a1e,	// (0x00090ca8) aid_size_cell_effect_ParamLimits

0x3356,	// (0x0008e5e0) bg_tb_trans_pane_cp02_ParamLimits

0xebd3,	// (0x00099e5d) heading_imed_pane_ParamLimits

0x5a3e,	// (0x00090cc8) listscroll_imed_pane_ParamLimits

0xa41e,	// (0x000956a8) popup_call2_audio_first_window_g5_ParamLimits

0xa41e,	// (0x000956a8) popup_call2_audio_first_window_g5

0x5e87,	// (0x00091111) aid_size_touch_image3_arrow_left_ParamLimits

0x5e87,	// (0x00091111) aid_size_touch_image3_arrow_left

0x5eb3,	// (0x0009113d) aid_size_touch_image3_arrow_right_ParamLimits

0x5eb3,	// (0x0009113d) aid_size_touch_image3_arrow_right

0xddbf,	// (0x00099049) vid4_progress_pane_t3

0x5be3,	// (0x00090e6d) main_hwr_training_symbol_option_pane_ParamLimits

0x5be3,	// (0x00090e6d) main_hwr_training_symbol_option_pane

0xb936,	// (0x00096bc0) popup_hwr_training_preview_window_ParamLimits

0xb936,	// (0x00096bc0) popup_hwr_training_preview_window

0x5c03,	// (0x00090e8d) hwr_training_navi_pane_g5_ParamLimits

0x5c03,	// (0x00090e8d) hwr_training_navi_pane_g5

0xbd39,	// (0x00096fc3) popup_char_count_window

0x9f72,	// (0x000951fc) bg_popup_sub_pane_cp20_ParamLimits

0x6eb0,	// (0x0009213a) list_vitu2_match_list_pane_ParamLimits

0x6ebc,	// (0x00092146) vitu2_page_scroll_pane_ParamLimits

0x6ebc,	// (0x00092146) vitu2_page_scroll_pane

0xc2cd,	// (0x00097557) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc2cd,	// (0x00097557) list_single_hwr_training_symbol_option_pane

0xc2e0,	// (0x0009756a) list_single_hwr_training_symbol_option_pane_g1

0xc2e8,	// (0x00097572) list_single_hwr_training_symbol_option_pane_t1

0xc2f6,	// (0x00097580) bg_button_pane_cp023

0xc2ff,	// (0x00097589) bg_button_pane_cp024

0xc332,	// (0x000975bc) vitu2_page_scroll_pane_g1

0xc33a,	// (0x000975c4) vitu2_page_scroll_pane_g2

0x0001,

0xf94f,	// (0x0009abd9) vitu2_page_scroll_pane_g

0xc342,	// (0x000975cc) vitu2_page_scroll_pane_t1

0xc351,	// (0x000975db) popup_char_count_window_g1

0xc35a,	// (0x000975e4) popup_char_count_window_g2

0xc363,	// (0x000975ed) popup_char_count_window_g3

0x0002,

0xf954,	// (0x0009abde) popup_char_count_window_g

0xc36c,	// (0x000975f6) popup_char_count_window_t1

0x9f80,	// (0x0009520a) main_vded2_pane

0xb6dd,	// (0x00096967) aid_size_cell_imed_line

0xb6e7,	// (0x00096971) grid_imed_line_width_pane

0xdcac,	// (0x00098f36) vid4_indicators_pane_g4

0xc37a,	// (0x00097604) cell_imed_line_width_pane_ParamLimits

0xc37a,	// (0x00097604) cell_imed_line_width_pane

0xc390,	// (0x0009761a) cell_imed_line_width_pane_g1

0xc399,	// (0x00097623) cell_imed_line_width_pane_g2

0x0001,

0xf95b,	// (0x0009abe5) cell_imed_line_width_pane_g

0x753c,	// (0x000927c6) main_vded2_pane_g1_ParamLimits

0x753c,	// (0x000927c6) main_vded2_pane_g1

0x7557,	// (0x000927e1) main_vded2_pane_g2_ParamLimits

0x7557,	// (0x000927e1) main_vded2_pane_g2

0x0001,

0xf960,	// (0x0009abea) main_vded2_pane_g_ParamLimits

0xf960,	// (0x0009abea) main_vded2_pane_g

0x7569,	// (0x000927f3) vded2_slider_pane_ParamLimits

0x7569,	// (0x000927f3) vded2_slider_pane

0x7579,	// (0x00092803) aid_size_touch_vded2_end

0x7583,	// (0x0009280d) aid_size_touch_vded2_playhead

0xc3a1,	// (0x0009762b) aid_size_touch_vded2_start

0xc3a9,	// (0x00097633) vded2_slider_bg_pane

0xc3b2,	// (0x0009763c) vded2_slider_pane_g1

0xc3bb,	// (0x00097645) vded2_slider_pane_g2

0x758d,	// (0x00092817) vded2_slider_pane_g3

0x0002,

0xf965,	// (0x0009abef) vded2_slider_pane_g

0xc3c3,	// (0x0009764d) vded2_slider_bg_pane_g1

0xc3cc,	// (0x00097656) vded2_slider_bg_pane_g2

0xc3d5,	// (0x0009765f) vded2_slider_bg_pane_g3

0x0002,

0xf96c,	// (0x0009abf6) vded2_slider_bg_pane_g

0x37f7,	// (0x0008ea81) aid_postcard_touch_down_pane_ParamLimits

0x37f7,	// (0x0008ea81) aid_postcard_touch_down_pane

0x380f,	// (0x0008ea99) aid_postcard_touch_up_pane_ParamLimits

0x380f,	// (0x0008ea99) aid_postcard_touch_up_pane

0x9f80,	// (0x0009520a) main_blid2_pane

0xad17,	// (0x00095fa1) popup_blid2_search_window

0xddfa,	// (0x00099084) blid2_gps_pane

0xddfa,	// (0x00099084) blid2_navig_pane

0xddfa,	// (0x00099084) blid2_search_pane

0xddfa,	// (0x00099084) blid2_tripm_pane

0x7598,	// (0x00092822) blid2_search_pane_g1_ParamLimits

0x7598,	// (0x00092822) blid2_search_pane_g1

0x75ab,	// (0x00092835) blid2_search_pane_t1_ParamLimits

0x75ab,	// (0x00092835) blid2_search_pane_t1

0x75bd,	// (0x00092847) aid_size_cell_blid2_gps_ParamLimits

0x75bd,	// (0x00092847) aid_size_cell_blid2_gps

0x75d5,	// (0x0009285f) blid2_gps_pane_g1_ParamLimits

0x75d5,	// (0x0009285f) blid2_gps_pane_g1

0x75e9,	// (0x00092873) grid_blid2_satellite_pane_ParamLimits

0x75e9,	// (0x00092873) grid_blid2_satellite_pane

0x7601,	// (0x0009288b) blid2_navig_pane_g1_ParamLimits

0x7601,	// (0x0009288b) blid2_navig_pane_g1

0x760d,	// (0x00092897) blid2_navig_pane_t1_ParamLimits

0x760d,	// (0x00092897) blid2_navig_pane_t1

0x7628,	// (0x000928b2) blid2_navig_pane_t2_ParamLimits

0x7628,	// (0x000928b2) blid2_navig_pane_t2

0x0001,

0xf973,	// (0x0009abfd) blid2_navig_pane_t_ParamLimits

0xf973,	// (0x0009abfd) blid2_navig_pane_t

0x7643,	// (0x000928cd) blid2_navig_ring_pane_ParamLimits

0x7643,	// (0x000928cd) blid2_navig_ring_pane

0x765e,	// (0x000928e8) blid2_speed_pane_ParamLimits

0x765e,	// (0x000928e8) blid2_speed_pane

0x766a,	// (0x000928f4) blid2_tripm_pane_g1_ParamLimits

0x766a,	// (0x000928f4) blid2_tripm_pane_g1

0x7685,	// (0x0009290f) blid2_tripm_pane_g2_ParamLimits

0x7685,	// (0x0009290f) blid2_tripm_pane_g2

0x7699,	// (0x00092923) blid2_tripm_pane_g3_ParamLimits

0x7699,	// (0x00092923) blid2_tripm_pane_g3

0x76ad,	// (0x00092937) blid2_tripm_pane_g4_ParamLimits

0x76ad,	// (0x00092937) blid2_tripm_pane_g4

0x76c1,	// (0x0009294b) blid2_tripm_pane_g5_ParamLimits

0x76c1,	// (0x0009294b) blid2_tripm_pane_g5

0x0005,

0xf978,	// (0x0009ac02) blid2_tripm_pane_g_ParamLimits

0xf978,	// (0x0009ac02) blid2_tripm_pane_g

0x76e7,	// (0x00092971) blid2_tripm_pane_t1_ParamLimits

0x76e7,	// (0x00092971) blid2_tripm_pane_t1

0x7700,	// (0x0009298a) blid2_tripm_pane_t2_ParamLimits

0x7700,	// (0x0009298a) blid2_tripm_pane_t2

0x7719,	// (0x000929a3) blid2_tripm_pane_t3_ParamLimits

0x7719,	// (0x000929a3) blid2_tripm_pane_t3

0x0003,

0xf985,	// (0x0009ac0f) blid2_tripm_pane_t_ParamLimits

0xf985,	// (0x0009ac0f) blid2_tripm_pane_t

0x7760,	// (0x000929ea) cell_blid2_satellite_pane_ParamLimits

0x7760,	// (0x000929ea) cell_blid2_satellite_pane

0x777c,	// (0x00092a06) cell_blid2_satellite_pane_g1

0xc3de,	// (0x00097668) cell_blid2_satellite_pane_t1

0xe776,	// (0x00099a00) blid2_speed_pane_g1

0xc3ec,	// (0x00097676) blid2_speed_pane_t1

0xc3fa,	// (0x00097684) blid2_speed_pane_t2

0x0001,

0xf98e,	// (0x0009ac18) blid2_speed_pane_t

0xe776,	// (0x00099a00) blid2_navig_ring_pane_g1

0x7785,	// (0x00092a0f) blid2_navig_ring_pane_g2

0x778d,	// (0x00092a17) blid2_navig_ring_pane_g3

0x7795,	// (0x00092a1f) blid2_navig_ring_pane_g4

0x779d,	// (0x00092a27) blid2_navig_ring_pane_g5

0x0004,

0xf993,	// (0x0009ac1d) blid2_navig_ring_pane_g

0xddfa,	// (0x00099084) bg_popup_window_pane_cp011

0xc408,	// (0x00097692) popup_blid2_search_window_g1

0xc410,	// (0x0009769a) popup_blid2_search_window_t1

0xc41e,	// (0x000976a8) popup_blid2_search_window_t2

0x0001,

0xf99e,	// (0x0009ac28) popup_blid2_search_window_t

0xe87a,	// (0x00099b04) main_browser_pane_g1

0xe5a2,	// (0x0009982c) main_browser_pane_ParamLimits

0x9f72,	// (0x000951fc) bg_button_pane_cp011_ParamLimits

0x6703,	// (0x0009198d) cell_vitu2_function_pane_g1_ParamLimits

0x3356,	// (0x0008e5e0) bg_popup_sub_pane_cp22_ParamLimits

0x7061,	// (0x000922eb) input_focus_pane_cp08_ParamLimits

0x7078,	// (0x00092302) popup_vitu2_query_button_pane_ParamLimits

0x7078,	// (0x00092302) popup_vitu2_query_button_pane

0x7089,	// (0x00092313) popup_vitu2_query_input_button_pane

0xbfba,	// (0x00097244) popup_vitu2_query_window_g1_ParamLimits

0x7093,	// (0x0009231d) popup_vitu2_query_window_g2_ParamLimits

0xf89f,	// (0x0009ab29) popup_vitu2_query_window_g_ParamLimits

0xddfa,	// (0x00099084) bg_button_pane_cp026

0x77a5,	// (0x00092a2f) popup_vitu2_query_input_button_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp025

0xc42c,	// (0x000976b6) popup_vitu2_query_button_pane_t1

0x4dc5,	// (0x0009004f) main_mp3_pane_t6

0x4dd3,	// (0x0009005d) popup_slider_window_cp01

0xdc10,	// (0x00098e9a) cam4_battery_pane

0xdc65,	// (0x00098eef) cam4_battery_pane_cp02

0xdd38,	// (0x00098fc2) cam4_battery_pane_cp01

0xdd38,	// (0x00098fc2) cam4_battery_pane_cp03

0xafa1,	// (0x0009622b) cam4_battery_pane_g1

0xe776,	// (0x00099a00) cam4_battery_pane_g2

0x0001,

0xf9a3,	// (0x0009ac2d) cam4_battery_pane_g

0xb113,	// (0x0009639d) popup_blid_sat_info2_window_t11

0x310d,	// (0x0008e397) aid_size_touch_mv_arrow_left_ParamLimits

0x3136,	// (0x0008e3c0) aid_size_touch_mv_arrow_right_ParamLimits

0xeff5,	// (0x0009a27f) navi_pane_g1_ParamLimits

0x3175,	// (0x0008e3ff) navi_pane_g2_ParamLimits

0x31a3,	// (0x0008e42d) navi_pane_g3_ParamLimits

0xf2a9,	// (0x0009a533) navi_pane_g_ParamLimits

0x31fd,	// (0x0008e487) navi_pane_mv_t1_ParamLimits

0x5a4a,	// (0x00090cd4) grid_imed_effect_pane_ParamLimits

0x1cb4,	// (0x0008cf3e) aid_placing_vt_slider_lsc

0xe7c5,	// (0x00099a4f) aid_placing_vt_slider_prt

0xe4c9,	// (0x00099753) bg_tb_trans_pane_cp01_ParamLimits

0xb37b,	// (0x00096605) popup_image_details_window_g1_ParamLimits

0xb38e,	// (0x00096618) popup_image_details_window_g2_ParamLimits

0xb3a3,	// (0x0009662d) popup_image_details_window_g3_ParamLimits

0xb3a3,	// (0x0009662d) popup_image_details_window_g3

0xf5ab,	// (0x0009a835) popup_image_details_window_g_ParamLimits

0xb3b7,	// (0x00096641) popup_image_details_window_t1_ParamLimits

0xb3c9,	// (0x00096653) popup_image_details_window_t2_ParamLimits

0xb3e2,	// (0x0009666c) popup_image_details_window_t3_ParamLimits

0xb3f6,	// (0x00096680) popup_image_details_window_t4_ParamLimits

0xb411,	// (0x0009669b) popup_image_details_window_t5_ParamLimits

0xf5b2,	// (0x0009a83c) popup_image_details_window_t_ParamLimits

0x7421,	// (0x000926ab) cl_header_name_pane_ParamLimits

0x7421,	// (0x000926ab) cl_header_name_pane

0x77ad,	// (0x00092a37) cl_header_name_pane_t1_ParamLimits

0x77ad,	// (0x00092a37) cl_header_name_pane_t1

0x77ce,	// (0x00092a58) cl_header_name_pane_t2_ParamLimits

0x77ce,	// (0x00092a58) cl_header_name_pane_t2

0x7810,	// (0x00092a9a) cl_header_name_pane_t3_ParamLimits

0x7810,	// (0x00092a9a) cl_header_name_pane_t3

0x0002,

0xf9a8,	// (0x0009ac32) cl_header_name_pane_t_ParamLimits

0xf9a8,	// (0x0009ac32) cl_header_name_pane_t

0x31ce,	// (0x0008e458) navi_pane_mv_g2_ParamLimits

0xbcd5,	// (0x00096f5f) field_vitu2_entry_pane_g1_ParamLimits

0xbce1,	// (0x00096f6b) field_vitu2_entry_pane_g2_ParamLimits

0x3320,	// (0x0008e5aa) field_vitu2_entry_pane_g3_ParamLimits

0x3320,	// (0x0008e5aa) field_vitu2_entry_pane_g3

0xf7a8,	// (0x0009aa32) field_vitu2_entry_pane_g_ParamLimits

0x667f,	// (0x00091909) cell_vitu2_itu_pane_g1_ParamLimits

0x6697,	// (0x00091921) cell_vitu2_itu_pane_g2_ParamLimits

0x6697,	// (0x00091921) cell_vitu2_itu_pane_g2

0x0001,

0xf7b4,	// (0x0009aa3e) cell_vitu2_itu_pane_g_ParamLimits

0xf7b4,	// (0x0009aa3e) cell_vitu2_itu_pane_g

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp05_ParamLimits

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp05

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp03

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp04

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp10_ParamLimits

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp10

0x73bf,	// (0x00092649) bg_vkb2_func_pane_cp08

0x73a5,	// (0x0009262f) bg_vkb2_func_pane_cp06

0x73b3,	// (0x0009263d) bg_vkb2_func_pane_cp07

0xc308,	// (0x00097592) bg_vkb2_func_pane_cp11_ParamLimits

0xc308,	// (0x00097592) bg_vkb2_func_pane_cp11

0xc31d,	// (0x000975a7) bg_vkb2_func_pane_cp12_ParamLimits

0xc31d,	// (0x000975a7) bg_vkb2_func_pane_cp12

0xddfa,	// (0x00099084) bg_vkb2_func_pane_cp09

0xbd4b,	// (0x00096fd5) bg_vkb2_func_pane_g1

0xe98b,	// (0x00099c15) bg_vkb2_func_pane_g2

0xbd53,	// (0x00096fdd) bg_vkb2_func_pane_g3

0xbd5b,	// (0x00096fe5) bg_vkb2_func_pane_g4

0xbf7f,	// (0x00097209) bg_vkb2_func_pane_g5

0xbd73,	// (0x00096ffd) bg_vkb2_func_pane_g6

0xbd7b,	// (0x00097005) bg_vkb2_func_pane_g7

0xbd6b,	// (0x00096ff5) bg_vkb2_func_pane_g8

0xe96b,	// (0x00099bf5) bg_vkb2_func_pane_g9

0x0008,

0xf9af,	// (0x0009ac39) bg_vkb2_func_pane_g

0x76d5,	// (0x0009295f) blid2_tripm_pane_g6_ParamLimits

0x76d5,	// (0x0009295f) blid2_tripm_pane_g6

0xbbff,	// (0x00096e89) mp4_progress_pane_g1

0x774c,	// (0x000929d6) blid2_tripm_values_pane_ParamLimits

0x774c,	// (0x000929d6) blid2_tripm_values_pane

0x7841,	// (0x00092acb) blid2_tripm_values_pane_t1

0x784f,	// (0x00092ad9) blid2_tripm_values_pane_t2

0x785d,	// (0x00092ae7) blid2_tripm_values_pane_t3

0x786b,	// (0x00092af5) blid2_tripm_values_pane_t4

0x7879,	// (0x00092b03) blid2_tripm_values_pane_t5

0x7887,	// (0x00092b11) blid2_tripm_values_pane_t6

0x7895,	// (0x00092b1f) blid2_tripm_values_pane_t7

0x78a3,	// (0x00092b2d) blid2_tripm_values_pane_t8

0x78b1,	// (0x00092b3b) blid2_tripm_values_pane_t9

0x0008,

0xf9c2,	// (0x0009ac4c) blid2_tripm_values_pane_t

0x1cf1,	// (0x0008cf7b) call_video_pane_t1_ParamLimits

0x1d0b,	// (0x0008cf95) call_video_pane_t2_ParamLimits

0xf1ec,	// (0x0009a476) call_video_pane_t_ParamLimits

0x36d1,	// (0x0008e95b) msg_header_pane_g1_ParamLimits

0x36df,	// (0x0008e969) msg_header_pane_g2_ParamLimits

0x36df,	// (0x0008e969) msg_header_pane_g2

0x0001,

0xf34c,	// (0x0009a5d6) msg_header_pane_g_ParamLimits

0xf34c,	// (0x0009a5d6) msg_header_pane_g

0xe5a2,	// (0x0009982c) main_clock2_pane_ParamLimits

0x5747,	// (0x000909d1) grid_clock2_toolbar_pane_ParamLimits

0x5747,	// (0x000909d1) grid_clock2_toolbar_pane

0x5747,	// (0x000909d1) listscroll_clock2_pane_ParamLimits

0x5747,	// (0x000909d1) listscroll_clock2_pane

0x5826,	// (0x00090ab0) main_clock2_pane_t3_ParamLimits

0x5826,	// (0x00090ab0) main_clock2_pane_t3

0x5849,	// (0x00090ad3) main_clock2_pane_t4_ParamLimits

0x5849,	// (0x00090ad3) main_clock2_pane_t4

0xc43a,	// (0x000976c4) cell_clock2_toolbar_pane

0xc442,	// (0x000976cc) cell_clock2_toolbar_pane_cp01

0xc442,	// (0x000976cc) cell_clock2_toolbar_pane_cp02

0xc44a,	// (0x000976d4) cell_clock2_toolbar_pane_cp03

0xc452,	// (0x000976dc) list_clock2_pane

0xef46,	// (0x0009a1d0) scroll_pane_cp10

0xc45a,	// (0x000976e4) list_single_clock2_pane_ParamLimits

0xc45a,	// (0x000976e4) list_single_clock2_pane

0xe740,	// (0x000999ca) list_highlight_pane_cp08

0xc467,	// (0x000976f1) list_single_clock2_pane_t1

0xc475,	// (0x000976ff) list_single_clock2_pane_t2

0x0001,

0xf9d5,	// (0x0009ac5f) list_single_clock2_pane_t

0xddfa,	// (0x00099084) bg_button_pane_cp10

0xc483,	// (0x0009770d) cell_clock2_toolbar_pane_g1

0x3775,	// (0x0008e9ff) aid_main_viewer_pane_g1_ParamLimits

0x3775,	// (0x0008e9ff) aid_main_viewer_pane_g1

0x3783,	// (0x0008ea0d) aid_main_viewer_pane_g2_ParamLimits

0x3783,	// (0x0008ea0d) aid_main_viewer_pane_g2

0x3791,	// (0x0008ea1b) aid_main_viewer_pane_g3_ParamLimits

0x3791,	// (0x0008ea1b) aid_main_viewer_pane_g3

0x37a0,	// (0x0008ea2a) aid_main_viewer_pane_g4_ParamLimits

0x37a0,	// (0x0008ea2a) aid_main_viewer_pane_g4

0x0003,

0xf35d,	// (0x0009a5e7) aid_main_viewer_pane_g_ParamLimits

0xf35d,	// (0x0009a5e7) aid_main_viewer_pane_g

0x46e9,	// (0x0008f973) main_calc_pane_ParamLimits

0x470d,	// (0x0008f997) main_dialer2_pane_ParamLimits

0x9f80,	// (0x0009520a) main_cam6_pane

0x9f80,	// (0x0009520a) main_vid6_pane

0x5753,	// (0x000909dd) listscroll_gen_pane_cp06_ParamLimits

0x5753,	// (0x000909dd) listscroll_gen_pane_cp06

0x586c,	// (0x00090af6) main_clock2_pane_t5_ParamLimits

0x586c,	// (0x00090af6) main_clock2_pane_t5

0x58ca,	// (0x00090b54) aid_call2_pane_cp10_ParamLimits

0x58dc,	// (0x00090b66) aid_call_pane_cp10_ParamLimits

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58ee,	// (0x00090b78) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58ee,	// (0x00090b78) popup_clock_analogue_window_cp10_g4_ParamLimits

0xefb5,	// (0x0009a23f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf667,	// (0x0009a8f1) popup_clock_analogue_window_cp10_g_ParamLimits

0x5904,	// (0x00090b8e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e34,	// (0x000910be) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e34,	// (0x000910be) cell_dialer2_keypad_pane_g2

0x0001,

0xf747,	// (0x0009a9d1) cell_dialer2_keypad_pane_g_ParamLimits

0xf747,	// (0x0009a9d1) cell_dialer2_keypad_pane_g

0x5e50,	// (0x000910da) cell_dialer2_keypad_pane_t1

0x6a36,	// (0x00091cc0) main_cset_text2_pane_ParamLimits

0x6a36,	// (0x00091cc0) main_cset_text2_pane

0xc1b2,	// (0x0009743c) area_vitu2_query_pane_g1_ParamLimits

0x733c,	// (0x000925c6) area_vitu2_query_pane_g2_ParamLimits

0xf8f2,	// (0x0009ab7c) area_vitu2_query_pane_g_ParamLimits

0xc236,	// (0x000974c0) area_vitu2_query_pane_t7_ParamLimits

0xc236,	// (0x000974c0) area_vitu2_query_pane_t7

0x73a5,	// (0x0009262f) bg_button_pane_cp018_ParamLimits

0x73b3,	// (0x0009263d) bg_button_pane_cp021_ParamLimits

0x73bf,	// (0x00092649) bg_button_pane_cp022_ParamLimits

0x73bf,	// (0x00092649) bg_vkb2_func_pane_cp08_ParamLimits

0x73a5,	// (0x0009262f) bg_vkb2_func_pane_cp06_ParamLimits

0x73b3,	// (0x0009263d) bg_vkb2_func_pane_cp07_ParamLimits

0x73d4,	// (0x0009265e) input_focus_pane_cp09_ParamLimits

0xddd4,	// (0x0009905e) cam6_autofocus_pane_ParamLimits

0xddd4,	// (0x0009905e) cam6_autofocus_pane

0x78bf,	// (0x00092b49) cam6_image_uncrop_pane_ParamLimits

0x78bf,	// (0x00092b49) cam6_image_uncrop_pane

0x78ce,	// (0x00092b58) cam6_indi_pane_ParamLimits

0x78ce,	// (0x00092b58) cam6_indi_pane

0x78e4,	// (0x00092b6e) cam6_mode_pane_ParamLimits

0x78e4,	// (0x00092b6e) cam6_mode_pane

0x78f6,	// (0x00092b80) cam6_timer_pane_ParamLimits

0x78f6,	// (0x00092b80) cam6_timer_pane

0x7902,	// (0x00092b8c) cam6_zoom_pane_ParamLimits

0x7902,	// (0x00092b8c) cam6_zoom_pane

0x7910,	// (0x00092b9a) cam6_mode_pane_g1_ParamLimits

0x7910,	// (0x00092b9a) cam6_mode_pane_g1

0x7920,	// (0x00092baa) cam6_mode_pane_g2_ParamLimits

0x7920,	// (0x00092baa) cam6_mode_pane_g2

0x7930,	// (0x00092bba) cam6_mode_pane_g3_ParamLimits

0x7930,	// (0x00092bba) cam6_mode_pane_g3

0x7940,	// (0x00092bca) cam6_mode_pane_g4_ParamLimits

0x7940,	// (0x00092bca) cam6_mode_pane_g4

0x0003,

0xf9da,	// (0x0009ac64) cam6_mode_pane_g_ParamLimits

0xf9da,	// (0x0009ac64) cam6_mode_pane_g

0xc48b,	// (0x00097715) bg_tb_trans_pane_cp08_ParamLimits

0xc48b,	// (0x00097715) bg_tb_trans_pane_cp08

0xc499,	// (0x00097723) cam6_battery_pane_ParamLimits

0xc499,	// (0x00097723) cam6_battery_pane

0xc4af,	// (0x00097739) cam6_indi_pane_g1_ParamLimits

0xc4af,	// (0x00097739) cam6_indi_pane_g1

0xc4c1,	// (0x0009774b) cam6_indi_pane_g2_ParamLimits

0xc4c1,	// (0x0009774b) cam6_indi_pane_g2

0xc4d3,	// (0x0009775d) cam6_indi_pane_g3_ParamLimits

0xc4d3,	// (0x0009775d) cam6_indi_pane_g3

0x0002,

0xf9e3,	// (0x0009ac6d) cam6_indi_pane_g_ParamLimits

0xf9e3,	// (0x0009ac6d) cam6_indi_pane_g

0xc4e5,	// (0x0009776f) cam6_indi_pane_t1_ParamLimits

0xc4e5,	// (0x0009776f) cam6_indi_pane_t1

0x6472,	// (0x000916fc) cam6_autofocus_pane_g1

0x646a,	// (0x000916f4) cam6_autofocus_pane_g2

0x6482,	// (0x0009170c) cam6_autofocus_pane_g3

0x647a,	// (0x00091704) cam6_autofocus_pane_g4

0x0003,

0xf9ea,	// (0x0009ac74) cam6_autofocus_pane_g

0xc50b,	// (0x00097795) cam6_timer_pane_g1

0xc513,	// (0x0009779d) cam6_timer_pane_t1

0xc521,	// (0x000977ab) cam6_zoom_cont_pane

0xc529,	// (0x000977b3) cam6_zoom_pane_g1

0xc531,	// (0x000977bb) cam6_zoom_pane_g2

0x7950,	// (0x00092bda) cam6_zoom_pane_g3

0x0002,

0xf9f3,	// (0x0009ac7d) cam6_zoom_pane_g

0xe776,	// (0x00099a00) cam6_battery_pane_g1

0xe776,	// (0x00099a00) cam6_battery_pane_g2

0x0001,

0xf30d,	// (0x0009a597) cam6_battery_pane_g

0xc539,	// (0x000977c3) cam6_zoom_cont_pane_g1

0xc542,	// (0x000977cc) cam6_zoom_cont_pane_g2

0xc54b,	// (0x000977d5) cam6_zoom_cont_pane_g3

0x0002,

0xf9fa,	// (0x0009ac84) cam6_zoom_cont_pane_g

0x796d,	// (0x00092bf7) cam6_mode_pane_cp_ParamLimits

0x796d,	// (0x00092bf7) cam6_mode_pane_cp

0x797f,	// (0x00092c09) cam6_zoom_pane_cp_ParamLimits

0x797f,	// (0x00092c09) cam6_zoom_pane_cp

0x798d,	// (0x00092c17) vid6_image_uncrop_cif_pane_ParamLimits

0x798d,	// (0x00092c17) vid6_image_uncrop_cif_pane

0x799d,	// (0x00092c27) vid6_image_uncrop_nhd_pane_ParamLimits

0x799d,	// (0x00092c27) vid6_image_uncrop_nhd_pane

0x79ac,	// (0x00092c36) vid6_image_uncrop_vga_pane_ParamLimits

0x79ac,	// (0x00092c36) vid6_image_uncrop_vga_pane

0x79bb,	// (0x00092c45) vid6_image_uncrop_wvga_pane_ParamLimits

0x79bb,	// (0x00092c45) vid6_image_uncrop_wvga_pane

0x79ca,	// (0x00092c54) vid6_indi_pane_ParamLimits

0x79ca,	// (0x00092c54) vid6_indi_pane

0xc48b,	// (0x00097715) bg_tb_trans_pane_cp09_ParamLimits

0xc48b,	// (0x00097715) bg_tb_trans_pane_cp09

0xc563,	// (0x000977ed) cam6_battery_pane_cp_ParamLimits

0xc563,	// (0x000977ed) cam6_battery_pane_cp

0xc56f,	// (0x000977f9) vid6_indi_pane_g1_ParamLimits

0xc56f,	// (0x000977f9) vid6_indi_pane_g1

0xc581,	// (0x0009780b) vid6_indi_pane_g2_ParamLimits

0xc581,	// (0x0009780b) vid6_indi_pane_g2

0xc593,	// (0x0009781d) vid6_indi_pane_g3_ParamLimits

0xc593,	// (0x0009781d) vid6_indi_pane_g3

0xc5aa,	// (0x00097834) vid6_indi_pane_g4_ParamLimits

0xc5aa,	// (0x00097834) vid6_indi_pane_g4

0xc5c1,	// (0x0009784b) vid6_indi_pane_g5_ParamLimits

0xc5c1,	// (0x0009784b) vid6_indi_pane_g5

0x0004,

0xfa01,	// (0x0009ac8b) vid6_indi_pane_g_ParamLimits

0xfa01,	// (0x0009ac8b) vid6_indi_pane_g

0xc5db,	// (0x00097865) vid6_indi_pane_t1_ParamLimits

0xc5db,	// (0x00097865) vid6_indi_pane_t1

0xc5f1,	// (0x0009787b) vid6_indi_pane_t2_ParamLimits

0xc5f1,	// (0x0009787b) vid6_indi_pane_t2

0xc619,	// (0x000978a3) vid6_indi_pane_t3_ParamLimits

0xc619,	// (0x000978a3) vid6_indi_pane_t3

0xc641,	// (0x000978cb) vid6_indi_pane_t4_ParamLimits

0xc641,	// (0x000978cb) vid6_indi_pane_t4

0x0003,

0xfa0c,	// (0x0009ac96) vid6_indi_pane_t_ParamLimits

0xfa0c,	// (0x0009ac96) vid6_indi_pane_t

0xc665,	// (0x000978ef) wait_bar_pane_cp08

0x79e2,	// (0x00092c6c) main_cset_text2_pane_t1_ParamLimits

0x79e2,	// (0x00092c6c) main_cset_text2_pane_t1

0x7958,	// (0x00092be2) listscroll_gen_pane_cp06_t1_ParamLimits

0x7958,	// (0x00092be2) listscroll_gen_pane_cp06_t1

0x9f80,	// (0x0009520a) main_cam6_set_pane

0xbcb0,	// (0x00096f3a) bg_tb_trans_pane_cp06_ParamLimits

0xdc18,	// (0x00098ea2) cam4_indicators_pane_g1_ParamLimits

0xdc29,	// (0x00098eb3) cam4_indicators_pane_g2_ParamLimits

0xf784,	// (0x0009aa0e) cam4_indicators_pane_g_ParamLimits

0xdc41,	// (0x00098ecb) cam4_indicators_pane_t1_ParamLimits

0x9f72,	// (0x000951fc) bg_tb_trans_pane_cp07_ParamLimits

0xdc6f,	// (0x00098ef9) vid4_indicators_pane_g1_ParamLimits

0xdc85,	// (0x00098f0f) vid4_indicators_pane_g2_ParamLimits

0xdc99,	// (0x00098f23) vid4_indicators_pane_g3_ParamLimits

0xdcac,	// (0x00098f36) vid4_indicators_pane_g4_ParamLimits

0xf796,	// (0x0009aa20) vid4_indicators_pane_g_ParamLimits

0xdcca,	// (0x00098f54) vid4_indicators_pane_t1_ParamLimits

0xdd40,	// (0x00098fca) vid4_progress_pane_g1_ParamLimits

0xdd50,	// (0x00098fda) vid4_progress_pane_g2_ParamLimits

0xdd60,	// (0x00098fea) vid4_progress_pane_g3_ParamLimits

0xdd72,	// (0x00098ffc) vid4_progress_pane_g4_ParamLimits

0xf93d,	// (0x0009abc7) vid4_progress_pane_g_ParamLimits

0xdd90,	// (0x0009901a) vid4_progress_pane_t1_ParamLimits

0xddaa,	// (0x00099034) vid4_progress_pane_t2_ParamLimits

0xddbf,	// (0x00099049) vid4_progress_pane_t3_ParamLimits

0xf948,	// (0x0009abd2) vid4_progress_pane_t_ParamLimits

0x7515,	// (0x0009279f) wait_bar_pane_cp07_ParamLimits

0x7a03,	// (0x00092c8d) main_cam6_set_pane_g2_ParamLimits

0x7a03,	// (0x00092c8d) main_cam6_set_pane_g2

0x7a29,	// (0x00092cb3) main_cset6_listscroll_pane_ParamLimits

0x7a29,	// (0x00092cb3) main_cset6_listscroll_pane

0x7a47,	// (0x00092cd1) main_cset6_slider_pane_ParamLimits

0x7a47,	// (0x00092cd1) main_cset6_slider_pane

0x7a5d,	// (0x00092ce7) main_cset6_text2_pane_ParamLimits

0x7a5d,	// (0x00092ce7) main_cset6_text2_pane

0xc674,	// (0x000978fe) main_cset6_text_pane

0xc67c,	// (0x00097906) main_cset_list_pane_copy1_ParamLimits

0xc67c,	// (0x00097906) main_cset_list_pane_copy1

0xc68c,	// (0x00097916) scroll_pane_cp028_copy1

0x7a6b,	// (0x00092cf5) cset_list_set_pane_copy1

0x7a7f,	// (0x00092d09) aid_position_infowindow_above_copy1

0x7a87,	// (0x00092d11) aid_position_infowindow_below_copy1

0x7a8f,	// (0x00092d19) cset_list_set_pane_g1_copy1

0x7a97,	// (0x00092d21) cset_list_set_pane_g3_copy1_ParamLimits

0x7a97,	// (0x00092d21) cset_list_set_pane_g3_copy1

0x7aa6,	// (0x00092d30) cset_list_set_pane_t1_copy1_ParamLimits

0x7aa6,	// (0x00092d30) cset_list_set_pane_t1_copy1

0xe4c9,	// (0x00099753) list_highlight_pane_cp021_copy1_ParamLimits

0xe4c9,	// (0x00099753) list_highlight_pane_cp021_copy1

0xc695,	// (0x0009791f) cset6_slider_pane_ParamLimits

0xc695,	// (0x0009791f) cset6_slider_pane

0xc6c1,	// (0x0009794b) main_cset6_slider_pane_g1_ParamLimits

0xc6c1,	// (0x0009794b) main_cset6_slider_pane_g1

0x7abb,	// (0x00092d45) main_cset6_slider_pane_g2_ParamLimits

0x7abb,	// (0x00092d45) main_cset6_slider_pane_g2

0xc6e9,	// (0x00097973) main_cset6_slider_pane_g3_ParamLimits

0xc6e9,	// (0x00097973) main_cset6_slider_pane_g3

0x7ae3,	// (0x00092d6d) main_cset6_slider_pane_g4_ParamLimits

0x7ae3,	// (0x00092d6d) main_cset6_slider_pane_g4

0x7aef,	// (0x00092d79) main_cset6_slider_pane_g5_ParamLimits

0x7aef,	// (0x00092d79) main_cset6_slider_pane_g5

0xbe7e,	// (0x00097108) main_cset6_slider_pane_g7_ParamLimits

0xbe7e,	// (0x00097108) main_cset6_slider_pane_g7

0xbe8a,	// (0x00097114) main_cset6_slider_pane_g8_ParamLimits

0xbe8a,	// (0x00097114) main_cset6_slider_pane_g8

0x6ade,	// (0x00091d68) main_cset6_slider_pane_g9_ParamLimits

0x6ade,	// (0x00091d68) main_cset6_slider_pane_g9

0x6aea,	// (0x00091d74) main_cset6_slider_pane_g10_ParamLimits

0x6aea,	// (0x00091d74) main_cset6_slider_pane_g10

0x6af6,	// (0x00091d80) main_cset6_slider_pane_g11_ParamLimits

0x6af6,	// (0x00091d80) main_cset6_slider_pane_g11

0x6b02,	// (0x00091d8c) main_cset6_slider_pane_g12_ParamLimits

0x6b02,	// (0x00091d8c) main_cset6_slider_pane_g12

0x6b0e,	// (0x00091d98) main_cset6_slider_pane_g13_ParamLimits

0x6b0e,	// (0x00091d98) main_cset6_slider_pane_g13

0x6b1a,	// (0x00091da4) main_cset6_slider_pane_g14_ParamLimits

0x6b1a,	// (0x00091da4) main_cset6_slider_pane_g14

0x7afd,	// (0x00092d87) main_cset6_slider_pane_g15_ParamLimits

0x7afd,	// (0x00092d87) main_cset6_slider_pane_g15

0x6b3e,	// (0x00091dc8) main_cset6_slider_pane_g16_ParamLimits

0x6b3e,	// (0x00091dc8) main_cset6_slider_pane_g16

0x6b4c,	// (0x00091dd6) main_cset6_slider_pane_g17_ParamLimits

0x6b4c,	// (0x00091dd6) main_cset6_slider_pane_g17

0x0011,

0xfa15,	// (0x0009ac9f) main_cset6_slider_pane_g_ParamLimits

0xfa15,	// (0x0009ac9f) main_cset6_slider_pane_g

0xc6f5,	// (0x0009797f) main_cset6_slider_pane_t1_ParamLimits

0xc6f5,	// (0x0009797f) main_cset6_slider_pane_t1

0x7b2d,	// (0x00092db7) main_cset6_slider_pane_t2_ParamLimits

0x7b2d,	// (0x00092db7) main_cset6_slider_pane_t2

0x7b58,	// (0x00092de2) main_cset6_slider_pane_t3_ParamLimits

0x7b58,	// (0x00092de2) main_cset6_slider_pane_t3

0x7b83,	// (0x00092e0d) main_cset6_slider_pane_t4_ParamLimits

0x7b83,	// (0x00092e0d) main_cset6_slider_pane_t4

0x7bb0,	// (0x00092e3a) main_cset6_slider_pane_t5_ParamLimits

0x7bb0,	// (0x00092e3a) main_cset6_slider_pane_t5

0xc736,	// (0x000979c0) main_cset6_slider_pane_t7_ParamLimits

0xc736,	// (0x000979c0) main_cset6_slider_pane_t7

0x7bdd,	// (0x00092e67) main_cset6_slider_pane_t8_ParamLimits

0x7bdd,	// (0x00092e67) main_cset6_slider_pane_t8

0x7c01,	// (0x00092e8b) main_cset6_slider_pane_t9_ParamLimits

0x7c01,	// (0x00092e8b) main_cset6_slider_pane_t9

0x7c25,	// (0x00092eaf) main_cset6_slider_pane_t10_ParamLimits

0x7c25,	// (0x00092eaf) main_cset6_slider_pane_t10

0x7c49,	// (0x00092ed3) main_cset6_slider_pane_t11_ParamLimits

0x7c49,	// (0x00092ed3) main_cset6_slider_pane_t11

0xc76c,	// (0x000979f6) main_cset6_slider_pane_t14_ParamLimits

0xc76c,	// (0x000979f6) main_cset6_slider_pane_t14

0xc7a5,	// (0x00097a2f) main_cset6_slider_pane_t15_ParamLimits

0xc7a5,	// (0x00097a2f) main_cset6_slider_pane_t15

0x000b,

0xfa3a,	// (0x0009acc4) main_cset6_slider_pane_t_ParamLimits

0xfa3a,	// (0x0009acc4) main_cset6_slider_pane_t

0xc7de,	// (0x00097a68) cset_slider_pane_g1_copy1

0xc7e7,	// (0x00097a71) cset_slider_pane_g2_copy1

0xc7f0,	// (0x00097a7a) cset_slider_pane_g3_copy1

0xddfa,	// (0x00099084) bg_popup_sub_pane_cp011_copy1

0xc802,	// (0x00097a8c) main_cset_text_pane_g1_copy1

0xbfce,	// (0x00097258) main_cset_text_pane_t1_copy1

0xbfdc,	// (0x00097266) main_cset_text_pane_t2_copy1

0xbfea,	// (0x00097274) main_cset_text_pane_t3_copy1

0xbff8,	// (0x00097282) main_cset_text_pane_t4_copy1

0xc006,	// (0x00097290) main_cset_text_pane_t5_copy1

0xc80a,	// (0x00097a94) main_cset_text_pane_t6_copy1

0xc818,	// (0x00097aa2) main_cset_text_pane_t7_copy1

0x79e2,	// (0x00092c6c) main_cset_text2_pane_t1_copy1

0x9f72,	// (0x000951fc) main_ncimui_pane

0x49a7,	// (0x0008fc31) popup_query_ncimui_window_ParamLimits

0x49a7,	// (0x0008fc31) popup_query_ncimui_window

0xb4b2,	// (0x0009673c) field_cale_ev2_pane_g4_ParamLimits

0xb4b2,	// (0x0009673c) field_cale_ev2_pane_g4

0x5cff,	// (0x00090f89) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cff,	// (0x00090f89) cell_video_dialer_keypad_pane_g2

0x0001,

0xf71e,	// (0x0009a9a8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf71e,	// (0x0009a9a8) cell_video_dialer_keypad_pane_g

0x5d17,	// (0x00090fa1) cell_video_dialer_keypad_pane_t1

0xddfa,	// (0x00099084) bg_popup_window_pane_cp012

0xac71,	// (0x00095efb) heading_pane_cp06

0xc844,	// (0x00097ace) ncim_query_content_pane

0xddfa,	// (0x00099084) bg_popup_heading_pane_cp01

0xc84c,	// (0x00097ad6) ncim_heading_pane_t1

0xc85a,	// (0x00097ae4) ncim_indicator_popup_pane

0xc86c,	// (0x00097af6) ncim_query_button_pane

0xc882,	// (0x00097b0c) ncim_query_content_pane_t1

0xc894,	// (0x00097b1e) ncim_query_content_pane_t2

0x0005,

0xfa6f,	// (0x0009acf9) ncim_query_content_pane_t

0xc8ce,	// (0x00097b58) ncim_query_list_pane

0xc8e0,	// (0x00097b6a) ncim_query_popup_pane

0xc85a,	// (0x00097ae4) ncim_indicator_popup_pane_ParamLimits

0x7db5,	// (0x0009303f) ncim_query_content_pane_g1_ParamLimits

0x7db5,	// (0x0009303f) ncim_query_content_pane_g1

0xc882,	// (0x00097b0c) ncim_query_content_pane_t1_ParamLimits

0xc894,	// (0x00097b1e) ncim_query_content_pane_t2_ParamLimits

0x7dc1,	// (0x0009304b) ncim_query_content_pane_t3_ParamLimits

0x7dc1,	// (0x0009304b) ncim_query_content_pane_t3

0x7de9,	// (0x00093073) ncim_query_content_pane_t4_ParamLimits

0x7de9,	// (0x00093073) ncim_query_content_pane_t4

0x7e11,	// (0x0009309b) ncim_query_content_pane_t5_ParamLimits

0x7e11,	// (0x0009309b) ncim_query_content_pane_t5

0xc8a6,	// (0x00097b30) ncim_query_content_pane_t6_ParamLimits

0xc8a6,	// (0x00097b30) ncim_query_content_pane_t6

0xfa6f,	// (0x0009acf9) ncim_query_content_pane_t_ParamLimits

0xc8ce,	// (0x00097b58) ncim_query_list_pane_ParamLimits

0xc8e0,	// (0x00097b6a) ncim_query_popup_pane_ParamLimits

0xc8f4,	// (0x00097b7e) wait_bar_pane_cp04

0xddfa,	// (0x00099084) input_focus_pane_cp011

0xc8fc,	// (0x00097b86) ncim_query_popup_pane_t1

0xc90a,	// (0x00097b94) ncim_list_query_list_pane_ParamLimits

0xc90a,	// (0x00097b94) ncim_list_query_list_pane

0xddfa,	// (0x00099084) bg_button_pane_cp027

0xc91d,	// (0x00097ba7) ncim_query_button_pane_g1

0xddfa,	// (0x00099084) list_highlight_pane_cp012

0xc927,	// (0x00097bb1) ncim_list_query_list_pane_g1

0xc92f,	// (0x00097bb9) ncim_list_query_list_pane_t1

0xdc35,	// (0x00098ebf) cam4_indicators_pane_g3_ParamLimits

0xdc35,	// (0x00098ebf) cam4_indicators_pane_g3

0xdcb8,	// (0x00098f42) vid4_indicators_pane_g5_ParamLimits

0xdcb8,	// (0x00098f42) vid4_indicators_pane_g5

0xdd81,	// (0x0009900b) vid4_progress_pane_g5_ParamLimits

0xdd81,	// (0x0009900b) vid4_progress_pane_g5

0x7ca0,	// (0x00092f2a) main_ncimui_pane_g1

0x7d09,	// (0x00092f93) ncimui_group_query_pane_ParamLimits

0x7d09,	// (0x00092f93) ncimui_group_query_pane

0x7d51,	// (0x00092fdb) ncimui_list_pane_ParamLimits

0x7d51,	// (0x00092fdb) ncimui_list_pane

0x7d78,	// (0x00093002) ncimui_text_pane_ParamLimits

0x7d78,	// (0x00093002) ncimui_text_pane

0x7e39,	// (0x000930c3) ncimui_text_pane_t1_ParamLimits

0x7e39,	// (0x000930c3) ncimui_text_pane_t1

0xc93d,	// (0x00097bc7) ncimui_list_single_graphic_pane_ParamLimits

0xc93d,	// (0x00097bc7) ncimui_list_single_graphic_pane

0x7e57,	// (0x000930e1) ncimui_query_pane_ParamLimits

0x7e57,	// (0x000930e1) ncimui_query_pane

0xddfa,	// (0x00099084) list_highlight_pane_cp013

0xc94d,	// (0x00097bd7) ncim_list_query_list_pane_t1_copy1

0xc927,	// (0x00097bb1) ncim_list_single_graphic_pane_g1

0x7e6a,	// (0x000930f4) ncim_query_button_pane_cp01

0x7e76,	// (0x00093100) ncim_query_entry_pane_ParamLimits

0x7e76,	// (0x00093100) ncim_query_entry_pane

0x7e89,	// (0x00093113) ncimui_query_pane_g1

0x7e95,	// (0x0009311f) ncimui_query_pane_t1_ParamLimits

0x7e95,	// (0x0009311f) ncimui_query_pane_t1

0xe4c9,	// (0x00099753) input_focus_pane_cp012

0xc95b,	// (0x00097be5) ncim_query_entry_pane_t1

0xe5a2,	// (0x0009982c) main_im_pane_ParamLimits

0x9f72,	// (0x000951fc) main_mobtv_pane_ParamLimits

0x9f72,	// (0x000951fc) main_mobtv_pane

0x7b15,	// (0x00092d9f) main_cset6_slider_pane_g18_ParamLimits

0x7b15,	// (0x00092d9f) main_cset6_slider_pane_g18

0x7b21,	// (0x00092dab) main_cset6_slider_pane_g19_ParamLimits

0x7b21,	// (0x00092dab) main_cset6_slider_pane_g19

0xe54c,	// (0x000997d6) bg_main_mobtv_pane_ParamLimits

0xe54c,	// (0x000997d6) bg_main_mobtv_pane

0x7eae,	// (0x00093138) main_mobtv_info_pane

0x7eb9,	// (0x00093143) main_mobtv_loading_pane_ParamLimits

0x7eb9,	// (0x00093143) main_mobtv_loading_pane

0xc96d,	// (0x00097bf7) main_mobtv_pg_channel_list_pane

0xc977,	// (0x00097c01) main_mobtv_pg_hdr_pane

0x7ec6,	// (0x00093150) main_mobtv_programe_curr_pane_ParamLimits

0x7ec6,	// (0x00093150) main_mobtv_programe_curr_pane

0x7ed3,	// (0x0009315d) main_mobtv_programe_next_pane_ParamLimits

0x7ed3,	// (0x0009315d) main_mobtv_programe_next_pane

0xc980,	// (0x00097c0a) popup_mobtv_noti_window

0xe776,	// (0x00099a00) main_tv_pg_hdr_pane_g1

0xc98a,	// (0x00097c14) main_tv_pg_hdr_pane_g2

0xc992,	// (0x00097c1c) main_tv_pg_hdr_pane_g3

0xc99a,	// (0x00097c24) main_tv_pg_hdr_pane_g4

0xc9a2,	// (0x00097c2c) main_tv_pg_hdr_pane_g5

0xc9ac,	// (0x00097c36) main_tv_pg_hdr_pane_g6

0xc9b6,	// (0x00097c40) main_tv_pg_hdr_pane_g7

0xc9c0,	// (0x00097c4a) main_tv_pg_hdr_pane_g8

0xc9ca,	// (0x00097c54) main_tv_pg_hdr_pane_g9

0xc9d4,	// (0x00097c5e) main_tv_pg_hdr_pane_g10

0xc9de,	// (0x00097c68) main_tv_pg_hdr_pane_g11

0x000a,

0xfa7c,	// (0x0009ad06) main_tv_pg_hdr_pane_g

0xc9e8,	// (0x00097c72) main_tv_pg_hdr_pane_t1

0xc9f6,	// (0x00097c80) main_tv_pg_hdr_pane_t2

0xca04,	// (0x00097c8e) main_tv_pg_hdr_pane_t3

0xca14,	// (0x00097c9e) main_tv_pg_hdr_pane_t4

0xca24,	// (0x00097cae) main_tv_pg_hdr_pane_t5

0x0004,

0xfa93,	// (0x0009ad1d) main_tv_pg_hdr_pane_t

0xca34,	// (0x00097cbe) single_mobtv_pg_channel_pane_ParamLimits

0xca34,	// (0x00097cbe) single_mobtv_pg_channel_pane

0xca46,	// (0x00097cd0) single_mobtv_pg_channel_table_pane

0xca4f,	// (0x00097cd9) single_mobtv_pg_channel_thumb_pane

0xca58,	// (0x00097ce2) single_tv_pg_channel_pane_g1

0xca61,	// (0x00097ceb) single_tv_pg_channel_pane_g2

0x0001,

0xfa9e,	// (0x0009ad28) single_tv_pg_channel_pane_g

0xe530,	// (0x000997ba) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe530,	// (0x000997ba) bg_single_mobtv_pg_channel_thumb_pane

0xca6a,	// (0x00097cf4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xca6a,	// (0x00097cf4) single_mobtv_pg_channel_thumb_pane_g1

0xca78,	// (0x00097d02) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xca78,	// (0x00097d02) single_mobtv_pg_channel_thumb_pane_g2

0xca84,	// (0x00097d0e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xca84,	// (0x00097d0e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfaa3,	// (0x0009ad2d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfaa3,	// (0x0009ad2d) single_mobtv_pg_channel_thumb_pane_g

0xca90,	// (0x00097d1a) single_mobtv_pg_channel_thumb_pane_t1

0xca9e,	// (0x00097d28) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfaaa,	// (0x0009ad34) single_mobtv_pg_channel_thumb_pane_t

0xe776,	// (0x00099a00) bg_single_mobtv_pg_channel_table_pane_g1

0xe776,	// (0x00099a00) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf30d,	// (0x0009a597) bg_single_mobtv_pg_channel_table_pane_g

0xcaac,	// (0x00097d36) single_mobtv_pg_channel_table_pane_t1

0xcaba,	// (0x00097d44) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfaaf,	// (0x0009ad39) single_mobtv_pg_channel_table_pane_t

0x7ee8,	// (0x00093172) main_mobtv_info_pane_g1_ParamLimits

0x7ee8,	// (0x00093172) main_mobtv_info_pane_g1

0x7f06,	// (0x00093190) main_mobtv_info_pane_t1_ParamLimits

0x7f06,	// (0x00093190) main_mobtv_info_pane_t1

0x7f7e,	// (0x00093208) main_mobtv_info_pane_t2_ParamLimits

0x7f7e,	// (0x00093208) main_mobtv_info_pane_t2

0x0002,

0xfab9,	// (0x0009ad43) main_mobtv_info_pane_t_ParamLimits

0xfab9,	// (0x0009ad43) main_mobtv_info_pane_t

0x800f,	// (0x00093299) wait_bar_pane_cp05

0x8021,	// (0x000932ab) main_mobtv_loading_pane_g1_ParamLimits

0x8021,	// (0x000932ab) main_mobtv_loading_pane_g1

0x8032,	// (0x000932bc) main_mobtv_loading_pane_g2_ParamLimits

0x8032,	// (0x000932bc) main_mobtv_loading_pane_g2

0x803e,	// (0x000932c8) main_mobtv_loading_pane_g3_ParamLimits

0x803e,	// (0x000932c8) main_mobtv_loading_pane_g3

0x0002,

0xfac0,	// (0x0009ad4a) main_mobtv_loading_pane_g_ParamLimits

0xfac0,	// (0x0009ad4a) main_mobtv_loading_pane_g

0xcac8,	// (0x00097d52) main_mobtv_loading_pane_t1_ParamLimits

0xcac8,	// (0x00097d52) main_mobtv_loading_pane_t1

0xcae0,	// (0x00097d6a) main_mobtv_loading_pane_t2_ParamLimits

0xcae0,	// (0x00097d6a) main_mobtv_loading_pane_t2

0x0001,

0xfac7,	// (0x0009ad51) main_mobtv_loading_pane_t_ParamLimits

0xfac7,	// (0x0009ad51) main_mobtv_loading_pane_t

0x8051,	// (0x000932db) wait_bar_pane_cp06_ParamLimits

0x8051,	// (0x000932db) wait_bar_pane_cp06

0xcb04,	// (0x00097d8e) main_mobtv_programe_curr_pane_t1

0xcb12,	// (0x00097d9c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfacc,	// (0x0009ad56) main_mobtv_programe_curr_pane_t

0xcb20,	// (0x00097daa) main_mobtv_programe_next_pane_t1

0xcb2e,	// (0x00097db8) main_mobtv_programe_next_pane_t2

0xcb3c,	// (0x00097dc6) main_mobtv_programe_next_pane_t3

0x0002,

0xfad1,	// (0x0009ad5b) main_mobtv_programe_next_pane_t

0xddfa,	// (0x00099084) bg_popup_mobtv_noti_window_pane

0xcb4a,	// (0x00097dd4) popup_mobtv_noti_window_g1

0xcb52,	// (0x00097ddc) popup_mobtv_noti_window_t1

0xcb60,	// (0x00097dea) popup_mobtv_noti_window_t2

0x0001,

0xfad8,	// (0x0009ad62) popup_mobtv_noti_window_t

0xe776,	// (0x00099a00) bg_popup_mobtv_noti_window_pane_g1

0x9f80,	// (0x0009520a) sc_clock_pane

0x9f80,	// (0x0009520a) main_fs_bigclock_pane

0x7736,	// (0x000929c0) blid2_tripm_pane_t4_ParamLimits

0x7736,	// (0x000929c0) blid2_tripm_pane_t4

0x8060,	// (0x000932ea) sc_clock_pane_g1_ParamLimits

0x8060,	// (0x000932ea) sc_clock_pane_g1

0x8072,	// (0x000932fc) sc_clock_pane_t1_ParamLimits

0x8072,	// (0x000932fc) sc_clock_pane_t1

0x8096,	// (0x00093320) sc_clock_pane_t2_ParamLimits

0x8096,	// (0x00093320) sc_clock_pane_t2

0x80ae,	// (0x00093338) sc_clock_pane_t3_ParamLimits

0x80ae,	// (0x00093338) sc_clock_pane_t3

0x0004,

0xfadd,	// (0x0009ad67) sc_clock_pane_t_ParamLimits

0xfadd,	// (0x0009ad67) sc_clock_pane_t

0x8f5d,	// (0x000941e7) main_fs_bigclock_indicator_pane_ParamLimits

0x8f5d,	// (0x000941e7) main_fs_bigclock_indicator_pane

0x8174,	// (0x000933fe) main_fs_bigclock_pane_g1_ParamLimits

0x8174,	// (0x000933fe) main_fs_bigclock_pane_g1

0x8f69,	// (0x000941f3) main_fs_bigclock_pane_t1_ParamLimits

0x8f69,	// (0x000941f3) main_fs_bigclock_pane_t1

0x8f7b,	// (0x00094205) main_fs_bigclock_pane_t2_ParamLimits

0x8f7b,	// (0x00094205) main_fs_bigclock_pane_t2

0x8f8f,	// (0x00094219) main_fs_bigclock_pane_t3_ParamLimits

0x8f8f,	// (0x00094219) main_fs_bigclock_pane_t3

0x0002,

0xfc69,	// (0x0009aef3) main_fs_bigclock_pane_t_ParamLimits

0xfc69,	// (0x0009aef3) main_fs_bigclock_pane_t

0xd5fb,	// (0x00098885) main_fs_bigclock_indicator_pane_g1

0xc874,	// (0x00097afe) ncim_query_content_pane_g2_ParamLimits

0xc874,	// (0x00097afe) ncim_query_content_pane_g2

0x0001,

0xfa6a,	// (0x0009acf4) ncim_query_content_pane_g_ParamLimits

0xfa6a,	// (0x0009acf4) ncim_query_content_pane_g

0x80c5,	// (0x0009334f) sc_clock_pane_t4_ParamLimits

0x80c5,	// (0x0009334f) sc_clock_pane_t4

0x9f72,	// (0x000951fc) main_radioblah_pane

0xdba8,	// (0x00098e32) cell_call4_button_pane_t1_copy1_ParamLimits

0xdba8,	// (0x00098e32) cell_call4_button_pane_t1_copy1

0x7cb8,	// (0x00092f42) main_ncimui_pane_t1_ParamLimits

0x7cb8,	// (0x00092f42) main_ncimui_pane_t1

0x7cd2,	// (0x00092f5c) main_ncimui_pane_t2_ParamLimits

0x7cd2,	// (0x00092f5c) main_ncimui_pane_t2

0x0002,

0xfa63,	// (0x0009aced) main_ncimui_pane_t_ParamLimits

0xfa63,	// (0x0009aced) main_ncimui_pane_t

0xcb6e,	// (0x00097df8) main_radioblah_anim_pane_ParamLimits

0xcb6e,	// (0x00097df8) main_radioblah_anim_pane

0xcb7f,	// (0x00097e09) main_radioblah_info_pane_ParamLimits

0xcb7f,	// (0x00097e09) main_radioblah_info_pane

0xcb93,	// (0x00097e1d) main_radioblah_pane_t1_ParamLimits

0xcb93,	// (0x00097e1d) main_radioblah_pane_t1

0xcbaf,	// (0x00097e39) main_radioblah_pane_t2_ParamLimits

0xcbaf,	// (0x00097e39) main_radioblah_pane_t2

0x0003,

0xfafe,	// (0x0009ad88) main_radioblah_pane_t_ParamLimits

0xfafe,	// (0x0009ad88) main_radioblah_pane_t

0x831d,	// (0x000935a7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x831d,	// (0x000935a7) main_radioblah_rocker_ctrl_pane

0xcbf7,	// (0x00097e81) main_radioblah_info_pane_t1_ParamLimits

0xcbf7,	// (0x00097e81) main_radioblah_info_pane_t1

0x8375,	// (0x000935ff) main_radioblah_info_pane_t2_ParamLimits

0x8375,	// (0x000935ff) main_radioblah_info_pane_t2

0x0003,

0xfb07,	// (0x0009ad91) main_radioblah_info_pane_t_ParamLimits

0xfb07,	// (0x0009ad91) main_radioblah_info_pane_t

0xe776,	// (0x00099a00) main_radioblah_rocker_ctrl_pane_g1

0x8425,	// (0x000936af) main_radioblah_rocker_ctrl_pane_g2

0x842d,	// (0x000936b7) main_radioblah_rocker_ctrl_pane_g3

0x8435,	// (0x000936bf) main_radioblah_rocker_ctrl_pane_g4

0x843d,	// (0x000936c7) main_radioblah_rocker_ctrl_pane_g5

0x8445,	// (0x000936cf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb10,	// (0x0009ad9a) main_radioblah_rocker_ctrl_pane_g

0x79e2,	// (0x00092c6c) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc06,	// (0x00098e90) cam4_image_uncrop_qvga_pane

0xdc5b,	// (0x00098ee5) vid4_image_uncrop_qcif_pane

0xddd4,	// (0x0009905e) cam6_image_uncrop_qvga_pane_ParamLimits

0xddd4,	// (0x0009905e) cam6_image_uncrop_qvga_pane

0xc553,	// (0x000977dd) vid6_image_uncrop_qcif_pane_ParamLimits

0xc553,	// (0x000977dd) vid6_image_uncrop_qcif_pane

0xddfa,	// (0x00099084) bg_popup_preview_window_pane_cp03

0xc826,	// (0x00097ab0) list_cset_text2_pane

0xc82e,	// (0x00097ab8) main_cset6_text2_pane_g1

0xc836,	// (0x00097ac0) main_cset6_text2_pane_t1

0xcc31,	// (0x00097ebb) list_cset_text2_pane_t1_ParamLimits

0xcc31,	// (0x00097ebb) list_cset_text2_pane_t1

0x9f72,	// (0x000951fc) main_radioblah_pane_ParamLimits

0x7ffb,	// (0x00093285) main_mobtv_info_pane_t3_ParamLimits

0x7ffb,	// (0x00093285) main_mobtv_info_pane_t3

0x830b,	// (0x00093595) main_radioblah_pane_g1

0x8345,	// (0x000935cf) main_radioblah_info_pane_g1

0x83ca,	// (0x00093654) main_radioblah_info_pane_t3_ParamLimits

0x83ca,	// (0x00093654) main_radioblah_info_pane_t3

0x2cc7,	// (0x0008df51) highlight_cell_cale_month_pane_ParamLimits

0x2cc7,	// (0x0008df51) highlight_cell_cale_month_pane

0x9f80,	// (0x0009520a) main_phob_fisheye_pane

0xb527,	// (0x000967b1) scroll_pane_cp0031_ParamLimits

0xb527,	// (0x000967b1) scroll_pane_cp0031

0xc665,	// (0x000978ef) wait_bar_pane_cp08_ParamLimits

0x7a6b,	// (0x00092cf5) cset_list_set_pane_copy1_ParamLimits

0xcc4b,	// (0x00097ed5) highlight_cell_cale_month_pane_g1

0x844d,	// (0x000936d7) highlight_cell_cale_month_pane_t1

0xc2a2,	// (0x0009752c) list_gen_pane_cp01

0xbe69,	// (0x000970f3) scroll_pane_01

0x845b,	// (0x000936e5) list_single_double_fisheye_pane

0x8464,	// (0x000936ee) list_double_fisheye_pane_g1_ParamLimits

0x8464,	// (0x000936ee) list_double_fisheye_pane_g1

0x8470,	// (0x000936fa) list_double_fisheye_pane_g2_ParamLimits

0x8470,	// (0x000936fa) list_double_fisheye_pane_g2

0x8484,	// (0x0009370e) list_double_fisheye_pane_g3_ParamLimits

0x8484,	// (0x0009370e) list_double_fisheye_pane_g3

0x0004,

0xfb1d,	// (0x0009ada7) list_double_fisheye_pane_g_ParamLimits

0xfb1d,	// (0x0009ada7) list_double_fisheye_pane_g

0x84ad,	// (0x00093737) list_double_fisheye_pane_t1_ParamLimits

0x84ad,	// (0x00093737) list_double_fisheye_pane_t1

0x84c8,	// (0x00093752) list_double_fisheye_pane_t2_ParamLimits

0x84c8,	// (0x00093752) list_double_fisheye_pane_t2

0x0001,

0xfb28,	// (0x0009adb2) list_double_fisheye_pane_t_ParamLimits

0xfb28,	// (0x0009adb2) list_double_fisheye_pane_t

0x9f80,	// (0x0009520a) main_call5_pane

0x80f0,	// (0x0009337a) sc_swipe_pane_ParamLimits

0x80f0,	// (0x0009337a) sc_swipe_pane

0x84fd,	// (0x00093787) call5_image_pane_ParamLimits

0x84fd,	// (0x00093787) call5_image_pane

0x851a,	// (0x000937a4) call5_swipe_1_pane_ParamLimits

0x851a,	// (0x000937a4) call5_swipe_1_pane

0x852d,	// (0x000937b7) call5_swipe_2_pane_ParamLimits

0x852d,	// (0x000937b7) call5_swipe_2_pane

0x8558,	// (0x000937e2) popup_call5_audio_first_window_ParamLimits

0x8558,	// (0x000937e2) popup_call5_audio_first_window

0xe530,	// (0x000997ba) call5_swipe_1_pane_g1_ParamLimits

0xe530,	// (0x000997ba) call5_swipe_1_pane_g1

0xcc53,	// (0x00097edd) call5_swipe_1_pane_g2_ParamLimits

0xcc53,	// (0x00097edd) call5_swipe_1_pane_g2

0x0001,

0xfb2d,	// (0x0009adb7) call5_swipe_1_pane_g_ParamLimits

0xfb2d,	// (0x0009adb7) call5_swipe_1_pane_g

0xcc5f,	// (0x00097ee9) call5_swipe_1_pane_t1_ParamLimits

0xcc5f,	// (0x00097ee9) call5_swipe_1_pane_t1

0xe530,	// (0x000997ba) call5_swipe_2_pane_g1_ParamLimits

0xe530,	// (0x000997ba) call5_swipe_2_pane_g1

0xcc74,	// (0x00097efe) call5_swipe_2_pane_g2_ParamLimits

0xcc74,	// (0x00097efe) call5_swipe_2_pane_g2

0x0001,

0xfb32,	// (0x0009adbc) call5_swipe_2_pane_g_ParamLimits

0xfb32,	// (0x0009adbc) call5_swipe_2_pane_g

0xcc80,	// (0x00097f0a) call5_swipe_2_pane_t1_ParamLimits

0xcc80,	// (0x00097f0a) call5_swipe_2_pane_t1

0xcc95,	// (0x00097f1f) sc_swipe_pane_g1_ParamLimits

0xcc95,	// (0x00097f1f) sc_swipe_pane_g1

0xcca2,	// (0x00097f2c) sc_swipe_pane_g2_ParamLimits

0xcca2,	// (0x00097f2c) sc_swipe_pane_g2

0x0001,

0xfb37,	// (0x0009adc1) sc_swipe_pane_g_ParamLimits

0xfb37,	// (0x0009adc1) sc_swipe_pane_g

0xccae,	// (0x00097f38) sc_swipe_pane_t1_ParamLimits

0xccae,	// (0x00097f38) sc_swipe_pane_t1

0x9f80,	// (0x0009520a) main_cmail_launcher_pane

0x856d,	// (0x000937f7) aid_size_cell_cmail_l_ParamLimits

0x856d,	// (0x000937f7) aid_size_cell_cmail_l

0x857b,	// (0x00093805) grid_cmail_l_pane_ParamLimits

0x857b,	// (0x00093805) grid_cmail_l_pane

0x8594,	// (0x0009381e) cell_cmail_l_pane_ParamLimits

0x8594,	// (0x0009381e) cell_cmail_l_pane

0xccc3,	// (0x00097f4d) cell_cmail_l_pane_g1_ParamLimits

0xccc3,	// (0x00097f4d) cell_cmail_l_pane_g1

0xcccf,	// (0x00097f59) cell_cmail_l_pane_t1_ParamLimits

0xcccf,	// (0x00097f59) cell_cmail_l_pane_t1

0xcce5,	// (0x00097f6f) cell_cmail_l_pane_t2_ParamLimits

0xcce5,	// (0x00097f6f) cell_cmail_l_pane_t2

0x0001,

0xfb3c,	// (0x0009adc6) cell_cmail_l_pane_t_ParamLimits

0xfb3c,	// (0x0009adc6) cell_cmail_l_pane_t

0xe4c9,	// (0x00099753) grid_highlight_pane_cp018_ParamLimits

0xe4c9,	// (0x00099753) grid_highlight_pane_cp018

0x0f36,	// (0x0008c1c0) main2_pane_ParamLimits

0x0f36,	// (0x0008c1c0) main2_pane

0xe631,	// (0x000998bb) popup_sp_fs_action_menu_bg_pane_g1

0xe639,	// (0x000998c3) popup_sp_fs_action_menu_bg_pane_g2

0xe641,	// (0x000998cb) popup_sp_fs_action_menu_bg_pane_g3

0xe649,	// (0x000998d3) popup_sp_fs_action_menu_bg_pane_g4

0xe651,	// (0x000998db) popup_sp_fs_action_menu_bg_pane_g5

0xe659,	// (0x000998e3) popup_sp_fs_action_menu_bg_pane_g6

0xe661,	// (0x000998eb) popup_sp_fs_action_menu_bg_pane_g7

0xe669,	// (0x000998f3) popup_sp_fs_action_menu_bg_pane_g8

0xe671,	// (0x000998fb) popup_sp_fs_action_menu_bg_pane_g9

0xe679,	// (0x00099903) popup_sp_fs_action_menu_bg_pane_g10

0xe679,	// (0x00099903) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0x0004,	// (0x0008b28e) popup_sp_fs_action_menu_bg_pane_g

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g2

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g3_g3

0x0002,

0x00b2,	// (0x0008b33c) list_medium_line_x2_t3_g3_g_ParamLimits

0x00b2,	// (0x0008b33c) list_medium_line_x2_t3_g3_g

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t2

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g3_t

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g2_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_x2_t3_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_x2_t3_g2_g

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t2

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g2_t

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g2

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g3

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g4_g4

0x0003,

0x00c5,	// (0x0008b34f) list_medium_line_x2_t4_g4_g_ParamLimits

0x00c5,	// (0x0008b34f) list_medium_line_x2_t4_g4_g

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t2

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t3

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1de,	// (0x0009a468) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1de,	// (0x0009a468) list_medium_line_x2_t4_g4_t

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g2

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g3

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g4_g4

0x0003,

0x00c5,	// (0x0008b34f) list_medium_line_x2_t2_g4_g_ParamLimits

0x00c5,	// (0x0008b34f) list_medium_line_x2_t2_g4_g

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g4_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g4_t

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g2

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g3_g3

0x0002,

0x00b2,	// (0x0008b33c) list_medium_line_x2_t2_g3_g_ParamLimits

0x00b2,	// (0x0008b33c) list_medium_line_x2_t2_g3_g

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g3_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g3_t

0x2e37,	// (0x0008e0c1) main_sp_fs_list_pane_ParamLimits

0x2e37,	// (0x0008e0c1) main_sp_fs_list_pane

0x2e43,	// (0x0008e0cd) sp_fs_scroll_pane_ParamLimits

0x2e43,	// (0x0008e0cd) sp_fs_scroll_pane

0xeca2,	// (0x00099f2c) list_medium_line_x2_t3_t1

0xeca2,	// (0x00099f2c) list_medium_line_x2_t3_t2

0xeca2,	// (0x00099f2c) list_medium_line_x2_t3_t3

0x0002,

0x0180,	// (0x0008b40a) list_medium_line_x2_t3_t

0xeca2,	// (0x00099f2c) list_medium_line_x3_t4_t1

0xeca2,	// (0x00099f2c) list_medium_line_x3_t4_t2

0xeca2,	// (0x00099f2c) list_medium_line_x3_t4_t3

0xeca2,	// (0x00099f2c) list_medium_line_x3_t4_t4

0x0003,

0x0187,	// (0x0008b411) list_medium_line_x3_t4_t

0xeca2,	// (0x00099f2c) list_medium_line_x4_t5_t1

0xeca2,	// (0x00099f2c) list_medium_line_x4_t5_t2

0xeca2,	// (0x00099f2c) list_medium_line_x4_t5_t3

0xeca2,	// (0x00099f2c) list_medium_line_x4_t5_t4

0xeca2,	// (0x00099f2c) list_medium_line_x4_t5_t5

0x0004,

0x0190,	// (0x0008b41a) list_medium_line_x4_t5_t

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g1

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g2

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g3

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t4_g4_g4

0x0003,

0x00c5,	// (0x0008b34f) list_medium_line_t4_g4_g_ParamLimits

0x00c5,	// (0x0008b34f) list_medium_line_t4_g4_g

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t1

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t2

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t3

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t4_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t4_g4_t4

0x0003,

0xf1de,	// (0x0009a468) list_medium_line_t4_g4_t_ParamLimits

0xf1de,	// (0x0009a468) list_medium_line_t4_g4_t

0x2ef1,	// (0x0008e17b) chi_dic_find_pane_g1

0x472d,	// (0x0008f9b7) main_tport_pane

0xeca2,	// (0x00099f2c) list_medium_line_plain_t1

0xe530,	// (0x000997ba) list_medium_line_t2_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g2_g1

0xe530,	// (0x000997ba) list_medium_line_t2_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_t2_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_t2_g2_g

0xe748,	// (0x000999d2) list_medium_line_t2_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_g2_t1

0xe748,	// (0x000999d2) list_medium_line_t2_g2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_g2_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_t2_g2_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_t2_g2_t

0xc2ab,	// (0x00097535) aid_sp_fs_list_icon_a_sm

0xc2b3,	// (0x0009753d) aid_sp_fs_list_icon_d

0xc2bb,	// (0x00097545) aid_sp_fs_text_primary

0xc2c4,	// (0x0009754e) aid_sp_fs_text_secondary

0xddfa,	// (0x00099084) list_medium_line

0xddfa,	// (0x00099084) list_medium_line_g2

0xddfa,	// (0x00099084) list_medium_line_g3

0xddfa,	// (0x00099084) list_medium_line_plain

0xddfa,	// (0x00099084) list_medium_line_plain_t2

0xddfa,	// (0x00099084) list_medium_line_plain_t3

0xddfa,	// (0x00099084) list_medium_line_right_icon

0xddfa,	// (0x00099084) list_medium_line_right_iconx2

0xddfa,	// (0x00099084) list_medium_line_t2

0xddfa,	// (0x00099084) list_medium_line_t2_g2

0xddfa,	// (0x00099084) list_medium_line_t2_g3

0xddfa,	// (0x00099084) list_medium_line_t2_right_icon

0xddfa,	// (0x00099084) list_medium_line_t2_right_iconx2

0xddfa,	// (0x00099084) list_medium_line_t3

0xddfa,	// (0x00099084) list_medium_line_t3_g2

0xddfa,	// (0x00099084) list_medium_line_t3_g3

0xddfa,	// (0x00099084) list_medium_line_t3_right_iconx2

0xddfa,	// (0x00099084) list_medium_line_t4_g4

0xddfa,	// (0x00099084) list_medium_line_x2

0xddfa,	// (0x00099084) list_medium_line_x2_t2_g2

0xddfa,	// (0x00099084) list_medium_line_x2_t2_g3

0xddfa,	// (0x00099084) list_medium_line_x2_t2_g4

0xddfa,	// (0x00099084) list_medium_line_x2_t3

0xddfa,	// (0x00099084) list_medium_line_x2_t3_g2

0xddfa,	// (0x00099084) list_medium_line_x2_t3_g3

0xddfa,	// (0x00099084) list_medium_line_x2_t3_g4

0xddfa,	// (0x00099084) list_medium_line_x2_t4_g2

0xddfa,	// (0x00099084) list_medium_line_x2_t4_g4

0xddfa,	// (0x00099084) list_medium_line_x3

0xddfa,	// (0x00099084) list_medium_line_x3_t4

0xddfa,	// (0x00099084) list_medium_line_x3_t4_g4

0xddfa,	// (0x00099084) list_medium_line_x4_t4

0xddfa,	// (0x00099084) list_medium_line_x4_t4_g7

0xddfa,	// (0x00099084) list_medium_line_x4_t5

0x7528,	// (0x000927b2) list_single_fs_dyc_pane_ParamLimits

0x7528,	// (0x000927b2) list_single_fs_dyc_pane

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g1

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g2

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g3

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g4

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g5

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x4_t4_g7_g6

0xe53e,	// (0x000997c8) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe53e,	// (0x000997c8) list_medium_line_x4_t4_g7_g7

0x0006,

0x0a0a,	// (0x0008bc94) list_medium_line_x4_t4_g7_g_ParamLimits

0x0a0a,	// (0x0008bc94) list_medium_line_x4_t4_g7_g

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t1

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t2

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x4_t4_g7_t3

0x3342,	// (0x0008e5cc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3342,	// (0x0008e5cc) list_medium_line_x4_t4_g7_t4

0x3342,	// (0x0008e5cc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3342,	// (0x0008e5cc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa53,	// (0x0009acdd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa53,	// (0x0009acdd) list_medium_line_x4_t4_g7_t

0x7c6f,	// (0x00092ef9) list_single_dyc_row_pane_ParamLimits

0x7c6f,	// (0x00092ef9) list_single_dyc_row_pane

0x84ea,	// (0x00093774) call5_gesture_pane_ParamLimits

0x84ea,	// (0x00093774) call5_gesture_pane

0x8540,	// (0x000937ca) call5_windows_pane_ParamLimits

0x8540,	// (0x000937ca) call5_windows_pane

0x85a6,	// (0x00093830) call5_swipe_1_pane_cp_ParamLimits

0x85a6,	// (0x00093830) call5_swipe_1_pane_cp

0x85b2,	// (0x0009383c) call5_swipe_2_pane_cp_ParamLimits

0x85b2,	// (0x0009383c) call5_swipe_2_pane_cp

0xe740,	// (0x000999ca) call5_image_pane_cp

0x85be,	// (0x00093848) popup_call5_audio_first_window_cp_ParamLimits

0x85be,	// (0x00093848) popup_call5_audio_first_window_cp

0xcc95,	// (0x00097f1f) call5_swipe_1_pane_g1_cp_ParamLimits

0xcc95,	// (0x00097f1f) call5_swipe_1_pane_g1_cp

0xcd02,	// (0x00097f8c) call5_swipe_1_pane_g2_cp

0xccae,	// (0x00097f38) call5_swipe_1_pane_t1_cp_ParamLimits

0xccae,	// (0x00097f38) call5_swipe_1_pane_t1_cp

0xcc95,	// (0x00097f1f) call5_swipe_2_pane_g1_cp_ParamLimits

0xcc95,	// (0x00097f1f) call5_swipe_2_pane_g1_cp

0xcd0a,	// (0x00097f94) call5_swipe_2_pane_g2_cp

0xcd12,	// (0x00097f9c) call5_swipe_2_pane_t1_cp_ParamLimits

0xcd12,	// (0x00097f9c) call5_swipe_2_pane_t1_cp

0xe4c9,	// (0x00099753) main_sp_fs_email_pane

0xcd27,	// (0x00097fb1) main_sp_fs_listscroll_pane_te

0x85cc,	// (0x00093856) popup_sp_fs_action_menu_pane_ParamLimits

0x85cc,	// (0x00093856) popup_sp_fs_action_menu_pane

0xe776,	// (0x00099a00) bg_sp_fs_ctrlbar_pane_g1

0xcd30,	// (0x00097fba) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd39,	// (0x00097fc3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd42,	// (0x00097fcc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe776,	// (0x00099a00) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb41,	// (0x0009adcb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb02c,	// (0x000962b6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb02c,	// (0x000962b6) bg_sp_fs_ctrlbar_ddmenu_pane

0xcd4b,	// (0x00097fd5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcd4b,	// (0x00097fd5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd57,	// (0x00097fe1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcd57,	// (0x00097fe1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb4a,	// (0x0009add4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb4a,	// (0x0009add4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcd63,	// (0x00097fed) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcd63,	// (0x00097fed) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe776,	// (0x00099a00) list_medium_line_t2_right_icon_g1

0xeca2,	// (0x00099f2c) list_medium_line_t2_right_icon_t1

0xeca2,	// (0x00099f2c) list_medium_line_t2_right_icon_t2

0x0001,

0x0b15,	// (0x0008bd9f) list_medium_line_t2_right_icon_t

0x3356,	// (0x0008e5e0) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3356,	// (0x0008e5e0) bg_sp_fs_ctrlbar_pane

0x8661,	// (0x000938eb) main_sp_fs_ctrlbar_button_pane_cp01

0x866b,	// (0x000938f5) main_sp_fs_ctrlbar_ddmenu_pane

0xcdb7,	// (0x00098041) main_sp_fs_ctrlbar_pane_g1

0xcdc3,	// (0x0009804d) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb4f,	// (0x0009add9) main_sp_fs_ctrlbar_pane_g

0x86a9,	// (0x00093933) main_sp_fs_ctrlbar_pane_t1

0x86e8,	// (0x00093972) main_sp_fs_ctrlbar_pane

0x870c,	// (0x00093996) main_sp_fs_listscroll_pane_te_cp01

0x872c,	// (0x000939b6) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x872c,	// (0x000939b6) popup_sp_fs_action_menu_pane_cp01

0xe4c9,	// (0x00099753) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe4c9,	// (0x00099753) bg_sp_fs_highlight_list_pane_cp01

0xcdea,	// (0x00098074) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcdea,	// (0x00098074) sp_fs_action_menu_list_gene_pane_g1

0xcdf9,	// (0x00098083) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcdf9,	// (0x00098083) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb5d,	// (0x0009ade7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb5d,	// (0x0009ade7) sp_fs_action_menu_list_gene_pane_g

0xce06,	// (0x00098090) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xce06,	// (0x00098090) sp_fs_action_menu_list_gene_pane_t1

0xce1e,	// (0x000980a8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xce1e,	// (0x000980a8) sp_fs_action_menu_list_gene_pane

0xce41,	// (0x000980cb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xce41,	// (0x000980cb) popup_sp_fs_action_menu_bg_pane

0xce4f,	// (0x000980d9) sp_fs_action_menu_list_pane_ParamLimits

0xce4f,	// (0x000980d9) sp_fs_action_menu_list_pane

0x8751,	// (0x000939db) sp_fs_scroll_pane_cp01_ParamLimits

0x8751,	// (0x000939db) sp_fs_scroll_pane_cp01

0xeca2,	// (0x00099f2c) list_medium_line_plain_t2_t1

0xeca2,	// (0x00099f2c) list_medium_line_plain_t2_t2

0x0001,

0x0b15,	// (0x0008bd9f) list_medium_line_plain_t2_t

0xeca2,	// (0x00099f2c) list_medium_line_plain_t3_t1

0xeca2,	// (0x00099f2c) list_medium_line_plain_t3_t2

0xeca2,	// (0x00099f2c) list_medium_line_plain_t3_t3

0x0002,

0x0180,	// (0x0008b40a) list_medium_line_plain_t3_t

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g2_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t2_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_x2_t2_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_x2_t2_g2_g

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g2_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_x2_t2_g2_t

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g2_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t4_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_x2_t4_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_x2_t4_g2_g

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t2

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t3

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1de,	// (0x0009a468) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1de,	// (0x0009a468) list_medium_line_x2_t4_g2_t

0xe776,	// (0x00099a00) list_medium_line_t3_right_iconx2_g1

0xe776,	// (0x00099a00) list_medium_line_t3_right_iconx2_g2

0xe776,	// (0x00099a00) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf312,	// (0x0009a59c) list_medium_line_t3_right_iconx2_g

0xeca2,	// (0x00099f2c) list_medium_line_t3_right_iconx2_t1

0xeca2,	// (0x00099f2c) list_medium_line_t3_right_iconx2_t2

0x0001,

0x0b15,	// (0x0008bd9f) list_medium_line_t3_right_iconx2_t

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g1

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g2

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g3

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x3_t4_g4_g4

0x0003,

0x00c5,	// (0x0008b34f) list_medium_line_x3_t4_g4_g_ParamLimits

0x00c5,	// (0x0008b34f) list_medium_line_x3_t4_g4_g

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t1

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t2

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t3

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1de,	// (0x0009a468) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1de,	// (0x0009a468) list_medium_line_x3_t4_g4_t

0x8777,	// (0x00093a01) list_single_dyc_row_text_pane_t1_ParamLimits

0x8777,	// (0x00093a01) list_single_dyc_row_text_pane_t1

0x87c0,	// (0x00093a4a) list_single_dyc_row_text_pane_t2_ParamLimits

0x87c0,	// (0x00093a4a) list_single_dyc_row_text_pane_t2

0xce73,	// (0x000980fd) list_single_dyc_row_text_pane_t3_ParamLimits

0xce73,	// (0x000980fd) list_single_dyc_row_text_pane_t3

0x0005,

0xfb62,	// (0x0009adec) list_single_dyc_row_text_pane_t_ParamLimits

0xfb62,	// (0x0009adec) list_single_dyc_row_text_pane_t

0xce97,	// (0x00098121) list_single_dyc_row_pane_g1_ParamLimits

0xce97,	// (0x00098121) list_single_dyc_row_pane_g1

0xcea3,	// (0x0009812d) list_single_dyc_row_pane_g2_ParamLimits

0xcea3,	// (0x0009812d) list_single_dyc_row_pane_g2

0xceaf,	// (0x00098139) list_single_dyc_row_pane_g3_ParamLimits

0xceaf,	// (0x00098139) list_single_dyc_row_pane_g3

0xcebb,	// (0x00098145) list_single_dyc_row_pane_g4_ParamLimits

0xcebb,	// (0x00098145) list_single_dyc_row_pane_g4

0x0003,

0xfb6f,	// (0x0009adf9) list_single_dyc_row_pane_g_ParamLimits

0xfb6f,	// (0x0009adf9) list_single_dyc_row_pane_g

0xcec7,	// (0x00098151) list_single_dyc_row_text_pane_ParamLimits

0xcec7,	// (0x00098151) list_single_dyc_row_text_pane

0xddfa,	// (0x00099084) bg_sp_fs_scroll_pane

0xcee6,	// (0x00098170) thumb_sp_fs_scroll_pane

0xe530,	// (0x000997ba) list_medium_line_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g1

0xe748,	// (0x000999d2) list_medium_line_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t1

0xe530,	// (0x000997ba) list_medium_line_x2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_g1

0xe530,	// (0x000997ba) list_medium_line_x2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_x2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_x2_g

0xe748,	// (0x000999d2) list_medium_line_x2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t1

0xe530,	// (0x000997ba) list_medium_line_x3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x3_g1

0xbcb0,	// (0x00096f3a) list_medium_line_x3_g2_ParamLimits

0xbcb0,	// (0x00096f3a) list_medium_line_x3_g2

0x0001,

0xfb78,	// (0x0009ae02) list_medium_line_x3_g_ParamLimits

0xfb78,	// (0x0009ae02) list_medium_line_x3_g

0xceef,	// (0x00098179) list_medium_line_x3_t1_ParamLimits

0xceef,	// (0x00098179) list_medium_line_x3_t1

0xcf03,	// (0x0009818d) thumb_sp_fs_scroll_pane_g1

0xcf0c,	// (0x00098196) thumb_sp_fs_scroll_pane_g2

0xcf15,	// (0x0009819f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb7d,	// (0x0009ae07) thumb_sp_fs_scroll_pane_g

0xcf03,	// (0x0009818d) bg_sp_fs_scroll_pane_g1

0xcf0c,	// (0x00098196) bg_sp_fs_scroll_pane_g2

0xcf15,	// (0x0009819f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb7d,	// (0x0009ae07) bg_sp_fs_scroll_pane_g

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g1

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g2

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g3

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_x2_t3_g4_g4

0x0003,

0x00c5,	// (0x0008b34f) list_medium_line_x2_t3_g4_g_ParamLimits

0x00c5,	// (0x0008b34f) list_medium_line_x2_t3_g4_g

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t1

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t2

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_x2_t3_g4_t

0xe530,	// (0x000997ba) list_medium_line_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g2_g1

0xe530,	// (0x000997ba) list_medium_line_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_g2_g

0xe748,	// (0x000999d2) list_medium_line_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_g2_t1

0xe530,	// (0x000997ba) list_medium_line_t3_g2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g2_g1

0xe530,	// (0x000997ba) list_medium_line_t3_g2_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g2_g2

0x0001,

0x00c0,	// (0x0008b34a) list_medium_line_t3_g2_g_ParamLimits

0x00c0,	// (0x0008b34a) list_medium_line_t3_g2_g

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t1

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t2

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g2_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_t3_g2_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_t3_g2_t

0xe776,	// (0x00099a00) list_medium_line_right_icon_g1

0xeca2,	// (0x00099f2c) list_medium_line_right_icon_t1

0xe530,	// (0x000997ba) list_medium_line_t2_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g1

0xe748,	// (0x000999d2) list_medium_line_t2_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_t1

0xe748,	// (0x000999d2) list_medium_line_t2_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_t2_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_t2_t

0xe530,	// (0x000997ba) list_medium_line_t3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g1

0xe748,	// (0x000999d2) list_medium_line_t3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_t1

0xe748,	// (0x000999d2) list_medium_line_t3_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_t2

0xe748,	// (0x000999d2) list_medium_line_t3_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_t3_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_t3_t

0xe530,	// (0x000997ba) list_medium_line_g3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g3_g1

0xe530,	// (0x000997ba) list_medium_line_g3_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g3_g2

0xe530,	// (0x000997ba) list_medium_line_g3_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_g3_g3

0x0002,

0x00b2,	// (0x0008b33c) list_medium_line_g3_g_ParamLimits

0x00b2,	// (0x0008b33c) list_medium_line_g3_g

0xe748,	// (0x000999d2) list_medium_line_g3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_g3_t1

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g1

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g2

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t2_g3_g3

0x0002,

0x00b2,	// (0x0008b33c) list_medium_line_t2_g3_g_ParamLimits

0x00b2,	// (0x0008b33c) list_medium_line_t2_g3_g

0xe748,	// (0x000999d2) list_medium_line_t2_g3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_g3_t1

0xe748,	// (0x000999d2) list_medium_line_t2_g3_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t2_g3_t2

0x0001,

0xf1ba,	// (0x0009a444) list_medium_line_t2_g3_t_ParamLimits

0xf1ba,	// (0x0009a444) list_medium_line_t2_g3_t

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g1_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g1

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g2_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g2

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g3_ParamLimits

0xe530,	// (0x000997ba) list_medium_line_t3_g3_g3

0x0002,

0x00b2,	// (0x0008b33c) list_medium_line_t3_g3_g_ParamLimits

0x00b2,	// (0x0008b33c) list_medium_line_t3_g3_g

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t1_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t1

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t2_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t2

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t3_ParamLimits

0xe748,	// (0x000999d2) list_medium_line_t3_g3_t3

0x0002,

0xf1d7,	// (0x0009a461) list_medium_line_t3_g3_t_ParamLimits

0xf1d7,	// (0x0009a461) list_medium_line_t3_g3_t

0xe776,	// (0x00099a00) list_medium_line_right_iconx2_g1

0xe776,	// (0x00099a00) list_medium_line_right_iconx2_g2

0x0001,

0xf30d,	// (0x0009a597) list_medium_line_right_iconx2_g

0xeca2,	// (0x00099f2c) list_medium_line_right_iconx2_t1

0xe776,	// (0x00099a00) list_medium_line_t2_right_iconx2_g1

0xe776,	// (0x00099a00) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf30d,	// (0x0009a597) list_medium_line_t2_right_iconx2_g

0xeca2,	// (0x00099f2c) list_medium_line_t2_right_iconx2_t1

0xeca2,	// (0x00099f2c) list_medium_line_t2_right_iconx2_t2

0x0001,

0x0b15,	// (0x0008bd9f) list_medium_line_t2_right_iconx2_t

0xeca2,	// (0x00099f2c) list_medium_line_x4_t4_t1

0xeca2,	// (0x00099f2c) list_medium_line_x4_t4_t2

0xeca2,	// (0x00099f2c) list_medium_line_x4_t4_t3

0xeca2,	// (0x00099f2c) list_medium_line_x4_t4_t4

0x0003,

0x0187,	// (0x0008b411) list_medium_line_x4_t4_t

0x8936,	// (0x00093bc0) tport_appsw_pane_ParamLimits

0x8936,	// (0x00093bc0) tport_appsw_pane

0x894d,	// (0x00093bd7) tport_contact_pane_ParamLimits

0x894d,	// (0x00093bd7) tport_contact_pane

0x8965,	// (0x00093bef) tport_listscroll_pane_ParamLimits

0x8965,	// (0x00093bef) tport_listscroll_pane

0x8979,	// (0x00093c03) cell_tport_appsw_pane_ParamLimits

0x8979,	// (0x00093c03) cell_tport_appsw_pane

0x3320,	// (0x0008e5aa) tport_appsw_pane_g1_ParamLimits

0x3320,	// (0x0008e5aa) tport_appsw_pane_g1

0xcf1e,	// (0x000981a8) tport_contact_pane_g1

0xcf27,	// (0x000981b1) tport_contact_pane_t1

0xcf35,	// (0x000981bf) tport_contact_pane_t2

0x0001,

0xfb84,	// (0x0009ae0e) tport_contact_pane_t

0xcf43,	// (0x000981cd) list_tport_pane

0xcf4c,	// (0x000981d6) scroll_pane_cp_030

0x89c3,	// (0x00093c4d) cell_tport_appsw_pane_g1

0x89d3,	// (0x00093c5d) cell_tport_appsw_pane_t1

0x89e1,	// (0x00093c6b) grid_highlight_pane_cp019

0x89e9,	// (0x00093c73) list_tport_double_graphic_pane_ParamLimits

0x89e9,	// (0x00093c73) list_tport_double_graphic_pane

0xe4c9,	// (0x00099753) list_highlight_pane_cp023_ParamLimits

0xe4c9,	// (0x00099753) list_highlight_pane_cp023

0x8a00,	// (0x00093c8a) list_tport_double_graphic_pane_g1_ParamLimits

0x8a00,	// (0x00093c8a) list_tport_double_graphic_pane_g1

0x8a0d,	// (0x00093c97) list_tport_double_graphic_pane_t1_ParamLimits

0x8a0d,	// (0x00093c97) list_tport_double_graphic_pane_t1

0x8a22,	// (0x00093cac) list_tport_double_graphic_pane_t2_ParamLimits

0x8a22,	// (0x00093cac) list_tport_double_graphic_pane_t2

0x0001,

0xfb90,	// (0x0009ae1a) list_tport_double_graphic_pane_t_ParamLimits

0xfb90,	// (0x0009ae1a) list_tport_double_graphic_pane_t

0xddfa,	// (0x00099084) main_cale_note_pane

0x6656,	// (0x000918e0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6656,	// (0x000918e0) cell_vitu2_function_top_wide_pane_cp01

0x800f,	// (0x00093299) wait_bar_pane_cp05_ParamLimits

0xe4c9,	// (0x00099753) listscroll_cmail_pane

0xcf55,	// (0x000981df) list_cmail_pane

0x8a34,	// (0x00093cbe) list_cmail_body_pane

0x8a4b,	// (0x00093cd5) list_single_cmail_header_caption_pane

0xcf65,	// (0x000981ef) list_single_cmail_header_detail_pane_ParamLimits

0xcf65,	// (0x000981ef) list_single_cmail_header_detail_pane

0xcf97,	// (0x00098221) list_single_cmail_header_caption_pane_t1

0x8a68,	// (0x00093cf2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8a68,	// (0x00093cf2) list_single_cmail_header_detail_pane_g1

0xcfae,	// (0x00098238) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcfae,	// (0x00098238) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb95,	// (0x0009ae1f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb95,	// (0x0009ae1f) list_single_cmail_header_detail_pane_g

0xcfc7,	// (0x00098251) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcfc7,	// (0x00098251) list_single_cmail_header_detail_pane_t1

0xd027,	// (0x000982b1) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd027,	// (0x000982b1) list_single_cmail_header_editor_pane_bg

0xca61,	// (0x00097ceb) list_cmail_body_pane_g1

0xd03e,	// (0x000982c8) list_cmail_body_pane_t1

0xbd4b,	// (0x00096fd5) list_single_cmail_header_editor_pane_bg_g1

0xe98b,	// (0x00099c15) list_single_cmail_header_editor_pane_bg_g1_copy1

0xbd5b,	// (0x00096fe5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xbd53,	// (0x00096fdd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbf7f,	// (0x00097209) list_single_cmail_header_editor_pane_bg_g1_copy4

0xbd7b,	// (0x00097005) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xbd6b,	// (0x00096ff5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xbd73,	// (0x00096ffd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe96b,	// (0x00099bf5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a80,	// (0x00093d0a) calenote_gesture_pane_ParamLimits

0x8a80,	// (0x00093d0a) calenote_gesture_pane

0x8aa0,	// (0x00093d2a) calenote_window_pane_ParamLimits

0x8aa0,	// (0x00093d2a) calenote_window_pane

0xd04c,	// (0x000982d6) popup_note_window_cp01

0x8abc,	// (0x00093d46) calenote_swipe_1_pane_ParamLimits

0x8abc,	// (0x00093d46) calenote_swipe_1_pane

0x85b2,	// (0x0009383c) calenote_swipe_2_pane_ParamLimits

0x85b2,	// (0x0009383c) calenote_swipe_2_pane

0xcc95,	// (0x00097f1f) calenote_swipe_1_pane_g1_ParamLimits

0xcc95,	// (0x00097f1f) calenote_swipe_1_pane_g1

0xcca2,	// (0x00097f2c) calenote_swipe_1_pane_g2_ParamLimits

0xcca2,	// (0x00097f2c) calenote_swipe_1_pane_g2

0x0001,

0xfb37,	// (0x0009adc1) calenote_swipe_1_pane_g_ParamLimits

0xfb37,	// (0x0009adc1) calenote_swipe_1_pane_g

0xd05e,	// (0x000982e8) calenote_swipe_1_pane_t1_ParamLimits

0xd05e,	// (0x000982e8) calenote_swipe_1_pane_t1

0xcc95,	// (0x00097f1f) calenote_swipe_2_pane_g1_ParamLimits

0xcc95,	// (0x00097f1f) calenote_swipe_2_pane_g1

0xd07d,	// (0x00098307) calenote_swipe_2_pane_g2_ParamLimits

0xd07d,	// (0x00098307) calenote_swipe_2_pane_g2

0x0001,

0xfba1,	// (0x0009ae2b) calenote_swipe_2_pane_g_ParamLimits

0xfba1,	// (0x0009ae2b) calenote_swipe_2_pane_g

0xd089,	// (0x00098313) calenote_swipe_2_pane_t1_ParamLimits

0xd089,	// (0x00098313) calenote_swipe_2_pane_t1

0xddfa,	// (0x00099084) main_mup_navstr_pane

0x54c2,	// (0x0009074c) main_mup3_pane_t7_ParamLimits

0x54c2,	// (0x0009074c) main_mup3_pane_t7

0xbaa5,	// (0x00096d2f) main_mp4_pane_g6_ParamLimits

0xbaa5,	// (0x00096d2f) main_mp4_pane_g6

0xdb96,	// (0x00098e20) main_image3_pane_t4_ParamLimits

0xdb96,	// (0x00098e20) main_image3_pane_t4

0x8ad1,	// (0x00093d5b) popup_navstr_preview_pane_ParamLimits

0x8ad1,	// (0x00093d5b) popup_navstr_preview_pane

0x8ae1,	// (0x00093d6b) scroll_navstr_pane_ParamLimits

0x8ae1,	// (0x00093d6b) scroll_navstr_pane

0xddfa,	// (0x00099084) bg_popup_preview_window_pane_cp04

0xd0b0,	// (0x0009833a) popup_navstr_preview_pane_t1

0x8af5,	// (0x00093d7f) scroll_navstr_pane_g1_ParamLimits

0x8af5,	// (0x00093d7f) scroll_navstr_pane_g1

0x8b09,	// (0x00093d93) scroll_navstr_pane_t1_ParamLimits

0x8b09,	// (0x00093d93) scroll_navstr_pane_t1

0xd055,	// (0x000982df) bg_button_pane_cp014

0xd055,	// (0x000982df) bg_button_pane_cp030

0x8490,	// (0x0009371a) list_double_fisheye_pane_g4_ParamLimits

0x8490,	// (0x0009371a) list_double_fisheye_pane_g4

0x849c,	// (0x00093726) list_double_fisheye_pane_g5_ParamLimits

0x849c,	// (0x00093726) list_double_fisheye_pane_g5

0x2e43,	// (0x0008e0cd) sp_fs_scroll_pane_cp03

0xcdb7,	// (0x00098041) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcdc3,	// (0x0009804d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb4f,	// (0x0009add9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x86a9,	// (0x00093933) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcf5d,	// (0x000981e7) sp_fs_scroll_pane_cp02

0xe69c,	// (0x00099926) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe69c,	// (0x00099926) popup_sp_fs_calendar_preview_list_single_pane

0xddfa,	// (0x00099084) main_cam6_pano_pane

0x9f72,	// (0x000951fc) main_mup3_pane_ParamLimits

0xddfa,	// (0x00099084) main_phacti_pane

0x7ee0,	// (0x0009316a) bg_button_pane_cp11

0x7efa,	// (0x00093184) main_mobtv_info_pane_g2_ParamLimits

0x7efa,	// (0x00093184) main_mobtv_info_pane_g2

0x0001,

0xfab4,	// (0x0009ad3e) main_mobtv_info_pane_g_ParamLimits

0xfab4,	// (0x0009ad3e) main_mobtv_info_pane_g

0x80d7,	// (0x00093361) sc_clock_pane_t5_ParamLimits

0x80d7,	// (0x00093361) sc_clock_pane_t5

0x830b,	// (0x00093595) main_radioblah_pane_g1_ParamLimits

0xcbc7,	// (0x00097e51) main_radioblah_pane_t3_ParamLimits

0xcbc7,	// (0x00097e51) main_radioblah_pane_t3

0xcbdf,	// (0x00097e69) main_radioblah_pane_t4_ParamLimits

0xcbdf,	// (0x00097e69) main_radioblah_pane_t4

0x8333,	// (0x000935bd) main_radioblah_text_pane_ParamLimits

0x8333,	// (0x000935bd) main_radioblah_text_pane

0x8345,	// (0x000935cf) main_radioblah_info_pane_g1_ParamLimits

0x83de,	// (0x00093668) main_radioblah_info_pane_t4_ParamLimits

0x83de,	// (0x00093668) main_radioblah_info_pane_t4

0xe4c9,	// (0x00099753) main_sp_fs_calendar_pane

0x8b20,	// (0x00093daa) main_phacti_pane_g1

0x8b28,	// (0x00093db2) phacti_note_pane_ParamLimits

0x8b28,	// (0x00093db2) phacti_note_pane

0xd0c7,	// (0x00098351) phacti_term_pane_ParamLimits

0xd0c7,	// (0x00098351) phacti_term_pane

0xd0dc,	// (0x00098366) phacti_note_pane_t1_ParamLimits

0xd0dc,	// (0x00098366) phacti_note_pane_t1

0xd0f3,	// (0x0009837d) phacti_term_pane_g1

0xd0fb,	// (0x00098385) phacti_term_pane_t1_ParamLimits

0xd0fb,	// (0x00098385) phacti_term_pane_t1

0xd125,	// (0x000983af) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd12d,	// (0x000983b7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbab,	// (0x0009ae35) popup_sp_fs_calendar_preview_list_single_pane_g

0xd135,	// (0x000983bf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd135,	// (0x000983bf) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd14b,	// (0x000983d5) aid_popup_sp_fs_bg_corner_pane

0xe776,	// (0x00099a00) popup_sp_fs_calendar_preview_bg_pane_g1

0xddfa,	// (0x00099084) popup_sp_fs_calendar_preview_bg_pane

0xd153,	// (0x000983dd) popup_sp_fs_calendar_preview_list_pane

0x3356,	// (0x0008e5e0) bg_main_sp_fs_cale_pane_ParamLimits

0x3356,	// (0x0008e5e0) bg_main_sp_fs_cale_pane

0xd164,	// (0x000983ee) listscroll_cale_mrui_pane_ParamLimits

0xd164,	// (0x000983ee) listscroll_cale_mrui_pane

0xd179,	// (0x00098403) listscroll_sp_fs_schedule_track_pane

0xd182,	// (0x0009840c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd182,	// (0x0009840c) main_sp_fs_ctrlbar_pane_cp01

0xd195,	// (0x0009841f) main_sp_fs_ribbon_pane

0xd19d,	// (0x00098427) popup_sp_fs_cale_preview_window

0x8b9d,	// (0x00093e27) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b9d,	// (0x00093e27) list_single_sp_fs_schedule_track_pane

0xe4c9,	// (0x00099753) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe4c9,	// (0x00099753) bg_sp_fs_highlight_list_pane_cp03

0x8bb1,	// (0x00093e3b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bb1,	// (0x00093e3b) list_single_sp_fs_schedule_track_pane_g1

0x8bbd,	// (0x00093e47) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bbd,	// (0x00093e47) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbb0,	// (0x0009ae3a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbb0,	// (0x0009ae3a) list_single_sp_fs_schedule_track_pane_g

0x8bc9,	// (0x00093e53) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bc9,	// (0x00093e53) list_single_sp_fs_schedule_track_pane_t1

0x8beb,	// (0x00093e75) sp_fs_schedule_track_pane_ParamLimits

0x8beb,	// (0x00093e75) sp_fs_schedule_track_pane

0xd1af,	// (0x00098439) sp_fs_schedule_track_pane_g1

0xd1b7,	// (0x00098441) sp_fs_schedule_track_pane_g2

0xd1bf,	// (0x00098449) sp_fs_schedule_track_pane_g3

0xd1c7,	// (0x00098451) sp_fs_schedule_track_pane_g4

0xd1cf,	// (0x00098459) sp_fs_schedule_track_pane_g5

0x0004,

0xfbb5,	// (0x0009ae3f) sp_fs_schedule_track_pane_g

0xbd4b,	// (0x00096fd5) bg_sp_fs_schedule_viewer_highlight_g1

0xe98b,	// (0x00099c15) bg_sp_fs_schedule_viewer_highlight_g2

0xbd53,	// (0x00096fdd) bg_sp_fs_schedule_viewer_highlight_g3

0xbd5b,	// (0x00096fe5) bg_sp_fs_schedule_viewer_highlight_g4

0xbf7f,	// (0x00097209) bg_sp_fs_schedule_viewer_highlight_g5

0xbd6b,	// (0x00096ff5) bg_sp_fs_schedule_viewer_highlight_g6

0xbd73,	// (0x00096ffd) bg_sp_fs_schedule_viewer_highlight_g7

0xbd7b,	// (0x00097005) bg_sp_fs_schedule_viewer_highlight_g8

0xe96b,	// (0x00099bf5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbc0,	// (0x0009ae4a) bg_sp_fs_schedule_viewer_highlight_g

0xddfa,	// (0x00099084) bg_main_sp_fs_ribbon_pane

0x8c00,	// (0x00093e8a) main_sp_fs_ribbon_pane_g1

0xd1d7,	// (0x00098461) main_sp_fs_ribbon_pane_t1

0x8c09,	// (0x00093e93) main_sp_fs_ribbon_pane_t2

0xd1e6,	// (0x00098470) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbd3,	// (0x0009ae5d) main_sp_fs_ribbon_pane_t

0xd1f5,	// (0x0009847f) main_sp_fs_ribbon_scheduler_pane

0xd1fd,	// (0x00098487) bg_main_sp_fs_ribbon_pane_g1

0xd206,	// (0x00098490) bg_main_sp_fs_ribbon_pane_g2

0xd20f,	// (0x00098499) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfbda,	// (0x0009ae64) bg_main_sp_fs_ribbon_pane_g

0xd217,	// (0x000984a1) main_sp_fs_ribbon_scheduler_pane_g1

0xd220,	// (0x000984aa) main_sp_fs_ribbon_scheduler_pane_g2

0xd229,	// (0x000984b3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfbe1,	// (0x0009ae6b) main_sp_fs_ribbon_scheduler_pane_g

0xd232,	// (0x000984bc) list_cale_mrui_pane

0x8c18,	// (0x00093ea2) sp_fs_scroll_pane_cp07_ParamLimits

0x8c18,	// (0x00093ea2) sp_fs_scroll_pane_cp07

0x8c34,	// (0x00093ebe) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c34,	// (0x00093ebe) bg_sp_fs_schedule_viewer_highlight

0xd23f,	// (0x000984c9) list_single_sp_fs_schedule_track_pane_cp01

0xd247,	// (0x000984d1) list_sp_fs_schedule_track_pane

0xd24f,	// (0x000984d9) sp_fs_scroll_pane_cp06_ParamLimits

0xd24f,	// (0x000984d9) sp_fs_scroll_pane_cp06

0xe776,	// (0x00099a00) bgmain_sp_fs_calendar_pane_g1

0x8c46,	// (0x00093ed0) list_single_cale_mrui_pane_ParamLimits

0x8c46,	// (0x00093ed0) list_single_cale_mrui_pane

0xd261,	// (0x000984eb) list_single_cale_mrui_row_pane_ParamLimits

0xd261,	// (0x000984eb) list_single_cale_mrui_row_pane

0xd26e,	// (0x000984f8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd26e,	// (0x000984f8) list_single_cale_mrui_row_pane_g1

0xd2b3,	// (0x0009853d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd2b3,	// (0x0009853d) list_single_cale_mrui_row_pane_t1

0x8c66,	// (0x00093ef0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8c66,	// (0x00093ef0) list_single_cale_mrui_row_pane_t2

0xd2c5,	// (0x0009854f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2c5,	// (0x0009854f) list_single_cale_mrui_row_pane_t3

0xd2f4,	// (0x0009857e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2f4,	// (0x0009857e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbef,	// (0x0009ae79) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbef,	// (0x0009ae79) list_single_cale_mrui_row_pane_t

0x8ccc,	// (0x00093f56) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ccc,	// (0x00093f56) list_single_cmail_header_editor_pane_bg_cp01

0x8cf0,	// (0x00093f7a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8cf0,	// (0x00093f7a) list_single_cmail_header_editor_pane_bg_cp02

0x8d10,	// (0x00093f9a) main_radioblah_text_pane_t1_ParamLimits

0x8d10,	// (0x00093f9a) main_radioblah_text_pane_t1

0xd325,	// (0x000985af) cam6_indi_pane_cp01

0xd32d,	// (0x000985b7) cam6_mode_pane_cp01

0xd335,	// (0x000985bf) cam6_pano_pane

0xd33e,	// (0x000985c8) cam6_zoom_pane_cp01

0xd348,	// (0x000985d2) cam6_pano_image_pane

0xd351,	// (0x000985db) cam6_pano_pane_g1

0xca61,	// (0x00097ceb) cam6_pano_pane_g2

0xd35a,	// (0x000985e4) cam6_pano_pane_g3

0xd363,	// (0x000985ed) cam6_pano_pane_g4

0xb798,	// (0x00096a22) cam6_pano_pane_g5

0xd36c,	// (0x000985f6) cam6_pano_pane_g6

0xd374,	// (0x000985fe) cam6_pano_pane_g7

0xd37c,	// (0x00098606) cam6_pano_pane_g8

0xd385,	// (0x0009860f) cam6_pano_pane_g9

0x0008,

0xfbf8,	// (0x0009ae82) cam6_pano_pane_g

0xddfa,	// (0x00099084) main_browser_tag_pane

0xd0a8,	// (0x00098332) grid_navstr_albumart_pane

0xd390,	// (0x0009861a) cell_navstr_albumart_pane_ParamLimits

0xd390,	// (0x0009861a) cell_navstr_albumart_pane

0xd3ac,	// (0x00098636) cell_navstr_albumart_pane_g1

0xabb1,	// (0x00095e3b) cell_navstr_albumart_pane_g2

0xabc1,	// (0x00095e4b) cell_navstr_albumart_pane_g3

0xabb9,	// (0x00095e43) cell_navstr_albumart_pane_g4

0x0003,

0xfc0b,	// (0x0009ae95) cell_navstr_albumart_pane_g

0x8d2b,	// (0x00093fb5) bt_list_pane_ParamLimits

0x8d2b,	// (0x00093fb5) bt_list_pane

0x8d41,	// (0x00093fcb) bt_list_pane_t1

0x8d50,	// (0x00093fda) bt_list_pane_t2

0x0001,

0xfc14,	// (0x0009ae9e) bt_list_pane_t

0xddfa,	// (0x00099084) main_cale_prevew_pane

0x8d5f,	// (0x00093fe9) popup_cale_preview_window_ParamLimits

0x8d5f,	// (0x00093fe9) popup_cale_preview_window

0xe4c9,	// (0x00099753) bg_popup_preview_window_pane_cp05_ParamLimits

0xe4c9,	// (0x00099753) bg_popup_preview_window_pane_cp05

0xd3b4,	// (0x0009863e) list_cale_preview_pane_ParamLimits

0xd3b4,	// (0x0009863e) list_cale_preview_pane

0x8d7c,	// (0x00094006) list_double_cale_preview_pane_ParamLimits

0x8d7c,	// (0x00094006) list_double_cale_preview_pane

0x8d90,	// (0x0009401a) list_single_cale_preview_pane_ParamLimits

0x8d90,	// (0x0009401a) list_single_cale_preview_pane

0x8da8,	// (0x00094032) list_single_cale_preview_pane_g1

0x8db0,	// (0x0009403a) list_single_cale_preview_pane_t1_ParamLimits

0x8db0,	// (0x0009403a) list_single_cale_preview_pane_t1

0x8dc5,	// (0x0009404f) list_double_cale_preview_pane_g1

0x8dcd,	// (0x00094057) list_double_cale_preview_pane_t1_ParamLimits

0x8dcd,	// (0x00094057) list_double_cale_preview_pane_t1

0x8de2,	// (0x0009406c) list_double_cale_preview_pane_t2_ParamLimits

0x8de2,	// (0x0009406c) list_double_cale_preview_pane_t2

0x0001,

0xfc19,	// (0x0009aea3) list_double_cale_preview_pane_t_ParamLimits

0xfc19,	// (0x0009aea3) list_double_cale_preview_pane_t

0xddfa,	// (0x00099084) main_ezdial_pane

0xe4c9,	// (0x00099753) main_sp_fs_email_pane_ParamLimits

0x8614,	// (0x0009389e) cmail_ddmenu_btn01_pane_ParamLimits

0x8614,	// (0x0009389e) cmail_ddmenu_btn01_pane

0x8627,	// (0x000938b1) cmail_ddmenu_btn02_pane_ParamLimits

0x8627,	// (0x000938b1) cmail_ddmenu_btn02_pane

0x864a,	// (0x000938d4) cmail_ddmenu_btn03_pane_ParamLimits

0x864a,	// (0x000938d4) cmail_ddmenu_btn03_pane

0x86e8,	// (0x00093972) main_sp_fs_ctrlbar_pane_ParamLimits

0x870c,	// (0x00093996) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8a34,	// (0x00093cbe) list_cmail_body_pane_ParamLimits

0xcfa5,	// (0x0009822f) bg_button_pane_cp12

0xcfba,	// (0x00098244) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcfba,	// (0x00098244) list_single_cmail_header_detail_pane_g3

0xd003,	// (0x0009828d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd003,	// (0x0009828d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb9c,	// (0x0009ae26) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb9c,	// (0x0009ae26) list_single_cmail_header_detail_pane_t

0xd110,	// (0x0009839a) phacti_term_pane_t2_ParamLimits

0xd110,	// (0x0009839a) phacti_term_pane_t2

0x0001,

0xfba6,	// (0x0009ae30) phacti_term_pane_t_ParamLimits

0xfba6,	// (0x0009ae30) phacti_term_pane_t

0xd3c0,	// (0x0009864a) aid_size_list_single_double

0x8dfa,	// (0x00094084) popup_ezdial_listscroll_window

0x8e16,	// (0x000940a0) popup_number_entry_window_cp01

0xe740,	// (0x000999ca) bg_popup_call_pane_cp09

0xd3cc,	// (0x00098656) ezdial_list_pane

0xd3d4,	// (0x0009865e) scroll_pane_cp23

0x3356,	// (0x0008e5e0) bg_button_pane_cp028_ParamLimits

0x3356,	// (0x0008e5e0) bg_button_pane_cp028

0x8e24,	// (0x000940ae) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e24,	// (0x000940ae) cmail_ddmenu_btn01_pane_g1

0x8e33,	// (0x000940bd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e33,	// (0x000940bd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc1e,	// (0x0009aea8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc1e,	// (0x0009aea8) cmail_ddmenu_btn01_pane_g

0xd3dc,	// (0x00098666) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd3dc,	// (0x00098666) cmail_ddmenu_btn01_pane_t1

0x3356,	// (0x0008e5e0) bg_button_pane_cp029_ParamLimits

0x3356,	// (0x0008e5e0) bg_button_pane_cp029

0x8e49,	// (0x000940d3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e49,	// (0x000940d3) cmail_ddmenu_btn02_pane_g1

0x8e64,	// (0x000940ee) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e64,	// (0x000940ee) cmail_ddmenu_btn02_pane_t1

0xe4c9,	// (0x00099753) bg_button_pane_cp031_ParamLimits

0xe4c9,	// (0x00099753) bg_button_pane_cp031

0x8e49,	// (0x000940d3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e49,	// (0x000940d3) cmail_ddmenu_btn03_pane_g1

0x8e64,	// (0x000940ee) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e64,	// (0x000940ee) cmail_ddmenu_btn03_pane_t1

0x5e50,	// (0x000910da) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e6a,	// (0x000910f4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e6a,	// (0x000910f4) cell_dialer2_keypad_pane_t1_copy1

0x7d01,	// (0x00092f8b) ncimui_group_button_pane

0xe4c9,	// (0x00099753) main_sp_fs_calendar_pane_ParamLimits

0x8a4b,	// (0x00093cd5) list_single_cmail_header_caption_pane_ParamLimits

0xd15b,	// (0x000983e5) aid_recal_txt_sm_pane

0xddfa,	// (0x00099084) mian_recal_day_pane

0xd19d,	// (0x00098427) popup_sp_fs_cale_preview_window_ParamLimits

0xd3f2,	// (0x0009867c) list_recal_day_pane

0xd435,	// (0x000986bf) list_single_recal_day_pane_ParamLimits

0xd435,	// (0x000986bf) list_single_recal_day_pane

0xd447,	// (0x000986d1) list_single_recal_day_pane_g1_ParamLimits

0xd447,	// (0x000986d1) list_single_recal_day_pane_g1

0xd453,	// (0x000986dd) list_single_recal_day_pane_g2_ParamLimits

0xd453,	// (0x000986dd) list_single_recal_day_pane_g2

0xd45f,	// (0x000986e9) list_single_recal_day_pane_g3_ParamLimits

0xd45f,	// (0x000986e9) list_single_recal_day_pane_g3

0x8e8b,	// (0x00094115) list_single_recal_day_pane_g4_ParamLimits

0x8e8b,	// (0x00094115) list_single_recal_day_pane_g4

0xd46b,	// (0x000986f5) list_single_recal_day_pane_g5_ParamLimits

0xd46b,	// (0x000986f5) list_single_recal_day_pane_g5

0xd477,	// (0x00098701) list_single_recal_day_pane_g6_ParamLimits

0xd477,	// (0x00098701) list_single_recal_day_pane_g6

0x0004,

0xfc2d,	// (0x0009aeb7) list_single_recal_day_pane_g_ParamLimits

0xfc2d,	// (0x0009aeb7) list_single_recal_day_pane_g

0xd48b,	// (0x00098715) list_single_recal_day_pane_t1

0xd49d,	// (0x00098727) list_single_recal_day_pane_t2

0x0001,

0xfc38,	// (0x0009aec2) list_single_recal_day_pane_t

0x8ea3,	// (0x0009412d) ncimui_query_button_pane_ParamLimits

0x8ea3,	// (0x0009412d) ncimui_query_button_pane

0x8eb3,	// (0x0009413d) ncimui_query_button_pane_t1_ParamLimits

0x8eb3,	// (0x0009413d) ncimui_query_button_pane_t1

0xd4af,	// (0x00098739) ncimui_query_button_pane_t2_ParamLimits

0xd4af,	// (0x00098739) ncimui_query_button_pane_t2

0x0001,

0xfc3d,	// (0x0009aec7) ncimui_query_button_pane_t_ParamLimits

0xfc3d,	// (0x0009aec7) ncimui_query_button_pane_t

0x8ec6,	// (0x00094150) query_button_pane_ParamLimits

0x8ec6,	// (0x00094150) query_button_pane

0xddfa,	// (0x00099084) bg_button_pane_cp0028

0xd4c2,	// (0x0009874c) query_button_pane_t1

0x472d,	// (0x0008f9b7) main_tport_pane_ParamLimits

0x88f5,	// (0x00093b7f) bg_popup_window_pane_cp01_ParamLimits

0x88f5,	// (0x00093b7f) bg_popup_window_pane_cp01

0x890e,	// (0x00093b98) heading_pane_cp08_ParamLimits

0x890e,	// (0x00093b98) heading_pane_cp08

0x8921,	// (0x00093bab) heading_pane_cp07_ParamLimits

0x8921,	// (0x00093bab) heading_pane_cp07

0x89c3,	// (0x00093c4d) cell_tport_appsw_pane_g2

0x0002,

0xfb89,	// (0x0009ae13) cell_tport_appsw_pane_g

0x3632,	// (0x0008e8bc) input_candi_list_open_g1

0xeb4e,	// (0x00099dd8) list_cale_time_pane_g6_ParamLimits

0xeb4e,	// (0x00099dd8) list_cale_time_pane_g6

0x4ddd,	// (0x00090067) aid_size_touch_calib_1_ParamLimits

0x4ddd,	// (0x00090067) aid_size_touch_calib_1

0x4def,	// (0x00090079) aid_size_touch_calib_2_ParamLimits

0x4def,	// (0x00090079) aid_size_touch_calib_2

0x4e07,	// (0x00090091) aid_size_touch_calib_3_ParamLimits

0x4e07,	// (0x00090091) aid_size_touch_calib_3

0x4e25,	// (0x000900af) aid_size_touch_calib_4_ParamLimits

0x4e25,	// (0x000900af) aid_size_touch_calib_4

0x4e3d,	// (0x000900c7) main_touch_calib_button_group_pane_ParamLimits

0x4e3d,	// (0x000900c7) main_touch_calib_button_group_pane

0x4e55,	// (0x000900df) main_touch_calib_pane_g1_ParamLimits

0x4e67,	// (0x000900f1) main_touch_calib_pane_g2_ParamLimits

0x4e79,	// (0x00090103) main_touch_calib_pane_g3_ParamLimits

0x4e8b,	// (0x00090115) main_touch_calib_pane_g4_ParamLimits

0xf5e4,	// (0x0009a86e) main_touch_calib_pane_g_ParamLimits

0x4e9d,	// (0x00090127) main_touch_calib_pane_t1_ParamLimits

0x4eb7,	// (0x00090141) main_touch_calib_pane_t2_ParamLimits

0x4ed1,	// (0x0009015b) main_touch_calib_pane_t3_ParamLimits

0x4ee5,	// (0x0009016f) main_touch_calib_pane_t4_ParamLimits

0x4efb,	// (0x00090185) main_touch_calib_pane_t5_ParamLimits

0xf5ed,	// (0x0009a877) main_touch_calib_pane_t_ParamLimits

0xb54b,	// (0x000967d5) list_single_fp_cale_pane_g3_ParamLimits

0xb54b,	// (0x000967d5) list_single_fp_cale_pane_g3

0x9f72,	// (0x000951fc) bg_button_pane_cp012_ParamLimits

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp03_ParamLimits

0x6e84,	// (0x0009210e) cell_vitu2_function_top_pane_g1_ParamLimits

0x9f72,	// (0x000951fc) bg_vkb2_func_pane_cp04_ParamLimits

0x7c8c,	// (0x00092f16) main_ncimui_button_group_pane_ParamLimits

0x7c8c,	// (0x00092f16) main_ncimui_button_group_pane

0x7cec,	// (0x00092f76) main_ncimui_pane_t3_ParamLimits

0x7cec,	// (0x00092f76) main_ncimui_pane_t3

0xd0be,	// (0x00098348) phacti_button_group_pane

0xd3c0,	// (0x0009864a) aid_size_list_single_double_ParamLimits

0x8dfa,	// (0x00094084) popup_ezdial_listscroll_window_ParamLimits

0x8e16,	// (0x000940a0) popup_number_entry_window_cp01_ParamLimits

0x8ed9,	// (0x00094163) phacti_button_pane_ParamLimits

0x8ed9,	// (0x00094163) phacti_button_pane

0xddfa,	// (0x00099084) bg_button_pane_cp14

0xd4d0,	// (0x0009875a) phacti_button_pane_t1

0x8eea,	// (0x00094174) main_touch_calib_button_pane_ParamLimits

0x8eea,	// (0x00094174) main_touch_calib_button_pane

0xe5a2,	// (0x0009982c) bg_button_pane_cp18_ParamLimits

0xe5a2,	// (0x0009982c) bg_button_pane_cp18

0xd4de,	// (0x00098768) main_touch_calib_button_pane_t1_ParamLimits

0xd4de,	// (0x00098768) main_touch_calib_button_pane_t1

0xd4f4,	// (0x0009877e) main_touch_calib_button_pane_t2_ParamLimits

0xd4f4,	// (0x0009877e) main_touch_calib_button_pane_t2

0x0001,

0xfc42,	// (0x0009aecc) main_touch_calib_button_pane_t_ParamLimits

0xfc42,	// (0x0009aecc) main_touch_calib_button_pane_t

0xddfa,	// (0x00099084) cell_ncimui_button_pane

0xddfa,	// (0x00099084) bg_button_pane_cp032

0xd512,	// (0x0009879c) cell_ncimui_button_pane_t1

0xdb74,	// (0x00098dfe) image3_infobar_pane_ParamLimits

0xdb74,	// (0x00098dfe) image3_infobar_pane

0x8103,	// (0x0009338d) fs_bigclock_status_pane_ParamLimits

0x8103,	// (0x0009338d) fs_bigclock_status_pane

0x8110,	// (0x0009339a) main_fs_bigclock_clock_pane_ParamLimits

0x8110,	// (0x0009339a) main_fs_bigclock_clock_pane

0x8142,	// (0x000933cc) main_fs_bigclock_indi_pane_ParamLimits

0x8142,	// (0x000933cc) main_fs_bigclock_indi_pane

0x8182,	// (0x0009340c) main_fs_bigclock_swipe_pane_ParamLimits

0x8182,	// (0x0009340c) main_fs_bigclock_swipe_pane

0xddfa,	// (0x00099084) main_fs_clock_dumped_data

0x81ce,	// (0x00093458) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x81ce,	// (0x00093458) list_single_fs_bigclock_indicator_pane_g1

0x81e7,	// (0x00093471) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x81e7,	// (0x00093471) list_single_fs_bigclock_indicator_pane_g2

0x8201,	// (0x0009348b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8201,	// (0x0009348b) list_single_fs_bigclock_indicator_pane_g3

0x821b,	// (0x000934a5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x821b,	// (0x000934a5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfae8,	// (0x0009ad72) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfae8,	// (0x0009ad72) list_single_fs_bigclock_indicator_pane_g

0x824a,	// (0x000934d4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x824a,	// (0x000934d4) list_single_fs_bigclock_indicator_pane_t1

0x8272,	// (0x000934fc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8272,	// (0x000934fc) list_single_fs_bigclock_indicator_pane_t2

0x829a,	// (0x00093524) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x829a,	// (0x00093524) list_single_fs_bigclock_indicator_pane_t3

0x82c2,	// (0x0009354c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x82c2,	// (0x0009354c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfaf3,	// (0x0009ad7d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfaf3,	// (0x0009ad7d) list_single_fs_bigclock_indicator_pane_t

0xd520,	// (0x000987aa) image3_infobar_fav_pane_ParamLimits

0xd520,	// (0x000987aa) image3_infobar_fav_pane

0xd530,	// (0x000987ba) image3_infobar_loc_pane_ParamLimits

0xd530,	// (0x000987ba) image3_infobar_loc_pane

0xd546,	// (0x000987d0) image3_infobar_time_pane_ParamLimits

0xd546,	// (0x000987d0) image3_infobar_time_pane

0xe776,	// (0x00099a00) image3_infobar_time_pane_g1

0xd556,	// (0x000987e0) image3_infobar_time_pane_t1

0xe776,	// (0x00099a00) image3_infobar_loc_pane_g1

0xd564,	// (0x000987ee) image3_infobar_loc_pane_g2

0x0001,

0xfc47,	// (0x0009aed1) image3_infobar_loc_pane_g

0xd56c,	// (0x000987f6) image3_infobar_loc_pane_t1

0xe776,	// (0x00099a00) image3_infobar_fav_pane_g1

0xd57a,	// (0x00098804) image3_infobar_fav_pane_g2

0x0001,

0xfc4c,	// (0x0009aed6) image3_infobar_fav_pane_g

0xd582,	// (0x0009880c) fs_bigclock_status_battery_pane

0xd58b,	// (0x00098815) fs_bigclock_status_signal_pane

0xd594,	// (0x0009881e) fs_bigclock_status_title_pane

0xd59d,	// (0x00098827) fs_bigclock_status_signal_pane_g1

0xd5a6,	// (0x00098830) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc51,	// (0x0009aedb) fs_bigclock_status_signal_pane_g

0xd5ae,	// (0x00098838) fs_bigclock_status_battery_pane_g1

0xd5b7,	// (0x00098841) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc56,	// (0x0009aee0) fs_bigclock_status_battery_pane_g

0xd5bf,	// (0x00098849) fs_bigclock_status_title_pane_t1

0x8eff,	// (0x00094189) main_fs_bigclock_clock_pane_g1

0x8eff,	// (0x00094189) main_fs_bigclock_clock_pane_g2

0x8f12,	// (0x0009419c) main_fs_bigclock_clock_pane_g3

0x8f12,	// (0x0009419c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc5b,	// (0x0009aee5) main_fs_bigclock_clock_pane_g

0x8f29,	// (0x000941b3) main_fs_bigclock_clock_pane_t1

0x8f3f,	// (0x000941c9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc64,	// (0x0009aeee) main_fs_bigclock_clock_pane_t

0xd5cd,	// (0x00098857) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd5cd,	// (0x00098857) list_single_fs_bigclock_indicator_pane

0xd5de,	// (0x00098868) list_single_fs_bigclock_pane_ParamLimits

0xd5de,	// (0x00098868) list_single_fs_bigclock_pane

0xd604,	// (0x0009888e) main_fs_bigclock_indicator_pane_t1

0xd613,	// (0x0009889d) list_single_fs_bigclock_pane_g1

0xd61b,	// (0x000988a5) list_single_fs_bigclock_pane_t1

0xe776,	// (0x00099a00) main_fs_bigclock_swipe_pane_g1

0xd65e,	// (0x000988e8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc75,	// (0x0009aeff) main_fs_bigclock_swipe_pane_g

0xd666,	// (0x000988f0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd666,	// (0x000988f0) main_fs_bigclock_swipe_pane_t1

0x2e4f,	// (0x0008e0d9) call_type_pane_ParamLimits

0xddfa,	// (0x00099084) main_btmg_pane

0xd29a,	// (0x00098524) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd29a,	// (0x00098524) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbe8,	// (0x0009ae72) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbe8,	// (0x0009ae72) list_single_cale_mrui_row_pane_g

0xd41b,	// (0x000986a5) list_recal_vselct_arw_lo_pane

0xd423,	// (0x000986ad) list_recal_vselct_arw_up_pane

0xd42b,	// (0x000986b5) list_recal_vselct_pane

0x8fa1,	// (0x0009422b) btmg_button_pane

0x8fab,	// (0x00094235) main_btmg_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp044

0xd683,	// (0x0009890d) btmg_button_pane_t1

0xad03,	// (0x00095f8d) aid_listscroll_gen

0xe4c9,	// (0x00099753) main_cntbar_detail_pane

0xcf55,	// (0x000981df) list_cmail_folder_pane

0x2e43,	// (0x0008e0cd) sp_fs_scroll_pane_cp03_ParamLimits

0x8fb5,	// (0x0009423f) list_single_fs_dyc_pane_cp01_ParamLimits

0x8fb5,	// (0x0009423f) list_single_fs_dyc_pane_cp01

0xd691,	// (0x0009891b) aid_size_cmail_indent

0xd69a,	// (0x00098924) list_single_dyc_row_pane_cp01

0x9003,	// (0x0009428d) cntbar_detail_list_pane_ParamLimits

0x9003,	// (0x0009428d) cntbar_detail_list_pane

0x9055,	// (0x000942df) main_cntbar_detail_cont_pane_ParamLimits

0x9055,	// (0x000942df) main_cntbar_detail_cont_pane

0x2e43,	// (0x0008e0cd) scroll_pane_cp032_ParamLimits

0x2e43,	// (0x0008e0cd) scroll_pane_cp032

0x9069,	// (0x000942f3) cntbar_detail_list_event_pane_ParamLimits

0x9069,	// (0x000942f3) cntbar_detail_list_event_pane

0x9015,	// (0x0009429f) cntbar_detail_list_shct_pane

0xe9d9,	// (0x00099c63) aid_list_gen

0xd6a3,	// (0x0009892d) aid_scroll

0xd6ac,	// (0x00098936) aid_size_touch_scroll_bar

0x845b,	// (0x000936e5) aid_list_double

0x9079,	// (0x00094303) aid_list_single

0x9079,	// (0x00094303) aid_list_single_lg

0x9082,	// (0x0009430c) aid_list_z_g_a_sm

0x908a,	// (0x00094314) aid_list_z_g_d

0x9092,	// (0x0009431c) aid_txt_z_prm

0x90a0,	// (0x0009432a) aid_txt_z_prm_cp01

0x90ae,	// (0x00094338) aid_txt_z_sec

0x90bc,	// (0x00094346) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90bc,	// (0x00094346) main_cntbar_detail_cont_pane_g1

0x90d0,	// (0x0009435a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90d0,	// (0x0009435a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc7a,	// (0x0009af04) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc7a,	// (0x0009af04) main_cntbar_detail_cont_pane_g

0xd6b5,	// (0x0009893f) main_cntbar_detail_cont_pane_t1

0xd6c3,	// (0x0009894d) main_cntbar_detail_cont_pane_t2

0xd6d1,	// (0x0009895b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc7f,	// (0x0009af09) main_cntbar_detail_cont_pane_t

0x90e0,	// (0x0009436a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90e0,	// (0x0009436a) cell_cntbar_detail_list_shct_pane

0xd6df,	// (0x00098969) cntbar_detail_list_shct_pane_g1

0xd6e8,	// (0x00098972) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc86,	// (0x0009af10) cntbar_detail_list_shct_pane_g

0x90f2,	// (0x0009437c) cntbar_detail_list_event_pane_g1_ParamLimits

0x90f2,	// (0x0009437c) cntbar_detail_list_event_pane_g1

0x90fe,	// (0x00094388) cntbar_detail_list_event_pane_g2_ParamLimits

0x90fe,	// (0x00094388) cntbar_detail_list_event_pane_g2

0x0005,

0xfc8b,	// (0x0009af15) cntbar_detail_list_event_pane_g_ParamLimits

0xfc8b,	// (0x0009af15) cntbar_detail_list_event_pane_g

0x916c,	// (0x000943f6) cntbar_detail_list_event_pane_t1_ParamLimits

0x916c,	// (0x000943f6) cntbar_detail_list_event_pane_t1

0x9181,	// (0x0009440b) cntbar_detail_list_event_pane_t2_ParamLimits

0x9181,	// (0x0009440b) cntbar_detail_list_event_pane_t2

0x0002,

0xfc98,	// (0x0009af22) cntbar_detail_list_event_pane_t_ParamLimits

0xfc98,	// (0x0009af22) cntbar_detail_list_event_pane_t

0xe776,	// (0x00099a00) cell_cntbar_detail_list_shct_pane_g1

0x31ed,	// (0x0008e477) navi_pane_mv_g3

0xe4c9,	// (0x00099753) main_cntbar_detail_pane_ParamLimits

0xddfa,	// (0x00099084) main_notif_wgt_pane

0xba33,	// (0x00096cbd) aid_tch_main_mp4_pane_g4

0xdb6c,	// (0x00098df6) popup_slider_window_cp02

0xd411,	// (0x0009869b) list_recal_day_event_pane

0x8fcf,	// (0x00094259) cntbar_detail_btn_pane_ParamLimits

0x8fcf,	// (0x00094259) cntbar_detail_btn_pane

0x8fe8,	// (0x00094272) cntbar_detail_btn_pane_cp01_ParamLimits

0x8fe8,	// (0x00094272) cntbar_detail_btn_pane_cp01

0x9015,	// (0x0009429f) cntbar_detail_list_shct_pane_ParamLimits

0x9025,	// (0x000942af) cntbar_detail_pane_g1_ParamLimits

0x9025,	// (0x000942af) cntbar_detail_pane_g1

0x9039,	// (0x000942c3) cntbar_detail_pane_t1_ParamLimits

0x9039,	// (0x000942c3) cntbar_detail_pane_t1

0x910a,	// (0x00094394) cntbar_detail_list_event_pane_g3_ParamLimits

0x910a,	// (0x00094394) cntbar_detail_list_event_pane_g3

0x9122,	// (0x000943ac) cntbar_detail_list_event_pane_g4_ParamLimits

0x9122,	// (0x000943ac) cntbar_detail_list_event_pane_g4

0x913a,	// (0x000943c4) cntbar_detail_list_event_pane_g5_ParamLimits

0x913a,	// (0x000943c4) cntbar_detail_list_event_pane_g5

0x9152,	// (0x000943dc) cntbar_detail_list_event_pane_g6_ParamLimits

0x9152,	// (0x000943dc) cntbar_detail_list_event_pane_g6

0x9196,	// (0x00094420) cntbar_detail_list_event_pane_t3_ParamLimits

0x9196,	// (0x00094420) cntbar_detail_list_event_pane_t3

0x91a8,	// (0x00094432) popup_notif_wgt_window_ParamLimits

0x91a8,	// (0x00094432) popup_notif_wgt_window

0x91c1,	// (0x0009444b) popup_submenu_window_cp01_ParamLimits

0x91c1,	// (0x0009444b) popup_submenu_window_cp01

0xe740,	// (0x000999ca) bg_popup_window_pane_cp10

0xd6f1,	// (0x0009897b) listscroll_notif_wgt_pane

0xd703,	// (0x0009898d) list_notif_wgt_window

0xd70c,	// (0x00098996) scroll_pane_cp033

0x91d5,	// (0x0009445f) list_notif_wgt_row_pane_ParamLimits

0x91d5,	// (0x0009445f) list_notif_wgt_row_pane

0xd715,	// (0x0009899f) aid_size_list_notif_wgt_del

0xd722,	// (0x000989ac) list_notif_wgt_row_pane_g1

0xd72e,	// (0x000989b8) list_notif_wgt_row_pane_g2

0xd73d,	// (0x000989c7) list_notif_wgt_row_pane_g3

0x0002,

0xfc9f,	// (0x0009af29) list_notif_wgt_row_pane_g

0xd74a,	// (0x000989d4) list_notif_wgt_row_pane_t1

0xd760,	// (0x000989ea) list_notif_wgt_row_pane_t2

0xd772,	// (0x000989fc) list_notif_wgt_row_pane_t3

0x0002,

0xfca6,	// (0x0009af30) list_notif_wgt_row_pane_t

0xbf99,	// (0x00097223) list_recal_day_event_pane_g1

0xd784,	// (0x00098a0e) list_recal_day_event_pane_t1

0xddfa,	// (0x00099084) bg_button_pane_cp045

0x91e5,	// (0x0009446f) cntbar_detail_btn_pane_t1

0x3356,	// (0x0008e5e0) main_callh_pane_ParamLimits

0x3356,	// (0x0008e5e0) main_callh_pane

0xddfa,	// (0x00099084) main_coverflow0_pane

0xddfa,	// (0x00099084) main_wgtman_pane

0x81a3,	// (0x0009342d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81a3,	// (0x0009342d) main_fs_bigclock_unlock_btn_pane

0x89bb,	// (0x00093c45) bg_button_pane_cp16

0x89cb,	// (0x00093c55) cell_tport_appsw_pane_g3

0x91f3,	// (0x0009447d) cf0_flow_pane_ParamLimits

0x91f3,	// (0x0009447d) cf0_flow_pane

0xd793,	// (0x00098a1d) listscroll_cf0_pane

0xd79e,	// (0x00098a28) main_cf0_pane_g1

0x9208,	// (0x00094492) main_cf0_pane_t1_ParamLimits

0x9208,	// (0x00094492) main_cf0_pane_t1

0x921f,	// (0x000944a9) main_cf0_pane_t2_ParamLimits

0x921f,	// (0x000944a9) main_cf0_pane_t2

0x0001,

0xfcb2,	// (0x0009af3c) main_cf0_pane_t_ParamLimits

0xfcb2,	// (0x0009af3c) main_cf0_pane_t

0xd7b0,	// (0x00098a3a) scroll_pane_cp11

0x9236,	// (0x000944c0) cf0_flow_pane_g1

0x9242,	// (0x000944cc) cf0_flow_pane_g2

0x0001,

0xfcb7,	// (0x0009af41) cf0_flow_pane_g

0x924e,	// (0x000944d8) cf0_flow_pane_t1

0xddfa,	// (0x00099084) main_call6_pane

0xddfa,	// (0x00099084) main_calllock_pane

0x9260,	// (0x000944ea) call6_btn_grp_pane_ParamLimits

0x9260,	// (0x000944ea) call6_btn_grp_pane

0x927a,	// (0x00094504) call6_pane_g1_ParamLimits

0x927a,	// (0x00094504) call6_pane_g1

0x9293,	// (0x0009451d) popup_call6_1st_window_ParamLimits

0x9293,	// (0x0009451d) popup_call6_1st_window

0x92a7,	// (0x00094531) popup_call6_2nd_window_ParamLimits

0x92a7,	// (0x00094531) popup_call6_2nd_window

0x92bb,	// (0x00094545) cell_call6_btn_pane_ParamLimits

0x92bb,	// (0x00094545) cell_call6_btn_pane

0xe740,	// (0x000999ca) bg_popup_call2_in_pane_cp03

0xd7bb,	// (0x00098a45) popup_call6_1st_window_g1

0xd7c3,	// (0x00098a4d) popup_call6_1st_window_g2

0xd7cb,	// (0x00098a55) popup_call6_1st_window_g3

0x0002,

0xfcbc,	// (0x0009af46) popup_call6_1st_window_g

0xd7d3,	// (0x00098a5d) popup_call6_1st_window_t1

0xd7e2,	// (0x00098a6c) popup_call6_1st_window_t2

0xd7f2,	// (0x00098a7c) popup_call6_1st_window_t3

0x0002,

0xfcc3,	// (0x0009af4d) popup_call6_1st_window_t

0xe740,	// (0x000999ca) bg_popup_call2_in_pane_cp04

0xd802,	// (0x00098a8c) popup_call6_2nd_window_g1

0xd80a,	// (0x00098a94) popup_call6_2nd_window_g2

0xd812,	// (0x00098a9c) popup_call6_2nd_window_g3

0x0002,

0xfcca,	// (0x0009af54) popup_call6_2nd_window_g

0xd81a,	// (0x00098aa4) popup_call6_2nd_window_t1

0x9f80,	// (0x0009520a) bg_button_pane_cp15

0xdde2,	// (0x0009906c) cell_call6_btn_pane_g1

0xddeb,	// (0x00099075) cell_call6_btn_pane_t1

0x92cf,	// (0x00094559) listscroll_wgtman_pane_ParamLimits

0x92cf,	// (0x00094559) listscroll_wgtman_pane

0x92f0,	// (0x0009457a) wgtman_btn_pane_ParamLimits

0x92f0,	// (0x0009457a) wgtman_btn_pane

0xef46,	// (0x0009a1d0) aid_scroll_copy1

0xd829,	// (0x00098ab3) list_wgtman_pane

0x9333,	// (0x000945bd) wgtman_btn_pane_g1_ParamLimits

0x9333,	// (0x000945bd) wgtman_btn_pane_g1

0x935f,	// (0x000945e9) wgtman_btn_pane_t1_ParamLimits

0x935f,	// (0x000945e9) wgtman_btn_pane_t1

0xd833,	// (0x00098abd) wgtman_btn_pane_t2_ParamLimits

0xd833,	// (0x00098abd) wgtman_btn_pane_t2

0x0001,

0xfcd1,	// (0x0009af5b) wgtman_btn_pane_t_ParamLimits

0xfcd1,	// (0x0009af5b) wgtman_btn_pane_t

0x939c,	// (0x00094626) listrow_wgtman_pane_ParamLimits

0x939c,	// (0x00094626) listrow_wgtman_pane

0x93b0,	// (0x0009463a) listrow_wgtman_pane_g1

0x93bd,	// (0x00094647) listrow_wgtman_pane_g2

0x0001,

0xfcd6,	// (0x0009af60) listrow_wgtman_pane_g

0x93db,	// (0x00094665) listrow_wgtman_pane_t1

0x93f3,	// (0x0009467d) listrow_wgtman_pane_t2

0x0001,

0xfcdb,	// (0x0009af65) listrow_wgtman_pane_t

0x9419,	// (0x000946a3) wait_bar_pane_cp09

0xd84a,	// (0x00098ad4) main_calllock_btn_pane

0xd854,	// (0x00098ade) main_calllock_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp17

0xd860,	// (0x00098aea) main_calllock_btn_pane_g1

0xd869,	// (0x00098af3) main_calllock_btn_pane_t1

0xddfa,	// (0x00099084) main_dialer3_pane

0xddfa,	// (0x00099084) main_fmrd2_pane

0xe776,	// (0x00099a00) main_fs_bigclock_unlock_btn_pane_g1

0x9433,	// (0x000946bd) main_fs_bigclock_unlock_btn_pane_t1

0x9441,	// (0x000946cb) area_fmrd2_info_pane_ParamLimits

0x9441,	// (0x000946cb) area_fmrd2_info_pane

0x9452,	// (0x000946dc) area_fmrd2_visual_pane_ParamLimits

0x9452,	// (0x000946dc) area_fmrd2_visual_pane

0x9460,	// (0x000946ea) fmrd2_indi_pane_ParamLimits

0x9460,	// (0x000946ea) fmrd2_indi_pane

0x946d,	// (0x000946f7) area_fmrd2_visual_pane_g1

0x9475,	// (0x000946ff) area_fmrd2_visual_pane_t1

0x9485,	// (0x0009470f) area_fmrd2_visual_pane_t2

0x9495,	// (0x0009471f) area_fmrd2_visual_pane_t3

0x0002,

0xfce5,	// (0x0009af6f) area_fmrd2_visual_pane_t

0x94a5,	// (0x0009472f) area_fmrd2_info_pane_g1

0x94ad,	// (0x00094737) area_fmrd2_info_pane_t1

0x94bd,	// (0x00094747) area_fmrd2_info_pane_t2

0x94cd,	// (0x00094757) area_fmrd2_info_pane_t3

0x94dd,	// (0x00094767) area_fmrd2_info_pane_t4

0x0003,

0xfcec,	// (0x0009af76) area_fmrd2_info_pane_t

0x94ed,	// (0x00094777) fmrd2_indi_pane_t1

0x94fd,	// (0x00094787) fmrd2_indi_pane_t2

0x950d,	// (0x00094797) fmrd2_indi_pane_t3

0x0002,

0xfcf5,	// (0x0009af7f) fmrd2_indi_pane_t

0x822c,	// (0x000934b6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x822c,	// (0x000934b6) list_single_fs_bigclock_indicator_pane_g5

0x82e1,	// (0x0009356b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x82e1,	// (0x0009356b) list_single_fs_bigclock_indicator_pane_t5

0x8b3c,	// (0x00093dc6) aid_cell_bcale_month_pane_ParamLimits

0x8b3c,	// (0x00093dc6) aid_cell_bcale_month_pane

0x8b5a,	// (0x00093de4) bcale_month_pane_ParamLimits

0x8b5a,	// (0x00093de4) bcale_month_pane

0x8b7e,	// (0x00093e08) bcale_preview_pane_ParamLimits

0x8b7e,	// (0x00093e08) bcale_preview_pane

0xd61b,	// (0x000988a5) list_single_fs_bigclock_pane_t1_ParamLimits

0xd63a,	// (0x000988c4) list_single_fs_bigclock_pane_t2_ParamLimits

0xd63a,	// (0x000988c4) list_single_fs_bigclock_pane_t2

0x0001,

0xfc70,	// (0x0009aefa) list_single_fs_bigclock_pane_t_ParamLimits

0xfc70,	// (0x0009aefa) list_single_fs_bigclock_pane_t

0x942b,	// (0x000946b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfce0,	// (0x0009af6a) main_fs_bigclock_unlock_btn_pane_g

0x951d,	// (0x000947a7) aid_dia3_key_size_ParamLimits

0x951d,	// (0x000947a7) aid_dia3_key_size

0x9531,	// (0x000947bb) aid_dia3_listrow_size_ParamLimits

0x9531,	// (0x000947bb) aid_dia3_listrow_size

0x954b,	// (0x000947d5) dia3_keypad_fun_pane_ParamLimits

0x954b,	// (0x000947d5) dia3_keypad_fun_pane

0x9565,	// (0x000947ef) dia3_keypad_num_pane_ParamLimits

0x9565,	// (0x000947ef) dia3_keypad_num_pane

0x957f,	// (0x00094809) dia3_listscroll_pane_ParamLimits

0x957f,	// (0x00094809) dia3_listscroll_pane

0x9595,	// (0x0009481f) dia3_numentry_pane_ParamLimits

0x9595,	// (0x0009481f) dia3_numentry_pane

0xd878,	// (0x00098b02) dia3_list_pane

0x95af,	// (0x00094839) scroll_pane_cp12

0xddfa,	// (0x00099084) bg_dia3_numentry_pane

0x95ba,	// (0x00094844) dia3_numentry_pane_t1

0x95c9,	// (0x00094853) cell_dia3_key_num_pane

0x95d1,	// (0x0009485b) cell_dia3_key0_fun_pane_ParamLimits

0x95d1,	// (0x0009485b) cell_dia3_key0_fun_pane

0x95e5,	// (0x0009486f) cell_dia3_key1_fun_pane_ParamLimits

0x95e5,	// (0x0009486f) cell_dia3_key1_fun_pane

0x95fa,	// (0x00094884) dia3_listrow_pane

0xc91d,	// (0x00097ba7) bg_dia3_numentry_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp21

0x960c,	// (0x00094896) cell_dia3_key_num_pane_t1

0x961a,	// (0x000948a4) cell_dia3_key_num_pane_t2

0x961a,	// (0x000948a4) cell_dia3_key_num_pane_t3

0x961a,	// (0x000948a4) cell_dia3_key_num_pane_t4

0x0003,

0xfcfc,	// (0x0009af86) cell_dia3_key_num_pane_t

0xddfa,	// (0x00099084) bg_button_pane_cp19

0x9629,	// (0x000948b3) cell_dia3_key0_fun_pane_g1

0xddfa,	// (0x00099084) bg_button_pane_cp20

0x9631,	// (0x000948bb) cell_dia3_key1_fun_pane_g1

0x9639,	// (0x000948c3) area_left_week_number_pane

0x9647,	// (0x000948d1) area_top_day_name_pane

0x965a,	// (0x000948e4) frame_month_view_pane

0xd883,	// (0x00098b0d) grid_month_view_pane

0x966f,	// (0x000948f9) cell_top_day_name_pane_ParamLimits

0x966f,	// (0x000948f9) cell_top_day_name_pane

0x969e,	// (0x00094928) cell_area_left_week_number_pane_ParamLimits

0x969e,	// (0x00094928) cell_area_left_week_number_pane

0x96b4,	// (0x0009493e) cell_month_view_pane_ParamLimits

0x96b4,	// (0x0009493e) cell_month_view_pane

0xd891,	// (0x00098b1b) frm_month_g1

0x96e5,	// (0x0009496f) frm_month_g2

0x96f8,	// (0x00094982) frm_month_g3

0x970b,	// (0x00094995) frm_month_g4

0x971e,	// (0x000949a8) frm_month_g5

0x9731,	// (0x000949bb) frm_month_g6

0x9746,	// (0x000949d0) frm_month_g7

0xd89e,	// (0x00098b28) frm_month_g8

0x975b,	// (0x000949e5) frm_month_g9

0x976b,	// (0x000949f5) frm_month_g10

0x977b,	// (0x00094a05) frm_month_g11

0x978b,	// (0x00094a15) frm_month_g12

0x979d,	// (0x00094a27) frm_month_g13

0x97b1,	// (0x00094a3b) frm_month_g14

0x97c5,	// (0x00094a4f) frm_month_g15

0x97d9,	// (0x00094a63) frm_month_g16

0x000f,

0xfd05,	// (0x0009af8f) frm_month_g

0xd8ab,	// (0x00098b35) cell_top_day_name_pane_t1

0x97ed,	// (0x00094a77) cell_area_left_week_number_pane_g1

0x97f9,	// (0x00094a83) cell_area_left_week_number_pane_t1

0xe530,	// (0x000997ba) cell_month_view_pane_g1

0x980c,	// (0x00094a96) cell_month_view_pane_t1

0xddfa,	// (0x00099084) main_fps_pane

0xcd7d,	// (0x00098007) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcd7d,	// (0x00098007) cmail_ddmenu_btn02_pane_cp1

0xcd99,	// (0x00098023) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcd99,	// (0x00098023) cmail_ddmenu_btn02_pane_cp2

0x8e58,	// (0x000940e2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e58,	// (0x000940e2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc23,	// (0x0009aead) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc23,	// (0x0009aead) cmail_ddmenu_btn02_pane_g

0x8e79,	// (0x00094103) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e79,	// (0x00094103) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc28,	// (0x0009aeb2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc28,	// (0x0009aeb2) cmail_ddmenu_btn02_pane_t

0x981f,	// (0x00094aa9) fps_text_pane_ParamLimits

0x981f,	// (0x00094aa9) fps_text_pane

0x9836,	// (0x00094ac0) main_fps_pane_g1_ParamLimits

0x9836,	// (0x00094ac0) main_fps_pane_g1

0x984e,	// (0x00094ad8) wait_bar_pane_cp010_ParamLimits

0x984e,	// (0x00094ad8) wait_bar_pane_cp010

0x9861,	// (0x00094aeb) fps_text_pane_t1_ParamLimits

0x9861,	// (0x00094aeb) fps_text_pane_t1

0xbc9c,	// (0x00096f26) cam4_image_uncrop_pane_g1

0xbca5,	// (0x00096f2f) cam4_image_uncrop_pane_g2

0x6394,	// (0x0009161e) cam4_image_uncrop_pane_g3

0x639d,	// (0x00091627) cam4_image_uncrop_pane_g4

0x0003,

0xf77b,	// (0x0009aa05) cam4_image_uncrop_pane_g

0x95fa,	// (0x00094884) dia3_listrow_pane_ParamLimits

0xddfa,	// (0x00099084) main_phob2_pane

0x898e,	// (0x00093c18) cell_tport_appsw_pane_cp02_ParamLimits

0x898e,	// (0x00093c18) cell_tport_appsw_pane_cp02

0x89a2,	// (0x00093c2c) cell_tport_appsw_pane_cp03_ParamLimits

0x89a2,	// (0x00093c2c) cell_tport_appsw_pane_cp03

0xddfa,	// (0x00099084) phob2_contact_card_pane

0xddfa,	// (0x00099084) phob2_listscroll_pane

0xd8be,	// (0x00098b48) phob2_list_pane

0xd8c6,	// (0x00098b50) scroll_pane_cp034

0x9879,	// (0x00094b03) phob2_cc_data_pane_ParamLimits

0x9879,	// (0x00094b03) phob2_cc_data_pane

0x9892,	// (0x00094b1c) phob2_cc_listscroll_pane_ParamLimits

0x9892,	// (0x00094b1c) phob2_cc_listscroll_pane

0x939c,	// (0x00094626) list_double_large_graphic_phob2_pane_ParamLimits

0x939c,	// (0x00094626) list_double_large_graphic_phob2_pane

0x98b4,	// (0x00094b3e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98b4,	// (0x00094b3e) list_double_large_graphic_phob2_pane_g1

0x98c1,	// (0x00094b4b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98c1,	// (0x00094b4b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd26,	// (0x0009afb0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd26,	// (0x0009afb0) list_double_large_graphic_phob2_pane_g

0x98e7,	// (0x00094b71) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98e7,	// (0x00094b71) list_double_large_graphic_phob2_pane_t1

0x98fc,	// (0x00094b86) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98fc,	// (0x00094b86) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd2f,	// (0x0009afb9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd2f,	// (0x0009afb9) list_double_large_graphic_phob2_pane_t

0xddfa,	// (0x00099084) list_highlight_pane_cp024

0x9911,	// (0x00094b9b) phob2_cc_button_pane

0x991b,	// (0x00094ba5) phob2_cc_data_pane_g1_ParamLimits

0x991b,	// (0x00094ba5) phob2_cc_data_pane_g1

0x9935,	// (0x00094bbf) phob2_cc_data_pane_g2_ParamLimits

0x9935,	// (0x00094bbf) phob2_cc_data_pane_g2

0x0001,

0xfd34,	// (0x0009afbe) phob2_cc_data_pane_g_ParamLimits

0xfd34,	// (0x0009afbe) phob2_cc_data_pane_g

0x9947,	// (0x00094bd1) phob2_cc_data_pane_t1_ParamLimits

0x9947,	// (0x00094bd1) phob2_cc_data_pane_t1

0x9967,	// (0x00094bf1) phob2_cc_data_pane_t2_ParamLimits

0x9967,	// (0x00094bf1) phob2_cc_data_pane_t2

0x9987,	// (0x00094c11) phob2_cc_data_pane_t3_ParamLimits

0x9987,	// (0x00094c11) phob2_cc_data_pane_t3

0x0002,

0xfd39,	// (0x0009afc3) phob2_cc_data_pane_t_ParamLimits

0xfd39,	// (0x0009afc3) phob2_cc_data_pane_t

0xd8ce,	// (0x00098b58) phob2_cc_list_pane_ParamLimits

0xd8ce,	// (0x00098b58) phob2_cc_list_pane

0xc030,	// (0x000972ba) scroll_pane_cp035_ParamLimits

0xc030,	// (0x000972ba) scroll_pane_cp035

0xe4c9,	// (0x00099753) bg_button_pane_cp033

0xd8da,	// (0x00098b64) phob2_cc_button_pane_g1

0xd8e6,	// (0x00098b70) phob2_cc_button_pane_t1

0xd8fb,	// (0x00098b85) phob2_cc_button_pane_t2

0x0001,

0xfd40,	// (0x0009afca) phob2_cc_button_pane_t

0x99a7,	// (0x00094c31) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99a7,	// (0x00094c31) list_double_large_graphic_phob2_cc_pane

0x99e5,	// (0x00094c6f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x99e5,	// (0x00094c6f) list_double_large_graphic_phob2_cc_pane_g1

0x99f1,	// (0x00094c7b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99f1,	// (0x00094c7b) list_double_large_graphic_phob2_cc_pane_g2

0x99fd,	// (0x00094c87) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99fd,	// (0x00094c87) list_double_large_graphic_phob2_cc_pane_g3

0x9a09,	// (0x00094c93) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a09,	// (0x00094c93) list_double_large_graphic_phob2_cc_pane_g4

0x9a15,	// (0x00094c9f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a15,	// (0x00094c9f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd45,	// (0x0009afcf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd45,	// (0x0009afcf) list_double_large_graphic_phob2_cc_pane_g

0x9a21,	// (0x00094cab) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a21,	// (0x00094cab) list_double_large_graphic_phob2_cc_pane_t1

0x9a4a,	// (0x00094cd4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a4a,	// (0x00094cd4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd50,	// (0x0009afda) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd50,	// (0x0009afda) list_double_large_graphic_phob2_cc_pane_t

0xd90d,	// (0x00098b97) list_highlight_pane_cp025_ParamLimits

0xd90d,	// (0x00098b97) list_highlight_pane_cp025

0xe4c9,	// (0x00099753) bg_button_pane_cp033_ParamLimits

0xd8da,	// (0x00098b64) phob2_cc_button_pane_g1_ParamLimits

0xd8e6,	// (0x00098b70) phob2_cc_button_pane_t1_ParamLimits

0xd8fb,	// (0x00098b85) phob2_cc_button_pane_t2_ParamLimits

0xfd40,	// (0x0009afca) phob2_cc_button_pane_t_ParamLimits

0x1090,	// (0x0008c31a) popup_wgtman_window

0xbe69,	// (0x000970f3) scroll_pane_cp038

0x9315,	// (0x0009459f) wgtman_btn_pane_cp_01_ParamLimits

0x9315,	// (0x0009459f) wgtman_btn_pane_cp_01

0xd91b,	// (0x00098ba5) wgtman_content_pane

0xd924,	// (0x00098bae) wgtman_heading_pane

0xddfa,	// (0x00099084) bg_heading_pane_cp02

0xd92d,	// (0x00098bb7) wgtman_heading_pane_g1

0xd935,	// (0x00098bbf) wgtman_heading_pane_t1

0xd943,	// (0x00098bcd) scroll_pane_cp036

0xd94b,	// (0x00098bd5) wgtman_list_pane

0xcc31,	// (0x00097ebb) wgtman_list_pane_t1_ParamLimits

0xcc31,	// (0x00097ebb) wgtman_list_pane_t1

0xdbfa,	// (0x00098e84) cam4_grid_pane

0x7027,	// (0x000922b1) bg_button_pane_cp015_ParamLimits

0x703b,	// (0x000922c5) bg_button_pane_cp016_ParamLimits

0x704e,	// (0x000922d8) bg_button_pane_cp017_ParamLimits

0x70a6,	// (0x00092330) popup_vitu2_query_window_g3_ParamLimits

0x70a6,	// (0x00092330) popup_vitu2_query_window_g3

0x7163,	// (0x000923ed) popup_vitu2_query_window_t6_ParamLimits

0x7163,	// (0x000923ed) popup_vitu2_query_window_t6

0x718e,	// (0x00092418) popup_vitu2_query_window_t7_ParamLimits

0x718e,	// (0x00092418) popup_vitu2_query_window_t7

0xbc9c,	// (0x00096f26) cam4_grid_pane_g1

0xbca5,	// (0x00096f2f) cam4_grid_pane_g2

0xd953,	// (0x00098bdd) cam4_grid_pane_g3

0xd95c,	// (0x00098be6) cam4_grid_pane_g4

0x0003,

0xfd55,	// (0x0009afdf) cam4_grid_pane_g

0x1cb4,	// (0x0008cf3e) aid_placing_vt_slider_lsc_ParamLimits

0x1fa1,	// (0x0008d22b) vidtel_button_pane_ParamLimits

0x1fa1,	// (0x0008d22b) vidtel_button_pane

0xddfa,	// (0x00099084) bg_button_pane_cp034

0xd967,	// (0x00098bf1) vidtel_button_pane_g1

0xd96f,	// (0x00098bf9) vidtel_button_pane_t1

0xbf77,	// (0x00097201) aid_size_vtel_slider_touch

0xc030,	// (0x000972ba) scroll_pane_cp039

0x7e6a,	// (0x000930f4) ncim_query_button_pane_cp01_ParamLimits

0x7e89,	// (0x00093113) ncimui_query_pane_g1_ParamLimits

0xe4c9,	// (0x00099753) input_focus_pane_cp012_ParamLimits

0xc95b,	// (0x00097be5) ncim_query_entry_pane_t1_ParamLimits

0xc030,	// (0x000972ba) scroll_pane_cp039_ParamLimits

0x315f,	// (0x0008e3e9) navi_pane_bcale_mc_g1

0x3167,	// (0x0008e3f1) navi_pane_bcale_mc_t1

0xcdcf,	// (0x00098059) main_sp_fs_email_pane_g1

0xcddb,	// (0x00098065) main_sp_fs_email_pane_g2

0x0001,

0xfb58,	// (0x0009ade2) main_sp_fs_email_pane_g

0xd2a6,	// (0x00098530) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd2a6,	// (0x00098530) list_single_cale_mrui_row_pane_g3

0x8e99,	// (0x00094123) list_single_recal_day_pane_g5_event_pane

0xd483,	// (0x0009870d) list_single_recal_day_pane_g7

0xd985,	// (0x00098c0f) list_recal_day_event_pane_cp01

0xd98e,	// (0x00098c18) list_recal_vselct_arw_lo_pane_cp01

0xd996,	// (0x00098c20) list_recal_vselct_arw_up_pane_cp01

0xd99e,	// (0x00098c28) list_recal_vselct_pane_cp01

0xbf99,	// (0x00097223) list_recal_day_event_pane_cp01_g1

0xd9a8,	// (0x00098c32) list_recal_day_event_pane_cp01_t1

0xd48b,	// (0x00098715) list_single_recal_day_pane_t1_ParamLimits

0xd49d,	// (0x00098727) list_single_recal_day_pane_t2_ParamLimits

0xfc38,	// (0x0009aec2) list_single_recal_day_pane_t_ParamLimits

0xe4a7,	// (0x00099731) bg_notes_pane_ParamLimits

0xe580,	// (0x0009980a) list_notes_pane_ParamLimits

0x1266,	// (0x0008c4f0) scroll_pane_cp06_ParamLimits

0xe5a2,	// (0x0009982c) main_notes_pane_ParamLimits

0xe4c9,	// (0x00099753) main_welc_pane

0x9a8f,	// (0x00094d19) main_welc_body_pane_ParamLimits

0x9a8f,	// (0x00094d19) main_welc_body_pane

0x9aae,	// (0x00094d38) main_welc_opti_pane_ParamLimits

0x9aae,	// (0x00094d38) main_welc_opti_pane

0x9b2a,	// (0x00094db4) main_welc_pane_t1_ParamLimits

0x9b2a,	// (0x00094db4) main_welc_pane_t1

0xd9be,	// (0x00098c48) main_welc_body_row_pane_ParamLimits

0xd9be,	// (0x00098c48) main_welc_body_row_pane

0xe522,	// (0x000997ac) main_welc_opti_row_pane_ParamLimits

0xe522,	// (0x000997ac) main_welc_opti_row_pane

0xd9d5,	// (0x00098c5f) main_welc_opti_row_pane_g1

0x9ca6,	// (0x00094f30) main_welc_opti_row_pane_t1

0xd9dd,	// (0x00098c67) main_welc_body_row_pane_t1

0xd6fb,	// (0x00098985) popup_notif_wgt_heading_pane

0xd715,	// (0x0009899f) aid_size_list_notif_wgt_del_ParamLimits

0xd722,	// (0x000989ac) list_notif_wgt_row_pane_g1_ParamLimits

0xd72e,	// (0x000989b8) list_notif_wgt_row_pane_g2_ParamLimits

0xd73d,	// (0x000989c7) list_notif_wgt_row_pane_g3_ParamLimits

0xfc9f,	// (0x0009af29) list_notif_wgt_row_pane_g_ParamLimits

0xd74a,	// (0x000989d4) list_notif_wgt_row_pane_t1_ParamLimits

0xd760,	// (0x000989ea) list_notif_wgt_row_pane_t2_ParamLimits

0xd772,	// (0x000989fc) list_notif_wgt_row_pane_t3_ParamLimits

0xfca6,	// (0x0009af30) list_notif_wgt_row_pane_t_ParamLimits

0x93b0,	// (0x0009463a) listrow_wgtman_pane_g1_ParamLimits

0x93bd,	// (0x00094647) listrow_wgtman_pane_g2_ParamLimits

0xfcd6,	// (0x0009af60) listrow_wgtman_pane_g_ParamLimits

0x93db,	// (0x00094665) listrow_wgtman_pane_t1_ParamLimits

0x93f3,	// (0x0009467d) listrow_wgtman_pane_t2_ParamLimits

0xfcdb,	// (0x0009af65) listrow_wgtman_pane_t_ParamLimits

0x9419,	// (0x000946a3) wait_bar_pane_cp09_ParamLimits

0xddfa,	// (0x00099084) bg_popup_heading_pane_cp02

0xd9ec,	// (0x00098c76) popup_notif_wgt_heading_pane_g1

0xd9f4,	// (0x00098c7e) popup_notif_wgt_heading_pane_t1

0xddfa,	// (0x00099084) main_vids_pane

0xddfa,	// (0x00099084) vids_listscroll_pane

0x9cb5,	// (0x00094f3f) scroll_pane_cp040

0xddfa,	// (0x00099084) vids_list_pane

0x9cc0,	// (0x00094f4a) vids_list_double_pane_ParamLimits

0x9cc0,	// (0x00094f4a) vids_list_double_pane

0x9cd3,	// (0x00094f5d) vids_list_double_pane_g1

0x9cdc,	// (0x00094f66) vids_list_double_pane_t1

0x9cec,	// (0x00094f76) vids_list_double_pane_t2

0x0001,

0xfd74,	// (0x0009affe) vids_list_double_pane_t

0x9f72,	// (0x000951fc) main_ncimui_pane_ParamLimits

0x7ca0,	// (0x00092f2a) main_ncimui_pane_g1_ParamLimits

0x7cac,	// (0x00092f36) main_ncimui_pane_g2_ParamLimits

0x7cac,	// (0x00092f36) main_ncimui_pane_g2

0x0001,

0xfa5e,	// (0x0009ace8) main_ncimui_pane_g_ParamLimits

0xfa5e,	// (0x0009ace8) main_ncimui_pane_g

0x9acd,	// (0x00094d57) main_welc_pane_g1_ParamLimits

0x9acd,	// (0x00094d57) main_welc_pane_g1

0x9ae2,	// (0x00094d6c) main_welc_pane_g2_ParamLimits

0x9ae2,	// (0x00094d6c) main_welc_pane_g2

0x0003,

0xfd5e,	// (0x0009afe8) main_welc_pane_g_ParamLimits

0xfd5e,	// (0x0009afe8) main_welc_pane_g

0xe4a7,	// (0x00099731) listscroll_mce_pane_ParamLimits

0x324f,	// (0x0008e4d9) wait_bar_pane_cp10

0xad0b,	// (0x00095f95) main_cale_day_pane_ParamLimits

0xad0b,	// (0x00095f95) main_cale_week_pane_ParamLimits

0xe4a7,	// (0x00099731) main_messa_pane_ParamLimits

0x5777,	// (0x00090a01) main_clock2_btn_pane_ParamLimits

0x5777,	// (0x00090a01) main_clock2_btn_pane

0xb5c5,	// (0x0009684f) main_clock2_btn_pane_cp01_ParamLimits

0xb5c5,	// (0x0009684f) main_clock2_btn_pane_cp01

0xd232,	// (0x000984bc) list_cale_mrui_pane_ParamLimits

0xd7a8,	// (0x00098a32) main_cf0_pane_g2

0x0001,

0xfcad,	// (0x0009af37) main_cf0_pane_g

0x9639,	// (0x000948c3) area_left_week_number_pane_ParamLimits

0x9647,	// (0x000948d1) area_top_day_name_pane_ParamLimits

0x965a,	// (0x000948e4) frame_month_view_pane_ParamLimits

0xd883,	// (0x00098b0d) grid_month_view_pane_ParamLimits

0xd891,	// (0x00098b1b) frm_month_g1_ParamLimits

0x96e5,	// (0x0009496f) frm_month_g2_ParamLimits

0x96f8,	// (0x00094982) frm_month_g3_ParamLimits

0x970b,	// (0x00094995) frm_month_g4_ParamLimits

0x971e,	// (0x000949a8) frm_month_g5_ParamLimits

0x9731,	// (0x000949bb) frm_month_g6_ParamLimits

0x9746,	// (0x000949d0) frm_month_g7_ParamLimits

0xd89e,	// (0x00098b28) frm_month_g8_ParamLimits

0x975b,	// (0x000949e5) frm_month_g9_ParamLimits

0x976b,	// (0x000949f5) frm_month_g10_ParamLimits

0x977b,	// (0x00094a05) frm_month_g11_ParamLimits

0x978b,	// (0x00094a15) frm_month_g12_ParamLimits

0x979d,	// (0x00094a27) frm_month_g13_ParamLimits

0x97b1,	// (0x00094a3b) frm_month_g14_ParamLimits

0x97c5,	// (0x00094a4f) frm_month_g15_ParamLimits

0x97d9,	// (0x00094a63) frm_month_g16_ParamLimits

0xfd05,	// (0x0009af8f) frm_month_g_ParamLimits

0xd8ab,	// (0x00098b35) cell_top_day_name_pane_t1_ParamLimits

0x97ed,	// (0x00094a77) cell_area_left_week_number_pane_g1_ParamLimits

0x97f9,	// (0x00094a83) cell_area_left_week_number_pane_t1_ParamLimits

0xe530,	// (0x000997ba) cell_month_view_pane_g1_ParamLimits

0x980c,	// (0x00094a96) cell_month_view_pane_t1_ParamLimits

0xe49f,	// (0x00099729) main_clock2_btn_pane_g1

0xda02,	// (0x00098c8c) main_clock2_btn_pane_t1

0xe4c9,	// (0x00099753) listscroll_cmail_pane_ParamLimits

0xcdcf,	// (0x00098059) main_sp_fs_email_pane_g1_ParamLimits

0xcddb,	// (0x00098065) main_sp_fs_email_pane_g2_ParamLimits

0xfb58,	// (0x0009ade2) main_sp_fs_email_pane_g_ParamLimits

0xd3f2,	// (0x0009867c) list_recal_day_pane_ParamLimits

0xd403,	// (0x0009868d) mian_recal_day_pane_t1

0x8836,	// (0x00093ac0) list_single_dyc_row_text_pane_t4_ParamLimits

0x8836,	// (0x00093ac0) list_single_dyc_row_text_pane_t4

0x887f,	// (0x00093b09) list_single_dyc_row_text_pane_t5_ParamLimits

0x887f,	// (0x00093b09) list_single_dyc_row_text_pane_t5

0xce85,	// (0x0009810f) list_single_dyc_row_text_pane_t6_ParamLimits

0xce85,	// (0x0009810f) list_single_dyc_row_text_pane_t6

0x2d84,	// (0x0008e00e) aid_mgn_list_cale_time_pane

0x9f72,	// (0x000951fc) main_gallery2_pane_ParamLimits

0xb5d9,	// (0x00096863) main_clock2_pane_cp01_t1

0xb5e7,	// (0x00096871) main_clock2_pane_cp01_t3

0x0001,

0xf657,	// (0x0009a8e1) main_clock2_pane_cp01_t

0x1682,	// (0x0008c90c) cale_week_scroll_pane_g16_ParamLimits

0x1682,	// (0x0008c90c) cale_week_scroll_pane_g16

0xe740,	// (0x000999ca) vorec_slider_pane

0xd96f,	// (0x00098bf9) vidtel_button_pane_t1_ParamLimits

0x8eff,	// (0x00094189) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8eff,	// (0x00094189) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8f12,	// (0x0009419c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8f12,	// (0x0009419c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc5b,	// (0x0009aee5) main_fs_bigclock_clock_pane_g_ParamLimits

0x8f29,	// (0x000941b3) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8f3f,	// (0x000941c9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc64,	// (0x0009aeee) main_fs_bigclock_clock_pane_t_ParamLimits

0x4fbd,	// (0x00090247) main_mup3_lyrics_pane_ParamLimits

0x4fbd,	// (0x00090247) main_mup3_lyrics_pane

0x9d22,	// (0x00094fac) main_mup3_lyrics_pane_t1_ParamLimits

0x9d22,	// (0x00094fac) main_mup3_lyrics_pane_t1

0xba1d,	// (0x00096ca7) aid_main_mp4_pane_t1_area

0xba27,	// (0x00096cb1) aid_main_mp4_pane_t2_area

0xbad3,	// (0x00096d5d) main_mp4_pane_g7_ParamLimits

0xbad3,	// (0x00096d5d) main_mp4_pane_g7

0xbadf,	// (0x00096d69) main_mp4_pane_g8_ParamLimits

0xbadf,	// (0x00096d69) main_mp4_pane_g8

0x615b,	// (0x000913e5) aid_call6_pane_g1_size

0x99d5,	// (0x00094c5f) list_double_large_graphic_phob2_other_pane_ParamLimits

0x99d5,	// (0x00094c5f) list_double_large_graphic_phob2_other_pane

0x9d3d,	// (0x00094fc7) list_double_large_graphic_phob2_other_pane_g1

0xddfa,	// (0x00099084) list_highlight_pane_cp026

0xe4c9,	// (0x00099753) main_welc_pane_ParamLimits

0x8675,	// (0x000938ff) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8675,	// (0x000938ff) main_sp_fs_ctrlbar_pane_g3

0x868f,	// (0x00093919) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x868f,	// (0x00093919) main_sp_fs_ctrlbar_pane_g4

0x86c3,	// (0x0009394d) toolbar2_fixed_button_pane_cp01

0x86ce,	// (0x00093958) toolbar2_fixed_button_pane_cp02

0x86db,	// (0x00093965) toolbar2_fixed_button_pane_cp03

0x9a73,	// (0x00094cfd) list_welc_entry_pane_ParamLimits

0x9a73,	// (0x00094cfd) list_welc_entry_pane

0x9af7,	// (0x00094d81) main_welc_pane_g3_ParamLimits

0x9af7,	// (0x00094d81) main_welc_pane_g3

0x9b4c,	// (0x00094dd6) main_welc_pane_t2_ParamLimits

0x9b4c,	// (0x00094dd6) main_welc_pane_t2

0x9b67,	// (0x00094df1) main_welc_pane_t3_ParamLimits

0x9b67,	// (0x00094df1) main_welc_pane_t3

0x0005,

0xfd67,	// (0x0009aff1) main_welc_pane_t_ParamLimits

0xfd67,	// (0x0009aff1) main_welc_pane_t

0x9c24,	// (0x00094eae) welc_button_pane_ParamLimits

0x9c24,	// (0x00094eae) welc_button_pane

0x9c92,	// (0x00094f1c) welc_service_logo_pane_ParamLimits

0x9c92,	// (0x00094f1c) welc_service_logo_pane

0x9d45,	// (0x00094fcf) list_single_welc_entry_pane_ParamLimits

0x9d45,	// (0x00094fcf) list_single_welc_entry_pane

0x9d58,	// (0x00094fe2) list_single_welc_entry_pane_g1

0x9d60,	// (0x00094fea) list_single_welc_entry_pane_t1

0x9d6e,	// (0x00094ff8) list_single_welc_entry_pane_t2

0x0001,

0xfd79,	// (0x0009b003) list_single_welc_entry_pane_t

0xddfa,	// (0x00099084) bg_button_pane_cp035

0xda10,	// (0x00098c9a) welc_button_pane_t1

0xda1e,	// (0x00098ca8) welc_service_logo_pane_g1

0xda27,	// (0x00098cb1) welc_service_logo_pane_g2

0x0001,

0xfd7e,	// (0x0009b008) welc_service_logo_pane_g

0x9f80,	// (0x0009520a) main_int_radio_pane

0xc7f9,	// (0x00097a83) list_single_fs_dyc_pane_g1

0x98cd,	// (0x00094b57) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x98cd,	// (0x00094b57) list_double_large_graphic_phob2_pane_g3

0x98d9,	// (0x00094b63) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x98d9,	// (0x00094b63) list_double_large_graphic_phob2_pane_g4

0x9d7c,	// (0x00095006) main_int_radio1_pane_ParamLimits

0x9d7c,	// (0x00095006) main_int_radio1_pane

0xda30,	// (0x00098cba) find_pane_cp02

0x9d99,	// (0x00095023) input_focus_pane_cp12_ParamLimits

0x9d99,	// (0x00095023) input_focus_pane_cp12

0x9da9,	// (0x00095033) input_focus_pane_cp13_ParamLimits

0x9da9,	// (0x00095033) input_focus_pane_cp13

0x9dbd,	// (0x00095047) input_focus_pane_cp14_ParamLimits

0x9dbd,	// (0x00095047) input_focus_pane_cp14

0xda39,	// (0x00098cc3) int_radio1_listscroll_pane

0x9dd1,	// (0x0009505b) main_int_radio1_pane_g1_ParamLimits

0x9dd1,	// (0x0009505b) main_int_radio1_pane_g1

0x9de7,	// (0x00095071) main_int_radio1_pane_t1_ParamLimits

0x9de7,	// (0x00095071) main_int_radio1_pane_t1

0x9e00,	// (0x0009508a) main_int_radio1_pane_t2_ParamLimits

0x9e00,	// (0x0009508a) main_int_radio1_pane_t2

0x9e1b,	// (0x000950a5) main_int_radio1_pane_t3_ParamLimits

0x9e1b,	// (0x000950a5) main_int_radio1_pane_t3

0x9e36,	// (0x000950c0) main_int_radio1_pane_t4_ParamLimits

0x9e36,	// (0x000950c0) main_int_radio1_pane_t4

0xda43,	// (0x00098ccd) main_int_radio1_pane_t5_ParamLimits

0xda43,	// (0x00098ccd) main_int_radio1_pane_t5

0x9e48,	// (0x000950d2) main_int_radio1_pane_t6_ParamLimits

0x9e48,	// (0x000950d2) main_int_radio1_pane_t6

0x9e5d,	// (0x000950e7) main_int_radio1_pane_t7_ParamLimits

0x9e5d,	// (0x000950e7) main_int_radio1_pane_t7

0x9e72,	// (0x000950fc) main_int_radio1_pane_t8_ParamLimits

0x9e72,	// (0x000950fc) main_int_radio1_pane_t8

0x9e8f,	// (0x00095119) main_int_radio1_pane_t9_ParamLimits

0x9e8f,	// (0x00095119) main_int_radio1_pane_t9

0x9ea1,	// (0x0009512b) main_int_radio1_pane_t10_ParamLimits

0x9ea1,	// (0x0009512b) main_int_radio1_pane_t10

0x9ec7,	// (0x00095151) main_int_radio1_pane_t11_ParamLimits

0x9ec7,	// (0x00095151) main_int_radio1_pane_t11

0x9eed,	// (0x00095177) main_int_radio1_pane_t12_ParamLimits

0x9eed,	// (0x00095177) main_int_radio1_pane_t12

0x000b,

0xfd83,	// (0x0009b00d) main_int_radio1_pane_t_ParamLimits

0xfd83,	// (0x0009b00d) main_int_radio1_pane_t

0xd8be,	// (0x00098b48) int_radio_list_pane

0xd8c6,	// (0x00098b50) scroll_pane_cp037

0xda55,	// (0x00098cdf) list_double_large_graphic_int_radio_pane_ParamLimits

0xda55,	// (0x00098cdf) list_double_large_graphic_int_radio_pane

0xda69,	// (0x00098cf3) list_double_large_graphic_int_radio_pane_g1

0xda72,	// (0x00098cfc) list_double_large_graphic_int_radio_pane_t1

0xda80,	// (0x00098d0a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfd9c,	// (0x0009b026) list_double_large_graphic_int_radio_pane_t

0xddfa,	// (0x00099084) list_highlight_pane_cp027

0xd9b6,	// (0x00098c40) main_button_pane_4

0x9b0b,	// (0x00094d95) main_welc_pane_g4_ParamLimits

0x9b0b,	// (0x00094d95) main_welc_pane_g4

0x9b84,	// (0x00094e0e) main_welc_pane_t4_ParamLimits

0x9b84,	// (0x00094e0e) main_welc_pane_t4

0x9b99,	// (0x00094e23) main_welc_pane_t5_ParamLimits

0x9b99,	// (0x00094e23) main_welc_pane_t5

0x9be9,	// (0x00094e73) main_welc_pane_t6_ParamLimits

0x9be9,	// (0x00094e73) main_welc_pane_t6

0x9c3b,	// (0x00094ec5) welc_button_pane_2_ParamLimits

0x9c3b,	// (0x00094ec5) welc_button_pane_2

0x9c59,	// (0x00094ee3) welc_button_pane_3_ParamLimits

0x9c59,	// (0x00094ee3) welc_button_pane_3

0xd9b6,	// (0x00098c40) welc_button_pane_4

0x9c7a,	// (0x00094f04) welc_button_pane_5_ParamLimits

0x9c7a,	// (0x00094f04) welc_button_pane_5

0x4721,	// (0x0008f9ab) main_popup_welc_pane

0xda8e,	// (0x00098d18) main_welc_sk_g3

0xda98,	// (0x00098d22) main_welc_sk_g4

0xdaa2,	// (0x00098d2c) main_welc_sk_t3

0xdab2,	// (0x00098d3c) main_welc_sk_t4

0xdac2,	// (0x00098d4c) popup_welc_pane_t4

0xdad0,	// (0x00098d5a) popup_welc_pane_t5

0xdade,	// (0x00098d68) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
