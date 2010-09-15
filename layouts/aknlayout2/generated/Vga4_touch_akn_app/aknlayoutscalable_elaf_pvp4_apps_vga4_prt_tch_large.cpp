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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007c3e9 };

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
0x18f9,	// (0x0007dce2) Screen

0x1905,	// (0x0007dcee) application_window

0x1959,	// (0x0007dd42) area_bottom_pane_ParamLimits

0x1959,	// (0x0007dd42) area_bottom_pane

0x19b7,	// (0x0007dda0) area_top_pane_ParamLimits

0x19b7,	// (0x0007dda0) area_top_pane

0x1a1b,	// (0x0007de04) call_video_uplink_pane_ParamLimits

0x1a1b,	// (0x0007de04) call_video_uplink_pane

0x1a5a,	// (0x0007de43) main_pane_ParamLimits

0x1a5a,	// (0x0007de43) main_pane

0xc63f,	// (0x00088a28) context_pane

0x4a46,	// (0x00080e2f) navi_pane

0x4a6f,	// (0x00080e58) popup_cale_events_window_ParamLimits

0x4a6f,	// (0x00080e58) popup_cale_events_window

0xc652,	// (0x00088a3b) popup_mup_playback_window

0x4a87,	// (0x00080e70) signal_pane

0xa7bf,	// (0x00086ba8) main_browser_pane

0xa95d,	// (0x00086d46) main_burst_pane

0x48b6,	// (0x00080c9f) main_calc_pane

0xc633,	// (0x00088a1c) main_cale_day_pane

0x1fe2,	// (0x0007e3cb) main_cale_month_pane

0xc633,	// (0x00088a1c) main_cale_week_pane

0xa95d,	// (0x00086d46) main_call_pane

0xa469,	// (0x00086852) main_call_poc_pane

0xa95d,	// (0x00086d46) main_camera_pane

0xa95d,	// (0x00086d46) main_chi_dic_pane

0xb179,	// (0x00087562) main_clock_pane

0xa469,	// (0x00086852) main_fmradio_pane

0xa95d,	// (0x00086d46) main_graph_messa_pane

0xa469,	// (0x00086852) main_help_pane

0xa7bf,	// (0x00086ba8) main_im_pane

0xa6e0,	// (0x00086ac9) main_image_pane_ParamLimits

0xa6e0,	// (0x00086ac9) main_image_pane

0xa469,	// (0x00086852) main_location2_pane

0xa95d,	// (0x00086d46) main_location_pane

0xa6e0,	// (0x00086ac9) main_messa_pane

0xa469,	// (0x00086852) main_mp2_pane

0xa95d,	// (0x00086d46) main_mp_pane

0xa469,	// (0x00086852) main_msg_pane

0xa469,	// (0x00086852) main_mup_eq_pane

0xa469,	// (0x00086852) main_mup_pane

0xa7bf,	// (0x00086ba8) main_notes_pane

0xa469,	// (0x00086852) main_pec_pane

0xa469,	// (0x00086852) main_phob_pane

0xa469,	// (0x00086852) main_pinb_pane

0xa469,	// (0x00086852) main_postcard_pane

0xa469,	// (0x00086852) main_qdial_pane

0xa95d,	// (0x00086d46) main_skin_pane

0xa469,	// (0x00086852) main_smil2_pane

0xa95d,	// (0x00086d46) main_smil_pane

0xa95d,	// (0x00086d46) main_video_pane

0xa95d,	// (0x00086d46) main_video_tele_pane

0xa6e0,	// (0x00086ac9) main_viewer_pane_ParamLimits

0xa6e0,	// (0x00086ac9) main_viewer_pane

0xa95d,	// (0x00086d46) main_vorec_pane

0x48f6,	// (0x00080cdf) popup_blid_sat_info_window_ParamLimits

0x48f6,	// (0x00080cdf) popup_blid_sat_info_window

0x491c,	// (0x00080d05) popup_dyc_status_message_window_ParamLimits

0x491c,	// (0x00080d05) popup_dyc_status_message_window

0x492c,	// (0x00080d15) popup_grid_large_graphic_window_ParamLimits

0x492c,	// (0x00080d15) popup_grid_large_graphic_window

0x49c1,	// (0x00080daa) popup_loc_request_window_ParamLimits

0x49c1,	// (0x00080daa) popup_loc_request_window

0x4a1a,	// (0x00080e03) popup_wml_address_window_ParamLimits

0x4a1a,	// (0x00080e03) popup_wml_address_window

0x478e,	// (0x00080b77) call_muted_g1

0x4406,	// (0x000807ef) popup_call_audio_conf_window_ParamLimits

0x4406,	// (0x000807ef) popup_call_audio_conf_window

0x479e,	// (0x00080b87) popup_call_audio_first_window_ParamLimits

0x479e,	// (0x00080b87) popup_call_audio_first_window

0x47de,	// (0x00080bc7) popup_call_audio_in_window_ParamLimits

0x47de,	// (0x00080bc7) popup_call_audio_in_window

0x4802,	// (0x00080beb) popup_call_audio_out_window_ParamLimits

0x4802,	// (0x00080beb) popup_call_audio_out_window

0x4824,	// (0x00080c0d) popup_call_audio_second_window_ParamLimits

0x4824,	// (0x00080c0d) popup_call_audio_second_window

0x4854,	// (0x00080c3d) popup_call_audio_wait_window_ParamLimits

0x4854,	// (0x00080c3d) popup_call_audio_wait_window

0x4875,	// (0x00080c5e) popup_number_entry_window_ParamLimits

0x4875,	// (0x00080c5e) popup_number_entry_window

0xa021,	// (0x0008640a) bg_popup_call_pane_cp05_ParamLimits

0xa021,	// (0x0008640a) bg_popup_call_pane_cp05

0xa041,	// (0x0008642a) popup_number_entry_window_t1

0xa054,	// (0x0008643d) popup_number_entry_window_t2

0xa066,	// (0x0008644f) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0008b42e) popup_number_entry_window_t

0xa0ad,	// (0x00086496) text_title_cp2

0xa0c0,	// (0x000864a9) bg_popup_call_pane_cp_ParamLimits

0xa0c0,	// (0x000864a9) bg_popup_call_pane_cp

0xa0ce,	// (0x000864b7) call_thumbnail_pane

0xa0d6,	// (0x000864bf) popup_call_audio_in_window_g1_ParamLimits

0xa0d6,	// (0x000864bf) popup_call_audio_in_window_g1

0xa0e2,	// (0x000864cb) popup_call_audio_in_window_g2_ParamLimits

0xa0e2,	// (0x000864cb) popup_call_audio_in_window_g2

0xa0ee,	// (0x000864d7) popup_call_audio_in_window_g3_ParamLimits

0xa0ee,	// (0x000864d7) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0008b437) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0008b437) popup_call_audio_in_window_g

0xa0fa,	// (0x000864e3) popup_call_audio_in_window_t1_ParamLimits

0xa0fa,	// (0x000864e3) popup_call_audio_in_window_t1

0xa116,	// (0x000864ff) popup_call_audio_in_window_t2_ParamLimits

0xa116,	// (0x000864ff) popup_call_audio_in_window_t2

0xa132,	// (0x0008651b) popup_call_audio_in_window_t3_ParamLimits

0xa132,	// (0x0008651b) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0008b43e) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0008b43e) popup_call_audio_in_window_t

0xa0c0,	// (0x000864a9) bg_popup_call_pane_cp01_ParamLimits

0xa0c0,	// (0x000864a9) bg_popup_call_pane_cp01

0xa0ce,	// (0x000864b7) call_thumbnail_pane_cp02

0xa145,	// (0x0008652e) call_type_pane_cp022

0xa14d,	// (0x00086536) popup_call_audio_out_window_g1_ParamLimits

0xa14d,	// (0x00086536) popup_call_audio_out_window_g1

0xa15f,	// (0x00086548) popup_call_audio_out_window_g2_ParamLimits

0xa15f,	// (0x00086548) popup_call_audio_out_window_g2

0xa16b,	// (0x00086554) popup_call_audio_out_window_g3_ParamLimits

0xa16b,	// (0x00086554) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0008b445) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0008b445) popup_call_audio_out_window_g

0xa17d,	// (0x00086566) popup_call_audio_out_window_t1_ParamLimits

0xa17d,	// (0x00086566) popup_call_audio_out_window_t1

0xa195,	// (0x0008657e) popup_call_audio_out_window_t2_ParamLimits

0xa195,	// (0x0008657e) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0008b44c) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0008b44c) popup_call_audio_out_window_t

0xa1aa,	// (0x00086593) bg_popup_call_pane_ParamLimits

0xa1aa,	// (0x00086593) bg_popup_call_pane

0x1c21,	// (0x0007e00a) call_thumbnail_pane_cp_ParamLimits

0x1c21,	// (0x0007e00a) call_thumbnail_pane_cp

0xa22e,	// (0x00086617) call_type_pane_cp01_ParamLimits

0xa22e,	// (0x00086617) call_type_pane_cp01

0xa272,	// (0x0008665b) popup_call_audio_first_window_g1_ParamLimits

0xa272,	// (0x0008665b) popup_call_audio_first_window_g1

0xa2be,	// (0x000866a7) popup_call_audio_first_window_g2_ParamLimits

0xa2be,	// (0x000866a7) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0008b451) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0008b451) popup_call_audio_first_window_g

0xa302,	// (0x000866eb) popup_call_audio_first_window_t1_ParamLimits

0xa302,	// (0x000866eb) popup_call_audio_first_window_t1

0xa3ae,	// (0x00086797) popup_call_audio_first_window_t4_ParamLimits

0xa3ae,	// (0x00086797) popup_call_audio_first_window_t4

0xa43a,	// (0x00086823) popup_call_audio_first_window_t5_ParamLimits

0xa43a,	// (0x00086823) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0008b456) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0008b456) popup_call_audio_first_window_t

0xa469,	// (0x00086852) bg_popup_call_pane_cp02

0xa473,	// (0x0008685c) call_type_pane_cp023

0xa47b,	// (0x00086864) popup_call_audio_wait_window_g1

0xa483,	// (0x0008686c) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0008b45d) popup_call_audio_wait_window_g

0xa48b,	// (0x00086874) popup_call_audio_wait_window_t3

0xa499,	// (0x00086882) bg_popup_call_pane_cp03_ParamLimits

0xa499,	// (0x00086882) bg_popup_call_pane_cp03

0xa4f9,	// (0x000868e2) call_thumbnail_pane_cp011_ParamLimits

0xa4f9,	// (0x000868e2) call_thumbnail_pane_cp011

0xa505,	// (0x000868ee) call_type_pane_cp034_ParamLimits

0xa505,	// (0x000868ee) call_type_pane_cp034

0xa541,	// (0x0008692a) popup_call_audio_second_window_g1_ParamLimits

0xa541,	// (0x0008692a) popup_call_audio_second_window_g1

0xa57d,	// (0x00086966) popup_call_audio_second_window_g2_ParamLimits

0xa57d,	// (0x00086966) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0008b462) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0008b462) popup_call_audio_second_window_g

0xa5b9,	// (0x000869a2) popup_call_audio_second_window_t1_ParamLimits

0xa5b9,	// (0x000869a2) popup_call_audio_second_window_t1

0xa63a,	// (0x00086a23) popup_call_audio_second_window_t2_ParamLimits

0xa63a,	// (0x00086a23) popup_call_audio_second_window_t2

0xa68c,	// (0x00086a75) popup_call_audio_second_window_t3_ParamLimits

0xa68c,	// (0x00086a75) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0008b467) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0008b467) popup_call_audio_second_window_t

0xa469,	// (0x00086852) bg_popup_call_pane_cp04

0xa6c2,	// (0x00086aab) list_conf_pane

0xa6ca,	// (0x00086ab3) popup_call_audio_conf_window_t1

0xa6d8,	// (0x00086ac1) call_thumbnail_pane_g1

0xa6e0,	// (0x00086ac9) bg_pinb_pane_ParamLimits

0xa6e0,	// (0x00086ac9) bg_pinb_pane

0xa6ee,	// (0x00086ad7) find_pinb_pane

0xa6e0,	// (0x00086ac9) listscroll_pinb_pane_ParamLimits

0xa6e0,	// (0x00086ac9) listscroll_pinb_pane

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g1

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g2

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g3

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g4

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g5

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g6

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g7

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g8

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g9

0xa6f8,	// (0x00086ae1) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0008b46e) pinb_bg_pane_g

0xa017,	// (0x00086400) grid_pinb_pane

0xa017,	// (0x00086400) list_pinb_pane

0xa670,	// (0x00086a59) scroll_pane_cp01_ParamLimits

0xa670,	// (0x00086a59) scroll_pane_cp01

0xa702,	// (0x00086aeb) find_pinb_pane_g1_ParamLimits

0xa702,	// (0x00086aeb) find_pinb_pane_g1

0xa71a,	// (0x00086b03) find_pinb_pane_t1

0xa72c,	// (0x00086b15) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0008b488) find_pinb_pane_t

0xa741,	// (0x00086b2a) input_focus_pane_cp01_ParamLimits

0xa741,	// (0x00086b2a) input_focus_pane_cp01

0xa67e,	// (0x00086a67) cell_pinb_pane_ParamLimits

0xa67e,	// (0x00086a67) cell_pinb_pane

0xa74d,	// (0x00086b36) cell_pinb_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) cell_pinb_pane_g1

0xa75b,	// (0x00086b44) cell_pinb_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) cell_pinb_pane_g2

0xa75b,	// (0x00086b44) cell_pinb_pane_g3_ParamLimits

0xa75b,	// (0x00086b44) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0008b48d) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0008b48d) cell_pinb_pane_g

0xa469,	// (0x00086852) grid_highlight_pane_cp01

0xa67e,	// (0x00086a67) list_pinb_item_pane_ParamLimits

0xa67e,	// (0x00086a67) list_pinb_item_pane

0xa017,	// (0x00086400) list_highlight_pane_cp02

0xa769,	// (0x00086b52) list_pinb_item_pane_g1_ParamLimits

0xa769,	// (0x00086b52) list_pinb_item_pane_g1

0xa75b,	// (0x00086b44) list_pinb_item_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) list_pinb_item_pane_g2

0xa74d,	// (0x00086b36) list_pinb_item_pane_g3_ParamLimits

0xa74d,	// (0x00086b36) list_pinb_item_pane_g3

0xa75b,	// (0x00086b44) list_pinb_item_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0008b494) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0008b494) list_pinb_item_pane_g

0xa777,	// (0x00086b60) list_pinb_item_pane_t1_ParamLimits

0xa777,	// (0x00086b60) list_pinb_item_pane_t1

0x1c5f,	// (0x0007e048) calc_display_pane

0x1c7d,	// (0x0007e066) calc_paper_pane

0x1c99,	// (0x0007e082) grid_calc_pane

0xa469,	// (0x00086852) bg_list_pane_cp01

0x1cc5,	// (0x0007e0ae) clock_g1

0x1ccd,	// (0x0007e0b6) clock_g2

0x0001,

0xf0b4,	// (0x0008b49d) clock_g

0x1cd7,	// (0x0007e0c0) clock_t1_ParamLimits

0x1cd7,	// (0x0007e0c0) clock_t1

0x1cec,	// (0x0007e0d5) clock_t2_ParamLimits

0x1cec,	// (0x0007e0d5) clock_t2

0x1cfe,	// (0x0007e0e7) clock_t3_ParamLimits

0x1cfe,	// (0x0007e0e7) clock_t3

0x1d10,	// (0x0007e0f9) clock_t4_ParamLimits

0x1d10,	// (0x0007e0f9) clock_t4

0x1d22,	// (0x0007e10b) clock_t5_ParamLimits

0x1d22,	// (0x0007e10b) clock_t5

0x1d37,	// (0x0007e120) clock_t6_ParamLimits

0x1d37,	// (0x0007e120) clock_t6

0x1d49,	// (0x0007e132) clock_t7_ParamLimits

0x1d49,	// (0x0007e132) clock_t7

0x1d5b,	// (0x0007e144) clock_t8_ParamLimits

0x1d5b,	// (0x0007e144) clock_t8

0x1d71,	// (0x0007e15a) clock_t9_ParamLimits

0x1d71,	// (0x0007e15a) clock_t9

0x0008,

0xf0b9,	// (0x0008b4a2) clock_t_ParamLimits

0xf0b9,	// (0x0008b4a2) clock_t

0xa78b,	// (0x00086b74) popup_clock_analogue_window_cp02

0xa78b,	// (0x00086b74) popup_clock_digital_window_cp01

0xa469,	// (0x00086852) listscroll_help_pane

0xa469,	// (0x00086852) phob_pre_status_pane

0xa793,	// (0x00086b7c) grid_qdial_pane

0xa6e0,	// (0x00086ac9) listscroll_mce_pane

0xa6e0,	// (0x00086ac9) bg_notes_pane

0xa79d,	// (0x00086b86) list_notes_pane

0x1d87,	// (0x0007e170) scroll_pane_cp06

0xa7ab,	// (0x00086b94) bg_calc_paper_pane

0x1d96,	// (0x0007e17f) list_calc_pane

0xa7bf,	// (0x00086ba8) bg_calc_display_pane

0x1db0,	// (0x0007e199) calc_display_pane_t1

0x1dc5,	// (0x0007e1ae) calc_display_pane_t2

0x1dda,	// (0x0007e1c3) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0008b4b5) calc_display_pane_t

0x1dec,	// (0x0007e1d5) cell_calc_pane_ParamLimits

0x1dec,	// (0x0007e1d5) cell_calc_pane

0xa7cb,	// (0x00086bb4) bg_calc_paper_pane_g1

0xa7d7,	// (0x00086bc0) bg_calc_paper_pane_g2

0xa7e3,	// (0x00086bcc) bg_calc_paper_pane_g3

0xa7ef,	// (0x00086bd8) bg_calc_paper_pane_g4

0xa7fb,	// (0x00086be4) bg_calc_paper_pane_g5

0x1e1b,	// (0x0007e204) bg_calc_paper_pane_g6

0x1e2c,	// (0x0007e215) bg_calc_paper_pane_g7

0x1e3d,	// (0x0007e226) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0008b4bc) bg_calc_paper_pane_g

0x1e4e,	// (0x0007e237) calc_bg_paper_pane_g9

0x1e5f,	// (0x0007e248) list_calc_item_pane_ParamLimits

0x1e5f,	// (0x0007e248) list_calc_item_pane

0xa807,	// (0x00086bf0) list_calc_item_pane_g1

0x1e80,	// (0x0007e269) list_calc_item_pane_t1_ParamLimits

0x1e80,	// (0x0007e269) list_calc_item_pane_t1

0x1e92,	// (0x0007e27b) list_calc_item_pane_t2_ParamLimits

0x1e92,	// (0x0007e27b) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0008b4cd) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0008b4cd) list_calc_item_pane_t

0xa6f8,	// (0x00086ae1) cell_calc_pane_g1

0xa814,	// (0x00086bfd) grid_highlight_pane_cp02

0xd688,	// (0x00089a71) bg_calc_display_pane_g1

0x1ec2,	// (0x0007e2ab) bg_calc_display_pane_g2

0xd691,	// (0x00089a7a) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0008b4d7) bg_calc_display_pane_g

0x1ecc,	// (0x0007e2b5) cell_qdial_pane_ParamLimits

0x1ecc,	// (0x0007e2b5) cell_qdial_pane

0x1ee2,	// (0x0007e2cb) cell_qdial_pane_g1_ParamLimits

0x1ee2,	// (0x0007e2cb) cell_qdial_pane_g1

0x1eef,	// (0x0007e2d8) cell_qdial_pane_g2_ParamLimits

0x1eef,	// (0x0007e2d8) cell_qdial_pane_g2

0xa836,	// (0x00086c1f) cell_qdial_pane_g3_ParamLimits

0xa836,	// (0x00086c1f) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0008b4de) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0008b4de) cell_qdial_pane_g

0x1f0d,	// (0x0007e2f6) cell_qdial_pane_t1_ParamLimits

0x1f0d,	// (0x0007e2f6) cell_qdial_pane_t1

0x1f25,	// (0x0007e30e) cell_qdial_pane_t2_ParamLimits

0x1f25,	// (0x0007e30e) cell_qdial_pane_t2

0x1f38,	// (0x0007e321) cell_qdial_pane_t3_ParamLimits

0x1f38,	// (0x0007e321) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0008b4e7) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0008b4e7) cell_qdial_pane_t

0xa469,	// (0x00086852) grid_highlight_pane_cp04

0xa842,	// (0x00086c2b) thumbnail_qdial_pane_ParamLimits

0xa842,	// (0x00086c2b) thumbnail_qdial_pane

0xa89e,	// (0x00086c87) list_help_pane

0xa8a7,	// (0x00086c90) scroll_pane_cp02

0x1f4b,	// (0x0007e334) help_list_pane_t1_ParamLimits

0x1f4b,	// (0x0007e334) help_list_pane_t1

0x1f72,	// (0x0007e35b) bg_notes_pane_g2

0x1f7a,	// (0x0007e363) bg_notes_pane_g3

0x1f82,	// (0x0007e36b) notes_bg_pane_g1

0x1f8a,	// (0x0007e373) notes_bg_pane_g4

0x1f92,	// (0x0007e37b) notes_bg_pane_g5

0x1f9a,	// (0x0007e383) notes_bg_pane_g6

0x1fa2,	// (0x0007e38b) notes_bg_pane_g7

0x1faa,	// (0x0007e393) notes_bg_pane_g8

0x1fb2,	// (0x0007e39b) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0008b505) notes_bg_pane_g

0x1fba,	// (0x0007e3a3) list_notes_text_pane_ParamLimits

0x1fba,	// (0x0007e3a3) list_notes_text_pane

0xa8b0,	// (0x00086c99) list_notes_text_pane_g1

0x0c48,	// (0x0007d031) list_notes_text_pane_t1

0x1fe2,	// (0x0007e3cb) listscroll_cale_week_pane

0x200e,	// (0x0007e3f7) bg_cale_heading_pane

0x2037,	// (0x0007e420) bg_cale_pane_cp01

0x2059,	// (0x0007e442) cale_week_corner_pane

0x2078,	// (0x0007e461) cale_week_day_heading_pane

0x20a6,	// (0x0007e48f) cale_week_scroll_pane_g1

0x20ca,	// (0x0007e4b3) cale_week_scroll_pane_g2

0x20e2,	// (0x0007e4cb) cale_week_scroll_pane_g3

0x20fa,	// (0x0007e4e3) cale_week_scroll_pane_g4

0x2112,	// (0x0007e4fb) cale_week_scroll_pane_g5

0x212a,	// (0x0007e513) cale_week_scroll_pane_g6

0x214a,	// (0x0007e533) cale_week_scroll_pane_g7

0x216a,	// (0x0007e553) cale_week_scroll_pane_g8

0x218a,	// (0x0007e573) cale_week_scroll_pane_g9

0x21a7,	// (0x0007e590) cale_week_scroll_pane_g10

0x21c4,	// (0x0007e5ad) cale_week_scroll_pane_g11

0x21e3,	// (0x0007e5cc) cale_week_scroll_pane_g12

0x2208,	// (0x0007e5f1) cale_week_scroll_pane_g13

0x2231,	// (0x0007e61a) cale_week_scroll_pane_g14

0x225a,	// (0x0007e643) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0008b514) cale_week_scroll_pane_g

0x22a3,	// (0x0007e68c) cale_week_time_pane

0x22c3,	// (0x0007e6ac) grid_cale_week_pane

0xa8e5,	// (0x00086cce) scroll_pane_cp08

0x22f4,	// (0x0007e6dd) cell_cale_week_pane_ParamLimits

0x22f4,	// (0x0007e6dd) cell_cale_week_pane

0x2384,	// (0x0007e76d) cale_week_day_heading_pane_t1

0x23ac,	// (0x0007e795) cale_week_day_heading_pane_t2

0x23d9,	// (0x0007e7c2) cale_week_day_heading_pane_t3

0x2406,	// (0x0007e7ef) cale_week_day_heading_pane_t4

0x2433,	// (0x0007e81c) cale_week_day_heading_pane_t5

0x2460,	// (0x0007e849) cale_week_day_heading_pane_t6

0x248d,	// (0x0007e876) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0008b535) cale_week_day_heading_pane_t

0xa902,	// (0x00086ceb) bg_cale_side_pane

0x24b5,	// (0x0007e89e) cale_week_time_pane_t1

0x24d9,	// (0x0007e8c2) cale_week_time_pane_t2

0x24fd,	// (0x0007e8e6) cale_week_time_pane_t3

0x2521,	// (0x0007e90a) cale_week_time_pane_t4

0x2545,	// (0x0007e92e) cale_week_time_pane_t5

0x256b,	// (0x0007e954) cale_week_time_pane_t6

0x2593,	// (0x0007e97c) cale_week_time_pane_t7

0x25bf,	// (0x0007e9a8) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0008b544) cale_week_time_pane_t

0x25ef,	// (0x0007e9d8) cell_cale_week_pane_g2

0x2613,	// (0x0007e9fc) cell_cale_week_pane_g3_ParamLimits

0x2613,	// (0x0007e9fc) cell_cale_week_pane_g3

0xa910,	// (0x00086cf9) grid_highlight_pane_cp07

0xa918,	// (0x00086d01) listscroll_gms_pane

0xa922,	// (0x00086d0b) grid_gms_pane

0xa92b,	// (0x00086d14) listscroll_gms_pane_g1

0xa933,	// (0x00086d1c) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0008b555) listscroll_gms_pane_g

0x262b,	// (0x0007ea14) scroll_pane_cp010

0x2636,	// (0x0007ea1f) cell_gms_pane_ParamLimits

0x2636,	// (0x0007ea1f) cell_gms_pane

0x2649,	// (0x0007ea32) cell_gms_pane_g1

0xa93b,	// (0x00086d24) cell_gms_pane_g2

0xa943,	// (0x00086d2c) cell_gms_pane_g3

0xa94c,	// (0x00086d35) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0008b55a) cell_gms_pane_g

0xa955,	// (0x00086d3e) grid_highlight_pane_cp09

0x4712,	// (0x00080afb) phob_pre_status_pane_g1

0x471a,	// (0x00080b03) phob_pre_status_pane_g2

0x4722,	// (0x00080b0b) phob_pre_status_pane_g3

0x472a,	// (0x00080b13) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0008b923) phob_pre_status_pane_g

0x473a,	// (0x00080b23) phob_pre_status_pane_t1

0x474a,	// (0x00080b33) phob_pre_status_pane_t2

0x475a,	// (0x00080b43) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x0008b92e) phob_pre_status_pane_t

0xa95d,	// (0x00086d46) bg_list_pane_cp05

0x2659,	// (0x0007ea42) grid_vorec_pane

0x2663,	// (0x0007ea4c) vorec_t1

0x2671,	// (0x0007ea5a) vorec_t2

0x267f,	// (0x0007ea68) vorec_t3

0x268d,	// (0x0007ea76) vorec_t4

0x9423,	// (0x0008580c) vorec_t5

0x9431,	// (0x0008581a) vorec_t6

0x0004,

0xf17a,	// (0x0008b563) vorec_t

0x943f,	// (0x00085828) wait_bar_pane_cp01

0x26a9,	// (0x0007ea92) cell_vorec_pane_ParamLimits

0x26a9,	// (0x0007ea92) cell_vorec_pane

0x26be,	// (0x0007eaa7) cell_vorec_pane_g1

0xa469,	// (0x00086852) grid_highlight_pane_cp05

0xa67e,	// (0x00086a67) cams_zoom_pane

0xa67e,	// (0x00086a67) image_vga_pane

0xa75b,	// (0x00086b44) main_camera_pane_g1

0xa75b,	// (0x00086b44) main_camera_pane_g2

0xa75b,	// (0x00086b44) main_camera_pane_g3

0xa75b,	// (0x00086b44) main_camera_pane_g4

0xa75b,	// (0x00086b44) main_camera_pane_g5

0xa75b,	// (0x00086b44) main_camera_pane_g6

0xa75b,	// (0x00086b44) main_camera_pane_g7

0x0007,

0xf185,	// (0x0008b56e) main_camera_pane_g

0xb11d,	// (0x00087506) main_camera_pane_t1

0xb11d,	// (0x00087506) main_camera_pane_t2

0x0001,

0xf196,	// (0x0008b57f) main_camera_pane_t

0x26c8,	// (0x0007eab1) cams_zoom_pane_cp_ParamLimits

0x26c8,	// (0x0007eab1) cams_zoom_pane_cp

0x26f6,	// (0x0007eadf) image_cif_pane_ParamLimits

0x26f6,	// (0x0007eadf) image_cif_pane

0xa017,	// (0x00086400) image_subqcif_pane

0x2704,	// (0x0007eaed) main_video_pane_g1_ParamLimits

0x2704,	// (0x0007eaed) main_video_pane_g1

0x272c,	// (0x0007eb15) main_video_pane_g2_ParamLimits

0x272c,	// (0x0007eb15) main_video_pane_g2

0x275f,	// (0x0007eb48) main_video_pane_g3_ParamLimits

0x275f,	// (0x0007eb48) main_video_pane_g3

0x275f,	// (0x0007eb48) main_video_pane_g4_ParamLimits

0x275f,	// (0x0007eb48) main_video_pane_g4

0x278d,	// (0x0007eb76) main_video_pane_g5_ParamLimits

0x278d,	// (0x0007eb76) main_video_pane_g5

0xa965,	// (0x00086d4e) main_video_pane_g6_ParamLimits

0xa965,	// (0x00086d4e) main_video_pane_g6

0x0006,

0xf19b,	// (0x0008b584) main_video_pane_g_ParamLimits

0xf19b,	// (0x0008b584) main_video_pane_g

0x27a9,	// (0x0007eb92) main_video_pane_t1_ParamLimits

0x27a9,	// (0x0007eb92) main_video_pane_t1

0xa97f,	// (0x00086d68) cams_zoom_pane_g1

0xa97f,	// (0x00086d68) cams_zoom_pane_g2

0xa97f,	// (0x00086d68) cams_zoom_pane_g3

0xa97f,	// (0x00086d68) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0008b593) cams_zoom_pane_g

0x27ef,	// (0x0007ebd8) grid_cams_pane

0x27fd,	// (0x0007ebe6) linegrid_cams_pane

0x2809,	// (0x0007ebf2) cell_cams_pane_ParamLimits

0x2809,	// (0x0007ebf2) cell_cams_pane

0xa989,	// (0x00086d72) cams_burst_image_pane

0xa991,	// (0x00086d7a) cell_cams_pane_g1

0xa469,	// (0x00086852) grid_highlight_pane_cp03

0xa6f8,	// (0x00086ae1) mp_bg_pane_g1

0xa017,	// (0x00086400) bg_list_pane_cp03

0xa017,	// (0x00086400) bg_mp_pane

0xa017,	// (0x00086400) grid_mp_pane

0xa97f,	// (0x00086d68) media_player_g1

0xaeee,	// (0x000872d7) media_player_t1

0xaeee,	// (0x000872d7) media_player_t2

0xaeee,	// (0x000872d7) media_player_t3

0xaeee,	// (0x000872d7) media_player_t4

0xaeee,	// (0x000872d7) media_player_t5

0xaeee,	// (0x000872d7) media_player_t6

0xaeee,	// (0x000872d7) media_player_t7

0x0006,

0xf524,	// (0x0008b90d) media_player_t

0xa017,	// (0x00086400) wait_bar_pane_cp02

0xf509,	// (0x0008b8f2) main_usb_pane_t

0xb179,	// (0x00087562) cell_mp_pane

0xa6f8,	// (0x00086ae1) cell_mp_pane_g1

0xa469,	// (0x00086852) grid_highlight_pane_cp06

0xa9ad,	// (0x00086d96) grid_skin_colour_pane

0xa9b5,	// (0x00086d9e) list_highlight_pane_cp03

0x281e,	// (0x0007ec07) skin_g1

0xa9bd,	// (0x00086da6) skin_t1

0xa9cc,	// (0x00086db5) skin_t2

0x0001,

0xf1d8,	// (0x0008b5c1) skin_t

0x2828,	// (0x0007ec11) cell_skin_colour_pane_ParamLimits

0x2828,	// (0x0007ec11) cell_skin_colour_pane

0xa9da,	// (0x00086dc3) cell_skin_colour_pane_g1

0x28a8,	// (0x0007ec91) call_video_g1_ParamLimits

0x28a8,	// (0x0007ec91) call_video_g1

0x28b8,	// (0x0007eca1) call_video_g2_ParamLimits

0x28b8,	// (0x0007eca1) call_video_g2

0x0001,

0xf1dd,	// (0x0008b5c6) call_video_g_ParamLimits

0xf1dd,	// (0x0008b5c6) call_video_g

0x2908,	// (0x0007ecf1) call_video_uplink_pane_cp1_ParamLimits

0x2908,	// (0x0007ecf1) call_video_uplink_pane_cp1

0xa9ec,	// (0x00086dd5) call_video_uplink_pane_cp2

0x29d6,	// (0x0007edbf) video_down_crop_pane_ParamLimits

0x29d6,	// (0x0007edbf) video_down_crop_pane

0x2ac8,	// (0x0007eeb1) video_down_pane_ParamLimits

0x2ac8,	// (0x0007eeb1) video_down_pane

0xa9f4,	// (0x00086ddd) video_down_subqcif_pane_ParamLimits

0xa9f4,	// (0x00086ddd) video_down_subqcif_pane

0xaa0e,	// (0x00086df7) video_down_subqcif_pane_cp_ParamLimits

0xaa0e,	// (0x00086df7) video_down_subqcif_pane_cp

0xaa36,	// (0x00086e1f) im_reading_pane_ParamLimits

0xaa36,	// (0x00086e1f) im_reading_pane

0x2be5,	// (0x0007efce) im_writing_pane_ParamLimits

0x2be5,	// (0x0007efce) im_writing_pane

0x2c03,	// (0x0007efec) im_reading_pane_t1

0xaa50,	// (0x00086e39) list_im_pane

0xaa61,	// (0x00086e4a) scroll_pane_cp07

0x2c45,	// (0x0007f02e) im_writing_pane_t1_ParamLimits

0x2c45,	// (0x0007f02e) im_writing_pane_t1

0xaa7a,	// (0x00086e63) im_writing_pane_t2_ParamLimits

0xaa7a,	// (0x00086e63) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0008b5d0) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0008b5d0) im_writing_pane_t

0xa469,	// (0x00086852) input_focus_pane_cp04

0xa469,	// (0x00086852) input_focus_pane_cp05

0x2c57,	// (0x0007f040) list_im_single_pane_ParamLimits

0x2c57,	// (0x0007f040) list_im_single_pane

0xaa97,	// (0x00086e80) list_single_im_pane_t1

0xa95d,	// (0x00086d46) blid_accuracy_pane

0xa95d,	// (0x00086d46) blid_compass_pane

0xc5eb,	// (0x000889d4) main_location_t1

0xc5eb,	// (0x000889d4) main_location_t2

0xc5eb,	// (0x000889d4) main_location_t3

0x0002,

0xf533,	// (0x0008b91c) main_location_t

0xa469,	// (0x00086852) aid_levels_location

0xa6f8,	// (0x00086ae1) blid_accuracy_pane_g1

0xa6f8,	// (0x00086ae1) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0008b624) blid_accuracy_pane_g

0xaad1,	// (0x00086eba) wml_content_pane

0xab0f,	// (0x00086ef8) wml_button_pane_ParamLimits

0xab0f,	// (0x00086ef8) wml_button_pane

0x2c70,	// (0x0007f059) wml_list_single_large_pane_ParamLimits

0x2c70,	// (0x0007f059) wml_list_single_large_pane

0x2c92,	// (0x0007f07b) wml_list_single_medium_pane_ParamLimits

0x2c92,	// (0x0007f07b) wml_list_single_medium_pane

0x2cb5,	// (0x0007f09e) wml_list_single_small_pane_ParamLimits

0x2cb5,	// (0x0007f09e) wml_list_single_small_pane

0xab23,	// (0x00086f0c) wml_selection_box_pane_ParamLimits

0xab23,	// (0x00086f0c) wml_selection_box_pane

0xab36,	// (0x00086f1f) wml_list_single_pane_t1

0xab45,	// (0x00086f2e) wml_list_single_medium_pane_t1

0xab54,	// (0x00086f3d) wml_list_single_large_pane_t1

0xab63,	// (0x00086f4c) input_focus_pane_cp02_ParamLimits

0xab63,	// (0x00086f4c) input_focus_pane_cp02

0xab76,	// (0x00086f5f) wml_selection_box_pane_g1

0xab7f,	// (0x00086f68) wml_selection_box_pane_t1_ParamLimits

0xab7f,	// (0x00086f68) wml_selection_box_pane_t1

0xa6e0,	// (0x00086ac9) bg_wml_button_pane_ParamLimits

0xa6e0,	// (0x00086ac9) bg_wml_button_pane

0xab97,	// (0x00086f80) wml_button_pane_g1

0xab9f,	// (0x00086f88) wml_button_pane_t1

0xab97,	// (0x00086f80) wml_button_bg_pane_g1

0xabaf,	// (0x00086f98) wml_button_bg_pane_g2

0xabb7,	// (0x00086fa0) wml_button_bg_pane_g3

0xabbf,	// (0x00086fa8) wml_button_bg_pane_g4

0xabd0,	// (0x00086fb9) wml_button_bg_pane_g5

0xabd8,	// (0x00086fc1) wml_button_bg_pane_g6

0xabe0,	// (0x00086fc9) wml_button_bg_pane_g7

0xabe8,	// (0x00086fd1) wml_button_bg_pane_g8

0xabf0,	// (0x00086fd9) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0008b5d5) wml_button_bg_pane_g

0x2cdd,	// (0x0007f0c6) bg_list_pane_cp02

0xabf8,	// (0x00086fe1) mce_header_pane_ParamLimits

0xabf8,	// (0x00086fe1) mce_header_pane

0xac0e,	// (0x00086ff7) mce_icon_pane

0xac0e,	// (0x00086ff7) mce_image_pane

0xac17,	// (0x00087000) mce_text_pane_ParamLimits

0xac17,	// (0x00087000) mce_text_pane

0x2ce7,	// (0x0007f0d0) scroll_pane_cp03

0xab07,	// (0x00086ef0) scroll_pane_cp04

0xac2a,	// (0x00087013) scroll_pane_cp05_ParamLimits

0xac2a,	// (0x00087013) scroll_pane_cp05

0x2cf1,	// (0x0007f0da) mce_header_field_pane_ParamLimits

0x2cf1,	// (0x0007f0da) mce_header_field_pane

0x2d13,	// (0x0007f0fc) mce_header_field_pane_2_ParamLimits

0x2d13,	// (0x0007f0fc) mce_header_field_pane_2

0x2d29,	// (0x0007f112) mce_header_field_pane_3

0x2d31,	// (0x0007f11a) list_single_mce_message_pane_ParamLimits

0x2d31,	// (0x0007f11a) list_single_mce_message_pane

0x2d50,	// (0x0007f139) list_single_mce_smart_pane_ParamLimits

0x2d50,	// (0x0007f139) list_single_mce_smart_pane

0xac36,	// (0x0008701f) input_focus_pane_cp03

0xac3f,	// (0x00087028) list_header_data_pane

0x2d7a,	// (0x0007f163) mce_header_field_pane_t1

0x2d8a,	// (0x0007f173) list_single_mce_header_pane_ParamLimits

0x2d8a,	// (0x0007f173) list_single_mce_header_pane

0xac47,	// (0x00087030) list_single_mce_header_pane_t1

0xac56,	// (0x0008703f) list_single_mce_message_pane_g1

0xac5e,	// (0x00087047) list_single_mce_message_pane_t1

0x2dce,	// (0x0007f1b7) bg_cale_heading_pane_cp01_ParamLimits

0x2dce,	// (0x0007f1b7) bg_cale_heading_pane_cp01

0xac6c,	// (0x00087055) bg_cale_pane_cp02_ParamLimits

0xac6c,	// (0x00087055) bg_cale_pane_cp02

0x2e20,	// (0x0007f209) cale_month_corner_pane

0x2e3f,	// (0x0007f228) cale_month_day_heading_pane_ParamLimits

0x2e3f,	// (0x0007f228) cale_month_day_heading_pane

0x2ea1,	// (0x0007f28a) cale_month_pane_g1_ParamLimits

0x2ea1,	// (0x0007f28a) cale_month_pane_g1

0x2ee8,	// (0x0007f2d1) cale_month_pane_g2_ParamLimits

0x2ee8,	// (0x0007f2d1) cale_month_pane_g2

0x2f20,	// (0x0007f309) cale_month_pane_g3_ParamLimits

0x2f20,	// (0x0007f309) cale_month_pane_g3

0x2f74,	// (0x0007f35d) cale_month_pane_g4_ParamLimits

0x2f74,	// (0x0007f35d) cale_month_pane_g4

0x2fc8,	// (0x0007f3b1) cale_month_pane_g5_ParamLimits

0x2fc8,	// (0x0007f3b1) cale_month_pane_g5

0x301c,	// (0x0007f405) cale_month_pane_g6_ParamLimits

0x301c,	// (0x0007f405) cale_month_pane_g6

0x3080,	// (0x0007f469) cale_month_pane_g7_ParamLimits

0x3080,	// (0x0007f469) cale_month_pane_g7

0x30e4,	// (0x0007f4cd) cale_month_pane_g8_ParamLimits

0x30e4,	// (0x0007f4cd) cale_month_pane_g8

0x3148,	// (0x0007f531) cale_month_pane_g9_ParamLimits

0x3148,	// (0x0007f531) cale_month_pane_g9

0x31a2,	// (0x0007f58b) cale_month_pane_g10_ParamLimits

0x31a2,	// (0x0007f58b) cale_month_pane_g10

0x31f4,	// (0x0007f5dd) cale_month_pane_g11_ParamLimits

0x31f4,	// (0x0007f5dd) cale_month_pane_g11

0x3242,	// (0x0007f62b) cale_month_pane_g12_ParamLimits

0x3242,	// (0x0007f62b) cale_month_pane_g12

0x3292,	// (0x0007f67b) cale_month_pane_g13_ParamLimits

0x3292,	// (0x0007f67b) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0008b5e8) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0008b5e8) cale_month_pane_g

0x32e2,	// (0x0007f6cb) cale_month_week_pane

0x3302,	// (0x0007f6eb) grid_cale_month_pane_ParamLimits

0x3302,	// (0x0007f6eb) grid_cale_month_pane

0x335b,	// (0x0007f744) cale_month_day_heading_pane_t1

0x33dd,	// (0x0007f7c6) cale_month_day_heading_pane_t2

0x3456,	// (0x0007f83f) cale_month_day_heading_pane_t3

0x34cf,	// (0x0007f8b8) cale_month_day_heading_pane_t4

0x3548,	// (0x0007f931) cale_month_day_heading_pane_t5

0x35c9,	// (0x0007f9b2) cale_month_day_heading_pane_t6

0x3652,	// (0x0007fa3b) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0008b603) cale_month_day_heading_pane_t

0xa902,	// (0x00086ceb) bg_cale_side_pane_cp01

0x36db,	// (0x0007fac4) cale_month_week_pane_t1

0x36f4,	// (0x0007fadd) cale_month_week_pane_t2

0x370d,	// (0x0007faf6) cale_month_week_pane_t3

0x3726,	// (0x0007fb0f) cale_month_week_pane_t4

0x373f,	// (0x0007fb28) cale_month_week_pane_t5

0x375c,	// (0x0007fb45) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0008b612) cale_month_week_pane_t

0x377f,	// (0x0007fb68) cell_cale_month_pane_ParamLimits

0x377f,	// (0x0007fb68) cell_cale_month_pane

0x38ad,	// (0x0007fc96) cell_cale_month_pane_g1

0x38b9,	// (0x0007fca2) cell_cale_month_pane_t1_ParamLimits

0x38b9,	// (0x0007fca2) cell_cale_month_pane_t1

0xa910,	// (0x00086cf9) grid_highlight_pane_cp08

0xa6f8,	// (0x00086ae1) main_smil_g1

0x38e5,	// (0x0007fcce) smil_status_pane

0xacab,	// (0x00087094) smil_text_pane

0xc4f5,	// (0x000888de) bg_popup_call3_rect_pane_g8

0xc4fd,	// (0x000888e6) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0008b8b0) bg_popup_call3_rect_pane_g

0xc6b4,	// (0x00088a9d) smil_status_volume_pane_g1

0xacb5,	// (0x0008709e) smil_status_pane_t1

0x4acf,	// (0x00080eb8) volume_smil_pane

0xaccc,	// (0x000870b5) list_smil_text_pane

0x38f8,	// (0x0007fce1) scroll_pane_cp011

0x3903,	// (0x0007fcec) smil_text_list_pane_t1_ParamLimits

0x3903,	// (0x0007fcec) smil_text_list_pane_t1

0x3957,	// (0x0007fd40) aid_volume_smil_ParamLimits

0x3957,	// (0x0007fd40) aid_volume_smil

0xa6f8,	// (0x00086ae1) smil_volume_pane_g1

0xa6f8,	// (0x00086ae1) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0008b624) smil_volume_pane_g

0x1fe2,	// (0x0007e3cb) listscroll_cale_day_pane

0xacd6,	// (0x000870bf) bg_cale_pane

0xacee,	// (0x000870d7) list_cale_pane

0xad11,	// (0x000870fa) scroll_pane_cp09

0xad22,	// (0x0008710b) cale_bg_pane_g1

0xad2a,	// (0x00087113) cale_bg_pane_g2

0xad32,	// (0x0008711b) cale_bg_pane_g3

0xad3a,	// (0x00087123) cale_bg_pane_g4

0xad42,	// (0x0008712b) cale_bg_pane_g5

0xad4a,	// (0x00087133) cale_bg_pane_g6

0xad52,	// (0x0008713b) cale_bg_pane_g7

0xad5a,	// (0x00087143) cale_bg_pane_g8

0xad62,	// (0x0008714b) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0008b629) cale_bg_pane_g

0xad6a,	// (0x00087153) list_cale_time_pane_ParamLimits

0xad6a,	// (0x00087153) list_cale_time_pane

0xad81,	// (0x0008716a) list_cale_time_pane_g1_ParamLimits

0xad81,	// (0x0008716a) list_cale_time_pane_g1

0xad8d,	// (0x00087176) list_cale_time_pane_g2_ParamLimits

0xad8d,	// (0x00087176) list_cale_time_pane_g2

0x3981,	// (0x0007fd6a) list_cale_time_pane_g3_ParamLimits

0x3981,	// (0x0007fd6a) list_cale_time_pane_g3

0x398f,	// (0x0007fd78) list_cale_time_pane_g4_ParamLimits

0x398f,	// (0x0007fd78) list_cale_time_pane_g4

0x399d,	// (0x0007fd86) list_cale_time_pane_g5_ParamLimits

0x399d,	// (0x0007fd86) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0008b63c) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0008b63c) list_cale_time_pane_g

0xada7,	// (0x00087190) list_cale_time_pane_t1_ParamLimits

0xada7,	// (0x00087190) list_cale_time_pane_t1

0xadcf,	// (0x000871b8) list_cale_time_pane_t2_ParamLimits

0xadcf,	// (0x000871b8) list_cale_time_pane_t2

0x3c6f,	// (0x00080058) aid_blid_cardinal_pane

0x3cb1,	// (0x0008009a) compass_pane_t4

0xadf7,	// (0x000871e0) list_cale_time_pane_t4_ParamLimits

0xadf7,	// (0x000871e0) list_cale_time_pane_t4

0x3cbf,	// (0x000800a8) compass_pane_t5

0x3ccf,	// (0x000800b8) compass_pane_t6

0x3cdd,	// (0x000800c6) compass_pane_t7

0xb229,	// (0x00087612) navi_pane_cc_t1

0xb376,	// (0x0008775f) aid_phob_thumbnail_center_pane

0x41a6,	// (0x0008058f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0008b649) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0008b649) list_cale_time_pane_t

0xa0c0,	// (0x000864a9) bg_popup_window_pane_cp02_ParamLimits

0xa0c0,	// (0x000864a9) bg_popup_window_pane_cp02

0xae1f,	// (0x00087208) heading_pane_cp01_ParamLimits

0xae1f,	// (0x00087208) heading_pane_cp01

0xae2b,	// (0x00087214) loc_req_pane_ParamLimits

0xae2b,	// (0x00087214) loc_req_pane

0xae3b,	// (0x00087224) loc_type_pane_ParamLimits

0xae3b,	// (0x00087224) loc_type_pane

0xae4d,	// (0x00087236) loc_type_pane_t1_ParamLimits

0xae4d,	// (0x00087236) loc_type_pane_t1

0xae5f,	// (0x00087248) loc_type_pane_t2_ParamLimits

0xae5f,	// (0x00087248) loc_type_pane_t2

0xae71,	// (0x0008725a) loc_type_pane_t3_ParamLimits

0xae71,	// (0x0008725a) loc_type_pane_t3

0x0002,

0xf267,	// (0x0008b650) loc_type_pane_t_ParamLimits

0xf267,	// (0x0008b650) loc_type_pane_t

0xae83,	// (0x0008726c) list_loc_req_pane

0xae8d,	// (0x00087276) scroll_pane_cp012

0x39ab,	// (0x0007fd94) list_single_loc_request_popup_menu_pane_ParamLimits

0x39ab,	// (0x0007fd94) list_single_loc_request_popup_menu_pane

0xae98,	// (0x00087281) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae98,	// (0x00087281) list_single_loc_request_popup_menu_pane_g1

0xaea4,	// (0x0008728d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaea4,	// (0x0008728d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0008b657) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0008b657) list_single_loc_request_popup_menu_pane_g

0xaeb0,	// (0x00087299) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb0,	// (0x00087299) list_single_loc_request_popup_menu_pane_t1

0x39bd,	// (0x0007fda6) bg_popup_window_pane_cp03_ParamLimits

0x39bd,	// (0x0007fda6) bg_popup_window_pane_cp03

0x39cb,	// (0x0007fdb4) heading_loc_req_pane_ParamLimits

0x39cb,	// (0x0007fdb4) heading_loc_req_pane

0x39d7,	// (0x0007fdc0) popup_dyc_status_message_window_g1_ParamLimits

0x39d7,	// (0x0007fdc0) popup_dyc_status_message_window_g1

0x39e3,	// (0x0007fdcc) popup_dyc_status_message_window_t1_ParamLimits

0x39e3,	// (0x0007fdcc) popup_dyc_status_message_window_t1

0x39f5,	// (0x0007fdde) popup_dyc_status_message_window_t2_ParamLimits

0x39f5,	// (0x0007fdde) popup_dyc_status_message_window_t2

0x3a07,	// (0x0007fdf0) popup_dyc_status_message_window_t3_ParamLimits

0x3a07,	// (0x0007fdf0) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0008b65c) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0008b65c) popup_dyc_status_message_window_t

0xa469,	// (0x00086852) bg_heading_pane_cp01

0xaec6,	// (0x000872af) heading_loc_req_pane_g1

0xaece,	// (0x000872b7) heading_loc_req_pane_g2

0xaed6,	// (0x000872bf) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0008b663) heading_loc_req_pane_g

0xaede,	// (0x000872c7) heading_loc_req_pane_t1

0xaefe,	// (0x000872e7) bg_popup_sub_pane_cp01_ParamLimits

0xaefe,	// (0x000872e7) bg_popup_sub_pane_cp01

0xaf0c,	// (0x000872f5) popup_cale_events_window_g1_ParamLimits

0xaf0c,	// (0x000872f5) popup_cale_events_window_g1

0xaf2c,	// (0x00087315) popup_cale_events_window_g2_ParamLimits

0xaf2c,	// (0x00087315) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0008b685) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0008b685) popup_cale_events_window_g

0xaf4c,	// (0x00087335) popup_cale_events_window_t1_ParamLimits

0xaf4c,	// (0x00087335) popup_cale_events_window_t1

0xaf5e,	// (0x00087347) popup_cale_events_window_t2_ParamLimits

0xaf5e,	// (0x00087347) popup_cale_events_window_t2

0xaf9c,	// (0x00087385) popup_cale_events_window_t3_ParamLimits

0xaf9c,	// (0x00087385) popup_cale_events_window_t3

0xafd6,	// (0x000873bf) popup_cale_events_window_t4_ParamLimits

0xafd6,	// (0x000873bf) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0008b68a) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0008b68a) popup_cale_events_window_t

0x3a31,	// (0x0007fe1a) call_type_pane

0xbb22,	// (0x00087f0b) popup_call_status_window_g1

0x3a3d,	// (0x0007fe26) popup_call_status_window_g2

0x3a49,	// (0x0007fe32) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0008b693) popup_call_status_window_g

0xb00c,	// (0x000873f5) call_type_pane_g1

0xb015,	// (0x000873fe) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0008b69a) call_type_pane_g

0xa469,	// (0x00086852) bg_popup_sub_pane_cp02

0xb01e,	// (0x00087407) listscroll_popup_wml_pane

0xb026,	// (0x0008740f) list_wml_pane

0xb030,	// (0x00087419) scroll_pane_cp013

0xb03b,	// (0x00087424) list_single_graphic_popup_wml_pane_ParamLimits

0xb03b,	// (0x00087424) list_single_graphic_popup_wml_pane

0xa6f8,	// (0x00086ae1) list_single_graphic_popup_wml_pane_g1

0xb04f,	// (0x00087438) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0008b69f) list_single_graphic_popup_wml_pane_g

0xb057,	// (0x00087440) list_single_graphic_popup_wml_pane_t1

0xb06d,	// (0x00087456) aid_call_pane

0xa6d8,	// (0x00086ac1) popup_clock_analogue_window_g1

0xa6d8,	// (0x00086ac1) popup_clock_analogue_window_g2

0x3a55,	// (0x0007fe3e) popup_clock_analogue_window_g3

0x3a55,	// (0x0007fe3e) popup_clock_analogue_window_g4

0xa6f8,	// (0x00086ae1) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0008b6a4) popup_clock_analogue_window_g

0x3a5d,	// (0x0007fe46) popup_clock_analogue_window_t1

0x3a6b,	// (0x0007fe54) clock_digital_number_pane_ParamLimits

0x3a6b,	// (0x0007fe54) clock_digital_number_pane

0x3a77,	// (0x0007fe60) clock_digital_number_pane_cp02_ParamLimits

0x3a77,	// (0x0007fe60) clock_digital_number_pane_cp02

0x3a83,	// (0x0007fe6c) clock_digital_number_pane_cp03_ParamLimits

0x3a83,	// (0x0007fe6c) clock_digital_number_pane_cp03

0x3a8f,	// (0x0007fe78) clock_digital_number_pane_cp04_ParamLimits

0x3a8f,	// (0x0007fe78) clock_digital_number_pane_cp04

0x3a9b,	// (0x0007fe84) clock_digital_separator_pane_ParamLimits

0x3a9b,	// (0x0007fe84) clock_digital_separator_pane

0x3aa7,	// (0x0007fe90) popup_clock_digital_window_t1

0xa6f8,	// (0x00086ae1) clock_digital_number_pane_g1

0xa6f8,	// (0x00086ae1) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0008b624) clock_digital_number_pane_g

0xa6f8,	// (0x00086ae1) clock_digital_separator_pane_g1

0xa6f8,	// (0x00086ae1) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0008b624) clock_digital_separator_pane_g

0xa469,	// (0x00086852) bg_popup_window_pane_cp04

0xb075,	// (0x0008745e) heading_pane_cp03

0xa95d,	// (0x00086d46) listscroll_popup_gms_pane

0xa469,	// (0x00086852) grid_large_graphic_popup_pane

0xb07e,	// (0x00087467) listscroll_popup_gms_pane_g1

0xb087,	// (0x00087470) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0008b6af) listscroll_popup_gms_pane_g

0xb090,	// (0x00087479) scroll_pane_cp014

0xa67e,	// (0x00086a67) cell_large_graphic_popup_pane_ParamLimits

0xa67e,	// (0x00086a67) cell_large_graphic_popup_pane

0xa74d,	// (0x00086b36) cell_large_graphic_popup_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) cell_large_graphic_popup_pane_g1

0xb099,	// (0x00087482) cell_large_graphic_popup_pane_g2_ParamLimits

0xb099,	// (0x00087482) cell_large_graphic_popup_pane_g2

0xb0a7,	// (0x00087490) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0a7,	// (0x00087490) cell_large_graphic_popup_pane_g3

0xb0b5,	// (0x0008749e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0b5,	// (0x0008749e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0008b6b4) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0008b6b4) cell_large_graphic_popup_pane_g

0xa469,	// (0x00086852) grid_highlight_pane_cp010

0xa6f8,	// (0x00086ae1) bg_popup_call_pane_g1

0xb0c6,	// (0x000874af) list_single_graphic_popup_conf_pane_ParamLimits

0xb0c6,	// (0x000874af) list_single_graphic_popup_conf_pane

0xb0d8,	// (0x000874c1) list_highlight_pane_cp01

0xb0e1,	// (0x000874ca) list_single_graphic_popup_conf_pane_g1

0xb0e9,	// (0x000874d2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0008b6bd) list_single_graphic_popup_conf_pane_g

0xb0f1,	// (0x000874da) list_single_graphic_popup_conf_pane_t1

0xb0ff,	// (0x000874e8) linegrid_cams_pane_g1

0x3ac4,	// (0x0007fead) linegrid_cams_pane_g2

0xa943,	// (0x00086d2c) linegrid_cams_pane_g3

0xb108,	// (0x000874f1) linegrid_cams_pane_g4

0x3acd,	// (0x0007feb6) linegrid_cams_pane_g5

0x3ad6,	// (0x0007febf) linegrid_cams_pane_g6

0xa94c,	// (0x00086d35) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0008b6c2) linegrid_cams_pane_g

0xb131,	// (0x0008751a) popup_clock_analogue_window

0xb131,	// (0x0008751a) popup_clock_digital_window

0xa469,	// (0x00086852) popup_phob_thumbnail_window

0xa6f8,	// (0x00086ae1) call_video_uplink_pane_g1

0xb13a,	// (0x00087523) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0008b6d1) call_video_uplink_pane_g

0xb142,	// (0x0008752b) video_uplink_pane

0xb14a,	// (0x00087533) mce_image_pane_g1

0x3ae1,	// (0x0007feca) mce_image_pane_g2

0x3aeb,	// (0x0007fed4) mce_image_pane_g3

0x3af5,	// (0x0007fede) mce_image_pane_g4

0x3afd,	// (0x0007fee6) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0008b6d6) mce_image_pane_g

0xb154,	// (0x0008753d) control_top_pane_stacon_cp01_ParamLimits

0xb154,	// (0x0008753d) control_top_pane_stacon_cp01

0xb168,	// (0x00087551) uni_indicator_pane_stacon_cp01_ParamLimits

0xb168,	// (0x00087551) uni_indicator_pane_stacon_cp01

0xb179,	// (0x00087562) bg_popup_sub_pane_cp03

0x3b05,	// (0x0007feee) chi_dic_find_pane

0x3b0d,	// (0x0007fef6) listscroll_chi_dic_pane

0x3b16,	// (0x0007feff) main_pane_chidic_g1

0x3b29,	// (0x0007ff12) chi_dic_find_pane_t1

0xb183,	// (0x0008756c) find_chidic_pane

0xb18c,	// (0x00087575) chi_dic_list_pane_ParamLimits

0xb18c,	// (0x00087575) chi_dic_list_pane

0xb19d,	// (0x00087586) scroll_pane_cp020

0x3b37,	// (0x0007ff20) find_chidic_pane_t1

0xa469,	// (0x00086852) input_focus_pane_cp06

0x3b46,	// (0x0007ff2f) list_chi_dic_pane_ParamLimits

0x3b46,	// (0x0007ff2f) list_chi_dic_pane

0x3b5b,	// (0x0007ff44) list_chi_dic_pane_t1_ParamLimits

0x3b5b,	// (0x0007ff44) list_chi_dic_pane_t1

0xa469,	// (0x00086852) list_highlight_pane_cp020

0xb1a5,	// (0x0008758e) bg_cale_heading_pane_g1

0x3b6e,	// (0x0007ff57) bg_cale_heading_pane_g2

0x3b76,	// (0x0007ff5f) bg_cale_heading_pane_g3

0x3b7e,	// (0x0007ff67) bg_cale_heading_pane_g4

0x3b88,	// (0x0007ff71) bg_cale_heading_pane_g5

0x3b92,	// (0x0007ff7b) bg_cale_heading_pane_g6

0x3b9a,	// (0x0007ff83) bg_cale_heading_pane_g7

0x3ba2,	// (0x0007ff8b) bg_cale_heading_pane_g8

0x3bac,	// (0x0007ff95) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0008b6e1) bg_cale_heading_pane_g

0xb1a5,	// (0x0008758e) bg_cale_side_pane_g1

0x3bb6,	// (0x0007ff9f) bg_cale_side_pane_g2

0x3bc0,	// (0x0007ffa9) bg_cale_side_pane_g3

0x3bca,	// (0x0007ffb3) bg_cale_side_pane_g4

0x3bd4,	// (0x0007ffbd) bg_cale_side_pane_g5

0x3bde,	// (0x0007ffc7) bg_cale_side_pane_g6

0x3be8,	// (0x0007ffd1) bg_cale_side_pane_g7

0x3bf2,	// (0x0007ffdb) bg_cale_side_pane_g8

0x3bfa,	// (0x0007ffe3) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0008b6f4) bg_cale_side_pane_g

0x3c02,	// (0x0007ffeb) popup_call_status_window_ParamLimits

0x3c02,	// (0x0007ffeb) popup_call_status_window

0xb1ad,	// (0x00087596) stacon_top_pane

0xb1b5,	// (0x0008759e) status_pane_ParamLimits

0xb1b5,	// (0x0008759e) status_pane

0xb1ca,	// (0x000875b3) status_small_pane

0xb1d2,	// (0x000875bb) control_pane

0xa469,	// (0x00086852) stacon_bottom_pane

0xb1da,	// (0x000875c3) list_single_mce_smart_pane_t1_ParamLimits

0xb1da,	// (0x000875c3) list_single_mce_smart_pane_t1

0xb1ed,	// (0x000875d6) list_single_mce_smart_pane_t2_ParamLimits

0xb1ed,	// (0x000875d6) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0008b707) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0008b707) list_single_mce_smart_pane_t

0x3c0e,	// (0x0007fff7) compass_pane

0x3c19,	// (0x00080002) main_location2_pane_t1

0x3c2f,	// (0x00080018) main_location2_pane_t2

0x3c45,	// (0x0008002e) main_location2_pane_t3

0x0003,

0xf323,	// (0x0008b70c) main_location2_pane_t

0xb20c,	// (0x000875f5) compass_pane_g1_ParamLimits

0xb20c,	// (0x000875f5) compass_pane_g1

0x3c93,	// (0x0008007c) compass_pane_t1

0x3ca2,	// (0x0008008b) compass_pane_t2

0x0005,

0xf32c,	// (0x0008b715) compass_pane_t

0x3ced,	// (0x000800d6) text_secondary_cp61

0xb220,	// (0x00087609) navi_pane_cams_g5

0xb243,	// (0x0008762c) navi_pane_im_t1

0xb251,	// (0x0008763a) navi_pane_mp_g1_ParamLimits

0xb251,	// (0x0008763a) navi_pane_mp_g1

0xb265,	// (0x0008764e) navi_pane_mp_g2_ParamLimits

0xb265,	// (0x0008764e) navi_pane_mp_g2

0xb271,	// (0x0008765a) navi_pane_mp_g3_ParamLimits

0xb271,	// (0x0008765a) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0008b729) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0008b729) navi_pane_mp_g

0xb27d,	// (0x00087666) navi_pane_mp_t1

0xb28b,	// (0x00087674) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0008b730) navi_pane_mp_t

0xb2c7,	// (0x000876b0) navi_pane_vt_g1

0xb27d,	// (0x00087666) navi_pane_vt_t1

0xb2cf,	// (0x000876b8) navi_slider_pane

0xa95d,	// (0x00086d46) zooming_pane

0xb2d7,	// (0x000876c0) navi_slider_pane_g1

0x3e22,	// (0x0008020b) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0008b737) navi_slider_pane_g

0xb2fb,	// (0x000876e4) aid_levels_zoom

0xb303,	// (0x000876ec) zooming_pane_g1

0xb30b,	// (0x000876f4) zooming_pane_g2

0xb30b,	// (0x000876f4) zooming_pane_g3

0x0002,

0xf35d,	// (0x0008b746) zooming_pane_g

0xb313,	// (0x000876fc) level_10_zoom

0xb31c,	// (0x00087705) level_11_zoom

0xb325,	// (0x0008770e) level_1_zoom

0xb32e,	// (0x00087717) level_2_zoom

0xb337,	// (0x00087720) level_3_zoom

0xb340,	// (0x00087729) level_4_zoom

0xb349,	// (0x00087732) level_5_zoom

0xb352,	// (0x0008773b) level_6_zoom

0xb35b,	// (0x00087744) level_7_zoom

0xb364,	// (0x0008774d) level_8_zoom

0xb36d,	// (0x00087756) level_9_zoom

0xb387,	// (0x00087770) popup_phob_thumbnail_window_g1

0xb38f,	// (0x00087778) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0008b74d) popup_phob_thumbnail_window_g

0x476a,	// (0x00080b53) level_1_location

0x4772,	// (0x00080b5b) level_2_location

0x477a,	// (0x00080b63) level_3_location

0x4784,	// (0x00080b6d) level_4_location

0xa95d,	// (0x00086d46) level_5_location

0x3e34,	// (0x0008021d) mce_icon_pane_g1

0x3e3c,	// (0x00080225) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0008b752) mce_icon_pane_g

0x3e44,	// (0x0008022d) main_mup_pane_g1_ParamLimits

0x3e44,	// (0x0008022d) main_mup_pane_g1

0xa769,	// (0x00086b52) main_mup_pane_g2_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g2

0xa769,	// (0x00086b52) main_mup_pane_g3_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g3

0xa769,	// (0x00086b52) main_mup_pane_g4_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g4

0xa769,	// (0x00086b52) main_mup_pane_g5_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g5

0xa769,	// (0x00086b52) main_mup_pane_g6_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g6

0xa769,	// (0x00086b52) main_mup_pane_g7_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g7

0xa769,	// (0x00086b52) main_mup_pane_g8_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g8

0xa769,	// (0x00086b52) main_mup_pane_g9_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g9

0xa769,	// (0x00086b52) main_mup_pane_g10_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g10

0xa769,	// (0x00086b52) main_mup_pane_g11_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g11

0xa75b,	// (0x00086b44) main_mup_pane_g12_ParamLimits

0xa75b,	// (0x00086b44) main_mup_pane_g12

0xa769,	// (0x00086b52) main_mup_pane_g13_ParamLimits

0xa769,	// (0x00086b52) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0008b757) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0008b757) main_mup_pane_g

0xa777,	// (0x00086b60) main_mup_pane_t1_ParamLimits

0xa777,	// (0x00086b60) main_mup_pane_t1

0xa777,	// (0x00086b60) main_mup_pane_t2_ParamLimits

0xa777,	// (0x00086b60) main_mup_pane_t2

0xa777,	// (0x00086b60) main_mup_pane_t3_ParamLimits

0xa777,	// (0x00086b60) main_mup_pane_t3

0xb11d,	// (0x00087506) main_mup_pane_t4_ParamLimits

0xb11d,	// (0x00087506) main_mup_pane_t4

0xb11d,	// (0x00087506) main_mup_pane_t5_ParamLimits

0xb11d,	// (0x00087506) main_mup_pane_t5

0xa999,	// (0x00086d82) main_mup_pane_t6_ParamLimits

0xa999,	// (0x00086d82) main_mup_pane_t6

0x0005,

0xf389,	// (0x0008b772) main_mup_pane_t_ParamLimits

0xf389,	// (0x0008b772) main_mup_pane_t

0xa670,	// (0x00086a59) mup_progress_pane_ParamLimits

0xa670,	// (0x00086a59) mup_progress_pane

0xc7e5,	// (0x00088bce) mup_visualizer_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup_visualizer_pane

0xc7e5,	// (0x00088bce) mup_volume_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup_volume_pane

0xa75b,	// (0x00086b44) mup_visualizer_pane_g1_ParamLimits

0xa75b,	// (0x00086b44) mup_visualizer_pane_g1

0xb397,	// (0x00087780) mup_visualizer_pane_g2_ParamLimits

0xb397,	// (0x00087780) mup_visualizer_pane_g2

0xa74d,	// (0x00086b36) mup_visualizer_pane_g3_ParamLimits

0xa74d,	// (0x00086b36) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0008b77f) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0008b77f) mup_visualizer_pane_g

0xa97f,	// (0x00086d68) mup_volume_pane_g1

0xa97f,	// (0x00086d68) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0008b786) mup_volume_pane_g

0xa97f,	// (0x00086d68) mup_progress_pane_g1

0xa97f,	// (0x00086d68) mup_progress_pane_g2

0xa97f,	// (0x00086d68) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0008b78b) mup_progress_pane_g

0xa469,	// (0x00086852) bg_popup_window_pane_cp05

0xb3a5,	// (0x0008778e) heading_pane_cp02_ParamLimits

0xb3a5,	// (0x0008778e) heading_pane_cp02

0xb3c1,	// (0x000877aa) list_popup_blid_pane

0xb3c9,	// (0x000877b2) list_blid_sat_info_pane_ParamLimits

0xb3c9,	// (0x000877b2) list_blid_sat_info_pane

0xb3dc,	// (0x000877c5) list_blid_sat_info_pane_g1

0xb3e4,	// (0x000877cd) list_blid_sat_info_pane_t1

0x3f53,	// (0x0008033c) mup_equalizer_pane_ParamLimits

0x3f53,	// (0x0008033c) mup_equalizer_pane

0x3f74,	// (0x0008035d) mup_equalizer_pane_cp1_ParamLimits

0x3f74,	// (0x0008035d) mup_equalizer_pane_cp1

0x3f95,	// (0x0008037e) mup_equalizer_pane_cp2_ParamLimits

0x3f95,	// (0x0008037e) mup_equalizer_pane_cp2

0x3fb6,	// (0x0008039f) mup_equalizer_pane_cp3_ParamLimits

0x3fb6,	// (0x0008039f) mup_equalizer_pane_cp3

0x3fdb,	// (0x000803c4) mup_equalizer_pane_cp4_ParamLimits

0x3fdb,	// (0x000803c4) mup_equalizer_pane_cp4

0x4000,	// (0x000803e9) mup_equalizer_pane_cp5

0x4018,	// (0x00080401) mup_equalizer_pane_cp6

0x4030,	// (0x00080419) mup_equalizer_pane_cp7

0xc581,	// (0x0008896a) bg_popup_call_poc_act_pane_g9

0xc589,	// (0x00088972) bg_popup_call_poc_act_pane_g10

0xc591,	// (0x0008897a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6e0,	// (0x00086ac9) mup_scale_pane

0xa6f8,	// (0x00086ae1) mup_scale_pane_g1

0xb3f2,	// (0x000877db) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0008b7a7) mup_scale_pane_g

0xb416,	// (0x000877ff) msg_data_pane

0xb41e,	// (0x00087807) scroll_pane_cp017

0x0c56,	// (0x0007d03f) bg_list_pane_cp04_ParamLimits

0x0c56,	// (0x0007d03f) bg_list_pane_cp04

0xb426,	// (0x0008780f) msg_data_pane_g1

0x405a,	// (0x00080443) msg_data_pane_g2

0x4064,	// (0x0008044d) msg_data_pane_g3

0x406e,	// (0x00080457) msg_data_pane_g4

0x4076,	// (0x0008045f) msg_data_pane_g5

0x407e,	// (0x00080467) msg_data_pane_g6

0x4086,	// (0x0008046f) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0008b7b6) msg_data_pane_g

0x0c7e,	// (0x0007d067) msg_text_pane_ParamLimits

0x0c7e,	// (0x0007d067) msg_text_pane

0x408e,	// (0x00080477) qrid_highlight_pane_cp011_ParamLimits

0x408e,	// (0x00080477) qrid_highlight_pane_cp011

0xa469,	// (0x00086852) msg_body_pane

0xa469,	// (0x00086852) msg_header_pane

0xb437,	// (0x00087820) input_focus_pane_cp07

0x0cb6,	// (0x0007d09f) msg_header_pane_t1_ParamLimits

0x0cb6,	// (0x0007d09f) msg_header_pane_t1

0x0ccc,	// (0x0007d0b5) msg_header_pane_t2_ParamLimits

0x0ccc,	// (0x0007d0b5) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0008b7ca) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0008b7ca) msg_header_pane_t

0xb44c,	// (0x00087835) msg_body_pane_g1

0x0ce3,	// (0x0007d0cc) msg_body_pane_t1_ParamLimits

0x0ce3,	// (0x0007d0cc) msg_body_pane_t1

0x0d14,	// (0x0007d0fd) msg_body_pane_t2_ParamLimits

0x0d14,	// (0x0007d0fd) msg_body_pane_t2

0x0d26,	// (0x0007d10f) msg_body_pane_t3_ParamLimits

0x0d26,	// (0x0007d10f) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0008b7cf) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0008b7cf) msg_body_pane_t

0x40f6,	// (0x000804df) main_viewer_pane_g1_ParamLimits

0x40f6,	// (0x000804df) main_viewer_pane_g1

0x4102,	// (0x000804eb) main_viewer_pane_g2_ParamLimits

0x4102,	// (0x000804eb) main_viewer_pane_g2

0x410e,	// (0x000804f7) main_viewer_pane_g3_ParamLimits

0x410e,	// (0x000804f7) main_viewer_pane_g3

0x411f,	// (0x00080508) main_viewer_pane_g4_ParamLimits

0x411f,	// (0x00080508) main_viewer_pane_g4

0x4130,	// (0x00080519) main_viewer_pane_g5_ParamLimits

0x4130,	// (0x00080519) main_viewer_pane_g5

0x4130,	// (0x00080519) main_viewer_pane_g7_ParamLimits

0x4130,	// (0x00080519) main_viewer_pane_g7

0x4142,	// (0x0008052b) main_viewer_pane_g8_ParamLimits

0x4142,	// (0x0008052b) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0008b7df) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0008b7df) main_viewer_pane_g

0xb454,	// (0x0008783d) viewer_content_pane_ParamLimits

0xb454,	// (0x0008783d) viewer_content_pane

0x417a,	// (0x00080563) main_postcard_pane_g1_ParamLimits

0x417a,	// (0x00080563) main_postcard_pane_g1

0x4188,	// (0x00080571) main_postcard_pane_g2_ParamLimits

0x4188,	// (0x00080571) main_postcard_pane_g2

0x4196,	// (0x0008057f) main_postcard_pane_g3_ParamLimits

0x4196,	// (0x0008057f) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0008b7f0) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0008b7f0) main_postcard_pane_g

0x41a6,	// (0x0008058f) main_postcard_pane_g4

0xc6c7,	// (0x00088ab0) smil_status_volume_pane_g2

0x41d2,	// (0x000805bb) postcard_pane_ParamLimits

0x41d2,	// (0x000805bb) postcard_pane

0xbb22,	// (0x00087f0b) postcard_pane_g1_ParamLimits

0xbb22,	// (0x00087f0b) postcard_pane_g1

0x420c,	// (0x000805f5) postcard_pane_g2_ParamLimits

0x420c,	// (0x000805f5) postcard_pane_g2

0x4218,	// (0x00080601) postcard_pane_g3_ParamLimits

0x4218,	// (0x00080601) postcard_pane_g3

0xb462,	// (0x0008784b) postcard_pane_g4_ParamLimits

0xb462,	// (0x0008784b) postcard_pane_g4

0x4224,	// (0x0008060d) postcard_pane_g5_ParamLimits

0x4224,	// (0x0008060d) postcard_pane_g5

0x4230,	// (0x00080619) postcard_pane_g6_ParamLimits

0x4230,	// (0x00080619) postcard_pane_g6

0xb470,	// (0x00087859) postcard_pane_g7_ParamLimits

0xb470,	// (0x00087859) postcard_pane_g7

0x0006,

0xf414,	// (0x0008b7fd) postcard_pane_g_ParamLimits

0xf414,	// (0x0008b7fd) postcard_pane_g

0x423e,	// (0x00080627) main_mp2_pane_g1_ParamLimits

0x423e,	// (0x00080627) main_mp2_pane_g1

0x424c,	// (0x00080635) main_mp2_pane_g2_ParamLimits

0x424c,	// (0x00080635) main_mp2_pane_g2

0x4258,	// (0x00080641) main_mp2_pane_g3_ParamLimits

0x4258,	// (0x00080641) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0008b80c) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0008b80c) main_mp2_pane_g

0x4264,	// (0x0008064d) main_mp2_pane_t1_ParamLimits

0x4264,	// (0x0008064d) main_mp2_pane_t1

0x427b,	// (0x00080664) main_mp2_pane_t2_ParamLimits

0x427b,	// (0x00080664) main_mp2_pane_t2

0x428f,	// (0x00080678) main_mp2_pane_t3_ParamLimits

0x428f,	// (0x00080678) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0008b813) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0008b813) main_mp2_pane_t

0xb47e,	// (0x00087867) pec_content_pane_ParamLimits

0xb47e,	// (0x00087867) pec_content_pane

0xab07,	// (0x00086ef0) scroll_pane_cp015

0xb490,	// (0x00087879) pec_attribute_pane_ParamLimits

0xb490,	// (0x00087879) pec_attribute_pane

0x42a1,	// (0x0008068a) pec_content_pane_g1_ParamLimits

0x42a1,	// (0x0008068a) pec_content_pane_g1

0xb4a0,	// (0x00087889) pec_content_pane_t1_ParamLimits

0xb4a0,	// (0x00087889) pec_content_pane_t1

0xb4b2,	// (0x0008789b) pec_content_pane_t2_ParamLimits

0xb4b2,	// (0x0008789b) pec_content_pane_t2

0x0001,

0xf431,	// (0x0008b81a) pec_content_pane_t_ParamLimits

0xf431,	// (0x0008b81a) pec_content_pane_t

0x42ad,	// (0x00080696) list_single_graphic_pane_cp01_ParamLimits

0x42ad,	// (0x00080696) list_single_graphic_pane_cp01

0xa6e0,	// (0x00086ac9) bg_popup_sub_pane_cp04

0xb4c4,	// (0x000878ad) popup_mup_playback_window_g1

0xb4d0,	// (0x000878b9) popup_mup_playback_window_t1

0xb4e5,	// (0x000878ce) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0008b81f) popup_mup_playback_window_t

0xb51c,	// (0x00087905) main_image_pane_g1_ParamLimits

0xb51c,	// (0x00087905) main_image_pane_g1

0xb55f,	// (0x00087948) scroll_pane_cp018_ParamLimits

0xb55f,	// (0x00087948) scroll_pane_cp018

0xb577,	// (0x00087960) scroll_pane_cp016_ParamLimits

0xb577,	// (0x00087960) scroll_pane_cp016

0x433b,	// (0x00080724) smil2_image_pane_ParamLimits

0x433b,	// (0x00080724) smil2_image_pane

0x4371,	// (0x0008075a) smil2_root_pane_ParamLimits

0x4371,	// (0x0008075a) smil2_root_pane

0x439d,	// (0x00080786) smil2_text_pane_ParamLimits

0x439d,	// (0x00080786) smil2_text_pane

0xa469,	// (0x00086852) bg_list_pane_cp06

0xb5b3,	// (0x0008799c) grid_radio_pane

0xa469,	// (0x00086852) bg_popup_window_pane_cp06

0xb5ed,	// (0x000879d6) main_fmradio_pane_t1

0xc599,	// (0x00088982) heading_pane_cp04

0xb5fb,	// (0x000879e4) main_fmradio_pane_t2

0xc5a1,	// (0x0008898a) popup_cale_lunar_info_window_g1

0xb609,	// (0x000879f2) main_fmradio_pane_t3

0xc5a9,	// (0x00088992) popup_cale_lunar_info_window_g2

0xb619,	// (0x00087a02) main_fmradio_pane_t4

0x0001,

0xb627,	// (0x00087a10) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x0008b8ff) popup_cale_lunar_info_window_g

0xf44b,	// (0x0008b834) main_fmradio_pane_t

0xb635,	// (0x00087a1e) wait_bar_pane_cp03

0xb63d,	// (0x00087a26) cell_fmradio_pane_ParamLimits

0xb63d,	// (0x00087a26) cell_fmradio_pane

0xb470,	// (0x00087859) cell_fmradio_pane_g1_ParamLimits

0xb470,	// (0x00087859) cell_fmradio_pane_g1

0xa469,	// (0x00086852) grid_highlight_pane_cp011

0xb652,	// (0x00087a3b) poc_content_pane_ParamLimits

0xb652,	// (0x00087a3b) poc_content_pane

0xb664,	// (0x00087a4d) scroll_pane_cp019

0x43dd,	// (0x000807c6) popup_call_poc_act_window_ParamLimits

0x43dd,	// (0x000807c6) popup_call_poc_act_window

0x43ea,	// (0x000807d3) popup_call_poc_inact_window_ParamLimits

0x43ea,	// (0x000807d3) popup_call_poc_inact_window

0xf4ed,	// (0x0008b8d6) bg_popup_call_poc_act_pane_g

0xc505,	// (0x000888ee) bg_popup_call_poc_inact_pane_g1

0xc50d,	// (0x000888f6) bg_popup_call_poc_inact_pane_g2

0xb66c,	// (0x00087a55) popup_call_poc_act_window_g2

0xc515,	// (0x000888fe) bg_popup_call_poc_inact_pane_g3

0xc51d,	// (0x00088906) bg_popup_call_poc_inact_pane_g4

0xc525,	// (0x0008890e) bg_popup_call_poc_inact_pane_g5

0xb674,	// (0x00087a5d) popup_call_poc_act_window_t1_ParamLimits

0xb674,	// (0x00087a5d) popup_call_poc_act_window_t1

0xb69c,	// (0x00087a85) popup_call_poc_act_window_t2_ParamLimits

0xb69c,	// (0x00087a85) popup_call_poc_act_window_t2

0xb6c4,	// (0x00087aad) popup_call_poc_act_window_t3_ParamLimits

0xb6c4,	// (0x00087aad) popup_call_poc_act_window_t3

0xb6ec,	// (0x00087ad5) popup_call_poc_act_window_t4_ParamLimits

0xb6ec,	// (0x00087ad5) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0008b83f) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0008b83f) popup_call_poc_act_window_t

0xc52d,	// (0x00088916) bg_popup_call_poc_inact_pane_g6

0xc535,	// (0x0008891e) bg_popup_call_poc_inact_pane_g7

0xc53d,	// (0x00088926) bg_popup_call_poc_inact_pane_g8

0xb6fe,	// (0x00087ae7) popup_call_poc_inact_window_g2

0xc545,	// (0x0008892e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x0008b8c3) bg_popup_call_poc_inact_pane_g

0xb706,	// (0x00087aef) popup_call_poc_inact_window_t1_ParamLimits

0xb706,	// (0x00087aef) popup_call_poc_inact_window_t1

0xb71b,	// (0x00087b04) popup_call_poc_inact_window_t2_ParamLimits

0xb71b,	// (0x00087b04) popup_call_poc_inact_window_t2

0xb730,	// (0x00087b19) popup_call_poc_inact_window_t3_ParamLimits

0xb730,	// (0x00087b19) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0008b848) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0008b848) popup_call_poc_inact_window_t

0xc63f,	// (0x00088a28) context_pane_ParamLimits

0x4a87,	// (0x00080e70) signal_pane_ParamLimits

0xa95d,	// (0x00086d46) main_call2_pane

0x49f3,	// (0x00080ddc) popup_phob_thumbnail2_window_ParamLimits

0x49f3,	// (0x00080ddc) popup_phob_thumbnail2_window

0x40a4,	// (0x0008048d) aid_hotspot_pointer_arrow_pane

0x40ac,	// (0x00080495) aid_hotspot_pointer_hand_pane

0x4732,	// (0x00080b1b) phob_pre_status_pane_g5

0xa67e,	// (0x00086a67) cams_zoom_pane_ParamLimits

0xa67e,	// (0x00086a67) image_vga_pane_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g1_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g3_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g5_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g6_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0008b56e) main_camera_pane_g_ParamLimits

0xb11d,	// (0x00087506) main_camera_pane_t1_ParamLimits

0xb11d,	// (0x00087506) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0008b57f) main_camera_pane_t_ParamLimits

0xa6e0,	// (0x00086ac9) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6e0,	// (0x00086ac9) bg_popup_preview_window_pane_cp01

0xb745,	// (0x00087b2e) popup_phob_thumbnail2_window_g1_ParamLimits

0xb745,	// (0x00087b2e) popup_phob_thumbnail2_window_g1

0xa469,	// (0x00086852) call2_cli_visual_pane

0x4406,	// (0x000807ef) popup_call2_audio_conf_window_ParamLimits

0x4406,	// (0x000807ef) popup_call2_audio_conf_window

0x441f,	// (0x00080808) popup_call2_audio_first_window_ParamLimits

0x441f,	// (0x00080808) popup_call2_audio_first_window

0x44bd,	// (0x000808a6) popup_call2_audio_in_window_ParamLimits

0x44bd,	// (0x000808a6) popup_call2_audio_in_window

0x4501,	// (0x000808ea) popup_call2_audio_out_window_ParamLimits

0x4501,	// (0x000808ea) popup_call2_audio_out_window

0x456b,	// (0x00080954) popup_call2_audio_second_window_ParamLimits

0x456b,	// (0x00080954) popup_call2_audio_second_window

0x45c9,	// (0x000809b2) popup_call2_audio_wait_window_ParamLimits

0x45c9,	// (0x000809b2) popup_call2_audio_wait_window

0xa469,	// (0x00086852) bg_popup_call2_act_pane_cp03

0xa6c2,	// (0x00086aab) list_conf_pane_cp

0xb751,	// (0x00087b3a) popup_call2_audio_conf_window_t1

0xb75f,	// (0x00087b48) list_single_graphic_popup_conf2_pane_ParamLimits

0xb75f,	// (0x00087b48) list_single_graphic_popup_conf2_pane

0xb0d8,	// (0x000874c1) list_highlight_pane_cp04

0xb772,	// (0x00087b5b) list_single_graphic_popup_conf2_pane_g1

0xb0e9,	// (0x000874d2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0008b84f) list_single_graphic_popup_conf2_pane_g

0xb77c,	// (0x00087b65) list_single_graphic_popup_conf2_pane_t1

0xb78a,	// (0x00087b73) bg_popup_call2_act_pane_cp01_ParamLimits

0xb78a,	// (0x00087b73) bg_popup_call2_act_pane_cp01

0xb814,	// (0x00087bfd) call_type_pane_cp05_ParamLimits

0xb814,	// (0x00087bfd) call_type_pane_cp05

0xb868,	// (0x00087c51) popup_call2_audio_second_window_g1_ParamLimits

0xb868,	// (0x00087c51) popup_call2_audio_second_window_g1

0xb8bc,	// (0x00087ca5) popup_call2_audio_second_window_g2_ParamLimits

0xb8bc,	// (0x00087ca5) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0008b854) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0008b854) popup_call2_audio_second_window_g

0xb921,	// (0x00087d0a) popup_call2_audio_second_window_t1_ParamLimits

0xb921,	// (0x00087d0a) popup_call2_audio_second_window_t1

0xb9dc,	// (0x00087dc5) popup_call2_audio_second_window_t2_ParamLimits

0xb9dc,	// (0x00087dc5) popup_call2_audio_second_window_t2

0xba2f,	// (0x00087e18) popup_call2_audio_second_window_t3_ParamLimits

0xba2f,	// (0x00087e18) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0008b85b) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0008b85b) popup_call2_audio_second_window_t

0xa469,	// (0x00086852) bg_popup_call2_in_pane_cp02

0xa473,	// (0x0008685c) call_type_pane_cp04

0x4608,	// (0x000809f1) popup_call2_audio_wait_window_g1

0x4610,	// (0x000809f9) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0008b864) popup_call2_audio_wait_window_g

0xa48b,	// (0x00086874) popup_call2_audio_wait_window_t3

0xbb30,	// (0x00087f19) bg_popup_call2_act_pane_ParamLimits

0xbb30,	// (0x00087f19) bg_popup_call2_act_pane

0xbbf0,	// (0x00087fd9) call_type_pane_cp03_ParamLimits

0xbbf0,	// (0x00087fd9) call_type_pane_cp03

0xbc54,	// (0x0008803d) popup_call2_audio_first_window_g1_ParamLimits

0xbc54,	// (0x0008803d) popup_call2_audio_first_window_g1

0xbcc4,	// (0x000880ad) popup_call2_audio_first_window_g2_ParamLimits

0xbcc4,	// (0x000880ad) popup_call2_audio_first_window_g2

0xbb22,	// (0x00087f0b) popup_call2_audio_first_window_g3_ParamLimits

0xbb22,	// (0x00087f0b) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0008b869) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0008b869) popup_call2_audio_first_window_g

0xbda2,	// (0x0008818b) popup_call2_audio_first_window_t1_ParamLimits

0xbda2,	// (0x0008818b) popup_call2_audio_first_window_t1

0xbea5,	// (0x0008828e) popup_call2_audio_first_window_t4_ParamLimits

0xbea5,	// (0x0008828e) popup_call2_audio_first_window_t4

0xbf88,	// (0x00088371) popup_call2_audio_first_window_t5_ParamLimits

0xbf88,	// (0x00088371) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0008b874) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0008b874) popup_call2_audio_first_window_t

0xa6d8,	// (0x00086ac1) bg_popup_call2_act_pane_g1

0xc5b3,	// (0x0008899c) popup_cale_lunar_info_window_t1

0xc5c1,	// (0x000889aa) popup_cale_lunar_info_window_t2

0xc5cf,	// (0x000889b8) popup_cale_lunar_info_window_t3

0xa469,	// (0x00086852) bg_popup_call2_bubble_pane

0xc089,	// (0x00088472) bg_popup_call2_in_pane_cp01_ParamLimits

0xc089,	// (0x00088472) bg_popup_call2_in_pane_cp01

0xa145,	// (0x0008652e) call_type_pane_cp02

0x4618,	// (0x00080a01) popup_call2_audio_out_window_g1_ParamLimits

0x4618,	// (0x00080a01) popup_call2_audio_out_window_g1

0xc0d1,	// (0x000884ba) popup_call2_audio_out_window_g2_ParamLimits

0xc0d1,	// (0x000884ba) popup_call2_audio_out_window_g2

0x4644,	// (0x00080a2d) popup_call2_audio_out_window_g3_ParamLimits

0x4644,	// (0x00080a2d) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0008b87d) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0008b87d) popup_call2_audio_out_window_g

0xc108,	// (0x000884f1) popup_call2_audio_out_window_t1_ParamLimits

0xc108,	// (0x000884f1) popup_call2_audio_out_window_t1

0xc167,	// (0x00088550) popup_call2_audio_out_window_t2_ParamLimits

0xc167,	// (0x00088550) popup_call2_audio_out_window_t2

0xc1bb,	// (0x000885a4) popup_call2_audio_out_window_t3_ParamLimits

0xc1bb,	// (0x000885a4) popup_call2_audio_out_window_t3

0xc1d1,	// (0x000885ba) popup_call2_audio_out_window_t4_ParamLimits

0xc1d1,	// (0x000885ba) popup_call2_audio_out_window_t4

0xc1e7,	// (0x000885d0) popup_call2_audio_out_window_t5_ParamLimits

0xc1e7,	// (0x000885d0) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0008b886) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0008b886) popup_call2_audio_out_window_t

0xc24b,	// (0x00088634) bg_popup_call2_in_pane_ParamLimits

0xc24b,	// (0x00088634) bg_popup_call2_in_pane

0xc2a7,	// (0x00088690) popup_call2_audio_in_window_g1_ParamLimits

0xc2a7,	// (0x00088690) popup_call2_audio_in_window_g1

0xc2df,	// (0x000886c8) popup_call2_audio_in_window_g2_ParamLimits

0xc2df,	// (0x000886c8) popup_call2_audio_in_window_g2

0xc317,	// (0x00088700) popup_call2_audio_in_window_g3_ParamLimits

0xc317,	// (0x00088700) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0008b893) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0008b893) popup_call2_audio_in_window_g

0xc36f,	// (0x00088758) popup_call2_audio_in_window_t1_ParamLimits

0xc36f,	// (0x00088758) popup_call2_audio_in_window_t1

0xc3ef,	// (0x000887d8) popup_call2_audio_in_window_t2_ParamLimits

0xc3ef,	// (0x000887d8) popup_call2_audio_in_window_t2

0xc46f,	// (0x00088858) popup_call2_audio_in_window_t3_ParamLimits

0xc46f,	// (0x00088858) popup_call2_audio_in_window_t3

0xc489,	// (0x00088872) popup_call2_audio_in_window_t4_ParamLimits

0xc489,	// (0x00088872) popup_call2_audio_in_window_t4

0xc49b,	// (0x00088884) popup_call2_audio_in_window_t5_ParamLimits

0xc49b,	// (0x00088884) popup_call2_audio_in_window_t5

0xc4b0,	// (0x00088899) popup_call2_audio_in_window_t6_ParamLimits

0xc4b0,	// (0x00088899) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0008b89c) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0008b89c) popup_call2_audio_in_window_t

0xa6d8,	// (0x00086ac1) bg_popup_call2_in_pane_g1

0xc5dd,	// (0x000889c6) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0008b904) popup_cale_lunar_info_window_t

0xa6e0,	// (0x00086ac9) bg_popup_call2_rect_pane_ParamLimits

0xa6e0,	// (0x00086ac9) bg_popup_call2_rect_pane

0xa469,	// (0x00086852) call2_cli_visual_graphic_pane

0xa469,	// (0x00086852) call2_cli_visual_text_pane

0x4ac2,	// (0x00080eab) smil_status_volume_pane_g3

0x0002,

0xa6f8,	// (0x00086ae1) call2_cli_visual_graphic_pane_g1

0xa6f8,	// (0x00086ae1) call2_cli_visual_graphic_pane_g2

0xa6f8,	// (0x00086ae1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0008b8a9) call2_cli_visual_graphic_pane_g

0xc4c5,	// (0x000888ae) bg_popup_call2_rect_pane_g1

0xa896,	// (0x00086c7f) bg_popup_call2_rect_pane_g2

0xc4cd,	// (0x000888b6) bg_popup_call2_rect_pane_g3

0xc4d5,	// (0x000888be) bg_popup_call2_rect_pane_g4

0xc4dd,	// (0x000888c6) bg_popup_call2_rect_pane_g5

0xc4e5,	// (0x000888ce) bg_popup_call2_rect_pane_g6

0xc4ed,	// (0x000888d6) bg_popup_call2_rect_pane_g7

0xc4f5,	// (0x000888de) bg_popup_call2_rect_pane_g8

0xc4fd,	// (0x000888e6) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0008b8b0) bg_popup_call2_rect_pane_g

0xc505,	// (0x000888ee) bg_popup_call2_bubble_pane_g1

0xc50d,	// (0x000888f6) bg_popup_call2_bubble_pane_g2

0xc515,	// (0x000888fe) bg_popup_call2_bubble_pane_g3

0xc51d,	// (0x00088906) bg_popup_call2_bubble_pane_g4

0xc525,	// (0x0008890e) bg_popup_call2_bubble_pane_g5

0xc52d,	// (0x00088916) bg_popup_call2_bubble_pane_g6

0xc535,	// (0x0008891e) bg_popup_call2_bubble_pane_g7

0xc53d,	// (0x00088926) bg_popup_call2_bubble_pane_g8

0xc545,	// (0x0008892e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0008b8c3) bg_popup_call2_bubble_pane_g

0x1ff4,	// (0x0007e3dd) aid_cale_week_size_cell_pane

0xa6e0,	// (0x00086ac9) aid_cams_cif_uncrop_pane_ParamLimits

0xa6e0,	// (0x00086ac9) aid_cams_cif_uncrop_pane

0x27e3,	// (0x0007ebcc) aid_cams_size_cell_ParamLimits

0x27e3,	// (0x0007ebcc) aid_cams_size_cell

0x27ef,	// (0x0007ebd8) grid_cams_pane_ParamLimits

0x27fd,	// (0x0007ebe6) linegrid_cams_pane_ParamLimits

0x28ce,	// (0x0007ecb7) call_video_pane_t1

0x28eb,	// (0x0007ecd4) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0008b5cb) call_video_pane_t

0x2da8,	// (0x0007f191) aid_cale_month_size_cell_pane_ParamLimits

0x2da8,	// (0x0007f191) aid_cale_month_size_cell_pane

0xf55f,	// (0x0008b948) smil_status_volume_pane_g

0x4acf,	// (0x00080eb8) volume_smil_pane_ParamLimits

0x1919,	// (0x0007dd02) aid_popup2_width_pane

0x1f00,	// (0x0007e2e9) cell_qdial_pane_g4_ParamLimits

0x1f00,	// (0x0007e2e9) cell_qdial_pane_g4

0x3c6f,	// (0x00080058) aid_blid_cardinal_pane_ParamLimits

0x3c7f,	// (0x00080068) aid_blid_destination_pane_ParamLimits

0x3c7f,	// (0x00080068) aid_blid_destination_pane

0xa6e0,	// (0x00086ac9) bg_popup_call_poc_act_pane_ParamLimits

0xa6e0,	// (0x00086ac9) bg_popup_call_poc_act_pane

0xa6e0,	// (0x00086ac9) bg_popup_call_poc_inact_pane_ParamLimits

0xa6e0,	// (0x00086ac9) bg_popup_call_poc_inact_pane

0xc54d,	// (0x00088936) bg_popup_call_poc_act_pane_g1

0xc555,	// (0x0008893e) bg_popup_call_poc_act_pane_g2

0xc55d,	// (0x00088946) bg_popup_call_poc_act_pane_g3

0xc51d,	// (0x00088906) bg_popup_call_poc_act_pane_g4

0xc525,	// (0x0008890e) bg_popup_call_poc_act_pane_g5

0xc565,	// (0x0008894e) bg_popup_call_poc_act_pane_g6

0xc535,	// (0x0008891e) bg_popup_call_poc_act_pane_g7

0xc56d,	// (0x00088956) bg_popup_call_poc_act_pane_g8

0xa469,	// (0x00086852) main_usb_pane

0x4910,	// (0x00080cf9) popup_cale_lunar_info_window

0x2c03,	// (0x0007efec) im_reading_pane_t1_ParamLimits

0xaa50,	// (0x00086e39) list_im_pane_ParamLimits

0xaa61,	// (0x00086e4a) scroll_pane_cp07_ParamLimits

0xa469,	// (0x00086852) grid_highlight_pane_cp012

0xa6e0,	// (0x00086ac9) mup_scale_pane_ParamLimits

0xbb22,	// (0x00087f0b) main_usb_pane_g1_ParamLimits

0xbb22,	// (0x00087f0b) main_usb_pane_g1

0x469a,	// (0x00080a83) main_usb_pane_g2_ParamLimits

0x469a,	// (0x00080a83) main_usb_pane_g2

0x0001,

0xf504,	// (0x0008b8ed) main_usb_pane_g_ParamLimits

0xf504,	// (0x0008b8ed) main_usb_pane_g

0x46a6,	// (0x00080a8f) main_usb_pane_t1_ParamLimits

0x46a6,	// (0x00080a8f) main_usb_pane_t1

0x46b8,	// (0x00080aa1) main_usb_pane_t2_ParamLimits

0x46b8,	// (0x00080aa1) main_usb_pane_t2

0x46ca,	// (0x00080ab3) main_usb_pane_t3_ParamLimits

0x46ca,	// (0x00080ab3) main_usb_pane_t3

0x46dc,	// (0x00080ac5) main_usb_pane_t4_ParamLimits

0x46dc,	// (0x00080ac5) main_usb_pane_t4

0x46ee,	// (0x00080ad7) main_usb_pane_t5_ParamLimits

0x46ee,	// (0x00080ad7) main_usb_pane_t5

0x4700,	// (0x00080ae9) main_usb_pane_t6_ParamLimits

0x4700,	// (0x00080ae9) main_usb_pane_t6

0x0005,

0xf509,	// (0x0008b8f2) main_usb_pane_t_ParamLimits

0x3c0e,	// (0x0007fff7) aid_text_placing

0x3c19,	// (0x00080002) main_location2_pane_t1_ParamLimits

0x3c2f,	// (0x00080018) main_location2_pane_t2_ParamLimits

0x3c45,	// (0x0008002e) main_location2_pane_t3_ParamLimits

0x3c5b,	// (0x00080044) main_location2_pane_t4_ParamLimits

0x3c5b,	// (0x00080044) main_location2_pane_t4

0xf323,	// (0x0008b70c) main_location2_pane_t_ParamLimits

0xa70e,	// (0x00086af7) find_pinb_pane_g2_ParamLimits

0xa70e,	// (0x00086af7) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0008b483) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0008b483) find_pinb_pane_g

0xa71a,	// (0x00086b03) find_pinb_pane_t1_ParamLimits

0xa72c,	// (0x00086b15) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0008b488) find_pinb_pane_t_ParamLimits

0xa469,	// (0x00086852) main_call3_pane

0x335b,	// (0x0007f744) cale_month_day_heading_pane_t1_ParamLimits

0x33dd,	// (0x0007f7c6) cale_month_day_heading_pane_t2_ParamLimits

0x3456,	// (0x0007f83f) cale_month_day_heading_pane_t3_ParamLimits

0x34cf,	// (0x0007f8b8) cale_month_day_heading_pane_t4_ParamLimits

0x3548,	// (0x0007f931) cale_month_day_heading_pane_t5_ParamLimits

0x35c9,	// (0x0007f9b2) cale_month_day_heading_pane_t6_ParamLimits

0x3652,	// (0x0007fa3b) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0008b603) cale_month_day_heading_pane_t_ParamLimits

0xacc3,	// (0x000870ac) smil_status_volume_pane

0x41f0,	// (0x000805d9) postcard_address_pane_ParamLimits

0x41f0,	// (0x000805d9) postcard_address_pane

0x41fe,	// (0x000805e7) postcard_message_pane_ParamLimits

0x41fe,	// (0x000805e7) postcard_message_pane

0x4670,	// (0x00080a59) call2_cli_visual_pane_t1_ParamLimits

0x4670,	// (0x00080a59) call2_cli_visual_pane_t1

0xc6f2,	// (0x00088adb) postcard_message_pane_t1_ParamLimits

0xc6f2,	// (0x00088adb) postcard_message_pane_t1

0xc6da,	// (0x00088ac3) postcard_address_pane_t1_ParamLimits

0xc6da,	// (0x00088ac3) postcard_address_pane_t1

0x4c06,	// (0x00080fef) popup_call3_audio_in_window_ParamLimits

0x4c06,	// (0x00080fef) popup_call3_audio_in_window

0x4ae4,	// (0x00080ecd) bg_popup_call3_in_pane_ParamLimits

0x4ae4,	// (0x00080ecd) bg_popup_call3_in_pane

0x4b4c,	// (0x00080f35) popup_call3_audio_in_window_g1_ParamLimits

0x4b4c,	// (0x00080f35) popup_call3_audio_in_window_g1

0x4b64,	// (0x00080f4d) popup_call3_audio_in_window_g2_ParamLimits

0x4b64,	// (0x00080f4d) popup_call3_audio_in_window_g2

0x4b7c,	// (0x00080f65) popup_call3_audio_in_window_g3_ParamLimits

0x4b7c,	// (0x00080f65) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x0008b94f) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x0008b94f) popup_call3_audio_in_window_g

0x4ba4,	// (0x00080f8d) popup_call3_audio_in_window_t1_ParamLimits

0x4ba4,	// (0x00080f8d) popup_call3_audio_in_window_t1

0x4bcc,	// (0x00080fb5) popup_call3_audio_in_window_t2_ParamLimits

0x4bcc,	// (0x00080fb5) popup_call3_audio_in_window_t2

0x4bf4,	// (0x00080fdd) popup_call3_audio_in_window_t3_ParamLimits

0x4bf4,	// (0x00080fdd) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0008b958) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0008b958) popup_call3_audio_in_window_t

0xa95d,	// (0x00086d46) bg_popup_call3_rect_pane

0xc4c5,	// (0x000888ae) bg_popup_call3_rect_pane_g1

0xa896,	// (0x00086c7f) bg_popup_call3_rect_pane_g2

0xc4cd,	// (0x000888b6) bg_popup_call3_rect_pane_g3

0xc4d5,	// (0x000888be) bg_popup_call3_rect_pane_g4

0xc4dd,	// (0x000888c6) bg_popup_call3_rect_pane_g5

0xc4e5,	// (0x000888ce) bg_popup_call3_rect_pane_g6

0xc4ed,	// (0x000888d6) bg_popup_call3_rect_pane_g7

0xa017,	// (0x00086400) mup_visualizer_osc_pane

0xa017,	// (0x00086400) mup_visualizer_spec_pane

0x4b04,	// (0x00080eed) call3_video_qcif_pane_ParamLimits

0x4b04,	// (0x00080eed) call3_video_qcif_pane

0x4b16,	// (0x00080eff) call3_video_qcif_uncrop_pane_ParamLimits

0x4b16,	// (0x00080eff) call3_video_qcif_uncrop_pane

0x4b26,	// (0x00080f0f) call3_video_subqcif_pane_ParamLimits

0x4b26,	// (0x00080f0f) call3_video_subqcif_pane

0x4b3a,	// (0x00080f23) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b3a,	// (0x00080f23) call3_video_subqcif_uncrop_pane

0x4b94,	// (0x00080f7d) popup_call3_audio_in_window_g4_ParamLimits

0x4b94,	// (0x00080f7d) popup_call3_audio_in_window_g4

0xa017,	// (0x00086400) mup_spec_half_pane

0xa017,	// (0x00086400) mup_spec_half_pane_cp

0xa017,	// (0x00086400) mup_osc_middle_pane

0xa97f,	// (0x00086d68) mup_visualizer_osc_pane_g1

0xc68d,	// (0x00088a76) mup_spec_bar_pane_ParamLimits

0xc68d,	// (0x00088a76) mup_spec_bar_pane

0xa97f,	// (0x00086d68) mup_spec_bar_pane_g1

0xa97f,	// (0x00086d68) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0008b786) mup_spec_bar_pane_g

0x1ff4,	// (0x0007e3dd) aid_cale_week_size_cell_pane_ParamLimits

0x200e,	// (0x0007e3f7) bg_cale_heading_pane_ParamLimits

0x2037,	// (0x0007e420) bg_cale_pane_cp01_ParamLimits

0x2059,	// (0x0007e442) cale_week_corner_pane_ParamLimits

0x2078,	// (0x0007e461) cale_week_day_heading_pane_ParamLimits

0x20a6,	// (0x0007e48f) cale_week_scroll_pane_g1_ParamLimits

0x20ca,	// (0x0007e4b3) cale_week_scroll_pane_g2_ParamLimits

0x20e2,	// (0x0007e4cb) cale_week_scroll_pane_g3_ParamLimits

0x20fa,	// (0x0007e4e3) cale_week_scroll_pane_g4_ParamLimits

0x2112,	// (0x0007e4fb) cale_week_scroll_pane_g5_ParamLimits

0x212a,	// (0x0007e513) cale_week_scroll_pane_g6_ParamLimits

0x214a,	// (0x0007e533) cale_week_scroll_pane_g7_ParamLimits

0x216a,	// (0x0007e553) cale_week_scroll_pane_g8_ParamLimits

0x218a,	// (0x0007e573) cale_week_scroll_pane_g9_ParamLimits

0x21a7,	// (0x0007e590) cale_week_scroll_pane_g10_ParamLimits

0x21c4,	// (0x0007e5ad) cale_week_scroll_pane_g11_ParamLimits

0x21e3,	// (0x0007e5cc) cale_week_scroll_pane_g12_ParamLimits

0x2208,	// (0x0007e5f1) cale_week_scroll_pane_g13_ParamLimits

0x2231,	// (0x0007e61a) cale_week_scroll_pane_g14_ParamLimits

0x225a,	// (0x0007e643) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0008b514) cale_week_scroll_pane_g_ParamLimits

0x22a3,	// (0x0007e68c) cale_week_time_pane_ParamLimits

0x22c3,	// (0x0007e6ac) grid_cale_week_pane_ParamLimits

0xa8d3,	// (0x00086cbc) listscroll_cale_week_pane_t1

0xa8e5,	// (0x00086cce) scroll_pane_cp08_ParamLimits

0x2e20,	// (0x0007f209) cale_month_corner_pane_ParamLimits

0xac99,	// (0x00087082) cale_month_pane_t1

0x32e2,	// (0x0007f6cb) cale_month_week_pane_ParamLimits

0xbb22,	// (0x00087f0b) popup_call_status_window_g1_ParamLimits

0x3a3d,	// (0x0007fe26) popup_call_status_window_g2_ParamLimits

0x3a49,	// (0x0007fe32) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0008b693) popup_call_status_window_g_ParamLimits

0xb065,	// (0x0008744e) aid_call2_pane

0x0ca8,	// (0x0007d091) msg_header_pane_g1

0x41f0,	// (0x000805d9) postcard_address2_pane_ParamLimits

0x41f0,	// (0x000805d9) postcard_address2_pane

0x41fe,	// (0x000805e7) postcard_message2_pane_ParamLimits

0x41fe,	// (0x000805e7) postcard_message2_pane

0x4a95,	// (0x00080e7e) message2_row_pane_ParamLimits

0x4a95,	// (0x00080e7e) message2_row_pane

0x4aaf,	// (0x00080e98) address2_row_pane_ParamLimits

0x4aaf,	// (0x00080e98) address2_row_pane

0xc65a,	// (0x00088a43) postcard_message2_row_pane_g1

0xc662,	// (0x00088a4b) postcard_message2_row_pane_t1

0xc65a,	// (0x00088a43) address2_row_pane_g1

0xc662,	// (0x00088a4b) address2_row_pane_t1

0x2651,	// (0x0007ea3a) aid_size_cell_vorec

0xa469,	// (0x00086852) main_rss_pane

0xc670,	// (0x00088a59) rss_list_single_pane_ParamLimits

0xc670,	// (0x00088a59) rss_list_single_pane

0xc67e,	// (0x00088a67) rss_list_single_pane_t1

0xc67e,	// (0x00088a67) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0008b943) rss_list_single_pane_t

0xa469,	// (0x00086852) main_camera2_pane

0xa469,	// (0x00086852) main_video2_pane

0xa67e,	// (0x00086a67) cams_zoom_pane_cp2_ParamLimits

0xa67e,	// (0x00086a67) cams_zoom_pane_cp2

0xa67e,	// (0x00086a67) image2_vga_pane_ParamLimits

0xa67e,	// (0x00086a67) image2_vga_pane

0xa75b,	// (0x00086b44) main_camera2_pane_g1_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g1

0xa75b,	// (0x00086b44) main_camera2_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g2

0xa75b,	// (0x00086b44) main_camera2_pane_g3_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g3

0xa75b,	// (0x00086b44) main_camera2_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g4

0xa75b,	// (0x00086b44) main_camera2_pane_g5_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g5

0xa75b,	// (0x00086b44) main_camera2_pane_g6_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g6

0xa75b,	// (0x00086b44) main_camera2_pane_g7_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g7

0xa75b,	// (0x00086b44) main_camera2_pane_g8_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g8

0x0008,

0xf576,	// (0x0008b95f) main_camera2_pane_g_ParamLimits

0xf576,	// (0x0008b95f) main_camera2_pane_g

0xb11d,	// (0x00087506) main_camera2_pane_t1_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t1

0xb11d,	// (0x00087506) main_camera2_pane_t2_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t2

0xb11d,	// (0x00087506) main_camera2_pane_t3_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t3

0xb11d,	// (0x00087506) main_camera2_pane_t4_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0008b972) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0008b972) main_camera2_pane_t

0xb5bd,	// (0x000879a6) cams_zoom_pane_cp4_ParamLimits

0xb5bd,	// (0x000879a6) cams_zoom_pane_cp4

0xa670,	// (0x00086a59) image2_cif_pane_ParamLimits

0xa670,	// (0x00086a59) image2_cif_pane

0xa67e,	// (0x00086a67) image2_subqcif_pane_ParamLimits

0xa67e,	// (0x00086a67) image2_subqcif_pane

0xb5cb,	// (0x000879b4) main_video2_pane_g1_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g1

0xb5cb,	// (0x000879b4) main_video2_pane_g2_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g2

0xb5cb,	// (0x000879b4) main_video2_pane_g3_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g3

0xb5cb,	// (0x000879b4) main_video2_pane_g4_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g4

0xb5cb,	// (0x000879b4) main_video2_pane_g5_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g5

0xb5cb,	// (0x000879b4) main_video2_pane_g6_ParamLimits

0xb5cb,	// (0x000879b4) main_video2_pane_g6

0x0005,

0xf598,	// (0x0008b981) main_video2_pane_g_ParamLimits

0xf598,	// (0x0008b981) main_video2_pane_g

0xb5d9,	// (0x000879c2) main_video2_pane_t1_ParamLimits

0xb5d9,	// (0x000879c2) main_video2_pane_t1

0xb5d9,	// (0x000879c2) main_video2_pane_t2_ParamLimits

0xb5d9,	// (0x000879c2) main_video2_pane_t2

0xb5d9,	// (0x000879c2) main_video2_pane_t3_ParamLimits

0xb5d9,	// (0x000879c2) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x0008b98e) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x0008b98e) main_video2_pane_t

0x4796,	// (0x00080b7f) call_muted_g2

0x0001,

0xf54c,	// (0x0008b935) call_muted_g

0xa469,	// (0x00086852) main_mup2_pane

0xa769,	// (0x00086b52) main_mup2_pane_g1_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g1

0xa769,	// (0x00086b52) main_mup2_pane_g2_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g2

0xa97f,	// (0x00086d68) main_mup_pane_g13_cp1

0xa017,	// (0x00086400) mup_volume_pane_cp1

0xa769,	// (0x00086b52) main_mup2_pane_g4_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g4

0xa769,	// (0x00086b52) main_mup2_pane_g5_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g5

0xa769,	// (0x00086b52) main_mup2_pane_g6_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g6

0xa769,	// (0x00086b52) main_mup2_pane_g7_ParamLimits

0xa769,	// (0x00086b52) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0008b995) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0008b995) main_mup2_pane_g

0xa777,	// (0x00086b60) main_mup2_pane_t1_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t1

0xa777,	// (0x00086b60) main_mup2_pane_t2_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t2

0xa777,	// (0x00086b60) main_mup2_pane_t3_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t3

0xa777,	// (0x00086b60) main_mup2_pane_t4_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t4

0xa777,	// (0x00086b60) main_mup2_pane_t5_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t5

0xa777,	// (0x00086b60) main_mup2_pane_t6_ParamLimits

0xa777,	// (0x00086b60) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0008b9a4) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0008b9a4) main_mup2_pane_t

0xc7e5,	// (0x00088bce) mup2_visualizer_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup2_visualizer_pane

0xc7e5,	// (0x00088bce) mup_progress_pane_cp_ParamLimits

0xc7e5,	// (0x00088bce) mup_progress_pane_cp

0xc70e,	// (0x00088af7) mup_volume_pane_cp_ParamLimits

0xc70e,	// (0x00088af7) mup_volume_pane_cp

0xa74d,	// (0x00086b36) mup2_visualizer_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) mup2_visualizer_pane_g1

0xa75b,	// (0x00086b44) mup2_visualizer_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) mup2_visualizer_pane_g2

0xa75b,	// (0x00086b44) mup2_visualizer_pane_g3_ParamLimits

0xa75b,	// (0x00086b44) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0008b48d) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0008b48d) mup2_visualizer_pane_g

0xb5ab,	// (0x00087994) aid_size_cell_fmradio

0x48ac,	// (0x00080c95) aid_height_parent_landcape

0xaaee,	// (0x00086ed7) wml_content_pane_cp

0xaaf6,	// (0x00086edf) wml_tabs_pane

0xaaff,	// (0x00086ee8) popup_wml_miniature_window

0xab07,	// (0x00086ef0) scroll_pane_cp021

0xab1b,	// (0x00086f04) wml_content_pane_comp8

0xa469,	// (0x00086852) bg_popup_sub_pane_cp05

0xc724,	// (0x00088b0d) popup_wml_miniature_window_g1

0xc72c,	// (0x00088b15) wml_miniature_view_pane

0x4c37,	// (0x00081020) aid_size_wml_view

0x4c3f,	// (0x00081028) wml_miniature_view_pane_g1

0x4c48,	// (0x00081031) wml_miniature_view_pane_g2

0x4c51,	// (0x0008103a) wml_miniature_view_pane_g3

0x4c59,	// (0x00081042) wml_miniature_view_pane_g4

0x4c61,	// (0x0008104a) wml_miniature_view_pane_g5

0x4c69,	// (0x00081052) wml_miniature_view_pane_g6

0x4c71,	// (0x0008105a) wml_miniature_view_pane_g7

0x4c79,	// (0x00081062) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x0008b9b1) wml_miniature_view_pane_g

0xc734,	// (0x00088b1d) background_graphic_ParamLimits

0xc734,	// (0x00088b1d) background_graphic

0xc740,	// (0x00088b29) wml_tabs_2_pane

0xc749,	// (0x00088b32) wml_tabs_3_pane_ParamLimits

0xc749,	// (0x00088b32) wml_tabs_3_pane

0xc75b,	// (0x00088b44) wml_tabs_4_pane_ParamLimits

0xc75b,	// (0x00088b44) wml_tabs_4_pane

0xc771,	// (0x00088b5a) wml_tabs_5_pane_ParamLimits

0xc771,	// (0x00088b5a) wml_tabs_5_pane

0xc78b,	// (0x00088b74) wml_tabs_pane_g2_ParamLimits

0xc78b,	// (0x00088b74) wml_tabs_pane_g2

0xc7a0,	// (0x00088b89) wml_tabs_pane_g3_ParamLimits

0xc7a0,	// (0x00088b89) wml_tabs_pane_g3

0xc7b5,	// (0x00088b9e) wml_tabs_2_active_pane_ParamLimits

0xc7b5,	// (0x00088b9e) wml_tabs_2_active_pane

0xc7b5,	// (0x00088b9e) wml_tabs_2_passive_pane_ParamLimits

0xc7b5,	// (0x00088b9e) wml_tabs_2_passive_pane

0x4c81,	// (0x0008106a) wml_tabs_3_active_pane_cp_ParamLimits

0x4c81,	// (0x0008106a) wml_tabs_3_active_pane_cp

0x4c94,	// (0x0008107d) wml_tabs_3_passive_pane_ParamLimits

0x4c94,	// (0x0008107d) wml_tabs_3_passive_pane

0x4ca5,	// (0x0008108e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ca5,	// (0x0008108e) wml_tabs_3_passive_pane_cp

0x4cba,	// (0x000810a3) tabs_4_active_pane

0x4cc2,	// (0x000810ab) tabs_4_passive_pane

0x4cca,	// (0x000810b3) tabs_4_passive_pane_cp

0x4cd2,	// (0x000810bb) tabs_4_passive_pane_cp2

0x4692,	// (0x00080a7b) aid_height_text

0xc7e5,	// (0x00088bce) mup_volume_cont_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup_volume_cont_pane

0xa017,	// (0x00086400) aid_size_cell_pinb

0xa017,	// (0x00086400) aid_size_list_pinb

0xc7e5,	// (0x00088bce) mup2_volume_cont_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup2_volume_cont_pane

0x4cdc,	// (0x000810c5) mup2_volume_cont_pane_g1_ParamLimits

0x4cdc,	// (0x000810c5) mup2_volume_cont_pane_g1

0x1925,	// (0x0007dd0e) aid_size_cell_touch_ParamLimits

0x1925,	// (0x0007dd0e) aid_size_cell_touch

0x1bca,	// (0x0007dfb3) touch_pane_ParamLimits

0x1bca,	// (0x0007dfb3) touch_pane

0xa017,	// (0x00086400) main_rss2_pane

0xc7cc,	// (0x00088bb5) listscroll_rss2_pane

0xc7d5,	// (0x00088bbe) rss2_navigation_pane

0xc7dd,	// (0x00088bc6) list_rss2_pane

0xb19d,	// (0x00087586) scroll_pane_cp22

0xc7f3,	// (0x00088bdc) rss2_navigation_pane_g1

0xc7fc,	// (0x00088be5) rss2_navigation_pane_g2

0xc804,	// (0x00088bed) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x0008b9c2) rss2_navigation_pane_g

0xc80c,	// (0x00088bf5) rss2_navigation_pane_t1

0x4cf2,	// (0x000810db) rss2_list_single_pane_ParamLimits

0x4cf2,	// (0x000810db) rss2_list_single_pane

0xc81a,	// (0x00088c03) rss2_list_single_pane_t2

0xc828,	// (0x00088c11) rss2_list_single_pane_t3_ParamLimits

0xc828,	// (0x00088c11) rss2_list_single_pane_t3

0xc845,	// (0x00088c2e) rss2_list_single_pane_t4

0x38f0,	// (0x0007fcd9) smil_status_pane_g1

0xa670,	// (0x00086a59) main_image2_pane_ParamLimits

0xa670,	// (0x00086a59) main_image2_pane

0xa75b,	// (0x00086b44) main_camera2_pane_g9_ParamLimits

0xa75b,	// (0x00086b44) main_camera2_pane_g9

0xb11d,	// (0x00087506) main_camera2_pane_t5_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t5

0x4c23,	// (0x0008100c) main_camera2_pane_t6_ParamLimits

0x4c23,	// (0x0008100c) main_camera2_pane_t6

0x4d15,	// (0x000810fe) main_image2_pane_g1_ParamLimits

0x4d15,	// (0x000810fe) main_image2_pane_g1

0x43c7,	// (0x000807b0) smil2_video_pane_ParamLimits

0x43c7,	// (0x000807b0) smil2_video_pane

0x0c40,	// (0x0007d029) aid_zoom_text_primary_cp

0x1b73,	// (0x0007df5c) popup_preview_fixed_window

0xaa48,	// (0x00086e31) im_reading_pane_g1

0x4c15,	// (0x00080ffe) cams2_bc_adjust_pane_cp_ParamLimits

0x4c15,	// (0x00080ffe) cams2_bc_adjust_pane_cp

0xa67e,	// (0x00086a67) cams2_bc_adjust_pane_ParamLimits

0xa67e,	// (0x00086a67) cams2_bc_adjust_pane

0xa97f,	// (0x00086d68) cams2_bc_adjust_pane_g1

0xa017,	// (0x00086400) cams2_slider_pane

0xa97f,	// (0x00086d68) cams2_slider_pane_g1

0xa97f,	// (0x00086d68) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0008b9c9) cams2_slider_pane_g

0x1c5f,	// (0x0007e048) calc_display_pane_ParamLimits

0x1c7d,	// (0x0007e066) calc_paper_pane_ParamLimits

0x1c99,	// (0x0007e082) grid_calc_pane_ParamLimits

0x3aa7,	// (0x0007fe90) popup_clock_digital_window_t1_ParamLimits

0xb548,	// (0x00087931) main_image_pane_t1

0x1c45,	// (0x0007e02e) aid_size_cell_calc_ParamLimits

0x1c45,	// (0x0007e02e) aid_size_cell_calc

0x48e6,	// (0x00080ccf) popup_blid_sat_info2_window_ParamLimits

0x48e6,	// (0x00080ccf) popup_blid_sat_info2_window

0xc853,	// (0x00088c3c) aid_size_cell_blid

0xc7e5,	// (0x00088bce) bg_popup_window_pane_cp07

0xc870,	// (0x00088c59) grid_popup_blid_pane

0xc87a,	// (0x00088c63) heading_pane_cp05_ParamLimits

0xc87a,	// (0x00088c63) heading_pane_cp05

0xc944,	// (0x00088d2d) cell_popup_blid_pane_ParamLimits

0xc944,	// (0x00088d2d) cell_popup_blid_pane

0xc96e,	// (0x00088d57) cell_popup_blid_pane_g1

0xc976,	// (0x00088d5f) cell_popup_blid_pane_t1

0xc7e5,	// (0x00088bce) mup2_indicator_pane_ParamLimits

0xc7e5,	// (0x00088bce) mup2_indicator_pane

0xa017,	// (0x00086400) mup2_visualizer_osc_pane

0xc70e,	// (0x00088af7) mup2_visualizer_spec_pane_ParamLimits

0xc70e,	// (0x00088af7) mup2_visualizer_spec_pane

0xa017,	// (0x00086400) mup2_spec_half_pane

0xa017,	// (0x00086400) mup2_spec_half_pane_cp

0xc984,	// (0x00088d6d) mup2_spec_bar_pane_ParamLimits

0xc984,	// (0x00088d6d) mup2_spec_bar_pane

0xa97f,	// (0x00086d68) mup2_spec_bar_pane_g1

0xc9a3,	// (0x00088d8c) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008b9ef) mup2_spec_bar_pane_g

0xa017,	// (0x00086400) mup2_osc_middle_pane

0xa97f,	// (0x00086d68) mup2_visualizer_osc_pane_g1

0xa041,	// (0x0008642a) popup_number_entry_window_t1_ParamLimits

0xa054,	// (0x0008643d) popup_number_entry_window_t2_ParamLimits

0xa066,	// (0x0008644f) popup_number_entry_window_t3_ParamLimits

0xa078,	// (0x00086461) popup_number_entry_window_t5_ParamLimits

0xa078,	// (0x00086461) popup_number_entry_window_t5

0xf045,	// (0x0008b42e) popup_number_entry_window_t_ParamLimits

0xa0ad,	// (0x00086496) text_title_cp2_ParamLimits

0x40b4,	// (0x0008049d) aid_hotspot_pointer_text2_pane

0x414e,	// (0x00080537) main_viewer_pane_g9_ParamLimits

0x414e,	// (0x00080537) main_viewer_pane_g9

0xac99,	// (0x00087082) cale_month_pane_t1_ParamLimits

0xacd6,	// (0x000870bf) bg_cale_pane_ParamLimits

0xacee,	// (0x000870d7) list_cale_pane_ParamLimits

0xacff,	// (0x000870e8) listscroll_cale_day_pane_t1

0xad11,	// (0x000870fa) scroll_pane_cp09_ParamLimits

0x3e57,	// (0x00080240) main_mup_eq_pane_t1_ParamLimits

0x3e57,	// (0x00080240) main_mup_eq_pane_t1

0x3e73,	// (0x0008025c) main_mup_eq_pane_t2_ParamLimits

0x3e73,	// (0x0008025c) main_mup_eq_pane_t2

0x3e8f,	// (0x00080278) main_mup_eq_pane_t3_ParamLimits

0x3e8f,	// (0x00080278) main_mup_eq_pane_t3

0x3ea9,	// (0x00080292) main_mup_eq_pane_t4_ParamLimits

0x3ea9,	// (0x00080292) main_mup_eq_pane_t4

0x3ec3,	// (0x000802ac) main_mup_eq_pane_t5_ParamLimits

0x3ec3,	// (0x000802ac) main_mup_eq_pane_t5

0x3edd,	// (0x000802c6) main_mup_eq_pane_t6_ParamLimits

0x3edd,	// (0x000802c6) main_mup_eq_pane_t6

0x3ef3,	// (0x000802dc) main_mup_eq_pane_t7_ParamLimits

0x3ef3,	// (0x000802dc) main_mup_eq_pane_t7

0x3f09,	// (0x000802f2) main_mup_eq_pane_t8_ParamLimits

0x3f09,	// (0x000802f2) main_mup_eq_pane_t8

0x3f1f,	// (0x00080308) main_mup_eq_pane_t9_ParamLimits

0x3f1f,	// (0x00080308) main_mup_eq_pane_t9

0x3f3b,	// (0x00080324) main_mup_eq_pane_t10_ParamLimits

0x3f3b,	// (0x00080324) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0008b792) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0008b792) main_mup_eq_pane_t

0x4000,	// (0x000803e9) mup_equalizer_pane_cp5_ParamLimits

0x4018,	// (0x00080401) mup_equalizer_pane_cp6_ParamLimits

0x4030,	// (0x00080419) mup_equalizer_pane_cp7_ParamLimits

0xa017,	// (0x00086400) main_gallery_pane

0xc6ac,	// (0x00088a95) smil2_volume_pane

0xc6b4,	// (0x00088a9d) smil_status_volume_pane_g1_ParamLimits

0xc6c7,	// (0x00088ab0) smil_status_volume_pane_g2_ParamLimits

0x4ac2,	// (0x00080eab) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0008b948) smil_status_volume_pane_g_ParamLimits

0xc7e5,	// (0x00088bce) bg_popup_window_pane_cp07_ParamLimits

0xc85b,	// (0x00088c44) blid_firmament_pane

0xa67e,	// (0x00086a67) aid_size_cell_gallery_ParamLimits

0xa67e,	// (0x00086a67) aid_size_cell_gallery

0xa67e,	// (0x00086a67) grid_gallery_pane_ParamLimits

0xa67e,	// (0x00086a67) grid_gallery_pane

0xb5bd,	// (0x000879a6) cell_gallery_pane_ParamLimits

0xb5bd,	// (0x000879a6) cell_gallery_pane

0xa670,	// (0x00086a59) bg_cell_gallery_focus_pane_ParamLimits

0xa670,	// (0x00086a59) bg_cell_gallery_focus_pane

0xa74d,	// (0x00086b36) cell_gallery_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) cell_gallery_pane_g1

0xa74d,	// (0x00086b36) cell_gallery_pane_g2_ParamLimits

0xa74d,	// (0x00086b36) cell_gallery_pane_g2

0xa74d,	// (0x00086b36) cell_gallery_pane_g3_ParamLimits

0xa74d,	// (0x00086b36) cell_gallery_pane_g3

0xa75b,	// (0x00086b44) cell_gallery_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0008b9f4) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0008b9f4) cell_gallery_pane_g

0xc9ad,	// (0x00088d96) bg_cell_gallery_focus_pane_g1

0xc9b5,	// (0x00088d9e) bg_cell_gallery_focus_pane_g2

0xc9bd,	// (0x00088da6) bg_cell_gallery_focus_pane_g3

0xc9c5,	// (0x00088dae) bg_cell_gallery_focus_pane_g4

0xc9cd,	// (0x00088db6) bg_cell_gallery_focus_pane_g5

0xc9d5,	// (0x00088dbe) bg_cell_gallery_focus_pane_g6

0xc9dd,	// (0x00088dc6) bg_cell_gallery_focus_pane_g7

0xc9e5,	// (0x00088dce) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x0008b9fd) bg_cell_gallery_focus_pane_g

0xc9ed,	// (0x00088dd6) aid_firma_cardinal

0xca01,	// (0x00088dea) blid_firmament_pane_t1

0xca18,	// (0x00088e01) blid_firmament_pane_t2

0xca2f,	// (0x00088e18) blid_firmament_pane_t3

0xca46,	// (0x00088e2f) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x0008ba0e) blid_firmament_pane_t

0xca5d,	// (0x00088e46) blid_sat_info_pane

0xa97f,	// (0x00086d68) blid_sat_info_pane_g1

0xa97f,	// (0x00086d68) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0008b786) blid_sat_info_pane_g

0xca6d,	// (0x00088e56) blid_sat_info_pane_t1

0xca7b,	// (0x00088e64) smil2_volume_content_pane

0xca84,	// (0x00088e6d) smil2_volume_pane_g1

0xabc7,	// (0x00086fb0) smil2_volume_content_pane_g1

0xca8c,	// (0x00088e75) smil2_volume_content_pane_g2

0xca95,	// (0x00088e7e) smil2_volume_content_pane_g3

0xca9e,	// (0x00088e87) smil2_volume_content_pane_g4

0xcaa7,	// (0x00088e90) smil2_volume_content_pane_g5

0xcab0,	// (0x00088e99) smil2_volume_content_pane_g6

0xcab9,	// (0x00088ea2) smil2_volume_content_pane_g7

0xcac2,	// (0x00088eab) smil2_volume_content_pane_g8

0xcacb,	// (0x00088eb4) smil2_volume_content_pane_g9

0xcad4,	// (0x00088ebd) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0008ba17) smil2_volume_content_pane_g

0x2384,	// (0x0007e76d) cale_week_day_heading_pane_t1_ParamLimits

0x23ac,	// (0x0007e795) cale_week_day_heading_pane_t2_ParamLimits

0x23d9,	// (0x0007e7c2) cale_week_day_heading_pane_t3_ParamLimits

0x2406,	// (0x0007e7ef) cale_week_day_heading_pane_t4_ParamLimits

0x2433,	// (0x0007e81c) cale_week_day_heading_pane_t5_ParamLimits

0x2460,	// (0x0007e849) cale_week_day_heading_pane_t6_ParamLimits

0x248d,	// (0x0007e876) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0008b535) cale_week_day_heading_pane_t_ParamLimits

0xa902,	// (0x00086ceb) bg_cale_side_pane_ParamLimits

0x24b5,	// (0x0007e89e) cale_week_time_pane_t1_ParamLimits

0x24d9,	// (0x0007e8c2) cale_week_time_pane_t2_ParamLimits

0x24fd,	// (0x0007e8e6) cale_week_time_pane_t3_ParamLimits

0x2521,	// (0x0007e90a) cale_week_time_pane_t4_ParamLimits

0x2545,	// (0x0007e92e) cale_week_time_pane_t5_ParamLimits

0x256b,	// (0x0007e954) cale_week_time_pane_t6_ParamLimits

0x2593,	// (0x0007e97c) cale_week_time_pane_t7_ParamLimits

0x25bf,	// (0x0007e9a8) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0008b544) cale_week_time_pane_t_ParamLimits

0x25ef,	// (0x0007e9d8) cell_cale_week_pane_g2_ParamLimits

0xa902,	// (0x00086ceb) bg_cale_side_pane_cp01_ParamLimits

0x36db,	// (0x0007fac4) cale_month_week_pane_t1_ParamLimits

0x36f4,	// (0x0007fadd) cale_month_week_pane_t2_ParamLimits

0x370d,	// (0x0007faf6) cale_month_week_pane_t3_ParamLimits

0x3726,	// (0x0007fb0f) cale_month_week_pane_t4_ParamLimits

0x373f,	// (0x0007fb28) cale_month_week_pane_t5_ParamLimits

0x375c,	// (0x0007fb45) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0008b612) cale_month_week_pane_t_ParamLimits

0x38ad,	// (0x0007fc96) cell_cale_month_pane_g1_ParamLimits

0xa017,	// (0x00086400) main_cale_event_viewer_pane

0xa017,	// (0x00086400) listscroll_cale_event_viewer_pane

0xcadd,	// (0x00088ec6) list_cale_ev_pane

0xcae5,	// (0x00088ece) scroll_pane_cp023

0x4d21,	// (0x0008110a) field_cale_ev_pane_ParamLimits

0x4d21,	// (0x0008110a) field_cale_ev_pane

0xcaf1,	// (0x00088eda) field_cale_ev_content_pane_ParamLimits

0xcaf1,	// (0x00088eda) field_cale_ev_content_pane

0xcafd,	// (0x00088ee6) field_cale_ev_pane_g1_ParamLimits

0xcafd,	// (0x00088ee6) field_cale_ev_pane_g1

0xcb09,	// (0x00088ef2) field_cale_ev_pane_g2_ParamLimits

0xcb09,	// (0x00088ef2) field_cale_ev_pane_g2

0xcb21,	// (0x00088f0a) field_cale_ev_pane_g3_ParamLimits

0xcb21,	// (0x00088f0a) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x0008ba2c) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x0008ba2c) field_cale_ev_pane_g

0xcb39,	// (0x00088f22) field_cale_ev_pane_t1_ParamLimits

0xcb39,	// (0x00088f22) field_cale_ev_pane_t1

0x4d45,	// (0x0008112e) field_cale_ev_content_pane_t1_ParamLimits

0x4d45,	// (0x0008112e) field_cale_ev_content_pane_t1

0xb42e,	// (0x00087817) bg_button_pane_cp01

0x1fe2,	// (0x0007e3cb) listscroll_cale_week_pane_ParamLimits

0xa8ca,	// (0x00086cb3) popup_toolbar_window_cp01

0xa8d3,	// (0x00086cbc) listscroll_cale_week_pane_t1_ParamLimits

0x1fe2,	// (0x0007e3cb) listscroll_cale_day_pane_ParamLimits

0xa8ca,	// (0x00086cb3) popup_toolbar_window_cp02

0xacff,	// (0x000870e8) listscroll_cale_day_pane_t1_ParamLimits

0x1fe2,	// (0x0007e3cb) main_cale_month_pane_ParamLimits

0x4a05,	// (0x00080dee) popup_toolbar_window_cp03_ParamLimits

0x4a05,	// (0x00080dee) popup_toolbar_window_cp03

0x42d7,	// (0x000806c0) main_image_pane_g2_ParamLimits

0x42d7,	// (0x000806c0) main_image_pane_g2

0x42e3,	// (0x000806cc) main_image_pane_g3_ParamLimits

0x42e3,	// (0x000806cc) main_image_pane_g3

0x0002,

0xf43b,	// (0x0008b824) main_image_pane_g_ParamLimits

0xf43b,	// (0x0008b824) main_image_pane_g

0xb548,	// (0x00087931) main_image_pane_t1_ParamLimits

0x42ef,	// (0x000806d8) main_image_pane_t2_ParamLimits

0x42ef,	// (0x000806d8) main_image_pane_t2

0x4301,	// (0x000806ea) main_image_pane_t3_ParamLimits

0x4301,	// (0x000806ea) main_image_pane_t3

0x4313,	// (0x000806fc) main_image_pane_t4_ParamLimits

0x4313,	// (0x000806fc) main_image_pane_t4

0x0003,

0xf442,	// (0x0008b82b) main_image_pane_t_ParamLimits

0xf442,	// (0x0008b82b) main_image_pane_t

0x4325,	// (0x0008070e) popup_image_details_window_cp01

0x432f,	// (0x00080718) popup_toobar_trans_pane_cp01_ParamLimits

0x432f,	// (0x00080718) popup_toobar_trans_pane_cp01

0x4947,	// (0x00080d30) popup_image_details_window_ParamLimits

0x4947,	// (0x00080d30) popup_image_details_window

0x4955,	// (0x00080d3e) popup_image_focus_window

0xa67e,	// (0x00086a67) camera2_autofocus_pane_ParamLimits

0xa67e,	// (0x00086a67) camera2_autofocus_pane

0xa017,	// (0x00086400) bg_popup_sub_pane_cp06

0xcb50,	// (0x00088f39) popup_image_focus_window_g1

0xcb58,	// (0x00088f41) popup_image_focus_window_g2

0xcb60,	// (0x00088f49) popup_image_focus_window_g3

0xcb68,	// (0x00088f51) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x0008ba33) popup_image_focus_window_g

0xcb70,	// (0x00088f59) popup_image_focus_window_t1

0xcb7e,	// (0x00088f67) popup_image_focus_window_t2

0xcb8e,	// (0x00088f77) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x0008ba3c) popup_image_focus_window_t

0xa74d,	// (0x00086b36) camera2_autofocus_pane_g1

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp01

0xcb9c,	// (0x00088f85) popup_image_details_window_g1

0xcbaf,	// (0x00088f98) popup_image_details_window_g2

0x0002,

0xf665,	// (0x0008ba4e) popup_image_details_window_g

0xcbd8,	// (0x00088fc1) popup_image_details_window_t1

0xcbea,	// (0x00088fd3) popup_image_details_window_t2

0xcc03,	// (0x00088fec) popup_image_details_window_t3

0xcc17,	// (0x00089000) popup_image_details_window_t4

0xcc32,	// (0x0008901b) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x0008ba55) popup_image_details_window_t

0xa7ab,	// (0x00086b94) bg_calc_paper_pane_ParamLimits

0xa017,	// (0x00086400) grid_highlight_pane_cp013

0x1d96,	// (0x0007e17f) list_calc_pane_ParamLimits

0x1da8,	// (0x0007e191) scroll_pane_cp024

0xa7bf,	// (0x00086ba8) bg_calc_display_pane_ParamLimits

0x1db0,	// (0x0007e199) calc_display_pane_t1_ParamLimits

0x1dc5,	// (0x0007e1ae) calc_display_pane_t2_ParamLimits

0x1dda,	// (0x0007e1c3) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0008b4b5) calc_display_pane_t_ParamLimits

0x1eaa,	// (0x0007e293) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0008b4d2) cell_calc_pane_g

0x1eb3,	// (0x0007e29c) cell_calc_pane_t1

0xa814,	// (0x00086bfd) grid_highlight_pane_cp02_ParamLimits

0xa82a,	// (0x00086c13) toolbar_button_pane_cp01_ParamLimits

0xa82a,	// (0x00086c13) toolbar_button_pane_cp01

0xb58d,	// (0x00087976) temp_image_control_pane_ParamLimits

0xb58d,	// (0x00087976) temp_image_control_pane

0xa670,	// (0x00086a59) main_mp3_pane

0xcc4c,	// (0x00089035) temp_image_control_pane_g1_ParamLimits

0xcc4c,	// (0x00089035) temp_image_control_pane_g1

0xcc5a,	// (0x00089043) temp_image_control_pane_g2_ParamLimits

0xcc5a,	// (0x00089043) temp_image_control_pane_g2

0xcc6c,	// (0x00089055) temp_image_control_pane_g3_ParamLimits

0xcc6c,	// (0x00089055) temp_image_control_pane_g3

0x4d60,	// (0x00081149) temp_image_control_pane_g4_ParamLimits

0x4d60,	// (0x00081149) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x0008ba60) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x0008ba60) temp_image_control_pane_g

0xcc4c,	// (0x00089035) main_mp3_pane_g1

0x4d71,	// (0x0008115a) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0008ba69) main_mp3_pane_g

0xcca1,	// (0x0008908a) main_mp3_pane_t1

0xa75b,	// (0x00086b44) main_camera_pane_g8_ParamLimits

0xa75b,	// (0x00086b44) main_camera_pane_g8

0x279b,	// (0x0007eb84) main_video_pane_g7_ParamLimits

0x279b,	// (0x0007eb84) main_video_pane_g7

0xb11d,	// (0x00087506) main_camera2_pane_t7_ParamLimits

0xb11d,	// (0x00087506) main_camera2_pane_t7

0xaaae,	// (0x00086e97) scroll_pane_cp025_ParamLimits

0xaaae,	// (0x00086e97) scroll_pane_cp025

0xaac2,	// (0x00086eab) scroll_pane_cp026_ParamLimits

0xaac2,	// (0x00086eab) scroll_pane_cp026

0xaad1,	// (0x00086eba) wml_content_pane_ParamLimits

0xa017,	// (0x00086400) main_touch_calib_pane

0x4e15,	// (0x000811fe) main_touch_calib_pane_g1

0x4e21,	// (0x0008120a) main_touch_calib_pane_g2

0x4e2d,	// (0x00081216) main_touch_calib_pane_g3

0x4e39,	// (0x00081222) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x0008ba87) main_touch_calib_pane_g

0x4e45,	// (0x0008122e) main_touch_calib_pane_t1

0x4e5c,	// (0x00081245) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x0008ba90) main_touch_calib_pane_t

0xb218,	// (0x00087601) mup_progress_pane_cp02

0xb237,	// (0x00087620) navi_pane_g1

0xb299,	// (0x00087682) navi_pane_mp_t3

0xa670,	// (0x00086a59) main_mp3_pane_ParamLimits

0x4a46,	// (0x00080e2f) navi_pane_ParamLimits

0xcc4c,	// (0x00089035) main_mp3_pane_g1_ParamLimits

0x4d71,	// (0x0008115a) main_mp3_pane_g2_ParamLimits

0x4d7d,	// (0x00081166) main_mp3_pane_g3_ParamLimits

0x4d7d,	// (0x00081166) main_mp3_pane_g3

0x4d89,	// (0x00081172) main_mp3_pane_g4_ParamLimits

0x4d89,	// (0x00081172) main_mp3_pane_g4

0xa74d,	// (0x00086b36) main_mp3_pane_g5_ParamLimits

0xa74d,	// (0x00086b36) main_mp3_pane_g5

0xcc7c,	// (0x00089065) main_mp3_pane_g6_ParamLimits

0xcc7c,	// (0x00089065) main_mp3_pane_g6

0xcc89,	// (0x00089072) main_mp3_pane_g7_ParamLimits

0xcc89,	// (0x00089072) main_mp3_pane_g7

0xcc95,	// (0x0008907e) main_mp3_pane_g8_ParamLimits

0xcc95,	// (0x0008907e) main_mp3_pane_g8

0xf680,	// (0x0008ba69) main_mp3_pane_g_ParamLimits

0x4d95,	// (0x0008117e) main_mp3_pane_t2

0x4da5,	// (0x0008118e) main_mp3_pane_t3

0xccaf,	// (0x00089098) main_mp3_pane_t4

0xccbd,	// (0x000890a6) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0008ba7a) main_mp3_pane_t

0xcccb,	// (0x000890b4) mup_progress_pane_cp01

0x0c40,	// (0x0007d029) aid_zoom_text_secondary2

0xcadd,	// (0x00088ec6) list_cale_ev2_pane

0xcae5,	// (0x00088ece) scroll_pane_cp023_ParamLimits

0x4eb7,	// (0x000812a0) field_cale_ev2_pane_ParamLimits

0x4eb7,	// (0x000812a0) field_cale_ev2_pane

0x4ed2,	// (0x000812bb) field_cale_ev2_pane_g1_ParamLimits

0x4ed2,	// (0x000812bb) field_cale_ev2_pane_g1

0x4ede,	// (0x000812c7) field_cale_ev2_pane_g2_ParamLimits

0x4ede,	// (0x000812c7) field_cale_ev2_pane_g2

0x4ef6,	// (0x000812df) field_cale_ev2_pane_g3_ParamLimits

0x4ef6,	// (0x000812df) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0008ba9b) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0008ba9b) field_cale_ev2_pane_g

0x0d38,	// (0x0007d121) field_cale_ev2_pane_t1_ParamLimits

0x0d38,	// (0x0007d121) field_cale_ev2_pane_t1

0x0d4f,	// (0x0007d138) field_cale_ev2_pane_t2_ParamLimits

0x0d4f,	// (0x0007d138) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x0008baa4) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x0008baa4) field_cale_ev2_pane_t

0x41b6,	// (0x0008059f) main_postcard_pane_g5_ParamLimits

0x41b6,	// (0x0008059f) main_postcard_pane_g5

0x41c4,	// (0x000805ad) main_postcard_pane_g6_ParamLimits

0x41c4,	// (0x000805ad) main_postcard_pane_g6

0xa67e,	// (0x00086a67) camera2_autofocus_pane_cp_ParamLimits

0xa67e,	// (0x00086a67) camera2_autofocus_pane_cp

0xa670,	// (0x00086a59) main_mup3_pane

0x4f5d,	// (0x00081346) main_mup3_pane_g1_ParamLimits

0x4f5d,	// (0x00081346) main_mup3_pane_g1

0x4f7e,	// (0x00081367) main_mup3_pane_g2_ParamLimits

0x4f7e,	// (0x00081367) main_mup3_pane_g2

0x4ff2,	// (0x000813db) main_mup3_pane_g3_ParamLimits

0x4ff2,	// (0x000813db) main_mup3_pane_g3

0x5057,	// (0x00081440) main_mup3_pane_g4_ParamLimits

0x5057,	// (0x00081440) main_mup3_pane_g4

0x50bc,	// (0x000814a5) main_mup3_pane_g5_ParamLimits

0x50bc,	// (0x000814a5) main_mup3_pane_g5

0x5121,	// (0x0008150a) main_mup3_pane_g6_ParamLimits

0x5121,	// (0x0008150a) main_mup3_pane_g6

0xa75b,	// (0x00086b44) main_mup3_pane_g7_ParamLimits

0xa75b,	// (0x00086b44) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0008bab4) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0008bab4) main_mup3_pane_g

0x519b,	// (0x00081584) main_mup3_pane_t1_ParamLimits

0x519b,	// (0x00081584) main_mup3_pane_t1

0x5200,	// (0x000815e9) main_mup3_pane_t2_ParamLimits

0x5200,	// (0x000815e9) main_mup3_pane_t2

0x52c9,	// (0x000816b2) main_mup3_pane_t4_ParamLimits

0x52c9,	// (0x000816b2) main_mup3_pane_t4

0x531d,	// (0x00081706) main_mup3_pane_t5_ParamLimits

0x531d,	// (0x00081706) main_mup3_pane_t5

0x53d9,	// (0x000817c2) main_mup3_pane_t6_ParamLimits

0x53d9,	// (0x000817c2) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0008bac5) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0008bac5) main_mup3_pane_t

0x5483,	// (0x0008186c) mup3_progress_pane_ParamLimits

0x5483,	// (0x0008186c) mup3_progress_pane

0x5501,	// (0x000818ea) popup_mup3_control_window_ParamLimits

0x5501,	// (0x000818ea) popup_mup3_control_window

0xccd3,	// (0x000890bc) popup_mup3_text_window

0x551e,	// (0x00081907) mup3_progress_pane_t1

0x553c,	// (0x00081925) mup3_progress_pane_t2

0xccdb,	// (0x000890c4) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x0008bad2) mup3_progress_pane_t

0xccf8,	// (0x000890e1) mup_progress_pane_cp03

0xa017,	// (0x00086400) bg_tb_trans_pane_cp04

0x555a,	// (0x00081943) mup3_volume_pane

0x5562,	// (0x0008194b) popup_mup3_control_window_g1

0xd8e5,	// (0x00089cce) mup3_volume_pane_g1

0xd8ee,	// (0x00089cd7) mup3_volume_pane_g2

0xd8f7,	// (0x00089ce0) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0008bad9) mup3_volume_pane_g

0xa017,	// (0x00086400) bg_tb_trans_pane_cp03

0xcd08,	// (0x000890f1) popup_mup3_text_window_g1

0xcd10,	// (0x000890f9) popup_mup3_text_window_t1

0xa807,	// (0x00086bf0) list_calc_item_pane_g1_ParamLimits

0xc7c3,	// (0x00088bac) mup_volume_pane_cp_g1

0x4e75,	// (0x0008125e) main_touch_calib_pane_t3

0x4e8b,	// (0x00081274) main_touch_calib_pane_t4

0x4ea1,	// (0x0008128a) main_touch_calib_pane_t5

0x1911,	// (0x0007dcfa) aid_cell_size_toolbar2

0x1919,	// (0x0007dd02) aid_popup3_width_pane

0x0c30,	// (0x0007d019) aid_zoom_text_msg_primary

0x269b,	// (0x0007ea84) vorec_t7

0xa7cb,	// (0x00086bb4) bg_calc_paper_pane_g1_ParamLimits

0xa7d7,	// (0x00086bc0) bg_calc_paper_pane_g2_ParamLimits

0xa7e3,	// (0x00086bcc) bg_calc_paper_pane_g3_ParamLimits

0xa7ef,	// (0x00086bd8) bg_calc_paper_pane_g4_ParamLimits

0xa7fb,	// (0x00086be4) bg_calc_paper_pane_g5_ParamLimits

0x1e1b,	// (0x0007e204) bg_calc_paper_pane_g6_ParamLimits

0x1e2c,	// (0x0007e215) bg_calc_paper_pane_g7_ParamLimits

0x1e3d,	// (0x0007e226) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0008b4bc) bg_calc_paper_pane_g_ParamLimits

0x1e4e,	// (0x0007e237) calc_bg_paper_pane_g9_ParamLimits

0xa67e,	// (0x00086a67) image_qvga_pane_ParamLimits

0xa67e,	// (0x00086a67) image_qvga_pane

0xa6e0,	// (0x00086ac9) bg_popup_sub_pane_cp04_ParamLimits

0xb4c4,	// (0x000878ad) popup_mup_playback_window_g1_ParamLimits

0xb4d0,	// (0x000878b9) popup_mup_playback_window_t1_ParamLimits

0xb4e5,	// (0x000878ce) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0008b81f) popup_mup_playback_window_t_ParamLimits

0xa74d,	// (0x00086b36) main_mup2_pane_g3_ParamLimits

0xa74d,	// (0x00086b36) main_mup2_pane_g3

0x2974,	// (0x0007ed5d) popup_toolbar_window_cp04

0xb910,	// (0x00087cf9) popup_call2_audio_second_window_g3_ParamLimits

0xb910,	// (0x00087cf9) popup_call2_audio_second_window_g3

0xbd28,	// (0x00088111) popup_call2_audio_first_window_g4_ParamLimits

0xbd28,	// (0x00088111) popup_call2_audio_first_window_g4

0xc34f,	// (0x00088738) popup_call2_audio_in_window_g4_ParamLimits

0xc34f,	// (0x00088738) popup_call2_audio_in_window_g4

0x42ca,	// (0x000806b3) aid_area_sk_bg_cut_ParamLimits

0x42ca,	// (0x000806b3) aid_area_sk_bg_cut

0xb4fa,	// (0x000878e3) aid_area_sk_bg_cut_2_ParamLimits

0xb4fa,	// (0x000878e3) aid_area_sk_bg_cut_2

0xa017,	// (0x00086400) aid_placing_details_win

0xa017,	// (0x00086400) aid_placing_details_win_2

0xa74d,	// (0x00086b36) camera2_autofocus_pane_g1_ParamLimits

0x1b64,	// (0x0007df4d) popup_fixed_preview_cale_window_ParamLimits

0x1b64,	// (0x0007df4d) popup_fixed_preview_cale_window

0xb2e0,	// (0x000876c9) navi_slider_pane_g3

0xb2e9,	// (0x000876d2) navi_slider_pane_g4

0xb2f2,	// (0x000876db) navi_slider_pane_g5

0xb2e0,	// (0x000876c9) navi_slider_pane_g6

0x3e2b,	// (0x00080214) navi_slider_pane_g7

0xb3fb,	// (0x000877e4) mup_scale_pane_g3

0xb404,	// (0x000877ed) mup_scale_pane_g4

0xb40d,	// (0x000877f6) mup_scale_pane_g5

0x4048,	// (0x00080431) mup_scale_pane_g6

0x4051,	// (0x0008043a) mup_scale_pane_g7

0xa97f,	// (0x00086d68) cams2_slider_pane_g3

0xa97f,	// (0x00086d68) cams2_slider_pane_g4

0xa97f,	// (0x00086d68) cams2_slider_pane_g5

0xa97f,	// (0x00086d68) cams2_slider_pane_g6

0xa97f,	// (0x00086d68) cams2_slider_pane_g7

0xa97f,	// (0x00086d68) camera2_autofocus_pane_cp_g1

0xc633,	// (0x00088a1c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc633,	// (0x00088a1c) bg_popup_preview_window_pane_cp02

0xcd1e,	// (0x00089107) list_fp_cale_pane_ParamLimits

0xcd1e,	// (0x00089107) list_fp_cale_pane

0xcd2a,	// (0x00089113) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd2a,	// (0x00089113) popup_fixed_preview_cale_window_t1

0x556b,	// (0x00081954) popup_fixed_preview_cale_window_t2_ParamLimits

0x556b,	// (0x00081954) popup_fixed_preview_cale_window_t2

0x5580,	// (0x00081969) popup_fixed_preview_cale_window_t3_ParamLimits

0x5580,	// (0x00081969) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x0008bae0) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x0008bae0) popup_fixed_preview_cale_window_t

0x5595,	// (0x0008197e) list_single_fp_cale_pane_ParamLimits

0x5595,	// (0x0008197e) list_single_fp_cale_pane

0xcd48,	// (0x00089131) list_single_fp_cale_pane_g1_ParamLimits

0xcd48,	// (0x00089131) list_single_fp_cale_pane_g1

0xcd54,	// (0x0008913d) list_single_fp_cale_pane_g2_ParamLimits

0xcd54,	// (0x0008913d) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0008bae7) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0008bae7) list_single_fp_cale_pane_g

0xcd6d,	// (0x00089156) list_single_fp_cale_pane_t1_ParamLimits

0xcd6d,	// (0x00089156) list_single_fp_cale_pane_t1

0xcd7f,	// (0x00089168) list_single_fp_cale_pane_t2_ParamLimits

0xcd7f,	// (0x00089168) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x0008baee) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x0008baee) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa017,	// (0x00086400) main_dialer_pane

0xa017,	// (0x00086400) aid_cell_size_keypad

0xa017,	// (0x00086400) dialer_ne_pane

0xa017,	// (0x00086400) grid_dialer_command_1_pane

0xa017,	// (0x00086400) grid_dialer_command_2_pane

0xa017,	// (0x00086400) grid_dialer_keypad_pane

0xc7e5,	// (0x00088bce) bg_popup_call_pane_cp06_ParamLimits

0xc7e5,	// (0x00088bce) bg_popup_call_pane_cp06

0xc7e5,	// (0x00088bce) dialer_ne_clear_pane_ParamLimits

0xc7e5,	// (0x00088bce) dialer_ne_clear_pane

0xa97f,	// (0x00086d68) dialer_ne_pane_g1

0xb11d,	// (0x00087506) dialer_ne_pane_t1_ParamLimits

0xb11d,	// (0x00087506) dialer_ne_pane_t1

0xcf45,	// (0x0008932e) dialer_ne_pane_t2_ParamLimits

0xcf45,	// (0x0008932e) dialer_ne_pane_t2

0x55a5,	// (0x0008198e) dialer_ne_pane_t3_ParamLimits

0x55a5,	// (0x0008198e) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x0008baf3) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x0008baf3) dialer_ne_pane_t

0x55a5,	// (0x0008198e) dialer_ne_pane_t3_copy1_ParamLimits

0x55a5,	// (0x0008198e) dialer_ne_pane_t3_copy1

0xcdb2,	// (0x0008919b) cell_dialer_keypad_pane_ParamLimits

0xcdb2,	// (0x0008919b) cell_dialer_keypad_pane

0xa670,	// (0x00086a59) cell_dialer_command_1_pane_ParamLimits

0xa670,	// (0x00086a59) cell_dialer_command_1_pane

0xcdc9,	// (0x000891b2) cell_dialer_command_2_pane_ParamLimits

0xcdc9,	// (0x000891b2) cell_dialer_command_2_pane

0xa670,	// (0x00086a59) bg_button_pane_cp02_ParamLimits

0xa670,	// (0x00086a59) bg_button_pane_cp02

0xa74d,	// (0x00086b36) cell_dialer_keypad_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) cell_dialer_keypad_pane_g1

0xa670,	// (0x00086a59) bg_button_pane_cp03_ParamLimits

0xa670,	// (0x00086a59) bg_button_pane_cp03

0xa74d,	// (0x00086b36) cell_dialer_command_1_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) cell_dialer_command_1_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp04

0xa97f,	// (0x00086d68) cell_dialer_command_2_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp06

0xa97f,	// (0x00086d68) dialer_ne_clear_pane_g1

0x3d66,	// (0x0008014f) navi_pane_g2

0x3d94,	// (0x0008017d) navi_pane_g3

0x0002,

0xf339,	// (0x0008b722) navi_pane_g

0x3dbf,	// (0x000801a8) navi_pane_mv_g2

0x3de6,	// (0x000801cf) navi_pane_mv_g5

0x3dee,	// (0x000801d7) navi_pane_mv_t1

0xa7bf,	// (0x00086ba8) main_clock2_pane

0xa67e,	// (0x00086a67) main_clock2_list_pane_ParamLimits

0xa67e,	// (0x00086a67) main_clock2_list_pane

0x561a,	// (0x00081a03) main_clock2_pane_t1_ParamLimits

0x561a,	// (0x00081a03) main_clock2_pane_t1

0x5648,	// (0x00081a31) main_clock2_pane_t2_ParamLimits

0x5648,	// (0x00081a31) main_clock2_pane_t2

0x0004,

0xf716,	// (0x0008baff) main_clock2_pane_t_ParamLimits

0xf716,	// (0x0008baff) main_clock2_pane_t

0x56ad,	// (0x00081a96) popup_clock_analogue_window_cp03_ParamLimits

0x56ad,	// (0x00081a96) popup_clock_analogue_window_cp03

0x56cb,	// (0x00081ab4) popup_clock_digital_window_cp02_ParamLimits

0x56cb,	// (0x00081ab4) popup_clock_digital_window_cp02

0x5740,	// (0x00081b29) main_clock2_list_single_pane_ParamLimits

0x5740,	// (0x00081b29) main_clock2_list_single_pane

0xa95d,	// (0x00086d46) list_highlight_pane_cp05

0xce0a,	// (0x000891f3) main_clock2_list_single_pane_t1

0x2974,	// (0x0007ed5d) popup_toolbar_window_cp04_ParamLimits

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g2

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g3_ParamLimits

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g3

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g4

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g5_ParamLimits

0xa75b,	// (0x00086b44) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x0008ba43) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x0008ba43) camera2_autofocus_pane_g

0x4f1a,	// (0x00081303) camera2_autofocus_pane_cp_g2

0x4f22,	// (0x0008130b) camera2_autofocus_pane_cp_g3

0x4f2a,	// (0x00081313) camera2_autofocus_pane_cp_g4

0x4f32,	// (0x0008131b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0008baa9) camera2_autofocus_pane_cp_g

0xa017,	// (0x00086400) popup_dialer_spcha_window

0xa017,	// (0x00086400) bg_popup_sub_pane_cp07

0xa017,	// (0x00086400) list_spcha_pane

0xce18,	// (0x00089201) list_single_spcha_pane_ParamLimits

0xce18,	// (0x00089201) list_single_spcha_pane

0xa017,	// (0x00086400) list_highlight_pane_cp06

0xaeee,	// (0x000872d7) list_single_spcha_pane_t1

0xc0f9,	// (0x000884e2) popup_call2_audio_out_window_g4_ParamLimits

0xc0f9,	// (0x000884e2) popup_call2_audio_out_window_g4

0xa017,	// (0x00086400) main_imed2_pane

0x495f,	// (0x00080d48) popup_imed_adjust2_window

0x4972,	// (0x00080d5b) popup_imed_trans_window_ParamLimits

0x4972,	// (0x00080d5b) popup_imed_trans_window

0xc8a6,	// (0x00088c8f) popup_blid_sat_info2_window_t1

0xc8b4,	// (0x00088c9d) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0008b9d8) popup_blid_sat_info2_window_t

0x57f7,	// (0x00081be0) aid_size_cell_colour_35

0x5811,	// (0x00081bfa) aid_size_cell_colour_112

0x5828,	// (0x00081c11) aid_size_cell_effect

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp02

0xb111,	// (0x000874fa) heading_imed_pane

0x5842,	// (0x00081c2b) listscroll_imed_pane

0xce2a,	// (0x00089213) heading_imed_pane_g1

0xce32,	// (0x0008921b) heading_imed_pane_t1

0xce40,	// (0x00089229) grid_imed_colour_35_pane_ParamLimits

0xce40,	// (0x00089229) grid_imed_colour_35_pane

0x584e,	// (0x00081c37) grid_imed_effect_pane

0xce5c,	// (0x00089245) list_imed_aspect_pane

0x585e,	// (0x00081c47) scroll_pane_cp027_ParamLimits

0x585e,	// (0x00081c47) scroll_pane_cp027

0x586a,	// (0x00081c53) cell_imed_effect_pane_ParamLimits

0x586a,	// (0x00081c53) cell_imed_effect_pane

0xce64,	// (0x0008924d) cell_imed_colour_pane_ParamLimits

0xce64,	// (0x0008924d) cell_imed_colour_pane

0xceae,	// (0x00089297) cell_imed_colour_pane_g1_ParamLimits

0xceae,	// (0x00089297) cell_imed_colour_pane_g1

0xcebf,	// (0x000892a8) hgihlgiht_grid_pane_cp016_ParamLimits

0xcebf,	// (0x000892a8) hgihlgiht_grid_pane_cp016

0x5886,	// (0x00081c6f) cell_imed_effect_pane_g1

0x588e,	// (0x00081c77) grid_highlight_pane_cp017

0xced0,	// (0x000892b9) list_imed_single_pane_ParamLimits

0xced0,	// (0x000892b9) list_imed_single_pane

0xa017,	// (0x00086400) list_highlight_pane_cp07

0xcee4,	// (0x000892cd) list_imed_aspect_pane_comp1_t1

0xb5bd,	// (0x000879a6) bg_tb_trans_pane_cp05

0xcf06,	// (0x000892ef) popup_imed_adjust2_window_g1

0xcf2d,	// (0x00089316) popup_imed_adjust2_window_t1

0xcf62,	// (0x0008934b) slider_imed_adjust_pane

0xcf76,	// (0x0008935f) slider_imed_adjust_pane_g1

0xcf86,	// (0x0008936f) slider_imed_adjust_pane_g2

0xcf96,	// (0x0008937f) slider_imed_adjust_pane_g3

0xcfa7,	// (0x00089390) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x0008bb1c) slider_imed_adjust_pane_g

0x5897,	// (0x00081c80) aid_size_cell_clipart2

0xcfb8,	// (0x000893a1) grid_imed_clipart_pane

0xcfc2,	// (0x000893ab) scroll_pane_cp031

0x58a3,	// (0x00081c8c) cell_imed_clipart_pane_ParamLimits

0x58a3,	// (0x00081c8c) cell_imed_clipart_pane

0x58c1,	// (0x00081caa) cell_imed_clipart_pane_g1

0xa017,	// (0x00086400) grid_highlight_pane_cp014

0x55fc,	// (0x000819e5) main_clock2_pane_g1_ParamLimits

0x55fc,	// (0x000819e5) main_clock2_pane_g1

0x56e7,	// (0x00081ad0) aid_call2_pane_cp10

0x56f9,	// (0x00081ae2) aid_call_pane_cp10

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g1

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g2

0x570b,	// (0x00081af4) popup_clock_analogue_window_cp10_g3

0x570b,	// (0x00081af4) popup_clock_analogue_window_cp10_g4

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x0008bb0a) popup_clock_analogue_window_cp10_g

0x5721,	// (0x00081b0a) popup_clock_analogue_window_cp10_t1

0x5752,	// (0x00081b3b) clock_digital_number_pane_cp10_ParamLimits

0x5752,	// (0x00081b3b) clock_digital_number_pane_cp10

0x576c,	// (0x00081b55) clock_digital_number_pane_cp11_ParamLimits

0x576c,	// (0x00081b55) clock_digital_number_pane_cp11

0x5786,	// (0x00081b6f) clock_digital_number_pane_cp12_ParamLimits

0x5786,	// (0x00081b6f) clock_digital_number_pane_cp12

0x57a0,	// (0x00081b89) clock_digital_number_pane_cp13_ParamLimits

0x57a0,	// (0x00081b89) clock_digital_number_pane_cp13

0x57bc,	// (0x00081ba5) clock_digital_separator_pane_cp10_ParamLimits

0x57bc,	// (0x00081ba5) clock_digital_separator_pane_cp10

0x57d6,	// (0x00081bbf) popup_clock_digital_window_cp02_t1_ParamLimits

0x57d6,	// (0x00081bbf) popup_clock_digital_window_cp02_t1

0xa6d8,	// (0x00086ac1) clock_digital_number_pane_cp10_g1

0xa6d8,	// (0x00086ac1) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0008bb25) clock_digital_number_pane_cp10_g

0xa6d8,	// (0x00086ac1) clock_digital_separator_pane_cp10_g1

0xa6d8,	// (0x00086ac1) clock_digital_separator_pane_g2_cp10

0xb2a7,	// (0x00087690) navi_pane_vded_g4

0xb2b0,	// (0x00087699) navi_pane_vded_g5

0xb2b9,	// (0x000876a2) navi_pane_vded_t1

0xa017,	// (0x00086400) main_vded_pane

0x58ca,	// (0x00081cb3) main_vded_pane_g1

0x58d6,	// (0x00081cbf) main_vded_pane_g2

0x58e0,	// (0x00081cc9) main_vded_pane_g3

0x0002,

0xf741,	// (0x0008bb2a) main_vded_pane_g

0x58ea,	// (0x00081cd3) main_vded_pane_t1

0x58f8,	// (0x00081ce1) main_vded_pane_t2

0x0001,

0xf748,	// (0x0008bb31) main_vded_pane_t

0x5906,	// (0x00081cef) vded_slider_pane

0x5910,	// (0x00081cf9) vded_video_pane

0xcfca,	// (0x000893b3) vded_video_pane_g1

0x591c,	// (0x00081d05) vded_video_pane_g2

0xa97f,	// (0x00086d68) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0008bb36) vded_video_pane_g

0xcfd4,	// (0x000893bd) vded_slider_pane_g1

0xc7c3,	// (0x00088bac) vded_slider_pane_g2

0xcfdd,	// (0x000893c6) vded_slider_pane_g3

0xcfe6,	// (0x000893cf) vded_slider_pane_g4

0xcfef,	// (0x000893d8) vded_slider_pane_g5

0x0004,

0xf754,	// (0x0008bb3d) vded_slider_pane_g

0x54f5,	// (0x000818de) mup3_rocker_pane_ParamLimits

0x54f5,	// (0x000818de) mup3_rocker_pane

0x5925,	// (0x00081d0e) mup3_control_keys_pane_g1

0x592d,	// (0x00081d16) mup3_control_keys_pane_g2

0x5935,	// (0x00081d1e) mup3_control_keys_pane_g3

0x593d,	// (0x00081d26) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0008bb48) mup3_control_keys_pane_g

0x1b8c,	// (0x0007df75) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1b8c,	// (0x0007df75) popup_toolbar2_fixed_window_cp01

0x5511,	// (0x000818fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5511,	// (0x000818fa) popup_toolbar2_fixed_window_cp02

0xba82,	// (0x00087e6b) popup_call2_audio_second_window_t4_ParamLimits

0xba82,	// (0x00087e6b) popup_call2_audio_second_window_t4

0xbfbe,	// (0x000883a7) popup_call2_audio_first_window_t6_ParamLimits

0xbfbe,	// (0x000883a7) popup_call2_audio_first_window_t6

0xc1fc,	// (0x000885e5) popup_call2_audio_out_window_t6_ParamLimits

0xc1fc,	// (0x000885e5) popup_call2_audio_out_window_t6

0xa017,	// (0x00086400) main_vitu_pane

0xa67e,	// (0x00086a67) aid_size_cell_itu_ParamLimits

0xa67e,	// (0x00086a67) aid_size_cell_itu

0xa67e,	// (0x00086a67) bg_popup_window_pane_cp08_ParamLimits

0xa67e,	// (0x00086a67) bg_popup_window_pane_cp08

0xa67e,	// (0x00086a67) field_vitu_entry_pane_ParamLimits

0xa67e,	// (0x00086a67) field_vitu_entry_pane

0xa67e,	// (0x00086a67) grid_vitu_function_pane_ParamLimits

0xa67e,	// (0x00086a67) grid_vitu_function_pane

0xa67e,	// (0x00086a67) grid_vitu_itu_pane_ParamLimits

0xa67e,	// (0x00086a67) grid_vitu_itu_pane

0xa67e,	// (0x00086a67) cell_vitu_itu_pane_ParamLimits

0xa67e,	// (0x00086a67) cell_vitu_itu_pane

0xa67e,	// (0x00086a67) cell_vitu_function_pane_ParamLimits

0xa67e,	// (0x00086a67) cell_vitu_function_pane

0xa670,	// (0x00086a59) bg_popup_sub_pane_cp08_ParamLimits

0xa670,	// (0x00086a59) bg_popup_sub_pane_cp08

0xa999,	// (0x00086d82) field_vitu_entry_pane_t1_ParamLimits

0xa999,	// (0x00086d82) field_vitu_entry_pane_t1

0xcf45,	// (0x0008932e) field_vitu_entry_pane_t2_ParamLimits

0xcf45,	// (0x0008932e) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x0008bb51) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x0008bb51) field_vitu_entry_pane_t

0xc7e5,	// (0x00088bce) bg_button_pane_cp05_ParamLimits

0xc7e5,	// (0x00088bce) bg_button_pane_cp05

0xcff8,	// (0x000893e1) cell_vitu_itu_pane_g1

0xb5d9,	// (0x000879c2) cell_vitu_itu_pane_t1_ParamLimits

0xb5d9,	// (0x000879c2) cell_vitu_itu_pane_t1

0xb5d9,	// (0x000879c2) cell_vitu_itu_pane_t2_ParamLimits

0xb5d9,	// (0x000879c2) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x0008bb56) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x0008bb56) cell_vitu_itu_pane_t

0xa017,	// (0x00086400) bg_button_pane_cp07

0xa97f,	// (0x00086d68) cell_vitu_function_pane_g1

0x1cbd,	// (0x0007e0a6) main_calc_pane_g1

0x194d,	// (0x0007dd36) aid_visual_content_pane

0xa017,	// (0x00086400) main_vradio_pane

0xa75b,	// (0x00086b44) main_vradio_pane_g1_ParamLimits

0xa75b,	// (0x00086b44) main_vradio_pane_g1

0xa75b,	// (0x00086b44) main_vradio_pane_g2_ParamLimits

0xa75b,	// (0x00086b44) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0008bb5d) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0008bb5d) main_vradio_pane_g

0xb11d,	// (0x00087506) main_vradio_pane_t1_ParamLimits

0xb11d,	// (0x00087506) main_vradio_pane_t1

0xb11d,	// (0x00087506) main_vradio_pane_t2_ParamLimits

0xb11d,	// (0x00087506) main_vradio_pane_t2

0xb11d,	// (0x00087506) main_vradio_pane_t3_ParamLimits

0xb11d,	// (0x00087506) main_vradio_pane_t3

0x0002,

0xf779,	// (0x0008bb62) main_vradio_pane_t_ParamLimits

0xf779,	// (0x0008bb62) main_vradio_pane_t

0xa67e,	// (0x00086a67) vradio_rocker_control_pane_ParamLimits

0xa67e,	// (0x00086a67) vradio_rocker_control_pane

0xa67e,	// (0x00086a67) vradio_station_info_pane_ParamLimits

0xa67e,	// (0x00086a67) vradio_station_info_pane

0xa670,	// (0x00086a59) vradio_frequency_info_pane_ParamLimits

0xa670,	// (0x00086a59) vradio_frequency_info_pane

0xa97f,	// (0x00086d68) vradio_station_info_pane_g1

0xb5d9,	// (0x000879c2) vradio_station_info_pane_t1_ParamLimits

0xb5d9,	// (0x000879c2) vradio_station_info_pane_t1

0xb11d,	// (0x00087506) vradio_station_info_pane_t2_ParamLimits

0xb11d,	// (0x00087506) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0008bb69) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0008bb69) vradio_station_info_pane_t

0xa017,	// (0x00086400) vradio_tuning_pane

0x594d,	// (0x00081d36) vradio_rocker_control_pane_g1

0xd014,	// (0x000893fd) vradio_rocker_control_pane_g2

0x5955,	// (0x00081d3e) vradio_rocker_control_pane_g3

0x595d,	// (0x00081d46) vradio_rocker_control_pane_g4

0x5967,	// (0x00081d50) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x0008bb6e) vradio_rocker_control_pane_g

0xa97f,	// (0x00086d68) vradio_frequency_info_pane_g1

0xa999,	// (0x00086d82) vradio_frequency_info_pane_t1_ParamLimits

0xa999,	// (0x00086d82) vradio_frequency_info_pane_t1

0x596f,	// (0x00081d58) vradio_tuning_pane_g1

0x597c,	// (0x00081d65) vradio_tuning_pane_t1

0x198e,	// (0x0007dd77) area_side_right_pane_ParamLimits

0x198e,	// (0x0007dd77) area_side_right_pane

0xc5fa,	// (0x000889e3) status_small_pane_g1

0xc602,	// (0x000889eb) status_small_pane_g2

0xc60b,	// (0x000889f4) status_small_pane_g3

0xc614,	// (0x000889fd) status_small_pane_g4

0x0003,

0xf551,	// (0x0008b93a) status_small_pane_g

0xc61d,	// (0x00088a06) status_small_pane_t1

0xa017,	// (0x00086400) main_video3_pane

0xd01c,	// (0x00089405) cams_zoom_vslider_pane

0xd024,	// (0x0008940d) image3_wide_pane_ParamLimits

0xd024,	// (0x0008940d) image3_wide_pane

0xd03e,	// (0x00089427) image3_wide_small_pane

0xd04a,	// (0x00089433) main_video3_pane_g1_ParamLimits

0xd04a,	// (0x00089433) main_video3_pane_g1

0xd066,	// (0x0008944f) main_video3_pane_g2_ParamLimits

0xd066,	// (0x0008944f) main_video3_pane_g2

0x0001,

0xf790,	// (0x0008bb79) main_video3_pane_g_ParamLimits

0xf790,	// (0x0008bb79) main_video3_pane_g

0xd082,	// (0x0008946b) main_video3_pane_t1_ParamLimits

0xd082,	// (0x0008946b) main_video3_pane_t1

0xd0ad,	// (0x00089496) main_video3_pane_t2_ParamLimits

0xd0ad,	// (0x00089496) main_video3_pane_t2

0xd0da,	// (0x000894c3) main_video3_pane_t3_ParamLimits

0xd0da,	// (0x000894c3) main_video3_pane_t3

0x0002,

0xf795,	// (0x0008bb7e) main_video3_pane_t_ParamLimits

0xf795,	// (0x0008bb7e) main_video3_pane_t

0xd107,	// (0x000894f0) cams_zoom_vslider_pane_g1

0xd110,	// (0x000894f9) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x0008bb85) cams_zoom_vslider_pane_g

0xd118,	// (0x00089501) small_slider_vertical_pane

0xa97f,	// (0x00086d68) small_slider_vertical_pane_g1

0xa97f,	// (0x00086d68) small_slider_vertical_pane_g2

0xd120,	// (0x00089509) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0008bb8a) small_slider_vertical_pane_g

0xa017,	// (0x00086400) main_hwr_training_pane

0xd129,	// (0x00089512) hwr_training_instruct_pane_ParamLimits

0xd129,	// (0x00089512) hwr_training_instruct_pane

0x598b,	// (0x00081d74) hwr_training_navi_pane_ParamLimits

0x598b,	// (0x00081d74) hwr_training_navi_pane

0x59a5,	// (0x00081d8e) hwr_training_write_pane_ParamLimits

0x59a5,	// (0x00081d8e) hwr_training_write_pane

0xa017,	// (0x00086400) bg_frame_shadow_pane

0xd160,	// (0x00089549) hwr_training_write_pane_g1

0xd168,	// (0x00089551) hwr_training_write_pane_g2

0xd170,	// (0x00089559) hwr_training_write_pane_g3

0xd178,	// (0x00089561) hwr_training_write_pane_g4

0xd180,	// (0x00089569) hwr_training_write_pane_g5

0xd188,	// (0x00089571) hwr_training_write_pane_g6

0xd190,	// (0x00089579) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x0008bb91) hwr_training_write_pane_g

0x59dd,	// (0x00081dc6) hwr_training_navi_pane_g1_ParamLimits

0x59dd,	// (0x00081dc6) hwr_training_navi_pane_g1

0x59ef,	// (0x00081dd8) hwr_training_navi_pane_g2_ParamLimits

0x59ef,	// (0x00081dd8) hwr_training_navi_pane_g2

0x5a01,	// (0x00081dea) hwr_training_navi_pane_g3_ParamLimits

0x5a01,	// (0x00081dea) hwr_training_navi_pane_g3

0x5a11,	// (0x00081dfa) hwr_training_navi_pane_g4_ParamLimits

0x5a11,	// (0x00081dfa) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x0008bba0) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x0008bba0) hwr_training_navi_pane_g

0x5a2b,	// (0x00081e14) hwr_training_navi_pane_t1

0x5a39,	// (0x00081e22) list_single_hwr_training_instruct_pane_ParamLimits

0x5a39,	// (0x00081e22) list_single_hwr_training_instruct_pane

0xd198,	// (0x00089581) list_single_hwr_training_instruct_pane_t1

0xc9ad,	// (0x00088d96) bg_frame_shadow_pane_g1

0xd1a7,	// (0x00089590) bg_frame_shadow_pane_g2

0xd1af,	// (0x00089598) bg_frame_shadow_pane_g3

0xd1b7,	// (0x000895a0) bg_frame_shadow_pane_g4

0xd1bf,	// (0x000895a8) bg_frame_shadow_pane_g5

0xd1c7,	// (0x000895b0) bg_frame_shadow_pane_g6

0xd1cf,	// (0x000895b8) bg_frame_shadow_pane_g7

0xa86e,	// (0x00086c57) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0008bbab) bg_frame_shadow_pane_g

0xa017,	// (0x00086400) main_video_tele_dialer_pane

0x5a52,	// (0x00081e3b) aid_size_cell_video_keypad_ParamLimits

0x5a52,	// (0x00081e3b) aid_size_cell_video_keypad

0x5a62,	// (0x00081e4b) grid_video_dialer_keypad_pane_ParamLimits

0x5a62,	// (0x00081e4b) grid_video_dialer_keypad_pane

0x5a94,	// (0x00081e7d) video_down_pane_cp_ParamLimits

0x5a94,	// (0x00081e7d) video_down_pane_cp

0x5abe,	// (0x00081ea7) cell_video_dialer_keypad_pane_ParamLimits

0x5abe,	// (0x00081ea7) cell_video_dialer_keypad_pane

0xd1d7,	// (0x000895c0) bg_button_pane_cp08_ParamLimits

0xd1d7,	// (0x000895c0) bg_button_pane_cp08

0x5ad5,	// (0x00081ebe) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5ad5,	// (0x00081ebe) cell_video_dialer_keypad_pane_g1

0x54e9,	// (0x000818d2) mup3_rocker2_pane_ParamLimits

0x54e9,	// (0x000818d2) mup3_rocker2_pane

0xa97f,	// (0x00086d68) mup3_rocker2_pane_g1

0x48c3,	// (0x00080cac) main_dialer2_pane

0xa017,	// (0x00086400) main_mp4_pane

0x5b2e,	// (0x00081f17) main_mp4_pane_g1_ParamLimits

0x5b2e,	// (0x00081f17) main_mp4_pane_g1

0x5b3c,	// (0x00081f25) main_mp4_pane_g2_ParamLimits

0x5b3c,	// (0x00081f25) main_mp4_pane_g2

0x5b4a,	// (0x00081f33) main_mp4_pane_g3_ParamLimits

0x5b4a,	// (0x00081f33) main_mp4_pane_g3

0x5b9d,	// (0x00081f86) main_mp4_pane_g4_ParamLimits

0x5b9d,	// (0x00081f86) main_mp4_pane_g4

0x5bcb,	// (0x00081fb4) main_mp4_pane_g5_ParamLimits

0x5bcb,	// (0x00081fb4) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0008bbcb) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0008bbcb) main_mp4_pane_g

0x5c3f,	// (0x00082028) main_mp4_pane_t1_ParamLimits

0x5c3f,	// (0x00082028) main_mp4_pane_t1

0x5c9b,	// (0x00082084) main_mp4_pane_t2_ParamLimits

0x5c9b,	// (0x00082084) main_mp4_pane_t2

0xd1e3,	// (0x000895cc) main_mp4_pane_t3_ParamLimits

0xd1e3,	// (0x000895cc) main_mp4_pane_t3

0x5ced,	// (0x000820d6) main_mp4_pane_t4_ParamLimits

0x5ced,	// (0x000820d6) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0008bbdc) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0008bbdc) main_mp4_pane_t

0x5d2d,	// (0x00082116) mp4_progress_pane_ParamLimits

0x5d2d,	// (0x00082116) mp4_progress_pane

0x5d77,	// (0x00082160) mp4_rocker_pane_ParamLimits

0x5d77,	// (0x00082160) mp4_rocker_pane

0xd211,	// (0x000895fa) mp4_progress_pane_t1

0xd22a,	// (0x00089613) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0008bbe5) mp4_progress_pane_t

0xd243,	// (0x0008962c) mup_progress_pane_cp04

0xa97f,	// (0x00086d68) mp4_rocker_pane_g1

0x5d99,	// (0x00082182) aid_cell_size_keypad2_ParamLimits

0x5d99,	// (0x00082182) aid_cell_size_keypad2

0x5da9,	// (0x00082192) dialer2_ne_pane_ParamLimits

0x5da9,	// (0x00082192) dialer2_ne_pane

0x5db5,	// (0x0008219e) grid_dialer2_keypad_pane_ParamLimits

0x5db5,	// (0x0008219e) grid_dialer2_keypad_pane

0xd256,	// (0x0008963f) bg_popup_call_pane_cp07_ParamLimits

0xd256,	// (0x0008963f) bg_popup_call_pane_cp07

0x5dc3,	// (0x000821ac) dialer2_ne_pane_t1_ParamLimits

0x5dc3,	// (0x000821ac) dialer2_ne_pane_t1

0x5de8,	// (0x000821d1) cell_dialer2_keypad_pane_ParamLimits

0x5de8,	// (0x000821d1) cell_dialer2_keypad_pane

0xd276,	// (0x0008965f) bg_button_pane_pane_cp04_ParamLimits

0xd276,	// (0x0008965f) bg_button_pane_pane_cp04

0x5dff,	// (0x000821e8) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dff,	// (0x000821e8) cell_dialer2_keypad_pane_g1

0x2846,	// (0x0007ec2f) aid_placing_vt_set_content_ParamLimits

0x2846,	// (0x0007ec2f) aid_placing_vt_set_content

0x286e,	// (0x0007ec57) aid_placing_vt_set_title_ParamLimits

0x286e,	// (0x0007ec57) aid_placing_vt_set_title

0xa017,	// (0x00086400) main_image3_pane

0x5e99,	// (0x00082282) area_side_right_pane_cp01_ParamLimits

0x5e99,	// (0x00082282) area_side_right_pane_cp01

0xa769,	// (0x00086b52) main_image3_pane_g1_ParamLimits

0xa769,	// (0x00086b52) main_image3_pane_g1

0x5ec8,	// (0x000822b1) main_image3_pane_g2_ParamLimits

0x5ec8,	// (0x000822b1) main_image3_pane_g2

0x5ee1,	// (0x000822ca) main_image3_pane_g3_ParamLimits

0x5ee1,	// (0x000822ca) main_image3_pane_g3

0x5efa,	// (0x000822e3) main_image3_pane_g4_ParamLimits

0x5efa,	// (0x000822e3) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0008bbf4) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0008bbf4) main_image3_pane_g

0x5f13,	// (0x000822fc) main_image3_pane_t1_ParamLimits

0x5f13,	// (0x000822fc) main_image3_pane_t1

0x5f38,	// (0x00082321) main_image3_pane_t2_ParamLimits

0x5f38,	// (0x00082321) main_image3_pane_t2

0x5f57,	// (0x00082340) main_image3_pane_t3_ParamLimits

0x5f57,	// (0x00082340) main_image3_pane_t3

0x0003,

0xf814,	// (0x0008bbfd) main_image3_pane_t_ParamLimits

0xf814,	// (0x0008bbfd) main_image3_pane_t

0xa67e,	// (0x00086a67) grid_sctrl_middle_pane_cp01_ParamLimits

0xa67e,	// (0x00086a67) grid_sctrl_middle_pane_cp01

0x5fb8,	// (0x000823a1) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fb8,	// (0x000823a1) cell_sctrl_middle_pane_cp01

0x5fc9,	// (0x000823b2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fc9,	// (0x000823b2) cell_sctrl_middle_pane_cp01_g1

0xa017,	// (0x00086400) main_call4_pane

0x5fd6,	// (0x000823bf) aid_size_button_call4_ParamLimits

0x5fd6,	// (0x000823bf) aid_size_button_call4

0x600c,	// (0x000823f5) call4_windows_pane_ParamLimits

0x600c,	// (0x000823f5) call4_windows_pane

0x6021,	// (0x0008240a) grid_call4_button_pane_ParamLimits

0x6021,	// (0x0008240a) grid_call4_button_pane

0x6051,	// (0x0008243a) call4_windows_conf_pane

0x606a,	// (0x00082453) popup_call4_audio_first_window_ParamLimits

0x606a,	// (0x00082453) popup_call4_audio_first_window

0x60ba,	// (0x000824a3) popup_call4_audio_second_window_ParamLimits

0x60ba,	// (0x000824a3) popup_call4_audio_second_window

0x60d3,	// (0x000824bc) popup_call4_audio_wait_window_ParamLimits

0x60d3,	// (0x000824bc) popup_call4_audio_wait_window

0x60e1,	// (0x000824ca) cell_call4_button_pane_ParamLimits

0x60e1,	// (0x000824ca) cell_call4_button_pane

0x6104,	// (0x000824ed) bg_button_pane_cp09_ParamLimits

0x6104,	// (0x000824ed) bg_button_pane_cp09

0x6110,	// (0x000824f9) cell_call4_button_pane_g1_ParamLimits

0x6110,	// (0x000824f9) cell_call4_button_pane_g1

0x611d,	// (0x00082506) cell_call4_button_pane_t1_ParamLimits

0x611d,	// (0x00082506) cell_call4_button_pane_t1

0xd28a,	// (0x00089673) popup_call4_audio_conf_window_ParamLimits

0xd28a,	// (0x00089673) popup_call4_audio_conf_window

0x551e,	// (0x00081907) mup3_progress_pane_t1_ParamLimits

0x553c,	// (0x00081925) mup3_progress_pane_t2_ParamLimits

0xccdb,	// (0x000890c4) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x0008bad2) mup3_progress_pane_t_ParamLimits

0xccf8,	// (0x000890e1) mup_progress_pane_cp03_ParamLimits

0x5945,	// (0x00081d2e) mup3_control_keys_pane_g4_copy1

0x5d5b,	// (0x00082144) mp4_rocker2_pane_ParamLimits

0x5d5b,	// (0x00082144) mp4_rocker2_pane

0xd2a4,	// (0x0008968d) mp4_rocker2_pane_g1

0xd2ac,	// (0x00089695) mp4_rocker2_pane_g2

0x6161,	// (0x0008254a) mp4_rocker2_pane_g3

0x6169,	// (0x00082552) mp4_rocker2_pane_g4

0x6171,	// (0x0008255a) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0008bc06) mp4_rocker2_pane_g

0xa017,	// (0x00086400) main_camera4_pane

0xa017,	// (0x00086400) main_video4_pane

0x5a70,	// (0x00081e59) main_video_tele_dialer_pane_t1_ParamLimits

0x5a70,	// (0x00081e59) main_video_tele_dialer_pane_t1

0x5a82,	// (0x00081e6b) main_video_tele_dialer_pane_t2_ParamLimits

0x5a82,	// (0x00081e6b) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0008bbbc) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0008bbbc) main_video_tele_dialer_pane_t

0x6191,	// (0x0008257a) cam4_autofocus_pane_ParamLimits

0x6191,	// (0x0008257a) cam4_autofocus_pane

0x61a9,	// (0x00082592) cam4_image_uncrop_pane_ParamLimits

0x61a9,	// (0x00082592) cam4_image_uncrop_pane

0x61c2,	// (0x000825ab) cam4_indicators_pane_ParamLimits

0x61c2,	// (0x000825ab) cam4_indicators_pane

0x61de,	// (0x000825c7) main_camera4_pane_g1_ParamLimits

0x61de,	// (0x000825c7) main_camera4_pane_g1

0x61ea,	// (0x000825d3) main_camera4_pane_g2_ParamLimits

0x61ea,	// (0x000825d3) main_camera4_pane_g2

0x61ea,	// (0x000825d3) main_camera4_pane_g3_ParamLimits

0x61ea,	// (0x000825d3) main_camera4_pane_g3

0x61f6,	// (0x000825df) main_camera4_pane_g4_ParamLimits

0x61f6,	// (0x000825df) main_camera4_pane_g4

0x6202,	// (0x000825eb) main_camera4_pane_g5_ParamLimits

0x6202,	// (0x000825eb) main_camera4_pane_g5

0x0005,

0xf828,	// (0x0008bc11) main_camera4_pane_g_ParamLimits

0xf828,	// (0x0008bc11) main_camera4_pane_g

0x621c,	// (0x00082605) main_camera4_pane_t1_ParamLimits

0x621c,	// (0x00082605) main_camera4_pane_t1

0xa74d,	// (0x00086b36) bg_tb_trans_pane_cp06

0x626e,	// (0x00082657) cam4_indicators_pane_g1

0x627f,	// (0x00082668) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x0008bc2c) cam4_indicators_pane_g

0x6297,	// (0x00082680) cam4_indicators_pane_t1

0x62c1,	// (0x000826aa) main_video4_pane_g1_ParamLimits

0x62c1,	// (0x000826aa) main_video4_pane_g1

0x62cd,	// (0x000826b6) main_video4_pane_g2_ParamLimits

0x62cd,	// (0x000826b6) main_video4_pane_g2

0x62d9,	// (0x000826c2) main_video4_pane_g3_ParamLimits

0x62d9,	// (0x000826c2) main_video4_pane_g3

0x62e5,	// (0x000826ce) main_video4_pane_g4_ParamLimits

0x62e5,	// (0x000826ce) main_video4_pane_g4

0x0004,

0xf84a,	// (0x0008bc33) main_video4_pane_g_ParamLimits

0xf84a,	// (0x0008bc33) main_video4_pane_g

0x6307,	// (0x000826f0) vid4_indicators_pane_ParamLimits

0x6307,	// (0x000826f0) vid4_indicators_pane

0x6326,	// (0x0008270f) video4_image_uncrop_cif_pane_ParamLimits

0x6326,	// (0x0008270f) video4_image_uncrop_cif_pane

0x6335,	// (0x0008271e) video4_image_uncrop_nhd_pane_ParamLimits

0x6335,	// (0x0008271e) video4_image_uncrop_nhd_pane

0x61a9,	// (0x00082592) video4_image_uncrop_vga_pane_ParamLimits

0x61a9,	// (0x00082592) video4_image_uncrop_vga_pane

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp07

0x634e,	// (0x00082737) vid4_indicators_pane_g1

0x6364,	// (0x0008274d) vid4_indicators_pane_g2

0x6378,	// (0x00082761) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x0008bc3e) vid4_indicators_pane_g

0x63a9,	// (0x00082792) vid4_indicators_pane_t1

0x63c0,	// (0x000827a9) cam4_autofocus_pane_g1

0x63c8,	// (0x000827b1) cam4_autofocus_pane_g2

0x63d0,	// (0x000827b9) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0008bc49) cam4_autofocus_pane_g

0x63d8,	// (0x000827c1) cam4_autofocus_pane_g3_copy1

0x5aa2,	// (0x00081e8b) video_down_pane_cp_t1

0x5ab0,	// (0x00081e99) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x0008bbc1) video_down_pane_cp_t

0xa67e,	// (0x00086a67) popup_vitu2_window_ParamLimits

0xa67e,	// (0x00086a67) popup_vitu2_window

0x63e0,	// (0x000827c9) aid_size_cell2_itu2_ParamLimits

0x63e0,	// (0x000827c9) aid_size_cell2_itu2

0x6402,	// (0x000827eb) aid_size_cell_itu2_ParamLimits

0x6402,	// (0x000827eb) aid_size_cell_itu2

0xd256,	// (0x0008963f) bg_popup_window_pane_cp09_ParamLimits

0xd256,	// (0x0008963f) bg_popup_window_pane_cp09

0x6446,	// (0x0008282f) field_vitu2_entry_pane_ParamLimits

0x6446,	// (0x0008282f) field_vitu2_entry_pane

0x6466,	// (0x0008284f) grid_vitu2_function_pane_ParamLimits

0x6466,	// (0x0008284f) grid_vitu2_function_pane

0x64aa,	// (0x00082893) grid_vitu2_itu_pane_ParamLimits

0x64aa,	// (0x00082893) grid_vitu2_itu_pane

0x6520,	// (0x00082909) cell_vitu2_itu_pane_ParamLimits

0x6520,	// (0x00082909) cell_vitu2_itu_pane

0x653b,	// (0x00082924) cell_vitu2_function_pane_ParamLimits

0x653b,	// (0x00082924) cell_vitu2_function_pane

0xd2b4,	// (0x0008969d) bg_popup_call_pane_cp08_ParamLimits

0xd2b4,	// (0x0008969d) bg_popup_call_pane_cp08

0xd2cb,	// (0x000896b4) field_vitu2_entry_pane_g1

0xd2d7,	// (0x000896c0) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x0008bc50) field_vitu2_entry_pane_g

0x0d64,	// (0x0007d14d) field_vitu2_entry_pane_t1_ParamLimits

0x0d64,	// (0x0007d14d) field_vitu2_entry_pane_t1

0x0d93,	// (0x0007d17c) field_vitu2_entry_pane_t2_ParamLimits

0x0d93,	// (0x0007d17c) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x0008bc57) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x0008bc57) field_vitu2_entry_pane_t

0x4c15,	// (0x00080ffe) bg_button_pane_cp010_ParamLimits

0x4c15,	// (0x00080ffe) bg_button_pane_cp010

0x657f,	// (0x00082968) cell_vitu2_itu_pane_g1

0x65a5,	// (0x0008298e) cell_vitu2_itu_pane_t1_ParamLimits

0x65a5,	// (0x0008298e) cell_vitu2_itu_pane_t1

0x0db0,	// (0x0007d199) cell_vitu2_itu_pane_t2_ParamLimits

0x0db0,	// (0x0007d199) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x0008bc61) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x0008bc61) cell_vitu2_itu_pane_t

0xa670,	// (0x00086a59) bg_button_pane_cp011

0x65f1,	// (0x000829da) cell_vitu2_function_pane_g1

0xa017,	// (0x00086400) main_myfav_hc_pane

0x5f99,	// (0x00082382) popup_image3_note_pane_ParamLimits

0x5f99,	// (0x00082382) popup_image3_note_pane

0x5fa7,	// (0x00082390) popup_image3_tool_bar_pane_ParamLimits

0x5fa7,	// (0x00082390) popup_image3_tool_bar_pane

0x0e26,	// (0x0007d20f) cell_vitu2_itu_pane_t3_ParamLimits

0x0e26,	// (0x0007d20f) cell_vitu2_itu_pane_t3

0xa017,	// (0x00086400) bg_popup_trans_pane

0xd2eb,	// (0x000896d4) grid_image3_tool_bar_pane

0xd2f5,	// (0x000896de) bg_popup_trans_pane_g1

0xabb7,	// (0x00086fa0) bg_popup_trans_pane_g2

0xd2fd,	// (0x000896e6) bg_popup_trans_pane_g3

0xd305,	// (0x000896ee) bg_popup_trans_pane_g4

0xd30d,	// (0x000896f6) bg_popup_trans_pane_g5

0xd315,	// (0x000896fe) bg_popup_trans_pane_g6

0xd31d,	// (0x00089706) bg_popup_trans_pane_g7

0xd325,	// (0x0008970e) bg_popup_trans_pane_g8

0xab97,	// (0x00086f80) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0008bc68) bg_popup_trans_pane_g

0xd32d,	// (0x00089716) cell_image3_tool_bar_pane_ParamLimits

0xd32d,	// (0x00089716) cell_image3_tool_bar_pane

0xa97f,	// (0x00086d68) cell_image3_tool_bar_pane_g1

0xa017,	// (0x00086400) bg_popup_trans_pane_cp1

0xd343,	// (0x0008972c) popup_image3_note_pane_t1

0xd351,	// (0x0008973a) popup_image3_note_pane_t2

0xd35f,	// (0x00089748) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0008bc7b) popup_image3_note_pane_t

0xd36f,	// (0x00089758) popup_image3_note_pane_t3_copy1

0x6605,	// (0x000829ee) bg_myfav_hc_instruction_pane_ParamLimits

0x6605,	// (0x000829ee) bg_myfav_hc_instruction_pane

0x661d,	// (0x00082a06) cell_myfav_contact_pane_ParamLimits

0x661d,	// (0x00082a06) cell_myfav_contact_pane

0x6637,	// (0x00082a20) cell_myfav_contact_pane_cp1_ParamLimits

0x6637,	// (0x00082a20) cell_myfav_contact_pane_cp1

0x664f,	// (0x00082a38) cell_myfav_contact_pane_cp2_ParamLimits

0x664f,	// (0x00082a38) cell_myfav_contact_pane_cp2

0x6667,	// (0x00082a50) cell_myfav_contact_pane_cp3_ParamLimits

0x6667,	// (0x00082a50) cell_myfav_contact_pane_cp3

0x667e,	// (0x00082a67) cell_myfav_contact_pane_cp4_ParamLimits

0x667e,	// (0x00082a67) cell_myfav_contact_pane_cp4

0x6694,	// (0x00082a7d) cell_myfav_contact_pane_cp5_ParamLimits

0x6694,	// (0x00082a7d) cell_myfav_contact_pane_cp5

0x66a8,	// (0x00082a91) cell_myfav_contact_pane_cp6_ParamLimits

0x66a8,	// (0x00082a91) cell_myfav_contact_pane_cp6

0x66bc,	// (0x00082aa5) cell_myfav_contact_pane_cp7_ParamLimits

0x66bc,	// (0x00082aa5) cell_myfav_contact_pane_cp7

0xd37d,	// (0x00089766) listscroll_gen_pane_cp05

0x66d4,	// (0x00082abd) main_myfav_hc_pane_g1_ParamLimits

0x66d4,	// (0x00082abd) main_myfav_hc_pane_g1

0x66ee,	// (0x00082ad7) main_myfav_hc_pane_g2_ParamLimits

0x66ee,	// (0x00082ad7) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x0008bc82) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x0008bc82) main_myfav_hc_pane_g

0x6720,	// (0x00082b09) main_myfav_hc_pane_t1_ParamLimits

0x6720,	// (0x00082b09) main_myfav_hc_pane_t1

0xd386,	// (0x0008976f) main_myfav_hc_pane_t2_ParamLimits

0xd386,	// (0x0008976f) main_myfav_hc_pane_t2

0xd398,	// (0x00089781) main_myfav_hc_pane_t3_ParamLimits

0xd398,	// (0x00089781) main_myfav_hc_pane_t3

0x6737,	// (0x00082b20) main_myfav_hc_pane_t4_ParamLimits

0x6737,	// (0x00082b20) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0008bc89) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0008bc89) main_myfav_hc_pane_t

0xa97f,	// (0x00086d68) bg_myfav_hc_instruction_pane_g1

0xd3aa,	// (0x00089793) cell_myfav_contact_pane_g1_ParamLimits

0xd3aa,	// (0x00089793) cell_myfav_contact_pane_g1

0xd3aa,	// (0x00089793) cell_myfav_contact_pane_g2_ParamLimits

0xd3aa,	// (0x00089793) cell_myfav_contact_pane_g2

0xd3b6,	// (0x0008979f) cell_myfav_contact_pane_g3_ParamLimits

0xd3b6,	// (0x0008979f) cell_myfav_contact_pane_g3

0xa75b,	// (0x00086b44) cell_myfav_contact_pane_g4_ParamLimits

0xa75b,	// (0x00086b44) cell_myfav_contact_pane_g4

0xd3c3,	// (0x000897ac) cell_myfav_contact_pane_g5_ParamLimits

0xd3c3,	// (0x000897ac) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x0008bc94) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x0008bc94) cell_myfav_contact_pane_g

0x6708,	// (0x00082af1) main_myfav_hc_pane_g3_ParamLimits

0x6708,	// (0x00082af1) main_myfav_hc_pane_g3

0x1ac8,	// (0x0007deb1) popup_adpt_find_window

0x6761,	// (0x00082b4a) afind_page_pane_ParamLimits

0x6761,	// (0x00082b4a) afind_page_pane

0x676e,	// (0x00082b57) aid_size_cell_afind_ParamLimits

0x676e,	// (0x00082b57) aid_size_cell_afind

0x6788,	// (0x00082b71) bg_popup_sub_pane_cp09_ParamLimits

0x6788,	// (0x00082b71) bg_popup_sub_pane_cp09

0x6799,	// (0x00082b82) find_pane_cp01_ParamLimits

0x6799,	// (0x00082b82) find_pane_cp01

0xd3cf,	// (0x000897b8) grid_afind_control_pane_ParamLimits

0xd3cf,	// (0x000897b8) grid_afind_control_pane

0x67ac,	// (0x00082b95) grid_afind_pane_ParamLimits

0x67ac,	// (0x00082b95) grid_afind_pane

0x67c8,	// (0x00082bb1) cell_afind_pane_ParamLimits

0x67c8,	// (0x00082bb1) cell_afind_pane

0xa97f,	// (0x00086d68) afind_page_pane_g1

0x6810,	// (0x00082bf9) afind_page_pane_g2

0x6818,	// (0x00082c01) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x0008bc9f) afind_page_pane_g

0x6820,	// (0x00082c09) afind_page_pane_t1

0xd421,	// (0x0008980a) cell_afind_grid_control_pane_ParamLimits

0xd421,	// (0x0008980a) cell_afind_grid_control_pane

0xd276,	// (0x0008965f) bg_button_pane_cp69_ParamLimits

0xd276,	// (0x0008965f) bg_button_pane_cp69

0x682e,	// (0x00082c17) cell_afind_pane_g1_ParamLimits

0x682e,	// (0x00082c17) cell_afind_pane_g1

0x683b,	// (0x00082c24) cell_afind_pane_t1_ParamLimits

0x683b,	// (0x00082c24) cell_afind_pane_t1

0xa989,	// (0x00086d72) bg_button_pane_cp72

0xd430,	// (0x00089819) cell_afind_grid_control_pane_g1

0x43f7,	// (0x000807e0) aid_image_placing_area_ParamLimits

0x43f7,	// (0x000807e0) aid_image_placing_area

0xa74d,	// (0x00086b36) field_vitu_entry_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) field_vitu_entry_pane_g1

0xa74d,	// (0x00086b36) field_vitu_entry_pane_g2_ParamLimits

0xa74d,	// (0x00086b36) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0008b5aa) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0008b5aa) field_vitu_entry_pane_g

0xcff8,	// (0x000893e1) cell_vitu_itu_pane_g1_ParamLimits

0xcf45,	// (0x0008932e) cell_vitu_itu_pane_t3_ParamLimits

0xcf45,	// (0x0008932e) cell_vitu_itu_pane_t3

0xd211,	// (0x000895fa) mp4_progress_pane_t1_ParamLimits

0xd22a,	// (0x00089613) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0008bbe5) mp4_progress_pane_t_ParamLimits

0xd243,	// (0x0008962c) mup_progress_pane_cp04_ParamLimits

0x674b,	// (0x00082b34) main_myfav_hc_pane_t5_ParamLimits

0x674b,	// (0x00082b34) main_myfav_hc_pane_t5

0x0c38,	// (0x0007d021) aid_zoom_text_primary

0x1ac8,	// (0x0007deb1) popup_adpt_find_window_ParamLimits

0xa670,	// (0x00086a59) main_cam_set_pane

0x61d0,	// (0x000825b9) cam4_zoom_pane_ParamLimits

0x61d0,	// (0x000825b9) cam4_zoom_pane

0x684d,	// (0x00082c36) main_cam_set_pane_g1_ParamLimits

0x684d,	// (0x00082c36) main_cam_set_pane_g1

0x685b,	// (0x00082c44) main_cam_set_pane_g2_ParamLimits

0x685b,	// (0x00082c44) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x0008bca6) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x0008bca6) main_cam_set_pane_g

0x6867,	// (0x00082c50) main_cam_set_pane_t1_ParamLimits

0x6867,	// (0x00082c50) main_cam_set_pane_t1

0x6883,	// (0x00082c6c) main_cset_listscroll_pane_ParamLimits

0x6883,	// (0x00082c6c) main_cset_listscroll_pane

0x68b7,	// (0x00082ca0) main_cset_slider_pane_ParamLimits

0x68b7,	// (0x00082ca0) main_cset_slider_pane

0xd441,	// (0x0008982a) main_cset_list_pane_ParamLimits

0xd441,	// (0x0008982a) main_cset_list_pane

0xd451,	// (0x0008983a) scroll_pane_cp028

0x68d8,	// (0x00082cc1) aid_area_touch_slider

0x68f4,	// (0x00082cdd) cset_slider_pane

0x6917,	// (0x00082d00) main_cset_slider_pane_g1

0x692c,	// (0x00082d15) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0008bcab) main_cset_slider_pane_g

0xd48a,	// (0x00089873) main_cset_slider_pane_t1

0x69e8,	// (0x00082dd1) main_cset_slider_pane_t2

0x6a02,	// (0x00082deb) main_cset_slider_pane_t3

0x6a1c,	// (0x00082e05) main_cset_slider_pane_t4

0x6a36,	// (0x00082e1f) main_cset_slider_pane_t5

0x6a50,	// (0x00082e39) main_cset_slider_pane_t6

0x6a65,	// (0x00082e4e) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x0008bcd0) main_cset_slider_pane_t

0x6b69,	// (0x00082f52) cset_list_set_pane_ParamLimits

0x6b69,	// (0x00082f52) cset_list_set_pane

0xd524,	// (0x0008990d) aid_position_infowindow_above

0xd52c,	// (0x00089915) aid_position_infowindow_below

0x6b7a,	// (0x00082f63) cset_list_set_pane_g1_ParamLimits

0x6b7a,	// (0x00082f63) cset_list_set_pane_g1

0x0e78,	// (0x0007d261) cset_list_set_pane_g3_ParamLimits

0x0e78,	// (0x0007d261) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x0008bcef) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x0008bcef) cset_list_set_pane_g

0x0e87,	// (0x0007d270) cset_list_set_pane_t1_ParamLimits

0x0e87,	// (0x0007d270) cset_list_set_pane_t1

0xa670,	// (0x00086a59) list_highlight_pane_cp021_ParamLimits

0xa670,	// (0x00086a59) list_highlight_pane_cp021

0xb3fb,	// (0x000877e4) cset_slider_pane_g1

0xb40d,	// (0x000877f6) cset_slider_pane_g2

0xb404,	// (0x000877ed) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0008bcf4) cset_slider_pane_g

0xe008,	// (0x0008a3f1) aid_area_touch_cam4_zoom

0x6b86,	// (0x00082f6f) cam4_zoom_cont_pane

0x6b8e,	// (0x00082f77) cam4_zoom_pane_g1

0x6b96,	// (0x00082f7f) cam4_zoom_pane_g2

0x6b9e,	// (0x00082f87) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x0008bcfb) cam4_zoom_pane_g

0x6ba6,	// (0x00082f8f) cam4_zoom_cont_pane_g1

0x6baf,	// (0x00082f98) cam4_zoom_cont_pane_g2

0x6bb8,	// (0x00082fa1) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x0008bd02) cam4_zoom_cont_pane_g

0x5ff0,	// (0x000823d9) call4_image_pane_ParamLimits

0x5ff0,	// (0x000823d9) call4_image_pane

0x6051,	// (0x0008243a) call4_windows_conf_pane_ParamLimits

0x6098,	// (0x00082481) popup_call4_audio_in_window_ParamLimits

0x6098,	// (0x00082481) popup_call4_audio_in_window

0xa017,	// (0x00086400) bg_popup_call2_act_pane_cp02

0xd282,	// (0x0008966b) call4_list_conf_pane

0xa97f,	// (0x00086d68) call4_image_pane_g1

0xa97f,	// (0x00086d68) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0008b786) call4_image_pane_g

0xd534,	// (0x0008991d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd534,	// (0x0008991d) list_single_graphic_popup_conf4_pane

0xa017,	// (0x00086400) list_highlight_pane_cp022

0xd549,	// (0x00089932) list_single_graphic_popup_conf4_pane_g1

0xb0e9,	// (0x000874d2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0008bd09) list_single_graphic_popup_conf4_pane_g

0xd551,	// (0x0008993a) list_single_graphic_popup_conf4_pane_t1

0x29c8,	// (0x0007edb1) popup_vtel_slider_window_ParamLimits

0x29c8,	// (0x0007edb1) popup_vtel_slider_window

0xd264,	// (0x0008964d) dialer2_ne_pane_t2_ParamLimits

0xd264,	// (0x0008964d) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x0008bbea) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x0008bbea) dialer2_ne_pane_t

0xa670,	// (0x00086a59) bg_popup_sub_pane_cp010_ParamLimits

0xa670,	// (0x00086a59) bg_popup_sub_pane_cp010

0x6bc1,	// (0x00082faa) popup_vtel_slider_window_g1_ParamLimits

0x6bc1,	// (0x00082faa) popup_vtel_slider_window_g1

0x6bcd,	// (0x00082fb6) popup_vtel_slider_window_g2_ParamLimits

0x6bcd,	// (0x00082fb6) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x0008bd0e) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x0008bd0e) popup_vtel_slider_window_g

0x6c15,	// (0x00082ffe) vtel_slider_pane_ParamLimits

0x6c15,	// (0x00082ffe) vtel_slider_pane

0x6c24,	// (0x0008300d) vtel_slider_pane_g1_ParamLimits

0x6c24,	// (0x0008300d) vtel_slider_pane_g1

0x6c31,	// (0x0008301a) vtel_slider_pane_g2_ParamLimits

0x6c31,	// (0x0008301a) vtel_slider_pane_g2

0x6c3e,	// (0x00083027) vtel_slider_pane_g3_ParamLimits

0x6c3e,	// (0x00083027) vtel_slider_pane_g3

0x6c24,	// (0x0008300d) vtel_slider_pane_g4_ParamLimits

0x6c24,	// (0x0008300d) vtel_slider_pane_g4

0x6c4b,	// (0x00083034) vtel_slider_pane_g5_ParamLimits

0x6c4b,	// (0x00083034) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0008bd17) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0008bd17) vtel_slider_pane_g

0xa670,	// (0x00086a59) main_gallery2_pane

0x6428,	// (0x00082811) aid_size_row_itut2_dropdow_list_ParamLimits

0x6428,	// (0x00082811) aid_size_row_itut2_dropdow_list

0x6488,	// (0x00082871) grid_vitu2_function_top_pane_ParamLimits

0x6488,	// (0x00082871) grid_vitu2_function_top_pane

0x64de,	// (0x000828c7) popup_vitu2_dropdown_list_window_ParamLimits

0x64de,	// (0x000828c7) popup_vitu2_dropdown_list_window

0x64fc,	// (0x000828e5) popup_vitu2_match_list_window

0x6c58,	// (0x00083041) cell_vitu2_function_top_pane_ParamLimits

0x6c58,	// (0x00083041) cell_vitu2_function_top_pane

0x6c72,	// (0x0008305b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c72,	// (0x0008305b) cell_vitu2_function_top_pane_cp01

0x6c8e,	// (0x00083077) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c8e,	// (0x00083077) cell_vitu2_function_top_wide_pane

0xa670,	// (0x00086a59) bg_button_pane_cp012

0x6cac,	// (0x00083095) cell_vitu2_function_top_pane_g1

0x6cc0,	// (0x000830a9) bg_button_pane_cp013_ParamLimits

0x6cc0,	// (0x000830a9) bg_button_pane_cp013

0x6cdc,	// (0x000830c5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6cdc,	// (0x000830c5) cell_vitu2_function_top_wide_pane_g1

0xa67e,	// (0x00086a67) bg_popup_sub_pane_cp20

0x6cf4,	// (0x000830dd) list_vitu2_match_list_pane

0xd2f5,	// (0x000896de) bg_popup_sub_pane_cp20_g1

0xd2fd,	// (0x000896e6) bg_popup_sub_pane_cp20_g2

0xabb7,	// (0x00086fa0) bg_popup_sub_pane_cp20_g3

0xd305,	// (0x000896ee) bg_popup_sub_pane_cp20_g4

0xab97,	// (0x00086f80) bg_popup_sub_pane_cp20_g5

0xd567,	// (0x00089950) bg_popup_sub_pane_cp20_g6

0xd315,	// (0x000896fe) bg_popup_sub_pane_cp20_g7

0xd31d,	// (0x00089706) bg_popup_sub_pane_cp20_g8

0xd325,	// (0x0008970e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x0008bd22) bg_popup_sub_pane_cp20_g

0x6d0c,	// (0x000830f5) list_vitu2_match_list_item_pane_ParamLimits

0x6d0c,	// (0x000830f5) list_vitu2_match_list_item_pane

0x6d1e,	// (0x00083107) list_vitu2_match_list_item_pane_t1

0xa017,	// (0x00086400) bg_popup_sub_pane_cp21

0xa95d,	// (0x00086d46) grid_vitu2_dropdown_list_pane

0x6d2c,	// (0x00083115) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d2c,	// (0x00083115) cell_vitu2_dropdown_list_char_pane

0x6d50,	// (0x00083139) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d50,	// (0x00083139) cell_vitu2_dropdown_list_ctrl_pane

0xd56f,	// (0x00089958) cell_vitu2_dropdown_list_char_pane_g1

0xd578,	// (0x00089961) cell_vitu2_dropdown_list_char_pane_g2

0xd581,	// (0x0008996a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0008bd35) cell_vitu2_dropdown_list_char_pane_g

0x6d7a,	// (0x00083163) cell_vitu2_dropdown_list_char_pane_t1

0x6d88,	// (0x00083171) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d88,	// (0x00083171) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d98,	// (0x00083181) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d98,	// (0x00083181) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6da9,	// (0x00083192) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6da9,	// (0x00083192) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6db9,	// (0x000831a2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6db9,	// (0x000831a2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa74d,	// (0x00086b36) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa74d,	// (0x00086b36) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x0008bd3c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x0008bd3c) cell_vitu2_dropdown_list_ctrl_pane_g

0x6dd2,	// (0x000831bb) aid_size_cell_gallery2_ParamLimits

0x6dd2,	// (0x000831bb) aid_size_cell_gallery2

0x6dec,	// (0x000831d5) grid_gallery2_pane_ParamLimits

0x6dec,	// (0x000831d5) grid_gallery2_pane

0x6e03,	// (0x000831ec) scroll_pane_cp029_ParamLimits

0x6e03,	// (0x000831ec) scroll_pane_cp029

0x6e13,	// (0x000831fc) cell_gallery2_pane_ParamLimits

0x6e13,	// (0x000831fc) cell_gallery2_pane

0xd58a,	// (0x00089973) cell_gallery2_pane_g2

0x6e6a,	// (0x00083253) cell_gallery2_pane_g3

0xd592,	// (0x0008997b) cell_gallery2_pane_g4

0xd59a,	// (0x00089983) cell_gallery2_pane_g5

0xa95d,	// (0x00086d46) grid_highlight_pane_cp10

0x64fc,	// (0x000828e5) popup_vitu2_match_list_window_ParamLimits

0x6510,	// (0x000828f9) popup_vitu2_query_window_ParamLimits

0x6510,	// (0x000828f9) popup_vitu2_query_window

0xa017,	// (0x00086400) bg_vitu2_candi_button_pane

0xd56f,	// (0x00089958) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd578,	// (0x00089961) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd581,	// (0x0008996a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0e9c,	// (0x0007d285) bg_button_pane_cp015

0x6e72,	// (0x0008325b) bg_button_pane_cp016

0x6e7e,	// (0x00083267) bg_button_pane_cp017

0xb5bd,	// (0x000879a6) bg_popup_sub_pane_cp22

0xd5a2,	// (0x0008998b) popup_vitu2_query_window_g1

0x6e99,	// (0x00083282) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0008bd47) popup_vitu2_query_window_g

0x0ed7,	// (0x0007d2c0) popup_vitu2_query_window_t1_ParamLimits

0x0ed7,	// (0x0007d2c0) popup_vitu2_query_window_t1

0x0f0a,	// (0x0007d2f3) popup_vitu2_query_window_t2_ParamLimits

0x0f0a,	// (0x0007d2f3) popup_vitu2_query_window_t2

0x0f1c,	// (0x0007d305) popup_vitu2_query_window_t3_ParamLimits

0x0f1c,	// (0x0007d305) popup_vitu2_query_window_t3

0x6ebd,	// (0x000832a6) popup_vitu2_query_window_t4_ParamLimits

0x6ebd,	// (0x000832a6) popup_vitu2_query_window_t4

0x6ed1,	// (0x000832ba) popup_vitu2_query_window_t5_ParamLimits

0x6ed1,	// (0x000832ba) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x0008bd4e) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x0008bd4e) popup_vitu2_query_window_t

0xd439,	// (0x00089822) main_cset_text_pane

0x68d8,	// (0x00082cc1) aid_area_touch_slider_ParamLimits

0x68f4,	// (0x00082cdd) cset_slider_pane_ParamLimits

0x6917,	// (0x00082d00) main_cset_slider_pane_g1_ParamLimits

0x692c,	// (0x00082d15) main_cset_slider_pane_g2_ParamLimits

0xd45a,	// (0x00089843) main_cset_slider_pane_g3_ParamLimits

0xd45a,	// (0x00089843) main_cset_slider_pane_g3

0x6941,	// (0x00082d2a) main_cset_slider_pane_g4_ParamLimits

0x6941,	// (0x00082d2a) main_cset_slider_pane_g4

0x6950,	// (0x00082d39) main_cset_slider_pane_g5_ParamLimits

0x6950,	// (0x00082d39) main_cset_slider_pane_g5

0x695c,	// (0x00082d45) main_cset_slider_pane_g6_ParamLimits

0x695c,	// (0x00082d45) main_cset_slider_pane_g6

0xf8c2,	// (0x0008bcab) main_cset_slider_pane_g_ParamLimits

0xd48a,	// (0x00089873) main_cset_slider_pane_t1_ParamLimits

0x69e8,	// (0x00082dd1) main_cset_slider_pane_t2_ParamLimits

0x6a02,	// (0x00082deb) main_cset_slider_pane_t3_ParamLimits

0x6a1c,	// (0x00082e05) main_cset_slider_pane_t4_ParamLimits

0x6a36,	// (0x00082e1f) main_cset_slider_pane_t5_ParamLimits

0x6a50,	// (0x00082e39) main_cset_slider_pane_t6_ParamLimits

0x6a65,	// (0x00082e4e) main_cset_slider_pane_t7_ParamLimits

0x6a8f,	// (0x00082e78) main_cset_slider_pane_t8_ParamLimits

0x6a8f,	// (0x00082e78) main_cset_slider_pane_t8

0x6ab7,	// (0x00082ea0) main_cset_slider_pane_t9_ParamLimits

0x6ab7,	// (0x00082ea0) main_cset_slider_pane_t9

0x6adf,	// (0x00082ec8) main_cset_slider_pane_t10_ParamLimits

0x6adf,	// (0x00082ec8) main_cset_slider_pane_t10

0x6b07,	// (0x00082ef0) main_cset_slider_pane_t11_ParamLimits

0x6b07,	// (0x00082ef0) main_cset_slider_pane_t11

0x6b2f,	// (0x00082f18) main_cset_slider_pane_t12_ParamLimits

0x6b2f,	// (0x00082f18) main_cset_slider_pane_t12

0x6b4c,	// (0x00082f35) main_cset_slider_pane_t13_ParamLimits

0x6b4c,	// (0x00082f35) main_cset_slider_pane_t13

0xf8e7,	// (0x0008bcd0) main_cset_slider_pane_t_ParamLimits

0xa017,	// (0x00086400) bg_popup_sub_pane_cp011

0xd5ae,	// (0x00089997) main_cset_text_pane_g1

0xd5b6,	// (0x0008999f) main_cset_text_pane_t1

0xd5c4,	// (0x000899ad) main_cset_text_pane_t2

0xd5d2,	// (0x000899bb) main_cset_text_pane_t3

0xd5e0,	// (0x000899c9) main_cset_text_pane_t4

0xd5ee,	// (0x000899d7) main_cset_text_pane_t5

0xd5fc,	// (0x000899e5) main_cset_text_pane_t6

0xd60a,	// (0x000899f3) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0008bd5d) main_cset_text_pane_t

0xa017,	// (0x00086400) main_cam4_burst_pane

0xa017,	// (0x00086400) main_cam5_pane

0xd3e3,	// (0x000897cc) bg_button_pane_cp019

0xd418,	// (0x00089801) bg_button_pane_cp020

0xd466,	// (0x0008984f) main_cset_slider_pane_g7_ParamLimits

0xd466,	// (0x0008984f) main_cset_slider_pane_g7

0xd472,	// (0x0008985b) main_cset_slider_pane_g8_ParamLimits

0xd472,	// (0x0008985b) main_cset_slider_pane_g8

0x6970,	// (0x00082d59) main_cset_slider_pane_g9_ParamLimits

0x6970,	// (0x00082d59) main_cset_slider_pane_g9

0x697c,	// (0x00082d65) main_cset_slider_pane_g10_ParamLimits

0x697c,	// (0x00082d65) main_cset_slider_pane_g10

0x6988,	// (0x00082d71) main_cset_slider_pane_g11_ParamLimits

0x6988,	// (0x00082d71) main_cset_slider_pane_g11

0x6994,	// (0x00082d7d) main_cset_slider_pane_g12_ParamLimits

0x6994,	// (0x00082d7d) main_cset_slider_pane_g12

0x69a0,	// (0x00082d89) main_cset_slider_pane_g13_ParamLimits

0x69a0,	// (0x00082d89) main_cset_slider_pane_g13

0x69ac,	// (0x00082d95) main_cset_slider_pane_g14_ParamLimits

0x69ac,	// (0x00082d95) main_cset_slider_pane_g14

0x69b8,	// (0x00082da1) main_cset_slider_pane_g15_ParamLimits

0x69b8,	// (0x00082da1) main_cset_slider_pane_g15

0xd4b2,	// (0x0008989b) main_cset_slider_pane_t14_ParamLimits

0xd4b2,	// (0x0008989b) main_cset_slider_pane_t14

0xd4eb,	// (0x000898d4) main_cset_slider_pane_t15_ParamLimits

0xd4eb,	// (0x000898d4) main_cset_slider_pane_t15

0x6ee5,	// (0x000832ce) aid_cam4_burst_size_cell_ParamLimits

0x6ee5,	// (0x000832ce) aid_cam4_burst_size_cell

0x6f01,	// (0x000832ea) grid_cam4_burst_pane_ParamLimits

0x6f01,	// (0x000832ea) grid_cam4_burst_pane

0x6f33,	// (0x0008331c) linegrid_cam4_burst_pane_ParamLimits

0x6f33,	// (0x0008331c) linegrid_cam4_burst_pane

0x6f51,	// (0x0008333a) scroll_pane_cp30_ParamLimits

0x6f51,	// (0x0008333a) scroll_pane_cp30

0x6f5d,	// (0x00083346) cell_cam4_burst_pane_ParamLimits

0x6f5d,	// (0x00083346) cell_cam4_burst_pane

0xd618,	// (0x00089a01) linegrid_cam4_burst_pane_g1_ParamLimits

0xd618,	// (0x00089a01) linegrid_cam4_burst_pane_g1

0x6f9d,	// (0x00083386) linegrid_cam4_burst_pane_g2_ParamLimits

0x6f9d,	// (0x00083386) linegrid_cam4_burst_pane_g2

0xd625,	// (0x00089a0e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd625,	// (0x00089a0e) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0008bd6c) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0008bd6c) linegrid_cam4_burst_pane_g

0x6fae,	// (0x00083397) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6fae,	// (0x00083397) linegrid_cam4_burst_pane_g3_copy1

0xd632,	// (0x00089a1b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd632,	// (0x00089a1b) linegrid_cam4_burst_pane_g4

0x6fc8,	// (0x000833b1) linegrid_cam4_burst_pane_g5_ParamLimits

0x6fc8,	// (0x000833b1) linegrid_cam4_burst_pane_g5

0x6fd9,	// (0x000833c2) linegrid_cam4_burst_pane_g6_ParamLimits

0x6fd9,	// (0x000833c2) linegrid_cam4_burst_pane_g6

0xd63f,	// (0x00089a28) linegrid_cam4_burst_pane_g7_ParamLimits

0xd63f,	// (0x00089a28) linegrid_cam4_burst_pane_g7

0x6ff0,	// (0x000833d9) cell_cam4_burst_pane_g1

0xd658,	// (0x00089a41) main_cam5_pane_t1_ParamLimits

0xd658,	// (0x00089a41) main_cam5_pane_t1

0xd66a,	// (0x00089a53) main_cam5_pane_t2_ParamLimits

0xd66a,	// (0x00089a53) main_cam5_pane_t2

0xd69a,	// (0x00089a83) main_cam5_pane_t3_ParamLimits

0xd69a,	// (0x00089a83) main_cam5_pane_t3

0xd6ac,	// (0x00089a95) main_cam5_pane_t4_ParamLimits

0xd6ac,	// (0x00089a95) main_cam5_pane_t4

0xd6c4,	// (0x00089aad) main_cam5_pane_t5_ParamLimits

0xd6c4,	// (0x00089aad) main_cam5_pane_t5

0xd6d8,	// (0x00089ac1) main_cam5_pane_t6_ParamLimits

0xd6d8,	// (0x00089ac1) main_cam5_pane_t6

0xd6ec,	// (0x00089ad5) main_cam5_pane_t7_ParamLimits

0xd6ec,	// (0x00089ad5) main_cam5_pane_t7

0xd6fe,	// (0x00089ae7) main_cam5_pane_t8_ParamLimits

0xd6fe,	// (0x00089ae7) main_cam5_pane_t8

0xd71c,	// (0x00089b05) main_cam5_pane_t9_ParamLimits

0xd71c,	// (0x00089b05) main_cam5_pane_t9

0xd72e,	// (0x00089b17) main_cam5_pane_t10_ParamLimits

0xd72e,	// (0x00089b17) main_cam5_pane_t10

0xd740,	// (0x00089b29) main_cam5_pane_t11_ParamLimits

0xd740,	// (0x00089b29) main_cam5_pane_t11

0xd754,	// (0x00089b3d) main_cam5_pane_t12_ParamLimits

0xd754,	// (0x00089b3d) main_cam5_pane_t12

0xd76b,	// (0x00089b54) main_cam5_pane_t13_ParamLimits

0xd76b,	// (0x00089b54) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0008bd78) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0008bd78) main_cam5_pane_t

0x1b7d,	// (0x0007df66) popup_scut_keymap_window_ParamLimits

0x1b7d,	// (0x0007df66) popup_scut_keymap_window

0x7003,	// (0x000833ec) aid_size_cell_brow_shortcut

0xa95d,	// (0x00086d46) bg_popup_window_pane_cp010

0x700f,	// (0x000833f8) grid_scut_pane

0x701b,	// (0x00083404) cell_scut_pane_ParamLimits

0x701b,	// (0x00083404) cell_scut_pane

0x7036,	// (0x0008341f) cell_scut_pane_g1

0xd78e,	// (0x00089b77) cell_scut_pane_t1

0xd79d,	// (0x00089b86) cell_scut_pane_t2

0x703f,	// (0x00083428) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x0008bd93) cell_scut_pane_t

0x512f,	// (0x00081518) main_mup3_pane_g8_ParamLimits

0x512f,	// (0x00081518) main_mup3_pane_g8

0x6436,	// (0x0008281f) area_vitu2_query_pane_ParamLimits

0x6436,	// (0x0008281f) area_vitu2_query_pane

0x0eb1,	// (0x0007d29a) input_focus_pane_cp08

0xd7ac,	// (0x00089b95) area_vitu2_query_pane_g1

0x0f9a,	// (0x0007d383) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0008bd9a) area_vitu2_query_pane_g

0x704d,	// (0x00083436) area_vitu2_query_pane_t1_ParamLimits

0x704d,	// (0x00083436) area_vitu2_query_pane_t1

0x7061,	// (0x0008344a) area_vitu2_query_pane_t2_ParamLimits

0x7061,	// (0x0008344a) area_vitu2_query_pane_t2

0x0fab,	// (0x0007d394) area_vitu2_query_pane_t3_ParamLimits

0x0fab,	// (0x0007d394) area_vitu2_query_pane_t3

0x0fd3,	// (0x0007d3bc) area_vitu2_query_pane_t4_ParamLimits

0x0fd3,	// (0x0007d3bc) area_vitu2_query_pane_t4

0x0ffb,	// (0x0007d3e4) area_vitu2_query_pane_t5_ParamLimits

0x0ffb,	// (0x0007d3e4) area_vitu2_query_pane_t5

0x1023,	// (0x0007d40c) area_vitu2_query_pane_t6_ParamLimits

0x1023,	// (0x0007d40c) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x0008bd9f) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x0008bd9f) area_vitu2_query_pane_t

0x6e72,	// (0x0008325b) bg_button_pane_cp018

0x7075,	// (0x0008345e) bg_button_pane_cp021

0x106f,	// (0x0007d458) bg_button_pane_cp022

0x1092,	// (0x0007d47b) input_focus_pane_cp09

0x3cfc,	// (0x000800e5) aid_size_touch_mv_arrow_left

0x3d27,	// (0x00080110) aid_size_touch_mv_arrow_right

0x69d0,	// (0x00082db9) main_cset_slider_pane_g16_ParamLimits

0x69d0,	// (0x00082db9) main_cset_slider_pane_g16

0x69dc,	// (0x00082dc5) main_cset_slider_pane_g17_ParamLimits

0x69dc,	// (0x00082dc5) main_cset_slider_pane_g17

0x6ff0,	// (0x000833d9) cell_cam4_burst_pane_g1_ParamLimits

0xa017,	// (0x00086400) compa_mode_pane

0x6bd9,	// (0x00082fc2) popup_vtel_slider_window_g3_ParamLimits

0x6bd9,	// (0x00082fc2) popup_vtel_slider_window_g3

0x6bed,	// (0x00082fd6) popup_vtel_slider_window_g4_ParamLimits

0x6bed,	// (0x00082fd6) popup_vtel_slider_window_g4

0x6c01,	// (0x00082fea) popup_vtel_slider_window_t1_ParamLimits

0x6c01,	// (0x00082fea) popup_vtel_slider_window_t1

0xa017,	// (0x00086400) main_cl_pane

0x495f,	// (0x00080d48) popup_imed_adjust2_window_ParamLimits

0xb5bd,	// (0x000879a6) bg_tb_trans_pane_cp05_ParamLimits

0xcf06,	// (0x000892ef) popup_imed_adjust2_window_g1_ParamLimits

0xcf15,	// (0x000892fe) popup_imed_adjust2_window_g2_ParamLimits

0xcf15,	// (0x000892fe) popup_imed_adjust2_window_g2

0xcf21,	// (0x0008930a) popup_imed_adjust2_window_g3_ParamLimits

0xcf21,	// (0x0008930a) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0008bb15) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0008bb15) popup_imed_adjust2_window_g

0xcf2d,	// (0x00089316) popup_imed_adjust2_window_t1_ParamLimits

0xcf62,	// (0x0008934b) slider_imed_adjust_pane_ParamLimits

0xcf76,	// (0x0008935f) slider_imed_adjust_pane_g1_ParamLimits

0xcf86,	// (0x0008936f) slider_imed_adjust_pane_g2_ParamLimits

0xcf96,	// (0x0008937f) slider_imed_adjust_pane_g3_ParamLimits

0xcfa7,	// (0x00089390) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x0008bb1c) slider_imed_adjust_pane_g_ParamLimits

0x6179,	// (0x00082562) aid_touch_area_cam4_ParamLimits

0x6179,	// (0x00082562) aid_touch_area_cam4

0x6189,	// (0x00082572) battery_pane_cp01

0x6210,	// (0x000825f9) main_camera4_pane_g6_ParamLimits

0x6210,	// (0x000825f9) main_camera4_pane_g6

0x622e,	// (0x00082617) main_camera4_pane_t2_ParamLimits

0x622e,	// (0x00082617) main_camera4_pane_t2

0x0001,

0xf835,	// (0x0008bc1e) main_camera4_pane_t_ParamLimits

0xf835,	// (0x0008bc1e) main_camera4_pane_t

0x62b1,	// (0x0008269a) aid_touch_area_vid4_ParamLimits

0x62b1,	// (0x0008269a) aid_touch_area_vid4

0x62f1,	// (0x000826da) main_video4_pane_g5_ParamLimits

0x62f1,	// (0x000826da) main_video4_pane_g5

0x6317,	// (0x00082700) vid4_progress_pane_ParamLimits

0x6317,	// (0x00082700) vid4_progress_pane

0xd47e,	// (0x00089867) main_cset_slider_pane_g18_ParamLimits

0xd47e,	// (0x00089867) main_cset_slider_pane_g18

0xd64c,	// (0x00089a35) cell_cam4_burst_pane_g2_ParamLimits

0xd64c,	// (0x00089a35) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x0008bd73) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x0008bd73) cell_cam4_burst_pane_g

0x7081,	// (0x0008346a) bg_cl_pane_ParamLimits

0x7081,	// (0x0008346a) bg_cl_pane

0x708d,	// (0x00083476) cl_header_pane_ParamLimits

0x708d,	// (0x00083476) cl_header_pane

0x7099,	// (0x00083482) cl_listscroll_pane_ParamLimits

0x7099,	// (0x00083482) cl_listscroll_pane

0xd7b8,	// (0x00089ba1) bg_cl_pane_g1

0xd7c0,	// (0x00089ba9) bg_cl_pane_g2

0xd7c8,	// (0x00089bb1) bg_cl_pane_g3

0xd7d0,	// (0x00089bb9) bg_cl_pane_g4

0xd7d8,	// (0x00089bc1) bg_cl_pane_g5

0xd7e0,	// (0x00089bc9) bg_cl_pane_g6

0xd7e8,	// (0x00089bd1) bg_cl_pane_g7

0xd7f0,	// (0x00089bd9) bg_cl_pane_g8

0xd7f8,	// (0x00089be1) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x0008bdae) bg_cl_pane_g

0x70a5,	// (0x0008348e) aid_height_cl_leading_ParamLimits

0x70a5,	// (0x0008348e) aid_height_cl_leading

0x70b1,	// (0x0008349a) aid_height_cl_text_ParamLimits

0x70b1,	// (0x0008349a) aid_height_cl_text

0xa67e,	// (0x00086a67) bg_cl_header_pane_ParamLimits

0xa67e,	// (0x00086a67) bg_cl_header_pane

0x70c9,	// (0x000834b2) cl_header_pane_g1_ParamLimits

0x70c9,	// (0x000834b2) cl_header_pane_g1

0x70d6,	// (0x000834bf) cl_header_pane_t1_ParamLimits

0x70d6,	// (0x000834bf) cl_header_pane_t1

0xd800,	// (0x00089be9) cl_list_pane

0xd451,	// (0x0008983a) hc_scroll_pane_cp01

0xab97,	// (0x00086f80) bg_cl_header_pane_g1

0xd2f5,	// (0x000896de) bg_cl_header_pane_g2

0xabb7,	// (0x00086fa0) bg_cl_header_pane_g3

0xd305,	// (0x000896ee) bg_cl_header_pane_g4

0xd2fd,	// (0x000896e6) bg_cl_header_pane_g5

0xd567,	// (0x00089950) bg_cl_header_pane_g6

0xd31d,	// (0x00089706) bg_cl_header_pane_g7

0xd325,	// (0x0008970e) bg_cl_header_pane_g8

0xd315,	// (0x000896fe) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x0008bdc1) bg_cl_header_pane_g

0x70e8,	// (0x000834d1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x70e8,	// (0x000834d1) hc_cl_list_double_graphic_heading_pane

0x70f8,	// (0x000834e1) hc_cl_list_single_graphic_pane_ParamLimits

0x70f8,	// (0x000834e1) hc_cl_list_single_graphic_pane

0x710a,	// (0x000834f3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x710a,	// (0x000834f3) hc_cl_list_single_graphic_pane_g1

0x7116,	// (0x000834ff) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7116,	// (0x000834ff) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0008bdd4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0008bdd4) hc_cl_list_single_graphic_pane_g

0x712a,	// (0x00083513) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x712a,	// (0x00083513) hc_cl_list_single_graphic_pane_t1

0x710a,	// (0x000834f3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x710a,	// (0x000834f3) hc_cl_list_double_graphic_heading_pane_g1

0x713f,	// (0x00083528) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x713f,	// (0x00083528) hc_cl_list_double_graphic_heading_pane_g2

0x7153,	// (0x0008353c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7153,	// (0x0008353c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0008bdd9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0008bdd9) hc_cl_list_double_graphic_heading_pane_g

0x7167,	// (0x00083550) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7167,	// (0x00083550) hc_cl_list_double_graphic_heading_pane_t1

0x717c,	// (0x00083565) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x717c,	// (0x00083565) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x0008bde0) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x0008bde0) hc_cl_list_double_graphic_heading_pane_t

0x7199,	// (0x00083582) vid4_progress_pane_g1

0x71a9,	// (0x00083592) vid4_progress_pane_g2

0x71b9,	// (0x000835a2) vid4_progress_pane_g3

0x71cb,	// (0x000835b4) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0008bde5) vid4_progress_pane_g

0x71e9,	// (0x000835d2) vid4_progress_pane_t1

0x7203,	// (0x000835ec) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x0008bdf0) vid4_progress_pane_t

0x7231,	// (0x0008361a) wait_bar_pane_cp07

0xc85b,	// (0x00088c44) blid_firmament_pane_ParamLimits

0xc89e,	// (0x00088c87) popup_blid_sat_info2_window_g1

0xc8c2,	// (0x00088cab) popup_blid_sat_info2_window_t3

0xc8d0,	// (0x00088cb9) popup_blid_sat_info2_window_t4

0xc8de,	// (0x00088cc7) popup_blid_sat_info2_window_t5

0xc8ec,	// (0x00088cd5) popup_blid_sat_info2_window_t6

0xc8fc,	// (0x00088ce5) popup_blid_sat_info2_window_t7

0xc90a,	// (0x00088cf3) popup_blid_sat_info2_window_t8

0xc918,	// (0x00088d01) popup_blid_sat_info2_window_t9

0xc926,	// (0x00088d0f) popup_blid_sat_info2_window_t10

0xc9ed,	// (0x00088dd6) aid_firma_cardinal_ParamLimits

0xca01,	// (0x00088dea) blid_firmament_pane_t1_ParamLimits

0xca18,	// (0x00088e01) blid_firmament_pane_t2_ParamLimits

0xca2f,	// (0x00088e18) blid_firmament_pane_t3_ParamLimits

0xca46,	// (0x00088e2f) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x0008ba0e) blid_firmament_pane_t_ParamLimits

0xca5d,	// (0x00088e46) blid_sat_info_pane_ParamLimits

0xa670,	// (0x00086a59) main_cam_set_pane_ParamLimits

0x57f7,	// (0x00081be0) aid_size_cell_colour_35_ParamLimits

0x5811,	// (0x00081bfa) aid_size_cell_colour_112_ParamLimits

0x5828,	// (0x00081c11) aid_size_cell_effect_ParamLimits

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp02_ParamLimits

0xb111,	// (0x000874fa) heading_imed_pane_ParamLimits

0x5842,	// (0x00081c2b) listscroll_imed_pane_ParamLimits

0xbd3a,	// (0x00088123) popup_call2_audio_first_window_g5_ParamLimits

0xbd3a,	// (0x00088123) popup_call2_audio_first_window_g5

0x5e67,	// (0x00082250) aid_size_touch_image3_arrow_left_ParamLimits

0x5e67,	// (0x00082250) aid_size_touch_image3_arrow_left

0x5e7d,	// (0x00082266) aid_size_touch_image3_arrow_right_ParamLimits

0x5e7d,	// (0x00082266) aid_size_touch_image3_arrow_right

0x721c,	// (0x00083605) vid4_progress_pane_t3

0x59bd,	// (0x00081da6) main_hwr_training_symbol_option_pane_ParamLimits

0x59bd,	// (0x00081da6) main_hwr_training_symbol_option_pane

0xd14b,	// (0x00089534) popup_hwr_training_preview_window_ParamLimits

0xd14b,	// (0x00089534) popup_hwr_training_preview_window

0x5a1e,	// (0x00081e07) hwr_training_navi_pane_g5_ParamLimits

0x5a1e,	// (0x00081e07) hwr_training_navi_pane_g5

0xd2e3,	// (0x000896cc) popup_char_count_window

0xa67e,	// (0x00086a67) bg_popup_sub_pane_cp20_ParamLimits

0x6cf4,	// (0x000830dd) list_vitu2_match_list_pane_ParamLimits

0x6d00,	// (0x000830e9) vitu2_page_scroll_pane_ParamLimits

0x6d00,	// (0x000830e9) vitu2_page_scroll_pane

0xd809,	// (0x00089bf2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd809,	// (0x00089bf2) list_single_hwr_training_symbol_option_pane

0xd81c,	// (0x00089c05) list_single_hwr_training_symbol_option_pane_g1

0xd824,	// (0x00089c0d) list_single_hwr_training_symbol_option_pane_t1

0xd832,	// (0x00089c1b) bg_button_pane_cp023

0xd83b,	// (0x00089c24) bg_button_pane_cp024

0xd86e,	// (0x00089c57) vitu2_page_scroll_pane_g1

0xd876,	// (0x00089c5f) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0008bdf7) vitu2_page_scroll_pane_g

0xd87e,	// (0x00089c67) vitu2_page_scroll_pane_t1

0xd688,	// (0x00089a71) popup_char_count_window_g1

0xd88d,	// (0x00089c76) popup_char_count_window_g2

0xd691,	// (0x00089a7a) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x0008bdfc) popup_char_count_window_g

0xd896,	// (0x00089c7f) popup_char_count_window_t1

0xa017,	// (0x00086400) main_vded2_pane

0xcef2,	// (0x000892db) aid_size_cell_imed_line

0xcefc,	// (0x000892e5) grid_imed_line_width_pane

0x638b,	// (0x00082774) vid4_indicators_pane_g4

0xd8a4,	// (0x00089c8d) cell_imed_line_width_pane_ParamLimits

0xd8a4,	// (0x00089c8d) cell_imed_line_width_pane

0xd8ba,	// (0x00089ca3) cell_imed_line_width_pane_g1

0xd8c3,	// (0x00089cac) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x0008be03) cell_imed_line_width_pane_g

0x724c,	// (0x00083635) main_vded2_pane_g1_ParamLimits

0x724c,	// (0x00083635) main_vded2_pane_g1

0x725b,	// (0x00083644) main_vded2_pane_g2_ParamLimits

0x725b,	// (0x00083644) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0008be08) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0008be08) main_vded2_pane_g

0x7269,	// (0x00083652) vded2_slider_pane_ParamLimits

0x7269,	// (0x00083652) vded2_slider_pane

0x7276,	// (0x0008365f) aid_size_touch_vded2_end

0x7280,	// (0x00083669) aid_size_touch_vded2_playhead

0xd8cb,	// (0x00089cb4) aid_size_touch_vded2_start

0xd8d3,	// (0x00089cbc) vded2_slider_bg_pane

0xd8dc,	// (0x00089cc5) vded2_slider_pane_g1

0xd900,	// (0x00089ce9) vded2_slider_pane_g2

0x7288,	// (0x00083671) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x0008be0d) vded2_slider_pane_g

0xd8e5,	// (0x00089cce) vded2_slider_bg_pane_g1

0xd8ee,	// (0x00089cd7) vded2_slider_bg_pane_g2

0xd8f7,	// (0x00089ce0) vded2_slider_bg_pane_g3

0x0002,

0xf6f0,	// (0x0008bad9) vded2_slider_bg_pane_g

0x415a,	// (0x00080543) aid_postcard_touch_down_pane_ParamLimits

0x415a,	// (0x00080543) aid_postcard_touch_down_pane

0x416a,	// (0x00080553) aid_postcard_touch_up_pane_ParamLimits

0x416a,	// (0x00080553) aid_postcard_touch_up_pane

0xa017,	// (0x00086400) main_blid2_pane

0x48de,	// (0x00080cc7) popup_blid2_search_window

0xa017,	// (0x00086400) blid2_gps_pane

0xa017,	// (0x00086400) blid2_navig_pane

0xa017,	// (0x00086400) blid2_search_pane

0xa017,	// (0x00086400) blid2_tripm_pane

0x7291,	// (0x0008367a) blid2_search_pane_g1_ParamLimits

0x7291,	// (0x0008367a) blid2_search_pane_g1

0x729d,	// (0x00083686) blid2_search_pane_t1_ParamLimits

0x729d,	// (0x00083686) blid2_search_pane_t1

0x72af,	// (0x00083698) aid_size_cell_blid2_gps_ParamLimits

0x72af,	// (0x00083698) aid_size_cell_blid2_gps

0x72bf,	// (0x000836a8) blid2_gps_pane_g1_ParamLimits

0x72bf,	// (0x000836a8) blid2_gps_pane_g1

0x72cb,	// (0x000836b4) grid_blid2_satellite_pane_ParamLimits

0x72cb,	// (0x000836b4) grid_blid2_satellite_pane

0x72d9,	// (0x000836c2) blid2_navig_pane_g1_ParamLimits

0x72d9,	// (0x000836c2) blid2_navig_pane_g1

0x72e5,	// (0x000836ce) blid2_navig_pane_t1_ParamLimits

0x72e5,	// (0x000836ce) blid2_navig_pane_t1

0x72f7,	// (0x000836e0) blid2_navig_pane_t2_ParamLimits

0x72f7,	// (0x000836e0) blid2_navig_pane_t2

0x0001,

0xfa2b,	// (0x0008be14) blid2_navig_pane_t_ParamLimits

0xfa2b,	// (0x0008be14) blid2_navig_pane_t

0x7309,	// (0x000836f2) blid2_navig_ring_pane_ParamLimits

0x7309,	// (0x000836f2) blid2_navig_ring_pane

0x7319,	// (0x00083702) blid2_speed_pane_ParamLimits

0x7319,	// (0x00083702) blid2_speed_pane

0x7325,	// (0x0008370e) blid2_tripm_pane_g1_ParamLimits

0x7325,	// (0x0008370e) blid2_tripm_pane_g1

0x7335,	// (0x0008371e) blid2_tripm_pane_g2_ParamLimits

0x7335,	// (0x0008371e) blid2_tripm_pane_g2

0x7341,	// (0x0008372a) blid2_tripm_pane_g3_ParamLimits

0x7341,	// (0x0008372a) blid2_tripm_pane_g3

0x734d,	// (0x00083736) blid2_tripm_pane_g4_ParamLimits

0x734d,	// (0x00083736) blid2_tripm_pane_g4

0x7359,	// (0x00083742) blid2_tripm_pane_g5_ParamLimits

0x7359,	// (0x00083742) blid2_tripm_pane_g5

0x0005,

0xfa30,	// (0x0008be19) blid2_tripm_pane_g_ParamLimits

0xfa30,	// (0x0008be19) blid2_tripm_pane_g

0x7375,	// (0x0008375e) blid2_tripm_pane_t1_ParamLimits

0x7375,	// (0x0008375e) blid2_tripm_pane_t1

0x7387,	// (0x00083770) blid2_tripm_pane_t2_ParamLimits

0x7387,	// (0x00083770) blid2_tripm_pane_t2

0x7399,	// (0x00083782) blid2_tripm_pane_t3_ParamLimits

0x7399,	// (0x00083782) blid2_tripm_pane_t3

0x0003,

0xfa3d,	// (0x0008be26) blid2_tripm_pane_t_ParamLimits

0xfa3d,	// (0x0008be26) blid2_tripm_pane_t

0x73cb,	// (0x000837b4) cell_blid2_satellite_pane_ParamLimits

0x73cb,	// (0x000837b4) cell_blid2_satellite_pane

0x73e9,	// (0x000837d2) cell_blid2_satellite_pane_g1

0xd908,	// (0x00089cf1) cell_blid2_satellite_pane_t1

0xa97f,	// (0x00086d68) blid2_speed_pane_g1

0xd916,	// (0x00089cff) blid2_speed_pane_t1

0xd924,	// (0x00089d0d) blid2_speed_pane_t2

0x0001,

0xfa46,	// (0x0008be2f) blid2_speed_pane_t

0xa97f,	// (0x00086d68) blid2_navig_ring_pane_g1

0x73f2,	// (0x000837db) blid2_navig_ring_pane_g2

0x73fa,	// (0x000837e3) blid2_navig_ring_pane_g3

0x7402,	// (0x000837eb) blid2_navig_ring_pane_g4

0x740a,	// (0x000837f3) blid2_navig_ring_pane_g5

0x0004,

0xfa4b,	// (0x0008be34) blid2_navig_ring_pane_g

0xa017,	// (0x00086400) bg_popup_window_pane_cp011

0xd932,	// (0x00089d1b) popup_blid2_search_window_g1

0xd93a,	// (0x00089d23) popup_blid2_search_window_t1

0xd948,	// (0x00089d31) popup_blid2_search_window_t2

0x0001,

0xfa56,	// (0x0008be3f) popup_blid2_search_window_t

0xaaa6,	// (0x00086e8f) main_browser_pane_g1

0xa7bf,	// (0x00086ba8) main_browser_pane_ParamLimits

0xa670,	// (0x00086a59) bg_button_pane_cp011_ParamLimits

0x65f1,	// (0x000829da) cell_vitu2_function_pane_g1_ParamLimits

0xb5bd,	// (0x000879a6) bg_popup_sub_pane_cp22_ParamLimits

0x0eb1,	// (0x0007d29a) input_focus_pane_cp08_ParamLimits

0x6e8a,	// (0x00083273) popup_vitu2_query_button_pane_ParamLimits

0x6e8a,	// (0x00083273) popup_vitu2_query_button_pane

0x0ecd,	// (0x0007d2b6) popup_vitu2_query_input_button_pane

0xd5a2,	// (0x0008998b) popup_vitu2_query_window_g1_ParamLimits

0x6e99,	// (0x00083282) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0008bd47) popup_vitu2_query_window_g_ParamLimits

0xa017,	// (0x00086400) bg_button_pane_cp026

0x7412,	// (0x000837fb) popup_vitu2_query_input_button_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp025

0xd956,	// (0x00089d3f) popup_vitu2_query_button_pane_t1

0x4db5,	// (0x0008119e) main_mp3_pane_t6

0x4dc5,	// (0x000811ae) popup_slider_window_cp01

0x6266,	// (0x0008264f) cam4_battery_pane

0x6344,	// (0x0008272d) cam4_battery_pane_cp02

0x7191,	// (0x0008357a) cam4_battery_pane_cp01

0x7191,	// (0x0008357a) cam4_battery_pane_cp03

0xa97f,	// (0x00086d68) cam4_battery_pane_g1

0xd3ec,	// (0x000897d5) cam4_battery_pane_g2

0x0001,

0xfa5b,	// (0x0008be44) cam4_battery_pane_g

0xc934,	// (0x00088d1d) popup_blid_sat_info2_window_t11

0x3cfc,	// (0x000800e5) aid_size_touch_mv_arrow_left_ParamLimits

0x3d27,	// (0x00080110) aid_size_touch_mv_arrow_right_ParamLimits

0xb237,	// (0x00087620) navi_pane_g1_ParamLimits

0x3d66,	// (0x0008014f) navi_pane_g2_ParamLimits

0x3d94,	// (0x0008017d) navi_pane_g3_ParamLimits

0xf339,	// (0x0008b722) navi_pane_g_ParamLimits

0x3dee,	// (0x000801d7) navi_pane_mv_t1_ParamLimits

0x584e,	// (0x00081c37) grid_imed_effect_pane_ParamLimits

0x2890,	// (0x0007ec79) aid_placing_vt_slider_lsc

0xa9e2,	// (0x00086dcb) aid_placing_vt_slider_prt

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp01_ParamLimits

0xcb9c,	// (0x00088f85) popup_image_details_window_g1_ParamLimits

0xcbaf,	// (0x00088f98) popup_image_details_window_g2_ParamLimits

0xcbc4,	// (0x00088fad) popup_image_details_window_g3_ParamLimits

0xcbc4,	// (0x00088fad) popup_image_details_window_g3

0xf665,	// (0x0008ba4e) popup_image_details_window_g_ParamLimits

0xcbd8,	// (0x00088fc1) popup_image_details_window_t1_ParamLimits

0xcbea,	// (0x00088fd3) popup_image_details_window_t2_ParamLimits

0xcc03,	// (0x00088fec) popup_image_details_window_t3_ParamLimits

0xcc17,	// (0x00089000) popup_image_details_window_t4_ParamLimits

0xcc32,	// (0x0008901b) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x0008ba55) popup_image_details_window_t_ParamLimits

0x70bd,	// (0x000834a6) cl_header_name_pane_ParamLimits

0x70bd,	// (0x000834a6) cl_header_name_pane

0x741a,	// (0x00083803) cl_header_name_pane_t1_ParamLimits

0x741a,	// (0x00083803) cl_header_name_pane_t1

0x7431,	// (0x0008381a) cl_header_name_pane_t2_ParamLimits

0x7431,	// (0x0008381a) cl_header_name_pane_t2

0x745b,	// (0x00083844) cl_header_name_pane_t3_ParamLimits

0x745b,	// (0x00083844) cl_header_name_pane_t3

0x0002,

0xfa60,	// (0x0008be49) cl_header_name_pane_t_ParamLimits

0xfa60,	// (0x0008be49) cl_header_name_pane_t

0x3dbf,	// (0x000801a8) navi_pane_mv_g2_ParamLimits

0xd2cb,	// (0x000896b4) field_vitu2_entry_pane_g1_ParamLimits

0xd2d7,	// (0x000896c0) field_vitu2_entry_pane_g2_ParamLimits

0xb5cb,	// (0x000879b4) field_vitu2_entry_pane_g3_ParamLimits

0xb5cb,	// (0x000879b4) field_vitu2_entry_pane_g3

0xf867,	// (0x0008bc50) field_vitu2_entry_pane_g_ParamLimits

0x657f,	// (0x00082968) cell_vitu2_itu_pane_g1_ParamLimits

0x6597,	// (0x00082980) cell_vitu2_itu_pane_g2_ParamLimits

0x6597,	// (0x00082980) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0008bc5c) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0008bc5c) cell_vitu2_itu_pane_g

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp05_ParamLimits

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp05

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp03

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp04

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp10_ParamLimits

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp10

0x1080,	// (0x0007d469) bg_vkb2_func_pane_cp08

0x6e72,	// (0x0008325b) bg_vkb2_func_pane_cp06

0x7075,	// (0x0008345e) bg_vkb2_func_pane_cp07

0xd844,	// (0x00089c2d) bg_vkb2_func_pane_cp11_ParamLimits

0xd844,	// (0x00089c2d) bg_vkb2_func_pane_cp11

0xd859,	// (0x00089c42) bg_vkb2_func_pane_cp12_ParamLimits

0xd859,	// (0x00089c42) bg_vkb2_func_pane_cp12

0xa017,	// (0x00086400) bg_vkb2_func_pane_cp09

0xd2f5,	// (0x000896de) bg_vkb2_func_pane_g1

0xabb7,	// (0x00086fa0) bg_vkb2_func_pane_g2

0xd2fd,	// (0x000896e6) bg_vkb2_func_pane_g3

0xd305,	// (0x000896ee) bg_vkb2_func_pane_g4

0xd567,	// (0x00089950) bg_vkb2_func_pane_g5

0xd31d,	// (0x00089706) bg_vkb2_func_pane_g6

0xd325,	// (0x0008970e) bg_vkb2_func_pane_g7

0xd315,	// (0x000896fe) bg_vkb2_func_pane_g8

0xab97,	// (0x00086f80) bg_vkb2_func_pane_g9

0x0008,

0xfa67,	// (0x0008be50) bg_vkb2_func_pane_g

0x7367,	// (0x00083750) blid2_tripm_pane_g6_ParamLimits

0x7367,	// (0x00083750) blid2_tripm_pane_g6

0xd209,	// (0x000895f2) mp4_progress_pane_g1

0x73bf,	// (0x000837a8) blid2_tripm_values_pane_ParamLimits

0x73bf,	// (0x000837a8) blid2_tripm_values_pane

0x7480,	// (0x00083869) blid2_tripm_values_pane_t1

0x748e,	// (0x00083877) blid2_tripm_values_pane_t2

0xd964,	// (0x00089d4d) blid2_tripm_values_pane_t3

0x749c,	// (0x00083885) blid2_tripm_values_pane_t4

0x74aa,	// (0x00083893) blid2_tripm_values_pane_t5

0x74b8,	// (0x000838a1) blid2_tripm_values_pane_t6

0xd972,	// (0x00089d5b) blid2_tripm_values_pane_t7

0x74c6,	// (0x000838af) blid2_tripm_values_pane_t8

0x74d4,	// (0x000838bd) blid2_tripm_values_pane_t9

0x0008,

0xfa7a,	// (0x0008be63) blid2_tripm_values_pane_t

0x28ce,	// (0x0007ecb7) call_video_pane_t1_ParamLimits

0x28eb,	// (0x0007ecd4) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0008b5cb) call_video_pane_t_ParamLimits

0x0ca8,	// (0x0007d091) msg_header_pane_g1_ParamLimits

0xb440,	// (0x00087829) msg_header_pane_g2_ParamLimits

0xb440,	// (0x00087829) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0008b7c5) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0008b7c5) msg_header_pane_g

0xa7bf,	// (0x00086ba8) main_clock2_pane_ParamLimits

0x55c7,	// (0x000819b0) grid_clock2_toolbar_pane_ParamLimits

0x55c7,	// (0x000819b0) grid_clock2_toolbar_pane

0x55c7,	// (0x000819b0) listscroll_clock2_pane_ParamLimits

0x55c7,	// (0x000819b0) listscroll_clock2_pane

0x5676,	// (0x00081a5f) main_clock2_pane_t3_ParamLimits

0x5676,	// (0x00081a5f) main_clock2_pane_t3

0x5688,	// (0x00081a71) main_clock2_pane_t4_ParamLimits

0x5688,	// (0x00081a71) main_clock2_pane_t4

0xd980,	// (0x00089d69) cell_clock2_toolbar_pane

0xd988,	// (0x00089d71) cell_clock2_toolbar_pane_cp01

0xd988,	// (0x00089d71) cell_clock2_toolbar_pane_cp02

0xd990,	// (0x00089d79) cell_clock2_toolbar_pane_cp03

0xd998,	// (0x00089d81) list_clock2_pane

0xb19d,	// (0x00087586) scroll_pane_cp10

0xd9a0,	// (0x00089d89) list_single_clock2_pane_ParamLimits

0xd9a0,	// (0x00089d89) list_single_clock2_pane

0xa95d,	// (0x00086d46) list_highlight_pane_cp08

0xd9ad,	// (0x00089d96) list_single_clock2_pane_t1

0xd9bb,	// (0x00089da4) list_single_clock2_pane_t2

0x0001,

0xfa8d,	// (0x0008be76) list_single_clock2_pane_t

0xa017,	// (0x00086400) bg_button_pane_cp10

0xd9c9,	// (0x00089db2) cell_clock2_toolbar_pane_g1

0x40bc,	// (0x000804a5) aid_main_viewer_pane_g1_ParamLimits

0x40bc,	// (0x000804a5) aid_main_viewer_pane_g1

0x40c8,	// (0x000804b1) aid_main_viewer_pane_g2_ParamLimits

0x40c8,	// (0x000804b1) aid_main_viewer_pane_g2

0x40d4,	// (0x000804bd) aid_main_viewer_pane_g3_ParamLimits

0x40d4,	// (0x000804bd) aid_main_viewer_pane_g3

0x40e5,	// (0x000804ce) aid_main_viewer_pane_g4_ParamLimits

0x40e5,	// (0x000804ce) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0008b7d6) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0008b7d6) aid_main_viewer_pane_g

0x48b6,	// (0x00080c9f) main_calc_pane_ParamLimits

0x48c3,	// (0x00080cac) main_dialer2_pane_ParamLimits

0xa017,	// (0x00086400) main_cam6_pane

0xa017,	// (0x00086400) main_vid6_pane

0x55d3,	// (0x000819bc) listscroll_gen_pane_cp06_ParamLimits

0x55d3,	// (0x000819bc) listscroll_gen_pane_cp06

0x569a,	// (0x00081a83) main_clock2_pane_t5_ParamLimits

0x569a,	// (0x00081a83) main_clock2_pane_t5

0x56e7,	// (0x00081ad0) aid_call2_pane_cp10_ParamLimits

0x56f9,	// (0x00081ae2) aid_call_pane_cp10_ParamLimits

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x570b,	// (0x00081af4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x570b,	// (0x00081af4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb20c,	// (0x000875f5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x0008bb0a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5721,	// (0x00081b0a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e14,	// (0x000821fd) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e14,	// (0x000821fd) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x0008bbef) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x0008bbef) cell_dialer2_keypad_pane_g

0x5e30,	// (0x00082219) cell_dialer2_keypad_pane_t1

0x68c5,	// (0x00082cae) main_cset_text2_pane_ParamLimits

0x68c5,	// (0x00082cae) main_cset_text2_pane

0xd7ac,	// (0x00089b95) area_vitu2_query_pane_g1_ParamLimits

0x0f9a,	// (0x0007d383) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0008bd9a) area_vitu2_query_pane_g_ParamLimits

0x104b,	// (0x0007d434) area_vitu2_query_pane_t7_ParamLimits

0x104b,	// (0x0007d434) area_vitu2_query_pane_t7

0x6e72,	// (0x0008325b) bg_button_pane_cp018_ParamLimits

0x7075,	// (0x0008345e) bg_button_pane_cp021_ParamLimits

0x106f,	// (0x0007d458) bg_button_pane_cp022_ParamLimits

0x1080,	// (0x0007d469) bg_vkb2_func_pane_cp08_ParamLimits

0x6e72,	// (0x0008325b) bg_vkb2_func_pane_cp06_ParamLimits

0x7075,	// (0x0008345e) bg_vkb2_func_pane_cp07_ParamLimits

0x1092,	// (0x0007d47b) input_focus_pane_cp09_ParamLimits

0x74e2,	// (0x000838cb) cam6_autofocus_pane_ParamLimits

0x74e2,	// (0x000838cb) cam6_autofocus_pane

0x7504,	// (0x000838ed) cam6_image_uncrop_pane_ParamLimits

0x7504,	// (0x000838ed) cam6_image_uncrop_pane

0x753a,	// (0x00083923) cam6_indi_pane_ParamLimits

0x753a,	// (0x00083923) cam6_indi_pane

0x7554,	// (0x0008393d) cam6_mode_pane_ParamLimits

0x7554,	// (0x0008393d) cam6_mode_pane

0x7568,	// (0x00083951) cam6_timer_pane_ParamLimits

0x7568,	// (0x00083951) cam6_timer_pane

0x757c,	// (0x00083965) cam6_zoom_pane_ParamLimits

0x757c,	// (0x00083965) cam6_zoom_pane

0x7598,	// (0x00083981) cam6_mode_pane_g1_ParamLimits

0x7598,	// (0x00083981) cam6_mode_pane_g1

0x75a4,	// (0x0008398d) cam6_mode_pane_g2_ParamLimits

0x75a4,	// (0x0008398d) cam6_mode_pane_g2

0x75b0,	// (0x00083999) cam6_mode_pane_g3_ParamLimits

0x75b0,	// (0x00083999) cam6_mode_pane_g3

0x75bc,	// (0x000839a5) cam6_mode_pane_g4_ParamLimits

0x75bc,	// (0x000839a5) cam6_mode_pane_g4

0x0003,

0xfa92,	// (0x0008be7b) cam6_mode_pane_g_ParamLimits

0xfa92,	// (0x0008be7b) cam6_mode_pane_g

0xd256,	// (0x0008963f) bg_tb_trans_pane_cp08_ParamLimits

0xd256,	// (0x0008963f) bg_tb_trans_pane_cp08

0xd9d1,	// (0x00089dba) cam6_battery_pane_ParamLimits

0xd9d1,	// (0x00089dba) cam6_battery_pane

0xd9e7,	// (0x00089dd0) cam6_indi_pane_g1_ParamLimits

0xd9e7,	// (0x00089dd0) cam6_indi_pane_g1

0xd9f9,	// (0x00089de2) cam6_indi_pane_g2_ParamLimits

0xd9f9,	// (0x00089de2) cam6_indi_pane_g2

0xda0b,	// (0x00089df4) cam6_indi_pane_g3_ParamLimits

0xda0b,	// (0x00089df4) cam6_indi_pane_g3

0x0002,

0xfa9b,	// (0x0008be84) cam6_indi_pane_g_ParamLimits

0xfa9b,	// (0x0008be84) cam6_indi_pane_g

0xda1d,	// (0x00089e06) cam6_indi_pane_t1_ParamLimits

0xda1d,	// (0x00089e06) cam6_indi_pane_t1

0x63c0,	// (0x000827a9) cam6_autofocus_pane_g1

0x63c8,	// (0x000827b1) cam6_autofocus_pane_g2

0x63d0,	// (0x000827b9) cam6_autofocus_pane_g3

0x63d8,	// (0x000827c1) cam6_autofocus_pane_g4

0x0003,

0xfaa2,	// (0x0008be8b) cam6_autofocus_pane_g

0xda43,	// (0x00089e2c) cam6_timer_pane_g1

0xda4b,	// (0x00089e34) cam6_timer_pane_t1

0xda59,	// (0x00089e42) cam6_zoom_cont_pane

0xda61,	// (0x00089e4a) cam6_zoom_pane_g1

0xda6a,	// (0x00089e53) cam6_zoom_pane_g2

0x75c8,	// (0x000839b1) cam6_zoom_pane_g3

0x0002,

0xfaab,	// (0x0008be94) cam6_zoom_pane_g

0xa97f,	// (0x00086d68) cam6_battery_pane_g1

0xa97f,	// (0x00086d68) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0008b786) cam6_battery_pane_g

0xda61,	// (0x00089e4a) cam6_zoom_cont_pane_g1

0xda6a,	// (0x00089e53) cam6_zoom_cont_pane_g2

0xda73,	// (0x00089e5c) cam6_zoom_cont_pane_g3

0x0002,

0xfab2,	// (0x0008be9b) cam6_zoom_cont_pane_g

0x75e6,	// (0x000839cf) cam6_mode_pane_cp_ParamLimits

0x75e6,	// (0x000839cf) cam6_mode_pane_cp

0x75fa,	// (0x000839e3) cam6_zoom_pane_cp_ParamLimits

0x75fa,	// (0x000839e3) cam6_zoom_pane_cp

0x7616,	// (0x000839ff) vid6_image_uncrop_cif_pane_ParamLimits

0x7616,	// (0x000839ff) vid6_image_uncrop_cif_pane

0x7642,	// (0x00083a2b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7642,	// (0x00083a2b) vid6_image_uncrop_nhd_pane

0x7661,	// (0x00083a4a) vid6_image_uncrop_vga_pane_ParamLimits

0x7661,	// (0x00083a4a) vid6_image_uncrop_vga_pane

0x7680,	// (0x00083a69) vid6_image_uncrop_wvga_pane_ParamLimits

0x7680,	// (0x00083a69) vid6_image_uncrop_wvga_pane

0x769f,	// (0x00083a88) vid6_indi_pane_ParamLimits

0x769f,	// (0x00083a88) vid6_indi_pane

0xd256,	// (0x0008963f) bg_tb_trans_pane_cp09_ParamLimits

0xd256,	// (0x0008963f) bg_tb_trans_pane_cp09

0xda8b,	// (0x00089e74) cam6_battery_pane_cp_ParamLimits

0xda8b,	// (0x00089e74) cam6_battery_pane_cp

0xda97,	// (0x00089e80) vid6_indi_pane_g1_ParamLimits

0xda97,	// (0x00089e80) vid6_indi_pane_g1

0xdaa9,	// (0x00089e92) vid6_indi_pane_g2_ParamLimits

0xdaa9,	// (0x00089e92) vid6_indi_pane_g2

0xdabb,	// (0x00089ea4) vid6_indi_pane_g3_ParamLimits

0xdabb,	// (0x00089ea4) vid6_indi_pane_g3

0xdad2,	// (0x00089ebb) vid6_indi_pane_g4_ParamLimits

0xdad2,	// (0x00089ebb) vid6_indi_pane_g4

0xdae9,	// (0x00089ed2) vid6_indi_pane_g5_ParamLimits

0xdae9,	// (0x00089ed2) vid6_indi_pane_g5

0x0004,

0xfab9,	// (0x0008bea2) vid6_indi_pane_g_ParamLimits

0xfab9,	// (0x0008bea2) vid6_indi_pane_g

0xdb03,	// (0x00089eec) vid6_indi_pane_t1_ParamLimits

0xdb03,	// (0x00089eec) vid6_indi_pane_t1

0xdb19,	// (0x00089f02) vid6_indi_pane_t2_ParamLimits

0xdb19,	// (0x00089f02) vid6_indi_pane_t2

0xdb41,	// (0x00089f2a) vid6_indi_pane_t3_ParamLimits

0xdb41,	// (0x00089f2a) vid6_indi_pane_t3

0xdb69,	// (0x00089f52) vid6_indi_pane_t4_ParamLimits

0xdb69,	// (0x00089f52) vid6_indi_pane_t4

0x0003,

0xfac4,	// (0x0008bead) vid6_indi_pane_t_ParamLimits

0xfac4,	// (0x0008bead) vid6_indi_pane_t

0xdb8d,	// (0x00089f76) wait_bar_pane_cp08

0x76c4,	// (0x00083aad) main_cset_text2_pane_t1_ParamLimits

0x76c4,	// (0x00083aad) main_cset_text2_pane_t1

0x75d1,	// (0x000839ba) listscroll_gen_pane_cp06_t1_ParamLimits

0x75d1,	// (0x000839ba) listscroll_gen_pane_cp06_t1

0xa017,	// (0x00086400) main_cam6_set_pane

0xa74d,	// (0x00086b36) bg_tb_trans_pane_cp06_ParamLimits

0x626e,	// (0x00082657) cam4_indicators_pane_g1_ParamLimits

0x627f,	// (0x00082668) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x0008bc2c) cam4_indicators_pane_g_ParamLimits

0x6297,	// (0x00082680) cam4_indicators_pane_t1_ParamLimits

0xa670,	// (0x00086a59) bg_tb_trans_pane_cp07_ParamLimits

0x634e,	// (0x00082737) vid4_indicators_pane_g1_ParamLimits

0x6364,	// (0x0008274d) vid4_indicators_pane_g2_ParamLimits

0x6378,	// (0x00082761) vid4_indicators_pane_g3_ParamLimits

0x638b,	// (0x00082774) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x0008bc3e) vid4_indicators_pane_g_ParamLimits

0x63a9,	// (0x00082792) vid4_indicators_pane_t1_ParamLimits

0x7199,	// (0x00083582) vid4_progress_pane_g1_ParamLimits

0x71a9,	// (0x00083592) vid4_progress_pane_g2_ParamLimits

0x71b9,	// (0x000835a2) vid4_progress_pane_g3_ParamLimits

0x71cb,	// (0x000835b4) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0008bde5) vid4_progress_pane_g_ParamLimits

0x71e9,	// (0x000835d2) vid4_progress_pane_t1_ParamLimits

0x7203,	// (0x000835ec) vid4_progress_pane_t2_ParamLimits

0x721c,	// (0x00083605) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x0008bdf0) vid4_progress_pane_t_ParamLimits

0x7231,	// (0x0008361a) wait_bar_pane_cp07_ParamLimits

0x76eb,	// (0x00083ad4) main_cam6_set_pane_g2_ParamLimits

0x76eb,	// (0x00083ad4) main_cam6_set_pane_g2

0x76f7,	// (0x00083ae0) main_cset6_listscroll_pane_ParamLimits

0x76f7,	// (0x00083ae0) main_cset6_listscroll_pane

0x7724,	// (0x00083b0d) main_cset6_slider_pane_ParamLimits

0x7724,	// (0x00083b0d) main_cset6_slider_pane

0x7730,	// (0x00083b19) main_cset6_text2_pane_ParamLimits

0x7730,	// (0x00083b19) main_cset6_text2_pane

0xdb9c,	// (0x00089f85) main_cset6_text_pane

0xdba4,	// (0x00089f8d) main_cset_list_pane_copy1_ParamLimits

0xdba4,	// (0x00089f8d) main_cset_list_pane_copy1

0xdbb4,	// (0x00089f9d) scroll_pane_cp028_copy1

0x7743,	// (0x00083b2c) cset_list_set_pane_copy1

0x7753,	// (0x00083b3c) aid_position_infowindow_above_copy1

0x775b,	// (0x00083b44) aid_position_infowindow_below_copy1

0x7763,	// (0x00083b4c) cset_list_set_pane_g1_copy1

0x10c8,	// (0x0007d4b1) cset_list_set_pane_g3_copy1_ParamLimits

0x10c8,	// (0x0007d4b1) cset_list_set_pane_g3_copy1

0x10d7,	// (0x0007d4c0) cset_list_set_pane_t1_copy1_ParamLimits

0x10d7,	// (0x0007d4c0) cset_list_set_pane_t1_copy1

0xa670,	// (0x00086a59) list_highlight_pane_cp021_copy1_ParamLimits

0xa670,	// (0x00086a59) list_highlight_pane_cp021_copy1

0xdbbd,	// (0x00089fa6) cset6_slider_pane_ParamLimits

0xdbbd,	// (0x00089fa6) cset6_slider_pane

0xdbe9,	// (0x00089fd2) main_cset6_slider_pane_g1_ParamLimits

0xdbe9,	// (0x00089fd2) main_cset6_slider_pane_g1

0x776b,	// (0x00083b54) main_cset6_slider_pane_g2_ParamLimits

0x776b,	// (0x00083b54) main_cset6_slider_pane_g2

0xdc11,	// (0x00089ffa) main_cset6_slider_pane_g3_ParamLimits

0xdc11,	// (0x00089ffa) main_cset6_slider_pane_g3

0x7793,	// (0x00083b7c) main_cset6_slider_pane_g4_ParamLimits

0x7793,	// (0x00083b7c) main_cset6_slider_pane_g4

0x779f,	// (0x00083b88) main_cset6_slider_pane_g5_ParamLimits

0x779f,	// (0x00083b88) main_cset6_slider_pane_g5

0xd466,	// (0x0008984f) main_cset6_slider_pane_g7_ParamLimits

0xd466,	// (0x0008984f) main_cset6_slider_pane_g7

0xd472,	// (0x0008985b) main_cset6_slider_pane_g8_ParamLimits

0xd472,	// (0x0008985b) main_cset6_slider_pane_g8

0x77ab,	// (0x00083b94) main_cset6_slider_pane_g9_ParamLimits

0x77ab,	// (0x00083b94) main_cset6_slider_pane_g9

0x77b7,	// (0x00083ba0) main_cset6_slider_pane_g10_ParamLimits

0x77b7,	// (0x00083ba0) main_cset6_slider_pane_g10

0x77c3,	// (0x00083bac) main_cset6_slider_pane_g11_ParamLimits

0x77c3,	// (0x00083bac) main_cset6_slider_pane_g11

0x77cf,	// (0x00083bb8) main_cset6_slider_pane_g12_ParamLimits

0x77cf,	// (0x00083bb8) main_cset6_slider_pane_g12

0x77db,	// (0x00083bc4) main_cset6_slider_pane_g13_ParamLimits

0x77db,	// (0x00083bc4) main_cset6_slider_pane_g13

0x77e7,	// (0x00083bd0) main_cset6_slider_pane_g14_ParamLimits

0x77e7,	// (0x00083bd0) main_cset6_slider_pane_g14

0x77f3,	// (0x00083bdc) main_cset6_slider_pane_g15_ParamLimits

0x77f3,	// (0x00083bdc) main_cset6_slider_pane_g15

0x780b,	// (0x00083bf4) main_cset6_slider_pane_g16_ParamLimits

0x780b,	// (0x00083bf4) main_cset6_slider_pane_g16

0x7817,	// (0x00083c00) main_cset6_slider_pane_g17_ParamLimits

0x7817,	// (0x00083c00) main_cset6_slider_pane_g17

0x0011,

0xfacd,	// (0x0008beb6) main_cset6_slider_pane_g_ParamLimits

0xfacd,	// (0x0008beb6) main_cset6_slider_pane_g

0xdc1d,	// (0x0008a006) main_cset6_slider_pane_t1_ParamLimits

0xdc1d,	// (0x0008a006) main_cset6_slider_pane_t1

0x783b,	// (0x00083c24) main_cset6_slider_pane_t2_ParamLimits

0x783b,	// (0x00083c24) main_cset6_slider_pane_t2

0x7866,	// (0x00083c4f) main_cset6_slider_pane_t3_ParamLimits

0x7866,	// (0x00083c4f) main_cset6_slider_pane_t3

0x7891,	// (0x00083c7a) main_cset6_slider_pane_t4_ParamLimits

0x7891,	// (0x00083c7a) main_cset6_slider_pane_t4

0x78bc,	// (0x00083ca5) main_cset6_slider_pane_t5_ParamLimits

0x78bc,	// (0x00083ca5) main_cset6_slider_pane_t5

0xdc5e,	// (0x0008a047) main_cset6_slider_pane_t7_ParamLimits

0xdc5e,	// (0x0008a047) main_cset6_slider_pane_t7

0x78e7,	// (0x00083cd0) main_cset6_slider_pane_t8_ParamLimits

0x78e7,	// (0x00083cd0) main_cset6_slider_pane_t8

0x790b,	// (0x00083cf4) main_cset6_slider_pane_t9_ParamLimits

0x790b,	// (0x00083cf4) main_cset6_slider_pane_t9

0x792f,	// (0x00083d18) main_cset6_slider_pane_t10_ParamLimits

0x792f,	// (0x00083d18) main_cset6_slider_pane_t10

0x7953,	// (0x00083d3c) main_cset6_slider_pane_t11_ParamLimits

0x7953,	// (0x00083d3c) main_cset6_slider_pane_t11

0xdc94,	// (0x0008a07d) main_cset6_slider_pane_t14_ParamLimits

0xdc94,	// (0x0008a07d) main_cset6_slider_pane_t14

0xdccd,	// (0x0008a0b6) main_cset6_slider_pane_t15_ParamLimits

0xdccd,	// (0x0008a0b6) main_cset6_slider_pane_t15

0x000b,

0xfaf2,	// (0x0008bedb) main_cset6_slider_pane_t_ParamLimits

0xfaf2,	// (0x0008bedb) main_cset6_slider_pane_t

0xdd06,	// (0x0008a0ef) cset_slider_pane_g1_copy1

0xdd0f,	// (0x0008a0f8) cset_slider_pane_g2_copy1

0xdd18,	// (0x0008a101) cset_slider_pane_g3_copy1

0xa017,	// (0x00086400) bg_popup_sub_pane_cp011_copy1

0xdd2a,	// (0x0008a113) main_cset_text_pane_g1_copy1

0xd5b6,	// (0x0008999f) main_cset_text_pane_t1_copy1

0xd5c4,	// (0x000899ad) main_cset_text_pane_t2_copy1

0xd5d2,	// (0x000899bb) main_cset_text_pane_t3_copy1

0xd5e0,	// (0x000899c9) main_cset_text_pane_t4_copy1

0xd5ee,	// (0x000899d7) main_cset_text_pane_t5_copy1

0xdd32,	// (0x0008a11b) main_cset_text_pane_t6_copy1

0xdd40,	// (0x0008a129) main_cset_text_pane_t7_copy1

0x7977,	// (0x00083d60) main_cset_text2_pane_t1_copy1

0xa670,	// (0x00086a59) main_ncimui_pane

0x491c,	// (0x00080d05) popup_query_ncimui_window_ParamLimits

0x491c,	// (0x00080d05) popup_query_ncimui_window

0x4f0e,	// (0x000812f7) field_cale_ev2_pane_g4_ParamLimits

0x4f0e,	// (0x000812f7) field_cale_ev2_pane_g4

0x5aea,	// (0x00081ed3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5aea,	// (0x00081ed3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0008bbc6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0008bbc6) cell_video_dialer_keypad_pane_g

0x5b02,	// (0x00081eeb) cell_video_dialer_keypad_pane_t1

0xa017,	// (0x00086400) bg_popup_window_pane_cp012

0xc599,	// (0x00088982) heading_pane_cp06

0xdd6c,	// (0x0008a155) ncim_query_content_pane

0xa017,	// (0x00086400) bg_popup_heading_pane_cp01

0xdd74,	// (0x0008a15d) ncim_heading_pane_t1

0xdd82,	// (0x0008a16b) ncim_indicator_popup_pane

0xdd94,	// (0x0008a17d) ncim_query_button_pane

0xddaa,	// (0x0008a193) ncim_query_content_pane_t1

0xddbc,	// (0x0008a1a5) ncim_query_content_pane_t2

0x0005,

0xfb36,	// (0x0008bf1f) ncim_query_content_pane_t

0xddf6,	// (0x0008a1df) ncim_query_list_pane

0xde08,	// (0x0008a1f1) ncim_query_popup_pane

0xdd82,	// (0x0008a16b) ncim_indicator_popup_pane_ParamLimits

0x7ad3,	// (0x00083ebc) ncim_query_content_pane_g1_ParamLimits

0x7ad3,	// (0x00083ebc) ncim_query_content_pane_g1

0xddaa,	// (0x0008a193) ncim_query_content_pane_t1_ParamLimits

0xddbc,	// (0x0008a1a5) ncim_query_content_pane_t2_ParamLimits

0x7adf,	// (0x00083ec8) ncim_query_content_pane_t3_ParamLimits

0x7adf,	// (0x00083ec8) ncim_query_content_pane_t3

0x7afc,	// (0x00083ee5) ncim_query_content_pane_t4_ParamLimits

0x7afc,	// (0x00083ee5) ncim_query_content_pane_t4

0x7b19,	// (0x00083f02) ncim_query_content_pane_t5_ParamLimits

0x7b19,	// (0x00083f02) ncim_query_content_pane_t5

0xddce,	// (0x0008a1b7) ncim_query_content_pane_t6_ParamLimits

0xddce,	// (0x0008a1b7) ncim_query_content_pane_t6

0xfb36,	// (0x0008bf1f) ncim_query_content_pane_t_ParamLimits

0xddf6,	// (0x0008a1df) ncim_query_list_pane_ParamLimits

0xde08,	// (0x0008a1f1) ncim_query_popup_pane_ParamLimits

0xde1c,	// (0x0008a205) wait_bar_pane_cp04

0xa017,	// (0x00086400) input_focus_pane_cp011

0xde24,	// (0x0008a20d) ncim_query_popup_pane_t1

0xde32,	// (0x0008a21b) ncim_list_query_list_pane_ParamLimits

0xde32,	// (0x0008a21b) ncim_list_query_list_pane

0xa017,	// (0x00086400) bg_button_pane_cp027

0xde45,	// (0x0008a22e) ncim_query_button_pane_g1

0xa017,	// (0x00086400) list_highlight_pane_cp012

0xde4f,	// (0x0008a238) ncim_list_query_list_pane_g1

0xde57,	// (0x0008a240) ncim_list_query_list_pane_t1

0x628b,	// (0x00082674) cam4_indicators_pane_g3_ParamLimits

0x628b,	// (0x00082674) cam4_indicators_pane_g3

0x6397,	// (0x00082780) vid4_indicators_pane_g5_ParamLimits

0x6397,	// (0x00082780) vid4_indicators_pane_g5

0x71da,	// (0x000835c3) vid4_progress_pane_g5_ParamLimits

0x71da,	// (0x000835c3) vid4_progress_pane_g5

0x79a9,	// (0x00083d92) main_ncimui_pane_g1

0x7a15,	// (0x00083dfe) ncimui_group_query_pane_ParamLimits

0x7a15,	// (0x00083dfe) ncimui_group_query_pane

0x7a6f,	// (0x00083e58) ncimui_list_pane_ParamLimits

0x7a6f,	// (0x00083e58) ncimui_list_pane

0x7a96,	// (0x00083e7f) ncimui_text_pane_ParamLimits

0x7a96,	// (0x00083e7f) ncimui_text_pane

0x7b36,	// (0x00083f1f) ncimui_text_pane_t1_ParamLimits

0x7b36,	// (0x00083f1f) ncimui_text_pane_t1

0xde65,	// (0x0008a24e) ncimui_list_single_graphic_pane_ParamLimits

0xde65,	// (0x0008a24e) ncimui_list_single_graphic_pane

0x7b55,	// (0x00083f3e) ncimui_query_pane_ParamLimits

0x7b55,	// (0x00083f3e) ncimui_query_pane

0xa017,	// (0x00086400) list_highlight_pane_cp013

0xde75,	// (0x0008a25e) ncim_list_query_list_pane_t1_copy1

0xde4f,	// (0x0008a238) ncim_list_single_graphic_pane_g1

0x7b68,	// (0x00083f51) ncim_query_button_pane_cp01

0x7b74,	// (0x00083f5d) ncim_query_entry_pane_ParamLimits

0x7b74,	// (0x00083f5d) ncim_query_entry_pane

0x7b87,	// (0x00083f70) ncimui_query_pane_g1

0x7b93,	// (0x00083f7c) ncimui_query_pane_t1_ParamLimits

0x7b93,	// (0x00083f7c) ncimui_query_pane_t1

0xa670,	// (0x00086a59) input_focus_pane_cp012

0xde83,	// (0x0008a26c) ncim_query_entry_pane_t1

0xa7bf,	// (0x00086ba8) main_im_pane_ParamLimits

0xa670,	// (0x00086a59) main_mobtv_pane_ParamLimits

0xa670,	// (0x00086a59) main_mobtv_pane

0x7823,	// (0x00083c0c) main_cset6_slider_pane_g18_ParamLimits

0x7823,	// (0x00083c0c) main_cset6_slider_pane_g18

0x782f,	// (0x00083c18) main_cset6_slider_pane_g19_ParamLimits

0x782f,	// (0x00083c18) main_cset6_slider_pane_g19

0xb5cb,	// (0x000879b4) bg_main_mobtv_pane_ParamLimits

0xb5cb,	// (0x000879b4) bg_main_mobtv_pane

0x7bac,	// (0x00083f95) main_mobtv_info_pane

0x7bb7,	// (0x00083fa0) main_mobtv_loading_pane_ParamLimits

0x7bb7,	// (0x00083fa0) main_mobtv_loading_pane

0xde95,	// (0x0008a27e) main_mobtv_pg_channel_list_pane

0xde9f,	// (0x0008a288) main_mobtv_pg_hdr_pane

0x7bc4,	// (0x00083fad) main_mobtv_programe_curr_pane_ParamLimits

0x7bc4,	// (0x00083fad) main_mobtv_programe_curr_pane

0x7bd1,	// (0x00083fba) main_mobtv_programe_next_pane_ParamLimits

0x7bd1,	// (0x00083fba) main_mobtv_programe_next_pane

0xdea8,	// (0x0008a291) popup_mobtv_noti_window

0xa97f,	// (0x00086d68) main_tv_pg_hdr_pane_g1

0xdeb2,	// (0x0008a29b) main_tv_pg_hdr_pane_g2

0xdeba,	// (0x0008a2a3) main_tv_pg_hdr_pane_g3

0xdec2,	// (0x0008a2ab) main_tv_pg_hdr_pane_g4

0xdeca,	// (0x0008a2b3) main_tv_pg_hdr_pane_g5

0xded4,	// (0x0008a2bd) main_tv_pg_hdr_pane_g6

0xdede,	// (0x0008a2c7) main_tv_pg_hdr_pane_g7

0xdee8,	// (0x0008a2d1) main_tv_pg_hdr_pane_g8

0xdef2,	// (0x0008a2db) main_tv_pg_hdr_pane_g9

0xdefc,	// (0x0008a2e5) main_tv_pg_hdr_pane_g10

0xdf06,	// (0x0008a2ef) main_tv_pg_hdr_pane_g11

0x000a,

0xfb43,	// (0x0008bf2c) main_tv_pg_hdr_pane_g

0xdf10,	// (0x0008a2f9) main_tv_pg_hdr_pane_t1

0xdf1e,	// (0x0008a307) main_tv_pg_hdr_pane_t2

0xdf2c,	// (0x0008a315) main_tv_pg_hdr_pane_t3

0xdf3c,	// (0x0008a325) main_tv_pg_hdr_pane_t4

0xdf4c,	// (0x0008a335) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5a,	// (0x0008bf43) main_tv_pg_hdr_pane_t

0xdf5c,	// (0x0008a345) single_mobtv_pg_channel_pane_ParamLimits

0xdf5c,	// (0x0008a345) single_mobtv_pg_channel_pane

0xdf6e,	// (0x0008a357) single_mobtv_pg_channel_table_pane

0xdf77,	// (0x0008a360) single_mobtv_pg_channel_thumb_pane

0xdf80,	// (0x0008a369) single_tv_pg_channel_pane_g1

0xdf89,	// (0x0008a372) single_tv_pg_channel_pane_g2

0x0001,

0xfb65,	// (0x0008bf4e) single_tv_pg_channel_pane_g

0xa74d,	// (0x00086b36) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa74d,	// (0x00086b36) bg_single_mobtv_pg_channel_thumb_pane

0xdf92,	// (0x0008a37b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf92,	// (0x0008a37b) single_mobtv_pg_channel_thumb_pane_g1

0xdfa0,	// (0x0008a389) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa0,	// (0x0008a389) single_mobtv_pg_channel_thumb_pane_g2

0xdfac,	// (0x0008a395) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfac,	// (0x0008a395) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6a,	// (0x0008bf53) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6a,	// (0x0008bf53) single_mobtv_pg_channel_thumb_pane_g

0xdfb8,	// (0x0008a3a1) single_mobtv_pg_channel_thumb_pane_t1

0xdfc6,	// (0x0008a3af) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb71,	// (0x0008bf5a) single_mobtv_pg_channel_thumb_pane_t

0xa97f,	// (0x00086d68) bg_single_mobtv_pg_channel_table_pane_g1

0xa97f,	// (0x00086d68) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0008b786) bg_single_mobtv_pg_channel_table_pane_g

0xdfd4,	// (0x0008a3bd) single_mobtv_pg_channel_table_pane_t1

0xdfe2,	// (0x0008a3cb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb76,	// (0x0008bf5f) single_mobtv_pg_channel_table_pane_t

0x7be6,	// (0x00083fcf) main_mobtv_info_pane_g1_ParamLimits

0x7be6,	// (0x00083fcf) main_mobtv_info_pane_g1

0x7c02,	// (0x00083feb) main_mobtv_info_pane_t1_ParamLimits

0x7c02,	// (0x00083feb) main_mobtv_info_pane_t1

0x7c7a,	// (0x00084063) main_mobtv_info_pane_t2_ParamLimits

0x7c7a,	// (0x00084063) main_mobtv_info_pane_t2

0x0002,

0xfb80,	// (0x0008bf69) main_mobtv_info_pane_t_ParamLimits

0xfb80,	// (0x0008bf69) main_mobtv_info_pane_t

0x7d0b,	// (0x000840f4) wait_bar_pane_cp05

0x7d1d,	// (0x00084106) main_mobtv_loading_pane_g1_ParamLimits

0x7d1d,	// (0x00084106) main_mobtv_loading_pane_g1

0x7d29,	// (0x00084112) main_mobtv_loading_pane_g2_ParamLimits

0x7d29,	// (0x00084112) main_mobtv_loading_pane_g2

0x7d35,	// (0x0008411e) main_mobtv_loading_pane_g3_ParamLimits

0x7d35,	// (0x0008411e) main_mobtv_loading_pane_g3

0x0002,

0xfb87,	// (0x0008bf70) main_mobtv_loading_pane_g_ParamLimits

0xfb87,	// (0x0008bf70) main_mobtv_loading_pane_g

0xdff0,	// (0x0008a3d9) main_mobtv_loading_pane_t1_ParamLimits

0xdff0,	// (0x0008a3d9) main_mobtv_loading_pane_t1

0xe011,	// (0x0008a3fa) main_mobtv_loading_pane_t2_ParamLimits

0xe011,	// (0x0008a3fa) main_mobtv_loading_pane_t2

0x0001,

0xfb8e,	// (0x0008bf77) main_mobtv_loading_pane_t_ParamLimits

0xfb8e,	// (0x0008bf77) main_mobtv_loading_pane_t

0x7d43,	// (0x0008412c) wait_bar_pane_cp06_ParamLimits

0x7d43,	// (0x0008412c) wait_bar_pane_cp06

0xe035,	// (0x0008a41e) main_mobtv_programe_curr_pane_t1

0xe043,	// (0x0008a42c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb93,	// (0x0008bf7c) main_mobtv_programe_curr_pane_t

0xe051,	// (0x0008a43a) main_mobtv_programe_next_pane_t1

0xe05f,	// (0x0008a448) main_mobtv_programe_next_pane_t2

0xe06d,	// (0x0008a456) main_mobtv_programe_next_pane_t3

0x0002,

0xfb98,	// (0x0008bf81) main_mobtv_programe_next_pane_t

0xa017,	// (0x00086400) bg_popup_mobtv_noti_window_pane

0xe07b,	// (0x0008a464) popup_mobtv_noti_window_g1

0xe083,	// (0x0008a46c) popup_mobtv_noti_window_t1

0xe091,	// (0x0008a47a) popup_mobtv_noti_window_t2

0x0001,

0xfb9f,	// (0x0008bf88) popup_mobtv_noti_window_t

0xa97f,	// (0x00086d68) bg_popup_mobtv_noti_window_pane_g1

0xa017,	// (0x00086400) sc_clock_pane

0xa017,	// (0x00086400) main_fs_bigclock_pane

0x73ad,	// (0x00083796) blid2_tripm_pane_t4_ParamLimits

0x73ad,	// (0x00083796) blid2_tripm_pane_t4

0x7d4f,	// (0x00084138) sc_clock_pane_g1_ParamLimits

0x7d4f,	// (0x00084138) sc_clock_pane_g1

0x7d5d,	// (0x00084146) sc_clock_pane_t1_ParamLimits

0x7d5d,	// (0x00084146) sc_clock_pane_t1

0x7d72,	// (0x0008415b) sc_clock_pane_t2_ParamLimits

0x7d72,	// (0x0008415b) sc_clock_pane_t2

0x7d84,	// (0x0008416d) sc_clock_pane_t3_ParamLimits

0x7d84,	// (0x0008416d) sc_clock_pane_t3

0x0004,

0xfba4,	// (0x0008bf8d) sc_clock_pane_t_ParamLimits

0xfba4,	// (0x0008bf8d) sc_clock_pane_t

0x8874,	// (0x00084c5d) main_fs_bigclock_indicator_pane_ParamLimits

0x8874,	// (0x00084c5d) main_fs_bigclock_indicator_pane

0x7e13,	// (0x000841fc) main_fs_bigclock_pane_g1_ParamLimits

0x7e13,	// (0x000841fc) main_fs_bigclock_pane_g1

0x8880,	// (0x00084c69) main_fs_bigclock_pane_t1_ParamLimits

0x8880,	// (0x00084c69) main_fs_bigclock_pane_t1

0x8892,	// (0x00084c7b) main_fs_bigclock_pane_t2_ParamLimits

0x8892,	// (0x00084c7b) main_fs_bigclock_pane_t2

0x88a6,	// (0x00084c8f) main_fs_bigclock_pane_t3_ParamLimits

0x88a6,	// (0x00084c8f) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x0008c11e) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x0008c11e) main_fs_bigclock_pane_t

0xe779,	// (0x0008ab62) main_fs_bigclock_indicator_pane_g1

0xdd9c,	// (0x0008a185) ncim_query_content_pane_g2_ParamLimits

0xdd9c,	// (0x0008a185) ncim_query_content_pane_g2

0x0001,

0xfb31,	// (0x0008bf1a) ncim_query_content_pane_g_ParamLimits

0xfb31,	// (0x0008bf1a) ncim_query_content_pane_g

0x7d96,	// (0x0008417f) sc_clock_pane_t4_ParamLimits

0x7d96,	// (0x0008417f) sc_clock_pane_t4

0xa670,	// (0x00086a59) main_radioblah_pane

0x612f,	// (0x00082518) cell_call4_button_pane_t1_copy1_ParamLimits

0x612f,	// (0x00082518) cell_call4_button_pane_t1_copy1

0x79c5,	// (0x00083dae) main_ncimui_pane_t1_ParamLimits

0x79c5,	// (0x00083dae) main_ncimui_pane_t1

0x79df,	// (0x00083dc8) main_ncimui_pane_t2_ParamLimits

0x79df,	// (0x00083dc8) main_ncimui_pane_t2

0x0002,

0xfb2a,	// (0x0008bf13) main_ncimui_pane_t_ParamLimits

0xfb2a,	// (0x0008bf13) main_ncimui_pane_t

0xe09f,	// (0x0008a488) main_radioblah_anim_pane_ParamLimits

0xe09f,	// (0x0008a488) main_radioblah_anim_pane

0xe0b0,	// (0x0008a499) main_radioblah_info_pane_ParamLimits

0xe0b0,	// (0x0008a499) main_radioblah_info_pane

0xe0c4,	// (0x0008a4ad) main_radioblah_pane_t1_ParamLimits

0xe0c4,	// (0x0008a4ad) main_radioblah_pane_t1

0xe0e0,	// (0x0008a4c9) main_radioblah_pane_t2_ParamLimits

0xe0e0,	// (0x0008a4c9) main_radioblah_pane_t2

0x0003,

0xfbc5,	// (0x0008bfae) main_radioblah_pane_t_ParamLimits

0xfbc5,	// (0x0008bfae) main_radioblah_pane_t

0x7fb2,	// (0x0008439b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7fb2,	// (0x0008439b) main_radioblah_rocker_ctrl_pane

0xe128,	// (0x0008a511) main_radioblah_info_pane_t1_ParamLimits

0xe128,	// (0x0008a511) main_radioblah_info_pane_t1

0x7ffb,	// (0x000843e4) main_radioblah_info_pane_t2_ParamLimits

0x7ffb,	// (0x000843e4) main_radioblah_info_pane_t2

0x0003,

0xfbce,	// (0x0008bfb7) main_radioblah_info_pane_t_ParamLimits

0xfbce,	// (0x0008bfb7) main_radioblah_info_pane_t

0xa97f,	// (0x00086d68) main_radioblah_rocker_ctrl_pane_g1

0x80ab,	// (0x00084494) main_radioblah_rocker_ctrl_pane_g2

0x80b3,	// (0x0008449c) main_radioblah_rocker_ctrl_pane_g3

0x80bb,	// (0x000844a4) main_radioblah_rocker_ctrl_pane_g4

0x80c3,	// (0x000844ac) main_radioblah_rocker_ctrl_pane_g5

0x80cb,	// (0x000844b4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd7,	// (0x0008bfc0) main_radioblah_rocker_ctrl_pane_g

0x7977,	// (0x00083d60) main_cset_text2_pane_t1_copy1_ParamLimits

0x61b8,	// (0x000825a1) cam4_image_uncrop_qvga_pane

0x62fd,	// (0x000826e6) vid4_image_uncrop_qcif_pane

0x752c,	// (0x00083915) cam6_image_uncrop_qvga_pane_ParamLimits

0x752c,	// (0x00083915) cam6_image_uncrop_qvga_pane

0xda7b,	// (0x00089e64) vid6_image_uncrop_qcif_pane_ParamLimits

0xda7b,	// (0x00089e64) vid6_image_uncrop_qcif_pane

0xa017,	// (0x00086400) bg_popup_preview_window_pane_cp03

0xdd4e,	// (0x0008a137) list_cset_text2_pane

0xdd56,	// (0x0008a13f) main_cset6_text2_pane_g1

0xdd5e,	// (0x0008a147) main_cset6_text2_pane_t1

0x80d3,	// (0x000844bc) list_cset_text2_pane_t1_ParamLimits

0x80d3,	// (0x000844bc) list_cset_text2_pane_t1

0xa670,	// (0x00086a59) main_radioblah_pane_ParamLimits

0x7cf7,	// (0x000840e0) main_mobtv_info_pane_t3_ParamLimits

0x7cf7,	// (0x000840e0) main_mobtv_info_pane_t3

0x7fa0,	// (0x00084389) main_radioblah_pane_g1

0x7fcb,	// (0x000843b4) main_radioblah_info_pane_g1

0x8050,	// (0x00084439) main_radioblah_info_pane_t3_ParamLimits

0x8050,	// (0x00084439) main_radioblah_info_pane_t3

0x3887,	// (0x0007fc70) highlight_cell_cale_month_pane_ParamLimits

0x3887,	// (0x0007fc70) highlight_cell_cale_month_pane

0xa017,	// (0x00086400) main_phob_fisheye_pane

0xcd3c,	// (0x00089125) scroll_pane_cp0031_ParamLimits

0xcd3c,	// (0x00089125) scroll_pane_cp0031

0xdb8d,	// (0x00089f76) wait_bar_pane_cp08_ParamLimits

0x7743,	// (0x00083b2c) cset_list_set_pane_copy1_ParamLimits

0xe162,	// (0x0008a54b) highlight_cell_cale_month_pane_g1

0x80ea,	// (0x000844d3) highlight_cell_cale_month_pane_t1

0xd800,	// (0x00089be9) list_gen_pane_cp01

0xd451,	// (0x0008983a) scroll_pane_01

0x80f8,	// (0x000844e1) list_single_double_fisheye_pane

0x1109,	// (0x0007d4f2) list_double_fisheye_pane_g1_ParamLimits

0x1109,	// (0x0007d4f2) list_double_fisheye_pane_g1

0x1115,	// (0x0007d4fe) list_double_fisheye_pane_g2_ParamLimits

0x1115,	// (0x0007d4fe) list_double_fisheye_pane_g2

0x8101,	// (0x000844ea) list_double_fisheye_pane_g3_ParamLimits

0x8101,	// (0x000844ea) list_double_fisheye_pane_g3

0x0004,

0xfbe4,	// (0x0008bfcd) list_double_fisheye_pane_g_ParamLimits

0xfbe4,	// (0x0008bfcd) list_double_fisheye_pane_g

0x1146,	// (0x0007d52f) list_double_fisheye_pane_t1_ParamLimits

0x1146,	// (0x0007d52f) list_double_fisheye_pane_t1

0x1161,	// (0x0007d54a) list_double_fisheye_pane_t2_ParamLimits

0x1161,	// (0x0007d54a) list_double_fisheye_pane_t2

0x0001,

0xfbef,	// (0x0008bfd8) list_double_fisheye_pane_t_ParamLimits

0xfbef,	// (0x0008bfd8) list_double_fisheye_pane_t

0xa017,	// (0x00086400) main_call5_pane

0x7dbc,	// (0x000841a5) sc_swipe_pane_ParamLimits

0x7dbc,	// (0x000841a5) sc_swipe_pane

0x8119,	// (0x00084502) call5_image_pane_ParamLimits

0x8119,	// (0x00084502) call5_image_pane

0x812b,	// (0x00084514) call5_swipe_1_pane_ParamLimits

0x812b,	// (0x00084514) call5_swipe_1_pane

0x8137,	// (0x00084520) call5_swipe_2_pane_ParamLimits

0x8137,	// (0x00084520) call5_swipe_2_pane

0x8151,	// (0x0008453a) popup_call5_audio_first_window_ParamLimits

0x8151,	// (0x0008453a) popup_call5_audio_first_window

0xa74d,	// (0x00086b36) call5_swipe_1_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) call5_swipe_1_pane_g1

0xe16a,	// (0x0008a553) call5_swipe_1_pane_g2_ParamLimits

0xe16a,	// (0x0008a553) call5_swipe_1_pane_g2

0x0001,

0xfbf4,	// (0x0008bfdd) call5_swipe_1_pane_g_ParamLimits

0xfbf4,	// (0x0008bfdd) call5_swipe_1_pane_g

0xe176,	// (0x0008a55f) call5_swipe_1_pane_t1_ParamLimits

0xe176,	// (0x0008a55f) call5_swipe_1_pane_t1

0xa74d,	// (0x00086b36) call5_swipe_2_pane_g1_ParamLimits

0xa74d,	// (0x00086b36) call5_swipe_2_pane_g1

0xe18b,	// (0x0008a574) call5_swipe_2_pane_g2_ParamLimits

0xe18b,	// (0x0008a574) call5_swipe_2_pane_g2

0x0001,

0xfbf9,	// (0x0008bfe2) call5_swipe_2_pane_g_ParamLimits

0xfbf9,	// (0x0008bfe2) call5_swipe_2_pane_g

0xe197,	// (0x0008a580) call5_swipe_2_pane_t1_ParamLimits

0xe197,	// (0x0008a580) call5_swipe_2_pane_t1

0xe1ac,	// (0x0008a595) sc_swipe_pane_g1_ParamLimits

0xe1ac,	// (0x0008a595) sc_swipe_pane_g1

0xe1b9,	// (0x0008a5a2) sc_swipe_pane_g2_ParamLimits

0xe1b9,	// (0x0008a5a2) sc_swipe_pane_g2

0x0001,

0xfbfe,	// (0x0008bfe7) sc_swipe_pane_g_ParamLimits

0xfbfe,	// (0x0008bfe7) sc_swipe_pane_g

0xe1c5,	// (0x0008a5ae) sc_swipe_pane_t1_ParamLimits

0xe1c5,	// (0x0008a5ae) sc_swipe_pane_t1

0xa017,	// (0x00086400) main_cmail_launcher_pane

0x8161,	// (0x0008454a) aid_size_cell_cmail_l_ParamLimits

0x8161,	// (0x0008454a) aid_size_cell_cmail_l

0x816f,	// (0x00084558) grid_cmail_l_pane_ParamLimits

0x816f,	// (0x00084558) grid_cmail_l_pane

0x817d,	// (0x00084566) cell_cmail_l_pane_ParamLimits

0x817d,	// (0x00084566) cell_cmail_l_pane

0x8198,	// (0x00084581) cell_cmail_l_pane_g1_ParamLimits

0x8198,	// (0x00084581) cell_cmail_l_pane_g1

0x81a4,	// (0x0008458d) cell_cmail_l_pane_t1_ParamLimits

0x81a4,	// (0x0008458d) cell_cmail_l_pane_t1

0x81ba,	// (0x000845a3) cell_cmail_l_pane_t2_ParamLimits

0x81ba,	// (0x000845a3) cell_cmail_l_pane_t2

0x0001,

0xfc03,	// (0x0008bfec) cell_cmail_l_pane_t_ParamLimits

0xfc03,	// (0x0008bfec) cell_cmail_l_pane_t

0xa670,	// (0x00086a59) grid_highlight_pane_cp018_ParamLimits

0xa670,	// (0x00086a59) grid_highlight_pane_cp018

0x1a2f,	// (0x0007de18) main2_pane_ParamLimits

0x1a2f,	// (0x0007de18) main2_pane

0xa84e,	// (0x00086c37) popup_sp_fs_action_menu_bg_pane_g1

0xa856,	// (0x00086c3f) popup_sp_fs_action_menu_bg_pane_g2

0xa85e,	// (0x00086c47) popup_sp_fs_action_menu_bg_pane_g3

0xa866,	// (0x00086c4f) popup_sp_fs_action_menu_bg_pane_g4

0xa86e,	// (0x00086c57) popup_sp_fs_action_menu_bg_pane_g5

0xa876,	// (0x00086c5f) popup_sp_fs_action_menu_bg_pane_g6

0xa87e,	// (0x00086c67) popup_sp_fs_action_menu_bg_pane_g7

0xa886,	// (0x00086c6f) popup_sp_fs_action_menu_bg_pane_g8

0xa88e,	// (0x00086c77) popup_sp_fs_action_menu_bg_pane_g9

0xa896,	// (0x00086c7f) popup_sp_fs_action_menu_bg_pane_g10

0xa896,	// (0x00086c7f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0008b4ee) popup_sp_fs_action_menu_bg_pane_g

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g2

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0008b59c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0008b59c) list_medium_line_x2_t3_g3_g

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t2

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g3_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t3_g2_g

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t2

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g2_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g2

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g3

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t4_g4_g

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t2

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t3

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0008b5b8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0008b5b8) list_medium_line_x2_t4_g4_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g2

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g3

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t2_g4_g

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g4_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g4_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g2

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0008b59c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0008b59c) list_medium_line_x2_t2_g3_g

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g3_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g3_t

0x3a19,	// (0x0007fe02) main_sp_fs_list_pane_ParamLimits

0x3a19,	// (0x0007fe02) main_sp_fs_list_pane

0x3a25,	// (0x0007fe0e) sp_fs_scroll_pane_ParamLimits

0x3a25,	// (0x0007fe0e) sp_fs_scroll_pane

0xaeee,	// (0x000872d7) list_medium_line_x2_t3_t1

0xaeee,	// (0x000872d7) list_medium_line_x2_t3_t2

0xaeee,	// (0x000872d7) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0008b66a) list_medium_line_x2_t3_t

0xaeee,	// (0x000872d7) list_medium_line_x3_t4_t1

0xaeee,	// (0x000872d7) list_medium_line_x3_t4_t2

0xaeee,	// (0x000872d7) list_medium_line_x3_t4_t3

0xaeee,	// (0x000872d7) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0008b671) list_medium_line_x3_t4_t

0xaeee,	// (0x000872d7) list_medium_line_x4_t5_t1

0xaeee,	// (0x000872d7) list_medium_line_x4_t5_t2

0xaeee,	// (0x000872d7) list_medium_line_x4_t5_t3

0xaeee,	// (0x000872d7) list_medium_line_x4_t5_t4

0xaeee,	// (0x000872d7) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0008b67a) list_medium_line_x4_t5_t

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g1

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g2

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g3

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0008b5af) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0008b5af) list_medium_line_t4_g4_g

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t1

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t2

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t3

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t4_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0008b5b8) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0008b5b8) list_medium_line_t4_g4_t

0x3b1e,	// (0x0007ff07) chi_dic_find_pane_g1

0x48d1,	// (0x00080cba) main_tport_pane

0xaeee,	// (0x000872d7) list_medium_line_plain_t1

0xa74d,	// (0x00086b36) list_medium_line_t2_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_t2_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_t2_g2_g

0xa999,	// (0x00086d82) list_medium_line_t2_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_g2_t1

0xa999,	// (0x00086d82) list_medium_line_t2_g2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_t2_g2_t

0x10a3,	// (0x0007d48c) aid_sp_fs_list_icon_a_sm

0x7244,	// (0x0008362d) aid_sp_fs_list_icon_d

0xb37e,	// (0x00087767) aid_sp_fs_text_primary

0x10ab,	// (0x0007d494) aid_sp_fs_text_secondary

0xa017,	// (0x00086400) list_medium_line

0xa017,	// (0x00086400) list_medium_line_g2

0xa017,	// (0x00086400) list_medium_line_g3

0xa017,	// (0x00086400) list_medium_line_plain

0xa017,	// (0x00086400) list_medium_line_plain_t2

0xa017,	// (0x00086400) list_medium_line_plain_t3

0xa017,	// (0x00086400) list_medium_line_right_icon

0xa017,	// (0x00086400) list_medium_line_right_iconx2

0xa017,	// (0x00086400) list_medium_line_t2

0xa017,	// (0x00086400) list_medium_line_t2_g2

0xa017,	// (0x00086400) list_medium_line_t2_g3

0xa017,	// (0x00086400) list_medium_line_t2_right_icon

0xa017,	// (0x00086400) list_medium_line_t2_right_iconx2

0xa017,	// (0x00086400) list_medium_line_t3

0xa017,	// (0x00086400) list_medium_line_t3_g2

0xa017,	// (0x00086400) list_medium_line_t3_g3

0xa017,	// (0x00086400) list_medium_line_t3_right_iconx2

0xa017,	// (0x00086400) list_medium_line_t4_g4

0xa017,	// (0x00086400) list_medium_line_x2

0xa017,	// (0x00086400) list_medium_line_x2_t2_g2

0xa017,	// (0x00086400) list_medium_line_x2_t2_g3

0xa017,	// (0x00086400) list_medium_line_x2_t2_g4

0xa017,	// (0x00086400) list_medium_line_x2_t3

0xa017,	// (0x00086400) list_medium_line_x2_t3_g2

0xa017,	// (0x00086400) list_medium_line_x2_t3_g3

0xa017,	// (0x00086400) list_medium_line_x2_t3_g4

0xa017,	// (0x00086400) list_medium_line_x2_t4_g2

0xa017,	// (0x00086400) list_medium_line_x2_t4_g4

0xa017,	// (0x00086400) list_medium_line_x3

0xa017,	// (0x00086400) list_medium_line_x3_t4

0xa017,	// (0x00086400) list_medium_line_x3_t4_g4

0xa017,	// (0x00086400) list_medium_line_x4_t4

0xa017,	// (0x00086400) list_medium_line_x4_t4_g7

0xa017,	// (0x00086400) list_medium_line_x4_t5

0x10b4,	// (0x0007d49d) list_single_fs_dyc_pane_ParamLimits

0x10b4,	// (0x0007d49d) list_single_fs_dyc_pane

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g1

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g2

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g3

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g4

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g5

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x4_t4_g7_g6

0xa75b,	// (0x00086b44) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa75b,	// (0x00086b44) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0b,	// (0x0008bef4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0b,	// (0x0008bef4) list_medium_line_x4_t4_g7_g

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t1

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t2

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x4_t4_g7_t3

0xb11d,	// (0x00087506) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb11d,	// (0x00087506) list_medium_line_x4_t4_g7_t4

0xb11d,	// (0x00087506) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb11d,	// (0x00087506) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1a,	// (0x0008bf03) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1a,	// (0x0008bf03) list_medium_line_x4_t4_g7_t

0x10ec,	// (0x0007d4d5) list_single_dyc_row_pane_ParamLimits

0x10ec,	// (0x0007d4d5) list_single_dyc_row_pane

0x810d,	// (0x000844f6) call5_gesture_pane_ParamLimits

0x810d,	// (0x000844f6) call5_gesture_pane

0x8143,	// (0x0008452c) call5_windows_pane_ParamLimits

0x8143,	// (0x0008452c) call5_windows_pane

0x81d7,	// (0x000845c0) call5_swipe_1_pane_cp_ParamLimits

0x81d7,	// (0x000845c0) call5_swipe_1_pane_cp

0x81e3,	// (0x000845cc) call5_swipe_2_pane_cp_ParamLimits

0x81e3,	// (0x000845cc) call5_swipe_2_pane_cp

0xa95d,	// (0x00086d46) call5_image_pane_cp

0x81ef,	// (0x000845d8) popup_call5_audio_first_window_cp_ParamLimits

0x81ef,	// (0x000845d8) popup_call5_audio_first_window_cp

0xe1ac,	// (0x0008a595) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1ac,	// (0x0008a595) call5_swipe_1_pane_g1_cp

0xe1da,	// (0x0008a5c3) call5_swipe_1_pane_g2_cp

0xe1c5,	// (0x0008a5ae) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1c5,	// (0x0008a5ae) call5_swipe_1_pane_t1_cp

0xe1ac,	// (0x0008a595) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1ac,	// (0x0008a595) call5_swipe_2_pane_g1_cp

0xe1e2,	// (0x0008a5cb) call5_swipe_2_pane_g2_cp

0xe1ea,	// (0x0008a5d3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1ea,	// (0x0008a5d3) call5_swipe_2_pane_t1_cp

0xa670,	// (0x00086a59) main_sp_fs_email_pane

0xe008,	// (0x0008a3f1) main_sp_fs_listscroll_pane_te

0x81fd,	// (0x000845e6) popup_sp_fs_action_menu_pane_ParamLimits

0x81fd,	// (0x000845e6) popup_sp_fs_action_menu_pane

0xa97f,	// (0x00086d68) bg_sp_fs_ctrlbar_pane_g1

0xe1ff,	// (0x0008a5e8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe208,	// (0x0008a5f1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe211,	// (0x0008a5fa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa97f,	// (0x00086d68) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc08,	// (0x0008bff1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc7e5,	// (0x00088bce) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc7e5,	// (0x00088bce) bg_sp_fs_ctrlbar_ddmenu_pane

0xe21a,	// (0x0008a603) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe21a,	// (0x0008a603) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe226,	// (0x0008a60f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe226,	// (0x0008a60f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc11,	// (0x0008bffa) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc11,	// (0x0008bffa) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe232,	// (0x0008a61b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe232,	// (0x0008a61b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa97f,	// (0x00086d68) list_medium_line_t2_right_icon_g1

0xaeee,	// (0x000872d7) list_medium_line_t2_right_icon_t1

0xaeee,	// (0x000872d7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc16,	// (0x0008bfff) list_medium_line_t2_right_icon_t

0xb5bd,	// (0x000879a6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb5bd,	// (0x000879a6) bg_sp_fs_ctrlbar_pane

0x829c,	// (0x00084685) main_sp_fs_ctrlbar_button_pane_cp01

0x82a4,	// (0x0008468d) main_sp_fs_ctrlbar_ddmenu_pane

0xe286,	// (0x0008a66f) main_sp_fs_ctrlbar_pane_g1

0xe292,	// (0x0008a67b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1b,	// (0x0008c004) main_sp_fs_ctrlbar_pane_g

0x82e2,	// (0x000846cb) main_sp_fs_ctrlbar_pane_t1

0x831f,	// (0x00084708) main_sp_fs_ctrlbar_pane

0x8339,	// (0x00084722) main_sp_fs_listscroll_pane_te_cp01

0x1183,	// (0x0007d56c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1183,	// (0x0007d56c) popup_sp_fs_action_menu_pane_cp01

0xa670,	// (0x00086a59) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa670,	// (0x00086a59) bg_sp_fs_highlight_list_pane_cp01

0x11a3,	// (0x0007d58c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x11a3,	// (0x0007d58c) sp_fs_action_menu_list_gene_pane_g1

0xe2b9,	// (0x0008a6a2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2b9,	// (0x0008a6a2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc29,	// (0x0008c012) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc29,	// (0x0008c012) sp_fs_action_menu_list_gene_pane_g

0x11b2,	// (0x0007d59b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x11b2,	// (0x0007d59b) sp_fs_action_menu_list_gene_pane_t1

0x11ca,	// (0x0007d5b3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x11ca,	// (0x0007d5b3) sp_fs_action_menu_list_gene_pane

0xe2c6,	// (0x0008a6af) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2c6,	// (0x0008a6af) popup_sp_fs_action_menu_bg_pane

0x11ed,	// (0x0007d5d6) sp_fs_action_menu_list_pane_ParamLimits

0x11ed,	// (0x0007d5d6) sp_fs_action_menu_list_pane

0x1211,	// (0x0007d5fa) sp_fs_scroll_pane_cp01_ParamLimits

0x1211,	// (0x0007d5fa) sp_fs_scroll_pane_cp01

0xaeee,	// (0x000872d7) list_medium_line_plain_t2_t1

0xaeee,	// (0x000872d7) list_medium_line_plain_t2_t2

0x0001,

0xfc16,	// (0x0008bfff) list_medium_line_plain_t2_t

0xaeee,	// (0x000872d7) list_medium_line_plain_t3_t1

0xaeee,	// (0x000872d7) list_medium_line_plain_t3_t2

0xaeee,	// (0x000872d7) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0008b66a) list_medium_line_plain_t3_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t2_g2_g

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g2_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_x2_t2_g2_t

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_t4_g2_g

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t2

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t3

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0008b5b8) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0008b5b8) list_medium_line_x2_t4_g2_t

0xa97f,	// (0x00086d68) list_medium_line_t3_right_iconx2_g1

0xa97f,	// (0x00086d68) list_medium_line_t3_right_iconx2_g2

0xa97f,	// (0x00086d68) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0008b78b) list_medium_line_t3_right_iconx2_g

0xaeee,	// (0x000872d7) list_medium_line_t3_right_iconx2_t1

0xaeee,	// (0x000872d7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc16,	// (0x0008bfff) list_medium_line_t3_right_iconx2_t

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g1

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g2

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g3

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0008b5af) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0008b5af) list_medium_line_x3_t4_g4_g

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t1

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t2

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t3

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0008b5b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0008b5b8) list_medium_line_x3_t4_g4_t

0x1237,	// (0x0007d620) list_single_dyc_row_text_pane_t1_ParamLimits

0x1237,	// (0x0007d620) list_single_dyc_row_text_pane_t1

0x127a,	// (0x0007d663) list_single_dyc_row_text_pane_t2_ParamLimits

0x127a,	// (0x0007d663) list_single_dyc_row_text_pane_t2

0x12f0,	// (0x0007d6d9) list_single_dyc_row_text_pane_t3_ParamLimits

0x12f0,	// (0x0007d6d9) list_single_dyc_row_text_pane_t3

0x0005,

0xfc2e,	// (0x0008c017) list_single_dyc_row_text_pane_t_ParamLimits

0xfc2e,	// (0x0008c017) list_single_dyc_row_text_pane_t

0x13cf,	// (0x0007d7b8) list_single_dyc_row_pane_g1_ParamLimits

0x13cf,	// (0x0007d7b8) list_single_dyc_row_pane_g1

0x13db,	// (0x0007d7c4) list_single_dyc_row_pane_g2_ParamLimits

0x13db,	// (0x0007d7c4) list_single_dyc_row_pane_g2

0x13e7,	// (0x0007d7d0) list_single_dyc_row_pane_g3_ParamLimits

0x13e7,	// (0x0007d7d0) list_single_dyc_row_pane_g3

0x13f3,	// (0x0007d7dc) list_single_dyc_row_pane_g4_ParamLimits

0x13f3,	// (0x0007d7dc) list_single_dyc_row_pane_g4

0x0003,

0xfc3b,	// (0x0008c024) list_single_dyc_row_pane_g_ParamLimits

0xfc3b,	// (0x0008c024) list_single_dyc_row_pane_g

0x13ff,	// (0x0007d7e8) list_single_dyc_row_text_pane_ParamLimits

0x13ff,	// (0x0007d7e8) list_single_dyc_row_text_pane

0xa017,	// (0x00086400) bg_sp_fs_scroll_pane

0xe2d4,	// (0x0008a6bd) thumb_sp_fs_scroll_pane

0xa74d,	// (0x00086b36) list_medium_line_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g1

0xa999,	// (0x00086d82) list_medium_line_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t1

0xa74d,	// (0x00086b36) list_medium_line_x2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_x2_g

0xa999,	// (0x00086d82) list_medium_line_x2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t1

0xa74d,	// (0x00086b36) list_medium_line_x3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x3_g1

0xd3f6,	// (0x000897df) list_medium_line_x3_g2_ParamLimits

0xd3f6,	// (0x000897df) list_medium_line_x3_g2

0x0001,

0xfc44,	// (0x0008c02d) list_medium_line_x3_g_ParamLimits

0xfc44,	// (0x0008c02d) list_medium_line_x3_g

0xe2dd,	// (0x0008a6c6) list_medium_line_x3_t1_ParamLimits

0xe2dd,	// (0x0008a6c6) list_medium_line_x3_t1

0xe2f1,	// (0x0008a6da) thumb_sp_fs_scroll_pane_g1

0xe2fa,	// (0x0008a6e3) thumb_sp_fs_scroll_pane_g2

0xe303,	// (0x0008a6ec) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x0008c032) thumb_sp_fs_scroll_pane_g

0xe2f1,	// (0x0008a6da) bg_sp_fs_scroll_pane_g1

0xe2fa,	// (0x0008a6e3) bg_sp_fs_scroll_pane_g2

0xe303,	// (0x0008a6ec) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x0008c032) bg_sp_fs_scroll_pane_g

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g1

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g2

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g3

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0008b5af) list_medium_line_x2_t3_g4_g

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t1

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t2

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_x2_t3_g4_t

0xa74d,	// (0x00086b36) list_medium_line_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_g2_g

0xa999,	// (0x00086d82) list_medium_line_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_g2_t1

0xa74d,	// (0x00086b36) list_medium_line_t3_g2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g2_g1

0xa74d,	// (0x00086b36) list_medium_line_t3_g2_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0008b5aa) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0008b5aa) list_medium_line_t3_g2_g

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t1

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t2

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_g2_t

0xa97f,	// (0x00086d68) list_medium_line_right_icon_g1

0xaeee,	// (0x000872d7) list_medium_line_right_icon_t1

0xa74d,	// (0x00086b36) list_medium_line_t2_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g1

0xa999,	// (0x00086d82) list_medium_line_t2_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_t1

0xa999,	// (0x00086d82) list_medium_line_t2_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_t2_t

0xa74d,	// (0x00086b36) list_medium_line_t3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g1

0xa999,	// (0x00086d82) list_medium_line_t3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_t1

0xa999,	// (0x00086d82) list_medium_line_t3_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_t2

0xa999,	// (0x00086d82) list_medium_line_t3_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_t

0xa74d,	// (0x00086b36) list_medium_line_g3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g3_g1

0xa74d,	// (0x00086b36) list_medium_line_g3_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g3_g2

0xa74d,	// (0x00086b36) list_medium_line_g3_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0008b59c) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0008b59c) list_medium_line_g3_g

0xa999,	// (0x00086d82) list_medium_line_g3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_g3_t1

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g1

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g2

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0008b59c) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0008b59c) list_medium_line_t2_g3_g

0xa999,	// (0x00086d82) list_medium_line_t2_g3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_g3_t1

0xa999,	// (0x00086d82) list_medium_line_t2_g3_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0008b61f) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0008b61f) list_medium_line_t2_g3_t

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g1_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g1

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g2_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g2

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g3_ParamLimits

0xa74d,	// (0x00086b36) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0008b59c) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0008b59c) list_medium_line_t3_g3_g

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t1_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t1

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t2_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t2

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t3_ParamLimits

0xa999,	// (0x00086d82) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0008b5a3) list_medium_line_t3_g3_t

0xa97f,	// (0x00086d68) list_medium_line_right_iconx2_g1

0xa97f,	// (0x00086d68) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0008b786) list_medium_line_right_iconx2_g

0xaeee,	// (0x000872d7) list_medium_line_right_iconx2_t1

0xa97f,	// (0x00086d68) list_medium_line_t2_right_iconx2_g1

0xa97f,	// (0x00086d68) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0008b786) list_medium_line_t2_right_iconx2_g

0xaeee,	// (0x000872d7) list_medium_line_t2_right_iconx2_t1

0xaeee,	// (0x000872d7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc16,	// (0x0008bfff) list_medium_line_t2_right_iconx2_t

0xaeee,	// (0x000872d7) list_medium_line_x4_t4_t1

0xaeee,	// (0x000872d7) list_medium_line_x4_t4_t2

0xaeee,	// (0x000872d7) list_medium_line_x4_t4_t3

0xaeee,	// (0x000872d7) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0008b671) list_medium_line_x4_t4_t

0x8374,	// (0x0008475d) tport_appsw_pane_ParamLimits

0x8374,	// (0x0008475d) tport_appsw_pane

0x8382,	// (0x0008476b) tport_contact_pane_ParamLimits

0x8382,	// (0x0008476b) tport_contact_pane

0x8392,	// (0x0008477b) tport_listscroll_pane_ParamLimits

0x8392,	// (0x0008477b) tport_listscroll_pane

0x83a2,	// (0x0008478b) cell_tport_appsw_pane_ParamLimits

0x83a2,	// (0x0008478b) cell_tport_appsw_pane

0xa75b,	// (0x00086b44) tport_appsw_pane_g1_ParamLimits

0xa75b,	// (0x00086b44) tport_appsw_pane_g1

0x83cf,	// (0x000847b8) tport_contact_pane_g1

0x83d8,	// (0x000847c1) tport_contact_pane_t1

0x83e6,	// (0x000847cf) tport_contact_pane_t2

0x0001,

0xfc50,	// (0x0008c039) tport_contact_pane_t

0xe30c,	// (0x0008a6f5) list_tport_pane

0xe315,	// (0x0008a6fe) scroll_pane_cp_030

0x83fc,	// (0x000847e5) cell_tport_appsw_pane_g1

0x840c,	// (0x000847f5) cell_tport_appsw_pane_t1

0x841a,	// (0x00084803) grid_highlight_pane_cp019

0x8422,	// (0x0008480b) list_tport_double_graphic_pane_ParamLimits

0x8422,	// (0x0008480b) list_tport_double_graphic_pane

0xa670,	// (0x00086a59) list_highlight_pane_cp023_ParamLimits

0xa670,	// (0x00086a59) list_highlight_pane_cp023

0x842f,	// (0x00084818) list_tport_double_graphic_pane_g1_ParamLimits

0x842f,	// (0x00084818) list_tport_double_graphic_pane_g1

0x843c,	// (0x00084825) list_tport_double_graphic_pane_t1_ParamLimits

0x843c,	// (0x00084825) list_tport_double_graphic_pane_t1

0x8451,	// (0x0008483a) list_tport_double_graphic_pane_t2_ParamLimits

0x8451,	// (0x0008483a) list_tport_double_graphic_pane_t2

0x0001,

0xfc5c,	// (0x0008c045) list_tport_double_graphic_pane_t_ParamLimits

0xfc5c,	// (0x0008c045) list_tport_double_graphic_pane_t

0xa017,	// (0x00086400) main_cale_note_pane

0x6564,	// (0x0008294d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6564,	// (0x0008294d) cell_vitu2_function_top_wide_pane_cp01

0x7d0b,	// (0x000840f4) wait_bar_pane_cp05_ParamLimits

0xa670,	// (0x00086a59) listscroll_cmail_pane

0xe326,	// (0x0008a70f) list_cmail_pane

0x8463,	// (0x0008484c) list_cmail_body_pane

0x847d,	// (0x00084866) list_single_cmail_header_caption_pane

0x849d,	// (0x00084886) list_single_cmail_header_detail_pane_ParamLimits

0x849d,	// (0x00084886) list_single_cmail_header_detail_pane

0xe33d,	// (0x0008a726) list_single_cmail_header_caption_pane_t1

0x141e,	// (0x0007d807) list_single_cmail_header_detail_pane_g1_ParamLimits

0x141e,	// (0x0007d807) list_single_cmail_header_detail_pane_g1

0x84d3,	// (0x000848bc) list_single_cmail_header_detail_pane_g2_ParamLimits

0x84d3,	// (0x000848bc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc61,	// (0x0008c04a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc61,	// (0x0008c04a) list_single_cmail_header_detail_pane_g

0x1436,	// (0x0007d81f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1436,	// (0x0007d81f) list_single_cmail_header_detail_pane_t1

0x1496,	// (0x0007d87f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1496,	// (0x0007d87f) list_single_cmail_header_editor_pane_bg

0xdf89,	// (0x0008a372) list_cmail_body_pane_g1

0xe361,	// (0x0008a74a) list_cmail_body_pane_t1

0xd2f5,	// (0x000896de) list_single_cmail_header_editor_pane_bg_g1

0xabb7,	// (0x00086fa0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd305,	// (0x000896ee) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2fd,	// (0x000896e6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd567,	// (0x00089950) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd325,	// (0x0008970e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd315,	// (0x000896fe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd31d,	// (0x00089706) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab97,	// (0x00086f80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84df,	// (0x000848c8) calenote_gesture_pane_ParamLimits

0x84df,	// (0x000848c8) calenote_gesture_pane

0x84f9,	// (0x000848e2) calenote_window_pane_ParamLimits

0x84f9,	// (0x000848e2) calenote_window_pane

0xe36f,	// (0x0008a758) popup_note_window_cp01

0x8511,	// (0x000848fa) calenote_swipe_1_pane_ParamLimits

0x8511,	// (0x000848fa) calenote_swipe_1_pane

0x81e3,	// (0x000845cc) calenote_swipe_2_pane_ParamLimits

0x81e3,	// (0x000845cc) calenote_swipe_2_pane

0xe1ac,	// (0x0008a595) calenote_swipe_1_pane_g1_ParamLimits

0xe1ac,	// (0x0008a595) calenote_swipe_1_pane_g1

0xe1b9,	// (0x0008a5a2) calenote_swipe_1_pane_g2_ParamLimits

0xe1b9,	// (0x0008a5a2) calenote_swipe_1_pane_g2

0x0001,

0xfbfe,	// (0x0008bfe7) calenote_swipe_1_pane_g_ParamLimits

0xfbfe,	// (0x0008bfe7) calenote_swipe_1_pane_g

0xe381,	// (0x0008a76a) calenote_swipe_1_pane_t1_ParamLimits

0xe381,	// (0x0008a76a) calenote_swipe_1_pane_t1

0xe1ac,	// (0x0008a595) calenote_swipe_2_pane_g1_ParamLimits

0xe1ac,	// (0x0008a595) calenote_swipe_2_pane_g1

0xe3a0,	// (0x0008a789) calenote_swipe_2_pane_g2_ParamLimits

0xe3a0,	// (0x0008a789) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x0008c056) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x0008c056) calenote_swipe_2_pane_g

0xe3ac,	// (0x0008a795) calenote_swipe_2_pane_t1_ParamLimits

0xe3ac,	// (0x0008a795) calenote_swipe_2_pane_t1

0xa017,	// (0x00086400) main_mup_navstr_pane

0x53eb,	// (0x000817d4) main_mup3_pane_t7_ParamLimits

0x53eb,	// (0x000817d4) main_mup3_pane_t7

0x5bf9,	// (0x00081fe2) main_mp4_pane_g6_ParamLimits

0x5bf9,	// (0x00081fe2) main_mp4_pane_g6

0x5f87,	// (0x00082370) main_image3_pane_t4_ParamLimits

0x5f87,	// (0x00082370) main_image3_pane_t4

0x8524,	// (0x0008490d) popup_navstr_preview_pane_ParamLimits

0x8524,	// (0x0008490d) popup_navstr_preview_pane

0x8530,	// (0x00084919) scroll_navstr_pane_ParamLimits

0x8530,	// (0x00084919) scroll_navstr_pane

0xa017,	// (0x00086400) bg_popup_preview_window_pane_cp04

0xe3d3,	// (0x0008a7bc) popup_navstr_preview_pane_t1

0x853c,	// (0x00084925) scroll_navstr_pane_g1_ParamLimits

0x853c,	// (0x00084925) scroll_navstr_pane_g1

0x8549,	// (0x00084932) scroll_navstr_pane_t1_ParamLimits

0x8549,	// (0x00084932) scroll_navstr_pane_t1

0xe378,	// (0x0008a761) bg_button_pane_cp014

0xe378,	// (0x0008a761) bg_button_pane_cp030

0x1129,	// (0x0007d512) list_double_fisheye_pane_g4_ParamLimits

0x1129,	// (0x0007d512) list_double_fisheye_pane_g4

0x1135,	// (0x0007d51e) list_double_fisheye_pane_g5_ParamLimits

0x1135,	// (0x0007d51e) list_double_fisheye_pane_g5

0xc575,	// (0x0008895e) sp_fs_scroll_pane_cp03

0xe286,	// (0x0008a66f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe292,	// (0x0008a67b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1b,	// (0x0008c004) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x82e2,	// (0x000846cb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe335,	// (0x0008a71e) sp_fs_scroll_pane_cp02

0xa8b9,	// (0x00086ca2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8b9,	// (0x00086ca2) popup_sp_fs_calendar_preview_list_single_pane

0xa017,	// (0x00086400) main_cam6_pano_pane

0xa670,	// (0x00086a59) main_mup3_pane_ParamLimits

0xa017,	// (0x00086400) main_phacti_pane

0x7bde,	// (0x00083fc7) bg_button_pane_cp11

0x7bf6,	// (0x00083fdf) main_mobtv_info_pane_g2_ParamLimits

0x7bf6,	// (0x00083fdf) main_mobtv_info_pane_g2

0x0001,

0xfb7b,	// (0x0008bf64) main_mobtv_info_pane_g_ParamLimits

0xfb7b,	// (0x0008bf64) main_mobtv_info_pane_g

0x7da8,	// (0x00084191) sc_clock_pane_t5_ParamLimits

0x7da8,	// (0x00084191) sc_clock_pane_t5

0x7fa0,	// (0x00084389) main_radioblah_pane_g1_ParamLimits

0xe0f8,	// (0x0008a4e1) main_radioblah_pane_t3_ParamLimits

0xe0f8,	// (0x0008a4e1) main_radioblah_pane_t3

0xe110,	// (0x0008a4f9) main_radioblah_pane_t4_ParamLimits

0xe110,	// (0x0008a4f9) main_radioblah_pane_t4

0x7fbe,	// (0x000843a7) main_radioblah_text_pane_ParamLimits

0x7fbe,	// (0x000843a7) main_radioblah_text_pane

0x7fcb,	// (0x000843b4) main_radioblah_info_pane_g1_ParamLimits

0x8064,	// (0x0008444d) main_radioblah_info_pane_t4_ParamLimits

0x8064,	// (0x0008444d) main_radioblah_info_pane_t4

0xa670,	// (0x00086a59) main_sp_fs_calendar_pane

0x855b,	// (0x00084944) main_phacti_pane_g1

0x8563,	// (0x0008494c) phacti_note_pane_ParamLimits

0x8563,	// (0x0008494c) phacti_note_pane

0xe3ea,	// (0x0008a7d3) phacti_term_pane_ParamLimits

0xe3ea,	// (0x0008a7d3) phacti_term_pane

0xe3ff,	// (0x0008a7e8) phacti_note_pane_t1_ParamLimits

0xe3ff,	// (0x0008a7e8) phacti_note_pane_t1

0x14ad,	// (0x0007d896) phacti_term_pane_g1

0x14b5,	// (0x0007d89e) phacti_term_pane_t1_ParamLimits

0x14b5,	// (0x0007d89e) phacti_term_pane_t1

0xe416,	// (0x0008a7ff) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe41e,	// (0x0008a807) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x0008c060) popup_sp_fs_calendar_preview_list_single_pane_g

0xe426,	// (0x0008a80f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe426,	// (0x0008a80f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe43c,	// (0x0008a825) aid_popup_sp_fs_bg_corner_pane

0xa97f,	// (0x00086d68) popup_sp_fs_calendar_preview_bg_pane_g1

0xa017,	// (0x00086400) popup_sp_fs_calendar_preview_bg_pane

0xe444,	// (0x0008a82d) popup_sp_fs_calendar_preview_list_pane

0xb5bd,	// (0x000879a6) bg_main_sp_fs_cale_pane_ParamLimits

0xb5bd,	// (0x000879a6) bg_main_sp_fs_cale_pane

0x14e8,	// (0x0007d8d1) listscroll_cale_mrui_pane_ParamLimits

0x14e8,	// (0x0007d8d1) listscroll_cale_mrui_pane

0x14fd,	// (0x0007d8e6) listscroll_sp_fs_schedule_track_pane

0x1506,	// (0x0007d8ef) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1506,	// (0x0007d8ef) main_sp_fs_ctrlbar_pane_cp01

0xe44c,	// (0x0008a835) main_sp_fs_ribbon_pane

0x1519,	// (0x0007d902) popup_sp_fs_cale_preview_window

0x85c6,	// (0x000849af) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85c6,	// (0x000849af) list_single_sp_fs_schedule_track_pane

0xa67e,	// (0x00086a67) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa67e,	// (0x00086a67) bg_sp_fs_highlight_list_pane_cp03

0x85dd,	// (0x000849c6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85dd,	// (0x000849c6) list_single_sp_fs_schedule_track_pane_g1

0x85e9,	// (0x000849d2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85e9,	// (0x000849d2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x0008c065) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x0008c065) list_single_sp_fs_schedule_track_pane_g

0x85f5,	// (0x000849de) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85f5,	// (0x000849de) list_single_sp_fs_schedule_track_pane_t1

0x8613,	// (0x000849fc) sp_fs_schedule_track_pane_ParamLimits

0x8613,	// (0x000849fc) sp_fs_schedule_track_pane

0xe454,	// (0x0008a83d) sp_fs_schedule_track_pane_g1

0xe45c,	// (0x0008a845) sp_fs_schedule_track_pane_g2

0xe464,	// (0x0008a84d) sp_fs_schedule_track_pane_g3

0xe46c,	// (0x0008a855) sp_fs_schedule_track_pane_g4

0xe474,	// (0x0008a85d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x0008c06a) sp_fs_schedule_track_pane_g

0xd2f5,	// (0x000896de) bg_sp_fs_schedule_viewer_highlight_g1

0xabb7,	// (0x00086fa0) bg_sp_fs_schedule_viewer_highlight_g2

0xd2fd,	// (0x000896e6) bg_sp_fs_schedule_viewer_highlight_g3

0xd305,	// (0x000896ee) bg_sp_fs_schedule_viewer_highlight_g4

0xd567,	// (0x00089950) bg_sp_fs_schedule_viewer_highlight_g5

0xd315,	// (0x000896fe) bg_sp_fs_schedule_viewer_highlight_g6

0xd31d,	// (0x00089706) bg_sp_fs_schedule_viewer_highlight_g7

0xd325,	// (0x0008970e) bg_sp_fs_schedule_viewer_highlight_g8

0xab97,	// (0x00086f80) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x0008c075) bg_sp_fs_schedule_viewer_highlight_g

0xa017,	// (0x00086400) bg_main_sp_fs_ribbon_pane

0x8625,	// (0x00084a0e) main_sp_fs_ribbon_pane_g1

0xe47c,	// (0x0008a865) main_sp_fs_ribbon_pane_t1

0x862e,	// (0x00084a17) main_sp_fs_ribbon_pane_t2

0xe48b,	// (0x0008a874) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x0008c088) main_sp_fs_ribbon_pane_t

0xe49a,	// (0x0008a883) main_sp_fs_ribbon_scheduler_pane

0xe4a2,	// (0x0008a88b) bg_main_sp_fs_ribbon_pane_g1

0xe4c5,	// (0x0008a8ae) bg_main_sp_fs_ribbon_pane_g2

0xe4ce,	// (0x0008a8b7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x0008c08f) bg_main_sp_fs_ribbon_pane_g

0xe4d6,	// (0x0008a8bf) main_sp_fs_ribbon_scheduler_pane_g1

0xe4df,	// (0x0008a8c8) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e8,	// (0x0008a8d1) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x0008c096) main_sp_fs_ribbon_scheduler_pane_g

0xe4f1,	// (0x0008a8da) list_cale_mrui_pane

0x863d,	// (0x00084a26) sp_fs_scroll_pane_cp07_ParamLimits

0x863d,	// (0x00084a26) sp_fs_scroll_pane_cp07

0x8659,	// (0x00084a42) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8659,	// (0x00084a42) bg_sp_fs_schedule_viewer_highlight

0xe4fe,	// (0x0008a8e7) list_single_sp_fs_schedule_track_pane_cp01

0xe506,	// (0x0008a8ef) list_sp_fs_schedule_track_pane

0xe50e,	// (0x0008a8f7) sp_fs_scroll_pane_cp06_ParamLimits

0xe50e,	// (0x0008a8f7) sp_fs_scroll_pane_cp06

0xa97f,	// (0x00086d68) bgmain_sp_fs_calendar_pane_g1

0x152b,	// (0x0007d914) list_single_cale_mrui_pane_ParamLimits

0x152b,	// (0x0007d914) list_single_cale_mrui_pane

0x154e,	// (0x0007d937) list_single_cale_mrui_row_pane_ParamLimits

0x154e,	// (0x0007d937) list_single_cale_mrui_row_pane

0x155b,	// (0x0007d944) list_single_cale_mrui_row_pane_g1_ParamLimits

0x155b,	// (0x0007d944) list_single_cale_mrui_row_pane_g1

0x1593,	// (0x0007d97c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1593,	// (0x0007d97c) list_single_cale_mrui_row_pane_t1

0x15a5,	// (0x0007d98e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x15a5,	// (0x0007d98e) list_single_cale_mrui_row_pane_t2

0x160b,	// (0x0007d9f4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x160b,	// (0x0007d9f4) list_single_cale_mrui_row_pane_t3

0x163a,	// (0x0007da23) list_single_cale_mrui_row_pane_t4_ParamLimits

0x163a,	// (0x0007da23) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x0008c0a4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x0008c0a4) list_single_cale_mrui_row_pane_t

0x166b,	// (0x0007da54) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x166b,	// (0x0007da54) list_single_cmail_header_editor_pane_bg_cp01

0x1695,	// (0x0007da7e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1695,	// (0x0007da7e) list_single_cmail_header_editor_pane_bg_cp02

0x8666,	// (0x00084a4f) main_radioblah_text_pane_t1_ParamLimits

0x8666,	// (0x00084a4f) main_radioblah_text_pane_t1

0xe52d,	// (0x0008a916) cam6_indi_pane_cp01

0xe535,	// (0x0008a91e) cam6_mode_pane_cp01

0xe53d,	// (0x0008a926) cam6_pano_pane

0xe546,	// (0x0008a92f) cam6_zoom_pane_cp01

0xe550,	// (0x0008a939) cam6_pano_image_pane

0xe559,	// (0x0008a942) cam6_pano_pane_g1

0xdf89,	// (0x0008a372) cam6_pano_pane_g2

0xe562,	// (0x0008a94b) cam6_pano_pane_g3

0xe56b,	// (0x0008a954) cam6_pano_pane_g4

0xcfca,	// (0x000893b3) cam6_pano_pane_g5

0xe574,	// (0x0008a95d) cam6_pano_pane_g6

0xe57c,	// (0x0008a965) cam6_pano_pane_g7

0xe584,	// (0x0008a96d) cam6_pano_pane_g8

0xe58d,	// (0x0008a976) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x0008c0ad) cam6_pano_pane_g

0xa017,	// (0x00086400) main_browser_tag_pane

0xe3cb,	// (0x0008a7b4) grid_navstr_albumart_pane

0xe598,	// (0x0008a981) cell_navstr_albumart_pane_ParamLimits

0xe598,	// (0x0008a981) cell_navstr_albumart_pane

0xe5b4,	// (0x0008a99d) cell_navstr_albumart_pane_g1

0xc4cd,	// (0x000888b6) cell_navstr_albumart_pane_g2

0xc4dd,	// (0x000888c6) cell_navstr_albumart_pane_g3

0xc4d5,	// (0x000888be) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x0008c0c0) cell_navstr_albumart_pane_g

0x8680,	// (0x00084a69) bt_list_pane_ParamLimits

0x8680,	// (0x00084a69) bt_list_pane

0x8699,	// (0x00084a82) bt_list_pane_t1

0x86a8,	// (0x00084a91) bt_list_pane_t2

0x0001,

0xfce0,	// (0x0008c0c9) bt_list_pane_t

0xa017,	// (0x00086400) main_cale_prevew_pane

0x86b7,	// (0x00084aa0) popup_cale_preview_window_ParamLimits

0x86b7,	// (0x00084aa0) popup_cale_preview_window

0xa670,	// (0x00086a59) bg_popup_preview_window_pane_cp05_ParamLimits

0xa670,	// (0x00086a59) bg_popup_preview_window_pane_cp05

0xe5bc,	// (0x0008a9a5) list_cale_preview_pane_ParamLimits

0xe5bc,	// (0x0008a9a5) list_cale_preview_pane

0x86d4,	// (0x00084abd) list_double_cale_preview_pane_ParamLimits

0x86d4,	// (0x00084abd) list_double_cale_preview_pane

0x86e8,	// (0x00084ad1) list_single_cale_preview_pane_ParamLimits

0x86e8,	// (0x00084ad1) list_single_cale_preview_pane

0x8700,	// (0x00084ae9) list_single_cale_preview_pane_g1

0x8708,	// (0x00084af1) list_single_cale_preview_pane_t1_ParamLimits

0x8708,	// (0x00084af1) list_single_cale_preview_pane_t1

0x871d,	// (0x00084b06) list_double_cale_preview_pane_g1

0x8725,	// (0x00084b0e) list_double_cale_preview_pane_t1_ParamLimits

0x8725,	// (0x00084b0e) list_double_cale_preview_pane_t1

0x873a,	// (0x00084b23) list_double_cale_preview_pane_t2_ParamLimits

0x873a,	// (0x00084b23) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x0008c0ce) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x0008c0ce) list_double_cale_preview_pane_t

0xa017,	// (0x00086400) main_ezdial_pane

0xa670,	// (0x00086a59) main_sp_fs_email_pane_ParamLimits

0x8243,	// (0x0008462c) cmail_ddmenu_btn01_pane_ParamLimits

0x8243,	// (0x0008462c) cmail_ddmenu_btn01_pane

0x8260,	// (0x00084649) cmail_ddmenu_btn02_pane_ParamLimits

0x8260,	// (0x00084649) cmail_ddmenu_btn02_pane

0x827e,	// (0x00084667) cmail_ddmenu_btn03_pane_ParamLimits

0x827e,	// (0x00084667) cmail_ddmenu_btn03_pane

0x831f,	// (0x00084708) main_sp_fs_ctrlbar_pane_ParamLimits

0x8339,	// (0x00084722) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8463,	// (0x0008484c) list_cmail_body_pane_ParamLimits

0xe34b,	// (0x0008a734) bg_button_pane_cp12

0xe354,	// (0x0008a73d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe354,	// (0x0008a73d) list_single_cmail_header_detail_pane_g3

0x1472,	// (0x0007d85b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1472,	// (0x0007d85b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc68,	// (0x0008c051) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc68,	// (0x0008c051) list_single_cmail_header_detail_pane_t

0x14ca,	// (0x0007d8b3) phacti_term_pane_t2_ParamLimits

0x14ca,	// (0x0007d8b3) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x0008c05b) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x0008c05b) phacti_term_pane_t

0xe5c8,	// (0x0008a9b1) aid_size_list_single_double

0x8752,	// (0x00084b3b) popup_ezdial_listscroll_window

0x8774,	// (0x00084b5d) popup_number_entry_window_cp01

0xa95d,	// (0x00086d46) bg_popup_call_pane_cp09

0xe5d4,	// (0x0008a9bd) ezdial_list_pane

0xe5dc,	// (0x0008a9c5) scroll_pane_cp23

0xc7e5,	// (0x00088bce) bg_button_pane_cp028_ParamLimits

0xc7e5,	// (0x00088bce) bg_button_pane_cp028

0x8782,	// (0x00084b6b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8782,	// (0x00084b6b) cmail_ddmenu_btn01_pane_g1

0x8794,	// (0x00084b7d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8794,	// (0x00084b7d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x0008c0d3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x0008c0d3) cmail_ddmenu_btn01_pane_g

0xe5e4,	// (0x0008a9cd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5e4,	// (0x0008a9cd) cmail_ddmenu_btn01_pane_t1

0xb5bd,	// (0x000879a6) bg_button_pane_cp029_ParamLimits

0xb5bd,	// (0x000879a6) bg_button_pane_cp029

0x87a0,	// (0x00084b89) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87a0,	// (0x00084b89) cmail_ddmenu_btn02_pane_g1

0x87b8,	// (0x00084ba1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87b8,	// (0x00084ba1) cmail_ddmenu_btn02_pane_t1

0xa67e,	// (0x00086a67) bg_button_pane_cp031_ParamLimits

0xa67e,	// (0x00086a67) bg_button_pane_cp031

0x87a0,	// (0x00084b89) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87a0,	// (0x00084b89) cmail_ddmenu_btn03_pane_g1

0x87b8,	// (0x00084ba1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87b8,	// (0x00084ba1) cmail_ddmenu_btn03_pane_t1

0x5e30,	// (0x00082219) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e4a,	// (0x00082233) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e4a,	// (0x00082233) cell_dialer2_keypad_pane_t1_copy1

0x7a0b,	// (0x00083df4) ncimui_group_button_pane

0xa670,	// (0x00086a59) main_sp_fs_calendar_pane_ParamLimits

0x847d,	// (0x00084866) list_single_cmail_header_caption_pane_ParamLimits

0x14df,	// (0x0007d8c8) aid_recal_txt_sm_pane

0xa017,	// (0x00086400) mian_recal_day_pane

0x1519,	// (0x0007d902) popup_sp_fs_cale_preview_window_ParamLimits

0xe5fa,	// (0x0008a9e3) list_recal_day_pane

0x16cf,	// (0x0007dab8) list_single_recal_day_pane_ParamLimits

0x16cf,	// (0x0007dab8) list_single_recal_day_pane

0xe621,	// (0x0008aa0a) list_single_recal_day_pane_g1_ParamLimits

0xe621,	// (0x0008aa0a) list_single_recal_day_pane_g1

0x16e1,	// (0x0007daca) list_single_recal_day_pane_g2_ParamLimits

0x16e1,	// (0x0007daca) list_single_recal_day_pane_g2

0x16ed,	// (0x0007dad6) list_single_recal_day_pane_g3_ParamLimits

0x16ed,	// (0x0007dad6) list_single_recal_day_pane_g3

0x16f9,	// (0x0007dae2) list_single_recal_day_pane_g4_ParamLimits

0x16f9,	// (0x0007dae2) list_single_recal_day_pane_g4

0x1707,	// (0x0007daf0) list_single_recal_day_pane_g5_ParamLimits

0x1707,	// (0x0007daf0) list_single_recal_day_pane_g5

0x171d,	// (0x0007db06) list_single_recal_day_pane_g6_ParamLimits

0x171d,	// (0x0007db06) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x0008c0e2) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x0008c0e2) list_single_recal_day_pane_g

0x1731,	// (0x0007db1a) list_single_recal_day_pane_t1

0x1743,	// (0x0007db2c) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x0008c0ed) list_single_recal_day_pane_t

0x87dc,	// (0x00084bc5) ncimui_query_button_pane_ParamLimits

0x87dc,	// (0x00084bc5) ncimui_query_button_pane

0x87ec,	// (0x00084bd5) ncimui_query_button_pane_t1_ParamLimits

0x87ec,	// (0x00084bd5) ncimui_query_button_pane_t1

0xe62d,	// (0x0008aa16) ncimui_query_button_pane_t2_ParamLimits

0xe62d,	// (0x0008aa16) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0008c0f2) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0008c0f2) ncimui_query_button_pane_t

0x87ff,	// (0x00084be8) query_button_pane_ParamLimits

0x87ff,	// (0x00084be8) query_button_pane

0xa017,	// (0x00086400) bg_button_pane_cp0028

0xe640,	// (0x0008aa29) query_button_pane_t1

0x48d1,	// (0x00080cba) main_tport_pane_ParamLimits

0x834a,	// (0x00084733) bg_popup_window_pane_cp01_ParamLimits

0x834a,	// (0x00084733) bg_popup_window_pane_cp01

0x8358,	// (0x00084741) heading_pane_cp08_ParamLimits

0x8358,	// (0x00084741) heading_pane_cp08

0x8366,	// (0x0008474f) heading_pane_cp07_ParamLimits

0x8366,	// (0x0008474f) heading_pane_cp07

0x83fc,	// (0x000847e5) cell_tport_appsw_pane_g2

0x0002,

0xfc55,	// (0x0008c03e) cell_tport_appsw_pane_g

0x0c76,	// (0x0007d05f) input_candi_list_open_g1

0xad9a,	// (0x00087183) list_cale_time_pane_g6_ParamLimits

0xad9a,	// (0x00087183) list_cale_time_pane_g6

0x4dcf,	// (0x000811b8) aid_size_touch_calib_1_ParamLimits

0x4dcf,	// (0x000811b8) aid_size_touch_calib_1

0x4ddb,	// (0x000811c4) aid_size_touch_calib_2_ParamLimits

0x4ddb,	// (0x000811c4) aid_size_touch_calib_2

0x4de9,	// (0x000811d2) aid_size_touch_calib_3_ParamLimits

0x4de9,	// (0x000811d2) aid_size_touch_calib_3

0x4df9,	// (0x000811e2) aid_size_touch_calib_4_ParamLimits

0x4df9,	// (0x000811e2) aid_size_touch_calib_4

0x4e07,	// (0x000811f0) main_touch_calib_button_group_pane_ParamLimits

0x4e07,	// (0x000811f0) main_touch_calib_button_group_pane

0x4e15,	// (0x000811fe) main_touch_calib_pane_g1_ParamLimits

0x4e21,	// (0x0008120a) main_touch_calib_pane_g2_ParamLimits

0x4e2d,	// (0x00081216) main_touch_calib_pane_g3_ParamLimits

0x4e39,	// (0x00081222) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x0008ba87) main_touch_calib_pane_g_ParamLimits

0x4e45,	// (0x0008122e) main_touch_calib_pane_t1_ParamLimits

0x4e5c,	// (0x00081245) main_touch_calib_pane_t2_ParamLimits

0x4e75,	// (0x0008125e) main_touch_calib_pane_t3_ParamLimits

0x4e8b,	// (0x00081274) main_touch_calib_pane_t4_ParamLimits

0x4ea1,	// (0x0008128a) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x0008ba90) main_touch_calib_pane_t_ParamLimits

0xcd60,	// (0x00089149) list_single_fp_cale_pane_g3_ParamLimits

0xcd60,	// (0x00089149) list_single_fp_cale_pane_g3

0xa670,	// (0x00086a59) bg_button_pane_cp012_ParamLimits

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp03_ParamLimits

0x6cac,	// (0x00083095) cell_vitu2_function_top_pane_g1_ParamLimits

0xa670,	// (0x00086a59) bg_vkb2_func_pane_cp04_ParamLimits

0x7991,	// (0x00083d7a) main_ncimui_button_group_pane_ParamLimits

0x7991,	// (0x00083d7a) main_ncimui_button_group_pane

0x79f9,	// (0x00083de2) main_ncimui_pane_t3_ParamLimits

0x79f9,	// (0x00083de2) main_ncimui_pane_t3

0xe3e1,	// (0x0008a7ca) phacti_button_group_pane

0xe5c8,	// (0x0008a9b1) aid_size_list_single_double_ParamLimits

0x8752,	// (0x00084b3b) popup_ezdial_listscroll_window_ParamLimits

0x8774,	// (0x00084b5d) popup_number_entry_window_cp01_ParamLimits

0x880c,	// (0x00084bf5) phacti_button_pane_ParamLimits

0x880c,	// (0x00084bf5) phacti_button_pane

0xa017,	// (0x00086400) bg_button_pane_cp14

0xe64e,	// (0x0008aa37) phacti_button_pane_t1

0x881d,	// (0x00084c06) main_touch_calib_button_pane_ParamLimits

0x881d,	// (0x00084c06) main_touch_calib_button_pane

0xa7bf,	// (0x00086ba8) bg_button_pane_cp18_ParamLimits

0xa7bf,	// (0x00086ba8) bg_button_pane_cp18

0xe65c,	// (0x0008aa45) main_touch_calib_button_pane_t1_ParamLimits

0xe65c,	// (0x0008aa45) main_touch_calib_button_pane_t1

0xe672,	// (0x0008aa5b) main_touch_calib_button_pane_t2_ParamLimits

0xe672,	// (0x0008aa5b) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x0008c0f7) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x0008c0f7) main_touch_calib_button_pane_t

0xa017,	// (0x00086400) cell_ncimui_button_pane

0xa017,	// (0x00086400) bg_button_pane_cp032

0xe690,	// (0x0008aa79) cell_ncimui_button_pane_t1

0x5ea6,	// (0x0008228f) image3_infobar_pane_ParamLimits

0x5ea6,	// (0x0008228f) image3_infobar_pane

0x7dca,	// (0x000841b3) fs_bigclock_status_pane_ParamLimits

0x7dca,	// (0x000841b3) fs_bigclock_status_pane

0x7dd7,	// (0x000841c0) main_fs_bigclock_clock_pane_ParamLimits

0x7dd7,	// (0x000841c0) main_fs_bigclock_clock_pane

0x7df3,	// (0x000841dc) main_fs_bigclock_indi_pane_ParamLimits

0x7df3,	// (0x000841dc) main_fs_bigclock_indi_pane

0x7e21,	// (0x0008420a) main_fs_bigclock_swipe_pane_ParamLimits

0x7e21,	// (0x0008420a) main_fs_bigclock_swipe_pane

0xa017,	// (0x00086400) main_fs_clock_dumped_data

0x7e5b,	// (0x00084244) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7e5b,	// (0x00084244) list_single_fs_bigclock_indicator_pane_g1

0x7e7a,	// (0x00084263) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7e7a,	// (0x00084263) list_single_fs_bigclock_indicator_pane_g2

0x7e94,	// (0x0008427d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7e94,	// (0x0008427d) list_single_fs_bigclock_indicator_pane_g3

0x7eb0,	// (0x00084299) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7eb0,	// (0x00084299) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaf,	// (0x0008bf98) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaf,	// (0x0008bf98) list_single_fs_bigclock_indicator_pane_g

0x7edf,	// (0x000842c8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7edf,	// (0x000842c8) list_single_fs_bigclock_indicator_pane_t1

0x7f07,	// (0x000842f0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7f07,	// (0x000842f0) list_single_fs_bigclock_indicator_pane_t2

0x7f2f,	// (0x00084318) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7f2f,	// (0x00084318) list_single_fs_bigclock_indicator_pane_t3

0x7f57,	// (0x00084340) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7f57,	// (0x00084340) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbba,	// (0x0008bfa3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbba,	// (0x0008bfa3) list_single_fs_bigclock_indicator_pane_t

0xe69e,	// (0x0008aa87) image3_infobar_fav_pane_ParamLimits

0xe69e,	// (0x0008aa87) image3_infobar_fav_pane

0xe6ae,	// (0x0008aa97) image3_infobar_loc_pane_ParamLimits

0xe6ae,	// (0x0008aa97) image3_infobar_loc_pane

0xe6c4,	// (0x0008aaad) image3_infobar_time_pane_ParamLimits

0xe6c4,	// (0x0008aaad) image3_infobar_time_pane

0xa97f,	// (0x00086d68) image3_infobar_time_pane_g1

0xe6d4,	// (0x0008aabd) image3_infobar_time_pane_t1

0xa97f,	// (0x00086d68) image3_infobar_loc_pane_g1

0xe6e2,	// (0x0008aacb) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x0008c0fc) image3_infobar_loc_pane_g

0xe6ea,	// (0x0008aad3) image3_infobar_loc_pane_t1

0xa97f,	// (0x00086d68) image3_infobar_fav_pane_g1

0xe6f8,	// (0x0008aae1) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0008c101) image3_infobar_fav_pane_g

0xe700,	// (0x0008aae9) fs_bigclock_status_battery_pane

0xe709,	// (0x0008aaf2) fs_bigclock_status_signal_pane

0xe712,	// (0x0008aafb) fs_bigclock_status_title_pane

0xe71b,	// (0x0008ab04) fs_bigclock_status_signal_pane_g1

0xe724,	// (0x0008ab0d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x0008c106) fs_bigclock_status_signal_pane_g

0xe72c,	// (0x0008ab15) fs_bigclock_status_battery_pane_g1

0xe735,	// (0x0008ab1e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x0008c10b) fs_bigclock_status_battery_pane_g

0xe73d,	// (0x0008ab26) fs_bigclock_status_title_pane_t1

0x882d,	// (0x00084c16) main_fs_bigclock_clock_pane_g1

0x882d,	// (0x00084c16) main_fs_bigclock_clock_pane_g2

0x883c,	// (0x00084c25) main_fs_bigclock_clock_pane_g3

0x883c,	// (0x00084c25) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0008c110) main_fs_bigclock_clock_pane_g

0x884c,	// (0x00084c35) main_fs_bigclock_clock_pane_t1

0x8861,	// (0x00084c4a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x0008c119) main_fs_bigclock_clock_pane_t

0xe74b,	// (0x0008ab34) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe74b,	// (0x0008ab34) list_single_fs_bigclock_indicator_pane

0xe75c,	// (0x0008ab45) list_single_fs_bigclock_pane_ParamLimits

0xe75c,	// (0x0008ab45) list_single_fs_bigclock_pane

0xe782,	// (0x0008ab6b) main_fs_bigclock_indicator_pane_t1

0xe791,	// (0x0008ab7a) list_single_fs_bigclock_pane_g1

0xe799,	// (0x0008ab82) list_single_fs_bigclock_pane_t1

0xa97f,	// (0x00086d68) main_fs_bigclock_swipe_pane_g1

0xe7dc,	// (0x0008abc5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x0008c12a) main_fs_bigclock_swipe_pane_g

0xe7e4,	// (0x0008abcd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7e4,	// (0x0008abcd) main_fs_bigclock_swipe_pane_t1

0x3a31,	// (0x0007fe1a) call_type_pane_ParamLimits

0xa017,	// (0x00086400) main_btmg_pane

0x1587,	// (0x0007d970) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1587,	// (0x0007d970) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x0008c09d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x0008c09d) list_single_cale_mrui_row_pane_g

0x16bd,	// (0x0007daa6) list_recal_vselct_arw_lo_pane

0xe619,	// (0x0008aa02) list_recal_vselct_arw_up_pane

0x16c5,	// (0x0007daae) list_recal_vselct_pane

0x88b8,	// (0x00084ca1) btmg_button_pane

0x88c4,	// (0x00084cad) main_btmg_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp044

0xe801,	// (0x0008abea) btmg_button_pane_t1

0xc62b,	// (0x00088a14) aid_listscroll_gen

0xa670,	// (0x00086a59) main_cntbar_detail_pane

0xe31e,	// (0x0008a707) list_cmail_folder_pane

0xc575,	// (0x0008895e) sp_fs_scroll_pane_cp03_ParamLimits

0x1755,	// (0x0007db3e) list_single_fs_dyc_pane_cp01_ParamLimits

0x1755,	// (0x0007db3e) list_single_fs_dyc_pane_cp01

0xe80f,	// (0x0008abf8) aid_size_cmail_indent

0x1772,	// (0x0007db5b) list_single_dyc_row_pane_cp01

0x88ec,	// (0x00084cd5) cntbar_detail_list_pane_ParamLimits

0x88ec,	// (0x00084cd5) cntbar_detail_list_pane

0x892c,	// (0x00084d15) main_cntbar_detail_cont_pane_ParamLimits

0x892c,	// (0x00084d15) main_cntbar_detail_cont_pane

0x3a25,	// (0x0007fe0e) scroll_pane_cp032_ParamLimits

0x3a25,	// (0x0007fe0e) scroll_pane_cp032

0x8938,	// (0x00084d21) cntbar_detail_list_event_pane_ParamLimits

0x8938,	// (0x00084d21) cntbar_detail_list_event_pane

0x88fa,	// (0x00084ce3) cntbar_detail_list_shct_pane

0xac0e,	// (0x00086ff7) aid_list_gen

0xe818,	// (0x0008ac01) aid_scroll

0xe821,	// (0x0008ac0a) aid_size_touch_scroll_bar

0x8948,	// (0x00084d31) aid_list_double

0x8951,	// (0x00084d3a) aid_list_single

0x8951,	// (0x00084d3a) aid_list_single_lg

0x177b,	// (0x0007db64) aid_list_z_g_a_sm

0x895a,	// (0x00084d43) aid_list_z_g_d

0x1783,	// (0x0007db6c) aid_txt_z_prm

0x1791,	// (0x0007db7a) aid_txt_z_prm_cp01

0x179f,	// (0x0007db88) aid_txt_z_sec

0x8962,	// (0x00084d4b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8962,	// (0x00084d4b) main_cntbar_detail_cont_pane_g1

0x896f,	// (0x00084d58) main_cntbar_detail_cont_pane_g2_ParamLimits

0x896f,	// (0x00084d58) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x0008c12f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x0008c12f) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x0008ac13) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x0008ac21) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x0008ac2f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0008c134) main_cntbar_detail_cont_pane_t

0x897b,	// (0x00084d64) cell_cntbar_detail_list_shct_pane_ParamLimits

0x897b,	// (0x00084d64) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x0008ac3d) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x0008ac46) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x0008c13b) cntbar_detail_list_shct_pane_g

0x898f,	// (0x00084d78) cntbar_detail_list_event_pane_g1_ParamLimits

0x898f,	// (0x00084d78) cntbar_detail_list_event_pane_g1

0x899b,	// (0x00084d84) cntbar_detail_list_event_pane_g2_ParamLimits

0x899b,	// (0x00084d84) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0008c140) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0008c140) cntbar_detail_list_event_pane_g

0x8a09,	// (0x00084df2) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a09,	// (0x00084df2) cntbar_detail_list_event_pane_t1

0x8a1e,	// (0x00084e07) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a1e,	// (0x00084e07) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x0008c14d) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x0008c14d) cntbar_detail_list_event_pane_t

0xa97f,	// (0x00086d68) cell_cntbar_detail_list_shct_pane_g1

0x3dde,	// (0x000801c7) navi_pane_mv_g3

0xa670,	// (0x00086a59) main_cntbar_detail_pane_ParamLimits

0xa017,	// (0x00086400) main_notif_wgt_pane

0x5b26,	// (0x00081f0f) aid_tch_main_mp4_pane_g4

0x5d8f,	// (0x00082178) popup_slider_window_cp02

0x16b3,	// (0x0007da9c) list_recal_day_event_pane

0x88cc,	// (0x00084cb5) cntbar_detail_btn_pane_ParamLimits

0x88cc,	// (0x00084cb5) cntbar_detail_btn_pane

0x88dc,	// (0x00084cc5) cntbar_detail_btn_pane_cp01_ParamLimits

0x88dc,	// (0x00084cc5) cntbar_detail_btn_pane_cp01

0x88fa,	// (0x00084ce3) cntbar_detail_list_shct_pane_ParamLimits

0x8906,	// (0x00084cef) cntbar_detail_pane_g1_ParamLimits

0x8906,	// (0x00084cef) cntbar_detail_pane_g1

0x8916,	// (0x00084cff) cntbar_detail_pane_t1_ParamLimits

0x8916,	// (0x00084cff) cntbar_detail_pane_t1

0x89a7,	// (0x00084d90) cntbar_detail_list_event_pane_g3_ParamLimits

0x89a7,	// (0x00084d90) cntbar_detail_list_event_pane_g3

0x89bf,	// (0x00084da8) cntbar_detail_list_event_pane_g4_ParamLimits

0x89bf,	// (0x00084da8) cntbar_detail_list_event_pane_g4

0x89d7,	// (0x00084dc0) cntbar_detail_list_event_pane_g5_ParamLimits

0x89d7,	// (0x00084dc0) cntbar_detail_list_event_pane_g5

0x89ef,	// (0x00084dd8) cntbar_detail_list_event_pane_g6_ParamLimits

0x89ef,	// (0x00084dd8) cntbar_detail_list_event_pane_g6

0x8a33,	// (0x00084e1c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a33,	// (0x00084e1c) cntbar_detail_list_event_pane_t3

0x8a45,	// (0x00084e2e) popup_notif_wgt_window_ParamLimits

0x8a45,	// (0x00084e2e) popup_notif_wgt_window

0x8a55,	// (0x00084e3e) popup_submenu_window_cp01_ParamLimits

0x8a55,	// (0x00084e3e) popup_submenu_window_cp01

0xa95d,	// (0x00086d46) bg_popup_window_pane_cp10

0xe866,	// (0x0008ac4f) listscroll_notif_wgt_pane

0xe878,	// (0x0008ac61) list_notif_wgt_window

0xe881,	// (0x0008ac6a) scroll_pane_cp033

0x8a65,	// (0x00084e4e) list_notif_wgt_row_pane_ParamLimits

0x8a65,	// (0x00084e4e) list_notif_wgt_row_pane

0xe88a,	// (0x0008ac73) aid_size_list_notif_wgt_del

0xe897,	// (0x0008ac80) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x0008ac8c) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x0008ac9b) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0008c154) list_notif_wgt_row_pane_g

0xe8bf,	// (0x0008aca8) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x0008acbe) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x0008acd0) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x0008c15b) list_notif_wgt_row_pane_t

0xd56f,	// (0x00089958) list_recal_day_event_pane_g1

0xe8f9,	// (0x0008ace2) list_recal_day_event_pane_t1

0xa017,	// (0x00086400) bg_button_pane_cp045

0x8a79,	// (0x00084e62) cntbar_detail_btn_pane_t1

0xb5bd,	// (0x000879a6) main_callh_pane_ParamLimits

0xb5bd,	// (0x000879a6) main_callh_pane

0xa017,	// (0x00086400) main_coverflow0_pane

0xa017,	// (0x00086400) main_wgtman_pane

0x7e39,	// (0x00084222) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7e39,	// (0x00084222) main_fs_bigclock_unlock_btn_pane

0x83f4,	// (0x000847dd) bg_button_pane_cp16

0x8404,	// (0x000847ed) cell_tport_appsw_pane_g3

0x8a87,	// (0x00084e70) cf0_flow_pane_ParamLimits

0x8a87,	// (0x00084e70) cf0_flow_pane

0xe908,	// (0x0008acf1) listscroll_cf0_pane

0xe913,	// (0x0008acfc) main_cf0_pane_g1

0x8a96,	// (0x00084e7f) main_cf0_pane_t1_ParamLimits

0x8a96,	// (0x00084e7f) main_cf0_pane_t1

0x8aaa,	// (0x00084e93) main_cf0_pane_t2_ParamLimits

0x8aaa,	// (0x00084e93) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x0008c167) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x0008c167) main_cf0_pane_t

0xe925,	// (0x0008ad0e) scroll_pane_cp11

0x8abe,	// (0x00084ea7) cf0_flow_pane_g1

0x8ac6,	// (0x00084eaf) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x0008c16c) cf0_flow_pane_g

0x8ace,	// (0x00084eb7) cf0_flow_pane_t1

0xa017,	// (0x00086400) main_call6_pane

0xa017,	// (0x00086400) main_calllock_pane

0x8adc,	// (0x00084ec5) call6_btn_grp_pane_ParamLimits

0x8adc,	// (0x00084ec5) call6_btn_grp_pane

0x8ae9,	// (0x00084ed2) call6_pane_g1_ParamLimits

0x8ae9,	// (0x00084ed2) call6_pane_g1

0x8af9,	// (0x00084ee2) popup_call6_1st_window_ParamLimits

0x8af9,	// (0x00084ee2) popup_call6_1st_window

0x8b09,	// (0x00084ef2) popup_call6_2nd_window_ParamLimits

0x8b09,	// (0x00084ef2) popup_call6_2nd_window

0x8b19,	// (0x00084f02) cell_call6_btn_pane_ParamLimits

0x8b19,	// (0x00084f02) cell_call6_btn_pane

0xa95d,	// (0x00086d46) bg_popup_call2_in_pane_cp03

0xe930,	// (0x0008ad19) popup_call6_1st_window_g1

0xe938,	// (0x0008ad21) popup_call6_1st_window_g2

0xe940,	// (0x0008ad29) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0008c171) popup_call6_1st_window_g

0xe948,	// (0x0008ad31) popup_call6_1st_window_t1

0xe957,	// (0x0008ad40) popup_call6_1st_window_t2

0xe967,	// (0x0008ad50) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x0008c178) popup_call6_1st_window_t

0xa95d,	// (0x00086d46) bg_popup_call2_in_pane_cp04

0xe977,	// (0x0008ad60) popup_call6_2nd_window_g1

0xe97f,	// (0x0008ad68) popup_call6_2nd_window_g2

0xe987,	// (0x0008ad70) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x0008c17f) popup_call6_2nd_window_g

0xe98f,	// (0x0008ad78) popup_call6_2nd_window_t1

0xa017,	// (0x00086400) bg_button_pane_cp15

0xe99e,	// (0x0008ad87) cell_call6_btn_pane_g1

0xee3a,	// (0x0008b223) cell_call6_btn_pane_t1

0x8b2a,	// (0x00084f13) listscroll_wgtman_pane_ParamLimits

0x8b2a,	// (0x00084f13) listscroll_wgtman_pane

0x8b46,	// (0x00084f2f) wgtman_btn_pane_ParamLimits

0x8b46,	// (0x00084f2f) wgtman_btn_pane

0xb19d,	// (0x00087586) aid_scroll_copy1

0xe9a7,	// (0x0008ad90) list_wgtman_pane

0x8b7b,	// (0x00084f64) wgtman_btn_pane_g1_ParamLimits

0x8b7b,	// (0x00084f64) wgtman_btn_pane_g1

0x8ba3,	// (0x00084f8c) wgtman_btn_pane_t1_ParamLimits

0x8ba3,	// (0x00084f8c) wgtman_btn_pane_t1

0xe9b1,	// (0x0008ad9a) wgtman_btn_pane_t2_ParamLimits

0xe9b1,	// (0x0008ad9a) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x0008c186) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x0008c186) wgtman_btn_pane_t

0x8bda,	// (0x00084fc3) listrow_wgtman_pane_ParamLimits

0x8bda,	// (0x00084fc3) listrow_wgtman_pane

0x8bf1,	// (0x00084fda) listrow_wgtman_pane_g1

0x8bfe,	// (0x00084fe7) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x0008c18b) listrow_wgtman_pane_g

0x17ad,	// (0x0007db96) listrow_wgtman_pane_t1

0x17c5,	// (0x0007dbae) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x0008c190) listrow_wgtman_pane_t

0x17eb,	// (0x0007dbd4) wait_bar_pane_cp09

0xe9c8,	// (0x0008adb1) main_calllock_btn_pane

0xe9d2,	// (0x0008adbb) main_calllock_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp17

0xe99e,	// (0x0008ad87) main_calllock_btn_pane_g1

0xe9de,	// (0x0008adc7) main_calllock_btn_pane_t1

0xa017,	// (0x00086400) main_dialer3_pane

0xa017,	// (0x00086400) main_fmrd2_pane

0xa97f,	// (0x00086d68) main_fs_bigclock_unlock_btn_pane_g1

0x8c24,	// (0x0008500d) main_fs_bigclock_unlock_btn_pane_t1

0x8c32,	// (0x0008501b) area_fmrd2_info_pane_ParamLimits

0x8c32,	// (0x0008501b) area_fmrd2_info_pane

0x8c3e,	// (0x00085027) area_fmrd2_visual_pane_ParamLimits

0x8c3e,	// (0x00085027) area_fmrd2_visual_pane

0x8c4c,	// (0x00085035) fmrd2_indi_pane_ParamLimits

0x8c4c,	// (0x00085035) fmrd2_indi_pane

0x8c59,	// (0x00085042) area_fmrd2_visual_pane_g1

0x8c61,	// (0x0008504a) area_fmrd2_visual_pane_t1

0x8c71,	// (0x0008505a) area_fmrd2_visual_pane_t2

0x8c81,	// (0x0008506a) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x0008c19a) area_fmrd2_visual_pane_t

0x8c91,	// (0x0008507a) area_fmrd2_info_pane_g1

0x8c99,	// (0x00085082) area_fmrd2_info_pane_t1

0x8ca9,	// (0x00085092) area_fmrd2_info_pane_t2

0x8cb9,	// (0x000850a2) area_fmrd2_info_pane_t3

0x8cc9,	// (0x000850b2) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x0008c1a1) area_fmrd2_info_pane_t

0x8cd9,	// (0x000850c2) fmrd2_indi_pane_t1

0x8ce9,	// (0x000850d2) fmrd2_indi_pane_t2

0x8cf9,	// (0x000850e2) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x0008c1aa) fmrd2_indi_pane_t

0x7ec1,	// (0x000842aa) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7ec1,	// (0x000842aa) list_single_fs_bigclock_indicator_pane_g5

0x7f76,	// (0x0008435f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7f76,	// (0x0008435f) list_single_fs_bigclock_indicator_pane_t5

0x8579,	// (0x00084962) aid_cell_bcale_month_pane_ParamLimits

0x8579,	// (0x00084962) aid_cell_bcale_month_pane

0x8597,	// (0x00084980) bcale_month_pane_ParamLimits

0x8597,	// (0x00084980) bcale_month_pane

0x85b5,	// (0x0008499e) bcale_preview_pane_ParamLimits

0x85b5,	// (0x0008499e) bcale_preview_pane

0xe799,	// (0x0008ab82) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7b8,	// (0x0008aba1) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7b8,	// (0x0008aba1) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0008c125) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0008c125) list_single_fs_bigclock_pane_t

0x8c1c,	// (0x00085005) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x0008c195) main_fs_bigclock_unlock_btn_pane_g

0x8d09,	// (0x000850f2) aid_dia3_key_size_ParamLimits

0x8d09,	// (0x000850f2) aid_dia3_key_size

0x8d15,	// (0x000850fe) aid_dia3_listrow_size_ParamLimits

0x8d15,	// (0x000850fe) aid_dia3_listrow_size

0x8d25,	// (0x0008510e) dia3_keypad_fun_pane_ParamLimits

0x8d25,	// (0x0008510e) dia3_keypad_fun_pane

0x8d35,	// (0x0008511e) dia3_keypad_num_pane_ParamLimits

0x8d35,	// (0x0008511e) dia3_keypad_num_pane

0x8d45,	// (0x0008512e) dia3_listscroll_pane_ParamLimits

0x8d45,	// (0x0008512e) dia3_listscroll_pane

0x8d53,	// (0x0008513c) dia3_numentry_pane_ParamLimits

0x8d53,	// (0x0008513c) dia3_numentry_pane

0xe9ed,	// (0x0008add6) dia3_list_pane

0x8d61,	// (0x0008514a) scroll_pane_cp12

0xa017,	// (0x00086400) bg_dia3_numentry_pane

0x8d6c,	// (0x00085155) dia3_numentry_pane_t1

0x8d7b,	// (0x00085164) cell_dia3_key_num_pane

0x8d83,	// (0x0008516c) cell_dia3_key0_fun_pane_ParamLimits

0x8d83,	// (0x0008516c) cell_dia3_key0_fun_pane

0x8d90,	// (0x00085179) cell_dia3_key1_fun_pane_ParamLimits

0x8d90,	// (0x00085179) cell_dia3_key1_fun_pane

0x8d9d,	// (0x00085186) dia3_listrow_pane

0xde45,	// (0x0008a22e) bg_dia3_numentry_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp21

0x8daa,	// (0x00085193) cell_dia3_key_num_pane_t1

0x8db8,	// (0x000851a1) cell_dia3_key_num_pane_t2

0x8dc7,	// (0x000851b0) cell_dia3_key_num_pane_t3

0x8dd6,	// (0x000851bf) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x0008c1b1) cell_dia3_key_num_pane_t

0xa017,	// (0x00086400) bg_button_pane_cp19

0x8de5,	// (0x000851ce) cell_dia3_key0_fun_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp20

0x8ded,	// (0x000851d6) cell_dia3_key1_fun_pane_g1

0x8df5,	// (0x000851de) area_left_week_number_pane

0x8e08,	// (0x000851f1) area_top_day_name_pane

0x8e16,	// (0x000851ff) frame_month_view_pane

0xe9f8,	// (0x0008ade1) grid_month_view_pane

0x8e2b,	// (0x00085214) cell_top_day_name_pane_ParamLimits

0x8e2b,	// (0x00085214) cell_top_day_name_pane

0x8e47,	// (0x00085230) cell_area_left_week_number_pane_ParamLimits

0x8e47,	// (0x00085230) cell_area_left_week_number_pane

0x8e68,	// (0x00085251) cell_month_view_pane_ParamLimits

0x8e68,	// (0x00085251) cell_month_view_pane

0xea06,	// (0x0008adef) frm_month_g1

0x8e94,	// (0x0008527d) frm_month_g2

0x8ea5,	// (0x0008528e) frm_month_g3

0x8eb6,	// (0x0008529f) frm_month_g4

0x8ec7,	// (0x000852b0) frm_month_g5

0x8ed8,	// (0x000852c1) frm_month_g6

0x8eeb,	// (0x000852d4) frm_month_g7

0xea13,	// (0x0008adfc) frm_month_g8

0x8efe,	// (0x000852e7) frm_month_g9

0x8f0b,	// (0x000852f4) frm_month_g10

0x8f18,	// (0x00085301) frm_month_g11

0x8f25,	// (0x0008530e) frm_month_g12

0x8f32,	// (0x0008531b) frm_month_g13

0x8f41,	// (0x0008532a) frm_month_g14

0x8f50,	// (0x00085339) frm_month_g15

0x8f5f,	// (0x00085348) frm_month_g16

0x000f,

0xfdd1,	// (0x0008c1ba) frm_month_g

0xea20,	// (0x0008ae09) cell_top_day_name_pane_t1

0x8f6e,	// (0x00085357) cell_area_left_week_number_pane_g1

0x8f7d,	// (0x00085366) cell_area_left_week_number_pane_t1

0xa74d,	// (0x00086b36) cell_month_view_pane_g1

0x8f93,	// (0x0008537c) cell_month_view_pane_t1

0xa017,	// (0x00086400) main_fps_pane

0xe24c,	// (0x0008a635) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe24c,	// (0x0008a635) cmail_ddmenu_btn02_pane_cp1

0xe268,	// (0x0008a651) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe268,	// (0x0008a651) cmail_ddmenu_btn02_pane_cp2

0x87ac,	// (0x00084b95) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87ac,	// (0x00084b95) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x0008c0d8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x0008c0d8) cmail_ddmenu_btn02_pane_g

0x87ca,	// (0x00084bb3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87ca,	// (0x00084bb3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x0008c0dd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x0008c0dd) cmail_ddmenu_btn02_pane_t

0x8fa9,	// (0x00085392) fps_text_pane_ParamLimits

0x8fa9,	// (0x00085392) fps_text_pane

0x8fb6,	// (0x0008539f) main_fps_pane_g1_ParamLimits

0x8fb6,	// (0x0008539f) main_fps_pane_g1

0x8fc2,	// (0x000853ab) wait_bar_pane_cp010_ParamLimits

0x8fc2,	// (0x000853ab) wait_bar_pane_cp010

0x8fce,	// (0x000853b7) fps_text_pane_t1_ParamLimits

0x8fce,	// (0x000853b7) fps_text_pane_t1

0x6240,	// (0x00082629) cam4_image_uncrop_pane_g1

0x6249,	// (0x00082632) cam4_image_uncrop_pane_g2

0x6252,	// (0x0008263b) cam4_image_uncrop_pane_g3

0x625b,	// (0x00082644) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x0008bc23) cam4_image_uncrop_pane_g

0x8d9d,	// (0x00085186) dia3_listrow_pane_ParamLimits

0xa017,	// (0x00086400) main_phob2_pane

0x83b1,	// (0x0008479a) cell_tport_appsw_pane_cp02_ParamLimits

0x83b1,	// (0x0008479a) cell_tport_appsw_pane_cp02

0x83c0,	// (0x000847a9) cell_tport_appsw_pane_cp03_ParamLimits

0x83c0,	// (0x000847a9) cell_tport_appsw_pane_cp03

0xa017,	// (0x00086400) phob2_contact_card_pane

0xa017,	// (0x00086400) phob2_listscroll_pane

0xea33,	// (0x0008ae1c) phob2_list_pane

0xea3b,	// (0x0008ae24) scroll_pane_cp034

0x8fe7,	// (0x000853d0) phob2_cc_data_pane_ParamLimits

0x8fe7,	// (0x000853d0) phob2_cc_data_pane

0x8ffe,	// (0x000853e7) phob2_cc_listscroll_pane_ParamLimits

0x8ffe,	// (0x000853e7) phob2_cc_listscroll_pane

0x901a,	// (0x00085403) list_double_large_graphic_phob2_pane_ParamLimits

0x901a,	// (0x00085403) list_double_large_graphic_phob2_pane

0x902e,	// (0x00085417) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x902e,	// (0x00085417) list_double_large_graphic_phob2_pane_g1

0x17fd,	// (0x0007dbe6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x17fd,	// (0x0007dbe6) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x0008c1db) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x0008c1db) list_double_large_graphic_phob2_pane_g

0x1815,	// (0x0007dbfe) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1815,	// (0x0007dbfe) list_double_large_graphic_phob2_pane_t1

0x182a,	// (0x0007dc13) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x182a,	// (0x0007dc13) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0008c1e4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0008c1e4) list_double_large_graphic_phob2_pane_t

0xa017,	// (0x00086400) list_highlight_pane_cp024

0x9049,	// (0x00085432) phob2_cc_button_pane

0x9053,	// (0x0008543c) phob2_cc_data_pane_g1_ParamLimits

0x9053,	// (0x0008543c) phob2_cc_data_pane_g1

0x9066,	// (0x0008544f) phob2_cc_data_pane_g2_ParamLimits

0x9066,	// (0x0008544f) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x0008c1e9) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x0008c1e9) phob2_cc_data_pane_g

0x907a,	// (0x00085463) phob2_cc_data_pane_t1_ParamLimits

0x907a,	// (0x00085463) phob2_cc_data_pane_t1

0x909b,	// (0x00085484) phob2_cc_data_pane_t2_ParamLimits

0x909b,	// (0x00085484) phob2_cc_data_pane_t2

0x90bc,	// (0x000854a5) phob2_cc_data_pane_t3_ParamLimits

0x90bc,	// (0x000854a5) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x0008c1ee) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x0008c1ee) phob2_cc_data_pane_t

0xea43,	// (0x0008ae2c) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x0008ae2c) phob2_cc_list_pane

0xd67c,	// (0x00089a65) scroll_pane_cp035_ParamLimits

0xd67c,	// (0x00089a65) scroll_pane_cp035

0xa670,	// (0x00086a59) bg_button_pane_cp033

0x90dd,	// (0x000854c6) phob2_cc_button_pane_g1

0x90e9,	// (0x000854d2) phob2_cc_button_pane_t1

0x90fe,	// (0x000854e7) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0008c1f5) phob2_cc_button_pane_t

0x9110,	// (0x000854f9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9110,	// (0x000854f9) list_double_large_graphic_phob2_cc_pane

0x915d,	// (0x00085546) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x915d,	// (0x00085546) list_double_large_graphic_phob2_cc_pane_g1

0x183f,	// (0x0007dc28) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x183f,	// (0x0007dc28) list_double_large_graphic_phob2_cc_pane_g2

0x184e,	// (0x0007dc37) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x184e,	// (0x0007dc37) list_double_large_graphic_phob2_cc_pane_g3

0x185d,	// (0x0007dc46) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x185d,	// (0x0007dc46) list_double_large_graphic_phob2_cc_pane_g4

0x186e,	// (0x0007dc57) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x186e,	// (0x0007dc57) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x0008c1fa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x0008c1fa) list_double_large_graphic_phob2_cc_pane_g

0x187d,	// (0x0007dc66) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x187d,	// (0x0007dc66) list_double_large_graphic_phob2_cc_pane_t1

0x18a6,	// (0x0007dc8f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x18a6,	// (0x0007dc8f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0008c205) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0008c205) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x0008ae38) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x0008ae38) list_highlight_pane_cp025

0xa670,	// (0x00086a59) bg_button_pane_cp033_ParamLimits

0x90dd,	// (0x000854c6) phob2_cc_button_pane_g1_ParamLimits

0x90e9,	// (0x000854d2) phob2_cc_button_pane_t1_ParamLimits

0x90fe,	// (0x000854e7) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0008c1f5) phob2_cc_button_pane_t_ParamLimits

0x1bbe,	// (0x0007dfa7) popup_wgtman_window

0xd451,	// (0x0008983a) scroll_pane_cp038

0x8b63,	// (0x00084f4c) wgtman_btn_pane_cp_01_ParamLimits

0x8b63,	// (0x00084f4c) wgtman_btn_pane_cp_01

0xea5d,	// (0x0008ae46) wgtman_content_pane

0xea66,	// (0x0008ae4f) wgtman_heading_pane

0xa017,	// (0x00086400) bg_heading_pane_cp02

0xea6f,	// (0x0008ae58) wgtman_heading_pane_g1

0xea77,	// (0x0008ae60) wgtman_heading_pane_t1

0xea85,	// (0x0008ae6e) scroll_pane_cp036

0xea8d,	// (0x0008ae76) wgtman_list_pane

0xe4ab,	// (0x0008a894) wgtman_list_pane_t1_ParamLimits

0xe4ab,	// (0x0008a894) wgtman_list_pane_t1

0x619d,	// (0x00082586) cam4_grid_pane

0x0e9c,	// (0x0007d285) bg_button_pane_cp015_ParamLimits

0x6e72,	// (0x0008325b) bg_button_pane_cp016_ParamLimits

0x6e7e,	// (0x00083267) bg_button_pane_cp017_ParamLimits

0x6eb1,	// (0x0008329a) popup_vitu2_query_window_g3_ParamLimits

0x6eb1,	// (0x0008329a) popup_vitu2_query_window_g3

0x0f44,	// (0x0007d32d) popup_vitu2_query_window_t6_ParamLimits

0x0f44,	// (0x0007d32d) popup_vitu2_query_window_t6

0x0f6f,	// (0x0007d358) popup_vitu2_query_window_t7_ParamLimits

0x0f6f,	// (0x0007d358) popup_vitu2_query_window_t7

0xd404,	// (0x000897ed) cam4_grid_pane_g1

0xd40d,	// (0x000897f6) cam4_grid_pane_g2

0xea95,	// (0x0008ae7e) cam4_grid_pane_g3

0xea9e,	// (0x0008ae87) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x0008c20a) cam4_grid_pane_g

0x2890,	// (0x0007ec79) aid_placing_vt_slider_lsc_ParamLimits

0x2bc3,	// (0x0007efac) vidtel_button_pane_ParamLimits

0x2bc3,	// (0x0007efac) vidtel_button_pane

0xa017,	// (0x00086400) bg_button_pane_cp034

0xeaa9,	// (0x0008ae92) vidtel_button_pane_g1

0xeab1,	// (0x0008ae9a) vidtel_button_pane_t1

0xd55f,	// (0x00089948) aid_size_vtel_slider_touch

0xd67c,	// (0x00089a65) scroll_pane_cp039

0x7b68,	// (0x00083f51) ncim_query_button_pane_cp01_ParamLimits

0x7b87,	// (0x00083f70) ncimui_query_pane_g1_ParamLimits

0xa670,	// (0x00086a59) input_focus_pane_cp012_ParamLimits

0xde83,	// (0x0008a26c) ncim_query_entry_pane_t1_ParamLimits

0xd67c,	// (0x00089a65) scroll_pane_cp039_ParamLimits

0x3d50,	// (0x00080139) navi_pane_bcale_mc_g1

0x3d58,	// (0x00080141) navi_pane_bcale_mc_t1

0xe29e,	// (0x0008a687) main_sp_fs_email_pane_g1

0xe2aa,	// (0x0008a693) main_sp_fs_email_pane_g2

0x0001,

0xfc24,	// (0x0008c00d) main_sp_fs_email_pane_g

0xe520,	// (0x0008a909) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe520,	// (0x0008a909) list_single_cale_mrui_row_pane_g3

0x1713,	// (0x0007dafc) list_single_recal_day_pane_g5_event_pane

0x1729,	// (0x0007db12) list_single_recal_day_pane_g7

0xeac7,	// (0x0008aeb0) list_recal_day_event_pane_cp01

0xead0,	// (0x0008aeb9) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x0008aec1) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x0008aec9) list_recal_vselct_pane_cp01

0xd56f,	// (0x00089958) list_recal_day_event_pane_cp01_g1

0x18cf,	// (0x0007dcb8) list_recal_day_event_pane_cp01_t1

0x1731,	// (0x0007db1a) list_single_recal_day_pane_t1_ParamLimits

0x1743,	// (0x0007db2c) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x0008c0ed) list_single_recal_day_pane_t_ParamLimits

0xa6e0,	// (0x00086ac9) bg_notes_pane_ParamLimits

0xa79d,	// (0x00086b86) list_notes_pane_ParamLimits

0x1d87,	// (0x0007e170) scroll_pane_cp06_ParamLimits

0xa7bf,	// (0x00086ba8) main_notes_pane_ParamLimits

0xa670,	// (0x00086a59) main_welc_pane

0x9190,	// (0x00085579) main_welc_body_pane_ParamLimits

0x9190,	// (0x00085579) main_welc_body_pane

0x91ab,	// (0x00085594) main_welc_opti_pane_ParamLimits

0x91ab,	// (0x00085594) main_welc_opti_pane

0x920c,	// (0x000855f5) main_welc_pane_t1_ParamLimits

0x920c,	// (0x000855f5) main_welc_pane_t1

0x93b2,	// (0x0008579b) main_welc_body_row_pane_ParamLimits

0x93b2,	// (0x0008579b) main_welc_body_row_pane

0xa67e,	// (0x00086a67) main_welc_opti_row_pane_ParamLimits

0xa67e,	// (0x00086a67) main_welc_opti_row_pane

0xeafa,	// (0x0008aee3) main_welc_opti_row_pane_g1

0x93cc,	// (0x000857b5) main_welc_opti_row_pane_t1

0xeb02,	// (0x0008aeeb) main_welc_body_row_pane_t1

0xe870,	// (0x0008ac59) popup_notif_wgt_heading_pane

0xe88a,	// (0x0008ac73) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x0008ac80) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x0008ac8c) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x0008ac9b) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0008c154) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x0008aca8) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x0008acbe) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x0008acd0) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x0008c15b) list_notif_wgt_row_pane_t_ParamLimits

0x8bf1,	// (0x00084fda) listrow_wgtman_pane_g1_ParamLimits

0x8bfe,	// (0x00084fe7) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x0008c18b) listrow_wgtman_pane_g_ParamLimits

0x17ad,	// (0x0007db96) listrow_wgtman_pane_t1_ParamLimits

0x17c5,	// (0x0007dbae) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x0008c190) listrow_wgtman_pane_t_ParamLimits

0x17eb,	// (0x0007dbd4) wait_bar_pane_cp09_ParamLimits

0xa017,	// (0x00086400) bg_popup_heading_pane_cp02

0xeb11,	// (0x0008aefa) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x0008af02) popup_notif_wgt_heading_pane_t1

0xa017,	// (0x00086400) main_vids_pane

0xa017,	// (0x00086400) vids_listscroll_pane

0x93db,	// (0x000857c4) scroll_pane_cp040

0xa017,	// (0x00086400) vids_list_pane

0x93e6,	// (0x000857cf) vids_list_double_pane_ParamLimits

0x93e6,	// (0x000857cf) vids_list_double_pane

0x93fa,	// (0x000857e3) vids_list_double_pane_g1

0x9403,	// (0x000857ec) vids_list_double_pane_t1

0x9413,	// (0x000857fc) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x0008c229) vids_list_double_pane_t

0xa670,	// (0x00086a59) main_ncimui_pane_ParamLimits

0x79a9,	// (0x00083d92) main_ncimui_pane_g1_ParamLimits

0x79b7,	// (0x00083da0) main_ncimui_pane_g2_ParamLimits

0x79b7,	// (0x00083da0) main_ncimui_pane_g2

0x0001,

0xfb25,	// (0x0008bf0e) main_ncimui_pane_g_ParamLimits

0xfb25,	// (0x0008bf0e) main_ncimui_pane_g

0x91c6,	// (0x000855af) main_welc_pane_g1_ParamLimits

0x91c6,	// (0x000855af) main_welc_pane_g1

0x91d2,	// (0x000855bb) main_welc_pane_g2_ParamLimits

0x91d2,	// (0x000855bb) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0008c213) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0008c213) main_welc_pane_g

0xa6e0,	// (0x00086ac9) listscroll_mce_pane_ParamLimits

0x3e1a,	// (0x00080203) wait_bar_pane_cp10

0xc633,	// (0x00088a1c) main_cale_day_pane_ParamLimits

0xc633,	// (0x00088a1c) main_cale_week_pane_ParamLimits

0xa6e0,	// (0x00086ac9) main_messa_pane_ParamLimits

0x55f0,	// (0x000819d9) main_clock2_btn_pane_ParamLimits

0x55f0,	// (0x000819d9) main_clock2_btn_pane

0xcdda,	// (0x000891c3) main_clock2_btn_pane_cp01_ParamLimits

0xcdda,	// (0x000891c3) main_clock2_btn_pane_cp01

0xe4f1,	// (0x0008a8da) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x0008ad06) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0008c162) main_cf0_pane_g

0x8df5,	// (0x000851de) area_left_week_number_pane_ParamLimits

0x8e08,	// (0x000851f1) area_top_day_name_pane_ParamLimits

0x8e16,	// (0x000851ff) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x0008ade1) grid_month_view_pane_ParamLimits

0xea06,	// (0x0008adef) frm_month_g1_ParamLimits

0x8e94,	// (0x0008527d) frm_month_g2_ParamLimits

0x8ea5,	// (0x0008528e) frm_month_g3_ParamLimits

0x8eb6,	// (0x0008529f) frm_month_g4_ParamLimits

0x8ec7,	// (0x000852b0) frm_month_g5_ParamLimits

0x8ed8,	// (0x000852c1) frm_month_g6_ParamLimits

0x8eeb,	// (0x000852d4) frm_month_g7_ParamLimits

0xea13,	// (0x0008adfc) frm_month_g8_ParamLimits

0x8efe,	// (0x000852e7) frm_month_g9_ParamLimits

0x8f0b,	// (0x000852f4) frm_month_g10_ParamLimits

0x8f18,	// (0x00085301) frm_month_g11_ParamLimits

0x8f25,	// (0x0008530e) frm_month_g12_ParamLimits

0x8f32,	// (0x0008531b) frm_month_g13_ParamLimits

0x8f41,	// (0x0008532a) frm_month_g14_ParamLimits

0x8f50,	// (0x00085339) frm_month_g15_ParamLimits

0x8f5f,	// (0x00085348) frm_month_g16_ParamLimits

0xfdd1,	// (0x0008c1ba) frm_month_g_ParamLimits

0xea20,	// (0x0008ae09) cell_top_day_name_pane_t1_ParamLimits

0x8f6e,	// (0x00085357) cell_area_left_week_number_pane_g1_ParamLimits

0x8f7d,	// (0x00085366) cell_area_left_week_number_pane_t1_ParamLimits

0xa74d,	// (0x00086b36) cell_month_view_pane_g1_ParamLimits

0x8f93,	// (0x0008537c) cell_month_view_pane_t1_ParamLimits

0xa6d8,	// (0x00086ac1) main_clock2_btn_pane_g1

0xeb27,	// (0x0008af10) main_clock2_btn_pane_t1

0xa670,	// (0x00086a59) listscroll_cmail_pane_ParamLimits

0xe29e,	// (0x0008a687) main_sp_fs_email_pane_g1_ParamLimits

0xe2aa,	// (0x0008a693) main_sp_fs_email_pane_g2_ParamLimits

0xfc24,	// (0x0008c00d) main_sp_fs_email_pane_g_ParamLimits

0xe5fa,	// (0x0008a9e3) list_recal_day_pane_ParamLimits

0xe60b,	// (0x0008a9f4) mian_recal_day_pane_t1

0x1302,	// (0x0007d6eb) list_single_dyc_row_text_pane_t4_ParamLimits

0x1302,	// (0x0007d6eb) list_single_dyc_row_text_pane_t4

0x1347,	// (0x0007d730) list_single_dyc_row_text_pane_t5_ParamLimits

0x1347,	// (0x0007d730) list_single_dyc_row_text_pane_t5

0x13bd,	// (0x0007d7a6) list_single_dyc_row_text_pane_t6_ParamLimits

0x13bd,	// (0x0007d7a6) list_single_dyc_row_text_pane_t6

0x3979,	// (0x0007fd62) aid_mgn_list_cale_time_pane

0xa670,	// (0x00086a59) main_gallery2_pane_ParamLimits

0xcdee,	// (0x000891d7) main_clock2_pane_cp01_t1

0xcdfc,	// (0x000891e5) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x0008bafa) main_clock2_pane_cp01_t

0x2283,	// (0x0007e66c) cale_week_scroll_pane_g16_ParamLimits

0x2283,	// (0x0007e66c) cale_week_scroll_pane_g16

0xa95d,	// (0x00086d46) vorec_slider_pane

0xeab1,	// (0x0008ae9a) vidtel_button_pane_t1_ParamLimits

0x882d,	// (0x00084c16) main_fs_bigclock_clock_pane_g1_ParamLimits

0x882d,	// (0x00084c16) main_fs_bigclock_clock_pane_g2_ParamLimits

0x883c,	// (0x00084c25) main_fs_bigclock_clock_pane_g3_ParamLimits

0x883c,	// (0x00084c25) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0008c110) main_fs_bigclock_clock_pane_g_ParamLimits

0x884c,	// (0x00084c35) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8861,	// (0x00084c4a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x0008c119) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f3a,	// (0x00081323) main_mup3_lyrics_pane_ParamLimits

0x4f3a,	// (0x00081323) main_mup3_lyrics_pane

0x9448,	// (0x00085831) main_mup3_lyrics_pane_t1_ParamLimits

0x9448,	// (0x00085831) main_mup3_lyrics_pane_t1

0x5b10,	// (0x00081ef9) aid_main_mp4_pane_t1_area

0x5b1a,	// (0x00081f03) aid_main_mp4_pane_t2_area

0x5c27,	// (0x00082010) main_mp4_pane_g7_ParamLimits

0x5c27,	// (0x00082010) main_mp4_pane_g7

0x5c33,	// (0x0008201c) main_mp4_pane_g8_ParamLimits

0x5c33,	// (0x0008201c) main_mp4_pane_g8

0x6045,	// (0x0008242e) aid_call6_pane_g1_size

0x913c,	// (0x00085525) list_double_large_graphic_phob2_other_pane_ParamLimits

0x913c,	// (0x00085525) list_double_large_graphic_phob2_other_pane

0x946f,	// (0x00085858) list_double_large_graphic_phob2_other_pane_g1

0xa017,	// (0x00086400) list_highlight_pane_cp026

0xa670,	// (0x00086a59) main_welc_pane_ParamLimits

0x82ae,	// (0x00084697) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x82ae,	// (0x00084697) main_sp_fs_ctrlbar_pane_g3

0x82c8,	// (0x000846b1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x82c8,	// (0x000846b1) main_sp_fs_ctrlbar_pane_g4

0x82fa,	// (0x000846e3) toolbar2_fixed_button_pane_cp01

0x8305,	// (0x000846ee) toolbar2_fixed_button_pane_cp02

0x8312,	// (0x000846fb) toolbar2_fixed_button_pane_cp03

0x9180,	// (0x00085569) list_welc_entry_pane_ParamLimits

0x9180,	// (0x00085569) list_welc_entry_pane

0x91e0,	// (0x000855c9) main_welc_pane_g3_ParamLimits

0x91e0,	// (0x000855c9) main_welc_pane_g3

0x922a,	// (0x00085613) main_welc_pane_t2_ParamLimits

0x922a,	// (0x00085613) main_welc_pane_t2

0x923e,	// (0x00085627) main_welc_pane_t3_ParamLimits

0x923e,	// (0x00085627) main_welc_pane_t3

0x0005,

0xfe33,	// (0x0008c21c) main_welc_pane_t_ParamLimits

0xfe33,	// (0x0008c21c) main_welc_pane_t

0x9342,	// (0x0008572b) welc_button_pane_ParamLimits

0x9342,	// (0x0008572b) welc_button_pane

0x93a4,	// (0x0008578d) welc_service_logo_pane_ParamLimits

0x93a4,	// (0x0008578d) welc_service_logo_pane

0x9477,	// (0x00085860) list_single_welc_entry_pane_ParamLimits

0x9477,	// (0x00085860) list_single_welc_entry_pane

0x9488,	// (0x00085871) list_single_welc_entry_pane_g1

0x9492,	// (0x0008587b) list_single_welc_entry_pane_t1

0x94a0,	// (0x00085889) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x0008c22e) list_single_welc_entry_pane_t

0xa017,	// (0x00086400) bg_button_pane_cp035

0x94ae,	// (0x00085897) welc_button_pane_t1

0xeb35,	// (0x0008af1e) welc_service_logo_pane_g1

0xeb3e,	// (0x0008af27) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0008c233) welc_service_logo_pane_g

0xa017,	// (0x00086400) main_int_radio_pane

0xdd21,	// (0x0008a10a) list_single_fs_dyc_pane_g1

0x1809,	// (0x0007dbf2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x1809,	// (0x0007dbf2) list_double_large_graphic_phob2_pane_g3

0x903b,	// (0x00085424) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x903b,	// (0x00085424) list_double_large_graphic_phob2_pane_g4

0x94bc,	// (0x000858a5) main_int_radio1_pane_ParamLimits

0x94bc,	// (0x000858a5) main_int_radio1_pane

0xeb47,	// (0x0008af30) find_pane_cp02

0x94d2,	// (0x000858bb) input_focus_pane_cp12_ParamLimits

0x94d2,	// (0x000858bb) input_focus_pane_cp12

0x94de,	// (0x000858c7) input_focus_pane_cp13_ParamLimits

0x94de,	// (0x000858c7) input_focus_pane_cp13

0x94f6,	// (0x000858df) input_focus_pane_cp14_ParamLimits

0x94f6,	// (0x000858df) input_focus_pane_cp14

0xeb50,	// (0x0008af39) int_radio1_listscroll_pane

0x950e,	// (0x000858f7) main_int_radio1_pane_g1_ParamLimits

0x950e,	// (0x000858f7) main_int_radio1_pane_g1

0x951a,	// (0x00085903) main_int_radio1_pane_t1_ParamLimits

0x951a,	// (0x00085903) main_int_radio1_pane_t1

0x952c,	// (0x00085915) main_int_radio1_pane_t2_ParamLimits

0x952c,	// (0x00085915) main_int_radio1_pane_t2

0x9540,	// (0x00085929) main_int_radio1_pane_t3_ParamLimits

0x9540,	// (0x00085929) main_int_radio1_pane_t3

0x9554,	// (0x0008593d) main_int_radio1_pane_t4_ParamLimits

0x9554,	// (0x0008593d) main_int_radio1_pane_t4

0xeb5a,	// (0x0008af43) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x0008af43) main_int_radio1_pane_t5

0x956b,	// (0x00085954) main_int_radio1_pane_t6_ParamLimits

0x956b,	// (0x00085954) main_int_radio1_pane_t6

0x957d,	// (0x00085966) main_int_radio1_pane_t7_ParamLimits

0x957d,	// (0x00085966) main_int_radio1_pane_t7

0x958f,	// (0x00085978) main_int_radio1_pane_t8_ParamLimits

0x958f,	// (0x00085978) main_int_radio1_pane_t8

0x95a1,	// (0x0008598a) main_int_radio1_pane_t9_ParamLimits

0x95a1,	// (0x0008598a) main_int_radio1_pane_t9

0x95b3,	// (0x0008599c) main_int_radio1_pane_t10_ParamLimits

0x95b3,	// (0x0008599c) main_int_radio1_pane_t10

0x95e4,	// (0x000859cd) main_int_radio1_pane_t11_ParamLimits

0x95e4,	// (0x000859cd) main_int_radio1_pane_t11

0x9615,	// (0x000859fe) main_int_radio1_pane_t12_ParamLimits

0x9615,	// (0x000859fe) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x0008c238) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x0008c238) main_int_radio1_pane_t

0xea33,	// (0x0008ae1c) int_radio_list_pane

0xea3b,	// (0x0008ae24) scroll_pane_cp037

0xeb6c,	// (0x0008af55) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x0008af55) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x0008af69) list_double_large_graphic_int_radio_pane_g1

0x18dd,	// (0x0007dcc6) list_double_large_graphic_int_radio_pane_t1

0x18eb,	// (0x0007dcd4) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0008c251) list_double_large_graphic_int_radio_pane_t

0xa017,	// (0x00086400) list_highlight_pane_cp027

0xeaea,	// (0x0008aed3) main_button_pane_4

0x91ec,	// (0x000855d5) main_welc_pane_g4_ParamLimits

0x91ec,	// (0x000855d5) main_welc_pane_g4

0x9250,	// (0x00085639) main_welc_pane_t4_ParamLimits

0x9250,	// (0x00085639) main_welc_pane_t4

0x9262,	// (0x0008564b) main_welc_pane_t5_ParamLimits

0x9262,	// (0x0008564b) main_welc_pane_t5

0x9296,	// (0x0008567f) main_welc_pane_t6_ParamLimits

0x9296,	// (0x0008567f) main_welc_pane_t6

0x9350,	// (0x00085739) welc_button_pane_2_ParamLimits

0x9350,	// (0x00085739) welc_button_pane_2

0x936a,	// (0x00085753) welc_button_pane_3_ParamLimits

0x936a,	// (0x00085753) welc_button_pane_3

0xeaf2,	// (0x0008aedb) welc_button_pane_4

0x9386,	// (0x0008576f) welc_button_pane_5_ParamLimits

0x9386,	// (0x0008576f) welc_button_pane_5

0x194d,	// (0x0007dd36) main_popup_welc_pane

0xeb98,	// (0x0008af81) main_welc_sk_g3

0xeba2,	// (0x0008af8b) main_welc_sk_g4

0xebac,	// (0x0008af95) main_welc_sk_t3

0xebbc,	// (0x0008afa5) main_welc_sk_t4

0xebcc,	// (0x0008afb5) popup_welc_pane_t4

0xebda,	// (0x0008afc3) popup_welc_pane_t5

0xebe8,	// (0x0008afd1) popup_welc_pane_t6

0xa017,	// (0x00086400) main_acti_pane

0xa017,	// (0x00086400) main_sso_pane

0x962c,	// (0x00085a15) sso_body_pane_ParamLimits

0x962c,	// (0x00085a15) sso_body_pane

0x963b,	// (0x00085a24) sso_logo_pane_ParamLimits

0x963b,	// (0x00085a24) sso_logo_pane

0x9664,	// (0x00085a4d) sso_sk_pane_ParamLimits

0x9664,	// (0x00085a4d) sso_sk_pane

0xa97f,	// (0x00086d68) main_sso_logo_pane_g1

0x9671,	// (0x00085a5a) sso_sk_pane_t1_ParamLimits

0x9671,	// (0x00085a5a) sso_sk_pane_t1

0x9685,	// (0x00085a6e) sso_sk_pane_t2_ParamLimits

0x9685,	// (0x00085a6e) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x0008c256) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x0008c256) sso_sk_pane_t

0xec2a,	// (0x0008b013) aid_sso_gap

0xec33,	// (0x0008b01c) aid_sso_txt1

0xec3d,	// (0x0008b026) aid_sso_txt2

0xec47,	// (0x0008b030) aid_sso_txt3

0x0002,

0xfe72,	// (0x0008c25b) aid_sso_txt

0xec51,	// (0x0008b03a) aid_sso_widget

0x96e2,	// (0x00085acb) sso_btn_pane_ParamLimits

0x96e2,	// (0x00085acb) sso_btn_pane

0x975b,	// (0x00085b44) sso_option_pane_ParamLimits

0x975b,	// (0x00085b44) sso_option_pane

0x97d7,	// (0x00085bc0) sso_query_pane_ParamLimits

0x97d7,	// (0x00085bc0) sso_query_pane

0x9827,	// (0x00085c10) sso_query_pane_cp01_ParamLimits

0x9827,	// (0x00085c10) sso_query_pane_cp01

0x987f,	// (0x00085c68) sso_t_hdr_pane_ParamLimits

0x987f,	// (0x00085c68) sso_t_hdr_pane

0x98a3,	// (0x00085c8c) sso_t_nml_pane_ParamLimits

0x98a3,	// (0x00085c8c) sso_t_nml_pane

0xec5b,	// (0x0008b044) sso_t_sub_pane

0x9648,	// (0x00085a31) sso_popup_window_ParamLimits

0x9648,	// (0x00085a31) sso_popup_window

0x9697,	// (0x00085a80) sso_apps_pane_ParamLimits

0x9697,	// (0x00085a80) sso_apps_pane

0x96ba,	// (0x00085aa3) sso_body_pane_g1

0x96c2,	// (0x00085aab) sso_body_pane_t1

0x96d2,	// (0x00085abb) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0008c262) sso_body_pane_t

0x972d,	// (0x00085b16) sso_btn_pane_cp01_ParamLimits

0x972d,	// (0x00085b16) sso_btn_pane_cp01

0x97a9,	// (0x00085b92) sso_prog_pane_ParamLimits

0x97a9,	// (0x00085b92) sso_prog_pane

0x98f3,	// (0x00085cdc) sso_t_hdr_pane_t1_ParamLimits

0x98f3,	// (0x00085cdc) sso_t_hdr_pane_t1

0xec70,	// (0x0008b059) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x0008b059) input_focus_pane_cp10

0xec8a,	// (0x0008b073) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x0008b073) sso_query_pane_t1

0xec9d,	// (0x0008b086) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x0008b086) sso_query_pane_t2

0xecb7,	// (0x0008b0a0) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0008b0a0) sso_query_pane_t3

0xece1,	// (0x0008b0ca) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0008b0ca) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x0008c267) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x0008c267) sso_query_pane_t

0xa017,	// (0x00086400) bg_button_pane_cp22

0xeb89,	// (0x0008af72) sso_btn_pane_t1

0x990c,	// (0x00085cf5) sso_t_nml_pane_t1_ParamLimits

0x990c,	// (0x00085cf5) sso_t_nml_pane_t1

0x9929,	// (0x00085d12) sso_option_row_pane_ParamLimits

0x9929,	// (0x00085d12) sso_option_row_pane

0xed05,	// (0x0008b0ee) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x0008b0ee) sso_t_sub_pane_t1

0xa670,	// (0x00086a59) bg_popup_window_pane_cp11_ParamLimits

0xa670,	// (0x00086a59) bg_popup_window_pane_cp11

0xed22,	// (0x0008b10b) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x0008b10b) popup_sk_window_cp01

0xed2f,	// (0x0008b118) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x0008b118) sso_popup_body_pane

0xed3c,	// (0x0008b125) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x0008b125) scroll_pane_cp21

0xed49,	// (0x0008b132) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x0008b132) sso_popup_body_t_pane

0xed56,	// (0x0008b13f) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x0008b13f) sso_popup_body_t_hdr_pane

0xed69,	// (0x0008b152) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x0008b152) sso_popup_body_t_nml_pane

0xed87,	// (0x0008b170) sso_popup_body_t_sub_pane_ParamLimits

0xed87,	// (0x0008b170) sso_popup_body_t_sub_pane

0xedaa,	// (0x0008b193) sso_popup_body_t_hdr_pane_t1

0x9936,	// (0x00085d1f) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9936,	// (0x00085d1f) sso_popup_body_t_nml_pane_t1

0xedba,	// (0x0008b1a3) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedba,	// (0x0008b1a3) sso_popup_body_t_sub_pane_t1

0xa97f,	// (0x00086d68) sso_prog_pane_g1

0x997d,	// (0x00085d66) sso_apps_pane_comp1_ParamLimits

0x997d,	// (0x00085d66) sso_apps_pane_comp1

0xeddf,	// (0x0008b1c8) sso_apps_pane_comp1_g1

0xede7,	// (0x0008b1d0) sso_apps_pane_comp1_t1

0xee03,	// (0x0008b1ec) sso_option_row_pane_g1

0xee0b,	// (0x0008b1f4) sso_option_row_pane_t1

0x916e,	// (0x00085557) bg_welc_area_ParamLimits

0x916e,	// (0x00085557) bg_welc_area

0x92cc,	// (0x000856b5) sso_t_hdr_pane_a_t1_ParamLimits

0x92cc,	// (0x000856b5) sso_t_hdr_pane_a_t1

0x92e0,	// (0x000856c9) sso_t_nml_pane_a_t1_ParamLimits

0x92e0,	// (0x000856c9) sso_t_nml_pane_a_t1

0x930e,	// (0x000856f7) sso_t_sub_pane_a_t1_ParamLimits

0x930e,	// (0x000856f7) sso_t_sub_pane_a_t1

0xeb89,	// (0x0008af72) sso_btn_pane_t1_copy1

0xa017,	// (0x00086400) welc_button_pane_2_comp1

0xebf8,	// (0x0008afe1) sso_t_hdr_pane_p_t1

0xec08,	// (0x0008aff1) sso_t_nml_pane_p_t1

0xec18,	// (0x0008b001) sso_t_sub_pane_p_t1

0xe326,	// (0x0008a70f) list_cmail_pane_ParamLimits

0x9396,	// (0x0008577f) welc_button_pane_cp01_ParamLimits

0x9396,	// (0x0008577f) welc_button_pane_cp01

0xa017,	// (0x00086400) main_att_pane

0xedf5,	// (0x0008b1de) input_focus_pane_cp10_t1

0xee0b,	// (0x0008b1f4) sso_option_row_pane_t1_ParamLimits

0x9992,	// (0x00085d7b) main_att_body_pane_ParamLimits

0x9992,	// (0x00085d7b) main_att_body_pane

0x99be,	// (0x00085da7) att_btn_pane_ParamLimits

0x99be,	// (0x00085da7) att_btn_pane

0x99e0,	// (0x00085dc9) att_btn_pane_cp01_ParamLimits

0x99e0,	// (0x00085dc9) att_btn_pane_cp01

0x99fa,	// (0x00085de3) att_li_srv_pane_ParamLimits

0x99fa,	// (0x00085de3) att_li_srv_pane

0x9a0c,	// (0x00085df5) att_opt_pane_ParamLimits

0x9a0c,	// (0x00085df5) att_opt_pane

0x9a50,	// (0x00085e39) att_query_pane_ParamLimits

0x9a50,	// (0x00085e39) att_query_pane

0x9a94,	// (0x00085e7d) att_query_pane_cp01_ParamLimits

0x9a94,	// (0x00085e7d) att_query_pane_cp01

0x9ad8,	// (0x00085ec1) att_t_hdr_pane_ParamLimits

0x9ad8,	// (0x00085ec1) att_t_hdr_pane

0x9b36,	// (0x00085f1f) att_t_nml_pane_ParamLimits

0x9b36,	// (0x00085f1f) att_t_nml_pane

0x9b7e,	// (0x00085f67) att_t_nml_pane_cp01_ParamLimits

0x9b7e,	// (0x00085f67) att_t_nml_pane_cp01

0x9ba2,	// (0x00085f8b) att_t_nmlb_pane_ParamLimits

0x9ba2,	// (0x00085f8b) att_t_nmlb_pane

0x9bbc,	// (0x00085fa5) att_term_pane_ParamLimits

0x9bbc,	// (0x00085fa5) att_term_pane

0x9c02,	// (0x00085feb) main_att_body_pane_g1_ParamLimits

0x9c02,	// (0x00085feb) main_att_body_pane_g1

0xee21,	// (0x0008b20a) att_t_hdr_pane_t1_ParamLimits

0xee21,	// (0x0008b20a) att_t_hdr_pane_t1

0xee49,	// (0x0008b232) att_t_nml_pane_t1_ParamLimits

0xee49,	// (0x0008b232) att_t_nml_pane_t1

0xee6e,	// (0x0008b257) att_btn_pane_t1

0xa017,	// (0x00086400) bg_button_pane_cp23

0x9c36,	// (0x0008601f) att_li_srv_row_pane_ParamLimits

0x9c36,	// (0x0008601f) att_li_srv_row_pane

0xee7e,	// (0x0008b267) att_t_nmlb_pane_t1_ParamLimits

0xee7e,	// (0x0008b267) att_t_nmlb_pane_t1

0xee97,	// (0x0008b280) att_query_pane_t1

0xeea6,	// (0x0008b28f) att_query_pane_t2

0xeeb5,	// (0x0008b29e) att_query_pane_t3

0x0002,

0xfe87,	// (0x0008c270) att_query_pane_t

0xeec4,	// (0x0008b2ad) input_focus_pane_cp11

0xeecd,	// (0x0008b2b6) att_term_pane_t1_ParamLimits

0xeecd,	// (0x0008b2b6) att_term_pane_t1

0xa017,	// (0x00086400) att_opt_row_pane

0xeeea,	// (0x0008b2d3) att_opt_row_pane_g1

0xeef2,	// (0x0008b2db) att_opt_row_pane_t1_ParamLimits

0xeef2,	// (0x0008b2db) att_opt_row_pane_t1

0x9c46,	// (0x0008602f) att_li_srv_row_pane_g1

0x9c4e,	// (0x00086037) att_li_srv_row_pane_t1

0x9c63,	// (0x0008604c) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x0008c277) att_li_srv_row_pane_t

0xa017,	// (0x00086400) main_call7_pane

0xa017,	// (0x00086400) main_vod_pane

0xec5b,	// (0x0008b044) sso_t_sub_pane_ParamLimits

0x99a6,	// (0x00085d8f) att_btn_emg_pane_ParamLimits

0x99a6,	// (0x00085d8f) att_btn_emg_pane

0x9c4e,	// (0x00086037) att_li_srv_row_pane_t1_ParamLimits

0x9c63,	// (0x0008604c) att_li_srv_row_pane_t2_ParamLimits

0xfe8e,	// (0x0008c277) att_li_srv_row_pane_t_ParamLimits

0xef0b,	// (0x0008b2f4) att_btn_close_pane_g1

0xa017,	// (0x00086400) bg_button_pane_cp24

0x48c3,	// (0x00080cac) main_vod_body_pane_ParamLimits

0x48c3,	// (0x00080cac) main_vod_body_pane

0x9c78,	// (0x00086061) main_vod_body_pane_g1_ParamLimits

0x9c78,	// (0x00086061) main_vod_body_pane_g1

0x9ca8,	// (0x00086091) scroll_pane_cp24_ParamLimits

0x9ca8,	// (0x00086091) scroll_pane_cp24

0x9cf0,	// (0x000860d9) vod_btn_pane_ParamLimits

0x9cf0,	// (0x000860d9) vod_btn_pane

0x9d30,	// (0x00086119) vod_det_pane_ParamLimits

0x9d30,	// (0x00086119) vod_det_pane

0x9d5c,	// (0x00086145) vod_logo_g1_ParamLimits

0x9d5c,	// (0x00086145) vod_logo_g1

0x9d96,	// (0x0008617f) vod_opt_pane_ParamLimits

0x9d96,	// (0x0008617f) vod_opt_pane

0x9dc6,	// (0x000861af) vod_opt_pane_cp01_ParamLimits

0x9dc6,	// (0x000861af) vod_opt_pane_cp01

0x9dee,	// (0x000861d7) vod_query_pane_ParamLimits

0x9dee,	// (0x000861d7) vod_query_pane

0x9e18,	// (0x00086201) vod_query_pane_cp01_ParamLimits

0x9e18,	// (0x00086201) vod_query_pane_cp01

0x9e24,	// (0x0008620d) vod_t_nml_pane_ParamLimits

0x9e24,	// (0x0008620d) vod_t_nml_pane

0x9ed2,	// (0x000862bb) vod_t_nml_pane_cp01_ParamLimits

0x9ed2,	// (0x000862bb) vod_t_nml_pane_cp01

0x9f0a,	// (0x000862f3) vod_t_sub_pane_ParamLimits

0x9f0a,	// (0x000862f3) vod_t_sub_pane

0x9f38,	// (0x00086321) vod_t_sub_pane_cp01_ParamLimits

0x9f38,	// (0x00086321) vod_t_sub_pane_cp01

0xeec4,	// (0x0008b2ad) vod_query_field_pane

0xee97,	// (0x0008b280) vod_query_pane_t1

0xa017,	// (0x00086400) bg_button_pane_cp25

0xef13,	// (0x0008b2fc) sso_btn_pane_t1_copy2

0x9f60,	// (0x00086349) vod_t_nml_pane_t1_ParamLimits

0x9f60,	// (0x00086349) vod_t_nml_pane_t1

0xef23,	// (0x0008b30c) vod_opt_row_pane_ParamLimits

0xef23,	// (0x0008b30c) vod_opt_row_pane

0xef35,	// (0x0008b31e) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x0008b31e) vod_t_sub_pane_t1

0x9f9d,	// (0x00086386) vod_det_cell_pane_ParamLimits

0x9f9d,	// (0x00086386) vod_det_cell_pane

0xa017,	// (0x00086400) input_focus_pane_cp15

0xef4e,	// (0x0008b337) vod_query_field_pane_t1

0xef5c,	// (0x0008b345) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0008b345) vod_opt_row_pane_g1

0xef68,	// (0x0008b351) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0008b351) vod_opt_row_pane_t1

0xef8d,	// (0x0008b376) vod_det_cell_field_pane

0xef96,	// (0x0008b37f) vod_det_cell_pane_g1

0xee97,	// (0x0008b280) vod_det_cell_pane_t1

0xa017,	// (0x00086400) input_focus_pane_cp16

0xef4e,	// (0x0008b337) vod_det_cell_field_pane_t1

0x8adc,	// (0x00084ec5) call7_btn_grp_pane_ParamLimits

0x8adc,	// (0x00084ec5) call7_btn_grp_pane

0x9faf,	// (0x00086398) call7_bubble_pane_ParamLimits

0x9faf,	// (0x00086398) call7_bubble_pane

0x8b19,	// (0x00084f02) cell_call7_btn_pane_ParamLimits

0x8b19,	// (0x00084f02) cell_call7_btn_pane

0x9fbe,	// (0x000863a7) call7_pane_g1_ParamLimits

0x9fbe,	// (0x000863a7) call7_pane_g1

0x9fcd,	// (0x000863b6) call7_windows_conf_pane_ParamLimits

0x9fcd,	// (0x000863b6) call7_windows_conf_pane

0x9fed,	// (0x000863d6) popup_call7_1st_window_ParamLimits

0x9fed,	// (0x000863d6) popup_call7_1st_window

0x9ffb,	// (0x000863e4) popup_call7_2nd_window_ParamLimits

0x9ffb,	// (0x000863e4) popup_call7_2nd_window

0xa009,	// (0x000863f2) popup_call7_3rd_window_ParamLimits

0xa009,	// (0x000863f2) popup_call7_3rd_window

0xa017,	// (0x00086400) bg_button_pane_cp26

0xe99e,	// (0x0008ad87) cell_call7_btn_pane_g1

0xee3a,	// (0x0008b223) cell_call7_btn_pane_t1

0xa017,	// (0x00086400) bg_popup_window_pane_cp12

0xef9e,	// (0x0008b387) popup_call7_1st_window_g1

0xefa6,	// (0x0008b38f) popup_call7_1st_window_g2

0xefae,	// (0x0008b397) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x0008c27c) popup_call7_1st_window_g

0xefb6,	// (0x0008b39f) popup_call7_1st_window_t1

0xefc5,	// (0x0008b3ae) popup_call7_1st_window_t2

0xefd5,	// (0x0008b3be) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0008c283) popup_call7_1st_window_t

0xa017,	// (0x00086400) bg_popup_window_pane_cp13

0xefe5,	// (0x0008b3ce) popup_call7_2nd_window_g1

0xefed,	// (0x0008b3d6) popup_call7_2nd_window_g2

0xeff5,	// (0x0008b3de) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x0008c28a) popup_call7_2nd_window_g

0xeffd,	// (0x0008b3e6) popup_call7_2nd_window_t1

0xa017,	// (0x00086400) bg_popup_window_pane_cp14

0xf00c,	// (0x0008b3f5) call7_list_conf_pane

0xf014,	// (0x0008b3fd) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0008b3fd) call7_list_conf_row_pane

0xf027,	// (0x0008b410) call7_list_conf_row_pane_g1

0xf02f,	// (0x0008b418) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x0008c291) call7_list_conf_row_pane_g

0xf037,	// (0x0008b420) call7_list_conf_row_pane_t1

0xa017,	// (0x00086400) list_highlight_pane_cp22
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
