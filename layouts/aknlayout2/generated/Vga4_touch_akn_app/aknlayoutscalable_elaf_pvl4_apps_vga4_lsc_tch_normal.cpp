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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000e128 };

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
0x079e,	// (0x0000e8c6) Screen

0x07aa,	// (0x0000e8d2) application_window

0x07e6,	// (0x0000e90e) area_bottom_pane_ParamLimits

0x07e6,	// (0x0000e90e) area_bottom_pane

0x081f,	// (0x0000e947) area_top_pane_ParamLimits

0x081f,	// (0x0000e947) area_top_pane

0x9603,	// (0x0001772b) call_video_uplink_pane_ParamLimits

0x9603,	// (0x0001772b) call_video_uplink_pane

0x08ad,	// (0x0000e9d5) main_pane_ParamLimits

0x08ad,	// (0x0000e9d5) main_pane

0xbe4f,	// (0x00019f77) context_pane

0x3b3e,	// (0x00011c66) navi_pane

0x3b75,	// (0x00011c9d) popup_cale_events_window_ParamLimits

0x3b75,	// (0x00011c9d) popup_cale_events_window

0xbe62,	// (0x00019f8a) popup_mup_playback_window

0x3b8d,	// (0x00011cb5) signal_pane

0x9de1,	// (0x00017f09) main_browser_pane

0x9ff4,	// (0x0001811c) main_burst_pane

0x3856,	// (0x0001197e) main_calc_pane

0xbdeb,	// (0x00019f13) main_cale_day_pane

0x0db2,	// (0x0000eeda) main_cale_month_pane

0xbdeb,	// (0x00019f13) main_cale_week_pane

0x9ff4,	// (0x0001811c) main_call_pane

0x9a77,	// (0x00017b9f) main_call_poc_pane

0x9ff4,	// (0x0001811c) main_camera_pane

0x9ff4,	// (0x0001811c) main_chi_dic_pane

0xa8b2,	// (0x000189da) main_clock_pane

0x9a77,	// (0x00017b9f) main_fmradio_pane

0x9ff4,	// (0x0001811c) main_graph_messa_pane

0x9a77,	// (0x00017b9f) main_help_pane

0x9de1,	// (0x00017f09) main_im_pane

0x9cd2,	// (0x00017dfa) main_image_pane_ParamLimits

0x9cd2,	// (0x00017dfa) main_image_pane

0x9a77,	// (0x00017b9f) main_location2_pane

0x9ff4,	// (0x0001811c) main_location_pane

0x9cd2,	// (0x00017dfa) main_messa_pane

0x9a77,	// (0x00017b9f) main_mp2_pane

0x9ff4,	// (0x0001811c) main_mp_pane

0x9a77,	// (0x00017b9f) main_msg_pane

0x9a77,	// (0x00017b9f) main_mup_eq_pane

0x9a77,	// (0x00017b9f) main_mup_pane

0x9de1,	// (0x00017f09) main_notes_pane

0x9a77,	// (0x00017b9f) main_pec_pane

0x9a77,	// (0x00017b9f) main_phob_pane

0x9a77,	// (0x00017b9f) main_pinb_pane

0x9a77,	// (0x00017b9f) main_postcard_pane

0x9a77,	// (0x00017b9f) main_qdial_pane

0x9ff4,	// (0x0001811c) main_skin_pane

0x9a77,	// (0x00017b9f) main_smil2_pane

0x9ff4,	// (0x0001811c) main_smil_pane

0x9ff4,	// (0x0001811c) main_video_pane

0x9ff4,	// (0x0001811c) main_video_tele_pane

0x9cd2,	// (0x00017dfa) main_viewer_pane_ParamLimits

0x9cd2,	// (0x00017dfa) main_viewer_pane

0x9ff4,	// (0x0001811c) main_vorec_pane

0x38ac,	// (0x000119d4) popup_blid_sat_info_window_ParamLimits

0x38ac,	// (0x000119d4) popup_blid_sat_info_window

0x3910,	// (0x00011a38) popup_dyc_status_message_window_ParamLimits

0x3910,	// (0x00011a38) popup_dyc_status_message_window

0x392a,	// (0x00011a52) popup_grid_large_graphic_window_ParamLimits

0x392a,	// (0x00011a52) popup_grid_large_graphic_window

0x39ec,	// (0x00011b14) popup_loc_request_window_ParamLimits

0x39ec,	// (0x00011b14) popup_loc_request_window

0x3b12,	// (0x00011c3a) popup_wml_address_window_ParamLimits

0x3b12,	// (0x00011c3a) popup_wml_address_window

0x3694,	// (0x000117bc) call_muted_g1

0x32e2,	// (0x0001140a) popup_call_audio_conf_window_ParamLimits

0x32e2,	// (0x0001140a) popup_call_audio_conf_window

0x36a4,	// (0x000117cc) popup_call_audio_first_window_ParamLimits

0x36a4,	// (0x000117cc) popup_call_audio_first_window

0x371a,	// (0x00011842) popup_call_audio_in_window_ParamLimits

0x371a,	// (0x00011842) popup_call_audio_in_window

0x3756,	// (0x0001187e) popup_call_audio_out_window_ParamLimits

0x3756,	// (0x0001187e) popup_call_audio_out_window

0x3790,	// (0x000118b8) popup_call_audio_second_window_ParamLimits

0x3790,	// (0x000118b8) popup_call_audio_second_window

0x37e6,	// (0x0001190e) popup_call_audio_wait_window_ParamLimits

0x37e6,	// (0x0001190e) popup_call_audio_wait_window

0x381b,	// (0x00011943) popup_number_entry_window_ParamLimits

0x381b,	// (0x00011943) popup_number_entry_window

0x962f,	// (0x00017757) bg_popup_call_pane_cp05_ParamLimits

0x962f,	// (0x00017757) bg_popup_call_pane_cp05

0x964f,	// (0x00017777) popup_number_entry_window_t1

0x9662,	// (0x0001778a) popup_number_entry_window_t2

0x9674,	// (0x0001779c) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0001d193) popup_number_entry_window_t

0x96bb,	// (0x000177e3) text_title_cp2

0x96ce,	// (0x000177f6) bg_popup_call_pane_cp_ParamLimits

0x96ce,	// (0x000177f6) bg_popup_call_pane_cp

0x96dc,	// (0x00017804) call_thumbnail_pane

0x96e4,	// (0x0001780c) popup_call_audio_in_window_g1_ParamLimits

0x96e4,	// (0x0001780c) popup_call_audio_in_window_g1

0x96f0,	// (0x00017818) popup_call_audio_in_window_g2_ParamLimits

0x96f0,	// (0x00017818) popup_call_audio_in_window_g2

0x96fc,	// (0x00017824) popup_call_audio_in_window_g3_ParamLimits

0x96fc,	// (0x00017824) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0001d19c) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0001d19c) popup_call_audio_in_window_g

0x9708,	// (0x00017830) popup_call_audio_in_window_t1_ParamLimits

0x9708,	// (0x00017830) popup_call_audio_in_window_t1

0x9724,	// (0x0001784c) popup_call_audio_in_window_t2_ParamLimits

0x9724,	// (0x0001784c) popup_call_audio_in_window_t2

0x9740,	// (0x00017868) popup_call_audio_in_window_t3_ParamLimits

0x9740,	// (0x00017868) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0001d1a3) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0001d1a3) popup_call_audio_in_window_t

0x96ce,	// (0x000177f6) bg_popup_call_pane_cp01_ParamLimits

0x96ce,	// (0x000177f6) bg_popup_call_pane_cp01

0x96dc,	// (0x00017804) call_thumbnail_pane_cp02

0x9753,	// (0x0001787b) call_type_pane_cp022

0x975b,	// (0x00017883) popup_call_audio_out_window_g1_ParamLimits

0x975b,	// (0x00017883) popup_call_audio_out_window_g1

0x976d,	// (0x00017895) popup_call_audio_out_window_g2_ParamLimits

0x976d,	// (0x00017895) popup_call_audio_out_window_g2

0x9779,	// (0x000178a1) popup_call_audio_out_window_g3_ParamLimits

0x9779,	// (0x000178a1) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0001d1aa) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0001d1aa) popup_call_audio_out_window_g

0x978b,	// (0x000178b3) popup_call_audio_out_window_t1_ParamLimits

0x978b,	// (0x000178b3) popup_call_audio_out_window_t1

0x97a3,	// (0x000178cb) popup_call_audio_out_window_t2_ParamLimits

0x97a3,	// (0x000178cb) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0001d1b1) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0001d1b1) popup_call_audio_out_window_t

0x97b8,	// (0x000178e0) bg_popup_call_pane_ParamLimits

0x97b8,	// (0x000178e0) bg_popup_call_pane

0x0a34,	// (0x0000eb5c) call_thumbnail_pane_cp_ParamLimits

0x0a34,	// (0x0000eb5c) call_thumbnail_pane_cp

0x983c,	// (0x00017964) call_type_pane_cp01_ParamLimits

0x983c,	// (0x00017964) call_type_pane_cp01

0x9880,	// (0x000179a8) popup_call_audio_first_window_g1_ParamLimits

0x9880,	// (0x000179a8) popup_call_audio_first_window_g1

0x98cc,	// (0x000179f4) popup_call_audio_first_window_g2_ParamLimits

0x98cc,	// (0x000179f4) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0001d1b6) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0001d1b6) popup_call_audio_first_window_g

0x9910,	// (0x00017a38) popup_call_audio_first_window_t1_ParamLimits

0x9910,	// (0x00017a38) popup_call_audio_first_window_t1

0x99bc,	// (0x00017ae4) popup_call_audio_first_window_t4_ParamLimits

0x99bc,	// (0x00017ae4) popup_call_audio_first_window_t4

0x9a48,	// (0x00017b70) popup_call_audio_first_window_t5_ParamLimits

0x9a48,	// (0x00017b70) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0001d1bb) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0001d1bb) popup_call_audio_first_window_t

0x9a77,	// (0x00017b9f) bg_popup_call_pane_cp02

0x9a81,	// (0x00017ba9) call_type_pane_cp023

0x9a89,	// (0x00017bb1) popup_call_audio_wait_window_g1

0x9a91,	// (0x00017bb9) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0001d1c2) popup_call_audio_wait_window_g

0x9a99,	// (0x00017bc1) popup_call_audio_wait_window_t3

0x9aa7,	// (0x00017bcf) bg_popup_call_pane_cp03_ParamLimits

0x9aa7,	// (0x00017bcf) bg_popup_call_pane_cp03

0x9b07,	// (0x00017c2f) call_thumbnail_pane_cp011_ParamLimits

0x9b07,	// (0x00017c2f) call_thumbnail_pane_cp011

0x9b13,	// (0x00017c3b) call_type_pane_cp034_ParamLimits

0x9b13,	// (0x00017c3b) call_type_pane_cp034

0x9b4f,	// (0x00017c77) popup_call_audio_second_window_g1_ParamLimits

0x9b4f,	// (0x00017c77) popup_call_audio_second_window_g1

0x9b8b,	// (0x00017cb3) popup_call_audio_second_window_g2_ParamLimits

0x9b8b,	// (0x00017cb3) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0001d1c7) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0001d1c7) popup_call_audio_second_window_g

0x9bc7,	// (0x00017cef) popup_call_audio_second_window_t1_ParamLimits

0x9bc7,	// (0x00017cef) popup_call_audio_second_window_t1

0x9c48,	// (0x00017d70) popup_call_audio_second_window_t2_ParamLimits

0x9c48,	// (0x00017d70) popup_call_audio_second_window_t2

0x9c7e,	// (0x00017da6) popup_call_audio_second_window_t3_ParamLimits

0x9c7e,	// (0x00017da6) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0001d1cc) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0001d1cc) popup_call_audio_second_window_t

0x9a77,	// (0x00017b9f) bg_popup_call_pane_cp04

0x9cb4,	// (0x00017ddc) list_conf_pane

0x9cbc,	// (0x00017de4) popup_call_audio_conf_window_t1

0x9cca,	// (0x00017df2) call_thumbnail_pane_g1

0x9cd2,	// (0x00017dfa) bg_pinb_pane_ParamLimits

0x9cd2,	// (0x00017dfa) bg_pinb_pane

0x9ce0,	// (0x00017e08) find_pinb_pane

0x9cd2,	// (0x00017dfa) listscroll_pinb_pane_ParamLimits

0x9cd2,	// (0x00017dfa) listscroll_pinb_pane

0x9cea,	// (0x00017e12) pinb_bg_pane_g1

0x9cea,	// (0x00017e12) pinb_bg_pane_g2

0x9cea,	// (0x00017e12) pinb_bg_pane_g3

0x9cea,	// (0x00017e12) pinb_bg_pane_g4

0x9cea,	// (0x00017e12) pinb_bg_pane_g5

0x9cea,	// (0x00017e12) pinb_bg_pane_g6

0x9cea,	// (0x00017e12) pinb_bg_pane_g7

0x9cea,	// (0x00017e12) pinb_bg_pane_g8

0x9cea,	// (0x00017e12) pinb_bg_pane_g9

0x9cea,	// (0x00017e12) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0001d1d3) pinb_bg_pane_g

0x95ac,	// (0x000176d4) grid_pinb_pane

0x95ac,	// (0x000176d4) list_pinb_pane

0x9621,	// (0x00017749) scroll_pane_cp01_ParamLimits

0x9621,	// (0x00017749) scroll_pane_cp01

0x9cf4,	// (0x00017e1c) find_pinb_pane_g1_ParamLimits

0x9cf4,	// (0x00017e1c) find_pinb_pane_g1

0x9d0c,	// (0x00017e34) find_pinb_pane_t1

0x9d1e,	// (0x00017e46) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0001d1ed) find_pinb_pane_t

0x9d33,	// (0x00017e5b) input_focus_pane_cp01_ParamLimits

0x9d33,	// (0x00017e5b) input_focus_pane_cp01

0x9d3f,	// (0x00017e67) cell_pinb_pane_ParamLimits

0x9d3f,	// (0x00017e67) cell_pinb_pane

0x9d4d,	// (0x00017e75) cell_pinb_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) cell_pinb_pane_g1

0x9d5b,	// (0x00017e83) cell_pinb_pane_g2_ParamLimits

0x9d5b,	// (0x00017e83) cell_pinb_pane_g2

0x9d5b,	// (0x00017e83) cell_pinb_pane_g3_ParamLimits

0x9d5b,	// (0x00017e83) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0001d1f2) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0001d1f2) cell_pinb_pane_g

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp01

0x9d3f,	// (0x00017e67) list_pinb_item_pane_ParamLimits

0x9d3f,	// (0x00017e67) list_pinb_item_pane

0x95ac,	// (0x000176d4) list_highlight_pane_cp02

0x9d69,	// (0x00017e91) list_pinb_item_pane_g1_ParamLimits

0x9d69,	// (0x00017e91) list_pinb_item_pane_g1

0x9d5b,	// (0x00017e83) list_pinb_item_pane_g2_ParamLimits

0x9d5b,	// (0x00017e83) list_pinb_item_pane_g2

0x9d4d,	// (0x00017e75) list_pinb_item_pane_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_pinb_item_pane_g3

0x9d5b,	// (0x00017e83) list_pinb_item_pane_g4_ParamLimits

0x9d5b,	// (0x00017e83) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0001d1f9) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0001d1f9) list_pinb_item_pane_g

0x9d77,	// (0x00017e9f) list_pinb_item_pane_t1_ParamLimits

0x9d77,	// (0x00017e9f) list_pinb_item_pane_t1

0x0a78,	// (0x0000eba0) calc_display_pane

0x0a9d,	// (0x0000ebc5) calc_paper_pane

0x0ac0,	// (0x0000ebe8) grid_calc_pane

0x9a77,	// (0x00017b9f) bg_list_pane_cp01

0x0aee,	// (0x0000ec16) clock_g1

0x0af6,	// (0x0000ec1e) clock_g2

0x0001,

0xf0da,	// (0x0001d202) clock_g

0x0afe,	// (0x0000ec26) clock_t1_ParamLimits

0x0afe,	// (0x0000ec26) clock_t1

0x0b13,	// (0x0000ec3b) clock_t2_ParamLimits

0x0b13,	// (0x0000ec3b) clock_t2

0x0b25,	// (0x0000ec4d) clock_t3_ParamLimits

0x0b25,	// (0x0000ec4d) clock_t3

0x0b37,	// (0x0000ec5f) clock_t4_ParamLimits

0x0b37,	// (0x0000ec5f) clock_t4

0x0b49,	// (0x0000ec71) clock_t5_ParamLimits

0x0b49,	// (0x0000ec71) clock_t5

0x0b5e,	// (0x0000ec86) clock_t6_ParamLimits

0x0b5e,	// (0x0000ec86) clock_t6

0x0b70,	// (0x0000ec98) clock_t7_ParamLimits

0x0b70,	// (0x0000ec98) clock_t7

0x0b82,	// (0x0000ecaa) clock_t8_ParamLimits

0x0b82,	// (0x0000ecaa) clock_t8

0x0b96,	// (0x0000ecbe) clock_t9_ParamLimits

0x0b96,	// (0x0000ecbe) clock_t9

0x0008,

0xf0df,	// (0x0001d207) clock_t_ParamLimits

0xf0df,	// (0x0001d207) clock_t

0x9d93,	// (0x00017ebb) popup_clock_analogue_window_cp02

0x9d93,	// (0x00017ebb) popup_clock_digital_window_cp01

0x9a77,	// (0x00017b9f) listscroll_help_pane

0x9a77,	// (0x00017b9f) phob_pre_status_pane

0x9d9b,	// (0x00017ec3) grid_qdial_pane

0x0bac,	// (0x0000ecd4) listscroll_mce_pane

0x9cd2,	// (0x00017dfa) bg_notes_pane

0x9da5,	// (0x00017ecd) list_notes_pane

0x0bc8,	// (0x0000ecf0) scroll_pane_cp06

0x9db3,	// (0x00017edb) bg_calc_paper_pane

0x9dc7,	// (0x00017eef) list_calc_pane

0x9de1,	// (0x00017f09) bg_calc_display_pane

0x0bdc,	// (0x0000ed04) calc_display_pane_t1

0x0bee,	// (0x0000ed16) calc_display_pane_t2

0x9ded,	// (0x00017f15) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0001d21a) calc_display_pane_t

0x0c00,	// (0x0000ed28) cell_calc_pane_ParamLimits

0x0c00,	// (0x0000ed28) cell_calc_pane

0x9dff,	// (0x00017f27) bg_calc_paper_pane_g1

0x9e0b,	// (0x00017f33) bg_calc_paper_pane_g2

0x9e17,	// (0x00017f3f) bg_calc_paper_pane_g3

0x9e23,	// (0x00017f4b) bg_calc_paper_pane_g4

0x9e2f,	// (0x00017f57) bg_calc_paper_pane_g5

0x0c3b,	// (0x0000ed63) bg_calc_paper_pane_g6

0x0c49,	// (0x0000ed71) bg_calc_paper_pane_g7

0x0c57,	// (0x0000ed7f) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0001d221) bg_calc_paper_pane_g

0x0c6a,	// (0x0000ed92) calc_bg_paper_pane_g9

0x0c7d,	// (0x0000eda5) list_calc_item_pane_ParamLimits

0x0c7d,	// (0x0000eda5) list_calc_item_pane

0x9e3b,	// (0x00017f63) list_calc_item_pane_g1

0x9e48,	// (0x00017f70) list_calc_item_pane_t1_ParamLimits

0x9e48,	// (0x00017f70) list_calc_item_pane_t1

0x0c95,	// (0x0000edbd) list_calc_item_pane_t2_ParamLimits

0x0c95,	// (0x0000edbd) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0001d232) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0001d232) list_calc_item_pane_t

0x9cea,	// (0x00017e12) cell_calc_pane_g1

0x9e5a,	// (0x00017f82) grid_highlight_pane_cp02

0x9e7c,	// (0x00017fa4) bg_calc_display_pane_g1

0x0cc7,	// (0x0000edef) bg_calc_display_pane_g2

0x0cd1,	// (0x0000edf9) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0001d23c) bg_calc_display_pane_g

0x0cda,	// (0x0000ee02) cell_qdial_pane_ParamLimits

0x0cda,	// (0x0000ee02) cell_qdial_pane

0x0cee,	// (0x0000ee16) cell_qdial_pane_g1_ParamLimits

0x0cee,	// (0x0000ee16) cell_qdial_pane_g1

0x0d04,	// (0x0000ee2c) cell_qdial_pane_g2_ParamLimits

0x0d04,	// (0x0000ee2c) cell_qdial_pane_g2

0x9e85,	// (0x00017fad) cell_qdial_pane_g3_ParamLimits

0x9e85,	// (0x00017fad) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0001d243) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0001d243) cell_qdial_pane_g

0x0d2b,	// (0x0000ee53) cell_qdial_pane_t1_ParamLimits

0x0d2b,	// (0x0000ee53) cell_qdial_pane_t1

0x0d43,	// (0x0000ee6b) cell_qdial_pane_t2_ParamLimits

0x0d43,	// (0x0000ee6b) cell_qdial_pane_t2

0x0d56,	// (0x0000ee7e) cell_qdial_pane_t3_ParamLimits

0x0d56,	// (0x0000ee7e) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0001d24c) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0001d24c) cell_qdial_pane_t

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp04

0x9e91,	// (0x00017fb9) thumbnail_qdial_pane_ParamLimits

0x9e91,	// (0x00017fb9) thumbnail_qdial_pane

0x9eed,	// (0x00018015) list_help_pane

0x9ef6,	// (0x0001801e) scroll_pane_cp02

0x0d69,	// (0x0000ee91) help_list_pane_t1_ParamLimits

0x0d69,	// (0x0000ee91) help_list_pane_t1

0x9eff,	// (0x00018027) bg_notes_pane_g2

0x9f07,	// (0x0001802f) bg_notes_pane_g3

0x9f0f,	// (0x00018037) notes_bg_pane_g1

0x9f17,	// (0x0001803f) notes_bg_pane_g4

0x9f1f,	// (0x00018047) notes_bg_pane_g5

0x9f27,	// (0x0001804f) notes_bg_pane_g6

0x9f2f,	// (0x00018057) notes_bg_pane_g7

0x9f37,	// (0x0001805f) notes_bg_pane_g8

0x9f3f,	// (0x00018067) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0001d26a) notes_bg_pane_g

0x0d8d,	// (0x0000eeb5) list_notes_text_pane_ParamLimits

0x0d8d,	// (0x0000eeb5) list_notes_text_pane

0x9f47,	// (0x0001806f) list_notes_text_pane_g1

0x0da4,	// (0x0000eecc) list_notes_text_pane_t1

0x0db2,	// (0x0000eeda) listscroll_cale_week_pane

0x0ddc,	// (0x0000ef04) bg_cale_heading_pane

0x0e00,	// (0x0000ef28) bg_cale_pane_cp01

0x0e1d,	// (0x0000ef45) cale_week_corner_pane

0x0e3c,	// (0x0000ef64) cale_week_day_heading_pane

0x0e65,	// (0x0000ef8d) cale_week_scroll_pane_g1

0x0e84,	// (0x0000efac) cale_week_scroll_pane_g2

0x0e9c,	// (0x0000efc4) cale_week_scroll_pane_g3

0x0eb4,	// (0x0000efdc) cale_week_scroll_pane_g4

0x0ecc,	// (0x0000eff4) cale_week_scroll_pane_g5

0x0eec,	// (0x0000f014) cale_week_scroll_pane_g6

0x0f0c,	// (0x0000f034) cale_week_scroll_pane_g7

0x0f30,	// (0x0000f058) cale_week_scroll_pane_g8

0x0f54,	// (0x0000f07c) cale_week_scroll_pane_g9

0x0f6c,	// (0x0000f094) cale_week_scroll_pane_g10

0x0f84,	// (0x0000f0ac) cale_week_scroll_pane_g11

0x0f9c,	// (0x0000f0c4) cale_week_scroll_pane_g12

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g13

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g14

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0001d279) cale_week_scroll_pane_g

0x1008,	// (0x0000f130) cale_week_time_pane

0x102c,	// (0x0000f154) grid_cale_week_pane

0x9f7c,	// (0x000180a4) scroll_pane_cp08

0x105e,	// (0x0000f186) cell_cale_week_pane_ParamLimits

0x105e,	// (0x0000f186) cell_cale_week_pane

0x10fa,	// (0x0000f222) cale_week_day_heading_pane_t1

0x1124,	// (0x0000f24c) cale_week_day_heading_pane_t2

0x1153,	// (0x0000f27b) cale_week_day_heading_pane_t3

0x1182,	// (0x0000f2aa) cale_week_day_heading_pane_t4

0x11b1,	// (0x0000f2d9) cale_week_day_heading_pane_t5

0x11e4,	// (0x0000f30c) cale_week_day_heading_pane_t6

0x121b,	// (0x0000f343) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0001d29a) cale_week_day_heading_pane_t

0x9f99,	// (0x000180c1) bg_cale_side_pane

0x1245,	// (0x0000f36d) cale_week_time_pane_t1

0x125f,	// (0x0000f387) cale_week_time_pane_t2

0x1279,	// (0x0000f3a1) cale_week_time_pane_t3

0x1293,	// (0x0000f3bb) cale_week_time_pane_t4

0x12ad,	// (0x0000f3d5) cale_week_time_pane_t5

0x12c7,	// (0x0000f3ef) cale_week_time_pane_t6

0x12e7,	// (0x0000f40f) cale_week_time_pane_t7

0x130d,	// (0x0000f435) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0001d2a9) cale_week_time_pane_t

0x1333,	// (0x0000f45b) cell_cale_week_pane_g2

0x1357,	// (0x0000f47f) cell_cale_week_pane_g3_ParamLimits

0x1357,	// (0x0000f47f) cell_cale_week_pane_g3

0x9fa7,	// (0x000180cf) grid_highlight_pane_cp07

0x9faf,	// (0x000180d7) listscroll_gms_pane

0x9fb9,	// (0x000180e1) grid_gms_pane

0x9fc2,	// (0x000180ea) listscroll_gms_pane_g1

0x9fca,	// (0x000180f2) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0001d2ba) listscroll_gms_pane_g

0x136f,	// (0x0000f497) scroll_pane_cp010

0x137a,	// (0x0000f4a2) cell_gms_pane_ParamLimits

0x137a,	// (0x0000f4a2) cell_gms_pane

0x1391,	// (0x0000f4b9) cell_gms_pane_g1

0x9fd2,	// (0x000180fa) cell_gms_pane_g2

0x9fda,	// (0x00018102) cell_gms_pane_g3

0x9fe3,	// (0x0001810b) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0001d2bf) cell_gms_pane_g

0x9fec,	// (0x00018114) grid_highlight_pane_cp09

0x3618,	// (0x00011740) phob_pre_status_pane_g1

0x3620,	// (0x00011748) phob_pre_status_pane_g2

0x3628,	// (0x00011750) phob_pre_status_pane_g3

0x3630,	// (0x00011758) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x0001d683) phob_pre_status_pane_g

0x3640,	// (0x00011768) phob_pre_status_pane_t1

0x3650,	// (0x00011778) phob_pre_status_pane_t2

0x3660,	// (0x00011788) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x0001d68e) phob_pre_status_pane_t

0x9ff4,	// (0x0001811c) bg_list_pane_cp05

0x13a1,	// (0x0000f4c9) grid_vorec_pane

0x13ab,	// (0x0000f4d3) vorec_t1

0x13b9,	// (0x0000f4e1) vorec_t2

0x13c7,	// (0x0000f4ef) vorec_t3

0x13d5,	// (0x0000f4fd) vorec_t4

0x9022,	// (0x0001714a) vorec_t5

0x9030,	// (0x00017158) vorec_t6

0x0004,

0xf1a0,	// (0x0001d2c8) vorec_t

0x903e,	// (0x00017166) wait_bar_pane_cp01

0x9ffc,	// (0x00018124) cell_vorec_pane_ParamLimits

0x9ffc,	// (0x00018124) cell_vorec_pane

0xa011,	// (0x00018139) cell_vorec_pane_g1

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp05

0x9621,	// (0x00017749) cams_zoom_pane

0x9621,	// (0x00017749) image_vga_pane

0x9d4d,	// (0x00017e75) main_camera_pane_g1

0x9d4d,	// (0x00017e75) main_camera_pane_g2

0x9d4d,	// (0x00017e75) main_camera_pane_g3

0x9d4d,	// (0x00017e75) main_camera_pane_g4

0x9d4d,	// (0x00017e75) main_camera_pane_g5

0x9d4d,	// (0x00017e75) main_camera_pane_g6

0x9d4d,	// (0x00017e75) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0001d2d3) main_camera_pane_g

0xa01b,	// (0x00018143) main_camera_pane_t1

0xa01b,	// (0x00018143) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0001d2e4) main_camera_pane_t

0x1405,	// (0x0000f52d) cams_zoom_pane_cp_ParamLimits

0x1405,	// (0x0000f52d) cams_zoom_pane_cp

0x1439,	// (0x0000f561) image_cif_pane_ParamLimits

0x1439,	// (0x0000f561) image_cif_pane

0x95ac,	// (0x000176d4) image_subqcif_pane

0x144b,	// (0x0000f573) main_video_pane_g1_ParamLimits

0x144b,	// (0x0000f573) main_video_pane_g1

0x1479,	// (0x0000f5a1) main_video_pane_g2_ParamLimits

0x1479,	// (0x0000f5a1) main_video_pane_g2

0x14b3,	// (0x0000f5db) main_video_pane_g3_ParamLimits

0x14b3,	// (0x0000f5db) main_video_pane_g3

0x14b3,	// (0x0000f5db) main_video_pane_g4_ParamLimits

0x14b3,	// (0x0000f5db) main_video_pane_g4

0x14e7,	// (0x0000f60f) main_video_pane_g5_ParamLimits

0x14e7,	// (0x0000f60f) main_video_pane_g5

0xa02f,	// (0x00018157) main_video_pane_g6_ParamLimits

0xa02f,	// (0x00018157) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0001d2e9) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0001d2e9) main_video_pane_g

0x1503,	// (0x0000f62b) main_video_pane_t1_ParamLimits

0x1503,	// (0x0000f62b) main_video_pane_t1

0xa049,	// (0x00018171) cams_zoom_pane_g1

0xa049,	// (0x00018171) cams_zoom_pane_g2

0xa049,	// (0x00018171) cams_zoom_pane_g3

0xa049,	// (0x00018171) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0001d2f8) cams_zoom_pane_g

0x155b,	// (0x0000f683) grid_cams_pane

0x1575,	// (0x0000f69d) linegrid_cams_pane

0x1587,	// (0x0000f6af) cell_cams_pane_ParamLimits

0x1587,	// (0x0000f6af) cell_cams_pane

0xa053,	// (0x0001817b) cams_burst_image_pane

0xa05b,	// (0x00018183) cell_cams_pane_g1

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp03

0x9cea,	// (0x00017e12) mp_bg_pane_g1

0x95ac,	// (0x000176d4) bg_list_pane_cp03

0x95ac,	// (0x000176d4) bg_mp_pane

0x95ac,	// (0x000176d4) grid_mp_pane

0xa049,	// (0x00018171) media_player_g1

0xa5d8,	// (0x00018700) media_player_t1

0xa5d8,	// (0x00018700) media_player_t2

0xa5d8,	// (0x00018700) media_player_t3

0xa5d8,	// (0x00018700) media_player_t4

0xa5d8,	// (0x00018700) media_player_t5

0xa5d8,	// (0x00018700) media_player_t6

0xa5d8,	// (0x00018700) media_player_t7

0x0006,

0xf545,	// (0x0001d66d) media_player_t

0x95ac,	// (0x000176d4) wait_bar_pane_cp02

0xf52a,	// (0x0001d652) main_usb_pane_t

0xa8b2,	// (0x000189da) cell_mp_pane

0x9cea,	// (0x00017e12) cell_mp_pane_g1

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp06

0xa063,	// (0x0001818b) grid_skin_colour_pane

0xa06b,	// (0x00018193) list_highlight_pane_cp03

0x15a9,	// (0x0000f6d1) skin_g1

0xa073,	// (0x0001819b) skin_t1

0xa082,	// (0x000181aa) skin_t2

0x0001,

0xf1fe,	// (0x0001d326) skin_t

0x15b3,	// (0x0000f6db) cell_skin_colour_pane_ParamLimits

0x15b3,	// (0x0000f6db) cell_skin_colour_pane

0xa090,	// (0x000181b8) cell_skin_colour_pane_g1

0x1626,	// (0x0000f74e) call_video_g1_ParamLimits

0x1626,	// (0x0000f74e) call_video_g1

0x1642,	// (0x0000f76a) call_video_g2_ParamLimits

0x1642,	// (0x0000f76a) call_video_g2

0x0001,

0xf203,	// (0x0001d32b) call_video_g_ParamLimits

0xf203,	// (0x0001d32b) call_video_g

0x1687,	// (0x0000f7af) call_video_uplink_pane_cp1_ParamLimits

0x1687,	// (0x0000f7af) call_video_uplink_pane_cp1

0xa0a2,	// (0x000181ca) call_video_uplink_pane_cp2

0x1728,	// (0x0000f850) video_down_crop_pane_ParamLimits

0x1728,	// (0x0000f850) video_down_crop_pane

0x1811,	// (0x0000f939) video_down_pane_ParamLimits

0x1811,	// (0x0000f939) video_down_pane

0xa0aa,	// (0x000181d2) video_down_subqcif_pane_ParamLimits

0xa0aa,	// (0x000181d2) video_down_subqcif_pane

0xa0c4,	// (0x000181ec) video_down_subqcif_pane_cp_ParamLimits

0xa0c4,	// (0x000181ec) video_down_subqcif_pane_cp

0xa0ec,	// (0x00018214) im_reading_pane_ParamLimits

0xa0ec,	// (0x00018214) im_reading_pane

0x191c,	// (0x0000fa44) im_writing_pane_ParamLimits

0x191c,	// (0x0000fa44) im_writing_pane

0x193a,	// (0x0000fa62) im_reading_pane_t1

0xa106,	// (0x0001822e) list_im_pane

0xa117,	// (0x0001823f) scroll_pane_cp07

0x1979,	// (0x0000faa1) im_writing_pane_t1_ParamLimits

0x1979,	// (0x0000faa1) im_writing_pane_t1

0xa130,	// (0x00018258) im_writing_pane_t2_ParamLimits

0xa130,	// (0x00018258) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0001d335) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0001d335) im_writing_pane_t

0x9a77,	// (0x00017b9f) input_focus_pane_cp04

0x9a77,	// (0x00017b9f) input_focus_pane_cp05

0x198e,	// (0x0000fab6) list_im_single_pane_ParamLimits

0x198e,	// (0x0000fab6) list_im_single_pane

0x19a7,	// (0x0000facf) list_single_im_pane_t1

0x9ff4,	// (0x0001811c) blid_accuracy_pane

0x9ff4,	// (0x0001811c) blid_compass_pane

0xbda3,	// (0x00019ecb) main_location_t1

0xbda3,	// (0x00019ecb) main_location_t2

0xbda3,	// (0x00019ecb) main_location_t3

0x0002,

0xf554,	// (0x0001d67c) main_location_t

0x9a77,	// (0x00017b9f) aid_levels_location

0x9cea,	// (0x00017e12) blid_accuracy_pane_g1

0x9cea,	// (0x00017e12) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0001d384) blid_accuracy_pane_g

0xa178,	// (0x000182a0) wml_content_pane

0xa1b6,	// (0x000182de) wml_button_pane_ParamLimits

0xa1b6,	// (0x000182de) wml_button_pane

0x19b6,	// (0x0000fade) wml_list_single_large_pane_ParamLimits

0x19b6,	// (0x0000fade) wml_list_single_large_pane

0x19cf,	// (0x0000faf7) wml_list_single_medium_pane_ParamLimits

0x19cf,	// (0x0000faf7) wml_list_single_medium_pane

0x19e9,	// (0x0000fb11) wml_list_single_small_pane_ParamLimits

0x19e9,	// (0x0000fb11) wml_list_single_small_pane

0xa1ca,	// (0x000182f2) wml_selection_box_pane_ParamLimits

0xa1ca,	// (0x000182f2) wml_selection_box_pane

0xa1dd,	// (0x00018305) wml_list_single_pane_t1

0xa1ec,	// (0x00018314) wml_list_single_medium_pane_t1

0xa1fb,	// (0x00018323) wml_list_single_large_pane_t1

0xa20a,	// (0x00018332) input_focus_pane_cp02_ParamLimits

0xa20a,	// (0x00018332) input_focus_pane_cp02

0xa21d,	// (0x00018345) wml_selection_box_pane_g1

0xa226,	// (0x0001834e) wml_selection_box_pane_t1_ParamLimits

0xa226,	// (0x0001834e) wml_selection_box_pane_t1

0x9cd2,	// (0x00017dfa) bg_wml_button_pane_ParamLimits

0x9cd2,	// (0x00017dfa) bg_wml_button_pane

0xa23e,	// (0x00018366) wml_button_pane_g1

0xa246,	// (0x0001836e) wml_button_pane_t1

0xa23e,	// (0x00018366) wml_button_bg_pane_g1

0xa256,	// (0x0001837e) wml_button_bg_pane_g2

0xa25e,	// (0x00018386) wml_button_bg_pane_g3

0xa266,	// (0x0001838e) wml_button_bg_pane_g4

0xa26e,	// (0x00018396) wml_button_bg_pane_g5

0xa276,	// (0x0001839e) wml_button_bg_pane_g6

0xa27e,	// (0x000183a6) wml_button_bg_pane_g7

0xa286,	// (0x000183ae) wml_button_bg_pane_g8

0xa28e,	// (0x000183b6) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0001d33a) wml_button_bg_pane_g

0x1a08,	// (0x0000fb30) bg_list_pane_cp02

0xa296,	// (0x000183be) mce_header_pane_ParamLimits

0xa296,	// (0x000183be) mce_header_pane

0xa2ac,	// (0x000183d4) mce_icon_pane

0xa2ac,	// (0x000183d4) mce_image_pane

0xa2b5,	// (0x000183dd) mce_text_pane_ParamLimits

0xa2b5,	// (0x000183dd) mce_text_pane

0x1a10,	// (0x0000fb38) scroll_pane_cp03

0xa1ae,	// (0x000182d6) scroll_pane_cp04

0xa2c8,	// (0x000183f0) scroll_pane_cp05_ParamLimits

0xa2c8,	// (0x000183f0) scroll_pane_cp05

0x1a18,	// (0x0000fb40) mce_header_field_pane_ParamLimits

0x1a18,	// (0x0000fb40) mce_header_field_pane

0x1a31,	// (0x0000fb59) mce_header_field_pane_2_ParamLimits

0x1a31,	// (0x0000fb59) mce_header_field_pane_2

0x1a47,	// (0x0000fb6f) mce_header_field_pane_3

0xa2d4,	// (0x000183fc) list_single_mce_message_pane_ParamLimits

0xa2d4,	// (0x000183fc) list_single_mce_message_pane

0xa2e3,	// (0x0001840b) list_single_mce_smart_pane_ParamLimits

0xa2e3,	// (0x0001840b) list_single_mce_smart_pane

0xa2fd,	// (0x00018425) input_focus_pane_cp03

0xa306,	// (0x0001842e) list_header_data_pane

0x1a4f,	// (0x0000fb77) mce_header_field_pane_t1

0x1a5d,	// (0x0000fb85) list_single_mce_header_pane_ParamLimits

0x1a5d,	// (0x0000fb85) list_single_mce_header_pane

0xa30e,	// (0x00018436) list_single_mce_header_pane_t1

0xa31d,	// (0x00018445) list_single_mce_message_pane_g1

0xa325,	// (0x0001844d) list_single_mce_message_pane_t1

0x1a97,	// (0x0000fbbf) bg_cale_heading_pane_cp01_ParamLimits

0x1a97,	// (0x0000fbbf) bg_cale_heading_pane_cp01

0xa333,	// (0x0001845b) bg_cale_pane_cp02_ParamLimits

0xa333,	// (0x0001845b) bg_cale_pane_cp02

0x1ae9,	// (0x0000fc11) cale_month_corner_pane

0x1b08,	// (0x0000fc30) cale_month_day_heading_pane_ParamLimits

0x1b08,	// (0x0000fc30) cale_month_day_heading_pane

0x1b72,	// (0x0000fc9a) cale_month_pane_g1_ParamLimits

0x1b72,	// (0x0000fc9a) cale_month_pane_g1

0x1bb9,	// (0x0000fce1) cale_month_pane_g2_ParamLimits

0x1bb9,	// (0x0000fce1) cale_month_pane_g2

0x1bf5,	// (0x0000fd1d) cale_month_pane_g3_ParamLimits

0x1bf5,	// (0x0000fd1d) cale_month_pane_g3

0x1c49,	// (0x0000fd71) cale_month_pane_g4_ParamLimits

0x1c49,	// (0x0000fd71) cale_month_pane_g4

0x1c9d,	// (0x0000fdc5) cale_month_pane_g5_ParamLimits

0x1c9d,	// (0x0000fdc5) cale_month_pane_g5

0x1cf9,	// (0x0000fe21) cale_month_pane_g6_ParamLimits

0x1cf9,	// (0x0000fe21) cale_month_pane_g6

0x1d61,	// (0x0000fe89) cale_month_pane_g7_ParamLimits

0x1d61,	// (0x0000fe89) cale_month_pane_g7

0x1dcd,	// (0x0000fef5) cale_month_pane_g8_ParamLimits

0x1dcd,	// (0x0000fef5) cale_month_pane_g8

0x1e39,	// (0x0000ff61) cale_month_pane_g9_ParamLimits

0x1e39,	// (0x0000ff61) cale_month_pane_g9

0x1e9d,	// (0x0000ffc5) cale_month_pane_g10_ParamLimits

0x1e9d,	// (0x0000ffc5) cale_month_pane_g10

0x1eef,	// (0x00010017) cale_month_pane_g11_ParamLimits

0x1eef,	// (0x00010017) cale_month_pane_g11

0x1f41,	// (0x00010069) cale_month_pane_g12_ParamLimits

0x1f41,	// (0x00010069) cale_month_pane_g12

0x1f99,	// (0x000100c1) cale_month_pane_g13_ParamLimits

0x1f99,	// (0x000100c1) cale_month_pane_g13

0x000c,

0xf225,	// (0x0001d34d) cale_month_pane_g_ParamLimits

0xf225,	// (0x0001d34d) cale_month_pane_g

0x1ff1,	// (0x00010119) cale_month_week_pane

0x2015,	// (0x0001013d) grid_cale_month_pane_ParamLimits

0x2015,	// (0x0001013d) grid_cale_month_pane

0x2076,	// (0x0001019e) cale_month_day_heading_pane_t1

0x20fc,	// (0x00010224) cale_month_day_heading_pane_t2

0x2175,	// (0x0001029d) cale_month_day_heading_pane_t3

0x21ee,	// (0x00010316) cale_month_day_heading_pane_t4

0x226f,	// (0x00010397) cale_month_day_heading_pane_t5

0x22f8,	// (0x00010420) cale_month_day_heading_pane_t6

0x2389,	// (0x000104b1) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0001d368) cale_month_day_heading_pane_t

0x9f99,	// (0x000180c1) bg_cale_side_pane_cp01

0x241a,	// (0x00010542) cale_month_week_pane_t1

0x2433,	// (0x0001055b) cale_month_week_pane_t2

0x244c,	// (0x00010574) cale_month_week_pane_t3

0x2465,	// (0x0001058d) cale_month_week_pane_t4

0x247e,	// (0x000105a6) cale_month_week_pane_t5

0x2497,	// (0x000105bf) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0001d377) cale_month_week_pane_t

0x24bc,	// (0x000105e4) cell_cale_month_pane_ParamLimits

0x24bc,	// (0x000105e4) cell_cale_month_pane

0xa372,	// (0x0001849a) cell_cale_month_pane_g1

0x2606,	// (0x0001072e) cell_cale_month_pane_t1_ParamLimits

0x2606,	// (0x0001072e) cell_cale_month_pane_t1

0x9fa7,	// (0x000180cf) grid_highlight_pane_cp08

0x9cea,	// (0x00017e12) main_smil_g1

0x2632,	// (0x0001075a) smil_status_pane

0xa37e,	// (0x000184a6) smil_text_pane

0xbcb9,	// (0x00019de1) bg_popup_call3_rect_pane_g8

0xbcc1,	// (0x00019de9) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001d610) bg_popup_call3_rect_pane_g

0xbed7,	// (0x00019fff) smil_status_volume_pane_g1

0xa388,	// (0x000184b0) smil_status_pane_t1

0xbf0a,	// (0x0001a032) volume_smil_pane

0xa39f,	// (0x000184c7) list_smil_text_pane

0x2647,	// (0x0001076f) scroll_pane_cp011

0x2652,	// (0x0001077a) smil_text_list_pane_t1_ParamLimits

0x2652,	// (0x0001077a) smil_text_list_pane_t1

0xa3a9,	// (0x000184d1) aid_volume_smil_ParamLimits

0xa3a9,	// (0x000184d1) aid_volume_smil

0x9cea,	// (0x00017e12) smil_volume_pane_g1

0x9cea,	// (0x00017e12) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0001d384) smil_volume_pane_g

0x0db2,	// (0x0000eeda) listscroll_cale_day_pane

0xa3cb,	// (0x000184f3) bg_cale_pane

0xa3e3,	// (0x0001850b) list_cale_pane

0xa406,	// (0x0001852e) scroll_pane_cp09

0xa417,	// (0x0001853f) cale_bg_pane_g1

0xa41f,	// (0x00018547) cale_bg_pane_g2

0xa427,	// (0x0001854f) cale_bg_pane_g3

0xa42f,	// (0x00018557) cale_bg_pane_g4

0xa437,	// (0x0001855f) cale_bg_pane_g5

0xa43f,	// (0x00018567) cale_bg_pane_g6

0xa447,	// (0x0001856f) cale_bg_pane_g7

0xa44f,	// (0x00018577) cale_bg_pane_g8

0xa457,	// (0x0001857f) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0001d389) cale_bg_pane_g

0x26a5,	// (0x000107cd) list_cale_time_pane_ParamLimits

0x26a5,	// (0x000107cd) list_cale_time_pane

0xa45f,	// (0x00018587) list_cale_time_pane_g1_ParamLimits

0xa45f,	// (0x00018587) list_cale_time_pane_g1

0xa46b,	// (0x00018593) list_cale_time_pane_g2_ParamLimits

0xa46b,	// (0x00018593) list_cale_time_pane_g2

0x26bf,	// (0x000107e7) list_cale_time_pane_g3_ParamLimits

0x26bf,	// (0x000107e7) list_cale_time_pane_g3

0x26cd,	// (0x000107f5) list_cale_time_pane_g4_ParamLimits

0x26cd,	// (0x000107f5) list_cale_time_pane_g4

0x26db,	// (0x00010803) list_cale_time_pane_g5_ParamLimits

0x26db,	// (0x00010803) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0001d39c) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0001d39c) list_cale_time_pane_g

0xa485,	// (0x000185ad) list_cale_time_pane_t1_ParamLimits

0xa485,	// (0x000185ad) list_cale_time_pane_t1

0xa4ad,	// (0x000185d5) list_cale_time_pane_t2_ParamLimits

0xa4ad,	// (0x000185d5) list_cale_time_pane_t2

0x298d,	// (0x00010ab5) aid_blid_cardinal_pane

0x29cf,	// (0x00010af7) compass_pane_t4

0xa4d5,	// (0x000185fd) list_cale_time_pane_t4_ParamLimits

0xa4d5,	// (0x000185fd) list_cale_time_pane_t4

0x29dd,	// (0x00010b05) compass_pane_t5

0x29ed,	// (0x00010b15) compass_pane_t6

0x29fb,	// (0x00010b23) compass_pane_t7

0xa962,	// (0x00018a8a) navi_pane_cc_t1

0xaac1,	// (0x00018be9) aid_phob_thumbnail_center_pane

0x2f73,	// (0x0001109b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0001d3a9) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0001d3a9) list_cale_time_pane_t

0x96ce,	// (0x000177f6) bg_popup_window_pane_cp02_ParamLimits

0x96ce,	// (0x000177f6) bg_popup_window_pane_cp02

0xa4fd,	// (0x00018625) heading_pane_cp01_ParamLimits

0xa4fd,	// (0x00018625) heading_pane_cp01

0xa509,	// (0x00018631) loc_req_pane_ParamLimits

0xa509,	// (0x00018631) loc_req_pane

0xa519,	// (0x00018641) loc_type_pane_ParamLimits

0xa519,	// (0x00018641) loc_type_pane

0xa52b,	// (0x00018653) loc_type_pane_t1_ParamLimits

0xa52b,	// (0x00018653) loc_type_pane_t1

0xa53d,	// (0x00018665) loc_type_pane_t2_ParamLimits

0xa53d,	// (0x00018665) loc_type_pane_t2

0xa54f,	// (0x00018677) loc_type_pane_t3_ParamLimits

0xa54f,	// (0x00018677) loc_type_pane_t3

0x0002,

0xf288,	// (0x0001d3b0) loc_type_pane_t_ParamLimits

0xf288,	// (0x0001d3b0) loc_type_pane_t

0xa561,	// (0x00018689) list_loc_req_pane

0xa56b,	// (0x00018693) scroll_pane_cp012

0x26e9,	// (0x00010811) list_single_loc_request_popup_menu_pane_ParamLimits

0x26e9,	// (0x00010811) list_single_loc_request_popup_menu_pane

0xa576,	// (0x0001869e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa576,	// (0x0001869e) list_single_loc_request_popup_menu_pane_g1

0xa582,	// (0x000186aa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa582,	// (0x000186aa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0001d3b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0001d3b7) list_single_loc_request_popup_menu_pane_g

0xa58e,	// (0x000186b6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa58e,	// (0x000186b6) list_single_loc_request_popup_menu_pane_t1

0x9cd2,	// (0x00017dfa) bg_popup_window_pane_cp03_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_window_pane_cp03

0xa5a4,	// (0x000186cc) heading_loc_req_pane_ParamLimits

0xa5a4,	// (0x000186cc) heading_loc_req_pane

0x26f6,	// (0x0001081e) popup_dyc_status_message_window_g1_ParamLimits

0x26f6,	// (0x0001081e) popup_dyc_status_message_window_g1

0x270a,	// (0x00010832) popup_dyc_status_message_window_t1_ParamLimits

0x270a,	// (0x00010832) popup_dyc_status_message_window_t1

0x271f,	// (0x00010847) popup_dyc_status_message_window_t2_ParamLimits

0x271f,	// (0x00010847) popup_dyc_status_message_window_t2

0x2734,	// (0x0001085c) popup_dyc_status_message_window_t3_ParamLimits

0x2734,	// (0x0001085c) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0001d3bc) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0001d3bc) popup_dyc_status_message_window_t

0x9a77,	// (0x00017b9f) bg_heading_pane_cp01

0xa5b0,	// (0x000186d8) heading_loc_req_pane_g1

0xa5b8,	// (0x000186e0) heading_loc_req_pane_g2

0xa5c0,	// (0x000186e8) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0001d3c3) heading_loc_req_pane_g

0xa5c8,	// (0x000186f0) heading_loc_req_pane_t1

0xa5e8,	// (0x00018710) bg_popup_sub_pane_cp01_ParamLimits

0xa5e8,	// (0x00018710) bg_popup_sub_pane_cp01

0xa5f6,	// (0x0001871e) popup_cale_events_window_g1_ParamLimits

0xa5f6,	// (0x0001871e) popup_cale_events_window_g1

0xa616,	// (0x0001873e) popup_cale_events_window_g2_ParamLimits

0xa616,	// (0x0001873e) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0001d3e5) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0001d3e5) popup_cale_events_window_g

0xa636,	// (0x0001875e) popup_cale_events_window_t1_ParamLimits

0xa636,	// (0x0001875e) popup_cale_events_window_t1

0xa648,	// (0x00018770) popup_cale_events_window_t2_ParamLimits

0xa648,	// (0x00018770) popup_cale_events_window_t2

0xa686,	// (0x000187ae) popup_cale_events_window_t3_ParamLimits

0xa686,	// (0x000187ae) popup_cale_events_window_t3

0xa6c0,	// (0x000187e8) popup_cale_events_window_t4_ParamLimits

0xa6c0,	// (0x000187e8) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0001d3ea) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0001d3ea) popup_cale_events_window_t

0x275c,	// (0x00010884) call_type_pane

0x276c,	// (0x00010894) popup_call_status_window_g1

0x2780,	// (0x000108a8) popup_call_status_window_g2

0x2794,	// (0x000108bc) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0001d3f3) popup_call_status_window_g

0xa6f6,	// (0x0001881e) call_type_pane_g1

0xa6ff,	// (0x00018827) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0001d3fa) call_type_pane_g

0x9a77,	// (0x00017b9f) bg_popup_sub_pane_cp02

0xa708,	// (0x00018830) listscroll_popup_wml_pane

0xa710,	// (0x00018838) list_wml_pane

0xa71a,	// (0x00018842) scroll_pane_cp013

0xa725,	// (0x0001884d) list_single_graphic_popup_wml_pane_ParamLimits

0xa725,	// (0x0001884d) list_single_graphic_popup_wml_pane

0x9cea,	// (0x00017e12) list_single_graphic_popup_wml_pane_g1

0xa739,	// (0x00018861) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0001d3ff) list_single_graphic_popup_wml_pane_g

0xa741,	// (0x00018869) list_single_graphic_popup_wml_pane_t1

0xa757,	// (0x0001887f) aid_call_pane

0x9cca,	// (0x00017df2) popup_clock_analogue_window_g1

0x9cca,	// (0x00017df2) popup_clock_analogue_window_g2

0xa75f,	// (0x00018887) popup_clock_analogue_window_g3

0xa75f,	// (0x00018887) popup_clock_analogue_window_g4

0x9cea,	// (0x00017e12) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0001d404) popup_clock_analogue_window_g

0xa767,	// (0x0001888f) popup_clock_analogue_window_t1

0xa775,	// (0x0001889d) clock_digital_number_pane_ParamLimits

0xa775,	// (0x0001889d) clock_digital_number_pane

0xa781,	// (0x000188a9) clock_digital_number_pane_cp02_ParamLimits

0xa781,	// (0x000188a9) clock_digital_number_pane_cp02

0xa78d,	// (0x000188b5) clock_digital_number_pane_cp03_ParamLimits

0xa78d,	// (0x000188b5) clock_digital_number_pane_cp03

0xa799,	// (0x000188c1) clock_digital_number_pane_cp04_ParamLimits

0xa799,	// (0x000188c1) clock_digital_number_pane_cp04

0xa7a5,	// (0x000188cd) clock_digital_separator_pane_ParamLimits

0xa7a5,	// (0x000188cd) clock_digital_separator_pane

0xa7b1,	// (0x000188d9) popup_clock_digital_window_t1

0x9cea,	// (0x00017e12) clock_digital_number_pane_g1

0x9cea,	// (0x00017e12) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0001d384) clock_digital_number_pane_g

0x9cea,	// (0x00017e12) clock_digital_separator_pane_g1

0x9cea,	// (0x00017e12) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0001d384) clock_digital_separator_pane_g

0x9a77,	// (0x00017b9f) bg_popup_window_pane_cp04

0xa7ce,	// (0x000188f6) heading_pane_cp03

0x9ff4,	// (0x0001811c) listscroll_popup_gms_pane

0x9a77,	// (0x00017b9f) grid_large_graphic_popup_pane

0xa7d7,	// (0x000188ff) listscroll_popup_gms_pane_g1

0xa7e0,	// (0x00018908) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0001d40f) listscroll_popup_gms_pane_g

0xa7e9,	// (0x00018911) scroll_pane_cp014

0x9d3f,	// (0x00017e67) cell_large_graphic_popup_pane_ParamLimits

0x9d3f,	// (0x00017e67) cell_large_graphic_popup_pane

0x9d4d,	// (0x00017e75) cell_large_graphic_popup_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) cell_large_graphic_popup_pane_g1

0xa7f2,	// (0x0001891a) cell_large_graphic_popup_pane_g2_ParamLimits

0xa7f2,	// (0x0001891a) cell_large_graphic_popup_pane_g2

0xa800,	// (0x00018928) cell_large_graphic_popup_pane_g3_ParamLimits

0xa800,	// (0x00018928) cell_large_graphic_popup_pane_g3

0xa80e,	// (0x00018936) cell_large_graphic_popup_pane_g4_ParamLimits

0xa80e,	// (0x00018936) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0001d414) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0001d414) cell_large_graphic_popup_pane_g

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp010

0x9cea,	// (0x00017e12) bg_popup_call_pane_g1

0xa81f,	// (0x00018947) list_single_graphic_popup_conf_pane_ParamLimits

0xa81f,	// (0x00018947) list_single_graphic_popup_conf_pane

0xa831,	// (0x00018959) list_highlight_pane_cp01

0xa83a,	// (0x00018962) list_single_graphic_popup_conf_pane_g1

0xa842,	// (0x0001896a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0001d41d) list_single_graphic_popup_conf_pane_g

0xa84a,	// (0x00018972) list_single_graphic_popup_conf_pane_t1

0xa858,	// (0x00018980) linegrid_cams_pane_g1

0x27a4,	// (0x000108cc) linegrid_cams_pane_g2

0x9fda,	// (0x00018102) linegrid_cams_pane_g3

0xa861,	// (0x00018989) linegrid_cams_pane_g4

0x27ad,	// (0x000108d5) linegrid_cams_pane_g5

0x27b6,	// (0x000108de) linegrid_cams_pane_g6

0x9fe3,	// (0x0001810b) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0001d422) linegrid_cams_pane_g

0xa86a,	// (0x00018992) popup_clock_analogue_window

0xa86a,	// (0x00018992) popup_clock_digital_window

0x9a77,	// (0x00017b9f) popup_phob_thumbnail_window

0x9cea,	// (0x00017e12) call_video_uplink_pane_g1

0xa873,	// (0x0001899b) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0001d431) call_video_uplink_pane_g

0xa87b,	// (0x000189a3) video_uplink_pane

0xa883,	// (0x000189ab) mce_image_pane_g1

0x27c1,	// (0x000108e9) mce_image_pane_g2

0x27cb,	// (0x000108f3) mce_image_pane_g3

0x27d5,	// (0x000108fd) mce_image_pane_g4

0x27dd,	// (0x00010905) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0001d436) mce_image_pane_g

0xa88d,	// (0x000189b5) control_top_pane_stacon_cp01_ParamLimits

0xa88d,	// (0x000189b5) control_top_pane_stacon_cp01

0xa8a1,	// (0x000189c9) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8a1,	// (0x000189c9) uni_indicator_pane_stacon_cp01

0xa8b2,	// (0x000189da) bg_popup_sub_pane_cp03

0x27e5,	// (0x0001090d) chi_dic_find_pane

0x27ed,	// (0x00010915) listscroll_chi_dic_pane

0x27f6,	// (0x0001091e) main_pane_chidic_g1

0x2809,	// (0x00010931) chi_dic_find_pane_t1

0xa8bc,	// (0x000189e4) find_chidic_pane

0xa8c5,	// (0x000189ed) chi_dic_list_pane_ParamLimits

0xa8c5,	// (0x000189ed) chi_dic_list_pane

0xa8d6,	// (0x000189fe) scroll_pane_cp020

0x2817,	// (0x0001093f) find_chidic_pane_t1

0x9a77,	// (0x00017b9f) input_focus_pane_cp06

0x2826,	// (0x0001094e) list_chi_dic_pane_ParamLimits

0x2826,	// (0x0001094e) list_chi_dic_pane

0x2838,	// (0x00010960) list_chi_dic_pane_t1_ParamLimits

0x2838,	// (0x00010960) list_chi_dic_pane_t1

0x9a77,	// (0x00017b9f) list_highlight_pane_cp020

0xa8de,	// (0x00018a06) bg_cale_heading_pane_g1

0x284b,	// (0x00010973) bg_cale_heading_pane_g2

0x2853,	// (0x0001097b) bg_cale_heading_pane_g3

0x285b,	// (0x00010983) bg_cale_heading_pane_g4

0x2865,	// (0x0001098d) bg_cale_heading_pane_g5

0x286f,	// (0x00010997) bg_cale_heading_pane_g6

0x2877,	// (0x0001099f) bg_cale_heading_pane_g7

0x287f,	// (0x000109a7) bg_cale_heading_pane_g8

0x2889,	// (0x000109b1) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0001d441) bg_cale_heading_pane_g

0xa8de,	// (0x00018a06) bg_cale_side_pane_g1

0x2893,	// (0x000109bb) bg_cale_side_pane_g2

0x289d,	// (0x000109c5) bg_cale_side_pane_g3

0x28a7,	// (0x000109cf) bg_cale_side_pane_g4

0x28b1,	// (0x000109d9) bg_cale_side_pane_g5

0x28bb,	// (0x000109e3) bg_cale_side_pane_g6

0x28c5,	// (0x000109ed) bg_cale_side_pane_g7

0x28cf,	// (0x000109f7) bg_cale_side_pane_g8

0x28d7,	// (0x000109ff) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0001d454) bg_cale_side_pane_g

0x28df,	// (0x00010a07) popup_call_status_window_ParamLimits

0x28df,	// (0x00010a07) popup_call_status_window

0xa8e6,	// (0x00018a0e) stacon_top_pane

0xa8ee,	// (0x00018a16) status_pane_ParamLimits

0xa8ee,	// (0x00018a16) status_pane

0xa903,	// (0x00018a2b) status_small_pane

0xa90b,	// (0x00018a33) control_pane

0x9a77,	// (0x00017b9f) stacon_bottom_pane

0xa913,	// (0x00018a3b) list_single_mce_smart_pane_t1_ParamLimits

0xa913,	// (0x00018a3b) list_single_mce_smart_pane_t1

0xa926,	// (0x00018a4e) list_single_mce_smart_pane_t2_ParamLimits

0xa926,	// (0x00018a4e) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0001d467) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0001d467) list_single_mce_smart_pane_t

0x292c,	// (0x00010a54) compass_pane

0x2937,	// (0x00010a5f) main_location2_pane_t1

0x294d,	// (0x00010a75) main_location2_pane_t2

0x2963,	// (0x00010a8b) main_location2_pane_t3

0x0003,

0xf344,	// (0x0001d46c) main_location2_pane_t

0xa945,	// (0x00018a6d) compass_pane_g1_ParamLimits

0xa945,	// (0x00018a6d) compass_pane_g1

0x29b1,	// (0x00010ad9) compass_pane_t1

0x29c0,	// (0x00010ae8) compass_pane_t2

0x0005,

0xf34d,	// (0x0001d475) compass_pane_t

0x2a0b,	// (0x00010b33) text_secondary_cp61

0xa959,	// (0x00018a81) navi_pane_cams_g5

0xa97c,	// (0x00018aa4) navi_pane_im_t1

0xa98a,	// (0x00018ab2) navi_pane_mp_g1_ParamLimits

0xa98a,	// (0x00018ab2) navi_pane_mp_g1

0xa99e,	// (0x00018ac6) navi_pane_mp_g2_ParamLimits

0xa99e,	// (0x00018ac6) navi_pane_mp_g2

0xa9aa,	// (0x00018ad2) navi_pane_mp_g3_ParamLimits

0xa9aa,	// (0x00018ad2) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0001d489) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0001d489) navi_pane_mp_g

0xa9b6,	// (0x00018ade) navi_pane_mp_t1

0xa9c4,	// (0x00018aec) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0001d490) navi_pane_mp_t

0xaa00,	// (0x00018b28) navi_pane_vt_g1

0xa9b6,	// (0x00018ade) navi_pane_vt_t1

0xaa08,	// (0x00018b30) navi_slider_pane

0x9ff4,	// (0x0001811c) zooming_pane

0xaa10,	// (0x00018b38) navi_slider_pane_g1

0xaa19,	// (0x00018b41) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0001d497) navi_slider_pane_g

0xaa46,	// (0x00018b6e) aid_levels_zoom

0xaa4e,	// (0x00018b76) zooming_pane_g1

0xaa56,	// (0x00018b7e) zooming_pane_g2

0xaa56,	// (0x00018b7e) zooming_pane_g3

0x0002,

0xf37e,	// (0x0001d4a6) zooming_pane_g

0xaa5e,	// (0x00018b86) level_10_zoom

0xaa67,	// (0x00018b8f) level_11_zoom

0xaa70,	// (0x00018b98) level_1_zoom

0xaa79,	// (0x00018ba1) level_2_zoom

0xaa82,	// (0x00018baa) level_3_zoom

0xaa8b,	// (0x00018bb3) level_4_zoom

0xaa94,	// (0x00018bbc) level_5_zoom

0xaa9d,	// (0x00018bc5) level_6_zoom

0xaaa6,	// (0x00018bce) level_7_zoom

0xaaaf,	// (0x00018bd7) level_8_zoom

0xaab8,	// (0x00018be0) level_9_zoom

0xaac9,	// (0x00018bf1) popup_phob_thumbnail_window_g1

0xaad1,	// (0x00018bf9) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0001d4ad) popup_phob_thumbnail_window_g

0x3670,	// (0x00011798) level_1_location

0x3678,	// (0x000117a0) level_2_location

0x3680,	// (0x000117a8) level_3_location

0x368a,	// (0x000117b2) level_4_location

0x9ff4,	// (0x0001811c) level_5_location

0x2b54,	// (0x00010c7c) mce_icon_pane_g1

0x2b5c,	// (0x00010c84) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0001d4b2) mce_icon_pane_g

0xaad9,	// (0x00018c01) main_mup_pane_g1_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g1

0xaad9,	// (0x00018c01) main_mup_pane_g2_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g2

0xaad9,	// (0x00018c01) main_mup_pane_g3_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g3

0xaad9,	// (0x00018c01) main_mup_pane_g4_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g4

0xaad9,	// (0x00018c01) main_mup_pane_g5_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g5

0xaad9,	// (0x00018c01) main_mup_pane_g6_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g6

0xaad9,	// (0x00018c01) main_mup_pane_g7_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g7

0xaad9,	// (0x00018c01) main_mup_pane_g8_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g8

0xaad9,	// (0x00018c01) main_mup_pane_g9_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g9

0xaad9,	// (0x00018c01) main_mup_pane_g10_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g10

0xaad9,	// (0x00018c01) main_mup_pane_g11_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g11

0x9d4d,	// (0x00017e75) main_mup_pane_g12_ParamLimits

0x9d4d,	// (0x00017e75) main_mup_pane_g12

0xaad9,	// (0x00018c01) main_mup_pane_g13_ParamLimits

0xaad9,	// (0x00018c01) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0001d4b7) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0001d4b7) main_mup_pane_g

0xaae7,	// (0x00018c0f) main_mup_pane_t1_ParamLimits

0xaae7,	// (0x00018c0f) main_mup_pane_t1

0xaae7,	// (0x00018c0f) main_mup_pane_t2_ParamLimits

0xaae7,	// (0x00018c0f) main_mup_pane_t2

0xaae7,	// (0x00018c0f) main_mup_pane_t3_ParamLimits

0xaae7,	// (0x00018c0f) main_mup_pane_t3

0xa01b,	// (0x00018143) main_mup_pane_t4_ParamLimits

0xa01b,	// (0x00018143) main_mup_pane_t4

0xa01b,	// (0x00018143) main_mup_pane_t5_ParamLimits

0xa01b,	// (0x00018143) main_mup_pane_t5

0xaafb,	// (0x00018c23) main_mup_pane_t6_ParamLimits

0xaafb,	// (0x00018c23) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0001d4d2) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0001d4d2) main_mup_pane_t

0x9d3f,	// (0x00017e67) mup_progress_pane_ParamLimits

0x9d3f,	// (0x00017e67) mup_progress_pane

0xab0f,	// (0x00018c37) mup_visualizer_pane_ParamLimits

0xab0f,	// (0x00018c37) mup_visualizer_pane

0xab0f,	// (0x00018c37) mup_volume_pane_ParamLimits

0xab0f,	// (0x00018c37) mup_volume_pane

0x9d5b,	// (0x00017e83) mup_visualizer_pane_g1_ParamLimits

0x9d5b,	// (0x00017e83) mup_visualizer_pane_g1

0xab1d,	// (0x00018c45) mup_visualizer_pane_g2_ParamLimits

0xab1d,	// (0x00018c45) mup_visualizer_pane_g2

0x9d4d,	// (0x00017e75) mup_visualizer_pane_g3_ParamLimits

0x9d4d,	// (0x00017e75) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0001d4df) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0001d4df) mup_visualizer_pane_g

0xa049,	// (0x00018171) mup_volume_pane_g1

0xa049,	// (0x00018171) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) mup_volume_pane_g

0xa049,	// (0x00018171) mup_progress_pane_g1

0xa049,	// (0x00018171) mup_progress_pane_g2

0xa049,	// (0x00018171) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0001d4eb) mup_progress_pane_g

0x9a77,	// (0x00017b9f) bg_popup_window_pane_cp05

0xab2b,	// (0x00018c53) heading_pane_cp02_ParamLimits

0xab2b,	// (0x00018c53) heading_pane_cp02

0xab47,	// (0x00018c6f) list_popup_blid_pane

0xab4f,	// (0x00018c77) list_blid_sat_info_pane_ParamLimits

0xab4f,	// (0x00018c77) list_blid_sat_info_pane

0xab62,	// (0x00018c8a) list_blid_sat_info_pane_g1

0xab6a,	// (0x00018c92) list_blid_sat_info_pane_t1

0x2c70,	// (0x00010d98) mup_equalizer_pane_ParamLimits

0x2c70,	// (0x00010d98) mup_equalizer_pane

0x2c91,	// (0x00010db9) mup_equalizer_pane_cp1_ParamLimits

0x2c91,	// (0x00010db9) mup_equalizer_pane_cp1

0x2cb2,	// (0x00010dda) mup_equalizer_pane_cp2_ParamLimits

0x2cb2,	// (0x00010dda) mup_equalizer_pane_cp2

0x2cd7,	// (0x00010dff) mup_equalizer_pane_cp3_ParamLimits

0x2cd7,	// (0x00010dff) mup_equalizer_pane_cp3

0x2d00,	// (0x00010e28) mup_equalizer_pane_cp4_ParamLimits

0x2d00,	// (0x00010e28) mup_equalizer_pane_cp4

0x2d29,	// (0x00010e51) mup_equalizer_pane_cp5

0x2d41,	// (0x00010e69) mup_equalizer_pane_cp6

0x2d59,	// (0x00010e81) mup_equalizer_pane_cp7

0xbd39,	// (0x00019e61) bg_popup_call_poc_act_pane_g9

0xbd41,	// (0x00019e69) bg_popup_call_poc_act_pane_g10

0xbd49,	// (0x00019e71) bg_popup_call_poc_act_pane_g11

0x000a,

0x9cd2,	// (0x00017dfa) mup_scale_pane

0x9cea,	// (0x00017e12) mup_scale_pane_g1

0xab78,	// (0x00018ca0) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0001d507) mup_scale_pane_g

0xab9c,	// (0x00018cc4) msg_data_pane

0xaba4,	// (0x00018ccc) scroll_pane_cp017

0x2d83,	// (0x00010eab) bg_list_pane_cp04_ParamLimits

0x2d83,	// (0x00010eab) bg_list_pane_cp04

0xabb4,	// (0x00018cdc) msg_data_pane_g1

0x2da3,	// (0x00010ecb) msg_data_pane_g2

0x2dad,	// (0x00010ed5) msg_data_pane_g3

0x2db7,	// (0x00010edf) msg_data_pane_g4

0x2dbf,	// (0x00010ee7) msg_data_pane_g5

0x2dc7,	// (0x00010eef) msg_data_pane_g6

0x2dcf,	// (0x00010ef7) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0001d516) msg_data_pane_g

0x2dd7,	// (0x00010eff) msg_text_pane_ParamLimits

0x2dd7,	// (0x00010eff) msg_text_pane

0x2e0b,	// (0x00010f33) qrid_highlight_pane_cp011_ParamLimits

0x2e0b,	// (0x00010f33) qrid_highlight_pane_cp011

0x9a77,	// (0x00017b9f) msg_body_pane

0x9a77,	// (0x00017b9f) msg_header_pane

0xabc5,	// (0x00018ced) input_focus_pane_cp07

0x2e2f,	// (0x00010f57) msg_header_pane_t1_ParamLimits

0x2e2f,	// (0x00010f57) msg_header_pane_t1

0x2e45,	// (0x00010f6d) msg_header_pane_t2_ParamLimits

0x2e45,	// (0x00010f6d) msg_header_pane_t2

0x0001,

0xf402,	// (0x0001d52a) msg_header_pane_t_ParamLimits

0xf402,	// (0x0001d52a) msg_header_pane_t

0xabda,	// (0x00018d02) msg_body_pane_g1

0x2e5c,	// (0x00010f84) msg_body_pane_t1_ParamLimits

0x2e5c,	// (0x00010f84) msg_body_pane_t1

0xabe2,	// (0x00018d0a) msg_body_pane_t2_ParamLimits

0xabe2,	// (0x00018d0a) msg_body_pane_t2

0xabf4,	// (0x00018d1c) msg_body_pane_t3_ParamLimits

0xabf4,	// (0x00018d1c) msg_body_pane_t3

0x0002,

0xf407,	// (0x0001d52f) msg_body_pane_t_ParamLimits

0xf407,	// (0x0001d52f) msg_body_pane_t

0x2ec7,	// (0x00010fef) main_viewer_pane_g1_ParamLimits

0x2ec7,	// (0x00010fef) main_viewer_pane_g1

0x2ed5,	// (0x00010ffd) main_viewer_pane_g2_ParamLimits

0x2ed5,	// (0x00010ffd) main_viewer_pane_g2

0x2ee3,	// (0x0001100b) main_viewer_pane_g3_ParamLimits

0x2ee3,	// (0x0001100b) main_viewer_pane_g3

0x2ef2,	// (0x0001101a) main_viewer_pane_g4_ParamLimits

0x2ef2,	// (0x0001101a) main_viewer_pane_g4

0xac1e,	// (0x00018d46) main_viewer_pane_g5_ParamLimits

0xac1e,	// (0x00018d46) main_viewer_pane_g5

0xac1e,	// (0x00018d46) main_viewer_pane_g7_ParamLimits

0xac1e,	// (0x00018d46) main_viewer_pane_g7

0xac30,	// (0x00018d58) main_viewer_pane_g8_ParamLimits

0xac30,	// (0x00018d58) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0001d53f) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0001d53f) main_viewer_pane_g

0xac48,	// (0x00018d70) viewer_content_pane_ParamLimits

0xac48,	// (0x00018d70) viewer_content_pane

0x2f30,	// (0x00011058) main_postcard_pane_g1_ParamLimits

0x2f30,	// (0x00011058) main_postcard_pane_g1

0x2f46,	// (0x0001106e) main_postcard_pane_g2_ParamLimits

0x2f46,	// (0x0001106e) main_postcard_pane_g2

0x2f5c,	// (0x00011084) main_postcard_pane_g3_ParamLimits

0x2f5c,	// (0x00011084) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0001d550) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0001d550) main_postcard_pane_g

0x2f73,	// (0x0001109b) main_postcard_pane_g4

0xbeea,	// (0x0001a012) smil_status_volume_pane_g2

0x2fb6,	// (0x000110de) postcard_pane_ParamLimits

0x2fb6,	// (0x000110de) postcard_pane

0xac56,	// (0x00018d7e) postcard_pane_g1_ParamLimits

0xac56,	// (0x00018d7e) postcard_pane_g1

0x3006,	// (0x0001112e) postcard_pane_g2_ParamLimits

0x3006,	// (0x0001112e) postcard_pane_g2

0x3012,	// (0x0001113a) postcard_pane_g3_ParamLimits

0x3012,	// (0x0001113a) postcard_pane_g3

0xac64,	// (0x00018d8c) postcard_pane_g4_ParamLimits

0xac64,	// (0x00018d8c) postcard_pane_g4

0x301e,	// (0x00011146) postcard_pane_g5_ParamLimits

0x301e,	// (0x00011146) postcard_pane_g5

0x3033,	// (0x0001115b) postcard_pane_g6_ParamLimits

0x3033,	// (0x0001115b) postcard_pane_g6

0xac56,	// (0x00018d7e) postcard_pane_g7_ParamLimits

0xac56,	// (0x00018d7e) postcard_pane_g7

0x0006,

0xf435,	// (0x0001d55d) postcard_pane_g_ParamLimits

0xf435,	// (0x0001d55d) postcard_pane_g

0x304b,	// (0x00011173) main_mp2_pane_g1_ParamLimits

0x304b,	// (0x00011173) main_mp2_pane_g1

0x3059,	// (0x00011181) main_mp2_pane_g2_ParamLimits

0x3059,	// (0x00011181) main_mp2_pane_g2

0x3065,	// (0x0001118d) main_mp2_pane_g3_ParamLimits

0x3065,	// (0x0001118d) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0001d56c) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0001d56c) main_mp2_pane_g

0x3071,	// (0x00011199) main_mp2_pane_t1_ParamLimits

0x3071,	// (0x00011199) main_mp2_pane_t1

0x3088,	// (0x000111b0) main_mp2_pane_t2_ParamLimits

0x3088,	// (0x000111b0) main_mp2_pane_t2

0x309c,	// (0x000111c4) main_mp2_pane_t3_ParamLimits

0x309c,	// (0x000111c4) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0001d573) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0001d573) main_mp2_pane_t

0xac72,	// (0x00018d9a) pec_content_pane_ParamLimits

0xac72,	// (0x00018d9a) pec_content_pane

0xa1ae,	// (0x000182d6) scroll_pane_cp015

0xac84,	// (0x00018dac) pec_attribute_pane_ParamLimits

0xac84,	// (0x00018dac) pec_attribute_pane

0x30ae,	// (0x000111d6) pec_content_pane_g1_ParamLimits

0x30ae,	// (0x000111d6) pec_content_pane_g1

0xac94,	// (0x00018dbc) pec_content_pane_t1_ParamLimits

0xac94,	// (0x00018dbc) pec_content_pane_t1

0xaca6,	// (0x00018dce) pec_content_pane_t2_ParamLimits

0xaca6,	// (0x00018dce) pec_content_pane_t2

0x0001,

0xf452,	// (0x0001d57a) pec_content_pane_t_ParamLimits

0xf452,	// (0x0001d57a) pec_content_pane_t

0x30ba,	// (0x000111e2) list_single_graphic_pane_cp01_ParamLimits

0x30ba,	// (0x000111e2) list_single_graphic_pane_cp01

0x9cd2,	// (0x00017dfa) bg_popup_sub_pane_cp04

0xacb8,	// (0x00018de0) popup_mup_playback_window_g1

0xacc4,	// (0x00018dec) popup_mup_playback_window_t1

0xacd9,	// (0x00018e01) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0001d57f) popup_mup_playback_window_t

0xad10,	// (0x00018e38) main_image_pane_g1_ParamLimits

0xad10,	// (0x00018e38) main_image_pane_g1

0xad53,	// (0x00018e7b) scroll_pane_cp018_ParamLimits

0xad53,	// (0x00018e7b) scroll_pane_cp018

0xad6b,	// (0x00018e93) scroll_pane_cp016_ParamLimits

0xad6b,	// (0x00018e93) scroll_pane_cp016

0x318c,	// (0x000112b4) smil2_image_pane_ParamLimits

0x318c,	// (0x000112b4) smil2_image_pane

0x31c2,	// (0x000112ea) smil2_root_pane_ParamLimits

0x31c2,	// (0x000112ea) smil2_root_pane

0x31fa,	// (0x00011322) smil2_text_pane_ParamLimits

0x31fa,	// (0x00011322) smil2_text_pane

0x9a77,	// (0x00017b9f) bg_list_pane_cp06

0xada7,	// (0x00018ecf) grid_radio_pane

0x9a77,	// (0x00017b9f) bg_popup_window_pane_cp06

0xadb1,	// (0x00018ed9) main_fmradio_pane_t1

0xbd51,	// (0x00019e79) heading_pane_cp04

0xadbf,	// (0x00018ee7) main_fmradio_pane_t2

0xbd59,	// (0x00019e81) popup_cale_lunar_info_window_g1

0xadcd,	// (0x00018ef5) main_fmradio_pane_t3

0xbd61,	// (0x00019e89) popup_cale_lunar_info_window_g2

0xaddd,	// (0x00018f05) main_fmradio_pane_t4

0x0001,

0xadeb,	// (0x00018f13) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x0001d65f) popup_cale_lunar_info_window_g

0xf46c,	// (0x0001d594) main_fmradio_pane_t

0xadf9,	// (0x00018f21) wait_bar_pane_cp03

0xae01,	// (0x00018f29) cell_fmradio_pane_ParamLimits

0xae01,	// (0x00018f29) cell_fmradio_pane

0xac56,	// (0x00018d7e) cell_fmradio_pane_g1_ParamLimits

0xac56,	// (0x00018d7e) cell_fmradio_pane_g1

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp011

0xae16,	// (0x00018f3e) poc_content_pane_ParamLimits

0xae16,	// (0x00018f3e) poc_content_pane

0xae28,	// (0x00018f50) scroll_pane_cp019

0x328a,	// (0x000113b2) popup_call_poc_act_window_ParamLimits

0x328a,	// (0x000113b2) popup_call_poc_act_window

0x32ae,	// (0x000113d6) popup_call_poc_inact_window_ParamLimits

0x32ae,	// (0x000113d6) popup_call_poc_inact_window

0xf50e,	// (0x0001d636) bg_popup_call_poc_act_pane_g

0xbcc9,	// (0x00019df1) bg_popup_call_poc_inact_pane_g1

0xbcd1,	// (0x00019df9) bg_popup_call_poc_inact_pane_g2

0xae30,	// (0x00018f58) popup_call_poc_act_window_g2

0xbcd9,	// (0x00019e01) bg_popup_call_poc_inact_pane_g3

0xbce1,	// (0x00019e09) bg_popup_call_poc_inact_pane_g4

0xbce9,	// (0x00019e11) bg_popup_call_poc_inact_pane_g5

0xae38,	// (0x00018f60) popup_call_poc_act_window_t1_ParamLimits

0xae38,	// (0x00018f60) popup_call_poc_act_window_t1

0xae60,	// (0x00018f88) popup_call_poc_act_window_t2_ParamLimits

0xae60,	// (0x00018f88) popup_call_poc_act_window_t2

0xae88,	// (0x00018fb0) popup_call_poc_act_window_t3_ParamLimits

0xae88,	// (0x00018fb0) popup_call_poc_act_window_t3

0xaeb0,	// (0x00018fd8) popup_call_poc_act_window_t4_ParamLimits

0xaeb0,	// (0x00018fd8) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0001d59f) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0001d59f) popup_call_poc_act_window_t

0xbcf1,	// (0x00019e19) bg_popup_call_poc_inact_pane_g6

0xbcf9,	// (0x00019e21) bg_popup_call_poc_inact_pane_g7

0xbd01,	// (0x00019e29) bg_popup_call_poc_inact_pane_g8

0xaec2,	// (0x00018fea) popup_call_poc_inact_window_g2

0xbd09,	// (0x00019e31) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x0001d623) bg_popup_call_poc_inact_pane_g

0xaeca,	// (0x00018ff2) popup_call_poc_inact_window_t1_ParamLimits

0xaeca,	// (0x00018ff2) popup_call_poc_inact_window_t1

0xaedf,	// (0x00019007) popup_call_poc_inact_window_t2_ParamLimits

0xaedf,	// (0x00019007) popup_call_poc_inact_window_t2

0xaef4,	// (0x0001901c) popup_call_poc_inact_window_t3_ParamLimits

0xaef4,	// (0x0001901c) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0001d5a8) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0001d5a8) popup_call_poc_inact_window_t

0xbe4f,	// (0x00019f77) context_pane_ParamLimits

0x3b8d,	// (0x00011cb5) signal_pane_ParamLimits

0x9ff4,	// (0x0001811c) main_call2_pane

0xbe28,	// (0x00019f50) popup_phob_thumbnail2_window_ParamLimits

0xbe28,	// (0x00019f50) popup_phob_thumbnail2_window

0xac06,	// (0x00018d2e) aid_hotspot_pointer_arrow_pane

0xac0e,	// (0x00018d36) aid_hotspot_pointer_hand_pane

0x3638,	// (0x00011760) phob_pre_status_pane_g5

0x9621,	// (0x00017749) cams_zoom_pane_ParamLimits

0x9621,	// (0x00017749) image_vga_pane_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g2_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g3_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g4_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g5_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g6_ParamLimits

0x9d4d,	// (0x00017e75) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0001d2d3) main_camera_pane_g_ParamLimits

0xa01b,	// (0x00018143) main_camera_pane_t1_ParamLimits

0xa01b,	// (0x00018143) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0001d2e4) main_camera_pane_t_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_preview_window_pane_cp01_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_preview_window_pane_cp01

0xaf09,	// (0x00019031) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf09,	// (0x00019031) popup_phob_thumbnail2_window_g1

0x9a77,	// (0x00017b9f) call2_cli_visual_pane

0x32e2,	// (0x0001140a) popup_call2_audio_conf_window_ParamLimits

0x32e2,	// (0x0001140a) popup_call2_audio_conf_window

0x330a,	// (0x00011432) popup_call2_audio_first_window_ParamLimits

0x330a,	// (0x00011432) popup_call2_audio_first_window

0x33a0,	// (0x000114c8) popup_call2_audio_in_window_ParamLimits

0x33a0,	// (0x000114c8) popup_call2_audio_in_window

0x33ec,	// (0x00011514) popup_call2_audio_out_window_ParamLimits

0x33ec,	// (0x00011514) popup_call2_audio_out_window

0x345e,	// (0x00011586) popup_call2_audio_second_window_ParamLimits

0x345e,	// (0x00011586) popup_call2_audio_second_window

0x34c4,	// (0x000115ec) popup_call2_audio_wait_window_ParamLimits

0x34c4,	// (0x000115ec) popup_call2_audio_wait_window

0x9a77,	// (0x00017b9f) bg_popup_call2_act_pane_cp03

0x9cb4,	// (0x00017ddc) list_conf_pane_cp

0xaf15,	// (0x0001903d) popup_call2_audio_conf_window_t1

0xaf23,	// (0x0001904b) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf23,	// (0x0001904b) list_single_graphic_popup_conf2_pane

0xa831,	// (0x00018959) list_highlight_pane_cp04

0xaf36,	// (0x0001905e) list_single_graphic_popup_conf2_pane_g1

0xa842,	// (0x0001896a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0001d5af) list_single_graphic_popup_conf2_pane_g

0xaf40,	// (0x00019068) list_single_graphic_popup_conf2_pane_t1

0xaf4e,	// (0x00019076) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf4e,	// (0x00019076) bg_popup_call2_act_pane_cp01

0xafd8,	// (0x00019100) call_type_pane_cp05_ParamLimits

0xafd8,	// (0x00019100) call_type_pane_cp05

0xb02c,	// (0x00019154) popup_call2_audio_second_window_g1_ParamLimits

0xb02c,	// (0x00019154) popup_call2_audio_second_window_g1

0xb080,	// (0x000191a8) popup_call2_audio_second_window_g2_ParamLimits

0xb080,	// (0x000191a8) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0001d5b4) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0001d5b4) popup_call2_audio_second_window_g

0xb0e5,	// (0x0001920d) popup_call2_audio_second_window_t1_ParamLimits

0xb0e5,	// (0x0001920d) popup_call2_audio_second_window_t1

0xb1a0,	// (0x000192c8) popup_call2_audio_second_window_t2_ParamLimits

0xb1a0,	// (0x000192c8) popup_call2_audio_second_window_t2

0xb1f3,	// (0x0001931b) popup_call2_audio_second_window_t3_ParamLimits

0xb1f3,	// (0x0001931b) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0001d5bb) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0001d5bb) popup_call2_audio_second_window_t

0x9a77,	// (0x00017b9f) bg_popup_call2_in_pane_cp02

0x9a81,	// (0x00017ba9) call_type_pane_cp04

0x34fe,	// (0x00011626) popup_call2_audio_wait_window_g1

0x3506,	// (0x0001162e) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0001d5c4) popup_call2_audio_wait_window_g

0x9a99,	// (0x00017bc1) popup_call2_audio_wait_window_t3

0xb2e6,	// (0x0001940e) bg_popup_call2_act_pane_ParamLimits

0xb2e6,	// (0x0001940e) bg_popup_call2_act_pane

0xb3a6,	// (0x000194ce) call_type_pane_cp03_ParamLimits

0xb3a6,	// (0x000194ce) call_type_pane_cp03

0xb40a,	// (0x00019532) popup_call2_audio_first_window_g1_ParamLimits

0xb40a,	// (0x00019532) popup_call2_audio_first_window_g1

0xb47a,	// (0x000195a2) popup_call2_audio_first_window_g2_ParamLimits

0xb47a,	// (0x000195a2) popup_call2_audio_first_window_g2

0xb4de,	// (0x00019606) popup_call2_audio_first_window_g3_ParamLimits

0xb4de,	// (0x00019606) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0001d5c9) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0001d5c9) popup_call2_audio_first_window_g

0xb566,	// (0x0001968e) popup_call2_audio_first_window_t1_ParamLimits

0xb566,	// (0x0001968e) popup_call2_audio_first_window_t1

0xb669,	// (0x00019791) popup_call2_audio_first_window_t4_ParamLimits

0xb669,	// (0x00019791) popup_call2_audio_first_window_t4

0xb74c,	// (0x00019874) popup_call2_audio_first_window_t5_ParamLimits

0xb74c,	// (0x00019874) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0001d5d4) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0001d5d4) popup_call2_audio_first_window_t

0x9cca,	// (0x00017df2) bg_popup_call2_act_pane_g1

0xbd6b,	// (0x00019e93) popup_cale_lunar_info_window_t1

0xbd79,	// (0x00019ea1) popup_cale_lunar_info_window_t2

0xbd87,	// (0x00019eaf) popup_cale_lunar_info_window_t3

0x9a77,	// (0x00017b9f) bg_popup_call2_bubble_pane

0xb84d,	// (0x00019975) bg_popup_call2_in_pane_cp01_ParamLimits

0xb84d,	// (0x00019975) bg_popup_call2_in_pane_cp01

0x9753,	// (0x0001787b) call_type_pane_cp02

0x350e,	// (0x00011636) popup_call2_audio_out_window_g1_ParamLimits

0x350e,	// (0x00011636) popup_call2_audio_out_window_g1

0xb895,	// (0x000199bd) popup_call2_audio_out_window_g2_ParamLimits

0xb895,	// (0x000199bd) popup_call2_audio_out_window_g2

0x353a,	// (0x00011662) popup_call2_audio_out_window_g3_ParamLimits

0x353a,	// (0x00011662) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0001d5dd) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0001d5dd) popup_call2_audio_out_window_g

0xb8cc,	// (0x000199f4) popup_call2_audio_out_window_t1_ParamLimits

0xb8cc,	// (0x000199f4) popup_call2_audio_out_window_t1

0xb92b,	// (0x00019a53) popup_call2_audio_out_window_t2_ParamLimits

0xb92b,	// (0x00019a53) popup_call2_audio_out_window_t2

0xb97f,	// (0x00019aa7) popup_call2_audio_out_window_t3_ParamLimits

0xb97f,	// (0x00019aa7) popup_call2_audio_out_window_t3

0xb995,	// (0x00019abd) popup_call2_audio_out_window_t4_ParamLimits

0xb995,	// (0x00019abd) popup_call2_audio_out_window_t4

0xb9ab,	// (0x00019ad3) popup_call2_audio_out_window_t5_ParamLimits

0xb9ab,	// (0x00019ad3) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0001d5e6) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0001d5e6) popup_call2_audio_out_window_t

0xba0f,	// (0x00019b37) bg_popup_call2_in_pane_ParamLimits

0xba0f,	// (0x00019b37) bg_popup_call2_in_pane

0xba6b,	// (0x00019b93) popup_call2_audio_in_window_g1_ParamLimits

0xba6b,	// (0x00019b93) popup_call2_audio_in_window_g1

0xbaa3,	// (0x00019bcb) popup_call2_audio_in_window_g2_ParamLimits

0xbaa3,	// (0x00019bcb) popup_call2_audio_in_window_g2

0xbadb,	// (0x00019c03) popup_call2_audio_in_window_g3_ParamLimits

0xbadb,	// (0x00019c03) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0001d5f3) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0001d5f3) popup_call2_audio_in_window_g

0xbb33,	// (0x00019c5b) popup_call2_audio_in_window_t1_ParamLimits

0xbb33,	// (0x00019c5b) popup_call2_audio_in_window_t1

0xbbb3,	// (0x00019cdb) popup_call2_audio_in_window_t2_ParamLimits

0xbbb3,	// (0x00019cdb) popup_call2_audio_in_window_t2

0xbc33,	// (0x00019d5b) popup_call2_audio_in_window_t3_ParamLimits

0xbc33,	// (0x00019d5b) popup_call2_audio_in_window_t3

0xbc4d,	// (0x00019d75) popup_call2_audio_in_window_t4_ParamLimits

0xbc4d,	// (0x00019d75) popup_call2_audio_in_window_t4

0xbc5f,	// (0x00019d87) popup_call2_audio_in_window_t5_ParamLimits

0xbc5f,	// (0x00019d87) popup_call2_audio_in_window_t5

0xbc74,	// (0x00019d9c) popup_call2_audio_in_window_t6_ParamLimits

0xbc74,	// (0x00019d9c) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0001d5fc) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0001d5fc) popup_call2_audio_in_window_t

0x9cca,	// (0x00017df2) bg_popup_call2_in_pane_g1

0xbd95,	// (0x00019ebd) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x0001d664) popup_cale_lunar_info_window_t

0x9cd2,	// (0x00017dfa) bg_popup_call2_rect_pane_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_call2_rect_pane

0x9a77,	// (0x00017b9f) call2_cli_visual_graphic_pane

0x9a77,	// (0x00017b9f) call2_cli_visual_text_pane

0xbefd,	// (0x0001a025) smil_status_volume_pane_g3

0x0002,

0x9cea,	// (0x00017e12) call2_cli_visual_graphic_pane_g1

0x9cea,	// (0x00017e12) call2_cli_visual_graphic_pane_g2

0x9cea,	// (0x00017e12) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0001d609) call2_cli_visual_graphic_pane_g

0xbc89,	// (0x00019db1) bg_popup_call2_rect_pane_g1

0x9ee5,	// (0x0001800d) bg_popup_call2_rect_pane_g2

0xbc91,	// (0x00019db9) bg_popup_call2_rect_pane_g3

0xbc99,	// (0x00019dc1) bg_popup_call2_rect_pane_g4

0xbca1,	// (0x00019dc9) bg_popup_call2_rect_pane_g5

0xbca9,	// (0x00019dd1) bg_popup_call2_rect_pane_g6

0xbcb1,	// (0x00019dd9) bg_popup_call2_rect_pane_g7

0xbcb9,	// (0x00019de1) bg_popup_call2_rect_pane_g8

0xbcc1,	// (0x00019de9) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0001d610) bg_popup_call2_rect_pane_g

0xbcc9,	// (0x00019df1) bg_popup_call2_bubble_pane_g1

0xbcd1,	// (0x00019df9) bg_popup_call2_bubble_pane_g2

0xbcd9,	// (0x00019e01) bg_popup_call2_bubble_pane_g3

0xbce1,	// (0x00019e09) bg_popup_call2_bubble_pane_g4

0xbce9,	// (0x00019e11) bg_popup_call2_bubble_pane_g5

0xbcf1,	// (0x00019e19) bg_popup_call2_bubble_pane_g6

0xbcf9,	// (0x00019e21) bg_popup_call2_bubble_pane_g7

0xbd01,	// (0x00019e29) bg_popup_call2_bubble_pane_g8

0xbd09,	// (0x00019e31) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0001d623) bg_popup_call2_bubble_pane_g

0x0dc2,	// (0x0000eeea) aid_cale_week_size_cell_pane

0x13f1,	// (0x0000f519) aid_cams_cif_uncrop_pane_ParamLimits

0x13f1,	// (0x0000f519) aid_cams_cif_uncrop_pane

0x1547,	// (0x0000f66f) aid_cams_size_cell_ParamLimits

0x1547,	// (0x0000f66f) aid_cams_size_cell

0x155b,	// (0x0000f683) grid_cams_pane_ParamLimits

0x1575,	// (0x0000f69d) linegrid_cams_pane_ParamLimits

0x1653,	// (0x0000f77b) call_video_pane_t1

0x166d,	// (0x0000f795) call_video_pane_t2

0x0001,

0xf208,	// (0x0001d330) call_video_pane_t

0x1a71,	// (0x0000fb99) aid_cale_month_size_cell_pane_ParamLimits

0x1a71,	// (0x0000fb99) aid_cale_month_size_cell_pane

0xf580,	// (0x0001d6a8) smil_status_volume_pane_g

0xbf0a,	// (0x0001a032) volume_smil_pane_ParamLimits

0x95be,	// (0x000176e6) aid_popup2_width_pane

0x0d15,	// (0x0000ee3d) cell_qdial_pane_g4_ParamLimits

0x0d15,	// (0x0000ee3d) cell_qdial_pane_g4

0x298d,	// (0x00010ab5) aid_blid_cardinal_pane_ParamLimits

0x299d,	// (0x00010ac5) aid_blid_destination_pane_ParamLimits

0x299d,	// (0x00010ac5) aid_blid_destination_pane

0x9cd2,	// (0x00017dfa) bg_popup_call_poc_act_pane_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_call_poc_act_pane

0x9cd2,	// (0x00017dfa) bg_popup_call_poc_inact_pane_ParamLimits

0x9cd2,	// (0x00017dfa) bg_popup_call_poc_inact_pane

0xbd11,	// (0x00019e39) bg_popup_call_poc_act_pane_g1

0xbd19,	// (0x00019e41) bg_popup_call_poc_act_pane_g2

0xbd21,	// (0x00019e49) bg_popup_call_poc_act_pane_g3

0xbce1,	// (0x00019e09) bg_popup_call_poc_act_pane_g4

0xbce9,	// (0x00019e11) bg_popup_call_poc_act_pane_g5

0xbd29,	// (0x00019e51) bg_popup_call_poc_act_pane_g6

0xbcf9,	// (0x00019e21) bg_popup_call_poc_act_pane_g7

0xbd31,	// (0x00019e59) bg_popup_call_poc_act_pane_g8

0x9a77,	// (0x00017b9f) main_usb_pane

0xbdff,	// (0x00019f27) popup_cale_lunar_info_window

0x193a,	// (0x0000fa62) im_reading_pane_t1_ParamLimits

0xa106,	// (0x0001822e) list_im_pane_ParamLimits

0xa117,	// (0x0001823f) scroll_pane_cp07_ParamLimits

0x9a77,	// (0x00017b9f) grid_highlight_pane_cp012

0x9cd2,	// (0x00017dfa) mup_scale_pane_ParamLimits

0xac56,	// (0x00018d7e) main_usb_pane_g1_ParamLimits

0xac56,	// (0x00018d7e) main_usb_pane_g1

0x358d,	// (0x000116b5) main_usb_pane_g2_ParamLimits

0x358d,	// (0x000116b5) main_usb_pane_g2

0x0001,

0xf525,	// (0x0001d64d) main_usb_pane_g_ParamLimits

0xf525,	// (0x0001d64d) main_usb_pane_g

0x35a3,	// (0x000116cb) main_usb_pane_t1_ParamLimits

0x35a3,	// (0x000116cb) main_usb_pane_t1

0x35b5,	// (0x000116dd) main_usb_pane_t2_ParamLimits

0x35b5,	// (0x000116dd) main_usb_pane_t2

0x35c7,	// (0x000116ef) main_usb_pane_t3_ParamLimits

0x35c7,	// (0x000116ef) main_usb_pane_t3

0x35d9,	// (0x00011701) main_usb_pane_t4_ParamLimits

0x35d9,	// (0x00011701) main_usb_pane_t4

0x35ee,	// (0x00011716) main_usb_pane_t5_ParamLimits

0x35ee,	// (0x00011716) main_usb_pane_t5

0x3603,	// (0x0001172b) main_usb_pane_t6_ParamLimits

0x3603,	// (0x0001172b) main_usb_pane_t6

0x0005,

0xf52a,	// (0x0001d652) main_usb_pane_t_ParamLimits

0x292c,	// (0x00010a54) aid_text_placing

0x2937,	// (0x00010a5f) main_location2_pane_t1_ParamLimits

0x294d,	// (0x00010a75) main_location2_pane_t2_ParamLimits

0x2963,	// (0x00010a8b) main_location2_pane_t3_ParamLimits

0x2979,	// (0x00010aa1) main_location2_pane_t4_ParamLimits

0x2979,	// (0x00010aa1) main_location2_pane_t4

0xf344,	// (0x0001d46c) main_location2_pane_t_ParamLimits

0x9d00,	// (0x00017e28) find_pinb_pane_g2_ParamLimits

0x9d00,	// (0x00017e28) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0001d1e8) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0001d1e8) find_pinb_pane_g

0x9d0c,	// (0x00017e34) find_pinb_pane_t1_ParamLimits

0x9d1e,	// (0x00017e46) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0001d1ed) find_pinb_pane_t_ParamLimits

0x9a77,	// (0x00017b9f) main_call3_pane

0x2076,	// (0x0001019e) cale_month_day_heading_pane_t1_ParamLimits

0x20fc,	// (0x00010224) cale_month_day_heading_pane_t2_ParamLimits

0x2175,	// (0x0001029d) cale_month_day_heading_pane_t3_ParamLimits

0x21ee,	// (0x00010316) cale_month_day_heading_pane_t4_ParamLimits

0x226f,	// (0x00010397) cale_month_day_heading_pane_t5_ParamLimits

0x22f8,	// (0x00010420) cale_month_day_heading_pane_t6_ParamLimits

0x2389,	// (0x000104b1) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0001d368) cale_month_day_heading_pane_t_ParamLimits

0xa396,	// (0x000184be) smil_status_volume_pane

0x2fda,	// (0x00011102) postcard_address_pane_ParamLimits

0x2fda,	// (0x00011102) postcard_address_pane

0x2ff0,	// (0x00011118) postcard_message_pane_ParamLimits

0x2ff0,	// (0x00011118) postcard_message_pane

0x3566,	// (0x0001168e) call2_cli_visual_pane_t1_ParamLimits

0x3566,	// (0x0001168e) call2_cli_visual_pane_t1

0xbf37,	// (0x0001a05f) postcard_message_pane_t1_ParamLimits

0xbf37,	// (0x0001a05f) postcard_message_pane_t1

0xbf1f,	// (0x0001a047) postcard_address_pane_t1_ParamLimits

0xbf1f,	// (0x0001a047) postcard_address_pane_t1

0x3d39,	// (0x00011e61) popup_call3_audio_in_window_ParamLimits

0x3d39,	// (0x00011e61) popup_call3_audio_in_window

0x3bbe,	// (0x00011ce6) bg_popup_call3_in_pane_ParamLimits

0x3bbe,	// (0x00011ce6) bg_popup_call3_in_pane

0x3c3a,	// (0x00011d62) popup_call3_audio_in_window_g1_ParamLimits

0x3c3a,	// (0x00011d62) popup_call3_audio_in_window_g1

0x3c5a,	// (0x00011d82) popup_call3_audio_in_window_g2_ParamLimits

0x3c5a,	// (0x00011d82) popup_call3_audio_in_window_g2

0x3c7a,	// (0x00011da2) popup_call3_audio_in_window_g3_ParamLimits

0x3c7a,	// (0x00011da2) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x0001d6af) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x0001d6af) popup_call3_audio_in_window_g

0x3cab,	// (0x00011dd3) popup_call3_audio_in_window_t1_ParamLimits

0x3cab,	// (0x00011dd3) popup_call3_audio_in_window_t1

0x3ce9,	// (0x00011e11) popup_call3_audio_in_window_t2_ParamLimits

0x3ce9,	// (0x00011e11) popup_call3_audio_in_window_t2

0x3d27,	// (0x00011e4f) popup_call3_audio_in_window_t3_ParamLimits

0x3d27,	// (0x00011e4f) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x0001d6b8) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x0001d6b8) popup_call3_audio_in_window_t

0x9ff4,	// (0x0001811c) bg_popup_call3_rect_pane

0xbc89,	// (0x00019db1) bg_popup_call3_rect_pane_g1

0x9ee5,	// (0x0001800d) bg_popup_call3_rect_pane_g2

0xbc91,	// (0x00019db9) bg_popup_call3_rect_pane_g3

0xbc99,	// (0x00019dc1) bg_popup_call3_rect_pane_g4

0xbca1,	// (0x00019dc9) bg_popup_call3_rect_pane_g5

0xbca9,	// (0x00019dd1) bg_popup_call3_rect_pane_g6

0xbcb1,	// (0x00019dd9) bg_popup_call3_rect_pane_g7

0x95ac,	// (0x000176d4) mup_visualizer_osc_pane

0x95ac,	// (0x000176d4) mup_visualizer_spec_pane

0x3bee,	// (0x00011d16) call3_video_qcif_pane_ParamLimits

0x3bee,	// (0x00011d16) call3_video_qcif_pane

0x3c01,	// (0x00011d29) call3_video_qcif_uncrop_pane_ParamLimits

0x3c01,	// (0x00011d29) call3_video_qcif_uncrop_pane

0x3c11,	// (0x00011d39) call3_video_subqcif_pane_ParamLimits

0x3c11,	// (0x00011d39) call3_video_subqcif_pane

0x3c27,	// (0x00011d4f) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c27,	// (0x00011d4f) call3_video_subqcif_uncrop_pane

0x3c9a,	// (0x00011dc2) popup_call3_audio_in_window_g4_ParamLimits

0x3c9a,	// (0x00011dc2) popup_call3_audio_in_window_g4

0x95ac,	// (0x000176d4) mup_spec_half_pane

0x95ac,	// (0x000176d4) mup_spec_half_pane_cp

0x95ac,	// (0x000176d4) mup_osc_middle_pane

0xa049,	// (0x00018171) mup_visualizer_osc_pane_g1

0xbeb0,	// (0x00019fd8) mup_spec_bar_pane_ParamLimits

0xbeb0,	// (0x00019fd8) mup_spec_bar_pane

0xa049,	// (0x00018171) mup_spec_bar_pane_g1

0xa049,	// (0x00018171) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) mup_spec_bar_pane_g

0x0dc2,	// (0x0000eeea) aid_cale_week_size_cell_pane_ParamLimits

0x0ddc,	// (0x0000ef04) bg_cale_heading_pane_ParamLimits

0x0e00,	// (0x0000ef28) bg_cale_pane_cp01_ParamLimits

0x0e1d,	// (0x0000ef45) cale_week_corner_pane_ParamLimits

0x0e3c,	// (0x0000ef64) cale_week_day_heading_pane_ParamLimits

0x0e65,	// (0x0000ef8d) cale_week_scroll_pane_g1_ParamLimits

0x0e84,	// (0x0000efac) cale_week_scroll_pane_g2_ParamLimits

0x0e9c,	// (0x0000efc4) cale_week_scroll_pane_g3_ParamLimits

0x0eb4,	// (0x0000efdc) cale_week_scroll_pane_g4_ParamLimits

0x0ecc,	// (0x0000eff4) cale_week_scroll_pane_g5_ParamLimits

0x0eec,	// (0x0000f014) cale_week_scroll_pane_g6_ParamLimits

0x0f0c,	// (0x0000f034) cale_week_scroll_pane_g7_ParamLimits

0x0f30,	// (0x0000f058) cale_week_scroll_pane_g8_ParamLimits

0x0f54,	// (0x0000f07c) cale_week_scroll_pane_g9_ParamLimits

0x0f6c,	// (0x0000f094) cale_week_scroll_pane_g10_ParamLimits

0x0f84,	// (0x0000f0ac) cale_week_scroll_pane_g11_ParamLimits

0x0f9c,	// (0x0000f0c4) cale_week_scroll_pane_g12_ParamLimits

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g13_ParamLimits

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g14_ParamLimits

0x0fc0,	// (0x0000f0e8) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0001d279) cale_week_scroll_pane_g_ParamLimits

0x1008,	// (0x0000f130) cale_week_time_pane_ParamLimits

0x102c,	// (0x0000f154) grid_cale_week_pane_ParamLimits

0x9f6a,	// (0x00018092) listscroll_cale_week_pane_t1

0x9f7c,	// (0x000180a4) scroll_pane_cp08_ParamLimits

0x1ae9,	// (0x0000fc11) cale_month_corner_pane_ParamLimits

0xa360,	// (0x00018488) cale_month_pane_t1

0x1ff1,	// (0x00010119) cale_month_week_pane_ParamLimits

0x276c,	// (0x00010894) popup_call_status_window_g1_ParamLimits

0x2780,	// (0x000108a8) popup_call_status_window_g2_ParamLimits

0x2794,	// (0x000108bc) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0001d3f3) popup_call_status_window_g_ParamLimits

0xa74f,	// (0x00018877) aid_call2_pane

0x2e21,	// (0x00010f49) msg_header_pane_g1

0x2fda,	// (0x00011102) postcard_address2_pane_ParamLimits

0x2fda,	// (0x00011102) postcard_address2_pane

0x2ff0,	// (0x00011118) postcard_message2_pane_ParamLimits

0x2ff0,	// (0x00011118) postcard_message2_pane

0x3b9b,	// (0x00011cc3) message2_row_pane_ParamLimits

0x3b9b,	// (0x00011cc3) message2_row_pane

0xbe6a,	// (0x00019f92) address2_row_pane_ParamLimits

0xbe6a,	// (0x00019f92) address2_row_pane

0xbe7d,	// (0x00019fa5) postcard_message2_row_pane_g1

0xbe85,	// (0x00019fad) postcard_message2_row_pane_t1

0xbe7d,	// (0x00019fa5) address2_row_pane_g1

0xbe85,	// (0x00019fad) address2_row_pane_t1

0x1399,	// (0x0000f4c1) aid_size_cell_vorec

0x9a77,	// (0x00017b9f) main_rss_pane

0xbe93,	// (0x00019fbb) rss_list_single_pane_ParamLimits

0xbe93,	// (0x00019fbb) rss_list_single_pane

0xbea1,	// (0x00019fc9) rss_list_single_pane_t1

0xbea1,	// (0x00019fc9) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x0001d6a3) rss_list_single_pane_t

0x9a77,	// (0x00017b9f) main_camera2_pane

0x9a77,	// (0x00017b9f) main_video2_pane

0xbf53,	// (0x0001a07b) cams_zoom_pane_cp2_ParamLimits

0xbf53,	// (0x0001a07b) cams_zoom_pane_cp2

0xbf53,	// (0x0001a07b) image2_vga_pane_ParamLimits

0xbf53,	// (0x0001a07b) image2_vga_pane

0xbf61,	// (0x0001a089) main_camera2_pane_g1_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g1

0xbf61,	// (0x0001a089) main_camera2_pane_g2_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g2

0xbf61,	// (0x0001a089) main_camera2_pane_g3_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g3

0xbf61,	// (0x0001a089) main_camera2_pane_g4_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g4

0xbf61,	// (0x0001a089) main_camera2_pane_g5_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g5

0xbf61,	// (0x0001a089) main_camera2_pane_g6_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g6

0xbf61,	// (0x0001a089) main_camera2_pane_g7_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g7

0xbf61,	// (0x0001a089) main_camera2_pane_g8_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g8

0x0008,

0xf597,	// (0x0001d6bf) main_camera2_pane_g_ParamLimits

0xf597,	// (0x0001d6bf) main_camera2_pane_g

0x3d5b,	// (0x00011e83) main_camera2_pane_t1_ParamLimits

0x3d5b,	// (0x00011e83) main_camera2_pane_t1

0x3d5b,	// (0x00011e83) main_camera2_pane_t2_ParamLimits

0x3d5b,	// (0x00011e83) main_camera2_pane_t2

0x3d5b,	// (0x00011e83) main_camera2_pane_t3_ParamLimits

0x3d5b,	// (0x00011e83) main_camera2_pane_t3

0x3d5b,	// (0x00011e83) main_camera2_pane_t4_ParamLimits

0x3d5b,	// (0x00011e83) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x0001d6d2) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x0001d6d2) main_camera2_pane_t

0xbf83,	// (0x0001a0ab) cams_zoom_pane_cp4_ParamLimits

0xbf83,	// (0x0001a0ab) cams_zoom_pane_cp4

0xbf91,	// (0x0001a0b9) image2_cif_pane_ParamLimits

0xbf91,	// (0x0001a0b9) image2_cif_pane

0x9621,	// (0x00017749) image2_subqcif_pane_ParamLimits

0x9621,	// (0x00017749) image2_subqcif_pane

0x3d6f,	// (0x00011e97) main_video2_pane_g1_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g1

0x3d6f,	// (0x00011e97) main_video2_pane_g2_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g2

0x3d6f,	// (0x00011e97) main_video2_pane_g3_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g3

0x3d6f,	// (0x00011e97) main_video2_pane_g4_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g4

0x3d6f,	// (0x00011e97) main_video2_pane_g5_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g5

0x3d6f,	// (0x00011e97) main_video2_pane_g6_ParamLimits

0x3d6f,	// (0x00011e97) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x0001d6e1) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x0001d6e1) main_video2_pane_g

0x3d7d,	// (0x00011ea5) main_video2_pane_t1_ParamLimits

0x3d7d,	// (0x00011ea5) main_video2_pane_t1

0x3d7d,	// (0x00011ea5) main_video2_pane_t2_ParamLimits

0x3d7d,	// (0x00011ea5) main_video2_pane_t2

0x3d7d,	// (0x00011ea5) main_video2_pane_t3_ParamLimits

0x3d7d,	// (0x00011ea5) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x0001d6ee) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x0001d6ee) main_video2_pane_t

0x369c,	// (0x000117c4) call_muted_g2

0x0001,

0xf56d,	// (0x0001d695) call_muted_g

0x9a77,	// (0x00017b9f) main_mup2_pane

0xaad9,	// (0x00018c01) main_mup2_pane_g1_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g1

0xaad9,	// (0x00018c01) main_mup2_pane_g2_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g2

0xa049,	// (0x00018171) main_mup_pane_g13_cp1

0x95ac,	// (0x000176d4) mup_volume_pane_cp1

0xaad9,	// (0x00018c01) main_mup2_pane_g4_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g4

0xaad9,	// (0x00018c01) main_mup2_pane_g5_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g5

0xaad9,	// (0x00018c01) main_mup2_pane_g6_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g6

0xaad9,	// (0x00018c01) main_mup2_pane_g7_ParamLimits

0xaad9,	// (0x00018c01) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x0001d6f5) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x0001d6f5) main_mup2_pane_g

0xaae7,	// (0x00018c0f) main_mup2_pane_t1_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t1

0xaae7,	// (0x00018c0f) main_mup2_pane_t2_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t2

0xaae7,	// (0x00018c0f) main_mup2_pane_t3_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t3

0xaae7,	// (0x00018c0f) main_mup2_pane_t4_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t4

0xaae7,	// (0x00018c0f) main_mup2_pane_t5_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t5

0xaae7,	// (0x00018c0f) main_mup2_pane_t6_ParamLimits

0xaae7,	// (0x00018c0f) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x0001d704) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x0001d704) main_mup2_pane_t

0xab0f,	// (0x00018c37) mup2_visualizer_pane_ParamLimits

0xab0f,	// (0x00018c37) mup2_visualizer_pane

0xab0f,	// (0x00018c37) mup_progress_pane_cp_ParamLimits

0xab0f,	// (0x00018c37) mup_progress_pane_cp

0xbf9f,	// (0x0001a0c7) mup_volume_pane_cp_ParamLimits

0xbf9f,	// (0x0001a0c7) mup_volume_pane_cp

0x9d4d,	// (0x00017e75) mup2_visualizer_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) mup2_visualizer_pane_g1

0x9d5b,	// (0x00017e83) mup2_visualizer_pane_g2_ParamLimits

0x9d5b,	// (0x00017e83) mup2_visualizer_pane_g2

0x9d5b,	// (0x00017e83) mup2_visualizer_pane_g3_ParamLimits

0x9d5b,	// (0x00017e83) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0001d1f2) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0001d1f2) mup2_visualizer_pane_g

0xad9f,	// (0x00018ec7) aid_size_cell_fmradio

0x384c,	// (0x00011974) aid_height_parent_landcape

0xa195,	// (0x000182bd) wml_content_pane_cp

0xa19d,	// (0x000182c5) wml_tabs_pane

0xa1a6,	// (0x000182ce) popup_wml_miniature_window

0xa1ae,	// (0x000182d6) scroll_pane_cp021

0xa1c2,	// (0x000182ea) wml_content_pane_comp8

0x9a77,	// (0x00017b9f) bg_popup_sub_pane_cp05

0xbfb5,	// (0x0001a0dd) popup_wml_miniature_window_g1

0xbfbd,	// (0x0001a0e5) wml_miniature_view_pane

0x3d91,	// (0x00011eb9) aid_size_wml_view

0x3d99,	// (0x00011ec1) wml_miniature_view_pane_g1

0x3da2,	// (0x00011eca) wml_miniature_view_pane_g2

0x3dab,	// (0x00011ed3) wml_miniature_view_pane_g3

0x3db3,	// (0x00011edb) wml_miniature_view_pane_g4

0x3dbb,	// (0x00011ee3) wml_miniature_view_pane_g5

0x3dc3,	// (0x00011eeb) wml_miniature_view_pane_g6

0x3dcb,	// (0x00011ef3) wml_miniature_view_pane_g7

0x3dd3,	// (0x00011efb) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x0001d711) wml_miniature_view_pane_g

0xbfc5,	// (0x0001a0ed) background_graphic_ParamLimits

0xbfc5,	// (0x0001a0ed) background_graphic

0xbfd1,	// (0x0001a0f9) wml_tabs_2_pane

0xbfda,	// (0x0001a102) wml_tabs_3_pane_ParamLimits

0xbfda,	// (0x0001a102) wml_tabs_3_pane

0xbfec,	// (0x0001a114) wml_tabs_4_pane_ParamLimits

0xbfec,	// (0x0001a114) wml_tabs_4_pane

0xc002,	// (0x0001a12a) wml_tabs_5_pane_ParamLimits

0xc002,	// (0x0001a12a) wml_tabs_5_pane

0xc01c,	// (0x0001a144) wml_tabs_pane_g2_ParamLimits

0xc01c,	// (0x0001a144) wml_tabs_pane_g2

0xc031,	// (0x0001a159) wml_tabs_pane_g3_ParamLimits

0xc031,	// (0x0001a159) wml_tabs_pane_g3

0xc046,	// (0x0001a16e) wml_tabs_2_active_pane_ParamLimits

0xc046,	// (0x0001a16e) wml_tabs_2_active_pane

0xc046,	// (0x0001a16e) wml_tabs_2_passive_pane_ParamLimits

0xc046,	// (0x0001a16e) wml_tabs_2_passive_pane

0x3ddb,	// (0x00011f03) wml_tabs_3_active_pane_cp_ParamLimits

0x3ddb,	// (0x00011f03) wml_tabs_3_active_pane_cp

0x3df0,	// (0x00011f18) wml_tabs_3_passive_pane_ParamLimits

0x3df0,	// (0x00011f18) wml_tabs_3_passive_pane

0x3e03,	// (0x00011f2b) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e03,	// (0x00011f2b) wml_tabs_3_passive_pane_cp

0x3e1a,	// (0x00011f42) tabs_4_active_pane

0x3e22,	// (0x00011f4a) tabs_4_passive_pane

0x3e2c,	// (0x00011f54) tabs_4_passive_pane_cp

0x3e34,	// (0x00011f5c) tabs_4_passive_pane_cp2

0x3585,	// (0x000116ad) aid_height_text

0xab0f,	// (0x00018c37) mup_volume_cont_pane_ParamLimits

0xab0f,	// (0x00018c37) mup_volume_cont_pane

0x95ac,	// (0x000176d4) aid_size_cell_pinb

0x95ac,	// (0x000176d4) aid_size_list_pinb

0xab0f,	// (0x00018c37) mup2_volume_cont_pane_ParamLimits

0xab0f,	// (0x00018c37) mup2_volume_cont_pane

0xc054,	// (0x0001a17c) mup2_volume_cont_pane_g1_ParamLimits

0xc054,	// (0x0001a17c) mup2_volume_cont_pane_g1

0x07b6,	// (0x0000e8de) aid_size_cell_touch_ParamLimits

0x07b6,	// (0x0000e8de) aid_size_cell_touch

0x09e2,	// (0x0000eb0a) touch_pane_ParamLimits

0x09e2,	// (0x0000eb0a) touch_pane

0x95ac,	// (0x000176d4) main_rss2_pane

0xc073,	// (0x0001a19b) listscroll_rss2_pane

0xc07c,	// (0x0001a1a4) rss2_navigation_pane

0xc084,	// (0x0001a1ac) list_rss2_pane

0xa8d6,	// (0x000189fe) scroll_pane_cp22

0xc08c,	// (0x0001a1b4) rss2_navigation_pane_g1

0xc095,	// (0x0001a1bd) rss2_navigation_pane_g2

0xc09d,	// (0x0001a1c5) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x0001d722) rss2_navigation_pane_g

0xc0a5,	// (0x0001a1cd) rss2_navigation_pane_t1

0x3e3e,	// (0x00011f66) rss2_list_single_pane_ParamLimits

0x3e3e,	// (0x00011f66) rss2_list_single_pane

0xc0b3,	// (0x0001a1db) rss2_list_single_pane_t2

0xc0c1,	// (0x0001a1e9) rss2_list_single_pane_t3_ParamLimits

0xc0c1,	// (0x0001a1e9) rss2_list_single_pane_t3

0xc0de,	// (0x0001a206) rss2_list_single_pane_t4

0x263d,	// (0x00010765) smil_status_pane_g1

0x9621,	// (0x00017749) main_image2_pane_ParamLimits

0x9621,	// (0x00017749) main_image2_pane

0xbf61,	// (0x0001a089) main_camera2_pane_g9_ParamLimits

0xbf61,	// (0x0001a089) main_camera2_pane_g9

0x3d5b,	// (0x00011e83) main_camera2_pane_t5_ParamLimits

0x3d5b,	// (0x00011e83) main_camera2_pane_t5

0xbf6f,	// (0x0001a097) main_camera2_pane_t6_ParamLimits

0xbf6f,	// (0x0001a097) main_camera2_pane_t6

0x3e58,	// (0x00011f80) main_image2_pane_g1_ParamLimits

0x3e58,	// (0x00011f80) main_image2_pane_g1

0x3234,	// (0x0001135c) smil2_video_pane_ParamLimits

0x3234,	// (0x0001135c) smil2_video_pane

0x95ca,	// (0x000176f2) aid_zoom_text_primary_cp

0x9617,	// (0x0001773f) popup_preview_fixed_window

0xa0fe,	// (0x00018226) im_reading_pane_g1

0x3d4d,	// (0x00011e75) cams2_bc_adjust_pane_cp_ParamLimits

0x3d4d,	// (0x00011e75) cams2_bc_adjust_pane_cp

0xab0f,	// (0x00018c37) cams2_bc_adjust_pane_ParamLimits

0xab0f,	// (0x00018c37) cams2_bc_adjust_pane

0xa049,	// (0x00018171) cams2_bc_adjust_pane_g1

0x95ac,	// (0x000176d4) cams2_slider_pane

0xa049,	// (0x00018171) cams2_slider_pane_g1

0xa049,	// (0x00018171) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x0001d729) cams2_slider_pane_g

0x0a78,	// (0x0000eba0) calc_display_pane_ParamLimits

0x0a9d,	// (0x0000ebc5) calc_paper_pane_ParamLimits

0x0ac0,	// (0x0000ebe8) grid_calc_pane_ParamLimits

0xa7b1,	// (0x000188d9) popup_clock_digital_window_t1_ParamLimits

0xad3c,	// (0x00018e64) main_image_pane_t1

0x0a58,	// (0x0000eb80) aid_size_cell_calc_ParamLimits

0x0a58,	// (0x0000eb80) aid_size_cell_calc

0x3892,	// (0x000119ba) popup_blid_sat_info2_window_ParamLimits

0x3892,	// (0x000119ba) popup_blid_sat_info2_window

0xc0ec,	// (0x0001a214) aid_size_cell_blid

0xbf91,	// (0x0001a0b9) bg_popup_window_pane_cp07

0xc109,	// (0x0001a231) grid_popup_blid_pane

0xc113,	// (0x0001a23b) heading_pane_cp05_ParamLimits

0xc113,	// (0x0001a23b) heading_pane_cp05

0xc1dd,	// (0x0001a305) cell_popup_blid_pane_ParamLimits

0xc1dd,	// (0x0001a305) cell_popup_blid_pane

0xc207,	// (0x0001a32f) cell_popup_blid_pane_g1

0xc20f,	// (0x0001a337) cell_popup_blid_pane_t1

0xab0f,	// (0x00018c37) mup2_indicator_pane_ParamLimits

0xab0f,	// (0x00018c37) mup2_indicator_pane

0x95ac,	// (0x000176d4) mup2_visualizer_osc_pane

0xbf9f,	// (0x0001a0c7) mup2_visualizer_spec_pane_ParamLimits

0xbf9f,	// (0x0001a0c7) mup2_visualizer_spec_pane

0x95ac,	// (0x000176d4) mup2_spec_half_pane

0x95ac,	// (0x000176d4) mup2_spec_half_pane_cp

0xc21d,	// (0x0001a345) mup2_spec_bar_pane_ParamLimits

0xc21d,	// (0x0001a345) mup2_spec_bar_pane

0xa049,	// (0x00018171) mup2_spec_bar_pane_g1

0xc23c,	// (0x0001a364) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x0001d74f) mup2_spec_bar_pane_g

0x95ac,	// (0x000176d4) mup2_osc_middle_pane

0xa049,	// (0x00018171) mup2_visualizer_osc_pane_g1

0x964f,	// (0x00017777) popup_number_entry_window_t1_ParamLimits

0x9662,	// (0x0001778a) popup_number_entry_window_t2_ParamLimits

0x9674,	// (0x0001779c) popup_number_entry_window_t3_ParamLimits

0x9686,	// (0x000177ae) popup_number_entry_window_t5_ParamLimits

0x9686,	// (0x000177ae) popup_number_entry_window_t5

0xf06b,	// (0x0001d193) popup_number_entry_window_t_ParamLimits

0x96bb,	// (0x000177e3) text_title_cp2_ParamLimits

0xac16,	// (0x00018d3e) aid_hotspot_pointer_text2_pane

0xac3c,	// (0x00018d64) main_viewer_pane_g9_ParamLimits

0xac3c,	// (0x00018d64) main_viewer_pane_g9

0xa360,	// (0x00018488) cale_month_pane_t1_ParamLimits

0xa3cb,	// (0x000184f3) bg_cale_pane_ParamLimits

0xa3e3,	// (0x0001850b) list_cale_pane_ParamLimits

0xa3f4,	// (0x0001851c) listscroll_cale_day_pane_t1

0xa406,	// (0x0001852e) scroll_pane_cp09_ParamLimits

0x2b64,	// (0x00010c8c) main_mup_eq_pane_t1_ParamLimits

0x2b64,	// (0x00010c8c) main_mup_eq_pane_t1

0x2b80,	// (0x00010ca8) main_mup_eq_pane_t2_ParamLimits

0x2b80,	// (0x00010ca8) main_mup_eq_pane_t2

0x2b9c,	// (0x00010cc4) main_mup_eq_pane_t3_ParamLimits

0x2b9c,	// (0x00010cc4) main_mup_eq_pane_t3

0x2bba,	// (0x00010ce2) main_mup_eq_pane_t4_ParamLimits

0x2bba,	// (0x00010ce2) main_mup_eq_pane_t4

0x2bd8,	// (0x00010d00) main_mup_eq_pane_t5_ParamLimits

0x2bd8,	// (0x00010d00) main_mup_eq_pane_t5

0x2bf6,	// (0x00010d1e) main_mup_eq_pane_t6_ParamLimits

0x2bf6,	// (0x00010d1e) main_mup_eq_pane_t6

0x2c0c,	// (0x00010d34) main_mup_eq_pane_t7_ParamLimits

0x2c0c,	// (0x00010d34) main_mup_eq_pane_t7

0x2c22,	// (0x00010d4a) main_mup_eq_pane_t8_ParamLimits

0x2c22,	// (0x00010d4a) main_mup_eq_pane_t8

0x2c38,	// (0x00010d60) main_mup_eq_pane_t9_ParamLimits

0x2c38,	// (0x00010d60) main_mup_eq_pane_t9

0x2c54,	// (0x00010d7c) main_mup_eq_pane_t10_ParamLimits

0x2c54,	// (0x00010d7c) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0001d4f2) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0001d4f2) main_mup_eq_pane_t

0x2d29,	// (0x00010e51) mup_equalizer_pane_cp5_ParamLimits

0x2d41,	// (0x00010e69) mup_equalizer_pane_cp6_ParamLimits

0x2d59,	// (0x00010e81) mup_equalizer_pane_cp7_ParamLimits

0x95ac,	// (0x000176d4) main_gallery_pane

0xbecf,	// (0x00019ff7) smil2_volume_pane

0xbed7,	// (0x00019fff) smil_status_volume_pane_g1_ParamLimits

0xbeea,	// (0x0001a012) smil_status_volume_pane_g2_ParamLimits

0xbefd,	// (0x0001a025) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x0001d6a8) smil_status_volume_pane_g_ParamLimits

0xbf91,	// (0x0001a0b9) bg_popup_window_pane_cp07_ParamLimits

0xc0f4,	// (0x0001a21c) blid_firmament_pane

0x9621,	// (0x00017749) aid_size_cell_gallery_ParamLimits

0x9621,	// (0x00017749) aid_size_cell_gallery

0x9621,	// (0x00017749) grid_gallery_pane_ParamLimits

0x9621,	// (0x00017749) grid_gallery_pane

0xbf91,	// (0x0001a0b9) cell_gallery_pane_ParamLimits

0xbf91,	// (0x0001a0b9) cell_gallery_pane

0x9621,	// (0x00017749) bg_cell_gallery_focus_pane_ParamLimits

0x9621,	// (0x00017749) bg_cell_gallery_focus_pane

0x9d4d,	// (0x00017e75) cell_gallery_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) cell_gallery_pane_g1

0x9d4d,	// (0x00017e75) cell_gallery_pane_g2_ParamLimits

0x9d4d,	// (0x00017e75) cell_gallery_pane_g2

0x9d4d,	// (0x00017e75) cell_gallery_pane_g3_ParamLimits

0x9d4d,	// (0x00017e75) cell_gallery_pane_g3

0x9d5b,	// (0x00017e83) cell_gallery_pane_g4_ParamLimits

0x9d5b,	// (0x00017e83) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x0001d754) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x0001d754) cell_gallery_pane_g

0xc246,	// (0x0001a36e) bg_cell_gallery_focus_pane_g1

0xc24e,	// (0x0001a376) bg_cell_gallery_focus_pane_g2

0xc256,	// (0x0001a37e) bg_cell_gallery_focus_pane_g3

0xc25e,	// (0x0001a386) bg_cell_gallery_focus_pane_g4

0xc266,	// (0x0001a38e) bg_cell_gallery_focus_pane_g5

0xc26e,	// (0x0001a396) bg_cell_gallery_focus_pane_g6

0xc276,	// (0x0001a39e) bg_cell_gallery_focus_pane_g7

0xc27e,	// (0x0001a3a6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x0001d75d) bg_cell_gallery_focus_pane_g

0xc286,	// (0x0001a3ae) aid_firma_cardinal

0xc29a,	// (0x0001a3c2) blid_firmament_pane_t1

0xc2b1,	// (0x0001a3d9) blid_firmament_pane_t2

0xc2c8,	// (0x0001a3f0) blid_firmament_pane_t3

0xc2df,	// (0x0001a407) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x0001d76e) blid_firmament_pane_t

0xc2f6,	// (0x0001a41e) blid_sat_info_pane

0xa049,	// (0x00018171) blid_sat_info_pane_g1

0xa049,	// (0x00018171) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) blid_sat_info_pane_g

0xc306,	// (0x0001a42e) blid_sat_info_pane_t1

0xc314,	// (0x0001a43c) smil2_volume_content_pane

0xc31d,	// (0x0001a445) smil2_volume_pane_g1

0x9e7c,	// (0x00017fa4) smil2_volume_content_pane_g1

0xc325,	// (0x0001a44d) smil2_volume_content_pane_g2

0xc32e,	// (0x0001a456) smil2_volume_content_pane_g3

0xc337,	// (0x0001a45f) smil2_volume_content_pane_g4

0xc340,	// (0x0001a468) smil2_volume_content_pane_g5

0xc349,	// (0x0001a471) smil2_volume_content_pane_g6

0xc352,	// (0x0001a47a) smil2_volume_content_pane_g7

0xc35b,	// (0x0001a483) smil2_volume_content_pane_g8

0xc364,	// (0x0001a48c) smil2_volume_content_pane_g9

0xc36d,	// (0x0001a495) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x0001d777) smil2_volume_content_pane_g

0x10fa,	// (0x0000f222) cale_week_day_heading_pane_t1_ParamLimits

0x1124,	// (0x0000f24c) cale_week_day_heading_pane_t2_ParamLimits

0x1153,	// (0x0000f27b) cale_week_day_heading_pane_t3_ParamLimits

0x1182,	// (0x0000f2aa) cale_week_day_heading_pane_t4_ParamLimits

0x11b1,	// (0x0000f2d9) cale_week_day_heading_pane_t5_ParamLimits

0x11e4,	// (0x0000f30c) cale_week_day_heading_pane_t6_ParamLimits

0x121b,	// (0x0000f343) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0001d29a) cale_week_day_heading_pane_t_ParamLimits

0x9f99,	// (0x000180c1) bg_cale_side_pane_ParamLimits

0x1245,	// (0x0000f36d) cale_week_time_pane_t1_ParamLimits

0x125f,	// (0x0000f387) cale_week_time_pane_t2_ParamLimits

0x1279,	// (0x0000f3a1) cale_week_time_pane_t3_ParamLimits

0x1293,	// (0x0000f3bb) cale_week_time_pane_t4_ParamLimits

0x12ad,	// (0x0000f3d5) cale_week_time_pane_t5_ParamLimits

0x12c7,	// (0x0000f3ef) cale_week_time_pane_t6_ParamLimits

0x12e7,	// (0x0000f40f) cale_week_time_pane_t7_ParamLimits

0x130d,	// (0x0000f435) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0001d2a9) cale_week_time_pane_t_ParamLimits

0x1333,	// (0x0000f45b) cell_cale_week_pane_g2_ParamLimits

0x9f99,	// (0x000180c1) bg_cale_side_pane_cp01_ParamLimits

0x241a,	// (0x00010542) cale_month_week_pane_t1_ParamLimits

0x2433,	// (0x0001055b) cale_month_week_pane_t2_ParamLimits

0x244c,	// (0x00010574) cale_month_week_pane_t3_ParamLimits

0x2465,	// (0x0001058d) cale_month_week_pane_t4_ParamLimits

0x247e,	// (0x000105a6) cale_month_week_pane_t5_ParamLimits

0x2497,	// (0x000105bf) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0001d377) cale_month_week_pane_t_ParamLimits

0xa372,	// (0x0001849a) cell_cale_month_pane_g1_ParamLimits

0x95ac,	// (0x000176d4) main_cale_event_viewer_pane

0x95ac,	// (0x000176d4) listscroll_cale_event_viewer_pane

0xc376,	// (0x0001a49e) list_cale_ev_pane

0xc37e,	// (0x0001a4a6) scroll_pane_cp023

0x3e6e,	// (0x00011f96) field_cale_ev_pane_ParamLimits

0x3e6e,	// (0x00011f96) field_cale_ev_pane

0xc38a,	// (0x0001a4b2) field_cale_ev_content_pane_ParamLimits

0xc38a,	// (0x0001a4b2) field_cale_ev_content_pane

0xc396,	// (0x0001a4be) field_cale_ev_pane_g1_ParamLimits

0xc396,	// (0x0001a4be) field_cale_ev_pane_g1

0xc3a2,	// (0x0001a4ca) field_cale_ev_pane_g2_ParamLimits

0xc3a2,	// (0x0001a4ca) field_cale_ev_pane_g2

0xc3ba,	// (0x0001a4e2) field_cale_ev_pane_g3_ParamLimits

0xc3ba,	// (0x0001a4e2) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x0001d78c) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x0001d78c) field_cale_ev_pane_g

0xc3d2,	// (0x0001a4fa) field_cale_ev_pane_t1_ParamLimits

0xc3d2,	// (0x0001a4fa) field_cale_ev_pane_t1

0x3e92,	// (0x00011fba) field_cale_ev_content_pane_t1_ParamLimits

0x3e92,	// (0x00011fba) field_cale_ev_content_pane_t1

0xabbc,	// (0x00018ce4) bg_button_pane_cp01

0x0db2,	// (0x0000eeda) listscroll_cale_week_pane_ParamLimits

0x9f61,	// (0x00018089) popup_toolbar_window_cp01

0x9f6a,	// (0x00018092) listscroll_cale_week_pane_t1_ParamLimits

0x0db2,	// (0x0000eeda) listscroll_cale_day_pane_ParamLimits

0x9f61,	// (0x00018089) popup_toolbar_window_cp02

0xa3f4,	// (0x0001851c) listscroll_cale_day_pane_t1_ParamLimits

0x0db2,	// (0x0000eeda) main_cale_month_pane_ParamLimits

0xbe3a,	// (0x00019f62) popup_toolbar_window_cp03_ParamLimits

0xbe3a,	// (0x00019f62) popup_toolbar_window_cp03

0x30f2,	// (0x0001121a) main_image_pane_g2_ParamLimits

0x30f2,	// (0x0001121a) main_image_pane_g2

0x3103,	// (0x0001122b) main_image_pane_g3_ParamLimits

0x3103,	// (0x0001122b) main_image_pane_g3

0x0002,

0xf45c,	// (0x0001d584) main_image_pane_g_ParamLimits

0xf45c,	// (0x0001d584) main_image_pane_g

0xad3c,	// (0x00018e64) main_image_pane_t1_ParamLimits

0x3114,	// (0x0001123c) main_image_pane_t2_ParamLimits

0x3114,	// (0x0001123c) main_image_pane_t2

0x3126,	// (0x0001124e) main_image_pane_t3_ParamLimits

0x3126,	// (0x0001124e) main_image_pane_t3

0x314e,	// (0x00011276) main_image_pane_t4_ParamLimits

0x314e,	// (0x00011276) main_image_pane_t4

0x0003,

0xf463,	// (0x0001d58b) main_image_pane_t_ParamLimits

0xf463,	// (0x0001d58b) main_image_pane_t

0x316e,	// (0x00011296) popup_image_details_window_cp01

0x3178,	// (0x000112a0) popup_toobar_trans_pane_cp01_ParamLimits

0x3178,	// (0x000112a0) popup_toobar_trans_pane_cp01

0x3985,	// (0x00011aad) popup_image_details_window_ParamLimits

0x3985,	// (0x00011aad) popup_image_details_window

0xbe0b,	// (0x00019f33) popup_image_focus_window

0xbf53,	// (0x0001a07b) camera2_autofocus_pane_ParamLimits

0xbf53,	// (0x0001a07b) camera2_autofocus_pane

0x95ac,	// (0x000176d4) bg_popup_sub_pane_cp06

0xc3e9,	// (0x0001a511) popup_image_focus_window_g1

0xc3f1,	// (0x0001a519) popup_image_focus_window_g2

0xc3f9,	// (0x0001a521) popup_image_focus_window_g3

0xc401,	// (0x0001a529) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x0001d793) popup_image_focus_window_g

0xc409,	// (0x0001a531) popup_image_focus_window_t1

0xc417,	// (0x0001a53f) popup_image_focus_window_t2

0xc427,	// (0x0001a54f) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x0001d79c) popup_image_focus_window_t

0x9d4d,	// (0x00017e75) camera2_autofocus_pane_g1

0x9621,	// (0x00017749) bg_tb_trans_pane_cp01

0xc435,	// (0x0001a55d) popup_image_details_window_g1

0xc448,	// (0x0001a570) popup_image_details_window_g2

0x0002,

0xf686,	// (0x0001d7ae) popup_image_details_window_g

0xc471,	// (0x0001a599) popup_image_details_window_t1

0xc483,	// (0x0001a5ab) popup_image_details_window_t2

0xc49c,	// (0x0001a5c4) popup_image_details_window_t3

0xc4b0,	// (0x0001a5d8) popup_image_details_window_t4

0xc4cb,	// (0x0001a5f3) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x0001d7b5) popup_image_details_window_t

0x9db3,	// (0x00017edb) bg_calc_paper_pane_ParamLimits

0x95ac,	// (0x000176d4) grid_highlight_pane_cp013

0x9dc7,	// (0x00017eef) list_calc_pane_ParamLimits

0x9dd9,	// (0x00017f01) scroll_pane_cp024

0x9de1,	// (0x00017f09) bg_calc_display_pane_ParamLimits

0x0bdc,	// (0x0000ed04) calc_display_pane_t1_ParamLimits

0x0bee,	// (0x0000ed16) calc_display_pane_t2_ParamLimits

0x9ded,	// (0x00017f15) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0001d21a) calc_display_pane_t_ParamLimits

0x0caf,	// (0x0000edd7) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0001d237) cell_calc_pane_g

0x0cb8,	// (0x0000ede0) cell_calc_pane_t1

0x9e5a,	// (0x00017f82) grid_highlight_pane_cp02_ParamLimits

0x9e70,	// (0x00017f98) toolbar_button_pane_cp01_ParamLimits

0x9e70,	// (0x00017f98) toolbar_button_pane_cp01

0xad81,	// (0x00018ea9) temp_image_control_pane_ParamLimits

0xad81,	// (0x00018ea9) temp_image_control_pane

0x9621,	// (0x00017749) main_mp3_pane

0xc4e5,	// (0x0001a60d) temp_image_control_pane_g1_ParamLimits

0xc4e5,	// (0x0001a60d) temp_image_control_pane_g1

0xc4f3,	// (0x0001a61b) temp_image_control_pane_g2_ParamLimits

0xc4f3,	// (0x0001a61b) temp_image_control_pane_g2

0xc505,	// (0x0001a62d) temp_image_control_pane_g3_ParamLimits

0xc505,	// (0x0001a62d) temp_image_control_pane_g3

0x3eb3,	// (0x00011fdb) temp_image_control_pane_g4_ParamLimits

0x3eb3,	// (0x00011fdb) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x0001d7c0) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x0001d7c0) temp_image_control_pane_g

0xc4e5,	// (0x0001a60d) main_mp3_pane_g1

0x3ec6,	// (0x00011fee) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x0001d7c9) main_mp3_pane_g

0xc53a,	// (0x0001a662) main_mp3_pane_t1

0x9d5b,	// (0x00017e83) main_camera_pane_g8_ParamLimits

0x9d5b,	// (0x00017e83) main_camera_pane_g8

0x14f5,	// (0x0000f61d) main_video_pane_g7_ParamLimits

0x14f5,	// (0x0000f61d) main_video_pane_g7

0xaafb,	// (0x00018c23) main_camera2_pane_t7_ParamLimits

0xaafb,	// (0x00018c23) main_camera2_pane_t7

0xa155,	// (0x0001827d) scroll_pane_cp025_ParamLimits

0xa155,	// (0x0001827d) scroll_pane_cp025

0xa169,	// (0x00018291) scroll_pane_cp026_ParamLimits

0xa169,	// (0x00018291) scroll_pane_cp026

0xa178,	// (0x000182a0) wml_content_pane_ParamLimits

0x95ac,	// (0x000176d4) main_touch_calib_pane

0x3f98,	// (0x000120c0) main_touch_calib_pane_g1

0x3faa,	// (0x000120d2) main_touch_calib_pane_g2

0x3fbc,	// (0x000120e4) main_touch_calib_pane_g3

0x3fce,	// (0x000120f6) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x0001d7e7) main_touch_calib_pane_g

0x3fe0,	// (0x00012108) main_touch_calib_pane_t1

0x3ffa,	// (0x00012122) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x0001d7f0) main_touch_calib_pane_t

0xa951,	// (0x00018a79) mup_progress_pane_cp02

0xa970,	// (0x00018a98) navi_pane_g1

0xa9d2,	// (0x00018afa) navi_pane_mp_t3

0x9621,	// (0x00017749) main_mp3_pane_ParamLimits

0x3b3e,	// (0x00011c66) navi_pane_ParamLimits

0xc4e5,	// (0x0001a60d) main_mp3_pane_g1_ParamLimits

0x3ec6,	// (0x00011fee) main_mp3_pane_g2_ParamLimits

0x3ed2,	// (0x00011ffa) main_mp3_pane_g3_ParamLimits

0x3ed2,	// (0x00011ffa) main_mp3_pane_g3

0x3ee0,	// (0x00012008) main_mp3_pane_g4_ParamLimits

0x3ee0,	// (0x00012008) main_mp3_pane_g4

0x9d4d,	// (0x00017e75) main_mp3_pane_g5_ParamLimits

0x9d4d,	// (0x00017e75) main_mp3_pane_g5

0xc515,	// (0x0001a63d) main_mp3_pane_g6_ParamLimits

0xc515,	// (0x0001a63d) main_mp3_pane_g6

0xc522,	// (0x0001a64a) main_mp3_pane_g7_ParamLimits

0xc522,	// (0x0001a64a) main_mp3_pane_g7

0xc52e,	// (0x0001a656) main_mp3_pane_g8_ParamLimits

0xc52e,	// (0x0001a656) main_mp3_pane_g8

0xf6a1,	// (0x0001d7c9) main_mp3_pane_g_ParamLimits

0x3eec,	// (0x00012014) main_mp3_pane_t2

0x3efa,	// (0x00012022) main_mp3_pane_t3

0xc548,	// (0x0001a670) main_mp3_pane_t4

0xc556,	// (0x0001a67e) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x0001d7da) main_mp3_pane_t

0xc564,	// (0x0001a68c) mup_progress_pane_cp01

0x95ca,	// (0x000176f2) aid_zoom_text_secondary2

0xc376,	// (0x0001a49e) list_cale_ev2_pane

0xc37e,	// (0x0001a4a6) scroll_pane_cp023_ParamLimits

0x4054,	// (0x0001217c) field_cale_ev2_pane_ParamLimits

0x4054,	// (0x0001217c) field_cale_ev2_pane

0x4078,	// (0x000121a0) field_cale_ev2_pane_g1_ParamLimits

0x4078,	// (0x000121a0) field_cale_ev2_pane_g1

0x4084,	// (0x000121ac) field_cale_ev2_pane_g2_ParamLimits

0x4084,	// (0x000121ac) field_cale_ev2_pane_g2

0x409c,	// (0x000121c4) field_cale_ev2_pane_g3_ParamLimits

0x409c,	// (0x000121c4) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x0001d7fb) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x0001d7fb) field_cale_ev2_pane_g

0x40b4,	// (0x000121dc) field_cale_ev2_pane_t1_ParamLimits

0x40b4,	// (0x000121dc) field_cale_ev2_pane_t1

0x40cb,	// (0x000121f3) field_cale_ev2_pane_t2_ParamLimits

0x40cb,	// (0x000121f3) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x0001d804) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x0001d804) field_cale_ev2_pane_t

0x2f8a,	// (0x000110b2) main_postcard_pane_g5_ParamLimits

0x2f8a,	// (0x000110b2) main_postcard_pane_g5

0x2fa0,	// (0x000110c8) main_postcard_pane_g6_ParamLimits

0x2fa0,	// (0x000110c8) main_postcard_pane_g6

0x9621,	// (0x00017749) camera2_autofocus_pane_cp_ParamLimits

0x9621,	// (0x00017749) camera2_autofocus_pane_cp

0x9621,	// (0x00017749) main_mup3_pane

0x412a,	// (0x00012252) main_mup3_pane_g1_ParamLimits

0x412a,	// (0x00012252) main_mup3_pane_g1

0x414c,	// (0x00012274) main_mup3_pane_g2_ParamLimits

0x414c,	// (0x00012274) main_mup3_pane_g2

0x41c7,	// (0x000122ef) main_mup3_pane_g3_ParamLimits

0x41c7,	// (0x000122ef) main_mup3_pane_g3

0x4231,	// (0x00012359) main_mup3_pane_g4_ParamLimits

0x4231,	// (0x00012359) main_mup3_pane_g4

0x429b,	// (0x000123c3) main_mup3_pane_g5_ParamLimits

0x429b,	// (0x000123c3) main_mup3_pane_g5

0x4305,	// (0x0001242d) main_mup3_pane_g6_ParamLimits

0x4305,	// (0x0001242d) main_mup3_pane_g6

0x9d5b,	// (0x00017e83) main_mup3_pane_g7_ParamLimits

0x9d5b,	// (0x00017e83) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x0001d814) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x0001d814) main_mup3_pane_g

0x4389,	// (0x000124b1) main_mup3_pane_t1_ParamLimits

0x4389,	// (0x000124b1) main_mup3_pane_t1

0x43fb,	// (0x00012523) main_mup3_pane_t2_ParamLimits

0x43fb,	// (0x00012523) main_mup3_pane_t2

0x44d1,	// (0x000125f9) main_mup3_pane_t4_ParamLimits

0x44d1,	// (0x000125f9) main_mup3_pane_t4

0x452f,	// (0x00012657) main_mup3_pane_t5_ParamLimits

0x452f,	// (0x00012657) main_mup3_pane_t5

0x45f3,	// (0x0001271b) main_mup3_pane_t6_ParamLimits

0x45f3,	// (0x0001271b) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x0001d825) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x0001d825) main_mup3_pane_t

0x46ab,	// (0x000127d3) mup3_progress_pane_ParamLimits

0x46ab,	// (0x000127d3) mup3_progress_pane

0x4743,	// (0x0001286b) popup_mup3_control_window_ParamLimits

0x4743,	// (0x0001286b) popup_mup3_control_window

0xc578,	// (0x0001a6a0) popup_mup3_text_window

0x4779,	// (0x000128a1) mup3_progress_pane_t1

0x4798,	// (0x000128c0) mup3_progress_pane_t2

0xc580,	// (0x0001a6a8) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x0001d832) mup3_progress_pane_t

0xc59d,	// (0x0001a6c5) mup_progress_pane_cp03

0x95ac,	// (0x000176d4) bg_tb_trans_pane_cp04

0x47b7,	// (0x000128df) mup3_volume_pane

0x47bf,	// (0x000128e7) popup_mup3_control_window_g1

0x47c8,	// (0x000128f0) mup3_volume_pane_g1

0x47d1,	// (0x000128f9) mup3_volume_pane_g2

0x47da,	// (0x00012902) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x0001d839) mup3_volume_pane_g

0x95ac,	// (0x000176d4) bg_tb_trans_pane_cp03

0xc5ad,	// (0x0001a6d5) popup_mup3_text_window_g1

0xc5b5,	// (0x0001a6dd) popup_mup3_text_window_t1

0x9e3b,	// (0x00017f63) list_calc_item_pane_g1_ParamLimits

0xc06a,	// (0x0001a192) mup_volume_pane_cp_g1

0x4014,	// (0x0001213c) main_touch_calib_pane_t3

0x4028,	// (0x00012150) main_touch_calib_pane_t4

0x403e,	// (0x00012166) main_touch_calib_pane_t5

0x95b6,	// (0x000176de) aid_cell_size_toolbar2

0x95be,	// (0x000176e6) aid_popup3_width_pane

0x95ca,	// (0x000176f2) aid_zoom_text_msg_primary

0x13e3,	// (0x0000f50b) vorec_t7

0x9dff,	// (0x00017f27) bg_calc_paper_pane_g1_ParamLimits

0x9e0b,	// (0x00017f33) bg_calc_paper_pane_g2_ParamLimits

0x9e17,	// (0x00017f3f) bg_calc_paper_pane_g3_ParamLimits

0x9e23,	// (0x00017f4b) bg_calc_paper_pane_g4_ParamLimits

0x9e2f,	// (0x00017f57) bg_calc_paper_pane_g5_ParamLimits

0x0c3b,	// (0x0000ed63) bg_calc_paper_pane_g6_ParamLimits

0x0c49,	// (0x0000ed71) bg_calc_paper_pane_g7_ParamLimits

0x0c57,	// (0x0000ed7f) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0001d221) bg_calc_paper_pane_g_ParamLimits

0x0c6a,	// (0x0000ed92) calc_bg_paper_pane_g9_ParamLimits

0x9621,	// (0x00017749) image_qvga_pane_ParamLimits

0x9621,	// (0x00017749) image_qvga_pane

0x9cd2,	// (0x00017dfa) bg_popup_sub_pane_cp04_ParamLimits

0xacb8,	// (0x00018de0) popup_mup_playback_window_g1_ParamLimits

0xacc4,	// (0x00018dec) popup_mup_playback_window_t1_ParamLimits

0xacd9,	// (0x00018e01) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0001d57f) popup_mup_playback_window_t_ParamLimits

0x9d5b,	// (0x00017e83) main_mup2_pane_g3_ParamLimits

0x9d5b,	// (0x00017e83) main_mup2_pane_g3

0x16ec,	// (0x0000f814) popup_toolbar_window_cp04

0xb0d4,	// (0x000191fc) popup_call2_audio_second_window_g3_ParamLimits

0xb0d4,	// (0x000191fc) popup_call2_audio_second_window_g3

0xb4ec,	// (0x00019614) popup_call2_audio_first_window_g4_ParamLimits

0xb4ec,	// (0x00019614) popup_call2_audio_first_window_g4

0xbb13,	// (0x00019c3b) popup_call2_audio_in_window_g4_ParamLimits

0xbb13,	// (0x00019c3b) popup_call2_audio_in_window_g4

0x30d4,	// (0x000111fc) aid_area_sk_bg_cut_ParamLimits

0x30d4,	// (0x000111fc) aid_area_sk_bg_cut

0xacee,	// (0x00018e16) aid_area_sk_bg_cut_2_ParamLimits

0xacee,	// (0x00018e16) aid_area_sk_bg_cut_2

0x95ac,	// (0x000176d4) aid_placing_details_win

0x95ac,	// (0x000176d4) aid_placing_details_win_2

0x9d4d,	// (0x00017e75) camera2_autofocus_pane_g1_ParamLimits

0x097d,	// (0x0000eaa5) popup_fixed_preview_cale_window_ParamLimits

0x097d,	// (0x0000eaa5) popup_fixed_preview_cale_window

0xaa22,	// (0x00018b4a) navi_slider_pane_g3

0xaa2b,	// (0x00018b53) navi_slider_pane_g4

0xaa34,	// (0x00018b5c) navi_slider_pane_g5

0xaa22,	// (0x00018b4a) navi_slider_pane_g6

0xaa3d,	// (0x00018b65) navi_slider_pane_g7

0xab81,	// (0x00018ca9) mup_scale_pane_g3

0xab8a,	// (0x00018cb2) mup_scale_pane_g4

0xab93,	// (0x00018cbb) mup_scale_pane_g5

0x2d71,	// (0x00010e99) mup_scale_pane_g6

0x2d7a,	// (0x00010ea2) mup_scale_pane_g7

0xa049,	// (0x00018171) cams2_slider_pane_g3

0xa049,	// (0x00018171) cams2_slider_pane_g4

0xa049,	// (0x00018171) cams2_slider_pane_g5

0xa049,	// (0x00018171) cams2_slider_pane_g6

0xa049,	// (0x00018171) cams2_slider_pane_g7

0xa049,	// (0x00018171) camera2_autofocus_pane_cp_g1

0xbdeb,	// (0x00019f13) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdeb,	// (0x00019f13) bg_popup_preview_window_pane_cp02

0xc5c3,	// (0x0001a6eb) list_fp_cale_pane_ParamLimits

0xc5c3,	// (0x0001a6eb) list_fp_cale_pane

0xc5cf,	// (0x0001a6f7) popup_fixed_preview_cale_window_t1_ParamLimits

0xc5cf,	// (0x0001a6f7) popup_fixed_preview_cale_window_t1

0x47e3,	// (0x0001290b) popup_fixed_preview_cale_window_t2_ParamLimits

0x47e3,	// (0x0001290b) popup_fixed_preview_cale_window_t2

0x47f8,	// (0x00012920) popup_fixed_preview_cale_window_t3_ParamLimits

0x47f8,	// (0x00012920) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x0001d840) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x0001d840) popup_fixed_preview_cale_window_t

0x480f,	// (0x00012937) list_single_fp_cale_pane_ParamLimits

0x480f,	// (0x00012937) list_single_fp_cale_pane

0xc5ed,	// (0x0001a715) list_single_fp_cale_pane_g1_ParamLimits

0xc5ed,	// (0x0001a715) list_single_fp_cale_pane_g1

0xc5f9,	// (0x0001a721) list_single_fp_cale_pane_g2_ParamLimits

0xc5f9,	// (0x0001a721) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x0001d847) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x0001d847) list_single_fp_cale_pane_g

0xc612,	// (0x0001a73a) list_single_fp_cale_pane_t1_ParamLimits

0xc612,	// (0x0001a73a) list_single_fp_cale_pane_t1

0xc624,	// (0x0001a74c) list_single_fp_cale_pane_t2_ParamLimits

0xc624,	// (0x0001a74c) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x0001d84e) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x0001d84e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x95ac,	// (0x000176d4) main_dialer_pane

0x95ac,	// (0x000176d4) aid_cell_size_keypad

0x95ac,	// (0x000176d4) dialer_ne_pane

0x95ac,	// (0x000176d4) grid_dialer_command_1_pane

0x95ac,	// (0x000176d4) grid_dialer_command_2_pane

0x95ac,	// (0x000176d4) grid_dialer_keypad_pane

0x4827,	// (0x0001294f) bg_popup_call_pane_cp06_ParamLimits

0x4827,	// (0x0001294f) bg_popup_call_pane_cp06

0x4827,	// (0x0001294f) dialer_ne_clear_pane_ParamLimits

0x4827,	// (0x0001294f) dialer_ne_clear_pane

0xa049,	// (0x00018171) dialer_ne_pane_g1

0xaafb,	// (0x00018c23) dialer_ne_pane_t1_ParamLimits

0xaafb,	// (0x00018c23) dialer_ne_pane_t1

0x4835,	// (0x0001295d) dialer_ne_pane_t2_ParamLimits

0x4835,	// (0x0001295d) dialer_ne_pane_t2

0x485d,	// (0x00012985) dialer_ne_pane_t3_ParamLimits

0x485d,	// (0x00012985) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x0001d853) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x0001d853) dialer_ne_pane_t

0x485d,	// (0x00012985) dialer_ne_pane_t3_copy1_ParamLimits

0x485d,	// (0x00012985) dialer_ne_pane_t3_copy1

0xc657,	// (0x0001a77f) cell_dialer_keypad_pane_ParamLimits

0xc657,	// (0x0001a77f) cell_dialer_keypad_pane

0x9621,	// (0x00017749) cell_dialer_command_1_pane_ParamLimits

0x9621,	// (0x00017749) cell_dialer_command_1_pane

0xc66e,	// (0x0001a796) cell_dialer_command_2_pane_ParamLimits

0xc66e,	// (0x0001a796) cell_dialer_command_2_pane

0x9621,	// (0x00017749) bg_button_pane_cp02_ParamLimits

0x9621,	// (0x00017749) bg_button_pane_cp02

0x9d4d,	// (0x00017e75) cell_dialer_keypad_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) cell_dialer_keypad_pane_g1

0x9621,	// (0x00017749) bg_button_pane_cp03_ParamLimits

0x9621,	// (0x00017749) bg_button_pane_cp03

0x9d4d,	// (0x00017e75) cell_dialer_command_1_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) cell_dialer_command_1_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp04

0xa049,	// (0x00018171) cell_dialer_command_2_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp06

0xa049,	// (0x00018171) dialer_ne_clear_pane_g1

0x2a82,	// (0x00010baa) navi_pane_g2

0x2ab0,	// (0x00010bd8) navi_pane_g3

0x0002,

0xf35a,	// (0x0001d482) navi_pane_g

0x2adb,	// (0x00010c03) navi_pane_mv_g2

0x2b02,	// (0x00010c2a) navi_pane_mv_g5

0x2b0a,	// (0x00010c32) navi_pane_mv_t1

0x9de1,	// (0x00017f09) main_clock2_pane

0x9621,	// (0x00017749) main_clock2_list_pane_ParamLimits

0x9621,	// (0x00017749) main_clock2_list_pane

0x48ee,	// (0x00012a16) main_clock2_pane_t1_ParamLimits

0x48ee,	// (0x00012a16) main_clock2_pane_t1

0x4929,	// (0x00012a51) main_clock2_pane_t2_ParamLimits

0x4929,	// (0x00012a51) main_clock2_pane_t2

0x0004,

0xf737,	// (0x0001d85f) main_clock2_pane_t_ParamLimits

0xf737,	// (0x0001d85f) main_clock2_pane_t

0x49c8,	// (0x00012af0) popup_clock_analogue_window_cp03_ParamLimits

0x49c8,	// (0x00012af0) popup_clock_analogue_window_cp03

0x49ed,	// (0x00012b15) popup_clock_digital_window_cp02_ParamLimits

0x49ed,	// (0x00012b15) popup_clock_digital_window_cp02

0x4a66,	// (0x00012b8e) main_clock2_list_single_pane_ParamLimits

0x4a66,	// (0x00012b8e) main_clock2_list_single_pane

0x9ff4,	// (0x0001811c) list_highlight_pane_cp05

0xc6af,	// (0x0001a7d7) main_clock2_list_single_pane_t1

0x16ec,	// (0x0000f814) popup_toolbar_window_cp04_ParamLimits

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g2_ParamLimits

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g2

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g3_ParamLimits

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g3

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g4_ParamLimits

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g4

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g5_ParamLimits

0x9d5b,	// (0x00017e83) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x0001d7a3) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x0001d7a3) camera2_autofocus_pane_g

0x40e0,	// (0x00012208) camera2_autofocus_pane_cp_g2

0x40e8,	// (0x00012210) camera2_autofocus_pane_cp_g3

0x40f0,	// (0x00012218) camera2_autofocus_pane_cp_g4

0x40f8,	// (0x00012220) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x0001d809) camera2_autofocus_pane_cp_g

0x95ac,	// (0x000176d4) popup_dialer_spcha_window

0x95ac,	// (0x000176d4) bg_popup_sub_pane_cp07

0x95ac,	// (0x000176d4) list_spcha_pane

0xc6bd,	// (0x0001a7e5) list_single_spcha_pane_ParamLimits

0xc6bd,	// (0x0001a7e5) list_single_spcha_pane

0x95ac,	// (0x000176d4) list_highlight_pane_cp06

0xa5d8,	// (0x00018700) list_single_spcha_pane_t1

0xb8bd,	// (0x000199e5) popup_call2_audio_out_window_g4_ParamLimits

0xb8bd,	// (0x000199e5) popup_call2_audio_out_window_g4

0x95ac,	// (0x000176d4) main_imed2_pane

0xbe15,	// (0x00019f3d) popup_imed_adjust2_window

0x399d,	// (0x00011ac5) popup_imed_trans_window_ParamLimits

0x399d,	// (0x00011ac5) popup_imed_trans_window

0xc13f,	// (0x0001a267) popup_blid_sat_info2_window_t1

0xc14d,	// (0x0001a275) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x0001d738) popup_blid_sat_info2_window_t

0x4b21,	// (0x00012c49) aid_size_cell_colour_35

0x4b41,	// (0x00012c69) aid_size_cell_colour_112

0x4b61,	// (0x00012c89) aid_size_cell_effect

0xab0f,	// (0x00018c37) bg_tb_trans_pane_cp02

0xa4fd,	// (0x00018625) heading_imed_pane

0x4b81,	// (0x00012ca9) listscroll_imed_pane

0xc6cf,	// (0x0001a7f7) heading_imed_pane_g1

0xc6d7,	// (0x0001a7ff) heading_imed_pane_t1

0xc6e5,	// (0x0001a80d) grid_imed_colour_35_pane_ParamLimits

0xc6e5,	// (0x0001a80d) grid_imed_colour_35_pane

0x4b8d,	// (0x00012cb5) grid_imed_effect_pane

0xc701,	// (0x0001a829) list_imed_aspect_pane

0x4ba4,	// (0x00012ccc) scroll_pane_cp027_ParamLimits

0x4ba4,	// (0x00012ccc) scroll_pane_cp027

0x4bb5,	// (0x00012cdd) cell_imed_effect_pane_ParamLimits

0x4bb5,	// (0x00012cdd) cell_imed_effect_pane

0xc709,	// (0x0001a831) cell_imed_colour_pane_ParamLimits

0xc709,	// (0x0001a831) cell_imed_colour_pane

0xc753,	// (0x0001a87b) cell_imed_colour_pane_g1_ParamLimits

0xc753,	// (0x0001a87b) cell_imed_colour_pane_g1

0xc764,	// (0x0001a88c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc764,	// (0x0001a88c) hgihlgiht_grid_pane_cp016

0x4be0,	// (0x00012d08) cell_imed_effect_pane_g1

0x4be8,	// (0x00012d10) grid_highlight_pane_cp017

0xc775,	// (0x0001a89d) list_imed_single_pane_ParamLimits

0xc775,	// (0x0001a89d) list_imed_single_pane

0x95ac,	// (0x000176d4) list_highlight_pane_cp07

0xc789,	// (0x0001a8b1) list_imed_aspect_pane_comp1_t1

0xab0f,	// (0x00018c37) bg_tb_trans_pane_cp05

0xc7ab,	// (0x0001a8d3) popup_imed_adjust2_window_g1

0xc7d2,	// (0x0001a8fa) popup_imed_adjust2_window_t1

0xc7ea,	// (0x0001a912) slider_imed_adjust_pane

0xc7fe,	// (0x0001a926) slider_imed_adjust_pane_g1

0xc80e,	// (0x0001a936) slider_imed_adjust_pane_g2

0xc81e,	// (0x0001a946) slider_imed_adjust_pane_g3

0xc82f,	// (0x0001a957) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x0001d87c) slider_imed_adjust_pane_g

0x4bf1,	// (0x00012d19) aid_size_cell_clipart2

0xc840,	// (0x0001a968) grid_imed_clipart_pane

0xc84a,	// (0x0001a972) scroll_pane_cp031

0x4bfd,	// (0x00012d25) cell_imed_clipart_pane_ParamLimits

0x4bfd,	// (0x00012d25) cell_imed_clipart_pane

0x4c1a,	// (0x00012d42) cell_imed_clipart_pane_g1

0x95ac,	// (0x000176d4) grid_highlight_pane_cp014

0x48cc,	// (0x000129f4) main_clock2_pane_g1_ParamLimits

0x48cc,	// (0x000129f4) main_clock2_pane_g1

0x4a0d,	// (0x00012b35) aid_call2_pane_cp10

0x4a1f,	// (0x00012b47) aid_call_pane_cp10

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g1

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g2

0x4a31,	// (0x00012b59) popup_clock_analogue_window_cp10_g3

0x4a31,	// (0x00012b59) popup_clock_analogue_window_cp10_g4

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x0001d86a) popup_clock_analogue_window_cp10_g

0x4a47,	// (0x00012b6f) popup_clock_analogue_window_cp10_t1

0x4a78,	// (0x00012ba0) clock_digital_number_pane_cp10_ParamLimits

0x4a78,	// (0x00012ba0) clock_digital_number_pane_cp10

0x4a92,	// (0x00012bba) clock_digital_number_pane_cp11_ParamLimits

0x4a92,	// (0x00012bba) clock_digital_number_pane_cp11

0x4aac,	// (0x00012bd4) clock_digital_number_pane_cp12_ParamLimits

0x4aac,	// (0x00012bd4) clock_digital_number_pane_cp12

0x4ac8,	// (0x00012bf0) clock_digital_number_pane_cp13_ParamLimits

0x4ac8,	// (0x00012bf0) clock_digital_number_pane_cp13

0x4ae4,	// (0x00012c0c) clock_digital_separator_pane_cp10_ParamLimits

0x4ae4,	// (0x00012c0c) clock_digital_separator_pane_cp10

0x4b00,	// (0x00012c28) popup_clock_digital_window_cp02_t1_ParamLimits

0x4b00,	// (0x00012c28) popup_clock_digital_window_cp02_t1

0x9cca,	// (0x00017df2) clock_digital_number_pane_cp10_g1

0x9cca,	// (0x00017df2) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x0001d885) clock_digital_number_pane_cp10_g

0x9cca,	// (0x00017df2) clock_digital_separator_pane_cp10_g1

0x9cca,	// (0x00017df2) clock_digital_separator_pane_g2_cp10

0xa9e0,	// (0x00018b08) navi_pane_vded_g4

0xa9e9,	// (0x00018b11) navi_pane_vded_g5

0xa9f2,	// (0x00018b1a) navi_pane_vded_t1

0x95ac,	// (0x000176d4) main_vded_pane

0x4c23,	// (0x00012d4b) main_vded_pane_g1

0x4c2f,	// (0x00012d57) main_vded_pane_g2

0x4c3b,	// (0x00012d63) main_vded_pane_g3

0x0002,

0xf762,	// (0x0001d88a) main_vded_pane_g

0x4c47,	// (0x00012d6f) main_vded_pane_t1

0x4c55,	// (0x00012d7d) main_vded_pane_t2

0x0001,

0xf769,	// (0x0001d891) main_vded_pane_t

0x4c63,	// (0x00012d8b) vded_slider_pane

0x4c6d,	// (0x00012d95) vded_video_pane

0xc852,	// (0x0001a97a) vded_video_pane_g1

0x4c79,	// (0x00012da1) vded_video_pane_g2

0xa049,	// (0x00018171) vded_video_pane_g3

0x0002,

0xf76e,	// (0x0001d896) vded_video_pane_g

0xc85c,	// (0x0001a984) vded_slider_pane_g1

0xc06a,	// (0x0001a192) vded_slider_pane_g2

0xc865,	// (0x0001a98d) vded_slider_pane_g3

0xc86e,	// (0x0001a996) vded_slider_pane_g4

0xc877,	// (0x0001a99f) vded_slider_pane_g5

0x0004,

0xf775,	// (0x0001d89d) vded_slider_pane_g

0x472d,	// (0x00012855) mup3_rocker_pane_ParamLimits

0x472d,	// (0x00012855) mup3_rocker_pane

0x4c82,	// (0x00012daa) mup3_control_keys_pane_g1

0x4c8a,	// (0x00012db2) mup3_control_keys_pane_g2

0x4c92,	// (0x00012dba) mup3_control_keys_pane_g3

0x4c9a,	// (0x00012dc2) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x0001d8a8) mup3_control_keys_pane_g

0x09b2,	// (0x0000eada) popup_toolbar2_fixed_window_cp01_ParamLimits

0x09b2,	// (0x0000eada) popup_toolbar2_fixed_window_cp01

0x4763,	// (0x0001288b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4763,	// (0x0001288b) popup_toolbar2_fixed_window_cp02

0xb246,	// (0x0001936e) popup_call2_audio_second_window_t4_ParamLimits

0xb246,	// (0x0001936e) popup_call2_audio_second_window_t4

0xb782,	// (0x000198aa) popup_call2_audio_first_window_t6_ParamLimits

0xb782,	// (0x000198aa) popup_call2_audio_first_window_t6

0xb9c0,	// (0x00019ae8) popup_call2_audio_out_window_t6_ParamLimits

0xb9c0,	// (0x00019ae8) popup_call2_audio_out_window_t6

0x95ac,	// (0x000176d4) main_vitu_pane

0x9621,	// (0x00017749) aid_size_cell_itu_ParamLimits

0x9621,	// (0x00017749) aid_size_cell_itu

0x9621,	// (0x00017749) bg_popup_window_pane_cp08_ParamLimits

0x9621,	// (0x00017749) bg_popup_window_pane_cp08

0x9621,	// (0x00017749) field_vitu_entry_pane_ParamLimits

0x9621,	// (0x00017749) field_vitu_entry_pane

0x9621,	// (0x00017749) grid_vitu_function_pane_ParamLimits

0x9621,	// (0x00017749) grid_vitu_function_pane

0x9621,	// (0x00017749) grid_vitu_itu_pane_ParamLimits

0x9621,	// (0x00017749) grid_vitu_itu_pane

0x9621,	// (0x00017749) cell_vitu_itu_pane_ParamLimits

0x9621,	// (0x00017749) cell_vitu_itu_pane

0x9621,	// (0x00017749) cell_vitu_function_pane_ParamLimits

0x9621,	// (0x00017749) cell_vitu_function_pane

0x9621,	// (0x00017749) bg_popup_sub_pane_cp08_ParamLimits

0x9621,	// (0x00017749) bg_popup_sub_pane_cp08

0xa01b,	// (0x00018143) field_vitu_entry_pane_t1_ParamLimits

0xa01b,	// (0x00018143) field_vitu_entry_pane_t1

0xc880,	// (0x0001a9a8) field_vitu_entry_pane_t2_ParamLimits

0xc880,	// (0x0001a9a8) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x0001d8b1) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x0001d8b1) field_vitu_entry_pane_t

0xbf91,	// (0x0001a0b9) bg_button_pane_cp05_ParamLimits

0xbf91,	// (0x0001a0b9) bg_button_pane_cp05

0xc89d,	// (0x0001a9c5) cell_vitu_itu_pane_g1

0xaae7,	// (0x00018c0f) cell_vitu_itu_pane_t1_ParamLimits

0xaae7,	// (0x00018c0f) cell_vitu_itu_pane_t1

0xaae7,	// (0x00018c0f) cell_vitu_itu_pane_t2_ParamLimits

0xaae7,	// (0x00018c0f) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x0001d8b6) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x0001d8b6) cell_vitu_itu_pane_t

0x95ac,	// (0x000176d4) bg_button_pane_cp07

0xa049,	// (0x00018171) cell_vitu_function_pane_g1

0x9d8b,	// (0x00017eb3) main_calc_pane_g1

0x07da,	// (0x0000e902) aid_visual_content_pane

0x95ac,	// (0x000176d4) main_vradio_pane

0x9d4d,	// (0x00017e75) main_vradio_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) main_vradio_pane_g1

0x9d5b,	// (0x00017e83) main_vradio_pane_g2_ParamLimits

0x9d5b,	// (0x00017e83) main_vradio_pane_g2

0x0001,

0xf795,	// (0x0001d8bd) main_vradio_pane_g_ParamLimits

0xf795,	// (0x0001d8bd) main_vradio_pane_g

0xa01b,	// (0x00018143) main_vradio_pane_t1_ParamLimits

0xa01b,	// (0x00018143) main_vradio_pane_t1

0xa01b,	// (0x00018143) main_vradio_pane_t2_ParamLimits

0xa01b,	// (0x00018143) main_vradio_pane_t2

0xaafb,	// (0x00018c23) main_vradio_pane_t3_ParamLimits

0xaafb,	// (0x00018c23) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x0001d8c2) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x0001d8c2) main_vradio_pane_t

0x9621,	// (0x00017749) vradio_rocker_control_pane_ParamLimits

0x9621,	// (0x00017749) vradio_rocker_control_pane

0x9621,	// (0x00017749) vradio_station_info_pane_ParamLimits

0x9621,	// (0x00017749) vradio_station_info_pane

0x9621,	// (0x00017749) vradio_frequency_info_pane_ParamLimits

0x9621,	// (0x00017749) vradio_frequency_info_pane

0xa049,	// (0x00018171) vradio_station_info_pane_g1

0xaae7,	// (0x00018c0f) vradio_station_info_pane_t1_ParamLimits

0xaae7,	// (0x00018c0f) vradio_station_info_pane_t1

0xaafb,	// (0x00018c23) vradio_station_info_pane_t2_ParamLimits

0xaafb,	// (0x00018c23) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x0001d8c9) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x0001d8c9) vradio_station_info_pane_t

0x95ac,	// (0x000176d4) vradio_tuning_pane

0x4caa,	// (0x00012dd2) vradio_rocker_control_pane_g1

0xc8b9,	// (0x0001a9e1) vradio_rocker_control_pane_g2

0x4cb4,	// (0x00012ddc) vradio_rocker_control_pane_g3

0x4cbe,	// (0x00012de6) vradio_rocker_control_pane_g4

0x4cc8,	// (0x00012df0) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x0001d8ce) vradio_rocker_control_pane_g

0xa049,	// (0x00018171) vradio_frequency_info_pane_g1

0xa01b,	// (0x00018143) vradio_frequency_info_pane_t1_ParamLimits

0xa01b,	// (0x00018143) vradio_frequency_info_pane_t1

0x4cd2,	// (0x00012dfa) vradio_tuning_pane_g1

0x4cdd,	// (0x00012e05) vradio_tuning_pane_t1

0x95da,	// (0x00017702) area_side_right_pane_ParamLimits

0x95da,	// (0x00017702) area_side_right_pane

0xbdb2,	// (0x00019eda) status_small_pane_g1

0xbdba,	// (0x00019ee2) status_small_pane_g2

0xbdc3,	// (0x00019eeb) status_small_pane_g3

0xbdcc,	// (0x00019ef4) status_small_pane_g4

0x0003,

0xf572,	// (0x0001d69a) status_small_pane_g

0xbdd5,	// (0x00019efd) status_small_pane_t1

0x95ac,	// (0x000176d4) main_video3_pane

0xc8c1,	// (0x0001a9e9) cams_zoom_vslider_pane

0xc8c9,	// (0x0001a9f1) image3_wide_pane_ParamLimits

0xc8c9,	// (0x0001a9f1) image3_wide_pane

0xc8e3,	// (0x0001aa0b) image3_wide_small_pane

0xc8ef,	// (0x0001aa17) main_video3_pane_g1_ParamLimits

0xc8ef,	// (0x0001aa17) main_video3_pane_g1

0xc90b,	// (0x0001aa33) main_video3_pane_g2_ParamLimits

0xc90b,	// (0x0001aa33) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x0001d8d9) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x0001d8d9) main_video3_pane_g

0xc927,	// (0x0001aa4f) main_video3_pane_t1_ParamLimits

0xc927,	// (0x0001aa4f) main_video3_pane_t1

0xc952,	// (0x0001aa7a) main_video3_pane_t2_ParamLimits

0xc952,	// (0x0001aa7a) main_video3_pane_t2

0xc97f,	// (0x0001aaa7) main_video3_pane_t3_ParamLimits

0xc97f,	// (0x0001aaa7) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x0001d8de) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x0001d8de) main_video3_pane_t

0xc9ac,	// (0x0001aad4) cams_zoom_vslider_pane_g1

0xc9b5,	// (0x0001aadd) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x0001d8e5) cams_zoom_vslider_pane_g

0xc9bd,	// (0x0001aae5) small_slider_vertical_pane

0xa049,	// (0x00018171) small_slider_vertical_pane_g1

0xa049,	// (0x00018171) small_slider_vertical_pane_g2

0xc9c5,	// (0x0001aaed) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x0001d8ea) small_slider_vertical_pane_g

0x95ac,	// (0x000176d4) main_hwr_training_pane

0xc9ce,	// (0x0001aaf6) hwr_training_instruct_pane_ParamLimits

0xc9ce,	// (0x0001aaf6) hwr_training_instruct_pane

0x4cec,	// (0x00012e14) hwr_training_navi_pane_ParamLimits

0x4cec,	// (0x00012e14) hwr_training_navi_pane

0x4d0b,	// (0x00012e33) hwr_training_write_pane_ParamLimits

0x4d0b,	// (0x00012e33) hwr_training_write_pane

0x95ac,	// (0x000176d4) bg_frame_shadow_pane

0xca05,	// (0x0001ab2d) hwr_training_write_pane_g1

0xca0d,	// (0x0001ab35) hwr_training_write_pane_g2

0xca15,	// (0x0001ab3d) hwr_training_write_pane_g3

0xca1d,	// (0x0001ab45) hwr_training_write_pane_g4

0xca25,	// (0x0001ab4d) hwr_training_write_pane_g5

0xca2d,	// (0x0001ab55) hwr_training_write_pane_g6

0xca35,	// (0x0001ab5d) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x0001d8f1) hwr_training_write_pane_g

0xca3d,	// (0x0001ab65) hwr_training_navi_pane_g1_ParamLimits

0xca3d,	// (0x0001ab65) hwr_training_navi_pane_g1

0xca4f,	// (0x0001ab77) hwr_training_navi_pane_g2_ParamLimits

0xca4f,	// (0x0001ab77) hwr_training_navi_pane_g2

0xca61,	// (0x0001ab89) hwr_training_navi_pane_g3_ParamLimits

0xca61,	// (0x0001ab89) hwr_training_navi_pane_g3

0xca71,	// (0x0001ab99) hwr_training_navi_pane_g4_ParamLimits

0xca71,	// (0x0001ab99) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x0001d900) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x0001d900) hwr_training_navi_pane_g

0xca7e,	// (0x0001aba6) hwr_training_navi_pane_t1

0x4d53,	// (0x00012e7b) list_single_hwr_training_instruct_pane_ParamLimits

0x4d53,	// (0x00012e7b) list_single_hwr_training_instruct_pane

0xca8c,	// (0x0001abb4) list_single_hwr_training_instruct_pane_t1

0xc246,	// (0x0001a36e) bg_frame_shadow_pane_g1

0xca9b,	// (0x0001abc3) bg_frame_shadow_pane_g2

0xcaa3,	// (0x0001abcb) bg_frame_shadow_pane_g3

0xcaab,	// (0x0001abd3) bg_frame_shadow_pane_g4

0xcab3,	// (0x0001abdb) bg_frame_shadow_pane_g5

0xcabb,	// (0x0001abe3) bg_frame_shadow_pane_g6

0xcac3,	// (0x0001abeb) bg_frame_shadow_pane_g7

0x9ebd,	// (0x00017fe5) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x0001d90b) bg_frame_shadow_pane_g

0x95ac,	// (0x000176d4) main_video_tele_dialer_pane

0x4d6f,	// (0x00012e97) aid_size_cell_video_keypad_ParamLimits

0x4d6f,	// (0x00012e97) aid_size_cell_video_keypad

0x4d89,	// (0x00012eb1) grid_video_dialer_keypad_pane_ParamLimits

0x4d89,	// (0x00012eb1) grid_video_dialer_keypad_pane

0x4dd5,	// (0x00012efd) video_down_pane_cp_ParamLimits

0x4dd5,	// (0x00012efd) video_down_pane_cp

0x4e07,	// (0x00012f2f) cell_video_dialer_keypad_pane_ParamLimits

0x4e07,	// (0x00012f2f) cell_video_dialer_keypad_pane

0xcacb,	// (0x0001abf3) bg_button_pane_cp08_ParamLimits

0xcacb,	// (0x0001abf3) bg_button_pane_cp08

0x4e2d,	// (0x00012f55) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4e2d,	// (0x00012f55) cell_video_dialer_keypad_pane_g1

0x4717,	// (0x0001283f) mup3_rocker2_pane_ParamLimits

0x4717,	// (0x0001283f) mup3_rocker2_pane

0xa049,	// (0x00018171) mup3_rocker2_pane_g1

0x386a,	// (0x00011992) main_dialer2_pane

0x95ac,	// (0x000176d4) main_mp4_pane

0xcaf5,	// (0x0001ac1d) main_mp4_pane_g1_ParamLimits

0xcaf5,	// (0x0001ac1d) main_mp4_pane_g1

0xcaf5,	// (0x0001ac1d) main_mp4_pane_g2_ParamLimits

0xcaf5,	// (0x0001ac1d) main_mp4_pane_g2

0x4e68,	// (0x00012f90) main_mp4_pane_g3_ParamLimits

0x4e68,	// (0x00012f90) main_mp4_pane_g3

0xcb03,	// (0x0001ac2b) main_mp4_pane_g4_ParamLimits

0xcb03,	// (0x0001ac2b) main_mp4_pane_g4

0xcb31,	// (0x0001ac59) main_mp4_pane_g5_ParamLimits

0xcb31,	// (0x0001ac59) main_mp4_pane_g5

0x0007,

0xf803,	// (0x0001d92b) main_mp4_pane_g_ParamLimits

0xf803,	// (0x0001d92b) main_mp4_pane_g

0xcba5,	// (0x0001accd) main_mp4_pane_t1_ParamLimits

0xcba5,	// (0x0001accd) main_mp4_pane_t1

0xcc01,	// (0x0001ad29) main_mp4_pane_t2_ParamLimits

0xcc01,	// (0x0001ad29) main_mp4_pane_t2

0xcc53,	// (0x0001ad7b) main_mp4_pane_t3_ParamLimits

0xcc53,	// (0x0001ad7b) main_mp4_pane_t3

0xcc79,	// (0x0001ada1) main_mp4_pane_t4_ParamLimits

0xcc79,	// (0x0001ada1) main_mp4_pane_t4

0x0003,

0xf814,	// (0x0001d93c) main_mp4_pane_t_ParamLimits

0xf814,	// (0x0001d93c) main_mp4_pane_t

0xccb9,	// (0x0001ade1) mp4_progress_pane_ParamLimits

0xccb9,	// (0x0001ade1) mp4_progress_pane

0xcd03,	// (0x0001ae2b) mp4_rocker_pane_ParamLimits

0xcd03,	// (0x0001ae2b) mp4_rocker_pane

0xcd2b,	// (0x0001ae53) mp4_progress_pane_t1

0xcd44,	// (0x0001ae6c) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x0001d945) mp4_progress_pane_t

0xcd5d,	// (0x0001ae85) mup_progress_pane_cp04

0xa049,	// (0x00018171) mp4_rocker_pane_g1

0x4eb2,	// (0x00012fda) aid_cell_size_keypad2_ParamLimits

0x4eb2,	// (0x00012fda) aid_cell_size_keypad2

0x4ec8,	// (0x00012ff0) dialer2_ne_pane_ParamLimits

0x4ec8,	// (0x00012ff0) dialer2_ne_pane

0x4ee0,	// (0x00013008) grid_dialer2_keypad_pane_ParamLimits

0x4ee0,	// (0x00013008) grid_dialer2_keypad_pane

0xbf91,	// (0x0001a0b9) bg_popup_call_pane_cp07_ParamLimits

0xbf91,	// (0x0001a0b9) bg_popup_call_pane_cp07

0x4efc,	// (0x00013024) dialer2_ne_pane_t1_ParamLimits

0x4efc,	// (0x00013024) dialer2_ne_pane_t1

0x4f3c,	// (0x00013064) cell_dialer2_keypad_pane_ParamLimits

0x4f3c,	// (0x00013064) cell_dialer2_keypad_pane

0xcd82,	// (0x0001aeaa) bg_button_pane_pane_cp04_ParamLimits

0xcd82,	// (0x0001aeaa) bg_button_pane_pane_cp04

0x4f62,	// (0x0001308a) cell_dialer2_keypad_pane_g1_ParamLimits

0x4f62,	// (0x0001308a) cell_dialer2_keypad_pane_g1

0x15d3,	// (0x0000f6fb) aid_placing_vt_set_content_ParamLimits

0x15d3,	// (0x0000f6fb) aid_placing_vt_set_content

0x15f7,	// (0x0000f71f) aid_placing_vt_set_title_ParamLimits

0x15f7,	// (0x0000f71f) aid_placing_vt_set_title

0x95ac,	// (0x000176d4) main_image3_pane

0x5028,	// (0x00013150) area_side_right_pane_cp01_ParamLimits

0x5028,	// (0x00013150) area_side_right_pane_cp01

0xcaf5,	// (0x0001ac1d) main_image3_pane_g1_ParamLimits

0xcaf5,	// (0x0001ac1d) main_image3_pane_g1

0x5041,	// (0x00013169) main_image3_pane_g2_ParamLimits

0x5041,	// (0x00013169) main_image3_pane_g2

0x5069,	// (0x00013191) main_image3_pane_g3_ParamLimits

0x5069,	// (0x00013191) main_image3_pane_g3

0x5093,	// (0x000131bb) main_image3_pane_g4_ParamLimits

0x5093,	// (0x000131bb) main_image3_pane_g4

0x0003,

0xf82c,	// (0x0001d954) main_image3_pane_g_ParamLimits

0xf82c,	// (0x0001d954) main_image3_pane_g

0x50bd,	// (0x000131e5) main_image3_pane_t1_ParamLimits

0x50bd,	// (0x000131e5) main_image3_pane_t1

0x5115,	// (0x0001323d) main_image3_pane_t2_ParamLimits

0x5115,	// (0x0001323d) main_image3_pane_t2

0x5167,	// (0x0001328f) main_image3_pane_t3_ParamLimits

0x5167,	// (0x0001328f) main_image3_pane_t3

0x0003,

0xf835,	// (0x0001d95d) main_image3_pane_t_ParamLimits

0xf835,	// (0x0001d95d) main_image3_pane_t

0x9621,	// (0x00017749) grid_sctrl_middle_pane_cp01_ParamLimits

0x9621,	// (0x00017749) grid_sctrl_middle_pane_cp01

0x51ef,	// (0x00013317) cell_sctrl_middle_pane_cp01_ParamLimits

0x51ef,	// (0x00013317) cell_sctrl_middle_pane_cp01

0x520c,	// (0x00013334) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x520c,	// (0x00013334) cell_sctrl_middle_pane_cp01_g1

0x95ac,	// (0x000176d4) main_call4_pane

0x5221,	// (0x00013349) aid_size_button_call4_ParamLimits

0x5221,	// (0x00013349) aid_size_button_call4

0x5254,	// (0x0001337c) call4_windows_pane_ParamLimits

0x5254,	// (0x0001337c) call4_windows_pane

0x5273,	// (0x0001339b) grid_call4_button_pane_ParamLimits

0x5273,	// (0x0001339b) grid_call4_button_pane

0x52aa,	// (0x000133d2) call4_windows_conf_pane

0x52c3,	// (0x000133eb) popup_call4_audio_first_window_ParamLimits

0x52c3,	// (0x000133eb) popup_call4_audio_first_window

0x5313,	// (0x0001343b) popup_call4_audio_second_window_ParamLimits

0x5313,	// (0x0001343b) popup_call4_audio_second_window

0x532c,	// (0x00013454) popup_call4_audio_wait_window_ParamLimits

0x532c,	// (0x00013454) popup_call4_audio_wait_window

0x533a,	// (0x00013462) cell_call4_button_pane_ParamLimits

0x533a,	// (0x00013462) cell_call4_button_pane

0x5361,	// (0x00013489) bg_button_pane_cp09_ParamLimits

0x5361,	// (0x00013489) bg_button_pane_cp09

0x536d,	// (0x00013495) cell_call4_button_pane_g1_ParamLimits

0x536d,	// (0x00013495) cell_call4_button_pane_g1

0x5393,	// (0x000134bb) cell_call4_button_pane_t1_ParamLimits

0x5393,	// (0x000134bb) cell_call4_button_pane_t1

0xcdfc,	// (0x0001af24) popup_call4_audio_conf_window_ParamLimits

0xcdfc,	// (0x0001af24) popup_call4_audio_conf_window

0x4779,	// (0x000128a1) mup3_progress_pane_t1_ParamLimits

0x4798,	// (0x000128c0) mup3_progress_pane_t2_ParamLimits

0xc580,	// (0x0001a6a8) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x0001d832) mup3_progress_pane_t_ParamLimits

0xc59d,	// (0x0001a6c5) mup_progress_pane_cp03_ParamLimits

0x4ca2,	// (0x00012dca) mup3_control_keys_pane_g4_copy1

0xcce7,	// (0x0001ae0f) mp4_rocker2_pane_ParamLimits

0xcce7,	// (0x0001ae0f) mp4_rocker2_pane

0xce16,	// (0x0001af3e) mp4_rocker2_pane_g1

0xce1e,	// (0x0001af46) mp4_rocker2_pane_g2

0xce26,	// (0x0001af4e) mp4_rocker2_pane_g3

0xce2e,	// (0x0001af56) mp4_rocker2_pane_g4

0xce36,	// (0x0001af5e) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x0001d966) mp4_rocker2_pane_g

0x95ac,	// (0x000176d4) main_camera4_pane

0x95ac,	// (0x000176d4) main_video4_pane

0x4da3,	// (0x00012ecb) main_video_tele_dialer_pane_t1_ParamLimits

0x4da3,	// (0x00012ecb) main_video_tele_dialer_pane_t1

0x4dbc,	// (0x00012ee4) main_video_tele_dialer_pane_t2_ParamLimits

0x4dbc,	// (0x00012ee4) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x0001d91c) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x0001d91c) main_video_tele_dialer_pane_t

0x53d1,	// (0x000134f9) cam4_autofocus_pane_ParamLimits

0x53d1,	// (0x000134f9) cam4_autofocus_pane

0x53e7,	// (0x0001350f) cam4_image_uncrop_pane_ParamLimits

0x53e7,	// (0x0001350f) cam4_image_uncrop_pane

0x5400,	// (0x00013528) cam4_indicators_pane_ParamLimits

0x5400,	// (0x00013528) cam4_indicators_pane

0x5430,	// (0x00013558) main_camera4_pane_g1_ParamLimits

0x5430,	// (0x00013558) main_camera4_pane_g1

0x5442,	// (0x0001356a) main_camera4_pane_g2_ParamLimits

0x5442,	// (0x0001356a) main_camera4_pane_g2

0x5455,	// (0x0001357d) main_camera4_pane_g3_ParamLimits

0x5455,	// (0x0001357d) main_camera4_pane_g3

0x5468,	// (0x00013590) main_camera4_pane_g4_ParamLimits

0x5468,	// (0x00013590) main_camera4_pane_g4

0x547b,	// (0x000135a3) main_camera4_pane_g5_ParamLimits

0x547b,	// (0x000135a3) main_camera4_pane_g5

0x0005,

0xf849,	// (0x0001d971) main_camera4_pane_g_ParamLimits

0xf849,	// (0x0001d971) main_camera4_pane_g

0x549f,	// (0x000135c7) main_camera4_pane_t1_ParamLimits

0x549f,	// (0x000135c7) main_camera4_pane_t1

0x9d4d,	// (0x00017e75) bg_tb_trans_pane_cp06

0xce64,	// (0x0001af8c) cam4_indicators_pane_g1

0xce75,	// (0x0001af9d) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x0001d98c) cam4_indicators_pane_g

0xce8d,	// (0x0001afb5) cam4_indicators_pane_t1

0x5503,	// (0x0001362b) main_video4_pane_g1_ParamLimits

0x5503,	// (0x0001362b) main_video4_pane_g1

0x5512,	// (0x0001363a) main_video4_pane_g2_ParamLimits

0x5512,	// (0x0001363a) main_video4_pane_g2

0x5522,	// (0x0001364a) main_video4_pane_g3_ParamLimits

0x5522,	// (0x0001364a) main_video4_pane_g3

0x5532,	// (0x0001365a) main_video4_pane_g4_ParamLimits

0x5532,	// (0x0001365a) main_video4_pane_g4

0x0004,

0xf86b,	// (0x0001d993) main_video4_pane_g_ParamLimits

0xf86b,	// (0x0001d993) main_video4_pane_g

0x5552,	// (0x0001367a) vid4_indicators_pane_ParamLimits

0x5552,	// (0x0001367a) vid4_indicators_pane

0x557c,	// (0x000136a4) video4_image_uncrop_cif_pane_ParamLimits

0x557c,	// (0x000136a4) video4_image_uncrop_cif_pane

0x5596,	// (0x000136be) video4_image_uncrop_nhd_pane_ParamLimits

0x5596,	// (0x000136be) video4_image_uncrop_nhd_pane

0x53e7,	// (0x0001350f) video4_image_uncrop_vga_pane_ParamLimits

0x53e7,	// (0x0001350f) video4_image_uncrop_vga_pane

0x9621,	// (0x00017749) bg_tb_trans_pane_cp07

0xcebb,	// (0x0001afe3) vid4_indicators_pane_g1

0xced1,	// (0x0001aff9) vid4_indicators_pane_g2

0xcee5,	// (0x0001b00d) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x0001d99e) vid4_indicators_pane_g

0xcf16,	// (0x0001b03e) vid4_indicators_pane_t1

0x55ad,	// (0x000136d5) cam4_autofocus_pane_g1

0x55b5,	// (0x000136dd) cam4_autofocus_pane_g2

0x55bd,	// (0x000136e5) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x0001d9a9) cam4_autofocus_pane_g

0x55c5,	// (0x000136ed) cam4_autofocus_pane_g3_copy1

0x4deb,	// (0x00012f13) video_down_pane_cp_t1

0x4df9,	// (0x00012f21) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x0001d921) video_down_pane_cp_t

0x9621,	// (0x00017749) popup_vitu2_window_ParamLimits

0x9621,	// (0x00017749) popup_vitu2_window

0x55cd,	// (0x000136f5) aid_size_cell2_itu2_ParamLimits

0x55cd,	// (0x000136f5) aid_size_cell2_itu2

0x55f3,	// (0x0001371b) aid_size_cell_itu2_ParamLimits

0x55f3,	// (0x0001371b) aid_size_cell_itu2

0x4827,	// (0x0001294f) bg_popup_window_pane_cp09_ParamLimits

0x4827,	// (0x0001294f) bg_popup_window_pane_cp09

0x5651,	// (0x00013779) field_vitu2_entry_pane_ParamLimits

0x5651,	// (0x00013779) field_vitu2_entry_pane

0x5679,	// (0x000137a1) grid_vitu2_function_pane_ParamLimits

0x5679,	// (0x000137a1) grid_vitu2_function_pane

0x56ca,	// (0x000137f2) grid_vitu2_itu_pane_ParamLimits

0x56ca,	// (0x000137f2) grid_vitu2_itu_pane

0x575a,	// (0x00013882) cell_vitu2_itu_pane_ParamLimits

0x575a,	// (0x00013882) cell_vitu2_itu_pane

0x5788,	// (0x000138b0) cell_vitu2_function_pane_ParamLimits

0x5788,	// (0x000138b0) cell_vitu2_function_pane

0xcf2d,	// (0x0001b055) bg_popup_call_pane_cp08_ParamLimits

0xcf2d,	// (0x0001b055) bg_popup_call_pane_cp08

0xcf44,	// (0x0001b06c) field_vitu2_entry_pane_g1

0xcf50,	// (0x0001b078) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x0001d9b0) field_vitu2_entry_pane_g

0xcf5c,	// (0x0001b084) field_vitu2_entry_pane_t1_ParamLimits

0xcf5c,	// (0x0001b084) field_vitu2_entry_pane_t1

0xcf8b,	// (0x0001b0b3) field_vitu2_entry_pane_t2_ParamLimits

0xcf8b,	// (0x0001b0b3) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x0001d9b7) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x0001d9b7) field_vitu2_entry_pane_t

0x57cc,	// (0x000138f4) bg_button_pane_cp010_ParamLimits

0x57cc,	// (0x000138f4) bg_button_pane_cp010

0x57da,	// (0x00013902) cell_vitu2_itu_pane_g1

0x5800,	// (0x00013928) cell_vitu2_itu_pane_t1_ParamLimits

0x5800,	// (0x00013928) cell_vitu2_itu_pane_t1

0x585e,	// (0x00013986) cell_vitu2_itu_pane_t2_ParamLimits

0x585e,	// (0x00013986) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x0001d9c1) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x0001d9c1) cell_vitu2_itu_pane_t

0x9621,	// (0x00017749) bg_button_pane_cp011

0x594a,	// (0x00013a72) cell_vitu2_function_pane_g1

0x95ac,	// (0x000176d4) main_myfav_hc_pane

0x51b7,	// (0x000132df) popup_image3_note_pane_ParamLimits

0x51b7,	// (0x000132df) popup_image3_note_pane

0x51d3,	// (0x000132fb) popup_image3_tool_bar_pane_ParamLimits

0x51d3,	// (0x000132fb) popup_image3_tool_bar_pane

0x58ec,	// (0x00013a14) cell_vitu2_itu_pane_t3_ParamLimits

0x58ec,	// (0x00013a14) cell_vitu2_itu_pane_t3

0x95ac,	// (0x000176d4) bg_popup_trans_pane

0xcfb0,	// (0x0001b0d8) grid_image3_tool_bar_pane

0xcfba,	// (0x0001b0e2) bg_popup_trans_pane_g1

0xa25e,	// (0x00018386) bg_popup_trans_pane_g2

0xcfc2,	// (0x0001b0ea) bg_popup_trans_pane_g3

0xcfca,	// (0x0001b0f2) bg_popup_trans_pane_g4

0xcfd2,	// (0x0001b0fa) bg_popup_trans_pane_g5

0xcfda,	// (0x0001b102) bg_popup_trans_pane_g6

0xcfe2,	// (0x0001b10a) bg_popup_trans_pane_g7

0xcfea,	// (0x0001b112) bg_popup_trans_pane_g8

0xa23e,	// (0x00018366) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x0001d9c8) bg_popup_trans_pane_g

0xcff2,	// (0x0001b11a) cell_image3_tool_bar_pane_ParamLimits

0xcff2,	// (0x0001b11a) cell_image3_tool_bar_pane

0xa049,	// (0x00018171) cell_image3_tool_bar_pane_g1

0x95ac,	// (0x000176d4) bg_popup_trans_pane_cp1

0xd008,	// (0x0001b130) popup_image3_note_pane_t1

0xd016,	// (0x0001b13e) popup_image3_note_pane_t2

0xd024,	// (0x0001b14c) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x0001d9db) popup_image3_note_pane_t

0xd034,	// (0x0001b15c) popup_image3_note_pane_t3_copy1

0x595e,	// (0x00013a86) bg_myfav_hc_instruction_pane_ParamLimits

0x595e,	// (0x00013a86) bg_myfav_hc_instruction_pane

0x5976,	// (0x00013a9e) cell_myfav_contact_pane_ParamLimits

0x5976,	// (0x00013a9e) cell_myfav_contact_pane

0x5992,	// (0x00013aba) cell_myfav_contact_pane_cp1_ParamLimits

0x5992,	// (0x00013aba) cell_myfav_contact_pane_cp1

0x59aa,	// (0x00013ad2) cell_myfav_contact_pane_cp2_ParamLimits

0x59aa,	// (0x00013ad2) cell_myfav_contact_pane_cp2

0x59c2,	// (0x00013aea) cell_myfav_contact_pane_cp3_ParamLimits

0x59c2,	// (0x00013aea) cell_myfav_contact_pane_cp3

0x59d9,	// (0x00013b01) cell_myfav_contact_pane_cp4_ParamLimits

0x59d9,	// (0x00013b01) cell_myfav_contact_pane_cp4

0x59f1,	// (0x00013b19) cell_myfav_contact_pane_cp5_ParamLimits

0x59f1,	// (0x00013b19) cell_myfav_contact_pane_cp5

0x5a05,	// (0x00013b2d) cell_myfav_contact_pane_cp6_ParamLimits

0x5a05,	// (0x00013b2d) cell_myfav_contact_pane_cp6

0x5a1b,	// (0x00013b43) cell_myfav_contact_pane_cp7_ParamLimits

0x5a1b,	// (0x00013b43) cell_myfav_contact_pane_cp7

0xd042,	// (0x0001b16a) listscroll_gen_pane_cp05

0x5a33,	// (0x00013b5b) main_myfav_hc_pane_g1_ParamLimits

0x5a33,	// (0x00013b5b) main_myfav_hc_pane_g1

0x5a4d,	// (0x00013b75) main_myfav_hc_pane_g2_ParamLimits

0x5a4d,	// (0x00013b75) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x0001d9e2) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x0001d9e2) main_myfav_hc_pane_g

0x5a81,	// (0x00013ba9) main_myfav_hc_pane_t1_ParamLimits

0x5a81,	// (0x00013ba9) main_myfav_hc_pane_t1

0xd04b,	// (0x0001b173) main_myfav_hc_pane_t2_ParamLimits

0xd04b,	// (0x0001b173) main_myfav_hc_pane_t2

0xd05d,	// (0x0001b185) main_myfav_hc_pane_t3_ParamLimits

0xd05d,	// (0x0001b185) main_myfav_hc_pane_t3

0x5a98,	// (0x00013bc0) main_myfav_hc_pane_t4_ParamLimits

0x5a98,	// (0x00013bc0) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x0001d9e9) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x0001d9e9) main_myfav_hc_pane_t

0xa049,	// (0x00018171) bg_myfav_hc_instruction_pane_g1

0xd06f,	// (0x0001b197) cell_myfav_contact_pane_g1_ParamLimits

0xd06f,	// (0x0001b197) cell_myfav_contact_pane_g1

0xd06f,	// (0x0001b197) cell_myfav_contact_pane_g2_ParamLimits

0xd06f,	// (0x0001b197) cell_myfav_contact_pane_g2

0xd07b,	// (0x0001b1a3) cell_myfav_contact_pane_g3_ParamLimits

0xd07b,	// (0x0001b1a3) cell_myfav_contact_pane_g3

0x9d5b,	// (0x00017e83) cell_myfav_contact_pane_g4_ParamLimits

0x9d5b,	// (0x00017e83) cell_myfav_contact_pane_g4

0xd088,	// (0x0001b1b0) cell_myfav_contact_pane_g5_ParamLimits

0xd088,	// (0x0001b1b0) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x0001d9f4) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x0001d9f4) cell_myfav_contact_pane_g

0x5a67,	// (0x00013b8f) main_myfav_hc_pane_g3_ParamLimits

0x5a67,	// (0x00013b8f) main_myfav_hc_pane_g3

0x0915,	// (0x0000ea3d) popup_adpt_find_window

0x5ac2,	// (0x00013bea) afind_page_pane_ParamLimits

0x5ac2,	// (0x00013bea) afind_page_pane

0x5ad7,	// (0x00013bff) aid_size_cell_afind_ParamLimits

0x5ad7,	// (0x00013bff) aid_size_cell_afind

0x5af5,	// (0x00013c1d) bg_popup_sub_pane_cp09_ParamLimits

0x5af5,	// (0x00013c1d) bg_popup_sub_pane_cp09

0x5b02,	// (0x00013c2a) find_pane_cp01_ParamLimits

0x5b02,	// (0x00013c2a) find_pane_cp01

0xd094,	// (0x0001b1bc) grid_afind_control_pane_ParamLimits

0xd094,	// (0x0001b1bc) grid_afind_control_pane

0x5b0f,	// (0x00013c37) grid_afind_pane_ParamLimits

0x5b0f,	// (0x00013c37) grid_afind_pane

0x5b31,	// (0x00013c59) cell_afind_pane_ParamLimits

0x5b31,	// (0x00013c59) cell_afind_pane

0xa049,	// (0x00018171) afind_page_pane_g1

0x5b9e,	// (0x00013cc6) afind_page_pane_g2

0x5ba7,	// (0x00013ccf) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x0001d9ff) afind_page_pane_g

0x5bb0,	// (0x00013cd8) afind_page_pane_t1

0xd0a8,	// (0x0001b1d0) cell_afind_grid_control_pane_ParamLimits

0xd0a8,	// (0x0001b1d0) cell_afind_grid_control_pane

0xcd82,	// (0x0001aeaa) bg_button_pane_cp69_ParamLimits

0xcd82,	// (0x0001aeaa) bg_button_pane_cp69

0x5bd0,	// (0x00013cf8) cell_afind_pane_g1_ParamLimits

0x5bd0,	// (0x00013cf8) cell_afind_pane_g1

0x5bdd,	// (0x00013d05) cell_afind_pane_t1_ParamLimits

0x5bdd,	// (0x00013d05) cell_afind_pane_t1

0xa053,	// (0x0001817b) bg_button_pane_cp72

0xd0b7,	// (0x0001b1df) cell_afind_grid_control_pane_g1

0x32c7,	// (0x000113ef) aid_image_placing_area_ParamLimits

0x32c7,	// (0x000113ef) aid_image_placing_area

0x9d4d,	// (0x00017e75) field_vitu_entry_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) field_vitu_entry_pane_g1

0x9d4d,	// (0x00017e75) field_vitu_entry_pane_g2_ParamLimits

0x9d4d,	// (0x00017e75) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0001d30f) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0001d30f) field_vitu_entry_pane_g

0xc89d,	// (0x0001a9c5) cell_vitu_itu_pane_g1_ParamLimits

0xc880,	// (0x0001a9a8) cell_vitu_itu_pane_t3_ParamLimits

0xc880,	// (0x0001a9a8) cell_vitu_itu_pane_t3

0xcd2b,	// (0x0001ae53) mp4_progress_pane_t1_ParamLimits

0xcd44,	// (0x0001ae6c) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x0001d945) mp4_progress_pane_t_ParamLimits

0xcd5d,	// (0x0001ae85) mup_progress_pane_cp04_ParamLimits

0x5aac,	// (0x00013bd4) main_myfav_hc_pane_t5_ParamLimits

0x5aac,	// (0x00013bd4) main_myfav_hc_pane_t5

0x95d2,	// (0x000176fa) aid_zoom_text_primary

0x0915,	// (0x0000ea3d) popup_adpt_find_window_ParamLimits

0x9621,	// (0x00017749) main_cam_set_pane

0x5419,	// (0x00013541) cam4_zoom_pane_ParamLimits

0x5419,	// (0x00013541) cam4_zoom_pane

0x5bef,	// (0x00013d17) main_cam_set_pane_g1_ParamLimits

0x5bef,	// (0x00013d17) main_cam_set_pane_g1

0x5bfd,	// (0x00013d25) main_cam_set_pane_g2_ParamLimits

0x5bfd,	// (0x00013d25) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x0001da06) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x0001da06) main_cam_set_pane_g

0x5c1e,	// (0x00013d46) main_cam_set_pane_t1_ParamLimits

0x5c1e,	// (0x00013d46) main_cam_set_pane_t1

0x5c39,	// (0x00013d61) main_cset_listscroll_pane_ParamLimits

0x5c39,	// (0x00013d61) main_cset_listscroll_pane

0x5c61,	// (0x00013d89) main_cset_slider_pane_ParamLimits

0x5c61,	// (0x00013d89) main_cset_slider_pane

0xd0c8,	// (0x0001b1f0) main_cset_list_pane_ParamLimits

0xd0c8,	// (0x0001b1f0) main_cset_list_pane

0xd0d8,	// (0x0001b200) scroll_pane_cp028

0x5c8b,	// (0x00013db3) aid_area_touch_slider

0x5ca7,	// (0x00013dcf) cset_slider_pane

0x5cca,	// (0x00013df2) main_cset_slider_pane_g1

0x5cdf,	// (0x00013e07) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x0001da0b) main_cset_slider_pane_g

0xd14a,	// (0x0001b272) main_cset_slider_pane_t1

0x5da1,	// (0x00013ec9) main_cset_slider_pane_t2

0x5dbb,	// (0x00013ee3) main_cset_slider_pane_t3

0x5dd5,	// (0x00013efd) main_cset_slider_pane_t4

0x5def,	// (0x00013f17) main_cset_slider_pane_t5

0x5e0d,	// (0x00013f35) main_cset_slider_pane_t6

0x5e24,	// (0x00013f4c) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x0001da30) main_cset_slider_pane_t

0x5f30,	// (0x00014058) cset_list_set_pane_ParamLimits

0x5f30,	// (0x00014058) cset_list_set_pane

0xd1e4,	// (0x0001b30c) aid_position_infowindow_above

0xd1ec,	// (0x0001b314) aid_position_infowindow_below

0x5f44,	// (0x0001406c) cset_list_set_pane_g1_ParamLimits

0x5f44,	// (0x0001406c) cset_list_set_pane_g1

0x5f50,	// (0x00014078) cset_list_set_pane_g3_ParamLimits

0x5f50,	// (0x00014078) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x0001da4f) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x0001da4f) cset_list_set_pane_g

0x5f5f,	// (0x00014087) cset_list_set_pane_t1_ParamLimits

0x5f5f,	// (0x00014087) cset_list_set_pane_t1

0x9621,	// (0x00017749) list_highlight_pane_cp021_ParamLimits

0x9621,	// (0x00017749) list_highlight_pane_cp021

0xab81,	// (0x00018ca9) cset_slider_pane_g1

0xab93,	// (0x00018cbb) cset_slider_pane_g2

0xab8a,	// (0x00018cb2) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x0001da54) cset_slider_pane_g

0xd1f4,	// (0x0001b31c) aid_area_touch_cam4_zoom

0x5f74,	// (0x0001409c) cam4_zoom_cont_pane

0x5f7c,	// (0x000140a4) cam4_zoom_pane_g1

0x5f84,	// (0x000140ac) cam4_zoom_pane_g2

0x5f8c,	// (0x000140b4) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x0001da5b) cam4_zoom_pane_g

0xd1fd,	// (0x0001b325) cam4_zoom_cont_pane_g1

0xd206,	// (0x0001b32e) cam4_zoom_cont_pane_g2

0xd20f,	// (0x0001b337) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x0001da62) cam4_zoom_cont_pane_g

0x523f,	// (0x00013367) call4_image_pane_ParamLimits

0x523f,	// (0x00013367) call4_image_pane

0x52aa,	// (0x000133d2) call4_windows_conf_pane_ParamLimits

0x52f1,	// (0x00013419) popup_call4_audio_in_window_ParamLimits

0x52f1,	// (0x00013419) popup_call4_audio_in_window

0x95ac,	// (0x000176d4) bg_popup_call2_act_pane_cp02

0xcdf4,	// (0x0001af1c) call4_list_conf_pane

0xa049,	// (0x00018171) call4_image_pane_g1

0xa049,	// (0x00018171) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) call4_image_pane_g

0xd218,	// (0x0001b340) list_single_graphic_popup_conf4_pane_ParamLimits

0xd218,	// (0x0001b340) list_single_graphic_popup_conf4_pane

0x95ac,	// (0x000176d4) list_highlight_pane_cp022

0xd22d,	// (0x0001b355) list_single_graphic_popup_conf4_pane_g1

0xa842,	// (0x0001896a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x0001da69) list_single_graphic_popup_conf4_pane_g

0xd235,	// (0x0001b35d) list_single_graphic_popup_conf4_pane_t1

0x170e,	// (0x0000f836) popup_vtel_slider_window_ParamLimits

0x170e,	// (0x0000f836) popup_vtel_slider_window

0xcd70,	// (0x0001ae98) dialer2_ne_pane_t2_ParamLimits

0xcd70,	// (0x0001ae98) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x0001d94a) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x0001d94a) dialer2_ne_pane_t

0xbf91,	// (0x0001a0b9) bg_popup_sub_pane_cp010_ParamLimits

0xbf91,	// (0x0001a0b9) bg_popup_sub_pane_cp010

0x5f94,	// (0x000140bc) popup_vtel_slider_window_g1_ParamLimits

0x5f94,	// (0x000140bc) popup_vtel_slider_window_g1

0x5fa7,	// (0x000140cf) popup_vtel_slider_window_g2_ParamLimits

0x5fa7,	// (0x000140cf) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x0001da6e) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x0001da6e) popup_vtel_slider_window_g

0x5ffd,	// (0x00014125) vtel_slider_pane_ParamLimits

0x5ffd,	// (0x00014125) vtel_slider_pane

0x601f,	// (0x00014147) vtel_slider_pane_g1_ParamLimits

0x601f,	// (0x00014147) vtel_slider_pane_g1

0x6033,	// (0x0001415b) vtel_slider_pane_g2_ParamLimits

0x6033,	// (0x0001415b) vtel_slider_pane_g2

0x604b,	// (0x00014173) vtel_slider_pane_g3_ParamLimits

0x604b,	// (0x00014173) vtel_slider_pane_g3

0x601f,	// (0x00014147) vtel_slider_pane_g4_ParamLimits

0x601f,	// (0x00014147) vtel_slider_pane_g4

0x6061,	// (0x00014189) vtel_slider_pane_g5_ParamLimits

0x6061,	// (0x00014189) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x0001da77) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x0001da77) vtel_slider_pane_g

0x9621,	// (0x00017749) main_gallery2_pane

0x561f,	// (0x00013747) aid_size_row_itut2_dropdow_list_ParamLimits

0x561f,	// (0x00013747) aid_size_row_itut2_dropdow_list

0x56a1,	// (0x000137c9) grid_vitu2_function_top_pane_ParamLimits

0x56a1,	// (0x000137c9) grid_vitu2_function_top_pane

0x5705,	// (0x0001382d) popup_vitu2_dropdown_list_window_ParamLimits

0x5705,	// (0x0001382d) popup_vitu2_dropdown_list_window

0x572c,	// (0x00013854) popup_vitu2_match_list_window

0x6077,	// (0x0001419f) cell_vitu2_function_top_pane_ParamLimits

0x6077,	// (0x0001419f) cell_vitu2_function_top_pane

0x6091,	// (0x000141b9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6091,	// (0x000141b9) cell_vitu2_function_top_pane_cp01

0x60ad,	// (0x000141d5) cell_vitu2_function_top_wide_pane_ParamLimits

0x60ad,	// (0x000141d5) cell_vitu2_function_top_wide_pane

0x9621,	// (0x00017749) bg_button_pane_cp012

0x60cb,	// (0x000141f3) cell_vitu2_function_top_pane_g1

0xd24b,	// (0x0001b373) bg_button_pane_cp013_ParamLimits

0xd24b,	// (0x0001b373) bg_button_pane_cp013

0x60df,	// (0x00014207) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x60df,	// (0x00014207) cell_vitu2_function_top_wide_pane_g1

0x9621,	// (0x00017749) bg_popup_sub_pane_cp20

0x60f7,	// (0x0001421f) list_vitu2_match_list_pane

0xcfba,	// (0x0001b0e2) bg_popup_sub_pane_cp20_g1

0xcfc2,	// (0x0001b0ea) bg_popup_sub_pane_cp20_g2

0xa25e,	// (0x00018386) bg_popup_sub_pane_cp20_g3

0xcfca,	// (0x0001b0f2) bg_popup_sub_pane_cp20_g4

0xa23e,	// (0x00018366) bg_popup_sub_pane_cp20_g5

0xd267,	// (0x0001b38f) bg_popup_sub_pane_cp20_g6

0xcfda,	// (0x0001b102) bg_popup_sub_pane_cp20_g7

0xcfe2,	// (0x0001b10a) bg_popup_sub_pane_cp20_g8

0xcfea,	// (0x0001b112) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x0001da82) bg_popup_sub_pane_cp20_g

0xd26f,	// (0x0001b397) list_vitu2_match_list_item_pane_ParamLimits

0xd26f,	// (0x0001b397) list_vitu2_match_list_item_pane

0xd281,	// (0x0001b3a9) list_vitu2_match_list_item_pane_t1

0x95ac,	// (0x000176d4) bg_popup_sub_pane_cp21

0x9ff4,	// (0x0001811c) grid_vitu2_dropdown_list_pane

0x610f,	// (0x00014237) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x610f,	// (0x00014237) cell_vitu2_dropdown_list_char_pane

0x6131,	// (0x00014259) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6131,	// (0x00014259) cell_vitu2_dropdown_list_ctrl_pane

0xd28f,	// (0x0001b3b7) cell_vitu2_dropdown_list_char_pane_g1

0xd298,	// (0x0001b3c0) cell_vitu2_dropdown_list_char_pane_g2

0xd2a1,	// (0x0001b3c9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x0001da95) cell_vitu2_dropdown_list_char_pane_g

0x615b,	// (0x00014283) cell_vitu2_dropdown_list_char_pane_t1

0x6169,	// (0x00014291) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6169,	// (0x00014291) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6179,	// (0x000142a1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6179,	// (0x000142a1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x618a,	// (0x000142b2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x618a,	// (0x000142b2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x619a,	// (0x000142c2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x619a,	// (0x000142c2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d4d,	// (0x00017e75) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d4d,	// (0x00017e75) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x0001da9c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x0001da9c) cell_vitu2_dropdown_list_ctrl_pane_g

0x61b6,	// (0x000142de) aid_size_cell_gallery2_ParamLimits

0x61b6,	// (0x000142de) aid_size_cell_gallery2

0x61d4,	// (0x000142fc) grid_gallery2_pane_ParamLimits

0x61d4,	// (0x000142fc) grid_gallery2_pane

0x61ee,	// (0x00014316) scroll_pane_cp029_ParamLimits

0x61ee,	// (0x00014316) scroll_pane_cp029

0x61ff,	// (0x00014327) cell_gallery2_pane_ParamLimits

0x61ff,	// (0x00014327) cell_gallery2_pane

0xd2aa,	// (0x0001b3d2) cell_gallery2_pane_g2

0x6263,	// (0x0001438b) cell_gallery2_pane_g3

0xd2b2,	// (0x0001b3da) cell_gallery2_pane_g4

0xd2ba,	// (0x0001b3e2) cell_gallery2_pane_g5

0x9ff4,	// (0x0001811c) grid_highlight_pane_cp10

0x572c,	// (0x00013854) popup_vitu2_match_list_window_ParamLimits

0x5743,	// (0x0001386b) popup_vitu2_query_window_ParamLimits

0x5743,	// (0x0001386b) popup_vitu2_query_window

0x95ac,	// (0x000176d4) bg_vitu2_candi_button_pane

0xd28f,	// (0x0001b3b7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd298,	// (0x0001b3c0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2a1,	// (0x0001b3c9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x626b,	// (0x00014393) bg_button_pane_cp015

0x6282,	// (0x000143aa) bg_button_pane_cp016

0x628e,	// (0x000143b6) bg_button_pane_cp017

0xab0f,	// (0x00018c37) bg_popup_sub_pane_cp22

0xd2c2,	// (0x0001b3ea) popup_vitu2_query_window_g1

0x62cf,	// (0x000143f7) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x0001daa7) popup_vitu2_query_window_g

0x62f5,	// (0x0001441d) popup_vitu2_query_window_t1_ParamLimits

0x62f5,	// (0x0001441d) popup_vitu2_query_window_t1

0x632a,	// (0x00014452) popup_vitu2_query_window_t2_ParamLimits

0x632a,	// (0x00014452) popup_vitu2_query_window_t2

0x633c,	// (0x00014464) popup_vitu2_query_window_t3_ParamLimits

0x633c,	// (0x00014464) popup_vitu2_query_window_t3

0x6364,	// (0x0001448c) popup_vitu2_query_window_t4_ParamLimits

0x6364,	// (0x0001448c) popup_vitu2_query_window_t4

0x6378,	// (0x000144a0) popup_vitu2_query_window_t5_ParamLimits

0x6378,	// (0x000144a0) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x0001daae) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x0001daae) popup_vitu2_query_window_t

0xd0c0,	// (0x0001b1e8) main_cset_text_pane

0x5c8b,	// (0x00013db3) aid_area_touch_slider_ParamLimits

0x5ca7,	// (0x00013dcf) cset_slider_pane_ParamLimits

0x5cca,	// (0x00013df2) main_cset_slider_pane_g1_ParamLimits

0x5cdf,	// (0x00013e07) main_cset_slider_pane_g2_ParamLimits

0xd11a,	// (0x0001b242) main_cset_slider_pane_g3_ParamLimits

0xd11a,	// (0x0001b242) main_cset_slider_pane_g3

0x5cf4,	// (0x00013e1c) main_cset_slider_pane_g4_ParamLimits

0x5cf4,	// (0x00013e1c) main_cset_slider_pane_g4

0x5d03,	// (0x00013e2b) main_cset_slider_pane_g5_ParamLimits

0x5d03,	// (0x00013e2b) main_cset_slider_pane_g5

0x5d11,	// (0x00013e39) main_cset_slider_pane_g6_ParamLimits

0x5d11,	// (0x00013e39) main_cset_slider_pane_g6

0xf8e3,	// (0x0001da0b) main_cset_slider_pane_g_ParamLimits

0xd14a,	// (0x0001b272) main_cset_slider_pane_t1_ParamLimits

0x5da1,	// (0x00013ec9) main_cset_slider_pane_t2_ParamLimits

0x5dbb,	// (0x00013ee3) main_cset_slider_pane_t3_ParamLimits

0x5dd5,	// (0x00013efd) main_cset_slider_pane_t4_ParamLimits

0x5def,	// (0x00013f17) main_cset_slider_pane_t5_ParamLimits

0x5e0d,	// (0x00013f35) main_cset_slider_pane_t6_ParamLimits

0x5e24,	// (0x00013f4c) main_cset_slider_pane_t7_ParamLimits

0x5e52,	// (0x00013f7a) main_cset_slider_pane_t8_ParamLimits

0x5e52,	// (0x00013f7a) main_cset_slider_pane_t8

0x5e7a,	// (0x00013fa2) main_cset_slider_pane_t9_ParamLimits

0x5e7a,	// (0x00013fa2) main_cset_slider_pane_t9

0x5ea2,	// (0x00013fca) main_cset_slider_pane_t10_ParamLimits

0x5ea2,	// (0x00013fca) main_cset_slider_pane_t10

0x5eca,	// (0x00013ff2) main_cset_slider_pane_t11_ParamLimits

0x5eca,	// (0x00013ff2) main_cset_slider_pane_t11

0x5ef4,	// (0x0001401c) main_cset_slider_pane_t12_ParamLimits

0x5ef4,	// (0x0001401c) main_cset_slider_pane_t12

0x5f11,	// (0x00014039) main_cset_slider_pane_t13_ParamLimits

0x5f11,	// (0x00014039) main_cset_slider_pane_t13

0xf908,	// (0x0001da30) main_cset_slider_pane_t_ParamLimits

0x95ac,	// (0x000176d4) bg_popup_sub_pane_cp011

0xd2ce,	// (0x0001b3f6) main_cset_text_pane_g1

0xd2d6,	// (0x0001b3fe) main_cset_text_pane_t1

0xd2e4,	// (0x0001b40c) main_cset_text_pane_t2

0xd2f2,	// (0x0001b41a) main_cset_text_pane_t3

0xd300,	// (0x0001b428) main_cset_text_pane_t4

0xd30e,	// (0x0001b436) main_cset_text_pane_t5

0xd31c,	// (0x0001b444) main_cset_text_pane_t6

0xd32a,	// (0x0001b452) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x0001dabd) main_cset_text_pane_t

0x95ac,	// (0x000176d4) main_cam4_burst_pane

0x95ac,	// (0x000176d4) main_cam5_pane

0x5bbe,	// (0x00013ce6) bg_button_pane_cp019

0x5bc7,	// (0x00013cef) bg_button_pane_cp020

0xd126,	// (0x0001b24e) main_cset_slider_pane_g7_ParamLimits

0xd126,	// (0x0001b24e) main_cset_slider_pane_g7

0xd132,	// (0x0001b25a) main_cset_slider_pane_g8_ParamLimits

0xd132,	// (0x0001b25a) main_cset_slider_pane_g8

0x5d25,	// (0x00013e4d) main_cset_slider_pane_g9_ParamLimits

0x5d25,	// (0x00013e4d) main_cset_slider_pane_g9

0x5d31,	// (0x00013e59) main_cset_slider_pane_g10_ParamLimits

0x5d31,	// (0x00013e59) main_cset_slider_pane_g10

0x5d3d,	// (0x00013e65) main_cset_slider_pane_g11_ParamLimits

0x5d3d,	// (0x00013e65) main_cset_slider_pane_g11

0x5d49,	// (0x00013e71) main_cset_slider_pane_g12_ParamLimits

0x5d49,	// (0x00013e71) main_cset_slider_pane_g12

0x5d55,	// (0x00013e7d) main_cset_slider_pane_g13_ParamLimits

0x5d55,	// (0x00013e7d) main_cset_slider_pane_g13

0x5d61,	// (0x00013e89) main_cset_slider_pane_g14_ParamLimits

0x5d61,	// (0x00013e89) main_cset_slider_pane_g14

0x5d6d,	// (0x00013e95) main_cset_slider_pane_g15_ParamLimits

0x5d6d,	// (0x00013e95) main_cset_slider_pane_g15

0xd172,	// (0x0001b29a) main_cset_slider_pane_t14_ParamLimits

0xd172,	// (0x0001b29a) main_cset_slider_pane_t14

0xd1ab,	// (0x0001b2d3) main_cset_slider_pane_t15_ParamLimits

0xd1ab,	// (0x0001b2d3) main_cset_slider_pane_t15

0x63e2,	// (0x0001450a) aid_cam4_burst_size_cell_ParamLimits

0x63e2,	// (0x0001450a) aid_cam4_burst_size_cell

0x6402,	// (0x0001452a) grid_cam4_burst_pane_ParamLimits

0x6402,	// (0x0001452a) grid_cam4_burst_pane

0x643c,	// (0x00014564) linegrid_cam4_burst_pane_ParamLimits

0x643c,	// (0x00014564) linegrid_cam4_burst_pane

0xd338,	// (0x0001b460) scroll_pane_cp30_ParamLimits

0xd338,	// (0x0001b460) scroll_pane_cp30

0x645e,	// (0x00014586) cell_cam4_burst_pane_ParamLimits

0x645e,	// (0x00014586) cell_cam4_burst_pane

0xd344,	// (0x0001b46c) linegrid_cam4_burst_pane_g1_ParamLimits

0xd344,	// (0x0001b46c) linegrid_cam4_burst_pane_g1

0x64b3,	// (0x000145db) linegrid_cam4_burst_pane_g2_ParamLimits

0x64b3,	// (0x000145db) linegrid_cam4_burst_pane_g2

0xd351,	// (0x0001b479) linegrid_cam4_burst_pane_g3_ParamLimits

0xd351,	// (0x0001b479) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x0001dacc) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x0001dacc) linegrid_cam4_burst_pane_g

0x64c4,	// (0x000145ec) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x64c4,	// (0x000145ec) linegrid_cam4_burst_pane_g3_copy1

0xd35e,	// (0x0001b486) linegrid_cam4_burst_pane_g4_ParamLimits

0xd35e,	// (0x0001b486) linegrid_cam4_burst_pane_g4

0x64e2,	// (0x0001460a) linegrid_cam4_burst_pane_g5_ParamLimits

0x64e2,	// (0x0001460a) linegrid_cam4_burst_pane_g5

0x64f3,	// (0x0001461b) linegrid_cam4_burst_pane_g6_ParamLimits

0x64f3,	// (0x0001461b) linegrid_cam4_burst_pane_g6

0xd36b,	// (0x0001b493) linegrid_cam4_burst_pane_g7_ParamLimits

0xd36b,	// (0x0001b493) linegrid_cam4_burst_pane_g7

0x650a,	// (0x00014632) cell_cam4_burst_pane_g1

0xd384,	// (0x0001b4ac) main_cam5_pane_t1_ParamLimits

0xd384,	// (0x0001b4ac) main_cam5_pane_t1

0xd396,	// (0x0001b4be) main_cam5_pane_t2_ParamLimits

0xd396,	// (0x0001b4be) main_cam5_pane_t2

0xd3a8,	// (0x0001b4d0) main_cam5_pane_t3_ParamLimits

0xd3a8,	// (0x0001b4d0) main_cam5_pane_t3

0xd3ba,	// (0x0001b4e2) main_cam5_pane_t4_ParamLimits

0xd3ba,	// (0x0001b4e2) main_cam5_pane_t4

0xd3d2,	// (0x0001b4fa) main_cam5_pane_t5_ParamLimits

0xd3d2,	// (0x0001b4fa) main_cam5_pane_t5

0xd3e6,	// (0x0001b50e) main_cam5_pane_t6_ParamLimits

0xd3e6,	// (0x0001b50e) main_cam5_pane_t6

0xd3fa,	// (0x0001b522) main_cam5_pane_t7_ParamLimits

0xd3fa,	// (0x0001b522) main_cam5_pane_t7

0xd40c,	// (0x0001b534) main_cam5_pane_t8_ParamLimits

0xd40c,	// (0x0001b534) main_cam5_pane_t8

0xd42a,	// (0x0001b552) main_cam5_pane_t9_ParamLimits

0xd42a,	// (0x0001b552) main_cam5_pane_t9

0xd43c,	// (0x0001b564) main_cam5_pane_t10_ParamLimits

0xd43c,	// (0x0001b564) main_cam5_pane_t10

0xd44e,	// (0x0001b576) main_cam5_pane_t11_ParamLimits

0xd44e,	// (0x0001b576) main_cam5_pane_t11

0xd462,	// (0x0001b58a) main_cam5_pane_t12_ParamLimits

0xd462,	// (0x0001b58a) main_cam5_pane_t12

0xd479,	// (0x0001b5a1) main_cam5_pane_t13_ParamLimits

0xd479,	// (0x0001b5a1) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x0001dad8) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x0001dad8) main_cam5_pane_t

0x0996,	// (0x0000eabe) popup_scut_keymap_window_ParamLimits

0x0996,	// (0x0000eabe) popup_scut_keymap_window

0x651d,	// (0x00014645) aid_size_cell_brow_shortcut

0x9ff4,	// (0x0001811c) bg_popup_window_pane_cp010

0x6529,	// (0x00014651) grid_scut_pane

0x6535,	// (0x0001465d) cell_scut_pane_ParamLimits

0x6535,	// (0x0001465d) cell_scut_pane

0x654e,	// (0x00014676) cell_scut_pane_g1

0xd49c,	// (0x0001b5c4) cell_scut_pane_t1

0xd4ab,	// (0x0001b5d3) cell_scut_pane_t2

0x6557,	// (0x0001467f) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x0001daf3) cell_scut_pane_t

0x4318,	// (0x00012440) main_mup3_pane_g8_ParamLimits

0x4318,	// (0x00012440) main_mup3_pane_g8

0x5639,	// (0x00013761) area_vitu2_query_pane_ParamLimits

0x5639,	// (0x00013761) area_vitu2_query_pane

0x629a,	// (0x000143c2) input_focus_pane_cp08

0xd4ba,	// (0x0001b5e2) area_vitu2_query_pane_g1

0x6565,	// (0x0001468d) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x0001dafa) area_vitu2_query_pane_g

0x657a,	// (0x000146a2) area_vitu2_query_pane_t1_ParamLimits

0x657a,	// (0x000146a2) area_vitu2_query_pane_t1

0x658e,	// (0x000146b6) area_vitu2_query_pane_t2_ParamLimits

0x658e,	// (0x000146b6) area_vitu2_query_pane_t2

0x65a2,	// (0x000146ca) area_vitu2_query_pane_t3_ParamLimits

0x65a2,	// (0x000146ca) area_vitu2_query_pane_t3

0xd4c6,	// (0x0001b5ee) area_vitu2_query_pane_t4_ParamLimits

0xd4c6,	// (0x0001b5ee) area_vitu2_query_pane_t4

0xd4ee,	// (0x0001b616) area_vitu2_query_pane_t5_ParamLimits

0xd4ee,	// (0x0001b616) area_vitu2_query_pane_t5

0xd516,	// (0x0001b63e) area_vitu2_query_pane_t6_ParamLimits

0xd516,	// (0x0001b63e) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x0001daff) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x0001daff) area_vitu2_query_pane_t

0x65ce,	// (0x000146f6) bg_button_pane_cp018

0x65da,	// (0x00014702) bg_button_pane_cp021

0x65e6,	// (0x0001470e) bg_button_pane_cp022

0x6611,	// (0x00014739) input_focus_pane_cp09

0x2a1a,	// (0x00010b42) aid_size_touch_mv_arrow_left

0x2a43,	// (0x00010b6b) aid_size_touch_mv_arrow_right

0x5d85,	// (0x00013ead) main_cset_slider_pane_g16_ParamLimits

0x5d85,	// (0x00013ead) main_cset_slider_pane_g16

0x5d93,	// (0x00013ebb) main_cset_slider_pane_g17_ParamLimits

0x5d93,	// (0x00013ebb) main_cset_slider_pane_g17

0x650a,	// (0x00014632) cell_cam4_burst_pane_g1_ParamLimits

0x95ac,	// (0x000176d4) compa_mode_pane

0x5fb7,	// (0x000140df) popup_vtel_slider_window_g3_ParamLimits

0x5fb7,	// (0x000140df) popup_vtel_slider_window_g3

0x5fce,	// (0x000140f6) popup_vtel_slider_window_g4_ParamLimits

0x5fce,	// (0x000140f6) popup_vtel_slider_window_g4

0x5fe5,	// (0x0001410d) popup_vtel_slider_window_t1_ParamLimits

0x5fe5,	// (0x0001410d) popup_vtel_slider_window_t1

0x95ac,	// (0x000176d4) main_cl_pane

0xbe15,	// (0x00019f3d) popup_imed_adjust2_window_ParamLimits

0xab0f,	// (0x00018c37) bg_tb_trans_pane_cp05_ParamLimits

0xc7ab,	// (0x0001a8d3) popup_imed_adjust2_window_g1_ParamLimits

0xc7ba,	// (0x0001a8e2) popup_imed_adjust2_window_g2_ParamLimits

0xc7ba,	// (0x0001a8e2) popup_imed_adjust2_window_g2

0xc7c6,	// (0x0001a8ee) popup_imed_adjust2_window_g3_ParamLimits

0xc7c6,	// (0x0001a8ee) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x0001d875) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x0001d875) popup_imed_adjust2_window_g

0xc7d2,	// (0x0001a8fa) popup_imed_adjust2_window_t1_ParamLimits

0xc7ea,	// (0x0001a912) slider_imed_adjust_pane_ParamLimits

0xc7fe,	// (0x0001a926) slider_imed_adjust_pane_g1_ParamLimits

0xc80e,	// (0x0001a936) slider_imed_adjust_pane_g2_ParamLimits

0xc81e,	// (0x0001a946) slider_imed_adjust_pane_g3_ParamLimits

0xc82f,	// (0x0001a957) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x0001d87c) slider_imed_adjust_pane_g_ParamLimits

0x53b9,	// (0x000134e1) aid_touch_area_cam4_ParamLimits

0x53b9,	// (0x000134e1) aid_touch_area_cam4

0xce3e,	// (0x0001af66) battery_pane_cp01

0x548c,	// (0x000135b4) main_camera4_pane_g6_ParamLimits

0x548c,	// (0x000135b4) main_camera4_pane_g6

0x54b6,	// (0x000135de) main_camera4_pane_t2_ParamLimits

0x54b6,	// (0x000135de) main_camera4_pane_t2

0x0001,

0xf856,	// (0x0001d97e) main_camera4_pane_t_ParamLimits

0xf856,	// (0x0001d97e) main_camera4_pane_t

0x54eb,	// (0x00013613) aid_touch_area_vid4_ParamLimits

0x54eb,	// (0x00013613) aid_touch_area_vid4

0x5542,	// (0x0001366a) main_video4_pane_g5_ParamLimits

0x5542,	// (0x0001366a) main_video4_pane_g5

0x5568,	// (0x00013690) vid4_progress_pane_ParamLimits

0x5568,	// (0x00013690) vid4_progress_pane

0xd13e,	// (0x0001b266) main_cset_slider_pane_g18_ParamLimits

0xd13e,	// (0x0001b266) main_cset_slider_pane_g18

0xd378,	// (0x0001b4a0) cell_cam4_burst_pane_g2_ParamLimits

0xd378,	// (0x0001b4a0) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x0001dad3) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x0001dad3) cell_cam4_burst_pane_g

0x9de1,	// (0x00017f09) bg_cl_pane_ParamLimits

0x9de1,	// (0x00017f09) bg_cl_pane

0x6622,	// (0x0001474a) cl_header_pane_ParamLimits

0x6622,	// (0x0001474a) cl_header_pane

0x6636,	// (0x0001475e) cl_listscroll_pane_ParamLimits

0x6636,	// (0x0001475e) cl_listscroll_pane

0xd562,	// (0x0001b68a) bg_cl_pane_g1

0xd56a,	// (0x0001b692) bg_cl_pane_g2

0xd572,	// (0x0001b69a) bg_cl_pane_g3

0xd57a,	// (0x0001b6a2) bg_cl_pane_g4

0xd582,	// (0x0001b6aa) bg_cl_pane_g5

0xd58a,	// (0x0001b6b2) bg_cl_pane_g6

0xd592,	// (0x0001b6ba) bg_cl_pane_g7

0xd59a,	// (0x0001b6c2) bg_cl_pane_g8

0xd5a2,	// (0x0001b6ca) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x0001db0e) bg_cl_pane_g

0x6646,	// (0x0001476e) aid_height_cl_leading_ParamLimits

0x6646,	// (0x0001476e) aid_height_cl_leading

0x6652,	// (0x0001477a) aid_height_cl_text_ParamLimits

0x6652,	// (0x0001477a) aid_height_cl_text

0x9621,	// (0x00017749) bg_cl_header_pane_ParamLimits

0x9621,	// (0x00017749) bg_cl_header_pane

0x6671,	// (0x00014799) cl_header_pane_g1_ParamLimits

0x6671,	// (0x00014799) cl_header_pane_g1

0x6687,	// (0x000147af) cl_header_pane_t1_ParamLimits

0x6687,	// (0x000147af) cl_header_pane_t1

0xd5aa,	// (0x0001b6d2) cl_list_pane

0xd0d8,	// (0x0001b200) hc_scroll_pane_cp01

0xa23e,	// (0x00018366) bg_cl_header_pane_g1

0xcfba,	// (0x0001b0e2) bg_cl_header_pane_g2

0xa25e,	// (0x00018386) bg_cl_header_pane_g3

0xcfca,	// (0x0001b0f2) bg_cl_header_pane_g4

0xcfc2,	// (0x0001b0ea) bg_cl_header_pane_g5

0xd267,	// (0x0001b38f) bg_cl_header_pane_g6

0xcfe2,	// (0x0001b10a) bg_cl_header_pane_g7

0xcfea,	// (0x0001b112) bg_cl_header_pane_g8

0xcfda,	// (0x0001b102) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x0001db21) bg_cl_header_pane_g

0x66a0,	// (0x000147c8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x66a0,	// (0x000147c8) hc_cl_list_double_graphic_heading_pane

0x66b3,	// (0x000147db) hc_cl_list_single_graphic_pane_ParamLimits

0x66b3,	// (0x000147db) hc_cl_list_single_graphic_pane

0x66cb,	// (0x000147f3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x66cb,	// (0x000147f3) hc_cl_list_single_graphic_pane_g1

0x66d7,	// (0x000147ff) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x66d7,	// (0x000147ff) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x0001db34) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x0001db34) hc_cl_list_single_graphic_pane_g

0x66eb,	// (0x00014813) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x66eb,	// (0x00014813) hc_cl_list_single_graphic_pane_t1

0x66cb,	// (0x000147f3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x66cb,	// (0x000147f3) hc_cl_list_double_graphic_heading_pane_g1

0x6700,	// (0x00014828) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6700,	// (0x00014828) hc_cl_list_double_graphic_heading_pane_g2

0x6714,	// (0x0001483c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6714,	// (0x0001483c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x0001db39) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x0001db39) hc_cl_list_double_graphic_heading_pane_g

0x6728,	// (0x00014850) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6728,	// (0x00014850) hc_cl_list_double_graphic_heading_pane_t1

0x673d,	// (0x00014865) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x673d,	// (0x00014865) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x0001db40) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x0001db40) hc_cl_list_double_graphic_heading_pane_t

0xd5bb,	// (0x0001b6e3) vid4_progress_pane_g1

0xd5cb,	// (0x0001b6f3) vid4_progress_pane_g2

0x6752,	// (0x0001487a) vid4_progress_pane_g3

0xd5db,	// (0x0001b703) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x0001db45) vid4_progress_pane_g

0x6764,	// (0x0001488c) vid4_progress_pane_t1

0xd5f9,	// (0x0001b721) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x0001db50) vid4_progress_pane_t

0x677e,	// (0x000148a6) wait_bar_pane_cp07

0xc0f4,	// (0x0001a21c) blid_firmament_pane_ParamLimits

0xc137,	// (0x0001a25f) popup_blid_sat_info2_window_g1

0xc15b,	// (0x0001a283) popup_blid_sat_info2_window_t3

0xc169,	// (0x0001a291) popup_blid_sat_info2_window_t4

0xc177,	// (0x0001a29f) popup_blid_sat_info2_window_t5

0xc185,	// (0x0001a2ad) popup_blid_sat_info2_window_t6

0xc195,	// (0x0001a2bd) popup_blid_sat_info2_window_t7

0xc1a3,	// (0x0001a2cb) popup_blid_sat_info2_window_t8

0xc1b1,	// (0x0001a2d9) popup_blid_sat_info2_window_t9

0xc1bf,	// (0x0001a2e7) popup_blid_sat_info2_window_t10

0xc286,	// (0x0001a3ae) aid_firma_cardinal_ParamLimits

0xc29a,	// (0x0001a3c2) blid_firmament_pane_t1_ParamLimits

0xc2b1,	// (0x0001a3d9) blid_firmament_pane_t2_ParamLimits

0xc2c8,	// (0x0001a3f0) blid_firmament_pane_t3_ParamLimits

0xc2df,	// (0x0001a407) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x0001d76e) blid_firmament_pane_t_ParamLimits

0xc2f6,	// (0x0001a41e) blid_sat_info_pane_ParamLimits

0x9621,	// (0x00017749) main_cam_set_pane_ParamLimits

0x4b21,	// (0x00012c49) aid_size_cell_colour_35_ParamLimits

0x4b41,	// (0x00012c69) aid_size_cell_colour_112_ParamLimits

0x4b61,	// (0x00012c89) aid_size_cell_effect_ParamLimits

0xab0f,	// (0x00018c37) bg_tb_trans_pane_cp02_ParamLimits

0xa4fd,	// (0x00018625) heading_imed_pane_ParamLimits

0x4b81,	// (0x00012ca9) listscroll_imed_pane_ParamLimits

0xb4fe,	// (0x00019626) popup_call2_audio_first_window_g5_ParamLimits

0xb4fe,	// (0x00019626) popup_call2_audio_first_window_g5

0x4fca,	// (0x000130f2) aid_size_touch_image3_arrow_left_ParamLimits

0x4fca,	// (0x000130f2) aid_size_touch_image3_arrow_left

0x4ff6,	// (0x0001311e) aid_size_touch_image3_arrow_right_ParamLimits

0x4ff6,	// (0x0001311e) aid_size_touch_image3_arrow_right

0xd60f,	// (0x0001b737) vid4_progress_pane_t3

0x4d26,	// (0x00012e4e) main_hwr_training_symbol_option_pane_ParamLimits

0x4d26,	// (0x00012e4e) main_hwr_training_symbol_option_pane

0xc9f0,	// (0x0001ab18) popup_hwr_training_preview_window_ParamLimits

0xc9f0,	// (0x0001ab18) popup_hwr_training_preview_window

0x4d46,	// (0x00012e6e) hwr_training_navi_pane_g5_ParamLimits

0x4d46,	// (0x00012e6e) hwr_training_navi_pane_g5

0xcfa8,	// (0x0001b0d0) popup_char_count_window

0x9621,	// (0x00017749) bg_popup_sub_pane_cp20_ParamLimits

0x60f7,	// (0x0001421f) list_vitu2_match_list_pane_ParamLimits

0x6103,	// (0x0001422b) vitu2_page_scroll_pane_ParamLimits

0x6103,	// (0x0001422b) vitu2_page_scroll_pane

0xd646,	// (0x0001b76e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd646,	// (0x0001b76e) list_single_hwr_training_symbol_option_pane

0xd659,	// (0x0001b781) list_single_hwr_training_symbol_option_pane_g1

0xd661,	// (0x0001b789) list_single_hwr_training_symbol_option_pane_t1

0xd66f,	// (0x0001b797) bg_button_pane_cp023

0xd678,	// (0x0001b7a0) bg_button_pane_cp024

0xd6ab,	// (0x0001b7d3) vitu2_page_scroll_pane_g1

0xd6b3,	// (0x0001b7db) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x0001db57) vitu2_page_scroll_pane_g

0xd6bb,	// (0x0001b7e3) vitu2_page_scroll_pane_t1

0xd0e1,	// (0x0001b209) popup_char_count_window_g1

0xd6ca,	// (0x0001b7f2) popup_char_count_window_g2

0xd0ea,	// (0x0001b212) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x0001db5c) popup_char_count_window_g

0xd6d3,	// (0x0001b7fb) popup_char_count_window_t1

0x95ac,	// (0x000176d4) main_vded2_pane

0xc797,	// (0x0001a8bf) aid_size_cell_imed_line

0xc7a1,	// (0x0001a8c9) grid_imed_line_width_pane

0xcef8,	// (0x0001b020) vid4_indicators_pane_g4

0xd6e1,	// (0x0001b809) cell_imed_line_width_pane_ParamLimits

0xd6e1,	// (0x0001b809) cell_imed_line_width_pane

0xd6f7,	// (0x0001b81f) cell_imed_line_width_pane_g1

0xd700,	// (0x0001b828) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x0001db63) cell_imed_line_width_pane_g

0x67a5,	// (0x000148cd) main_vded2_pane_g1_ParamLimits

0x67a5,	// (0x000148cd) main_vded2_pane_g1

0x67c0,	// (0x000148e8) main_vded2_pane_g2_ParamLimits

0x67c0,	// (0x000148e8) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x0001db68) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x0001db68) main_vded2_pane_g

0x67d2,	// (0x000148fa) vded2_slider_pane_ParamLimits

0x67d2,	// (0x000148fa) vded2_slider_pane

0x67e2,	// (0x0001490a) aid_size_touch_vded2_end

0x67ec,	// (0x00014914) aid_size_touch_vded2_playhead

0xd708,	// (0x0001b830) aid_size_touch_vded2_start

0xd710,	// (0x0001b838) vded2_slider_bg_pane

0xd719,	// (0x0001b841) vded2_slider_pane_g1

0xd722,	// (0x0001b84a) vded2_slider_pane_g2

0x67f6,	// (0x0001491e) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x0001db6d) vded2_slider_pane_g

0xd0f3,	// (0x0001b21b) vded2_slider_bg_pane_g1

0xd0fc,	// (0x0001b224) vded2_slider_bg_pane_g2

0xd105,	// (0x0001b22d) vded2_slider_bg_pane_g3

0x0002,

0xfa4c,	// (0x0001db74) vded2_slider_bg_pane_g

0x2f01,	// (0x00011029) aid_postcard_touch_down_pane_ParamLimits

0x2f01,	// (0x00011029) aid_postcard_touch_down_pane

0x2f19,	// (0x00011041) aid_postcard_touch_up_pane_ParamLimits

0x2f19,	// (0x00011041) aid_postcard_touch_up_pane

0x95ac,	// (0x000176d4) main_blid2_pane

0xbdf7,	// (0x00019f1f) popup_blid2_search_window

0x95ac,	// (0x000176d4) blid2_gps_pane

0x95ac,	// (0x000176d4) blid2_navig_pane

0x95ac,	// (0x000176d4) blid2_search_pane

0x95ac,	// (0x000176d4) blid2_tripm_pane

0x6801,	// (0x00014929) blid2_search_pane_g1_ParamLimits

0x6801,	// (0x00014929) blid2_search_pane_g1

0x6814,	// (0x0001493c) blid2_search_pane_t1_ParamLimits

0x6814,	// (0x0001493c) blid2_search_pane_t1

0x6826,	// (0x0001494e) aid_size_cell_blid2_gps_ParamLimits

0x6826,	// (0x0001494e) aid_size_cell_blid2_gps

0x683e,	// (0x00014966) blid2_gps_pane_g1_ParamLimits

0x683e,	// (0x00014966) blid2_gps_pane_g1

0x6852,	// (0x0001497a) grid_blid2_satellite_pane_ParamLimits

0x6852,	// (0x0001497a) grid_blid2_satellite_pane

0x686a,	// (0x00014992) blid2_navig_pane_g1_ParamLimits

0x686a,	// (0x00014992) blid2_navig_pane_g1

0x6876,	// (0x0001499e) blid2_navig_pane_t1_ParamLimits

0x6876,	// (0x0001499e) blid2_navig_pane_t1

0x6891,	// (0x000149b9) blid2_navig_pane_t2_ParamLimits

0x6891,	// (0x000149b9) blid2_navig_pane_t2

0x0001,

0xfa53,	// (0x0001db7b) blid2_navig_pane_t_ParamLimits

0xfa53,	// (0x0001db7b) blid2_navig_pane_t

0x68ac,	// (0x000149d4) blid2_navig_ring_pane_ParamLimits

0x68ac,	// (0x000149d4) blid2_navig_ring_pane

0x68c7,	// (0x000149ef) blid2_speed_pane_ParamLimits

0x68c7,	// (0x000149ef) blid2_speed_pane

0x68d3,	// (0x000149fb) blid2_tripm_pane_g1_ParamLimits

0x68d3,	// (0x000149fb) blid2_tripm_pane_g1

0x68ee,	// (0x00014a16) blid2_tripm_pane_g2_ParamLimits

0x68ee,	// (0x00014a16) blid2_tripm_pane_g2

0x6902,	// (0x00014a2a) blid2_tripm_pane_g3_ParamLimits

0x6902,	// (0x00014a2a) blid2_tripm_pane_g3

0x6916,	// (0x00014a3e) blid2_tripm_pane_g4_ParamLimits

0x6916,	// (0x00014a3e) blid2_tripm_pane_g4

0x692a,	// (0x00014a52) blid2_tripm_pane_g5_ParamLimits

0x692a,	// (0x00014a52) blid2_tripm_pane_g5

0x0005,

0xfa58,	// (0x0001db80) blid2_tripm_pane_g_ParamLimits

0xfa58,	// (0x0001db80) blid2_tripm_pane_g

0x6950,	// (0x00014a78) blid2_tripm_pane_t1_ParamLimits

0x6950,	// (0x00014a78) blid2_tripm_pane_t1

0x6969,	// (0x00014a91) blid2_tripm_pane_t2_ParamLimits

0x6969,	// (0x00014a91) blid2_tripm_pane_t2

0x6982,	// (0x00014aaa) blid2_tripm_pane_t3_ParamLimits

0x6982,	// (0x00014aaa) blid2_tripm_pane_t3

0x0003,

0xfa65,	// (0x0001db8d) blid2_tripm_pane_t_ParamLimits

0xfa65,	// (0x0001db8d) blid2_tripm_pane_t

0x69c9,	// (0x00014af1) cell_blid2_satellite_pane_ParamLimits

0x69c9,	// (0x00014af1) cell_blid2_satellite_pane

0x69e5,	// (0x00014b0d) cell_blid2_satellite_pane_g1

0xd72a,	// (0x0001b852) cell_blid2_satellite_pane_t1

0xa049,	// (0x00018171) blid2_speed_pane_g1

0xd738,	// (0x0001b860) blid2_speed_pane_t1

0xd746,	// (0x0001b86e) blid2_speed_pane_t2

0x0001,

0xfa6e,	// (0x0001db96) blid2_speed_pane_t

0xa049,	// (0x00018171) blid2_navig_ring_pane_g1

0x69ee,	// (0x00014b16) blid2_navig_ring_pane_g2

0x69f6,	// (0x00014b1e) blid2_navig_ring_pane_g3

0x69fe,	// (0x00014b26) blid2_navig_ring_pane_g4

0x6a06,	// (0x00014b2e) blid2_navig_ring_pane_g5

0x0004,

0xfa73,	// (0x0001db9b) blid2_navig_ring_pane_g

0x95ac,	// (0x000176d4) bg_popup_window_pane_cp011

0xd754,	// (0x0001b87c) popup_blid2_search_window_g1

0xd75c,	// (0x0001b884) popup_blid2_search_window_t1

0xd76a,	// (0x0001b892) popup_blid2_search_window_t2

0x0001,

0xfa7e,	// (0x0001dba6) popup_blid2_search_window_t

0xa14d,	// (0x00018275) main_browser_pane_g1

0x9de1,	// (0x00017f09) main_browser_pane_ParamLimits

0x9621,	// (0x00017749) bg_button_pane_cp011_ParamLimits

0x594a,	// (0x00013a72) cell_vitu2_function_pane_g1_ParamLimits

0xab0f,	// (0x00018c37) bg_popup_sub_pane_cp22_ParamLimits

0x629a,	// (0x000143c2) input_focus_pane_cp08_ParamLimits

0x62b6,	// (0x000143de) popup_vitu2_query_button_pane_ParamLimits

0x62b6,	// (0x000143de) popup_vitu2_query_button_pane

0x62c5,	// (0x000143ed) popup_vitu2_query_input_button_pane

0xd2c2,	// (0x0001b3ea) popup_vitu2_query_window_g1_ParamLimits

0x62cf,	// (0x000143f7) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x0001daa7) popup_vitu2_query_window_g_ParamLimits

0x95ac,	// (0x000176d4) bg_button_pane_cp026

0x6a0e,	// (0x00014b36) popup_vitu2_query_input_button_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp025

0xd778,	// (0x0001b8a0) popup_vitu2_query_button_pane_t1

0x3f08,	// (0x00012030) main_mp3_pane_t6

0x3f16,	// (0x0001203e) popup_slider_window_cp01

0xce5c,	// (0x0001af84) cam4_battery_pane

0xceb1,	// (0x0001afd9) cam4_battery_pane_cp02

0xd5b3,	// (0x0001b6db) cam4_battery_pane_cp01

0xd5b3,	// (0x0001b6db) cam4_battery_pane_cp03

0xa049,	// (0x00018171) cam4_battery_pane_g1

0xd786,	// (0x0001b8ae) cam4_battery_pane_g2

0x0001,

0xfa83,	// (0x0001dbab) cam4_battery_pane_g

0xc1cd,	// (0x0001a2f5) popup_blid_sat_info2_window_t11

0x2a1a,	// (0x00010b42) aid_size_touch_mv_arrow_left_ParamLimits

0x2a43,	// (0x00010b6b) aid_size_touch_mv_arrow_right_ParamLimits

0xa970,	// (0x00018a98) navi_pane_g1_ParamLimits

0x2a82,	// (0x00010baa) navi_pane_g2_ParamLimits

0x2ab0,	// (0x00010bd8) navi_pane_g3_ParamLimits

0xf35a,	// (0x0001d482) navi_pane_g_ParamLimits

0x2b0a,	// (0x00010c32) navi_pane_mv_t1_ParamLimits

0x4b8d,	// (0x00012cb5) grid_imed_effect_pane_ParamLimits

0x1616,	// (0x0000f73e) aid_placing_vt_slider_lsc

0xa098,	// (0x000181c0) aid_placing_vt_slider_prt

0x9621,	// (0x00017749) bg_tb_trans_pane_cp01_ParamLimits

0xc435,	// (0x0001a55d) popup_image_details_window_g1_ParamLimits

0xc448,	// (0x0001a570) popup_image_details_window_g2_ParamLimits

0xc45d,	// (0x0001a585) popup_image_details_window_g3_ParamLimits

0xc45d,	// (0x0001a585) popup_image_details_window_g3

0xf686,	// (0x0001d7ae) popup_image_details_window_g_ParamLimits

0xc471,	// (0x0001a599) popup_image_details_window_t1_ParamLimits

0xc483,	// (0x0001a5ab) popup_image_details_window_t2_ParamLimits

0xc49c,	// (0x0001a5c4) popup_image_details_window_t3_ParamLimits

0xc4b0,	// (0x0001a5d8) popup_image_details_window_t4_ParamLimits

0xc4cb,	// (0x0001a5f3) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x0001d7b5) popup_image_details_window_t_ParamLimits

0x665e,	// (0x00014786) cl_header_name_pane_ParamLimits

0x665e,	// (0x00014786) cl_header_name_pane

0x6a16,	// (0x00014b3e) cl_header_name_pane_t1_ParamLimits

0x6a16,	// (0x00014b3e) cl_header_name_pane_t1

0x6a37,	// (0x00014b5f) cl_header_name_pane_t2_ParamLimits

0x6a37,	// (0x00014b5f) cl_header_name_pane_t2

0x6a79,	// (0x00014ba1) cl_header_name_pane_t3_ParamLimits

0x6a79,	// (0x00014ba1) cl_header_name_pane_t3

0x0002,

0xfa88,	// (0x0001dbb0) cl_header_name_pane_t_ParamLimits

0xfa88,	// (0x0001dbb0) cl_header_name_pane_t

0x2adb,	// (0x00010c03) navi_pane_mv_g2_ParamLimits

0xcf44,	// (0x0001b06c) field_vitu2_entry_pane_g1_ParamLimits

0xcf50,	// (0x0001b078) field_vitu2_entry_pane_g2_ParamLimits

0xaad9,	// (0x00018c01) field_vitu2_entry_pane_g3_ParamLimits

0xaad9,	// (0x00018c01) field_vitu2_entry_pane_g3

0xf888,	// (0x0001d9b0) field_vitu2_entry_pane_g_ParamLimits

0x57da,	// (0x00013902) cell_vitu2_itu_pane_g1_ParamLimits

0x57f2,	// (0x0001391a) cell_vitu2_itu_pane_g2_ParamLimits

0x57f2,	// (0x0001391a) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x0001d9bc) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x0001d9bc) cell_vitu2_itu_pane_g

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp05_ParamLimits

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp05

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp03

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp04

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp10_ParamLimits

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp10

0x65fb,	// (0x00014723) bg_vkb2_func_pane_cp08

0x65ce,	// (0x000146f6) bg_vkb2_func_pane_cp06

0x65da,	// (0x00014702) bg_vkb2_func_pane_cp07

0xd681,	// (0x0001b7a9) bg_vkb2_func_pane_cp11_ParamLimits

0xd681,	// (0x0001b7a9) bg_vkb2_func_pane_cp11

0xd696,	// (0x0001b7be) bg_vkb2_func_pane_cp12_ParamLimits

0xd696,	// (0x0001b7be) bg_vkb2_func_pane_cp12

0x95ac,	// (0x000176d4) bg_vkb2_func_pane_cp09

0xcfba,	// (0x0001b0e2) bg_vkb2_func_pane_g1

0xa25e,	// (0x00018386) bg_vkb2_func_pane_g2

0xcfc2,	// (0x0001b0ea) bg_vkb2_func_pane_g3

0xcfca,	// (0x0001b0f2) bg_vkb2_func_pane_g4

0xd267,	// (0x0001b38f) bg_vkb2_func_pane_g5

0xcfe2,	// (0x0001b10a) bg_vkb2_func_pane_g6

0xcfea,	// (0x0001b112) bg_vkb2_func_pane_g7

0xcfda,	// (0x0001b102) bg_vkb2_func_pane_g8

0xa23e,	// (0x00018366) bg_vkb2_func_pane_g9

0x0008,

0xfa8f,	// (0x0001dbb7) bg_vkb2_func_pane_g

0x693e,	// (0x00014a66) blid2_tripm_pane_g6_ParamLimits

0x693e,	// (0x00014a66) blid2_tripm_pane_g6

0xcd23,	// (0x0001ae4b) mp4_progress_pane_g1

0x69b5,	// (0x00014add) blid2_tripm_values_pane_ParamLimits

0x69b5,	// (0x00014add) blid2_tripm_values_pane

0x6aaa,	// (0x00014bd2) blid2_tripm_values_pane_t1

0x6ab8,	// (0x00014be0) blid2_tripm_values_pane_t2

0x6ac6,	// (0x00014bee) blid2_tripm_values_pane_t3

0x6ad4,	// (0x00014bfc) blid2_tripm_values_pane_t4

0x6ae2,	// (0x00014c0a) blid2_tripm_values_pane_t5

0x6af0,	// (0x00014c18) blid2_tripm_values_pane_t6

0x6afe,	// (0x00014c26) blid2_tripm_values_pane_t7

0x6b0c,	// (0x00014c34) blid2_tripm_values_pane_t8

0x6b1a,	// (0x00014c42) blid2_tripm_values_pane_t9

0x0008,

0xfaa2,	// (0x0001dbca) blid2_tripm_values_pane_t

0x1653,	// (0x0000f77b) call_video_pane_t1_ParamLimits

0x166d,	// (0x0000f795) call_video_pane_t2_ParamLimits

0xf208,	// (0x0001d330) call_video_pane_t_ParamLimits

0x2e21,	// (0x00010f49) msg_header_pane_g1_ParamLimits

0xabce,	// (0x00018cf6) msg_header_pane_g2_ParamLimits

0xabce,	// (0x00018cf6) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0001d525) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0001d525) msg_header_pane_g

0x9de1,	// (0x00017f09) main_clock2_pane_ParamLimits

0x488a,	// (0x000129b2) grid_clock2_toolbar_pane_ParamLimits

0x488a,	// (0x000129b2) grid_clock2_toolbar_pane

0x488a,	// (0x000129b2) listscroll_clock2_pane_ParamLimits

0x488a,	// (0x000129b2) listscroll_clock2_pane

0x4969,	// (0x00012a91) main_clock2_pane_t3_ParamLimits

0x4969,	// (0x00012a91) main_clock2_pane_t3

0x498c,	// (0x00012ab4) main_clock2_pane_t4_ParamLimits

0x498c,	// (0x00012ab4) main_clock2_pane_t4

0xd790,	// (0x0001b8b8) cell_clock2_toolbar_pane

0xd798,	// (0x0001b8c0) cell_clock2_toolbar_pane_cp01

0xd798,	// (0x0001b8c0) cell_clock2_toolbar_pane_cp02

0xd7a0,	// (0x0001b8c8) cell_clock2_toolbar_pane_cp03

0xd7a8,	// (0x0001b8d0) list_clock2_pane

0xa8d6,	// (0x000189fe) scroll_pane_cp10

0xd7b0,	// (0x0001b8d8) list_single_clock2_pane_ParamLimits

0xd7b0,	// (0x0001b8d8) list_single_clock2_pane

0x9ff4,	// (0x0001811c) list_highlight_pane_cp08

0xd7bd,	// (0x0001b8e5) list_single_clock2_pane_t1

0xd7cb,	// (0x0001b8f3) list_single_clock2_pane_t2

0x0001,

0xfab5,	// (0x0001dbdd) list_single_clock2_pane_t

0x95ac,	// (0x000176d4) bg_button_pane_cp10

0xd7d9,	// (0x0001b901) cell_clock2_toolbar_pane_g1

0x2e8d,	// (0x00010fb5) aid_main_viewer_pane_g1_ParamLimits

0x2e8d,	// (0x00010fb5) aid_main_viewer_pane_g1

0x2e9b,	// (0x00010fc3) aid_main_viewer_pane_g2_ParamLimits

0x2e9b,	// (0x00010fc3) aid_main_viewer_pane_g2

0x2ea9,	// (0x00010fd1) aid_main_viewer_pane_g3_ParamLimits

0x2ea9,	// (0x00010fd1) aid_main_viewer_pane_g3

0x2eb8,	// (0x00010fe0) aid_main_viewer_pane_g4_ParamLimits

0x2eb8,	// (0x00010fe0) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0001d536) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0001d536) aid_main_viewer_pane_g

0x3856,	// (0x0001197e) main_calc_pane_ParamLimits

0x386a,	// (0x00011992) main_dialer2_pane_ParamLimits

0x95ac,	// (0x000176d4) main_cam6_pane

0x95ac,	// (0x000176d4) main_vid6_pane

0x4896,	// (0x000129be) listscroll_gen_pane_cp06_ParamLimits

0x4896,	// (0x000129be) listscroll_gen_pane_cp06

0x49af,	// (0x00012ad7) main_clock2_pane_t5_ParamLimits

0x49af,	// (0x00012ad7) main_clock2_pane_t5

0x4a0d,	// (0x00012b35) aid_call2_pane_cp10_ParamLimits

0x4a1f,	// (0x00012b47) aid_call_pane_cp10_ParamLimits

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4a31,	// (0x00012b59) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4a31,	// (0x00012b59) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa945,	// (0x00018a6d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x0001d86a) popup_clock_analogue_window_cp10_g_ParamLimits

0x4a47,	// (0x00012b6f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4f77,	// (0x0001309f) cell_dialer2_keypad_pane_g2_ParamLimits

0x4f77,	// (0x0001309f) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x0001d94f) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x0001d94f) cell_dialer2_keypad_pane_g

0x4f93,	// (0x000130bb) cell_dialer2_keypad_pane_t1

0x5c7d,	// (0x00013da5) main_cset_text2_pane_ParamLimits

0x5c7d,	// (0x00013da5) main_cset_text2_pane

0xd4ba,	// (0x0001b5e2) area_vitu2_query_pane_g1_ParamLimits

0x6565,	// (0x0001468d) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x0001dafa) area_vitu2_query_pane_g_ParamLimits

0xd53e,	// (0x0001b666) area_vitu2_query_pane_t7_ParamLimits

0xd53e,	// (0x0001b666) area_vitu2_query_pane_t7

0x65ce,	// (0x000146f6) bg_button_pane_cp018_ParamLimits

0x65da,	// (0x00014702) bg_button_pane_cp021_ParamLimits

0x65e6,	// (0x0001470e) bg_button_pane_cp022_ParamLimits

0x65fb,	// (0x00014723) bg_vkb2_func_pane_cp08_ParamLimits

0x65ce,	// (0x000146f6) bg_vkb2_func_pane_cp06_ParamLimits

0x65da,	// (0x00014702) bg_vkb2_func_pane_cp07_ParamLimits

0x6611,	// (0x00014739) input_focus_pane_cp09_ParamLimits

0xd7e1,	// (0x0001b909) cam6_autofocus_pane_ParamLimits

0xd7e1,	// (0x0001b909) cam6_autofocus_pane

0x6b28,	// (0x00014c50) cam6_image_uncrop_pane_ParamLimits

0x6b28,	// (0x00014c50) cam6_image_uncrop_pane

0x6b37,	// (0x00014c5f) cam6_indi_pane_ParamLimits

0x6b37,	// (0x00014c5f) cam6_indi_pane

0x6b4d,	// (0x00014c75) cam6_mode_pane_ParamLimits

0x6b4d,	// (0x00014c75) cam6_mode_pane

0x6b5f,	// (0x00014c87) cam6_timer_pane_ParamLimits

0x6b5f,	// (0x00014c87) cam6_timer_pane

0x6b6b,	// (0x00014c93) cam6_zoom_pane_ParamLimits

0x6b6b,	// (0x00014c93) cam6_zoom_pane

0x6b79,	// (0x00014ca1) cam6_mode_pane_g1_ParamLimits

0x6b79,	// (0x00014ca1) cam6_mode_pane_g1

0x6b89,	// (0x00014cb1) cam6_mode_pane_g2_ParamLimits

0x6b89,	// (0x00014cb1) cam6_mode_pane_g2

0x6b99,	// (0x00014cc1) cam6_mode_pane_g3_ParamLimits

0x6b99,	// (0x00014cc1) cam6_mode_pane_g3

0x6ba9,	// (0x00014cd1) cam6_mode_pane_g4_ParamLimits

0x6ba9,	// (0x00014cd1) cam6_mode_pane_g4

0x0003,

0xfaba,	// (0x0001dbe2) cam6_mode_pane_g_ParamLimits

0xfaba,	// (0x0001dbe2) cam6_mode_pane_g

0xbf83,	// (0x0001a0ab) bg_tb_trans_pane_cp08_ParamLimits

0xbf83,	// (0x0001a0ab) bg_tb_trans_pane_cp08

0xd7ef,	// (0x0001b917) cam6_battery_pane_ParamLimits

0xd7ef,	// (0x0001b917) cam6_battery_pane

0xd805,	// (0x0001b92d) cam6_indi_pane_g1_ParamLimits

0xd805,	// (0x0001b92d) cam6_indi_pane_g1

0xd817,	// (0x0001b93f) cam6_indi_pane_g2_ParamLimits

0xd817,	// (0x0001b93f) cam6_indi_pane_g2

0xd829,	// (0x0001b951) cam6_indi_pane_g3_ParamLimits

0xd829,	// (0x0001b951) cam6_indi_pane_g3

0x0002,

0xfac3,	// (0x0001dbeb) cam6_indi_pane_g_ParamLimits

0xfac3,	// (0x0001dbeb) cam6_indi_pane_g

0xd83b,	// (0x0001b963) cam6_indi_pane_t1_ParamLimits

0xd83b,	// (0x0001b963) cam6_indi_pane_t1

0x55ad,	// (0x000136d5) cam6_autofocus_pane_g1

0x55b5,	// (0x000136dd) cam6_autofocus_pane_g2

0x55bd,	// (0x000136e5) cam6_autofocus_pane_g3

0x55c5,	// (0x000136ed) cam6_autofocus_pane_g4

0x0003,

0xfaca,	// (0x0001dbf2) cam6_autofocus_pane_g

0xd861,	// (0x0001b989) cam6_timer_pane_g1

0xd869,	// (0x0001b991) cam6_timer_pane_t1

0xd877,	// (0x0001b99f) cam6_zoom_cont_pane

0xd87f,	// (0x0001b9a7) cam6_zoom_pane_g1

0xd887,	// (0x0001b9af) cam6_zoom_pane_g2

0x6bb9,	// (0x00014ce1) cam6_zoom_pane_g3

0x0002,

0xfad3,	// (0x0001dbfb) cam6_zoom_pane_g

0xa049,	// (0x00018171) cam6_battery_pane_g1

0xa049,	// (0x00018171) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) cam6_battery_pane_g

0xd88f,	// (0x0001b9b7) cam6_zoom_cont_pane_g1

0xd898,	// (0x0001b9c0) cam6_zoom_cont_pane_g2

0xd8a1,	// (0x0001b9c9) cam6_zoom_cont_pane_g3

0x0002,

0xfada,	// (0x0001dc02) cam6_zoom_cont_pane_g

0x6bd6,	// (0x00014cfe) cam6_mode_pane_cp_ParamLimits

0x6bd6,	// (0x00014cfe) cam6_mode_pane_cp

0x6b6b,	// (0x00014c93) cam6_zoom_pane_cp_ParamLimits

0x6b6b,	// (0x00014c93) cam6_zoom_pane_cp

0x6be8,	// (0x00014d10) vid6_image_uncrop_cif_pane_ParamLimits

0x6be8,	// (0x00014d10) vid6_image_uncrop_cif_pane

0x6bf8,	// (0x00014d20) vid6_image_uncrop_nhd_pane_ParamLimits

0x6bf8,	// (0x00014d20) vid6_image_uncrop_nhd_pane

0x6b28,	// (0x00014c50) vid6_image_uncrop_vga_pane_ParamLimits

0x6b28,	// (0x00014c50) vid6_image_uncrop_vga_pane

0x6c07,	// (0x00014d2f) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c07,	// (0x00014d2f) vid6_image_uncrop_wvga_pane

0x6c16,	// (0x00014d3e) vid6_indi_pane_ParamLimits

0x6c16,	// (0x00014d3e) vid6_indi_pane

0xbf83,	// (0x0001a0ab) bg_tb_trans_pane_cp09_ParamLimits

0xbf83,	// (0x0001a0ab) bg_tb_trans_pane_cp09

0xd8b9,	// (0x0001b9e1) cam6_battery_pane_cp_ParamLimits

0xd8b9,	// (0x0001b9e1) cam6_battery_pane_cp

0xd8c5,	// (0x0001b9ed) vid6_indi_pane_g1_ParamLimits

0xd8c5,	// (0x0001b9ed) vid6_indi_pane_g1

0xd8d7,	// (0x0001b9ff) vid6_indi_pane_g2_ParamLimits

0xd8d7,	// (0x0001b9ff) vid6_indi_pane_g2

0xd8e9,	// (0x0001ba11) vid6_indi_pane_g3_ParamLimits

0xd8e9,	// (0x0001ba11) vid6_indi_pane_g3

0xd900,	// (0x0001ba28) vid6_indi_pane_g4_ParamLimits

0xd900,	// (0x0001ba28) vid6_indi_pane_g4

0xd917,	// (0x0001ba3f) vid6_indi_pane_g5_ParamLimits

0xd917,	// (0x0001ba3f) vid6_indi_pane_g5

0x0004,

0xfae1,	// (0x0001dc09) vid6_indi_pane_g_ParamLimits

0xfae1,	// (0x0001dc09) vid6_indi_pane_g

0xd931,	// (0x0001ba59) vid6_indi_pane_t1_ParamLimits

0xd931,	// (0x0001ba59) vid6_indi_pane_t1

0xd947,	// (0x0001ba6f) vid6_indi_pane_t2_ParamLimits

0xd947,	// (0x0001ba6f) vid6_indi_pane_t2

0xd96f,	// (0x0001ba97) vid6_indi_pane_t3_ParamLimits

0xd96f,	// (0x0001ba97) vid6_indi_pane_t3

0xd997,	// (0x0001babf) vid6_indi_pane_t4_ParamLimits

0xd997,	// (0x0001babf) vid6_indi_pane_t4

0x0003,

0xfaec,	// (0x0001dc14) vid6_indi_pane_t_ParamLimits

0xfaec,	// (0x0001dc14) vid6_indi_pane_t

0xd9bb,	// (0x0001bae3) wait_bar_pane_cp08

0x6c2e,	// (0x00014d56) main_cset_text2_pane_t1_ParamLimits

0x6c2e,	// (0x00014d56) main_cset_text2_pane_t1

0x6bc1,	// (0x00014ce9) listscroll_gen_pane_cp06_t1_ParamLimits

0x6bc1,	// (0x00014ce9) listscroll_gen_pane_cp06_t1

0x95ac,	// (0x000176d4) main_cam6_set_pane

0x9d4d,	// (0x00017e75) bg_tb_trans_pane_cp06_ParamLimits

0xce64,	// (0x0001af8c) cam4_indicators_pane_g1_ParamLimits

0xce75,	// (0x0001af9d) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x0001d98c) cam4_indicators_pane_g_ParamLimits

0xce8d,	// (0x0001afb5) cam4_indicators_pane_t1_ParamLimits

0x9621,	// (0x00017749) bg_tb_trans_pane_cp07_ParamLimits

0xcebb,	// (0x0001afe3) vid4_indicators_pane_g1_ParamLimits

0xced1,	// (0x0001aff9) vid4_indicators_pane_g2_ParamLimits

0xcee5,	// (0x0001b00d) vid4_indicators_pane_g3_ParamLimits

0xcef8,	// (0x0001b020) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x0001d99e) vid4_indicators_pane_g_ParamLimits

0xcf16,	// (0x0001b03e) vid4_indicators_pane_t1_ParamLimits

0xd5bb,	// (0x0001b6e3) vid4_progress_pane_g1_ParamLimits

0xd5cb,	// (0x0001b6f3) vid4_progress_pane_g2_ParamLimits

0x6752,	// (0x0001487a) vid4_progress_pane_g3_ParamLimits

0xd5db,	// (0x0001b703) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x0001db45) vid4_progress_pane_g_ParamLimits

0x6764,	// (0x0001488c) vid4_progress_pane_t1_ParamLimits

0xd5f9,	// (0x0001b721) vid4_progress_pane_t2_ParamLimits

0xd60f,	// (0x0001b737) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x0001db50) vid4_progress_pane_t_ParamLimits

0x677e,	// (0x000148a6) wait_bar_pane_cp07_ParamLimits

0x6c4f,	// (0x00014d77) main_cam6_set_pane_g2_ParamLimits

0x6c4f,	// (0x00014d77) main_cam6_set_pane_g2

0x6c75,	// (0x00014d9d) main_cset6_listscroll_pane_ParamLimits

0x6c75,	// (0x00014d9d) main_cset6_listscroll_pane

0x6c93,	// (0x00014dbb) main_cset6_slider_pane_ParamLimits

0x6c93,	// (0x00014dbb) main_cset6_slider_pane

0x6ca9,	// (0x00014dd1) main_cset6_text2_pane_ParamLimits

0x6ca9,	// (0x00014dd1) main_cset6_text2_pane

0xd9ca,	// (0x0001baf2) main_cset6_text_pane

0xd9d2,	// (0x0001bafa) main_cset_list_pane_copy1_ParamLimits

0xd9d2,	// (0x0001bafa) main_cset_list_pane_copy1

0xd9e2,	// (0x0001bb0a) scroll_pane_cp028_copy1

0x6cb7,	// (0x00014ddf) cset_list_set_pane_copy1

0x6ccb,	// (0x00014df3) aid_position_infowindow_above_copy1

0x6cd3,	// (0x00014dfb) aid_position_infowindow_below_copy1

0x6cdb,	// (0x00014e03) cset_list_set_pane_g1_copy1

0x6ce3,	// (0x00014e0b) cset_list_set_pane_g3_copy1_ParamLimits

0x6ce3,	// (0x00014e0b) cset_list_set_pane_g3_copy1

0x6cf2,	// (0x00014e1a) cset_list_set_pane_t1_copy1_ParamLimits

0x6cf2,	// (0x00014e1a) cset_list_set_pane_t1_copy1

0x9621,	// (0x00017749) list_highlight_pane_cp021_copy1_ParamLimits

0x9621,	// (0x00017749) list_highlight_pane_cp021_copy1

0xd9eb,	// (0x0001bb13) cset6_slider_pane_ParamLimits

0xd9eb,	// (0x0001bb13) cset6_slider_pane

0xda17,	// (0x0001bb3f) main_cset6_slider_pane_g1_ParamLimits

0xda17,	// (0x0001bb3f) main_cset6_slider_pane_g1

0x6d07,	// (0x00014e2f) main_cset6_slider_pane_g2_ParamLimits

0x6d07,	// (0x00014e2f) main_cset6_slider_pane_g2

0xda3f,	// (0x0001bb67) main_cset6_slider_pane_g3_ParamLimits

0xda3f,	// (0x0001bb67) main_cset6_slider_pane_g3

0x6d2f,	// (0x00014e57) main_cset6_slider_pane_g4_ParamLimits

0x6d2f,	// (0x00014e57) main_cset6_slider_pane_g4

0x6d3b,	// (0x00014e63) main_cset6_slider_pane_g5_ParamLimits

0x6d3b,	// (0x00014e63) main_cset6_slider_pane_g5

0xd126,	// (0x0001b24e) main_cset6_slider_pane_g7_ParamLimits

0xd126,	// (0x0001b24e) main_cset6_slider_pane_g7

0xd132,	// (0x0001b25a) main_cset6_slider_pane_g8_ParamLimits

0xd132,	// (0x0001b25a) main_cset6_slider_pane_g8

0x5d25,	// (0x00013e4d) main_cset6_slider_pane_g9_ParamLimits

0x5d25,	// (0x00013e4d) main_cset6_slider_pane_g9

0x5d31,	// (0x00013e59) main_cset6_slider_pane_g10_ParamLimits

0x5d31,	// (0x00013e59) main_cset6_slider_pane_g10

0x5d3d,	// (0x00013e65) main_cset6_slider_pane_g11_ParamLimits

0x5d3d,	// (0x00013e65) main_cset6_slider_pane_g11

0x5d49,	// (0x00013e71) main_cset6_slider_pane_g12_ParamLimits

0x5d49,	// (0x00013e71) main_cset6_slider_pane_g12

0x5d55,	// (0x00013e7d) main_cset6_slider_pane_g13_ParamLimits

0x5d55,	// (0x00013e7d) main_cset6_slider_pane_g13

0x5d61,	// (0x00013e89) main_cset6_slider_pane_g14_ParamLimits

0x5d61,	// (0x00013e89) main_cset6_slider_pane_g14

0x6d49,	// (0x00014e71) main_cset6_slider_pane_g15_ParamLimits

0x6d49,	// (0x00014e71) main_cset6_slider_pane_g15

0x5d85,	// (0x00013ead) main_cset6_slider_pane_g16_ParamLimits

0x5d85,	// (0x00013ead) main_cset6_slider_pane_g16

0x5d93,	// (0x00013ebb) main_cset6_slider_pane_g17_ParamLimits

0x5d93,	// (0x00013ebb) main_cset6_slider_pane_g17

0x0011,

0xfaf5,	// (0x0001dc1d) main_cset6_slider_pane_g_ParamLimits

0xfaf5,	// (0x0001dc1d) main_cset6_slider_pane_g

0xda4b,	// (0x0001bb73) main_cset6_slider_pane_t1_ParamLimits

0xda4b,	// (0x0001bb73) main_cset6_slider_pane_t1

0x6d79,	// (0x00014ea1) main_cset6_slider_pane_t2_ParamLimits

0x6d79,	// (0x00014ea1) main_cset6_slider_pane_t2

0x6da4,	// (0x00014ecc) main_cset6_slider_pane_t3_ParamLimits

0x6da4,	// (0x00014ecc) main_cset6_slider_pane_t3

0x6dcf,	// (0x00014ef7) main_cset6_slider_pane_t4_ParamLimits

0x6dcf,	// (0x00014ef7) main_cset6_slider_pane_t4

0x6dfc,	// (0x00014f24) main_cset6_slider_pane_t5_ParamLimits

0x6dfc,	// (0x00014f24) main_cset6_slider_pane_t5

0xda8c,	// (0x0001bbb4) main_cset6_slider_pane_t7_ParamLimits

0xda8c,	// (0x0001bbb4) main_cset6_slider_pane_t7

0x6e29,	// (0x00014f51) main_cset6_slider_pane_t8_ParamLimits

0x6e29,	// (0x00014f51) main_cset6_slider_pane_t8

0x6e4d,	// (0x00014f75) main_cset6_slider_pane_t9_ParamLimits

0x6e4d,	// (0x00014f75) main_cset6_slider_pane_t9

0x6e71,	// (0x00014f99) main_cset6_slider_pane_t10_ParamLimits

0x6e71,	// (0x00014f99) main_cset6_slider_pane_t10

0x6e95,	// (0x00014fbd) main_cset6_slider_pane_t11_ParamLimits

0x6e95,	// (0x00014fbd) main_cset6_slider_pane_t11

0xdac2,	// (0x0001bbea) main_cset6_slider_pane_t14_ParamLimits

0xdac2,	// (0x0001bbea) main_cset6_slider_pane_t14

0xdafb,	// (0x0001bc23) main_cset6_slider_pane_t15_ParamLimits

0xdafb,	// (0x0001bc23) main_cset6_slider_pane_t15

0x000b,

0xfb1a,	// (0x0001dc42) main_cset6_slider_pane_t_ParamLimits

0xfb1a,	// (0x0001dc42) main_cset6_slider_pane_t

0xdb34,	// (0x0001bc5c) cset_slider_pane_g1_copy1

0xdb3d,	// (0x0001bc65) cset_slider_pane_g2_copy1

0xdb46,	// (0x0001bc6e) cset_slider_pane_g3_copy1

0x95ac,	// (0x000176d4) bg_popup_sub_pane_cp011_copy1

0xdb58,	// (0x0001bc80) main_cset_text_pane_g1_copy1

0xd2d6,	// (0x0001b3fe) main_cset_text_pane_t1_copy1

0xd2e4,	// (0x0001b40c) main_cset_text_pane_t2_copy1

0xd2f2,	// (0x0001b41a) main_cset_text_pane_t3_copy1

0xd300,	// (0x0001b428) main_cset_text_pane_t4_copy1

0xd30e,	// (0x0001b436) main_cset_text_pane_t5_copy1

0xdb60,	// (0x0001bc88) main_cset_text_pane_t6_copy1

0xdb6e,	// (0x0001bc96) main_cset_text_pane_t7_copy1

0x6c2e,	// (0x00014d56) main_cset_text2_pane_t1_copy1

0x9621,	// (0x00017749) main_ncimui_pane

0x3af8,	// (0x00011c20) popup_query_ncimui_window_ParamLimits

0x3af8,	// (0x00011c20) popup_query_ncimui_window

0xc56c,	// (0x0001a694) field_cale_ev2_pane_g4_ParamLimits

0xc56c,	// (0x0001a694) field_cale_ev2_pane_g4

0x4e42,	// (0x00012f6a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4e42,	// (0x00012f6a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x0001d926) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x0001d926) cell_video_dialer_keypad_pane_g

0x4e5a,	// (0x00012f82) cell_video_dialer_keypad_pane_t1

0x95ac,	// (0x000176d4) bg_popup_window_pane_cp012

0xbd51,	// (0x00019e79) heading_pane_cp06

0xdb9a,	// (0x0001bcc2) ncim_query_content_pane

0x95ac,	// (0x000176d4) bg_popup_heading_pane_cp01

0xdba2,	// (0x0001bcca) ncim_heading_pane_t1

0xdbb0,	// (0x0001bcd8) ncim_indicator_popup_pane

0xdbc2,	// (0x0001bcea) ncim_query_button_pane

0xdbd8,	// (0x0001bd00) ncim_query_content_pane_t1

0xdbea,	// (0x0001bd12) ncim_query_content_pane_t2

0x0005,

0xfb5e,	// (0x0001dc86) ncim_query_content_pane_t

0xdc24,	// (0x0001bd4c) ncim_query_list_pane

0xdc36,	// (0x0001bd5e) ncim_query_popup_pane

0xdbb0,	// (0x0001bcd8) ncim_indicator_popup_pane_ParamLimits

0x7001,	// (0x00015129) ncim_query_content_pane_g1_ParamLimits

0x7001,	// (0x00015129) ncim_query_content_pane_g1

0xdbd8,	// (0x0001bd00) ncim_query_content_pane_t1_ParamLimits

0xdbea,	// (0x0001bd12) ncim_query_content_pane_t2_ParamLimits

0x700d,	// (0x00015135) ncim_query_content_pane_t3_ParamLimits

0x700d,	// (0x00015135) ncim_query_content_pane_t3

0x7035,	// (0x0001515d) ncim_query_content_pane_t4_ParamLimits

0x7035,	// (0x0001515d) ncim_query_content_pane_t4

0x705d,	// (0x00015185) ncim_query_content_pane_t5_ParamLimits

0x705d,	// (0x00015185) ncim_query_content_pane_t5

0xdbfc,	// (0x0001bd24) ncim_query_content_pane_t6_ParamLimits

0xdbfc,	// (0x0001bd24) ncim_query_content_pane_t6

0xfb5e,	// (0x0001dc86) ncim_query_content_pane_t_ParamLimits

0xdc24,	// (0x0001bd4c) ncim_query_list_pane_ParamLimits

0xdc36,	// (0x0001bd5e) ncim_query_popup_pane_ParamLimits

0xdc4a,	// (0x0001bd72) wait_bar_pane_cp04

0x95ac,	// (0x000176d4) input_focus_pane_cp011

0xdc52,	// (0x0001bd7a) ncim_query_popup_pane_t1

0xdc60,	// (0x0001bd88) ncim_list_query_list_pane_ParamLimits

0xdc60,	// (0x0001bd88) ncim_list_query_list_pane

0x95ac,	// (0x000176d4) bg_button_pane_cp027

0xdc73,	// (0x0001bd9b) ncim_query_button_pane_g1

0x95ac,	// (0x000176d4) list_highlight_pane_cp012

0xdc7d,	// (0x0001bda5) ncim_list_query_list_pane_g1

0xdc85,	// (0x0001bdad) ncim_list_query_list_pane_t1

0xce81,	// (0x0001afa9) cam4_indicators_pane_g3_ParamLimits

0xce81,	// (0x0001afa9) cam4_indicators_pane_g3

0xcf04,	// (0x0001b02c) vid4_indicators_pane_g5_ParamLimits

0xcf04,	// (0x0001b02c) vid4_indicators_pane_g5

0xd5ea,	// (0x0001b712) vid4_progress_pane_g5_ParamLimits

0xd5ea,	// (0x0001b712) vid4_progress_pane_g5

0x6eec,	// (0x00015014) main_ncimui_pane_g1

0x6f55,	// (0x0001507d) ncimui_group_query_pane_ParamLimits

0x6f55,	// (0x0001507d) ncimui_group_query_pane

0x6f9d,	// (0x000150c5) ncimui_list_pane_ParamLimits

0x6f9d,	// (0x000150c5) ncimui_list_pane

0x6fc4,	// (0x000150ec) ncimui_text_pane_ParamLimits

0x6fc4,	// (0x000150ec) ncimui_text_pane

0x7085,	// (0x000151ad) ncimui_text_pane_t1_ParamLimits

0x7085,	// (0x000151ad) ncimui_text_pane_t1

0xdc93,	// (0x0001bdbb) ncimui_list_single_graphic_pane_ParamLimits

0xdc93,	// (0x0001bdbb) ncimui_list_single_graphic_pane

0x70a3,	// (0x000151cb) ncimui_query_pane_ParamLimits

0x70a3,	// (0x000151cb) ncimui_query_pane

0x95ac,	// (0x000176d4) list_highlight_pane_cp013

0xdca3,	// (0x0001bdcb) ncim_list_query_list_pane_t1_copy1

0xdc7d,	// (0x0001bda5) ncim_list_single_graphic_pane_g1

0x70b6,	// (0x000151de) ncim_query_button_pane_cp01

0x70c2,	// (0x000151ea) ncim_query_entry_pane_ParamLimits

0x70c2,	// (0x000151ea) ncim_query_entry_pane

0x70d5,	// (0x000151fd) ncimui_query_pane_g1

0x70e1,	// (0x00015209) ncimui_query_pane_t1_ParamLimits

0x70e1,	// (0x00015209) ncimui_query_pane_t1

0x9621,	// (0x00017749) input_focus_pane_cp012

0xdcb1,	// (0x0001bdd9) ncim_query_entry_pane_t1

0x9de1,	// (0x00017f09) main_im_pane_ParamLimits

0x9621,	// (0x00017749) main_mobtv_pane_ParamLimits

0x9621,	// (0x00017749) main_mobtv_pane

0x6d61,	// (0x00014e89) main_cset6_slider_pane_g18_ParamLimits

0x6d61,	// (0x00014e89) main_cset6_slider_pane_g18

0x6d6d,	// (0x00014e95) main_cset6_slider_pane_g19_ParamLimits

0x6d6d,	// (0x00014e95) main_cset6_slider_pane_g19

0x9d69,	// (0x00017e91) bg_main_mobtv_pane_ParamLimits

0x9d69,	// (0x00017e91) bg_main_mobtv_pane

0x70fa,	// (0x00015222) main_mobtv_info_pane

0x7105,	// (0x0001522d) main_mobtv_loading_pane_ParamLimits

0x7105,	// (0x0001522d) main_mobtv_loading_pane

0xdcc3,	// (0x0001bdeb) main_mobtv_pg_channel_list_pane

0xdccd,	// (0x0001bdf5) main_mobtv_pg_hdr_pane

0x7112,	// (0x0001523a) main_mobtv_programe_curr_pane_ParamLimits

0x7112,	// (0x0001523a) main_mobtv_programe_curr_pane

0x711f,	// (0x00015247) main_mobtv_programe_next_pane_ParamLimits

0x711f,	// (0x00015247) main_mobtv_programe_next_pane

0xdcd6,	// (0x0001bdfe) popup_mobtv_noti_window

0xa049,	// (0x00018171) main_tv_pg_hdr_pane_g1

0xdce0,	// (0x0001be08) main_tv_pg_hdr_pane_g2

0xdce8,	// (0x0001be10) main_tv_pg_hdr_pane_g3

0xdcf0,	// (0x0001be18) main_tv_pg_hdr_pane_g4

0xdcf8,	// (0x0001be20) main_tv_pg_hdr_pane_g5

0xdd02,	// (0x0001be2a) main_tv_pg_hdr_pane_g6

0xdd0c,	// (0x0001be34) main_tv_pg_hdr_pane_g7

0xdd16,	// (0x0001be3e) main_tv_pg_hdr_pane_g8

0xdd20,	// (0x0001be48) main_tv_pg_hdr_pane_g9

0xdd2a,	// (0x0001be52) main_tv_pg_hdr_pane_g10

0xdd34,	// (0x0001be5c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb6b,	// (0x0001dc93) main_tv_pg_hdr_pane_g

0xdd3e,	// (0x0001be66) main_tv_pg_hdr_pane_t1

0xdd4c,	// (0x0001be74) main_tv_pg_hdr_pane_t2

0xdd5a,	// (0x0001be82) main_tv_pg_hdr_pane_t3

0xdd6a,	// (0x0001be92) main_tv_pg_hdr_pane_t4

0xdd7a,	// (0x0001bea2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb82,	// (0x0001dcaa) main_tv_pg_hdr_pane_t

0xdd8a,	// (0x0001beb2) single_mobtv_pg_channel_pane_ParamLimits

0xdd8a,	// (0x0001beb2) single_mobtv_pg_channel_pane

0xdd9c,	// (0x0001bec4) single_mobtv_pg_channel_table_pane

0xdda5,	// (0x0001becd) single_mobtv_pg_channel_thumb_pane

0xddae,	// (0x0001bed6) single_tv_pg_channel_pane_g1

0xddb7,	// (0x0001bedf) single_tv_pg_channel_pane_g2

0x0001,

0xfb8d,	// (0x0001dcb5) single_tv_pg_channel_pane_g

0x9d4d,	// (0x00017e75) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9d4d,	// (0x00017e75) bg_single_mobtv_pg_channel_thumb_pane

0xddc0,	// (0x0001bee8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xddc0,	// (0x0001bee8) single_mobtv_pg_channel_thumb_pane_g1

0xddce,	// (0x0001bef6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xddce,	// (0x0001bef6) single_mobtv_pg_channel_thumb_pane_g2

0xddda,	// (0x0001bf02) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xddda,	// (0x0001bf02) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb92,	// (0x0001dcba) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb92,	// (0x0001dcba) single_mobtv_pg_channel_thumb_pane_g

0xdde6,	// (0x0001bf0e) single_mobtv_pg_channel_thumb_pane_t1

0xddf4,	// (0x0001bf1c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb99,	// (0x0001dcc1) single_mobtv_pg_channel_thumb_pane_t

0xa049,	// (0x00018171) bg_single_mobtv_pg_channel_table_pane_g1

0xa049,	// (0x00018171) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0001d4e6) bg_single_mobtv_pg_channel_table_pane_g

0xde02,	// (0x0001bf2a) single_mobtv_pg_channel_table_pane_t1

0xde10,	// (0x0001bf38) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9e,	// (0x0001dcc6) single_mobtv_pg_channel_table_pane_t

0x7134,	// (0x0001525c) main_mobtv_info_pane_g1_ParamLimits

0x7134,	// (0x0001525c) main_mobtv_info_pane_g1

0x7152,	// (0x0001527a) main_mobtv_info_pane_t1_ParamLimits

0x7152,	// (0x0001527a) main_mobtv_info_pane_t1

0x71ca,	// (0x000152f2) main_mobtv_info_pane_t2_ParamLimits

0x71ca,	// (0x000152f2) main_mobtv_info_pane_t2

0x0002,

0xfba8,	// (0x0001dcd0) main_mobtv_info_pane_t_ParamLimits

0xfba8,	// (0x0001dcd0) main_mobtv_info_pane_t

0x725b,	// (0x00015383) wait_bar_pane_cp05

0x726d,	// (0x00015395) main_mobtv_loading_pane_g1_ParamLimits

0x726d,	// (0x00015395) main_mobtv_loading_pane_g1

0x727e,	// (0x000153a6) main_mobtv_loading_pane_g2_ParamLimits

0x727e,	// (0x000153a6) main_mobtv_loading_pane_g2

0x728a,	// (0x000153b2) main_mobtv_loading_pane_g3_ParamLimits

0x728a,	// (0x000153b2) main_mobtv_loading_pane_g3

0x0002,

0xfbaf,	// (0x0001dcd7) main_mobtv_loading_pane_g_ParamLimits

0xfbaf,	// (0x0001dcd7) main_mobtv_loading_pane_g

0xde1e,	// (0x0001bf46) main_mobtv_loading_pane_t1_ParamLimits

0xde1e,	// (0x0001bf46) main_mobtv_loading_pane_t1

0xde36,	// (0x0001bf5e) main_mobtv_loading_pane_t2_ParamLimits

0xde36,	// (0x0001bf5e) main_mobtv_loading_pane_t2

0x0001,

0xfbb6,	// (0x0001dcde) main_mobtv_loading_pane_t_ParamLimits

0xfbb6,	// (0x0001dcde) main_mobtv_loading_pane_t

0x729d,	// (0x000153c5) wait_bar_pane_cp06_ParamLimits

0x729d,	// (0x000153c5) wait_bar_pane_cp06

0xde5a,	// (0x0001bf82) main_mobtv_programe_curr_pane_t1

0xde68,	// (0x0001bf90) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbbb,	// (0x0001dce3) main_mobtv_programe_curr_pane_t

0xde76,	// (0x0001bf9e) main_mobtv_programe_next_pane_t1

0xde84,	// (0x0001bfac) main_mobtv_programe_next_pane_t2

0xde92,	// (0x0001bfba) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc0,	// (0x0001dce8) main_mobtv_programe_next_pane_t

0x95ac,	// (0x000176d4) bg_popup_mobtv_noti_window_pane

0xdea0,	// (0x0001bfc8) popup_mobtv_noti_window_g1

0xdea8,	// (0x0001bfd0) popup_mobtv_noti_window_t1

0xdeb6,	// (0x0001bfde) popup_mobtv_noti_window_t2

0x0001,

0xfbc7,	// (0x0001dcef) popup_mobtv_noti_window_t

0xa049,	// (0x00018171) bg_popup_mobtv_noti_window_pane_g1

0x95ac,	// (0x000176d4) sc_clock_pane

0x95ac,	// (0x000176d4) main_fs_bigclock_pane

0x699f,	// (0x00014ac7) blid2_tripm_pane_t4_ParamLimits

0x699f,	// (0x00014ac7) blid2_tripm_pane_t4

0x72ac,	// (0x000153d4) sc_clock_pane_g1_ParamLimits

0x72ac,	// (0x000153d4) sc_clock_pane_g1

0x72be,	// (0x000153e6) sc_clock_pane_t1_ParamLimits

0x72be,	// (0x000153e6) sc_clock_pane_t1

0x72e2,	// (0x0001540a) sc_clock_pane_t2_ParamLimits

0x72e2,	// (0x0001540a) sc_clock_pane_t2

0x72fa,	// (0x00015422) sc_clock_pane_t3_ParamLimits

0x72fa,	// (0x00015422) sc_clock_pane_t3

0x0004,

0xfbcc,	// (0x0001dcf4) sc_clock_pane_t_ParamLimits

0xfbcc,	// (0x0001dcf4) sc_clock_pane_t

0x8203,	// (0x0001632b) main_fs_bigclock_indicator_pane_ParamLimits

0x8203,	// (0x0001632b) main_fs_bigclock_indicator_pane

0x73c0,	// (0x000154e8) main_fs_bigclock_pane_g1_ParamLimits

0x73c0,	// (0x000154e8) main_fs_bigclock_pane_g1

0x820f,	// (0x00016337) main_fs_bigclock_pane_t1_ParamLimits

0x820f,	// (0x00016337) main_fs_bigclock_pane_t1

0x8221,	// (0x00016349) main_fs_bigclock_pane_t2_ParamLimits

0x8221,	// (0x00016349) main_fs_bigclock_pane_t2

0x8235,	// (0x0001635d) main_fs_bigclock_pane_t3_ParamLimits

0x8235,	// (0x0001635d) main_fs_bigclock_pane_t3

0x0002,

0xfd5d,	// (0x0001de85) main_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x0001de85) main_fs_bigclock_pane_t

0xe8fd,	// (0x0001ca25) main_fs_bigclock_indicator_pane_g1

0xdbca,	// (0x0001bcf2) ncim_query_content_pane_g2_ParamLimits

0xdbca,	// (0x0001bcf2) ncim_query_content_pane_g2

0x0001,

0xfb59,	// (0x0001dc81) ncim_query_content_pane_g_ParamLimits

0xfb59,	// (0x0001dc81) ncim_query_content_pane_g

0x7311,	// (0x00015439) sc_clock_pane_t4_ParamLimits

0x7311,	// (0x00015439) sc_clock_pane_t4

0x9621,	// (0x00017749) main_radioblah_pane

0xcdc2,	// (0x0001aeea) cell_call4_button_pane_t1_copy1_ParamLimits

0xcdc2,	// (0x0001aeea) cell_call4_button_pane_t1_copy1

0x6f04,	// (0x0001502c) main_ncimui_pane_t1_ParamLimits

0x6f04,	// (0x0001502c) main_ncimui_pane_t1

0x6f1e,	// (0x00015046) main_ncimui_pane_t2_ParamLimits

0x6f1e,	// (0x00015046) main_ncimui_pane_t2

0x0002,

0xfb52,	// (0x0001dc7a) main_ncimui_pane_t_ParamLimits

0xfb52,	// (0x0001dc7a) main_ncimui_pane_t

0xdec4,	// (0x0001bfec) main_radioblah_anim_pane_ParamLimits

0xdec4,	// (0x0001bfec) main_radioblah_anim_pane

0xded5,	// (0x0001bffd) main_radioblah_info_pane_ParamLimits

0xded5,	// (0x0001bffd) main_radioblah_info_pane

0xdee9,	// (0x0001c011) main_radioblah_pane_t1_ParamLimits

0xdee9,	// (0x0001c011) main_radioblah_pane_t1

0xdf05,	// (0x0001c02d) main_radioblah_pane_t2_ParamLimits

0xdf05,	// (0x0001c02d) main_radioblah_pane_t2

0x0003,

0xfbed,	// (0x0001dd15) main_radioblah_pane_t_ParamLimits

0xfbed,	// (0x0001dd15) main_radioblah_pane_t

0x7569,	// (0x00015691) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7569,	// (0x00015691) main_radioblah_rocker_ctrl_pane

0xdf4d,	// (0x0001c075) main_radioblah_info_pane_t1_ParamLimits

0xdf4d,	// (0x0001c075) main_radioblah_info_pane_t1

0x75c1,	// (0x000156e9) main_radioblah_info_pane_t2_ParamLimits

0x75c1,	// (0x000156e9) main_radioblah_info_pane_t2

0x0003,

0xfbf6,	// (0x0001dd1e) main_radioblah_info_pane_t_ParamLimits

0xfbf6,	// (0x0001dd1e) main_radioblah_info_pane_t

0xa049,	// (0x00018171) main_radioblah_rocker_ctrl_pane_g1

0x7671,	// (0x00015799) main_radioblah_rocker_ctrl_pane_g2

0x7679,	// (0x000157a1) main_radioblah_rocker_ctrl_pane_g3

0x7681,	// (0x000157a9) main_radioblah_rocker_ctrl_pane_g4

0x7689,	// (0x000157b1) main_radioblah_rocker_ctrl_pane_g5

0x7691,	// (0x000157b9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbff,	// (0x0001dd27) main_radioblah_rocker_ctrl_pane_g

0x6c2e,	// (0x00014d56) main_cset_text2_pane_t1_copy1_ParamLimits

0xce52,	// (0x0001af7a) cam4_image_uncrop_qvga_pane

0xcea7,	// (0x0001afcf) vid4_image_uncrop_qcif_pane

0xd7e1,	// (0x0001b909) cam6_image_uncrop_qvga_pane_ParamLimits

0xd7e1,	// (0x0001b909) cam6_image_uncrop_qvga_pane

0xd8a9,	// (0x0001b9d1) vid6_image_uncrop_qcif_pane_ParamLimits

0xd8a9,	// (0x0001b9d1) vid6_image_uncrop_qcif_pane

0x95ac,	// (0x000176d4) bg_popup_preview_window_pane_cp03

0xdb7c,	// (0x0001bca4) list_cset_text2_pane

0xdb84,	// (0x0001bcac) main_cset6_text2_pane_g1

0xdb8c,	// (0x0001bcb4) main_cset6_text2_pane_t1

0xe967,	// (0x0001ca8f) list_cset_text2_pane_t1_ParamLimits

0xe967,	// (0x0001ca8f) list_cset_text2_pane_t1

0x9621,	// (0x00017749) main_radioblah_pane_ParamLimits

0x7247,	// (0x0001536f) main_mobtv_info_pane_t3_ParamLimits

0x7247,	// (0x0001536f) main_mobtv_info_pane_t3

0x7557,	// (0x0001567f) main_radioblah_pane_g1

0x7591,	// (0x000156b9) main_radioblah_info_pane_g1

0x7616,	// (0x0001573e) main_radioblah_info_pane_t3_ParamLimits

0x7616,	// (0x0001573e) main_radioblah_info_pane_t3

0x25e0,	// (0x00010708) highlight_cell_cale_month_pane_ParamLimits

0x25e0,	// (0x00010708) highlight_cell_cale_month_pane

0x95ac,	// (0x000176d4) main_phob_fisheye_pane

0xc5e1,	// (0x0001a709) scroll_pane_cp0031_ParamLimits

0xc5e1,	// (0x0001a709) scroll_pane_cp0031

0xd9bb,	// (0x0001bae3) wait_bar_pane_cp08_ParamLimits

0x6cb7,	// (0x00014ddf) cset_list_set_pane_copy1_ParamLimits

0xdf87,	// (0x0001c0af) highlight_cell_cale_month_pane_g1

0x7699,	// (0x000157c1) highlight_cell_cale_month_pane_t1

0xd5aa,	// (0x0001b6d2) list_gen_pane_cp01

0xd0d8,	// (0x0001b200) scroll_pane_01

0x76a7,	// (0x000157cf) list_single_double_fisheye_pane

0x76b0,	// (0x000157d8) list_double_fisheye_pane_g1_ParamLimits

0x76b0,	// (0x000157d8) list_double_fisheye_pane_g1

0x76bc,	// (0x000157e4) list_double_fisheye_pane_g2_ParamLimits

0x76bc,	// (0x000157e4) list_double_fisheye_pane_g2

0x76d0,	// (0x000157f8) list_double_fisheye_pane_g3_ParamLimits

0x76d0,	// (0x000157f8) list_double_fisheye_pane_g3

0x0004,

0xfc0c,	// (0x0001dd34) list_double_fisheye_pane_g_ParamLimits

0xfc0c,	// (0x0001dd34) list_double_fisheye_pane_g

0x76f9,	// (0x00015821) list_double_fisheye_pane_t1_ParamLimits

0x76f9,	// (0x00015821) list_double_fisheye_pane_t1

0x7714,	// (0x0001583c) list_double_fisheye_pane_t2_ParamLimits

0x7714,	// (0x0001583c) list_double_fisheye_pane_t2

0x0001,

0xfc17,	// (0x0001dd3f) list_double_fisheye_pane_t_ParamLimits

0xfc17,	// (0x0001dd3f) list_double_fisheye_pane_t

0x95ac,	// (0x000176d4) main_call5_pane

0x733c,	// (0x00015464) sc_swipe_pane_ParamLimits

0x733c,	// (0x00015464) sc_swipe_pane

0x7749,	// (0x00015871) call5_image_pane_ParamLimits

0x7749,	// (0x00015871) call5_image_pane

0x7766,	// (0x0001588e) call5_swipe_1_pane_ParamLimits

0x7766,	// (0x0001588e) call5_swipe_1_pane

0x7779,	// (0x000158a1) call5_swipe_2_pane_ParamLimits

0x7779,	// (0x000158a1) call5_swipe_2_pane

0x77a4,	// (0x000158cc) popup_call5_audio_first_window_ParamLimits

0x77a4,	// (0x000158cc) popup_call5_audio_first_window

0x9d4d,	// (0x00017e75) call5_swipe_1_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) call5_swipe_1_pane_g1

0xdf8f,	// (0x0001c0b7) call5_swipe_1_pane_g2_ParamLimits

0xdf8f,	// (0x0001c0b7) call5_swipe_1_pane_g2

0x0001,

0xfc1c,	// (0x0001dd44) call5_swipe_1_pane_g_ParamLimits

0xfc1c,	// (0x0001dd44) call5_swipe_1_pane_g

0xdf9b,	// (0x0001c0c3) call5_swipe_1_pane_t1_ParamLimits

0xdf9b,	// (0x0001c0c3) call5_swipe_1_pane_t1

0x9d4d,	// (0x00017e75) call5_swipe_2_pane_g1_ParamLimits

0x9d4d,	// (0x00017e75) call5_swipe_2_pane_g1

0xdfb0,	// (0x0001c0d8) call5_swipe_2_pane_g2_ParamLimits

0xdfb0,	// (0x0001c0d8) call5_swipe_2_pane_g2

0x0001,

0xfc21,	// (0x0001dd49) call5_swipe_2_pane_g_ParamLimits

0xfc21,	// (0x0001dd49) call5_swipe_2_pane_g

0xdfbc,	// (0x0001c0e4) call5_swipe_2_pane_t1_ParamLimits

0xdfbc,	// (0x0001c0e4) call5_swipe_2_pane_t1

0xdfd1,	// (0x0001c0f9) sc_swipe_pane_g1_ParamLimits

0xdfd1,	// (0x0001c0f9) sc_swipe_pane_g1

0xdfde,	// (0x0001c106) sc_swipe_pane_g2_ParamLimits

0xdfde,	// (0x0001c106) sc_swipe_pane_g2

0x0001,

0xfc26,	// (0x0001dd4e) sc_swipe_pane_g_ParamLimits

0xfc26,	// (0x0001dd4e) sc_swipe_pane_g

0xdfea,	// (0x0001c112) sc_swipe_pane_t1_ParamLimits

0xdfea,	// (0x0001c112) sc_swipe_pane_t1

0x95ac,	// (0x000176d4) main_cmail_launcher_pane

0x77b9,	// (0x000158e1) aid_size_cell_cmail_l_ParamLimits

0x77b9,	// (0x000158e1) aid_size_cell_cmail_l

0x77cf,	// (0x000158f7) grid_cmail_l_pane_ParamLimits

0x77cf,	// (0x000158f7) grid_cmail_l_pane

0x77e9,	// (0x00015911) cell_cmail_l_pane_ParamLimits

0x77e9,	// (0x00015911) cell_cmail_l_pane

0x780e,	// (0x00015936) cell_cmail_l_pane_g1_ParamLimits

0x780e,	// (0x00015936) cell_cmail_l_pane_g1

0x781a,	// (0x00015942) cell_cmail_l_pane_t1_ParamLimits

0x781a,	// (0x00015942) cell_cmail_l_pane_t1

0x7830,	// (0x00015958) cell_cmail_l_pane_t2_ParamLimits

0x7830,	// (0x00015958) cell_cmail_l_pane_t2

0x0001,

0xfc2b,	// (0x0001dd53) cell_cmail_l_pane_t_ParamLimits

0xfc2b,	// (0x0001dd53) cell_cmail_l_pane_t

0x9621,	// (0x00017749) grid_highlight_pane_cp018_ParamLimits

0x9621,	// (0x00017749) grid_highlight_pane_cp018

0x087c,	// (0x0000e9a4) main2_pane_ParamLimits

0x087c,	// (0x0000e9a4) main2_pane

0x9e9d,	// (0x00017fc5) popup_sp_fs_action_menu_bg_pane_g1

0x9ea5,	// (0x00017fcd) popup_sp_fs_action_menu_bg_pane_g2

0x9ead,	// (0x00017fd5) popup_sp_fs_action_menu_bg_pane_g3

0x9eb5,	// (0x00017fdd) popup_sp_fs_action_menu_bg_pane_g4

0x9ebd,	// (0x00017fe5) popup_sp_fs_action_menu_bg_pane_g5

0x9ec5,	// (0x00017fed) popup_sp_fs_action_menu_bg_pane_g6

0x9ecd,	// (0x00017ff5) popup_sp_fs_action_menu_bg_pane_g7

0x9ed5,	// (0x00017ffd) popup_sp_fs_action_menu_bg_pane_g8

0x9edd,	// (0x00018005) popup_sp_fs_action_menu_bg_pane_g9

0x9ee5,	// (0x0001800d) popup_sp_fs_action_menu_bg_pane_g10

0x9ee5,	// (0x0001800d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0001d253) popup_sp_fs_action_menu_bg_pane_g

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g2

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001d301) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001d301) list_medium_line_x2_t3_g3_g

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t2

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g3_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t3_g2_g

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t2

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g2_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g2

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g3

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001d314) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001d314) list_medium_line_x2_t4_g4_g

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t2

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t3

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001d31d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001d31d) list_medium_line_x2_t4_g4_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g2

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g3

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0001d314) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0001d314) list_medium_line_x2_t2_g4_g

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g4_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g4_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g2

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001d301) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001d301) list_medium_line_x2_t2_g3_g

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g3_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g3_t

0x2750,	// (0x00010878) main_sp_fs_list_pane_ParamLimits

0x2750,	// (0x00010878) main_sp_fs_list_pane

0xd10e,	// (0x0001b236) sp_fs_scroll_pane_ParamLimits

0xd10e,	// (0x0001b236) sp_fs_scroll_pane

0xa5d8,	// (0x00018700) list_medium_line_x2_t3_t1

0xa5d8,	// (0x00018700) list_medium_line_x2_t3_t2

0xa5d8,	// (0x00018700) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0001d3ca) list_medium_line_x2_t3_t

0xa5d8,	// (0x00018700) list_medium_line_x3_t4_t1

0xa5d8,	// (0x00018700) list_medium_line_x3_t4_t2

0xa5d8,	// (0x00018700) list_medium_line_x3_t4_t3

0xa5d8,	// (0x00018700) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0001d3d1) list_medium_line_x3_t4_t

0xa5d8,	// (0x00018700) list_medium_line_x4_t5_t1

0xa5d8,	// (0x00018700) list_medium_line_x4_t5_t2

0xa5d8,	// (0x00018700) list_medium_line_x4_t5_t3

0xa5d8,	// (0x00018700) list_medium_line_x4_t5_t4

0xa5d8,	// (0x00018700) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0001d3da) list_medium_line_x4_t5_t

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g1

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g2

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g3

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001d314) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001d314) list_medium_line_t4_g4_g

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t1

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t2

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t3

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t4_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001d31d) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001d31d) list_medium_line_t4_g4_t

0x27fe,	// (0x00010926) chi_dic_find_pane_g1

0x387e,	// (0x000119a6) main_tport_pane

0xa5d8,	// (0x00018700) list_medium_line_plain_t1

0x9d4d,	// (0x00017e75) list_medium_line_t2_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_t2_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_t2_g2_g

0xa01b,	// (0x00018143) list_medium_line_t2_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_g2_t1

0xa01b,	// (0x00018143) list_medium_line_t2_g2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_g2_t

0xd624,	// (0x0001b74c) aid_sp_fs_list_icon_a_sm

0xd62c,	// (0x0001b754) aid_sp_fs_list_icon_d

0xd634,	// (0x0001b75c) aid_sp_fs_text_primary

0xd63d,	// (0x0001b765) aid_sp_fs_text_secondary

0x95ac,	// (0x000176d4) list_medium_line

0x95ac,	// (0x000176d4) list_medium_line_g2

0x95ac,	// (0x000176d4) list_medium_line_g3

0x95ac,	// (0x000176d4) list_medium_line_plain

0x95ac,	// (0x000176d4) list_medium_line_plain_t2

0x95ac,	// (0x000176d4) list_medium_line_plain_t3

0x95ac,	// (0x000176d4) list_medium_line_right_icon

0x95ac,	// (0x000176d4) list_medium_line_right_iconx2

0x95ac,	// (0x000176d4) list_medium_line_t2

0x95ac,	// (0x000176d4) list_medium_line_t2_g2

0x95ac,	// (0x000176d4) list_medium_line_t2_g3

0x95ac,	// (0x000176d4) list_medium_line_t2_right_icon

0x95ac,	// (0x000176d4) list_medium_line_t2_right_iconx2

0x95ac,	// (0x000176d4) list_medium_line_t3

0x95ac,	// (0x000176d4) list_medium_line_t3_g2

0x95ac,	// (0x000176d4) list_medium_line_t3_g3

0x95ac,	// (0x000176d4) list_medium_line_t3_right_iconx2

0x95ac,	// (0x000176d4) list_medium_line_t4_g4

0x95ac,	// (0x000176d4) list_medium_line_x2

0x95ac,	// (0x000176d4) list_medium_line_x2_t2_g2

0x95ac,	// (0x000176d4) list_medium_line_x2_t2_g3

0x95ac,	// (0x000176d4) list_medium_line_x2_t2_g4

0x95ac,	// (0x000176d4) list_medium_line_x2_t3

0x95ac,	// (0x000176d4) list_medium_line_x2_t3_g2

0x95ac,	// (0x000176d4) list_medium_line_x2_t3_g3

0x95ac,	// (0x000176d4) list_medium_line_x2_t3_g4

0x95ac,	// (0x000176d4) list_medium_line_x2_t4_g2

0x95ac,	// (0x000176d4) list_medium_line_x2_t4_g4

0x95ac,	// (0x000176d4) list_medium_line_x3

0x95ac,	// (0x000176d4) list_medium_line_x3_t4

0x95ac,	// (0x000176d4) list_medium_line_x3_t4_g4

0x95ac,	// (0x000176d4) list_medium_line_x4_t4

0x95ac,	// (0x000176d4) list_medium_line_x4_t4_g7

0x95ac,	// (0x000176d4) list_medium_line_x4_t5

0x6791,	// (0x000148b9) list_single_fs_dyc_pane_ParamLimits

0x6791,	// (0x000148b9) list_single_fs_dyc_pane

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g1

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g2

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g3

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g4

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g5

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x4_t4_g7_g6

0x9d5b,	// (0x00017e83) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9d5b,	// (0x00017e83) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb33,	// (0x0001dc5b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb33,	// (0x0001dc5b) list_medium_line_x4_t4_g7_g

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t1

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t2

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x4_t4_g7_t3

0xaafb,	// (0x00018c23) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaafb,	// (0x00018c23) list_medium_line_x4_t4_g7_t4

0xaafb,	// (0x00018c23) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaafb,	// (0x00018c23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb42,	// (0x0001dc6a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb42,	// (0x0001dc6a) list_medium_line_x4_t4_g7_t

0x6ebb,	// (0x00014fe3) list_single_dyc_row_pane_ParamLimits

0x6ebb,	// (0x00014fe3) list_single_dyc_row_pane

0x7736,	// (0x0001585e) call5_gesture_pane_ParamLimits

0x7736,	// (0x0001585e) call5_gesture_pane

0x778c,	// (0x000158b4) call5_windows_pane_ParamLimits

0x778c,	// (0x000158b4) call5_windows_pane

0x784d,	// (0x00015975) call5_swipe_1_pane_cp_ParamLimits

0x784d,	// (0x00015975) call5_swipe_1_pane_cp

0x7859,	// (0x00015981) call5_swipe_2_pane_cp_ParamLimits

0x7859,	// (0x00015981) call5_swipe_2_pane_cp

0x9ff4,	// (0x0001811c) call5_image_pane_cp

0x7865,	// (0x0001598d) popup_call5_audio_first_window_cp_ParamLimits

0x7865,	// (0x0001598d) popup_call5_audio_first_window_cp

0xdfd1,	// (0x0001c0f9) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfd1,	// (0x0001c0f9) call5_swipe_1_pane_g1_cp

0xdfff,	// (0x0001c127) call5_swipe_1_pane_g2_cp

0xdfea,	// (0x0001c112) call5_swipe_1_pane_t1_cp_ParamLimits

0xdfea,	// (0x0001c112) call5_swipe_1_pane_t1_cp

0xdfd1,	// (0x0001c0f9) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfd1,	// (0x0001c0f9) call5_swipe_2_pane_g1_cp

0xe007,	// (0x0001c12f) call5_swipe_2_pane_g2_cp

0xe00f,	// (0x0001c137) call5_swipe_2_pane_t1_cp_ParamLimits

0xe00f,	// (0x0001c137) call5_swipe_2_pane_t1_cp

0x9621,	// (0x00017749) main_sp_fs_email_pane

0xd1f4,	// (0x0001b31c) main_sp_fs_listscroll_pane_te

0x7873,	// (0x0001599b) popup_sp_fs_action_menu_pane_ParamLimits

0x7873,	// (0x0001599b) popup_sp_fs_action_menu_pane

0xa049,	// (0x00018171) bg_sp_fs_ctrlbar_pane_g1

0xe024,	// (0x0001c14c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe02d,	// (0x0001c155) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe036,	// (0x0001c15e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa049,	// (0x00018171) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc30,	// (0x0001dd58) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbf91,	// (0x0001a0b9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbf91,	// (0x0001a0b9) bg_sp_fs_ctrlbar_ddmenu_pane

0xe03f,	// (0x0001c167) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe03f,	// (0x0001c167) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe04b,	// (0x0001c173) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe04b,	// (0x0001c173) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc39,	// (0x0001dd61) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc39,	// (0x0001dd61) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe057,	// (0x0001c17f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe057,	// (0x0001c17f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa049,	// (0x00018171) list_medium_line_t2_right_icon_g1

0xa5d8,	// (0x00018700) list_medium_line_t2_right_icon_t1

0xa5d8,	// (0x00018700) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3e,	// (0x0001dd66) list_medium_line_t2_right_icon_t

0xab0f,	// (0x00018c37) bg_sp_fs_ctrlbar_pane_ParamLimits

0xab0f,	// (0x00018c37) bg_sp_fs_ctrlbar_pane

0x7906,	// (0x00015a2e) main_sp_fs_ctrlbar_button_pane_cp01

0x7910,	// (0x00015a38) main_sp_fs_ctrlbar_ddmenu_pane

0xe0ab,	// (0x0001c1d3) main_sp_fs_ctrlbar_pane_g1

0xe0b7,	// (0x0001c1df) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc43,	// (0x0001dd6b) main_sp_fs_ctrlbar_pane_g

0x794e,	// (0x00015a76) main_sp_fs_ctrlbar_pane_t1

0x798d,	// (0x00015ab5) main_sp_fs_ctrlbar_pane

0x79b1,	// (0x00015ad9) main_sp_fs_listscroll_pane_te_cp01

0x79d1,	// (0x00015af9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x79d1,	// (0x00015af9) popup_sp_fs_action_menu_pane_cp01

0x9621,	// (0x00017749) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9621,	// (0x00017749) bg_sp_fs_highlight_list_pane_cp01

0xe0de,	// (0x0001c206) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0de,	// (0x0001c206) sp_fs_action_menu_list_gene_pane_g1

0xe0ed,	// (0x0001c215) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe0ed,	// (0x0001c215) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc51,	// (0x0001dd79) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc51,	// (0x0001dd79) sp_fs_action_menu_list_gene_pane_g

0xe0fa,	// (0x0001c222) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0fa,	// (0x0001c222) sp_fs_action_menu_list_gene_pane_t1

0xe112,	// (0x0001c23a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe112,	// (0x0001c23a) sp_fs_action_menu_list_gene_pane

0xe135,	// (0x0001c25d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe135,	// (0x0001c25d) popup_sp_fs_action_menu_bg_pane

0xe143,	// (0x0001c26b) sp_fs_action_menu_list_pane_ParamLimits

0xe143,	// (0x0001c26b) sp_fs_action_menu_list_pane

0x79f6,	// (0x00015b1e) sp_fs_scroll_pane_cp01_ParamLimits

0x79f6,	// (0x00015b1e) sp_fs_scroll_pane_cp01

0xa5d8,	// (0x00018700) list_medium_line_plain_t2_t1

0xa5d8,	// (0x00018700) list_medium_line_plain_t2_t2

0x0001,

0xfc3e,	// (0x0001dd66) list_medium_line_plain_t2_t

0xa5d8,	// (0x00018700) list_medium_line_plain_t3_t1

0xa5d8,	// (0x00018700) list_medium_line_plain_t3_t2

0xa5d8,	// (0x00018700) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0001d3ca) list_medium_line_plain_t3_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t2_g2_g

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g2_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_x2_t2_g2_t

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_x2_t4_g2_g

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t2

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t3

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0001d31d) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0001d31d) list_medium_line_x2_t4_g2_t

0xa049,	// (0x00018171) list_medium_line_t3_right_iconx2_g1

0xa049,	// (0x00018171) list_medium_line_t3_right_iconx2_g2

0xa049,	// (0x00018171) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0001d4eb) list_medium_line_t3_right_iconx2_g

0xa5d8,	// (0x00018700) list_medium_line_t3_right_iconx2_t1

0xa5d8,	// (0x00018700) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3e,	// (0x0001dd66) list_medium_line_t3_right_iconx2_t

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g1

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g2

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g3

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0001d314) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0001d314) list_medium_line_x3_t4_g4_g

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t1

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t2

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t3

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0001d31d) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0001d31d) list_medium_line_x3_t4_g4_t

0x7a1c,	// (0x00015b44) list_single_dyc_row_text_pane_t1_ParamLimits

0x7a1c,	// (0x00015b44) list_single_dyc_row_text_pane_t1

0x7a65,	// (0x00015b8d) list_single_dyc_row_text_pane_t2_ParamLimits

0x7a65,	// (0x00015b8d) list_single_dyc_row_text_pane_t2

0xe167,	// (0x0001c28f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe167,	// (0x0001c28f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc56,	// (0x0001dd7e) list_single_dyc_row_text_pane_t_ParamLimits

0xfc56,	// (0x0001dd7e) list_single_dyc_row_text_pane_t

0xe18b,	// (0x0001c2b3) list_single_dyc_row_pane_g1_ParamLimits

0xe18b,	// (0x0001c2b3) list_single_dyc_row_pane_g1

0xe197,	// (0x0001c2bf) list_single_dyc_row_pane_g2_ParamLimits

0xe197,	// (0x0001c2bf) list_single_dyc_row_pane_g2

0xe1a3,	// (0x0001c2cb) list_single_dyc_row_pane_g3_ParamLimits

0xe1a3,	// (0x0001c2cb) list_single_dyc_row_pane_g3

0xe1af,	// (0x0001c2d7) list_single_dyc_row_pane_g4_ParamLimits

0xe1af,	// (0x0001c2d7) list_single_dyc_row_pane_g4

0x0003,

0xfc63,	// (0x0001dd8b) list_single_dyc_row_pane_g_ParamLimits

0xfc63,	// (0x0001dd8b) list_single_dyc_row_pane_g

0xe1bb,	// (0x0001c2e3) list_single_dyc_row_text_pane_ParamLimits

0xe1bb,	// (0x0001c2e3) list_single_dyc_row_text_pane

0x95ac,	// (0x000176d4) bg_sp_fs_scroll_pane

0xe1da,	// (0x0001c302) thumb_sp_fs_scroll_pane

0x9d4d,	// (0x00017e75) list_medium_line_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g1

0xa01b,	// (0x00018143) list_medium_line_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t1

0x9d4d,	// (0x00017e75) list_medium_line_x2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_x2_g

0xa01b,	// (0x00018143) list_medium_line_x2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t1

0x9d4d,	// (0x00017e75) list_medium_line_x3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x3_g1

0xe1e3,	// (0x0001c30b) list_medium_line_x3_g2_ParamLimits

0xe1e3,	// (0x0001c30b) list_medium_line_x3_g2

0x0001,

0xfc6c,	// (0x0001dd94) list_medium_line_x3_g_ParamLimits

0xfc6c,	// (0x0001dd94) list_medium_line_x3_g

0xe1f1,	// (0x0001c319) list_medium_line_x3_t1_ParamLimits

0xe1f1,	// (0x0001c319) list_medium_line_x3_t1

0xe205,	// (0x0001c32d) thumb_sp_fs_scroll_pane_g1

0xe20e,	// (0x0001c336) thumb_sp_fs_scroll_pane_g2

0xe217,	// (0x0001c33f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0001dd99) thumb_sp_fs_scroll_pane_g

0xe205,	// (0x0001c32d) bg_sp_fs_scroll_pane_g1

0xe20e,	// (0x0001c336) bg_sp_fs_scroll_pane_g2

0xe217,	// (0x0001c33f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc71,	// (0x0001dd99) bg_sp_fs_scroll_pane_g

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g1

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g2

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g3

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0001d314) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0001d314) list_medium_line_x2_t3_g4_g

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t1

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t2

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_x2_t3_g4_t

0x9d4d,	// (0x00017e75) list_medium_line_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_g2_g

0xa01b,	// (0x00018143) list_medium_line_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_g2_t1

0x9d4d,	// (0x00017e75) list_medium_line_t3_g2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g2_g1

0x9d4d,	// (0x00017e75) list_medium_line_t3_g2_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0001d30f) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0001d30f) list_medium_line_t3_g2_g

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t1

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t2

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_t3_g2_t

0xa049,	// (0x00018171) list_medium_line_right_icon_g1

0xa5d8,	// (0x00018700) list_medium_line_right_icon_t1

0x9d4d,	// (0x00017e75) list_medium_line_t2_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g1

0xa01b,	// (0x00018143) list_medium_line_t2_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_t1

0xa01b,	// (0x00018143) list_medium_line_t2_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_t

0x9d4d,	// (0x00017e75) list_medium_line_t3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g1

0xa01b,	// (0x00018143) list_medium_line_t3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_t1

0xa01b,	// (0x00018143) list_medium_line_t3_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_t2

0xa01b,	// (0x00018143) list_medium_line_t3_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_t3_t

0x9d4d,	// (0x00017e75) list_medium_line_g3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g3_g1

0x9d4d,	// (0x00017e75) list_medium_line_g3_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g3_g2

0x9d4d,	// (0x00017e75) list_medium_line_g3_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0001d301) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0001d301) list_medium_line_g3_g

0xa01b,	// (0x00018143) list_medium_line_g3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_g3_t1

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g1

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g2

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0001d301) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0001d301) list_medium_line_t2_g3_g

0xa01b,	// (0x00018143) list_medium_line_t2_g3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_g3_t1

0xa01b,	// (0x00018143) list_medium_line_t2_g3_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0001d2e4) list_medium_line_t2_g3_t

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g1_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g1

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g2_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g2

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g3_ParamLimits

0x9d4d,	// (0x00017e75) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0001d301) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0001d301) list_medium_line_t3_g3_g

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t1_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t1

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t2_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t2

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t3_ParamLimits

0xa01b,	// (0x00018143) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0001d308) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0001d308) list_medium_line_t3_g3_t

0xa049,	// (0x00018171) list_medium_line_right_iconx2_g1

0xa049,	// (0x00018171) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001d4e6) list_medium_line_right_iconx2_g

0xa5d8,	// (0x00018700) list_medium_line_right_iconx2_t1

0xa049,	// (0x00018171) list_medium_line_t2_right_iconx2_g1

0xa049,	// (0x00018171) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0001d4e6) list_medium_line_t2_right_iconx2_g

0xa5d8,	// (0x00018700) list_medium_line_t2_right_iconx2_t1

0xa5d8,	// (0x00018700) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3e,	// (0x0001dd66) list_medium_line_t2_right_iconx2_t

0xa5d8,	// (0x00018700) list_medium_line_x4_t4_t1

0xa5d8,	// (0x00018700) list_medium_line_x4_t4_t2

0xa5d8,	// (0x00018700) list_medium_line_x4_t4_t3

0xa5d8,	// (0x00018700) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0001d3d1) list_medium_line_x4_t4_t

0x7bdb,	// (0x00015d03) tport_appsw_pane_ParamLimits

0x7bdb,	// (0x00015d03) tport_appsw_pane

0x7bf2,	// (0x00015d1a) tport_contact_pane_ParamLimits

0x7bf2,	// (0x00015d1a) tport_contact_pane

0x7c0a,	// (0x00015d32) tport_listscroll_pane_ParamLimits

0x7c0a,	// (0x00015d32) tport_listscroll_pane

0x7c1e,	// (0x00015d46) cell_tport_appsw_pane_ParamLimits

0x7c1e,	// (0x00015d46) cell_tport_appsw_pane

0xaad9,	// (0x00018c01) tport_appsw_pane_g1_ParamLimits

0xaad9,	// (0x00018c01) tport_appsw_pane_g1

0xe220,	// (0x0001c348) tport_contact_pane_g1

0xe229,	// (0x0001c351) tport_contact_pane_t1

0xe237,	// (0x0001c35f) tport_contact_pane_t2

0x0001,

0xfc78,	// (0x0001dda0) tport_contact_pane_t

0xe245,	// (0x0001c36d) list_tport_pane

0xe24e,	// (0x0001c376) scroll_pane_cp_030

0x7c68,	// (0x00015d90) cell_tport_appsw_pane_g1

0x7c78,	// (0x00015da0) cell_tport_appsw_pane_t1

0x7c86,	// (0x00015dae) grid_highlight_pane_cp019

0x7c8e,	// (0x00015db6) list_tport_double_graphic_pane_ParamLimits

0x7c8e,	// (0x00015db6) list_tport_double_graphic_pane

0x9621,	// (0x00017749) list_highlight_pane_cp023_ParamLimits

0x9621,	// (0x00017749) list_highlight_pane_cp023

0x7ca5,	// (0x00015dcd) list_tport_double_graphic_pane_g1_ParamLimits

0x7ca5,	// (0x00015dcd) list_tport_double_graphic_pane_g1

0x7cb2,	// (0x00015dda) list_tport_double_graphic_pane_t1_ParamLimits

0x7cb2,	// (0x00015dda) list_tport_double_graphic_pane_t1

0x7cc7,	// (0x00015def) list_tport_double_graphic_pane_t2_ParamLimits

0x7cc7,	// (0x00015def) list_tport_double_graphic_pane_t2

0x0001,

0xfc84,	// (0x0001ddac) list_tport_double_graphic_pane_t_ParamLimits

0xfc84,	// (0x0001ddac) list_tport_double_graphic_pane_t

0x95ac,	// (0x000176d4) main_cale_note_pane

0x57b1,	// (0x000138d9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x57b1,	// (0x000138d9) cell_vitu2_function_top_wide_pane_cp01

0x725b,	// (0x00015383) wait_bar_pane_cp05_ParamLimits

0x9621,	// (0x00017749) listscroll_cmail_pane

0xe257,	// (0x0001c37f) list_cmail_pane

0x7cd9,	// (0x00015e01) list_cmail_body_pane

0x7cf0,	// (0x00015e18) list_single_cmail_header_caption_pane

0xe267,	// (0x0001c38f) list_single_cmail_header_detail_pane_ParamLimits

0xe267,	// (0x0001c38f) list_single_cmail_header_detail_pane

0xe299,	// (0x0001c3c1) list_single_cmail_header_caption_pane_t1

0x7d0d,	// (0x00015e35) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7d0d,	// (0x00015e35) list_single_cmail_header_detail_pane_g1

0xe2b0,	// (0x0001c3d8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe2b0,	// (0x0001c3d8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc89,	// (0x0001ddb1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc89,	// (0x0001ddb1) list_single_cmail_header_detail_pane_g

0xe2c9,	// (0x0001c3f1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe2c9,	// (0x0001c3f1) list_single_cmail_header_detail_pane_t1

0xe329,	// (0x0001c451) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe329,	// (0x0001c451) list_single_cmail_header_editor_pane_bg

0xddb7,	// (0x0001bedf) list_cmail_body_pane_g1

0xe340,	// (0x0001c468) list_cmail_body_pane_t1

0xcfba,	// (0x0001b0e2) list_single_cmail_header_editor_pane_bg_g1

0xa25e,	// (0x00018386) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfca,	// (0x0001b0f2) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfc2,	// (0x0001b0ea) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd267,	// (0x0001b38f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfea,	// (0x0001b112) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfda,	// (0x0001b102) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfe2,	// (0x0001b10a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa23e,	// (0x00018366) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7d25,	// (0x00015e4d) calenote_gesture_pane_ParamLimits

0x7d25,	// (0x00015e4d) calenote_gesture_pane

0x7d45,	// (0x00015e6d) calenote_window_pane_ParamLimits

0x7d45,	// (0x00015e6d) calenote_window_pane

0xe34e,	// (0x0001c476) popup_note_window_cp01

0x7d61,	// (0x00015e89) calenote_swipe_1_pane_ParamLimits

0x7d61,	// (0x00015e89) calenote_swipe_1_pane

0x7859,	// (0x00015981) calenote_swipe_2_pane_ParamLimits

0x7859,	// (0x00015981) calenote_swipe_2_pane

0xdfd1,	// (0x0001c0f9) calenote_swipe_1_pane_g1_ParamLimits

0xdfd1,	// (0x0001c0f9) calenote_swipe_1_pane_g1

0xdfde,	// (0x0001c106) calenote_swipe_1_pane_g2_ParamLimits

0xdfde,	// (0x0001c106) calenote_swipe_1_pane_g2

0x0001,

0xfc26,	// (0x0001dd4e) calenote_swipe_1_pane_g_ParamLimits

0xfc26,	// (0x0001dd4e) calenote_swipe_1_pane_g

0xe360,	// (0x0001c488) calenote_swipe_1_pane_t1_ParamLimits

0xe360,	// (0x0001c488) calenote_swipe_1_pane_t1

0xdfd1,	// (0x0001c0f9) calenote_swipe_2_pane_g1_ParamLimits

0xdfd1,	// (0x0001c0f9) calenote_swipe_2_pane_g1

0xe37f,	// (0x0001c4a7) calenote_swipe_2_pane_g2_ParamLimits

0xe37f,	// (0x0001c4a7) calenote_swipe_2_pane_g2

0x0001,

0xfc95,	// (0x0001ddbd) calenote_swipe_2_pane_g_ParamLimits

0xfc95,	// (0x0001ddbd) calenote_swipe_2_pane_g

0xe38b,	// (0x0001c4b3) calenote_swipe_2_pane_t1_ParamLimits

0xe38b,	// (0x0001c4b3) calenote_swipe_2_pane_t1

0x95ac,	// (0x000176d4) main_mup_navstr_pane

0x4605,	// (0x0001272d) main_mup3_pane_t7_ParamLimits

0x4605,	// (0x0001272d) main_mup3_pane_t7

0xcb5f,	// (0x0001ac87) main_mp4_pane_g6_ParamLimits

0xcb5f,	// (0x0001ac87) main_mp4_pane_g6

0xcdb0,	// (0x0001aed8) main_image3_pane_t4_ParamLimits

0xcdb0,	// (0x0001aed8) main_image3_pane_t4

0x7d76,	// (0x00015e9e) popup_navstr_preview_pane_ParamLimits

0x7d76,	// (0x00015e9e) popup_navstr_preview_pane

0x7d86,	// (0x00015eae) scroll_navstr_pane_ParamLimits

0x7d86,	// (0x00015eae) scroll_navstr_pane

0x95ac,	// (0x000176d4) bg_popup_preview_window_pane_cp04

0xe3b2,	// (0x0001c4da) popup_navstr_preview_pane_t1

0x7d9a,	// (0x00015ec2) scroll_navstr_pane_g1_ParamLimits

0x7d9a,	// (0x00015ec2) scroll_navstr_pane_g1

0x7dae,	// (0x00015ed6) scroll_navstr_pane_t1_ParamLimits

0x7dae,	// (0x00015ed6) scroll_navstr_pane_t1

0xe357,	// (0x0001c47f) bg_button_pane_cp014

0xe357,	// (0x0001c47f) bg_button_pane_cp030

0x76dc,	// (0x00015804) list_double_fisheye_pane_g4_ParamLimits

0x76dc,	// (0x00015804) list_double_fisheye_pane_g4

0x76e8,	// (0x00015810) list_double_fisheye_pane_g5_ParamLimits

0x76e8,	// (0x00015810) list_double_fisheye_pane_g5

0xd10e,	// (0x0001b236) sp_fs_scroll_pane_cp03

0xe0ab,	// (0x0001c1d3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0b7,	// (0x0001c1df) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc43,	// (0x0001dd6b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x794e,	// (0x00015a76) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe25f,	// (0x0001c387) sp_fs_scroll_pane_cp02

0x9f50,	// (0x00018078) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f50,	// (0x00018078) popup_sp_fs_calendar_preview_list_single_pane

0x95ac,	// (0x000176d4) main_cam6_pano_pane

0x9621,	// (0x00017749) main_mup3_pane_ParamLimits

0x95ac,	// (0x000176d4) main_phacti_pane

0x712c,	// (0x00015254) bg_button_pane_cp11

0x7146,	// (0x0001526e) main_mobtv_info_pane_g2_ParamLimits

0x7146,	// (0x0001526e) main_mobtv_info_pane_g2

0x0001,

0xfba3,	// (0x0001dccb) main_mobtv_info_pane_g_ParamLimits

0xfba3,	// (0x0001dccb) main_mobtv_info_pane_g

0x7323,	// (0x0001544b) sc_clock_pane_t5_ParamLimits

0x7323,	// (0x0001544b) sc_clock_pane_t5

0x7557,	// (0x0001567f) main_radioblah_pane_g1_ParamLimits

0xdf1d,	// (0x0001c045) main_radioblah_pane_t3_ParamLimits

0xdf1d,	// (0x0001c045) main_radioblah_pane_t3

0xdf35,	// (0x0001c05d) main_radioblah_pane_t4_ParamLimits

0xdf35,	// (0x0001c05d) main_radioblah_pane_t4

0x757f,	// (0x000156a7) main_radioblah_text_pane_ParamLimits

0x757f,	// (0x000156a7) main_radioblah_text_pane

0x7591,	// (0x000156b9) main_radioblah_info_pane_g1_ParamLimits

0x762a,	// (0x00015752) main_radioblah_info_pane_t4_ParamLimits

0x762a,	// (0x00015752) main_radioblah_info_pane_t4

0x9621,	// (0x00017749) main_sp_fs_calendar_pane

0x7dc5,	// (0x00015eed) main_phacti_pane_g1

0x7dcd,	// (0x00015ef5) phacti_note_pane_ParamLimits

0x7dcd,	// (0x00015ef5) phacti_note_pane

0xe3c9,	// (0x0001c4f1) phacti_term_pane_ParamLimits

0xe3c9,	// (0x0001c4f1) phacti_term_pane

0xe3de,	// (0x0001c506) phacti_note_pane_t1_ParamLimits

0xe3de,	// (0x0001c506) phacti_note_pane_t1

0xe3f5,	// (0x0001c51d) phacti_term_pane_g1

0xe3fd,	// (0x0001c525) phacti_term_pane_t1_ParamLimits

0xe3fd,	// (0x0001c525) phacti_term_pane_t1

0xe427,	// (0x0001c54f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe42f,	// (0x0001c557) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9f,	// (0x0001ddc7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe437,	// (0x0001c55f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe437,	// (0x0001c55f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe44d,	// (0x0001c575) aid_popup_sp_fs_bg_corner_pane

0xa049,	// (0x00018171) popup_sp_fs_calendar_preview_bg_pane_g1

0x95ac,	// (0x000176d4) popup_sp_fs_calendar_preview_bg_pane

0xe455,	// (0x0001c57d) popup_sp_fs_calendar_preview_list_pane

0xab0f,	// (0x00018c37) bg_main_sp_fs_cale_pane_ParamLimits

0xab0f,	// (0x00018c37) bg_main_sp_fs_cale_pane

0xe466,	// (0x0001c58e) listscroll_cale_mrui_pane_ParamLimits

0xe466,	// (0x0001c58e) listscroll_cale_mrui_pane

0xe47b,	// (0x0001c5a3) listscroll_sp_fs_schedule_track_pane

0xe484,	// (0x0001c5ac) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe484,	// (0x0001c5ac) main_sp_fs_ctrlbar_pane_cp01

0xe497,	// (0x0001c5bf) main_sp_fs_ribbon_pane

0xe49f,	// (0x0001c5c7) popup_sp_fs_cale_preview_window

0x7e42,	// (0x00015f6a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7e42,	// (0x00015f6a) list_single_sp_fs_schedule_track_pane

0x9621,	// (0x00017749) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9621,	// (0x00017749) bg_sp_fs_highlight_list_pane_cp03

0x7e56,	// (0x00015f7e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7e56,	// (0x00015f7e) list_single_sp_fs_schedule_track_pane_g1

0x7e62,	// (0x00015f8a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7e62,	// (0x00015f8a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca4,	// (0x0001ddcc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca4,	// (0x0001ddcc) list_single_sp_fs_schedule_track_pane_g

0x7e6e,	// (0x00015f96) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7e6e,	// (0x00015f96) list_single_sp_fs_schedule_track_pane_t1

0x7e90,	// (0x00015fb8) sp_fs_schedule_track_pane_ParamLimits

0x7e90,	// (0x00015fb8) sp_fs_schedule_track_pane

0xe4b1,	// (0x0001c5d9) sp_fs_schedule_track_pane_g1

0xe4b9,	// (0x0001c5e1) sp_fs_schedule_track_pane_g2

0xe4c1,	// (0x0001c5e9) sp_fs_schedule_track_pane_g3

0xe4c9,	// (0x0001c5f1) sp_fs_schedule_track_pane_g4

0xe4d1,	// (0x0001c5f9) sp_fs_schedule_track_pane_g5

0x0004,

0xfca9,	// (0x0001ddd1) sp_fs_schedule_track_pane_g

0xcfba,	// (0x0001b0e2) bg_sp_fs_schedule_viewer_highlight_g1

0xa25e,	// (0x00018386) bg_sp_fs_schedule_viewer_highlight_g2

0xcfc2,	// (0x0001b0ea) bg_sp_fs_schedule_viewer_highlight_g3

0xcfca,	// (0x0001b0f2) bg_sp_fs_schedule_viewer_highlight_g4

0xd267,	// (0x0001b38f) bg_sp_fs_schedule_viewer_highlight_g5

0xcfda,	// (0x0001b102) bg_sp_fs_schedule_viewer_highlight_g6

0xcfe2,	// (0x0001b10a) bg_sp_fs_schedule_viewer_highlight_g7

0xcfea,	// (0x0001b112) bg_sp_fs_schedule_viewer_highlight_g8

0xa23e,	// (0x00018366) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb4,	// (0x0001dddc) bg_sp_fs_schedule_viewer_highlight_g

0x95ac,	// (0x000176d4) bg_main_sp_fs_ribbon_pane

0x7ea5,	// (0x00015fcd) main_sp_fs_ribbon_pane_g1

0xe4d9,	// (0x0001c601) main_sp_fs_ribbon_pane_t1

0x7eae,	// (0x00015fd6) main_sp_fs_ribbon_pane_t2

0xe4e8,	// (0x0001c610) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc7,	// (0x0001ddef) main_sp_fs_ribbon_pane_t

0xe4f7,	// (0x0001c61f) main_sp_fs_ribbon_scheduler_pane

0xe4ff,	// (0x0001c627) bg_main_sp_fs_ribbon_pane_g1

0xe508,	// (0x0001c630) bg_main_sp_fs_ribbon_pane_g2

0xe511,	// (0x0001c639) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcce,	// (0x0001ddf6) bg_main_sp_fs_ribbon_pane_g

0xe519,	// (0x0001c641) main_sp_fs_ribbon_scheduler_pane_g1

0xe522,	// (0x0001c64a) main_sp_fs_ribbon_scheduler_pane_g2

0xe52b,	// (0x0001c653) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd5,	// (0x0001ddfd) main_sp_fs_ribbon_scheduler_pane_g

0xe534,	// (0x0001c65c) list_cale_mrui_pane

0x7ebd,	// (0x00015fe5) sp_fs_scroll_pane_cp07_ParamLimits

0x7ebd,	// (0x00015fe5) sp_fs_scroll_pane_cp07

0x7ed9,	// (0x00016001) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7ed9,	// (0x00016001) bg_sp_fs_schedule_viewer_highlight

0xe541,	// (0x0001c669) list_single_sp_fs_schedule_track_pane_cp01

0xe549,	// (0x0001c671) list_sp_fs_schedule_track_pane

0xe551,	// (0x0001c679) sp_fs_scroll_pane_cp06_ParamLimits

0xe551,	// (0x0001c679) sp_fs_scroll_pane_cp06

0xa049,	// (0x00018171) bgmain_sp_fs_calendar_pane_g1

0x7eeb,	// (0x00016013) list_single_cale_mrui_pane_ParamLimits

0x7eeb,	// (0x00016013) list_single_cale_mrui_pane

0xe563,	// (0x0001c68b) list_single_cale_mrui_row_pane_ParamLimits

0xe563,	// (0x0001c68b) list_single_cale_mrui_row_pane

0xe570,	// (0x0001c698) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe570,	// (0x0001c698) list_single_cale_mrui_row_pane_g1

0xe5b5,	// (0x0001c6dd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe5b5,	// (0x0001c6dd) list_single_cale_mrui_row_pane_t1

0x7f0e,	// (0x00016036) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7f0e,	// (0x00016036) list_single_cale_mrui_row_pane_t2

0xe5c7,	// (0x0001c6ef) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe5c7,	// (0x0001c6ef) list_single_cale_mrui_row_pane_t3

0xe5f6,	// (0x0001c71e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5f6,	// (0x0001c71e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce3,	// (0x0001de0b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce3,	// (0x0001de0b) list_single_cale_mrui_row_pane_t

0x7f74,	// (0x0001609c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7f74,	// (0x0001609c) list_single_cmail_header_editor_pane_bg_cp01

0x7f98,	// (0x000160c0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7f98,	// (0x000160c0) list_single_cmail_header_editor_pane_bg_cp02

0x7fb6,	// (0x000160de) main_radioblah_text_pane_t1_ParamLimits

0x7fb6,	// (0x000160de) main_radioblah_text_pane_t1

0xe627,	// (0x0001c74f) cam6_indi_pane_cp01

0xe62f,	// (0x0001c757) cam6_mode_pane_cp01

0xe637,	// (0x0001c75f) cam6_pano_pane

0xe640,	// (0x0001c768) cam6_zoom_pane_cp01

0xe64a,	// (0x0001c772) cam6_pano_image_pane

0xe653,	// (0x0001c77b) cam6_pano_pane_g1

0xddb7,	// (0x0001bedf) cam6_pano_pane_g2

0xe65c,	// (0x0001c784) cam6_pano_pane_g3

0xe665,	// (0x0001c78d) cam6_pano_pane_g4

0xc852,	// (0x0001a97a) cam6_pano_pane_g5

0xe66e,	// (0x0001c796) cam6_pano_pane_g6

0xe676,	// (0x0001c79e) cam6_pano_pane_g7

0xe67e,	// (0x0001c7a6) cam6_pano_pane_g8

0xe687,	// (0x0001c7af) cam6_pano_pane_g9

0x0008,

0xfcec,	// (0x0001de14) cam6_pano_pane_g

0x95ac,	// (0x000176d4) main_browser_tag_pane

0xe3aa,	// (0x0001c4d2) grid_navstr_albumart_pane

0xe692,	// (0x0001c7ba) cell_navstr_albumart_pane_ParamLimits

0xe692,	// (0x0001c7ba) cell_navstr_albumart_pane

0xe6ae,	// (0x0001c7d6) cell_navstr_albumart_pane_g1

0xbc91,	// (0x00019db9) cell_navstr_albumart_pane_g2

0xbca1,	// (0x00019dc9) cell_navstr_albumart_pane_g3

0xbc99,	// (0x00019dc1) cell_navstr_albumart_pane_g4

0x0003,

0xfcff,	// (0x0001de27) cell_navstr_albumart_pane_g

0x7fd1,	// (0x000160f9) bt_list_pane_ParamLimits

0x7fd1,	// (0x000160f9) bt_list_pane

0x7fe7,	// (0x0001610f) bt_list_pane_t1

0x7ff6,	// (0x0001611e) bt_list_pane_t2

0x0001,

0xfd08,	// (0x0001de30) bt_list_pane_t

0x95ac,	// (0x000176d4) main_cale_prevew_pane

0x8005,	// (0x0001612d) popup_cale_preview_window_ParamLimits

0x8005,	// (0x0001612d) popup_cale_preview_window

0x9621,	// (0x00017749) bg_popup_preview_window_pane_cp05_ParamLimits

0x9621,	// (0x00017749) bg_popup_preview_window_pane_cp05

0xe6b6,	// (0x0001c7de) list_cale_preview_pane_ParamLimits

0xe6b6,	// (0x0001c7de) list_cale_preview_pane

0x8022,	// (0x0001614a) list_double_cale_preview_pane_ParamLimits

0x8022,	// (0x0001614a) list_double_cale_preview_pane

0x8036,	// (0x0001615e) list_single_cale_preview_pane_ParamLimits

0x8036,	// (0x0001615e) list_single_cale_preview_pane

0x804e,	// (0x00016176) list_single_cale_preview_pane_g1

0x8056,	// (0x0001617e) list_single_cale_preview_pane_t1_ParamLimits

0x8056,	// (0x0001617e) list_single_cale_preview_pane_t1

0x806b,	// (0x00016193) list_double_cale_preview_pane_g1

0x8073,	// (0x0001619b) list_double_cale_preview_pane_t1_ParamLimits

0x8073,	// (0x0001619b) list_double_cale_preview_pane_t1

0x8088,	// (0x000161b0) list_double_cale_preview_pane_t2_ParamLimits

0x8088,	// (0x000161b0) list_double_cale_preview_pane_t2

0x0001,

0xfd0d,	// (0x0001de35) list_double_cale_preview_pane_t_ParamLimits

0xfd0d,	// (0x0001de35) list_double_cale_preview_pane_t

0x95ac,	// (0x000176d4) main_ezdial_pane

0x9621,	// (0x00017749) main_sp_fs_email_pane_ParamLimits

0x78b9,	// (0x000159e1) cmail_ddmenu_btn01_pane_ParamLimits

0x78b9,	// (0x000159e1) cmail_ddmenu_btn01_pane

0x78cc,	// (0x000159f4) cmail_ddmenu_btn02_pane_ParamLimits

0x78cc,	// (0x000159f4) cmail_ddmenu_btn02_pane

0x78ef,	// (0x00015a17) cmail_ddmenu_btn03_pane_ParamLimits

0x78ef,	// (0x00015a17) cmail_ddmenu_btn03_pane

0x798d,	// (0x00015ab5) main_sp_fs_ctrlbar_pane_ParamLimits

0x79b1,	// (0x00015ad9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7cd9,	// (0x00015e01) list_cmail_body_pane_ParamLimits

0xe2a7,	// (0x0001c3cf) bg_button_pane_cp12

0xe2bc,	// (0x0001c3e4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2bc,	// (0x0001c3e4) list_single_cmail_header_detail_pane_g3

0xe305,	// (0x0001c42d) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe305,	// (0x0001c42d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc90,	// (0x0001ddb8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc90,	// (0x0001ddb8) list_single_cmail_header_detail_pane_t

0xe412,	// (0x0001c53a) phacti_term_pane_t2_ParamLimits

0xe412,	// (0x0001c53a) phacti_term_pane_t2

0x0001,

0xfc9a,	// (0x0001ddc2) phacti_term_pane_t_ParamLimits

0xfc9a,	// (0x0001ddc2) phacti_term_pane_t

0xe6c2,	// (0x0001c7ea) aid_size_list_single_double

0x80a0,	// (0x000161c8) popup_ezdial_listscroll_window

0x80bc,	// (0x000161e4) popup_number_entry_window_cp01

0x9ff4,	// (0x0001811c) bg_popup_call_pane_cp09

0xe6ce,	// (0x0001c7f6) ezdial_list_pane

0xe6d6,	// (0x0001c7fe) scroll_pane_cp23

0xab0f,	// (0x00018c37) bg_button_pane_cp028_ParamLimits

0xab0f,	// (0x00018c37) bg_button_pane_cp028

0x80ca,	// (0x000161f2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x80ca,	// (0x000161f2) cmail_ddmenu_btn01_pane_g1

0x80d9,	// (0x00016201) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x80d9,	// (0x00016201) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd12,	// (0x0001de3a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd12,	// (0x0001de3a) cmail_ddmenu_btn01_pane_g

0xe6de,	// (0x0001c806) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe6de,	// (0x0001c806) cmail_ddmenu_btn01_pane_t1

0xab0f,	// (0x00018c37) bg_button_pane_cp029_ParamLimits

0xab0f,	// (0x00018c37) bg_button_pane_cp029

0x80ef,	// (0x00016217) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x80ef,	// (0x00016217) cmail_ddmenu_btn02_pane_g1

0x810a,	// (0x00016232) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x810a,	// (0x00016232) cmail_ddmenu_btn02_pane_t1

0x9621,	// (0x00017749) bg_button_pane_cp031_ParamLimits

0x9621,	// (0x00017749) bg_button_pane_cp031

0x80ef,	// (0x00016217) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x80ef,	// (0x00016217) cmail_ddmenu_btn03_pane_g1

0x810a,	// (0x00016232) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x810a,	// (0x00016232) cmail_ddmenu_btn03_pane_t1

0x4f93,	// (0x000130bb) cell_dialer2_keypad_pane_t1_ParamLimits

0x4fad,	// (0x000130d5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4fad,	// (0x000130d5) cell_dialer2_keypad_pane_t1_copy1

0x6f4d,	// (0x00015075) ncimui_group_button_pane

0x9621,	// (0x00017749) main_sp_fs_calendar_pane_ParamLimits

0x7cf0,	// (0x00015e18) list_single_cmail_header_caption_pane_ParamLimits

0xe45d,	// (0x0001c585) aid_recal_txt_sm_pane

0x95ac,	// (0x000176d4) mian_recal_day_pane

0xe49f,	// (0x0001c5c7) popup_sp_fs_cale_preview_window_ParamLimits

0xe6f4,	// (0x0001c81c) list_recal_day_pane

0xe737,	// (0x0001c85f) list_single_recal_day_pane_ParamLimits

0xe737,	// (0x0001c85f) list_single_recal_day_pane

0xe749,	// (0x0001c871) list_single_recal_day_pane_g1_ParamLimits

0xe749,	// (0x0001c871) list_single_recal_day_pane_g1

0xe755,	// (0x0001c87d) list_single_recal_day_pane_g2_ParamLimits

0xe755,	// (0x0001c87d) list_single_recal_day_pane_g2

0xe761,	// (0x0001c889) list_single_recal_day_pane_g3_ParamLimits

0xe761,	// (0x0001c889) list_single_recal_day_pane_g3

0x8131,	// (0x00016259) list_single_recal_day_pane_g4_ParamLimits

0x8131,	// (0x00016259) list_single_recal_day_pane_g4

0xe76d,	// (0x0001c895) list_single_recal_day_pane_g5_ParamLimits

0xe76d,	// (0x0001c895) list_single_recal_day_pane_g5

0xe779,	// (0x0001c8a1) list_single_recal_day_pane_g6_ParamLimits

0xe779,	// (0x0001c8a1) list_single_recal_day_pane_g6

0x0004,

0xfd21,	// (0x0001de49) list_single_recal_day_pane_g_ParamLimits

0xfd21,	// (0x0001de49) list_single_recal_day_pane_g

0xe78d,	// (0x0001c8b5) list_single_recal_day_pane_t1

0xe79f,	// (0x0001c8c7) list_single_recal_day_pane_t2

0x0001,

0xfd2c,	// (0x0001de54) list_single_recal_day_pane_t

0x8149,	// (0x00016271) ncimui_query_button_pane_ParamLimits

0x8149,	// (0x00016271) ncimui_query_button_pane

0x8159,	// (0x00016281) ncimui_query_button_pane_t1_ParamLimits

0x8159,	// (0x00016281) ncimui_query_button_pane_t1

0xe7b1,	// (0x0001c8d9) ncimui_query_button_pane_t2_ParamLimits

0xe7b1,	// (0x0001c8d9) ncimui_query_button_pane_t2

0x0001,

0xfd31,	// (0x0001de59) ncimui_query_button_pane_t_ParamLimits

0xfd31,	// (0x0001de59) ncimui_query_button_pane_t

0x816c,	// (0x00016294) query_button_pane_ParamLimits

0x816c,	// (0x00016294) query_button_pane

0x95ac,	// (0x000176d4) bg_button_pane_cp0028

0xe7c4,	// (0x0001c8ec) query_button_pane_t1

0x387e,	// (0x000119a6) main_tport_pane_ParamLimits

0x7b9a,	// (0x00015cc2) bg_popup_window_pane_cp01_ParamLimits

0x7b9a,	// (0x00015cc2) bg_popup_window_pane_cp01

0x7bb3,	// (0x00015cdb) heading_pane_cp08_ParamLimits

0x7bb3,	// (0x00015cdb) heading_pane_cp08

0x7bc6,	// (0x00015cee) heading_pane_cp07_ParamLimits

0x7bc6,	// (0x00015cee) heading_pane_cp07

0x7c68,	// (0x00015d90) cell_tport_appsw_pane_g2

0x0002,

0xfc7d,	// (0x0001dda5) cell_tport_appsw_pane_g

0xabac,	// (0x00018cd4) input_candi_list_open_g1

0xa478,	// (0x000185a0) list_cale_time_pane_g6_ParamLimits

0xa478,	// (0x000185a0) list_cale_time_pane_g6

0x3f20,	// (0x00012048) aid_size_touch_calib_1_ParamLimits

0x3f20,	// (0x00012048) aid_size_touch_calib_1

0x3f32,	// (0x0001205a) aid_size_touch_calib_2_ParamLimits

0x3f32,	// (0x0001205a) aid_size_touch_calib_2

0x3f4a,	// (0x00012072) aid_size_touch_calib_3_ParamLimits

0x3f4a,	// (0x00012072) aid_size_touch_calib_3

0x3f68,	// (0x00012090) aid_size_touch_calib_4_ParamLimits

0x3f68,	// (0x00012090) aid_size_touch_calib_4

0x3f80,	// (0x000120a8) main_touch_calib_button_group_pane_ParamLimits

0x3f80,	// (0x000120a8) main_touch_calib_button_group_pane

0x3f98,	// (0x000120c0) main_touch_calib_pane_g1_ParamLimits

0x3faa,	// (0x000120d2) main_touch_calib_pane_g2_ParamLimits

0x3fbc,	// (0x000120e4) main_touch_calib_pane_g3_ParamLimits

0x3fce,	// (0x000120f6) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x0001d7e7) main_touch_calib_pane_g_ParamLimits

0x3fe0,	// (0x00012108) main_touch_calib_pane_t1_ParamLimits

0x3ffa,	// (0x00012122) main_touch_calib_pane_t2_ParamLimits

0x4014,	// (0x0001213c) main_touch_calib_pane_t3_ParamLimits

0x4028,	// (0x00012150) main_touch_calib_pane_t4_ParamLimits

0x403e,	// (0x00012166) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x0001d7f0) main_touch_calib_pane_t_ParamLimits

0xc605,	// (0x0001a72d) list_single_fp_cale_pane_g3_ParamLimits

0xc605,	// (0x0001a72d) list_single_fp_cale_pane_g3

0x9621,	// (0x00017749) bg_button_pane_cp012_ParamLimits

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp03_ParamLimits

0x60cb,	// (0x000141f3) cell_vitu2_function_top_pane_g1_ParamLimits

0x9621,	// (0x00017749) bg_vkb2_func_pane_cp04_ParamLimits

0x6ed8,	// (0x00015000) main_ncimui_button_group_pane_ParamLimits

0x6ed8,	// (0x00015000) main_ncimui_button_group_pane

0x6f38,	// (0x00015060) main_ncimui_pane_t3_ParamLimits

0x6f38,	// (0x00015060) main_ncimui_pane_t3

0xe3c0,	// (0x0001c4e8) phacti_button_group_pane

0xe6c2,	// (0x0001c7ea) aid_size_list_single_double_ParamLimits

0x80a0,	// (0x000161c8) popup_ezdial_listscroll_window_ParamLimits

0x80bc,	// (0x000161e4) popup_number_entry_window_cp01_ParamLimits

0x817f,	// (0x000162a7) phacti_button_pane_ParamLimits

0x817f,	// (0x000162a7) phacti_button_pane

0x95ac,	// (0x000176d4) bg_button_pane_cp14

0xe7d2,	// (0x0001c8fa) phacti_button_pane_t1

0x8190,	// (0x000162b8) main_touch_calib_button_pane_ParamLimits

0x8190,	// (0x000162b8) main_touch_calib_button_pane

0x9de1,	// (0x00017f09) bg_button_pane_cp18_ParamLimits

0x9de1,	// (0x00017f09) bg_button_pane_cp18

0xe7e0,	// (0x0001c908) main_touch_calib_button_pane_t1_ParamLimits

0xe7e0,	// (0x0001c908) main_touch_calib_button_pane_t1

0xe7f6,	// (0x0001c91e) main_touch_calib_button_pane_t2_ParamLimits

0xe7f6,	// (0x0001c91e) main_touch_calib_button_pane_t2

0x0001,

0xfd36,	// (0x0001de5e) main_touch_calib_button_pane_t_ParamLimits

0xfd36,	// (0x0001de5e) main_touch_calib_button_pane_t

0x95ac,	// (0x000176d4) cell_ncimui_button_pane

0x95ac,	// (0x000176d4) bg_button_pane_cp032

0xe814,	// (0x0001c93c) cell_ncimui_button_pane_t1

0xcd8e,	// (0x0001aeb6) image3_infobar_pane_ParamLimits

0xcd8e,	// (0x0001aeb6) image3_infobar_pane

0x734f,	// (0x00015477) fs_bigclock_status_pane_ParamLimits

0x734f,	// (0x00015477) fs_bigclock_status_pane

0x735c,	// (0x00015484) main_fs_bigclock_clock_pane_ParamLimits

0x735c,	// (0x00015484) main_fs_bigclock_clock_pane

0x738e,	// (0x000154b6) main_fs_bigclock_indi_pane_ParamLimits

0x738e,	// (0x000154b6) main_fs_bigclock_indi_pane

0x73ce,	// (0x000154f6) main_fs_bigclock_swipe_pane_ParamLimits

0x73ce,	// (0x000154f6) main_fs_bigclock_swipe_pane

0x95ac,	// (0x000176d4) main_fs_clock_dumped_data

0x741a,	// (0x00015542) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x741a,	// (0x00015542) list_single_fs_bigclock_indicator_pane_g1

0x7433,	// (0x0001555b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7433,	// (0x0001555b) list_single_fs_bigclock_indicator_pane_g2

0x744d,	// (0x00015575) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x744d,	// (0x00015575) list_single_fs_bigclock_indicator_pane_g3

0x7467,	// (0x0001558f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7467,	// (0x0001558f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd7,	// (0x0001dcff) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd7,	// (0x0001dcff) list_single_fs_bigclock_indicator_pane_g

0x7496,	// (0x000155be) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7496,	// (0x000155be) list_single_fs_bigclock_indicator_pane_t1

0x74be,	// (0x000155e6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x74be,	// (0x000155e6) list_single_fs_bigclock_indicator_pane_t2

0x74e6,	// (0x0001560e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x74e6,	// (0x0001560e) list_single_fs_bigclock_indicator_pane_t3

0x750e,	// (0x00015636) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x750e,	// (0x00015636) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe2,	// (0x0001dd0a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe2,	// (0x0001dd0a) list_single_fs_bigclock_indicator_pane_t

0xe822,	// (0x0001c94a) image3_infobar_fav_pane_ParamLimits

0xe822,	// (0x0001c94a) image3_infobar_fav_pane

0xe832,	// (0x0001c95a) image3_infobar_loc_pane_ParamLimits

0xe832,	// (0x0001c95a) image3_infobar_loc_pane

0xe848,	// (0x0001c970) image3_infobar_time_pane_ParamLimits

0xe848,	// (0x0001c970) image3_infobar_time_pane

0xa049,	// (0x00018171) image3_infobar_time_pane_g1

0xe858,	// (0x0001c980) image3_infobar_time_pane_t1

0xa049,	// (0x00018171) image3_infobar_loc_pane_g1

0xe866,	// (0x0001c98e) image3_infobar_loc_pane_g2

0x0001,

0xfd3b,	// (0x0001de63) image3_infobar_loc_pane_g

0xe86e,	// (0x0001c996) image3_infobar_loc_pane_t1

0xa049,	// (0x00018171) image3_infobar_fav_pane_g1

0xe87c,	// (0x0001c9a4) image3_infobar_fav_pane_g2

0x0001,

0xfd40,	// (0x0001de68) image3_infobar_fav_pane_g

0xe884,	// (0x0001c9ac) fs_bigclock_status_battery_pane

0xe88d,	// (0x0001c9b5) fs_bigclock_status_signal_pane

0xe896,	// (0x0001c9be) fs_bigclock_status_title_pane

0xe89f,	// (0x0001c9c7) fs_bigclock_status_signal_pane_g1

0xe8a8,	// (0x0001c9d0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd45,	// (0x0001de6d) fs_bigclock_status_signal_pane_g

0xe8b0,	// (0x0001c9d8) fs_bigclock_status_battery_pane_g1

0xe8b9,	// (0x0001c9e1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4a,	// (0x0001de72) fs_bigclock_status_battery_pane_g

0xe8c1,	// (0x0001c9e9) fs_bigclock_status_title_pane_t1

0x81a5,	// (0x000162cd) main_fs_bigclock_clock_pane_g1

0x81a5,	// (0x000162cd) main_fs_bigclock_clock_pane_g2

0x81b8,	// (0x000162e0) main_fs_bigclock_clock_pane_g3

0x81b8,	// (0x000162e0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4f,	// (0x0001de77) main_fs_bigclock_clock_pane_g

0x81cf,	// (0x000162f7) main_fs_bigclock_clock_pane_t1

0x81e5,	// (0x0001630d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd58,	// (0x0001de80) main_fs_bigclock_clock_pane_t

0xe8cf,	// (0x0001c9f7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe8cf,	// (0x0001c9f7) list_single_fs_bigclock_indicator_pane

0xe8e0,	// (0x0001ca08) list_single_fs_bigclock_pane_ParamLimits

0xe8e0,	// (0x0001ca08) list_single_fs_bigclock_pane

0xe906,	// (0x0001ca2e) main_fs_bigclock_indicator_pane_t1

0xe915,	// (0x0001ca3d) list_single_fs_bigclock_pane_g1

0xe91d,	// (0x0001ca45) list_single_fs_bigclock_pane_t1

0xa049,	// (0x00018171) main_fs_bigclock_swipe_pane_g1

0xe9a5,	// (0x0001cacd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd69,	// (0x0001de91) main_fs_bigclock_swipe_pane_g

0xe9ad,	// (0x0001cad5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9ad,	// (0x0001cad5) main_fs_bigclock_swipe_pane_t1

0x275c,	// (0x00010884) call_type_pane_ParamLimits

0x95ac,	// (0x000176d4) main_btmg_pane

0xe59c,	// (0x0001c6c4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe59c,	// (0x0001c6c4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcdc,	// (0x0001de04) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdc,	// (0x0001de04) list_single_cale_mrui_row_pane_g

0xe71d,	// (0x0001c845) list_recal_vselct_arw_lo_pane

0xe725,	// (0x0001c84d) list_recal_vselct_arw_up_pane

0xe72d,	// (0x0001c855) list_recal_vselct_pane

0x8247,	// (0x0001636f) btmg_button_pane

0x8251,	// (0x00016379) main_btmg_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp044

0xe9ca,	// (0x0001caf2) btmg_button_pane_t1

0xbde3,	// (0x00019f0b) aid_listscroll_gen

0x9621,	// (0x00017749) main_cntbar_detail_pane

0xe257,	// (0x0001c37f) list_cmail_folder_pane

0xd10e,	// (0x0001b236) sp_fs_scroll_pane_cp03_ParamLimits

0xe9d8,	// (0x0001cb00) list_single_fs_dyc_pane_cp01_ParamLimits

0xe9d8,	// (0x0001cb00) list_single_fs_dyc_pane_cp01

0xe9f5,	// (0x0001cb1d) aid_size_cmail_indent

0xe9fe,	// (0x0001cb26) list_single_dyc_row_pane_cp01

0x828f,	// (0x000163b7) cntbar_detail_list_pane_ParamLimits

0x828f,	// (0x000163b7) cntbar_detail_list_pane

0x82e1,	// (0x00016409) main_cntbar_detail_cont_pane_ParamLimits

0x82e1,	// (0x00016409) main_cntbar_detail_cont_pane

0xd10e,	// (0x0001b236) scroll_pane_cp032_ParamLimits

0xd10e,	// (0x0001b236) scroll_pane_cp032

0x82f5,	// (0x0001641d) cntbar_detail_list_event_pane_ParamLimits

0x82f5,	// (0x0001641d) cntbar_detail_list_event_pane

0x82a1,	// (0x000163c9) cntbar_detail_list_shct_pane

0xa2ac,	// (0x000183d4) aid_list_gen

0xea07,	// (0x0001cb2f) aid_scroll

0xea10,	// (0x0001cb38) aid_size_touch_scroll_bar

0x76a7,	// (0x000157cf) aid_list_double

0x8305,	// (0x0001642d) aid_list_single

0x830e,	// (0x00016436) aid_list_single_lg

0x8317,	// (0x0001643f) aid_list_z_g_a_sm

0x831f,	// (0x00016447) aid_list_z_g_d

0x8327,	// (0x0001644f) aid_txt_z_prm

0x8335,	// (0x0001645d) aid_txt_z_prm_cp01

0x8343,	// (0x0001646b) aid_txt_z_sec

0x8351,	// (0x00016479) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8351,	// (0x00016479) main_cntbar_detail_cont_pane_g1

0x8365,	// (0x0001648d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8365,	// (0x0001648d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6e,	// (0x0001de96) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6e,	// (0x0001de96) main_cntbar_detail_cont_pane_g

0xea19,	// (0x0001cb41) main_cntbar_detail_cont_pane_t1

0xea27,	// (0x0001cb4f) main_cntbar_detail_cont_pane_t2

0xea35,	// (0x0001cb5d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd73,	// (0x0001de9b) main_cntbar_detail_cont_pane_t

0x8375,	// (0x0001649d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8375,	// (0x0001649d) cell_cntbar_detail_list_shct_pane

0xea43,	// (0x0001cb6b) cntbar_detail_list_shct_pane_g1

0xea4c,	// (0x0001cb74) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7a,	// (0x0001dea2) cntbar_detail_list_shct_pane_g

0x8387,	// (0x000164af) cntbar_detail_list_event_pane_g1_ParamLimits

0x8387,	// (0x000164af) cntbar_detail_list_event_pane_g1

0x8393,	// (0x000164bb) cntbar_detail_list_event_pane_g2_ParamLimits

0x8393,	// (0x000164bb) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7f,	// (0x0001dea7) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7f,	// (0x0001dea7) cntbar_detail_list_event_pane_g

0x8401,	// (0x00016529) cntbar_detail_list_event_pane_t1_ParamLimits

0x8401,	// (0x00016529) cntbar_detail_list_event_pane_t1

0x8416,	// (0x0001653e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8416,	// (0x0001653e) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8c,	// (0x0001deb4) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8c,	// (0x0001deb4) cntbar_detail_list_event_pane_t

0xa049,	// (0x00018171) cell_cntbar_detail_list_shct_pane_g1

0x2afa,	// (0x00010c22) navi_pane_mv_g3

0x9621,	// (0x00017749) main_cntbar_detail_pane_ParamLimits

0x95ac,	// (0x000176d4) main_notif_wgt_pane

0xcaed,	// (0x0001ac15) aid_tch_main_mp4_pane_g4

0xcd1b,	// (0x0001ae43) popup_slider_window_cp02

0xe713,	// (0x0001c83b) list_recal_day_event_pane

0x825b,	// (0x00016383) cntbar_detail_btn_pane_ParamLimits

0x825b,	// (0x00016383) cntbar_detail_btn_pane

0x8274,	// (0x0001639c) cntbar_detail_btn_pane_cp01_ParamLimits

0x8274,	// (0x0001639c) cntbar_detail_btn_pane_cp01

0x82a1,	// (0x000163c9) cntbar_detail_list_shct_pane_ParamLimits

0x82b1,	// (0x000163d9) cntbar_detail_pane_g1_ParamLimits

0x82b1,	// (0x000163d9) cntbar_detail_pane_g1

0x82c5,	// (0x000163ed) cntbar_detail_pane_t1_ParamLimits

0x82c5,	// (0x000163ed) cntbar_detail_pane_t1

0x839f,	// (0x000164c7) cntbar_detail_list_event_pane_g3_ParamLimits

0x839f,	// (0x000164c7) cntbar_detail_list_event_pane_g3

0x83b7,	// (0x000164df) cntbar_detail_list_event_pane_g4_ParamLimits

0x83b7,	// (0x000164df) cntbar_detail_list_event_pane_g4

0x83cf,	// (0x000164f7) cntbar_detail_list_event_pane_g5_ParamLimits

0x83cf,	// (0x000164f7) cntbar_detail_list_event_pane_g5

0x83e7,	// (0x0001650f) cntbar_detail_list_event_pane_g6_ParamLimits

0x83e7,	// (0x0001650f) cntbar_detail_list_event_pane_g6

0x842b,	// (0x00016553) cntbar_detail_list_event_pane_t3_ParamLimits

0x842b,	// (0x00016553) cntbar_detail_list_event_pane_t3

0x843d,	// (0x00016565) popup_notif_wgt_window_ParamLimits

0x843d,	// (0x00016565) popup_notif_wgt_window

0x8456,	// (0x0001657e) popup_submenu_window_cp01_ParamLimits

0x8456,	// (0x0001657e) popup_submenu_window_cp01

0x9ff4,	// (0x0001811c) bg_popup_window_pane_cp10

0xea55,	// (0x0001cb7d) listscroll_notif_wgt_pane

0xea67,	// (0x0001cb8f) list_notif_wgt_window

0xea70,	// (0x0001cb98) scroll_pane_cp033

0x846a,	// (0x00016592) list_notif_wgt_row_pane_ParamLimits

0x846a,	// (0x00016592) list_notif_wgt_row_pane

0xea79,	// (0x0001cba1) aid_size_list_notif_wgt_del

0xea86,	// (0x0001cbae) list_notif_wgt_row_pane_g1

0xea92,	// (0x0001cbba) list_notif_wgt_row_pane_g2

0xeaa1,	// (0x0001cbc9) list_notif_wgt_row_pane_g3

0x0002,

0xfd93,	// (0x0001debb) list_notif_wgt_row_pane_g

0xeaae,	// (0x0001cbd6) list_notif_wgt_row_pane_t1

0xeac4,	// (0x0001cbec) list_notif_wgt_row_pane_t2

0xead6,	// (0x0001cbfe) list_notif_wgt_row_pane_t3

0x0002,

0xfd9a,	// (0x0001dec2) list_notif_wgt_row_pane_t

0xd28f,	// (0x0001b3b7) list_recal_day_event_pane_g1

0xeae8,	// (0x0001cc10) list_recal_day_event_pane_t1

0x95ac,	// (0x000176d4) bg_button_pane_cp045

0x847a,	// (0x000165a2) cntbar_detail_btn_pane_t1

0xab0f,	// (0x00018c37) main_callh_pane_ParamLimits

0xab0f,	// (0x00018c37) main_callh_pane

0x95ac,	// (0x000176d4) main_coverflow0_pane

0x95ac,	// (0x000176d4) main_wgtman_pane

0x73ef,	// (0x00015517) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73ef,	// (0x00015517) main_fs_bigclock_unlock_btn_pane

0x7c60,	// (0x00015d88) bg_button_pane_cp16

0x7c70,	// (0x00015d98) cell_tport_appsw_pane_g3

0x8488,	// (0x000165b0) cf0_flow_pane_ParamLimits

0x8488,	// (0x000165b0) cf0_flow_pane

0xeaf7,	// (0x0001cc1f) listscroll_cf0_pane

0xeb02,	// (0x0001cc2a) main_cf0_pane_g1

0x849d,	// (0x000165c5) main_cf0_pane_t1_ParamLimits

0x849d,	// (0x000165c5) main_cf0_pane_t1

0x84b4,	// (0x000165dc) main_cf0_pane_t2_ParamLimits

0x84b4,	// (0x000165dc) main_cf0_pane_t2

0x0001,

0xfda6,	// (0x0001dece) main_cf0_pane_t_ParamLimits

0xfda6,	// (0x0001dece) main_cf0_pane_t

0xeb14,	// (0x0001cc3c) scroll_pane_cp11

0x84cb,	// (0x000165f3) cf0_flow_pane_g1

0x84d7,	// (0x000165ff) cf0_flow_pane_g2

0x0001,

0xfdab,	// (0x0001ded3) cf0_flow_pane_g

0x84e3,	// (0x0001660b) cf0_flow_pane_t1

0x95ac,	// (0x000176d4) main_call6_pane

0x95ac,	// (0x000176d4) main_calllock_pane

0x84f5,	// (0x0001661d) call6_btn_grp_pane_ParamLimits

0x84f5,	// (0x0001661d) call6_btn_grp_pane

0x850f,	// (0x00016637) call6_pane_g1_ParamLimits

0x850f,	// (0x00016637) call6_pane_g1

0x8528,	// (0x00016650) popup_call6_1st_window_ParamLimits

0x8528,	// (0x00016650) popup_call6_1st_window

0x853c,	// (0x00016664) popup_call6_2nd_window_ParamLimits

0x853c,	// (0x00016664) popup_call6_2nd_window

0x8550,	// (0x00016678) cell_call6_btn_pane_ParamLimits

0x8550,	// (0x00016678) cell_call6_btn_pane

0x9ff4,	// (0x0001811c) bg_popup_call2_in_pane_cp03

0xeb1f,	// (0x0001cc47) popup_call6_1st_window_g1

0xeb27,	// (0x0001cc4f) popup_call6_1st_window_g2

0xeb2f,	// (0x0001cc57) popup_call6_1st_window_g3

0x0002,

0xfdb0,	// (0x0001ded8) popup_call6_1st_window_g

0xeb37,	// (0x0001cc5f) popup_call6_1st_window_t1

0xeb46,	// (0x0001cc6e) popup_call6_1st_window_t2

0xeb56,	// (0x0001cc7e) popup_call6_1st_window_t3

0x0002,

0xfdb7,	// (0x0001dedf) popup_call6_1st_window_t

0x9ff4,	// (0x0001811c) bg_popup_call2_in_pane_cp04

0xeb66,	// (0x0001cc8e) popup_call6_2nd_window_g1

0xeb6e,	// (0x0001cc96) popup_call6_2nd_window_g2

0xeb76,	// (0x0001cc9e) popup_call6_2nd_window_g3

0x0002,

0xfdbe,	// (0x0001dee6) popup_call6_2nd_window_g

0xeb7e,	// (0x0001cca6) popup_call6_2nd_window_t1

0x95ac,	// (0x000176d4) bg_button_pane_cp15

0xeb8d,	// (0x0001ccb5) cell_call6_btn_pane_g1

0xeb96,	// (0x0001ccbe) cell_call6_btn_pane_t1

0x8564,	// (0x0001668c) listscroll_wgtman_pane_ParamLimits

0x8564,	// (0x0001668c) listscroll_wgtman_pane

0x8585,	// (0x000166ad) wgtman_btn_pane_ParamLimits

0x8585,	// (0x000166ad) wgtman_btn_pane

0xa8d6,	// (0x000189fe) aid_scroll_copy1

0xeba5,	// (0x0001cccd) list_wgtman_pane

0x85c8,	// (0x000166f0) wgtman_btn_pane_g1_ParamLimits

0x85c8,	// (0x000166f0) wgtman_btn_pane_g1

0x85f4,	// (0x0001671c) wgtman_btn_pane_t1_ParamLimits

0x85f4,	// (0x0001671c) wgtman_btn_pane_t1

0xebaf,	// (0x0001ccd7) wgtman_btn_pane_t2_ParamLimits

0xebaf,	// (0x0001ccd7) wgtman_btn_pane_t2

0x0001,

0xfdc5,	// (0x0001deed) wgtman_btn_pane_t_ParamLimits

0xfdc5,	// (0x0001deed) wgtman_btn_pane_t

0x8631,	// (0x00016759) listrow_wgtman_pane_ParamLimits

0x8631,	// (0x00016759) listrow_wgtman_pane

0x8645,	// (0x0001676d) listrow_wgtman_pane_g1

0x8652,	// (0x0001677a) listrow_wgtman_pane_g2

0x0001,

0xfdca,	// (0x0001def2) listrow_wgtman_pane_g

0x8670,	// (0x00016798) listrow_wgtman_pane_t1

0x8688,	// (0x000167b0) listrow_wgtman_pane_t2

0x0001,

0xfdcf,	// (0x0001def7) listrow_wgtman_pane_t

0x86ae,	// (0x000167d6) wait_bar_pane_cp09

0xebc6,	// (0x0001ccee) main_calllock_btn_pane

0xebd0,	// (0x0001ccf8) main_calllock_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp17

0xeb8d,	// (0x0001ccb5) main_calllock_btn_pane_g1

0xebdc,	// (0x0001cd04) main_calllock_btn_pane_t1

0x95ac,	// (0x000176d4) main_dialer3_pane

0x95ac,	// (0x000176d4) main_fmrd2_pane

0xa049,	// (0x00018171) main_fs_bigclock_unlock_btn_pane_g1

0x86c8,	// (0x000167f0) main_fs_bigclock_unlock_btn_pane_t1

0x86d6,	// (0x000167fe) area_fmrd2_info_pane_ParamLimits

0x86d6,	// (0x000167fe) area_fmrd2_info_pane

0x86e7,	// (0x0001680f) area_fmrd2_visual_pane_ParamLimits

0x86e7,	// (0x0001680f) area_fmrd2_visual_pane

0x86f5,	// (0x0001681d) fmrd2_indi_pane_ParamLimits

0x86f5,	// (0x0001681d) fmrd2_indi_pane

0x8702,	// (0x0001682a) area_fmrd2_visual_pane_g1

0x870a,	// (0x00016832) area_fmrd2_visual_pane_t1

0x871a,	// (0x00016842) area_fmrd2_visual_pane_t2

0x872a,	// (0x00016852) area_fmrd2_visual_pane_t3

0x0002,

0xfdd9,	// (0x0001df01) area_fmrd2_visual_pane_t

0x873a,	// (0x00016862) area_fmrd2_info_pane_g1

0x8742,	// (0x0001686a) area_fmrd2_info_pane_t1

0x8752,	// (0x0001687a) area_fmrd2_info_pane_t2

0x8762,	// (0x0001688a) area_fmrd2_info_pane_t3

0x8772,	// (0x0001689a) area_fmrd2_info_pane_t4

0x0003,

0xfde0,	// (0x0001df08) area_fmrd2_info_pane_t

0x8782,	// (0x000168aa) fmrd2_indi_pane_t1

0x8792,	// (0x000168ba) fmrd2_indi_pane_t2

0x87a2,	// (0x000168ca) fmrd2_indi_pane_t3

0x0002,

0xfde9,	// (0x0001df11) fmrd2_indi_pane_t

0x7478,	// (0x000155a0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7478,	// (0x000155a0) list_single_fs_bigclock_indicator_pane_g5

0x752d,	// (0x00015655) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x752d,	// (0x00015655) list_single_fs_bigclock_indicator_pane_t5

0x7de1,	// (0x00015f09) aid_cell_bcale_month_pane_ParamLimits

0x7de1,	// (0x00015f09) aid_cell_bcale_month_pane

0x7dff,	// (0x00015f27) bcale_month_pane_ParamLimits

0x7dff,	// (0x00015f27) bcale_month_pane

0x7e23,	// (0x00015f4b) bcale_preview_pane_ParamLimits

0x7e23,	// (0x00015f4b) bcale_preview_pane

0xe91d,	// (0x0001ca45) list_single_fs_bigclock_pane_t1_ParamLimits

0xe981,	// (0x0001caa9) list_single_fs_bigclock_pane_t2_ParamLimits

0xe981,	// (0x0001caa9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd64,	// (0x0001de8c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd64,	// (0x0001de8c) list_single_fs_bigclock_pane_t

0x86c0,	// (0x000167e8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd4,	// (0x0001defc) main_fs_bigclock_unlock_btn_pane_g

0x87b2,	// (0x000168da) aid_dia3_key_size_ParamLimits

0x87b2,	// (0x000168da) aid_dia3_key_size

0x87c6,	// (0x000168ee) aid_dia3_listrow_size_ParamLimits

0x87c6,	// (0x000168ee) aid_dia3_listrow_size

0x87e0,	// (0x00016908) dia3_keypad_fun_pane_ParamLimits

0x87e0,	// (0x00016908) dia3_keypad_fun_pane

0x87fa,	// (0x00016922) dia3_keypad_num_pane_ParamLimits

0x87fa,	// (0x00016922) dia3_keypad_num_pane

0x8814,	// (0x0001693c) dia3_listscroll_pane_ParamLimits

0x8814,	// (0x0001693c) dia3_listscroll_pane

0x882a,	// (0x00016952) dia3_numentry_pane_ParamLimits

0x882a,	// (0x00016952) dia3_numentry_pane

0xebeb,	// (0x0001cd13) dia3_list_pane

0x8844,	// (0x0001696c) scroll_pane_cp12

0x95ac,	// (0x000176d4) bg_dia3_numentry_pane

0x884f,	// (0x00016977) dia3_numentry_pane_t1

0x885e,	// (0x00016986) cell_dia3_key_num_pane

0x8866,	// (0x0001698e) cell_dia3_key0_fun_pane_ParamLimits

0x8866,	// (0x0001698e) cell_dia3_key0_fun_pane

0x887a,	// (0x000169a2) cell_dia3_key1_fun_pane_ParamLimits

0x887a,	// (0x000169a2) cell_dia3_key1_fun_pane

0x888f,	// (0x000169b7) dia3_listrow_pane

0xdc73,	// (0x0001bd9b) bg_dia3_numentry_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp21

0x88a1,	// (0x000169c9) cell_dia3_key_num_pane_t1

0x88af,	// (0x000169d7) cell_dia3_key_num_pane_t2

0x88af,	// (0x000169d7) cell_dia3_key_num_pane_t3

0x88af,	// (0x000169d7) cell_dia3_key_num_pane_t4

0x0003,

0xfdf0,	// (0x0001df18) cell_dia3_key_num_pane_t

0x95ac,	// (0x000176d4) bg_button_pane_cp19

0x88be,	// (0x000169e6) cell_dia3_key0_fun_pane_g1

0x95ac,	// (0x000176d4) bg_button_pane_cp20

0x88c6,	// (0x000169ee) cell_dia3_key1_fun_pane_g1

0x88ce,	// (0x000169f6) area_left_week_number_pane

0x88dc,	// (0x00016a04) area_top_day_name_pane

0x88ef,	// (0x00016a17) frame_month_view_pane

0xebf6,	// (0x0001cd1e) grid_month_view_pane

0x8904,	// (0x00016a2c) cell_top_day_name_pane_ParamLimits

0x8904,	// (0x00016a2c) cell_top_day_name_pane

0x8933,	// (0x00016a5b) cell_area_left_week_number_pane_ParamLimits

0x8933,	// (0x00016a5b) cell_area_left_week_number_pane

0x8949,	// (0x00016a71) cell_month_view_pane_ParamLimits

0x8949,	// (0x00016a71) cell_month_view_pane

0xec04,	// (0x0001cd2c) frm_month_g1

0x897a,	// (0x00016aa2) frm_month_g2

0x898d,	// (0x00016ab5) frm_month_g3

0x89a0,	// (0x00016ac8) frm_month_g4

0x89b3,	// (0x00016adb) frm_month_g5

0x89c6,	// (0x00016aee) frm_month_g6

0x89db,	// (0x00016b03) frm_month_g7

0xec11,	// (0x0001cd39) frm_month_g8

0x89f0,	// (0x00016b18) frm_month_g9

0x8a00,	// (0x00016b28) frm_month_g10

0x8a10,	// (0x00016b38) frm_month_g11

0x8a20,	// (0x00016b48) frm_month_g12

0x8a32,	// (0x00016b5a) frm_month_g13

0x8a46,	// (0x00016b6e) frm_month_g14

0x8a5a,	// (0x00016b82) frm_month_g15

0x8a6e,	// (0x00016b96) frm_month_g16

0x000f,

0xfdf9,	// (0x0001df21) frm_month_g

0xec1e,	// (0x0001cd46) cell_top_day_name_pane_t1

0x8a82,	// (0x00016baa) cell_area_left_week_number_pane_g1

0x8a8e,	// (0x00016bb6) cell_area_left_week_number_pane_t1

0x9d4d,	// (0x00017e75) cell_month_view_pane_g1

0x8aa1,	// (0x00016bc9) cell_month_view_pane_t1

0x95ac,	// (0x000176d4) main_fps_pane

0xe071,	// (0x0001c199) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe071,	// (0x0001c199) cmail_ddmenu_btn02_pane_cp1

0xe08d,	// (0x0001c1b5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe08d,	// (0x0001c1b5) cmail_ddmenu_btn02_pane_cp2

0x80fe,	// (0x00016226) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x80fe,	// (0x00016226) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd17,	// (0x0001de3f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd17,	// (0x0001de3f) cmail_ddmenu_btn02_pane_g

0x811f,	// (0x00016247) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x811f,	// (0x00016247) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1c,	// (0x0001de44) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1c,	// (0x0001de44) cmail_ddmenu_btn02_pane_t

0x8ab4,	// (0x00016bdc) fps_text_pane_ParamLimits

0x8ab4,	// (0x00016bdc) fps_text_pane

0x8acb,	// (0x00016bf3) main_fps_pane_g1_ParamLimits

0x8acb,	// (0x00016bf3) main_fps_pane_g1

0x8ae3,	// (0x00016c0b) wait_bar_pane_cp010_ParamLimits

0x8ae3,	// (0x00016c0b) wait_bar_pane_cp010

0x8af6,	// (0x00016c1e) fps_text_pane_t1_ParamLimits

0x8af6,	// (0x00016c1e) fps_text_pane_t1

0xe953,	// (0x0001ca7b) cam4_image_uncrop_pane_g1

0xe95c,	// (0x0001ca84) cam4_image_uncrop_pane_g2

0x54d7,	// (0x000135ff) cam4_image_uncrop_pane_g3

0x54e0,	// (0x00013608) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x0001d983) cam4_image_uncrop_pane_g

0x888f,	// (0x000169b7) dia3_listrow_pane_ParamLimits

0x95ac,	// (0x000176d4) main_phob2_pane

0x7c33,	// (0x00015d5b) cell_tport_appsw_pane_cp02_ParamLimits

0x7c33,	// (0x00015d5b) cell_tport_appsw_pane_cp02

0x7c47,	// (0x00015d6f) cell_tport_appsw_pane_cp03_ParamLimits

0x7c47,	// (0x00015d6f) cell_tport_appsw_pane_cp03

0x95ac,	// (0x000176d4) phob2_contact_card_pane

0x95ac,	// (0x000176d4) phob2_listscroll_pane

0xec31,	// (0x0001cd59) phob2_list_pane

0xec39,	// (0x0001cd61) scroll_pane_cp034

0x8b0e,	// (0x00016c36) phob2_cc_data_pane_ParamLimits

0x8b0e,	// (0x00016c36) phob2_cc_data_pane

0x8b27,	// (0x00016c4f) phob2_cc_listscroll_pane_ParamLimits

0x8b27,	// (0x00016c4f) phob2_cc_listscroll_pane

0x8631,	// (0x00016759) list_double_large_graphic_phob2_pane_ParamLimits

0x8631,	// (0x00016759) list_double_large_graphic_phob2_pane

0x8b49,	// (0x00016c71) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b49,	// (0x00016c71) list_double_large_graphic_phob2_pane_g1

0x8b56,	// (0x00016c7e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b56,	// (0x00016c7e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1a,	// (0x0001df42) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1a,	// (0x0001df42) list_double_large_graphic_phob2_pane_g

0x8b7c,	// (0x00016ca4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b7c,	// (0x00016ca4) list_double_large_graphic_phob2_pane_t1

0x8b91,	// (0x00016cb9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b91,	// (0x00016cb9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe23,	// (0x0001df4b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe23,	// (0x0001df4b) list_double_large_graphic_phob2_pane_t

0x95ac,	// (0x000176d4) list_highlight_pane_cp024

0x8ba6,	// (0x00016cce) phob2_cc_button_pane

0x8bb0,	// (0x00016cd8) phob2_cc_data_pane_g1_ParamLimits

0x8bb0,	// (0x00016cd8) phob2_cc_data_pane_g1

0x8bca,	// (0x00016cf2) phob2_cc_data_pane_g2_ParamLimits

0x8bca,	// (0x00016cf2) phob2_cc_data_pane_g2

0x0001,

0xfe28,	// (0x0001df50) phob2_cc_data_pane_g_ParamLimits

0xfe28,	// (0x0001df50) phob2_cc_data_pane_g

0x8bdc,	// (0x00016d04) phob2_cc_data_pane_t1_ParamLimits

0x8bdc,	// (0x00016d04) phob2_cc_data_pane_t1

0x8bfc,	// (0x00016d24) phob2_cc_data_pane_t2_ParamLimits

0x8bfc,	// (0x00016d24) phob2_cc_data_pane_t2

0x8c1c,	// (0x00016d44) phob2_cc_data_pane_t3_ParamLimits

0x8c1c,	// (0x00016d44) phob2_cc_data_pane_t3

0x0002,

0xfe2d,	// (0x0001df55) phob2_cc_data_pane_t_ParamLimits

0xfe2d,	// (0x0001df55) phob2_cc_data_pane_t

0xec41,	// (0x0001cd69) phob2_cc_list_pane_ParamLimits

0xec41,	// (0x0001cd69) phob2_cc_list_pane

0xd338,	// (0x0001b460) scroll_pane_cp035_ParamLimits

0xd338,	// (0x0001b460) scroll_pane_cp035

0x9621,	// (0x00017749) bg_button_pane_cp033

0xec4d,	// (0x0001cd75) phob2_cc_button_pane_g1

0xec59,	// (0x0001cd81) phob2_cc_button_pane_t1

0xec6e,	// (0x0001cd96) phob2_cc_button_pane_t2

0x0001,

0xfe34,	// (0x0001df5c) phob2_cc_button_pane_t

0x8c3c,	// (0x00016d64) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8c3c,	// (0x00016d64) list_double_large_graphic_phob2_cc_pane

0x8c7a,	// (0x00016da2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8c7a,	// (0x00016da2) list_double_large_graphic_phob2_cc_pane_g1

0x8c86,	// (0x00016dae) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8c86,	// (0x00016dae) list_double_large_graphic_phob2_cc_pane_g2

0x8c92,	// (0x00016dba) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8c92,	// (0x00016dba) list_double_large_graphic_phob2_cc_pane_g3

0x8c9e,	// (0x00016dc6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8c9e,	// (0x00016dc6) list_double_large_graphic_phob2_cc_pane_g4

0x8caa,	// (0x00016dd2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8caa,	// (0x00016dd2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe39,	// (0x0001df61) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe39,	// (0x0001df61) list_double_large_graphic_phob2_cc_pane_g

0x8cb6,	// (0x00016dde) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8cb6,	// (0x00016dde) list_double_large_graphic_phob2_cc_pane_t1

0x8cdf,	// (0x00016e07) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8cdf,	// (0x00016e07) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe44,	// (0x0001df6c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe44,	// (0x0001df6c) list_double_large_graphic_phob2_cc_pane_t

0xec80,	// (0x0001cda8) list_highlight_pane_cp025_ParamLimits

0xec80,	// (0x0001cda8) list_highlight_pane_cp025

0x9621,	// (0x00017749) bg_button_pane_cp033_ParamLimits

0xec4d,	// (0x0001cd75) phob2_cc_button_pane_g1_ParamLimits

0xec59,	// (0x0001cd81) phob2_cc_button_pane_t1_ParamLimits

0xec6e,	// (0x0001cd96) phob2_cc_button_pane_t2_ParamLimits

0xfe34,	// (0x0001df5c) phob2_cc_button_pane_t_ParamLimits

0x09d6,	// (0x0000eafe) popup_wgtman_window

0xd0d8,	// (0x0001b200) scroll_pane_cp038

0x85aa,	// (0x000166d2) wgtman_btn_pane_cp_01_ParamLimits

0x85aa,	// (0x000166d2) wgtman_btn_pane_cp_01

0xec8e,	// (0x0001cdb6) wgtman_content_pane

0xec97,	// (0x0001cdbf) wgtman_heading_pane

0x95ac,	// (0x000176d4) bg_heading_pane_cp02

0xeca0,	// (0x0001cdc8) wgtman_heading_pane_g1

0xeca8,	// (0x0001cdd0) wgtman_heading_pane_t1

0xecb6,	// (0x0001cdde) scroll_pane_cp036

0xecbe,	// (0x0001cde6) wgtman_list_pane

0xe967,	// (0x0001ca8f) wgtman_list_pane_t1_ParamLimits

0xe967,	// (0x0001ca8f) wgtman_list_pane_t1

0xce46,	// (0x0001af6e) cam4_grid_pane

0x626b,	// (0x00014393) bg_button_pane_cp015_ParamLimits

0x6282,	// (0x000143aa) bg_button_pane_cp016_ParamLimits

0x628e,	// (0x000143b6) bg_button_pane_cp017_ParamLimits

0x62e9,	// (0x00014411) popup_vitu2_query_window_g3_ParamLimits

0x62e9,	// (0x00014411) popup_vitu2_query_window_g3

0x638c,	// (0x000144b4) popup_vitu2_query_window_t6_ParamLimits

0x638c,	// (0x000144b4) popup_vitu2_query_window_t6

0x63b7,	// (0x000144df) popup_vitu2_query_window_t7_ParamLimits

0x63b7,	// (0x000144df) popup_vitu2_query_window_t7

0xe953,	// (0x0001ca7b) cam4_grid_pane_g1

0xe95c,	// (0x0001ca84) cam4_grid_pane_g2

0xecc6,	// (0x0001cdee) cam4_grid_pane_g3

0xeccf,	// (0x0001cdf7) cam4_grid_pane_g4

0x0003,

0xfe49,	// (0x0001df71) cam4_grid_pane_g

0x1616,	// (0x0000f73e) aid_placing_vt_slider_lsc_ParamLimits

0x1903,	// (0x0000fa2b) vidtel_button_pane_ParamLimits

0x1903,	// (0x0000fa2b) vidtel_button_pane

0x95ac,	// (0x000176d4) bg_button_pane_cp034

0xecda,	// (0x0001ce02) vidtel_button_pane_g1

0xece2,	// (0x0001ce0a) vidtel_button_pane_t1

0xd243,	// (0x0001b36b) aid_size_vtel_slider_touch

0xd338,	// (0x0001b460) scroll_pane_cp039

0x70b6,	// (0x000151de) ncim_query_button_pane_cp01_ParamLimits

0x70d5,	// (0x000151fd) ncimui_query_pane_g1_ParamLimits

0x9621,	// (0x00017749) input_focus_pane_cp012_ParamLimits

0xdcb1,	// (0x0001bdd9) ncim_query_entry_pane_t1_ParamLimits

0xd338,	// (0x0001b460) scroll_pane_cp039_ParamLimits

0x2a6c,	// (0x00010b94) navi_pane_bcale_mc_g1

0x2a74,	// (0x00010b9c) navi_pane_bcale_mc_t1

0xe0c3,	// (0x0001c1eb) main_sp_fs_email_pane_g1

0xe0cf,	// (0x0001c1f7) main_sp_fs_email_pane_g2

0x0001,

0xfc4c,	// (0x0001dd74) main_sp_fs_email_pane_g

0xe5a8,	// (0x0001c6d0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe5a8,	// (0x0001c6d0) list_single_cale_mrui_row_pane_g3

0x813f,	// (0x00016267) list_single_recal_day_pane_g5_event_pane

0xe785,	// (0x0001c8ad) list_single_recal_day_pane_g7

0xecf8,	// (0x0001ce20) list_recal_day_event_pane_cp01

0xed01,	// (0x0001ce29) list_recal_vselct_arw_lo_pane_cp01

0xed09,	// (0x0001ce31) list_recal_vselct_arw_up_pane_cp01

0xed11,	// (0x0001ce39) list_recal_vselct_pane_cp01

0xd28f,	// (0x0001b3b7) list_recal_day_event_pane_cp01_g1

0xed1b,	// (0x0001ce43) list_recal_day_event_pane_cp01_t1

0xe78d,	// (0x0001c8b5) list_single_recal_day_pane_t1_ParamLimits

0xe79f,	// (0x0001c8c7) list_single_recal_day_pane_t2_ParamLimits

0xfd2c,	// (0x0001de54) list_single_recal_day_pane_t_ParamLimits

0x9cd2,	// (0x00017dfa) bg_notes_pane_ParamLimits

0x9da5,	// (0x00017ecd) list_notes_pane_ParamLimits

0x0bc8,	// (0x0000ecf0) scroll_pane_cp06_ParamLimits

0x9de1,	// (0x00017f09) main_notes_pane_ParamLimits

0x9621,	// (0x00017749) main_welc_pane

0x8d37,	// (0x00016e5f) main_welc_body_pane_ParamLimits

0x8d37,	// (0x00016e5f) main_welc_body_pane

0x8d56,	// (0x00016e7e) main_welc_opti_pane_ParamLimits

0x8d56,	// (0x00016e7e) main_welc_opti_pane

0x8dd7,	// (0x00016eff) main_welc_pane_t1_ParamLimits

0x8dd7,	// (0x00016eff) main_welc_pane_t1

0xe93c,	// (0x0001ca64) main_welc_body_row_pane_ParamLimits

0xe93c,	// (0x0001ca64) main_welc_body_row_pane

0x9d3f,	// (0x00017e67) main_welc_opti_row_pane_ParamLimits

0x9d3f,	// (0x00017e67) main_welc_opti_row_pane

0xed39,	// (0x0001ce61) main_welc_opti_row_pane_g1

0x8fcc,	// (0x000170f4) main_welc_opti_row_pane_t1

0xed41,	// (0x0001ce69) main_welc_body_row_pane_t1

0xea5f,	// (0x0001cb87) popup_notif_wgt_heading_pane

0xea79,	// (0x0001cba1) aid_size_list_notif_wgt_del_ParamLimits

0xea86,	// (0x0001cbae) list_notif_wgt_row_pane_g1_ParamLimits

0xea92,	// (0x0001cbba) list_notif_wgt_row_pane_g2_ParamLimits

0xeaa1,	// (0x0001cbc9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd93,	// (0x0001debb) list_notif_wgt_row_pane_g_ParamLimits

0xeaae,	// (0x0001cbd6) list_notif_wgt_row_pane_t1_ParamLimits

0xeac4,	// (0x0001cbec) list_notif_wgt_row_pane_t2_ParamLimits

0xead6,	// (0x0001cbfe) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9a,	// (0x0001dec2) list_notif_wgt_row_pane_t_ParamLimits

0x8645,	// (0x0001676d) listrow_wgtman_pane_g1_ParamLimits

0x8652,	// (0x0001677a) listrow_wgtman_pane_g2_ParamLimits

0xfdca,	// (0x0001def2) listrow_wgtman_pane_g_ParamLimits

0x8670,	// (0x00016798) listrow_wgtman_pane_t1_ParamLimits

0x8688,	// (0x000167b0) listrow_wgtman_pane_t2_ParamLimits

0xfdcf,	// (0x0001def7) listrow_wgtman_pane_t_ParamLimits

0x86ae,	// (0x000167d6) wait_bar_pane_cp09_ParamLimits

0x95ac,	// (0x000176d4) bg_popup_heading_pane_cp02

0xed50,	// (0x0001ce78) popup_notif_wgt_heading_pane_g1

0xed58,	// (0x0001ce80) popup_notif_wgt_heading_pane_t1

0x95ac,	// (0x000176d4) main_vids_pane

0x95ac,	// (0x000176d4) vids_listscroll_pane

0x8fdb,	// (0x00017103) scroll_pane_cp040

0x95ac,	// (0x000176d4) vids_list_pane

0x8fe6,	// (0x0001710e) vids_list_double_pane_ParamLimits

0x8fe6,	// (0x0001710e) vids_list_double_pane

0x8ff9,	// (0x00017121) vids_list_double_pane_g1

0x9002,	// (0x0001712a) vids_list_double_pane_t1

0x9012,	// (0x0001713a) vids_list_double_pane_t2

0x0001,

0xfe68,	// (0x0001df90) vids_list_double_pane_t

0x9621,	// (0x00017749) main_ncimui_pane_ParamLimits

0x6eec,	// (0x00015014) main_ncimui_pane_g1_ParamLimits

0x6ef8,	// (0x00015020) main_ncimui_pane_g2_ParamLimits

0x6ef8,	// (0x00015020) main_ncimui_pane_g2

0x0001,

0xfb4d,	// (0x0001dc75) main_ncimui_pane_g_ParamLimits

0xfb4d,	// (0x0001dc75) main_ncimui_pane_g

0x8d75,	// (0x00016e9d) main_welc_pane_g1_ParamLimits

0x8d75,	// (0x00016e9d) main_welc_pane_g1

0x8d8a,	// (0x00016eb2) main_welc_pane_g2_ParamLimits

0x8d8a,	// (0x00016eb2) main_welc_pane_g2

0x0003,

0xfe52,	// (0x0001df7a) main_welc_pane_g_ParamLimits

0xfe52,	// (0x0001df7a) main_welc_pane_g

0x0bac,	// (0x0000ecd4) listscroll_mce_pane_ParamLimits

0x2b4c,	// (0x00010c74) wait_bar_pane_cp10

0xbdeb,	// (0x00019f13) main_cale_day_pane_ParamLimits

0xbdeb,	// (0x00019f13) main_cale_week_pane_ParamLimits

0x9cd2,	// (0x00017dfa) main_messa_pane_ParamLimits

0x48ba,	// (0x000129e2) main_clock2_btn_pane_ParamLimits

0x48ba,	// (0x000129e2) main_clock2_btn_pane

0xc67f,	// (0x0001a7a7) main_clock2_btn_pane_cp01_ParamLimits

0xc67f,	// (0x0001a7a7) main_clock2_btn_pane_cp01

0xe534,	// (0x0001c65c) list_cale_mrui_pane_ParamLimits

0xeb0c,	// (0x0001cc34) main_cf0_pane_g2

0x0001,

0xfda1,	// (0x0001dec9) main_cf0_pane_g

0x88ce,	// (0x000169f6) area_left_week_number_pane_ParamLimits

0x88dc,	// (0x00016a04) area_top_day_name_pane_ParamLimits

0x88ef,	// (0x00016a17) frame_month_view_pane_ParamLimits

0xebf6,	// (0x0001cd1e) grid_month_view_pane_ParamLimits

0xec04,	// (0x0001cd2c) frm_month_g1_ParamLimits

0x897a,	// (0x00016aa2) frm_month_g2_ParamLimits

0x898d,	// (0x00016ab5) frm_month_g3_ParamLimits

0x89a0,	// (0x00016ac8) frm_month_g4_ParamLimits

0x89b3,	// (0x00016adb) frm_month_g5_ParamLimits

0x89c6,	// (0x00016aee) frm_month_g6_ParamLimits

0x89db,	// (0x00016b03) frm_month_g7_ParamLimits

0xec11,	// (0x0001cd39) frm_month_g8_ParamLimits

0x89f0,	// (0x00016b18) frm_month_g9_ParamLimits

0x8a00,	// (0x00016b28) frm_month_g10_ParamLimits

0x8a10,	// (0x00016b38) frm_month_g11_ParamLimits

0x8a20,	// (0x00016b48) frm_month_g12_ParamLimits

0x8a32,	// (0x00016b5a) frm_month_g13_ParamLimits

0x8a46,	// (0x00016b6e) frm_month_g14_ParamLimits

0x8a5a,	// (0x00016b82) frm_month_g15_ParamLimits

0x8a6e,	// (0x00016b96) frm_month_g16_ParamLimits

0xfdf9,	// (0x0001df21) frm_month_g_ParamLimits

0xec1e,	// (0x0001cd46) cell_top_day_name_pane_t1_ParamLimits

0x8a82,	// (0x00016baa) cell_area_left_week_number_pane_g1_ParamLimits

0x8a8e,	// (0x00016bb6) cell_area_left_week_number_pane_t1_ParamLimits

0x9d4d,	// (0x00017e75) cell_month_view_pane_g1_ParamLimits

0x8aa1,	// (0x00016bc9) cell_month_view_pane_t1_ParamLimits

0x9cca,	// (0x00017df2) main_clock2_btn_pane_g1

0xed66,	// (0x0001ce8e) main_clock2_btn_pane_t1

0x9621,	// (0x00017749) listscroll_cmail_pane_ParamLimits

0xe0c3,	// (0x0001c1eb) main_sp_fs_email_pane_g1_ParamLimits

0xe0cf,	// (0x0001c1f7) main_sp_fs_email_pane_g2_ParamLimits

0xfc4c,	// (0x0001dd74) main_sp_fs_email_pane_g_ParamLimits

0xe6f4,	// (0x0001c81c) list_recal_day_pane_ParamLimits

0xe705,	// (0x0001c82d) mian_recal_day_pane_t1

0x7adb,	// (0x00015c03) list_single_dyc_row_text_pane_t4_ParamLimits

0x7adb,	// (0x00015c03) list_single_dyc_row_text_pane_t4

0x7b24,	// (0x00015c4c) list_single_dyc_row_text_pane_t5_ParamLimits

0x7b24,	// (0x00015c4c) list_single_dyc_row_text_pane_t5

0xe179,	// (0x0001c2a1) list_single_dyc_row_text_pane_t6_ParamLimits

0xe179,	// (0x0001c2a1) list_single_dyc_row_text_pane_t6

0x269d,	// (0x000107c5) aid_mgn_list_cale_time_pane

0x9621,	// (0x00017749) main_gallery2_pane_ParamLimits

0xc693,	// (0x0001a7bb) main_clock2_pane_cp01_t1

0xc6a1,	// (0x0001a7c9) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x0001d85a) main_clock2_pane_cp01_t

0x0fe4,	// (0x0000f10c) cale_week_scroll_pane_g16_ParamLimits

0x0fe4,	// (0x0000f10c) cale_week_scroll_pane_g16

0x9ff4,	// (0x0001811c) vorec_slider_pane

0xece2,	// (0x0001ce0a) vidtel_button_pane_t1_ParamLimits

0x81a5,	// (0x000162cd) main_fs_bigclock_clock_pane_g1_ParamLimits

0x81a5,	// (0x000162cd) main_fs_bigclock_clock_pane_g2_ParamLimits

0x81b8,	// (0x000162e0) main_fs_bigclock_clock_pane_g3_ParamLimits

0x81b8,	// (0x000162e0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4f,	// (0x0001de77) main_fs_bigclock_clock_pane_g_ParamLimits

0x81cf,	// (0x000162f7) main_fs_bigclock_clock_pane_t1_ParamLimits

0x81e5,	// (0x0001630d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd58,	// (0x0001de80) main_fs_bigclock_clock_pane_t_ParamLimits

0x4100,	// (0x00012228) main_mup3_lyrics_pane_ParamLimits

0x4100,	// (0x00012228) main_mup3_lyrics_pane

0x9048,	// (0x00017170) main_mup3_lyrics_pane_t1_ParamLimits

0x9048,	// (0x00017170) main_mup3_lyrics_pane_t1

0xcad7,	// (0x0001abff) aid_main_mp4_pane_t1_area

0xcae1,	// (0x0001ac09) aid_main_mp4_pane_t2_area

0xcb8d,	// (0x0001acb5) main_mp4_pane_g7_ParamLimits

0xcb8d,	// (0x0001acb5) main_mp4_pane_g7

0xcb99,	// (0x0001acc1) main_mp4_pane_g8_ParamLimits

0xcb99,	// (0x0001acc1) main_mp4_pane_g8

0x529e,	// (0x000133c6) aid_call6_pane_g1_size

0x8c6a,	// (0x00016d92) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8c6a,	// (0x00016d92) list_double_large_graphic_phob2_other_pane

0x9063,	// (0x0001718b) list_double_large_graphic_phob2_other_pane_g1

0x95ac,	// (0x000176d4) list_highlight_pane_cp026

0x9621,	// (0x00017749) main_welc_pane_ParamLimits

0x791a,	// (0x00015a42) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x791a,	// (0x00015a42) main_sp_fs_ctrlbar_pane_g3

0x7934,	// (0x00015a5c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7934,	// (0x00015a5c) main_sp_fs_ctrlbar_pane_g4

0x7968,	// (0x00015a90) toolbar2_fixed_button_pane_cp01

0x7973,	// (0x00015a9b) toolbar2_fixed_button_pane_cp02

0x7980,	// (0x00015aa8) toolbar2_fixed_button_pane_cp03

0x8d1b,	// (0x00016e43) list_welc_entry_pane_ParamLimits

0x8d1b,	// (0x00016e43) list_welc_entry_pane

0x8d9f,	// (0x00016ec7) main_welc_pane_g3_ParamLimits

0x8d9f,	// (0x00016ec7) main_welc_pane_g3

0x8df9,	// (0x00016f21) main_welc_pane_t2_ParamLimits

0x8df9,	// (0x00016f21) main_welc_pane_t2

0x8e14,	// (0x00016f3c) main_welc_pane_t3_ParamLimits

0x8e14,	// (0x00016f3c) main_welc_pane_t3

0x0005,

0xfe5b,	// (0x0001df83) main_welc_pane_t_ParamLimits

0xfe5b,	// (0x0001df83) main_welc_pane_t

0x8f50,	// (0x00017078) welc_button_pane_ParamLimits

0x8f50,	// (0x00017078) welc_button_pane

0x8fb8,	// (0x000170e0) welc_service_logo_pane_ParamLimits

0x8fb8,	// (0x000170e0) welc_service_logo_pane

0x906b,	// (0x00017193) list_single_welc_entry_pane_ParamLimits

0x906b,	// (0x00017193) list_single_welc_entry_pane

0x907e,	// (0x000171a6) list_single_welc_entry_pane_g1

0x9086,	// (0x000171ae) list_single_welc_entry_pane_t1

0x9094,	// (0x000171bc) list_single_welc_entry_pane_t2

0x0001,

0xfe6d,	// (0x0001df95) list_single_welc_entry_pane_t

0x95ac,	// (0x000176d4) bg_button_pane_cp035

0xed74,	// (0x0001ce9c) welc_button_pane_t1

0xed82,	// (0x0001ceaa) welc_service_logo_pane_g1

0xed8b,	// (0x0001ceb3) welc_service_logo_pane_g2

0x0001,

0xfe72,	// (0x0001df9a) welc_service_logo_pane_g

0x95ac,	// (0x000176d4) main_int_radio_pane

0xdb4f,	// (0x0001bc77) list_single_fs_dyc_pane_g1

0x8b62,	// (0x00016c8a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b62,	// (0x00016c8a) list_double_large_graphic_phob2_pane_g3

0x8b6e,	// (0x00016c96) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b6e,	// (0x00016c96) list_double_large_graphic_phob2_pane_g4

0x90a2,	// (0x000171ca) main_int_radio1_pane_ParamLimits

0x90a2,	// (0x000171ca) main_int_radio1_pane

0xed94,	// (0x0001cebc) find_pane_cp02

0x90bf,	// (0x000171e7) input_focus_pane_cp12_ParamLimits

0x90bf,	// (0x000171e7) input_focus_pane_cp12

0x90cf,	// (0x000171f7) input_focus_pane_cp13_ParamLimits

0x90cf,	// (0x000171f7) input_focus_pane_cp13

0x90e3,	// (0x0001720b) input_focus_pane_cp14_ParamLimits

0x90e3,	// (0x0001720b) input_focus_pane_cp14

0xed9d,	// (0x0001cec5) int_radio1_listscroll_pane

0x90f7,	// (0x0001721f) main_int_radio1_pane_g1_ParamLimits

0x90f7,	// (0x0001721f) main_int_radio1_pane_g1

0x910d,	// (0x00017235) main_int_radio1_pane_t1_ParamLimits

0x910d,	// (0x00017235) main_int_radio1_pane_t1

0x9126,	// (0x0001724e) main_int_radio1_pane_t2_ParamLimits

0x9126,	// (0x0001724e) main_int_radio1_pane_t2

0x9141,	// (0x00017269) main_int_radio1_pane_t3_ParamLimits

0x9141,	// (0x00017269) main_int_radio1_pane_t3

0x915c,	// (0x00017284) main_int_radio1_pane_t4_ParamLimits

0x915c,	// (0x00017284) main_int_radio1_pane_t4

0xeda7,	// (0x0001cecf) main_int_radio1_pane_t5_ParamLimits

0xeda7,	// (0x0001cecf) main_int_radio1_pane_t5

0x916e,	// (0x00017296) main_int_radio1_pane_t6_ParamLimits

0x916e,	// (0x00017296) main_int_radio1_pane_t6

0x9183,	// (0x000172ab) main_int_radio1_pane_t7_ParamLimits

0x9183,	// (0x000172ab) main_int_radio1_pane_t7

0x9198,	// (0x000172c0) main_int_radio1_pane_t8_ParamLimits

0x9198,	// (0x000172c0) main_int_radio1_pane_t8

0x91b5,	// (0x000172dd) main_int_radio1_pane_t9_ParamLimits

0x91b5,	// (0x000172dd) main_int_radio1_pane_t9

0x91c7,	// (0x000172ef) main_int_radio1_pane_t10_ParamLimits

0x91c7,	// (0x000172ef) main_int_radio1_pane_t10

0x91ed,	// (0x00017315) main_int_radio1_pane_t11_ParamLimits

0x91ed,	// (0x00017315) main_int_radio1_pane_t11

0x9213,	// (0x0001733b) main_int_radio1_pane_t12_ParamLimits

0x9213,	// (0x0001733b) main_int_radio1_pane_t12

0x000b,

0xfe77,	// (0x0001df9f) main_int_radio1_pane_t_ParamLimits

0xfe77,	// (0x0001df9f) main_int_radio1_pane_t

0xec31,	// (0x0001cd59) int_radio_list_pane

0xec39,	// (0x0001cd61) scroll_pane_cp037

0xedb9,	// (0x0001cee1) list_double_large_graphic_int_radio_pane_ParamLimits

0xedb9,	// (0x0001cee1) list_double_large_graphic_int_radio_pane

0xedcd,	// (0x0001cef5) list_double_large_graphic_int_radio_pane_g1

0xedd6,	// (0x0001cefe) list_double_large_graphic_int_radio_pane_t1

0xede4,	// (0x0001cf0c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe90,	// (0x0001dfb8) list_double_large_graphic_int_radio_pane_t

0x95ac,	// (0x000176d4) list_highlight_pane_cp027

0xed29,	// (0x0001ce51) main_button_pane_4

0x8db3,	// (0x00016edb) main_welc_pane_g4_ParamLimits

0x8db3,	// (0x00016edb) main_welc_pane_g4

0x8e31,	// (0x00016f59) main_welc_pane_t4_ParamLimits

0x8e31,	// (0x00016f59) main_welc_pane_t4

0x8e48,	// (0x00016f70) main_welc_pane_t5_ParamLimits

0x8e48,	// (0x00016f70) main_welc_pane_t5

0x8e89,	// (0x00016fb1) main_welc_pane_t6_ParamLimits

0x8e89,	// (0x00016fb1) main_welc_pane_t6

0x8f67,	// (0x0001708f) welc_button_pane_2_ParamLimits

0x8f67,	// (0x0001708f) welc_button_pane_2

0x8f81,	// (0x000170a9) welc_button_pane_3_ParamLimits

0x8f81,	// (0x000170a9) welc_button_pane_3

0xed31,	// (0x0001ce59) welc_button_pane_4

0x8fa0,	// (0x000170c8) welc_button_pane_5_ParamLimits

0x8fa0,	// (0x000170c8) welc_button_pane_5

0x07da,	// (0x0000e902) main_popup_welc_pane

0xee01,	// (0x0001cf29) main_welc_sk_g3

0xee0b,	// (0x0001cf33) main_welc_sk_g4

0xee15,	// (0x0001cf3d) main_welc_sk_t3

0xee25,	// (0x0001cf4d) main_welc_sk_t4

0xee35,	// (0x0001cf5d) popup_welc_pane_t4

0xee43,	// (0x0001cf6b) popup_welc_pane_t5

0xee53,	// (0x0001cf7b) popup_welc_pane_t6

0x95ac,	// (0x000176d4) main_acti_pane

0x95ac,	// (0x000176d4) main_sso_pane

0x9225,	// (0x0001734d) sso_body_pane_ParamLimits

0x9225,	// (0x0001734d) sso_body_pane

0x923a,	// (0x00017362) sso_logo_pane_ParamLimits

0x923a,	// (0x00017362) sso_logo_pane

0x926a,	// (0x00017392) sso_sk_pane_ParamLimits

0x926a,	// (0x00017392) sso_sk_pane

0xa049,	// (0x00018171) main_sso_logo_pane_g1

0x927c,	// (0x000173a4) sso_sk_pane_t1_ParamLimits

0x927c,	// (0x000173a4) sso_sk_pane_t1

0x9296,	// (0x000173be) sso_sk_pane_t2_ParamLimits

0x9296,	// (0x000173be) sso_sk_pane_t2

0x0001,

0xfe95,	// (0x0001dfbd) sso_sk_pane_t_ParamLimits

0xfe95,	// (0x0001dfbd) sso_sk_pane_t

0xee95,	// (0x0001cfbd) aid_sso_gap

0xee9e,	// (0x0001cfc6) aid_sso_txt1

0xeea8,	// (0x0001cfd0) aid_sso_txt2

0xeeb2,	// (0x0001cfda) aid_sso_txt3

0x0002,

0xfe9a,	// (0x0001dfc2) aid_sso_txt

0xeebc,	// (0x0001cfe4) aid_sso_widget

0x9300,	// (0x00017428) sso_btn_pane_ParamLimits

0x9300,	// (0x00017428) sso_btn_pane

0x9388,	// (0x000174b0) sso_option_pane_ParamLimits

0x9388,	// (0x000174b0) sso_option_pane

0x940c,	// (0x00017534) sso_query_pane_ParamLimits

0x940c,	// (0x00017534) sso_query_pane

0x9464,	// (0x0001758c) sso_query_pane_cp01_ParamLimits

0x9464,	// (0x0001758c) sso_query_pane_cp01

0x94c2,	// (0x000175ea) sso_t_hdr_pane_ParamLimits

0x94c2,	// (0x000175ea) sso_t_hdr_pane

0x94e6,	// (0x0001760e) sso_t_nml_pane_ParamLimits

0x94e6,	// (0x0001760e) sso_t_nml_pane

0xeeb2,	// (0x0001cfda) sso_t_sub_pane

0x9247,	// (0x0001736f) sso_popup_window_ParamLimits

0x9247,	// (0x0001736f) sso_popup_window

0x92ac,	// (0x000173d4) sso_apps_pane_ParamLimits

0x92ac,	// (0x000173d4) sso_apps_pane

0x92d6,	// (0x000173fe) sso_body_pane_g1

0x92e0,	// (0x00017408) sso_body_pane_t1

0x92f0,	// (0x00017418) sso_body_pane_t2

0x0001,

0xfea1,	// (0x0001dfc9) sso_body_pane_t

0x9352,	// (0x0001747a) sso_btn_pane_cp01_ParamLimits

0x9352,	// (0x0001747a) sso_btn_pane_cp01

0x93e0,	// (0x00017508) sso_prog_pane_ParamLimits

0x93e0,	// (0x00017508) sso_prog_pane

0xeec6,	// (0x0001cfee) sso_t_hdr_pane_t1_ParamLimits

0xeec6,	// (0x0001cfee) sso_t_hdr_pane_t1

0xeed9,	// (0x0001d001) input_focus_pane_cp10_ParamLimits

0xeed9,	// (0x0001d001) input_focus_pane_cp10

0xeeef,	// (0x0001d017) sso_query_pane_t1_ParamLimits

0xeeef,	// (0x0001d017) sso_query_pane_t1

0xef02,	// (0x0001d02a) sso_query_pane_t2_ParamLimits

0xef02,	// (0x0001d02a) sso_query_pane_t2

0xef1c,	// (0x0001d044) sso_query_pane_t3_ParamLimits

0xef1c,	// (0x0001d044) sso_query_pane_t3

0xef46,	// (0x0001d06e) sso_query_pane_t4_ParamLimits

0xef46,	// (0x0001d06e) sso_query_pane_t4

0x0003,

0xfea6,	// (0x0001dfce) sso_query_pane_t_ParamLimits

0xfea6,	// (0x0001dfce) sso_query_pane_t

0x95ac,	// (0x000176d4) bg_button_pane_cp22

0xedf2,	// (0x0001cf1a) sso_btn_pane_t1

0x953c,	// (0x00017664) sso_t_nml_pane_t1_ParamLimits

0x953c,	// (0x00017664) sso_t_nml_pane_t1

0xef6a,	// (0x0001d092) sso_option_row_pane_ParamLimits

0xef6a,	// (0x0001d092) sso_option_row_pane

0xef77,	// (0x0001d09f) sso_t_sub_pane_t1_ParamLimits

0xef77,	// (0x0001d09f) sso_t_sub_pane_t1

0x9621,	// (0x00017749) bg_popup_window_pane_cp11_ParamLimits

0x9621,	// (0x00017749) bg_popup_window_pane_cp11

0xef8a,	// (0x0001d0b2) popup_sk_window_cp01_ParamLimits

0xef8a,	// (0x0001d0b2) popup_sk_window_cp01

0xef97,	// (0x0001d0bf) sso_popup_body_pane_ParamLimits

0xef97,	// (0x0001d0bf) sso_popup_body_pane

0xefa4,	// (0x0001d0cc) scroll_pane_cp21_ParamLimits

0xefa4,	// (0x0001d0cc) scroll_pane_cp21

0xefb1,	// (0x0001d0d9) sso_popup_body_t_pane_ParamLimits

0xefb1,	// (0x0001d0d9) sso_popup_body_t_pane

0xefbe,	// (0x0001d0e6) sso_popup_body_t_hdr_pane_ParamLimits

0xefbe,	// (0x0001d0e6) sso_popup_body_t_hdr_pane

0xefcc,	// (0x0001d0f4) sso_popup_body_t_nml_pane_ParamLimits

0xefcc,	// (0x0001d0f4) sso_popup_body_t_nml_pane

0xefe7,	// (0x0001d10f) sso_popup_body_t_sub_pane_ParamLimits

0xefe7,	// (0x0001d10f) sso_popup_body_t_sub_pane

0xf00a,	// (0x0001d132) sso_popup_body_t_hdr_pane_t1

0x9557,	// (0x0001767f) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9557,	// (0x0001767f) sso_popup_body_t_nml_pane_t1

0xf01a,	// (0x0001d142) sso_popup_body_t_sub_pane_t1_ParamLimits

0xf01a,	// (0x0001d142) sso_popup_body_t_sub_pane_t1

0xa049,	// (0x00018171) sso_prog_pane_g1

0x9592,	// (0x000176ba) sso_apps_pane_comp1_ParamLimits

0x9592,	// (0x000176ba) sso_apps_pane_comp1

0xf03f,	// (0x0001d167) sso_apps_pane_comp1_g1

0xf047,	// (0x0001d16f) sso_apps_pane_comp1_t1

0xf055,	// (0x0001d17d) sso_option_row_pane_g1

0xf05d,	// (0x0001d185) sso_option_row_pane_t1

0x8d08,	// (0x00016e30) bg_welc_area_ParamLimits

0x8d08,	// (0x00016e30) bg_welc_area

0x8ec7,	// (0x00016fef) sso_t_hdr_pane_a_t1_ParamLimits

0x8ec7,	// (0x00016fef) sso_t_hdr_pane_a_t1

0x8ee2,	// (0x0001700a) sso_t_nml_pane_a_t1_ParamLimits

0x8ee2,	// (0x0001700a) sso_t_nml_pane_a_t1

0x8f15,	// (0x0001703d) sso_t_sub_pane_a_t1_ParamLimits

0x8f15,	// (0x0001703d) sso_t_sub_pane_a_t1

0xedf2,	// (0x0001cf1a) sso_btn_pane_t1_copy1

0x95ac,	// (0x000176d4) welc_button_pane_2_comp1

0xee63,	// (0x0001cf8b) sso_t_hdr_pane_p_t1

0xee73,	// (0x0001cf9b) sso_t_nml_pane_p_t1

0xee83,	// (0x0001cfab) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
