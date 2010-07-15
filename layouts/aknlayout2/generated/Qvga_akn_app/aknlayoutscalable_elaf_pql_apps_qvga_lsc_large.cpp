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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00073758 };

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
0x18dd,	// (0x00075035) Screen

0x18e7,	// (0x0007503f) application_window

0x191d,	// (0x00075075) area_bottom_pane_ParamLimits

0x191d,	// (0x00075075) area_bottom_pane

0x1950,	// (0x000750a8) area_top_pane_ParamLimits

0x1950,	// (0x000750a8) area_top_pane

0xafa0,	// (0x0007e6f8) call_video_uplink_pane_ParamLimits

0xafa0,	// (0x0007e6f8) call_video_uplink_pane

0x19d0,	// (0x00075128) main_pane_ParamLimits

0x19d0,	// (0x00075128) main_pane

0xbe4d,	// (0x0007f5a5) context_pane

0x63f2,	// (0x00079b4a) navi_pane

0x641b,	// (0x00079b73) popup_cale_events_window_ParamLimits

0x641b,	// (0x00079b73) popup_cale_events_window

0xbe60,	// (0x0007f5b8) popup_mup_playback_window

0x6433,	// (0x00079b8b) signal_pane

0x24ef,	// (0x00075c47) main_browser_pane

0x2e5d,	// (0x000765b5) main_burst_pane

0xafbc,	// (0x0007e714) main_calc_pane

0xbdd9,	// (0x0007f531) main_cale_day_pane

0x2794,	// (0x00075eec) main_cale_month_pane

0xbdd9,	// (0x0007f531) main_cale_week_pane

0x2e5d,	// (0x000765b5) main_call_pane

0x1f6e,	// (0x000756c6) main_call_poc_pane

0x2e5d,	// (0x000765b5) main_camera_pane

0x2e5d,	// (0x000765b5) main_chi_dic_pane

0x4910,	// (0x00078068) main_clock_pane

0x1f6e,	// (0x000756c6) main_fmradio_pane

0x2e5d,	// (0x000765b5) main_graph_messa_pane

0x1f6e,	// (0x000756c6) main_help_pane

0x24ef,	// (0x00075c47) main_im_pane

0x21c9,	// (0x00075921) main_image_pane_ParamLimits

0x21c9,	// (0x00075921) main_image_pane

0x1f6e,	// (0x000756c6) main_location2_pane

0x2e5d,	// (0x000765b5) main_location_pane

0x21c9,	// (0x00075921) main_messa_pane

0x1f6e,	// (0x000756c6) main_mp2_pane

0x2e5d,	// (0x000765b5) main_mp_pane

0x1f6e,	// (0x000756c6) main_msg_pane

0x1f6e,	// (0x000756c6) main_mup_eq_pane

0x1f6e,	// (0x000756c6) main_mup_pane

0x24ef,	// (0x00075c47) main_notes_pane

0x1f6e,	// (0x000756c6) main_pec_pane

0x1f6e,	// (0x000756c6) main_phob_pane

0x1f6e,	// (0x000756c6) main_pinb_pane

0x1f6e,	// (0x000756c6) main_postcard_pane

0x1f6e,	// (0x000756c6) main_qdial_pane

0x2e5d,	// (0x000765b5) main_skin_pane

0x1f6e,	// (0x000756c6) main_smil2_pane

0x2e5d,	// (0x000765b5) main_smil_pane

0x2e5d,	// (0x000765b5) main_video_pane

0x2e5d,	// (0x000765b5) main_video_tele_pane

0x21c9,	// (0x00075921) main_viewer_pane_ParamLimits

0x21c9,	// (0x00075921) main_viewer_pane

0x2e5d,	// (0x000765b5) main_vorec_pane

0x61e6,	// (0x0007993e) popup_blid_sat_info_window_ParamLimits

0x61e6,	// (0x0007993e) popup_blid_sat_info_window

0x623c,	// (0x00079994) popup_dyc_status_message_window_ParamLimits

0x623c,	// (0x00079994) popup_dyc_status_message_window

0x6252,	// (0x000799aa) popup_grid_large_graphic_window_ParamLimits

0x6252,	// (0x000799aa) popup_grid_large_graphic_window

0x62e8,	// (0x00079a40) popup_loc_request_window_ParamLimits

0x62e8,	// (0x00079a40) popup_loc_request_window

0x63cc,	// (0x00079b24) popup_wml_address_window_ParamLimits

0x63cc,	// (0x00079b24) popup_wml_address_window

0x603c,	// (0x00079794) call_muted_g1

0x59a5,	// (0x000790fd) popup_call_audio_conf_window_ParamLimits

0x59a5,	// (0x000790fd) popup_call_audio_conf_window

0x604c,	// (0x000797a4) popup_call_audio_first_window_ParamLimits

0x604c,	// (0x000797a4) popup_call_audio_first_window

0x60aa,	// (0x00079802) popup_call_audio_in_window_ParamLimits

0x60aa,	// (0x00079802) popup_call_audio_in_window

0x60d6,	// (0x0007982e) popup_call_audio_out_window_ParamLimits

0x60d6,	// (0x0007982e) popup_call_audio_out_window

0x6104,	// (0x0007985c) popup_call_audio_second_window_ParamLimits

0x6104,	// (0x0007985c) popup_call_audio_second_window

0x614a,	// (0x000798a2) popup_call_audio_wait_window_ParamLimits

0x614a,	// (0x000798a2) popup_call_audio_wait_window

0x617d,	// (0x000798d5) popup_number_entry_window_ParamLimits

0x617d,	// (0x000798d5) popup_number_entry_window

0xafca,	// (0x0007e722) bg_popup_call_pane_cp05_ParamLimits

0xafca,	// (0x0007e722) bg_popup_call_pane_cp05

0x1b25,	// (0x0007527d) popup_number_entry_window_t1

0x1b38,	// (0x00075290) popup_number_entry_window_t2

0x1b4a,	// (0x000752a2) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x00082807) popup_number_entry_window_t

0x1b90,	// (0x000752e8) text_title_cp2

0x1ba3,	// (0x000752fb) bg_popup_call_pane_cp_ParamLimits

0x1ba3,	// (0x000752fb) bg_popup_call_pane_cp

0x1bb1,	// (0x00075309) call_thumbnail_pane

0x1bb9,	// (0x00075311) popup_call_audio_in_window_g1_ParamLimits

0x1bb9,	// (0x00075311) popup_call_audio_in_window_g1

0x1bc5,	// (0x0007531d) popup_call_audio_in_window_g2_ParamLimits

0x1bc5,	// (0x0007531d) popup_call_audio_in_window_g2

0x1bd1,	// (0x00075329) popup_call_audio_in_window_g3_ParamLimits

0x1bd1,	// (0x00075329) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x00082810) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x00082810) popup_call_audio_in_window_g

0x1bdd,	// (0x00075335) popup_call_audio_in_window_t1_ParamLimits

0x1bdd,	// (0x00075335) popup_call_audio_in_window_t1

0x1bf8,	// (0x00075350) popup_call_audio_in_window_t2_ParamLimits

0x1bf8,	// (0x00075350) popup_call_audio_in_window_t2

0x1c13,	// (0x0007536b) popup_call_audio_in_window_t3_ParamLimits

0x1c13,	// (0x0007536b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x00082817) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x00082817) popup_call_audio_in_window_t

0x1ba3,	// (0x000752fb) bg_popup_call_pane_cp01_ParamLimits

0x1ba3,	// (0x000752fb) bg_popup_call_pane_cp01

0x1bb1,	// (0x00075309) call_thumbnail_pane_cp02

0x1c26,	// (0x0007537e) call_type_pane_cp022

0x1c2e,	// (0x00075386) popup_call_audio_out_window_g1_ParamLimits

0x1c2e,	// (0x00075386) popup_call_audio_out_window_g1

0x1c40,	// (0x00075398) popup_call_audio_out_window_g2_ParamLimits

0x1c40,	// (0x00075398) popup_call_audio_out_window_g2

0x1c4c,	// (0x000753a4) popup_call_audio_out_window_g3_ParamLimits

0x1c4c,	// (0x000753a4) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0008281e) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0008281e) popup_call_audio_out_window_g

0x1c5e,	// (0x000753b6) popup_call_audio_out_window_t1_ParamLimits

0x1c5e,	// (0x000753b6) popup_call_audio_out_window_t1

0x1c76,	// (0x000753ce) popup_call_audio_out_window_t2_ParamLimits

0x1c76,	// (0x000753ce) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x00082825) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x00082825) popup_call_audio_out_window_t

0x1c8b,	// (0x000753e3) bg_popup_call_pane_ParamLimits

0x1c8b,	// (0x000753e3) bg_popup_call_pane

0x1d0f,	// (0x00075467) call_thumbnail_pane_cp_ParamLimits

0x1d0f,	// (0x00075467) call_thumbnail_pane_cp

0x1d33,	// (0x0007548b) call_type_pane_cp01_ParamLimits

0x1d33,	// (0x0007548b) call_type_pane_cp01

0x1d77,	// (0x000754cf) popup_call_audio_first_window_g1_ParamLimits

0x1d77,	// (0x000754cf) popup_call_audio_first_window_g1

0x1dc3,	// (0x0007551b) popup_call_audio_first_window_g2_ParamLimits

0x1dc3,	// (0x0007551b) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0008282a) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0008282a) popup_call_audio_first_window_g

0x1e07,	// (0x0007555f) popup_call_audio_first_window_t1_ParamLimits

0x1e07,	// (0x0007555f) popup_call_audio_first_window_t1

0x1eb3,	// (0x0007560b) popup_call_audio_first_window_t4_ParamLimits

0x1eb3,	// (0x0007560b) popup_call_audio_first_window_t4

0x1f3f,	// (0x00075697) popup_call_audio_first_window_t5_ParamLimits

0x1f3f,	// (0x00075697) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0008282f) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0008282f) popup_call_audio_first_window_t

0x1f6e,	// (0x000756c6) bg_popup_call_pane_cp02

0x1f78,	// (0x000756d0) call_type_pane_cp023

0x1f80,	// (0x000756d8) popup_call_audio_wait_window_g1

0x1f88,	// (0x000756e0) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00082836) popup_call_audio_wait_window_g

0x1f90,	// (0x000756e8) popup_call_audio_wait_window_t3

0x1f9e,	// (0x000756f6) bg_popup_call_pane_cp03_ParamLimits

0x1f9e,	// (0x000756f6) bg_popup_call_pane_cp03

0x1ffe,	// (0x00075756) call_thumbnail_pane_cp011_ParamLimits

0x1ffe,	// (0x00075756) call_thumbnail_pane_cp011

0x200a,	// (0x00075762) call_type_pane_cp034_ParamLimits

0x200a,	// (0x00075762) call_type_pane_cp034

0x2046,	// (0x0007579e) popup_call_audio_second_window_g1_ParamLimits

0x2046,	// (0x0007579e) popup_call_audio_second_window_g1

0x2082,	// (0x000757da) popup_call_audio_second_window_g2_ParamLimits

0x2082,	// (0x000757da) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0008283b) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0008283b) popup_call_audio_second_window_g

0x20be,	// (0x00075816) popup_call_audio_second_window_t1_ParamLimits

0x20be,	// (0x00075816) popup_call_audio_second_window_t1

0x213f,	// (0x00075897) popup_call_audio_second_window_t2_ParamLimits

0x213f,	// (0x00075897) popup_call_audio_second_window_t2

0x2175,	// (0x000758cd) popup_call_audio_second_window_t3_ParamLimits

0x2175,	// (0x000758cd) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x00082840) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x00082840) popup_call_audio_second_window_t

0x1f6e,	// (0x000756c6) bg_popup_call_pane_cp04

0x21ab,	// (0x00075903) list_conf_pane

0x21b3,	// (0x0007590b) popup_call_audio_conf_window_t1

0x21c1,	// (0x00075919) call_thumbnail_pane_g1

0x21c9,	// (0x00075921) bg_pinb_pane_ParamLimits

0x21c9,	// (0x00075921) bg_pinb_pane

0x21d7,	// (0x0007592f) find_pinb_pane

0x21e0,	// (0x00075938) listscroll_pinb_pane_ParamLimits

0x21e0,	// (0x00075938) listscroll_pinb_pane

0x21ef,	// (0x00075947) pinb_bg_pane_g1

0x21f9,	// (0x00075951) pinb_bg_pane_g2

0x2203,	// (0x0007595b) pinb_bg_pane_g3

0x220d,	// (0x00075965) pinb_bg_pane_g4

0x2217,	// (0x0007596f) pinb_bg_pane_g5

0x2221,	// (0x00075979) pinb_bg_pane_g6

0x222a,	// (0x00075982) pinb_bg_pane_g7

0x2233,	// (0x0007598b) pinb_bg_pane_g8

0x223e,	// (0x00075996) pinb_bg_pane_g9

0x2248,	// (0x000759a0) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x00082847) pinb_bg_pane_g

0x2263,	// (0x000759bb) grid_pinb_pane

0x226c,	// (0x000759c4) list_pinb_pane

0x2275,	// (0x000759cd) scroll_pane_cp01_ParamLimits

0x2275,	// (0x000759cd) scroll_pane_cp01

0x2287,	// (0x000759df) find_pinb_pane_g1_ParamLimits

0x2287,	// (0x000759df) find_pinb_pane_g1

0x229f,	// (0x000759f7) find_pinb_pane_t1

0x22b1,	// (0x00075a09) find_pinb_pane_t2

0x0001,

0xf109,	// (0x00082861) find_pinb_pane_t

0x22c6,	// (0x00075a1e) input_focus_pane_cp01_ParamLimits

0x22c6,	// (0x00075a1e) input_focus_pane_cp01

0x22d2,	// (0x00075a2a) cell_pinb_pane_ParamLimits

0x22d2,	// (0x00075a2a) cell_pinb_pane

0x22ed,	// (0x00075a45) cell_pinb_pane_g1_ParamLimits

0x22ed,	// (0x00075a45) cell_pinb_pane_g1

0x22fd,	// (0x00075a55) cell_pinb_pane_g2_ParamLimits

0x22fd,	// (0x00075a55) cell_pinb_pane_g2

0x2309,	// (0x00075a61) cell_pinb_pane_g3_ParamLimits

0x2309,	// (0x00075a61) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x00082866) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x00082866) cell_pinb_pane_g

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp01

0x2315,	// (0x00075a6d) list_pinb_item_pane_ParamLimits

0x2315,	// (0x00075a6d) list_pinb_item_pane

0x1f6e,	// (0x000756c6) list_highlight_pane_cp02

0x2327,	// (0x00075a7f) list_pinb_item_pane_g1_ParamLimits

0x2327,	// (0x00075a7f) list_pinb_item_pane_g1

0x2334,	// (0x00075a8c) list_pinb_item_pane_g2_ParamLimits

0x2334,	// (0x00075a8c) list_pinb_item_pane_g2

0x2340,	// (0x00075a98) list_pinb_item_pane_g3_ParamLimits

0x2340,	// (0x00075a98) list_pinb_item_pane_g3

0x2351,	// (0x00075aa9) list_pinb_item_pane_g4_ParamLimits

0x2351,	// (0x00075aa9) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0008286d) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0008286d) list_pinb_item_pane_g

0x235d,	// (0x00075ab5) list_pinb_item_pane_t1_ParamLimits

0x235d,	// (0x00075ab5) list_pinb_item_pane_t1

0x2392,	// (0x00075aea) calc_display_pane

0x23ae,	// (0x00075b06) calc_paper_pane

0x23cf,	// (0x00075b27) grid_calc_pane

0x1f6e,	// (0x000756c6) bg_list_pane_cp01

0xe79b,	// (0x00081ef3) clock_g1

0x23eb,	// (0x00075b43) clock_g2

0x0001,

0xf11e,	// (0x00082876) clock_g

0x23f3,	// (0x00075b4b) clock_t1_ParamLimits

0x23f3,	// (0x00075b4b) clock_t1

0x2408,	// (0x00075b60) clock_t2_ParamLimits

0x2408,	// (0x00075b60) clock_t2

0x241a,	// (0x00075b72) clock_t3_ParamLimits

0x241a,	// (0x00075b72) clock_t3

0x242c,	// (0x00075b84) clock_t4_ParamLimits

0x242c,	// (0x00075b84) clock_t4

0x243e,	// (0x00075b96) clock_t5_ParamLimits

0x243e,	// (0x00075b96) clock_t5

0x2453,	// (0x00075bab) clock_t6_ParamLimits

0x2453,	// (0x00075bab) clock_t6

0x2465,	// (0x00075bbd) clock_t7_ParamLimits

0x2465,	// (0x00075bbd) clock_t7

0x2477,	// (0x00075bcf) clock_t8_ParamLimits

0x2477,	// (0x00075bcf) clock_t8

0x2489,	// (0x00075be1) clock_t9_ParamLimits

0x2489,	// (0x00075be1) clock_t9

0x0008,

0xf123,	// (0x0008287b) clock_t_ParamLimits

0xf123,	// (0x0008287b) clock_t

0x249b,	// (0x00075bf3) popup_clock_analogue_window_cp02

0x249b,	// (0x00075bf3) popup_clock_digital_window_cp01

0x24a3,	// (0x00075bfb) listscroll_help_pane

0x1f6e,	// (0x000756c6) phob_pre_status_pane

0x24ad,	// (0x00075c05) grid_qdial_pane

0x21c9,	// (0x00075921) listscroll_mce_pane

0x21c9,	// (0x00075921) bg_notes_pane

0x24b7,	// (0x00075c0f) list_notes_pane

0x24c5,	// (0x00075c1d) scroll_pane_cp06

0x24d7,	// (0x00075c2f) bg_calc_paper_pane

0xaff2,	// (0x0007e74a) list_calc_pane

0x24ef,	// (0x00075c47) bg_calc_display_pane

0xb00c,	// (0x0007e764) calc_display_pane_t1

0xb021,	// (0x0007e779) calc_display_pane_t2

0xb036,	// (0x0007e78e) calc_display_pane_t3

0x0002,

0xf136,	// (0x0008288e) calc_display_pane_t

0x24fb,	// (0x00075c53) cell_calc_pane_ParamLimits

0x24fb,	// (0x00075c53) cell_calc_pane

0x252e,	// (0x00075c86) bg_calc_paper_pane_g1

0x253a,	// (0x00075c92) bg_calc_paper_pane_g2

0x2546,	// (0x00075c9e) bg_calc_paper_pane_g3

0x2552,	// (0x00075caa) bg_calc_paper_pane_g4

0x255e,	// (0x00075cb6) bg_calc_paper_pane_g5

0x256a,	// (0x00075cc2) bg_calc_paper_pane_g6

0x2579,	// (0x00075cd1) bg_calc_paper_pane_g7

0x2588,	// (0x00075ce0) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x00082895) bg_calc_paper_pane_g

0x2597,	// (0x00075cef) calc_bg_paper_pane_g9

0x25a6,	// (0x00075cfe) list_calc_item_pane_ParamLimits

0x25a6,	// (0x00075cfe) list_calc_item_pane

0x25ba,	// (0x00075d12) list_calc_item_pane_g1

0xb048,	// (0x0007e7a0) list_calc_item_pane_t1_ParamLimits

0xb048,	// (0x0007e7a0) list_calc_item_pane_t1

0x25c7,	// (0x00075d1f) list_calc_item_pane_t2_ParamLimits

0x25c7,	// (0x00075d1f) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000828a6) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000828a6) list_calc_item_pane_t

0x25dd,	// (0x00075d35) cell_calc_pane_g1

0x25ff,	// (0x00075d57) grid_highlight_pane_cp02

0x2621,	// (0x00075d79) bg_calc_display_pane_g1

0xb05a,	// (0x0007e7b2) bg_calc_display_pane_g2

0x262a,	// (0x00075d82) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000828b0) bg_calc_display_pane_g

0x2633,	// (0x00075d8b) cell_qdial_pane_ParamLimits

0x2633,	// (0x00075d8b) cell_qdial_pane

0x2645,	// (0x00075d9d) cell_qdial_pane_g1_ParamLimits

0x2645,	// (0x00075d9d) cell_qdial_pane_g1

0x265b,	// (0x00075db3) cell_qdial_pane_g2_ParamLimits

0x265b,	// (0x00075db3) cell_qdial_pane_g2

0x266c,	// (0x00075dc4) cell_qdial_pane_g3_ParamLimits

0x266c,	// (0x00075dc4) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000828b7) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000828b7) cell_qdial_pane_g

0x268e,	// (0x00075de6) cell_qdial_pane_t1_ParamLimits

0x268e,	// (0x00075de6) cell_qdial_pane_t1

0x26a6,	// (0x00075dfe) cell_qdial_pane_t2_ParamLimits

0x26a6,	// (0x00075dfe) cell_qdial_pane_t2

0x26b9,	// (0x00075e11) cell_qdial_pane_t3_ParamLimits

0x26b9,	// (0x00075e11) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000828c0) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000828c0) cell_qdial_pane_t

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp04

0x26cc,	// (0x00075e24) thumbnail_qdial_pane_ParamLimits

0x26cc,	// (0x00075e24) thumbnail_qdial_pane

0x2728,	// (0x00075e80) list_help_pane

0x2732,	// (0x00075e8a) scroll_pane_cp02

0x273b,	// (0x00075e93) help_list_pane_t1_ParamLimits

0x273b,	// (0x00075e93) help_list_pane_t1

0xb064,	// (0x0007e7bc) bg_notes_pane_g2

0xb06c,	// (0x0007e7c4) bg_notes_pane_g3

0xb074,	// (0x0007e7cc) notes_bg_pane_g1

0xb07c,	// (0x0007e7d4) notes_bg_pane_g4

0xb084,	// (0x0007e7dc) notes_bg_pane_g5

0xb08c,	// (0x0007e7e4) notes_bg_pane_g6

0xb094,	// (0x0007e7ec) notes_bg_pane_g7

0xb09c,	// (0x0007e7f4) notes_bg_pane_g8

0xb0a4,	// (0x0007e7fc) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000828de) notes_bg_pane_g

0x2757,	// (0x00075eaf) list_notes_text_pane_ParamLimits

0x2757,	// (0x00075eaf) list_notes_text_pane

0x277a,	// (0x00075ed2) list_notes_text_pane_g1

0x0b20,	// (0x00074278) list_notes_text_pane_t1

0x2794,	// (0x00075eec) listscroll_cale_week_pane

0x27c7,	// (0x00075f1f) bg_cale_heading_pane

0x27df,	// (0x00075f37) bg_cale_pane_cp01

0x27fc,	// (0x00075f54) cale_week_corner_pane

0x281b,	// (0x00075f73) cale_week_day_heading_pane

0x2838,	// (0x00075f90) cale_week_scroll_pane_g1

0x284b,	// (0x00075fa3) cale_week_scroll_pane_g2

0x2863,	// (0x00075fbb) cale_week_scroll_pane_g3

0x287b,	// (0x00075fd3) cale_week_scroll_pane_g4

0x2893,	// (0x00075feb) cale_week_scroll_pane_g5

0x28ab,	// (0x00076003) cale_week_scroll_pane_g6

0x28c3,	// (0x0007601b) cale_week_scroll_pane_g7

0x28db,	// (0x00076033) cale_week_scroll_pane_g8

0x28f7,	// (0x0007604f) cale_week_scroll_pane_g9

0x290f,	// (0x00076067) cale_week_scroll_pane_g10

0x2927,	// (0x0007607f) cale_week_scroll_pane_g11

0x293f,	// (0x00076097) cale_week_scroll_pane_g12

0x2957,	// (0x000760af) cale_week_scroll_pane_g13

0x296f,	// (0x000760c7) cale_week_scroll_pane_g14

0x2987,	// (0x000760df) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000828ed) cale_week_scroll_pane_g

0x29bb,	// (0x00076113) cale_week_time_pane

0x29d7,	// (0x0007612f) grid_cale_week_pane

0x2a07,	// (0x0007615f) scroll_pane_cp08

0x2a24,	// (0x0007617c) cell_cale_week_pane_ParamLimits

0x2a24,	// (0x0007617c) cell_cale_week_pane

0x2a9a,	// (0x000761f2) cale_week_day_heading_pane_t1

0x2ac4,	// (0x0007621c) cale_week_day_heading_pane_t2

0x2af3,	// (0x0007624b) cale_week_day_heading_pane_t3

0x2b22,	// (0x0007627a) cale_week_day_heading_pane_t4

0x2b51,	// (0x000762a9) cale_week_day_heading_pane_t5

0x2b80,	// (0x000762d8) cale_week_day_heading_pane_t6

0x2baf,	// (0x00076307) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0008290e) cale_week_day_heading_pane_t

0x2bd9,	// (0x00076331) bg_cale_side_pane

0x2be7,	// (0x0007633f) cale_week_time_pane_t1

0x2c21,	// (0x00076379) cale_week_time_pane_t2

0x2c5b,	// (0x000763b3) cale_week_time_pane_t3

0x2c95,	// (0x000763ed) cale_week_time_pane_t4

0x2ccf,	// (0x00076427) cale_week_time_pane_t5

0x2d09,	// (0x00076461) cale_week_time_pane_t6

0x2d43,	// (0x0007649b) cale_week_time_pane_t7

0x2d7d,	// (0x000764d5) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0008291d) cale_week_time_pane_t

0x2db7,	// (0x0007650f) cell_cale_week_pane_g2

0x2dd6,	// (0x0007652e) cell_cale_week_pane_g3_ParamLimits

0x2dd6,	// (0x0007652e) cell_cale_week_pane_g3

0x2dee,	// (0x00076546) grid_highlight_pane_cp07

0x2df6,	// (0x0007654e) listscroll_gms_pane

0x2e00,	// (0x00076558) grid_gms_pane

0x2e09,	// (0x00076561) listscroll_gms_pane_g1

0x2e11,	// (0x00076569) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0008292e) listscroll_gms_pane_g

0x2e19,	// (0x00076571) scroll_pane_cp010

0x2e24,	// (0x0007657c) cell_gms_pane_ParamLimits

0x2e24,	// (0x0007657c) cell_gms_pane

0x2e34,	// (0x0007658c) cell_gms_pane_g1

0x2e3c,	// (0x00076594) cell_gms_pane_g2

0x277a,	// (0x00075ed2) cell_gms_pane_g3

0x2e44,	// (0x0007659c) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x00082933) cell_gms_pane_g

0x2e4d,	// (0x000765a5) grid_highlight_pane_cp09

0x5fea,	// (0x00079742) phob_pre_status_pane_g1

0x5ff2,	// (0x0007974a) phob_pre_status_pane_g2

0x5ffa,	// (0x00079752) phob_pre_status_pane_g3

0x6002,	// (0x0007975a) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x00082d31) phob_pre_status_pane_g

0x6012,	// (0x0007976a) phob_pre_status_pane_t1

0x6020,	// (0x00079778) phob_pre_status_pane_t2

0x602e,	// (0x00079786) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x00082d3c) phob_pre_status_pane_t

0x2e5d,	// (0x000765b5) bg_list_pane_cp05

0x2e65,	// (0x000765bd) grid_vorec_pane

0x2e6d,	// (0x000765c5) vorec_t1

0x2e7b,	// (0x000765d3) vorec_t2

0x2e89,	// (0x000765e1) vorec_t3

0x2e97,	// (0x000765ef) vorec_t4

0xaf1e,	// (0x0007e676) vorec_t5

0xaf2c,	// (0x0007e684) vorec_t6

0x0004,

0xf1e4,	// (0x0008293c) vorec_t

0xaf3a,	// (0x0007e692) wait_bar_pane_cp01

0x2eb3,	// (0x0007660b) cell_vorec_pane_ParamLimits

0x2eb3,	// (0x0007660b) cell_vorec_pane

0xb0ac,	// (0x0007e804) cell_vorec_pane_g1

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp05

0x2ed8,	// (0x00076630) cams_zoom_pane

0x2ee7,	// (0x0007663f) image_vga_pane

0x2eff,	// (0x00076657) main_camera_pane_g1

0x2f0f,	// (0x00076667) main_camera_pane_g2

0x2f1f,	// (0x00076677) main_camera_pane_g3

0x2f2f,	// (0x00076687) main_camera_pane_g4

0x2f3f,	// (0x00076697) main_camera_pane_g5

0x2f4f,	// (0x000766a7) main_camera_pane_g6

0x2f5f,	// (0x000766b7) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x00082947) main_camera_pane_g

0x2f7b,	// (0x000766d3) main_camera_pane_t1

0x2f91,	// (0x000766e9) main_camera_pane_t2

0x0001,

0xf200,	// (0x00082958) main_camera_pane_t

0x2fc3,	// (0x0007671b) cams_zoom_pane_cp_ParamLimits

0x2fc3,	// (0x0007671b) cams_zoom_pane_cp

0x2feb,	// (0x00076743) image_cif_pane_ParamLimits

0x2feb,	// (0x00076743) image_cif_pane

0x301c,	// (0x00076774) image_subqcif_pane

0x3024,	// (0x0007677c) main_video_pane_g1_ParamLimits

0x3024,	// (0x0007677c) main_video_pane_g1

0x3048,	// (0x000767a0) main_video_pane_g2_ParamLimits

0x3048,	// (0x000767a0) main_video_pane_g2

0x307c,	// (0x000767d4) main_video_pane_g3_ParamLimits

0x307c,	// (0x000767d4) main_video_pane_g3

0x30aa,	// (0x00076802) main_video_pane_g4_ParamLimits

0x30aa,	// (0x00076802) main_video_pane_g4

0x30d8,	// (0x00076830) main_video_pane_g5_ParamLimits

0x30d8,	// (0x00076830) main_video_pane_g5

0x30f0,	// (0x00076848) main_video_pane_g6_ParamLimits

0x30f0,	// (0x00076848) main_video_pane_g6

0x0006,

0xf205,	// (0x0008295d) main_video_pane_g_ParamLimits

0xf205,	// (0x0008295d) main_video_pane_g

0x3119,	// (0x00076871) main_video_pane_t1_ParamLimits

0x3119,	// (0x00076871) main_video_pane_t1

0x3162,	// (0x000768ba) cams_zoom_pane_g1

0x316b,	// (0x000768c3) cams_zoom_pane_g2

0x3174,	// (0x000768cc) cams_zoom_pane_g3

0x317d,	// (0x000768d5) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0008296c) cams_zoom_pane_g

0x319a,	// (0x000768f2) grid_cams_pane

0x31af,	// (0x00076907) linegrid_cams_pane

0x31c0,	// (0x00076918) cell_cams_pane_ParamLimits

0x31c0,	// (0x00076918) cell_cams_pane

0x31de,	// (0x00076936) cams_burst_image_pane

0x31e6,	// (0x0007693e) cell_cams_pane_g1

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp03

0x25dd,	// (0x00075d35) mp_bg_pane_g1

0x1f6e,	// (0x000756c6) bg_list_pane_cp03

0xbcfe,	// (0x0007f456) bg_mp_pane

0xbd06,	// (0x0007f45e) grid_mp_pane

0xbd0e,	// (0x0007f466) media_player_g1

0xbd16,	// (0x0007f46e) media_player_t1

0xbd24,	// (0x0007f47c) media_player_t2

0xbd32,	// (0x0007f48a) media_player_t3

0xbd40,	// (0x0007f498) media_player_t4

0xbd4e,	// (0x0007f4a6) media_player_t5

0xbd5c,	// (0x0007f4b4) media_player_t6

0xbd6a,	// (0x0007f4c2) media_player_t7

0x0006,

0xf5c3,	// (0x00082d1b) media_player_t

0xbd78,	// (0x0007f4d0) wait_bar_pane_cp02

0xf5a8,	// (0x00082d00) main_usb_pane_t

0x5fe1,	// (0x00079739) cell_mp_pane

0x25dd,	// (0x00075d35) cell_mp_pane_g1

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp06

0x3206,	// (0x0007695e) grid_skin_colour_pane

0x320e,	// (0x00076966) list_highlight_pane_cp03

0x3216,	// (0x0007696e) skin_g1

0x321e,	// (0x00076976) skin_t1

0x322d,	// (0x00076985) skin_t2

0x0001,

0xf249,	// (0x000829a1) skin_t

0x323b,	// (0x00076993) cell_skin_colour_pane_ParamLimits

0x323b,	// (0x00076993) cell_skin_colour_pane

0x3255,	// (0x000769ad) cell_skin_colour_pane_g1

0x32b6,	// (0x00076a0e) call_video_g1_ParamLimits

0x32b6,	// (0x00076a0e) call_video_g1

0x32cc,	// (0x00076a24) call_video_g2_ParamLimits

0x32cc,	// (0x00076a24) call_video_g2

0x0001,

0xf24e,	// (0x000829a6) call_video_g_ParamLimits

0xf24e,	// (0x000829a6) call_video_g

0x3314,	// (0x00076a6c) call_video_uplink_pane_cp1_ParamLimits

0x3314,	// (0x00076a6c) call_video_uplink_pane_cp1

0x3379,	// (0x00076ad1) call_video_uplink_pane_cp2

0x33b1,	// (0x00076b09) video_down_crop_pane_ParamLimits

0x33b1,	// (0x00076b09) video_down_crop_pane

0x3474,	// (0x00076bcc) video_down_pane_ParamLimits

0x3474,	// (0x00076bcc) video_down_pane

0x351e,	// (0x00076c76) video_down_subqcif_pane_ParamLimits

0x351e,	// (0x00076c76) video_down_subqcif_pane

0x3536,	// (0x00076c8e) video_down_subqcif_pane_cp_ParamLimits

0x3536,	// (0x00076c8e) video_down_subqcif_pane_cp

0x356d,	// (0x00076cc5) im_reading_pane_ParamLimits

0x356d,	// (0x00076cc5) im_reading_pane

0x357f,	// (0x00076cd7) im_writing_pane_ParamLimits

0x357f,	// (0x00076cd7) im_writing_pane

0x359d,	// (0x00076cf5) im_reading_pane_t1

0x35d3,	// (0x00076d2b) list_im_pane

0x35e4,	// (0x00076d3c) scroll_pane_cp07

0x35fd,	// (0x00076d55) im_writing_pane_t1_ParamLimits

0x35fd,	// (0x00076d55) im_writing_pane_t1

0x3612,	// (0x00076d6a) im_writing_pane_t2_ParamLimits

0x3612,	// (0x00076d6a) im_writing_pane_t2

0x0001,

0xf258,	// (0x000829b0) im_writing_pane_t_ParamLimits

0xf258,	// (0x000829b0) im_writing_pane_t

0x1f6e,	// (0x000756c6) input_focus_pane_cp04

0x1f6e,	// (0x000756c6) input_focus_pane_cp05

0x362f,	// (0x00076d87) list_im_single_pane_ParamLimits

0x362f,	// (0x00076d87) list_im_single_pane

0x3645,	// (0x00076d9d) list_single_im_pane_t1

0x5fa7,	// (0x000796ff) blid_accuracy_pane

0x5faf,	// (0x00079707) blid_compass_pane

0x5fb7,	// (0x0007970f) main_location_t1

0x5fc5,	// (0x0007971d) main_location_t2

0x5fd3,	// (0x0007972b) main_location_t3

0x0002,

0xf5d2,	// (0x00082d2a) main_location_t

0x1f6e,	// (0x000756c6) aid_levels_location

0x25dd,	// (0x00075d35) blid_accuracy_pane_g1

0x25dd,	// (0x00075d35) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x00082a12) blid_accuracy_pane_g

0x367f,	// (0x00076dd7) wml_content_pane

0x36bd,	// (0x00076e15) wml_button_pane_ParamLimits

0x36bd,	// (0x00076e15) wml_button_pane

0x36d1,	// (0x00076e29) wml_list_single_large_pane_ParamLimits

0x36d1,	// (0x00076e29) wml_list_single_large_pane

0x36e5,	// (0x00076e3d) wml_list_single_medium_pane_ParamLimits

0x36e5,	// (0x00076e3d) wml_list_single_medium_pane

0x36fa,	// (0x00076e52) wml_list_single_small_pane_ParamLimits

0x36fa,	// (0x00076e52) wml_list_single_small_pane

0x3711,	// (0x00076e69) wml_selection_box_pane_ParamLimits

0x3711,	// (0x00076e69) wml_selection_box_pane

0x3724,	// (0x00076e7c) wml_list_single_pane_t1

0x3733,	// (0x00076e8b) wml_list_single_medium_pane_t1

0x3742,	// (0x00076e9a) wml_list_single_large_pane_t1

0x3751,	// (0x00076ea9) input_focus_pane_cp02_ParamLimits

0x3751,	// (0x00076ea9) input_focus_pane_cp02

0x3764,	// (0x00076ebc) wml_selection_box_pane_g1

0x376d,	// (0x00076ec5) wml_selection_box_pane_t1_ParamLimits

0x376d,	// (0x00076ec5) wml_selection_box_pane_t1

0x21c9,	// (0x00075921) bg_wml_button_pane_ParamLimits

0x21c9,	// (0x00075921) bg_wml_button_pane

0x3785,	// (0x00076edd) wml_button_pane_g1

0x378d,	// (0x00076ee5) wml_button_pane_t1

0x3785,	// (0x00076edd) wml_button_bg_pane_g1

0x379d,	// (0x00076ef5) wml_button_bg_pane_g2

0x37a5,	// (0x00076efd) wml_button_bg_pane_g3

0x37ad,	// (0x00076f05) wml_button_bg_pane_g4

0x37b5,	// (0x00076f0d) wml_button_bg_pane_g5

0x37bd,	// (0x00076f15) wml_button_bg_pane_g6

0x37c5,	// (0x00076f1d) wml_button_bg_pane_g7

0x37cd,	// (0x00076f25) wml_button_bg_pane_g8

0x37d5,	// (0x00076f2d) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000829b5) wml_button_bg_pane_g

0x37dd,	// (0x00076f35) bg_list_pane_cp02

0x37e6,	// (0x00076f3e) mce_header_pane_ParamLimits

0x37e6,	// (0x00076f3e) mce_header_pane

0x37fa,	// (0x00076f52) mce_icon_pane

0x37fa,	// (0x00076f52) mce_image_pane

0x3803,	// (0x00076f5b) mce_text_pane_ParamLimits

0x3803,	// (0x00076f5b) mce_text_pane

0x3817,	// (0x00076f6f) scroll_pane_cp03

0x3817,	// (0x00076f6f) scroll_pane_cp04

0x3821,	// (0x00076f79) scroll_pane_cp05_ParamLimits

0x3821,	// (0x00076f79) scroll_pane_cp05

0x382d,	// (0x00076f85) mce_header_field_pane_ParamLimits

0x382d,	// (0x00076f85) mce_header_field_pane

0x3844,	// (0x00076f9c) mce_header_field_pane_2_ParamLimits

0x3844,	// (0x00076f9c) mce_header_field_pane_2

0x385a,	// (0x00076fb2) mce_header_field_pane_3

0x3862,	// (0x00076fba) list_single_mce_message_pane_ParamLimits

0x3862,	// (0x00076fba) list_single_mce_message_pane

0x3877,	// (0x00076fcf) list_single_mce_smart_pane_ParamLimits

0x3877,	// (0x00076fcf) list_single_mce_smart_pane

0x3897,	// (0x00076fef) input_focus_pane_cp03

0x38a0,	// (0x00076ff8) list_header_data_pane

0x38a8,	// (0x00077000) mce_header_field_pane_t1

0x38b6,	// (0x0007700e) list_single_mce_header_pane_ParamLimits

0x38b6,	// (0x0007700e) list_single_mce_header_pane

0x38ca,	// (0x00077022) list_single_mce_header_pane_t1

0x38d9,	// (0x00077031) list_single_mce_message_pane_g1

0x38e2,	// (0x0007703a) list_single_mce_message_pane_t1

0x3917,	// (0x0007706f) bg_cale_heading_pane_cp01_ParamLimits

0x3917,	// (0x0007706f) bg_cale_heading_pane_cp01

0x3946,	// (0x0007709e) bg_cale_pane_cp02_ParamLimits

0x3946,	// (0x0007709e) bg_cale_pane_cp02

0x3973,	// (0x000770cb) cale_month_corner_pane

0x3992,	// (0x000770ea) cale_month_day_heading_pane_ParamLimits

0x3992,	// (0x000770ea) cale_month_day_heading_pane

0x39c9,	// (0x00077121) cale_month_pane_g1_ParamLimits

0x39c9,	// (0x00077121) cale_month_pane_g1

0x39ed,	// (0x00077145) cale_month_pane_g2_ParamLimits

0x39ed,	// (0x00077145) cale_month_pane_g2

0x3a15,	// (0x0007716d) cale_month_pane_g3_ParamLimits

0x3a15,	// (0x0007716d) cale_month_pane_g3

0x3a51,	// (0x000771a9) cale_month_pane_g4_ParamLimits

0x3a51,	// (0x000771a9) cale_month_pane_g4

0x3a8d,	// (0x000771e5) cale_month_pane_g5_ParamLimits

0x3a8d,	// (0x000771e5) cale_month_pane_g5

0x3ac9,	// (0x00077221) cale_month_pane_g6_ParamLimits

0x3ac9,	// (0x00077221) cale_month_pane_g6

0x3b05,	// (0x0007725d) cale_month_pane_g7_ParamLimits

0x3b05,	// (0x0007725d) cale_month_pane_g7

0x3b41,	// (0x00077299) cale_month_pane_g8_ParamLimits

0x3b41,	// (0x00077299) cale_month_pane_g8

0x3b85,	// (0x000772dd) cale_month_pane_g9_ParamLimits

0x3b85,	// (0x000772dd) cale_month_pane_g9

0x3bc7,	// (0x0007731f) cale_month_pane_g10_ParamLimits

0x3bc7,	// (0x0007731f) cale_month_pane_g10

0x3c09,	// (0x00077361) cale_month_pane_g11_ParamLimits

0x3c09,	// (0x00077361) cale_month_pane_g11

0x3c4b,	// (0x000773a3) cale_month_pane_g12_ParamLimits

0x3c4b,	// (0x000773a3) cale_month_pane_g12

0x3c8d,	// (0x000773e5) cale_month_pane_g13_ParamLimits

0x3c8d,	// (0x000773e5) cale_month_pane_g13

0x000c,

0xf270,	// (0x000829c8) cale_month_pane_g_ParamLimits

0xf270,	// (0x000829c8) cale_month_pane_g

0x3ce1,	// (0x00077439) cale_month_week_pane

0x3cfd,	// (0x00077455) grid_cale_month_pane_ParamLimits

0x3cfd,	// (0x00077455) grid_cale_month_pane

0x3d2b,	// (0x00077483) cale_month_day_heading_pane_t1

0x3db1,	// (0x00077509) cale_month_day_heading_pane_t2

0x3e42,	// (0x0007759a) cale_month_day_heading_pane_t3

0x3ed3,	// (0x0007762b) cale_month_day_heading_pane_t4

0x3f64,	// (0x000776bc) cale_month_day_heading_pane_t5

0x3ff5,	// (0x0007774d) cale_month_day_heading_pane_t6

0x4086,	// (0x000777de) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000829e3) cale_month_day_heading_pane_t

0x2bd9,	// (0x00076331) bg_cale_side_pane_cp01

0x411b,	// (0x00077873) cale_month_week_pane_t1

0x4134,	// (0x0007788c) cale_month_week_pane_t2

0x414d,	// (0x000778a5) cale_month_week_pane_t3

0x4166,	// (0x000778be) cale_month_week_pane_t4

0x417f,	// (0x000778d7) cale_month_week_pane_t5

0x4198,	// (0x000778f0) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000829f2) cale_month_week_pane_t

0x41b1,	// (0x00077909) cell_cale_month_pane_ParamLimits

0x41b1,	// (0x00077909) cell_cale_month_pane

0xb0b6,	// (0x0007e80e) cell_cale_month_pane_g1

0x42a3,	// (0x000779fb) cell_cale_month_pane_t1_ParamLimits

0x42a3,	// (0x000779fb) cell_cale_month_pane_t1

0x2dee,	// (0x00076546) grid_highlight_pane_cp08

0x25dd,	// (0x00075d35) main_smil_g1

0x42c3,	// (0x00077a1b) smil_status_pane

0x42cc,	// (0x00077a24) smil_text_pane

0xbbde,	// (0x0007f336) bg_popup_call3_rect_pane_g8

0xbbe6,	// (0x0007f33e) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x00082cab) bg_popup_call3_rect_pane_g

0xbec7,	// (0x0007f61f) smil_status_volume_pane_g1

0x42de,	// (0x00077a36) smil_status_pane_t1

0xbefa,	// (0x0007f652) volume_smil_pane

0x42f5,	// (0x00077a4d) list_smil_text_pane

0x42ff,	// (0x00077a57) scroll_pane_cp011

0x430a,	// (0x00077a62) smil_text_list_pane_t1_ParamLimits

0x430a,	// (0x00077a62) smil_text_list_pane_t1

0xb0c2,	// (0x0007e81a) aid_volume_smil_ParamLimits

0xb0c2,	// (0x0007e81a) aid_volume_smil

0x25dd,	// (0x00075d35) smil_volume_pane_g1

0x25dd,	// (0x00075d35) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x00082a12) smil_volume_pane_g

0x2794,	// (0x00075eec) listscroll_cale_day_pane

0x4346,	// (0x00077a9e) bg_cale_pane

0x435e,	// (0x00077ab6) list_cale_pane

0x4381,	// (0x00077ad9) scroll_pane_cp09

0x4392,	// (0x00077aea) cale_bg_pane_g1

0x439a,	// (0x00077af2) cale_bg_pane_g2

0x43a2,	// (0x00077afa) cale_bg_pane_g3

0x43aa,	// (0x00077b02) cale_bg_pane_g4

0x43b2,	// (0x00077b0a) cale_bg_pane_g5

0x43ba,	// (0x00077b12) cale_bg_pane_g6

0x43c2,	// (0x00077b1a) cale_bg_pane_g7

0x43ca,	// (0x00077b22) cale_bg_pane_g8

0x43d2,	// (0x00077b2a) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x00082a17) cale_bg_pane_g

0x43e2,	// (0x00077b3a) list_cale_time_pane_ParamLimits

0x43e2,	// (0x00077b3a) list_cale_time_pane

0x43f7,	// (0x00077b4f) list_cale_time_pane_g1_ParamLimits

0x43f7,	// (0x00077b4f) list_cale_time_pane_g1

0x4403,	// (0x00077b5b) list_cale_time_pane_g2_ParamLimits

0x4403,	// (0x00077b5b) list_cale_time_pane_g2

0x4410,	// (0x00077b68) list_cale_time_pane_g3_ParamLimits

0x4410,	// (0x00077b68) list_cale_time_pane_g3

0x441c,	// (0x00077b74) list_cale_time_pane_g4_ParamLimits

0x441c,	// (0x00077b74) list_cale_time_pane_g4

0x4428,	// (0x00077b80) list_cale_time_pane_g5_ParamLimits

0x4428,	// (0x00077b80) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x00082a2a) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x00082a2a) list_cale_time_pane_g

0x4441,	// (0x00077b99) list_cale_time_pane_t1_ParamLimits

0x4441,	// (0x00077b99) list_cale_time_pane_t1

0x4469,	// (0x00077bc1) list_cale_time_pane_t2_ParamLimits

0x4469,	// (0x00077bc1) list_cale_time_pane_t2

0x4b3b,	// (0x00078293) aid_blid_cardinal_pane

0x4b85,	// (0x000782dd) compass_pane_t4

0x4491,	// (0x00077be9) list_cale_time_pane_t4_ParamLimits

0x4491,	// (0x00077be9) list_cale_time_pane_t4

0x4b93,	// (0x000782eb) compass_pane_t5

0x4ba1,	// (0x000782f9) compass_pane_t6

0x4baf,	// (0x00078307) compass_pane_t7

0x4c3b,	// (0x00078393) navi_pane_cc_t1

0x4e43,	// (0x0007859b) aid_phob_thumbnail_center_pane

0x53e3,	// (0x00078b3b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x00082a37) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x00082a37) list_cale_time_pane_t

0x1ba3,	// (0x000752fb) bg_popup_window_pane_cp02_ParamLimits

0x1ba3,	// (0x000752fb) bg_popup_window_pane_cp02

0x44b9,	// (0x00077c11) heading_pane_cp01_ParamLimits

0x44b9,	// (0x00077c11) heading_pane_cp01

0x44c5,	// (0x00077c1d) loc_req_pane_ParamLimits

0x44c5,	// (0x00077c1d) loc_req_pane

0x44d5,	// (0x00077c2d) loc_type_pane_ParamLimits

0x44d5,	// (0x00077c2d) loc_type_pane

0x44e7,	// (0x00077c3f) loc_type_pane_t1_ParamLimits

0x44e7,	// (0x00077c3f) loc_type_pane_t1

0x44f9,	// (0x00077c51) loc_type_pane_t2_ParamLimits

0x44f9,	// (0x00077c51) loc_type_pane_t2

0x450b,	// (0x00077c63) loc_type_pane_t3_ParamLimits

0x450b,	// (0x00077c63) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x00082a3e) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x00082a3e) loc_type_pane_t

0x451d,	// (0x00077c75) list_loc_req_pane

0x4527,	// (0x00077c7f) scroll_pane_cp012

0x4530,	// (0x00077c88) list_single_loc_request_popup_menu_pane_ParamLimits

0x4530,	// (0x00077c88) list_single_loc_request_popup_menu_pane

0x453d,	// (0x00077c95) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x453d,	// (0x00077c95) list_single_loc_request_popup_menu_pane_g1

0x4549,	// (0x00077ca1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4549,	// (0x00077ca1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x00082a45) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x00082a45) list_single_loc_request_popup_menu_pane_g

0x4555,	// (0x00077cad) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4555,	// (0x00077cad) list_single_loc_request_popup_menu_pane_t1

0x21c9,	// (0x00075921) bg_popup_window_pane_cp03_ParamLimits

0x21c9,	// (0x00075921) bg_popup_window_pane_cp03

0x456b,	// (0x00077cc3) heading_loc_req_pane_ParamLimits

0x456b,	// (0x00077cc3) heading_loc_req_pane

0x4577,	// (0x00077ccf) popup_dyc_status_message_window_g1_ParamLimits

0x4577,	// (0x00077ccf) popup_dyc_status_message_window_g1

0x458b,	// (0x00077ce3) popup_dyc_status_message_window_t1_ParamLimits

0x458b,	// (0x00077ce3) popup_dyc_status_message_window_t1

0x45a0,	// (0x00077cf8) popup_dyc_status_message_window_t2_ParamLimits

0x45a0,	// (0x00077cf8) popup_dyc_status_message_window_t2

0x45b5,	// (0x00077d0d) popup_dyc_status_message_window_t3_ParamLimits

0x45b5,	// (0x00077d0d) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x00082a4a) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x00082a4a) popup_dyc_status_message_window_t

0x1f6e,	// (0x000756c6) bg_heading_pane_cp01

0x45d1,	// (0x00077d29) heading_loc_req_pane_g1

0x45d9,	// (0x00077d31) heading_loc_req_pane_g2

0x45e1,	// (0x00077d39) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x00082a51) heading_loc_req_pane_g

0x45e9,	// (0x00077d41) heading_loc_req_pane_t1

0x4612,	// (0x00077d6a) bg_popup_sub_pane_cp01_ParamLimits

0x4612,	// (0x00077d6a) bg_popup_sub_pane_cp01

0x4620,	// (0x00077d78) popup_cale_events_window_g1_ParamLimits

0x4620,	// (0x00077d78) popup_cale_events_window_g1

0x4640,	// (0x00077d98) popup_cale_events_window_g2_ParamLimits

0x4640,	// (0x00077d98) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x00082a85) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x00082a85) popup_cale_events_window_g

0x4660,	// (0x00077db8) popup_cale_events_window_t1_ParamLimits

0x4660,	// (0x00077db8) popup_cale_events_window_t1

0x4672,	// (0x00077dca) popup_cale_events_window_t2_ParamLimits

0x4672,	// (0x00077dca) popup_cale_events_window_t2

0x46b0,	// (0x00077e08) popup_cale_events_window_t3_ParamLimits

0x46b0,	// (0x00077e08) popup_cale_events_window_t3

0x46ea,	// (0x00077e42) popup_cale_events_window_t4_ParamLimits

0x46ea,	// (0x00077e42) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x00082a8a) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x00082a8a) popup_cale_events_window_t

0x4720,	// (0x00077e78) call_type_pane

0x4730,	// (0x00077e88) popup_call_status_window_g1

0x4744,	// (0x00077e9c) popup_call_status_window_g2

0x4758,	// (0x00077eb0) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x00082a93) popup_call_status_window_g

0x4768,	// (0x00077ec0) call_type_pane_g1

0x4771,	// (0x00077ec9) call_type_pane_g2

0x0001,

0xf342,	// (0x00082a9a) call_type_pane_g

0x1f6e,	// (0x000756c6) bg_popup_sub_pane_cp02

0x477a,	// (0x00077ed2) listscroll_popup_wml_pane

0x4782,	// (0x00077eda) list_wml_pane

0x478c,	// (0x00077ee4) scroll_pane_cp013

0x4795,	// (0x00077eed) list_single_graphic_popup_wml_pane_ParamLimits

0x4795,	// (0x00077eed) list_single_graphic_popup_wml_pane

0x25dd,	// (0x00075d35) list_single_graphic_popup_wml_pane_g1

0x47a8,	// (0x00077f00) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x00082a9f) list_single_graphic_popup_wml_pane_g

0x47b0,	// (0x00077f08) list_single_graphic_popup_wml_pane_t1

0x47c6,	// (0x00077f1e) aid_call_pane

0x21c1,	// (0x00075919) popup_clock_analogue_window_g1

0x21c1,	// (0x00075919) popup_clock_analogue_window_g2

0xb0e4,	// (0x0007e83c) popup_clock_analogue_window_g3

0xb0e4,	// (0x0007e83c) popup_clock_analogue_window_g4

0x25dd,	// (0x00075d35) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x00082aa4) popup_clock_analogue_window_g

0xb0ec,	// (0x0007e844) popup_clock_analogue_window_t1

0xb0fa,	// (0x0007e852) clock_digital_number_pane_ParamLimits

0xb0fa,	// (0x0007e852) clock_digital_number_pane

0xb106,	// (0x0007e85e) clock_digital_number_pane_cp02_ParamLimits

0xb106,	// (0x0007e85e) clock_digital_number_pane_cp02

0xb112,	// (0x0007e86a) clock_digital_number_pane_cp03_ParamLimits

0xb112,	// (0x0007e86a) clock_digital_number_pane_cp03

0xb11e,	// (0x0007e876) clock_digital_number_pane_cp04_ParamLimits

0xb11e,	// (0x0007e876) clock_digital_number_pane_cp04

0xb12a,	// (0x0007e882) clock_digital_separator_pane_ParamLimits

0xb12a,	// (0x0007e882) clock_digital_separator_pane

0xb136,	// (0x0007e88e) popup_clock_digital_window_t1

0x25dd,	// (0x00075d35) clock_digital_number_pane_g1

0x25dd,	// (0x00075d35) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x00082a12) clock_digital_number_pane_g

0x25dd,	// (0x00075d35) clock_digital_separator_pane_g1

0x25dd,	// (0x00075d35) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x00082a12) clock_digital_separator_pane_g

0x1f6e,	// (0x000756c6) bg_popup_window_pane_cp04

0x47ce,	// (0x00077f26) heading_pane_cp03

0x47d6,	// (0x00077f2e) listscroll_popup_gms_pane

0x47de,	// (0x00077f36) grid_large_graphic_popup_pane

0x47e8,	// (0x00077f40) listscroll_popup_gms_pane_g1

0x47f0,	// (0x00077f48) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x00082aaf) listscroll_popup_gms_pane_g

0x36b5,	// (0x00076e0d) scroll_pane_cp014

0x47f8,	// (0x00077f50) cell_large_graphic_popup_pane_ParamLimits

0x47f8,	// (0x00077f50) cell_large_graphic_popup_pane

0x480e,	// (0x00077f66) cell_large_graphic_popup_pane_g1_ParamLimits

0x480e,	// (0x00077f66) cell_large_graphic_popup_pane_g1

0x481a,	// (0x00077f72) cell_large_graphic_popup_pane_g2_ParamLimits

0x481a,	// (0x00077f72) cell_large_graphic_popup_pane_g2

0x4826,	// (0x00077f7e) cell_large_graphic_popup_pane_g3_ParamLimits

0x4826,	// (0x00077f7e) cell_large_graphic_popup_pane_g3

0x4833,	// (0x00077f8b) cell_large_graphic_popup_pane_g4_ParamLimits

0x4833,	// (0x00077f8b) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x00082ab4) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x00082ab4) cell_large_graphic_popup_pane_g

0x4843,	// (0x00077f9b) grid_highlight_pane_cp010

0x25dd,	// (0x00075d35) bg_popup_call_pane_g1

0x484d,	// (0x00077fa5) list_single_graphic_popup_conf_pane_ParamLimits

0x484d,	// (0x00077fa5) list_single_graphic_popup_conf_pane

0x4860,	// (0x00077fb8) list_highlight_pane_cp01

0x4869,	// (0x00077fc1) list_single_graphic_popup_conf_pane_g1

0x4871,	// (0x00077fc9) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x00082abd) list_single_graphic_popup_conf_pane_g

0x4879,	// (0x00077fd1) list_single_graphic_popup_conf_pane_t1

0x4887,	// (0x00077fdf) linegrid_cams_pane_g1

0x4890,	// (0x00077fe8) linegrid_cams_pane_g2

0x277a,	// (0x00075ed2) linegrid_cams_pane_g3

0x4899,	// (0x00077ff1) linegrid_cams_pane_g4

0x48a2,	// (0x00077ffa) linegrid_cams_pane_g5

0x48ab,	// (0x00078003) linegrid_cams_pane_g6

0x2e44,	// (0x0007659c) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00082ac2) linegrid_cams_pane_g

0x48b4,	// (0x0007800c) popup_clock_analogue_window

0x48b4,	// (0x0007800c) popup_clock_digital_window

0x1f6e,	// (0x000756c6) popup_phob_thumbnail_window

0x25dd,	// (0x00075d35) call_video_uplink_pane_g1

0x48bd,	// (0x00078015) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x00082ad1) call_video_uplink_pane_g

0x2dee,	// (0x00076546) video_uplink_pane

0x48c5,	// (0x0007801d) mce_image_pane_g1

0x48cf,	// (0x00078027) mce_image_pane_g2

0x48d7,	// (0x0007802f) mce_image_pane_g3

0x48df,	// (0x00078037) mce_image_pane_g4

0x48e7,	// (0x0007803f) mce_image_pane_g5

0x0004,

0xf37e,	// (0x00082ad6) mce_image_pane_g

0x48ef,	// (0x00078047) control_top_pane_stacon_cp01_ParamLimits

0x48ef,	// (0x00078047) control_top_pane_stacon_cp01

0x48ff,	// (0x00078057) uni_indicator_pane_stacon_cp01_ParamLimits

0x48ff,	// (0x00078057) uni_indicator_pane_stacon_cp01

0x4910,	// (0x00078068) bg_popup_sub_pane_cp03

0x491a,	// (0x00078072) chi_dic_find_pane

0x4922,	// (0x0007807a) listscroll_chi_dic_pane

0x492b,	// (0x00078083) main_pane_chidic_g1

0x493e,	// (0x00078096) chi_dic_find_pane_t1

0x494c,	// (0x000780a4) find_chidic_pane

0x4955,	// (0x000780ad) chi_dic_list_pane_ParamLimits

0x4955,	// (0x000780ad) chi_dic_list_pane

0x4966,	// (0x000780be) scroll_pane_cp020

0x496e,	// (0x000780c6) find_chidic_pane_t1

0x1f6e,	// (0x000756c6) input_focus_pane_cp06

0x497d,	// (0x000780d5) list_chi_dic_pane_ParamLimits

0x497d,	// (0x000780d5) list_chi_dic_pane

0x498f,	// (0x000780e7) list_chi_dic_pane_t1_ParamLimits

0x498f,	// (0x000780e7) list_chi_dic_pane_t1

0x1f6e,	// (0x000756c6) list_highlight_pane_cp020

0x49a2,	// (0x000780fa) bg_cale_heading_pane_g1

0x49aa,	// (0x00078102) bg_cale_heading_pane_g2

0x49b2,	// (0x0007810a) bg_cale_heading_pane_g3

0x49ba,	// (0x00078112) bg_cale_heading_pane_g4

0x49c2,	// (0x0007811a) bg_cale_heading_pane_g5

0x49ca,	// (0x00078122) bg_cale_heading_pane_g6

0x49d2,	// (0x0007812a) bg_cale_heading_pane_g7

0x49da,	// (0x00078132) bg_cale_heading_pane_g8

0x49e2,	// (0x0007813a) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x00082ae1) bg_cale_heading_pane_g

0x49a2,	// (0x000780fa) bg_cale_side_pane_g1

0x49ea,	// (0x00078142) bg_cale_side_pane_g2

0x49f2,	// (0x0007814a) bg_cale_side_pane_g3

0x49fa,	// (0x00078152) bg_cale_side_pane_g4

0x4a02,	// (0x0007815a) bg_cale_side_pane_g5

0x4a0a,	// (0x00078162) bg_cale_side_pane_g6

0x4a12,	// (0x0007816a) bg_cale_side_pane_g7

0x4a1a,	// (0x00078172) bg_cale_side_pane_g8

0x4a22,	// (0x0007817a) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x00082af4) bg_cale_side_pane_g

0x4a2a,	// (0x00078182) popup_call_status_window_ParamLimits

0x4a2a,	// (0x00078182) popup_call_status_window

0x4a71,	// (0x000781c9) stacon_top_pane

0x4a79,	// (0x000781d1) status_pane_ParamLimits

0x4a79,	// (0x000781d1) status_pane

0x4a93,	// (0x000781eb) status_small_pane

0x4a9b,	// (0x000781f3) control_pane

0x1f6e,	// (0x000756c6) stacon_bottom_pane

0x4aa3,	// (0x000781fb) list_single_mce_smart_pane_t1_ParamLimits

0x4aa3,	// (0x000781fb) list_single_mce_smart_pane_t1

0x4ab6,	// (0x0007820e) list_single_mce_smart_pane_t2_ParamLimits

0x4ab6,	// (0x0007820e) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x00082b07) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x00082b07) list_single_mce_smart_pane_t

0x4ade,	// (0x00078236) compass_pane

0x4ae7,	// (0x0007823f) main_location2_pane_t1

0x4afd,	// (0x00078255) main_location2_pane_t2

0x4b13,	// (0x0007826b) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x00082b0c) main_location2_pane_t

0x4b5b,	// (0x000782b3) compass_pane_g1_ParamLimits

0x4b5b,	// (0x000782b3) compass_pane_g1

0x4b67,	// (0x000782bf) compass_pane_t1

0x4b76,	// (0x000782ce) compass_pane_t2

0x0005,

0xf3bd,	// (0x00082b15) compass_pane_t

0x4bbd,	// (0x00078315) text_secondary_cp61

0x4c32,	// (0x0007838a) navi_pane_cams_g5

0x4c9b,	// (0x000783f3) navi_pane_im_t1

0x4ca9,	// (0x00078401) navi_pane_mp_g1_ParamLimits

0x4ca9,	// (0x00078401) navi_pane_mp_g1

0x4cbd,	// (0x00078415) navi_pane_mp_g2_ParamLimits

0x4cbd,	// (0x00078415) navi_pane_mp_g2

0x4cc9,	// (0x00078421) navi_pane_mp_g3_ParamLimits

0x4cc9,	// (0x00078421) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x00082b29) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x00082b29) navi_pane_mp_g

0x4cd5,	// (0x0007842d) navi_pane_mp_t1

0x4ce3,	// (0x0007843b) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x00082b30) navi_pane_mp_t

0x4d8c,	// (0x000784e4) navi_pane_vt_g1

0x4cd5,	// (0x0007842d) navi_pane_vt_t1

0x4d94,	// (0x000784ec) navi_slider_pane

0x2e5d,	// (0x000765b5) zooming_pane

0x4da4,	// (0x000784fc) navi_slider_pane_g1

0xb153,	// (0x0007e8ab) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x00082b37) navi_slider_pane_g

0x4dc8,	// (0x00078520) aid_levels_zoom

0x4dd0,	// (0x00078528) zooming_pane_g1

0x4dd8,	// (0x00078530) zooming_pane_g2

0x4dd8,	// (0x00078530) zooming_pane_g3

0x0002,

0xf3ee,	// (0x00082b46) zooming_pane_g

0x4de0,	// (0x00078538) level_10_zoom

0x4de9,	// (0x00078541) level_11_zoom

0x4df2,	// (0x0007854a) level_1_zoom

0x4dfb,	// (0x00078553) level_2_zoom

0x4e04,	// (0x0007855c) level_3_zoom

0x4e0d,	// (0x00078565) level_4_zoom

0x4e16,	// (0x0007856e) level_5_zoom

0x4e1f,	// (0x00078577) level_6_zoom

0x4e28,	// (0x00078580) level_7_zoom

0x4e31,	// (0x00078589) level_8_zoom

0x4e3a,	// (0x00078592) level_9_zoom

0x4e4b,	// (0x000785a3) popup_phob_thumbnail_window_g1

0x4e53,	// (0x000785ab) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x00082b4d) popup_phob_thumbnail_window_g

0xbd80,	// (0x0007f4d8) level_1_location

0xbd88,	// (0x0007f4e0) level_2_location

0xbd90,	// (0x0007f4e8) level_3_location

0xbd98,	// (0x0007f4f0) level_4_location

0x2e5d,	// (0x000765b5) level_5_location

0x4e5b,	// (0x000785b3) mce_icon_pane_g1

0x4e63,	// (0x000785bb) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x00082b52) mce_icon_pane_g

0x4e6b,	// (0x000785c3) main_mup_pane_g1_ParamLimits

0x4e6b,	// (0x000785c3) main_mup_pane_g1

0x4e81,	// (0x000785d9) main_mup_pane_g2_ParamLimits

0x4e81,	// (0x000785d9) main_mup_pane_g2

0x4e99,	// (0x000785f1) main_mup_pane_g3_ParamLimits

0x4e99,	// (0x000785f1) main_mup_pane_g3

0x4eb1,	// (0x00078609) main_mup_pane_g4_ParamLimits

0x4eb1,	// (0x00078609) main_mup_pane_g4

0x4ec9,	// (0x00078621) main_mup_pane_g5_ParamLimits

0x4ec9,	// (0x00078621) main_mup_pane_g5

0x4ee3,	// (0x0007863b) main_mup_pane_g6_ParamLimits

0x4ee3,	// (0x0007863b) main_mup_pane_g6

0x4efb,	// (0x00078653) main_mup_pane_g7_ParamLimits

0x4efb,	// (0x00078653) main_mup_pane_g7

0x4f13,	// (0x0007866b) main_mup_pane_g8_ParamLimits

0x4f13,	// (0x0007866b) main_mup_pane_g8

0x4f2b,	// (0x00078683) main_mup_pane_g9_ParamLimits

0x4f2b,	// (0x00078683) main_mup_pane_g9

0x4f3f,	// (0x00078697) main_mup_pane_g10_ParamLimits

0x4f3f,	// (0x00078697) main_mup_pane_g10

0x4f53,	// (0x000786ab) main_mup_pane_g11_ParamLimits

0x4f53,	// (0x000786ab) main_mup_pane_g11

0x4f65,	// (0x000786bd) main_mup_pane_g12_ParamLimits

0x4f65,	// (0x000786bd) main_mup_pane_g12

0x4f79,	// (0x000786d1) main_mup_pane_g13_ParamLimits

0x4f79,	// (0x000786d1) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x00082b57) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x00082b57) main_mup_pane_g

0x4f8b,	// (0x000786e3) main_mup_pane_t1_ParamLimits

0x4f8b,	// (0x000786e3) main_mup_pane_t1

0x4fa5,	// (0x000786fd) main_mup_pane_t2_ParamLimits

0x4fa5,	// (0x000786fd) main_mup_pane_t2

0x4fbd,	// (0x00078715) main_mup_pane_t3_ParamLimits

0x4fbd,	// (0x00078715) main_mup_pane_t3

0x4fd5,	// (0x0007872d) main_mup_pane_t4_ParamLimits

0x4fd5,	// (0x0007872d) main_mup_pane_t4

0x4ff3,	// (0x0007874b) main_mup_pane_t5_ParamLimits

0x4ff3,	// (0x0007874b) main_mup_pane_t5

0x5008,	// (0x00078760) main_mup_pane_t6_ParamLimits

0x5008,	// (0x00078760) main_mup_pane_t6

0x0005,

0xf41a,	// (0x00082b72) main_mup_pane_t_ParamLimits

0xf41a,	// (0x00082b72) main_mup_pane_t

0x501a,	// (0x00078772) mup_progress_pane_ParamLimits

0x501a,	// (0x00078772) mup_progress_pane

0x5026,	// (0x0007877e) mup_visualizer_pane_ParamLimits

0x5026,	// (0x0007877e) mup_visualizer_pane

0x504e,	// (0x000787a6) mup_volume_pane_ParamLimits

0x504e,	// (0x000787a6) mup_volume_pane

0x506c,	// (0x000787c4) mup_visualizer_pane_g1_ParamLimits

0x506c,	// (0x000787c4) mup_visualizer_pane_g1

0x506c,	// (0x000787c4) mup_visualizer_pane_g2_ParamLimits

0x506c,	// (0x000787c4) mup_visualizer_pane_g2

0x4b5b,	// (0x000782b3) mup_visualizer_pane_g3_ParamLimits

0x4b5b,	// (0x000782b3) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x00082b7f) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x00082b7f) mup_visualizer_pane_g

0x25dd,	// (0x00075d35) mup_volume_pane_g1

0x5082,	// (0x000787da) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x00082b86) mup_volume_pane_g

0x25dd,	// (0x00075d35) mup_progress_pane_g1

0x508b,	// (0x000787e3) mup_progress_pane_g2

0x5094,	// (0x000787ec) mup_progress_pane_g3

0x0002,

0xf433,	// (0x00082b8b) mup_progress_pane_g

0x1f6e,	// (0x000756c6) bg_popup_window_pane_cp05

0x509d,	// (0x000787f5) heading_pane_cp02_ParamLimits

0x509d,	// (0x000787f5) heading_pane_cp02

0x50b7,	// (0x0007880f) list_popup_blid_pane

0x50bf,	// (0x00078817) list_blid_sat_info_pane_ParamLimits

0x50bf,	// (0x00078817) list_blid_sat_info_pane

0x50d2,	// (0x0007882a) list_blid_sat_info_pane_g1

0x50da,	// (0x00078832) list_blid_sat_info_pane_t1

0x51ba,	// (0x00078912) mup_equalizer_pane_ParamLimits

0x51ba,	// (0x00078912) mup_equalizer_pane

0x51d3,	// (0x0007892b) mup_equalizer_pane_cp1_ParamLimits

0x51d3,	// (0x0007892b) mup_equalizer_pane_cp1

0x51ec,	// (0x00078944) mup_equalizer_pane_cp2_ParamLimits

0x51ec,	// (0x00078944) mup_equalizer_pane_cp2

0x5205,	// (0x0007895d) mup_equalizer_pane_cp3_ParamLimits

0x5205,	// (0x0007895d) mup_equalizer_pane_cp3

0x521e,	// (0x00078976) mup_equalizer_pane_cp4_ParamLimits

0x521e,	// (0x00078976) mup_equalizer_pane_cp4

0x5237,	// (0x0007898f) mup_equalizer_pane_cp5

0x5249,	// (0x000789a1) mup_equalizer_pane_cp6

0x525b,	// (0x000789b3) mup_equalizer_pane_cp7

0xbc5e,	// (0x0007f3b6) bg_popup_call_poc_act_pane_g9

0xbc66,	// (0x0007f3be) bg_popup_call_poc_act_pane_g10

0xbc6e,	// (0x0007f3c6) bg_popup_call_poc_act_pane_g11

0x000a,

0x21c9,	// (0x00075921) mup_scale_pane

0x25dd,	// (0x00075d35) mup_scale_pane_g1

0x526f,	// (0x000789c7) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x00082ba7) mup_scale_pane_g

0x52a5,	// (0x000789fd) msg_data_pane

0x52ad,	// (0x00078a05) scroll_pane_cp017

0x0d24,	// (0x0007447c) bg_list_pane_cp04_ParamLimits

0x0d24,	// (0x0007447c) bg_list_pane_cp04

0x52b5,	// (0x00078a0d) msg_data_pane_g1

0x48cf,	// (0x00078027) msg_data_pane_g2

0x48d7,	// (0x0007802f) msg_data_pane_g3

0x52bd,	// (0x00078a15) msg_data_pane_g4

0x48e7,	// (0x0007803f) msg_data_pane_g5

0x4e5b,	// (0x000785b3) msg_data_pane_g6

0x52c5,	// (0x00078a1d) msg_data_pane_g7

0x0006,

0xf45e,	// (0x00082bb6) msg_data_pane_g

0x0d3c,	// (0x00074494) msg_text_pane_ParamLimits

0x0d3c,	// (0x00074494) msg_text_pane

0x52cd,	// (0x00078a25) qrid_highlight_pane_cp011_ParamLimits

0x52cd,	// (0x00078a25) qrid_highlight_pane_cp011

0x1f6e,	// (0x000756c6) msg_body_pane

0x1f6e,	// (0x000756c6) msg_header_pane

0x52ec,	// (0x00078a44) input_focus_pane_cp07

0xb16d,	// (0x0007e8c5) msg_header_pane_t1_ParamLimits

0xb16d,	// (0x0007e8c5) msg_header_pane_t1

0x0d6d,	// (0x000744c5) msg_header_pane_t2_ParamLimits

0x0d6d,	// (0x000744c5) msg_header_pane_t2

0x0001,

0xf472,	// (0x00082bca) msg_header_pane_t_ParamLimits

0xf472,	// (0x00082bca) msg_header_pane_t

0x5301,	// (0x00078a59) msg_body_pane_g1

0x0d7f,	// (0x000744d7) msg_body_pane_t1_ParamLimits

0x0d7f,	// (0x000744d7) msg_body_pane_t1

0x0daa,	// (0x00074502) msg_body_pane_t2_ParamLimits

0x0daa,	// (0x00074502) msg_body_pane_t2

0x0dbc,	// (0x00074514) msg_body_pane_t3_ParamLimits

0x0dbc,	// (0x00074514) msg_body_pane_t3

0x0002,

0xf477,	// (0x00082bcf) msg_body_pane_t_ParamLimits

0xf477,	// (0x00082bcf) msg_body_pane_t

0x533f,	// (0x00078a97) main_viewer_pane_g1_ParamLimits

0x533f,	// (0x00078a97) main_viewer_pane_g1

0x534b,	// (0x00078aa3) main_viewer_pane_g2_ParamLimits

0x534b,	// (0x00078aa3) main_viewer_pane_g2

0x5357,	// (0x00078aaf) main_viewer_pane_g3_ParamLimits

0x5357,	// (0x00078aaf) main_viewer_pane_g3

0x5366,	// (0x00078abe) main_viewer_pane_g4_ParamLimits

0x5366,	// (0x00078abe) main_viewer_pane_g4

0xb197,	// (0x0007e8ef) main_viewer_pane_g5_ParamLimits

0xb197,	// (0x0007e8ef) main_viewer_pane_g5

0xb197,	// (0x0007e8ef) main_viewer_pane_g7_ParamLimits

0xb197,	// (0x0007e8ef) main_viewer_pane_g7

0xb1a9,	// (0x0007e901) main_viewer_pane_g8_ParamLimits

0xb1a9,	// (0x0007e901) main_viewer_pane_g8

0x0007,

0xf487,	// (0x00082bdf) main_viewer_pane_g_ParamLimits

0xf487,	// (0x00082bdf) main_viewer_pane_g

0x5375,	// (0x00078acd) viewer_content_pane_ParamLimits

0x5375,	// (0x00078acd) viewer_content_pane

0x53a8,	// (0x00078b00) main_postcard_pane_g1_ParamLimits

0x53a8,	// (0x00078b00) main_postcard_pane_g1

0x53bc,	// (0x00078b14) main_postcard_pane_g2_ParamLimits

0x53bc,	// (0x00078b14) main_postcard_pane_g2

0x53d0,	// (0x00078b28) main_postcard_pane_g3_ParamLimits

0x53d0,	// (0x00078b28) main_postcard_pane_g3

0x0005,

0xf498,	// (0x00082bf0) main_postcard_pane_g_ParamLimits

0xf498,	// (0x00082bf0) main_postcard_pane_g

0x53e3,	// (0x00078b3b) main_postcard_pane_g4

0xbeda,	// (0x0007f632) smil_status_volume_pane_g2

0x541e,	// (0x00078b76) postcard_pane_ParamLimits

0x541e,	// (0x00078b76) postcard_pane

0x545e,	// (0x00078bb6) postcard_pane_g1_ParamLimits

0x545e,	// (0x00078bb6) postcard_pane_g1

0x546c,	// (0x00078bc4) postcard_pane_g2_ParamLimits

0x546c,	// (0x00078bc4) postcard_pane_g2

0x5478,	// (0x00078bd0) postcard_pane_g3_ParamLimits

0x5478,	// (0x00078bd0) postcard_pane_g3

0x5484,	// (0x00078bdc) postcard_pane_g4_ParamLimits

0x5484,	// (0x00078bdc) postcard_pane_g4

0x5492,	// (0x00078bea) postcard_pane_g5_ParamLimits

0x5492,	// (0x00078bea) postcard_pane_g5

0x54a7,	// (0x00078bff) postcard_pane_g6_ParamLimits

0x54a7,	// (0x00078bff) postcard_pane_g6

0x545e,	// (0x00078bb6) postcard_pane_g7_ParamLimits

0x545e,	// (0x00078bb6) postcard_pane_g7

0x0006,

0xf4a5,	// (0x00082bfd) postcard_pane_g_ParamLimits

0xf4a5,	// (0x00082bfd) postcard_pane_g

0x54bb,	// (0x00078c13) main_mp2_pane_g1_ParamLimits

0x54bb,	// (0x00078c13) main_mp2_pane_g1

0x54c7,	// (0x00078c1f) main_mp2_pane_g2_ParamLimits

0x54c7,	// (0x00078c1f) main_mp2_pane_g2

0x54d3,	// (0x00078c2b) main_mp2_pane_g3_ParamLimits

0x54d3,	// (0x00078c2b) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x00082c0c) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x00082c0c) main_mp2_pane_g

0x54df,	// (0x00078c37) main_mp2_pane_t1_ParamLimits

0x54df,	// (0x00078c37) main_mp2_pane_t1

0x54f4,	// (0x00078c4c) main_mp2_pane_t2_ParamLimits

0x54f4,	// (0x00078c4c) main_mp2_pane_t2

0x5506,	// (0x00078c5e) main_mp2_pane_t3_ParamLimits

0x5506,	// (0x00078c5e) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x00082c13) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x00082c13) main_mp2_pane_t

0x5518,	// (0x00078c70) pec_content_pane_ParamLimits

0x5518,	// (0x00078c70) pec_content_pane

0x36b5,	// (0x00076e0d) scroll_pane_cp015

0x552a,	// (0x00078c82) pec_attribute_pane_ParamLimits

0x552a,	// (0x00078c82) pec_attribute_pane

0x553a,	// (0x00078c92) pec_content_pane_g1_ParamLimits

0x553a,	// (0x00078c92) pec_content_pane_g1

0x5546,	// (0x00078c9e) pec_content_pane_t1_ParamLimits

0x5546,	// (0x00078c9e) pec_content_pane_t1

0x5558,	// (0x00078cb0) pec_content_pane_t2_ParamLimits

0x5558,	// (0x00078cb0) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x00082c1a) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x00082c1a) pec_content_pane_t

0x556a,	// (0x00078cc2) list_single_graphic_pane_cp01_ParamLimits

0x556a,	// (0x00078cc2) list_single_graphic_pane_cp01

0x21c9,	// (0x00075921) bg_popup_sub_pane_cp04

0x557f,	// (0x00078cd7) popup_mup_playback_window_g1

0x558b,	// (0x00078ce3) popup_mup_playback_window_t1

0x55a0,	// (0x00078cf8) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x00082c1f) popup_mup_playback_window_t

0x55f5,	// (0x00078d4d) main_image_pane_g1_ParamLimits

0x55f5,	// (0x00078d4d) main_image_pane_g1

0x56d0,	// (0x00078e28) scroll_pane_cp018_ParamLimits

0x56d0,	// (0x00078e28) scroll_pane_cp018

0x56e8,	// (0x00078e40) scroll_pane_cp016_ParamLimits

0x56e8,	// (0x00078e40) scroll_pane_cp016

0x571c,	// (0x00078e74) smil2_image_pane_ParamLimits

0x571c,	// (0x00078e74) smil2_image_pane

0x5744,	// (0x00078e9c) smil2_root_pane_ParamLimits

0x5744,	// (0x00078e9c) smil2_root_pane

0x577c,	// (0x00078ed4) smil2_text_pane_ParamLimits

0x577c,	// (0x00078ed4) smil2_text_pane

0x1f6e,	// (0x000756c6) bg_list_pane_cp06

0x57f0,	// (0x00078f48) grid_radio_pane

0x1f6e,	// (0x000756c6) bg_popup_window_pane_cp06

0x57f8,	// (0x00078f50) main_fmradio_pane_t1

0x47ce,	// (0x00077f26) heading_pane_cp04

0x5806,	// (0x00078f5e) main_fmradio_pane_t2

0xbcb6,	// (0x0007f40e) popup_cale_lunar_info_window_g1

0x5814,	// (0x00078f6c) main_fmradio_pane_t3

0xbcbe,	// (0x0007f416) popup_cale_lunar_info_window_g2

0x5822,	// (0x00078f7a) main_fmradio_pane_t4

0x0001,

0x5830,	// (0x00078f88) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x00082d0d) popup_cale_lunar_info_window_g

0xf4dc,	// (0x00082c34) main_fmradio_pane_t

0x583e,	// (0x00078f96) wait_bar_pane_cp03

0x5846,	// (0x00078f9e) cell_fmradio_pane_ParamLimits

0x5846,	// (0x00078f9e) cell_fmradio_pane

0x545e,	// (0x00078bb6) cell_fmradio_pane_g1_ParamLimits

0x545e,	// (0x00078bb6) cell_fmradio_pane_g1

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp011

0x5859,	// (0x00078fb1) poc_content_pane_ParamLimits

0x5859,	// (0x00078fb1) poc_content_pane

0x586c,	// (0x00078fc4) scroll_pane_cp019

0x5874,	// (0x00078fcc) popup_call_poc_act_window_ParamLimits

0x5874,	// (0x00078fcc) popup_call_poc_act_window

0x5894,	// (0x00078fec) popup_call_poc_inact_window_ParamLimits

0x5894,	// (0x00078fec) popup_call_poc_inact_window

0xf579,	// (0x00082cd1) bg_popup_call_poc_act_pane_g

0xbc76,	// (0x0007f3ce) bg_popup_call_poc_inact_pane_g1

0xbc7e,	// (0x0007f3d6) bg_popup_call_poc_inact_pane_g2

0x58a9,	// (0x00079001) popup_call_poc_act_window_g2

0xbc86,	// (0x0007f3de) bg_popup_call_poc_inact_pane_g3

0xbc06,	// (0x0007f35e) bg_popup_call_poc_inact_pane_g4

0xbc8e,	// (0x0007f3e6) bg_popup_call_poc_inact_pane_g5

0x58b1,	// (0x00079009) popup_call_poc_act_window_t1_ParamLimits

0x58b1,	// (0x00079009) popup_call_poc_act_window_t1

0x58d9,	// (0x00079031) popup_call_poc_act_window_t2_ParamLimits

0x58d9,	// (0x00079031) popup_call_poc_act_window_t2

0x5901,	// (0x00079059) popup_call_poc_act_window_t3_ParamLimits

0x5901,	// (0x00079059) popup_call_poc_act_window_t3

0x5929,	// (0x00079081) popup_call_poc_act_window_t4_ParamLimits

0x5929,	// (0x00079081) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x00082c3f) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x00082c3f) popup_call_poc_act_window_t

0xbc96,	// (0x0007f3ee) bg_popup_call_poc_inact_pane_g6

0xbc9e,	// (0x0007f3f6) bg_popup_call_poc_inact_pane_g7

0xbca6,	// (0x0007f3fe) bg_popup_call_poc_inact_pane_g8

0x593b,	// (0x00079093) popup_call_poc_inact_window_g2

0xbcae,	// (0x0007f406) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x00082ce8) bg_popup_call_poc_inact_pane_g

0x5943,	// (0x0007909b) popup_call_poc_inact_window_t1_ParamLimits

0x5943,	// (0x0007909b) popup_call_poc_inact_window_t1

0x5958,	// (0x000790b0) popup_call_poc_inact_window_t2_ParamLimits

0x5958,	// (0x000790b0) popup_call_poc_inact_window_t2

0x596d,	// (0x000790c5) popup_call_poc_inact_window_t3_ParamLimits

0x596d,	// (0x000790c5) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x00082c48) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x00082c48) popup_call_poc_inact_window_t

0xbe4d,	// (0x0007f5a5) context_pane_ParamLimits

0x6433,	// (0x00079b8b) signal_pane_ParamLimits

0x2e5d,	// (0x000765b5) main_call2_pane

0xbe26,	// (0x0007f57e) popup_phob_thumbnail2_window_ParamLimits

0xbe26,	// (0x0007f57e) popup_phob_thumbnail2_window

0xb17f,	// (0x0007e8d7) aid_hotspot_pointer_arrow_pane

0xb187,	// (0x0007e8df) aid_hotspot_pointer_hand_pane

0x600a,	// (0x00079762) phob_pre_status_pane_g5

0x2ed8,	// (0x00076630) cams_zoom_pane_ParamLimits

0x2ee7,	// (0x0007663f) image_vga_pane_ParamLimits

0x2eff,	// (0x00076657) main_camera_pane_g1_ParamLimits

0x2f0f,	// (0x00076667) main_camera_pane_g2_ParamLimits

0x2f1f,	// (0x00076677) main_camera_pane_g3_ParamLimits

0x2f2f,	// (0x00076687) main_camera_pane_g4_ParamLimits

0x2f3f,	// (0x00076697) main_camera_pane_g5_ParamLimits

0x2f4f,	// (0x000766a7) main_camera_pane_g6_ParamLimits

0x2f5f,	// (0x000766b7) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x00082947) main_camera_pane_g_ParamLimits

0x2f7b,	// (0x000766d3) main_camera_pane_t1_ParamLimits

0x2f91,	// (0x000766e9) main_camera_pane_t2_ParamLimits

0xf200,	// (0x00082958) main_camera_pane_t_ParamLimits

0x21c9,	// (0x00075921) bg_popup_preview_window_pane_cp01_ParamLimits

0x21c9,	// (0x00075921) bg_popup_preview_window_pane_cp01

0x5982,	// (0x000790da) popup_phob_thumbnail2_window_g1_ParamLimits

0x5982,	// (0x000790da) popup_phob_thumbnail2_window_g1

0x1f6e,	// (0x000756c6) call2_cli_visual_pane

0x59a5,	// (0x000790fd) popup_call2_audio_conf_window_ParamLimits

0x59a5,	// (0x000790fd) popup_call2_audio_conf_window

0x59c3,	// (0x0007911b) popup_call2_audio_first_window_ParamLimits

0x59c3,	// (0x0007911b) popup_call2_audio_first_window

0x5a39,	// (0x00079191) popup_call2_audio_in_window_ParamLimits

0x5a39,	// (0x00079191) popup_call2_audio_in_window

0x5a6d,	// (0x000791c5) popup_call2_audio_out_window_ParamLimits

0x5a6d,	// (0x000791c5) popup_call2_audio_out_window

0x5abf,	// (0x00079217) popup_call2_audio_second_window_ParamLimits

0x5abf,	// (0x00079217) popup_call2_audio_second_window

0x5b11,	// (0x00079269) popup_call2_audio_wait_window_ParamLimits

0x5b11,	// (0x00079269) popup_call2_audio_wait_window

0x1f6e,	// (0x000756c6) bg_popup_call2_act_pane_cp03

0x21ab,	// (0x00075903) list_conf_pane_cp

0x5b49,	// (0x000792a1) popup_call2_audio_conf_window_t1

0x484d,	// (0x00077fa5) list_single_graphic_popup_conf2_pane_ParamLimits

0x484d,	// (0x00077fa5) list_single_graphic_popup_conf2_pane

0x4860,	// (0x00077fb8) list_highlight_pane_cp04

0x5b57,	// (0x000792af) list_single_graphic_popup_conf2_pane_g1

0x4871,	// (0x00077fc9) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x00082c4f) list_single_graphic_popup_conf2_pane_g

0x5b5f,	// (0x000792b7) list_single_graphic_popup_conf2_pane_t1

0x5b6d,	// (0x000792c5) bg_popup_call2_act_pane_cp01_ParamLimits

0x5b6d,	// (0x000792c5) bg_popup_call2_act_pane_cp01

0x5bf7,	// (0x0007934f) call_type_pane_cp05_ParamLimits

0x5bf7,	// (0x0007934f) call_type_pane_cp05

0x5c4b,	// (0x000793a3) popup_call2_audio_second_window_g1_ParamLimits

0x5c4b,	// (0x000793a3) popup_call2_audio_second_window_g1

0x5c9f,	// (0x000793f7) popup_call2_audio_second_window_g2_ParamLimits

0x5c9f,	// (0x000793f7) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x00082c54) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x00082c54) popup_call2_audio_second_window_g

0x5d04,	// (0x0007945c) popup_call2_audio_second_window_t1_ParamLimits

0x5d04,	// (0x0007945c) popup_call2_audio_second_window_t1

0x5dbf,	// (0x00079517) popup_call2_audio_second_window_t2_ParamLimits

0x5dbf,	// (0x00079517) popup_call2_audio_second_window_t2

0x5e12,	// (0x0007956a) popup_call2_audio_second_window_t3_ParamLimits

0x5e12,	// (0x0007956a) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x00082c5b) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x00082c5b) popup_call2_audio_second_window_t

0x1f6e,	// (0x000756c6) bg_popup_call2_in_pane_cp02

0x1f78,	// (0x000756d0) call_type_pane_cp04

0x1f80,	// (0x000756d8) popup_call2_audio_wait_window_g1

0x1f88,	// (0x000756e0) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x00082836) popup_call2_audio_wait_window_g

0x1f90,	// (0x000756e8) popup_call2_audio_wait_window_t3

0xb1c1,	// (0x0007e919) bg_popup_call2_act_pane_ParamLimits

0xb1c1,	// (0x0007e919) bg_popup_call2_act_pane

0xb281,	// (0x0007e9d9) call_type_pane_cp03_ParamLimits

0xb281,	// (0x0007e9d9) call_type_pane_cp03

0xb2e5,	// (0x0007ea3d) popup_call2_audio_first_window_g1_ParamLimits

0xb2e5,	// (0x0007ea3d) popup_call2_audio_first_window_g1

0xb355,	// (0x0007eaad) popup_call2_audio_first_window_g2_ParamLimits

0xb355,	// (0x0007eaad) popup_call2_audio_first_window_g2

0x506c,	// (0x000787c4) popup_call2_audio_first_window_g3_ParamLimits

0x506c,	// (0x000787c4) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x00082c64) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x00082c64) popup_call2_audio_first_window_g

0xb433,	// (0x0007eb8b) popup_call2_audio_first_window_t1_ParamLimits

0xb433,	// (0x0007eb8b) popup_call2_audio_first_window_t1

0xb536,	// (0x0007ec8e) popup_call2_audio_first_window_t4_ParamLimits

0xb536,	// (0x0007ec8e) popup_call2_audio_first_window_t4

0xb619,	// (0x0007ed71) popup_call2_audio_first_window_t5_ParamLimits

0xb619,	// (0x0007ed71) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x00082c6f) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x00082c6f) popup_call2_audio_first_window_t

0x21c1,	// (0x00075919) bg_popup_call2_act_pane_g1

0xbcc6,	// (0x0007f41e) popup_cale_lunar_info_window_t1

0xbcd4,	// (0x0007f42c) popup_cale_lunar_info_window_t2

0xbce2,	// (0x0007f43a) popup_cale_lunar_info_window_t3

0x1f6e,	// (0x000756c6) bg_popup_call2_bubble_pane

0xb71a,	// (0x0007ee72) bg_popup_call2_in_pane_cp01_ParamLimits

0xb71a,	// (0x0007ee72) bg_popup_call2_in_pane_cp01

0x1c26,	// (0x0007537e) call_type_pane_cp02

0xb762,	// (0x0007eeba) popup_call2_audio_out_window_g1_ParamLimits

0xb762,	// (0x0007eeba) popup_call2_audio_out_window_g1

0xb78e,	// (0x0007eee6) popup_call2_audio_out_window_g2_ParamLimits

0xb78e,	// (0x0007eee6) popup_call2_audio_out_window_g2

0xb7b6,	// (0x0007ef0e) popup_call2_audio_out_window_g3_ParamLimits

0xb7b6,	// (0x0007ef0e) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x00082c78) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x00082c78) popup_call2_audio_out_window_g

0xb7f1,	// (0x0007ef49) popup_call2_audio_out_window_t1_ParamLimits

0xb7f1,	// (0x0007ef49) popup_call2_audio_out_window_t1

0xb850,	// (0x0007efa8) popup_call2_audio_out_window_t2_ParamLimits

0xb850,	// (0x0007efa8) popup_call2_audio_out_window_t2

0xb8a4,	// (0x0007effc) popup_call2_audio_out_window_t3_ParamLimits

0xb8a4,	// (0x0007effc) popup_call2_audio_out_window_t3

0xb8ba,	// (0x0007f012) popup_call2_audio_out_window_t4_ParamLimits

0xb8ba,	// (0x0007f012) popup_call2_audio_out_window_t4

0xb8d0,	// (0x0007f028) popup_call2_audio_out_window_t5_ParamLimits

0xb8d0,	// (0x0007f028) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x00082c81) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x00082c81) popup_call2_audio_out_window_t

0xb934,	// (0x0007f08c) bg_popup_call2_in_pane_ParamLimits

0xb934,	// (0x0007f08c) bg_popup_call2_in_pane

0xb990,	// (0x0007f0e8) popup_call2_audio_in_window_g1_ParamLimits

0xb990,	// (0x0007f0e8) popup_call2_audio_in_window_g1

0xb9c8,	// (0x0007f120) popup_call2_audio_in_window_g2_ParamLimits

0xb9c8,	// (0x0007f120) popup_call2_audio_in_window_g2

0xba00,	// (0x0007f158) popup_call2_audio_in_window_g3_ParamLimits

0xba00,	// (0x0007f158) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x00082c8e) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x00082c8e) popup_call2_audio_in_window_g

0xba58,	// (0x0007f1b0) popup_call2_audio_in_window_t1_ParamLimits

0xba58,	// (0x0007f1b0) popup_call2_audio_in_window_t1

0xbad8,	// (0x0007f230) popup_call2_audio_in_window_t2_ParamLimits

0xbad8,	// (0x0007f230) popup_call2_audio_in_window_t2

0xbb58,	// (0x0007f2b0) popup_call2_audio_in_window_t3_ParamLimits

0xbb58,	// (0x0007f2b0) popup_call2_audio_in_window_t3

0xbb72,	// (0x0007f2ca) popup_call2_audio_in_window_t4_ParamLimits

0xbb72,	// (0x0007f2ca) popup_call2_audio_in_window_t4

0xbb84,	// (0x0007f2dc) popup_call2_audio_in_window_t5_ParamLimits

0xbb84,	// (0x0007f2dc) popup_call2_audio_in_window_t5

0xbb99,	// (0x0007f2f1) popup_call2_audio_in_window_t6_ParamLimits

0xbb99,	// (0x0007f2f1) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x00082c97) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x00082c97) popup_call2_audio_in_window_t

0x21c1,	// (0x00075919) bg_popup_call2_in_pane_g1

0xbcf0,	// (0x0007f448) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x00082d12) popup_cale_lunar_info_window_t

0x21c9,	// (0x00075921) bg_popup_call2_rect_pane_ParamLimits

0x21c9,	// (0x00075921) bg_popup_call2_rect_pane

0x1f6e,	// (0x000756c6) call2_cli_visual_graphic_pane

0x1f6e,	// (0x000756c6) call2_cli_visual_text_pane

0xbeed,	// (0x0007f645) smil_status_volume_pane_g3

0x0002,

0x25dd,	// (0x00075d35) call2_cli_visual_graphic_pane_g1

0x25dd,	// (0x00075d35) call2_cli_visual_graphic_pane_g2

0x25dd,	// (0x00075d35) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x00082ca4) call2_cli_visual_graphic_pane_g

0xbbae,	// (0x0007f306) bg_popup_call2_rect_pane_g1

0x2720,	// (0x00075e78) bg_popup_call2_rect_pane_g2

0xbbb6,	// (0x0007f30e) bg_popup_call2_rect_pane_g3

0xbbbe,	// (0x0007f316) bg_popup_call2_rect_pane_g4

0xbbc6,	// (0x0007f31e) bg_popup_call2_rect_pane_g5

0xbbce,	// (0x0007f326) bg_popup_call2_rect_pane_g6

0xbbd6,	// (0x0007f32e) bg_popup_call2_rect_pane_g7

0xbbde,	// (0x0007f336) bg_popup_call2_rect_pane_g8

0xbbe6,	// (0x0007f33e) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x00082cab) bg_popup_call2_rect_pane_g

0xbbee,	// (0x0007f346) bg_popup_call2_bubble_pane_g1

0xbbf6,	// (0x0007f34e) bg_popup_call2_bubble_pane_g2

0xbbfe,	// (0x0007f356) bg_popup_call2_bubble_pane_g3

0xbc06,	// (0x0007f35e) bg_popup_call2_bubble_pane_g4

0xbc0e,	// (0x0007f366) bg_popup_call2_bubble_pane_g5

0xbc16,	// (0x0007f36e) bg_popup_call2_bubble_pane_g6

0xbc1e,	// (0x0007f376) bg_popup_call2_bubble_pane_g7

0xbc26,	// (0x0007f37e) bg_popup_call2_bubble_pane_g8

0xbc2e,	// (0x0007f386) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x00082cbe) bg_popup_call2_bubble_pane_g

0x27ad,	// (0x00075f05) aid_cale_week_size_cell_pane

0x2fa7,	// (0x000766ff) aid_cams_cif_uncrop_pane_ParamLimits

0x2fa7,	// (0x000766ff) aid_cams_cif_uncrop_pane

0x3186,	// (0x000768de) aid_cams_size_cell_ParamLimits

0x3186,	// (0x000768de) aid_cams_size_cell

0x319a,	// (0x000768f2) grid_cams_pane_ParamLimits

0x31af,	// (0x00076907) linegrid_cams_pane_ParamLimits

0x32e0,	// (0x00076a38) call_video_pane_t1

0x32fa,	// (0x00076a52) call_video_pane_t2

0x0001,

0xf253,	// (0x000829ab) call_video_pane_t

0x38f1,	// (0x00077049) aid_cale_month_size_cell_pane_ParamLimits

0x38f1,	// (0x00077049) aid_cale_month_size_cell_pane

0xf603,	// (0x00082d5b) smil_status_volume_pane_g

0xbefa,	// (0x0007f652) volume_smil_pane_ParamLimits

0xaf73,	// (0x0007e6cb) aid_popup2_width_pane

0x2678,	// (0x00075dd0) cell_qdial_pane_g4_ParamLimits

0x2678,	// (0x00075dd0) cell_qdial_pane_g4

0x4b3b,	// (0x00078293) aid_blid_cardinal_pane_ParamLimits

0x4b47,	// (0x0007829f) aid_blid_destination_pane_ParamLimits

0x4b47,	// (0x0007829f) aid_blid_destination_pane

0x21c9,	// (0x00075921) bg_popup_call_poc_act_pane_ParamLimits

0x21c9,	// (0x00075921) bg_popup_call_poc_act_pane

0x21c9,	// (0x00075921) bg_popup_call_poc_inact_pane_ParamLimits

0x21c9,	// (0x00075921) bg_popup_call_poc_inact_pane

0xbc36,	// (0x0007f38e) bg_popup_call_poc_act_pane_g1

0xbc3e,	// (0x0007f396) bg_popup_call_poc_act_pane_g2

0xbc46,	// (0x0007f39e) bg_popup_call_poc_act_pane_g3

0xbc06,	// (0x0007f35e) bg_popup_call_poc_act_pane_g4

0xbc0e,	// (0x0007f366) bg_popup_call_poc_act_pane_g5

0xbc4e,	// (0x0007f3a6) bg_popup_call_poc_act_pane_g6

0xbc1e,	// (0x0007f376) bg_popup_call_poc_act_pane_g7

0xbc56,	// (0x0007f3ae) bg_popup_call_poc_act_pane_g8

0x1f6e,	// (0x000756c6) main_usb_pane

0xbe05,	// (0x0007f55d) popup_cale_lunar_info_window

0x359d,	// (0x00076cf5) im_reading_pane_t1_ParamLimits

0x35d3,	// (0x00076d2b) list_im_pane_ParamLimits

0x35e4,	// (0x00076d3c) scroll_pane_cp07_ParamLimits

0x1f6e,	// (0x000756c6) grid_highlight_pane_cp012

0x21c9,	// (0x00075921) mup_scale_pane_ParamLimits

0x545e,	// (0x00078bb6) main_usb_pane_g1_ParamLimits

0x545e,	// (0x00078bb6) main_usb_pane_g1

0x5f27,	// (0x0007967f) main_usb_pane_g2_ParamLimits

0x5f27,	// (0x0007967f) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x00082cfb) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x00082cfb) main_usb_pane_g

0x5f3b,	// (0x00079693) main_usb_pane_t1_ParamLimits

0x5f3b,	// (0x00079693) main_usb_pane_t1

0x5f4d,	// (0x000796a5) main_usb_pane_t2_ParamLimits

0x5f4d,	// (0x000796a5) main_usb_pane_t2

0x5f5f,	// (0x000796b7) main_usb_pane_t3_ParamLimits

0x5f5f,	// (0x000796b7) main_usb_pane_t3

0x5f71,	// (0x000796c9) main_usb_pane_t4_ParamLimits

0x5f71,	// (0x000796c9) main_usb_pane_t4

0x5f83,	// (0x000796db) main_usb_pane_t5_ParamLimits

0x5f83,	// (0x000796db) main_usb_pane_t5

0x5f95,	// (0x000796ed) main_usb_pane_t6_ParamLimits

0x5f95,	// (0x000796ed) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x00082d00) main_usb_pane_t_ParamLimits

0x4ad5,	// (0x0007822d) aid_text_placing

0x4ae7,	// (0x0007823f) main_location2_pane_t1_ParamLimits

0x4afd,	// (0x00078255) main_location2_pane_t2_ParamLimits

0x4b13,	// (0x0007826b) main_location2_pane_t3_ParamLimits

0x4b29,	// (0x00078281) main_location2_pane_t4_ParamLimits

0x4b29,	// (0x00078281) main_location2_pane_t4

0xf3b4,	// (0x00082b0c) main_location2_pane_t_ParamLimits

0x2293,	// (0x000759eb) find_pinb_pane_g2_ParamLimits

0x2293,	// (0x000759eb) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0008285c) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0008285c) find_pinb_pane_g

0x229f,	// (0x000759f7) find_pinb_pane_t1_ParamLimits

0x22b1,	// (0x00075a09) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x00082861) find_pinb_pane_t_ParamLimits

0x1f6e,	// (0x000756c6) main_call3_pane

0x3d2b,	// (0x00077483) cale_month_day_heading_pane_t1_ParamLimits

0x3db1,	// (0x00077509) cale_month_day_heading_pane_t2_ParamLimits

0x3e42,	// (0x0007759a) cale_month_day_heading_pane_t3_ParamLimits

0x3ed3,	// (0x0007762b) cale_month_day_heading_pane_t4_ParamLimits

0x3f64,	// (0x000776bc) cale_month_day_heading_pane_t5_ParamLimits

0x3ff5,	// (0x0007774d) cale_month_day_heading_pane_t6_ParamLimits

0x4086,	// (0x000777de) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000829e3) cale_month_day_heading_pane_t_ParamLimits

0x42ec,	// (0x00077a44) smil_status_volume_pane

0x543a,	// (0x00078b92) postcard_address_pane_ParamLimits

0x543a,	// (0x00078b92) postcard_address_pane

0x544c,	// (0x00078ba4) postcard_message_pane_ParamLimits

0x544c,	// (0x00078ba4) postcard_message_pane

0x5f05,	// (0x0007965d) call2_cli_visual_pane_t1_ParamLimits

0x5f05,	// (0x0007965d) call2_cli_visual_pane_t1

0x664f,	// (0x00079da7) postcard_message_pane_t1_ParamLimits

0x664f,	// (0x00079da7) postcard_message_pane_t1

0x6638,	// (0x00079d90) postcard_address_pane_t1_ParamLimits

0x6638,	// (0x00079d90) postcard_address_pane_t1

0x6626,	// (0x00079d7e) popup_call3_audio_in_window_ParamLimits

0x6626,	// (0x00079d7e) popup_call3_audio_in_window

0x64b5,	// (0x00079c0d) bg_popup_call3_in_pane_ParamLimits

0x64b5,	// (0x00079c0d) bg_popup_call3_in_pane

0x6527,	// (0x00079c7f) popup_call3_audio_in_window_g1_ParamLimits

0x6527,	// (0x00079c7f) popup_call3_audio_in_window_g1

0x6547,	// (0x00079c9f) popup_call3_audio_in_window_g2_ParamLimits

0x6547,	// (0x00079c9f) popup_call3_audio_in_window_g2

0x6567,	// (0x00079cbf) popup_call3_audio_in_window_g3_ParamLimits

0x6567,	// (0x00079cbf) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x00082d62) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x00082d62) popup_call3_audio_in_window_g

0x6598,	// (0x00079cf0) popup_call3_audio_in_window_t1_ParamLimits

0x6598,	// (0x00079cf0) popup_call3_audio_in_window_t1

0x65d6,	// (0x00079d2e) popup_call3_audio_in_window_t2_ParamLimits

0x65d6,	// (0x00079d2e) popup_call3_audio_in_window_t2

0x6614,	// (0x00079d6c) popup_call3_audio_in_window_t3_ParamLimits

0x6614,	// (0x00079d6c) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x00082d6b) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x00082d6b) popup_call3_audio_in_window_t

0x2e5d,	// (0x000765b5) bg_popup_call3_rect_pane

0xbbae,	// (0x0007f306) bg_popup_call3_rect_pane_g1

0x2720,	// (0x00075e78) bg_popup_call3_rect_pane_g2

0xbbb6,	// (0x0007f30e) bg_popup_call3_rect_pane_g3

0xbbbe,	// (0x0007f316) bg_popup_call3_rect_pane_g4

0xbbc6,	// (0x0007f31e) bg_popup_call3_rect_pane_g5

0xbbce,	// (0x0007f326) bg_popup_call3_rect_pane_g6

0xbbd6,	// (0x0007f32e) bg_popup_call3_rect_pane_g7

0x5064,	// (0x000787bc) mup_visualizer_osc_pane

0x507a,	// (0x000787d2) mup_visualizer_spec_pane

0x64e5,	// (0x00079c3d) call3_video_qcif_pane_ParamLimits

0x64e5,	// (0x00079c3d) call3_video_qcif_pane

0x64f6,	// (0x00079c4e) call3_video_qcif_uncrop_pane_ParamLimits

0x64f6,	// (0x00079c4e) call3_video_qcif_uncrop_pane

0x6502,	// (0x00079c5a) call3_video_subqcif_pane_ParamLimits

0x6502,	// (0x00079c5a) call3_video_subqcif_pane

0x6516,	// (0x00079c6e) call3_video_subqcif_uncrop_pane_ParamLimits

0x6516,	// (0x00079c6e) call3_video_subqcif_uncrop_pane

0x6587,	// (0x00079cdf) popup_call3_audio_in_window_g4_ParamLimits

0x6587,	// (0x00079cdf) popup_call3_audio_in_window_g4

0x64a4,	// (0x00079bfc) mup_spec_half_pane

0x64ad,	// (0x00079c05) mup_spec_half_pane_cp

0xbead,	// (0x0007f605) mup_osc_middle_pane

0xbeb6,	// (0x0007f60e) mup_visualizer_osc_pane_g1

0x6485,	// (0x00079bdd) mup_spec_bar_pane_ParamLimits

0x6485,	// (0x00079bdd) mup_spec_bar_pane

0xbe9a,	// (0x0007f5f2) mup_spec_bar_pane_g1

0xbea4,	// (0x0007f5fc) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x00082d56) mup_spec_bar_pane_g

0x27ad,	// (0x00075f05) aid_cale_week_size_cell_pane_ParamLimits

0x27c7,	// (0x00075f1f) bg_cale_heading_pane_ParamLimits

0x27df,	// (0x00075f37) bg_cale_pane_cp01_ParamLimits

0x27fc,	// (0x00075f54) cale_week_corner_pane_ParamLimits

0x281b,	// (0x00075f73) cale_week_day_heading_pane_ParamLimits

0x2838,	// (0x00075f90) cale_week_scroll_pane_g1_ParamLimits

0x284b,	// (0x00075fa3) cale_week_scroll_pane_g2_ParamLimits

0x2863,	// (0x00075fbb) cale_week_scroll_pane_g3_ParamLimits

0x287b,	// (0x00075fd3) cale_week_scroll_pane_g4_ParamLimits

0x2893,	// (0x00075feb) cale_week_scroll_pane_g5_ParamLimits

0x28ab,	// (0x00076003) cale_week_scroll_pane_g6_ParamLimits

0x28c3,	// (0x0007601b) cale_week_scroll_pane_g7_ParamLimits

0x28db,	// (0x00076033) cale_week_scroll_pane_g8_ParamLimits

0x28f7,	// (0x0007604f) cale_week_scroll_pane_g9_ParamLimits

0x290f,	// (0x00076067) cale_week_scroll_pane_g10_ParamLimits

0x2927,	// (0x0007607f) cale_week_scroll_pane_g11_ParamLimits

0x293f,	// (0x00076097) cale_week_scroll_pane_g12_ParamLimits

0x2957,	// (0x000760af) cale_week_scroll_pane_g13_ParamLimits

0x296f,	// (0x000760c7) cale_week_scroll_pane_g14_ParamLimits

0x2987,	// (0x000760df) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000828ed) cale_week_scroll_pane_g_ParamLimits

0x29bb,	// (0x00076113) cale_week_time_pane_ParamLimits

0x29d7,	// (0x0007612f) grid_cale_week_pane_ParamLimits

0x29f5,	// (0x0007614d) listscroll_cale_week_pane_t1

0x2a07,	// (0x0007615f) scroll_pane_cp08_ParamLimits

0x3973,	// (0x000770cb) cale_month_corner_pane_ParamLimits

0x3ccf,	// (0x00077427) cale_month_pane_t1

0x3ce1,	// (0x00077439) cale_month_week_pane_ParamLimits

0x4730,	// (0x00077e88) popup_call_status_window_g1_ParamLimits

0x4744,	// (0x00077e9c) popup_call_status_window_g2_ParamLimits

0x4758,	// (0x00077eb0) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x00082a93) popup_call_status_window_g_ParamLimits

0x47be,	// (0x00077f16) aid_call2_pane

0x0d61,	// (0x000744b9) msg_header_pane_g1

0x543a,	// (0x00078b92) postcard_address2_pane_ParamLimits

0x543a,	// (0x00078b92) postcard_address2_pane

0x544c,	// (0x00078ba4) postcard_message2_pane_ParamLimits

0x544c,	// (0x00078ba4) postcard_message2_pane

0x6441,	// (0x00079b99) message2_row_pane_ParamLimits

0x6441,	// (0x00079b99) message2_row_pane

0x645b,	// (0x00079bb3) address2_row_pane_ParamLimits

0x645b,	// (0x00079bb3) address2_row_pane

0xbe68,	// (0x0007f5c0) postcard_message2_row_pane_g1

0xbe70,	// (0x0007f5c8) postcard_message2_row_pane_t1

0xbe68,	// (0x0007f5c0) address2_row_pane_g1

0xbe70,	// (0x0007f5c8) address2_row_pane_t1

0x2e55,	// (0x000765ad) aid_size_cell_vorec

0x1f6e,	// (0x000756c6) main_rss_pane

0x646e,	// (0x00079bc6) rss_list_single_pane_ParamLimits

0x646e,	// (0x00079bc6) rss_list_single_pane

0xbe7e,	// (0x0007f5d6) rss_list_single_pane_t1

0xbe8c,	// (0x0007f5e4) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x00082d51) rss_list_single_pane_t

0x1f6e,	// (0x000756c6) main_camera2_pane

0x1f6e,	// (0x000756c6) main_video2_pane

0x66a8,	// (0x00079e00) cams_zoom_pane_cp2_ParamLimits

0x66a8,	// (0x00079e00) cams_zoom_pane_cp2

0x66bf,	// (0x00079e17) image2_vga_pane_ParamLimits

0x66bf,	// (0x00079e17) image2_vga_pane

0x66f5,	// (0x00079e4d) main_camera2_pane_g1_ParamLimits

0x66f5,	// (0x00079e4d) main_camera2_pane_g1

0x6715,	// (0x00079e6d) main_camera2_pane_g2_ParamLimits

0x6715,	// (0x00079e6d) main_camera2_pane_g2

0x672c,	// (0x00079e84) main_camera2_pane_g3_ParamLimits

0x672c,	// (0x00079e84) main_camera2_pane_g3

0x6743,	// (0x00079e9b) main_camera2_pane_g4_ParamLimits

0x6743,	// (0x00079e9b) main_camera2_pane_g4

0x675a,	// (0x00079eb2) main_camera2_pane_g5_ParamLimits

0x675a,	// (0x00079eb2) main_camera2_pane_g5

0x6771,	// (0x00079ec9) main_camera2_pane_g6_ParamLimits

0x6771,	// (0x00079ec9) main_camera2_pane_g6

0x6788,	// (0x00079ee0) main_camera2_pane_g7_ParamLimits

0x6788,	// (0x00079ee0) main_camera2_pane_g7

0x679f,	// (0x00079ef7) main_camera2_pane_g8_ParamLimits

0x679f,	// (0x00079ef7) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x00082d72) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x00082d72) main_camera2_pane_g

0x67cd,	// (0x00079f25) main_camera2_pane_t1_ParamLimits

0x67cd,	// (0x00079f25) main_camera2_pane_t1

0x67fc,	// (0x00079f54) main_camera2_pane_t2_ParamLimits

0x67fc,	// (0x00079f54) main_camera2_pane_t2

0x6819,	// (0x00079f71) main_camera2_pane_t3_ParamLimits

0x6819,	// (0x00079f71) main_camera2_pane_t3

0x6865,	// (0x00079fbd) main_camera2_pane_t4_ParamLimits

0x6865,	// (0x00079fbd) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x00082d85) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x00082d85) main_camera2_pane_t

0x68da,	// (0x0007a032) cams_zoom_pane_cp4_ParamLimits

0x68da,	// (0x0007a032) cams_zoom_pane_cp4

0x68f0,	// (0x0007a048) image2_cif_pane_ParamLimits

0x68f0,	// (0x0007a048) image2_cif_pane

0x6913,	// (0x0007a06b) image2_subqcif_pane_ParamLimits

0x6913,	// (0x0007a06b) image2_subqcif_pane

0x6929,	// (0x0007a081) main_video2_pane_g1_ParamLimits

0x6929,	// (0x0007a081) main_video2_pane_g1

0x6943,	// (0x0007a09b) main_video2_pane_g2_ParamLimits

0x6943,	// (0x0007a09b) main_video2_pane_g2

0x6959,	// (0x0007a0b1) main_video2_pane_g3_ParamLimits

0x6959,	// (0x0007a0b1) main_video2_pane_g3

0x696f,	// (0x0007a0c7) main_video2_pane_g4_ParamLimits

0x696f,	// (0x0007a0c7) main_video2_pane_g4

0x6985,	// (0x0007a0dd) main_video2_pane_g5_ParamLimits

0x6985,	// (0x0007a0dd) main_video2_pane_g5

0x699b,	// (0x0007a0f3) main_video2_pane_g6_ParamLimits

0x699b,	// (0x0007a0f3) main_video2_pane_g6

0x0005,

0xf63c,	// (0x00082d94) main_video2_pane_g_ParamLimits

0xf63c,	// (0x00082d94) main_video2_pane_g

0x69b5,	// (0x0007a10d) main_video2_pane_t1_ParamLimits

0x69b5,	// (0x0007a10d) main_video2_pane_t1

0x69d9,	// (0x0007a131) main_video2_pane_t2_ParamLimits

0x69d9,	// (0x0007a131) main_video2_pane_t2

0x6a23,	// (0x0007a17b) main_video2_pane_t3_ParamLimits

0x6a23,	// (0x0007a17b) main_video2_pane_t3

0x0002,

0xf649,	// (0x00082da1) main_video2_pane_t_ParamLimits

0xf649,	// (0x00082da1) main_video2_pane_t

0x6044,	// (0x0007979c) call_muted_g2

0x0001,

0xf5eb,	// (0x00082d43) call_muted_g

0x1f6e,	// (0x000756c6) main_mup2_pane

0x6a65,	// (0x0007a1bd) main_mup2_pane_g1_ParamLimits

0x6a65,	// (0x0007a1bd) main_mup2_pane_g1

0x6a71,	// (0x0007a1c9) main_mup2_pane_g2_ParamLimits

0x6a71,	// (0x0007a1c9) main_mup2_pane_g2

0xc019,	// (0x0007f771) main_mup_pane_g13_cp1

0xc021,	// (0x0007f779) mup_volume_pane_cp1

0x6a8d,	// (0x0007a1e5) main_mup2_pane_g4_ParamLimits

0x6a8d,	// (0x0007a1e5) main_mup2_pane_g4

0x6a9d,	// (0x0007a1f5) main_mup2_pane_g5_ParamLimits

0x6a9d,	// (0x0007a1f5) main_mup2_pane_g5

0x6aad,	// (0x0007a205) main_mup2_pane_g6_ParamLimits

0x6aad,	// (0x0007a205) main_mup2_pane_g6

0x6abd,	// (0x0007a215) main_mup2_pane_g7_ParamLimits

0x6abd,	// (0x0007a215) main_mup2_pane_g7

0x0006,

0xf650,	// (0x00082da8) main_mup2_pane_g_ParamLimits

0xf650,	// (0x00082da8) main_mup2_pane_g

0x6ad5,	// (0x0007a22d) main_mup2_pane_t1_ParamLimits

0x6ad5,	// (0x0007a22d) main_mup2_pane_t1

0x6aeb,	// (0x0007a243) main_mup2_pane_t2_ParamLimits

0x6aeb,	// (0x0007a243) main_mup2_pane_t2

0x6b01,	// (0x0007a259) main_mup2_pane_t3_ParamLimits

0x6b01,	// (0x0007a259) main_mup2_pane_t3

0x6b17,	// (0x0007a26f) main_mup2_pane_t4_ParamLimits

0x6b17,	// (0x0007a26f) main_mup2_pane_t4

0x6b2f,	// (0x0007a287) main_mup2_pane_t5_ParamLimits

0x6b2f,	// (0x0007a287) main_mup2_pane_t5

0x6b47,	// (0x0007a29f) main_mup2_pane_t6_ParamLimits

0x6b47,	// (0x0007a29f) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x00082db7) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x00082db7) main_mup2_pane_t

0x6b77,	// (0x0007a2cf) mup2_visualizer_pane_ParamLimits

0x6b77,	// (0x0007a2cf) mup2_visualizer_pane

0x6ba2,	// (0x0007a2fa) mup_progress_pane_cp_ParamLimits

0x6ba2,	// (0x0007a2fa) mup_progress_pane_cp

0xbffb,	// (0x0007f753) mup_volume_pane_cp_ParamLimits

0xbffb,	// (0x0007f753) mup_volume_pane_cp

0x6bb6,	// (0x0007a30e) mup2_visualizer_pane_g1_ParamLimits

0x6bb6,	// (0x0007a30e) mup2_visualizer_pane_g1

0xbf3a,	// (0x0007f692) mup2_visualizer_pane_g2_ParamLimits

0xbf3a,	// (0x0007f692) mup2_visualizer_pane_g2

0x6bcb,	// (0x0007a323) mup2_visualizer_pane_g3_ParamLimits

0x6bcb,	// (0x0007a323) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x00082dc4) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x00082dc4) mup2_visualizer_pane_g

0x57e8,	// (0x00078f40) aid_size_cell_fmradio

0x61a0,	// (0x000798f8) aid_height_parent_landcape

0x369c,	// (0x00076df4) wml_content_pane_cp

0x36a4,	// (0x00076dfc) wml_tabs_pane

0x36ad,	// (0x00076e05) popup_wml_miniature_window

0x36b5,	// (0x00076e0d) scroll_pane_cp021

0x36c9,	// (0x00076e21) wml_content_pane_comp8

0x1f6e,	// (0x000756c6) bg_popup_sub_pane_cp05

0xbf58,	// (0x0007f6b0) popup_wml_miniature_window_g1

0xbf60,	// (0x0007f6b8) wml_miniature_view_pane

0x6bd7,	// (0x0007a32f) aid_size_wml_view

0x6bdf,	// (0x0007a337) wml_miniature_view_pane_g1

0x6be8,	// (0x0007a340) wml_miniature_view_pane_g2

0x6bf1,	// (0x0007a349) wml_miniature_view_pane_g3

0x6bf9,	// (0x0007a351) wml_miniature_view_pane_g4

0x6c01,	// (0x0007a359) wml_miniature_view_pane_g5

0x6c09,	// (0x0007a361) wml_miniature_view_pane_g6

0x6c11,	// (0x0007a369) wml_miniature_view_pane_g7

0x6c19,	// (0x0007a371) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x00082dcb) wml_miniature_view_pane_g

0xbf68,	// (0x0007f6c0) background_graphic_ParamLimits

0xbf68,	// (0x0007f6c0) background_graphic

0xbf74,	// (0x0007f6cc) wml_tabs_2_pane

0xbf7d,	// (0x0007f6d5) wml_tabs_3_pane_ParamLimits

0xbf7d,	// (0x0007f6d5) wml_tabs_3_pane

0xbf8f,	// (0x0007f6e7) wml_tabs_4_pane_ParamLimits

0xbf8f,	// (0x0007f6e7) wml_tabs_4_pane

0xbfa5,	// (0x0007f6fd) wml_tabs_5_pane_ParamLimits

0xbfa5,	// (0x0007f6fd) wml_tabs_5_pane

0xbfbf,	// (0x0007f717) wml_tabs_pane_g2_ParamLimits

0xbfbf,	// (0x0007f717) wml_tabs_pane_g2

0xbfd3,	// (0x0007f72b) wml_tabs_pane_g3_ParamLimits

0xbfd3,	// (0x0007f72b) wml_tabs_pane_g3

0x6c21,	// (0x0007a379) wml_tabs_2_active_pane_ParamLimits

0x6c21,	// (0x0007a379) wml_tabs_2_active_pane

0x6c31,	// (0x0007a389) wml_tabs_2_passive_pane_ParamLimits

0x6c31,	// (0x0007a389) wml_tabs_2_passive_pane

0x6c41,	// (0x0007a399) wml_tabs_3_active_pane_cp_ParamLimits

0x6c41,	// (0x0007a399) wml_tabs_3_active_pane_cp

0x6c52,	// (0x0007a3aa) wml_tabs_3_passive_pane_ParamLimits

0x6c52,	// (0x0007a3aa) wml_tabs_3_passive_pane

0x6c63,	// (0x0007a3bb) wml_tabs_3_passive_pane_cp_ParamLimits

0x6c63,	// (0x0007a3bb) wml_tabs_3_passive_pane_cp

0x6c74,	// (0x0007a3cc) tabs_4_active_pane

0x6c7c,	// (0x0007a3d4) tabs_4_passive_pane

0x6c84,	// (0x0007a3dc) tabs_4_passive_pane_cp

0x6c8c,	// (0x0007a3e4) tabs_4_passive_pane_cp2

0x5f1f,	// (0x00079677) aid_height_text

0x503a,	// (0x00078792) mup_volume_cont_pane_ParamLimits

0x503a,	// (0x00078792) mup_volume_cont_pane

0x2251,	// (0x000759a9) aid_size_cell_pinb

0x225b,	// (0x000759b3) aid_size_list_pinb

0x6b8e,	// (0x0007a2e6) mup2_volume_cont_pane_ParamLimits

0x6b8e,	// (0x0007a2e6) mup2_volume_cont_pane

0xbfe7,	// (0x0007f73f) mup2_volume_cont_pane_g1_ParamLimits

0xbfe7,	// (0x0007f73f) mup2_volume_cont_pane_g1

0x18f1,	// (0x00075049) aid_size_cell_touch_ParamLimits

0x18f1,	// (0x00075049) aid_size_cell_touch

0x1add,	// (0x00075235) touch_pane_ParamLimits

0x1add,	// (0x00075235) touch_pane

0xaf61,	// (0x0007e6b9) main_rss2_pane

0xc029,	// (0x0007f781) listscroll_rss2_pane

0xc032,	// (0x0007f78a) rss2_navigation_pane

0xc03a,	// (0x0007f792) list_rss2_pane

0x4966,	// (0x000780be) scroll_pane_cp22

0xc042,	// (0x0007f79a) rss2_navigation_pane_g1

0xc04b,	// (0x0007f7a3) rss2_navigation_pane_g2

0xc053,	// (0x0007f7ab) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x00082ddc) rss2_navigation_pane_g

0xc05b,	// (0x0007f7b3) rss2_navigation_pane_t1

0x6c94,	// (0x0007a3ec) rss2_list_single_pane_ParamLimits

0x6c94,	// (0x0007a3ec) rss2_list_single_pane

0xc069,	// (0x0007f7c1) rss2_list_single_pane_t2

0xc077,	// (0x0007f7cf) rss2_list_single_pane_t3_ParamLimits

0xc077,	// (0x0007f7cf) rss2_list_single_pane_t3

0xc094,	// (0x0007f7ec) rss2_list_single_pane_t4

0x42d6,	// (0x00077a2e) smil_status_pane_g1

0xafbc,	// (0x0007e714) main_image2_pane_ParamLimits

0xafbc,	// (0x0007e714) main_image2_pane

0x67b6,	// (0x00079f0e) main_camera2_pane_g9_ParamLimits

0x67b6,	// (0x00079f0e) main_camera2_pane_g9

0x68a8,	// (0x0007a000) main_camera2_pane_t5_ParamLimits

0x68a8,	// (0x0007a000) main_camera2_pane_t5

0xbf0f,	// (0x0007f667) main_camera2_pane_t6_ParamLimits

0xbf0f,	// (0x0007f667) main_camera2_pane_t6

0x6ca8,	// (0x0007a400) main_image2_pane_g1_ParamLimits

0x6ca8,	// (0x0007a400) main_image2_pane_g1

0x57aa,	// (0x00078f02) smil2_video_pane_ParamLimits

0x57aa,	// (0x00078f02) smil2_video_pane

0xaf8b,	// (0x0007e6e3) aid_zoom_text_primary_cp

0xafb4,	// (0x0007e70c) popup_preview_fixed_window

0x3595,	// (0x00076ced) im_reading_pane_g1

0x669c,	// (0x00079df4) cams2_bc_adjust_pane_cp_ParamLimits

0x669c,	// (0x00079df4) cams2_bc_adjust_pane_cp

0x68ce,	// (0x0007a026) cams2_bc_adjust_pane_ParamLimits

0x68ce,	// (0x0007a026) cams2_bc_adjust_pane

0xc0a2,	// (0x0007f7fa) cams2_bc_adjust_pane_g1

0xc0aa,	// (0x0007f802) cams2_slider_pane

0xc0b3,	// (0x0007f80b) cams2_slider_pane_g1

0xc0bc,	// (0x0007f814) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x00082de3) cams2_slider_pane_g

0x2392,	// (0x00075aea) calc_display_pane_ParamLimits

0x23ae,	// (0x00075b06) calc_paper_pane_ParamLimits

0x23cf,	// (0x00075b27) grid_calc_pane_ParamLimits

0xb136,	// (0x0007e88e) popup_clock_digital_window_t1_ParamLimits

0x5643,	// (0x00078d9b) main_image_pane_t1

0x2374,	// (0x00075acc) aid_size_cell_calc_ParamLimits

0x2374,	// (0x00075acc) aid_size_cell_calc

0x61d0,	// (0x00079928) popup_blid_sat_info2_window_ParamLimits

0x61d0,	// (0x00079928) popup_blid_sat_info2_window

0xc0de,	// (0x0007f836) aid_size_cell_blid

0xc0e6,	// (0x0007f83e) bg_popup_window_pane_cp07

0xc109,	// (0x0007f861) grid_popup_blid_pane

0xc111,	// (0x0007f869) heading_pane_cp05_ParamLimits

0xc111,	// (0x0007f869) heading_pane_cp05

0xc1d9,	// (0x0007f931) cell_popup_blid_pane_ParamLimits

0xc1d9,	// (0x0007f931) cell_popup_blid_pane

0xc1f9,	// (0x0007f951) cell_popup_blid_pane_g1

0xc201,	// (0x0007f959) cell_popup_blid_pane_t1

0x6b61,	// (0x0007a2b9) mup2_indicator_pane_ParamLimits

0x6b61,	// (0x0007a2b9) mup2_indicator_pane

0x2e5d,	// (0x000765b5) mup2_visualizer_osc_pane

0xbf46,	// (0x0007f69e) mup2_visualizer_spec_pane_ParamLimits

0xbf46,	// (0x0007f69e) mup2_visualizer_spec_pane

0x6cbc,	// (0x0007a414) mup2_spec_half_pane

0x6cc5,	// (0x0007a41d) mup2_spec_half_pane_cp

0x6ccd,	// (0x0007a425) mup2_spec_bar_pane_ParamLimits

0x6ccd,	// (0x0007a425) mup2_spec_bar_pane

0xbe9a,	// (0x0007f5f2) mup2_spec_bar_pane_g1

0xbea4,	// (0x0007f5fc) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x00082d56) mup2_spec_bar_pane_g

0x6cec,	// (0x0007a444) mup2_osc_middle_pane

0xbeb6,	// (0x0007f60e) mup2_visualizer_osc_pane_g1

0x1b25,	// (0x0007527d) popup_number_entry_window_t1_ParamLimits

0x1b38,	// (0x00075290) popup_number_entry_window_t2_ParamLimits

0x1b4a,	// (0x000752a2) popup_number_entry_window_t3_ParamLimits

0x1b5c,	// (0x000752b4) popup_number_entry_window_t5_ParamLimits

0x1b5c,	// (0x000752b4) popup_number_entry_window_t5

0xf0af,	// (0x00082807) popup_number_entry_window_t_ParamLimits

0x1b90,	// (0x000752e8) text_title_cp2_ParamLimits

0xb18f,	// (0x0007e8e7) aid_hotspot_pointer_text2_pane

0xb1b5,	// (0x0007e90d) main_viewer_pane_g9_ParamLimits

0xb1b5,	// (0x0007e90d) main_viewer_pane_g9

0x3ccf,	// (0x00077427) cale_month_pane_t1_ParamLimits

0x4346,	// (0x00077a9e) bg_cale_pane_ParamLimits

0x435e,	// (0x00077ab6) list_cale_pane_ParamLimits

0x436f,	// (0x00077ac7) listscroll_cale_day_pane_t1

0x4381,	// (0x00077ad9) scroll_pane_cp09_ParamLimits

0x50e8,	// (0x00078840) main_mup_eq_pane_t1_ParamLimits

0x50e8,	// (0x00078840) main_mup_eq_pane_t1

0x5100,	// (0x00078858) main_mup_eq_pane_t2_ParamLimits

0x5100,	// (0x00078858) main_mup_eq_pane_t2

0x5116,	// (0x0007886e) main_mup_eq_pane_t3_ParamLimits

0x5116,	// (0x0007886e) main_mup_eq_pane_t3

0x512c,	// (0x00078884) main_mup_eq_pane_t4_ParamLimits

0x512c,	// (0x00078884) main_mup_eq_pane_t4

0x5142,	// (0x0007889a) main_mup_eq_pane_t5_ParamLimits

0x5142,	// (0x0007889a) main_mup_eq_pane_t5

0x5158,	// (0x000788b0) main_mup_eq_pane_t6_ParamLimits

0x5158,	// (0x000788b0) main_mup_eq_pane_t6

0x516a,	// (0x000788c2) main_mup_eq_pane_t7_ParamLimits

0x516a,	// (0x000788c2) main_mup_eq_pane_t7

0x517c,	// (0x000788d4) main_mup_eq_pane_t8_ParamLimits

0x517c,	// (0x000788d4) main_mup_eq_pane_t8

0x518e,	// (0x000788e6) main_mup_eq_pane_t9_ParamLimits

0x518e,	// (0x000788e6) main_mup_eq_pane_t9

0x51a4,	// (0x000788fc) main_mup_eq_pane_t10_ParamLimits

0x51a4,	// (0x000788fc) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x00082b92) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x00082b92) main_mup_eq_pane_t

0x5237,	// (0x0007898f) mup_equalizer_pane_cp5_ParamLimits

0x5249,	// (0x000789a1) mup_equalizer_pane_cp6_ParamLimits

0x525b,	// (0x000789b3) mup_equalizer_pane_cp7_ParamLimits

0xaf61,	// (0x0007e6b9) main_gallery_pane

0xbebf,	// (0x0007f617) smil2_volume_pane

0xbec7,	// (0x0007f61f) smil_status_volume_pane_g1_ParamLimits

0xbeda,	// (0x0007f632) smil_status_volume_pane_g2_ParamLimits

0xbeed,	// (0x0007f645) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x00082d5b) smil_status_volume_pane_g_ParamLimits

0xc0e6,	// (0x0007f83e) bg_popup_window_pane_cp07_ParamLimits

0xc0f4,	// (0x0007f84c) blid_firmament_pane

0x6cf5,	// (0x0007a44d) aid_size_cell_gallery_ParamLimits

0x6cf5,	// (0x0007a44d) aid_size_cell_gallery

0x6d0b,	// (0x0007a463) grid_gallery_pane_ParamLimits

0x6d0b,	// (0x0007a463) grid_gallery_pane

0x6d1f,	// (0x0007a477) cell_gallery_pane_ParamLimits

0x6d1f,	// (0x0007a477) cell_gallery_pane

0xc20f,	// (0x0007f967) bg_cell_gallery_focus_pane_ParamLimits

0xc20f,	// (0x0007f967) bg_cell_gallery_focus_pane

0xc221,	// (0x0007f979) cell_gallery_pane_g1_ParamLimits

0xc221,	// (0x0007f979) cell_gallery_pane_g1

0x6d66,	// (0x0007a4be) cell_gallery_pane_g2_ParamLimits

0x6d66,	// (0x0007a4be) cell_gallery_pane_g2

0x6d73,	// (0x0007a4cb) cell_gallery_pane_g3_ParamLimits

0x6d73,	// (0x0007a4cb) cell_gallery_pane_g3

0xc22d,	// (0x0007f985) cell_gallery_pane_g4_ParamLimits

0xc22d,	// (0x0007f985) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x00082e09) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x00082e09) cell_gallery_pane_g

0xc239,	// (0x0007f991) bg_cell_gallery_focus_pane_g1

0xc241,	// (0x0007f999) bg_cell_gallery_focus_pane_g2

0xc249,	// (0x0007f9a1) bg_cell_gallery_focus_pane_g3

0xc251,	// (0x0007f9a9) bg_cell_gallery_focus_pane_g4

0xc259,	// (0x0007f9b1) bg_cell_gallery_focus_pane_g5

0xc261,	// (0x0007f9b9) bg_cell_gallery_focus_pane_g6

0xc269,	// (0x0007f9c1) bg_cell_gallery_focus_pane_g7

0xc271,	// (0x0007f9c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x00082e12) bg_cell_gallery_focus_pane_g

0xc279,	// (0x0007f9d1) aid_firma_cardinal

0xc28d,	// (0x0007f9e5) blid_firmament_pane_t1

0xc2a4,	// (0x0007f9fc) blid_firmament_pane_t2

0xc2bb,	// (0x0007fa13) blid_firmament_pane_t3

0xc2d2,	// (0x0007fa2a) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x00082e23) blid_firmament_pane_t

0xc2e9,	// (0x0007fa41) blid_sat_info_pane

0xc2f9,	// (0x0007fa51) blid_sat_info_pane_g1

0xc2f9,	// (0x0007fa51) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x00082e2c) blid_sat_info_pane_g

0xc303,	// (0x0007fa5b) blid_sat_info_pane_t1

0xc311,	// (0x0007fa69) smil2_volume_content_pane

0xc31a,	// (0x0007fa72) smil2_volume_pane_g1

0xc322,	// (0x0007fa7a) smil2_volume_content_pane_g1

0xc32b,	// (0x0007fa83) smil2_volume_content_pane_g2

0xc334,	// (0x0007fa8c) smil2_volume_content_pane_g3

0xc33d,	// (0x0007fa95) smil2_volume_content_pane_g4

0xc346,	// (0x0007fa9e) smil2_volume_content_pane_g5

0xc34f,	// (0x0007faa7) smil2_volume_content_pane_g6

0xc358,	// (0x0007fab0) smil2_volume_content_pane_g7

0xc361,	// (0x0007fab9) smil2_volume_content_pane_g8

0xc36a,	// (0x0007fac2) smil2_volume_content_pane_g9

0xc373,	// (0x0007facb) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x00082e31) smil2_volume_content_pane_g

0x2a9a,	// (0x000761f2) cale_week_day_heading_pane_t1_ParamLimits

0x2ac4,	// (0x0007621c) cale_week_day_heading_pane_t2_ParamLimits

0x2af3,	// (0x0007624b) cale_week_day_heading_pane_t3_ParamLimits

0x2b22,	// (0x0007627a) cale_week_day_heading_pane_t4_ParamLimits

0x2b51,	// (0x000762a9) cale_week_day_heading_pane_t5_ParamLimits

0x2b80,	// (0x000762d8) cale_week_day_heading_pane_t6_ParamLimits

0x2baf,	// (0x00076307) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0008290e) cale_week_day_heading_pane_t_ParamLimits

0x2bd9,	// (0x00076331) bg_cale_side_pane_ParamLimits

0x2be7,	// (0x0007633f) cale_week_time_pane_t1_ParamLimits

0x2c21,	// (0x00076379) cale_week_time_pane_t2_ParamLimits

0x2c5b,	// (0x000763b3) cale_week_time_pane_t3_ParamLimits

0x2c95,	// (0x000763ed) cale_week_time_pane_t4_ParamLimits

0x2ccf,	// (0x00076427) cale_week_time_pane_t5_ParamLimits

0x2d09,	// (0x00076461) cale_week_time_pane_t6_ParamLimits

0x2d43,	// (0x0007649b) cale_week_time_pane_t7_ParamLimits

0x2d7d,	// (0x000764d5) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0008291d) cale_week_time_pane_t_ParamLimits

0x2db7,	// (0x0007650f) cell_cale_week_pane_g2_ParamLimits

0x2bd9,	// (0x00076331) bg_cale_side_pane_cp01_ParamLimits

0x411b,	// (0x00077873) cale_month_week_pane_t1_ParamLimits

0x4134,	// (0x0007788c) cale_month_week_pane_t2_ParamLimits

0x414d,	// (0x000778a5) cale_month_week_pane_t3_ParamLimits

0x4166,	// (0x000778be) cale_month_week_pane_t4_ParamLimits

0x417f,	// (0x000778d7) cale_month_week_pane_t5_ParamLimits

0x4198,	// (0x000778f0) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000829f2) cale_month_week_pane_t_ParamLimits

0xb0b6,	// (0x0007e80e) cell_cale_month_pane_g1_ParamLimits

0xaf61,	// (0x0007e6b9) main_cale_event_viewer_pane

0xaf61,	// (0x0007e6b9) listscroll_cale_event_viewer_pane

0xc37c,	// (0x0007fad4) list_cale_ev_pane

0xc384,	// (0x0007fadc) scroll_pane_cp023

0x6d80,	// (0x0007a4d8) field_cale_ev_pane_ParamLimits

0x6d80,	// (0x0007a4d8) field_cale_ev_pane

0xc390,	// (0x0007fae8) field_cale_ev_content_pane_ParamLimits

0xc390,	// (0x0007fae8) field_cale_ev_content_pane

0xc39c,	// (0x0007faf4) field_cale_ev_pane_g1_ParamLimits

0xc39c,	// (0x0007faf4) field_cale_ev_pane_g1

0xc3a8,	// (0x0007fb00) field_cale_ev_pane_g2_ParamLimits

0xc3a8,	// (0x0007fb00) field_cale_ev_pane_g2

0xc3c0,	// (0x0007fb18) field_cale_ev_pane_g3_ParamLimits

0xc3c0,	// (0x0007fb18) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x00082e46) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x00082e46) field_cale_ev_pane_g

0xc3d8,	// (0x0007fb30) field_cale_ev_pane_t1_ParamLimits

0xc3d8,	// (0x0007fb30) field_cale_ev_pane_t1

0x6d9a,	// (0x0007a4f2) field_cale_ev_content_pane_t1_ParamLimits

0x6d9a,	// (0x0007a4f2) field_cale_ev_content_pane_t1

0x52e3,	// (0x00078a3b) bg_button_pane_cp01

0x2794,	// (0x00075eec) listscroll_cale_week_pane_ParamLimits

0x27a4,	// (0x00075efc) popup_toolbar_window_cp01

0x29f5,	// (0x0007614d) listscroll_cale_week_pane_t1_ParamLimits

0x2794,	// (0x00075eec) listscroll_cale_day_pane_ParamLimits

0x27a4,	// (0x00075efc) popup_toolbar_window_cp02

0x436f,	// (0x00077ac7) listscroll_cale_day_pane_t1_ParamLimits

0x2794,	// (0x00075eec) main_cale_month_pane_ParamLimits

0xbe38,	// (0x0007f590) popup_toolbar_window_cp03_ParamLimits

0xbe38,	// (0x0007f590) popup_toolbar_window_cp03

0x5621,	// (0x00078d79) main_image_pane_g2_ParamLimits

0x5621,	// (0x00078d79) main_image_pane_g2

0x5632,	// (0x00078d8a) main_image_pane_g3_ParamLimits

0x5632,	// (0x00078d8a) main_image_pane_g3

0x0002,

0xf4cc,	// (0x00082c24) main_image_pane_g_ParamLimits

0xf4cc,	// (0x00082c24) main_image_pane_g

0x5643,	// (0x00078d9b) main_image_pane_t1_ParamLimits

0x565a,	// (0x00078db2) main_image_pane_t2_ParamLimits

0x565a,	// (0x00078db2) main_image_pane_t2

0x566c,	// (0x00078dc4) main_image_pane_t3_ParamLimits

0x566c,	// (0x00078dc4) main_image_pane_t3

0x5694,	// (0x00078dec) main_image_pane_t4_ParamLimits

0x5694,	// (0x00078dec) main_image_pane_t4

0x0003,

0xf4d3,	// (0x00082c2b) main_image_pane_t_ParamLimits

0xf4d3,	// (0x00082c2b) main_image_pane_t

0x56b4,	// (0x00078e0c) popup_image_details_window_cp01

0x56bc,	// (0x00078e14) popup_toobar_trans_pane_cp01_ParamLimits

0x56bc,	// (0x00078e14) popup_toobar_trans_pane_cp01

0x6299,	// (0x000799f1) popup_image_details_window_ParamLimits

0x6299,	// (0x000799f1) popup_image_details_window

0xbe0d,	// (0x0007f565) popup_image_focus_window

0x666a,	// (0x00079dc2) camera2_autofocus_pane_ParamLimits

0x666a,	// (0x00079dc2) camera2_autofocus_pane

0xaf61,	// (0x0007e6b9) bg_popup_sub_pane_cp06

0xc3ef,	// (0x0007fb47) popup_image_focus_window_g1

0xc3f7,	// (0x0007fb4f) popup_image_focus_window_g2

0xc3ff,	// (0x0007fb57) popup_image_focus_window_g3

0xc407,	// (0x0007fb5f) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x00082e4d) popup_image_focus_window_g

0xc40f,	// (0x0007fb67) popup_image_focus_window_t1

0xc41d,	// (0x0007fb75) popup_image_focus_window_t2

0xc42c,	// (0x0007fb84) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x00082e56) popup_image_focus_window_t

0xc43a,	// (0x0007fb92) camera2_autofocus_pane_g1

0xafbc,	// (0x0007e714) bg_tb_trans_pane_cp01

0xc448,	// (0x0007fba0) popup_image_details_window_g1

0xc45b,	// (0x0007fbb3) popup_image_details_window_g2

0x0002,

0xf710,	// (0x00082e68) popup_image_details_window_g

0xc484,	// (0x0007fbdc) popup_image_details_window_t1

0xc496,	// (0x0007fbee) popup_image_details_window_t2

0xc4af,	// (0x0007fc07) popup_image_details_window_t3

0xc4c3,	// (0x0007fc1b) popup_image_details_window_t4

0xc4de,	// (0x0007fc36) popup_image_details_window_t5

0x0004,

0xf717,	// (0x00082e6f) popup_image_details_window_t

0x24d7,	// (0x00075c2f) bg_calc_paper_pane_ParamLimits

0xaf61,	// (0x0007e6b9) grid_highlight_pane_cp013

0xaff2,	// (0x0007e74a) list_calc_pane_ParamLimits

0xb004,	// (0x0007e75c) scroll_pane_cp024

0x24ef,	// (0x00075c47) bg_calc_display_pane_ParamLimits

0xb00c,	// (0x0007e764) calc_display_pane_t1_ParamLimits

0xb021,	// (0x0007e779) calc_display_pane_t2_ParamLimits

0xb036,	// (0x0007e78e) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0008288e) calc_display_pane_t_ParamLimits

0x25e7,	// (0x00075d3f) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000828ab) cell_calc_pane_g

0x25f0,	// (0x00075d48) cell_calc_pane_t1

0x25ff,	// (0x00075d57) grid_highlight_pane_cp02_ParamLimits

0x2615,	// (0x00075d6d) toolbar_button_pane_cp01_ParamLimits

0x2615,	// (0x00075d6d) toolbar_button_pane_cp01

0x56fe,	// (0x00078e56) temp_image_control_pane_ParamLimits

0x56fe,	// (0x00078e56) temp_image_control_pane

0xafbc,	// (0x0007e714) main_mp3_pane

0xc4f8,	// (0x0007fc50) temp_image_control_pane_g1_ParamLimits

0xc4f8,	// (0x0007fc50) temp_image_control_pane_g1

0xc506,	// (0x0007fc5e) temp_image_control_pane_g2_ParamLimits

0xc506,	// (0x0007fc5e) temp_image_control_pane_g2

0xc518,	// (0x0007fc70) temp_image_control_pane_g3_ParamLimits

0xc518,	// (0x0007fc70) temp_image_control_pane_g3

0x6de7,	// (0x0007a53f) temp_image_control_pane_g4_ParamLimits

0x6de7,	// (0x0007a53f) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x00082e7a) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x00082e7a) temp_image_control_pane_g

0xc4f8,	// (0x0007fc50) main_mp3_pane_g1

0x6df8,	// (0x0007a550) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x00082e83) main_mp3_pane_g

0xc55b,	// (0x0007fcb3) main_mp3_pane_t1

0x2f6f,	// (0x000766c7) main_camera_pane_g8_ParamLimits

0x2f6f,	// (0x000766c7) main_camera_pane_g8

0x310a,	// (0x00076862) main_video_pane_g7_ParamLimits

0x310a,	// (0x00076862) main_video_pane_g7

0xbf28,	// (0x0007f680) main_camera2_pane_t7_ParamLimits

0xbf28,	// (0x0007f680) main_camera2_pane_t7

0x365c,	// (0x00076db4) scroll_pane_cp025_ParamLimits

0x365c,	// (0x00076db4) scroll_pane_cp025

0x3670,	// (0x00076dc8) scroll_pane_cp026_ParamLimits

0x3670,	// (0x00076dc8) scroll_pane_cp026

0x367f,	// (0x00076dd7) wml_content_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_touch_calib_pane

0x6eba,	// (0x0007a612) main_touch_calib_pane_g1

0x6ecc,	// (0x0007a624) main_touch_calib_pane_g2

0x6ede,	// (0x0007a636) main_touch_calib_pane_g3

0x6ef0,	// (0x0007a648) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x00082ea1) main_touch_calib_pane_g

0x6f02,	// (0x0007a65a) main_touch_calib_pane_t1

0x6f1a,	// (0x0007a672) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x00082eaa) main_touch_calib_pane_t

0x4c14,	// (0x0007836c) mup_progress_pane_cp02

0x4c49,	// (0x000783a1) navi_pane_g1

0x4cf1,	// (0x00078449) navi_pane_mp_t3

0xafbc,	// (0x0007e714) main_mp3_pane_ParamLimits

0x63f2,	// (0x00079b4a) navi_pane_ParamLimits

0xc4f8,	// (0x0007fc50) main_mp3_pane_g1_ParamLimits

0x6df8,	// (0x0007a550) main_mp3_pane_g2_ParamLimits

0x6e04,	// (0x0007a55c) main_mp3_pane_g3_ParamLimits

0x6e04,	// (0x0007a55c) main_mp3_pane_g3

0x6e10,	// (0x0007a568) main_mp3_pane_g4_ParamLimits

0x6e10,	// (0x0007a568) main_mp3_pane_g4

0xc528,	// (0x0007fc80) main_mp3_pane_g5_ParamLimits

0xc528,	// (0x0007fc80) main_mp3_pane_g5

0xc536,	// (0x0007fc8e) main_mp3_pane_g6_ParamLimits

0xc536,	// (0x0007fc8e) main_mp3_pane_g6

0xc543,	// (0x0007fc9b) main_mp3_pane_g7_ParamLimits

0xc543,	// (0x0007fc9b) main_mp3_pane_g7

0xc54f,	// (0x0007fca7) main_mp3_pane_g8_ParamLimits

0xc54f,	// (0x0007fca7) main_mp3_pane_g8

0xf72b,	// (0x00082e83) main_mp3_pane_g_ParamLimits

0x6e1c,	// (0x0007a574) main_mp3_pane_t2

0x6e2a,	// (0x0007a582) main_mp3_pane_t3

0xc569,	// (0x0007fcc1) main_mp3_pane_t4

0xc577,	// (0x0007fccf) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x00082e94) main_mp3_pane_t

0xc585,	// (0x0007fcdd) mup_progress_pane_cp01

0xaf8b,	// (0x0007e6e3) aid_zoom_text_secondary2

0xc37c,	// (0x0007fad4) list_cale_ev2_pane

0xc384,	// (0x0007fadc) scroll_pane_cp023_ParamLimits

0x6f68,	// (0x0007a6c0) field_cale_ev2_pane_ParamLimits

0x6f68,	// (0x0007a6c0) field_cale_ev2_pane

0xc58d,	// (0x0007fce5) field_cale_ev2_pane_g1_ParamLimits

0xc58d,	// (0x0007fce5) field_cale_ev2_pane_g1

0xc599,	// (0x0007fcf1) field_cale_ev2_pane_g2_ParamLimits

0xc599,	// (0x0007fcf1) field_cale_ev2_pane_g2

0xc5b1,	// (0x0007fd09) field_cale_ev2_pane_g3_ParamLimits

0xc5b1,	// (0x0007fd09) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x00082eb5) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x00082eb5) field_cale_ev2_pane_g

0xc5d5,	// (0x0007fd2d) field_cale_ev2_pane_t1_ParamLimits

0xc5d5,	// (0x0007fd2d) field_cale_ev2_pane_t1

0xc5ec,	// (0x0007fd44) field_cale_ev2_pane_t2_ParamLimits

0xc5ec,	// (0x0007fd44) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x00082ebe) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x00082ebe) field_cale_ev2_pane_t

0x53f6,	// (0x00078b4e) main_postcard_pane_g5_ParamLimits

0x53f6,	// (0x00078b4e) main_postcard_pane_g5

0x540a,	// (0x00078b62) main_postcard_pane_g6_ParamLimits

0x540a,	// (0x00078b62) main_postcard_pane_g6

0x2ec6,	// (0x0007661e) camera2_autofocus_pane_cp_ParamLimits

0x2ec6,	// (0x0007661e) camera2_autofocus_pane_cp

0xafbc,	// (0x0007e714) main_mup3_pane

0x6fbe,	// (0x0007a716) main_mup3_pane_g1_ParamLimits

0x6fbe,	// (0x0007a716) main_mup3_pane_g1

0x6fe0,	// (0x0007a738) main_mup3_pane_g2_ParamLimits

0x6fe0,	// (0x0007a738) main_mup3_pane_g2

0x7053,	// (0x0007a7ab) main_mup3_pane_g3_ParamLimits

0x7053,	// (0x0007a7ab) main_mup3_pane_g3

0x7091,	// (0x0007a7e9) main_mup3_pane_g4_ParamLimits

0x7091,	// (0x0007a7e9) main_mup3_pane_g4

0x70cf,	// (0x0007a827) main_mup3_pane_g5_ParamLimits

0x70cf,	// (0x0007a827) main_mup3_pane_g5

0x710d,	// (0x0007a865) main_mup3_pane_g6_ParamLimits

0x710d,	// (0x0007a865) main_mup3_pane_g6

0xc601,	// (0x0007fd59) main_mup3_pane_g7_ParamLimits

0xc601,	// (0x0007fd59) main_mup3_pane_g7

0x0007,

0xf776,	// (0x00082ece) main_mup3_pane_g_ParamLimits

0xf776,	// (0x00082ece) main_mup3_pane_g

0x7183,	// (0x0007a8db) main_mup3_pane_t1_ParamLimits

0x7183,	// (0x0007a8db) main_mup3_pane_t1

0x71e9,	// (0x0007a941) main_mup3_pane_t2_ParamLimits

0x71e9,	// (0x0007a941) main_mup3_pane_t2

0x72af,	// (0x0007aa07) main_mup3_pane_t4_ParamLimits

0x72af,	// (0x0007aa07) main_mup3_pane_t4

0x72fd,	// (0x0007aa55) main_mup3_pane_t5_ParamLimits

0x72fd,	// (0x0007aa55) main_mup3_pane_t5

0x73ab,	// (0x0007ab03) main_mup3_pane_t6_ParamLimits

0x73ab,	// (0x0007ab03) main_mup3_pane_t6

0x0005,

0xf787,	// (0x00082edf) main_mup3_pane_t_ParamLimits

0xf787,	// (0x00082edf) main_mup3_pane_t

0x745f,	// (0x0007abb7) mup3_progress_pane_ParamLimits

0x745f,	// (0x0007abb7) mup3_progress_pane

0x74db,	// (0x0007ac33) popup_mup3_control_window_ParamLimits

0x74db,	// (0x0007ac33) popup_mup3_control_window

0xc60f,	// (0x0007fd67) popup_mup3_text_window

0x7509,	// (0x0007ac61) mup3_progress_pane_t1

0x7527,	// (0x0007ac7f) mup3_progress_pane_t2

0xc617,	// (0x0007fd6f) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x00082eec) mup3_progress_pane_t

0xc634,	// (0x0007fd8c) mup_progress_pane_cp03

0xaf61,	// (0x0007e6b9) bg_tb_trans_pane_cp04

0x7545,	// (0x0007ac9d) mup3_volume_pane

0x754d,	// (0x0007aca5) popup_mup3_control_window_g1

0x7556,	// (0x0007acae) mup3_volume_pane_g1

0x755f,	// (0x0007acb7) mup3_volume_pane_g2

0x7568,	// (0x0007acc0) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x00082ef3) mup3_volume_pane_g

0xaf61,	// (0x0007e6b9) bg_tb_trans_pane_cp03

0xc644,	// (0x0007fd9c) popup_mup3_text_window_g1

0xc64c,	// (0x0007fda4) popup_mup3_text_window_t1

0x25ba,	// (0x00075d12) list_calc_item_pane_g1_ParamLimits

0xc010,	// (0x0007f768) mup_volume_pane_cp_g1

0x6f32,	// (0x0007a68a) main_touch_calib_pane_t3

0x6f44,	// (0x0007a69c) main_touch_calib_pane_t4

0x6f56,	// (0x0007a6ae) main_touch_calib_pane_t5

0xaf6b,	// (0x0007e6c3) aid_cell_size_toolbar2

0xaf73,	// (0x0007e6cb) aid_popup3_width_pane

0xaf7b,	// (0x0007e6d3) aid_zoom_text_msg_primary

0x2ea5,	// (0x000765fd) vorec_t7

0x252e,	// (0x00075c86) bg_calc_paper_pane_g1_ParamLimits

0x253a,	// (0x00075c92) bg_calc_paper_pane_g2_ParamLimits

0x2546,	// (0x00075c9e) bg_calc_paper_pane_g3_ParamLimits

0x2552,	// (0x00075caa) bg_calc_paper_pane_g4_ParamLimits

0x255e,	// (0x00075cb6) bg_calc_paper_pane_g5_ParamLimits

0x256a,	// (0x00075cc2) bg_calc_paper_pane_g6_ParamLimits

0x2579,	// (0x00075cd1) bg_calc_paper_pane_g7_ParamLimits

0x2588,	// (0x00075ce0) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x00082895) bg_calc_paper_pane_g_ParamLimits

0x2597,	// (0x00075cef) calc_bg_paper_pane_g9_ParamLimits

0x3006,	// (0x0007675e) image_qvga_pane_ParamLimits

0x3006,	// (0x0007675e) image_qvga_pane

0x21c9,	// (0x00075921) bg_popup_sub_pane_cp04_ParamLimits

0x557f,	// (0x00078cd7) popup_mup_playback_window_g1_ParamLimits

0x558b,	// (0x00078ce3) popup_mup_playback_window_t1_ParamLimits

0x55a0,	// (0x00078cf8) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x00082c1f) popup_mup_playback_window_t_ParamLimits

0x6a81,	// (0x0007a1d9) main_mup2_pane_g3_ParamLimits

0x6a81,	// (0x0007a1d9) main_mup2_pane_g3

0x3381,	// (0x00076ad9) popup_toolbar_window_cp04

0x5cf3,	// (0x0007944b) popup_call2_audio_second_window_g3_ParamLimits

0x5cf3,	// (0x0007944b) popup_call2_audio_second_window_g3

0xb3b9,	// (0x0007eb11) popup_call2_audio_first_window_g4_ParamLimits

0xb3b9,	// (0x0007eb11) popup_call2_audio_first_window_g4

0xba38,	// (0x0007f190) popup_call2_audio_in_window_g4_ParamLimits

0xba38,	// (0x0007f190) popup_call2_audio_in_window_g4

0x55b5,	// (0x00078d0d) aid_area_sk_bg_cut_ParamLimits

0x55b5,	// (0x00078d0d) aid_area_sk_bg_cut

0x55d3,	// (0x00078d2b) aid_area_sk_bg_cut_2_ParamLimits

0x55d3,	// (0x00078d2b) aid_area_sk_bg_cut_2

0x6d56,	// (0x0007a4ae) aid_placing_details_win

0x6d5e,	// (0x0007a4b6) aid_placing_details_win_2

0xc43a,	// (0x0007fb92) camera2_autofocus_pane_g1_ParamLimits

0x1a7e,	// (0x000751d6) popup_fixed_preview_cale_window_ParamLimits

0x1a7e,	// (0x000751d6) popup_fixed_preview_cale_window

0x4dad,	// (0x00078505) navi_slider_pane_g3

0x4db6,	// (0x0007850e) navi_slider_pane_g4

0x4dbf,	// (0x00078517) navi_slider_pane_g5

0x4dad,	// (0x00078505) navi_slider_pane_g6

0xb15c,	// (0x0007e8b4) navi_slider_pane_g7

0x5278,	// (0x000789d0) mup_scale_pane_g3

0x5281,	// (0x000789d9) mup_scale_pane_g4

0x528a,	// (0x000789e2) mup_scale_pane_g5

0x5293,	// (0x000789eb) mup_scale_pane_g6

0x529c,	// (0x000789f4) mup_scale_pane_g7

0x4dad,	// (0x00078505) cams2_slider_pane_g3

0xc0c5,	// (0x0007f81d) cams2_slider_pane_g4

0xc0cd,	// (0x0007f825) cams2_slider_pane_g5

0x4dad,	// (0x00078505) cams2_slider_pane_g6

0xc0d5,	// (0x0007f82d) cams2_slider_pane_g7

0xc2f9,	// (0x0007fa51) camera2_autofocus_pane_cp_g1

0xbdd9,	// (0x0007f531) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdd9,	// (0x0007f531) bg_popup_preview_window_pane_cp02

0xc65a,	// (0x0007fdb2) list_fp_cale_pane_ParamLimits

0xc65a,	// (0x0007fdb2) list_fp_cale_pane

0xc666,	// (0x0007fdbe) popup_fixed_preview_cale_window_t1_ParamLimits

0xc666,	// (0x0007fdbe) popup_fixed_preview_cale_window_t1

0x7571,	// (0x0007acc9) popup_fixed_preview_cale_window_t2_ParamLimits

0x7571,	// (0x0007acc9) popup_fixed_preview_cale_window_t2

0x7586,	// (0x0007acde) popup_fixed_preview_cale_window_t3_ParamLimits

0x7586,	// (0x0007acde) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x00082efa) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x00082efa) popup_fixed_preview_cale_window_t

0x759b,	// (0x0007acf3) list_single_fp_cale_pane_ParamLimits

0x759b,	// (0x0007acf3) list_single_fp_cale_pane

0xc684,	// (0x0007fddc) list_single_fp_cale_pane_g1_ParamLimits

0xc684,	// (0x0007fddc) list_single_fp_cale_pane_g1

0xc690,	// (0x0007fde8) list_single_fp_cale_pane_g2_ParamLimits

0xc690,	// (0x0007fde8) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x00082f01) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x00082f01) list_single_fp_cale_pane_g

0xc6a9,	// (0x0007fe01) list_single_fp_cale_pane_t1_ParamLimits

0xc6a9,	// (0x0007fe01) list_single_fp_cale_pane_t1

0xc6bb,	// (0x0007fe13) list_single_fp_cale_pane_t2_ParamLimits

0xc6bb,	// (0x0007fe13) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x00082f08) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x00082f08) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaf61,	// (0x0007e6b9) main_dialer_pane

0x75af,	// (0x0007ad07) aid_cell_size_keypad

0x75b9,	// (0x0007ad11) dialer_ne_pane

0x75c1,	// (0x0007ad19) grid_dialer_command_1_pane

0x75c9,	// (0x0007ad21) grid_dialer_command_2_pane

0x75d1,	// (0x0007ad29) grid_dialer_keypad_pane

0x75e1,	// (0x0007ad39) bg_popup_call_pane_cp06_ParamLimits

0x75e1,	// (0x0007ad39) bg_popup_call_pane_cp06

0x75ed,	// (0x0007ad45) dialer_ne_clear_pane_ParamLimits

0x75ed,	// (0x0007ad45) dialer_ne_clear_pane

0xc6ee,	// (0x0007fe46) dialer_ne_pane_g1

0xc6f6,	// (0x0007fe4e) dialer_ne_pane_t1_ParamLimits

0xc6f6,	// (0x0007fe4e) dialer_ne_pane_t1

0x75f9,	// (0x0007ad51) dialer_ne_pane_t2_ParamLimits

0x75f9,	// (0x0007ad51) dialer_ne_pane_t2

0x7623,	// (0x0007ad7b) dialer_ne_pane_t3_ParamLimits

0x7623,	// (0x0007ad7b) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x00082f0d) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x00082f0d) dialer_ne_pane_t

0x7653,	// (0x0007adab) dialer_ne_pane_t3_copy1_ParamLimits

0x7653,	// (0x0007adab) dialer_ne_pane_t3_copy1

0x7682,	// (0x0007adda) cell_dialer_keypad_pane_ParamLimits

0x7682,	// (0x0007adda) cell_dialer_keypad_pane

0x7697,	// (0x0007adef) cell_dialer_command_1_pane_ParamLimits

0x7697,	// (0x0007adef) cell_dialer_command_1_pane

0x76ad,	// (0x0007ae05) cell_dialer_command_2_pane_ParamLimits

0x76ad,	// (0x0007ae05) cell_dialer_command_2_pane

0xc708,	// (0x0007fe60) bg_button_pane_cp02_ParamLimits

0xc708,	// (0x0007fe60) bg_button_pane_cp02

0x76bc,	// (0x0007ae14) cell_dialer_keypad_pane_g1_ParamLimits

0x76bc,	// (0x0007ae14) cell_dialer_keypad_pane_g1

0xc708,	// (0x0007fe60) bg_button_pane_cp03_ParamLimits

0xc708,	// (0x0007fe60) bg_button_pane_cp03

0x76d1,	// (0x0007ae29) cell_dialer_command_1_pane_g1_ParamLimits

0x76d1,	// (0x0007ae29) cell_dialer_command_1_pane_g1

0xc714,	// (0x0007fe6c) bg_button_pane_cp04

0x76e5,	// (0x0007ae3d) cell_dialer_command_2_pane_g1

0x2e5d,	// (0x000765b5) bg_button_pane_cp06

0xc71c,	// (0x0007fe74) dialer_ne_clear_pane_g1

0x4c55,	// (0x000783ad) navi_pane_g2

0x4c7e,	// (0x000783d6) navi_pane_g3

0x0002,

0xf3ca,	// (0x00082b22) navi_pane_g

0x4cff,	// (0x00078457) navi_pane_mv_g2

0x4d26,	// (0x0007847e) navi_pane_mv_g5

0x4d2e,	// (0x00078486) navi_pane_mv_t1

0x24ef,	// (0x00075c47) main_clock2_pane

0x772a,	// (0x0007ae82) main_clock2_list_pane_ParamLimits

0x772a,	// (0x0007ae82) main_clock2_list_pane

0x775c,	// (0x0007aeb4) main_clock2_pane_t1_ParamLimits

0x775c,	// (0x0007aeb4) main_clock2_pane_t1

0x7796,	// (0x0007aeee) main_clock2_pane_t2_ParamLimits

0x7796,	// (0x0007aeee) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x00082f19) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x00082f19) main_clock2_pane_t

0x782a,	// (0x0007af82) popup_clock_analogue_window_cp03_ParamLimits

0x782a,	// (0x0007af82) popup_clock_analogue_window_cp03

0x784f,	// (0x0007afa7) popup_clock_digital_window_cp02_ParamLimits

0x784f,	// (0x0007afa7) popup_clock_digital_window_cp02

0x78c0,	// (0x0007b018) main_clock2_list_single_pane_ParamLimits

0x78c0,	// (0x0007b018) main_clock2_list_single_pane

0x2e5d,	// (0x000765b5) list_highlight_pane_cp05

0xc754,	// (0x0007feac) main_clock2_list_single_pane_t1

0x3381,	// (0x00076ad9) popup_toolbar_window_cp04_ParamLimits

0x6db7,	// (0x0007a50f) camera2_autofocus_pane_g2_ParamLimits

0x6db7,	// (0x0007a50f) camera2_autofocus_pane_g2

0x6dc3,	// (0x0007a51b) camera2_autofocus_pane_g3_ParamLimits

0x6dc3,	// (0x0007a51b) camera2_autofocus_pane_g3

0x6dcf,	// (0x0007a527) camera2_autofocus_pane_g4_ParamLimits

0x6dcf,	// (0x0007a527) camera2_autofocus_pane_g4

0x6ddb,	// (0x0007a533) camera2_autofocus_pane_g5_ParamLimits

0x6ddb,	// (0x0007a533) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x00082e5d) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x00082e5d) camera2_autofocus_pane_g

0x6f80,	// (0x0007a6d8) camera2_autofocus_pane_cp_g2

0x6f88,	// (0x0007a6e0) camera2_autofocus_pane_cp_g3

0x6f90,	// (0x0007a6e8) camera2_autofocus_pane_cp_g4

0x6f98,	// (0x0007a6f0) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x00082ec3) camera2_autofocus_pane_cp_g

0x75d9,	// (0x0007ad31) popup_dialer_spcha_window

0xaf61,	// (0x0007e6b9) bg_popup_sub_pane_cp07

0xc762,	// (0x0007feba) list_spcha_pane

0xc76a,	// (0x0007fec2) list_single_spcha_pane_ParamLimits

0xc76a,	// (0x0007fec2) list_single_spcha_pane

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp06

0xc77b,	// (0x0007fed3) list_single_spcha_pane_t1

0xb7e2,	// (0x0007ef3a) popup_call2_audio_out_window_g4_ParamLimits

0xb7e2,	// (0x0007ef3a) popup_call2_audio_out_window_g4

0xaf61,	// (0x0007e6b9) main_imed2_pane

0xbe15,	// (0x0007f56d) popup_imed_adjust2_window

0x62af,	// (0x00079a07) popup_imed_trans_window_ParamLimits

0x62af,	// (0x00079a07) popup_imed_trans_window

0xc13d,	// (0x0007f895) popup_blid_sat_info2_window_t1

0xc14b,	// (0x0007f8a3) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x00082df2) popup_blid_sat_info2_window_t

0x796a,	// (0x0007b0c2) aid_size_cell_colour_35

0x798a,	// (0x0007b0e2) aid_size_cell_colour_112

0x79aa,	// (0x0007b102) aid_size_cell_effect

0xbde5,	// (0x0007f53d) bg_tb_trans_pane_cp02

0x44b9,	// (0x00077c11) heading_imed_pane

0x79ca,	// (0x0007b122) listscroll_imed_pane

0xc789,	// (0x0007fee1) heading_imed_pane_g1

0xc791,	// (0x0007fee9) heading_imed_pane_t1

0xc79f,	// (0x0007fef7) grid_imed_colour_35_pane_ParamLimits

0xc79f,	// (0x0007fef7) grid_imed_colour_35_pane

0x79d6,	// (0x0007b12e) grid_imed_effect_pane

0xc7b2,	// (0x0007ff0a) list_imed_aspect_pane

0x79e9,	// (0x0007b141) scroll_pane_cp027_ParamLimits

0x79e9,	// (0x0007b141) scroll_pane_cp027

0x79f5,	// (0x0007b14d) cell_imed_effect_pane_ParamLimits

0x79f5,	// (0x0007b14d) cell_imed_effect_pane

0xc7ba,	// (0x0007ff12) cell_imed_colour_pane_ParamLimits

0xc7ba,	// (0x0007ff12) cell_imed_colour_pane

0xc7f4,	// (0x0007ff4c) cell_imed_colour_pane_g1_ParamLimits

0xc7f4,	// (0x0007ff4c) cell_imed_colour_pane_g1

0xc805,	// (0x0007ff5d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc805,	// (0x0007ff5d) hgihlgiht_grid_pane_cp016

0x7a1a,	// (0x0007b172) cell_imed_effect_pane_g1

0x7a22,	// (0x0007b17a) grid_highlight_pane_cp017

0xc816,	// (0x0007ff6e) list_imed_single_pane_ParamLimits

0xc816,	// (0x0007ff6e) list_imed_single_pane

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp07

0xc829,	// (0x0007ff81) list_imed_aspect_pane_comp1_t1

0xbde5,	// (0x0007f53d) bg_tb_trans_pane_cp05

0xc849,	// (0x0007ffa1) popup_imed_adjust2_window_g1

0xc870,	// (0x0007ffc8) popup_imed_adjust2_window_t1

0xc888,	// (0x0007ffe0) slider_imed_adjust_pane

0xc89c,	// (0x0007fff4) slider_imed_adjust_pane_g1

0xc8ac,	// (0x00080004) slider_imed_adjust_pane_g2

0xc8bc,	// (0x00080014) slider_imed_adjust_pane_g3

0xc8cd,	// (0x00080025) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x00082f36) slider_imed_adjust_pane_g

0x7a2b,	// (0x0007b183) aid_size_cell_clipart2

0x7a37,	// (0x0007b18f) grid_imed_clipart_pane

0xc8de,	// (0x00080036) scroll_pane_cp031

0x7a41,	// (0x0007b199) cell_imed_clipart_pane_ParamLimits

0x7a41,	// (0x0007b199) cell_imed_clipart_pane

0x7a59,	// (0x0007b1b1) cell_imed_clipart_pane_g1

0xaf61,	// (0x0007e6b9) grid_highlight_pane_cp014

0x773d,	// (0x0007ae95) main_clock2_pane_g1_ParamLimits

0x773d,	// (0x0007ae95) main_clock2_pane_g1

0x786b,	// (0x0007afc3) aid_call2_pane_cp10

0x787d,	// (0x0007afd5) aid_call_pane_cp10

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g1

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g2

0x788f,	// (0x0007afe7) popup_clock_analogue_window_cp10_g3

0x788f,	// (0x0007afe7) popup_clock_analogue_window_cp10_g4

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x00082f24) popup_clock_analogue_window_cp10_g

0x78a1,	// (0x0007aff9) popup_clock_analogue_window_cp10_t1

0x78d2,	// (0x0007b02a) clock_digital_number_pane_cp10_ParamLimits

0x78d2,	// (0x0007b02a) clock_digital_number_pane_cp10

0x78ea,	// (0x0007b042) clock_digital_number_pane_cp11_ParamLimits

0x78ea,	// (0x0007b042) clock_digital_number_pane_cp11

0x7902,	// (0x0007b05a) clock_digital_number_pane_cp12_ParamLimits

0x7902,	// (0x0007b05a) clock_digital_number_pane_cp12

0x791a,	// (0x0007b072) clock_digital_number_pane_cp13_ParamLimits

0x791a,	// (0x0007b072) clock_digital_number_pane_cp13

0x7932,	// (0x0007b08a) clock_digital_separator_pane_cp10_ParamLimits

0x7932,	// (0x0007b08a) clock_digital_separator_pane_cp10

0x794a,	// (0x0007b0a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x794a,	// (0x0007b0a2) popup_clock_digital_window_cp02_t1

0x21c1,	// (0x00075919) clock_digital_number_pane_cp10_g1

0x21c1,	// (0x00075919) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x00082f3f) clock_digital_number_pane_cp10_g

0x21c1,	// (0x00075919) clock_digital_separator_pane_cp10_g1

0x21c1,	// (0x00075919) clock_digital_separator_pane_g2_cp10

0x4d6c,	// (0x000784c4) navi_pane_vded_g4

0x4d75,	// (0x000784cd) navi_pane_vded_g5

0x4d7e,	// (0x000784d6) navi_pane_vded_t1

0xaf61,	// (0x0007e6b9) main_vded_pane

0x7a62,	// (0x0007b1ba) main_vded_pane_g1

0x7a6c,	// (0x0007b1c4) main_vded_pane_g2

0x7a74,	// (0x0007b1cc) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x00082f44) main_vded_pane_g

0x7a7c,	// (0x0007b1d4) main_vded_pane_t1

0x7a8a,	// (0x0007b1e2) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x00082f4b) main_vded_pane_t

0x7a98,	// (0x0007b1f0) vded_slider_pane

0x7aa0,	// (0x0007b1f8) vded_video_pane

0xc8e6,	// (0x0008003e) vded_video_pane_g1

0x7aa8,	// (0x0007b200) vded_video_pane_g2

0xc2f9,	// (0x0007fa51) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x00082f50) vded_video_pane_g

0xc8f0,	// (0x00080048) vded_slider_pane_g1

0xc010,	// (0x0007f768) vded_slider_pane_g2

0xc8f9,	// (0x00080051) vded_slider_pane_g3

0xc902,	// (0x0008005a) vded_slider_pane_g4

0xc90b,	// (0x00080063) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x00082f57) vded_slider_pane_g

0x74c5,	// (0x0007ac1d) mup3_rocker_pane_ParamLimits

0x74c5,	// (0x0007ac1d) mup3_rocker_pane

0x7ab1,	// (0x0007b209) mup3_control_keys_pane_g1

0x7ab9,	// (0x0007b211) mup3_control_keys_pane_g2

0x7ac1,	// (0x0007b219) mup3_control_keys_pane_g3

0x7ac9,	// (0x0007b221) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x00082f62) mup3_control_keys_pane_g

0x1ab1,	// (0x00075209) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1ab1,	// (0x00075209) popup_toolbar2_fixed_window_cp01

0x74f3,	// (0x0007ac4b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x74f3,	// (0x0007ac4b) popup_toolbar2_fixed_window_cp02

0x5e65,	// (0x000795bd) popup_call2_audio_second_window_t4_ParamLimits

0x5e65,	// (0x000795bd) popup_call2_audio_second_window_t4

0xb64f,	// (0x0007eda7) popup_call2_audio_first_window_t6_ParamLimits

0xb64f,	// (0x0007eda7) popup_call2_audio_first_window_t6

0xb8e5,	// (0x0007f03d) popup_call2_audio_out_window_t6_ParamLimits

0xb8e5,	// (0x0007f03d) popup_call2_audio_out_window_t6

0xaf61,	// (0x0007e6b9) main_vitu_pane

0x7ad9,	// (0x0007b231) aid_size_cell_itu_ParamLimits

0x7ad9,	// (0x0007b231) aid_size_cell_itu

0xafbc,	// (0x0007e714) bg_popup_window_pane_cp08_ParamLimits

0xafbc,	// (0x0007e714) bg_popup_window_pane_cp08

0x7aef,	// (0x0007b247) field_vitu_entry_pane_ParamLimits

0x7aef,	// (0x0007b247) field_vitu_entry_pane

0x7b02,	// (0x0007b25a) grid_vitu_function_pane_ParamLimits

0x7b02,	// (0x0007b25a) grid_vitu_function_pane

0x7b17,	// (0x0007b26f) grid_vitu_itu_pane_ParamLimits

0x7b17,	// (0x0007b26f) grid_vitu_itu_pane

0x7b2d,	// (0x0007b285) cell_vitu_itu_pane_ParamLimits

0x7b2d,	// (0x0007b285) cell_vitu_itu_pane

0x7b4f,	// (0x0007b2a7) cell_vitu_function_pane_ParamLimits

0x7b4f,	// (0x0007b2a7) cell_vitu_function_pane

0xafbc,	// (0x0007e714) bg_popup_sub_pane_cp08_ParamLimits

0xafbc,	// (0x0007e714) bg_popup_sub_pane_cp08

0x7b68,	// (0x0007b2c0) field_vitu_entry_pane_t1_ParamLimits

0x7b68,	// (0x0007b2c0) field_vitu_entry_pane_t1

0xc92c,	// (0x00080084) field_vitu_entry_pane_t2_ParamLimits

0xc92c,	// (0x00080084) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x00082f70) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x00082f70) field_vitu_entry_pane_t

0xc949,	// (0x000800a1) bg_button_pane_cp05_ParamLimits

0xc949,	// (0x000800a1) bg_button_pane_cp05

0x7b84,	// (0x0007b2dc) cell_vitu_itu_pane_g1

0x7b9c,	// (0x0007b2f4) cell_vitu_itu_pane_t1_ParamLimits

0x7b9c,	// (0x0007b2f4) cell_vitu_itu_pane_t1

0x7bae,	// (0x0007b306) cell_vitu_itu_pane_t2_ParamLimits

0x7bae,	// (0x0007b306) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x00082f75) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x00082f75) cell_vitu_itu_pane_t

0xc957,	// (0x000800af) bg_button_pane_cp07

0x7be3,	// (0x0007b33b) cell_vitu_function_pane_g1

0xafea,	// (0x0007e742) main_calc_pane_g1

0x1915,	// (0x0007506d) aid_visual_content_pane

0xaf61,	// (0x0007e6b9) main_vradio_pane

0x7bec,	// (0x0007b344) main_vradio_pane_g1_ParamLimits

0x7bec,	// (0x0007b344) main_vradio_pane_g1

0xc961,	// (0x000800b9) main_vradio_pane_g2_ParamLimits

0xc961,	// (0x000800b9) main_vradio_pane_g2

0x0001,

0xf824,	// (0x00082f7c) main_vradio_pane_g_ParamLimits

0xf824,	// (0x00082f7c) main_vradio_pane_g

0x7c02,	// (0x0007b35a) main_vradio_pane_t1_ParamLimits

0x7c02,	// (0x0007b35a) main_vradio_pane_t1

0x7c17,	// (0x0007b36f) main_vradio_pane_t2_ParamLimits

0x7c17,	// (0x0007b36f) main_vradio_pane_t2

0xc96e,	// (0x000800c6) main_vradio_pane_t3_ParamLimits

0xc96e,	// (0x000800c6) main_vradio_pane_t3

0x0002,

0xf829,	// (0x00082f81) main_vradio_pane_t_ParamLimits

0xf829,	// (0x00082f81) main_vradio_pane_t

0x7c2c,	// (0x0007b384) vradio_rocker_control_pane_ParamLimits

0x7c2c,	// (0x0007b384) vradio_rocker_control_pane

0x7c3e,	// (0x0007b396) vradio_station_info_pane_ParamLimits

0x7c3e,	// (0x0007b396) vradio_station_info_pane

0xc980,	// (0x000800d8) vradio_frequency_info_pane_ParamLimits

0xc980,	// (0x000800d8) vradio_frequency_info_pane

0xc2f9,	// (0x0007fa51) vradio_station_info_pane_g1

0xc98f,	// (0x000800e7) vradio_station_info_pane_t1_ParamLimits

0xc98f,	// (0x000800e7) vradio_station_info_pane_t1

0xc9b1,	// (0x00080109) vradio_station_info_pane_t2_ParamLimits

0xc9b1,	// (0x00080109) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x00082f88) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x00082f88) vradio_station_info_pane_t

0xc9c3,	// (0x0008011b) vradio_tuning_pane

0xc9cb,	// (0x00080123) vradio_rocker_control_pane_g1

0xc9d3,	// (0x0008012b) vradio_rocker_control_pane_g2

0xc9db,	// (0x00080133) vradio_rocker_control_pane_g3

0xc9e3,	// (0x0008013b) vradio_rocker_control_pane_g4

0xc9eb,	// (0x00080143) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x00082f8d) vradio_rocker_control_pane_g

0x7c4e,	// (0x0007b3a6) vradio_frequency_info_pane_g1

0xc9f3,	// (0x0008014b) vradio_frequency_info_pane_t1_ParamLimits

0xc9f3,	// (0x0008014b) vradio_frequency_info_pane_t1

0x7c58,	// (0x0007b3b0) vradio_tuning_pane_g1

0x7c61,	// (0x0007b3b9) vradio_tuning_pane_t1

0xaf93,	// (0x0007e6eb) area_side_right_pane_ParamLimits

0xaf93,	// (0x0007e6eb) area_side_right_pane

0xbda0,	// (0x0007f4f8) status_small_pane_g1

0xbda8,	// (0x0007f500) status_small_pane_g2

0xbdb1,	// (0x0007f509) status_small_pane_g3

0xbdba,	// (0x0007f512) status_small_pane_g4

0x0003,

0xf5f0,	// (0x00082d48) status_small_pane_g

0xbdc3,	// (0x0007f51b) status_small_pane_t1

0xaf61,	// (0x0007e6b9) main_video3_pane

0xca07,	// (0x0008015f) cams_zoom_vslider_pane

0xca0f,	// (0x00080167) image3_wide_pane_ParamLimits

0xca0f,	// (0x00080167) image3_wide_pane

0xca29,	// (0x00080181) image3_wide_small_pane

0xca33,	// (0x0008018b) main_video3_pane_g1_ParamLimits

0xca33,	// (0x0008018b) main_video3_pane_g1

0xca4f,	// (0x000801a7) main_video3_pane_g2_ParamLimits

0xca4f,	// (0x000801a7) main_video3_pane_g2

0x0001,

0xf840,	// (0x00082f98) main_video3_pane_g_ParamLimits

0xf840,	// (0x00082f98) main_video3_pane_g

0xca6b,	// (0x000801c3) main_video3_pane_t1_ParamLimits

0xca6b,	// (0x000801c3) main_video3_pane_t1

0xca96,	// (0x000801ee) main_video3_pane_t2_ParamLimits

0xca96,	// (0x000801ee) main_video3_pane_t2

0xcac1,	// (0x00080219) main_video3_pane_t3_ParamLimits

0xcac1,	// (0x00080219) main_video3_pane_t3

0x0002,

0xf845,	// (0x00082f9d) main_video3_pane_t_ParamLimits

0xf845,	// (0x00082f9d) main_video3_pane_t

0xcaec,	// (0x00080244) cams_zoom_vslider_pane_g1

0xcaf5,	// (0x0008024d) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x00082fa4) cams_zoom_vslider_pane_g

0xcafd,	// (0x00080255) small_slider_vertical_pane

0xc2f9,	// (0x0007fa51) small_slider_vertical_pane_g1

0xc2f9,	// (0x0007fa51) small_slider_vertical_pane_g2

0xcb05,	// (0x0008025d) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x00082fa9) small_slider_vertical_pane_g

0xaf61,	// (0x0007e6b9) main_hwr_training_pane

0xcb0e,	// (0x00080266) hwr_training_instruct_pane_ParamLimits

0xcb0e,	// (0x00080266) hwr_training_instruct_pane

0x7c70,	// (0x0007b3c8) hwr_training_navi_pane_ParamLimits

0x7c70,	// (0x0007b3c8) hwr_training_navi_pane

0x7c87,	// (0x0007b3df) hwr_training_write_pane_ParamLimits

0x7c87,	// (0x0007b3df) hwr_training_write_pane

0xaf61,	// (0x0007e6b9) bg_frame_shadow_pane

0xcb3d,	// (0x00080295) hwr_training_write_pane_g1

0xcb45,	// (0x0008029d) hwr_training_write_pane_g2

0xcb4d,	// (0x000802a5) hwr_training_write_pane_g3

0xcb55,	// (0x000802ad) hwr_training_write_pane_g4

0xcb5d,	// (0x000802b5) hwr_training_write_pane_g5

0xcb65,	// (0x000802bd) hwr_training_write_pane_g6

0xcb6d,	// (0x000802c5) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x00082fb0) hwr_training_write_pane_g

0xe7a3,	// (0x00081efb) hwr_training_navi_pane_g1_ParamLimits

0xe7a3,	// (0x00081efb) hwr_training_navi_pane_g1

0xe7b5,	// (0x00081f0d) hwr_training_navi_pane_g2_ParamLimits

0xe7b5,	// (0x00081f0d) hwr_training_navi_pane_g2

0xe7c7,	// (0x00081f1f) hwr_training_navi_pane_g3_ParamLimits

0xe7c7,	// (0x00081f1f) hwr_training_navi_pane_g3

0xe7d7,	// (0x00081f2f) hwr_training_navi_pane_g4_ParamLimits

0xe7d7,	// (0x00081f2f) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x00082fbf) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x00082fbf) hwr_training_navi_pane_g

0xe7e4,	// (0x00081f3c) hwr_training_navi_pane_t1

0x7cc7,	// (0x0007b41f) list_single_hwr_training_instruct_pane_ParamLimits

0x7cc7,	// (0x0007b41f) list_single_hwr_training_instruct_pane

0xcb75,	// (0x000802cd) list_single_hwr_training_instruct_pane_t1

0xc239,	// (0x0007f991) bg_frame_shadow_pane_g1

0xcb84,	// (0x000802dc) bg_frame_shadow_pane_g2

0xcb8c,	// (0x000802e4) bg_frame_shadow_pane_g3

0xcb94,	// (0x000802ec) bg_frame_shadow_pane_g4

0xcb9c,	// (0x000802f4) bg_frame_shadow_pane_g5

0xcba4,	// (0x000802fc) bg_frame_shadow_pane_g6

0xcbac,	// (0x00080304) bg_frame_shadow_pane_g7

0x26f8,	// (0x00075e50) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x00082fca) bg_frame_shadow_pane_g

0xaf61,	// (0x0007e6b9) main_video_tele_dialer_pane

0x7cdf,	// (0x0007b437) aid_size_cell_video_keypad_ParamLimits

0x7cdf,	// (0x0007b437) aid_size_cell_video_keypad

0x7cf9,	// (0x0007b451) grid_video_dialer_keypad_pane_ParamLimits

0x7cf9,	// (0x0007b451) grid_video_dialer_keypad_pane

0x7d3b,	// (0x0007b493) video_down_pane_cp_ParamLimits

0x7d3b,	// (0x0007b493) video_down_pane_cp

0x7d6b,	// (0x0007b4c3) cell_video_dialer_keypad_pane_ParamLimits

0x7d6b,	// (0x0007b4c3) cell_video_dialer_keypad_pane

0xcbb4,	// (0x0008030c) bg_button_pane_cp08_ParamLimits

0xcbb4,	// (0x0008030c) bg_button_pane_cp08

0x7d8d,	// (0x0007b4e5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d8d,	// (0x0007b4e5) cell_video_dialer_keypad_pane_g1

0x74af,	// (0x0007ac07) mup3_rocker2_pane_ParamLimits

0x74af,	// (0x0007ac07) mup3_rocker2_pane

0xc2f9,	// (0x0007fa51) mup3_rocker2_pane_g1

0x61a8,	// (0x00079900) main_dialer2_pane

0xaf61,	// (0x0007e6b9) main_mp4_pane

0xe802,	// (0x00081f5a) main_mp4_pane_g1_ParamLimits

0xe802,	// (0x00081f5a) main_mp4_pane_g1

0xe802,	// (0x00081f5a) main_mp4_pane_g2_ParamLimits

0xe802,	// (0x00081f5a) main_mp4_pane_g2

0x7dc8,	// (0x0007b520) main_mp4_pane_g3_ParamLimits

0x7dc8,	// (0x0007b520) main_mp4_pane_g3

0xe810,	// (0x00081f68) main_mp4_pane_g4_ParamLimits

0xe810,	// (0x00081f68) main_mp4_pane_g4

0xe83e,	// (0x00081f96) main_mp4_pane_g5_ParamLimits

0xe83e,	// (0x00081f96) main_mp4_pane_g5

0x0007,

0xf892,	// (0x00082fea) main_mp4_pane_g_ParamLimits

0xf892,	// (0x00082fea) main_mp4_pane_g

0xe8b2,	// (0x0008200a) main_mp4_pane_t1_ParamLimits

0xe8b2,	// (0x0008200a) main_mp4_pane_t1

0xe90a,	// (0x00082062) main_mp4_pane_t2_ParamLimits

0xe90a,	// (0x00082062) main_mp4_pane_t2

0xcbc0,	// (0x00080318) main_mp4_pane_t3_ParamLimits

0xcbc0,	// (0x00080318) main_mp4_pane_t3

0xe95c,	// (0x000820b4) main_mp4_pane_t4_ParamLimits

0xe95c,	// (0x000820b4) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x00082ffb) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x00082ffb) main_mp4_pane_t

0xe99c,	// (0x000820f4) mp4_progress_pane_ParamLimits

0xe99c,	// (0x000820f4) mp4_progress_pane

0xe9e0,	// (0x00082138) mp4_rocker_pane_ParamLimits

0xe9e0,	// (0x00082138) mp4_rocker_pane

0xcbee,	// (0x00080346) mp4_progress_pane_t1

0xcc05,	// (0x0008035d) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x00083004) mp4_progress_pane_t

0xcc1c,	// (0x00080374) mup_progress_pane_cp04

0xc2f9,	// (0x0007fa51) mp4_rocker_pane_g1

0x7df8,	// (0x0007b550) aid_cell_size_keypad2_ParamLimits

0x7df8,	// (0x0007b550) aid_cell_size_keypad2

0x7e12,	// (0x0007b56a) dialer2_ne_pane_ParamLimits

0x7e12,	// (0x0007b56a) dialer2_ne_pane

0x7e27,	// (0x0007b57f) grid_dialer2_keypad_pane_ParamLimits

0x7e27,	// (0x0007b57f) grid_dialer2_keypad_pane

0xc0e6,	// (0x0007f83e) bg_popup_call_pane_cp07_ParamLimits

0xc0e6,	// (0x0007f83e) bg_popup_call_pane_cp07

0x7e3d,	// (0x0007b595) dialer2_ne_pane_t1_ParamLimits

0x7e3d,	// (0x0007b595) dialer2_ne_pane_t1

0x7e7a,	// (0x0007b5d2) cell_dialer2_keypad_pane_ParamLimits

0x7e7a,	// (0x0007b5d2) cell_dialer2_keypad_pane

0xcc3a,	// (0x00080392) bg_button_pane_pane_cp04_ParamLimits

0xcc3a,	// (0x00080392) bg_button_pane_pane_cp04

0x7e9c,	// (0x0007b5f4) cell_dialer2_keypad_pane_g1_ParamLimits

0x7e9c,	// (0x0007b5f4) cell_dialer2_keypad_pane_g1

0x325d,	// (0x000769b5) aid_placing_vt_set_content_ParamLimits

0x325d,	// (0x000769b5) aid_placing_vt_set_content

0x327f,	// (0x000769d7) aid_placing_vt_set_title_ParamLimits

0x327f,	// (0x000769d7) aid_placing_vt_set_title

0xaf61,	// (0x0007e6b9) main_image3_pane

0x7f2b,	// (0x0007b683) area_side_right_pane_cp01_ParamLimits

0x7f2b,	// (0x0007b683) area_side_right_pane_cp01

0xe802,	// (0x00081f5a) main_image3_pane_g1_ParamLimits

0xe802,	// (0x00081f5a) main_image3_pane_g1

0x7f42,	// (0x0007b69a) main_image3_pane_g2_ParamLimits

0x7f42,	// (0x0007b69a) main_image3_pane_g2

0x7f68,	// (0x0007b6c0) main_image3_pane_g3_ParamLimits

0x7f68,	// (0x0007b6c0) main_image3_pane_g3

0x7f8e,	// (0x0007b6e6) main_image3_pane_g4_ParamLimits

0x7f8e,	// (0x0007b6e6) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x00083013) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x00083013) main_image3_pane_g

0x7fb4,	// (0x0007b70c) main_image3_pane_t1_ParamLimits

0x7fb4,	// (0x0007b70c) main_image3_pane_t1

0x800c,	// (0x0007b764) main_image3_pane_t2_ParamLimits

0x800c,	// (0x0007b764) main_image3_pane_t2

0x805e,	// (0x0007b7b6) main_image3_pane_t3_ParamLimits

0x805e,	// (0x0007b7b6) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0008301c) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0008301c) main_image3_pane_t

0xafbc,	// (0x0007e714) grid_sctrl_middle_pane_cp01_ParamLimits

0xafbc,	// (0x0007e714) grid_sctrl_middle_pane_cp01

0x80de,	// (0x0007b836) cell_sctrl_middle_pane_cp01_ParamLimits

0x80de,	// (0x0007b836) cell_sctrl_middle_pane_cp01

0x80fb,	// (0x0007b853) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x80fb,	// (0x0007b853) cell_sctrl_middle_pane_cp01_g1

0xaf61,	// (0x0007e6b9) main_call4_pane

0x8111,	// (0x0007b869) aid_size_button_call4_ParamLimits

0x8111,	// (0x0007b869) aid_size_button_call4

0x813e,	// (0x0007b896) call4_windows_pane_ParamLimits

0x813e,	// (0x0007b896) call4_windows_pane

0x8154,	// (0x0007b8ac) grid_call4_button_pane_ParamLimits

0x8154,	// (0x0007b8ac) grid_call4_button_pane

0xcc5e,	// (0x000803b6) call4_windows_conf_pane

0x817b,	// (0x0007b8d3) popup_call4_audio_first_window_ParamLimits

0x817b,	// (0x0007b8d3) popup_call4_audio_first_window

0x819b,	// (0x0007b8f3) popup_call4_audio_second_window_ParamLimits

0x819b,	// (0x0007b8f3) popup_call4_audio_second_window

0xcc91,	// (0x000803e9) popup_call4_audio_wait_window_ParamLimits

0xcc91,	// (0x000803e9) popup_call4_audio_wait_window

0x81ad,	// (0x0007b905) cell_call4_button_pane_ParamLimits

0x81ad,	// (0x0007b905) cell_call4_button_pane

0x81d2,	// (0x0007b92a) bg_button_pane_cp09_ParamLimits

0x81d2,	// (0x0007b92a) bg_button_pane_cp09

0x81de,	// (0x0007b936) cell_call4_button_pane_g1_ParamLimits

0x81de,	// (0x0007b936) cell_call4_button_pane_g1

0x8204,	// (0x0007b95c) cell_call4_button_pane_t1_ParamLimits

0x8204,	// (0x0007b95c) cell_call4_button_pane_t1

0xcca5,	// (0x000803fd) popup_call4_audio_conf_window_ParamLimits

0xcca5,	// (0x000803fd) popup_call4_audio_conf_window

0x7509,	// (0x0007ac61) mup3_progress_pane_t1_ParamLimits

0x7527,	// (0x0007ac7f) mup3_progress_pane_t2_ParamLimits

0xc617,	// (0x0007fd6f) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x00082eec) mup3_progress_pane_t_ParamLimits

0xc634,	// (0x0007fd8c) mup_progress_pane_cp03_ParamLimits

0x7ad1,	// (0x0007b229) mup3_control_keys_pane_g4_copy1

0xe9ca,	// (0x00082122) mp4_rocker2_pane_ParamLimits

0xe9ca,	// (0x00082122) mp4_rocker2_pane

0xccb9,	// (0x00080411) mp4_rocker2_pane_g1

0xccc1,	// (0x00080419) mp4_rocker2_pane_g2

0xea62,	// (0x000821ba) mp4_rocker2_pane_g3

0xea6a,	// (0x000821c2) mp4_rocker2_pane_g4

0xea72,	// (0x000821ca) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x00083025) mp4_rocker2_pane_g

0xaf61,	// (0x0007e6b9) main_camera4_pane

0xaf61,	// (0x0007e6b9) main_video4_pane

0x7d0d,	// (0x0007b465) main_video_tele_dialer_pane_t1_ParamLimits

0x7d0d,	// (0x0007b465) main_video_tele_dialer_pane_t1

0x7d24,	// (0x0007b47c) main_video_tele_dialer_pane_t2_ParamLimits

0x7d24,	// (0x0007b47c) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x00082fdb) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x00082fdb) main_video_tele_dialer_pane_t

0x8242,	// (0x0007b99a) cam4_autofocus_pane_ParamLimits

0x8242,	// (0x0007b99a) cam4_autofocus_pane

0x8256,	// (0x0007b9ae) cam4_image_uncrop_pane_ParamLimits

0x8256,	// (0x0007b9ae) cam4_image_uncrop_pane

0x826d,	// (0x0007b9c5) cam4_indicators_pane_ParamLimits

0x826d,	// (0x0007b9c5) cam4_indicators_pane

0x8291,	// (0x0007b9e9) main_camera4_pane_g1_ParamLimits

0x8291,	// (0x0007b9e9) main_camera4_pane_g1

0x829d,	// (0x0007b9f5) main_camera4_pane_g2_ParamLimits

0x829d,	// (0x0007b9f5) main_camera4_pane_g2

0x829d,	// (0x0007b9f5) main_camera4_pane_g3_ParamLimits

0x829d,	// (0x0007b9f5) main_camera4_pane_g3

0x82a9,	// (0x0007ba01) main_camera4_pane_g4_ParamLimits

0x82a9,	// (0x0007ba01) main_camera4_pane_g4

0x82b5,	// (0x0007ba0d) main_camera4_pane_g5_ParamLimits

0x82b5,	// (0x0007ba0d) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x00083030) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x00083030) main_camera4_pane_g

0x82d2,	// (0x0007ba2a) main_camera4_pane_t1_ParamLimits

0x82d2,	// (0x0007ba2a) main_camera4_pane_t1

0xc528,	// (0x0007fc80) bg_tb_trans_pane_cp06

0xea9c,	// (0x000821f4) cam4_indicators_pane_g1

0xeaac,	// (0x00082204) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0008304b) cam4_indicators_pane_g

0xeacc,	// (0x00082224) cam4_indicators_pane_t1

0x8327,	// (0x0007ba7f) main_video4_pane_g1_ParamLimits

0x8327,	// (0x0007ba7f) main_video4_pane_g1

0x8339,	// (0x0007ba91) main_video4_pane_g2_ParamLimits

0x8339,	// (0x0007ba91) main_video4_pane_g2

0x8339,	// (0x0007ba91) main_video4_pane_g3_ParamLimits

0x8339,	// (0x0007ba91) main_video4_pane_g3

0x8348,	// (0x0007baa0) main_video4_pane_g4_ParamLimits

0x8348,	// (0x0007baa0) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x00083052) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x00083052) main_video4_pane_g

0x8366,	// (0x0007babe) vid4_indicators_pane_ParamLimits

0x8366,	// (0x0007babe) vid4_indicators_pane

0x838e,	// (0x0007bae6) video4_image_uncrop_cif_pane_ParamLimits

0x838e,	// (0x0007bae6) video4_image_uncrop_cif_pane

0x83a6,	// (0x0007bafe) video4_image_uncrop_nhd_pane_ParamLimits

0x83a6,	// (0x0007bafe) video4_image_uncrop_nhd_pane

0x83ba,	// (0x0007bb12) video4_image_uncrop_vga_pane_ParamLimits

0x83ba,	// (0x0007bb12) video4_image_uncrop_vga_pane

0xafbc,	// (0x0007e714) bg_tb_trans_pane_cp07

0xea9c,	// (0x000821f4) vid4_indicators_pane_g1

0xeaee,	// (0x00082246) vid4_indicators_pane_g2

0xeafe,	// (0x00082256) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0008305d) vid4_indicators_pane_g

0xeb2b,	// (0x00082283) vid4_indicators_pane_t1

0x83d2,	// (0x0007bb2a) cam4_autofocus_pane_g1

0x83da,	// (0x0007bb32) cam4_autofocus_pane_g2

0x83e2,	// (0x0007bb3a) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x00083068) cam4_autofocus_pane_g

0x83ea,	// (0x0007bb42) cam4_autofocus_pane_g3_copy1

0x7d4f,	// (0x0007b4a7) video_down_pane_cp_t1

0x7d5d,	// (0x0007b4b5) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x00082fe0) video_down_pane_cp_t

0xafbc,	// (0x0007e714) popup_vitu2_window_ParamLimits

0xafbc,	// (0x0007e714) popup_vitu2_window

0x83f2,	// (0x0007bb4a) aid_size_cell2_itu2_ParamLimits

0x83f2,	// (0x0007bb4a) aid_size_cell2_itu2

0x8418,	// (0x0007bb70) aid_size_cell_itu2_ParamLimits

0x8418,	// (0x0007bb70) aid_size_cell_itu2

0x8469,	// (0x0007bbc1) bg_popup_window_pane_cp09_ParamLimits

0x8469,	// (0x0007bbc1) bg_popup_window_pane_cp09

0x8477,	// (0x0007bbcf) field_vitu2_entry_pane_ParamLimits

0x8477,	// (0x0007bbcf) field_vitu2_entry_pane

0x848e,	// (0x0007bbe6) grid_vitu2_function_pane_ParamLimits

0x848e,	// (0x0007bbe6) grid_vitu2_function_pane

0x84c3,	// (0x0007bc1b) grid_vitu2_itu_pane_ParamLimits

0x84c3,	// (0x0007bc1b) grid_vitu2_itu_pane

0x852a,	// (0x0007bc82) cell_vitu2_itu_pane_ParamLimits

0x852a,	// (0x0007bc82) cell_vitu2_itu_pane

0x8552,	// (0x0007bcaa) cell_vitu2_function_pane_ParamLimits

0x8552,	// (0x0007bcaa) cell_vitu2_function_pane

0xccdb,	// (0x00080433) bg_popup_call_pane_cp08_ParamLimits

0xccdb,	// (0x00080433) bg_popup_call_pane_cp08

0xccf2,	// (0x0008044a) field_vitu2_entry_pane_g1

0xccfe,	// (0x00080456) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0008306f) field_vitu2_entry_pane_g

0x0dce,	// (0x00074526) field_vitu2_entry_pane_t1_ParamLimits

0x0dce,	// (0x00074526) field_vitu2_entry_pane_t1

0xcd18,	// (0x00080470) field_vitu2_entry_pane_t2_ParamLimits

0xcd18,	// (0x00080470) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x00083076) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x00083076) field_vitu2_entry_pane_t

0x8591,	// (0x0007bce9) bg_button_pane_cp010_ParamLimits

0x8591,	// (0x0007bce9) bg_button_pane_cp010

0xeb45,	// (0x0008229d) cell_vitu2_itu_pane_g1

0x85ad,	// (0x0007bd05) cell_vitu2_itu_pane_t1_ParamLimits

0x85ad,	// (0x0007bd05) cell_vitu2_itu_pane_t1

0x0dfb,	// (0x00074553) cell_vitu2_itu_pane_t2_ParamLimits

0x0dfb,	// (0x00074553) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x00083080) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x00083080) cell_vitu2_itu_pane_t

0xafbc,	// (0x0007e714) bg_button_pane_cp011

0x860b,	// (0x0007bd63) cell_vitu2_function_pane_g1

0xaf61,	// (0x0007e6b9) main_myfav_hc_pane

0x80aa,	// (0x0007b802) popup_image3_note_pane_ParamLimits

0x80aa,	// (0x0007b802) popup_image3_note_pane

0x80c4,	// (0x0007b81c) popup_image3_tool_bar_pane_ParamLimits

0x80c4,	// (0x0007b81c) popup_image3_tool_bar_pane

0x0e89,	// (0x000745e1) cell_vitu2_itu_pane_t3_ParamLimits

0x0e89,	// (0x000745e1) cell_vitu2_itu_pane_t3

0xaf61,	// (0x0007e6b9) bg_popup_trans_pane

0xcd3d,	// (0x00080495) grid_image3_tool_bar_pane

0xcd47,	// (0x0008049f) bg_popup_trans_pane_g1

0x37a5,	// (0x00076efd) bg_popup_trans_pane_g2

0xcd4f,	// (0x000804a7) bg_popup_trans_pane_g3

0xcd57,	// (0x000804af) bg_popup_trans_pane_g4

0xcd5f,	// (0x000804b7) bg_popup_trans_pane_g5

0xcd67,	// (0x000804bf) bg_popup_trans_pane_g6

0xcd6f,	// (0x000804c7) bg_popup_trans_pane_g7

0xcd77,	// (0x000804cf) bg_popup_trans_pane_g8

0x3785,	// (0x00076edd) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x00083087) bg_popup_trans_pane_g

0xcd7f,	// (0x000804d7) cell_image3_tool_bar_pane_ParamLimits

0xcd7f,	// (0x000804d7) cell_image3_tool_bar_pane

0xc2f9,	// (0x0007fa51) cell_image3_tool_bar_pane_g1

0xaf61,	// (0x0007e6b9) bg_popup_trans_pane_cp1

0xcd93,	// (0x000804eb) popup_image3_note_pane_t1

0xcda1,	// (0x000804f9) popup_image3_note_pane_t2

0xcdaf,	// (0x00080507) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0008309a) popup_image3_note_pane_t

0xecc5,	// (0x0008241d) popup_image3_note_pane_t3_copy1

0x861e,	// (0x0007bd76) bg_myfav_hc_instruction_pane_ParamLimits

0x861e,	// (0x0007bd76) bg_myfav_hc_instruction_pane

0x8630,	// (0x0007bd88) cell_myfav_contact_pane_ParamLimits

0x8630,	// (0x0007bd88) cell_myfav_contact_pane

0x864a,	// (0x0007bda2) cell_myfav_contact_pane_cp1_ParamLimits

0x864a,	// (0x0007bda2) cell_myfav_contact_pane_cp1

0x8660,	// (0x0007bdb8) cell_myfav_contact_pane_cp2_ParamLimits

0x8660,	// (0x0007bdb8) cell_myfav_contact_pane_cp2

0x8676,	// (0x0007bdce) cell_myfav_contact_pane_cp3_ParamLimits

0x8676,	// (0x0007bdce) cell_myfav_contact_pane_cp3

0x868b,	// (0x0007bde3) cell_myfav_contact_pane_cp4_ParamLimits

0x868b,	// (0x0007bde3) cell_myfav_contact_pane_cp4

0x869f,	// (0x0007bdf7) cell_myfav_contact_pane_cp5_ParamLimits

0x869f,	// (0x0007bdf7) cell_myfav_contact_pane_cp5

0x86b3,	// (0x0007be0b) cell_myfav_contact_pane_cp6_ParamLimits

0x86b3,	// (0x0007be0b) cell_myfav_contact_pane_cp6

0x86c7,	// (0x0007be1f) cell_myfav_contact_pane_cp7_ParamLimits

0x86c7,	// (0x0007be1f) cell_myfav_contact_pane_cp7

0xecd3,	// (0x0008242b) listscroll_gen_pane_cp05

0x86df,	// (0x0007be37) main_myfav_hc_pane_g1_ParamLimits

0x86df,	// (0x0007be37) main_myfav_hc_pane_g1

0x86f5,	// (0x0007be4d) main_myfav_hc_pane_g2_ParamLimits

0x86f5,	// (0x0007be4d) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x000830a1) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x000830a1) main_myfav_hc_pane_g

0x871f,	// (0x0007be77) main_myfav_hc_pane_t1_ParamLimits

0x871f,	// (0x0007be77) main_myfav_hc_pane_t1

0xecdc,	// (0x00082434) main_myfav_hc_pane_t2_ParamLimits

0xecdc,	// (0x00082434) main_myfav_hc_pane_t2

0xecee,	// (0x00082446) main_myfav_hc_pane_t3_ParamLimits

0xecee,	// (0x00082446) main_myfav_hc_pane_t3

0x8734,	// (0x0007be8c) main_myfav_hc_pane_t4_ParamLimits

0x8734,	// (0x0007be8c) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x000830a8) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x000830a8) main_myfav_hc_pane_t

0xc2f9,	// (0x0007fa51) bg_myfav_hc_instruction_pane_g1

0xed00,	// (0x00082458) cell_myfav_contact_pane_g1_ParamLimits

0xed00,	// (0x00082458) cell_myfav_contact_pane_g1

0xed00,	// (0x00082458) cell_myfav_contact_pane_g2_ParamLimits

0xed00,	// (0x00082458) cell_myfav_contact_pane_g2

0xed0c,	// (0x00082464) cell_myfav_contact_pane_g3_ParamLimits

0xed0c,	// (0x00082464) cell_myfav_contact_pane_g3

0xc601,	// (0x0007fd59) cell_myfav_contact_pane_g4_ParamLimits

0xc601,	// (0x0007fd59) cell_myfav_contact_pane_g4

0xed19,	// (0x00082471) cell_myfav_contact_pane_g5_ParamLimits

0xed19,	// (0x00082471) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x000830b3) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x000830b3) cell_myfav_contact_pane_g

0x870b,	// (0x0007be63) main_myfav_hc_pane_g3_ParamLimits

0x870b,	// (0x0007be63) main_myfav_hc_pane_g3

0x1a37,	// (0x0007518f) popup_adpt_find_window

0x8758,	// (0x0007beb0) afind_page_pane_ParamLimits

0x8758,	// (0x0007beb0) afind_page_pane

0x876d,	// (0x0007bec5) aid_size_cell_afind_ParamLimits

0x876d,	// (0x0007bec5) aid_size_cell_afind

0x878b,	// (0x0007bee3) bg_popup_sub_pane_cp09_ParamLimits

0x878b,	// (0x0007bee3) bg_popup_sub_pane_cp09

0x8798,	// (0x0007bef0) find_pane_cp01_ParamLimits

0x8798,	// (0x0007bef0) find_pane_cp01

0xed25,	// (0x0008247d) grid_afind_control_pane_ParamLimits

0xed25,	// (0x0008247d) grid_afind_control_pane

0x87a5,	// (0x0007befd) grid_afind_pane_ParamLimits

0x87a5,	// (0x0007befd) grid_afind_pane

0x87c3,	// (0x0007bf1b) cell_afind_pane_ParamLimits

0x87c3,	// (0x0007bf1b) cell_afind_pane

0xc2f9,	// (0x0007fa51) afind_page_pane_g1

0x8812,	// (0x0007bf6a) afind_page_pane_g2

0x881b,	// (0x0007bf73) afind_page_pane_g3

0x0002,

0xf966,	// (0x000830be) afind_page_pane_g

0x8824,	// (0x0007bf7c) afind_page_pane_t1

0xed39,	// (0x00082491) cell_afind_grid_control_pane_ParamLimits

0xed39,	// (0x00082491) cell_afind_grid_control_pane

0xcc3a,	// (0x00080392) bg_button_pane_cp69_ParamLimits

0xcc3a,	// (0x00080392) bg_button_pane_cp69

0x8844,	// (0x0007bf9c) cell_afind_pane_g1_ParamLimits

0x8844,	// (0x0007bf9c) cell_afind_pane_g1

0x8851,	// (0x0007bfa9) cell_afind_pane_t1_ParamLimits

0x8851,	// (0x0007bfa9) cell_afind_pane_t1

0x31de,	// (0x00076936) bg_button_pane_cp72

0xed48,	// (0x000824a0) cell_afind_grid_control_pane_g1

0x598e,	// (0x000790e6) aid_image_placing_area_ParamLimits

0x598e,	// (0x000790e6) aid_image_placing_area

0xc914,	// (0x0008006c) field_vitu_entry_pane_g1_ParamLimits

0xc914,	// (0x0008006c) field_vitu_entry_pane_g1

0xc920,	// (0x00080078) field_vitu_entry_pane_g2_ParamLimits

0xc920,	// (0x00080078) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x00082f6b) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x00082f6b) field_vitu_entry_pane_g

0x7b84,	// (0x0007b2dc) cell_vitu_itu_pane_g1_ParamLimits

0x7bc6,	// (0x0007b31e) cell_vitu_itu_pane_t3_ParamLimits

0x7bc6,	// (0x0007b31e) cell_vitu_itu_pane_t3

0xcbee,	// (0x00080346) mp4_progress_pane_t1_ParamLimits

0xcc05,	// (0x0008035d) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x00083004) mp4_progress_pane_t_ParamLimits

0xcc1c,	// (0x00080374) mup_progress_pane_cp04_ParamLimits

0x8746,	// (0x0007be9e) main_myfav_hc_pane_t5_ParamLimits

0x8746,	// (0x0007be9e) main_myfav_hc_pane_t5

0xaf83,	// (0x0007e6db) aid_zoom_text_primary

0x1a37,	// (0x0007518f) popup_adpt_find_window_ParamLimits

0xafbc,	// (0x0007e714) main_cam_set_pane

0x827f,	// (0x0007b9d7) cam4_zoom_pane_ParamLimits

0x827f,	// (0x0007b9d7) cam4_zoom_pane

0x8863,	// (0x0007bfbb) main_cam_set_pane_g1_ParamLimits

0x8863,	// (0x0007bfbb) main_cam_set_pane_g1

0x8871,	// (0x0007bfc9) main_cam_set_pane_g2_ParamLimits

0x8871,	// (0x0007bfc9) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x000830c5) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x000830c5) main_cam_set_pane_g

0x8890,	// (0x0007bfe8) main_cam_set_pane_t1_ParamLimits

0x8890,	// (0x0007bfe8) main_cam_set_pane_t1

0x88a2,	// (0x0007bffa) main_cset_listscroll_pane_ParamLimits

0x88a2,	// (0x0007bffa) main_cset_listscroll_pane

0x88c0,	// (0x0007c018) main_cset_slider_pane_ParamLimits

0x88c0,	// (0x0007c018) main_cset_slider_pane

0xed59,	// (0x000824b1) main_cset_list_pane_ParamLimits

0xed59,	// (0x000824b1) main_cset_list_pane

0xed69,	// (0x000824c1) scroll_pane_cp028

0x88e4,	// (0x0007c03c) aid_area_touch_slider

0x8900,	// (0x0007c058) cset_slider_pane

0x892a,	// (0x0007c082) main_cset_slider_pane_g1

0x893f,	// (0x0007c097) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x000830ca) main_cset_slider_pane_g

0xeda2,	// (0x000824fa) main_cset_slider_pane_t1

0x89fb,	// (0x0007c153) main_cset_slider_pane_t2

0x8a15,	// (0x0007c16d) main_cset_slider_pane_t3

0x8a2f,	// (0x0007c187) main_cset_slider_pane_t4

0x8a49,	// (0x0007c1a1) main_cset_slider_pane_t5

0x8a63,	// (0x0007c1bb) main_cset_slider_pane_t6

0x8a78,	// (0x0007c1d0) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x000830ef) main_cset_slider_pane_t

0x8b7c,	// (0x0007c2d4) cset_list_set_pane_ParamLimits

0x8b7c,	// (0x0007c2d4) cset_list_set_pane

0x8b8d,	// (0x0007c2e5) aid_position_infowindow_above

0x8b95,	// (0x0007c2ed) aid_position_infowindow_below

0x8b9d,	// (0x0007c2f5) cset_list_set_pane_g1_ParamLimits

0x8b9d,	// (0x0007c2f5) cset_list_set_pane_g1

0x0ee7,	// (0x0007463f) cset_list_set_pane_g3_ParamLimits

0x0ee7,	// (0x0007463f) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0008310e) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0008310e) cset_list_set_pane_g

0x0ef6,	// (0x0007464e) cset_list_set_pane_t1_ParamLimits

0x0ef6,	// (0x0007464e) cset_list_set_pane_t1

0xafbc,	// (0x0007e714) list_highlight_pane_cp021_ParamLimits

0xafbc,	// (0x0007e714) list_highlight_pane_cp021

0x5278,	// (0x000789d0) cset_slider_pane_g1

0x528a,	// (0x000789e2) cset_slider_pane_g2

0x5281,	// (0x000789d9) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x00083113) cset_slider_pane_g

0xeb57,	// (0x000822af) aid_area_touch_cam4_zoom

0xeb5f,	// (0x000822b7) cam4_zoom_cont_pane

0xeb67,	// (0x000822bf) cam4_zoom_pane_g1

0xeb6f,	// (0x000822c7) cam4_zoom_pane_g2

0x8ba9,	// (0x0007c301) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0008311a) cam4_zoom_pane_g

0xee42,	// (0x0008259a) cam4_zoom_cont_pane_g1

0xee4b,	// (0x000825a3) cam4_zoom_cont_pane_g2

0xee54,	// (0x000825ac) cam4_zoom_cont_pane_g3

0x0002,

0x056f,	// (0x00073cc7) cam4_zoom_cont_pane_g

0x812f,	// (0x0007b887) call4_image_pane_ParamLimits

0x812f,	// (0x0007b887) call4_image_pane

0xcc5e,	// (0x000803b6) call4_windows_conf_pane_ParamLimits

0xcc71,	// (0x000803c9) popup_call4_audio_in_window_ParamLimits

0xcc71,	// (0x000803c9) popup_call4_audio_in_window

0xaf61,	// (0x0007e6b9) bg_popup_call2_act_pane_cp02

0xcc9d,	// (0x000803f5) call4_list_conf_pane

0xc2f9,	// (0x0007fa51) call4_image_pane_g1

0xc2f9,	// (0x0007fa51) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x00082e2c) call4_image_pane_g

0xee5d,	// (0x000825b5) list_single_graphic_popup_conf4_pane_ParamLimits

0xee5d,	// (0x000825b5) list_single_graphic_popup_conf4_pane

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp022

0xee70,	// (0x000825c8) list_single_graphic_popup_conf4_pane_g1

0x4871,	// (0x00077fc9) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c9,	// (0x00083121) list_single_graphic_popup_conf4_pane_g

0xee78,	// (0x000825d0) list_single_graphic_popup_conf4_pane_t1

0x339b,	// (0x00076af3) popup_vtel_slider_window_ParamLimits

0x339b,	// (0x00076af3) popup_vtel_slider_window

0xcc28,	// (0x00080380) dialer2_ne_pane_t2_ParamLimits

0xcc28,	// (0x00080380) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x00083009) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x00083009) dialer2_ne_pane_t

0xc0e6,	// (0x0007f83e) bg_popup_sub_pane_cp010_ParamLimits

0xc0e6,	// (0x0007f83e) bg_popup_sub_pane_cp010

0x8bb1,	// (0x0007c309) popup_vtel_slider_window_g1_ParamLimits

0x8bb1,	// (0x0007c309) popup_vtel_slider_window_g1

0x8bc4,	// (0x0007c31c) popup_vtel_slider_window_g2_ParamLimits

0x8bc4,	// (0x0007c31c) popup_vtel_slider_window_g2

0x0003,

0xf9ce,	// (0x00083126) popup_vtel_slider_window_g_ParamLimits

0xf9ce,	// (0x00083126) popup_vtel_slider_window_g

0x8c18,	// (0x0007c370) vtel_slider_pane_ParamLimits

0x8c18,	// (0x0007c370) vtel_slider_pane

0x8c3a,	// (0x0007c392) vtel_slider_pane_g1_ParamLimits

0x8c3a,	// (0x0007c392) vtel_slider_pane_g1

0x8c4e,	// (0x0007c3a6) vtel_slider_pane_g2_ParamLimits

0x8c4e,	// (0x0007c3a6) vtel_slider_pane_g2

0x8c66,	// (0x0007c3be) vtel_slider_pane_g3_ParamLimits

0x8c66,	// (0x0007c3be) vtel_slider_pane_g3

0x8c3a,	// (0x0007c392) vtel_slider_pane_g4_ParamLimits

0x8c3a,	// (0x0007c392) vtel_slider_pane_g4

0x8c7c,	// (0x0007c3d4) vtel_slider_pane_g5_ParamLimits

0x8c7c,	// (0x0007c3d4) vtel_slider_pane_g5

0x0004,

0xf9d7,	// (0x0008312f) vtel_slider_pane_g_ParamLimits

0xf9d7,	// (0x0008312f) vtel_slider_pane_g

0xafbc,	// (0x0007e714) main_gallery2_pane

0x8444,	// (0x0007bb9c) aid_size_row_itut2_dropdow_list_ParamLimits

0x8444,	// (0x0007bb9c) aid_size_row_itut2_dropdow_list

0x84a7,	// (0x0007bbff) grid_vitu2_function_top_pane_ParamLimits

0x84a7,	// (0x0007bbff) grid_vitu2_function_top_pane

0x84ec,	// (0x0007bc44) popup_vitu2_dropdown_list_window_ParamLimits

0x84ec,	// (0x0007bc44) popup_vitu2_dropdown_list_window

0x8508,	// (0x0007bc60) popup_vitu2_match_list_window

0x8c92,	// (0x0007c3ea) cell_vitu2_function_top_pane_ParamLimits

0x8c92,	// (0x0007c3ea) cell_vitu2_function_top_pane

0x8caa,	// (0x0007c402) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8caa,	// (0x0007c402) cell_vitu2_function_top_pane_cp01

0x8cc6,	// (0x0007c41e) cell_vitu2_function_top_wide_pane_ParamLimits

0x8cc6,	// (0x0007c41e) cell_vitu2_function_top_wide_pane

0xafbc,	// (0x0007e714) bg_button_pane_cp012

0x8ce2,	// (0x0007c43a) cell_vitu2_function_top_pane_g1

0xeb77,	// (0x000822cf) bg_button_pane_cp013_ParamLimits

0xeb77,	// (0x000822cf) bg_button_pane_cp013

0x8cf6,	// (0x0007c44e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8cf6,	// (0x0007c44e) cell_vitu2_function_top_wide_pane_g1

0xafbc,	// (0x0007e714) bg_popup_sub_pane_cp20

0x8d0e,	// (0x0007c466) list_vitu2_match_list_pane

0xcd47,	// (0x0008049f) bg_popup_sub_pane_cp20_g1

0xcd4f,	// (0x000804a7) bg_popup_sub_pane_cp20_g2

0x37a5,	// (0x00076efd) bg_popup_sub_pane_cp20_g3

0xcd57,	// (0x000804af) bg_popup_sub_pane_cp20_g4

0x3785,	// (0x00076edd) bg_popup_sub_pane_cp20_g5

0xee8e,	// (0x000825e6) bg_popup_sub_pane_cp20_g6

0xcd67,	// (0x000804bf) bg_popup_sub_pane_cp20_g7

0xcd6f,	// (0x000804c7) bg_popup_sub_pane_cp20_g8

0xcd77,	// (0x000804cf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e2,	// (0x0008313a) bg_popup_sub_pane_cp20_g

0xeb93,	// (0x000822eb) list_vitu2_match_list_item_pane_ParamLimits

0xeb93,	// (0x000822eb) list_vitu2_match_list_item_pane

0xeba5,	// (0x000822fd) list_vitu2_match_list_item_pane_t1

0xaf61,	// (0x0007e6b9) bg_popup_sub_pane_cp21

0x477a,	// (0x00077ed2) grid_vitu2_dropdown_list_pane

0x8d2c,	// (0x0007c484) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8d2c,	// (0x0007c484) cell_vitu2_dropdown_list_char_pane

0x8d4d,	// (0x0007c4a5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8d4d,	// (0x0007c4a5) cell_vitu2_dropdown_list_ctrl_pane

0xee96,	// (0x000825ee) cell_vitu2_dropdown_list_char_pane_g1

0xee9f,	// (0x000825f7) cell_vitu2_dropdown_list_char_pane_g2

0xeea8,	// (0x00082600) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x05ac,	// (0x00073d04) cell_vitu2_dropdown_list_char_pane_g

0x8d79,	// (0x0007c4d1) cell_vitu2_dropdown_list_char_pane_t1

0x8d87,	// (0x0007c4df) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8d87,	// (0x0007c4df) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8d94,	// (0x0007c4ec) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8d94,	// (0x0007c4ec) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8da1,	// (0x0007c4f9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8da1,	// (0x0007c4f9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8dae,	// (0x0007c506) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8dae,	// (0x0007c506) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc528,	// (0x0007fc80) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc528,	// (0x0007fc80) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9ff,	// (0x00083157) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9ff,	// (0x00083157) cell_vitu2_dropdown_list_ctrl_pane_g

0x8dca,	// (0x0007c522) aid_size_cell_gallery2_ParamLimits

0x8dca,	// (0x0007c522) aid_size_cell_gallery2

0x8de8,	// (0x0007c540) grid_gallery2_pane_ParamLimits

0x8de8,	// (0x0007c540) grid_gallery2_pane

0x79e9,	// (0x0007b141) scroll_pane_cp029_ParamLimits

0x79e9,	// (0x0007b141) scroll_pane_cp029

0x8dfc,	// (0x0007c554) cell_gallery2_pane_ParamLimits

0x8dfc,	// (0x0007c554) cell_gallery2_pane

0xeeb1,	// (0x00082609) cell_gallery2_pane_g2

0x8e55,	// (0x0007c5ad) cell_gallery2_pane_g3

0xeeb9,	// (0x00082611) cell_gallery2_pane_g4

0xeec1,	// (0x00082619) cell_gallery2_pane_g5

0x2e5d,	// (0x000765b5) grid_highlight_pane_cp10

0x8508,	// (0x0007bc60) popup_vitu2_match_list_window_ParamLimits

0x8519,	// (0x0007bc71) popup_vitu2_query_window_ParamLimits

0x8519,	// (0x0007bc71) popup_vitu2_query_window

0xaf61,	// (0x0007e6b9) bg_vitu2_candi_button_pane

0xee96,	// (0x000825ee) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee9f,	// (0x000825f7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xeea8,	// (0x00082600) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f3a,	// (0x00074692) bg_button_pane_cp015

0x8e5d,	// (0x0007c5b5) bg_button_pane_cp016

0x8e6f,	// (0x0007c5c7) bg_button_pane_cp017

0xbde5,	// (0x0007f53d) bg_popup_sub_pane_cp22

0xeec9,	// (0x00082621) popup_vitu2_query_window_g1

0x0f69,	// (0x000746c1) popup_vitu2_query_window_g2

0x0002,

0xfa0a,	// (0x00083162) popup_vitu2_query_window_g

0x0f84,	// (0x000746dc) popup_vitu2_query_window_t1_ParamLimits

0x0f84,	// (0x000746dc) popup_vitu2_query_window_t1

0x0fb7,	// (0x0007470f) popup_vitu2_query_window_t2_ParamLimits

0x0fb7,	// (0x0007470f) popup_vitu2_query_window_t2

0x0fc9,	// (0x00074721) popup_vitu2_query_window_t3_ParamLimits

0x0fc9,	// (0x00074721) popup_vitu2_query_window_t3

0x8e91,	// (0x0007c5e9) popup_vitu2_query_window_t4_ParamLimits

0x8e91,	// (0x0007c5e9) popup_vitu2_query_window_t4

0x8eae,	// (0x0007c606) popup_vitu2_query_window_t5_ParamLimits

0x8eae,	// (0x0007c606) popup_vitu2_query_window_t5

0x0006,

0xfa11,	// (0x00083169) popup_vitu2_query_window_t_ParamLimits

0xfa11,	// (0x00083169) popup_vitu2_query_window_t

0xed51,	// (0x000824a9) main_cset_text_pane

0x88e4,	// (0x0007c03c) aid_area_touch_slider_ParamLimits

0x8900,	// (0x0007c058) cset_slider_pane_ParamLimits

0x892a,	// (0x0007c082) main_cset_slider_pane_g1_ParamLimits

0x893f,	// (0x0007c097) main_cset_slider_pane_g2_ParamLimits

0xed72,	// (0x000824ca) main_cset_slider_pane_g3_ParamLimits

0xed72,	// (0x000824ca) main_cset_slider_pane_g3

0x8954,	// (0x0007c0ac) main_cset_slider_pane_g4_ParamLimits

0x8954,	// (0x0007c0ac) main_cset_slider_pane_g4

0x8963,	// (0x0007c0bb) main_cset_slider_pane_g5_ParamLimits

0x8963,	// (0x0007c0bb) main_cset_slider_pane_g5

0x896f,	// (0x0007c0c7) main_cset_slider_pane_g6_ParamLimits

0x896f,	// (0x0007c0c7) main_cset_slider_pane_g6

0xf972,	// (0x000830ca) main_cset_slider_pane_g_ParamLimits

0xeda2,	// (0x000824fa) main_cset_slider_pane_t1_ParamLimits

0x89fb,	// (0x0007c153) main_cset_slider_pane_t2_ParamLimits

0x8a15,	// (0x0007c16d) main_cset_slider_pane_t3_ParamLimits

0x8a2f,	// (0x0007c187) main_cset_slider_pane_t4_ParamLimits

0x8a49,	// (0x0007c1a1) main_cset_slider_pane_t5_ParamLimits

0x8a63,	// (0x0007c1bb) main_cset_slider_pane_t6_ParamLimits

0x8a78,	// (0x0007c1d0) main_cset_slider_pane_t7_ParamLimits

0x8aa2,	// (0x0007c1fa) main_cset_slider_pane_t8_ParamLimits

0x8aa2,	// (0x0007c1fa) main_cset_slider_pane_t8

0x8aca,	// (0x0007c222) main_cset_slider_pane_t9_ParamLimits

0x8aca,	// (0x0007c222) main_cset_slider_pane_t9

0x8af2,	// (0x0007c24a) main_cset_slider_pane_t10_ParamLimits

0x8af2,	// (0x0007c24a) main_cset_slider_pane_t10

0x8b1a,	// (0x0007c272) main_cset_slider_pane_t11_ParamLimits

0x8b1a,	// (0x0007c272) main_cset_slider_pane_t11

0x8b42,	// (0x0007c29a) main_cset_slider_pane_t12_ParamLimits

0x8b42,	// (0x0007c29a) main_cset_slider_pane_t12

0x8b5f,	// (0x0007c2b7) main_cset_slider_pane_t13_ParamLimits

0x8b5f,	// (0x0007c2b7) main_cset_slider_pane_t13

0xf997,	// (0x000830ef) main_cset_slider_pane_t_ParamLimits

0xaf61,	// (0x0007e6b9) bg_popup_sub_pane_cp011

0xeed5,	// (0x0008262d) main_cset_text_pane_g1

0xeedd,	// (0x00082635) main_cset_text_pane_t1

0xeeeb,	// (0x00082643) main_cset_text_pane_t2

0xeef9,	// (0x00082651) main_cset_text_pane_t3

0xef07,	// (0x0008265f) main_cset_text_pane_t4

0xef15,	// (0x0008266d) main_cset_text_pane_t5

0xef23,	// (0x0008267b) main_cset_text_pane_t6

0xef31,	// (0x00082689) main_cset_text_pane_t7

0x0006,

0x05d4,	// (0x00073d2c) main_cset_text_pane_t

0xaf61,	// (0x0007e6b9) main_cam4_burst_pane

0xaf61,	// (0x0007e6b9) main_cam5_pane

0x8832,	// (0x0007bf8a) bg_button_pane_cp019

0x883b,	// (0x0007bf93) bg_button_pane_cp020

0xed7e,	// (0x000824d6) main_cset_slider_pane_g7_ParamLimits

0xed7e,	// (0x000824d6) main_cset_slider_pane_g7

0xed8a,	// (0x000824e2) main_cset_slider_pane_g8_ParamLimits

0xed8a,	// (0x000824e2) main_cset_slider_pane_g8

0x8983,	// (0x0007c0db) main_cset_slider_pane_g9_ParamLimits

0x8983,	// (0x0007c0db) main_cset_slider_pane_g9

0x898f,	// (0x0007c0e7) main_cset_slider_pane_g10_ParamLimits

0x898f,	// (0x0007c0e7) main_cset_slider_pane_g10

0x899b,	// (0x0007c0f3) main_cset_slider_pane_g11_ParamLimits

0x899b,	// (0x0007c0f3) main_cset_slider_pane_g11

0x89a7,	// (0x0007c0ff) main_cset_slider_pane_g12_ParamLimits

0x89a7,	// (0x0007c0ff) main_cset_slider_pane_g12

0x89b3,	// (0x0007c10b) main_cset_slider_pane_g13_ParamLimits

0x89b3,	// (0x0007c10b) main_cset_slider_pane_g13

0x89bf,	// (0x0007c117) main_cset_slider_pane_g14_ParamLimits

0x89bf,	// (0x0007c117) main_cset_slider_pane_g14

0x89cb,	// (0x0007c123) main_cset_slider_pane_g15_ParamLimits

0x89cb,	// (0x0007c123) main_cset_slider_pane_g15

0xedd0,	// (0x00082528) main_cset_slider_pane_t14_ParamLimits

0xedd0,	// (0x00082528) main_cset_slider_pane_t14

0xee09,	// (0x00082561) main_cset_slider_pane_t15_ParamLimits

0xee09,	// (0x00082561) main_cset_slider_pane_t15

0x8ecb,	// (0x0007c623) aid_cam4_burst_size_cell_ParamLimits

0x8ecb,	// (0x0007c623) aid_cam4_burst_size_cell

0x8eeb,	// (0x0007c643) grid_cam4_burst_pane_ParamLimits

0x8eeb,	// (0x0007c643) grid_cam4_burst_pane

0x8f11,	// (0x0007c669) linegrid_cam4_burst_pane_ParamLimits

0x8f11,	// (0x0007c669) linegrid_cam4_burst_pane

0x8f33,	// (0x0007c68b) scroll_pane_cp30_ParamLimits

0x8f33,	// (0x0007c68b) scroll_pane_cp30

0x8f3f,	// (0x0007c697) cell_cam4_burst_pane_ParamLimits

0x8f3f,	// (0x0007c697) cell_cam4_burst_pane

0xef3f,	// (0x00082697) linegrid_cam4_burst_pane_g1_ParamLimits

0xef3f,	// (0x00082697) linegrid_cam4_burst_pane_g1

0x8f86,	// (0x0007c6de) linegrid_cam4_burst_pane_g2_ParamLimits

0x8f86,	// (0x0007c6de) linegrid_cam4_burst_pane_g2

0xef4c,	// (0x000826a4) linegrid_cam4_burst_pane_g3_ParamLimits

0xef4c,	// (0x000826a4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa20,	// (0x00083178) linegrid_cam4_burst_pane_g_ParamLimits

0xfa20,	// (0x00083178) linegrid_cam4_burst_pane_g

0x8f97,	// (0x0007c6ef) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8f97,	// (0x0007c6ef) linegrid_cam4_burst_pane_g3_copy1

0xef59,	// (0x000826b1) linegrid_cam4_burst_pane_g4_ParamLimits

0xef59,	// (0x000826b1) linegrid_cam4_burst_pane_g4

0x8fb1,	// (0x0007c709) linegrid_cam4_burst_pane_g5_ParamLimits

0x8fb1,	// (0x0007c709) linegrid_cam4_burst_pane_g5

0x8fc2,	// (0x0007c71a) linegrid_cam4_burst_pane_g6_ParamLimits

0x8fc2,	// (0x0007c71a) linegrid_cam4_burst_pane_g6

0xef66,	// (0x000826be) linegrid_cam4_burst_pane_g7_ParamLimits

0xef66,	// (0x000826be) linegrid_cam4_burst_pane_g7

0x8fd3,	// (0x0007c72b) cell_cam4_burst_pane_g1

0xef7f,	// (0x000826d7) main_cam5_pane_t1_ParamLimits

0xef7f,	// (0x000826d7) main_cam5_pane_t1

0xef91,	// (0x000826e9) main_cam5_pane_t2_ParamLimits

0xef91,	// (0x000826e9) main_cam5_pane_t2

0xefa3,	// (0x000826fb) main_cam5_pane_t3_ParamLimits

0xefa3,	// (0x000826fb) main_cam5_pane_t3

0xefb5,	// (0x0008270d) main_cam5_pane_t4_ParamLimits

0xefb5,	// (0x0008270d) main_cam5_pane_t4

0xefcb,	// (0x00082723) main_cam5_pane_t5_ParamLimits

0xefcb,	// (0x00082723) main_cam5_pane_t5

0xefdd,	// (0x00082735) main_cam5_pane_t6_ParamLimits

0xefdd,	// (0x00082735) main_cam5_pane_t6

0xefef,	// (0x00082747) main_cam5_pane_t7_ParamLimits

0xefef,	// (0x00082747) main_cam5_pane_t7

0xf001,	// (0x00082759) main_cam5_pane_t8_ParamLimits

0xf001,	// (0x00082759) main_cam5_pane_t8

0xf01d,	// (0x00082775) main_cam5_pane_t9_ParamLimits

0xf01d,	// (0x00082775) main_cam5_pane_t9

0xf02f,	// (0x00082787) main_cam5_pane_t10_ParamLimits

0xf02f,	// (0x00082787) main_cam5_pane_t10

0xf041,	// (0x00082799) main_cam5_pane_t11_ParamLimits

0xf041,	// (0x00082799) main_cam5_pane_t11

0xf053,	// (0x000827ab) main_cam5_pane_t12_ParamLimits

0xf053,	// (0x000827ab) main_cam5_pane_t12

0xf068,	// (0x000827c0) main_cam5_pane_t13_ParamLimits

0xf068,	// (0x000827c0) main_cam5_pane_t13

0x000c,

0x05ef,	// (0x00073d47) main_cam5_pane_t_ParamLimits

0x05ef,	// (0x00073d47) main_cam5_pane_t

0x1a95,	// (0x000751ed) popup_scut_keymap_window_ParamLimits

0x1a95,	// (0x000751ed) popup_scut_keymap_window

0x8fe8,	// (0x0007c740) aid_size_cell_brow_shortcut

0x2e5d,	// (0x000765b5) bg_popup_window_pane_cp010

0x8ff4,	// (0x0007c74c) grid_scut_pane

0x8ffe,	// (0x0007c756) cell_scut_pane_ParamLimits

0x8ffe,	// (0x0007c756) cell_scut_pane

0x9013,	// (0x0007c76b) cell_scut_pane_g1

0xf085,	// (0x000827dd) cell_scut_pane_t1

0xf094,	// (0x000827ec) cell_scut_pane_t2

0x901c,	// (0x0007c774) cell_scut_pane_t3

0x0002,

0xfa2c,	// (0x00083184) cell_scut_pane_t

0x711c,	// (0x0007a874) main_mup3_pane_g8_ParamLimits

0x711c,	// (0x0007a874) main_mup3_pane_g8

0x8457,	// (0x0007bbaf) area_vitu2_query_pane_ParamLimits

0x8457,	// (0x0007bbaf) area_vitu2_query_pane

0x0f4a,	// (0x000746a2) input_focus_pane_cp08

0xf0a3,	// (0x000827fb) area_vitu2_query_pane_g1

0x1047,	// (0x0007479f) area_vitu2_query_pane_g2

0x0001,

0xfa33,	// (0x0008318b) area_vitu2_query_pane_g

0x902a,	// (0x0007c782) area_vitu2_query_pane_t1_ParamLimits

0x902a,	// (0x0007c782) area_vitu2_query_pane_t1

0x903c,	// (0x0007c794) area_vitu2_query_pane_t2_ParamLimits

0x903c,	// (0x0007c794) area_vitu2_query_pane_t2

0x1056,	// (0x000747ae) area_vitu2_query_pane_t3_ParamLimits

0x1056,	// (0x000747ae) area_vitu2_query_pane_t3

0xcdd7,	// (0x0008052f) area_vitu2_query_pane_t4_ParamLimits

0xcdd7,	// (0x0008052f) area_vitu2_query_pane_t4

0xcdff,	// (0x00080557) area_vitu2_query_pane_t5_ParamLimits

0xcdff,	// (0x00080557) area_vitu2_query_pane_t5

0xce27,	// (0x0008057f) area_vitu2_query_pane_t6_ParamLimits

0xce27,	// (0x0008057f) area_vitu2_query_pane_t6

0x0006,

0xfa38,	// (0x00083190) area_vitu2_query_pane_t_ParamLimits

0xfa38,	// (0x00083190) area_vitu2_query_pane_t

0x904e,	// (0x0007c7a6) bg_button_pane_cp018

0x905b,	// (0x0007c7b3) bg_button_pane_cp021

0x107e,	// (0x000747d6) bg_button_pane_cp022

0x108d,	// (0x000747e5) input_focus_pane_cp09

0x4bcc,	// (0x00078324) aid_size_touch_mv_arrow_left

0x4bf0,	// (0x00078348) aid_size_touch_mv_arrow_right

0x89e3,	// (0x0007c13b) main_cset_slider_pane_g16_ParamLimits

0x89e3,	// (0x0007c13b) main_cset_slider_pane_g16

0x89ef,	// (0x0007c147) main_cset_slider_pane_g17_ParamLimits

0x89ef,	// (0x0007c147) main_cset_slider_pane_g17

0x8fd3,	// (0x0007c72b) cell_cam4_burst_pane_g1_ParamLimits

0xaf61,	// (0x0007e6b9) compa_mode_pane

0x8bd4,	// (0x0007c32c) popup_vtel_slider_window_g3_ParamLimits

0x8bd4,	// (0x0007c32c) popup_vtel_slider_window_g3

0x8beb,	// (0x0007c343) popup_vtel_slider_window_g4_ParamLimits

0x8beb,	// (0x0007c343) popup_vtel_slider_window_g4

0x8c02,	// (0x0007c35a) popup_vtel_slider_window_t1_ParamLimits

0x8c02,	// (0x0007c35a) popup_vtel_slider_window_t1

0xaf61,	// (0x0007e6b9) main_cl_pane

0xbe15,	// (0x0007f56d) popup_imed_adjust2_window_ParamLimits

0xbde5,	// (0x0007f53d) bg_tb_trans_pane_cp05_ParamLimits

0xc849,	// (0x0007ffa1) popup_imed_adjust2_window_g1_ParamLimits

0xc858,	// (0x0007ffb0) popup_imed_adjust2_window_g2_ParamLimits

0xc858,	// (0x0007ffb0) popup_imed_adjust2_window_g2

0xc864,	// (0x0007ffbc) popup_imed_adjust2_window_g3_ParamLimits

0xc864,	// (0x0007ffbc) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x00082f2f) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x00082f2f) popup_imed_adjust2_window_g

0xc870,	// (0x0007ffc8) popup_imed_adjust2_window_t1_ParamLimits

0xc888,	// (0x0007ffe0) slider_imed_adjust_pane_ParamLimits

0xc89c,	// (0x0007fff4) slider_imed_adjust_pane_g1_ParamLimits

0xc8ac,	// (0x00080004) slider_imed_adjust_pane_g2_ParamLimits

0xc8bc,	// (0x00080014) slider_imed_adjust_pane_g3_ParamLimits

0xc8cd,	// (0x00080025) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x00082f36) slider_imed_adjust_pane_g_ParamLimits

0x822e,	// (0x0007b986) aid_touch_area_cam4_ParamLimits

0x822e,	// (0x0007b986) aid_touch_area_cam4

0xea7a,	// (0x000821d2) battery_pane_cp01

0x82c6,	// (0x0007ba1e) main_camera4_pane_g6_ParamLimits

0x82c6,	// (0x0007ba1e) main_camera4_pane_g6

0x82e7,	// (0x0007ba3f) main_camera4_pane_t2_ParamLimits

0x82e7,	// (0x0007ba3f) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0008303d) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0008303d) main_camera4_pane_t

0x8315,	// (0x0007ba6d) aid_touch_area_vid4_ParamLimits

0x8315,	// (0x0007ba6d) aid_touch_area_vid4

0x8357,	// (0x0007baaf) main_video4_pane_g5_ParamLimits

0x8357,	// (0x0007baaf) main_video4_pane_g5

0x8378,	// (0x0007bad0) vid4_progress_pane_ParamLimits

0x8378,	// (0x0007bad0) vid4_progress_pane

0xed96,	// (0x000824ee) main_cset_slider_pane_g18_ParamLimits

0xed96,	// (0x000824ee) main_cset_slider_pane_g18

0xef73,	// (0x000826cb) cell_cam4_burst_pane_g2_ParamLimits

0xef73,	// (0x000826cb) cell_cam4_burst_pane_g2

0x0001,

0xfa27,	// (0x0008317f) cell_cam4_burst_pane_g_ParamLimits

0xfa27,	// (0x0008317f) cell_cam4_burst_pane_g

0x24ef,	// (0x00075c47) bg_cl_pane_ParamLimits

0x24ef,	// (0x00075c47) bg_cl_pane

0x9067,	// (0x0007c7bf) cl_header_pane_ParamLimits

0x9067,	// (0x0007c7bf) cl_header_pane

0x907b,	// (0x0007c7d3) cl_listscroll_pane_ParamLimits

0x907b,	// (0x0007c7d3) cl_listscroll_pane

0xce73,	// (0x000805cb) bg_cl_pane_g1

0xce7b,	// (0x000805d3) bg_cl_pane_g2

0xce83,	// (0x000805db) bg_cl_pane_g3

0xce8b,	// (0x000805e3) bg_cl_pane_g4

0xce93,	// (0x000805eb) bg_cl_pane_g5

0xce9b,	// (0x000805f3) bg_cl_pane_g6

0xcea3,	// (0x000805fb) bg_cl_pane_g7

0xceab,	// (0x00080603) bg_cl_pane_g8

0xceb3,	// (0x0008060b) bg_cl_pane_g9

0x0008,

0xfa47,	// (0x0008319f) bg_cl_pane_g

0x908b,	// (0x0007c7e3) aid_height_cl_leading_ParamLimits

0x908b,	// (0x0007c7e3) aid_height_cl_leading

0x9097,	// (0x0007c7ef) aid_height_cl_text_ParamLimits

0x9097,	// (0x0007c7ef) aid_height_cl_text

0xafbc,	// (0x0007e714) bg_cl_header_pane_ParamLimits

0xafbc,	// (0x0007e714) bg_cl_header_pane

0x90b6,	// (0x0007c80e) cl_header_pane_g1_ParamLimits

0x90b6,	// (0x0007c80e) cl_header_pane_g1

0x90cc,	// (0x0007c824) cl_header_pane_t1_ParamLimits

0x90cc,	// (0x0007c824) cl_header_pane_t1

0xcebb,	// (0x00080613) cl_list_pane

0xcec4,	// (0x0008061c) hc_scroll_pane_cp01

0x3785,	// (0x00076edd) bg_cl_header_pane_g1

0xcd47,	// (0x0008049f) bg_cl_header_pane_g2

0x37a5,	// (0x00076efd) bg_cl_header_pane_g3

0xcd57,	// (0x000804af) bg_cl_header_pane_g4

0xcd4f,	// (0x000804a7) bg_cl_header_pane_g5

0xee8e,	// (0x000825e6) bg_cl_header_pane_g6

0xcd6f,	// (0x000804c7) bg_cl_header_pane_g7

0xcd77,	// (0x000804cf) bg_cl_header_pane_g8

0xcd67,	// (0x000804bf) bg_cl_header_pane_g9

0x0008,

0xfa5a,	// (0x000831b2) bg_cl_header_pane_g

0x90e5,	// (0x0007c83d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x90e5,	// (0x0007c83d) hc_cl_list_double_graphic_heading_pane

0x90f5,	// (0x0007c84d) hc_cl_list_single_graphic_pane_ParamLimits

0x90f5,	// (0x0007c84d) hc_cl_list_single_graphic_pane

0x9108,	// (0x0007c860) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9108,	// (0x0007c860) hc_cl_list_single_graphic_pane_g1

0x9114,	// (0x0007c86c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9114,	// (0x0007c86c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa6d,	// (0x000831c5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa6d,	// (0x000831c5) hc_cl_list_single_graphic_pane_g

0x9128,	// (0x0007c880) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9128,	// (0x0007c880) hc_cl_list_single_graphic_pane_t1

0x9108,	// (0x0007c860) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9108,	// (0x0007c860) hc_cl_list_double_graphic_heading_pane_g1

0x913d,	// (0x0007c895) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x913d,	// (0x0007c895) hc_cl_list_double_graphic_heading_pane_g2

0x9151,	// (0x0007c8a9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9151,	// (0x0007c8a9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa72,	// (0x000831ca) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa72,	// (0x000831ca) hc_cl_list_double_graphic_heading_pane_g

0x9165,	// (0x0007c8bd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9165,	// (0x0007c8bd) hc_cl_list_double_graphic_heading_pane_t1

0x917a,	// (0x0007c8d2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x917a,	// (0x0007c8d2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa79,	// (0x000831d1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa79,	// (0x000831d1) hc_cl_list_double_graphic_heading_pane_t

0xebbf,	// (0x00082317) vid4_progress_pane_g1

0xebce,	// (0x00082326) vid4_progress_pane_g2

0xebdd,	// (0x00082335) vid4_progress_pane_g3

0xebec,	// (0x00082344) vid4_progress_pane_g4

0x0004,

0xfa7e,	// (0x000831d6) vid4_progress_pane_g

0xebf8,	// (0x00082350) vid4_progress_pane_t1

0xec0e,	// (0x00082366) vid4_progress_pane_t2

0x0002,

0xfa89,	// (0x000831e1) vid4_progress_pane_t

0xec38,	// (0x00082390) wait_bar_pane_cp07

0xc0f4,	// (0x0007f84c) blid_firmament_pane_ParamLimits

0xc135,	// (0x0007f88d) popup_blid_sat_info2_window_g1

0xc159,	// (0x0007f8b1) popup_blid_sat_info2_window_t3

0xc167,	// (0x0007f8bf) popup_blid_sat_info2_window_t4

0xc175,	// (0x0007f8cd) popup_blid_sat_info2_window_t5

0xc183,	// (0x0007f8db) popup_blid_sat_info2_window_t6

0xc193,	// (0x0007f8eb) popup_blid_sat_info2_window_t7

0xc1a1,	// (0x0007f8f9) popup_blid_sat_info2_window_t8

0xc1af,	// (0x0007f907) popup_blid_sat_info2_window_t9

0xc1bd,	// (0x0007f915) popup_blid_sat_info2_window_t10

0xc279,	// (0x0007f9d1) aid_firma_cardinal_ParamLimits

0xc28d,	// (0x0007f9e5) blid_firmament_pane_t1_ParamLimits

0xc2a4,	// (0x0007f9fc) blid_firmament_pane_t2_ParamLimits

0xc2bb,	// (0x0007fa13) blid_firmament_pane_t3_ParamLimits

0xc2d2,	// (0x0007fa2a) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x00082e23) blid_firmament_pane_t_ParamLimits

0xc2e9,	// (0x0007fa41) blid_sat_info_pane_ParamLimits

0xafbc,	// (0x0007e714) main_cam_set_pane_ParamLimits

0x796a,	// (0x0007b0c2) aid_size_cell_colour_35_ParamLimits

0x798a,	// (0x0007b0e2) aid_size_cell_colour_112_ParamLimits

0x79aa,	// (0x0007b102) aid_size_cell_effect_ParamLimits

0xbde5,	// (0x0007f53d) bg_tb_trans_pane_cp02_ParamLimits

0x44b9,	// (0x00077c11) heading_imed_pane_ParamLimits

0x79ca,	// (0x0007b122) listscroll_imed_pane_ParamLimits

0xb3cb,	// (0x0007eb23) popup_call2_audio_first_window_g5_ParamLimits

0xb3cb,	// (0x0007eb23) popup_call2_audio_first_window_g5

0x7ee7,	// (0x0007b63f) aid_size_touch_image3_arrow_left_ParamLimits

0x7ee7,	// (0x0007b63f) aid_size_touch_image3_arrow_left

0x7f07,	// (0x0007b65f) aid_size_touch_image3_arrow_right_ParamLimits

0x7f07,	// (0x0007b65f) aid_size_touch_image3_arrow_right

0xec23,	// (0x0008237b) vid4_progress_pane_t3

0x7c9e,	// (0x0007b3f6) main_hwr_training_symbol_option_pane_ParamLimits

0x7c9e,	// (0x0007b3f6) main_hwr_training_symbol_option_pane

0xcb28,	// (0x00080280) popup_hwr_training_preview_window_ParamLimits

0xcb28,	// (0x00080280) popup_hwr_training_preview_window

0x7cba,	// (0x0007b412) hwr_training_navi_pane_g5_ParamLimits

0x7cba,	// (0x0007b412) hwr_training_navi_pane_g5

0xcd35,	// (0x0008048d) popup_char_count_window

0xafbc,	// (0x0007e714) bg_popup_sub_pane_cp20_ParamLimits

0x8d0e,	// (0x0007c466) list_vitu2_match_list_pane_ParamLimits

0x8d1d,	// (0x0007c475) vitu2_page_scroll_pane_ParamLimits

0x8d1d,	// (0x0007c475) vitu2_page_scroll_pane

0xcef0,	// (0x00080648) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcef0,	// (0x00080648) list_single_hwr_training_symbol_option_pane

0xcf03,	// (0x0008065b) list_single_hwr_training_symbol_option_pane_g1

0xcf0b,	// (0x00080663) list_single_hwr_training_symbol_option_pane_t1

0xcf19,	// (0x00080671) bg_button_pane_cp023

0xcf22,	// (0x0008067a) bg_button_pane_cp024

0x9198,	// (0x0007c8f0) vitu2_page_scroll_pane_g1

0x91a0,	// (0x0007c8f8) vitu2_page_scroll_pane_g2

0x0001,

0xfa90,	// (0x000831e8) vitu2_page_scroll_pane_g

0x91a8,	// (0x0007c900) vitu2_page_scroll_pane_t1

0xc322,	// (0x0007fa7a) popup_char_count_window_g1

0xcf55,	// (0x000806ad) popup_char_count_window_g2

0xcf5e,	// (0x000806b6) popup_char_count_window_g3

0x0002,

0xfa95,	// (0x000831ed) popup_char_count_window_g

0xcf67,	// (0x000806bf) popup_char_count_window_t1

0xaf61,	// (0x0007e6b9) main_vded2_pane

0xc837,	// (0x0007ff8f) aid_size_cell_imed_line

0xc841,	// (0x0007ff99) grid_imed_line_width_pane

0xeb0f,	// (0x00082267) vid4_indicators_pane_g4

0xcf75,	// (0x000806cd) cell_imed_line_width_pane_ParamLimits

0xcf75,	// (0x000806cd) cell_imed_line_width_pane

0xcf87,	// (0x000806df) cell_imed_line_width_pane_g1

0xcf90,	// (0x000806e8) cell_imed_line_width_pane_g2

0x0001,

0xfa9c,	// (0x000831f4) cell_imed_line_width_pane_g

0x91b7,	// (0x0007c90f) main_vded2_pane_g1_ParamLimits

0x91b7,	// (0x0007c90f) main_vded2_pane_g1

0x91cd,	// (0x0007c925) main_vded2_pane_g2_ParamLimits

0x91cd,	// (0x0007c925) main_vded2_pane_g2

0x0001,

0xfaa1,	// (0x000831f9) main_vded2_pane_g_ParamLimits

0xfaa1,	// (0x000831f9) main_vded2_pane_g

0x91dd,	// (0x0007c935) vded2_slider_pane_ParamLimits

0x91dd,	// (0x0007c935) vded2_slider_pane

0x91f0,	// (0x0007c948) aid_size_touch_vded2_end

0x91f8,	// (0x0007c950) aid_size_touch_vded2_playhead

0x9200,	// (0x0007c958) aid_size_touch_vded2_start

0x9208,	// (0x0007c960) vded2_slider_bg_pane

0x9211,	// (0x0007c969) vded2_slider_pane_g1

0x921a,	// (0x0007c972) vded2_slider_pane_g2

0x9222,	// (0x0007c97a) vded2_slider_pane_g3

0x0002,

0xfaa6,	// (0x000831fe) vded2_slider_pane_g

0x922b,	// (0x0007c983) vded2_slider_bg_pane_g1

0x9234,	// (0x0007c98c) vded2_slider_bg_pane_g2

0x923d,	// (0x0007c995) vded2_slider_bg_pane_g3

0x0002,

0xfaad,	// (0x00083205) vded2_slider_bg_pane_g

0x5383,	// (0x00078adb) aid_postcard_touch_down_pane_ParamLimits

0x5383,	// (0x00078adb) aid_postcard_touch_down_pane

0x5395,	// (0x00078aed) aid_postcard_touch_up_pane_ParamLimits

0x5395,	// (0x00078aed) aid_postcard_touch_up_pane

0xaf61,	// (0x0007e6b9) main_blid2_pane

0xbdfd,	// (0x0007f555) popup_blid2_search_window

0xaf61,	// (0x0007e6b9) blid2_gps_pane

0xaf61,	// (0x0007e6b9) blid2_navig_pane

0xaf61,	// (0x0007e6b9) blid2_search_pane

0xaf61,	// (0x0007e6b9) blid2_tripm_pane

0x9246,	// (0x0007c99e) blid2_search_pane_g1_ParamLimits

0x9246,	// (0x0007c99e) blid2_search_pane_g1

0x925a,	// (0x0007c9b2) blid2_search_pane_t1_ParamLimits

0x925a,	// (0x0007c9b2) blid2_search_pane_t1

0x926c,	// (0x0007c9c4) aid_size_cell_blid2_gps_ParamLimits

0x926c,	// (0x0007c9c4) aid_size_cell_blid2_gps

0x9284,	// (0x0007c9dc) blid2_gps_pane_g1_ParamLimits

0x9284,	// (0x0007c9dc) blid2_gps_pane_g1

0x9298,	// (0x0007c9f0) grid_blid2_satellite_pane_ParamLimits

0x9298,	// (0x0007c9f0) grid_blid2_satellite_pane

0x92ac,	// (0x0007ca04) blid2_navig_pane_g1_ParamLimits

0x92ac,	// (0x0007ca04) blid2_navig_pane_g1

0x92b8,	// (0x0007ca10) blid2_navig_pane_t1_ParamLimits

0x92b8,	// (0x0007ca10) blid2_navig_pane_t1

0x92d1,	// (0x0007ca29) blid2_navig_pane_t2_ParamLimits

0x92d1,	// (0x0007ca29) blid2_navig_pane_t2

0x0001,

0xfab4,	// (0x0008320c) blid2_navig_pane_t_ParamLimits

0xfab4,	// (0x0008320c) blid2_navig_pane_t

0x92ea,	// (0x0007ca42) blid2_navig_ring_pane_ParamLimits

0x92ea,	// (0x0007ca42) blid2_navig_ring_pane

0x92ff,	// (0x0007ca57) blid2_speed_pane_ParamLimits

0x92ff,	// (0x0007ca57) blid2_speed_pane

0x930b,	// (0x0007ca63) blid2_tripm_pane_g1_ParamLimits

0x930b,	// (0x0007ca63) blid2_tripm_pane_g1

0x9320,	// (0x0007ca78) blid2_tripm_pane_g2_ParamLimits

0x9320,	// (0x0007ca78) blid2_tripm_pane_g2

0x9334,	// (0x0007ca8c) blid2_tripm_pane_g3_ParamLimits

0x9334,	// (0x0007ca8c) blid2_tripm_pane_g3

0x9348,	// (0x0007caa0) blid2_tripm_pane_g4_ParamLimits

0x9348,	// (0x0007caa0) blid2_tripm_pane_g4

0x935c,	// (0x0007cab4) blid2_tripm_pane_g5_ParamLimits

0x935c,	// (0x0007cab4) blid2_tripm_pane_g5

0x0005,

0xfab9,	// (0x00083211) blid2_tripm_pane_g_ParamLimits

0xfab9,	// (0x00083211) blid2_tripm_pane_g

0x937e,	// (0x0007cad6) blid2_tripm_pane_t1_ParamLimits

0x937e,	// (0x0007cad6) blid2_tripm_pane_t1

0x9395,	// (0x0007caed) blid2_tripm_pane_t2_ParamLimits

0x9395,	// (0x0007caed) blid2_tripm_pane_t2

0x93ac,	// (0x0007cb04) blid2_tripm_pane_t3_ParamLimits

0x93ac,	// (0x0007cb04) blid2_tripm_pane_t3

0x0003,

0xfac6,	// (0x0008321e) blid2_tripm_pane_t_ParamLimits

0xfac6,	// (0x0008321e) blid2_tripm_pane_t

0x93ef,	// (0x0007cb47) cell_blid2_satellite_pane_ParamLimits

0x93ef,	// (0x0007cb47) cell_blid2_satellite_pane

0x9407,	// (0x0007cb5f) cell_blid2_satellite_pane_g1

0xcf98,	// (0x000806f0) cell_blid2_satellite_pane_t1

0xc2f9,	// (0x0007fa51) blid2_speed_pane_g1

0xcfa6,	// (0x000806fe) blid2_speed_pane_t1

0xcfb4,	// (0x0008070c) blid2_speed_pane_t2

0x0001,

0xfacf,	// (0x00083227) blid2_speed_pane_t

0xc2f9,	// (0x0007fa51) blid2_navig_ring_pane_g1

0x9410,	// (0x0007cb68) blid2_navig_ring_pane_g2

0x9418,	// (0x0007cb70) blid2_navig_ring_pane_g3

0x9420,	// (0x0007cb78) blid2_navig_ring_pane_g4

0x9428,	// (0x0007cb80) blid2_navig_ring_pane_g5

0x0004,

0xfad4,	// (0x0008322c) blid2_navig_ring_pane_g

0xaf61,	// (0x0007e6b9) bg_popup_window_pane_cp011

0xcfc2,	// (0x0008071a) popup_blid2_search_window_g1

0xcfca,	// (0x00080722) popup_blid2_search_window_t1

0xcfd8,	// (0x00080730) popup_blid2_search_window_t2

0x0001,

0xfadf,	// (0x00083237) popup_blid2_search_window_t

0x3654,	// (0x00076dac) main_browser_pane_g1

0x24ef,	// (0x00075c47) main_browser_pane_ParamLimits

0xafbc,	// (0x0007e714) bg_button_pane_cp011_ParamLimits

0x860b,	// (0x0007bd63) cell_vitu2_function_pane_g1_ParamLimits

0xbde5,	// (0x0007f53d) bg_popup_sub_pane_cp22_ParamLimits

0x0f4a,	// (0x000746a2) input_focus_pane_cp08_ParamLimits

0x8e81,	// (0x0007c5d9) popup_vitu2_query_button_pane_ParamLimits

0x8e81,	// (0x0007c5d9) popup_vitu2_query_button_pane

0x0f61,	// (0x000746b9) popup_vitu2_query_input_button_pane

0xeec9,	// (0x00082621) popup_vitu2_query_window_g1_ParamLimits

0x0f69,	// (0x000746c1) popup_vitu2_query_window_g2_ParamLimits

0xfa0a,	// (0x00083162) popup_vitu2_query_window_g_ParamLimits

0xaf61,	// (0x0007e6b9) bg_button_pane_cp026

0x9430,	// (0x0007cb88) popup_vitu2_query_input_button_pane_g1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp025

0xcfe6,	// (0x0008073e) popup_vitu2_query_button_pane_t1

0x6e38,	// (0x0007a590) main_mp3_pane_t6

0x6e46,	// (0x0007a59e) popup_slider_window_cp01

0xea94,	// (0x000821ec) cam4_battery_pane

0xea94,	// (0x000821ec) cam4_battery_pane_cp02

0xea94,	// (0x000821ec) cam4_battery_pane_cp01

0xea94,	// (0x000821ec) cam4_battery_pane_cp03

0xc2f9,	// (0x0007fa51) cam4_battery_pane_g1

0xcff4,	// (0x0008074c) cam4_battery_pane_g2

0x0001,

0xfae4,	// (0x0008323c) cam4_battery_pane_g

0xc1cb,	// (0x0007f923) popup_blid_sat_info2_window_t11

0x4bcc,	// (0x00078324) aid_size_touch_mv_arrow_left_ParamLimits

0x4bf0,	// (0x00078348) aid_size_touch_mv_arrow_right_ParamLimits

0x4c49,	// (0x000783a1) navi_pane_g1_ParamLimits

0x4c55,	// (0x000783ad) navi_pane_g2_ParamLimits

0x4c7e,	// (0x000783d6) navi_pane_g3_ParamLimits

0xf3ca,	// (0x00082b22) navi_pane_g_ParamLimits

0x4d2e,	// (0x00078486) navi_pane_mv_t1_ParamLimits

0x79d6,	// (0x0007b12e) grid_imed_effect_pane_ParamLimits

0x329c,	// (0x000769f4) aid_placing_vt_slider_lsc

0x32ac,	// (0x00076a04) aid_placing_vt_slider_prt

0xafbc,	// (0x0007e714) bg_tb_trans_pane_cp01_ParamLimits

0xc448,	// (0x0007fba0) popup_image_details_window_g1_ParamLimits

0xc45b,	// (0x0007fbb3) popup_image_details_window_g2_ParamLimits

0xc470,	// (0x0007fbc8) popup_image_details_window_g3_ParamLimits

0xc470,	// (0x0007fbc8) popup_image_details_window_g3

0xf710,	// (0x00082e68) popup_image_details_window_g_ParamLimits

0xc484,	// (0x0007fbdc) popup_image_details_window_t1_ParamLimits

0xc496,	// (0x0007fbee) popup_image_details_window_t2_ParamLimits

0xc4af,	// (0x0007fc07) popup_image_details_window_t3_ParamLimits

0xc4c3,	// (0x0007fc1b) popup_image_details_window_t4_ParamLimits

0xc4de,	// (0x0007fc36) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x00082e6f) popup_image_details_window_t_ParamLimits

0x90a3,	// (0x0007c7fb) cl_header_name_pane_ParamLimits

0x90a3,	// (0x0007c7fb) cl_header_name_pane

0x9438,	// (0x0007cb90) cl_header_name_pane_t1_ParamLimits

0x9438,	// (0x0007cb90) cl_header_name_pane_t1

0x9459,	// (0x0007cbb1) cl_header_name_pane_t2_ParamLimits

0x9459,	// (0x0007cbb1) cl_header_name_pane_t2

0x949b,	// (0x0007cbf3) cl_header_name_pane_t3_ParamLimits

0x949b,	// (0x0007cbf3) cl_header_name_pane_t3

0x0002,

0xfae9,	// (0x00083241) cl_header_name_pane_t_ParamLimits

0xfae9,	// (0x00083241) cl_header_name_pane_t

0x4cff,	// (0x00078457) navi_pane_mv_g2_ParamLimits

0xccf2,	// (0x0008044a) field_vitu2_entry_pane_g1_ParamLimits

0xccfe,	// (0x00080456) field_vitu2_entry_pane_g2_ParamLimits

0xcd0a,	// (0x00080462) field_vitu2_entry_pane_g3_ParamLimits

0xcd0a,	// (0x00080462) field_vitu2_entry_pane_g3

0xf917,	// (0x0008306f) field_vitu2_entry_pane_g_ParamLimits

0xeb45,	// (0x0008229d) cell_vitu2_itu_pane_g1_ParamLimits

0x859f,	// (0x0007bcf7) cell_vitu2_itu_pane_g2_ParamLimits

0x859f,	// (0x0007bcf7) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0008307b) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0008307b) cell_vitu2_itu_pane_g

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp05_ParamLimits

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp05

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp03

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp04

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp10_ParamLimits

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp10

0x107e,	// (0x000747d6) bg_vkb2_func_pane_cp08

0x904e,	// (0x0007c7a6) bg_vkb2_func_pane_cp06

0x905b,	// (0x0007c7b3) bg_vkb2_func_pane_cp07

0xcf2b,	// (0x00080683) bg_vkb2_func_pane_cp11_ParamLimits

0xcf2b,	// (0x00080683) bg_vkb2_func_pane_cp11

0xcf40,	// (0x00080698) bg_vkb2_func_pane_cp12_ParamLimits

0xcf40,	// (0x00080698) bg_vkb2_func_pane_cp12

0xaf61,	// (0x0007e6b9) bg_vkb2_func_pane_cp09

0xcd47,	// (0x0008049f) bg_vkb2_func_pane_g1

0x37a5,	// (0x00076efd) bg_vkb2_func_pane_g2

0xcd4f,	// (0x000804a7) bg_vkb2_func_pane_g3

0xcd57,	// (0x000804af) bg_vkb2_func_pane_g4

0xee8e,	// (0x000825e6) bg_vkb2_func_pane_g5

0xcd6f,	// (0x000804c7) bg_vkb2_func_pane_g6

0xcd77,	// (0x000804cf) bg_vkb2_func_pane_g7

0xcd67,	// (0x000804bf) bg_vkb2_func_pane_g8

0x3785,	// (0x00076edd) bg_vkb2_func_pane_g9

0x0008,

0xfaf0,	// (0x00083248) bg_vkb2_func_pane_g

0x936e,	// (0x0007cac6) blid2_tripm_pane_g6_ParamLimits

0x936e,	// (0x0007cac6) blid2_tripm_pane_g6

0xcbe6,	// (0x0008033e) mp4_progress_pane_g1

0x93dd,	// (0x0007cb35) blid2_tripm_values_pane_ParamLimits

0x93dd,	// (0x0007cb35) blid2_tripm_values_pane

0x94cc,	// (0x0007cc24) blid2_tripm_values_pane_t1

0x94da,	// (0x0007cc32) blid2_tripm_values_pane_t2

0x94e8,	// (0x0007cc40) blid2_tripm_values_pane_t3

0x94f6,	// (0x0007cc4e) blid2_tripm_values_pane_t4

0x9504,	// (0x0007cc5c) blid2_tripm_values_pane_t5

0x9512,	// (0x0007cc6a) blid2_tripm_values_pane_t6

0x9520,	// (0x0007cc78) blid2_tripm_values_pane_t7

0x952e,	// (0x0007cc86) blid2_tripm_values_pane_t8

0x953c,	// (0x0007cc94) blid2_tripm_values_pane_t9

0x0008,

0xfb03,	// (0x0008325b) blid2_tripm_values_pane_t

0x32e0,	// (0x00076a38) call_video_pane_t1_ParamLimits

0x32fa,	// (0x00076a52) call_video_pane_t2_ParamLimits

0xf253,	// (0x000829ab) call_video_pane_t_ParamLimits

0x0d61,	// (0x000744b9) msg_header_pane_g1_ParamLimits

0x52f5,	// (0x00078a4d) msg_header_pane_g2_ParamLimits

0x52f5,	// (0x00078a4d) msg_header_pane_g2

0x0001,

0xf46d,	// (0x00082bc5) msg_header_pane_g_ParamLimits

0xf46d,	// (0x00082bc5) msg_header_pane_g

0x24ef,	// (0x00075c47) main_clock2_pane_ParamLimits

0x76ed,	// (0x0007ae45) grid_clock2_toolbar_pane_ParamLimits

0x76ed,	// (0x0007ae45) grid_clock2_toolbar_pane

0x76ed,	// (0x0007ae45) listscroll_clock2_pane_ParamLimits

0x76ed,	// (0x0007ae45) listscroll_clock2_pane

0x77d0,	// (0x0007af28) main_clock2_pane_t3_ParamLimits

0x77d0,	// (0x0007af28) main_clock2_pane_t3

0x77f2,	// (0x0007af4a) main_clock2_pane_t4_ParamLimits

0x77f2,	// (0x0007af4a) main_clock2_pane_t4

0xcffe,	// (0x00080756) cell_clock2_toolbar_pane

0xd006,	// (0x0008075e) cell_clock2_toolbar_pane_cp01

0xd006,	// (0x0008075e) cell_clock2_toolbar_pane_cp02

0xd00e,	// (0x00080766) cell_clock2_toolbar_pane_cp03

0xd016,	// (0x0008076e) list_clock2_pane

0xd01e,	// (0x00080776) scroll_pane_cp10

0xd026,	// (0x0008077e) list_single_clock2_pane_ParamLimits

0xd026,	// (0x0008077e) list_single_clock2_pane

0x2e5d,	// (0x000765b5) list_highlight_pane_cp08

0xd033,	// (0x0008078b) list_single_clock2_pane_t1

0xd041,	// (0x00080799) list_single_clock2_pane_t2

0x0001,

0xfb16,	// (0x0008326e) list_single_clock2_pane_t

0xaf61,	// (0x0007e6b9) bg_button_pane_cp10

0xd04f,	// (0x000807a7) cell_clock2_toolbar_pane_g1

0x5309,	// (0x00078a61) aid_main_viewer_pane_g1_ParamLimits

0x5309,	// (0x00078a61) aid_main_viewer_pane_g1

0x5315,	// (0x00078a6d) aid_main_viewer_pane_g2_ParamLimits

0x5315,	// (0x00078a6d) aid_main_viewer_pane_g2

0x5321,	// (0x00078a79) aid_main_viewer_pane_g3_ParamLimits

0x5321,	// (0x00078a79) aid_main_viewer_pane_g3

0x5330,	// (0x00078a88) aid_main_viewer_pane_g4_ParamLimits

0x5330,	// (0x00078a88) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x00082bd6) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x00082bd6) aid_main_viewer_pane_g

0xafbc,	// (0x0007e714) main_calc_pane_ParamLimits

0x61a8,	// (0x00079900) main_dialer2_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_cam6_pane

0xaf61,	// (0x0007e6b9) main_vid6_pane

0x76f9,	// (0x0007ae51) listscroll_gen_pane_cp06_ParamLimits

0x76f9,	// (0x0007ae51) listscroll_gen_pane_cp06

0x7813,	// (0x0007af6b) main_clock2_pane_t5_ParamLimits

0x7813,	// (0x0007af6b) main_clock2_pane_t5

0x786b,	// (0x0007afc3) aid_call2_pane_cp10_ParamLimits

0x787d,	// (0x0007afd5) aid_call_pane_cp10_ParamLimits

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x788f,	// (0x0007afe7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x788f,	// (0x0007afe7) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4b5b,	// (0x000782b3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x00082f24) popup_clock_analogue_window_cp10_g_ParamLimits

0x78a1,	// (0x0007aff9) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcc46,	// (0x0008039e) cell_dialer2_keypad_pane_g2_ParamLimits

0xcc46,	// (0x0008039e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0008300e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0008300e) cell_dialer2_keypad_pane_g

0x7eb0,	// (0x0007b608) cell_dialer2_keypad_pane_t1

0x88d6,	// (0x0007c02e) main_cset_text2_pane_ParamLimits

0x88d6,	// (0x0007c02e) main_cset_text2_pane

0xf0a3,	// (0x000827fb) area_vitu2_query_pane_g1_ParamLimits

0x1047,	// (0x0007479f) area_vitu2_query_pane_g2_ParamLimits

0xfa33,	// (0x0008318b) area_vitu2_query_pane_g_ParamLimits

0xce4f,	// (0x000805a7) area_vitu2_query_pane_t7_ParamLimits

0xce4f,	// (0x000805a7) area_vitu2_query_pane_t7

0x904e,	// (0x0007c7a6) bg_button_pane_cp018_ParamLimits

0x905b,	// (0x0007c7b3) bg_button_pane_cp021_ParamLimits

0x107e,	// (0x000747d6) bg_button_pane_cp022_ParamLimits

0x107e,	// (0x000747d6) bg_vkb2_func_pane_cp08_ParamLimits

0x904e,	// (0x0007c7a6) bg_vkb2_func_pane_cp06_ParamLimits

0x905b,	// (0x0007c7b3) bg_vkb2_func_pane_cp07_ParamLimits

0x108d,	// (0x000747e5) input_focus_pane_cp09_ParamLimits

0xec62,	// (0x000823ba) cam6_autofocus_pane_ParamLimits

0xec62,	// (0x000823ba) cam6_autofocus_pane

0x954a,	// (0x0007cca2) cam6_image_uncrop_pane_ParamLimits

0x954a,	// (0x0007cca2) cam6_image_uncrop_pane

0x9557,	// (0x0007ccaf) cam6_indi_pane_ParamLimits

0x9557,	// (0x0007ccaf) cam6_indi_pane

0x956d,	// (0x0007ccc5) cam6_mode_pane_ParamLimits

0x956d,	// (0x0007ccc5) cam6_mode_pane

0x957f,	// (0x0007ccd7) cam6_timer_pane_ParamLimits

0x957f,	// (0x0007ccd7) cam6_timer_pane

0x958b,	// (0x0007cce3) cam6_zoom_pane_ParamLimits

0x958b,	// (0x0007cce3) cam6_zoom_pane

0x9597,	// (0x0007ccef) cam6_mode_pane_g1_ParamLimits

0x9597,	// (0x0007ccef) cam6_mode_pane_g1

0x95a7,	// (0x0007ccff) cam6_mode_pane_g2_ParamLimits

0x95a7,	// (0x0007ccff) cam6_mode_pane_g2

0x95b7,	// (0x0007cd0f) cam6_mode_pane_g3_ParamLimits

0x95b7,	// (0x0007cd0f) cam6_mode_pane_g3

0x95c7,	// (0x0007cd1f) cam6_mode_pane_g4_ParamLimits

0x95c7,	// (0x0007cd1f) cam6_mode_pane_g4

0x0003,

0xfb1b,	// (0x00083273) cam6_mode_pane_g_ParamLimits

0xfb1b,	// (0x00083273) cam6_mode_pane_g

0xd057,	// (0x000807af) bg_tb_trans_pane_cp08_ParamLimits

0xd057,	// (0x000807af) bg_tb_trans_pane_cp08

0xd065,	// (0x000807bd) cam6_battery_pane_ParamLimits

0xd065,	// (0x000807bd) cam6_battery_pane

0xd07b,	// (0x000807d3) cam6_indi_pane_g1_ParamLimits

0xd07b,	// (0x000807d3) cam6_indi_pane_g1

0xd08d,	// (0x000807e5) cam6_indi_pane_g2_ParamLimits

0xd08d,	// (0x000807e5) cam6_indi_pane_g2

0xd09f,	// (0x000807f7) cam6_indi_pane_g3_ParamLimits

0xd09f,	// (0x000807f7) cam6_indi_pane_g3

0x0002,

0xfb24,	// (0x0008327c) cam6_indi_pane_g_ParamLimits

0xfb24,	// (0x0008327c) cam6_indi_pane_g

0xd0b1,	// (0x00080809) cam6_indi_pane_t1_ParamLimits

0xd0b1,	// (0x00080809) cam6_indi_pane_t1

0x83d2,	// (0x0007bb2a) cam6_autofocus_pane_g1

0x83da,	// (0x0007bb32) cam6_autofocus_pane_g2

0x83e2,	// (0x0007bb3a) cam6_autofocus_pane_g3

0x83ea,	// (0x0007bb42) cam6_autofocus_pane_g4

0x0003,

0xfb2b,	// (0x00083283) cam6_autofocus_pane_g

0xd0d7,	// (0x0008082f) cam6_timer_pane_g1

0xd0df,	// (0x00080837) cam6_timer_pane_t1

0xd0ed,	// (0x00080845) cam6_zoom_cont_pane

0xd0f5,	// (0x0008084d) cam6_zoom_pane_g1

0xd0fd,	// (0x00080855) cam6_zoom_pane_g2

0x95d7,	// (0x0007cd2f) cam6_zoom_pane_g3

0x0002,

0xfb34,	// (0x0008328c) cam6_zoom_pane_g

0xc2f9,	// (0x0007fa51) cam6_battery_pane_g1

0xc2f9,	// (0x0007fa51) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x00082e2c) cam6_battery_pane_g

0xd105,	// (0x0008085d) cam6_zoom_cont_pane_g1

0xd10e,	// (0x00080866) cam6_zoom_cont_pane_g2

0xd117,	// (0x0008086f) cam6_zoom_cont_pane_g3

0x0002,

0xfb3b,	// (0x00083293) cam6_zoom_cont_pane_g

0x95f4,	// (0x0007cd4c) cam6_mode_pane_cp_ParamLimits

0x95f4,	// (0x0007cd4c) cam6_mode_pane_cp

0x958b,	// (0x0007cce3) cam6_zoom_pane_cp_ParamLimits

0x958b,	// (0x0007cce3) cam6_zoom_pane_cp

0x9606,	// (0x0007cd5e) vid6_image_uncrop_cif_pane_ParamLimits

0x9606,	// (0x0007cd5e) vid6_image_uncrop_cif_pane

0x9614,	// (0x0007cd6c) vid6_image_uncrop_nhd_pane_ParamLimits

0x9614,	// (0x0007cd6c) vid6_image_uncrop_nhd_pane

0x954a,	// (0x0007cca2) vid6_image_uncrop_vga_pane_ParamLimits

0x954a,	// (0x0007cca2) vid6_image_uncrop_vga_pane

0x9621,	// (0x0007cd79) vid6_image_uncrop_wvga_pane_ParamLimits

0x9621,	// (0x0007cd79) vid6_image_uncrop_wvga_pane

0x962e,	// (0x0007cd86) vid6_indi_pane_ParamLimits

0x962e,	// (0x0007cd86) vid6_indi_pane

0xd057,	// (0x000807af) bg_tb_trans_pane_cp09_ParamLimits

0xd057,	// (0x000807af) bg_tb_trans_pane_cp09

0xd12b,	// (0x00080883) cam6_battery_pane_cp_ParamLimits

0xd12b,	// (0x00080883) cam6_battery_pane_cp

0xd137,	// (0x0008088f) vid6_indi_pane_g1_ParamLimits

0xd137,	// (0x0008088f) vid6_indi_pane_g1

0xd149,	// (0x000808a1) vid6_indi_pane_g2_ParamLimits

0xd149,	// (0x000808a1) vid6_indi_pane_g2

0xd15b,	// (0x000808b3) vid6_indi_pane_g3_ParamLimits

0xd15b,	// (0x000808b3) vid6_indi_pane_g3

0xd170,	// (0x000808c8) vid6_indi_pane_g4_ParamLimits

0xd170,	// (0x000808c8) vid6_indi_pane_g4

0xd185,	// (0x000808dd) vid6_indi_pane_g5_ParamLimits

0xd185,	// (0x000808dd) vid6_indi_pane_g5

0x0004,

0xfb42,	// (0x0008329a) vid6_indi_pane_g_ParamLimits

0xfb42,	// (0x0008329a) vid6_indi_pane_g

0xd19f,	// (0x000808f7) vid6_indi_pane_t1_ParamLimits

0xd19f,	// (0x000808f7) vid6_indi_pane_t1

0xd1b5,	// (0x0008090d) vid6_indi_pane_t2_ParamLimits

0xd1b5,	// (0x0008090d) vid6_indi_pane_t2

0xd1dd,	// (0x00080935) vid6_indi_pane_t3_ParamLimits

0xd1dd,	// (0x00080935) vid6_indi_pane_t3

0xd205,	// (0x0008095d) vid6_indi_pane_t4_ParamLimits

0xd205,	// (0x0008095d) vid6_indi_pane_t4

0x0003,

0xfb4d,	// (0x000832a5) vid6_indi_pane_t_ParamLimits

0xfb4d,	// (0x000832a5) vid6_indi_pane_t

0xd229,	// (0x00080981) wait_bar_pane_cp08

0x9645,	// (0x0007cd9d) main_cset_text2_pane_t1_ParamLimits

0x9645,	// (0x0007cd9d) main_cset_text2_pane_t1

0x95df,	// (0x0007cd37) listscroll_gen_pane_cp06_t1_ParamLimits

0x95df,	// (0x0007cd37) listscroll_gen_pane_cp06_t1

0xaf61,	// (0x0007e6b9) main_cam6_set_pane

0xc528,	// (0x0007fc80) bg_tb_trans_pane_cp06_ParamLimits

0xea9c,	// (0x000821f4) cam4_indicators_pane_g1_ParamLimits

0xeaac,	// (0x00082204) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0008304b) cam4_indicators_pane_g_ParamLimits

0xeacc,	// (0x00082224) cam4_indicators_pane_t1_ParamLimits

0xafbc,	// (0x0007e714) bg_tb_trans_pane_cp07_ParamLimits

0xea9c,	// (0x000821f4) vid4_indicators_pane_g1_ParamLimits

0xeaee,	// (0x00082246) vid4_indicators_pane_g2_ParamLimits

0xeafe,	// (0x00082256) vid4_indicators_pane_g3_ParamLimits

0xeb0f,	// (0x00082267) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0008305d) vid4_indicators_pane_g_ParamLimits

0xeb2b,	// (0x00082283) vid4_indicators_pane_t1_ParamLimits

0xebbf,	// (0x00082317) vid4_progress_pane_g1_ParamLimits

0xebce,	// (0x00082326) vid4_progress_pane_g2_ParamLimits

0xebdd,	// (0x00082335) vid4_progress_pane_g3_ParamLimits

0xebec,	// (0x00082344) vid4_progress_pane_g4_ParamLimits

0xfa7e,	// (0x000831d6) vid4_progress_pane_g_ParamLimits

0xebf8,	// (0x00082350) vid4_progress_pane_t1_ParamLimits

0xec0e,	// (0x00082366) vid4_progress_pane_t2_ParamLimits

0xec23,	// (0x0008237b) vid4_progress_pane_t3_ParamLimits

0xfa89,	// (0x000831e1) vid4_progress_pane_t_ParamLimits

0xec38,	// (0x00082390) wait_bar_pane_cp07_ParamLimits

0x9660,	// (0x0007cdb8) main_cam6_set_pane_g2_ParamLimits

0x9660,	// (0x0007cdb8) main_cam6_set_pane_g2

0x9682,	// (0x0007cdda) main_cset6_listscroll_pane_ParamLimits

0x9682,	// (0x0007cdda) main_cset6_listscroll_pane

0x969c,	// (0x0007cdf4) main_cset6_slider_pane_ParamLimits

0x969c,	// (0x0007cdf4) main_cset6_slider_pane

0x96b2,	// (0x0007ce0a) main_cset6_text2_pane_ParamLimits

0x96b2,	// (0x0007ce0a) main_cset6_text2_pane

0xd239,	// (0x00080991) main_cset6_text_pane

0xed59,	// (0x000824b1) main_cset_list_pane_copy1_ParamLimits

0xed59,	// (0x000824b1) main_cset_list_pane_copy1

0xed69,	// (0x000824c1) scroll_pane_cp028_copy1

0x96c0,	// (0x0007ce18) cset_list_set_pane_copy1

0x96d2,	// (0x0007ce2a) aid_position_infowindow_above_copy1

0x96da,	// (0x0007ce32) aid_position_infowindow_below_copy1

0x96e2,	// (0x0007ce3a) cset_list_set_pane_g1_copy1

0x10b0,	// (0x00074808) cset_list_set_pane_g3_copy1_ParamLimits

0x10b0,	// (0x00074808) cset_list_set_pane_g3_copy1

0x10bf,	// (0x00074817) cset_list_set_pane_t1_copy1_ParamLimits

0x10bf,	// (0x00074817) cset_list_set_pane_t1_copy1

0xafbc,	// (0x0007e714) list_highlight_pane_cp021_copy1_ParamLimits

0xafbc,	// (0x0007e714) list_highlight_pane_cp021_copy1

0xd241,	// (0x00080999) cset6_slider_pane_ParamLimits

0xd241,	// (0x00080999) cset6_slider_pane

0xd26d,	// (0x000809c5) main_cset6_slider_pane_g1_ParamLimits

0xd26d,	// (0x000809c5) main_cset6_slider_pane_g1

0x96ea,	// (0x0007ce42) main_cset6_slider_pane_g2_ParamLimits

0x96ea,	// (0x0007ce42) main_cset6_slider_pane_g2

0xed7e,	// (0x000824d6) main_cset6_slider_pane_g3_ParamLimits

0xed7e,	// (0x000824d6) main_cset6_slider_pane_g3

0x899b,	// (0x0007c0f3) main_cset6_slider_pane_g4_ParamLimits

0x899b,	// (0x0007c0f3) main_cset6_slider_pane_g4

0x89e3,	// (0x0007c13b) main_cset6_slider_pane_g5_ParamLimits

0x89e3,	// (0x0007c13b) main_cset6_slider_pane_g5

0xed7e,	// (0x000824d6) main_cset6_slider_pane_g7_ParamLimits

0xed7e,	// (0x000824d6) main_cset6_slider_pane_g7

0xed8a,	// (0x000824e2) main_cset6_slider_pane_g8_ParamLimits

0xed8a,	// (0x000824e2) main_cset6_slider_pane_g8

0x8983,	// (0x0007c0db) main_cset6_slider_pane_g9_ParamLimits

0x8983,	// (0x0007c0db) main_cset6_slider_pane_g9

0x898f,	// (0x0007c0e7) main_cset6_slider_pane_g10_ParamLimits

0x898f,	// (0x0007c0e7) main_cset6_slider_pane_g10

0x899b,	// (0x0007c0f3) main_cset6_slider_pane_g11_ParamLimits

0x899b,	// (0x0007c0f3) main_cset6_slider_pane_g11

0x89a7,	// (0x0007c0ff) main_cset6_slider_pane_g12_ParamLimits

0x89a7,	// (0x0007c0ff) main_cset6_slider_pane_g12

0x89b3,	// (0x0007c10b) main_cset6_slider_pane_g13_ParamLimits

0x89b3,	// (0x0007c10b) main_cset6_slider_pane_g13

0x89bf,	// (0x0007c117) main_cset6_slider_pane_g14_ParamLimits

0x89bf,	// (0x0007c117) main_cset6_slider_pane_g14

0x9712,	// (0x0007ce6a) main_cset6_slider_pane_g15_ParamLimits

0x9712,	// (0x0007ce6a) main_cset6_slider_pane_g15

0x89e3,	// (0x0007c13b) main_cset6_slider_pane_g16_ParamLimits

0x89e3,	// (0x0007c13b) main_cset6_slider_pane_g16

0x89ef,	// (0x0007c147) main_cset6_slider_pane_g17_ParamLimits

0x89ef,	// (0x0007c147) main_cset6_slider_pane_g17

0x0011,

0xfb56,	// (0x000832ae) main_cset6_slider_pane_g_ParamLimits

0xfb56,	// (0x000832ae) main_cset6_slider_pane_g

0xd295,	// (0x000809ed) main_cset6_slider_pane_t1_ParamLimits

0xd295,	// (0x000809ed) main_cset6_slider_pane_t1

0xd2d6,	// (0x00080a2e) main_cset6_slider_pane_t2_ParamLimits

0xd2d6,	// (0x00080a2e) main_cset6_slider_pane_t2

0xd301,	// (0x00080a59) main_cset6_slider_pane_t3_ParamLimits

0xd301,	// (0x00080a59) main_cset6_slider_pane_t3

0x972a,	// (0x0007ce82) main_cset6_slider_pane_t4_ParamLimits

0x972a,	// (0x0007ce82) main_cset6_slider_pane_t4

0x9755,	// (0x0007cead) main_cset6_slider_pane_t5_ParamLimits

0x9755,	// (0x0007cead) main_cset6_slider_pane_t5

0xd32c,	// (0x00080a84) main_cset6_slider_pane_t7_ParamLimits

0xd32c,	// (0x00080a84) main_cset6_slider_pane_t7

0x9780,	// (0x0007ced8) main_cset6_slider_pane_t8_ParamLimits

0x9780,	// (0x0007ced8) main_cset6_slider_pane_t8

0x97a4,	// (0x0007cefc) main_cset6_slider_pane_t9_ParamLimits

0x97a4,	// (0x0007cefc) main_cset6_slider_pane_t9

0x97c8,	// (0x0007cf20) main_cset6_slider_pane_t10_ParamLimits

0x97c8,	// (0x0007cf20) main_cset6_slider_pane_t10

0x97ec,	// (0x0007cf44) main_cset6_slider_pane_t11_ParamLimits

0x97ec,	// (0x0007cf44) main_cset6_slider_pane_t11

0xd362,	// (0x00080aba) main_cset6_slider_pane_t14_ParamLimits

0xd362,	// (0x00080aba) main_cset6_slider_pane_t14

0xd39b,	// (0x00080af3) main_cset6_slider_pane_t15_ParamLimits

0xd39b,	// (0x00080af3) main_cset6_slider_pane_t15

0x000b,

0xfb7b,	// (0x000832d3) main_cset6_slider_pane_t_ParamLimits

0xfb7b,	// (0x000832d3) main_cset6_slider_pane_t

0xee42,	// (0x0008259a) cset_slider_pane_g1_copy1

0xee4b,	// (0x000825a3) cset_slider_pane_g2_copy1

0xee54,	// (0x000825ac) cset_slider_pane_g3_copy1

0xaf61,	// (0x0007e6b9) bg_popup_sub_pane_cp011_copy1

0xeed5,	// (0x0008262d) main_cset_text_pane_g1_copy1

0xeedd,	// (0x00082635) main_cset_text_pane_t1_copy1

0xeeeb,	// (0x00082643) main_cset_text_pane_t2_copy1

0xeef9,	// (0x00082651) main_cset_text_pane_t3_copy1

0xef07,	// (0x0008265f) main_cset_text_pane_t4_copy1

0xef15,	// (0x0008266d) main_cset_text_pane_t5_copy1

0xef23,	// (0x0008267b) main_cset_text_pane_t6_copy1

0xef31,	// (0x00082689) main_cset_text_pane_t7_copy1

0x982b,	// (0x0007cf83) main_cset_text2_pane_t1_copy1

0xafbc,	// (0x0007e714) main_ncimui_pane

0x63b6,	// (0x00079b0e) popup_query_ncimui_window_ParamLimits

0x63b6,	// (0x00079b0e) popup_query_ncimui_window

0xc5c9,	// (0x0007fd21) field_cale_ev2_pane_g4_ParamLimits

0xc5c9,	// (0x0007fd21) field_cale_ev2_pane_g4

0x7da2,	// (0x0007b4fa) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7da2,	// (0x0007b4fa) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x00082fe5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x00082fe5) cell_video_dialer_keypad_pane_g

0x7dba,	// (0x0007b512) cell_video_dialer_keypad_pane_t1

0xaf61,	// (0x0007e6b9) bg_popup_window_pane_cp012

0x47ce,	// (0x00077f26) heading_pane_cp06

0xd3fe,	// (0x00080b56) ncim_query_content_pane

0xaf61,	// (0x0007e6b9) bg_popup_heading_pane_cp01

0xd406,	// (0x00080b5e) ncim_heading_pane_t1

0xd414,	// (0x00080b6c) ncim_indicator_popup_pane

0xd426,	// (0x00080b7e) ncim_query_button_pane

0xd43a,	// (0x00080b92) ncim_query_content_pane_t1

0xd44c,	// (0x00080ba4) ncim_query_content_pane_t2

0x0005,

0xfbbf,	// (0x00083317) ncim_query_content_pane_t

0xd486,	// (0x00080bde) ncim_query_list_pane

0xd498,	// (0x00080bf0) ncim_query_popup_pane

0xd414,	// (0x00080b6c) ncim_indicator_popup_pane_ParamLimits

0x996a,	// (0x0007d0c2) ncim_query_content_pane_g1_ParamLimits

0x996a,	// (0x0007d0c2) ncim_query_content_pane_g1

0xd43a,	// (0x00080b92) ncim_query_content_pane_t1_ParamLimits

0xd44c,	// (0x00080ba4) ncim_query_content_pane_t2_ParamLimits

0x9976,	// (0x0007d0ce) ncim_query_content_pane_t3_ParamLimits

0x9976,	// (0x0007d0ce) ncim_query_content_pane_t3

0x999e,	// (0x0007d0f6) ncim_query_content_pane_t4_ParamLimits

0x999e,	// (0x0007d0f6) ncim_query_content_pane_t4

0x99c6,	// (0x0007d11e) ncim_query_content_pane_t5_ParamLimits

0x99c6,	// (0x0007d11e) ncim_query_content_pane_t5

0xd45e,	// (0x00080bb6) ncim_query_content_pane_t6_ParamLimits

0xd45e,	// (0x00080bb6) ncim_query_content_pane_t6

0xfbbf,	// (0x00083317) ncim_query_content_pane_t_ParamLimits

0xd486,	// (0x00080bde) ncim_query_list_pane_ParamLimits

0xd498,	// (0x00080bf0) ncim_query_popup_pane_ParamLimits

0xd4ac,	// (0x00080c04) wait_bar_pane_cp04

0xaf61,	// (0x0007e6b9) input_focus_pane_cp011

0xd4b4,	// (0x00080c0c) ncim_query_popup_pane_t1

0xd4c2,	// (0x00080c1a) ncim_list_query_list_pane_ParamLimits

0xd4c2,	// (0x00080c1a) ncim_list_query_list_pane

0xaf61,	// (0x0007e6b9) bg_button_pane_cp027

0xd4d5,	// (0x00080c2d) ncim_query_button_pane_g1

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp012

0xd4df,	// (0x00080c37) ncim_list_query_list_pane_g1

0xd4e7,	// (0x00080c3f) ncim_list_query_list_pane_t1

0xeabc,	// (0x00082214) cam4_indicators_pane_g3_ParamLimits

0xeabc,	// (0x00082214) cam4_indicators_pane_g3

0xeb1b,	// (0x00082273) vid4_indicators_pane_g5_ParamLimits

0xeb1b,	// (0x00082273) vid4_indicators_pane_g5

0x453d,	// (0x00077c95) vid4_progress_pane_g5_ParamLimits

0x453d,	// (0x00077c95) vid4_progress_pane_g5

0x985a,	// (0x0007cfb2) main_ncimui_pane_g1

0x98c0,	// (0x0007d018) ncimui_group_query_pane_ParamLimits

0x98c0,	// (0x0007d018) ncimui_group_query_pane

0x9908,	// (0x0007d060) ncimui_list_pane_ParamLimits

0x9908,	// (0x0007d060) ncimui_list_pane

0x992d,	// (0x0007d085) ncimui_text_pane_ParamLimits

0x992d,	// (0x0007d085) ncimui_text_pane

0x99ee,	// (0x0007d146) ncimui_text_pane_t1_ParamLimits

0x99ee,	// (0x0007d146) ncimui_text_pane_t1

0xd4fe,	// (0x00080c56) ncimui_list_single_graphic_pane_ParamLimits

0xd4fe,	// (0x00080c56) ncimui_list_single_graphic_pane

0x9a0c,	// (0x0007d164) ncimui_query_pane_ParamLimits

0x9a0c,	// (0x0007d164) ncimui_query_pane

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp013

0xd50e,	// (0x00080c66) ncim_list_query_list_pane_t1_copy1

0xd51c,	// (0x00080c74) ncim_list_single_graphic_pane_g1

0xd524,	// (0x00080c7c) ncim_query_button_pane_cp01

0xd530,	// (0x00080c88) ncim_query_entry_pane_ParamLimits

0xd530,	// (0x00080c88) ncim_query_entry_pane

0xd543,	// (0x00080c9b) ncimui_query_pane_g1

0xd54f,	// (0x00080ca7) ncimui_query_pane_t1_ParamLimits

0xd54f,	// (0x00080ca7) ncimui_query_pane_t1

0xafbc,	// (0x0007e714) input_focus_pane_cp012

0xd568,	// (0x00080cc0) ncim_query_entry_pane_t1

0x24ef,	// (0x00075c47) main_im_pane_ParamLimits

0xafbc,	// (0x0007e714) main_mobtv_pane_ParamLimits

0xafbc,	// (0x0007e714) main_mobtv_pane

0x8983,	// (0x0007c0db) main_cset6_slider_pane_g18_ParamLimits

0x8983,	// (0x0007c0db) main_cset6_slider_pane_g18

0x89b3,	// (0x0007c10b) main_cset6_slider_pane_g19_ParamLimits

0x89b3,	// (0x0007c10b) main_cset6_slider_pane_g19

0xd57a,	// (0x00080cd2) bg_main_mobtv_pane_ParamLimits

0xd57a,	// (0x00080cd2) bg_main_mobtv_pane

0x9a1c,	// (0x0007d174) main_mobtv_info_pane

0x9a25,	// (0x0007d17d) main_mobtv_loading_pane_ParamLimits

0x9a25,	// (0x0007d17d) main_mobtv_loading_pane

0xd588,	// (0x00080ce0) main_mobtv_pg_channel_list_pane

0xd592,	// (0x00080cea) main_mobtv_pg_hdr_pane

0x9a32,	// (0x0007d18a) main_mobtv_programe_curr_pane_ParamLimits

0x9a32,	// (0x0007d18a) main_mobtv_programe_curr_pane

0x9a3f,	// (0x0007d197) main_mobtv_programe_next_pane_ParamLimits

0x9a3f,	// (0x0007d197) main_mobtv_programe_next_pane

0xd59b,	// (0x00080cf3) popup_mobtv_noti_window

0xc2f9,	// (0x0007fa51) main_tv_pg_hdr_pane_g1

0xd5a3,	// (0x00080cfb) main_tv_pg_hdr_pane_g2

0xd5ab,	// (0x00080d03) main_tv_pg_hdr_pane_g3

0xd5b3,	// (0x00080d0b) main_tv_pg_hdr_pane_g4

0xd5bb,	// (0x00080d13) main_tv_pg_hdr_pane_g5

0xd5c3,	// (0x00080d1b) main_tv_pg_hdr_pane_g6

0xd5cb,	// (0x00080d23) main_tv_pg_hdr_pane_g7

0xd5d3,	// (0x00080d2b) main_tv_pg_hdr_pane_g8

0xd5db,	// (0x00080d33) main_tv_pg_hdr_pane_g9

0xd5e3,	// (0x00080d3b) main_tv_pg_hdr_pane_g10

0xd5ed,	// (0x00080d45) main_tv_pg_hdr_pane_g11

0x000a,

0xfbcc,	// (0x00083324) main_tv_pg_hdr_pane_g

0xd5f7,	// (0x00080d4f) main_tv_pg_hdr_pane_t1

0xd605,	// (0x00080d5d) main_tv_pg_hdr_pane_t2

0xd613,	// (0x00080d6b) main_tv_pg_hdr_pane_t3

0xd621,	// (0x00080d79) main_tv_pg_hdr_pane_t4

0xd62f,	// (0x00080d87) main_tv_pg_hdr_pane_t5

0x0004,

0xfbe3,	// (0x0008333b) main_tv_pg_hdr_pane_t

0xd63d,	// (0x00080d95) single_mobtv_pg_channel_pane_ParamLimits

0xd63d,	// (0x00080d95) single_mobtv_pg_channel_pane

0xd64f,	// (0x00080da7) single_mobtv_pg_channel_table_pane

0xd658,	// (0x00080db0) single_mobtv_pg_channel_thumb_pane

0xd661,	// (0x00080db9) single_tv_pg_channel_pane_g1

0xd66a,	// (0x00080dc2) single_tv_pg_channel_pane_g2

0x0001,

0xfbee,	// (0x00083346) single_tv_pg_channel_pane_g

0xc528,	// (0x0007fc80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc528,	// (0x0007fc80) bg_single_mobtv_pg_channel_thumb_pane

0xd673,	// (0x00080dcb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd673,	// (0x00080dcb) single_mobtv_pg_channel_thumb_pane_g1

0xd681,	// (0x00080dd9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd681,	// (0x00080dd9) single_mobtv_pg_channel_thumb_pane_g2

0xd68d,	// (0x00080de5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd68d,	// (0x00080de5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbf3,	// (0x0008334b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbf3,	// (0x0008334b) single_mobtv_pg_channel_thumb_pane_g

0xd699,	// (0x00080df1) single_mobtv_pg_channel_thumb_pane_t1

0xd6a7,	// (0x00080dff) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbfa,	// (0x00083352) single_mobtv_pg_channel_thumb_pane_t

0xc2f9,	// (0x0007fa51) bg_single_mobtv_pg_channel_table_pane_g1

0xc2f9,	// (0x0007fa51) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x00082e2c) bg_single_mobtv_pg_channel_table_pane_g

0xd6b5,	// (0x00080e0d) single_mobtv_pg_channel_table_pane_t1

0xd6c3,	// (0x00080e1b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbff,	// (0x00083357) single_mobtv_pg_channel_table_pane_t

0x9a54,	// (0x0007d1ac) main_mobtv_info_pane_g1_ParamLimits

0x9a54,	// (0x0007d1ac) main_mobtv_info_pane_g1

0x9a70,	// (0x0007d1c8) main_mobtv_info_pane_t1_ParamLimits

0x9a70,	// (0x0007d1c8) main_mobtv_info_pane_t1

0x9ad6,	// (0x0007d22e) main_mobtv_info_pane_t2_ParamLimits

0x9ad6,	// (0x0007d22e) main_mobtv_info_pane_t2

0x0002,

0xfc09,	// (0x00083361) main_mobtv_info_pane_t_ParamLimits

0xfc09,	// (0x00083361) main_mobtv_info_pane_t

0x9b59,	// (0x0007d2b1) wait_bar_pane_cp05

0x9b69,	// (0x0007d2c1) main_mobtv_loading_pane_g1_ParamLimits

0x9b69,	// (0x0007d2c1) main_mobtv_loading_pane_g1

0x9b7a,	// (0x0007d2d2) main_mobtv_loading_pane_g2_ParamLimits

0x9b7a,	// (0x0007d2d2) main_mobtv_loading_pane_g2

0x9b86,	// (0x0007d2de) main_mobtv_loading_pane_g3_ParamLimits

0x9b86,	// (0x0007d2de) main_mobtv_loading_pane_g3

0x0002,

0xfc10,	// (0x00083368) main_mobtv_loading_pane_g_ParamLimits

0xfc10,	// (0x00083368) main_mobtv_loading_pane_g

0xd6d1,	// (0x00080e29) main_mobtv_loading_pane_t1_ParamLimits

0xd6d1,	// (0x00080e29) main_mobtv_loading_pane_t1

0xd6e9,	// (0x00080e41) main_mobtv_loading_pane_t2_ParamLimits

0xd6e9,	// (0x00080e41) main_mobtv_loading_pane_t2

0x0001,

0xfc17,	// (0x0008336f) main_mobtv_loading_pane_t_ParamLimits

0xfc17,	// (0x0008336f) main_mobtv_loading_pane_t

0x9b97,	// (0x0007d2ef) wait_bar_pane_cp06_ParamLimits

0x9b97,	// (0x0007d2ef) wait_bar_pane_cp06

0xd70d,	// (0x00080e65) main_mobtv_programe_curr_pane_t1

0xd71b,	// (0x00080e73) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc1c,	// (0x00083374) main_mobtv_programe_curr_pane_t

0xd729,	// (0x00080e81) main_mobtv_programe_next_pane_t1

0xd737,	// (0x00080e8f) main_mobtv_programe_next_pane_t2

0xd745,	// (0x00080e9d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc21,	// (0x00083379) main_mobtv_programe_next_pane_t

0xaf61,	// (0x0007e6b9) bg_popup_mobtv_noti_window_pane

0xd753,	// (0x00080eab) popup_mobtv_noti_window_g1

0xd75b,	// (0x00080eb3) popup_mobtv_noti_window_t1

0xd769,	// (0x00080ec1) popup_mobtv_noti_window_t2

0x0001,

0xfc28,	// (0x00083380) popup_mobtv_noti_window_t

0xc2f9,	// (0x0007fa51) bg_popup_mobtv_noti_window_pane_g1

0xaf61,	// (0x0007e6b9) sc_clock_pane

0xaf61,	// (0x0007e6b9) main_fs_bigclock_pane

0x93c7,	// (0x0007cb1f) blid2_tripm_pane_t4_ParamLimits

0x93c7,	// (0x0007cb1f) blid2_tripm_pane_t4

0x9ba6,	// (0x0007d2fe) sc_clock_pane_g1_ParamLimits

0x9ba6,	// (0x0007d2fe) sc_clock_pane_g1

0x9bb8,	// (0x0007d310) sc_clock_pane_t1_ParamLimits

0x9bb8,	// (0x0007d310) sc_clock_pane_t1

0x9bda,	// (0x0007d332) sc_clock_pane_t2_ParamLimits

0x9bda,	// (0x0007d332) sc_clock_pane_t2

0x9bf0,	// (0x0007d348) sc_clock_pane_t3_ParamLimits

0x9bf0,	// (0x0007d348) sc_clock_pane_t3

0x0004,

0xfc2d,	// (0x00083385) sc_clock_pane_t_ParamLimits

0xfc2d,	// (0x00083385) sc_clock_pane_t

0xa55f,	// (0x0007dcb7) main_fs_bigclock_indicator_pane_ParamLimits

0xa55f,	// (0x0007dcb7) main_fs_bigclock_indicator_pane

0x9c8c,	// (0x0007d3e4) main_fs_bigclock_pane_g1_ParamLimits

0x9c8c,	// (0x0007d3e4) main_fs_bigclock_pane_g1

0xa56b,	// (0x0007dcc3) main_fs_bigclock_pane_t1_ParamLimits

0xa56b,	// (0x0007dcc3) main_fs_bigclock_pane_t1

0xa57d,	// (0x0007dcd5) main_fs_bigclock_pane_t2_ParamLimits

0xa57d,	// (0x0007dcd5) main_fs_bigclock_pane_t2

0xa58f,	// (0x0007dce7) main_fs_bigclock_pane_t3_ParamLimits

0xa58f,	// (0x0007dce7) main_fs_bigclock_pane_t3

0x0002,

0xfe3b,	// (0x00083593) main_fs_bigclock_pane_t_ParamLimits

0xfe3b,	// (0x00083593) main_fs_bigclock_pane_t

0xe309,	// (0x00081a61) main_fs_bigclock_indicator_pane_g1

0xd42e,	// (0x00080b86) ncim_query_content_pane_g2_ParamLimits

0xd42e,	// (0x00080b86) ncim_query_content_pane_g2

0x0001,

0xfbba,	// (0x00083312) ncim_query_content_pane_g_ParamLimits

0xfbba,	// (0x00083312) ncim_query_content_pane_g

0x9c07,	// (0x0007d35f) sc_clock_pane_t4_ParamLimits

0x9c07,	// (0x0007d35f) sc_clock_pane_t4

0xafbc,	// (0x0007e714) main_radioblah_pane

0xea30,	// (0x00082188) cell_call4_button_pane_t1_copy1_ParamLimits

0xea30,	// (0x00082188) cell_call4_button_pane_t1_copy1

0x9872,	// (0x0007cfca) main_ncimui_pane_t1_ParamLimits

0x9872,	// (0x0007cfca) main_ncimui_pane_t1

0x988c,	// (0x0007cfe4) main_ncimui_pane_t2_ParamLimits

0x988c,	// (0x0007cfe4) main_ncimui_pane_t2

0x0002,

0xfbb3,	// (0x0008330b) main_ncimui_pane_t_ParamLimits

0xfbb3,	// (0x0008330b) main_ncimui_pane_t

0xd8aa,	// (0x00081002) main_radioblah_anim_pane_ParamLimits

0xd8aa,	// (0x00081002) main_radioblah_anim_pane

0xd8bb,	// (0x00081013) main_radioblah_info_pane_ParamLimits

0xd8bb,	// (0x00081013) main_radioblah_info_pane

0xd8cf,	// (0x00081027) main_radioblah_pane_t1_ParamLimits

0xd8cf,	// (0x00081027) main_radioblah_pane_t1

0xd8eb,	// (0x00081043) main_radioblah_pane_t2_ParamLimits

0xd8eb,	// (0x00081043) main_radioblah_pane_t2

0x0003,

0xfc4e,	// (0x000833a6) main_radioblah_pane_t_ParamLimits

0xfc4e,	// (0x000833a6) main_radioblah_pane_t

0x9cd6,	// (0x0007d42e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9cd6,	// (0x0007d42e) main_radioblah_rocker_ctrl_pane

0xd933,	// (0x0008108b) main_radioblah_info_pane_t1_ParamLimits

0xd933,	// (0x0008108b) main_radioblah_info_pane_t1

0x9d2a,	// (0x0007d482) main_radioblah_info_pane_t2_ParamLimits

0x9d2a,	// (0x0007d482) main_radioblah_info_pane_t2

0x0003,

0xfc57,	// (0x000833af) main_radioblah_info_pane_t_ParamLimits

0xfc57,	// (0x000833af) main_radioblah_info_pane_t

0xc2f9,	// (0x0007fa51) main_radioblah_rocker_ctrl_pane_g1

0x9dd8,	// (0x0007d530) main_radioblah_rocker_ctrl_pane_g2

0x9de0,	// (0x0007d538) main_radioblah_rocker_ctrl_pane_g3

0x9de8,	// (0x0007d540) main_radioblah_rocker_ctrl_pane_g4

0x9df0,	// (0x0007d548) main_radioblah_rocker_ctrl_pane_g5

0x9df8,	// (0x0007d550) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc60,	// (0x000833b8) main_radioblah_rocker_ctrl_pane_g

0x982b,	// (0x0007cf83) main_cset_text2_pane_t1_copy1_ParamLimits

0xea8c,	// (0x000821e4) cam4_image_uncrop_qvga_pane

0xeae6,	// (0x0008223e) vid4_image_uncrop_qcif_pane

0xec62,	// (0x000823ba) cam6_image_uncrop_qvga_pane_ParamLimits

0xec62,	// (0x000823ba) cam6_image_uncrop_qvga_pane

0xd11f,	// (0x00080877) vid6_image_uncrop_qcif_pane_ParamLimits

0xd11f,	// (0x00080877) vid6_image_uncrop_qcif_pane

0xaf61,	// (0x0007e6b9) bg_popup_preview_window_pane_cp03

0xd3d4,	// (0x00080b2c) list_cset_text2_pane

0xd3dc,	// (0x00080b34) main_cset6_text2_pane_g1

0xd3e4,	// (0x00080b3c) main_cset6_text2_pane_t1

0x9e00,	// (0x0007d558) list_cset_text2_pane_t1_ParamLimits

0x9e00,	// (0x0007d558) list_cset_text2_pane_t1

0xafbc,	// (0x0007e714) main_radioblah_pane_ParamLimits

0x9b47,	// (0x0007d29f) main_mobtv_info_pane_t3_ParamLimits

0x9b47,	// (0x0007d29f) main_mobtv_info_pane_t3

0x9cc4,	// (0x0007d41c) main_radioblah_pane_g1

0x9cfe,	// (0x0007d456) main_radioblah_info_pane_g1

0x9d7d,	// (0x0007d4d5) main_radioblah_info_pane_t3_ParamLimits

0x9d7d,	// (0x0007d4d5) main_radioblah_info_pane_t3

0x427d,	// (0x000779d5) highlight_cell_cale_month_pane_ParamLimits

0x427d,	// (0x000779d5) highlight_cell_cale_month_pane

0xaf61,	// (0x0007e6b9) main_phob_fisheye_pane

0xc678,	// (0x0007fdd0) scroll_pane_cp0031_ParamLimits

0xc678,	// (0x0007fdd0) scroll_pane_cp0031

0xd229,	// (0x00080981) wait_bar_pane_cp08_ParamLimits

0x96c0,	// (0x0007ce18) cset_list_set_pane_copy1_ParamLimits

0xd96d,	// (0x000810c5) highlight_cell_cale_month_pane_g1

0x9e19,	// (0x0007d571) highlight_cell_cale_month_pane_t1

0xd975,	// (0x000810cd) list_gen_pane_cp01

0xed69,	// (0x000824c1) scroll_pane_01

0x118a,	// (0x000748e2) list_single_double_fisheye_pane

0x1193,	// (0x000748eb) list_double_fisheye_pane_g1_ParamLimits

0x1193,	// (0x000748eb) list_double_fisheye_pane_g1

0x119f,	// (0x000748f7) list_double_fisheye_pane_g2_ParamLimits

0x119f,	// (0x000748f7) list_double_fisheye_pane_g2

0x11b3,	// (0x0007490b) list_double_fisheye_pane_g3_ParamLimits

0x11b3,	// (0x0007490b) list_double_fisheye_pane_g3

0x0004,

0xfc6d,	// (0x000833c5) list_double_fisheye_pane_g_ParamLimits

0xfc6d,	// (0x000833c5) list_double_fisheye_pane_g

0x11dc,	// (0x00074934) list_double_fisheye_pane_t1_ParamLimits

0x11dc,	// (0x00074934) list_double_fisheye_pane_t1

0x11f7,	// (0x0007494f) list_double_fisheye_pane_t2_ParamLimits

0x11f7,	// (0x0007494f) list_double_fisheye_pane_t2

0x0001,

0xfc78,	// (0x000833d0) list_double_fisheye_pane_t_ParamLimits

0xfc78,	// (0x000833d0) list_double_fisheye_pane_t

0xaf61,	// (0x0007e6b9) main_call5_pane

0x9c30,	// (0x0007d388) sc_swipe_pane_ParamLimits

0x9c30,	// (0x0007d388) sc_swipe_pane

0x9e38,	// (0x0007d590) call5_image_pane_ParamLimits

0x9e38,	// (0x0007d590) call5_image_pane

0x9e4d,	// (0x0007d5a5) call5_swipe_1_pane_ParamLimits

0x9e4d,	// (0x0007d5a5) call5_swipe_1_pane

0x9e5e,	// (0x0007d5b6) call5_swipe_2_pane_ParamLimits

0x9e5e,	// (0x0007d5b6) call5_swipe_2_pane

0x9e83,	// (0x0007d5db) popup_call5_audio_first_window_ParamLimits

0x9e83,	// (0x0007d5db) popup_call5_audio_first_window

0xc528,	// (0x0007fc80) call5_swipe_1_pane_g1_ParamLimits

0xc528,	// (0x0007fc80) call5_swipe_1_pane_g1

0xd97e,	// (0x000810d6) call5_swipe_1_pane_g2_ParamLimits

0xd97e,	// (0x000810d6) call5_swipe_1_pane_g2

0x0001,

0xfc7d,	// (0x000833d5) call5_swipe_1_pane_g_ParamLimits

0xfc7d,	// (0x000833d5) call5_swipe_1_pane_g

0xd98a,	// (0x000810e2) call5_swipe_1_pane_t1_ParamLimits

0xd98a,	// (0x000810e2) call5_swipe_1_pane_t1

0xc528,	// (0x0007fc80) call5_swipe_2_pane_g1_ParamLimits

0xc528,	// (0x0007fc80) call5_swipe_2_pane_g1

0xd99f,	// (0x000810f7) call5_swipe_2_pane_g2_ParamLimits

0xd99f,	// (0x000810f7) call5_swipe_2_pane_g2

0x0001,

0xfc82,	// (0x000833da) call5_swipe_2_pane_g_ParamLimits

0xfc82,	// (0x000833da) call5_swipe_2_pane_g

0xd9ab,	// (0x00081103) call5_swipe_2_pane_t1_ParamLimits

0xd9ab,	// (0x00081103) call5_swipe_2_pane_t1

0xd9c0,	// (0x00081118) sc_swipe_pane_g1_ParamLimits

0xd9c0,	// (0x00081118) sc_swipe_pane_g1

0xd9cd,	// (0x00081125) sc_swipe_pane_g2_ParamLimits

0xd9cd,	// (0x00081125) sc_swipe_pane_g2

0x0001,

0xfc87,	// (0x000833df) sc_swipe_pane_g_ParamLimits

0xfc87,	// (0x000833df) sc_swipe_pane_g

0xd9d9,	// (0x00081131) sc_swipe_pane_t1_ParamLimits

0xd9d9,	// (0x00081131) sc_swipe_pane_t1

0xaf61,	// (0x0007e6b9) main_cmail_launcher_pane

0x9e92,	// (0x0007d5ea) aid_size_cell_cmail_l_ParamLimits

0x9e92,	// (0x0007d5ea) aid_size_cell_cmail_l

0x9eab,	// (0x0007d603) grid_cmail_l_pane_ParamLimits

0x9eab,	// (0x0007d603) grid_cmail_l_pane

0x9ec0,	// (0x0007d618) cell_cmail_l_pane_ParamLimits

0x9ec0,	// (0x0007d618) cell_cmail_l_pane

0x9ee2,	// (0x0007d63a) cell_cmail_l_pane_g1_ParamLimits

0x9ee2,	// (0x0007d63a) cell_cmail_l_pane_g1

0x9ef2,	// (0x0007d64a) cell_cmail_l_pane_t1_ParamLimits

0x9ef2,	// (0x0007d64a) cell_cmail_l_pane_t1

0x9f08,	// (0x0007d660) cell_cmail_l_pane_t2_ParamLimits

0x9f08,	// (0x0007d660) cell_cmail_l_pane_t2

0x0001,

0xfc8c,	// (0x000833e4) cell_cmail_l_pane_t_ParamLimits

0xfc8c,	// (0x000833e4) cell_cmail_l_pane_t

0xafbc,	// (0x0007e714) grid_highlight_pane_cp018_ParamLimits

0xafbc,	// (0x0007e714) grid_highlight_pane_cp018

0x19a5,	// (0x000750fd) main2_pane_ParamLimits

0x19a5,	// (0x000750fd) main2_pane

0x26d8,	// (0x00075e30) popup_sp_fs_action_menu_bg_pane_g1

0x26e0,	// (0x00075e38) popup_sp_fs_action_menu_bg_pane_g2

0x26e8,	// (0x00075e40) popup_sp_fs_action_menu_bg_pane_g3

0x26f0,	// (0x00075e48) popup_sp_fs_action_menu_bg_pane_g4

0x26f8,	// (0x00075e50) popup_sp_fs_action_menu_bg_pane_g5

0x2700,	// (0x00075e58) popup_sp_fs_action_menu_bg_pane_g6

0x2708,	// (0x00075e60) popup_sp_fs_action_menu_bg_pane_g7

0x2710,	// (0x00075e68) popup_sp_fs_action_menu_bg_pane_g8

0x2718,	// (0x00075e70) popup_sp_fs_action_menu_bg_pane_g9

0x2720,	// (0x00075e78) popup_sp_fs_action_menu_bg_pane_g10

0x2720,	// (0x00075e78) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000828c7) popup_sp_fs_action_menu_bg_pane_g

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g3_g1

0x31ee,	// (0x00076946) list_medium_line_x2_t3_g3_g2_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_t3_g3_g2

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x00082975) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x00082975) list_medium_line_x2_t3_g3_g

0x0b46,	// (0x0007429e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b46,	// (0x0007429e) list_medium_line_x2_t3_g3_t1

0x0b5b,	// (0x000742b3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b5b,	// (0x000742b3) list_medium_line_x2_t3_g3_t2

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0008297c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0008297c) list_medium_line_x2_t3_g3_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g2_g1

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x00082983) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x00082983) list_medium_line_x2_t3_g2_g

0x0b82,	// (0x000742da) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b82,	// (0x000742da) list_medium_line_x2_t3_g2_t1

0x0b98,	// (0x000742f0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0b98,	// (0x000742f0) list_medium_line_x2_t3_g2_t2

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x00082988) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x00082988) list_medium_line_x2_t3_g2_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t4_g4_g1

0x31fa,	// (0x00076952) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31fa,	// (0x00076952) list_medium_line_x2_t4_g4_g2

0x31ee,	// (0x00076946) list_medium_line_x2_t4_g4_g3_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_t4_g4_g3

0x0baa,	// (0x00074302) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0baa,	// (0x00074302) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0008298f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0008298f) list_medium_line_x2_t4_g4_g

0x0bb6,	// (0x0007430e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0bb6,	// (0x0007430e) list_medium_line_x2_t4_g4_t1

0x0bcd,	// (0x00074325) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0bcd,	// (0x00074325) list_medium_line_x2_t4_g4_t2

0x0be2,	// (0x0007433a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0be2,	// (0x0007433a) list_medium_line_x2_t4_g4_t3

0x0bf4,	// (0x0007434c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0bf4,	// (0x0007434c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x00082998) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x00082998) list_medium_line_x2_t4_g4_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g4_g1

0x31fa,	// (0x00076952) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31fa,	// (0x00076952) list_medium_line_x2_t2_g4_g2

0x31ee,	// (0x00076946) list_medium_line_x2_t2_g4_g3_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_t2_g4_g3

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000829ff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000829ff) list_medium_line_x2_t2_g4_g

0x0c06,	// (0x0007435e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c06,	// (0x0007435e) list_medium_line_x2_t2_g4_t1

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x00082a08) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x00082a08) list_medium_line_x2_t2_g4_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g3_g1

0x31ee,	// (0x00076946) list_medium_line_x2_t2_g3_g2_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_t2_g3_g2

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x00082975) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x00082975) list_medium_line_x2_t2_g3_g

0x0c1b,	// (0x00074373) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c1b,	// (0x00074373) list_medium_line_x2_t2_g3_t1

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x00082a0d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x00082a0d) list_medium_line_x2_t2_g3_t

0x45f8,	// (0x00077d50) main_sp_fs_list_pane_ParamLimits

0x45f8,	// (0x00077d50) main_sp_fs_list_pane

0x4605,	// (0x00077d5d) sp_fs_scroll_pane_ParamLimits

0x4605,	// (0x00077d5d) sp_fs_scroll_pane

0x0c30,	// (0x00074388) list_medium_line_x2_t3_t1

0x0c40,	// (0x00074398) list_medium_line_x2_t3_t2

0x0c4e,	// (0x000743a6) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x00082a58) list_medium_line_x2_t3_t

0x0c5c,	// (0x000743b4) list_medium_line_x3_t4_t1

0x0c6c,	// (0x000743c4) list_medium_line_x3_t4_t2

0x0c7a,	// (0x000743d2) list_medium_line_x3_t4_t3

0x0c88,	// (0x000743e0) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x00082a5f) list_medium_line_x3_t4_t

0x0c96,	// (0x000743ee) list_medium_line_x4_t5_t1

0x0ca6,	// (0x000743fe) list_medium_line_x4_t5_t2

0x0c7a,	// (0x000743d2) list_medium_line_x4_t5_t3

0x0cb4,	// (0x0007440c) list_medium_line_x4_t5_t4

0x0c88,	// (0x000743e0) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x00082a68) list_medium_line_x4_t5_t

0x0b2e,	// (0x00074286) list_medium_line_t4_g4_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_t4_g4_g1

0x0baa,	// (0x00074302) list_medium_line_t4_g4_g2_ParamLimits

0x0baa,	// (0x00074302) list_medium_line_t4_g4_g2

0x0cc2,	// (0x0007441a) list_medium_line_t4_g4_g3_ParamLimits

0x0cc2,	// (0x0007441a) list_medium_line_t4_g4_g3

0x0b3a,	// (0x00074292) list_medium_line_t4_g4_g4_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x00082a73) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x00082a73) list_medium_line_t4_g4_g

0x0cce,	// (0x00074426) list_medium_line_t4_g4_t1_ParamLimits

0x0cce,	// (0x00074426) list_medium_line_t4_g4_t1

0x0ce3,	// (0x0007443b) list_medium_line_t4_g4_t2_ParamLimits

0x0ce3,	// (0x0007443b) list_medium_line_t4_g4_t2

0x0cf9,	// (0x00074451) list_medium_line_t4_g4_t3_ParamLimits

0x0cf9,	// (0x00074451) list_medium_line_t4_g4_t3

0x0d0f,	// (0x00074467) list_medium_line_t4_g4_t4_ParamLimits

0x0d0f,	// (0x00074467) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x00082a7c) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x00082a7c) list_medium_line_t4_g4_t

0x4933,	// (0x0007808b) chi_dic_find_pane_g1

0x61bc,	// (0x00079914) main_tport_pane

0xcdbd,	// (0x00080515) list_medium_line_plain_t1

0xcdcb,	// (0x00080523) list_medium_line_t2_g2_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t2_g2_g1

0xebb3,	// (0x0008230b) list_medium_line_t2_g2_g2_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_t2_g2_g2

0x0001,

0xf9f5,	// (0x0008314d) list_medium_line_t2_g2_g_ParamLimits

0xf9f5,	// (0x0008314d) list_medium_line_t2_g2_g

0x0f0b,	// (0x00074663) list_medium_line_t2_g2_t1_ParamLimits

0x0f0b,	// (0x00074663) list_medium_line_t2_g2_t1

0x0f25,	// (0x0007467d) list_medium_line_t2_g2_t2_ParamLimits

0x0f25,	// (0x0007467d) list_medium_line_t2_g2_t2

0x0001,

0xf9fa,	// (0x00083152) list_medium_line_t2_g2_t_ParamLimits

0xf9fa,	// (0x00083152) list_medium_line_t2_g2_t

0xcecd,	// (0x00080625) aid_sp_fs_list_icon_a_sm

0xec48,	// (0x000823a0) aid_sp_fs_list_icon_d

0xced5,	// (0x0008062d) aid_sp_fs_text_primary

0xec50,	// (0x000823a8) aid_sp_fs_text_secondary

0xcede,	// (0x00080636) list_medium_line

0xcede,	// (0x00080636) list_medium_line_g2

0xcede,	// (0x00080636) list_medium_line_g3

0xcede,	// (0x00080636) list_medium_line_plain

0xcede,	// (0x00080636) list_medium_line_plain_t2

0xcede,	// (0x00080636) list_medium_line_plain_t3

0xcede,	// (0x00080636) list_medium_line_right_icon

0xcede,	// (0x00080636) list_medium_line_right_iconx2

0xcede,	// (0x00080636) list_medium_line_t2

0xcede,	// (0x00080636) list_medium_line_t2_g2

0xcede,	// (0x00080636) list_medium_line_t2_g3

0xcede,	// (0x00080636) list_medium_line_t2_right_icon

0xcede,	// (0x00080636) list_medium_line_t2_right_iconx2

0xcede,	// (0x00080636) list_medium_line_t3

0xcede,	// (0x00080636) list_medium_line_t3_g2

0xcede,	// (0x00080636) list_medium_line_t3_g3

0xcede,	// (0x00080636) list_medium_line_t3_right_iconx2

0x918f,	// (0x0007c8e7) list_medium_line_t4_g4

0xec59,	// (0x000823b1) list_medium_line_x2

0xec59,	// (0x000823b1) list_medium_line_x2_t2_g2

0xec59,	// (0x000823b1) list_medium_line_x2_t2_g3

0xec59,	// (0x000823b1) list_medium_line_x2_t2_g4

0xec59,	// (0x000823b1) list_medium_line_x2_t3

0xec59,	// (0x000823b1) list_medium_line_x2_t3_g2

0xec59,	// (0x000823b1) list_medium_line_x2_t3_g3

0xec59,	// (0x000823b1) list_medium_line_x2_t3_g4

0xec59,	// (0x000823b1) list_medium_line_x2_t4_g2

0xec59,	// (0x000823b1) list_medium_line_x2_t4_g4

0xcee7,	// (0x0008063f) list_medium_line_x3

0xcee7,	// (0x0008063f) list_medium_line_x3_t4

0xcee7,	// (0x0008063f) list_medium_line_x3_t4_g4

0x918f,	// (0x0007c8e7) list_medium_line_x4_t4

0x918f,	// (0x0007c8e7) list_medium_line_x4_t4_g7

0x918f,	// (0x0007c8e7) list_medium_line_x4_t5

0x109c,	// (0x000747f4) list_single_fs_dyc_pane_ParamLimits

0x109c,	// (0x000747f4) list_single_fs_dyc_pane

0x0b2e,	// (0x00074286) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x4_t4_g7_g1

0x10d4,	// (0x0007482c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x10d4,	// (0x0007482c) list_medium_line_x4_t4_g7_g2

0x9810,	// (0x0007cf68) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9810,	// (0x0007cf68) list_medium_line_x4_t4_g7_g3

0x981f,	// (0x0007cf77) list_medium_line_x4_t4_g7_g4_ParamLimits

0x981f,	// (0x0007cf77) list_medium_line_x4_t4_g7_g4

0x10e0,	// (0x00074838) list_medium_line_x4_t4_g7_g5_ParamLimits

0x10e0,	// (0x00074838) list_medium_line_x4_t4_g7_g5

0x10ef,	// (0x00074847) list_medium_line_x4_t4_g7_g6_ParamLimits

0x10ef,	// (0x00074847) list_medium_line_x4_t4_g7_g6

0x10fe,	// (0x00074856) list_medium_line_x4_t4_g7_g7_ParamLimits

0x10fe,	// (0x00074856) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb94,	// (0x000832ec) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb94,	// (0x000832ec) list_medium_line_x4_t4_g7_g

0x110a,	// (0x00074862) list_medium_line_x4_t4_g7_t1_ParamLimits

0x110a,	// (0x00074862) list_medium_line_x4_t4_g7_t1

0x111f,	// (0x00074877) list_medium_line_x4_t4_g7_t2_ParamLimits

0x111f,	// (0x00074877) list_medium_line_x4_t4_g7_t2

0x1134,	// (0x0007488c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1134,	// (0x0007488c) list_medium_line_x4_t4_g7_t3

0x1149,	// (0x000748a1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1149,	// (0x000748a1) list_medium_line_x4_t4_g7_t4

0x115b,	// (0x000748b3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x115b,	// (0x000748b3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfba3,	// (0x000832fb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfba3,	// (0x000832fb) list_medium_line_x4_t4_g7_t

0x116d,	// (0x000748c5) list_single_dyc_row_pane_ParamLimits

0x116d,	// (0x000748c5) list_single_dyc_row_pane

0x9e27,	// (0x0007d57f) call5_gesture_pane_ParamLimits

0x9e27,	// (0x0007d57f) call5_gesture_pane

0x9e6f,	// (0x0007d5c7) call5_windows_pane_ParamLimits

0x9e6f,	// (0x0007d5c7) call5_windows_pane

0x9f20,	// (0x0007d678) call5_swipe_1_pane_cp_ParamLimits

0x9f20,	// (0x0007d678) call5_swipe_1_pane_cp

0x9f2c,	// (0x0007d684) call5_swipe_2_pane_cp_ParamLimits

0x9f2c,	// (0x0007d684) call5_swipe_2_pane_cp

0x2e5d,	// (0x000765b5) call5_image_pane_cp

0x9f38,	// (0x0007d690) popup_call5_audio_first_window_cp_ParamLimits

0x9f38,	// (0x0007d690) popup_call5_audio_first_window_cp

0xd9c0,	// (0x00081118) call5_swipe_1_pane_g1_cp_ParamLimits

0xd9c0,	// (0x00081118) call5_swipe_1_pane_g1_cp

0xd9ee,	// (0x00081146) call5_swipe_1_pane_g2_cp

0xd9d9,	// (0x00081131) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9d9,	// (0x00081131) call5_swipe_1_pane_t1_cp

0xd9c0,	// (0x00081118) call5_swipe_2_pane_g1_cp_ParamLimits

0xd9c0,	// (0x00081118) call5_swipe_2_pane_g1_cp

0xd9f6,	// (0x0008114e) call5_swipe_2_pane_g2_cp

0xd9fe,	// (0x00081156) call5_swipe_2_pane_t1_cp_ParamLimits

0xd9fe,	// (0x00081156) call5_swipe_2_pane_t1_cp

0xafbc,	// (0x0007e714) main_sp_fs_email_pane

0xda13,	// (0x0008116b) main_sp_fs_listscroll_pane_te

0xda1c,	// (0x00081174) popup_sp_fs_action_menu_pane_ParamLimits

0xda1c,	// (0x00081174) popup_sp_fs_action_menu_pane

0xc2f9,	// (0x0007fa51) bg_sp_fs_ctrlbar_pane_g1

0xc8f9,	// (0x00080051) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc90b,	// (0x00080063) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc902,	// (0x0008005a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2f9,	// (0x0007fa51) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc91,	// (0x000833e9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0e6,	// (0x0007f83e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0e6,	// (0x0007f83e) bg_sp_fs_ctrlbar_ddmenu_pane

0xda50,	// (0x000811a8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda50,	// (0x000811a8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda5c,	// (0x000811b4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda5c,	// (0x000811b4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc9a,	// (0x000833f2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc9a,	// (0x000833f2) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda68,	// (0x000811c0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda68,	// (0x000811c0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xec6e,	// (0x000823c6) list_medium_line_t2_right_icon_g1

0xda82,	// (0x000811da) list_medium_line_t2_right_icon_t1

0x1219,	// (0x00074971) list_medium_line_t2_right_icon_t2

0x0001,

0xfc9f,	// (0x000833f7) list_medium_line_t2_right_icon_t

0xbde5,	// (0x0007f53d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbde5,	// (0x0007f53d) bg_sp_fs_ctrlbar_pane

0x9f8a,	// (0x0007d6e2) main_sp_fs_ctrlbar_button_pane_cp01

0x9f92,	// (0x0007d6ea) main_sp_fs_ctrlbar_ddmenu_pane

0xdaca,	// (0x00081222) main_sp_fs_ctrlbar_pane_g1

0xdad6,	// (0x0008122e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfca4,	// (0x000833fc) main_sp_fs_ctrlbar_pane_g

0x9fce,	// (0x0007d726) main_sp_fs_ctrlbar_pane_t1

0xa017,	// (0x0007d76f) main_sp_fs_ctrlbar_pane

0xa038,	// (0x0007d790) main_sp_fs_listscroll_pane_te_cp01

0x1227,	// (0x0007497f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1227,	// (0x0007497f) popup_sp_fs_action_menu_pane_cp01

0xafbc,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xafbc,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp01

0xdafd,	// (0x00081255) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdafd,	// (0x00081255) sp_fs_action_menu_list_gene_pane_g1

0xdb0c,	// (0x00081264) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb0c,	// (0x00081264) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcb2,	// (0x0008340a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcb2,	// (0x0008340a) sp_fs_action_menu_list_gene_pane_g

0xdb19,	// (0x00081271) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdb19,	// (0x00081271) sp_fs_action_menu_list_gene_pane_t1

0xdb31,	// (0x00081289) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdb31,	// (0x00081289) sp_fs_action_menu_list_gene_pane

0xdb50,	// (0x000812a8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdb50,	// (0x000812a8) popup_sp_fs_action_menu_bg_pane

0xdb5e,	// (0x000812b6) sp_fs_action_menu_list_pane_ParamLimits

0xdb5e,	// (0x000812b6) sp_fs_action_menu_list_pane

0xdb7e,	// (0x000812d6) sp_fs_scroll_pane_cp01_ParamLimits

0xdb7e,	// (0x000812d6) sp_fs_scroll_pane_cp01

0x1257,	// (0x000749af) list_medium_line_plain_t2_t1

0x1267,	// (0x000749bf) list_medium_line_plain_t2_t2

0x0001,

0xfcb7,	// (0x0008340f) list_medium_line_plain_t2_t

0x1275,	// (0x000749cd) list_medium_line_plain_t3_t1

0x1285,	// (0x000749dd) list_medium_line_plain_t3_t2

0x1293,	// (0x000749eb) list_medium_line_plain_t3_t3

0x0002,

0xfcbc,	// (0x00083414) list_medium_line_plain_t3_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t2_g2_g1

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x00082983) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x00082983) list_medium_line_x2_t2_g2_g

0x0cce,	// (0x00074426) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0cce,	// (0x00074426) list_medium_line_x2_t2_g2_t1

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcc3,	// (0x0008341b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcc3,	// (0x0008341b) list_medium_line_x2_t2_g2_t

0x0b2e,	// (0x00074286) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t4_g2_g1

0x12a1,	// (0x000749f9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x12a1,	// (0x000749f9) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcc8,	// (0x00083420) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcc8,	// (0x00083420) list_medium_line_x2_t4_g2_g

0x12b2,	// (0x00074a0a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x12b2,	// (0x00074a0a) list_medium_line_x2_t4_g2_t1

0x12c9,	// (0x00074a21) list_medium_line_x2_t4_g2_t2_ParamLimits

0x12c9,	// (0x00074a21) list_medium_line_x2_t4_g2_t2

0x12de,	// (0x00074a36) list_medium_line_x2_t4_g2_t3_ParamLimits

0x12de,	// (0x00074a36) list_medium_line_x2_t4_g2_t3

0x0b6d,	// (0x000742c5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfccd,	// (0x00083425) list_medium_line_x2_t4_g2_t_ParamLimits

0xfccd,	// (0x00083425) list_medium_line_x2_t4_g2_t

0xec76,	// (0x000823ce) list_medium_line_t3_right_iconx2_g1

0xec6e,	// (0x000823c6) list_medium_line_t3_right_iconx2_g2

0x12f0,	// (0x00074a48) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcd6,	// (0x0008342e) list_medium_line_t3_right_iconx2_g

0x12f8,	// (0x00074a50) list_medium_line_t3_right_iconx2_t1

0x1308,	// (0x00074a60) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcdd,	// (0x00083435) list_medium_line_t3_right_iconx2_t

0x0b2e,	// (0x00074286) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x3_t4_g4_g1

0x31ee,	// (0x00076946) list_medium_line_x3_t4_g4_g2_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x3_t4_g4_g2

0x0baa,	// (0x00074302) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0baa,	// (0x00074302) list_medium_line_x3_t4_g4_g3

0xa058,	// (0x0007d7b0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa058,	// (0x0007d7b0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfce2,	// (0x0008343a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfce2,	// (0x0008343a) list_medium_line_x3_t4_g4_g

0x1316,	// (0x00074a6e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1316,	// (0x00074a6e) list_medium_line_x3_t4_g4_t1

0x132d,	// (0x00074a85) list_medium_line_x3_t4_g4_t2_ParamLimits

0x132d,	// (0x00074a85) list_medium_line_x3_t4_g4_t2

0x1342,	// (0x00074a9a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1342,	// (0x00074a9a) list_medium_line_x3_t4_g4_t3

0x1357,	// (0x00074aaf) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1357,	// (0x00074aaf) list_medium_line_x3_t4_g4_t4

0x0003,

0xfceb,	// (0x00083443) list_medium_line_x3_t4_g4_t_ParamLimits

0xfceb,	// (0x00083443) list_medium_line_x3_t4_g4_t

0x1374,	// (0x00074acc) list_single_dyc_row_text_pane_t1_ParamLimits

0x1374,	// (0x00074acc) list_single_dyc_row_text_pane_t1

0x13ab,	// (0x00074b03) list_single_dyc_row_text_pane_t2_ParamLimits

0x13ab,	// (0x00074b03) list_single_dyc_row_text_pane_t2

0xdba4,	// (0x000812fc) list_single_dyc_row_text_pane_t3_ParamLimits

0xdba4,	// (0x000812fc) list_single_dyc_row_text_pane_t3

0x0005,

0xfcf4,	// (0x0008344c) list_single_dyc_row_text_pane_t_ParamLimits

0xfcf4,	// (0x0008344c) list_single_dyc_row_text_pane_t

0xdbc8,	// (0x00081320) list_single_dyc_row_pane_g1_ParamLimits

0xdbc8,	// (0x00081320) list_single_dyc_row_pane_g1

0xdbd4,	// (0x0008132c) list_single_dyc_row_pane_g2_ParamLimits

0xdbd4,	// (0x0008132c) list_single_dyc_row_pane_g2

0xdbe0,	// (0x00081338) list_single_dyc_row_pane_g3_ParamLimits

0xdbe0,	// (0x00081338) list_single_dyc_row_pane_g3

0xdbec,	// (0x00081344) list_single_dyc_row_pane_g4_ParamLimits

0xdbec,	// (0x00081344) list_single_dyc_row_pane_g4

0x0003,

0xfd01,	// (0x00083459) list_single_dyc_row_pane_g_ParamLimits

0xfd01,	// (0x00083459) list_single_dyc_row_pane_g

0xdbf8,	// (0x00081350) list_single_dyc_row_text_pane_ParamLimits

0xdbf8,	// (0x00081350) list_single_dyc_row_text_pane

0xaf61,	// (0x0007e6b9) bg_sp_fs_scroll_pane

0xdc17,	// (0x0008136f) thumb_sp_fs_scroll_pane

0xcdcb,	// (0x00080523) list_medium_line_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_g1

0xdc20,	// (0x00081378) list_medium_line_t1_ParamLimits

0xdc20,	// (0x00081378) list_medium_line_t1

0x0b2e,	// (0x00074286) list_medium_line_x2_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_g1

0x31ee,	// (0x00076946) list_medium_line_x2_g2_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_g2

0x0001,

0xfd0a,	// (0x00083462) list_medium_line_x2_g_ParamLimits

0xfd0a,	// (0x00083462) list_medium_line_x2_g

0xdc35,	// (0x0008138d) list_medium_line_x2_t1_ParamLimits

0xdc35,	// (0x0008138d) list_medium_line_x2_t1

0x0b2e,	// (0x00074286) list_medium_line_x3_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x3_g1

0x31ee,	// (0x00076946) list_medium_line_x3_g2_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x3_g2

0x0001,

0xfd0a,	// (0x00083462) list_medium_line_x3_g_ParamLimits

0xfd0a,	// (0x00083462) list_medium_line_x3_g

0xdc35,	// (0x0008138d) list_medium_line_x3_t1_ParamLimits

0xdc35,	// (0x0008138d) list_medium_line_x3_t1

0xdc4b,	// (0x000813a3) thumb_sp_fs_scroll_pane_g1

0xdc54,	// (0x000813ac) thumb_sp_fs_scroll_pane_g2

0xdc5d,	// (0x000813b5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd0f,	// (0x00083467) thumb_sp_fs_scroll_pane_g

0xdc4b,	// (0x000813a3) bg_sp_fs_scroll_pane_g1

0xdc54,	// (0x000813ac) bg_sp_fs_scroll_pane_g2

0xdc5d,	// (0x000813b5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd0f,	// (0x00083467) bg_sp_fs_scroll_pane_g

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b2e,	// (0x00074286) list_medium_line_x2_t3_g4_g1

0x31fa,	// (0x00076952) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31fa,	// (0x00076952) list_medium_line_x2_t3_g4_g2

0x31ee,	// (0x00076946) list_medium_line_x2_t3_g4_g3_ParamLimits

0x31ee,	// (0x00076946) list_medium_line_x2_t3_g4_g3

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b3a,	// (0x00074292) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000829ff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000829ff) list_medium_line_x2_t3_g4_g

0x14ce,	// (0x00074c26) list_medium_line_x2_t3_g4_t1_ParamLimits

0x14ce,	// (0x00074c26) list_medium_line_x2_t3_g4_t1

0x14e4,	// (0x00074c3c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x14e4,	// (0x00074c3c) list_medium_line_x2_t3_g4_t2

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b6d,	// (0x000742c5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd16,	// (0x0008346e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd16,	// (0x0008346e) list_medium_line_x2_t3_g4_t

0xcdcb,	// (0x00080523) list_medium_line_g2_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_g2_g1

0xebb3,	// (0x0008230b) list_medium_line_g2_g2_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_g2_g2

0x0001,

0xf9f5,	// (0x0008314d) list_medium_line_g2_g_ParamLimits

0xf9f5,	// (0x0008314d) list_medium_line_g2_g

0xdc66,	// (0x000813be) list_medium_line_g2_t1_ParamLimits

0xdc66,	// (0x000813be) list_medium_line_g2_t1

0xcdcb,	// (0x00080523) list_medium_line_t3_g2_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t3_g2_g1

0xebb3,	// (0x0008230b) list_medium_line_t3_g2_g2_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_t3_g2_g2

0x0001,

0xf9f5,	// (0x0008314d) list_medium_line_t3_g2_g_ParamLimits

0xf9f5,	// (0x0008314d) list_medium_line_t3_g2_g

0x14fd,	// (0x00074c55) list_medium_line_t3_g2_t1_ParamLimits

0x14fd,	// (0x00074c55) list_medium_line_t3_g2_t1

0x1514,	// (0x00074c6c) list_medium_line_t3_g2_t2_ParamLimits

0x1514,	// (0x00074c6c) list_medium_line_t3_g2_t2

0x1529,	// (0x00074c81) list_medium_line_t3_g2_t3_ParamLimits

0x1529,	// (0x00074c81) list_medium_line_t3_g2_t3

0x0002,

0xfd1d,	// (0x00083475) list_medium_line_t3_g2_t_ParamLimits

0xfd1d,	// (0x00083475) list_medium_line_t3_g2_t

0xec6e,	// (0x000823c6) list_medium_line_right_icon_g1

0xdc7b,	// (0x000813d3) list_medium_line_right_icon_t1

0xcdcb,	// (0x00080523) list_medium_line_t2_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t2_g1

0xdc89,	// (0x000813e1) list_medium_line_t2_t1_ParamLimits

0xdc89,	// (0x000813e1) list_medium_line_t2_t1

0x153e,	// (0x00074c96) list_medium_line_t2_t2_ParamLimits

0x153e,	// (0x00074c96) list_medium_line_t2_t2

0x0001,

0xfd24,	// (0x0008347c) list_medium_line_t2_t_ParamLimits

0xfd24,	// (0x0008347c) list_medium_line_t2_t

0xcdcb,	// (0x00080523) list_medium_line_t3_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t3_g1

0x1553,	// (0x00074cab) list_medium_line_t3_t1_ParamLimits

0x1553,	// (0x00074cab) list_medium_line_t3_t1

0x156a,	// (0x00074cc2) list_medium_line_t3_t2_ParamLimits

0x156a,	// (0x00074cc2) list_medium_line_t3_t2

0x157f,	// (0x00074cd7) list_medium_line_t3_t3_ParamLimits

0x157f,	// (0x00074cd7) list_medium_line_t3_t3

0x0002,

0xfd29,	// (0x00083481) list_medium_line_t3_t_ParamLimits

0xfd29,	// (0x00083481) list_medium_line_t3_t

0xcdcb,	// (0x00080523) list_medium_line_g3_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_g3_g1

0xec7e,	// (0x000823d6) list_medium_line_g3_g2_ParamLimits

0xec7e,	// (0x000823d6) list_medium_line_g3_g2

0xebb3,	// (0x0008230b) list_medium_line_g3_g3_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_g3_g3

0x0002,

0xfd30,	// (0x00083488) list_medium_line_g3_g_ParamLimits

0xfd30,	// (0x00083488) list_medium_line_g3_g

0xdca3,	// (0x000813fb) list_medium_line_g3_t1_ParamLimits

0xdca3,	// (0x000813fb) list_medium_line_g3_t1

0xcdcb,	// (0x00080523) list_medium_line_t2_g3_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t2_g3_g1

0xec7e,	// (0x000823d6) list_medium_line_t2_g3_g2_ParamLimits

0xec7e,	// (0x000823d6) list_medium_line_t2_g3_g2

0xebb3,	// (0x0008230b) list_medium_line_t2_g3_g3_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_t2_g3_g3

0x0002,

0xfd30,	// (0x00083488) list_medium_line_t2_g3_g_ParamLimits

0xfd30,	// (0x00083488) list_medium_line_t2_g3_g

0x1591,	// (0x00074ce9) list_medium_line_t2_g3_t1_ParamLimits

0x1591,	// (0x00074ce9) list_medium_line_t2_g3_t1

0x15a8,	// (0x00074d00) list_medium_line_t2_g3_t2_ParamLimits

0x15a8,	// (0x00074d00) list_medium_line_t2_g3_t2

0x0001,

0xfd37,	// (0x0008348f) list_medium_line_t2_g3_t_ParamLimits

0xfd37,	// (0x0008348f) list_medium_line_t2_g3_t

0xcdcb,	// (0x00080523) list_medium_line_t3_g3_g1_ParamLimits

0xcdcb,	// (0x00080523) list_medium_line_t3_g3_g1

0xec7e,	// (0x000823d6) list_medium_line_t3_g3_g2_ParamLimits

0xec7e,	// (0x000823d6) list_medium_line_t3_g3_g2

0xebb3,	// (0x0008230b) list_medium_line_t3_g3_g3_ParamLimits

0xebb3,	// (0x0008230b) list_medium_line_t3_g3_g3

0x0002,

0xfd30,	// (0x00083488) list_medium_line_t3_g3_g_ParamLimits

0xfd30,	// (0x00083488) list_medium_line_t3_g3_g

0x15bd,	// (0x00074d15) list_medium_line_t3_g3_t1_ParamLimits

0x15bd,	// (0x00074d15) list_medium_line_t3_g3_t1

0x15d6,	// (0x00074d2e) list_medium_line_t3_g3_t2_ParamLimits

0x15d6,	// (0x00074d2e) list_medium_line_t3_g3_t2

0x15ec,	// (0x00074d44) list_medium_line_t3_g3_t3_ParamLimits

0x15ec,	// (0x00074d44) list_medium_line_t3_g3_t3

0x0002,

0xfd3c,	// (0x00083494) list_medium_line_t3_g3_t_ParamLimits

0xfd3c,	// (0x00083494) list_medium_line_t3_g3_t

0xec76,	// (0x000823ce) list_medium_line_right_iconx2_g1

0xec6e,	// (0x000823c6) list_medium_line_right_iconx2_g2

0x0001,

0xfd43,	// (0x0008349b) list_medium_line_right_iconx2_g

0xec8a,	// (0x000823e2) list_medium_line_right_iconx2_t1

0xec76,	// (0x000823ce) list_medium_line_t2_right_iconx2_g1

0xec6e,	// (0x000823c6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd43,	// (0x0008349b) list_medium_line_t2_right_iconx2_g

0x1602,	// (0x00074d5a) list_medium_line_t2_right_iconx2_t1

0x1612,	// (0x00074d6a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd48,	// (0x000834a0) list_medium_line_t2_right_iconx2_t

0x1620,	// (0x00074d78) list_medium_line_x4_t4_t1

0x162e,	// (0x00074d86) list_medium_line_x4_t4_t2

0x163e,	// (0x00074d96) list_medium_line_x4_t4_t3

0x164e,	// (0x00074da6) list_medium_line_x4_t4_t4

0x0003,

0xfd4d,	// (0x000834a5) list_medium_line_x4_t4_t

0xa09d,	// (0x0007d7f5) tport_appsw_pane_ParamLimits

0xa09d,	// (0x0007d7f5) tport_appsw_pane

0xa0ae,	// (0x0007d806) tport_contact_pane_ParamLimits

0xa0ae,	// (0x0007d806) tport_contact_pane

0xa0c2,	// (0x0007d81a) tport_listscroll_pane_ParamLimits

0xa0c2,	// (0x0007d81a) tport_listscroll_pane

0xa0da,	// (0x0007d832) cell_tport_appsw_pane_ParamLimits

0xa0da,	// (0x0007d832) cell_tport_appsw_pane

0xcd0a,	// (0x00080462) tport_appsw_pane_g1_ParamLimits

0xcd0a,	// (0x00080462) tport_appsw_pane_g1

0xdcb8,	// (0x00081410) tport_contact_pane_g1

0xdcc1,	// (0x00081419) tport_contact_pane_t1

0xdccf,	// (0x00081427) tport_contact_pane_t2

0x0001,

0xfd56,	// (0x000834ae) tport_contact_pane_t

0xdcdd,	// (0x00081435) list_tport_pane

0x2732,	// (0x00075e8a) scroll_pane_cp_030

0xdcee,	// (0x00081446) cell_tport_appsw_pane_g1

0xdcfe,	// (0x00081456) cell_tport_appsw_pane_t1

0xdd0c,	// (0x00081464) grid_highlight_pane_cp019

0xa110,	// (0x0007d868) list_tport_double_graphic_pane_ParamLimits

0xa110,	// (0x0007d868) list_tport_double_graphic_pane

0xafbc,	// (0x0007e714) list_highlight_pane_cp023_ParamLimits

0xafbc,	// (0x0007e714) list_highlight_pane_cp023

0xa11d,	// (0x0007d875) list_tport_double_graphic_pane_g1_ParamLimits

0xa11d,	// (0x0007d875) list_tport_double_graphic_pane_g1

0xa12a,	// (0x0007d882) list_tport_double_graphic_pane_t1_ParamLimits

0xa12a,	// (0x0007d882) list_tport_double_graphic_pane_t1

0xa13f,	// (0x0007d897) list_tport_double_graphic_pane_t2_ParamLimits

0xa13f,	// (0x0007d897) list_tport_double_graphic_pane_t2

0x0001,

0xfd62,	// (0x000834ba) list_tport_double_graphic_pane_t_ParamLimits

0xfd62,	// (0x000834ba) list_tport_double_graphic_pane_t

0xaf61,	// (0x0007e6b9) main_cale_note_pane

0x8577,	// (0x0007bccf) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8577,	// (0x0007bccf) cell_vitu2_function_top_wide_pane_cp01

0x9b59,	// (0x0007d2b1) wait_bar_pane_cp05_ParamLimits

0xafbc,	// (0x0007e714) listscroll_cmail_pane

0xdd14,	// (0x0008146c) list_cmail_pane

0xa151,	// (0x0007d8a9) list_cmail_body_pane

0xa151,	// (0x0007d8a9) list_single_cmail_header_caption_pane

0xa168,	// (0x0007d8c0) list_single_cmail_header_detail_pane_ParamLimits

0xa168,	// (0x0007d8c0) list_single_cmail_header_detail_pane

0xdd30,	// (0x00081488) list_single_cmail_header_caption_pane_t1

0x165e,	// (0x00074db6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x165e,	// (0x00074db6) list_single_cmail_header_detail_pane_g1

0xec98,	// (0x000823f0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xec98,	// (0x000823f0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd67,	// (0x000834bf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd67,	// (0x000834bf) list_single_cmail_header_detail_pane_g

0x1674,	// (0x00074dcc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1674,	// (0x00074dcc) list_single_cmail_header_detail_pane_t1

0xdd78,	// (0x000814d0) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdd78,	// (0x000814d0) list_single_cmail_header_editor_pane_bg

0xdd8f,	// (0x000814e7) list_cmail_body_pane_g1

0xdd98,	// (0x000814f0) list_cmail_body_pane_t1

0xcd47,	// (0x0008049f) list_single_cmail_header_editor_pane_bg_g1

0x37a5,	// (0x00076efd) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd57,	// (0x000804af) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd4f,	// (0x000804a7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee8e,	// (0x000825e6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd77,	// (0x000804cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd67,	// (0x000804bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd6f,	// (0x000804c7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3785,	// (0x00076edd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa191,	// (0x0007d8e9) calenote_gesture_pane_ParamLimits

0xa191,	// (0x0007d8e9) calenote_gesture_pane

0xa1ad,	// (0x0007d905) calenote_window_pane_ParamLimits

0xa1ad,	// (0x0007d905) calenote_window_pane

0xdda6,	// (0x000814fe) popup_note_window_cp01

0xa1c9,	// (0x0007d921) calenote_swipe_1_pane_ParamLimits

0xa1c9,	// (0x0007d921) calenote_swipe_1_pane

0x9f2c,	// (0x0007d684) calenote_swipe_2_pane_ParamLimits

0x9f2c,	// (0x0007d684) calenote_swipe_2_pane

0xd9c0,	// (0x00081118) calenote_swipe_1_pane_g1_ParamLimits

0xd9c0,	// (0x00081118) calenote_swipe_1_pane_g1

0xd9cd,	// (0x00081125) calenote_swipe_1_pane_g2_ParamLimits

0xd9cd,	// (0x00081125) calenote_swipe_1_pane_g2

0x0001,

0xfc87,	// (0x000833df) calenote_swipe_1_pane_g_ParamLimits

0xfc87,	// (0x000833df) calenote_swipe_1_pane_g

0xddb8,	// (0x00081510) calenote_swipe_1_pane_t1_ParamLimits

0xddb8,	// (0x00081510) calenote_swipe_1_pane_t1

0xd9c0,	// (0x00081118) calenote_swipe_2_pane_g1_ParamLimits

0xd9c0,	// (0x00081118) calenote_swipe_2_pane_g1

0xddd7,	// (0x0008152f) calenote_swipe_2_pane_g2_ParamLimits

0xddd7,	// (0x0008152f) calenote_swipe_2_pane_g2

0x0001,

0xfd73,	// (0x000834cb) calenote_swipe_2_pane_g_ParamLimits

0xfd73,	// (0x000834cb) calenote_swipe_2_pane_g

0xdde3,	// (0x0008153b) calenote_swipe_2_pane_t1_ParamLimits

0xdde3,	// (0x0008153b) calenote_swipe_2_pane_t1

0xaf61,	// (0x0007e6b9) main_mup_navstr_pane

0x73bd,	// (0x0007ab15) main_mup3_pane_t7_ParamLimits

0x73bd,	// (0x0007ab15) main_mup3_pane_t7

0xe86c,	// (0x00081fc4) main_mp4_pane_g6_ParamLimits

0xe86c,	// (0x00081fc4) main_mp4_pane_g6

0xea1e,	// (0x00082176) main_image3_pane_t4_ParamLimits

0xea1e,	// (0x00082176) main_image3_pane_t4

0xa1de,	// (0x0007d936) popup_navstr_preview_pane_ParamLimits

0xa1de,	// (0x0007d936) popup_navstr_preview_pane

0xa1ee,	// (0x0007d946) scroll_navstr_pane_ParamLimits

0xa1ee,	// (0x0007d946) scroll_navstr_pane

0xaf61,	// (0x0007e6b9) bg_popup_preview_window_pane_cp04

0xde0a,	// (0x00081562) popup_navstr_preview_pane_t1

0xa202,	// (0x0007d95a) scroll_navstr_pane_g1_ParamLimits

0xa202,	// (0x0007d95a) scroll_navstr_pane_g1

0xa216,	// (0x0007d96e) scroll_navstr_pane_t1_ParamLimits

0xa216,	// (0x0007d96e) scroll_navstr_pane_t1

0xddaf,	// (0x00081507) bg_button_pane_cp014

0xddaf,	// (0x00081507) bg_button_pane_cp030

0x11bf,	// (0x00074917) list_double_fisheye_pane_g4_ParamLimits

0x11bf,	// (0x00074917) list_double_fisheye_pane_g4

0x11cb,	// (0x00074923) list_double_fisheye_pane_g5_ParamLimits

0x11cb,	// (0x00074923) list_double_fisheye_pane_g5

0xdd24,	// (0x0008147c) sp_fs_scroll_pane_cp03

0xdaca,	// (0x00081222) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdad6,	// (0x0008122e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfca4,	// (0x000833fc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9fce,	// (0x0007d726) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdd1c,	// (0x00081474) sp_fs_scroll_pane_cp02

0x2783,	// (0x00075edb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2783,	// (0x00075edb) popup_sp_fs_calendar_preview_list_single_pane

0xaf61,	// (0x0007e6b9) main_cam6_pano_pane

0xafbc,	// (0x0007e714) main_mup3_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_phacti_pane

0x9a4c,	// (0x0007d1a4) bg_button_pane_cp11

0x9a64,	// (0x0007d1bc) main_mobtv_info_pane_g2_ParamLimits

0x9a64,	// (0x0007d1bc) main_mobtv_info_pane_g2

0x0001,

0xfc04,	// (0x0008335c) main_mobtv_info_pane_g_ParamLimits

0xfc04,	// (0x0008335c) main_mobtv_info_pane_g

0x9c19,	// (0x0007d371) sc_clock_pane_t5_ParamLimits

0x9c19,	// (0x0007d371) sc_clock_pane_t5

0x9cc4,	// (0x0007d41c) main_radioblah_pane_g1_ParamLimits

0xd903,	// (0x0008105b) main_radioblah_pane_t3_ParamLimits

0xd903,	// (0x0008105b) main_radioblah_pane_t3

0xd91b,	// (0x00081073) main_radioblah_pane_t4_ParamLimits

0xd91b,	// (0x00081073) main_radioblah_pane_t4

0x9cec,	// (0x0007d444) main_radioblah_text_pane_ParamLimits

0x9cec,	// (0x0007d444) main_radioblah_text_pane

0x9cfe,	// (0x0007d456) main_radioblah_info_pane_g1_ParamLimits

0x9d91,	// (0x0007d4e9) main_radioblah_info_pane_t4_ParamLimits

0x9d91,	// (0x0007d4e9) main_radioblah_info_pane_t4

0xafbc,	// (0x0007e714) main_sp_fs_calendar_pane

0xa22c,	// (0x0007d984) main_phacti_pane_g1

0xa234,	// (0x0007d98c) phacti_note_pane_ParamLimits

0xa234,	// (0x0007d98c) phacti_note_pane

0xde21,	// (0x00081579) phacti_term_pane_ParamLimits

0xde21,	// (0x00081579) phacti_term_pane

0xde36,	// (0x0008158e) phacti_note_pane_t1_ParamLimits

0xde36,	// (0x0008158e) phacti_note_pane_t1

0xde4d,	// (0x000815a5) phacti_term_pane_g1

0xde55,	// (0x000815ad) phacti_term_pane_t1_ParamLimits

0xde55,	// (0x000815ad) phacti_term_pane_t1

0xde7f,	// (0x000815d7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xde87,	// (0x000815df) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd7d,	// (0x000834d5) popup_sp_fs_calendar_preview_list_single_pane_g

0xde8f,	// (0x000815e7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde8f,	// (0x000815e7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdea5,	// (0x000815fd) aid_popup_sp_fs_bg_corner_pane

0xc2f9,	// (0x0007fa51) popup_sp_fs_calendar_preview_bg_pane_g1

0xaf61,	// (0x0007e6b9) popup_sp_fs_calendar_preview_bg_pane

0xdead,	// (0x00081605) popup_sp_fs_calendar_preview_list_pane

0xbde5,	// (0x0007f53d) bg_main_sp_fs_cale_pane_ParamLimits

0xbde5,	// (0x0007f53d) bg_main_sp_fs_cale_pane

0xdeb5,	// (0x0008160d) listscroll_cale_mrui_pane_ParamLimits

0xdeb5,	// (0x0008160d) listscroll_cale_mrui_pane

0xdeca,	// (0x00081622) listscroll_sp_fs_schedule_track_pane

0xded3,	// (0x0008162b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xded3,	// (0x0008162b) main_sp_fs_ctrlbar_pane_cp01

0xdee6,	// (0x0008163e) main_sp_fs_ribbon_pane

0xdeee,	// (0x00081646) popup_sp_fs_cale_preview_window

0xa297,	// (0x0007d9ef) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa297,	// (0x0007d9ef) list_single_sp_fs_schedule_track_pane

0xafbc,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xafbc,	// (0x0007e714) bg_sp_fs_highlight_list_pane_cp03

0xa2ab,	// (0x0007da03) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa2ab,	// (0x0007da03) list_single_sp_fs_schedule_track_pane_g1

0xa2b7,	// (0x0007da0f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa2b7,	// (0x0007da0f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd82,	// (0x000834da) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd82,	// (0x000834da) list_single_sp_fs_schedule_track_pane_g

0xa2c3,	// (0x0007da1b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa2c3,	// (0x0007da1b) list_single_sp_fs_schedule_track_pane_t1

0xa2dd,	// (0x0007da35) sp_fs_schedule_track_pane_ParamLimits

0xa2dd,	// (0x0007da35) sp_fs_schedule_track_pane

0xdf00,	// (0x00081658) sp_fs_schedule_track_pane_g1

0xdf08,	// (0x00081660) sp_fs_schedule_track_pane_g2

0xdf10,	// (0x00081668) sp_fs_schedule_track_pane_g3

0xdf18,	// (0x00081670) sp_fs_schedule_track_pane_g4

0xdf20,	// (0x00081678) sp_fs_schedule_track_pane_g5

0x0004,

0xfd87,	// (0x000834df) sp_fs_schedule_track_pane_g

0xcd47,	// (0x0008049f) bg_sp_fs_schedule_viewer_highlight_g1

0x37a5,	// (0x00076efd) bg_sp_fs_schedule_viewer_highlight_g2

0xcd4f,	// (0x000804a7) bg_sp_fs_schedule_viewer_highlight_g3

0xcd57,	// (0x000804af) bg_sp_fs_schedule_viewer_highlight_g4

0xee8e,	// (0x000825e6) bg_sp_fs_schedule_viewer_highlight_g5

0xcd67,	// (0x000804bf) bg_sp_fs_schedule_viewer_highlight_g6

0xcd6f,	// (0x000804c7) bg_sp_fs_schedule_viewer_highlight_g7

0xcd77,	// (0x000804cf) bg_sp_fs_schedule_viewer_highlight_g8

0x3785,	// (0x00076edd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd92,	// (0x000834ea) bg_sp_fs_schedule_viewer_highlight_g

0xaf61,	// (0x0007e6b9) bg_main_sp_fs_ribbon_pane

0xa2ee,	// (0x0007da46) main_sp_fs_ribbon_pane_g1

0xdf28,	// (0x00081680) main_sp_fs_ribbon_pane_t1

0xa2f7,	// (0x0007da4f) main_sp_fs_ribbon_pane_t2

0xdf37,	// (0x0008168f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfda5,	// (0x000834fd) main_sp_fs_ribbon_pane_t

0xdf46,	// (0x0008169e) main_sp_fs_ribbon_scheduler_pane

0xdf4e,	// (0x000816a6) bg_main_sp_fs_ribbon_pane_g1

0xdf57,	// (0x000816af) bg_main_sp_fs_ribbon_pane_g2

0xdf60,	// (0x000816b8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdac,	// (0x00083504) bg_main_sp_fs_ribbon_pane_g

0xdf68,	// (0x000816c0) main_sp_fs_ribbon_scheduler_pane_g1

0xdf71,	// (0x000816c9) main_sp_fs_ribbon_scheduler_pane_g2

0xdf7a,	// (0x000816d2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdb3,	// (0x0008350b) main_sp_fs_ribbon_scheduler_pane_g

0xdf83,	// (0x000816db) list_cale_mrui_pane

0xa306,	// (0x0007da5e) sp_fs_scroll_pane_cp07_ParamLimits

0xa306,	// (0x0007da5e) sp_fs_scroll_pane_cp07

0xa31e,	// (0x0007da76) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa31e,	// (0x0007da76) bg_sp_fs_schedule_viewer_highlight

0xdf90,	// (0x000816e8) list_single_sp_fs_schedule_track_pane_cp01

0xdf98,	// (0x000816f0) list_sp_fs_schedule_track_pane

0xdfa0,	// (0x000816f8) sp_fs_scroll_pane_cp06_ParamLimits

0xdfa0,	// (0x000816f8) sp_fs_scroll_pane_cp06

0xc2f9,	// (0x0007fa51) bgmain_sp_fs_calendar_pane_g1

0x16b0,	// (0x00074e08) list_single_cale_mrui_pane_ParamLimits

0x16b0,	// (0x00074e08) list_single_cale_mrui_pane

0xdfb2,	// (0x0008170a) list_single_cale_mrui_row_pane_ParamLimits

0xdfb2,	// (0x0008170a) list_single_cale_mrui_row_pane

0xdfc8,	// (0x00081720) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdfc8,	// (0x00081720) list_single_cale_mrui_row_pane_g1

0xe00d,	// (0x00081765) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe00d,	// (0x00081765) list_single_cale_mrui_row_pane_t1

0x16d0,	// (0x00074e28) list_single_cale_mrui_row_pane_t2_ParamLimits

0x16d0,	// (0x00074e28) list_single_cale_mrui_row_pane_t2

0xe01f,	// (0x00081777) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe01f,	// (0x00081777) list_single_cale_mrui_row_pane_t3

0xe04e,	// (0x000817a6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe04e,	// (0x000817a6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdc1,	// (0x00083519) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdc1,	// (0x00083519) list_single_cale_mrui_row_pane_t

0x1736,	// (0x00074e8e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1736,	// (0x00074e8e) list_single_cmail_header_editor_pane_bg_cp01

0x175a,	// (0x00074eb2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x175a,	// (0x00074eb2) list_single_cmail_header_editor_pane_bg_cp02

0xa32e,	// (0x0007da86) main_radioblah_text_pane_t1_ParamLimits

0xa32e,	// (0x0007da86) main_radioblah_text_pane_t1

0xe07d,	// (0x000817d5) cam6_indi_pane_cp01

0xe085,	// (0x000817dd) cam6_mode_pane_cp01

0xe08d,	// (0x000817e5) cam6_pano_pane

0xe096,	// (0x000817ee) cam6_zoom_pane_cp01

0xe09e,	// (0x000817f6) cam6_pano_image_pane

0xe0a7,	// (0x000817ff) cam6_pano_pane_g1

0xd66a,	// (0x00080dc2) cam6_pano_pane_g2

0xe0b0,	// (0x00081808) cam6_pano_pane_g3

0xe0b9,	// (0x00081811) cam6_pano_pane_g4

0xc8e6,	// (0x0008003e) cam6_pano_pane_g5

0xe0c2,	// (0x0008181a) cam6_pano_pane_g6

0xe0ca,	// (0x00081822) cam6_pano_pane_g7

0xe0d2,	// (0x0008182a) cam6_pano_pane_g8

0xe0db,	// (0x00081833) cam6_pano_pane_g9

0x0008,

0xfdca,	// (0x00083522) cam6_pano_pane_g

0xaf61,	// (0x0007e6b9) main_browser_tag_pane

0xde02,	// (0x0008155a) grid_navstr_albumart_pane

0xe0e4,	// (0x0008183c) cell_navstr_albumart_pane_ParamLimits

0xe0e4,	// (0x0008183c) cell_navstr_albumart_pane

0x52b5,	// (0x00078a0d) cell_navstr_albumart_pane_g1

0xbbb6,	// (0x0007f30e) cell_navstr_albumart_pane_g2

0xbbc6,	// (0x0007f31e) cell_navstr_albumart_pane_g3

0xbbbe,	// (0x0007f316) cell_navstr_albumart_pane_g4

0x0003,

0xfddd,	// (0x00083535) cell_navstr_albumart_pane_g

0xa347,	// (0x0007da9f) bt_list_pane_ParamLimits

0xa347,	// (0x0007da9f) bt_list_pane

0xa35a,	// (0x0007dab2) bt_list_pane_t1

0xa369,	// (0x0007dac1) bt_list_pane_t2

0x0001,

0xfde6,	// (0x0008353e) bt_list_pane_t

0xaf61,	// (0x0007e6b9) main_cale_prevew_pane

0xa378,	// (0x0007dad0) popup_cale_preview_window_ParamLimits

0xa378,	// (0x0007dad0) popup_cale_preview_window

0xafbc,	// (0x0007e714) bg_popup_preview_window_pane_cp05_ParamLimits

0xafbc,	// (0x0007e714) bg_popup_preview_window_pane_cp05

0xe0fb,	// (0x00081853) list_cale_preview_pane_ParamLimits

0xe0fb,	// (0x00081853) list_cale_preview_pane

0xa38d,	// (0x0007dae5) list_double_cale_preview_pane_ParamLimits

0xa38d,	// (0x0007dae5) list_double_cale_preview_pane

0xa39e,	// (0x0007daf6) list_single_cale_preview_pane_ParamLimits

0xa39e,	// (0x0007daf6) list_single_cale_preview_pane

0xe107,	// (0x0008185f) list_single_cale_preview_pane_g1

0xe10f,	// (0x00081867) list_single_cale_preview_pane_t1_ParamLimits

0xe10f,	// (0x00081867) list_single_cale_preview_pane_t1

0xa3b2,	// (0x0007db0a) list_double_cale_preview_pane_g1

0xa3ba,	// (0x0007db12) list_double_cale_preview_pane_t1_ParamLimits

0xa3ba,	// (0x0007db12) list_double_cale_preview_pane_t1

0xa3cf,	// (0x0007db27) list_double_cale_preview_pane_t2_ParamLimits

0xa3cf,	// (0x0007db27) list_double_cale_preview_pane_t2

0x0001,

0xfdeb,	// (0x00083543) list_double_cale_preview_pane_t_ParamLimits

0xfdeb,	// (0x00083543) list_double_cale_preview_pane_t

0xaf61,	// (0x0007e6b9) main_ezdial_pane

0xafbc,	// (0x0007e714) main_sp_fs_email_pane_ParamLimits

0x9f44,	// (0x0007d69c) cmail_ddmenu_btn01_pane_ParamLimits

0x9f44,	// (0x0007d69c) cmail_ddmenu_btn01_pane

0x9f57,	// (0x0007d6af) cmail_ddmenu_btn02_pane_ParamLimits

0x9f57,	// (0x0007d6af) cmail_ddmenu_btn02_pane

0x9f7a,	// (0x0007d6d2) cmail_ddmenu_btn03_pane_ParamLimits

0x9f7a,	// (0x0007d6d2) cmail_ddmenu_btn03_pane

0xa017,	// (0x0007d76f) main_sp_fs_ctrlbar_pane_ParamLimits

0xa038,	// (0x0007d790) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa151,	// (0x0007d8a9) list_cmail_body_pane_ParamLimits

0xdd3e,	// (0x00081496) bg_button_pane_cp12

0xdd47,	// (0x0008149f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdd47,	// (0x0008149f) list_single_cmail_header_detail_pane_g3

0xdd54,	// (0x000814ac) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd54,	// (0x000814ac) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd6e,	// (0x000834c6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd6e,	// (0x000834c6) list_single_cmail_header_detail_pane_t

0xde6a,	// (0x000815c2) phacti_term_pane_t2_ParamLimits

0xde6a,	// (0x000815c2) phacti_term_pane_t2

0x0001,

0xfd78,	// (0x000834d0) phacti_term_pane_t_ParamLimits

0xfd78,	// (0x000834d0) phacti_term_pane_t

0xe124,	// (0x0008187c) aid_size_list_single_double

0xa3e7,	// (0x0007db3f) popup_ezdial_listscroll_window

0xa3fd,	// (0x0007db55) popup_number_entry_window_cp01

0x2e5d,	// (0x000765b5) bg_popup_call_pane_cp09

0xe130,	// (0x00081888) ezdial_list_pane

0xe138,	// (0x00081890) scroll_pane_cp23

0xbde5,	// (0x0007f53d) bg_button_pane_cp028_ParamLimits

0xbde5,	// (0x0007f53d) bg_button_pane_cp028

0xa409,	// (0x0007db61) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa409,	// (0x0007db61) cmail_ddmenu_btn01_pane_g1

0xa415,	// (0x0007db6d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa415,	// (0x0007db6d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdf0,	// (0x00083548) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdf0,	// (0x00083548) cmail_ddmenu_btn01_pane_g

0xe140,	// (0x00081898) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe140,	// (0x00081898) cmail_ddmenu_btn01_pane_t1

0xbde5,	// (0x0007f53d) bg_button_pane_cp029_ParamLimits

0xbde5,	// (0x0007f53d) bg_button_pane_cp029

0xa421,	// (0x0007db79) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa421,	// (0x0007db79) cmail_ddmenu_btn02_pane_g1

0xa439,	// (0x0007db91) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa439,	// (0x0007db91) cmail_ddmenu_btn02_pane_t1

0xafbc,	// (0x0007e714) bg_button_pane_cp031_ParamLimits

0xafbc,	// (0x0007e714) bg_button_pane_cp031

0xa421,	// (0x0007db79) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa421,	// (0x0007db79) cmail_ddmenu_btn03_pane_g1

0xa439,	// (0x0007db91) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa439,	// (0x0007db91) cmail_ddmenu_btn03_pane_t1

0x7eb0,	// (0x0007b608) cell_dialer2_keypad_pane_t1_ParamLimits

0x7eca,	// (0x0007b622) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7eca,	// (0x0007b622) cell_dialer2_keypad_pane_t1_copy1

0x98b8,	// (0x0007d010) ncimui_group_button_pane

0xafbc,	// (0x0007e714) main_sp_fs_calendar_pane_ParamLimits

0xa151,	// (0x0007d8a9) list_single_cmail_header_caption_pane_ParamLimits

0xeca4,	// (0x000823fc) aid_recal_txt_sm_pane

0xaf61,	// (0x0007e6b9) mian_recal_day_pane

0xdeee,	// (0x00081646) popup_sp_fs_cale_preview_window_ParamLimits

0xe155,	// (0x000818ad) list_recal_day_pane

0xe197,	// (0x000818ef) list_single_recal_day_pane_ParamLimits

0xe197,	// (0x000818ef) list_single_recal_day_pane

0xe1a9,	// (0x00081901) list_single_recal_day_pane_g1_ParamLimits

0xe1a9,	// (0x00081901) list_single_recal_day_pane_g1

0xe1b5,	// (0x0008190d) list_single_recal_day_pane_g2_ParamLimits

0xe1b5,	// (0x0008190d) list_single_recal_day_pane_g2

0xe1c1,	// (0x00081919) list_single_recal_day_pane_g3_ParamLimits

0xe1c1,	// (0x00081919) list_single_recal_day_pane_g3

0x1778,	// (0x00074ed0) list_single_recal_day_pane_g4_ParamLimits

0x1778,	// (0x00074ed0) list_single_recal_day_pane_g4

0xe1cd,	// (0x00081925) list_single_recal_day_pane_g5_ParamLimits

0xe1cd,	// (0x00081925) list_single_recal_day_pane_g5

0x1790,	// (0x00074ee8) list_single_recal_day_pane_g6_ParamLimits

0x1790,	// (0x00074ee8) list_single_recal_day_pane_g6

0x0004,

0xfdff,	// (0x00083557) list_single_recal_day_pane_g_ParamLimits

0xfdff,	// (0x00083557) list_single_recal_day_pane_g

0xe1e1,	// (0x00081939) list_single_recal_day_pane_t1

0x179c,	// (0x00074ef4) list_single_recal_day_pane_t2

0x0001,

0xfe0a,	// (0x00083562) list_single_recal_day_pane_t

0xa45d,	// (0x0007dbb5) ncimui_query_button_pane_ParamLimits

0xa45d,	// (0x0007dbb5) ncimui_query_button_pane

0xa46d,	// (0x0007dbc5) ncimui_query_button_pane_t1_ParamLimits

0xa46d,	// (0x0007dbc5) ncimui_query_button_pane_t1

0xe1f3,	// (0x0008194b) ncimui_query_button_pane_t2_ParamLimits

0xe1f3,	// (0x0008194b) ncimui_query_button_pane_t2

0x0001,

0xfe0f,	// (0x00083567) ncimui_query_button_pane_t_ParamLimits

0xfe0f,	// (0x00083567) ncimui_query_button_pane_t

0xa480,	// (0x0007dbd8) query_button_pane_ParamLimits

0xa480,	// (0x0007dbd8) query_button_pane

0xaf61,	// (0x0007e6b9) bg_button_pane_cp0028

0xe206,	// (0x0008195e) query_button_pane_t1

0x61bc,	// (0x00079914) main_tport_pane_ParamLimits

0xa064,	// (0x0007d7bc) bg_popup_window_pane_cp01_ParamLimits

0xa064,	// (0x0007d7bc) bg_popup_window_pane_cp01

0xa07b,	// (0x0007d7d3) heading_pane_cp08_ParamLimits

0xa07b,	// (0x0007d7d3) heading_pane_cp08

0xa08c,	// (0x0007d7e4) heading_pane_cp07_ParamLimits

0xa08c,	// (0x0007d7e4) heading_pane_cp07

0xdcee,	// (0x00081446) cell_tport_appsw_pane_g2

0x0002,

0xfd5b,	// (0x000834b3) cell_tport_appsw_pane_g

0xb165,	// (0x0007e8bd) input_candi_list_open_g1

0x4434,	// (0x00077b8c) list_cale_time_pane_g6_ParamLimits

0x4434,	// (0x00077b8c) list_cale_time_pane_g6

0x6e4e,	// (0x0007a5a6) aid_size_touch_calib_1_ParamLimits

0x6e4e,	// (0x0007a5a6) aid_size_touch_calib_1

0x6e60,	// (0x0007a5b8) aid_size_touch_calib_2_ParamLimits

0x6e60,	// (0x0007a5b8) aid_size_touch_calib_2

0x6e76,	// (0x0007a5ce) aid_size_touch_calib_3_ParamLimits

0x6e76,	// (0x0007a5ce) aid_size_touch_calib_3

0x6e8e,	// (0x0007a5e6) aid_size_touch_calib_4_ParamLimits

0x6e8e,	// (0x0007a5e6) aid_size_touch_calib_4

0x6ea2,	// (0x0007a5fa) main_touch_calib_button_group_pane_ParamLimits

0x6ea2,	// (0x0007a5fa) main_touch_calib_button_group_pane

0x6eba,	// (0x0007a612) main_touch_calib_pane_g1_ParamLimits

0x6ecc,	// (0x0007a624) main_touch_calib_pane_g2_ParamLimits

0x6ede,	// (0x0007a636) main_touch_calib_pane_g3_ParamLimits

0x6ef0,	// (0x0007a648) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x00082ea1) main_touch_calib_pane_g_ParamLimits

0x6f02,	// (0x0007a65a) main_touch_calib_pane_t1_ParamLimits

0x6f1a,	// (0x0007a672) main_touch_calib_pane_t2_ParamLimits

0x6f32,	// (0x0007a68a) main_touch_calib_pane_t3_ParamLimits

0x6f44,	// (0x0007a69c) main_touch_calib_pane_t4_ParamLimits

0x6f56,	// (0x0007a6ae) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x00082eaa) main_touch_calib_pane_t_ParamLimits

0xc69c,	// (0x0007fdf4) list_single_fp_cale_pane_g3_ParamLimits

0xc69c,	// (0x0007fdf4) list_single_fp_cale_pane_g3

0xafbc,	// (0x0007e714) bg_button_pane_cp012_ParamLimits

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp03_ParamLimits

0x8ce2,	// (0x0007c43a) cell_vitu2_function_top_pane_g1_ParamLimits

0xafbc,	// (0x0007e714) bg_vkb2_func_pane_cp04_ParamLimits

0x9848,	// (0x0007cfa0) main_ncimui_button_group_pane_ParamLimits

0x9848,	// (0x0007cfa0) main_ncimui_button_group_pane

0x98a6,	// (0x0007cffe) main_ncimui_pane_t3_ParamLimits

0x98a6,	// (0x0007cffe) main_ncimui_pane_t3

0xde18,	// (0x00081570) phacti_button_group_pane

0xe124,	// (0x0008187c) aid_size_list_single_double_ParamLimits

0xa3e7,	// (0x0007db3f) popup_ezdial_listscroll_window_ParamLimits

0xa3fd,	// (0x0007db55) popup_number_entry_window_cp01_ParamLimits

0xa492,	// (0x0007dbea) phacti_button_pane_ParamLimits

0xa492,	// (0x0007dbea) phacti_button_pane

0xaf61,	// (0x0007e6b9) bg_button_pane_cp14

0xe214,	// (0x0008196c) phacti_button_pane_t1

0xa4a1,	// (0x0007dbf9) main_touch_calib_button_pane_ParamLimits

0xa4a1,	// (0x0007dbf9) main_touch_calib_button_pane

0x24ef,	// (0x00075c47) bg_button_pane_cp18_ParamLimits

0x24ef,	// (0x00075c47) bg_button_pane_cp18

0xa4bc,	// (0x0007dc14) main_touch_calib_button_pane_t1_ParamLimits

0xa4bc,	// (0x0007dc14) main_touch_calib_button_pane_t1

0xa4d2,	// (0x0007dc2a) main_touch_calib_button_pane_t2_ParamLimits

0xa4d2,	// (0x0007dc2a) main_touch_calib_button_pane_t2

0x0001,

0xfe14,	// (0x0008356c) main_touch_calib_button_pane_t_ParamLimits

0xfe14,	// (0x0008356c) main_touch_calib_button_pane_t

0xaf61,	// (0x0007e6b9) cell_ncimui_button_pane

0xaf61,	// (0x0007e6b9) bg_button_pane_cp032

0xe222,	// (0x0008197a) cell_ncimui_button_pane_t1

0xe9fe,	// (0x00082156) image3_infobar_pane_ParamLimits

0xe9fe,	// (0x00082156) image3_infobar_pane

0x9c41,	// (0x0007d399) fs_bigclock_status_pane_ParamLimits

0x9c41,	// (0x0007d399) fs_bigclock_status_pane

0x9c4e,	// (0x0007d3a6) main_fs_bigclock_clock_pane_ParamLimits

0x9c4e,	// (0x0007d3a6) main_fs_bigclock_clock_pane

0x9c70,	// (0x0007d3c8) main_fs_bigclock_indi_pane_ParamLimits

0x9c70,	// (0x0007d3c8) main_fs_bigclock_indi_pane

0x9c9a,	// (0x0007d3f2) main_fs_bigclock_swipe_pane_ParamLimits

0x9c9a,	// (0x0007d3f2) main_fs_bigclock_swipe_pane

0xaf61,	// (0x0007e6b9) main_fs_clock_dumped_data

0xd777,	// (0x00080ecf) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd777,	// (0x00080ecf) list_single_fs_bigclock_indicator_pane_g1

0xd791,	// (0x00080ee9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd791,	// (0x00080ee9) list_single_fs_bigclock_indicator_pane_g2

0xd7ab,	// (0x00080f03) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd7ab,	// (0x00080f03) list_single_fs_bigclock_indicator_pane_g3

0xd7c5,	// (0x00080f1d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd7c5,	// (0x00080f1d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc38,	// (0x00083390) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc38,	// (0x00083390) list_single_fs_bigclock_indicator_pane_g

0xd7ee,	// (0x00080f46) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7ee,	// (0x00080f46) list_single_fs_bigclock_indicator_pane_t1

0xd816,	// (0x00080f6e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd816,	// (0x00080f6e) list_single_fs_bigclock_indicator_pane_t2

0xd83e,	// (0x00080f96) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd83e,	// (0x00080f96) list_single_fs_bigclock_indicator_pane_t3

0xd866,	// (0x00080fbe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd866,	// (0x00080fbe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc43,	// (0x0008339b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc43,	// (0x0008339b) list_single_fs_bigclock_indicator_pane_t

0xe230,	// (0x00081988) image3_infobar_fav_pane_ParamLimits

0xe230,	// (0x00081988) image3_infobar_fav_pane

0xe240,	// (0x00081998) image3_infobar_loc_pane_ParamLimits

0xe240,	// (0x00081998) image3_infobar_loc_pane

0xe254,	// (0x000819ac) image3_infobar_time_pane_ParamLimits

0xe254,	// (0x000819ac) image3_infobar_time_pane

0xc2f9,	// (0x0007fa51) image3_infobar_time_pane_g1

0xe264,	// (0x000819bc) image3_infobar_time_pane_t1

0xc2f9,	// (0x0007fa51) image3_infobar_loc_pane_g1

0xe272,	// (0x000819ca) image3_infobar_loc_pane_g2

0x0001,

0xfe19,	// (0x00083571) image3_infobar_loc_pane_g

0xe27a,	// (0x000819d2) image3_infobar_loc_pane_t1

0xc2f9,	// (0x0007fa51) image3_infobar_fav_pane_g1

0xe288,	// (0x000819e0) image3_infobar_fav_pane_g2

0x0001,

0xfe1e,	// (0x00083576) image3_infobar_fav_pane_g

0xe290,	// (0x000819e8) fs_bigclock_status_battery_pane

0xe299,	// (0x000819f1) fs_bigclock_status_signal_pane

0xe2a2,	// (0x000819fa) fs_bigclock_status_title_pane

0xe2ab,	// (0x00081a03) fs_bigclock_status_signal_pane_g1

0xe2b4,	// (0x00081a0c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe23,	// (0x0008357b) fs_bigclock_status_signal_pane_g

0xe2bc,	// (0x00081a14) fs_bigclock_status_battery_pane_g1

0xe2c5,	// (0x00081a1d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe28,	// (0x00083580) fs_bigclock_status_battery_pane_g

0xe2cd,	// (0x00081a25) fs_bigclock_status_title_pane_t1

0xa4f0,	// (0x0007dc48) main_fs_bigclock_clock_pane_g1

0xa502,	// (0x0007dc5a) main_fs_bigclock_clock_pane_g2

0xa513,	// (0x0007dc6b) main_fs_bigclock_clock_pane_g3

0xa513,	// (0x0007dc6b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2d,	// (0x00083585) main_fs_bigclock_clock_pane_g

0xa526,	// (0x0007dc7e) main_fs_bigclock_clock_pane_t1

0xa541,	// (0x0007dc99) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe36,	// (0x0008358e) main_fs_bigclock_clock_pane_t

0xe2db,	// (0x00081a33) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe2db,	// (0x00081a33) list_single_fs_bigclock_indicator_pane

0xe2ec,	// (0x00081a44) list_single_fs_bigclock_pane_ParamLimits

0xe2ec,	// (0x00081a44) list_single_fs_bigclock_pane

0xe312,	// (0x00081a6a) main_fs_bigclock_indicator_pane_t1

0xe321,	// (0x00081a79) list_single_fs_bigclock_pane_g1

0xe329,	// (0x00081a81) list_single_fs_bigclock_pane_t1

0xc2f9,	// (0x0007fa51) main_fs_bigclock_swipe_pane_g1

0xe369,	// (0x00081ac1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe47,	// (0x0008359f) main_fs_bigclock_swipe_pane_g

0xe371,	// (0x00081ac9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe371,	// (0x00081ac9) main_fs_bigclock_swipe_pane_t1

0x4720,	// (0x00077e78) call_type_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_btmg_pane

0xdff4,	// (0x0008174c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdff4,	// (0x0008174c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdba,	// (0x00083512) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdba,	// (0x00083512) list_single_cale_mrui_row_pane_g

0xe17e,	// (0x000818d6) list_recal_vselct_arw_lo_pane

0xe186,	// (0x000818de) list_recal_vselct_arw_up_pane

0xe18e,	// (0x000818e6) list_recal_vselct_pane

0xe38e,	// (0x00081ae6) btmg_button_pane

0xa5a1,	// (0x0007dcf9) main_btmg_pane_g1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp044

0xe396,	// (0x00081aee) btmg_button_pane_t1

0xbdd1,	// (0x0007f529) aid_listscroll_gen

0xafbc,	// (0x0007e714) main_cntbar_detail_pane

0xdd14,	// (0x0008146c) list_cmail_folder_pane

0xdd24,	// (0x0008147c) sp_fs_scroll_pane_cp03_ParamLimits

0x17ae,	// (0x00074f06) list_single_fs_dyc_pane_cp01_ParamLimits

0x17ae,	// (0x00074f06) list_single_fs_dyc_pane_cp01

0xe3a4,	// (0x00081afc) aid_size_cmail_indent

0xe3ad,	// (0x00081b05) list_single_dyc_row_pane_cp01

0xa5d1,	// (0x0007dd29) cntbar_detail_list_pane_ParamLimits

0xa5d1,	// (0x0007dd29) cntbar_detail_list_pane

0xa617,	// (0x0007dd6f) main_cntbar_detail_cont_pane_ParamLimits

0xa617,	// (0x0007dd6f) main_cntbar_detail_cont_pane

0xa62b,	// (0x0007dd83) scroll_pane_cp032_ParamLimits

0xa62b,	// (0x0007dd83) scroll_pane_cp032

0xa637,	// (0x0007dd8f) cntbar_detail_list_event_pane_ParamLimits

0xa637,	// (0x0007dd8f) cntbar_detail_list_event_pane

0xa5e1,	// (0x0007dd39) cntbar_detail_list_shct_pane

0xe3b6,	// (0x00081b0e) aid_list_gen

0x2732,	// (0x00075e8a) aid_scroll

0xcec4,	// (0x0008061c) aid_size_touch_scroll_bar

0xec59,	// (0x000823b1) aid_list_double

0xcede,	// (0x00080636) aid_list_single

0xcede,	// (0x00080636) aid_list_single_lg

0xe3bf,	// (0x00081b17) aid_list_z_g_a_sm

0xe79b,	// (0x00081ef3) aid_list_z_g_d

0xe3c7,	// (0x00081b1f) aid_txt_z_prm

0x17c4,	// (0x00074f1c) aid_txt_z_prm_cp01

0x17d2,	// (0x00074f2a) aid_txt_z_sec

0xa648,	// (0x0007dda0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa648,	// (0x0007dda0) main_cntbar_detail_cont_pane_g1

0xa65c,	// (0x0007ddb4) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa65c,	// (0x0007ddb4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe4c,	// (0x000835a4) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe4c,	// (0x000835a4) main_cntbar_detail_cont_pane_g

0xe3d5,	// (0x00081b2d) main_cntbar_detail_cont_pane_t1

0xe3e3,	// (0x00081b3b) main_cntbar_detail_cont_pane_t2

0xe3f1,	// (0x00081b49) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe51,	// (0x000835a9) main_cntbar_detail_cont_pane_t

0xa66c,	// (0x0007ddc4) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa66c,	// (0x0007ddc4) cell_cntbar_detail_list_shct_pane

0xe3ff,	// (0x00081b57) cntbar_detail_list_shct_pane_g1

0xe408,	// (0x00081b60) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe58,	// (0x000835b0) cntbar_detail_list_shct_pane_g

0xa67e,	// (0x0007ddd6) cntbar_detail_list_event_pane_g1_ParamLimits

0xa67e,	// (0x0007ddd6) cntbar_detail_list_event_pane_g1

0xa68a,	// (0x0007dde2) cntbar_detail_list_event_pane_g2_ParamLimits

0xa68a,	// (0x0007dde2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe5d,	// (0x000835b5) cntbar_detail_list_event_pane_g_ParamLimits

0xfe5d,	// (0x000835b5) cntbar_detail_list_event_pane_g

0xa6f6,	// (0x0007de4e) cntbar_detail_list_event_pane_t1_ParamLimits

0xa6f6,	// (0x0007de4e) cntbar_detail_list_event_pane_t1

0xa70b,	// (0x0007de63) cntbar_detail_list_event_pane_t2_ParamLimits

0xa70b,	// (0x0007de63) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6a,	// (0x000835c2) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6a,	// (0x000835c2) cntbar_detail_list_event_pane_t

0xc2f9,	// (0x0007fa51) cell_cntbar_detail_list_shct_pane_g1

0x4d1e,	// (0x00078476) navi_pane_mv_g3

0xafbc,	// (0x0007e714) main_cntbar_detail_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_notif_wgt_pane

0xe7fa,	// (0x00081f52) aid_tch_main_mp4_pane_g4

0xe9f6,	// (0x0008214e) popup_slider_window_cp02

0xe174,	// (0x000818cc) list_recal_day_event_pane

0xa5a9,	// (0x0007dd01) cntbar_detail_btn_pane_ParamLimits

0xa5a9,	// (0x0007dd01) cntbar_detail_btn_pane

0xa5bc,	// (0x0007dd14) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5bc,	// (0x0007dd14) cntbar_detail_btn_pane_cp01

0xa5e1,	// (0x0007dd39) cntbar_detail_list_shct_pane_ParamLimits

0xa5f1,	// (0x0007dd49) cntbar_detail_pane_g1_ParamLimits

0xa5f1,	// (0x0007dd49) cntbar_detail_pane_g1

0xa601,	// (0x0007dd59) cntbar_detail_pane_t1_ParamLimits

0xa601,	// (0x0007dd59) cntbar_detail_pane_t1

0xa696,	// (0x0007ddee) cntbar_detail_list_event_pane_g3_ParamLimits

0xa696,	// (0x0007ddee) cntbar_detail_list_event_pane_g3

0xa6ae,	// (0x0007de06) cntbar_detail_list_event_pane_g4_ParamLimits

0xa6ae,	// (0x0007de06) cntbar_detail_list_event_pane_g4

0xa6c6,	// (0x0007de1e) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6c6,	// (0x0007de1e) cntbar_detail_list_event_pane_g5

0xa6de,	// (0x0007de36) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6de,	// (0x0007de36) cntbar_detail_list_event_pane_g6

0xa720,	// (0x0007de78) cntbar_detail_list_event_pane_t3_ParamLimits

0xa720,	// (0x0007de78) cntbar_detail_list_event_pane_t3

0xa732,	// (0x0007de8a) popup_notif_wgt_window_ParamLimits

0xa732,	// (0x0007de8a) popup_notif_wgt_window

0xa747,	// (0x0007de9f) popup_submenu_window_cp01_ParamLimits

0xa747,	// (0x0007de9f) popup_submenu_window_cp01

0x2e5d,	// (0x000765b5) bg_popup_window_pane_cp10

0xe411,	// (0x00081b69) listscroll_notif_wgt_pane

0xe422,	// (0x00081b7a) list_notif_wgt_window

0xe42b,	// (0x00081b83) scroll_pane_cp033

0xa757,	// (0x0007deaf) list_notif_wgt_row_pane_ParamLimits

0xa757,	// (0x0007deaf) list_notif_wgt_row_pane

0xe434,	// (0x00081b8c) aid_size_list_notif_wgt_del

0xe441,	// (0x00081b99) list_notif_wgt_row_pane_g1

0xe44d,	// (0x00081ba5) list_notif_wgt_row_pane_g2

0xe461,	// (0x00081bb9) list_notif_wgt_row_pane_g3

0x0002,

0xfe71,	// (0x000835c9) list_notif_wgt_row_pane_g

0xe46e,	// (0x00081bc6) list_notif_wgt_row_pane_t1

0xe484,	// (0x00081bdc) list_notif_wgt_row_pane_t2

0xe496,	// (0x00081bee) list_notif_wgt_row_pane_t3

0x0002,

0xfe78,	// (0x000835d0) list_notif_wgt_row_pane_t

0xee96,	// (0x000825ee) list_recal_day_event_pane_g1

0xe4a8,	// (0x00081c00) list_recal_day_event_pane_t1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp045

0xa767,	// (0x0007debf) cntbar_detail_btn_pane_t1

0xbde5,	// (0x0007f53d) main_callh_pane_ParamLimits

0xbde5,	// (0x0007f53d) main_callh_pane

0xaf61,	// (0x0007e6b9) main_coverflow0_pane

0xaf61,	// (0x0007e6b9) main_wgtman_pane

0x9cae,	// (0x0007d406) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cae,	// (0x0007d406) main_fs_bigclock_unlock_btn_pane

0xdce6,	// (0x0008143e) bg_button_pane_cp16

0xdcf6,	// (0x0008144e) cell_tport_appsw_pane_g3

0xa775,	// (0x0007decd) cf0_flow_pane_ParamLimits

0xa775,	// (0x0007decd) cf0_flow_pane

0xe4b7,	// (0x00081c0f) listscroll_cf0_pane

0xe4c0,	// (0x00081c18) main_cf0_pane_g1

0xa78a,	// (0x0007dee2) main_cf0_pane_t1_ParamLimits

0xa78a,	// (0x0007dee2) main_cf0_pane_t1

0xa79f,	// (0x0007def7) main_cf0_pane_t2_ParamLimits

0xa79f,	// (0x0007def7) main_cf0_pane_t2

0x0001,

0xfe84,	// (0x000835dc) main_cf0_pane_t_ParamLimits

0xfe84,	// (0x000835dc) main_cf0_pane_t

0xe4d2,	// (0x00081c2a) scroll_pane_cp11

0xa7b4,	// (0x0007df0c) cf0_flow_pane_g1

0xa7bc,	// (0x0007df14) cf0_flow_pane_g2

0x0001,

0xfe89,	// (0x000835e1) cf0_flow_pane_g

0xa7c4,	// (0x0007df1c) cf0_flow_pane_t1

0xaf61,	// (0x0007e6b9) main_call6_pane

0xaf61,	// (0x0007e6b9) main_calllock_pane

0xa7d2,	// (0x0007df2a) call6_btn_grp_pane_ParamLimits

0xa7d2,	// (0x0007df2a) call6_btn_grp_pane

0xa7e8,	// (0x0007df40) call6_pane_g1_ParamLimits

0xa7e8,	// (0x0007df40) call6_pane_g1

0xa7fb,	// (0x0007df53) popup_call6_1st_window_ParamLimits

0xa7fb,	// (0x0007df53) popup_call6_1st_window

0xa80a,	// (0x0007df62) popup_call6_2nd_window_ParamLimits

0xa80a,	// (0x0007df62) popup_call6_2nd_window

0xa819,	// (0x0007df71) cell_call6_btn_pane_ParamLimits

0xa819,	// (0x0007df71) cell_call6_btn_pane

0x2e5d,	// (0x000765b5) bg_popup_call2_in_pane_cp03

0xe4db,	// (0x00081c33) popup_call6_1st_window_g1

0xe4e3,	// (0x00081c3b) popup_call6_1st_window_g2

0xe4eb,	// (0x00081c43) popup_call6_1st_window_g3

0x0002,

0xfe8e,	// (0x000835e6) popup_call6_1st_window_g

0xe4f3,	// (0x00081c4b) popup_call6_1st_window_t1

0xe502,	// (0x00081c5a) popup_call6_1st_window_t2

0xe510,	// (0x00081c68) popup_call6_1st_window_t3

0x0002,

0xfe95,	// (0x000835ed) popup_call6_1st_window_t

0x2e5d,	// (0x000765b5) bg_popup_call2_in_pane_cp04

0xe4db,	// (0x00081c33) popup_call6_2nd_window_g1

0xe4e3,	// (0x00081c3b) popup_call6_2nd_window_g2

0xe4eb,	// (0x00081c43) popup_call6_2nd_window_g3

0x0002,

0xfe8e,	// (0x000835e6) popup_call6_2nd_window_g

0xe4f3,	// (0x00081c4b) popup_call6_2nd_window_t1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp15

0xecad,	// (0x00082405) cell_call6_btn_pane_g1

0xecb6,	// (0x0008240e) cell_call6_btn_pane_t1

0xa82d,	// (0x0007df85) listscroll_wgtman_pane_ParamLimits

0xa82d,	// (0x0007df85) listscroll_wgtman_pane

0xa84e,	// (0x0007dfa6) wgtman_btn_pane_ParamLimits

0xa84e,	// (0x0007dfa6) wgtman_btn_pane

0x4966,	// (0x000780be) aid_scroll_copy1

0xe51e,	// (0x00081c76) list_wgtman_pane

0xa88e,	// (0x0007dfe6) wgtman_btn_pane_g1_ParamLimits

0xa88e,	// (0x0007dfe6) wgtman_btn_pane_g1

0xa8ba,	// (0x0007e012) wgtman_btn_pane_t1_ParamLimits

0xa8ba,	// (0x0007e012) wgtman_btn_pane_t1

0xe528,	// (0x00081c80) wgtman_btn_pane_t2_ParamLimits

0xe528,	// (0x00081c80) wgtman_btn_pane_t2

0x0001,

0xfe9c,	// (0x000835f4) wgtman_btn_pane_t_ParamLimits

0xfe9c,	// (0x000835f4) wgtman_btn_pane_t

0xa8f7,	// (0x0007e04f) listrow_wgtman_pane_ParamLimits

0xa8f7,	// (0x0007e04f) listrow_wgtman_pane

0xa908,	// (0x0007e060) listrow_wgtman_pane_g1

0xa915,	// (0x0007e06d) listrow_wgtman_pane_g2

0x0001,

0xfea1,	// (0x000835f9) listrow_wgtman_pane_g

0x17e0,	// (0x00074f38) listrow_wgtman_pane_t1

0x17f8,	// (0x00074f50) listrow_wgtman_pane_t2

0x0001,

0xfea6,	// (0x000835fe) listrow_wgtman_pane_t

0x181e,	// (0x00074f76) wait_bar_pane_cp09

0xe53f,	// (0x00081c97) main_calllock_btn_pane

0xe547,	// (0x00081c9f) main_calllock_pane_g1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp17

0xe550,	// (0x00081ca8) main_calllock_btn_pane_g1

0xe559,	// (0x00081cb1) main_calllock_btn_pane_t1

0xaf61,	// (0x0007e6b9) main_dialer3_pane

0xaf61,	// (0x0007e6b9) main_fmrd2_pane

0xc2f9,	// (0x0007fa51) main_fs_bigclock_unlock_btn_pane_g1

0xe570,	// (0x00081cc8) main_fs_bigclock_unlock_btn_pane_t1

0xa92d,	// (0x0007e085) area_fmrd2_info_pane_ParamLimits

0xa92d,	// (0x0007e085) area_fmrd2_info_pane

0xa93c,	// (0x0007e094) area_fmrd2_visual_pane_ParamLimits

0xa93c,	// (0x0007e094) area_fmrd2_visual_pane

0xa94a,	// (0x0007e0a2) fmrd2_indi_pane_ParamLimits

0xa94a,	// (0x0007e0a2) fmrd2_indi_pane

0xa957,	// (0x0007e0af) area_fmrd2_visual_pane_g1

0xa95f,	// (0x0007e0b7) area_fmrd2_visual_pane_t1

0xa96d,	// (0x0007e0c5) area_fmrd2_visual_pane_t2

0xa97b,	// (0x0007e0d3) area_fmrd2_visual_pane_t3

0x0002,

0xfeb0,	// (0x00083608) area_fmrd2_visual_pane_t

0xa989,	// (0x0007e0e1) area_fmrd2_info_pane_g1

0xa991,	// (0x0007e0e9) area_fmrd2_info_pane_t1

0xa99f,	// (0x0007e0f7) area_fmrd2_info_pane_t2

0xa9ad,	// (0x0007e105) area_fmrd2_info_pane_t3

0xa9bb,	// (0x0007e113) area_fmrd2_info_pane_t4

0x0003,

0xfeb7,	// (0x0008360f) area_fmrd2_info_pane_t

0xa9c9,	// (0x0007e121) fmrd2_indi_pane_t1

0xa9d7,	// (0x0007e12f) fmrd2_indi_pane_t2

0xa9e5,	// (0x0007e13d) fmrd2_indi_pane_t3

0x0002,

0xfec0,	// (0x00083618) fmrd2_indi_pane_t

0xd7d4,	// (0x00080f2c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd7d4,	// (0x00080f2c) list_single_fs_bigclock_indicator_pane_g5

0xd882,	// (0x00080fda) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd882,	// (0x00080fda) list_single_fs_bigclock_indicator_pane_t5

0xa248,	// (0x0007d9a0) aid_cell_bcale_month_pane_ParamLimits

0xa248,	// (0x0007d9a0) aid_cell_bcale_month_pane

0xa266,	// (0x0007d9be) bcale_month_pane_ParamLimits

0xa266,	// (0x0007d9be) bcale_month_pane

0xa27e,	// (0x0007d9d6) bcale_preview_pane_ParamLimits

0xa27e,	// (0x0007d9d6) bcale_preview_pane

0xe329,	// (0x00081a81) list_single_fs_bigclock_pane_t1_ParamLimits

0xe345,	// (0x00081a9d) list_single_fs_bigclock_pane_t2_ParamLimits

0xe345,	// (0x00081a9d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe42,	// (0x0008359a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe42,	// (0x0008359a) list_single_fs_bigclock_pane_t

0xe568,	// (0x00081cc0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeab,	// (0x00083603) main_fs_bigclock_unlock_btn_pane_g

0xa9f3,	// (0x0007e14b) aid_dia3_key_size_ParamLimits

0xa9f3,	// (0x0007e14b) aid_dia3_key_size

0xaa02,	// (0x0007e15a) aid_dia3_listrow_size_ParamLimits

0xaa02,	// (0x0007e15a) aid_dia3_listrow_size

0xaa15,	// (0x0007e16d) dia3_keypad_fun_pane_ParamLimits

0xaa15,	// (0x0007e16d) dia3_keypad_fun_pane

0xaa29,	// (0x0007e181) dia3_keypad_num_pane_ParamLimits

0xaa29,	// (0x0007e181) dia3_keypad_num_pane

0xaa3a,	// (0x0007e192) dia3_listscroll_pane_ParamLimits

0xaa3a,	// (0x0007e192) dia3_listscroll_pane

0xaa4b,	// (0x0007e1a3) dia3_numentry_pane_ParamLimits

0xaa4b,	// (0x0007e1a3) dia3_numentry_pane

0xe57e,	// (0x00081cd6) dia3_list_pane

0xe587,	// (0x00081cdf) scroll_pane_cp12

0xaf61,	// (0x0007e6b9) bg_dia3_numentry_pane

0xaa5d,	// (0x0007e1b5) dia3_numentry_pane_t1

0xaa6c,	// (0x0007e1c4) cell_dia3_key_num_pane

0xaa74,	// (0x0007e1cc) cell_dia3_key0_fun_pane_ParamLimits

0xaa74,	// (0x0007e1cc) cell_dia3_key0_fun_pane

0xaa88,	// (0x0007e1e0) cell_dia3_key1_fun_pane_ParamLimits

0xaa88,	// (0x0007e1e0) cell_dia3_key1_fun_pane

0xaa9f,	// (0x0007e1f7) dia3_listrow_pane

0xd4d5,	// (0x00080c2d) bg_dia3_numentry_pane_g1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp21

0xe590,	// (0x00081ce8) cell_dia3_key_num_pane_t1

0xe59e,	// (0x00081cf6) cell_dia3_key_num_pane_t2

0xe5ad,	// (0x00081d05) cell_dia3_key_num_pane_t3

0xe5bc,	// (0x00081d14) cell_dia3_key_num_pane_t4

0x0003,

0xfec7,	// (0x0008361f) cell_dia3_key_num_pane_t

0xaf61,	// (0x0007e6b9) bg_button_pane_cp19

0xe5cb,	// (0x00081d23) cell_dia3_key0_fun_pane_g1

0xaf61,	// (0x0007e6b9) bg_button_pane_cp20

0xaab1,	// (0x0007e209) cell_dia3_key1_fun_pane_g1

0xaab9,	// (0x0007e211) area_left_week_number_pane

0xaac5,	// (0x0007e21d) area_top_day_name_pane

0xaad6,	// (0x0007e22e) frame_month_view_pane

0xe5d3,	// (0x00081d2b) grid_month_view_pane

0xaae7,	// (0x0007e23f) cell_top_day_name_pane_ParamLimits

0xaae7,	// (0x0007e23f) cell_top_day_name_pane

0xab0a,	// (0x0007e262) cell_area_left_week_number_pane_ParamLimits

0xab0a,	// (0x0007e262) cell_area_left_week_number_pane

0xab1e,	// (0x0007e276) cell_month_view_pane_ParamLimits

0xab1e,	// (0x0007e276) cell_month_view_pane

0xe5e1,	// (0x00081d39) frm_month_g1

0xab43,	// (0x0007e29b) frm_month_g2

0xab54,	// (0x0007e2ac) frm_month_g3

0xab65,	// (0x0007e2bd) frm_month_g4

0xab76,	// (0x0007e2ce) frm_month_g5

0xab87,	// (0x0007e2df) frm_month_g6

0xab98,	// (0x0007e2f0) frm_month_g7

0xe5ee,	// (0x00081d46) frm_month_g8

0xaba9,	// (0x0007e301) frm_month_g9

0xabb9,	// (0x0007e311) frm_month_g10

0xabc9,	// (0x0007e321) frm_month_g11

0xabd9,	// (0x0007e331) frm_month_g12

0xabe9,	// (0x0007e341) frm_month_g13

0xabf9,	// (0x0007e351) frm_month_g14

0xac09,	// (0x0007e361) frm_month_g15

0xac1b,	// (0x0007e373) frm_month_g16

0x000f,

0xfed0,	// (0x00083628) frm_month_g

0xe5fb,	// (0x00081d53) cell_top_day_name_pane_t1

0xac2d,	// (0x0007e385) cell_area_left_week_number_pane_g1

0xac39,	// (0x0007e391) cell_area_left_week_number_pane_t1

0xc528,	// (0x0007fc80) cell_month_view_pane_g1

0xac4c,	// (0x0007e3a4) cell_month_view_pane_t1

0xaf61,	// (0x0007e6b9) main_fps_pane

0xda92,	// (0x000811ea) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda92,	// (0x000811ea) cmail_ddmenu_btn02_pane_cp1

0xdaae,	// (0x00081206) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdaae,	// (0x00081206) cmail_ddmenu_btn02_pane_cp2

0xa42d,	// (0x0007db85) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa42d,	// (0x0007db85) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdf5,	// (0x0008354d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdf5,	// (0x0008354d) cmail_ddmenu_btn02_pane_g

0xa44b,	// (0x0007dba3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa44b,	// (0x0007dba3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdfa,	// (0x00083552) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdfa,	// (0x00083552) cmail_ddmenu_btn02_pane_t

0xac5f,	// (0x0007e3b7) fps_text_pane_ParamLimits

0xac5f,	// (0x0007e3b7) fps_text_pane

0xac75,	// (0x0007e3cd) main_fps_pane_g1_ParamLimits

0xac75,	// (0x0007e3cd) main_fps_pane_g1

0xac8b,	// (0x0007e3e3) wait_bar_pane_cp010_ParamLimits

0xac8b,	// (0x0007e3e3) wait_bar_pane_cp010

0xac9c,	// (0x0007e3f4) fps_text_pane_t1_ParamLimits

0xac9c,	// (0x0007e3f4) fps_text_pane_t1

0xccc9,	// (0x00080421) cam4_image_uncrop_pane_g1

0xccd2,	// (0x0008042a) cam4_image_uncrop_pane_g2

0x8303,	// (0x0007ba5b) cam4_image_uncrop_pane_g3

0x830c,	// (0x0007ba64) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x00083042) cam4_image_uncrop_pane_g

0xaa9f,	// (0x0007e1f7) dia3_listrow_pane_ParamLimits

0xaf61,	// (0x0007e6b9) main_phob2_pane

0xa0eb,	// (0x0007d843) cell_tport_appsw_pane_cp02_ParamLimits

0xa0eb,	// (0x0007d843) cell_tport_appsw_pane_cp02

0xa0fb,	// (0x0007d853) cell_tport_appsw_pane_cp03_ParamLimits

0xa0fb,	// (0x0007d853) cell_tport_appsw_pane_cp03

0xaf61,	// (0x0007e6b9) phob2_contact_card_pane

0xaf61,	// (0x0007e6b9) phob2_listscroll_pane

0xe60e,	// (0x00081d66) phob2_list_pane

0xe616,	// (0x00081d6e) scroll_pane_cp034

0xacb4,	// (0x0007e40c) phob2_cc_data_pane_ParamLimits

0xacb4,	// (0x0007e40c) phob2_cc_data_pane

0xacd1,	// (0x0007e429) phob2_cc_listscroll_pane_ParamLimits

0xacd1,	// (0x0007e429) phob2_cc_listscroll_pane

0xa8f7,	// (0x0007e04f) list_double_large_graphic_phob2_pane_ParamLimits

0xa8f7,	// (0x0007e04f) list_double_large_graphic_phob2_pane

0xaced,	// (0x0007e445) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaced,	// (0x0007e445) list_double_large_graphic_phob2_pane_g1

0x1830,	// (0x00074f88) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1830,	// (0x00074f88) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfef1,	// (0x00083649) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfef1,	// (0x00083649) list_double_large_graphic_phob2_pane_g

0x183c,	// (0x00074f94) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x183c,	// (0x00074f94) list_double_large_graphic_phob2_pane_t1

0x1852,	// (0x00074faa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1852,	// (0x00074faa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfef6,	// (0x0008364e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfef6,	// (0x0008364e) list_double_large_graphic_phob2_pane_t

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp024

0xad03,	// (0x0007e45b) phob2_cc_button_pane

0xad0b,	// (0x0007e463) phob2_cc_data_pane_g1_ParamLimits

0xad0b,	// (0x0007e463) phob2_cc_data_pane_g1

0xad20,	// (0x0007e478) phob2_cc_data_pane_g2_ParamLimits

0xad20,	// (0x0007e478) phob2_cc_data_pane_g2

0x0001,

0xfefb,	// (0x00083653) phob2_cc_data_pane_g_ParamLimits

0xfefb,	// (0x00083653) phob2_cc_data_pane_g

0xad30,	// (0x0007e488) phob2_cc_data_pane_t1_ParamLimits

0xad30,	// (0x0007e488) phob2_cc_data_pane_t1

0xad48,	// (0x0007e4a0) phob2_cc_data_pane_t2_ParamLimits

0xad48,	// (0x0007e4a0) phob2_cc_data_pane_t2

0xad60,	// (0x0007e4b8) phob2_cc_data_pane_t3_ParamLimits

0xad60,	// (0x0007e4b8) phob2_cc_data_pane_t3

0x0002,

0xff00,	// (0x00083658) phob2_cc_data_pane_t_ParamLimits

0xff00,	// (0x00083658) phob2_cc_data_pane_t

0xe61e,	// (0x00081d76) phob2_cc_list_pane_ParamLimits

0xe61e,	// (0x00081d76) phob2_cc_list_pane

0xd3f2,	// (0x00080b4a) scroll_pane_cp035_ParamLimits

0xd3f2,	// (0x00080b4a) scroll_pane_cp035

0xafbc,	// (0x0007e714) bg_button_pane_cp033

0xe62a,	// (0x00081d82) phob2_cc_button_pane_g1

0xe636,	// (0x00081d8e) phob2_cc_button_pane_t1

0xe64b,	// (0x00081da3) phob2_cc_button_pane_t2

0x0001,

0xff07,	// (0x0008365f) phob2_cc_button_pane_t

0xad78,	// (0x0007e4d0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad78,	// (0x0007e4d0) list_double_large_graphic_phob2_cc_pane

0xada6,	// (0x0007e4fe) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xada6,	// (0x0007e4fe) list_double_large_graphic_phob2_cc_pane_g1

0xadb2,	// (0x0007e50a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xadb2,	// (0x0007e50a) list_double_large_graphic_phob2_cc_pane_g2

0x1867,	// (0x00074fbf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1867,	// (0x00074fbf) list_double_large_graphic_phob2_cc_pane_g3

0x1873,	// (0x00074fcb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1873,	// (0x00074fcb) list_double_large_graphic_phob2_cc_pane_g4

0x187f,	// (0x00074fd7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x187f,	// (0x00074fd7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff0c,	// (0x00083664) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff0c,	// (0x00083664) list_double_large_graphic_phob2_cc_pane_g

0x188b,	// (0x00074fe3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x188b,	// (0x00074fe3) list_double_large_graphic_phob2_cc_pane_t1

0x18b4,	// (0x0007500c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x18b4,	// (0x0007500c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff17,	// (0x0008366f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff17,	// (0x0008366f) list_double_large_graphic_phob2_cc_pane_t

0xe65d,	// (0x00081db5) list_highlight_pane_cp025_ParamLimits

0xe65d,	// (0x00081db5) list_highlight_pane_cp025

0xafbc,	// (0x0007e714) bg_button_pane_cp033_ParamLimits

0xe62a,	// (0x00081d82) phob2_cc_button_pane_g1_ParamLimits

0xe636,	// (0x00081d8e) phob2_cc_button_pane_t1_ParamLimits

0xe64b,	// (0x00081da3) phob2_cc_button_pane_t2_ParamLimits

0xff07,	// (0x0008365f) phob2_cc_button_pane_t_ParamLimits

0x1ad5,	// (0x0007522d) popup_wgtman_window

0xd4f5,	// (0x00080c4d) scroll_pane_cp038

0xa870,	// (0x0007dfc8) wgtman_btn_pane_cp_01_ParamLimits

0xa870,	// (0x0007dfc8) wgtman_btn_pane_cp_01

0xe66b,	// (0x00081dc3) wgtman_content_pane

0xe674,	// (0x00081dcc) wgtman_heading_pane

0xaf61,	// (0x0007e6b9) bg_heading_pane_cp02

0xe67d,	// (0x00081dd5) wgtman_heading_pane_g1

0xe685,	// (0x00081ddd) wgtman_heading_pane_t1

0xe693,	// (0x00081deb) scroll_pane_cp036

0xe69b,	// (0x00081df3) wgtman_list_pane

0xe6a3,	// (0x00081dfb) wgtman_list_pane_t1_ParamLimits

0xe6a3,	// (0x00081dfb) wgtman_list_pane_t1

0xea82,	// (0x000821da) cam4_grid_pane

0x0f3a,	// (0x00074692) bg_button_pane_cp015_ParamLimits

0x8e5d,	// (0x0007c5b5) bg_button_pane_cp016_ParamLimits

0x8e6f,	// (0x0007c5c7) bg_button_pane_cp017_ParamLimits

0x0f78,	// (0x000746d0) popup_vitu2_query_window_g3_ParamLimits

0x0f78,	// (0x000746d0) popup_vitu2_query_window_g3

0x0ff1,	// (0x00074749) popup_vitu2_query_window_t6_ParamLimits

0x0ff1,	// (0x00074749) popup_vitu2_query_window_t6

0x101c,	// (0x00074774) popup_vitu2_query_window_t7_ParamLimits

0x101c,	// (0x00074774) popup_vitu2_query_window_t7

0xccc9,	// (0x00080421) cam4_grid_pane_g1

0xccd2,	// (0x0008042a) cam4_grid_pane_g2

0xe6ba,	// (0x00081e12) cam4_grid_pane_g3

0xe6c3,	// (0x00081e1b) cam4_grid_pane_g4

0x0003,

0xff1c,	// (0x00083674) cam4_grid_pane_g

0x329c,	// (0x000769f4) aid_placing_vt_slider_lsc_ParamLimits

0x355a,	// (0x00076cb2) vidtel_button_pane_ParamLimits

0x355a,	// (0x00076cb2) vidtel_button_pane

0xaf61,	// (0x0007e6b9) bg_button_pane_cp034

0xadbe,	// (0x0007e516) vidtel_button_pane_g1

0xadc6,	// (0x0007e51e) vidtel_button_pane_t1

0xee86,	// (0x000825de) aid_size_vtel_slider_touch

0xd3f2,	// (0x00080b4a) scroll_pane_cp039

0xd524,	// (0x00080c7c) ncim_query_button_pane_cp01_ParamLimits

0xd543,	// (0x00080c9b) ncimui_query_pane_g1_ParamLimits

0xafbc,	// (0x0007e714) input_focus_pane_cp012_ParamLimits

0xd568,	// (0x00080cc0) ncim_query_entry_pane_t1_ParamLimits

0xd3f2,	// (0x00080b4a) scroll_pane_cp039_ParamLimits

0x4c1c,	// (0x00078374) navi_pane_bcale_mc_g1

0x4c24,	// (0x0007837c) navi_pane_bcale_mc_t1

0xdae2,	// (0x0008123a) main_sp_fs_email_pane_g1

0xdaee,	// (0x00081246) main_sp_fs_email_pane_g2

0x0001,

0xfcad,	// (0x00083405) main_sp_fs_email_pane_g

0xe000,	// (0x00081758) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe000,	// (0x00081758) list_single_cale_mrui_row_pane_g3

0x1786,	// (0x00074ede) list_single_recal_day_pane_g5_event_pane

0xe1d9,	// (0x00081931) list_single_recal_day_pane_g7

0xe6cc,	// (0x00081e24) list_recal_day_event_pane_cp01

0xe6d5,	// (0x00081e2d) list_recal_vselct_arw_lo_pane_cp01

0xe6dd,	// (0x00081e35) list_recal_vselct_arw_up_pane_cp01

0xe6e5,	// (0x00081e3d) list_recal_vselct_pane_cp01

0xee96,	// (0x000825ee) list_recal_day_event_pane_cp01_g1

0xe6ef,	// (0x00081e47) list_recal_day_event_pane_cp01_t1

0xe1e1,	// (0x00081939) list_single_recal_day_pane_t1_ParamLimits

0x179c,	// (0x00074ef4) list_single_recal_day_pane_t2_ParamLimits

0xfe0a,	// (0x00083562) list_single_recal_day_pane_t_ParamLimits

0x21c9,	// (0x00075921) bg_notes_pane_ParamLimits

0x24b7,	// (0x00075c0f) list_notes_pane_ParamLimits

0x24c5,	// (0x00075c1d) scroll_pane_cp06_ParamLimits

0x24ef,	// (0x00075c47) main_notes_pane_ParamLimits

0xafbc,	// (0x0007e714) main_welc_pane

0xadef,	// (0x0007e547) main_welc_body_pane_ParamLimits

0xadef,	// (0x0007e547) main_welc_body_pane

0xae0b,	// (0x0007e563) main_welc_opti_pane_ParamLimits

0xae0b,	// (0x0007e563) main_welc_opti_pane

0xae57,	// (0x0007e5af) main_welc_pane_t1_ParamLimits

0xae57,	// (0x0007e5af) main_welc_pane_t1

0xaebd,	// (0x0007e615) main_welc_body_row_pane_ParamLimits

0xaebd,	// (0x0007e615) main_welc_body_row_pane

0xe6fd,	// (0x00081e55) main_welc_opti_row_pane_ParamLimits

0xe6fd,	// (0x00081e55) main_welc_opti_row_pane

0xe70b,	// (0x00081e63) main_welc_opti_row_pane_g1

0xaed0,	// (0x0007e628) main_welc_opti_row_pane_t1

0xe713,	// (0x00081e6b) main_welc_body_row_pane_t1

0xe41a,	// (0x00081b72) popup_notif_wgt_heading_pane

0xe434,	// (0x00081b8c) aid_size_list_notif_wgt_del_ParamLimits

0xe441,	// (0x00081b99) list_notif_wgt_row_pane_g1_ParamLimits

0xe44d,	// (0x00081ba5) list_notif_wgt_row_pane_g2_ParamLimits

0xe461,	// (0x00081bb9) list_notif_wgt_row_pane_g3_ParamLimits

0xfe71,	// (0x000835c9) list_notif_wgt_row_pane_g_ParamLimits

0xe46e,	// (0x00081bc6) list_notif_wgt_row_pane_t1_ParamLimits

0xe484,	// (0x00081bdc) list_notif_wgt_row_pane_t2_ParamLimits

0xe496,	// (0x00081bee) list_notif_wgt_row_pane_t3_ParamLimits

0xfe78,	// (0x000835d0) list_notif_wgt_row_pane_t_ParamLimits

0xa908,	// (0x0007e060) listrow_wgtman_pane_g1_ParamLimits

0xa915,	// (0x0007e06d) listrow_wgtman_pane_g2_ParamLimits

0xfea1,	// (0x000835f9) listrow_wgtman_pane_g_ParamLimits

0x17e0,	// (0x00074f38) listrow_wgtman_pane_t1_ParamLimits

0x17f8,	// (0x00074f50) listrow_wgtman_pane_t2_ParamLimits

0xfea6,	// (0x000835fe) listrow_wgtman_pane_t_ParamLimits

0x181e,	// (0x00074f76) wait_bar_pane_cp09_ParamLimits

0xaf61,	// (0x0007e6b9) bg_popup_heading_pane_cp02

0xe722,	// (0x00081e7a) popup_notif_wgt_heading_pane_g1

0xe72a,	// (0x00081e82) popup_notif_wgt_heading_pane_t1

0xbdf3,	// (0x0007f54b) main_vids_pane

0xaf61,	// (0x0007e6b9) vids_listscroll_pane

0xaedf,	// (0x0007e637) scroll_pane_cp040

0xaf61,	// (0x0007e6b9) vids_list_pane

0xaeea,	// (0x0007e642) vids_list_double_pane_ParamLimits

0xaeea,	// (0x0007e642) vids_list_double_pane

0xaef7,	// (0x0007e64f) vids_list_double_pane_g1

0xaf00,	// (0x0007e658) vids_list_double_pane_t1

0xaf10,	// (0x0007e668) vids_list_double_pane_t2

0x0001,

0xff33,	// (0x0008368b) vids_list_double_pane_t

0xafbc,	// (0x0007e714) main_ncimui_pane_ParamLimits

0x985a,	// (0x0007cfb2) main_ncimui_pane_g1_ParamLimits

0x9866,	// (0x0007cfbe) main_ncimui_pane_g2_ParamLimits

0x9866,	// (0x0007cfbe) main_ncimui_pane_g2

0x0001,

0xfbae,	// (0x00083306) main_ncimui_pane_g_ParamLimits

0xfbae,	// (0x00083306) main_ncimui_pane_g

0xae22,	// (0x0007e57a) main_welc_pane_g1_ParamLimits

0xae22,	// (0x0007e57a) main_welc_pane_g1

0xae35,	// (0x0007e58d) main_welc_pane_g2_ParamLimits

0xae35,	// (0x0007e58d) main_welc_pane_g2

0x0002,

0xff25,	// (0x0008367d) main_welc_pane_g_ParamLimits

0xff25,	// (0x0008367d) main_welc_pane_g

0x21c9,	// (0x00075921) listscroll_mce_pane_ParamLimits

0x4d9c,	// (0x000784f4) wait_bar_pane_cp10

0xbdd9,	// (0x0007f531) main_cale_day_pane_ParamLimits

0xbdd9,	// (0x0007f531) main_cale_week_pane_ParamLimits

0x21c9,	// (0x00075921) main_messa_pane_ParamLimits

0x771a,	// (0x0007ae72) main_clock2_btn_pane_ParamLimits

0x771a,	// (0x0007ae72) main_clock2_btn_pane

0xc724,	// (0x0007fe7c) main_clock2_btn_pane_cp01_ParamLimits

0xc724,	// (0x0007fe7c) main_clock2_btn_pane_cp01

0xdf83,	// (0x000816db) list_cale_mrui_pane_ParamLimits

0xe4ca,	// (0x00081c22) main_cf0_pane_g2

0x0001,

0xfe7f,	// (0x000835d7) main_cf0_pane_g

0xaab9,	// (0x0007e211) area_left_week_number_pane_ParamLimits

0xaac5,	// (0x0007e21d) area_top_day_name_pane_ParamLimits

0xaad6,	// (0x0007e22e) frame_month_view_pane_ParamLimits

0xe5d3,	// (0x00081d2b) grid_month_view_pane_ParamLimits

0xe5e1,	// (0x00081d39) frm_month_g1_ParamLimits

0xab43,	// (0x0007e29b) frm_month_g2_ParamLimits

0xab54,	// (0x0007e2ac) frm_month_g3_ParamLimits

0xab65,	// (0x0007e2bd) frm_month_g4_ParamLimits

0xab76,	// (0x0007e2ce) frm_month_g5_ParamLimits

0xab87,	// (0x0007e2df) frm_month_g6_ParamLimits

0xab98,	// (0x0007e2f0) frm_month_g7_ParamLimits

0xe5ee,	// (0x00081d46) frm_month_g8_ParamLimits

0xaba9,	// (0x0007e301) frm_month_g9_ParamLimits

0xabb9,	// (0x0007e311) frm_month_g10_ParamLimits

0xabc9,	// (0x0007e321) frm_month_g11_ParamLimits

0xabd9,	// (0x0007e331) frm_month_g12_ParamLimits

0xabe9,	// (0x0007e341) frm_month_g13_ParamLimits

0xabf9,	// (0x0007e351) frm_month_g14_ParamLimits

0xac09,	// (0x0007e361) frm_month_g15_ParamLimits

0xac1b,	// (0x0007e373) frm_month_g16_ParamLimits

0xfed0,	// (0x00083628) frm_month_g_ParamLimits

0xe5fb,	// (0x00081d53) cell_top_day_name_pane_t1_ParamLimits

0xac2d,	// (0x0007e385) cell_area_left_week_number_pane_g1_ParamLimits

0xac39,	// (0x0007e391) cell_area_left_week_number_pane_t1_ParamLimits

0xc528,	// (0x0007fc80) cell_month_view_pane_g1_ParamLimits

0xac4c,	// (0x0007e3a4) cell_month_view_pane_t1_ParamLimits

0x21c1,	// (0x00075919) main_clock2_btn_pane_g1

0xe738,	// (0x00081e90) main_clock2_btn_pane_t1

0xafbc,	// (0x0007e714) listscroll_cmail_pane_ParamLimits

0xdae2,	// (0x0008123a) main_sp_fs_email_pane_g1_ParamLimits

0xdaee,	// (0x00081246) main_sp_fs_email_pane_g2_ParamLimits

0xfcad,	// (0x00083405) main_sp_fs_email_pane_g_ParamLimits

0xe155,	// (0x000818ad) list_recal_day_pane_ParamLimits

0xe166,	// (0x000818be) mian_recal_day_pane_t1

0x1421,	// (0x00074b79) list_single_dyc_row_text_pane_t4_ParamLimits

0x1421,	// (0x00074b79) list_single_dyc_row_text_pane_t4

0x1458,	// (0x00074bb0) list_single_dyc_row_text_pane_t5_ParamLimits

0x1458,	// (0x00074bb0) list_single_dyc_row_text_pane_t5

0xdbb6,	// (0x0008130e) list_single_dyc_row_text_pane_t6_ParamLimits

0xdbb6,	// (0x0008130e) list_single_dyc_row_text_pane_t6

0x43da,	// (0x00077b32) aid_mgn_list_cale_time_pane

0xafbc,	// (0x0007e714) main_gallery2_pane_ParamLimits

0xc738,	// (0x0007fe90) main_clock2_pane_cp01_t1

0xc746,	// (0x0007fe9e) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x00082f14) main_clock2_pane_cp01_t

0x299f,	// (0x000760f7) cale_week_scroll_pane_g16_ParamLimits

0x299f,	// (0x000760f7) cale_week_scroll_pane_g16

0x2e5d,	// (0x000765b5) vorec_slider_pane

0xadc6,	// (0x0007e51e) vidtel_button_pane_t1_ParamLimits

0xa4f0,	// (0x0007dc48) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa502,	// (0x0007dc5a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa513,	// (0x0007dc6b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa513,	// (0x0007dc6b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe2d,	// (0x00083585) main_fs_bigclock_clock_pane_g_ParamLimits

0xa526,	// (0x0007dc7e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa541,	// (0x0007dc99) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe36,	// (0x0008358e) main_fs_bigclock_clock_pane_t_ParamLimits

0x6fa0,	// (0x0007a6f8) main_mup3_lyrics_pane_ParamLimits

0x6fa0,	// (0x0007a6f8) main_mup3_lyrics_pane

0xaf42,	// (0x0007e69a) main_mup3_lyrics_pane_t1_ParamLimits

0xaf42,	// (0x0007e69a) main_mup3_lyrics_pane_t1

0xe7f2,	// (0x00081f4a) aid_main_mp4_pane_t1_area

0xe7f2,	// (0x00081f4a) aid_main_mp4_pane_t2_area

0xe89a,	// (0x00081ff2) main_mp4_pane_g7_ParamLimits

0xe89a,	// (0x00081ff2) main_mp4_pane_g7

0xe8a6,	// (0x00081ffe) main_mp4_pane_g8_ParamLimits

0xe8a6,	// (0x00081ffe) main_mp4_pane_g8

0x8173,	// (0x0007b8cb) aid_call6_pane_g1_size

0xad92,	// (0x0007e4ea) list_double_large_graphic_phob2_other_pane_ParamLimits

0xad92,	// (0x0007e4ea) list_double_large_graphic_phob2_other_pane

0x49a2,	// (0x000780fa) list_double_large_graphic_phob2_other_pane_g1

0xaf61,	// (0x0007e6b9) list_highlight_pane_cp026

0xafbc,	// (0x0007e714) main_welc_pane_ParamLimits

0x9f9c,	// (0x0007d6f4) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9f9c,	// (0x0007d6f4) main_sp_fs_ctrlbar_pane_g3

0x9fb4,	// (0x0007d70c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9fb4,	// (0x0007d70c) main_sp_fs_ctrlbar_pane_g4

0x9ff6,	// (0x0007d74e) toolbar2_fixed_button_pane_cp01

0xa001,	// (0x0007d759) toolbar2_fixed_button_pane_cp02

0xa00c,	// (0x0007d764) toolbar2_fixed_button_pane_cp03

0xaddc,	// (0x0007e534) list_welc_entry_pane_ParamLimits

0xaddc,	// (0x0007e534) list_welc_entry_pane

0xae48,	// (0x0007e5a0) main_welc_pane_g3_ParamLimits

0xae48,	// (0x0007e5a0) main_welc_pane_g3

0xae71,	// (0x0007e5c9) main_welc_pane_t2_ParamLimits

0xae71,	// (0x0007e5c9) main_welc_pane_t2

0xae87,	// (0x0007e5df) main_welc_pane_t3_ParamLimits

0xae87,	// (0x0007e5df) main_welc_pane_t3

0x0002,

0xff2c,	// (0x00083684) main_welc_pane_t_ParamLimits

0xff2c,	// (0x00083684) main_welc_pane_t

0xae9c,	// (0x0007e5f4) welc_button_pane_ParamLimits

0xae9c,	// (0x0007e5f4) welc_button_pane

0xaead,	// (0x0007e605) welc_service_logo_pane_ParamLimits

0xaead,	// (0x0007e605) welc_service_logo_pane

0xe746,	// (0x00081e9e) list_single_welc_entry_pane_ParamLimits

0xe746,	// (0x00081e9e) list_single_welc_entry_pane

0xe757,	// (0x00081eaf) list_single_welc_entry_pane_g1

0xe75f,	// (0x00081eb7) list_single_welc_entry_pane_t1

0xe76d,	// (0x00081ec5) list_single_welc_entry_pane_t2

0x0001,

0xff38,	// (0x00083690) list_single_welc_entry_pane_t

0xaf61,	// (0x0007e6b9) bg_button_pane_cp035

0xe77b,	// (0x00081ed3) welc_button_pane_t1

0xe789,	// (0x00081ee1) welc_service_logo_pane_g1

0xe792,	// (0x00081eea) welc_service_logo_pane_g2

0x0001,

0xff3d,	// (0x00083695) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
