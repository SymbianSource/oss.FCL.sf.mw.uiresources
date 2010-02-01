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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000d849 };

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
0x0d6b,	// (0x0000e5b4) Screen

0x0d77,	// (0x0000e5c0) application_window

0x0db3,	// (0x0000e5fc) area_bottom_pane_ParamLimits

0x0db3,	// (0x0000e5fc) area_bottom_pane

0x0dec,	// (0x0000e635) area_top_pane_ParamLimits

0x0dec,	// (0x0000e635) area_top_pane

0x950c,	// (0x00016d55) call_video_uplink_pane_ParamLimits

0x950c,	// (0x00016d55) call_video_uplink_pane

0x0e61,	// (0x0000e6aa) main_pane_ParamLimits

0x0e61,	// (0x0000e6aa) main_pane

0xbf3c,	// (0x00019785) context_pane

0x3ea0,	// (0x000116e9) navi_pane

0x3ec8,	// (0x00011711) popup_cale_events_window_ParamLimits

0x3ec8,	// (0x00011711) popup_cale_events_window

0xbf4f,	// (0x00019798) popup_mup_playback_window

0x3ee0,	// (0x00011729) signal_pane

0x9c9f,	// (0x000174e8) main_browser_pane

0xaa32,	// (0x0001827b) main_burst_pane

0x3bf2,	// (0x0001143b) main_calc_pane

0xaa32,	// (0x0001827b) main_cale_day_pane

0x9c9f,	// (0x000174e8) main_cale_month_pane

0xaa32,	// (0x0001827b) main_cale_week_pane

0xaa32,	// (0x0001827b) main_call_pane

0x994b,	// (0x00017194) main_call_poc_pane

0xaa32,	// (0x0001827b) main_camera_pane

0xaa32,	// (0x0001827b) main_chi_dic_pane

0xa8b7,	// (0x00018100) main_clock_pane

0x994b,	// (0x00017194) main_fmradio_pane

0xaa32,	// (0x0001827b) main_graph_messa_pane

0x994b,	// (0x00017194) main_help_pane

0x9c9f,	// (0x000174e8) main_im_pane

0x9ba6,	// (0x000173ef) main_image_pane_ParamLimits

0x9ba6,	// (0x000173ef) main_image_pane

0x994b,	// (0x00017194) main_location2_pane

0xaa32,	// (0x0001827b) main_location_pane

0x994b,	// (0x00017194) main_messa_pane

0x994b,	// (0x00017194) main_mp2_pane

0xaa32,	// (0x0001827b) main_mp_pane

0x994b,	// (0x00017194) main_msg_pane

0x994b,	// (0x00017194) main_mup_eq_pane

0x994b,	// (0x00017194) main_mup_pane

0xaa32,	// (0x0001827b) main_notes_pane

0x994b,	// (0x00017194) main_pec_pane

0x994b,	// (0x00017194) main_phob_pane

0x994b,	// (0x00017194) main_pinb_pane

0x994b,	// (0x00017194) main_postcard_pane

0x994b,	// (0x00017194) main_qdial_pane

0xaa32,	// (0x0001827b) main_skin_pane

0x994b,	// (0x00017194) main_smil2_pane

0xaa32,	// (0x0001827b) main_smil_pane

0xaa32,	// (0x0001827b) main_video_pane

0xaa32,	// (0x0001827b) main_video_tele_pane

0x9ba6,	// (0x000173ef) main_viewer_pane_ParamLimits

0x9ba6,	// (0x000173ef) main_viewer_pane

0xaa32,	// (0x0001827b) main_vorec_pane

0x3c46,	// (0x0001148f) popup_blid_sat_info_window_ParamLimits

0x3c46,	// (0x0001148f) popup_blid_sat_info_window

0x3c9e,	// (0x000114e7) popup_dyc_status_message_window_ParamLimits

0x3c9e,	// (0x000114e7) popup_dyc_status_message_window

0x3cb8,	// (0x00011501) popup_grid_large_graphic_window_ParamLimits

0x3cb8,	// (0x00011501) popup_grid_large_graphic_window

0x3d74,	// (0x000115bd) popup_loc_request_window_ParamLimits

0x3d74,	// (0x000115bd) popup_loc_request_window

0x3e78,	// (0x000116c1) popup_wml_address_window_ParamLimits

0x3e78,	// (0x000116c1) popup_wml_address_window

0x3a2c,	// (0x00011275) call_muted_g1

0x36e1,	// (0x00010f2a) popup_call_audio_conf_window_ParamLimits

0x36e1,	// (0x00010f2a) popup_call_audio_conf_window

0x3a40,	// (0x00011289) popup_call_audio_first_window_ParamLimits

0x3a40,	// (0x00011289) popup_call_audio_first_window

0x3ab6,	// (0x000112ff) popup_call_audio_in_window_ParamLimits

0x3ab6,	// (0x000112ff) popup_call_audio_in_window

0x3af2,	// (0x0001133b) popup_call_audio_out_window_ParamLimits

0x3af2,	// (0x0001133b) popup_call_audio_out_window

0x3b2c,	// (0x00011375) popup_call_audio_second_window_ParamLimits

0x3b2c,	// (0x00011375) popup_call_audio_second_window

0x3b82,	// (0x000113cb) popup_call_audio_wait_window_ParamLimits

0x3b82,	// (0x000113cb) popup_call_audio_wait_window

0x3bb7,	// (0x00011400) popup_number_entry_window_ParamLimits

0x3bb7,	// (0x00011400) popup_number_entry_window

0x9538,	// (0x00016d81) bg_popup_call_pane_cp05_ParamLimits

0x9538,	// (0x00016d81) bg_popup_call_pane_cp05

0x9558,	// (0x00016da1) popup_number_entry_window_t1

0x956b,	// (0x00016db4) popup_number_entry_window_t2

0x957d,	// (0x00016dc6) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001c935) popup_number_entry_window_t

0x958f,	// (0x00016dd8) text_title_cp2

0x95a2,	// (0x00016deb) bg_popup_call_pane_cp_ParamLimits

0x95a2,	// (0x00016deb) bg_popup_call_pane_cp

0x95b0,	// (0x00016df9) call_thumbnail_pane

0x95b8,	// (0x00016e01) popup_call_audio_in_window_g1_ParamLimits

0x95b8,	// (0x00016e01) popup_call_audio_in_window_g1

0x95c4,	// (0x00016e0d) popup_call_audio_in_window_g2_ParamLimits

0x95c4,	// (0x00016e0d) popup_call_audio_in_window_g2

0x95d0,	// (0x00016e19) popup_call_audio_in_window_g3_ParamLimits

0x95d0,	// (0x00016e19) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001c93e) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001c93e) popup_call_audio_in_window_g

0x95dc,	// (0x00016e25) popup_call_audio_in_window_t1_ParamLimits

0x95dc,	// (0x00016e25) popup_call_audio_in_window_t1

0x95f8,	// (0x00016e41) popup_call_audio_in_window_t2_ParamLimits

0x95f8,	// (0x00016e41) popup_call_audio_in_window_t2

0x9614,	// (0x00016e5d) popup_call_audio_in_window_t3_ParamLimits

0x9614,	// (0x00016e5d) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001c945) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001c945) popup_call_audio_in_window_t

0x95a2,	// (0x00016deb) bg_popup_call_pane_cp01_ParamLimits

0x95a2,	// (0x00016deb) bg_popup_call_pane_cp01

0x95b0,	// (0x00016df9) call_thumbnail_pane_cp02

0x9627,	// (0x00016e70) call_type_pane_cp022

0x962f,	// (0x00016e78) popup_call_audio_out_window_g1_ParamLimits

0x962f,	// (0x00016e78) popup_call_audio_out_window_g1

0x9641,	// (0x00016e8a) popup_call_audio_out_window_g2_ParamLimits

0x9641,	// (0x00016e8a) popup_call_audio_out_window_g2

0x964d,	// (0x00016e96) popup_call_audio_out_window_g3_ParamLimits

0x964d,	// (0x00016e96) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001c94c) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001c94c) popup_call_audio_out_window_g

0x965f,	// (0x00016ea8) popup_call_audio_out_window_t1_ParamLimits

0x965f,	// (0x00016ea8) popup_call_audio_out_window_t1

0x9677,	// (0x00016ec0) popup_call_audio_out_window_t2_ParamLimits

0x9677,	// (0x00016ec0) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001c953) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001c953) popup_call_audio_out_window_t

0x968c,	// (0x00016ed5) bg_popup_call_pane_ParamLimits

0x968c,	// (0x00016ed5) bg_popup_call_pane

0x100b,	// (0x0000e854) call_thumbnail_pane_cp_ParamLimits

0x100b,	// (0x0000e854) call_thumbnail_pane_cp

0x9710,	// (0x00016f59) call_type_pane_cp01_ParamLimits

0x9710,	// (0x00016f59) call_type_pane_cp01

0x9754,	// (0x00016f9d) popup_call_audio_first_window_g1_ParamLimits

0x9754,	// (0x00016f9d) popup_call_audio_first_window_g1

0x97a0,	// (0x00016fe9) popup_call_audio_first_window_g2_ParamLimits

0x97a0,	// (0x00016fe9) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001c958) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001c958) popup_call_audio_first_window_g

0x97e4,	// (0x0001702d) popup_call_audio_first_window_t1_ParamLimits

0x97e4,	// (0x0001702d) popup_call_audio_first_window_t1

0x9890,	// (0x000170d9) popup_call_audio_first_window_t4_ParamLimits

0x9890,	// (0x000170d9) popup_call_audio_first_window_t4

0x991c,	// (0x00017165) popup_call_audio_first_window_t5_ParamLimits

0x991c,	// (0x00017165) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001c95d) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001c95d) popup_call_audio_first_window_t

0x994b,	// (0x00017194) bg_popup_call_pane_cp02

0x9955,	// (0x0001719e) call_type_pane_cp023

0x995d,	// (0x000171a6) popup_call_audio_wait_window_g1

0x9965,	// (0x000171ae) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001c964) popup_call_audio_wait_window_g

0x996d,	// (0x000171b6) popup_call_audio_wait_window_t3

0x997b,	// (0x000171c4) bg_popup_call_pane_cp03_ParamLimits

0x997b,	// (0x000171c4) bg_popup_call_pane_cp03

0x99db,	// (0x00017224) call_thumbnail_pane_cp011_ParamLimits

0x99db,	// (0x00017224) call_thumbnail_pane_cp011

0x99e7,	// (0x00017230) call_type_pane_cp034_ParamLimits

0x99e7,	// (0x00017230) call_type_pane_cp034

0x9a23,	// (0x0001726c) popup_call_audio_second_window_g1_ParamLimits

0x9a23,	// (0x0001726c) popup_call_audio_second_window_g1

0x9a5f,	// (0x000172a8) popup_call_audio_second_window_g2_ParamLimits

0x9a5f,	// (0x000172a8) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001c969) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001c969) popup_call_audio_second_window_g

0x9a9b,	// (0x000172e4) popup_call_audio_second_window_t1_ParamLimits

0x9a9b,	// (0x000172e4) popup_call_audio_second_window_t1

0x9b1c,	// (0x00017365) popup_call_audio_second_window_t2_ParamLimits

0x9b1c,	// (0x00017365) popup_call_audio_second_window_t2

0x9b52,	// (0x0001739b) popup_call_audio_second_window_t3_ParamLimits

0x9b52,	// (0x0001739b) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001c96e) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001c96e) popup_call_audio_second_window_t

0x994b,	// (0x00017194) bg_popup_call_pane_cp04

0x9b88,	// (0x000173d1) list_conf_pane

0x9b90,	// (0x000173d9) popup_call_audio_conf_window_t1

0x9b9e,	// (0x000173e7) call_thumbnail_pane_g1

0x9ba6,	// (0x000173ef) bg_pinb_pane_ParamLimits

0x9ba6,	// (0x000173ef) bg_pinb_pane

0x9bb4,	// (0x000173fd) find_pinb_pane

0x9bbd,	// (0x00017406) listscroll_pinb_pane_ParamLimits

0x9bbd,	// (0x00017406) listscroll_pinb_pane

0x9bcc,	// (0x00017415) pinb_bg_pane_g1

0x102f,	// (0x0000e878) pinb_bg_pane_g2

0x103b,	// (0x0000e884) pinb_bg_pane_g3

0x1047,	// (0x0000e890) pinb_bg_pane_g4

0x1053,	// (0x0000e89c) pinb_bg_pane_g5

0x105f,	// (0x0000e8a8) pinb_bg_pane_g6

0x106a,	// (0x0000e8b3) pinb_bg_pane_g7

0x1075,	// (0x0000e8be) pinb_bg_pane_g8

0x1080,	// (0x0000e8c9) pinb_bg_pane_g9

0x108a,	// (0x0000e8d3) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001c975) pinb_bg_pane_g

0x10a7,	// (0x0000e8f0) grid_pinb_pane

0x10b0,	// (0x0000e8f9) list_pinb_pane

0x10b9,	// (0x0000e902) scroll_pane_cp01_ParamLimits

0x10b9,	// (0x0000e902) scroll_pane_cp01

0x9bd6,	// (0x0001741f) find_pinb_pane_g1_ParamLimits

0x9bd6,	// (0x0001741f) find_pinb_pane_g1

0x9bee,	// (0x00017437) find_pinb_pane_t1

0x9c00,	// (0x00017449) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001c98f) find_pinb_pane_t

0x9c15,	// (0x0001745e) input_focus_pane_cp01_ParamLimits

0x9c15,	// (0x0001745e) input_focus_pane_cp01

0x10cb,	// (0x0000e914) cell_pinb_pane_ParamLimits

0x10cb,	// (0x0000e914) cell_pinb_pane

0x10f4,	// (0x0000e93d) cell_pinb_pane_g1_ParamLimits

0x10f4,	// (0x0000e93d) cell_pinb_pane_g1

0x1104,	// (0x0000e94d) cell_pinb_pane_g2_ParamLimits

0x1104,	// (0x0000e94d) cell_pinb_pane_g2

0x9c21,	// (0x0001746a) cell_pinb_pane_g3_ParamLimits

0x9c21,	// (0x0001746a) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001c994) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001c994) cell_pinb_pane_g

0x994b,	// (0x00017194) grid_highlight_pane_cp01

0x1110,	// (0x0000e959) list_pinb_item_pane_ParamLimits

0x1110,	// (0x0000e959) list_pinb_item_pane

0x994b,	// (0x00017194) list_highlight_pane_cp02

0x1122,	// (0x0000e96b) list_pinb_item_pane_g1_ParamLimits

0x1122,	// (0x0000e96b) list_pinb_item_pane_g1

0x9c2d,	// (0x00017476) list_pinb_item_pane_g2_ParamLimits

0x9c2d,	// (0x00017476) list_pinb_item_pane_g2

0x112f,	// (0x0000e978) list_pinb_item_pane_g3_ParamLimits

0x112f,	// (0x0000e978) list_pinb_item_pane_g3

0x1140,	// (0x0000e989) list_pinb_item_pane_g4_ParamLimits

0x1140,	// (0x0000e989) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001c99b) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001c99b) list_pinb_item_pane_g

0x114c,	// (0x0000e995) list_pinb_item_pane_t1_ParamLimits

0x114c,	// (0x0000e995) list_pinb_item_pane_t1

0x1181,	// (0x0000e9ca) calc_display_pane

0x11a9,	// (0x0000e9f2) calc_paper_pane

0x11cc,	// (0x0000ea15) grid_calc_pane

0x994b,	// (0x00017194) bg_list_pane_cp01

0x11f6,	// (0x0000ea3f) clock_g1

0x11fe,	// (0x0000ea47) clock_g2

0x0001,

0xf15b,	// (0x0001c9a4) clock_g

0x1206,	// (0x0000ea4f) clock_t1_ParamLimits

0x1206,	// (0x0000ea4f) clock_t1

0x121b,	// (0x0000ea64) clock_t2_ParamLimits

0x121b,	// (0x0000ea64) clock_t2

0x122d,	// (0x0000ea76) clock_t3_ParamLimits

0x122d,	// (0x0000ea76) clock_t3

0x123f,	// (0x0000ea88) clock_t4_ParamLimits

0x123f,	// (0x0000ea88) clock_t4

0x1251,	// (0x0000ea9a) clock_t5_ParamLimits

0x1251,	// (0x0000ea9a) clock_t5

0x1266,	// (0x0000eaaf) clock_t6_ParamLimits

0x1266,	// (0x0000eaaf) clock_t6

0x1278,	// (0x0000eac1) clock_t7_ParamLimits

0x1278,	// (0x0000eac1) clock_t7

0x128a,	// (0x0000ead3) clock_t8_ParamLimits

0x128a,	// (0x0000ead3) clock_t8

0x129e,	// (0x0000eae7) clock_t9_ParamLimits

0x129e,	// (0x0000eae7) clock_t9

0x0008,

0xf160,	// (0x0001c9a9) clock_t_ParamLimits

0xf160,	// (0x0001c9a9) clock_t

0x9c41,	// (0x0001748a) popup_clock_analogue_window_cp02

0x9c41,	// (0x0001748a) popup_clock_digital_window_cp01

0x9c49,	// (0x00017492) listscroll_help_pane

0x994b,	// (0x00017194) phob_pre_status_pane

0x9c53,	// (0x0001749c) grid_qdial_pane

0x994b,	// (0x00017194) listscroll_mce_pane

0x9c5d,	// (0x000174a6) bg_notes_pane

0x9c67,	// (0x000174b0) list_notes_pane

0x12b2,	// (0x0000eafb) scroll_pane_cp06

0x9c71,	// (0x000174ba) bg_calc_paper_pane

0x9c85,	// (0x000174ce) list_calc_pane

0x9c9f,	// (0x000174e8) bg_calc_display_pane

0x12bd,	// (0x0000eb06) calc_display_pane_t1

0x12cf,	// (0x0000eb18) calc_display_pane_t2

0x9cab,	// (0x000174f4) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001c9bc) calc_display_pane_t

0x12e1,	// (0x0000eb2a) cell_calc_pane_ParamLimits

0x12e1,	// (0x0000eb2a) cell_calc_pane

0x9cbd,	// (0x00017506) bg_calc_paper_pane_g1

0x9cc9,	// (0x00017512) bg_calc_paper_pane_g2

0x9cd5,	// (0x0001751e) bg_calc_paper_pane_g3

0x9ce1,	// (0x0001752a) bg_calc_paper_pane_g4

0x9ced,	// (0x00017536) bg_calc_paper_pane_g5

0x1316,	// (0x0000eb5f) bg_calc_paper_pane_g6

0x1325,	// (0x0000eb6e) bg_calc_paper_pane_g7

0x1334,	// (0x0000eb7d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001c9c3) bg_calc_paper_pane_g

0x1347,	// (0x0000eb90) calc_bg_paper_pane_g9

0x135a,	// (0x0000eba3) list_calc_item_pane_ParamLimits

0x135a,	// (0x0000eba3) list_calc_item_pane

0x9cf9,	// (0x00017542) list_calc_item_pane_g1

0x9d06,	// (0x0001754f) list_calc_item_pane_t1_ParamLimits

0x9d06,	// (0x0001754f) list_calc_item_pane_t1

0x136d,	// (0x0000ebb6) list_calc_item_pane_t2_ParamLimits

0x136d,	// (0x0000ebb6) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001c9d4) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001c9d4) list_calc_item_pane_t

0x9d18,	// (0x00017561) cell_calc_pane_g1

0x9d22,	// (0x0001756b) grid_highlight_pane_cp02

0x139f,	// (0x0000ebe8) bg_calc_display_pane_g1

0x13a8,	// (0x0000ebf1) bg_calc_display_pane_g2

0x13b2,	// (0x0000ebfb) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001c9de) bg_calc_display_pane_g

0x13bb,	// (0x0000ec04) cell_qdial_pane_ParamLimits

0x13bb,	// (0x0000ec04) cell_qdial_pane

0x13cf,	// (0x0000ec18) cell_qdial_pane_g1_ParamLimits

0x13cf,	// (0x0000ec18) cell_qdial_pane_g1

0x13e5,	// (0x0000ec2e) cell_qdial_pane_g2_ParamLimits

0x13e5,	// (0x0000ec2e) cell_qdial_pane_g2

0x9d44,	// (0x0001758d) cell_qdial_pane_g3_ParamLimits

0x9d44,	// (0x0001758d) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001c9e5) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001c9e5) cell_qdial_pane_g

0x140c,	// (0x0000ec55) cell_qdial_pane_t1_ParamLimits

0x140c,	// (0x0000ec55) cell_qdial_pane_t1

0x1424,	// (0x0000ec6d) cell_qdial_pane_t2_ParamLimits

0x1424,	// (0x0000ec6d) cell_qdial_pane_t2

0x1437,	// (0x0000ec80) cell_qdial_pane_t3_ParamLimits

0x1437,	// (0x0000ec80) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001c9ee) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001c9ee) cell_qdial_pane_t

0x994b,	// (0x00017194) grid_highlight_pane_cp04

0x9d50,	// (0x00017599) thumbnail_qdial_pane_ParamLimits

0x9d50,	// (0x00017599) thumbnail_qdial_pane

0x9dac,	// (0x000175f5) list_help_pane

0x9db5,	// (0x000175fe) scroll_pane_cp02

0x144a,	// (0x0000ec93) help_list_pane_t1_ParamLimits

0x144a,	// (0x0000ec93) help_list_pane_t1

0x9dbe,	// (0x00017607) bg_notes_pane_g2

0x9dc6,	// (0x0001760f) bg_notes_pane_g3

0x9dce,	// (0x00017617) notes_bg_pane_g1

0x9dd6,	// (0x0001761f) notes_bg_pane_g4

0x9dde,	// (0x00017627) notes_bg_pane_g5

0x9de6,	// (0x0001762f) notes_bg_pane_g6

0x9dee,	// (0x00017637) notes_bg_pane_g7

0x9df6,	// (0x0001763f) notes_bg_pane_g8

0x9dfe,	// (0x00017647) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001ca0c) notes_bg_pane_g

0x1467,	// (0x0000ecb0) list_notes_text_pane_ParamLimits

0x1467,	// (0x0000ecb0) list_notes_text_pane

0x9e06,	// (0x0001764f) list_notes_text_pane_g1

0x147c,	// (0x0000ecc5) list_notes_text_pane_t1

0x9c9f,	// (0x000174e8) listscroll_cale_week_pane

0x14a7,	// (0x0000ecf0) bg_cale_heading_pane

0x9e20,	// (0x00017669) bg_cale_pane_cp01

0x14bb,	// (0x0000ed04) cale_week_corner_pane

0x14d1,	// (0x0000ed1a) cale_week_day_heading_pane

0x14e5,	// (0x0000ed2e) cale_week_scroll_pane_g1

0x14f6,	// (0x0000ed3f) cale_week_scroll_pane_g2

0x1507,	// (0x0000ed50) cale_week_scroll_pane_g3

0x1518,	// (0x0000ed61) cale_week_scroll_pane_g4

0x1529,	// (0x0000ed72) cale_week_scroll_pane_g5

0x153c,	// (0x0000ed85) cale_week_scroll_pane_g6

0x154f,	// (0x0000ed98) cale_week_scroll_pane_g7

0x1562,	// (0x0000edab) cale_week_scroll_pane_g8

0x1575,	// (0x0000edbe) cale_week_scroll_pane_g9

0x1586,	// (0x0000edcf) cale_week_scroll_pane_g10

0x1597,	// (0x0000ede0) cale_week_scroll_pane_g11

0x15a8,	// (0x0000edf1) cale_week_scroll_pane_g12

0x15b9,	// (0x0000ee02) cale_week_scroll_pane_g13

0x15ca,	// (0x0000ee13) cale_week_scroll_pane_g14

0x15db,	// (0x0000ee24) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001ca1b) cale_week_scroll_pane_g

0x15ec,	// (0x0000ee35) cale_week_time_pane

0x15ff,	// (0x0000ee48) grid_cale_week_pane

0x1614,	// (0x0000ee5d) scroll_pane_cp08

0x162e,	// (0x0000ee77) cell_cale_week_pane_ParamLimits

0x162e,	// (0x0000ee77) cell_cale_week_pane

0x166e,	// (0x0000eeb7) cale_week_day_heading_pane_t1

0x169b,	// (0x0000eee4) cale_week_day_heading_pane_t2

0x16c8,	// (0x0000ef11) cale_week_day_heading_pane_t3

0x16f5,	// (0x0000ef3e) cale_week_day_heading_pane_t4

0x1722,	// (0x0000ef6b) cale_week_day_heading_pane_t5

0x174f,	// (0x0000ef98) cale_week_day_heading_pane_t6

0x177e,	// (0x0000efc7) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001ca3a) cale_week_day_heading_pane_t

0x9e4b,	// (0x00017694) bg_cale_side_pane

0x17ab,	// (0x0000eff4) cale_week_time_pane_t1

0x17c3,	// (0x0000f00c) cale_week_time_pane_t2

0x17db,	// (0x0000f024) cale_week_time_pane_t3

0x17f3,	// (0x0000f03c) cale_week_time_pane_t4

0x180b,	// (0x0000f054) cale_week_time_pane_t5

0x1823,	// (0x0000f06c) cale_week_time_pane_t6

0x183b,	// (0x0000f084) cale_week_time_pane_t7

0x1853,	// (0x0000f09c) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001ca49) cale_week_time_pane_t

0x186b,	// (0x0000f0b4) cell_cale_week_pane_g2

0x1884,	// (0x0000f0cd) cell_cale_week_pane_g3_ParamLimits

0x1884,	// (0x0000f0cd) cell_cale_week_pane_g3

0x9e59,	// (0x000176a2) grid_highlight_pane_cp07

0x9e61,	// (0x000176aa) listscroll_gms_pane

0x9e6b,	// (0x000176b4) grid_gms_pane

0x9e74,	// (0x000176bd) listscroll_gms_pane_g1

0x9e7c,	// (0x000176c5) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001ca5a) listscroll_gms_pane_g

0x189c,	// (0x0000f0e5) scroll_pane_cp010

0x18a7,	// (0x0000f0f0) cell_gms_pane_ParamLimits

0x18a7,	// (0x0000f0f0) cell_gms_pane

0x18ba,	// (0x0000f103) cell_gms_pane_g1

0x9e84,	// (0x000176cd) cell_gms_pane_g2

0x9e8c,	// (0x000176d5) cell_gms_pane_g3

0x9e95,	// (0x000176de) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001ca5f) cell_gms_pane_g

0x9e9e,	// (0x000176e7) grid_highlight_pane_cp09

0x39d6,	// (0x0001121f) phob_pre_status_pane_g1

0x39de,	// (0x00011227) phob_pre_status_pane_g2

0x39e6,	// (0x0001122f) phob_pre_status_pane_g3

0x39ee,	// (0x00011237) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001ce4e) phob_pre_status_pane_g

0x39fe,	// (0x00011247) phob_pre_status_pane_t1

0x3a0c,	// (0x00011255) phob_pre_status_pane_t2

0x3a1c,	// (0x00011265) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001ce59) phob_pre_status_pane_t

0x994b,	// (0x00017194) bg_list_pane_cp05

0x18ca,	// (0x0000f113) grid_vorec_pane

0x9ea6,	// (0x000176ef) vorec_t1

0x9eb4,	// (0x000176fd) vorec_t2

0x9ec2,	// (0x0001770b) vorec_t3

0x9ed0,	// (0x00017719) vorec_t4

0x9ede,	// (0x00017727) vorec_t5

0x9eec,	// (0x00017735) vorec_t6

0x0006,

0xf21f,	// (0x0001ca68) vorec_t

0x9f08,	// (0x00017751) wait_bar_pane_cp01

0x18d2,	// (0x0000f11b) cell_vorec_pane_ParamLimits

0x18d2,	// (0x0000f11b) cell_vorec_pane

0x9f10,	// (0x00017759) cell_vorec_pane_g1

0x994b,	// (0x00017194) grid_highlight_pane_cp05

0x18fd,	// (0x0000f146) cams_zoom_pane

0x190c,	// (0x0000f155) image_vga_pane

0x1926,	// (0x0000f16f) main_camera_pane_g1

0x1938,	// (0x0000f181) main_camera_pane_g2

0x1948,	// (0x0000f191) main_camera_pane_g3

0x1958,	// (0x0000f1a1) main_camera_pane_g4

0x1968,	// (0x0000f1b1) main_camera_pane_g5

0x1978,	// (0x0000f1c1) main_camera_pane_g6

0x198a,	// (0x0000f1d3) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001ca77) main_camera_pane_g

0x199a,	// (0x0000f1e3) main_camera_pane_t1

0x19b0,	// (0x0000f1f9) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001ca88) main_camera_pane_t

0x19ea,	// (0x0000f233) cams_zoom_pane_cp_ParamLimits

0x19ea,	// (0x0000f233) cams_zoom_pane_cp

0x1a12,	// (0x0000f25b) image_cif_pane_ParamLimits

0x1a12,	// (0x0000f25b) image_cif_pane

0x1a4d,	// (0x0000f296) image_subqcif_pane

0x1a55,	// (0x0000f29e) main_video_pane_g1_ParamLimits

0x1a55,	// (0x0000f29e) main_video_pane_g1

0x1a79,	// (0x0000f2c2) main_video_pane_g2_ParamLimits

0x1a79,	// (0x0000f2c2) main_video_pane_g2

0x1aad,	// (0x0000f2f6) main_video_pane_g3_ParamLimits

0x1aad,	// (0x0000f2f6) main_video_pane_g3

0x1adb,	// (0x0000f324) main_video_pane_g4_ParamLimits

0x1adb,	// (0x0000f324) main_video_pane_g4

0x1b09,	// (0x0000f352) main_video_pane_g5_ParamLimits

0x1b09,	// (0x0000f352) main_video_pane_g5

0x9f26,	// (0x0001776f) main_video_pane_g6_ParamLimits

0x9f26,	// (0x0001776f) main_video_pane_g6

0x0006,

0xf244,	// (0x0001ca8d) main_video_pane_g_ParamLimits

0xf244,	// (0x0001ca8d) main_video_pane_g

0x1b36,	// (0x0000f37f) main_video_pane_t1_ParamLimits

0x1b36,	// (0x0000f37f) main_video_pane_t1

0x9f40,	// (0x00017789) cams_zoom_pane_g1

0x9f49,	// (0x00017792) cams_zoom_pane_g2

0x9f52,	// (0x0001779b) cams_zoom_pane_g3

0x9f5b,	// (0x000177a4) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001ca9c) cams_zoom_pane_g

0x1b93,	// (0x0000f3dc) grid_cams_pane

0x1bad,	// (0x0000f3f6) linegrid_cams_pane

0x1bc1,	// (0x0000f40a) cell_cams_pane_ParamLimits

0x1bc1,	// (0x0000f40a) cell_cams_pane

0x9f64,	// (0x000177ad) cams_burst_image_pane

0x9f6c,	// (0x000177b5) cell_cams_pane_g1

0x994b,	// (0x00017194) grid_highlight_pane_cp03

0x9d18,	// (0x00017561) mp_bg_pane_g1

0x994b,	// (0x00017194) bg_list_pane_cp03

0xbe14,	// (0x0001965d) bg_mp_pane

0xbe1c,	// (0x00019665) grid_mp_pane

0xbe24,	// (0x0001966d) media_player_g1

0xbe2c,	// (0x00019675) media_player_t1

0xbe3a,	// (0x00019683) media_player_t2

0xbe48,	// (0x00019691) media_player_t3

0xbe56,	// (0x0001969f) media_player_t4

0xbe64,	// (0x000196ad) media_player_t5

0xbe72,	// (0x000196bb) media_player_t6

0xbe80,	// (0x000196c9) media_player_t7

0x0006,

0xf5ef,	// (0x0001ce38) media_player_t

0xbe8e,	// (0x000196d7) wait_bar_pane_cp02

0xf5d4,	// (0x0001ce1d) main_usb_pane_t

0x39cd,	// (0x00011216) cell_mp_pane

0x9d18,	// (0x00017561) cell_mp_pane_g1

0x994b,	// (0x00017194) grid_highlight_pane_cp06

0xa014,	// (0x0001785d) grid_skin_colour_pane

0xa01c,	// (0x00017865) list_highlight_pane_cp03

0x1c33,	// (0x0000f47c) skin_g1

0xa024,	// (0x0001786d) skin_t1

0xa033,	// (0x0001787c) skin_t2

0x0001,

0xf288,	// (0x0001cad1) skin_t

0x1c3b,	// (0x0000f484) cell_skin_colour_pane_ParamLimits

0x1c3b,	// (0x0000f484) cell_skin_colour_pane

0xa041,	// (0x0001788a) cell_skin_colour_pane_g1

0x1cb2,	// (0x0000f4fb) call_video_g1_ParamLimits

0x1cb2,	// (0x0000f4fb) call_video_g1

0x1cce,	// (0x0000f517) call_video_g2_ParamLimits

0x1cce,	// (0x0000f517) call_video_g2

0x0001,

0xf28d,	// (0x0001cad6) call_video_g_ParamLimits

0xf28d,	// (0x0001cad6) call_video_g

0x1d20,	// (0x0000f569) call_video_uplink_pane_cp1_ParamLimits

0x1d20,	// (0x0000f569) call_video_uplink_pane_cp1

0xa053,	// (0x0001789c) call_video_uplink_pane_cp2

0x1dbf,	// (0x0000f608) video_down_crop_pane_ParamLimits

0x1dbf,	// (0x0000f608) video_down_crop_pane

0x1eb6,	// (0x0000f6ff) video_down_pane_ParamLimits

0x1eb6,	// (0x0000f6ff) video_down_pane

0xa05b,	// (0x000178a4) video_down_subqcif_pane_ParamLimits

0xa05b,	// (0x000178a4) video_down_subqcif_pane

0xa073,	// (0x000178bc) video_down_subqcif_pane_cp_ParamLimits

0xa073,	// (0x000178bc) video_down_subqcif_pane_cp

0xa097,	// (0x000178e0) im_reading_pane_ParamLimits

0xa097,	// (0x000178e0) im_reading_pane

0x1fc4,	// (0x0000f80d) im_writing_pane_ParamLimits

0x1fc4,	// (0x0000f80d) im_writing_pane

0x1fda,	// (0x0000f823) im_reading_pane_t1

0xa0b1,	// (0x000178fa) list_im_pane

0xa0c2,	// (0x0001790b) scroll_pane_cp07

0x2013,	// (0x0000f85c) im_writing_pane_t1_ParamLimits

0x2013,	// (0x0000f85c) im_writing_pane_t1

0xa0db,	// (0x00017924) im_writing_pane_t2_ParamLimits

0xa0db,	// (0x00017924) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cae0) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cae0) im_writing_pane_t

0x994b,	// (0x00017194) input_focus_pane_cp04

0x994b,	// (0x00017194) input_focus_pane_cp05

0x2028,	// (0x0000f871) list_im_single_pane_ParamLimits

0x2028,	// (0x0000f871) list_im_single_pane

0x203c,	// (0x0000f885) list_single_im_pane_t1

0x398d,	// (0x000111d6) blid_accuracy_pane

0x3995,	// (0x000111de) blid_compass_pane

0x399f,	// (0x000111e8) main_location_t1

0x39af,	// (0x000111f8) main_location_t2

0x39bf,	// (0x00011208) main_location_t3

0x0002,

0xf5fe,	// (0x0001ce47) main_location_t

0x994b,	// (0x00017194) aid_levels_location

0x9d18,	// (0x00017561) blid_accuracy_pane_g1

0x9d18,	// (0x00017561) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001cb42) blid_accuracy_pane_g

0xa123,	// (0x0001796c) wml_content_pane

0xa161,	// (0x000179aa) wml_button_pane_ParamLimits

0xa161,	// (0x000179aa) wml_button_pane

0x204b,	// (0x0000f894) wml_list_single_large_pane_ParamLimits

0x204b,	// (0x0000f894) wml_list_single_large_pane

0x2060,	// (0x0000f8a9) wml_list_single_medium_pane_ParamLimits

0x2060,	// (0x0000f8a9) wml_list_single_medium_pane

0x2076,	// (0x0000f8bf) wml_list_single_small_pane_ParamLimits

0x2076,	// (0x0000f8bf) wml_list_single_small_pane

0xa175,	// (0x000179be) wml_selection_box_pane_ParamLimits

0xa175,	// (0x000179be) wml_selection_box_pane

0xa188,	// (0x000179d1) wml_list_single_pane_t1

0xa197,	// (0x000179e0) wml_list_single_medium_pane_t1

0xa1a6,	// (0x000179ef) wml_list_single_large_pane_t1

0xa1b5,	// (0x000179fe) input_focus_pane_cp02_ParamLimits

0xa1b5,	// (0x000179fe) input_focus_pane_cp02

0xa1c8,	// (0x00017a11) wml_selection_box_pane_g1

0xa1d1,	// (0x00017a1a) wml_selection_box_pane_t1_ParamLimits

0xa1d1,	// (0x00017a1a) wml_selection_box_pane_t1

0x9ba6,	// (0x000173ef) bg_wml_button_pane_ParamLimits

0x9ba6,	// (0x000173ef) bg_wml_button_pane

0xa1e9,	// (0x00017a32) wml_button_pane_g1

0xa1f1,	// (0x00017a3a) wml_button_pane_t1

0xa1e9,	// (0x00017a32) wml_button_bg_pane_g1

0xa201,	// (0x00017a4a) wml_button_bg_pane_g2

0xa209,	// (0x00017a52) wml_button_bg_pane_g3

0xa211,	// (0x00017a5a) wml_button_bg_pane_g4

0xa219,	// (0x00017a62) wml_button_bg_pane_g5

0xa221,	// (0x00017a6a) wml_button_bg_pane_g6

0xa229,	// (0x00017a72) wml_button_bg_pane_g7

0xa231,	// (0x00017a7a) wml_button_bg_pane_g8

0xa239,	// (0x00017a82) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001cae5) wml_button_bg_pane_g

0x208e,	// (0x0000f8d7) bg_list_pane_cp02

0xa241,	// (0x00017a8a) mce_header_pane_ParamLimits

0xa241,	// (0x00017a8a) mce_header_pane

0xa257,	// (0x00017aa0) mce_icon_pane

0xa257,	// (0x00017aa0) mce_image_pane

0xa260,	// (0x00017aa9) mce_text_pane_ParamLimits

0xa260,	// (0x00017aa9) mce_text_pane

0x2096,	// (0x0000f8df) scroll_pane_cp03

0xa159,	// (0x000179a2) scroll_pane_cp04

0xa273,	// (0x00017abc) scroll_pane_cp05_ParamLimits

0xa273,	// (0x00017abc) scroll_pane_cp05

0x20a0,	// (0x0000f8e9) mce_header_field_pane_ParamLimits

0x20a0,	// (0x0000f8e9) mce_header_field_pane

0x20b7,	// (0x0000f900) mce_header_field_pane_2_ParamLimits

0x20b7,	// (0x0000f900) mce_header_field_pane_2

0x20cd,	// (0x0000f916) mce_header_field_pane_3

0x20d5,	// (0x0000f91e) list_single_mce_message_pane_ParamLimits

0x20d5,	// (0x0000f91e) list_single_mce_message_pane

0x20ea,	// (0x0000f933) list_single_mce_smart_pane_ParamLimits

0x20ea,	// (0x0000f933) list_single_mce_smart_pane

0xa27f,	// (0x00017ac8) input_focus_pane_cp03

0xa288,	// (0x00017ad1) list_header_data_pane

0x210a,	// (0x0000f953) mce_header_field_pane_t1

0x211a,	// (0x0000f963) list_single_mce_header_pane_ParamLimits

0x211a,	// (0x0000f963) list_single_mce_header_pane

0xa290,	// (0x00017ad9) list_single_mce_header_pane_t1

0xa29f,	// (0x00017ae8) list_single_mce_message_pane_g1

0xa2a7,	// (0x00017af0) list_single_mce_message_pane_t1

0x214c,	// (0x0000f995) bg_cale_heading_pane_cp01_ParamLimits

0x214c,	// (0x0000f995) bg_cale_heading_pane_cp01

0xa2b5,	// (0x00017afe) bg_cale_pane_cp02_ParamLimits

0xa2b5,	// (0x00017afe) bg_cale_pane_cp02

0x216f,	// (0x0000f9b8) cale_month_corner_pane

0x2185,	// (0x0000f9ce) cale_month_day_heading_pane_ParamLimits

0x2185,	// (0x0000f9ce) cale_month_day_heading_pane

0x21b8,	// (0x0000fa01) cale_month_pane_g1_ParamLimits

0x21b8,	// (0x0000fa01) cale_month_pane_g1

0x21d4,	// (0x0000fa1d) cale_month_pane_g2_ParamLimits

0x21d4,	// (0x0000fa1d) cale_month_pane_g2

0x21ef,	// (0x0000fa38) cale_month_pane_g3_ParamLimits

0x21ef,	// (0x0000fa38) cale_month_pane_g3

0x221b,	// (0x0000fa64) cale_month_pane_g4_ParamLimits

0x221b,	// (0x0000fa64) cale_month_pane_g4

0x2247,	// (0x0000fa90) cale_month_pane_g5_ParamLimits

0x2247,	// (0x0000fa90) cale_month_pane_g5

0x227b,	// (0x0000fac4) cale_month_pane_g6_ParamLimits

0x227b,	// (0x0000fac4) cale_month_pane_g6

0x22b7,	// (0x0000fb00) cale_month_pane_g7_ParamLimits

0x22b7,	// (0x0000fb00) cale_month_pane_g7

0x22f3,	// (0x0000fb3c) cale_month_pane_g8_ParamLimits

0x22f3,	// (0x0000fb3c) cale_month_pane_g8

0x232f,	// (0x0000fb78) cale_month_pane_g9_ParamLimits

0x232f,	// (0x0000fb78) cale_month_pane_g9

0x2369,	// (0x0000fbb2) cale_month_pane_g10_ParamLimits

0x2369,	// (0x0000fbb2) cale_month_pane_g10

0x23a3,	// (0x0000fbec) cale_month_pane_g11_ParamLimits

0x23a3,	// (0x0000fbec) cale_month_pane_g11

0x23dd,	// (0x0000fc26) cale_month_pane_g12_ParamLimits

0x23dd,	// (0x0000fc26) cale_month_pane_g12

0x2417,	// (0x0000fc60) cale_month_pane_g13_ParamLimits

0x2417,	// (0x0000fc60) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001caf8) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001caf8) cale_month_pane_g

0x2451,	// (0x0000fc9a) cale_month_week_pane

0x2464,	// (0x0000fcad) grid_cale_month_pane_ParamLimits

0x2464,	// (0x0000fcad) grid_cale_month_pane

0x2492,	// (0x0000fcdb) cale_month_day_heading_pane_t1

0x24f0,	// (0x0000fd39) cale_month_day_heading_pane_t2

0x2555,	// (0x0000fd9e) cale_month_day_heading_pane_t3

0x25ba,	// (0x0000fe03) cale_month_day_heading_pane_t4

0x261f,	// (0x0000fe68) cale_month_day_heading_pane_t5

0x2694,	// (0x0000fedd) cale_month_day_heading_pane_t6

0x2709,	// (0x0000ff52) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cb13) cale_month_day_heading_pane_t

0x9e4b,	// (0x00017694) bg_cale_side_pane_cp01

0x277e,	// (0x0000ffc7) cale_month_week_pane_t1

0x2795,	// (0x0000ffde) cale_month_week_pane_t2

0x27ac,	// (0x0000fff5) cale_month_week_pane_t3

0x27c3,	// (0x0001000c) cale_month_week_pane_t4

0x27da,	// (0x00010023) cale_month_week_pane_t5

0x27f1,	// (0x0001003a) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001cb22) cale_month_week_pane_t

0x2808,	// (0x00010051) cell_cale_month_pane_ParamLimits

0x2808,	// (0x00010051) cell_cale_month_pane

0xa314,	// (0x00017b5d) cell_cale_month_pane_g1

0x28de,	// (0x00010127) cell_cale_month_pane_t1_ParamLimits

0x28de,	// (0x00010127) cell_cale_month_pane_t1

0x9e59,	// (0x000176a2) grid_highlight_pane_cp08

0x9d18,	// (0x00017561) main_smil_g1

0x28fa,	// (0x00010143) smil_status_pane

0xa320,	// (0x00017b69) smil_text_pane

0xbd34,	// (0x0001957d) bg_popup_call3_rect_pane_g8

0xbd3c,	// (0x00019585) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001cddb) bg_popup_call3_rect_pane_g

0xbfb6,	// (0x000197ff) smil_status_volume_pane_g1

0xa32a,	// (0x00017b73) smil_status_pane_t1

0xbfe9,	// (0x00019832) volume_smil_pane

0xa341,	// (0x00017b8a) list_smil_text_pane

0x290d,	// (0x00010156) scroll_pane_cp011

0x2918,	// (0x00010161) smil_text_list_pane_t1_ParamLimits

0x2918,	// (0x00010161) smil_text_list_pane_t1

0xa34b,	// (0x00017b94) aid_volume_smil_ParamLimits

0xa34b,	// (0x00017b94) aid_volume_smil

0x9d18,	// (0x00017561) smil_volume_pane_g1

0x9d18,	// (0x00017561) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001cb42) smil_volume_pane_g

0x9c9f,	// (0x000174e8) listscroll_cale_day_pane

0xa36d,	// (0x00017bb6) bg_cale_pane

0xa385,	// (0x00017bce) list_cale_pane

0xa396,	// (0x00017bdf) scroll_pane_cp09

0xa3a7,	// (0x00017bf0) cale_bg_pane_g1

0xa3af,	// (0x00017bf8) cale_bg_pane_g2

0xa3b7,	// (0x00017c00) cale_bg_pane_g3

0xa3bf,	// (0x00017c08) cale_bg_pane_g4

0xa3c7,	// (0x00017c10) cale_bg_pane_g5

0xa3cf,	// (0x00017c18) cale_bg_pane_g6

0xa3d7,	// (0x00017c20) cale_bg_pane_g7

0xa3df,	// (0x00017c28) cale_bg_pane_g8

0xa3e7,	// (0x00017c30) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001cb47) cale_bg_pane_g

0x18d2,	// (0x0000f11b) list_cale_time_pane_ParamLimits

0x18d2,	// (0x0000f11b) list_cale_time_pane

0xa3ef,	// (0x00017c38) list_cale_time_pane_g1_ParamLimits

0xa3ef,	// (0x00017c38) list_cale_time_pane_g1

0xa3fb,	// (0x00017c44) list_cale_time_pane_g2_ParamLimits

0xa3fb,	// (0x00017c44) list_cale_time_pane_g2

0x295e,	// (0x000101a7) list_cale_time_pane_g3_ParamLimits

0x295e,	// (0x000101a7) list_cale_time_pane_g3

0x296c,	// (0x000101b5) list_cale_time_pane_g4_ParamLimits

0x296c,	// (0x000101b5) list_cale_time_pane_g4

0x297a,	// (0x000101c3) list_cale_time_pane_g5_ParamLimits

0x297a,	// (0x000101c3) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001cb5a) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001cb5a) list_cale_time_pane_g

0xa415,	// (0x00017c5e) list_cale_time_pane_t1_ParamLimits

0xa415,	// (0x00017c5e) list_cale_time_pane_t1

0xa43d,	// (0x00017c86) list_cale_time_pane_t2_ParamLimits

0xa43d,	// (0x00017c86) list_cale_time_pane_t2

0x2c76,	// (0x000104bf) aid_blid_cardinal_pane

0x2cb4,	// (0x000104fd) compass_pane_t4

0xa465,	// (0x00017cae) list_cale_time_pane_t4_ParamLimits

0xa465,	// (0x00017cae) list_cale_time_pane_t4

0x2cc2,	// (0x0001050b) compass_pane_t5

0x2cd0,	// (0x00010519) compass_pane_t6

0x2cde,	// (0x00010527) compass_pane_t7

0xa984,	// (0x000181cd) navi_pane_cc_t1

0xaaeb,	// (0x00018334) aid_phob_thumbnail_center_pane

0x33a5,	// (0x00010bee) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001cb67) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001cb67) list_cale_time_pane_t

0x95a2,	// (0x00016deb) bg_popup_window_pane_cp02_ParamLimits

0x95a2,	// (0x00016deb) bg_popup_window_pane_cp02

0xa48d,	// (0x00017cd6) heading_pane_cp01_ParamLimits

0xa48d,	// (0x00017cd6) heading_pane_cp01

0xa499,	// (0x00017ce2) loc_req_pane_ParamLimits

0xa499,	// (0x00017ce2) loc_req_pane

0xa4a9,	// (0x00017cf2) loc_type_pane_ParamLimits

0xa4a9,	// (0x00017cf2) loc_type_pane

0xa4bb,	// (0x00017d04) loc_type_pane_t1_ParamLimits

0xa4bb,	// (0x00017d04) loc_type_pane_t1

0xa4cd,	// (0x00017d16) loc_type_pane_t2_ParamLimits

0xa4cd,	// (0x00017d16) loc_type_pane_t2

0xa4df,	// (0x00017d28) loc_type_pane_t3_ParamLimits

0xa4df,	// (0x00017d28) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001cb6e) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001cb6e) loc_type_pane_t

0xa4f1,	// (0x00017d3a) list_loc_req_pane

0xa4fb,	// (0x00017d44) scroll_pane_cp012

0x2988,	// (0x000101d1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2988,	// (0x000101d1) list_single_loc_request_popup_menu_pane

0xa506,	// (0x00017d4f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa506,	// (0x00017d4f) list_single_loc_request_popup_menu_pane_g1

0xa512,	// (0x00017d5b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa512,	// (0x00017d5b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001cb75) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001cb75) list_single_loc_request_popup_menu_pane_g

0xa51e,	// (0x00017d67) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa51e,	// (0x00017d67) list_single_loc_request_popup_menu_pane_t1

0x9ba6,	// (0x000173ef) bg_popup_window_pane_cp03_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_window_pane_cp03

0xa534,	// (0x00017d7d) heading_loc_req_pane_ParamLimits

0xa534,	// (0x00017d7d) heading_loc_req_pane

0x2995,	// (0x000101de) popup_dyc_status_message_window_g1_ParamLimits

0x2995,	// (0x000101de) popup_dyc_status_message_window_g1

0x29a9,	// (0x000101f2) popup_dyc_status_message_window_t1_ParamLimits

0x29a9,	// (0x000101f2) popup_dyc_status_message_window_t1

0x29be,	// (0x00010207) popup_dyc_status_message_window_t2_ParamLimits

0x29be,	// (0x00010207) popup_dyc_status_message_window_t2

0x29d3,	// (0x0001021c) popup_dyc_status_message_window_t3_ParamLimits

0x29d3,	// (0x0001021c) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001cb7a) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001cb7a) popup_dyc_status_message_window_t

0x994b,	// (0x00017194) bg_heading_pane_cp01

0xa540,	// (0x00017d89) heading_loc_req_pane_g1

0xa548,	// (0x00017d91) heading_loc_req_pane_g2

0xa550,	// (0x00017d99) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001cb81) heading_loc_req_pane_g

0xa558,	// (0x00017da1) heading_loc_req_pane_t1

0xa5dc,	// (0x00017e25) bg_popup_sub_pane_cp01_ParamLimits

0xa5dc,	// (0x00017e25) bg_popup_sub_pane_cp01

0xa5ea,	// (0x00017e33) popup_cale_events_window_g1_ParamLimits

0xa5ea,	// (0x00017e33) popup_cale_events_window_g1

0xa60a,	// (0x00017e53) popup_cale_events_window_g2_ParamLimits

0xa60a,	// (0x00017e53) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cbb5) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cbb5) popup_cale_events_window_g

0xa62a,	// (0x00017e73) popup_cale_events_window_t1_ParamLimits

0xa62a,	// (0x00017e73) popup_cale_events_window_t1

0xa63c,	// (0x00017e85) popup_cale_events_window_t2_ParamLimits

0xa63c,	// (0x00017e85) popup_cale_events_window_t2

0xa67a,	// (0x00017ec3) popup_cale_events_window_t3_ParamLimits

0xa67a,	// (0x00017ec3) popup_cale_events_window_t3

0xa6b4,	// (0x00017efd) popup_cale_events_window_t4_ParamLimits

0xa6b4,	// (0x00017efd) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cbba) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cbba) popup_cale_events_window_t

0x2a61,	// (0x000102aa) call_type_pane

0x2a71,	// (0x000102ba) popup_call_status_window_g1

0x2a85,	// (0x000102ce) popup_call_status_window_g2

0x2a99,	// (0x000102e2) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cbc3) popup_call_status_window_g

0xa6ea,	// (0x00017f33) call_type_pane_g1

0xa6f3,	// (0x00017f3c) call_type_pane_g2

0x0001,

0xf381,	// (0x0001cbca) call_type_pane_g

0x994b,	// (0x00017194) bg_popup_sub_pane_cp02

0xa6fc,	// (0x00017f45) listscroll_popup_wml_pane

0xa704,	// (0x00017f4d) list_wml_pane

0xa70e,	// (0x00017f57) scroll_pane_cp013

0xa719,	// (0x00017f62) list_single_graphic_popup_wml_pane_ParamLimits

0xa719,	// (0x00017f62) list_single_graphic_popup_wml_pane

0x9d18,	// (0x00017561) list_single_graphic_popup_wml_pane_g1

0xa72d,	// (0x00017f76) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001cbcf) list_single_graphic_popup_wml_pane_g

0xa735,	// (0x00017f7e) list_single_graphic_popup_wml_pane_t1

0xa74b,	// (0x00017f94) aid_call_pane

0x9b9e,	// (0x000173e7) popup_clock_analogue_window_g1

0x9b9e,	// (0x000173e7) popup_clock_analogue_window_g2

0xa753,	// (0x00017f9c) popup_clock_analogue_window_g3

0xa753,	// (0x00017f9c) popup_clock_analogue_window_g4

0x9d18,	// (0x00017561) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001cbd4) popup_clock_analogue_window_g

0xa75b,	// (0x00017fa4) popup_clock_analogue_window_t1

0xa769,	// (0x00017fb2) clock_digital_number_pane_ParamLimits

0xa769,	// (0x00017fb2) clock_digital_number_pane

0xa775,	// (0x00017fbe) clock_digital_number_pane_cp02_ParamLimits

0xa775,	// (0x00017fbe) clock_digital_number_pane_cp02

0xa781,	// (0x00017fca) clock_digital_number_pane_cp03_ParamLimits

0xa781,	// (0x00017fca) clock_digital_number_pane_cp03

0xa78d,	// (0x00017fd6) clock_digital_number_pane_cp04_ParamLimits

0xa78d,	// (0x00017fd6) clock_digital_number_pane_cp04

0xa79d,	// (0x00017fe6) clock_digital_separator_pane_ParamLimits

0xa79d,	// (0x00017fe6) clock_digital_separator_pane

0xa7a9,	// (0x00017ff2) popup_clock_digital_window_t1

0x9d18,	// (0x00017561) clock_digital_number_pane_g1

0x9d18,	// (0x00017561) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001cb42) clock_digital_number_pane_g

0x9d18,	// (0x00017561) clock_digital_separator_pane_g1

0x9d18,	// (0x00017561) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001cb42) clock_digital_separator_pane_g

0x994b,	// (0x00017194) bg_popup_window_pane_cp04

0xa7c6,	// (0x0001800f) heading_pane_cp03

0xa7ce,	// (0x00018017) listscroll_popup_gms_pane

0xa7d6,	// (0x0001801f) grid_large_graphic_popup_pane

0xa7e0,	// (0x00018029) listscroll_popup_gms_pane_g1

0xa7e8,	// (0x00018031) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001cbdf) listscroll_popup_gms_pane_g

0xa159,	// (0x000179a2) scroll_pane_cp014

0x2aa8,	// (0x000102f1) cell_large_graphic_popup_pane_ParamLimits

0x2aa8,	// (0x000102f1) cell_large_graphic_popup_pane

0x2ac0,	// (0x00010309) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ac0,	// (0x00010309) cell_large_graphic_popup_pane_g1

0xa7f0,	// (0x00018039) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7f0,	// (0x00018039) cell_large_graphic_popup_pane_g2

0xa7fc,	// (0x00018045) cell_large_graphic_popup_pane_g3_ParamLimits

0xa7fc,	// (0x00018045) cell_large_graphic_popup_pane_g3

0xa809,	// (0x00018052) cell_large_graphic_popup_pane_g4_ParamLimits

0xa809,	// (0x00018052) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001cbe4) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001cbe4) cell_large_graphic_popup_pane_g

0xa819,	// (0x00018062) grid_highlight_pane_cp010

0x9d18,	// (0x00017561) bg_popup_call_pane_g1

0xa823,	// (0x0001806c) list_single_graphic_popup_conf_pane_ParamLimits

0xa823,	// (0x0001806c) list_single_graphic_popup_conf_pane

0xa836,	// (0x0001807f) list_highlight_pane_cp01

0xa83f,	// (0x00018088) list_single_graphic_popup_conf_pane_g1

0xa847,	// (0x00018090) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001cbed) list_single_graphic_popup_conf_pane_g

0xa84f,	// (0x00018098) list_single_graphic_popup_conf_pane_t1

0xa85d,	// (0x000180a6) linegrid_cams_pane_g1

0x2acc,	// (0x00010315) linegrid_cams_pane_g2

0x9e8c,	// (0x000176d5) linegrid_cams_pane_g3

0xa866,	// (0x000180af) linegrid_cams_pane_g4

0x2ad5,	// (0x0001031e) linegrid_cams_pane_g5

0x2ade,	// (0x00010327) linegrid_cams_pane_g6

0x9e95,	// (0x000176de) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001cbf2) linegrid_cams_pane_g

0xa86f,	// (0x000180b8) popup_clock_analogue_window

0xa86f,	// (0x000180b8) popup_clock_digital_window

0x994b,	// (0x00017194) popup_phob_thumbnail_window

0x9d18,	// (0x00017561) call_video_uplink_pane_g1

0xa878,	// (0x000180c1) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001cc01) call_video_uplink_pane_g

0xa880,	// (0x000180c9) video_uplink_pane

0xa888,	// (0x000180d1) mce_image_pane_g1

0x2ae9,	// (0x00010332) mce_image_pane_g2

0x2af3,	// (0x0001033c) mce_image_pane_g3

0x2afb,	// (0x00010344) mce_image_pane_g4

0x2b03,	// (0x0001034c) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001cc06) mce_image_pane_g

0xa892,	// (0x000180db) control_top_pane_stacon_cp01_ParamLimits

0xa892,	// (0x000180db) control_top_pane_stacon_cp01

0xa8a6,	// (0x000180ef) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8a6,	// (0x000180ef) uni_indicator_pane_stacon_cp01

0xa8b7,	// (0x00018100) bg_popup_sub_pane_cp03

0x2b0b,	// (0x00010354) chi_dic_find_pane

0x2b13,	// (0x0001035c) listscroll_chi_dic_pane

0x2b1c,	// (0x00010365) main_pane_chidic_g1

0xa8c1,	// (0x0001810a) chi_dic_find_pane_t1

0xa8cf,	// (0x00018118) find_chidic_pane

0xa8d8,	// (0x00018121) chi_dic_list_pane_ParamLimits

0xa8d8,	// (0x00018121) chi_dic_list_pane

0xa8e9,	// (0x00018132) scroll_pane_cp020

0xa8f1,	// (0x0001813a) find_chidic_pane_t1

0x994b,	// (0x00017194) input_focus_pane_cp06

0x2b2f,	// (0x00010378) list_chi_dic_pane_ParamLimits

0x2b2f,	// (0x00010378) list_chi_dic_pane

0x2b41,	// (0x0001038a) list_chi_dic_pane_t1_ParamLimits

0x2b41,	// (0x0001038a) list_chi_dic_pane_t1

0x994b,	// (0x00017194) list_highlight_pane_cp020

0xa900,	// (0x00018149) bg_cale_heading_pane_g1

0x2b54,	// (0x0001039d) bg_cale_heading_pane_g2

0x2b5c,	// (0x000103a5) bg_cale_heading_pane_g3

0x2b64,	// (0x000103ad) bg_cale_heading_pane_g4

0x2b6e,	// (0x000103b7) bg_cale_heading_pane_g5

0x2b78,	// (0x000103c1) bg_cale_heading_pane_g6

0x2b80,	// (0x000103c9) bg_cale_heading_pane_g7

0x2b88,	// (0x000103d1) bg_cale_heading_pane_g8

0x2b92,	// (0x000103db) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001cc11) bg_cale_heading_pane_g

0xa900,	// (0x00018149) bg_cale_side_pane_g1

0x2b9c,	// (0x000103e5) bg_cale_side_pane_g2

0x2ba4,	// (0x000103ed) bg_cale_side_pane_g3

0x2bac,	// (0x000103f5) bg_cale_side_pane_g4

0x2bb4,	// (0x000103fd) bg_cale_side_pane_g5

0x2bbc,	// (0x00010405) bg_cale_side_pane_g6

0x2bc4,	// (0x0001040d) bg_cale_side_pane_g7

0x2bcc,	// (0x00010415) bg_cale_side_pane_g8

0x2bd4,	// (0x0001041d) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001cc24) bg_cale_side_pane_g

0x2bdc,	// (0x00010425) popup_call_status_window_ParamLimits

0x2bdc,	// (0x00010425) popup_call_status_window

0xa908,	// (0x00018151) stacon_top_pane

0xa910,	// (0x00018159) status_pane_ParamLimits

0xa910,	// (0x00018159) status_pane

0xa925,	// (0x0001816e) status_small_pane

0xa92d,	// (0x00018176) control_pane

0x994b,	// (0x00017194) stacon_bottom_pane

0xa935,	// (0x0001817e) list_single_mce_smart_pane_t1_ParamLimits

0xa935,	// (0x0001817e) list_single_mce_smart_pane_t1

0xa948,	// (0x00018191) list_single_mce_smart_pane_t2_ParamLimits

0xa948,	// (0x00018191) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001cc37) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001cc37) list_single_mce_smart_pane_t

0x2c25,	// (0x0001046e) compass_pane

0x2c2e,	// (0x00010477) main_location2_pane_t1

0x2c40,	// (0x00010489) main_location2_pane_t2

0x2c52,	// (0x0001049b) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001cc3c) main_location2_pane_t

0xa967,	// (0x000181b0) compass_pane_g1_ParamLimits

0xa967,	// (0x000181b0) compass_pane_g1

0x2c96,	// (0x000104df) compass_pane_t1

0x2ca5,	// (0x000104ee) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001cc45) compass_pane_t

0x2cec,	// (0x00010535) text_secondary_cp61

0xa97b,	// (0x000181c4) navi_pane_cams_g5

0xa99e,	// (0x000181e7) navi_pane_im_t1

0xa9ac,	// (0x000181f5) navi_pane_mp_g1_ParamLimits

0xa9ac,	// (0x000181f5) navi_pane_mp_g1

0xa9c0,	// (0x00018209) navi_pane_mp_g2_ParamLimits

0xa9c0,	// (0x00018209) navi_pane_mp_g2

0xa9cc,	// (0x00018215) navi_pane_mp_g3_ParamLimits

0xa9cc,	// (0x00018215) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001cc59) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001cc59) navi_pane_mp_g

0xa9d8,	// (0x00018221) navi_pane_mp_t1

0xa9e6,	// (0x0001822f) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001cc60) navi_pane_mp_t

0xaa22,	// (0x0001826b) navi_pane_vt_g1

0xa9d8,	// (0x00018221) navi_pane_vt_t1

0xaa2a,	// (0x00018273) navi_slider_pane

0xaa32,	// (0x0001827b) zooming_pane

0xaa3a,	// (0x00018283) navi_slider_pane_g1

0xaa43,	// (0x0001828c) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001cc67) navi_slider_pane_g

0xaa70,	// (0x000182b9) aid_levels_zoom

0xaa78,	// (0x000182c1) zooming_pane_g1

0xaa80,	// (0x000182c9) zooming_pane_g2

0xaa80,	// (0x000182c9) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001cc76) zooming_pane_g

0xaa88,	// (0x000182d1) level_10_zoom

0xaa91,	// (0x000182da) level_11_zoom

0xaa9a,	// (0x000182e3) level_1_zoom

0xaaa3,	// (0x000182ec) level_2_zoom

0xaaac,	// (0x000182f5) level_3_zoom

0xaab5,	// (0x000182fe) level_4_zoom

0xaabe,	// (0x00018307) level_5_zoom

0xaac7,	// (0x00018310) level_6_zoom

0xaad0,	// (0x00018319) level_7_zoom

0xaad9,	// (0x00018322) level_8_zoom

0xaae2,	// (0x0001832b) level_9_zoom

0xaaf3,	// (0x0001833c) popup_phob_thumbnail_window_g1

0xaafb,	// (0x00018344) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001cc7d) popup_phob_thumbnail_window_g

0xbe96,	// (0x000196df) level_1_location

0xbe9e,	// (0x000196e7) level_2_location

0xbea6,	// (0x000196ef) level_3_location

0xbeae,	// (0x000196f7) level_4_location

0xaa32,	// (0x0001827b) level_5_location

0x2e11,	// (0x0001065a) mce_icon_pane_g1

0x2e19,	// (0x00010662) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001cc82) mce_icon_pane_g

0x2e21,	// (0x0001066a) main_mup_pane_g1_ParamLimits

0x2e21,	// (0x0001066a) main_mup_pane_g1

0x2e37,	// (0x00010680) main_mup_pane_g2_ParamLimits

0x2e37,	// (0x00010680) main_mup_pane_g2

0x2e4f,	// (0x00010698) main_mup_pane_g3_ParamLimits

0x2e4f,	// (0x00010698) main_mup_pane_g3

0x2e67,	// (0x000106b0) main_mup_pane_g4_ParamLimits

0x2e67,	// (0x000106b0) main_mup_pane_g4

0x2e7f,	// (0x000106c8) main_mup_pane_g5_ParamLimits

0x2e7f,	// (0x000106c8) main_mup_pane_g5

0x2e9b,	// (0x000106e4) main_mup_pane_g6_ParamLimits

0x2e9b,	// (0x000106e4) main_mup_pane_g6

0x2eb3,	// (0x000106fc) main_mup_pane_g7_ParamLimits

0x2eb3,	// (0x000106fc) main_mup_pane_g7

0x2ecb,	// (0x00010714) main_mup_pane_g8_ParamLimits

0x2ecb,	// (0x00010714) main_mup_pane_g8

0x2ee5,	// (0x0001072e) main_mup_pane_g9_ParamLimits

0x2ee5,	// (0x0001072e) main_mup_pane_g9

0x2eff,	// (0x00010748) main_mup_pane_g10_ParamLimits

0x2eff,	// (0x00010748) main_mup_pane_g10

0x2f19,	// (0x00010762) main_mup_pane_g11_ParamLimits

0x2f19,	// (0x00010762) main_mup_pane_g11

0x2f2d,	// (0x00010776) main_mup_pane_g12_ParamLimits

0x2f2d,	// (0x00010776) main_mup_pane_g12

0x2f43,	// (0x0001078c) main_mup_pane_g13_ParamLimits

0x2f43,	// (0x0001078c) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001cc87) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001cc87) main_mup_pane_g

0x2f57,	// (0x000107a0) main_mup_pane_t1_ParamLimits

0x2f57,	// (0x000107a0) main_mup_pane_t1

0x2f71,	// (0x000107ba) main_mup_pane_t2_ParamLimits

0x2f71,	// (0x000107ba) main_mup_pane_t2

0x2f89,	// (0x000107d2) main_mup_pane_t3_ParamLimits

0x2f89,	// (0x000107d2) main_mup_pane_t3

0x2fa1,	// (0x000107ea) main_mup_pane_t4_ParamLimits

0x2fa1,	// (0x000107ea) main_mup_pane_t4

0x2fbf,	// (0x00010808) main_mup_pane_t5_ParamLimits

0x2fbf,	// (0x00010808) main_mup_pane_t5

0x2fd4,	// (0x0001081d) main_mup_pane_t6_ParamLimits

0x2fd4,	// (0x0001081d) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001cca2) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001cca2) main_mup_pane_t

0x2fe6,	// (0x0001082f) mup_progress_pane_ParamLimits

0x2fe6,	// (0x0001082f) mup_progress_pane

0x2ff2,	// (0x0001083b) mup_visualizer_pane_ParamLimits

0x2ff2,	// (0x0001083b) mup_visualizer_pane

0x3022,	// (0x0001086b) mup_volume_pane_ParamLimits

0x3022,	// (0x0001086b) mup_volume_pane

0xab03,	// (0x0001834c) mup_visualizer_pane_g1_ParamLimits

0xab03,	// (0x0001834c) mup_visualizer_pane_g1

0xab03,	// (0x0001834c) mup_visualizer_pane_g2_ParamLimits

0xab03,	// (0x0001834c) mup_visualizer_pane_g2

0xa967,	// (0x000181b0) mup_visualizer_pane_g3_ParamLimits

0xa967,	// (0x000181b0) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001ccaf) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001ccaf) mup_visualizer_pane_g

0x9d18,	// (0x00017561) mup_volume_pane_g1

0xab19,	// (0x00018362) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001ccb6) mup_volume_pane_g

0x9d18,	// (0x00017561) mup_progress_pane_g1

0xab22,	// (0x0001836b) mup_progress_pane_g2

0xab2b,	// (0x00018374) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001ccbb) mup_progress_pane_g

0x994b,	// (0x00017194) bg_popup_window_pane_cp05

0xab34,	// (0x0001837d) heading_pane_cp02_ParamLimits

0xab34,	// (0x0001837d) heading_pane_cp02

0xab4e,	// (0x00018397) list_popup_blid_pane

0xab56,	// (0x0001839f) list_blid_sat_info_pane_ParamLimits

0xab56,	// (0x0001839f) list_blid_sat_info_pane

0xab69,	// (0x000183b2) list_blid_sat_info_pane_g1

0xab71,	// (0x000183ba) list_blid_sat_info_pane_t1

0x3138,	// (0x00010981) mup_equalizer_pane_ParamLimits

0x3138,	// (0x00010981) mup_equalizer_pane

0x3151,	// (0x0001099a) mup_equalizer_pane_cp1_ParamLimits

0x3151,	// (0x0001099a) mup_equalizer_pane_cp1

0x316e,	// (0x000109b7) mup_equalizer_pane_cp2_ParamLimits

0x316e,	// (0x000109b7) mup_equalizer_pane_cp2

0x318b,	// (0x000109d4) mup_equalizer_pane_cp3_ParamLimits

0x318b,	// (0x000109d4) mup_equalizer_pane_cp3

0x31ac,	// (0x000109f5) mup_equalizer_pane_cp4_ParamLimits

0x31ac,	// (0x000109f5) mup_equalizer_pane_cp4

0x31cd,	// (0x00010a16) mup_equalizer_pane_cp5

0x31e1,	// (0x00010a2a) mup_equalizer_pane_cp6

0x31f5,	// (0x00010a3e) mup_equalizer_pane_cp7

0xbdb4,	// (0x000195fd) bg_popup_call_poc_act_pane_g9

0xbdbc,	// (0x00019605) bg_popup_call_poc_act_pane_g10

0xbdc4,	// (0x0001960d) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ba6,	// (0x000173ef) mup_scale_pane

0x9d18,	// (0x00017561) mup_scale_pane_g1

0xab7f,	// (0x000183c8) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001ccd7) mup_scale_pane_g

0xaba3,	// (0x000183ec) msg_data_pane

0xabab,	// (0x000183f4) scroll_pane_cp017

0x321b,	// (0x00010a64) bg_list_pane_cp04_ParamLimits

0x321b,	// (0x00010a64) bg_list_pane_cp04

0xabbb,	// (0x00018404) msg_data_pane_g1

0x3233,	// (0x00010a7c) msg_data_pane_g2

0x323d,	// (0x00010a86) msg_data_pane_g3

0x3245,	// (0x00010a8e) msg_data_pane_g4

0x324d,	// (0x00010a96) msg_data_pane_g5

0x3255,	// (0x00010a9e) msg_data_pane_g6

0x325d,	// (0x00010aa6) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001cce6) msg_data_pane_g

0x3265,	// (0x00010aae) msg_text_pane_ParamLimits

0x3265,	// (0x00010aae) msg_text_pane

0x3289,	// (0x00010ad2) qrid_highlight_pane_cp011_ParamLimits

0x3289,	// (0x00010ad2) qrid_highlight_pane_cp011

0x994b,	// (0x00017194) msg_body_pane

0x994b,	// (0x00017194) msg_header_pane

0xabcc,	// (0x00018415) input_focus_pane_cp07

0x32ad,	// (0x00010af6) msg_header_pane_t1_ParamLimits

0x32ad,	// (0x00010af6) msg_header_pane_t1

0xabe1,	// (0x0001842a) msg_header_pane_t2_ParamLimits

0xabe1,	// (0x0001842a) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001ccfa) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001ccfa) msg_header_pane_t

0xabf3,	// (0x0001843c) msg_body_pane_g1

0xabfb,	// (0x00018444) msg_body_pane_t1_ParamLimits

0xabfb,	// (0x00018444) msg_body_pane_t1

0xac2c,	// (0x00018475) msg_body_pane_t2_ParamLimits

0xac2c,	// (0x00018475) msg_body_pane_t2

0xac3e,	// (0x00018487) msg_body_pane_t3_ParamLimits

0xac3e,	// (0x00018487) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001ccff) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001ccff) msg_body_pane_t

0x32fb,	// (0x00010b44) main_viewer_pane_g1_ParamLimits

0x32fb,	// (0x00010b44) main_viewer_pane_g1

0x3309,	// (0x00010b52) main_viewer_pane_g2_ParamLimits

0x3309,	// (0x00010b52) main_viewer_pane_g2

0x3317,	// (0x00010b60) main_viewer_pane_g3_ParamLimits

0x3317,	// (0x00010b60) main_viewer_pane_g3

0x3326,	// (0x00010b6f) main_viewer_pane_g4_ParamLimits

0x3326,	// (0x00010b6f) main_viewer_pane_g4

0xac68,	// (0x000184b1) main_viewer_pane_g5_ParamLimits

0xac68,	// (0x000184b1) main_viewer_pane_g5

0xac68,	// (0x000184b1) main_viewer_pane_g7_ParamLimits

0xac68,	// (0x000184b1) main_viewer_pane_g7

0xac7a,	// (0x000184c3) main_viewer_pane_g8_ParamLimits

0xac7a,	// (0x000184c3) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001cd0f) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001cd0f) main_viewer_pane_g

0xac92,	// (0x000184db) viewer_content_pane_ParamLimits

0xac92,	// (0x000184db) viewer_content_pane

0x3362,	// (0x00010bab) main_postcard_pane_g1_ParamLimits

0x3362,	// (0x00010bab) main_postcard_pane_g1

0x3378,	// (0x00010bc1) main_postcard_pane_g2_ParamLimits

0x3378,	// (0x00010bc1) main_postcard_pane_g2

0x338e,	// (0x00010bd7) main_postcard_pane_g3_ParamLimits

0x338e,	// (0x00010bd7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001cd20) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001cd20) main_postcard_pane_g

0x33a5,	// (0x00010bee) main_postcard_pane_g4

0xbfc9,	// (0x00019812) smil_status_volume_pane_g2

0x33e8,	// (0x00010c31) postcard_pane_ParamLimits

0x33e8,	// (0x00010c31) postcard_pane

0xaca0,	// (0x000184e9) postcard_pane_g1_ParamLimits

0xaca0,	// (0x000184e9) postcard_pane_g1

0x342a,	// (0x00010c73) postcard_pane_g2_ParamLimits

0x342a,	// (0x00010c73) postcard_pane_g2

0x3436,	// (0x00010c7f) postcard_pane_g3_ParamLimits

0x3436,	// (0x00010c7f) postcard_pane_g3

0xacae,	// (0x000184f7) postcard_pane_g4_ParamLimits

0xacae,	// (0x000184f7) postcard_pane_g4

0x3442,	// (0x00010c8b) postcard_pane_g5_ParamLimits

0x3442,	// (0x00010c8b) postcard_pane_g5

0x3457,	// (0x00010ca0) postcard_pane_g6_ParamLimits

0x3457,	// (0x00010ca0) postcard_pane_g6

0xaca0,	// (0x000184e9) postcard_pane_g7_ParamLimits

0xaca0,	// (0x000184e9) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001cd2d) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001cd2d) postcard_pane_g

0x346b,	// (0x00010cb4) main_mp2_pane_g1_ParamLimits

0x346b,	// (0x00010cb4) main_mp2_pane_g1

0x3477,	// (0x00010cc0) main_mp2_pane_g2_ParamLimits

0x3477,	// (0x00010cc0) main_mp2_pane_g2

0x3483,	// (0x00010ccc) main_mp2_pane_g3_ParamLimits

0x3483,	// (0x00010ccc) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001cd3c) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001cd3c) main_mp2_pane_g

0x348f,	// (0x00010cd8) main_mp2_pane_t1_ParamLimits

0x348f,	// (0x00010cd8) main_mp2_pane_t1

0x34a4,	// (0x00010ced) main_mp2_pane_t2_ParamLimits

0x34a4,	// (0x00010ced) main_mp2_pane_t2

0x34b6,	// (0x00010cff) main_mp2_pane_t3_ParamLimits

0x34b6,	// (0x00010cff) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001cd43) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001cd43) main_mp2_pane_t

0xacbc,	// (0x00018505) pec_content_pane_ParamLimits

0xacbc,	// (0x00018505) pec_content_pane

0xa159,	// (0x000179a2) scroll_pane_cp015

0xacce,	// (0x00018517) pec_attribute_pane_ParamLimits

0xacce,	// (0x00018517) pec_attribute_pane

0x34c8,	// (0x00010d11) pec_content_pane_g1_ParamLimits

0x34c8,	// (0x00010d11) pec_content_pane_g1

0xacde,	// (0x00018527) pec_content_pane_t1_ParamLimits

0xacde,	// (0x00018527) pec_content_pane_t1

0xacf0,	// (0x00018539) pec_content_pane_t2_ParamLimits

0xacf0,	// (0x00018539) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001cd4a) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001cd4a) pec_content_pane_t

0x34d4,	// (0x00010d1d) list_single_graphic_pane_cp01_ParamLimits

0x34d4,	// (0x00010d1d) list_single_graphic_pane_cp01

0x9ba6,	// (0x000173ef) bg_popup_sub_pane_cp04

0xad02,	// (0x0001854b) popup_mup_playback_window_g1

0xad0e,	// (0x00018557) popup_mup_playback_window_t1

0xad23,	// (0x0001856c) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001cd4f) popup_mup_playback_window_t

0xad5a,	// (0x000185a3) main_image_pane_g1_ParamLimits

0xad5a,	// (0x000185a3) main_image_pane_g1

0xad9d,	// (0x000185e6) scroll_pane_cp018_ParamLimits

0xad9d,	// (0x000185e6) scroll_pane_cp018

0xadb5,	// (0x000185fe) scroll_pane_cp016_ParamLimits

0xadb5,	// (0x000185fe) scroll_pane_cp016

0x35a1,	// (0x00010dea) smil2_image_pane_ParamLimits

0x35a1,	// (0x00010dea) smil2_image_pane

0x35d1,	// (0x00010e1a) smil2_root_pane_ParamLimits

0x35d1,	// (0x00010e1a) smil2_root_pane

0x3609,	// (0x00010e52) smil2_text_pane_ParamLimits

0x3609,	// (0x00010e52) smil2_text_pane

0x994b,	// (0x00017194) bg_list_pane_cp06

0xadf1,	// (0x0001863a) grid_radio_pane

0x994b,	// (0x00017194) bg_popup_window_pane_cp06

0xadf9,	// (0x00018642) main_fmradio_pane_t1

0xa7c6,	// (0x0001800f) heading_pane_cp04

0xae07,	// (0x00018650) main_fmradio_pane_t2

0xbdcc,	// (0x00019615) popup_cale_lunar_info_window_g1

0xae15,	// (0x0001865e) main_fmradio_pane_t3

0xbdd4,	// (0x0001961d) popup_cale_lunar_info_window_g2

0xae23,	// (0x0001866c) main_fmradio_pane_t4

0x0001,

0xae31,	// (0x0001867a) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001ce2a) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001cd64) main_fmradio_pane_t

0xae3f,	// (0x00018688) wait_bar_pane_cp03

0xae47,	// (0x00018690) cell_fmradio_pane_ParamLimits

0xae47,	// (0x00018690) cell_fmradio_pane

0xaca0,	// (0x000184e9) cell_fmradio_pane_g1_ParamLimits

0xaca0,	// (0x000184e9) cell_fmradio_pane_g1

0x994b,	// (0x00017194) grid_highlight_pane_cp011

0xae5a,	// (0x000186a3) poc_content_pane_ParamLimits

0xae5a,	// (0x000186a3) poc_content_pane

0xae6c,	// (0x000186b5) scroll_pane_cp019

0x3689,	// (0x00010ed2) popup_call_poc_act_window_ParamLimits

0x3689,	// (0x00010ed2) popup_call_poc_act_window

0x36ad,	// (0x00010ef6) popup_call_poc_inact_window_ParamLimits

0x36ad,	// (0x00010ef6) popup_call_poc_inact_window

0xf5b8,	// (0x0001ce01) bg_popup_call_poc_act_pane_g

0xbd44,	// (0x0001958d) bg_popup_call_poc_inact_pane_g1

0xbd4c,	// (0x00019595) bg_popup_call_poc_inact_pane_g2

0xae74,	// (0x000186bd) popup_call_poc_act_window_g2

0xbd54,	// (0x0001959d) bg_popup_call_poc_inact_pane_g3

0xbd5c,	// (0x000195a5) bg_popup_call_poc_inact_pane_g4

0xbd64,	// (0x000195ad) bg_popup_call_poc_inact_pane_g5

0xae7c,	// (0x000186c5) popup_call_poc_act_window_t1_ParamLimits

0xae7c,	// (0x000186c5) popup_call_poc_act_window_t1

0xaea4,	// (0x000186ed) popup_call_poc_act_window_t2_ParamLimits

0xaea4,	// (0x000186ed) popup_call_poc_act_window_t2

0xaecc,	// (0x00018715) popup_call_poc_act_window_t3_ParamLimits

0xaecc,	// (0x00018715) popup_call_poc_act_window_t3

0xaef4,	// (0x0001873d) popup_call_poc_act_window_t4_ParamLimits

0xaef4,	// (0x0001873d) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001cd6f) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001cd6f) popup_call_poc_act_window_t

0xbd6c,	// (0x000195b5) bg_popup_call_poc_inact_pane_g6

0xbd74,	// (0x000195bd) bg_popup_call_poc_inact_pane_g7

0xbd7c,	// (0x000195c5) bg_popup_call_poc_inact_pane_g8

0xaf06,	// (0x0001874f) popup_call_poc_inact_window_g2

0xbd84,	// (0x000195cd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001cdee) bg_popup_call_poc_inact_pane_g

0xaf0e,	// (0x00018757) popup_call_poc_inact_window_t1_ParamLimits

0xaf0e,	// (0x00018757) popup_call_poc_inact_window_t1

0xaf23,	// (0x0001876c) popup_call_poc_inact_window_t2_ParamLimits

0xaf23,	// (0x0001876c) popup_call_poc_inact_window_t2

0xaf38,	// (0x00018781) popup_call_poc_inact_window_t3_ParamLimits

0xaf38,	// (0x00018781) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001cd78) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001cd78) popup_call_poc_inact_window_t

0xbf3c,	// (0x00019785) context_pane_ParamLimits

0x3ee0,	// (0x00011729) signal_pane_ParamLimits

0xaa32,	// (0x0001827b) main_call2_pane

0xbf2a,	// (0x00019773) popup_phob_thumbnail2_window_ParamLimits

0xbf2a,	// (0x00019773) popup_phob_thumbnail2_window

0xac50,	// (0x00018499) aid_hotspot_pointer_arrow_pane

0xac58,	// (0x000184a1) aid_hotspot_pointer_hand_pane

0x39f6,	// (0x0001123f) phob_pre_status_pane_g5

0x18fd,	// (0x0000f146) cams_zoom_pane_ParamLimits

0x190c,	// (0x0000f155) image_vga_pane_ParamLimits

0x1926,	// (0x0000f16f) main_camera_pane_g1_ParamLimits

0x1938,	// (0x0000f181) main_camera_pane_g2_ParamLimits

0x1948,	// (0x0000f191) main_camera_pane_g3_ParamLimits

0x1958,	// (0x0000f1a1) main_camera_pane_g4_ParamLimits

0x1968,	// (0x0000f1b1) main_camera_pane_g5_ParamLimits

0x1978,	// (0x0000f1c1) main_camera_pane_g6_ParamLimits

0x198a,	// (0x0000f1d3) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001ca77) main_camera_pane_g_ParamLimits

0x199a,	// (0x0000f1e3) main_camera_pane_t1_ParamLimits

0x19b0,	// (0x0000f1f9) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001ca88) main_camera_pane_t_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_preview_window_pane_cp01

0xaf4d,	// (0x00018796) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf4d,	// (0x00018796) popup_phob_thumbnail2_window_g1

0x994b,	// (0x00017194) call2_cli_visual_pane

0x36e1,	// (0x00010f2a) popup_call2_audio_conf_window_ParamLimits

0x36e1,	// (0x00010f2a) popup_call2_audio_conf_window

0x3701,	// (0x00010f4a) popup_call2_audio_first_window_ParamLimits

0x3701,	// (0x00010f4a) popup_call2_audio_first_window

0x3797,	// (0x00010fe0) popup_call2_audio_in_window_ParamLimits

0x3797,	// (0x00010fe0) popup_call2_audio_in_window

0x37df,	// (0x00011028) popup_call2_audio_out_window_ParamLimits

0x37df,	// (0x00011028) popup_call2_audio_out_window

0x3849,	// (0x00011092) popup_call2_audio_second_window_ParamLimits

0x3849,	// (0x00011092) popup_call2_audio_second_window

0x38af,	// (0x000110f8) popup_call2_audio_wait_window_ParamLimits

0x38af,	// (0x000110f8) popup_call2_audio_wait_window

0x994b,	// (0x00017194) bg_popup_call2_act_pane_cp03

0x9b88,	// (0x000173d1) list_conf_pane_cp

0xaf59,	// (0x000187a2) popup_call2_audio_conf_window_t1

0xa823,	// (0x0001806c) list_single_graphic_popup_conf2_pane_ParamLimits

0xa823,	// (0x0001806c) list_single_graphic_popup_conf2_pane

0xa836,	// (0x0001807f) list_highlight_pane_cp04

0xaf67,	// (0x000187b0) list_single_graphic_popup_conf2_pane_g1

0xa847,	// (0x00018090) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001cd7f) list_single_graphic_popup_conf2_pane_g

0xaf71,	// (0x000187ba) list_single_graphic_popup_conf2_pane_t1

0xaf7f,	// (0x000187c8) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf7f,	// (0x000187c8) bg_popup_call2_act_pane_cp01

0xb009,	// (0x00018852) call_type_pane_cp05_ParamLimits

0xb009,	// (0x00018852) call_type_pane_cp05

0xb05d,	// (0x000188a6) popup_call2_audio_second_window_g1_ParamLimits

0xb05d,	// (0x000188a6) popup_call2_audio_second_window_g1

0xb0b1,	// (0x000188fa) popup_call2_audio_second_window_g2_ParamLimits

0xb0b1,	// (0x000188fa) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001cd84) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001cd84) popup_call2_audio_second_window_g

0xb116,	// (0x0001895f) popup_call2_audio_second_window_t1_ParamLimits

0xb116,	// (0x0001895f) popup_call2_audio_second_window_t1

0xb1d1,	// (0x00018a1a) popup_call2_audio_second_window_t2_ParamLimits

0xb1d1,	// (0x00018a1a) popup_call2_audio_second_window_t2

0xb224,	// (0x00018a6d) popup_call2_audio_second_window_t3_ParamLimits

0xb224,	// (0x00018a6d) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001cd8b) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001cd8b) popup_call2_audio_second_window_t

0x994b,	// (0x00017194) bg_popup_call2_in_pane_cp02

0x9955,	// (0x0001719e) call_type_pane_cp04

0x995d,	// (0x000171a6) popup_call2_audio_wait_window_g1

0x9965,	// (0x000171ae) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001c964) popup_call2_audio_wait_window_g

0x996d,	// (0x000171b6) popup_call2_audio_wait_window_t3

0xb317,	// (0x00018b60) bg_popup_call2_act_pane_ParamLimits

0xb317,	// (0x00018b60) bg_popup_call2_act_pane

0xb3d7,	// (0x00018c20) call_type_pane_cp03_ParamLimits

0xb3d7,	// (0x00018c20) call_type_pane_cp03

0xb43b,	// (0x00018c84) popup_call2_audio_first_window_g1_ParamLimits

0xb43b,	// (0x00018c84) popup_call2_audio_first_window_g1

0xb4ab,	// (0x00018cf4) popup_call2_audio_first_window_g2_ParamLimits

0xb4ab,	// (0x00018cf4) popup_call2_audio_first_window_g2

0xab03,	// (0x0001834c) popup_call2_audio_first_window_g3_ParamLimits

0xab03,	// (0x0001834c) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001cd94) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001cd94) popup_call2_audio_first_window_g

0xb589,	// (0x00018dd2) popup_call2_audio_first_window_t1_ParamLimits

0xb589,	// (0x00018dd2) popup_call2_audio_first_window_t1

0xb68c,	// (0x00018ed5) popup_call2_audio_first_window_t4_ParamLimits

0xb68c,	// (0x00018ed5) popup_call2_audio_first_window_t4

0xb76f,	// (0x00018fb8) popup_call2_audio_first_window_t5_ParamLimits

0xb76f,	// (0x00018fb8) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001cd9f) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001cd9f) popup_call2_audio_first_window_t

0x9b9e,	// (0x000173e7) bg_popup_call2_act_pane_g1

0xbddc,	// (0x00019625) popup_cale_lunar_info_window_t1

0xbdea,	// (0x00019633) popup_cale_lunar_info_window_t2

0xbdf8,	// (0x00019641) popup_cale_lunar_info_window_t3

0x994b,	// (0x00017194) bg_popup_call2_bubble_pane

0xb870,	// (0x000190b9) bg_popup_call2_in_pane_cp01_ParamLimits

0xb870,	// (0x000190b9) bg_popup_call2_in_pane_cp01

0x9627,	// (0x00016e70) call_type_pane_cp02

0xb8b8,	// (0x00019101) popup_call2_audio_out_window_g1_ParamLimits

0xb8b8,	// (0x00019101) popup_call2_audio_out_window_g1

0xb8e4,	// (0x0001912d) popup_call2_audio_out_window_g2_ParamLimits

0xb8e4,	// (0x0001912d) popup_call2_audio_out_window_g2

0xb90c,	// (0x00019155) popup_call2_audio_out_window_g3_ParamLimits

0xb90c,	// (0x00019155) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001cda8) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001cda8) popup_call2_audio_out_window_g

0xb947,	// (0x00019190) popup_call2_audio_out_window_t1_ParamLimits

0xb947,	// (0x00019190) popup_call2_audio_out_window_t1

0xb9a6,	// (0x000191ef) popup_call2_audio_out_window_t2_ParamLimits

0xb9a6,	// (0x000191ef) popup_call2_audio_out_window_t2

0xb9fa,	// (0x00019243) popup_call2_audio_out_window_t3_ParamLimits

0xb9fa,	// (0x00019243) popup_call2_audio_out_window_t3

0xba10,	// (0x00019259) popup_call2_audio_out_window_t4_ParamLimits

0xba10,	// (0x00019259) popup_call2_audio_out_window_t4

0xba26,	// (0x0001926f) popup_call2_audio_out_window_t5_ParamLimits

0xba26,	// (0x0001926f) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001cdb1) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001cdb1) popup_call2_audio_out_window_t

0xba8a,	// (0x000192d3) bg_popup_call2_in_pane_ParamLimits

0xba8a,	// (0x000192d3) bg_popup_call2_in_pane

0xbae6,	// (0x0001932f) popup_call2_audio_in_window_g1_ParamLimits

0xbae6,	// (0x0001932f) popup_call2_audio_in_window_g1

0xbb1e,	// (0x00019367) popup_call2_audio_in_window_g2_ParamLimits

0xbb1e,	// (0x00019367) popup_call2_audio_in_window_g2

0xbb56,	// (0x0001939f) popup_call2_audio_in_window_g3_ParamLimits

0xbb56,	// (0x0001939f) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001cdbe) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001cdbe) popup_call2_audio_in_window_g

0xbbae,	// (0x000193f7) popup_call2_audio_in_window_t1_ParamLimits

0xbbae,	// (0x000193f7) popup_call2_audio_in_window_t1

0xbc2e,	// (0x00019477) popup_call2_audio_in_window_t2_ParamLimits

0xbc2e,	// (0x00019477) popup_call2_audio_in_window_t2

0xbcae,	// (0x000194f7) popup_call2_audio_in_window_t3_ParamLimits

0xbcae,	// (0x000194f7) popup_call2_audio_in_window_t3

0xbcc8,	// (0x00019511) popup_call2_audio_in_window_t4_ParamLimits

0xbcc8,	// (0x00019511) popup_call2_audio_in_window_t4

0xbcda,	// (0x00019523) popup_call2_audio_in_window_t5_ParamLimits

0xbcda,	// (0x00019523) popup_call2_audio_in_window_t5

0xbcef,	// (0x00019538) popup_call2_audio_in_window_t6_ParamLimits

0xbcef,	// (0x00019538) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001cdc7) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001cdc7) popup_call2_audio_in_window_t

0x9b9e,	// (0x000173e7) bg_popup_call2_in_pane_g1

0xbe06,	// (0x0001964f) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001ce2f) popup_cale_lunar_info_window_t

0x9ba6,	// (0x000173ef) bg_popup_call2_rect_pane_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_call2_rect_pane

0x994b,	// (0x00017194) call2_cli_visual_graphic_pane

0x994b,	// (0x00017194) call2_cli_visual_text_pane

0xbfdc,	// (0x00019825) smil_status_volume_pane_g3

0x0002,

0x9d18,	// (0x00017561) call2_cli_visual_graphic_pane_g1

0x9d18,	// (0x00017561) call2_cli_visual_graphic_pane_g2

0x9d18,	// (0x00017561) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001cdd4) call2_cli_visual_graphic_pane_g

0xbd04,	// (0x0001954d) bg_popup_call2_rect_pane_g1

0x9da4,	// (0x000175ed) bg_popup_call2_rect_pane_g2

0xbd0c,	// (0x00019555) bg_popup_call2_rect_pane_g3

0xbd14,	// (0x0001955d) bg_popup_call2_rect_pane_g4

0xbd1c,	// (0x00019565) bg_popup_call2_rect_pane_g5

0xbd24,	// (0x0001956d) bg_popup_call2_rect_pane_g6

0xbd2c,	// (0x00019575) bg_popup_call2_rect_pane_g7

0xbd34,	// (0x0001957d) bg_popup_call2_rect_pane_g8

0xbd3c,	// (0x00019585) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001cddb) bg_popup_call2_rect_pane_g

0xbd44,	// (0x0001958d) bg_popup_call2_bubble_pane_g1

0xbd4c,	// (0x00019595) bg_popup_call2_bubble_pane_g2

0xbd54,	// (0x0001959d) bg_popup_call2_bubble_pane_g3

0xbd5c,	// (0x000195a5) bg_popup_call2_bubble_pane_g4

0xbd64,	// (0x000195ad) bg_popup_call2_bubble_pane_g5

0xbd6c,	// (0x000195b5) bg_popup_call2_bubble_pane_g6

0xbd74,	// (0x000195bd) bg_popup_call2_bubble_pane_g7

0xbd7c,	// (0x000195c5) bg_popup_call2_bubble_pane_g8

0xbd84,	// (0x000195cd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001cdee) bg_popup_call2_bubble_pane_g

0x1494,	// (0x0000ecdd) aid_cale_week_size_cell_pane

0x19c6,	// (0x0000f20f) aid_cams_cif_uncrop_pane_ParamLimits

0x19c6,	// (0x0000f20f) aid_cams_cif_uncrop_pane

0x1b7f,	// (0x0000f3c8) aid_cams_size_cell_ParamLimits

0x1b7f,	// (0x0000f3c8) aid_cams_size_cell

0x1b93,	// (0x0000f3dc) grid_cams_pane_ParamLimits

0x1bad,	// (0x0000f3f6) linegrid_cams_pane_ParamLimits

0x1ce4,	// (0x0000f52d) call_video_pane_t1

0x1d02,	// (0x0000f54b) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cadb) call_video_pane_t

0x212e,	// (0x0000f977) aid_cale_month_size_cell_pane_ParamLimits

0x212e,	// (0x0000f977) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001ce78) smil_status_volume_pane_g

0xbfe9,	// (0x00019832) volume_smil_pane_ParamLimits

0x94cc,	// (0x00016d15) aid_popup2_width_pane

0x13f6,	// (0x0000ec3f) cell_qdial_pane_g4_ParamLimits

0x13f6,	// (0x0000ec3f) cell_qdial_pane_g4

0x2c76,	// (0x000104bf) aid_blid_cardinal_pane_ParamLimits

0x2c82,	// (0x000104cb) aid_blid_destination_pane_ParamLimits

0x2c82,	// (0x000104cb) aid_blid_destination_pane

0x9ba6,	// (0x000173ef) bg_popup_call_poc_act_pane_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_call_poc_act_pane

0x9ba6,	// (0x000173ef) bg_popup_call_poc_inact_pane_ParamLimits

0x9ba6,	// (0x000173ef) bg_popup_call_poc_inact_pane

0xbd8c,	// (0x000195d5) bg_popup_call_poc_act_pane_g1

0xbd94,	// (0x000195dd) bg_popup_call_poc_act_pane_g2

0xbd9c,	// (0x000195e5) bg_popup_call_poc_act_pane_g3

0xbd5c,	// (0x000195a5) bg_popup_call_poc_act_pane_g4

0xbd64,	// (0x000195ad) bg_popup_call_poc_act_pane_g5

0xbda4,	// (0x000195ed) bg_popup_call_poc_act_pane_g6

0xbd74,	// (0x000195bd) bg_popup_call_poc_act_pane_g7

0xbdac,	// (0x000195f5) bg_popup_call_poc_act_pane_g8

0x994b,	// (0x00017194) main_usb_pane

0xbf05,	// (0x0001974e) popup_cale_lunar_info_window

0x1fda,	// (0x0000f823) im_reading_pane_t1_ParamLimits

0xa0b1,	// (0x000178fa) list_im_pane_ParamLimits

0xa0c2,	// (0x0001790b) scroll_pane_cp07_ParamLimits

0x994b,	// (0x00017194) grid_highlight_pane_cp012

0x9ba6,	// (0x000173ef) mup_scale_pane_ParamLimits

0xaca0,	// (0x000184e9) main_usb_pane_g1_ParamLimits

0xaca0,	// (0x000184e9) main_usb_pane_g1

0x390b,	// (0x00011154) main_usb_pane_g2_ParamLimits

0x390b,	// (0x00011154) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001ce18) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001ce18) main_usb_pane_g

0x3921,	// (0x0001116a) main_usb_pane_t1_ParamLimits

0x3921,	// (0x0001116a) main_usb_pane_t1

0x3933,	// (0x0001117c) main_usb_pane_t2_ParamLimits

0x3933,	// (0x0001117c) main_usb_pane_t2

0x3945,	// (0x0001118e) main_usb_pane_t3_ParamLimits

0x3945,	// (0x0001118e) main_usb_pane_t3

0x3957,	// (0x000111a0) main_usb_pane_t4_ParamLimits

0x3957,	// (0x000111a0) main_usb_pane_t4

0x3969,	// (0x000111b2) main_usb_pane_t5_ParamLimits

0x3969,	// (0x000111b2) main_usb_pane_t5

0x397b,	// (0x000111c4) main_usb_pane_t6_ParamLimits

0x397b,	// (0x000111c4) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001ce1d) main_usb_pane_t_ParamLimits

0x2c25,	// (0x0001046e) aid_text_placing

0x2c2e,	// (0x00010477) main_location2_pane_t1_ParamLimits

0x2c40,	// (0x00010489) main_location2_pane_t2_ParamLimits

0x2c52,	// (0x0001049b) main_location2_pane_t3_ParamLimits

0x2c64,	// (0x000104ad) main_location2_pane_t4_ParamLimits

0x2c64,	// (0x000104ad) main_location2_pane_t4

0xf3f3,	// (0x0001cc3c) main_location2_pane_t_ParamLimits

0x9be2,	// (0x0001742b) find_pinb_pane_g2_ParamLimits

0x9be2,	// (0x0001742b) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001c98a) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001c98a) find_pinb_pane_g

0x9bee,	// (0x00017437) find_pinb_pane_t1_ParamLimits

0x9c00,	// (0x00017449) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001c98f) find_pinb_pane_t_ParamLimits

0x994b,	// (0x00017194) main_call3_pane

0x2492,	// (0x0000fcdb) cale_month_day_heading_pane_t1_ParamLimits

0x24f0,	// (0x0000fd39) cale_month_day_heading_pane_t2_ParamLimits

0x2555,	// (0x0000fd9e) cale_month_day_heading_pane_t3_ParamLimits

0x25ba,	// (0x0000fe03) cale_month_day_heading_pane_t4_ParamLimits

0x261f,	// (0x0000fe68) cale_month_day_heading_pane_t5_ParamLimits

0x2694,	// (0x0000fedd) cale_month_day_heading_pane_t6_ParamLimits

0x2709,	// (0x0000ff52) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cb13) cale_month_day_heading_pane_t_ParamLimits

0xa338,	// (0x00017b81) smil_status_volume_pane

0x3406,	// (0x00010c4f) postcard_address_pane_ParamLimits

0x3406,	// (0x00010c4f) postcard_address_pane

0x3418,	// (0x00010c61) postcard_message_pane_ParamLimits

0x3418,	// (0x00010c61) postcard_message_pane

0x38e9,	// (0x00011132) call2_cli_visual_pane_t1_ParamLimits

0x38e9,	// (0x00011132) call2_cli_visual_pane_t1

0x410d,	// (0x00011956) postcard_message_pane_t1_ParamLimits

0x410d,	// (0x00011956) postcard_message_pane_t1

0x40f6,	// (0x0001193f) postcard_address_pane_t1_ParamLimits

0x40f6,	// (0x0001193f) postcard_address_pane_t1

0x40e2,	// (0x0001192b) popup_call3_audio_in_window_ParamLimits

0x40e2,	// (0x0001192b) popup_call3_audio_in_window

0x3f6d,	// (0x000117b6) bg_popup_call3_in_pane_ParamLimits

0x3f6d,	// (0x000117b6) bg_popup_call3_in_pane

0x3fe3,	// (0x0001182c) popup_call3_audio_in_window_g1_ParamLimits

0x3fe3,	// (0x0001182c) popup_call3_audio_in_window_g1

0x4003,	// (0x0001184c) popup_call3_audio_in_window_g2_ParamLimits

0x4003,	// (0x0001184c) popup_call3_audio_in_window_g2

0x4023,	// (0x0001186c) popup_call3_audio_in_window_g3_ParamLimits

0x4023,	// (0x0001186c) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001ce7f) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001ce7f) popup_call3_audio_in_window_g

0x4054,	// (0x0001189d) popup_call3_audio_in_window_t1_ParamLimits

0x4054,	// (0x0001189d) popup_call3_audio_in_window_t1

0x4092,	// (0x000118db) popup_call3_audio_in_window_t2_ParamLimits

0x4092,	// (0x000118db) popup_call3_audio_in_window_t2

0x40d0,	// (0x00011919) popup_call3_audio_in_window_t3_ParamLimits

0x40d0,	// (0x00011919) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001ce88) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001ce88) popup_call3_audio_in_window_t

0xaa32,	// (0x0001827b) bg_popup_call3_rect_pane

0xbd04,	// (0x0001954d) bg_popup_call3_rect_pane_g1

0x9da4,	// (0x000175ed) bg_popup_call3_rect_pane_g2

0xbd0c,	// (0x00019555) bg_popup_call3_rect_pane_g3

0xbd14,	// (0x0001955d) bg_popup_call3_rect_pane_g4

0xbd1c,	// (0x00019565) bg_popup_call3_rect_pane_g5

0xbd24,	// (0x0001956d) bg_popup_call3_rect_pane_g6

0xbd2c,	// (0x00019575) bg_popup_call3_rect_pane_g7

0x3038,	// (0x00010881) mup_visualizer_osc_pane

0xab11,	// (0x0001835a) mup_visualizer_spec_pane

0x3f9d,	// (0x000117e6) call3_video_qcif_pane_ParamLimits

0x3f9d,	// (0x000117e6) call3_video_qcif_pane

0x3fb0,	// (0x000117f9) call3_video_qcif_uncrop_pane_ParamLimits

0x3fb0,	// (0x000117f9) call3_video_qcif_uncrop_pane

0x3fbe,	// (0x00011807) call3_video_subqcif_pane_ParamLimits

0x3fbe,	// (0x00011807) call3_video_subqcif_pane

0x3fd2,	// (0x0001181b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3fd2,	// (0x0001181b) call3_video_subqcif_uncrop_pane

0x4043,	// (0x0001188c) popup_call3_audio_in_window_g4_ParamLimits

0x4043,	// (0x0001188c) popup_call3_audio_in_window_g4

0x3f5c,	// (0x000117a5) mup_spec_half_pane

0x3f65,	// (0x000117ae) mup_spec_half_pane_cp

0xbf9c,	// (0x000197e5) mup_osc_middle_pane

0xbfa5,	// (0x000197ee) mup_visualizer_osc_pane_g1

0x3f3c,	// (0x00011785) mup_spec_bar_pane_ParamLimits

0x3f3c,	// (0x00011785) mup_spec_bar_pane

0xbf89,	// (0x000197d2) mup_spec_bar_pane_g1

0xbf93,	// (0x000197dc) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001ce73) mup_spec_bar_pane_g

0x1494,	// (0x0000ecdd) aid_cale_week_size_cell_pane_ParamLimits

0x14a7,	// (0x0000ecf0) bg_cale_heading_pane_ParamLimits

0x9e20,	// (0x00017669) bg_cale_pane_cp01_ParamLimits

0x14bb,	// (0x0000ed04) cale_week_corner_pane_ParamLimits

0x14d1,	// (0x0000ed1a) cale_week_day_heading_pane_ParamLimits

0x14e5,	// (0x0000ed2e) cale_week_scroll_pane_g1_ParamLimits

0x14f6,	// (0x0000ed3f) cale_week_scroll_pane_g2_ParamLimits

0x1507,	// (0x0000ed50) cale_week_scroll_pane_g3_ParamLimits

0x1518,	// (0x0000ed61) cale_week_scroll_pane_g4_ParamLimits

0x1529,	// (0x0000ed72) cale_week_scroll_pane_g5_ParamLimits

0x153c,	// (0x0000ed85) cale_week_scroll_pane_g6_ParamLimits

0x154f,	// (0x0000ed98) cale_week_scroll_pane_g7_ParamLimits

0x1562,	// (0x0000edab) cale_week_scroll_pane_g8_ParamLimits

0x1575,	// (0x0000edbe) cale_week_scroll_pane_g9_ParamLimits

0x1586,	// (0x0000edcf) cale_week_scroll_pane_g10_ParamLimits

0x1597,	// (0x0000ede0) cale_week_scroll_pane_g11_ParamLimits

0x15a8,	// (0x0000edf1) cale_week_scroll_pane_g12_ParamLimits

0x15b9,	// (0x0000ee02) cale_week_scroll_pane_g13_ParamLimits

0x15ca,	// (0x0000ee13) cale_week_scroll_pane_g14_ParamLimits

0x15db,	// (0x0000ee24) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001ca1b) cale_week_scroll_pane_g_ParamLimits

0x15ec,	// (0x0000ee35) cale_week_time_pane_ParamLimits

0x15ff,	// (0x0000ee48) grid_cale_week_pane_ParamLimits

0x9e39,	// (0x00017682) listscroll_cale_week_pane_t1

0x1614,	// (0x0000ee5d) scroll_pane_cp08_ParamLimits

0x216f,	// (0x0000f9b8) cale_month_corner_pane_ParamLimits

0xa2d8,	// (0x00017b21) cale_month_pane_t1

0x2451,	// (0x0000fc9a) cale_month_week_pane_ParamLimits

0x2a71,	// (0x000102ba) popup_call_status_window_g1_ParamLimits

0x2a85,	// (0x000102ce) popup_call_status_window_g2_ParamLimits

0x2a99,	// (0x000102e2) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cbc3) popup_call_status_window_g_ParamLimits

0xa743,	// (0x00017f8c) aid_call2_pane

0x329f,	// (0x00010ae8) msg_header_pane_g1

0x3406,	// (0x00010c4f) postcard_address2_pane_ParamLimits

0x3406,	// (0x00010c4f) postcard_address2_pane

0x3418,	// (0x00010c61) postcard_message2_pane_ParamLimits

0x3418,	// (0x00010c61) postcard_message2_pane

0x3eee,	// (0x00011737) message2_row_pane_ParamLimits

0x3eee,	// (0x00011737) message2_row_pane

0x3f0a,	// (0x00011753) address2_row_pane_ParamLimits

0x3f0a,	// (0x00011753) address2_row_pane

0xbf57,	// (0x000197a0) postcard_message2_row_pane_g1

0xbf5f,	// (0x000197a8) postcard_message2_row_pane_t1

0xbf57,	// (0x000197a0) address2_row_pane_g1

0xbf5f,	// (0x000197a8) address2_row_pane_t1

0x18c2,	// (0x0000f10b) aid_size_cell_vorec

0x994b,	// (0x00017194) main_rss_pane

0x3f1d,	// (0x00011766) rss_list_single_pane_ParamLimits

0x3f1d,	// (0x00011766) rss_list_single_pane

0xbf6d,	// (0x000197b6) rss_list_single_pane_t1

0xbf7b,	// (0x000197c4) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001ce6e) rss_list_single_pane_t

0x994b,	// (0x00017194) main_camera2_pane

0x994b,	// (0x00017194) main_video2_pane

0x4186,	// (0x000119cf) cams_zoom_pane_cp2_ParamLimits

0x4186,	// (0x000119cf) cams_zoom_pane_cp2

0x41a6,	// (0x000119ef) image2_vga_pane_ParamLimits

0x41a6,	// (0x000119ef) image2_vga_pane

0x41f7,	// (0x00011a40) main_camera2_pane_g1_ParamLimits

0x41f7,	// (0x00011a40) main_camera2_pane_g1

0x4217,	// (0x00011a60) main_camera2_pane_g2_ParamLimits

0x4217,	// (0x00011a60) main_camera2_pane_g2

0x4237,	// (0x00011a80) main_camera2_pane_g3_ParamLimits

0x4237,	// (0x00011a80) main_camera2_pane_g3

0x4257,	// (0x00011aa0) main_camera2_pane_g4_ParamLimits

0x4257,	// (0x00011aa0) main_camera2_pane_g4

0x4277,	// (0x00011ac0) main_camera2_pane_g5_ParamLimits

0x4277,	// (0x00011ac0) main_camera2_pane_g5

0x4297,	// (0x00011ae0) main_camera2_pane_g6_ParamLimits

0x4297,	// (0x00011ae0) main_camera2_pane_g6

0x42b7,	// (0x00011b00) main_camera2_pane_g7_ParamLimits

0x42b7,	// (0x00011b00) main_camera2_pane_g7

0x42d7,	// (0x00011b20) main_camera2_pane_g8_ParamLimits

0x42d7,	// (0x00011b20) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001ce8f) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001ce8f) main_camera2_pane_g

0x4317,	// (0x00011b60) main_camera2_pane_t1_ParamLimits

0x4317,	// (0x00011b60) main_camera2_pane_t1

0x434c,	// (0x00011b95) main_camera2_pane_t2_ParamLimits

0x434c,	// (0x00011b95) main_camera2_pane_t2

0x4372,	// (0x00011bbb) main_camera2_pane_t3_ParamLimits

0x4372,	// (0x00011bbb) main_camera2_pane_t3

0x43d0,	// (0x00011c19) main_camera2_pane_t4_ParamLimits

0x43d0,	// (0x00011c19) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001cea2) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001cea2) main_camera2_pane_t

0x4462,	// (0x00011cab) cams_zoom_pane_cp4_ParamLimits

0x4462,	// (0x00011cab) cams_zoom_pane_cp4

0x4478,	// (0x00011cc1) image2_cif_pane_ParamLimits

0x4478,	// (0x00011cc1) image2_cif_pane

0x44a3,	// (0x00011cec) image2_subqcif_pane_ParamLimits

0x44a3,	// (0x00011cec) image2_subqcif_pane

0x44bd,	// (0x00011d06) main_video2_pane_g1_ParamLimits

0x44bd,	// (0x00011d06) main_video2_pane_g1

0x44d7,	// (0x00011d20) main_video2_pane_g2_ParamLimits

0x44d7,	// (0x00011d20) main_video2_pane_g2

0x44ed,	// (0x00011d36) main_video2_pane_g3_ParamLimits

0x44ed,	// (0x00011d36) main_video2_pane_g3

0x4503,	// (0x00011d4c) main_video2_pane_g4_ParamLimits

0x4503,	// (0x00011d4c) main_video2_pane_g4

0x4519,	// (0x00011d62) main_video2_pane_g5_ParamLimits

0x4519,	// (0x00011d62) main_video2_pane_g5

0x452f,	// (0x00011d78) main_video2_pane_g6_ParamLimits

0x452f,	// (0x00011d78) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001ceb1) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001ceb1) main_video2_pane_g

0x4549,	// (0x00011d92) main_video2_pane_t1_ParamLimits

0x4549,	// (0x00011d92) main_video2_pane_t1

0x456d,	// (0x00011db6) main_video2_pane_t2_ParamLimits

0x456d,	// (0x00011db6) main_video2_pane_t2

0x45bb,	// (0x00011e04) main_video2_pane_t3_ParamLimits

0x45bb,	// (0x00011e04) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001cebe) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001cebe) main_video2_pane_t

0x3a36,	// (0x0001127f) call_muted_g2

0x0001,

0xf617,	// (0x0001ce60) call_muted_g

0x994b,	// (0x00017194) main_mup2_pane

0x45ff,	// (0x00011e48) main_mup2_pane_g1_ParamLimits

0x45ff,	// (0x00011e48) main_mup2_pane_g1

0x460b,	// (0x00011e54) main_mup2_pane_g2_ParamLimits

0x460b,	// (0x00011e54) main_mup2_pane_g2

0xc10d,	// (0x00019956) main_mup_pane_g13_cp1

0xc115,	// (0x0001995e) mup_volume_pane_cp1

0x4627,	// (0x00011e70) main_mup2_pane_g4_ParamLimits

0x4627,	// (0x00011e70) main_mup2_pane_g4

0x4639,	// (0x00011e82) main_mup2_pane_g5_ParamLimits

0x4639,	// (0x00011e82) main_mup2_pane_g5

0x464b,	// (0x00011e94) main_mup2_pane_g6_ParamLimits

0x464b,	// (0x00011e94) main_mup2_pane_g6

0x465d,	// (0x00011ea6) main_mup2_pane_g7_ParamLimits

0x465d,	// (0x00011ea6) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001cec5) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001cec5) main_mup2_pane_g

0x4675,	// (0x00011ebe) main_mup2_pane_t1_ParamLimits

0x4675,	// (0x00011ebe) main_mup2_pane_t1

0x468b,	// (0x00011ed4) main_mup2_pane_t2_ParamLimits

0x468b,	// (0x00011ed4) main_mup2_pane_t2

0x46a1,	// (0x00011eea) main_mup2_pane_t3_ParamLimits

0x46a1,	// (0x00011eea) main_mup2_pane_t3

0x46b7,	// (0x00011f00) main_mup2_pane_t4_ParamLimits

0x46b7,	// (0x00011f00) main_mup2_pane_t4

0x46cf,	// (0x00011f18) main_mup2_pane_t5_ParamLimits

0x46cf,	// (0x00011f18) main_mup2_pane_t5

0x46e7,	// (0x00011f30) main_mup2_pane_t6_ParamLimits

0x46e7,	// (0x00011f30) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001ced4) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001ced4) main_mup2_pane_t

0x4717,	// (0x00011f60) mup2_visualizer_pane_ParamLimits

0x4717,	// (0x00011f60) mup2_visualizer_pane

0x4745,	// (0x00011f8e) mup_progress_pane_cp_ParamLimits

0x4745,	// (0x00011f8e) mup_progress_pane_cp

0xc0ef,	// (0x00019938) mup_volume_pane_cp_ParamLimits

0xc0ef,	// (0x00019938) mup_volume_pane_cp

0x4759,	// (0x00011fa2) mup2_visualizer_pane_g1_ParamLimits

0x4759,	// (0x00011fa2) mup2_visualizer_pane_g1

0xc02e,	// (0x00019877) mup2_visualizer_pane_g2_ParamLimits

0xc02e,	// (0x00019877) mup2_visualizer_pane_g2

0x4770,	// (0x00011fb9) mup2_visualizer_pane_g3_ParamLimits

0x4770,	// (0x00011fb9) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001cee1) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001cee1) mup2_visualizer_pane_g

0xade9,	// (0x00018632) aid_size_cell_fmradio

0x3be8,	// (0x00011431) aid_height_parent_landcape

0xa140,	// (0x00017989) wml_content_pane_cp

0xa148,	// (0x00017991) wml_tabs_pane

0xa151,	// (0x0001799a) popup_wml_miniature_window

0xa159,	// (0x000179a2) scroll_pane_cp021

0xa16d,	// (0x000179b6) wml_content_pane_comp8

0x994b,	// (0x00017194) bg_popup_sub_pane_cp05

0xc04c,	// (0x00019895) popup_wml_miniature_window_g1

0xc054,	// (0x0001989d) wml_miniature_view_pane

0x477c,	// (0x00011fc5) aid_size_wml_view

0x4784,	// (0x00011fcd) wml_miniature_view_pane_g1

0x478d,	// (0x00011fd6) wml_miniature_view_pane_g2

0x4796,	// (0x00011fdf) wml_miniature_view_pane_g3

0x479e,	// (0x00011fe7) wml_miniature_view_pane_g4

0x47a6,	// (0x00011fef) wml_miniature_view_pane_g5

0x47ae,	// (0x00011ff7) wml_miniature_view_pane_g6

0x47b6,	// (0x00011fff) wml_miniature_view_pane_g7

0x47be,	// (0x00012007) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001cee8) wml_miniature_view_pane_g

0xc05c,	// (0x000198a5) background_graphic_ParamLimits

0xc05c,	// (0x000198a5) background_graphic

0xc068,	// (0x000198b1) wml_tabs_2_pane

0xc071,	// (0x000198ba) wml_tabs_3_pane_ParamLimits

0xc071,	// (0x000198ba) wml_tabs_3_pane

0xc083,	// (0x000198cc) wml_tabs_4_pane_ParamLimits

0xc083,	// (0x000198cc) wml_tabs_4_pane

0xc099,	// (0x000198e2) wml_tabs_5_pane_ParamLimits

0xc099,	// (0x000198e2) wml_tabs_5_pane

0xc0b3,	// (0x000198fc) wml_tabs_pane_g2_ParamLimits

0xc0b3,	// (0x000198fc) wml_tabs_pane_g2

0xc0c7,	// (0x00019910) wml_tabs_pane_g3_ParamLimits

0xc0c7,	// (0x00019910) wml_tabs_pane_g3

0x47c6,	// (0x0001200f) wml_tabs_2_active_pane_ParamLimits

0x47c6,	// (0x0001200f) wml_tabs_2_active_pane

0x47da,	// (0x00012023) wml_tabs_2_passive_pane_ParamLimits

0x47da,	// (0x00012023) wml_tabs_2_passive_pane

0x47ee,	// (0x00012037) wml_tabs_3_active_pane_cp_ParamLimits

0x47ee,	// (0x00012037) wml_tabs_3_active_pane_cp

0x4803,	// (0x0001204c) wml_tabs_3_passive_pane_ParamLimits

0x4803,	// (0x0001204c) wml_tabs_3_passive_pane

0x4816,	// (0x0001205f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4816,	// (0x0001205f) wml_tabs_3_passive_pane_cp

0x482d,	// (0x00012076) tabs_4_active_pane

0x4835,	// (0x0001207e) tabs_4_passive_pane

0x483f,	// (0x00012088) tabs_4_passive_pane_cp

0x4847,	// (0x00012090) tabs_4_passive_pane_cp2

0x3903,	// (0x0001114c) aid_height_text

0x300e,	// (0x00010857) mup_volume_cont_pane_ParamLimits

0x300e,	// (0x00010857) mup_volume_cont_pane

0x1095,	// (0x0000e8de) aid_size_cell_pinb

0x109f,	// (0x0000e8e8) aid_size_list_pinb

0x4731,	// (0x00011f7a) mup2_volume_cont_pane_ParamLimits

0x4731,	// (0x00011f7a) mup2_volume_cont_pane

0xc0db,	// (0x00019924) mup2_volume_cont_pane_g1_ParamLimits

0xc0db,	// (0x00019924) mup2_volume_cont_pane_g1

0x0d83,	// (0x0000e5cc) aid_size_cell_touch_ParamLimits

0x0d83,	// (0x0000e5cc) aid_size_cell_touch

0x0f85,	// (0x0000e7ce) touch_pane_ParamLimits

0x0f85,	// (0x0000e7ce) touch_pane

0x94ba,	// (0x00016d03) main_rss2_pane

0xc11d,	// (0x00019966) listscroll_rss2_pane

0xc126,	// (0x0001996f) rss2_navigation_pane

0xc12e,	// (0x00019977) list_rss2_pane

0xa8e9,	// (0x00018132) scroll_pane_cp22

0xc136,	// (0x0001997f) rss2_navigation_pane_g1

0xc13f,	// (0x00019988) rss2_navigation_pane_g2

0xc147,	// (0x00019990) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001cef9) rss2_navigation_pane_g

0xc14f,	// (0x00019998) rss2_navigation_pane_t1

0x4851,	// (0x0001209a) rss2_list_single_pane_ParamLimits

0x4851,	// (0x0001209a) rss2_list_single_pane

0xc15d,	// (0x000199a6) rss2_list_single_pane_t2

0xc16b,	// (0x000199b4) rss2_list_single_pane_t3_ParamLimits

0xc16b,	// (0x000199b4) rss2_list_single_pane_t3

0xc188,	// (0x000199d1) rss2_list_single_pane_t4

0x2903,	// (0x0001014c) smil_status_pane_g1

0x952a,	// (0x00016d73) main_image2_pane_ParamLimits

0x952a,	// (0x00016d73) main_image2_pane

0x42f7,	// (0x00011b40) main_camera2_pane_g9_ParamLimits

0x42f7,	// (0x00011b40) main_camera2_pane_g9

0x4425,	// (0x00011c6e) main_camera2_pane_t5_ParamLimits

0x4425,	// (0x00011c6e) main_camera2_pane_t5

0xbffe,	// (0x00019847) main_camera2_pane_t6_ParamLimits

0xbffe,	// (0x00019847) main_camera2_pane_t6

0x4866,	// (0x000120af) main_image2_pane_g1_ParamLimits

0x4866,	// (0x000120af) main_image2_pane_g1

0x363f,	// (0x00010e88) smil2_video_pane_ParamLimits

0x363f,	// (0x00010e88) smil2_video_pane

0x94d8,	// (0x00016d21) aid_zoom_text_primary_cp

0x9520,	// (0x00016d69) popup_preview_fixed_window

0xa0a9,	// (0x000178f2) im_reading_pane_g1

0x416e,	// (0x000119b7) cams2_bc_adjust_pane_cp_ParamLimits

0x416e,	// (0x000119b7) cams2_bc_adjust_pane_cp

0x4454,	// (0x00011c9d) cams2_bc_adjust_pane_ParamLimits

0x4454,	// (0x00011c9d) cams2_bc_adjust_pane

0xc196,	// (0x000199df) cams2_bc_adjust_pane_g1

0xc19e,	// (0x000199e7) cams2_slider_pane

0xc1a7,	// (0x000199f0) cams2_slider_pane_g1

0xc1b0,	// (0x000199f9) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001cf00) cams2_slider_pane_g

0x1181,	// (0x0000e9ca) calc_display_pane_ParamLimits

0x11a9,	// (0x0000e9f2) calc_paper_pane_ParamLimits

0x11cc,	// (0x0000ea15) grid_calc_pane_ParamLimits

0xa7a9,	// (0x00017ff2) popup_clock_digital_window_t1_ParamLimits

0xad86,	// (0x000185cf) main_image_pane_t1

0x1163,	// (0x0000e9ac) aid_size_cell_calc_ParamLimits

0x1163,	// (0x0000e9ac) aid_size_cell_calc

0x3c2e,	// (0x00011477) popup_blid_sat_info2_window_ParamLimits

0x3c2e,	// (0x00011477) popup_blid_sat_info2_window

0xc1d2,	// (0x00019a1b) aid_size_cell_blid

0xc1da,	// (0x00019a23) bg_popup_window_pane_cp07

0xc1fd,	// (0x00019a46) grid_popup_blid_pane

0xc207,	// (0x00019a50) heading_pane_cp05_ParamLimits

0xc207,	// (0x00019a50) heading_pane_cp05

0xc2d1,	// (0x00019b1a) cell_popup_blid_pane_ParamLimits

0xc2d1,	// (0x00019b1a) cell_popup_blid_pane

0xc2f5,	// (0x00019b3e) cell_popup_blid_pane_g1

0xc2fd,	// (0x00019b46) cell_popup_blid_pane_t1

0x4701,	// (0x00011f4a) mup2_indicator_pane_ParamLimits

0x4701,	// (0x00011f4a) mup2_indicator_pane

0xaa32,	// (0x0001827b) mup2_visualizer_osc_pane

0xc03a,	// (0x00019883) mup2_visualizer_spec_pane_ParamLimits

0xc03a,	// (0x00019883) mup2_visualizer_spec_pane

0x487c,	// (0x000120c5) mup2_spec_half_pane

0x4885,	// (0x000120ce) mup2_spec_half_pane_cp

0x488d,	// (0x000120d6) mup2_spec_bar_pane_ParamLimits

0x488d,	// (0x000120d6) mup2_spec_bar_pane

0xbf89,	// (0x000197d2) mup2_spec_bar_pane_g1

0xbf93,	// (0x000197dc) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001ce73) mup2_spec_bar_pane_g

0x48ad,	// (0x000120f6) mup2_osc_middle_pane

0xbfa5,	// (0x000197ee) mup2_visualizer_osc_pane_g1

0x9558,	// (0x00016da1) popup_number_entry_window_t1_ParamLimits

0x956b,	// (0x00016db4) popup_number_entry_window_t2_ParamLimits

0x957d,	// (0x00016dc6) popup_number_entry_window_t3_ParamLimits

0x0fd7,	// (0x0000e820) popup_number_entry_window_t5_ParamLimits

0x0fd7,	// (0x0000e820) popup_number_entry_window_t5

0xf0ec,	// (0x0001c935) popup_number_entry_window_t_ParamLimits

0x958f,	// (0x00016dd8) text_title_cp2_ParamLimits

0xac60,	// (0x000184a9) aid_hotspot_pointer_text2_pane

0xac86,	// (0x000184cf) main_viewer_pane_g9_ParamLimits

0xac86,	// (0x000184cf) main_viewer_pane_g9

0xa2d8,	// (0x00017b21) cale_month_pane_t1_ParamLimits

0xa36d,	// (0x00017bb6) bg_cale_pane_ParamLimits

0xa385,	// (0x00017bce) list_cale_pane_ParamLimits

0x9e39,	// (0x00017682) listscroll_cale_day_pane_t1

0xa396,	// (0x00017bdf) scroll_pane_cp09_ParamLimits

0x3040,	// (0x00010889) main_mup_eq_pane_t1_ParamLimits

0x3040,	// (0x00010889) main_mup_eq_pane_t1

0x305a,	// (0x000108a3) main_mup_eq_pane_t2_ParamLimits

0x305a,	// (0x000108a3) main_mup_eq_pane_t2

0x3074,	// (0x000108bd) main_mup_eq_pane_t3_ParamLimits

0x3074,	// (0x000108bd) main_mup_eq_pane_t3

0x3090,	// (0x000108d9) main_mup_eq_pane_t4_ParamLimits

0x3090,	// (0x000108d9) main_mup_eq_pane_t4

0x30ac,	// (0x000108f5) main_mup_eq_pane_t5_ParamLimits

0x30ac,	// (0x000108f5) main_mup_eq_pane_t5

0x30c8,	// (0x00010911) main_mup_eq_pane_t6_ParamLimits

0x30c8,	// (0x00010911) main_mup_eq_pane_t6

0x30dc,	// (0x00010925) main_mup_eq_pane_t7_ParamLimits

0x30dc,	// (0x00010925) main_mup_eq_pane_t7

0x30f0,	// (0x00010939) main_mup_eq_pane_t8_ParamLimits

0x30f0,	// (0x00010939) main_mup_eq_pane_t8

0x3104,	// (0x0001094d) main_mup_eq_pane_t9_ParamLimits

0x3104,	// (0x0001094d) main_mup_eq_pane_t9

0x311e,	// (0x00010967) main_mup_eq_pane_t10_ParamLimits

0x311e,	// (0x00010967) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001ccc2) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001ccc2) main_mup_eq_pane_t

0x31cd,	// (0x00010a16) mup_equalizer_pane_cp5_ParamLimits

0x31e1,	// (0x00010a2a) mup_equalizer_pane_cp6_ParamLimits

0x31f5,	// (0x00010a3e) mup_equalizer_pane_cp7_ParamLimits

0x94ba,	// (0x00016d03) main_gallery_pane

0xbfae,	// (0x000197f7) smil2_volume_pane

0xbfb6,	// (0x000197ff) smil_status_volume_pane_g1_ParamLimits

0xbfc9,	// (0x00019812) smil_status_volume_pane_g2_ParamLimits

0xbfdc,	// (0x00019825) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001ce78) smil_status_volume_pane_g_ParamLimits

0xc1da,	// (0x00019a23) bg_popup_window_pane_cp07_ParamLimits

0xc1e8,	// (0x00019a31) blid_firmament_pane

0x48b6,	// (0x000120ff) aid_size_cell_gallery_ParamLimits

0x48b6,	// (0x000120ff) aid_size_cell_gallery

0x48cc,	// (0x00012115) grid_gallery_pane_ParamLimits

0x48cc,	// (0x00012115) grid_gallery_pane

0x48e5,	// (0x0001212e) cell_gallery_pane_ParamLimits

0x48e5,	// (0x0001212e) cell_gallery_pane

0xc30b,	// (0x00019b54) bg_cell_gallery_focus_pane_ParamLimits

0xc30b,	// (0x00019b54) bg_cell_gallery_focus_pane

0xc31d,	// (0x00019b66) cell_gallery_pane_g1_ParamLimits

0xc31d,	// (0x00019b66) cell_gallery_pane_g1

0x492e,	// (0x00012177) cell_gallery_pane_g2_ParamLimits

0x492e,	// (0x00012177) cell_gallery_pane_g2

0x493b,	// (0x00012184) cell_gallery_pane_g3_ParamLimits

0x493b,	// (0x00012184) cell_gallery_pane_g3

0xc329,	// (0x00019b72) cell_gallery_pane_g4_ParamLimits

0xc329,	// (0x00019b72) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001cf26) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001cf26) cell_gallery_pane_g

0xc335,	// (0x00019b7e) bg_cell_gallery_focus_pane_g1

0xc33d,	// (0x00019b86) bg_cell_gallery_focus_pane_g2

0xc345,	// (0x00019b8e) bg_cell_gallery_focus_pane_g3

0xc34d,	// (0x00019b96) bg_cell_gallery_focus_pane_g4

0xc355,	// (0x00019b9e) bg_cell_gallery_focus_pane_g5

0xc35d,	// (0x00019ba6) bg_cell_gallery_focus_pane_g6

0xc365,	// (0x00019bae) bg_cell_gallery_focus_pane_g7

0xc36d,	// (0x00019bb6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001cf2f) bg_cell_gallery_focus_pane_g

0xc375,	// (0x00019bbe) aid_firma_cardinal

0xc389,	// (0x00019bd2) blid_firmament_pane_t1

0xc3a0,	// (0x00019be9) blid_firmament_pane_t2

0xc3b7,	// (0x00019c00) blid_firmament_pane_t3

0xc3ce,	// (0x00019c17) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001cf40) blid_firmament_pane_t

0xc3e5,	// (0x00019c2e) blid_sat_info_pane

0xc3f5,	// (0x00019c3e) blid_sat_info_pane_g1

0xc3f5,	// (0x00019c3e) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001cf49) blid_sat_info_pane_g

0xc3ff,	// (0x00019c48) blid_sat_info_pane_t1

0xc40d,	// (0x00019c56) smil2_volume_content_pane

0xc416,	// (0x00019c5f) smil2_volume_pane_g1

0xc41e,	// (0x00019c67) smil2_volume_content_pane_g1

0xc427,	// (0x00019c70) smil2_volume_content_pane_g2

0xc430,	// (0x00019c79) smil2_volume_content_pane_g3

0xc439,	// (0x00019c82) smil2_volume_content_pane_g4

0xc442,	// (0x00019c8b) smil2_volume_content_pane_g5

0xc44b,	// (0x00019c94) smil2_volume_content_pane_g6

0xc454,	// (0x00019c9d) smil2_volume_content_pane_g7

0xc45d,	// (0x00019ca6) smil2_volume_content_pane_g8

0xc466,	// (0x00019caf) smil2_volume_content_pane_g9

0xc46f,	// (0x00019cb8) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001cf4e) smil2_volume_content_pane_g

0x166e,	// (0x0000eeb7) cale_week_day_heading_pane_t1_ParamLimits

0x169b,	// (0x0000eee4) cale_week_day_heading_pane_t2_ParamLimits

0x16c8,	// (0x0000ef11) cale_week_day_heading_pane_t3_ParamLimits

0x16f5,	// (0x0000ef3e) cale_week_day_heading_pane_t4_ParamLimits

0x1722,	// (0x0000ef6b) cale_week_day_heading_pane_t5_ParamLimits

0x174f,	// (0x0000ef98) cale_week_day_heading_pane_t6_ParamLimits

0x177e,	// (0x0000efc7) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001ca3a) cale_week_day_heading_pane_t_ParamLimits

0x9e4b,	// (0x00017694) bg_cale_side_pane_ParamLimits

0x17ab,	// (0x0000eff4) cale_week_time_pane_t1_ParamLimits

0x17c3,	// (0x0000f00c) cale_week_time_pane_t2_ParamLimits

0x17db,	// (0x0000f024) cale_week_time_pane_t3_ParamLimits

0x17f3,	// (0x0000f03c) cale_week_time_pane_t4_ParamLimits

0x180b,	// (0x0000f054) cale_week_time_pane_t5_ParamLimits

0x1823,	// (0x0000f06c) cale_week_time_pane_t6_ParamLimits

0x183b,	// (0x0000f084) cale_week_time_pane_t7_ParamLimits

0x1853,	// (0x0000f09c) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001ca49) cale_week_time_pane_t_ParamLimits

0x186b,	// (0x0000f0b4) cell_cale_week_pane_g2_ParamLimits

0x9e4b,	// (0x00017694) bg_cale_side_pane_cp01_ParamLimits

0x277e,	// (0x0000ffc7) cale_month_week_pane_t1_ParamLimits

0x2795,	// (0x0000ffde) cale_month_week_pane_t2_ParamLimits

0x27ac,	// (0x0000fff5) cale_month_week_pane_t3_ParamLimits

0x27c3,	// (0x0001000c) cale_month_week_pane_t4_ParamLimits

0x27da,	// (0x00010023) cale_month_week_pane_t5_ParamLimits

0x27f1,	// (0x0001003a) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001cb22) cale_month_week_pane_t_ParamLimits

0xa314,	// (0x00017b5d) cell_cale_month_pane_g1_ParamLimits

0x94ba,	// (0x00016d03) main_cale_event_viewer_pane

0x94ba,	// (0x00016d03) listscroll_cale_event_viewer_pane

0xc478,	// (0x00019cc1) list_cale_ev_pane

0xc480,	// (0x00019cc9) scroll_pane_cp023

0xc48c,	// (0x00019cd5) field_cale_ev_pane_ParamLimits

0xc48c,	// (0x00019cd5) field_cale_ev_pane

0xc4aa,	// (0x00019cf3) field_cale_ev_content_pane_ParamLimits

0xc4aa,	// (0x00019cf3) field_cale_ev_content_pane

0xc4b6,	// (0x00019cff) field_cale_ev_pane_g1_ParamLimits

0xc4b6,	// (0x00019cff) field_cale_ev_pane_g1

0xc4c2,	// (0x00019d0b) field_cale_ev_pane_g2_ParamLimits

0xc4c2,	// (0x00019d0b) field_cale_ev_pane_g2

0xc4da,	// (0x00019d23) field_cale_ev_pane_g3_ParamLimits

0xc4da,	// (0x00019d23) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001cf63) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001cf63) field_cale_ev_pane_g

0xc4f2,	// (0x00019d3b) field_cale_ev_pane_t1_ParamLimits

0xc4f2,	// (0x00019d3b) field_cale_ev_pane_t1

0xc509,	// (0x00019d52) field_cale_ev_content_pane_t1_ParamLimits

0xc509,	// (0x00019d52) field_cale_ev_content_pane_t1

0xabc3,	// (0x0001840c) bg_button_pane_cp01

0x9c9f,	// (0x000174e8) listscroll_cale_week_pane_ParamLimits

0x148a,	// (0x0000ecd3) popup_toolbar_window_cp01

0x9e39,	// (0x00017682) listscroll_cale_week_pane_t1_ParamLimits

0x9c9f,	// (0x000174e8) listscroll_cale_day_pane_ParamLimits

0x2954,	// (0x0001019d) popup_toolbar_window_cp02

0x9e39,	// (0x00017682) listscroll_cale_day_pane_t1_ParamLimits

0x9c9f,	// (0x000174e8) main_cale_month_pane_ParamLimits

0x3e62,	// (0x000116ab) popup_toolbar_window_cp03_ParamLimits

0x3e62,	// (0x000116ab) popup_toolbar_window_cp03

0x3507,	// (0x00010d50) main_image_pane_g2_ParamLimits

0x3507,	// (0x00010d50) main_image_pane_g2

0x3518,	// (0x00010d61) main_image_pane_g3_ParamLimits

0x3518,	// (0x00010d61) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001cd54) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001cd54) main_image_pane_g

0xad86,	// (0x000185cf) main_image_pane_t1_ParamLimits

0x3529,	// (0x00010d72) main_image_pane_t2_ParamLimits

0x3529,	// (0x00010d72) main_image_pane_t2

0x353b,	// (0x00010d84) main_image_pane_t3_ParamLimits

0x353b,	// (0x00010d84) main_image_pane_t3

0x3563,	// (0x00010dac) main_image_pane_t4_ParamLimits

0x3563,	// (0x00010dac) main_image_pane_t4

0x0003,

0xf512,	// (0x0001cd5b) main_image_pane_t_ParamLimits

0xf512,	// (0x0001cd5b) main_image_pane_t

0x3583,	// (0x00010dcc) popup_image_details_window_cp01

0x358d,	// (0x00010dd6) popup_toobar_trans_pane_cp01_ParamLimits

0x358d,	// (0x00010dd6) popup_toobar_trans_pane_cp01

0x3d0d,	// (0x00011556) popup_image_details_window_ParamLimits

0x3d0d,	// (0x00011556) popup_image_details_window

0xbf0f,	// (0x00019758) popup_image_focus_window

0x4128,	// (0x00011971) camera2_autofocus_pane_ParamLimits

0x4128,	// (0x00011971) camera2_autofocus_pane

0x94ba,	// (0x00016d03) bg_popup_sub_pane_cp06

0xc527,	// (0x00019d70) popup_image_focus_window_g1

0xc52f,	// (0x00019d78) popup_image_focus_window_g2

0xc537,	// (0x00019d80) popup_image_focus_window_g3

0xc53f,	// (0x00019d88) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001cf6a) popup_image_focus_window_g

0xc547,	// (0x00019d90) popup_image_focus_window_t1

0xc555,	// (0x00019d9e) popup_image_focus_window_t2

0xc565,	// (0x00019dae) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001cf73) popup_image_focus_window_t

0xc573,	// (0x00019dbc) camera2_autofocus_pane_g1

0x952a,	// (0x00016d73) bg_tb_trans_pane_cp01

0xc581,	// (0x00019dca) popup_image_details_window_g1

0xc594,	// (0x00019ddd) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001cf85) popup_image_details_window_g

0xc5bd,	// (0x00019e06) popup_image_details_window_t1

0xc5cf,	// (0x00019e18) popup_image_details_window_t2

0xc5e8,	// (0x00019e31) popup_image_details_window_t3

0xc5fc,	// (0x00019e45) popup_image_details_window_t4

0xc617,	// (0x00019e60) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001cf8c) popup_image_details_window_t

0x9c71,	// (0x000174ba) bg_calc_paper_pane_ParamLimits

0x94ba,	// (0x00016d03) grid_highlight_pane_cp013

0x9c85,	// (0x000174ce) list_calc_pane_ParamLimits

0x9c97,	// (0x000174e0) scroll_pane_cp024

0x9c9f,	// (0x000174e8) bg_calc_display_pane_ParamLimits

0x12bd,	// (0x0000eb06) calc_display_pane_t1_ParamLimits

0x12cf,	// (0x0000eb18) calc_display_pane_t2_ParamLimits

0x9cab,	// (0x000174f4) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001c9bc) calc_display_pane_t_ParamLimits

0x1387,	// (0x0000ebd0) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001c9d9) cell_calc_pane_g

0x1390,	// (0x0000ebd9) cell_calc_pane_t1

0x9d22,	// (0x0001756b) grid_highlight_pane_cp02_ParamLimits

0x9d38,	// (0x00017581) toolbar_button_pane_cp01_ParamLimits

0x9d38,	// (0x00017581) toolbar_button_pane_cp01

0xadcb,	// (0x00018614) temp_image_control_pane_ParamLimits

0xadcb,	// (0x00018614) temp_image_control_pane

0x952a,	// (0x00016d73) main_mp3_pane

0xc631,	// (0x00019e7a) temp_image_control_pane_g1_ParamLimits

0xc631,	// (0x00019e7a) temp_image_control_pane_g1

0xc63f,	// (0x00019e88) temp_image_control_pane_g2_ParamLimits

0xc63f,	// (0x00019e88) temp_image_control_pane_g2

0xc651,	// (0x00019e9a) temp_image_control_pane_g3_ParamLimits

0xc651,	// (0x00019e9a) temp_image_control_pane_g3

0x4978,	// (0x000121c1) temp_image_control_pane_g4_ParamLimits

0x4978,	// (0x000121c1) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001cf97) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001cf97) temp_image_control_pane_g

0xc631,	// (0x00019e7a) main_mp3_pane_g1

0x498b,	// (0x000121d4) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001cfa0) main_mp3_pane_g

0xc694,	// (0x00019edd) main_mp3_pane_t1

0x9f1a,	// (0x00017763) main_camera_pane_g8_ParamLimits

0x9f1a,	// (0x00017763) main_camera_pane_g8

0x1b25,	// (0x0000f36e) main_video_pane_g7_ParamLimits

0x1b25,	// (0x0000f36e) main_video_pane_g7

0xc01c,	// (0x00019865) main_camera2_pane_t7_ParamLimits

0xc01c,	// (0x00019865) main_camera2_pane_t7

0xa100,	// (0x00017949) scroll_pane_cp025_ParamLimits

0xa100,	// (0x00017949) scroll_pane_cp025

0xa114,	// (0x0001795d) scroll_pane_cp026_ParamLimits

0xa114,	// (0x0001795d) scroll_pane_cp026

0xa123,	// (0x0001796c) wml_content_pane_ParamLimits

0x94ba,	// (0x00016d03) main_touch_calib_pane

0x4a55,	// (0x0001229e) main_touch_calib_pane_g1

0x4a61,	// (0x000122aa) main_touch_calib_pane_g2

0x4a6d,	// (0x000122b6) main_touch_calib_pane_g3

0x4a79,	// (0x000122c2) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001cfbe) main_touch_calib_pane_g

0x4a85,	// (0x000122ce) main_touch_calib_pane_t1

0x4a9f,	// (0x000122e8) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001cfc7) main_touch_calib_pane_t

0xa973,	// (0x000181bc) mup_progress_pane_cp02

0xa992,	// (0x000181db) navi_pane_g1

0xa9f4,	// (0x0001823d) navi_pane_mp_t3

0x952a,	// (0x00016d73) main_mp3_pane_ParamLimits

0x3ea0,	// (0x000116e9) navi_pane_ParamLimits

0xc631,	// (0x00019e7a) main_mp3_pane_g1_ParamLimits

0x498b,	// (0x000121d4) main_mp3_pane_g2_ParamLimits

0x4999,	// (0x000121e2) main_mp3_pane_g3_ParamLimits

0x4999,	// (0x000121e2) main_mp3_pane_g3

0x49a7,	// (0x000121f0) main_mp3_pane_g4_ParamLimits

0x49a7,	// (0x000121f0) main_mp3_pane_g4

0xc661,	// (0x00019eaa) main_mp3_pane_g5_ParamLimits

0xc661,	// (0x00019eaa) main_mp3_pane_g5

0xc66f,	// (0x00019eb8) main_mp3_pane_g6_ParamLimits

0xc66f,	// (0x00019eb8) main_mp3_pane_g6

0xc67c,	// (0x00019ec5) main_mp3_pane_g7_ParamLimits

0xc67c,	// (0x00019ec5) main_mp3_pane_g7

0xc688,	// (0x00019ed1) main_mp3_pane_g8_ParamLimits

0xc688,	// (0x00019ed1) main_mp3_pane_g8

0xf757,	// (0x0001cfa0) main_mp3_pane_g_ParamLimits

0x49b3,	// (0x000121fc) main_mp3_pane_t2

0x49c1,	// (0x0001220a) main_mp3_pane_t3

0xc6a2,	// (0x00019eeb) main_mp3_pane_t4

0xc6b0,	// (0x00019ef9) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001cfb1) main_mp3_pane_t

0xc6be,	// (0x00019f07) mup_progress_pane_cp01

0x94d8,	// (0x00016d21) aid_zoom_text_secondary2

0xc478,	// (0x00019cc1) list_cale_ev2_pane

0xc480,	// (0x00019cc9) scroll_pane_cp023_ParamLimits

0x4af5,	// (0x0001233e) field_cale_ev2_pane_ParamLimits

0x4af5,	// (0x0001233e) field_cale_ev2_pane

0x4b15,	// (0x0001235e) field_cale_ev2_pane_g1_ParamLimits

0x4b15,	// (0x0001235e) field_cale_ev2_pane_g1

0x4b21,	// (0x0001236a) field_cale_ev2_pane_g2_ParamLimits

0x4b21,	// (0x0001236a) field_cale_ev2_pane_g2

0x4b39,	// (0x00012382) field_cale_ev2_pane_g3_ParamLimits

0x4b39,	// (0x00012382) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001cfd2) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001cfd2) field_cale_ev2_pane_g

0x4b51,	// (0x0001239a) field_cale_ev2_pane_t1_ParamLimits

0x4b51,	// (0x0001239a) field_cale_ev2_pane_t1

0x4b68,	// (0x000123b1) field_cale_ev2_pane_t2_ParamLimits

0x4b68,	// (0x000123b1) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001cfdb) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001cfdb) field_cale_ev2_pane_t

0x33bc,	// (0x00010c05) main_postcard_pane_g5_ParamLimits

0x33bc,	// (0x00010c05) main_postcard_pane_g5

0x33d2,	// (0x00010c1b) main_postcard_pane_g6_ParamLimits

0x33d2,	// (0x00010c1b) main_postcard_pane_g6

0x18e5,	// (0x0000f12e) camera2_autofocus_pane_cp_ParamLimits

0x18e5,	// (0x0000f12e) camera2_autofocus_pane_cp

0x952a,	// (0x00016d73) main_mup3_pane

0x4b9d,	// (0x000123e6) main_mup3_pane_g1_ParamLimits

0x4b9d,	// (0x000123e6) main_mup3_pane_g1

0x4bbf,	// (0x00012408) main_mup3_pane_g2_ParamLimits

0x4bbf,	// (0x00012408) main_mup3_pane_g2

0x4c3d,	// (0x00012486) main_mup3_pane_g3_ParamLimits

0x4c3d,	// (0x00012486) main_mup3_pane_g3

0x4c7f,	// (0x000124c8) main_mup3_pane_g4_ParamLimits

0x4c7f,	// (0x000124c8) main_mup3_pane_g4

0x4cc1,	// (0x0001250a) main_mup3_pane_g5_ParamLimits

0x4cc1,	// (0x0001250a) main_mup3_pane_g5

0x4d03,	// (0x0001254c) main_mup3_pane_g6_ParamLimits

0x4d03,	// (0x0001254c) main_mup3_pane_g6

0xc6d2,	// (0x00019f1b) main_mup3_pane_g7_ParamLimits

0xc6d2,	// (0x00019f1b) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001cfeb) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001cfeb) main_mup3_pane_g

0x4d7d,	// (0x000125c6) main_mup3_pane_t1_ParamLimits

0x4d7d,	// (0x000125c6) main_mup3_pane_t1

0x4ded,	// (0x00012636) main_mup3_pane_t2_ParamLimits

0x4ded,	// (0x00012636) main_mup3_pane_t2

0x4ebd,	// (0x00012706) main_mup3_pane_t4_ParamLimits

0x4ebd,	// (0x00012706) main_mup3_pane_t4

0x4f13,	// (0x0001275c) main_mup3_pane_t5_ParamLimits

0x4f13,	// (0x0001275c) main_mup3_pane_t5

0x4fc7,	// (0x00012810) main_mup3_pane_t6_ParamLimits

0x4fc7,	// (0x00012810) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001cffc) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001cffc) main_mup3_pane_t

0x507b,	// (0x000128c4) mup3_progress_pane_ParamLimits

0x507b,	// (0x000128c4) mup3_progress_pane

0x50fd,	// (0x00012946) popup_mup3_control_window_ParamLimits

0x50fd,	// (0x00012946) popup_mup3_control_window

0xc6e0,	// (0x00019f29) popup_mup3_text_window

0x512f,	// (0x00012978) mup3_progress_pane_t1

0x5146,	// (0x0001298f) mup3_progress_pane_t2

0xc6e8,	// (0x00019f31) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d009) mup3_progress_pane_t

0xc6ff,	// (0x00019f48) mup_progress_pane_cp03

0x94ba,	// (0x00016d03) bg_tb_trans_pane_cp04

0x515d,	// (0x000129a6) mup3_volume_pane

0x5165,	// (0x000129ae) popup_mup3_control_window_g1

0x516e,	// (0x000129b7) mup3_volume_pane_g1

0x5177,	// (0x000129c0) mup3_volume_pane_g2

0x5180,	// (0x000129c9) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d010) mup3_volume_pane_g

0x94ba,	// (0x00016d03) bg_tb_trans_pane_cp03

0xc70f,	// (0x00019f58) popup_mup3_text_window_g1

0xc717,	// (0x00019f60) popup_mup3_text_window_t1

0x9cf9,	// (0x00017542) list_calc_item_pane_g1_ParamLimits

0xc104,	// (0x0001994d) mup_volume_pane_cp_g1

0x4ab9,	// (0x00012302) main_touch_calib_pane_t3

0x4acd,	// (0x00012316) main_touch_calib_pane_t4

0x4ae1,	// (0x0001232a) main_touch_calib_pane_t5

0x94c4,	// (0x00016d0d) aid_cell_size_toolbar2

0x94cc,	// (0x00016d15) aid_popup3_width_pane

0x94d8,	// (0x00016d21) aid_zoom_text_msg_primary

0x9efa,	// (0x00017743) vorec_t7

0x9cbd,	// (0x00017506) bg_calc_paper_pane_g1_ParamLimits

0x9cc9,	// (0x00017512) bg_calc_paper_pane_g2_ParamLimits

0x9cd5,	// (0x0001751e) bg_calc_paper_pane_g3_ParamLimits

0x9ce1,	// (0x0001752a) bg_calc_paper_pane_g4_ParamLimits

0x9ced,	// (0x00017536) bg_calc_paper_pane_g5_ParamLimits

0x1316,	// (0x0000eb5f) bg_calc_paper_pane_g6_ParamLimits

0x1325,	// (0x0000eb6e) bg_calc_paper_pane_g7_ParamLimits

0x1334,	// (0x0000eb7d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001c9c3) bg_calc_paper_pane_g_ParamLimits

0x1347,	// (0x0000eb90) calc_bg_paper_pane_g9_ParamLimits

0x1a33,	// (0x0000f27c) image_qvga_pane_ParamLimits

0x1a33,	// (0x0000f27c) image_qvga_pane

0x9ba6,	// (0x000173ef) bg_popup_sub_pane_cp04_ParamLimits

0xad02,	// (0x0001854b) popup_mup_playback_window_g1_ParamLimits

0xad0e,	// (0x00018557) popup_mup_playback_window_t1_ParamLimits

0xad23,	// (0x0001856c) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001cd4f) popup_mup_playback_window_t_ParamLimits

0x461b,	// (0x00011e64) main_mup2_pane_g3_ParamLimits

0x461b,	// (0x00011e64) main_mup2_pane_g3

0x1d85,	// (0x0000f5ce) popup_toolbar_window_cp04

0xb105,	// (0x0001894e) popup_call2_audio_second_window_g3_ParamLimits

0xb105,	// (0x0001894e) popup_call2_audio_second_window_g3

0xb50f,	// (0x00018d58) popup_call2_audio_first_window_g4_ParamLimits

0xb50f,	// (0x00018d58) popup_call2_audio_first_window_g4

0xbb8e,	// (0x000193d7) popup_call2_audio_in_window_g4_ParamLimits

0xbb8e,	// (0x000193d7) popup_call2_audio_in_window_g4

0x34e9,	// (0x00010d32) aid_area_sk_bg_cut_ParamLimits

0x34e9,	// (0x00010d32) aid_area_sk_bg_cut

0xad38,	// (0x00018581) aid_area_sk_bg_cut_2_ParamLimits

0xad38,	// (0x00018581) aid_area_sk_bg_cut_2

0x491e,	// (0x00012167) aid_placing_details_win

0x4926,	// (0x0001216f) aid_placing_details_win_2

0xc573,	// (0x00019dbc) camera2_autofocus_pane_g1_ParamLimits

0x0f30,	// (0x0000e779) popup_fixed_preview_cale_window_ParamLimits

0x0f30,	// (0x0000e779) popup_fixed_preview_cale_window

0xaa4c,	// (0x00018295) navi_slider_pane_g3

0xaa55,	// (0x0001829e) navi_slider_pane_g4

0xaa5e,	// (0x000182a7) navi_slider_pane_g5

0xaa4c,	// (0x00018295) navi_slider_pane_g6

0xaa67,	// (0x000182b0) navi_slider_pane_g7

0xab88,	// (0x000183d1) mup_scale_pane_g3

0xab91,	// (0x000183da) mup_scale_pane_g4

0xab9a,	// (0x000183e3) mup_scale_pane_g5

0x3209,	// (0x00010a52) mup_scale_pane_g6

0x3212,	// (0x00010a5b) mup_scale_pane_g7

0xaa4c,	// (0x00018295) cams2_slider_pane_g3

0xc1b9,	// (0x00019a02) cams2_slider_pane_g4

0xc1c1,	// (0x00019a0a) cams2_slider_pane_g5

0xaa4c,	// (0x00018295) cams2_slider_pane_g6

0xc1c9,	// (0x00019a12) cams2_slider_pane_g7

0xc3f5,	// (0x00019c3e) camera2_autofocus_pane_cp_g1

0xc725,	// (0x00019f6e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc725,	// (0x00019f6e) bg_popup_preview_window_pane_cp02

0xc731,	// (0x00019f7a) list_fp_cale_pane_ParamLimits

0xc731,	// (0x00019f7a) list_fp_cale_pane

0xc73d,	// (0x00019f86) popup_fixed_preview_cale_window_t1_ParamLimits

0xc73d,	// (0x00019f86) popup_fixed_preview_cale_window_t1

0x5189,	// (0x000129d2) popup_fixed_preview_cale_window_t2_ParamLimits

0x5189,	// (0x000129d2) popup_fixed_preview_cale_window_t2

0x519e,	// (0x000129e7) popup_fixed_preview_cale_window_t3_ParamLimits

0x519e,	// (0x000129e7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d017) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d017) popup_fixed_preview_cale_window_t

0x51b3,	// (0x000129fc) list_single_fp_cale_pane_ParamLimits

0x51b3,	// (0x000129fc) list_single_fp_cale_pane

0xc75b,	// (0x00019fa4) list_single_fp_cale_pane_g1_ParamLimits

0xc75b,	// (0x00019fa4) list_single_fp_cale_pane_g1

0xc767,	// (0x00019fb0) list_single_fp_cale_pane_g2_ParamLimits

0xc767,	// (0x00019fb0) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d01e) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d01e) list_single_fp_cale_pane_g

0xc780,	// (0x00019fc9) list_single_fp_cale_pane_t1_ParamLimits

0xc780,	// (0x00019fc9) list_single_fp_cale_pane_t1

0xc792,	// (0x00019fdb) list_single_fp_cale_pane_t2_ParamLimits

0xc792,	// (0x00019fdb) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d025) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d025) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94ba,	// (0x00016d03) main_dialer_pane

0x51c8,	// (0x00012a11) aid_cell_size_keypad

0x51d2,	// (0x00012a1b) dialer_ne_pane

0x51da,	// (0x00012a23) grid_dialer_command_1_pane

0x51e2,	// (0x00012a2b) grid_dialer_command_2_pane

0x51ea,	// (0x00012a33) grid_dialer_keypad_pane

0x51fc,	// (0x00012a45) bg_popup_call_pane_cp06_ParamLimits

0x51fc,	// (0x00012a45) bg_popup_call_pane_cp06

0x5208,	// (0x00012a51) dialer_ne_clear_pane_ParamLimits

0x5208,	// (0x00012a51) dialer_ne_clear_pane

0xc7c5,	// (0x0001a00e) dialer_ne_pane_g1

0xc7cd,	// (0x0001a016) dialer_ne_pane_t1_ParamLimits

0xc7cd,	// (0x0001a016) dialer_ne_pane_t1

0x5214,	// (0x00012a5d) dialer_ne_pane_t2_ParamLimits

0x5214,	// (0x00012a5d) dialer_ne_pane_t2

0x523e,	// (0x00012a87) dialer_ne_pane_t3_ParamLimits

0x523e,	// (0x00012a87) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d02a) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d02a) dialer_ne_pane_t

0x526e,	// (0x00012ab7) dialer_ne_pane_t3_copy1_ParamLimits

0x526e,	// (0x00012ab7) dialer_ne_pane_t3_copy1

0x529d,	// (0x00012ae6) cell_dialer_keypad_pane_ParamLimits

0x529d,	// (0x00012ae6) cell_dialer_keypad_pane

0x52b4,	// (0x00012afd) cell_dialer_command_1_pane_ParamLimits

0x52b4,	// (0x00012afd) cell_dialer_command_1_pane

0x52ca,	// (0x00012b13) cell_dialer_command_2_pane_ParamLimits

0x52ca,	// (0x00012b13) cell_dialer_command_2_pane

0xc7df,	// (0x0001a028) bg_button_pane_cp02_ParamLimits

0xc7df,	// (0x0001a028) bg_button_pane_cp02

0x52d9,	// (0x00012b22) cell_dialer_keypad_pane_g1_ParamLimits

0x52d9,	// (0x00012b22) cell_dialer_keypad_pane_g1

0xc7df,	// (0x0001a028) bg_button_pane_cp03_ParamLimits

0xc7df,	// (0x0001a028) bg_button_pane_cp03

0x52ed,	// (0x00012b36) cell_dialer_command_1_pane_g1_ParamLimits

0x52ed,	// (0x00012b36) cell_dialer_command_1_pane_g1

0xc7eb,	// (0x0001a034) bg_button_pane_cp04

0x5301,	// (0x00012b4a) cell_dialer_command_2_pane_g1

0xaa32,	// (0x0001827b) bg_button_pane_cp06

0xc7f3,	// (0x0001a03c) dialer_ne_clear_pane_g1

0x2d4d,	// (0x00010596) navi_pane_g2

0x2d7b,	// (0x000105c4) navi_pane_g3

0x0002,

0xf409,	// (0x0001cc52) navi_pane_g

0x2da4,	// (0x000105ed) navi_pane_mv_g2

0x2dcb,	// (0x00010614) navi_pane_mv_g5

0x2dd3,	// (0x0001061c) navi_pane_mv_t1

0x9c9f,	// (0x000174e8) main_clock2_pane

0x5335,	// (0x00012b7e) main_clock2_list_pane_ParamLimits

0x5335,	// (0x00012b7e) main_clock2_list_pane

0x536b,	// (0x00012bb4) main_clock2_pane_t1_ParamLimits

0x536b,	// (0x00012bb4) main_clock2_pane_t1

0x53a7,	// (0x00012bf0) main_clock2_pane_t2_ParamLimits

0x53a7,	// (0x00012bf0) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d031) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d031) main_clock2_pane_t

0x5431,	// (0x00012c7a) popup_clock_analogue_window_cp03_ParamLimits

0x5431,	// (0x00012c7a) popup_clock_analogue_window_cp03

0x5456,	// (0x00012c9f) popup_clock_digital_window_cp02_ParamLimits

0x5456,	// (0x00012c9f) popup_clock_digital_window_cp02

0x54c7,	// (0x00012d10) main_clock2_list_single_pane_ParamLimits

0x54c7,	// (0x00012d10) main_clock2_list_single_pane

0xaa32,	// (0x0001827b) list_highlight_pane_cp05

0xc7fb,	// (0x0001a044) main_clock2_list_single_pane_t1

0x1d85,	// (0x0000f5ce) popup_toolbar_window_cp04_ParamLimits

0x4948,	// (0x00012191) camera2_autofocus_pane_g2_ParamLimits

0x4948,	// (0x00012191) camera2_autofocus_pane_g2

0x4954,	// (0x0001219d) camera2_autofocus_pane_g3_ParamLimits

0x4954,	// (0x0001219d) camera2_autofocus_pane_g3

0x4960,	// (0x000121a9) camera2_autofocus_pane_g4_ParamLimits

0x4960,	// (0x000121a9) camera2_autofocus_pane_g4

0x496c,	// (0x000121b5) camera2_autofocus_pane_g5_ParamLimits

0x496c,	// (0x000121b5) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001cf7a) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001cf7a) camera2_autofocus_pane_g

0x4b7d,	// (0x000123c6) camera2_autofocus_pane_cp_g2

0x4b85,	// (0x000123ce) camera2_autofocus_pane_cp_g3

0x4b8d,	// (0x000123d6) camera2_autofocus_pane_cp_g4

0x4b95,	// (0x000123de) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001cfe0) camera2_autofocus_pane_cp_g

0x51f4,	// (0x00012a3d) popup_dialer_spcha_window

0x94ba,	// (0x00016d03) bg_popup_sub_pane_cp07

0xc809,	// (0x0001a052) list_spcha_pane

0xc811,	// (0x0001a05a) list_single_spcha_pane_ParamLimits

0xc811,	// (0x0001a05a) list_single_spcha_pane

0x94ba,	// (0x00016d03) list_highlight_pane_cp06

0xc822,	// (0x0001a06b) list_single_spcha_pane_t1

0xb938,	// (0x00019181) popup_call2_audio_out_window_g4_ParamLimits

0xb938,	// (0x00019181) popup_call2_audio_out_window_g4

0x94ba,	// (0x00016d03) main_imed2_pane

0xbf17,	// (0x00019760) popup_imed_adjust2_window

0x3d25,	// (0x0001156e) popup_imed_trans_window_ParamLimits

0x3d25,	// (0x0001156e) popup_imed_trans_window

0xc233,	// (0x00019a7c) popup_blid_sat_info2_window_t1

0xc241,	// (0x00019a8a) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001cf0f) popup_blid_sat_info2_window_t

0x5571,	// (0x00012dba) aid_size_cell_colour_35

0x5591,	// (0x00012dda) aid_size_cell_colour_112

0x55b1,	// (0x00012dfa) aid_size_cell_effect

0xbeef,	// (0x00019738) bg_tb_trans_pane_cp02

0xa48d,	// (0x00017cd6) heading_imed_pane

0x55d1,	// (0x00012e1a) listscroll_imed_pane

0xc830,	// (0x0001a079) heading_imed_pane_g1

0xc838,	// (0x0001a081) heading_imed_pane_t1

0xc846,	// (0x0001a08f) grid_imed_colour_35_pane_ParamLimits

0xc846,	// (0x0001a08f) grid_imed_colour_35_pane

0x55dd,	// (0x00012e26) grid_imed_effect_pane

0xc85d,	// (0x0001a0a6) list_imed_aspect_pane

0x55f3,	// (0x00012e3c) scroll_pane_cp027_ParamLimits

0x55f3,	// (0x00012e3c) scroll_pane_cp027

0x5604,	// (0x00012e4d) cell_imed_effect_pane_ParamLimits

0x5604,	// (0x00012e4d) cell_imed_effect_pane

0xc865,	// (0x0001a0ae) cell_imed_colour_pane_ParamLimits

0xc865,	// (0x0001a0ae) cell_imed_colour_pane

0xc8a7,	// (0x0001a0f0) cell_imed_colour_pane_g1_ParamLimits

0xc8a7,	// (0x0001a0f0) cell_imed_colour_pane_g1

0xc8b8,	// (0x0001a101) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8b8,	// (0x0001a101) hgihlgiht_grid_pane_cp016

0x562b,	// (0x00012e74) cell_imed_effect_pane_g1

0x5633,	// (0x00012e7c) grid_highlight_pane_cp017

0xc8c9,	// (0x0001a112) list_imed_single_pane_ParamLimits

0xc8c9,	// (0x0001a112) list_imed_single_pane

0x94ba,	// (0x00016d03) list_highlight_pane_cp07

0xc8de,	// (0x0001a127) list_imed_aspect_pane_comp1_t1

0xbeef,	// (0x00019738) bg_tb_trans_pane_cp05

0xc900,	// (0x0001a149) popup_imed_adjust2_window_g1

0xc927,	// (0x0001a170) popup_imed_adjust2_window_t1

0xc93f,	// (0x0001a188) slider_imed_adjust_pane

0xc953,	// (0x0001a19c) slider_imed_adjust_pane_g1

0xc963,	// (0x0001a1ac) slider_imed_adjust_pane_g2

0xc973,	// (0x0001a1bc) slider_imed_adjust_pane_g3

0xc984,	// (0x0001a1cd) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d04e) slider_imed_adjust_pane_g

0x563c,	// (0x00012e85) aid_size_cell_clipart2

0x5648,	// (0x00012e91) grid_imed_clipart_pane

0xc995,	// (0x0001a1de) scroll_pane_cp031

0x5652,	// (0x00012e9b) cell_imed_clipart_pane_ParamLimits

0x5652,	// (0x00012e9b) cell_imed_clipart_pane

0x5674,	// (0x00012ebd) cell_imed_clipart_pane_g1

0x94ba,	// (0x00016d03) grid_highlight_pane_cp014

0x534a,	// (0x00012b93) main_clock2_pane_g1_ParamLimits

0x534a,	// (0x00012b93) main_clock2_pane_g1

0x5472,	// (0x00012cbb) aid_call2_pane_cp10

0x5484,	// (0x00012ccd) aid_call_pane_cp10

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g1

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g2

0x5496,	// (0x00012cdf) popup_clock_analogue_window_cp10_g3

0x5496,	// (0x00012cdf) popup_clock_analogue_window_cp10_g4

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d03c) popup_clock_analogue_window_cp10_g

0x54a8,	// (0x00012cf1) popup_clock_analogue_window_cp10_t1

0x54d9,	// (0x00012d22) clock_digital_number_pane_cp10_ParamLimits

0x54d9,	// (0x00012d22) clock_digital_number_pane_cp10

0x54f1,	// (0x00012d3a) clock_digital_number_pane_cp11_ParamLimits

0x54f1,	// (0x00012d3a) clock_digital_number_pane_cp11

0x5509,	// (0x00012d52) clock_digital_number_pane_cp12_ParamLimits

0x5509,	// (0x00012d52) clock_digital_number_pane_cp12

0x5521,	// (0x00012d6a) clock_digital_number_pane_cp13_ParamLimits

0x5521,	// (0x00012d6a) clock_digital_number_pane_cp13

0x5539,	// (0x00012d82) clock_digital_separator_pane_cp10_ParamLimits

0x5539,	// (0x00012d82) clock_digital_separator_pane_cp10

0x5551,	// (0x00012d9a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5551,	// (0x00012d9a) popup_clock_digital_window_cp02_t1

0x9b9e,	// (0x000173e7) clock_digital_number_pane_cp10_g1

0x9b9e,	// (0x000173e7) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d057) clock_digital_number_pane_cp10_g

0x9b9e,	// (0x000173e7) clock_digital_separator_pane_cp10_g1

0x9b9e,	// (0x000173e7) clock_digital_separator_pane_g2_cp10

0xaa02,	// (0x0001824b) navi_pane_vded_g4

0xaa0b,	// (0x00018254) navi_pane_vded_g5

0xaa14,	// (0x0001825d) navi_pane_vded_t1

0x94ba,	// (0x00016d03) main_vded_pane

0x567d,	// (0x00012ec6) main_vded_pane_g1

0x5687,	// (0x00012ed0) main_vded_pane_g2

0x5691,	// (0x00012eda) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d05c) main_vded_pane_g

0x569b,	// (0x00012ee4) main_vded_pane_t1

0x56a9,	// (0x00012ef2) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d063) main_vded_pane_t

0x56b7,	// (0x00012f00) vded_slider_pane

0x56bf,	// (0x00012f08) vded_video_pane

0xc99d,	// (0x0001a1e6) vded_video_pane_g1

0x56c7,	// (0x00012f10) vded_video_pane_g2

0xc3f5,	// (0x00019c3e) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d068) vded_video_pane_g

0xc9a7,	// (0x0001a1f0) vded_slider_pane_g1

0xc104,	// (0x0001994d) vded_slider_pane_g2

0xc9b0,	// (0x0001a1f9) vded_slider_pane_g3

0xc9b9,	// (0x0001a202) vded_slider_pane_g4

0xc9c2,	// (0x0001a20b) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d06f) vded_slider_pane_g

0x50e5,	// (0x0001292e) mup3_rocker_pane_ParamLimits

0x50e5,	// (0x0001292e) mup3_rocker_pane

0x56d0,	// (0x00012f19) mup3_control_keys_pane_g1

0x56d8,	// (0x00012f21) mup3_control_keys_pane_g2

0x56e0,	// (0x00012f29) mup3_control_keys_pane_g3

0x56e8,	// (0x00012f31) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d07a) mup3_control_keys_pane_g

0x0f67,	// (0x0000e7b0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f67,	// (0x0000e7b0) popup_toolbar2_fixed_window_cp01

0x5119,	// (0x00012962) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5119,	// (0x00012962) popup_toolbar2_fixed_window_cp02

0xb277,	// (0x00018ac0) popup_call2_audio_second_window_t4_ParamLimits

0xb277,	// (0x00018ac0) popup_call2_audio_second_window_t4

0xb7a5,	// (0x00018fee) popup_call2_audio_first_window_t6_ParamLimits

0xb7a5,	// (0x00018fee) popup_call2_audio_first_window_t6

0xba3b,	// (0x00019284) popup_call2_audio_out_window_t6_ParamLimits

0xba3b,	// (0x00019284) popup_call2_audio_out_window_t6

0x94ba,	// (0x00016d03) main_vitu_pane

0x56f8,	// (0x00012f41) aid_size_cell_itu_ParamLimits

0x56f8,	// (0x00012f41) aid_size_cell_itu

0x952a,	// (0x00016d73) bg_popup_window_pane_cp08_ParamLimits

0x952a,	// (0x00016d73) bg_popup_window_pane_cp08

0x570e,	// (0x00012f57) field_vitu_entry_pane_ParamLimits

0x570e,	// (0x00012f57) field_vitu_entry_pane

0x5725,	// (0x00012f6e) grid_vitu_function_pane_ParamLimits

0x5725,	// (0x00012f6e) grid_vitu_function_pane

0x5740,	// (0x00012f89) grid_vitu_itu_pane_ParamLimits

0x5740,	// (0x00012f89) grid_vitu_itu_pane

0x575e,	// (0x00012fa7) cell_vitu_itu_pane_ParamLimits

0x575e,	// (0x00012fa7) cell_vitu_itu_pane

0x5780,	// (0x00012fc9) cell_vitu_function_pane_ParamLimits

0x5780,	// (0x00012fc9) cell_vitu_function_pane

0x952a,	// (0x00016d73) bg_popup_sub_pane_cp08_ParamLimits

0x952a,	// (0x00016d73) bg_popup_sub_pane_cp08

0x5799,	// (0x00012fe2) field_vitu_entry_pane_t1_ParamLimits

0x5799,	// (0x00012fe2) field_vitu_entry_pane_t1

0xc9e3,	// (0x0001a22c) field_vitu_entry_pane_t2_ParamLimits

0xc9e3,	// (0x0001a22c) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d088) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d088) field_vitu_entry_pane_t

0xca00,	// (0x0001a249) bg_button_pane_cp05_ParamLimits

0xca00,	// (0x0001a249) bg_button_pane_cp05

0x57b7,	// (0x00013000) cell_vitu_itu_pane_g1

0x57cf,	// (0x00013018) cell_vitu_itu_pane_t1_ParamLimits

0x57cf,	// (0x00013018) cell_vitu_itu_pane_t1

0x57e1,	// (0x0001302a) cell_vitu_itu_pane_t2_ParamLimits

0x57e1,	// (0x0001302a) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d08d) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d08d) cell_vitu_itu_pane_t

0xca0e,	// (0x0001a257) bg_button_pane_cp07

0x5816,	// (0x0001305f) cell_vitu_function_pane_g1

0x9c39,	// (0x00017482) main_calc_pane_g1

0x0da7,	// (0x0000e5f0) aid_visual_content_pane

0x94ba,	// (0x00016d03) main_vradio_pane

0x581f,	// (0x00013068) main_vradio_pane_g1_ParamLimits

0x581f,	// (0x00013068) main_vradio_pane_g1

0xca18,	// (0x0001a261) main_vradio_pane_g2_ParamLimits

0xca18,	// (0x0001a261) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d094) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d094) main_vradio_pane_g

0x5838,	// (0x00013081) main_vradio_pane_t1_ParamLimits

0x5838,	// (0x00013081) main_vradio_pane_t1

0x584d,	// (0x00013096) main_vradio_pane_t2_ParamLimits

0x584d,	// (0x00013096) main_vradio_pane_t2

0xca25,	// (0x0001a26e) main_vradio_pane_t3_ParamLimits

0xca25,	// (0x0001a26e) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d099) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d099) main_vradio_pane_t

0x5862,	// (0x000130ab) vradio_rocker_control_pane_ParamLimits

0x5862,	// (0x000130ab) vradio_rocker_control_pane

0x5874,	// (0x000130bd) vradio_station_info_pane_ParamLimits

0x5874,	// (0x000130bd) vradio_station_info_pane

0xca39,	// (0x0001a282) vradio_frequency_info_pane_ParamLimits

0xca39,	// (0x0001a282) vradio_frequency_info_pane

0xc3f5,	// (0x00019c3e) vradio_station_info_pane_g1

0xca48,	// (0x0001a291) vradio_station_info_pane_t1_ParamLimits

0xca48,	// (0x0001a291) vradio_station_info_pane_t1

0xca6a,	// (0x0001a2b3) vradio_station_info_pane_t2_ParamLimits

0xca6a,	// (0x0001a2b3) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d0a0) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d0a0) vradio_station_info_pane_t

0xca7c,	// (0x0001a2c5) vradio_tuning_pane

0xca84,	// (0x0001a2cd) vradio_rocker_control_pane_g1

0xca8c,	// (0x0001a2d5) vradio_rocker_control_pane_g2

0xca94,	// (0x0001a2dd) vradio_rocker_control_pane_g3

0xca9c,	// (0x0001a2e5) vradio_rocker_control_pane_g4

0xcaa4,	// (0x0001a2ed) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d0a5) vradio_rocker_control_pane_g

0x5886,	// (0x000130cf) vradio_frequency_info_pane_g1

0xcaac,	// (0x0001a2f5) vradio_frequency_info_pane_t1_ParamLimits

0xcaac,	// (0x0001a2f5) vradio_frequency_info_pane_t1

0x5890,	// (0x000130d9) vradio_tuning_pane_g1

0x589b,	// (0x000130e4) vradio_tuning_pane_t1

0x94e8,	// (0x00016d31) area_side_right_pane_ParamLimits

0x94e8,	// (0x00016d31) area_side_right_pane

0xbeb6,	// (0x000196ff) status_small_pane_g1

0xbebe,	// (0x00019707) status_small_pane_g2

0xbec7,	// (0x00019710) status_small_pane_g3

0xbed0,	// (0x00019719) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001ce65) status_small_pane_g

0xbed9,	// (0x00019722) status_small_pane_t1

0x94ba,	// (0x00016d03) main_video3_pane

0xcac0,	// (0x0001a309) cams_zoom_vslider_pane

0xcac8,	// (0x0001a311) image3_wide_pane_ParamLimits

0xcac8,	// (0x0001a311) image3_wide_pane

0xcae2,	// (0x0001a32b) image3_wide_small_pane

0xcaee,	// (0x0001a337) main_video3_pane_g1_ParamLimits

0xcaee,	// (0x0001a337) main_video3_pane_g1

0xcb0a,	// (0x0001a353) main_video3_pane_g2_ParamLimits

0xcb0a,	// (0x0001a353) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d0b0) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d0b0) main_video3_pane_g

0xcb26,	// (0x0001a36f) main_video3_pane_t1_ParamLimits

0xcb26,	// (0x0001a36f) main_video3_pane_t1

0xcb51,	// (0x0001a39a) main_video3_pane_t2_ParamLimits

0xcb51,	// (0x0001a39a) main_video3_pane_t2

0xcb7c,	// (0x0001a3c5) main_video3_pane_t3_ParamLimits

0xcb7c,	// (0x0001a3c5) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d0b5) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d0b5) main_video3_pane_t

0xcba9,	// (0x0001a3f2) cams_zoom_vslider_pane_g1

0xcbb2,	// (0x0001a3fb) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d0bc) cams_zoom_vslider_pane_g

0xcbc8,	// (0x0001a411) small_slider_vertical_pane

0xc3f5,	// (0x00019c3e) small_slider_vertical_pane_g1

0xc3f5,	// (0x00019c3e) small_slider_vertical_pane_g2

0xcbd0,	// (0x0001a419) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d0c1) small_slider_vertical_pane_g

0x94ba,	// (0x00016d03) main_hwr_training_pane

0xcbd9,	// (0x0001a422) hwr_training_instruct_pane_ParamLimits

0xcbd9,	// (0x0001a422) hwr_training_instruct_pane

0x58aa,	// (0x000130f3) hwr_training_navi_pane_ParamLimits

0x58aa,	// (0x000130f3) hwr_training_navi_pane

0x58c9,	// (0x00013112) hwr_training_write_pane_ParamLimits

0x58c9,	// (0x00013112) hwr_training_write_pane

0x94ba,	// (0x00016d03) bg_frame_shadow_pane

0xcc10,	// (0x0001a459) hwr_training_write_pane_g1

0xcc18,	// (0x0001a461) hwr_training_write_pane_g2

0xcc20,	// (0x0001a469) hwr_training_write_pane_g3

0xcc28,	// (0x0001a471) hwr_training_write_pane_g4

0xcc30,	// (0x0001a479) hwr_training_write_pane_g5

0xcc38,	// (0x0001a481) hwr_training_write_pane_g6

0xcc40,	// (0x0001a489) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d0c8) hwr_training_write_pane_g

0xcc48,	// (0x0001a491) hwr_training_navi_pane_g1_ParamLimits

0xcc48,	// (0x0001a491) hwr_training_navi_pane_g1

0xcc5a,	// (0x0001a4a3) hwr_training_navi_pane_g2_ParamLimits

0xcc5a,	// (0x0001a4a3) hwr_training_navi_pane_g2

0xcc6c,	// (0x0001a4b5) hwr_training_navi_pane_g3_ParamLimits

0xcc6c,	// (0x0001a4b5) hwr_training_navi_pane_g3

0xcc7c,	// (0x0001a4c5) hwr_training_navi_pane_g4_ParamLimits

0xcc7c,	// (0x0001a4c5) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d0d7) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d0d7) hwr_training_navi_pane_g

0xcc89,	// (0x0001a4d2) hwr_training_navi_pane_t1

0x5911,	// (0x0001315a) list_single_hwr_training_instruct_pane_ParamLimits

0x5911,	// (0x0001315a) list_single_hwr_training_instruct_pane

0xcc97,	// (0x0001a4e0) list_single_hwr_training_instruct_pane_t1

0xc335,	// (0x00019b7e) bg_frame_shadow_pane_g1

0xcca6,	// (0x0001a4ef) bg_frame_shadow_pane_g2

0xccae,	// (0x0001a4f7) bg_frame_shadow_pane_g3

0xccb6,	// (0x0001a4ff) bg_frame_shadow_pane_g4

0xccbe,	// (0x0001a507) bg_frame_shadow_pane_g5

0xccc6,	// (0x0001a50f) bg_frame_shadow_pane_g6

0xccce,	// (0x0001a517) bg_frame_shadow_pane_g7

0x9d7c,	// (0x000175c5) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d0e2) bg_frame_shadow_pane_g

0x94ba,	// (0x00016d03) main_video_tele_dialer_pane

0x5926,	// (0x0001316f) aid_size_cell_video_keypad_ParamLimits

0x5926,	// (0x0001316f) aid_size_cell_video_keypad

0x5940,	// (0x00013189) grid_video_dialer_keypad_pane_ParamLimits

0x5940,	// (0x00013189) grid_video_dialer_keypad_pane

0x598a,	// (0x000131d3) video_down_pane_cp_ParamLimits

0x598a,	// (0x000131d3) video_down_pane_cp

0x599a,	// (0x000131e3) cell_video_dialer_keypad_pane_ParamLimits

0x599a,	// (0x000131e3) cell_video_dialer_keypad_pane

0xccf2,	// (0x0001a53b) bg_button_pane_cp08_ParamLimits

0xccf2,	// (0x0001a53b) bg_button_pane_cp08

0x59bc,	// (0x00013205) cell_video_dialer_keypad_pane_g1_ParamLimits

0x59bc,	// (0x00013205) cell_video_dialer_keypad_pane_g1

0x50cf,	// (0x00012918) mup3_rocker2_pane_ParamLimits

0x50cf,	// (0x00012918) mup3_rocker2_pane

0xc3f5,	// (0x00019c3e) mup3_rocker2_pane_g1

0x3c06,	// (0x0001144f) main_dialer2_pane

0x94ba,	// (0x00016d03) main_mp4_pane

0xcd06,	// (0x0001a54f) main_mp4_pane_g1_ParamLimits

0xcd06,	// (0x0001a54f) main_mp4_pane_g1

0xcd06,	// (0x0001a54f) main_mp4_pane_g2_ParamLimits

0xcd06,	// (0x0001a54f) main_mp4_pane_g2

0x59f6,	// (0x0001323f) main_mp4_pane_g3_ParamLimits

0x59f6,	// (0x0001323f) main_mp4_pane_g3

0xcd14,	// (0x0001a55d) main_mp4_pane_g4_ParamLimits

0xcd14,	// (0x0001a55d) main_mp4_pane_g4

0xcd3c,	// (0x0001a585) main_mp4_pane_g5_ParamLimits

0xcd3c,	// (0x0001a585) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d102) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d102) main_mp4_pane_g

0xcd8c,	// (0x0001a5d5) main_mp4_pane_t1_ParamLimits

0xcd8c,	// (0x0001a5d5) main_mp4_pane_t1

0xcde8,	// (0x0001a631) main_mp4_pane_t2_ParamLimits

0xcde8,	// (0x0001a631) main_mp4_pane_t2

0xce3a,	// (0x0001a683) main_mp4_pane_t3_ParamLimits

0xce3a,	// (0x0001a683) main_mp4_pane_t3

0xce5a,	// (0x0001a6a3) main_mp4_pane_t4_ParamLimits

0xce5a,	// (0x0001a6a3) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d10f) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d10f) main_mp4_pane_t

0xce9e,	// (0x0001a6e7) mp4_progress_pane_ParamLimits

0xce9e,	// (0x0001a6e7) mp4_progress_pane

0xcee8,	// (0x0001a731) mp4_rocker_pane_ParamLimits

0xcee8,	// (0x0001a731) mp4_rocker_pane

0xcf10,	// (0x0001a759) mp4_progress_pane_t1

0xcf29,	// (0x0001a772) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d118) mp4_progress_pane_t

0xcf42,	// (0x0001a78b) mup_progress_pane_cp04

0xc3f5,	// (0x00019c3e) mp4_rocker_pane_g1

0x5a32,	// (0x0001327b) aid_cell_size_keypad2_ParamLimits

0x5a32,	// (0x0001327b) aid_cell_size_keypad2

0x5a48,	// (0x00013291) dialer2_ne_pane_ParamLimits

0x5a48,	// (0x00013291) dialer2_ne_pane

0x5a62,	// (0x000132ab) grid_dialer2_keypad_pane_ParamLimits

0x5a62,	// (0x000132ab) grid_dialer2_keypad_pane

0xc1da,	// (0x00019a23) bg_popup_call_pane_cp07_ParamLimits

0xc1da,	// (0x00019a23) bg_popup_call_pane_cp07

0x5a7e,	// (0x000132c7) dialer2_ne_pane_t1_ParamLimits

0x5a7e,	// (0x000132c7) dialer2_ne_pane_t1

0x5ab9,	// (0x00013302) cell_dialer2_keypad_pane_ParamLimits

0x5ab9,	// (0x00013302) cell_dialer2_keypad_pane

0xcf60,	// (0x0001a7a9) bg_button_pane_pane_cp04_ParamLimits

0xcf60,	// (0x0001a7a9) bg_button_pane_pane_cp04

0x5adb,	// (0x00013324) cell_dialer2_keypad_pane_g1_ParamLimits

0x5adb,	// (0x00013324) cell_dialer2_keypad_pane_g1

0x1c5b,	// (0x0000f4a4) aid_placing_vt_set_content_ParamLimits

0x1c5b,	// (0x0000f4a4) aid_placing_vt_set_content

0x1c81,	// (0x0000f4ca) aid_placing_vt_set_title_ParamLimits

0x1c81,	// (0x0000f4ca) aid_placing_vt_set_title

0x94ba,	// (0x00016d03) main_image3_pane

0x5ba1,	// (0x000133ea) area_side_right_pane_cp01_ParamLimits

0x5ba1,	// (0x000133ea) area_side_right_pane_cp01

0xcd06,	// (0x0001a54f) main_image3_pane_g1_ParamLimits

0xcd06,	// (0x0001a54f) main_image3_pane_g1

0x5bb8,	// (0x00013401) main_image3_pane_g2_ParamLimits

0x5bb8,	// (0x00013401) main_image3_pane_g2

0x5be0,	// (0x00013429) main_image3_pane_g3_ParamLimits

0x5be0,	// (0x00013429) main_image3_pane_g3

0x5c0a,	// (0x00013453) main_image3_pane_g4_ParamLimits

0x5c0a,	// (0x00013453) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d127) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d127) main_image3_pane_g

0x5c34,	// (0x0001347d) main_image3_pane_t1_ParamLimits

0x5c34,	// (0x0001347d) main_image3_pane_t1

0x5c8c,	// (0x000134d5) main_image3_pane_t2_ParamLimits

0x5c8c,	// (0x000134d5) main_image3_pane_t2

0x5cde,	// (0x00013527) main_image3_pane_t3_ParamLimits

0x5cde,	// (0x00013527) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d130) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d130) main_image3_pane_t

0x952a,	// (0x00016d73) grid_sctrl_middle_pane_cp01_ParamLimits

0x952a,	// (0x00016d73) grid_sctrl_middle_pane_cp01

0x5d66,	// (0x000135af) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d66,	// (0x000135af) cell_sctrl_middle_pane_cp01

0x5d83,	// (0x000135cc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d83,	// (0x000135cc) cell_sctrl_middle_pane_cp01_g1

0x94ba,	// (0x00016d03) main_call4_pane

0x5d99,	// (0x000135e2) aid_size_button_call4_ParamLimits

0x5d99,	// (0x000135e2) aid_size_button_call4

0x5dca,	// (0x00013613) call4_windows_pane_ParamLimits

0x5dca,	// (0x00013613) call4_windows_pane

0x5dea,	// (0x00013633) grid_call4_button_pane_ParamLimits

0x5dea,	// (0x00013633) grid_call4_button_pane

0xcf9e,	// (0x0001a7e7) call4_windows_conf_pane

0xcfb5,	// (0x0001a7fe) popup_call4_audio_first_window_ParamLimits

0xcfb5,	// (0x0001a7fe) popup_call4_audio_first_window

0xd001,	// (0x0001a84a) popup_call4_audio_second_window_ParamLimits

0xd001,	// (0x0001a84a) popup_call4_audio_second_window

0xd015,	// (0x0001a85e) popup_call4_audio_wait_window_ParamLimits

0xd015,	// (0x0001a85e) popup_call4_audio_wait_window

0x5e17,	// (0x00013660) cell_call4_button_pane_ParamLimits

0x5e17,	// (0x00013660) cell_call4_button_pane

0x5e40,	// (0x00013689) bg_button_pane_cp09_ParamLimits

0x5e40,	// (0x00013689) bg_button_pane_cp09

0x5e4c,	// (0x00013695) cell_call4_button_pane_g1_ParamLimits

0x5e4c,	// (0x00013695) cell_call4_button_pane_g1

0x5e72,	// (0x000136bb) cell_call4_button_pane_t1_ParamLimits

0x5e72,	// (0x000136bb) cell_call4_button_pane_t1

0xd05d,	// (0x0001a8a6) popup_call4_audio_conf_window_ParamLimits

0xd05d,	// (0x0001a8a6) popup_call4_audio_conf_window

0x512f,	// (0x00012978) mup3_progress_pane_t1_ParamLimits

0x5146,	// (0x0001298f) mup3_progress_pane_t2_ParamLimits

0xc6e8,	// (0x00019f31) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d009) mup3_progress_pane_t_ParamLimits

0xc6ff,	// (0x00019f48) mup_progress_pane_cp03_ParamLimits

0x56f0,	// (0x00012f39) mup3_control_keys_pane_g4_copy1

0xcecc,	// (0x0001a715) mp4_rocker2_pane_ParamLimits

0xcecc,	// (0x0001a715) mp4_rocker2_pane

0xd071,	// (0x0001a8ba) mp4_rocker2_pane_g1

0xd079,	// (0x0001a8c2) mp4_rocker2_pane_g2

0xd081,	// (0x0001a8ca) mp4_rocker2_pane_g3

0xd089,	// (0x0001a8d2) mp4_rocker2_pane_g4

0xd091,	// (0x0001a8da) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d139) mp4_rocker2_pane_g

0x94ba,	// (0x00016d03) main_camera4_pane

0x94ba,	// (0x00016d03) main_video4_pane

0x5958,	// (0x000131a1) main_video_tele_dialer_pane_t1_ParamLimits

0x5958,	// (0x000131a1) main_video_tele_dialer_pane_t1

0x5971,	// (0x000131ba) main_video_tele_dialer_pane_t2_ParamLimits

0x5971,	// (0x000131ba) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d0f3) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d0f3) main_video_tele_dialer_pane_t

0x5eb0,	// (0x000136f9) cam4_autofocus_pane_ParamLimits

0x5eb0,	// (0x000136f9) cam4_autofocus_pane

0x5ec6,	// (0x0001370f) cam4_image_uncrop_pane_ParamLimits

0x5ec6,	// (0x0001370f) cam4_image_uncrop_pane

0x5ee0,	// (0x00013729) cam4_indicators_pane_ParamLimits

0x5ee0,	// (0x00013729) cam4_indicators_pane

0x5f0b,	// (0x00013754) main_camera4_pane_g1_ParamLimits

0x5f0b,	// (0x00013754) main_camera4_pane_g1

0x5f1e,	// (0x00013767) main_camera4_pane_g2_ParamLimits

0x5f1e,	// (0x00013767) main_camera4_pane_g2

0x5f31,	// (0x0001377a) main_camera4_pane_g3_ParamLimits

0x5f31,	// (0x0001377a) main_camera4_pane_g3

0x5f44,	// (0x0001378d) main_camera4_pane_g4_ParamLimits

0x5f44,	// (0x0001378d) main_camera4_pane_g4

0x5f57,	// (0x000137a0) main_camera4_pane_g5_ParamLimits

0x5f57,	// (0x000137a0) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d144) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d144) main_camera4_pane_g

0x5f7b,	// (0x000137c4) main_camera4_pane_t1_ParamLimits

0x5f7b,	// (0x000137c4) main_camera4_pane_t1

0xc661,	// (0x00019eaa) bg_tb_trans_pane_cp06

0xd0bd,	// (0x0001a906) cam4_indicators_pane_g1

0xd0ce,	// (0x0001a917) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d15f) cam4_indicators_pane_g

0xd0ec,	// (0x0001a935) cam4_indicators_pane_t1

0x5fdf,	// (0x00013828) main_video4_pane_g1_ParamLimits

0x5fdf,	// (0x00013828) main_video4_pane_g1

0x5ff2,	// (0x0001383b) main_video4_pane_g2_ParamLimits

0x5ff2,	// (0x0001383b) main_video4_pane_g2

0x6006,	// (0x0001384f) main_video4_pane_g3_ParamLimits

0x6006,	// (0x0001384f) main_video4_pane_g3

0x601a,	// (0x00013863) main_video4_pane_g4_ParamLimits

0x601a,	// (0x00013863) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d166) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d166) main_video4_pane_g

0x6042,	// (0x0001388b) vid4_indicators_pane_ParamLimits

0x6042,	// (0x0001388b) vid4_indicators_pane

0x6072,	// (0x000138bb) video4_image_uncrop_cif_pane_ParamLimits

0x6072,	// (0x000138bb) video4_image_uncrop_cif_pane

0x608c,	// (0x000138d5) video4_image_uncrop_nhd_pane_ParamLimits

0x608c,	// (0x000138d5) video4_image_uncrop_nhd_pane

0x5ec6,	// (0x0001370f) video4_image_uncrop_vga_pane_ParamLimits

0x5ec6,	// (0x0001370f) video4_image_uncrop_vga_pane

0xcbba,	// (0x0001a403) bg_tb_trans_pane_cp07

0x60a0,	// (0x000138e9) vid4_indicators_pane_g1

0x60ad,	// (0x000138f6) vid4_indicators_pane_g2

0x60ba,	// (0x00013903) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d171) vid4_indicators_pane_g

0x60df,	// (0x00013928) vid4_indicators_pane_t1

0x60f1,	// (0x0001393a) cam4_autofocus_pane_g1

0x60f9,	// (0x00013942) cam4_autofocus_pane_g2

0x6101,	// (0x0001394a) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d17c) cam4_autofocus_pane_g

0x6109,	// (0x00013952) cam4_autofocus_pane_g3_copy1

0xccd6,	// (0x0001a51f) video_down_pane_cp_t1

0xcce4,	// (0x0001a52d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d0f8) video_down_pane_cp_t

0x952a,	// (0x00016d73) popup_vitu2_window_ParamLimits

0x952a,	// (0x00016d73) popup_vitu2_window

0x6111,	// (0x0001395a) aid_size_cell2_itu2_ParamLimits

0x6111,	// (0x0001395a) aid_size_cell2_itu2

0x6137,	// (0x00013980) aid_size_cell_itu2_ParamLimits

0x6137,	// (0x00013980) aid_size_cell_itu2

0x6193,	// (0x000139dc) bg_popup_window_pane_cp09_ParamLimits

0x6193,	// (0x000139dc) bg_popup_window_pane_cp09

0x61a1,	// (0x000139ea) field_vitu2_entry_pane_ParamLimits

0x61a1,	// (0x000139ea) field_vitu2_entry_pane

0x61c7,	// (0x00013a10) grid_vitu2_function_pane_ParamLimits

0x61c7,	// (0x00013a10) grid_vitu2_function_pane

0x6218,	// (0x00013a61) grid_vitu2_itu_pane_ParamLimits

0x6218,	// (0x00013a61) grid_vitu2_itu_pane

0x62ab,	// (0x00013af4) cell_vitu2_itu_pane_ParamLimits

0x62ab,	// (0x00013af4) cell_vitu2_itu_pane

0x62cf,	// (0x00013b18) cell_vitu2_function_pane_ParamLimits

0x62cf,	// (0x00013b18) cell_vitu2_function_pane

0xd118,	// (0x0001a961) bg_popup_call_pane_cp08_ParamLimits

0xd118,	// (0x0001a961) bg_popup_call_pane_cp08

0xd131,	// (0x0001a97a) field_vitu2_entry_pane_g1

0xd13d,	// (0x0001a986) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d183) field_vitu2_entry_pane_g

0xd157,	// (0x0001a9a0) field_vitu2_entry_pane_t1_ParamLimits

0xd157,	// (0x0001a9a0) field_vitu2_entry_pane_t1

0xd186,	// (0x0001a9cf) field_vitu2_entry_pane_t2_ParamLimits

0xd186,	// (0x0001a9cf) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d18a) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d18a) field_vitu2_entry_pane_t

0x630e,	// (0x00013b57) bg_button_pane_cp010_ParamLimits

0x630e,	// (0x00013b57) bg_button_pane_cp010

0x631c,	// (0x00013b65) cell_vitu2_itu_pane_g1

0x633a,	// (0x00013b83) cell_vitu2_itu_pane_t1_ParamLimits

0x633a,	// (0x00013b83) cell_vitu2_itu_pane_t1

0x63a0,	// (0x00013be9) cell_vitu2_itu_pane_t2_ParamLimits

0x63a0,	// (0x00013be9) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d194) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d194) cell_vitu2_itu_pane_t

0x952a,	// (0x00016d73) bg_button_pane_cp011

0x647c,	// (0x00013cc5) cell_vitu2_function_pane_g1

0x94ba,	// (0x00016d03) main_myfav_hc_pane

0x5d2e,	// (0x00013577) popup_image3_note_pane_ParamLimits

0x5d2e,	// (0x00013577) popup_image3_note_pane

0x5d4a,	// (0x00013593) popup_image3_tool_bar_pane_ParamLimits

0x5d4a,	// (0x00013593) popup_image3_tool_bar_pane

0x6424,	// (0x00013c6d) cell_vitu2_itu_pane_t3_ParamLimits

0x6424,	// (0x00013c6d) cell_vitu2_itu_pane_t3

0x94ba,	// (0x00016d03) bg_popup_trans_pane

0xd1ab,	// (0x0001a9f4) grid_image3_tool_bar_pane

0xd1b5,	// (0x0001a9fe) bg_popup_trans_pane_g1

0xa209,	// (0x00017a52) bg_popup_trans_pane_g2

0xd1bd,	// (0x0001aa06) bg_popup_trans_pane_g3

0xd1c5,	// (0x0001aa0e) bg_popup_trans_pane_g4

0xd1cd,	// (0x0001aa16) bg_popup_trans_pane_g5

0xd1d5,	// (0x0001aa1e) bg_popup_trans_pane_g6

0xd1dd,	// (0x0001aa26) bg_popup_trans_pane_g7

0xd1e5,	// (0x0001aa2e) bg_popup_trans_pane_g8

0xa1e9,	// (0x00017a32) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d19b) bg_popup_trans_pane_g

0xd1ed,	// (0x0001aa36) cell_image3_tool_bar_pane_ParamLimits

0xd1ed,	// (0x0001aa36) cell_image3_tool_bar_pane

0xc3f5,	// (0x00019c3e) cell_image3_tool_bar_pane_g1

0x94ba,	// (0x00016d03) bg_popup_trans_pane_cp1

0xd201,	// (0x0001aa4a) popup_image3_note_pane_t1

0xd20f,	// (0x0001aa58) popup_image3_note_pane_t2

0xd21d,	// (0x0001aa66) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d1ae) popup_image3_note_pane_t

0xd22b,	// (0x0001aa74) popup_image3_note_pane_t3_copy1

0x6490,	// (0x00013cd9) bg_myfav_hc_instruction_pane_ParamLimits

0x6490,	// (0x00013cd9) bg_myfav_hc_instruction_pane

0x64a4,	// (0x00013ced) cell_myfav_contact_pane_ParamLimits

0x64a4,	// (0x00013ced) cell_myfav_contact_pane

0x64c2,	// (0x00013d0b) cell_myfav_contact_pane_cp1_ParamLimits

0x64c2,	// (0x00013d0b) cell_myfav_contact_pane_cp1

0x64da,	// (0x00013d23) cell_myfav_contact_pane_cp2_ParamLimits

0x64da,	// (0x00013d23) cell_myfav_contact_pane_cp2

0x64f2,	// (0x00013d3b) cell_myfav_contact_pane_cp3_ParamLimits

0x64f2,	// (0x00013d3b) cell_myfav_contact_pane_cp3

0x6509,	// (0x00013d52) cell_myfav_contact_pane_cp4_ParamLimits

0x6509,	// (0x00013d52) cell_myfav_contact_pane_cp4

0x6521,	// (0x00013d6a) cell_myfav_contact_pane_cp5_ParamLimits

0x6521,	// (0x00013d6a) cell_myfav_contact_pane_cp5

0x6535,	// (0x00013d7e) cell_myfav_contact_pane_cp6_ParamLimits

0x6535,	// (0x00013d7e) cell_myfav_contact_pane_cp6

0x654b,	// (0x00013d94) cell_myfav_contact_pane_cp7_ParamLimits

0x654b,	// (0x00013d94) cell_myfav_contact_pane_cp7

0xd239,	// (0x0001aa82) listscroll_gen_pane_cp05

0x6565,	// (0x00013dae) main_myfav_hc_pane_g1_ParamLimits

0x6565,	// (0x00013dae) main_myfav_hc_pane_g1

0x657f,	// (0x00013dc8) main_myfav_hc_pane_g2_ParamLimits

0x657f,	// (0x00013dc8) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d1b5) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d1b5) main_myfav_hc_pane_g

0x65b1,	// (0x00013dfa) main_myfav_hc_pane_t1_ParamLimits

0x65b1,	// (0x00013dfa) main_myfav_hc_pane_t1

0xd242,	// (0x0001aa8b) main_myfav_hc_pane_t2_ParamLimits

0xd242,	// (0x0001aa8b) main_myfav_hc_pane_t2

0xd254,	// (0x0001aa9d) main_myfav_hc_pane_t3_ParamLimits

0xd254,	// (0x0001aa9d) main_myfav_hc_pane_t3

0x65c8,	// (0x00013e11) main_myfav_hc_pane_t4_ParamLimits

0x65c8,	// (0x00013e11) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d1bc) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d1bc) main_myfav_hc_pane_t

0xc3f5,	// (0x00019c3e) bg_myfav_hc_instruction_pane_g1

0xd266,	// (0x0001aaaf) cell_myfav_contact_pane_g1_ParamLimits

0xd266,	// (0x0001aaaf) cell_myfav_contact_pane_g1

0xd266,	// (0x0001aaaf) cell_myfav_contact_pane_g2_ParamLimits

0xd266,	// (0x0001aaaf) cell_myfav_contact_pane_g2

0xd272,	// (0x0001aabb) cell_myfav_contact_pane_g3_ParamLimits

0xd272,	// (0x0001aabb) cell_myfav_contact_pane_g3

0xc6d2,	// (0x00019f1b) cell_myfav_contact_pane_g4_ParamLimits

0xc6d2,	// (0x00019f1b) cell_myfav_contact_pane_g4

0xd27f,	// (0x0001aac8) cell_myfav_contact_pane_g5_ParamLimits

0xd27f,	// (0x0001aac8) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d1c7) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d1c7) cell_myfav_contact_pane_g

0x6599,	// (0x00013de2) main_myfav_hc_pane_g3_ParamLimits

0x6599,	// (0x00013de2) main_myfav_hc_pane_g3

0x0ec9,	// (0x0000e712) popup_adpt_find_window

0x65f0,	// (0x00013e39) afind_page_pane_ParamLimits

0x65f0,	// (0x00013e39) afind_page_pane

0x6605,	// (0x00013e4e) aid_size_cell_afind_ParamLimits

0x6605,	// (0x00013e4e) aid_size_cell_afind

0x6623,	// (0x00013e6c) bg_popup_sub_pane_cp09_ParamLimits

0x6623,	// (0x00013e6c) bg_popup_sub_pane_cp09

0x6630,	// (0x00013e79) find_pane_cp01_ParamLimits

0x6630,	// (0x00013e79) find_pane_cp01

0xd28b,	// (0x0001aad4) grid_afind_control_pane_ParamLimits

0xd28b,	// (0x0001aad4) grid_afind_control_pane

0x663d,	// (0x00013e86) grid_afind_pane_ParamLimits

0x663d,	// (0x00013e86) grid_afind_pane

0x665f,	// (0x00013ea8) cell_afind_pane_ParamLimits

0x665f,	// (0x00013ea8) cell_afind_pane

0xc3f5,	// (0x00019c3e) afind_page_pane_g1

0x66c0,	// (0x00013f09) afind_page_pane_g2

0x66c9,	// (0x00013f12) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d1d2) afind_page_pane_g

0x66d2,	// (0x00013f1b) afind_page_pane_t1

0xd29f,	// (0x0001aae8) cell_afind_grid_control_pane_ParamLimits

0xd29f,	// (0x0001aae8) cell_afind_grid_control_pane

0xcf60,	// (0x0001a7a9) bg_button_pane_cp69_ParamLimits

0xcf60,	// (0x0001a7a9) bg_button_pane_cp69

0x66f2,	// (0x00013f3b) cell_afind_pane_g1_ParamLimits

0x66f2,	// (0x00013f3b) cell_afind_pane_g1

0x66ff,	// (0x00013f48) cell_afind_pane_t1_ParamLimits

0x66ff,	// (0x00013f48) cell_afind_pane_t1

0x9f64,	// (0x000177ad) bg_button_pane_cp72

0xd2ae,	// (0x0001aaf7) cell_afind_grid_control_pane_g1

0x36c6,	// (0x00010f0f) aid_image_placing_area_ParamLimits

0x36c6,	// (0x00010f0f) aid_image_placing_area

0xc9cb,	// (0x0001a214) field_vitu_entry_pane_g1_ParamLimits

0xc9cb,	// (0x0001a214) field_vitu_entry_pane_g1

0xc9d7,	// (0x0001a220) field_vitu_entry_pane_g2_ParamLimits

0xc9d7,	// (0x0001a220) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d083) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d083) field_vitu_entry_pane_g

0x57b7,	// (0x00013000) cell_vitu_itu_pane_g1_ParamLimits

0x57f9,	// (0x00013042) cell_vitu_itu_pane_t3_ParamLimits

0x57f9,	// (0x00013042) cell_vitu_itu_pane_t3

0xcf10,	// (0x0001a759) mp4_progress_pane_t1_ParamLimits

0xcf29,	// (0x0001a772) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d118) mp4_progress_pane_t_ParamLimits

0xcf42,	// (0x0001a78b) mup_progress_pane_cp04_ParamLimits

0x65dc,	// (0x00013e25) main_myfav_hc_pane_t5_ParamLimits

0x65dc,	// (0x00013e25) main_myfav_hc_pane_t5

0x94e0,	// (0x00016d29) aid_zoom_text_primary

0x0ec9,	// (0x0000e712) popup_adpt_find_window_ParamLimits

0x952a,	// (0x00016d73) main_cam_set_pane

0x5ef7,	// (0x00013740) cam4_zoom_pane_ParamLimits

0x5ef7,	// (0x00013740) cam4_zoom_pane

0x6711,	// (0x00013f5a) main_cam_set_pane_g1_ParamLimits

0x6711,	// (0x00013f5a) main_cam_set_pane_g1

0x671f,	// (0x00013f68) main_cam_set_pane_g2_ParamLimits

0x671f,	// (0x00013f68) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d1d9) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d1d9) main_cam_set_pane_g

0x6740,	// (0x00013f89) main_cam_set_pane_t1_ParamLimits

0x6740,	// (0x00013f89) main_cam_set_pane_t1

0x675b,	// (0x00013fa4) main_cset_listscroll_pane_ParamLimits

0x675b,	// (0x00013fa4) main_cset_listscroll_pane

0x677b,	// (0x00013fc4) main_cset_slider_pane_ParamLimits

0x677b,	// (0x00013fc4) main_cset_slider_pane

0xd2bf,	// (0x0001ab08) main_cset_list_pane_ParamLimits

0xd2bf,	// (0x0001ab08) main_cset_list_pane

0xd2cf,	// (0x0001ab18) scroll_pane_cp028

0x67a1,	// (0x00013fea) aid_area_touch_slider

0x67bd,	// (0x00014006) cset_slider_pane

0x67e7,	// (0x00014030) main_cset_slider_pane_g1

0x67fc,	// (0x00014045) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d1de) main_cset_slider_pane_g

0xd308,	// (0x0001ab51) main_cset_slider_pane_t1

0x68b8,	// (0x00014101) main_cset_slider_pane_t2

0x68d2,	// (0x0001411b) main_cset_slider_pane_t3

0x68ec,	// (0x00014135) main_cset_slider_pane_t4

0x6906,	// (0x0001414f) main_cset_slider_pane_t5

0x6920,	// (0x00014169) main_cset_slider_pane_t6

0x6935,	// (0x0001417e) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d203) main_cset_slider_pane_t

0x6a39,	// (0x00014282) cset_list_set_pane_ParamLimits

0x6a39,	// (0x00014282) cset_list_set_pane

0x6a4b,	// (0x00014294) aid_position_infowindow_above

0x6a53,	// (0x0001429c) aid_position_infowindow_below

0x6a5b,	// (0x000142a4) cset_list_set_pane_g1_ParamLimits

0x6a5b,	// (0x000142a4) cset_list_set_pane_g1

0xd3a8,	// (0x0001abf1) cset_list_set_pane_g3_ParamLimits

0xd3a8,	// (0x0001abf1) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d222) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d222) cset_list_set_pane_g

0xd3b7,	// (0x0001ac00) cset_list_set_pane_t1_ParamLimits

0xd3b7,	// (0x0001ac00) cset_list_set_pane_t1

0x952a,	// (0x00016d73) list_highlight_pane_cp021_ParamLimits

0x952a,	// (0x00016d73) list_highlight_pane_cp021

0xab88,	// (0x000183d1) cset_slider_pane_g1

0xab9a,	// (0x000183e3) cset_slider_pane_g2

0xab91,	// (0x000183da) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d227) cset_slider_pane_g

0xd3cc,	// (0x0001ac15) aid_area_touch_cam4_zoom

0xd3d4,	// (0x0001ac1d) cam4_zoom_cont_pane

0xd3dc,	// (0x0001ac25) cam4_zoom_pane_g1

0xd3e4,	// (0x0001ac2d) cam4_zoom_pane_g2

0x6a67,	// (0x000142b0) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d22e) cam4_zoom_pane_g

0xd3ec,	// (0x0001ac35) cam4_zoom_cont_pane_g1

0xd3f5,	// (0x0001ac3e) cam4_zoom_cont_pane_g2

0xd3fe,	// (0x0001ac47) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d235) cam4_zoom_cont_pane_g

0x5db7,	// (0x00013600) call4_image_pane_ParamLimits

0x5db7,	// (0x00013600) call4_image_pane

0xcf9e,	// (0x0001a7e7) call4_windows_conf_pane_ParamLimits

0xcfdf,	// (0x0001a828) popup_call4_audio_in_window_ParamLimits

0xcfdf,	// (0x0001a828) popup_call4_audio_in_window

0x94ba,	// (0x00016d03) bg_popup_call2_act_pane_cp02

0xd055,	// (0x0001a89e) call4_list_conf_pane

0xc3f5,	// (0x00019c3e) call4_image_pane_g1

0xc3f5,	// (0x00019c3e) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001cf49) call4_image_pane_g

0xd407,	// (0x0001ac50) list_single_graphic_popup_conf4_pane_ParamLimits

0xd407,	// (0x0001ac50) list_single_graphic_popup_conf4_pane

0x94ba,	// (0x00016d03) list_highlight_pane_cp022

0xd41a,	// (0x0001ac63) list_single_graphic_popup_conf4_pane_g1

0xa847,	// (0x00018090) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d23c) list_single_graphic_popup_conf4_pane_g

0xd422,	// (0x0001ac6b) list_single_graphic_popup_conf4_pane_t1

0x1da5,	// (0x0000f5ee) popup_vtel_slider_window_ParamLimits

0x1da5,	// (0x0000f5ee) popup_vtel_slider_window

0xcf4e,	// (0x0001a797) dialer2_ne_pane_t2_ParamLimits

0xcf4e,	// (0x0001a797) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d11d) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d11d) dialer2_ne_pane_t

0xc1da,	// (0x00019a23) bg_popup_sub_pane_cp010_ParamLimits

0xc1da,	// (0x00019a23) bg_popup_sub_pane_cp010

0x6a6f,	// (0x000142b8) popup_vtel_slider_window_g1_ParamLimits

0x6a6f,	// (0x000142b8) popup_vtel_slider_window_g1

0x6a82,	// (0x000142cb) popup_vtel_slider_window_g2_ParamLimits

0x6a82,	// (0x000142cb) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d241) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d241) popup_vtel_slider_window_g

0x6ad8,	// (0x00014321) vtel_slider_pane_ParamLimits

0x6ad8,	// (0x00014321) vtel_slider_pane

0x6afa,	// (0x00014343) vtel_slider_pane_g1_ParamLimits

0x6afa,	// (0x00014343) vtel_slider_pane_g1

0x6b0e,	// (0x00014357) vtel_slider_pane_g2_ParamLimits

0x6b0e,	// (0x00014357) vtel_slider_pane_g2

0x6b26,	// (0x0001436f) vtel_slider_pane_g3_ParamLimits

0x6b26,	// (0x0001436f) vtel_slider_pane_g3

0x6afa,	// (0x00014343) vtel_slider_pane_g4_ParamLimits

0x6afa,	// (0x00014343) vtel_slider_pane_g4

0x6b3c,	// (0x00014385) vtel_slider_pane_g5_ParamLimits

0x6b3c,	// (0x00014385) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d24a) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d24a) vtel_slider_pane_g

0x94ba,	// (0x00016d03) main_gallery2_pane

0x6163,	// (0x000139ac) aid_size_row_itut2_dropdow_list_ParamLimits

0x6163,	// (0x000139ac) aid_size_row_itut2_dropdow_list

0x61ef,	// (0x00013a38) grid_vitu2_function_top_pane_ParamLimits

0x61ef,	// (0x00013a38) grid_vitu2_function_top_pane

0x6254,	// (0x00013a9d) popup_vitu2_dropdown_list_window_ParamLimits

0x6254,	// (0x00013a9d) popup_vitu2_dropdown_list_window

0x627d,	// (0x00013ac6) popup_vitu2_match_list_window

0x6b52,	// (0x0001439b) cell_vitu2_function_top_pane_ParamLimits

0x6b52,	// (0x0001439b) cell_vitu2_function_top_pane

0x6b70,	// (0x000143b9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6b70,	// (0x000143b9) cell_vitu2_function_top_pane_cp01

0x6b8e,	// (0x000143d7) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b8e,	// (0x000143d7) cell_vitu2_function_top_wide_pane

0x952a,	// (0x00016d73) bg_button_pane_cp012

0x6bac,	// (0x000143f5) cell_vitu2_function_top_pane_g1

0xd446,	// (0x0001ac8f) bg_button_pane_cp013_ParamLimits

0xd446,	// (0x0001ac8f) bg_button_pane_cp013

0x6bc0,	// (0x00014409) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6bc0,	// (0x00014409) cell_vitu2_function_top_wide_pane_g1

0x952a,	// (0x00016d73) bg_popup_sub_pane_cp20

0x6bd8,	// (0x00014421) list_vitu2_match_list_pane

0xd1b5,	// (0x0001a9fe) bg_popup_sub_pane_cp20_g1

0xd1bd,	// (0x0001aa06) bg_popup_sub_pane_cp20_g2

0xa209,	// (0x00017a52) bg_popup_sub_pane_cp20_g3

0xd1c5,	// (0x0001aa0e) bg_popup_sub_pane_cp20_g4

0xa1e9,	// (0x00017a32) bg_popup_sub_pane_cp20_g5

0xd462,	// (0x0001acab) bg_popup_sub_pane_cp20_g6

0xd1d5,	// (0x0001aa1e) bg_popup_sub_pane_cp20_g7

0xd1dd,	// (0x0001aa26) bg_popup_sub_pane_cp20_g8

0xd1e5,	// (0x0001aa2e) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d255) bg_popup_sub_pane_cp20_g

0xd46a,	// (0x0001acb3) list_vitu2_match_list_item_pane_ParamLimits

0xd46a,	// (0x0001acb3) list_vitu2_match_list_item_pane

0xd47c,	// (0x0001acc5) list_vitu2_match_list_item_pane_t1

0x94ba,	// (0x00016d03) bg_popup_sub_pane_cp21

0xa6fc,	// (0x00017f45) grid_vitu2_dropdown_list_pane

0x6c2b,	// (0x00014474) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6c2b,	// (0x00014474) cell_vitu2_dropdown_list_char_pane

0x6c4c,	// (0x00014495) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c4c,	// (0x00014495) cell_vitu2_dropdown_list_ctrl_pane

0xd4a2,	// (0x0001aceb) cell_vitu2_dropdown_list_char_pane_g1

0xd4ab,	// (0x0001acf4) cell_vitu2_dropdown_list_char_pane_g2

0xd4b4,	// (0x0001acfd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d272) cell_vitu2_dropdown_list_char_pane_g

0x6c78,	// (0x000144c1) cell_vitu2_dropdown_list_char_pane_t1

0x6c86,	// (0x000144cf) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6c86,	// (0x000144cf) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6c93,	// (0x000144dc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6c93,	// (0x000144dc) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ca0,	// (0x000144e9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ca0,	// (0x000144e9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6cad,	// (0x000144f6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6cad,	// (0x000144f6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc661,	// (0x00019eaa) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc661,	// (0x00019eaa) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d279) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d279) cell_vitu2_dropdown_list_ctrl_pane_g

0x6cc9,	// (0x00014512) aid_size_cell_gallery2_ParamLimits

0x6cc9,	// (0x00014512) aid_size_cell_gallery2

0x6cdf,	// (0x00014528) grid_gallery2_pane_ParamLimits

0x6cdf,	// (0x00014528) grid_gallery2_pane

0x6cf3,	// (0x0001453c) scroll_pane_cp029_ParamLimits

0x6cf3,	// (0x0001453c) scroll_pane_cp029

0x6cff,	// (0x00014548) cell_gallery2_pane_ParamLimits

0x6cff,	// (0x00014548) cell_gallery2_pane

0xd4bd,	// (0x0001ad06) cell_gallery2_pane_g2

0x6d35,	// (0x0001457e) cell_gallery2_pane_g3

0xd4c7,	// (0x0001ad10) cell_gallery2_pane_g4

0xd4cf,	// (0x0001ad18) cell_gallery2_pane_g5

0xaa32,	// (0x0001827b) grid_highlight_pane_cp10

0x627d,	// (0x00013ac6) popup_vitu2_match_list_window_ParamLimits

0x6294,	// (0x00013add) popup_vitu2_query_window_ParamLimits

0x6294,	// (0x00013add) popup_vitu2_query_window

0x94ba,	// (0x00016d03) bg_vitu2_candi_button_pane

0xd4a2,	// (0x0001aceb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4ab,	// (0x0001acf4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4b4,	// (0x0001acfd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d3d,	// (0x00014586) bg_button_pane_cp015

0x6d4f,	// (0x00014598) bg_button_pane_cp016

0x6d62,	// (0x000145ab) bg_button_pane_cp017

0xbeef,	// (0x00019738) bg_popup_sub_pane_cp22

0xd4d7,	// (0x0001ad20) popup_vitu2_query_window_g1

0x6da7,	// (0x000145f0) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d284) popup_vitu2_query_window_g

0x6dc6,	// (0x0001460f) popup_vitu2_query_window_t1_ParamLimits

0x6dc6,	// (0x0001460f) popup_vitu2_query_window_t1

0x6dfb,	// (0x00014644) popup_vitu2_query_window_t2_ParamLimits

0x6dfb,	// (0x00014644) popup_vitu2_query_window_t2

0x6e0d,	// (0x00014656) popup_vitu2_query_window_t3_ParamLimits

0x6e0d,	// (0x00014656) popup_vitu2_query_window_t3

0x6e35,	// (0x0001467e) popup_vitu2_query_window_t4_ParamLimits

0x6e35,	// (0x0001467e) popup_vitu2_query_window_t4

0x6e56,	// (0x0001469f) popup_vitu2_query_window_t5_ParamLimits

0x6e56,	// (0x0001469f) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d28b) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d28b) popup_vitu2_query_window_t

0xd2b7,	// (0x0001ab00) main_cset_text_pane

0x67a1,	// (0x00013fea) aid_area_touch_slider_ParamLimits

0x67bd,	// (0x00014006) cset_slider_pane_ParamLimits

0x67e7,	// (0x00014030) main_cset_slider_pane_g1_ParamLimits

0x67fc,	// (0x00014045) main_cset_slider_pane_g2_ParamLimits

0xd2d8,	// (0x0001ab21) main_cset_slider_pane_g3_ParamLimits

0xd2d8,	// (0x0001ab21) main_cset_slider_pane_g3

0x6811,	// (0x0001405a) main_cset_slider_pane_g4_ParamLimits

0x6811,	// (0x0001405a) main_cset_slider_pane_g4

0x6820,	// (0x00014069) main_cset_slider_pane_g5_ParamLimits

0x6820,	// (0x00014069) main_cset_slider_pane_g5

0x682c,	// (0x00014075) main_cset_slider_pane_g6_ParamLimits

0x682c,	// (0x00014075) main_cset_slider_pane_g6

0xf995,	// (0x0001d1de) main_cset_slider_pane_g_ParamLimits

0xd308,	// (0x0001ab51) main_cset_slider_pane_t1_ParamLimits

0x68b8,	// (0x00014101) main_cset_slider_pane_t2_ParamLimits

0x68d2,	// (0x0001411b) main_cset_slider_pane_t3_ParamLimits

0x68ec,	// (0x00014135) main_cset_slider_pane_t4_ParamLimits

0x6906,	// (0x0001414f) main_cset_slider_pane_t5_ParamLimits

0x6920,	// (0x00014169) main_cset_slider_pane_t6_ParamLimits

0x6935,	// (0x0001417e) main_cset_slider_pane_t7_ParamLimits

0x695f,	// (0x000141a8) main_cset_slider_pane_t8_ParamLimits

0x695f,	// (0x000141a8) main_cset_slider_pane_t8

0x6987,	// (0x000141d0) main_cset_slider_pane_t9_ParamLimits

0x6987,	// (0x000141d0) main_cset_slider_pane_t9

0x69af,	// (0x000141f8) main_cset_slider_pane_t10_ParamLimits

0x69af,	// (0x000141f8) main_cset_slider_pane_t10

0x69d7,	// (0x00014220) main_cset_slider_pane_t11_ParamLimits

0x69d7,	// (0x00014220) main_cset_slider_pane_t11

0x69ff,	// (0x00014248) main_cset_slider_pane_t12_ParamLimits

0x69ff,	// (0x00014248) main_cset_slider_pane_t12

0x6a1c,	// (0x00014265) main_cset_slider_pane_t13_ParamLimits

0x6a1c,	// (0x00014265) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d203) main_cset_slider_pane_t_ParamLimits

0x94ba,	// (0x00016d03) bg_popup_sub_pane_cp011

0xd4e3,	// (0x0001ad2c) main_cset_text_pane_g1

0xd4eb,	// (0x0001ad34) main_cset_text_pane_t1

0xd4f9,	// (0x0001ad42) main_cset_text_pane_t2

0xd507,	// (0x0001ad50) main_cset_text_pane_t3

0xd515,	// (0x0001ad5e) main_cset_text_pane_t4

0xd523,	// (0x0001ad6c) main_cset_text_pane_t5

0xd531,	// (0x0001ad7a) main_cset_text_pane_t6

0xd53f,	// (0x0001ad88) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d29a) main_cset_text_pane_t

0x94ba,	// (0x00016d03) main_cam4_burst_pane

0x94ba,	// (0x00016d03) main_cam5_pane

0x66e0,	// (0x00013f29) bg_button_pane_cp019

0x66e9,	// (0x00013f32) bg_button_pane_cp020

0xd2e4,	// (0x0001ab2d) main_cset_slider_pane_g7_ParamLimits

0xd2e4,	// (0x0001ab2d) main_cset_slider_pane_g7

0xd2f0,	// (0x0001ab39) main_cset_slider_pane_g8_ParamLimits

0xd2f0,	// (0x0001ab39) main_cset_slider_pane_g8

0x6840,	// (0x00014089) main_cset_slider_pane_g9_ParamLimits

0x6840,	// (0x00014089) main_cset_slider_pane_g9

0x684c,	// (0x00014095) main_cset_slider_pane_g10_ParamLimits

0x684c,	// (0x00014095) main_cset_slider_pane_g10

0x6858,	// (0x000140a1) main_cset_slider_pane_g11_ParamLimits

0x6858,	// (0x000140a1) main_cset_slider_pane_g11

0x6864,	// (0x000140ad) main_cset_slider_pane_g12_ParamLimits

0x6864,	// (0x000140ad) main_cset_slider_pane_g12

0x6870,	// (0x000140b9) main_cset_slider_pane_g13_ParamLimits

0x6870,	// (0x000140b9) main_cset_slider_pane_g13

0x687c,	// (0x000140c5) main_cset_slider_pane_g14_ParamLimits

0x687c,	// (0x000140c5) main_cset_slider_pane_g14

0x6888,	// (0x000140d1) main_cset_slider_pane_g15_ParamLimits

0x6888,	// (0x000140d1) main_cset_slider_pane_g15

0xd336,	// (0x0001ab7f) main_cset_slider_pane_t14_ParamLimits

0xd336,	// (0x0001ab7f) main_cset_slider_pane_t14

0xd36f,	// (0x0001abb8) main_cset_slider_pane_t15_ParamLimits

0xd36f,	// (0x0001abb8) main_cset_slider_pane_t15

0x6ecd,	// (0x00014716) aid_cam4_burst_size_cell_ParamLimits

0x6ecd,	// (0x00014716) aid_cam4_burst_size_cell

0x6eed,	// (0x00014736) grid_cam4_burst_pane_ParamLimits

0x6eed,	// (0x00014736) grid_cam4_burst_pane

0x6f25,	// (0x0001476e) linegrid_cam4_burst_pane_ParamLimits

0x6f25,	// (0x0001476e) linegrid_cam4_burst_pane

0xd54d,	// (0x0001ad96) scroll_pane_cp30_ParamLimits

0xd54d,	// (0x0001ad96) scroll_pane_cp30

0x6f49,	// (0x00014792) cell_cam4_burst_pane_ParamLimits

0x6f49,	// (0x00014792) cell_cam4_burst_pane

0xd559,	// (0x0001ada2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd559,	// (0x0001ada2) linegrid_cam4_burst_pane_g1

0x6f96,	// (0x000147df) linegrid_cam4_burst_pane_g2_ParamLimits

0x6f96,	// (0x000147df) linegrid_cam4_burst_pane_g2

0xd566,	// (0x0001adaf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd566,	// (0x0001adaf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d2a9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d2a9) linegrid_cam4_burst_pane_g

0x6fa7,	// (0x000147f0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6fa7,	// (0x000147f0) linegrid_cam4_burst_pane_g3_copy1

0xd573,	// (0x0001adbc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd573,	// (0x0001adbc) linegrid_cam4_burst_pane_g4

0x6fc1,	// (0x0001480a) linegrid_cam4_burst_pane_g5_ParamLimits

0x6fc1,	// (0x0001480a) linegrid_cam4_burst_pane_g5

0x6fd2,	// (0x0001481b) linegrid_cam4_burst_pane_g6_ParamLimits

0x6fd2,	// (0x0001481b) linegrid_cam4_burst_pane_g6

0xd580,	// (0x0001adc9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd580,	// (0x0001adc9) linegrid_cam4_burst_pane_g7

0x6fe9,	// (0x00014832) cell_cam4_burst_pane_g1

0xd599,	// (0x0001ade2) main_cam5_pane_t1_ParamLimits

0xd599,	// (0x0001ade2) main_cam5_pane_t1

0xd5ab,	// (0x0001adf4) main_cam5_pane_t2_ParamLimits

0xd5ab,	// (0x0001adf4) main_cam5_pane_t2

0xd5bd,	// (0x0001ae06) main_cam5_pane_t3_ParamLimits

0xd5bd,	// (0x0001ae06) main_cam5_pane_t3

0xd5cf,	// (0x0001ae18) main_cam5_pane_t4_ParamLimits

0xd5cf,	// (0x0001ae18) main_cam5_pane_t4

0xd5e7,	// (0x0001ae30) main_cam5_pane_t5_ParamLimits

0xd5e7,	// (0x0001ae30) main_cam5_pane_t5

0xd5fb,	// (0x0001ae44) main_cam5_pane_t6_ParamLimits

0xd5fb,	// (0x0001ae44) main_cam5_pane_t6

0xd60f,	// (0x0001ae58) main_cam5_pane_t7_ParamLimits

0xd60f,	// (0x0001ae58) main_cam5_pane_t7

0xd621,	// (0x0001ae6a) main_cam5_pane_t8_ParamLimits

0xd621,	// (0x0001ae6a) main_cam5_pane_t8

0xd63d,	// (0x0001ae86) main_cam5_pane_t9_ParamLimits

0xd63d,	// (0x0001ae86) main_cam5_pane_t9

0xd64f,	// (0x0001ae98) main_cam5_pane_t10_ParamLimits

0xd64f,	// (0x0001ae98) main_cam5_pane_t10

0xd661,	// (0x0001aeaa) main_cam5_pane_t11_ParamLimits

0xd661,	// (0x0001aeaa) main_cam5_pane_t11

0xd673,	// (0x0001aebc) main_cam5_pane_t12_ParamLimits

0xd673,	// (0x0001aebc) main_cam5_pane_t12

0xd688,	// (0x0001aed1) main_cam5_pane_t13_ParamLimits

0xd688,	// (0x0001aed1) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d2b5) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d2b5) main_cam5_pane_t

0x0f4b,	// (0x0000e794) popup_scut_keymap_window_ParamLimits

0x0f4b,	// (0x0000e794) popup_scut_keymap_window

0x6ffc,	// (0x00014845) aid_size_cell_brow_shortcut

0xaa32,	// (0x0001827b) bg_popup_window_pane_cp010

0x7008,	// (0x00014851) grid_scut_pane

0x7014,	// (0x0001485d) cell_scut_pane_ParamLimits

0x7014,	// (0x0001485d) cell_scut_pane

0x702b,	// (0x00014874) cell_scut_pane_g1

0xd6a5,	// (0x0001aeee) cell_scut_pane_t1

0xd6b4,	// (0x0001aefd) cell_scut_pane_t2

0x7034,	// (0x0001487d) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d2d0) cell_scut_pane_t

0x4d14,	// (0x0001255d) main_mup3_pane_g8_ParamLimits

0x4d14,	// (0x0001255d) main_mup3_pane_g8

0x617b,	// (0x000139c4) area_vitu2_query_pane_ParamLimits

0x617b,	// (0x000139c4) area_vitu2_query_pane

0x6d75,	// (0x000145be) input_focus_pane_cp08

0xd6c3,	// (0x0001af0c) area_vitu2_query_pane_g1

0x7042,	// (0x0001488b) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d2d7) area_vitu2_query_pane_g

0x7053,	// (0x0001489c) area_vitu2_query_pane_t1_ParamLimits

0x7053,	// (0x0001489c) area_vitu2_query_pane_t1

0x7067,	// (0x000148b0) area_vitu2_query_pane_t2_ParamLimits

0x7067,	// (0x000148b0) area_vitu2_query_pane_t2

0x707b,	// (0x000148c4) area_vitu2_query_pane_t3_ParamLimits

0x707b,	// (0x000148c4) area_vitu2_query_pane_t3

0xd6cf,	// (0x0001af18) area_vitu2_query_pane_t4_ParamLimits

0xd6cf,	// (0x0001af18) area_vitu2_query_pane_t4

0xd6f7,	// (0x0001af40) area_vitu2_query_pane_t5_ParamLimits

0xd6f7,	// (0x0001af40) area_vitu2_query_pane_t5

0xd71f,	// (0x0001af68) area_vitu2_query_pane_t6_ParamLimits

0xd71f,	// (0x0001af68) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d2dc) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d2dc) area_vitu2_query_pane_t

0x70a3,	// (0x000148ec) bg_button_pane_cp018

0x70b1,	// (0x000148fa) bg_button_pane_cp021

0x70bd,	// (0x00014906) bg_button_pane_cp022

0x70cc,	// (0x00014915) input_focus_pane_cp09

0x2cfb,	// (0x00010544) aid_size_touch_mv_arrow_left

0x2d24,	// (0x0001056d) aid_size_touch_mv_arrow_right

0x68a0,	// (0x000140e9) main_cset_slider_pane_g16_ParamLimits

0x68a0,	// (0x000140e9) main_cset_slider_pane_g16

0x68ac,	// (0x000140f5) main_cset_slider_pane_g17_ParamLimits

0x68ac,	// (0x000140f5) main_cset_slider_pane_g17

0x6fe9,	// (0x00014832) cell_cam4_burst_pane_g1_ParamLimits

0x94ba,	// (0x00016d03) compa_mode_pane

0x6a92,	// (0x000142db) popup_vtel_slider_window_g3_ParamLimits

0x6a92,	// (0x000142db) popup_vtel_slider_window_g3

0x6aa9,	// (0x000142f2) popup_vtel_slider_window_g4_ParamLimits

0x6aa9,	// (0x000142f2) popup_vtel_slider_window_g4

0x6ac0,	// (0x00014309) popup_vtel_slider_window_t1_ParamLimits

0x6ac0,	// (0x00014309) popup_vtel_slider_window_t1

0x94ba,	// (0x00016d03) main_cl_pane

0xbf17,	// (0x00019760) popup_imed_adjust2_window_ParamLimits

0xbeef,	// (0x00019738) bg_tb_trans_pane_cp05_ParamLimits

0xc900,	// (0x0001a149) popup_imed_adjust2_window_g1_ParamLimits

0xc90f,	// (0x0001a158) popup_imed_adjust2_window_g2_ParamLimits

0xc90f,	// (0x0001a158) popup_imed_adjust2_window_g2

0xc91b,	// (0x0001a164) popup_imed_adjust2_window_g3_ParamLimits

0xc91b,	// (0x0001a164) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d047) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d047) popup_imed_adjust2_window_g

0xc927,	// (0x0001a170) popup_imed_adjust2_window_t1_ParamLimits

0xc93f,	// (0x0001a188) slider_imed_adjust_pane_ParamLimits

0xc953,	// (0x0001a19c) slider_imed_adjust_pane_g1_ParamLimits

0xc963,	// (0x0001a1ac) slider_imed_adjust_pane_g2_ParamLimits

0xc973,	// (0x0001a1bc) slider_imed_adjust_pane_g3_ParamLimits

0xc984,	// (0x0001a1cd) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d04e) slider_imed_adjust_pane_g_ParamLimits

0x5e98,	// (0x000136e1) aid_touch_area_cam4_ParamLimits

0x5e98,	// (0x000136e1) aid_touch_area_cam4

0xd099,	// (0x0001a8e2) battery_pane_cp01

0x5f68,	// (0x000137b1) main_camera4_pane_g6_ParamLimits

0x5f68,	// (0x000137b1) main_camera4_pane_g6

0x5f92,	// (0x000137db) main_camera4_pane_t2_ParamLimits

0x5f92,	// (0x000137db) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d151) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d151) main_camera4_pane_t

0x5fc7,	// (0x00013810) aid_touch_area_vid4_ParamLimits

0x5fc7,	// (0x00013810) aid_touch_area_vid4

0x602e,	// (0x00013877) main_video4_pane_g5_ParamLimits

0x602e,	// (0x00013877) main_video4_pane_g5

0x6059,	// (0x000138a2) vid4_progress_pane_ParamLimits

0x6059,	// (0x000138a2) vid4_progress_pane

0xd2fc,	// (0x0001ab45) main_cset_slider_pane_g18_ParamLimits

0xd2fc,	// (0x0001ab45) main_cset_slider_pane_g18

0xd58d,	// (0x0001add6) cell_cam4_burst_pane_g2_ParamLimits

0xd58d,	// (0x0001add6) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d2b0) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d2b0) cell_cam4_burst_pane_g

0x9c9f,	// (0x000174e8) bg_cl_pane_ParamLimits

0x9c9f,	// (0x000174e8) bg_cl_pane

0x70db,	// (0x00014924) cl_header_pane_ParamLimits

0x70db,	// (0x00014924) cl_header_pane

0x70ef,	// (0x00014938) cl_listscroll_pane_ParamLimits

0x70ef,	// (0x00014938) cl_listscroll_pane

0xd76b,	// (0x0001afb4) bg_cl_pane_g1

0xd773,	// (0x0001afbc) bg_cl_pane_g2

0xd77b,	// (0x0001afc4) bg_cl_pane_g3

0xd783,	// (0x0001afcc) bg_cl_pane_g4

0xd78b,	// (0x0001afd4) bg_cl_pane_g5

0xd793,	// (0x0001afdc) bg_cl_pane_g6

0xd79b,	// (0x0001afe4) bg_cl_pane_g7

0xd7a3,	// (0x0001afec) bg_cl_pane_g8

0xd7ab,	// (0x0001aff4) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d2eb) bg_cl_pane_g

0x70ff,	// (0x00014948) aid_height_cl_leading_ParamLimits

0x70ff,	// (0x00014948) aid_height_cl_leading

0x710b,	// (0x00014954) aid_height_cl_text_ParamLimits

0x710b,	// (0x00014954) aid_height_cl_text

0x952a,	// (0x00016d73) bg_cl_header_pane_ParamLimits

0x952a,	// (0x00016d73) bg_cl_header_pane

0x712a,	// (0x00014973) cl_header_pane_g1_ParamLimits

0x712a,	// (0x00014973) cl_header_pane_g1

0x7140,	// (0x00014989) cl_header_pane_t1_ParamLimits

0x7140,	// (0x00014989) cl_header_pane_t1

0xd7b3,	// (0x0001affc) cl_list_pane

0xd2cf,	// (0x0001ab18) hc_scroll_pane_cp01

0xa1e9,	// (0x00017a32) bg_cl_header_pane_g1

0xd1b5,	// (0x0001a9fe) bg_cl_header_pane_g2

0xa209,	// (0x00017a52) bg_cl_header_pane_g3

0xd1c5,	// (0x0001aa0e) bg_cl_header_pane_g4

0xd1bd,	// (0x0001aa06) bg_cl_header_pane_g5

0xd462,	// (0x0001acab) bg_cl_header_pane_g6

0xd1dd,	// (0x0001aa26) bg_cl_header_pane_g7

0xd1e5,	// (0x0001aa2e) bg_cl_header_pane_g8

0xd1d5,	// (0x0001aa1e) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d2fe) bg_cl_header_pane_g

0x7159,	// (0x000149a2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7159,	// (0x000149a2) hc_cl_list_double_graphic_heading_pane

0x716a,	// (0x000149b3) hc_cl_list_single_graphic_pane_ParamLimits

0x716a,	// (0x000149b3) hc_cl_list_single_graphic_pane

0x7180,	// (0x000149c9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7180,	// (0x000149c9) hc_cl_list_single_graphic_pane_g1

0x718c,	// (0x000149d5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x718c,	// (0x000149d5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d311) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d311) hc_cl_list_single_graphic_pane_g

0x71a0,	// (0x000149e9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x71a0,	// (0x000149e9) hc_cl_list_single_graphic_pane_t1

0x7180,	// (0x000149c9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7180,	// (0x000149c9) hc_cl_list_double_graphic_heading_pane_g1

0x71b5,	// (0x000149fe) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x71b5,	// (0x000149fe) hc_cl_list_double_graphic_heading_pane_g2

0x71c9,	// (0x00014a12) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x71c9,	// (0x00014a12) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d316) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d316) hc_cl_list_double_graphic_heading_pane_g

0x71dd,	// (0x00014a26) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71dd,	// (0x00014a26) hc_cl_list_double_graphic_heading_pane_t1

0x71f2,	// (0x00014a3b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x71f2,	// (0x00014a3b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d31d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d31d) hc_cl_list_double_graphic_heading_pane_t

0xd7c4,	// (0x0001b00d) vid4_progress_pane_g1

0xd7d4,	// (0x0001b01d) vid4_progress_pane_g2

0xac7a,	// (0x000184c3) vid4_progress_pane_g3

0xd7e4,	// (0x0001b02d) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d322) vid4_progress_pane_g

0xd802,	// (0x0001b04b) vid4_progress_pane_t1

0xd817,	// (0x0001b060) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d32d) vid4_progress_pane_t

0xd842,	// (0x0001b08b) wait_bar_pane_cp07

0xc1e8,	// (0x00019a31) blid_firmament_pane_ParamLimits

0xc22b,	// (0x00019a74) popup_blid_sat_info2_window_g1

0xc24f,	// (0x00019a98) popup_blid_sat_info2_window_t3

0xc25d,	// (0x00019aa6) popup_blid_sat_info2_window_t4

0xc26b,	// (0x00019ab4) popup_blid_sat_info2_window_t5

0xc279,	// (0x00019ac2) popup_blid_sat_info2_window_t6

0xc289,	// (0x00019ad2) popup_blid_sat_info2_window_t7

0xc297,	// (0x00019ae0) popup_blid_sat_info2_window_t8

0xc2a5,	// (0x00019aee) popup_blid_sat_info2_window_t9

0xc2b3,	// (0x00019afc) popup_blid_sat_info2_window_t10

0xc375,	// (0x00019bbe) aid_firma_cardinal_ParamLimits

0xc389,	// (0x00019bd2) blid_firmament_pane_t1_ParamLimits

0xc3a0,	// (0x00019be9) blid_firmament_pane_t2_ParamLimits

0xc3b7,	// (0x00019c00) blid_firmament_pane_t3_ParamLimits

0xc3ce,	// (0x00019c17) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001cf40) blid_firmament_pane_t_ParamLimits

0xc3e5,	// (0x00019c2e) blid_sat_info_pane_ParamLimits

0x952a,	// (0x00016d73) main_cam_set_pane_ParamLimits

0x5571,	// (0x00012dba) aid_size_cell_colour_35_ParamLimits

0x5591,	// (0x00012dda) aid_size_cell_colour_112_ParamLimits

0x55b1,	// (0x00012dfa) aid_size_cell_effect_ParamLimits

0xbeef,	// (0x00019738) bg_tb_trans_pane_cp02_ParamLimits

0xa48d,	// (0x00017cd6) heading_imed_pane_ParamLimits

0x55d1,	// (0x00012e1a) listscroll_imed_pane_ParamLimits

0xb521,	// (0x00018d6a) popup_call2_audio_first_window_g5_ParamLimits

0xb521,	// (0x00018d6a) popup_call2_audio_first_window_g5

0x5b43,	// (0x0001338c) aid_size_touch_image3_arrow_left_ParamLimits

0x5b43,	// (0x0001338c) aid_size_touch_image3_arrow_left

0x5b6f,	// (0x000133b8) aid_size_touch_image3_arrow_right_ParamLimits

0x5b6f,	// (0x000133b8) aid_size_touch_image3_arrow_right

0xd82d,	// (0x0001b076) vid4_progress_pane_t3

0x58e4,	// (0x0001312d) main_hwr_training_symbol_option_pane_ParamLimits

0x58e4,	// (0x0001312d) main_hwr_training_symbol_option_pane

0xcbfb,	// (0x0001a444) popup_hwr_training_preview_window_ParamLimits

0xcbfb,	// (0x0001a444) popup_hwr_training_preview_window

0x5904,	// (0x0001314d) hwr_training_navi_pane_g5_ParamLimits

0x5904,	// (0x0001314d) hwr_training_navi_pane_g5

0xd1a3,	// (0x0001a9ec) popup_char_count_window

0x952a,	// (0x00016d73) bg_popup_sub_pane_cp20_ParamLimits

0x6bd8,	// (0x00014421) list_vitu2_match_list_pane_ParamLimits

0x6be7,	// (0x00014430) vitu2_page_scroll_pane_ParamLimits

0x6be7,	// (0x00014430) vitu2_page_scroll_pane

0xd8ae,	// (0x0001b0f7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8ae,	// (0x0001b0f7) list_single_hwr_training_symbol_option_pane

0xd8c1,	// (0x0001b10a) list_single_hwr_training_symbol_option_pane_g1

0xd8c9,	// (0x0001b112) list_single_hwr_training_symbol_option_pane_t1

0xd8d7,	// (0x0001b120) bg_button_pane_cp023

0xd8e0,	// (0x0001b129) bg_button_pane_cp024

0x7207,	// (0x00014a50) vitu2_page_scroll_pane_g1

0x720f,	// (0x00014a58) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d334) vitu2_page_scroll_pane_g

0x7217,	// (0x00014a60) vitu2_page_scroll_pane_t1

0xd913,	// (0x0001b15c) popup_char_count_window_g1

0xd91c,	// (0x0001b165) popup_char_count_window_g2

0xd925,	// (0x0001b16e) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d339) popup_char_count_window_g

0xd92e,	// (0x0001b177) popup_char_count_window_t1

0x94ba,	// (0x00016d03) main_vded2_pane

0xc8ec,	// (0x0001a135) aid_size_cell_imed_line

0xc8f6,	// (0x0001a13f) grid_imed_line_width_pane

0x60c7,	// (0x00013910) vid4_indicators_pane_g4

0xd93c,	// (0x0001b185) cell_imed_line_width_pane_ParamLimits

0xd93c,	// (0x0001b185) cell_imed_line_width_pane

0xd950,	// (0x0001b199) cell_imed_line_width_pane_g1

0xd959,	// (0x0001b1a2) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d340) cell_imed_line_width_pane_g

0x7226,	// (0x00014a6f) main_vded2_pane_g1_ParamLimits

0x7226,	// (0x00014a6f) main_vded2_pane_g1

0x723c,	// (0x00014a85) main_vded2_pane_g2_ParamLimits

0x723c,	// (0x00014a85) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d345) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d345) main_vded2_pane_g

0x724e,	// (0x00014a97) vded2_slider_pane_ParamLimits

0x724e,	// (0x00014a97) vded2_slider_pane

0x725e,	// (0x00014aa7) aid_size_touch_vded2_end

0x7268,	// (0x00014ab1) aid_size_touch_vded2_playhead

0xd961,	// (0x0001b1aa) aid_size_touch_vded2_start

0xd969,	// (0x0001b1b2) vded2_slider_bg_pane

0xd972,	// (0x0001b1bb) vded2_slider_pane_g1

0xd97b,	// (0x0001b1c4) vded2_slider_pane_g2

0x7272,	// (0x00014abb) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d34a) vded2_slider_pane_g

0xd983,	// (0x0001b1cc) vded2_slider_bg_pane_g1

0xd98c,	// (0x0001b1d5) vded2_slider_bg_pane_g2

0xd995,	// (0x0001b1de) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d351) vded2_slider_bg_pane_g

0x3335,	// (0x00010b7e) aid_postcard_touch_down_pane_ParamLimits

0x3335,	// (0x00010b7e) aid_postcard_touch_down_pane

0x334b,	// (0x00010b94) aid_postcard_touch_up_pane_ParamLimits

0x334b,	// (0x00010b94) aid_postcard_touch_up_pane

0x94ba,	// (0x00016d03) main_blid2_pane

0xbefd,	// (0x00019746) popup_blid2_search_window

0x94ba,	// (0x00016d03) blid2_gps_pane

0x94ba,	// (0x00016d03) blid2_navig_pane

0x94ba,	// (0x00016d03) blid2_search_pane

0x94ba,	// (0x00016d03) blid2_tripm_pane

0x727d,	// (0x00014ac6) blid2_search_pane_g1_ParamLimits

0x727d,	// (0x00014ac6) blid2_search_pane_g1

0x7297,	// (0x00014ae0) blid2_search_pane_t1_ParamLimits

0x7297,	// (0x00014ae0) blid2_search_pane_t1

0x72a9,	// (0x00014af2) aid_size_cell_blid2_gps_ParamLimits

0x72a9,	// (0x00014af2) aid_size_cell_blid2_gps

0x72c1,	// (0x00014b0a) blid2_gps_pane_g1_ParamLimits

0x72c1,	// (0x00014b0a) blid2_gps_pane_g1

0x72d5,	// (0x00014b1e) grid_blid2_satellite_pane_ParamLimits

0x72d5,	// (0x00014b1e) grid_blid2_satellite_pane

0x72ef,	// (0x00014b38) blid2_navig_pane_g1_ParamLimits

0x72ef,	// (0x00014b38) blid2_navig_pane_g1

0x72fb,	// (0x00014b44) blid2_navig_pane_t1_ParamLimits

0x72fb,	// (0x00014b44) blid2_navig_pane_t1

0x7316,	// (0x00014b5f) blid2_navig_pane_t2_ParamLimits

0x7316,	// (0x00014b5f) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d358) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d358) blid2_navig_pane_t

0x7331,	// (0x00014b7a) blid2_navig_ring_pane_ParamLimits

0x7331,	// (0x00014b7a) blid2_navig_ring_pane

0x734a,	// (0x00014b93) blid2_speed_pane_ParamLimits

0x734a,	// (0x00014b93) blid2_speed_pane

0x7356,	// (0x00014b9f) blid2_tripm_pane_g1_ParamLimits

0x7356,	// (0x00014b9f) blid2_tripm_pane_g1

0x736f,	// (0x00014bb8) blid2_tripm_pane_g2_ParamLimits

0x736f,	// (0x00014bb8) blid2_tripm_pane_g2

0x7383,	// (0x00014bcc) blid2_tripm_pane_g3_ParamLimits

0x7383,	// (0x00014bcc) blid2_tripm_pane_g3

0x7397,	// (0x00014be0) blid2_tripm_pane_g4_ParamLimits

0x7397,	// (0x00014be0) blid2_tripm_pane_g4

0x73ab,	// (0x00014bf4) blid2_tripm_pane_g5_ParamLimits

0x73ab,	// (0x00014bf4) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d35d) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d35d) blid2_tripm_pane_g

0x73d1,	// (0x00014c1a) blid2_tripm_pane_t1_ParamLimits

0x73d1,	// (0x00014c1a) blid2_tripm_pane_t1

0x73ec,	// (0x00014c35) blid2_tripm_pane_t2_ParamLimits

0x73ec,	// (0x00014c35) blid2_tripm_pane_t2

0x7405,	// (0x00014c4e) blid2_tripm_pane_t3_ParamLimits

0x7405,	// (0x00014c4e) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d36a) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d36a) blid2_tripm_pane_t

0x744c,	// (0x00014c95) cell_blid2_satellite_pane_ParamLimits

0x744c,	// (0x00014c95) cell_blid2_satellite_pane

0x746a,	// (0x00014cb3) cell_blid2_satellite_pane_g1

0xd99e,	// (0x0001b1e7) cell_blid2_satellite_pane_t1

0xc3f5,	// (0x00019c3e) blid2_speed_pane_g1

0xd9ac,	// (0x0001b1f5) blid2_speed_pane_t1

0xd9ba,	// (0x0001b203) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d373) blid2_speed_pane_t

0xc3f5,	// (0x00019c3e) blid2_navig_ring_pane_g1

0x7473,	// (0x00014cbc) blid2_navig_ring_pane_g2

0x747b,	// (0x00014cc4) blid2_navig_ring_pane_g3

0x7483,	// (0x00014ccc) blid2_navig_ring_pane_g4

0x748b,	// (0x00014cd4) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d378) blid2_navig_ring_pane_g

0x94ba,	// (0x00016d03) bg_popup_window_pane_cp011

0xd9c8,	// (0x0001b211) popup_blid2_search_window_g1

0xd9d0,	// (0x0001b219) popup_blid2_search_window_t1

0xd9de,	// (0x0001b227) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d383) popup_blid2_search_window_t

0xa0f8,	// (0x00017941) main_browser_pane_g1

0x9c9f,	// (0x000174e8) main_browser_pane_ParamLimits

0x952a,	// (0x00016d73) bg_button_pane_cp011_ParamLimits

0x647c,	// (0x00013cc5) cell_vitu2_function_pane_g1_ParamLimits

0xbeef,	// (0x00019738) bg_popup_sub_pane_cp22_ParamLimits

0x6d75,	// (0x000145be) input_focus_pane_cp08_ParamLimits

0x6d8c,	// (0x000145d5) popup_vitu2_query_button_pane_ParamLimits

0x6d8c,	// (0x000145d5) popup_vitu2_query_button_pane

0x6d9d,	// (0x000145e6) popup_vitu2_query_input_button_pane

0xd4d7,	// (0x0001ad20) popup_vitu2_query_window_g1_ParamLimits

0x6da7,	// (0x000145f0) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d284) popup_vitu2_query_window_g_ParamLimits

0x94ba,	// (0x00016d03) bg_button_pane_cp026

0x7493,	// (0x00014cdc) popup_vitu2_query_input_button_pane_g1

0x94ba,	// (0x00016d03) bg_button_pane_cp025

0xd9ec,	// (0x0001b235) popup_vitu2_query_button_pane_t1

0x49cf,	// (0x00012218) main_mp3_pane_t6

0x49dd,	// (0x00012226) popup_slider_window_cp01

0xd0b5,	// (0x0001a8fe) cam4_battery_pane

0xd10e,	// (0x0001a957) cam4_battery_pane_cp02

0xd7bc,	// (0x0001b005) cam4_battery_pane_cp01

0xd7bc,	// (0x0001b005) cam4_battery_pane_cp03

0xc3f5,	// (0x00019c3e) cam4_battery_pane_g1

0xd9fa,	// (0x0001b243) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d388) cam4_battery_pane_g

0xc2c1,	// (0x00019b0a) popup_blid_sat_info2_window_t11

0x2cfb,	// (0x00010544) aid_size_touch_mv_arrow_left_ParamLimits

0x2d24,	// (0x0001056d) aid_size_touch_mv_arrow_right_ParamLimits

0xa992,	// (0x000181db) navi_pane_g1_ParamLimits

0x2d4d,	// (0x00010596) navi_pane_g2_ParamLimits

0x2d7b,	// (0x000105c4) navi_pane_g3_ParamLimits

0xf409,	// (0x0001cc52) navi_pane_g_ParamLimits

0x2dd3,	// (0x0001061c) navi_pane_mv_t1_ParamLimits

0x55dd,	// (0x00012e26) grid_imed_effect_pane_ParamLimits

0x1ca2,	// (0x0000f4eb) aid_placing_vt_slider_lsc

0xa049,	// (0x00017892) aid_placing_vt_slider_prt

0x952a,	// (0x00016d73) bg_tb_trans_pane_cp01_ParamLimits

0xc581,	// (0x00019dca) popup_image_details_window_g1_ParamLimits

0xc594,	// (0x00019ddd) popup_image_details_window_g2_ParamLimits

0xc5a9,	// (0x00019df2) popup_image_details_window_g3_ParamLimits

0xc5a9,	// (0x00019df2) popup_image_details_window_g3

0xf73c,	// (0x0001cf85) popup_image_details_window_g_ParamLimits

0xc5bd,	// (0x00019e06) popup_image_details_window_t1_ParamLimits

0xc5cf,	// (0x00019e18) popup_image_details_window_t2_ParamLimits

0xc5e8,	// (0x00019e31) popup_image_details_window_t3_ParamLimits

0xc5fc,	// (0x00019e45) popup_image_details_window_t4_ParamLimits

0xc617,	// (0x00019e60) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001cf8c) popup_image_details_window_t_ParamLimits

0x7117,	// (0x00014960) cl_header_name_pane_ParamLimits

0x7117,	// (0x00014960) cl_header_name_pane

0x749b,	// (0x00014ce4) cl_header_name_pane_t1_ParamLimits

0x749b,	// (0x00014ce4) cl_header_name_pane_t1

0x74bc,	// (0x00014d05) cl_header_name_pane_t2_ParamLimits

0x74bc,	// (0x00014d05) cl_header_name_pane_t2

0x74fe,	// (0x00014d47) cl_header_name_pane_t3_ParamLimits

0x74fe,	// (0x00014d47) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d38d) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d38d) cl_header_name_pane_t

0x2da4,	// (0x000105ed) navi_pane_mv_g2_ParamLimits

0xd131,	// (0x0001a97a) field_vitu2_entry_pane_g1_ParamLimits

0xd13d,	// (0x0001a986) field_vitu2_entry_pane_g2_ParamLimits

0xd149,	// (0x0001a992) field_vitu2_entry_pane_g3_ParamLimits

0xd149,	// (0x0001a992) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d183) field_vitu2_entry_pane_g_ParamLimits

0x631c,	// (0x00013b65) cell_vitu2_itu_pane_g1_ParamLimits

0x632c,	// (0x00013b75) cell_vitu2_itu_pane_g2_ParamLimits

0x632c,	// (0x00013b75) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d18f) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d18f) cell_vitu2_itu_pane_g

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp05_ParamLimits

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp05

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp03

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp04

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp10_ParamLimits

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp10

0x70bd,	// (0x00014906) bg_vkb2_func_pane_cp08

0x70a3,	// (0x000148ec) bg_vkb2_func_pane_cp06

0x70b1,	// (0x000148fa) bg_vkb2_func_pane_cp07

0xd8e9,	// (0x0001b132) bg_vkb2_func_pane_cp11_ParamLimits

0xd8e9,	// (0x0001b132) bg_vkb2_func_pane_cp11

0xd8fe,	// (0x0001b147) bg_vkb2_func_pane_cp12_ParamLimits

0xd8fe,	// (0x0001b147) bg_vkb2_func_pane_cp12

0x94ba,	// (0x00016d03) bg_vkb2_func_pane_cp09

0xd1b5,	// (0x0001a9fe) bg_vkb2_func_pane_g1

0xa209,	// (0x00017a52) bg_vkb2_func_pane_g2

0xd1bd,	// (0x0001aa06) bg_vkb2_func_pane_g3

0xd1c5,	// (0x0001aa0e) bg_vkb2_func_pane_g4

0xd462,	// (0x0001acab) bg_vkb2_func_pane_g5

0xd1dd,	// (0x0001aa26) bg_vkb2_func_pane_g6

0xd1e5,	// (0x0001aa2e) bg_vkb2_func_pane_g7

0xd1d5,	// (0x0001aa1e) bg_vkb2_func_pane_g8

0xa1e9,	// (0x00017a32) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d394) bg_vkb2_func_pane_g

0x73bf,	// (0x00014c08) blid2_tripm_pane_g6_ParamLimits

0x73bf,	// (0x00014c08) blid2_tripm_pane_g6

0xcf08,	// (0x0001a751) mp4_progress_pane_g1

0x7438,	// (0x00014c81) blid2_tripm_values_pane_ParamLimits

0x7438,	// (0x00014c81) blid2_tripm_values_pane

0x752f,	// (0x00014d78) blid2_tripm_values_pane_t1

0x753d,	// (0x00014d86) blid2_tripm_values_pane_t2

0x754b,	// (0x00014d94) blid2_tripm_values_pane_t3

0x7559,	// (0x00014da2) blid2_tripm_values_pane_t4

0x7567,	// (0x00014db0) blid2_tripm_values_pane_t5

0x7575,	// (0x00014dbe) blid2_tripm_values_pane_t6

0x7583,	// (0x00014dcc) blid2_tripm_values_pane_t7

0x7591,	// (0x00014dda) blid2_tripm_values_pane_t8

0x759f,	// (0x00014de8) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d3a7) blid2_tripm_values_pane_t

0x1ce4,	// (0x0000f52d) call_video_pane_t1_ParamLimits

0x1d02,	// (0x0000f54b) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cadb) call_video_pane_t_ParamLimits

0x329f,	// (0x00010ae8) msg_header_pane_g1_ParamLimits

0xabd5,	// (0x0001841e) msg_header_pane_g2_ParamLimits

0xabd5,	// (0x0001841e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001ccf5) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001ccf5) msg_header_pane_g

0x9c9f,	// (0x000174e8) main_clock2_pane_ParamLimits

0x5309,	// (0x00012b52) grid_clock2_toolbar_pane_ParamLimits

0x5309,	// (0x00012b52) grid_clock2_toolbar_pane

0x5309,	// (0x00012b52) listscroll_clock2_pane_ParamLimits

0x5309,	// (0x00012b52) listscroll_clock2_pane

0x53e5,	// (0x00012c2e) main_clock2_pane_t3_ParamLimits

0x53e5,	// (0x00012c2e) main_clock2_pane_t3

0x5400,	// (0x00012c49) main_clock2_pane_t4_ParamLimits

0x5400,	// (0x00012c49) main_clock2_pane_t4

0xda04,	// (0x0001b24d) cell_clock2_toolbar_pane

0xda0c,	// (0x0001b255) cell_clock2_toolbar_pane_cp01

0xda0c,	// (0x0001b255) cell_clock2_toolbar_pane_cp02

0xda14,	// (0x0001b25d) cell_clock2_toolbar_pane_cp03

0xda1c,	// (0x0001b265) list_clock2_pane

0xa8e9,	// (0x00018132) scroll_pane_cp10

0xda24,	// (0x0001b26d) list_single_clock2_pane_ParamLimits

0xda24,	// (0x0001b26d) list_single_clock2_pane

0xaa32,	// (0x0001827b) list_highlight_pane_cp08

0xda31,	// (0x0001b27a) list_single_clock2_pane_t1

0xda3f,	// (0x0001b288) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d3ba) list_single_clock2_pane_t

0x94ba,	// (0x00016d03) bg_button_pane_cp10

0xda4d,	// (0x0001b296) cell_clock2_toolbar_pane_g1

0x32c1,	// (0x00010b0a) aid_main_viewer_pane_g1_ParamLimits

0x32c1,	// (0x00010b0a) aid_main_viewer_pane_g1

0x32cf,	// (0x00010b18) aid_main_viewer_pane_g2_ParamLimits

0x32cf,	// (0x00010b18) aid_main_viewer_pane_g2

0x32dd,	// (0x00010b26) aid_main_viewer_pane_g3_ParamLimits

0x32dd,	// (0x00010b26) aid_main_viewer_pane_g3

0x32ec,	// (0x00010b35) aid_main_viewer_pane_g4_ParamLimits

0x32ec,	// (0x00010b35) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001cd06) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001cd06) aid_main_viewer_pane_g

0x3bf2,	// (0x0001143b) main_calc_pane_ParamLimits

0x3c06,	// (0x0001144f) main_dialer2_pane_ParamLimits

0x94ba,	// (0x00016d03) main_cam6_pane

0x94ba,	// (0x00016d03) main_vid6_pane

0x5315,	// (0x00012b5e) listscroll_gen_pane_cp06_ParamLimits

0x5315,	// (0x00012b5e) listscroll_gen_pane_cp06

0x541b,	// (0x00012c64) main_clock2_pane_t5_ParamLimits

0x541b,	// (0x00012c64) main_clock2_pane_t5

0x5472,	// (0x00012cbb) aid_call2_pane_cp10_ParamLimits

0x5484,	// (0x00012ccd) aid_call_pane_cp10_ParamLimits

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5496,	// (0x00012cdf) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5496,	// (0x00012cdf) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa967,	// (0x000181b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d03c) popup_clock_analogue_window_cp10_g_ParamLimits

0x54a8,	// (0x00012cf1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5af0,	// (0x00013339) cell_dialer2_keypad_pane_g2_ParamLimits

0x5af0,	// (0x00013339) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d122) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d122) cell_dialer2_keypad_pane_g

0x5b0c,	// (0x00013355) cell_dialer2_keypad_pane_t1

0x6793,	// (0x00013fdc) main_cset_text2_pane_ParamLimits

0x6793,	// (0x00013fdc) main_cset_text2_pane

0xd6c3,	// (0x0001af0c) area_vitu2_query_pane_g1_ParamLimits

0x7042,	// (0x0001488b) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d2d7) area_vitu2_query_pane_g_ParamLimits

0xd747,	// (0x0001af90) area_vitu2_query_pane_t7_ParamLimits

0xd747,	// (0x0001af90) area_vitu2_query_pane_t7

0x70a3,	// (0x000148ec) bg_button_pane_cp018_ParamLimits

0x70b1,	// (0x000148fa) bg_button_pane_cp021_ParamLimits

0x70bd,	// (0x00014906) bg_button_pane_cp022_ParamLimits

0x70bd,	// (0x00014906) bg_vkb2_func_pane_cp08_ParamLimits

0x70a3,	// (0x000148ec) bg_vkb2_func_pane_cp06_ParamLimits

0x70b1,	// (0x000148fa) bg_vkb2_func_pane_cp07_ParamLimits

0x70cc,	// (0x00014915) input_focus_pane_cp09_ParamLimits

0xda55,	// (0x0001b29e) cam6_autofocus_pane_ParamLimits

0xda55,	// (0x0001b29e) cam6_autofocus_pane

0x75ad,	// (0x00014df6) cam6_image_uncrop_pane_ParamLimits

0x75ad,	// (0x00014df6) cam6_image_uncrop_pane

0x75bc,	// (0x00014e05) cam6_indi_pane_ParamLimits

0x75bc,	// (0x00014e05) cam6_indi_pane

0x75d2,	// (0x00014e1b) cam6_mode_pane_ParamLimits

0x75d2,	// (0x00014e1b) cam6_mode_pane

0x75e4,	// (0x00014e2d) cam6_timer_pane_ParamLimits

0x75e4,	// (0x00014e2d) cam6_timer_pane

0x75f0,	// (0x00014e39) cam6_zoom_pane_ParamLimits

0x75f0,	// (0x00014e39) cam6_zoom_pane

0x75fc,	// (0x00014e45) cam6_mode_pane_g1_ParamLimits

0x75fc,	// (0x00014e45) cam6_mode_pane_g1

0x760c,	// (0x00014e55) cam6_mode_pane_g2_ParamLimits

0x760c,	// (0x00014e55) cam6_mode_pane_g2

0x761c,	// (0x00014e65) cam6_mode_pane_g3_ParamLimits

0x761c,	// (0x00014e65) cam6_mode_pane_g3

0x762c,	// (0x00014e75) cam6_mode_pane_g4_ParamLimits

0x762c,	// (0x00014e75) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d3bf) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d3bf) cam6_mode_pane_g

0xda63,	// (0x0001b2ac) bg_tb_trans_pane_cp08_ParamLimits

0xda63,	// (0x0001b2ac) bg_tb_trans_pane_cp08

0xda71,	// (0x0001b2ba) cam6_battery_pane_ParamLimits

0xda71,	// (0x0001b2ba) cam6_battery_pane

0xda87,	// (0x0001b2d0) cam6_indi_pane_g1_ParamLimits

0xda87,	// (0x0001b2d0) cam6_indi_pane_g1

0xda99,	// (0x0001b2e2) cam6_indi_pane_g2_ParamLimits

0xda99,	// (0x0001b2e2) cam6_indi_pane_g2

0xdaab,	// (0x0001b2f4) cam6_indi_pane_g3_ParamLimits

0xdaab,	// (0x0001b2f4) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d3c8) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d3c8) cam6_indi_pane_g

0xdabd,	// (0x0001b306) cam6_indi_pane_t1_ParamLimits

0xdabd,	// (0x0001b306) cam6_indi_pane_t1

0x763c,	// (0x00014e85) cam6_autofocus_pane_g1

0x7644,	// (0x00014e8d) cam6_autofocus_pane_g2

0x764c,	// (0x00014e95) cam6_autofocus_pane_g3

0x7654,	// (0x00014e9d) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d3cf) cam6_autofocus_pane_g

0xdae3,	// (0x0001b32c) cam6_timer_pane_g1

0xdaeb,	// (0x0001b334) cam6_timer_pane_t1

0xdaf9,	// (0x0001b342) cam6_zoom_cont_pane

0xdb01,	// (0x0001b34a) cam6_zoom_pane_g1

0xdb09,	// (0x0001b352) cam6_zoom_pane_g2

0x765c,	// (0x00014ea5) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d3d8) cam6_zoom_pane_g

0xc3f5,	// (0x00019c3e) cam6_battery_pane_g1

0xc3f5,	// (0x00019c3e) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001cf49) cam6_battery_pane_g

0xdb11,	// (0x0001b35a) cam6_zoom_cont_pane_g1

0xdb1a,	// (0x0001b363) cam6_zoom_cont_pane_g2

0xdb23,	// (0x0001b36c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d3df) cam6_zoom_cont_pane_g

0x7679,	// (0x00014ec2) cam6_mode_pane_cp_ParamLimits

0x7679,	// (0x00014ec2) cam6_mode_pane_cp

0x75f0,	// (0x00014e39) cam6_zoom_pane_cp_ParamLimits

0x75f0,	// (0x00014e39) cam6_zoom_pane_cp

0x768b,	// (0x00014ed4) vid6_image_uncrop_cif_pane_ParamLimits

0x768b,	// (0x00014ed4) vid6_image_uncrop_cif_pane

0x769b,	// (0x00014ee4) vid6_image_uncrop_nhd_pane_ParamLimits

0x769b,	// (0x00014ee4) vid6_image_uncrop_nhd_pane

0x75ad,	// (0x00014df6) vid6_image_uncrop_vga_pane_ParamLimits

0x75ad,	// (0x00014df6) vid6_image_uncrop_vga_pane

0x76aa,	// (0x00014ef3) vid6_image_uncrop_wvga_pane_ParamLimits

0x76aa,	// (0x00014ef3) vid6_image_uncrop_wvga_pane

0x76b9,	// (0x00014f02) vid6_indi_pane_ParamLimits

0x76b9,	// (0x00014f02) vid6_indi_pane

0xda63,	// (0x0001b2ac) bg_tb_trans_pane_cp09_ParamLimits

0xda63,	// (0x0001b2ac) bg_tb_trans_pane_cp09

0xdb3b,	// (0x0001b384) cam6_battery_pane_cp_ParamLimits

0xdb3b,	// (0x0001b384) cam6_battery_pane_cp

0xdb47,	// (0x0001b390) vid6_indi_pane_g1_ParamLimits

0xdb47,	// (0x0001b390) vid6_indi_pane_g1

0xdb59,	// (0x0001b3a2) vid6_indi_pane_g2_ParamLimits

0xdb59,	// (0x0001b3a2) vid6_indi_pane_g2

0xdb6b,	// (0x0001b3b4) vid6_indi_pane_g3_ParamLimits

0xdb6b,	// (0x0001b3b4) vid6_indi_pane_g3

0xdb80,	// (0x0001b3c9) vid6_indi_pane_g4_ParamLimits

0xdb80,	// (0x0001b3c9) vid6_indi_pane_g4

0xdb95,	// (0x0001b3de) vid6_indi_pane_g5_ParamLimits

0xdb95,	// (0x0001b3de) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d3e6) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d3e6) vid6_indi_pane_g

0xdbaf,	// (0x0001b3f8) vid6_indi_pane_t1_ParamLimits

0xdbaf,	// (0x0001b3f8) vid6_indi_pane_t1

0xdbc5,	// (0x0001b40e) vid6_indi_pane_t2_ParamLimits

0xdbc5,	// (0x0001b40e) vid6_indi_pane_t2

0xdbed,	// (0x0001b436) vid6_indi_pane_t3_ParamLimits

0xdbed,	// (0x0001b436) vid6_indi_pane_t3

0xdc15,	// (0x0001b45e) vid6_indi_pane_t4_ParamLimits

0xdc15,	// (0x0001b45e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d3f1) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d3f1) vid6_indi_pane_t

0xdc39,	// (0x0001b482) wait_bar_pane_cp08

0x76d1,	// (0x00014f1a) main_cset_text2_pane_t1_ParamLimits

0x76d1,	// (0x00014f1a) main_cset_text2_pane_t1

0x7664,	// (0x00014ead) listscroll_gen_pane_cp06_t1_ParamLimits

0x7664,	// (0x00014ead) listscroll_gen_pane_cp06_t1

0x94ba,	// (0x00016d03) main_cam6_set_pane

0xc661,	// (0x00019eaa) bg_tb_trans_pane_cp06_ParamLimits

0xd0bd,	// (0x0001a906) cam4_indicators_pane_g1_ParamLimits

0xd0ce,	// (0x0001a917) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d15f) cam4_indicators_pane_g_ParamLimits

0xd0ec,	// (0x0001a935) cam4_indicators_pane_t1_ParamLimits

0xcbba,	// (0x0001a403) bg_tb_trans_pane_cp07_ParamLimits

0x60a0,	// (0x000138e9) vid4_indicators_pane_g1_ParamLimits

0x60ad,	// (0x000138f6) vid4_indicators_pane_g2_ParamLimits

0x60ba,	// (0x00013903) vid4_indicators_pane_g3_ParamLimits

0x60c7,	// (0x00013910) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d171) vid4_indicators_pane_g_ParamLimits

0x60df,	// (0x00013928) vid4_indicators_pane_t1_ParamLimits

0xd7c4,	// (0x0001b00d) vid4_progress_pane_g1_ParamLimits

0xd7d4,	// (0x0001b01d) vid4_progress_pane_g2_ParamLimits

0xac7a,	// (0x000184c3) vid4_progress_pane_g3_ParamLimits

0xd7e4,	// (0x0001b02d) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d322) vid4_progress_pane_g_ParamLimits

0xd802,	// (0x0001b04b) vid4_progress_pane_t1_ParamLimits

0xd817,	// (0x0001b060) vid4_progress_pane_t2_ParamLimits

0xd82d,	// (0x0001b076) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d32d) vid4_progress_pane_t_ParamLimits

0xd842,	// (0x0001b08b) wait_bar_pane_cp07_ParamLimits

0x76ee,	// (0x00014f37) main_cam6_set_pane_g2_ParamLimits

0x76ee,	// (0x00014f37) main_cam6_set_pane_g2

0x7712,	// (0x00014f5b) main_cset6_listscroll_pane_ParamLimits

0x7712,	// (0x00014f5b) main_cset6_listscroll_pane

0x7732,	// (0x00014f7b) main_cset6_slider_pane_ParamLimits

0x7732,	// (0x00014f7b) main_cset6_slider_pane

0x7748,	// (0x00014f91) main_cset6_text2_pane_ParamLimits

0x7748,	// (0x00014f91) main_cset6_text2_pane

0xdc48,	// (0x0001b491) main_cset6_text_pane

0xdc50,	// (0x0001b499) main_cset_list_pane_copy1_ParamLimits

0xdc50,	// (0x0001b499) main_cset_list_pane_copy1

0xdc60,	// (0x0001b4a9) scroll_pane_cp028_copy1

0x7756,	// (0x00014f9f) cset_list_set_pane_copy1

0x7767,	// (0x00014fb0) aid_position_infowindow_above_copy1

0x776f,	// (0x00014fb8) aid_position_infowindow_below_copy1

0x7777,	// (0x00014fc0) cset_list_set_pane_g1_copy1

0x777f,	// (0x00014fc8) cset_list_set_pane_g3_copy1_ParamLimits

0x777f,	// (0x00014fc8) cset_list_set_pane_g3_copy1

0x778e,	// (0x00014fd7) cset_list_set_pane_t1_copy1_ParamLimits

0x778e,	// (0x00014fd7) cset_list_set_pane_t1_copy1

0x952a,	// (0x00016d73) list_highlight_pane_cp021_copy1_ParamLimits

0x952a,	// (0x00016d73) list_highlight_pane_cp021_copy1

0xdc69,	// (0x0001b4b2) cset6_slider_pane_ParamLimits

0xdc69,	// (0x0001b4b2) cset6_slider_pane

0xdc95,	// (0x0001b4de) main_cset6_slider_pane_g1_ParamLimits

0xdc95,	// (0x0001b4de) main_cset6_slider_pane_g1

0x77a3,	// (0x00014fec) main_cset6_slider_pane_g2_ParamLimits

0x77a3,	// (0x00014fec) main_cset6_slider_pane_g2

0xdcbd,	// (0x0001b506) main_cset6_slider_pane_g3_ParamLimits

0xdcbd,	// (0x0001b506) main_cset6_slider_pane_g3

0x77cb,	// (0x00015014) main_cset6_slider_pane_g4_ParamLimits

0x77cb,	// (0x00015014) main_cset6_slider_pane_g4

0x77d7,	// (0x00015020) main_cset6_slider_pane_g5_ParamLimits

0x77d7,	// (0x00015020) main_cset6_slider_pane_g5

0xd2e4,	// (0x0001ab2d) main_cset6_slider_pane_g7_ParamLimits

0xd2e4,	// (0x0001ab2d) main_cset6_slider_pane_g7

0xd2f0,	// (0x0001ab39) main_cset6_slider_pane_g8_ParamLimits

0xd2f0,	// (0x0001ab39) main_cset6_slider_pane_g8

0x6840,	// (0x00014089) main_cset6_slider_pane_g9_ParamLimits

0x6840,	// (0x00014089) main_cset6_slider_pane_g9

0x684c,	// (0x00014095) main_cset6_slider_pane_g10_ParamLimits

0x684c,	// (0x00014095) main_cset6_slider_pane_g10

0x6858,	// (0x000140a1) main_cset6_slider_pane_g11_ParamLimits

0x6858,	// (0x000140a1) main_cset6_slider_pane_g11

0x6864,	// (0x000140ad) main_cset6_slider_pane_g12_ParamLimits

0x6864,	// (0x000140ad) main_cset6_slider_pane_g12

0x6870,	// (0x000140b9) main_cset6_slider_pane_g13_ParamLimits

0x6870,	// (0x000140b9) main_cset6_slider_pane_g13

0x687c,	// (0x000140c5) main_cset6_slider_pane_g14_ParamLimits

0x687c,	// (0x000140c5) main_cset6_slider_pane_g14

0x77e3,	// (0x0001502c) main_cset6_slider_pane_g15_ParamLimits

0x77e3,	// (0x0001502c) main_cset6_slider_pane_g15

0x68a0,	// (0x000140e9) main_cset6_slider_pane_g16_ParamLimits

0x68a0,	// (0x000140e9) main_cset6_slider_pane_g16

0x68ac,	// (0x000140f5) main_cset6_slider_pane_g17_ParamLimits

0x68ac,	// (0x000140f5) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d3fa) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d3fa) main_cset6_slider_pane_g

0xdcc9,	// (0x0001b512) main_cset6_slider_pane_t1_ParamLimits

0xdcc9,	// (0x0001b512) main_cset6_slider_pane_t1

0x7813,	// (0x0001505c) main_cset6_slider_pane_t2_ParamLimits

0x7813,	// (0x0001505c) main_cset6_slider_pane_t2

0x783e,	// (0x00015087) main_cset6_slider_pane_t3_ParamLimits

0x783e,	// (0x00015087) main_cset6_slider_pane_t3

0x7869,	// (0x000150b2) main_cset6_slider_pane_t4_ParamLimits

0x7869,	// (0x000150b2) main_cset6_slider_pane_t4

0x7894,	// (0x000150dd) main_cset6_slider_pane_t5_ParamLimits

0x7894,	// (0x000150dd) main_cset6_slider_pane_t5

0xdd0a,	// (0x0001b553) main_cset6_slider_pane_t7_ParamLimits

0xdd0a,	// (0x0001b553) main_cset6_slider_pane_t7

0x78bf,	// (0x00015108) main_cset6_slider_pane_t8_ParamLimits

0x78bf,	// (0x00015108) main_cset6_slider_pane_t8

0x78e3,	// (0x0001512c) main_cset6_slider_pane_t9_ParamLimits

0x78e3,	// (0x0001512c) main_cset6_slider_pane_t9

0x7907,	// (0x00015150) main_cset6_slider_pane_t10_ParamLimits

0x7907,	// (0x00015150) main_cset6_slider_pane_t10

0x792b,	// (0x00015174) main_cset6_slider_pane_t11_ParamLimits

0x792b,	// (0x00015174) main_cset6_slider_pane_t11

0xdd40,	// (0x0001b589) main_cset6_slider_pane_t14_ParamLimits

0xdd40,	// (0x0001b589) main_cset6_slider_pane_t14

0xdd79,	// (0x0001b5c2) main_cset6_slider_pane_t15_ParamLimits

0xdd79,	// (0x0001b5c2) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d41f) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d41f) main_cset6_slider_pane_t

0xd3ec,	// (0x0001ac35) cset_slider_pane_g1_copy1

0xd3f5,	// (0x0001ac3e) cset_slider_pane_g2_copy1

0xd3fe,	// (0x0001ac47) cset_slider_pane_g3_copy1

0x94ba,	// (0x00016d03) bg_popup_sub_pane_cp011_copy1

0xd4e3,	// (0x0001ad2c) main_cset_text_pane_g1_copy1

0xd4eb,	// (0x0001ad34) main_cset_text_pane_t1_copy1

0xd4f9,	// (0x0001ad42) main_cset_text_pane_t2_copy1

0xd507,	// (0x0001ad50) main_cset_text_pane_t3_copy1

0xd515,	// (0x0001ad5e) main_cset_text_pane_t4_copy1

0xd523,	// (0x0001ad6c) main_cset_text_pane_t5_copy1

0xd531,	// (0x0001ad7a) main_cset_text_pane_t6_copy1

0xd53f,	// (0x0001ad88) main_cset_text_pane_t7_copy1

0x794f,	// (0x00015198) main_cset_text2_pane_t1_copy1

0x94ba,	// (0x00016d03) main_ncimui_pane

0x3e48,	// (0x00011691) popup_query_ncimui_window_ParamLimits

0x3e48,	// (0x00011691) popup_query_ncimui_window

0xc6c6,	// (0x00019f0f) field_cale_ev2_pane_g4_ParamLimits

0xc6c6,	// (0x00019f0f) field_cale_ev2_pane_g4

0x59d0,	// (0x00013219) cell_video_dialer_keypad_pane_g2_ParamLimits

0x59d0,	// (0x00013219) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d0fd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d0fd) cell_video_dialer_keypad_pane_g

0x59e8,	// (0x00013231) cell_video_dialer_keypad_pane_t1

0x94ba,	// (0x00016d03) bg_popup_window_pane_cp012

0xa7c6,	// (0x0001800f) heading_pane_cp06

0xdea1,	// (0x0001b6ea) ncim_query_content_pane

0x94ba,	// (0x00016d03) bg_popup_heading_pane_cp01

0xdea9,	// (0x0001b6f2) ncim_heading_pane_t1

0xdeb7,	// (0x0001b700) ncim_indicator_popup_pane

0xdec9,	// (0x0001b712) ncim_query_button_pane

0xdedd,	// (0x0001b726) ncim_query_content_pane_t1

0xdeef,	// (0x0001b738) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d45e) ncim_query_content_pane_t

0xdf29,	// (0x0001b772) ncim_query_list_pane

0xdf3b,	// (0x0001b784) ncim_query_popup_pane

0xdeb7,	// (0x0001b700) ncim_indicator_popup_pane_ParamLimits

0x7a64,	// (0x000152ad) ncim_query_content_pane_g1_ParamLimits

0x7a64,	// (0x000152ad) ncim_query_content_pane_g1

0xdedd,	// (0x0001b726) ncim_query_content_pane_t1_ParamLimits

0xdeef,	// (0x0001b738) ncim_query_content_pane_t2_ParamLimits

0x7a70,	// (0x000152b9) ncim_query_content_pane_t3_ParamLimits

0x7a70,	// (0x000152b9) ncim_query_content_pane_t3

0x7a98,	// (0x000152e1) ncim_query_content_pane_t4_ParamLimits

0x7a98,	// (0x000152e1) ncim_query_content_pane_t4

0x7ac0,	// (0x00015309) ncim_query_content_pane_t5_ParamLimits

0x7ac0,	// (0x00015309) ncim_query_content_pane_t5

0xdf01,	// (0x0001b74a) ncim_query_content_pane_t6_ParamLimits

0xdf01,	// (0x0001b74a) ncim_query_content_pane_t6

0xfc15,	// (0x0001d45e) ncim_query_content_pane_t_ParamLimits

0xdf29,	// (0x0001b772) ncim_query_list_pane_ParamLimits

0xdf3b,	// (0x0001b784) ncim_query_popup_pane_ParamLimits

0xdf4f,	// (0x0001b798) wait_bar_pane_cp04

0x94ba,	// (0x00016d03) input_focus_pane_cp011

0xdf57,	// (0x0001b7a0) ncim_query_popup_pane_t1

0xdf65,	// (0x0001b7ae) ncim_list_query_list_pane_ParamLimits

0xdf65,	// (0x0001b7ae) ncim_list_query_list_pane

0x94ba,	// (0x00016d03) bg_button_pane_cp027

0xdf72,	// (0x0001b7bb) ncim_query_button_pane_g1

0x94ba,	// (0x00016d03) list_highlight_pane_cp012

0xdf7c,	// (0x0001b7c5) ncim_list_query_list_pane_g1

0xdf84,	// (0x0001b7cd) ncim_list_query_list_pane_t1

0xd0dd,	// (0x0001a926) cam4_indicators_pane_g3_ParamLimits

0xd0dd,	// (0x0001a926) cam4_indicators_pane_g3

0x60d3,	// (0x0001391c) vid4_indicators_pane_g5_ParamLimits

0x60d3,	// (0x0001391c) vid4_indicators_pane_g5

0xd7f3,	// (0x0001b03c) vid4_progress_pane_g5_ParamLimits

0xd7f3,	// (0x0001b03c) vid4_progress_pane_g5

0x797d,	// (0x000151c6) main_ncimui_pane_g1

0x79d3,	// (0x0001521c) ncimui_group_query_pane_ParamLimits

0x79d3,	// (0x0001521c) ncimui_group_query_pane

0x7a0f,	// (0x00015258) ncimui_list_pane_ParamLimits

0x7a0f,	// (0x00015258) ncimui_list_pane

0x7a30,	// (0x00015279) ncimui_text_pane_ParamLimits

0x7a30,	// (0x00015279) ncimui_text_pane

0x7ae8,	// (0x00015331) ncimui_text_pane_t1_ParamLimits

0x7ae8,	// (0x00015331) ncimui_text_pane_t1

0xdf92,	// (0x0001b7db) ncimui_list_single_graphic_pane_ParamLimits

0xdf92,	// (0x0001b7db) ncimui_list_single_graphic_pane

0x7b06,	// (0x0001534f) ncimui_query_pane_ParamLimits

0x7b06,	// (0x0001534f) ncimui_query_pane

0x94ba,	// (0x00016d03) list_highlight_pane_cp013

0xdfa2,	// (0x0001b7eb) ncim_list_query_list_pane_t1_copy1

0xdf7c,	// (0x0001b7c5) ncim_list_single_graphic_pane_g1

0xdfb0,	// (0x0001b7f9) ncim_query_button_pane_cp01

0xdfbc,	// (0x0001b805) ncim_query_entry_pane_ParamLimits

0xdfbc,	// (0x0001b805) ncim_query_entry_pane

0xdfcf,	// (0x0001b818) ncimui_query_pane_g1

0xdfdb,	// (0x0001b824) ncimui_query_pane_t1_ParamLimits

0xdfdb,	// (0x0001b824) ncimui_query_pane_t1

0x952a,	// (0x00016d73) input_focus_pane_cp012

0xdff4,	// (0x0001b83d) ncim_query_entry_pane_t1

0x9c9f,	// (0x000174e8) main_im_pane_ParamLimits

0x952a,	// (0x00016d73) main_mobtv_pane_ParamLimits

0x952a,	// (0x00016d73) main_mobtv_pane

0x77fb,	// (0x00015044) main_cset6_slider_pane_g18_ParamLimits

0x77fb,	// (0x00015044) main_cset6_slider_pane_g18

0x7807,	// (0x00015050) main_cset6_slider_pane_g19_ParamLimits

0x7807,	// (0x00015050) main_cset6_slider_pane_g19

0xe006,	// (0x0001b84f) bg_main_mobtv_pane_ParamLimits

0xe006,	// (0x0001b84f) bg_main_mobtv_pane

0x7b19,	// (0x00015362) main_mobtv_info_pane

0x7b22,	// (0x0001536b) main_mobtv_loading_pane_ParamLimits

0x7b22,	// (0x0001536b) main_mobtv_loading_pane

0xe014,	// (0x0001b85d) main_mobtv_pg_channel_list_pane

0xe01e,	// (0x0001b867) main_mobtv_pg_hdr_pane

0x7b2f,	// (0x00015378) main_mobtv_programe_curr_pane_ParamLimits

0x7b2f,	// (0x00015378) main_mobtv_programe_curr_pane

0x7b3c,	// (0x00015385) main_mobtv_programe_next_pane_ParamLimits

0x7b3c,	// (0x00015385) main_mobtv_programe_next_pane

0xe027,	// (0x0001b870) popup_mobtv_noti_window

0xc3f5,	// (0x00019c3e) main_tv_pg_hdr_pane_g1

0xe02f,	// (0x0001b878) main_tv_pg_hdr_pane_g2

0xe037,	// (0x0001b880) main_tv_pg_hdr_pane_g3

0xe03f,	// (0x0001b888) main_tv_pg_hdr_pane_g4

0xe047,	// (0x0001b890) main_tv_pg_hdr_pane_g5

0xe051,	// (0x0001b89a) main_tv_pg_hdr_pane_g6

0xe05b,	// (0x0001b8a4) main_tv_pg_hdr_pane_g7

0xe065,	// (0x0001b8ae) main_tv_pg_hdr_pane_g8

0xe06f,	// (0x0001b8b8) main_tv_pg_hdr_pane_g9

0xe079,	// (0x0001b8c2) main_tv_pg_hdr_pane_g10

0xe083,	// (0x0001b8cc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d46b) main_tv_pg_hdr_pane_g

0xe08d,	// (0x0001b8d6) main_tv_pg_hdr_pane_t1

0xe09b,	// (0x0001b8e4) main_tv_pg_hdr_pane_t2

0xe0a9,	// (0x0001b8f2) main_tv_pg_hdr_pane_t3

0xe0b9,	// (0x0001b902) main_tv_pg_hdr_pane_t4

0xe0c9,	// (0x0001b912) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d482) main_tv_pg_hdr_pane_t

0xe0d9,	// (0x0001b922) single_mobtv_pg_channel_pane_ParamLimits

0xe0d9,	// (0x0001b922) single_mobtv_pg_channel_pane

0xe0eb,	// (0x0001b934) single_mobtv_pg_channel_table_pane

0xe0f4,	// (0x0001b93d) single_mobtv_pg_channel_thumb_pane

0xe0fd,	// (0x0001b946) single_tv_pg_channel_pane_g1

0xe106,	// (0x0001b94f) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d48d) single_tv_pg_channel_pane_g

0xc661,	// (0x00019eaa) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc661,	// (0x00019eaa) bg_single_mobtv_pg_channel_thumb_pane

0xe10f,	// (0x0001b958) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe10f,	// (0x0001b958) single_mobtv_pg_channel_thumb_pane_g1

0xe11d,	// (0x0001b966) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe11d,	// (0x0001b966) single_mobtv_pg_channel_thumb_pane_g2

0xe129,	// (0x0001b972) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe129,	// (0x0001b972) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d492) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d492) single_mobtv_pg_channel_thumb_pane_g

0xe135,	// (0x0001b97e) single_mobtv_pg_channel_thumb_pane_t1

0xe143,	// (0x0001b98c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d499) single_mobtv_pg_channel_thumb_pane_t

0xc3f5,	// (0x00019c3e) bg_single_mobtv_pg_channel_table_pane_g1

0xc3f5,	// (0x00019c3e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001cf49) bg_single_mobtv_pg_channel_table_pane_g

0xe151,	// (0x0001b99a) single_mobtv_pg_channel_table_pane_t1

0xe15f,	// (0x0001b9a8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d49e) single_mobtv_pg_channel_table_pane_t

0x7b51,	// (0x0001539a) main_mobtv_info_pane_g1_ParamLimits

0x7b51,	// (0x0001539a) main_mobtv_info_pane_g1

0x7b6f,	// (0x000153b8) main_mobtv_info_pane_t1_ParamLimits

0x7b6f,	// (0x000153b8) main_mobtv_info_pane_t1

0x7be7,	// (0x00015430) main_mobtv_info_pane_t2_ParamLimits

0x7be7,	// (0x00015430) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d4a8) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d4a8) main_mobtv_info_pane_t

0x7c76,	// (0x000154bf) wait_bar_pane_cp05

0x7c88,	// (0x000154d1) main_mobtv_loading_pane_g1_ParamLimits

0x7c88,	// (0x000154d1) main_mobtv_loading_pane_g1

0x7c9b,	// (0x000154e4) main_mobtv_loading_pane_g2_ParamLimits

0x7c9b,	// (0x000154e4) main_mobtv_loading_pane_g2

0x7ca7,	// (0x000154f0) main_mobtv_loading_pane_g3_ParamLimits

0x7ca7,	// (0x000154f0) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d4af) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d4af) main_mobtv_loading_pane_g

0xe16d,	// (0x0001b9b6) main_mobtv_loading_pane_t1_ParamLimits

0xe16d,	// (0x0001b9b6) main_mobtv_loading_pane_t1

0xe185,	// (0x0001b9ce) main_mobtv_loading_pane_t2_ParamLimits

0xe185,	// (0x0001b9ce) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d4b6) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d4b6) main_mobtv_loading_pane_t

0x7cba,	// (0x00015503) wait_bar_pane_cp06_ParamLimits

0x7cba,	// (0x00015503) wait_bar_pane_cp06

0xe1a9,	// (0x0001b9f2) main_mobtv_programe_curr_pane_t1

0xe1b7,	// (0x0001ba00) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d4bb) main_mobtv_programe_curr_pane_t

0xe1c5,	// (0x0001ba0e) main_mobtv_programe_next_pane_t1

0xe1d3,	// (0x0001ba1c) main_mobtv_programe_next_pane_t2

0xe1e1,	// (0x0001ba2a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d4c0) main_mobtv_programe_next_pane_t

0x94ba,	// (0x00016d03) bg_popup_mobtv_noti_window_pane

0xe1ef,	// (0x0001ba38) popup_mobtv_noti_window_g1

0xe1f7,	// (0x0001ba40) popup_mobtv_noti_window_t1

0xe205,	// (0x0001ba4e) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d4c7) popup_mobtv_noti_window_t

0xc3f5,	// (0x00019c3e) bg_popup_mobtv_noti_window_pane_g1

0x94ba,	// (0x00016d03) sc_clock_pane

0x94ba,	// (0x00016d03) main_fs_bigclock_pane

0x7422,	// (0x00014c6b) blid2_tripm_pane_t4_ParamLimits

0x7422,	// (0x00014c6b) blid2_tripm_pane_t4

0x7cc9,	// (0x00015512) sc_clock_pane_g1_ParamLimits

0x7cc9,	// (0x00015512) sc_clock_pane_g1

0x7cdb,	// (0x00015524) sc_clock_pane_t1_ParamLimits

0x7cdb,	// (0x00015524) sc_clock_pane_t1

0x7cfd,	// (0x00015546) sc_clock_pane_t2_ParamLimits

0x7cfd,	// (0x00015546) sc_clock_pane_t2

0x7d15,	// (0x0001555e) sc_clock_pane_t3_ParamLimits

0x7d15,	// (0x0001555e) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d4cc) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d4cc) sc_clock_pane_t

0x8c2e,	// (0x00016477) main_fs_bigclock_indicator_pane_ParamLimits

0x8c2e,	// (0x00016477) main_fs_bigclock_indicator_pane

0xc631,	// (0x00019e7a) main_fs_bigclock_pane_g1_ParamLimits

0xc631,	// (0x00019e7a) main_fs_bigclock_pane_g1

0x8c3a,	// (0x00016483) main_fs_bigclock_pane_t1_ParamLimits

0x8c3a,	// (0x00016483) main_fs_bigclock_pane_t1

0x8c4c,	// (0x00016495) main_fs_bigclock_pane_t2_ParamLimits

0x8c4c,	// (0x00016495) main_fs_bigclock_pane_t2

0x8c60,	// (0x000164a9) main_fs_bigclock_pane_t3_ParamLimits

0x8c60,	// (0x000164a9) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001d6c6) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001d6c6) main_fs_bigclock_pane_t

0xeced,	// (0x0001c536) main_fs_bigclock_indicator_pane_g1

0xded1,	// (0x0001b71a) ncim_query_content_pane_g2_ParamLimits

0xded1,	// (0x0001b71a) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d459) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d459) ncim_query_content_pane_g

0x7d2e,	// (0x00015577) sc_clock_pane_t4_ParamLimits

0x7d2e,	// (0x00015577) sc_clock_pane_t4

0x952a,	// (0x00016d73) main_radioblah_pane

0xd023,	// (0x0001a86c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd023,	// (0x0001a86c) cell_call4_button_pane_t1_copy1

0x7985,	// (0x000151ce) main_ncimui_pane_t1_ParamLimits

0x7985,	// (0x000151ce) main_ncimui_pane_t1

0x799f,	// (0x000151e8) main_ncimui_pane_t2_ParamLimits

0x799f,	// (0x000151e8) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d452) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d452) main_ncimui_pane_t

0xe21b,	// (0x0001ba64) main_radioblah_anim_pane_ParamLimits

0xe21b,	// (0x0001ba64) main_radioblah_anim_pane

0xe22c,	// (0x0001ba75) main_radioblah_info_pane_ParamLimits

0xe22c,	// (0x0001ba75) main_radioblah_info_pane

0xe240,	// (0x0001ba89) main_radioblah_pane_t1_ParamLimits

0xe240,	// (0x0001ba89) main_radioblah_pane_t1

0xe25c,	// (0x0001baa5) main_radioblah_pane_t2_ParamLimits

0xe25c,	// (0x0001baa5) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d4ed) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d4ed) main_radioblah_pane_t

0x7efa,	// (0x00015743) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7efa,	// (0x00015743) main_radioblah_rocker_ctrl_pane

0xe2a4,	// (0x0001baed) main_radioblah_info_pane_t1_ParamLimits

0xe2a4,	// (0x0001baed) main_radioblah_info_pane_t1

0x7f52,	// (0x0001579b) main_radioblah_info_pane_t2_ParamLimits

0x7f52,	// (0x0001579b) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d4f6) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d4f6) main_radioblah_info_pane_t

0xc3f5,	// (0x00019c3e) main_radioblah_rocker_ctrl_pane_g1

0x8002,	// (0x0001584b) main_radioblah_rocker_ctrl_pane_g2

0x800a,	// (0x00015853) main_radioblah_rocker_ctrl_pane_g3

0x8012,	// (0x0001585b) main_radioblah_rocker_ctrl_pane_g4

0x801a,	// (0x00015863) main_radioblah_rocker_ctrl_pane_g5

0x8022,	// (0x0001586b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d4ff) main_radioblah_rocker_ctrl_pane_g

0x794f,	// (0x00015198) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0ad,	// (0x0001a8f6) cam4_image_uncrop_qvga_pane

0xd106,	// (0x0001a94f) vid4_image_uncrop_qcif_pane

0xda55,	// (0x0001b29e) cam6_image_uncrop_qvga_pane_ParamLimits

0xda55,	// (0x0001b29e) cam6_image_uncrop_qvga_pane

0xdb2b,	// (0x0001b374) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb2b,	// (0x0001b374) vid6_image_uncrop_qcif_pane

0x94ba,	// (0x00016d03) bg_popup_preview_window_pane_cp03

0xde83,	// (0x0001b6cc) list_cset_text2_pane

0xde8b,	// (0x0001b6d4) main_cset6_text2_pane_g1

0xde93,	// (0x0001b6dc) main_cset6_text2_pane_t1

0x802a,	// (0x00015873) list_cset_text2_pane_t1_ParamLimits

0x802a,	// (0x00015873) list_cset_text2_pane_t1

0x952a,	// (0x00016d73) main_radioblah_pane_ParamLimits

0x7c62,	// (0x000154ab) main_mobtv_info_pane_t3_ParamLimits

0x7c62,	// (0x000154ab) main_mobtv_info_pane_t3

0x7ee8,	// (0x00015731) main_radioblah_pane_g1

0x7f22,	// (0x0001576b) main_radioblah_info_pane_g1

0x7fa7,	// (0x000157f0) main_radioblah_info_pane_t3_ParamLimits

0x7fa7,	// (0x000157f0) main_radioblah_info_pane_t3

0x28c0,	// (0x00010109) highlight_cell_cale_month_pane_ParamLimits

0x28c0,	// (0x00010109) highlight_cell_cale_month_pane

0x94ba,	// (0x00016d03) main_phob_fisheye_pane

0xc74f,	// (0x00019f98) scroll_pane_cp0031_ParamLimits

0xc74f,	// (0x00019f98) scroll_pane_cp0031

0xdc39,	// (0x0001b482) wait_bar_pane_cp08_ParamLimits

0x7756,	// (0x00014f9f) cset_list_set_pane_copy1_ParamLimits

0xe2de,	// (0x0001bb27) highlight_cell_cale_month_pane_g1

0x8043,	// (0x0001588c) highlight_cell_cale_month_pane_t1

0xd7b3,	// (0x0001affc) list_gen_pane_cp01

0xd2cf,	// (0x0001ab18) scroll_pane_01

0xeb87,	// (0x0001c3d0) list_single_double_fisheye_pane

0x8051,	// (0x0001589a) list_double_fisheye_pane_g1_ParamLimits

0x8051,	// (0x0001589a) list_double_fisheye_pane_g1

0x805d,	// (0x000158a6) list_double_fisheye_pane_g2_ParamLimits

0x805d,	// (0x000158a6) list_double_fisheye_pane_g2

0x8071,	// (0x000158ba) list_double_fisheye_pane_g3_ParamLimits

0x8071,	// (0x000158ba) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d50c) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d50c) list_double_fisheye_pane_g

0x809a,	// (0x000158e3) list_double_fisheye_pane_t1_ParamLimits

0x809a,	// (0x000158e3) list_double_fisheye_pane_t1

0x80b5,	// (0x000158fe) list_double_fisheye_pane_t2_ParamLimits

0x80b5,	// (0x000158fe) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d517) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d517) list_double_fisheye_pane_t

0x94ba,	// (0x00016d03) main_call5_pane

0x7d59,	// (0x000155a2) sc_swipe_pane_ParamLimits

0x7d59,	// (0x000155a2) sc_swipe_pane

0x80ea,	// (0x00015933) call5_image_pane_ParamLimits

0x80ea,	// (0x00015933) call5_image_pane

0x8107,	// (0x00015950) call5_swipe_1_pane_ParamLimits

0x8107,	// (0x00015950) call5_swipe_1_pane

0x811a,	// (0x00015963) call5_swipe_2_pane_ParamLimits

0x811a,	// (0x00015963) call5_swipe_2_pane

0x8145,	// (0x0001598e) popup_call5_audio_first_window_ParamLimits

0x8145,	// (0x0001598e) popup_call5_audio_first_window

0xc661,	// (0x00019eaa) call5_swipe_1_pane_g1_ParamLimits

0xc661,	// (0x00019eaa) call5_swipe_1_pane_g1

0xe2e6,	// (0x0001bb2f) call5_swipe_1_pane_g2_ParamLimits

0xe2e6,	// (0x0001bb2f) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d51c) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d51c) call5_swipe_1_pane_g

0xe2f2,	// (0x0001bb3b) call5_swipe_1_pane_t1_ParamLimits

0xe2f2,	// (0x0001bb3b) call5_swipe_1_pane_t1

0xc661,	// (0x00019eaa) call5_swipe_2_pane_g1_ParamLimits

0xc661,	// (0x00019eaa) call5_swipe_2_pane_g1

0xe307,	// (0x0001bb50) call5_swipe_2_pane_g2_ParamLimits

0xe307,	// (0x0001bb50) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d521) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d521) call5_swipe_2_pane_g

0xe313,	// (0x0001bb5c) call5_swipe_2_pane_t1_ParamLimits

0xe313,	// (0x0001bb5c) call5_swipe_2_pane_t1

0xe328,	// (0x0001bb71) sc_swipe_pane_g1_ParamLimits

0xe328,	// (0x0001bb71) sc_swipe_pane_g1

0xe335,	// (0x0001bb7e) sc_swipe_pane_g2_ParamLimits

0xe335,	// (0x0001bb7e) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d526) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d526) sc_swipe_pane_g

0xe341,	// (0x0001bb8a) sc_swipe_pane_t1_ParamLimits

0xe341,	// (0x0001bb8a) sc_swipe_pane_t1

0x94ba,	// (0x00016d03) main_cmail_launcher_pane

0x8156,	// (0x0001599f) aid_size_cell_cmail_l_ParamLimits

0x8156,	// (0x0001599f) aid_size_cell_cmail_l

0x8170,	// (0x000159b9) grid_cmail_l_pane_ParamLimits

0x8170,	// (0x000159b9) grid_cmail_l_pane

0x818b,	// (0x000159d4) cell_cmail_l_pane_ParamLimits

0x818b,	// (0x000159d4) cell_cmail_l_pane

0x81b1,	// (0x000159fa) cell_cmail_l_pane_g1_ParamLimits

0x81b1,	// (0x000159fa) cell_cmail_l_pane_g1

0x81bd,	// (0x00015a06) cell_cmail_l_pane_t1_ParamLimits

0x81bd,	// (0x00015a06) cell_cmail_l_pane_t1

0xe356,	// (0x0001bb9f) cell_cmail_l_pane_t2_ParamLimits

0xe356,	// (0x0001bb9f) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d52b) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d52b) cell_cmail_l_pane_t

0x952a,	// (0x00016d73) grid_highlight_pane_cp018_ParamLimits

0x952a,	// (0x00016d73) grid_highlight_pane_cp018

0x0e49,	// (0x0000e692) main2_pane_ParamLimits

0x0e49,	// (0x0000e692) main2_pane

0x9d5c,	// (0x000175a5) popup_sp_fs_action_menu_bg_pane_g1

0x9d64,	// (0x000175ad) popup_sp_fs_action_menu_bg_pane_g2

0x9d6c,	// (0x000175b5) popup_sp_fs_action_menu_bg_pane_g3

0x9d74,	// (0x000175bd) popup_sp_fs_action_menu_bg_pane_g4

0x9d7c,	// (0x000175c5) popup_sp_fs_action_menu_bg_pane_g5

0x9d84,	// (0x000175cd) popup_sp_fs_action_menu_bg_pane_g6

0x9d8c,	// (0x000175d5) popup_sp_fs_action_menu_bg_pane_g7

0x9d94,	// (0x000175dd) popup_sp_fs_action_menu_bg_pane_g8

0x9d9c,	// (0x000175e5) popup_sp_fs_action_menu_bg_pane_g9

0x9da4,	// (0x000175ed) popup_sp_fs_action_menu_bg_pane_g10

0x9da4,	// (0x000175ed) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001c9f5) popup_sp_fs_action_menu_bg_pane_g

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g3_g1

0x9f80,	// (0x000177c9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_t3_g3_g2

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001caa5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001caa5) list_medium_line_x2_t3_g3_g

0x9f98,	// (0x000177e1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9f98,	// (0x000177e1) list_medium_line_x2_t3_g3_t1

0x1be1,	// (0x0000f42a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1be1,	// (0x0000f42a) list_medium_line_x2_t3_g3_t2

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001caac) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001caac) list_medium_line_x2_t3_g3_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g2_g1

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001cab3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001cab3) list_medium_line_x2_t3_g2_g

0x9fc2,	// (0x0001780b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9fc2,	// (0x0001780b) list_medium_line_x2_t3_g2_t1

0x9fd8,	// (0x00017821) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9fd8,	// (0x00017821) list_medium_line_x2_t3_g2_t2

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cab8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cab8) list_medium_line_x2_t3_g2_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t4_g4_g1

0x9fea,	// (0x00017833) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9fea,	// (0x00017833) list_medium_line_x2_t4_g4_g2

0x9f80,	// (0x000177c9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_t4_g4_g3

0x9ff6,	// (0x0001783f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9ff6,	// (0x0001783f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001cabf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001cabf) list_medium_line_x2_t4_g4_g

0x1bf5,	// (0x0000f43e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1bf5,	// (0x0000f43e) list_medium_line_x2_t4_g4_t1

0x1c0c,	// (0x0000f455) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1c0c,	// (0x0000f455) list_medium_line_x2_t4_g4_t2

0x1c21,	// (0x0000f46a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1c21,	// (0x0000f46a) list_medium_line_x2_t4_g4_t3

0xa002,	// (0x0001784b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa002,	// (0x0001784b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cac8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cac8) list_medium_line_x2_t4_g4_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g4_g1

0x9fea,	// (0x00017833) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9fea,	// (0x00017833) list_medium_line_x2_t2_g4_g2

0x9f80,	// (0x000177c9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_t2_g4_g3

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001cb2f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001cb2f) list_medium_line_x2_t2_g4_g

0xa2ea,	// (0x00017b33) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa2ea,	// (0x00017b33) list_medium_line_x2_t2_g4_t1

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001cb38) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001cb38) list_medium_line_x2_t2_g4_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g3_g1

0x9f80,	// (0x000177c9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_t2_g3_g2

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001caa5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001caa5) list_medium_line_x2_t2_g3_g

0xa2ff,	// (0x00017b48) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa2ff,	// (0x00017b48) list_medium_line_x2_t2_g3_t1

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001cb3d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001cb3d) list_medium_line_x2_t2_g3_t

0x29ef,	// (0x00010238) main_sp_fs_list_pane_ParamLimits

0x29ef,	// (0x00010238) main_sp_fs_list_pane

0x29fb,	// (0x00010244) sp_fs_scroll_pane_ParamLimits

0x29fb,	// (0x00010244) sp_fs_scroll_pane

0x2a07,	// (0x00010250) list_medium_line_x2_t3_t1

0x2a17,	// (0x00010260) list_medium_line_x2_t3_t2

0xa567,	// (0x00017db0) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001cb88) list_medium_line_x2_t3_t

0x2a25,	// (0x0001026e) list_medium_line_x3_t4_t1

0x2a35,	// (0x0001027e) list_medium_line_x3_t4_t2

0xa575,	// (0x00017dbe) list_medium_line_x3_t4_t3

0xa567,	// (0x00017db0) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cb8f) list_medium_line_x3_t4_t

0x2a43,	// (0x0001028c) list_medium_line_x4_t5_t1

0x2a53,	// (0x0001029c) list_medium_line_x4_t5_t2

0xa575,	// (0x00017dbe) list_medium_line_x4_t5_t3

0xa583,	// (0x00017dcc) list_medium_line_x4_t5_t4

0xa567,	// (0x00017db0) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cb98) list_medium_line_x4_t5_t

0x9f74,	// (0x000177bd) list_medium_line_t4_g4_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_t4_g4_g1

0x9ff6,	// (0x0001783f) list_medium_line_t4_g4_g2_ParamLimits

0x9ff6,	// (0x0001783f) list_medium_line_t4_g4_g2

0xa591,	// (0x00017dda) list_medium_line_t4_g4_g3_ParamLimits

0xa591,	// (0x00017dda) list_medium_line_t4_g4_g3

0x9f8c,	// (0x000177d5) list_medium_line_t4_g4_g4_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cba3) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cba3) list_medium_line_t4_g4_g

0xa59d,	// (0x00017de6) list_medium_line_t4_g4_t1_ParamLimits

0xa59d,	// (0x00017de6) list_medium_line_t4_g4_t1

0xa5b2,	// (0x00017dfb) list_medium_line_t4_g4_t2_ParamLimits

0xa5b2,	// (0x00017dfb) list_medium_line_t4_g4_t2

0xa5c7,	// (0x00017e10) list_medium_line_t4_g4_t3_ParamLimits

0xa5c7,	// (0x00017e10) list_medium_line_t4_g4_t3

0x9fad,	// (0x000177f6) list_medium_line_t4_g4_t4_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cbac) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cbac) list_medium_line_t4_g4_t

0x2b24,	// (0x0001036d) chi_dic_find_pane_g1

0x3c1a,	// (0x00011463) main_tport_pane

0xd438,	// (0x0001ac81) list_medium_line_plain_t1

0xd48a,	// (0x0001acd3) list_medium_line_t2_g2_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t2_g2_g1

0xd496,	// (0x0001acdf) list_medium_line_t2_g2_g2_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d268) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d268) list_medium_line_t2_g2_g

0x6bf6,	// (0x0001443f) list_medium_line_t2_g2_t1_ParamLimits

0x6bf6,	// (0x0001443f) list_medium_line_t2_g2_t1

0x6c10,	// (0x00014459) list_medium_line_t2_g2_t2_ParamLimits

0x6c10,	// (0x00014459) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d26d) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d26d) list_medium_line_t2_g2_t

0xd854,	// (0x0001b09d) aid_sp_fs_list_icon_a_sm

0xd85c,	// (0x0001b0a5) aid_sp_fs_list_icon_d

0xd864,	// (0x0001b0ad) aid_sp_fs_text_primary

0xd86d,	// (0x0001b0b6) aid_sp_fs_text_secondary

0xd876,	// (0x0001b0bf) list_medium_line

0xd876,	// (0x0001b0bf) list_medium_line_g2

0xd876,	// (0x0001b0bf) list_medium_line_g3

0xd876,	// (0x0001b0bf) list_medium_line_plain

0xd876,	// (0x0001b0bf) list_medium_line_plain_t2

0xd876,	// (0x0001b0bf) list_medium_line_plain_t3

0xd876,	// (0x0001b0bf) list_medium_line_right_icon

0xd876,	// (0x0001b0bf) list_medium_line_right_iconx2

0xd876,	// (0x0001b0bf) list_medium_line_t2

0xd876,	// (0x0001b0bf) list_medium_line_t2_g2

0xd876,	// (0x0001b0bf) list_medium_line_t2_g3

0xd876,	// (0x0001b0bf) list_medium_line_t2_right_icon

0xd876,	// (0x0001b0bf) list_medium_line_t2_right_iconx2

0xd876,	// (0x0001b0bf) list_medium_line_t3

0xd876,	// (0x0001b0bf) list_medium_line_t3_g2

0xd876,	// (0x0001b0bf) list_medium_line_t3_g3

0xd876,	// (0x0001b0bf) list_medium_line_t3_right_iconx2

0xd87f,	// (0x0001b0c8) list_medium_line_t4_g4

0xd888,	// (0x0001b0d1) list_medium_line_x2

0xd888,	// (0x0001b0d1) list_medium_line_x2_t2_g2

0xd888,	// (0x0001b0d1) list_medium_line_x2_t2_g3

0xd888,	// (0x0001b0d1) list_medium_line_x2_t2_g4

0xd888,	// (0x0001b0d1) list_medium_line_x2_t3

0xd888,	// (0x0001b0d1) list_medium_line_x2_t3_g2

0xd888,	// (0x0001b0d1) list_medium_line_x2_t3_g3

0xd888,	// (0x0001b0d1) list_medium_line_x2_t3_g4

0xd888,	// (0x0001b0d1) list_medium_line_x2_t4_g2

0xd888,	// (0x0001b0d1) list_medium_line_x2_t4_g4

0xd891,	// (0x0001b0da) list_medium_line_x3

0xd891,	// (0x0001b0da) list_medium_line_x3_t4

0xd891,	// (0x0001b0da) list_medium_line_x3_t4_g4

0xd87f,	// (0x0001b0c8) list_medium_line_x4_t4

0xd87f,	// (0x0001b0c8) list_medium_line_x4_t4_g7

0xd87f,	// (0x0001b0c8) list_medium_line_x4_t5

0xd89a,	// (0x0001b0e3) list_single_fs_dyc_pane_ParamLimits

0xd89a,	// (0x0001b0e3) list_single_fs_dyc_pane

0x9f74,	// (0x000177bd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x4_t4_g7_g1

0xddb2,	// (0x0001b5fb) list_medium_line_x4_t4_g7_g2_ParamLimits

0xddb2,	// (0x0001b5fb) list_medium_line_x4_t4_g7_g2

0xddbe,	// (0x0001b607) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddbe,	// (0x0001b607) list_medium_line_x4_t4_g7_g3

0xddcd,	// (0x0001b616) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddcd,	// (0x0001b616) list_medium_line_x4_t4_g7_g4

0xddd9,	// (0x0001b622) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddd9,	// (0x0001b622) list_medium_line_x4_t4_g7_g5

0xdde8,	// (0x0001b631) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdde8,	// (0x0001b631) list_medium_line_x4_t4_g7_g6

0xddf7,	// (0x0001b640) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddf7,	// (0x0001b640) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d438) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d438) list_medium_line_x4_t4_g7_g

0xde03,	// (0x0001b64c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde03,	// (0x0001b64c) list_medium_line_x4_t4_g7_t1

0xde18,	// (0x0001b661) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde18,	// (0x0001b661) list_medium_line_x4_t4_g7_t2

0xde2d,	// (0x0001b676) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde2d,	// (0x0001b676) list_medium_line_x4_t4_g7_t3

0xde42,	// (0x0001b68b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde42,	// (0x0001b68b) list_medium_line_x4_t4_g7_t4

0xde54,	// (0x0001b69d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde54,	// (0x0001b69d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d447) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d447) list_medium_line_x4_t4_g7_t

0xde66,	// (0x0001b6af) list_single_dyc_row_pane_ParamLimits

0xde66,	// (0x0001b6af) list_single_dyc_row_pane

0x80d7,	// (0x00015920) call5_gesture_pane_ParamLimits

0x80d7,	// (0x00015920) call5_gesture_pane

0x812d,	// (0x00015976) call5_windows_pane_ParamLimits

0x812d,	// (0x00015976) call5_windows_pane

0x81d3,	// (0x00015a1c) call5_swipe_1_pane_cp_ParamLimits

0x81d3,	// (0x00015a1c) call5_swipe_1_pane_cp

0x81df,	// (0x00015a28) call5_swipe_2_pane_cp_ParamLimits

0x81df,	// (0x00015a28) call5_swipe_2_pane_cp

0xaa32,	// (0x0001827b) call5_image_pane_cp

0x81eb,	// (0x00015a34) popup_call5_audio_first_window_cp_ParamLimits

0x81eb,	// (0x00015a34) popup_call5_audio_first_window_cp

0xe328,	// (0x0001bb71) call5_swipe_1_pane_g1_cp_ParamLimits

0xe328,	// (0x0001bb71) call5_swipe_1_pane_g1_cp

0xe368,	// (0x0001bbb1) call5_swipe_1_pane_g2_cp

0xe341,	// (0x0001bb8a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe341,	// (0x0001bb8a) call5_swipe_1_pane_t1_cp

0xe328,	// (0x0001bb71) call5_swipe_2_pane_g1_cp_ParamLimits

0xe328,	// (0x0001bb71) call5_swipe_2_pane_g1_cp

0xe370,	// (0x0001bbb9) call5_swipe_2_pane_g2_cp

0xe378,	// (0x0001bbc1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe378,	// (0x0001bbc1) call5_swipe_2_pane_t1_cp

0x952a,	// (0x00016d73) main_sp_fs_email_pane

0xe38d,	// (0x0001bbd6) main_sp_fs_listscroll_pane_te

0xe396,	// (0x0001bbdf) popup_sp_fs_action_menu_pane_ParamLimits

0xe396,	// (0x0001bbdf) popup_sp_fs_action_menu_pane

0xc3f5,	// (0x00019c3e) bg_sp_fs_ctrlbar_pane_g1

0xe3da,	// (0x0001bc23) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3e3,	// (0x0001bc2c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3ec,	// (0x0001bc35) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3f5,	// (0x00019c3e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d530) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1da,	// (0x00019a23) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1da,	// (0x00019a23) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3f5,	// (0x0001bc3e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3f5,	// (0x0001bc3e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe401,	// (0x0001bc4a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe401,	// (0x0001bc4a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d539) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d539) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe40d,	// (0x0001bc56) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe40d,	// (0x0001bc56) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe427,	// (0x0001bc70) list_medium_line_t2_right_icon_g1

0x81f9,	// (0x00015a42) list_medium_line_t2_right_icon_t1

0x8209,	// (0x00015a52) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d53e) list_medium_line_t2_right_icon_t

0xbeef,	// (0x00019738) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbeef,	// (0x00019738) bg_sp_fs_ctrlbar_pane

0x8263,	// (0x00015aac) main_sp_fs_ctrlbar_button_pane_cp01

0x826d,	// (0x00015ab6) main_sp_fs_ctrlbar_ddmenu_pane

0xe467,	// (0x0001bcb0) main_sp_fs_ctrlbar_pane_g1

0xe473,	// (0x0001bcbc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d543) main_sp_fs_ctrlbar_pane_g

0xe47f,	// (0x0001bcc8) main_sp_fs_ctrlbar_pane_t1

0x8277,	// (0x00015ac0) main_sp_fs_ctrlbar_pane

0x829b,	// (0x00015ae4) main_sp_fs_listscroll_pane_te_cp01

0x82bb,	// (0x00015b04) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x82bb,	// (0x00015b04) popup_sp_fs_action_menu_pane_cp01

0x952a,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x952a,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp01

0xe494,	// (0x0001bcdd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe494,	// (0x0001bcdd) sp_fs_action_menu_list_gene_pane_g1

0xe4a3,	// (0x0001bcec) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4a3,	// (0x0001bcec) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d548) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d548) sp_fs_action_menu_list_gene_pane_g

0xe4b0,	// (0x0001bcf9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4b0,	// (0x0001bcf9) sp_fs_action_menu_list_gene_pane_t1

0xe4c8,	// (0x0001bd11) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4c8,	// (0x0001bd11) sp_fs_action_menu_list_gene_pane

0xe4e9,	// (0x0001bd32) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4e9,	// (0x0001bd32) popup_sp_fs_action_menu_bg_pane

0xe4f7,	// (0x0001bd40) sp_fs_action_menu_list_pane_ParamLimits

0xe4f7,	// (0x0001bd40) sp_fs_action_menu_list_pane

0xe519,	// (0x0001bd62) sp_fs_scroll_pane_cp01_ParamLimits

0xe519,	// (0x0001bd62) sp_fs_scroll_pane_cp01

0x82d5,	// (0x00015b1e) list_medium_line_plain_t2_t1

0x82e5,	// (0x00015b2e) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d54d) list_medium_line_plain_t2_t

0x82f5,	// (0x00015b3e) list_medium_line_plain_t3_t1

0x8305,	// (0x00015b4e) list_medium_line_plain_t3_t2

0x8313,	// (0x00015b5c) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d552) list_medium_line_plain_t3_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t2_g2_g1

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001cab3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001cab3) list_medium_line_x2_t2_g2_g

0xa59d,	// (0x00017de6) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa59d,	// (0x00017de6) list_medium_line_x2_t2_g2_t1

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d559) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d559) list_medium_line_x2_t2_g2_t

0x9f74,	// (0x000177bd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t4_g2_g1

0x9f8c,	// (0x000177d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001cab3) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001cab3) list_medium_line_x2_t4_g2_g

0x8321,	// (0x00015b6a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8321,	// (0x00015b6a) list_medium_line_x2_t4_g2_t1

0x833b,	// (0x00015b84) list_medium_line_x2_t4_g2_t2_ParamLimits

0x833b,	// (0x00015b84) list_medium_line_x2_t4_g2_t2

0x8350,	// (0x00015b99) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8350,	// (0x00015b99) list_medium_line_x2_t4_g2_t3

0x9fad,	// (0x000177f6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d55e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d55e) list_medium_line_x2_t4_g2_t

0xe53f,	// (0x0001bd88) list_medium_line_t3_right_iconx2_g1

0xe427,	// (0x0001bc70) list_medium_line_t3_right_iconx2_g2

0x8365,	// (0x00015bae) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d567) list_medium_line_t3_right_iconx2_g

0x836f,	// (0x00015bb8) list_medium_line_t3_right_iconx2_t1

0x837f,	// (0x00015bc8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d56e) list_medium_line_t3_right_iconx2_t

0x9f74,	// (0x000177bd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x3_t4_g4_g1

0x9f80,	// (0x000177c9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x3_t4_g4_g2

0x9ff6,	// (0x0001783f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9ff6,	// (0x0001783f) list_medium_line_x3_t4_g4_g3

0xe547,	// (0x0001bd90) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe547,	// (0x0001bd90) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d573) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d573) list_medium_line_x3_t4_g4_g

0x838d,	// (0x00015bd6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x838d,	// (0x00015bd6) list_medium_line_x3_t4_g4_t1

0x83a4,	// (0x00015bed) list_medium_line_x3_t4_g4_t2_ParamLimits

0x83a4,	// (0x00015bed) list_medium_line_x3_t4_g4_t2

0xa5b2,	// (0x00017dfb) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa5b2,	// (0x00017dfb) list_medium_line_x3_t4_g4_t3

0xe553,	// (0x0001bd9c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe553,	// (0x0001bd9c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d57c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d57c) list_medium_line_x3_t4_g4_t

0x83bf,	// (0x00015c08) list_single_dyc_row_text_pane_t1_ParamLimits

0x83bf,	// (0x00015c08) list_single_dyc_row_text_pane_t1

0x8408,	// (0x00015c51) list_single_dyc_row_text_pane_t2_ParamLimits

0x8408,	// (0x00015c51) list_single_dyc_row_text_pane_t2

0xe570,	// (0x0001bdb9) list_single_dyc_row_text_pane_t3_ParamLimits

0xe570,	// (0x0001bdb9) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d585) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d585) list_single_dyc_row_text_pane_t

0xe582,	// (0x0001bdcb) list_single_dyc_row_pane_g1_ParamLimits

0xe582,	// (0x0001bdcb) list_single_dyc_row_pane_g1

0xe58e,	// (0x0001bdd7) list_single_dyc_row_pane_g2_ParamLimits

0xe58e,	// (0x0001bdd7) list_single_dyc_row_pane_g2

0xe59a,	// (0x0001bde3) list_single_dyc_row_pane_g3_ParamLimits

0xe59a,	// (0x0001bde3) list_single_dyc_row_pane_g3

0xe5a6,	// (0x0001bdef) list_single_dyc_row_pane_g4_ParamLimits

0xe5a6,	// (0x0001bdef) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d58c) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d58c) list_single_dyc_row_pane_g

0xe5b2,	// (0x0001bdfb) list_single_dyc_row_text_pane_ParamLimits

0xe5b2,	// (0x0001bdfb) list_single_dyc_row_text_pane

0x94ba,	// (0x00016d03) bg_sp_fs_scroll_pane

0xe5d1,	// (0x0001be1a) thumb_sp_fs_scroll_pane

0xd48a,	// (0x0001acd3) list_medium_line_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_g1

0xe5da,	// (0x0001be23) list_medium_line_t1_ParamLimits

0xe5da,	// (0x0001be23) list_medium_line_t1

0x9f74,	// (0x000177bd) list_medium_line_x2_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_g1

0x9f80,	// (0x000177c9) list_medium_line_x2_g2_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d595) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d595) list_medium_line_x2_g

0xe5ef,	// (0x0001be38) list_medium_line_x2_t1_ParamLimits

0xe5ef,	// (0x0001be38) list_medium_line_x2_t1

0x9f74,	// (0x000177bd) list_medium_line_x3_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x3_g1

0x9f80,	// (0x000177c9) list_medium_line_x3_g2_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d595) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d595) list_medium_line_x3_g

0xe5ef,	// (0x0001be38) list_medium_line_x3_t1_ParamLimits

0xe5ef,	// (0x0001be38) list_medium_line_x3_t1

0xe605,	// (0x0001be4e) thumb_sp_fs_scroll_pane_g1

0xe60e,	// (0x0001be57) thumb_sp_fs_scroll_pane_g2

0xe617,	// (0x0001be60) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d59a) thumb_sp_fs_scroll_pane_g

0xe605,	// (0x0001be4e) bg_sp_fs_scroll_pane_g1

0xe60e,	// (0x0001be57) bg_sp_fs_scroll_pane_g2

0xe617,	// (0x0001be60) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d59a) bg_sp_fs_scroll_pane_g

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f74,	// (0x000177bd) list_medium_line_x2_t3_g4_g1

0x9fea,	// (0x00017833) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9fea,	// (0x00017833) list_medium_line_x2_t3_g4_g2

0x9f80,	// (0x000177c9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f80,	// (0x000177c9) list_medium_line_x2_t3_g4_g3

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f8c,	// (0x000177d5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001cb2f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001cb2f) list_medium_line_x2_t3_g4_g

0x8462,	// (0x00015cab) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8462,	// (0x00015cab) list_medium_line_x2_t3_g4_t1

0x847c,	// (0x00015cc5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x847c,	// (0x00015cc5) list_medium_line_x2_t3_g4_t2

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9fad,	// (0x000177f6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d5a1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d5a1) list_medium_line_x2_t3_g4_t

0xd48a,	// (0x0001acd3) list_medium_line_g2_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_g2_g1

0xd496,	// (0x0001acdf) list_medium_line_g2_g2_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d268) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d268) list_medium_line_g2_g

0xe620,	// (0x0001be69) list_medium_line_g2_t1_ParamLimits

0xe620,	// (0x0001be69) list_medium_line_g2_t1

0xd48a,	// (0x0001acd3) list_medium_line_t3_g2_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t3_g2_g1

0xd496,	// (0x0001acdf) list_medium_line_t3_g2_g2_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d268) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d268) list_medium_line_t3_g2_g

0x8496,	// (0x00015cdf) list_medium_line_t3_g2_t1_ParamLimits

0x8496,	// (0x00015cdf) list_medium_line_t3_g2_t1

0x84b0,	// (0x00015cf9) list_medium_line_t3_g2_t2_ParamLimits

0x84b0,	// (0x00015cf9) list_medium_line_t3_g2_t2

0x84c5,	// (0x00015d0e) list_medium_line_t3_g2_t3_ParamLimits

0x84c5,	// (0x00015d0e) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d5a8) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d5a8) list_medium_line_t3_g2_t

0xe427,	// (0x0001bc70) list_medium_line_right_icon_g1

0xe635,	// (0x0001be7e) list_medium_line_right_icon_t1

0xd48a,	// (0x0001acd3) list_medium_line_t2_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t2_g1

0x84df,	// (0x00015d28) list_medium_line_t2_t1_ParamLimits

0x84df,	// (0x00015d28) list_medium_line_t2_t1

0x84f9,	// (0x00015d42) list_medium_line_t2_t2_ParamLimits

0x84f9,	// (0x00015d42) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d5af) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d5af) list_medium_line_t2_t

0xd48a,	// (0x0001acd3) list_medium_line_t3_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t3_g1

0x8512,	// (0x00015d5b) list_medium_line_t3_t1_ParamLimits

0x8512,	// (0x00015d5b) list_medium_line_t3_t1

0x8529,	// (0x00015d72) list_medium_line_t3_t2_ParamLimits

0x8529,	// (0x00015d72) list_medium_line_t3_t2

0x853e,	// (0x00015d87) list_medium_line_t3_t3_ParamLimits

0x853e,	// (0x00015d87) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d5b4) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d5b4) list_medium_line_t3_t

0xd48a,	// (0x0001acd3) list_medium_line_g3_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_g3_g1

0xe643,	// (0x0001be8c) list_medium_line_g3_g2_ParamLimits

0xe643,	// (0x0001be8c) list_medium_line_g3_g2

0xd496,	// (0x0001acdf) list_medium_line_g3_g3_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d5bb) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d5bb) list_medium_line_g3_g

0xe64f,	// (0x0001be98) list_medium_line_g3_t1_ParamLimits

0xe64f,	// (0x0001be98) list_medium_line_g3_t1

0xd48a,	// (0x0001acd3) list_medium_line_t2_g3_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t2_g3_g1

0xe643,	// (0x0001be8c) list_medium_line_t2_g3_g2_ParamLimits

0xe643,	// (0x0001be8c) list_medium_line_t2_g3_g2

0xd496,	// (0x0001acdf) list_medium_line_t2_g3_g3_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d5bb) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d5bb) list_medium_line_t2_g3_g

0x8550,	// (0x00015d99) list_medium_line_t2_g3_t1_ParamLimits

0x8550,	// (0x00015d99) list_medium_line_t2_g3_t1

0x856a,	// (0x00015db3) list_medium_line_t2_g3_t2_ParamLimits

0x856a,	// (0x00015db3) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d5c2) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d5c2) list_medium_line_t2_g3_t

0xd48a,	// (0x0001acd3) list_medium_line_t3_g3_g1_ParamLimits

0xd48a,	// (0x0001acd3) list_medium_line_t3_g3_g1

0xe643,	// (0x0001be8c) list_medium_line_t3_g3_g2_ParamLimits

0xe643,	// (0x0001be8c) list_medium_line_t3_g3_g2

0xd496,	// (0x0001acdf) list_medium_line_t3_g3_g3_ParamLimits

0xd496,	// (0x0001acdf) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d5bb) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d5bb) list_medium_line_t3_g3_g

0x8585,	// (0x00015dce) list_medium_line_t3_g3_t1_ParamLimits

0x8585,	// (0x00015dce) list_medium_line_t3_g3_t1

0x859e,	// (0x00015de7) list_medium_line_t3_g3_t2_ParamLimits

0x859e,	// (0x00015de7) list_medium_line_t3_g3_t2

0x85b4,	// (0x00015dfd) list_medium_line_t3_g3_t3_ParamLimits

0x85b4,	// (0x00015dfd) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d5c7) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d5c7) list_medium_line_t3_g3_t

0xe53f,	// (0x0001bd88) list_medium_line_right_iconx2_g1

0xe427,	// (0x0001bc70) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d5ce) list_medium_line_right_iconx2_g

0xe664,	// (0x0001bead) list_medium_line_right_iconx2_t1

0xe53f,	// (0x0001bd88) list_medium_line_t2_right_iconx2_g1

0xe427,	// (0x0001bc70) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d5ce) list_medium_line_t2_right_iconx2_g

0x85ce,	// (0x00015e17) list_medium_line_t2_right_iconx2_t1

0x85de,	// (0x00015e27) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001d5d3) list_medium_line_t2_right_iconx2_t

0xe672,	// (0x0001bebb) list_medium_line_x4_t4_t1

0x85f0,	// (0x00015e39) list_medium_line_x4_t4_t2

0x8600,	// (0x00015e49) list_medium_line_x4_t4_t3

0x8610,	// (0x00015e59) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001d5d8) list_medium_line_x4_t4_t

0x8663,	// (0x00015eac) tport_appsw_pane_ParamLimits

0x8663,	// (0x00015eac) tport_appsw_pane

0x8674,	// (0x00015ebd) tport_contact_pane_ParamLimits

0x8674,	// (0x00015ebd) tport_contact_pane

0x868d,	// (0x00015ed6) tport_listscroll_pane_ParamLimits

0x868d,	// (0x00015ed6) tport_listscroll_pane

0x86a8,	// (0x00015ef1) cell_tport_appsw_pane_ParamLimits

0x86a8,	// (0x00015ef1) cell_tport_appsw_pane

0xd149,	// (0x0001a992) tport_appsw_pane_g1_ParamLimits

0xd149,	// (0x0001a992) tport_appsw_pane_g1

0xe680,	// (0x0001bec9) tport_contact_pane_g1

0xdf57,	// (0x0001b7a0) tport_contact_pane_t1

0xe689,	// (0x0001bed2) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001d5e1) tport_contact_pane_t

0xe697,	// (0x0001bee0) list_tport_pane

0xe6a0,	// (0x0001bee9) scroll_pane_cp_030

0xe6b1,	// (0x0001befa) cell_tport_appsw_pane_g1

0xe6c1,	// (0x0001bf0a) cell_tport_appsw_pane_t1

0x94ba,	// (0x00016d03) grid_highlight_pane_cp019

0x86e8,	// (0x00015f31) list_tport_double_graphic_pane_ParamLimits

0x86e8,	// (0x00015f31) list_tport_double_graphic_pane

0x952a,	// (0x00016d73) list_highlight_pane_cp023_ParamLimits

0x952a,	// (0x00016d73) list_highlight_pane_cp023

0x86f5,	// (0x00015f3e) list_tport_double_graphic_pane_g1_ParamLimits

0x86f5,	// (0x00015f3e) list_tport_double_graphic_pane_g1

0x8702,	// (0x00015f4b) list_tport_double_graphic_pane_t1_ParamLimits

0x8702,	// (0x00015f4b) list_tport_double_graphic_pane_t1

0x8717,	// (0x00015f60) list_tport_double_graphic_pane_t2_ParamLimits

0x8717,	// (0x00015f60) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001d5ed) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001d5ed) list_tport_double_graphic_pane_t

0x94ba,	// (0x00016d03) main_cale_note_pane

0x62f4,	// (0x00013b3d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x62f4,	// (0x00013b3d) cell_vitu2_function_top_wide_pane_cp01

0x7c76,	// (0x000154bf) wait_bar_pane_cp05_ParamLimits

0x94ba,	// (0x00016d03) listscroll_cmail_pane

0xe6d7,	// (0x0001bf20) list_cmail_pane

0xd407,	// (0x0001ac50) list_cmail_body_pane

0x8733,	// (0x00015f7c) list_single_cmail_header_caption_pane

0x8749,	// (0x00015f92) list_single_cmail_header_detail_pane_ParamLimits

0x8749,	// (0x00015f92) list_single_cmail_header_detail_pane

0x8772,	// (0x00015fbb) list_single_cmail_header_caption_pane_t1

0x8782,	// (0x00015fcb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8782,	// (0x00015fcb) list_single_cmail_header_detail_pane_g1

0xe6f8,	// (0x0001bf41) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6f8,	// (0x0001bf41) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001d5f2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001d5f2) list_single_cmail_header_detail_pane_g

0xe711,	// (0x0001bf5a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe711,	// (0x0001bf5a) list_single_cmail_header_detail_pane_t1

0xe747,	// (0x0001bf90) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe747,	// (0x0001bf90) list_single_cmail_header_editor_pane_bg

0xe106,	// (0x0001b94f) list_cmail_body_pane_g1

0xe759,	// (0x0001bfa2) list_cmail_body_pane_t1

0xd1b5,	// (0x0001a9fe) list_single_cmail_header_editor_pane_bg_g1

0xa209,	// (0x00017a52) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1c5,	// (0x0001aa0e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1bd,	// (0x0001aa06) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd462,	// (0x0001acab) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1e5,	// (0x0001aa2e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1d5,	// (0x0001aa1e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1dd,	// (0x0001aa26) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa1e9,	// (0x00017a32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x87c0,	// (0x00016009) calenote_gesture_pane_ParamLimits

0x87c0,	// (0x00016009) calenote_gesture_pane

0x87e0,	// (0x00016029) calenote_window_pane_ParamLimits

0x87e0,	// (0x00016029) calenote_window_pane

0xe767,	// (0x0001bfb0) popup_note_window_cp01

0x87fc,	// (0x00016045) calenote_swipe_1_pane_ParamLimits

0x87fc,	// (0x00016045) calenote_swipe_1_pane

0x81df,	// (0x00015a28) calenote_swipe_2_pane_ParamLimits

0x81df,	// (0x00015a28) calenote_swipe_2_pane

0xe328,	// (0x0001bb71) calenote_swipe_1_pane_g1_ParamLimits

0xe328,	// (0x0001bb71) calenote_swipe_1_pane_g1

0xe335,	// (0x0001bb7e) calenote_swipe_1_pane_g2_ParamLimits

0xe335,	// (0x0001bb7e) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d526) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d526) calenote_swipe_1_pane_g

0xe779,	// (0x0001bfc2) calenote_swipe_1_pane_t1_ParamLimits

0xe779,	// (0x0001bfc2) calenote_swipe_1_pane_t1

0xe328,	// (0x0001bb71) calenote_swipe_2_pane_g1_ParamLimits

0xe328,	// (0x0001bb71) calenote_swipe_2_pane_g1

0xe798,	// (0x0001bfe1) calenote_swipe_2_pane_g2_ParamLimits

0xe798,	// (0x0001bfe1) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001d5fe) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001d5fe) calenote_swipe_2_pane_g

0xe7a4,	// (0x0001bfed) calenote_swipe_2_pane_t1_ParamLimits

0xe7a4,	// (0x0001bfed) calenote_swipe_2_pane_t1

0x94ba,	// (0x00016d03) main_mup_navstr_pane

0x4fd9,	// (0x00012822) main_mup3_pane_t7_ParamLimits

0x4fd9,	// (0x00012822) main_mup3_pane_t7

0xcd64,	// (0x0001a5ad) main_mp4_pane_g6_ParamLimits

0xcd64,	// (0x0001a5ad) main_mp4_pane_g6

0xcf8c,	// (0x0001a7d5) main_image3_pane_t4_ParamLimits

0xcf8c,	// (0x0001a7d5) main_image3_pane_t4

0x8811,	// (0x0001605a) popup_navstr_preview_pane_ParamLimits

0x8811,	// (0x0001605a) popup_navstr_preview_pane

0x8825,	// (0x0001606e) scroll_navstr_pane_ParamLimits

0x8825,	// (0x0001606e) scroll_navstr_pane

0x94ba,	// (0x00016d03) bg_popup_preview_window_pane_cp04

0xe7cb,	// (0x0001c014) popup_navstr_preview_pane_t1

0x8839,	// (0x00016082) scroll_navstr_pane_g1_ParamLimits

0x8839,	// (0x00016082) scroll_navstr_pane_g1

0x884d,	// (0x00016096) scroll_navstr_pane_t1_ParamLimits

0x884d,	// (0x00016096) scroll_navstr_pane_t1

0xe770,	// (0x0001bfb9) bg_button_pane_cp014

0xe770,	// (0x0001bfb9) bg_button_pane_cp030

0x807d,	// (0x000158c6) list_double_fisheye_pane_g4_ParamLimits

0x807d,	// (0x000158c6) list_double_fisheye_pane_g4

0x8089,	// (0x000158d2) list_double_fisheye_pane_g5_ParamLimits

0x8089,	// (0x000158d2) list_double_fisheye_pane_g5

0xe6df,	// (0x0001bf28) sp_fs_scroll_pane_cp03

0xe467,	// (0x0001bcb0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe473,	// (0x0001bcbc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d543) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe47f,	// (0x0001bcc8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8729,	// (0x00015f72) sp_fs_scroll_pane_cp02

0x9e0f,	// (0x00017658) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e0f,	// (0x00017658) popup_sp_fs_calendar_preview_list_single_pane

0x94ba,	// (0x00016d03) main_cam6_pano_pane

0x952a,	// (0x00016d73) main_mup3_pane_ParamLimits

0x94ba,	// (0x00016d03) main_phacti_pane

0x7b49,	// (0x00015392) bg_button_pane_cp11

0x7b63,	// (0x000153ac) main_mobtv_info_pane_g2_ParamLimits

0x7b63,	// (0x000153ac) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d4a3) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d4a3) main_mobtv_info_pane_g

0x7d40,	// (0x00015589) sc_clock_pane_t5_ParamLimits

0x7d40,	// (0x00015589) sc_clock_pane_t5

0x7ee8,	// (0x00015731) main_radioblah_pane_g1_ParamLimits

0xe274,	// (0x0001babd) main_radioblah_pane_t3_ParamLimits

0xe274,	// (0x0001babd) main_radioblah_pane_t3

0xe28c,	// (0x0001bad5) main_radioblah_pane_t4_ParamLimits

0xe28c,	// (0x0001bad5) main_radioblah_pane_t4

0x7f10,	// (0x00015759) main_radioblah_text_pane_ParamLimits

0x7f10,	// (0x00015759) main_radioblah_text_pane

0x7f22,	// (0x0001576b) main_radioblah_info_pane_g1_ParamLimits

0x7fbb,	// (0x00015804) main_radioblah_info_pane_t4_ParamLimits

0x7fbb,	// (0x00015804) main_radioblah_info_pane_t4

0x952a,	// (0x00016d73) main_sp_fs_calendar_pane

0x8864,	// (0x000160ad) main_phacti_pane_g1

0x886c,	// (0x000160b5) phacti_note_pane_ParamLimits

0x886c,	// (0x000160b5) phacti_note_pane

0xe7e2,	// (0x0001c02b) phacti_term_pane_ParamLimits

0xe7e2,	// (0x0001c02b) phacti_term_pane

0xe7f7,	// (0x0001c040) phacti_note_pane_t1_ParamLimits

0xe7f7,	// (0x0001c040) phacti_note_pane_t1

0xe80e,	// (0x0001c057) phacti_term_pane_g1

0xe816,	// (0x0001c05f) phacti_term_pane_t1_ParamLimits

0xe816,	// (0x0001c05f) phacti_term_pane_t1

0xe840,	// (0x0001c089) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9f6c,	// (0x000177b5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001d608) popup_sp_fs_calendar_preview_list_single_pane_g

0xe848,	// (0x0001c091) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe848,	// (0x0001c091) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe85d,	// (0x0001c0a6) aid_popup_sp_fs_bg_corner_pane

0xc3f5,	// (0x00019c3e) popup_sp_fs_calendar_preview_bg_pane_g1

0x94ba,	// (0x00016d03) popup_sp_fs_calendar_preview_bg_pane

0xe865,	// (0x0001c0ae) popup_sp_fs_calendar_preview_list_pane

0x952a,	// (0x00016d73) bg_main_sp_fs_cale_pane_ParamLimits

0x952a,	// (0x00016d73) bg_main_sp_fs_cale_pane

0xe876,	// (0x0001c0bf) listscroll_cale_mrui_pane_ParamLimits

0xe876,	// (0x0001c0bf) listscroll_cale_mrui_pane

0xe88a,	// (0x0001c0d3) listscroll_sp_fs_schedule_track_pane

0xe893,	// (0x0001c0dc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe893,	// (0x0001c0dc) main_sp_fs_ctrlbar_pane_cp01

0xe8a4,	// (0x0001c0ed) main_sp_fs_ribbon_pane

0xe8ac,	// (0x0001c0f5) popup_sp_fs_cale_preview_window

0x88c3,	// (0x0001610c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x88c3,	// (0x0001610c) list_single_sp_fs_schedule_track_pane

0x952a,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x952a,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp03

0x88d5,	// (0x0001611e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x88d5,	// (0x0001611e) list_single_sp_fs_schedule_track_pane_g1

0x88e1,	// (0x0001612a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x88e1,	// (0x0001612a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001d60d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001d60d) list_single_sp_fs_schedule_track_pane_g

0x88ed,	// (0x00016136) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x88ed,	// (0x00016136) list_single_sp_fs_schedule_track_pane_t1

0x8907,	// (0x00016150) sp_fs_schedule_track_pane_ParamLimits

0x8907,	// (0x00016150) sp_fs_schedule_track_pane

0xe8be,	// (0x0001c107) sp_fs_schedule_track_pane_g1

0xe8c6,	// (0x0001c10f) sp_fs_schedule_track_pane_g2

0xe8ce,	// (0x0001c117) sp_fs_schedule_track_pane_g3

0xe8d6,	// (0x0001c11f) sp_fs_schedule_track_pane_g4

0xe8de,	// (0x0001c127) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001d612) sp_fs_schedule_track_pane_g

0xd1b5,	// (0x0001a9fe) bg_sp_fs_schedule_viewer_highlight_g1

0xa209,	// (0x00017a52) bg_sp_fs_schedule_viewer_highlight_g2

0xd1bd,	// (0x0001aa06) bg_sp_fs_schedule_viewer_highlight_g3

0xd1c5,	// (0x0001aa0e) bg_sp_fs_schedule_viewer_highlight_g4

0xd462,	// (0x0001acab) bg_sp_fs_schedule_viewer_highlight_g5

0xd1d5,	// (0x0001aa1e) bg_sp_fs_schedule_viewer_highlight_g6

0xd1dd,	// (0x0001aa26) bg_sp_fs_schedule_viewer_highlight_g7

0xd1e5,	// (0x0001aa2e) bg_sp_fs_schedule_viewer_highlight_g8

0xa1e9,	// (0x00017a32) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001d61d) bg_sp_fs_schedule_viewer_highlight_g

0x94ba,	// (0x00016d03) bg_main_sp_fs_ribbon_pane

0x8918,	// (0x00016161) main_sp_fs_ribbon_pane_g1

0xe8e6,	// (0x0001c12f) main_sp_fs_ribbon_pane_t1

0x8921,	// (0x0001616a) main_sp_fs_ribbon_pane_t2

0xe8f5,	// (0x0001c13e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001d630) main_sp_fs_ribbon_pane_t

0xe904,	// (0x0001c14d) main_sp_fs_ribbon_scheduler_pane

0xe90c,	// (0x0001c155) bg_main_sp_fs_ribbon_pane_g1

0xe915,	// (0x0001c15e) bg_main_sp_fs_ribbon_pane_g2

0xe91e,	// (0x0001c167) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001d637) bg_main_sp_fs_ribbon_pane_g

0xe926,	// (0x0001c16f) main_sp_fs_ribbon_scheduler_pane_g1

0xe92f,	// (0x0001c178) main_sp_fs_ribbon_scheduler_pane_g2

0xe938,	// (0x0001c181) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001d63e) main_sp_fs_ribbon_scheduler_pane_g

0xe941,	// (0x0001c18a) list_cale_mrui_pane

0x8930,	// (0x00016179) sp_fs_scroll_pane_cp07_ParamLimits

0x8930,	// (0x00016179) sp_fs_scroll_pane_cp07

0x8944,	// (0x0001618d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8944,	// (0x0001618d) bg_sp_fs_schedule_viewer_highlight

0xe94a,	// (0x0001c193) list_single_sp_fs_schedule_track_pane_cp01

0xe952,	// (0x0001c19b) list_sp_fs_schedule_track_pane

0xe95a,	// (0x0001c1a3) sp_fs_scroll_pane_cp06_ParamLimits

0xe95a,	// (0x0001c1a3) sp_fs_scroll_pane_cp06

0xc3f5,	// (0x00019c3e) bgmain_sp_fs_calendar_pane_g1

0x8954,	// (0x0001619d) list_single_cale_mrui_pane_ParamLimits

0x8954,	// (0x0001619d) list_single_cale_mrui_pane

0xe96c,	// (0x0001c1b5) list_single_cale_mrui_row_pane_ParamLimits

0xe96c,	// (0x0001c1b5) list_single_cale_mrui_row_pane

0xe979,	// (0x0001c1c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe979,	// (0x0001c1c2) list_single_cale_mrui_row_pane_g1

0xe9b1,	// (0x0001c1fa) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9b1,	// (0x0001c1fa) list_single_cale_mrui_row_pane_t1

0x8974,	// (0x000161bd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8974,	// (0x000161bd) list_single_cale_mrui_row_pane_t2

0xe9c3,	// (0x0001c20c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9c3,	// (0x0001c20c) list_single_cale_mrui_row_pane_t3

0xe9f2,	// (0x0001c23b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9f2,	// (0x0001c23b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001d64a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001d64a) list_single_cale_mrui_row_pane_t

0x89dc,	// (0x00016225) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x89dc,	// (0x00016225) list_single_cmail_header_editor_pane_bg_cp01

0x8a02,	// (0x0001624b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8a02,	// (0x0001624b) list_single_cmail_header_editor_pane_bg_cp02

0x8a22,	// (0x0001626b) main_radioblah_text_pane_t1_ParamLimits

0x8a22,	// (0x0001626b) main_radioblah_text_pane_t1

0xea21,	// (0x0001c26a) cam6_indi_pane_cp01

0xea29,	// (0x0001c272) cam6_mode_pane_cp01

0xea31,	// (0x0001c27a) cam6_pano_pane

0xea3a,	// (0x0001c283) cam6_zoom_pane_cp01

0xea42,	// (0x0001c28b) cam6_pano_image_pane

0xea4d,	// (0x0001c296) cam6_pano_pane_g1

0xe106,	// (0x0001b94f) cam6_pano_pane_g2

0xea56,	// (0x0001c29f) cam6_pano_pane_g3

0xea5f,	// (0x0001c2a8) cam6_pano_pane_g4

0xc99d,	// (0x0001a1e6) cam6_pano_pane_g5

0xea68,	// (0x0001c2b1) cam6_pano_pane_g6

0xe213,	// (0x0001ba5c) cam6_pano_pane_g7

0xea72,	// (0x0001c2bb) cam6_pano_pane_g8

0xea7b,	// (0x0001c2c4) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001d653) cam6_pano_pane_g

0x94ba,	// (0x00016d03) main_browser_tag_pane

0xe7c3,	// (0x0001c00c) grid_navstr_albumart_pane

0xea86,	// (0x0001c2cf) cell_navstr_albumart_pane_ParamLimits

0xea86,	// (0x0001c2cf) cell_navstr_albumart_pane

0xeaa9,	// (0x0001c2f2) cell_navstr_albumart_pane_g1

0xbd0c,	// (0x00019555) cell_navstr_albumart_pane_g2

0xbd1c,	// (0x00019565) cell_navstr_albumart_pane_g3

0xbd14,	// (0x0001955d) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001d666) cell_navstr_albumart_pane_g

0x8a3c,	// (0x00016285) bt_list_pane_ParamLimits

0x8a3c,	// (0x00016285) bt_list_pane

0x8a50,	// (0x00016299) bt_list_pane_t1

0x8a5f,	// (0x000162a8) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001d66f) bt_list_pane_t

0x94ba,	// (0x00016d03) main_cale_prevew_pane

0x8a6e,	// (0x000162b7) popup_cale_preview_window_ParamLimits

0x8a6e,	// (0x000162b7) popup_cale_preview_window

0x952a,	// (0x00016d73) bg_popup_preview_window_pane_cp05_ParamLimits

0x952a,	// (0x00016d73) bg_popup_preview_window_pane_cp05

0xeab1,	// (0x0001c2fa) list_cale_preview_pane_ParamLimits

0xeab1,	// (0x0001c2fa) list_cale_preview_pane

0x8a89,	// (0x000162d2) list_double_cale_preview_pane_ParamLimits

0x8a89,	// (0x000162d2) list_double_cale_preview_pane

0x8a9b,	// (0x000162e4) list_single_cale_preview_pane_ParamLimits

0x8a9b,	// (0x000162e4) list_single_cale_preview_pane

0x8ab1,	// (0x000162fa) list_single_cale_preview_pane_g1

0x8ab9,	// (0x00016302) list_single_cale_preview_pane_t1_ParamLimits

0x8ab9,	// (0x00016302) list_single_cale_preview_pane_t1

0x8ace,	// (0x00016317) list_double_cale_preview_pane_g1

0x8ad6,	// (0x0001631f) list_double_cale_preview_pane_t1_ParamLimits

0x8ad6,	// (0x0001631f) list_double_cale_preview_pane_t1

0x8aeb,	// (0x00016334) list_double_cale_preview_pane_t2_ParamLimits

0x8aeb,	// (0x00016334) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001d674) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001d674) list_double_cale_preview_pane_t

0x94ba,	// (0x00016d03) main_ezdial_pane

0x952a,	// (0x00016d73) main_sp_fs_email_pane_ParamLimits

0x821b,	// (0x00015a64) cmail_ddmenu_btn01_pane_ParamLimits

0x821b,	// (0x00015a64) cmail_ddmenu_btn01_pane

0x822e,	// (0x00015a77) cmail_ddmenu_btn02_pane_ParamLimits

0x822e,	// (0x00015a77) cmail_ddmenu_btn02_pane

0x8251,	// (0x00015a9a) cmail_ddmenu_btn03_pane_ParamLimits

0x8251,	// (0x00015a9a) cmail_ddmenu_btn03_pane

0x8277,	// (0x00015ac0) main_sp_fs_ctrlbar_pane_ParamLimits

0x829b,	// (0x00015ae4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd407,	// (0x0001ac50) list_cmail_body_pane_ParamLimits

0xe6ef,	// (0x0001bf38) bg_button_pane_cp12

0xe704,	// (0x0001bf4d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe704,	// (0x0001bf4d) list_single_cmail_header_detail_pane_g3

0x879a,	// (0x00015fe3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x879a,	// (0x00015fe3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001d5f9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001d5f9) list_single_cmail_header_detail_pane_t

0xe82b,	// (0x0001c074) phacti_term_pane_t2_ParamLimits

0xe82b,	// (0x0001c074) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001d603) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001d603) phacti_term_pane_t

0xeabd,	// (0x0001c306) aid_size_list_single_double

0x8b03,	// (0x0001634c) popup_ezdial_listscroll_window

0x8b1f,	// (0x00016368) popup_number_entry_window_cp01

0xaa32,	// (0x0001827b) bg_popup_call_pane_cp09

0xeac9,	// (0x0001c312) ezdial_list_pane

0xead1,	// (0x0001c31a) scroll_pane_cp23

0xbeef,	// (0x00019738) bg_button_pane_cp028_ParamLimits

0xbeef,	// (0x00019738) bg_button_pane_cp028

0x8b2d,	// (0x00016376) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b2d,	// (0x00016376) cmail_ddmenu_btn01_pane_g1

0x8b39,	// (0x00016382) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b39,	// (0x00016382) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001d679) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001d679) cmail_ddmenu_btn01_pane_g

0xead9,	// (0x0001c322) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead9,	// (0x0001c322) cmail_ddmenu_btn01_pane_t1

0xbeef,	// (0x00019738) bg_button_pane_cp029_ParamLimits

0xbeef,	// (0x00019738) bg_button_pane_cp029

0x8b45,	// (0x0001638e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b45,	// (0x0001638e) cmail_ddmenu_btn02_pane_g1

0x8b5d,	// (0x000163a6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8b5d,	// (0x000163a6) cmail_ddmenu_btn02_pane_t1

0x952a,	// (0x00016d73) bg_button_pane_cp031_ParamLimits

0x952a,	// (0x00016d73) bg_button_pane_cp031

0x8b45,	// (0x0001638e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b45,	// (0x0001638e) cmail_ddmenu_btn03_pane_g1

0x8b5d,	// (0x000163a6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8b5d,	// (0x000163a6) cmail_ddmenu_btn03_pane_t1

0x5b0c,	// (0x00013355) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b26,	// (0x0001336f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b26,	// (0x0001336f) cell_dialer2_keypad_pane_t1_copy1

0x79cb,	// (0x00015214) ncimui_group_button_pane

0x952a,	// (0x00016d73) main_sp_fs_calendar_pane_ParamLimits

0x8733,	// (0x00015f7c) list_single_cmail_header_caption_pane_ParamLimits

0xe86d,	// (0x0001c0b6) aid_recal_txt_sm_pane

0x94ba,	// (0x00016d03) mian_recal_day_pane

0xe8ac,	// (0x0001c0f5) popup_sp_fs_cale_preview_window_ParamLimits

0x94ba,	// (0x00016d03) list_recal_day_pane

0xeb10,	// (0x0001c359) list_single_recal_day_pane_ParamLimits

0xeb10,	// (0x0001c359) list_single_recal_day_pane

0xeb22,	// (0x0001c36b) list_single_recal_day_pane_g1_ParamLimits

0xeb22,	// (0x0001c36b) list_single_recal_day_pane_g1

0xeb2e,	// (0x0001c377) list_single_recal_day_pane_g2_ParamLimits

0xeb2e,	// (0x0001c377) list_single_recal_day_pane_g2

0xeb3d,	// (0x0001c386) list_single_recal_day_pane_g3_ParamLimits

0xeb3d,	// (0x0001c386) list_single_recal_day_pane_g3

0x8b81,	// (0x000163ca) list_single_recal_day_pane_g4_ParamLimits

0x8b81,	// (0x000163ca) list_single_recal_day_pane_g4

0xeb49,	// (0x0001c392) list_single_recal_day_pane_g5_ParamLimits

0xeb49,	// (0x0001c392) list_single_recal_day_pane_g5

0xeb90,	// (0x0001c3d9) list_single_recal_day_pane_g6_ParamLimits

0xeb90,	// (0x0001c3d9) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001d688) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001d688) list_single_recal_day_pane_g

0xeb9c,	// (0x0001c3e5) list_single_recal_day_pane_t1

0xebaa,	// (0x0001c3f3) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001d695) list_single_recal_day_pane_t

0x8b94,	// (0x000163dd) ncimui_query_button_pane_ParamLimits

0x8b94,	// (0x000163dd) ncimui_query_button_pane

0x8ba4,	// (0x000163ed) ncimui_query_button_pane_t1_ParamLimits

0x8ba4,	// (0x000163ed) ncimui_query_button_pane_t1

0xebb8,	// (0x0001c401) ncimui_query_button_pane_t2_ParamLimits

0xebb8,	// (0x0001c401) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001d69a) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001d69a) ncimui_query_button_pane_t

0x8bb7,	// (0x00016400) query_button_pane_ParamLimits

0x8bb7,	// (0x00016400) query_button_pane

0x94ba,	// (0x00016d03) bg_button_pane_cp0028

0xebcb,	// (0x0001c414) query_button_pane_t1

0x3c1a,	// (0x00011463) main_tport_pane_ParamLimits

0x8620,	// (0x00015e69) bg_popup_window_pane_cp01_ParamLimits

0x8620,	// (0x00015e69) bg_popup_window_pane_cp01

0x863a,	// (0x00015e83) heading_pane_cp08_ParamLimits

0x863a,	// (0x00015e83) heading_pane_cp08

0x864e,	// (0x00015e97) heading_pane_cp07_ParamLimits

0x864e,	// (0x00015e97) heading_pane_cp07

0xe6b1,	// (0x0001befa) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001d5e6) cell_tport_appsw_pane_g

0xabb3,	// (0x000183fc) input_candi_list_open_g1

0xa408,	// (0x00017c51) list_cale_time_pane_g6_ParamLimits

0xa408,	// (0x00017c51) list_cale_time_pane_g6

0x49e7,	// (0x00012230) aid_size_touch_calib_1_ParamLimits

0x49e7,	// (0x00012230) aid_size_touch_calib_1

0x49f3,	// (0x0001223c) aid_size_touch_calib_2_ParamLimits

0x49f3,	// (0x0001223c) aid_size_touch_calib_2

0x4a09,	// (0x00012252) aid_size_touch_calib_3_ParamLimits

0x4a09,	// (0x00012252) aid_size_touch_calib_3

0x4a27,	// (0x00012270) aid_size_touch_calib_4_ParamLimits

0x4a27,	// (0x00012270) aid_size_touch_calib_4

0x4a3d,	// (0x00012286) main_touch_calib_button_group_pane_ParamLimits

0x4a3d,	// (0x00012286) main_touch_calib_button_group_pane

0x4a55,	// (0x0001229e) main_touch_calib_pane_g1_ParamLimits

0x4a61,	// (0x000122aa) main_touch_calib_pane_g2_ParamLimits

0x4a6d,	// (0x000122b6) main_touch_calib_pane_g3_ParamLimits

0x4a79,	// (0x000122c2) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001cfbe) main_touch_calib_pane_g_ParamLimits

0x4a85,	// (0x000122ce) main_touch_calib_pane_t1_ParamLimits

0x4a9f,	// (0x000122e8) main_touch_calib_pane_t2_ParamLimits

0x4ab9,	// (0x00012302) main_touch_calib_pane_t3_ParamLimits

0x4acd,	// (0x00012316) main_touch_calib_pane_t4_ParamLimits

0x4ae1,	// (0x0001232a) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001cfc7) main_touch_calib_pane_t_ParamLimits

0xc773,	// (0x00019fbc) list_single_fp_cale_pane_g3_ParamLimits

0xc773,	// (0x00019fbc) list_single_fp_cale_pane_g3

0x952a,	// (0x00016d73) bg_button_pane_cp012_ParamLimits

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp03_ParamLimits

0x6bac,	// (0x000143f5) cell_vitu2_function_top_pane_g1_ParamLimits

0x952a,	// (0x00016d73) bg_vkb2_func_pane_cp04_ParamLimits

0x796b,	// (0x000151b4) main_ncimui_button_group_pane_ParamLimits

0x796b,	// (0x000151b4) main_ncimui_button_group_pane

0x79b9,	// (0x00015202) main_ncimui_pane_t3_ParamLimits

0x79b9,	// (0x00015202) main_ncimui_pane_t3

0xe7d9,	// (0x0001c022) phacti_button_group_pane

0xeabd,	// (0x0001c306) aid_size_list_single_double_ParamLimits

0x8b03,	// (0x0001634c) popup_ezdial_listscroll_window_ParamLimits

0x8b1f,	// (0x00016368) popup_number_entry_window_cp01_ParamLimits

0x8bca,	// (0x00016413) phacti_button_pane_ParamLimits

0x8bca,	// (0x00016413) phacti_button_pane

0x94ba,	// (0x00016d03) bg_button_pane_cp14

0xebd9,	// (0x0001c422) phacti_button_pane_t1

0x8bdb,	// (0x00016424) main_touch_calib_button_pane_ParamLimits

0x8bdb,	// (0x00016424) main_touch_calib_button_pane

0x9c9f,	// (0x000174e8) bg_button_pane_cp18_ParamLimits

0x9c9f,	// (0x000174e8) bg_button_pane_cp18

0xebe7,	// (0x0001c430) main_touch_calib_button_pane_t1_ParamLimits

0xebe7,	// (0x0001c430) main_touch_calib_button_pane_t1

0xebfd,	// (0x0001c446) main_touch_calib_button_pane_t2_ParamLimits

0xebfd,	// (0x0001c446) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001d69f) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001d69f) main_touch_calib_button_pane_t

0x94ba,	// (0x00016d03) cell_ncimui_button_pane

0x94ba,	// (0x00016d03) bg_button_pane_cp032

0xec1b,	// (0x0001c464) cell_ncimui_button_pane_t1

0xcf6c,	// (0x0001a7b5) image3_infobar_pane_ParamLimits

0xcf6c,	// (0x0001a7b5) image3_infobar_pane

0x7d6c,	// (0x000155b5) fs_bigclock_status_pane_ParamLimits

0x7d6c,	// (0x000155b5) fs_bigclock_status_pane

0x7d79,	// (0x000155c2) main_fs_bigclock_clock_pane_ParamLimits

0x7d79,	// (0x000155c2) main_fs_bigclock_clock_pane

0x7d8c,	// (0x000155d5) main_fs_bigclock_indi_pane_ParamLimits

0x7d8c,	// (0x000155d5) main_fs_bigclock_indi_pane

0x7da7,	// (0x000155f0) main_fs_bigclock_swipe_pane_ParamLimits

0x7da7,	// (0x000155f0) main_fs_bigclock_swipe_pane

0x94ba,	// (0x00016d03) main_fs_clock_dumped_data

0x7dc8,	// (0x00015611) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7dc8,	// (0x00015611) list_single_fs_bigclock_indicator_pane_g1

0x7de4,	// (0x0001562d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7de4,	// (0x0001562d) list_single_fs_bigclock_indicator_pane_g2

0x7dfe,	// (0x00015647) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7dfe,	// (0x00015647) list_single_fs_bigclock_indicator_pane_g3

0x7e18,	// (0x00015661) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7e18,	// (0x00015661) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d4d7) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d4d7) list_single_fs_bigclock_indicator_pane_g

0x7e3e,	// (0x00015687) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7e3e,	// (0x00015687) list_single_fs_bigclock_indicator_pane_t1

0x7e66,	// (0x000156af) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7e66,	// (0x000156af) list_single_fs_bigclock_indicator_pane_t2

0x7e8e,	// (0x000156d7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7e8e,	// (0x000156d7) list_single_fs_bigclock_indicator_pane_t3

0x7eb6,	// (0x000156ff) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7eb6,	// (0x000156ff) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d4e2) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d4e2) list_single_fs_bigclock_indicator_pane_t

0xec29,	// (0x0001c472) image3_infobar_fav_pane_ParamLimits

0xec29,	// (0x0001c472) image3_infobar_fav_pane

0xec39,	// (0x0001c482) image3_infobar_loc_pane_ParamLimits

0xec39,	// (0x0001c482) image3_infobar_loc_pane

0xec4d,	// (0x0001c496) image3_infobar_time_pane_ParamLimits

0xec4d,	// (0x0001c496) image3_infobar_time_pane

0xc3f5,	// (0x00019c3e) image3_infobar_time_pane_g1

0xec5d,	// (0x0001c4a6) image3_infobar_time_pane_t1

0xc3f5,	// (0x00019c3e) image3_infobar_loc_pane_g1

0xec6b,	// (0x0001c4b4) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001d6a4) image3_infobar_loc_pane_g

0xec73,	// (0x0001c4bc) image3_infobar_loc_pane_t1

0xc3f5,	// (0x00019c3e) image3_infobar_fav_pane_g1

0xec81,	// (0x0001c4ca) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001d6a9) image3_infobar_fav_pane_g

0xec89,	// (0x0001c4d2) fs_bigclock_status_battery_pane

0xec92,	// (0x0001c4db) fs_bigclock_status_signal_pane

0xec9b,	// (0x0001c4e4) fs_bigclock_status_title_pane

0xeca4,	// (0x0001c4ed) fs_bigclock_status_signal_pane_g1

0xecad,	// (0x0001c4f6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001d6ae) fs_bigclock_status_signal_pane_g

0xecb5,	// (0x0001c4fe) fs_bigclock_status_battery_pane_g1

0xecbe,	// (0x0001c507) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001d6b3) fs_bigclock_status_battery_pane_g

0xecc6,	// (0x0001c50f) fs_bigclock_status_title_pane_t1

0xc3f5,	// (0x00019c3e) main_fs_bigclock_clock_pane_g1

0xecd4,	// (0x0001c51d) main_fs_bigclock_clock_pane_g2

0xecd4,	// (0x0001c51d) main_fs_bigclock_clock_pane_g3

0xecd4,	// (0x0001c51d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001d6b8) main_fs_bigclock_clock_pane_g

0x8bf0,	// (0x00016439) main_fs_bigclock_clock_pane_t1

0x8bfe,	// (0x00016447) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001d6c1) main_fs_bigclock_clock_pane_t

0xecdc,	// (0x0001c525) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecdc,	// (0x0001c525) list_single_fs_bigclock_indicator_pane

0x8c0d,	// (0x00016456) list_single_fs_bigclock_pane_ParamLimits

0x8c0d,	// (0x00016456) list_single_fs_bigclock_pane

0xecf6,	// (0x0001c53f) main_fs_bigclock_indicator_pane_t1

0xed05,	// (0x0001c54e) list_single_fs_bigclock_pane_g1

0xed0d,	// (0x0001c556) list_single_fs_bigclock_pane_t1

0xc3f5,	// (0x00019c3e) main_fs_bigclock_swipe_pane_g1

0xed4d,	// (0x0001c596) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001d6d2) main_fs_bigclock_swipe_pane_g

0xed55,	// (0x0001c59e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed55,	// (0x0001c59e) main_fs_bigclock_swipe_pane_t1

0x2a61,	// (0x000102aa) call_type_pane_ParamLimits

0x94ba,	// (0x00016d03) main_btmg_pane

0xe9a5,	// (0x0001c1ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9a5,	// (0x0001c1ee) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001d645) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001d645) list_single_cale_mrui_row_pane_g

0xeaf7,	// (0x0001c340) list_recal_vselct_arw_lo_pane

0xeaff,	// (0x0001c348) list_recal_vselct_arw_up_pane

0xeb07,	// (0x0001c350) list_recal_vselct_pane

0xed72,	// (0x0001c5bb) btmg_button_pane

0x8c72,	// (0x000164bb) main_btmg_pane_g1

0x94ba,	// (0x00016d03) bg_button_pane_cp044

0xed7c,	// (0x0001c5c5) btmg_button_pane_t1

0xbee7,	// (0x00019730) aid_listscroll_gen

0x952a,	// (0x00016d73) main_cntbar_detail_pane

0xe6cf,	// (0x0001bf18) list_cmail_folder_pane

0xe6df,	// (0x0001bf28) sp_fs_scroll_pane_cp03_ParamLimits

0x8733,	// (0x00015f7c) list_single_fs_dyc_pane_cp01_ParamLimits

0x8733,	// (0x00015f7c) list_single_fs_dyc_pane_cp01

0xed8a,	// (0x0001c5d3) aid_size_cmail_indent

0xed93,	// (0x0001c5dc) list_single_dyc_row_pane_cp01

0x8ca8,	// (0x000164f1) cntbar_detail_list_pane_ParamLimits

0x8ca8,	// (0x000164f1) cntbar_detail_list_pane

0x8cf4,	// (0x0001653d) main_cntbar_detail_cont_pane_ParamLimits

0x8cf4,	// (0x0001653d) main_cntbar_detail_cont_pane

0x29fb,	// (0x00010244) scroll_pane_cp032_ParamLimits

0x29fb,	// (0x00010244) scroll_pane_cp032

0x8d08,	// (0x00016551) cntbar_detail_list_event_pane_ParamLimits

0x8d08,	// (0x00016551) cntbar_detail_list_event_pane

0x8cb8,	// (0x00016501) cntbar_detail_list_shct_pane

0xa257,	// (0x00017aa0) aid_list_gen

0xed9c,	// (0x0001c5e5) aid_scroll

0xeda5,	// (0x0001c5ee) aid_size_touch_scroll_bar

0x8d18,	// (0x00016561) aid_list_double

0xedae,	// (0x0001c5f7) aid_list_single

0x8d18,	// (0x00016561) aid_list_single_lg

0xedb7,	// (0x0001c600) aid_list_z_g_a_sm

0xedbf,	// (0x0001c608) aid_list_z_g_d

0xedc7,	// (0x0001c610) aid_txt_z_prm

0x8d21,	// (0x0001656a) aid_txt_z_prm_cp01

0x8d2f,	// (0x00016578) aid_txt_z_sec

0x8d3d,	// (0x00016586) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d3d,	// (0x00016586) main_cntbar_detail_cont_pane_g1

0x8d51,	// (0x0001659a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d51,	// (0x0001659a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001d6d7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001d6d7) main_cntbar_detail_cont_pane_g

0xedd5,	// (0x0001c61e) main_cntbar_detail_cont_pane_t1

0xede3,	// (0x0001c62c) main_cntbar_detail_cont_pane_t2

0xedf1,	// (0x0001c63a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001d6dc) main_cntbar_detail_cont_pane_t

0x8d61,	// (0x000165aa) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d61,	// (0x000165aa) cell_cntbar_detail_list_shct_pane

0xedff,	// (0x0001c648) cntbar_detail_list_shct_pane_g1

0xee08,	// (0x0001c651) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001d6e3) cntbar_detail_list_shct_pane_g

0x8d75,	// (0x000165be) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d75,	// (0x000165be) cntbar_detail_list_event_pane_g1

0x8d81,	// (0x000165ca) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d81,	// (0x000165ca) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001d6e8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001d6e8) cntbar_detail_list_event_pane_g

0x8ded,	// (0x00016636) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ded,	// (0x00016636) cntbar_detail_list_event_pane_t1

0x8e02,	// (0x0001664b) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e02,	// (0x0001664b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001d6f5) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001d6f5) cntbar_detail_list_event_pane_t

0xc3f5,	// (0x00019c3e) cell_cntbar_detail_list_shct_pane_g1

0x2dc3,	// (0x0001060c) navi_pane_mv_g3

0x952a,	// (0x00016d73) main_cntbar_detail_pane_ParamLimits

0x94ba,	// (0x00016d03) main_notif_wgt_pane

0xccfe,	// (0x0001a547) aid_tch_main_mp4_pane_g4

0xcf00,	// (0x0001a749) popup_slider_window_cp02

0xeaee,	// (0x0001c337) list_recal_day_event_pane

0x8c7c,	// (0x000164c5) cntbar_detail_btn_pane_ParamLimits

0x8c7c,	// (0x000164c5) cntbar_detail_btn_pane

0x8c92,	// (0x000164db) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c92,	// (0x000164db) cntbar_detail_btn_pane_cp01

0x8cb8,	// (0x00016501) cntbar_detail_list_shct_pane_ParamLimits

0x8cc8,	// (0x00016511) cntbar_detail_pane_g1_ParamLimits

0x8cc8,	// (0x00016511) cntbar_detail_pane_g1

0x8cd8,	// (0x00016521) cntbar_detail_pane_t1_ParamLimits

0x8cd8,	// (0x00016521) cntbar_detail_pane_t1

0x8d8d,	// (0x000165d6) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d8d,	// (0x000165d6) cntbar_detail_list_event_pane_g3

0x8da5,	// (0x000165ee) cntbar_detail_list_event_pane_g4_ParamLimits

0x8da5,	// (0x000165ee) cntbar_detail_list_event_pane_g4

0x8dbd,	// (0x00016606) cntbar_detail_list_event_pane_g5_ParamLimits

0x8dbd,	// (0x00016606) cntbar_detail_list_event_pane_g5

0x8dd5,	// (0x0001661e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8dd5,	// (0x0001661e) cntbar_detail_list_event_pane_g6

0x8e17,	// (0x00016660) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e17,	// (0x00016660) cntbar_detail_list_event_pane_t3

0x8e29,	// (0x00016672) popup_notif_wgt_window_ParamLimits

0x8e29,	// (0x00016672) popup_notif_wgt_window

0x8e42,	// (0x0001668b) popup_submenu_window_cp01_ParamLimits

0x8e42,	// (0x0001668b) popup_submenu_window_cp01

0xaa32,	// (0x0001827b) bg_popup_window_pane_cp10

0xee11,	// (0x0001c65a) listscroll_notif_wgt_pane

0xee1b,	// (0x0001c664) list_notif_wgt_window

0xee24,	// (0x0001c66d) scroll_pane_cp033

0xeb58,	// (0x0001c3a1) list_notif_wgt_row_pane_ParamLimits

0xeb58,	// (0x0001c3a1) list_notif_wgt_row_pane

0xee2d,	// (0x0001c676) aid_size_list_notif_wgt_del

0xee36,	// (0x0001c67f) list_notif_wgt_row_pane_g1

0xee3e,	// (0x0001c687) list_notif_wgt_row_pane_g2

0xee46,	// (0x0001c68f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001d6fc) list_notif_wgt_row_pane_g

0xee4f,	// (0x0001c698) list_notif_wgt_row_pane_t1

0xee5d,	// (0x0001c6a6) list_notif_wgt_row_pane_t2

0xee6b,	// (0x0001c6b4) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001d703) list_notif_wgt_row_pane_t

0xd4a2,	// (0x0001aceb) list_recal_day_event_pane_g1

0xee79,	// (0x0001c6c2) list_recal_day_event_pane_t1

0x94ba,	// (0x00016d03) bg_button_pane_cp045

0xee88,	// (0x0001c6d1) cntbar_detail_btn_pane_t1

0xbeef,	// (0x00019738) main_callh_pane_ParamLimits

0xbeef,	// (0x00019738) main_callh_pane

0x94ba,	// (0x00016d03) main_coverflow0_pane

0x94ba,	// (0x00016d03) main_wgtman_pane

0x7db5,	// (0x000155fe) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7db5,	// (0x000155fe) main_fs_bigclock_unlock_btn_pane

0xe6a9,	// (0x0001bef2) bg_button_pane_cp16

0xe6b9,	// (0x0001bf02) cell_tport_appsw_pane_g3

0x8e54,	// (0x0001669d) cf0_flow_pane_ParamLimits

0x8e54,	// (0x0001669d) cf0_flow_pane

0xee96,	// (0x0001c6df) listscroll_cf0_pane

0xee9f,	// (0x0001c6e8) main_cf0_pane_g1

0x8e69,	// (0x000166b2) main_cf0_pane_t1_ParamLimits

0x8e69,	// (0x000166b2) main_cf0_pane_t1

0x8e80,	// (0x000166c9) main_cf0_pane_t2_ParamLimits

0x8e80,	// (0x000166c9) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001d70a) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001d70a) main_cf0_pane_t

0xeea9,	// (0x0001c6f2) scroll_pane_cp11

0x8e97,	// (0x000166e0) cf0_flow_pane_g1

0x8e9f,	// (0x000166e8) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001d70f) cf0_flow_pane_g

0x8ea7,	// (0x000166f0) cf0_flow_pane_t1

0x94ba,	// (0x00016d03) main_call6_pane

0x94ba,	// (0x00016d03) main_calllock_pane

0x8eb5,	// (0x000166fe) call6_btn_grp_pane_ParamLimits

0x8eb5,	// (0x000166fe) call6_btn_grp_pane

0x8ecf,	// (0x00016718) call6_pane_g1_ParamLimits

0x8ecf,	// (0x00016718) call6_pane_g1

0x8ee4,	// (0x0001672d) popup_call6_1st_window_ParamLimits

0x8ee4,	// (0x0001672d) popup_call6_1st_window

0x8ef5,	// (0x0001673e) popup_call6_2nd_window_ParamLimits

0x8ef5,	// (0x0001673e) popup_call6_2nd_window

0x8f06,	// (0x0001674f) cell_call6_btn_pane_ParamLimits

0x8f06,	// (0x0001674f) cell_call6_btn_pane

0xaa32,	// (0x0001827b) bg_popup_call2_in_pane_cp03

0xeeb4,	// (0x0001c6fd) popup_call6_1st_window_g1

0xeebc,	// (0x0001c705) popup_call6_1st_window_g2

0xeec4,	// (0x0001c70d) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001d714) popup_call6_1st_window_g

0xeecc,	// (0x0001c715) popup_call6_1st_window_t1

0xeedb,	// (0x0001c724) popup_call6_1st_window_t2

0xeeeb,	// (0x0001c734) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001d71b) popup_call6_1st_window_t

0xaa32,	// (0x0001827b) bg_popup_call2_in_pane_cp04

0xeeb4,	// (0x0001c6fd) popup_call6_2nd_window_g1

0xeebc,	// (0x0001c705) popup_call6_2nd_window_g2

0xeec4,	// (0x0001c70d) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001d714) popup_call6_2nd_window_g

0xeecc,	// (0x0001c715) popup_call6_2nd_window_t1

0x94ba,	// (0x00016d03) bg_button_pane_cp15

0xeefb,	// (0x0001c744) cell_call6_btn_pane_g1

0xef04,	// (0x0001c74d) cell_call6_btn_pane_t1

0x8f1a,	// (0x00016763) listscroll_wgtman_pane_ParamLimits

0x8f1a,	// (0x00016763) listscroll_wgtman_pane

0x8f3d,	// (0x00016786) wgtman_btn_pane_ParamLimits

0x8f3d,	// (0x00016786) wgtman_btn_pane

0xa8e9,	// (0x00018132) aid_scroll_copy1

0xef13,	// (0x0001c75c) list_wgtman_pane

0x8f80,	// (0x000167c9) wgtman_btn_pane_g1_ParamLimits

0x8f80,	// (0x000167c9) wgtman_btn_pane_g1

0x8fac,	// (0x000167f5) wgtman_btn_pane_t1_ParamLimits

0x8fac,	// (0x000167f5) wgtman_btn_pane_t1

0xef1d,	// (0x0001c766) wgtman_btn_pane_t2_ParamLimits

0xef1d,	// (0x0001c766) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001d722) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001d722) wgtman_btn_pane_t

0x8fe9,	// (0x00016832) listrow_wgtman_pane_ParamLimits

0x8fe9,	// (0x00016832) listrow_wgtman_pane

0x8ffb,	// (0x00016844) listrow_wgtman_pane_g1

0x9004,	// (0x0001684d) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001d727) listrow_wgtman_pane_g

0x900e,	// (0x00016857) listrow_wgtman_pane_t1

0x901c,	// (0x00016865) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001d72c) listrow_wgtman_pane_t

0x902a,	// (0x00016873) wait_bar_pane_cp09

0xef34,	// (0x0001c77d) main_calllock_btn_pane

0xef3e,	// (0x0001c787) main_calllock_pane_g1

0x94ba,	// (0x00016d03) bg_button_pane_cp17

0xef4a,	// (0x0001c793) main_calllock_btn_pane_g1

0xef53,	// (0x0001c79c) main_calllock_btn_pane_t1

0x94ba,	// (0x00016d03) main_dialer3_pane

0x94ba,	// (0x00016d03) main_fmrd2_pane

0xc3f5,	// (0x00019c3e) main_fs_bigclock_unlock_btn_pane_g1

0xef6a,	// (0x0001c7b3) main_fs_bigclock_unlock_btn_pane_t1

0x9032,	// (0x0001687b) area_fmrd2_info_pane_ParamLimits

0x9032,	// (0x0001687b) area_fmrd2_info_pane

0x9043,	// (0x0001688c) area_fmrd2_visual_pane_ParamLimits

0x9043,	// (0x0001688c) area_fmrd2_visual_pane

0x9051,	// (0x0001689a) fmrd2_indi_pane_ParamLimits

0x9051,	// (0x0001689a) fmrd2_indi_pane

0x905e,	// (0x000168a7) area_fmrd2_visual_pane_g1

0x9066,	// (0x000168af) area_fmrd2_visual_pane_t1

0x9076,	// (0x000168bf) area_fmrd2_visual_pane_t2

0x9086,	// (0x000168cf) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001d736) area_fmrd2_visual_pane_t

0x9096,	// (0x000168df) area_fmrd2_info_pane_g1

0x909e,	// (0x000168e7) area_fmrd2_info_pane_t1

0x90ae,	// (0x000168f7) area_fmrd2_info_pane_t2

0x90be,	// (0x00016907) area_fmrd2_info_pane_t3

0x90ce,	// (0x00016917) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001d73d) area_fmrd2_info_pane_t

0x90dc,	// (0x00016925) fmrd2_indi_pane_t1

0x90ec,	// (0x00016935) fmrd2_indi_pane_t2

0x90fc,	// (0x00016945) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001d746) fmrd2_indi_pane_t

0x7e27,	// (0x00015670) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7e27,	// (0x00015670) list_single_fs_bigclock_indicator_pane_g5

0x7ecb,	// (0x00015714) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7ecb,	// (0x00015714) list_single_fs_bigclock_indicator_pane_t5

0x8880,	// (0x000160c9) aid_cell_bcale_month_pane_ParamLimits

0x8880,	// (0x000160c9) aid_cell_bcale_month_pane

0x8892,	// (0x000160db) bcale_month_pane_ParamLimits

0x8892,	// (0x000160db) bcale_month_pane

0x88aa,	// (0x000160f3) bcale_preview_pane_ParamLimits

0x88aa,	// (0x000160f3) bcale_preview_pane

0xed0d,	// (0x0001c556) list_single_fs_bigclock_pane_t1_ParamLimits

0xed29,	// (0x0001c572) list_single_fs_bigclock_pane_t2_ParamLimits

0xed29,	// (0x0001c572) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001d6cd) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001d6cd) list_single_fs_bigclock_pane_t

0xef62,	// (0x0001c7ab) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001d731) main_fs_bigclock_unlock_btn_pane_g

0x910c,	// (0x00016955) aid_dia3_key_size_ParamLimits

0x910c,	// (0x00016955) aid_dia3_key_size

0x911b,	// (0x00016964) aid_dia3_listrow_size_ParamLimits

0x911b,	// (0x00016964) aid_dia3_listrow_size

0x9130,	// (0x00016979) dia3_keypad_fun_pane_ParamLimits

0x9130,	// (0x00016979) dia3_keypad_fun_pane

0x914c,	// (0x00016995) dia3_keypad_num_pane_ParamLimits

0x914c,	// (0x00016995) dia3_keypad_num_pane

0x9167,	// (0x000169b0) dia3_listscroll_pane_ParamLimits

0x9167,	// (0x000169b0) dia3_listscroll_pane

0x917a,	// (0x000169c3) dia3_numentry_pane_ParamLimits

0x917a,	// (0x000169c3) dia3_numentry_pane

0xef78,	// (0x0001c7c1) dia3_list_pane

0xef83,	// (0x0001c7cc) scroll_pane_cp12

0x94ba,	// (0x00016d03) bg_dia3_numentry_pane

0x918e,	// (0x000169d7) dia3_numentry_pane_t1

0x919d,	// (0x000169e6) cell_dia3_key_num_pane

0x91a5,	// (0x000169ee) cell_dia3_key0_fun_pane_ParamLimits

0x91a5,	// (0x000169ee) cell_dia3_key0_fun_pane

0x91b9,	// (0x00016a02) cell_dia3_key1_fun_pane_ParamLimits

0x91b9,	// (0x00016a02) cell_dia3_key1_fun_pane

0x91d1,	// (0x00016a1a) dia3_listrow_pane

0xdf72,	// (0x0001b7bb) bg_dia3_numentry_pane_g1

0x94ba,	// (0x00016d03) bg_button_pane_cp21

0xef8e,	// (0x0001c7d7) cell_dia3_key_num_pane_t1

0xef9c,	// (0x0001c7e5) cell_dia3_key_num_pane_t2

0xefab,	// (0x0001c7f4) cell_dia3_key_num_pane_t3

0xefba,	// (0x0001c803) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001d74d) cell_dia3_key_num_pane_t

0x94ba,	// (0x00016d03) bg_button_pane_cp19

0x91e3,	// (0x00016a2c) cell_dia3_key0_fun_pane_g1

0x94ba,	// (0x00016d03) bg_button_pane_cp20

0x91eb,	// (0x00016a34) cell_dia3_key1_fun_pane_g1

0x91f3,	// (0x00016a3c) area_left_week_number_pane

0x91fc,	// (0x00016a45) area_top_day_name_pane

0x9205,	// (0x00016a4e) frame_month_view_pane

0x920d,	// (0x00016a56) grid_month_view_pane

0x9217,	// (0x00016a60) cell_top_day_name_pane_ParamLimits

0x9217,	// (0x00016a60) cell_top_day_name_pane

0x922d,	// (0x00016a76) cell_area_left_week_number_pane_ParamLimits

0x922d,	// (0x00016a76) cell_area_left_week_number_pane

0x9241,	// (0x00016a8a) cell_month_view_pane_ParamLimits

0x9241,	// (0x00016a8a) cell_month_view_pane

0xefc9,	// (0x0001c812) frm_month_g1

0x925c,	// (0x00016aa5) frm_month_g2

0x9264,	// (0x00016aad) frm_month_g3

0x926c,	// (0x00016ab5) frm_month_g4

0x9274,	// (0x00016abd) frm_month_g5

0x927c,	// (0x00016ac5) frm_month_g6

0x9284,	// (0x00016acd) frm_month_g7

0xefd2,	// (0x0001c81b) frm_month_g8

0x928c,	// (0x00016ad5) frm_month_g9

0x9295,	// (0x00016ade) frm_month_g10

0x929e,	// (0x00016ae7) frm_month_g11

0x92a7,	// (0x00016af0) frm_month_g12

0x92b0,	// (0x00016af9) frm_month_g13

0x92b9,	// (0x00016b02) frm_month_g14

0x92c2,	// (0x00016b0b) frm_month_g15

0x92cb,	// (0x00016b14) frm_month_g16

0x000f,

0xff0d,	// (0x0001d756) frm_month_g

0x92d4,	// (0x00016b1d) cell_top_day_name_pane_t1

0x92e3,	// (0x00016b2c) cell_area_left_week_number_pane_g1

0x92d4,	// (0x00016b1d) cell_area_left_week_number_pane_t1

0xc3f5,	// (0x00019c3e) cell_month_view_pane_g1

0x92eb,	// (0x00016b34) cell_month_view_pane_t1

0x94ba,	// (0x00016d03) main_fps_pane

0xe42f,	// (0x0001bc78) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe42f,	// (0x0001bc78) cmail_ddmenu_btn02_pane_cp1

0xe44b,	// (0x0001bc94) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe44b,	// (0x0001bc94) cmail_ddmenu_btn02_pane_cp2

0x8b51,	// (0x0001639a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b51,	// (0x0001639a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001d67e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001d67e) cmail_ddmenu_btn02_pane_g

0x8b6f,	// (0x000163b8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8b6f,	// (0x000163b8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001d683) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001d683) cmail_ddmenu_btn02_pane_t

0x92fa,	// (0x00016b43) fps_text_pane_ParamLimits

0x92fa,	// (0x00016b43) fps_text_pane

0x9311,	// (0x00016b5a) main_fps_pane_g1_ParamLimits

0x9311,	// (0x00016b5a) main_fps_pane_g1

0x932b,	// (0x00016b74) wait_bar_pane_cp010_ParamLimits

0x932b,	// (0x00016b74) wait_bar_pane_cp010

0x933c,	// (0x00016b85) fps_text_pane_t1_ParamLimits

0x933c,	// (0x00016b85) fps_text_pane_t1

0xf0a8,	// (0x0001c8f1) cam4_image_uncrop_pane_g1

0xf0b1,	// (0x0001c8fa) cam4_image_uncrop_pane_g2

0x5fb3,	// (0x000137fc) cam4_image_uncrop_pane_g3

0x5fbc,	// (0x00013805) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d156) cam4_image_uncrop_pane_g

0x91d1,	// (0x00016a1a) dia3_listrow_pane_ParamLimits

0x94ba,	// (0x00016d03) main_phob2_pane

0x86b9,	// (0x00015f02) cell_tport_appsw_pane_cp02_ParamLimits

0x86b9,	// (0x00015f02) cell_tport_appsw_pane_cp02

0x86cd,	// (0x00015f16) cell_tport_appsw_pane_cp03_ParamLimits

0x86cd,	// (0x00015f16) cell_tport_appsw_pane_cp03

0x94ba,	// (0x00016d03) phob2_contact_card_pane

0x94ba,	// (0x00016d03) phob2_listscroll_pane

0xefdb,	// (0x0001c824) phob2_list_pane

0xefe3,	// (0x0001c82c) scroll_pane_cp034

0x9354,	// (0x00016b9d) phob2_cc_data_pane_ParamLimits

0x9354,	// (0x00016b9d) phob2_cc_data_pane

0x9373,	// (0x00016bbc) phob2_cc_listscroll_pane_ParamLimits

0x9373,	// (0x00016bbc) phob2_cc_listscroll_pane

0x9391,	// (0x00016bda) list_double_large_graphic_phob2_pane_ParamLimits

0x9391,	// (0x00016bda) list_double_large_graphic_phob2_pane

0xefeb,	// (0x0001c834) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xefeb,	// (0x0001c834) list_double_large_graphic_phob2_pane_g1

0xeff8,	// (0x0001c841) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeff8,	// (0x0001c841) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001d777) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001d777) list_double_large_graphic_phob2_pane_g

0xf004,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xf004,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t1

0xf019,	// (0x0001c862) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xf019,	// (0x0001c862) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001d77c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001d77c) list_double_large_graphic_phob2_pane_t

0x94ba,	// (0x00016d03) list_highlight_pane_cp024

0xf02b,	// (0x0001c874) phob2_cc_button_pane

0x93a3,	// (0x00016bec) phob2_cc_data_pane_g1_ParamLimits

0x93a3,	// (0x00016bec) phob2_cc_data_pane_g1

0x93b8,	// (0x00016c01) phob2_cc_data_pane_g2_ParamLimits

0x93b8,	// (0x00016c01) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001d781) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001d781) phob2_cc_data_pane_g

0x93ca,	// (0x00016c13) phob2_cc_data_pane_t1_ParamLimits

0x93ca,	// (0x00016c13) phob2_cc_data_pane_t1

0x93e2,	// (0x00016c2b) phob2_cc_data_pane_t2_ParamLimits

0x93e2,	// (0x00016c2b) phob2_cc_data_pane_t2

0x93fa,	// (0x00016c43) phob2_cc_data_pane_t3_ParamLimits

0x93fa,	// (0x00016c43) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001d786) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001d786) phob2_cc_data_pane_t

0xf033,	// (0x0001c87c) phob2_cc_list_pane_ParamLimits

0xf033,	// (0x0001c87c) phob2_cc_list_pane

0xd54d,	// (0x0001ad96) scroll_pane_cp035_ParamLimits

0xd54d,	// (0x0001ad96) scroll_pane_cp035

0x952a,	// (0x00016d73) bg_button_pane_cp033

0xf03f,	// (0x0001c888) phob2_cc_button_pane_g1

0xf04b,	// (0x0001c894) phob2_cc_button_pane_t1

0xf060,	// (0x0001c8a9) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001d78d) phob2_cc_button_pane_t

0x9412,	// (0x00016c5b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9412,	// (0x00016c5b) list_double_large_graphic_phob2_cc_pane

0x9424,	// (0x00016c6d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9424,	// (0x00016c6d) list_double_large_graphic_phob2_cc_pane_g1

0x9430,	// (0x00016c79) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9430,	// (0x00016c79) list_double_large_graphic_phob2_cc_pane_g2

0x943c,	// (0x00016c85) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x943c,	// (0x00016c85) list_double_large_graphic_phob2_cc_pane_g3

0x9448,	// (0x00016c91) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9448,	// (0x00016c91) list_double_large_graphic_phob2_cc_pane_g4

0x9454,	// (0x00016c9d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9454,	// (0x00016c9d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001d792) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001d792) list_double_large_graphic_phob2_cc_pane_g

0x9460,	// (0x00016ca9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9460,	// (0x00016ca9) list_double_large_graphic_phob2_cc_pane_t1

0x9489,	// (0x00016cd2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9489,	// (0x00016cd2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001d79d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001d79d) list_double_large_graphic_phob2_cc_pane_t

0xf072,	// (0x0001c8bb) list_highlight_pane_cp025_ParamLimits

0xf072,	// (0x0001c8bb) list_highlight_pane_cp025

0x952a,	// (0x00016d73) bg_button_pane_cp033_ParamLimits

0xf03f,	// (0x0001c888) phob2_cc_button_pane_g1_ParamLimits

0xf04b,	// (0x0001c894) phob2_cc_button_pane_t1_ParamLimits

0xf060,	// (0x0001c8a9) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001d78d) phob2_cc_button_pane_t_ParamLimits

0x0da7,	// (0x0000e5f0) popup_wgtman_window

0xd2cf,	// (0x0001ab18) scroll_pane_cp038

0x8f62,	// (0x000167ab) wgtman_btn_pane_cp_01_ParamLimits

0x8f62,	// (0x000167ab) wgtman_btn_pane_cp_01

0xf080,	// (0x0001c8c9) wgtman_content_pane

0xf089,	// (0x0001c8d2) wgtman_heading_pane

0x94ba,	// (0x00016d03) bg_heading_pane_cp02

0xf092,	// (0x0001c8db) wgtman_heading_pane_g1

0xf09a,	// (0x0001c8e3) wgtman_heading_pane_t1

0xf0ba,	// (0x0001c903) scroll_pane_cp036

0xf0c2,	// (0x0001c90b) wgtman_list_pane

0xeb6a,	// (0x0001c3b3) wgtman_list_pane_t1_ParamLimits

0xeb6a,	// (0x0001c3b3) wgtman_list_pane_t1

0xd0a1,	// (0x0001a8ea) cam4_grid_pane

0x6d3d,	// (0x00014586) bg_button_pane_cp015_ParamLimits

0x6d4f,	// (0x00014598) bg_button_pane_cp016_ParamLimits

0x6d62,	// (0x000145ab) bg_button_pane_cp017_ParamLimits

0x6dba,	// (0x00014603) popup_vitu2_query_window_g3_ParamLimits

0x6dba,	// (0x00014603) popup_vitu2_query_window_g3

0x6e77,	// (0x000146c0) popup_vitu2_query_window_t6_ParamLimits

0x6e77,	// (0x000146c0) popup_vitu2_query_window_t6

0x6ea2,	// (0x000146eb) popup_vitu2_query_window_t7_ParamLimits

0x6ea2,	// (0x000146eb) popup_vitu2_query_window_t7

0xf0a8,	// (0x0001c8f1) cam4_grid_pane_g1

0xf0b1,	// (0x0001c8fa) cam4_grid_pane_g2

0xf0ca,	// (0x0001c913) cam4_grid_pane_g3

0xf0d3,	// (0x0001c91c) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001d7a2) cam4_grid_pane_g

0x1ca2,	// (0x0000f4eb) aid_placing_vt_slider_lsc_ParamLimits

0x1fad,	// (0x0000f7f6) vidtel_button_pane_ParamLimits

0x1fad,	// (0x0000f7f6) vidtel_button_pane

0x94ba,	// (0x00016d03) bg_button_pane_cp034

0x94b2,	// (0x00016cfb) vidtel_button_pane_g1

0xf0de,	// (0x0001c927) vidtel_button_pane_t1

0xd430,	// (0x0001ac79) aid_size_vtel_slider_touch

0xd54d,	// (0x0001ad96) scroll_pane_cp039

0xdfb0,	// (0x0001b7f9) ncim_query_button_pane_cp01_ParamLimits

0xdfcf,	// (0x0001b818) ncimui_query_pane_g1_ParamLimits

0x952a,	// (0x00016d73) input_focus_pane_cp012_ParamLimits

0xdff4,	// (0x0001b83d) ncim_query_entry_pane_t1_ParamLimits

0xd54d,	// (0x0001ad96) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
