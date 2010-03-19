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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000728f2 };

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
0x1774,	// (0x00074066) Screen

0x1780,	// (0x00074072) application_window

0x17bc,	// (0x000740ae) area_bottom_pane_ParamLimits

0x17bc,	// (0x000740ae) area_bottom_pane

0x17f5,	// (0x000740e7) area_top_pane_ParamLimits

0x17f5,	// (0x000740e7) area_top_pane

0x1852,	// (0x00074144) call_video_uplink_pane_ParamLimits

0x1852,	// (0x00074144) call_video_uplink_pane

0x187e,	// (0x00074170) main_pane_ParamLimits

0x187e,	// (0x00074170) main_pane

0xbdcb,	// (0x0007e6bd) context_pane

0x5e19,	// (0x0007870b) navi_pane

0x5e41,	// (0x00078733) popup_cale_events_window_ParamLimits

0x5e41,	// (0x00078733) popup_cale_events_window

0xbdde,	// (0x0007e6d0) popup_mup_playback_window

0x5e59,	// (0x0007874b) signal_pane

0x2443,	// (0x00074d35) main_browser_pane

0x49ba,	// (0x000772ac) main_burst_pane

0x5b6b,	// (0x0007845d) main_calc_pane

0x49ba,	// (0x000772ac) main_cale_day_pane

0x2443,	// (0x00074d35) main_cale_month_pane

0x49ba,	// (0x000772ac) main_cale_week_pane

0x49ba,	// (0x000772ac) main_call_pane

0x1e83,	// (0x00074775) main_call_poc_pane

0x49ba,	// (0x000772ac) main_camera_pane

0x49ba,	// (0x000772ac) main_chi_dic_pane

0x4539,	// (0x00076e2b) main_clock_pane

0x1e83,	// (0x00074775) main_fmradio_pane

0x49ba,	// (0x000772ac) main_graph_messa_pane

0x1e83,	// (0x00074775) main_help_pane

0x2443,	// (0x00074d35) main_im_pane

0x20de,	// (0x000749d0) main_image_pane_ParamLimits

0x20de,	// (0x000749d0) main_image_pane

0x1e83,	// (0x00074775) main_location2_pane

0x49ba,	// (0x000772ac) main_location_pane

0x1e83,	// (0x00074775) main_messa_pane

0x1e83,	// (0x00074775) main_mp2_pane

0x49ba,	// (0x000772ac) main_mp_pane

0x1e83,	// (0x00074775) main_msg_pane

0x1e83,	// (0x00074775) main_mup_eq_pane

0x1e83,	// (0x00074775) main_mup_pane

0x49ba,	// (0x000772ac) main_notes_pane

0x1e83,	// (0x00074775) main_pec_pane

0x1e83,	// (0x00074775) main_phob_pane

0x1e83,	// (0x00074775) main_pinb_pane

0x1e83,	// (0x00074775) main_postcard_pane

0x1e83,	// (0x00074775) main_qdial_pane

0x49ba,	// (0x000772ac) main_skin_pane

0x1e83,	// (0x00074775) main_smil2_pane

0x49ba,	// (0x000772ac) main_smil_pane

0x49ba,	// (0x000772ac) main_video_pane

0x49ba,	// (0x000772ac) main_video_tele_pane

0x20de,	// (0x000749d0) main_viewer_pane_ParamLimits

0x20de,	// (0x000749d0) main_viewer_pane

0x49ba,	// (0x000772ac) main_vorec_pane

0x5bbf,	// (0x000784b1) popup_blid_sat_info_window_ParamLimits

0x5bbf,	// (0x000784b1) popup_blid_sat_info_window

0x5c17,	// (0x00078509) popup_dyc_status_message_window_ParamLimits

0x5c17,	// (0x00078509) popup_dyc_status_message_window

0x5c31,	// (0x00078523) popup_grid_large_graphic_window_ParamLimits

0x5c31,	// (0x00078523) popup_grid_large_graphic_window

0x5ced,	// (0x000785df) popup_loc_request_window_ParamLimits

0x5ced,	// (0x000785df) popup_loc_request_window

0x5df1,	// (0x000786e3) popup_wml_address_window_ParamLimits

0x5df1,	// (0x000786e3) popup_wml_address_window

0x59a5,	// (0x00078297) call_muted_g1

0x565a,	// (0x00077f4c) popup_call_audio_conf_window_ParamLimits

0x565a,	// (0x00077f4c) popup_call_audio_conf_window

0x59b9,	// (0x000782ab) popup_call_audio_first_window_ParamLimits

0x59b9,	// (0x000782ab) popup_call_audio_first_window

0x5a2f,	// (0x00078321) popup_call_audio_in_window_ParamLimits

0x5a2f,	// (0x00078321) popup_call_audio_in_window

0x5a6b,	// (0x0007835d) popup_call_audio_out_window_ParamLimits

0x5a6b,	// (0x0007835d) popup_call_audio_out_window

0x5aa5,	// (0x00078397) popup_call_audio_second_window_ParamLimits

0x5aa5,	// (0x00078397) popup_call_audio_second_window

0x5afb,	// (0x000783ed) popup_call_audio_wait_window_ParamLimits

0x5afb,	// (0x000783ed) popup_call_audio_wait_window

0x5b30,	// (0x00078422) popup_number_entry_window_ParamLimits

0x5b30,	// (0x00078422) popup_number_entry_window

0x1a18,	// (0x0007430a) bg_popup_call_pane_cp05_ParamLimits

0x1a18,	// (0x0007430a) bg_popup_call_pane_cp05

0x1a38,	// (0x0007432a) popup_number_entry_window_t1

0x1a4b,	// (0x0007433d) popup_number_entry_window_t2

0x1a5d,	// (0x0007434f) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000819de) popup_number_entry_window_t

0x1aa3,	// (0x00074395) text_title_cp2

0x1ab6,	// (0x000743a8) bg_popup_call_pane_cp_ParamLimits

0x1ab6,	// (0x000743a8) bg_popup_call_pane_cp

0x1ac4,	// (0x000743b6) call_thumbnail_pane

0x1acc,	// (0x000743be) popup_call_audio_in_window_g1_ParamLimits

0x1acc,	// (0x000743be) popup_call_audio_in_window_g1

0x1ad8,	// (0x000743ca) popup_call_audio_in_window_g2_ParamLimits

0x1ad8,	// (0x000743ca) popup_call_audio_in_window_g2

0x1ae4,	// (0x000743d6) popup_call_audio_in_window_g3_ParamLimits

0x1ae4,	// (0x000743d6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000819e7) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000819e7) popup_call_audio_in_window_g

0x1af0,	// (0x000743e2) popup_call_audio_in_window_t1_ParamLimits

0x1af0,	// (0x000743e2) popup_call_audio_in_window_t1

0x1b0c,	// (0x000743fe) popup_call_audio_in_window_t2_ParamLimits

0x1b0c,	// (0x000743fe) popup_call_audio_in_window_t2

0x1b28,	// (0x0007441a) popup_call_audio_in_window_t3_ParamLimits

0x1b28,	// (0x0007441a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000819ee) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000819ee) popup_call_audio_in_window_t

0x1ab6,	// (0x000743a8) bg_popup_call_pane_cp01_ParamLimits

0x1ab6,	// (0x000743a8) bg_popup_call_pane_cp01

0x1ac4,	// (0x000743b6) call_thumbnail_pane_cp02

0x1b3b,	// (0x0007442d) call_type_pane_cp022

0x1b43,	// (0x00074435) popup_call_audio_out_window_g1_ParamLimits

0x1b43,	// (0x00074435) popup_call_audio_out_window_g1

0x1b55,	// (0x00074447) popup_call_audio_out_window_g2_ParamLimits

0x1b55,	// (0x00074447) popup_call_audio_out_window_g2

0x1b61,	// (0x00074453) popup_call_audio_out_window_g3_ParamLimits

0x1b61,	// (0x00074453) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000819f5) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000819f5) popup_call_audio_out_window_g

0x1b73,	// (0x00074465) popup_call_audio_out_window_t1_ParamLimits

0x1b73,	// (0x00074465) popup_call_audio_out_window_t1

0x1b8b,	// (0x0007447d) popup_call_audio_out_window_t2_ParamLimits

0x1b8b,	// (0x0007447d) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000819fc) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000819fc) popup_call_audio_out_window_t

0x1ba0,	// (0x00074492) bg_popup_call_pane_ParamLimits

0x1ba0,	// (0x00074492) bg_popup_call_pane

0x1c24,	// (0x00074516) call_thumbnail_pane_cp_ParamLimits

0x1c24,	// (0x00074516) call_thumbnail_pane_cp

0x1c48,	// (0x0007453a) call_type_pane_cp01_ParamLimits

0x1c48,	// (0x0007453a) call_type_pane_cp01

0x1c8c,	// (0x0007457e) popup_call_audio_first_window_g1_ParamLimits

0x1c8c,	// (0x0007457e) popup_call_audio_first_window_g1

0x1cd8,	// (0x000745ca) popup_call_audio_first_window_g2_ParamLimits

0x1cd8,	// (0x000745ca) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00081a01) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00081a01) popup_call_audio_first_window_g

0x1d1c,	// (0x0007460e) popup_call_audio_first_window_t1_ParamLimits

0x1d1c,	// (0x0007460e) popup_call_audio_first_window_t1

0x1dc8,	// (0x000746ba) popup_call_audio_first_window_t4_ParamLimits

0x1dc8,	// (0x000746ba) popup_call_audio_first_window_t4

0x1e54,	// (0x00074746) popup_call_audio_first_window_t5_ParamLimits

0x1e54,	// (0x00074746) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00081a06) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00081a06) popup_call_audio_first_window_t

0x1e83,	// (0x00074775) bg_popup_call_pane_cp02

0x1e8d,	// (0x0007477f) call_type_pane_cp023

0x1e95,	// (0x00074787) popup_call_audio_wait_window_g1

0x1e9d,	// (0x0007478f) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00081a0d) popup_call_audio_wait_window_g

0x1ea5,	// (0x00074797) popup_call_audio_wait_window_t3

0x1eb3,	// (0x000747a5) bg_popup_call_pane_cp03_ParamLimits

0x1eb3,	// (0x000747a5) bg_popup_call_pane_cp03

0x1f13,	// (0x00074805) call_thumbnail_pane_cp011_ParamLimits

0x1f13,	// (0x00074805) call_thumbnail_pane_cp011

0x1f1f,	// (0x00074811) call_type_pane_cp034_ParamLimits

0x1f1f,	// (0x00074811) call_type_pane_cp034

0x1f5b,	// (0x0007484d) popup_call_audio_second_window_g1_ParamLimits

0x1f5b,	// (0x0007484d) popup_call_audio_second_window_g1

0x1f97,	// (0x00074889) popup_call_audio_second_window_g2_ParamLimits

0x1f97,	// (0x00074889) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00081a12) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00081a12) popup_call_audio_second_window_g

0x1fd3,	// (0x000748c5) popup_call_audio_second_window_t1_ParamLimits

0x1fd3,	// (0x000748c5) popup_call_audio_second_window_t1

0x2054,	// (0x00074946) popup_call_audio_second_window_t2_ParamLimits

0x2054,	// (0x00074946) popup_call_audio_second_window_t2

0x208a,	// (0x0007497c) popup_call_audio_second_window_t3_ParamLimits

0x208a,	// (0x0007497c) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00081a17) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00081a17) popup_call_audio_second_window_t

0x1e83,	// (0x00074775) bg_popup_call_pane_cp04

0x20c0,	// (0x000749b2) list_conf_pane

0x20c8,	// (0x000749ba) popup_call_audio_conf_window_t1

0x20d6,	// (0x000749c8) call_thumbnail_pane_g1

0x20de,	// (0x000749d0) bg_pinb_pane_ParamLimits

0x20de,	// (0x000749d0) bg_pinb_pane

0x20ec,	// (0x000749de) find_pinb_pane

0x20f5,	// (0x000749e7) listscroll_pinb_pane_ParamLimits

0x20f5,	// (0x000749e7) listscroll_pinb_pane

0x2104,	// (0x000749f6) pinb_bg_pane_g1

0x210e,	// (0x00074a00) pinb_bg_pane_g2

0x211a,	// (0x00074a0c) pinb_bg_pane_g3

0x2126,	// (0x00074a18) pinb_bg_pane_g4

0x2132,	// (0x00074a24) pinb_bg_pane_g5

0x213e,	// (0x00074a30) pinb_bg_pane_g6

0x2149,	// (0x00074a3b) pinb_bg_pane_g7

0x2154,	// (0x00074a46) pinb_bg_pane_g8

0x215f,	// (0x00074a51) pinb_bg_pane_g9

0x2169,	// (0x00074a5b) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00081a1e) pinb_bg_pane_g

0x2186,	// (0x00074a78) grid_pinb_pane

0x218f,	// (0x00074a81) list_pinb_pane

0x2198,	// (0x00074a8a) scroll_pane_cp01_ParamLimits

0x2198,	// (0x00074a8a) scroll_pane_cp01

0x21aa,	// (0x00074a9c) find_pinb_pane_g1_ParamLimits

0x21aa,	// (0x00074a9c) find_pinb_pane_g1

0x21c2,	// (0x00074ab4) find_pinb_pane_t1

0x21d4,	// (0x00074ac6) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00081a38) find_pinb_pane_t

0x21e9,	// (0x00074adb) input_focus_pane_cp01_ParamLimits

0x21e9,	// (0x00074adb) input_focus_pane_cp01

0x21f5,	// (0x00074ae7) cell_pinb_pane_ParamLimits

0x21f5,	// (0x00074ae7) cell_pinb_pane

0x221e,	// (0x00074b10) cell_pinb_pane_g1_ParamLimits

0x221e,	// (0x00074b10) cell_pinb_pane_g1

0x222e,	// (0x00074b20) cell_pinb_pane_g2_ParamLimits

0x222e,	// (0x00074b20) cell_pinb_pane_g2

0x223a,	// (0x00074b2c) cell_pinb_pane_g3_ParamLimits

0x223a,	// (0x00074b2c) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00081a3d) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00081a3d) cell_pinb_pane_g

0x1e83,	// (0x00074775) grid_highlight_pane_cp01

0x2246,	// (0x00074b38) list_pinb_item_pane_ParamLimits

0x2246,	// (0x00074b38) list_pinb_item_pane

0x1e83,	// (0x00074775) list_highlight_pane_cp02

0x2258,	// (0x00074b4a) list_pinb_item_pane_g1_ParamLimits

0x2258,	// (0x00074b4a) list_pinb_item_pane_g1

0x2265,	// (0x00074b57) list_pinb_item_pane_g2_ParamLimits

0x2265,	// (0x00074b57) list_pinb_item_pane_g2

0x2271,	// (0x00074b63) list_pinb_item_pane_g3_ParamLimits

0x2271,	// (0x00074b63) list_pinb_item_pane_g3

0x2282,	// (0x00074b74) list_pinb_item_pane_g4_ParamLimits

0x2282,	// (0x00074b74) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00081a44) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00081a44) list_pinb_item_pane_g

0x228e,	// (0x00074b80) list_pinb_item_pane_t1_ParamLimits

0x228e,	// (0x00074b80) list_pinb_item_pane_t1

0x22c3,	// (0x00074bb5) calc_display_pane

0x22eb,	// (0x00074bdd) calc_paper_pane

0x230e,	// (0x00074c00) grid_calc_pane

0x1e83,	// (0x00074775) bg_list_pane_cp01

0x2338,	// (0x00074c2a) clock_g1

0x2340,	// (0x00074c32) clock_g2

0x0001,

0xf15b,	// (0x00081a4d) clock_g

0x2348,	// (0x00074c3a) clock_t1_ParamLimits

0x2348,	// (0x00074c3a) clock_t1

0x235d,	// (0x00074c4f) clock_t2_ParamLimits

0x235d,	// (0x00074c4f) clock_t2

0x236f,	// (0x00074c61) clock_t3_ParamLimits

0x236f,	// (0x00074c61) clock_t3

0x2381,	// (0x00074c73) clock_t4_ParamLimits

0x2381,	// (0x00074c73) clock_t4

0x2393,	// (0x00074c85) clock_t5_ParamLimits

0x2393,	// (0x00074c85) clock_t5

0x23a8,	// (0x00074c9a) clock_t6_ParamLimits

0x23a8,	// (0x00074c9a) clock_t6

0x23ba,	// (0x00074cac) clock_t7_ParamLimits

0x23ba,	// (0x00074cac) clock_t7

0x23cc,	// (0x00074cbe) clock_t8_ParamLimits

0x23cc,	// (0x00074cbe) clock_t8

0x23e0,	// (0x00074cd2) clock_t9_ParamLimits

0x23e0,	// (0x00074cd2) clock_t9

0x0008,

0xf160,	// (0x00081a52) clock_t_ParamLimits

0xf160,	// (0x00081a52) clock_t

0x23f4,	// (0x00074ce6) popup_clock_analogue_window_cp02

0x23f4,	// (0x00074ce6) popup_clock_digital_window_cp01

0x23fc,	// (0x00074cee) listscroll_help_pane

0x1e83,	// (0x00074775) phob_pre_status_pane

0x2406,	// (0x00074cf8) grid_qdial_pane

0x1e83,	// (0x00074775) listscroll_mce_pane

0x2410,	// (0x00074d02) bg_notes_pane

0x241a,	// (0x00074d0c) list_notes_pane

0x2424,	// (0x00074d16) scroll_pane_cp06

0x242f,	// (0x00074d21) bg_calc_paper_pane

0xaa71,	// (0x0007d363) list_calc_pane

0x2443,	// (0x00074d35) bg_calc_display_pane

0x244f,	// (0x00074d41) calc_display_pane_t1

0x2461,	// (0x00074d53) calc_display_pane_t2

0xaa8b,	// (0x0007d37d) calc_display_pane_t3

0x0002,

0xf173,	// (0x00081a65) calc_display_pane_t

0x2473,	// (0x00074d65) cell_calc_pane_ParamLimits

0x2473,	// (0x00074d65) cell_calc_pane

0x24a8,	// (0x00074d9a) bg_calc_paper_pane_g1

0x24b4,	// (0x00074da6) bg_calc_paper_pane_g2

0x24c0,	// (0x00074db2) bg_calc_paper_pane_g3

0x24cc,	// (0x00074dbe) bg_calc_paper_pane_g4

0x24d8,	// (0x00074dca) bg_calc_paper_pane_g5

0x24e4,	// (0x00074dd6) bg_calc_paper_pane_g6

0x24f3,	// (0x00074de5) bg_calc_paper_pane_g7

0x2502,	// (0x00074df4) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00081a6c) bg_calc_paper_pane_g

0x2515,	// (0x00074e07) calc_bg_paper_pane_g9

0x2528,	// (0x00074e1a) list_calc_item_pane_ParamLimits

0x2528,	// (0x00074e1a) list_calc_item_pane

0x253b,	// (0x00074e2d) list_calc_item_pane_g1

0xaa9d,	// (0x0007d38f) list_calc_item_pane_t1_ParamLimits

0xaa9d,	// (0x0007d38f) list_calc_item_pane_t1

0x2548,	// (0x00074e3a) list_calc_item_pane_t2_ParamLimits

0x2548,	// (0x00074e3a) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00081a7d) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00081a7d) list_calc_item_pane_t

0x2562,	// (0x00074e54) cell_calc_pane_g1

0x2584,	// (0x00074e76) grid_highlight_pane_cp02

0x25a6,	// (0x00074e98) bg_calc_display_pane_g1

0x25af,	// (0x00074ea1) bg_calc_display_pane_g2

0x25b9,	// (0x00074eab) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00081a87) bg_calc_display_pane_g

0x25c2,	// (0x00074eb4) cell_qdial_pane_ParamLimits

0x25c2,	// (0x00074eb4) cell_qdial_pane

0x25d6,	// (0x00074ec8) cell_qdial_pane_g1_ParamLimits

0x25d6,	// (0x00074ec8) cell_qdial_pane_g1

0x25ec,	// (0x00074ede) cell_qdial_pane_g2_ParamLimits

0x25ec,	// (0x00074ede) cell_qdial_pane_g2

0x25fd,	// (0x00074eef) cell_qdial_pane_g3_ParamLimits

0x25fd,	// (0x00074eef) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00081a8e) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00081a8e) cell_qdial_pane_g

0x261f,	// (0x00074f11) cell_qdial_pane_t1_ParamLimits

0x261f,	// (0x00074f11) cell_qdial_pane_t1

0x2637,	// (0x00074f29) cell_qdial_pane_t2_ParamLimits

0x2637,	// (0x00074f29) cell_qdial_pane_t2

0x264a,	// (0x00074f3c) cell_qdial_pane_t3_ParamLimits

0x264a,	// (0x00074f3c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00081a97) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00081a97) cell_qdial_pane_t

0x1e83,	// (0x00074775) grid_highlight_pane_cp04

0x265d,	// (0x00074f4f) thumbnail_qdial_pane_ParamLimits

0x265d,	// (0x00074f4f) thumbnail_qdial_pane

0x26b9,	// (0x00074fab) list_help_pane

0x26c2,	// (0x00074fb4) scroll_pane_cp02

0x26cb,	// (0x00074fbd) help_list_pane_t1_ParamLimits

0x26cb,	// (0x00074fbd) help_list_pane_t1

0xaaaf,	// (0x0007d3a1) bg_notes_pane_g2

0xaab7,	// (0x0007d3a9) bg_notes_pane_g3

0xaabf,	// (0x0007d3b1) notes_bg_pane_g1

0xaac7,	// (0x0007d3b9) notes_bg_pane_g4

0xaacf,	// (0x0007d3c1) notes_bg_pane_g5

0xaad7,	// (0x0007d3c9) notes_bg_pane_g6

0xaadf,	// (0x0007d3d1) notes_bg_pane_g7

0xaae7,	// (0x0007d3d9) notes_bg_pane_g8

0xaaef,	// (0x0007d3e1) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00081ab5) notes_bg_pane_g

0x26e8,	// (0x00074fda) list_notes_text_pane_ParamLimits

0x26e8,	// (0x00074fda) list_notes_text_pane

0x26fd,	// (0x00074fef) list_notes_text_pane_g1

0x0d16,	// (0x00073608) list_notes_text_pane_t1

0x2443,	// (0x00074d35) listscroll_cale_week_pane

0x2734,	// (0x00075026) bg_cale_heading_pane

0x2748,	// (0x0007503a) bg_cale_pane_cp01

0x2761,	// (0x00075053) cale_week_corner_pane

0x2777,	// (0x00075069) cale_week_day_heading_pane

0x278b,	// (0x0007507d) cale_week_scroll_pane_g1

0x279c,	// (0x0007508e) cale_week_scroll_pane_g2

0x27ad,	// (0x0007509f) cale_week_scroll_pane_g3

0x27be,	// (0x000750b0) cale_week_scroll_pane_g4

0x27cf,	// (0x000750c1) cale_week_scroll_pane_g5

0x27e2,	// (0x000750d4) cale_week_scroll_pane_g6

0x27f5,	// (0x000750e7) cale_week_scroll_pane_g7

0x2808,	// (0x000750fa) cale_week_scroll_pane_g8

0x281b,	// (0x0007510d) cale_week_scroll_pane_g9

0x282c,	// (0x0007511e) cale_week_scroll_pane_g10

0x283d,	// (0x0007512f) cale_week_scroll_pane_g11

0x284e,	// (0x00075140) cale_week_scroll_pane_g12

0x285f,	// (0x00075151) cale_week_scroll_pane_g13

0x2870,	// (0x00075162) cale_week_scroll_pane_g14

0x2881,	// (0x00075173) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00081ac4) cale_week_scroll_pane_g

0x2892,	// (0x00075184) cale_week_time_pane

0x28a5,	// (0x00075197) grid_cale_week_pane

0x28cc,	// (0x000751be) scroll_pane_cp08

0x28e6,	// (0x000751d8) cell_cale_week_pane_ParamLimits

0x28e6,	// (0x000751d8) cell_cale_week_pane

0x2926,	// (0x00075218) cale_week_day_heading_pane_t1

0x2953,	// (0x00075245) cale_week_day_heading_pane_t2

0x2980,	// (0x00075272) cale_week_day_heading_pane_t3

0x29ad,	// (0x0007529f) cale_week_day_heading_pane_t4

0x29da,	// (0x000752cc) cale_week_day_heading_pane_t5

0x2a07,	// (0x000752f9) cale_week_day_heading_pane_t6

0x2a36,	// (0x00075328) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00081ae3) cale_week_day_heading_pane_t

0x2a63,	// (0x00075355) bg_cale_side_pane

0x2a71,	// (0x00075363) cale_week_time_pane_t1

0x2a89,	// (0x0007537b) cale_week_time_pane_t2

0x2aa1,	// (0x00075393) cale_week_time_pane_t3

0x2ab9,	// (0x000753ab) cale_week_time_pane_t4

0x2ad1,	// (0x000753c3) cale_week_time_pane_t5

0x2ae9,	// (0x000753db) cale_week_time_pane_t6

0x2b01,	// (0x000753f3) cale_week_time_pane_t7

0x2b19,	// (0x0007540b) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00081af2) cale_week_time_pane_t

0x2b31,	// (0x00075423) cell_cale_week_pane_g2

0x2b4a,	// (0x0007543c) cell_cale_week_pane_g3_ParamLimits

0x2b4a,	// (0x0007543c) cell_cale_week_pane_g3

0x2b62,	// (0x00075454) grid_highlight_pane_cp07

0x2b6a,	// (0x0007545c) listscroll_gms_pane

0x2b74,	// (0x00075466) grid_gms_pane

0x2b7d,	// (0x0007546f) listscroll_gms_pane_g1

0x2b85,	// (0x00075477) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00081b03) listscroll_gms_pane_g

0x2b8d,	// (0x0007547f) scroll_pane_cp010

0x2b98,	// (0x0007548a) cell_gms_pane_ParamLimits

0x2b98,	// (0x0007548a) cell_gms_pane

0x2bab,	// (0x0007549d) cell_gms_pane_g1

0x2bb3,	// (0x000754a5) cell_gms_pane_g2

0x2bbb,	// (0x000754ad) cell_gms_pane_g3

0x2bc4,	// (0x000754b6) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00081b08) cell_gms_pane_g

0x2bcd,	// (0x000754bf) grid_highlight_pane_cp09

0x594f,	// (0x00078241) phob_pre_status_pane_g1

0x5957,	// (0x00078249) phob_pre_status_pane_g2

0x595f,	// (0x00078251) phob_pre_status_pane_g3

0x5967,	// (0x00078259) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00081ef7) phob_pre_status_pane_g

0x5977,	// (0x00078269) phob_pre_status_pane_t1

0x5985,	// (0x00078277) phob_pre_status_pane_t2

0x5995,	// (0x00078287) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00081f02) phob_pre_status_pane_t

0x1e83,	// (0x00074775) bg_list_pane_cp05

0x2bdd,	// (0x000754cf) grid_vorec_pane

0xaaf7,	// (0x0007d3e9) vorec_t1

0xab05,	// (0x0007d3f7) vorec_t2

0xab13,	// (0x0007d405) vorec_t3

0xab21,	// (0x0007d413) vorec_t4

0xab2f,	// (0x0007d421) vorec_t5

0xab3d,	// (0x0007d42f) vorec_t6

0x0006,

0xf21f,	// (0x00081b11) vorec_t

0xab59,	// (0x0007d44b) wait_bar_pane_cp01

0x2be5,	// (0x000754d7) cell_vorec_pane_ParamLimits

0x2be5,	// (0x000754d7) cell_vorec_pane

0x2bf8,	// (0x000754ea) cell_vorec_pane_g1

0x1e83,	// (0x00074775) grid_highlight_pane_cp05

0x2c1a,	// (0x0007550c) cams_zoom_pane

0x2c29,	// (0x0007551b) image_vga_pane

0x2c43,	// (0x00075535) main_camera_pane_g1

0x2c55,	// (0x00075547) main_camera_pane_g2

0x2c65,	// (0x00075557) main_camera_pane_g3

0x2c75,	// (0x00075567) main_camera_pane_g4

0x2c85,	// (0x00075577) main_camera_pane_g5

0x2c95,	// (0x00075587) main_camera_pane_g6

0x2ca7,	// (0x00075599) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00081b20) main_camera_pane_g

0x2cc3,	// (0x000755b5) main_camera_pane_t1

0x2cd9,	// (0x000755cb) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00081b31) main_camera_pane_t

0x2d13,	// (0x00075605) cams_zoom_pane_cp_ParamLimits

0x2d13,	// (0x00075605) cams_zoom_pane_cp

0x2d3b,	// (0x0007562d) image_cif_pane_ParamLimits

0x2d3b,	// (0x0007562d) image_cif_pane

0x2d76,	// (0x00075668) image_subqcif_pane

0x2d7e,	// (0x00075670) main_video_pane_g1_ParamLimits

0x2d7e,	// (0x00075670) main_video_pane_g1

0x2da2,	// (0x00075694) main_video_pane_g2_ParamLimits

0x2da2,	// (0x00075694) main_video_pane_g2

0x2dd6,	// (0x000756c8) main_video_pane_g3_ParamLimits

0x2dd6,	// (0x000756c8) main_video_pane_g3

0x2e04,	// (0x000756f6) main_video_pane_g4_ParamLimits

0x2e04,	// (0x000756f6) main_video_pane_g4

0x2e32,	// (0x00075724) main_video_pane_g5_ParamLimits

0x2e32,	// (0x00075724) main_video_pane_g5

0x2e4e,	// (0x00075740) main_video_pane_g6_ParamLimits

0x2e4e,	// (0x00075740) main_video_pane_g6

0x0006,

0xf244,	// (0x00081b36) main_video_pane_g_ParamLimits

0xf244,	// (0x00081b36) main_video_pane_g

0x2e79,	// (0x0007576b) main_video_pane_t1_ParamLimits

0x2e79,	// (0x0007576b) main_video_pane_t1

0x2ec2,	// (0x000757b4) cams_zoom_pane_g1

0x2ecb,	// (0x000757bd) cams_zoom_pane_g2

0x2ed4,	// (0x000757c6) cams_zoom_pane_g3

0x2edd,	// (0x000757cf) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00081b45) cams_zoom_pane_g

0x2efa,	// (0x000757ec) grid_cams_pane

0x2f14,	// (0x00075806) linegrid_cams_pane

0x2f28,	// (0x0007581a) cell_cams_pane_ParamLimits

0x2f28,	// (0x0007581a) cell_cams_pane

0x2f48,	// (0x0007583a) cams_burst_image_pane

0x2f50,	// (0x00075842) cell_cams_pane_g1

0x1e83,	// (0x00074775) grid_highlight_pane_cp03

0x2562,	// (0x00074e54) mp_bg_pane_g1

0x1e83,	// (0x00074775) bg_list_pane_cp03

0xbca3,	// (0x0007e595) bg_mp_pane

0xbcab,	// (0x0007e59d) grid_mp_pane

0xbcb3,	// (0x0007e5a5) media_player_g1

0xbcbb,	// (0x0007e5ad) media_player_t1

0xbcc9,	// (0x0007e5bb) media_player_t2

0xbcd7,	// (0x0007e5c9) media_player_t3

0xbce5,	// (0x0007e5d7) media_player_t4

0xbcf3,	// (0x0007e5e5) media_player_t5

0xbd01,	// (0x0007e5f3) media_player_t6

0xbd0f,	// (0x0007e601) media_player_t7

0x0006,

0xf5ef,	// (0x00081ee1) media_player_t

0xbd1d,	// (0x0007e60f) wait_bar_pane_cp02

0xf5d4,	// (0x00081ec6) main_usb_pane_t

0x5946,	// (0x00078238) cell_mp_pane

0x2562,	// (0x00074e54) cell_mp_pane_g1

0x1e83,	// (0x00074775) grid_highlight_pane_cp06

0x2f58,	// (0x0007584a) grid_skin_colour_pane

0x2f60,	// (0x00075852) list_highlight_pane_cp03

0x2f68,	// (0x0007585a) skin_g1

0x2f70,	// (0x00075862) skin_t1

0x2f7f,	// (0x00075871) skin_t2

0x0001,

0xf288,	// (0x00081b7a) skin_t

0x2f8d,	// (0x0007587f) cell_skin_colour_pane_ParamLimits

0x2f8d,	// (0x0007587f) cell_skin_colour_pane

0x2fad,	// (0x0007589f) cell_skin_colour_pane_g1

0x3016,	// (0x00075908) call_video_g1_ParamLimits

0x3016,	// (0x00075908) call_video_g1

0x3032,	// (0x00075924) call_video_g2_ParamLimits

0x3032,	// (0x00075924) call_video_g2

0x0001,

0xf28d,	// (0x00081b7f) call_video_g_ParamLimits

0xf28d,	// (0x00081b7f) call_video_g

0x3084,	// (0x00075976) call_video_uplink_pane_cp1_ParamLimits

0x3084,	// (0x00075976) call_video_uplink_pane_cp1

0x30e9,	// (0x000759db) call_video_uplink_pane_cp2

0x312b,	// (0x00075a1d) video_down_crop_pane_ParamLimits

0x312b,	// (0x00075a1d) video_down_crop_pane

0x3222,	// (0x00075b14) video_down_pane_ParamLimits

0x3222,	// (0x00075b14) video_down_pane

0x3319,	// (0x00075c0b) video_down_subqcif_pane_ParamLimits

0x3319,	// (0x00075c0b) video_down_subqcif_pane

0x3331,	// (0x00075c23) video_down_subqcif_pane_cp_ParamLimits

0x3331,	// (0x00075c23) video_down_subqcif_pane_cp

0x336c,	// (0x00075c5e) im_reading_pane_ParamLimits

0x336c,	// (0x00075c5e) im_reading_pane

0x337e,	// (0x00075c70) im_writing_pane_ParamLimits

0x337e,	// (0x00075c70) im_writing_pane

0x339c,	// (0x00075c8e) im_reading_pane_t1

0x33d5,	// (0x00075cc7) list_im_pane

0x33e6,	// (0x00075cd8) scroll_pane_cp07

0x33ff,	// (0x00075cf1) im_writing_pane_t1_ParamLimits

0x33ff,	// (0x00075cf1) im_writing_pane_t1

0x3414,	// (0x00075d06) im_writing_pane_t2_ParamLimits

0x3414,	// (0x00075d06) im_writing_pane_t2

0x0001,

0xf297,	// (0x00081b89) im_writing_pane_t_ParamLimits

0xf297,	// (0x00081b89) im_writing_pane_t

0x1e83,	// (0x00074775) input_focus_pane_cp04

0x1e83,	// (0x00074775) input_focus_pane_cp05

0x3431,	// (0x00075d23) list_im_single_pane_ParamLimits

0x3431,	// (0x00075d23) list_im_single_pane

0x3445,	// (0x00075d37) list_single_im_pane_t1

0x5906,	// (0x000781f8) blid_accuracy_pane

0x590e,	// (0x00078200) blid_compass_pane

0x5918,	// (0x0007820a) main_location_t1

0x5928,	// (0x0007821a) main_location_t2

0x5938,	// (0x0007822a) main_location_t3

0x0002,

0xf5fe,	// (0x00081ef0) main_location_t

0x1e83,	// (0x00074775) aid_levels_location

0x2562,	// (0x00074e54) blid_accuracy_pane_g1

0x2562,	// (0x00074e54) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00081beb) blid_accuracy_pane_g

0x347f,	// (0x00075d71) wml_content_pane

0x34bd,	// (0x00075daf) wml_button_pane_ParamLimits

0x34bd,	// (0x00075daf) wml_button_pane

0x34d1,	// (0x00075dc3) wml_list_single_large_pane_ParamLimits

0x34d1,	// (0x00075dc3) wml_list_single_large_pane

0x34e6,	// (0x00075dd8) wml_list_single_medium_pane_ParamLimits

0x34e6,	// (0x00075dd8) wml_list_single_medium_pane

0x34fc,	// (0x00075dee) wml_list_single_small_pane_ParamLimits

0x34fc,	// (0x00075dee) wml_list_single_small_pane

0x3514,	// (0x00075e06) wml_selection_box_pane_ParamLimits

0x3514,	// (0x00075e06) wml_selection_box_pane

0x3527,	// (0x00075e19) wml_list_single_pane_t1

0x3536,	// (0x00075e28) wml_list_single_medium_pane_t1

0x3545,	// (0x00075e37) wml_list_single_large_pane_t1

0x3554,	// (0x00075e46) input_focus_pane_cp02_ParamLimits

0x3554,	// (0x00075e46) input_focus_pane_cp02

0x3567,	// (0x00075e59) wml_selection_box_pane_g1

0x3570,	// (0x00075e62) wml_selection_box_pane_t1_ParamLimits

0x3570,	// (0x00075e62) wml_selection_box_pane_t1

0x20de,	// (0x000749d0) bg_wml_button_pane_ParamLimits

0x20de,	// (0x000749d0) bg_wml_button_pane

0x3588,	// (0x00075e7a) wml_button_pane_g1

0x3590,	// (0x00075e82) wml_button_pane_t1

0x3588,	// (0x00075e7a) wml_button_bg_pane_g1

0x35a0,	// (0x00075e92) wml_button_bg_pane_g2

0x35a8,	// (0x00075e9a) wml_button_bg_pane_g3

0x35b0,	// (0x00075ea2) wml_button_bg_pane_g4

0x35b8,	// (0x00075eaa) wml_button_bg_pane_g5

0x35c0,	// (0x00075eb2) wml_button_bg_pane_g6

0x35c8,	// (0x00075eba) wml_button_bg_pane_g7

0x35d0,	// (0x00075ec2) wml_button_bg_pane_g8

0x35d8,	// (0x00075eca) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00081b8e) wml_button_bg_pane_g

0x35e0,	// (0x00075ed2) bg_list_pane_cp02

0x35e8,	// (0x00075eda) mce_header_pane_ParamLimits

0x35e8,	// (0x00075eda) mce_header_pane

0x35fe,	// (0x00075ef0) mce_icon_pane

0x35fe,	// (0x00075ef0) mce_image_pane

0x3607,	// (0x00075ef9) mce_text_pane_ParamLimits

0x3607,	// (0x00075ef9) mce_text_pane

0x361a,	// (0x00075f0c) scroll_pane_cp03

0x34b5,	// (0x00075da7) scroll_pane_cp04

0x3624,	// (0x00075f16) scroll_pane_cp05_ParamLimits

0x3624,	// (0x00075f16) scroll_pane_cp05

0x3630,	// (0x00075f22) mce_header_field_pane_ParamLimits

0x3630,	// (0x00075f22) mce_header_field_pane

0x3647,	// (0x00075f39) mce_header_field_pane_2_ParamLimits

0x3647,	// (0x00075f39) mce_header_field_pane_2

0x365d,	// (0x00075f4f) mce_header_field_pane_3

0x3665,	// (0x00075f57) list_single_mce_message_pane_ParamLimits

0x3665,	// (0x00075f57) list_single_mce_message_pane

0x367a,	// (0x00075f6c) list_single_mce_smart_pane_ParamLimits

0x367a,	// (0x00075f6c) list_single_mce_smart_pane

0x369a,	// (0x00075f8c) input_focus_pane_cp03

0x36a3,	// (0x00075f95) list_header_data_pane

0x36ab,	// (0x00075f9d) mce_header_field_pane_t1

0x36bb,	// (0x00075fad) list_single_mce_header_pane_ParamLimits

0x36bb,	// (0x00075fad) list_single_mce_header_pane

0x36cf,	// (0x00075fc1) list_single_mce_header_pane_t1

0x36de,	// (0x00075fd0) list_single_mce_message_pane_g1

0x36e6,	// (0x00075fd8) list_single_mce_message_pane_t1

0x3712,	// (0x00076004) bg_cale_heading_pane_cp01_ParamLimits

0x3712,	// (0x00076004) bg_cale_heading_pane_cp01

0x3735,	// (0x00076027) bg_cale_pane_cp02_ParamLimits

0x3735,	// (0x00076027) bg_cale_pane_cp02

0x3758,	// (0x0007604a) cale_month_corner_pane

0x376e,	// (0x00076060) cale_month_day_heading_pane_ParamLimits

0x376e,	// (0x00076060) cale_month_day_heading_pane

0x37a1,	// (0x00076093) cale_month_pane_g1_ParamLimits

0x37a1,	// (0x00076093) cale_month_pane_g1

0x37bd,	// (0x000760af) cale_month_pane_g2_ParamLimits

0x37bd,	// (0x000760af) cale_month_pane_g2

0x37d8,	// (0x000760ca) cale_month_pane_g3_ParamLimits

0x37d8,	// (0x000760ca) cale_month_pane_g3

0x3804,	// (0x000760f6) cale_month_pane_g4_ParamLimits

0x3804,	// (0x000760f6) cale_month_pane_g4

0x3830,	// (0x00076122) cale_month_pane_g5_ParamLimits

0x3830,	// (0x00076122) cale_month_pane_g5

0x3864,	// (0x00076156) cale_month_pane_g6_ParamLimits

0x3864,	// (0x00076156) cale_month_pane_g6

0x38a0,	// (0x00076192) cale_month_pane_g7_ParamLimits

0x38a0,	// (0x00076192) cale_month_pane_g7

0x38dc,	// (0x000761ce) cale_month_pane_g8_ParamLimits

0x38dc,	// (0x000761ce) cale_month_pane_g8

0x3918,	// (0x0007620a) cale_month_pane_g9_ParamLimits

0x3918,	// (0x0007620a) cale_month_pane_g9

0x3952,	// (0x00076244) cale_month_pane_g10_ParamLimits

0x3952,	// (0x00076244) cale_month_pane_g10

0x398c,	// (0x0007627e) cale_month_pane_g11_ParamLimits

0x398c,	// (0x0007627e) cale_month_pane_g11

0x39c6,	// (0x000762b8) cale_month_pane_g12_ParamLimits

0x39c6,	// (0x000762b8) cale_month_pane_g12

0x3a00,	// (0x000762f2) cale_month_pane_g13_ParamLimits

0x3a00,	// (0x000762f2) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00081ba1) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00081ba1) cale_month_pane_g

0x3a4c,	// (0x0007633e) cale_month_week_pane

0x3a5f,	// (0x00076351) grid_cale_month_pane_ParamLimits

0x3a5f,	// (0x00076351) grid_cale_month_pane

0x3a8d,	// (0x0007637f) cale_month_day_heading_pane_t1

0x3aeb,	// (0x000763dd) cale_month_day_heading_pane_t2

0x3b50,	// (0x00076442) cale_month_day_heading_pane_t3

0x3bb5,	// (0x000764a7) cale_month_day_heading_pane_t4

0x3c1a,	// (0x0007650c) cale_month_day_heading_pane_t5

0x3c8f,	// (0x00076581) cale_month_day_heading_pane_t6

0x3d04,	// (0x000765f6) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00081bbc) cale_month_day_heading_pane_t

0x2a63,	// (0x00075355) bg_cale_side_pane_cp01

0x3d79,	// (0x0007666b) cale_month_week_pane_t1

0x3d90,	// (0x00076682) cale_month_week_pane_t2

0x3da7,	// (0x00076699) cale_month_week_pane_t3

0x3dbe,	// (0x000766b0) cale_month_week_pane_t4

0x3dd5,	// (0x000766c7) cale_month_week_pane_t5

0x3dec,	// (0x000766de) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00081bcb) cale_month_week_pane_t

0x3e03,	// (0x000766f5) cell_cale_month_pane_ParamLimits

0x3e03,	// (0x000766f5) cell_cale_month_pane

0xac48,	// (0x0007d53a) cell_cale_month_pane_g1

0x3ed9,	// (0x000767cb) cell_cale_month_pane_t1_ParamLimits

0x3ed9,	// (0x000767cb) cell_cale_month_pane_t1

0x2b62,	// (0x00075454) grid_highlight_pane_cp08

0x2562,	// (0x00074e54) main_smil_g1

0x3ef5,	// (0x000767e7) smil_status_pane

0x3efe,	// (0x000767f0) smil_text_pane

0xbbc3,	// (0x0007e4b5) bg_popup_call3_rect_pane_g8

0xbbcb,	// (0x0007e4bd) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00081e84) bg_popup_call3_rect_pane_g

0xbe45,	// (0x0007e737) smil_status_volume_pane_g1

0x3f12,	// (0x00076804) smil_status_pane_t1

0xbe78,	// (0x0007e76a) volume_smil_pane

0x3f29,	// (0x0007681b) list_smil_text_pane

0x3f33,	// (0x00076825) scroll_pane_cp011

0x3f3e,	// (0x00076830) smil_text_list_pane_t1_ParamLimits

0x3f3e,	// (0x00076830) smil_text_list_pane_t1

0xac54,	// (0x0007d546) aid_volume_smil_ParamLimits

0xac54,	// (0x0007d546) aid_volume_smil

0x2562,	// (0x00074e54) smil_volume_pane_g1

0x2562,	// (0x00074e54) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00081beb) smil_volume_pane_g

0x2443,	// (0x00074d35) listscroll_cale_day_pane

0x3f84,	// (0x00076876) bg_cale_pane

0x3f9c,	// (0x0007688e) list_cale_pane

0x3fad,	// (0x0007689f) scroll_pane_cp09

0x3fbe,	// (0x000768b0) cale_bg_pane_g1

0x3fc6,	// (0x000768b8) cale_bg_pane_g2

0x3fce,	// (0x000768c0) cale_bg_pane_g3

0x3fd6,	// (0x000768c8) cale_bg_pane_g4

0x3fde,	// (0x000768d0) cale_bg_pane_g5

0x3fe6,	// (0x000768d8) cale_bg_pane_g6

0x3fee,	// (0x000768e0) cale_bg_pane_g7

0x3ff6,	// (0x000768e8) cale_bg_pane_g8

0x3ffe,	// (0x000768f0) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00081bf0) cale_bg_pane_g

0x2be5,	// (0x000754d7) list_cale_time_pane_ParamLimits

0x2be5,	// (0x000754d7) list_cale_time_pane

0x4006,	// (0x000768f8) list_cale_time_pane_g1_ParamLimits

0x4006,	// (0x000768f8) list_cale_time_pane_g1

0x4012,	// (0x00076904) list_cale_time_pane_g2_ParamLimits

0x4012,	// (0x00076904) list_cale_time_pane_g2

0x401f,	// (0x00076911) list_cale_time_pane_g3_ParamLimits

0x401f,	// (0x00076911) list_cale_time_pane_g3

0x402d,	// (0x0007691f) list_cale_time_pane_g4_ParamLimits

0x402d,	// (0x0007691f) list_cale_time_pane_g4

0x403b,	// (0x0007692d) list_cale_time_pane_g5_ParamLimits

0x403b,	// (0x0007692d) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00081c03) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00081c03) list_cale_time_pane_g

0x4056,	// (0x00076948) list_cale_time_pane_t1_ParamLimits

0x4056,	// (0x00076948) list_cale_time_pane_t1

0x407e,	// (0x00076970) list_cale_time_pane_t2_ParamLimits

0x407e,	// (0x00076970) list_cale_time_pane_t2

0x4754,	// (0x00077046) aid_blid_cardinal_pane

0x479e,	// (0x00077090) compass_pane_t4

0x40a6,	// (0x00076998) list_cale_time_pane_t4_ParamLimits

0x40a6,	// (0x00076998) list_cale_time_pane_t4

0x47ac,	// (0x0007709e) compass_pane_t5

0x47ba,	// (0x000770ac) compass_pane_t6

0x47c8,	// (0x000770ba) compass_pane_t7

0x4848,	// (0x0007713a) navi_pane_cc_t1

0x4a61,	// (0x00077353) aid_phob_thumbnail_center_pane

0x509b,	// (0x0007798d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00081c10) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00081c10) list_cale_time_pane_t

0x1ab6,	// (0x000743a8) bg_popup_window_pane_cp02_ParamLimits

0x1ab6,	// (0x000743a8) bg_popup_window_pane_cp02

0x40ce,	// (0x000769c0) heading_pane_cp01_ParamLimits

0x40ce,	// (0x000769c0) heading_pane_cp01

0x40da,	// (0x000769cc) loc_req_pane_ParamLimits

0x40da,	// (0x000769cc) loc_req_pane

0x40ea,	// (0x000769dc) loc_type_pane_ParamLimits

0x40ea,	// (0x000769dc) loc_type_pane

0x40fc,	// (0x000769ee) loc_type_pane_t1_ParamLimits

0x40fc,	// (0x000769ee) loc_type_pane_t1

0x410e,	// (0x00076a00) loc_type_pane_t2_ParamLimits

0x410e,	// (0x00076a00) loc_type_pane_t2

0x4120,	// (0x00076a12) loc_type_pane_t3_ParamLimits

0x4120,	// (0x00076a12) loc_type_pane_t3

0x0002,

0xf325,	// (0x00081c17) loc_type_pane_t_ParamLimits

0xf325,	// (0x00081c17) loc_type_pane_t

0x4132,	// (0x00076a24) list_loc_req_pane

0x413c,	// (0x00076a2e) scroll_pane_cp012

0x4147,	// (0x00076a39) list_single_loc_request_popup_menu_pane_ParamLimits

0x4147,	// (0x00076a39) list_single_loc_request_popup_menu_pane

0x4154,	// (0x00076a46) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x4154,	// (0x00076a46) list_single_loc_request_popup_menu_pane_g1

0x4160,	// (0x00076a52) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4160,	// (0x00076a52) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00081c1e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00081c1e) list_single_loc_request_popup_menu_pane_g

0x416c,	// (0x00076a5e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x416c,	// (0x00076a5e) list_single_loc_request_popup_menu_pane_t1

0x20de,	// (0x000749d0) bg_popup_window_pane_cp03_ParamLimits

0x20de,	// (0x000749d0) bg_popup_window_pane_cp03

0x4182,	// (0x00076a74) heading_loc_req_pane_ParamLimits

0x4182,	// (0x00076a74) heading_loc_req_pane

0x418e,	// (0x00076a80) popup_dyc_status_message_window_g1_ParamLimits

0x418e,	// (0x00076a80) popup_dyc_status_message_window_g1

0x41a2,	// (0x00076a94) popup_dyc_status_message_window_t1_ParamLimits

0x41a2,	// (0x00076a94) popup_dyc_status_message_window_t1

0x41b7,	// (0x00076aa9) popup_dyc_status_message_window_t2_ParamLimits

0x41b7,	// (0x00076aa9) popup_dyc_status_message_window_t2

0x41cc,	// (0x00076abe) popup_dyc_status_message_window_t3_ParamLimits

0x41cc,	// (0x00076abe) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00081c23) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00081c23) popup_dyc_status_message_window_t

0x1e83,	// (0x00074775) bg_heading_pane_cp01

0x41e8,	// (0x00076ada) heading_loc_req_pane_g1

0x41f0,	// (0x00076ae2) heading_loc_req_pane_g2

0x41f8,	// (0x00076aea) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00081c2a) heading_loc_req_pane_g

0x4200,	// (0x00076af2) heading_loc_req_pane_t1

0x4227,	// (0x00076b19) bg_popup_sub_pane_cp01_ParamLimits

0x4227,	// (0x00076b19) bg_popup_sub_pane_cp01

0x4235,	// (0x00076b27) popup_cale_events_window_g1_ParamLimits

0x4235,	// (0x00076b27) popup_cale_events_window_g1

0x4255,	// (0x00076b47) popup_cale_events_window_g2_ParamLimits

0x4255,	// (0x00076b47) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00081c5e) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00081c5e) popup_cale_events_window_g

0x4275,	// (0x00076b67) popup_cale_events_window_t1_ParamLimits

0x4275,	// (0x00076b67) popup_cale_events_window_t1

0x4287,	// (0x00076b79) popup_cale_events_window_t2_ParamLimits

0x4287,	// (0x00076b79) popup_cale_events_window_t2

0x42c5,	// (0x00076bb7) popup_cale_events_window_t3_ParamLimits

0x42c5,	// (0x00076bb7) popup_cale_events_window_t3

0x42ff,	// (0x00076bf1) popup_cale_events_window_t4_ParamLimits

0x42ff,	// (0x00076bf1) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00081c63) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00081c63) popup_cale_events_window_t

0x4335,	// (0x00076c27) call_type_pane

0x4345,	// (0x00076c37) popup_call_status_window_g1

0x4359,	// (0x00076c4b) popup_call_status_window_g2

0x436d,	// (0x00076c5f) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00081c6c) popup_call_status_window_g

0x437c,	// (0x00076c6e) call_type_pane_g1

0x4385,	// (0x00076c77) call_type_pane_g2

0x0001,

0xf381,	// (0x00081c73) call_type_pane_g

0x1e83,	// (0x00074775) bg_popup_sub_pane_cp02

0x438e,	// (0x00076c80) listscroll_popup_wml_pane

0x4396,	// (0x00076c88) list_wml_pane

0x43a0,	// (0x00076c92) scroll_pane_cp013

0x43ab,	// (0x00076c9d) list_single_graphic_popup_wml_pane_ParamLimits

0x43ab,	// (0x00076c9d) list_single_graphic_popup_wml_pane

0x2562,	// (0x00074e54) list_single_graphic_popup_wml_pane_g1

0x43bf,	// (0x00076cb1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00081c78) list_single_graphic_popup_wml_pane_g

0x43c7,	// (0x00076cb9) list_single_graphic_popup_wml_pane_t1

0x43dd,	// (0x00076ccf) aid_call_pane

0x20d6,	// (0x000749c8) popup_clock_analogue_window_g1

0x20d6,	// (0x000749c8) popup_clock_analogue_window_g2

0xaceb,	// (0x0007d5dd) popup_clock_analogue_window_g3

0xaceb,	// (0x0007d5dd) popup_clock_analogue_window_g4

0x2562,	// (0x00074e54) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00081c7d) popup_clock_analogue_window_g

0xacf3,	// (0x0007d5e5) popup_clock_analogue_window_t1

0xad01,	// (0x0007d5f3) clock_digital_number_pane_ParamLimits

0xad01,	// (0x0007d5f3) clock_digital_number_pane

0xad0d,	// (0x0007d5ff) clock_digital_number_pane_cp02_ParamLimits

0xad0d,	// (0x0007d5ff) clock_digital_number_pane_cp02

0xad19,	// (0x0007d60b) clock_digital_number_pane_cp03_ParamLimits

0xad19,	// (0x0007d60b) clock_digital_number_pane_cp03

0xad25,	// (0x0007d617) clock_digital_number_pane_cp04_ParamLimits

0xad25,	// (0x0007d617) clock_digital_number_pane_cp04

0xad35,	// (0x0007d627) clock_digital_separator_pane_ParamLimits

0xad35,	// (0x0007d627) clock_digital_separator_pane

0xad41,	// (0x0007d633) popup_clock_digital_window_t1

0x2562,	// (0x00074e54) clock_digital_number_pane_g1

0x2562,	// (0x00074e54) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00081beb) clock_digital_number_pane_g

0x2562,	// (0x00074e54) clock_digital_separator_pane_g1

0x2562,	// (0x00074e54) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00081beb) clock_digital_separator_pane_g

0x1e83,	// (0x00074775) bg_popup_window_pane_cp04

0x43e5,	// (0x00076cd7) heading_pane_cp03

0x43ed,	// (0x00076cdf) listscroll_popup_gms_pane

0x43f5,	// (0x00076ce7) grid_large_graphic_popup_pane

0x43ff,	// (0x00076cf1) listscroll_popup_gms_pane_g1

0x4407,	// (0x00076cf9) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00081c88) listscroll_popup_gms_pane_g

0x34b5,	// (0x00075da7) scroll_pane_cp014

0x440f,	// (0x00076d01) cell_large_graphic_popup_pane_ParamLimits

0x440f,	// (0x00076d01) cell_large_graphic_popup_pane

0x4427,	// (0x00076d19) cell_large_graphic_popup_pane_g1_ParamLimits

0x4427,	// (0x00076d19) cell_large_graphic_popup_pane_g1

0x4433,	// (0x00076d25) cell_large_graphic_popup_pane_g2_ParamLimits

0x4433,	// (0x00076d25) cell_large_graphic_popup_pane_g2

0x443f,	// (0x00076d31) cell_large_graphic_popup_pane_g3_ParamLimits

0x443f,	// (0x00076d31) cell_large_graphic_popup_pane_g3

0x444c,	// (0x00076d3e) cell_large_graphic_popup_pane_g4_ParamLimits

0x444c,	// (0x00076d3e) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00081c8d) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00081c8d) cell_large_graphic_popup_pane_g

0x445c,	// (0x00076d4e) grid_highlight_pane_cp010

0x2562,	// (0x00074e54) bg_popup_call_pane_g1

0x4466,	// (0x00076d58) list_single_graphic_popup_conf_pane_ParamLimits

0x4466,	// (0x00076d58) list_single_graphic_popup_conf_pane

0x4479,	// (0x00076d6b) list_highlight_pane_cp01

0x4482,	// (0x00076d74) list_single_graphic_popup_conf_pane_g1

0x448a,	// (0x00076d7c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00081c96) list_single_graphic_popup_conf_pane_g

0x4492,	// (0x00076d84) list_single_graphic_popup_conf_pane_t1

0x44a0,	// (0x00076d92) linegrid_cams_pane_g1

0x44a9,	// (0x00076d9b) linegrid_cams_pane_g2

0x2bbb,	// (0x000754ad) linegrid_cams_pane_g3

0x44b2,	// (0x00076da4) linegrid_cams_pane_g4

0x44bb,	// (0x00076dad) linegrid_cams_pane_g5

0x44c4,	// (0x00076db6) linegrid_cams_pane_g6

0x2bc4,	// (0x000754b6) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00081c9b) linegrid_cams_pane_g

0x44cf,	// (0x00076dc1) popup_clock_analogue_window

0x44cf,	// (0x00076dc1) popup_clock_digital_window

0x1e83,	// (0x00074775) popup_phob_thumbnail_window

0x2562,	// (0x00074e54) call_video_uplink_pane_g1

0x44d8,	// (0x00076dca) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00081caa) call_video_uplink_pane_g

0x44e0,	// (0x00076dd2) video_uplink_pane

0x44e8,	// (0x00076dda) mce_image_pane_g1

0x44f2,	// (0x00076de4) mce_image_pane_g2

0x44fc,	// (0x00076dee) mce_image_pane_g3

0x4504,	// (0x00076df6) mce_image_pane_g4

0x450c,	// (0x00076dfe) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00081caf) mce_image_pane_g

0x4514,	// (0x00076e06) control_top_pane_stacon_cp01_ParamLimits

0x4514,	// (0x00076e06) control_top_pane_stacon_cp01

0x4528,	// (0x00076e1a) uni_indicator_pane_stacon_cp01_ParamLimits

0x4528,	// (0x00076e1a) uni_indicator_pane_stacon_cp01

0x4539,	// (0x00076e2b) bg_popup_sub_pane_cp03

0x4543,	// (0x00076e35) chi_dic_find_pane

0x454b,	// (0x00076e3d) listscroll_chi_dic_pane

0x4554,	// (0x00076e46) main_pane_chidic_g1

0x4567,	// (0x00076e59) chi_dic_find_pane_t1

0x4575,	// (0x00076e67) find_chidic_pane

0x457e,	// (0x00076e70) chi_dic_list_pane_ParamLimits

0x457e,	// (0x00076e70) chi_dic_list_pane

0x458f,	// (0x00076e81) scroll_pane_cp020

0x4597,	// (0x00076e89) find_chidic_pane_t1

0x1e83,	// (0x00074775) input_focus_pane_cp06

0x45a6,	// (0x00076e98) list_chi_dic_pane_ParamLimits

0x45a6,	// (0x00076e98) list_chi_dic_pane

0x45b8,	// (0x00076eaa) list_chi_dic_pane_t1_ParamLimits

0x45b8,	// (0x00076eaa) list_chi_dic_pane_t1

0x1e83,	// (0x00074775) list_highlight_pane_cp020

0x45cb,	// (0x00076ebd) bg_cale_heading_pane_g1

0x45d3,	// (0x00076ec5) bg_cale_heading_pane_g2

0x45db,	// (0x00076ecd) bg_cale_heading_pane_g3

0x45e3,	// (0x00076ed5) bg_cale_heading_pane_g4

0x45ed,	// (0x00076edf) bg_cale_heading_pane_g5

0x45f7,	// (0x00076ee9) bg_cale_heading_pane_g6

0x45ff,	// (0x00076ef1) bg_cale_heading_pane_g7

0x4607,	// (0x00076ef9) bg_cale_heading_pane_g8

0x4611,	// (0x00076f03) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00081cba) bg_cale_heading_pane_g

0x45cb,	// (0x00076ebd) bg_cale_side_pane_g1

0x461b,	// (0x00076f0d) bg_cale_side_pane_g2

0x4623,	// (0x00076f15) bg_cale_side_pane_g3

0x462b,	// (0x00076f1d) bg_cale_side_pane_g4

0x4633,	// (0x00076f25) bg_cale_side_pane_g5

0x463b,	// (0x00076f2d) bg_cale_side_pane_g6

0x4643,	// (0x00076f35) bg_cale_side_pane_g7

0x464b,	// (0x00076f3d) bg_cale_side_pane_g8

0x4653,	// (0x00076f45) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00081ccd) bg_cale_side_pane_g

0x465b,	// (0x00076f4d) popup_call_status_window_ParamLimits

0x465b,	// (0x00076f4d) popup_call_status_window

0x46a4,	// (0x00076f96) stacon_top_pane

0x46ac,	// (0x00076f9e) status_pane_ParamLimits

0x46ac,	// (0x00076f9e) status_pane

0x46c1,	// (0x00076fb3) status_small_pane

0x46c9,	// (0x00076fbb) control_pane

0x1e83,	// (0x00074775) stacon_bottom_pane

0x46d1,	// (0x00076fc3) list_single_mce_smart_pane_t1_ParamLimits

0x46d1,	// (0x00076fc3) list_single_mce_smart_pane_t1

0x46e4,	// (0x00076fd6) list_single_mce_smart_pane_t2_ParamLimits

0x46e4,	// (0x00076fd6) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00081ce0) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00081ce0) list_single_mce_smart_pane_t

0x4703,	// (0x00076ff5) compass_pane

0x470c,	// (0x00076ffe) main_location2_pane_t1

0x471e,	// (0x00077010) main_location2_pane_t2

0x4730,	// (0x00077022) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00081ce5) main_location2_pane_t

0x4774,	// (0x00077066) compass_pane_g1_ParamLimits

0x4774,	// (0x00077066) compass_pane_g1

0x4780,	// (0x00077072) compass_pane_t1

0x478f,	// (0x00077081) compass_pane_t2

0x0005,

0xf3fc,	// (0x00081cee) compass_pane_t

0x47d6,	// (0x000770c8) text_secondary_cp61

0x483f,	// (0x00077131) navi_pane_cams_g5

0x48b9,	// (0x000771ab) navi_pane_im_t1

0x48c7,	// (0x000771b9) navi_pane_mp_g1_ParamLimits

0x48c7,	// (0x000771b9) navi_pane_mp_g1

0x48db,	// (0x000771cd) navi_pane_mp_g2_ParamLimits

0x48db,	// (0x000771cd) navi_pane_mp_g2

0x48e7,	// (0x000771d9) navi_pane_mp_g3_ParamLimits

0x48e7,	// (0x000771d9) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00081d02) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00081d02) navi_pane_mp_g

0x48f3,	// (0x000771e5) navi_pane_mp_t1

0x4901,	// (0x000771f3) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00081d09) navi_pane_mp_t

0x49aa,	// (0x0007729c) navi_pane_vt_g1

0x48f3,	// (0x000771e5) navi_pane_vt_t1

0x49b2,	// (0x000772a4) navi_slider_pane

0x49ba,	// (0x000772ac) zooming_pane

0x49c2,	// (0x000772b4) navi_slider_pane_g1

0xad5e,	// (0x0007d650) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00081d10) navi_slider_pane_g

0x49e6,	// (0x000772d8) aid_levels_zoom

0x49ee,	// (0x000772e0) zooming_pane_g1

0x49f6,	// (0x000772e8) zooming_pane_g2

0x49f6,	// (0x000772e8) zooming_pane_g3

0x0002,

0xf42d,	// (0x00081d1f) zooming_pane_g

0x49fe,	// (0x000772f0) level_10_zoom

0x4a07,	// (0x000772f9) level_11_zoom

0x4a10,	// (0x00077302) level_1_zoom

0x4a19,	// (0x0007730b) level_2_zoom

0x4a22,	// (0x00077314) level_3_zoom

0x4a2b,	// (0x0007731d) level_4_zoom

0x4a34,	// (0x00077326) level_5_zoom

0x4a3d,	// (0x0007732f) level_6_zoom

0x4a46,	// (0x00077338) level_7_zoom

0x4a4f,	// (0x00077341) level_8_zoom

0x4a58,	// (0x0007734a) level_9_zoom

0x4a69,	// (0x0007735b) popup_phob_thumbnail_window_g1

0x4a71,	// (0x00077363) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00081d26) popup_phob_thumbnail_window_g

0xbd25,	// (0x0007e617) level_1_location

0xbd2d,	// (0x0007e61f) level_2_location

0xbd35,	// (0x0007e627) level_3_location

0xbd3d,	// (0x0007e62f) level_4_location

0x49ba,	// (0x000772ac) level_5_location

0x4a79,	// (0x0007736b) mce_icon_pane_g1

0x4a81,	// (0x00077373) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00081d2b) mce_icon_pane_g

0x4a89,	// (0x0007737b) main_mup_pane_g1_ParamLimits

0x4a89,	// (0x0007737b) main_mup_pane_g1

0x4a9f,	// (0x00077391) main_mup_pane_g2_ParamLimits

0x4a9f,	// (0x00077391) main_mup_pane_g2

0x4ab7,	// (0x000773a9) main_mup_pane_g3_ParamLimits

0x4ab7,	// (0x000773a9) main_mup_pane_g3

0x4acf,	// (0x000773c1) main_mup_pane_g4_ParamLimits

0x4acf,	// (0x000773c1) main_mup_pane_g4

0x4ae7,	// (0x000773d9) main_mup_pane_g5_ParamLimits

0x4ae7,	// (0x000773d9) main_mup_pane_g5

0x4b03,	// (0x000773f5) main_mup_pane_g6_ParamLimits

0x4b03,	// (0x000773f5) main_mup_pane_g6

0x4b1b,	// (0x0007740d) main_mup_pane_g7_ParamLimits

0x4b1b,	// (0x0007740d) main_mup_pane_g7

0x4b33,	// (0x00077425) main_mup_pane_g8_ParamLimits

0x4b33,	// (0x00077425) main_mup_pane_g8

0x4b4d,	// (0x0007743f) main_mup_pane_g9_ParamLimits

0x4b4d,	// (0x0007743f) main_mup_pane_g9

0x4b67,	// (0x00077459) main_mup_pane_g10_ParamLimits

0x4b67,	// (0x00077459) main_mup_pane_g10

0x4b81,	// (0x00077473) main_mup_pane_g11_ParamLimits

0x4b81,	// (0x00077473) main_mup_pane_g11

0x4b95,	// (0x00077487) main_mup_pane_g12_ParamLimits

0x4b95,	// (0x00077487) main_mup_pane_g12

0x4bab,	// (0x0007749d) main_mup_pane_g13_ParamLimits

0x4bab,	// (0x0007749d) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00081d30) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00081d30) main_mup_pane_g

0x4bbf,	// (0x000774b1) main_mup_pane_t1_ParamLimits

0x4bbf,	// (0x000774b1) main_mup_pane_t1

0x4bd9,	// (0x000774cb) main_mup_pane_t2_ParamLimits

0x4bd9,	// (0x000774cb) main_mup_pane_t2

0x4bf1,	// (0x000774e3) main_mup_pane_t3_ParamLimits

0x4bf1,	// (0x000774e3) main_mup_pane_t3

0x4c09,	// (0x000774fb) main_mup_pane_t4_ParamLimits

0x4c09,	// (0x000774fb) main_mup_pane_t4

0x4c27,	// (0x00077519) main_mup_pane_t5_ParamLimits

0x4c27,	// (0x00077519) main_mup_pane_t5

0x4c3c,	// (0x0007752e) main_mup_pane_t6_ParamLimits

0x4c3c,	// (0x0007752e) main_mup_pane_t6

0x0005,

0xf459,	// (0x00081d4b) main_mup_pane_t_ParamLimits

0xf459,	// (0x00081d4b) main_mup_pane_t

0x4c4e,	// (0x00077540) mup_progress_pane_ParamLimits

0x4c4e,	// (0x00077540) mup_progress_pane

0x4c5a,	// (0x0007754c) mup_visualizer_pane_ParamLimits

0x4c5a,	// (0x0007754c) mup_visualizer_pane

0x4c8a,	// (0x0007757c) mup_volume_pane_ParamLimits

0x4c8a,	// (0x0007757c) mup_volume_pane

0x4ca8,	// (0x0007759a) mup_visualizer_pane_g1_ParamLimits

0x4ca8,	// (0x0007759a) mup_visualizer_pane_g1

0x4ca8,	// (0x0007759a) mup_visualizer_pane_g2_ParamLimits

0x4ca8,	// (0x0007759a) mup_visualizer_pane_g2

0x4774,	// (0x00077066) mup_visualizer_pane_g3_ParamLimits

0x4774,	// (0x00077066) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00081d58) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00081d58) mup_visualizer_pane_g

0x2562,	// (0x00074e54) mup_volume_pane_g1

0x4cbe,	// (0x000775b0) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00081d5f) mup_volume_pane_g

0x2562,	// (0x00074e54) mup_progress_pane_g1

0x4cc7,	// (0x000775b9) mup_progress_pane_g2

0x4cd0,	// (0x000775c2) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00081d64) mup_progress_pane_g

0x1e83,	// (0x00074775) bg_popup_window_pane_cp05

0x4cd9,	// (0x000775cb) heading_pane_cp02_ParamLimits

0x4cd9,	// (0x000775cb) heading_pane_cp02

0x4cf3,	// (0x000775e5) list_popup_blid_pane

0x4cfb,	// (0x000775ed) list_blid_sat_info_pane_ParamLimits

0x4cfb,	// (0x000775ed) list_blid_sat_info_pane

0x4d0e,	// (0x00077600) list_blid_sat_info_pane_g1

0x4d16,	// (0x00077608) list_blid_sat_info_pane_t1

0x4e1c,	// (0x0007770e) mup_equalizer_pane_ParamLimits

0x4e1c,	// (0x0007770e) mup_equalizer_pane

0x4e35,	// (0x00077727) mup_equalizer_pane_cp1_ParamLimits

0x4e35,	// (0x00077727) mup_equalizer_pane_cp1

0x4e52,	// (0x00077744) mup_equalizer_pane_cp2_ParamLimits

0x4e52,	// (0x00077744) mup_equalizer_pane_cp2

0x4e6f,	// (0x00077761) mup_equalizer_pane_cp3_ParamLimits

0x4e6f,	// (0x00077761) mup_equalizer_pane_cp3

0x4e90,	// (0x00077782) mup_equalizer_pane_cp4_ParamLimits

0x4e90,	// (0x00077782) mup_equalizer_pane_cp4

0x4eb1,	// (0x000777a3) mup_equalizer_pane_cp5

0x4ec5,	// (0x000777b7) mup_equalizer_pane_cp6

0x4ed9,	// (0x000777cb) mup_equalizer_pane_cp7

0xbc43,	// (0x0007e535) bg_popup_call_poc_act_pane_g9

0xbc4b,	// (0x0007e53d) bg_popup_call_poc_act_pane_g10

0xbc53,	// (0x0007e545) bg_popup_call_poc_act_pane_g11

0x000a,

0x20de,	// (0x000749d0) mup_scale_pane

0x2562,	// (0x00074e54) mup_scale_pane_g1

0x4eed,	// (0x000777df) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00081d80) mup_scale_pane_g

0x4f23,	// (0x00077815) msg_data_pane

0x4f2b,	// (0x0007781d) scroll_pane_cp017

0x0dd7,	// (0x000736c9) bg_list_pane_cp04_ParamLimits

0x0dd7,	// (0x000736c9) bg_list_pane_cp04

0x4f33,	// (0x00077825) msg_data_pane_g1

0x4f3b,	// (0x0007782d) msg_data_pane_g2

0x4f45,	// (0x00077837) msg_data_pane_g3

0x4f4d,	// (0x0007783f) msg_data_pane_g4

0x4f55,	// (0x00077847) msg_data_pane_g5

0x4f5d,	// (0x0007784f) msg_data_pane_g6

0x4f65,	// (0x00077857) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00081d8f) msg_data_pane_g

0x0df7,	// (0x000736e9) msg_text_pane_ParamLimits

0x0df7,	// (0x000736e9) msg_text_pane

0x4f6d,	// (0x0007785f) qrid_highlight_pane_cp011_ParamLimits

0x4f6d,	// (0x0007785f) qrid_highlight_pane_cp011

0x1e83,	// (0x00074775) msg_body_pane

0x1e83,	// (0x00074775) msg_header_pane

0x4f8c,	// (0x0007787e) input_focus_pane_cp07

0x0e27,	// (0x00073719) msg_header_pane_t1_ParamLimits

0x0e27,	// (0x00073719) msg_header_pane_t1

0x0e3b,	// (0x0007372d) msg_header_pane_t2_ParamLimits

0x0e3b,	// (0x0007372d) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00081da3) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00081da3) msg_header_pane_t

0x4fa1,	// (0x00077893) msg_body_pane_g1

0x0e4d,	// (0x0007373f) msg_body_pane_t1_ParamLimits

0x0e4d,	// (0x0007373f) msg_body_pane_t1

0x0e7e,	// (0x00073770) msg_body_pane_t2_ParamLimits

0x0e7e,	// (0x00073770) msg_body_pane_t2

0x0e90,	// (0x00073782) msg_body_pane_t3_ParamLimits

0x0e90,	// (0x00073782) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00081da8) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00081da8) msg_body_pane_t

0x4fe3,	// (0x000778d5) main_viewer_pane_g1_ParamLimits

0x4fe3,	// (0x000778d5) main_viewer_pane_g1

0x4ff1,	// (0x000778e3) main_viewer_pane_g2_ParamLimits

0x4ff1,	// (0x000778e3) main_viewer_pane_g2

0x4fff,	// (0x000778f1) main_viewer_pane_g3_ParamLimits

0x4fff,	// (0x000778f1) main_viewer_pane_g3

0x500e,	// (0x00077900) main_viewer_pane_g4_ParamLimits

0x500e,	// (0x00077900) main_viewer_pane_g4

0xad88,	// (0x0007d67a) main_viewer_pane_g5_ParamLimits

0xad88,	// (0x0007d67a) main_viewer_pane_g5

0xad88,	// (0x0007d67a) main_viewer_pane_g7_ParamLimits

0xad88,	// (0x0007d67a) main_viewer_pane_g7

0xad9a,	// (0x0007d68c) main_viewer_pane_g8_ParamLimits

0xad9a,	// (0x0007d68c) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00081db8) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00081db8) main_viewer_pane_g

0x501d,	// (0x0007790f) viewer_content_pane_ParamLimits

0x501d,	// (0x0007790f) viewer_content_pane

0x5058,	// (0x0007794a) main_postcard_pane_g1_ParamLimits

0x5058,	// (0x0007794a) main_postcard_pane_g1

0x506e,	// (0x00077960) main_postcard_pane_g2_ParamLimits

0x506e,	// (0x00077960) main_postcard_pane_g2

0x5084,	// (0x00077976) main_postcard_pane_g3_ParamLimits

0x5084,	// (0x00077976) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00081dc9) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00081dc9) main_postcard_pane_g

0x509b,	// (0x0007798d) main_postcard_pane_g4

0xbe58,	// (0x0007e74a) smil_status_volume_pane_g2

0x50de,	// (0x000779d0) postcard_pane_ParamLimits

0x50de,	// (0x000779d0) postcard_pane

0x5120,	// (0x00077a12) postcard_pane_g1_ParamLimits

0x5120,	// (0x00077a12) postcard_pane_g1

0x512e,	// (0x00077a20) postcard_pane_g2_ParamLimits

0x512e,	// (0x00077a20) postcard_pane_g2

0x513a,	// (0x00077a2c) postcard_pane_g3_ParamLimits

0x513a,	// (0x00077a2c) postcard_pane_g3

0x5146,	// (0x00077a38) postcard_pane_g4_ParamLimits

0x5146,	// (0x00077a38) postcard_pane_g4

0x5154,	// (0x00077a46) postcard_pane_g5_ParamLimits

0x5154,	// (0x00077a46) postcard_pane_g5

0x5169,	// (0x00077a5b) postcard_pane_g6_ParamLimits

0x5169,	// (0x00077a5b) postcard_pane_g6

0x5120,	// (0x00077a12) postcard_pane_g7_ParamLimits

0x5120,	// (0x00077a12) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00081dd6) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00081dd6) postcard_pane_g

0x517d,	// (0x00077a6f) main_mp2_pane_g1_ParamLimits

0x517d,	// (0x00077a6f) main_mp2_pane_g1

0x5189,	// (0x00077a7b) main_mp2_pane_g2_ParamLimits

0x5189,	// (0x00077a7b) main_mp2_pane_g2

0x5195,	// (0x00077a87) main_mp2_pane_g3_ParamLimits

0x5195,	// (0x00077a87) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00081de5) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00081de5) main_mp2_pane_g

0x51a1,	// (0x00077a93) main_mp2_pane_t1_ParamLimits

0x51a1,	// (0x00077a93) main_mp2_pane_t1

0x51b6,	// (0x00077aa8) main_mp2_pane_t2_ParamLimits

0x51b6,	// (0x00077aa8) main_mp2_pane_t2

0x51c8,	// (0x00077aba) main_mp2_pane_t3_ParamLimits

0x51c8,	// (0x00077aba) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00081dec) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00081dec) main_mp2_pane_t

0x51da,	// (0x00077acc) pec_content_pane_ParamLimits

0x51da,	// (0x00077acc) pec_content_pane

0x34b5,	// (0x00075da7) scroll_pane_cp015

0x51ec,	// (0x00077ade) pec_attribute_pane_ParamLimits

0x51ec,	// (0x00077ade) pec_attribute_pane

0x51fc,	// (0x00077aee) pec_content_pane_g1_ParamLimits

0x51fc,	// (0x00077aee) pec_content_pane_g1

0x5208,	// (0x00077afa) pec_content_pane_t1_ParamLimits

0x5208,	// (0x00077afa) pec_content_pane_t1

0x521a,	// (0x00077b0c) pec_content_pane_t2_ParamLimits

0x521a,	// (0x00077b0c) pec_content_pane_t2

0x0001,

0xf501,	// (0x00081df3) pec_content_pane_t_ParamLimits

0xf501,	// (0x00081df3) pec_content_pane_t

0x522c,	// (0x00077b1e) list_single_graphic_pane_cp01_ParamLimits

0x522c,	// (0x00077b1e) list_single_graphic_pane_cp01

0x20de,	// (0x000749d0) bg_popup_sub_pane_cp04

0x5241,	// (0x00077b33) popup_mup_playback_window_g1

0x524d,	// (0x00077b3f) popup_mup_playback_window_t1

0x5262,	// (0x00077b54) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00081df8) popup_mup_playback_window_t

0x52b7,	// (0x00077ba9) main_image_pane_g1_ParamLimits

0x52b7,	// (0x00077ba9) main_image_pane_g1

0x5394,	// (0x00077c86) scroll_pane_cp018_ParamLimits

0x5394,	// (0x00077c86) scroll_pane_cp018

0x53ac,	// (0x00077c9e) scroll_pane_cp016_ParamLimits

0x53ac,	// (0x00077c9e) scroll_pane_cp016

0x53e0,	// (0x00077cd2) smil2_image_pane_ParamLimits

0x53e0,	// (0x00077cd2) smil2_image_pane

0x5410,	// (0x00077d02) smil2_root_pane_ParamLimits

0x5410,	// (0x00077d02) smil2_root_pane

0x5448,	// (0x00077d3a) smil2_text_pane_ParamLimits

0x5448,	// (0x00077d3a) smil2_text_pane

0x1e83,	// (0x00074775) bg_list_pane_cp06

0x54d0,	// (0x00077dc2) grid_radio_pane

0x1e83,	// (0x00074775) bg_popup_window_pane_cp06

0x54d8,	// (0x00077dca) main_fmradio_pane_t1

0x43e5,	// (0x00076cd7) heading_pane_cp04

0x54e6,	// (0x00077dd8) main_fmradio_pane_t2

0xbc5b,	// (0x0007e54d) popup_cale_lunar_info_window_g1

0x54f4,	// (0x00077de6) main_fmradio_pane_t3

0xbc63,	// (0x0007e555) popup_cale_lunar_info_window_g2

0x5502,	// (0x00077df4) main_fmradio_pane_t4

0x0001,

0x5510,	// (0x00077e02) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00081ed3) popup_cale_lunar_info_window_g

0xf51b,	// (0x00081e0d) main_fmradio_pane_t

0x551e,	// (0x00077e10) wait_bar_pane_cp03

0x5526,	// (0x00077e18) cell_fmradio_pane_ParamLimits

0x5526,	// (0x00077e18) cell_fmradio_pane

0x5120,	// (0x00077a12) cell_fmradio_pane_g1_ParamLimits

0x5120,	// (0x00077a12) cell_fmradio_pane_g1

0x1e83,	// (0x00074775) grid_highlight_pane_cp011

0x5539,	// (0x00077e2b) poc_content_pane_ParamLimits

0x5539,	// (0x00077e2b) poc_content_pane

0x554b,	// (0x00077e3d) scroll_pane_cp019

0x5553,	// (0x00077e45) popup_call_poc_act_window_ParamLimits

0x5553,	// (0x00077e45) popup_call_poc_act_window

0x5577,	// (0x00077e69) popup_call_poc_inact_window_ParamLimits

0x5577,	// (0x00077e69) popup_call_poc_inact_window

0xf5b8,	// (0x00081eaa) bg_popup_call_poc_act_pane_g

0xbbd3,	// (0x0007e4c5) bg_popup_call_poc_inact_pane_g1

0xbbdb,	// (0x0007e4cd) bg_popup_call_poc_inact_pane_g2

0x5590,	// (0x00077e82) popup_call_poc_act_window_g2

0xbbe3,	// (0x0007e4d5) bg_popup_call_poc_inact_pane_g3

0xbbeb,	// (0x0007e4dd) bg_popup_call_poc_inact_pane_g4

0xbbf3,	// (0x0007e4e5) bg_popup_call_poc_inact_pane_g5

0x5598,	// (0x00077e8a) popup_call_poc_act_window_t1_ParamLimits

0x5598,	// (0x00077e8a) popup_call_poc_act_window_t1

0x55c0,	// (0x00077eb2) popup_call_poc_act_window_t2_ParamLimits

0x55c0,	// (0x00077eb2) popup_call_poc_act_window_t2

0x55e8,	// (0x00077eda) popup_call_poc_act_window_t3_ParamLimits

0x55e8,	// (0x00077eda) popup_call_poc_act_window_t3

0x5610,	// (0x00077f02) popup_call_poc_act_window_t4_ParamLimits

0x5610,	// (0x00077f02) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00081e18) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00081e18) popup_call_poc_act_window_t

0xbbfb,	// (0x0007e4ed) bg_popup_call_poc_inact_pane_g6

0xbc03,	// (0x0007e4f5) bg_popup_call_poc_inact_pane_g7

0xbc0b,	// (0x0007e4fd) bg_popup_call_poc_inact_pane_g8

0x5622,	// (0x00077f14) popup_call_poc_inact_window_g2

0xbc13,	// (0x0007e505) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00081e97) bg_popup_call_poc_inact_pane_g

0x562a,	// (0x00077f1c) popup_call_poc_inact_window_t1_ParamLimits

0x562a,	// (0x00077f1c) popup_call_poc_inact_window_t1

0xadb2,	// (0x0007d6a4) popup_call_poc_inact_window_t2_ParamLimits

0xadb2,	// (0x0007d6a4) popup_call_poc_inact_window_t2

0xadc7,	// (0x0007d6b9) popup_call_poc_inact_window_t3_ParamLimits

0xadc7,	// (0x0007d6b9) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00081e21) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00081e21) popup_call_poc_inact_window_t

0xbdcb,	// (0x0007e6bd) context_pane_ParamLimits

0x5e59,	// (0x0007874b) signal_pane_ParamLimits

0x49ba,	// (0x000772ac) main_call2_pane

0xbdb9,	// (0x0007e6ab) popup_phob_thumbnail2_window_ParamLimits

0xbdb9,	// (0x0007e6ab) popup_phob_thumbnail2_window

0xad70,	// (0x0007d662) aid_hotspot_pointer_arrow_pane

0xad78,	// (0x0007d66a) aid_hotspot_pointer_hand_pane

0x596f,	// (0x00078261) phob_pre_status_pane_g5

0x2c1a,	// (0x0007550c) cams_zoom_pane_ParamLimits

0x2c29,	// (0x0007551b) image_vga_pane_ParamLimits

0x2c43,	// (0x00075535) main_camera_pane_g1_ParamLimits

0x2c55,	// (0x00075547) main_camera_pane_g2_ParamLimits

0x2c65,	// (0x00075557) main_camera_pane_g3_ParamLimits

0x2c75,	// (0x00075567) main_camera_pane_g4_ParamLimits

0x2c85,	// (0x00075577) main_camera_pane_g5_ParamLimits

0x2c95,	// (0x00075587) main_camera_pane_g6_ParamLimits

0x2ca7,	// (0x00075599) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00081b20) main_camera_pane_g_ParamLimits

0x2cc3,	// (0x000755b5) main_camera_pane_t1_ParamLimits

0x2cd9,	// (0x000755cb) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00081b31) main_camera_pane_t_ParamLimits

0x20de,	// (0x000749d0) bg_popup_preview_window_pane_cp01_ParamLimits

0x20de,	// (0x000749d0) bg_popup_preview_window_pane_cp01

0xaddc,	// (0x0007d6ce) popup_phob_thumbnail2_window_g1_ParamLimits

0xaddc,	// (0x0007d6ce) popup_phob_thumbnail2_window_g1

0x1e83,	// (0x00074775) call2_cli_visual_pane

0x565a,	// (0x00077f4c) popup_call2_audio_conf_window_ParamLimits

0x565a,	// (0x00077f4c) popup_call2_audio_conf_window

0x567a,	// (0x00077f6c) popup_call2_audio_first_window_ParamLimits

0x567a,	// (0x00077f6c) popup_call2_audio_first_window

0x5710,	// (0x00078002) popup_call2_audio_in_window_ParamLimits

0x5710,	// (0x00078002) popup_call2_audio_in_window

0x5758,	// (0x0007804a) popup_call2_audio_out_window_ParamLimits

0x5758,	// (0x0007804a) popup_call2_audio_out_window

0x57c2,	// (0x000780b4) popup_call2_audio_second_window_ParamLimits

0x57c2,	// (0x000780b4) popup_call2_audio_second_window

0x5828,	// (0x0007811a) popup_call2_audio_wait_window_ParamLimits

0x5828,	// (0x0007811a) popup_call2_audio_wait_window

0x1e83,	// (0x00074775) bg_popup_call2_act_pane_cp03

0x20c0,	// (0x000749b2) list_conf_pane_cp

0xade8,	// (0x0007d6da) popup_call2_audio_conf_window_t1

0x4466,	// (0x00076d58) list_single_graphic_popup_conf2_pane_ParamLimits

0x4466,	// (0x00076d58) list_single_graphic_popup_conf2_pane

0x4479,	// (0x00076d6b) list_highlight_pane_cp04

0xadf6,	// (0x0007d6e8) list_single_graphic_popup_conf2_pane_g1

0x448a,	// (0x00076d7c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00081e28) list_single_graphic_popup_conf2_pane_g

0xae00,	// (0x0007d6f2) list_single_graphic_popup_conf2_pane_t1

0xae0e,	// (0x0007d700) bg_popup_call2_act_pane_cp01_ParamLimits

0xae0e,	// (0x0007d700) bg_popup_call2_act_pane_cp01

0xae98,	// (0x0007d78a) call_type_pane_cp05_ParamLimits

0xae98,	// (0x0007d78a) call_type_pane_cp05

0xaeec,	// (0x0007d7de) popup_call2_audio_second_window_g1_ParamLimits

0xaeec,	// (0x0007d7de) popup_call2_audio_second_window_g1

0xaf40,	// (0x0007d832) popup_call2_audio_second_window_g2_ParamLimits

0xaf40,	// (0x0007d832) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00081e2d) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00081e2d) popup_call2_audio_second_window_g

0xafa5,	// (0x0007d897) popup_call2_audio_second_window_t1_ParamLimits

0xafa5,	// (0x0007d897) popup_call2_audio_second_window_t1

0xb060,	// (0x0007d952) popup_call2_audio_second_window_t2_ParamLimits

0xb060,	// (0x0007d952) popup_call2_audio_second_window_t2

0xb0b3,	// (0x0007d9a5) popup_call2_audio_second_window_t3_ParamLimits

0xb0b3,	// (0x0007d9a5) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00081e34) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00081e34) popup_call2_audio_second_window_t

0x1e83,	// (0x00074775) bg_popup_call2_in_pane_cp02

0x1e8d,	// (0x0007477f) call_type_pane_cp04

0x1e95,	// (0x00074787) popup_call2_audio_wait_window_g1

0x1e9d,	// (0x0007478f) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00081a0d) popup_call2_audio_wait_window_g

0x1ea5,	// (0x00074797) popup_call2_audio_wait_window_t3

0xb1a6,	// (0x0007da98) bg_popup_call2_act_pane_ParamLimits

0xb1a6,	// (0x0007da98) bg_popup_call2_act_pane

0xb266,	// (0x0007db58) call_type_pane_cp03_ParamLimits

0xb266,	// (0x0007db58) call_type_pane_cp03

0xb2ca,	// (0x0007dbbc) popup_call2_audio_first_window_g1_ParamLimits

0xb2ca,	// (0x0007dbbc) popup_call2_audio_first_window_g1

0xb33a,	// (0x0007dc2c) popup_call2_audio_first_window_g2_ParamLimits

0xb33a,	// (0x0007dc2c) popup_call2_audio_first_window_g2

0x4ca8,	// (0x0007759a) popup_call2_audio_first_window_g3_ParamLimits

0x4ca8,	// (0x0007759a) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00081e3d) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00081e3d) popup_call2_audio_first_window_g

0xb418,	// (0x0007dd0a) popup_call2_audio_first_window_t1_ParamLimits

0xb418,	// (0x0007dd0a) popup_call2_audio_first_window_t1

0xb51b,	// (0x0007de0d) popup_call2_audio_first_window_t4_ParamLimits

0xb51b,	// (0x0007de0d) popup_call2_audio_first_window_t4

0xb5fe,	// (0x0007def0) popup_call2_audio_first_window_t5_ParamLimits

0xb5fe,	// (0x0007def0) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00081e48) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00081e48) popup_call2_audio_first_window_t

0x20d6,	// (0x000749c8) bg_popup_call2_act_pane_g1

0xbc6b,	// (0x0007e55d) popup_cale_lunar_info_window_t1

0xbc79,	// (0x0007e56b) popup_cale_lunar_info_window_t2

0xbc87,	// (0x0007e579) popup_cale_lunar_info_window_t3

0x1e83,	// (0x00074775) bg_popup_call2_bubble_pane

0xb6ff,	// (0x0007dff1) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6ff,	// (0x0007dff1) bg_popup_call2_in_pane_cp01

0x1b3b,	// (0x0007442d) call_type_pane_cp02

0xb747,	// (0x0007e039) popup_call2_audio_out_window_g1_ParamLimits

0xb747,	// (0x0007e039) popup_call2_audio_out_window_g1

0xb773,	// (0x0007e065) popup_call2_audio_out_window_g2_ParamLimits

0xb773,	// (0x0007e065) popup_call2_audio_out_window_g2

0xb79b,	// (0x0007e08d) popup_call2_audio_out_window_g3_ParamLimits

0xb79b,	// (0x0007e08d) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00081e51) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00081e51) popup_call2_audio_out_window_g

0xb7d6,	// (0x0007e0c8) popup_call2_audio_out_window_t1_ParamLimits

0xb7d6,	// (0x0007e0c8) popup_call2_audio_out_window_t1

0xb835,	// (0x0007e127) popup_call2_audio_out_window_t2_ParamLimits

0xb835,	// (0x0007e127) popup_call2_audio_out_window_t2

0xb889,	// (0x0007e17b) popup_call2_audio_out_window_t3_ParamLimits

0xb889,	// (0x0007e17b) popup_call2_audio_out_window_t3

0xb89f,	// (0x0007e191) popup_call2_audio_out_window_t4_ParamLimits

0xb89f,	// (0x0007e191) popup_call2_audio_out_window_t4

0xb8b5,	// (0x0007e1a7) popup_call2_audio_out_window_t5_ParamLimits

0xb8b5,	// (0x0007e1a7) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00081e5a) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00081e5a) popup_call2_audio_out_window_t

0xb919,	// (0x0007e20b) bg_popup_call2_in_pane_ParamLimits

0xb919,	// (0x0007e20b) bg_popup_call2_in_pane

0xb975,	// (0x0007e267) popup_call2_audio_in_window_g1_ParamLimits

0xb975,	// (0x0007e267) popup_call2_audio_in_window_g1

0xb9ad,	// (0x0007e29f) popup_call2_audio_in_window_g2_ParamLimits

0xb9ad,	// (0x0007e29f) popup_call2_audio_in_window_g2

0xb9e5,	// (0x0007e2d7) popup_call2_audio_in_window_g3_ParamLimits

0xb9e5,	// (0x0007e2d7) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00081e67) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00081e67) popup_call2_audio_in_window_g

0xba3d,	// (0x0007e32f) popup_call2_audio_in_window_t1_ParamLimits

0xba3d,	// (0x0007e32f) popup_call2_audio_in_window_t1

0xbabd,	// (0x0007e3af) popup_call2_audio_in_window_t2_ParamLimits

0xbabd,	// (0x0007e3af) popup_call2_audio_in_window_t2

0xbb3d,	// (0x0007e42f) popup_call2_audio_in_window_t3_ParamLimits

0xbb3d,	// (0x0007e42f) popup_call2_audio_in_window_t3

0xbb57,	// (0x0007e449) popup_call2_audio_in_window_t4_ParamLimits

0xbb57,	// (0x0007e449) popup_call2_audio_in_window_t4

0xbb69,	// (0x0007e45b) popup_call2_audio_in_window_t5_ParamLimits

0xbb69,	// (0x0007e45b) popup_call2_audio_in_window_t5

0xbb7e,	// (0x0007e470) popup_call2_audio_in_window_t6_ParamLimits

0xbb7e,	// (0x0007e470) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00081e70) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00081e70) popup_call2_audio_in_window_t

0x20d6,	// (0x000749c8) bg_popup_call2_in_pane_g1

0xbc95,	// (0x0007e587) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00081ed8) popup_cale_lunar_info_window_t

0x20de,	// (0x000749d0) bg_popup_call2_rect_pane_ParamLimits

0x20de,	// (0x000749d0) bg_popup_call2_rect_pane

0x1e83,	// (0x00074775) call2_cli_visual_graphic_pane

0x1e83,	// (0x00074775) call2_cli_visual_text_pane

0xbe6b,	// (0x0007e75d) smil_status_volume_pane_g3

0x0002,

0x2562,	// (0x00074e54) call2_cli_visual_graphic_pane_g1

0x2562,	// (0x00074e54) call2_cli_visual_graphic_pane_g2

0x2562,	// (0x00074e54) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00081e7d) call2_cli_visual_graphic_pane_g

0xbb93,	// (0x0007e485) bg_popup_call2_rect_pane_g1

0x26b1,	// (0x00074fa3) bg_popup_call2_rect_pane_g2

0xbb9b,	// (0x0007e48d) bg_popup_call2_rect_pane_g3

0xbba3,	// (0x0007e495) bg_popup_call2_rect_pane_g4

0xbbab,	// (0x0007e49d) bg_popup_call2_rect_pane_g5

0xbbb3,	// (0x0007e4a5) bg_popup_call2_rect_pane_g6

0xbbbb,	// (0x0007e4ad) bg_popup_call2_rect_pane_g7

0xbbc3,	// (0x0007e4b5) bg_popup_call2_rect_pane_g8

0xbbcb,	// (0x0007e4bd) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00081e84) bg_popup_call2_rect_pane_g

0xbbd3,	// (0x0007e4c5) bg_popup_call2_bubble_pane_g1

0xbbdb,	// (0x0007e4cd) bg_popup_call2_bubble_pane_g2

0xbbe3,	// (0x0007e4d5) bg_popup_call2_bubble_pane_g3

0xbbeb,	// (0x0007e4dd) bg_popup_call2_bubble_pane_g4

0xbbf3,	// (0x0007e4e5) bg_popup_call2_bubble_pane_g5

0xbbfb,	// (0x0007e4ed) bg_popup_call2_bubble_pane_g6

0xbc03,	// (0x0007e4f5) bg_popup_call2_bubble_pane_g7

0xbc0b,	// (0x0007e4fd) bg_popup_call2_bubble_pane_g8

0xbc13,	// (0x0007e505) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00081e97) bg_popup_call2_bubble_pane_g

0x2721,	// (0x00075013) aid_cale_week_size_cell_pane

0x2cef,	// (0x000755e1) aid_cams_cif_uncrop_pane_ParamLimits

0x2cef,	// (0x000755e1) aid_cams_cif_uncrop_pane

0x2ee6,	// (0x000757d8) aid_cams_size_cell_ParamLimits

0x2ee6,	// (0x000757d8) aid_cams_size_cell

0x2efa,	// (0x000757ec) grid_cams_pane_ParamLimits

0x2f14,	// (0x00075806) linegrid_cams_pane_ParamLimits

0x3048,	// (0x0007593a) call_video_pane_t1

0x3066,	// (0x00075958) call_video_pane_t2

0x0001,

0xf292,	// (0x00081b84) call_video_pane_t

0x36f4,	// (0x00075fe6) aid_cale_month_size_cell_pane_ParamLimits

0x36f4,	// (0x00075fe6) aid_cale_month_size_cell_pane

0xf62f,	// (0x00081f21) smil_status_volume_pane_g

0xbe78,	// (0x0007e76a) volume_smil_pane_ParamLimits

0xaa21,	// (0x0007d313) aid_popup2_width_pane

0x2609,	// (0x00074efb) cell_qdial_pane_g4_ParamLimits

0x2609,	// (0x00074efb) cell_qdial_pane_g4

0x4754,	// (0x00077046) aid_blid_cardinal_pane_ParamLimits

0x4760,	// (0x00077052) aid_blid_destination_pane_ParamLimits

0x4760,	// (0x00077052) aid_blid_destination_pane

0x20de,	// (0x000749d0) bg_popup_call_poc_act_pane_ParamLimits

0x20de,	// (0x000749d0) bg_popup_call_poc_act_pane

0x20de,	// (0x000749d0) bg_popup_call_poc_inact_pane_ParamLimits

0x20de,	// (0x000749d0) bg_popup_call_poc_inact_pane

0xbc1b,	// (0x0007e50d) bg_popup_call_poc_act_pane_g1

0xbc23,	// (0x0007e515) bg_popup_call_poc_act_pane_g2

0xbc2b,	// (0x0007e51d) bg_popup_call_poc_act_pane_g3

0xbbeb,	// (0x0007e4dd) bg_popup_call_poc_act_pane_g4

0xbbf3,	// (0x0007e4e5) bg_popup_call_poc_act_pane_g5

0xbc33,	// (0x0007e525) bg_popup_call_poc_act_pane_g6

0xbc03,	// (0x0007e4f5) bg_popup_call_poc_act_pane_g7

0xbc3b,	// (0x0007e52d) bg_popup_call_poc_act_pane_g8

0x1e83,	// (0x00074775) main_usb_pane

0xbd94,	// (0x0007e686) popup_cale_lunar_info_window

0x339c,	// (0x00075c8e) im_reading_pane_t1_ParamLimits

0x33d5,	// (0x00075cc7) list_im_pane_ParamLimits

0x33e6,	// (0x00075cd8) scroll_pane_cp07_ParamLimits

0x1e83,	// (0x00074775) grid_highlight_pane_cp012

0x20de,	// (0x000749d0) mup_scale_pane_ParamLimits

0x5120,	// (0x00077a12) main_usb_pane_g1_ParamLimits

0x5120,	// (0x00077a12) main_usb_pane_g1

0x5884,	// (0x00078176) main_usb_pane_g2_ParamLimits

0x5884,	// (0x00078176) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00081ec1) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00081ec1) main_usb_pane_g

0x589a,	// (0x0007818c) main_usb_pane_t1_ParamLimits

0x589a,	// (0x0007818c) main_usb_pane_t1

0x58ac,	// (0x0007819e) main_usb_pane_t2_ParamLimits

0x58ac,	// (0x0007819e) main_usb_pane_t2

0x58be,	// (0x000781b0) main_usb_pane_t3_ParamLimits

0x58be,	// (0x000781b0) main_usb_pane_t3

0x58d0,	// (0x000781c2) main_usb_pane_t4_ParamLimits

0x58d0,	// (0x000781c2) main_usb_pane_t4

0x58e2,	// (0x000781d4) main_usb_pane_t5_ParamLimits

0x58e2,	// (0x000781d4) main_usb_pane_t5

0x58f4,	// (0x000781e6) main_usb_pane_t6_ParamLimits

0x58f4,	// (0x000781e6) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00081ec6) main_usb_pane_t_ParamLimits

0x4703,	// (0x00076ff5) aid_text_placing

0x470c,	// (0x00076ffe) main_location2_pane_t1_ParamLimits

0x471e,	// (0x00077010) main_location2_pane_t2_ParamLimits

0x4730,	// (0x00077022) main_location2_pane_t3_ParamLimits

0x4742,	// (0x00077034) main_location2_pane_t4_ParamLimits

0x4742,	// (0x00077034) main_location2_pane_t4

0xf3f3,	// (0x00081ce5) main_location2_pane_t_ParamLimits

0x21b6,	// (0x00074aa8) find_pinb_pane_g2_ParamLimits

0x21b6,	// (0x00074aa8) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00081a33) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00081a33) find_pinb_pane_g

0x21c2,	// (0x00074ab4) find_pinb_pane_t1_ParamLimits

0x21d4,	// (0x00074ac6) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00081a38) find_pinb_pane_t_ParamLimits

0x1e83,	// (0x00074775) main_call3_pane

0x3a8d,	// (0x0007637f) cale_month_day_heading_pane_t1_ParamLimits

0x3aeb,	// (0x000763dd) cale_month_day_heading_pane_t2_ParamLimits

0x3b50,	// (0x00076442) cale_month_day_heading_pane_t3_ParamLimits

0x3bb5,	// (0x000764a7) cale_month_day_heading_pane_t4_ParamLimits

0x3c1a,	// (0x0007650c) cale_month_day_heading_pane_t5_ParamLimits

0x3c8f,	// (0x00076581) cale_month_day_heading_pane_t6_ParamLimits

0x3d04,	// (0x000765f6) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00081bbc) cale_month_day_heading_pane_t_ParamLimits

0x3f20,	// (0x00076812) smil_status_volume_pane

0x50fc,	// (0x000779ee) postcard_address_pane_ParamLimits

0x50fc,	// (0x000779ee) postcard_address_pane

0x510e,	// (0x00077a00) postcard_message_pane_ParamLimits

0x510e,	// (0x00077a00) postcard_message_pane

0x5862,	// (0x00078154) call2_cli_visual_pane_t1_ParamLimits

0x5862,	// (0x00078154) call2_cli_visual_pane_t1

0x6086,	// (0x00078978) postcard_message_pane_t1_ParamLimits

0x6086,	// (0x00078978) postcard_message_pane_t1

0x606f,	// (0x00078961) postcard_address_pane_t1_ParamLimits

0x606f,	// (0x00078961) postcard_address_pane_t1

0x605b,	// (0x0007894d) popup_call3_audio_in_window_ParamLimits

0x605b,	// (0x0007894d) popup_call3_audio_in_window

0x5ee6,	// (0x000787d8) bg_popup_call3_in_pane_ParamLimits

0x5ee6,	// (0x000787d8) bg_popup_call3_in_pane

0x5f5c,	// (0x0007884e) popup_call3_audio_in_window_g1_ParamLimits

0x5f5c,	// (0x0007884e) popup_call3_audio_in_window_g1

0x5f7c,	// (0x0007886e) popup_call3_audio_in_window_g2_ParamLimits

0x5f7c,	// (0x0007886e) popup_call3_audio_in_window_g2

0x5f9c,	// (0x0007888e) popup_call3_audio_in_window_g3_ParamLimits

0x5f9c,	// (0x0007888e) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00081f28) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00081f28) popup_call3_audio_in_window_g

0x5fcd,	// (0x000788bf) popup_call3_audio_in_window_t1_ParamLimits

0x5fcd,	// (0x000788bf) popup_call3_audio_in_window_t1

0x600b,	// (0x000788fd) popup_call3_audio_in_window_t2_ParamLimits

0x600b,	// (0x000788fd) popup_call3_audio_in_window_t2

0x6049,	// (0x0007893b) popup_call3_audio_in_window_t3_ParamLimits

0x6049,	// (0x0007893b) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00081f31) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00081f31) popup_call3_audio_in_window_t

0x49ba,	// (0x000772ac) bg_popup_call3_rect_pane

0xbb93,	// (0x0007e485) bg_popup_call3_rect_pane_g1

0x26b1,	// (0x00074fa3) bg_popup_call3_rect_pane_g2

0xbb9b,	// (0x0007e48d) bg_popup_call3_rect_pane_g3

0xbba3,	// (0x0007e495) bg_popup_call3_rect_pane_g4

0xbbab,	// (0x0007e49d) bg_popup_call3_rect_pane_g5

0xbbb3,	// (0x0007e4a5) bg_popup_call3_rect_pane_g6

0xbbbb,	// (0x0007e4ad) bg_popup_call3_rect_pane_g7

0x4ca0,	// (0x00077592) mup_visualizer_osc_pane

0x4cb6,	// (0x000775a8) mup_visualizer_spec_pane

0x5f16,	// (0x00078808) call3_video_qcif_pane_ParamLimits

0x5f16,	// (0x00078808) call3_video_qcif_pane

0x5f29,	// (0x0007881b) call3_video_qcif_uncrop_pane_ParamLimits

0x5f29,	// (0x0007881b) call3_video_qcif_uncrop_pane

0x5f37,	// (0x00078829) call3_video_subqcif_pane_ParamLimits

0x5f37,	// (0x00078829) call3_video_subqcif_pane

0x5f4b,	// (0x0007883d) call3_video_subqcif_uncrop_pane_ParamLimits

0x5f4b,	// (0x0007883d) call3_video_subqcif_uncrop_pane

0x5fbc,	// (0x000788ae) popup_call3_audio_in_window_g4_ParamLimits

0x5fbc,	// (0x000788ae) popup_call3_audio_in_window_g4

0x5ed5,	// (0x000787c7) mup_spec_half_pane

0x5ede,	// (0x000787d0) mup_spec_half_pane_cp

0xbe2b,	// (0x0007e71d) mup_osc_middle_pane

0xbe34,	// (0x0007e726) mup_visualizer_osc_pane_g1

0x5eb5,	// (0x000787a7) mup_spec_bar_pane_ParamLimits

0x5eb5,	// (0x000787a7) mup_spec_bar_pane

0xbe18,	// (0x0007e70a) mup_spec_bar_pane_g1

0xbe22,	// (0x0007e714) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00081f1c) mup_spec_bar_pane_g

0x2721,	// (0x00075013) aid_cale_week_size_cell_pane_ParamLimits

0x2734,	// (0x00075026) bg_cale_heading_pane_ParamLimits

0x2748,	// (0x0007503a) bg_cale_pane_cp01_ParamLimits

0x2761,	// (0x00075053) cale_week_corner_pane_ParamLimits

0x2777,	// (0x00075069) cale_week_day_heading_pane_ParamLimits

0x278b,	// (0x0007507d) cale_week_scroll_pane_g1_ParamLimits

0x279c,	// (0x0007508e) cale_week_scroll_pane_g2_ParamLimits

0x27ad,	// (0x0007509f) cale_week_scroll_pane_g3_ParamLimits

0x27be,	// (0x000750b0) cale_week_scroll_pane_g4_ParamLimits

0x27cf,	// (0x000750c1) cale_week_scroll_pane_g5_ParamLimits

0x27e2,	// (0x000750d4) cale_week_scroll_pane_g6_ParamLimits

0x27f5,	// (0x000750e7) cale_week_scroll_pane_g7_ParamLimits

0x2808,	// (0x000750fa) cale_week_scroll_pane_g8_ParamLimits

0x281b,	// (0x0007510d) cale_week_scroll_pane_g9_ParamLimits

0x282c,	// (0x0007511e) cale_week_scroll_pane_g10_ParamLimits

0x283d,	// (0x0007512f) cale_week_scroll_pane_g11_ParamLimits

0x284e,	// (0x00075140) cale_week_scroll_pane_g12_ParamLimits

0x285f,	// (0x00075151) cale_week_scroll_pane_g13_ParamLimits

0x2870,	// (0x00075162) cale_week_scroll_pane_g14_ParamLimits

0x2881,	// (0x00075173) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00081ac4) cale_week_scroll_pane_g_ParamLimits

0x2892,	// (0x00075184) cale_week_time_pane_ParamLimits

0x28a5,	// (0x00075197) grid_cale_week_pane_ParamLimits

0x28ba,	// (0x000751ac) listscroll_cale_week_pane_t1

0x28cc,	// (0x000751be) scroll_pane_cp08_ParamLimits

0x3758,	// (0x0007604a) cale_month_corner_pane_ParamLimits

0x3a3a,	// (0x0007632c) cale_month_pane_t1

0x3a4c,	// (0x0007633e) cale_month_week_pane_ParamLimits

0x4345,	// (0x00076c37) popup_call_status_window_g1_ParamLimits

0x4359,	// (0x00076c4b) popup_call_status_window_g2_ParamLimits

0x436d,	// (0x00076c5f) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00081c6c) popup_call_status_window_g_ParamLimits

0x43d5,	// (0x00076cc7) aid_call2_pane

0x0e19,	// (0x0007370b) msg_header_pane_g1

0x50fc,	// (0x000779ee) postcard_address2_pane_ParamLimits

0x50fc,	// (0x000779ee) postcard_address2_pane

0x510e,	// (0x00077a00) postcard_message2_pane_ParamLimits

0x510e,	// (0x00077a00) postcard_message2_pane

0x5e67,	// (0x00078759) message2_row_pane_ParamLimits

0x5e67,	// (0x00078759) message2_row_pane

0x5e83,	// (0x00078775) address2_row_pane_ParamLimits

0x5e83,	// (0x00078775) address2_row_pane

0xbde6,	// (0x0007e6d8) postcard_message2_row_pane_g1

0xbdee,	// (0x0007e6e0) postcard_message2_row_pane_t1

0xbde6,	// (0x0007e6d8) address2_row_pane_g1

0xbdee,	// (0x0007e6e0) address2_row_pane_t1

0x2bd5,	// (0x000754c7) aid_size_cell_vorec

0x1e83,	// (0x00074775) main_rss_pane

0x5e96,	// (0x00078788) rss_list_single_pane_ParamLimits

0x5e96,	// (0x00078788) rss_list_single_pane

0xbdfc,	// (0x0007e6ee) rss_list_single_pane_t1

0xbe0a,	// (0x0007e6fc) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00081f17) rss_list_single_pane_t

0x1e83,	// (0x00074775) main_camera2_pane

0x1e83,	// (0x00074775) main_video2_pane

0x60ff,	// (0x000789f1) cams_zoom_pane_cp2_ParamLimits

0x60ff,	// (0x000789f1) cams_zoom_pane_cp2

0x611f,	// (0x00078a11) image2_vga_pane_ParamLimits

0x611f,	// (0x00078a11) image2_vga_pane

0x6170,	// (0x00078a62) main_camera2_pane_g1_ParamLimits

0x6170,	// (0x00078a62) main_camera2_pane_g1

0x6190,	// (0x00078a82) main_camera2_pane_g2_ParamLimits

0x6190,	// (0x00078a82) main_camera2_pane_g2

0x61b0,	// (0x00078aa2) main_camera2_pane_g3_ParamLimits

0x61b0,	// (0x00078aa2) main_camera2_pane_g3

0x61d0,	// (0x00078ac2) main_camera2_pane_g4_ParamLimits

0x61d0,	// (0x00078ac2) main_camera2_pane_g4

0x61f0,	// (0x00078ae2) main_camera2_pane_g5_ParamLimits

0x61f0,	// (0x00078ae2) main_camera2_pane_g5

0x6210,	// (0x00078b02) main_camera2_pane_g6_ParamLimits

0x6210,	// (0x00078b02) main_camera2_pane_g6

0x6230,	// (0x00078b22) main_camera2_pane_g7_ParamLimits

0x6230,	// (0x00078b22) main_camera2_pane_g7

0x6250,	// (0x00078b42) main_camera2_pane_g8_ParamLimits

0x6250,	// (0x00078b42) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00081f38) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00081f38) main_camera2_pane_g

0x6290,	// (0x00078b82) main_camera2_pane_t1_ParamLimits

0x6290,	// (0x00078b82) main_camera2_pane_t1

0x62c5,	// (0x00078bb7) main_camera2_pane_t2_ParamLimits

0x62c5,	// (0x00078bb7) main_camera2_pane_t2

0x62eb,	// (0x00078bdd) main_camera2_pane_t3_ParamLimits

0x62eb,	// (0x00078bdd) main_camera2_pane_t3

0x6349,	// (0x00078c3b) main_camera2_pane_t4_ParamLimits

0x6349,	// (0x00078c3b) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00081f4b) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00081f4b) main_camera2_pane_t

0x63db,	// (0x00078ccd) cams_zoom_pane_cp4_ParamLimits

0x63db,	// (0x00078ccd) cams_zoom_pane_cp4

0x63f1,	// (0x00078ce3) image2_cif_pane_ParamLimits

0x63f1,	// (0x00078ce3) image2_cif_pane

0x641c,	// (0x00078d0e) image2_subqcif_pane_ParamLimits

0x641c,	// (0x00078d0e) image2_subqcif_pane

0x6436,	// (0x00078d28) main_video2_pane_g1_ParamLimits

0x6436,	// (0x00078d28) main_video2_pane_g1

0x6450,	// (0x00078d42) main_video2_pane_g2_ParamLimits

0x6450,	// (0x00078d42) main_video2_pane_g2

0x6466,	// (0x00078d58) main_video2_pane_g3_ParamLimits

0x6466,	// (0x00078d58) main_video2_pane_g3

0x647c,	// (0x00078d6e) main_video2_pane_g4_ParamLimits

0x647c,	// (0x00078d6e) main_video2_pane_g4

0x6492,	// (0x00078d84) main_video2_pane_g5_ParamLimits

0x6492,	// (0x00078d84) main_video2_pane_g5

0x64a8,	// (0x00078d9a) main_video2_pane_g6_ParamLimits

0x64a8,	// (0x00078d9a) main_video2_pane_g6

0x0005,

0xf668,	// (0x00081f5a) main_video2_pane_g_ParamLimits

0xf668,	// (0x00081f5a) main_video2_pane_g

0x64c2,	// (0x00078db4) main_video2_pane_t1_ParamLimits

0x64c2,	// (0x00078db4) main_video2_pane_t1

0x64e6,	// (0x00078dd8) main_video2_pane_t2_ParamLimits

0x64e6,	// (0x00078dd8) main_video2_pane_t2

0x6534,	// (0x00078e26) main_video2_pane_t3_ParamLimits

0x6534,	// (0x00078e26) main_video2_pane_t3

0x0002,

0xf675,	// (0x00081f67) main_video2_pane_t_ParamLimits

0xf675,	// (0x00081f67) main_video2_pane_t

0x59af,	// (0x000782a1) call_muted_g2

0x0001,

0xf617,	// (0x00081f09) call_muted_g

0x1e83,	// (0x00074775) main_mup2_pane

0x6578,	// (0x00078e6a) main_mup2_pane_g1_ParamLimits

0x6578,	// (0x00078e6a) main_mup2_pane_g1

0x6584,	// (0x00078e76) main_mup2_pane_g2_ParamLimits

0x6584,	// (0x00078e76) main_mup2_pane_g2

0xeb02,	// (0x000813f4) main_mup_pane_g13_cp1

0xeb0a,	// (0x000813fc) mup_volume_pane_cp1

0x65a0,	// (0x00078e92) main_mup2_pane_g4_ParamLimits

0x65a0,	// (0x00078e92) main_mup2_pane_g4

0x65b2,	// (0x00078ea4) main_mup2_pane_g5_ParamLimits

0x65b2,	// (0x00078ea4) main_mup2_pane_g5

0x65c4,	// (0x00078eb6) main_mup2_pane_g6_ParamLimits

0x65c4,	// (0x00078eb6) main_mup2_pane_g6

0x65d6,	// (0x00078ec8) main_mup2_pane_g7_ParamLimits

0x65d6,	// (0x00078ec8) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00081f6e) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00081f6e) main_mup2_pane_g

0x65ee,	// (0x00078ee0) main_mup2_pane_t1_ParamLimits

0x65ee,	// (0x00078ee0) main_mup2_pane_t1

0x6604,	// (0x00078ef6) main_mup2_pane_t2_ParamLimits

0x6604,	// (0x00078ef6) main_mup2_pane_t2

0x661a,	// (0x00078f0c) main_mup2_pane_t3_ParamLimits

0x661a,	// (0x00078f0c) main_mup2_pane_t3

0x6630,	// (0x00078f22) main_mup2_pane_t4_ParamLimits

0x6630,	// (0x00078f22) main_mup2_pane_t4

0x6648,	// (0x00078f3a) main_mup2_pane_t5_ParamLimits

0x6648,	// (0x00078f3a) main_mup2_pane_t5

0x6660,	// (0x00078f52) main_mup2_pane_t6_ParamLimits

0x6660,	// (0x00078f52) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00081f7d) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00081f7d) main_mup2_pane_t

0x6690,	// (0x00078f82) mup2_visualizer_pane_ParamLimits

0x6690,	// (0x00078f82) mup2_visualizer_pane

0x66be,	// (0x00078fb0) mup_progress_pane_cp_ParamLimits

0x66be,	// (0x00078fb0) mup_progress_pane_cp

0xeaed,	// (0x000813df) mup_volume_pane_cp_ParamLimits

0xeaed,	// (0x000813df) mup_volume_pane_cp

0x66d2,	// (0x00078fc4) mup2_visualizer_pane_g1_ParamLimits

0x66d2,	// (0x00078fc4) mup2_visualizer_pane_g1

0xbe8d,	// (0x0007e77f) mup2_visualizer_pane_g2_ParamLimits

0xbe8d,	// (0x0007e77f) mup2_visualizer_pane_g2

0x66e9,	// (0x00078fdb) mup2_visualizer_pane_g3_ParamLimits

0x66e9,	// (0x00078fdb) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00081f8a) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00081f8a) mup2_visualizer_pane_g

0x54c8,	// (0x00077dba) aid_size_cell_fmradio

0x5b61,	// (0x00078453) aid_height_parent_landcape

0x349c,	// (0x00075d8e) wml_content_pane_cp

0x34a4,	// (0x00075d96) wml_tabs_pane

0x34ad,	// (0x00075d9f) popup_wml_miniature_window

0x34b5,	// (0x00075da7) scroll_pane_cp021

0x34c9,	// (0x00075dbb) wml_content_pane_comp8

0x1e83,	// (0x00074775) bg_popup_sub_pane_cp05

0xbeab,	// (0x0007e79d) popup_wml_miniature_window_g1

0xbeb3,	// (0x0007e7a5) wml_miniature_view_pane

0x66f5,	// (0x00078fe7) aid_size_wml_view

0x66fd,	// (0x00078fef) wml_miniature_view_pane_g1

0x6706,	// (0x00078ff8) wml_miniature_view_pane_g2

0x670f,	// (0x00079001) wml_miniature_view_pane_g3

0x6717,	// (0x00079009) wml_miniature_view_pane_g4

0x671f,	// (0x00079011) wml_miniature_view_pane_g5

0x6727,	// (0x00079019) wml_miniature_view_pane_g6

0x672f,	// (0x00079021) wml_miniature_view_pane_g7

0x6737,	// (0x00079029) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00081f91) wml_miniature_view_pane_g

0xbebb,	// (0x0007e7ad) background_graphic_ParamLimits

0xbebb,	// (0x0007e7ad) background_graphic

0xbec7,	// (0x0007e7b9) wml_tabs_2_pane

0xbed0,	// (0x0007e7c2) wml_tabs_3_pane_ParamLimits

0xbed0,	// (0x0007e7c2) wml_tabs_3_pane

0xbee2,	// (0x0007e7d4) wml_tabs_4_pane_ParamLimits

0xbee2,	// (0x0007e7d4) wml_tabs_4_pane

0xbef8,	// (0x0007e7ea) wml_tabs_5_pane_ParamLimits

0xbef8,	// (0x0007e7ea) wml_tabs_5_pane

0xbf12,	// (0x0007e804) wml_tabs_pane_g2_ParamLimits

0xbf12,	// (0x0007e804) wml_tabs_pane_g2

0xbf26,	// (0x0007e818) wml_tabs_pane_g3_ParamLimits

0xbf26,	// (0x0007e818) wml_tabs_pane_g3

0x673f,	// (0x00079031) wml_tabs_2_active_pane_ParamLimits

0x673f,	// (0x00079031) wml_tabs_2_active_pane

0x6753,	// (0x00079045) wml_tabs_2_passive_pane_ParamLimits

0x6753,	// (0x00079045) wml_tabs_2_passive_pane

0x6767,	// (0x00079059) wml_tabs_3_active_pane_cp_ParamLimits

0x6767,	// (0x00079059) wml_tabs_3_active_pane_cp

0x677c,	// (0x0007906e) wml_tabs_3_passive_pane_ParamLimits

0x677c,	// (0x0007906e) wml_tabs_3_passive_pane

0x678f,	// (0x00079081) wml_tabs_3_passive_pane_cp_ParamLimits

0x678f,	// (0x00079081) wml_tabs_3_passive_pane_cp

0x67a6,	// (0x00079098) tabs_4_active_pane

0x67ae,	// (0x000790a0) tabs_4_passive_pane

0x67b8,	// (0x000790aa) tabs_4_passive_pane_cp

0x67c0,	// (0x000790b2) tabs_4_passive_pane_cp2

0x587c,	// (0x0007816e) aid_height_text

0x4c76,	// (0x00077568) mup_volume_cont_pane_ParamLimits

0x4c76,	// (0x00077568) mup_volume_cont_pane

0x2174,	// (0x00074a66) aid_size_cell_pinb

0x217e,	// (0x00074a70) aid_size_list_pinb

0x66aa,	// (0x00078f9c) mup2_volume_cont_pane_ParamLimits

0x66aa,	// (0x00078f9c) mup2_volume_cont_pane

0xead9,	// (0x000813cb) mup2_volume_cont_pane_g1_ParamLimits

0xead9,	// (0x000813cb) mup2_volume_cont_pane_g1

0x178c,	// (0x0007407e) aid_size_cell_touch_ParamLimits

0x178c,	// (0x0007407e) aid_size_cell_touch

0x19c6,	// (0x000742b8) touch_pane_ParamLimits

0x19c6,	// (0x000742b8) touch_pane

0xaa0f,	// (0x0007d301) main_rss2_pane

0xbf43,	// (0x0007e835) listscroll_rss2_pane

0xbf4c,	// (0x0007e83e) rss2_navigation_pane

0xbf54,	// (0x0007e846) list_rss2_pane

0x458f,	// (0x00076e81) scroll_pane_cp22

0xbf5c,	// (0x0007e84e) rss2_navigation_pane_g1

0xbf65,	// (0x0007e857) rss2_navigation_pane_g2

0xbf6d,	// (0x0007e85f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00081fa2) rss2_navigation_pane_g

0xbf75,	// (0x0007e867) rss2_navigation_pane_t1

0x67ca,	// (0x000790bc) rss2_list_single_pane_ParamLimits

0x67ca,	// (0x000790bc) rss2_list_single_pane

0xbf83,	// (0x0007e875) rss2_list_single_pane_t2

0xbf91,	// (0x0007e883) rss2_list_single_pane_t3_ParamLimits

0xbf91,	// (0x0007e883) rss2_list_single_pane_t3

0xbfae,	// (0x0007e8a0) rss2_list_single_pane_t4

0x3f08,	// (0x000767fa) smil_status_pane_g1

0x19ac,	// (0x0007429e) main_image2_pane_ParamLimits

0x19ac,	// (0x0007429e) main_image2_pane

0x6270,	// (0x00078b62) main_camera2_pane_g9_ParamLimits

0x6270,	// (0x00078b62) main_camera2_pane_g9

0x639e,	// (0x00078c90) main_camera2_pane_t5_ParamLimits

0x639e,	// (0x00078c90) main_camera2_pane_t5

0xeaa9,	// (0x0008139b) main_camera2_pane_t6_ParamLimits

0xeaa9,	// (0x0008139b) main_camera2_pane_t6

0x67df,	// (0x000790d1) main_image2_pane_g1_ParamLimits

0x67df,	// (0x000790d1) main_image2_pane_g1

0x547e,	// (0x00077d70) smil2_video_pane_ParamLimits

0x547e,	// (0x00077d70) smil2_video_pane

0xaa3d,	// (0x0007d32f) aid_zoom_text_primary_cp

0x1968,	// (0x0007425a) popup_preview_fixed_window

0x3394,	// (0x00075c86) im_reading_pane_g1

0x60e7,	// (0x000789d9) cams2_bc_adjust_pane_cp_ParamLimits

0x60e7,	// (0x000789d9) cams2_bc_adjust_pane_cp

0x63cd,	// (0x00078cbf) cams2_bc_adjust_pane_ParamLimits

0x63cd,	// (0x00078cbf) cams2_bc_adjust_pane

0xeb12,	// (0x00081404) cams2_bc_adjust_pane_g1

0xeb1a,	// (0x0008140c) cams2_slider_pane

0xeb23,	// (0x00081415) cams2_slider_pane_g1

0xeb2c,	// (0x0008141e) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00081fa9) cams2_slider_pane_g

0x22c3,	// (0x00074bb5) calc_display_pane_ParamLimits

0x22eb,	// (0x00074bdd) calc_paper_pane_ParamLimits

0x230e,	// (0x00074c00) grid_calc_pane_ParamLimits

0xad41,	// (0x0007d633) popup_clock_digital_window_t1_ParamLimits

0x5305,	// (0x00077bf7) main_image_pane_t1

0x22a5,	// (0x00074b97) aid_size_cell_calc_ParamLimits

0x22a5,	// (0x00074b97) aid_size_cell_calc

0x5ba7,	// (0x00078499) popup_blid_sat_info2_window_ParamLimits

0x5ba7,	// (0x00078499) popup_blid_sat_info2_window

0xbfc4,	// (0x0007e8b6) aid_size_cell_blid

0xbfcc,	// (0x0007e8be) bg_popup_window_pane_cp07

0xbfef,	// (0x0007e8e1) grid_popup_blid_pane

0xbff9,	// (0x0007e8eb) heading_pane_cp05_ParamLimits

0xbff9,	// (0x0007e8eb) heading_pane_cp05

0xc0c3,	// (0x0007e9b5) cell_popup_blid_pane_ParamLimits

0xc0c3,	// (0x0007e9b5) cell_popup_blid_pane

0xc0e7,	// (0x0007e9d9) cell_popup_blid_pane_g1

0xc0ef,	// (0x0007e9e1) cell_popup_blid_pane_t1

0x667a,	// (0x00078f6c) mup2_indicator_pane_ParamLimits

0x667a,	// (0x00078f6c) mup2_indicator_pane

0x49ba,	// (0x000772ac) mup2_visualizer_osc_pane

0xbe99,	// (0x0007e78b) mup2_visualizer_spec_pane_ParamLimits

0xbe99,	// (0x0007e78b) mup2_visualizer_spec_pane

0x67f5,	// (0x000790e7) mup2_spec_half_pane

0x67fe,	// (0x000790f0) mup2_spec_half_pane_cp

0x6806,	// (0x000790f8) mup2_spec_bar_pane_ParamLimits

0x6806,	// (0x000790f8) mup2_spec_bar_pane

0xbe18,	// (0x0007e70a) mup2_spec_bar_pane_g1

0xbe22,	// (0x0007e714) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00081f1c) mup2_spec_bar_pane_g

0x6826,	// (0x00079118) mup2_osc_middle_pane

0xbe34,	// (0x0007e726) mup2_visualizer_osc_pane_g1

0x1a38,	// (0x0007432a) popup_number_entry_window_t1_ParamLimits

0x1a4b,	// (0x0007433d) popup_number_entry_window_t2_ParamLimits

0x1a5d,	// (0x0007434f) popup_number_entry_window_t3_ParamLimits

0x1a6f,	// (0x00074361) popup_number_entry_window_t5_ParamLimits

0x1a6f,	// (0x00074361) popup_number_entry_window_t5

0xf0ec,	// (0x000819de) popup_number_entry_window_t_ParamLimits

0x1aa3,	// (0x00074395) text_title_cp2_ParamLimits

0xad80,	// (0x0007d672) aid_hotspot_pointer_text2_pane

0xada6,	// (0x0007d698) main_viewer_pane_g9_ParamLimits

0xada6,	// (0x0007d698) main_viewer_pane_g9

0x3a3a,	// (0x0007632c) cale_month_pane_t1_ParamLimits

0x3f84,	// (0x00076876) bg_cale_pane_ParamLimits

0x3f9c,	// (0x0007688e) list_cale_pane_ParamLimits

0x28ba,	// (0x000751ac) listscroll_cale_day_pane_t1

0x3fad,	// (0x0007689f) scroll_pane_cp09_ParamLimits

0x4d24,	// (0x00077616) main_mup_eq_pane_t1_ParamLimits

0x4d24,	// (0x00077616) main_mup_eq_pane_t1

0x4d3e,	// (0x00077630) main_mup_eq_pane_t2_ParamLimits

0x4d3e,	// (0x00077630) main_mup_eq_pane_t2

0x4d58,	// (0x0007764a) main_mup_eq_pane_t3_ParamLimits

0x4d58,	// (0x0007764a) main_mup_eq_pane_t3

0x4d74,	// (0x00077666) main_mup_eq_pane_t4_ParamLimits

0x4d74,	// (0x00077666) main_mup_eq_pane_t4

0x4d90,	// (0x00077682) main_mup_eq_pane_t5_ParamLimits

0x4d90,	// (0x00077682) main_mup_eq_pane_t5

0x4dac,	// (0x0007769e) main_mup_eq_pane_t6_ParamLimits

0x4dac,	// (0x0007769e) main_mup_eq_pane_t6

0x4dc0,	// (0x000776b2) main_mup_eq_pane_t7_ParamLimits

0x4dc0,	// (0x000776b2) main_mup_eq_pane_t7

0x4dd4,	// (0x000776c6) main_mup_eq_pane_t8_ParamLimits

0x4dd4,	// (0x000776c6) main_mup_eq_pane_t8

0x4de8,	// (0x000776da) main_mup_eq_pane_t9_ParamLimits

0x4de8,	// (0x000776da) main_mup_eq_pane_t9

0x4e02,	// (0x000776f4) main_mup_eq_pane_t10_ParamLimits

0x4e02,	// (0x000776f4) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00081d6b) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00081d6b) main_mup_eq_pane_t

0x4eb1,	// (0x000777a3) mup_equalizer_pane_cp5_ParamLimits

0x4ec5,	// (0x000777b7) mup_equalizer_pane_cp6_ParamLimits

0x4ed9,	// (0x000777cb) mup_equalizer_pane_cp7_ParamLimits

0xaa0f,	// (0x0007d301) main_gallery_pane

0xbe3d,	// (0x0007e72f) smil2_volume_pane

0xbe45,	// (0x0007e737) smil_status_volume_pane_g1_ParamLimits

0xbe58,	// (0x0007e74a) smil_status_volume_pane_g2_ParamLimits

0xbe6b,	// (0x0007e75d) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00081f21) smil_status_volume_pane_g_ParamLimits

0xbfcc,	// (0x0007e8be) bg_popup_window_pane_cp07_ParamLimits

0xbfda,	// (0x0007e8cc) blid_firmament_pane

0x682f,	// (0x00079121) aid_size_cell_gallery_ParamLimits

0x682f,	// (0x00079121) aid_size_cell_gallery

0x6845,	// (0x00079137) grid_gallery_pane_ParamLimits

0x6845,	// (0x00079137) grid_gallery_pane

0x685e,	// (0x00079150) cell_gallery_pane_ParamLimits

0x685e,	// (0x00079150) cell_gallery_pane

0xc0fd,	// (0x0007e9ef) bg_cell_gallery_focus_pane_ParamLimits

0xc0fd,	// (0x0007e9ef) bg_cell_gallery_focus_pane

0xc10f,	// (0x0007ea01) cell_gallery_pane_g1_ParamLimits

0xc10f,	// (0x0007ea01) cell_gallery_pane_g1

0x68a7,	// (0x00079199) cell_gallery_pane_g2_ParamLimits

0x68a7,	// (0x00079199) cell_gallery_pane_g2

0x68b4,	// (0x000791a6) cell_gallery_pane_g3_ParamLimits

0x68b4,	// (0x000791a6) cell_gallery_pane_g3

0xc11b,	// (0x0007ea0d) cell_gallery_pane_g4_ParamLimits

0xc11b,	// (0x0007ea0d) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00081fcf) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00081fcf) cell_gallery_pane_g

0xc127,	// (0x0007ea19) bg_cell_gallery_focus_pane_g1

0xc12f,	// (0x0007ea21) bg_cell_gallery_focus_pane_g2

0xc137,	// (0x0007ea29) bg_cell_gallery_focus_pane_g3

0xc13f,	// (0x0007ea31) bg_cell_gallery_focus_pane_g4

0xc147,	// (0x0007ea39) bg_cell_gallery_focus_pane_g5

0xc14f,	// (0x0007ea41) bg_cell_gallery_focus_pane_g6

0xc157,	// (0x0007ea49) bg_cell_gallery_focus_pane_g7

0xc15f,	// (0x0007ea51) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00081fd8) bg_cell_gallery_focus_pane_g

0xc167,	// (0x0007ea59) aid_firma_cardinal

0xc17b,	// (0x0007ea6d) blid_firmament_pane_t1

0xc192,	// (0x0007ea84) blid_firmament_pane_t2

0xc1a9,	// (0x0007ea9b) blid_firmament_pane_t3

0xc1c0,	// (0x0007eab2) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00081fe9) blid_firmament_pane_t

0xc1d7,	// (0x0007eac9) blid_sat_info_pane

0xc1e7,	// (0x0007ead9) blid_sat_info_pane_g1

0xc1e7,	// (0x0007ead9) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00081ff2) blid_sat_info_pane_g

0xc1f1,	// (0x0007eae3) blid_sat_info_pane_t1

0xc1ff,	// (0x0007eaf1) smil2_volume_content_pane

0xc208,	// (0x0007eafa) smil2_volume_pane_g1

0xc210,	// (0x0007eb02) smil2_volume_content_pane_g1

0xc219,	// (0x0007eb0b) smil2_volume_content_pane_g2

0xc222,	// (0x0007eb14) smil2_volume_content_pane_g3

0xc22b,	// (0x0007eb1d) smil2_volume_content_pane_g4

0xc234,	// (0x0007eb26) smil2_volume_content_pane_g5

0xc23d,	// (0x0007eb2f) smil2_volume_content_pane_g6

0xc246,	// (0x0007eb38) smil2_volume_content_pane_g7

0xc24f,	// (0x0007eb41) smil2_volume_content_pane_g8

0xc258,	// (0x0007eb4a) smil2_volume_content_pane_g9

0xc261,	// (0x0007eb53) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00081ff7) smil2_volume_content_pane_g

0x2926,	// (0x00075218) cale_week_day_heading_pane_t1_ParamLimits

0x2953,	// (0x00075245) cale_week_day_heading_pane_t2_ParamLimits

0x2980,	// (0x00075272) cale_week_day_heading_pane_t3_ParamLimits

0x29ad,	// (0x0007529f) cale_week_day_heading_pane_t4_ParamLimits

0x29da,	// (0x000752cc) cale_week_day_heading_pane_t5_ParamLimits

0x2a07,	// (0x000752f9) cale_week_day_heading_pane_t6_ParamLimits

0x2a36,	// (0x00075328) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00081ae3) cale_week_day_heading_pane_t_ParamLimits

0x2a63,	// (0x00075355) bg_cale_side_pane_ParamLimits

0x2a71,	// (0x00075363) cale_week_time_pane_t1_ParamLimits

0x2a89,	// (0x0007537b) cale_week_time_pane_t2_ParamLimits

0x2aa1,	// (0x00075393) cale_week_time_pane_t3_ParamLimits

0x2ab9,	// (0x000753ab) cale_week_time_pane_t4_ParamLimits

0x2ad1,	// (0x000753c3) cale_week_time_pane_t5_ParamLimits

0x2ae9,	// (0x000753db) cale_week_time_pane_t6_ParamLimits

0x2b01,	// (0x000753f3) cale_week_time_pane_t7_ParamLimits

0x2b19,	// (0x0007540b) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00081af2) cale_week_time_pane_t_ParamLimits

0x2b31,	// (0x00075423) cell_cale_week_pane_g2_ParamLimits

0x2a63,	// (0x00075355) bg_cale_side_pane_cp01_ParamLimits

0x3d79,	// (0x0007666b) cale_month_week_pane_t1_ParamLimits

0x3d90,	// (0x00076682) cale_month_week_pane_t2_ParamLimits

0x3da7,	// (0x00076699) cale_month_week_pane_t3_ParamLimits

0x3dbe,	// (0x000766b0) cale_month_week_pane_t4_ParamLimits

0x3dd5,	// (0x000766c7) cale_month_week_pane_t5_ParamLimits

0x3dec,	// (0x000766de) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00081bcb) cale_month_week_pane_t_ParamLimits

0xac48,	// (0x0007d53a) cell_cale_month_pane_g1_ParamLimits

0xaa0f,	// (0x0007d301) main_cale_event_viewer_pane

0xaa0f,	// (0x0007d301) listscroll_cale_event_viewer_pane

0xc26a,	// (0x0007eb5c) list_cale_ev_pane

0xc272,	// (0x0007eb64) scroll_pane_cp023

0xc27e,	// (0x0007eb70) field_cale_ev_pane_ParamLimits

0xc27e,	// (0x0007eb70) field_cale_ev_pane

0xc29c,	// (0x0007eb8e) field_cale_ev_content_pane_ParamLimits

0xc29c,	// (0x0007eb8e) field_cale_ev_content_pane

0xc2a8,	// (0x0007eb9a) field_cale_ev_pane_g1_ParamLimits

0xc2a8,	// (0x0007eb9a) field_cale_ev_pane_g1

0xc2b4,	// (0x0007eba6) field_cale_ev_pane_g2_ParamLimits

0xc2b4,	// (0x0007eba6) field_cale_ev_pane_g2

0xc2cc,	// (0x0007ebbe) field_cale_ev_pane_g3_ParamLimits

0xc2cc,	// (0x0007ebbe) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008200c) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008200c) field_cale_ev_pane_g

0xc2e4,	// (0x0007ebd6) field_cale_ev_pane_t1_ParamLimits

0xc2e4,	// (0x0007ebd6) field_cale_ev_pane_t1

0xc2fb,	// (0x0007ebed) field_cale_ev_content_pane_t1_ParamLimits

0xc2fb,	// (0x0007ebed) field_cale_ev_content_pane_t1

0x4f83,	// (0x00077875) bg_button_pane_cp01

0x2443,	// (0x00074d35) listscroll_cale_week_pane_ParamLimits

0x2717,	// (0x00075009) popup_toolbar_window_cp01

0x28ba,	// (0x000751ac) listscroll_cale_week_pane_t1_ParamLimits

0x2443,	// (0x00074d35) listscroll_cale_day_pane_ParamLimits

0x3f7a,	// (0x0007686c) popup_toolbar_window_cp02

0x28ba,	// (0x000751ac) listscroll_cale_day_pane_t1_ParamLimits

0x2443,	// (0x00074d35) main_cale_month_pane_ParamLimits

0x5ddb,	// (0x000786cd) popup_toolbar_window_cp03_ParamLimits

0x5ddb,	// (0x000786cd) popup_toolbar_window_cp03

0x52e3,	// (0x00077bd5) main_image_pane_g2_ParamLimits

0x52e3,	// (0x00077bd5) main_image_pane_g2

0x52f4,	// (0x00077be6) main_image_pane_g3_ParamLimits

0x52f4,	// (0x00077be6) main_image_pane_g3

0x0002,

0xf50b,	// (0x00081dfd) main_image_pane_g_ParamLimits

0xf50b,	// (0x00081dfd) main_image_pane_g

0x5305,	// (0x00077bf7) main_image_pane_t1_ParamLimits

0x531c,	// (0x00077c0e) main_image_pane_t2_ParamLimits

0x531c,	// (0x00077c0e) main_image_pane_t2

0x532e,	// (0x00077c20) main_image_pane_t3_ParamLimits

0x532e,	// (0x00077c20) main_image_pane_t3

0x5356,	// (0x00077c48) main_image_pane_t4_ParamLimits

0x5356,	// (0x00077c48) main_image_pane_t4

0x0003,

0xf512,	// (0x00081e04) main_image_pane_t_ParamLimits

0xf512,	// (0x00081e04) main_image_pane_t

0x5376,	// (0x00077c68) popup_image_details_window_cp01

0x5380,	// (0x00077c72) popup_toobar_trans_pane_cp01_ParamLimits

0x5380,	// (0x00077c72) popup_toobar_trans_pane_cp01

0x5c86,	// (0x00078578) popup_image_details_window_ParamLimits

0x5c86,	// (0x00078578) popup_image_details_window

0xbd9e,	// (0x0007e690) popup_image_focus_window

0x60a1,	// (0x00078993) camera2_autofocus_pane_ParamLimits

0x60a1,	// (0x00078993) camera2_autofocus_pane

0xaa0f,	// (0x0007d301) bg_popup_sub_pane_cp06

0xc319,	// (0x0007ec0b) popup_image_focus_window_g1

0xc321,	// (0x0007ec13) popup_image_focus_window_g2

0xc329,	// (0x0007ec1b) popup_image_focus_window_g3

0xc331,	// (0x0007ec23) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00082013) popup_image_focus_window_g

0xc339,	// (0x0007ec2b) popup_image_focus_window_t1

0xc347,	// (0x0007ec39) popup_image_focus_window_t2

0xc357,	// (0x0007ec49) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008201c) popup_image_focus_window_t

0xc365,	// (0x0007ec57) camera2_autofocus_pane_g1

0x19ac,	// (0x0007429e) bg_tb_trans_pane_cp01

0xc373,	// (0x0007ec65) popup_image_details_window_g1

0xc386,	// (0x0007ec78) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008202e) popup_image_details_window_g

0xc3af,	// (0x0007eca1) popup_image_details_window_t1

0xc3c1,	// (0x0007ecb3) popup_image_details_window_t2

0xc3da,	// (0x0007eccc) popup_image_details_window_t3

0xc3ee,	// (0x0007ece0) popup_image_details_window_t4

0xc409,	// (0x0007ecfb) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00082035) popup_image_details_window_t

0x242f,	// (0x00074d21) bg_calc_paper_pane_ParamLimits

0xaa0f,	// (0x0007d301) grid_highlight_pane_cp013

0xaa71,	// (0x0007d363) list_calc_pane_ParamLimits

0xaa83,	// (0x0007d375) scroll_pane_cp024

0x2443,	// (0x00074d35) bg_calc_display_pane_ParamLimits

0x244f,	// (0x00074d41) calc_display_pane_t1_ParamLimits

0x2461,	// (0x00074d53) calc_display_pane_t2_ParamLimits

0xaa8b,	// (0x0007d37d) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00081a65) calc_display_pane_t_ParamLimits

0x256c,	// (0x00074e5e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00081a82) cell_calc_pane_g

0x2575,	// (0x00074e67) cell_calc_pane_t1

0x2584,	// (0x00074e76) grid_highlight_pane_cp02_ParamLimits

0x259a,	// (0x00074e8c) toolbar_button_pane_cp01_ParamLimits

0x259a,	// (0x00074e8c) toolbar_button_pane_cp01

0x53c2,	// (0x00077cb4) temp_image_control_pane_ParamLimits

0x53c2,	// (0x00077cb4) temp_image_control_pane

0x19ac,	// (0x0007429e) main_mp3_pane

0xc423,	// (0x0007ed15) temp_image_control_pane_g1_ParamLimits

0xc423,	// (0x0007ed15) temp_image_control_pane_g1

0xc431,	// (0x0007ed23) temp_image_control_pane_g2_ParamLimits

0xc431,	// (0x0007ed23) temp_image_control_pane_g2

0xc443,	// (0x0007ed35) temp_image_control_pane_g3_ParamLimits

0xc443,	// (0x0007ed35) temp_image_control_pane_g3

0x68f1,	// (0x000791e3) temp_image_control_pane_g4_ParamLimits

0x68f1,	// (0x000791e3) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00082040) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00082040) temp_image_control_pane_g

0xc423,	// (0x0007ed15) main_mp3_pane_g1

0x6904,	// (0x000791f6) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00082049) main_mp3_pane_g

0xc486,	// (0x0007ed78) main_mp3_pane_t1

0x2cb7,	// (0x000755a9) main_camera_pane_g8_ParamLimits

0x2cb7,	// (0x000755a9) main_camera_pane_g8

0x2e68,	// (0x0007575a) main_video_pane_g7_ParamLimits

0x2e68,	// (0x0007575a) main_video_pane_g7

0xeac7,	// (0x000813b9) main_camera2_pane_t7_ParamLimits

0xeac7,	// (0x000813b9) main_camera2_pane_t7

0x345c,	// (0x00075d4e) scroll_pane_cp025_ParamLimits

0x345c,	// (0x00075d4e) scroll_pane_cp025

0x3470,	// (0x00075d62) scroll_pane_cp026_ParamLimits

0x3470,	// (0x00075d62) scroll_pane_cp026

0x347f,	// (0x00075d71) wml_content_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_touch_calib_pane

0x69ce,	// (0x000792c0) main_touch_calib_pane_g1

0x69da,	// (0x000792cc) main_touch_calib_pane_g2

0x69e6,	// (0x000792d8) main_touch_calib_pane_g3

0x69f2,	// (0x000792e4) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00082067) main_touch_calib_pane_g

0x69fe,	// (0x000792f0) main_touch_calib_pane_t1

0x6a18,	// (0x0007930a) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00082070) main_touch_calib_pane_t

0x4837,	// (0x00077129) mup_progress_pane_cp02

0x4856,	// (0x00077148) navi_pane_g1

0x490f,	// (0x00077201) navi_pane_mp_t3

0x19ac,	// (0x0007429e) main_mp3_pane_ParamLimits

0x5e19,	// (0x0007870b) navi_pane_ParamLimits

0xc423,	// (0x0007ed15) main_mp3_pane_g1_ParamLimits

0x6904,	// (0x000791f6) main_mp3_pane_g2_ParamLimits

0x6912,	// (0x00079204) main_mp3_pane_g3_ParamLimits

0x6912,	// (0x00079204) main_mp3_pane_g3

0x6920,	// (0x00079212) main_mp3_pane_g4_ParamLimits

0x6920,	// (0x00079212) main_mp3_pane_g4

0xc453,	// (0x0007ed45) main_mp3_pane_g5_ParamLimits

0xc453,	// (0x0007ed45) main_mp3_pane_g5

0xc461,	// (0x0007ed53) main_mp3_pane_g6_ParamLimits

0xc461,	// (0x0007ed53) main_mp3_pane_g6

0xc46e,	// (0x0007ed60) main_mp3_pane_g7_ParamLimits

0xc46e,	// (0x0007ed60) main_mp3_pane_g7

0xc47a,	// (0x0007ed6c) main_mp3_pane_g8_ParamLimits

0xc47a,	// (0x0007ed6c) main_mp3_pane_g8

0xf757,	// (0x00082049) main_mp3_pane_g_ParamLimits

0x692c,	// (0x0007921e) main_mp3_pane_t2

0x693a,	// (0x0007922c) main_mp3_pane_t3

0xc494,	// (0x0007ed86) main_mp3_pane_t4

0xc4a2,	// (0x0007ed94) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008205a) main_mp3_pane_t

0xc4b0,	// (0x0007eda2) mup_progress_pane_cp01

0xaa3d,	// (0x0007d32f) aid_zoom_text_secondary2

0xc26a,	// (0x0007eb5c) list_cale_ev2_pane

0xc272,	// (0x0007eb64) scroll_pane_cp023_ParamLimits

0x6a6e,	// (0x00079360) field_cale_ev2_pane_ParamLimits

0x6a6e,	// (0x00079360) field_cale_ev2_pane

0x6a8e,	// (0x00079380) field_cale_ev2_pane_g1_ParamLimits

0x6a8e,	// (0x00079380) field_cale_ev2_pane_g1

0x6a9a,	// (0x0007938c) field_cale_ev2_pane_g2_ParamLimits

0x6a9a,	// (0x0007938c) field_cale_ev2_pane_g2

0x6ab2,	// (0x000793a4) field_cale_ev2_pane_g3_ParamLimits

0x6ab2,	// (0x000793a4) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008207b) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008207b) field_cale_ev2_pane_g

0xc4b8,	// (0x0007edaa) field_cale_ev2_pane_t1_ParamLimits

0xc4b8,	// (0x0007edaa) field_cale_ev2_pane_t1

0xc4cf,	// (0x0007edc1) field_cale_ev2_pane_t2_ParamLimits

0xc4cf,	// (0x0007edc1) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00082084) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00082084) field_cale_ev2_pane_t

0x50b2,	// (0x000779a4) main_postcard_pane_g5_ParamLimits

0x50b2,	// (0x000779a4) main_postcard_pane_g5

0x50c8,	// (0x000779ba) main_postcard_pane_g6_ParamLimits

0x50c8,	// (0x000779ba) main_postcard_pane_g6

0x2c02,	// (0x000754f4) camera2_autofocus_pane_cp_ParamLimits

0x2c02,	// (0x000754f4) camera2_autofocus_pane_cp

0x19ac,	// (0x0007429e) main_mup3_pane

0x6aea,	// (0x000793dc) main_mup3_pane_g1_ParamLimits

0x6aea,	// (0x000793dc) main_mup3_pane_g1

0x6b0c,	// (0x000793fe) main_mup3_pane_g2_ParamLimits

0x6b0c,	// (0x000793fe) main_mup3_pane_g2

0x6b8a,	// (0x0007947c) main_mup3_pane_g3_ParamLimits

0x6b8a,	// (0x0007947c) main_mup3_pane_g3

0x6bcc,	// (0x000794be) main_mup3_pane_g4_ParamLimits

0x6bcc,	// (0x000794be) main_mup3_pane_g4

0x6c0e,	// (0x00079500) main_mup3_pane_g5_ParamLimits

0x6c0e,	// (0x00079500) main_mup3_pane_g5

0x6c50,	// (0x00079542) main_mup3_pane_g6_ParamLimits

0x6c50,	// (0x00079542) main_mup3_pane_g6

0xc4e4,	// (0x0007edd6) main_mup3_pane_g7_ParamLimits

0xc4e4,	// (0x0007edd6) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00082094) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00082094) main_mup3_pane_g

0x6cca,	// (0x000795bc) main_mup3_pane_t1_ParamLimits

0x6cca,	// (0x000795bc) main_mup3_pane_t1

0x6d3a,	// (0x0007962c) main_mup3_pane_t2_ParamLimits

0x6d3a,	// (0x0007962c) main_mup3_pane_t2

0x6e0a,	// (0x000796fc) main_mup3_pane_t4_ParamLimits

0x6e0a,	// (0x000796fc) main_mup3_pane_t4

0x6e60,	// (0x00079752) main_mup3_pane_t5_ParamLimits

0x6e60,	// (0x00079752) main_mup3_pane_t5

0x6f14,	// (0x00079806) main_mup3_pane_t6_ParamLimits

0x6f14,	// (0x00079806) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000820a5) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000820a5) main_mup3_pane_t

0x6fc8,	// (0x000798ba) mup3_progress_pane_ParamLimits

0x6fc8,	// (0x000798ba) mup3_progress_pane

0x704a,	// (0x0007993c) popup_mup3_control_window_ParamLimits

0x704a,	// (0x0007993c) popup_mup3_control_window

0xc4f2,	// (0x0007ede4) popup_mup3_text_window

0x707c,	// (0x0007996e) mup3_progress_pane_t1

0x7093,	// (0x00079985) mup3_progress_pane_t2

0xc4fa,	// (0x0007edec) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000820b2) mup3_progress_pane_t

0xc511,	// (0x0007ee03) mup_progress_pane_cp03

0xaa0f,	// (0x0007d301) bg_tb_trans_pane_cp04

0x70aa,	// (0x0007999c) mup3_volume_pane

0x70b2,	// (0x000799a4) popup_mup3_control_window_g1

0x70bb,	// (0x000799ad) mup3_volume_pane_g1

0x70c4,	// (0x000799b6) mup3_volume_pane_g2

0x70cd,	// (0x000799bf) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x000820b9) mup3_volume_pane_g

0xaa0f,	// (0x0007d301) bg_tb_trans_pane_cp03

0xc521,	// (0x0007ee13) popup_mup3_text_window_g1

0xc529,	// (0x0007ee1b) popup_mup3_text_window_t1

0x253b,	// (0x00074e2d) list_calc_item_pane_g1_ParamLimits

0xbf3a,	// (0x0007e82c) mup_volume_pane_cp_g1

0x6a32,	// (0x00079324) main_touch_calib_pane_t3

0x6a46,	// (0x00079338) main_touch_calib_pane_t4

0x6a5a,	// (0x0007934c) main_touch_calib_pane_t5

0xaa19,	// (0x0007d30b) aid_cell_size_toolbar2

0xaa21,	// (0x0007d313) aid_popup3_width_pane

0xaa2d,	// (0x0007d31f) aid_zoom_text_msg_primary

0xab4b,	// (0x0007d43d) vorec_t7

0x24a8,	// (0x00074d9a) bg_calc_paper_pane_g1_ParamLimits

0x24b4,	// (0x00074da6) bg_calc_paper_pane_g2_ParamLimits

0x24c0,	// (0x00074db2) bg_calc_paper_pane_g3_ParamLimits

0x24cc,	// (0x00074dbe) bg_calc_paper_pane_g4_ParamLimits

0x24d8,	// (0x00074dca) bg_calc_paper_pane_g5_ParamLimits

0x24e4,	// (0x00074dd6) bg_calc_paper_pane_g6_ParamLimits

0x24f3,	// (0x00074de5) bg_calc_paper_pane_g7_ParamLimits

0x2502,	// (0x00074df4) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00081a6c) bg_calc_paper_pane_g_ParamLimits

0x2515,	// (0x00074e07) calc_bg_paper_pane_g9_ParamLimits

0x2d5c,	// (0x0007564e) image_qvga_pane_ParamLimits

0x2d5c,	// (0x0007564e) image_qvga_pane

0x20de,	// (0x000749d0) bg_popup_sub_pane_cp04_ParamLimits

0x5241,	// (0x00077b33) popup_mup_playback_window_g1_ParamLimits

0x524d,	// (0x00077b3f) popup_mup_playback_window_t1_ParamLimits

0x5262,	// (0x00077b54) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00081df8) popup_mup_playback_window_t_ParamLimits

0x6594,	// (0x00078e86) main_mup2_pane_g3_ParamLimits

0x6594,	// (0x00078e86) main_mup2_pane_g3

0x30f1,	// (0x000759e3) popup_toolbar_window_cp04

0xaf94,	// (0x0007d886) popup_call2_audio_second_window_g3_ParamLimits

0xaf94,	// (0x0007d886) popup_call2_audio_second_window_g3

0xb39e,	// (0x0007dc90) popup_call2_audio_first_window_g4_ParamLimits

0xb39e,	// (0x0007dc90) popup_call2_audio_first_window_g4

0xba1d,	// (0x0007e30f) popup_call2_audio_in_window_g4_ParamLimits

0xba1d,	// (0x0007e30f) popup_call2_audio_in_window_g4

0x5277,	// (0x00077b69) aid_area_sk_bg_cut_ParamLimits

0x5277,	// (0x00077b69) aid_area_sk_bg_cut

0x5295,	// (0x00077b87) aid_area_sk_bg_cut_2_ParamLimits

0x5295,	// (0x00077b87) aid_area_sk_bg_cut_2

0x6897,	// (0x00079189) aid_placing_details_win

0x689f,	// (0x00079191) aid_placing_details_win_2

0xc365,	// (0x0007ec57) camera2_autofocus_pane_g1_ParamLimits

0x194d,	// (0x0007423f) popup_fixed_preview_cale_window_ParamLimits

0x194d,	// (0x0007423f) popup_fixed_preview_cale_window

0x49cb,	// (0x000772bd) navi_slider_pane_g3

0x49d4,	// (0x000772c6) navi_slider_pane_g4

0x49dd,	// (0x000772cf) navi_slider_pane_g5

0x49cb,	// (0x000772bd) navi_slider_pane_g6

0xad67,	// (0x0007d659) navi_slider_pane_g7

0x4ef6,	// (0x000777e8) mup_scale_pane_g3

0x4eff,	// (0x000777f1) mup_scale_pane_g4

0x4f08,	// (0x000777fa) mup_scale_pane_g5

0x4f11,	// (0x00077803) mup_scale_pane_g6

0x4f1a,	// (0x0007780c) mup_scale_pane_g7

0x49cb,	// (0x000772bd) cams2_slider_pane_g3

0xbfbc,	// (0x0007e8ae) cams2_slider_pane_g4

0xeb35,	// (0x00081427) cams2_slider_pane_g5

0x49cb,	// (0x000772bd) cams2_slider_pane_g6

0xeb3d,	// (0x0008142f) cams2_slider_pane_g7

0xc1e7,	// (0x0007ead9) camera2_autofocus_pane_cp_g1

0xc537,	// (0x0007ee29) bg_popup_preview_window_pane_cp02_ParamLimits

0xc537,	// (0x0007ee29) bg_popup_preview_window_pane_cp02

0xc543,	// (0x0007ee35) list_fp_cale_pane_ParamLimits

0xc543,	// (0x0007ee35) list_fp_cale_pane

0xc54f,	// (0x0007ee41) popup_fixed_preview_cale_window_t1_ParamLimits

0xc54f,	// (0x0007ee41) popup_fixed_preview_cale_window_t1

0x70d6,	// (0x000799c8) popup_fixed_preview_cale_window_t2_ParamLimits

0x70d6,	// (0x000799c8) popup_fixed_preview_cale_window_t2

0x70eb,	// (0x000799dd) popup_fixed_preview_cale_window_t3_ParamLimits

0x70eb,	// (0x000799dd) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x000820c0) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x000820c0) popup_fixed_preview_cale_window_t

0x7100,	// (0x000799f2) list_single_fp_cale_pane_ParamLimits

0x7100,	// (0x000799f2) list_single_fp_cale_pane

0xc56d,	// (0x0007ee5f) list_single_fp_cale_pane_g1_ParamLimits

0xc56d,	// (0x0007ee5f) list_single_fp_cale_pane_g1

0xc579,	// (0x0007ee6b) list_single_fp_cale_pane_g2_ParamLimits

0xc579,	// (0x0007ee6b) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x000820c7) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x000820c7) list_single_fp_cale_pane_g

0xc592,	// (0x0007ee84) list_single_fp_cale_pane_t1_ParamLimits

0xc592,	// (0x0007ee84) list_single_fp_cale_pane_t1

0xc5a4,	// (0x0007ee96) list_single_fp_cale_pane_t2_ParamLimits

0xc5a4,	// (0x0007ee96) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000820ce) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000820ce) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaa0f,	// (0x0007d301) main_dialer_pane

0x7115,	// (0x00079a07) aid_cell_size_keypad

0x711f,	// (0x00079a11) dialer_ne_pane

0x7127,	// (0x00079a19) grid_dialer_command_1_pane

0x712f,	// (0x00079a21) grid_dialer_command_2_pane

0x7137,	// (0x00079a29) grid_dialer_keypad_pane

0x7149,	// (0x00079a3b) bg_popup_call_pane_cp06_ParamLimits

0x7149,	// (0x00079a3b) bg_popup_call_pane_cp06

0x7155,	// (0x00079a47) dialer_ne_clear_pane_ParamLimits

0x7155,	// (0x00079a47) dialer_ne_clear_pane

0xc5d7,	// (0x0007eec9) dialer_ne_pane_g1

0xc5df,	// (0x0007eed1) dialer_ne_pane_t1_ParamLimits

0xc5df,	// (0x0007eed1) dialer_ne_pane_t1

0x7161,	// (0x00079a53) dialer_ne_pane_t2_ParamLimits

0x7161,	// (0x00079a53) dialer_ne_pane_t2

0x718b,	// (0x00079a7d) dialer_ne_pane_t3_ParamLimits

0x718b,	// (0x00079a7d) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000820d3) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000820d3) dialer_ne_pane_t

0x71bb,	// (0x00079aad) dialer_ne_pane_t3_copy1_ParamLimits

0x71bb,	// (0x00079aad) dialer_ne_pane_t3_copy1

0x71ea,	// (0x00079adc) cell_dialer_keypad_pane_ParamLimits

0x71ea,	// (0x00079adc) cell_dialer_keypad_pane

0x7201,	// (0x00079af3) cell_dialer_command_1_pane_ParamLimits

0x7201,	// (0x00079af3) cell_dialer_command_1_pane

0x7217,	// (0x00079b09) cell_dialer_command_2_pane_ParamLimits

0x7217,	// (0x00079b09) cell_dialer_command_2_pane

0xc5f1,	// (0x0007eee3) bg_button_pane_cp02_ParamLimits

0xc5f1,	// (0x0007eee3) bg_button_pane_cp02

0x7226,	// (0x00079b18) cell_dialer_keypad_pane_g1_ParamLimits

0x7226,	// (0x00079b18) cell_dialer_keypad_pane_g1

0xc5f1,	// (0x0007eee3) bg_button_pane_cp03_ParamLimits

0xc5f1,	// (0x0007eee3) bg_button_pane_cp03

0x723a,	// (0x00079b2c) cell_dialer_command_1_pane_g1_ParamLimits

0x723a,	// (0x00079b2c) cell_dialer_command_1_pane_g1

0xc5fd,	// (0x0007eeef) bg_button_pane_cp04

0x724e,	// (0x00079b40) cell_dialer_command_2_pane_g1

0x49ba,	// (0x000772ac) bg_button_pane_cp06

0xc605,	// (0x0007eef7) dialer_ne_clear_pane_g1

0x4862,	// (0x00077154) navi_pane_g2

0x4890,	// (0x00077182) navi_pane_g3

0x0002,

0xf409,	// (0x00081cfb) navi_pane_g

0x491d,	// (0x0007720f) navi_pane_mv_g2

0x4944,	// (0x00077236) navi_pane_mv_g5

0x494c,	// (0x0007723e) navi_pane_mv_t1

0x2443,	// (0x00074d35) main_clock2_pane

0x7282,	// (0x00079b74) main_clock2_list_pane_ParamLimits

0x7282,	// (0x00079b74) main_clock2_list_pane

0x72b8,	// (0x00079baa) main_clock2_pane_t1_ParamLimits

0x72b8,	// (0x00079baa) main_clock2_pane_t1

0x72f4,	// (0x00079be6) main_clock2_pane_t2_ParamLimits

0x72f4,	// (0x00079be6) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000820da) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000820da) main_clock2_pane_t

0x737e,	// (0x00079c70) popup_clock_analogue_window_cp03_ParamLimits

0x737e,	// (0x00079c70) popup_clock_analogue_window_cp03

0x73a3,	// (0x00079c95) popup_clock_digital_window_cp02_ParamLimits

0x73a3,	// (0x00079c95) popup_clock_digital_window_cp02

0x7414,	// (0x00079d06) main_clock2_list_single_pane_ParamLimits

0x7414,	// (0x00079d06) main_clock2_list_single_pane

0x49ba,	// (0x000772ac) list_highlight_pane_cp05

0xc60d,	// (0x0007eeff) main_clock2_list_single_pane_t1

0x30f1,	// (0x000759e3) popup_toolbar_window_cp04_ParamLimits

0x68c1,	// (0x000791b3) camera2_autofocus_pane_g2_ParamLimits

0x68c1,	// (0x000791b3) camera2_autofocus_pane_g2

0x68cd,	// (0x000791bf) camera2_autofocus_pane_g3_ParamLimits

0x68cd,	// (0x000791bf) camera2_autofocus_pane_g3

0x68d9,	// (0x000791cb) camera2_autofocus_pane_g4_ParamLimits

0x68d9,	// (0x000791cb) camera2_autofocus_pane_g4

0x68e5,	// (0x000791d7) camera2_autofocus_pane_g5_ParamLimits

0x68e5,	// (0x000791d7) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00082023) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00082023) camera2_autofocus_pane_g

0x6aca,	// (0x000793bc) camera2_autofocus_pane_cp_g2

0x6ad2,	// (0x000793c4) camera2_autofocus_pane_cp_g3

0x6ada,	// (0x000793cc) camera2_autofocus_pane_cp_g4

0x6ae2,	// (0x000793d4) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00082089) camera2_autofocus_pane_cp_g

0x7141,	// (0x00079a33) popup_dialer_spcha_window

0xaa0f,	// (0x0007d301) bg_popup_sub_pane_cp07

0xc61b,	// (0x0007ef0d) list_spcha_pane

0xc623,	// (0x0007ef15) list_single_spcha_pane_ParamLimits

0xc623,	// (0x0007ef15) list_single_spcha_pane

0xaa0f,	// (0x0007d301) list_highlight_pane_cp06

0xc634,	// (0x0007ef26) list_single_spcha_pane_t1

0xb7c7,	// (0x0007e0b9) popup_call2_audio_out_window_g4_ParamLimits

0xb7c7,	// (0x0007e0b9) popup_call2_audio_out_window_g4

0xaa0f,	// (0x0007d301) main_imed2_pane

0xbda6,	// (0x0007e698) popup_imed_adjust2_window

0x5c9e,	// (0x00078590) popup_imed_trans_window_ParamLimits

0x5c9e,	// (0x00078590) popup_imed_trans_window

0xc025,	// (0x0007e917) popup_blid_sat_info2_window_t1

0xc033,	// (0x0007e925) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00081fb8) popup_blid_sat_info2_window_t

0x74be,	// (0x00079db0) aid_size_cell_colour_35

0x74de,	// (0x00079dd0) aid_size_cell_colour_112

0x74fe,	// (0x00079df0) aid_size_cell_effect

0xbd7e,	// (0x0007e670) bg_tb_trans_pane_cp02

0x40ce,	// (0x000769c0) heading_imed_pane

0x751e,	// (0x00079e10) listscroll_imed_pane

0xc642,	// (0x0007ef34) heading_imed_pane_g1

0xc64a,	// (0x0007ef3c) heading_imed_pane_t1

0xc658,	// (0x0007ef4a) grid_imed_colour_35_pane_ParamLimits

0xc658,	// (0x0007ef4a) grid_imed_colour_35_pane

0x752a,	// (0x00079e1c) grid_imed_effect_pane

0xc66f,	// (0x0007ef61) list_imed_aspect_pane

0x7540,	// (0x00079e32) scroll_pane_cp027_ParamLimits

0x7540,	// (0x00079e32) scroll_pane_cp027

0x7551,	// (0x00079e43) cell_imed_effect_pane_ParamLimits

0x7551,	// (0x00079e43) cell_imed_effect_pane

0xc677,	// (0x0007ef69) cell_imed_colour_pane_ParamLimits

0xc677,	// (0x0007ef69) cell_imed_colour_pane

0xc6b9,	// (0x0007efab) cell_imed_colour_pane_g1_ParamLimits

0xc6b9,	// (0x0007efab) cell_imed_colour_pane_g1

0xc6ca,	// (0x0007efbc) hgihlgiht_grid_pane_cp016_ParamLimits

0xc6ca,	// (0x0007efbc) hgihlgiht_grid_pane_cp016

0x7578,	// (0x00079e6a) cell_imed_effect_pane_g1

0x7580,	// (0x00079e72) grid_highlight_pane_cp017

0xc6db,	// (0x0007efcd) list_imed_single_pane_ParamLimits

0xc6db,	// (0x0007efcd) list_imed_single_pane

0xaa0f,	// (0x0007d301) list_highlight_pane_cp07

0xc6f0,	// (0x0007efe2) list_imed_aspect_pane_comp1_t1

0xbd7e,	// (0x0007e670) bg_tb_trans_pane_cp05

0xc712,	// (0x0007f004) popup_imed_adjust2_window_g1

0xc739,	// (0x0007f02b) popup_imed_adjust2_window_t1

0xc751,	// (0x0007f043) slider_imed_adjust_pane

0xc765,	// (0x0007f057) slider_imed_adjust_pane_g1

0xc775,	// (0x0007f067) slider_imed_adjust_pane_g2

0xc785,	// (0x0007f077) slider_imed_adjust_pane_g3

0xc796,	// (0x0007f088) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000820f7) slider_imed_adjust_pane_g

0x7589,	// (0x00079e7b) aid_size_cell_clipart2

0x7595,	// (0x00079e87) grid_imed_clipart_pane

0xc7a7,	// (0x0007f099) scroll_pane_cp031

0x759f,	// (0x00079e91) cell_imed_clipart_pane_ParamLimits

0x759f,	// (0x00079e91) cell_imed_clipart_pane

0x75c1,	// (0x00079eb3) cell_imed_clipart_pane_g1

0xaa0f,	// (0x0007d301) grid_highlight_pane_cp014

0x7297,	// (0x00079b89) main_clock2_pane_g1_ParamLimits

0x7297,	// (0x00079b89) main_clock2_pane_g1

0x73bf,	// (0x00079cb1) aid_call2_pane_cp10

0x73d1,	// (0x00079cc3) aid_call_pane_cp10

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g1

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g2

0x73e3,	// (0x00079cd5) popup_clock_analogue_window_cp10_g3

0x73e3,	// (0x00079cd5) popup_clock_analogue_window_cp10_g4

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000820e5) popup_clock_analogue_window_cp10_g

0x73f5,	// (0x00079ce7) popup_clock_analogue_window_cp10_t1

0x7426,	// (0x00079d18) clock_digital_number_pane_cp10_ParamLimits

0x7426,	// (0x00079d18) clock_digital_number_pane_cp10

0x743e,	// (0x00079d30) clock_digital_number_pane_cp11_ParamLimits

0x743e,	// (0x00079d30) clock_digital_number_pane_cp11

0x7456,	// (0x00079d48) clock_digital_number_pane_cp12_ParamLimits

0x7456,	// (0x00079d48) clock_digital_number_pane_cp12

0x746e,	// (0x00079d60) clock_digital_number_pane_cp13_ParamLimits

0x746e,	// (0x00079d60) clock_digital_number_pane_cp13

0x7486,	// (0x00079d78) clock_digital_separator_pane_cp10_ParamLimits

0x7486,	// (0x00079d78) clock_digital_separator_pane_cp10

0x749e,	// (0x00079d90) popup_clock_digital_window_cp02_t1_ParamLimits

0x749e,	// (0x00079d90) popup_clock_digital_window_cp02_t1

0x20d6,	// (0x000749c8) clock_digital_number_pane_cp10_g1

0x20d6,	// (0x000749c8) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00082100) clock_digital_number_pane_cp10_g

0x20d6,	// (0x000749c8) clock_digital_separator_pane_cp10_g1

0x20d6,	// (0x000749c8) clock_digital_separator_pane_g2_cp10

0x498a,	// (0x0007727c) navi_pane_vded_g4

0x4993,	// (0x00077285) navi_pane_vded_g5

0x499c,	// (0x0007728e) navi_pane_vded_t1

0xaa0f,	// (0x0007d301) main_vded_pane

0x75ca,	// (0x00079ebc) main_vded_pane_g1

0x75d4,	// (0x00079ec6) main_vded_pane_g2

0x75de,	// (0x00079ed0) main_vded_pane_g3

0x0002,

0xf813,	// (0x00082105) main_vded_pane_g

0x75e8,	// (0x00079eda) main_vded_pane_t1

0x75f6,	// (0x00079ee8) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008210c) main_vded_pane_t

0x7604,	// (0x00079ef6) vded_slider_pane

0x760c,	// (0x00079efe) vded_video_pane

0xc7af,	// (0x0007f0a1) vded_video_pane_g1

0x7614,	// (0x00079f06) vded_video_pane_g2

0xc1e7,	// (0x0007ead9) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00082111) vded_video_pane_g

0xc7b9,	// (0x0007f0ab) vded_slider_pane_g1

0xbf3a,	// (0x0007e82c) vded_slider_pane_g2

0xc7c2,	// (0x0007f0b4) vded_slider_pane_g3

0xc7cb,	// (0x0007f0bd) vded_slider_pane_g4

0xc7d4,	// (0x0007f0c6) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00082118) vded_slider_pane_g

0x7032,	// (0x00079924) mup3_rocker_pane_ParamLimits

0x7032,	// (0x00079924) mup3_rocker_pane

0x761d,	// (0x00079f0f) mup3_control_keys_pane_g1

0x7625,	// (0x00079f17) mup3_control_keys_pane_g2

0x762d,	// (0x00079f1f) mup3_control_keys_pane_g3

0x7635,	// (0x00079f27) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00082123) mup3_control_keys_pane_g

0x198e,	// (0x00074280) popup_toolbar2_fixed_window_cp01_ParamLimits

0x198e,	// (0x00074280) popup_toolbar2_fixed_window_cp01

0x7066,	// (0x00079958) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7066,	// (0x00079958) popup_toolbar2_fixed_window_cp02

0xb106,	// (0x0007d9f8) popup_call2_audio_second_window_t4_ParamLimits

0xb106,	// (0x0007d9f8) popup_call2_audio_second_window_t4

0xb634,	// (0x0007df26) popup_call2_audio_first_window_t6_ParamLimits

0xb634,	// (0x0007df26) popup_call2_audio_first_window_t6

0xb8ca,	// (0x0007e1bc) popup_call2_audio_out_window_t6_ParamLimits

0xb8ca,	// (0x0007e1bc) popup_call2_audio_out_window_t6

0xaa0f,	// (0x0007d301) main_vitu_pane

0x7645,	// (0x00079f37) aid_size_cell_itu_ParamLimits

0x7645,	// (0x00079f37) aid_size_cell_itu

0x19ac,	// (0x0007429e) bg_popup_window_pane_cp08_ParamLimits

0x19ac,	// (0x0007429e) bg_popup_window_pane_cp08

0x765b,	// (0x00079f4d) field_vitu_entry_pane_ParamLimits

0x765b,	// (0x00079f4d) field_vitu_entry_pane

0x7672,	// (0x00079f64) grid_vitu_function_pane_ParamLimits

0x7672,	// (0x00079f64) grid_vitu_function_pane

0x768d,	// (0x00079f7f) grid_vitu_itu_pane_ParamLimits

0x768d,	// (0x00079f7f) grid_vitu_itu_pane

0x76ab,	// (0x00079f9d) cell_vitu_itu_pane_ParamLimits

0x76ab,	// (0x00079f9d) cell_vitu_itu_pane

0x76cd,	// (0x00079fbf) cell_vitu_function_pane_ParamLimits

0x76cd,	// (0x00079fbf) cell_vitu_function_pane

0x19ac,	// (0x0007429e) bg_popup_sub_pane_cp08_ParamLimits

0x19ac,	// (0x0007429e) bg_popup_sub_pane_cp08

0x76e6,	// (0x00079fd8) field_vitu_entry_pane_t1_ParamLimits

0x76e6,	// (0x00079fd8) field_vitu_entry_pane_t1

0xc7f5,	// (0x0007f0e7) field_vitu_entry_pane_t2_ParamLimits

0xc7f5,	// (0x0007f0e7) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00082131) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00082131) field_vitu_entry_pane_t

0xc812,	// (0x0007f104) bg_button_pane_cp05_ParamLimits

0xc812,	// (0x0007f104) bg_button_pane_cp05

0x7704,	// (0x00079ff6) cell_vitu_itu_pane_g1

0x771c,	// (0x0007a00e) cell_vitu_itu_pane_t1_ParamLimits

0x771c,	// (0x0007a00e) cell_vitu_itu_pane_t1

0x772e,	// (0x0007a020) cell_vitu_itu_pane_t2_ParamLimits

0x772e,	// (0x0007a020) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00082136) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00082136) cell_vitu_itu_pane_t

0xc820,	// (0x0007f112) bg_button_pane_cp07

0x7763,	// (0x0007a055) cell_vitu_function_pane_g1

0xaa69,	// (0x0007d35b) main_calc_pane_g1

0x17b0,	// (0x000740a2) aid_visual_content_pane

0xaa0f,	// (0x0007d301) main_vradio_pane

0x776c,	// (0x0007a05e) main_vradio_pane_g1_ParamLimits

0x776c,	// (0x0007a05e) main_vradio_pane_g1

0xc82a,	// (0x0007f11c) main_vradio_pane_g2_ParamLimits

0xc82a,	// (0x0007f11c) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008213d) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008213d) main_vradio_pane_g

0x7785,	// (0x0007a077) main_vradio_pane_t1_ParamLimits

0x7785,	// (0x0007a077) main_vradio_pane_t1

0x779a,	// (0x0007a08c) main_vradio_pane_t2_ParamLimits

0x779a,	// (0x0007a08c) main_vradio_pane_t2

0xc837,	// (0x0007f129) main_vradio_pane_t3_ParamLimits

0xc837,	// (0x0007f129) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00082142) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00082142) main_vradio_pane_t

0x77af,	// (0x0007a0a1) vradio_rocker_control_pane_ParamLimits

0x77af,	// (0x0007a0a1) vradio_rocker_control_pane

0x77c1,	// (0x0007a0b3) vradio_station_info_pane_ParamLimits

0x77c1,	// (0x0007a0b3) vradio_station_info_pane

0xc84b,	// (0x0007f13d) vradio_frequency_info_pane_ParamLimits

0xc84b,	// (0x0007f13d) vradio_frequency_info_pane

0xc1e7,	// (0x0007ead9) vradio_station_info_pane_g1

0xc85a,	// (0x0007f14c) vradio_station_info_pane_t1_ParamLimits

0xc85a,	// (0x0007f14c) vradio_station_info_pane_t1

0xc87c,	// (0x0007f16e) vradio_station_info_pane_t2_ParamLimits

0xc87c,	// (0x0007f16e) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00082149) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00082149) vradio_station_info_pane_t

0xc88e,	// (0x0007f180) vradio_tuning_pane

0xc896,	// (0x0007f188) vradio_rocker_control_pane_g1

0xc89e,	// (0x0007f190) vradio_rocker_control_pane_g2

0xc8a6,	// (0x0007f198) vradio_rocker_control_pane_g3

0xc8ae,	// (0x0007f1a0) vradio_rocker_control_pane_g4

0xc8b6,	// (0x0007f1a8) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008214e) vradio_rocker_control_pane_g

0x77d3,	// (0x0007a0c5) vradio_frequency_info_pane_g1

0xc8be,	// (0x0007f1b0) vradio_frequency_info_pane_t1_ParamLimits

0xc8be,	// (0x0007f1b0) vradio_frequency_info_pane_t1

0x77dd,	// (0x0007a0cf) vradio_tuning_pane_g1

0x77e8,	// (0x0007a0da) vradio_tuning_pane_t1

0xaa45,	// (0x0007d337) area_side_right_pane_ParamLimits

0xaa45,	// (0x0007d337) area_side_right_pane

0xbd45,	// (0x0007e637) status_small_pane_g1

0xbd4d,	// (0x0007e63f) status_small_pane_g2

0xbd56,	// (0x0007e648) status_small_pane_g3

0xbd5f,	// (0x0007e651) status_small_pane_g4

0x0003,

0xf61c,	// (0x00081f0e) status_small_pane_g

0xbd68,	// (0x0007e65a) status_small_pane_t1

0xaa0f,	// (0x0007d301) main_video3_pane

0xc8d2,	// (0x0007f1c4) cams_zoom_vslider_pane

0xc8da,	// (0x0007f1cc) image3_wide_pane_ParamLimits

0xc8da,	// (0x0007f1cc) image3_wide_pane

0xc8f4,	// (0x0007f1e6) image3_wide_small_pane

0xc900,	// (0x0007f1f2) main_video3_pane_g1_ParamLimits

0xc900,	// (0x0007f1f2) main_video3_pane_g1

0xc91c,	// (0x0007f20e) main_video3_pane_g2_ParamLimits

0xc91c,	// (0x0007f20e) main_video3_pane_g2

0x0001,

0xf867,	// (0x00082159) main_video3_pane_g_ParamLimits

0xf867,	// (0x00082159) main_video3_pane_g

0xc938,	// (0x0007f22a) main_video3_pane_t1_ParamLimits

0xc938,	// (0x0007f22a) main_video3_pane_t1

0xc963,	// (0x0007f255) main_video3_pane_t2_ParamLimits

0xc963,	// (0x0007f255) main_video3_pane_t2

0xc98e,	// (0x0007f280) main_video3_pane_t3_ParamLimits

0xc98e,	// (0x0007f280) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008215e) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008215e) main_video3_pane_t

0xc9bb,	// (0x0007f2ad) cams_zoom_vslider_pane_g1

0xc9c4,	// (0x0007f2b6) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x00082165) cams_zoom_vslider_pane_g

0xc9cc,	// (0x0007f2be) small_slider_vertical_pane

0xc1e7,	// (0x0007ead9) small_slider_vertical_pane_g1

0xc1e7,	// (0x0007ead9) small_slider_vertical_pane_g2

0xc9d4,	// (0x0007f2c6) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008216a) small_slider_vertical_pane_g

0xaa0f,	// (0x0007d301) main_hwr_training_pane

0xc9dd,	// (0x0007f2cf) hwr_training_instruct_pane_ParamLimits

0xc9dd,	// (0x0007f2cf) hwr_training_instruct_pane

0x77f7,	// (0x0007a0e9) hwr_training_navi_pane_ParamLimits

0x77f7,	// (0x0007a0e9) hwr_training_navi_pane

0x7816,	// (0x0007a108) hwr_training_write_pane_ParamLimits

0x7816,	// (0x0007a108) hwr_training_write_pane

0xaa0f,	// (0x0007d301) bg_frame_shadow_pane

0xca14,	// (0x0007f306) hwr_training_write_pane_g1

0xca1c,	// (0x0007f30e) hwr_training_write_pane_g2

0xca24,	// (0x0007f316) hwr_training_write_pane_g3

0xca2c,	// (0x0007f31e) hwr_training_write_pane_g4

0xca34,	// (0x0007f326) hwr_training_write_pane_g5

0xca3c,	// (0x0007f32e) hwr_training_write_pane_g6

0xca44,	// (0x0007f336) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00082171) hwr_training_write_pane_g

0xeb52,	// (0x00081444) hwr_training_navi_pane_g1_ParamLimits

0xeb52,	// (0x00081444) hwr_training_navi_pane_g1

0xeb64,	// (0x00081456) hwr_training_navi_pane_g2_ParamLimits

0xeb64,	// (0x00081456) hwr_training_navi_pane_g2

0xeb76,	// (0x00081468) hwr_training_navi_pane_g3_ParamLimits

0xeb76,	// (0x00081468) hwr_training_navi_pane_g3

0xeb86,	// (0x00081478) hwr_training_navi_pane_g4_ParamLimits

0xeb86,	// (0x00081478) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00082180) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00082180) hwr_training_navi_pane_g

0xeb93,	// (0x00081485) hwr_training_navi_pane_t1

0x785e,	// (0x0007a150) list_single_hwr_training_instruct_pane_ParamLimits

0x785e,	// (0x0007a150) list_single_hwr_training_instruct_pane

0xca4c,	// (0x0007f33e) list_single_hwr_training_instruct_pane_t1

0xc127,	// (0x0007ea19) bg_frame_shadow_pane_g1

0xca5b,	// (0x0007f34d) bg_frame_shadow_pane_g2

0xca63,	// (0x0007f355) bg_frame_shadow_pane_g3

0xca6b,	// (0x0007f35d) bg_frame_shadow_pane_g4

0xca73,	// (0x0007f365) bg_frame_shadow_pane_g5

0xca7b,	// (0x0007f36d) bg_frame_shadow_pane_g6

0xca83,	// (0x0007f375) bg_frame_shadow_pane_g7

0x2689,	// (0x00074f7b) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008218b) bg_frame_shadow_pane_g

0xaa0f,	// (0x0007d301) main_video_tele_dialer_pane

0x7873,	// (0x0007a165) aid_size_cell_video_keypad_ParamLimits

0x7873,	// (0x0007a165) aid_size_cell_video_keypad

0x788d,	// (0x0007a17f) grid_video_dialer_keypad_pane_ParamLimits

0x788d,	// (0x0007a17f) grid_video_dialer_keypad_pane

0x78d7,	// (0x0007a1c9) video_down_pane_cp_ParamLimits

0x78d7,	// (0x0007a1c9) video_down_pane_cp

0x78e7,	// (0x0007a1d9) cell_video_dialer_keypad_pane_ParamLimits

0x78e7,	// (0x0007a1d9) cell_video_dialer_keypad_pane

0xcaa7,	// (0x0007f399) bg_button_pane_cp08_ParamLimits

0xcaa7,	// (0x0007f399) bg_button_pane_cp08

0x7909,	// (0x0007a1fb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7909,	// (0x0007a1fb) cell_video_dialer_keypad_pane_g1

0x701c,	// (0x0007990e) mup3_rocker2_pane_ParamLimits

0x701c,	// (0x0007990e) mup3_rocker2_pane

0xc1e7,	// (0x0007ead9) mup3_rocker2_pane_g1

0x5b7f,	// (0x00078471) main_dialer2_pane

0xaa0f,	// (0x0007d301) main_mp4_pane

0xeba9,	// (0x0008149b) main_mp4_pane_g1_ParamLimits

0xeba9,	// (0x0008149b) main_mp4_pane_g1

0xeba9,	// (0x0008149b) main_mp4_pane_g2_ParamLimits

0xeba9,	// (0x0008149b) main_mp4_pane_g2

0x7943,	// (0x0007a235) main_mp4_pane_g3_ParamLimits

0x7943,	// (0x0007a235) main_mp4_pane_g3

0xebb7,	// (0x000814a9) main_mp4_pane_g4_ParamLimits

0xebb7,	// (0x000814a9) main_mp4_pane_g4

0xebdf,	// (0x000814d1) main_mp4_pane_g5_ParamLimits

0xebdf,	// (0x000814d1) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000821ab) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000821ab) main_mp4_pane_g

0xec2f,	// (0x00081521) main_mp4_pane_t1_ParamLimits

0xec2f,	// (0x00081521) main_mp4_pane_t1

0xec8b,	// (0x0008157d) main_mp4_pane_t2_ParamLimits

0xec8b,	// (0x0008157d) main_mp4_pane_t2

0xcab3,	// (0x0007f3a5) main_mp4_pane_t3_ParamLimits

0xcab3,	// (0x0007f3a5) main_mp4_pane_t3

0xecdd,	// (0x000815cf) main_mp4_pane_t4_ParamLimits

0xecdd,	// (0x000815cf) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000821b8) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000821b8) main_mp4_pane_t

0xed21,	// (0x00081613) mp4_progress_pane_ParamLimits

0xed21,	// (0x00081613) mp4_progress_pane

0xed6b,	// (0x0008165d) mp4_rocker_pane_ParamLimits

0xed6b,	// (0x0008165d) mp4_rocker_pane

0xcadb,	// (0x0007f3cd) mp4_progress_pane_t1

0xcaf4,	// (0x0007f3e6) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000821c1) mp4_progress_pane_t

0xcb0d,	// (0x0007f3ff) mup_progress_pane_cp04

0xc1e7,	// (0x0007ead9) mp4_rocker_pane_g1

0x797f,	// (0x0007a271) aid_cell_size_keypad2_ParamLimits

0x797f,	// (0x0007a271) aid_cell_size_keypad2

0x7995,	// (0x0007a287) dialer2_ne_pane_ParamLimits

0x7995,	// (0x0007a287) dialer2_ne_pane

0x79af,	// (0x0007a2a1) grid_dialer2_keypad_pane_ParamLimits

0x79af,	// (0x0007a2a1) grid_dialer2_keypad_pane

0xbfcc,	// (0x0007e8be) bg_popup_call_pane_cp07_ParamLimits

0xbfcc,	// (0x0007e8be) bg_popup_call_pane_cp07

0x79cb,	// (0x0007a2bd) dialer2_ne_pane_t1_ParamLimits

0x79cb,	// (0x0007a2bd) dialer2_ne_pane_t1

0x7a06,	// (0x0007a2f8) cell_dialer2_keypad_pane_ParamLimits

0x7a06,	// (0x0007a2f8) cell_dialer2_keypad_pane

0xcb2b,	// (0x0007f41d) bg_button_pane_pane_cp04_ParamLimits

0xcb2b,	// (0x0007f41d) bg_button_pane_pane_cp04

0x7a28,	// (0x0007a31a) cell_dialer2_keypad_pane_g1_ParamLimits

0x7a28,	// (0x0007a31a) cell_dialer2_keypad_pane_g1

0x2fb5,	// (0x000758a7) aid_placing_vt_set_content_ParamLimits

0x2fb5,	// (0x000758a7) aid_placing_vt_set_content

0x2fdb,	// (0x000758cd) aid_placing_vt_set_title_ParamLimits

0x2fdb,	// (0x000758cd) aid_placing_vt_set_title

0xaa0f,	// (0x0007d301) main_image3_pane

0x7aee,	// (0x0007a3e0) area_side_right_pane_cp01_ParamLimits

0x7aee,	// (0x0007a3e0) area_side_right_pane_cp01

0xeba9,	// (0x0008149b) main_image3_pane_g1_ParamLimits

0xeba9,	// (0x0008149b) main_image3_pane_g1

0x7b05,	// (0x0007a3f7) main_image3_pane_g2_ParamLimits

0x7b05,	// (0x0007a3f7) main_image3_pane_g2

0x7b2d,	// (0x0007a41f) main_image3_pane_g3_ParamLimits

0x7b2d,	// (0x0007a41f) main_image3_pane_g3

0x7b57,	// (0x0007a449) main_image3_pane_g4_ParamLimits

0x7b57,	// (0x0007a449) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000821d0) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000821d0) main_image3_pane_g

0x7b81,	// (0x0007a473) main_image3_pane_t1_ParamLimits

0x7b81,	// (0x0007a473) main_image3_pane_t1

0x7bd9,	// (0x0007a4cb) main_image3_pane_t2_ParamLimits

0x7bd9,	// (0x0007a4cb) main_image3_pane_t2

0x7c2b,	// (0x0007a51d) main_image3_pane_t3_ParamLimits

0x7c2b,	// (0x0007a51d) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000821d9) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000821d9) main_image3_pane_t

0x19ac,	// (0x0007429e) grid_sctrl_middle_pane_cp01_ParamLimits

0x19ac,	// (0x0007429e) grid_sctrl_middle_pane_cp01

0x7cb3,	// (0x0007a5a5) cell_sctrl_middle_pane_cp01_ParamLimits

0x7cb3,	// (0x0007a5a5) cell_sctrl_middle_pane_cp01

0x7cd0,	// (0x0007a5c2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7cd0,	// (0x0007a5c2) cell_sctrl_middle_pane_cp01_g1

0xaa0f,	// (0x0007d301) main_call4_pane

0x7ce6,	// (0x0007a5d8) aid_size_button_call4_ParamLimits

0x7ce6,	// (0x0007a5d8) aid_size_button_call4

0x7d17,	// (0x0007a609) call4_windows_pane_ParamLimits

0x7d17,	// (0x0007a609) call4_windows_pane

0x7d37,	// (0x0007a629) grid_call4_button_pane_ParamLimits

0x7d37,	// (0x0007a629) grid_call4_button_pane

0xcb37,	// (0x0007f429) call4_windows_conf_pane

0xcb4e,	// (0x0007f440) popup_call4_audio_first_window_ParamLimits

0xcb4e,	// (0x0007f440) popup_call4_audio_first_window

0xcb9a,	// (0x0007f48c) popup_call4_audio_second_window_ParamLimits

0xcb9a,	// (0x0007f48c) popup_call4_audio_second_window

0xcbae,	// (0x0007f4a0) popup_call4_audio_wait_window_ParamLimits

0xcbae,	// (0x0007f4a0) popup_call4_audio_wait_window

0x7d64,	// (0x0007a656) cell_call4_button_pane_ParamLimits

0x7d64,	// (0x0007a656) cell_call4_button_pane

0x7d8d,	// (0x0007a67f) bg_button_pane_cp09_ParamLimits

0x7d8d,	// (0x0007a67f) bg_button_pane_cp09

0x7d99,	// (0x0007a68b) cell_call4_button_pane_g1_ParamLimits

0x7d99,	// (0x0007a68b) cell_call4_button_pane_g1

0x7dbf,	// (0x0007a6b1) cell_call4_button_pane_t1_ParamLimits

0x7dbf,	// (0x0007a6b1) cell_call4_button_pane_t1

0xcbf6,	// (0x0007f4e8) popup_call4_audio_conf_window_ParamLimits

0xcbf6,	// (0x0007f4e8) popup_call4_audio_conf_window

0x707c,	// (0x0007996e) mup3_progress_pane_t1_ParamLimits

0x7093,	// (0x00079985) mup3_progress_pane_t2_ParamLimits

0xc4fa,	// (0x0007edec) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000820b2) mup3_progress_pane_t_ParamLimits

0xc511,	// (0x0007ee03) mup_progress_pane_cp03_ParamLimits

0x763d,	// (0x00079f2f) mup3_control_keys_pane_g4_copy1

0xed4f,	// (0x00081641) mp4_rocker2_pane_ParamLimits

0xed4f,	// (0x00081641) mp4_rocker2_pane

0xcc0a,	// (0x0007f4fc) mp4_rocker2_pane_g1

0xcc12,	// (0x0007f504) mp4_rocker2_pane_g2

0xedbd,	// (0x000816af) mp4_rocker2_pane_g3

0xedc5,	// (0x000816b7) mp4_rocker2_pane_g4

0xedcd,	// (0x000816bf) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000821e2) mp4_rocker2_pane_g

0xaa0f,	// (0x0007d301) main_camera4_pane

0xaa0f,	// (0x0007d301) main_video4_pane

0x78a5,	// (0x0007a197) main_video_tele_dialer_pane_t1_ParamLimits

0x78a5,	// (0x0007a197) main_video_tele_dialer_pane_t1

0x78be,	// (0x0007a1b0) main_video_tele_dialer_pane_t2_ParamLimits

0x78be,	// (0x0007a1b0) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008219c) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008219c) main_video_tele_dialer_pane_t

0x7dfd,	// (0x0007a6ef) cam4_autofocus_pane_ParamLimits

0x7dfd,	// (0x0007a6ef) cam4_autofocus_pane

0x7e13,	// (0x0007a705) cam4_image_uncrop_pane_ParamLimits

0x7e13,	// (0x0007a705) cam4_image_uncrop_pane

0x7e2d,	// (0x0007a71f) cam4_indicators_pane_ParamLimits

0x7e2d,	// (0x0007a71f) cam4_indicators_pane

0x7e58,	// (0x0007a74a) main_camera4_pane_g1_ParamLimits

0x7e58,	// (0x0007a74a) main_camera4_pane_g1

0x7e6b,	// (0x0007a75d) main_camera4_pane_g2_ParamLimits

0x7e6b,	// (0x0007a75d) main_camera4_pane_g2

0x7e7e,	// (0x0007a770) main_camera4_pane_g3_ParamLimits

0x7e7e,	// (0x0007a770) main_camera4_pane_g3

0x7e91,	// (0x0007a783) main_camera4_pane_g4_ParamLimits

0x7e91,	// (0x0007a783) main_camera4_pane_g4

0x7ea4,	// (0x0007a796) main_camera4_pane_g5_ParamLimits

0x7ea4,	// (0x0007a796) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000821ed) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000821ed) main_camera4_pane_g

0x7ec8,	// (0x0007a7ba) main_camera4_pane_t1_ParamLimits

0x7ec8,	// (0x0007a7ba) main_camera4_pane_t1

0xc453,	// (0x0007ed45) bg_tb_trans_pane_cp06

0xedf9,	// (0x000816eb) cam4_indicators_pane_g1

0xee0a,	// (0x000816fc) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00082208) cam4_indicators_pane_g

0xee28,	// (0x0008171a) cam4_indicators_pane_t1

0x7f2c,	// (0x0007a81e) main_video4_pane_g1_ParamLimits

0x7f2c,	// (0x0007a81e) main_video4_pane_g1

0x7f3f,	// (0x0007a831) main_video4_pane_g2_ParamLimits

0x7f3f,	// (0x0007a831) main_video4_pane_g2

0x7f53,	// (0x0007a845) main_video4_pane_g3_ParamLimits

0x7f53,	// (0x0007a845) main_video4_pane_g3

0x7f67,	// (0x0007a859) main_video4_pane_g4_ParamLimits

0x7f67,	// (0x0007a859) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008220f) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008220f) main_video4_pane_g

0x7f8f,	// (0x0007a881) vid4_indicators_pane_ParamLimits

0x7f8f,	// (0x0007a881) vid4_indicators_pane

0x7fbf,	// (0x0007a8b1) video4_image_uncrop_cif_pane_ParamLimits

0x7fbf,	// (0x0007a8b1) video4_image_uncrop_cif_pane

0x7fd9,	// (0x0007a8cb) video4_image_uncrop_nhd_pane_ParamLimits

0x7fd9,	// (0x0007a8cb) video4_image_uncrop_nhd_pane

0x7e13,	// (0x0007a705) video4_image_uncrop_vga_pane_ParamLimits

0x7e13,	// (0x0007a705) video4_image_uncrop_vga_pane

0xcc2c,	// (0x0007f51e) bg_tb_trans_pane_cp07

0x7fed,	// (0x0007a8df) vid4_indicators_pane_g1

0x7ffa,	// (0x0007a8ec) vid4_indicators_pane_g2

0x8007,	// (0x0007a8f9) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008221a) vid4_indicators_pane_g

0x802c,	// (0x0007a91e) vid4_indicators_pane_t1

0x803e,	// (0x0007a930) cam4_autofocus_pane_g1

0x8046,	// (0x0007a938) cam4_autofocus_pane_g2

0x804e,	// (0x0007a940) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00082225) cam4_autofocus_pane_g

0x8056,	// (0x0007a948) cam4_autofocus_pane_g3_copy1

0xca8b,	// (0x0007f37d) video_down_pane_cp_t1

0xca99,	// (0x0007f38b) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000821a1) video_down_pane_cp_t

0x19ac,	// (0x0007429e) popup_vitu2_window_ParamLimits

0x19ac,	// (0x0007429e) popup_vitu2_window

0x805e,	// (0x0007a950) aid_size_cell2_itu2_ParamLimits

0x805e,	// (0x0007a950) aid_size_cell2_itu2

0x8084,	// (0x0007a976) aid_size_cell_itu2_ParamLimits

0x8084,	// (0x0007a976) aid_size_cell_itu2

0x80e0,	// (0x0007a9d2) bg_popup_window_pane_cp09_ParamLimits

0x80e0,	// (0x0007a9d2) bg_popup_window_pane_cp09

0x80ee,	// (0x0007a9e0) field_vitu2_entry_pane_ParamLimits

0x80ee,	// (0x0007a9e0) field_vitu2_entry_pane

0x8114,	// (0x0007aa06) grid_vitu2_function_pane_ParamLimits

0x8114,	// (0x0007aa06) grid_vitu2_function_pane

0x8165,	// (0x0007aa57) grid_vitu2_itu_pane_ParamLimits

0x8165,	// (0x0007aa57) grid_vitu2_itu_pane

0x81f8,	// (0x0007aaea) cell_vitu2_itu_pane_ParamLimits

0x81f8,	// (0x0007aaea) cell_vitu2_itu_pane

0x821c,	// (0x0007ab0e) cell_vitu2_function_pane_ParamLimits

0x821c,	// (0x0007ab0e) cell_vitu2_function_pane

0xcc3a,	// (0x0007f52c) bg_popup_call_pane_cp08_ParamLimits

0xcc3a,	// (0x0007f52c) bg_popup_call_pane_cp08

0xcc53,	// (0x0007f545) field_vitu2_entry_pane_g1

0xcc5f,	// (0x0007f551) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008222c) field_vitu2_entry_pane_g

0xcc79,	// (0x0007f56b) field_vitu2_entry_pane_t1_ParamLimits

0xcc79,	// (0x0007f56b) field_vitu2_entry_pane_t1

0xcca8,	// (0x0007f59a) field_vitu2_entry_pane_t2_ParamLimits

0xcca8,	// (0x0007f59a) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00082233) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00082233) field_vitu2_entry_pane_t

0x825b,	// (0x0007ab4d) bg_button_pane_cp010_ParamLimits

0x825b,	// (0x0007ab4d) bg_button_pane_cp010

0x8269,	// (0x0007ab5b) cell_vitu2_itu_pane_g1

0x8287,	// (0x0007ab79) cell_vitu2_itu_pane_t1_ParamLimits

0x8287,	// (0x0007ab79) cell_vitu2_itu_pane_t1

0x0ea2,	// (0x00073794) cell_vitu2_itu_pane_t2_ParamLimits

0x0ea2,	// (0x00073794) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008223d) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008223d) cell_vitu2_itu_pane_t

0x19ac,	// (0x0007429e) bg_button_pane_cp011

0x82ed,	// (0x0007abdf) cell_vitu2_function_pane_g1

0xaa0f,	// (0x0007d301) main_myfav_hc_pane

0x7c7b,	// (0x0007a56d) popup_image3_note_pane_ParamLimits

0x7c7b,	// (0x0007a56d) popup_image3_note_pane

0x7c97,	// (0x0007a589) popup_image3_tool_bar_pane_ParamLimits

0x7c97,	// (0x0007a589) popup_image3_tool_bar_pane

0x0f26,	// (0x00073818) cell_vitu2_itu_pane_t3_ParamLimits

0x0f26,	// (0x00073818) cell_vitu2_itu_pane_t3

0xaa0f,	// (0x0007d301) bg_popup_trans_pane

0xcccd,	// (0x0007f5bf) grid_image3_tool_bar_pane

0xccd7,	// (0x0007f5c9) bg_popup_trans_pane_g1

0x35a8,	// (0x00075e9a) bg_popup_trans_pane_g2

0xccdf,	// (0x0007f5d1) bg_popup_trans_pane_g3

0xcce7,	// (0x0007f5d9) bg_popup_trans_pane_g4

0xccef,	// (0x0007f5e1) bg_popup_trans_pane_g5

0xccf7,	// (0x0007f5e9) bg_popup_trans_pane_g6

0xccff,	// (0x0007f5f1) bg_popup_trans_pane_g7

0xcd07,	// (0x0007f5f9) bg_popup_trans_pane_g8

0x3588,	// (0x00075e7a) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00082244) bg_popup_trans_pane_g

0xcd0f,	// (0x0007f601) cell_image3_tool_bar_pane_ParamLimits

0xcd0f,	// (0x0007f601) cell_image3_tool_bar_pane

0xc1e7,	// (0x0007ead9) cell_image3_tool_bar_pane_g1

0xaa0f,	// (0x0007d301) bg_popup_trans_pane_cp1

0xcd23,	// (0x0007f615) popup_image3_note_pane_t1

0xcd31,	// (0x0007f623) popup_image3_note_pane_t2

0xcd3f,	// (0x0007f631) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00082257) popup_image3_note_pane_t

0xcd4d,	// (0x0007f63f) popup_image3_note_pane_t3_copy1

0x8301,	// (0x0007abf3) bg_myfav_hc_instruction_pane_ParamLimits

0x8301,	// (0x0007abf3) bg_myfav_hc_instruction_pane

0x8315,	// (0x0007ac07) cell_myfav_contact_pane_ParamLimits

0x8315,	// (0x0007ac07) cell_myfav_contact_pane

0x8333,	// (0x0007ac25) cell_myfav_contact_pane_cp1_ParamLimits

0x8333,	// (0x0007ac25) cell_myfav_contact_pane_cp1

0x834b,	// (0x0007ac3d) cell_myfav_contact_pane_cp2_ParamLimits

0x834b,	// (0x0007ac3d) cell_myfav_contact_pane_cp2

0x8363,	// (0x0007ac55) cell_myfav_contact_pane_cp3_ParamLimits

0x8363,	// (0x0007ac55) cell_myfav_contact_pane_cp3

0x837a,	// (0x0007ac6c) cell_myfav_contact_pane_cp4_ParamLimits

0x837a,	// (0x0007ac6c) cell_myfav_contact_pane_cp4

0x8392,	// (0x0007ac84) cell_myfav_contact_pane_cp5_ParamLimits

0x8392,	// (0x0007ac84) cell_myfav_contact_pane_cp5

0x83a6,	// (0x0007ac98) cell_myfav_contact_pane_cp6_ParamLimits

0x83a6,	// (0x0007ac98) cell_myfav_contact_pane_cp6

0x83bc,	// (0x0007acae) cell_myfav_contact_pane_cp7_ParamLimits

0x83bc,	// (0x0007acae) cell_myfav_contact_pane_cp7

0xcd5b,	// (0x0007f64d) listscroll_gen_pane_cp05

0x83d6,	// (0x0007acc8) main_myfav_hc_pane_g1_ParamLimits

0x83d6,	// (0x0007acc8) main_myfav_hc_pane_g1

0x83f0,	// (0x0007ace2) main_myfav_hc_pane_g2_ParamLimits

0x83f0,	// (0x0007ace2) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008225e) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008225e) main_myfav_hc_pane_g

0x8422,	// (0x0007ad14) main_myfav_hc_pane_t1_ParamLimits

0x8422,	// (0x0007ad14) main_myfav_hc_pane_t1

0xcd64,	// (0x0007f656) main_myfav_hc_pane_t2_ParamLimits

0xcd64,	// (0x0007f656) main_myfav_hc_pane_t2

0xcd76,	// (0x0007f668) main_myfav_hc_pane_t3_ParamLimits

0xcd76,	// (0x0007f668) main_myfav_hc_pane_t3

0x8439,	// (0x0007ad2b) main_myfav_hc_pane_t4_ParamLimits

0x8439,	// (0x0007ad2b) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00082265) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00082265) main_myfav_hc_pane_t

0xc1e7,	// (0x0007ead9) bg_myfav_hc_instruction_pane_g1

0xcd88,	// (0x0007f67a) cell_myfav_contact_pane_g1_ParamLimits

0xcd88,	// (0x0007f67a) cell_myfav_contact_pane_g1

0xcd88,	// (0x0007f67a) cell_myfav_contact_pane_g2_ParamLimits

0xcd88,	// (0x0007f67a) cell_myfav_contact_pane_g2

0xcd94,	// (0x0007f686) cell_myfav_contact_pane_g3_ParamLimits

0xcd94,	// (0x0007f686) cell_myfav_contact_pane_g3

0xc4e4,	// (0x0007edd6) cell_myfav_contact_pane_g4_ParamLimits

0xc4e4,	// (0x0007edd6) cell_myfav_contact_pane_g4

0xcda1,	// (0x0007f693) cell_myfav_contact_pane_g5_ParamLimits

0xcda1,	// (0x0007f693) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00082270) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00082270) cell_myfav_contact_pane_g

0x840a,	// (0x0007acfc) main_myfav_hc_pane_g3_ParamLimits

0x840a,	// (0x0007acfc) main_myfav_hc_pane_g3

0x18e6,	// (0x000741d8) popup_adpt_find_window

0x8461,	// (0x0007ad53) afind_page_pane_ParamLimits

0x8461,	// (0x0007ad53) afind_page_pane

0x8476,	// (0x0007ad68) aid_size_cell_afind_ParamLimits

0x8476,	// (0x0007ad68) aid_size_cell_afind

0x8494,	// (0x0007ad86) bg_popup_sub_pane_cp09_ParamLimits

0x8494,	// (0x0007ad86) bg_popup_sub_pane_cp09

0x84a1,	// (0x0007ad93) find_pane_cp01_ParamLimits

0x84a1,	// (0x0007ad93) find_pane_cp01

0xcdad,	// (0x0007f69f) grid_afind_control_pane_ParamLimits

0xcdad,	// (0x0007f69f) grid_afind_control_pane

0x84ae,	// (0x0007ada0) grid_afind_pane_ParamLimits

0x84ae,	// (0x0007ada0) grid_afind_pane

0x84d0,	// (0x0007adc2) cell_afind_pane_ParamLimits

0x84d0,	// (0x0007adc2) cell_afind_pane

0xc1e7,	// (0x0007ead9) afind_page_pane_g1

0x8531,	// (0x0007ae23) afind_page_pane_g2

0x853a,	// (0x0007ae2c) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008227b) afind_page_pane_g

0x8543,	// (0x0007ae35) afind_page_pane_t1

0xcdc1,	// (0x0007f6b3) cell_afind_grid_control_pane_ParamLimits

0xcdc1,	// (0x0007f6b3) cell_afind_grid_control_pane

0xcb2b,	// (0x0007f41d) bg_button_pane_cp69_ParamLimits

0xcb2b,	// (0x0007f41d) bg_button_pane_cp69

0x8563,	// (0x0007ae55) cell_afind_pane_g1_ParamLimits

0x8563,	// (0x0007ae55) cell_afind_pane_g1

0x8570,	// (0x0007ae62) cell_afind_pane_t1_ParamLimits

0x8570,	// (0x0007ae62) cell_afind_pane_t1

0x2f48,	// (0x0007583a) bg_button_pane_cp72

0xcdd0,	// (0x0007f6c2) cell_afind_grid_control_pane_g1

0x563f,	// (0x00077f31) aid_image_placing_area_ParamLimits

0x563f,	// (0x00077f31) aid_image_placing_area

0xc7dd,	// (0x0007f0cf) field_vitu_entry_pane_g1_ParamLimits

0xc7dd,	// (0x0007f0cf) field_vitu_entry_pane_g1

0xc7e9,	// (0x0007f0db) field_vitu_entry_pane_g2_ParamLimits

0xc7e9,	// (0x0007f0db) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008212c) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008212c) field_vitu_entry_pane_g

0x7704,	// (0x00079ff6) cell_vitu_itu_pane_g1_ParamLimits

0x7746,	// (0x0007a038) cell_vitu_itu_pane_t3_ParamLimits

0x7746,	// (0x0007a038) cell_vitu_itu_pane_t3

0xcadb,	// (0x0007f3cd) mp4_progress_pane_t1_ParamLimits

0xcaf4,	// (0x0007f3e6) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000821c1) mp4_progress_pane_t_ParamLimits

0xcb0d,	// (0x0007f3ff) mup_progress_pane_cp04_ParamLimits

0x844d,	// (0x0007ad3f) main_myfav_hc_pane_t5_ParamLimits

0x844d,	// (0x0007ad3f) main_myfav_hc_pane_t5

0xaa35,	// (0x0007d327) aid_zoom_text_primary

0x18e6,	// (0x000741d8) popup_adpt_find_window_ParamLimits

0x19ac,	// (0x0007429e) main_cam_set_pane

0x7e44,	// (0x0007a736) cam4_zoom_pane_ParamLimits

0x7e44,	// (0x0007a736) cam4_zoom_pane

0x8582,	// (0x0007ae74) main_cam_set_pane_g1_ParamLimits

0x8582,	// (0x0007ae74) main_cam_set_pane_g1

0x8590,	// (0x0007ae82) main_cam_set_pane_g2_ParamLimits

0x8590,	// (0x0007ae82) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00082282) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00082282) main_cam_set_pane_g

0x85b1,	// (0x0007aea3) main_cam_set_pane_t1_ParamLimits

0x85b1,	// (0x0007aea3) main_cam_set_pane_t1

0x85cc,	// (0x0007aebe) main_cset_listscroll_pane_ParamLimits

0x85cc,	// (0x0007aebe) main_cset_listscroll_pane

0x85ec,	// (0x0007aede) main_cset_slider_pane_ParamLimits

0x85ec,	// (0x0007aede) main_cset_slider_pane

0xcde1,	// (0x0007f6d3) main_cset_list_pane_ParamLimits

0xcde1,	// (0x0007f6d3) main_cset_list_pane

0xcdf1,	// (0x0007f6e3) scroll_pane_cp028

0x8612,	// (0x0007af04) aid_area_touch_slider

0x862e,	// (0x0007af20) cset_slider_pane

0x8658,	// (0x0007af4a) main_cset_slider_pane_g1

0x866d,	// (0x0007af5f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00082287) main_cset_slider_pane_g

0xce2a,	// (0x0007f71c) main_cset_slider_pane_t1

0x8729,	// (0x0007b01b) main_cset_slider_pane_t2

0x8743,	// (0x0007b035) main_cset_slider_pane_t3

0x875d,	// (0x0007b04f) main_cset_slider_pane_t4

0x8777,	// (0x0007b069) main_cset_slider_pane_t5

0x8791,	// (0x0007b083) main_cset_slider_pane_t6

0x87a6,	// (0x0007b098) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000822ac) main_cset_slider_pane_t

0x88aa,	// (0x0007b19c) cset_list_set_pane_ParamLimits

0x88aa,	// (0x0007b19c) cset_list_set_pane

0x88bc,	// (0x0007b1ae) aid_position_infowindow_above

0x88c4,	// (0x0007b1b6) aid_position_infowindow_below

0x88cc,	// (0x0007b1be) cset_list_set_pane_g1_ParamLimits

0x88cc,	// (0x0007b1be) cset_list_set_pane_g1

0xceca,	// (0x0007f7bc) cset_list_set_pane_g3_ParamLimits

0xceca,	// (0x0007f7bc) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000822cb) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000822cb) cset_list_set_pane_g

0xced9,	// (0x0007f7cb) cset_list_set_pane_t1_ParamLimits

0xced9,	// (0x0007f7cb) cset_list_set_pane_t1

0x19ac,	// (0x0007429e) list_highlight_pane_cp021_ParamLimits

0x19ac,	// (0x0007429e) list_highlight_pane_cp021

0x4ef6,	// (0x000777e8) cset_slider_pane_g1

0x4f08,	// (0x000777fa) cset_slider_pane_g2

0x4eff,	// (0x000777f1) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000822d0) cset_slider_pane_g

0xee54,	// (0x00081746) aid_area_touch_cam4_zoom

0xee5c,	// (0x0008174e) cam4_zoom_cont_pane

0xee64,	// (0x00081756) cam4_zoom_pane_g1

0xee6c,	// (0x0008175e) cam4_zoom_pane_g2

0x88d8,	// (0x0007b1ca) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000822d7) cam4_zoom_pane_g

0xef7b,	// (0x0008186d) cam4_zoom_cont_pane_g1

0xef84,	// (0x00081876) cam4_zoom_cont_pane_g2

0xef8d,	// (0x0008187f) cam4_zoom_cont_pane_g3

0x0002,

0x079b,	// (0x0007308d) cam4_zoom_cont_pane_g

0x7d04,	// (0x0007a5f6) call4_image_pane_ParamLimits

0x7d04,	// (0x0007a5f6) call4_image_pane

0xcb37,	// (0x0007f429) call4_windows_conf_pane_ParamLimits

0xcb78,	// (0x0007f46a) popup_call4_audio_in_window_ParamLimits

0xcb78,	// (0x0007f46a) popup_call4_audio_in_window

0xaa0f,	// (0x0007d301) bg_popup_call2_act_pane_cp02

0xcbee,	// (0x0007f4e0) call4_list_conf_pane

0xc1e7,	// (0x0007ead9) call4_image_pane_g1

0xc1e7,	// (0x0007ead9) call4_image_pane_g2

0x0001,

0xf700,	// (0x00081ff2) call4_image_pane_g

0xceee,	// (0x0007f7e0) list_single_graphic_popup_conf4_pane_ParamLimits

0xceee,	// (0x0007f7e0) list_single_graphic_popup_conf4_pane

0xaa0f,	// (0x0007d301) list_highlight_pane_cp022

0xcf01,	// (0x0007f7f3) list_single_graphic_popup_conf4_pane_g1

0x448a,	// (0x00076d7c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ec,	// (0x000822de) list_single_graphic_popup_conf4_pane_g

0xcf09,	// (0x0007f7fb) list_single_graphic_popup_conf4_pane_t1

0x3111,	// (0x00075a03) popup_vtel_slider_window_ParamLimits

0x3111,	// (0x00075a03) popup_vtel_slider_window

0xcb19,	// (0x0007f40b) dialer2_ne_pane_t2_ParamLimits

0xcb19,	// (0x0007f40b) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000821c6) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000821c6) dialer2_ne_pane_t

0xbfcc,	// (0x0007e8be) bg_popup_sub_pane_cp010_ParamLimits

0xbfcc,	// (0x0007e8be) bg_popup_sub_pane_cp010

0x88e0,	// (0x0007b1d2) popup_vtel_slider_window_g1_ParamLimits

0x88e0,	// (0x0007b1d2) popup_vtel_slider_window_g1

0x88f3,	// (0x0007b1e5) popup_vtel_slider_window_g2_ParamLimits

0x88f3,	// (0x0007b1e5) popup_vtel_slider_window_g2

0x0003,

0xf9f1,	// (0x000822e3) popup_vtel_slider_window_g_ParamLimits

0xf9f1,	// (0x000822e3) popup_vtel_slider_window_g

0x8949,	// (0x0007b23b) vtel_slider_pane_ParamLimits

0x8949,	// (0x0007b23b) vtel_slider_pane

0x896b,	// (0x0007b25d) vtel_slider_pane_g1_ParamLimits

0x896b,	// (0x0007b25d) vtel_slider_pane_g1

0x897f,	// (0x0007b271) vtel_slider_pane_g2_ParamLimits

0x897f,	// (0x0007b271) vtel_slider_pane_g2

0x8997,	// (0x0007b289) vtel_slider_pane_g3_ParamLimits

0x8997,	// (0x0007b289) vtel_slider_pane_g3

0x896b,	// (0x0007b25d) vtel_slider_pane_g4_ParamLimits

0x896b,	// (0x0007b25d) vtel_slider_pane_g4

0x89ad,	// (0x0007b29f) vtel_slider_pane_g5_ParamLimits

0x89ad,	// (0x0007b29f) vtel_slider_pane_g5

0x0004,

0xf9fa,	// (0x000822ec) vtel_slider_pane_g_ParamLimits

0xf9fa,	// (0x000822ec) vtel_slider_pane_g

0xaa0f,	// (0x0007d301) main_gallery2_pane

0x80b0,	// (0x0007a9a2) aid_size_row_itut2_dropdow_list_ParamLimits

0x80b0,	// (0x0007a9a2) aid_size_row_itut2_dropdow_list

0x813c,	// (0x0007aa2e) grid_vitu2_function_top_pane_ParamLimits

0x813c,	// (0x0007aa2e) grid_vitu2_function_top_pane

0x81a1,	// (0x0007aa93) popup_vitu2_dropdown_list_window_ParamLimits

0x81a1,	// (0x0007aa93) popup_vitu2_dropdown_list_window

0x81ca,	// (0x0007aabc) popup_vitu2_match_list_window

0x89c3,	// (0x0007b2b5) cell_vitu2_function_top_pane_ParamLimits

0x89c3,	// (0x0007b2b5) cell_vitu2_function_top_pane

0x89e1,	// (0x0007b2d3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x89e1,	// (0x0007b2d3) cell_vitu2_function_top_pane_cp01

0x89ff,	// (0x0007b2f1) cell_vitu2_function_top_wide_pane_ParamLimits

0x89ff,	// (0x0007b2f1) cell_vitu2_function_top_wide_pane

0x19ac,	// (0x0007429e) bg_button_pane_cp012

0x8a1d,	// (0x0007b30f) cell_vitu2_function_top_pane_g1

0xee74,	// (0x00081766) bg_button_pane_cp013_ParamLimits

0xee74,	// (0x00081766) bg_button_pane_cp013

0x8a31,	// (0x0007b323) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a31,	// (0x0007b323) cell_vitu2_function_top_wide_pane_g1

0x19ac,	// (0x0007429e) bg_popup_sub_pane_cp20

0x8a49,	// (0x0007b33b) list_vitu2_match_list_pane

0xccd7,	// (0x0007f5c9) bg_popup_sub_pane_cp20_g1

0xccdf,	// (0x0007f5d1) bg_popup_sub_pane_cp20_g2

0x35a8,	// (0x00075e9a) bg_popup_sub_pane_cp20_g3

0xcce7,	// (0x0007f5d9) bg_popup_sub_pane_cp20_g4

0x3588,	// (0x00075e7a) bg_popup_sub_pane_cp20_g5

0xcf2d,	// (0x0007f81f) bg_popup_sub_pane_cp20_g6

0xccf7,	// (0x0007f5e9) bg_popup_sub_pane_cp20_g7

0xccff,	// (0x0007f5f1) bg_popup_sub_pane_cp20_g8

0xcd07,	// (0x0007f5f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa05,	// (0x000822f7) bg_popup_sub_pane_cp20_g

0xee90,	// (0x00081782) list_vitu2_match_list_item_pane_ParamLimits

0xee90,	// (0x00081782) list_vitu2_match_list_item_pane

0xeea2,	// (0x00081794) list_vitu2_match_list_item_pane_t1

0xaa0f,	// (0x0007d301) bg_popup_sub_pane_cp21

0x438e,	// (0x00076c80) grid_vitu2_dropdown_list_pane

0x8a67,	// (0x0007b359) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a67,	// (0x0007b359) cell_vitu2_dropdown_list_char_pane

0x8a88,	// (0x0007b37a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a88,	// (0x0007b37a) cell_vitu2_dropdown_list_ctrl_pane

0xcf4d,	// (0x0007f83f) cell_vitu2_dropdown_list_char_pane_g1

0xcf56,	// (0x0007f848) cell_vitu2_dropdown_list_char_pane_g2

0xcf5f,	// (0x0007f851) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa22,	// (0x00082314) cell_vitu2_dropdown_list_char_pane_g

0x8ab4,	// (0x0007b3a6) cell_vitu2_dropdown_list_char_pane_t1

0x8ac2,	// (0x0007b3b4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ac2,	// (0x0007b3b4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8acf,	// (0x0007b3c1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8acf,	// (0x0007b3c1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8adc,	// (0x0007b3ce) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8adc,	// (0x0007b3ce) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8ae9,	// (0x0007b3db) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8ae9,	// (0x0007b3db) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc453,	// (0x0007ed45) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc453,	// (0x0007ed45) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa29,	// (0x0008231b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa29,	// (0x0008231b) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b05,	// (0x0007b3f7) aid_size_cell_gallery2_ParamLimits

0x8b05,	// (0x0007b3f7) aid_size_cell_gallery2

0x8b1b,	// (0x0007b40d) grid_gallery2_pane_ParamLimits

0x8b1b,	// (0x0007b40d) grid_gallery2_pane

0x8b2f,	// (0x0007b421) scroll_pane_cp029_ParamLimits

0x8b2f,	// (0x0007b421) scroll_pane_cp029

0x8b3b,	// (0x0007b42d) cell_gallery2_pane_ParamLimits

0x8b3b,	// (0x0007b42d) cell_gallery2_pane

0xcf68,	// (0x0007f85a) cell_gallery2_pane_g2

0x8b71,	// (0x0007b463) cell_gallery2_pane_g3

0xcf72,	// (0x0007f864) cell_gallery2_pane_g4

0xcf7a,	// (0x0007f86c) cell_gallery2_pane_g5

0x49ba,	// (0x000772ac) grid_highlight_pane_cp10

0x81ca,	// (0x0007aabc) popup_vitu2_match_list_window_ParamLimits

0x81e1,	// (0x0007aad3) popup_vitu2_query_window_ParamLimits

0x81e1,	// (0x0007aad3) popup_vitu2_query_window

0xaa0f,	// (0x0007d301) bg_vitu2_candi_button_pane

0xcf4d,	// (0x0007f83f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf56,	// (0x0007f848) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcf5f,	// (0x0007f851) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fb3,	// (0x000738a5) bg_button_pane_cp015

0x8b79,	// (0x0007b46b) bg_button_pane_cp016

0x8b8c,	// (0x0007b47e) bg_button_pane_cp017

0xbd7e,	// (0x0007e670) bg_popup_sub_pane_cp22

0xcf82,	// (0x0007f874) popup_vitu2_query_window_g1

0x0fe6,	// (0x000738d8) popup_vitu2_query_window_g2

0x0002,

0xfa34,	// (0x00082326) popup_vitu2_query_window_g

0x1005,	// (0x000738f7) popup_vitu2_query_window_t1_ParamLimits

0x1005,	// (0x000738f7) popup_vitu2_query_window_t1

0x103a,	// (0x0007392c) popup_vitu2_query_window_t2_ParamLimits

0x103a,	// (0x0007392c) popup_vitu2_query_window_t2

0x104c,	// (0x0007393e) popup_vitu2_query_window_t3_ParamLimits

0x104c,	// (0x0007393e) popup_vitu2_query_window_t3

0x8bb0,	// (0x0007b4a2) popup_vitu2_query_window_t4_ParamLimits

0x8bb0,	// (0x0007b4a2) popup_vitu2_query_window_t4

0x8bd1,	// (0x0007b4c3) popup_vitu2_query_window_t5_ParamLimits

0x8bd1,	// (0x0007b4c3) popup_vitu2_query_window_t5

0x0006,

0xfa3b,	// (0x0008232d) popup_vitu2_query_window_t_ParamLimits

0xfa3b,	// (0x0008232d) popup_vitu2_query_window_t

0xcdd9,	// (0x0007f6cb) main_cset_text_pane

0x8612,	// (0x0007af04) aid_area_touch_slider_ParamLimits

0x862e,	// (0x0007af20) cset_slider_pane_ParamLimits

0x8658,	// (0x0007af4a) main_cset_slider_pane_g1_ParamLimits

0x866d,	// (0x0007af5f) main_cset_slider_pane_g2_ParamLimits

0xcdfa,	// (0x0007f6ec) main_cset_slider_pane_g3_ParamLimits

0xcdfa,	// (0x0007f6ec) main_cset_slider_pane_g3

0x8682,	// (0x0007af74) main_cset_slider_pane_g4_ParamLimits

0x8682,	// (0x0007af74) main_cset_slider_pane_g4

0x8691,	// (0x0007af83) main_cset_slider_pane_g5_ParamLimits

0x8691,	// (0x0007af83) main_cset_slider_pane_g5

0x869d,	// (0x0007af8f) main_cset_slider_pane_g6_ParamLimits

0x869d,	// (0x0007af8f) main_cset_slider_pane_g6

0xf995,	// (0x00082287) main_cset_slider_pane_g_ParamLimits

0xce2a,	// (0x0007f71c) main_cset_slider_pane_t1_ParamLimits

0x8729,	// (0x0007b01b) main_cset_slider_pane_t2_ParamLimits

0x8743,	// (0x0007b035) main_cset_slider_pane_t3_ParamLimits

0x875d,	// (0x0007b04f) main_cset_slider_pane_t4_ParamLimits

0x8777,	// (0x0007b069) main_cset_slider_pane_t5_ParamLimits

0x8791,	// (0x0007b083) main_cset_slider_pane_t6_ParamLimits

0x87a6,	// (0x0007b098) main_cset_slider_pane_t7_ParamLimits

0x87d0,	// (0x0007b0c2) main_cset_slider_pane_t8_ParamLimits

0x87d0,	// (0x0007b0c2) main_cset_slider_pane_t8

0x87f8,	// (0x0007b0ea) main_cset_slider_pane_t9_ParamLimits

0x87f8,	// (0x0007b0ea) main_cset_slider_pane_t9

0x8820,	// (0x0007b112) main_cset_slider_pane_t10_ParamLimits

0x8820,	// (0x0007b112) main_cset_slider_pane_t10

0x8848,	// (0x0007b13a) main_cset_slider_pane_t11_ParamLimits

0x8848,	// (0x0007b13a) main_cset_slider_pane_t11

0x8870,	// (0x0007b162) main_cset_slider_pane_t12_ParamLimits

0x8870,	// (0x0007b162) main_cset_slider_pane_t12

0x888d,	// (0x0007b17f) main_cset_slider_pane_t13_ParamLimits

0x888d,	// (0x0007b17f) main_cset_slider_pane_t13

0xf9ba,	// (0x000822ac) main_cset_slider_pane_t_ParamLimits

0xaa0f,	// (0x0007d301) bg_popup_sub_pane_cp011

0xcf8e,	// (0x0007f880) main_cset_text_pane_g1

0xcf96,	// (0x0007f888) main_cset_text_pane_t1

0xcfa4,	// (0x0007f896) main_cset_text_pane_t2

0xcfb2,	// (0x0007f8a4) main_cset_text_pane_t3

0xcfc0,	// (0x0007f8b2) main_cset_text_pane_t4

0xcfce,	// (0x0007f8c0) main_cset_text_pane_t5

0xcfdc,	// (0x0007f8ce) main_cset_text_pane_t6

0xcfea,	// (0x0007f8dc) main_cset_text_pane_t7

0x0006,

0xfa4a,	// (0x0008233c) main_cset_text_pane_t

0xaa0f,	// (0x0007d301) main_cam4_burst_pane

0xaa0f,	// (0x0007d301) main_cam5_pane

0x8551,	// (0x0007ae43) bg_button_pane_cp019

0x855a,	// (0x0007ae4c) bg_button_pane_cp020

0xce06,	// (0x0007f6f8) main_cset_slider_pane_g7_ParamLimits

0xce06,	// (0x0007f6f8) main_cset_slider_pane_g7

0xce12,	// (0x0007f704) main_cset_slider_pane_g8_ParamLimits

0xce12,	// (0x0007f704) main_cset_slider_pane_g8

0x86b1,	// (0x0007afa3) main_cset_slider_pane_g9_ParamLimits

0x86b1,	// (0x0007afa3) main_cset_slider_pane_g9

0x86bd,	// (0x0007afaf) main_cset_slider_pane_g10_ParamLimits

0x86bd,	// (0x0007afaf) main_cset_slider_pane_g10

0x86c9,	// (0x0007afbb) main_cset_slider_pane_g11_ParamLimits

0x86c9,	// (0x0007afbb) main_cset_slider_pane_g11

0x86d5,	// (0x0007afc7) main_cset_slider_pane_g12_ParamLimits

0x86d5,	// (0x0007afc7) main_cset_slider_pane_g12

0x86e1,	// (0x0007afd3) main_cset_slider_pane_g13_ParamLimits

0x86e1,	// (0x0007afd3) main_cset_slider_pane_g13

0x86ed,	// (0x0007afdf) main_cset_slider_pane_g14_ParamLimits

0x86ed,	// (0x0007afdf) main_cset_slider_pane_g14

0x86f9,	// (0x0007afeb) main_cset_slider_pane_g15_ParamLimits

0x86f9,	// (0x0007afeb) main_cset_slider_pane_g15

0xce58,	// (0x0007f74a) main_cset_slider_pane_t14_ParamLimits

0xce58,	// (0x0007f74a) main_cset_slider_pane_t14

0xce91,	// (0x0007f783) main_cset_slider_pane_t15_ParamLimits

0xce91,	// (0x0007f783) main_cset_slider_pane_t15

0x8bf2,	// (0x0007b4e4) aid_cam4_burst_size_cell_ParamLimits

0x8bf2,	// (0x0007b4e4) aid_cam4_burst_size_cell

0x8c12,	// (0x0007b504) grid_cam4_burst_pane_ParamLimits

0x8c12,	// (0x0007b504) grid_cam4_burst_pane

0x8c4a,	// (0x0007b53c) linegrid_cam4_burst_pane_ParamLimits

0x8c4a,	// (0x0007b53c) linegrid_cam4_burst_pane

0xcff8,	// (0x0007f8ea) scroll_pane_cp30_ParamLimits

0xcff8,	// (0x0007f8ea) scroll_pane_cp30

0x8c6e,	// (0x0007b560) cell_cam4_burst_pane_ParamLimits

0x8c6e,	// (0x0007b560) cell_cam4_burst_pane

0xd004,	// (0x0007f8f6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd004,	// (0x0007f8f6) linegrid_cam4_burst_pane_g1

0x8cbb,	// (0x0007b5ad) linegrid_cam4_burst_pane_g2_ParamLimits

0x8cbb,	// (0x0007b5ad) linegrid_cam4_burst_pane_g2

0xd011,	// (0x0007f903) linegrid_cam4_burst_pane_g3_ParamLimits

0xd011,	// (0x0007f903) linegrid_cam4_burst_pane_g3

0x0002,

0xfa59,	// (0x0008234b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa59,	// (0x0008234b) linegrid_cam4_burst_pane_g

0x8ccc,	// (0x0007b5be) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8ccc,	// (0x0007b5be) linegrid_cam4_burst_pane_g3_copy1

0xd01e,	// (0x0007f910) linegrid_cam4_burst_pane_g4_ParamLimits

0xd01e,	// (0x0007f910) linegrid_cam4_burst_pane_g4

0x8ce6,	// (0x0007b5d8) linegrid_cam4_burst_pane_g5_ParamLimits

0x8ce6,	// (0x0007b5d8) linegrid_cam4_burst_pane_g5

0x8cf7,	// (0x0007b5e9) linegrid_cam4_burst_pane_g6_ParamLimits

0x8cf7,	// (0x0007b5e9) linegrid_cam4_burst_pane_g6

0xd02b,	// (0x0007f91d) linegrid_cam4_burst_pane_g7_ParamLimits

0xd02b,	// (0x0007f91d) linegrid_cam4_burst_pane_g7

0x8d0e,	// (0x0007b600) cell_cam4_burst_pane_g1

0xd044,	// (0x0007f936) main_cam5_pane_t1_ParamLimits

0xd044,	// (0x0007f936) main_cam5_pane_t1

0xd056,	// (0x0007f948) main_cam5_pane_t2_ParamLimits

0xd056,	// (0x0007f948) main_cam5_pane_t2

0xd068,	// (0x0007f95a) main_cam5_pane_t3_ParamLimits

0xd068,	// (0x0007f95a) main_cam5_pane_t3

0xd07a,	// (0x0007f96c) main_cam5_pane_t4_ParamLimits

0xd07a,	// (0x0007f96c) main_cam5_pane_t4

0xd092,	// (0x0007f984) main_cam5_pane_t5_ParamLimits

0xd092,	// (0x0007f984) main_cam5_pane_t5

0xd0a6,	// (0x0007f998) main_cam5_pane_t6_ParamLimits

0xd0a6,	// (0x0007f998) main_cam5_pane_t6

0xd0ba,	// (0x0007f9ac) main_cam5_pane_t7_ParamLimits

0xd0ba,	// (0x0007f9ac) main_cam5_pane_t7

0xd0cc,	// (0x0007f9be) main_cam5_pane_t8_ParamLimits

0xd0cc,	// (0x0007f9be) main_cam5_pane_t8

0xd0e8,	// (0x0007f9da) main_cam5_pane_t9_ParamLimits

0xd0e8,	// (0x0007f9da) main_cam5_pane_t9

0xd0fa,	// (0x0007f9ec) main_cam5_pane_t10_ParamLimits

0xd0fa,	// (0x0007f9ec) main_cam5_pane_t10

0xd10c,	// (0x0007f9fe) main_cam5_pane_t11_ParamLimits

0xd10c,	// (0x0007f9fe) main_cam5_pane_t11

0xd11e,	// (0x0007fa10) main_cam5_pane_t12_ParamLimits

0xd11e,	// (0x0007fa10) main_cam5_pane_t12

0xd133,	// (0x0007fa25) main_cam5_pane_t13_ParamLimits

0xd133,	// (0x0007fa25) main_cam5_pane_t13

0x000c,

0xfa65,	// (0x00082357) main_cam5_pane_t_ParamLimits

0xfa65,	// (0x00082357) main_cam5_pane_t

0x1972,	// (0x00074264) popup_scut_keymap_window_ParamLimits

0x1972,	// (0x00074264) popup_scut_keymap_window

0x8d21,	// (0x0007b613) aid_size_cell_brow_shortcut

0x49ba,	// (0x000772ac) bg_popup_window_pane_cp010

0x8d2d,	// (0x0007b61f) grid_scut_pane

0x8d39,	// (0x0007b62b) cell_scut_pane_ParamLimits

0x8d39,	// (0x0007b62b) cell_scut_pane

0x8d50,	// (0x0007b642) cell_scut_pane_g1

0xd150,	// (0x0007fa42) cell_scut_pane_t1

0xd15f,	// (0x0007fa51) cell_scut_pane_t2

0x8d59,	// (0x0007b64b) cell_scut_pane_t3

0x0002,

0xfa80,	// (0x00082372) cell_scut_pane_t

0x6c61,	// (0x00079553) main_mup3_pane_g8_ParamLimits

0x6c61,	// (0x00079553) main_mup3_pane_g8

0x80c8,	// (0x0007a9ba) area_vitu2_query_pane_ParamLimits

0x80c8,	// (0x0007a9ba) area_vitu2_query_pane

0x0fc5,	// (0x000738b7) input_focus_pane_cp08

0xd16e,	// (0x0007fa60) area_vitu2_query_pane_g1

0x10ca,	// (0x000739bc) area_vitu2_query_pane_g2

0x0001,

0xfa87,	// (0x00082379) area_vitu2_query_pane_g

0x8d67,	// (0x0007b659) area_vitu2_query_pane_t1_ParamLimits

0x8d67,	// (0x0007b659) area_vitu2_query_pane_t1

0x8d7b,	// (0x0007b66d) area_vitu2_query_pane_t2_ParamLimits

0x8d7b,	// (0x0007b66d) area_vitu2_query_pane_t2

0x10db,	// (0x000739cd) area_vitu2_query_pane_t3_ParamLimits

0x10db,	// (0x000739cd) area_vitu2_query_pane_t3

0xd17a,	// (0x0007fa6c) area_vitu2_query_pane_t4_ParamLimits

0xd17a,	// (0x0007fa6c) area_vitu2_query_pane_t4

0xd1a2,	// (0x0007fa94) area_vitu2_query_pane_t5_ParamLimits

0xd1a2,	// (0x0007fa94) area_vitu2_query_pane_t5

0xd1ca,	// (0x0007fabc) area_vitu2_query_pane_t6_ParamLimits

0xd1ca,	// (0x0007fabc) area_vitu2_query_pane_t6

0x0006,

0xfa8c,	// (0x0008237e) area_vitu2_query_pane_t_ParamLimits

0xfa8c,	// (0x0008237e) area_vitu2_query_pane_t

0x8d8f,	// (0x0007b681) bg_button_pane_cp018

0x8d9d,	// (0x0007b68f) bg_button_pane_cp021

0x1103,	// (0x000739f5) bg_button_pane_cp022

0x1112,	// (0x00073a04) input_focus_pane_cp09

0x47e5,	// (0x000770d7) aid_size_touch_mv_arrow_left

0x480e,	// (0x00077100) aid_size_touch_mv_arrow_right

0x8711,	// (0x0007b003) main_cset_slider_pane_g16_ParamLimits

0x8711,	// (0x0007b003) main_cset_slider_pane_g16

0x871d,	// (0x0007b00f) main_cset_slider_pane_g17_ParamLimits

0x871d,	// (0x0007b00f) main_cset_slider_pane_g17

0x8d0e,	// (0x0007b600) cell_cam4_burst_pane_g1_ParamLimits

0xaa0f,	// (0x0007d301) compa_mode_pane

0x8903,	// (0x0007b1f5) popup_vtel_slider_window_g3_ParamLimits

0x8903,	// (0x0007b1f5) popup_vtel_slider_window_g3

0x891a,	// (0x0007b20c) popup_vtel_slider_window_g4_ParamLimits

0x891a,	// (0x0007b20c) popup_vtel_slider_window_g4

0x8931,	// (0x0007b223) popup_vtel_slider_window_t1_ParamLimits

0x8931,	// (0x0007b223) popup_vtel_slider_window_t1

0xaa0f,	// (0x0007d301) main_cl_pane

0xbda6,	// (0x0007e698) popup_imed_adjust2_window_ParamLimits

0xbd7e,	// (0x0007e670) bg_tb_trans_pane_cp05_ParamLimits

0xc712,	// (0x0007f004) popup_imed_adjust2_window_g1_ParamLimits

0xc721,	// (0x0007f013) popup_imed_adjust2_window_g2_ParamLimits

0xc721,	// (0x0007f013) popup_imed_adjust2_window_g2

0xc72d,	// (0x0007f01f) popup_imed_adjust2_window_g3_ParamLimits

0xc72d,	// (0x0007f01f) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000820f0) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000820f0) popup_imed_adjust2_window_g

0xc739,	// (0x0007f02b) popup_imed_adjust2_window_t1_ParamLimits

0xc751,	// (0x0007f043) slider_imed_adjust_pane_ParamLimits

0xc765,	// (0x0007f057) slider_imed_adjust_pane_g1_ParamLimits

0xc775,	// (0x0007f067) slider_imed_adjust_pane_g2_ParamLimits

0xc785,	// (0x0007f077) slider_imed_adjust_pane_g3_ParamLimits

0xc796,	// (0x0007f088) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000820f7) slider_imed_adjust_pane_g_ParamLimits

0x7de5,	// (0x0007a6d7) aid_touch_area_cam4_ParamLimits

0x7de5,	// (0x0007a6d7) aid_touch_area_cam4

0xedd5,	// (0x000816c7) battery_pane_cp01

0x7eb5,	// (0x0007a7a7) main_camera4_pane_g6_ParamLimits

0x7eb5,	// (0x0007a7a7) main_camera4_pane_g6

0x7edf,	// (0x0007a7d1) main_camera4_pane_t2_ParamLimits

0x7edf,	// (0x0007a7d1) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000821fa) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000821fa) main_camera4_pane_t

0x7f14,	// (0x0007a806) aid_touch_area_vid4_ParamLimits

0x7f14,	// (0x0007a806) aid_touch_area_vid4

0x7f7b,	// (0x0007a86d) main_video4_pane_g5_ParamLimits

0x7f7b,	// (0x0007a86d) main_video4_pane_g5

0x7fa6,	// (0x0007a898) vid4_progress_pane_ParamLimits

0x7fa6,	// (0x0007a898) vid4_progress_pane

0xce1e,	// (0x0007f710) main_cset_slider_pane_g18_ParamLimits

0xce1e,	// (0x0007f710) main_cset_slider_pane_g18

0xd038,	// (0x0007f92a) cell_cam4_burst_pane_g2_ParamLimits

0xd038,	// (0x0007f92a) cell_cam4_burst_pane_g2

0x0001,

0xfa60,	// (0x00082352) cell_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00082352) cell_cam4_burst_pane_g

0x2443,	// (0x00074d35) bg_cl_pane_ParamLimits

0x2443,	// (0x00074d35) bg_cl_pane

0x8da9,	// (0x0007b69b) cl_header_pane_ParamLimits

0x8da9,	// (0x0007b69b) cl_header_pane

0x8dbd,	// (0x0007b6af) cl_listscroll_pane_ParamLimits

0x8dbd,	// (0x0007b6af) cl_listscroll_pane

0xd216,	// (0x0007fb08) bg_cl_pane_g1

0xd21e,	// (0x0007fb10) bg_cl_pane_g2

0xd226,	// (0x0007fb18) bg_cl_pane_g3

0xd22e,	// (0x0007fb20) bg_cl_pane_g4

0xd236,	// (0x0007fb28) bg_cl_pane_g5

0xd23e,	// (0x0007fb30) bg_cl_pane_g6

0xd246,	// (0x0007fb38) bg_cl_pane_g7

0xd24e,	// (0x0007fb40) bg_cl_pane_g8

0xd256,	// (0x0007fb48) bg_cl_pane_g9

0x0008,

0xfa9b,	// (0x0008238d) bg_cl_pane_g

0x8dcd,	// (0x0007b6bf) aid_height_cl_leading_ParamLimits

0x8dcd,	// (0x0007b6bf) aid_height_cl_leading

0x8dd9,	// (0x0007b6cb) aid_height_cl_text_ParamLimits

0x8dd9,	// (0x0007b6cb) aid_height_cl_text

0x19ac,	// (0x0007429e) bg_cl_header_pane_ParamLimits

0x19ac,	// (0x0007429e) bg_cl_header_pane

0x8df8,	// (0x0007b6ea) cl_header_pane_g1_ParamLimits

0x8df8,	// (0x0007b6ea) cl_header_pane_g1

0x8e0e,	// (0x0007b700) cl_header_pane_t1_ParamLimits

0x8e0e,	// (0x0007b700) cl_header_pane_t1

0xd25e,	// (0x0007fb50) cl_list_pane

0xcdf1,	// (0x0007f6e3) hc_scroll_pane_cp01

0x3588,	// (0x00075e7a) bg_cl_header_pane_g1

0xccd7,	// (0x0007f5c9) bg_cl_header_pane_g2

0x35a8,	// (0x00075e9a) bg_cl_header_pane_g3

0xcce7,	// (0x0007f5d9) bg_cl_header_pane_g4

0xccdf,	// (0x0007f5d1) bg_cl_header_pane_g5

0xcf2d,	// (0x0007f81f) bg_cl_header_pane_g6

0xccff,	// (0x0007f5f1) bg_cl_header_pane_g7

0xcd07,	// (0x0007f5f9) bg_cl_header_pane_g8

0xccf7,	// (0x0007f5e9) bg_cl_header_pane_g9

0x0008,

0xfaae,	// (0x000823a0) bg_cl_header_pane_g

0x8e27,	// (0x0007b719) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e27,	// (0x0007b719) hc_cl_list_double_graphic_heading_pane

0x8e38,	// (0x0007b72a) hc_cl_list_single_graphic_pane_ParamLimits

0x8e38,	// (0x0007b72a) hc_cl_list_single_graphic_pane

0x8e4e,	// (0x0007b740) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e4e,	// (0x0007b740) hc_cl_list_single_graphic_pane_g1

0x8e5a,	// (0x0007b74c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e5a,	// (0x0007b74c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac1,	// (0x000823b3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac1,	// (0x000823b3) hc_cl_list_single_graphic_pane_g

0x8e6e,	// (0x0007b760) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e6e,	// (0x0007b760) hc_cl_list_single_graphic_pane_t1

0x8e4e,	// (0x0007b740) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e4e,	// (0x0007b740) hc_cl_list_double_graphic_heading_pane_g1

0x8e83,	// (0x0007b775) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e83,	// (0x0007b775) hc_cl_list_double_graphic_heading_pane_g2

0x8e97,	// (0x0007b789) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8e97,	// (0x0007b789) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac6,	// (0x000823b8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac6,	// (0x000823b8) hc_cl_list_double_graphic_heading_pane_g

0x8eab,	// (0x0007b79d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8eab,	// (0x0007b79d) hc_cl_list_double_graphic_heading_pane_t1

0x8ec0,	// (0x0007b7b2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ec0,	// (0x0007b7b2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacd,	// (0x000823bf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacd,	// (0x000823bf) hc_cl_list_double_graphic_heading_pane_t

0xeeb8,	// (0x000817aa) vid4_progress_pane_g1

0xeec8,	// (0x000817ba) vid4_progress_pane_g2

0xad9a,	// (0x0007d68c) vid4_progress_pane_g3

0xeed8,	// (0x000817ca) vid4_progress_pane_g4

0x0004,

0xfad2,	// (0x000823c4) vid4_progress_pane_g

0xeef6,	// (0x000817e8) vid4_progress_pane_t1

0xef0b,	// (0x000817fd) vid4_progress_pane_t2

0x0002,

0xfadd,	// (0x000823cf) vid4_progress_pane_t

0xef36,	// (0x00081828) wait_bar_pane_cp07

0xbfda,	// (0x0007e8cc) blid_firmament_pane_ParamLimits

0xc01d,	// (0x0007e90f) popup_blid_sat_info2_window_g1

0xc041,	// (0x0007e933) popup_blid_sat_info2_window_t3

0xc04f,	// (0x0007e941) popup_blid_sat_info2_window_t4

0xc05d,	// (0x0007e94f) popup_blid_sat_info2_window_t5

0xc06b,	// (0x0007e95d) popup_blid_sat_info2_window_t6

0xc07b,	// (0x0007e96d) popup_blid_sat_info2_window_t7

0xc089,	// (0x0007e97b) popup_blid_sat_info2_window_t8

0xc097,	// (0x0007e989) popup_blid_sat_info2_window_t9

0xc0a5,	// (0x0007e997) popup_blid_sat_info2_window_t10

0xc167,	// (0x0007ea59) aid_firma_cardinal_ParamLimits

0xc17b,	// (0x0007ea6d) blid_firmament_pane_t1_ParamLimits

0xc192,	// (0x0007ea84) blid_firmament_pane_t2_ParamLimits

0xc1a9,	// (0x0007ea9b) blid_firmament_pane_t3_ParamLimits

0xc1c0,	// (0x0007eab2) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00081fe9) blid_firmament_pane_t_ParamLimits

0xc1d7,	// (0x0007eac9) blid_sat_info_pane_ParamLimits

0x19ac,	// (0x0007429e) main_cam_set_pane_ParamLimits

0x74be,	// (0x00079db0) aid_size_cell_colour_35_ParamLimits

0x74de,	// (0x00079dd0) aid_size_cell_colour_112_ParamLimits

0x74fe,	// (0x00079df0) aid_size_cell_effect_ParamLimits

0xbd7e,	// (0x0007e670) bg_tb_trans_pane_cp02_ParamLimits

0x40ce,	// (0x000769c0) heading_imed_pane_ParamLimits

0x751e,	// (0x00079e10) listscroll_imed_pane_ParamLimits

0xb3b0,	// (0x0007dca2) popup_call2_audio_first_window_g5_ParamLimits

0xb3b0,	// (0x0007dca2) popup_call2_audio_first_window_g5

0x7a90,	// (0x0007a382) aid_size_touch_image3_arrow_left_ParamLimits

0x7a90,	// (0x0007a382) aid_size_touch_image3_arrow_left

0x7abc,	// (0x0007a3ae) aid_size_touch_image3_arrow_right_ParamLimits

0x7abc,	// (0x0007a3ae) aid_size_touch_image3_arrow_right

0xef21,	// (0x00081813) vid4_progress_pane_t3

0x7831,	// (0x0007a123) main_hwr_training_symbol_option_pane_ParamLimits

0x7831,	// (0x0007a123) main_hwr_training_symbol_option_pane

0xc9ff,	// (0x0007f2f1) popup_hwr_training_preview_window_ParamLimits

0xc9ff,	// (0x0007f2f1) popup_hwr_training_preview_window

0x7851,	// (0x0007a143) hwr_training_navi_pane_g5_ParamLimits

0x7851,	// (0x0007a143) hwr_training_navi_pane_g5

0xccc5,	// (0x0007f5b7) popup_char_count_window

0x19ac,	// (0x0007429e) bg_popup_sub_pane_cp20_ParamLimits

0x8a49,	// (0x0007b33b) list_vitu2_match_list_pane_ParamLimits

0x8a58,	// (0x0007b34a) vitu2_page_scroll_pane_ParamLimits

0x8a58,	// (0x0007b34a) vitu2_page_scroll_pane

0xd2b9,	// (0x0007fbab) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2b9,	// (0x0007fbab) list_single_hwr_training_symbol_option_pane

0xd2cc,	// (0x0007fbbe) list_single_hwr_training_symbol_option_pane_g1

0xd2d4,	// (0x0007fbc6) list_single_hwr_training_symbol_option_pane_t1

0xd2e2,	// (0x0007fbd4) bg_button_pane_cp023

0xd2eb,	// (0x0007fbdd) bg_button_pane_cp024

0x8ed5,	// (0x0007b7c7) vitu2_page_scroll_pane_g1

0x8edd,	// (0x0007b7cf) vitu2_page_scroll_pane_g2

0x0001,

0xfae4,	// (0x000823d6) vitu2_page_scroll_pane_g

0x8ee5,	// (0x0007b7d7) vitu2_page_scroll_pane_t1

0xefc0,	// (0x000818b2) popup_char_count_window_g1

0xefc9,	// (0x000818bb) popup_char_count_window_g2

0xefd2,	// (0x000818c4) popup_char_count_window_g3

0x0002,

0x089f,	// (0x00073191) popup_char_count_window_g

0xefdb,	// (0x000818cd) popup_char_count_window_t1

0xaa0f,	// (0x0007d301) main_vded2_pane

0xc6fe,	// (0x0007eff0) aid_size_cell_imed_line

0xc708,	// (0x0007effa) grid_imed_line_width_pane

0x8014,	// (0x0007a906) vid4_indicators_pane_g4

0xefe9,	// (0x000818db) cell_imed_line_width_pane_ParamLimits

0xefe9,	// (0x000818db) cell_imed_line_width_pane

0xeffd,	// (0x000818ef) cell_imed_line_width_pane_g1

0xd2f4,	// (0x0007fbe6) cell_imed_line_width_pane_g2

0x0001,

0xfae9,	// (0x000823db) cell_imed_line_width_pane_g

0x8ef4,	// (0x0007b7e6) main_vded2_pane_g1_ParamLimits

0x8ef4,	// (0x0007b7e6) main_vded2_pane_g1

0x8f0a,	// (0x0007b7fc) main_vded2_pane_g2_ParamLimits

0x8f0a,	// (0x0007b7fc) main_vded2_pane_g2

0x0001,

0xfaee,	// (0x000823e0) main_vded2_pane_g_ParamLimits

0xfaee,	// (0x000823e0) main_vded2_pane_g

0x8f1c,	// (0x0007b80e) vded2_slider_pane_ParamLimits

0x8f1c,	// (0x0007b80e) vded2_slider_pane

0x8f2c,	// (0x0007b81e) aid_size_touch_vded2_end

0x8f36,	// (0x0007b828) aid_size_touch_vded2_playhead

0xf006,	// (0x000818f8) aid_size_touch_vded2_start

0xf00e,	// (0x00081900) vded2_slider_bg_pane

0xf017,	// (0x00081909) vded2_slider_pane_g1

0xf020,	// (0x00081912) vded2_slider_pane_g2

0x8f40,	// (0x0007b832) vded2_slider_pane_g3

0x0002,

0xfaf3,	// (0x000823e5) vded2_slider_pane_g

0xf028,	// (0x0008191a) vded2_slider_bg_pane_g1

0xf031,	// (0x00081923) vded2_slider_bg_pane_g2

0xf03a,	// (0x0008192c) vded2_slider_bg_pane_g3

0x0002,

0x08b7,	// (0x000731a9) vded2_slider_bg_pane_g

0x502b,	// (0x0007791d) aid_postcard_touch_down_pane_ParamLimits

0x502b,	// (0x0007791d) aid_postcard_touch_down_pane

0x5041,	// (0x00077933) aid_postcard_touch_up_pane_ParamLimits

0x5041,	// (0x00077933) aid_postcard_touch_up_pane

0xaa0f,	// (0x0007d301) main_blid2_pane

0xbd8c,	// (0x0007e67e) popup_blid2_search_window

0xaa0f,	// (0x0007d301) blid2_gps_pane

0xaa0f,	// (0x0007d301) blid2_navig_pane

0xaa0f,	// (0x0007d301) blid2_search_pane

0xaa0f,	// (0x0007d301) blid2_tripm_pane

0x8f4b,	// (0x0007b83d) blid2_search_pane_g1_ParamLimits

0x8f4b,	// (0x0007b83d) blid2_search_pane_g1

0x8f65,	// (0x0007b857) blid2_search_pane_t1_ParamLimits

0x8f65,	// (0x0007b857) blid2_search_pane_t1

0x8f77,	// (0x0007b869) aid_size_cell_blid2_gps_ParamLimits

0x8f77,	// (0x0007b869) aid_size_cell_blid2_gps

0x8f8f,	// (0x0007b881) blid2_gps_pane_g1_ParamLimits

0x8f8f,	// (0x0007b881) blid2_gps_pane_g1

0x8fa3,	// (0x0007b895) grid_blid2_satellite_pane_ParamLimits

0x8fa3,	// (0x0007b895) grid_blid2_satellite_pane

0x8fbd,	// (0x0007b8af) blid2_navig_pane_g1_ParamLimits

0x8fbd,	// (0x0007b8af) blid2_navig_pane_g1

0x8fc9,	// (0x0007b8bb) blid2_navig_pane_t1_ParamLimits

0x8fc9,	// (0x0007b8bb) blid2_navig_pane_t1

0x8fe4,	// (0x0007b8d6) blid2_navig_pane_t2_ParamLimits

0x8fe4,	// (0x0007b8d6) blid2_navig_pane_t2

0x0001,

0xfafa,	// (0x000823ec) blid2_navig_pane_t_ParamLimits

0xfafa,	// (0x000823ec) blid2_navig_pane_t

0x8fff,	// (0x0007b8f1) blid2_navig_ring_pane_ParamLimits

0x8fff,	// (0x0007b8f1) blid2_navig_ring_pane

0x9018,	// (0x0007b90a) blid2_speed_pane_ParamLimits

0x9018,	// (0x0007b90a) blid2_speed_pane

0x9024,	// (0x0007b916) blid2_tripm_pane_g1_ParamLimits

0x9024,	// (0x0007b916) blid2_tripm_pane_g1

0x903d,	// (0x0007b92f) blid2_tripm_pane_g2_ParamLimits

0x903d,	// (0x0007b92f) blid2_tripm_pane_g2

0x9051,	// (0x0007b943) blid2_tripm_pane_g3_ParamLimits

0x9051,	// (0x0007b943) blid2_tripm_pane_g3

0x9065,	// (0x0007b957) blid2_tripm_pane_g4_ParamLimits

0x9065,	// (0x0007b957) blid2_tripm_pane_g4

0x9079,	// (0x0007b96b) blid2_tripm_pane_g5_ParamLimits

0x9079,	// (0x0007b96b) blid2_tripm_pane_g5

0x0005,

0xfaff,	// (0x000823f1) blid2_tripm_pane_g_ParamLimits

0xfaff,	// (0x000823f1) blid2_tripm_pane_g

0x909f,	// (0x0007b991) blid2_tripm_pane_t1_ParamLimits

0x909f,	// (0x0007b991) blid2_tripm_pane_t1

0x90ba,	// (0x0007b9ac) blid2_tripm_pane_t2_ParamLimits

0x90ba,	// (0x0007b9ac) blid2_tripm_pane_t2

0x90d3,	// (0x0007b9c5) blid2_tripm_pane_t3_ParamLimits

0x90d3,	// (0x0007b9c5) blid2_tripm_pane_t3

0x0003,

0xfb0c,	// (0x000823fe) blid2_tripm_pane_t_ParamLimits

0xfb0c,	// (0x000823fe) blid2_tripm_pane_t

0x911a,	// (0x0007ba0c) cell_blid2_satellite_pane_ParamLimits

0x911a,	// (0x0007ba0c) cell_blid2_satellite_pane

0x9138,	// (0x0007ba2a) cell_blid2_satellite_pane_g1

0xf043,	// (0x00081935) cell_blid2_satellite_pane_t1

0xc1e7,	// (0x0007ead9) blid2_speed_pane_g1

0xf051,	// (0x00081943) blid2_speed_pane_t1

0xf05f,	// (0x00081951) blid2_speed_pane_t2

0x0001,

0x08d9,	// (0x000731cb) blid2_speed_pane_t

0xc1e7,	// (0x0007ead9) blid2_navig_ring_pane_g1

0x9141,	// (0x0007ba33) blid2_navig_ring_pane_g2

0x9149,	// (0x0007ba3b) blid2_navig_ring_pane_g3

0x9151,	// (0x0007ba43) blid2_navig_ring_pane_g4

0x9159,	// (0x0007ba4b) blid2_navig_ring_pane_g5

0x0004,

0xfb15,	// (0x00082407) blid2_navig_ring_pane_g

0xaa0f,	// (0x0007d301) bg_popup_window_pane_cp011

0xf06d,	// (0x0008195f) popup_blid2_search_window_g1

0xf075,	// (0x00081967) popup_blid2_search_window_t1

0xf083,	// (0x00081975) popup_blid2_search_window_t2

0x0001,

0x08e9,	// (0x000731db) popup_blid2_search_window_t

0x3454,	// (0x00075d46) main_browser_pane_g1

0x2443,	// (0x00074d35) main_browser_pane_ParamLimits

0x19ac,	// (0x0007429e) bg_button_pane_cp011_ParamLimits

0x82ed,	// (0x0007abdf) cell_vitu2_function_pane_g1_ParamLimits

0xbd7e,	// (0x0007e670) bg_popup_sub_pane_cp22_ParamLimits

0x0fc5,	// (0x000738b7) input_focus_pane_cp08_ParamLimits

0x8b9f,	// (0x0007b491) popup_vitu2_query_button_pane_ParamLimits

0x8b9f,	// (0x0007b491) popup_vitu2_query_button_pane

0x0fdc,	// (0x000738ce) popup_vitu2_query_input_button_pane

0xcf82,	// (0x0007f874) popup_vitu2_query_window_g1_ParamLimits

0x0fe6,	// (0x000738d8) popup_vitu2_query_window_g2_ParamLimits

0xfa34,	// (0x00082326) popup_vitu2_query_window_g_ParamLimits

0xaa0f,	// (0x0007d301) bg_button_pane_cp026

0x9161,	// (0x0007ba53) popup_vitu2_query_input_button_pane_g1

0xaa0f,	// (0x0007d301) bg_button_pane_cp025

0xf091,	// (0x00081983) popup_vitu2_query_button_pane_t1

0x6948,	// (0x0007923a) main_mp3_pane_t6

0x6956,	// (0x00079248) popup_slider_window_cp01

0xedf1,	// (0x000816e3) cam4_battery_pane

0xee4a,	// (0x0008173c) cam4_battery_pane_cp02

0xeeb0,	// (0x000817a2) cam4_battery_pane_cp01

0xeeb0,	// (0x000817a2) cam4_battery_pane_cp03

0xc1e7,	// (0x0007ead9) cam4_battery_pane_g1

0xd2fc,	// (0x0007fbee) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00082412) cam4_battery_pane_g

0xc0b3,	// (0x0007e9a5) popup_blid_sat_info2_window_t11

0x47e5,	// (0x000770d7) aid_size_touch_mv_arrow_left_ParamLimits

0x480e,	// (0x00077100) aid_size_touch_mv_arrow_right_ParamLimits

0x4856,	// (0x00077148) navi_pane_g1_ParamLimits

0x4862,	// (0x00077154) navi_pane_g2_ParamLimits

0x4890,	// (0x00077182) navi_pane_g3_ParamLimits

0xf409,	// (0x00081cfb) navi_pane_g_ParamLimits

0x494c,	// (0x0007723e) navi_pane_mv_t1_ParamLimits

0x752a,	// (0x00079e1c) grid_imed_effect_pane_ParamLimits

0x2ffc,	// (0x000758ee) aid_placing_vt_slider_lsc

0x300c,	// (0x000758fe) aid_placing_vt_slider_prt

0x19ac,	// (0x0007429e) bg_tb_trans_pane_cp01_ParamLimits

0xc373,	// (0x0007ec65) popup_image_details_window_g1_ParamLimits

0xc386,	// (0x0007ec78) popup_image_details_window_g2_ParamLimits

0xc39b,	// (0x0007ec8d) popup_image_details_window_g3_ParamLimits

0xc39b,	// (0x0007ec8d) popup_image_details_window_g3

0xf73c,	// (0x0008202e) popup_image_details_window_g_ParamLimits

0xc3af,	// (0x0007eca1) popup_image_details_window_t1_ParamLimits

0xc3c1,	// (0x0007ecb3) popup_image_details_window_t2_ParamLimits

0xc3da,	// (0x0007eccc) popup_image_details_window_t3_ParamLimits

0xc3ee,	// (0x0007ece0) popup_image_details_window_t4_ParamLimits

0xc409,	// (0x0007ecfb) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00082035) popup_image_details_window_t_ParamLimits

0x8de5,	// (0x0007b6d7) cl_header_name_pane_ParamLimits

0x8de5,	// (0x0007b6d7) cl_header_name_pane

0x9169,	// (0x0007ba5b) cl_header_name_pane_t1_ParamLimits

0x9169,	// (0x0007ba5b) cl_header_name_pane_t1

0x918a,	// (0x0007ba7c) cl_header_name_pane_t2_ParamLimits

0x918a,	// (0x0007ba7c) cl_header_name_pane_t2

0x91cc,	// (0x0007babe) cl_header_name_pane_t3_ParamLimits

0x91cc,	// (0x0007babe) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00082417) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00082417) cl_header_name_pane_t

0x491d,	// (0x0007720f) navi_pane_mv_g2_ParamLimits

0xcc53,	// (0x0007f545) field_vitu2_entry_pane_g1_ParamLimits

0xcc5f,	// (0x0007f551) field_vitu2_entry_pane_g2_ParamLimits

0xcc6b,	// (0x0007f55d) field_vitu2_entry_pane_g3_ParamLimits

0xcc6b,	// (0x0007f55d) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008222c) field_vitu2_entry_pane_g_ParamLimits

0x8269,	// (0x0007ab5b) cell_vitu2_itu_pane_g1_ParamLimits

0x8279,	// (0x0007ab6b) cell_vitu2_itu_pane_g2_ParamLimits

0x8279,	// (0x0007ab6b) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00082238) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00082238) cell_vitu2_itu_pane_g

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp05_ParamLimits

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp05

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp03

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp04

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp10_ParamLimits

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp10

0x1103,	// (0x000739f5) bg_vkb2_func_pane_cp08

0x8d8f,	// (0x0007b681) bg_vkb2_func_pane_cp06

0x8d9d,	// (0x0007b68f) bg_vkb2_func_pane_cp07

0xef96,	// (0x00081888) bg_vkb2_func_pane_cp11_ParamLimits

0xef96,	// (0x00081888) bg_vkb2_func_pane_cp11

0xefab,	// (0x0008189d) bg_vkb2_func_pane_cp12_ParamLimits

0xefab,	// (0x0008189d) bg_vkb2_func_pane_cp12

0xaa0f,	// (0x0007d301) bg_vkb2_func_pane_cp09

0xccd7,	// (0x0007f5c9) bg_vkb2_func_pane_g1

0x35a8,	// (0x00075e9a) bg_vkb2_func_pane_g2

0xccdf,	// (0x0007f5d1) bg_vkb2_func_pane_g3

0xcce7,	// (0x0007f5d9) bg_vkb2_func_pane_g4

0xcf2d,	// (0x0007f81f) bg_vkb2_func_pane_g5

0xccff,	// (0x0007f5f1) bg_vkb2_func_pane_g6

0xcd07,	// (0x0007f5f9) bg_vkb2_func_pane_g7

0xccf7,	// (0x0007f5e9) bg_vkb2_func_pane_g8

0x3588,	// (0x00075e7a) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0008241e) bg_vkb2_func_pane_g

0x908d,	// (0x0007b97f) blid2_tripm_pane_g6_ParamLimits

0x908d,	// (0x0007b97f) blid2_tripm_pane_g6

0xcad3,	// (0x0007f3c5) mp4_progress_pane_g1

0x9106,	// (0x0007b9f8) blid2_tripm_values_pane_ParamLimits

0x9106,	// (0x0007b9f8) blid2_tripm_values_pane

0x91fd,	// (0x0007baef) blid2_tripm_values_pane_t1

0x920b,	// (0x0007bafd) blid2_tripm_values_pane_t2

0x9219,	// (0x0007bb0b) blid2_tripm_values_pane_t3

0x9227,	// (0x0007bb19) blid2_tripm_values_pane_t4

0x9235,	// (0x0007bb27) blid2_tripm_values_pane_t5

0x9243,	// (0x0007bb35) blid2_tripm_values_pane_t6

0x9251,	// (0x0007bb43) blid2_tripm_values_pane_t7

0x925f,	// (0x0007bb51) blid2_tripm_values_pane_t8

0x926d,	// (0x0007bb5f) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00082431) blid2_tripm_values_pane_t

0x3048,	// (0x0007593a) call_video_pane_t1_ParamLimits

0x3066,	// (0x00075958) call_video_pane_t2_ParamLimits

0xf292,	// (0x00081b84) call_video_pane_t_ParamLimits

0x0e19,	// (0x0007370b) msg_header_pane_g1_ParamLimits

0x4f95,	// (0x00077887) msg_header_pane_g2_ParamLimits

0x4f95,	// (0x00077887) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00081d9e) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00081d9e) msg_header_pane_g

0x2443,	// (0x00074d35) main_clock2_pane_ParamLimits

0x7256,	// (0x00079b48) grid_clock2_toolbar_pane_ParamLimits

0x7256,	// (0x00079b48) grid_clock2_toolbar_pane

0x7256,	// (0x00079b48) listscroll_clock2_pane_ParamLimits

0x7256,	// (0x00079b48) listscroll_clock2_pane

0x7332,	// (0x00079c24) main_clock2_pane_t3_ParamLimits

0x7332,	// (0x00079c24) main_clock2_pane_t3

0x734d,	// (0x00079c3f) main_clock2_pane_t4_ParamLimits

0x734d,	// (0x00079c3f) main_clock2_pane_t4

0xf09f,	// (0x00081991) cell_clock2_toolbar_pane

0xf0a7,	// (0x00081999) cell_clock2_toolbar_pane_cp01

0xf0a7,	// (0x00081999) cell_clock2_toolbar_pane_cp02

0xf0af,	// (0x000819a1) cell_clock2_toolbar_pane_cp03

0xf0b7,	// (0x000819a9) list_clock2_pane

0x458f,	// (0x00076e81) scroll_pane_cp10

0xf0bf,	// (0x000819b1) list_single_clock2_pane_ParamLimits

0xf0bf,	// (0x000819b1) list_single_clock2_pane

0x49ba,	// (0x000772ac) list_highlight_pane_cp08

0xf0cc,	// (0x000819be) list_single_clock2_pane_t1

0xd306,	// (0x0007fbf8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00082444) list_single_clock2_pane_t

0xaa0f,	// (0x0007d301) bg_button_pane_cp10

0xd314,	// (0x0007fc06) cell_clock2_toolbar_pane_g1

0x4fa9,	// (0x0007789b) aid_main_viewer_pane_g1_ParamLimits

0x4fa9,	// (0x0007789b) aid_main_viewer_pane_g1

0x4fb7,	// (0x000778a9) aid_main_viewer_pane_g2_ParamLimits

0x4fb7,	// (0x000778a9) aid_main_viewer_pane_g2

0x4fc5,	// (0x000778b7) aid_main_viewer_pane_g3_ParamLimits

0x4fc5,	// (0x000778b7) aid_main_viewer_pane_g3

0x4fd4,	// (0x000778c6) aid_main_viewer_pane_g4_ParamLimits

0x4fd4,	// (0x000778c6) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00081daf) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00081daf) aid_main_viewer_pane_g

0x5b6b,	// (0x0007845d) main_calc_pane_ParamLimits

0x5b7f,	// (0x00078471) main_dialer2_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_cam6_pane

0xaa0f,	// (0x0007d301) main_vid6_pane

0x7262,	// (0x00079b54) listscroll_gen_pane_cp06_ParamLimits

0x7262,	// (0x00079b54) listscroll_gen_pane_cp06

0x7368,	// (0x00079c5a) main_clock2_pane_t5_ParamLimits

0x7368,	// (0x00079c5a) main_clock2_pane_t5

0x73bf,	// (0x00079cb1) aid_call2_pane_cp10_ParamLimits

0x73d1,	// (0x00079cc3) aid_call_pane_cp10_ParamLimits

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g2_ParamLimits

0x73e3,	// (0x00079cd5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x73e3,	// (0x00079cd5) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4774,	// (0x00077066) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000820e5) popup_clock_analogue_window_cp10_g_ParamLimits

0x73f5,	// (0x00079ce7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7a3d,	// (0x0007a32f) cell_dialer2_keypad_pane_g2_ParamLimits

0x7a3d,	// (0x0007a32f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000821cb) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000821cb) cell_dialer2_keypad_pane_g

0x7a59,	// (0x0007a34b) cell_dialer2_keypad_pane_t1

0x8604,	// (0x0007aef6) main_cset_text2_pane_ParamLimits

0x8604,	// (0x0007aef6) main_cset_text2_pane

0xd16e,	// (0x0007fa60) area_vitu2_query_pane_g1_ParamLimits

0x10ca,	// (0x000739bc) area_vitu2_query_pane_g2_ParamLimits

0xfa87,	// (0x00082379) area_vitu2_query_pane_g_ParamLimits

0xd1f2,	// (0x0007fae4) area_vitu2_query_pane_t7_ParamLimits

0xd1f2,	// (0x0007fae4) area_vitu2_query_pane_t7

0x8d8f,	// (0x0007b681) bg_button_pane_cp018_ParamLimits

0x8d9d,	// (0x0007b68f) bg_button_pane_cp021_ParamLimits

0x1103,	// (0x000739f5) bg_button_pane_cp022_ParamLimits

0x1103,	// (0x000739f5) bg_vkb2_func_pane_cp08_ParamLimits

0x8d8f,	// (0x0007b681) bg_vkb2_func_pane_cp06_ParamLimits

0x8d9d,	// (0x0007b68f) bg_vkb2_func_pane_cp07_ParamLimits

0x1112,	// (0x00073a04) input_focus_pane_cp09_ParamLimits

0xef50,	// (0x00081842) cam6_autofocus_pane_ParamLimits

0xef50,	// (0x00081842) cam6_autofocus_pane

0x927b,	// (0x0007bb6d) cam6_image_uncrop_pane_ParamLimits

0x927b,	// (0x0007bb6d) cam6_image_uncrop_pane

0x928a,	// (0x0007bb7c) cam6_indi_pane_ParamLimits

0x928a,	// (0x0007bb7c) cam6_indi_pane

0x92a0,	// (0x0007bb92) cam6_mode_pane_ParamLimits

0x92a0,	// (0x0007bb92) cam6_mode_pane

0x92b2,	// (0x0007bba4) cam6_timer_pane_ParamLimits

0x92b2,	// (0x0007bba4) cam6_timer_pane

0x92be,	// (0x0007bbb0) cam6_zoom_pane_ParamLimits

0x92be,	// (0x0007bbb0) cam6_zoom_pane

0x92ca,	// (0x0007bbbc) cam6_mode_pane_g1_ParamLimits

0x92ca,	// (0x0007bbbc) cam6_mode_pane_g1

0x92da,	// (0x0007bbcc) cam6_mode_pane_g2_ParamLimits

0x92da,	// (0x0007bbcc) cam6_mode_pane_g2

0x92ea,	// (0x0007bbdc) cam6_mode_pane_g3_ParamLimits

0x92ea,	// (0x0007bbdc) cam6_mode_pane_g3

0x92fa,	// (0x0007bbec) cam6_mode_pane_g4_ParamLimits

0x92fa,	// (0x0007bbec) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00082449) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00082449) cam6_mode_pane_g

0xd31c,	// (0x0007fc0e) bg_tb_trans_pane_cp08_ParamLimits

0xd31c,	// (0x0007fc0e) bg_tb_trans_pane_cp08

0xd32a,	// (0x0007fc1c) cam6_battery_pane_ParamLimits

0xd32a,	// (0x0007fc1c) cam6_battery_pane

0xd340,	// (0x0007fc32) cam6_indi_pane_g1_ParamLimits

0xd340,	// (0x0007fc32) cam6_indi_pane_g1

0xd352,	// (0x0007fc44) cam6_indi_pane_g2_ParamLimits

0xd352,	// (0x0007fc44) cam6_indi_pane_g2

0xd364,	// (0x0007fc56) cam6_indi_pane_g3_ParamLimits

0xd364,	// (0x0007fc56) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00082452) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00082452) cam6_indi_pane_g

0xd376,	// (0x0007fc68) cam6_indi_pane_t1_ParamLimits

0xd376,	// (0x0007fc68) cam6_indi_pane_t1

0x930a,	// (0x0007bbfc) cam6_autofocus_pane_g1

0x9312,	// (0x0007bc04) cam6_autofocus_pane_g2

0x931a,	// (0x0007bc0c) cam6_autofocus_pane_g3

0x9322,	// (0x0007bc14) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00082459) cam6_autofocus_pane_g

0xd39c,	// (0x0007fc8e) cam6_timer_pane_g1

0xd3a4,	// (0x0007fc96) cam6_timer_pane_t1

0xd3b2,	// (0x0007fca4) cam6_zoom_cont_pane

0xd3ba,	// (0x0007fcac) cam6_zoom_pane_g1

0xd3c2,	// (0x0007fcb4) cam6_zoom_pane_g2

0x932a,	// (0x0007bc1c) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00082462) cam6_zoom_pane_g

0xc1e7,	// (0x0007ead9) cam6_battery_pane_g1

0xc1e7,	// (0x0007ead9) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00081ff2) cam6_battery_pane_g

0xd3ca,	// (0x0007fcbc) cam6_zoom_cont_pane_g1

0xd3d3,	// (0x0007fcc5) cam6_zoom_cont_pane_g2

0xd3dc,	// (0x0007fcce) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00082469) cam6_zoom_cont_pane_g

0x9347,	// (0x0007bc39) cam6_mode_pane_cp_ParamLimits

0x9347,	// (0x0007bc39) cam6_mode_pane_cp

0x92be,	// (0x0007bbb0) cam6_zoom_pane_cp_ParamLimits

0x92be,	// (0x0007bbb0) cam6_zoom_pane_cp

0x9359,	// (0x0007bc4b) vid6_image_uncrop_cif_pane_ParamLimits

0x9359,	// (0x0007bc4b) vid6_image_uncrop_cif_pane

0x9369,	// (0x0007bc5b) vid6_image_uncrop_nhd_pane_ParamLimits

0x9369,	// (0x0007bc5b) vid6_image_uncrop_nhd_pane

0x927b,	// (0x0007bb6d) vid6_image_uncrop_vga_pane_ParamLimits

0x927b,	// (0x0007bb6d) vid6_image_uncrop_vga_pane

0x9378,	// (0x0007bc6a) vid6_image_uncrop_wvga_pane_ParamLimits

0x9378,	// (0x0007bc6a) vid6_image_uncrop_wvga_pane

0x9387,	// (0x0007bc79) vid6_indi_pane_ParamLimits

0x9387,	// (0x0007bc79) vid6_indi_pane

0xd31c,	// (0x0007fc0e) bg_tb_trans_pane_cp09_ParamLimits

0xd31c,	// (0x0007fc0e) bg_tb_trans_pane_cp09

0xd3f4,	// (0x0007fce6) cam6_battery_pane_cp_ParamLimits

0xd3f4,	// (0x0007fce6) cam6_battery_pane_cp

0xd400,	// (0x0007fcf2) vid6_indi_pane_g1_ParamLimits

0xd400,	// (0x0007fcf2) vid6_indi_pane_g1

0xd412,	// (0x0007fd04) vid6_indi_pane_g2_ParamLimits

0xd412,	// (0x0007fd04) vid6_indi_pane_g2

0xd424,	// (0x0007fd16) vid6_indi_pane_g3_ParamLimits

0xd424,	// (0x0007fd16) vid6_indi_pane_g3

0xd439,	// (0x0007fd2b) vid6_indi_pane_g4_ParamLimits

0xd439,	// (0x0007fd2b) vid6_indi_pane_g4

0xd44e,	// (0x0007fd40) vid6_indi_pane_g5_ParamLimits

0xd44e,	// (0x0007fd40) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00082470) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00082470) vid6_indi_pane_g

0xd468,	// (0x0007fd5a) vid6_indi_pane_t1_ParamLimits

0xd468,	// (0x0007fd5a) vid6_indi_pane_t1

0xd47e,	// (0x0007fd70) vid6_indi_pane_t2_ParamLimits

0xd47e,	// (0x0007fd70) vid6_indi_pane_t2

0xd4a6,	// (0x0007fd98) vid6_indi_pane_t3_ParamLimits

0xd4a6,	// (0x0007fd98) vid6_indi_pane_t3

0xd4ce,	// (0x0007fdc0) vid6_indi_pane_t4_ParamLimits

0xd4ce,	// (0x0007fdc0) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0008247b) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0008247b) vid6_indi_pane_t

0xd4f2,	// (0x0007fde4) wait_bar_pane_cp08

0x939f,	// (0x0007bc91) main_cset_text2_pane_t1_ParamLimits

0x939f,	// (0x0007bc91) main_cset_text2_pane_t1

0x9332,	// (0x0007bc24) listscroll_gen_pane_cp06_t1_ParamLimits

0x9332,	// (0x0007bc24) listscroll_gen_pane_cp06_t1

0xaa0f,	// (0x0007d301) main_cam6_set_pane

0xc453,	// (0x0007ed45) bg_tb_trans_pane_cp06_ParamLimits

0xedf9,	// (0x000816eb) cam4_indicators_pane_g1_ParamLimits

0xee0a,	// (0x000816fc) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00082208) cam4_indicators_pane_g_ParamLimits

0xee28,	// (0x0008171a) cam4_indicators_pane_t1_ParamLimits

0xcc2c,	// (0x0007f51e) bg_tb_trans_pane_cp07_ParamLimits

0x7fed,	// (0x0007a8df) vid4_indicators_pane_g1_ParamLimits

0x7ffa,	// (0x0007a8ec) vid4_indicators_pane_g2_ParamLimits

0x8007,	// (0x0007a8f9) vid4_indicators_pane_g3_ParamLimits

0x8014,	// (0x0007a906) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008221a) vid4_indicators_pane_g_ParamLimits

0x802c,	// (0x0007a91e) vid4_indicators_pane_t1_ParamLimits

0xeeb8,	// (0x000817aa) vid4_progress_pane_g1_ParamLimits

0xeec8,	// (0x000817ba) vid4_progress_pane_g2_ParamLimits

0xad9a,	// (0x0007d68c) vid4_progress_pane_g3_ParamLimits

0xeed8,	// (0x000817ca) vid4_progress_pane_g4_ParamLimits

0xfad2,	// (0x000823c4) vid4_progress_pane_g_ParamLimits

0xeef6,	// (0x000817e8) vid4_progress_pane_t1_ParamLimits

0xef0b,	// (0x000817fd) vid4_progress_pane_t2_ParamLimits

0xef21,	// (0x00081813) vid4_progress_pane_t3_ParamLimits

0xfadd,	// (0x000823cf) vid4_progress_pane_t_ParamLimits

0xef36,	// (0x00081828) wait_bar_pane_cp07_ParamLimits

0x93bc,	// (0x0007bcae) main_cam6_set_pane_g2_ParamLimits

0x93bc,	// (0x0007bcae) main_cam6_set_pane_g2

0x93e0,	// (0x0007bcd2) main_cset6_listscroll_pane_ParamLimits

0x93e0,	// (0x0007bcd2) main_cset6_listscroll_pane

0x9400,	// (0x0007bcf2) main_cset6_slider_pane_ParamLimits

0x9400,	// (0x0007bcf2) main_cset6_slider_pane

0x9416,	// (0x0007bd08) main_cset6_text2_pane_ParamLimits

0x9416,	// (0x0007bd08) main_cset6_text2_pane

0xd501,	// (0x0007fdf3) main_cset6_text_pane

0xd509,	// (0x0007fdfb) main_cset_list_pane_copy1_ParamLimits

0xd509,	// (0x0007fdfb) main_cset_list_pane_copy1

0xd519,	// (0x0007fe0b) scroll_pane_cp028_copy1

0x9424,	// (0x0007bd16) cset_list_set_pane_copy1

0x9435,	// (0x0007bd27) aid_position_infowindow_above_copy1

0x943d,	// (0x0007bd2f) aid_position_infowindow_below_copy1

0x9445,	// (0x0007bd37) cset_list_set_pane_g1_copy1

0x1121,	// (0x00073a13) cset_list_set_pane_g3_copy1_ParamLimits

0x1121,	// (0x00073a13) cset_list_set_pane_g3_copy1

0x1130,	// (0x00073a22) cset_list_set_pane_t1_copy1_ParamLimits

0x1130,	// (0x00073a22) cset_list_set_pane_t1_copy1

0x19ac,	// (0x0007429e) list_highlight_pane_cp021_copy1_ParamLimits

0x19ac,	// (0x0007429e) list_highlight_pane_cp021_copy1

0xd522,	// (0x0007fe14) cset6_slider_pane_ParamLimits

0xd522,	// (0x0007fe14) cset6_slider_pane

0xd54e,	// (0x0007fe40) main_cset6_slider_pane_g1_ParamLimits

0xd54e,	// (0x0007fe40) main_cset6_slider_pane_g1

0x944d,	// (0x0007bd3f) main_cset6_slider_pane_g2_ParamLimits

0x944d,	// (0x0007bd3f) main_cset6_slider_pane_g2

0xd576,	// (0x0007fe68) main_cset6_slider_pane_g3_ParamLimits

0xd576,	// (0x0007fe68) main_cset6_slider_pane_g3

0x9475,	// (0x0007bd67) main_cset6_slider_pane_g4_ParamLimits

0x9475,	// (0x0007bd67) main_cset6_slider_pane_g4

0x9481,	// (0x0007bd73) main_cset6_slider_pane_g5_ParamLimits

0x9481,	// (0x0007bd73) main_cset6_slider_pane_g5

0xce06,	// (0x0007f6f8) main_cset6_slider_pane_g7_ParamLimits

0xce06,	// (0x0007f6f8) main_cset6_slider_pane_g7

0xce12,	// (0x0007f704) main_cset6_slider_pane_g8_ParamLimits

0xce12,	// (0x0007f704) main_cset6_slider_pane_g8

0x86b1,	// (0x0007afa3) main_cset6_slider_pane_g9_ParamLimits

0x86b1,	// (0x0007afa3) main_cset6_slider_pane_g9

0x86bd,	// (0x0007afaf) main_cset6_slider_pane_g10_ParamLimits

0x86bd,	// (0x0007afaf) main_cset6_slider_pane_g10

0x86c9,	// (0x0007afbb) main_cset6_slider_pane_g11_ParamLimits

0x86c9,	// (0x0007afbb) main_cset6_slider_pane_g11

0x86d5,	// (0x0007afc7) main_cset6_slider_pane_g12_ParamLimits

0x86d5,	// (0x0007afc7) main_cset6_slider_pane_g12

0x86e1,	// (0x0007afd3) main_cset6_slider_pane_g13_ParamLimits

0x86e1,	// (0x0007afd3) main_cset6_slider_pane_g13

0x86ed,	// (0x0007afdf) main_cset6_slider_pane_g14_ParamLimits

0x86ed,	// (0x0007afdf) main_cset6_slider_pane_g14

0x948d,	// (0x0007bd7f) main_cset6_slider_pane_g15_ParamLimits

0x948d,	// (0x0007bd7f) main_cset6_slider_pane_g15

0x8711,	// (0x0007b003) main_cset6_slider_pane_g16_ParamLimits

0x8711,	// (0x0007b003) main_cset6_slider_pane_g16

0x871d,	// (0x0007b00f) main_cset6_slider_pane_g17_ParamLimits

0x871d,	// (0x0007b00f) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00082484) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00082484) main_cset6_slider_pane_g

0xd582,	// (0x0007fe74) main_cset6_slider_pane_t1_ParamLimits

0xd582,	// (0x0007fe74) main_cset6_slider_pane_t1

0x94bd,	// (0x0007bdaf) main_cset6_slider_pane_t2_ParamLimits

0x94bd,	// (0x0007bdaf) main_cset6_slider_pane_t2

0x94e8,	// (0x0007bdda) main_cset6_slider_pane_t3_ParamLimits

0x94e8,	// (0x0007bdda) main_cset6_slider_pane_t3

0x9513,	// (0x0007be05) main_cset6_slider_pane_t4_ParamLimits

0x9513,	// (0x0007be05) main_cset6_slider_pane_t4

0x953e,	// (0x0007be30) main_cset6_slider_pane_t5_ParamLimits

0x953e,	// (0x0007be30) main_cset6_slider_pane_t5

0xd5c3,	// (0x0007feb5) main_cset6_slider_pane_t7_ParamLimits

0xd5c3,	// (0x0007feb5) main_cset6_slider_pane_t7

0x9569,	// (0x0007be5b) main_cset6_slider_pane_t8_ParamLimits

0x9569,	// (0x0007be5b) main_cset6_slider_pane_t8

0x958d,	// (0x0007be7f) main_cset6_slider_pane_t9_ParamLimits

0x958d,	// (0x0007be7f) main_cset6_slider_pane_t9

0x95b1,	// (0x0007bea3) main_cset6_slider_pane_t10_ParamLimits

0x95b1,	// (0x0007bea3) main_cset6_slider_pane_t10

0x95d5,	// (0x0007bec7) main_cset6_slider_pane_t11_ParamLimits

0x95d5,	// (0x0007bec7) main_cset6_slider_pane_t11

0xd5f9,	// (0x0007feeb) main_cset6_slider_pane_t14_ParamLimits

0xd5f9,	// (0x0007feeb) main_cset6_slider_pane_t14

0xd632,	// (0x0007ff24) main_cset6_slider_pane_t15_ParamLimits

0xd632,	// (0x0007ff24) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000824a9) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000824a9) main_cset6_slider_pane_t

0xef7b,	// (0x0008186d) cset_slider_pane_g1_copy1

0xef84,	// (0x00081876) cset_slider_pane_g2_copy1

0xef8d,	// (0x0008187f) cset_slider_pane_g3_copy1

0xaa0f,	// (0x0007d301) bg_popup_sub_pane_cp011_copy1

0xcf8e,	// (0x0007f880) main_cset_text_pane_g1_copy1

0xcf96,	// (0x0007f888) main_cset_text_pane_t1_copy1

0xcfa4,	// (0x0007f896) main_cset_text_pane_t2_copy1

0xcfb2,	// (0x0007f8a4) main_cset_text_pane_t3_copy1

0xcfc0,	// (0x0007f8b2) main_cset_text_pane_t4_copy1

0xcfce,	// (0x0007f8c0) main_cset_text_pane_t5_copy1

0xcfdc,	// (0x0007f8ce) main_cset_text_pane_t6_copy1

0xcfea,	// (0x0007f8dc) main_cset_text_pane_t7_copy1

0x95f9,	// (0x0007beeb) main_cset_text2_pane_t1_copy1

0xaa0f,	// (0x0007d301) main_ncimui_pane

0x5dc1,	// (0x000786b3) popup_query_ncimui_window_ParamLimits

0x5dc1,	// (0x000786b3) popup_query_ncimui_window

0xeb46,	// (0x00081438) field_cale_ev2_pane_g4_ParamLimits

0xeb46,	// (0x00081438) field_cale_ev2_pane_g4

0x791d,	// (0x0007a20f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x791d,	// (0x0007a20f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000821a6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000821a6) cell_video_dialer_keypad_pane_g

0x7935,	// (0x0007a227) cell_video_dialer_keypad_pane_t1

0xaa0f,	// (0x0007d301) bg_popup_window_pane_cp012

0x43e5,	// (0x00076cd7) heading_pane_cp06

0xd75a,	// (0x0008004c) ncim_query_content_pane

0xaa0f,	// (0x0007d301) bg_popup_heading_pane_cp01

0xd762,	// (0x00080054) ncim_heading_pane_t1

0xd770,	// (0x00080062) ncim_indicator_popup_pane

0xd782,	// (0x00080074) ncim_query_button_pane

0xd796,	// (0x00080088) ncim_query_content_pane_t1

0xd7a8,	// (0x0008009a) ncim_query_content_pane_t2

0x0005,

0xfbf6,	// (0x000824e8) ncim_query_content_pane_t

0xd7e2,	// (0x000800d4) ncim_query_list_pane

0xd7f4,	// (0x000800e6) ncim_query_popup_pane

0xd770,	// (0x00080062) ncim_indicator_popup_pane_ParamLimits

0x970e,	// (0x0007c000) ncim_query_content_pane_g1_ParamLimits

0x970e,	// (0x0007c000) ncim_query_content_pane_g1

0xd796,	// (0x00080088) ncim_query_content_pane_t1_ParamLimits

0xd7a8,	// (0x0008009a) ncim_query_content_pane_t2_ParamLimits

0x971a,	// (0x0007c00c) ncim_query_content_pane_t3_ParamLimits

0x971a,	// (0x0007c00c) ncim_query_content_pane_t3

0x9742,	// (0x0007c034) ncim_query_content_pane_t4_ParamLimits

0x9742,	// (0x0007c034) ncim_query_content_pane_t4

0x976a,	// (0x0007c05c) ncim_query_content_pane_t5_ParamLimits

0x976a,	// (0x0007c05c) ncim_query_content_pane_t5

0xd7ba,	// (0x000800ac) ncim_query_content_pane_t6_ParamLimits

0xd7ba,	// (0x000800ac) ncim_query_content_pane_t6

0xfbf6,	// (0x000824e8) ncim_query_content_pane_t_ParamLimits

0xd7e2,	// (0x000800d4) ncim_query_list_pane_ParamLimits

0xd7f4,	// (0x000800e6) ncim_query_popup_pane_ParamLimits

0xd808,	// (0x000800fa) wait_bar_pane_cp04

0xaa0f,	// (0x0007d301) input_focus_pane_cp011

0xd810,	// (0x00080102) ncim_query_popup_pane_t1

0xd81e,	// (0x00080110) ncim_list_query_list_pane_ParamLimits

0xd81e,	// (0x00080110) ncim_list_query_list_pane

0xaa0f,	// (0x0007d301) bg_button_pane_cp027

0xd82b,	// (0x0008011d) ncim_query_button_pane_g1

0xaa0f,	// (0x0007d301) list_highlight_pane_cp012

0xd835,	// (0x00080127) ncim_list_query_list_pane_g1

0xd83d,	// (0x0008012f) ncim_list_query_list_pane_t1

0xee19,	// (0x0008170b) cam4_indicators_pane_g3_ParamLimits

0xee19,	// (0x0008170b) cam4_indicators_pane_g3

0x8020,	// (0x0007a912) vid4_indicators_pane_g5_ParamLimits

0x8020,	// (0x0007a912) vid4_indicators_pane_g5

0xeee7,	// (0x000817d9) vid4_progress_pane_g5_ParamLimits

0xeee7,	// (0x000817d9) vid4_progress_pane_g5

0x9627,	// (0x0007bf19) main_ncimui_pane_g1

0x967d,	// (0x0007bf6f) ncimui_group_query_pane_ParamLimits

0x967d,	// (0x0007bf6f) ncimui_group_query_pane

0x96b9,	// (0x0007bfab) ncimui_list_pane_ParamLimits

0x96b9,	// (0x0007bfab) ncimui_list_pane

0x96da,	// (0x0007bfcc) ncimui_text_pane_ParamLimits

0x96da,	// (0x0007bfcc) ncimui_text_pane

0x9792,	// (0x0007c084) ncimui_text_pane_t1_ParamLimits

0x9792,	// (0x0007c084) ncimui_text_pane_t1

0xd84b,	// (0x0008013d) ncimui_list_single_graphic_pane_ParamLimits

0xd84b,	// (0x0008013d) ncimui_list_single_graphic_pane

0x97b0,	// (0x0007c0a2) ncimui_query_pane_ParamLimits

0x97b0,	// (0x0007c0a2) ncimui_query_pane

0xaa0f,	// (0x0007d301) list_highlight_pane_cp013

0xd85b,	// (0x0008014d) ncim_list_query_list_pane_t1_copy1

0xd835,	// (0x00080127) ncim_list_single_graphic_pane_g1

0xd869,	// (0x0008015b) ncim_query_button_pane_cp01

0xd875,	// (0x00080167) ncim_query_entry_pane_ParamLimits

0xd875,	// (0x00080167) ncim_query_entry_pane

0xd888,	// (0x0008017a) ncimui_query_pane_g1

0xd894,	// (0x00080186) ncimui_query_pane_t1_ParamLimits

0xd894,	// (0x00080186) ncimui_query_pane_t1

0x19ac,	// (0x0007429e) input_focus_pane_cp012

0xd8ad,	// (0x0008019f) ncim_query_entry_pane_t1

0x2443,	// (0x00074d35) main_im_pane_ParamLimits

0x19ac,	// (0x0007429e) main_mobtv_pane_ParamLimits

0x19ac,	// (0x0007429e) main_mobtv_pane

0x94a5,	// (0x0007bd97) main_cset6_slider_pane_g18_ParamLimits

0x94a5,	// (0x0007bd97) main_cset6_slider_pane_g18

0x94b1,	// (0x0007bda3) main_cset6_slider_pane_g19_ParamLimits

0x94b1,	// (0x0007bda3) main_cset6_slider_pane_g19

0xd8bf,	// (0x000801b1) bg_main_mobtv_pane_ParamLimits

0xd8bf,	// (0x000801b1) bg_main_mobtv_pane

0x97c3,	// (0x0007c0b5) main_mobtv_info_pane

0x97cc,	// (0x0007c0be) main_mobtv_loading_pane_ParamLimits

0x97cc,	// (0x0007c0be) main_mobtv_loading_pane

0xd8cd,	// (0x000801bf) main_mobtv_pg_channel_list_pane

0xd8d7,	// (0x000801c9) main_mobtv_pg_hdr_pane

0x97d9,	// (0x0007c0cb) main_mobtv_programe_curr_pane_ParamLimits

0x97d9,	// (0x0007c0cb) main_mobtv_programe_curr_pane

0x97e6,	// (0x0007c0d8) main_mobtv_programe_next_pane_ParamLimits

0x97e6,	// (0x0007c0d8) main_mobtv_programe_next_pane

0xd8e0,	// (0x000801d2) popup_mobtv_noti_window

0xc1e7,	// (0x0007ead9) main_tv_pg_hdr_pane_g1

0xd8e8,	// (0x000801da) main_tv_pg_hdr_pane_g2

0xd8f0,	// (0x000801e2) main_tv_pg_hdr_pane_g3

0xd8f8,	// (0x000801ea) main_tv_pg_hdr_pane_g4

0xd900,	// (0x000801f2) main_tv_pg_hdr_pane_g5

0xd90a,	// (0x000801fc) main_tv_pg_hdr_pane_g6

0xd914,	// (0x00080206) main_tv_pg_hdr_pane_g7

0xd91e,	// (0x00080210) main_tv_pg_hdr_pane_g8

0xd928,	// (0x0008021a) main_tv_pg_hdr_pane_g9

0xd932,	// (0x00080224) main_tv_pg_hdr_pane_g10

0xd93c,	// (0x0008022e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc03,	// (0x000824f5) main_tv_pg_hdr_pane_g

0xd946,	// (0x00080238) main_tv_pg_hdr_pane_t1

0xd954,	// (0x00080246) main_tv_pg_hdr_pane_t2

0xd962,	// (0x00080254) main_tv_pg_hdr_pane_t3

0xd972,	// (0x00080264) main_tv_pg_hdr_pane_t4

0xd982,	// (0x00080274) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1a,	// (0x0008250c) main_tv_pg_hdr_pane_t

0xd992,	// (0x00080284) single_mobtv_pg_channel_pane_ParamLimits

0xd992,	// (0x00080284) single_mobtv_pg_channel_pane

0xd9a4,	// (0x00080296) single_mobtv_pg_channel_table_pane

0xd9ad,	// (0x0008029f) single_mobtv_pg_channel_thumb_pane

0xd9b6,	// (0x000802a8) single_tv_pg_channel_pane_g1

0xd9bf,	// (0x000802b1) single_tv_pg_channel_pane_g2

0x0001,

0xfc25,	// (0x00082517) single_tv_pg_channel_pane_g

0xc453,	// (0x0007ed45) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc453,	// (0x0007ed45) bg_single_mobtv_pg_channel_thumb_pane

0xd9c8,	// (0x000802ba) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9c8,	// (0x000802ba) single_mobtv_pg_channel_thumb_pane_g1

0xd9d6,	// (0x000802c8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9d6,	// (0x000802c8) single_mobtv_pg_channel_thumb_pane_g2

0xd9e2,	// (0x000802d4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9e2,	// (0x000802d4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2a,	// (0x0008251c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2a,	// (0x0008251c) single_mobtv_pg_channel_thumb_pane_g

0xd9ee,	// (0x000802e0) single_mobtv_pg_channel_thumb_pane_t1

0xd9fc,	// (0x000802ee) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc31,	// (0x00082523) single_mobtv_pg_channel_thumb_pane_t

0xc1e7,	// (0x0007ead9) bg_single_mobtv_pg_channel_table_pane_g1

0xc1e7,	// (0x0007ead9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00081ff2) bg_single_mobtv_pg_channel_table_pane_g

0xda0a,	// (0x000802fc) single_mobtv_pg_channel_table_pane_t1

0xda18,	// (0x0008030a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc36,	// (0x00082528) single_mobtv_pg_channel_table_pane_t

0x97fb,	// (0x0007c0ed) main_mobtv_info_pane_g1_ParamLimits

0x97fb,	// (0x0007c0ed) main_mobtv_info_pane_g1

0x9819,	// (0x0007c10b) main_mobtv_info_pane_t1_ParamLimits

0x9819,	// (0x0007c10b) main_mobtv_info_pane_t1

0x9891,	// (0x0007c183) main_mobtv_info_pane_t2_ParamLimits

0x9891,	// (0x0007c183) main_mobtv_info_pane_t2

0x0002,

0xfc40,	// (0x00082532) main_mobtv_info_pane_t_ParamLimits

0xfc40,	// (0x00082532) main_mobtv_info_pane_t

0x9920,	// (0x0007c212) wait_bar_pane_cp05

0x9932,	// (0x0007c224) main_mobtv_loading_pane_g1_ParamLimits

0x9932,	// (0x0007c224) main_mobtv_loading_pane_g1

0x9945,	// (0x0007c237) main_mobtv_loading_pane_g2_ParamLimits

0x9945,	// (0x0007c237) main_mobtv_loading_pane_g2

0x9951,	// (0x0007c243) main_mobtv_loading_pane_g3_ParamLimits

0x9951,	// (0x0007c243) main_mobtv_loading_pane_g3

0x0002,

0xfc47,	// (0x00082539) main_mobtv_loading_pane_g_ParamLimits

0xfc47,	// (0x00082539) main_mobtv_loading_pane_g

0xda26,	// (0x00080318) main_mobtv_loading_pane_t1_ParamLimits

0xda26,	// (0x00080318) main_mobtv_loading_pane_t1

0xda3e,	// (0x00080330) main_mobtv_loading_pane_t2_ParamLimits

0xda3e,	// (0x00080330) main_mobtv_loading_pane_t2

0x0001,

0xfc4e,	// (0x00082540) main_mobtv_loading_pane_t_ParamLimits

0xfc4e,	// (0x00082540) main_mobtv_loading_pane_t

0x9964,	// (0x0007c256) wait_bar_pane_cp06_ParamLimits

0x9964,	// (0x0007c256) wait_bar_pane_cp06

0xda62,	// (0x00080354) main_mobtv_programe_curr_pane_t1

0xda70,	// (0x00080362) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc53,	// (0x00082545) main_mobtv_programe_curr_pane_t

0xda7e,	// (0x00080370) main_mobtv_programe_next_pane_t1

0xda8c,	// (0x0008037e) main_mobtv_programe_next_pane_t2

0xda9a,	// (0x0008038c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc58,	// (0x0008254a) main_mobtv_programe_next_pane_t

0xaa0f,	// (0x0007d301) bg_popup_mobtv_noti_window_pane

0xdaa8,	// (0x0008039a) popup_mobtv_noti_window_g1

0xdab0,	// (0x000803a2) popup_mobtv_noti_window_t1

0xdabe,	// (0x000803b0) popup_mobtv_noti_window_t2

0x0001,

0xfc5f,	// (0x00082551) popup_mobtv_noti_window_t

0xc1e7,	// (0x0007ead9) bg_popup_mobtv_noti_window_pane_g1

0xaa0f,	// (0x0007d301) sc_clock_pane

0xaa0f,	// (0x0007d301) main_fs_bigclock_pane

0x90f0,	// (0x0007b9e2) blid2_tripm_pane_t4_ParamLimits

0x90f0,	// (0x0007b9e2) blid2_tripm_pane_t4

0x9973,	// (0x0007c265) sc_clock_pane_g1_ParamLimits

0x9973,	// (0x0007c265) sc_clock_pane_g1

0x9985,	// (0x0007c277) sc_clock_pane_t1_ParamLimits

0x9985,	// (0x0007c277) sc_clock_pane_t1

0x99a7,	// (0x0007c299) sc_clock_pane_t2_ParamLimits

0x99a7,	// (0x0007c299) sc_clock_pane_t2

0x99bf,	// (0x0007c2b1) sc_clock_pane_t3_ParamLimits

0x99bf,	// (0x0007c2b1) sc_clock_pane_t3

0x0004,

0xfc64,	// (0x00082556) sc_clock_pane_t_ParamLimits

0xfc64,	// (0x00082556) sc_clock_pane_t

0xa239,	// (0x0007cb2b) main_fs_bigclock_indicator_pane_ParamLimits

0xa239,	// (0x0007cb2b) main_fs_bigclock_indicator_pane

0xc423,	// (0x0007ed15) main_fs_bigclock_pane_g1_ParamLimits

0xc423,	// (0x0007ed15) main_fs_bigclock_pane_g1

0xa245,	// (0x0007cb37) main_fs_bigclock_pane_t1_ParamLimits

0xa245,	// (0x0007cb37) main_fs_bigclock_pane_t1

0xa257,	// (0x0007cb49) main_fs_bigclock_pane_t2_ParamLimits

0xa257,	// (0x0007cb49) main_fs_bigclock_pane_t2

0xa26b,	// (0x0007cb5d) main_fs_bigclock_pane_t3_ParamLimits

0xa26b,	// (0x0007cb5d) main_fs_bigclock_pane_t3

0x0002,

0xfe63,	// (0x00082755) main_fs_bigclock_pane_t_ParamLimits

0xfe63,	// (0x00082755) main_fs_bigclock_pane_t

0xe6a3,	// (0x00080f95) main_fs_bigclock_indicator_pane_g1

0xd78a,	// (0x0008007c) ncim_query_content_pane_g2_ParamLimits

0xd78a,	// (0x0008007c) ncim_query_content_pane_g2

0x0001,

0xfbf1,	// (0x000824e3) ncim_query_content_pane_g_ParamLimits

0xfbf1,	// (0x000824e3) ncim_query_content_pane_g

0x99d6,	// (0x0007c2c8) sc_clock_pane_t4_ParamLimits

0x99d6,	// (0x0007c2c8) sc_clock_pane_t4

0x19ac,	// (0x0007429e) main_radioblah_pane

0xcbbc,	// (0x0007f4ae) cell_call4_button_pane_t1_copy1_ParamLimits

0xcbbc,	// (0x0007f4ae) cell_call4_button_pane_t1_copy1

0x962f,	// (0x0007bf21) main_ncimui_pane_t1_ParamLimits

0x962f,	// (0x0007bf21) main_ncimui_pane_t1

0x9649,	// (0x0007bf3b) main_ncimui_pane_t2_ParamLimits

0x9649,	// (0x0007bf3b) main_ncimui_pane_t2

0x0002,

0xfbea,	// (0x000824dc) main_ncimui_pane_t_ParamLimits

0xfbea,	// (0x000824dc) main_ncimui_pane_t

0xdbec,	// (0x000804de) main_radioblah_anim_pane_ParamLimits

0xdbec,	// (0x000804de) main_radioblah_anim_pane

0xdbfd,	// (0x000804ef) main_radioblah_info_pane_ParamLimits

0xdbfd,	// (0x000804ef) main_radioblah_info_pane

0xdc11,	// (0x00080503) main_radioblah_pane_t1_ParamLimits

0xdc11,	// (0x00080503) main_radioblah_pane_t1

0xdc2d,	// (0x0008051f) main_radioblah_pane_t2_ParamLimits

0xdc2d,	// (0x0008051f) main_radioblah_pane_t2

0x0003,

0xfc85,	// (0x00082577) main_radioblah_pane_t_ParamLimits

0xfc85,	// (0x00082577) main_radioblah_pane_t

0x9a7f,	// (0x0007c371) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9a7f,	// (0x0007c371) main_radioblah_rocker_ctrl_pane

0xdc75,	// (0x00080567) main_radioblah_info_pane_t1_ParamLimits

0xdc75,	// (0x00080567) main_radioblah_info_pane_t1

0x9ad7,	// (0x0007c3c9) main_radioblah_info_pane_t2_ParamLimits

0x9ad7,	// (0x0007c3c9) main_radioblah_info_pane_t2

0x0003,

0xfc8e,	// (0x00082580) main_radioblah_info_pane_t_ParamLimits

0xfc8e,	// (0x00082580) main_radioblah_info_pane_t

0xc1e7,	// (0x0007ead9) main_radioblah_rocker_ctrl_pane_g1

0x9b87,	// (0x0007c479) main_radioblah_rocker_ctrl_pane_g2

0x9b8f,	// (0x0007c481) main_radioblah_rocker_ctrl_pane_g3

0x9b97,	// (0x0007c489) main_radioblah_rocker_ctrl_pane_g4

0x9b9f,	// (0x0007c491) main_radioblah_rocker_ctrl_pane_g5

0x9ba7,	// (0x0007c499) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc97,	// (0x00082589) main_radioblah_rocker_ctrl_pane_g

0x95f9,	// (0x0007beeb) main_cset_text2_pane_t1_copy1_ParamLimits

0xede9,	// (0x000816db) cam4_image_uncrop_qvga_pane

0xee42,	// (0x00081734) vid4_image_uncrop_qcif_pane

0xef50,	// (0x00081842) cam6_image_uncrop_qvga_pane_ParamLimits

0xef50,	// (0x00081842) cam6_image_uncrop_qvga_pane

0xd3e4,	// (0x0007fcd6) vid6_image_uncrop_qcif_pane_ParamLimits

0xd3e4,	// (0x0007fcd6) vid6_image_uncrop_qcif_pane

0xaa0f,	// (0x0007d301) bg_popup_preview_window_pane_cp03

0xd73c,	// (0x0008002e) list_cset_text2_pane

0xd744,	// (0x00080036) main_cset6_text2_pane_g1

0xd74c,	// (0x0008003e) main_cset6_text2_pane_t1

0x9baf,	// (0x0007c4a1) list_cset_text2_pane_t1_ParamLimits

0x9baf,	// (0x0007c4a1) list_cset_text2_pane_t1

0x19ac,	// (0x0007429e) main_radioblah_pane_ParamLimits

0x990c,	// (0x0007c1fe) main_mobtv_info_pane_t3_ParamLimits

0x990c,	// (0x0007c1fe) main_mobtv_info_pane_t3

0x9a6d,	// (0x0007c35f) main_radioblah_pane_g1

0x9aa7,	// (0x0007c399) main_radioblah_info_pane_g1

0x9b2c,	// (0x0007c41e) main_radioblah_info_pane_t3_ParamLimits

0x9b2c,	// (0x0007c41e) main_radioblah_info_pane_t3

0x3ebb,	// (0x000767ad) highlight_cell_cale_month_pane_ParamLimits

0x3ebb,	// (0x000767ad) highlight_cell_cale_month_pane

0xaa0f,	// (0x0007d301) main_phob_fisheye_pane

0xc561,	// (0x0007ee53) scroll_pane_cp0031_ParamLimits

0xc561,	// (0x0007ee53) scroll_pane_cp0031

0xd4f2,	// (0x0007fde4) wait_bar_pane_cp08_ParamLimits

0x9424,	// (0x0007bd16) cset_list_set_pane_copy1_ParamLimits

0xdcaf,	// (0x000805a1) highlight_cell_cale_month_pane_g1

0x9bc8,	// (0x0007c4ba) highlight_cell_cale_month_pane_t1

0xd25e,	// (0x0007fb50) list_gen_pane_cp01

0xcdf1,	// (0x0007f6e3) scroll_pane_01

0x1145,	// (0x00073a37) list_single_double_fisheye_pane

0x114e,	// (0x00073a40) list_double_fisheye_pane_g1_ParamLimits

0x114e,	// (0x00073a40) list_double_fisheye_pane_g1

0x115a,	// (0x00073a4c) list_double_fisheye_pane_g2_ParamLimits

0x115a,	// (0x00073a4c) list_double_fisheye_pane_g2

0x116e,	// (0x00073a60) list_double_fisheye_pane_g3_ParamLimits

0x116e,	// (0x00073a60) list_double_fisheye_pane_g3

0x0004,

0xfca4,	// (0x00082596) list_double_fisheye_pane_g_ParamLimits

0xfca4,	// (0x00082596) list_double_fisheye_pane_g

0x1197,	// (0x00073a89) list_double_fisheye_pane_t1_ParamLimits

0x1197,	// (0x00073a89) list_double_fisheye_pane_t1

0x11b2,	// (0x00073aa4) list_double_fisheye_pane_t2_ParamLimits

0x11b2,	// (0x00073aa4) list_double_fisheye_pane_t2

0x0001,

0xfcaf,	// (0x000825a1) list_double_fisheye_pane_t_ParamLimits

0xfcaf,	// (0x000825a1) list_double_fisheye_pane_t

0xaa0f,	// (0x0007d301) main_call5_pane

0x9a01,	// (0x0007c2f3) sc_swipe_pane_ParamLimits

0x9a01,	// (0x0007c2f3) sc_swipe_pane

0x9be9,	// (0x0007c4db) call5_image_pane_ParamLimits

0x9be9,	// (0x0007c4db) call5_image_pane

0x9c06,	// (0x0007c4f8) call5_swipe_1_pane_ParamLimits

0x9c06,	// (0x0007c4f8) call5_swipe_1_pane

0x9c19,	// (0x0007c50b) call5_swipe_2_pane_ParamLimits

0x9c19,	// (0x0007c50b) call5_swipe_2_pane

0x9c44,	// (0x0007c536) popup_call5_audio_first_window_ParamLimits

0x9c44,	// (0x0007c536) popup_call5_audio_first_window

0xc453,	// (0x0007ed45) call5_swipe_1_pane_g1_ParamLimits

0xc453,	// (0x0007ed45) call5_swipe_1_pane_g1

0xdcb7,	// (0x000805a9) call5_swipe_1_pane_g2_ParamLimits

0xdcb7,	// (0x000805a9) call5_swipe_1_pane_g2

0x0001,

0xfcb4,	// (0x000825a6) call5_swipe_1_pane_g_ParamLimits

0xfcb4,	// (0x000825a6) call5_swipe_1_pane_g

0xdcc3,	// (0x000805b5) call5_swipe_1_pane_t1_ParamLimits

0xdcc3,	// (0x000805b5) call5_swipe_1_pane_t1

0xc453,	// (0x0007ed45) call5_swipe_2_pane_g1_ParamLimits

0xc453,	// (0x0007ed45) call5_swipe_2_pane_g1

0xdcd8,	// (0x000805ca) call5_swipe_2_pane_g2_ParamLimits

0xdcd8,	// (0x000805ca) call5_swipe_2_pane_g2

0x0001,

0xfcb9,	// (0x000825ab) call5_swipe_2_pane_g_ParamLimits

0xfcb9,	// (0x000825ab) call5_swipe_2_pane_g

0xdce4,	// (0x000805d6) call5_swipe_2_pane_t1_ParamLimits

0xdce4,	// (0x000805d6) call5_swipe_2_pane_t1

0xdcf9,	// (0x000805eb) sc_swipe_pane_g1_ParamLimits

0xdcf9,	// (0x000805eb) sc_swipe_pane_g1

0xdd06,	// (0x000805f8) sc_swipe_pane_g2_ParamLimits

0xdd06,	// (0x000805f8) sc_swipe_pane_g2

0x0001,

0xfcbe,	// (0x000825b0) sc_swipe_pane_g_ParamLimits

0xfcbe,	// (0x000825b0) sc_swipe_pane_g

0xdd12,	// (0x00080604) sc_swipe_pane_t1_ParamLimits

0xdd12,	// (0x00080604) sc_swipe_pane_t1

0xaa0f,	// (0x0007d301) main_cmail_launcher_pane

0x9c55,	// (0x0007c547) aid_size_cell_cmail_l_ParamLimits

0x9c55,	// (0x0007c547) aid_size_cell_cmail_l

0x9c6f,	// (0x0007c561) grid_cmail_l_pane_ParamLimits

0x9c6f,	// (0x0007c561) grid_cmail_l_pane

0x9c8a,	// (0x0007c57c) cell_cmail_l_pane_ParamLimits

0x9c8a,	// (0x0007c57c) cell_cmail_l_pane

0x9cb0,	// (0x0007c5a2) cell_cmail_l_pane_g1_ParamLimits

0x9cb0,	// (0x0007c5a2) cell_cmail_l_pane_g1

0x9cbc,	// (0x0007c5ae) cell_cmail_l_pane_t1_ParamLimits

0x9cbc,	// (0x0007c5ae) cell_cmail_l_pane_t1

0xdd27,	// (0x00080619) cell_cmail_l_pane_t2_ParamLimits

0xdd27,	// (0x00080619) cell_cmail_l_pane_t2

0x0001,

0xfcc3,	// (0x000825b5) cell_cmail_l_pane_t_ParamLimits

0xfcc3,	// (0x000825b5) cell_cmail_l_pane_t

0x19ac,	// (0x0007429e) grid_highlight_pane_cp018_ParamLimits

0x19ac,	// (0x0007429e) grid_highlight_pane_cp018

0x1866,	// (0x00074158) main2_pane_ParamLimits

0x1866,	// (0x00074158) main2_pane

0x2669,	// (0x00074f5b) popup_sp_fs_action_menu_bg_pane_g1

0x2671,	// (0x00074f63) popup_sp_fs_action_menu_bg_pane_g2

0x2679,	// (0x00074f6b) popup_sp_fs_action_menu_bg_pane_g3

0x2681,	// (0x00074f73) popup_sp_fs_action_menu_bg_pane_g4

0x2689,	// (0x00074f7b) popup_sp_fs_action_menu_bg_pane_g5

0x2691,	// (0x00074f83) popup_sp_fs_action_menu_bg_pane_g6

0x2699,	// (0x00074f8b) popup_sp_fs_action_menu_bg_pane_g7

0x26a1,	// (0x00074f93) popup_sp_fs_action_menu_bg_pane_g8

0x26a9,	// (0x00074f9b) popup_sp_fs_action_menu_bg_pane_g9

0x26b1,	// (0x00074fa3) popup_sp_fs_action_menu_bg_pane_g10

0x26b1,	// (0x00074fa3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00081a9e) popup_sp_fs_action_menu_bg_pane_g

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g3_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g3_g1

0xab6d,	// (0x0007d45f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_t3_g3_g2

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00081b4e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00081b4e) list_medium_line_x2_t3_g3_g

0xab85,	// (0x0007d477) list_medium_line_x2_t3_g3_t1_ParamLimits

0xab85,	// (0x0007d477) list_medium_line_x2_t3_g3_t1

0x0d24,	// (0x00073616) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d24,	// (0x00073616) list_medium_line_x2_t3_g3_t2

0xab9a,	// (0x0007d48c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00081b55) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00081b55) list_medium_line_x2_t3_g3_t

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g2_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g2_g1

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00081b5c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00081b5c) list_medium_line_x2_t3_g2_g

0xabaf,	// (0x0007d4a1) list_medium_line_x2_t3_g2_t1_ParamLimits

0xabaf,	// (0x0007d4a1) list_medium_line_x2_t3_g2_t1

0xabc5,	// (0x0007d4b7) list_medium_line_x2_t3_g2_t2_ParamLimits

0xabc5,	// (0x0007d4b7) list_medium_line_x2_t3_g2_t2

0xabd7,	// (0x0007d4c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0xabd7,	// (0x0007d4c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00081b61) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00081b61) list_medium_line_x2_t3_g2_t

0xab61,	// (0x0007d453) list_medium_line_x2_t4_g4_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t4_g4_g1

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t4_g4_g2_ParamLimits

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t4_g4_g2

0xab6d,	// (0x0007d45f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_t4_g4_g3

0xac00,	// (0x0007d4f2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xac00,	// (0x0007d4f2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00081b68) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00081b68) list_medium_line_x2_t4_g4_g

0x0d38,	// (0x0007362a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d38,	// (0x0007362a) list_medium_line_x2_t4_g4_t1

0x0d52,	// (0x00073644) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d52,	// (0x00073644) list_medium_line_x2_t4_g4_t2

0x0d68,	// (0x0007365a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d68,	// (0x0007365a) list_medium_line_x2_t4_g4_t3

0xac0c,	// (0x0007d4fe) list_medium_line_x2_t4_g4_t4_ParamLimits

0xac0c,	// (0x0007d4fe) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00081b71) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00081b71) list_medium_line_x2_t4_g4_t

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g4_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g4_g1

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t2_g4_g2_ParamLimits

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t2_g4_g2

0xab6d,	// (0x0007d45f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_t2_g4_g3

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00081bd8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00081bd8) list_medium_line_x2_t2_g4_g

0xac1e,	// (0x0007d510) list_medium_line_x2_t2_g4_t1_ParamLimits

0xac1e,	// (0x0007d510) list_medium_line_x2_t2_g4_t1

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00081be1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00081be1) list_medium_line_x2_t2_g4_t

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g3_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g3_g1

0xab6d,	// (0x0007d45f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_t2_g3_g2

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00081b4e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00081b4e) list_medium_line_x2_t2_g3_g

0xac33,	// (0x0007d525) list_medium_line_x2_t2_g3_t1_ParamLimits

0xac33,	// (0x0007d525) list_medium_line_x2_t2_g3_t1

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00081be6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00081be6) list_medium_line_x2_t2_g3_t

0x420f,	// (0x00076b01) main_sp_fs_list_pane_ParamLimits

0x420f,	// (0x00076b01) main_sp_fs_list_pane

0x421b,	// (0x00076b0d) sp_fs_scroll_pane_ParamLimits

0x421b,	// (0x00076b0d) sp_fs_scroll_pane

0x0d7d,	// (0x0007366f) list_medium_line_x2_t3_t1

0x0d8d,	// (0x0007367f) list_medium_line_x2_t3_t2

0xac76,	// (0x0007d568) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00081c31) list_medium_line_x2_t3_t

0x0d9b,	// (0x0007368d) list_medium_line_x3_t4_t1

0x0dab,	// (0x0007369d) list_medium_line_x3_t4_t2

0xac84,	// (0x0007d576) list_medium_line_x3_t4_t3

0xac76,	// (0x0007d568) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00081c38) list_medium_line_x3_t4_t

0x0db9,	// (0x000736ab) list_medium_line_x4_t5_t1

0x0dc9,	// (0x000736bb) list_medium_line_x4_t5_t2

0xac84,	// (0x0007d576) list_medium_line_x4_t5_t3

0xac92,	// (0x0007d584) list_medium_line_x4_t5_t4

0xac76,	// (0x0007d568) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00081c41) list_medium_line_x4_t5_t

0xab61,	// (0x0007d453) list_medium_line_t4_g4_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_t4_g4_g1

0xac00,	// (0x0007d4f2) list_medium_line_t4_g4_g2_ParamLimits

0xac00,	// (0x0007d4f2) list_medium_line_t4_g4_g2

0xaca0,	// (0x0007d592) list_medium_line_t4_g4_g3_ParamLimits

0xaca0,	// (0x0007d592) list_medium_line_t4_g4_g3

0xab79,	// (0x0007d46b) list_medium_line_t4_g4_g4_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00081c4c) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00081c4c) list_medium_line_t4_g4_g

0xacac,	// (0x0007d59e) list_medium_line_t4_g4_t1_ParamLimits

0xacac,	// (0x0007d59e) list_medium_line_t4_g4_t1

0xacc1,	// (0x0007d5b3) list_medium_line_t4_g4_t2_ParamLimits

0xacc1,	// (0x0007d5b3) list_medium_line_t4_g4_t2

0xacd6,	// (0x0007d5c8) list_medium_line_t4_g4_t3_ParamLimits

0xacd6,	// (0x0007d5c8) list_medium_line_t4_g4_t3

0xab9a,	// (0x0007d48c) list_medium_line_t4_g4_t4_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00081c55) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00081c55) list_medium_line_t4_g4_t

0x455c,	// (0x00076e4e) chi_dic_find_pane_g1

0x5b93,	// (0x00078485) main_tport_pane

0xcf1f,	// (0x0007f811) list_medium_line_plain_t1

0xcf35,	// (0x0007f827) list_medium_line_t2_g2_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t2_g2_g1

0xcf41,	// (0x0007f833) list_medium_line_t2_g2_g2_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_t2_g2_g2

0x0001,

0xfa18,	// (0x0008230a) list_medium_line_t2_g2_g_ParamLimits

0xfa18,	// (0x0008230a) list_medium_line_t2_g2_g

0x0f7e,	// (0x00073870) list_medium_line_t2_g2_t1_ParamLimits

0x0f7e,	// (0x00073870) list_medium_line_t2_g2_t1

0x0f98,	// (0x0007388a) list_medium_line_t2_g2_t2_ParamLimits

0x0f98,	// (0x0007388a) list_medium_line_t2_g2_t2

0x0001,

0xfa1d,	// (0x0008230f) list_medium_line_t2_g2_t_ParamLimits

0xfa1d,	// (0x0008230f) list_medium_line_t2_g2_t

0xd267,	// (0x0007fb59) aid_sp_fs_list_icon_a_sm

0xef48,	// (0x0008183a) aid_sp_fs_list_icon_d

0xd26f,	// (0x0007fb61) aid_sp_fs_text_primary

0xd278,	// (0x0007fb6a) aid_sp_fs_text_secondary

0xd281,	// (0x0007fb73) list_medium_line

0xd281,	// (0x0007fb73) list_medium_line_g2

0xd281,	// (0x0007fb73) list_medium_line_g3

0xd281,	// (0x0007fb73) list_medium_line_plain

0xd281,	// (0x0007fb73) list_medium_line_plain_t2

0xd281,	// (0x0007fb73) list_medium_line_plain_t3

0xd281,	// (0x0007fb73) list_medium_line_right_icon

0xd281,	// (0x0007fb73) list_medium_line_right_iconx2

0xd281,	// (0x0007fb73) list_medium_line_t2

0xd281,	// (0x0007fb73) list_medium_line_t2_g2

0xd281,	// (0x0007fb73) list_medium_line_t2_g3

0xd281,	// (0x0007fb73) list_medium_line_t2_right_icon

0xd281,	// (0x0007fb73) list_medium_line_t2_right_iconx2

0xd281,	// (0x0007fb73) list_medium_line_t3

0xd281,	// (0x0007fb73) list_medium_line_t3_g2

0xd281,	// (0x0007fb73) list_medium_line_t3_g3

0xd281,	// (0x0007fb73) list_medium_line_t3_right_iconx2

0xd28a,	// (0x0007fb7c) list_medium_line_t4_g4

0xd293,	// (0x0007fb85) list_medium_line_x2

0xd293,	// (0x0007fb85) list_medium_line_x2_t2_g2

0xd293,	// (0x0007fb85) list_medium_line_x2_t2_g3

0xd293,	// (0x0007fb85) list_medium_line_x2_t2_g4

0xd293,	// (0x0007fb85) list_medium_line_x2_t3

0xd293,	// (0x0007fb85) list_medium_line_x2_t3_g2

0xd293,	// (0x0007fb85) list_medium_line_x2_t3_g3

0xd293,	// (0x0007fb85) list_medium_line_x2_t3_g4

0xd293,	// (0x0007fb85) list_medium_line_x2_t4_g2

0xd293,	// (0x0007fb85) list_medium_line_x2_t4_g4

0xd29c,	// (0x0007fb8e) list_medium_line_x3

0xd29c,	// (0x0007fb8e) list_medium_line_x3_t4

0xd29c,	// (0x0007fb8e) list_medium_line_x3_t4_g4

0xd28a,	// (0x0007fb7c) list_medium_line_x4_t4

0xd28a,	// (0x0007fb7c) list_medium_line_x4_t4_g7

0xd28a,	// (0x0007fb7c) list_medium_line_x4_t5

0xd2a5,	// (0x0007fb97) list_single_fs_dyc_pane_ParamLimits

0xd2a5,	// (0x0007fb97) list_single_fs_dyc_pane

0xab61,	// (0x0007d453) list_medium_line_x4_t4_g7_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x4_t4_g7_g1

0xd66b,	// (0x0007ff5d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd66b,	// (0x0007ff5d) list_medium_line_x4_t4_g7_g2

0xd677,	// (0x0007ff69) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd677,	// (0x0007ff69) list_medium_line_x4_t4_g7_g3

0xd686,	// (0x0007ff78) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd686,	// (0x0007ff78) list_medium_line_x4_t4_g7_g4

0xd692,	// (0x0007ff84) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd692,	// (0x0007ff84) list_medium_line_x4_t4_g7_g5

0xd6a1,	// (0x0007ff93) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd6a1,	// (0x0007ff93) list_medium_line_x4_t4_g7_g6

0xd6b0,	// (0x0007ffa2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd6b0,	// (0x0007ffa2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000824c2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000824c2) list_medium_line_x4_t4_g7_g

0xd6bc,	// (0x0007ffae) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd6bc,	// (0x0007ffae) list_medium_line_x4_t4_g7_t1

0xd6d1,	// (0x0007ffc3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd6d1,	// (0x0007ffc3) list_medium_line_x4_t4_g7_t2

0xd6e6,	// (0x0007ffd8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd6e6,	// (0x0007ffd8) list_medium_line_x4_t4_g7_t3

0xd6fb,	// (0x0007ffed) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd6fb,	// (0x0007ffed) list_medium_line_x4_t4_g7_t4

0xd70d,	// (0x0007ffff) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd70d,	// (0x0007ffff) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000824d1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000824d1) list_medium_line_x4_t4_g7_t

0xd71f,	// (0x00080011) list_single_dyc_row_pane_ParamLimits

0xd71f,	// (0x00080011) list_single_dyc_row_pane

0x9bd6,	// (0x0007c4c8) call5_gesture_pane_ParamLimits

0x9bd6,	// (0x0007c4c8) call5_gesture_pane

0x9c2c,	// (0x0007c51e) call5_windows_pane_ParamLimits

0x9c2c,	// (0x0007c51e) call5_windows_pane

0x9cd2,	// (0x0007c5c4) call5_swipe_1_pane_cp_ParamLimits

0x9cd2,	// (0x0007c5c4) call5_swipe_1_pane_cp

0x9cde,	// (0x0007c5d0) call5_swipe_2_pane_cp_ParamLimits

0x9cde,	// (0x0007c5d0) call5_swipe_2_pane_cp

0x49ba,	// (0x000772ac) call5_image_pane_cp

0x9cea,	// (0x0007c5dc) popup_call5_audio_first_window_cp_ParamLimits

0x9cea,	// (0x0007c5dc) popup_call5_audio_first_window_cp

0xdcf9,	// (0x000805eb) call5_swipe_1_pane_g1_cp_ParamLimits

0xdcf9,	// (0x000805eb) call5_swipe_1_pane_g1_cp

0xdd39,	// (0x0008062b) call5_swipe_1_pane_g2_cp

0xdd12,	// (0x00080604) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd12,	// (0x00080604) call5_swipe_1_pane_t1_cp

0xdcf9,	// (0x000805eb) call5_swipe_2_pane_g1_cp_ParamLimits

0xdcf9,	// (0x000805eb) call5_swipe_2_pane_g1_cp

0xdd41,	// (0x00080633) call5_swipe_2_pane_g2_cp

0xdd49,	// (0x0008063b) call5_swipe_2_pane_t1_cp_ParamLimits

0xdd49,	// (0x0008063b) call5_swipe_2_pane_t1_cp

0x19ac,	// (0x0007429e) main_sp_fs_email_pane

0xdd5e,	// (0x00080650) main_sp_fs_listscroll_pane_te

0xdd67,	// (0x00080659) popup_sp_fs_action_menu_pane_ParamLimits

0xdd67,	// (0x00080659) popup_sp_fs_action_menu_pane

0xc1e7,	// (0x0007ead9) bg_sp_fs_ctrlbar_pane_g1

0xddab,	// (0x0008069d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xddb4,	// (0x000806a6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xddbd,	// (0x000806af) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc1e7,	// (0x0007ead9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc8,	// (0x000825ba) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbfcc,	// (0x0007e8be) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbfcc,	// (0x0007e8be) bg_sp_fs_ctrlbar_ddmenu_pane

0xddc6,	// (0x000806b8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xddc6,	// (0x000806b8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xddd2,	// (0x000806c4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xddd2,	// (0x000806c4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd1,	// (0x000825c3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd1,	// (0x000825c3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xddde,	// (0x000806d0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xddde,	// (0x000806d0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xddf8,	// (0x000806ea) list_medium_line_t2_right_icon_g1

0x11d4,	// (0x00073ac6) list_medium_line_t2_right_icon_t1

0x11e4,	// (0x00073ad6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd6,	// (0x000825c8) list_medium_line_t2_right_icon_t

0xbd7e,	// (0x0007e670) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd7e,	// (0x0007e670) bg_sp_fs_ctrlbar_pane

0x9d40,	// (0x0007c632) main_sp_fs_ctrlbar_button_pane_cp01

0x9d4a,	// (0x0007c63c) main_sp_fs_ctrlbar_ddmenu_pane

0xde38,	// (0x0008072a) main_sp_fs_ctrlbar_pane_g1

0xde44,	// (0x00080736) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcdb,	// (0x000825cd) main_sp_fs_ctrlbar_pane_g

0xde50,	// (0x00080742) main_sp_fs_ctrlbar_pane_t1

0x11f6,	// (0x00073ae8) main_sp_fs_ctrlbar_pane

0x121a,	// (0x00073b0c) main_sp_fs_listscroll_pane_te_cp01

0x123a,	// (0x00073b2c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x123a,	// (0x00073b2c) popup_sp_fs_action_menu_pane_cp01

0x19ac,	// (0x0007429e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x19ac,	// (0x0007429e) bg_sp_fs_highlight_list_pane_cp01

0xde65,	// (0x00080757) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde65,	// (0x00080757) sp_fs_action_menu_list_gene_pane_g1

0xde74,	// (0x00080766) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xde74,	// (0x00080766) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce0,	// (0x000825d2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce0,	// (0x000825d2) sp_fs_action_menu_list_gene_pane_g

0xde81,	// (0x00080773) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xde81,	// (0x00080773) sp_fs_action_menu_list_gene_pane_t1

0xde99,	// (0x0008078b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xde99,	// (0x0008078b) sp_fs_action_menu_list_gene_pane

0xdeba,	// (0x000807ac) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdeba,	// (0x000807ac) popup_sp_fs_action_menu_bg_pane

0xdec8,	// (0x000807ba) sp_fs_action_menu_list_pane_ParamLimits

0xdec8,	// (0x000807ba) sp_fs_action_menu_list_pane

0xdeea,	// (0x000807dc) sp_fs_scroll_pane_cp01_ParamLimits

0xdeea,	// (0x000807dc) sp_fs_scroll_pane_cp01

0x1256,	// (0x00073b48) list_medium_line_plain_t2_t1

0x1266,	// (0x00073b58) list_medium_line_plain_t2_t2

0x0001,

0xfce5,	// (0x000825d7) list_medium_line_plain_t2_t

0x1276,	// (0x00073b68) list_medium_line_plain_t3_t1

0x1286,	// (0x00073b78) list_medium_line_plain_t3_t2

0x1294,	// (0x00073b86) list_medium_line_plain_t3_t3

0x0002,

0xfcea,	// (0x000825dc) list_medium_line_plain_t3_t

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g2_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t2_g2_g1

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00081b5c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00081b5c) list_medium_line_x2_t2_g2_g

0xacac,	// (0x0007d59e) list_medium_line_x2_t2_g2_t1_ParamLimits

0xacac,	// (0x0007d59e) list_medium_line_x2_t2_g2_t1

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf1,	// (0x000825e3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf1,	// (0x000825e3) list_medium_line_x2_t2_g2_t

0xab61,	// (0x0007d453) list_medium_line_x2_t4_g2_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t4_g2_g1

0xdf10,	// (0x00080802) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdf10,	// (0x00080802) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf6,	// (0x000825e8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf6,	// (0x000825e8) list_medium_line_x2_t4_g2_g

0x12a2,	// (0x00073b94) list_medium_line_x2_t4_g2_t1_ParamLimits

0x12a2,	// (0x00073b94) list_medium_line_x2_t4_g2_t1

0x12bc,	// (0x00073bae) list_medium_line_x2_t4_g2_t2_ParamLimits

0x12bc,	// (0x00073bae) list_medium_line_x2_t4_g2_t2

0x12d1,	// (0x00073bc3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x12d1,	// (0x00073bc3) list_medium_line_x2_t4_g2_t3

0xab9a,	// (0x0007d48c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfb,	// (0x000825ed) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfb,	// (0x000825ed) list_medium_line_x2_t4_g2_t

0xdf22,	// (0x00080814) list_medium_line_t3_right_iconx2_g1

0xddf8,	// (0x000806ea) list_medium_line_t3_right_iconx2_g2

0x12e6,	// (0x00073bd8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd04,	// (0x000825f6) list_medium_line_t3_right_iconx2_g

0x12f0,	// (0x00073be2) list_medium_line_t3_right_iconx2_t1

0x1300,	// (0x00073bf2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0b,	// (0x000825fd) list_medium_line_t3_right_iconx2_t

0xab61,	// (0x0007d453) list_medium_line_x3_t4_g4_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x3_t4_g4_g1

0xab6d,	// (0x0007d45f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x3_t4_g4_g2

0xac00,	// (0x0007d4f2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xac00,	// (0x0007d4f2) list_medium_line_x3_t4_g4_g3

0xdf2a,	// (0x0008081c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xdf2a,	// (0x0008081c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd10,	// (0x00082602) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd10,	// (0x00082602) list_medium_line_x3_t4_g4_g

0x130e,	// (0x00073c00) list_medium_line_x3_t4_g4_t1_ParamLimits

0x130e,	// (0x00073c00) list_medium_line_x3_t4_g4_t1

0x1325,	// (0x00073c17) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1325,	// (0x00073c17) list_medium_line_x3_t4_g4_t2

0xacc1,	// (0x0007d5b3) list_medium_line_x3_t4_g4_t3_ParamLimits

0xacc1,	// (0x0007d5b3) list_medium_line_x3_t4_g4_t3

0xdf36,	// (0x00080828) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdf36,	// (0x00080828) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd19,	// (0x0008260b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd19,	// (0x0008260b) list_medium_line_x3_t4_g4_t

0x1340,	// (0x00073c32) list_single_dyc_row_text_pane_t1_ParamLimits

0x1340,	// (0x00073c32) list_single_dyc_row_text_pane_t1

0x1389,	// (0x00073c7b) list_single_dyc_row_text_pane_t2_ParamLimits

0x1389,	// (0x00073c7b) list_single_dyc_row_text_pane_t2

0xdf53,	// (0x00080845) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf53,	// (0x00080845) list_single_dyc_row_text_pane_t3

0x0002,

0xfd22,	// (0x00082614) list_single_dyc_row_text_pane_t_ParamLimits

0xfd22,	// (0x00082614) list_single_dyc_row_text_pane_t

0xdf65,	// (0x00080857) list_single_dyc_row_pane_g1_ParamLimits

0xdf65,	// (0x00080857) list_single_dyc_row_pane_g1

0xdf71,	// (0x00080863) list_single_dyc_row_pane_g2_ParamLimits

0xdf71,	// (0x00080863) list_single_dyc_row_pane_g2

0xdf7d,	// (0x0008086f) list_single_dyc_row_pane_g3_ParamLimits

0xdf7d,	// (0x0008086f) list_single_dyc_row_pane_g3

0xdf89,	// (0x0008087b) list_single_dyc_row_pane_g4_ParamLimits

0xdf89,	// (0x0008087b) list_single_dyc_row_pane_g4

0x0003,

0xfd29,	// (0x0008261b) list_single_dyc_row_pane_g_ParamLimits

0xfd29,	// (0x0008261b) list_single_dyc_row_pane_g

0xdf95,	// (0x00080887) list_single_dyc_row_text_pane_ParamLimits

0xdf95,	// (0x00080887) list_single_dyc_row_text_pane

0xaa0f,	// (0x0007d301) bg_sp_fs_scroll_pane

0xdfb4,	// (0x000808a6) thumb_sp_fs_scroll_pane

0xcf35,	// (0x0007f827) list_medium_line_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_g1

0xdfbd,	// (0x000808af) list_medium_line_t1_ParamLimits

0xdfbd,	// (0x000808af) list_medium_line_t1

0xab61,	// (0x0007d453) list_medium_line_x2_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_g1

0xab6d,	// (0x0007d45f) list_medium_line_x2_g2_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_g2

0x0001,

0xfd32,	// (0x00082624) list_medium_line_x2_g_ParamLimits

0xfd32,	// (0x00082624) list_medium_line_x2_g

0xdfd2,	// (0x000808c4) list_medium_line_x2_t1_ParamLimits

0xdfd2,	// (0x000808c4) list_medium_line_x2_t1

0xab61,	// (0x0007d453) list_medium_line_x3_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x3_g1

0xab6d,	// (0x0007d45f) list_medium_line_x3_g2_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x3_g2

0x0001,

0xfd32,	// (0x00082624) list_medium_line_x3_g_ParamLimits

0xfd32,	// (0x00082624) list_medium_line_x3_g

0xdfd2,	// (0x000808c4) list_medium_line_x3_t1_ParamLimits

0xdfd2,	// (0x000808c4) list_medium_line_x3_t1

0xdfe8,	// (0x000808da) thumb_sp_fs_scroll_pane_g1

0xdff1,	// (0x000808e3) thumb_sp_fs_scroll_pane_g2

0xdffa,	// (0x000808ec) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd37,	// (0x00082629) thumb_sp_fs_scroll_pane_g

0xdfe8,	// (0x000808da) bg_sp_fs_scroll_pane_g1

0xdff1,	// (0x000808e3) bg_sp_fs_scroll_pane_g2

0xdffa,	// (0x000808ec) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd37,	// (0x00082629) bg_sp_fs_scroll_pane_g

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g4_g1_ParamLimits

0xab61,	// (0x0007d453) list_medium_line_x2_t3_g4_g1

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t3_g4_g2_ParamLimits

0xabf4,	// (0x0007d4e6) list_medium_line_x2_t3_g4_g2

0xab6d,	// (0x0007d45f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xab6d,	// (0x0007d45f) list_medium_line_x2_t3_g4_g3

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xab79,	// (0x0007d46b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00081bd8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00081bd8) list_medium_line_x2_t3_g4_g

0x13e3,	// (0x00073cd5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x13e3,	// (0x00073cd5) list_medium_line_x2_t3_g4_t1

0x13fd,	// (0x00073cef) list_medium_line_x2_t3_g4_t2_ParamLimits

0x13fd,	// (0x00073cef) list_medium_line_x2_t3_g4_t2

0xab9a,	// (0x0007d48c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xab9a,	// (0x0007d48c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3e,	// (0x00082630) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3e,	// (0x00082630) list_medium_line_x2_t3_g4_t

0xcf35,	// (0x0007f827) list_medium_line_g2_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_g2_g1

0xcf41,	// (0x0007f833) list_medium_line_g2_g2_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_g2_g2

0x0001,

0xfa18,	// (0x0008230a) list_medium_line_g2_g_ParamLimits

0xfa18,	// (0x0008230a) list_medium_line_g2_g

0xe003,	// (0x000808f5) list_medium_line_g2_t1_ParamLimits

0xe003,	// (0x000808f5) list_medium_line_g2_t1

0xcf35,	// (0x0007f827) list_medium_line_t3_g2_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t3_g2_g1

0xcf41,	// (0x0007f833) list_medium_line_t3_g2_g2_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_t3_g2_g2

0x0001,

0xfa18,	// (0x0008230a) list_medium_line_t3_g2_g_ParamLimits

0xfa18,	// (0x0008230a) list_medium_line_t3_g2_g

0x1417,	// (0x00073d09) list_medium_line_t3_g2_t1_ParamLimits

0x1417,	// (0x00073d09) list_medium_line_t3_g2_t1

0x142e,	// (0x00073d20) list_medium_line_t3_g2_t2_ParamLimits

0x142e,	// (0x00073d20) list_medium_line_t3_g2_t2

0x1443,	// (0x00073d35) list_medium_line_t3_g2_t3_ParamLimits

0x1443,	// (0x00073d35) list_medium_line_t3_g2_t3

0x0002,

0xfd45,	// (0x00082637) list_medium_line_t3_g2_t_ParamLimits

0xfd45,	// (0x00082637) list_medium_line_t3_g2_t

0xddf8,	// (0x000806ea) list_medium_line_right_icon_g1

0xe018,	// (0x0008090a) list_medium_line_right_icon_t1

0xcf35,	// (0x0007f827) list_medium_line_t2_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t2_g1

0x145c,	// (0x00073d4e) list_medium_line_t2_t1_ParamLimits

0x145c,	// (0x00073d4e) list_medium_line_t2_t1

0x1476,	// (0x00073d68) list_medium_line_t2_t2_ParamLimits

0x1476,	// (0x00073d68) list_medium_line_t2_t2

0x0001,

0xfd4c,	// (0x0008263e) list_medium_line_t2_t_ParamLimits

0xfd4c,	// (0x0008263e) list_medium_line_t2_t

0xcf35,	// (0x0007f827) list_medium_line_t3_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t3_g1

0x148f,	// (0x00073d81) list_medium_line_t3_t1_ParamLimits

0x148f,	// (0x00073d81) list_medium_line_t3_t1

0x14a9,	// (0x00073d9b) list_medium_line_t3_t2_ParamLimits

0x14a9,	// (0x00073d9b) list_medium_line_t3_t2

0x14be,	// (0x00073db0) list_medium_line_t3_t3_ParamLimits

0x14be,	// (0x00073db0) list_medium_line_t3_t3

0x0002,

0xfd51,	// (0x00082643) list_medium_line_t3_t_ParamLimits

0xfd51,	// (0x00082643) list_medium_line_t3_t

0xcf35,	// (0x0007f827) list_medium_line_g3_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_g3_g1

0xe026,	// (0x00080918) list_medium_line_g3_g2_ParamLimits

0xe026,	// (0x00080918) list_medium_line_g3_g2

0xcf41,	// (0x0007f833) list_medium_line_g3_g3_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_g3_g3

0x0002,

0xfd58,	// (0x0008264a) list_medium_line_g3_g_ParamLimits

0xfd58,	// (0x0008264a) list_medium_line_g3_g

0xe032,	// (0x00080924) list_medium_line_g3_t1_ParamLimits

0xe032,	// (0x00080924) list_medium_line_g3_t1

0xcf35,	// (0x0007f827) list_medium_line_t2_g3_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t2_g3_g1

0xe026,	// (0x00080918) list_medium_line_t2_g3_g2_ParamLimits

0xe026,	// (0x00080918) list_medium_line_t2_g3_g2

0xcf41,	// (0x0007f833) list_medium_line_t2_g3_g3_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_t2_g3_g3

0x0002,

0xfd58,	// (0x0008264a) list_medium_line_t2_g3_g_ParamLimits

0xfd58,	// (0x0008264a) list_medium_line_t2_g3_g

0x14d3,	// (0x00073dc5) list_medium_line_t2_g3_t1_ParamLimits

0x14d3,	// (0x00073dc5) list_medium_line_t2_g3_t1

0x14ed,	// (0x00073ddf) list_medium_line_t2_g3_t2_ParamLimits

0x14ed,	// (0x00073ddf) list_medium_line_t2_g3_t2

0x0001,

0xfd5f,	// (0x00082651) list_medium_line_t2_g3_t_ParamLimits

0xfd5f,	// (0x00082651) list_medium_line_t2_g3_t

0xcf35,	// (0x0007f827) list_medium_line_t3_g3_g1_ParamLimits

0xcf35,	// (0x0007f827) list_medium_line_t3_g3_g1

0xe026,	// (0x00080918) list_medium_line_t3_g3_g2_ParamLimits

0xe026,	// (0x00080918) list_medium_line_t3_g3_g2

0xcf41,	// (0x0007f833) list_medium_line_t3_g3_g3_ParamLimits

0xcf41,	// (0x0007f833) list_medium_line_t3_g3_g3

0x0002,

0xfd58,	// (0x0008264a) list_medium_line_t3_g3_g_ParamLimits

0xfd58,	// (0x0008264a) list_medium_line_t3_g3_g

0x1508,	// (0x00073dfa) list_medium_line_t3_g3_t1_ParamLimits

0x1508,	// (0x00073dfa) list_medium_line_t3_g3_t1

0x151c,	// (0x00073e0e) list_medium_line_t3_g3_t2_ParamLimits

0x151c,	// (0x00073e0e) list_medium_line_t3_g3_t2

0x152e,	// (0x00073e20) list_medium_line_t3_g3_t3_ParamLimits

0x152e,	// (0x00073e20) list_medium_line_t3_g3_t3

0x0002,

0xfd64,	// (0x00082656) list_medium_line_t3_g3_t_ParamLimits

0xfd64,	// (0x00082656) list_medium_line_t3_g3_t

0xdf22,	// (0x00080814) list_medium_line_right_iconx2_g1

0xddf8,	// (0x000806ea) list_medium_line_right_iconx2_g2

0x0001,

0xfd6b,	// (0x0008265d) list_medium_line_right_iconx2_g

0xe047,	// (0x00080939) list_medium_line_right_iconx2_t1

0xdf22,	// (0x00080814) list_medium_line_t2_right_iconx2_g1

0xddf8,	// (0x000806ea) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6b,	// (0x0008265d) list_medium_line_t2_right_iconx2_g

0x1542,	// (0x00073e34) list_medium_line_t2_right_iconx2_t1

0x1552,	// (0x00073e44) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd70,	// (0x00082662) list_medium_line_t2_right_iconx2_t

0xe055,	// (0x00080947) list_medium_line_x4_t4_t1

0x1564,	// (0x00073e56) list_medium_line_x4_t4_t2

0x1574,	// (0x00073e66) list_medium_line_x4_t4_t3

0x1584,	// (0x00073e76) list_medium_line_x4_t4_t4

0x0003,

0xfd75,	// (0x00082667) list_medium_line_x4_t4_t

0x9d97,	// (0x0007c689) tport_appsw_pane_ParamLimits

0x9d97,	// (0x0007c689) tport_appsw_pane

0x9da8,	// (0x0007c69a) tport_contact_pane_ParamLimits

0x9da8,	// (0x0007c69a) tport_contact_pane

0x9dc1,	// (0x0007c6b3) tport_listscroll_pane_ParamLimits

0x9dc1,	// (0x0007c6b3) tport_listscroll_pane

0x9ddc,	// (0x0007c6ce) cell_tport_appsw_pane_ParamLimits

0x9ddc,	// (0x0007c6ce) cell_tport_appsw_pane

0xcc6b,	// (0x0007f55d) tport_appsw_pane_g1_ParamLimits

0xcc6b,	// (0x0007f55d) tport_appsw_pane_g1

0xe063,	// (0x00080955) tport_contact_pane_g1

0xd810,	// (0x00080102) tport_contact_pane_t1

0xe06c,	// (0x0008095e) tport_contact_pane_t2

0x0001,

0xfd7e,	// (0x00082670) tport_contact_pane_t

0xe07a,	// (0x0008096c) list_tport_pane

0xe083,	// (0x00080975) scroll_pane_cp_030

0xe094,	// (0x00080986) cell_tport_appsw_pane_g1

0xe0a4,	// (0x00080996) cell_tport_appsw_pane_t1

0xaa0f,	// (0x0007d301) grid_highlight_pane_cp019

0x9e1c,	// (0x0007c70e) list_tport_double_graphic_pane_ParamLimits

0x9e1c,	// (0x0007c70e) list_tport_double_graphic_pane

0x19ac,	// (0x0007429e) list_highlight_pane_cp023_ParamLimits

0x19ac,	// (0x0007429e) list_highlight_pane_cp023

0x9e29,	// (0x0007c71b) list_tport_double_graphic_pane_g1_ParamLimits

0x9e29,	// (0x0007c71b) list_tport_double_graphic_pane_g1

0x9e36,	// (0x0007c728) list_tport_double_graphic_pane_t1_ParamLimits

0x9e36,	// (0x0007c728) list_tport_double_graphic_pane_t1

0x9e4b,	// (0x0007c73d) list_tport_double_graphic_pane_t2_ParamLimits

0x9e4b,	// (0x0007c73d) list_tport_double_graphic_pane_t2

0x0001,

0xfd8a,	// (0x0008267c) list_tport_double_graphic_pane_t_ParamLimits

0xfd8a,	// (0x0008267c) list_tport_double_graphic_pane_t

0xaa0f,	// (0x0007d301) main_cale_note_pane

0x8241,	// (0x0007ab33) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8241,	// (0x0007ab33) cell_vitu2_function_top_wide_pane_cp01

0x9920,	// (0x0007c212) wait_bar_pane_cp05_ParamLimits

0xaa0f,	// (0x0007d301) listscroll_cmail_pane

0xe0ba,	// (0x000809ac) list_cmail_pane

0xceee,	// (0x0007f7e0) list_cmail_body_pane

0x9e67,	// (0x0007c759) list_single_cmail_header_caption_pane

0x9e7d,	// (0x0007c76f) list_single_cmail_header_detail_pane_ParamLimits

0x9e7d,	// (0x0007c76f) list_single_cmail_header_detail_pane

0x9ea6,	// (0x0007c798) list_single_cmail_header_caption_pane_t1

0x1594,	// (0x00073e86) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1594,	// (0x00073e86) list_single_cmail_header_detail_pane_g1

0xef5e,	// (0x00081850) list_single_cmail_header_detail_pane_g2_ParamLimits

0xef5e,	// (0x00081850) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8f,	// (0x00082681) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8f,	// (0x00082681) list_single_cmail_header_detail_pane_g

0xe0e8,	// (0x000809da) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe0e8,	// (0x000809da) list_single_cmail_header_detail_pane_t1

0xe122,	// (0x00080a14) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe122,	// (0x00080a14) list_single_cmail_header_editor_pane_bg

0xd9bf,	// (0x000802b1) list_cmail_body_pane_g1

0xe134,	// (0x00080a26) list_cmail_body_pane_t1

0xccd7,	// (0x0007f5c9) list_single_cmail_header_editor_pane_bg_g1

0x35a8,	// (0x00075e9a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcce7,	// (0x0007f5d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xccdf,	// (0x0007f5d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcf2d,	// (0x0007f81f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd07,	// (0x0007f5f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xccf7,	// (0x0007f5e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xccff,	// (0x0007f5f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3588,	// (0x00075e7a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9eb6,	// (0x0007c7a8) calenote_gesture_pane_ParamLimits

0x9eb6,	// (0x0007c7a8) calenote_gesture_pane

0x9ed6,	// (0x0007c7c8) calenote_window_pane_ParamLimits

0x9ed6,	// (0x0007c7c8) calenote_window_pane

0xe142,	// (0x00080a34) popup_note_window_cp01

0x9ef2,	// (0x0007c7e4) calenote_swipe_1_pane_ParamLimits

0x9ef2,	// (0x0007c7e4) calenote_swipe_1_pane

0x9cde,	// (0x0007c5d0) calenote_swipe_2_pane_ParamLimits

0x9cde,	// (0x0007c5d0) calenote_swipe_2_pane

0xdcf9,	// (0x000805eb) calenote_swipe_1_pane_g1_ParamLimits

0xdcf9,	// (0x000805eb) calenote_swipe_1_pane_g1

0xdd06,	// (0x000805f8) calenote_swipe_1_pane_g2_ParamLimits

0xdd06,	// (0x000805f8) calenote_swipe_1_pane_g2

0x0001,

0xfcbe,	// (0x000825b0) calenote_swipe_1_pane_g_ParamLimits

0xfcbe,	// (0x000825b0) calenote_swipe_1_pane_g

0xe154,	// (0x00080a46) calenote_swipe_1_pane_t1_ParamLimits

0xe154,	// (0x00080a46) calenote_swipe_1_pane_t1

0xdcf9,	// (0x000805eb) calenote_swipe_2_pane_g1_ParamLimits

0xdcf9,	// (0x000805eb) calenote_swipe_2_pane_g1

0xe173,	// (0x00080a65) calenote_swipe_2_pane_g2_ParamLimits

0xe173,	// (0x00080a65) calenote_swipe_2_pane_g2

0x0001,

0xfd9b,	// (0x0008268d) calenote_swipe_2_pane_g_ParamLimits

0xfd9b,	// (0x0008268d) calenote_swipe_2_pane_g

0xe17f,	// (0x00080a71) calenote_swipe_2_pane_t1_ParamLimits

0xe17f,	// (0x00080a71) calenote_swipe_2_pane_t1

0xaa0f,	// (0x0007d301) main_mup_navstr_pane

0x6f26,	// (0x00079818) main_mup3_pane_t7_ParamLimits

0x6f26,	// (0x00079818) main_mup3_pane_t7

0xec07,	// (0x000814f9) main_mp4_pane_g6_ParamLimits

0xec07,	// (0x000814f9) main_mp4_pane_g6

0xedab,	// (0x0008169d) main_image3_pane_t4_ParamLimits

0xedab,	// (0x0008169d) main_image3_pane_t4

0x9f07,	// (0x0007c7f9) popup_navstr_preview_pane_ParamLimits

0x9f07,	// (0x0007c7f9) popup_navstr_preview_pane

0x9f1b,	// (0x0007c80d) scroll_navstr_pane_ParamLimits

0x9f1b,	// (0x0007c80d) scroll_navstr_pane

0xaa0f,	// (0x0007d301) bg_popup_preview_window_pane_cp04

0xe1a6,	// (0x00080a98) popup_navstr_preview_pane_t1

0x9f2f,	// (0x0007c821) scroll_navstr_pane_g1_ParamLimits

0x9f2f,	// (0x0007c821) scroll_navstr_pane_g1

0x9f43,	// (0x0007c835) scroll_navstr_pane_t1_ParamLimits

0x9f43,	// (0x0007c835) scroll_navstr_pane_t1

0xe14b,	// (0x00080a3d) bg_button_pane_cp014

0xe14b,	// (0x00080a3d) bg_button_pane_cp030

0x117a,	// (0x00073a6c) list_double_fisheye_pane_g4_ParamLimits

0x117a,	// (0x00073a6c) list_double_fisheye_pane_g4

0x1186,	// (0x00073a78) list_double_fisheye_pane_g5_ParamLimits

0x1186,	// (0x00073a78) list_double_fisheye_pane_g5

0xe0c2,	// (0x000809b4) sp_fs_scroll_pane_cp03

0xde38,	// (0x0008072a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde44,	// (0x00080736) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdb,	// (0x000825cd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xde50,	// (0x00080742) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9e5d,	// (0x0007c74f) sp_fs_scroll_pane_cp02

0x2706,	// (0x00074ff8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2706,	// (0x00074ff8) popup_sp_fs_calendar_preview_list_single_pane

0xaa0f,	// (0x0007d301) main_cam6_pano_pane

0x19ac,	// (0x0007429e) main_mup3_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_phacti_pane

0x97f3,	// (0x0007c0e5) bg_button_pane_cp11

0x980d,	// (0x0007c0ff) main_mobtv_info_pane_g2_ParamLimits

0x980d,	// (0x0007c0ff) main_mobtv_info_pane_g2

0x0001,

0xfc3b,	// (0x0008252d) main_mobtv_info_pane_g_ParamLimits

0xfc3b,	// (0x0008252d) main_mobtv_info_pane_g

0x99e8,	// (0x0007c2da) sc_clock_pane_t5_ParamLimits

0x99e8,	// (0x0007c2da) sc_clock_pane_t5

0x9a6d,	// (0x0007c35f) main_radioblah_pane_g1_ParamLimits

0xdc45,	// (0x00080537) main_radioblah_pane_t3_ParamLimits

0xdc45,	// (0x00080537) main_radioblah_pane_t3

0xdc5d,	// (0x0008054f) main_radioblah_pane_t4_ParamLimits

0xdc5d,	// (0x0008054f) main_radioblah_pane_t4

0x9a95,	// (0x0007c387) main_radioblah_text_pane_ParamLimits

0x9a95,	// (0x0007c387) main_radioblah_text_pane

0x9aa7,	// (0x0007c399) main_radioblah_info_pane_g1_ParamLimits

0x9b40,	// (0x0007c432) main_radioblah_info_pane_t4_ParamLimits

0x9b40,	// (0x0007c432) main_radioblah_info_pane_t4

0x19ac,	// (0x0007429e) main_sp_fs_calendar_pane

0x9f5a,	// (0x0007c84c) main_phacti_pane_g1

0x9f62,	// (0x0007c854) phacti_note_pane_ParamLimits

0x9f62,	// (0x0007c854) phacti_note_pane

0xe1bd,	// (0x00080aaf) phacti_term_pane_ParamLimits

0xe1bd,	// (0x00080aaf) phacti_term_pane

0xe1d2,	// (0x00080ac4) phacti_note_pane_t1_ParamLimits

0xe1d2,	// (0x00080ac4) phacti_note_pane_t1

0xe1e9,	// (0x00080adb) phacti_term_pane_g1

0xe1f1,	// (0x00080ae3) phacti_term_pane_t1_ParamLimits

0xe1f1,	// (0x00080ae3) phacti_term_pane_t1

0xe21b,	// (0x00080b0d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2f50,	// (0x00075842) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda5,	// (0x00082697) popup_sp_fs_calendar_preview_list_single_pane_g

0xe223,	// (0x00080b15) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe223,	// (0x00080b15) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe238,	// (0x00080b2a) aid_popup_sp_fs_bg_corner_pane

0xc1e7,	// (0x0007ead9) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa0f,	// (0x0007d301) popup_sp_fs_calendar_preview_bg_pane

0xe240,	// (0x00080b32) popup_sp_fs_calendar_preview_list_pane

0x19ac,	// (0x0007429e) bg_main_sp_fs_cale_pane_ParamLimits

0x19ac,	// (0x0007429e) bg_main_sp_fs_cale_pane

0xe248,	// (0x00080b3a) listscroll_cale_mrui_pane_ParamLimits

0xe248,	// (0x00080b3a) listscroll_cale_mrui_pane

0xe25c,	// (0x00080b4e) listscroll_sp_fs_schedule_track_pane

0xe265,	// (0x00080b57) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe265,	// (0x00080b57) main_sp_fs_ctrlbar_pane_cp01

0xe276,	// (0x00080b68) main_sp_fs_ribbon_pane

0xe27e,	// (0x00080b70) popup_sp_fs_cale_preview_window

0x9fb9,	// (0x0007c8ab) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9fb9,	// (0x0007c8ab) list_single_sp_fs_schedule_track_pane

0x19ac,	// (0x0007429e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x19ac,	// (0x0007429e) bg_sp_fs_highlight_list_pane_cp03

0x9fcb,	// (0x0007c8bd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9fcb,	// (0x0007c8bd) list_single_sp_fs_schedule_track_pane_g1

0x9fd7,	// (0x0007c8c9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9fd7,	// (0x0007c8c9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdaa,	// (0x0008269c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdaa,	// (0x0008269c) list_single_sp_fs_schedule_track_pane_g

0x9fe3,	// (0x0007c8d5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9fe3,	// (0x0007c8d5) list_single_sp_fs_schedule_track_pane_t1

0x9ffd,	// (0x0007c8ef) sp_fs_schedule_track_pane_ParamLimits

0x9ffd,	// (0x0007c8ef) sp_fs_schedule_track_pane

0xe290,	// (0x00080b82) sp_fs_schedule_track_pane_g1

0xe298,	// (0x00080b8a) sp_fs_schedule_track_pane_g2

0xe2a0,	// (0x00080b92) sp_fs_schedule_track_pane_g3

0xe2a8,	// (0x00080b9a) sp_fs_schedule_track_pane_g4

0xe2b0,	// (0x00080ba2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdaf,	// (0x000826a1) sp_fs_schedule_track_pane_g

0xccd7,	// (0x0007f5c9) bg_sp_fs_schedule_viewer_highlight_g1

0x35a8,	// (0x00075e9a) bg_sp_fs_schedule_viewer_highlight_g2

0xccdf,	// (0x0007f5d1) bg_sp_fs_schedule_viewer_highlight_g3

0xcce7,	// (0x0007f5d9) bg_sp_fs_schedule_viewer_highlight_g4

0xcf2d,	// (0x0007f81f) bg_sp_fs_schedule_viewer_highlight_g5

0xccf7,	// (0x0007f5e9) bg_sp_fs_schedule_viewer_highlight_g6

0xccff,	// (0x0007f5f1) bg_sp_fs_schedule_viewer_highlight_g7

0xcd07,	// (0x0007f5f9) bg_sp_fs_schedule_viewer_highlight_g8

0x3588,	// (0x00075e7a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdba,	// (0x000826ac) bg_sp_fs_schedule_viewer_highlight_g

0xaa0f,	// (0x0007d301) bg_main_sp_fs_ribbon_pane

0xa00e,	// (0x0007c900) main_sp_fs_ribbon_pane_g1

0xe2b8,	// (0x00080baa) main_sp_fs_ribbon_pane_t1

0xa017,	// (0x0007c909) main_sp_fs_ribbon_pane_t2

0xe2c7,	// (0x00080bb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdcd,	// (0x000826bf) main_sp_fs_ribbon_pane_t

0xe2d6,	// (0x00080bc8) main_sp_fs_ribbon_scheduler_pane

0xe2de,	// (0x00080bd0) bg_main_sp_fs_ribbon_pane_g1

0xe2e7,	// (0x00080bd9) bg_main_sp_fs_ribbon_pane_g2

0xe2f0,	// (0x00080be2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd4,	// (0x000826c6) bg_main_sp_fs_ribbon_pane_g

0xe2f8,	// (0x00080bea) main_sp_fs_ribbon_scheduler_pane_g1

0xe301,	// (0x00080bf3) main_sp_fs_ribbon_scheduler_pane_g2

0xe30a,	// (0x00080bfc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddb,	// (0x000826cd) main_sp_fs_ribbon_scheduler_pane_g

0xe313,	// (0x00080c05) list_cale_mrui_pane

0xa026,	// (0x0007c918) sp_fs_scroll_pane_cp07_ParamLimits

0xa026,	// (0x0007c918) sp_fs_scroll_pane_cp07

0xa03a,	// (0x0007c92c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa03a,	// (0x0007c92c) bg_sp_fs_schedule_viewer_highlight

0xe31c,	// (0x00080c0e) list_single_sp_fs_schedule_track_pane_cp01

0xe324,	// (0x00080c16) list_sp_fs_schedule_track_pane

0xe32c,	// (0x00080c1e) sp_fs_scroll_pane_cp06_ParamLimits

0xe32c,	// (0x00080c1e) sp_fs_scroll_pane_cp06

0xc1e7,	// (0x0007ead9) bgmain_sp_fs_calendar_pane_g1

0x15d2,	// (0x00073ec4) list_single_cale_mrui_pane_ParamLimits

0x15d2,	// (0x00073ec4) list_single_cale_mrui_pane

0xe33e,	// (0x00080c30) list_single_cale_mrui_row_pane_ParamLimits

0xe33e,	// (0x00080c30) list_single_cale_mrui_row_pane

0xe34b,	// (0x00080c3d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe34b,	// (0x00080c3d) list_single_cale_mrui_row_pane_g1

0xe383,	// (0x00080c75) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe383,	// (0x00080c75) list_single_cale_mrui_row_pane_t1

0x15f2,	// (0x00073ee4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x15f2,	// (0x00073ee4) list_single_cale_mrui_row_pane_t2

0xe395,	// (0x00080c87) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe395,	// (0x00080c87) list_single_cale_mrui_row_pane_t3

0xe3c4,	// (0x00080cb6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3c4,	// (0x00080cb6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde7,	// (0x000826d9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde7,	// (0x000826d9) list_single_cale_mrui_row_pane_t

0x165a,	// (0x00073f4c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x165a,	// (0x00073f4c) list_single_cmail_header_editor_pane_bg_cp01

0x1680,	// (0x00073f72) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1680,	// (0x00073f72) list_single_cmail_header_editor_pane_bg_cp02

0xa04a,	// (0x0007c93c) main_radioblah_text_pane_t1_ParamLimits

0xa04a,	// (0x0007c93c) main_radioblah_text_pane_t1

0xe3f3,	// (0x00080ce5) cam6_indi_pane_cp01

0xe3fb,	// (0x00080ced) cam6_mode_pane_cp01

0xe403,	// (0x00080cf5) cam6_pano_pane

0xe40c,	// (0x00080cfe) cam6_zoom_pane_cp01

0xe414,	// (0x00080d06) cam6_pano_image_pane

0xe41f,	// (0x00080d11) cam6_pano_pane_g1

0xd9bf,	// (0x000802b1) cam6_pano_pane_g2

0xe428,	// (0x00080d1a) cam6_pano_pane_g3

0xe431,	// (0x00080d23) cam6_pano_pane_g4

0xc7af,	// (0x0007f0a1) cam6_pano_pane_g5

0xe43a,	// (0x00080d2c) cam6_pano_pane_g6

0xe444,	// (0x00080d36) cam6_pano_pane_g7

0xe44c,	// (0x00080d3e) cam6_pano_pane_g8

0xe455,	// (0x00080d47) cam6_pano_pane_g9

0x0008,

0xfdf0,	// (0x000826e2) cam6_pano_pane_g

0xaa0f,	// (0x0007d301) main_browser_tag_pane

0xe19e,	// (0x00080a90) grid_navstr_albumart_pane

0xe460,	// (0x00080d52) cell_navstr_albumart_pane_ParamLimits

0xe460,	// (0x00080d52) cell_navstr_albumart_pane

0xe483,	// (0x00080d75) cell_navstr_albumart_pane_g1

0xbb9b,	// (0x0007e48d) cell_navstr_albumart_pane_g2

0xbbab,	// (0x0007e49d) cell_navstr_albumart_pane_g3

0xbba3,	// (0x0007e495) cell_navstr_albumart_pane_g4

0x0003,

0xfe03,	// (0x000826f5) cell_navstr_albumart_pane_g

0xa064,	// (0x0007c956) bt_list_pane_ParamLimits

0xa064,	// (0x0007c956) bt_list_pane

0xa078,	// (0x0007c96a) bt_list_pane_t1

0xa087,	// (0x0007c979) bt_list_pane_t2

0x0001,

0xfe0c,	// (0x000826fe) bt_list_pane_t

0xaa0f,	// (0x0007d301) main_cale_prevew_pane

0xa096,	// (0x0007c988) popup_cale_preview_window_ParamLimits

0xa096,	// (0x0007c988) popup_cale_preview_window

0x19ac,	// (0x0007429e) bg_popup_preview_window_pane_cp05_ParamLimits

0x19ac,	// (0x0007429e) bg_popup_preview_window_pane_cp05

0xe48b,	// (0x00080d7d) list_cale_preview_pane_ParamLimits

0xe48b,	// (0x00080d7d) list_cale_preview_pane

0xa0b1,	// (0x0007c9a3) list_double_cale_preview_pane_ParamLimits

0xa0b1,	// (0x0007c9a3) list_double_cale_preview_pane

0xa0c3,	// (0x0007c9b5) list_single_cale_preview_pane_ParamLimits

0xa0c3,	// (0x0007c9b5) list_single_cale_preview_pane

0xa0d9,	// (0x0007c9cb) list_single_cale_preview_pane_g1

0xa0e1,	// (0x0007c9d3) list_single_cale_preview_pane_t1_ParamLimits

0xa0e1,	// (0x0007c9d3) list_single_cale_preview_pane_t1

0xa0f6,	// (0x0007c9e8) list_double_cale_preview_pane_g1

0xa0fe,	// (0x0007c9f0) list_double_cale_preview_pane_t1_ParamLimits

0xa0fe,	// (0x0007c9f0) list_double_cale_preview_pane_t1

0xa113,	// (0x0007ca05) list_double_cale_preview_pane_t2_ParamLimits

0xa113,	// (0x0007ca05) list_double_cale_preview_pane_t2

0x0001,

0xfe11,	// (0x00082703) list_double_cale_preview_pane_t_ParamLimits

0xfe11,	// (0x00082703) list_double_cale_preview_pane_t

0xaa0f,	// (0x0007d301) main_ezdial_pane

0x19ac,	// (0x0007429e) main_sp_fs_email_pane_ParamLimits

0x9cf8,	// (0x0007c5ea) cmail_ddmenu_btn01_pane_ParamLimits

0x9cf8,	// (0x0007c5ea) cmail_ddmenu_btn01_pane

0x9d0b,	// (0x0007c5fd) cmail_ddmenu_btn02_pane_ParamLimits

0x9d0b,	// (0x0007c5fd) cmail_ddmenu_btn02_pane

0x9d2e,	// (0x0007c620) cmail_ddmenu_btn03_pane_ParamLimits

0x9d2e,	// (0x0007c620) cmail_ddmenu_btn03_pane

0x11f6,	// (0x00073ae8) main_sp_fs_ctrlbar_pane_ParamLimits

0x121a,	// (0x00073b0c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xceee,	// (0x0007f7e0) list_cmail_body_pane_ParamLimits

0xe0d2,	// (0x000809c4) bg_button_pane_cp12

0xe0db,	// (0x000809cd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe0db,	// (0x000809cd) list_single_cmail_header_detail_pane_g3

0x15ac,	// (0x00073e9e) list_single_cmail_header_detail_pane_t2_ParamLimits

0x15ac,	// (0x00073e9e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd96,	// (0x00082688) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd96,	// (0x00082688) list_single_cmail_header_detail_pane_t

0xe206,	// (0x00080af8) phacti_term_pane_t2_ParamLimits

0xe206,	// (0x00080af8) phacti_term_pane_t2

0x0001,

0xfda0,	// (0x00082692) phacti_term_pane_t_ParamLimits

0xfda0,	// (0x00082692) phacti_term_pane_t

0xe497,	// (0x00080d89) aid_size_list_single_double

0xa12b,	// (0x0007ca1d) popup_ezdial_listscroll_window

0xa147,	// (0x0007ca39) popup_number_entry_window_cp01

0x49ba,	// (0x000772ac) bg_popup_call_pane_cp09

0xe4a3,	// (0x00080d95) ezdial_list_pane

0xe4ab,	// (0x00080d9d) scroll_pane_cp23

0xbd7e,	// (0x0007e670) bg_button_pane_cp028_ParamLimits

0xbd7e,	// (0x0007e670) bg_button_pane_cp028

0xa155,	// (0x0007ca47) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa155,	// (0x0007ca47) cmail_ddmenu_btn01_pane_g1

0xa161,	// (0x0007ca53) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa161,	// (0x0007ca53) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe16,	// (0x00082708) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe16,	// (0x00082708) cmail_ddmenu_btn01_pane_g

0xe4b3,	// (0x00080da5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe4b3,	// (0x00080da5) cmail_ddmenu_btn01_pane_t1

0xbd7e,	// (0x0007e670) bg_button_pane_cp029_ParamLimits

0xbd7e,	// (0x0007e670) bg_button_pane_cp029

0xa16d,	// (0x0007ca5f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa16d,	// (0x0007ca5f) cmail_ddmenu_btn02_pane_g1

0xa185,	// (0x0007ca77) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa185,	// (0x0007ca77) cmail_ddmenu_btn02_pane_t1

0x19ac,	// (0x0007429e) bg_button_pane_cp031_ParamLimits

0x19ac,	// (0x0007429e) bg_button_pane_cp031

0xa16d,	// (0x0007ca5f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa16d,	// (0x0007ca5f) cmail_ddmenu_btn03_pane_g1

0xa185,	// (0x0007ca77) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa185,	// (0x0007ca77) cmail_ddmenu_btn03_pane_t1

0x7a59,	// (0x0007a34b) cell_dialer2_keypad_pane_t1_ParamLimits

0x7a73,	// (0x0007a365) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7a73,	// (0x0007a365) cell_dialer2_keypad_pane_t1_copy1

0x9675,	// (0x0007bf67) ncimui_group_button_pane

0x19ac,	// (0x0007429e) main_sp_fs_calendar_pane_ParamLimits

0x9e67,	// (0x0007c759) list_single_cmail_header_caption_pane_ParamLimits

0xf0da,	// (0x000819cc) aid_recal_txt_sm_pane

0xaa0f,	// (0x0007d301) mian_recal_day_pane

0xe27e,	// (0x00080b70) popup_sp_fs_cale_preview_window_ParamLimits

0xaa0f,	// (0x0007d301) list_recal_day_pane

0xe4e1,	// (0x00080dd3) list_single_recal_day_pane_ParamLimits

0xe4e1,	// (0x00080dd3) list_single_recal_day_pane

0xe4f3,	// (0x00080de5) list_single_recal_day_pane_g1_ParamLimits

0xe4f3,	// (0x00080de5) list_single_recal_day_pane_g1

0xe4ff,	// (0x00080df1) list_single_recal_day_pane_g2_ParamLimits

0xe4ff,	// (0x00080df1) list_single_recal_day_pane_g2

0xe50e,	// (0x00080e00) list_single_recal_day_pane_g3_ParamLimits

0xe50e,	// (0x00080e00) list_single_recal_day_pane_g3

0xa1a9,	// (0x0007ca9b) list_single_recal_day_pane_g4_ParamLimits

0xa1a9,	// (0x0007ca9b) list_single_recal_day_pane_g4

0xe51a,	// (0x00080e0c) list_single_recal_day_pane_g5_ParamLimits

0xe51a,	// (0x00080e0c) list_single_recal_day_pane_g5

0xe529,	// (0x00080e1b) list_single_recal_day_pane_g6_ParamLimits

0xe529,	// (0x00080e1b) list_single_recal_day_pane_g6

0x0005,

0xfe25,	// (0x00082717) list_single_recal_day_pane_g_ParamLimits

0xfe25,	// (0x00082717) list_single_recal_day_pane_g

0xe535,	// (0x00080e27) list_single_recal_day_pane_t1

0xe543,	// (0x00080e35) list_single_recal_day_pane_t2

0x0001,

0xfe32,	// (0x00082724) list_single_recal_day_pane_t

0xa1bc,	// (0x0007caae) ncimui_query_button_pane_ParamLimits

0xa1bc,	// (0x0007caae) ncimui_query_button_pane

0xa1cc,	// (0x0007cabe) ncimui_query_button_pane_t1_ParamLimits

0xa1cc,	// (0x0007cabe) ncimui_query_button_pane_t1

0xe551,	// (0x00080e43) ncimui_query_button_pane_t2_ParamLimits

0xe551,	// (0x00080e43) ncimui_query_button_pane_t2

0x0001,

0xfe37,	// (0x00082729) ncimui_query_button_pane_t_ParamLimits

0xfe37,	// (0x00082729) ncimui_query_button_pane_t

0xa1df,	// (0x0007cad1) query_button_pane_ParamLimits

0xa1df,	// (0x0007cad1) query_button_pane

0xaa0f,	// (0x0007d301) bg_button_pane_cp0028

0xe564,	// (0x00080e56) query_button_pane_t1

0x5b93,	// (0x00078485) main_tport_pane_ParamLimits

0x9d54,	// (0x0007c646) bg_popup_window_pane_cp01_ParamLimits

0x9d54,	// (0x0007c646) bg_popup_window_pane_cp01

0x9d6e,	// (0x0007c660) heading_pane_cp08_ParamLimits

0x9d6e,	// (0x0007c660) heading_pane_cp08

0x9d82,	// (0x0007c674) heading_pane_cp07_ParamLimits

0x9d82,	// (0x0007c674) heading_pane_cp07

0xe094,	// (0x00080986) cell_tport_appsw_pane_g2

0x0002,

0xfd83,	// (0x00082675) cell_tport_appsw_pane_g

0x0def,	// (0x000736e1) input_candi_list_open_g1

0x4049,	// (0x0007693b) list_cale_time_pane_g6_ParamLimits

0x4049,	// (0x0007693b) list_cale_time_pane_g6

0x6960,	// (0x00079252) aid_size_touch_calib_1_ParamLimits

0x6960,	// (0x00079252) aid_size_touch_calib_1

0x696c,	// (0x0007925e) aid_size_touch_calib_2_ParamLimits

0x696c,	// (0x0007925e) aid_size_touch_calib_2

0x6982,	// (0x00079274) aid_size_touch_calib_3_ParamLimits

0x6982,	// (0x00079274) aid_size_touch_calib_3

0x69a0,	// (0x00079292) aid_size_touch_calib_4_ParamLimits

0x69a0,	// (0x00079292) aid_size_touch_calib_4

0x69b6,	// (0x000792a8) main_touch_calib_button_group_pane_ParamLimits

0x69b6,	// (0x000792a8) main_touch_calib_button_group_pane

0x69ce,	// (0x000792c0) main_touch_calib_pane_g1_ParamLimits

0x69da,	// (0x000792cc) main_touch_calib_pane_g2_ParamLimits

0x69e6,	// (0x000792d8) main_touch_calib_pane_g3_ParamLimits

0x69f2,	// (0x000792e4) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00082067) main_touch_calib_pane_g_ParamLimits

0x69fe,	// (0x000792f0) main_touch_calib_pane_t1_ParamLimits

0x6a18,	// (0x0007930a) main_touch_calib_pane_t2_ParamLimits

0x6a32,	// (0x00079324) main_touch_calib_pane_t3_ParamLimits

0x6a46,	// (0x00079338) main_touch_calib_pane_t4_ParamLimits

0x6a5a,	// (0x0007934c) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00082070) main_touch_calib_pane_t_ParamLimits

0xc585,	// (0x0007ee77) list_single_fp_cale_pane_g3_ParamLimits

0xc585,	// (0x0007ee77) list_single_fp_cale_pane_g3

0x19ac,	// (0x0007429e) bg_button_pane_cp012_ParamLimits

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp03_ParamLimits

0x8a1d,	// (0x0007b30f) cell_vitu2_function_top_pane_g1_ParamLimits

0x19ac,	// (0x0007429e) bg_vkb2_func_pane_cp04_ParamLimits

0x9615,	// (0x0007bf07) main_ncimui_button_group_pane_ParamLimits

0x9615,	// (0x0007bf07) main_ncimui_button_group_pane

0x9663,	// (0x0007bf55) main_ncimui_pane_t3_ParamLimits

0x9663,	// (0x0007bf55) main_ncimui_pane_t3

0xe1b4,	// (0x00080aa6) phacti_button_group_pane

0xe497,	// (0x00080d89) aid_size_list_single_double_ParamLimits

0xa12b,	// (0x0007ca1d) popup_ezdial_listscroll_window_ParamLimits

0xa147,	// (0x0007ca39) popup_number_entry_window_cp01_ParamLimits

0xa1f2,	// (0x0007cae4) phacti_button_pane_ParamLimits

0xa1f2,	// (0x0007cae4) phacti_button_pane

0xaa0f,	// (0x0007d301) bg_button_pane_cp14

0xe572,	// (0x00080e64) phacti_button_pane_t1

0xa203,	// (0x0007caf5) main_touch_calib_button_pane_ParamLimits

0xa203,	// (0x0007caf5) main_touch_calib_button_pane

0x2443,	// (0x00074d35) bg_button_pane_cp18_ParamLimits

0x2443,	// (0x00074d35) bg_button_pane_cp18

0xe580,	// (0x00080e72) main_touch_calib_button_pane_t1_ParamLimits

0xe580,	// (0x00080e72) main_touch_calib_button_pane_t1

0xe596,	// (0x00080e88) main_touch_calib_button_pane_t2_ParamLimits

0xe596,	// (0x00080e88) main_touch_calib_button_pane_t2

0x0001,

0xfe3c,	// (0x0008272e) main_touch_calib_button_pane_t_ParamLimits

0xfe3c,	// (0x0008272e) main_touch_calib_button_pane_t

0xaa0f,	// (0x0007d301) cell_ncimui_button_pane

0xaa0f,	// (0x0007d301) bg_button_pane_cp032

0xe5b4,	// (0x00080ea6) cell_ncimui_button_pane_t1

0xed8b,	// (0x0008167d) image3_infobar_pane_ParamLimits

0xed8b,	// (0x0008167d) image3_infobar_pane

0x9a14,	// (0x0007c306) fs_bigclock_status_pane_ParamLimits

0x9a14,	// (0x0007c306) fs_bigclock_status_pane

0x9a21,	// (0x0007c313) main_fs_bigclock_clock_pane_ParamLimits

0x9a21,	// (0x0007c313) main_fs_bigclock_clock_pane

0x9a34,	// (0x0007c326) main_fs_bigclock_indi_pane_ParamLimits

0x9a34,	// (0x0007c326) main_fs_bigclock_indi_pane

0x9a4c,	// (0x0007c33e) main_fs_bigclock_swipe_pane_ParamLimits

0x9a4c,	// (0x0007c33e) main_fs_bigclock_swipe_pane

0xaa0f,	// (0x0007d301) main_fs_clock_dumped_data

0xdacc,	// (0x000803be) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdacc,	// (0x000803be) list_single_fs_bigclock_indicator_pane_g1

0xdae8,	// (0x000803da) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdae8,	// (0x000803da) list_single_fs_bigclock_indicator_pane_g2

0xdb02,	// (0x000803f4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb02,	// (0x000803f4) list_single_fs_bigclock_indicator_pane_g3

0xdb1c,	// (0x0008040e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb1c,	// (0x0008040e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6f,	// (0x00082561) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6f,	// (0x00082561) list_single_fs_bigclock_indicator_pane_g

0xdb42,	// (0x00080434) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb42,	// (0x00080434) list_single_fs_bigclock_indicator_pane_t1

0xdb6a,	// (0x0008045c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb6a,	// (0x0008045c) list_single_fs_bigclock_indicator_pane_t2

0xdb92,	// (0x00080484) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdb92,	// (0x00080484) list_single_fs_bigclock_indicator_pane_t3

0xdbba,	// (0x000804ac) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdbba,	// (0x000804ac) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7a,	// (0x0008256c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7a,	// (0x0008256c) list_single_fs_bigclock_indicator_pane_t

0xe5c2,	// (0x00080eb4) image3_infobar_fav_pane_ParamLimits

0xe5c2,	// (0x00080eb4) image3_infobar_fav_pane

0xe5d2,	// (0x00080ec4) image3_infobar_loc_pane_ParamLimits

0xe5d2,	// (0x00080ec4) image3_infobar_loc_pane

0xe5e6,	// (0x00080ed8) image3_infobar_time_pane_ParamLimits

0xe5e6,	// (0x00080ed8) image3_infobar_time_pane

0xc1e7,	// (0x0007ead9) image3_infobar_time_pane_g1

0xe5f6,	// (0x00080ee8) image3_infobar_time_pane_t1

0xc1e7,	// (0x0007ead9) image3_infobar_loc_pane_g1

0xe604,	// (0x00080ef6) image3_infobar_loc_pane_g2

0x0001,

0xfe41,	// (0x00082733) image3_infobar_loc_pane_g

0xe60c,	// (0x00080efe) image3_infobar_loc_pane_t1

0xc1e7,	// (0x0007ead9) image3_infobar_fav_pane_g1

0xe61a,	// (0x00080f0c) image3_infobar_fav_pane_g2

0x0001,

0xfe46,	// (0x00082738) image3_infobar_fav_pane_g

0xe622,	// (0x00080f14) fs_bigclock_status_battery_pane

0xe62b,	// (0x00080f1d) fs_bigclock_status_signal_pane

0xe634,	// (0x00080f26) fs_bigclock_status_title_pane

0xe63d,	// (0x00080f2f) fs_bigclock_status_signal_pane_g1

0xe646,	// (0x00080f38) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4b,	// (0x0008273d) fs_bigclock_status_signal_pane_g

0xe64e,	// (0x00080f40) fs_bigclock_status_battery_pane_g1

0xe657,	// (0x00080f49) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe50,	// (0x00082742) fs_bigclock_status_battery_pane_g

0xe65f,	// (0x00080f51) fs_bigclock_status_title_pane_t1

0xc1e7,	// (0x0007ead9) main_fs_bigclock_clock_pane_g1

0xe66d,	// (0x00080f5f) main_fs_bigclock_clock_pane_g2

0xe66d,	// (0x00080f5f) main_fs_bigclock_clock_pane_g3

0xe66d,	// (0x00080f5f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe55,	// (0x00082747) main_fs_bigclock_clock_pane_g

0xe675,	// (0x00080f67) main_fs_bigclock_clock_pane_t1

0xe683,	// (0x00080f75) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5e,	// (0x00082750) main_fs_bigclock_clock_pane_t

0xe692,	// (0x00080f84) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe692,	// (0x00080f84) list_single_fs_bigclock_indicator_pane

0xa218,	// (0x0007cb0a) list_single_fs_bigclock_pane_ParamLimits

0xa218,	// (0x0007cb0a) list_single_fs_bigclock_pane

0xe6ac,	// (0x00080f9e) main_fs_bigclock_indicator_pane_t1

0xe6bb,	// (0x00080fad) list_single_fs_bigclock_pane_g1

0xe6c3,	// (0x00080fb5) list_single_fs_bigclock_pane_t1

0xc1e7,	// (0x0007ead9) main_fs_bigclock_swipe_pane_g1

0xe701,	// (0x00080ff3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6f,	// (0x00082761) main_fs_bigclock_swipe_pane_g

0xe709,	// (0x00080ffb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe709,	// (0x00080ffb) main_fs_bigclock_swipe_pane_t1

0x4335,	// (0x00076c27) call_type_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_btmg_pane

0xe377,	// (0x00080c69) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe377,	// (0x00080c69) list_single_cale_mrui_row_pane_g2

0x0001,

0xfde2,	// (0x000826d4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde2,	// (0x000826d4) list_single_cale_mrui_row_pane_g

0xe4d1,	// (0x00080dc3) list_recal_vselct_arw_lo_pane

0xe4d9,	// (0x00080dcb) list_recal_vselct_arw_up_pane

0xf0e3,	// (0x000819d5) list_recal_vselct_pane

0xe726,	// (0x00081018) btmg_button_pane

0xa27d,	// (0x0007cb6f) main_btmg_pane_g1

0xaa0f,	// (0x0007d301) bg_button_pane_cp044

0xe730,	// (0x00081022) btmg_button_pane_t1

0xbd76,	// (0x0007e668) aid_listscroll_gen

0x19ac,	// (0x0007429e) main_cntbar_detail_pane

0xe0b2,	// (0x000809a4) list_cmail_folder_pane

0xe0c2,	// (0x000809b4) sp_fs_scroll_pane_cp03_ParamLimits

0x16a0,	// (0x00073f92) list_single_fs_dyc_pane_cp01_ParamLimits

0x16a0,	// (0x00073f92) list_single_fs_dyc_pane_cp01

0xe73e,	// (0x00081030) aid_size_cmail_indent

0xef6a,	// (0x0008185c) list_single_dyc_row_pane_cp01

0xa2b3,	// (0x0007cba5) cntbar_detail_list_pane_ParamLimits

0xa2b3,	// (0x0007cba5) cntbar_detail_list_pane

0xa2ff,	// (0x0007cbf1) main_cntbar_detail_cont_pane_ParamLimits

0xa2ff,	// (0x0007cbf1) main_cntbar_detail_cont_pane

0x421b,	// (0x00076b0d) scroll_pane_cp032_ParamLimits

0x421b,	// (0x00076b0d) scroll_pane_cp032

0xa313,	// (0x0007cc05) cntbar_detail_list_event_pane_ParamLimits

0xa313,	// (0x0007cc05) cntbar_detail_list_event_pane

0xa2c3,	// (0x0007cbb5) cntbar_detail_list_shct_pane

0x35fe,	// (0x00075ef0) aid_list_gen

0xe747,	// (0x00081039) aid_scroll

0xe750,	// (0x00081042) aid_size_touch_scroll_bar

0x16b5,	// (0x00073fa7) aid_list_double

0xe759,	// (0x0008104b) aid_list_single

0xa323,	// (0x0007cc15) aid_list_single_lg

0xe762,	// (0x00081054) aid_list_z_g_a_sm

0xef73,	// (0x00081865) aid_list_z_g_d

0xe76a,	// (0x0008105c) aid_txt_z_prm

0x16be,	// (0x00073fb0) aid_txt_z_prm_cp01

0x16cc,	// (0x00073fbe) aid_txt_z_sec

0xa32c,	// (0x0007cc1e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa32c,	// (0x0007cc1e) main_cntbar_detail_cont_pane_g1

0xa340,	// (0x0007cc32) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa340,	// (0x0007cc32) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe74,	// (0x00082766) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe74,	// (0x00082766) main_cntbar_detail_cont_pane_g

0xe778,	// (0x0008106a) main_cntbar_detail_cont_pane_t1

0xe786,	// (0x00081078) main_cntbar_detail_cont_pane_t2

0xe794,	// (0x00081086) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe79,	// (0x0008276b) main_cntbar_detail_cont_pane_t

0xa350,	// (0x0007cc42) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa350,	// (0x0007cc42) cell_cntbar_detail_list_shct_pane

0xe7a2,	// (0x00081094) cntbar_detail_list_shct_pane_g1

0xe7ab,	// (0x0008109d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe80,	// (0x00082772) cntbar_detail_list_shct_pane_g

0xa364,	// (0x0007cc56) cntbar_detail_list_event_pane_g1_ParamLimits

0xa364,	// (0x0007cc56) cntbar_detail_list_event_pane_g1

0xa370,	// (0x0007cc62) cntbar_detail_list_event_pane_g2_ParamLimits

0xa370,	// (0x0007cc62) cntbar_detail_list_event_pane_g2

0x0005,

0xfe85,	// (0x00082777) cntbar_detail_list_event_pane_g_ParamLimits

0xfe85,	// (0x00082777) cntbar_detail_list_event_pane_g

0xa3dc,	// (0x0007ccce) cntbar_detail_list_event_pane_t1_ParamLimits

0xa3dc,	// (0x0007ccce) cntbar_detail_list_event_pane_t1

0xa3f1,	// (0x0007cce3) cntbar_detail_list_event_pane_t2_ParamLimits

0xa3f1,	// (0x0007cce3) cntbar_detail_list_event_pane_t2

0x0002,

0xfe92,	// (0x00082784) cntbar_detail_list_event_pane_t_ParamLimits

0xfe92,	// (0x00082784) cntbar_detail_list_event_pane_t

0xc1e7,	// (0x0007ead9) cell_cntbar_detail_list_shct_pane_g1

0x493c,	// (0x0007722e) navi_pane_mv_g3

0x19ac,	// (0x0007429e) main_cntbar_detail_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_notif_wgt_pane

0xeba1,	// (0x00081493) aid_tch_main_mp4_pane_g4

0xed83,	// (0x00081675) popup_slider_window_cp02

0xe4c8,	// (0x00080dba) list_recal_day_event_pane

0xa287,	// (0x0007cb79) cntbar_detail_btn_pane_ParamLimits

0xa287,	// (0x0007cb79) cntbar_detail_btn_pane

0xa29d,	// (0x0007cb8f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa29d,	// (0x0007cb8f) cntbar_detail_btn_pane_cp01

0xa2c3,	// (0x0007cbb5) cntbar_detail_list_shct_pane_ParamLimits

0xa2d3,	// (0x0007cbc5) cntbar_detail_pane_g1_ParamLimits

0xa2d3,	// (0x0007cbc5) cntbar_detail_pane_g1

0xa2e3,	// (0x0007cbd5) cntbar_detail_pane_t1_ParamLimits

0xa2e3,	// (0x0007cbd5) cntbar_detail_pane_t1

0xa37c,	// (0x0007cc6e) cntbar_detail_list_event_pane_g3_ParamLimits

0xa37c,	// (0x0007cc6e) cntbar_detail_list_event_pane_g3

0xa394,	// (0x0007cc86) cntbar_detail_list_event_pane_g4_ParamLimits

0xa394,	// (0x0007cc86) cntbar_detail_list_event_pane_g4

0xa3ac,	// (0x0007cc9e) cntbar_detail_list_event_pane_g5_ParamLimits

0xa3ac,	// (0x0007cc9e) cntbar_detail_list_event_pane_g5

0xa3c4,	// (0x0007ccb6) cntbar_detail_list_event_pane_g6_ParamLimits

0xa3c4,	// (0x0007ccb6) cntbar_detail_list_event_pane_g6

0xa406,	// (0x0007ccf8) cntbar_detail_list_event_pane_t3_ParamLimits

0xa406,	// (0x0007ccf8) cntbar_detail_list_event_pane_t3

0xa418,	// (0x0007cd0a) popup_notif_wgt_window_ParamLimits

0xa418,	// (0x0007cd0a) popup_notif_wgt_window

0xa431,	// (0x0007cd23) popup_submenu_window_cp01_ParamLimits

0xa431,	// (0x0007cd23) popup_submenu_window_cp01

0x49ba,	// (0x000772ac) bg_popup_window_pane_cp10

0xe7b4,	// (0x000810a6) listscroll_notif_wgt_pane

0xe7be,	// (0x000810b0) list_notif_wgt_window

0xe7c7,	// (0x000810b9) scroll_pane_cp033

0xe7d0,	// (0x000810c2) list_notif_wgt_row_pane_ParamLimits

0xe7d0,	// (0x000810c2) list_notif_wgt_row_pane

0xe7e2,	// (0x000810d4) aid_size_list_notif_wgt_del

0xe7eb,	// (0x000810dd) list_notif_wgt_row_pane_g1

0xe7f3,	// (0x000810e5) list_notif_wgt_row_pane_g2

0xe7fb,	// (0x000810ed) list_notif_wgt_row_pane_g3

0x0002,

0xfe99,	// (0x0008278b) list_notif_wgt_row_pane_g

0xe804,	// (0x000810f6) list_notif_wgt_row_pane_t1

0xe812,	// (0x00081104) list_notif_wgt_row_pane_t2

0xe820,	// (0x00081112) list_notif_wgt_row_pane_t3

0x0002,

0xfea0,	// (0x00082792) list_notif_wgt_row_pane_t

0xcf4d,	// (0x0007f83f) list_recal_day_event_pane_g1

0xe82e,	// (0x00081120) list_recal_day_event_pane_t1

0xaa0f,	// (0x0007d301) bg_button_pane_cp045

0xe83d,	// (0x0008112f) cntbar_detail_btn_pane_t1

0xbd7e,	// (0x0007e670) main_callh_pane_ParamLimits

0xbd7e,	// (0x0007e670) main_callh_pane

0xaa0f,	// (0x0007d301) main_coverflow0_pane

0xaa0f,	// (0x0007d301) main_wgtman_pane

0x9a5a,	// (0x0007c34c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9a5a,	// (0x0007c34c) main_fs_bigclock_unlock_btn_pane

0xe08c,	// (0x0008097e) bg_button_pane_cp16

0xe09c,	// (0x0008098e) cell_tport_appsw_pane_g3

0xa443,	// (0x0007cd35) cf0_flow_pane_ParamLimits

0xa443,	// (0x0007cd35) cf0_flow_pane

0xe84b,	// (0x0008113d) listscroll_cf0_pane

0xe854,	// (0x00081146) main_cf0_pane_g1

0xa458,	// (0x0007cd4a) main_cf0_pane_t1_ParamLimits

0xa458,	// (0x0007cd4a) main_cf0_pane_t1

0xa46f,	// (0x0007cd61) main_cf0_pane_t2_ParamLimits

0xa46f,	// (0x0007cd61) main_cf0_pane_t2

0x0001,

0xfea7,	// (0x00082799) main_cf0_pane_t_ParamLimits

0xfea7,	// (0x00082799) main_cf0_pane_t

0xe85e,	// (0x00081150) scroll_pane_cp11

0xa486,	// (0x0007cd78) cf0_flow_pane_g1

0xa48e,	// (0x0007cd80) cf0_flow_pane_g2

0x0001,

0xfeac,	// (0x0008279e) cf0_flow_pane_g

0xa496,	// (0x0007cd88) cf0_flow_pane_t1

0xaa0f,	// (0x0007d301) main_call6_pane

0xaa0f,	// (0x0007d301) main_calllock_pane

0xa4a4,	// (0x0007cd96) call6_btn_grp_pane_ParamLimits

0xa4a4,	// (0x0007cd96) call6_btn_grp_pane

0xa4be,	// (0x0007cdb0) call6_pane_g1_ParamLimits

0xa4be,	// (0x0007cdb0) call6_pane_g1

0xa4d3,	// (0x0007cdc5) popup_call6_1st_window_ParamLimits

0xa4d3,	// (0x0007cdc5) popup_call6_1st_window

0xa4e4,	// (0x0007cdd6) popup_call6_2nd_window_ParamLimits

0xa4e4,	// (0x0007cdd6) popup_call6_2nd_window

0xa4f5,	// (0x0007cde7) cell_call6_btn_pane_ParamLimits

0xa4f5,	// (0x0007cde7) cell_call6_btn_pane

0x49ba,	// (0x000772ac) bg_popup_call2_in_pane_cp03

0xe869,	// (0x0008115b) popup_call6_1st_window_g1

0xe871,	// (0x00081163) popup_call6_1st_window_g2

0xe879,	// (0x0008116b) popup_call6_1st_window_g3

0x0002,

0xfeb1,	// (0x000827a3) popup_call6_1st_window_g

0xe881,	// (0x00081173) popup_call6_1st_window_t1

0xe890,	// (0x00081182) popup_call6_1st_window_t2

0xe8a0,	// (0x00081192) popup_call6_1st_window_t3

0x0002,

0xfeb8,	// (0x000827aa) popup_call6_1st_window_t

0x49ba,	// (0x000772ac) bg_popup_call2_in_pane_cp04

0xe869,	// (0x0008115b) popup_call6_2nd_window_g1

0xe871,	// (0x00081163) popup_call6_2nd_window_g2

0xe879,	// (0x0008116b) popup_call6_2nd_window_g3

0x0002,

0xfeb1,	// (0x000827a3) popup_call6_2nd_window_g

0xe881,	// (0x00081173) popup_call6_2nd_window_t1

0xaa0f,	// (0x0007d301) bg_button_pane_cp15

0xe8b0,	// (0x000811a2) cell_call6_btn_pane_g1

0xe8b9,	// (0x000811ab) cell_call6_btn_pane_t1

0xa509,	// (0x0007cdfb) listscroll_wgtman_pane_ParamLimits

0xa509,	// (0x0007cdfb) listscroll_wgtman_pane

0xa52c,	// (0x0007ce1e) wgtman_btn_pane_ParamLimits

0xa52c,	// (0x0007ce1e) wgtman_btn_pane

0x458f,	// (0x00076e81) aid_scroll_copy1

0xe8c8,	// (0x000811ba) list_wgtman_pane

0xa56f,	// (0x0007ce61) wgtman_btn_pane_g1_ParamLimits

0xa56f,	// (0x0007ce61) wgtman_btn_pane_g1

0xa59b,	// (0x0007ce8d) wgtman_btn_pane_t1_ParamLimits

0xa59b,	// (0x0007ce8d) wgtman_btn_pane_t1

0xe8d2,	// (0x000811c4) wgtman_btn_pane_t2_ParamLimits

0xe8d2,	// (0x000811c4) wgtman_btn_pane_t2

0x0001,

0xfebf,	// (0x000827b1) wgtman_btn_pane_t_ParamLimits

0xfebf,	// (0x000827b1) wgtman_btn_pane_t

0xa5d8,	// (0x0007ceca) listrow_wgtman_pane_ParamLimits

0xa5d8,	// (0x0007ceca) listrow_wgtman_pane

0xa5ea,	// (0x0007cedc) listrow_wgtman_pane_g1

0xa5f3,	// (0x0007cee5) listrow_wgtman_pane_g2

0x0001,

0xfec4,	// (0x000827b6) listrow_wgtman_pane_g

0x16da,	// (0x00073fcc) listrow_wgtman_pane_t1

0x16e8,	// (0x00073fda) listrow_wgtman_pane_t2

0x0001,

0xfec9,	// (0x000827bb) listrow_wgtman_pane_t

0x16f6,	// (0x00073fe8) wait_bar_pane_cp09

0xe8e9,	// (0x000811db) main_calllock_btn_pane

0xe8f3,	// (0x000811e5) main_calllock_pane_g1

0xaa0f,	// (0x0007d301) bg_button_pane_cp17

0xe8ff,	// (0x000811f1) main_calllock_btn_pane_g1

0xe908,	// (0x000811fa) main_calllock_btn_pane_t1

0xaa0f,	// (0x0007d301) main_dialer3_pane

0xaa0f,	// (0x0007d301) main_fmrd2_pane

0xc1e7,	// (0x0007ead9) main_fs_bigclock_unlock_btn_pane_g1

0xe91f,	// (0x00081211) main_fs_bigclock_unlock_btn_pane_t1

0xa5fd,	// (0x0007ceef) area_fmrd2_info_pane_ParamLimits

0xa5fd,	// (0x0007ceef) area_fmrd2_info_pane

0xa60e,	// (0x0007cf00) area_fmrd2_visual_pane_ParamLimits

0xa60e,	// (0x0007cf00) area_fmrd2_visual_pane

0xa61c,	// (0x0007cf0e) fmrd2_indi_pane_ParamLimits

0xa61c,	// (0x0007cf0e) fmrd2_indi_pane

0xa629,	// (0x0007cf1b) area_fmrd2_visual_pane_g1

0xa631,	// (0x0007cf23) area_fmrd2_visual_pane_t1

0xa641,	// (0x0007cf33) area_fmrd2_visual_pane_t2

0xa651,	// (0x0007cf43) area_fmrd2_visual_pane_t3

0x0002,

0xfed3,	// (0x000827c5) area_fmrd2_visual_pane_t

0xa661,	// (0x0007cf53) area_fmrd2_info_pane_g1

0xa669,	// (0x0007cf5b) area_fmrd2_info_pane_t1

0xa679,	// (0x0007cf6b) area_fmrd2_info_pane_t2

0xa689,	// (0x0007cf7b) area_fmrd2_info_pane_t3

0xa699,	// (0x0007cf8b) area_fmrd2_info_pane_t4

0x0003,

0xfeda,	// (0x000827cc) area_fmrd2_info_pane_t

0xa6a7,	// (0x0007cf99) fmrd2_indi_pane_t1

0xa6b7,	// (0x0007cfa9) fmrd2_indi_pane_t2

0xa6c7,	// (0x0007cfb9) fmrd2_indi_pane_t3

0x0002,

0xfee3,	// (0x000827d5) fmrd2_indi_pane_t

0xdb2b,	// (0x0008041d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb2b,	// (0x0008041d) list_single_fs_bigclock_indicator_pane_g5

0xdbcf,	// (0x000804c1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbcf,	// (0x000804c1) list_single_fs_bigclock_indicator_pane_t5

0x9f76,	// (0x0007c868) aid_cell_bcale_month_pane_ParamLimits

0x9f76,	// (0x0007c868) aid_cell_bcale_month_pane

0x9f88,	// (0x0007c87a) bcale_month_pane_ParamLimits

0x9f88,	// (0x0007c87a) bcale_month_pane

0x9fa0,	// (0x0007c892) bcale_preview_pane_ParamLimits

0x9fa0,	// (0x0007c892) bcale_preview_pane

0xe6c3,	// (0x00080fb5) list_single_fs_bigclock_pane_t1_ParamLimits

0xe6dd,	// (0x00080fcf) list_single_fs_bigclock_pane_t2_ParamLimits

0xe6dd,	// (0x00080fcf) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6a,	// (0x0008275c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6a,	// (0x0008275c) list_single_fs_bigclock_pane_t

0xe917,	// (0x00081209) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfece,	// (0x000827c0) main_fs_bigclock_unlock_btn_pane_g

0xa6d7,	// (0x0007cfc9) aid_dia3_key_size_ParamLimits

0xa6d7,	// (0x0007cfc9) aid_dia3_key_size

0xa6e6,	// (0x0007cfd8) aid_dia3_listrow_size_ParamLimits

0xa6e6,	// (0x0007cfd8) aid_dia3_listrow_size

0xa6fb,	// (0x0007cfed) dia3_keypad_fun_pane_ParamLimits

0xa6fb,	// (0x0007cfed) dia3_keypad_fun_pane

0xa717,	// (0x0007d009) dia3_keypad_num_pane_ParamLimits

0xa717,	// (0x0007d009) dia3_keypad_num_pane

0xa732,	// (0x0007d024) dia3_listscroll_pane_ParamLimits

0xa732,	// (0x0007d024) dia3_listscroll_pane

0xa745,	// (0x0007d037) dia3_numentry_pane_ParamLimits

0xa745,	// (0x0007d037) dia3_numentry_pane

0xe92d,	// (0x0008121f) dia3_list_pane

0xe938,	// (0x0008122a) scroll_pane_cp12

0xaa0f,	// (0x0007d301) bg_dia3_numentry_pane

0xa759,	// (0x0007d04b) dia3_numentry_pane_t1

0xa768,	// (0x0007d05a) cell_dia3_key_num_pane

0xa770,	// (0x0007d062) cell_dia3_key0_fun_pane_ParamLimits

0xa770,	// (0x0007d062) cell_dia3_key0_fun_pane

0xa784,	// (0x0007d076) cell_dia3_key1_fun_pane_ParamLimits

0xa784,	// (0x0007d076) cell_dia3_key1_fun_pane

0xa79c,	// (0x0007d08e) dia3_listrow_pane

0xd82b,	// (0x0008011d) bg_dia3_numentry_pane_g1

0xaa0f,	// (0x0007d301) bg_button_pane_cp21

0xe943,	// (0x00081235) cell_dia3_key_num_pane_t1

0xe951,	// (0x00081243) cell_dia3_key_num_pane_t2

0xe960,	// (0x00081252) cell_dia3_key_num_pane_t3

0xe96f,	// (0x00081261) cell_dia3_key_num_pane_t4

0x0003,

0xfeea,	// (0x000827dc) cell_dia3_key_num_pane_t

0xaa0f,	// (0x0007d301) bg_button_pane_cp19

0xa7ae,	// (0x0007d0a0) cell_dia3_key0_fun_pane_g1

0xaa0f,	// (0x0007d301) bg_button_pane_cp20

0xa7b6,	// (0x0007d0a8) cell_dia3_key1_fun_pane_g1

0xa7be,	// (0x0007d0b0) area_left_week_number_pane

0xa7c7,	// (0x0007d0b9) area_top_day_name_pane

0xa7d0,	// (0x0007d0c2) frame_month_view_pane

0xa7d8,	// (0x0007d0ca) grid_month_view_pane

0xa7e2,	// (0x0007d0d4) cell_top_day_name_pane_ParamLimits

0xa7e2,	// (0x0007d0d4) cell_top_day_name_pane

0xa7f8,	// (0x0007d0ea) cell_area_left_week_number_pane_ParamLimits

0xa7f8,	// (0x0007d0ea) cell_area_left_week_number_pane

0xa80c,	// (0x0007d0fe) cell_month_view_pane_ParamLimits

0xa80c,	// (0x0007d0fe) cell_month_view_pane

0xe97e,	// (0x00081270) frm_month_g1

0xa827,	// (0x0007d119) frm_month_g2

0xa82f,	// (0x0007d121) frm_month_g3

0xa837,	// (0x0007d129) frm_month_g4

0xa83f,	// (0x0007d131) frm_month_g5

0xa847,	// (0x0007d139) frm_month_g6

0xa84f,	// (0x0007d141) frm_month_g7

0xe987,	// (0x00081279) frm_month_g8

0xa857,	// (0x0007d149) frm_month_g9

0xa860,	// (0x0007d152) frm_month_g10

0xa869,	// (0x0007d15b) frm_month_g11

0xa872,	// (0x0007d164) frm_month_g12

0xa87b,	// (0x0007d16d) frm_month_g13

0xa884,	// (0x0007d176) frm_month_g14

0xa88d,	// (0x0007d17f) frm_month_g15

0xa896,	// (0x0007d188) frm_month_g16

0x000f,

0xfef3,	// (0x000827e5) frm_month_g

0xa89f,	// (0x0007d191) cell_top_day_name_pane_t1

0xa8ae,	// (0x0007d1a0) cell_area_left_week_number_pane_g1

0xa89f,	// (0x0007d191) cell_area_left_week_number_pane_t1

0xc1e7,	// (0x0007ead9) cell_month_view_pane_g1

0xa8b6,	// (0x0007d1a8) cell_month_view_pane_t1

0xaa0f,	// (0x0007d301) main_fps_pane

0xde00,	// (0x000806f2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde00,	// (0x000806f2) cmail_ddmenu_btn02_pane_cp1

0xde1c,	// (0x0008070e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde1c,	// (0x0008070e) cmail_ddmenu_btn02_pane_cp2

0xa179,	// (0x0007ca6b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa179,	// (0x0007ca6b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1b,	// (0x0008270d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1b,	// (0x0008270d) cmail_ddmenu_btn02_pane_g

0xa197,	// (0x0007ca89) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa197,	// (0x0007ca89) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe20,	// (0x00082712) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe20,	// (0x00082712) cmail_ddmenu_btn02_pane_t

0xa8c5,	// (0x0007d1b7) fps_text_pane_ParamLimits

0xa8c5,	// (0x0007d1b7) fps_text_pane

0xa8dc,	// (0x0007d1ce) main_fps_pane_g1_ParamLimits

0xa8dc,	// (0x0007d1ce) main_fps_pane_g1

0xa8f6,	// (0x0007d1e8) wait_bar_pane_cp010_ParamLimits

0xa8f6,	// (0x0007d1e8) wait_bar_pane_cp010

0xa907,	// (0x0007d1f9) fps_text_pane_t1_ParamLimits

0xa907,	// (0x0007d1f9) fps_text_pane_t1

0xcc1a,	// (0x0007f50c) cam4_image_uncrop_pane_g1

0xcc23,	// (0x0007f515) cam4_image_uncrop_pane_g2

0x7f00,	// (0x0007a7f2) cam4_image_uncrop_pane_g3

0x7f09,	// (0x0007a7fb) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000821ff) cam4_image_uncrop_pane_g

0xa79c,	// (0x0007d08e) dia3_listrow_pane_ParamLimits

0xaa0f,	// (0x0007d301) main_phob2_pane

0x9ded,	// (0x0007c6df) cell_tport_appsw_pane_cp02_ParamLimits

0x9ded,	// (0x0007c6df) cell_tport_appsw_pane_cp02

0x9e01,	// (0x0007c6f3) cell_tport_appsw_pane_cp03_ParamLimits

0x9e01,	// (0x0007c6f3) cell_tport_appsw_pane_cp03

0xaa0f,	// (0x0007d301) phob2_contact_card_pane

0xaa0f,	// (0x0007d301) phob2_listscroll_pane

0xe990,	// (0x00081282) phob2_list_pane

0xe998,	// (0x0008128a) scroll_pane_cp034

0xa91f,	// (0x0007d211) phob2_cc_data_pane_ParamLimits

0xa91f,	// (0x0007d211) phob2_cc_data_pane

0xa93e,	// (0x0007d230) phob2_cc_listscroll_pane_ParamLimits

0xa93e,	// (0x0007d230) phob2_cc_listscroll_pane

0xa95c,	// (0x0007d24e) list_double_large_graphic_phob2_pane_ParamLimits

0xa95c,	// (0x0007d24e) list_double_large_graphic_phob2_pane

0xe9a0,	// (0x00081292) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe9a0,	// (0x00081292) list_double_large_graphic_phob2_pane_g1

0xe9ad,	// (0x0008129f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe9ad,	// (0x0008129f) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff14,	// (0x00082806) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff14,	// (0x00082806) list_double_large_graphic_phob2_pane_g

0xe9b9,	// (0x000812ab) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe9b9,	// (0x000812ab) list_double_large_graphic_phob2_pane_t1

0xe9ce,	// (0x000812c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe9ce,	// (0x000812c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff19,	// (0x0008280b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff19,	// (0x0008280b) list_double_large_graphic_phob2_pane_t

0xaa0f,	// (0x0007d301) list_highlight_pane_cp024

0xe9e0,	// (0x000812d2) phob2_cc_button_pane

0xa96e,	// (0x0007d260) phob2_cc_data_pane_g1_ParamLimits

0xa96e,	// (0x0007d260) phob2_cc_data_pane_g1

0xa983,	// (0x0007d275) phob2_cc_data_pane_g2_ParamLimits

0xa983,	// (0x0007d275) phob2_cc_data_pane_g2

0x0001,

0xff1e,	// (0x00082810) phob2_cc_data_pane_g_ParamLimits

0xff1e,	// (0x00082810) phob2_cc_data_pane_g

0xa995,	// (0x0007d287) phob2_cc_data_pane_t1_ParamLimits

0xa995,	// (0x0007d287) phob2_cc_data_pane_t1

0xa9ad,	// (0x0007d29f) phob2_cc_data_pane_t2_ParamLimits

0xa9ad,	// (0x0007d29f) phob2_cc_data_pane_t2

0xa9c5,	// (0x0007d2b7) phob2_cc_data_pane_t3_ParamLimits

0xa9c5,	// (0x0007d2b7) phob2_cc_data_pane_t3

0x0002,

0xff23,	// (0x00082815) phob2_cc_data_pane_t_ParamLimits

0xff23,	// (0x00082815) phob2_cc_data_pane_t

0xe9e8,	// (0x000812da) phob2_cc_list_pane_ParamLimits

0xe9e8,	// (0x000812da) phob2_cc_list_pane

0xcff8,	// (0x0007f8ea) scroll_pane_cp035_ParamLimits

0xcff8,	// (0x0007f8ea) scroll_pane_cp035

0x19ac,	// (0x0007429e) bg_button_pane_cp033

0xe9f4,	// (0x000812e6) phob2_cc_button_pane_g1

0xea00,	// (0x000812f2) phob2_cc_button_pane_t1

0xea15,	// (0x00081307) phob2_cc_button_pane_t2

0x0001,

0xff2a,	// (0x0008281c) phob2_cc_button_pane_t

0xa9dd,	// (0x0007d2cf) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa9dd,	// (0x0007d2cf) list_double_large_graphic_phob2_cc_pane

0xa9ef,	// (0x0007d2e1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa9ef,	// (0x0007d2e1) list_double_large_graphic_phob2_cc_pane_g1

0xa9fb,	// (0x0007d2ed) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa9fb,	// (0x0007d2ed) list_double_large_graphic_phob2_cc_pane_g2

0x16fe,	// (0x00073ff0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x16fe,	// (0x00073ff0) list_double_large_graphic_phob2_cc_pane_g3

0x170a,	// (0x00073ffc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x170a,	// (0x00073ffc) list_double_large_graphic_phob2_cc_pane_g4

0x1716,	// (0x00074008) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1716,	// (0x00074008) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2f,	// (0x00082821) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2f,	// (0x00082821) list_double_large_graphic_phob2_cc_pane_g

0x1722,	// (0x00074014) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1722,	// (0x00074014) list_double_large_graphic_phob2_cc_pane_t1

0x174b,	// (0x0007403d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x174b,	// (0x0007403d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3a,	// (0x0008282c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3a,	// (0x0008282c) list_double_large_graphic_phob2_cc_pane_t

0xea27,	// (0x00081319) list_highlight_pane_cp025_ParamLimits

0xea27,	// (0x00081319) list_highlight_pane_cp025

0x19ac,	// (0x0007429e) bg_button_pane_cp033_ParamLimits

0xe9f4,	// (0x000812e6) phob2_cc_button_pane_g1_ParamLimits

0xea00,	// (0x000812f2) phob2_cc_button_pane_t1_ParamLimits

0xea15,	// (0x00081307) phob2_cc_button_pane_t2_ParamLimits

0xff2a,	// (0x0008281c) phob2_cc_button_pane_t_ParamLimits

0x19ba,	// (0x000742ac) popup_wgtman_window

0xcdf1,	// (0x0007f6e3) scroll_pane_cp038

0xa551,	// (0x0007ce43) wgtman_btn_pane_cp_01_ParamLimits

0xa551,	// (0x0007ce43) wgtman_btn_pane_cp_01

0xea35,	// (0x00081327) wgtman_content_pane

0xea3e,	// (0x00081330) wgtman_heading_pane

0xaa0f,	// (0x0007d301) bg_heading_pane_cp02

0xea47,	// (0x00081339) wgtman_heading_pane_g1

0xea4f,	// (0x00081341) wgtman_heading_pane_t1

0xea5d,	// (0x0008134f) scroll_pane_cp036

0xea65,	// (0x00081357) wgtman_list_pane

0xea6d,	// (0x0008135f) wgtman_list_pane_t1_ParamLimits

0xea6d,	// (0x0008135f) wgtman_list_pane_t1

0xeddd,	// (0x000816cf) cam4_grid_pane

0x0fb3,	// (0x000738a5) bg_button_pane_cp015_ParamLimits

0x8b79,	// (0x0007b46b) bg_button_pane_cp016_ParamLimits

0x8b8c,	// (0x0007b47e) bg_button_pane_cp017_ParamLimits

0x0ff9,	// (0x000738eb) popup_vitu2_query_window_g3_ParamLimits

0x0ff9,	// (0x000738eb) popup_vitu2_query_window_g3

0x1074,	// (0x00073966) popup_vitu2_query_window_t6_ParamLimits

0x1074,	// (0x00073966) popup_vitu2_query_window_t6

0x109f,	// (0x00073991) popup_vitu2_query_window_t7_ParamLimits

0x109f,	// (0x00073991) popup_vitu2_query_window_t7

0xcc1a,	// (0x0007f50c) cam4_grid_pane_g1

0xcc23,	// (0x0007f515) cam4_grid_pane_g2

0xea87,	// (0x00081379) cam4_grid_pane_g3

0xea90,	// (0x00081382) cam4_grid_pane_g4

0x0003,

0xff3f,	// (0x00082831) cam4_grid_pane_g

0x2ffc,	// (0x000758ee) aid_placing_vt_slider_lsc_ParamLimits

0x3355,	// (0x00075c47) vidtel_button_pane_ParamLimits

0x3355,	// (0x00075c47) vidtel_button_pane

0xaa0f,	// (0x0007d301) bg_button_pane_cp034

0xaa07,	// (0x0007d2f9) vidtel_button_pane_g1

0xea9b,	// (0x0008138d) vidtel_button_pane_t1

0xcf17,	// (0x0007f809) aid_size_vtel_slider_touch

0xcff8,	// (0x0007f8ea) scroll_pane_cp039

0xd869,	// (0x0008015b) ncim_query_button_pane_cp01_ParamLimits

0xd888,	// (0x0008017a) ncimui_query_pane_g1_ParamLimits

0x19ac,	// (0x0007429e) input_focus_pane_cp012_ParamLimits

0xd8ad,	// (0x0008019f) ncim_query_entry_pane_t1_ParamLimits

0xcff8,	// (0x0007f8ea) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
