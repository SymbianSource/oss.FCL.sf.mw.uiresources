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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00033b74 };

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
0x4864,	// (0x000383d8) Screen

0x4870,	// (0x000383e4) application_window

0x48cc,	// (0x00038440) area_bottom_pane_ParamLimits

0x48cc,	// (0x00038440) area_bottom_pane

0x492a,	// (0x0003849e) area_top_pane_ParamLimits

0x492a,	// (0x0003849e) area_top_pane

0x498e,	// (0x00038502) call_video_uplink_pane_ParamLimits

0x498e,	// (0x00038502) call_video_uplink_pane

0x49cd,	// (0x00038541) main_pane_ParamLimits

0x49cd,	// (0x00038541) main_pane

0xe44a,	// (0x00041fbe) context_pane

0x79c3,	// (0x0003b537) navi_pane

0x79ec,	// (0x0003b560) popup_cale_events_window_ParamLimits

0x79ec,	// (0x0003b560) popup_cale_events_window

0xe45d,	// (0x00041fd1) popup_mup_playback_window

0x7a04,	// (0x0003b578) signal_pane

0x2bf7,	// (0x0003676b) main_browser_pane

0xc78e,	// (0x00040302) main_burst_pane

0x7833,	// (0x0003b3a7) main_calc_pane

0xe430,	// (0x00041fa4) main_cale_day_pane

0x4f75,	// (0x00038ae9) main_cale_month_pane

0xe430,	// (0x00041fa4) main_cale_week_pane

0xc78e,	// (0x00040302) main_call_pane

0x28a1,	// (0x00036415) main_call_poc_pane

0xc78e,	// (0x00040302) main_camera_pane

0xc78e,	// (0x00040302) main_chi_dic_pane

0xcfa6,	// (0x00040b1a) main_clock_pane

0x28a1,	// (0x00036415) main_fmradio_pane

0xc78e,	// (0x00040302) main_graph_messa_pane

0x28a1,	// (0x00036415) main_help_pane

0x2bf7,	// (0x0003676b) main_im_pane

0x2afc,	// (0x00036670) main_image_pane_ParamLimits

0x2afc,	// (0x00036670) main_image_pane

0x28a1,	// (0x00036415) main_location2_pane

0xc78e,	// (0x00040302) main_location_pane

0x2afc,	// (0x00036670) main_messa_pane

0x28a1,	// (0x00036415) main_mp2_pane

0xc78e,	// (0x00040302) main_mp_pane

0x28a1,	// (0x00036415) main_msg_pane

0x28a1,	// (0x00036415) main_mup_eq_pane

0x28a1,	// (0x00036415) main_mup_pane

0x2bf7,	// (0x0003676b) main_notes_pane

0x28a1,	// (0x00036415) main_pec_pane

0x28a1,	// (0x00036415) main_phob_pane

0x28a1,	// (0x00036415) main_pinb_pane

0x28a1,	// (0x00036415) main_postcard_pane

0x28a1,	// (0x00036415) main_qdial_pane

0xc78e,	// (0x00040302) main_skin_pane

0x28a1,	// (0x00036415) main_smil2_pane

0xc78e,	// (0x00040302) main_smil_pane

0xc78e,	// (0x00040302) main_video_pane

0xc78e,	// (0x00040302) main_video_tele_pane

0x2afc,	// (0x00036670) main_viewer_pane_ParamLimits

0x2afc,	// (0x00036670) main_viewer_pane

0xc78e,	// (0x00040302) main_vorec_pane

0x7873,	// (0x0003b3e7) popup_blid_sat_info_window_ParamLimits

0x7873,	// (0x0003b3e7) popup_blid_sat_info_window

0x7899,	// (0x0003b40d) popup_dyc_status_message_window_ParamLimits

0x7899,	// (0x0003b40d) popup_dyc_status_message_window

0x78a9,	// (0x0003b41d) popup_grid_large_graphic_window_ParamLimits

0x78a9,	// (0x0003b41d) popup_grid_large_graphic_window

0x793e,	// (0x0003b4b2) popup_loc_request_window_ParamLimits

0x793e,	// (0x0003b4b2) popup_loc_request_window

0x7997,	// (0x0003b50b) popup_wml_address_window_ParamLimits

0x7997,	// (0x0003b50b) popup_wml_address_window

0x770b,	// (0x0003b27f) call_muted_g1

0x7383,	// (0x0003aef7) popup_call_audio_conf_window_ParamLimits

0x7383,	// (0x0003aef7) popup_call_audio_conf_window

0x771b,	// (0x0003b28f) popup_call_audio_first_window_ParamLimits

0x771b,	// (0x0003b28f) popup_call_audio_first_window

0x775b,	// (0x0003b2cf) popup_call_audio_in_window_ParamLimits

0x775b,	// (0x0003b2cf) popup_call_audio_in_window

0x777f,	// (0x0003b2f3) popup_call_audio_out_window_ParamLimits

0x777f,	// (0x0003b2f3) popup_call_audio_out_window

0x77a1,	// (0x0003b315) popup_call_audio_second_window_ParamLimits

0x77a1,	// (0x0003b315) popup_call_audio_second_window

0x77d1,	// (0x0003b345) popup_call_audio_wait_window_ParamLimits

0x77d1,	// (0x0003b345) popup_call_audio_wait_window

0x77f2,	// (0x0003b366) popup_number_entry_window_ParamLimits

0x77f2,	// (0x0003b366) popup_number_entry_window

0x2459,	// (0x00035fcd) bg_popup_call_pane_cp05_ParamLimits

0x2459,	// (0x00035fcd) bg_popup_call_pane_cp05

0x2479,	// (0x00035fed) popup_number_entry_window_t1

0x248c,	// (0x00036000) popup_number_entry_window_t2

0x249e,	// (0x00036012) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00042bdf) popup_number_entry_window_t

0x24e5,	// (0x00036059) text_title_cp2

0x24f8,	// (0x0003606c) bg_popup_call_pane_cp_ParamLimits

0x24f8,	// (0x0003606c) bg_popup_call_pane_cp

0x2506,	// (0x0003607a) call_thumbnail_pane

0x250e,	// (0x00036082) popup_call_audio_in_window_g1_ParamLimits

0x250e,	// (0x00036082) popup_call_audio_in_window_g1

0x251a,	// (0x0003608e) popup_call_audio_in_window_g2_ParamLimits

0x251a,	// (0x0003608e) popup_call_audio_in_window_g2

0x2526,	// (0x0003609a) popup_call_audio_in_window_g3_ParamLimits

0x2526,	// (0x0003609a) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00042be8) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00042be8) popup_call_audio_in_window_g

0x2532,	// (0x000360a6) popup_call_audio_in_window_t1_ParamLimits

0x2532,	// (0x000360a6) popup_call_audio_in_window_t1

0x254e,	// (0x000360c2) popup_call_audio_in_window_t2_ParamLimits

0x254e,	// (0x000360c2) popup_call_audio_in_window_t2

0x256a,	// (0x000360de) popup_call_audio_in_window_t3_ParamLimits

0x256a,	// (0x000360de) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00042bef) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00042bef) popup_call_audio_in_window_t

0x24f8,	// (0x0003606c) bg_popup_call_pane_cp01_ParamLimits

0x24f8,	// (0x0003606c) bg_popup_call_pane_cp01

0x2506,	// (0x0003607a) call_thumbnail_pane_cp02

0x257d,	// (0x000360f1) call_type_pane_cp022

0x2585,	// (0x000360f9) popup_call_audio_out_window_g1_ParamLimits

0x2585,	// (0x000360f9) popup_call_audio_out_window_g1

0x2597,	// (0x0003610b) popup_call_audio_out_window_g2_ParamLimits

0x2597,	// (0x0003610b) popup_call_audio_out_window_g2

0x25a3,	// (0x00036117) popup_call_audio_out_window_g3_ParamLimits

0x25a3,	// (0x00036117) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00042bf6) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00042bf6) popup_call_audio_out_window_g

0x25b5,	// (0x00036129) popup_call_audio_out_window_t1_ParamLimits

0x25b5,	// (0x00036129) popup_call_audio_out_window_t1

0x25cd,	// (0x00036141) popup_call_audio_out_window_t2_ParamLimits

0x25cd,	// (0x00036141) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00042bfd) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00042bfd) popup_call_audio_out_window_t

0x25e2,	// (0x00036156) bg_popup_call_pane_ParamLimits

0x25e2,	// (0x00036156) bg_popup_call_pane

0x4b96,	// (0x0003870a) call_thumbnail_pane_cp_ParamLimits

0x4b96,	// (0x0003870a) call_thumbnail_pane_cp

0x2666,	// (0x000361da) call_type_pane_cp01_ParamLimits

0x2666,	// (0x000361da) call_type_pane_cp01

0x26aa,	// (0x0003621e) popup_call_audio_first_window_g1_ParamLimits

0x26aa,	// (0x0003621e) popup_call_audio_first_window_g1

0x26f6,	// (0x0003626a) popup_call_audio_first_window_g2_ParamLimits

0x26f6,	// (0x0003626a) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00042c02) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00042c02) popup_call_audio_first_window_g

0x273a,	// (0x000362ae) popup_call_audio_first_window_t1_ParamLimits

0x273a,	// (0x000362ae) popup_call_audio_first_window_t1

0x27e6,	// (0x0003635a) popup_call_audio_first_window_t4_ParamLimits

0x27e6,	// (0x0003635a) popup_call_audio_first_window_t4

0x2872,	// (0x000363e6) popup_call_audio_first_window_t5_ParamLimits

0x2872,	// (0x000363e6) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00042c07) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00042c07) popup_call_audio_first_window_t

0x28a1,	// (0x00036415) bg_popup_call_pane_cp02

0x28ab,	// (0x0003641f) call_type_pane_cp023

0x28b3,	// (0x00036427) popup_call_audio_wait_window_g1

0x28bb,	// (0x0003642f) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00042c0e) popup_call_audio_wait_window_g

0x28c3,	// (0x00036437) popup_call_audio_wait_window_t3

0x28d1,	// (0x00036445) bg_popup_call_pane_cp03_ParamLimits

0x28d1,	// (0x00036445) bg_popup_call_pane_cp03

0x2931,	// (0x000364a5) call_thumbnail_pane_cp011_ParamLimits

0x2931,	// (0x000364a5) call_thumbnail_pane_cp011

0x293d,	// (0x000364b1) call_type_pane_cp034_ParamLimits

0x293d,	// (0x000364b1) call_type_pane_cp034

0x2979,	// (0x000364ed) popup_call_audio_second_window_g1_ParamLimits

0x2979,	// (0x000364ed) popup_call_audio_second_window_g1

0x29b5,	// (0x00036529) popup_call_audio_second_window_g2_ParamLimits

0x29b5,	// (0x00036529) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00042c13) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00042c13) popup_call_audio_second_window_g

0x29f1,	// (0x00036565) popup_call_audio_second_window_t1_ParamLimits

0x29f1,	// (0x00036565) popup_call_audio_second_window_t1

0x2a72,	// (0x000365e6) popup_call_audio_second_window_t2_ParamLimits

0x2a72,	// (0x000365e6) popup_call_audio_second_window_t2

0x2aa8,	// (0x0003661c) popup_call_audio_second_window_t3_ParamLimits

0x2aa8,	// (0x0003661c) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00042c18) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00042c18) popup_call_audio_second_window_t

0x28a1,	// (0x00036415) bg_popup_call_pane_cp04

0x2ade,	// (0x00036652) list_conf_pane

0x2ae6,	// (0x0003665a) popup_call_audio_conf_window_t1

0x2af4,	// (0x00036668) call_thumbnail_pane_g1

0x2afc,	// (0x00036670) bg_pinb_pane_ParamLimits

0x2afc,	// (0x00036670) bg_pinb_pane

0x2b0a,	// (0x0003667e) find_pinb_pane

0x2afc,	// (0x00036670) listscroll_pinb_pane_ParamLimits

0x2afc,	// (0x00036670) listscroll_pinb_pane

0x2b14,	// (0x00036688) pinb_bg_pane_g1

0x2b14,	// (0x00036688) pinb_bg_pane_g2

0x2b14,	// (0x00036688) pinb_bg_pane_g3

0x2b14,	// (0x00036688) pinb_bg_pane_g4

0x2b14,	// (0x00036688) pinb_bg_pane_g5

0x2b14,	// (0x00036688) pinb_bg_pane_g6

0x2b14,	// (0x00036688) pinb_bg_pane_g7

0x2b14,	// (0x00036688) pinb_bg_pane_g8

0x2b14,	// (0x00036688) pinb_bg_pane_g9

0x2b14,	// (0x00036688) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00042c1f) pinb_bg_pane_g

0x244f,	// (0x00035fc3) grid_pinb_pane

0x244f,	// (0x00035fc3) list_pinb_pane

0x2b1e,	// (0x00036692) scroll_pane_cp01_ParamLimits

0x2b1e,	// (0x00036692) scroll_pane_cp01

0x2b2c,	// (0x000366a0) find_pinb_pane_g1_ParamLimits

0x2b2c,	// (0x000366a0) find_pinb_pane_g1

0x2b44,	// (0x000366b8) find_pinb_pane_t1

0x2b56,	// (0x000366ca) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00042c39) find_pinb_pane_t

0x2b6b,	// (0x000366df) input_focus_pane_cp01_ParamLimits

0x2b6b,	// (0x000366df) input_focus_pane_cp01

0x2b77,	// (0x000366eb) cell_pinb_pane_ParamLimits

0x2b77,	// (0x000366eb) cell_pinb_pane

0x2b85,	// (0x000366f9) cell_pinb_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) cell_pinb_pane_g1

0x2b93,	// (0x00036707) cell_pinb_pane_g2_ParamLimits

0x2b93,	// (0x00036707) cell_pinb_pane_g2

0x2b93,	// (0x00036707) cell_pinb_pane_g3_ParamLimits

0x2b93,	// (0x00036707) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00042c3e) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00042c3e) cell_pinb_pane_g

0x28a1,	// (0x00036415) grid_highlight_pane_cp01

0x2b77,	// (0x000366eb) list_pinb_item_pane_ParamLimits

0x2b77,	// (0x000366eb) list_pinb_item_pane

0x244f,	// (0x00035fc3) list_highlight_pane_cp02

0x2ba1,	// (0x00036715) list_pinb_item_pane_g1_ParamLimits

0x2ba1,	// (0x00036715) list_pinb_item_pane_g1

0x2b93,	// (0x00036707) list_pinb_item_pane_g2_ParamLimits

0x2b93,	// (0x00036707) list_pinb_item_pane_g2

0x2b85,	// (0x000366f9) list_pinb_item_pane_g3_ParamLimits

0x2b85,	// (0x000366f9) list_pinb_item_pane_g3

0x2b93,	// (0x00036707) list_pinb_item_pane_g4_ParamLimits

0x2b93,	// (0x00036707) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00042c45) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00042c45) list_pinb_item_pane_g

0x2baf,	// (0x00036723) list_pinb_item_pane_t1_ParamLimits

0x2baf,	// (0x00036723) list_pinb_item_pane_t1

0x4bd4,	// (0x00038748) calc_display_pane

0x4bf2,	// (0x00038766) calc_paper_pane

0x4c0e,	// (0x00038782) grid_calc_pane

0x28a1,	// (0x00036415) bg_list_pane_cp01

0x4c3a,	// (0x000387ae) clock_g1

0x4c42,	// (0x000387b6) clock_g2

0x0001,

0xf0da,	// (0x00042c4e) clock_g

0x4c4c,	// (0x000387c0) clock_t1_ParamLimits

0x4c4c,	// (0x000387c0) clock_t1

0x4c61,	// (0x000387d5) clock_t2_ParamLimits

0x4c61,	// (0x000387d5) clock_t2

0x4c73,	// (0x000387e7) clock_t3_ParamLimits

0x4c73,	// (0x000387e7) clock_t3

0x4c85,	// (0x000387f9) clock_t4_ParamLimits

0x4c85,	// (0x000387f9) clock_t4

0x4c97,	// (0x0003880b) clock_t5_ParamLimits

0x4c97,	// (0x0003880b) clock_t5

0x4cac,	// (0x00038820) clock_t6_ParamLimits

0x4cac,	// (0x00038820) clock_t6

0x4cbe,	// (0x00038832) clock_t7_ParamLimits

0x4cbe,	// (0x00038832) clock_t7

0x4cd0,	// (0x00038844) clock_t8_ParamLimits

0x4cd0,	// (0x00038844) clock_t8

0x4ce6,	// (0x0003885a) clock_t9_ParamLimits

0x4ce6,	// (0x0003885a) clock_t9

0x0008,

0xf0df,	// (0x00042c53) clock_t_ParamLimits

0xf0df,	// (0x00042c53) clock_t

0x2bc3,	// (0x00036737) popup_clock_analogue_window_cp02

0x2bc3,	// (0x00036737) popup_clock_digital_window_cp01

0x28a1,	// (0x00036415) listscroll_help_pane

0x28a1,	// (0x00036415) phob_pre_status_pane

0x2bcb,	// (0x0003673f) grid_qdial_pane

0x4cfc,	// (0x00038870) listscroll_mce_pane

0x2afc,	// (0x00036670) bg_notes_pane

0x2bd5,	// (0x00036749) list_notes_pane

0x4d1a,	// (0x0003888e) scroll_pane_cp06

0x2be3,	// (0x00036757) bg_calc_paper_pane

0x4d29,	// (0x0003889d) list_calc_pane

0x2bf7,	// (0x0003676b) bg_calc_display_pane

0x4d43,	// (0x000388b7) calc_display_pane_t1

0x4d58,	// (0x000388cc) calc_display_pane_t2

0x4d6d,	// (0x000388e1) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00042c66) calc_display_pane_t

0x4d7f,	// (0x000388f3) cell_calc_pane_ParamLimits

0x4d7f,	// (0x000388f3) cell_calc_pane

0x2c03,	// (0x00036777) bg_calc_paper_pane_g1

0x2c1b,	// (0x0003678f) bg_calc_paper_pane_g2

0x2c0f,	// (0x00036783) bg_calc_paper_pane_g3

0x2c33,	// (0x000367a7) bg_calc_paper_pane_g4

0x2c27,	// (0x0003679b) bg_calc_paper_pane_g5

0x4dae,	// (0x00038922) bg_calc_paper_pane_g6

0x4dbf,	// (0x00038933) bg_calc_paper_pane_g7

0x4dd0,	// (0x00038944) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00042c6d) bg_calc_paper_pane_g

0x4de1,	// (0x00038955) calc_bg_paper_pane_g9

0x4df2,	// (0x00038966) list_calc_item_pane_ParamLimits

0x4df2,	// (0x00038966) list_calc_item_pane

0x2c3f,	// (0x000367b3) list_calc_item_pane_g1

0x4e13,	// (0x00038987) list_calc_item_pane_t1_ParamLimits

0x4e13,	// (0x00038987) list_calc_item_pane_t1

0x4e25,	// (0x00038999) list_calc_item_pane_t2_ParamLimits

0x4e25,	// (0x00038999) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00042c7e) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00042c7e) list_calc_item_pane_t

0x2b14,	// (0x00036688) cell_calc_pane_g1

0x2c4c,	// (0x000367c0) grid_highlight_pane_cp02

0x0a9b,	// (0x0003460f) bg_calc_display_pane_g1

0x4e55,	// (0x000389c9) bg_calc_display_pane_g2

0x0aad,	// (0x00034621) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00042c88) bg_calc_display_pane_g

0x4e5f,	// (0x000389d3) cell_qdial_pane_ParamLimits

0x4e5f,	// (0x000389d3) cell_qdial_pane

0x4e75,	// (0x000389e9) cell_qdial_pane_g1_ParamLimits

0x4e75,	// (0x000389e9) cell_qdial_pane_g1

0x4e82,	// (0x000389f6) cell_qdial_pane_g2_ParamLimits

0x4e82,	// (0x000389f6) cell_qdial_pane_g2

0x2c77,	// (0x000367eb) cell_qdial_pane_g3_ParamLimits

0x2c77,	// (0x000367eb) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00042c8f) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00042c8f) cell_qdial_pane_g

0x4ea0,	// (0x00038a14) cell_qdial_pane_t1_ParamLimits

0x4ea0,	// (0x00038a14) cell_qdial_pane_t1

0x4eb8,	// (0x00038a2c) cell_qdial_pane_t2_ParamLimits

0x4eb8,	// (0x00038a2c) cell_qdial_pane_t2

0x4ecb,	// (0x00038a3f) cell_qdial_pane_t3_ParamLimits

0x4ecb,	// (0x00038a3f) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00042c98) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00042c98) cell_qdial_pane_t

0x28a1,	// (0x00036415) grid_highlight_pane_cp04

0x2c83,	// (0x000367f7) thumbnail_qdial_pane_ParamLimits

0x2c83,	// (0x000367f7) thumbnail_qdial_pane

0x2cdf,	// (0x00036853) list_help_pane

0x2ce8,	// (0x0003685c) scroll_pane_cp02

0x4ede,	// (0x00038a52) help_list_pane_t1_ParamLimits

0x4ede,	// (0x00038a52) help_list_pane_t1

0x4f05,	// (0x00038a79) bg_notes_pane_g2

0x4f0d,	// (0x00038a81) bg_notes_pane_g3

0x4f15,	// (0x00038a89) notes_bg_pane_g1

0x4f1d,	// (0x00038a91) notes_bg_pane_g4

0x4f25,	// (0x00038a99) notes_bg_pane_g5

0x4f2d,	// (0x00038aa1) notes_bg_pane_g6

0x4f35,	// (0x00038aa9) notes_bg_pane_g7

0x4f3d,	// (0x00038ab1) notes_bg_pane_g8

0x4f45,	// (0x00038ab9) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00042cb6) notes_bg_pane_g

0x4f4d,	// (0x00038ac1) list_notes_text_pane_ParamLimits

0x4f4d,	// (0x00038ac1) list_notes_text_pane

0xc6e1,	// (0x00040255) list_notes_text_pane_g1

0x3b36,	// (0x000376aa) list_notes_text_pane_t1

0x4f75,	// (0x00038ae9) listscroll_cale_week_pane

0x4fa1,	// (0x00038b15) bg_cale_heading_pane

0x4fca,	// (0x00038b3e) bg_cale_pane_cp01

0x4fec,	// (0x00038b60) cale_week_corner_pane

0x500b,	// (0x00038b7f) cale_week_day_heading_pane

0x5039,	// (0x00038bad) cale_week_scroll_pane_g1

0x505d,	// (0x00038bd1) cale_week_scroll_pane_g2

0x5075,	// (0x00038be9) cale_week_scroll_pane_g3

0x508d,	// (0x00038c01) cale_week_scroll_pane_g4

0x50a5,	// (0x00038c19) cale_week_scroll_pane_g5

0x50bd,	// (0x00038c31) cale_week_scroll_pane_g6

0x50dd,	// (0x00038c51) cale_week_scroll_pane_g7

0x50fd,	// (0x00038c71) cale_week_scroll_pane_g8

0x511d,	// (0x00038c91) cale_week_scroll_pane_g9

0x513a,	// (0x00038cae) cale_week_scroll_pane_g10

0x5157,	// (0x00038ccb) cale_week_scroll_pane_g11

0x5176,	// (0x00038cea) cale_week_scroll_pane_g12

0x519b,	// (0x00038d0f) cale_week_scroll_pane_g13

0x51c4,	// (0x00038d38) cale_week_scroll_pane_g14

0x51ed,	// (0x00038d61) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00042cc5) cale_week_scroll_pane_g

0x5236,	// (0x00038daa) cale_week_time_pane

0x5256,	// (0x00038dca) grid_cale_week_pane

0xc716,	// (0x0004028a) scroll_pane_cp08

0x5287,	// (0x00038dfb) cell_cale_week_pane_ParamLimits

0x5287,	// (0x00038dfb) cell_cale_week_pane

0x5317,	// (0x00038e8b) cale_week_day_heading_pane_t1

0x533f,	// (0x00038eb3) cale_week_day_heading_pane_t2

0x536c,	// (0x00038ee0) cale_week_day_heading_pane_t3

0x5399,	// (0x00038f0d) cale_week_day_heading_pane_t4

0x53c6,	// (0x00038f3a) cale_week_day_heading_pane_t5

0x53f3,	// (0x00038f67) cale_week_day_heading_pane_t6

0x5420,	// (0x00038f94) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00042ce6) cale_week_day_heading_pane_t

0xc733,	// (0x000402a7) bg_cale_side_pane

0x5448,	// (0x00038fbc) cale_week_time_pane_t1

0x546c,	// (0x00038fe0) cale_week_time_pane_t2

0x5490,	// (0x00039004) cale_week_time_pane_t3

0x54b4,	// (0x00039028) cale_week_time_pane_t4

0x54d8,	// (0x0003904c) cale_week_time_pane_t5

0x54fe,	// (0x00039072) cale_week_time_pane_t6

0x5526,	// (0x0003909a) cale_week_time_pane_t7

0x5552,	// (0x000390c6) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00042cf5) cale_week_time_pane_t

0x5582,	// (0x000390f6) cell_cale_week_pane_g2

0x55a6,	// (0x0003911a) cell_cale_week_pane_g3_ParamLimits

0x55a6,	// (0x0003911a) cell_cale_week_pane_g3

0xc741,	// (0x000402b5) grid_highlight_pane_cp07

0xc749,	// (0x000402bd) listscroll_gms_pane

0xc753,	// (0x000402c7) grid_gms_pane

0xc75c,	// (0x000402d0) listscroll_gms_pane_g1

0xc764,	// (0x000402d8) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00042d06) listscroll_gms_pane_g

0x55be,	// (0x00039132) scroll_pane_cp010

0x55c9,	// (0x0003913d) cell_gms_pane_ParamLimits

0x55c9,	// (0x0003913d) cell_gms_pane

0x55dc,	// (0x00039150) cell_gms_pane_g1

0xc76c,	// (0x000402e0) cell_gms_pane_g2

0xc774,	// (0x000402e8) cell_gms_pane_g3

0xc77d,	// (0x000402f1) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00042d0b) cell_gms_pane_g

0xc786,	// (0x000402fa) grid_highlight_pane_cp09

0x768f,	// (0x0003b203) phob_pre_status_pane_g1

0x7697,	// (0x0003b20b) phob_pre_status_pane_g2

0x769f,	// (0x0003b213) phob_pre_status_pane_g3

0x76a7,	// (0x0003b21b) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x000430d4) phob_pre_status_pane_g

0x76b7,	// (0x0003b22b) phob_pre_status_pane_t1

0x76c7,	// (0x0003b23b) phob_pre_status_pane_t2

0x76d7,	// (0x0003b24b) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x000430df) phob_pre_status_pane_t

0xc78e,	// (0x00040302) bg_list_pane_cp05

0x55ec,	// (0x00039160) grid_vorec_pane

0x55f6,	// (0x0003916a) vorec_t1

0x5604,	// (0x00039178) vorec_t2

0x5612,	// (0x00039186) vorec_t3

0x5620,	// (0x00039194) vorec_t4

0xc1aa,	// (0x0003fd1e) vorec_t5

0xc1b8,	// (0x0003fd2c) vorec_t6

0x0004,

0xf1a0,	// (0x00042d14) vorec_t

0xc1c6,	// (0x0003fd3a) wait_bar_pane_cp01

0x563c,	// (0x000391b0) cell_vorec_pane_ParamLimits

0x563c,	// (0x000391b0) cell_vorec_pane

0x5651,	// (0x000391c5) cell_vorec_pane_g1

0x28a1,	// (0x00036415) grid_highlight_pane_cp05

0x2b77,	// (0x000366eb) cams_zoom_pane

0x2b77,	// (0x000366eb) image_vga_pane

0x2b93,	// (0x00036707) main_camera_pane_g1

0x2b93,	// (0x00036707) main_camera_pane_g2

0x2b93,	// (0x00036707) main_camera_pane_g3

0x2b93,	// (0x00036707) main_camera_pane_g4

0x2b93,	// (0x00036707) main_camera_pane_g5

0x2b93,	// (0x00036707) main_camera_pane_g6

0x2b93,	// (0x00036707) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00042d1f) main_camera_pane_g

0xc796,	// (0x0004030a) main_camera_pane_t1

0xc796,	// (0x0004030a) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00042d30) main_camera_pane_t

0x565b,	// (0x000391cf) cams_zoom_pane_cp_ParamLimits

0x565b,	// (0x000391cf) cams_zoom_pane_cp

0x5689,	// (0x000391fd) image_cif_pane_ParamLimits

0x5689,	// (0x000391fd) image_cif_pane

0x244f,	// (0x00035fc3) image_subqcif_pane

0x5697,	// (0x0003920b) main_video_pane_g1_ParamLimits

0x5697,	// (0x0003920b) main_video_pane_g1

0x56bf,	// (0x00039233) main_video_pane_g2_ParamLimits

0x56bf,	// (0x00039233) main_video_pane_g2

0x56f2,	// (0x00039266) main_video_pane_g3_ParamLimits

0x56f2,	// (0x00039266) main_video_pane_g3

0x56f2,	// (0x00039266) main_video_pane_g4_ParamLimits

0x56f2,	// (0x00039266) main_video_pane_g4

0x5720,	// (0x00039294) main_video_pane_g5_ParamLimits

0x5720,	// (0x00039294) main_video_pane_g5

0xc7aa,	// (0x0004031e) main_video_pane_g6_ParamLimits

0xc7aa,	// (0x0004031e) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00042d35) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00042d35) main_video_pane_g

0x573c,	// (0x000392b0) main_video_pane_t1_ParamLimits

0x573c,	// (0x000392b0) main_video_pane_t1

0xc7c4,	// (0x00040338) cams_zoom_pane_g1

0xc7c4,	// (0x00040338) cams_zoom_pane_g2

0xc7c4,	// (0x00040338) cams_zoom_pane_g3

0xc7c4,	// (0x00040338) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00042d44) cams_zoom_pane_g

0x5782,	// (0x000392f6) grid_cams_pane

0x5790,	// (0x00039304) linegrid_cams_pane

0x579c,	// (0x00039310) cell_cams_pane_ParamLimits

0x579c,	// (0x00039310) cell_cams_pane

0xc7ce,	// (0x00040342) cams_burst_image_pane

0xc7d6,	// (0x0004034a) cell_cams_pane_g1

0x28a1,	// (0x00036415) grid_highlight_pane_cp03

0x2b14,	// (0x00036688) mp_bg_pane_g1

0x244f,	// (0x00035fc3) bg_list_pane_cp03

0x244f,	// (0x00035fc3) bg_mp_pane

0x244f,	// (0x00035fc3) grid_mp_pane

0xc7c4,	// (0x00040338) media_player_g1

0xcd2d,	// (0x000408a1) media_player_t1

0xcd2d,	// (0x000408a1) media_player_t2

0xcd2d,	// (0x000408a1) media_player_t3

0xcd2d,	// (0x000408a1) media_player_t4

0xcd2d,	// (0x000408a1) media_player_t5

0xcd2d,	// (0x000408a1) media_player_t6

0xcd2d,	// (0x000408a1) media_player_t7

0x0006,

0xf54a,	// (0x000430be) media_player_t

0x244f,	// (0x00035fc3) wait_bar_pane_cp02

0xf52f,	// (0x000430a3) main_usb_pane_t

0xcfa6,	// (0x00040b1a) cell_mp_pane

0x2b14,	// (0x00036688) cell_mp_pane_g1

0x28a1,	// (0x00036415) grid_highlight_pane_cp06

0xc7f2,	// (0x00040366) grid_skin_colour_pane

0xc7fa,	// (0x0004036e) list_highlight_pane_cp03

0x57b1,	// (0x00039325) skin_g1

0xc802,	// (0x00040376) skin_t1

0xc811,	// (0x00040385) skin_t2

0x0001,

0xf1fe,	// (0x00042d72) skin_t

0x57bb,	// (0x0003932f) cell_skin_colour_pane_ParamLimits

0x57bb,	// (0x0003932f) cell_skin_colour_pane

0xc81f,	// (0x00040393) cell_skin_colour_pane_g1

0x583b,	// (0x000393af) call_video_g1_ParamLimits

0x583b,	// (0x000393af) call_video_g1

0x584b,	// (0x000393bf) call_video_g2_ParamLimits

0x584b,	// (0x000393bf) call_video_g2

0x0001,

0xf203,	// (0x00042d77) call_video_g_ParamLimits

0xf203,	// (0x00042d77) call_video_g

0x589b,	// (0x0003940f) call_video_uplink_pane_cp1_ParamLimits

0x589b,	// (0x0003940f) call_video_uplink_pane_cp1

0xc831,	// (0x000403a5) call_video_uplink_pane_cp2

0x5969,	// (0x000394dd) video_down_crop_pane_ParamLimits

0x5969,	// (0x000394dd) video_down_crop_pane

0x5a5b,	// (0x000395cf) video_down_pane_ParamLimits

0x5a5b,	// (0x000395cf) video_down_pane

0xc839,	// (0x000403ad) video_down_subqcif_pane_ParamLimits

0xc839,	// (0x000403ad) video_down_subqcif_pane

0xc853,	// (0x000403c7) video_down_subqcif_pane_cp_ParamLimits

0xc853,	// (0x000403c7) video_down_subqcif_pane_cp

0xc87b,	// (0x000403ef) im_reading_pane_ParamLimits

0xc87b,	// (0x000403ef) im_reading_pane

0x5b78,	// (0x000396ec) im_writing_pane_ParamLimits

0x5b78,	// (0x000396ec) im_writing_pane

0x5b96,	// (0x0003970a) im_reading_pane_t1

0xc895,	// (0x00040409) list_im_pane

0xc8a6,	// (0x0004041a) scroll_pane_cp07

0x5bd8,	// (0x0003974c) im_writing_pane_t1_ParamLimits

0x5bd8,	// (0x0003974c) im_writing_pane_t1

0xc8bf,	// (0x00040433) im_writing_pane_t2_ParamLimits

0xc8bf,	// (0x00040433) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00042d81) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00042d81) im_writing_pane_t

0x28a1,	// (0x00036415) input_focus_pane_cp04

0x28a1,	// (0x00036415) input_focus_pane_cp05

0x5bea,	// (0x0003975e) list_im_single_pane_ParamLimits

0x5bea,	// (0x0003975e) list_im_single_pane

0x5c03,	// (0x00039777) list_single_im_pane_t1

0xc78e,	// (0x00040302) blid_accuracy_pane

0xc78e,	// (0x00040302) blid_compass_pane

0xe3e8,	// (0x00041f5c) main_location_t1

0xe3e8,	// (0x00041f5c) main_location_t2

0xe3e8,	// (0x00041f5c) main_location_t3

0x0002,

0xf559,	// (0x000430cd) main_location_t

0x28a1,	// (0x00036415) aid_levels_location

0x2b14,	// (0x00036688) blid_accuracy_pane_g1

0x2b14,	// (0x00036688) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00042dd5) blid_accuracy_pane_g

0xc907,	// (0x0004047b) wml_content_pane

0xc945,	// (0x000404b9) wml_button_pane_ParamLimits

0xc945,	// (0x000404b9) wml_button_pane

0x5c12,	// (0x00039786) wml_list_single_large_pane_ParamLimits

0x5c12,	// (0x00039786) wml_list_single_large_pane

0x5c34,	// (0x000397a8) wml_list_single_medium_pane_ParamLimits

0x5c34,	// (0x000397a8) wml_list_single_medium_pane

0x5c57,	// (0x000397cb) wml_list_single_small_pane_ParamLimits

0x5c57,	// (0x000397cb) wml_list_single_small_pane

0xc959,	// (0x000404cd) wml_selection_box_pane_ParamLimits

0xc959,	// (0x000404cd) wml_selection_box_pane

0xc96c,	// (0x000404e0) wml_list_single_pane_t1

0xc97b,	// (0x000404ef) wml_list_single_medium_pane_t1

0xc98a,	// (0x000404fe) wml_list_single_large_pane_t1

0xc999,	// (0x0004050d) input_focus_pane_cp02_ParamLimits

0xc999,	// (0x0004050d) input_focus_pane_cp02

0xc9ac,	// (0x00040520) wml_selection_box_pane_g1

0xc9b5,	// (0x00040529) wml_selection_box_pane_t1_ParamLimits

0xc9b5,	// (0x00040529) wml_selection_box_pane_t1

0x2afc,	// (0x00036670) bg_wml_button_pane_ParamLimits

0x2afc,	// (0x00036670) bg_wml_button_pane

0xc9cd,	// (0x00040541) wml_button_pane_g1

0xc9d5,	// (0x00040549) wml_button_pane_t1

0xc9cd,	// (0x00040541) wml_button_bg_pane_g1

0xc9e5,	// (0x00040559) wml_button_bg_pane_g2

0xc9ed,	// (0x00040561) wml_button_bg_pane_g3

0xc9f5,	// (0x00040569) wml_button_bg_pane_g4

0xc9fd,	// (0x00040571) wml_button_bg_pane_g5

0xca05,	// (0x00040579) wml_button_bg_pane_g6

0xca0d,	// (0x00040581) wml_button_bg_pane_g7

0xca15,	// (0x00040589) wml_button_bg_pane_g8

0xca1d,	// (0x00040591) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00042d86) wml_button_bg_pane_g

0x5c7f,	// (0x000397f3) bg_list_pane_cp02

0xca25,	// (0x00040599) mce_header_pane_ParamLimits

0xca25,	// (0x00040599) mce_header_pane

0xca3b,	// (0x000405af) mce_icon_pane

0xca3b,	// (0x000405af) mce_image_pane

0xca44,	// (0x000405b8) mce_text_pane_ParamLimits

0xca44,	// (0x000405b8) mce_text_pane

0x5c87,	// (0x000397fb) scroll_pane_cp03

0xc93d,	// (0x000404b1) scroll_pane_cp04

0xca57,	// (0x000405cb) scroll_pane_cp05_ParamLimits

0xca57,	// (0x000405cb) scroll_pane_cp05

0x5c8f,	// (0x00039803) mce_header_field_pane_ParamLimits

0x5c8f,	// (0x00039803) mce_header_field_pane

0x5cb1,	// (0x00039825) mce_header_field_pane_2_ParamLimits

0x5cb1,	// (0x00039825) mce_header_field_pane_2

0x5cc7,	// (0x0003983b) mce_header_field_pane_3

0xca63,	// (0x000405d7) list_single_mce_message_pane_ParamLimits

0xca63,	// (0x000405d7) list_single_mce_message_pane

0xca72,	// (0x000405e6) list_single_mce_smart_pane_ParamLimits

0xca72,	// (0x000405e6) list_single_mce_smart_pane

0xca8c,	// (0x00040600) input_focus_pane_cp03

0xca95,	// (0x00040609) list_header_data_pane

0x5ccf,	// (0x00039843) mce_header_field_pane_t1

0x5cdd,	// (0x00039851) list_single_mce_header_pane_ParamLimits

0x5cdd,	// (0x00039851) list_single_mce_header_pane

0xca9d,	// (0x00040611) list_single_mce_header_pane_t1

0xcaac,	// (0x00040620) list_single_mce_message_pane_g1

0xcab4,	// (0x00040628) list_single_mce_message_pane_t1

0x5d13,	// (0x00039887) bg_cale_heading_pane_cp01_ParamLimits

0x5d13,	// (0x00039887) bg_cale_heading_pane_cp01

0xcac2,	// (0x00040636) bg_cale_pane_cp02_ParamLimits

0xcac2,	// (0x00040636) bg_cale_pane_cp02

0x5d65,	// (0x000398d9) cale_month_corner_pane

0x5d84,	// (0x000398f8) cale_month_day_heading_pane_ParamLimits

0x5d84,	// (0x000398f8) cale_month_day_heading_pane

0x5de6,	// (0x0003995a) cale_month_pane_g1_ParamLimits

0x5de6,	// (0x0003995a) cale_month_pane_g1

0x5e2d,	// (0x000399a1) cale_month_pane_g2_ParamLimits

0x5e2d,	// (0x000399a1) cale_month_pane_g2

0x5e65,	// (0x000399d9) cale_month_pane_g3_ParamLimits

0x5e65,	// (0x000399d9) cale_month_pane_g3

0x5eb9,	// (0x00039a2d) cale_month_pane_g4_ParamLimits

0x5eb9,	// (0x00039a2d) cale_month_pane_g4

0x5f0d,	// (0x00039a81) cale_month_pane_g5_ParamLimits

0x5f0d,	// (0x00039a81) cale_month_pane_g5

0x5f61,	// (0x00039ad5) cale_month_pane_g6_ParamLimits

0x5f61,	// (0x00039ad5) cale_month_pane_g6

0x5fc5,	// (0x00039b39) cale_month_pane_g7_ParamLimits

0x5fc5,	// (0x00039b39) cale_month_pane_g7

0x6029,	// (0x00039b9d) cale_month_pane_g8_ParamLimits

0x6029,	// (0x00039b9d) cale_month_pane_g8

0x608d,	// (0x00039c01) cale_month_pane_g9_ParamLimits

0x608d,	// (0x00039c01) cale_month_pane_g9

0x60e7,	// (0x00039c5b) cale_month_pane_g10_ParamLimits

0x60e7,	// (0x00039c5b) cale_month_pane_g10

0x6139,	// (0x00039cad) cale_month_pane_g11_ParamLimits

0x6139,	// (0x00039cad) cale_month_pane_g11

0x6187,	// (0x00039cfb) cale_month_pane_g12_ParamLimits

0x6187,	// (0x00039cfb) cale_month_pane_g12

0x61d7,	// (0x00039d4b) cale_month_pane_g13_ParamLimits

0x61d7,	// (0x00039d4b) cale_month_pane_g13

0x000c,

0xf225,	// (0x00042d99) cale_month_pane_g_ParamLimits

0xf225,	// (0x00042d99) cale_month_pane_g

0x6227,	// (0x00039d9b) cale_month_week_pane

0x6247,	// (0x00039dbb) grid_cale_month_pane_ParamLimits

0x6247,	// (0x00039dbb) grid_cale_month_pane

0x62a0,	// (0x00039e14) cale_month_day_heading_pane_t1

0x6322,	// (0x00039e96) cale_month_day_heading_pane_t2

0x639b,	// (0x00039f0f) cale_month_day_heading_pane_t3

0x6414,	// (0x00039f88) cale_month_day_heading_pane_t4

0x648d,	// (0x0003a001) cale_month_day_heading_pane_t5

0x650e,	// (0x0003a082) cale_month_day_heading_pane_t6

0x6597,	// (0x0003a10b) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00042db4) cale_month_day_heading_pane_t

0xc733,	// (0x000402a7) bg_cale_side_pane_cp01

0x6620,	// (0x0003a194) cale_month_week_pane_t1

0x6639,	// (0x0003a1ad) cale_month_week_pane_t2

0x6652,	// (0x0003a1c6) cale_month_week_pane_t3

0x666b,	// (0x0003a1df) cale_month_week_pane_t4

0x6684,	// (0x0003a1f8) cale_month_week_pane_t5

0x66a1,	// (0x0003a215) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00042dc3) cale_month_week_pane_t

0x66c4,	// (0x0003a238) cell_cale_month_pane_ParamLimits

0x66c4,	// (0x0003a238) cell_cale_month_pane

0x67f2,	// (0x0003a366) cell_cale_month_pane_g1

0x67fe,	// (0x0003a372) cell_cale_month_pane_t1_ParamLimits

0x67fe,	// (0x0003a372) cell_cale_month_pane_t1

0xc741,	// (0x000402b5) grid_highlight_pane_cp08

0x2b14,	// (0x00036688) main_smil_g1

0x682a,	// (0x0003a39e) smil_status_pane

0xcb01,	// (0x00040675) smil_text_pane

0xe2fe,	// (0x00041e72) bg_popup_call3_rect_pane_g8

0xe306,	// (0x00041e7a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00043061) bg_popup_call3_rect_pane_g

0xe4d2,	// (0x00042046) smil_status_volume_pane_g1

0xcb0b,	// (0x0004067f) smil_status_pane_t1

0x7a39,	// (0x0003b5ad) volume_smil_pane

0xcb22,	// (0x00040696) list_smil_text_pane

0x683d,	// (0x0003a3b1) scroll_pane_cp011

0x6848,	// (0x0003a3bc) smil_text_list_pane_t1_ParamLimits

0x6848,	// (0x0003a3bc) smil_text_list_pane_t1

0x689c,	// (0x0003a410) aid_volume_smil_ParamLimits

0x689c,	// (0x0003a410) aid_volume_smil

0x2b14,	// (0x00036688) smil_volume_pane_g1

0x2b14,	// (0x00036688) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00042dd5) smil_volume_pane_g

0x4f75,	// (0x00038ae9) listscroll_cale_day_pane

0xcb2c,	// (0x000406a0) bg_cale_pane

0xcb44,	// (0x000406b8) list_cale_pane

0xcb67,	// (0x000406db) scroll_pane_cp09

0xcb78,	// (0x000406ec) cale_bg_pane_g1

0xcb80,	// (0x000406f4) cale_bg_pane_g2

0xcb88,	// (0x000406fc) cale_bg_pane_g3

0xcb90,	// (0x00040704) cale_bg_pane_g4

0xcb98,	// (0x0004070c) cale_bg_pane_g5

0xcba0,	// (0x00040714) cale_bg_pane_g6

0xcba8,	// (0x0004071c) cale_bg_pane_g7

0xcbb0,	// (0x00040724) cale_bg_pane_g8

0xcbb8,	// (0x0004072c) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00042dda) cale_bg_pane_g

0x68c6,	// (0x0003a43a) list_cale_time_pane_ParamLimits

0x68c6,	// (0x0003a43a) list_cale_time_pane

0xcbc0,	// (0x00040734) list_cale_time_pane_g1_ParamLimits

0xcbc0,	// (0x00040734) list_cale_time_pane_g1

0xcbcc,	// (0x00040740) list_cale_time_pane_g2_ParamLimits

0xcbcc,	// (0x00040740) list_cale_time_pane_g2

0x68dd,	// (0x0003a451) list_cale_time_pane_g3_ParamLimits

0x68dd,	// (0x0003a451) list_cale_time_pane_g3

0x68eb,	// (0x0003a45f) list_cale_time_pane_g4_ParamLimits

0x68eb,	// (0x0003a45f) list_cale_time_pane_g4

0x68f9,	// (0x0003a46d) list_cale_time_pane_g5_ParamLimits

0x68f9,	// (0x0003a46d) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00042ded) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00042ded) list_cale_time_pane_g

0xcbe6,	// (0x0004075a) list_cale_time_pane_t1_ParamLimits

0xcbe6,	// (0x0004075a) list_cale_time_pane_t1

0xcc0e,	// (0x00040782) list_cale_time_pane_t2_ParamLimits

0xcc0e,	// (0x00040782) list_cale_time_pane_t2

0x6bb6,	// (0x0003a72a) aid_blid_cardinal_pane

0x6bf8,	// (0x0003a76c) compass_pane_t4

0xcc36,	// (0x000407aa) list_cale_time_pane_t4_ParamLimits

0xcc36,	// (0x000407aa) list_cale_time_pane_t4

0x6c06,	// (0x0003a77a) compass_pane_t5

0x6c16,	// (0x0003a78a) compass_pane_t6

0x6c24,	// (0x0003a798) compass_pane_t7

0xd06b,	// (0x00040bdf) navi_pane_cc_t1

0xd1b8,	// (0x00040d2c) aid_phob_thumbnail_center_pane

0x7123,	// (0x0003ac97) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00042dfa) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00042dfa) list_cale_time_pane_t

0x24f8,	// (0x0003606c) bg_popup_window_pane_cp02_ParamLimits

0x24f8,	// (0x0003606c) bg_popup_window_pane_cp02

0xcc5e,	// (0x000407d2) heading_pane_cp01_ParamLimits

0xcc5e,	// (0x000407d2) heading_pane_cp01

0xcc6a,	// (0x000407de) loc_req_pane_ParamLimits

0xcc6a,	// (0x000407de) loc_req_pane

0xcc7a,	// (0x000407ee) loc_type_pane_ParamLimits

0xcc7a,	// (0x000407ee) loc_type_pane

0xcc8c,	// (0x00040800) loc_type_pane_t1_ParamLimits

0xcc8c,	// (0x00040800) loc_type_pane_t1

0xcc9e,	// (0x00040812) loc_type_pane_t2_ParamLimits

0xcc9e,	// (0x00040812) loc_type_pane_t2

0xccb0,	// (0x00040824) loc_type_pane_t3_ParamLimits

0xccb0,	// (0x00040824) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00042e01) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00042e01) loc_type_pane_t

0xccc2,	// (0x00040836) list_loc_req_pane

0xcccc,	// (0x00040840) scroll_pane_cp012

0x6907,	// (0x0003a47b) list_single_loc_request_popup_menu_pane_ParamLimits

0x6907,	// (0x0003a47b) list_single_loc_request_popup_menu_pane

0xccd7,	// (0x0004084b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xccd7,	// (0x0004084b) list_single_loc_request_popup_menu_pane_g1

0xcce3,	// (0x00040857) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcce3,	// (0x00040857) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00042e08) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00042e08) list_single_loc_request_popup_menu_pane_g

0xccef,	// (0x00040863) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xccef,	// (0x00040863) list_single_loc_request_popup_menu_pane_t1

0x6919,	// (0x0003a48d) bg_popup_window_pane_cp03_ParamLimits

0x6919,	// (0x0003a48d) bg_popup_window_pane_cp03

0x6927,	// (0x0003a49b) heading_loc_req_pane_ParamLimits

0x6927,	// (0x0003a49b) heading_loc_req_pane

0x6933,	// (0x0003a4a7) popup_dyc_status_message_window_g1_ParamLimits

0x6933,	// (0x0003a4a7) popup_dyc_status_message_window_g1

0x693f,	// (0x0003a4b3) popup_dyc_status_message_window_t1_ParamLimits

0x693f,	// (0x0003a4b3) popup_dyc_status_message_window_t1

0x6951,	// (0x0003a4c5) popup_dyc_status_message_window_t2_ParamLimits

0x6951,	// (0x0003a4c5) popup_dyc_status_message_window_t2

0x6963,	// (0x0003a4d7) popup_dyc_status_message_window_t3_ParamLimits

0x6963,	// (0x0003a4d7) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00042e0d) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00042e0d) popup_dyc_status_message_window_t

0x28a1,	// (0x00036415) bg_heading_pane_cp01

0xcd05,	// (0x00040879) heading_loc_req_pane_g1

0xcd0d,	// (0x00040881) heading_loc_req_pane_g2

0xcd15,	// (0x00040889) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00042e14) heading_loc_req_pane_g

0xcd1d,	// (0x00040891) heading_loc_req_pane_t1

0xcd3d,	// (0x000408b1) bg_popup_sub_pane_cp01_ParamLimits

0xcd3d,	// (0x000408b1) bg_popup_sub_pane_cp01

0xcd4b,	// (0x000408bf) popup_cale_events_window_g1_ParamLimits

0xcd4b,	// (0x000408bf) popup_cale_events_window_g1

0xcd6b,	// (0x000408df) popup_cale_events_window_g2_ParamLimits

0xcd6b,	// (0x000408df) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00042e36) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00042e36) popup_cale_events_window_g

0xcd8b,	// (0x000408ff) popup_cale_events_window_t1_ParamLimits

0xcd8b,	// (0x000408ff) popup_cale_events_window_t1

0xcd9d,	// (0x00040911) popup_cale_events_window_t2_ParamLimits

0xcd9d,	// (0x00040911) popup_cale_events_window_t2

0xcddb,	// (0x0004094f) popup_cale_events_window_t3_ParamLimits

0xcddb,	// (0x0004094f) popup_cale_events_window_t3

0xce15,	// (0x00040989) popup_cale_events_window_t4_ParamLimits

0xce15,	// (0x00040989) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00042e3b) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00042e3b) popup_cale_events_window_t

0x698d,	// (0x0003a501) call_type_pane

0xce4b,	// (0x000409bf) popup_call_status_window_g1

0x6999,	// (0x0003a50d) popup_call_status_window_g2

0x69a5,	// (0x0003a519) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00042e44) popup_call_status_window_g

0xce59,	// (0x000409cd) call_type_pane_g1

0xce62,	// (0x000409d6) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00042e4b) call_type_pane_g

0x28a1,	// (0x00036415) bg_popup_sub_pane_cp02

0xce6b,	// (0x000409df) listscroll_popup_wml_pane

0xce73,	// (0x000409e7) list_wml_pane

0xce7d,	// (0x000409f1) scroll_pane_cp013

0xce88,	// (0x000409fc) list_single_graphic_popup_wml_pane_ParamLimits

0xce88,	// (0x000409fc) list_single_graphic_popup_wml_pane

0x2b14,	// (0x00036688) list_single_graphic_popup_wml_pane_g1

0xce9c,	// (0x00040a10) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00042e50) list_single_graphic_popup_wml_pane_g

0xcea4,	// (0x00040a18) list_single_graphic_popup_wml_pane_t1

0xceba,	// (0x00040a2e) aid_call_pane

0x2af4,	// (0x00036668) popup_clock_analogue_window_g1

0x2af4,	// (0x00036668) popup_clock_analogue_window_g2

0x69b1,	// (0x0003a525) popup_clock_analogue_window_g3

0x69b1,	// (0x0003a525) popup_clock_analogue_window_g4

0x2b14,	// (0x00036688) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00042e55) popup_clock_analogue_window_g

0x69b9,	// (0x0003a52d) popup_clock_analogue_window_t1

0x69c7,	// (0x0003a53b) clock_digital_number_pane_ParamLimits

0x69c7,	// (0x0003a53b) clock_digital_number_pane

0x69d3,	// (0x0003a547) clock_digital_number_pane_cp02_ParamLimits

0x69d3,	// (0x0003a547) clock_digital_number_pane_cp02

0x69df,	// (0x0003a553) clock_digital_number_pane_cp03_ParamLimits

0x69df,	// (0x0003a553) clock_digital_number_pane_cp03

0x69eb,	// (0x0003a55f) clock_digital_number_pane_cp04_ParamLimits

0x69eb,	// (0x0003a55f) clock_digital_number_pane_cp04

0x69f7,	// (0x0003a56b) clock_digital_separator_pane_ParamLimits

0x69f7,	// (0x0003a56b) clock_digital_separator_pane

0x6a03,	// (0x0003a577) popup_clock_digital_window_t1

0x2b14,	// (0x00036688) clock_digital_number_pane_g1

0x2b14,	// (0x00036688) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00042dd5) clock_digital_number_pane_g

0x2b14,	// (0x00036688) clock_digital_separator_pane_g1

0x2b14,	// (0x00036688) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00042dd5) clock_digital_separator_pane_g

0x28a1,	// (0x00036415) bg_popup_window_pane_cp04

0xcec2,	// (0x00040a36) heading_pane_cp03

0xc78e,	// (0x00040302) listscroll_popup_gms_pane

0x28a1,	// (0x00036415) grid_large_graphic_popup_pane

0xcecb,	// (0x00040a3f) listscroll_popup_gms_pane_g1

0xced4,	// (0x00040a48) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00042e60) listscroll_popup_gms_pane_g

0xcedd,	// (0x00040a51) scroll_pane_cp014

0x2b77,	// (0x000366eb) cell_large_graphic_popup_pane_ParamLimits

0x2b77,	// (0x000366eb) cell_large_graphic_popup_pane

0x2b85,	// (0x000366f9) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) cell_large_graphic_popup_pane_g1

0xcee6,	// (0x00040a5a) cell_large_graphic_popup_pane_g2_ParamLimits

0xcee6,	// (0x00040a5a) cell_large_graphic_popup_pane_g2

0xcef4,	// (0x00040a68) cell_large_graphic_popup_pane_g3_ParamLimits

0xcef4,	// (0x00040a68) cell_large_graphic_popup_pane_g3

0xcf02,	// (0x00040a76) cell_large_graphic_popup_pane_g4_ParamLimits

0xcf02,	// (0x00040a76) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00042e65) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00042e65) cell_large_graphic_popup_pane_g

0x28a1,	// (0x00036415) grid_highlight_pane_cp010

0x2b14,	// (0x00036688) bg_popup_call_pane_g1

0xcf13,	// (0x00040a87) list_single_graphic_popup_conf_pane_ParamLimits

0xcf13,	// (0x00040a87) list_single_graphic_popup_conf_pane

0xcf25,	// (0x00040a99) list_highlight_pane_cp01

0xcf2e,	// (0x00040aa2) list_single_graphic_popup_conf_pane_g1

0xcf36,	// (0x00040aaa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00042e6e) list_single_graphic_popup_conf_pane_g

0xcf3e,	// (0x00040ab2) list_single_graphic_popup_conf_pane_t1

0xcf4c,	// (0x00040ac0) linegrid_cams_pane_g1

0x6a20,	// (0x0003a594) linegrid_cams_pane_g2

0xc774,	// (0x000402e8) linegrid_cams_pane_g3

0xcf55,	// (0x00040ac9) linegrid_cams_pane_g4

0x6a29,	// (0x0003a59d) linegrid_cams_pane_g5

0x6a32,	// (0x0003a5a6) linegrid_cams_pane_g6

0xc77d,	// (0x000402f1) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00042e73) linegrid_cams_pane_g

0xcf5e,	// (0x00040ad2) popup_clock_analogue_window

0xcf5e,	// (0x00040ad2) popup_clock_digital_window

0x28a1,	// (0x00036415) popup_phob_thumbnail_window

0x2b14,	// (0x00036688) call_video_uplink_pane_g1

0xcf67,	// (0x00040adb) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00042e82) call_video_uplink_pane_g

0xcf6f,	// (0x00040ae3) video_uplink_pane

0xcf77,	// (0x00040aeb) mce_image_pane_g1

0x6a3d,	// (0x0003a5b1) mce_image_pane_g2

0x6a47,	// (0x0003a5bb) mce_image_pane_g3

0x6a51,	// (0x0003a5c5) mce_image_pane_g4

0x6a59,	// (0x0003a5cd) mce_image_pane_g5

0x0004,

0xf313,	// (0x00042e87) mce_image_pane_g

0xcf81,	// (0x00040af5) control_top_pane_stacon_cp01_ParamLimits

0xcf81,	// (0x00040af5) control_top_pane_stacon_cp01

0xcf95,	// (0x00040b09) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf95,	// (0x00040b09) uni_indicator_pane_stacon_cp01

0xcfa6,	// (0x00040b1a) bg_popup_sub_pane_cp03

0x6a61,	// (0x0003a5d5) chi_dic_find_pane

0x6a69,	// (0x0003a5dd) listscroll_chi_dic_pane

0x6a72,	// (0x0003a5e6) main_pane_chidic_g1

0x6a85,	// (0x0003a5f9) chi_dic_find_pane_t1

0xcfb0,	// (0x00040b24) find_chidic_pane

0xcfb9,	// (0x00040b2d) chi_dic_list_pane_ParamLimits

0xcfb9,	// (0x00040b2d) chi_dic_list_pane

0xcfca,	// (0x00040b3e) scroll_pane_cp020

0x6a93,	// (0x0003a607) find_chidic_pane_t1

0x28a1,	// (0x00036415) input_focus_pane_cp06

0xcfd2,	// (0x00040b46) list_chi_dic_pane_ParamLimits

0xcfd2,	// (0x00040b46) list_chi_dic_pane

0x6aa2,	// (0x0003a616) list_chi_dic_pane_t1_ParamLimits

0x6aa2,	// (0x0003a616) list_chi_dic_pane_t1

0x28a1,	// (0x00036415) list_highlight_pane_cp020

0xcfe7,	// (0x00040b5b) bg_cale_heading_pane_g1

0x6ab5,	// (0x0003a629) bg_cale_heading_pane_g2

0x6abd,	// (0x0003a631) bg_cale_heading_pane_g3

0x6ac5,	// (0x0003a639) bg_cale_heading_pane_g4

0x6acf,	// (0x0003a643) bg_cale_heading_pane_g5

0x6ad9,	// (0x0003a64d) bg_cale_heading_pane_g6

0x6ae1,	// (0x0003a655) bg_cale_heading_pane_g7

0x6ae9,	// (0x0003a65d) bg_cale_heading_pane_g8

0x6af3,	// (0x0003a667) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00042e92) bg_cale_heading_pane_g

0xcfe7,	// (0x00040b5b) bg_cale_side_pane_g1

0x6afd,	// (0x0003a671) bg_cale_side_pane_g2

0x6b07,	// (0x0003a67b) bg_cale_side_pane_g3

0x6b11,	// (0x0003a685) bg_cale_side_pane_g4

0x6b1b,	// (0x0003a68f) bg_cale_side_pane_g5

0x6b25,	// (0x0003a699) bg_cale_side_pane_g6

0x6b2f,	// (0x0003a6a3) bg_cale_side_pane_g7

0x6b39,	// (0x0003a6ad) bg_cale_side_pane_g8

0x6b41,	// (0x0003a6b5) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00042ea5) bg_cale_side_pane_g

0x6b49,	// (0x0003a6bd) popup_call_status_window_ParamLimits

0x6b49,	// (0x0003a6bd) popup_call_status_window

0xcfef,	// (0x00040b63) stacon_top_pane

0xcff7,	// (0x00040b6b) status_pane_ParamLimits

0xcff7,	// (0x00040b6b) status_pane

0xd00c,	// (0x00040b80) status_small_pane

0xd014,	// (0x00040b88) control_pane

0x28a1,	// (0x00036415) stacon_bottom_pane

0xd01c,	// (0x00040b90) list_single_mce_smart_pane_t1_ParamLimits

0xd01c,	// (0x00040b90) list_single_mce_smart_pane_t1

0xd02f,	// (0x00040ba3) list_single_mce_smart_pane_t2_ParamLimits

0xd02f,	// (0x00040ba3) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00042eb8) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00042eb8) list_single_mce_smart_pane_t

0x6b55,	// (0x0003a6c9) compass_pane

0x6b60,	// (0x0003a6d4) main_location2_pane_t1

0x6b76,	// (0x0003a6ea) main_location2_pane_t2

0x6b8c,	// (0x0003a700) main_location2_pane_t3

0x0003,

0xf349,	// (0x00042ebd) main_location2_pane_t

0xd04e,	// (0x00040bc2) compass_pane_g1_ParamLimits

0xd04e,	// (0x00040bc2) compass_pane_g1

0x6bda,	// (0x0003a74e) compass_pane_t1

0x6be9,	// (0x0003a75d) compass_pane_t2

0x0005,

0xf352,	// (0x00042ec6) compass_pane_t

0x6c34,	// (0x0003a7a8) text_secondary_cp61

0xd062,	// (0x00040bd6) navi_pane_cams_g5

0xd085,	// (0x00040bf9) navi_pane_im_t1

0xd093,	// (0x00040c07) navi_pane_mp_g1_ParamLimits

0xd093,	// (0x00040c07) navi_pane_mp_g1

0xd0a7,	// (0x00040c1b) navi_pane_mp_g2_ParamLimits

0xd0a7,	// (0x00040c1b) navi_pane_mp_g2

0xd0b3,	// (0x00040c27) navi_pane_mp_g3_ParamLimits

0xd0b3,	// (0x00040c27) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00042eda) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00042eda) navi_pane_mp_g

0xd0bf,	// (0x00040c33) navi_pane_mp_t1

0xd0cd,	// (0x00040c41) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00042ee1) navi_pane_mp_t

0xd109,	// (0x00040c7d) navi_pane_vt_g1

0xd0bf,	// (0x00040c33) navi_pane_vt_t1

0xd111,	// (0x00040c85) navi_slider_pane

0xc78e,	// (0x00040302) zooming_pane

0xd119,	// (0x00040c8d) navi_slider_pane_g1

0x6d69,	// (0x0003a8dd) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00042ee8) navi_slider_pane_g

0xd13d,	// (0x00040cb1) aid_levels_zoom

0xd145,	// (0x00040cb9) zooming_pane_g1

0xd14d,	// (0x00040cc1) zooming_pane_g2

0xd14d,	// (0x00040cc1) zooming_pane_g3

0x0002,

0xf383,	// (0x00042ef7) zooming_pane_g

0xd155,	// (0x00040cc9) level_10_zoom

0xd15e,	// (0x00040cd2) level_11_zoom

0xd167,	// (0x00040cdb) level_1_zoom

0xd170,	// (0x00040ce4) level_2_zoom

0xd179,	// (0x00040ced) level_3_zoom

0xd182,	// (0x00040cf6) level_4_zoom

0xd18b,	// (0x00040cff) level_5_zoom

0xd194,	// (0x00040d08) level_6_zoom

0xd19d,	// (0x00040d11) level_7_zoom

0xd1a6,	// (0x00040d1a) level_8_zoom

0xd1af,	// (0x00040d23) level_9_zoom

0xd1c0,	// (0x00040d34) popup_phob_thumbnail_window_g1

0xd1c8,	// (0x00040d3c) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00042efe) popup_phob_thumbnail_window_g

0x76e7,	// (0x0003b25b) level_1_location

0x76ef,	// (0x0003b263) level_2_location

0x76f7,	// (0x0003b26b) level_3_location

0x7701,	// (0x0003b275) level_4_location

0xc78e,	// (0x00040302) level_5_location

0x6d7b,	// (0x0003a8ef) mce_icon_pane_g1

0x6d83,	// (0x0003a8f7) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00042f03) mce_icon_pane_g

0x6d8b,	// (0x0003a8ff) main_mup_pane_g1_ParamLimits

0x6d8b,	// (0x0003a8ff) main_mup_pane_g1

0x2ba1,	// (0x00036715) main_mup_pane_g2_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g2

0x2ba1,	// (0x00036715) main_mup_pane_g3_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g3

0x2ba1,	// (0x00036715) main_mup_pane_g4_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g4

0x2ba1,	// (0x00036715) main_mup_pane_g5_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g5

0x2ba1,	// (0x00036715) main_mup_pane_g6_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g6

0x2ba1,	// (0x00036715) main_mup_pane_g7_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g7

0x2ba1,	// (0x00036715) main_mup_pane_g8_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g8

0x2ba1,	// (0x00036715) main_mup_pane_g9_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g9

0x2ba1,	// (0x00036715) main_mup_pane_g10_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g10

0x2ba1,	// (0x00036715) main_mup_pane_g11_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g11

0x2b93,	// (0x00036707) main_mup_pane_g12_ParamLimits

0x2b93,	// (0x00036707) main_mup_pane_g12

0x2ba1,	// (0x00036715) main_mup_pane_g13_ParamLimits

0x2ba1,	// (0x00036715) main_mup_pane_g13

0x000c,

0xf394,	// (0x00042f08) main_mup_pane_g_ParamLimits

0xf394,	// (0x00042f08) main_mup_pane_g

0x2baf,	// (0x00036723) main_mup_pane_t1_ParamLimits

0x2baf,	// (0x00036723) main_mup_pane_t1

0x2baf,	// (0x00036723) main_mup_pane_t2_ParamLimits

0x2baf,	// (0x00036723) main_mup_pane_t2

0x2baf,	// (0x00036723) main_mup_pane_t3_ParamLimits

0x2baf,	// (0x00036723) main_mup_pane_t3

0xc796,	// (0x0004030a) main_mup_pane_t4_ParamLimits

0xc796,	// (0x0004030a) main_mup_pane_t4

0xc796,	// (0x0004030a) main_mup_pane_t5_ParamLimits

0xc796,	// (0x0004030a) main_mup_pane_t5

0xc7de,	// (0x00040352) main_mup_pane_t6_ParamLimits

0xc7de,	// (0x00040352) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00042f23) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00042f23) main_mup_pane_t

0x2b1e,	// (0x00036692) mup_progress_pane_ParamLimits

0x2b1e,	// (0x00036692) mup_progress_pane

0xd1d0,	// (0x00040d44) mup_visualizer_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup_visualizer_pane

0xd1d0,	// (0x00040d44) mup_volume_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup_volume_pane

0x2b93,	// (0x00036707) mup_visualizer_pane_g1_ParamLimits

0x2b93,	// (0x00036707) mup_visualizer_pane_g1

0xd1de,	// (0x00040d52) mup_visualizer_pane_g2_ParamLimits

0xd1de,	// (0x00040d52) mup_visualizer_pane_g2

0x2b85,	// (0x000366f9) mup_visualizer_pane_g3_ParamLimits

0x2b85,	// (0x000366f9) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00042f30) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00042f30) mup_visualizer_pane_g

0xc7c4,	// (0x00040338) mup_volume_pane_g1

0xc7c4,	// (0x00040338) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) mup_volume_pane_g

0xc7c4,	// (0x00040338) mup_progress_pane_g1

0xc7c4,	// (0x00040338) mup_progress_pane_g2

0xc7c4,	// (0x00040338) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00042f3c) mup_progress_pane_g

0x28a1,	// (0x00036415) bg_popup_window_pane_cp05

0xd1ec,	// (0x00040d60) heading_pane_cp02_ParamLimits

0xd1ec,	// (0x00040d60) heading_pane_cp02

0xd208,	// (0x00040d7c) list_popup_blid_pane

0xd210,	// (0x00040d84) list_blid_sat_info_pane_ParamLimits

0xd210,	// (0x00040d84) list_blid_sat_info_pane

0xd223,	// (0x00040d97) list_blid_sat_info_pane_g1

0xd22b,	// (0x00040d9f) list_blid_sat_info_pane_t1

0x6e9a,	// (0x0003aa0e) mup_equalizer_pane_ParamLimits

0x6e9a,	// (0x0003aa0e) mup_equalizer_pane

0x6ebb,	// (0x0003aa2f) mup_equalizer_pane_cp1_ParamLimits

0x6ebb,	// (0x0003aa2f) mup_equalizer_pane_cp1

0x6edc,	// (0x0003aa50) mup_equalizer_pane_cp2_ParamLimits

0x6edc,	// (0x0003aa50) mup_equalizer_pane_cp2

0x6efd,	// (0x0003aa71) mup_equalizer_pane_cp3_ParamLimits

0x6efd,	// (0x0003aa71) mup_equalizer_pane_cp3

0x6f22,	// (0x0003aa96) mup_equalizer_pane_cp4_ParamLimits

0x6f22,	// (0x0003aa96) mup_equalizer_pane_cp4

0x6f47,	// (0x0003aabb) mup_equalizer_pane_cp5

0x6f5f,	// (0x0003aad3) mup_equalizer_pane_cp6

0x6f77,	// (0x0003aaeb) mup_equalizer_pane_cp7

0xe37e,	// (0x00041ef2) bg_popup_call_poc_act_pane_g9

0xe386,	// (0x00041efa) bg_popup_call_poc_act_pane_g10

0xe38e,	// (0x00041f02) bg_popup_call_poc_act_pane_g11

0x000a,

0x2afc,	// (0x00036670) mup_scale_pane

0x2b14,	// (0x00036688) mup_scale_pane_g1

0xd239,	// (0x00040dad) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00042f58) mup_scale_pane_g

0xd25d,	// (0x00040dd1) msg_data_pane

0xd265,	// (0x00040dd9) scroll_pane_cp017

0x6fa1,	// (0x0003ab15) bg_list_pane_cp04_ParamLimits

0x6fa1,	// (0x0003ab15) bg_list_pane_cp04

0xd26d,	// (0x00040de1) msg_data_pane_g1

0x6fc1,	// (0x0003ab35) msg_data_pane_g2

0x6fcb,	// (0x0003ab3f) msg_data_pane_g3

0x6fd5,	// (0x0003ab49) msg_data_pane_g4

0x6fdd,	// (0x0003ab51) msg_data_pane_g5

0x6fe5,	// (0x0003ab59) msg_data_pane_g6

0x6fed,	// (0x0003ab61) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00042f67) msg_data_pane_g

0x3b4c,	// (0x000376c0) msg_text_pane_ParamLimits

0x3b4c,	// (0x000376c0) msg_text_pane

0x6ff5,	// (0x0003ab69) qrid_highlight_pane_cp011_ParamLimits

0x6ff5,	// (0x0003ab69) qrid_highlight_pane_cp011

0x28a1,	// (0x00036415) msg_body_pane

0x28a1,	// (0x00036415) msg_header_pane

0xd27e,	// (0x00040df2) input_focus_pane_cp07

0x700b,	// (0x0003ab7f) msg_header_pane_t1_ParamLimits

0x700b,	// (0x0003ab7f) msg_header_pane_t1

0x3b89,	// (0x000376fd) msg_header_pane_t2_ParamLimits

0x3b89,	// (0x000376fd) msg_header_pane_t2

0x0001,

0xf407,	// (0x00042f7b) msg_header_pane_t_ParamLimits

0xf407,	// (0x00042f7b) msg_header_pane_t

0xd293,	// (0x00040e07) msg_body_pane_g1

0x3ba0,	// (0x00037714) msg_body_pane_t1_ParamLimits

0x3ba0,	// (0x00037714) msg_body_pane_t1

0x3bd1,	// (0x00037745) msg_body_pane_t2_ParamLimits

0x3bd1,	// (0x00037745) msg_body_pane_t2

0x3be3,	// (0x00037757) msg_body_pane_t3_ParamLimits

0x3be3,	// (0x00037757) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00042f80) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00042f80) msg_body_pane_t

0x7073,	// (0x0003abe7) main_viewer_pane_g1_ParamLimits

0x7073,	// (0x0003abe7) main_viewer_pane_g1

0x707f,	// (0x0003abf3) main_viewer_pane_g2_ParamLimits

0x707f,	// (0x0003abf3) main_viewer_pane_g2

0x708b,	// (0x0003abff) main_viewer_pane_g3_ParamLimits

0x708b,	// (0x0003abff) main_viewer_pane_g3

0x709c,	// (0x0003ac10) main_viewer_pane_g4_ParamLimits

0x709c,	// (0x0003ac10) main_viewer_pane_g4

0x70ad,	// (0x0003ac21) main_viewer_pane_g5_ParamLimits

0x70ad,	// (0x0003ac21) main_viewer_pane_g5

0x70ad,	// (0x0003ac21) main_viewer_pane_g7_ParamLimits

0x70ad,	// (0x0003ac21) main_viewer_pane_g7

0x70bf,	// (0x0003ac33) main_viewer_pane_g8_ParamLimits

0x70bf,	// (0x0003ac33) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00042f90) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00042f90) main_viewer_pane_g

0xd29b,	// (0x00040e0f) viewer_content_pane_ParamLimits

0xd29b,	// (0x00040e0f) viewer_content_pane

0x70f7,	// (0x0003ac6b) main_postcard_pane_g1_ParamLimits

0x70f7,	// (0x0003ac6b) main_postcard_pane_g1

0x7105,	// (0x0003ac79) main_postcard_pane_g2_ParamLimits

0x7105,	// (0x0003ac79) main_postcard_pane_g2

0x7113,	// (0x0003ac87) main_postcard_pane_g3_ParamLimits

0x7113,	// (0x0003ac87) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00042fa1) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00042fa1) main_postcard_pane_g

0x7123,	// (0x0003ac97) main_postcard_pane_g4

0xe4e5,	// (0x00042059) smil_status_volume_pane_g2

0x714f,	// (0x0003acc3) postcard_pane_ParamLimits

0x714f,	// (0x0003acc3) postcard_pane

0xce4b,	// (0x000409bf) postcard_pane_g1_ParamLimits

0xce4b,	// (0x000409bf) postcard_pane_g1

0x7189,	// (0x0003acfd) postcard_pane_g2_ParamLimits

0x7189,	// (0x0003acfd) postcard_pane_g2

0x7195,	// (0x0003ad09) postcard_pane_g3_ParamLimits

0x7195,	// (0x0003ad09) postcard_pane_g3

0xd2a9,	// (0x00040e1d) postcard_pane_g4_ParamLimits

0xd2a9,	// (0x00040e1d) postcard_pane_g4

0x71a1,	// (0x0003ad15) postcard_pane_g5_ParamLimits

0x71a1,	// (0x0003ad15) postcard_pane_g5

0x71ad,	// (0x0003ad21) postcard_pane_g6_ParamLimits

0x71ad,	// (0x0003ad21) postcard_pane_g6

0xd2b7,	// (0x00040e2b) postcard_pane_g7_ParamLimits

0xd2b7,	// (0x00040e2b) postcard_pane_g7

0x0006,

0xf43a,	// (0x00042fae) postcard_pane_g_ParamLimits

0xf43a,	// (0x00042fae) postcard_pane_g

0x71bb,	// (0x0003ad2f) main_mp2_pane_g1_ParamLimits

0x71bb,	// (0x0003ad2f) main_mp2_pane_g1

0x71c9,	// (0x0003ad3d) main_mp2_pane_g2_ParamLimits

0x71c9,	// (0x0003ad3d) main_mp2_pane_g2

0x71d5,	// (0x0003ad49) main_mp2_pane_g3_ParamLimits

0x71d5,	// (0x0003ad49) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00042fbd) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00042fbd) main_mp2_pane_g

0x71e1,	// (0x0003ad55) main_mp2_pane_t1_ParamLimits

0x71e1,	// (0x0003ad55) main_mp2_pane_t1

0x71f8,	// (0x0003ad6c) main_mp2_pane_t2_ParamLimits

0x71f8,	// (0x0003ad6c) main_mp2_pane_t2

0x720c,	// (0x0003ad80) main_mp2_pane_t3_ParamLimits

0x720c,	// (0x0003ad80) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00042fc4) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00042fc4) main_mp2_pane_t

0xd2c5,	// (0x00040e39) pec_content_pane_ParamLimits

0xd2c5,	// (0x00040e39) pec_content_pane

0xc93d,	// (0x000404b1) scroll_pane_cp015

0xd2d7,	// (0x00040e4b) pec_attribute_pane_ParamLimits

0xd2d7,	// (0x00040e4b) pec_attribute_pane

0x721e,	// (0x0003ad92) pec_content_pane_g1_ParamLimits

0x721e,	// (0x0003ad92) pec_content_pane_g1

0xd2e7,	// (0x00040e5b) pec_content_pane_t1_ParamLimits

0xd2e7,	// (0x00040e5b) pec_content_pane_t1

0xd2f9,	// (0x00040e6d) pec_content_pane_t2_ParamLimits

0xd2f9,	// (0x00040e6d) pec_content_pane_t2

0x0001,

0xf457,	// (0x00042fcb) pec_content_pane_t_ParamLimits

0xf457,	// (0x00042fcb) pec_content_pane_t

0x722a,	// (0x0003ad9e) list_single_graphic_pane_cp01_ParamLimits

0x722a,	// (0x0003ad9e) list_single_graphic_pane_cp01

0x2afc,	// (0x00036670) bg_popup_sub_pane_cp04

0xd30b,	// (0x00040e7f) popup_mup_playback_window_g1

0xd317,	// (0x00040e8b) popup_mup_playback_window_t1

0xd32c,	// (0x00040ea0) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00042fd0) popup_mup_playback_window_t

0xd363,	// (0x00040ed7) main_image_pane_g1_ParamLimits

0xd363,	// (0x00040ed7) main_image_pane_g1

0xd3a6,	// (0x00040f1a) scroll_pane_cp018_ParamLimits

0xd3a6,	// (0x00040f1a) scroll_pane_cp018

0xd3be,	// (0x00040f32) scroll_pane_cp016_ParamLimits

0xd3be,	// (0x00040f32) scroll_pane_cp016

0x72b8,	// (0x0003ae2c) smil2_image_pane_ParamLimits

0x72b8,	// (0x0003ae2c) smil2_image_pane

0x72ee,	// (0x0003ae62) smil2_root_pane_ParamLimits

0x72ee,	// (0x0003ae62) smil2_root_pane

0x731a,	// (0x0003ae8e) smil2_text_pane_ParamLimits

0x731a,	// (0x0003ae8e) smil2_text_pane

0x28a1,	// (0x00036415) bg_list_pane_cp06

0xd3fa,	// (0x00040f6e) grid_radio_pane

0x28a1,	// (0x00036415) bg_popup_window_pane_cp06

0xd404,	// (0x00040f78) main_fmradio_pane_t1

0xe396,	// (0x00041f0a) heading_pane_cp04

0xd412,	// (0x00040f86) main_fmradio_pane_t2

0xe39e,	// (0x00041f12) popup_cale_lunar_info_window_g1

0xd420,	// (0x00040f94) main_fmradio_pane_t3

0xe3a6,	// (0x00041f1a) popup_cale_lunar_info_window_g2

0xd430,	// (0x00040fa4) main_fmradio_pane_t4

0x0001,

0xd43e,	// (0x00040fb2) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x000430b0) popup_cale_lunar_info_window_g

0xf471,	// (0x00042fe5) main_fmradio_pane_t

0xd44c,	// (0x00040fc0) wait_bar_pane_cp03

0xd454,	// (0x00040fc8) cell_fmradio_pane_ParamLimits

0xd454,	// (0x00040fc8) cell_fmradio_pane

0xd2b7,	// (0x00040e2b) cell_fmradio_pane_g1_ParamLimits

0xd2b7,	// (0x00040e2b) cell_fmradio_pane_g1

0x28a1,	// (0x00036415) grid_highlight_pane_cp011

0xd469,	// (0x00040fdd) poc_content_pane_ParamLimits

0xd469,	// (0x00040fdd) poc_content_pane

0xd47b,	// (0x00040fef) scroll_pane_cp019

0x735a,	// (0x0003aece) popup_call_poc_act_window_ParamLimits

0x735a,	// (0x0003aece) popup_call_poc_act_window

0x7367,	// (0x0003aedb) popup_call_poc_inact_window_ParamLimits

0x7367,	// (0x0003aedb) popup_call_poc_inact_window

0xf513,	// (0x00043087) bg_popup_call_poc_act_pane_g

0xe30e,	// (0x00041e82) bg_popup_call_poc_inact_pane_g1

0xe316,	// (0x00041e8a) bg_popup_call_poc_inact_pane_g2

0xd483,	// (0x00040ff7) popup_call_poc_act_window_g2

0xe31e,	// (0x00041e92) bg_popup_call_poc_inact_pane_g3

0xe326,	// (0x00041e9a) bg_popup_call_poc_inact_pane_g4

0xe32e,	// (0x00041ea2) bg_popup_call_poc_inact_pane_g5

0xd48b,	// (0x00040fff) popup_call_poc_act_window_t1_ParamLimits

0xd48b,	// (0x00040fff) popup_call_poc_act_window_t1

0xd4b3,	// (0x00041027) popup_call_poc_act_window_t2_ParamLimits

0xd4b3,	// (0x00041027) popup_call_poc_act_window_t2

0xd4db,	// (0x0004104f) popup_call_poc_act_window_t3_ParamLimits

0xd4db,	// (0x0004104f) popup_call_poc_act_window_t3

0xd503,	// (0x00041077) popup_call_poc_act_window_t4_ParamLimits

0xd503,	// (0x00041077) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00042ff0) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00042ff0) popup_call_poc_act_window_t

0xe336,	// (0x00041eaa) bg_popup_call_poc_inact_pane_g6

0xe33e,	// (0x00041eb2) bg_popup_call_poc_inact_pane_g7

0xe346,	// (0x00041eba) bg_popup_call_poc_inact_pane_g8

0xd515,	// (0x00041089) popup_call_poc_inact_window_g2

0xe34e,	// (0x00041ec2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x00043074) bg_popup_call_poc_inact_pane_g

0xd51d,	// (0x00041091) popup_call_poc_inact_window_t1_ParamLimits

0xd51d,	// (0x00041091) popup_call_poc_inact_window_t1

0xd532,	// (0x000410a6) popup_call_poc_inact_window_t2_ParamLimits

0xd532,	// (0x000410a6) popup_call_poc_inact_window_t2

0xd547,	// (0x000410bb) popup_call_poc_inact_window_t3_ParamLimits

0xd547,	// (0x000410bb) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00042ff9) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00042ff9) popup_call_poc_inact_window_t

0xe44a,	// (0x00041fbe) context_pane_ParamLimits

0x7a04,	// (0x0003b578) signal_pane_ParamLimits

0xc78e,	// (0x00040302) main_call2_pane

0x7970,	// (0x0003b4e4) popup_phob_thumbnail2_window_ParamLimits

0x7970,	// (0x0003b4e4) popup_phob_thumbnail2_window

0x7021,	// (0x0003ab95) aid_hotspot_pointer_arrow_pane

0x7029,	// (0x0003ab9d) aid_hotspot_pointer_hand_pane

0x76af,	// (0x0003b223) phob_pre_status_pane_g5

0x2b77,	// (0x000366eb) cams_zoom_pane_ParamLimits

0x2b77,	// (0x000366eb) image_vga_pane_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g1_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g2_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g3_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g4_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g5_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g6_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00042d1f) main_camera_pane_g_ParamLimits

0xc796,	// (0x0004030a) main_camera_pane_t1_ParamLimits

0xc796,	// (0x0004030a) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00042d30) main_camera_pane_t_ParamLimits

0x2afc,	// (0x00036670) bg_popup_preview_window_pane_cp01_ParamLimits

0x2afc,	// (0x00036670) bg_popup_preview_window_pane_cp01

0xd55c,	// (0x000410d0) popup_phob_thumbnail2_window_g1_ParamLimits

0xd55c,	// (0x000410d0) popup_phob_thumbnail2_window_g1

0x28a1,	// (0x00036415) call2_cli_visual_pane

0x7383,	// (0x0003aef7) popup_call2_audio_conf_window_ParamLimits

0x7383,	// (0x0003aef7) popup_call2_audio_conf_window

0x739c,	// (0x0003af10) popup_call2_audio_first_window_ParamLimits

0x739c,	// (0x0003af10) popup_call2_audio_first_window

0x743a,	// (0x0003afae) popup_call2_audio_in_window_ParamLimits

0x743a,	// (0x0003afae) popup_call2_audio_in_window

0x747e,	// (0x0003aff2) popup_call2_audio_out_window_ParamLimits

0x747e,	// (0x0003aff2) popup_call2_audio_out_window

0x74e8,	// (0x0003b05c) popup_call2_audio_second_window_ParamLimits

0x74e8,	// (0x0003b05c) popup_call2_audio_second_window

0x7546,	// (0x0003b0ba) popup_call2_audio_wait_window_ParamLimits

0x7546,	// (0x0003b0ba) popup_call2_audio_wait_window

0x28a1,	// (0x00036415) bg_popup_call2_act_pane_cp03

0x2ade,	// (0x00036652) list_conf_pane_cp

0xd568,	// (0x000410dc) popup_call2_audio_conf_window_t1

0xd576,	// (0x000410ea) list_single_graphic_popup_conf2_pane_ParamLimits

0xd576,	// (0x000410ea) list_single_graphic_popup_conf2_pane

0xcf25,	// (0x00040a99) list_highlight_pane_cp04

0xd589,	// (0x000410fd) list_single_graphic_popup_conf2_pane_g1

0xcf36,	// (0x00040aaa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00043000) list_single_graphic_popup_conf2_pane_g

0xd593,	// (0x00041107) list_single_graphic_popup_conf2_pane_t1

0xd5a1,	// (0x00041115) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5a1,	// (0x00041115) bg_popup_call2_act_pane_cp01

0xd62b,	// (0x0004119f) call_type_pane_cp05_ParamLimits

0xd62b,	// (0x0004119f) call_type_pane_cp05

0xd67f,	// (0x000411f3) popup_call2_audio_second_window_g1_ParamLimits

0xd67f,	// (0x000411f3) popup_call2_audio_second_window_g1

0xd6d3,	// (0x00041247) popup_call2_audio_second_window_g2_ParamLimits

0xd6d3,	// (0x00041247) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00043005) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00043005) popup_call2_audio_second_window_g

0xd738,	// (0x000412ac) popup_call2_audio_second_window_t1_ParamLimits

0xd738,	// (0x000412ac) popup_call2_audio_second_window_t1

0xd7f3,	// (0x00041367) popup_call2_audio_second_window_t2_ParamLimits

0xd7f3,	// (0x00041367) popup_call2_audio_second_window_t2

0xd846,	// (0x000413ba) popup_call2_audio_second_window_t3_ParamLimits

0xd846,	// (0x000413ba) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x0004300c) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x0004300c) popup_call2_audio_second_window_t

0x28a1,	// (0x00036415) bg_popup_call2_in_pane_cp02

0x28ab,	// (0x0003641f) call_type_pane_cp04

0x7585,	// (0x0003b0f9) popup_call2_audio_wait_window_g1

0x758d,	// (0x0003b101) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00043015) popup_call2_audio_wait_window_g

0x28c3,	// (0x00036437) popup_call2_audio_wait_window_t3

0xd939,	// (0x000414ad) bg_popup_call2_act_pane_ParamLimits

0xd939,	// (0x000414ad) bg_popup_call2_act_pane

0xd9f9,	// (0x0004156d) call_type_pane_cp03_ParamLimits

0xd9f9,	// (0x0004156d) call_type_pane_cp03

0xda5d,	// (0x000415d1) popup_call2_audio_first_window_g1_ParamLimits

0xda5d,	// (0x000415d1) popup_call2_audio_first_window_g1

0xdacd,	// (0x00041641) popup_call2_audio_first_window_g2_ParamLimits

0xdacd,	// (0x00041641) popup_call2_audio_first_window_g2

0xce4b,	// (0x000409bf) popup_call2_audio_first_window_g3_ParamLimits

0xce4b,	// (0x000409bf) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x0004301a) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x0004301a) popup_call2_audio_first_window_g

0xdbab,	// (0x0004171f) popup_call2_audio_first_window_t1_ParamLimits

0xdbab,	// (0x0004171f) popup_call2_audio_first_window_t1

0xdcae,	// (0x00041822) popup_call2_audio_first_window_t4_ParamLimits

0xdcae,	// (0x00041822) popup_call2_audio_first_window_t4

0xdd91,	// (0x00041905) popup_call2_audio_first_window_t5_ParamLimits

0xdd91,	// (0x00041905) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00043025) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00043025) popup_call2_audio_first_window_t

0x2af4,	// (0x00036668) bg_popup_call2_act_pane_g1

0xe3b0,	// (0x00041f24) popup_cale_lunar_info_window_t1

0xe3be,	// (0x00041f32) popup_cale_lunar_info_window_t2

0xe3cc,	// (0x00041f40) popup_cale_lunar_info_window_t3

0x28a1,	// (0x00036415) bg_popup_call2_bubble_pane

0xde92,	// (0x00041a06) bg_popup_call2_in_pane_cp01_ParamLimits

0xde92,	// (0x00041a06) bg_popup_call2_in_pane_cp01

0x257d,	// (0x000360f1) call_type_pane_cp02

0x7595,	// (0x0003b109) popup_call2_audio_out_window_g1_ParamLimits

0x7595,	// (0x0003b109) popup_call2_audio_out_window_g1

0xdeda,	// (0x00041a4e) popup_call2_audio_out_window_g2_ParamLimits

0xdeda,	// (0x00041a4e) popup_call2_audio_out_window_g2

0x75c1,	// (0x0003b135) popup_call2_audio_out_window_g3_ParamLimits

0x75c1,	// (0x0003b135) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x0004302e) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x0004302e) popup_call2_audio_out_window_g

0xdf11,	// (0x00041a85) popup_call2_audio_out_window_t1_ParamLimits

0xdf11,	// (0x00041a85) popup_call2_audio_out_window_t1

0xdf70,	// (0x00041ae4) popup_call2_audio_out_window_t2_ParamLimits

0xdf70,	// (0x00041ae4) popup_call2_audio_out_window_t2

0xdfc4,	// (0x00041b38) popup_call2_audio_out_window_t3_ParamLimits

0xdfc4,	// (0x00041b38) popup_call2_audio_out_window_t3

0xdfda,	// (0x00041b4e) popup_call2_audio_out_window_t4_ParamLimits

0xdfda,	// (0x00041b4e) popup_call2_audio_out_window_t4

0xdff0,	// (0x00041b64) popup_call2_audio_out_window_t5_ParamLimits

0xdff0,	// (0x00041b64) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00043037) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00043037) popup_call2_audio_out_window_t

0xe054,	// (0x00041bc8) bg_popup_call2_in_pane_ParamLimits

0xe054,	// (0x00041bc8) bg_popup_call2_in_pane

0xe0b0,	// (0x00041c24) popup_call2_audio_in_window_g1_ParamLimits

0xe0b0,	// (0x00041c24) popup_call2_audio_in_window_g1

0xe0e8,	// (0x00041c5c) popup_call2_audio_in_window_g2_ParamLimits

0xe0e8,	// (0x00041c5c) popup_call2_audio_in_window_g2

0xe120,	// (0x00041c94) popup_call2_audio_in_window_g3_ParamLimits

0xe120,	// (0x00041c94) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00043044) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00043044) popup_call2_audio_in_window_g

0xe178,	// (0x00041cec) popup_call2_audio_in_window_t1_ParamLimits

0xe178,	// (0x00041cec) popup_call2_audio_in_window_t1

0xe1f8,	// (0x00041d6c) popup_call2_audio_in_window_t2_ParamLimits

0xe1f8,	// (0x00041d6c) popup_call2_audio_in_window_t2

0xe278,	// (0x00041dec) popup_call2_audio_in_window_t3_ParamLimits

0xe278,	// (0x00041dec) popup_call2_audio_in_window_t3

0xe292,	// (0x00041e06) popup_call2_audio_in_window_t4_ParamLimits

0xe292,	// (0x00041e06) popup_call2_audio_in_window_t4

0xe2a4,	// (0x00041e18) popup_call2_audio_in_window_t5_ParamLimits

0xe2a4,	// (0x00041e18) popup_call2_audio_in_window_t5

0xe2b9,	// (0x00041e2d) popup_call2_audio_in_window_t6_ParamLimits

0xe2b9,	// (0x00041e2d) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x0004304d) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x0004304d) popup_call2_audio_in_window_t

0x2af4,	// (0x00036668) bg_popup_call2_in_pane_g1

0xe3da,	// (0x00041f4e) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x000430b5) popup_cale_lunar_info_window_t

0x2afc,	// (0x00036670) bg_popup_call2_rect_pane_ParamLimits

0x2afc,	// (0x00036670) bg_popup_call2_rect_pane

0x28a1,	// (0x00036415) call2_cli_visual_graphic_pane

0x28a1,	// (0x00036415) call2_cli_visual_text_pane

0x7a2c,	// (0x0003b5a0) smil_status_volume_pane_g3

0x0002,

0x2b14,	// (0x00036688) call2_cli_visual_graphic_pane_g1

0x2b14,	// (0x00036688) call2_cli_visual_graphic_pane_g2

0x2b14,	// (0x00036688) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x0004305a) call2_cli_visual_graphic_pane_g

0xe2ce,	// (0x00041e42) bg_popup_call2_rect_pane_g1

0x2cd7,	// (0x0003684b) bg_popup_call2_rect_pane_g2

0xe2d6,	// (0x00041e4a) bg_popup_call2_rect_pane_g3

0xe2de,	// (0x00041e52) bg_popup_call2_rect_pane_g4

0xe2e6,	// (0x00041e5a) bg_popup_call2_rect_pane_g5

0xe2ee,	// (0x00041e62) bg_popup_call2_rect_pane_g6

0xe2f6,	// (0x00041e6a) bg_popup_call2_rect_pane_g7

0xe2fe,	// (0x00041e72) bg_popup_call2_rect_pane_g8

0xe306,	// (0x00041e7a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00043061) bg_popup_call2_rect_pane_g

0xe30e,	// (0x00041e82) bg_popup_call2_bubble_pane_g1

0xe316,	// (0x00041e8a) bg_popup_call2_bubble_pane_g2

0xe31e,	// (0x00041e92) bg_popup_call2_bubble_pane_g3

0xe326,	// (0x00041e9a) bg_popup_call2_bubble_pane_g4

0xe32e,	// (0x00041ea2) bg_popup_call2_bubble_pane_g5

0xe336,	// (0x00041eaa) bg_popup_call2_bubble_pane_g6

0xe33e,	// (0x00041eb2) bg_popup_call2_bubble_pane_g7

0xe346,	// (0x00041eba) bg_popup_call2_bubble_pane_g8

0xe34e,	// (0x00041ec2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00043074) bg_popup_call2_bubble_pane_g

0x4f87,	// (0x00038afb) aid_cale_week_size_cell_pane

0x2afc,	// (0x00036670) aid_cams_cif_uncrop_pane_ParamLimits

0x2afc,	// (0x00036670) aid_cams_cif_uncrop_pane

0x5776,	// (0x000392ea) aid_cams_size_cell_ParamLimits

0x5776,	// (0x000392ea) aid_cams_size_cell

0x5782,	// (0x000392f6) grid_cams_pane_ParamLimits

0x5790,	// (0x00039304) linegrid_cams_pane_ParamLimits

0x5861,	// (0x000393d5) call_video_pane_t1

0x587e,	// (0x000393f2) call_video_pane_t2

0x0001,

0xf208,	// (0x00042d7c) call_video_pane_t

0x5ced,	// (0x00039861) aid_cale_month_size_cell_pane_ParamLimits

0x5ced,	// (0x00039861) aid_cale_month_size_cell_pane

0xf585,	// (0x000430f9) smil_status_volume_pane_g

0x7a39,	// (0x0003b5ad) volume_smil_pane_ParamLimits

0x4884,	// (0x000383f8) aid_popup2_width_pane

0x4e93,	// (0x00038a07) cell_qdial_pane_g4_ParamLimits

0x4e93,	// (0x00038a07) cell_qdial_pane_g4

0x6bb6,	// (0x0003a72a) aid_blid_cardinal_pane_ParamLimits

0x6bc6,	// (0x0003a73a) aid_blid_destination_pane_ParamLimits

0x6bc6,	// (0x0003a73a) aid_blid_destination_pane

0x2afc,	// (0x00036670) bg_popup_call_poc_act_pane_ParamLimits

0x2afc,	// (0x00036670) bg_popup_call_poc_act_pane

0x2afc,	// (0x00036670) bg_popup_call_poc_inact_pane_ParamLimits

0x2afc,	// (0x00036670) bg_popup_call_poc_inact_pane

0xe356,	// (0x00041eca) bg_popup_call_poc_act_pane_g1

0xe35e,	// (0x00041ed2) bg_popup_call_poc_act_pane_g2

0xe366,	// (0x00041eda) bg_popup_call_poc_act_pane_g3

0xe326,	// (0x00041e9a) bg_popup_call_poc_act_pane_g4

0xe32e,	// (0x00041ea2) bg_popup_call_poc_act_pane_g5

0xe36e,	// (0x00041ee2) bg_popup_call_poc_act_pane_g6

0xe33e,	// (0x00041eb2) bg_popup_call_poc_act_pane_g7

0xe376,	// (0x00041eea) bg_popup_call_poc_act_pane_g8

0x28a1,	// (0x00036415) main_usb_pane

0x788d,	// (0x0003b401) popup_cale_lunar_info_window

0x5b96,	// (0x0003970a) im_reading_pane_t1_ParamLimits

0xc895,	// (0x00040409) list_im_pane_ParamLimits

0xc8a6,	// (0x0004041a) scroll_pane_cp07_ParamLimits

0x28a1,	// (0x00036415) grid_highlight_pane_cp012

0x2afc,	// (0x00036670) mup_scale_pane_ParamLimits

0xce4b,	// (0x000409bf) main_usb_pane_g1_ParamLimits

0xce4b,	// (0x000409bf) main_usb_pane_g1

0x7617,	// (0x0003b18b) main_usb_pane_g2_ParamLimits

0x7617,	// (0x0003b18b) main_usb_pane_g2

0x0001,

0xf52a,	// (0x0004309e) main_usb_pane_g_ParamLimits

0xf52a,	// (0x0004309e) main_usb_pane_g

0x7623,	// (0x0003b197) main_usb_pane_t1_ParamLimits

0x7623,	// (0x0003b197) main_usb_pane_t1

0x7635,	// (0x0003b1a9) main_usb_pane_t2_ParamLimits

0x7635,	// (0x0003b1a9) main_usb_pane_t2

0x7647,	// (0x0003b1bb) main_usb_pane_t3_ParamLimits

0x7647,	// (0x0003b1bb) main_usb_pane_t3

0x7659,	// (0x0003b1cd) main_usb_pane_t4_ParamLimits

0x7659,	// (0x0003b1cd) main_usb_pane_t4

0x766b,	// (0x0003b1df) main_usb_pane_t5_ParamLimits

0x766b,	// (0x0003b1df) main_usb_pane_t5

0x767d,	// (0x0003b1f1) main_usb_pane_t6_ParamLimits

0x767d,	// (0x0003b1f1) main_usb_pane_t6

0x0005,

0xf52f,	// (0x000430a3) main_usb_pane_t_ParamLimits

0x6b55,	// (0x0003a6c9) aid_text_placing

0x6b60,	// (0x0003a6d4) main_location2_pane_t1_ParamLimits

0x6b76,	// (0x0003a6ea) main_location2_pane_t2_ParamLimits

0x6b8c,	// (0x0003a700) main_location2_pane_t3_ParamLimits

0x6ba2,	// (0x0003a716) main_location2_pane_t4_ParamLimits

0x6ba2,	// (0x0003a716) main_location2_pane_t4

0xf349,	// (0x00042ebd) main_location2_pane_t_ParamLimits

0x2b38,	// (0x000366ac) find_pinb_pane_g2_ParamLimits

0x2b38,	// (0x000366ac) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00042c34) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00042c34) find_pinb_pane_g

0x2b44,	// (0x000366b8) find_pinb_pane_t1_ParamLimits

0x2b56,	// (0x000366ca) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00042c39) find_pinb_pane_t_ParamLimits

0x28a1,	// (0x00036415) main_call3_pane

0x62a0,	// (0x00039e14) cale_month_day_heading_pane_t1_ParamLimits

0x6322,	// (0x00039e96) cale_month_day_heading_pane_t2_ParamLimits

0x639b,	// (0x00039f0f) cale_month_day_heading_pane_t3_ParamLimits

0x6414,	// (0x00039f88) cale_month_day_heading_pane_t4_ParamLimits

0x648d,	// (0x0003a001) cale_month_day_heading_pane_t5_ParamLimits

0x650e,	// (0x0003a082) cale_month_day_heading_pane_t6_ParamLimits

0x6597,	// (0x0003a10b) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00042db4) cale_month_day_heading_pane_t_ParamLimits

0xcb19,	// (0x0004068d) smil_status_volume_pane

0x716d,	// (0x0003ace1) postcard_address_pane_ParamLimits

0x716d,	// (0x0003ace1) postcard_address_pane

0x717b,	// (0x0003acef) postcard_message_pane_ParamLimits

0x717b,	// (0x0003acef) postcard_message_pane

0x75ed,	// (0x0003b161) call2_cli_visual_pane_t1_ParamLimits

0x75ed,	// (0x0003b161) call2_cli_visual_pane_t1

0xe510,	// (0x00042084) postcard_message_pane_t1_ParamLimits

0xe510,	// (0x00042084) postcard_message_pane_t1

0xe4f8,	// (0x0004206c) postcard_address_pane_t1_ParamLimits

0xe4f8,	// (0x0004206c) postcard_address_pane_t1

0x7b70,	// (0x0003b6e4) popup_call3_audio_in_window_ParamLimits

0x7b70,	// (0x0003b6e4) popup_call3_audio_in_window

0x7a4e,	// (0x0003b5c2) bg_popup_call3_in_pane_ParamLimits

0x7a4e,	// (0x0003b5c2) bg_popup_call3_in_pane

0x7ab6,	// (0x0003b62a) popup_call3_audio_in_window_g1_ParamLimits

0x7ab6,	// (0x0003b62a) popup_call3_audio_in_window_g1

0x7ace,	// (0x0003b642) popup_call3_audio_in_window_g2_ParamLimits

0x7ace,	// (0x0003b642) popup_call3_audio_in_window_g2

0x7ae6,	// (0x0003b65a) popup_call3_audio_in_window_g3_ParamLimits

0x7ae6,	// (0x0003b65a) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00043100) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00043100) popup_call3_audio_in_window_g

0x7b0e,	// (0x0003b682) popup_call3_audio_in_window_t1_ParamLimits

0x7b0e,	// (0x0003b682) popup_call3_audio_in_window_t1

0x7b36,	// (0x0003b6aa) popup_call3_audio_in_window_t2_ParamLimits

0x7b36,	// (0x0003b6aa) popup_call3_audio_in_window_t2

0x7b5e,	// (0x0003b6d2) popup_call3_audio_in_window_t3_ParamLimits

0x7b5e,	// (0x0003b6d2) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x00043109) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x00043109) popup_call3_audio_in_window_t

0xc78e,	// (0x00040302) bg_popup_call3_rect_pane

0xe2ce,	// (0x00041e42) bg_popup_call3_rect_pane_g1

0x2cd7,	// (0x0003684b) bg_popup_call3_rect_pane_g2

0xe2d6,	// (0x00041e4a) bg_popup_call3_rect_pane_g3

0xe2de,	// (0x00041e52) bg_popup_call3_rect_pane_g4

0xe2e6,	// (0x00041e5a) bg_popup_call3_rect_pane_g5

0xe2ee,	// (0x00041e62) bg_popup_call3_rect_pane_g6

0xe2f6,	// (0x00041e6a) bg_popup_call3_rect_pane_g7

0x244f,	// (0x00035fc3) mup_visualizer_osc_pane

0x244f,	// (0x00035fc3) mup_visualizer_spec_pane

0x7a6e,	// (0x0003b5e2) call3_video_qcif_pane_ParamLimits

0x7a6e,	// (0x0003b5e2) call3_video_qcif_pane

0x7a80,	// (0x0003b5f4) call3_video_qcif_uncrop_pane_ParamLimits

0x7a80,	// (0x0003b5f4) call3_video_qcif_uncrop_pane

0x7a90,	// (0x0003b604) call3_video_subqcif_pane_ParamLimits

0x7a90,	// (0x0003b604) call3_video_subqcif_pane

0x7aa4,	// (0x0003b618) call3_video_subqcif_uncrop_pane_ParamLimits

0x7aa4,	// (0x0003b618) call3_video_subqcif_uncrop_pane

0x7afe,	// (0x0003b672) popup_call3_audio_in_window_g4_ParamLimits

0x7afe,	// (0x0003b672) popup_call3_audio_in_window_g4

0x244f,	// (0x00035fc3) mup_spec_half_pane

0x244f,	// (0x00035fc3) mup_spec_half_pane_cp

0x244f,	// (0x00035fc3) mup_osc_middle_pane

0xc7c4,	// (0x00040338) mup_visualizer_osc_pane_g1

0xe4ab,	// (0x0004201f) mup_spec_bar_pane_ParamLimits

0xe4ab,	// (0x0004201f) mup_spec_bar_pane

0xc7c4,	// (0x00040338) mup_spec_bar_pane_g1

0xc7c4,	// (0x00040338) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) mup_spec_bar_pane_g

0x4f87,	// (0x00038afb) aid_cale_week_size_cell_pane_ParamLimits

0x4fa1,	// (0x00038b15) bg_cale_heading_pane_ParamLimits

0x4fca,	// (0x00038b3e) bg_cale_pane_cp01_ParamLimits

0x4fec,	// (0x00038b60) cale_week_corner_pane_ParamLimits

0x500b,	// (0x00038b7f) cale_week_day_heading_pane_ParamLimits

0x5039,	// (0x00038bad) cale_week_scroll_pane_g1_ParamLimits

0x505d,	// (0x00038bd1) cale_week_scroll_pane_g2_ParamLimits

0x5075,	// (0x00038be9) cale_week_scroll_pane_g3_ParamLimits

0x508d,	// (0x00038c01) cale_week_scroll_pane_g4_ParamLimits

0x50a5,	// (0x00038c19) cale_week_scroll_pane_g5_ParamLimits

0x50bd,	// (0x00038c31) cale_week_scroll_pane_g6_ParamLimits

0x50dd,	// (0x00038c51) cale_week_scroll_pane_g7_ParamLimits

0x50fd,	// (0x00038c71) cale_week_scroll_pane_g8_ParamLimits

0x511d,	// (0x00038c91) cale_week_scroll_pane_g9_ParamLimits

0x513a,	// (0x00038cae) cale_week_scroll_pane_g10_ParamLimits

0x5157,	// (0x00038ccb) cale_week_scroll_pane_g11_ParamLimits

0x5176,	// (0x00038cea) cale_week_scroll_pane_g12_ParamLimits

0x519b,	// (0x00038d0f) cale_week_scroll_pane_g13_ParamLimits

0x51c4,	// (0x00038d38) cale_week_scroll_pane_g14_ParamLimits

0x51ed,	// (0x00038d61) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00042cc5) cale_week_scroll_pane_g_ParamLimits

0x5236,	// (0x00038daa) cale_week_time_pane_ParamLimits

0x5256,	// (0x00038dca) grid_cale_week_pane_ParamLimits

0xc704,	// (0x00040278) listscroll_cale_week_pane_t1

0xc716,	// (0x0004028a) scroll_pane_cp08_ParamLimits

0x5d65,	// (0x000398d9) cale_month_corner_pane_ParamLimits

0xcaef,	// (0x00040663) cale_month_pane_t1

0x6227,	// (0x00039d9b) cale_month_week_pane_ParamLimits

0xce4b,	// (0x000409bf) popup_call_status_window_g1_ParamLimits

0x6999,	// (0x0003a50d) popup_call_status_window_g2_ParamLimits

0x69a5,	// (0x0003a519) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00042e44) popup_call_status_window_g_ParamLimits

0xceb2,	// (0x00040a26) aid_call2_pane

0x3b7b,	// (0x000376ef) msg_header_pane_g1

0x716d,	// (0x0003ace1) postcard_address2_pane_ParamLimits

0x716d,	// (0x0003ace1) postcard_address2_pane

0x717b,	// (0x0003acef) postcard_message2_pane_ParamLimits

0x717b,	// (0x0003acef) postcard_message2_pane

0x7a12,	// (0x0003b586) message2_row_pane_ParamLimits

0x7a12,	// (0x0003b586) message2_row_pane

0xe465,	// (0x00041fd9) address2_row_pane_ParamLimits

0xe465,	// (0x00041fd9) address2_row_pane

0xe478,	// (0x00041fec) postcard_message2_row_pane_g1

0xe480,	// (0x00041ff4) postcard_message2_row_pane_t1

0xe478,	// (0x00041fec) address2_row_pane_g1

0xe480,	// (0x00041ff4) address2_row_pane_t1

0x55e4,	// (0x00039158) aid_size_cell_vorec

0x28a1,	// (0x00036415) main_rss_pane

0xe48e,	// (0x00042002) rss_list_single_pane_ParamLimits

0xe48e,	// (0x00042002) rss_list_single_pane

0xe49c,	// (0x00042010) rss_list_single_pane_t1

0xe49c,	// (0x00042010) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x000430f4) rss_list_single_pane_t

0x28a1,	// (0x00036415) main_camera2_pane

0x28a1,	// (0x00036415) main_video2_pane

0x2b77,	// (0x000366eb) cams_zoom_pane_cp2_ParamLimits

0x2b77,	// (0x000366eb) cams_zoom_pane_cp2

0x2b77,	// (0x000366eb) image2_vga_pane_ParamLimits

0x2b77,	// (0x000366eb) image2_vga_pane

0x2b93,	// (0x00036707) main_camera2_pane_g1_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g1

0x2b93,	// (0x00036707) main_camera2_pane_g2_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g2

0x2b93,	// (0x00036707) main_camera2_pane_g3_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g3

0x2b93,	// (0x00036707) main_camera2_pane_g4_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g4

0x2b93,	// (0x00036707) main_camera2_pane_g5_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g5

0x2b93,	// (0x00036707) main_camera2_pane_g6_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g6

0x2b93,	// (0x00036707) main_camera2_pane_g7_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g7

0x2b93,	// (0x00036707) main_camera2_pane_g8_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00043110) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00043110) main_camera2_pane_g

0xc796,	// (0x0004030a) main_camera2_pane_t1_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t1

0xc796,	// (0x0004030a) main_camera2_pane_t2_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t2

0xc796,	// (0x0004030a) main_camera2_pane_t3_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t3

0xc796,	// (0x0004030a) main_camera2_pane_t4_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x00043123) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x00043123) main_camera2_pane_t

0xe43c,	// (0x00041fb0) cams_zoom_pane_cp4_ParamLimits

0xe43c,	// (0x00041fb0) cams_zoom_pane_cp4

0x2b1e,	// (0x00036692) image2_cif_pane_ParamLimits

0x2b1e,	// (0x00036692) image2_cif_pane

0x2b77,	// (0x000366eb) image2_subqcif_pane_ParamLimits

0x2b77,	// (0x000366eb) image2_subqcif_pane

0xe52c,	// (0x000420a0) main_video2_pane_g1_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g1

0xe52c,	// (0x000420a0) main_video2_pane_g2_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g2

0xe52c,	// (0x000420a0) main_video2_pane_g3_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g3

0xe52c,	// (0x000420a0) main_video2_pane_g4_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g4

0xe52c,	// (0x000420a0) main_video2_pane_g5_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g5

0xe52c,	// (0x000420a0) main_video2_pane_g6_ParamLimits

0xe52c,	// (0x000420a0) main_video2_pane_g6

0x0005,

0xf5be,	// (0x00043132) main_video2_pane_g_ParamLimits

0xf5be,	// (0x00043132) main_video2_pane_g

0xe53a,	// (0x000420ae) main_video2_pane_t1_ParamLimits

0xe53a,	// (0x000420ae) main_video2_pane_t1

0xe53a,	// (0x000420ae) main_video2_pane_t2_ParamLimits

0xe53a,	// (0x000420ae) main_video2_pane_t2

0xe53a,	// (0x000420ae) main_video2_pane_t3_ParamLimits

0xe53a,	// (0x000420ae) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x0004313f) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x0004313f) main_video2_pane_t

0x7713,	// (0x0003b287) call_muted_g2

0x0001,

0xf572,	// (0x000430e6) call_muted_g

0x28a1,	// (0x00036415) main_mup2_pane

0x2ba1,	// (0x00036715) main_mup2_pane_g1_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g1

0x2ba1,	// (0x00036715) main_mup2_pane_g2_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g2

0xc7c4,	// (0x00040338) main_mup_pane_g13_cp1

0x244f,	// (0x00035fc3) mup_volume_pane_cp1

0x2ba1,	// (0x00036715) main_mup2_pane_g4_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g4

0x2ba1,	// (0x00036715) main_mup2_pane_g5_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g5

0x2ba1,	// (0x00036715) main_mup2_pane_g6_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g6

0x2ba1,	// (0x00036715) main_mup2_pane_g7_ParamLimits

0x2ba1,	// (0x00036715) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x00043146) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x00043146) main_mup2_pane_g

0x2baf,	// (0x00036723) main_mup2_pane_t1_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t1

0x2baf,	// (0x00036723) main_mup2_pane_t2_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t2

0x2baf,	// (0x00036723) main_mup2_pane_t3_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t3

0x2baf,	// (0x00036723) main_mup2_pane_t4_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t4

0x2baf,	// (0x00036723) main_mup2_pane_t5_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t5

0x2baf,	// (0x00036723) main_mup2_pane_t6_ParamLimits

0x2baf,	// (0x00036723) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x00043155) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x00043155) main_mup2_pane_t

0xd1d0,	// (0x00040d44) mup2_visualizer_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup2_visualizer_pane

0xd1d0,	// (0x00040d44) mup_progress_pane_cp_ParamLimits

0xd1d0,	// (0x00040d44) mup_progress_pane_cp

0xe54e,	// (0x000420c2) mup_volume_pane_cp_ParamLimits

0xe54e,	// (0x000420c2) mup_volume_pane_cp

0x2b85,	// (0x000366f9) mup2_visualizer_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) mup2_visualizer_pane_g1

0x2b93,	// (0x00036707) mup2_visualizer_pane_g2_ParamLimits

0x2b93,	// (0x00036707) mup2_visualizer_pane_g2

0x2b93,	// (0x00036707) mup2_visualizer_pane_g3_ParamLimits

0x2b93,	// (0x00036707) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00042c3e) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00042c3e) mup2_visualizer_pane_g

0xd3f2,	// (0x00040f66) aid_size_cell_fmradio

0x7829,	// (0x0003b39d) aid_height_parent_landcape

0xc924,	// (0x00040498) wml_content_pane_cp

0xc92c,	// (0x000404a0) wml_tabs_pane

0xc935,	// (0x000404a9) popup_wml_miniature_window

0xc93d,	// (0x000404b1) scroll_pane_cp021

0xc951,	// (0x000404c5) wml_content_pane_comp8

0x28a1,	// (0x00036415) bg_popup_sub_pane_cp05

0xe564,	// (0x000420d8) popup_wml_miniature_window_g1

0xe56c,	// (0x000420e0) wml_miniature_view_pane

0x7ba1,	// (0x0003b715) aid_size_wml_view

0x7ba9,	// (0x0003b71d) wml_miniature_view_pane_g1

0x7bb2,	// (0x0003b726) wml_miniature_view_pane_g2

0x7bbb,	// (0x0003b72f) wml_miniature_view_pane_g3

0x7bc3,	// (0x0003b737) wml_miniature_view_pane_g4

0x7bcb,	// (0x0003b73f) wml_miniature_view_pane_g5

0x7bd3,	// (0x0003b747) wml_miniature_view_pane_g6

0x7bdb,	// (0x0003b74f) wml_miniature_view_pane_g7

0x7be3,	// (0x0003b757) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x00043162) wml_miniature_view_pane_g

0xe574,	// (0x000420e8) background_graphic_ParamLimits

0xe574,	// (0x000420e8) background_graphic

0xe580,	// (0x000420f4) wml_tabs_2_pane

0xe589,	// (0x000420fd) wml_tabs_3_pane_ParamLimits

0xe589,	// (0x000420fd) wml_tabs_3_pane

0xe59b,	// (0x0004210f) wml_tabs_4_pane_ParamLimits

0xe59b,	// (0x0004210f) wml_tabs_4_pane

0xe5b1,	// (0x00042125) wml_tabs_5_pane_ParamLimits

0xe5b1,	// (0x00042125) wml_tabs_5_pane

0xe5cb,	// (0x0004213f) wml_tabs_pane_g2_ParamLimits

0xe5cb,	// (0x0004213f) wml_tabs_pane_g2

0xe5e0,	// (0x00042154) wml_tabs_pane_g3_ParamLimits

0xe5e0,	// (0x00042154) wml_tabs_pane_g3

0xe5f5,	// (0x00042169) wml_tabs_2_active_pane_ParamLimits

0xe5f5,	// (0x00042169) wml_tabs_2_active_pane

0xe5f5,	// (0x00042169) wml_tabs_2_passive_pane_ParamLimits

0xe5f5,	// (0x00042169) wml_tabs_2_passive_pane

0x7beb,	// (0x0003b75f) wml_tabs_3_active_pane_cp_ParamLimits

0x7beb,	// (0x0003b75f) wml_tabs_3_active_pane_cp

0x7bfe,	// (0x0003b772) wml_tabs_3_passive_pane_ParamLimits

0x7bfe,	// (0x0003b772) wml_tabs_3_passive_pane

0x7c0f,	// (0x0003b783) wml_tabs_3_passive_pane_cp_ParamLimits

0x7c0f,	// (0x0003b783) wml_tabs_3_passive_pane_cp

0x7c24,	// (0x0003b798) tabs_4_active_pane

0x7c2c,	// (0x0003b7a0) tabs_4_passive_pane

0x7c34,	// (0x0003b7a8) tabs_4_passive_pane_cp

0x7c3c,	// (0x0003b7b0) tabs_4_passive_pane_cp2

0x760f,	// (0x0003b183) aid_height_text

0xd1d0,	// (0x00040d44) mup_volume_cont_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup_volume_cont_pane

0x244f,	// (0x00035fc3) aid_size_cell_pinb

0x244f,	// (0x00035fc3) aid_size_list_pinb

0xd1d0,	// (0x00040d44) mup2_volume_cont_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup2_volume_cont_pane

0x7c46,	// (0x0003b7ba) mup2_volume_cont_pane_g1_ParamLimits

0x7c46,	// (0x0003b7ba) mup2_volume_cont_pane_g1

0x4890,	// (0x00038404) aid_size_cell_touch_ParamLimits

0x4890,	// (0x00038404) aid_size_cell_touch

0x4b3f,	// (0x000386b3) touch_pane_ParamLimits

0x4b3f,	// (0x000386b3) touch_pane

0x244f,	// (0x00035fc3) main_rss2_pane

0xe60c,	// (0x00042180) listscroll_rss2_pane

0xe615,	// (0x00042189) rss2_navigation_pane

0xe61d,	// (0x00042191) list_rss2_pane

0xcfca,	// (0x00040b3e) scroll_pane_cp22

0xe625,	// (0x00042199) rss2_navigation_pane_g1

0xe62e,	// (0x000421a2) rss2_navigation_pane_g2

0xe636,	// (0x000421aa) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x00043173) rss2_navigation_pane_g

0xe63e,	// (0x000421b2) rss2_navigation_pane_t1

0x7c5c,	// (0x0003b7d0) rss2_list_single_pane_ParamLimits

0x7c5c,	// (0x0003b7d0) rss2_list_single_pane

0xe64c,	// (0x000421c0) rss2_list_single_pane_t2

0xe65a,	// (0x000421ce) rss2_list_single_pane_t3_ParamLimits

0xe65a,	// (0x000421ce) rss2_list_single_pane_t3

0xe677,	// (0x000421eb) rss2_list_single_pane_t4

0x6835,	// (0x0003a3a9) smil_status_pane_g1

0x2b1e,	// (0x00036692) main_image2_pane_ParamLimits

0x2b1e,	// (0x00036692) main_image2_pane

0x2b93,	// (0x00036707) main_camera2_pane_g9_ParamLimits

0x2b93,	// (0x00036707) main_camera2_pane_g9

0xc796,	// (0x0004030a) main_camera2_pane_t5_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t5

0x7b8d,	// (0x0003b701) main_camera2_pane_t6_ParamLimits

0x7b8d,	// (0x0003b701) main_camera2_pane_t6

0x7c7f,	// (0x0003b7f3) main_image2_pane_g1_ParamLimits

0x7c7f,	// (0x0003b7f3) main_image2_pane_g1

0x7344,	// (0x0003aeb8) smil2_video_pane_ParamLimits

0x7344,	// (0x0003aeb8) smil2_video_pane

0x3b2e,	// (0x000376a2) aid_zoom_text_primary_cp

0x4ae8,	// (0x0003865c) popup_preview_fixed_window

0xc88d,	// (0x00040401) im_reading_pane_g1

0x7b7f,	// (0x0003b6f3) cams2_bc_adjust_pane_cp_ParamLimits

0x7b7f,	// (0x0003b6f3) cams2_bc_adjust_pane_cp

0x2b77,	// (0x000366eb) cams2_bc_adjust_pane_ParamLimits

0x2b77,	// (0x000366eb) cams2_bc_adjust_pane

0xc7c4,	// (0x00040338) cams2_bc_adjust_pane_g1

0x244f,	// (0x00035fc3) cams2_slider_pane

0xc7c4,	// (0x00040338) cams2_slider_pane_g1

0xc7c4,	// (0x00040338) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x0004317a) cams2_slider_pane_g

0x4bd4,	// (0x00038748) calc_display_pane_ParamLimits

0x4bf2,	// (0x00038766) calc_paper_pane_ParamLimits

0x4c0e,	// (0x00038782) grid_calc_pane_ParamLimits

0x6a03,	// (0x0003a577) popup_clock_digital_window_t1_ParamLimits

0xd38f,	// (0x00040f03) main_image_pane_t1

0x4bba,	// (0x0003872e) aid_size_cell_calc_ParamLimits

0x4bba,	// (0x0003872e) aid_size_cell_calc

0x7863,	// (0x0003b3d7) popup_blid_sat_info2_window_ParamLimits

0x7863,	// (0x0003b3d7) popup_blid_sat_info2_window

0xe685,	// (0x000421f9) aid_size_cell_blid

0xd1d0,	// (0x00040d44) bg_popup_window_pane_cp07

0xe6a2,	// (0x00042216) grid_popup_blid_pane

0xe6ac,	// (0x00042220) heading_pane_cp05_ParamLimits

0xe6ac,	// (0x00042220) heading_pane_cp05

0xe776,	// (0x000422ea) cell_popup_blid_pane_ParamLimits

0xe776,	// (0x000422ea) cell_popup_blid_pane

0xe7a0,	// (0x00042314) cell_popup_blid_pane_g1

0xe7a8,	// (0x0004231c) cell_popup_blid_pane_t1

0xd1d0,	// (0x00040d44) mup2_indicator_pane_ParamLimits

0xd1d0,	// (0x00040d44) mup2_indicator_pane

0x244f,	// (0x00035fc3) mup2_visualizer_osc_pane

0xe54e,	// (0x000420c2) mup2_visualizer_spec_pane_ParamLimits

0xe54e,	// (0x000420c2) mup2_visualizer_spec_pane

0x244f,	// (0x00035fc3) mup2_spec_half_pane

0x244f,	// (0x00035fc3) mup2_spec_half_pane_cp

0xe7b6,	// (0x0004232a) mup2_spec_bar_pane_ParamLimits

0xe7b6,	// (0x0004232a) mup2_spec_bar_pane

0xc7c4,	// (0x00040338) mup2_spec_bar_pane_g1

0xe7d5,	// (0x00042349) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x000431a0) mup2_spec_bar_pane_g

0x244f,	// (0x00035fc3) mup2_osc_middle_pane

0xc7c4,	// (0x00040338) mup2_visualizer_osc_pane_g1

0x2479,	// (0x00035fed) popup_number_entry_window_t1_ParamLimits

0x248c,	// (0x00036000) popup_number_entry_window_t2_ParamLimits

0x249e,	// (0x00036012) popup_number_entry_window_t3_ParamLimits

0x24b0,	// (0x00036024) popup_number_entry_window_t5_ParamLimits

0x24b0,	// (0x00036024) popup_number_entry_window_t5

0xf06b,	// (0x00042bdf) popup_number_entry_window_t_ParamLimits

0x24e5,	// (0x00036059) text_title_cp2_ParamLimits

0x7031,	// (0x0003aba5) aid_hotspot_pointer_text2_pane

0x70cb,	// (0x0003ac3f) main_viewer_pane_g9_ParamLimits

0x70cb,	// (0x0003ac3f) main_viewer_pane_g9

0xcaef,	// (0x00040663) cale_month_pane_t1_ParamLimits

0xcb2c,	// (0x000406a0) bg_cale_pane_ParamLimits

0xcb44,	// (0x000406b8) list_cale_pane_ParamLimits

0xcb55,	// (0x000406c9) listscroll_cale_day_pane_t1

0xcb67,	// (0x000406db) scroll_pane_cp09_ParamLimits

0x6d9e,	// (0x0003a912) main_mup_eq_pane_t1_ParamLimits

0x6d9e,	// (0x0003a912) main_mup_eq_pane_t1

0x6dba,	// (0x0003a92e) main_mup_eq_pane_t2_ParamLimits

0x6dba,	// (0x0003a92e) main_mup_eq_pane_t2

0x6dd6,	// (0x0003a94a) main_mup_eq_pane_t3_ParamLimits

0x6dd6,	// (0x0003a94a) main_mup_eq_pane_t3

0x6df0,	// (0x0003a964) main_mup_eq_pane_t4_ParamLimits

0x6df0,	// (0x0003a964) main_mup_eq_pane_t4

0x6e0a,	// (0x0003a97e) main_mup_eq_pane_t5_ParamLimits

0x6e0a,	// (0x0003a97e) main_mup_eq_pane_t5

0x6e24,	// (0x0003a998) main_mup_eq_pane_t6_ParamLimits

0x6e24,	// (0x0003a998) main_mup_eq_pane_t6

0x6e3a,	// (0x0003a9ae) main_mup_eq_pane_t7_ParamLimits

0x6e3a,	// (0x0003a9ae) main_mup_eq_pane_t7

0x6e50,	// (0x0003a9c4) main_mup_eq_pane_t8_ParamLimits

0x6e50,	// (0x0003a9c4) main_mup_eq_pane_t8

0x6e66,	// (0x0003a9da) main_mup_eq_pane_t9_ParamLimits

0x6e66,	// (0x0003a9da) main_mup_eq_pane_t9

0x6e82,	// (0x0003a9f6) main_mup_eq_pane_t10_ParamLimits

0x6e82,	// (0x0003a9f6) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00042f43) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00042f43) main_mup_eq_pane_t

0x6f47,	// (0x0003aabb) mup_equalizer_pane_cp5_ParamLimits

0x6f5f,	// (0x0003aad3) mup_equalizer_pane_cp6_ParamLimits

0x6f77,	// (0x0003aaeb) mup_equalizer_pane_cp7_ParamLimits

0x244f,	// (0x00035fc3) main_gallery_pane

0xe4ca,	// (0x0004203e) smil2_volume_pane

0xe4d2,	// (0x00042046) smil_status_volume_pane_g1_ParamLimits

0xe4e5,	// (0x00042059) smil_status_volume_pane_g2_ParamLimits

0x7a2c,	// (0x0003b5a0) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x000430f9) smil_status_volume_pane_g_ParamLimits

0xd1d0,	// (0x00040d44) bg_popup_window_pane_cp07_ParamLimits

0xe68d,	// (0x00042201) blid_firmament_pane

0x2b77,	// (0x000366eb) aid_size_cell_gallery_ParamLimits

0x2b77,	// (0x000366eb) aid_size_cell_gallery

0x2b77,	// (0x000366eb) grid_gallery_pane_ParamLimits

0x2b77,	// (0x000366eb) grid_gallery_pane

0xe43c,	// (0x00041fb0) cell_gallery_pane_ParamLimits

0xe43c,	// (0x00041fb0) cell_gallery_pane

0x2b1e,	// (0x00036692) bg_cell_gallery_focus_pane_ParamLimits

0x2b1e,	// (0x00036692) bg_cell_gallery_focus_pane

0x2b85,	// (0x000366f9) cell_gallery_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) cell_gallery_pane_g1

0x2b85,	// (0x000366f9) cell_gallery_pane_g2_ParamLimits

0x2b85,	// (0x000366f9) cell_gallery_pane_g2

0x2b85,	// (0x000366f9) cell_gallery_pane_g3_ParamLimits

0x2b85,	// (0x000366f9) cell_gallery_pane_g3

0x2b93,	// (0x00036707) cell_gallery_pane_g4_ParamLimits

0x2b93,	// (0x00036707) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x000431a5) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x000431a5) cell_gallery_pane_g

0xe7df,	// (0x00042353) bg_cell_gallery_focus_pane_g1

0xe7e7,	// (0x0004235b) bg_cell_gallery_focus_pane_g2

0xe7ef,	// (0x00042363) bg_cell_gallery_focus_pane_g3

0xe7f7,	// (0x0004236b) bg_cell_gallery_focus_pane_g4

0xe7ff,	// (0x00042373) bg_cell_gallery_focus_pane_g5

0xe807,	// (0x0004237b) bg_cell_gallery_focus_pane_g6

0xe80f,	// (0x00042383) bg_cell_gallery_focus_pane_g7

0xe817,	// (0x0004238b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x000431ae) bg_cell_gallery_focus_pane_g

0xe81f,	// (0x00042393) aid_firma_cardinal

0xe84d,	// (0x000423c1) blid_firmament_pane_t1

0xe864,	// (0x000423d8) blid_firmament_pane_t2

0xe87b,	// (0x000423ef) blid_firmament_pane_t3

0xe892,	// (0x00042406) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x000431bf) blid_firmament_pane_t

0xe8a9,	// (0x0004241d) blid_sat_info_pane

0xc7c4,	// (0x00040338) blid_sat_info_pane_g1

0xc7c4,	// (0x00040338) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) blid_sat_info_pane_g

0xe8b9,	// (0x0004242d) blid_sat_info_pane_t1

0xe8c7,	// (0x0004243b) smil2_volume_content_pane

0xe8d0,	// (0x00042444) smil2_volume_pane_g1

0x2c6e,	// (0x000367e2) smil2_volume_content_pane_g1

0xe8d8,	// (0x0004244c) smil2_volume_content_pane_g2

0xe8e1,	// (0x00042455) smil2_volume_content_pane_g3

0xe8ea,	// (0x0004245e) smil2_volume_content_pane_g4

0xe8f3,	// (0x00042467) smil2_volume_content_pane_g5

0xe8fc,	// (0x00042470) smil2_volume_content_pane_g6

0xe905,	// (0x00042479) smil2_volume_content_pane_g7

0xe90e,	// (0x00042482) smil2_volume_content_pane_g8

0xe917,	// (0x0004248b) smil2_volume_content_pane_g9

0xe920,	// (0x00042494) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x000431c8) smil2_volume_content_pane_g

0x5317,	// (0x00038e8b) cale_week_day_heading_pane_t1_ParamLimits

0x533f,	// (0x00038eb3) cale_week_day_heading_pane_t2_ParamLimits

0x536c,	// (0x00038ee0) cale_week_day_heading_pane_t3_ParamLimits

0x5399,	// (0x00038f0d) cale_week_day_heading_pane_t4_ParamLimits

0x53c6,	// (0x00038f3a) cale_week_day_heading_pane_t5_ParamLimits

0x53f3,	// (0x00038f67) cale_week_day_heading_pane_t6_ParamLimits

0x5420,	// (0x00038f94) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00042ce6) cale_week_day_heading_pane_t_ParamLimits

0xc733,	// (0x000402a7) bg_cale_side_pane_ParamLimits

0x5448,	// (0x00038fbc) cale_week_time_pane_t1_ParamLimits

0x546c,	// (0x00038fe0) cale_week_time_pane_t2_ParamLimits

0x5490,	// (0x00039004) cale_week_time_pane_t3_ParamLimits

0x54b4,	// (0x00039028) cale_week_time_pane_t4_ParamLimits

0x54d8,	// (0x0003904c) cale_week_time_pane_t5_ParamLimits

0x54fe,	// (0x00039072) cale_week_time_pane_t6_ParamLimits

0x5526,	// (0x0003909a) cale_week_time_pane_t7_ParamLimits

0x5552,	// (0x000390c6) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00042cf5) cale_week_time_pane_t_ParamLimits

0x5582,	// (0x000390f6) cell_cale_week_pane_g2_ParamLimits

0xc733,	// (0x000402a7) bg_cale_side_pane_cp01_ParamLimits

0x6620,	// (0x0003a194) cale_month_week_pane_t1_ParamLimits

0x6639,	// (0x0003a1ad) cale_month_week_pane_t2_ParamLimits

0x6652,	// (0x0003a1c6) cale_month_week_pane_t3_ParamLimits

0x666b,	// (0x0003a1df) cale_month_week_pane_t4_ParamLimits

0x6684,	// (0x0003a1f8) cale_month_week_pane_t5_ParamLimits

0x66a1,	// (0x0003a215) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00042dc3) cale_month_week_pane_t_ParamLimits

0x67f2,	// (0x0003a366) cell_cale_month_pane_g1_ParamLimits

0x244f,	// (0x00035fc3) main_cale_event_viewer_pane

0x244f,	// (0x00035fc3) listscroll_cale_event_viewer_pane

0xe929,	// (0x0004249d) list_cale_ev_pane

0xe931,	// (0x000424a5) scroll_pane_cp023

0x7c8b,	// (0x0003b7ff) field_cale_ev_pane_ParamLimits

0x7c8b,	// (0x0003b7ff) field_cale_ev_pane

0xe93d,	// (0x000424b1) field_cale_ev_content_pane_ParamLimits

0xe93d,	// (0x000424b1) field_cale_ev_content_pane

0xe949,	// (0x000424bd) field_cale_ev_pane_g1_ParamLimits

0xe949,	// (0x000424bd) field_cale_ev_pane_g1

0xe955,	// (0x000424c9) field_cale_ev_pane_g2_ParamLimits

0xe955,	// (0x000424c9) field_cale_ev_pane_g2

0xe96d,	// (0x000424e1) field_cale_ev_pane_g3_ParamLimits

0xe96d,	// (0x000424e1) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x000431dd) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x000431dd) field_cale_ev_pane_g

0xe985,	// (0x000424f9) field_cale_ev_pane_t1_ParamLimits

0xe985,	// (0x000424f9) field_cale_ev_pane_t1

0x7caf,	// (0x0003b823) field_cale_ev_content_pane_t1_ParamLimits

0x7caf,	// (0x0003b823) field_cale_ev_content_pane_t1

0xd275,	// (0x00040de9) bg_button_pane_cp01

0x4f75,	// (0x00038ae9) listscroll_cale_week_pane_ParamLimits

0xc6fb,	// (0x0004026f) popup_toolbar_window_cp01

0xc704,	// (0x00040278) listscroll_cale_week_pane_t1_ParamLimits

0x4f75,	// (0x00038ae9) listscroll_cale_day_pane_ParamLimits

0xc6fb,	// (0x0004026f) popup_toolbar_window_cp02

0xcb55,	// (0x000406c9) listscroll_cale_day_pane_t1_ParamLimits

0x4f75,	// (0x00038ae9) main_cale_month_pane_ParamLimits

0x7982,	// (0x0003b4f6) popup_toolbar_window_cp03_ParamLimits

0x7982,	// (0x0003b4f6) popup_toolbar_window_cp03

0x7254,	// (0x0003adc8) main_image_pane_g2_ParamLimits

0x7254,	// (0x0003adc8) main_image_pane_g2

0x7260,	// (0x0003add4) main_image_pane_g3_ParamLimits

0x7260,	// (0x0003add4) main_image_pane_g3

0x0002,

0xf461,	// (0x00042fd5) main_image_pane_g_ParamLimits

0xf461,	// (0x00042fd5) main_image_pane_g

0xd38f,	// (0x00040f03) main_image_pane_t1_ParamLimits

0x726c,	// (0x0003ade0) main_image_pane_t2_ParamLimits

0x726c,	// (0x0003ade0) main_image_pane_t2

0x727e,	// (0x0003adf2) main_image_pane_t3_ParamLimits

0x727e,	// (0x0003adf2) main_image_pane_t3

0x7290,	// (0x0003ae04) main_image_pane_t4_ParamLimits

0x7290,	// (0x0003ae04) main_image_pane_t4

0x0003,

0xf468,	// (0x00042fdc) main_image_pane_t_ParamLimits

0xf468,	// (0x00042fdc) main_image_pane_t

0x72a2,	// (0x0003ae16) popup_image_details_window_cp01

0x72ac,	// (0x0003ae20) popup_toobar_trans_pane_cp01_ParamLimits

0x72ac,	// (0x0003ae20) popup_toobar_trans_pane_cp01

0x78c4,	// (0x0003b438) popup_image_details_window_ParamLimits

0x78c4,	// (0x0003b438) popup_image_details_window

0x78d2,	// (0x0003b446) popup_image_focus_window

0x2b77,	// (0x000366eb) camera2_autofocus_pane_ParamLimits

0x2b77,	// (0x000366eb) camera2_autofocus_pane

0x244f,	// (0x00035fc3) bg_popup_sub_pane_cp06

0xe99c,	// (0x00042510) popup_image_focus_window_g1

0xe9e0,	// (0x00042554) popup_image_focus_window_g2

0xe9e8,	// (0x0004255c) popup_image_focus_window_g3

0xe9f0,	// (0x00042564) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x000431e4) popup_image_focus_window_g

0xe9f8,	// (0x0004256c) popup_image_focus_window_t1

0xea06,	// (0x0004257a) popup_image_focus_window_t2

0xea16,	// (0x0004258a) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x000431ed) popup_image_focus_window_t

0x2b85,	// (0x000366f9) camera2_autofocus_pane_g1

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp01

0xea24,	// (0x00042598) popup_image_details_window_g1

0xea37,	// (0x000425ab) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x000431ff) popup_image_details_window_g

0xea60,	// (0x000425d4) popup_image_details_window_t1

0xea72,	// (0x000425e6) popup_image_details_window_t2

0xea8b,	// (0x000425ff) popup_image_details_window_t3

0xea9f,	// (0x00042613) popup_image_details_window_t4

0xeaba,	// (0x0004262e) popup_image_details_window_t5

0x0004,

0xf692,	// (0x00043206) popup_image_details_window_t

0x2be3,	// (0x00036757) bg_calc_paper_pane_ParamLimits

0x244f,	// (0x00035fc3) grid_highlight_pane_cp013

0x4d29,	// (0x0003889d) list_calc_pane_ParamLimits

0x4d3b,	// (0x000388af) scroll_pane_cp024

0x2bf7,	// (0x0003676b) bg_calc_display_pane_ParamLimits

0x4d43,	// (0x000388b7) calc_display_pane_t1_ParamLimits

0x4d58,	// (0x000388cc) calc_display_pane_t2_ParamLimits

0x4d6d,	// (0x000388e1) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00042c66) calc_display_pane_t_ParamLimits

0x4e3d,	// (0x000389b1) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00042c83) cell_calc_pane_g

0x4e46,	// (0x000389ba) cell_calc_pane_t1

0x2c4c,	// (0x000367c0) grid_highlight_pane_cp02_ParamLimits

0x2c62,	// (0x000367d6) toolbar_button_pane_cp01_ParamLimits

0x2c62,	// (0x000367d6) toolbar_button_pane_cp01

0xd3d4,	// (0x00040f48) temp_image_control_pane_ParamLimits

0xd3d4,	// (0x00040f48) temp_image_control_pane

0x2b1e,	// (0x00036692) main_mp3_pane

0xead4,	// (0x00042648) temp_image_control_pane_g1_ParamLimits

0xead4,	// (0x00042648) temp_image_control_pane_g1

0xeae2,	// (0x00042656) temp_image_control_pane_g2_ParamLimits

0xeae2,	// (0x00042656) temp_image_control_pane_g2

0xeaf4,	// (0x00042668) temp_image_control_pane_g3_ParamLimits

0xeaf4,	// (0x00042668) temp_image_control_pane_g3

0x7cca,	// (0x0003b83e) temp_image_control_pane_g4_ParamLimits

0x7cca,	// (0x0003b83e) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x00043211) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x00043211) temp_image_control_pane_g

0xead4,	// (0x00042648) main_mp3_pane_g1

0x7cdb,	// (0x0003b84f) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x0004321a) main_mp3_pane_g

0xeb29,	// (0x0004269d) main_mp3_pane_t1

0x2b93,	// (0x00036707) main_camera_pane_g8_ParamLimits

0x2b93,	// (0x00036707) main_camera_pane_g8

0x572e,	// (0x000392a2) main_video_pane_g7_ParamLimits

0x572e,	// (0x000392a2) main_video_pane_g7

0xc796,	// (0x0004030a) main_camera2_pane_t7_ParamLimits

0xc796,	// (0x0004030a) main_camera2_pane_t7

0xc8e4,	// (0x00040458) scroll_pane_cp025_ParamLimits

0xc8e4,	// (0x00040458) scroll_pane_cp025

0xc8f8,	// (0x0004046c) scroll_pane_cp026_ParamLimits

0xc8f8,	// (0x0004046c) scroll_pane_cp026

0xc907,	// (0x0004047b) wml_content_pane_ParamLimits

0x244f,	// (0x00035fc3) main_touch_calib_pane

0x7d7f,	// (0x0003b8f3) main_touch_calib_pane_g1

0x7d8b,	// (0x0003b8ff) main_touch_calib_pane_g2

0x7d97,	// (0x0003b90b) main_touch_calib_pane_g3

0x7da3,	// (0x0003b917) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x00043238) main_touch_calib_pane_g

0x7daf,	// (0x0003b923) main_touch_calib_pane_t1

0x7dc6,	// (0x0003b93a) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x00043241) main_touch_calib_pane_t

0xd05a,	// (0x00040bce) mup_progress_pane_cp02

0xd079,	// (0x00040bed) navi_pane_g1

0xd0db,	// (0x00040c4f) navi_pane_mp_t3

0x2b1e,	// (0x00036692) main_mp3_pane_ParamLimits

0x79c3,	// (0x0003b537) navi_pane_ParamLimits

0xead4,	// (0x00042648) main_mp3_pane_g1_ParamLimits

0x7cdb,	// (0x0003b84f) main_mp3_pane_g2_ParamLimits

0x7ce7,	// (0x0003b85b) main_mp3_pane_g3_ParamLimits

0x7ce7,	// (0x0003b85b) main_mp3_pane_g3

0x7cf3,	// (0x0003b867) main_mp3_pane_g4_ParamLimits

0x7cf3,	// (0x0003b867) main_mp3_pane_g4

0x2b85,	// (0x000366f9) main_mp3_pane_g5_ParamLimits

0x2b85,	// (0x000366f9) main_mp3_pane_g5

0xeb04,	// (0x00042678) main_mp3_pane_g6_ParamLimits

0xeb04,	// (0x00042678) main_mp3_pane_g6

0xeb11,	// (0x00042685) main_mp3_pane_g7_ParamLimits

0xeb11,	// (0x00042685) main_mp3_pane_g7

0xeb1d,	// (0x00042691) main_mp3_pane_g8_ParamLimits

0xeb1d,	// (0x00042691) main_mp3_pane_g8

0xf6a6,	// (0x0004321a) main_mp3_pane_g_ParamLimits

0x7cff,	// (0x0003b873) main_mp3_pane_t2

0x7d0f,	// (0x0003b883) main_mp3_pane_t3

0xeb37,	// (0x000426ab) main_mp3_pane_t4

0xeb45,	// (0x000426b9) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x0004322b) main_mp3_pane_t

0xeb53,	// (0x000426c7) mup_progress_pane_cp01

0x3b2e,	// (0x000376a2) aid_zoom_text_secondary2

0xe929,	// (0x0004249d) list_cale_ev2_pane

0xe931,	// (0x000424a5) scroll_pane_cp023_ParamLimits

0x7e21,	// (0x0003b995) field_cale_ev2_pane_ParamLimits

0x7e21,	// (0x0003b995) field_cale_ev2_pane

0x3bf5,	// (0x00037769) field_cale_ev2_pane_g1_ParamLimits

0x3bf5,	// (0x00037769) field_cale_ev2_pane_g1

0x3c01,	// (0x00037775) field_cale_ev2_pane_g2_ParamLimits

0x3c01,	// (0x00037775) field_cale_ev2_pane_g2

0x3c19,	// (0x0003778d) field_cale_ev2_pane_g3_ParamLimits

0x3c19,	// (0x0003778d) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x0004324c) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x0004324c) field_cale_ev2_pane_g

0x3c3d,	// (0x000377b1) field_cale_ev2_pane_t1_ParamLimits

0x3c3d,	// (0x000377b1) field_cale_ev2_pane_t1

0x3c54,	// (0x000377c8) field_cale_ev2_pane_t2_ParamLimits

0x3c54,	// (0x000377c8) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x00043255) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x00043255) field_cale_ev2_pane_t

0x7133,	// (0x0003aca7) main_postcard_pane_g5_ParamLimits

0x7133,	// (0x0003aca7) main_postcard_pane_g5

0x7141,	// (0x0003acb5) main_postcard_pane_g6_ParamLimits

0x7141,	// (0x0003acb5) main_postcard_pane_g6

0x2b77,	// (0x000366eb) camera2_autofocus_pane_cp_ParamLimits

0x2b77,	// (0x000366eb) camera2_autofocus_pane_cp

0x2b1e,	// (0x00036692) main_mup3_pane

0x7e7f,	// (0x0003b9f3) main_mup3_pane_g1_ParamLimits

0x7e7f,	// (0x0003b9f3) main_mup3_pane_g1

0x7ea0,	// (0x0003ba14) main_mup3_pane_g2_ParamLimits

0x7ea0,	// (0x0003ba14) main_mup3_pane_g2

0x7f14,	// (0x0003ba88) main_mup3_pane_g3_ParamLimits

0x7f14,	// (0x0003ba88) main_mup3_pane_g3

0x7f79,	// (0x0003baed) main_mup3_pane_g4_ParamLimits

0x7f79,	// (0x0003baed) main_mup3_pane_g4

0x7fde,	// (0x0003bb52) main_mup3_pane_g5_ParamLimits

0x7fde,	// (0x0003bb52) main_mup3_pane_g5

0x8043,	// (0x0003bbb7) main_mup3_pane_g6_ParamLimits

0x8043,	// (0x0003bbb7) main_mup3_pane_g6

0x2b93,	// (0x00036707) main_mup3_pane_g7_ParamLimits

0x2b93,	// (0x00036707) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x00043265) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x00043265) main_mup3_pane_g

0x80bd,	// (0x0003bc31) main_mup3_pane_t1_ParamLimits

0x80bd,	// (0x0003bc31) main_mup3_pane_t1

0x8128,	// (0x0003bc9c) main_mup3_pane_t2_ParamLimits

0x8128,	// (0x0003bc9c) main_mup3_pane_t2

0x81f1,	// (0x0003bd65) main_mup3_pane_t4_ParamLimits

0x81f1,	// (0x0003bd65) main_mup3_pane_t4

0x8245,	// (0x0003bdb9) main_mup3_pane_t5_ParamLimits

0x8245,	// (0x0003bdb9) main_mup3_pane_t5

0x82fd,	// (0x0003be71) main_mup3_pane_t6_ParamLimits

0x82fd,	// (0x0003be71) main_mup3_pane_t6

0x0005,

0xf702,	// (0x00043276) main_mup3_pane_t_ParamLimits

0xf702,	// (0x00043276) main_mup3_pane_t

0x83a7,	// (0x0003bf1b) mup3_progress_pane_ParamLimits

0x83a7,	// (0x0003bf1b) mup3_progress_pane

0x8425,	// (0x0003bf99) popup_mup3_control_window_ParamLimits

0x8425,	// (0x0003bf99) popup_mup3_control_window

0xeb5b,	// (0x000426cf) popup_mup3_text_window

0x8442,	// (0x0003bfb6) mup3_progress_pane_t1

0x8460,	// (0x0003bfd4) mup3_progress_pane_t2

0xeb63,	// (0x000426d7) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x00043283) mup3_progress_pane_t

0xeb80,	// (0x000426f4) mup_progress_pane_cp03

0x244f,	// (0x00035fc3) bg_tb_trans_pane_cp04

0x847e,	// (0x0003bff2) mup3_volume_pane

0x8486,	// (0x0003bffa) popup_mup3_control_window_g1

0x0b0d,	// (0x00034681) mup3_volume_pane_g1

0x0b16,	// (0x0003468a) mup3_volume_pane_g2

0x0b1f,	// (0x00034693) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x0004328a) mup3_volume_pane_g

0x244f,	// (0x00035fc3) bg_tb_trans_pane_cp03

0xeb90,	// (0x00042704) popup_mup3_text_window_g1

0xeb98,	// (0x0004270c) popup_mup3_text_window_t1

0x2c3f,	// (0x000367b3) list_calc_item_pane_g1_ParamLimits

0xe603,	// (0x00042177) mup_volume_pane_cp_g1

0x7ddf,	// (0x0003b953) main_touch_calib_pane_t3

0x7df5,	// (0x0003b969) main_touch_calib_pane_t4

0x7e0b,	// (0x0003b97f) main_touch_calib_pane_t5

0x487c,	// (0x000383f0) aid_cell_size_toolbar2

0x4884,	// (0x000383f8) aid_popup3_width_pane

0x3b26,	// (0x0003769a) aid_zoom_text_msg_primary

0x562e,	// (0x000391a2) vorec_t7

0x2c03,	// (0x00036777) bg_calc_paper_pane_g1_ParamLimits

0x2c1b,	// (0x0003678f) bg_calc_paper_pane_g2_ParamLimits

0x2c0f,	// (0x00036783) bg_calc_paper_pane_g3_ParamLimits

0x2c33,	// (0x000367a7) bg_calc_paper_pane_g4_ParamLimits

0x2c27,	// (0x0003679b) bg_calc_paper_pane_g5_ParamLimits

0x4dae,	// (0x00038922) bg_calc_paper_pane_g6_ParamLimits

0x4dbf,	// (0x00038933) bg_calc_paper_pane_g7_ParamLimits

0x4dd0,	// (0x00038944) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00042c6d) bg_calc_paper_pane_g_ParamLimits

0x4de1,	// (0x00038955) calc_bg_paper_pane_g9_ParamLimits

0x2b77,	// (0x000366eb) image_qvga_pane_ParamLimits

0x2b77,	// (0x000366eb) image_qvga_pane

0x2afc,	// (0x00036670) bg_popup_sub_pane_cp04_ParamLimits

0xd30b,	// (0x00040e7f) popup_mup_playback_window_g1_ParamLimits

0xd317,	// (0x00040e8b) popup_mup_playback_window_t1_ParamLimits

0xd32c,	// (0x00040ea0) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00042fd0) popup_mup_playback_window_t_ParamLimits

0x2b85,	// (0x000366f9) main_mup2_pane_g3_ParamLimits

0x2b85,	// (0x000366f9) main_mup2_pane_g3

0x5907,	// (0x0003947b) popup_toolbar_window_cp04

0xd727,	// (0x0004129b) popup_call2_audio_second_window_g3_ParamLimits

0xd727,	// (0x0004129b) popup_call2_audio_second_window_g3

0xdb31,	// (0x000416a5) popup_call2_audio_first_window_g4_ParamLimits

0xdb31,	// (0x000416a5) popup_call2_audio_first_window_g4

0xe158,	// (0x00041ccc) popup_call2_audio_in_window_g4_ParamLimits

0xe158,	// (0x00041ccc) popup_call2_audio_in_window_g4

0x7247,	// (0x0003adbb) aid_area_sk_bg_cut_ParamLimits

0x7247,	// (0x0003adbb) aid_area_sk_bg_cut

0xd341,	// (0x00040eb5) aid_area_sk_bg_cut_2_ParamLimits

0xd341,	// (0x00040eb5) aid_area_sk_bg_cut_2

0x244f,	// (0x00035fc3) aid_placing_details_win

0x244f,	// (0x00035fc3) aid_placing_details_win_2

0x2b85,	// (0x000366f9) camera2_autofocus_pane_g1_ParamLimits

0x4ad9,	// (0x0003864d) popup_fixed_preview_cale_window_ParamLimits

0x4ad9,	// (0x0003864d) popup_fixed_preview_cale_window

0xd122,	// (0x00040c96) navi_slider_pane_g3

0xd12b,	// (0x00040c9f) navi_slider_pane_g4

0xd134,	// (0x00040ca8) navi_slider_pane_g5

0xd122,	// (0x00040c96) navi_slider_pane_g6

0x6d72,	// (0x0003a8e6) navi_slider_pane_g7

0xd242,	// (0x00040db6) mup_scale_pane_g3

0xd24b,	// (0x00040dbf) mup_scale_pane_g4

0xd254,	// (0x00040dc8) mup_scale_pane_g5

0x6f8f,	// (0x0003ab03) mup_scale_pane_g6

0x6f98,	// (0x0003ab0c) mup_scale_pane_g7

0xc7c4,	// (0x00040338) cams2_slider_pane_g3

0xc7c4,	// (0x00040338) cams2_slider_pane_g4

0xc7c4,	// (0x00040338) cams2_slider_pane_g5

0xc7c4,	// (0x00040338) cams2_slider_pane_g6

0xc7c4,	// (0x00040338) cams2_slider_pane_g7

0xc7c4,	// (0x00040338) camera2_autofocus_pane_cp_g1

0xe430,	// (0x00041fa4) bg_popup_preview_window_pane_cp02_ParamLimits

0xe430,	// (0x00041fa4) bg_popup_preview_window_pane_cp02

0xeba6,	// (0x0004271a) list_fp_cale_pane_ParamLimits

0xeba6,	// (0x0004271a) list_fp_cale_pane

0xebb2,	// (0x00042726) popup_fixed_preview_cale_window_t1_ParamLimits

0xebb2,	// (0x00042726) popup_fixed_preview_cale_window_t1

0x848f,	// (0x0003c003) popup_fixed_preview_cale_window_t2_ParamLimits

0x848f,	// (0x0003c003) popup_fixed_preview_cale_window_t2

0x84a4,	// (0x0003c018) popup_fixed_preview_cale_window_t3_ParamLimits

0x84a4,	// (0x0003c018) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x00043291) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x00043291) popup_fixed_preview_cale_window_t

0x84b9,	// (0x0003c02d) list_single_fp_cale_pane_ParamLimits

0x84b9,	// (0x0003c02d) list_single_fp_cale_pane

0xebd0,	// (0x00042744) list_single_fp_cale_pane_g1_ParamLimits

0xebd0,	// (0x00042744) list_single_fp_cale_pane_g1

0xebdc,	// (0x00042750) list_single_fp_cale_pane_g2_ParamLimits

0xebdc,	// (0x00042750) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x00043298) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x00043298) list_single_fp_cale_pane_g

0xebf5,	// (0x00042769) list_single_fp_cale_pane_t1_ParamLimits

0xebf5,	// (0x00042769) list_single_fp_cale_pane_t1

0xec07,	// (0x0004277b) list_single_fp_cale_pane_t2_ParamLimits

0xec07,	// (0x0004277b) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x0004329f) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x0004329f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x244f,	// (0x00035fc3) main_dialer_pane

0x244f,	// (0x00035fc3) aid_cell_size_keypad

0x244f,	// (0x00035fc3) dialer_ne_pane

0x244f,	// (0x00035fc3) grid_dialer_command_1_pane

0x244f,	// (0x00035fc3) grid_dialer_command_2_pane

0x244f,	// (0x00035fc3) grid_dialer_keypad_pane

0xd1d0,	// (0x00040d44) bg_popup_call_pane_cp06_ParamLimits

0xd1d0,	// (0x00040d44) bg_popup_call_pane_cp06

0xd1d0,	// (0x00040d44) dialer_ne_clear_pane_ParamLimits

0xd1d0,	// (0x00040d44) dialer_ne_clear_pane

0xc7c4,	// (0x00040338) dialer_ne_pane_g1

0xc796,	// (0x0004030a) dialer_ne_pane_t1_ParamLimits

0xc796,	// (0x0004030a) dialer_ne_pane_t1

0xed36,	// (0x000428aa) dialer_ne_pane_t2_ParamLimits

0xed36,	// (0x000428aa) dialer_ne_pane_t2

0x84c9,	// (0x0003c03d) dialer_ne_pane_t3_ParamLimits

0x84c9,	// (0x0003c03d) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x000432a4) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x000432a4) dialer_ne_pane_t

0x84c9,	// (0x0003c03d) dialer_ne_pane_t3_copy1_ParamLimits

0x84c9,	// (0x0003c03d) dialer_ne_pane_t3_copy1

0xec3a,	// (0x000427ae) cell_dialer_keypad_pane_ParamLimits

0xec3a,	// (0x000427ae) cell_dialer_keypad_pane

0x2b1e,	// (0x00036692) cell_dialer_command_1_pane_ParamLimits

0x2b1e,	// (0x00036692) cell_dialer_command_1_pane

0xec51,	// (0x000427c5) cell_dialer_command_2_pane_ParamLimits

0xec51,	// (0x000427c5) cell_dialer_command_2_pane

0x2b1e,	// (0x00036692) bg_button_pane_cp02_ParamLimits

0x2b1e,	// (0x00036692) bg_button_pane_cp02

0x2b85,	// (0x000366f9) cell_dialer_keypad_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) cell_dialer_keypad_pane_g1

0x2b1e,	// (0x00036692) bg_button_pane_cp03_ParamLimits

0x2b1e,	// (0x00036692) bg_button_pane_cp03

0x2b85,	// (0x000366f9) cell_dialer_command_1_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) cell_dialer_command_1_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp04

0xc7c4,	// (0x00040338) cell_dialer_command_2_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp06

0xc7c4,	// (0x00040338) dialer_ne_clear_pane_g1

0x6cad,	// (0x0003a821) navi_pane_g2

0x6cdb,	// (0x0003a84f) navi_pane_g3

0x0002,

0xf35f,	// (0x00042ed3) navi_pane_g

0x6d06,	// (0x0003a87a) navi_pane_mv_g2

0x6d2d,	// (0x0003a8a1) navi_pane_mv_g5

0x6d35,	// (0x0003a8a9) navi_pane_mv_t1

0x2bf7,	// (0x0003676b) main_clock2_pane

0x2b77,	// (0x000366eb) main_clock2_list_pane_ParamLimits

0x2b77,	// (0x000366eb) main_clock2_list_pane

0x853e,	// (0x0003c0b2) main_clock2_pane_t1_ParamLimits

0x853e,	// (0x0003c0b2) main_clock2_pane_t1

0x856c,	// (0x0003c0e0) main_clock2_pane_t2_ParamLimits

0x856c,	// (0x0003c0e0) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x000432b0) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x000432b0) main_clock2_pane_t

0x85d1,	// (0x0003c145) popup_clock_analogue_window_cp03_ParamLimits

0x85d1,	// (0x0003c145) popup_clock_analogue_window_cp03

0x85ef,	// (0x0003c163) popup_clock_digital_window_cp02_ParamLimits

0x85ef,	// (0x0003c163) popup_clock_digital_window_cp02

0x8664,	// (0x0003c1d8) main_clock2_list_single_pane_ParamLimits

0x8664,	// (0x0003c1d8) main_clock2_list_single_pane

0xc78e,	// (0x00040302) list_highlight_pane_cp05

0xec92,	// (0x00042806) main_clock2_list_single_pane_t1

0x5907,	// (0x0003947b) popup_toolbar_window_cp04_ParamLimits

0x2b93,	// (0x00036707) camera2_autofocus_pane_g2_ParamLimits

0x2b93,	// (0x00036707) camera2_autofocus_pane_g2

0x2b93,	// (0x00036707) camera2_autofocus_pane_g3_ParamLimits

0x2b93,	// (0x00036707) camera2_autofocus_pane_g3

0x2b93,	// (0x00036707) camera2_autofocus_pane_g4_ParamLimits

0x2b93,	// (0x00036707) camera2_autofocus_pane_g4

0x2b93,	// (0x00036707) camera2_autofocus_pane_g5_ParamLimits

0x2b93,	// (0x00036707) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x000431f4) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x000431f4) camera2_autofocus_pane_g

0x7e3c,	// (0x0003b9b0) camera2_autofocus_pane_cp_g2

0x7e44,	// (0x0003b9b8) camera2_autofocus_pane_cp_g3

0x7e4c,	// (0x0003b9c0) camera2_autofocus_pane_cp_g4

0x7e54,	// (0x0003b9c8) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x0004325a) camera2_autofocus_pane_cp_g

0x244f,	// (0x00035fc3) popup_dialer_spcha_window

0x244f,	// (0x00035fc3) bg_popup_sub_pane_cp07

0x244f,	// (0x00035fc3) list_spcha_pane

0xeca0,	// (0x00042814) list_single_spcha_pane_ParamLimits

0xeca0,	// (0x00042814) list_single_spcha_pane

0x244f,	// (0x00035fc3) list_highlight_pane_cp06

0xcd2d,	// (0x000408a1) list_single_spcha_pane_t1

0xdf02,	// (0x00041a76) popup_call2_audio_out_window_g4_ParamLimits

0xdf02,	// (0x00041a76) popup_call2_audio_out_window_g4

0x244f,	// (0x00035fc3) main_imed2_pane

0x78dc,	// (0x0003b450) popup_imed_adjust2_window

0x78ef,	// (0x0003b463) popup_imed_trans_window_ParamLimits

0x78ef,	// (0x0003b463) popup_imed_trans_window

0xe6d8,	// (0x0004224c) popup_blid_sat_info2_window_t1

0xe6e6,	// (0x0004225a) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x00043189) popup_blid_sat_info2_window_t

0x871b,	// (0x0003c28f) aid_size_cell_colour_35

0x8735,	// (0x0003c2a9) aid_size_cell_colour_112

0x874c,	// (0x0003c2c0) aid_size_cell_effect

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp02

0xe833,	// (0x000423a7) heading_imed_pane

0x8766,	// (0x0003c2da) listscroll_imed_pane

0xecb2,	// (0x00042826) heading_imed_pane_g1

0xecba,	// (0x0004282e) heading_imed_pane_t1

0xecc8,	// (0x0004283c) grid_imed_colour_35_pane_ParamLimits

0xecc8,	// (0x0004283c) grid_imed_colour_35_pane

0x8772,	// (0x0003c2e6) grid_imed_effect_pane

0xece4,	// (0x00042858) list_imed_aspect_pane

0x8782,	// (0x0003c2f6) scroll_pane_cp027_ParamLimits

0x8782,	// (0x0003c2f6) scroll_pane_cp027

0x878e,	// (0x0003c302) cell_imed_effect_pane_ParamLimits

0x878e,	// (0x0003c302) cell_imed_effect_pane

0xecec,	// (0x00042860) cell_imed_colour_pane_ParamLimits

0xecec,	// (0x00042860) cell_imed_colour_pane

0xed53,	// (0x000428c7) cell_imed_colour_pane_g1_ParamLimits

0xed53,	// (0x000428c7) cell_imed_colour_pane_g1

0xed64,	// (0x000428d8) hgihlgiht_grid_pane_cp016_ParamLimits

0xed64,	// (0x000428d8) hgihlgiht_grid_pane_cp016

0x87aa,	// (0x0003c31e) cell_imed_effect_pane_g1

0x87b2,	// (0x0003c326) grid_highlight_pane_cp017

0xed75,	// (0x000428e9) list_imed_single_pane_ParamLimits

0xed75,	// (0x000428e9) list_imed_single_pane

0x244f,	// (0x00035fc3) list_highlight_pane_cp07

0xed89,	// (0x000428fd) list_imed_aspect_pane_comp1_t1

0xe43c,	// (0x00041fb0) bg_tb_trans_pane_cp05

0xedab,	// (0x0004291f) popup_imed_adjust2_window_g1

0xedd2,	// (0x00042946) popup_imed_adjust2_window_t1

0xedea,	// (0x0004295e) slider_imed_adjust_pane

0xedfe,	// (0x00042972) slider_imed_adjust_pane_g1

0xee0e,	// (0x00042982) slider_imed_adjust_pane_g2

0xee1e,	// (0x00042992) slider_imed_adjust_pane_g3

0xee2f,	// (0x000429a3) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x000432cd) slider_imed_adjust_pane_g

0x87bb,	// (0x0003c32f) aid_size_cell_clipart2

0xee40,	// (0x000429b4) grid_imed_clipart_pane

0xee4a,	// (0x000429be) scroll_pane_cp031

0x87c7,	// (0x0003c33b) cell_imed_clipart_pane_ParamLimits

0x87c7,	// (0x0003c33b) cell_imed_clipart_pane

0x87e5,	// (0x0003c359) cell_imed_clipart_pane_g1

0x244f,	// (0x00035fc3) grid_highlight_pane_cp014

0x8520,	// (0x0003c094) main_clock2_pane_g1_ParamLimits

0x8520,	// (0x0003c094) main_clock2_pane_g1

0x860b,	// (0x0003c17f) aid_call2_pane_cp10

0x861d,	// (0x0003c191) aid_call_pane_cp10

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g1

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g2

0x862f,	// (0x0003c1a3) popup_clock_analogue_window_cp10_g3

0x862f,	// (0x0003c1a3) popup_clock_analogue_window_cp10_g4

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x000432bb) popup_clock_analogue_window_cp10_g

0x8645,	// (0x0003c1b9) popup_clock_analogue_window_cp10_t1

0x8676,	// (0x0003c1ea) clock_digital_number_pane_cp10_ParamLimits

0x8676,	// (0x0003c1ea) clock_digital_number_pane_cp10

0x8690,	// (0x0003c204) clock_digital_number_pane_cp11_ParamLimits

0x8690,	// (0x0003c204) clock_digital_number_pane_cp11

0x86aa,	// (0x0003c21e) clock_digital_number_pane_cp12_ParamLimits

0x86aa,	// (0x0003c21e) clock_digital_number_pane_cp12

0x86c4,	// (0x0003c238) clock_digital_number_pane_cp13_ParamLimits

0x86c4,	// (0x0003c238) clock_digital_number_pane_cp13

0x86e0,	// (0x0003c254) clock_digital_separator_pane_cp10_ParamLimits

0x86e0,	// (0x0003c254) clock_digital_separator_pane_cp10

0x86fa,	// (0x0003c26e) popup_clock_digital_window_cp02_t1_ParamLimits

0x86fa,	// (0x0003c26e) popup_clock_digital_window_cp02_t1

0x2af4,	// (0x00036668) clock_digital_number_pane_cp10_g1

0x2af4,	// (0x00036668) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x000432d6) clock_digital_number_pane_cp10_g

0x2af4,	// (0x00036668) clock_digital_separator_pane_cp10_g1

0x2af4,	// (0x00036668) clock_digital_separator_pane_g2_cp10

0xd0e9,	// (0x00040c5d) navi_pane_vded_g4

0xd0f2,	// (0x00040c66) navi_pane_vded_g5

0xd0fb,	// (0x00040c6f) navi_pane_vded_t1

0x244f,	// (0x00035fc3) main_vded_pane

0x87ee,	// (0x0003c362) main_vded_pane_g1

0x87fa,	// (0x0003c36e) main_vded_pane_g2

0x8804,	// (0x0003c378) main_vded_pane_g3

0x0002,

0xf767,	// (0x000432db) main_vded_pane_g

0x880e,	// (0x0003c382) main_vded_pane_t1

0x881c,	// (0x0003c390) main_vded_pane_t2

0x0001,

0xf76e,	// (0x000432e2) main_vded_pane_t

0x882a,	// (0x0003c39e) vded_slider_pane

0x8834,	// (0x0003c3a8) vded_video_pane

0xee52,	// (0x000429c6) vded_video_pane_g1

0x8840,	// (0x0003c3b4) vded_video_pane_g2

0xc7c4,	// (0x00040338) vded_video_pane_g3

0x0002,

0xf773,	// (0x000432e7) vded_video_pane_g

0xee5c,	// (0x000429d0) vded_slider_pane_g1

0xe603,	// (0x00042177) vded_slider_pane_g2

0xee65,	// (0x000429d9) vded_slider_pane_g3

0xee6e,	// (0x000429e2) vded_slider_pane_g4

0xee77,	// (0x000429eb) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x000432ee) vded_slider_pane_g

0x8419,	// (0x0003bf8d) mup3_rocker_pane_ParamLimits

0x8419,	// (0x0003bf8d) mup3_rocker_pane

0x8849,	// (0x0003c3bd) mup3_control_keys_pane_g1

0x8851,	// (0x0003c3c5) mup3_control_keys_pane_g2

0x8859,	// (0x0003c3cd) mup3_control_keys_pane_g3

0x8861,	// (0x0003c3d5) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x000432f9) mup3_control_keys_pane_g

0x4b01,	// (0x00038675) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4b01,	// (0x00038675) popup_toolbar2_fixed_window_cp01

0x8435,	// (0x0003bfa9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8435,	// (0x0003bfa9) popup_toolbar2_fixed_window_cp02

0xd899,	// (0x0004140d) popup_call2_audio_second_window_t4_ParamLimits

0xd899,	// (0x0004140d) popup_call2_audio_second_window_t4

0xddc7,	// (0x0004193b) popup_call2_audio_first_window_t6_ParamLimits

0xddc7,	// (0x0004193b) popup_call2_audio_first_window_t6

0xe005,	// (0x00041b79) popup_call2_audio_out_window_t6_ParamLimits

0xe005,	// (0x00041b79) popup_call2_audio_out_window_t6

0x244f,	// (0x00035fc3) main_vitu_pane

0x2b77,	// (0x000366eb) aid_size_cell_itu_ParamLimits

0x2b77,	// (0x000366eb) aid_size_cell_itu

0x2b77,	// (0x000366eb) bg_popup_window_pane_cp08_ParamLimits

0x2b77,	// (0x000366eb) bg_popup_window_pane_cp08

0x2b77,	// (0x000366eb) field_vitu_entry_pane_ParamLimits

0x2b77,	// (0x000366eb) field_vitu_entry_pane

0x2b77,	// (0x000366eb) grid_vitu_function_pane_ParamLimits

0x2b77,	// (0x000366eb) grid_vitu_function_pane

0x2b77,	// (0x000366eb) grid_vitu_itu_pane_ParamLimits

0x2b77,	// (0x000366eb) grid_vitu_itu_pane

0x2b77,	// (0x000366eb) cell_vitu_itu_pane_ParamLimits

0x2b77,	// (0x000366eb) cell_vitu_itu_pane

0x2b77,	// (0x000366eb) cell_vitu_function_pane_ParamLimits

0x2b77,	// (0x000366eb) cell_vitu_function_pane

0x2b1e,	// (0x00036692) bg_popup_sub_pane_cp08_ParamLimits

0x2b1e,	// (0x00036692) bg_popup_sub_pane_cp08

0xc7de,	// (0x00040352) field_vitu_entry_pane_t1_ParamLimits

0xc7de,	// (0x00040352) field_vitu_entry_pane_t1

0xed36,	// (0x000428aa) field_vitu_entry_pane_t2_ParamLimits

0xed36,	// (0x000428aa) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x00043302) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x00043302) field_vitu_entry_pane_t

0xd1d0,	// (0x00040d44) bg_button_pane_cp05_ParamLimits

0xd1d0,	// (0x00040d44) bg_button_pane_cp05

0xee80,	// (0x000429f4) cell_vitu_itu_pane_g1

0xe53a,	// (0x000420ae) cell_vitu_itu_pane_t1_ParamLimits

0xe53a,	// (0x000420ae) cell_vitu_itu_pane_t1

0xe53a,	// (0x000420ae) cell_vitu_itu_pane_t2_ParamLimits

0xe53a,	// (0x000420ae) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00043307) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00043307) cell_vitu_itu_pane_t

0x244f,	// (0x00035fc3) bg_button_pane_cp07

0xc7c4,	// (0x00040338) cell_vitu_function_pane_g1

0x4c32,	// (0x000387a6) main_calc_pane_g1

0x48b8,	// (0x0003842c) aid_visual_content_pane

0x244f,	// (0x00035fc3) main_vradio_pane

0x2b93,	// (0x00036707) main_vradio_pane_g1_ParamLimits

0x2b93,	// (0x00036707) main_vradio_pane_g1

0x2b93,	// (0x00036707) main_vradio_pane_g2_ParamLimits

0x2b93,	// (0x00036707) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x0004330e) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x0004330e) main_vradio_pane_g

0xc796,	// (0x0004030a) main_vradio_pane_t1_ParamLimits

0xc796,	// (0x0004030a) main_vradio_pane_t1

0xc796,	// (0x0004030a) main_vradio_pane_t2_ParamLimits

0xc796,	// (0x0004030a) main_vradio_pane_t2

0xc796,	// (0x0004030a) main_vradio_pane_t3_ParamLimits

0xc796,	// (0x0004030a) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x00043313) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x00043313) main_vradio_pane_t

0x2b77,	// (0x000366eb) vradio_rocker_control_pane_ParamLimits

0x2b77,	// (0x000366eb) vradio_rocker_control_pane

0x2b77,	// (0x000366eb) vradio_station_info_pane_ParamLimits

0x2b77,	// (0x000366eb) vradio_station_info_pane

0x2b1e,	// (0x00036692) vradio_frequency_info_pane_ParamLimits

0x2b1e,	// (0x00036692) vradio_frequency_info_pane

0xc7c4,	// (0x00040338) vradio_station_info_pane_g1

0xe53a,	// (0x000420ae) vradio_station_info_pane_t1_ParamLimits

0xe53a,	// (0x000420ae) vradio_station_info_pane_t1

0xc796,	// (0x0004030a) vradio_station_info_pane_t2_ParamLimits

0xc796,	// (0x0004030a) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x0004331a) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x0004331a) vradio_station_info_pane_t

0x244f,	// (0x00035fc3) vradio_tuning_pane

0x8871,	// (0x0003c3e5) vradio_rocker_control_pane_g1

0xee9c,	// (0x00042a10) vradio_rocker_control_pane_g2

0x8879,	// (0x0003c3ed) vradio_rocker_control_pane_g3

0x8881,	// (0x0003c3f5) vradio_rocker_control_pane_g4

0x888b,	// (0x0003c3ff) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x0004331f) vradio_rocker_control_pane_g

0xc7c4,	// (0x00040338) vradio_frequency_info_pane_g1

0xc7de,	// (0x00040352) vradio_frequency_info_pane_t1_ParamLimits

0xc7de,	// (0x00040352) vradio_frequency_info_pane_t1

0x8893,	// (0x0003c407) vradio_tuning_pane_g1

0x88a0,	// (0x0003c414) vradio_tuning_pane_t1

0x4901,	// (0x00038475) area_side_right_pane_ParamLimits

0x4901,	// (0x00038475) area_side_right_pane

0xe3f7,	// (0x00041f6b) status_small_pane_g1

0xe3ff,	// (0x00041f73) status_small_pane_g2

0xe408,	// (0x00041f7c) status_small_pane_g3

0xe411,	// (0x00041f85) status_small_pane_g4

0x0003,

0xf577,	// (0x000430eb) status_small_pane_g

0xe41a,	// (0x00041f8e) status_small_pane_t1

0x244f,	// (0x00035fc3) main_video3_pane

0xeea4,	// (0x00042a18) cams_zoom_vslider_pane

0xeeac,	// (0x00042a20) image3_wide_pane_ParamLimits

0xeeac,	// (0x00042a20) image3_wide_pane

0xeec6,	// (0x00042a3a) image3_wide_small_pane

0xeed2,	// (0x00042a46) main_video3_pane_g1_ParamLimits

0xeed2,	// (0x00042a46) main_video3_pane_g1

0xeeee,	// (0x00042a62) main_video3_pane_g2_ParamLimits

0xeeee,	// (0x00042a62) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x0004332a) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x0004332a) main_video3_pane_g

0xef0a,	// (0x00042a7e) main_video3_pane_t1_ParamLimits

0xef0a,	// (0x00042a7e) main_video3_pane_t1

0xef35,	// (0x00042aa9) main_video3_pane_t2_ParamLimits

0xef35,	// (0x00042aa9) main_video3_pane_t2

0xef62,	// (0x00042ad6) main_video3_pane_t3_ParamLimits

0xef62,	// (0x00042ad6) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x0004332f) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x0004332f) main_video3_pane_t

0xef8f,	// (0x00042b03) cams_zoom_vslider_pane_g1

0xef98,	// (0x00042b0c) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x00043336) cams_zoom_vslider_pane_g

0xefa0,	// (0x00042b14) small_slider_vertical_pane

0xc7c4,	// (0x00040338) small_slider_vertical_pane_g1

0xc7c4,	// (0x00040338) small_slider_vertical_pane_g2

0xefa8,	// (0x00042b1c) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x0004333b) small_slider_vertical_pane_g

0x244f,	// (0x00035fc3) main_hwr_training_pane

0xefb1,	// (0x00042b25) hwr_training_instruct_pane_ParamLimits

0xefb1,	// (0x00042b25) hwr_training_instruct_pane

0x88af,	// (0x0003c423) hwr_training_navi_pane_ParamLimits

0x88af,	// (0x0003c423) hwr_training_navi_pane

0x88c9,	// (0x0003c43d) hwr_training_write_pane_ParamLimits

0x88c9,	// (0x0003c43d) hwr_training_write_pane

0x244f,	// (0x00035fc3) bg_frame_shadow_pane

0xefe8,	// (0x00042b5c) hwr_training_write_pane_g1

0xeff0,	// (0x00042b64) hwr_training_write_pane_g2

0xeff8,	// (0x00042b6c) hwr_training_write_pane_g3

0xf000,	// (0x00042b74) hwr_training_write_pane_g4

0xf008,	// (0x00042b7c) hwr_training_write_pane_g5

0xf010,	// (0x00042b84) hwr_training_write_pane_g6

0xf018,	// (0x00042b8c) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x00043342) hwr_training_write_pane_g

0x8901,	// (0x0003c475) hwr_training_navi_pane_g1_ParamLimits

0x8901,	// (0x0003c475) hwr_training_navi_pane_g1

0x8913,	// (0x0003c487) hwr_training_navi_pane_g2_ParamLimits

0x8913,	// (0x0003c487) hwr_training_navi_pane_g2

0x8925,	// (0x0003c499) hwr_training_navi_pane_g3_ParamLimits

0x8925,	// (0x0003c499) hwr_training_navi_pane_g3

0x8935,	// (0x0003c4a9) hwr_training_navi_pane_g4_ParamLimits

0x8935,	// (0x0003c4a9) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x00043351) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x00043351) hwr_training_navi_pane_g

0x894f,	// (0x0003c4c3) hwr_training_navi_pane_t1

0x895d,	// (0x0003c4d1) list_single_hwr_training_instruct_pane_ParamLimits

0x895d,	// (0x0003c4d1) list_single_hwr_training_instruct_pane

0xf020,	// (0x00042b94) list_single_hwr_training_instruct_pane_t1

0xe7df,	// (0x00042353) bg_frame_shadow_pane_g1

0xf02f,	// (0x00042ba3) bg_frame_shadow_pane_g2

0xf037,	// (0x00042bab) bg_frame_shadow_pane_g3

0xf03f,	// (0x00042bb3) bg_frame_shadow_pane_g4

0xf047,	// (0x00042bbb) bg_frame_shadow_pane_g5

0xf04f,	// (0x00042bc3) bg_frame_shadow_pane_g6

0xf057,	// (0x00042bcb) bg_frame_shadow_pane_g7

0x2caf,	// (0x00036823) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x0004335c) bg_frame_shadow_pane_g

0x244f,	// (0x00035fc3) main_video_tele_dialer_pane

0x8976,	// (0x0003c4ea) aid_size_cell_video_keypad_ParamLimits

0x8976,	// (0x0003c4ea) aid_size_cell_video_keypad

0x8986,	// (0x0003c4fa) grid_video_dialer_keypad_pane_ParamLimits

0x8986,	// (0x0003c4fa) grid_video_dialer_keypad_pane

0x89b8,	// (0x0003c52c) video_down_pane_cp_ParamLimits

0x89b8,	// (0x0003c52c) video_down_pane_cp

0x89e2,	// (0x0003c556) cell_video_dialer_keypad_pane_ParamLimits

0x89e2,	// (0x0003c556) cell_video_dialer_keypad_pane

0xf05f,	// (0x00042bd3) bg_button_pane_cp08_ParamLimits

0xf05f,	// (0x00042bd3) bg_button_pane_cp08

0x89f9,	// (0x0003c56d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x89f9,	// (0x0003c56d) cell_video_dialer_keypad_pane_g1

0x840d,	// (0x0003bf81) mup3_rocker2_pane_ParamLimits

0x840d,	// (0x0003bf81) mup3_rocker2_pane

0xc7c4,	// (0x00040338) mup3_rocker2_pane_g1

0x7840,	// (0x0003b3b4) main_dialer2_pane

0x244f,	// (0x00035fc3) main_mp4_pane

0x8a52,	// (0x0003c5c6) main_mp4_pane_g1_ParamLimits

0x8a52,	// (0x0003c5c6) main_mp4_pane_g1

0x8a60,	// (0x0003c5d4) main_mp4_pane_g2_ParamLimits

0x8a60,	// (0x0003c5d4) main_mp4_pane_g2

0x8a6e,	// (0x0003c5e2) main_mp4_pane_g3_ParamLimits

0x8a6e,	// (0x0003c5e2) main_mp4_pane_g3

0x8ac1,	// (0x0003c635) main_mp4_pane_g4_ParamLimits

0x8ac1,	// (0x0003c635) main_mp4_pane_g4

0x8aef,	// (0x0003c663) main_mp4_pane_g5_ParamLimits

0x8aef,	// (0x0003c663) main_mp4_pane_g5

0x0007,

0xf808,	// (0x0004337c) main_mp4_pane_g_ParamLimits

0xf808,	// (0x0004337c) main_mp4_pane_g

0x8b63,	// (0x0003c6d7) main_mp4_pane_t1_ParamLimits

0x8b63,	// (0x0003c6d7) main_mp4_pane_t1

0x8bbf,	// (0x0003c733) main_mp4_pane_t2_ParamLimits

0x8bbf,	// (0x0003c733) main_mp4_pane_t2

0x0044,	// (0x00033bb8) main_mp4_pane_t3_ParamLimits

0x0044,	// (0x00033bb8) main_mp4_pane_t3

0x8c11,	// (0x0003c785) main_mp4_pane_t4_ParamLimits

0x8c11,	// (0x0003c785) main_mp4_pane_t4

0x0003,

0xf819,	// (0x0004338d) main_mp4_pane_t_ParamLimits

0xf819,	// (0x0004338d) main_mp4_pane_t

0x8c51,	// (0x0003c7c5) mp4_progress_pane_ParamLimits

0x8c51,	// (0x0003c7c5) mp4_progress_pane

0x8c9b,	// (0x0003c80f) mp4_rocker_pane_ParamLimits

0x8c9b,	// (0x0003c80f) mp4_rocker_pane

0x011c,	// (0x00033c90) mp4_progress_pane_t1

0x0135,	// (0x00033ca9) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x00043396) mp4_progress_pane_t

0x014e,	// (0x00033cc2) mup_progress_pane_cp04

0xc7c4,	// (0x00040338) mp4_rocker_pane_g1

0x8cbb,	// (0x0003c82f) aid_cell_size_keypad2_ParamLimits

0x8cbb,	// (0x0003c82f) aid_cell_size_keypad2

0x8ccb,	// (0x0003c83f) dialer2_ne_pane_ParamLimits

0x8ccb,	// (0x0003c83f) dialer2_ne_pane

0x8cd7,	// (0x0003c84b) grid_dialer2_keypad_pane_ParamLimits

0x8cd7,	// (0x0003c84b) grid_dialer2_keypad_pane

0xe83f,	// (0x000423b3) bg_popup_call_pane_cp07_ParamLimits

0xe83f,	// (0x000423b3) bg_popup_call_pane_cp07

0x8ce5,	// (0x0003c859) dialer2_ne_pane_t1_ParamLimits

0x8ce5,	// (0x0003c859) dialer2_ne_pane_t1

0x8d0a,	// (0x0003c87e) cell_dialer2_keypad_pane_ParamLimits

0x8d0a,	// (0x0003c87e) cell_dialer2_keypad_pane

0x0173,	// (0x00033ce7) bg_button_pane_pane_cp04_ParamLimits

0x0173,	// (0x00033ce7) bg_button_pane_pane_cp04

0x8d21,	// (0x0003c895) cell_dialer2_keypad_pane_g1_ParamLimits

0x8d21,	// (0x0003c895) cell_dialer2_keypad_pane_g1

0x57d9,	// (0x0003934d) aid_placing_vt_set_content_ParamLimits

0x57d9,	// (0x0003934d) aid_placing_vt_set_content

0x5801,	// (0x00039375) aid_placing_vt_set_title_ParamLimits

0x5801,	// (0x00039375) aid_placing_vt_set_title

0x244f,	// (0x00035fc3) main_image3_pane

0x8dbb,	// (0x0003c92f) area_side_right_pane_cp01_ParamLimits

0x8dbb,	// (0x0003c92f) area_side_right_pane_cp01

0x2ba1,	// (0x00036715) main_image3_pane_g1_ParamLimits

0x2ba1,	// (0x00036715) main_image3_pane_g1

0x8dea,	// (0x0003c95e) main_image3_pane_g2_ParamLimits

0x8dea,	// (0x0003c95e) main_image3_pane_g2

0x8e03,	// (0x0003c977) main_image3_pane_g3_ParamLimits

0x8e03,	// (0x0003c977) main_image3_pane_g3

0x8e1c,	// (0x0003c990) main_image3_pane_g4_ParamLimits

0x8e1c,	// (0x0003c990) main_image3_pane_g4

0x0003,

0xf831,	// (0x000433a5) main_image3_pane_g_ParamLimits

0xf831,	// (0x000433a5) main_image3_pane_g

0x8e35,	// (0x0003c9a9) main_image3_pane_t1_ParamLimits

0x8e35,	// (0x0003c9a9) main_image3_pane_t1

0x8e5a,	// (0x0003c9ce) main_image3_pane_t2_ParamLimits

0x8e5a,	// (0x0003c9ce) main_image3_pane_t2

0x8e79,	// (0x0003c9ed) main_image3_pane_t3_ParamLimits

0x8e79,	// (0x0003c9ed) main_image3_pane_t3

0x0003,

0xf83a,	// (0x000433ae) main_image3_pane_t_ParamLimits

0xf83a,	// (0x000433ae) main_image3_pane_t

0x2b77,	// (0x000366eb) grid_sctrl_middle_pane_cp01_ParamLimits

0x2b77,	// (0x000366eb) grid_sctrl_middle_pane_cp01

0x8eda,	// (0x0003ca4e) cell_sctrl_middle_pane_cp01_ParamLimits

0x8eda,	// (0x0003ca4e) cell_sctrl_middle_pane_cp01

0x8eeb,	// (0x0003ca5f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8eeb,	// (0x0003ca5f) cell_sctrl_middle_pane_cp01_g1

0x244f,	// (0x00035fc3) main_call4_pane

0x8ef8,	// (0x0003ca6c) aid_size_button_call4_ParamLimits

0x8ef8,	// (0x0003ca6c) aid_size_button_call4

0x8f2e,	// (0x0003caa2) call4_windows_pane_ParamLimits

0x8f2e,	// (0x0003caa2) call4_windows_pane

0x8f43,	// (0x0003cab7) grid_call4_button_pane_ParamLimits

0x8f43,	// (0x0003cab7) grid_call4_button_pane

0x8f73,	// (0x0003cae7) call4_windows_conf_pane

0x8f8c,	// (0x0003cb00) popup_call4_audio_first_window_ParamLimits

0x8f8c,	// (0x0003cb00) popup_call4_audio_first_window

0x8fdc,	// (0x0003cb50) popup_call4_audio_second_window_ParamLimits

0x8fdc,	// (0x0003cb50) popup_call4_audio_second_window

0x8ff5,	// (0x0003cb69) popup_call4_audio_wait_window_ParamLimits

0x8ff5,	// (0x0003cb69) popup_call4_audio_wait_window

0x9003,	// (0x0003cb77) cell_call4_button_pane_ParamLimits

0x9003,	// (0x0003cb77) cell_call4_button_pane

0x9026,	// (0x0003cb9a) bg_button_pane_cp09_ParamLimits

0x9026,	// (0x0003cb9a) bg_button_pane_cp09

0x9032,	// (0x0003cba6) cell_call4_button_pane_g1_ParamLimits

0x9032,	// (0x0003cba6) cell_call4_button_pane_g1

0x903f,	// (0x0003cbb3) cell_call4_button_pane_t1_ParamLimits

0x903f,	// (0x0003cbb3) cell_call4_button_pane_t1

0x01ed,	// (0x00033d61) popup_call4_audio_conf_window_ParamLimits

0x01ed,	// (0x00033d61) popup_call4_audio_conf_window

0x8442,	// (0x0003bfb6) mup3_progress_pane_t1_ParamLimits

0x8460,	// (0x0003bfd4) mup3_progress_pane_t2_ParamLimits

0xeb63,	// (0x000426d7) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x00043283) mup3_progress_pane_t_ParamLimits

0xeb80,	// (0x000426f4) mup_progress_pane_cp03_ParamLimits

0x8869,	// (0x0003c3dd) mup3_control_keys_pane_g4_copy1

0x8c7f,	// (0x0003c7f3) mp4_rocker2_pane_ParamLimits

0x8c7f,	// (0x0003c7f3) mp4_rocker2_pane

0x020f,	// (0x00033d83) mp4_rocker2_pane_g1

0x0207,	// (0x00033d7b) mp4_rocker2_pane_g2

0x9083,	// (0x0003cbf7) mp4_rocker2_pane_g3

0x908b,	// (0x0003cbff) mp4_rocker2_pane_g4

0x9093,	// (0x0003cc07) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x000433b7) mp4_rocker2_pane_g

0x244f,	// (0x00035fc3) main_camera4_pane

0x244f,	// (0x00035fc3) main_video4_pane

0x8994,	// (0x0003c508) main_video_tele_dialer_pane_t1_ParamLimits

0x8994,	// (0x0003c508) main_video_tele_dialer_pane_t1

0x89a6,	// (0x0003c51a) main_video_tele_dialer_pane_t2_ParamLimits

0x89a6,	// (0x0003c51a) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x0004336d) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x0004336d) main_video_tele_dialer_pane_t

0x90b3,	// (0x0003cc27) cam4_autofocus_pane_ParamLimits

0x90b3,	// (0x0003cc27) cam4_autofocus_pane

0x90cb,	// (0x0003cc3f) cam4_image_uncrop_pane_ParamLimits

0x90cb,	// (0x0003cc3f) cam4_image_uncrop_pane

0x90e4,	// (0x0003cc58) cam4_indicators_pane_ParamLimits

0x90e4,	// (0x0003cc58) cam4_indicators_pane

0x9100,	// (0x0003cc74) main_camera4_pane_g1_ParamLimits

0x9100,	// (0x0003cc74) main_camera4_pane_g1

0x910c,	// (0x0003cc80) main_camera4_pane_g2_ParamLimits

0x910c,	// (0x0003cc80) main_camera4_pane_g2

0x910c,	// (0x0003cc80) main_camera4_pane_g3_ParamLimits

0x910c,	// (0x0003cc80) main_camera4_pane_g3

0x9118,	// (0x0003cc8c) main_camera4_pane_g4_ParamLimits

0x9118,	// (0x0003cc8c) main_camera4_pane_g4

0x9124,	// (0x0003cc98) main_camera4_pane_g5_ParamLimits

0x9124,	// (0x0003cc98) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x000433c2) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x000433c2) main_camera4_pane_g

0x913e,	// (0x0003ccb2) main_camera4_pane_t1_ParamLimits

0x913e,	// (0x0003ccb2) main_camera4_pane_t1

0x2b85,	// (0x000366f9) bg_tb_trans_pane_cp06

0x9190,	// (0x0003cd04) cam4_indicators_pane_g1

0x91a1,	// (0x0003cd15) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x000433dd) cam4_indicators_pane_g

0x91b9,	// (0x0003cd2d) cam4_indicators_pane_t1

0x91e3,	// (0x0003cd57) main_video4_pane_g1_ParamLimits

0x91e3,	// (0x0003cd57) main_video4_pane_g1

0x91ef,	// (0x0003cd63) main_video4_pane_g2_ParamLimits

0x91ef,	// (0x0003cd63) main_video4_pane_g2

0x91fb,	// (0x0003cd6f) main_video4_pane_g3_ParamLimits

0x91fb,	// (0x0003cd6f) main_video4_pane_g3

0x9207,	// (0x0003cd7b) main_video4_pane_g4_ParamLimits

0x9207,	// (0x0003cd7b) main_video4_pane_g4

0x0004,

0xf870,	// (0x000433e4) main_video4_pane_g_ParamLimits

0xf870,	// (0x000433e4) main_video4_pane_g

0x9229,	// (0x0003cd9d) vid4_indicators_pane_ParamLimits

0x9229,	// (0x0003cd9d) vid4_indicators_pane

0x9248,	// (0x0003cdbc) video4_image_uncrop_cif_pane_ParamLimits

0x9248,	// (0x0003cdbc) video4_image_uncrop_cif_pane

0x9257,	// (0x0003cdcb) video4_image_uncrop_nhd_pane_ParamLimits

0x9257,	// (0x0003cdcb) video4_image_uncrop_nhd_pane

0x90cb,	// (0x0003cc3f) video4_image_uncrop_vga_pane_ParamLimits

0x90cb,	// (0x0003cc3f) video4_image_uncrop_vga_pane

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp07

0x9270,	// (0x0003cde4) vid4_indicators_pane_g1

0x9286,	// (0x0003cdfa) vid4_indicators_pane_g2

0x929a,	// (0x0003ce0e) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x000433ef) vid4_indicators_pane_g

0x92cb,	// (0x0003ce3f) vid4_indicators_pane_t1

0x92e2,	// (0x0003ce56) cam4_autofocus_pane_g1

0x92ea,	// (0x0003ce5e) cam4_autofocus_pane_g2

0x92f2,	// (0x0003ce66) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x000433fa) cam4_autofocus_pane_g

0x92fa,	// (0x0003ce6e) cam4_autofocus_pane_g3_copy1

0x89c6,	// (0x0003c53a) video_down_pane_cp_t1

0x89d4,	// (0x0003c548) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x00043372) video_down_pane_cp_t

0x2b77,	// (0x000366eb) popup_vitu2_window_ParamLimits

0x2b77,	// (0x000366eb) popup_vitu2_window

0x9302,	// (0x0003ce76) aid_size_cell2_itu2_ParamLimits

0x9302,	// (0x0003ce76) aid_size_cell2_itu2

0x9324,	// (0x0003ce98) aid_size_cell_itu2_ParamLimits

0x9324,	// (0x0003ce98) aid_size_cell_itu2

0xe83f,	// (0x000423b3) bg_popup_window_pane_cp09_ParamLimits

0xe83f,	// (0x000423b3) bg_popup_window_pane_cp09

0x9368,	// (0x0003cedc) field_vitu2_entry_pane_ParamLimits

0x9368,	// (0x0003cedc) field_vitu2_entry_pane

0x9388,	// (0x0003cefc) grid_vitu2_function_pane_ParamLimits

0x9388,	// (0x0003cefc) grid_vitu2_function_pane

0x93cc,	// (0x0003cf40) grid_vitu2_itu_pane_ParamLimits

0x93cc,	// (0x0003cf40) grid_vitu2_itu_pane

0x9442,	// (0x0003cfb6) cell_vitu2_itu_pane_ParamLimits

0x9442,	// (0x0003cfb6) cell_vitu2_itu_pane

0x945d,	// (0x0003cfd1) cell_vitu2_function_pane_ParamLimits

0x945d,	// (0x0003cfd1) cell_vitu2_function_pane

0x0340,	// (0x00033eb4) bg_popup_call_pane_cp08_ParamLimits

0x0340,	// (0x00033eb4) bg_popup_call_pane_cp08

0x0357,	// (0x00033ecb) field_vitu2_entry_pane_g1

0x0363,	// (0x00033ed7) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x00043401) field_vitu2_entry_pane_g

0x3c69,	// (0x000377dd) field_vitu2_entry_pane_t1_ParamLimits

0x3c69,	// (0x000377dd) field_vitu2_entry_pane_t1

0x3c99,	// (0x0003780d) field_vitu2_entry_pane_t2_ParamLimits

0x3c99,	// (0x0003780d) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x00043408) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x00043408) field_vitu2_entry_pane_t

0x7b7f,	// (0x0003b6f3) bg_button_pane_cp010_ParamLimits

0x7b7f,	// (0x0003b6f3) bg_button_pane_cp010

0x94a1,	// (0x0003d015) cell_vitu2_itu_pane_g1

0x94c7,	// (0x0003d03b) cell_vitu2_itu_pane_t1_ParamLimits

0x94c7,	// (0x0003d03b) cell_vitu2_itu_pane_t1

0x3cb6,	// (0x0003782a) cell_vitu2_itu_pane_t2_ParamLimits

0x3cb6,	// (0x0003782a) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x00043412) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x00043412) cell_vitu2_itu_pane_t

0x2b1e,	// (0x00036692) bg_button_pane_cp011

0x9513,	// (0x0003d087) cell_vitu2_function_pane_g1

0x244f,	// (0x00035fc3) main_myfav_hc_pane

0x8ebb,	// (0x0003ca2f) popup_image3_note_pane_ParamLimits

0x8ebb,	// (0x0003ca2f) popup_image3_note_pane

0x8ec9,	// (0x0003ca3d) popup_image3_tool_bar_pane_ParamLimits

0x8ec9,	// (0x0003ca3d) popup_image3_tool_bar_pane

0x3d2c,	// (0x000378a0) cell_vitu2_itu_pane_t3_ParamLimits

0x3d2c,	// (0x000378a0) cell_vitu2_itu_pane_t3

0x244f,	// (0x00035fc3) bg_popup_trans_pane

0x03c3,	// (0x00033f37) grid_image3_tool_bar_pane

0x03cd,	// (0x00033f41) bg_popup_trans_pane_g1

0xc9ed,	// (0x00040561) bg_popup_trans_pane_g2

0x03d5,	// (0x00033f49) bg_popup_trans_pane_g3

0x03dd,	// (0x00033f51) bg_popup_trans_pane_g4

0x03e5,	// (0x00033f59) bg_popup_trans_pane_g5

0x03ed,	// (0x00033f61) bg_popup_trans_pane_g6

0x03f5,	// (0x00033f69) bg_popup_trans_pane_g7

0x03fd,	// (0x00033f71) bg_popup_trans_pane_g8

0xc9cd,	// (0x00040541) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x00043419) bg_popup_trans_pane_g

0x0405,	// (0x00033f79) cell_image3_tool_bar_pane_ParamLimits

0x0405,	// (0x00033f79) cell_image3_tool_bar_pane

0xc7c4,	// (0x00040338) cell_image3_tool_bar_pane_g1

0x244f,	// (0x00035fc3) bg_popup_trans_pane_cp1

0x041b,	// (0x00033f8f) popup_image3_note_pane_t1

0x0429,	// (0x00033f9d) popup_image3_note_pane_t2

0x0437,	// (0x00033fab) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x0004342c) popup_image3_note_pane_t

0x0447,	// (0x00033fbb) popup_image3_note_pane_t3_copy1

0x9527,	// (0x0003d09b) bg_myfav_hc_instruction_pane_ParamLimits

0x9527,	// (0x0003d09b) bg_myfav_hc_instruction_pane

0x953f,	// (0x0003d0b3) cell_myfav_contact_pane_ParamLimits

0x953f,	// (0x0003d0b3) cell_myfav_contact_pane

0x9559,	// (0x0003d0cd) cell_myfav_contact_pane_cp1_ParamLimits

0x9559,	// (0x0003d0cd) cell_myfav_contact_pane_cp1

0x9571,	// (0x0003d0e5) cell_myfav_contact_pane_cp2_ParamLimits

0x9571,	// (0x0003d0e5) cell_myfav_contact_pane_cp2

0x9589,	// (0x0003d0fd) cell_myfav_contact_pane_cp3_ParamLimits

0x9589,	// (0x0003d0fd) cell_myfav_contact_pane_cp3

0x95a0,	// (0x0003d114) cell_myfav_contact_pane_cp4_ParamLimits

0x95a0,	// (0x0003d114) cell_myfav_contact_pane_cp4

0x95b6,	// (0x0003d12a) cell_myfav_contact_pane_cp5_ParamLimits

0x95b6,	// (0x0003d12a) cell_myfav_contact_pane_cp5

0x95ca,	// (0x0003d13e) cell_myfav_contact_pane_cp6_ParamLimits

0x95ca,	// (0x0003d13e) cell_myfav_contact_pane_cp6

0x95de,	// (0x0003d152) cell_myfav_contact_pane_cp7_ParamLimits

0x95de,	// (0x0003d152) cell_myfav_contact_pane_cp7

0x0455,	// (0x00033fc9) listscroll_gen_pane_cp05

0x95f6,	// (0x0003d16a) main_myfav_hc_pane_g1_ParamLimits

0x95f6,	// (0x0003d16a) main_myfav_hc_pane_g1

0x9610,	// (0x0003d184) main_myfav_hc_pane_g2_ParamLimits

0x9610,	// (0x0003d184) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x00043433) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x00043433) main_myfav_hc_pane_g

0x9642,	// (0x0003d1b6) main_myfav_hc_pane_t1_ParamLimits

0x9642,	// (0x0003d1b6) main_myfav_hc_pane_t1

0x045e,	// (0x00033fd2) main_myfav_hc_pane_t2_ParamLimits

0x045e,	// (0x00033fd2) main_myfav_hc_pane_t2

0x0470,	// (0x00033fe4) main_myfav_hc_pane_t3_ParamLimits

0x0470,	// (0x00033fe4) main_myfav_hc_pane_t3

0x9659,	// (0x0003d1cd) main_myfav_hc_pane_t4_ParamLimits

0x9659,	// (0x0003d1cd) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x0004343a) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x0004343a) main_myfav_hc_pane_t

0xc7c4,	// (0x00040338) bg_myfav_hc_instruction_pane_g1

0x0482,	// (0x00033ff6) cell_myfav_contact_pane_g1_ParamLimits

0x0482,	// (0x00033ff6) cell_myfav_contact_pane_g1

0x0482,	// (0x00033ff6) cell_myfav_contact_pane_g2_ParamLimits

0x0482,	// (0x00033ff6) cell_myfav_contact_pane_g2

0x048e,	// (0x00034002) cell_myfav_contact_pane_g3_ParamLimits

0x048e,	// (0x00034002) cell_myfav_contact_pane_g3

0x2b93,	// (0x00036707) cell_myfav_contact_pane_g4_ParamLimits

0x2b93,	// (0x00036707) cell_myfav_contact_pane_g4

0x049b,	// (0x0003400f) cell_myfav_contact_pane_g5_ParamLimits

0x049b,	// (0x0003400f) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x00043445) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x00043445) cell_myfav_contact_pane_g

0x962a,	// (0x0003d19e) main_myfav_hc_pane_g3_ParamLimits

0x962a,	// (0x0003d19e) main_myfav_hc_pane_g3

0x4a3b,	// (0x000385af) popup_adpt_find_window

0x9683,	// (0x0003d1f7) afind_page_pane_ParamLimits

0x9683,	// (0x0003d1f7) afind_page_pane

0x9690,	// (0x0003d204) aid_size_cell_afind_ParamLimits

0x9690,	// (0x0003d204) aid_size_cell_afind

0x96aa,	// (0x0003d21e) bg_popup_sub_pane_cp09_ParamLimits

0x96aa,	// (0x0003d21e) bg_popup_sub_pane_cp09

0x96b7,	// (0x0003d22b) find_pane_cp01_ParamLimits

0x96b7,	// (0x0003d22b) find_pane_cp01

0x04a7,	// (0x0003401b) grid_afind_control_pane_ParamLimits

0x04a7,	// (0x0003401b) grid_afind_control_pane

0x96c4,	// (0x0003d238) grid_afind_pane_ParamLimits

0x96c4,	// (0x0003d238) grid_afind_pane

0x96e0,	// (0x0003d254) cell_afind_pane_ParamLimits

0x96e0,	// (0x0003d254) cell_afind_pane

0xc7c4,	// (0x00040338) afind_page_pane_g1

0x972c,	// (0x0003d2a0) afind_page_pane_g2

0x9735,	// (0x0003d2a9) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x00043450) afind_page_pane_g

0x973e,	// (0x0003d2b2) afind_page_pane_t1

0x04bb,	// (0x0003402f) cell_afind_grid_control_pane_ParamLimits

0x04bb,	// (0x0003402f) cell_afind_grid_control_pane

0x0173,	// (0x00033ce7) bg_button_pane_cp69_ParamLimits

0x0173,	// (0x00033ce7) bg_button_pane_cp69

0x975e,	// (0x0003d2d2) cell_afind_pane_g1_ParamLimits

0x975e,	// (0x0003d2d2) cell_afind_pane_g1

0x976b,	// (0x0003d2df) cell_afind_pane_t1_ParamLimits

0x976b,	// (0x0003d2df) cell_afind_pane_t1

0xc7ce,	// (0x00040342) bg_button_pane_cp72

0x04ca,	// (0x0003403e) cell_afind_grid_control_pane_g1

0x7374,	// (0x0003aee8) aid_image_placing_area_ParamLimits

0x7374,	// (0x0003aee8) aid_image_placing_area

0x2b85,	// (0x000366f9) field_vitu_entry_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) field_vitu_entry_pane_g1

0x2b85,	// (0x000366f9) field_vitu_entry_pane_g2_ParamLimits

0x2b85,	// (0x000366f9) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00042d5b) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00042d5b) field_vitu_entry_pane_g

0xee80,	// (0x000429f4) cell_vitu_itu_pane_g1_ParamLimits

0xed36,	// (0x000428aa) cell_vitu_itu_pane_t3_ParamLimits

0xed36,	// (0x000428aa) cell_vitu_itu_pane_t3

0x011c,	// (0x00033c90) mp4_progress_pane_t1_ParamLimits

0x0135,	// (0x00033ca9) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x00043396) mp4_progress_pane_t_ParamLimits

0x014e,	// (0x00033cc2) mup_progress_pane_cp04_ParamLimits

0x966d,	// (0x0003d1e1) main_myfav_hc_pane_t5_ParamLimits

0x966d,	// (0x0003d1e1) main_myfav_hc_pane_t5

0x48c4,	// (0x00038438) aid_zoom_text_primary

0x4a3b,	// (0x000385af) popup_adpt_find_window_ParamLimits

0x2b1e,	// (0x00036692) main_cam_set_pane

0x90f2,	// (0x0003cc66) cam4_zoom_pane_ParamLimits

0x90f2,	// (0x0003cc66) cam4_zoom_pane

0x977d,	// (0x0003d2f1) main_cam_set_pane_g1_ParamLimits

0x977d,	// (0x0003d2f1) main_cam_set_pane_g1

0x978b,	// (0x0003d2ff) main_cam_set_pane_g2_ParamLimits

0x978b,	// (0x0003d2ff) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x00043457) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x00043457) main_cam_set_pane_g

0x9797,	// (0x0003d30b) main_cam_set_pane_t1_ParamLimits

0x9797,	// (0x0003d30b) main_cam_set_pane_t1

0x97b3,	// (0x0003d327) main_cset_listscroll_pane_ParamLimits

0x97b3,	// (0x0003d327) main_cset_listscroll_pane

0x97e7,	// (0x0003d35b) main_cset_slider_pane_ParamLimits

0x97e7,	// (0x0003d35b) main_cset_slider_pane

0x04db,	// (0x0003404f) main_cset_list_pane_ParamLimits

0x04db,	// (0x0003404f) main_cset_list_pane

0x04eb,	// (0x0003405f) scroll_pane_cp028

0x9808,	// (0x0003d37c) aid_area_touch_slider

0x9824,	// (0x0003d398) cset_slider_pane

0x9847,	// (0x0003d3bb) main_cset_slider_pane_g1

0x985c,	// (0x0003d3d0) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x0004345c) main_cset_slider_pane_g

0x0524,	// (0x00034098) main_cset_slider_pane_t1

0x9918,	// (0x0003d48c) main_cset_slider_pane_t2

0x9932,	// (0x0003d4a6) main_cset_slider_pane_t3

0x994c,	// (0x0003d4c0) main_cset_slider_pane_t4

0x9966,	// (0x0003d4da) main_cset_slider_pane_t5

0x9980,	// (0x0003d4f4) main_cset_slider_pane_t6

0x9995,	// (0x0003d509) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x00043481) main_cset_slider_pane_t

0x9a99,	// (0x0003d60d) cset_list_set_pane_ParamLimits

0x9a99,	// (0x0003d60d) cset_list_set_pane

0x05be,	// (0x00034132) aid_position_infowindow_above

0x05c6,	// (0x0003413a) aid_position_infowindow_below

0x3d7e,	// (0x000378f2) cset_list_set_pane_g1_ParamLimits

0x3d7e,	// (0x000378f2) cset_list_set_pane_g1

0x3d8a,	// (0x000378fe) cset_list_set_pane_g3_ParamLimits

0x3d8a,	// (0x000378fe) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x000434a0) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x000434a0) cset_list_set_pane_g

0x3d99,	// (0x0003790d) cset_list_set_pane_t1_ParamLimits

0x3d99,	// (0x0003790d) cset_list_set_pane_t1

0x2b1e,	// (0x00036692) list_highlight_pane_cp021_ParamLimits

0x2b1e,	// (0x00036692) list_highlight_pane_cp021

0xd242,	// (0x00040db6) cset_slider_pane_g1

0xd254,	// (0x00040dc8) cset_slider_pane_g2

0xd24b,	// (0x00040dbf) cset_slider_pane_g3

0x0002,

0xf931,	// (0x000434a5) cset_slider_pane_g

0x1432,	// (0x00034fa6) aid_area_touch_cam4_zoom

0x9aaa,	// (0x0003d61e) cam4_zoom_cont_pane

0x9ab2,	// (0x0003d626) cam4_zoom_pane_g1

0x9aba,	// (0x0003d62e) cam4_zoom_pane_g2

0x9ac2,	// (0x0003d636) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x000434ac) cam4_zoom_pane_g

0x9aca,	// (0x0003d63e) cam4_zoom_cont_pane_g1

0x9ad3,	// (0x0003d647) cam4_zoom_cont_pane_g2

0x9adc,	// (0x0003d650) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x000434b3) cam4_zoom_cont_pane_g

0x8f12,	// (0x0003ca86) call4_image_pane_ParamLimits

0x8f12,	// (0x0003ca86) call4_image_pane

0x8f73,	// (0x0003cae7) call4_windows_conf_pane_ParamLimits

0x8fba,	// (0x0003cb2e) popup_call4_audio_in_window_ParamLimits

0x8fba,	// (0x0003cb2e) popup_call4_audio_in_window

0x244f,	// (0x00035fc3) bg_popup_call2_act_pane_cp02

0x01e5,	// (0x00033d59) call4_list_conf_pane

0xc7c4,	// (0x00040338) call4_image_pane_g1

0xc7c4,	// (0x00040338) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) call4_image_pane_g

0x05e9,	// (0x0003415d) list_single_graphic_popup_conf4_pane_ParamLimits

0x05e9,	// (0x0003415d) list_single_graphic_popup_conf4_pane

0x244f,	// (0x00035fc3) list_highlight_pane_cp022

0x05fe,	// (0x00034172) list_single_graphic_popup_conf4_pane_g1

0xcf36,	// (0x00040aaa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x000434ba) list_single_graphic_popup_conf4_pane_g

0x0606,	// (0x0003417a) list_single_graphic_popup_conf4_pane_t1

0x595b,	// (0x000394cf) popup_vtel_slider_window_ParamLimits

0x595b,	// (0x000394cf) popup_vtel_slider_window

0x0161,	// (0x00033cd5) dialer2_ne_pane_t2_ParamLimits

0x0161,	// (0x00033cd5) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x0004339b) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x0004339b) dialer2_ne_pane_t

0x2b1e,	// (0x00036692) bg_popup_sub_pane_cp010_ParamLimits

0x2b1e,	// (0x00036692) bg_popup_sub_pane_cp010

0x9ae5,	// (0x0003d659) popup_vtel_slider_window_g1_ParamLimits

0x9ae5,	// (0x0003d659) popup_vtel_slider_window_g1

0x9af1,	// (0x0003d665) popup_vtel_slider_window_g2_ParamLimits

0x9af1,	// (0x0003d665) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x000434bf) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x000434bf) popup_vtel_slider_window_g

0x9b39,	// (0x0003d6ad) vtel_slider_pane_ParamLimits

0x9b39,	// (0x0003d6ad) vtel_slider_pane

0x9b48,	// (0x0003d6bc) vtel_slider_pane_g1_ParamLimits

0x9b48,	// (0x0003d6bc) vtel_slider_pane_g1

0x9b55,	// (0x0003d6c9) vtel_slider_pane_g2_ParamLimits

0x9b55,	// (0x0003d6c9) vtel_slider_pane_g2

0x9b62,	// (0x0003d6d6) vtel_slider_pane_g3_ParamLimits

0x9b62,	// (0x0003d6d6) vtel_slider_pane_g3

0x9b48,	// (0x0003d6bc) vtel_slider_pane_g4_ParamLimits

0x9b48,	// (0x0003d6bc) vtel_slider_pane_g4

0x9b6f,	// (0x0003d6e3) vtel_slider_pane_g5_ParamLimits

0x9b6f,	// (0x0003d6e3) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x000434c8) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x000434c8) vtel_slider_pane_g

0x2b1e,	// (0x00036692) main_gallery2_pane

0x934a,	// (0x0003cebe) aid_size_row_itut2_dropdow_list_ParamLimits

0x934a,	// (0x0003cebe) aid_size_row_itut2_dropdow_list

0x93aa,	// (0x0003cf1e) grid_vitu2_function_top_pane_ParamLimits

0x93aa,	// (0x0003cf1e) grid_vitu2_function_top_pane

0x9400,	// (0x0003cf74) popup_vitu2_dropdown_list_window_ParamLimits

0x9400,	// (0x0003cf74) popup_vitu2_dropdown_list_window

0x941e,	// (0x0003cf92) popup_vitu2_match_list_window

0x9b7c,	// (0x0003d6f0) cell_vitu2_function_top_pane_ParamLimits

0x9b7c,	// (0x0003d6f0) cell_vitu2_function_top_pane

0x9b96,	// (0x0003d70a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9b96,	// (0x0003d70a) cell_vitu2_function_top_pane_cp01

0x9bb2,	// (0x0003d726) cell_vitu2_function_top_wide_pane_ParamLimits

0x9bb2,	// (0x0003d726) cell_vitu2_function_top_wide_pane

0x2b1e,	// (0x00036692) bg_button_pane_cp012

0x9bd0,	// (0x0003d744) cell_vitu2_function_top_pane_g1

0x9be4,	// (0x0003d758) bg_button_pane_cp013_ParamLimits

0x9be4,	// (0x0003d758) bg_button_pane_cp013

0x9c00,	// (0x0003d774) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9c00,	// (0x0003d774) cell_vitu2_function_top_wide_pane_g1

0x2b77,	// (0x000366eb) bg_popup_sub_pane_cp20

0x9c18,	// (0x0003d78c) list_vitu2_match_list_pane

0x03cd,	// (0x00033f41) bg_popup_sub_pane_cp20_g1

0x03d5,	// (0x00033f49) bg_popup_sub_pane_cp20_g2

0xc9ed,	// (0x00040561) bg_popup_sub_pane_cp20_g3

0x03dd,	// (0x00033f51) bg_popup_sub_pane_cp20_g4

0xc9cd,	// (0x00040541) bg_popup_sub_pane_cp20_g5

0x0638,	// (0x000341ac) bg_popup_sub_pane_cp20_g6

0x03ed,	// (0x00033f61) bg_popup_sub_pane_cp20_g7

0x03f5,	// (0x00033f69) bg_popup_sub_pane_cp20_g8

0x03fd,	// (0x00033f71) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x000434d3) bg_popup_sub_pane_cp20_g

0x9c30,	// (0x0003d7a4) list_vitu2_match_list_item_pane_ParamLimits

0x9c30,	// (0x0003d7a4) list_vitu2_match_list_item_pane

0x9c42,	// (0x0003d7b6) list_vitu2_match_list_item_pane_t1

0x244f,	// (0x00035fc3) bg_popup_sub_pane_cp21

0xc78e,	// (0x00040302) grid_vitu2_dropdown_list_pane

0x9c50,	// (0x0003d7c4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9c50,	// (0x0003d7c4) cell_vitu2_dropdown_list_char_pane

0x9c74,	// (0x0003d7e8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9c74,	// (0x0003d7e8) cell_vitu2_dropdown_list_ctrl_pane

0x0672,	// (0x000341e6) cell_vitu2_dropdown_list_char_pane_g1

0x0669,	// (0x000341dd) cell_vitu2_dropdown_list_char_pane_g2

0x0660,	// (0x000341d4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x000434e6) cell_vitu2_dropdown_list_char_pane_g

0x9c9e,	// (0x0003d812) cell_vitu2_dropdown_list_char_pane_t1

0x9cac,	// (0x0003d820) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9cac,	// (0x0003d820) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9cbc,	// (0x0003d830) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9cbc,	// (0x0003d830) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9ccd,	// (0x0003d841) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9ccd,	// (0x0003d841) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9cdd,	// (0x0003d851) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9cdd,	// (0x0003d851) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2b85,	// (0x000366f9) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2b85,	// (0x000366f9) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x000434ed) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x000434ed) cell_vitu2_dropdown_list_ctrl_pane_g

0x9cf6,	// (0x0003d86a) aid_size_cell_gallery2_ParamLimits

0x9cf6,	// (0x0003d86a) aid_size_cell_gallery2

0x9d10,	// (0x0003d884) grid_gallery2_pane_ParamLimits

0x9d10,	// (0x0003d884) grid_gallery2_pane

0x9d27,	// (0x0003d89b) scroll_pane_cp029_ParamLimits

0x9d27,	// (0x0003d89b) scroll_pane_cp029

0x9d37,	// (0x0003d8ab) cell_gallery2_pane_ParamLimits

0x9d37,	// (0x0003d8ab) cell_gallery2_pane

0x067b,	// (0x000341ef) cell_gallery2_pane_g2

0x9d8e,	// (0x0003d902) cell_gallery2_pane_g3

0x0683,	// (0x000341f7) cell_gallery2_pane_g4

0x068b,	// (0x000341ff) cell_gallery2_pane_g5

0xc78e,	// (0x00040302) grid_highlight_pane_cp10

0x941e,	// (0x0003cf92) popup_vitu2_match_list_window_ParamLimits

0x9432,	// (0x0003cfa6) popup_vitu2_query_window_ParamLimits

0x9432,	// (0x0003cfa6) popup_vitu2_query_window

0x244f,	// (0x00035fc3) bg_vitu2_candi_button_pane

0x0672,	// (0x000341e6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0669,	// (0x000341dd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0660,	// (0x000341d4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3dae,	// (0x00037922) bg_button_pane_cp015

0x9d96,	// (0x0003d90a) bg_button_pane_cp016

0x9da2,	// (0x0003d916) bg_button_pane_cp017

0xe43c,	// (0x00041fb0) bg_popup_sub_pane_cp22

0x0693,	// (0x00034207) popup_vitu2_query_window_g1

0x3de9,	// (0x0003795d) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x000434f8) popup_vitu2_query_window_g

0x3e01,	// (0x00037975) popup_vitu2_query_window_t1_ParamLimits

0x3e01,	// (0x00037975) popup_vitu2_query_window_t1

0x3e34,	// (0x000379a8) popup_vitu2_query_window_t2_ParamLimits

0x3e34,	// (0x000379a8) popup_vitu2_query_window_t2

0x3e46,	// (0x000379ba) popup_vitu2_query_window_t3_ParamLimits

0x3e46,	// (0x000379ba) popup_vitu2_query_window_t3

0x9dc9,	// (0x0003d93d) popup_vitu2_query_window_t4_ParamLimits

0x9dc9,	// (0x0003d93d) popup_vitu2_query_window_t4

0x9ddd,	// (0x0003d951) popup_vitu2_query_window_t5_ParamLimits

0x9ddd,	// (0x0003d951) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x000434ff) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x000434ff) popup_vitu2_query_window_t

0x04d3,	// (0x00034047) main_cset_text_pane

0x9808,	// (0x0003d37c) aid_area_touch_slider_ParamLimits

0x9824,	// (0x0003d398) cset_slider_pane_ParamLimits

0x9847,	// (0x0003d3bb) main_cset_slider_pane_g1_ParamLimits

0x985c,	// (0x0003d3d0) main_cset_slider_pane_g2_ParamLimits

0x04f4,	// (0x00034068) main_cset_slider_pane_g3_ParamLimits

0x04f4,	// (0x00034068) main_cset_slider_pane_g3

0x9871,	// (0x0003d3e5) main_cset_slider_pane_g4_ParamLimits

0x9871,	// (0x0003d3e5) main_cset_slider_pane_g4

0x9880,	// (0x0003d3f4) main_cset_slider_pane_g5_ParamLimits

0x9880,	// (0x0003d3f4) main_cset_slider_pane_g5

0x988c,	// (0x0003d400) main_cset_slider_pane_g6_ParamLimits

0x988c,	// (0x0003d400) main_cset_slider_pane_g6

0xf8e8,	// (0x0004345c) main_cset_slider_pane_g_ParamLimits

0x0524,	// (0x00034098) main_cset_slider_pane_t1_ParamLimits

0x9918,	// (0x0003d48c) main_cset_slider_pane_t2_ParamLimits

0x9932,	// (0x0003d4a6) main_cset_slider_pane_t3_ParamLimits

0x994c,	// (0x0003d4c0) main_cset_slider_pane_t4_ParamLimits

0x9966,	// (0x0003d4da) main_cset_slider_pane_t5_ParamLimits

0x9980,	// (0x0003d4f4) main_cset_slider_pane_t6_ParamLimits

0x9995,	// (0x0003d509) main_cset_slider_pane_t7_ParamLimits

0x99bf,	// (0x0003d533) main_cset_slider_pane_t8_ParamLimits

0x99bf,	// (0x0003d533) main_cset_slider_pane_t8

0x99e7,	// (0x0003d55b) main_cset_slider_pane_t9_ParamLimits

0x99e7,	// (0x0003d55b) main_cset_slider_pane_t9

0x9a0f,	// (0x0003d583) main_cset_slider_pane_t10_ParamLimits

0x9a0f,	// (0x0003d583) main_cset_slider_pane_t10

0x9a37,	// (0x0003d5ab) main_cset_slider_pane_t11_ParamLimits

0x9a37,	// (0x0003d5ab) main_cset_slider_pane_t11

0x9a5f,	// (0x0003d5d3) main_cset_slider_pane_t12_ParamLimits

0x9a5f,	// (0x0003d5d3) main_cset_slider_pane_t12

0x9a7c,	// (0x0003d5f0) main_cset_slider_pane_t13_ParamLimits

0x9a7c,	// (0x0003d5f0) main_cset_slider_pane_t13

0xf90d,	// (0x00043481) main_cset_slider_pane_t_ParamLimits

0x244f,	// (0x00035fc3) bg_popup_sub_pane_cp011

0x069f,	// (0x00034213) main_cset_text_pane_g1

0x06a7,	// (0x0003421b) main_cset_text_pane_t1

0x06b5,	// (0x00034229) main_cset_text_pane_t2

0x06c3,	// (0x00034237) main_cset_text_pane_t3

0x06d1,	// (0x00034245) main_cset_text_pane_t4

0x06df,	// (0x00034253) main_cset_text_pane_t5

0x06ed,	// (0x00034261) main_cset_text_pane_t6

0x06fb,	// (0x0003426f) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x0004350e) main_cset_text_pane_t

0x244f,	// (0x00035fc3) main_cam4_burst_pane

0x244f,	// (0x00035fc3) main_cam5_pane

0x974c,	// (0x0003d2c0) bg_button_pane_cp019

0x9755,	// (0x0003d2c9) bg_button_pane_cp020

0x0500,	// (0x00034074) main_cset_slider_pane_g7_ParamLimits

0x0500,	// (0x00034074) main_cset_slider_pane_g7

0x050c,	// (0x00034080) main_cset_slider_pane_g8_ParamLimits

0x050c,	// (0x00034080) main_cset_slider_pane_g8

0x98a0,	// (0x0003d414) main_cset_slider_pane_g9_ParamLimits

0x98a0,	// (0x0003d414) main_cset_slider_pane_g9

0x98ac,	// (0x0003d420) main_cset_slider_pane_g10_ParamLimits

0x98ac,	// (0x0003d420) main_cset_slider_pane_g10

0x98b8,	// (0x0003d42c) main_cset_slider_pane_g11_ParamLimits

0x98b8,	// (0x0003d42c) main_cset_slider_pane_g11

0x98c4,	// (0x0003d438) main_cset_slider_pane_g12_ParamLimits

0x98c4,	// (0x0003d438) main_cset_slider_pane_g12

0x98d0,	// (0x0003d444) main_cset_slider_pane_g13_ParamLimits

0x98d0,	// (0x0003d444) main_cset_slider_pane_g13

0x98dc,	// (0x0003d450) main_cset_slider_pane_g14_ParamLimits

0x98dc,	// (0x0003d450) main_cset_slider_pane_g14

0x98e8,	// (0x0003d45c) main_cset_slider_pane_g15_ParamLimits

0x98e8,	// (0x0003d45c) main_cset_slider_pane_g15

0x054c,	// (0x000340c0) main_cset_slider_pane_t14_ParamLimits

0x054c,	// (0x000340c0) main_cset_slider_pane_t14

0x0585,	// (0x000340f9) main_cset_slider_pane_t15_ParamLimits

0x0585,	// (0x000340f9) main_cset_slider_pane_t15

0x9df1,	// (0x0003d965) aid_cam4_burst_size_cell_ParamLimits

0x9df1,	// (0x0003d965) aid_cam4_burst_size_cell

0x9e0d,	// (0x0003d981) grid_cam4_burst_pane_ParamLimits

0x9e0d,	// (0x0003d981) grid_cam4_burst_pane

0x9e3f,	// (0x0003d9b3) linegrid_cam4_burst_pane_ParamLimits

0x9e3f,	// (0x0003d9b3) linegrid_cam4_burst_pane

0x9e5d,	// (0x0003d9d1) scroll_pane_cp30_ParamLimits

0x9e5d,	// (0x0003d9d1) scroll_pane_cp30

0x9e69,	// (0x0003d9dd) cell_cam4_burst_pane_ParamLimits

0x9e69,	// (0x0003d9dd) cell_cam4_burst_pane

0x0715,	// (0x00034289) linegrid_cam4_burst_pane_g1_ParamLimits

0x0715,	// (0x00034289) linegrid_cam4_burst_pane_g1

0x9ea9,	// (0x0003da1d) linegrid_cam4_burst_pane_g2_ParamLimits

0x9ea9,	// (0x0003da1d) linegrid_cam4_burst_pane_g2

0x0722,	// (0x00034296) linegrid_cam4_burst_pane_g3_ParamLimits

0x0722,	// (0x00034296) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x0004351d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x0004351d) linegrid_cam4_burst_pane_g

0x9eba,	// (0x0003da2e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9eba,	// (0x0003da2e) linegrid_cam4_burst_pane_g3_copy1

0x072f,	// (0x000342a3) linegrid_cam4_burst_pane_g4_ParamLimits

0x072f,	// (0x000342a3) linegrid_cam4_burst_pane_g4

0x9ed4,	// (0x0003da48) linegrid_cam4_burst_pane_g5_ParamLimits

0x9ed4,	// (0x0003da48) linegrid_cam4_burst_pane_g5

0x9ee5,	// (0x0003da59) linegrid_cam4_burst_pane_g6_ParamLimits

0x9ee5,	// (0x0003da59) linegrid_cam4_burst_pane_g6

0x073c,	// (0x000342b0) linegrid_cam4_burst_pane_g7_ParamLimits

0x073c,	// (0x000342b0) linegrid_cam4_burst_pane_g7

0x9efc,	// (0x0003da70) cell_cam4_burst_pane_g1

0x0755,	// (0x000342c9) main_cam5_pane_t1_ParamLimits

0x0755,	// (0x000342c9) main_cam5_pane_t1

0x0767,	// (0x000342db) main_cam5_pane_t2_ParamLimits

0x0767,	// (0x000342db) main_cam5_pane_t2

0x0779,	// (0x000342ed) main_cam5_pane_t3_ParamLimits

0x0779,	// (0x000342ed) main_cam5_pane_t3

0x078b,	// (0x000342ff) main_cam5_pane_t4_ParamLimits

0x078b,	// (0x000342ff) main_cam5_pane_t4

0x07a3,	// (0x00034317) main_cam5_pane_t5_ParamLimits

0x07a3,	// (0x00034317) main_cam5_pane_t5

0x07b7,	// (0x0003432b) main_cam5_pane_t6_ParamLimits

0x07b7,	// (0x0003432b) main_cam5_pane_t6

0x07cb,	// (0x0003433f) main_cam5_pane_t7_ParamLimits

0x07cb,	// (0x0003433f) main_cam5_pane_t7

0x07dd,	// (0x00034351) main_cam5_pane_t8_ParamLimits

0x07dd,	// (0x00034351) main_cam5_pane_t8

0x07fb,	// (0x0003436f) main_cam5_pane_t9_ParamLimits

0x07fb,	// (0x0003436f) main_cam5_pane_t9

0x080d,	// (0x00034381) main_cam5_pane_t10_ParamLimits

0x080d,	// (0x00034381) main_cam5_pane_t10

0x081f,	// (0x00034393) main_cam5_pane_t11_ParamLimits

0x081f,	// (0x00034393) main_cam5_pane_t11

0x0833,	// (0x000343a7) main_cam5_pane_t12_ParamLimits

0x0833,	// (0x000343a7) main_cam5_pane_t12

0x084a,	// (0x000343be) main_cam5_pane_t13_ParamLimits

0x084a,	// (0x000343be) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x00043529) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x00043529) main_cam5_pane_t

0x4af2,	// (0x00038666) popup_scut_keymap_window_ParamLimits

0x4af2,	// (0x00038666) popup_scut_keymap_window

0x9f0f,	// (0x0003da83) aid_size_cell_brow_shortcut

0xc78e,	// (0x00040302) bg_popup_window_pane_cp010

0x9f1b,	// (0x0003da8f) grid_scut_pane

0x9f27,	// (0x0003da9b) cell_scut_pane_ParamLimits

0x9f27,	// (0x0003da9b) cell_scut_pane

0x9f42,	// (0x0003dab6) cell_scut_pane_g1

0x086d,	// (0x000343e1) cell_scut_pane_t1

0x087c,	// (0x000343f0) cell_scut_pane_t2

0x9f4b,	// (0x0003dabf) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x00043544) cell_scut_pane_t

0x8051,	// (0x0003bbc5) main_mup3_pane_g8_ParamLimits

0x8051,	// (0x0003bbc5) main_mup3_pane_g8

0x9358,	// (0x0003cecc) area_vitu2_query_pane_ParamLimits

0x9358,	// (0x0003cecc) area_vitu2_query_pane

0x3dc3,	// (0x00037937) input_focus_pane_cp08

0x088b,	// (0x000343ff) area_vitu2_query_pane_g1

0x3ec4,	// (0x00037a38) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x0004354b) area_vitu2_query_pane_g

0x9f59,	// (0x0003dacd) area_vitu2_query_pane_t1_ParamLimits

0x9f59,	// (0x0003dacd) area_vitu2_query_pane_t1

0x9f6d,	// (0x0003dae1) area_vitu2_query_pane_t2_ParamLimits

0x9f6d,	// (0x0003dae1) area_vitu2_query_pane_t2

0x3ed5,	// (0x00037a49) area_vitu2_query_pane_t3_ParamLimits

0x3ed5,	// (0x00037a49) area_vitu2_query_pane_t3

0x3efd,	// (0x00037a71) area_vitu2_query_pane_t4_ParamLimits

0x3efd,	// (0x00037a71) area_vitu2_query_pane_t4

0x3f25,	// (0x00037a99) area_vitu2_query_pane_t5_ParamLimits

0x3f25,	// (0x00037a99) area_vitu2_query_pane_t5

0x3f4d,	// (0x00037ac1) area_vitu2_query_pane_t6_ParamLimits

0x3f4d,	// (0x00037ac1) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x00043550) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x00043550) area_vitu2_query_pane_t

0x9d96,	// (0x0003d90a) bg_button_pane_cp018

0x9f81,	// (0x0003daf5) bg_button_pane_cp021

0x3f99,	// (0x00037b0d) bg_button_pane_cp022

0x3fbc,	// (0x00037b30) input_focus_pane_cp09

0x6c43,	// (0x0003a7b7) aid_size_touch_mv_arrow_left

0x6c6e,	// (0x0003a7e2) aid_size_touch_mv_arrow_right

0x9900,	// (0x0003d474) main_cset_slider_pane_g16_ParamLimits

0x9900,	// (0x0003d474) main_cset_slider_pane_g16

0x990c,	// (0x0003d480) main_cset_slider_pane_g17_ParamLimits

0x990c,	// (0x0003d480) main_cset_slider_pane_g17

0x9efc,	// (0x0003da70) cell_cam4_burst_pane_g1_ParamLimits

0x244f,	// (0x00035fc3) compa_mode_pane

0x9afd,	// (0x0003d671) popup_vtel_slider_window_g3_ParamLimits

0x9afd,	// (0x0003d671) popup_vtel_slider_window_g3

0x9b11,	// (0x0003d685) popup_vtel_slider_window_g4_ParamLimits

0x9b11,	// (0x0003d685) popup_vtel_slider_window_g4

0x9b25,	// (0x0003d699) popup_vtel_slider_window_t1_ParamLimits

0x9b25,	// (0x0003d699) popup_vtel_slider_window_t1

0x244f,	// (0x00035fc3) main_cl_pane

0x78dc,	// (0x0003b450) popup_imed_adjust2_window_ParamLimits

0xe43c,	// (0x00041fb0) bg_tb_trans_pane_cp05_ParamLimits

0xedab,	// (0x0004291f) popup_imed_adjust2_window_g1_ParamLimits

0xedba,	// (0x0004292e) popup_imed_adjust2_window_g2_ParamLimits

0xedba,	// (0x0004292e) popup_imed_adjust2_window_g2

0xedc6,	// (0x0004293a) popup_imed_adjust2_window_g3_ParamLimits

0xedc6,	// (0x0004293a) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x000432c6) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x000432c6) popup_imed_adjust2_window_g

0xedd2,	// (0x00042946) popup_imed_adjust2_window_t1_ParamLimits

0xedea,	// (0x0004295e) slider_imed_adjust_pane_ParamLimits

0xedfe,	// (0x00042972) slider_imed_adjust_pane_g1_ParamLimits

0xee0e,	// (0x00042982) slider_imed_adjust_pane_g2_ParamLimits

0xee1e,	// (0x00042992) slider_imed_adjust_pane_g3_ParamLimits

0xee2f,	// (0x000429a3) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x000432cd) slider_imed_adjust_pane_g_ParamLimits

0x909b,	// (0x0003cc0f) aid_touch_area_cam4_ParamLimits

0x909b,	// (0x0003cc0f) aid_touch_area_cam4

0x90ab,	// (0x0003cc1f) battery_pane_cp01

0x9132,	// (0x0003cca6) main_camera4_pane_g6_ParamLimits

0x9132,	// (0x0003cca6) main_camera4_pane_g6

0x9150,	// (0x0003ccc4) main_camera4_pane_t2_ParamLimits

0x9150,	// (0x0003ccc4) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x000433cf) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x000433cf) main_camera4_pane_t

0x91d3,	// (0x0003cd47) aid_touch_area_vid4_ParamLimits

0x91d3,	// (0x0003cd47) aid_touch_area_vid4

0x9213,	// (0x0003cd87) main_video4_pane_g5_ParamLimits

0x9213,	// (0x0003cd87) main_video4_pane_g5

0x9239,	// (0x0003cdad) vid4_progress_pane_ParamLimits

0x9239,	// (0x0003cdad) vid4_progress_pane

0x0518,	// (0x0003408c) main_cset_slider_pane_g18_ParamLimits

0x0518,	// (0x0003408c) main_cset_slider_pane_g18

0x0749,	// (0x000342bd) cell_cam4_burst_pane_g2_ParamLimits

0x0749,	// (0x000342bd) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x00043524) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x00043524) cell_cam4_burst_pane_g

0x9f8d,	// (0x0003db01) bg_cl_pane_ParamLimits

0x9f8d,	// (0x0003db01) bg_cl_pane

0x9f99,	// (0x0003db0d) cl_header_pane_ParamLimits

0x9f99,	// (0x0003db0d) cl_header_pane

0x9fa5,	// (0x0003db19) cl_listscroll_pane_ParamLimits

0x9fa5,	// (0x0003db19) cl_listscroll_pane

0x0933,	// (0x000344a7) bg_cl_pane_g1

0x093b,	// (0x000344af) bg_cl_pane_g2

0x0943,	// (0x000344b7) bg_cl_pane_g3

0x094b,	// (0x000344bf) bg_cl_pane_g4

0x0953,	// (0x000344c7) bg_cl_pane_g5

0x095b,	// (0x000344cf) bg_cl_pane_g6

0x0963,	// (0x000344d7) bg_cl_pane_g7

0x096b,	// (0x000344df) bg_cl_pane_g8

0x0973,	// (0x000344e7) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x0004355f) bg_cl_pane_g

0x9fb1,	// (0x0003db25) aid_height_cl_leading_ParamLimits

0x9fb1,	// (0x0003db25) aid_height_cl_leading

0x9fbd,	// (0x0003db31) aid_height_cl_text_ParamLimits

0x9fbd,	// (0x0003db31) aid_height_cl_text

0x2b77,	// (0x000366eb) bg_cl_header_pane_ParamLimits

0x2b77,	// (0x000366eb) bg_cl_header_pane

0x9fd5,	// (0x0003db49) cl_header_pane_g1_ParamLimits

0x9fd5,	// (0x0003db49) cl_header_pane_g1

0x9fe2,	// (0x0003db56) cl_header_pane_t1_ParamLimits

0x9fe2,	// (0x0003db56) cl_header_pane_t1

0x097b,	// (0x000344ef) cl_list_pane

0x04eb,	// (0x0003405f) hc_scroll_pane_cp01

0xc9cd,	// (0x00040541) bg_cl_header_pane_g1

0x03cd,	// (0x00033f41) bg_cl_header_pane_g2

0xc9ed,	// (0x00040561) bg_cl_header_pane_g3

0x03dd,	// (0x00033f51) bg_cl_header_pane_g4

0x03d5,	// (0x00033f49) bg_cl_header_pane_g5

0x0638,	// (0x000341ac) bg_cl_header_pane_g6

0x03f5,	// (0x00033f69) bg_cl_header_pane_g7

0x03fd,	// (0x00033f71) bg_cl_header_pane_g8

0x03ed,	// (0x00033f61) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x00043572) bg_cl_header_pane_g

0x9ff4,	// (0x0003db68) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9ff4,	// (0x0003db68) hc_cl_list_double_graphic_heading_pane

0xa004,	// (0x0003db78) hc_cl_list_single_graphic_pane_ParamLimits

0xa004,	// (0x0003db78) hc_cl_list_single_graphic_pane

0xa016,	// (0x0003db8a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa016,	// (0x0003db8a) hc_cl_list_single_graphic_pane_g1

0xa022,	// (0x0003db96) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa022,	// (0x0003db96) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x00043585) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x00043585) hc_cl_list_single_graphic_pane_g

0xa036,	// (0x0003dbaa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa036,	// (0x0003dbaa) hc_cl_list_single_graphic_pane_t1

0xa016,	// (0x0003db8a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa016,	// (0x0003db8a) hc_cl_list_double_graphic_heading_pane_g1

0xa04b,	// (0x0003dbbf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa04b,	// (0x0003dbbf) hc_cl_list_double_graphic_heading_pane_g2

0xa05f,	// (0x0003dbd3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa05f,	// (0x0003dbd3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x0004358a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x0004358a) hc_cl_list_double_graphic_heading_pane_g

0xa073,	// (0x0003dbe7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa073,	// (0x0003dbe7) hc_cl_list_double_graphic_heading_pane_t1

0xa088,	// (0x0003dbfc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa088,	// (0x0003dbfc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x00043591) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x00043591) hc_cl_list_double_graphic_heading_pane_t

0xa0a5,	// (0x0003dc19) vid4_progress_pane_g1

0xa0b5,	// (0x0003dc29) vid4_progress_pane_g2

0xa0c5,	// (0x0003dc39) vid4_progress_pane_g3

0xa0d7,	// (0x0003dc4b) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x00043596) vid4_progress_pane_g

0xa0f5,	// (0x0003dc69) vid4_progress_pane_t1

0xa10f,	// (0x0003dc83) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x000435a1) vid4_progress_pane_t

0xa13a,	// (0x0003dcae) wait_bar_pane_cp07

0xe68d,	// (0x00042201) blid_firmament_pane_ParamLimits

0xe6d0,	// (0x00042244) popup_blid_sat_info2_window_g1

0xe6f4,	// (0x00042268) popup_blid_sat_info2_window_t3

0xe702,	// (0x00042276) popup_blid_sat_info2_window_t4

0xe710,	// (0x00042284) popup_blid_sat_info2_window_t5

0xe71e,	// (0x00042292) popup_blid_sat_info2_window_t6

0xe72e,	// (0x000422a2) popup_blid_sat_info2_window_t7

0xe73c,	// (0x000422b0) popup_blid_sat_info2_window_t8

0xe74a,	// (0x000422be) popup_blid_sat_info2_window_t9

0xe758,	// (0x000422cc) popup_blid_sat_info2_window_t10

0xe81f,	// (0x00042393) aid_firma_cardinal_ParamLimits

0xe84d,	// (0x000423c1) blid_firmament_pane_t1_ParamLimits

0xe864,	// (0x000423d8) blid_firmament_pane_t2_ParamLimits

0xe87b,	// (0x000423ef) blid_firmament_pane_t3_ParamLimits

0xe892,	// (0x00042406) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x000431bf) blid_firmament_pane_t_ParamLimits

0xe8a9,	// (0x0004241d) blid_sat_info_pane_ParamLimits

0x2b1e,	// (0x00036692) main_cam_set_pane_ParamLimits

0x871b,	// (0x0003c28f) aid_size_cell_colour_35_ParamLimits

0x8735,	// (0x0003c2a9) aid_size_cell_colour_112_ParamLimits

0x874c,	// (0x0003c2c0) aid_size_cell_effect_ParamLimits

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp02_ParamLimits

0xe833,	// (0x000423a7) heading_imed_pane_ParamLimits

0x8766,	// (0x0003c2da) listscroll_imed_pane_ParamLimits

0xdb43,	// (0x000416b7) popup_call2_audio_first_window_g5_ParamLimits

0xdb43,	// (0x000416b7) popup_call2_audio_first_window_g5

0x8d89,	// (0x0003c8fd) aid_size_touch_image3_arrow_left_ParamLimits

0x8d89,	// (0x0003c8fd) aid_size_touch_image3_arrow_left

0x8d9f,	// (0x0003c913) aid_size_touch_image3_arrow_right_ParamLimits

0x8d9f,	// (0x0003c913) aid_size_touch_image3_arrow_right

0xa125,	// (0x0003dc99) vid4_progress_pane_t3

0x88e1,	// (0x0003c455) main_hwr_training_symbol_option_pane_ParamLimits

0x88e1,	// (0x0003c455) main_hwr_training_symbol_option_pane

0xefd3,	// (0x00042b47) popup_hwr_training_preview_window_ParamLimits

0xefd3,	// (0x00042b47) popup_hwr_training_preview_window

0x8942,	// (0x0003c4b6) hwr_training_navi_pane_g5_ParamLimits

0x8942,	// (0x0003c4b6) hwr_training_navi_pane_g5

0x03bb,	// (0x00033f2f) popup_char_count_window

0x2b77,	// (0x000366eb) bg_popup_sub_pane_cp20_ParamLimits

0x9c18,	// (0x0003d78c) list_vitu2_match_list_pane_ParamLimits

0x9c24,	// (0x0003d798) vitu2_page_scroll_pane_ParamLimits

0x9c24,	// (0x0003d798) vitu2_page_scroll_pane

0x0a17,	// (0x0003458b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0a17,	// (0x0003458b) list_single_hwr_training_symbol_option_pane

0x0a2a,	// (0x0003459e) list_single_hwr_training_symbol_option_pane_g1

0x0a32,	// (0x000345a6) list_single_hwr_training_symbol_option_pane_t1

0x0a40,	// (0x000345b4) bg_button_pane_cp023

0x0a49,	// (0x000345bd) bg_button_pane_cp024

0x0a7c,	// (0x000345f0) vitu2_page_scroll_pane_g1

0x0a84,	// (0x000345f8) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x000435a8) vitu2_page_scroll_pane_g

0x0a8c,	// (0x00034600) vitu2_page_scroll_pane_t1

0x0a9b,	// (0x0003460f) popup_char_count_window_g1

0x0aa4,	// (0x00034618) popup_char_count_window_g2

0x0aad,	// (0x00034621) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x000435ad) popup_char_count_window_g

0x0ab6,	// (0x0003462a) popup_char_count_window_t1

0x244f,	// (0x00035fc3) main_vded2_pane

0xed97,	// (0x0004290b) aid_size_cell_imed_line

0xeda1,	// (0x00042915) grid_imed_line_width_pane

0x92ad,	// (0x0003ce21) vid4_indicators_pane_g4

0x0ac4,	// (0x00034638) cell_imed_line_width_pane_ParamLimits

0x0ac4,	// (0x00034638) cell_imed_line_width_pane

0x0ada,	// (0x0003464e) cell_imed_line_width_pane_g1

0x0ae3,	// (0x00034657) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x000435b4) cell_imed_line_width_pane_g

0xa14d,	// (0x0003dcc1) main_vded2_pane_g1_ParamLimits

0xa14d,	// (0x0003dcc1) main_vded2_pane_g1

0xa15c,	// (0x0003dcd0) main_vded2_pane_g2_ParamLimits

0xa15c,	// (0x0003dcd0) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x000435b9) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x000435b9) main_vded2_pane_g

0xa16a,	// (0x0003dcde) vded2_slider_pane_ParamLimits

0xa16a,	// (0x0003dcde) vded2_slider_pane

0xa177,	// (0x0003dceb) aid_size_touch_vded2_end

0xa181,	// (0x0003dcf5) aid_size_touch_vded2_playhead

0x0aeb,	// (0x0003465f) aid_size_touch_vded2_start

0x0af3,	// (0x00034667) vded2_slider_bg_pane

0x0afc,	// (0x00034670) vded2_slider_pane_g1

0x0b05,	// (0x00034679) vded2_slider_pane_g2

0xa189,	// (0x0003dcfd) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x000435be) vded2_slider_pane_g

0x0b0d,	// (0x00034681) vded2_slider_bg_pane_g1

0x0b16,	// (0x0003468a) vded2_slider_bg_pane_g2

0x0b1f,	// (0x00034693) vded2_slider_bg_pane_g3

0x0002,

0xf716,	// (0x0004328a) vded2_slider_bg_pane_g

0x70d7,	// (0x0003ac4b) aid_postcard_touch_down_pane_ParamLimits

0x70d7,	// (0x0003ac4b) aid_postcard_touch_down_pane

0x70e7,	// (0x0003ac5b) aid_postcard_touch_up_pane_ParamLimits

0x70e7,	// (0x0003ac5b) aid_postcard_touch_up_pane

0x244f,	// (0x00035fc3) main_blid2_pane

0x785b,	// (0x0003b3cf) popup_blid2_search_window

0x244f,	// (0x00035fc3) blid2_gps_pane

0x244f,	// (0x00035fc3) blid2_navig_pane

0x244f,	// (0x00035fc3) blid2_search_pane

0x244f,	// (0x00035fc3) blid2_tripm_pane

0xa192,	// (0x0003dd06) blid2_search_pane_g1_ParamLimits

0xa192,	// (0x0003dd06) blid2_search_pane_g1

0xa19e,	// (0x0003dd12) blid2_search_pane_t1_ParamLimits

0xa19e,	// (0x0003dd12) blid2_search_pane_t1

0xa1b0,	// (0x0003dd24) aid_size_cell_blid2_gps_ParamLimits

0xa1b0,	// (0x0003dd24) aid_size_cell_blid2_gps

0xa1c0,	// (0x0003dd34) blid2_gps_pane_g1_ParamLimits

0xa1c0,	// (0x0003dd34) blid2_gps_pane_g1

0xa1cc,	// (0x0003dd40) grid_blid2_satellite_pane_ParamLimits

0xa1cc,	// (0x0003dd40) grid_blid2_satellite_pane

0xa1da,	// (0x0003dd4e) blid2_navig_pane_g1_ParamLimits

0xa1da,	// (0x0003dd4e) blid2_navig_pane_g1

0xa1e6,	// (0x0003dd5a) blid2_navig_pane_t1_ParamLimits

0xa1e6,	// (0x0003dd5a) blid2_navig_pane_t1

0xa1f8,	// (0x0003dd6c) blid2_navig_pane_t2_ParamLimits

0xa1f8,	// (0x0003dd6c) blid2_navig_pane_t2

0x0001,

0xfa51,	// (0x000435c5) blid2_navig_pane_t_ParamLimits

0xfa51,	// (0x000435c5) blid2_navig_pane_t

0xa20a,	// (0x0003dd7e) blid2_navig_ring_pane_ParamLimits

0xa20a,	// (0x0003dd7e) blid2_navig_ring_pane

0xa21a,	// (0x0003dd8e) blid2_speed_pane_ParamLimits

0xa21a,	// (0x0003dd8e) blid2_speed_pane

0xa226,	// (0x0003dd9a) blid2_tripm_pane_g1_ParamLimits

0xa226,	// (0x0003dd9a) blid2_tripm_pane_g1

0xa236,	// (0x0003ddaa) blid2_tripm_pane_g2_ParamLimits

0xa236,	// (0x0003ddaa) blid2_tripm_pane_g2

0xa242,	// (0x0003ddb6) blid2_tripm_pane_g3_ParamLimits

0xa242,	// (0x0003ddb6) blid2_tripm_pane_g3

0xa24e,	// (0x0003ddc2) blid2_tripm_pane_g4_ParamLimits

0xa24e,	// (0x0003ddc2) blid2_tripm_pane_g4

0xa25a,	// (0x0003ddce) blid2_tripm_pane_g5_ParamLimits

0xa25a,	// (0x0003ddce) blid2_tripm_pane_g5

0x0005,

0xfa56,	// (0x000435ca) blid2_tripm_pane_g_ParamLimits

0xfa56,	// (0x000435ca) blid2_tripm_pane_g

0xa276,	// (0x0003ddea) blid2_tripm_pane_t1_ParamLimits

0xa276,	// (0x0003ddea) blid2_tripm_pane_t1

0xa288,	// (0x0003ddfc) blid2_tripm_pane_t2_ParamLimits

0xa288,	// (0x0003ddfc) blid2_tripm_pane_t2

0xa29a,	// (0x0003de0e) blid2_tripm_pane_t3_ParamLimits

0xa29a,	// (0x0003de0e) blid2_tripm_pane_t3

0x0003,

0xfa63,	// (0x000435d7) blid2_tripm_pane_t_ParamLimits

0xfa63,	// (0x000435d7) blid2_tripm_pane_t

0xa2cc,	// (0x0003de40) cell_blid2_satellite_pane_ParamLimits

0xa2cc,	// (0x0003de40) cell_blid2_satellite_pane

0xa2ea,	// (0x0003de5e) cell_blid2_satellite_pane_g1

0x0b28,	// (0x0003469c) cell_blid2_satellite_pane_t1

0xc7c4,	// (0x00040338) blid2_speed_pane_g1

0x0b36,	// (0x000346aa) blid2_speed_pane_t1

0x0b44,	// (0x000346b8) blid2_speed_pane_t2

0x0001,

0xfa6c,	// (0x000435e0) blid2_speed_pane_t

0xc7c4,	// (0x00040338) blid2_navig_ring_pane_g1

0xa2f3,	// (0x0003de67) blid2_navig_ring_pane_g2

0xa2fb,	// (0x0003de6f) blid2_navig_ring_pane_g3

0xa303,	// (0x0003de77) blid2_navig_ring_pane_g4

0xa30b,	// (0x0003de7f) blid2_navig_ring_pane_g5

0x0004,

0xfa71,	// (0x000435e5) blid2_navig_ring_pane_g

0x244f,	// (0x00035fc3) bg_popup_window_pane_cp011

0x0b52,	// (0x000346c6) popup_blid2_search_window_g1

0x0b5a,	// (0x000346ce) popup_blid2_search_window_t1

0x0b68,	// (0x000346dc) popup_blid2_search_window_t2

0x0001,

0xfa7c,	// (0x000435f0) popup_blid2_search_window_t

0xc8dc,	// (0x00040450) main_browser_pane_g1

0x2bf7,	// (0x0003676b) main_browser_pane_ParamLimits

0x2b1e,	// (0x00036692) bg_button_pane_cp011_ParamLimits

0x9513,	// (0x0003d087) cell_vitu2_function_pane_g1_ParamLimits

0xe43c,	// (0x00041fb0) bg_popup_sub_pane_cp22_ParamLimits

0x3dc3,	// (0x00037937) input_focus_pane_cp08_ParamLimits

0x9dae,	// (0x0003d922) popup_vitu2_query_button_pane_ParamLimits

0x9dae,	// (0x0003d922) popup_vitu2_query_button_pane

0x3ddf,	// (0x00037953) popup_vitu2_query_input_button_pane

0x0693,	// (0x00034207) popup_vitu2_query_window_g1_ParamLimits

0x3de9,	// (0x0003795d) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x000434f8) popup_vitu2_query_window_g_ParamLimits

0x244f,	// (0x00035fc3) bg_button_pane_cp026

0xa313,	// (0x0003de87) popup_vitu2_query_input_button_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp025

0x0b76,	// (0x000346ea) popup_vitu2_query_button_pane_t1

0x7d1f,	// (0x0003b893) main_mp3_pane_t6

0x7d2f,	// (0x0003b8a3) popup_slider_window_cp01

0x9188,	// (0x0003ccfc) cam4_battery_pane

0x9266,	// (0x0003cdda) cam4_battery_pane_cp02

0xa09d,	// (0x0003dc11) cam4_battery_pane_cp01

0xa09d,	// (0x0003dc11) cam4_battery_pane_cp03

0xc7c4,	// (0x00040338) cam4_battery_pane_g1

0xe9a4,	// (0x00042518) cam4_battery_pane_g2

0x0001,

0xfa81,	// (0x000435f5) cam4_battery_pane_g

0xe766,	// (0x000422da) popup_blid_sat_info2_window_t11

0x6c43,	// (0x0003a7b7) aid_size_touch_mv_arrow_left_ParamLimits

0x6c6e,	// (0x0003a7e2) aid_size_touch_mv_arrow_right_ParamLimits

0xd079,	// (0x00040bed) navi_pane_g1_ParamLimits

0x6cad,	// (0x0003a821) navi_pane_g2_ParamLimits

0x6cdb,	// (0x0003a84f) navi_pane_g3_ParamLimits

0xf35f,	// (0x00042ed3) navi_pane_g_ParamLimits

0x6d35,	// (0x0003a8a9) navi_pane_mv_t1_ParamLimits

0x8772,	// (0x0003c2e6) grid_imed_effect_pane_ParamLimits

0x5823,	// (0x00039397) aid_placing_vt_slider_lsc

0xc827,	// (0x0004039b) aid_placing_vt_slider_prt

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp01_ParamLimits

0xea24,	// (0x00042598) popup_image_details_window_g1_ParamLimits

0xea37,	// (0x000425ab) popup_image_details_window_g2_ParamLimits

0xea4c,	// (0x000425c0) popup_image_details_window_g3_ParamLimits

0xea4c,	// (0x000425c0) popup_image_details_window_g3

0xf68b,	// (0x000431ff) popup_image_details_window_g_ParamLimits

0xea60,	// (0x000425d4) popup_image_details_window_t1_ParamLimits

0xea72,	// (0x000425e6) popup_image_details_window_t2_ParamLimits

0xea8b,	// (0x000425ff) popup_image_details_window_t3_ParamLimits

0xea9f,	// (0x00042613) popup_image_details_window_t4_ParamLimits

0xeaba,	// (0x0004262e) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x00043206) popup_image_details_window_t_ParamLimits

0x9fc9,	// (0x0003db3d) cl_header_name_pane_ParamLimits

0x9fc9,	// (0x0003db3d) cl_header_name_pane

0xa31b,	// (0x0003de8f) cl_header_name_pane_t1_ParamLimits

0xa31b,	// (0x0003de8f) cl_header_name_pane_t1

0xa332,	// (0x0003dea6) cl_header_name_pane_t2_ParamLimits

0xa332,	// (0x0003dea6) cl_header_name_pane_t2

0xa35c,	// (0x0003ded0) cl_header_name_pane_t3_ParamLimits

0xa35c,	// (0x0003ded0) cl_header_name_pane_t3

0x0002,

0xfa86,	// (0x000435fa) cl_header_name_pane_t_ParamLimits

0xfa86,	// (0x000435fa) cl_header_name_pane_t

0x6d06,	// (0x0003a87a) navi_pane_mv_g2_ParamLimits

0x0357,	// (0x00033ecb) field_vitu2_entry_pane_g1_ParamLimits

0x0363,	// (0x00033ed7) field_vitu2_entry_pane_g2_ParamLimits

0xe52c,	// (0x000420a0) field_vitu2_entry_pane_g3_ParamLimits

0xe52c,	// (0x000420a0) field_vitu2_entry_pane_g3

0xf88d,	// (0x00043401) field_vitu2_entry_pane_g_ParamLimits

0x94a1,	// (0x0003d015) cell_vitu2_itu_pane_g1_ParamLimits

0x94b9,	// (0x0003d02d) cell_vitu2_itu_pane_g2_ParamLimits

0x94b9,	// (0x0003d02d) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x0004340d) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x0004340d) cell_vitu2_itu_pane_g

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp05_ParamLimits

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp05

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp03

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp04

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp10_ParamLimits

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp10

0x3faa,	// (0x00037b1e) bg_vkb2_func_pane_cp08

0x9d96,	// (0x0003d90a) bg_vkb2_func_pane_cp06

0x9f81,	// (0x0003daf5) bg_vkb2_func_pane_cp07

0x0a52,	// (0x000345c6) bg_vkb2_func_pane_cp11_ParamLimits

0x0a52,	// (0x000345c6) bg_vkb2_func_pane_cp11

0x0a67,	// (0x000345db) bg_vkb2_func_pane_cp12_ParamLimits

0x0a67,	// (0x000345db) bg_vkb2_func_pane_cp12

0x244f,	// (0x00035fc3) bg_vkb2_func_pane_cp09

0x03cd,	// (0x00033f41) bg_vkb2_func_pane_g1

0xc9ed,	// (0x00040561) bg_vkb2_func_pane_g2

0x03d5,	// (0x00033f49) bg_vkb2_func_pane_g3

0x03dd,	// (0x00033f51) bg_vkb2_func_pane_g4

0x0638,	// (0x000341ac) bg_vkb2_func_pane_g5

0x03f5,	// (0x00033f69) bg_vkb2_func_pane_g6

0x03fd,	// (0x00033f71) bg_vkb2_func_pane_g7

0x03ed,	// (0x00033f61) bg_vkb2_func_pane_g8

0xc9cd,	// (0x00040541) bg_vkb2_func_pane_g9

0x0008,

0xfa8d,	// (0x00043601) bg_vkb2_func_pane_g

0xa268,	// (0x0003dddc) blid2_tripm_pane_g6_ParamLimits

0xa268,	// (0x0003dddc) blid2_tripm_pane_g6

0x0114,	// (0x00033c88) mp4_progress_pane_g1

0xa2c0,	// (0x0003de34) blid2_tripm_values_pane_ParamLimits

0xa2c0,	// (0x0003de34) blid2_tripm_values_pane

0xa381,	// (0x0003def5) blid2_tripm_values_pane_t1

0xa38f,	// (0x0003df03) blid2_tripm_values_pane_t2

0xa39d,	// (0x0003df11) blid2_tripm_values_pane_t3

0xa3ab,	// (0x0003df1f) blid2_tripm_values_pane_t4

0xa3b9,	// (0x0003df2d) blid2_tripm_values_pane_t5

0xa3c7,	// (0x0003df3b) blid2_tripm_values_pane_t6

0xa3d5,	// (0x0003df49) blid2_tripm_values_pane_t7

0xa3e3,	// (0x0003df57) blid2_tripm_values_pane_t8

0xa3f1,	// (0x0003df65) blid2_tripm_values_pane_t9

0x0008,

0xfaa0,	// (0x00043614) blid2_tripm_values_pane_t

0x5861,	// (0x000393d5) call_video_pane_t1_ParamLimits

0x587e,	// (0x000393f2) call_video_pane_t2_ParamLimits

0xf208,	// (0x00042d7c) call_video_pane_t_ParamLimits

0x3b7b,	// (0x000376ef) msg_header_pane_g1_ParamLimits

0xd287,	// (0x00040dfb) msg_header_pane_g2_ParamLimits

0xd287,	// (0x00040dfb) msg_header_pane_g2

0x0001,

0xf402,	// (0x00042f76) msg_header_pane_g_ParamLimits

0xf402,	// (0x00042f76) msg_header_pane_g

0x2bf7,	// (0x0003676b) main_clock2_pane_ParamLimits

0x84eb,	// (0x0003c05f) grid_clock2_toolbar_pane_ParamLimits

0x84eb,	// (0x0003c05f) grid_clock2_toolbar_pane

0x84eb,	// (0x0003c05f) listscroll_clock2_pane_ParamLimits

0x84eb,	// (0x0003c05f) listscroll_clock2_pane

0x859a,	// (0x0003c10e) main_clock2_pane_t3_ParamLimits

0x859a,	// (0x0003c10e) main_clock2_pane_t3

0x85ac,	// (0x0003c120) main_clock2_pane_t4_ParamLimits

0x85ac,	// (0x0003c120) main_clock2_pane_t4

0x0b84,	// (0x000346f8) cell_clock2_toolbar_pane

0x0b8c,	// (0x00034700) cell_clock2_toolbar_pane_cp01

0x0b8c,	// (0x00034700) cell_clock2_toolbar_pane_cp02

0x0b94,	// (0x00034708) cell_clock2_toolbar_pane_cp03

0x0b9c,	// (0x00034710) list_clock2_pane

0xcfca,	// (0x00040b3e) scroll_pane_cp10

0x0ba4,	// (0x00034718) list_single_clock2_pane_ParamLimits

0x0ba4,	// (0x00034718) list_single_clock2_pane

0xc78e,	// (0x00040302) list_highlight_pane_cp08

0x0bb1,	// (0x00034725) list_single_clock2_pane_t1

0x0bbf,	// (0x00034733) list_single_clock2_pane_t2

0x0001,

0xfab3,	// (0x00043627) list_single_clock2_pane_t

0x244f,	// (0x00035fc3) bg_button_pane_cp10

0x0bcd,	// (0x00034741) cell_clock2_toolbar_pane_g1

0x7039,	// (0x0003abad) aid_main_viewer_pane_g1_ParamLimits

0x7039,	// (0x0003abad) aid_main_viewer_pane_g1

0x7045,	// (0x0003abb9) aid_main_viewer_pane_g2_ParamLimits

0x7045,	// (0x0003abb9) aid_main_viewer_pane_g2

0x7051,	// (0x0003abc5) aid_main_viewer_pane_g3_ParamLimits

0x7051,	// (0x0003abc5) aid_main_viewer_pane_g3

0x7062,	// (0x0003abd6) aid_main_viewer_pane_g4_ParamLimits

0x7062,	// (0x0003abd6) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00042f87) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00042f87) aid_main_viewer_pane_g

0x7833,	// (0x0003b3a7) main_calc_pane_ParamLimits

0x7840,	// (0x0003b3b4) main_dialer2_pane_ParamLimits

0x244f,	// (0x00035fc3) main_cam6_pane

0x244f,	// (0x00035fc3) main_vid6_pane

0x84f7,	// (0x0003c06b) listscroll_gen_pane_cp06_ParamLimits

0x84f7,	// (0x0003c06b) listscroll_gen_pane_cp06

0x85be,	// (0x0003c132) main_clock2_pane_t5_ParamLimits

0x85be,	// (0x0003c132) main_clock2_pane_t5

0x860b,	// (0x0003c17f) aid_call2_pane_cp10_ParamLimits

0x861d,	// (0x0003c191) aid_call_pane_cp10_ParamLimits

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x862f,	// (0x0003c1a3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x862f,	// (0x0003c1a3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd04e,	// (0x00040bc2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x000432bb) popup_clock_analogue_window_cp10_g_ParamLimits

0x8645,	// (0x0003c1b9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8d36,	// (0x0003c8aa) cell_dialer2_keypad_pane_g2_ParamLimits

0x8d36,	// (0x0003c8aa) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x000433a0) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x000433a0) cell_dialer2_keypad_pane_g

0x8d52,	// (0x0003c8c6) cell_dialer2_keypad_pane_t1

0x97f5,	// (0x0003d369) main_cset_text2_pane_ParamLimits

0x97f5,	// (0x0003d369) main_cset_text2_pane

0x088b,	// (0x000343ff) area_vitu2_query_pane_g1_ParamLimits

0x3ec4,	// (0x00037a38) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x0004354b) area_vitu2_query_pane_g_ParamLimits

0x3f75,	// (0x00037ae9) area_vitu2_query_pane_t7_ParamLimits

0x3f75,	// (0x00037ae9) area_vitu2_query_pane_t7

0x9d96,	// (0x0003d90a) bg_button_pane_cp018_ParamLimits

0x9f81,	// (0x0003daf5) bg_button_pane_cp021_ParamLimits

0x3f99,	// (0x00037b0d) bg_button_pane_cp022_ParamLimits

0x3faa,	// (0x00037b1e) bg_vkb2_func_pane_cp08_ParamLimits

0x9d96,	// (0x0003d90a) bg_vkb2_func_pane_cp06_ParamLimits

0x9f81,	// (0x0003daf5) bg_vkb2_func_pane_cp07_ParamLimits

0x3fbc,	// (0x00037b30) input_focus_pane_cp09_ParamLimits

0xa3ff,	// (0x0003df73) cam6_autofocus_pane_ParamLimits

0xa3ff,	// (0x0003df73) cam6_autofocus_pane

0xa421,	// (0x0003df95) cam6_image_uncrop_pane_ParamLimits

0xa421,	// (0x0003df95) cam6_image_uncrop_pane

0xa44e,	// (0x0003dfc2) cam6_indi_pane_ParamLimits

0xa44e,	// (0x0003dfc2) cam6_indi_pane

0xa468,	// (0x0003dfdc) cam6_mode_pane_ParamLimits

0xa468,	// (0x0003dfdc) cam6_mode_pane

0xa47c,	// (0x0003dff0) cam6_timer_pane_ParamLimits

0xa47c,	// (0x0003dff0) cam6_timer_pane

0xa488,	// (0x0003dffc) cam6_zoom_pane_ParamLimits

0xa488,	// (0x0003dffc) cam6_zoom_pane

0xa4a4,	// (0x0003e018) cam6_mode_pane_g1_ParamLimits

0xa4a4,	// (0x0003e018) cam6_mode_pane_g1

0xa4b0,	// (0x0003e024) cam6_mode_pane_g2_ParamLimits

0xa4b0,	// (0x0003e024) cam6_mode_pane_g2

0xa4bc,	// (0x0003e030) cam6_mode_pane_g3_ParamLimits

0xa4bc,	// (0x0003e030) cam6_mode_pane_g3

0xa4c8,	// (0x0003e03c) cam6_mode_pane_g4_ParamLimits

0xa4c8,	// (0x0003e03c) cam6_mode_pane_g4

0x0003,

0xfab8,	// (0x0004362c) cam6_mode_pane_g_ParamLimits

0xfab8,	// (0x0004362c) cam6_mode_pane_g

0xe83f,	// (0x000423b3) bg_tb_trans_pane_cp08_ParamLimits

0xe83f,	// (0x000423b3) bg_tb_trans_pane_cp08

0x0be3,	// (0x00034757) cam6_battery_pane_ParamLimits

0x0be3,	// (0x00034757) cam6_battery_pane

0x0bf9,	// (0x0003476d) cam6_indi_pane_g1_ParamLimits

0x0bf9,	// (0x0003476d) cam6_indi_pane_g1

0x0c0b,	// (0x0003477f) cam6_indi_pane_g2_ParamLimits

0x0c0b,	// (0x0003477f) cam6_indi_pane_g2

0x0c1d,	// (0x00034791) cam6_indi_pane_g3_ParamLimits

0x0c1d,	// (0x00034791) cam6_indi_pane_g3

0x0002,

0xfac1,	// (0x00043635) cam6_indi_pane_g_ParamLimits

0xfac1,	// (0x00043635) cam6_indi_pane_g

0x0c2f,	// (0x000347a3) cam6_indi_pane_t1_ParamLimits

0x0c2f,	// (0x000347a3) cam6_indi_pane_t1

0x92e2,	// (0x0003ce56) cam6_autofocus_pane_g1

0x92ea,	// (0x0003ce5e) cam6_autofocus_pane_g2

0x92f2,	// (0x0003ce66) cam6_autofocus_pane_g3

0x92fa,	// (0x0003ce6e) cam6_autofocus_pane_g4

0x0003,

0xfac8,	// (0x0004363c) cam6_autofocus_pane_g

0x0c55,	// (0x000347c9) cam6_timer_pane_g1

0x0c5d,	// (0x000347d1) cam6_timer_pane_t1

0x0c6b,	// (0x000347df) cam6_zoom_cont_pane

0x0c73,	// (0x000347e7) cam6_zoom_pane_g1

0x0c7b,	// (0x000347ef) cam6_zoom_pane_g2

0xa4d4,	// (0x0003e048) cam6_zoom_pane_g3

0x0002,

0xfad1,	// (0x00043645) cam6_zoom_pane_g

0xc7c4,	// (0x00040338) cam6_battery_pane_g1

0xc7c4,	// (0x00040338) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) cam6_battery_pane_g

0x0c83,	// (0x000347f7) cam6_zoom_cont_pane_g1

0x0c8c,	// (0x00034800) cam6_zoom_cont_pane_g2

0x0c95,	// (0x00034809) cam6_zoom_cont_pane_g3

0x0002,

0xfad8,	// (0x0004364c) cam6_zoom_cont_pane_g

0xa4f1,	// (0x0003e065) cam6_mode_pane_cp_ParamLimits

0xa4f1,	// (0x0003e065) cam6_mode_pane_cp

0xa488,	// (0x0003dffc) cam6_zoom_pane_cp_ParamLimits

0xa488,	// (0x0003dffc) cam6_zoom_pane_cp

0xa505,	// (0x0003e079) vid6_image_uncrop_cif_pane_ParamLimits

0xa505,	// (0x0003e079) vid6_image_uncrop_cif_pane

0xa531,	// (0x0003e0a5) vid6_image_uncrop_nhd_pane_ParamLimits

0xa531,	// (0x0003e0a5) vid6_image_uncrop_nhd_pane

0xa421,	// (0x0003df95) vid6_image_uncrop_vga_pane_ParamLimits

0xa421,	// (0x0003df95) vid6_image_uncrop_vga_pane

0xa550,	// (0x0003e0c4) vid6_image_uncrop_wvga_pane_ParamLimits

0xa550,	// (0x0003e0c4) vid6_image_uncrop_wvga_pane

0xa56f,	// (0x0003e0e3) vid6_indi_pane_ParamLimits

0xa56f,	// (0x0003e0e3) vid6_indi_pane

0xe83f,	// (0x000423b3) bg_tb_trans_pane_cp09_ParamLimits

0xe83f,	// (0x000423b3) bg_tb_trans_pane_cp09

0x0cad,	// (0x00034821) cam6_battery_pane_cp_ParamLimits

0x0cad,	// (0x00034821) cam6_battery_pane_cp

0x0cb9,	// (0x0003482d) vid6_indi_pane_g1_ParamLimits

0x0cb9,	// (0x0003482d) vid6_indi_pane_g1

0x0ccb,	// (0x0003483f) vid6_indi_pane_g2_ParamLimits

0x0ccb,	// (0x0003483f) vid6_indi_pane_g2

0x0cdd,	// (0x00034851) vid6_indi_pane_g3_ParamLimits

0x0cdd,	// (0x00034851) vid6_indi_pane_g3

0x0cf4,	// (0x00034868) vid6_indi_pane_g4_ParamLimits

0x0cf4,	// (0x00034868) vid6_indi_pane_g4

0x0d0b,	// (0x0003487f) vid6_indi_pane_g5_ParamLimits

0x0d0b,	// (0x0003487f) vid6_indi_pane_g5

0x0004,

0xfadf,	// (0x00043653) vid6_indi_pane_g_ParamLimits

0xfadf,	// (0x00043653) vid6_indi_pane_g

0x0d25,	// (0x00034899) vid6_indi_pane_t1_ParamLimits

0x0d25,	// (0x00034899) vid6_indi_pane_t1

0x0d3b,	// (0x000348af) vid6_indi_pane_t2_ParamLimits

0x0d3b,	// (0x000348af) vid6_indi_pane_t2

0x0d63,	// (0x000348d7) vid6_indi_pane_t3_ParamLimits

0x0d63,	// (0x000348d7) vid6_indi_pane_t3

0x0d8b,	// (0x000348ff) vid6_indi_pane_t4_ParamLimits

0x0d8b,	// (0x000348ff) vid6_indi_pane_t4

0x0003,

0xfaea,	// (0x0004365e) vid6_indi_pane_t_ParamLimits

0xfaea,	// (0x0004365e) vid6_indi_pane_t

0x0daf,	// (0x00034923) wait_bar_pane_cp08

0xa594,	// (0x0003e108) main_cset_text2_pane_t1_ParamLimits

0xa594,	// (0x0003e108) main_cset_text2_pane_t1

0xa4dc,	// (0x0003e050) listscroll_gen_pane_cp06_t1_ParamLimits

0xa4dc,	// (0x0003e050) listscroll_gen_pane_cp06_t1

0x244f,	// (0x00035fc3) main_cam6_set_pane

0x2b85,	// (0x000366f9) bg_tb_trans_pane_cp06_ParamLimits

0x9190,	// (0x0003cd04) cam4_indicators_pane_g1_ParamLimits

0x91a1,	// (0x0003cd15) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x000433dd) cam4_indicators_pane_g_ParamLimits

0x91b9,	// (0x0003cd2d) cam4_indicators_pane_t1_ParamLimits

0x2b1e,	// (0x00036692) bg_tb_trans_pane_cp07_ParamLimits

0x9270,	// (0x0003cde4) vid4_indicators_pane_g1_ParamLimits

0x9286,	// (0x0003cdfa) vid4_indicators_pane_g2_ParamLimits

0x929a,	// (0x0003ce0e) vid4_indicators_pane_g3_ParamLimits

0x92ad,	// (0x0003ce21) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x000433ef) vid4_indicators_pane_g_ParamLimits

0x92cb,	// (0x0003ce3f) vid4_indicators_pane_t1_ParamLimits

0xa0a5,	// (0x0003dc19) vid4_progress_pane_g1_ParamLimits

0xa0b5,	// (0x0003dc29) vid4_progress_pane_g2_ParamLimits

0xa0c5,	// (0x0003dc39) vid4_progress_pane_g3_ParamLimits

0xa0d7,	// (0x0003dc4b) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x00043596) vid4_progress_pane_g_ParamLimits

0xa0f5,	// (0x0003dc69) vid4_progress_pane_t1_ParamLimits

0xa10f,	// (0x0003dc83) vid4_progress_pane_t2_ParamLimits

0xa125,	// (0x0003dc99) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x000435a1) vid4_progress_pane_t_ParamLimits

0xa13a,	// (0x0003dcae) wait_bar_pane_cp07_ParamLimits

0xa5bb,	// (0x0003e12f) main_cam6_set_pane_g2_ParamLimits

0xa5bb,	// (0x0003e12f) main_cam6_set_pane_g2

0xa5c7,	// (0x0003e13b) main_cset6_listscroll_pane_ParamLimits

0xa5c7,	// (0x0003e13b) main_cset6_listscroll_pane

0xa5f4,	// (0x0003e168) main_cset6_slider_pane_ParamLimits

0xa5f4,	// (0x0003e168) main_cset6_slider_pane

0xa600,	// (0x0003e174) main_cset6_text2_pane_ParamLimits

0xa600,	// (0x0003e174) main_cset6_text2_pane

0x0dbe,	// (0x00034932) main_cset6_text_pane

0x0dc6,	// (0x0003493a) main_cset_list_pane_copy1_ParamLimits

0x0dc6,	// (0x0003493a) main_cset_list_pane_copy1

0x0dd6,	// (0x0003494a) scroll_pane_cp028_copy1

0xa613,	// (0x0003e187) cset_list_set_pane_copy1

0xa623,	// (0x0003e197) aid_position_infowindow_above_copy1

0xa62b,	// (0x0003e19f) aid_position_infowindow_below_copy1

0x3ffa,	// (0x00037b6e) cset_list_set_pane_g1_copy1

0x4002,	// (0x00037b76) cset_list_set_pane_g3_copy1_ParamLimits

0x4002,	// (0x00037b76) cset_list_set_pane_g3_copy1

0x4011,	// (0x00037b85) cset_list_set_pane_t1_copy1_ParamLimits

0x4011,	// (0x00037b85) cset_list_set_pane_t1_copy1

0x2b1e,	// (0x00036692) list_highlight_pane_cp021_copy1_ParamLimits

0x2b1e,	// (0x00036692) list_highlight_pane_cp021_copy1

0x0ddf,	// (0x00034953) cset6_slider_pane_ParamLimits

0x0ddf,	// (0x00034953) cset6_slider_pane

0x0e0b,	// (0x0003497f) main_cset6_slider_pane_g1_ParamLimits

0x0e0b,	// (0x0003497f) main_cset6_slider_pane_g1

0xa633,	// (0x0003e1a7) main_cset6_slider_pane_g2_ParamLimits

0xa633,	// (0x0003e1a7) main_cset6_slider_pane_g2

0x0e33,	// (0x000349a7) main_cset6_slider_pane_g3_ParamLimits

0x0e33,	// (0x000349a7) main_cset6_slider_pane_g3

0xa65b,	// (0x0003e1cf) main_cset6_slider_pane_g4_ParamLimits

0xa65b,	// (0x0003e1cf) main_cset6_slider_pane_g4

0xa667,	// (0x0003e1db) main_cset6_slider_pane_g5_ParamLimits

0xa667,	// (0x0003e1db) main_cset6_slider_pane_g5

0x0500,	// (0x00034074) main_cset6_slider_pane_g7_ParamLimits

0x0500,	// (0x00034074) main_cset6_slider_pane_g7

0x050c,	// (0x00034080) main_cset6_slider_pane_g8_ParamLimits

0x050c,	// (0x00034080) main_cset6_slider_pane_g8

0xa673,	// (0x0003e1e7) main_cset6_slider_pane_g9_ParamLimits

0xa673,	// (0x0003e1e7) main_cset6_slider_pane_g9

0xa67f,	// (0x0003e1f3) main_cset6_slider_pane_g10_ParamLimits

0xa67f,	// (0x0003e1f3) main_cset6_slider_pane_g10

0xa68b,	// (0x0003e1ff) main_cset6_slider_pane_g11_ParamLimits

0xa68b,	// (0x0003e1ff) main_cset6_slider_pane_g11

0xa697,	// (0x0003e20b) main_cset6_slider_pane_g12_ParamLimits

0xa697,	// (0x0003e20b) main_cset6_slider_pane_g12

0xa6a3,	// (0x0003e217) main_cset6_slider_pane_g13_ParamLimits

0xa6a3,	// (0x0003e217) main_cset6_slider_pane_g13

0xa6af,	// (0x0003e223) main_cset6_slider_pane_g14_ParamLimits

0xa6af,	// (0x0003e223) main_cset6_slider_pane_g14

0xa6bb,	// (0x0003e22f) main_cset6_slider_pane_g15_ParamLimits

0xa6bb,	// (0x0003e22f) main_cset6_slider_pane_g15

0xa6d3,	// (0x0003e247) main_cset6_slider_pane_g16_ParamLimits

0xa6d3,	// (0x0003e247) main_cset6_slider_pane_g16

0xa6df,	// (0x0003e253) main_cset6_slider_pane_g17_ParamLimits

0xa6df,	// (0x0003e253) main_cset6_slider_pane_g17

0x0011,

0xfaf3,	// (0x00043667) main_cset6_slider_pane_g_ParamLimits

0xfaf3,	// (0x00043667) main_cset6_slider_pane_g

0x0e3f,	// (0x000349b3) main_cset6_slider_pane_t1_ParamLimits

0x0e3f,	// (0x000349b3) main_cset6_slider_pane_t1

0xa703,	// (0x0003e277) main_cset6_slider_pane_t2_ParamLimits

0xa703,	// (0x0003e277) main_cset6_slider_pane_t2

0xa72e,	// (0x0003e2a2) main_cset6_slider_pane_t3_ParamLimits

0xa72e,	// (0x0003e2a2) main_cset6_slider_pane_t3

0xa759,	// (0x0003e2cd) main_cset6_slider_pane_t4_ParamLimits

0xa759,	// (0x0003e2cd) main_cset6_slider_pane_t4

0xa784,	// (0x0003e2f8) main_cset6_slider_pane_t5_ParamLimits

0xa784,	// (0x0003e2f8) main_cset6_slider_pane_t5

0x0e80,	// (0x000349f4) main_cset6_slider_pane_t7_ParamLimits

0x0e80,	// (0x000349f4) main_cset6_slider_pane_t7

0xa7af,	// (0x0003e323) main_cset6_slider_pane_t8_ParamLimits

0xa7af,	// (0x0003e323) main_cset6_slider_pane_t8

0xa7d3,	// (0x0003e347) main_cset6_slider_pane_t9_ParamLimits

0xa7d3,	// (0x0003e347) main_cset6_slider_pane_t9

0xa7f7,	// (0x0003e36b) main_cset6_slider_pane_t10_ParamLimits

0xa7f7,	// (0x0003e36b) main_cset6_slider_pane_t10

0xa81b,	// (0x0003e38f) main_cset6_slider_pane_t11_ParamLimits

0xa81b,	// (0x0003e38f) main_cset6_slider_pane_t11

0x0eb6,	// (0x00034a2a) main_cset6_slider_pane_t14_ParamLimits

0x0eb6,	// (0x00034a2a) main_cset6_slider_pane_t14

0x0eef,	// (0x00034a63) main_cset6_slider_pane_t15_ParamLimits

0x0eef,	// (0x00034a63) main_cset6_slider_pane_t15

0x000b,

0xfb18,	// (0x0004368c) main_cset6_slider_pane_t_ParamLimits

0xfb18,	// (0x0004368c) main_cset6_slider_pane_t

0x0f28,	// (0x00034a9c) cset_slider_pane_g1_copy1

0x0f31,	// (0x00034aa5) cset_slider_pane_g2_copy1

0x0f3a,	// (0x00034aae) cset_slider_pane_g3_copy1

0x244f,	// (0x00035fc3) bg_popup_sub_pane_cp011_copy1

0x0f4c,	// (0x00034ac0) main_cset_text_pane_g1_copy1

0x06a7,	// (0x0003421b) main_cset_text_pane_t1_copy1

0x06b5,	// (0x00034229) main_cset_text_pane_t2_copy1

0x06c3,	// (0x00034237) main_cset_text_pane_t3_copy1

0x06d1,	// (0x00034245) main_cset_text_pane_t4_copy1

0x06df,	// (0x00034253) main_cset_text_pane_t5_copy1

0x0f54,	// (0x00034ac8) main_cset_text_pane_t6_copy1

0x0f62,	// (0x00034ad6) main_cset_text_pane_t7_copy1

0xa83f,	// (0x0003e3b3) main_cset_text2_pane_t1_copy1

0x2b1e,	// (0x00036692) main_ncimui_pane

0x7899,	// (0x0003b40d) popup_query_ncimui_window_ParamLimits

0x7899,	// (0x0003b40d) popup_query_ncimui_window

0x3c31,	// (0x000377a5) field_cale_ev2_pane_g4_ParamLimits

0x3c31,	// (0x000377a5) field_cale_ev2_pane_g4

0x8a0e,	// (0x0003c582) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8a0e,	// (0x0003c582) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x00043377) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x00043377) cell_video_dialer_keypad_pane_g

0x8a26,	// (0x0003c59a) cell_video_dialer_keypad_pane_t1

0x244f,	// (0x00035fc3) bg_popup_window_pane_cp012

0xe396,	// (0x00041f0a) heading_pane_cp06

0x0f8e,	// (0x00034b02) ncim_query_content_pane

0x244f,	// (0x00035fc3) bg_popup_heading_pane_cp01

0x0f96,	// (0x00034b0a) ncim_heading_pane_t1

0x0fa4,	// (0x00034b18) ncim_indicator_popup_pane

0x0fb6,	// (0x00034b2a) ncim_query_button_pane

0x0fcc,	// (0x00034b40) ncim_query_content_pane_t1

0x0fde,	// (0x00034b52) ncim_query_content_pane_t2

0x0005,

0xfb5c,	// (0x000436d0) ncim_query_content_pane_t

0x1018,	// (0x00034b8c) ncim_query_list_pane

0x102a,	// (0x00034b9e) ncim_query_popup_pane

0x0fa4,	// (0x00034b18) ncim_indicator_popup_pane_ParamLimits

0xa99b,	// (0x0003e50f) ncim_query_content_pane_g1_ParamLimits

0xa99b,	// (0x0003e50f) ncim_query_content_pane_g1

0x0fcc,	// (0x00034b40) ncim_query_content_pane_t1_ParamLimits

0x0fde,	// (0x00034b52) ncim_query_content_pane_t2_ParamLimits

0xa9a7,	// (0x0003e51b) ncim_query_content_pane_t3_ParamLimits

0xa9a7,	// (0x0003e51b) ncim_query_content_pane_t3

0xa9c4,	// (0x0003e538) ncim_query_content_pane_t4_ParamLimits

0xa9c4,	// (0x0003e538) ncim_query_content_pane_t4

0xa9e1,	// (0x0003e555) ncim_query_content_pane_t5_ParamLimits

0xa9e1,	// (0x0003e555) ncim_query_content_pane_t5

0x0ff0,	// (0x00034b64) ncim_query_content_pane_t6_ParamLimits

0x0ff0,	// (0x00034b64) ncim_query_content_pane_t6

0xfb5c,	// (0x000436d0) ncim_query_content_pane_t_ParamLimits

0x1018,	// (0x00034b8c) ncim_query_list_pane_ParamLimits

0x102a,	// (0x00034b9e) ncim_query_popup_pane_ParamLimits

0x103e,	// (0x00034bb2) wait_bar_pane_cp04

0x244f,	// (0x00035fc3) input_focus_pane_cp011

0x1046,	// (0x00034bba) ncim_query_popup_pane_t1

0x1054,	// (0x00034bc8) ncim_list_query_list_pane_ParamLimits

0x1054,	// (0x00034bc8) ncim_list_query_list_pane

0x244f,	// (0x00035fc3) bg_button_pane_cp027

0x1067,	// (0x00034bdb) ncim_query_button_pane_g1

0x244f,	// (0x00035fc3) list_highlight_pane_cp012

0x1071,	// (0x00034be5) ncim_list_query_list_pane_g1

0x1079,	// (0x00034bed) ncim_list_query_list_pane_t1

0x91ad,	// (0x0003cd21) cam4_indicators_pane_g3_ParamLimits

0x91ad,	// (0x0003cd21) cam4_indicators_pane_g3

0x92b9,	// (0x0003ce2d) vid4_indicators_pane_g5_ParamLimits

0x92b9,	// (0x0003ce2d) vid4_indicators_pane_g5

0xa0e6,	// (0x0003dc5a) vid4_progress_pane_g5_ParamLimits

0xa0e6,	// (0x0003dc5a) vid4_progress_pane_g5

0xa871,	// (0x0003e3e5) main_ncimui_pane_g1

0xa8dd,	// (0x0003e451) ncimui_group_query_pane_ParamLimits

0xa8dd,	// (0x0003e451) ncimui_group_query_pane

0xa937,	// (0x0003e4ab) ncimui_list_pane_ParamLimits

0xa937,	// (0x0003e4ab) ncimui_list_pane

0xa95e,	// (0x0003e4d2) ncimui_text_pane_ParamLimits

0xa95e,	// (0x0003e4d2) ncimui_text_pane

0xa9fe,	// (0x0003e572) ncimui_text_pane_t1_ParamLimits

0xa9fe,	// (0x0003e572) ncimui_text_pane_t1

0x1087,	// (0x00034bfb) ncimui_list_single_graphic_pane_ParamLimits

0x1087,	// (0x00034bfb) ncimui_list_single_graphic_pane

0xaa1d,	// (0x0003e591) ncimui_query_pane_ParamLimits

0xaa1d,	// (0x0003e591) ncimui_query_pane

0x244f,	// (0x00035fc3) list_highlight_pane_cp013

0x1097,	// (0x00034c0b) ncim_list_query_list_pane_t1_copy1

0x1071,	// (0x00034be5) ncim_list_single_graphic_pane_g1

0xaa30,	// (0x0003e5a4) ncim_query_button_pane_cp01

0xaa3c,	// (0x0003e5b0) ncim_query_entry_pane_ParamLimits

0xaa3c,	// (0x0003e5b0) ncim_query_entry_pane

0xaa4f,	// (0x0003e5c3) ncimui_query_pane_g1

0xaa5b,	// (0x0003e5cf) ncimui_query_pane_t1_ParamLimits

0xaa5b,	// (0x0003e5cf) ncimui_query_pane_t1

0x2b1e,	// (0x00036692) input_focus_pane_cp012

0x10a5,	// (0x00034c19) ncim_query_entry_pane_t1

0x2bf7,	// (0x0003676b) main_im_pane_ParamLimits

0x2b1e,	// (0x00036692) main_mobtv_pane_ParamLimits

0x2b1e,	// (0x00036692) main_mobtv_pane

0xa6eb,	// (0x0003e25f) main_cset6_slider_pane_g18_ParamLimits

0xa6eb,	// (0x0003e25f) main_cset6_slider_pane_g18

0xa6f7,	// (0x0003e26b) main_cset6_slider_pane_g19_ParamLimits

0xa6f7,	// (0x0003e26b) main_cset6_slider_pane_g19

0xe52c,	// (0x000420a0) bg_main_mobtv_pane_ParamLimits

0xe52c,	// (0x000420a0) bg_main_mobtv_pane

0xaa74,	// (0x0003e5e8) main_mobtv_info_pane

0xaa7f,	// (0x0003e5f3) main_mobtv_loading_pane_ParamLimits

0xaa7f,	// (0x0003e5f3) main_mobtv_loading_pane

0x10b7,	// (0x00034c2b) main_mobtv_pg_channel_list_pane

0x10c1,	// (0x00034c35) main_mobtv_pg_hdr_pane

0xaa8c,	// (0x0003e600) main_mobtv_programe_curr_pane_ParamLimits

0xaa8c,	// (0x0003e600) main_mobtv_programe_curr_pane

0xaa99,	// (0x0003e60d) main_mobtv_programe_next_pane_ParamLimits

0xaa99,	// (0x0003e60d) main_mobtv_programe_next_pane

0x10ca,	// (0x00034c3e) popup_mobtv_noti_window

0xc7c4,	// (0x00040338) main_tv_pg_hdr_pane_g1

0x10d4,	// (0x00034c48) main_tv_pg_hdr_pane_g2

0x10dc,	// (0x00034c50) main_tv_pg_hdr_pane_g3

0x10e4,	// (0x00034c58) main_tv_pg_hdr_pane_g4

0x10ec,	// (0x00034c60) main_tv_pg_hdr_pane_g5

0x10f6,	// (0x00034c6a) main_tv_pg_hdr_pane_g6

0x1100,	// (0x00034c74) main_tv_pg_hdr_pane_g7

0x110a,	// (0x00034c7e) main_tv_pg_hdr_pane_g8

0x1114,	// (0x00034c88) main_tv_pg_hdr_pane_g9

0x111e,	// (0x00034c92) main_tv_pg_hdr_pane_g10

0x1128,	// (0x00034c9c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb69,	// (0x000436dd) main_tv_pg_hdr_pane_g

0x1132,	// (0x00034ca6) main_tv_pg_hdr_pane_t1

0x1140,	// (0x00034cb4) main_tv_pg_hdr_pane_t2

0x114e,	// (0x00034cc2) main_tv_pg_hdr_pane_t3

0x115e,	// (0x00034cd2) main_tv_pg_hdr_pane_t4

0x116e,	// (0x00034ce2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb80,	// (0x000436f4) main_tv_pg_hdr_pane_t

0x117e,	// (0x00034cf2) single_mobtv_pg_channel_pane_ParamLimits

0x117e,	// (0x00034cf2) single_mobtv_pg_channel_pane

0x1190,	// (0x00034d04) single_mobtv_pg_channel_table_pane

0x1199,	// (0x00034d0d) single_mobtv_pg_channel_thumb_pane

0x11a2,	// (0x00034d16) single_tv_pg_channel_pane_g1

0x11ab,	// (0x00034d1f) single_tv_pg_channel_pane_g2

0x0001,

0xfb8b,	// (0x000436ff) single_tv_pg_channel_pane_g

0x2b85,	// (0x000366f9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2b85,	// (0x000366f9) bg_single_mobtv_pg_channel_thumb_pane

0x11b4,	// (0x00034d28) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x11b4,	// (0x00034d28) single_mobtv_pg_channel_thumb_pane_g1

0x11c2,	// (0x00034d36) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x11c2,	// (0x00034d36) single_mobtv_pg_channel_thumb_pane_g2

0x11ce,	// (0x00034d42) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x11ce,	// (0x00034d42) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb90,	// (0x00043704) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb90,	// (0x00043704) single_mobtv_pg_channel_thumb_pane_g

0x11da,	// (0x00034d4e) single_mobtv_pg_channel_thumb_pane_t1

0x11e8,	// (0x00034d5c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb97,	// (0x0004370b) single_mobtv_pg_channel_thumb_pane_t

0xc7c4,	// (0x00040338) bg_single_mobtv_pg_channel_table_pane_g1

0xc7c4,	// (0x00040338) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00042f37) bg_single_mobtv_pg_channel_table_pane_g

0x11f6,	// (0x00034d6a) single_mobtv_pg_channel_table_pane_t1

0x1204,	// (0x00034d78) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9c,	// (0x00043710) single_mobtv_pg_channel_table_pane_t

0xaaae,	// (0x0003e622) main_mobtv_info_pane_g1_ParamLimits

0xaaae,	// (0x0003e622) main_mobtv_info_pane_g1

0xaaca,	// (0x0003e63e) main_mobtv_info_pane_t1_ParamLimits

0xaaca,	// (0x0003e63e) main_mobtv_info_pane_t1

0xab42,	// (0x0003e6b6) main_mobtv_info_pane_t2_ParamLimits

0xab42,	// (0x0003e6b6) main_mobtv_info_pane_t2

0x0002,

0xfba6,	// (0x0004371a) main_mobtv_info_pane_t_ParamLimits

0xfba6,	// (0x0004371a) main_mobtv_info_pane_t

0xabd3,	// (0x0003e747) wait_bar_pane_cp05

0xabe5,	// (0x0003e759) main_mobtv_loading_pane_g1_ParamLimits

0xabe5,	// (0x0003e759) main_mobtv_loading_pane_g1

0xabf1,	// (0x0003e765) main_mobtv_loading_pane_g2_ParamLimits

0xabf1,	// (0x0003e765) main_mobtv_loading_pane_g2

0xabfd,	// (0x0003e771) main_mobtv_loading_pane_g3_ParamLimits

0xabfd,	// (0x0003e771) main_mobtv_loading_pane_g3

0x0002,

0xfbad,	// (0x00043721) main_mobtv_loading_pane_g_ParamLimits

0xfbad,	// (0x00043721) main_mobtv_loading_pane_g

0x1212,	// (0x00034d86) main_mobtv_loading_pane_t1_ParamLimits

0x1212,	// (0x00034d86) main_mobtv_loading_pane_t1

0x122a,	// (0x00034d9e) main_mobtv_loading_pane_t2_ParamLimits

0x122a,	// (0x00034d9e) main_mobtv_loading_pane_t2

0x0001,

0xfbb4,	// (0x00043728) main_mobtv_loading_pane_t_ParamLimits

0xfbb4,	// (0x00043728) main_mobtv_loading_pane_t

0xac0b,	// (0x0003e77f) wait_bar_pane_cp06_ParamLimits

0xac0b,	// (0x0003e77f) wait_bar_pane_cp06

0x124e,	// (0x00034dc2) main_mobtv_programe_curr_pane_t1

0x125c,	// (0x00034dd0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb9,	// (0x0004372d) main_mobtv_programe_curr_pane_t

0x126a,	// (0x00034dde) main_mobtv_programe_next_pane_t1

0x1278,	// (0x00034dec) main_mobtv_programe_next_pane_t2

0x1286,	// (0x00034dfa) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbe,	// (0x00043732) main_mobtv_programe_next_pane_t

0x244f,	// (0x00035fc3) bg_popup_mobtv_noti_window_pane

0x1294,	// (0x00034e08) popup_mobtv_noti_window_g1

0x129c,	// (0x00034e10) popup_mobtv_noti_window_t1

0x12aa,	// (0x00034e1e) popup_mobtv_noti_window_t2

0x0001,

0xfbc5,	// (0x00043739) popup_mobtv_noti_window_t

0xc7c4,	// (0x00040338) bg_popup_mobtv_noti_window_pane_g1

0x244f,	// (0x00035fc3) sc_clock_pane

0x244f,	// (0x00035fc3) main_fs_bigclock_pane

0xa2ae,	// (0x0003de22) blid2_tripm_pane_t4_ParamLimits

0xa2ae,	// (0x0003de22) blid2_tripm_pane_t4

0xac17,	// (0x0003e78b) sc_clock_pane_g1_ParamLimits

0xac17,	// (0x0003e78b) sc_clock_pane_g1

0xac25,	// (0x0003e799) sc_clock_pane_t1_ParamLimits

0xac25,	// (0x0003e799) sc_clock_pane_t1

0xac3a,	// (0x0003e7ae) sc_clock_pane_t2_ParamLimits

0xac3a,	// (0x0003e7ae) sc_clock_pane_t2

0xac4c,	// (0x0003e7c0) sc_clock_pane_t3_ParamLimits

0xac4c,	// (0x0003e7c0) sc_clock_pane_t3

0x0004,

0xfbca,	// (0x0004373e) sc_clock_pane_t_ParamLimits

0xfbca,	// (0x0004373e) sc_clock_pane_t

0xb67b,	// (0x0003f1ef) main_fs_bigclock_indicator_pane_ParamLimits

0xb67b,	// (0x0003f1ef) main_fs_bigclock_indicator_pane

0xacdb,	// (0x0003e84f) main_fs_bigclock_pane_g1_ParamLimits

0xacdb,	// (0x0003e84f) main_fs_bigclock_pane_g1

0xb687,	// (0x0003f1fb) main_fs_bigclock_pane_t1_ParamLimits

0xb687,	// (0x0003f1fb) main_fs_bigclock_pane_t1

0xb699,	// (0x0003f20d) main_fs_bigclock_pane_t2_ParamLimits

0xb699,	// (0x0003f20d) main_fs_bigclock_pane_t2

0xb6ad,	// (0x0003f221) main_fs_bigclock_pane_t3_ParamLimits

0xb6ad,	// (0x0003f221) main_fs_bigclock_pane_t3

0x0002,

0xfd5b,	// (0x000438cf) main_fs_bigclock_pane_t_ParamLimits

0xfd5b,	// (0x000438cf) main_fs_bigclock_pane_t

0x1d06,	// (0x0003587a) main_fs_bigclock_indicator_pane_g1

0x0fbe,	// (0x00034b32) ncim_query_content_pane_g2_ParamLimits

0x0fbe,	// (0x00034b32) ncim_query_content_pane_g2

0x0001,

0xfb57,	// (0x000436cb) ncim_query_content_pane_g_ParamLimits

0xfb57,	// (0x000436cb) ncim_query_content_pane_g

0xac5e,	// (0x0003e7d2) sc_clock_pane_t4_ParamLimits

0xac5e,	// (0x0003e7d2) sc_clock_pane_t4

0x2b1e,	// (0x00036692) main_radioblah_pane

0x9051,	// (0x0003cbc5) cell_call4_button_pane_t1_copy1_ParamLimits

0x9051,	// (0x0003cbc5) cell_call4_button_pane_t1_copy1

0xa88d,	// (0x0003e401) main_ncimui_pane_t1_ParamLimits

0xa88d,	// (0x0003e401) main_ncimui_pane_t1

0xa8a7,	// (0x0003e41b) main_ncimui_pane_t2_ParamLimits

0xa8a7,	// (0x0003e41b) main_ncimui_pane_t2

0x0002,

0xfb50,	// (0x000436c4) main_ncimui_pane_t_ParamLimits

0xfb50,	// (0x000436c4) main_ncimui_pane_t

0x12b8,	// (0x00034e2c) main_radioblah_anim_pane_ParamLimits

0x12b8,	// (0x00034e2c) main_radioblah_anim_pane

0x12c9,	// (0x00034e3d) main_radioblah_info_pane_ParamLimits

0x12c9,	// (0x00034e3d) main_radioblah_info_pane

0x12dd,	// (0x00034e51) main_radioblah_pane_t1_ParamLimits

0x12dd,	// (0x00034e51) main_radioblah_pane_t1

0x12f9,	// (0x00034e6d) main_radioblah_pane_t2_ParamLimits

0x12f9,	// (0x00034e6d) main_radioblah_pane_t2

0x0003,

0xfbeb,	// (0x0004375f) main_radioblah_pane_t_ParamLimits

0xfbeb,	// (0x0004375f) main_radioblah_pane_t

0xae7a,	// (0x0003e9ee) main_radioblah_rocker_ctrl_pane_ParamLimits

0xae7a,	// (0x0003e9ee) main_radioblah_rocker_ctrl_pane

0x1341,	// (0x00034eb5) main_radioblah_info_pane_t1_ParamLimits

0x1341,	// (0x00034eb5) main_radioblah_info_pane_t1

0xaec3,	// (0x0003ea37) main_radioblah_info_pane_t2_ParamLimits

0xaec3,	// (0x0003ea37) main_radioblah_info_pane_t2

0x0003,

0xfbf4,	// (0x00043768) main_radioblah_info_pane_t_ParamLimits

0xfbf4,	// (0x00043768) main_radioblah_info_pane_t

0xc7c4,	// (0x00040338) main_radioblah_rocker_ctrl_pane_g1

0xaf73,	// (0x0003eae7) main_radioblah_rocker_ctrl_pane_g2

0xaf7b,	// (0x0003eaef) main_radioblah_rocker_ctrl_pane_g3

0xaf83,	// (0x0003eaf7) main_radioblah_rocker_ctrl_pane_g4

0xaf8b,	// (0x0003eaff) main_radioblah_rocker_ctrl_pane_g5

0xaf93,	// (0x0003eb07) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfd,	// (0x00043771) main_radioblah_rocker_ctrl_pane_g

0xa83f,	// (0x0003e3b3) main_cset_text2_pane_t1_copy1_ParamLimits

0x90da,	// (0x0003cc4e) cam4_image_uncrop_qvga_pane

0x921f,	// (0x0003cd93) vid4_image_uncrop_qcif_pane

0xa440,	// (0x0003dfb4) cam6_image_uncrop_qvga_pane_ParamLimits

0xa440,	// (0x0003dfb4) cam6_image_uncrop_qvga_pane

0x0c9d,	// (0x00034811) vid6_image_uncrop_qcif_pane_ParamLimits

0x0c9d,	// (0x00034811) vid6_image_uncrop_qcif_pane

0x244f,	// (0x00035fc3) bg_popup_preview_window_pane_cp03

0x0f70,	// (0x00034ae4) list_cset_text2_pane

0x0f78,	// (0x00034aec) main_cset6_text2_pane_g1

0x0f80,	// (0x00034af4) main_cset6_text2_pane_t1

0xaf9b,	// (0x0003eb0f) list_cset_text2_pane_t1_ParamLimits

0xaf9b,	// (0x0003eb0f) list_cset_text2_pane_t1

0x2b1e,	// (0x00036692) main_radioblah_pane_ParamLimits

0xabbf,	// (0x0003e733) main_mobtv_info_pane_t3_ParamLimits

0xabbf,	// (0x0003e733) main_mobtv_info_pane_t3

0xae68,	// (0x0003e9dc) main_radioblah_pane_g1

0xae93,	// (0x0003ea07) main_radioblah_info_pane_g1

0xaf18,	// (0x0003ea8c) main_radioblah_info_pane_t3_ParamLimits

0xaf18,	// (0x0003ea8c) main_radioblah_info_pane_t3

0x67cc,	// (0x0003a340) highlight_cell_cale_month_pane_ParamLimits

0x67cc,	// (0x0003a340) highlight_cell_cale_month_pane

0x244f,	// (0x00035fc3) main_phob_fisheye_pane

0xebc4,	// (0x00042738) scroll_pane_cp0031_ParamLimits

0xebc4,	// (0x00042738) scroll_pane_cp0031

0x0daf,	// (0x00034923) wait_bar_pane_cp08_ParamLimits

0xa613,	// (0x0003e187) cset_list_set_pane_copy1_ParamLimits

0x1395,	// (0x00034f09) highlight_cell_cale_month_pane_g1

0xafb2,	// (0x0003eb26) highlight_cell_cale_month_pane_t1

0x097b,	// (0x000344ef) list_gen_pane_cp01

0x04eb,	// (0x0003405f) scroll_pane_01

0xafc0,	// (0x0003eb34) list_single_double_fisheye_pane

0x4043,	// (0x00037bb7) list_double_fisheye_pane_g1_ParamLimits

0x4043,	// (0x00037bb7) list_double_fisheye_pane_g1

0x404f,	// (0x00037bc3) list_double_fisheye_pane_g2_ParamLimits

0x404f,	// (0x00037bc3) list_double_fisheye_pane_g2

0x4063,	// (0x00037bd7) list_double_fisheye_pane_g3_ParamLimits

0x4063,	// (0x00037bd7) list_double_fisheye_pane_g3

0x0004,

0xfc0a,	// (0x0004377e) list_double_fisheye_pane_g_ParamLimits

0xfc0a,	// (0x0004377e) list_double_fisheye_pane_g

0x408c,	// (0x00037c00) list_double_fisheye_pane_t1_ParamLimits

0x408c,	// (0x00037c00) list_double_fisheye_pane_t1

0x40a7,	// (0x00037c1b) list_double_fisheye_pane_t2_ParamLimits

0x40a7,	// (0x00037c1b) list_double_fisheye_pane_t2

0x0001,

0xfc15,	// (0x00043789) list_double_fisheye_pane_t_ParamLimits

0xfc15,	// (0x00043789) list_double_fisheye_pane_t

0x244f,	// (0x00035fc3) main_call5_pane

0xac84,	// (0x0003e7f8) sc_swipe_pane_ParamLimits

0xac84,	// (0x0003e7f8) sc_swipe_pane

0xafd5,	// (0x0003eb49) call5_image_pane_ParamLimits

0xafd5,	// (0x0003eb49) call5_image_pane

0xafe7,	// (0x0003eb5b) call5_swipe_1_pane_ParamLimits

0xafe7,	// (0x0003eb5b) call5_swipe_1_pane

0xaff3,	// (0x0003eb67) call5_swipe_2_pane_ParamLimits

0xaff3,	// (0x0003eb67) call5_swipe_2_pane

0xb00d,	// (0x0003eb81) popup_call5_audio_first_window_ParamLimits

0xb00d,	// (0x0003eb81) popup_call5_audio_first_window

0x2b85,	// (0x000366f9) call5_swipe_1_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) call5_swipe_1_pane_g1

0x139d,	// (0x00034f11) call5_swipe_1_pane_g2_ParamLimits

0x139d,	// (0x00034f11) call5_swipe_1_pane_g2

0x0001,

0xfc1a,	// (0x0004378e) call5_swipe_1_pane_g_ParamLimits

0xfc1a,	// (0x0004378e) call5_swipe_1_pane_g

0x13a9,	// (0x00034f1d) call5_swipe_1_pane_t1_ParamLimits

0x13a9,	// (0x00034f1d) call5_swipe_1_pane_t1

0x2b85,	// (0x000366f9) call5_swipe_2_pane_g1_ParamLimits

0x2b85,	// (0x000366f9) call5_swipe_2_pane_g1

0x13be,	// (0x00034f32) call5_swipe_2_pane_g2_ParamLimits

0x13be,	// (0x00034f32) call5_swipe_2_pane_g2

0x0001,

0xfc1f,	// (0x00043793) call5_swipe_2_pane_g_ParamLimits

0xfc1f,	// (0x00043793) call5_swipe_2_pane_g

0x13ca,	// (0x00034f3e) call5_swipe_2_pane_t1_ParamLimits

0x13ca,	// (0x00034f3e) call5_swipe_2_pane_t1

0x13df,	// (0x00034f53) sc_swipe_pane_g1_ParamLimits

0x13df,	// (0x00034f53) sc_swipe_pane_g1

0x13ec,	// (0x00034f60) sc_swipe_pane_g2_ParamLimits

0x13ec,	// (0x00034f60) sc_swipe_pane_g2

0x0001,

0xfc24,	// (0x00043798) sc_swipe_pane_g_ParamLimits

0xfc24,	// (0x00043798) sc_swipe_pane_g

0x13f8,	// (0x00034f6c) sc_swipe_pane_t1_ParamLimits

0x13f8,	// (0x00034f6c) sc_swipe_pane_t1

0x244f,	// (0x00035fc3) main_cmail_launcher_pane

0xb01d,	// (0x0003eb91) aid_size_cell_cmail_l_ParamLimits

0xb01d,	// (0x0003eb91) aid_size_cell_cmail_l

0xb02b,	// (0x0003eb9f) grid_cmail_l_pane_ParamLimits

0xb02b,	// (0x0003eb9f) grid_cmail_l_pane

0xb039,	// (0x0003ebad) cell_cmail_l_pane_ParamLimits

0xb039,	// (0x0003ebad) cell_cmail_l_pane

0xb054,	// (0x0003ebc8) cell_cmail_l_pane_g1_ParamLimits

0xb054,	// (0x0003ebc8) cell_cmail_l_pane_g1

0xb060,	// (0x0003ebd4) cell_cmail_l_pane_t1_ParamLimits

0xb060,	// (0x0003ebd4) cell_cmail_l_pane_t1

0xb076,	// (0x0003ebea) cell_cmail_l_pane_t2_ParamLimits

0xb076,	// (0x0003ebea) cell_cmail_l_pane_t2

0x0001,

0xfc29,	// (0x0004379d) cell_cmail_l_pane_t_ParamLimits

0xfc29,	// (0x0004379d) cell_cmail_l_pane_t

0x2b1e,	// (0x00036692) grid_highlight_pane_cp018_ParamLimits

0x2b1e,	// (0x00036692) grid_highlight_pane_cp018

0x49a2,	// (0x00038516) main2_pane_ParamLimits

0x49a2,	// (0x00038516) main2_pane

0x2c8f,	// (0x00036803) popup_sp_fs_action_menu_bg_pane_g1

0x2c97,	// (0x0003680b) popup_sp_fs_action_menu_bg_pane_g2

0x2c9f,	// (0x00036813) popup_sp_fs_action_menu_bg_pane_g3

0x2ca7,	// (0x0003681b) popup_sp_fs_action_menu_bg_pane_g4

0x2caf,	// (0x00036823) popup_sp_fs_action_menu_bg_pane_g5

0x2cb7,	// (0x0003682b) popup_sp_fs_action_menu_bg_pane_g6

0x2cbf,	// (0x00036833) popup_sp_fs_action_menu_bg_pane_g7

0x2cc7,	// (0x0003683b) popup_sp_fs_action_menu_bg_pane_g8

0x2ccf,	// (0x00036843) popup_sp_fs_action_menu_bg_pane_g9

0x2cd7,	// (0x0003684b) popup_sp_fs_action_menu_bg_pane_g10

0x2cd7,	// (0x0003684b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00042c9f) popup_sp_fs_action_menu_bg_pane_g

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g2

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00042d4d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00042d4d) list_medium_line_x2_t3_g3_g

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t2

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g3_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t3_g2_g

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t2

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g2_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g2

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g3

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00042d60) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00042d60) list_medium_line_x2_t4_g4_g

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t2

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t3

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00042d69) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00042d69) list_medium_line_x2_t4_g4_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g2

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g3

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00042d60) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00042d60) list_medium_line_x2_t2_g4_g

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g4_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g4_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g2

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00042d4d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00042d4d) list_medium_line_x2_t2_g3_g

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g3_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g3_t

0x6975,	// (0x0003a4e9) main_sp_fs_list_pane_ParamLimits

0x6975,	// (0x0003a4e9) main_sp_fs_list_pane

0x6981,	// (0x0003a4f5) sp_fs_scroll_pane_ParamLimits

0x6981,	// (0x0003a4f5) sp_fs_scroll_pane

0xcd2d,	// (0x000408a1) list_medium_line_x2_t3_t1

0xcd2d,	// (0x000408a1) list_medium_line_x2_t3_t2

0xcd2d,	// (0x000408a1) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00042e1b) list_medium_line_x2_t3_t

0xcd2d,	// (0x000408a1) list_medium_line_x3_t4_t1

0xcd2d,	// (0x000408a1) list_medium_line_x3_t4_t2

0xcd2d,	// (0x000408a1) list_medium_line_x3_t4_t3

0xcd2d,	// (0x000408a1) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00042e22) list_medium_line_x3_t4_t

0xcd2d,	// (0x000408a1) list_medium_line_x4_t5_t1

0xcd2d,	// (0x000408a1) list_medium_line_x4_t5_t2

0xcd2d,	// (0x000408a1) list_medium_line_x4_t5_t3

0xcd2d,	// (0x000408a1) list_medium_line_x4_t5_t4

0xcd2d,	// (0x000408a1) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00042e2b) list_medium_line_x4_t5_t

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g1

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g2

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g3

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00042d60) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00042d60) list_medium_line_t4_g4_g

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t1

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t2

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t3

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t4_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00042d69) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00042d69) list_medium_line_t4_g4_t

0x6a7a,	// (0x0003a5ee) chi_dic_find_pane_g1

0x784e,	// (0x0003b3c2) main_tport_pane

0xcd2d,	// (0x000408a1) list_medium_line_plain_t1

0x2b85,	// (0x000366f9) list_medium_line_t2_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_t2_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_t2_g2_g

0xc7de,	// (0x00040352) list_medium_line_t2_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_g2_t1

0xc7de,	// (0x00040352) list_medium_line_t2_g2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_t2_g2_t

0x3fcd,	// (0x00037b41) aid_sp_fs_list_icon_a_sm

0x3fd5,	// (0x00037b49) aid_sp_fs_list_icon_d

0x3fdd,	// (0x00037b51) aid_sp_fs_text_primary

0x1866,	// (0x000353da) aid_sp_fs_text_secondary

0x244f,	// (0x00035fc3) list_medium_line

0x244f,	// (0x00035fc3) list_medium_line_g2

0x244f,	// (0x00035fc3) list_medium_line_g3

0x244f,	// (0x00035fc3) list_medium_line_plain

0x244f,	// (0x00035fc3) list_medium_line_plain_t2

0x244f,	// (0x00035fc3) list_medium_line_plain_t3

0x244f,	// (0x00035fc3) list_medium_line_right_icon

0x244f,	// (0x00035fc3) list_medium_line_right_iconx2

0x244f,	// (0x00035fc3) list_medium_line_t2

0x244f,	// (0x00035fc3) list_medium_line_t2_g2

0x244f,	// (0x00035fc3) list_medium_line_t2_g3

0x244f,	// (0x00035fc3) list_medium_line_t2_right_icon

0x244f,	// (0x00035fc3) list_medium_line_t2_right_iconx2

0x244f,	// (0x00035fc3) list_medium_line_t3

0x244f,	// (0x00035fc3) list_medium_line_t3_g2

0x244f,	// (0x00035fc3) list_medium_line_t3_g3

0x244f,	// (0x00035fc3) list_medium_line_t3_right_iconx2

0x244f,	// (0x00035fc3) list_medium_line_t4_g4

0x244f,	// (0x00035fc3) list_medium_line_x2

0x244f,	// (0x00035fc3) list_medium_line_x2_t2_g2

0x244f,	// (0x00035fc3) list_medium_line_x2_t2_g3

0x244f,	// (0x00035fc3) list_medium_line_x2_t2_g4

0x244f,	// (0x00035fc3) list_medium_line_x2_t3

0x244f,	// (0x00035fc3) list_medium_line_x2_t3_g2

0x244f,	// (0x00035fc3) list_medium_line_x2_t3_g3

0x244f,	// (0x00035fc3) list_medium_line_x2_t3_g4

0x244f,	// (0x00035fc3) list_medium_line_x2_t4_g2

0x244f,	// (0x00035fc3) list_medium_line_x2_t4_g4

0x244f,	// (0x00035fc3) list_medium_line_x3

0x244f,	// (0x00035fc3) list_medium_line_x3_t4

0x244f,	// (0x00035fc3) list_medium_line_x3_t4_g4

0x244f,	// (0x00035fc3) list_medium_line_x4_t4

0x244f,	// (0x00035fc3) list_medium_line_x4_t4_g7

0x244f,	// (0x00035fc3) list_medium_line_x4_t5

0x3fe6,	// (0x00037b5a) list_single_fs_dyc_pane_ParamLimits

0x3fe6,	// (0x00037b5a) list_single_fs_dyc_pane

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g1

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g2

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g3

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g4

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g5

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x4_t4_g7_g6

0x2b93,	// (0x00036707) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2b93,	// (0x00036707) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb31,	// (0x000436a5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb31,	// (0x000436a5) list_medium_line_x4_t4_g7_g

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t1

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t2

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x4_t4_g7_t3

0xc796,	// (0x0004030a) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc796,	// (0x0004030a) list_medium_line_x4_t4_g7_t4

0xc796,	// (0x0004030a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc796,	// (0x0004030a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb40,	// (0x000436b4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb40,	// (0x000436b4) list_medium_line_x4_t4_g7_t

0x4026,	// (0x00037b9a) list_single_dyc_row_pane_ParamLimits

0x4026,	// (0x00037b9a) list_single_dyc_row_pane

0xafc9,	// (0x0003eb3d) call5_gesture_pane_ParamLimits

0xafc9,	// (0x0003eb3d) call5_gesture_pane

0xafff,	// (0x0003eb73) call5_windows_pane_ParamLimits

0xafff,	// (0x0003eb73) call5_windows_pane

0xb093,	// (0x0003ec07) call5_swipe_1_pane_cp_ParamLimits

0xb093,	// (0x0003ec07) call5_swipe_1_pane_cp

0xb09f,	// (0x0003ec13) call5_swipe_2_pane_cp_ParamLimits

0xb09f,	// (0x0003ec13) call5_swipe_2_pane_cp

0xc78e,	// (0x00040302) call5_image_pane_cp

0xb0ab,	// (0x0003ec1f) popup_call5_audio_first_window_cp_ParamLimits

0xb0ab,	// (0x0003ec1f) popup_call5_audio_first_window_cp

0x13df,	// (0x00034f53) call5_swipe_1_pane_g1_cp_ParamLimits

0x13df,	// (0x00034f53) call5_swipe_1_pane_g1_cp

0x140d,	// (0x00034f81) call5_swipe_1_pane_g2_cp

0x13f8,	// (0x00034f6c) call5_swipe_1_pane_t1_cp_ParamLimits

0x13f8,	// (0x00034f6c) call5_swipe_1_pane_t1_cp

0x13df,	// (0x00034f53) call5_swipe_2_pane_g1_cp_ParamLimits

0x13df,	// (0x00034f53) call5_swipe_2_pane_g1_cp

0x1415,	// (0x00034f89) call5_swipe_2_pane_g2_cp

0x141d,	// (0x00034f91) call5_swipe_2_pane_t1_cp_ParamLimits

0x141d,	// (0x00034f91) call5_swipe_2_pane_t1_cp

0x2b1e,	// (0x00036692) main_sp_fs_email_pane

0x1432,	// (0x00034fa6) main_sp_fs_listscroll_pane_te

0x40c9,	// (0x00037c3d) popup_sp_fs_action_menu_pane_ParamLimits

0x40c9,	// (0x00037c3d) popup_sp_fs_action_menu_pane

0xc7c4,	// (0x00040338) bg_sp_fs_ctrlbar_pane_g1

0x143b,	// (0x00034faf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1444,	// (0x00034fb8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x144d,	// (0x00034fc1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7c4,	// (0x00040338) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2e,	// (0x000437a2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd1d0,	// (0x00040d44) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd1d0,	// (0x00040d44) bg_sp_fs_ctrlbar_ddmenu_pane

0x1456,	// (0x00034fca) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1456,	// (0x00034fca) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1462,	// (0x00034fd6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1462,	// (0x00034fd6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc37,	// (0x000437ab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc37,	// (0x000437ab) main_sp_fs_ctrlbar_ddmenu_pane_g

0x146e,	// (0x00034fe2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x146e,	// (0x00034fe2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc7c4,	// (0x00040338) list_medium_line_t2_right_icon_g1

0xcd2d,	// (0x000408a1) list_medium_line_t2_right_icon_t1

0xcd2d,	// (0x000408a1) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3c,	// (0x000437b0) list_medium_line_t2_right_icon_t

0xe43c,	// (0x00041fb0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe43c,	// (0x00041fb0) bg_sp_fs_ctrlbar_pane

0xb112,	// (0x0003ec86) main_sp_fs_ctrlbar_button_pane_cp01

0xb11a,	// (0x0003ec8e) main_sp_fs_ctrlbar_ddmenu_pane

0x14c2,	// (0x00035036) main_sp_fs_ctrlbar_pane_g1

0x14ce,	// (0x00035042) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc41,	// (0x000437b5) main_sp_fs_ctrlbar_pane_g

0xb158,	// (0x0003eccc) main_sp_fs_ctrlbar_pane_t1

0xb195,	// (0x0003ed09) main_sp_fs_ctrlbar_pane

0xb1af,	// (0x0003ed23) main_sp_fs_listscroll_pane_te_cp01

0x410f,	// (0x00037c83) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x410f,	// (0x00037c83) popup_sp_fs_action_menu_pane_cp01

0x2b1e,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2b1e,	// (0x00036692) bg_sp_fs_highlight_list_pane_cp01

0x412f,	// (0x00037ca3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x412f,	// (0x00037ca3) sp_fs_action_menu_list_gene_pane_g1

0x1504,	// (0x00035078) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1504,	// (0x00035078) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4f,	// (0x000437c3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4f,	// (0x000437c3) sp_fs_action_menu_list_gene_pane_g

0x413e,	// (0x00037cb2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x413e,	// (0x00037cb2) sp_fs_action_menu_list_gene_pane_t1

0x4156,	// (0x00037cca) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4156,	// (0x00037cca) sp_fs_action_menu_list_gene_pane

0x154c,	// (0x000350c0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x154c,	// (0x000350c0) popup_sp_fs_action_menu_bg_pane

0x4179,	// (0x00037ced) sp_fs_action_menu_list_pane_ParamLimits

0x4179,	// (0x00037ced) sp_fs_action_menu_list_pane

0xe9ae,	// (0x00042522) sp_fs_scroll_pane_cp01_ParamLimits

0xe9ae,	// (0x00042522) sp_fs_scroll_pane_cp01

0xcd2d,	// (0x000408a1) list_medium_line_plain_t2_t1

0xcd2d,	// (0x000408a1) list_medium_line_plain_t2_t2

0x0001,

0xfc3c,	// (0x000437b0) list_medium_line_plain_t2_t

0xcd2d,	// (0x000408a1) list_medium_line_plain_t3_t1

0xcd2d,	// (0x000408a1) list_medium_line_plain_t3_t2

0xcd2d,	// (0x000408a1) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00042e1b) list_medium_line_plain_t3_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t2_g2_g

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g2_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_x2_t2_g2_t

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_x2_t4_g2_g

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t2

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t3

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00042d69) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00042d69) list_medium_line_x2_t4_g2_t

0xc7c4,	// (0x00040338) list_medium_line_t3_right_iconx2_g1

0xc7c4,	// (0x00040338) list_medium_line_t3_right_iconx2_g2

0xc7c4,	// (0x00040338) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00042f3c) list_medium_line_t3_right_iconx2_g

0xcd2d,	// (0x000408a1) list_medium_line_t3_right_iconx2_t1

0xcd2d,	// (0x000408a1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3c,	// (0x000437b0) list_medium_line_t3_right_iconx2_t

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g1

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g2

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g3

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00042d60) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00042d60) list_medium_line_x3_t4_g4_g

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t1

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t2

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t3

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00042d69) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00042d69) list_medium_line_x3_t4_g4_t

0x419d,	// (0x00037d11) list_single_dyc_row_text_pane_t1_ParamLimits

0x419d,	// (0x00037d11) list_single_dyc_row_text_pane_t1

0x41da,	// (0x00037d4e) list_single_dyc_row_text_pane_t2_ParamLimits

0x41da,	// (0x00037d4e) list_single_dyc_row_text_pane_t2

0x4250,	// (0x00037dc4) list_single_dyc_row_text_pane_t3_ParamLimits

0x4250,	// (0x00037dc4) list_single_dyc_row_text_pane_t3

0x0005,

0xfc54,	// (0x000437c8) list_single_dyc_row_text_pane_t_ParamLimits

0xfc54,	// (0x000437c8) list_single_dyc_row_text_pane_t

0x4327,	// (0x00037e9b) list_single_dyc_row_pane_g1_ParamLimits

0x4327,	// (0x00037e9b) list_single_dyc_row_pane_g1

0x4333,	// (0x00037ea7) list_single_dyc_row_pane_g2_ParamLimits

0x4333,	// (0x00037ea7) list_single_dyc_row_pane_g2

0x433f,	// (0x00037eb3) list_single_dyc_row_pane_g3_ParamLimits

0x433f,	// (0x00037eb3) list_single_dyc_row_pane_g3

0x434b,	// (0x00037ebf) list_single_dyc_row_pane_g4_ParamLimits

0x434b,	// (0x00037ebf) list_single_dyc_row_pane_g4

0x0003,

0xfc61,	// (0x000437d5) list_single_dyc_row_pane_g_ParamLimits

0xfc61,	// (0x000437d5) list_single_dyc_row_pane_g

0x4357,	// (0x00037ecb) list_single_dyc_row_text_pane_ParamLimits

0x4357,	// (0x00037ecb) list_single_dyc_row_text_pane

0x244f,	// (0x00035fc3) bg_sp_fs_scroll_pane

0x15f1,	// (0x00035165) thumb_sp_fs_scroll_pane

0x2b85,	// (0x000366f9) list_medium_line_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g1

0xc7de,	// (0x00040352) list_medium_line_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t1

0x2b85,	// (0x000366f9) list_medium_line_x2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_x2_g

0xc7de,	// (0x00040352) list_medium_line_x2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t1

0x2b85,	// (0x000366f9) list_medium_line_x3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x3_g1

0x0261,	// (0x00033dd5) list_medium_line_x3_g2_ParamLimits

0x0261,	// (0x00033dd5) list_medium_line_x3_g2

0x0001,

0xfc6a,	// (0x000437de) list_medium_line_x3_g_ParamLimits

0xfc6a,	// (0x000437de) list_medium_line_x3_g

0x15fa,	// (0x0003516e) list_medium_line_x3_t1_ParamLimits

0x15fa,	// (0x0003516e) list_medium_line_x3_t1

0x160e,	// (0x00035182) thumb_sp_fs_scroll_pane_g1

0x1617,	// (0x0003518b) thumb_sp_fs_scroll_pane_g2

0x1620,	// (0x00035194) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000437e3) thumb_sp_fs_scroll_pane_g

0x160e,	// (0x00035182) bg_sp_fs_scroll_pane_g1

0x1617,	// (0x0003518b) bg_sp_fs_scroll_pane_g2

0x1620,	// (0x00035194) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000437e3) bg_sp_fs_scroll_pane_g

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g1

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g2

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g3

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00042d60) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00042d60) list_medium_line_x2_t3_g4_g

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t1

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t2

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_x2_t3_g4_t

0x2b85,	// (0x000366f9) list_medium_line_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_g2_g

0xc7de,	// (0x00040352) list_medium_line_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_g2_t1

0x2b85,	// (0x000366f9) list_medium_line_t3_g2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g2_g1

0x2b85,	// (0x000366f9) list_medium_line_t3_g2_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00042d5b) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00042d5b) list_medium_line_t3_g2_g

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t1

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t2

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_t3_g2_t

0xc7c4,	// (0x00040338) list_medium_line_right_icon_g1

0xcd2d,	// (0x000408a1) list_medium_line_right_icon_t1

0x2b85,	// (0x000366f9) list_medium_line_t2_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g1

0xc7de,	// (0x00040352) list_medium_line_t2_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_t1

0xc7de,	// (0x00040352) list_medium_line_t2_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_t2_t

0x2b85,	// (0x000366f9) list_medium_line_t3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g1

0xc7de,	// (0x00040352) list_medium_line_t3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_t1

0xc7de,	// (0x00040352) list_medium_line_t3_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_t2

0xc7de,	// (0x00040352) list_medium_line_t3_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_t3_t

0x2b85,	// (0x000366f9) list_medium_line_g3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g3_g1

0x2b85,	// (0x000366f9) list_medium_line_g3_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g3_g2

0x2b85,	// (0x000366f9) list_medium_line_g3_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00042d4d) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00042d4d) list_medium_line_g3_g

0xc7de,	// (0x00040352) list_medium_line_g3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_g3_t1

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g1

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g2

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00042d4d) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00042d4d) list_medium_line_t2_g3_g

0xc7de,	// (0x00040352) list_medium_line_t2_g3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_g3_t1

0xc7de,	// (0x00040352) list_medium_line_t2_g3_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00042dd0) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00042dd0) list_medium_line_t2_g3_t

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g1_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g1

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g2_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g2

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g3_ParamLimits

0x2b85,	// (0x000366f9) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00042d4d) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00042d4d) list_medium_line_t3_g3_g

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t1_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t1

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t2_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t2

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t3_ParamLimits

0xc7de,	// (0x00040352) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00042d54) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00042d54) list_medium_line_t3_g3_t

0xc7c4,	// (0x00040338) list_medium_line_right_iconx2_g1

0xc7c4,	// (0x00040338) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00042f37) list_medium_line_right_iconx2_g

0xcd2d,	// (0x000408a1) list_medium_line_right_iconx2_t1

0xc7c4,	// (0x00040338) list_medium_line_t2_right_iconx2_g1

0xc7c4,	// (0x00040338) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00042f37) list_medium_line_t2_right_iconx2_g

0xcd2d,	// (0x000408a1) list_medium_line_t2_right_iconx2_t1

0xcd2d,	// (0x000408a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3c,	// (0x000437b0) list_medium_line_t2_right_iconx2_t

0xcd2d,	// (0x000408a1) list_medium_line_x4_t4_t1

0xcd2d,	// (0x000408a1) list_medium_line_x4_t4_t2

0xcd2d,	// (0x000408a1) list_medium_line_x4_t4_t3

0xcd2d,	// (0x000408a1) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00042e22) list_medium_line_x4_t4_t

0xb1ea,	// (0x0003ed5e) tport_appsw_pane_ParamLimits

0xb1ea,	// (0x0003ed5e) tport_appsw_pane

0xb1f8,	// (0x0003ed6c) tport_contact_pane_ParamLimits

0xb1f8,	// (0x0003ed6c) tport_contact_pane

0xb208,	// (0x0003ed7c) tport_listscroll_pane_ParamLimits

0xb208,	// (0x0003ed7c) tport_listscroll_pane

0xb217,	// (0x0003ed8b) cell_tport_appsw_pane_ParamLimits

0xb217,	// (0x0003ed8b) cell_tport_appsw_pane

0x2b93,	// (0x00036707) tport_appsw_pane_g1_ParamLimits

0x2b93,	// (0x00036707) tport_appsw_pane_g1

0x1629,	// (0x0003519d) tport_contact_pane_g1

0x1632,	// (0x000351a6) tport_contact_pane_t1

0x1640,	// (0x000351b4) tport_contact_pane_t2

0x0001,

0xfc76,	// (0x000437ea) tport_contact_pane_t

0x164e,	// (0x000351c2) list_tport_pane

0x1657,	// (0x000351cb) scroll_pane_cp_030

0xb24c,	// (0x0003edc0) cell_tport_appsw_pane_g1

0xb25c,	// (0x0003edd0) cell_tport_appsw_pane_t1

0xb26a,	// (0x0003edde) grid_highlight_pane_cp019

0xb272,	// (0x0003ede6) list_tport_double_graphic_pane_ParamLimits

0xb272,	// (0x0003ede6) list_tport_double_graphic_pane

0x2b1e,	// (0x00036692) list_highlight_pane_cp023_ParamLimits

0x2b1e,	// (0x00036692) list_highlight_pane_cp023

0xb28f,	// (0x0003ee03) list_tport_double_graphic_pane_g1_ParamLimits

0xb28f,	// (0x0003ee03) list_tport_double_graphic_pane_g1

0xb29c,	// (0x0003ee10) list_tport_double_graphic_pane_t1_ParamLimits

0xb29c,	// (0x0003ee10) list_tport_double_graphic_pane_t1

0xb2b1,	// (0x0003ee25) list_tport_double_graphic_pane_t2_ParamLimits

0xb2b1,	// (0x0003ee25) list_tport_double_graphic_pane_t2

0x0001,

0xfc82,	// (0x000437f6) list_tport_double_graphic_pane_t_ParamLimits

0xfc82,	// (0x000437f6) list_tport_double_graphic_pane_t

0x244f,	// (0x00035fc3) main_cale_note_pane

0x9486,	// (0x0003cffa) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9486,	// (0x0003cffa) cell_vitu2_function_top_wide_pane_cp01

0xabd3,	// (0x0003e747) wait_bar_pane_cp05_ParamLimits

0x2b1e,	// (0x00036692) listscroll_cmail_pane

0x1660,	// (0x000351d4) list_cmail_pane

0xb2c3,	// (0x0003ee37) list_cmail_body_pane

0xb2dd,	// (0x0003ee51) list_single_cmail_header_caption_pane

0x1670,	// (0x000351e4) list_single_cmail_header_detail_pane_ParamLimits

0x1670,	// (0x000351e4) list_single_cmail_header_detail_pane

0x16a2,	// (0x00035216) list_single_cmail_header_caption_pane_t1

0x4376,	// (0x00037eea) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4376,	// (0x00037eea) list_single_cmail_header_detail_pane_g1

0x438e,	// (0x00037f02) list_single_cmail_header_detail_pane_g2_ParamLimits

0x438e,	// (0x00037f02) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc87,	// (0x000437fb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc87,	// (0x000437fb) list_single_cmail_header_detail_pane_g

0x439a,	// (0x00037f0e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x439a,	// (0x00037f0e) list_single_cmail_header_detail_pane_t1

0x43fa,	// (0x00037f6e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x43fa,	// (0x00037f6e) list_single_cmail_header_editor_pane_bg

0x11ab,	// (0x00034d1f) list_cmail_body_pane_g1

0x1749,	// (0x000352bd) list_cmail_body_pane_t1

0x03cd,	// (0x00033f41) list_single_cmail_header_editor_pane_bg_g1

0xc9ed,	// (0x00040561) list_single_cmail_header_editor_pane_bg_g1_copy1

0x03dd,	// (0x00033f51) list_single_cmail_header_editor_pane_bg_g1_copy2

0x03d5,	// (0x00033f49) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0638,	// (0x000341ac) list_single_cmail_header_editor_pane_bg_g1_copy4

0x03fd,	// (0x00033f71) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x03ed,	// (0x00033f61) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x03f5,	// (0x00033f69) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9cd,	// (0x00040541) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb2fd,	// (0x0003ee71) calenote_gesture_pane_ParamLimits

0xb2fd,	// (0x0003ee71) calenote_gesture_pane

0xb317,	// (0x0003ee8b) calenote_window_pane_ParamLimits

0xb317,	// (0x0003ee8b) calenote_window_pane

0x1757,	// (0x000352cb) popup_note_window_cp01

0xb32f,	// (0x0003eea3) calenote_swipe_1_pane_ParamLimits

0xb32f,	// (0x0003eea3) calenote_swipe_1_pane

0xb09f,	// (0x0003ec13) calenote_swipe_2_pane_ParamLimits

0xb09f,	// (0x0003ec13) calenote_swipe_2_pane

0x13df,	// (0x00034f53) calenote_swipe_1_pane_g1_ParamLimits

0x13df,	// (0x00034f53) calenote_swipe_1_pane_g1

0x13ec,	// (0x00034f60) calenote_swipe_1_pane_g2_ParamLimits

0x13ec,	// (0x00034f60) calenote_swipe_1_pane_g2

0x0001,

0xfc24,	// (0x00043798) calenote_swipe_1_pane_g_ParamLimits

0xfc24,	// (0x00043798) calenote_swipe_1_pane_g

0x1769,	// (0x000352dd) calenote_swipe_1_pane_t1_ParamLimits

0x1769,	// (0x000352dd) calenote_swipe_1_pane_t1

0x13df,	// (0x00034f53) calenote_swipe_2_pane_g1_ParamLimits

0x13df,	// (0x00034f53) calenote_swipe_2_pane_g1

0x1788,	// (0x000352fc) calenote_swipe_2_pane_g2_ParamLimits

0x1788,	// (0x000352fc) calenote_swipe_2_pane_g2

0x0001,

0xfc93,	// (0x00043807) calenote_swipe_2_pane_g_ParamLimits

0xfc93,	// (0x00043807) calenote_swipe_2_pane_g

0x1794,	// (0x00035308) calenote_swipe_2_pane_t1_ParamLimits

0x1794,	// (0x00035308) calenote_swipe_2_pane_t1

0x244f,	// (0x00035fc3) main_mup_navstr_pane

0x830f,	// (0x0003be83) main_mup3_pane_t7_ParamLimits

0x830f,	// (0x0003be83) main_mup3_pane_t7

0x8b1d,	// (0x0003c691) main_mp4_pane_g6_ParamLimits

0x8b1d,	// (0x0003c691) main_mp4_pane_g6

0x8ea9,	// (0x0003ca1d) main_image3_pane_t4_ParamLimits

0x8ea9,	// (0x0003ca1d) main_image3_pane_t4

0xb342,	// (0x0003eeb6) popup_navstr_preview_pane_ParamLimits

0xb342,	// (0x0003eeb6) popup_navstr_preview_pane

0xb34e,	// (0x0003eec2) scroll_navstr_pane_ParamLimits

0xb34e,	// (0x0003eec2) scroll_navstr_pane

0x244f,	// (0x00035fc3) bg_popup_preview_window_pane_cp04

0x17bb,	// (0x0003532f) popup_navstr_preview_pane_t1

0xb35a,	// (0x0003eece) scroll_navstr_pane_g1_ParamLimits

0xb35a,	// (0x0003eece) scroll_navstr_pane_g1

0xb367,	// (0x0003eedb) scroll_navstr_pane_t1_ParamLimits

0xb367,	// (0x0003eedb) scroll_navstr_pane_t1

0x1760,	// (0x000352d4) bg_button_pane_cp014

0x1760,	// (0x000352d4) bg_button_pane_cp030

0x406f,	// (0x00037be3) list_double_fisheye_pane_g4_ParamLimits

0x406f,	// (0x00037be3) list_double_fisheye_pane_g4

0x407b,	// (0x00037bef) list_double_fisheye_pane_g5_ParamLimits

0x407b,	// (0x00037bef) list_double_fisheye_pane_g5

0xe9d4,	// (0x00042548) sp_fs_scroll_pane_cp03

0x14c2,	// (0x00035036) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x14ce,	// (0x00035042) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc41,	// (0x000437b5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb158,	// (0x0003eccc) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1668,	// (0x000351dc) sp_fs_scroll_pane_cp02

0xc6ea,	// (0x0004025e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6ea,	// (0x0004025e) popup_sp_fs_calendar_preview_list_single_pane

0x244f,	// (0x00035fc3) main_cam6_pano_pane

0x2b1e,	// (0x00036692) main_mup3_pane_ParamLimits

0x244f,	// (0x00035fc3) main_phacti_pane

0xaaa6,	// (0x0003e61a) bg_button_pane_cp11

0xaabe,	// (0x0003e632) main_mobtv_info_pane_g2_ParamLimits

0xaabe,	// (0x0003e632) main_mobtv_info_pane_g2

0x0001,

0xfba1,	// (0x00043715) main_mobtv_info_pane_g_ParamLimits

0xfba1,	// (0x00043715) main_mobtv_info_pane_g

0xac70,	// (0x0003e7e4) sc_clock_pane_t5_ParamLimits

0xac70,	// (0x0003e7e4) sc_clock_pane_t5

0xae68,	// (0x0003e9dc) main_radioblah_pane_g1_ParamLimits

0x1311,	// (0x00034e85) main_radioblah_pane_t3_ParamLimits

0x1311,	// (0x00034e85) main_radioblah_pane_t3

0x1329,	// (0x00034e9d) main_radioblah_pane_t4_ParamLimits

0x1329,	// (0x00034e9d) main_radioblah_pane_t4

0xae86,	// (0x0003e9fa) main_radioblah_text_pane_ParamLimits

0xae86,	// (0x0003e9fa) main_radioblah_text_pane

0xae93,	// (0x0003ea07) main_radioblah_info_pane_g1_ParamLimits

0xaf2c,	// (0x0003eaa0) main_radioblah_info_pane_t4_ParamLimits

0xaf2c,	// (0x0003eaa0) main_radioblah_info_pane_t4

0x2b1e,	// (0x00036692) main_sp_fs_calendar_pane

0xb379,	// (0x0003eeed) main_phacti_pane_g1

0xb381,	// (0x0003eef5) phacti_note_pane_ParamLimits

0xb381,	// (0x0003eef5) phacti_note_pane

0x17d2,	// (0x00035346) phacti_term_pane_ParamLimits

0x17d2,	// (0x00035346) phacti_term_pane

0x17e7,	// (0x0003535b) phacti_note_pane_t1_ParamLimits

0x17e7,	// (0x0003535b) phacti_note_pane_t1

0x4411,	// (0x00037f85) phacti_term_pane_g1

0x4419,	// (0x00037f8d) phacti_term_pane_t1_ParamLimits

0x4419,	// (0x00037f8d) phacti_term_pane_t1

0x1830,	// (0x000353a4) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1838,	// (0x000353ac) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9d,	// (0x00043811) popup_sp_fs_calendar_preview_list_single_pane_g

0x1840,	// (0x000353b4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1840,	// (0x000353b4) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1856,	// (0x000353ca) aid_popup_sp_fs_bg_corner_pane

0xc7c4,	// (0x00040338) popup_sp_fs_calendar_preview_bg_pane_g1

0x244f,	// (0x00035fc3) popup_sp_fs_calendar_preview_bg_pane

0x185e,	// (0x000353d2) popup_sp_fs_calendar_preview_list_pane

0xe43c,	// (0x00041fb0) bg_main_sp_fs_cale_pane_ParamLimits

0xe43c,	// (0x00041fb0) bg_main_sp_fs_cale_pane

0x444c,	// (0x00037fc0) listscroll_cale_mrui_pane_ParamLimits

0x444c,	// (0x00037fc0) listscroll_cale_mrui_pane

0x4461,	// (0x00037fd5) listscroll_sp_fs_schedule_track_pane

0x446a,	// (0x00037fde) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x446a,	// (0x00037fde) main_sp_fs_ctrlbar_pane_cp01

0x18a0,	// (0x00035414) main_sp_fs_ribbon_pane

0x447d,	// (0x00037ff1) popup_sp_fs_cale_preview_window

0x2106,	// (0x00035c7a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x2106,	// (0x00035c7a) list_single_sp_fs_schedule_track_pane

0x2b77,	// (0x000366eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2b77,	// (0x000366eb) bg_sp_fs_highlight_list_pane_cp03

0xb3e4,	// (0x0003ef58) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb3e4,	// (0x0003ef58) list_single_sp_fs_schedule_track_pane_g1

0xb3f0,	// (0x0003ef64) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb3f0,	// (0x0003ef64) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca2,	// (0x00043816) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca2,	// (0x00043816) list_single_sp_fs_schedule_track_pane_g

0xb3fc,	// (0x0003ef70) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb3fc,	// (0x0003ef70) list_single_sp_fs_schedule_track_pane_t1

0xb41a,	// (0x0003ef8e) sp_fs_schedule_track_pane_ParamLimits

0xb41a,	// (0x0003ef8e) sp_fs_schedule_track_pane

0x18ba,	// (0x0003542e) sp_fs_schedule_track_pane_g1

0x18c2,	// (0x00035436) sp_fs_schedule_track_pane_g2

0x18ca,	// (0x0003543e) sp_fs_schedule_track_pane_g3

0x18d2,	// (0x00035446) sp_fs_schedule_track_pane_g4

0x18da,	// (0x0003544e) sp_fs_schedule_track_pane_g5

0x0004,

0xfca7,	// (0x0004381b) sp_fs_schedule_track_pane_g

0x03cd,	// (0x00033f41) bg_sp_fs_schedule_viewer_highlight_g1

0xc9ed,	// (0x00040561) bg_sp_fs_schedule_viewer_highlight_g2

0x03d5,	// (0x00033f49) bg_sp_fs_schedule_viewer_highlight_g3

0x03dd,	// (0x00033f51) bg_sp_fs_schedule_viewer_highlight_g4

0x0638,	// (0x000341ac) bg_sp_fs_schedule_viewer_highlight_g5

0x03ed,	// (0x00033f61) bg_sp_fs_schedule_viewer_highlight_g6

0x03f5,	// (0x00033f69) bg_sp_fs_schedule_viewer_highlight_g7

0x03fd,	// (0x00033f71) bg_sp_fs_schedule_viewer_highlight_g8

0xc9cd,	// (0x00040541) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb2,	// (0x00043826) bg_sp_fs_schedule_viewer_highlight_g

0x244f,	// (0x00035fc3) bg_main_sp_fs_ribbon_pane

0xb42c,	// (0x0003efa0) main_sp_fs_ribbon_pane_g1

0x18e2,	// (0x00035456) main_sp_fs_ribbon_pane_t1

0xb435,	// (0x0003efa9) main_sp_fs_ribbon_pane_t2

0x18f1,	// (0x00035465) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc5,	// (0x00043839) main_sp_fs_ribbon_pane_t

0x1900,	// (0x00035474) main_sp_fs_ribbon_scheduler_pane

0x1908,	// (0x0003547c) bg_main_sp_fs_ribbon_pane_g1

0x1911,	// (0x00035485) bg_main_sp_fs_ribbon_pane_g2

0x191a,	// (0x0003548e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfccc,	// (0x00043840) bg_main_sp_fs_ribbon_pane_g

0x1922,	// (0x00035496) main_sp_fs_ribbon_scheduler_pane_g1

0x192b,	// (0x0003549f) main_sp_fs_ribbon_scheduler_pane_g2

0x1934,	// (0x000354a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd3,	// (0x00043847) main_sp_fs_ribbon_scheduler_pane_g

0x193d,	// (0x000354b1) list_cale_mrui_pane

0xb444,	// (0x0003efb8) sp_fs_scroll_pane_cp07_ParamLimits

0xb444,	// (0x0003efb8) sp_fs_scroll_pane_cp07

0xb460,	// (0x0003efd4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb460,	// (0x0003efd4) bg_sp_fs_schedule_viewer_highlight

0x194a,	// (0x000354be) list_single_sp_fs_schedule_track_pane_cp01

0x1952,	// (0x000354c6) list_sp_fs_schedule_track_pane

0x195a,	// (0x000354ce) sp_fs_scroll_pane_cp06_ParamLimits

0x195a,	// (0x000354ce) sp_fs_scroll_pane_cp06

0xc7c4,	// (0x00040338) bgmain_sp_fs_calendar_pane_g1

0x448f,	// (0x00038003) list_single_cale_mrui_pane_ParamLimits

0x448f,	// (0x00038003) list_single_cale_mrui_pane

0x44b3,	// (0x00038027) list_single_cale_mrui_row_pane_ParamLimits

0x44b3,	// (0x00038027) list_single_cale_mrui_row_pane

0x44c0,	// (0x00038034) list_single_cale_mrui_row_pane_g1_ParamLimits

0x44c0,	// (0x00038034) list_single_cale_mrui_row_pane_g1

0x44f8,	// (0x0003806c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x44f8,	// (0x0003806c) list_single_cale_mrui_row_pane_t1

0x450a,	// (0x0003807e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x450a,	// (0x0003807e) list_single_cale_mrui_row_pane_t2

0x4570,	// (0x000380e4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4570,	// (0x000380e4) list_single_cale_mrui_row_pane_t3

0x459f,	// (0x00038113) list_single_cale_mrui_row_pane_t4_ParamLimits

0x459f,	// (0x00038113) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce1,	// (0x00043855) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce1,	// (0x00043855) list_single_cale_mrui_row_pane_t

0x45ce,	// (0x00038142) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x45ce,	// (0x00038142) list_single_cmail_header_editor_pane_bg_cp01

0x45f0,	// (0x00038164) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x45f0,	// (0x00038164) list_single_cmail_header_editor_pane_bg_cp02

0xb46d,	// (0x0003efe1) main_radioblah_text_pane_t1_ParamLimits

0xb46d,	// (0x0003efe1) main_radioblah_text_pane_t1

0x1a30,	// (0x000355a4) cam6_indi_pane_cp01

0x1a38,	// (0x000355ac) cam6_mode_pane_cp01

0x1a40,	// (0x000355b4) cam6_pano_pane

0x1a49,	// (0x000355bd) cam6_zoom_pane_cp01

0x1a53,	// (0x000355c7) cam6_pano_image_pane

0x1a5c,	// (0x000355d0) cam6_pano_pane_g1

0x11ab,	// (0x00034d1f) cam6_pano_pane_g2

0x1a65,	// (0x000355d9) cam6_pano_pane_g3

0x1a6e,	// (0x000355e2) cam6_pano_pane_g4

0xee52,	// (0x000429c6) cam6_pano_pane_g5

0x1a77,	// (0x000355eb) cam6_pano_pane_g6

0x1a7f,	// (0x000355f3) cam6_pano_pane_g7

0x1a87,	// (0x000355fb) cam6_pano_pane_g8

0x1a90,	// (0x00035604) cam6_pano_pane_g9

0x0008,

0xfcea,	// (0x0004385e) cam6_pano_pane_g

0x244f,	// (0x00035fc3) main_browser_tag_pane

0x17b3,	// (0x00035327) grid_navstr_albumart_pane

0x1a9b,	// (0x0003560f) cell_navstr_albumart_pane_ParamLimits

0x1a9b,	// (0x0003560f) cell_navstr_albumart_pane

0x1ab7,	// (0x0003562b) cell_navstr_albumart_pane_g1

0xe2d6,	// (0x00041e4a) cell_navstr_albumart_pane_g2

0xe2e6,	// (0x00041e5a) cell_navstr_albumart_pane_g3

0xe2de,	// (0x00041e52) cell_navstr_albumart_pane_g4

0x0003,

0xfcfd,	// (0x00043871) cell_navstr_albumart_pane_g

0xb487,	// (0x0003effb) bt_list_pane_ParamLimits

0xb487,	// (0x0003effb) bt_list_pane

0xb4a0,	// (0x0003f014) bt_list_pane_t1

0xb4af,	// (0x0003f023) bt_list_pane_t2

0x0001,

0xfd06,	// (0x0004387a) bt_list_pane_t

0x244f,	// (0x00035fc3) main_cale_prevew_pane

0xb4be,	// (0x0003f032) popup_cale_preview_window_ParamLimits

0xb4be,	// (0x0003f032) popup_cale_preview_window

0x2b1e,	// (0x00036692) bg_popup_preview_window_pane_cp05_ParamLimits

0x2b1e,	// (0x00036692) bg_popup_preview_window_pane_cp05

0x1abf,	// (0x00035633) list_cale_preview_pane_ParamLimits

0x1abf,	// (0x00035633) list_cale_preview_pane

0xb4db,	// (0x0003f04f) list_double_cale_preview_pane_ParamLimits

0xb4db,	// (0x0003f04f) list_double_cale_preview_pane

0xb4ef,	// (0x0003f063) list_single_cale_preview_pane_ParamLimits

0xb4ef,	// (0x0003f063) list_single_cale_preview_pane

0xb507,	// (0x0003f07b) list_single_cale_preview_pane_g1

0xb50f,	// (0x0003f083) list_single_cale_preview_pane_t1_ParamLimits

0xb50f,	// (0x0003f083) list_single_cale_preview_pane_t1

0xb524,	// (0x0003f098) list_double_cale_preview_pane_g1

0xb52c,	// (0x0003f0a0) list_double_cale_preview_pane_t1_ParamLimits

0xb52c,	// (0x0003f0a0) list_double_cale_preview_pane_t1

0xb541,	// (0x0003f0b5) list_double_cale_preview_pane_t2_ParamLimits

0xb541,	// (0x0003f0b5) list_double_cale_preview_pane_t2

0x0001,

0xfd0b,	// (0x0004387f) list_double_cale_preview_pane_t_ParamLimits

0xfd0b,	// (0x0004387f) list_double_cale_preview_pane_t

0x244f,	// (0x00035fc3) main_ezdial_pane

0x2b1e,	// (0x00036692) main_sp_fs_email_pane_ParamLimits

0xb0b9,	// (0x0003ec2d) cmail_ddmenu_btn01_pane_ParamLimits

0xb0b9,	// (0x0003ec2d) cmail_ddmenu_btn01_pane

0xb0d6,	// (0x0003ec4a) cmail_ddmenu_btn02_pane_ParamLimits

0xb0d6,	// (0x0003ec4a) cmail_ddmenu_btn02_pane

0xb0f4,	// (0x0003ec68) cmail_ddmenu_btn03_pane_ParamLimits

0xb0f4,	// (0x0003ec68) cmail_ddmenu_btn03_pane

0xb195,	// (0x0003ed09) main_sp_fs_ctrlbar_pane_ParamLimits

0xb1af,	// (0x0003ed23) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb2c3,	// (0x0003ee37) list_cmail_body_pane_ParamLimits

0x16b0,	// (0x00035224) bg_button_pane_cp12

0x16c5,	// (0x00035239) list_single_cmail_header_detail_pane_g3_ParamLimits

0x16c5,	// (0x00035239) list_single_cmail_header_detail_pane_g3

0x43d6,	// (0x00037f4a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x43d6,	// (0x00037f4a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8e,	// (0x00043802) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8e,	// (0x00043802) list_single_cmail_header_detail_pane_t

0x442e,	// (0x00037fa2) phacti_term_pane_t2_ParamLimits

0x442e,	// (0x00037fa2) phacti_term_pane_t2

0x0001,

0xfc98,	// (0x0004380c) phacti_term_pane_t_ParamLimits

0xfc98,	// (0x0004380c) phacti_term_pane_t

0x1acb,	// (0x0003563f) aid_size_list_single_double

0xb559,	// (0x0003f0cd) popup_ezdial_listscroll_window

0xb57b,	// (0x0003f0ef) popup_number_entry_window_cp01

0xc78e,	// (0x00040302) bg_popup_call_pane_cp09

0x1ad7,	// (0x0003564b) ezdial_list_pane

0x1adf,	// (0x00035653) scroll_pane_cp23

0xd1d0,	// (0x00040d44) bg_button_pane_cp028_ParamLimits

0xd1d0,	// (0x00040d44) bg_button_pane_cp028

0xb589,	// (0x0003f0fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb589,	// (0x0003f0fd) cmail_ddmenu_btn01_pane_g1

0xb59b,	// (0x0003f10f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb59b,	// (0x0003f10f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd10,	// (0x00043884) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd10,	// (0x00043884) cmail_ddmenu_btn01_pane_g

0x1ae7,	// (0x0003565b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1ae7,	// (0x0003565b) cmail_ddmenu_btn01_pane_t1

0xe43c,	// (0x00041fb0) bg_button_pane_cp029_ParamLimits

0xe43c,	// (0x00041fb0) bg_button_pane_cp029

0xb5a7,	// (0x0003f11b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb5a7,	// (0x0003f11b) cmail_ddmenu_btn02_pane_g1

0xb5bf,	// (0x0003f133) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb5bf,	// (0x0003f133) cmail_ddmenu_btn02_pane_t1

0x2b77,	// (0x000366eb) bg_button_pane_cp031_ParamLimits

0x2b77,	// (0x000366eb) bg_button_pane_cp031

0xb5a7,	// (0x0003f11b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb5a7,	// (0x0003f11b) cmail_ddmenu_btn03_pane_g1

0xb5bf,	// (0x0003f133) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb5bf,	// (0x0003f133) cmail_ddmenu_btn03_pane_t1

0x8d52,	// (0x0003c8c6) cell_dialer2_keypad_pane_t1_ParamLimits

0x8d6c,	// (0x0003c8e0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8d6c,	// (0x0003c8e0) cell_dialer2_keypad_pane_t1_copy1

0xa8d3,	// (0x0003e447) ncimui_group_button_pane

0x2b1e,	// (0x00036692) main_sp_fs_calendar_pane_ParamLimits

0xb2dd,	// (0x0003ee51) list_single_cmail_header_caption_pane_ParamLimits

0x4443,	// (0x00037fb7) aid_recal_txt_sm_pane

0x244f,	// (0x00035fc3) mian_recal_day_pane

0x447d,	// (0x00037ff1) popup_sp_fs_cale_preview_window_ParamLimits

0x1afd,	// (0x00035671) list_recal_day_pane

0x4628,	// (0x0003819c) list_single_recal_day_pane_ParamLimits

0x4628,	// (0x0003819c) list_single_recal_day_pane

0x1b52,	// (0x000356c6) list_single_recal_day_pane_g1_ParamLimits

0x1b52,	// (0x000356c6) list_single_recal_day_pane_g1

0x463a,	// (0x000381ae) list_single_recal_day_pane_g2_ParamLimits

0x463a,	// (0x000381ae) list_single_recal_day_pane_g2

0x4646,	// (0x000381ba) list_single_recal_day_pane_g3_ParamLimits

0x4646,	// (0x000381ba) list_single_recal_day_pane_g3

0x4652,	// (0x000381c6) list_single_recal_day_pane_g4_ParamLimits

0x4652,	// (0x000381c6) list_single_recal_day_pane_g4

0x4660,	// (0x000381d4) list_single_recal_day_pane_g5_ParamLimits

0x4660,	// (0x000381d4) list_single_recal_day_pane_g5

0x4676,	// (0x000381ea) list_single_recal_day_pane_g6_ParamLimits

0x4676,	// (0x000381ea) list_single_recal_day_pane_g6

0x0004,

0xfd1f,	// (0x00043893) list_single_recal_day_pane_g_ParamLimits

0xfd1f,	// (0x00043893) list_single_recal_day_pane_g

0x468a,	// (0x000381fe) list_single_recal_day_pane_t1

0x469c,	// (0x00038210) list_single_recal_day_pane_t2

0x0001,

0xfd2a,	// (0x0004389e) list_single_recal_day_pane_t

0xb5e3,	// (0x0003f157) ncimui_query_button_pane_ParamLimits

0xb5e3,	// (0x0003f157) ncimui_query_button_pane

0xb5f3,	// (0x0003f167) ncimui_query_button_pane_t1_ParamLimits

0xb5f3,	// (0x0003f167) ncimui_query_button_pane_t1

0x1bba,	// (0x0003572e) ncimui_query_button_pane_t2_ParamLimits

0x1bba,	// (0x0003572e) ncimui_query_button_pane_t2

0x0001,

0xfd2f,	// (0x000438a3) ncimui_query_button_pane_t_ParamLimits

0xfd2f,	// (0x000438a3) ncimui_query_button_pane_t

0xb606,	// (0x0003f17a) query_button_pane_ParamLimits

0xb606,	// (0x0003f17a) query_button_pane

0x244f,	// (0x00035fc3) bg_button_pane_cp0028

0x1bcd,	// (0x00035741) query_button_pane_t1

0x784e,	// (0x0003b3c2) main_tport_pane_ParamLimits

0xb1c0,	// (0x0003ed34) bg_popup_window_pane_cp01_ParamLimits

0xb1c0,	// (0x0003ed34) bg_popup_window_pane_cp01

0xb1ce,	// (0x0003ed42) heading_pane_cp08_ParamLimits

0xb1ce,	// (0x0003ed42) heading_pane_cp08

0xb1dc,	// (0x0003ed50) heading_pane_cp07_ParamLimits

0xb1dc,	// (0x0003ed50) heading_pane_cp07

0xb24c,	// (0x0003edc0) cell_tport_appsw_pane_g2

0x0002,

0xfc7b,	// (0x000437ef) cell_tport_appsw_pane_g

0x3b44,	// (0x000376b8) input_candi_list_open_g1

0xcbd9,	// (0x0004074d) list_cale_time_pane_g6_ParamLimits

0xcbd9,	// (0x0004074d) list_cale_time_pane_g6

0x7d39,	// (0x0003b8ad) aid_size_touch_calib_1_ParamLimits

0x7d39,	// (0x0003b8ad) aid_size_touch_calib_1

0x7d45,	// (0x0003b8b9) aid_size_touch_calib_2_ParamLimits

0x7d45,	// (0x0003b8b9) aid_size_touch_calib_2

0x7d53,	// (0x0003b8c7) aid_size_touch_calib_3_ParamLimits

0x7d53,	// (0x0003b8c7) aid_size_touch_calib_3

0x7d63,	// (0x0003b8d7) aid_size_touch_calib_4_ParamLimits

0x7d63,	// (0x0003b8d7) aid_size_touch_calib_4

0x7d71,	// (0x0003b8e5) main_touch_calib_button_group_pane_ParamLimits

0x7d71,	// (0x0003b8e5) main_touch_calib_button_group_pane

0x7d7f,	// (0x0003b8f3) main_touch_calib_pane_g1_ParamLimits

0x7d8b,	// (0x0003b8ff) main_touch_calib_pane_g2_ParamLimits

0x7d97,	// (0x0003b90b) main_touch_calib_pane_g3_ParamLimits

0x7da3,	// (0x0003b917) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x00043238) main_touch_calib_pane_g_ParamLimits

0x7daf,	// (0x0003b923) main_touch_calib_pane_t1_ParamLimits

0x7dc6,	// (0x0003b93a) main_touch_calib_pane_t2_ParamLimits

0x7ddf,	// (0x0003b953) main_touch_calib_pane_t3_ParamLimits

0x7df5,	// (0x0003b969) main_touch_calib_pane_t4_ParamLimits

0x7e0b,	// (0x0003b97f) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x00043241) main_touch_calib_pane_t_ParamLimits

0xebe8,	// (0x0004275c) list_single_fp_cale_pane_g3_ParamLimits

0xebe8,	// (0x0004275c) list_single_fp_cale_pane_g3

0x2b1e,	// (0x00036692) bg_button_pane_cp012_ParamLimits

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp03_ParamLimits

0x9bd0,	// (0x0003d744) cell_vitu2_function_top_pane_g1_ParamLimits

0x2b1e,	// (0x00036692) bg_vkb2_func_pane_cp04_ParamLimits

0xa859,	// (0x0003e3cd) main_ncimui_button_group_pane_ParamLimits

0xa859,	// (0x0003e3cd) main_ncimui_button_group_pane

0xa8c1,	// (0x0003e435) main_ncimui_pane_t3_ParamLimits

0xa8c1,	// (0x0003e435) main_ncimui_pane_t3

0x17c9,	// (0x0003533d) phacti_button_group_pane

0x1acb,	// (0x0003563f) aid_size_list_single_double_ParamLimits

0xb559,	// (0x0003f0cd) popup_ezdial_listscroll_window_ParamLimits

0xb57b,	// (0x0003f0ef) popup_number_entry_window_cp01_ParamLimits

0xb613,	// (0x0003f187) phacti_button_pane_ParamLimits

0xb613,	// (0x0003f187) phacti_button_pane

0x244f,	// (0x00035fc3) bg_button_pane_cp14

0x1bdb,	// (0x0003574f) phacti_button_pane_t1

0xb624,	// (0x0003f198) main_touch_calib_button_pane_ParamLimits

0xb624,	// (0x0003f198) main_touch_calib_button_pane

0x2bf7,	// (0x0003676b) bg_button_pane_cp18_ParamLimits

0x2bf7,	// (0x0003676b) bg_button_pane_cp18

0x1be9,	// (0x0003575d) main_touch_calib_button_pane_t1_ParamLimits

0x1be9,	// (0x0003575d) main_touch_calib_button_pane_t1

0x1bff,	// (0x00035773) main_touch_calib_button_pane_t2_ParamLimits

0x1bff,	// (0x00035773) main_touch_calib_button_pane_t2

0x0001,

0xfd34,	// (0x000438a8) main_touch_calib_button_pane_t_ParamLimits

0xfd34,	// (0x000438a8) main_touch_calib_button_pane_t

0x244f,	// (0x00035fc3) cell_ncimui_button_pane

0x244f,	// (0x00035fc3) bg_button_pane_cp032

0x1c1d,	// (0x00035791) cell_ncimui_button_pane_t1

0x8dc8,	// (0x0003c93c) image3_infobar_pane_ParamLimits

0x8dc8,	// (0x0003c93c) image3_infobar_pane

0xac92,	// (0x0003e806) fs_bigclock_status_pane_ParamLimits

0xac92,	// (0x0003e806) fs_bigclock_status_pane

0xac9f,	// (0x0003e813) main_fs_bigclock_clock_pane_ParamLimits

0xac9f,	// (0x0003e813) main_fs_bigclock_clock_pane

0xacbb,	// (0x0003e82f) main_fs_bigclock_indi_pane_ParamLimits

0xacbb,	// (0x0003e82f) main_fs_bigclock_indi_pane

0xace9,	// (0x0003e85d) main_fs_bigclock_swipe_pane_ParamLimits

0xace9,	// (0x0003e85d) main_fs_bigclock_swipe_pane

0x244f,	// (0x00035fc3) main_fs_clock_dumped_data

0xad23,	// (0x0003e897) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xad23,	// (0x0003e897) list_single_fs_bigclock_indicator_pane_g1

0xad42,	// (0x0003e8b6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xad42,	// (0x0003e8b6) list_single_fs_bigclock_indicator_pane_g2

0xad5c,	// (0x0003e8d0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xad5c,	// (0x0003e8d0) list_single_fs_bigclock_indicator_pane_g3

0xad78,	// (0x0003e8ec) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xad78,	// (0x0003e8ec) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd5,	// (0x00043749) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd5,	// (0x00043749) list_single_fs_bigclock_indicator_pane_g

0xada7,	// (0x0003e91b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xada7,	// (0x0003e91b) list_single_fs_bigclock_indicator_pane_t1

0xadcf,	// (0x0003e943) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xadcf,	// (0x0003e943) list_single_fs_bigclock_indicator_pane_t2

0xadf7,	// (0x0003e96b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xadf7,	// (0x0003e96b) list_single_fs_bigclock_indicator_pane_t3

0xae1f,	// (0x0003e993) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xae1f,	// (0x0003e993) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe0,	// (0x00043754) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe0,	// (0x00043754) list_single_fs_bigclock_indicator_pane_t

0x1c2b,	// (0x0003579f) image3_infobar_fav_pane_ParamLimits

0x1c2b,	// (0x0003579f) image3_infobar_fav_pane

0x1c3b,	// (0x000357af) image3_infobar_loc_pane_ParamLimits

0x1c3b,	// (0x000357af) image3_infobar_loc_pane

0x1c51,	// (0x000357c5) image3_infobar_time_pane_ParamLimits

0x1c51,	// (0x000357c5) image3_infobar_time_pane

0xc7c4,	// (0x00040338) image3_infobar_time_pane_g1

0x1c61,	// (0x000357d5) image3_infobar_time_pane_t1

0xc7c4,	// (0x00040338) image3_infobar_loc_pane_g1

0x1c6f,	// (0x000357e3) image3_infobar_loc_pane_g2

0x0001,

0xfd39,	// (0x000438ad) image3_infobar_loc_pane_g

0x1c77,	// (0x000357eb) image3_infobar_loc_pane_t1

0xc7c4,	// (0x00040338) image3_infobar_fav_pane_g1

0x1c85,	// (0x000357f9) image3_infobar_fav_pane_g2

0x0001,

0xfd3e,	// (0x000438b2) image3_infobar_fav_pane_g

0x1c8d,	// (0x00035801) fs_bigclock_status_battery_pane

0x1c96,	// (0x0003580a) fs_bigclock_status_signal_pane

0x1c9f,	// (0x00035813) fs_bigclock_status_title_pane

0x1ca8,	// (0x0003581c) fs_bigclock_status_signal_pane_g1

0x1cb1,	// (0x00035825) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd43,	// (0x000438b7) fs_bigclock_status_signal_pane_g

0x1cb9,	// (0x0003582d) fs_bigclock_status_battery_pane_g1

0x1cc2,	// (0x00035836) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd48,	// (0x000438bc) fs_bigclock_status_battery_pane_g

0x1cca,	// (0x0003583e) fs_bigclock_status_title_pane_t1

0xb634,	// (0x0003f1a8) main_fs_bigclock_clock_pane_g1

0xb634,	// (0x0003f1a8) main_fs_bigclock_clock_pane_g2

0xb643,	// (0x0003f1b7) main_fs_bigclock_clock_pane_g3

0xb643,	// (0x0003f1b7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4d,	// (0x000438c1) main_fs_bigclock_clock_pane_g

0xb653,	// (0x0003f1c7) main_fs_bigclock_clock_pane_t1

0xb668,	// (0x0003f1dc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd56,	// (0x000438ca) main_fs_bigclock_clock_pane_t

0x1cd8,	// (0x0003584c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1cd8,	// (0x0003584c) list_single_fs_bigclock_indicator_pane

0x1ce9,	// (0x0003585d) list_single_fs_bigclock_pane_ParamLimits

0x1ce9,	// (0x0003585d) list_single_fs_bigclock_pane

0x1d0f,	// (0x00035883) main_fs_bigclock_indicator_pane_t1

0x1d1e,	// (0x00035892) list_single_fs_bigclock_pane_g1

0x1d26,	// (0x0003589a) list_single_fs_bigclock_pane_t1

0xc7c4,	// (0x00040338) main_fs_bigclock_swipe_pane_g1

0x1d69,	// (0x000358dd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd67,	// (0x000438db) main_fs_bigclock_swipe_pane_g

0x1d71,	// (0x000358e5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1d71,	// (0x000358e5) main_fs_bigclock_swipe_pane_t1

0x698d,	// (0x0003a501) call_type_pane_ParamLimits

0x244f,	// (0x00035fc3) main_btmg_pane

0x44ec,	// (0x00038060) list_single_cale_mrui_row_pane_g2_ParamLimits

0x44ec,	// (0x00038060) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcda,	// (0x0004384e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcda,	// (0x0004384e) list_single_cale_mrui_row_pane_g

0x4616,	// (0x0003818a) list_recal_vselct_arw_lo_pane

0x1b2e,	// (0x000356a2) list_recal_vselct_arw_up_pane

0x461e,	// (0x00038192) list_recal_vselct_pane

0xb6bf,	// (0x0003f233) btmg_button_pane

0xb6cb,	// (0x0003f23f) main_btmg_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp044

0x1d8e,	// (0x00035902) btmg_button_pane_t1

0xe428,	// (0x00041f9c) aid_listscroll_gen

0x2b1e,	// (0x00036692) main_cntbar_detail_pane

0x1660,	// (0x000351d4) list_cmail_folder_pane

0xe9d4,	// (0x00042548) sp_fs_scroll_pane_cp03_ParamLimits

0x46ae,	// (0x00038222) list_single_fs_dyc_pane_cp01_ParamLimits

0x46ae,	// (0x00038222) list_single_fs_dyc_pane_cp01

0x1db9,	// (0x0003592d) aid_size_cmail_indent

0x46cc,	// (0x00038240) list_single_dyc_row_pane_cp01

0xb6f3,	// (0x0003f267) cntbar_detail_list_pane_ParamLimits

0xb6f3,	// (0x0003f267) cntbar_detail_list_pane

0xb733,	// (0x0003f2a7) main_cntbar_detail_cont_pane_ParamLimits

0xb733,	// (0x0003f2a7) main_cntbar_detail_cont_pane

0x6981,	// (0x0003a4f5) scroll_pane_cp032_ParamLimits

0x6981,	// (0x0003a4f5) scroll_pane_cp032

0xb73f,	// (0x0003f2b3) cntbar_detail_list_event_pane_ParamLimits

0xb73f,	// (0x0003f2b3) cntbar_detail_list_event_pane

0xb701,	// (0x0003f275) cntbar_detail_list_shct_pane

0xca3b,	// (0x000405af) aid_list_gen

0x1dcb,	// (0x0003593f) aid_scroll

0x1dd4,	// (0x00035948) aid_size_touch_scroll_bar

0xafc0,	// (0x0003eb34) aid_list_double

0x46d5,	// (0x00038249) aid_list_single

0xb74f,	// (0x0003f2c3) aid_list_single_lg

0x46de,	// (0x00038252) aid_list_z_g_a_sm

0x46e6,	// (0x0003825a) aid_list_z_g_d

0x46ee,	// (0x00038262) aid_txt_z_prm

0x46fc,	// (0x00038270) aid_txt_z_prm_cp01

0x470a,	// (0x0003827e) aid_txt_z_sec

0xb758,	// (0x0003f2cc) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb758,	// (0x0003f2cc) main_cntbar_detail_cont_pane_g1

0xb765,	// (0x0003f2d9) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb765,	// (0x0003f2d9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6c,	// (0x000438e0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6c,	// (0x000438e0) main_cntbar_detail_cont_pane_g

0x1ddd,	// (0x00035951) main_cntbar_detail_cont_pane_t1

0x1deb,	// (0x0003595f) main_cntbar_detail_cont_pane_t2

0x1df9,	// (0x0003596d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd71,	// (0x000438e5) main_cntbar_detail_cont_pane_t

0xb771,	// (0x0003f2e5) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb771,	// (0x0003f2e5) cell_cntbar_detail_list_shct_pane

0x1e07,	// (0x0003597b) cntbar_detail_list_shct_pane_g1

0x1e10,	// (0x00035984) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd78,	// (0x000438ec) cntbar_detail_list_shct_pane_g

0xb785,	// (0x0003f2f9) cntbar_detail_list_event_pane_g1_ParamLimits

0xb785,	// (0x0003f2f9) cntbar_detail_list_event_pane_g1

0xb791,	// (0x0003f305) cntbar_detail_list_event_pane_g2_ParamLimits

0xb791,	// (0x0003f305) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7d,	// (0x000438f1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7d,	// (0x000438f1) cntbar_detail_list_event_pane_g

0xb7ff,	// (0x0003f373) cntbar_detail_list_event_pane_t1_ParamLimits

0xb7ff,	// (0x0003f373) cntbar_detail_list_event_pane_t1

0xb814,	// (0x0003f388) cntbar_detail_list_event_pane_t2_ParamLimits

0xb814,	// (0x0003f388) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8a,	// (0x000438fe) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8a,	// (0x000438fe) cntbar_detail_list_event_pane_t

0xc7c4,	// (0x00040338) cell_cntbar_detail_list_shct_pane_g1

0x6d25,	// (0x0003a899) navi_pane_mv_g3

0x2b1e,	// (0x00036692) main_cntbar_detail_pane_ParamLimits

0x244f,	// (0x00035fc3) main_notif_wgt_pane

0x8a4a,	// (0x0003c5be) aid_tch_main_mp4_pane_g4

0x8cb3,	// (0x0003c827) popup_slider_window_cp02

0x460c,	// (0x00038180) list_recal_day_event_pane

0xb6d3,	// (0x0003f247) cntbar_detail_btn_pane_ParamLimits

0xb6d3,	// (0x0003f247) cntbar_detail_btn_pane

0xb6e3,	// (0x0003f257) cntbar_detail_btn_pane_cp01_ParamLimits

0xb6e3,	// (0x0003f257) cntbar_detail_btn_pane_cp01

0xb701,	// (0x0003f275) cntbar_detail_list_shct_pane_ParamLimits

0xb70d,	// (0x0003f281) cntbar_detail_pane_g1_ParamLimits

0xb70d,	// (0x0003f281) cntbar_detail_pane_g1

0xb71d,	// (0x0003f291) cntbar_detail_pane_t1_ParamLimits

0xb71d,	// (0x0003f291) cntbar_detail_pane_t1

0xb79d,	// (0x0003f311) cntbar_detail_list_event_pane_g3_ParamLimits

0xb79d,	// (0x0003f311) cntbar_detail_list_event_pane_g3

0xb7b5,	// (0x0003f329) cntbar_detail_list_event_pane_g4_ParamLimits

0xb7b5,	// (0x0003f329) cntbar_detail_list_event_pane_g4

0xb7cd,	// (0x0003f341) cntbar_detail_list_event_pane_g5_ParamLimits

0xb7cd,	// (0x0003f341) cntbar_detail_list_event_pane_g5

0xb7e5,	// (0x0003f359) cntbar_detail_list_event_pane_g6_ParamLimits

0xb7e5,	// (0x0003f359) cntbar_detail_list_event_pane_g6

0xb829,	// (0x0003f39d) cntbar_detail_list_event_pane_t3_ParamLimits

0xb829,	// (0x0003f39d) cntbar_detail_list_event_pane_t3

0xb83b,	// (0x0003f3af) popup_notif_wgt_window_ParamLimits

0xb83b,	// (0x0003f3af) popup_notif_wgt_window

0xb84b,	// (0x0003f3bf) popup_submenu_window_cp01_ParamLimits

0xb84b,	// (0x0003f3bf) popup_submenu_window_cp01

0xc78e,	// (0x00040302) bg_popup_window_pane_cp10

0x1e19,	// (0x0003598d) listscroll_notif_wgt_pane

0x1e2b,	// (0x0003599f) list_notif_wgt_window

0x1e34,	// (0x000359a8) scroll_pane_cp033

0xb85b,	// (0x0003f3cf) list_notif_wgt_row_pane_ParamLimits

0xb85b,	// (0x0003f3cf) list_notif_wgt_row_pane

0x1e3d,	// (0x000359b1) aid_size_list_notif_wgt_del

0x1e4a,	// (0x000359be) list_notif_wgt_row_pane_g1

0x1e56,	// (0x000359ca) list_notif_wgt_row_pane_g2

0x1e65,	// (0x000359d9) list_notif_wgt_row_pane_g3

0x0002,

0xfd91,	// (0x00043905) list_notif_wgt_row_pane_g

0x1e72,	// (0x000359e6) list_notif_wgt_row_pane_t1

0x1e88,	// (0x000359fc) list_notif_wgt_row_pane_t2

0x1e9a,	// (0x00035a0e) list_notif_wgt_row_pane_t3

0x0002,

0xfd98,	// (0x0004390c) list_notif_wgt_row_pane_t

0x0672,	// (0x000341e6) list_recal_day_event_pane_g1

0x1eac,	// (0x00035a20) list_recal_day_event_pane_t1

0x244f,	// (0x00035fc3) bg_button_pane_cp045

0xb86f,	// (0x0003f3e3) cntbar_detail_btn_pane_t1

0xe43c,	// (0x00041fb0) main_callh_pane_ParamLimits

0xe43c,	// (0x00041fb0) main_callh_pane

0x244f,	// (0x00035fc3) main_coverflow0_pane

0x244f,	// (0x00035fc3) main_wgtman_pane

0xad01,	// (0x0003e875) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xad01,	// (0x0003e875) main_fs_bigclock_unlock_btn_pane

0xb244,	// (0x0003edb8) bg_button_pane_cp16

0xb254,	// (0x0003edc8) cell_tport_appsw_pane_g3

0xb87d,	// (0x0003f3f1) cf0_flow_pane_ParamLimits

0xb87d,	// (0x0003f3f1) cf0_flow_pane

0x1ebb,	// (0x00035a2f) listscroll_cf0_pane

0x1ec6,	// (0x00035a3a) main_cf0_pane_g1

0xb88c,	// (0x0003f400) main_cf0_pane_t1_ParamLimits

0xb88c,	// (0x0003f400) main_cf0_pane_t1

0xb8a0,	// (0x0003f414) main_cf0_pane_t2_ParamLimits

0xb8a0,	// (0x0003f414) main_cf0_pane_t2

0x0001,

0xfda4,	// (0x00043918) main_cf0_pane_t_ParamLimits

0xfda4,	// (0x00043918) main_cf0_pane_t

0x1ed8,	// (0x00035a4c) scroll_pane_cp11

0xb8b4,	// (0x0003f428) cf0_flow_pane_g1

0xb8bc,	// (0x0003f430) cf0_flow_pane_g2

0x0001,

0xfda9,	// (0x0004391d) cf0_flow_pane_g

0xb8c4,	// (0x0003f438) cf0_flow_pane_t1

0x244f,	// (0x00035fc3) main_call6_pane

0x244f,	// (0x00035fc3) main_calllock_pane

0xb8d2,	// (0x0003f446) call6_btn_grp_pane_ParamLimits

0xb8d2,	// (0x0003f446) call6_btn_grp_pane

0xb8df,	// (0x0003f453) call6_pane_g1_ParamLimits

0xb8df,	// (0x0003f453) call6_pane_g1

0xb8ef,	// (0x0003f463) popup_call6_1st_window_ParamLimits

0xb8ef,	// (0x0003f463) popup_call6_1st_window

0xb8ff,	// (0x0003f473) popup_call6_2nd_window_ParamLimits

0xb8ff,	// (0x0003f473) popup_call6_2nd_window

0xb90f,	// (0x0003f483) cell_call6_btn_pane_ParamLimits

0xb90f,	// (0x0003f483) cell_call6_btn_pane

0xc78e,	// (0x00040302) bg_popup_call2_in_pane_cp03

0x1ee3,	// (0x00035a57) popup_call6_1st_window_g1

0x1eeb,	// (0x00035a5f) popup_call6_1st_window_g2

0x1ef3,	// (0x00035a67) popup_call6_1st_window_g3

0x0002,

0xfdae,	// (0x00043922) popup_call6_1st_window_g

0x1efb,	// (0x00035a6f) popup_call6_1st_window_t1

0x1f0a,	// (0x00035a7e) popup_call6_1st_window_t2

0x1f1a,	// (0x00035a8e) popup_call6_1st_window_t3

0x0002,

0xfdb5,	// (0x00043929) popup_call6_1st_window_t

0xc78e,	// (0x00040302) bg_popup_call2_in_pane_cp04

0x1f2a,	// (0x00035a9e) popup_call6_2nd_window_g1

0x1f32,	// (0x00035aa6) popup_call6_2nd_window_g2

0x1f3a,	// (0x00035aae) popup_call6_2nd_window_g3

0x0002,

0xfdbc,	// (0x00043930) popup_call6_2nd_window_g

0x1f42,	// (0x00035ab6) popup_call6_2nd_window_t1

0x244f,	// (0x00035fc3) bg_button_pane_cp15

0x1fa0,	// (0x00035b14) cell_call6_btn_pane_g1

0xb920,	// (0x0003f494) cell_call6_btn_pane_t1

0xb92f,	// (0x0003f4a3) listscroll_wgtman_pane_ParamLimits

0xb92f,	// (0x0003f4a3) listscroll_wgtman_pane

0xb94b,	// (0x0003f4bf) wgtman_btn_pane_ParamLimits

0xb94b,	// (0x0003f4bf) wgtman_btn_pane

0xcfca,	// (0x00040b3e) aid_scroll_copy1

0x1f69,	// (0x00035add) list_wgtman_pane

0xb980,	// (0x0003f4f4) wgtman_btn_pane_g1_ParamLimits

0xb980,	// (0x0003f4f4) wgtman_btn_pane_g1

0xb9a8,	// (0x0003f51c) wgtman_btn_pane_t1_ParamLimits

0xb9a8,	// (0x0003f51c) wgtman_btn_pane_t1

0x1f73,	// (0x00035ae7) wgtman_btn_pane_t2_ParamLimits

0x1f73,	// (0x00035ae7) wgtman_btn_pane_t2

0x0001,

0xfdc3,	// (0x00043937) wgtman_btn_pane_t_ParamLimits

0xfdc3,	// (0x00043937) wgtman_btn_pane_t

0xb9df,	// (0x0003f553) listrow_wgtman_pane_ParamLimits

0xb9df,	// (0x0003f553) listrow_wgtman_pane

0xb9f6,	// (0x0003f56a) listrow_wgtman_pane_g1

0xba03,	// (0x0003f577) listrow_wgtman_pane_g2

0x0001,

0xfdc8,	// (0x0004393c) listrow_wgtman_pane_g

0x4718,	// (0x0003828c) listrow_wgtman_pane_t1

0x4730,	// (0x000382a4) listrow_wgtman_pane_t2

0x0001,

0xfdcd,	// (0x00043941) listrow_wgtman_pane_t

0x4756,	// (0x000382ca) wait_bar_pane_cp09

0x1f8a,	// (0x00035afe) main_calllock_btn_pane

0x1f94,	// (0x00035b08) main_calllock_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp17

0x1fa0,	// (0x00035b14) main_calllock_btn_pane_g1

0x1fa9,	// (0x00035b1d) main_calllock_btn_pane_t1

0x244f,	// (0x00035fc3) main_dialer3_pane

0x244f,	// (0x00035fc3) main_fmrd2_pane

0xc7c4,	// (0x00040338) main_fs_bigclock_unlock_btn_pane_g1

0xba29,	// (0x0003f59d) main_fs_bigclock_unlock_btn_pane_t1

0xba37,	// (0x0003f5ab) area_fmrd2_info_pane_ParamLimits

0xba37,	// (0x0003f5ab) area_fmrd2_info_pane

0xba43,	// (0x0003f5b7) area_fmrd2_visual_pane_ParamLimits

0xba43,	// (0x0003f5b7) area_fmrd2_visual_pane

0xba51,	// (0x0003f5c5) fmrd2_indi_pane_ParamLimits

0xba51,	// (0x0003f5c5) fmrd2_indi_pane

0xba5e,	// (0x0003f5d2) area_fmrd2_visual_pane_g1

0xba66,	// (0x0003f5da) area_fmrd2_visual_pane_t1

0xba76,	// (0x0003f5ea) area_fmrd2_visual_pane_t2

0xba86,	// (0x0003f5fa) area_fmrd2_visual_pane_t3

0x0002,

0xfdd7,	// (0x0004394b) area_fmrd2_visual_pane_t

0xba96,	// (0x0003f60a) area_fmrd2_info_pane_g1

0xba9e,	// (0x0003f612) area_fmrd2_info_pane_t1

0xbaae,	// (0x0003f622) area_fmrd2_info_pane_t2

0xbabe,	// (0x0003f632) area_fmrd2_info_pane_t3

0xbace,	// (0x0003f642) area_fmrd2_info_pane_t4

0x0003,

0xfdde,	// (0x00043952) area_fmrd2_info_pane_t

0xbade,	// (0x0003f652) fmrd2_indi_pane_t1

0xbaee,	// (0x0003f662) fmrd2_indi_pane_t2

0xbafe,	// (0x0003f672) fmrd2_indi_pane_t3

0x0002,

0xfde7,	// (0x0004395b) fmrd2_indi_pane_t

0xad89,	// (0x0003e8fd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xad89,	// (0x0003e8fd) list_single_fs_bigclock_indicator_pane_g5

0xae3e,	// (0x0003e9b2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xae3e,	// (0x0003e9b2) list_single_fs_bigclock_indicator_pane_t5

0xb397,	// (0x0003ef0b) aid_cell_bcale_month_pane_ParamLimits

0xb397,	// (0x0003ef0b) aid_cell_bcale_month_pane

0xb3b5,	// (0x0003ef29) bcale_month_pane_ParamLimits

0xb3b5,	// (0x0003ef29) bcale_month_pane

0xb3d3,	// (0x0003ef47) bcale_preview_pane_ParamLimits

0xb3d3,	// (0x0003ef47) bcale_preview_pane

0x1d26,	// (0x0003589a) list_single_fs_bigclock_pane_t1_ParamLimits

0x1d45,	// (0x000358b9) list_single_fs_bigclock_pane_t2_ParamLimits

0x1d45,	// (0x000358b9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd62,	// (0x000438d6) list_single_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x000438d6) list_single_fs_bigclock_pane_t

0xba21,	// (0x0003f595) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd2,	// (0x00043946) main_fs_bigclock_unlock_btn_pane_g

0xbb0e,	// (0x0003f682) aid_dia3_key_size_ParamLimits

0xbb0e,	// (0x0003f682) aid_dia3_key_size

0xbb1a,	// (0x0003f68e) aid_dia3_listrow_size_ParamLimits

0xbb1a,	// (0x0003f68e) aid_dia3_listrow_size

0xbb2a,	// (0x0003f69e) dia3_keypad_fun_pane_ParamLimits

0xbb2a,	// (0x0003f69e) dia3_keypad_fun_pane

0xbb3a,	// (0x0003f6ae) dia3_keypad_num_pane_ParamLimits

0xbb3a,	// (0x0003f6ae) dia3_keypad_num_pane

0xbb4a,	// (0x0003f6be) dia3_listscroll_pane_ParamLimits

0xbb4a,	// (0x0003f6be) dia3_listscroll_pane

0xbb58,	// (0x0003f6cc) dia3_numentry_pane_ParamLimits

0xbb58,	// (0x0003f6cc) dia3_numentry_pane

0x1fb8,	// (0x00035b2c) dia3_list_pane

0xbb66,	// (0x0003f6da) scroll_pane_cp12

0x244f,	// (0x00035fc3) bg_dia3_numentry_pane

0xbb71,	// (0x0003f6e5) dia3_numentry_pane_t1

0xbb80,	// (0x0003f6f4) cell_dia3_key_num_pane

0xbb88,	// (0x0003f6fc) cell_dia3_key0_fun_pane_ParamLimits

0xbb88,	// (0x0003f6fc) cell_dia3_key0_fun_pane

0xbb95,	// (0x0003f709) cell_dia3_key1_fun_pane_ParamLimits

0xbb95,	// (0x0003f709) cell_dia3_key1_fun_pane

0xbba2,	// (0x0003f716) dia3_listrow_pane

0x1067,	// (0x00034bdb) bg_dia3_numentry_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp21

0xbbaf,	// (0x0003f723) cell_dia3_key_num_pane_t1

0xbbbd,	// (0x0003f731) cell_dia3_key_num_pane_t2

0xbbcc,	// (0x0003f740) cell_dia3_key_num_pane_t3

0xbbdb,	// (0x0003f74f) cell_dia3_key_num_pane_t4

0x0003,

0xfdee,	// (0x00043962) cell_dia3_key_num_pane_t

0x244f,	// (0x00035fc3) bg_button_pane_cp19

0xbbea,	// (0x0003f75e) cell_dia3_key0_fun_pane_g1

0x244f,	// (0x00035fc3) bg_button_pane_cp20

0xbbf2,	// (0x0003f766) cell_dia3_key1_fun_pane_g1

0xbbfa,	// (0x0003f76e) area_left_week_number_pane

0xbc0d,	// (0x0003f781) area_top_day_name_pane

0xbc1b,	// (0x0003f78f) frame_month_view_pane

0x1fc3,	// (0x00035b37) grid_month_view_pane

0xbc30,	// (0x0003f7a4) cell_top_day_name_pane_ParamLimits

0xbc30,	// (0x0003f7a4) cell_top_day_name_pane

0xbc4c,	// (0x0003f7c0) cell_area_left_week_number_pane_ParamLimits

0xbc4c,	// (0x0003f7c0) cell_area_left_week_number_pane

0xbc6d,	// (0x0003f7e1) cell_month_view_pane_ParamLimits

0xbc6d,	// (0x0003f7e1) cell_month_view_pane

0x1fd1,	// (0x00035b45) frm_month_g1

0xbc99,	// (0x0003f80d) frm_month_g2

0xbcaa,	// (0x0003f81e) frm_month_g3

0xbcbb,	// (0x0003f82f) frm_month_g4

0xbccc,	// (0x0003f840) frm_month_g5

0xbcdd,	// (0x0003f851) frm_month_g6

0xbcf0,	// (0x0003f864) frm_month_g7

0x1fde,	// (0x00035b52) frm_month_g8

0xbd03,	// (0x0003f877) frm_month_g9

0xbd10,	// (0x0003f884) frm_month_g10

0xbd1d,	// (0x0003f891) frm_month_g11

0xbd2a,	// (0x0003f89e) frm_month_g12

0xbd37,	// (0x0003f8ab) frm_month_g13

0xbd46,	// (0x0003f8ba) frm_month_g14

0xbd55,	// (0x0003f8c9) frm_month_g15

0xbd64,	// (0x0003f8d8) frm_month_g16

0x000f,

0xfdf7,	// (0x0004396b) frm_month_g

0x1feb,	// (0x00035b5f) cell_top_day_name_pane_t1

0xbd73,	// (0x0003f8e7) cell_area_left_week_number_pane_g1

0xbd82,	// (0x0003f8f6) cell_area_left_week_number_pane_t1

0x2b85,	// (0x000366f9) cell_month_view_pane_g1

0xbd98,	// (0x0003f90c) cell_month_view_pane_t1

0x244f,	// (0x00035fc3) main_fps_pane

0x1488,	// (0x00034ffc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1488,	// (0x00034ffc) cmail_ddmenu_btn02_pane_cp1

0x14a4,	// (0x00035018) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x14a4,	// (0x00035018) cmail_ddmenu_btn02_pane_cp2

0xb5b3,	// (0x0003f127) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb5b3,	// (0x0003f127) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd15,	// (0x00043889) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd15,	// (0x00043889) cmail_ddmenu_btn02_pane_g

0xb5d1,	// (0x0003f145) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb5d1,	// (0x0003f145) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1a,	// (0x0004388e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1a,	// (0x0004388e) cmail_ddmenu_btn02_pane_t

0xbdae,	// (0x0003f922) fps_text_pane_ParamLimits

0xbdae,	// (0x0003f922) fps_text_pane

0xbdbb,	// (0x0003f92f) main_fps_pane_g1_ParamLimits

0xbdbb,	// (0x0003f92f) main_fps_pane_g1

0xbdc7,	// (0x0003f93b) wait_bar_pane_cp010_ParamLimits

0xbdc7,	// (0x0003f93b) wait_bar_pane_cp010

0xbdd3,	// (0x0003f947) fps_text_pane_t1_ParamLimits

0xbdd3,	// (0x0003f947) fps_text_pane_t1

0x9162,	// (0x0003ccd6) cam4_image_uncrop_pane_g1

0x916b,	// (0x0003ccdf) cam4_image_uncrop_pane_g2

0x9174,	// (0x0003cce8) cam4_image_uncrop_pane_g3

0x917d,	// (0x0003ccf1) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x000433d4) cam4_image_uncrop_pane_g

0xbba2,	// (0x0003f716) dia3_listrow_pane_ParamLimits

0x244f,	// (0x00035fc3) main_phob2_pane

0xb226,	// (0x0003ed9a) cell_tport_appsw_pane_cp02_ParamLimits

0xb226,	// (0x0003ed9a) cell_tport_appsw_pane_cp02

0xb235,	// (0x0003eda9) cell_tport_appsw_pane_cp03_ParamLimits

0xb235,	// (0x0003eda9) cell_tport_appsw_pane_cp03

0x244f,	// (0x00035fc3) phob2_contact_card_pane

0x244f,	// (0x00035fc3) phob2_listscroll_pane

0x1ffe,	// (0x00035b72) phob2_list_pane

0x2006,	// (0x00035b7a) scroll_pane_cp034

0xbdec,	// (0x0003f960) phob2_cc_data_pane_ParamLimits

0xbdec,	// (0x0003f960) phob2_cc_data_pane

0xbe03,	// (0x0003f977) phob2_cc_listscroll_pane_ParamLimits

0xbe03,	// (0x0003f977) phob2_cc_listscroll_pane

0xb9df,	// (0x0003f553) list_double_large_graphic_phob2_pane_ParamLimits

0xb9df,	// (0x0003f553) list_double_large_graphic_phob2_pane

0xbe1f,	// (0x0003f993) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbe1f,	// (0x0003f993) list_double_large_graphic_phob2_pane_g1

0x4768,	// (0x000382dc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4768,	// (0x000382dc) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe18,	// (0x0004398c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe18,	// (0x0004398c) list_double_large_graphic_phob2_pane_g

0x478e,	// (0x00038302) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x478e,	// (0x00038302) list_double_large_graphic_phob2_pane_t1

0x47a3,	// (0x00038317) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x47a3,	// (0x00038317) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe21,	// (0x00043995) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe21,	// (0x00043995) list_double_large_graphic_phob2_pane_t

0x244f,	// (0x00035fc3) list_highlight_pane_cp024

0xbe2c,	// (0x0003f9a0) phob2_cc_button_pane

0xbe34,	// (0x0003f9a8) phob2_cc_data_pane_g1_ParamLimits

0xbe34,	// (0x0003f9a8) phob2_cc_data_pane_g1

0xbe49,	// (0x0003f9bd) phob2_cc_data_pane_g2_ParamLimits

0xbe49,	// (0x0003f9bd) phob2_cc_data_pane_g2

0x0001,

0xfe26,	// (0x0004399a) phob2_cc_data_pane_g_ParamLimits

0xfe26,	// (0x0004399a) phob2_cc_data_pane_g

0xbe59,	// (0x0003f9cd) phob2_cc_data_pane_t1_ParamLimits

0xbe59,	// (0x0003f9cd) phob2_cc_data_pane_t1

0xbe72,	// (0x0003f9e6) phob2_cc_data_pane_t2_ParamLimits

0xbe72,	// (0x0003f9e6) phob2_cc_data_pane_t2

0xbe8b,	// (0x0003f9ff) phob2_cc_data_pane_t3_ParamLimits

0xbe8b,	// (0x0003f9ff) phob2_cc_data_pane_t3

0x0002,

0xfe2b,	// (0x0004399f) phob2_cc_data_pane_t_ParamLimits

0xfe2b,	// (0x0004399f) phob2_cc_data_pane_t

0x200e,	// (0x00035b82) phob2_cc_list_pane_ParamLimits

0x200e,	// (0x00035b82) phob2_cc_list_pane

0x0709,	// (0x0003427d) scroll_pane_cp035_ParamLimits

0x0709,	// (0x0003427d) scroll_pane_cp035

0x2b1e,	// (0x00036692) bg_button_pane_cp033

0x201a,	// (0x00035b8e) phob2_cc_button_pane_g1

0x2026,	// (0x00035b9a) phob2_cc_button_pane_t1

0x203b,	// (0x00035baf) phob2_cc_button_pane_t2

0x0001,

0xfe32,	// (0x000439a6) phob2_cc_button_pane_t

0xbea4,	// (0x0003fa18) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbea4,	// (0x0003fa18) list_double_large_graphic_phob2_cc_pane

0xbef3,	// (0x0003fa67) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbef3,	// (0x0003fa67) list_double_large_graphic_phob2_cc_pane_g1

0x47b8,	// (0x0003832c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x47b8,	// (0x0003832c) list_double_large_graphic_phob2_cc_pane_g2

0x47c4,	// (0x00038338) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x47c4,	// (0x00038338) list_double_large_graphic_phob2_cc_pane_g3

0x47d0,	// (0x00038344) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x47d0,	// (0x00038344) list_double_large_graphic_phob2_cc_pane_g4

0x47dc,	// (0x00038350) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x47dc,	// (0x00038350) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe37,	// (0x000439ab) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe37,	// (0x000439ab) list_double_large_graphic_phob2_cc_pane_g

0x47e8,	// (0x0003835c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x47e8,	// (0x0003835c) list_double_large_graphic_phob2_cc_pane_t1

0x4811,	// (0x00038385) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4811,	// (0x00038385) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe42,	// (0x000439b6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe42,	// (0x000439b6) list_double_large_graphic_phob2_cc_pane_t

0x204d,	// (0x00035bc1) list_highlight_pane_cp025_ParamLimits

0x204d,	// (0x00035bc1) list_highlight_pane_cp025

0x2b1e,	// (0x00036692) bg_button_pane_cp033_ParamLimits

0x201a,	// (0x00035b8e) phob2_cc_button_pane_g1_ParamLimits

0x2026,	// (0x00035b9a) phob2_cc_button_pane_t1_ParamLimits

0x203b,	// (0x00035baf) phob2_cc_button_pane_t2_ParamLimits

0xfe32,	// (0x000439a6) phob2_cc_button_pane_t_ParamLimits

0x4b33,	// (0x000386a7) popup_wgtman_window

0x04eb,	// (0x0003405f) scroll_pane_cp038

0xb968,	// (0x0003f4dc) wgtman_btn_pane_cp_01_ParamLimits

0xb968,	// (0x0003f4dc) wgtman_btn_pane_cp_01

0x205b,	// (0x00035bcf) wgtman_content_pane

0x2064,	// (0x00035bd8) wgtman_heading_pane

0x244f,	// (0x00035fc3) bg_heading_pane_cp02

0x206d,	// (0x00035be1) wgtman_heading_pane_g1

0x2075,	// (0x00035be9) wgtman_heading_pane_t1

0x2083,	// (0x00035bf7) scroll_pane_cp036

0x208b,	// (0x00035bff) wgtman_list_pane

0x137b,	// (0x00034eef) wgtman_list_pane_t1_ParamLimits

0x137b,	// (0x00034eef) wgtman_list_pane_t1

0x90bf,	// (0x0003cc33) cam4_grid_pane

0x3dae,	// (0x00037922) bg_button_pane_cp015_ParamLimits

0x9d96,	// (0x0003d90a) bg_button_pane_cp016_ParamLimits

0x9da2,	// (0x0003d916) bg_button_pane_cp017_ParamLimits

0x9dbd,	// (0x0003d931) popup_vitu2_query_window_g3_ParamLimits

0x9dbd,	// (0x0003d931) popup_vitu2_query_window_g3

0x3e6e,	// (0x000379e2) popup_vitu2_query_window_t6_ParamLimits

0x3e6e,	// (0x000379e2) popup_vitu2_query_window_t6

0x3e99,	// (0x00037a0d) popup_vitu2_query_window_t7_ParamLimits

0x3e99,	// (0x00037a0d) popup_vitu2_query_window_t7

0x024d,	// (0x00033dc1) cam4_grid_pane_g1

0x0256,	// (0x00033dca) cam4_grid_pane_g2

0x2093,	// (0x00035c07) cam4_grid_pane_g3

0x209c,	// (0x00035c10) cam4_grid_pane_g4

0x0003,

0xfe47,	// (0x000439bb) cam4_grid_pane_g

0x5823,	// (0x00039397) aid_placing_vt_slider_lsc_ParamLimits

0x5b56,	// (0x000396ca) vidtel_button_pane_ParamLimits

0x5b56,	// (0x000396ca) vidtel_button_pane

0x244f,	// (0x00035fc3) bg_button_pane_cp034

0x20a7,	// (0x00035c1b) vidtel_button_pane_g1

0x20af,	// (0x00035c23) vidtel_button_pane_t1

0x0614,	// (0x00034188) aid_size_vtel_slider_touch

0x0709,	// (0x0003427d) scroll_pane_cp039

0xaa30,	// (0x0003e5a4) ncim_query_button_pane_cp01_ParamLimits

0xaa4f,	// (0x0003e5c3) ncimui_query_pane_g1_ParamLimits

0x2b1e,	// (0x00036692) input_focus_pane_cp012_ParamLimits

0x10a5,	// (0x00034c19) ncim_query_entry_pane_t1_ParamLimits

0x0709,	// (0x0003427d) scroll_pane_cp039_ParamLimits

0x6c97,	// (0x0003a80b) navi_pane_bcale_mc_g1

0x6c9f,	// (0x0003a813) navi_pane_bcale_mc_t1

0x14da,	// (0x0003504e) main_sp_fs_email_pane_g1

0x14e6,	// (0x0003505a) main_sp_fs_email_pane_g2

0x0001,

0xfc4a,	// (0x000437be) main_sp_fs_email_pane_g

0x19b1,	// (0x00035525) list_single_cale_mrui_row_pane_g3_ParamLimits

0x19b1,	// (0x00035525) list_single_cale_mrui_row_pane_g3

0x466c,	// (0x000381e0) list_single_recal_day_pane_g5_event_pane

0x4682,	// (0x000381f6) list_single_recal_day_pane_g7

0x20c5,	// (0x00035c39) list_recal_day_event_pane_cp01

0x20ce,	// (0x00035c42) list_recal_vselct_arw_lo_pane_cp01

0x20d6,	// (0x00035c4a) list_recal_vselct_arw_up_pane_cp01

0x20de,	// (0x00035c52) list_recal_vselct_pane_cp01

0x0672,	// (0x000341e6) list_recal_day_event_pane_cp01_g1

0x483a,	// (0x000383ae) list_recal_day_event_pane_cp01_t1

0x468a,	// (0x000381fe) list_single_recal_day_pane_t1_ParamLimits

0x469c,	// (0x00038210) list_single_recal_day_pane_t2_ParamLimits

0xfd2a,	// (0x0004389e) list_single_recal_day_pane_t_ParamLimits

0x2afc,	// (0x00036670) bg_notes_pane_ParamLimits

0x2bd5,	// (0x00036749) list_notes_pane_ParamLimits

0x4d1a,	// (0x0003888e) scroll_pane_cp06_ParamLimits

0x2bf7,	// (0x0003676b) main_notes_pane_ParamLimits

0x2b1e,	// (0x00036692) main_welc_pane

0xbf25,	// (0x0003fa99) main_welc_body_pane_ParamLimits

0xbf25,	// (0x0003fa99) main_welc_body_pane

0xbf40,	// (0x0003fab4) main_welc_opti_pane_ParamLimits

0xbf40,	// (0x0003fab4) main_welc_opti_pane

0xbfa5,	// (0x0003fb19) main_welc_pane_t1_ParamLimits

0xbfa5,	// (0x0003fb19) main_welc_pane_t1

0xc139,	// (0x0003fcad) main_welc_body_row_pane_ParamLimits

0xc139,	// (0x0003fcad) main_welc_body_row_pane

0x2b77,	// (0x000366eb) main_welc_opti_row_pane_ParamLimits

0x2b77,	// (0x000366eb) main_welc_opti_row_pane

0x211d,	// (0x00035c91) main_welc_opti_row_pane_g1

0xc153,	// (0x0003fcc7) main_welc_opti_row_pane_t1

0x2125,	// (0x00035c99) main_welc_body_row_pane_t1

0x1e23,	// (0x00035997) popup_notif_wgt_heading_pane

0x1e3d,	// (0x000359b1) aid_size_list_notif_wgt_del_ParamLimits

0x1e4a,	// (0x000359be) list_notif_wgt_row_pane_g1_ParamLimits

0x1e56,	// (0x000359ca) list_notif_wgt_row_pane_g2_ParamLimits

0x1e65,	// (0x000359d9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd91,	// (0x00043905) list_notif_wgt_row_pane_g_ParamLimits

0x1e72,	// (0x000359e6) list_notif_wgt_row_pane_t1_ParamLimits

0x1e88,	// (0x000359fc) list_notif_wgt_row_pane_t2_ParamLimits

0x1e9a,	// (0x00035a0e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd98,	// (0x0004390c) list_notif_wgt_row_pane_t_ParamLimits

0xb9f6,	// (0x0003f56a) listrow_wgtman_pane_g1_ParamLimits

0xba03,	// (0x0003f577) listrow_wgtman_pane_g2_ParamLimits

0xfdc8,	// (0x0004393c) listrow_wgtman_pane_g_ParamLimits

0x4718,	// (0x0003828c) listrow_wgtman_pane_t1_ParamLimits

0x4730,	// (0x000382a4) listrow_wgtman_pane_t2_ParamLimits

0xfdcd,	// (0x00043941) listrow_wgtman_pane_t_ParamLimits

0x4756,	// (0x000382ca) wait_bar_pane_cp09_ParamLimits

0x244f,	// (0x00035fc3) bg_popup_heading_pane_cp02

0x2134,	// (0x00035ca8) popup_notif_wgt_heading_pane_g1

0x213c,	// (0x00035cb0) popup_notif_wgt_heading_pane_t1

0x244f,	// (0x00035fc3) main_vids_pane

0x244f,	// (0x00035fc3) vids_listscroll_pane

0xc162,	// (0x0003fcd6) scroll_pane_cp040

0x244f,	// (0x00035fc3) vids_list_pane

0xc16d,	// (0x0003fce1) vids_list_double_pane_ParamLimits

0xc16d,	// (0x0003fce1) vids_list_double_pane

0xc181,	// (0x0003fcf5) vids_list_double_pane_g1

0xc18a,	// (0x0003fcfe) vids_list_double_pane_t1

0xc19a,	// (0x0003fd0e) vids_list_double_pane_t2

0x0001,

0xfe66,	// (0x000439da) vids_list_double_pane_t

0x2b1e,	// (0x00036692) main_ncimui_pane_ParamLimits

0xa871,	// (0x0003e3e5) main_ncimui_pane_g1_ParamLimits

0xa87f,	// (0x0003e3f3) main_ncimui_pane_g2_ParamLimits

0xa87f,	// (0x0003e3f3) main_ncimui_pane_g2

0x0001,

0xfb4b,	// (0x000436bf) main_ncimui_pane_g_ParamLimits

0xfb4b,	// (0x000436bf) main_ncimui_pane_g

0xbf5b,	// (0x0003facf) main_welc_pane_g1_ParamLimits

0xbf5b,	// (0x0003facf) main_welc_pane_g1

0xbf67,	// (0x0003fadb) main_welc_pane_g2_ParamLimits

0xbf67,	// (0x0003fadb) main_welc_pane_g2

0x0003,

0xfe50,	// (0x000439c4) main_welc_pane_g_ParamLimits

0xfe50,	// (0x000439c4) main_welc_pane_g

0x4cfc,	// (0x00038870) listscroll_mce_pane_ParamLimits

0x6d61,	// (0x0003a8d5) wait_bar_pane_cp10

0xe430,	// (0x00041fa4) main_cale_day_pane_ParamLimits

0xe430,	// (0x00041fa4) main_cale_week_pane_ParamLimits

0x2afc,	// (0x00036670) main_messa_pane_ParamLimits

0x8514,	// (0x0003c088) main_clock2_btn_pane_ParamLimits

0x8514,	// (0x0003c088) main_clock2_btn_pane

0xec62,	// (0x000427d6) main_clock2_btn_pane_cp01_ParamLimits

0xec62,	// (0x000427d6) main_clock2_btn_pane_cp01

0x193d,	// (0x000354b1) list_cale_mrui_pane_ParamLimits

0x1ed0,	// (0x00035a44) main_cf0_pane_g2

0x0001,

0xfd9f,	// (0x00043913) main_cf0_pane_g

0xbbfa,	// (0x0003f76e) area_left_week_number_pane_ParamLimits

0xbc0d,	// (0x0003f781) area_top_day_name_pane_ParamLimits

0xbc1b,	// (0x0003f78f) frame_month_view_pane_ParamLimits

0x1fc3,	// (0x00035b37) grid_month_view_pane_ParamLimits

0x1fd1,	// (0x00035b45) frm_month_g1_ParamLimits

0xbc99,	// (0x0003f80d) frm_month_g2_ParamLimits

0xbcaa,	// (0x0003f81e) frm_month_g3_ParamLimits

0xbcbb,	// (0x0003f82f) frm_month_g4_ParamLimits

0xbccc,	// (0x0003f840) frm_month_g5_ParamLimits

0xbcdd,	// (0x0003f851) frm_month_g6_ParamLimits

0xbcf0,	// (0x0003f864) frm_month_g7_ParamLimits

0x1fde,	// (0x00035b52) frm_month_g8_ParamLimits

0xbd03,	// (0x0003f877) frm_month_g9_ParamLimits

0xbd10,	// (0x0003f884) frm_month_g10_ParamLimits

0xbd1d,	// (0x0003f891) frm_month_g11_ParamLimits

0xbd2a,	// (0x0003f89e) frm_month_g12_ParamLimits

0xbd37,	// (0x0003f8ab) frm_month_g13_ParamLimits

0xbd46,	// (0x0003f8ba) frm_month_g14_ParamLimits

0xbd55,	// (0x0003f8c9) frm_month_g15_ParamLimits

0xbd64,	// (0x0003f8d8) frm_month_g16_ParamLimits

0xfdf7,	// (0x0004396b) frm_month_g_ParamLimits

0x1feb,	// (0x00035b5f) cell_top_day_name_pane_t1_ParamLimits

0xbd73,	// (0x0003f8e7) cell_area_left_week_number_pane_g1_ParamLimits

0xbd82,	// (0x0003f8f6) cell_area_left_week_number_pane_t1_ParamLimits

0x2b85,	// (0x000366f9) cell_month_view_pane_g1_ParamLimits

0xbd98,	// (0x0003f90c) cell_month_view_pane_t1_ParamLimits

0x2af4,	// (0x00036668) main_clock2_btn_pane_g1

0x214a,	// (0x00035cbe) main_clock2_btn_pane_t1

0x2b1e,	// (0x00036692) listscroll_cmail_pane_ParamLimits

0x14da,	// (0x0003504e) main_sp_fs_email_pane_g1_ParamLimits

0x14e6,	// (0x0003505a) main_sp_fs_email_pane_g2_ParamLimits

0xfc4a,	// (0x000437be) main_sp_fs_email_pane_g_ParamLimits

0x1afd,	// (0x00035671) list_recal_day_pane_ParamLimits

0x1b0e,	// (0x00035682) mian_recal_day_pane_t1

0x4262,	// (0x00037dd6) list_single_dyc_row_text_pane_t4_ParamLimits

0x4262,	// (0x00037dd6) list_single_dyc_row_text_pane_t4

0x429f,	// (0x00037e13) list_single_dyc_row_text_pane_t5_ParamLimits

0x429f,	// (0x00037e13) list_single_dyc_row_text_pane_t5

0x4315,	// (0x00037e89) list_single_dyc_row_text_pane_t6_ParamLimits

0x4315,	// (0x00037e89) list_single_dyc_row_text_pane_t6

0x68be,	// (0x0003a432) aid_mgn_list_cale_time_pane

0x2b1e,	// (0x00036692) main_gallery2_pane_ParamLimits

0xec76,	// (0x000427ea) main_clock2_pane_cp01_t1

0xec84,	// (0x000427f8) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x000432ab) main_clock2_pane_cp01_t

0x5216,	// (0x00038d8a) cale_week_scroll_pane_g16_ParamLimits

0x5216,	// (0x00038d8a) cale_week_scroll_pane_g16

0xc78e,	// (0x00040302) vorec_slider_pane

0x20af,	// (0x00035c23) vidtel_button_pane_t1_ParamLimits

0xb634,	// (0x0003f1a8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb634,	// (0x0003f1a8) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb643,	// (0x0003f1b7) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb643,	// (0x0003f1b7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4d,	// (0x000438c1) main_fs_bigclock_clock_pane_g_ParamLimits

0xb653,	// (0x0003f1c7) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb668,	// (0x0003f1dc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd56,	// (0x000438ca) main_fs_bigclock_clock_pane_t_ParamLimits

0x7e5c,	// (0x0003b9d0) main_mup3_lyrics_pane_ParamLimits

0x7e5c,	// (0x0003b9d0) main_mup3_lyrics_pane

0xc1d0,	// (0x0003fd44) main_mup3_lyrics_pane_t1_ParamLimits

0xc1d0,	// (0x0003fd44) main_mup3_lyrics_pane_t1

0x8a34,	// (0x0003c5a8) aid_main_mp4_pane_t1_area

0x8a3e,	// (0x0003c5b2) aid_main_mp4_pane_t2_area

0x8b4b,	// (0x0003c6bf) main_mp4_pane_g7_ParamLimits

0x8b4b,	// (0x0003c6bf) main_mp4_pane_g7

0x8b57,	// (0x0003c6cb) main_mp4_pane_g8_ParamLimits

0x8b57,	// (0x0003c6cb) main_mp4_pane_g8

0x8f67,	// (0x0003cadb) aid_call6_pane_g1_size

0xbed2,	// (0x0003fa46) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbed2,	// (0x0003fa46) list_double_large_graphic_phob2_other_pane

0xc1f7,	// (0x0003fd6b) list_double_large_graphic_phob2_other_pane_g1

0x244f,	// (0x00035fc3) list_highlight_pane_cp026

0x2b1e,	// (0x00036692) main_welc_pane_ParamLimits

0xb124,	// (0x0003ec98) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb124,	// (0x0003ec98) main_sp_fs_ctrlbar_pane_g3

0xb13e,	// (0x0003ecb2) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb13e,	// (0x0003ecb2) main_sp_fs_ctrlbar_pane_g4

0xb170,	// (0x0003ece4) toolbar2_fixed_button_pane_cp01

0xb17b,	// (0x0003ecef) toolbar2_fixed_button_pane_cp02

0xb188,	// (0x0003ecfc) toolbar2_fixed_button_pane_cp03

0xbf16,	// (0x0003fa8a) list_welc_entry_pane_ParamLimits

0xbf16,	// (0x0003fa8a) list_welc_entry_pane

0xbf75,	// (0x0003fae9) main_welc_pane_g3_ParamLimits

0xbf75,	// (0x0003fae9) main_welc_pane_g3

0xbfc3,	// (0x0003fb37) main_welc_pane_t2_ParamLimits

0xbfc3,	// (0x0003fb37) main_welc_pane_t2

0xbfd7,	// (0x0003fb4b) main_welc_pane_t3_ParamLimits

0xbfd7,	// (0x0003fb4b) main_welc_pane_t3

0x0005,

0xfe59,	// (0x000439cd) main_welc_pane_t_ParamLimits

0xfe59,	// (0x000439cd) main_welc_pane_t

0xc0dd,	// (0x0003fc51) welc_button_pane_ParamLimits

0xc0dd,	// (0x0003fc51) welc_button_pane

0xc12b,	// (0x0003fc9f) welc_service_logo_pane_ParamLimits

0xc12b,	// (0x0003fc9f) welc_service_logo_pane

0xc1ff,	// (0x0003fd73) list_single_welc_entry_pane_ParamLimits

0xc1ff,	// (0x0003fd73) list_single_welc_entry_pane

0xc210,	// (0x0003fd84) list_single_welc_entry_pane_g1

0xc218,	// (0x0003fd8c) list_single_welc_entry_pane_t1

0xc226,	// (0x0003fd9a) list_single_welc_entry_pane_t2

0x0001,

0xfe6b,	// (0x000439df) list_single_welc_entry_pane_t

0x244f,	// (0x00035fc3) bg_button_pane_cp035

0x2158,	// (0x00035ccc) welc_button_pane_t1

0x2166,	// (0x00035cda) welc_service_logo_pane_g1

0x216f,	// (0x00035ce3) welc_service_logo_pane_g2

0x0001,

0xfe70,	// (0x000439e4) welc_service_logo_pane_g

0x244f,	// (0x00035fc3) main_int_radio_pane

0x0f43,	// (0x00034ab7) list_single_fs_dyc_pane_g1

0x4774,	// (0x000382e8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4774,	// (0x000382e8) list_double_large_graphic_phob2_pane_g3

0x4780,	// (0x000382f4) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x4780,	// (0x000382f4) list_double_large_graphic_phob2_pane_g4

0xc234,	// (0x0003fda8) main_int_radio1_pane_ParamLimits

0xc234,	// (0x0003fda8) main_int_radio1_pane

0x2178,	// (0x00035cec) find_pane_cp02

0xc24a,	// (0x0003fdbe) input_focus_pane_cp12_ParamLimits

0xc24a,	// (0x0003fdbe) input_focus_pane_cp12

0xc256,	// (0x0003fdca) input_focus_pane_cp13_ParamLimits

0xc256,	// (0x0003fdca) input_focus_pane_cp13

0xc26e,	// (0x0003fde2) input_focus_pane_cp14_ParamLimits

0xc26e,	// (0x0003fde2) input_focus_pane_cp14

0x2181,	// (0x00035cf5) int_radio1_listscroll_pane

0xc286,	// (0x0003fdfa) main_int_radio1_pane_g1_ParamLimits

0xc286,	// (0x0003fdfa) main_int_radio1_pane_g1

0xc292,	// (0x0003fe06) main_int_radio1_pane_t1_ParamLimits

0xc292,	// (0x0003fe06) main_int_radio1_pane_t1

0xc2a4,	// (0x0003fe18) main_int_radio1_pane_t2_ParamLimits

0xc2a4,	// (0x0003fe18) main_int_radio1_pane_t2

0xc2b8,	// (0x0003fe2c) main_int_radio1_pane_t3_ParamLimits

0xc2b8,	// (0x0003fe2c) main_int_radio1_pane_t3

0xc2cc,	// (0x0003fe40) main_int_radio1_pane_t4_ParamLimits

0xc2cc,	// (0x0003fe40) main_int_radio1_pane_t4

0x218b,	// (0x00035cff) main_int_radio1_pane_t5_ParamLimits

0x218b,	// (0x00035cff) main_int_radio1_pane_t5

0xc2e3,	// (0x0003fe57) main_int_radio1_pane_t6_ParamLimits

0xc2e3,	// (0x0003fe57) main_int_radio1_pane_t6

0xc2f5,	// (0x0003fe69) main_int_radio1_pane_t7_ParamLimits

0xc2f5,	// (0x0003fe69) main_int_radio1_pane_t7

0xc307,	// (0x0003fe7b) main_int_radio1_pane_t8_ParamLimits

0xc307,	// (0x0003fe7b) main_int_radio1_pane_t8

0xc319,	// (0x0003fe8d) main_int_radio1_pane_t9_ParamLimits

0xc319,	// (0x0003fe8d) main_int_radio1_pane_t9

0xc32b,	// (0x0003fe9f) main_int_radio1_pane_t10_ParamLimits

0xc32b,	// (0x0003fe9f) main_int_radio1_pane_t10

0xc35c,	// (0x0003fed0) main_int_radio1_pane_t11_ParamLimits

0xc35c,	// (0x0003fed0) main_int_radio1_pane_t11

0xc38d,	// (0x0003ff01) main_int_radio1_pane_t12_ParamLimits

0xc38d,	// (0x0003ff01) main_int_radio1_pane_t12

0x000b,

0xfe75,	// (0x000439e9) main_int_radio1_pane_t_ParamLimits

0xfe75,	// (0x000439e9) main_int_radio1_pane_t

0x1ffe,	// (0x00035b72) int_radio_list_pane

0x2006,	// (0x00035b7a) scroll_pane_cp037

0x219d,	// (0x00035d11) list_double_large_graphic_int_radio_pane_ParamLimits

0x219d,	// (0x00035d11) list_double_large_graphic_int_radio_pane

0x21b1,	// (0x00035d25) list_double_large_graphic_int_radio_pane_g1

0x4848,	// (0x000383bc) list_double_large_graphic_int_radio_pane_t1

0x4856,	// (0x000383ca) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe8e,	// (0x00043a02) list_double_large_graphic_int_radio_pane_t

0x244f,	// (0x00035fc3) list_highlight_pane_cp027

0x20f6,	// (0x00035c6a) main_button_pane_4

0xbf85,	// (0x0003faf9) main_welc_pane_g4_ParamLimits

0xbf85,	// (0x0003faf9) main_welc_pane_g4

0xbfeb,	// (0x0003fb5f) main_welc_pane_t4_ParamLimits

0xbfeb,	// (0x0003fb5f) main_welc_pane_t4

0xbffd,	// (0x0003fb71) main_welc_pane_t5_ParamLimits

0xbffd,	// (0x0003fb71) main_welc_pane_t5

0xc031,	// (0x0003fba5) main_welc_pane_t6_ParamLimits

0xc031,	// (0x0003fba5) main_welc_pane_t6

0xc0eb,	// (0x0003fc5f) welc_button_pane_2_ParamLimits

0xc0eb,	// (0x0003fc5f) welc_button_pane_2

0xc101,	// (0x0003fc75) welc_button_pane_3_ParamLimits

0xc101,	// (0x0003fc75) welc_button_pane_3

0x20fe,	// (0x00035c72) welc_button_pane_4

0xc11b,	// (0x0003fc8f) welc_button_pane_5_ParamLimits

0xc11b,	// (0x0003fc8f) welc_button_pane_5

0x48b8,	// (0x0003842c) main_popup_welc_pane

0x21e5,	// (0x00035d59) main_welc_sk_g3

0x21ef,	// (0x00035d63) main_welc_sk_g4

0x21f9,	// (0x00035d6d) main_welc_sk_t3

0x2209,	// (0x00035d7d) main_welc_sk_t4

0x2219,	// (0x00035d8d) popup_welc_pane_t4

0x2227,	// (0x00035d9b) popup_welc_pane_t5

0x2237,	// (0x00035dab) popup_welc_pane_t6

0x244f,	// (0x00035fc3) main_acti_pane

0x244f,	// (0x00035fc3) main_sso_pane

0xc3a4,	// (0x0003ff18) sso_body_pane_ParamLimits

0xc3a4,	// (0x0003ff18) sso_body_pane

0xc3b3,	// (0x0003ff27) sso_logo_pane_ParamLimits

0xc3b3,	// (0x0003ff27) sso_logo_pane

0xc3dc,	// (0x0003ff50) sso_sk_pane_ParamLimits

0xc3dc,	// (0x0003ff50) sso_sk_pane

0xc7c4,	// (0x00040338) main_sso_logo_pane_g1

0xc3e9,	// (0x0003ff5d) sso_sk_pane_t1_ParamLimits

0xc3e9,	// (0x0003ff5d) sso_sk_pane_t1

0xc3fd,	// (0x0003ff71) sso_sk_pane_t2_ParamLimits

0xc3fd,	// (0x0003ff71) sso_sk_pane_t2

0x0001,

0xfe93,	// (0x00043a07) sso_sk_pane_t_ParamLimits

0xfe93,	// (0x00043a07) sso_sk_pane_t

0x2279,	// (0x00035ded) aid_sso_gap

0x2282,	// (0x00035df6) aid_sso_txt1

0x228c,	// (0x00035e00) aid_sso_txt2

0x2296,	// (0x00035e0a) aid_sso_txt3

0x0002,

0xfe98,	// (0x00043a0c) aid_sso_txt

0x22a0,	// (0x00035e14) aid_sso_widget

0xc45a,	// (0x0003ffce) sso_btn_pane_ParamLimits

0xc45a,	// (0x0003ffce) sso_btn_pane

0xc4d3,	// (0x00040047) sso_option_pane_ParamLimits

0xc4d3,	// (0x00040047) sso_option_pane

0xc551,	// (0x000400c5) sso_query_pane_ParamLimits

0xc551,	// (0x000400c5) sso_query_pane

0xc5a3,	// (0x00040117) sso_query_pane_cp01_ParamLimits

0xc5a3,	// (0x00040117) sso_query_pane_cp01

0xc5f9,	// (0x0004016d) sso_t_hdr_pane_ParamLimits

0xc5f9,	// (0x0004016d) sso_t_hdr_pane

0xc618,	// (0x0004018c) sso_t_nml_pane_ParamLimits

0xc618,	// (0x0004018c) sso_t_nml_pane

0x2296,	// (0x00035e0a) sso_t_sub_pane

0xc3c0,	// (0x0003ff34) sso_popup_window_ParamLimits

0xc3c0,	// (0x0003ff34) sso_popup_window

0xc40f,	// (0x0003ff83) sso_apps_pane_ParamLimits

0xc40f,	// (0x0003ff83) sso_apps_pane

0xc432,	// (0x0003ffa6) sso_body_pane_g1

0xc43a,	// (0x0003ffae) sso_body_pane_t1

0xc44a,	// (0x0003ffbe) sso_body_pane_t2

0x0001,

0xfe9f,	// (0x00043a13) sso_body_pane_t

0xc4a5,	// (0x00040019) sso_btn_pane_cp01_ParamLimits

0xc4a5,	// (0x00040019) sso_btn_pane_cp01

0xc523,	// (0x00040097) sso_prog_pane_ParamLimits

0xc523,	// (0x00040097) sso_prog_pane

0x22aa,	// (0x00035e1e) sso_t_hdr_pane_t1_ParamLimits

0x22aa,	// (0x00035e1e) sso_t_hdr_pane_t1

0x22bd,	// (0x00035e31) input_focus_pane_cp10_ParamLimits

0x22bd,	// (0x00035e31) input_focus_pane_cp10

0x22d3,	// (0x00035e47) sso_query_pane_t1_ParamLimits

0x22d3,	// (0x00035e47) sso_query_pane_t1

0x22e6,	// (0x00035e5a) sso_query_pane_t2_ParamLimits

0x22e6,	// (0x00035e5a) sso_query_pane_t2

0x2300,	// (0x00035e74) sso_query_pane_t3_ParamLimits

0x2300,	// (0x00035e74) sso_query_pane_t3

0x232a,	// (0x00035e9e) sso_query_pane_t4_ParamLimits

0x232a,	// (0x00035e9e) sso_query_pane_t4

0x0003,

0xfea4,	// (0x00043a18) sso_query_pane_t_ParamLimits

0xfea4,	// (0x00043a18) sso_query_pane_t

0x244f,	// (0x00035fc3) bg_button_pane_cp22

0x21d6,	// (0x00035d4a) sso_btn_pane_t1

0xc668,	// (0x000401dc) sso_t_nml_pane_t1_ParamLimits

0xc668,	// (0x000401dc) sso_t_nml_pane_t1

0x234e,	// (0x00035ec2) sso_option_row_pane_ParamLimits

0x234e,	// (0x00035ec2) sso_option_row_pane

0x235b,	// (0x00035ecf) sso_t_sub_pane_t1_ParamLimits

0x235b,	// (0x00035ecf) sso_t_sub_pane_t1

0x2b1e,	// (0x00036692) bg_popup_window_pane_cp11_ParamLimits

0x2b1e,	// (0x00036692) bg_popup_window_pane_cp11

0x236e,	// (0x00035ee2) popup_sk_window_cp01_ParamLimits

0x236e,	// (0x00035ee2) popup_sk_window_cp01

0x237b,	// (0x00035eef) sso_popup_body_pane_ParamLimits

0x237b,	// (0x00035eef) sso_popup_body_pane

0x2388,	// (0x00035efc) scroll_pane_cp21_ParamLimits

0x2388,	// (0x00035efc) scroll_pane_cp21

0x2395,	// (0x00035f09) sso_popup_body_t_pane_ParamLimits

0x2395,	// (0x00035f09) sso_popup_body_t_pane

0x23a2,	// (0x00035f16) sso_popup_body_t_hdr_pane_ParamLimits

0x23a2,	// (0x00035f16) sso_popup_body_t_hdr_pane

0x23b0,	// (0x00035f24) sso_popup_body_t_nml_pane_ParamLimits

0x23b0,	// (0x00035f24) sso_popup_body_t_nml_pane

0x23cb,	// (0x00035f3f) sso_popup_body_t_sub_pane_ParamLimits

0x23cb,	// (0x00035f3f) sso_popup_body_t_sub_pane

0x23ee,	// (0x00035f62) sso_popup_body_t_hdr_pane_t1

0xc685,	// (0x000401f9) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc685,	// (0x000401f9) sso_popup_body_t_nml_pane_t1

0x23fe,	// (0x00035f72) sso_popup_body_t_sub_pane_t1_ParamLimits

0x23fe,	// (0x00035f72) sso_popup_body_t_sub_pane_t1

0xc7c4,	// (0x00040338) sso_prog_pane_g1

0xc6cc,	// (0x00040240) sso_apps_pane_comp1_ParamLimits

0xc6cc,	// (0x00040240) sso_apps_pane_comp1

0x2423,	// (0x00035f97) sso_apps_pane_comp1_g1

0x242b,	// (0x00035f9f) sso_apps_pane_comp1_t1

0x2439,	// (0x00035fad) sso_option_row_pane_g1

0x2441,	// (0x00035fb5) sso_option_row_pane_t1

0xbf04,	// (0x0003fa78) bg_welc_area_ParamLimits

0xbf04,	// (0x0003fa78) bg_welc_area

0xc067,	// (0x0003fbdb) sso_t_hdr_pane_a_t1_ParamLimits

0xc067,	// (0x0003fbdb) sso_t_hdr_pane_a_t1

0xc07b,	// (0x0003fbef) sso_t_nml_pane_a_t1_ParamLimits

0xc07b,	// (0x0003fbef) sso_t_nml_pane_a_t1

0xc0a9,	// (0x0003fc1d) sso_t_sub_pane_a_t1_ParamLimits

0xc0a9,	// (0x0003fc1d) sso_t_sub_pane_a_t1

0x21d6,	// (0x00035d4a) sso_btn_pane_t1_copy1

0x244f,	// (0x00035fc3) welc_button_pane_2_comp1

0x2247,	// (0x00035dbb) sso_t_hdr_pane_p_t1

0x2257,	// (0x00035dcb) sso_t_nml_pane_p_t1

0x2267,	// (0x00035ddb) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
