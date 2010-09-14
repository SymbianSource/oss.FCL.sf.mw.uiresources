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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00018040 };

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
0x7830,	// (0x0001f870) Screen

0x783c,	// (0x0001f87c) application_window

0x7848,	// (0x0001f888) area_bottom_pane_ParamLimits

0x7848,	// (0x0001f888) area_bottom_pane

0x6018,	// (0x0001e058) area_top_pane_ParamLimits

0x6018,	// (0x0001e058) area_top_pane

0x607c,	// (0x0001e0bc) call_video_uplink_pane_ParamLimits

0x607c,	// (0x0001e0bc) call_video_uplink_pane

0x60bb,	// (0x0001e0fb) main_pane_ParamLimits

0x60bb,	// (0x0001e0fb) main_pane

0x1f37,	// (0x00019f77) context_pane

0xa171,	// (0x000221b1) navi_pane

0xa19a,	// (0x000221da) popup_cale_events_window_ParamLimits

0xa19a,	// (0x000221da) popup_cale_events_window

0x1f4a,	// (0x00019f8a) popup_mup_playback_window

0xa1b2,	// (0x000221f2) signal_pane

0xef71,	// (0x00026fb1) main_browser_pane

0x00dc,	// (0x0001811c) main_burst_pane

0x66da,	// (0x0001e71a) main_calc_pane

0x1ed3,	// (0x00019f13) main_cale_day_pane

0x66e7,	// (0x0001e727) main_cale_month_pane

0x1ed3,	// (0x00019f13) main_cale_week_pane

0x00dc,	// (0x0001811c) main_call_pane

0xec29,	// (0x00026c69) main_call_poc_pane

0x00dc,	// (0x0001811c) main_camera_pane

0x00dc,	// (0x0001811c) main_chi_dic_pane

0x099a,	// (0x000189da) main_clock_pane

0xec29,	// (0x00026c69) main_fmradio_pane

0x00dc,	// (0x0001811c) main_graph_messa_pane

0xec29,	// (0x00026c69) main_help_pane

0xef71,	// (0x00026fb1) main_im_pane

0xee84,	// (0x00026ec4) main_image_pane_ParamLimits

0xee84,	// (0x00026ec4) main_image_pane

0xec29,	// (0x00026c69) main_location2_pane

0x00dc,	// (0x0001811c) main_location_pane

0xee84,	// (0x00026ec4) main_messa_pane

0xec29,	// (0x00026c69) main_mp2_pane

0x00dc,	// (0x0001811c) main_mp_pane

0xec29,	// (0x00026c69) main_msg_pane

0xec29,	// (0x00026c69) main_mup_eq_pane

0xec29,	// (0x00026c69) main_mup_pane

0xef71,	// (0x00026fb1) main_notes_pane

0xec29,	// (0x00026c69) main_pec_pane

0xec29,	// (0x00026c69) main_phob_pane

0xec29,	// (0x00026c69) main_pinb_pane

0xec29,	// (0x00026c69) main_postcard_pane

0xec29,	// (0x00026c69) main_qdial_pane

0x00dc,	// (0x0001811c) main_skin_pane

0xec29,	// (0x00026c69) main_smil2_pane

0x00dc,	// (0x0001811c) main_smil_pane

0x00dc,	// (0x0001811c) main_video_pane

0x00dc,	// (0x0001811c) main_video_tele_pane

0xee84,	// (0x00026ec4) main_viewer_pane_ParamLimits

0xee84,	// (0x00026ec4) main_viewer_pane

0x00dc,	// (0x0001811c) main_vorec_pane

0x673a,	// (0x0001e77a) popup_blid_sat_info_window_ParamLimits

0x673a,	// (0x0001e77a) popup_blid_sat_info_window

0x6760,	// (0x0001e7a0) popup_dyc_status_message_window_ParamLimits

0x6760,	// (0x0001e7a0) popup_dyc_status_message_window

0x6770,	// (0x0001e7b0) popup_grid_large_graphic_window_ParamLimits

0x6770,	// (0x0001e7b0) popup_grid_large_graphic_window

0x6805,	// (0x0001e845) popup_loc_request_window_ParamLimits

0x6805,	// (0x0001e845) popup_loc_request_window

0x685e,	// (0x0001e89e) popup_wml_address_window_ParamLimits

0x685e,	// (0x0001e89e) popup_wml_address_window

0xa053,	// (0x00022093) call_muted_g1

0x9ccb,	// (0x00021d0b) popup_call_audio_conf_window_ParamLimits

0x9ccb,	// (0x00021d0b) popup_call_audio_conf_window

0xa063,	// (0x000220a3) popup_call_audio_first_window_ParamLimits

0xa063,	// (0x000220a3) popup_call_audio_first_window

0xa0a3,	// (0x000220e3) popup_call_audio_in_window_ParamLimits

0xa0a3,	// (0x000220e3) popup_call_audio_in_window

0xa0c7,	// (0x00022107) popup_call_audio_out_window_ParamLimits

0xa0c7,	// (0x00022107) popup_call_audio_out_window

0xa0e9,	// (0x00022129) popup_call_audio_second_window_ParamLimits

0xa0e9,	// (0x00022129) popup_call_audio_second_window

0xa119,	// (0x00022159) popup_call_audio_wait_window_ParamLimits

0xa119,	// (0x00022159) popup_call_audio_wait_window

0xa13a,	// (0x0002217a) popup_number_entry_window_ParamLimits

0xa13a,	// (0x0002217a) popup_number_entry_window

0xe7d3,	// (0x00026813) bg_popup_call_pane_cp05_ParamLimits

0xe7d3,	// (0x00026813) bg_popup_call_pane_cp05

0xe7f3,	// (0x00026833) popup_number_entry_window_t1

0xe806,	// (0x00026846) popup_number_entry_window_t2

0xe818,	// (0x00026858) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000270ab) popup_number_entry_window_t

0xe86d,	// (0x000268ad) text_title_cp2

0xe880,	// (0x000268c0) bg_popup_call_pane_cp_ParamLimits

0xe880,	// (0x000268c0) bg_popup_call_pane_cp

0xe88e,	// (0x000268ce) call_thumbnail_pane

0xe896,	// (0x000268d6) popup_call_audio_in_window_g1_ParamLimits

0xe896,	// (0x000268d6) popup_call_audio_in_window_g1

0xe8a2,	// (0x000268e2) popup_call_audio_in_window_g2_ParamLimits

0xe8a2,	// (0x000268e2) popup_call_audio_in_window_g2

0xe8ae,	// (0x000268ee) popup_call_audio_in_window_g3_ParamLimits

0xe8ae,	// (0x000268ee) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000270b4) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000270b4) popup_call_audio_in_window_g

0xe8ba,	// (0x000268fa) popup_call_audio_in_window_t1_ParamLimits

0xe8ba,	// (0x000268fa) popup_call_audio_in_window_t1

0xe8d6,	// (0x00026916) popup_call_audio_in_window_t2_ParamLimits

0xe8d6,	// (0x00026916) popup_call_audio_in_window_t2

0xe8f2,	// (0x00026932) popup_call_audio_in_window_t3_ParamLimits

0xe8f2,	// (0x00026932) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000270bb) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000270bb) popup_call_audio_in_window_t

0xe880,	// (0x000268c0) bg_popup_call_pane_cp01_ParamLimits

0xe880,	// (0x000268c0) bg_popup_call_pane_cp01

0xe88e,	// (0x000268ce) call_thumbnail_pane_cp02

0xe905,	// (0x00026945) call_type_pane_cp022

0xe90d,	// (0x0002694d) popup_call_audio_out_window_g1_ParamLimits

0xe90d,	// (0x0002694d) popup_call_audio_out_window_g1

0xe91f,	// (0x0002695f) popup_call_audio_out_window_g2_ParamLimits

0xe91f,	// (0x0002695f) popup_call_audio_out_window_g2

0xe92b,	// (0x0002696b) popup_call_audio_out_window_g3_ParamLimits

0xe92b,	// (0x0002696b) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000270c2) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000270c2) popup_call_audio_out_window_g

0xe93d,	// (0x0002697d) popup_call_audio_out_window_t1_ParamLimits

0xe93d,	// (0x0002697d) popup_call_audio_out_window_t1

0xe955,	// (0x00026995) popup_call_audio_out_window_t2_ParamLimits

0xe955,	// (0x00026995) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000270c9) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000270c9) popup_call_audio_out_window_t

0xe96a,	// (0x000269aa) bg_popup_call_pane_ParamLimits

0xe96a,	// (0x000269aa) bg_popup_call_pane

0x7889,	// (0x0001f8c9) call_thumbnail_pane_cp_ParamLimits

0x7889,	// (0x0001f8c9) call_thumbnail_pane_cp

0xe9ee,	// (0x00026a2e) call_type_pane_cp01_ParamLimits

0xe9ee,	// (0x00026a2e) call_type_pane_cp01

0xea32,	// (0x00026a72) popup_call_audio_first_window_g1_ParamLimits

0xea32,	// (0x00026a72) popup_call_audio_first_window_g1

0xea7e,	// (0x00026abe) popup_call_audio_first_window_g2_ParamLimits

0xea7e,	// (0x00026abe) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000270ce) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000270ce) popup_call_audio_first_window_g

0xeac2,	// (0x00026b02) popup_call_audio_first_window_t1_ParamLimits

0xeac2,	// (0x00026b02) popup_call_audio_first_window_t1

0xeb6e,	// (0x00026bae) popup_call_audio_first_window_t4_ParamLimits

0xeb6e,	// (0x00026bae) popup_call_audio_first_window_t4

0xebfa,	// (0x00026c3a) popup_call_audio_first_window_t5_ParamLimits

0xebfa,	// (0x00026c3a) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000270d3) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000270d3) popup_call_audio_first_window_t

0xec29,	// (0x00026c69) bg_popup_call_pane_cp02

0xec33,	// (0x00026c73) call_type_pane_cp023

0xec3b,	// (0x00026c7b) popup_call_audio_wait_window_g1

0xec43,	// (0x00026c83) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000270da) popup_call_audio_wait_window_g

0xec4b,	// (0x00026c8b) popup_call_audio_wait_window_t3

0xec59,	// (0x00026c99) bg_popup_call_pane_cp03_ParamLimits

0xec59,	// (0x00026c99) bg_popup_call_pane_cp03

0xecb9,	// (0x00026cf9) call_thumbnail_pane_cp011_ParamLimits

0xecb9,	// (0x00026cf9) call_thumbnail_pane_cp011

0xecc5,	// (0x00026d05) call_type_pane_cp034_ParamLimits

0xecc5,	// (0x00026d05) call_type_pane_cp034

0xed01,	// (0x00026d41) popup_call_audio_second_window_g1_ParamLimits

0xed01,	// (0x00026d41) popup_call_audio_second_window_g1

0xed3d,	// (0x00026d7d) popup_call_audio_second_window_g2_ParamLimits

0xed3d,	// (0x00026d7d) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x000270df) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x000270df) popup_call_audio_second_window_g

0xed79,	// (0x00026db9) popup_call_audio_second_window_t1_ParamLimits

0xed79,	// (0x00026db9) popup_call_audio_second_window_t1

0xedfa,	// (0x00026e3a) popup_call_audio_second_window_t2_ParamLimits

0xedfa,	// (0x00026e3a) popup_call_audio_second_window_t2

0xee30,	// (0x00026e70) popup_call_audio_second_window_t3_ParamLimits

0xee30,	// (0x00026e70) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x000270e4) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x000270e4) popup_call_audio_second_window_t

0xec29,	// (0x00026c69) bg_popup_call_pane_cp04

0xee66,	// (0x00026ea6) list_conf_pane

0xee6e,	// (0x00026eae) popup_call_audio_conf_window_t1

0xee7c,	// (0x00026ebc) call_thumbnail_pane_g1

0xee84,	// (0x00026ec4) bg_pinb_pane_ParamLimits

0xee84,	// (0x00026ec4) bg_pinb_pane

0xee92,	// (0x00026ed2) find_pinb_pane

0xee84,	// (0x00026ec4) listscroll_pinb_pane_ParamLimits

0xee84,	// (0x00026ec4) listscroll_pinb_pane

0xee9c,	// (0x00026edc) pinb_bg_pane_g1

0xee9c,	// (0x00026edc) pinb_bg_pane_g2

0xee9c,	// (0x00026edc) pinb_bg_pane_g3

0xee9c,	// (0x00026edc) pinb_bg_pane_g4

0xee9c,	// (0x00026edc) pinb_bg_pane_g5

0xee9c,	// (0x00026edc) pinb_bg_pane_g6

0xee9c,	// (0x00026edc) pinb_bg_pane_g7

0xee9c,	// (0x00026edc) pinb_bg_pane_g8

0xee9c,	// (0x00026edc) pinb_bg_pane_g9

0xee9c,	// (0x00026edc) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x000270eb) pinb_bg_pane_g

0xe7c9,	// (0x00026809) grid_pinb_pane

0xe7c9,	// (0x00026809) list_pinb_pane

0xe82a,	// (0x0002686a) scroll_pane_cp01_ParamLimits

0xe82a,	// (0x0002686a) scroll_pane_cp01

0xeea6,	// (0x00026ee6) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x00026ee6) find_pinb_pane_g1

0xeebe,	// (0x00026efe) find_pinb_pane_t1

0xeed0,	// (0x00026f10) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00027105) find_pinb_pane_t

0xeee5,	// (0x00026f25) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x00026f25) input_focus_pane_cp01

0xeef1,	// (0x00026f31) cell_pinb_pane_ParamLimits

0xeef1,	// (0x00026f31) cell_pinb_pane

0xeeff,	// (0x00026f3f) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) cell_pinb_pane_g1

0xef0d,	// (0x00026f4d) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) cell_pinb_pane_g2

0xef0d,	// (0x00026f4d) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x00026f4d) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0002710a) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0002710a) cell_pinb_pane_g

0xec29,	// (0x00026c69) grid_highlight_pane_cp01

0xeef1,	// (0x00026f31) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x00026f31) list_pinb_item_pane

0xe7c9,	// (0x00026809) list_highlight_pane_cp02

0xef1b,	// (0x00026f5b) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x00026f5b) list_pinb_item_pane_g1

0xef0d,	// (0x00026f4d) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) list_pinb_item_pane_g2

0xeeff,	// (0x00026f3f) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_pinb_item_pane_g3

0xef0d,	// (0x00026f4d) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x00026f4d) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00027111) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00027111) list_pinb_item_pane_g

0xef29,	// (0x00026f69) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x00026f69) list_pinb_item_pane_t1

0x62aa,	// (0x0001e2ea) calc_display_pane

0x62c8,	// (0x0001e308) calc_paper_pane

0x62e4,	// (0x0001e324) grid_calc_pane

0xec29,	// (0x00026c69) bg_list_pane_cp01

0x78ad,	// (0x0001f8ed) clock_g1

0x78b5,	// (0x0001f8f5) clock_g2

0x0001,

0xf0da,	// (0x0002711a) clock_g

0x78bf,	// (0x0001f8ff) clock_t1_ParamLimits

0x78bf,	// (0x0001f8ff) clock_t1

0x78d4,	// (0x0001f914) clock_t2_ParamLimits

0x78d4,	// (0x0001f914) clock_t2

0x78e6,	// (0x0001f926) clock_t3_ParamLimits

0x78e6,	// (0x0001f926) clock_t3

0x78f8,	// (0x0001f938) clock_t4_ParamLimits

0x78f8,	// (0x0001f938) clock_t4

0x790a,	// (0x0001f94a) clock_t5_ParamLimits

0x790a,	// (0x0001f94a) clock_t5

0x791f,	// (0x0001f95f) clock_t6_ParamLimits

0x791f,	// (0x0001f95f) clock_t6

0x7931,	// (0x0001f971) clock_t7_ParamLimits

0x7931,	// (0x0001f971) clock_t7

0x7943,	// (0x0001f983) clock_t8_ParamLimits

0x7943,	// (0x0001f983) clock_t8

0x7959,	// (0x0001f999) clock_t9_ParamLimits

0x7959,	// (0x0001f999) clock_t9

0x0008,

0xf0df,	// (0x0002711f) clock_t_ParamLimits

0xf0df,	// (0x0002711f) clock_t

0xef3d,	// (0x00026f7d) popup_clock_analogue_window_cp02

0xef3d,	// (0x00026f7d) popup_clock_digital_window_cp01

0xec29,	// (0x00026c69) listscroll_help_pane

0xec29,	// (0x00026c69) phob_pre_status_pane

0xef45,	// (0x00026f85) grid_qdial_pane

0x796f,	// (0x0001f9af) listscroll_mce_pane

0xee84,	// (0x00026ec4) bg_notes_pane

0xef4f,	// (0x00026f8f) list_notes_pane

0x798d,	// (0x0001f9cd) scroll_pane_cp06

0xef5d,	// (0x00026f9d) bg_calc_paper_pane

0x6310,	// (0x0001e350) list_calc_pane

0xef71,	// (0x00026fb1) bg_calc_display_pane

0x632a,	// (0x0001e36a) calc_display_pane_t1

0x633f,	// (0x0001e37f) calc_display_pane_t2

0x6354,	// (0x0001e394) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00027132) calc_display_pane_t

0x6366,	// (0x0001e3a6) cell_calc_pane_ParamLimits

0x6366,	// (0x0001e3a6) cell_calc_pane

0xef7d,	// (0x00026fbd) bg_calc_paper_pane_g1

0xef89,	// (0x00026fc9) bg_calc_paper_pane_g2

0xef95,	// (0x00026fd5) bg_calc_paper_pane_g3

0xefad,	// (0x00026fed) bg_calc_paper_pane_g4

0xefa1,	// (0x00026fe1) bg_calc_paper_pane_g5

0x799c,	// (0x0001f9dc) bg_calc_paper_pane_g6

0x79ad,	// (0x0001f9ed) bg_calc_paper_pane_g7

0x79be,	// (0x0001f9fe) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00027139) bg_calc_paper_pane_g

0x79cf,	// (0x0001fa0f) calc_bg_paper_pane_g9

0x79e0,	// (0x0001fa20) list_calc_item_pane_ParamLimits

0x79e0,	// (0x0001fa20) list_calc_item_pane

0xefb9,	// (0x00026ff9) list_calc_item_pane_g1

0x6395,	// (0x0001e3d5) list_calc_item_pane_t1_ParamLimits

0x6395,	// (0x0001e3d5) list_calc_item_pane_t1

0x63a7,	// (0x0001e3e7) list_calc_item_pane_t2_ParamLimits

0x63a7,	// (0x0001e3e7) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0002714a) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0002714a) list_calc_item_pane_t

0xee9c,	// (0x00026edc) cell_calc_pane_g1

0xefc6,	// (0x00027006) grid_highlight_pane_cp02

0x31d2,	// (0x0001b212) bg_calc_display_pane_g1

0x63d7,	// (0x0001e417) bg_calc_display_pane_g2

0x31c9,	// (0x0001b209) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x00027154) bg_calc_display_pane_g

0x63e1,	// (0x0001e421) cell_qdial_pane_ParamLimits

0x63e1,	// (0x0001e421) cell_qdial_pane

0x7a01,	// (0x0001fa41) cell_qdial_pane_g1_ParamLimits

0x7a01,	// (0x0001fa41) cell_qdial_pane_g1

0x7a0e,	// (0x0001fa4e) cell_qdial_pane_g2_ParamLimits

0x7a0e,	// (0x0001fa4e) cell_qdial_pane_g2

0xefe8,	// (0x00027028) cell_qdial_pane_g3_ParamLimits

0xefe8,	// (0x00027028) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0002715b) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0002715b) cell_qdial_pane_g

0x7a2c,	// (0x0001fa6c) cell_qdial_pane_t1_ParamLimits

0x7a2c,	// (0x0001fa6c) cell_qdial_pane_t1

0x7a44,	// (0x0001fa84) cell_qdial_pane_t2_ParamLimits

0x7a44,	// (0x0001fa84) cell_qdial_pane_t2

0x7a57,	// (0x0001fa97) cell_qdial_pane_t3_ParamLimits

0x7a57,	// (0x0001fa97) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x00027164) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x00027164) cell_qdial_pane_t

0xec29,	// (0x00026c69) grid_highlight_pane_cp04

0xeff4,	// (0x00027034) thumbnail_qdial_pane_ParamLimits

0xeff4,	// (0x00027034) thumbnail_qdial_pane

0xf059,	// (0x00027099) list_help_pane

0xf062,	// (0x000270a2) scroll_pane_cp02

0x7a6a,	// (0x0001faaa) help_list_pane_t1_ParamLimits

0x7a6a,	// (0x0001faaa) help_list_pane_t1

0x63f7,	// (0x0001e437) bg_notes_pane_g2

0x63ff,	// (0x0001e43f) bg_notes_pane_g3

0x6407,	// (0x0001e447) notes_bg_pane_g1

0x640f,	// (0x0001e44f) notes_bg_pane_g4

0x6417,	// (0x0001e457) notes_bg_pane_g5

0x641f,	// (0x0001e45f) notes_bg_pane_g6

0x6427,	// (0x0001e467) notes_bg_pane_g7

0x642f,	// (0x0001e46f) notes_bg_pane_g8

0x6437,	// (0x0001e477) notes_bg_pane_g9

0x0006,

0xf142,	// (0x00027182) notes_bg_pane_g

0x7a91,	// (0x0001fad1) list_notes_text_pane_ParamLimits

0x7a91,	// (0x0001fad1) list_notes_text_pane

0x002f,	// (0x0001806f) list_notes_text_pane_g1

0x7ab9,	// (0x0001faf9) list_notes_text_pane_t1

0x7ac7,	// (0x0001fb07) listscroll_cale_week_pane

0x7af3,	// (0x0001fb33) bg_cale_heading_pane

0x7b1c,	// (0x0001fb5c) bg_cale_pane_cp01

0x7b3e,	// (0x0001fb7e) cale_week_corner_pane

0x7b5d,	// (0x0001fb9d) cale_week_day_heading_pane

0x7b8b,	// (0x0001fbcb) cale_week_scroll_pane_g1

0x7baf,	// (0x0001fbef) cale_week_scroll_pane_g2

0x7bc7,	// (0x0001fc07) cale_week_scroll_pane_g3

0x7bdf,	// (0x0001fc1f) cale_week_scroll_pane_g4

0x7bf7,	// (0x0001fc37) cale_week_scroll_pane_g5

0x7c0f,	// (0x0001fc4f) cale_week_scroll_pane_g6

0x7c2f,	// (0x0001fc6f) cale_week_scroll_pane_g7

0x7c4f,	// (0x0001fc8f) cale_week_scroll_pane_g8

0x7c6f,	// (0x0001fcaf) cale_week_scroll_pane_g9

0x7c8c,	// (0x0001fccc) cale_week_scroll_pane_g10

0x7ca9,	// (0x0001fce9) cale_week_scroll_pane_g11

0x7cc8,	// (0x0001fd08) cale_week_scroll_pane_g12

0x7ced,	// (0x0001fd2d) cale_week_scroll_pane_g13

0x7d16,	// (0x0001fd56) cale_week_scroll_pane_g14

0x7d3f,	// (0x0001fd7f) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x00027191) cale_week_scroll_pane_g

0x7d88,	// (0x0001fdc8) cale_week_time_pane

0x7da8,	// (0x0001fde8) grid_cale_week_pane

0x0064,	// (0x000180a4) scroll_pane_cp08

0x7dd9,	// (0x0001fe19) cell_cale_week_pane_ParamLimits

0x7dd9,	// (0x0001fe19) cell_cale_week_pane

0x7e69,	// (0x0001fea9) cale_week_day_heading_pane_t1

0x7e91,	// (0x0001fed1) cale_week_day_heading_pane_t2

0x7ebe,	// (0x0001fefe) cale_week_day_heading_pane_t3

0x7eeb,	// (0x0001ff2b) cale_week_day_heading_pane_t4

0x7f18,	// (0x0001ff58) cale_week_day_heading_pane_t5

0x7f45,	// (0x0001ff85) cale_week_day_heading_pane_t6

0x7f72,	// (0x0001ffb2) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000271b2) cale_week_day_heading_pane_t

0x0081,	// (0x000180c1) bg_cale_side_pane

0x643f,	// (0x0001e47f) cale_week_time_pane_t1

0x6463,	// (0x0001e4a3) cale_week_time_pane_t2

0x6487,	// (0x0001e4c7) cale_week_time_pane_t3

0x64ab,	// (0x0001e4eb) cale_week_time_pane_t4

0x64cf,	// (0x0001e50f) cale_week_time_pane_t5

0x64f5,	// (0x0001e535) cale_week_time_pane_t6

0x651d,	// (0x0001e55d) cale_week_time_pane_t7

0x6549,	// (0x0001e589) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000271c1) cale_week_time_pane_t

0x7f9a,	// (0x0001ffda) cell_cale_week_pane_g2

0x7fbe,	// (0x0001fffe) cell_cale_week_pane_g3_ParamLimits

0x7fbe,	// (0x0001fffe) cell_cale_week_pane_g3

0x008f,	// (0x000180cf) grid_highlight_pane_cp07

0x0097,	// (0x000180d7) listscroll_gms_pane

0x00a1,	// (0x000180e1) grid_gms_pane

0x00aa,	// (0x000180ea) listscroll_gms_pane_g1

0x00b2,	// (0x000180f2) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x000271d2) listscroll_gms_pane_g

0x7fd6,	// (0x00020016) scroll_pane_cp010

0x7fe1,	// (0x00020021) cell_gms_pane_ParamLimits

0x7fe1,	// (0x00020021) cell_gms_pane

0x7ff4,	// (0x00020034) cell_gms_pane_g1

0x00ba,	// (0x000180fa) cell_gms_pane_g2

0x00c2,	// (0x00018102) cell_gms_pane_g3

0x00cb,	// (0x0001810b) cell_gms_pane_g4

0x0003,

0xf197,	// (0x000271d7) cell_gms_pane_g

0x00d4,	// (0x00018114) grid_highlight_pane_cp09

0x9fd7,	// (0x00022017) phob_pre_status_pane_g1

0x9fdf,	// (0x0002201f) phob_pre_status_pane_g2

0x9fe7,	// (0x00022027) phob_pre_status_pane_g3

0x9fef,	// (0x0002202f) phob_pre_status_pane_g4

0x0004,

0xf55b,	// (0x0002759b) phob_pre_status_pane_g

0x9fff,	// (0x0002203f) phob_pre_status_pane_t1

0xa00f,	// (0x0002204f) phob_pre_status_pane_t2

0xa01f,	// (0x0002205f) phob_pre_status_pane_t3

0x0002,

0xf566,	// (0x000275a6) phob_pre_status_pane_t

0x00dc,	// (0x0001811c) bg_list_pane_cp05

0x8004,	// (0x00020044) grid_vorec_pane

0x800e,	// (0x0002004e) vorec_t1

0x801c,	// (0x0002005c) vorec_t2

0x802a,	// (0x0002006a) vorec_t3

0x8038,	// (0x00020078) vorec_t4

0x780a,	// (0x0001f84a) vorec_t5

0x7818,	// (0x0001f858) vorec_t6

0x0004,

0xf1a0,	// (0x000271e0) vorec_t

0x7826,	// (0x0001f866) wait_bar_pane_cp01

0x8054,	// (0x00020094) cell_vorec_pane_ParamLimits

0x8054,	// (0x00020094) cell_vorec_pane

0x6579,	// (0x0001e5b9) cell_vorec_pane_g1

0xec29,	// (0x00026c69) grid_highlight_pane_cp05

0xeef1,	// (0x00026f31) cams_zoom_pane

0xeef1,	// (0x00026f31) image_vga_pane

0xef0d,	// (0x00026f4d) main_camera_pane_g1

0xef0d,	// (0x00026f4d) main_camera_pane_g2

0xef0d,	// (0x00026f4d) main_camera_pane_g3

0xef0d,	// (0x00026f4d) main_camera_pane_g4

0xef0d,	// (0x00026f4d) main_camera_pane_g5

0xef0d,	// (0x00026f4d) main_camera_pane_g6

0xef0d,	// (0x00026f4d) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x000271eb) main_camera_pane_g

0x0be3,	// (0x00018c23) main_camera_pane_t1

0x0be3,	// (0x00018c23) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x000271fc) main_camera_pane_t

0x8069,	// (0x000200a9) cams_zoom_pane_cp_ParamLimits

0x8069,	// (0x000200a9) cams_zoom_pane_cp

0x8097,	// (0x000200d7) image_cif_pane_ParamLimits

0x8097,	// (0x000200d7) image_cif_pane

0xe7c9,	// (0x00026809) image_subqcif_pane

0x80a5,	// (0x000200e5) main_video_pane_g1_ParamLimits

0x80a5,	// (0x000200e5) main_video_pane_g1

0x80cd,	// (0x0002010d) main_video_pane_g2_ParamLimits

0x80cd,	// (0x0002010d) main_video_pane_g2

0x8100,	// (0x00020140) main_video_pane_g3_ParamLimits

0x8100,	// (0x00020140) main_video_pane_g3

0x8100,	// (0x00020140) main_video_pane_g4_ParamLimits

0x8100,	// (0x00020140) main_video_pane_g4

0x812e,	// (0x0002016e) main_video_pane_g5_ParamLimits

0x812e,	// (0x0002016e) main_video_pane_g5

0x0117,	// (0x00018157) main_video_pane_g6_ParamLimits

0x0117,	// (0x00018157) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00027201) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00027201) main_video_pane_g

0x814a,	// (0x0002018a) main_video_pane_t1_ParamLimits

0x814a,	// (0x0002018a) main_video_pane_t1

0x0131,	// (0x00018171) cams_zoom_pane_g1

0x0131,	// (0x00018171) cams_zoom_pane_g2

0x0131,	// (0x00018171) cams_zoom_pane_g3

0x0131,	// (0x00018171) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00027210) cams_zoom_pane_g

0x8190,	// (0x000201d0) grid_cams_pane

0x819e,	// (0x000201de) linegrid_cams_pane

0x81aa,	// (0x000201ea) cell_cams_pane_ParamLimits

0x81aa,	// (0x000201ea) cell_cams_pane

0x013b,	// (0x0001817b) cams_burst_image_pane

0x0143,	// (0x00018183) cell_cams_pane_g1

0xec29,	// (0x00026c69) grid_highlight_pane_cp03

0xee9c,	// (0x00026edc) mp_bg_pane_g1

0xe7c9,	// (0x00026809) bg_list_pane_cp03

0xe7c9,	// (0x00026809) bg_mp_pane

0xe7c9,	// (0x00026809) grid_mp_pane

0x0131,	// (0x00018171) media_player_g1

0x06c0,	// (0x00018700) media_player_t1

0x06c0,	// (0x00018700) media_player_t2

0x06c0,	// (0x00018700) media_player_t3

0x06c0,	// (0x00018700) media_player_t4

0x06c0,	// (0x00018700) media_player_t5

0x06c0,	// (0x00018700) media_player_t6

0x06c0,	// (0x00018700) media_player_t7

0x0006,

0xf545,	// (0x00027585) media_player_t

0xe7c9,	// (0x00026809) wait_bar_pane_cp02

0xf52a,	// (0x0002756a) main_usb_pane_t

0x099a,	// (0x000189da) cell_mp_pane

0xee9c,	// (0x00026edc) cell_mp_pane_g1

0xec29,	// (0x00026c69) grid_highlight_pane_cp06

0x014b,	// (0x0001818b) grid_skin_colour_pane

0x0153,	// (0x00018193) list_highlight_pane_cp03

0x81bf,	// (0x000201ff) skin_g1

0x015b,	// (0x0001819b) skin_t1

0x016a,	// (0x000181aa) skin_t2

0x0001,

0xf1fe,	// (0x0002723e) skin_t

0x81c9,	// (0x00020209) cell_skin_colour_pane_ParamLimits

0x81c9,	// (0x00020209) cell_skin_colour_pane

0x0178,	// (0x000181b8) cell_skin_colour_pane_g1

0x8249,	// (0x00020289) call_video_g1_ParamLimits

0x8249,	// (0x00020289) call_video_g1

0x8259,	// (0x00020299) call_video_g2_ParamLimits

0x8259,	// (0x00020299) call_video_g2

0x0001,

0xf203,	// (0x00027243) call_video_g_ParamLimits

0xf203,	// (0x00027243) call_video_g

0x82a9,	// (0x000202e9) call_video_uplink_pane_cp1_ParamLimits

0x82a9,	// (0x000202e9) call_video_uplink_pane_cp1

0x018a,	// (0x000181ca) call_video_uplink_pane_cp2

0x8377,	// (0x000203b7) video_down_crop_pane_ParamLimits

0x8377,	// (0x000203b7) video_down_crop_pane

0x8469,	// (0x000204a9) video_down_pane_ParamLimits

0x8469,	// (0x000204a9) video_down_pane

0x0192,	// (0x000181d2) video_down_subqcif_pane_ParamLimits

0x0192,	// (0x000181d2) video_down_subqcif_pane

0x01ac,	// (0x000181ec) video_down_subqcif_pane_cp_ParamLimits

0x01ac,	// (0x000181ec) video_down_subqcif_pane_cp

0x01d4,	// (0x00018214) im_reading_pane_ParamLimits

0x01d4,	// (0x00018214) im_reading_pane

0x8586,	// (0x000205c6) im_writing_pane_ParamLimits

0x8586,	// (0x000205c6) im_writing_pane

0x85a4,	// (0x000205e4) im_reading_pane_t1

0x01ee,	// (0x0001822e) list_im_pane

0x01ff,	// (0x0001823f) scroll_pane_cp07

0x85e6,	// (0x00020626) im_writing_pane_t1_ParamLimits

0x85e6,	// (0x00020626) im_writing_pane_t1

0x0218,	// (0x00018258) im_writing_pane_t2_ParamLimits

0x0218,	// (0x00018258) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0002724d) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0002724d) im_writing_pane_t

0xec29,	// (0x00026c69) input_focus_pane_cp04

0xec29,	// (0x00026c69) input_focus_pane_cp05

0x85f8,	// (0x00020638) list_im_single_pane_ParamLimits

0x85f8,	// (0x00020638) list_im_single_pane

0x8611,	// (0x00020651) list_single_im_pane_t1

0x00dc,	// (0x0001811c) blid_accuracy_pane

0x00dc,	// (0x0001811c) blid_compass_pane

0x1e8b,	// (0x00019ecb) main_location_t1

0x1e8b,	// (0x00019ecb) main_location_t2

0x1e8b,	// (0x00019ecb) main_location_t3

0x0002,

0xf554,	// (0x00027594) main_location_t

0xec29,	// (0x00026c69) aid_levels_location

0xee9c,	// (0x00026edc) blid_accuracy_pane_g1

0xee9c,	// (0x00026edc) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0002729c) blid_accuracy_pane_g

0x0260,	// (0x000182a0) wml_content_pane

0x029e,	// (0x000182de) wml_button_pane_ParamLimits

0x029e,	// (0x000182de) wml_button_pane

0x8620,	// (0x00020660) wml_list_single_large_pane_ParamLimits

0x8620,	// (0x00020660) wml_list_single_large_pane

0x8642,	// (0x00020682) wml_list_single_medium_pane_ParamLimits

0x8642,	// (0x00020682) wml_list_single_medium_pane

0x8665,	// (0x000206a5) wml_list_single_small_pane_ParamLimits

0x8665,	// (0x000206a5) wml_list_single_small_pane

0x02b2,	// (0x000182f2) wml_selection_box_pane_ParamLimits

0x02b2,	// (0x000182f2) wml_selection_box_pane

0x02c5,	// (0x00018305) wml_list_single_pane_t1

0x02d4,	// (0x00018314) wml_list_single_medium_pane_t1

0x02e3,	// (0x00018323) wml_list_single_large_pane_t1

0x02f2,	// (0x00018332) input_focus_pane_cp02_ParamLimits

0x02f2,	// (0x00018332) input_focus_pane_cp02

0x0305,	// (0x00018345) wml_selection_box_pane_g1

0x030e,	// (0x0001834e) wml_selection_box_pane_t1_ParamLimits

0x030e,	// (0x0001834e) wml_selection_box_pane_t1

0xee84,	// (0x00026ec4) bg_wml_button_pane_ParamLimits

0xee84,	// (0x00026ec4) bg_wml_button_pane

0x0326,	// (0x00018366) wml_button_pane_g1

0x032e,	// (0x0001836e) wml_button_pane_t1

0x0326,	// (0x00018366) wml_button_bg_pane_g1

0x033e,	// (0x0001837e) wml_button_bg_pane_g2

0x0346,	// (0x00018386) wml_button_bg_pane_g3

0x034e,	// (0x0001838e) wml_button_bg_pane_g4

0x0356,	// (0x00018396) wml_button_bg_pane_g5

0x035e,	// (0x0001839e) wml_button_bg_pane_g6

0x0366,	// (0x000183a6) wml_button_bg_pane_g7

0x036e,	// (0x000183ae) wml_button_bg_pane_g8

0x0376,	// (0x000183b6) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x00027252) wml_button_bg_pane_g

0x868d,	// (0x000206cd) bg_list_pane_cp02

0x037e,	// (0x000183be) mce_header_pane_ParamLimits

0x037e,	// (0x000183be) mce_header_pane

0x0394,	// (0x000183d4) mce_icon_pane

0x0394,	// (0x000183d4) mce_image_pane

0x039d,	// (0x000183dd) mce_text_pane_ParamLimits

0x039d,	// (0x000183dd) mce_text_pane

0x8695,	// (0x000206d5) scroll_pane_cp03

0x0296,	// (0x000182d6) scroll_pane_cp04

0x03b0,	// (0x000183f0) scroll_pane_cp05_ParamLimits

0x03b0,	// (0x000183f0) scroll_pane_cp05

0x869d,	// (0x000206dd) mce_header_field_pane_ParamLimits

0x869d,	// (0x000206dd) mce_header_field_pane

0x86bf,	// (0x000206ff) mce_header_field_pane_2_ParamLimits

0x86bf,	// (0x000206ff) mce_header_field_pane_2

0x86d5,	// (0x00020715) mce_header_field_pane_3

0x03bc,	// (0x000183fc) list_single_mce_message_pane_ParamLimits

0x03bc,	// (0x000183fc) list_single_mce_message_pane

0x03cb,	// (0x0001840b) list_single_mce_smart_pane_ParamLimits

0x03cb,	// (0x0001840b) list_single_mce_smart_pane

0x03e5,	// (0x00018425) input_focus_pane_cp03

0x03ee,	// (0x0001842e) list_header_data_pane

0x86dd,	// (0x0002071d) mce_header_field_pane_t1

0x86eb,	// (0x0002072b) list_single_mce_header_pane_ParamLimits

0x86eb,	// (0x0002072b) list_single_mce_header_pane

0x03f6,	// (0x00018436) list_single_mce_header_pane_t1

0x0405,	// (0x00018445) list_single_mce_message_pane_g1

0x040d,	// (0x0001844d) list_single_mce_message_pane_t1

0x8721,	// (0x00020761) bg_cale_heading_pane_cp01_ParamLimits

0x8721,	// (0x00020761) bg_cale_heading_pane_cp01

0x041b,	// (0x0001845b) bg_cale_pane_cp02_ParamLimits

0x041b,	// (0x0001845b) bg_cale_pane_cp02

0x8773,	// (0x000207b3) cale_month_corner_pane

0x8792,	// (0x000207d2) cale_month_day_heading_pane_ParamLimits

0x8792,	// (0x000207d2) cale_month_day_heading_pane

0x87f4,	// (0x00020834) cale_month_pane_g1_ParamLimits

0x87f4,	// (0x00020834) cale_month_pane_g1

0x883b,	// (0x0002087b) cale_month_pane_g2_ParamLimits

0x883b,	// (0x0002087b) cale_month_pane_g2

0x8873,	// (0x000208b3) cale_month_pane_g3_ParamLimits

0x8873,	// (0x000208b3) cale_month_pane_g3

0x88c7,	// (0x00020907) cale_month_pane_g4_ParamLimits

0x88c7,	// (0x00020907) cale_month_pane_g4

0x891b,	// (0x0002095b) cale_month_pane_g5_ParamLimits

0x891b,	// (0x0002095b) cale_month_pane_g5

0x896f,	// (0x000209af) cale_month_pane_g6_ParamLimits

0x896f,	// (0x000209af) cale_month_pane_g6

0x89d3,	// (0x00020a13) cale_month_pane_g7_ParamLimits

0x89d3,	// (0x00020a13) cale_month_pane_g7

0x8a37,	// (0x00020a77) cale_month_pane_g8_ParamLimits

0x8a37,	// (0x00020a77) cale_month_pane_g8

0x8a9b,	// (0x00020adb) cale_month_pane_g9_ParamLimits

0x8a9b,	// (0x00020adb) cale_month_pane_g9

0x8af5,	// (0x00020b35) cale_month_pane_g10_ParamLimits

0x8af5,	// (0x00020b35) cale_month_pane_g10

0x8b47,	// (0x00020b87) cale_month_pane_g11_ParamLimits

0x8b47,	// (0x00020b87) cale_month_pane_g11

0x8b95,	// (0x00020bd5) cale_month_pane_g12_ParamLimits

0x8b95,	// (0x00020bd5) cale_month_pane_g12

0x8be5,	// (0x00020c25) cale_month_pane_g13_ParamLimits

0x8be5,	// (0x00020c25) cale_month_pane_g13

0x000c,

0xf225,	// (0x00027265) cale_month_pane_g_ParamLimits

0xf225,	// (0x00027265) cale_month_pane_g

0x8c35,	// (0x00020c75) cale_month_week_pane

0x8c55,	// (0x00020c95) grid_cale_month_pane_ParamLimits

0x8c55,	// (0x00020c95) grid_cale_month_pane

0x8cae,	// (0x00020cee) cale_month_day_heading_pane_t1

0x8d30,	// (0x00020d70) cale_month_day_heading_pane_t2

0x8da9,	// (0x00020de9) cale_month_day_heading_pane_t3

0x8e22,	// (0x00020e62) cale_month_day_heading_pane_t4

0x8e9b,	// (0x00020edb) cale_month_day_heading_pane_t5

0x8f1c,	// (0x00020f5c) cale_month_day_heading_pane_t6

0x8fa5,	// (0x00020fe5) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00027280) cale_month_day_heading_pane_t

0x0081,	// (0x000180c1) bg_cale_side_pane_cp01

0x902e,	// (0x0002106e) cale_month_week_pane_t1

0x9047,	// (0x00021087) cale_month_week_pane_t2

0x9060,	// (0x000210a0) cale_month_week_pane_t3

0x9079,	// (0x000210b9) cale_month_week_pane_t4

0x9092,	// (0x000210d2) cale_month_week_pane_t5

0x90af,	// (0x000210ef) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0002728f) cale_month_week_pane_t

0x90d2,	// (0x00021112) cell_cale_month_pane_ParamLimits

0x90d2,	// (0x00021112) cell_cale_month_pane

0x6583,	// (0x0001e5c3) cell_cale_month_pane_g1

0x658f,	// (0x0001e5cf) cell_cale_month_pane_t1_ParamLimits

0x658f,	// (0x0001e5cf) cell_cale_month_pane_t1

0x008f,	// (0x000180cf) grid_highlight_pane_cp08

0xee9c,	// (0x00026edc) main_smil_g1

0x9200,	// (0x00021240) smil_status_pane

0x0466,	// (0x000184a6) smil_text_pane

0x1da1,	// (0x00019de1) bg_popup_call3_rect_pane_g8

0x1da9,	// (0x00019de9) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x00027528) bg_popup_call3_rect_pane_g

0x1fd2,	// (0x0001a012) smil_status_volume_pane_g1

0x0470,	// (0x000184b0) smil_status_pane_t1

0x6897,	// (0x0001e8d7) volume_smil_pane

0x0487,	// (0x000184c7) list_smil_text_pane

0x9213,	// (0x00021253) scroll_pane_cp011

0x921e,	// (0x0002125e) smil_text_list_pane_t1_ParamLimits

0x921e,	// (0x0002125e) smil_text_list_pane_t1

0x65bb,	// (0x0001e5fb) aid_volume_smil_ParamLimits

0x65bb,	// (0x0001e5fb) aid_volume_smil

0xee9c,	// (0x00026edc) smil_volume_pane_g1

0xee9c,	// (0x00026edc) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0002729c) smil_volume_pane_g

0x7ac7,	// (0x0001fb07) listscroll_cale_day_pane

0x04b3,	// (0x000184f3) bg_cale_pane

0x04cb,	// (0x0001850b) list_cale_pane

0x04ee,	// (0x0001852e) scroll_pane_cp09

0x04ff,	// (0x0001853f) cale_bg_pane_g1

0x0507,	// (0x00018547) cale_bg_pane_g2

0x050f,	// (0x0001854f) cale_bg_pane_g3

0x0517,	// (0x00018557) cale_bg_pane_g4

0x051f,	// (0x0001855f) cale_bg_pane_g5

0x0527,	// (0x00018567) cale_bg_pane_g6

0x052f,	// (0x0001856f) cale_bg_pane_g7

0x0537,	// (0x00018577) cale_bg_pane_g8

0x053f,	// (0x0001857f) cale_bg_pane_g9

0x0008,

0xf261,	// (0x000272a1) cale_bg_pane_g

0x927a,	// (0x000212ba) list_cale_time_pane_ParamLimits

0x927a,	// (0x000212ba) list_cale_time_pane

0x0547,	// (0x00018587) list_cale_time_pane_g1_ParamLimits

0x0547,	// (0x00018587) list_cale_time_pane_g1

0x0553,	// (0x00018593) list_cale_time_pane_g2_ParamLimits

0x0553,	// (0x00018593) list_cale_time_pane_g2

0x9291,	// (0x000212d1) list_cale_time_pane_g3_ParamLimits

0x9291,	// (0x000212d1) list_cale_time_pane_g3

0x929f,	// (0x000212df) list_cale_time_pane_g4_ParamLimits

0x929f,	// (0x000212df) list_cale_time_pane_g4

0x92ad,	// (0x000212ed) list_cale_time_pane_g5_ParamLimits

0x92ad,	// (0x000212ed) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x000272b4) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x000272b4) list_cale_time_pane_g

0x056d,	// (0x000185ad) list_cale_time_pane_t1_ParamLimits

0x056d,	// (0x000185ad) list_cale_time_pane_t1

0x0595,	// (0x000185d5) list_cale_time_pane_t2_ParamLimits

0x0595,	// (0x000185d5) list_cale_time_pane_t2

0x94fb,	// (0x0002153b) aid_blid_cardinal_pane

0x953d,	// (0x0002157d) compass_pane_t4

0x05bd,	// (0x000185fd) list_cale_time_pane_t4_ParamLimits

0x05bd,	// (0x000185fd) list_cale_time_pane_t4

0x954b,	// (0x0002158b) compass_pane_t5

0x955b,	// (0x0002159b) compass_pane_t6

0x9569,	// (0x000215a9) compass_pane_t7

0x0a4a,	// (0x00018a8a) navi_pane_cc_t1

0x0ba9,	// (0x00018be9) aid_phob_thumbnail_center_pane

0x9a6b,	// (0x00021aab) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x000272c1) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x000272c1) list_cale_time_pane_t

0xe880,	// (0x000268c0) bg_popup_window_pane_cp02_ParamLimits

0xe880,	// (0x000268c0) bg_popup_window_pane_cp02

0x05e5,	// (0x00018625) heading_pane_cp01_ParamLimits

0x05e5,	// (0x00018625) heading_pane_cp01

0x05f1,	// (0x00018631) loc_req_pane_ParamLimits

0x05f1,	// (0x00018631) loc_req_pane

0x0601,	// (0x00018641) loc_type_pane_ParamLimits

0x0601,	// (0x00018641) loc_type_pane

0x0613,	// (0x00018653) loc_type_pane_t1_ParamLimits

0x0613,	// (0x00018653) loc_type_pane_t1

0x0625,	// (0x00018665) loc_type_pane_t2_ParamLimits

0x0625,	// (0x00018665) loc_type_pane_t2

0x0637,	// (0x00018677) loc_type_pane_t3_ParamLimits

0x0637,	// (0x00018677) loc_type_pane_t3

0x0002,

0xf288,	// (0x000272c8) loc_type_pane_t_ParamLimits

0xf288,	// (0x000272c8) loc_type_pane_t

0x0649,	// (0x00018689) list_loc_req_pane

0x0653,	// (0x00018693) scroll_pane_cp012

0x92bb,	// (0x000212fb) list_single_loc_request_popup_menu_pane_ParamLimits

0x92bb,	// (0x000212fb) list_single_loc_request_popup_menu_pane

0x065e,	// (0x0001869e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x065e,	// (0x0001869e) list_single_loc_request_popup_menu_pane_g1

0x066a,	// (0x000186aa) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x066a,	// (0x000186aa) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x000272cf) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x000272cf) list_single_loc_request_popup_menu_pane_g

0x0676,	// (0x000186b6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0676,	// (0x000186b6) list_single_loc_request_popup_menu_pane_t1

0x92cd,	// (0x0002130d) bg_popup_window_pane_cp03_ParamLimits

0x92cd,	// (0x0002130d) bg_popup_window_pane_cp03

0x92db,	// (0x0002131b) heading_loc_req_pane_ParamLimits

0x92db,	// (0x0002131b) heading_loc_req_pane

0x92e7,	// (0x00021327) popup_dyc_status_message_window_g1_ParamLimits

0x92e7,	// (0x00021327) popup_dyc_status_message_window_g1

0x92f3,	// (0x00021333) popup_dyc_status_message_window_t1_ParamLimits

0x92f3,	// (0x00021333) popup_dyc_status_message_window_t1

0x9305,	// (0x00021345) popup_dyc_status_message_window_t2_ParamLimits

0x9305,	// (0x00021345) popup_dyc_status_message_window_t2

0x9317,	// (0x00021357) popup_dyc_status_message_window_t3_ParamLimits

0x9317,	// (0x00021357) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x000272d4) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x000272d4) popup_dyc_status_message_window_t

0xec29,	// (0x00026c69) bg_heading_pane_cp01

0x0698,	// (0x000186d8) heading_loc_req_pane_g1

0x06a0,	// (0x000186e0) heading_loc_req_pane_g2

0x06a8,	// (0x000186e8) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x000272db) heading_loc_req_pane_g

0x06b0,	// (0x000186f0) heading_loc_req_pane_t1

0x06d0,	// (0x00018710) bg_popup_sub_pane_cp01_ParamLimits

0x06d0,	// (0x00018710) bg_popup_sub_pane_cp01

0x06de,	// (0x0001871e) popup_cale_events_window_g1_ParamLimits

0x06de,	// (0x0001871e) popup_cale_events_window_g1

0x06fe,	// (0x0001873e) popup_cale_events_window_g2_ParamLimits

0x06fe,	// (0x0001873e) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x000272fd) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x000272fd) popup_cale_events_window_g

0x071e,	// (0x0001875e) popup_cale_events_window_t1_ParamLimits

0x071e,	// (0x0001875e) popup_cale_events_window_t1

0x0730,	// (0x00018770) popup_cale_events_window_t2_ParamLimits

0x0730,	// (0x00018770) popup_cale_events_window_t2

0x076e,	// (0x000187ae) popup_cale_events_window_t3_ParamLimits

0x076e,	// (0x000187ae) popup_cale_events_window_t3

0x07a8,	// (0x000187e8) popup_cale_events_window_t4_ParamLimits

0x07a8,	// (0x000187e8) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x00027302) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x00027302) popup_cale_events_window_t

0x9341,	// (0x00021381) call_type_pane

0x15c6,	// (0x00019606) popup_call_status_window_g1

0x934d,	// (0x0002138d) popup_call_status_window_g2

0x9359,	// (0x00021399) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0002730b) popup_call_status_window_g

0x07de,	// (0x0001881e) call_type_pane_g1

0x07e7,	// (0x00018827) call_type_pane_g2

0x0001,

0xf2d2,	// (0x00027312) call_type_pane_g

0xec29,	// (0x00026c69) bg_popup_sub_pane_cp02

0x07f0,	// (0x00018830) listscroll_popup_wml_pane

0x07f8,	// (0x00018838) list_wml_pane

0x0802,	// (0x00018842) scroll_pane_cp013

0x080d,	// (0x0001884d) list_single_graphic_popup_wml_pane_ParamLimits

0x080d,	// (0x0001884d) list_single_graphic_popup_wml_pane

0xee9c,	// (0x00026edc) list_single_graphic_popup_wml_pane_g1

0x0821,	// (0x00018861) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x00027317) list_single_graphic_popup_wml_pane_g

0x0829,	// (0x00018869) list_single_graphic_popup_wml_pane_t1

0x0837,	// (0x00018877) aid_call_pane

0xee7c,	// (0x00026ebc) popup_clock_analogue_window_g1

0xee7c,	// (0x00026ebc) popup_clock_analogue_window_g2

0x65dd,	// (0x0001e61d) popup_clock_analogue_window_g3

0x65dd,	// (0x0001e61d) popup_clock_analogue_window_g4

0xee9c,	// (0x00026edc) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0002731c) popup_clock_analogue_window_g

0x65e5,	// (0x0001e625) popup_clock_analogue_window_t1

0x65f3,	// (0x0001e633) clock_digital_number_pane_ParamLimits

0x65f3,	// (0x0001e633) clock_digital_number_pane

0x65ff,	// (0x0001e63f) clock_digital_number_pane_cp02_ParamLimits

0x65ff,	// (0x0001e63f) clock_digital_number_pane_cp02

0x660b,	// (0x0001e64b) clock_digital_number_pane_cp03_ParamLimits

0x660b,	// (0x0001e64b) clock_digital_number_pane_cp03

0x6617,	// (0x0001e657) clock_digital_number_pane_cp04_ParamLimits

0x6617,	// (0x0001e657) clock_digital_number_pane_cp04

0x6623,	// (0x0001e663) clock_digital_separator_pane_ParamLimits

0x6623,	// (0x0001e663) clock_digital_separator_pane

0x662f,	// (0x0001e66f) popup_clock_digital_window_t1

0xee9c,	// (0x00026edc) clock_digital_number_pane_g1

0xee9c,	// (0x00026edc) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0002729c) clock_digital_number_pane_g

0xee9c,	// (0x00026edc) clock_digital_separator_pane_g1

0xee9c,	// (0x00026edc) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0002729c) clock_digital_separator_pane_g

0xec29,	// (0x00026c69) bg_popup_window_pane_cp04

0x08b6,	// (0x000188f6) heading_pane_cp03

0x00dc,	// (0x0001811c) listscroll_popup_gms_pane

0xec29,	// (0x00026c69) grid_large_graphic_popup_pane

0x08bf,	// (0x000188ff) listscroll_popup_gms_pane_g1

0x08c8,	// (0x00018908) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x00027327) listscroll_popup_gms_pane_g

0x08d1,	// (0x00018911) scroll_pane_cp014

0xeef1,	// (0x00026f31) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x00026f31) cell_large_graphic_popup_pane

0xeeff,	// (0x00026f3f) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) cell_large_graphic_popup_pane_g1

0x08da,	// (0x0001891a) cell_large_graphic_popup_pane_g2_ParamLimits

0x08da,	// (0x0001891a) cell_large_graphic_popup_pane_g2

0x08e8,	// (0x00018928) cell_large_graphic_popup_pane_g3_ParamLimits

0x08e8,	// (0x00018928) cell_large_graphic_popup_pane_g3

0x08f6,	// (0x00018936) cell_large_graphic_popup_pane_g4_ParamLimits

0x08f6,	// (0x00018936) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0002732c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0002732c) cell_large_graphic_popup_pane_g

0xec29,	// (0x00026c69) grid_highlight_pane_cp010

0xee9c,	// (0x00026edc) bg_popup_call_pane_g1

0x0907,	// (0x00018947) list_single_graphic_popup_conf_pane_ParamLimits

0x0907,	// (0x00018947) list_single_graphic_popup_conf_pane

0x0919,	// (0x00018959) list_highlight_pane_cp01

0x0922,	// (0x00018962) list_single_graphic_popup_conf_pane_g1

0x092a,	// (0x0001896a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x00027335) list_single_graphic_popup_conf_pane_g

0x0932,	// (0x00018972) list_single_graphic_popup_conf_pane_t1

0x0940,	// (0x00018980) linegrid_cams_pane_g1

0x9365,	// (0x000213a5) linegrid_cams_pane_g2

0x00c2,	// (0x00018102) linegrid_cams_pane_g3

0x0949,	// (0x00018989) linegrid_cams_pane_g4

0x936e,	// (0x000213ae) linegrid_cams_pane_g5

0x9377,	// (0x000213b7) linegrid_cams_pane_g6

0x00cb,	// (0x0001810b) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0002733a) linegrid_cams_pane_g

0x0952,	// (0x00018992) popup_clock_analogue_window

0x0952,	// (0x00018992) popup_clock_digital_window

0xec29,	// (0x00026c69) popup_phob_thumbnail_window

0xee9c,	// (0x00026edc) call_video_uplink_pane_g1

0x095b,	// (0x0001899b) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x00027349) call_video_uplink_pane_g

0x0963,	// (0x000189a3) video_uplink_pane

0x096b,	// (0x000189ab) mce_image_pane_g1

0x9382,	// (0x000213c2) mce_image_pane_g2

0x938c,	// (0x000213cc) mce_image_pane_g3

0x9396,	// (0x000213d6) mce_image_pane_g4

0x939e,	// (0x000213de) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0002734e) mce_image_pane_g

0x0975,	// (0x000189b5) control_top_pane_stacon_cp01_ParamLimits

0x0975,	// (0x000189b5) control_top_pane_stacon_cp01

0x0989,	// (0x000189c9) uni_indicator_pane_stacon_cp01_ParamLimits

0x0989,	// (0x000189c9) uni_indicator_pane_stacon_cp01

0x099a,	// (0x000189da) bg_popup_sub_pane_cp03

0x93a6,	// (0x000213e6) chi_dic_find_pane

0x93ae,	// (0x000213ee) listscroll_chi_dic_pane

0x93b7,	// (0x000213f7) main_pane_chidic_g1

0x93ca,	// (0x0002140a) chi_dic_find_pane_t1

0x09a4,	// (0x000189e4) find_chidic_pane

0x09ad,	// (0x000189ed) chi_dic_list_pane_ParamLimits

0x09ad,	// (0x000189ed) chi_dic_list_pane

0x09be,	// (0x000189fe) scroll_pane_cp020

0x93d8,	// (0x00021418) find_chidic_pane_t1

0xec29,	// (0x00026c69) input_focus_pane_cp06

0x00e4,	// (0x00018124) list_chi_dic_pane_ParamLimits

0x00e4,	// (0x00018124) list_chi_dic_pane

0x93e7,	// (0x00021427) list_chi_dic_pane_t1_ParamLimits

0x93e7,	// (0x00021427) list_chi_dic_pane_t1

0xec29,	// (0x00026c69) list_highlight_pane_cp020

0x09c6,	// (0x00018a06) bg_cale_heading_pane_g1

0x93fa,	// (0x0002143a) bg_cale_heading_pane_g2

0x9402,	// (0x00021442) bg_cale_heading_pane_g3

0x940a,	// (0x0002144a) bg_cale_heading_pane_g4

0x9414,	// (0x00021454) bg_cale_heading_pane_g5

0x941e,	// (0x0002145e) bg_cale_heading_pane_g6

0x9426,	// (0x00021466) bg_cale_heading_pane_g7

0x942e,	// (0x0002146e) bg_cale_heading_pane_g8

0x9438,	// (0x00021478) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x00027359) bg_cale_heading_pane_g

0x09c6,	// (0x00018a06) bg_cale_side_pane_g1

0x9442,	// (0x00021482) bg_cale_side_pane_g2

0x944c,	// (0x0002148c) bg_cale_side_pane_g3

0x9456,	// (0x00021496) bg_cale_side_pane_g4

0x9460,	// (0x000214a0) bg_cale_side_pane_g5

0x946a,	// (0x000214aa) bg_cale_side_pane_g6

0x9474,	// (0x000214b4) bg_cale_side_pane_g7

0x947e,	// (0x000214be) bg_cale_side_pane_g8

0x9486,	// (0x000214c6) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0002736c) bg_cale_side_pane_g

0x948e,	// (0x000214ce) popup_call_status_window_ParamLimits

0x948e,	// (0x000214ce) popup_call_status_window

0x09ce,	// (0x00018a0e) stacon_top_pane

0x09d6,	// (0x00018a16) status_pane_ParamLimits

0x09d6,	// (0x00018a16) status_pane

0x09eb,	// (0x00018a2b) status_small_pane

0x09f3,	// (0x00018a33) control_pane

0xec29,	// (0x00026c69) stacon_bottom_pane

0x09fb,	// (0x00018a3b) list_single_mce_smart_pane_t1_ParamLimits

0x09fb,	// (0x00018a3b) list_single_mce_smart_pane_t1

0x0a0e,	// (0x00018a4e) list_single_mce_smart_pane_t2_ParamLimits

0x0a0e,	// (0x00018a4e) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0002737f) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0002737f) list_single_mce_smart_pane_t

0x949a,	// (0x000214da) compass_pane

0x94a5,	// (0x000214e5) main_location2_pane_t1

0x94bb,	// (0x000214fb) main_location2_pane_t2

0x94d1,	// (0x00021511) main_location2_pane_t3

0x0003,

0xf344,	// (0x00027384) main_location2_pane_t

0x0a2d,	// (0x00018a6d) compass_pane_g1_ParamLimits

0x0a2d,	// (0x00018a6d) compass_pane_g1

0x951f,	// (0x0002155f) compass_pane_t1

0x952e,	// (0x0002156e) compass_pane_t2

0x0005,

0xf34d,	// (0x0002738d) compass_pane_t

0x9579,	// (0x000215b9) text_secondary_cp61

0x0a41,	// (0x00018a81) navi_pane_cams_g5

0x0a64,	// (0x00018aa4) navi_pane_im_t1

0x0a72,	// (0x00018ab2) navi_pane_mp_g1_ParamLimits

0x0a72,	// (0x00018ab2) navi_pane_mp_g1

0x0a86,	// (0x00018ac6) navi_pane_mp_g2_ParamLimits

0x0a86,	// (0x00018ac6) navi_pane_mp_g2

0x0a92,	// (0x00018ad2) navi_pane_mp_g3_ParamLimits

0x0a92,	// (0x00018ad2) navi_pane_mp_g3

0x0002,

0xf361,	// (0x000273a1) navi_pane_mp_g_ParamLimits

0xf361,	// (0x000273a1) navi_pane_mp_g

0x0a9e,	// (0x00018ade) navi_pane_mp_t1

0x0aac,	// (0x00018aec) navi_pane_mp_t2

0x0002,

0xf368,	// (0x000273a8) navi_pane_mp_t

0x0ae8,	// (0x00018b28) navi_pane_vt_g1

0x0a9e,	// (0x00018ade) navi_pane_vt_t1

0x0af0,	// (0x00018b30) navi_slider_pane

0x00dc,	// (0x0001811c) zooming_pane

0x0af8,	// (0x00018b38) navi_slider_pane_g1

0x664c,	// (0x0001e68c) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x000273af) navi_slider_pane_g

0x0b2e,	// (0x00018b6e) aid_levels_zoom

0x0b36,	// (0x00018b76) zooming_pane_g1

0x0b3e,	// (0x00018b7e) zooming_pane_g2

0x0b3e,	// (0x00018b7e) zooming_pane_g3

0x0002,

0xf37e,	// (0x000273be) zooming_pane_g

0x0b46,	// (0x00018b86) level_10_zoom

0x0b4f,	// (0x00018b8f) level_11_zoom

0x0b58,	// (0x00018b98) level_1_zoom

0x0b61,	// (0x00018ba1) level_2_zoom

0x0b6a,	// (0x00018baa) level_3_zoom

0x0b73,	// (0x00018bb3) level_4_zoom

0x0b7c,	// (0x00018bbc) level_5_zoom

0x0b85,	// (0x00018bc5) level_6_zoom

0x0b8e,	// (0x00018bce) level_7_zoom

0x0b97,	// (0x00018bd7) level_8_zoom

0x0ba0,	// (0x00018be0) level_9_zoom

0x0bb1,	// (0x00018bf1) popup_phob_thumbnail_window_g1

0x0bb9,	// (0x00018bf9) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x000273c5) popup_phob_thumbnail_window_g

0xa02f,	// (0x0002206f) level_1_location

0xa037,	// (0x00022077) level_2_location

0xa03f,	// (0x0002207f) level_3_location

0xa049,	// (0x00022089) level_4_location

0x00dc,	// (0x0001811c) level_5_location

0x96ae,	// (0x000216ee) mce_icon_pane_g1

0x96b6,	// (0x000216f6) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x000273ca) mce_icon_pane_g

0x96be,	// (0x000216fe) main_mup_pane_g1_ParamLimits

0x96be,	// (0x000216fe) main_mup_pane_g1

0xef1b,	// (0x00026f5b) main_mup_pane_g2_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g2

0xef1b,	// (0x00026f5b) main_mup_pane_g3_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g3

0xef1b,	// (0x00026f5b) main_mup_pane_g4_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g4

0xef1b,	// (0x00026f5b) main_mup_pane_g5_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g5

0xef1b,	// (0x00026f5b) main_mup_pane_g6_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g6

0xef1b,	// (0x00026f5b) main_mup_pane_g7_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g7

0xef1b,	// (0x00026f5b) main_mup_pane_g8_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g8

0xef1b,	// (0x00026f5b) main_mup_pane_g9_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g9

0xef1b,	// (0x00026f5b) main_mup_pane_g10_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g10

0xef1b,	// (0x00026f5b) main_mup_pane_g11_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g11

0xef0d,	// (0x00026f4d) main_mup_pane_g12_ParamLimits

0xef0d,	// (0x00026f4d) main_mup_pane_g12

0xef1b,	// (0x00026f5b) main_mup_pane_g13_ParamLimits

0xef1b,	// (0x00026f5b) main_mup_pane_g13

0x000c,

0xf38f,	// (0x000273cf) main_mup_pane_g_ParamLimits

0xf38f,	// (0x000273cf) main_mup_pane_g

0xef29,	// (0x00026f69) main_mup_pane_t1_ParamLimits

0xef29,	// (0x00026f69) main_mup_pane_t1

0xef29,	// (0x00026f69) main_mup_pane_t2_ParamLimits

0xef29,	// (0x00026f69) main_mup_pane_t2

0xef29,	// (0x00026f69) main_mup_pane_t3_ParamLimits

0xef29,	// (0x00026f69) main_mup_pane_t3

0x0be3,	// (0x00018c23) main_mup_pane_t4_ParamLimits

0x0be3,	// (0x00018c23) main_mup_pane_t4

0x0be3,	// (0x00018c23) main_mup_pane_t5_ParamLimits

0x0be3,	// (0x00018c23) main_mup_pane_t5

0x0103,	// (0x00018143) main_mup_pane_t6_ParamLimits

0x0103,	// (0x00018143) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x000273ea) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x000273ea) main_mup_pane_t

0xe82a,	// (0x0002686a) mup_progress_pane_ParamLimits

0xe82a,	// (0x0002686a) mup_progress_pane

0x2079,	// (0x0001a0b9) mup_visualizer_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup_visualizer_pane

0x2079,	// (0x0001a0b9) mup_volume_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup_volume_pane

0xef0d,	// (0x00026f4d) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x00026f4d) mup_visualizer_pane_g1

0x0c05,	// (0x00018c45) mup_visualizer_pane_g2_ParamLimits

0x0c05,	// (0x00018c45) mup_visualizer_pane_g2

0xeeff,	// (0x00026f3f) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x00026f3f) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x000273f7) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x000273f7) mup_visualizer_pane_g

0x0131,	// (0x00018171) mup_volume_pane_g1

0x0131,	// (0x00018171) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x000273fe) mup_volume_pane_g

0x0131,	// (0x00018171) mup_progress_pane_g1

0x0131,	// (0x00018171) mup_progress_pane_g2

0x0131,	// (0x00018171) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x00027403) mup_progress_pane_g

0xec29,	// (0x00026c69) bg_popup_window_pane_cp05

0x0c13,	// (0x00018c53) heading_pane_cp02_ParamLimits

0x0c13,	// (0x00018c53) heading_pane_cp02

0x0c2f,	// (0x00018c6f) list_popup_blid_pane

0x0c37,	// (0x00018c77) list_blid_sat_info_pane_ParamLimits

0x0c37,	// (0x00018c77) list_blid_sat_info_pane

0x0c4a,	// (0x00018c8a) list_blid_sat_info_pane_g1

0x0c52,	// (0x00018c92) list_blid_sat_info_pane_t1

0x97cd,	// (0x0002180d) mup_equalizer_pane_ParamLimits

0x97cd,	// (0x0002180d) mup_equalizer_pane

0x97ee,	// (0x0002182e) mup_equalizer_pane_cp1_ParamLimits

0x97ee,	// (0x0002182e) mup_equalizer_pane_cp1

0x980f,	// (0x0002184f) mup_equalizer_pane_cp2_ParamLimits

0x980f,	// (0x0002184f) mup_equalizer_pane_cp2

0x9830,	// (0x00021870) mup_equalizer_pane_cp3_ParamLimits

0x9830,	// (0x00021870) mup_equalizer_pane_cp3

0x9855,	// (0x00021895) mup_equalizer_pane_cp4_ParamLimits

0x9855,	// (0x00021895) mup_equalizer_pane_cp4

0x987a,	// (0x000218ba) mup_equalizer_pane_cp5

0x9892,	// (0x000218d2) mup_equalizer_pane_cp6

0x98aa,	// (0x000218ea) mup_equalizer_pane_cp7

0x1e21,	// (0x00019e61) bg_popup_call_poc_act_pane_g9

0x1e29,	// (0x00019e69) bg_popup_call_poc_act_pane_g10

0x1e31,	// (0x00019e71) bg_popup_call_poc_act_pane_g11

0x000a,

0xee84,	// (0x00026ec4) mup_scale_pane

0xee9c,	// (0x00026edc) mup_scale_pane_g1

0x0c60,	// (0x00018ca0) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0002741f) mup_scale_pane_g

0x0c84,	// (0x00018cc4) msg_data_pane

0x0c8c,	// (0x00018ccc) scroll_pane_cp017

0x98d4,	// (0x00021914) bg_list_pane_cp04_ParamLimits

0x98d4,	// (0x00021914) bg_list_pane_cp04

0x0c9c,	// (0x00018cdc) msg_data_pane_g1

0x98f4,	// (0x00021934) msg_data_pane_g2

0x98fe,	// (0x0002193e) msg_data_pane_g3

0x9908,	// (0x00021948) msg_data_pane_g4

0x9910,	// (0x00021950) msg_data_pane_g5

0x9918,	// (0x00021958) msg_data_pane_g6

0x9920,	// (0x00021960) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0002742e) msg_data_pane_g

0x9928,	// (0x00021968) msg_text_pane_ParamLimits

0x9928,	// (0x00021968) msg_text_pane

0x9959,	// (0x00021999) qrid_highlight_pane_cp011_ParamLimits

0x9959,	// (0x00021999) qrid_highlight_pane_cp011

0xec29,	// (0x00026c69) msg_body_pane

0xec29,	// (0x00026c69) msg_header_pane

0x0cad,	// (0x00018ced) input_focus_pane_cp07

0x997d,	// (0x000219bd) msg_header_pane_t1_ParamLimits

0x997d,	// (0x000219bd) msg_header_pane_t1

0x9993,	// (0x000219d3) msg_header_pane_t2_ParamLimits

0x9993,	// (0x000219d3) msg_header_pane_t2

0x0001,

0xf402,	// (0x00027442) msg_header_pane_t_ParamLimits

0xf402,	// (0x00027442) msg_header_pane_t

0x0cc2,	// (0x00018d02) msg_body_pane_g1

0x99aa,	// (0x000219ea) msg_body_pane_t1_ParamLimits

0x99aa,	// (0x000219ea) msg_body_pane_t1

0x0cca,	// (0x00018d0a) msg_body_pane_t2_ParamLimits

0x0cca,	// (0x00018d0a) msg_body_pane_t2

0x0cdc,	// (0x00018d1c) msg_body_pane_t3_ParamLimits

0x0cdc,	// (0x00018d1c) msg_body_pane_t3

0x0002,

0xf407,	// (0x00027447) msg_body_pane_t_ParamLimits

0xf407,	// (0x00027447) msg_body_pane_t

0x668e,	// (0x0001e6ce) main_viewer_pane_g1_ParamLimits

0x668e,	// (0x0001e6ce) main_viewer_pane_g1

0x669a,	// (0x0001e6da) main_viewer_pane_g2_ParamLimits

0x669a,	// (0x0001e6da) main_viewer_pane_g2

0x99fd,	// (0x00021a3d) main_viewer_pane_g3_ParamLimits

0x99fd,	// (0x00021a3d) main_viewer_pane_g3

0x9a0e,	// (0x00021a4e) main_viewer_pane_g4_ParamLimits

0x9a0e,	// (0x00021a4e) main_viewer_pane_g4

0x66a6,	// (0x0001e6e6) main_viewer_pane_g5_ParamLimits

0x66a6,	// (0x0001e6e6) main_viewer_pane_g5

0x66a6,	// (0x0001e6e6) main_viewer_pane_g7_ParamLimits

0x66a6,	// (0x0001e6e6) main_viewer_pane_g7

0x66b8,	// (0x0001e6f8) main_viewer_pane_g8_ParamLimits

0x66b8,	// (0x0001e6f8) main_viewer_pane_g8

0x0007,

0xf417,	// (0x00027457) main_viewer_pane_g_ParamLimits

0xf417,	// (0x00027457) main_viewer_pane_g

0x0d30,	// (0x00018d70) viewer_content_pane_ParamLimits

0x0d30,	// (0x00018d70) viewer_content_pane

0x9a3f,	// (0x00021a7f) main_postcard_pane_g1_ParamLimits

0x9a3f,	// (0x00021a7f) main_postcard_pane_g1

0x9a4d,	// (0x00021a8d) main_postcard_pane_g2_ParamLimits

0x9a4d,	// (0x00021a8d) main_postcard_pane_g2

0x9a5b,	// (0x00021a9b) main_postcard_pane_g3_ParamLimits

0x9a5b,	// (0x00021a9b) main_postcard_pane_g3

0x0005,

0xf428,	// (0x00027468) main_postcard_pane_g_ParamLimits

0xf428,	// (0x00027468) main_postcard_pane_g

0x9a6b,	// (0x00021aab) main_postcard_pane_g4

0x1fbf,	// (0x00019fff) smil_status_volume_pane_g2

0x9a97,	// (0x00021ad7) postcard_pane_ParamLimits

0x9a97,	// (0x00021ad7) postcard_pane

0x15c6,	// (0x00019606) postcard_pane_g1_ParamLimits

0x15c6,	// (0x00019606) postcard_pane_g1

0x9ad1,	// (0x00021b11) postcard_pane_g2_ParamLimits

0x9ad1,	// (0x00021b11) postcard_pane_g2

0x9add,	// (0x00021b1d) postcard_pane_g3_ParamLimits

0x9add,	// (0x00021b1d) postcard_pane_g3

0x0d4c,	// (0x00018d8c) postcard_pane_g4_ParamLimits

0x0d4c,	// (0x00018d8c) postcard_pane_g4

0x9ae9,	// (0x00021b29) postcard_pane_g5_ParamLimits

0x9ae9,	// (0x00021b29) postcard_pane_g5

0x9af5,	// (0x00021b35) postcard_pane_g6_ParamLimits

0x9af5,	// (0x00021b35) postcard_pane_g6

0x0d3e,	// (0x00018d7e) postcard_pane_g7_ParamLimits

0x0d3e,	// (0x00018d7e) postcard_pane_g7

0x0006,

0xf435,	// (0x00027475) postcard_pane_g_ParamLimits

0xf435,	// (0x00027475) postcard_pane_g

0x9b03,	// (0x00021b43) main_mp2_pane_g1_ParamLimits

0x9b03,	// (0x00021b43) main_mp2_pane_g1

0x9b11,	// (0x00021b51) main_mp2_pane_g2_ParamLimits

0x9b11,	// (0x00021b51) main_mp2_pane_g2

0x9b1d,	// (0x00021b5d) main_mp2_pane_g3_ParamLimits

0x9b1d,	// (0x00021b5d) main_mp2_pane_g3

0x0002,

0xf444,	// (0x00027484) main_mp2_pane_g_ParamLimits

0xf444,	// (0x00027484) main_mp2_pane_g

0x9b29,	// (0x00021b69) main_mp2_pane_t1_ParamLimits

0x9b29,	// (0x00021b69) main_mp2_pane_t1

0x9b40,	// (0x00021b80) main_mp2_pane_t2_ParamLimits

0x9b40,	// (0x00021b80) main_mp2_pane_t2

0x9b54,	// (0x00021b94) main_mp2_pane_t3_ParamLimits

0x9b54,	// (0x00021b94) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0002748b) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0002748b) main_mp2_pane_t

0x0d5a,	// (0x00018d9a) pec_content_pane_ParamLimits

0x0d5a,	// (0x00018d9a) pec_content_pane

0x0296,	// (0x000182d6) scroll_pane_cp015

0x0d6c,	// (0x00018dac) pec_attribute_pane_ParamLimits

0x0d6c,	// (0x00018dac) pec_attribute_pane

0x9b66,	// (0x00021ba6) pec_content_pane_g1_ParamLimits

0x9b66,	// (0x00021ba6) pec_content_pane_g1

0x0d7c,	// (0x00018dbc) pec_content_pane_t1_ParamLimits

0x0d7c,	// (0x00018dbc) pec_content_pane_t1

0x0d8e,	// (0x00018dce) pec_content_pane_t2_ParamLimits

0x0d8e,	// (0x00018dce) pec_content_pane_t2

0x0001,

0xf452,	// (0x00027492) pec_content_pane_t_ParamLimits

0xf452,	// (0x00027492) pec_content_pane_t

0x9b72,	// (0x00021bb2) list_single_graphic_pane_cp01_ParamLimits

0x9b72,	// (0x00021bb2) list_single_graphic_pane_cp01

0xee84,	// (0x00026ec4) bg_popup_sub_pane_cp04

0x0da0,	// (0x00018de0) popup_mup_playback_window_g1

0x0dac,	// (0x00018dec) popup_mup_playback_window_t1

0x0dc1,	// (0x00018e01) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x00027497) popup_mup_playback_window_t

0x0df8,	// (0x00018e38) main_image_pane_g1_ParamLimits

0x0df8,	// (0x00018e38) main_image_pane_g1

0x0e3b,	// (0x00018e7b) scroll_pane_cp018_ParamLimits

0x0e3b,	// (0x00018e7b) scroll_pane_cp018

0x0e53,	// (0x00018e93) scroll_pane_cp016_ParamLimits

0x0e53,	// (0x00018e93) scroll_pane_cp016

0x9c00,	// (0x00021c40) smil2_image_pane_ParamLimits

0x9c00,	// (0x00021c40) smil2_image_pane

0x9c36,	// (0x00021c76) smil2_root_pane_ParamLimits

0x9c36,	// (0x00021c76) smil2_root_pane

0x9c62,	// (0x00021ca2) smil2_text_pane_ParamLimits

0x9c62,	// (0x00021ca2) smil2_text_pane

0xec29,	// (0x00026c69) bg_list_pane_cp06

0x0e8f,	// (0x00018ecf) grid_radio_pane

0xec29,	// (0x00026c69) bg_popup_window_pane_cp06

0x0e99,	// (0x00018ed9) main_fmradio_pane_t1

0x1e39,	// (0x00019e79) heading_pane_cp04

0x0ea7,	// (0x00018ee7) main_fmradio_pane_t2

0x1e41,	// (0x00019e81) popup_cale_lunar_info_window_g1

0x0eb5,	// (0x00018ef5) main_fmradio_pane_t3

0x1e49,	// (0x00019e89) popup_cale_lunar_info_window_g2

0x0ec5,	// (0x00018f05) main_fmradio_pane_t4

0x0001,

0x0ed3,	// (0x00018f13) main_fmradio_pane_t5

0x0004,

0xf537,	// (0x00027577) popup_cale_lunar_info_window_g

0xf46c,	// (0x000274ac) main_fmradio_pane_t

0x0ee1,	// (0x00018f21) wait_bar_pane_cp03

0x0ee9,	// (0x00018f29) cell_fmradio_pane_ParamLimits

0x0ee9,	// (0x00018f29) cell_fmradio_pane

0x0d3e,	// (0x00018d7e) cell_fmradio_pane_g1_ParamLimits

0x0d3e,	// (0x00018d7e) cell_fmradio_pane_g1

0xec29,	// (0x00026c69) grid_highlight_pane_cp011

0x0efe,	// (0x00018f3e) poc_content_pane_ParamLimits

0x0efe,	// (0x00018f3e) poc_content_pane

0x0f10,	// (0x00018f50) scroll_pane_cp019

0x9ca2,	// (0x00021ce2) popup_call_poc_act_window_ParamLimits

0x9ca2,	// (0x00021ce2) popup_call_poc_act_window

0x9caf,	// (0x00021cef) popup_call_poc_inact_window_ParamLimits

0x9caf,	// (0x00021cef) popup_call_poc_inact_window

0xf50e,	// (0x0002754e) bg_popup_call_poc_act_pane_g

0x1db1,	// (0x00019df1) bg_popup_call_poc_inact_pane_g1

0x1db9,	// (0x00019df9) bg_popup_call_poc_inact_pane_g2

0x0f18,	// (0x00018f58) popup_call_poc_act_window_g2

0x1dc1,	// (0x00019e01) bg_popup_call_poc_inact_pane_g3

0x1dc9,	// (0x00019e09) bg_popup_call_poc_inact_pane_g4

0x1dd1,	// (0x00019e11) bg_popup_call_poc_inact_pane_g5

0x0f20,	// (0x00018f60) popup_call_poc_act_window_t1_ParamLimits

0x0f20,	// (0x00018f60) popup_call_poc_act_window_t1

0x0f48,	// (0x00018f88) popup_call_poc_act_window_t2_ParamLimits

0x0f48,	// (0x00018f88) popup_call_poc_act_window_t2

0x0f70,	// (0x00018fb0) popup_call_poc_act_window_t3_ParamLimits

0x0f70,	// (0x00018fb0) popup_call_poc_act_window_t3

0x0f98,	// (0x00018fd8) popup_call_poc_act_window_t4_ParamLimits

0x0f98,	// (0x00018fd8) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x000274b7) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x000274b7) popup_call_poc_act_window_t

0x1dd9,	// (0x00019e19) bg_popup_call_poc_inact_pane_g6

0x1de1,	// (0x00019e21) bg_popup_call_poc_inact_pane_g7

0x1de9,	// (0x00019e29) bg_popup_call_poc_inact_pane_g8

0x0faa,	// (0x00018fea) popup_call_poc_inact_window_g2

0x1df1,	// (0x00019e31) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4fb,	// (0x0002753b) bg_popup_call_poc_inact_pane_g

0x0fb2,	// (0x00018ff2) popup_call_poc_inact_window_t1_ParamLimits

0x0fb2,	// (0x00018ff2) popup_call_poc_inact_window_t1

0x0fc7,	// (0x00019007) popup_call_poc_inact_window_t2_ParamLimits

0x0fc7,	// (0x00019007) popup_call_poc_inact_window_t2

0x0fdc,	// (0x0001901c) popup_call_poc_inact_window_t3_ParamLimits

0x0fdc,	// (0x0001901c) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x000274c0) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x000274c0) popup_call_poc_inact_window_t

0x1f37,	// (0x00019f77) context_pane_ParamLimits

0xa1b2,	// (0x000221f2) signal_pane_ParamLimits

0x00dc,	// (0x0001811c) main_call2_pane

0x6837,	// (0x0001e877) popup_phob_thumbnail2_window_ParamLimits

0x6837,	// (0x0001e877) popup_phob_thumbnail2_window

0x665e,	// (0x0001e69e) aid_hotspot_pointer_arrow_pane

0x6666,	// (0x0001e6a6) aid_hotspot_pointer_hand_pane

0x9ff7,	// (0x00022037) phob_pre_status_pane_g5

0xeef1,	// (0x00026f31) cams_zoom_pane_ParamLimits

0xeef1,	// (0x00026f31) image_vga_pane_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g1_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g3_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g4_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g5_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g6_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x000271eb) main_camera_pane_g_ParamLimits

0x0be3,	// (0x00018c23) main_camera_pane_t1_ParamLimits

0x0be3,	// (0x00018c23) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x000271fc) main_camera_pane_t_ParamLimits

0xee84,	// (0x00026ec4) bg_popup_preview_window_pane_cp01_ParamLimits

0xee84,	// (0x00026ec4) bg_popup_preview_window_pane_cp01

0x0ff1,	// (0x00019031) popup_phob_thumbnail2_window_g1_ParamLimits

0x0ff1,	// (0x00019031) popup_phob_thumbnail2_window_g1

0xec29,	// (0x00026c69) call2_cli_visual_pane

0x9ccb,	// (0x00021d0b) popup_call2_audio_conf_window_ParamLimits

0x9ccb,	// (0x00021d0b) popup_call2_audio_conf_window

0x9ce4,	// (0x00021d24) popup_call2_audio_first_window_ParamLimits

0x9ce4,	// (0x00021d24) popup_call2_audio_first_window

0x9d82,	// (0x00021dc2) popup_call2_audio_in_window_ParamLimits

0x9d82,	// (0x00021dc2) popup_call2_audio_in_window

0x9dc6,	// (0x00021e06) popup_call2_audio_out_window_ParamLimits

0x9dc6,	// (0x00021e06) popup_call2_audio_out_window

0x9e30,	// (0x00021e70) popup_call2_audio_second_window_ParamLimits

0x9e30,	// (0x00021e70) popup_call2_audio_second_window

0x9e8e,	// (0x00021ece) popup_call2_audio_wait_window_ParamLimits

0x9e8e,	// (0x00021ece) popup_call2_audio_wait_window

0xec29,	// (0x00026c69) bg_popup_call2_act_pane_cp03

0xee66,	// (0x00026ea6) list_conf_pane_cp

0x0ffd,	// (0x0001903d) popup_call2_audio_conf_window_t1

0x100b,	// (0x0001904b) list_single_graphic_popup_conf2_pane_ParamLimits

0x100b,	// (0x0001904b) list_single_graphic_popup_conf2_pane

0x0919,	// (0x00018959) list_highlight_pane_cp04

0x101e,	// (0x0001905e) list_single_graphic_popup_conf2_pane_g1

0x092a,	// (0x0001896a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x000274c7) list_single_graphic_popup_conf2_pane_g

0x1028,	// (0x00019068) list_single_graphic_popup_conf2_pane_t1

0x1036,	// (0x00019076) bg_popup_call2_act_pane_cp01_ParamLimits

0x1036,	// (0x00019076) bg_popup_call2_act_pane_cp01

0x10c0,	// (0x00019100) call_type_pane_cp05_ParamLimits

0x10c0,	// (0x00019100) call_type_pane_cp05

0x1114,	// (0x00019154) popup_call2_audio_second_window_g1_ParamLimits

0x1114,	// (0x00019154) popup_call2_audio_second_window_g1

0x1168,	// (0x000191a8) popup_call2_audio_second_window_g2_ParamLimits

0x1168,	// (0x000191a8) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x000274cc) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x000274cc) popup_call2_audio_second_window_g

0x11cd,	// (0x0001920d) popup_call2_audio_second_window_t1_ParamLimits

0x11cd,	// (0x0001920d) popup_call2_audio_second_window_t1

0x1288,	// (0x000192c8) popup_call2_audio_second_window_t2_ParamLimits

0x1288,	// (0x000192c8) popup_call2_audio_second_window_t2

0x12db,	// (0x0001931b) popup_call2_audio_second_window_t3_ParamLimits

0x12db,	// (0x0001931b) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x000274d3) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x000274d3) popup_call2_audio_second_window_t

0xec29,	// (0x00026c69) bg_popup_call2_in_pane_cp02

0xec33,	// (0x00026c73) call_type_pane_cp04

0x9ecd,	// (0x00021f0d) popup_call2_audio_wait_window_g1

0x9ed5,	// (0x00021f15) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x000274dc) popup_call2_audio_wait_window_g

0xec4b,	// (0x00026c8b) popup_call2_audio_wait_window_t3

0x13ce,	// (0x0001940e) bg_popup_call2_act_pane_ParamLimits

0x13ce,	// (0x0001940e) bg_popup_call2_act_pane

0x148e,	// (0x000194ce) call_type_pane_cp03_ParamLimits

0x148e,	// (0x000194ce) call_type_pane_cp03

0x14f2,	// (0x00019532) popup_call2_audio_first_window_g1_ParamLimits

0x14f2,	// (0x00019532) popup_call2_audio_first_window_g1

0x1562,	// (0x000195a2) popup_call2_audio_first_window_g2_ParamLimits

0x1562,	// (0x000195a2) popup_call2_audio_first_window_g2

0x15c6,	// (0x00019606) popup_call2_audio_first_window_g3_ParamLimits

0x15c6,	// (0x00019606) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x000274e1) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x000274e1) popup_call2_audio_first_window_g

0x164e,	// (0x0001968e) popup_call2_audio_first_window_t1_ParamLimits

0x164e,	// (0x0001968e) popup_call2_audio_first_window_t1

0x1751,	// (0x00019791) popup_call2_audio_first_window_t4_ParamLimits

0x1751,	// (0x00019791) popup_call2_audio_first_window_t4

0x1834,	// (0x00019874) popup_call2_audio_first_window_t5_ParamLimits

0x1834,	// (0x00019874) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x000274ec) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x000274ec) popup_call2_audio_first_window_t

0xee7c,	// (0x00026ebc) bg_popup_call2_act_pane_g1

0x1e53,	// (0x00019e93) popup_cale_lunar_info_window_t1

0x1e61,	// (0x00019ea1) popup_cale_lunar_info_window_t2

0x1e6f,	// (0x00019eaf) popup_cale_lunar_info_window_t3

0xec29,	// (0x00026c69) bg_popup_call2_bubble_pane

0x1935,	// (0x00019975) bg_popup_call2_in_pane_cp01_ParamLimits

0x1935,	// (0x00019975) bg_popup_call2_in_pane_cp01

0xe905,	// (0x00026945) call_type_pane_cp02

0x9edd,	// (0x00021f1d) popup_call2_audio_out_window_g1_ParamLimits

0x9edd,	// (0x00021f1d) popup_call2_audio_out_window_g1

0x197d,	// (0x000199bd) popup_call2_audio_out_window_g2_ParamLimits

0x197d,	// (0x000199bd) popup_call2_audio_out_window_g2

0x9f09,	// (0x00021f49) popup_call2_audio_out_window_g3_ParamLimits

0x9f09,	// (0x00021f49) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x000274f5) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x000274f5) popup_call2_audio_out_window_g

0x19b4,	// (0x000199f4) popup_call2_audio_out_window_t1_ParamLimits

0x19b4,	// (0x000199f4) popup_call2_audio_out_window_t1

0x1a13,	// (0x00019a53) popup_call2_audio_out_window_t2_ParamLimits

0x1a13,	// (0x00019a53) popup_call2_audio_out_window_t2

0x1a67,	// (0x00019aa7) popup_call2_audio_out_window_t3_ParamLimits

0x1a67,	// (0x00019aa7) popup_call2_audio_out_window_t3

0x1a7d,	// (0x00019abd) popup_call2_audio_out_window_t4_ParamLimits

0x1a7d,	// (0x00019abd) popup_call2_audio_out_window_t4

0x1a93,	// (0x00019ad3) popup_call2_audio_out_window_t5_ParamLimits

0x1a93,	// (0x00019ad3) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x000274fe) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x000274fe) popup_call2_audio_out_window_t

0x1af7,	// (0x00019b37) bg_popup_call2_in_pane_ParamLimits

0x1af7,	// (0x00019b37) bg_popup_call2_in_pane

0x1b53,	// (0x00019b93) popup_call2_audio_in_window_g1_ParamLimits

0x1b53,	// (0x00019b93) popup_call2_audio_in_window_g1

0x1b8b,	// (0x00019bcb) popup_call2_audio_in_window_g2_ParamLimits

0x1b8b,	// (0x00019bcb) popup_call2_audio_in_window_g2

0x1bc3,	// (0x00019c03) popup_call2_audio_in_window_g3_ParamLimits

0x1bc3,	// (0x00019c03) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0002750b) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0002750b) popup_call2_audio_in_window_g

0x1c1b,	// (0x00019c5b) popup_call2_audio_in_window_t1_ParamLimits

0x1c1b,	// (0x00019c5b) popup_call2_audio_in_window_t1

0x1c9b,	// (0x00019cdb) popup_call2_audio_in_window_t2_ParamLimits

0x1c9b,	// (0x00019cdb) popup_call2_audio_in_window_t2

0x1d1b,	// (0x00019d5b) popup_call2_audio_in_window_t3_ParamLimits

0x1d1b,	// (0x00019d5b) popup_call2_audio_in_window_t3

0x1d35,	// (0x00019d75) popup_call2_audio_in_window_t4_ParamLimits

0x1d35,	// (0x00019d75) popup_call2_audio_in_window_t4

0x1d47,	// (0x00019d87) popup_call2_audio_in_window_t5_ParamLimits

0x1d47,	// (0x00019d87) popup_call2_audio_in_window_t5

0x1d5c,	// (0x00019d9c) popup_call2_audio_in_window_t6_ParamLimits

0x1d5c,	// (0x00019d9c) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x00027514) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x00027514) popup_call2_audio_in_window_t

0xee7c,	// (0x00026ebc) bg_popup_call2_in_pane_g1

0x1e7d,	// (0x00019ebd) popup_cale_lunar_info_window_t4

0x0003,

0xf53c,	// (0x0002757c) popup_cale_lunar_info_window_t

0xee84,	// (0x00026ec4) bg_popup_call2_rect_pane_ParamLimits

0xee84,	// (0x00026ec4) bg_popup_call2_rect_pane

0xec29,	// (0x00026c69) call2_cli_visual_graphic_pane

0xec29,	// (0x00026c69) call2_cli_visual_text_pane

0x688a,	// (0x0001e8ca) smil_status_volume_pane_g3

0x0002,

0xee9c,	// (0x00026edc) call2_cli_visual_graphic_pane_g1

0xee9c,	// (0x00026edc) call2_cli_visual_graphic_pane_g2

0xee9c,	// (0x00026edc) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x00027521) call2_cli_visual_graphic_pane_g

0x1d71,	// (0x00019db1) bg_popup_call2_rect_pane_g1

0xf051,	// (0x00027091) bg_popup_call2_rect_pane_g2

0x1d79,	// (0x00019db9) bg_popup_call2_rect_pane_g3

0x1d81,	// (0x00019dc1) bg_popup_call2_rect_pane_g4

0x1d89,	// (0x00019dc9) bg_popup_call2_rect_pane_g5

0x1d91,	// (0x00019dd1) bg_popup_call2_rect_pane_g6

0x1d99,	// (0x00019dd9) bg_popup_call2_rect_pane_g7

0x1da1,	// (0x00019de1) bg_popup_call2_rect_pane_g8

0x1da9,	// (0x00019de9) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x00027528) bg_popup_call2_rect_pane_g

0x1db1,	// (0x00019df1) bg_popup_call2_bubble_pane_g1

0x1db9,	// (0x00019df9) bg_popup_call2_bubble_pane_g2

0x1dc1,	// (0x00019e01) bg_popup_call2_bubble_pane_g3

0x1dc9,	// (0x00019e09) bg_popup_call2_bubble_pane_g4

0x1dd1,	// (0x00019e11) bg_popup_call2_bubble_pane_g5

0x1dd9,	// (0x00019e19) bg_popup_call2_bubble_pane_g6

0x1de1,	// (0x00019e21) bg_popup_call2_bubble_pane_g7

0x1de9,	// (0x00019e29) bg_popup_call2_bubble_pane_g8

0x1df1,	// (0x00019e31) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0002753b) bg_popup_call2_bubble_pane_g

0x7ad9,	// (0x0001fb19) aid_cale_week_size_cell_pane

0xee84,	// (0x00026ec4) aid_cams_cif_uncrop_pane_ParamLimits

0xee84,	// (0x00026ec4) aid_cams_cif_uncrop_pane

0x8184,	// (0x000201c4) aid_cams_size_cell_ParamLimits

0x8184,	// (0x000201c4) aid_cams_size_cell

0x8190,	// (0x000201d0) grid_cams_pane_ParamLimits

0x819e,	// (0x000201de) linegrid_cams_pane_ParamLimits

0x826f,	// (0x000202af) call_video_pane_t1

0x828c,	// (0x000202cc) call_video_pane_t2

0x0001,

0xf208,	// (0x00027248) call_video_pane_t

0x86fb,	// (0x0002073b) aid_cale_month_size_cell_pane_ParamLimits

0x86fb,	// (0x0002073b) aid_cale_month_size_cell_pane

0xf580,	// (0x000275c0) smil_status_volume_pane_g

0x6897,	// (0x0001e8d7) volume_smil_pane_ParamLimits

0x5f9f,	// (0x0001dfdf) aid_popup2_width_pane

0x7a1f,	// (0x0001fa5f) cell_qdial_pane_g4_ParamLimits

0x7a1f,	// (0x0001fa5f) cell_qdial_pane_g4

0x94fb,	// (0x0002153b) aid_blid_cardinal_pane_ParamLimits

0x950b,	// (0x0002154b) aid_blid_destination_pane_ParamLimits

0x950b,	// (0x0002154b) aid_blid_destination_pane

0xee84,	// (0x00026ec4) bg_popup_call_poc_act_pane_ParamLimits

0xee84,	// (0x00026ec4) bg_popup_call_poc_act_pane

0xee84,	// (0x00026ec4) bg_popup_call_poc_inact_pane_ParamLimits

0xee84,	// (0x00026ec4) bg_popup_call_poc_inact_pane

0x1df9,	// (0x00019e39) bg_popup_call_poc_act_pane_g1

0x1e01,	// (0x00019e41) bg_popup_call_poc_act_pane_g2

0x1e09,	// (0x00019e49) bg_popup_call_poc_act_pane_g3

0x1dc9,	// (0x00019e09) bg_popup_call_poc_act_pane_g4

0x1dd1,	// (0x00019e11) bg_popup_call_poc_act_pane_g5

0x1e11,	// (0x00019e51) bg_popup_call_poc_act_pane_g6

0x1de1,	// (0x00019e21) bg_popup_call_poc_act_pane_g7

0x1e19,	// (0x00019e59) bg_popup_call_poc_act_pane_g8

0xec29,	// (0x00026c69) main_usb_pane

0x6754,	// (0x0001e794) popup_cale_lunar_info_window

0x85a4,	// (0x000205e4) im_reading_pane_t1_ParamLimits

0x01ee,	// (0x0001822e) list_im_pane_ParamLimits

0x01ff,	// (0x0001823f) scroll_pane_cp07_ParamLimits

0xec29,	// (0x00026c69) grid_highlight_pane_cp012

0xee84,	// (0x00026ec4) mup_scale_pane_ParamLimits

0x15c6,	// (0x00019606) main_usb_pane_g1_ParamLimits

0x15c6,	// (0x00019606) main_usb_pane_g1

0x9f5f,	// (0x00021f9f) main_usb_pane_g2_ParamLimits

0x9f5f,	// (0x00021f9f) main_usb_pane_g2

0x0001,

0xf525,	// (0x00027565) main_usb_pane_g_ParamLimits

0xf525,	// (0x00027565) main_usb_pane_g

0x9f6b,	// (0x00021fab) main_usb_pane_t1_ParamLimits

0x9f6b,	// (0x00021fab) main_usb_pane_t1

0x9f7d,	// (0x00021fbd) main_usb_pane_t2_ParamLimits

0x9f7d,	// (0x00021fbd) main_usb_pane_t2

0x9f8f,	// (0x00021fcf) main_usb_pane_t3_ParamLimits

0x9f8f,	// (0x00021fcf) main_usb_pane_t3

0x9fa1,	// (0x00021fe1) main_usb_pane_t4_ParamLimits

0x9fa1,	// (0x00021fe1) main_usb_pane_t4

0x9fb3,	// (0x00021ff3) main_usb_pane_t5_ParamLimits

0x9fb3,	// (0x00021ff3) main_usb_pane_t5

0x9fc5,	// (0x00022005) main_usb_pane_t6_ParamLimits

0x9fc5,	// (0x00022005) main_usb_pane_t6

0x0005,

0xf52a,	// (0x0002756a) main_usb_pane_t_ParamLimits

0x949a,	// (0x000214da) aid_text_placing

0x94a5,	// (0x000214e5) main_location2_pane_t1_ParamLimits

0x94bb,	// (0x000214fb) main_location2_pane_t2_ParamLimits

0x94d1,	// (0x00021511) main_location2_pane_t3_ParamLimits

0x94e7,	// (0x00021527) main_location2_pane_t4_ParamLimits

0x94e7,	// (0x00021527) main_location2_pane_t4

0xf344,	// (0x00027384) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x00026ef2) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x00026ef2) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00027100) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00027100) find_pinb_pane_g

0xeebe,	// (0x00026efe) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x00026f10) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00027105) find_pinb_pane_t_ParamLimits

0xec29,	// (0x00026c69) main_call3_pane

0x8cae,	// (0x00020cee) cale_month_day_heading_pane_t1_ParamLimits

0x8d30,	// (0x00020d70) cale_month_day_heading_pane_t2_ParamLimits

0x8da9,	// (0x00020de9) cale_month_day_heading_pane_t3_ParamLimits

0x8e22,	// (0x00020e62) cale_month_day_heading_pane_t4_ParamLimits

0x8e9b,	// (0x00020edb) cale_month_day_heading_pane_t5_ParamLimits

0x8f1c,	// (0x00020f5c) cale_month_day_heading_pane_t6_ParamLimits

0x8fa5,	// (0x00020fe5) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00027280) cale_month_day_heading_pane_t_ParamLimits

0x047e,	// (0x000184be) smil_status_volume_pane

0x9ab5,	// (0x00021af5) postcard_address_pane_ParamLimits

0x9ab5,	// (0x00021af5) postcard_address_pane

0x9ac3,	// (0x00021b03) postcard_message_pane_ParamLimits

0x9ac3,	// (0x00021b03) postcard_message_pane

0x9f35,	// (0x00021f75) call2_cli_visual_pane_t1_ParamLimits

0x9f35,	// (0x00021f75) call2_cli_visual_pane_t1

0x201f,	// (0x0001a05f) postcard_message_pane_t1_ParamLimits

0x201f,	// (0x0001a05f) postcard_message_pane_t1

0x2007,	// (0x0001a047) postcard_address_pane_t1_ParamLimits

0x2007,	// (0x0001a047) postcard_address_pane_t1

0xa2fc,	// (0x0002233c) popup_call3_audio_in_window_ParamLimits

0xa2fc,	// (0x0002233c) popup_call3_audio_in_window

0xa1da,	// (0x0002221a) bg_popup_call3_in_pane_ParamLimits

0xa1da,	// (0x0002221a) bg_popup_call3_in_pane

0xa242,	// (0x00022282) popup_call3_audio_in_window_g1_ParamLimits

0xa242,	// (0x00022282) popup_call3_audio_in_window_g1

0xa25a,	// (0x0002229a) popup_call3_audio_in_window_g2_ParamLimits

0xa25a,	// (0x0002229a) popup_call3_audio_in_window_g2

0xa272,	// (0x000222b2) popup_call3_audio_in_window_g3_ParamLimits

0xa272,	// (0x000222b2) popup_call3_audio_in_window_g3

0x0003,

0xf587,	// (0x000275c7) popup_call3_audio_in_window_g_ParamLimits

0xf587,	// (0x000275c7) popup_call3_audio_in_window_g

0xa29a,	// (0x000222da) popup_call3_audio_in_window_t1_ParamLimits

0xa29a,	// (0x000222da) popup_call3_audio_in_window_t1

0xa2c2,	// (0x00022302) popup_call3_audio_in_window_t2_ParamLimits

0xa2c2,	// (0x00022302) popup_call3_audio_in_window_t2

0xa2ea,	// (0x0002232a) popup_call3_audio_in_window_t3_ParamLimits

0xa2ea,	// (0x0002232a) popup_call3_audio_in_window_t3

0x0002,

0xf590,	// (0x000275d0) popup_call3_audio_in_window_t_ParamLimits

0xf590,	// (0x000275d0) popup_call3_audio_in_window_t

0x00dc,	// (0x0001811c) bg_popup_call3_rect_pane

0x1d71,	// (0x00019db1) bg_popup_call3_rect_pane_g1

0xf051,	// (0x00027091) bg_popup_call3_rect_pane_g2

0x1d79,	// (0x00019db9) bg_popup_call3_rect_pane_g3

0x1d81,	// (0x00019dc1) bg_popup_call3_rect_pane_g4

0x1d89,	// (0x00019dc9) bg_popup_call3_rect_pane_g5

0x1d91,	// (0x00019dd1) bg_popup_call3_rect_pane_g6

0x1d99,	// (0x00019dd9) bg_popup_call3_rect_pane_g7

0xe7c9,	// (0x00026809) mup_visualizer_osc_pane

0xe7c9,	// (0x00026809) mup_visualizer_spec_pane

0xa1fa,	// (0x0002223a) call3_video_qcif_pane_ParamLimits

0xa1fa,	// (0x0002223a) call3_video_qcif_pane

0xa20c,	// (0x0002224c) call3_video_qcif_uncrop_pane_ParamLimits

0xa20c,	// (0x0002224c) call3_video_qcif_uncrop_pane

0xa21c,	// (0x0002225c) call3_video_subqcif_pane_ParamLimits

0xa21c,	// (0x0002225c) call3_video_subqcif_pane

0xa230,	// (0x00022270) call3_video_subqcif_uncrop_pane_ParamLimits

0xa230,	// (0x00022270) call3_video_subqcif_uncrop_pane

0xa28a,	// (0x000222ca) popup_call3_audio_in_window_g4_ParamLimits

0xa28a,	// (0x000222ca) popup_call3_audio_in_window_g4

0xe7c9,	// (0x00026809) mup_spec_half_pane

0xe7c9,	// (0x00026809) mup_spec_half_pane_cp

0xe7c9,	// (0x00026809) mup_osc_middle_pane

0x0131,	// (0x00018171) mup_visualizer_osc_pane_g1

0x1f98,	// (0x00019fd8) mup_spec_bar_pane_ParamLimits

0x1f98,	// (0x00019fd8) mup_spec_bar_pane

0x0131,	// (0x00018171) mup_spec_bar_pane_g1

0x0131,	// (0x00018171) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x000273fe) mup_spec_bar_pane_g

0x7ad9,	// (0x0001fb19) aid_cale_week_size_cell_pane_ParamLimits

0x7af3,	// (0x0001fb33) bg_cale_heading_pane_ParamLimits

0x7b1c,	// (0x0001fb5c) bg_cale_pane_cp01_ParamLimits

0x7b3e,	// (0x0001fb7e) cale_week_corner_pane_ParamLimits

0x7b5d,	// (0x0001fb9d) cale_week_day_heading_pane_ParamLimits

0x7b8b,	// (0x0001fbcb) cale_week_scroll_pane_g1_ParamLimits

0x7baf,	// (0x0001fbef) cale_week_scroll_pane_g2_ParamLimits

0x7bc7,	// (0x0001fc07) cale_week_scroll_pane_g3_ParamLimits

0x7bdf,	// (0x0001fc1f) cale_week_scroll_pane_g4_ParamLimits

0x7bf7,	// (0x0001fc37) cale_week_scroll_pane_g5_ParamLimits

0x7c0f,	// (0x0001fc4f) cale_week_scroll_pane_g6_ParamLimits

0x7c2f,	// (0x0001fc6f) cale_week_scroll_pane_g7_ParamLimits

0x7c4f,	// (0x0001fc8f) cale_week_scroll_pane_g8_ParamLimits

0x7c6f,	// (0x0001fcaf) cale_week_scroll_pane_g9_ParamLimits

0x7c8c,	// (0x0001fccc) cale_week_scroll_pane_g10_ParamLimits

0x7ca9,	// (0x0001fce9) cale_week_scroll_pane_g11_ParamLimits

0x7cc8,	// (0x0001fd08) cale_week_scroll_pane_g12_ParamLimits

0x7ced,	// (0x0001fd2d) cale_week_scroll_pane_g13_ParamLimits

0x7d16,	// (0x0001fd56) cale_week_scroll_pane_g14_ParamLimits

0x7d3f,	// (0x0001fd7f) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x00027191) cale_week_scroll_pane_g_ParamLimits

0x7d88,	// (0x0001fdc8) cale_week_time_pane_ParamLimits

0x7da8,	// (0x0001fde8) grid_cale_week_pane_ParamLimits

0x0052,	// (0x00018092) listscroll_cale_week_pane_t1

0x0064,	// (0x000180a4) scroll_pane_cp08_ParamLimits

0x8773,	// (0x000207b3) cale_month_corner_pane_ParamLimits

0x0448,	// (0x00018488) cale_month_pane_t1

0x8c35,	// (0x00020c75) cale_month_week_pane_ParamLimits

0x15c6,	// (0x00019606) popup_call_status_window_g1_ParamLimits

0x934d,	// (0x0002138d) popup_call_status_window_g2_ParamLimits

0x9359,	// (0x00021399) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0002730b) popup_call_status_window_g_ParamLimits

0x083f,	// (0x0001887f) aid_call2_pane

0x996f,	// (0x000219af) msg_header_pane_g1

0x9ab5,	// (0x00021af5) postcard_address2_pane_ParamLimits

0x9ab5,	// (0x00021af5) postcard_address2_pane

0x9ac3,	// (0x00021b03) postcard_message2_pane_ParamLimits

0x9ac3,	// (0x00021b03) postcard_message2_pane

0xa1c0,	// (0x00022200) message2_row_pane_ParamLimits

0xa1c0,	// (0x00022200) message2_row_pane

0x1f52,	// (0x00019f92) address2_row_pane_ParamLimits

0x1f52,	// (0x00019f92) address2_row_pane

0x1f65,	// (0x00019fa5) postcard_message2_row_pane_g1

0x1f6d,	// (0x00019fad) postcard_message2_row_pane_t1

0x1f65,	// (0x00019fa5) address2_row_pane_g1

0x1f6d,	// (0x00019fad) address2_row_pane_t1

0x7ffc,	// (0x0002003c) aid_size_cell_vorec

0xec29,	// (0x00026c69) main_rss_pane

0x1f7b,	// (0x00019fbb) rss_list_single_pane_ParamLimits

0x1f7b,	// (0x00019fbb) rss_list_single_pane

0x1f89,	// (0x00019fc9) rss_list_single_pane_t1

0x1f89,	// (0x00019fc9) rss_list_single_pane_t2

0x0001,

0xf57b,	// (0x000275bb) rss_list_single_pane_t

0xec29,	// (0x00026c69) main_camera2_pane

0xec29,	// (0x00026c69) main_video2_pane

0x6221,	// (0x0001e261) cams_zoom_pane_cp2_ParamLimits

0x6221,	// (0x0001e261) cams_zoom_pane_cp2

0x6221,	// (0x0001e261) image2_vga_pane_ParamLimits

0x6221,	// (0x0001e261) image2_vga_pane

0x08da,	// (0x0001891a) main_camera2_pane_g1_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g1

0x08da,	// (0x0001891a) main_camera2_pane_g2_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g2

0x08da,	// (0x0001891a) main_camera2_pane_g3_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g3

0x08da,	// (0x0001891a) main_camera2_pane_g4_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g4

0x08da,	// (0x0001891a) main_camera2_pane_g5_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g5

0x08da,	// (0x0001891a) main_camera2_pane_g6_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g6

0x08da,	// (0x0001891a) main_camera2_pane_g7_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g7

0x08da,	// (0x0001891a) main_camera2_pane_g8_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g8

0x0008,

0xf597,	// (0x000275d7) main_camera2_pane_g_ParamLimits

0xf597,	// (0x000275d7) main_camera2_pane_g

0x68ba,	// (0x0001e8fa) main_camera2_pane_t1_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t1

0x68ba,	// (0x0001e8fa) main_camera2_pane_t2_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t2

0x68ba,	// (0x0001e8fa) main_camera2_pane_t3_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t3

0x68ba,	// (0x0001e8fa) main_camera2_pane_t4_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t4

0x0006,

0xf5aa,	// (0x000275ea) main_camera2_pane_t_ParamLimits

0xf5aa,	// (0x000275ea) main_camera2_pane_t

0x68e2,	// (0x0001e922) cams_zoom_pane_cp4_ParamLimits

0x68e2,	// (0x0001e922) cams_zoom_pane_cp4

0x66f9,	// (0x0001e739) image2_cif_pane_ParamLimits

0x66f9,	// (0x0001e739) image2_cif_pane

0x6221,	// (0x0001e261) image2_subqcif_pane_ParamLimits

0x6221,	// (0x0001e261) image2_subqcif_pane

0x68f0,	// (0x0001e930) main_video2_pane_g1_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g1

0x68f0,	// (0x0001e930) main_video2_pane_g2_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g2

0x68f0,	// (0x0001e930) main_video2_pane_g3_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g3

0x68f0,	// (0x0001e930) main_video2_pane_g4_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g4

0x68f0,	// (0x0001e930) main_video2_pane_g5_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g5

0x68f0,	// (0x0001e930) main_video2_pane_g6_ParamLimits

0x68f0,	// (0x0001e930) main_video2_pane_g6

0x0005,

0xf5b9,	// (0x000275f9) main_video2_pane_g_ParamLimits

0xf5b9,	// (0x000275f9) main_video2_pane_g

0x68fe,	// (0x0001e93e) main_video2_pane_t1_ParamLimits

0x68fe,	// (0x0001e93e) main_video2_pane_t1

0x68fe,	// (0x0001e93e) main_video2_pane_t2_ParamLimits

0x68fe,	// (0x0001e93e) main_video2_pane_t2

0x68fe,	// (0x0001e93e) main_video2_pane_t3_ParamLimits

0x68fe,	// (0x0001e93e) main_video2_pane_t3

0x0002,

0xf5c6,	// (0x00027606) main_video2_pane_t_ParamLimits

0xf5c6,	// (0x00027606) main_video2_pane_t

0xa05b,	// (0x0002209b) call_muted_g2

0x0001,

0xf56d,	// (0x000275ad) call_muted_g

0xec29,	// (0x00026c69) main_mup2_pane

0xef1b,	// (0x00026f5b) main_mup2_pane_g1_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g1

0xef1b,	// (0x00026f5b) main_mup2_pane_g2_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g2

0x386e,	// (0x0001b8ae) main_mup_pane_g13_cp1

0x622f,	// (0x0001e26f) mup_volume_pane_cp1

0xef1b,	// (0x00026f5b) main_mup2_pane_g4_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g4

0xef1b,	// (0x00026f5b) main_mup2_pane_g5_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g5

0xef1b,	// (0x00026f5b) main_mup2_pane_g6_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g6

0xef1b,	// (0x00026f5b) main_mup2_pane_g7_ParamLimits

0xef1b,	// (0x00026f5b) main_mup2_pane_g7

0x0006,

0xf5cd,	// (0x0002760d) main_mup2_pane_g_ParamLimits

0xf5cd,	// (0x0002760d) main_mup2_pane_g

0xef29,	// (0x00026f69) main_mup2_pane_t1_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t1

0xef29,	// (0x00026f69) main_mup2_pane_t2_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t2

0xef29,	// (0x00026f69) main_mup2_pane_t3_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t3

0xef29,	// (0x00026f69) main_mup2_pane_t4_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t4

0xef29,	// (0x00026f69) main_mup2_pane_t5_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t5

0xef29,	// (0x00026f69) main_mup2_pane_t6_ParamLimits

0xef29,	// (0x00026f69) main_mup2_pane_t6

0x0005,

0xf5dc,	// (0x0002761c) main_mup2_pane_t_ParamLimits

0xf5dc,	// (0x0002761c) main_mup2_pane_t

0x2079,	// (0x0001a0b9) mup2_visualizer_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup2_visualizer_pane

0x2079,	// (0x0001a0b9) mup_progress_pane_cp_ParamLimits

0x2079,	// (0x0001a0b9) mup_progress_pane_cp

0x6928,	// (0x0001e968) mup_volume_pane_cp_ParamLimits

0x6928,	// (0x0001e968) mup_volume_pane_cp

0xeeff,	// (0x00026f3f) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) mup2_visualizer_pane_g1

0xef0d,	// (0x00026f4d) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) mup2_visualizer_pane_g2

0xef0d,	// (0x00026f4d) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x00026f4d) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0002710a) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0002710a) mup2_visualizer_pane_g

0x0e87,	// (0x00018ec7) aid_size_cell_fmradio

0x66d0,	// (0x0001e710) aid_height_parent_landcape

0x027d,	// (0x000182bd) wml_content_pane_cp

0x0285,	// (0x000182c5) wml_tabs_pane

0x028e,	// (0x000182ce) popup_wml_miniature_window

0x0296,	// (0x000182d6) scroll_pane_cp021

0x02aa,	// (0x000182ea) wml_content_pane_comp8

0xec29,	// (0x00026c69) bg_popup_sub_pane_cp05

0x209d,	// (0x0001a0dd) popup_wml_miniature_window_g1

0x20a5,	// (0x0001a0e5) wml_miniature_view_pane

0xa30b,	// (0x0002234b) aid_size_wml_view

0xa313,	// (0x00022353) wml_miniature_view_pane_g1

0xa31c,	// (0x0002235c) wml_miniature_view_pane_g2

0xa325,	// (0x00022365) wml_miniature_view_pane_g3

0xa32d,	// (0x0002236d) wml_miniature_view_pane_g4

0xa335,	// (0x00022375) wml_miniature_view_pane_g5

0xa33d,	// (0x0002237d) wml_miniature_view_pane_g6

0xa345,	// (0x00022385) wml_miniature_view_pane_g7

0xa34d,	// (0x0002238d) wml_miniature_view_pane_g8

0x0007,

0xf5e9,	// (0x00027629) wml_miniature_view_pane_g

0x20ad,	// (0x0001a0ed) background_graphic_ParamLimits

0x20ad,	// (0x0001a0ed) background_graphic

0x20b9,	// (0x0001a0f9) wml_tabs_2_pane

0x20c2,	// (0x0001a102) wml_tabs_3_pane_ParamLimits

0x20c2,	// (0x0001a102) wml_tabs_3_pane

0x20d4,	// (0x0001a114) wml_tabs_4_pane_ParamLimits

0x20d4,	// (0x0001a114) wml_tabs_4_pane

0x20ea,	// (0x0001a12a) wml_tabs_5_pane_ParamLimits

0x20ea,	// (0x0001a12a) wml_tabs_5_pane

0x2104,	// (0x0001a144) wml_tabs_pane_g2_ParamLimits

0x2104,	// (0x0001a144) wml_tabs_pane_g2

0x2119,	// (0x0001a159) wml_tabs_pane_g3_ParamLimits

0x2119,	// (0x0001a159) wml_tabs_pane_g3

0x212e,	// (0x0001a16e) wml_tabs_2_active_pane_ParamLimits

0x212e,	// (0x0001a16e) wml_tabs_2_active_pane

0x212e,	// (0x0001a16e) wml_tabs_2_passive_pane_ParamLimits

0x212e,	// (0x0001a16e) wml_tabs_2_passive_pane

0xa355,	// (0x00022395) wml_tabs_3_active_pane_cp_ParamLimits

0xa355,	// (0x00022395) wml_tabs_3_active_pane_cp

0xa368,	// (0x000223a8) wml_tabs_3_passive_pane_ParamLimits

0xa368,	// (0x000223a8) wml_tabs_3_passive_pane

0xa379,	// (0x000223b9) wml_tabs_3_passive_pane_cp_ParamLimits

0xa379,	// (0x000223b9) wml_tabs_3_passive_pane_cp

0xa38e,	// (0x000223ce) tabs_4_active_pane

0xa396,	// (0x000223d6) tabs_4_passive_pane

0xa39e,	// (0x000223de) tabs_4_passive_pane_cp

0xa3a6,	// (0x000223e6) tabs_4_passive_pane_cp2

0x9f57,	// (0x00021f97) aid_height_text

0x2079,	// (0x0001a0b9) mup_volume_cont_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup_volume_cont_pane

0xe7c9,	// (0x00026809) aid_size_cell_pinb

0xe7c9,	// (0x00026809) aid_size_list_pinb

0x2079,	// (0x0001a0b9) mup2_volume_cont_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup2_volume_cont_pane

0x6912,	// (0x0001e952) mup2_volume_cont_pane_g1_ParamLimits

0x6912,	// (0x0001e952) mup2_volume_cont_pane_g1

0x5fab,	// (0x0001dfeb) aid_size_cell_touch_ParamLimits

0x5fab,	// (0x0001dfeb) aid_size_cell_touch

0x6239,	// (0x0001e279) touch_pane_ParamLimits

0x6239,	// (0x0001e279) touch_pane

0x622f,	// (0x0001e26f) main_rss2_pane

0x215b,	// (0x0001a19b) listscroll_rss2_pane

0x2164,	// (0x0001a1a4) rss2_navigation_pane

0x216c,	// (0x0001a1ac) list_rss2_pane

0x09be,	// (0x000189fe) scroll_pane_cp22

0x2174,	// (0x0001a1b4) rss2_navigation_pane_g1

0x217d,	// (0x0001a1bd) rss2_navigation_pane_g2

0x2185,	// (0x0001a1c5) rss2_navigation_pane_g3

0x0002,

0xf5fa,	// (0x0002763a) rss2_navigation_pane_g

0x218d,	// (0x0001a1cd) rss2_navigation_pane_t1

0xa3b0,	// (0x000223f0) rss2_list_single_pane_ParamLimits

0xa3b0,	// (0x000223f0) rss2_list_single_pane

0x219b,	// (0x0001a1db) rss2_list_single_pane_t2

0x21a9,	// (0x0001a1e9) rss2_list_single_pane_t3_ParamLimits

0x21a9,	// (0x0001a1e9) rss2_list_single_pane_t3

0x21c6,	// (0x0001a206) rss2_list_single_pane_t4

0x920b,	// (0x0002124b) smil_status_pane_g1

0x66f9,	// (0x0001e739) main_image2_pane_ParamLimits

0x66f9,	// (0x0001e739) main_image2_pane

0x08da,	// (0x0001891a) main_camera2_pane_g9_ParamLimits

0x08da,	// (0x0001891a) main_camera2_pane_g9

0x68ba,	// (0x0001e8fa) main_camera2_pane_t5_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t5

0x68ce,	// (0x0001e90e) main_camera2_pane_t6_ParamLimits

0x68ce,	// (0x0001e90e) main_camera2_pane_t6

0xa3d3,	// (0x00022413) main_image2_pane_g1_ParamLimits

0xa3d3,	// (0x00022413) main_image2_pane_g1

0x9c8c,	// (0x00021ccc) smil2_video_pane_ParamLimits

0x9c8c,	// (0x00021ccc) smil2_video_pane

0x5fdf,	// (0x0001e01f) aid_zoom_text_primary_cp

0x61d6,	// (0x0001e216) popup_preview_fixed_window

0x01e6,	// (0x00018226) im_reading_pane_g1

0x68ac,	// (0x0001e8ec) cams2_bc_adjust_pane_cp_ParamLimits

0x68ac,	// (0x0001e8ec) cams2_bc_adjust_pane_cp

0x6221,	// (0x0001e261) cams2_bc_adjust_pane_ParamLimits

0x6221,	// (0x0001e261) cams2_bc_adjust_pane

0x386e,	// (0x0001b8ae) cams2_bc_adjust_pane_g1

0x622f,	// (0x0001e26f) cams2_slider_pane

0x386e,	// (0x0001b8ae) cams2_slider_pane_g1

0x386e,	// (0x0001b8ae) cams2_slider_pane_g2

0x0006,

0xf601,	// (0x00027641) cams2_slider_pane_g

0x62aa,	// (0x0001e2ea) calc_display_pane_ParamLimits

0x62c8,	// (0x0001e308) calc_paper_pane_ParamLimits

0x62e4,	// (0x0001e324) grid_calc_pane_ParamLimits

0x662f,	// (0x0001e66f) popup_clock_digital_window_t1_ParamLimits

0x0e24,	// (0x00018e64) main_image_pane_t1

0x6290,	// (0x0001e2d0) aid_size_cell_calc_ParamLimits

0x6290,	// (0x0001e2d0) aid_size_cell_calc

0x672a,	// (0x0001e76a) popup_blid_sat_info2_window_ParamLimits

0x672a,	// (0x0001e76a) popup_blid_sat_info2_window

0x21d4,	// (0x0001a214) aid_size_cell_blid

0x2079,	// (0x0001a0b9) bg_popup_window_pane_cp07

0x21f1,	// (0x0001a231) grid_popup_blid_pane

0x21fb,	// (0x0001a23b) heading_pane_cp05_ParamLimits

0x21fb,	// (0x0001a23b) heading_pane_cp05

0x22c5,	// (0x0001a305) cell_popup_blid_pane_ParamLimits

0x22c5,	// (0x0001a305) cell_popup_blid_pane

0x22ef,	// (0x0001a32f) cell_popup_blid_pane_g1

0x22f7,	// (0x0001a337) cell_popup_blid_pane_t1

0x2079,	// (0x0001a0b9) mup2_indicator_pane_ParamLimits

0x2079,	// (0x0001a0b9) mup2_indicator_pane

0xe7c9,	// (0x00026809) mup2_visualizer_osc_pane

0x2087,	// (0x0001a0c7) mup2_visualizer_spec_pane_ParamLimits

0x2087,	// (0x0001a0c7) mup2_visualizer_spec_pane

0xe7c9,	// (0x00026809) mup2_spec_half_pane

0xe7c9,	// (0x00026809) mup2_spec_half_pane_cp

0x2305,	// (0x0001a345) mup2_spec_bar_pane_ParamLimits

0x2305,	// (0x0001a345) mup2_spec_bar_pane

0x0131,	// (0x00018171) mup2_spec_bar_pane_g1

0x2324,	// (0x0001a364) mup2_spec_bar_pane_g2

0x0001,

0xf627,	// (0x00027667) mup2_spec_bar_pane_g

0xe7c9,	// (0x00026809) mup2_osc_middle_pane

0x0131,	// (0x00018171) mup2_visualizer_osc_pane_g1

0xe7f3,	// (0x00026833) popup_number_entry_window_t1_ParamLimits

0xe806,	// (0x00026846) popup_number_entry_window_t2_ParamLimits

0xe818,	// (0x00026858) popup_number_entry_window_t3_ParamLimits

0xe838,	// (0x00026878) popup_number_entry_window_t5_ParamLimits

0xe838,	// (0x00026878) popup_number_entry_window_t5

0xf06b,	// (0x000270ab) popup_number_entry_window_t_ParamLimits

0xe86d,	// (0x000268ad) text_title_cp2_ParamLimits

0x666e,	// (0x0001e6ae) aid_hotspot_pointer_text2_pane

0x66c4,	// (0x0001e704) main_viewer_pane_g9_ParamLimits

0x66c4,	// (0x0001e704) main_viewer_pane_g9

0x0448,	// (0x00018488) cale_month_pane_t1_ParamLimits

0x04b3,	// (0x000184f3) bg_cale_pane_ParamLimits

0x04cb,	// (0x0001850b) list_cale_pane_ParamLimits

0x04dc,	// (0x0001851c) listscroll_cale_day_pane_t1

0x04ee,	// (0x0001852e) scroll_pane_cp09_ParamLimits

0x96d1,	// (0x00021711) main_mup_eq_pane_t1_ParamLimits

0x96d1,	// (0x00021711) main_mup_eq_pane_t1

0x96ed,	// (0x0002172d) main_mup_eq_pane_t2_ParamLimits

0x96ed,	// (0x0002172d) main_mup_eq_pane_t2

0x9709,	// (0x00021749) main_mup_eq_pane_t3_ParamLimits

0x9709,	// (0x00021749) main_mup_eq_pane_t3

0x9723,	// (0x00021763) main_mup_eq_pane_t4_ParamLimits

0x9723,	// (0x00021763) main_mup_eq_pane_t4

0x973d,	// (0x0002177d) main_mup_eq_pane_t5_ParamLimits

0x973d,	// (0x0002177d) main_mup_eq_pane_t5

0x9757,	// (0x00021797) main_mup_eq_pane_t6_ParamLimits

0x9757,	// (0x00021797) main_mup_eq_pane_t6

0x976d,	// (0x000217ad) main_mup_eq_pane_t7_ParamLimits

0x976d,	// (0x000217ad) main_mup_eq_pane_t7

0x9783,	// (0x000217c3) main_mup_eq_pane_t8_ParamLimits

0x9783,	// (0x000217c3) main_mup_eq_pane_t8

0x9799,	// (0x000217d9) main_mup_eq_pane_t9_ParamLimits

0x9799,	// (0x000217d9) main_mup_eq_pane_t9

0x97b5,	// (0x000217f5) main_mup_eq_pane_t10_ParamLimits

0x97b5,	// (0x000217f5) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0002740a) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0002740a) main_mup_eq_pane_t

0x987a,	// (0x000218ba) mup_equalizer_pane_cp5_ParamLimits

0x9892,	// (0x000218d2) mup_equalizer_pane_cp6_ParamLimits

0x98aa,	// (0x000218ea) mup_equalizer_pane_cp7_ParamLimits

0x622f,	// (0x0001e26f) main_gallery_pane

0x1fb7,	// (0x00019ff7) smil2_volume_pane

0x1fd2,	// (0x0001a012) smil_status_volume_pane_g1_ParamLimits

0x1fbf,	// (0x00019fff) smil_status_volume_pane_g2_ParamLimits

0x688a,	// (0x0001e8ca) smil_status_volume_pane_g3_ParamLimits

0xf580,	// (0x000275c0) smil_status_volume_pane_g_ParamLimits

0x2079,	// (0x0001a0b9) bg_popup_window_pane_cp07_ParamLimits

0x21dc,	// (0x0001a21c) blid_firmament_pane

0xeef1,	// (0x00026f31) aid_size_cell_gallery_ParamLimits

0xeef1,	// (0x00026f31) aid_size_cell_gallery

0xeef1,	// (0x00026f31) grid_gallery_pane_ParamLimits

0xeef1,	// (0x00026f31) grid_gallery_pane

0x0bf7,	// (0x00018c37) cell_gallery_pane_ParamLimits

0x0bf7,	// (0x00018c37) cell_gallery_pane

0xe82a,	// (0x0002686a) bg_cell_gallery_focus_pane_ParamLimits

0xe82a,	// (0x0002686a) bg_cell_gallery_focus_pane

0xeeff,	// (0x00026f3f) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) cell_gallery_pane_g1

0xeeff,	// (0x00026f3f) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x00026f3f) cell_gallery_pane_g2

0xeeff,	// (0x00026f3f) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x00026f3f) cell_gallery_pane_g3

0xef0d,	// (0x00026f4d) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x00026f4d) cell_gallery_pane_g4

0x0003,

0xf62c,	// (0x0002766c) cell_gallery_pane_g_ParamLimits

0xf62c,	// (0x0002766c) cell_gallery_pane_g

0x232e,	// (0x0001a36e) bg_cell_gallery_focus_pane_g1

0x2336,	// (0x0001a376) bg_cell_gallery_focus_pane_g2

0x233e,	// (0x0001a37e) bg_cell_gallery_focus_pane_g3

0x2346,	// (0x0001a386) bg_cell_gallery_focus_pane_g4

0x234e,	// (0x0001a38e) bg_cell_gallery_focus_pane_g5

0x2356,	// (0x0001a396) bg_cell_gallery_focus_pane_g6

0x235e,	// (0x0001a39e) bg_cell_gallery_focus_pane_g7

0x2366,	// (0x0001a3a6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf635,	// (0x00027675) bg_cell_gallery_focus_pane_g

0x236e,	// (0x0001a3ae) aid_firma_cardinal

0x2382,	// (0x0001a3c2) blid_firmament_pane_t1

0x2399,	// (0x0001a3d9) blid_firmament_pane_t2

0x23b0,	// (0x0001a3f0) blid_firmament_pane_t3

0x23c7,	// (0x0001a407) blid_firmament_pane_t4

0x0003,

0xf646,	// (0x00027686) blid_firmament_pane_t

0x23de,	// (0x0001a41e) blid_sat_info_pane

0x0131,	// (0x00018171) blid_sat_info_pane_g1

0x0131,	// (0x00018171) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x000273fe) blid_sat_info_pane_g

0x23ee,	// (0x0001a42e) blid_sat_info_pane_t1

0x23fc,	// (0x0001a43c) smil2_volume_content_pane

0x2405,	// (0x0001a445) smil2_volume_pane_g1

0xf000,	// (0x00027040) smil2_volume_content_pane_g1

0x240d,	// (0x0001a44d) smil2_volume_content_pane_g2

0x2416,	// (0x0001a456) smil2_volume_content_pane_g3

0x241f,	// (0x0001a45f) smil2_volume_content_pane_g4

0x2428,	// (0x0001a468) smil2_volume_content_pane_g5

0x2431,	// (0x0001a471) smil2_volume_content_pane_g6

0x243a,	// (0x0001a47a) smil2_volume_content_pane_g7

0x2443,	// (0x0001a483) smil2_volume_content_pane_g8

0x244c,	// (0x0001a48c) smil2_volume_content_pane_g9

0x2455,	// (0x0001a495) smil2_volume_content_pane_g10

0x0009,

0xf64f,	// (0x0002768f) smil2_volume_content_pane_g

0x7e69,	// (0x0001fea9) cale_week_day_heading_pane_t1_ParamLimits

0x7e91,	// (0x0001fed1) cale_week_day_heading_pane_t2_ParamLimits

0x7ebe,	// (0x0001fefe) cale_week_day_heading_pane_t3_ParamLimits

0x7eeb,	// (0x0001ff2b) cale_week_day_heading_pane_t4_ParamLimits

0x7f18,	// (0x0001ff58) cale_week_day_heading_pane_t5_ParamLimits

0x7f45,	// (0x0001ff85) cale_week_day_heading_pane_t6_ParamLimits

0x7f72,	// (0x0001ffb2) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000271b2) cale_week_day_heading_pane_t_ParamLimits

0x0081,	// (0x000180c1) bg_cale_side_pane_ParamLimits

0x643f,	// (0x0001e47f) cale_week_time_pane_t1_ParamLimits

0x6463,	// (0x0001e4a3) cale_week_time_pane_t2_ParamLimits

0x6487,	// (0x0001e4c7) cale_week_time_pane_t3_ParamLimits

0x64ab,	// (0x0001e4eb) cale_week_time_pane_t4_ParamLimits

0x64cf,	// (0x0001e50f) cale_week_time_pane_t5_ParamLimits

0x64f5,	// (0x0001e535) cale_week_time_pane_t6_ParamLimits

0x651d,	// (0x0001e55d) cale_week_time_pane_t7_ParamLimits

0x6549,	// (0x0001e589) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000271c1) cale_week_time_pane_t_ParamLimits

0x7f9a,	// (0x0001ffda) cell_cale_week_pane_g2_ParamLimits

0x0081,	// (0x000180c1) bg_cale_side_pane_cp01_ParamLimits

0x902e,	// (0x0002106e) cale_month_week_pane_t1_ParamLimits

0x9047,	// (0x00021087) cale_month_week_pane_t2_ParamLimits

0x9060,	// (0x000210a0) cale_month_week_pane_t3_ParamLimits

0x9079,	// (0x000210b9) cale_month_week_pane_t4_ParamLimits

0x9092,	// (0x000210d2) cale_month_week_pane_t5_ParamLimits

0x90af,	// (0x000210ef) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0002728f) cale_month_week_pane_t_ParamLimits

0x6583,	// (0x0001e5c3) cell_cale_month_pane_g1_ParamLimits

0x622f,	// (0x0001e26f) main_cale_event_viewer_pane

0xe7c9,	// (0x00026809) listscroll_cale_event_viewer_pane

0x245e,	// (0x0001a49e) list_cale_ev_pane

0x2466,	// (0x0001a4a6) scroll_pane_cp023

0xa3df,	// (0x0002241f) field_cale_ev_pane_ParamLimits

0xa3df,	// (0x0002241f) field_cale_ev_pane

0x2472,	// (0x0001a4b2) field_cale_ev_content_pane_ParamLimits

0x2472,	// (0x0001a4b2) field_cale_ev_content_pane

0x247e,	// (0x0001a4be) field_cale_ev_pane_g1_ParamLimits

0x247e,	// (0x0001a4be) field_cale_ev_pane_g1

0x248a,	// (0x0001a4ca) field_cale_ev_pane_g2_ParamLimits

0x248a,	// (0x0001a4ca) field_cale_ev_pane_g2

0x24a2,	// (0x0001a4e2) field_cale_ev_pane_g3_ParamLimits

0x24a2,	// (0x0001a4e2) field_cale_ev_pane_g3

0x0002,

0xf664,	// (0x000276a4) field_cale_ev_pane_g_ParamLimits

0xf664,	// (0x000276a4) field_cale_ev_pane_g

0x24ba,	// (0x0001a4fa) field_cale_ev_pane_t1_ParamLimits

0x24ba,	// (0x0001a4fa) field_cale_ev_pane_t1

0xa403,	// (0x00022443) field_cale_ev_content_pane_t1_ParamLimits

0xa403,	// (0x00022443) field_cale_ev_content_pane_t1

0x0ca4,	// (0x00018ce4) bg_button_pane_cp01

0x7ac7,	// (0x0001fb07) listscroll_cale_week_pane_ParamLimits

0x0049,	// (0x00018089) popup_toolbar_window_cp01

0x0052,	// (0x00018092) listscroll_cale_week_pane_t1_ParamLimits

0x7ac7,	// (0x0001fb07) listscroll_cale_day_pane_ParamLimits

0x0049,	// (0x00018089) popup_toolbar_window_cp02

0x04dc,	// (0x0001851c) listscroll_cale_day_pane_t1_ParamLimits

0x66e7,	// (0x0001e727) main_cale_month_pane_ParamLimits

0x6849,	// (0x0001e889) popup_toolbar_window_cp03_ParamLimits

0x6849,	// (0x0001e889) popup_toolbar_window_cp03

0x9b9c,	// (0x00021bdc) main_image_pane_g2_ParamLimits

0x9b9c,	// (0x00021bdc) main_image_pane_g2

0x9ba8,	// (0x00021be8) main_image_pane_g3_ParamLimits

0x9ba8,	// (0x00021be8) main_image_pane_g3

0x0002,

0xf45c,	// (0x0002749c) main_image_pane_g_ParamLimits

0xf45c,	// (0x0002749c) main_image_pane_g

0x0e24,	// (0x00018e64) main_image_pane_t1_ParamLimits

0x9bb4,	// (0x00021bf4) main_image_pane_t2_ParamLimits

0x9bb4,	// (0x00021bf4) main_image_pane_t2

0x9bc6,	// (0x00021c06) main_image_pane_t3_ParamLimits

0x9bc6,	// (0x00021c06) main_image_pane_t3

0x9bd8,	// (0x00021c18) main_image_pane_t4_ParamLimits

0x9bd8,	// (0x00021c18) main_image_pane_t4

0x0003,

0xf463,	// (0x000274a3) main_image_pane_t_ParamLimits

0xf463,	// (0x000274a3) main_image_pane_t

0x9bea,	// (0x00021c2a) popup_image_details_window_cp01

0x9bf4,	// (0x00021c34) popup_toobar_trans_pane_cp01_ParamLimits

0x9bf4,	// (0x00021c34) popup_toobar_trans_pane_cp01

0x678b,	// (0x0001e7cb) popup_image_details_window_ParamLimits

0x678b,	// (0x0001e7cb) popup_image_details_window

0x6799,	// (0x0001e7d9) popup_image_focus_window

0x6221,	// (0x0001e261) camera2_autofocus_pane_ParamLimits

0x6221,	// (0x0001e261) camera2_autofocus_pane

0xe7c9,	// (0x00026809) bg_popup_sub_pane_cp06

0x24d1,	// (0x0001a511) popup_image_focus_window_g1

0x24d9,	// (0x0001a519) popup_image_focus_window_g2

0x24e1,	// (0x0001a521) popup_image_focus_window_g3

0x24e9,	// (0x0001a529) popup_image_focus_window_g4

0x0003,

0xf66b,	// (0x000276ab) popup_image_focus_window_g

0x24f1,	// (0x0001a531) popup_image_focus_window_t1

0x24ff,	// (0x0001a53f) popup_image_focus_window_t2

0x250f,	// (0x0001a54f) popup_image_focus_window_t3

0x0002,

0xf674,	// (0x000276b4) popup_image_focus_window_t

0xeeff,	// (0x00026f3f) camera2_autofocus_pane_g1

0xe82a,	// (0x0002686a) bg_tb_trans_pane_cp01

0x251d,	// (0x0001a55d) popup_image_details_window_g1

0x2530,	// (0x0001a570) popup_image_details_window_g2

0x0002,

0xf686,	// (0x000276c6) popup_image_details_window_g

0x2559,	// (0x0001a599) popup_image_details_window_t1

0x256b,	// (0x0001a5ab) popup_image_details_window_t2

0x2584,	// (0x0001a5c4) popup_image_details_window_t3

0x2598,	// (0x0001a5d8) popup_image_details_window_t4

0x25b3,	// (0x0001a5f3) popup_image_details_window_t5

0x0004,

0xf68d,	// (0x000276cd) popup_image_details_window_t

0xef5d,	// (0x00026f9d) bg_calc_paper_pane_ParamLimits

0x622f,	// (0x0001e26f) grid_highlight_pane_cp013

0x6310,	// (0x0001e350) list_calc_pane_ParamLimits

0x6322,	// (0x0001e362) scroll_pane_cp024

0xef71,	// (0x00026fb1) bg_calc_display_pane_ParamLimits

0x632a,	// (0x0001e36a) calc_display_pane_t1_ParamLimits

0x633f,	// (0x0001e37f) calc_display_pane_t2_ParamLimits

0x6354,	// (0x0001e394) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00027132) calc_display_pane_t_ParamLimits

0x63bf,	// (0x0001e3ff) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0002714f) cell_calc_pane_g

0x63c8,	// (0x0001e408) cell_calc_pane_t1

0xefc6,	// (0x00027006) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x0002701c) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x0002701c) toolbar_button_pane_cp01

0x0e69,	// (0x00018ea9) temp_image_control_pane_ParamLimits

0x0e69,	// (0x00018ea9) temp_image_control_pane

0x66f9,	// (0x0001e739) main_mp3_pane

0x25cd,	// (0x0001a60d) temp_image_control_pane_g1_ParamLimits

0x25cd,	// (0x0001a60d) temp_image_control_pane_g1

0x25db,	// (0x0001a61b) temp_image_control_pane_g2_ParamLimits

0x25db,	// (0x0001a61b) temp_image_control_pane_g2

0x25ed,	// (0x0001a62d) temp_image_control_pane_g3_ParamLimits

0x25ed,	// (0x0001a62d) temp_image_control_pane_g3

0xa41e,	// (0x0002245e) temp_image_control_pane_g4_ParamLimits

0xa41e,	// (0x0002245e) temp_image_control_pane_g4

0x0003,

0xf698,	// (0x000276d8) temp_image_control_pane_g_ParamLimits

0xf698,	// (0x000276d8) temp_image_control_pane_g

0x25cd,	// (0x0001a60d) main_mp3_pane_g1

0xa42f,	// (0x0002246f) main_mp3_pane_g2

0x0007,

0xf6a1,	// (0x000276e1) main_mp3_pane_g

0x2622,	// (0x0001a662) main_mp3_pane_t1

0xef0d,	// (0x00026f4d) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x00026f4d) main_camera_pane_g8

0x813c,	// (0x0002017c) main_video_pane_g7_ParamLimits

0x813c,	// (0x0002017c) main_video_pane_g7

0x68ba,	// (0x0001e8fa) main_camera2_pane_t7_ParamLimits

0x68ba,	// (0x0001e8fa) main_camera2_pane_t7

0x023d,	// (0x0001827d) scroll_pane_cp025_ParamLimits

0x023d,	// (0x0001827d) scroll_pane_cp025

0x0251,	// (0x00018291) scroll_pane_cp026_ParamLimits

0x0251,	// (0x00018291) scroll_pane_cp026

0x0260,	// (0x000182a0) wml_content_pane_ParamLimits

0x622f,	// (0x0001e26f) main_touch_calib_pane

0xa4d3,	// (0x00022513) main_touch_calib_pane_g1

0xa4df,	// (0x0002251f) main_touch_calib_pane_g2

0xa4eb,	// (0x0002252b) main_touch_calib_pane_g3

0xa4f7,	// (0x00022537) main_touch_calib_pane_g4

0x0003,

0xf6bf,	// (0x000276ff) main_touch_calib_pane_g

0xa503,	// (0x00022543) main_touch_calib_pane_t1

0xa51a,	// (0x0002255a) main_touch_calib_pane_t2

0x0004,

0xf6c8,	// (0x00027708) main_touch_calib_pane_t

0x0a39,	// (0x00018a79) mup_progress_pane_cp02

0x0a58,	// (0x00018a98) navi_pane_g1

0x0aba,	// (0x00018afa) navi_pane_mp_t3

0x66f9,	// (0x0001e739) main_mp3_pane_ParamLimits

0xa171,	// (0x000221b1) navi_pane_ParamLimits

0x25cd,	// (0x0001a60d) main_mp3_pane_g1_ParamLimits

0xa42f,	// (0x0002246f) main_mp3_pane_g2_ParamLimits

0xa43b,	// (0x0002247b) main_mp3_pane_g3_ParamLimits

0xa43b,	// (0x0002247b) main_mp3_pane_g3

0xa447,	// (0x00022487) main_mp3_pane_g4_ParamLimits

0xa447,	// (0x00022487) main_mp3_pane_g4

0xeeff,	// (0x00026f3f) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x00026f3f) main_mp3_pane_g5

0x25fd,	// (0x0001a63d) main_mp3_pane_g6_ParamLimits

0x25fd,	// (0x0001a63d) main_mp3_pane_g6

0x260a,	// (0x0001a64a) main_mp3_pane_g7_ParamLimits

0x260a,	// (0x0001a64a) main_mp3_pane_g7

0x2616,	// (0x0001a656) main_mp3_pane_g8_ParamLimits

0x2616,	// (0x0001a656) main_mp3_pane_g8

0xf6a1,	// (0x000276e1) main_mp3_pane_g_ParamLimits

0xa453,	// (0x00022493) main_mp3_pane_t2

0xa463,	// (0x000224a3) main_mp3_pane_t3

0x2630,	// (0x0001a670) main_mp3_pane_t4

0x263e,	// (0x0001a67e) main_mp3_pane_t5

0x0005,

0xf6b2,	// (0x000276f2) main_mp3_pane_t

0x264c,	// (0x0001a68c) mup_progress_pane_cp01

0x5fdf,	// (0x0001e01f) aid_zoom_text_secondary2

0x245e,	// (0x0001a49e) list_cale_ev2_pane

0x2466,	// (0x0001a4a6) scroll_pane_cp023_ParamLimits

0xa575,	// (0x000225b5) field_cale_ev2_pane_ParamLimits

0xa575,	// (0x000225b5) field_cale_ev2_pane

0xa590,	// (0x000225d0) field_cale_ev2_pane_g1_ParamLimits

0xa590,	// (0x000225d0) field_cale_ev2_pane_g1

0xa59c,	// (0x000225dc) field_cale_ev2_pane_g2_ParamLimits

0xa59c,	// (0x000225dc) field_cale_ev2_pane_g2

0xa5b4,	// (0x000225f4) field_cale_ev2_pane_g3_ParamLimits

0xa5b4,	// (0x000225f4) field_cale_ev2_pane_g3

0x0003,

0xf6d3,	// (0x00027713) field_cale_ev2_pane_g_ParamLimits

0xf6d3,	// (0x00027713) field_cale_ev2_pane_g

0xa5cc,	// (0x0002260c) field_cale_ev2_pane_t1_ParamLimits

0xa5cc,	// (0x0002260c) field_cale_ev2_pane_t1

0xa5e3,	// (0x00022623) field_cale_ev2_pane_t2_ParamLimits

0xa5e3,	// (0x00022623) field_cale_ev2_pane_t2

0x0001,

0xf6dc,	// (0x0002771c) field_cale_ev2_pane_t_ParamLimits

0xf6dc,	// (0x0002771c) field_cale_ev2_pane_t

0x9a7b,	// (0x00021abb) main_postcard_pane_g5_ParamLimits

0x9a7b,	// (0x00021abb) main_postcard_pane_g5

0x9a89,	// (0x00021ac9) main_postcard_pane_g6_ParamLimits

0x9a89,	// (0x00021ac9) main_postcard_pane_g6

0xeef1,	// (0x00026f31) camera2_autofocus_pane_cp_ParamLimits

0xeef1,	// (0x00026f31) camera2_autofocus_pane_cp

0x66f9,	// (0x0001e739) main_mup3_pane

0xa63b,	// (0x0002267b) main_mup3_pane_g1_ParamLimits

0xa63b,	// (0x0002267b) main_mup3_pane_g1

0xa65c,	// (0x0002269c) main_mup3_pane_g2_ParamLimits

0xa65c,	// (0x0002269c) main_mup3_pane_g2

0xa6d0,	// (0x00022710) main_mup3_pane_g3_ParamLimits

0xa6d0,	// (0x00022710) main_mup3_pane_g3

0xa735,	// (0x00022775) main_mup3_pane_g4_ParamLimits

0xa735,	// (0x00022775) main_mup3_pane_g4

0xa79a,	// (0x000227da) main_mup3_pane_g5_ParamLimits

0xa79a,	// (0x000227da) main_mup3_pane_g5

0xa7ff,	// (0x0002283f) main_mup3_pane_g6_ParamLimits

0xa7ff,	// (0x0002283f) main_mup3_pane_g6

0xef0d,	// (0x00026f4d) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x00026f4d) main_mup3_pane_g7

0x0007,

0xf6ec,	// (0x0002772c) main_mup3_pane_g_ParamLimits

0xf6ec,	// (0x0002772c) main_mup3_pane_g

0xa879,	// (0x000228b9) main_mup3_pane_t1_ParamLimits

0xa879,	// (0x000228b9) main_mup3_pane_t1

0xa8e4,	// (0x00022924) main_mup3_pane_t2_ParamLimits

0xa8e4,	// (0x00022924) main_mup3_pane_t2

0xa9ad,	// (0x000229ed) main_mup3_pane_t4_ParamLimits

0xa9ad,	// (0x000229ed) main_mup3_pane_t4

0xaa01,	// (0x00022a41) main_mup3_pane_t5_ParamLimits

0xaa01,	// (0x00022a41) main_mup3_pane_t5

0xaab9,	// (0x00022af9) main_mup3_pane_t6_ParamLimits

0xaab9,	// (0x00022af9) main_mup3_pane_t6

0x0005,

0xf6fd,	// (0x0002773d) main_mup3_pane_t_ParamLimits

0xf6fd,	// (0x0002773d) main_mup3_pane_t

0xab63,	// (0x00022ba3) mup3_progress_pane_ParamLimits

0xab63,	// (0x00022ba3) mup3_progress_pane

0xabe1,	// (0x00022c21) popup_mup3_control_window_ParamLimits

0xabe1,	// (0x00022c21) popup_mup3_control_window

0x2660,	// (0x0001a6a0) popup_mup3_text_window

0xabfe,	// (0x00022c3e) mup3_progress_pane_t1

0xac1c,	// (0x00022c5c) mup3_progress_pane_t2

0x2668,	// (0x0001a6a8) mup3_progress_pane_t3

0x0002,

0xf70a,	// (0x0002774a) mup3_progress_pane_t

0x2685,	// (0x0001a6c5) mup_progress_pane_cp03

0xe7c9,	// (0x00026809) bg_tb_trans_pane_cp04

0xac3a,	// (0x00022c7a) mup3_volume_pane

0xac42,	// (0x00022c82) popup_mup3_control_window_g1

0x31db,	// (0x0001b21b) mup3_volume_pane_g1

0x31e4,	// (0x0001b224) mup3_volume_pane_g2

0x31ed,	// (0x0001b22d) mup3_volume_pane_g3

0x0002,

0xf711,	// (0x00027751) mup3_volume_pane_g

0xe7c9,	// (0x00026809) bg_tb_trans_pane_cp03

0x2695,	// (0x0001a6d5) popup_mup3_text_window_g1

0x269d,	// (0x0001a6dd) popup_mup3_text_window_t1

0xefb9,	// (0x00026ff9) list_calc_item_pane_g1_ParamLimits

0x2152,	// (0x0001a192) mup_volume_pane_cp_g1

0xa533,	// (0x00022573) main_touch_calib_pane_t3

0xa549,	// (0x00022589) main_touch_calib_pane_t4

0xa55f,	// (0x0002259f) main_touch_calib_pane_t5

0x5f97,	// (0x0001dfd7) aid_cell_size_toolbar2

0x5f9f,	// (0x0001dfdf) aid_popup3_width_pane

0x5fdf,	// (0x0001e01f) aid_zoom_text_msg_primary

0x8046,	// (0x00020086) vorec_t7

0xef7d,	// (0x00026fbd) bg_calc_paper_pane_g1_ParamLimits

0xef89,	// (0x00026fc9) bg_calc_paper_pane_g2_ParamLimits

0xef95,	// (0x00026fd5) bg_calc_paper_pane_g3_ParamLimits

0xefad,	// (0x00026fed) bg_calc_paper_pane_g4_ParamLimits

0xefa1,	// (0x00026fe1) bg_calc_paper_pane_g5_ParamLimits

0x799c,	// (0x0001f9dc) bg_calc_paper_pane_g6_ParamLimits

0x79ad,	// (0x0001f9ed) bg_calc_paper_pane_g7_ParamLimits

0x79be,	// (0x0001f9fe) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00027139) bg_calc_paper_pane_g_ParamLimits

0x79cf,	// (0x0001fa0f) calc_bg_paper_pane_g9_ParamLimits

0xeef1,	// (0x00026f31) image_qvga_pane_ParamLimits

0xeef1,	// (0x00026f31) image_qvga_pane

0xee84,	// (0x00026ec4) bg_popup_sub_pane_cp04_ParamLimits

0x0da0,	// (0x00018de0) popup_mup_playback_window_g1_ParamLimits

0x0dac,	// (0x00018dec) popup_mup_playback_window_t1_ParamLimits

0x0dc1,	// (0x00018e01) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x00027497) popup_mup_playback_window_t_ParamLimits

0xeeff,	// (0x00026f3f) main_mup2_pane_g3_ParamLimits

0xeeff,	// (0x00026f3f) main_mup2_pane_g3

0x8315,	// (0x00020355) popup_toolbar_window_cp04

0x11bc,	// (0x000191fc) popup_call2_audio_second_window_g3_ParamLimits

0x11bc,	// (0x000191fc) popup_call2_audio_second_window_g3

0x15d4,	// (0x00019614) popup_call2_audio_first_window_g4_ParamLimits

0x15d4,	// (0x00019614) popup_call2_audio_first_window_g4

0x1bfb,	// (0x00019c3b) popup_call2_audio_in_window_g4_ParamLimits

0x1bfb,	// (0x00019c3b) popup_call2_audio_in_window_g4

0x9b8f,	// (0x00021bcf) aid_area_sk_bg_cut_ParamLimits

0x9b8f,	// (0x00021bcf) aid_area_sk_bg_cut

0x0dd6,	// (0x00018e16) aid_area_sk_bg_cut_2_ParamLimits

0x0dd6,	// (0x00018e16) aid_area_sk_bg_cut_2

0xe7c9,	// (0x00026809) aid_placing_details_win

0xe7c9,	// (0x00026809) aid_placing_details_win_2

0xeeff,	// (0x00026f3f) camera2_autofocus_pane_g1_ParamLimits

0x61c7,	// (0x0001e207) popup_fixed_preview_cale_window_ParamLimits

0x61c7,	// (0x0001e207) popup_fixed_preview_cale_window

0x0b1c,	// (0x00018b5c) navi_slider_pane_g3

0x0b13,	// (0x00018b53) navi_slider_pane_g4

0x0b0a,	// (0x00018b4a) navi_slider_pane_g5

0x0b1c,	// (0x00018b5c) navi_slider_pane_g6

0x6655,	// (0x0001e695) navi_slider_pane_g7

0x0c69,	// (0x00018ca9) mup_scale_pane_g3

0x0c72,	// (0x00018cb2) mup_scale_pane_g4

0x0c7b,	// (0x00018cbb) mup_scale_pane_g5

0x98c2,	// (0x00021902) mup_scale_pane_g6

0x98cb,	// (0x0002190b) mup_scale_pane_g7

0x386e,	// (0x0001b8ae) cams2_slider_pane_g3

0x386e,	// (0x0001b8ae) cams2_slider_pane_g4

0x386e,	// (0x0001b8ae) cams2_slider_pane_g5

0x386e,	// (0x0001b8ae) cams2_slider_pane_g6

0x386e,	// (0x0001b8ae) cams2_slider_pane_g7

0x0131,	// (0x00018171) camera2_autofocus_pane_cp_g1

0x1ed3,	// (0x00019f13) bg_popup_preview_window_pane_cp02_ParamLimits

0x1ed3,	// (0x00019f13) bg_popup_preview_window_pane_cp02

0x26ab,	// (0x0001a6eb) list_fp_cale_pane_ParamLimits

0x26ab,	// (0x0001a6eb) list_fp_cale_pane

0x26b7,	// (0x0001a6f7) popup_fixed_preview_cale_window_t1_ParamLimits

0x26b7,	// (0x0001a6f7) popup_fixed_preview_cale_window_t1

0xac4b,	// (0x00022c8b) popup_fixed_preview_cale_window_t2_ParamLimits

0xac4b,	// (0x00022c8b) popup_fixed_preview_cale_window_t2

0xac60,	// (0x00022ca0) popup_fixed_preview_cale_window_t3_ParamLimits

0xac60,	// (0x00022ca0) popup_fixed_preview_cale_window_t3

0x0002,

0xf718,	// (0x00027758) popup_fixed_preview_cale_window_t_ParamLimits

0xf718,	// (0x00027758) popup_fixed_preview_cale_window_t

0xac75,	// (0x00022cb5) list_single_fp_cale_pane_ParamLimits

0xac75,	// (0x00022cb5) list_single_fp_cale_pane

0x26d5,	// (0x0001a715) list_single_fp_cale_pane_g1_ParamLimits

0x26d5,	// (0x0001a715) list_single_fp_cale_pane_g1

0x26e1,	// (0x0001a721) list_single_fp_cale_pane_g2_ParamLimits

0x26e1,	// (0x0001a721) list_single_fp_cale_pane_g2

0x0002,

0xf71f,	// (0x0002775f) list_single_fp_cale_pane_g_ParamLimits

0xf71f,	// (0x0002775f) list_single_fp_cale_pane_g

0x26fa,	// (0x0001a73a) list_single_fp_cale_pane_t1_ParamLimits

0x26fa,	// (0x0001a73a) list_single_fp_cale_pane_t1

0x270c,	// (0x0001a74c) list_single_fp_cale_pane_t2_ParamLimits

0x270c,	// (0x0001a74c) list_single_fp_cale_pane_t2

0x0001,

0xf726,	// (0x00027766) list_single_fp_cale_pane_t_ParamLimits

0xf726,	// (0x00027766) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x622f,	// (0x0001e26f) main_dialer_pane

0xe7c9,	// (0x00026809) aid_cell_size_keypad

0xe7c9,	// (0x00026809) dialer_ne_pane

0xe7c9,	// (0x00026809) grid_dialer_command_1_pane

0xe7c9,	// (0x00026809) grid_dialer_command_2_pane

0xe7c9,	// (0x00026809) grid_dialer_keypad_pane

0x2079,	// (0x0001a0b9) bg_popup_call_pane_cp06_ParamLimits

0x2079,	// (0x0001a0b9) bg_popup_call_pane_cp06

0x2079,	// (0x0001a0b9) dialer_ne_clear_pane_ParamLimits

0x2079,	// (0x0001a0b9) dialer_ne_clear_pane

0x0131,	// (0x00018171) dialer_ne_pane_g1

0x0be3,	// (0x00018c23) dialer_ne_pane_t1_ParamLimits

0x0be3,	// (0x00018c23) dialer_ne_pane_t1

0x2968,	// (0x0001a9a8) dialer_ne_pane_t2_ParamLimits

0x2968,	// (0x0001a9a8) dialer_ne_pane_t2

0xac85,	// (0x00022cc5) dialer_ne_pane_t3_ParamLimits

0xac85,	// (0x00022cc5) dialer_ne_pane_t3

0x0002,

0xf72b,	// (0x0002776b) dialer_ne_pane_t_ParamLimits

0xf72b,	// (0x0002776b) dialer_ne_pane_t

0xac85,	// (0x00022cc5) dialer_ne_pane_t3_copy1_ParamLimits

0xac85,	// (0x00022cc5) dialer_ne_pane_t3_copy1

0x273f,	// (0x0001a77f) cell_dialer_keypad_pane_ParamLimits

0x273f,	// (0x0001a77f) cell_dialer_keypad_pane

0xe82a,	// (0x0002686a) cell_dialer_command_1_pane_ParamLimits

0xe82a,	// (0x0002686a) cell_dialer_command_1_pane

0x2756,	// (0x0001a796) cell_dialer_command_2_pane_ParamLimits

0x2756,	// (0x0001a796) cell_dialer_command_2_pane

0xe82a,	// (0x0002686a) bg_button_pane_cp02_ParamLimits

0xe82a,	// (0x0002686a) bg_button_pane_cp02

0xeeff,	// (0x00026f3f) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) cell_dialer_keypad_pane_g1

0xe82a,	// (0x0002686a) bg_button_pane_cp03_ParamLimits

0xe82a,	// (0x0002686a) bg_button_pane_cp03

0xeeff,	// (0x00026f3f) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) cell_dialer_command_1_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp04

0x0131,	// (0x00018171) cell_dialer_command_2_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp06

0x0131,	// (0x00018171) dialer_ne_clear_pane_g1

0x95f2,	// (0x00021632) navi_pane_g2

0x9620,	// (0x00021660) navi_pane_g3

0x0002,

0xf35a,	// (0x0002739a) navi_pane_g

0x964b,	// (0x0002168b) navi_pane_mv_g2

0x9672,	// (0x000216b2) navi_pane_mv_g5

0x967a,	// (0x000216ba) navi_pane_mv_t1

0xef71,	// (0x00026fb1) main_clock2_pane

0xeef1,	// (0x00026f31) main_clock2_list_pane_ParamLimits

0xeef1,	// (0x00026f31) main_clock2_list_pane

0xacfa,	// (0x00022d3a) main_clock2_pane_t1_ParamLimits

0xacfa,	// (0x00022d3a) main_clock2_pane_t1

0xad28,	// (0x00022d68) main_clock2_pane_t2_ParamLimits

0xad28,	// (0x00022d68) main_clock2_pane_t2

0x0004,

0xf737,	// (0x00027777) main_clock2_pane_t_ParamLimits

0xf737,	// (0x00027777) main_clock2_pane_t

0xad8d,	// (0x00022dcd) popup_clock_analogue_window_cp03_ParamLimits

0xad8d,	// (0x00022dcd) popup_clock_analogue_window_cp03

0xadab,	// (0x00022deb) popup_clock_digital_window_cp02_ParamLimits

0xadab,	// (0x00022deb) popup_clock_digital_window_cp02

0xadeb,	// (0x00022e2b) main_clock2_list_single_pane_ParamLimits

0xadeb,	// (0x00022e2b) main_clock2_list_single_pane

0x00dc,	// (0x0001811c) list_highlight_pane_cp05

0x2797,	// (0x0001a7d7) main_clock2_list_single_pane_t1

0x8315,	// (0x00020355) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g2

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g3

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g4

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x00026f4d) camera2_autofocus_pane_g5

0x0004,

0xf67b,	// (0x000276bb) camera2_autofocus_pane_g_ParamLimits

0xf67b,	// (0x000276bb) camera2_autofocus_pane_g

0xa5f8,	// (0x00022638) camera2_autofocus_pane_cp_g2

0xa600,	// (0x00022640) camera2_autofocus_pane_cp_g3

0xa608,	// (0x00022648) camera2_autofocus_pane_cp_g4

0xa610,	// (0x00022650) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e1,	// (0x00027721) camera2_autofocus_pane_cp_g

0xe7c9,	// (0x00026809) popup_dialer_spcha_window

0xe7c9,	// (0x00026809) bg_popup_sub_pane_cp07

0xe7c9,	// (0x00026809) list_spcha_pane

0x27a5,	// (0x0001a7e5) list_single_spcha_pane_ParamLimits

0x27a5,	// (0x0001a7e5) list_single_spcha_pane

0xe7c9,	// (0x00026809) list_highlight_pane_cp06

0x06c0,	// (0x00018700) list_single_spcha_pane_t1

0x19a5,	// (0x000199e5) popup_call2_audio_out_window_g4_ParamLimits

0x19a5,	// (0x000199e5) popup_call2_audio_out_window_g4

0x622f,	// (0x0001e26f) main_imed2_pane

0x67a3,	// (0x0001e7e3) popup_imed_adjust2_window

0x67b6,	// (0x0001e7f6) popup_imed_trans_window_ParamLimits

0x67b6,	// (0x0001e7f6) popup_imed_trans_window

0x2227,	// (0x0001a267) popup_blid_sat_info2_window_t1

0x2235,	// (0x0001a275) popup_blid_sat_info2_window_t2

0x000a,

0xf610,	// (0x00027650) popup_blid_sat_info2_window_t

0xadfd,	// (0x00022e3d) aid_size_cell_colour_35

0xae17,	// (0x00022e57) aid_size_cell_colour_112

0xae2e,	// (0x00022e6e) aid_size_cell_effect

0xe82a,	// (0x0002686a) bg_tb_trans_pane_cp02

0x068c,	// (0x000186cc) heading_imed_pane

0xae48,	// (0x00022e88) listscroll_imed_pane

0x27b7,	// (0x0001a7f7) heading_imed_pane_g1

0x27bf,	// (0x0001a7ff) heading_imed_pane_t1

0x27cd,	// (0x0001a80d) grid_imed_colour_35_pane_ParamLimits

0x27cd,	// (0x0001a80d) grid_imed_colour_35_pane

0xae54,	// (0x00022e94) grid_imed_effect_pane

0x27e9,	// (0x0001a829) list_imed_aspect_pane

0xae64,	// (0x00022ea4) scroll_pane_cp027_ParamLimits

0xae64,	// (0x00022ea4) scroll_pane_cp027

0xae70,	// (0x00022eb0) cell_imed_effect_pane_ParamLimits

0xae70,	// (0x00022eb0) cell_imed_effect_pane

0x27f1,	// (0x0001a831) cell_imed_colour_pane_ParamLimits

0x27f1,	// (0x0001a831) cell_imed_colour_pane

0x283b,	// (0x0001a87b) cell_imed_colour_pane_g1_ParamLimits

0x283b,	// (0x0001a87b) cell_imed_colour_pane_g1

0x284c,	// (0x0001a88c) hgihlgiht_grid_pane_cp016_ParamLimits

0x284c,	// (0x0001a88c) hgihlgiht_grid_pane_cp016

0xae8c,	// (0x00022ecc) cell_imed_effect_pane_g1

0xae94,	// (0x00022ed4) grid_highlight_pane_cp017

0x285d,	// (0x0001a89d) list_imed_single_pane_ParamLimits

0x285d,	// (0x0001a89d) list_imed_single_pane

0xe7c9,	// (0x00026809) list_highlight_pane_cp07

0x2871,	// (0x0001a8b1) list_imed_aspect_pane_comp1_t1

0x0bf7,	// (0x00018c37) bg_tb_trans_pane_cp05

0x2893,	// (0x0001a8d3) popup_imed_adjust2_window_g1

0x28ba,	// (0x0001a8fa) popup_imed_adjust2_window_t1

0x28d2,	// (0x0001a912) slider_imed_adjust_pane

0x28e6,	// (0x0001a926) slider_imed_adjust_pane_g1

0x28f6,	// (0x0001a936) slider_imed_adjust_pane_g2

0x2906,	// (0x0001a946) slider_imed_adjust_pane_g3

0x2917,	// (0x0001a957) slider_imed_adjust_pane_g4

0x0003,

0xf754,	// (0x00027794) slider_imed_adjust_pane_g

0xae9d,	// (0x00022edd) aid_size_cell_clipart2

0x2928,	// (0x0001a968) grid_imed_clipart_pane

0x2932,	// (0x0001a972) scroll_pane_cp031

0xaea9,	// (0x00022ee9) cell_imed_clipart_pane_ParamLimits

0xaea9,	// (0x00022ee9) cell_imed_clipart_pane

0xaec7,	// (0x00022f07) cell_imed_clipart_pane_g1

0xe7c9,	// (0x00026809) grid_highlight_pane_cp014

0xacdc,	// (0x00022d1c) main_clock2_pane_g1_ParamLimits

0xacdc,	// (0x00022d1c) main_clock2_pane_g1

0xadc7,	// (0x00022e07) aid_call2_pane_cp10

0xadd9,	// (0x00022e19) aid_call_pane_cp10

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g1

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g2

0x693e,	// (0x0001e97e) popup_clock_analogue_window_cp10_g3

0x693e,	// (0x0001e97e) popup_clock_analogue_window_cp10_g4

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf742,	// (0x00027782) popup_clock_analogue_window_cp10_g

0x6954,	// (0x0001e994) popup_clock_analogue_window_cp10_t1

0x6973,	// (0x0001e9b3) clock_digital_number_pane_cp10_ParamLimits

0x6973,	// (0x0001e9b3) clock_digital_number_pane_cp10

0x698d,	// (0x0001e9cd) clock_digital_number_pane_cp11_ParamLimits

0x698d,	// (0x0001e9cd) clock_digital_number_pane_cp11

0x69a7,	// (0x0001e9e7) clock_digital_number_pane_cp12_ParamLimits

0x69a7,	// (0x0001e9e7) clock_digital_number_pane_cp12

0x69c1,	// (0x0001ea01) clock_digital_number_pane_cp13_ParamLimits

0x69c1,	// (0x0001ea01) clock_digital_number_pane_cp13

0x69dd,	// (0x0001ea1d) clock_digital_separator_pane_cp10_ParamLimits

0x69dd,	// (0x0001ea1d) clock_digital_separator_pane_cp10

0x69f7,	// (0x0001ea37) popup_clock_digital_window_cp02_t1_ParamLimits

0x69f7,	// (0x0001ea37) popup_clock_digital_window_cp02_t1

0xee7c,	// (0x00026ebc) clock_digital_number_pane_cp10_g1

0xee7c,	// (0x00026ebc) clock_digital_number_pane_cp10_g2

0x0001,

0xf75d,	// (0x0002779d) clock_digital_number_pane_cp10_g

0xee7c,	// (0x00026ebc) clock_digital_separator_pane_cp10_g1

0xee7c,	// (0x00026ebc) clock_digital_separator_pane_g2_cp10

0x0ac8,	// (0x00018b08) navi_pane_vded_g4

0x0ad1,	// (0x00018b11) navi_pane_vded_g5

0x0ada,	// (0x00018b1a) navi_pane_vded_t1

0x622f,	// (0x0001e26f) main_vded_pane

0xaed0,	// (0x00022f10) main_vded_pane_g1

0xaedc,	// (0x00022f1c) main_vded_pane_g2

0xaee6,	// (0x00022f26) main_vded_pane_g3

0x0002,

0xf762,	// (0x000277a2) main_vded_pane_g

0xaef0,	// (0x00022f30) main_vded_pane_t1

0xaefe,	// (0x00022f3e) main_vded_pane_t2

0x0001,

0xf769,	// (0x000277a9) main_vded_pane_t

0xaf0c,	// (0x00022f4c) vded_slider_pane

0xaf16,	// (0x00022f56) vded_video_pane

0x293a,	// (0x0001a97a) vded_video_pane_g1

0xaf22,	// (0x00022f62) vded_video_pane_g2

0x0131,	// (0x00018171) vded_video_pane_g3

0x0002,

0xf76e,	// (0x000277ae) vded_video_pane_g

0x2944,	// (0x0001a984) vded_slider_pane_g1

0x2152,	// (0x0001a192) vded_slider_pane_g2

0x294d,	// (0x0001a98d) vded_slider_pane_g3

0x2956,	// (0x0001a996) vded_slider_pane_g4

0x295f,	// (0x0001a99f) vded_slider_pane_g5

0x0004,

0xf775,	// (0x000277b5) vded_slider_pane_g

0xabd5,	// (0x00022c15) mup3_rocker_pane_ParamLimits

0xabd5,	// (0x00022c15) mup3_rocker_pane

0xaf2b,	// (0x00022f6b) mup3_control_keys_pane_g1

0xaf33,	// (0x00022f73) mup3_control_keys_pane_g2

0xaf3b,	// (0x00022f7b) mup3_control_keys_pane_g3

0xaf43,	// (0x00022f83) mup3_control_keys_pane_g4

0x0003,

0xf780,	// (0x000277c0) mup3_control_keys_pane_g

0x61ef,	// (0x0001e22f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x61ef,	// (0x0001e22f) popup_toolbar2_fixed_window_cp01

0xabf1,	// (0x00022c31) popup_toolbar2_fixed_window_cp02_ParamLimits

0xabf1,	// (0x00022c31) popup_toolbar2_fixed_window_cp02

0x132e,	// (0x0001936e) popup_call2_audio_second_window_t4_ParamLimits

0x132e,	// (0x0001936e) popup_call2_audio_second_window_t4

0x186a,	// (0x000198aa) popup_call2_audio_first_window_t6_ParamLimits

0x186a,	// (0x000198aa) popup_call2_audio_first_window_t6

0x1aa8,	// (0x00019ae8) popup_call2_audio_out_window_t6_ParamLimits

0x1aa8,	// (0x00019ae8) popup_call2_audio_out_window_t6

0x622f,	// (0x0001e26f) main_vitu_pane

0xeef1,	// (0x00026f31) aid_size_cell_itu_ParamLimits

0xeef1,	// (0x00026f31) aid_size_cell_itu

0xeef1,	// (0x00026f31) bg_popup_window_pane_cp08_ParamLimits

0xeef1,	// (0x00026f31) bg_popup_window_pane_cp08

0xeef1,	// (0x00026f31) field_vitu_entry_pane_ParamLimits

0xeef1,	// (0x00026f31) field_vitu_entry_pane

0xeef1,	// (0x00026f31) grid_vitu_function_pane_ParamLimits

0xeef1,	// (0x00026f31) grid_vitu_function_pane

0xeef1,	// (0x00026f31) grid_vitu_itu_pane_ParamLimits

0xeef1,	// (0x00026f31) grid_vitu_itu_pane

0xeef1,	// (0x00026f31) cell_vitu_itu_pane_ParamLimits

0xeef1,	// (0x00026f31) cell_vitu_itu_pane

0xeef1,	// (0x00026f31) cell_vitu_function_pane_ParamLimits

0xeef1,	// (0x00026f31) cell_vitu_function_pane

0xe82a,	// (0x0002686a) bg_popup_sub_pane_cp08_ParamLimits

0xe82a,	// (0x0002686a) bg_popup_sub_pane_cp08

0x0103,	// (0x00018143) field_vitu_entry_pane_t1_ParamLimits

0x0103,	// (0x00018143) field_vitu_entry_pane_t1

0x2968,	// (0x0001a9a8) field_vitu_entry_pane_t2_ParamLimits

0x2968,	// (0x0001a9a8) field_vitu_entry_pane_t2

0x0001,

0xf789,	// (0x000277c9) field_vitu_entry_pane_t_ParamLimits

0xf789,	// (0x000277c9) field_vitu_entry_pane_t

0x2079,	// (0x0001a0b9) bg_button_pane_cp05_ParamLimits

0x2079,	// (0x0001a0b9) bg_button_pane_cp05

0x2985,	// (0x0001a9c5) cell_vitu_itu_pane_g1

0x0bcf,	// (0x00018c0f) cell_vitu_itu_pane_t1_ParamLimits

0x0bcf,	// (0x00018c0f) cell_vitu_itu_pane_t1

0x0bcf,	// (0x00018c0f) cell_vitu_itu_pane_t2_ParamLimits

0x0bcf,	// (0x00018c0f) cell_vitu_itu_pane_t2

0x0002,

0xf78e,	// (0x000277ce) cell_vitu_itu_pane_t_ParamLimits

0xf78e,	// (0x000277ce) cell_vitu_itu_pane_t

0xe7c9,	// (0x00026809) bg_button_pane_cp07

0x0131,	// (0x00018171) cell_vitu_function_pane_g1

0x6308,	// (0x0001e348) main_calc_pane_g1

0x5fd3,	// (0x0001e013) aid_visual_content_pane

0x622f,	// (0x0001e26f) main_vradio_pane

0xef0d,	// (0x00026f4d) main_vradio_pane_g1_ParamLimits

0xef0d,	// (0x00026f4d) main_vradio_pane_g1

0xef0d,	// (0x00026f4d) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x00026f4d) main_vradio_pane_g2

0x0001,

0xf795,	// (0x000277d5) main_vradio_pane_g_ParamLimits

0xf795,	// (0x000277d5) main_vradio_pane_g

0x0be3,	// (0x00018c23) main_vradio_pane_t1_ParamLimits

0x0be3,	// (0x00018c23) main_vradio_pane_t1

0x0be3,	// (0x00018c23) main_vradio_pane_t2_ParamLimits

0x0be3,	// (0x00018c23) main_vradio_pane_t2

0x0be3,	// (0x00018c23) main_vradio_pane_t3_ParamLimits

0x0be3,	// (0x00018c23) main_vradio_pane_t3

0x0002,

0xf79a,	// (0x000277da) main_vradio_pane_t_ParamLimits

0xf79a,	// (0x000277da) main_vradio_pane_t

0xeef1,	// (0x00026f31) vradio_rocker_control_pane_ParamLimits

0xeef1,	// (0x00026f31) vradio_rocker_control_pane

0xeef1,	// (0x00026f31) vradio_station_info_pane_ParamLimits

0xeef1,	// (0x00026f31) vradio_station_info_pane

0xe82a,	// (0x0002686a) vradio_frequency_info_pane_ParamLimits

0xe82a,	// (0x0002686a) vradio_frequency_info_pane

0x0131,	// (0x00018171) vradio_station_info_pane_g1

0x0bcf,	// (0x00018c0f) vradio_station_info_pane_t1_ParamLimits

0x0bcf,	// (0x00018c0f) vradio_station_info_pane_t1

0x0be3,	// (0x00018c23) vradio_station_info_pane_t2_ParamLimits

0x0be3,	// (0x00018c23) vradio_station_info_pane_t2

0x0001,

0xf7a1,	// (0x000277e1) vradio_station_info_pane_t_ParamLimits

0xf7a1,	// (0x000277e1) vradio_station_info_pane_t

0xe7c9,	// (0x00026809) vradio_tuning_pane

0xaf53,	// (0x00022f93) vradio_rocker_control_pane_g1

0x29a1,	// (0x0001a9e1) vradio_rocker_control_pane_g2

0xaf5b,	// (0x00022f9b) vradio_rocker_control_pane_g3

0xaf63,	// (0x00022fa3) vradio_rocker_control_pane_g4

0xaf6d,	// (0x00022fad) vradio_rocker_control_pane_g5

0x0004,

0xf7a6,	// (0x000277e6) vradio_rocker_control_pane_g

0x0131,	// (0x00018171) vradio_frequency_info_pane_g1

0x0103,	// (0x00018143) vradio_frequency_info_pane_t1_ParamLimits

0x0103,	// (0x00018143) vradio_frequency_info_pane_t1

0xaf75,	// (0x00022fb5) vradio_tuning_pane_g1

0xaf82,	// (0x00022fc2) vradio_tuning_pane_t1

0x5fef,	// (0x0001e02f) area_side_right_pane_ParamLimits

0x5fef,	// (0x0001e02f) area_side_right_pane

0x1e9a,	// (0x00019eda) status_small_pane_g1

0x1ea2,	// (0x00019ee2) status_small_pane_g2

0x1eab,	// (0x00019eeb) status_small_pane_g3

0x1eb4,	// (0x00019ef4) status_small_pane_g4

0x0003,

0xf572,	// (0x000275b2) status_small_pane_g

0x1ebd,	// (0x00019efd) status_small_pane_t1

0x622f,	// (0x0001e26f) main_video3_pane

0x29a9,	// (0x0001a9e9) cams_zoom_vslider_pane

0x29b1,	// (0x0001a9f1) image3_wide_pane_ParamLimits

0x29b1,	// (0x0001a9f1) image3_wide_pane

0x29cb,	// (0x0001aa0b) image3_wide_small_pane

0x29d7,	// (0x0001aa17) main_video3_pane_g1_ParamLimits

0x29d7,	// (0x0001aa17) main_video3_pane_g1

0x29f3,	// (0x0001aa33) main_video3_pane_g2_ParamLimits

0x29f3,	// (0x0001aa33) main_video3_pane_g2

0x0001,

0xf7b1,	// (0x000277f1) main_video3_pane_g_ParamLimits

0xf7b1,	// (0x000277f1) main_video3_pane_g

0x2a0f,	// (0x0001aa4f) main_video3_pane_t1_ParamLimits

0x2a0f,	// (0x0001aa4f) main_video3_pane_t1

0x2a3a,	// (0x0001aa7a) main_video3_pane_t2_ParamLimits

0x2a3a,	// (0x0001aa7a) main_video3_pane_t2

0x2a67,	// (0x0001aaa7) main_video3_pane_t3_ParamLimits

0x2a67,	// (0x0001aaa7) main_video3_pane_t3

0x0002,

0xf7b6,	// (0x000277f6) main_video3_pane_t_ParamLimits

0xf7b6,	// (0x000277f6) main_video3_pane_t

0x2a94,	// (0x0001aad4) cams_zoom_vslider_pane_g1

0x2a9d,	// (0x0001aadd) cams_zoom_vslider_pane_g2

0x0001,

0xf7bd,	// (0x000277fd) cams_zoom_vslider_pane_g

0x2aa5,	// (0x0001aae5) small_slider_vertical_pane

0x0131,	// (0x00018171) small_slider_vertical_pane_g1

0x0131,	// (0x00018171) small_slider_vertical_pane_g2

0x2aad,	// (0x0001aaed) small_slider_vertical_pane_g3

0x0002,

0xf7c2,	// (0x00027802) small_slider_vertical_pane_g

0x622f,	// (0x0001e26f) main_hwr_training_pane

0x2ab6,	// (0x0001aaf6) hwr_training_instruct_pane_ParamLimits

0x2ab6,	// (0x0001aaf6) hwr_training_instruct_pane

0xaf91,	// (0x00022fd1) hwr_training_navi_pane_ParamLimits

0xaf91,	// (0x00022fd1) hwr_training_navi_pane

0xafab,	// (0x00022feb) hwr_training_write_pane_ParamLimits

0xafab,	// (0x00022feb) hwr_training_write_pane

0xe7c9,	// (0x00026809) bg_frame_shadow_pane

0x2aed,	// (0x0001ab2d) hwr_training_write_pane_g1

0x2af5,	// (0x0001ab35) hwr_training_write_pane_g2

0x2afd,	// (0x0001ab3d) hwr_training_write_pane_g3

0x2b05,	// (0x0001ab45) hwr_training_write_pane_g4

0x2b0d,	// (0x0001ab4d) hwr_training_write_pane_g5

0x2b15,	// (0x0001ab55) hwr_training_write_pane_g6

0x2b1d,	// (0x0001ab5d) hwr_training_write_pane_g7

0x0006,

0xf7c9,	// (0x00027809) hwr_training_write_pane_g

0x6a18,	// (0x0001ea58) hwr_training_navi_pane_g1_ParamLimits

0x6a18,	// (0x0001ea58) hwr_training_navi_pane_g1

0x6a2a,	// (0x0001ea6a) hwr_training_navi_pane_g2_ParamLimits

0x6a2a,	// (0x0001ea6a) hwr_training_navi_pane_g2

0x6a3c,	// (0x0001ea7c) hwr_training_navi_pane_g3_ParamLimits

0x6a3c,	// (0x0001ea7c) hwr_training_navi_pane_g3

0x6a4c,	// (0x0001ea8c) hwr_training_navi_pane_g4_ParamLimits

0x6a4c,	// (0x0001ea8c) hwr_training_navi_pane_g4

0x0004,

0xf7d8,	// (0x00027818) hwr_training_navi_pane_g_ParamLimits

0xf7d8,	// (0x00027818) hwr_training_navi_pane_g

0x6a66,	// (0x0001eaa6) hwr_training_navi_pane_t1

0xafe3,	// (0x00023023) list_single_hwr_training_instruct_pane_ParamLimits

0xafe3,	// (0x00023023) list_single_hwr_training_instruct_pane

0x2b74,	// (0x0001abb4) list_single_hwr_training_instruct_pane_t1

0x232e,	// (0x0001a36e) bg_frame_shadow_pane_g1

0x2b83,	// (0x0001abc3) bg_frame_shadow_pane_g2

0x2b8b,	// (0x0001abcb) bg_frame_shadow_pane_g3

0x2b93,	// (0x0001abd3) bg_frame_shadow_pane_g4

0x2b9b,	// (0x0001abdb) bg_frame_shadow_pane_g5

0x2ba3,	// (0x0001abe3) bg_frame_shadow_pane_g6

0x2bab,	// (0x0001abeb) bg_frame_shadow_pane_g7

0xf029,	// (0x00027069) bg_frame_shadow_pane_g8

0x0007,

0xf7e3,	// (0x00027823) bg_frame_shadow_pane_g

0x622f,	// (0x0001e26f) main_video_tele_dialer_pane

0x6a74,	// (0x0001eab4) aid_size_cell_video_keypad_ParamLimits

0x6a74,	// (0x0001eab4) aid_size_cell_video_keypad

0x6a84,	// (0x0001eac4) grid_video_dialer_keypad_pane_ParamLimits

0x6a84,	// (0x0001eac4) grid_video_dialer_keypad_pane

0x6a92,	// (0x0001ead2) video_down_pane_cp_ParamLimits

0x6a92,	// (0x0001ead2) video_down_pane_cp

0x6aa0,	// (0x0001eae0) cell_video_dialer_keypad_pane_ParamLimits

0x6aa0,	// (0x0001eae0) cell_video_dialer_keypad_pane

0x2bb3,	// (0x0001abf3) bg_button_pane_cp08_ParamLimits

0x2bb3,	// (0x0001abf3) bg_button_pane_cp08

0xb03c,	// (0x0002307c) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb03c,	// (0x0002307c) cell_video_dialer_keypad_pane_g1

0xabc9,	// (0x00022c09) mup3_rocker2_pane_ParamLimits

0xabc9,	// (0x00022c09) mup3_rocker2_pane

0x0131,	// (0x00018171) mup3_rocker2_pane_g1

0x6707,	// (0x0001e747) main_dialer2_pane

0x622f,	// (0x0001e26f) main_mp4_pane

0x6ad5,	// (0x0001eb15) main_mp4_pane_g1_ParamLimits

0x6ad5,	// (0x0001eb15) main_mp4_pane_g1

0x6ae3,	// (0x0001eb23) main_mp4_pane_g2_ParamLimits

0x6ae3,	// (0x0001eb23) main_mp4_pane_g2

0x6af1,	// (0x0001eb31) main_mp4_pane_g3_ParamLimits

0x6af1,	// (0x0001eb31) main_mp4_pane_g3

0x6b44,	// (0x0001eb84) main_mp4_pane_g4_ParamLimits

0x6b44,	// (0x0001eb84) main_mp4_pane_g4

0x6b72,	// (0x0001ebb2) main_mp4_pane_g5_ParamLimits

0x6b72,	// (0x0001ebb2) main_mp4_pane_g5

0x0007,

0xf803,	// (0x00027843) main_mp4_pane_g_ParamLimits

0xf803,	// (0x00027843) main_mp4_pane_g

0x6be6,	// (0x0001ec26) main_mp4_pane_t1_ParamLimits

0x6be6,	// (0x0001ec26) main_mp4_pane_t1

0x6c42,	// (0x0001ec82) main_mp4_pane_t2_ParamLimits

0x6c42,	// (0x0001ec82) main_mp4_pane_t2

0x2d3b,	// (0x0001ad7b) main_mp4_pane_t3_ParamLimits

0x2d3b,	// (0x0001ad7b) main_mp4_pane_t3

0x6c94,	// (0x0001ecd4) main_mp4_pane_t4_ParamLimits

0x6c94,	// (0x0001ecd4) main_mp4_pane_t4

0x0003,

0xf814,	// (0x00027854) main_mp4_pane_t_ParamLimits

0xf814,	// (0x00027854) main_mp4_pane_t

0x6cd4,	// (0x0001ed14) mp4_progress_pane_ParamLimits

0x6cd4,	// (0x0001ed14) mp4_progress_pane

0x6d1e,	// (0x0001ed5e) mp4_rocker_pane_ParamLimits

0x6d1e,	// (0x0001ed5e) mp4_rocker_pane

0x2e13,	// (0x0001ae53) mp4_progress_pane_t1

0x2e2c,	// (0x0001ae6c) mp4_progress_pane_t2

0x0001,

0xf81d,	// (0x0002785d) mp4_progress_pane_t

0x2e45,	// (0x0001ae85) mup_progress_pane_cp04

0x386e,	// (0x0001b8ae) mp4_rocker_pane_g1

0x6d3e,	// (0x0001ed7e) aid_cell_size_keypad2_ParamLimits

0x6d3e,	// (0x0001ed7e) aid_cell_size_keypad2

0x6d4e,	// (0x0001ed8e) dialer2_ne_pane_ParamLimits

0x6d4e,	// (0x0001ed8e) dialer2_ne_pane

0x6d5a,	// (0x0001ed9a) grid_dialer2_keypad_pane_ParamLimits

0x6d5a,	// (0x0001ed9a) grid_dialer2_keypad_pane

0x206b,	// (0x0001a0ab) bg_popup_call_pane_cp07_ParamLimits

0x206b,	// (0x0001a0ab) bg_popup_call_pane_cp07

0xb077,	// (0x000230b7) dialer2_ne_pane_t1_ParamLimits

0xb077,	// (0x000230b7) dialer2_ne_pane_t1

0x6d68,	// (0x0001eda8) cell_dialer2_keypad_pane_ParamLimits

0x6d68,	// (0x0001eda8) cell_dialer2_keypad_pane

0x2e6a,	// (0x0001aeaa) bg_button_pane_pane_cp04_ParamLimits

0x2e6a,	// (0x0001aeaa) bg_button_pane_pane_cp04

0xb09c,	// (0x000230dc) cell_dialer2_keypad_pane_g1_ParamLimits

0xb09c,	// (0x000230dc) cell_dialer2_keypad_pane_g1

0x81e7,	// (0x00020227) aid_placing_vt_set_content_ParamLimits

0x81e7,	// (0x00020227) aid_placing_vt_set_content

0x820f,	// (0x0002024f) aid_placing_vt_set_title_ParamLimits

0x820f,	// (0x0002024f) aid_placing_vt_set_title

0x622f,	// (0x0001e26f) main_image3_pane

0x6db1,	// (0x0001edf1) area_side_right_pane_cp01_ParamLimits

0x6db1,	// (0x0001edf1) area_side_right_pane_cp01

0x6de0,	// (0x0001ee20) main_image3_pane_g1_ParamLimits

0x6de0,	// (0x0001ee20) main_image3_pane_g1

0x6dee,	// (0x0001ee2e) main_image3_pane_g2_ParamLimits

0x6dee,	// (0x0001ee2e) main_image3_pane_g2

0x6e07,	// (0x0001ee47) main_image3_pane_g3_ParamLimits

0x6e07,	// (0x0001ee47) main_image3_pane_g3

0x6e20,	// (0x0001ee60) main_image3_pane_g4_ParamLimits

0x6e20,	// (0x0001ee60) main_image3_pane_g4

0x0003,

0xf82c,	// (0x0002786c) main_image3_pane_g_ParamLimits

0xf82c,	// (0x0002786c) main_image3_pane_g

0x6e39,	// (0x0001ee79) main_image3_pane_t1_ParamLimits

0x6e39,	// (0x0001ee79) main_image3_pane_t1

0x6e5e,	// (0x0001ee9e) main_image3_pane_t2_ParamLimits

0x6e5e,	// (0x0001ee9e) main_image3_pane_t2

0x6e7d,	// (0x0001eebd) main_image3_pane_t3_ParamLimits

0x6e7d,	// (0x0001eebd) main_image3_pane_t3

0x0003,

0xf835,	// (0x00027875) main_image3_pane_t_ParamLimits

0xf835,	// (0x00027875) main_image3_pane_t

0xeef1,	// (0x00026f31) grid_sctrl_middle_pane_cp01_ParamLimits

0xeef1,	// (0x00026f31) grid_sctrl_middle_pane_cp01

0xb104,	// (0x00023144) cell_sctrl_middle_pane_cp01_ParamLimits

0xb104,	// (0x00023144) cell_sctrl_middle_pane_cp01

0xb115,	// (0x00023155) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb115,	// (0x00023155) cell_sctrl_middle_pane_cp01_g1

0x622f,	// (0x0001e26f) main_call4_pane

0x6ede,	// (0x0001ef1e) aid_size_button_call4_ParamLimits

0x6ede,	// (0x0001ef1e) aid_size_button_call4

0x6f14,	// (0x0001ef54) call4_windows_pane_ParamLimits

0x6f14,	// (0x0001ef54) call4_windows_pane

0x6f29,	// (0x0001ef69) grid_call4_button_pane_ParamLimits

0x6f29,	// (0x0001ef69) grid_call4_button_pane

0xb12e,	// (0x0002316e) call4_windows_conf_pane

0xb147,	// (0x00023187) popup_call4_audio_first_window_ParamLimits

0xb147,	// (0x00023187) popup_call4_audio_first_window

0xb197,	// (0x000231d7) popup_call4_audio_second_window_ParamLimits

0xb197,	// (0x000231d7) popup_call4_audio_second_window

0xb1b0,	// (0x000231f0) popup_call4_audio_wait_window_ParamLimits

0xb1b0,	// (0x000231f0) popup_call4_audio_wait_window

0x6f4d,	// (0x0001ef8d) cell_call4_button_pane_ParamLimits

0x6f4d,	// (0x0001ef8d) cell_call4_button_pane

0xb1be,	// (0x000231fe) bg_button_pane_cp09_ParamLimits

0xb1be,	// (0x000231fe) bg_button_pane_cp09

0x6f70,	// (0x0001efb0) cell_call4_button_pane_g1_ParamLimits

0x6f70,	// (0x0001efb0) cell_call4_button_pane_g1

0xb1ca,	// (0x0002320a) cell_call4_button_pane_t1_ParamLimits

0xb1ca,	// (0x0002320a) cell_call4_button_pane_t1

0x2ee4,	// (0x0001af24) popup_call4_audio_conf_window_ParamLimits

0x2ee4,	// (0x0001af24) popup_call4_audio_conf_window

0xabfe,	// (0x00022c3e) mup3_progress_pane_t1_ParamLimits

0xac1c,	// (0x00022c5c) mup3_progress_pane_t2_ParamLimits

0x2668,	// (0x0001a6a8) mup3_progress_pane_t3_ParamLimits

0xf70a,	// (0x0002774a) mup3_progress_pane_t_ParamLimits

0x2685,	// (0x0001a6c5) mup_progress_pane_cp03_ParamLimits

0xaf4b,	// (0x00022f8b) mup3_control_keys_pane_g4_copy1

0x6d02,	// (0x0001ed42) mp4_rocker2_pane_ParamLimits

0x6d02,	// (0x0001ed42) mp4_rocker2_pane

0x2f06,	// (0x0001af46) mp4_rocker2_pane_g1

0x2efe,	// (0x0001af3e) mp4_rocker2_pane_g2

0x6faf,	// (0x0001efef) mp4_rocker2_pane_g3

0x6fb7,	// (0x0001eff7) mp4_rocker2_pane_g4

0x6fbf,	// (0x0001efff) mp4_rocker2_pane_g5

0x0004,

0xf83e,	// (0x0002787e) mp4_rocker2_pane_g

0x622f,	// (0x0001e26f) main_camera4_pane

0x622f,	// (0x0001e26f) main_video4_pane

0xaffc,	// (0x0002303c) main_video_tele_dialer_pane_t1_ParamLimits

0xaffc,	// (0x0002303c) main_video_tele_dialer_pane_t1

0xb00e,	// (0x0002304e) main_video_tele_dialer_pane_t2_ParamLimits

0xb00e,	// (0x0002304e) main_video_tele_dialer_pane_t2

0x0001,

0xf7f4,	// (0x00027834) main_video_tele_dialer_pane_t_ParamLimits

0xf7f4,	// (0x00027834) main_video_tele_dialer_pane_t

0x6fdf,	// (0x0001f01f) cam4_autofocus_pane_ParamLimits

0x6fdf,	// (0x0001f01f) cam4_autofocus_pane

0x6ff7,	// (0x0001f037) cam4_image_uncrop_pane_ParamLimits

0x6ff7,	// (0x0001f037) cam4_image_uncrop_pane

0x7010,	// (0x0001f050) cam4_indicators_pane_ParamLimits

0x7010,	// (0x0001f050) cam4_indicators_pane

0x702c,	// (0x0001f06c) main_camera4_pane_g1_ParamLimits

0x702c,	// (0x0001f06c) main_camera4_pane_g1

0x7038,	// (0x0001f078) main_camera4_pane_g2_ParamLimits

0x7038,	// (0x0001f078) main_camera4_pane_g2

0x7038,	// (0x0001f078) main_camera4_pane_g3_ParamLimits

0x7038,	// (0x0001f078) main_camera4_pane_g3

0x7044,	// (0x0001f084) main_camera4_pane_g4_ParamLimits

0x7044,	// (0x0001f084) main_camera4_pane_g4

0x7050,	// (0x0001f090) main_camera4_pane_g5_ParamLimits

0x7050,	// (0x0001f090) main_camera4_pane_g5

0x0005,

0xf849,	// (0x00027889) main_camera4_pane_g_ParamLimits

0xf849,	// (0x00027889) main_camera4_pane_g

0x706a,	// (0x0001f0aa) main_camera4_pane_t1_ParamLimits

0x706a,	// (0x0001f0aa) main_camera4_pane_t1

0x42cb,	// (0x0001c30b) bg_tb_trans_pane_cp06

0x7096,	// (0x0001f0d6) cam4_indicators_pane_g1

0x70a7,	// (0x0001f0e7) cam4_indicators_pane_g2

0x0002,

0xf864,	// (0x000278a4) cam4_indicators_pane_g

0x70bf,	// (0x0001f0ff) cam4_indicators_pane_t1

0x70e9,	// (0x0001f129) main_video4_pane_g1_ParamLimits

0x70e9,	// (0x0001f129) main_video4_pane_g1

0x70f5,	// (0x0001f135) main_video4_pane_g2_ParamLimits

0x70f5,	// (0x0001f135) main_video4_pane_g2

0x7101,	// (0x0001f141) main_video4_pane_g3_ParamLimits

0x7101,	// (0x0001f141) main_video4_pane_g3

0x710d,	// (0x0001f14d) main_video4_pane_g4_ParamLimits

0x710d,	// (0x0001f14d) main_video4_pane_g4

0x0004,

0xf86b,	// (0x000278ab) main_video4_pane_g_ParamLimits

0xf86b,	// (0x000278ab) main_video4_pane_g

0x712f,	// (0x0001f16f) vid4_indicators_pane_ParamLimits

0x712f,	// (0x0001f16f) vid4_indicators_pane

0x714e,	// (0x0001f18e) video4_image_uncrop_cif_pane_ParamLimits

0x714e,	// (0x0001f18e) video4_image_uncrop_cif_pane

0x715d,	// (0x0001f19d) video4_image_uncrop_nhd_pane_ParamLimits

0x715d,	// (0x0001f19d) video4_image_uncrop_nhd_pane

0x6ff7,	// (0x0001f037) video4_image_uncrop_vga_pane_ParamLimits

0x6ff7,	// (0x0001f037) video4_image_uncrop_vga_pane

0x66f9,	// (0x0001e739) bg_tb_trans_pane_cp07

0x7176,	// (0x0001f1b6) vid4_indicators_pane_g1

0x718c,	// (0x0001f1cc) vid4_indicators_pane_g2

0x71a0,	// (0x0001f1e0) vid4_indicators_pane_g3

0x0004,

0xf876,	// (0x000278b6) vid4_indicators_pane_g

0x71d1,	// (0x0001f211) vid4_indicators_pane_t1

0xb202,	// (0x00023242) cam4_autofocus_pane_g1

0xb20a,	// (0x0002324a) cam4_autofocus_pane_g2

0xb212,	// (0x00023252) cam4_autofocus_pane_g3

0x0002,

0xf881,	// (0x000278c1) cam4_autofocus_pane_g

0xb21a,	// (0x0002325a) cam4_autofocus_pane_g3_copy1

0xb020,	// (0x00023060) video_down_pane_cp_t1

0xb02e,	// (0x0002306e) video_down_pane_cp_t2

0x0001,

0xf7f9,	// (0x00027839) video_down_pane_cp_t

0x6221,	// (0x0001e261) popup_vitu2_window_ParamLimits

0x6221,	// (0x0001e261) popup_vitu2_window

0x71e8,	// (0x0001f228) aid_size_cell2_itu2_ParamLimits

0x71e8,	// (0x0001f228) aid_size_cell2_itu2

0x720a,	// (0x0001f24a) aid_size_cell_itu2_ParamLimits

0x720a,	// (0x0001f24a) aid_size_cell_itu2

0x724e,	// (0x0001f28e) bg_popup_window_pane_cp09_ParamLimits

0x724e,	// (0x0001f28e) bg_popup_window_pane_cp09

0x725c,	// (0x0001f29c) field_vitu2_entry_pane_ParamLimits

0x725c,	// (0x0001f29c) field_vitu2_entry_pane

0x727c,	// (0x0001f2bc) grid_vitu2_function_pane_ParamLimits

0x727c,	// (0x0001f2bc) grid_vitu2_function_pane

0x72c0,	// (0x0001f300) grid_vitu2_itu_pane_ParamLimits

0x72c0,	// (0x0001f300) grid_vitu2_itu_pane

0x7336,	// (0x0001f376) cell_vitu2_itu_pane_ParamLimits

0x7336,	// (0x0001f376) cell_vitu2_itu_pane

0x7351,	// (0x0001f391) cell_vitu2_function_pane_ParamLimits

0x7351,	// (0x0001f391) cell_vitu2_function_pane

0x3015,	// (0x0001b055) bg_popup_call_pane_cp08_ParamLimits

0x3015,	// (0x0001b055) bg_popup_call_pane_cp08

0x302c,	// (0x0001b06c) field_vitu2_entry_pane_g1

0x3038,	// (0x0001b078) field_vitu2_entry_pane_g2

0x0002,

0xf888,	// (0x000278c8) field_vitu2_entry_pane_g

0x3044,	// (0x0001b084) field_vitu2_entry_pane_t1_ParamLimits

0x3044,	// (0x0001b084) field_vitu2_entry_pane_t1

0x3073,	// (0x0001b0b3) field_vitu2_entry_pane_t2_ParamLimits

0x3073,	// (0x0001b0b3) field_vitu2_entry_pane_t2

0x0001,

0xf88f,	// (0x000278cf) field_vitu2_entry_pane_t_ParamLimits

0xf88f,	// (0x000278cf) field_vitu2_entry_pane_t

0x68ac,	// (0x0001e8ec) bg_button_pane_cp010_ParamLimits

0x68ac,	// (0x0001e8ec) bg_button_pane_cp010

0x7395,	// (0x0001f3d5) cell_vitu2_itu_pane_g1

0x73bb,	// (0x0001f3fb) cell_vitu2_itu_pane_t1_ParamLimits

0x73bb,	// (0x0001f3fb) cell_vitu2_itu_pane_t1

0x7407,	// (0x0001f447) cell_vitu2_itu_pane_t2_ParamLimits

0x7407,	// (0x0001f447) cell_vitu2_itu_pane_t2

0x0002,

0xf899,	// (0x000278d9) cell_vitu2_itu_pane_t_ParamLimits

0xf899,	// (0x000278d9) cell_vitu2_itu_pane_t

0x66f9,	// (0x0001e739) bg_button_pane_cp011

0x74cf,	// (0x0001f50f) cell_vitu2_function_pane_g1

0x622f,	// (0x0001e26f) main_myfav_hc_pane

0x6ebf,	// (0x0001eeff) popup_image3_note_pane_ParamLimits

0x6ebf,	// (0x0001eeff) popup_image3_note_pane

0x6ecd,	// (0x0001ef0d) popup_image3_tool_bar_pane_ParamLimits

0x6ecd,	// (0x0001ef0d) popup_image3_tool_bar_pane

0x747d,	// (0x0001f4bd) cell_vitu2_itu_pane_t3_ParamLimits

0x747d,	// (0x0001f4bd) cell_vitu2_itu_pane_t3

0xe7c9,	// (0x00026809) bg_popup_trans_pane

0x3098,	// (0x0001b0d8) grid_image3_tool_bar_pane

0x30a2,	// (0x0001b0e2) bg_popup_trans_pane_g1

0x0346,	// (0x00018386) bg_popup_trans_pane_g2

0x30aa,	// (0x0001b0ea) bg_popup_trans_pane_g3

0x30b2,	// (0x0001b0f2) bg_popup_trans_pane_g4

0x30ba,	// (0x0001b0fa) bg_popup_trans_pane_g5

0x30c2,	// (0x0001b102) bg_popup_trans_pane_g6

0x30ca,	// (0x0001b10a) bg_popup_trans_pane_g7

0x30d2,	// (0x0001b112) bg_popup_trans_pane_g8

0x0326,	// (0x00018366) bg_popup_trans_pane_g9

0x0008,

0xf8a0,	// (0x000278e0) bg_popup_trans_pane_g

0x30da,	// (0x0001b11a) cell_image3_tool_bar_pane_ParamLimits

0x30da,	// (0x0001b11a) cell_image3_tool_bar_pane

0x0131,	// (0x00018171) cell_image3_tool_bar_pane_g1

0xe7c9,	// (0x00026809) bg_popup_trans_pane_cp1

0x30f0,	// (0x0001b130) popup_image3_note_pane_t1

0x30fe,	// (0x0001b13e) popup_image3_note_pane_t2

0x310c,	// (0x0001b14c) popup_image3_note_pane_t3

0x0002,

0xf8b3,	// (0x000278f3) popup_image3_note_pane_t

0x311c,	// (0x0001b15c) popup_image3_note_pane_t3_copy1

0xb222,	// (0x00023262) bg_myfav_hc_instruction_pane_ParamLimits

0xb222,	// (0x00023262) bg_myfav_hc_instruction_pane

0xb23a,	// (0x0002327a) cell_myfav_contact_pane_ParamLimits

0xb23a,	// (0x0002327a) cell_myfav_contact_pane

0xb254,	// (0x00023294) cell_myfav_contact_pane_cp1_ParamLimits

0xb254,	// (0x00023294) cell_myfav_contact_pane_cp1

0xb26c,	// (0x000232ac) cell_myfav_contact_pane_cp2_ParamLimits

0xb26c,	// (0x000232ac) cell_myfav_contact_pane_cp2

0xb284,	// (0x000232c4) cell_myfav_contact_pane_cp3_ParamLimits

0xb284,	// (0x000232c4) cell_myfav_contact_pane_cp3

0xb29b,	// (0x000232db) cell_myfav_contact_pane_cp4_ParamLimits

0xb29b,	// (0x000232db) cell_myfav_contact_pane_cp4

0xb2b1,	// (0x000232f1) cell_myfav_contact_pane_cp5_ParamLimits

0xb2b1,	// (0x000232f1) cell_myfav_contact_pane_cp5

0xb2c5,	// (0x00023305) cell_myfav_contact_pane_cp6_ParamLimits

0xb2c5,	// (0x00023305) cell_myfav_contact_pane_cp6

0xb2d9,	// (0x00023319) cell_myfav_contact_pane_cp7_ParamLimits

0xb2d9,	// (0x00023319) cell_myfav_contact_pane_cp7

0x312a,	// (0x0001b16a) listscroll_gen_pane_cp05

0xb2f1,	// (0x00023331) main_myfav_hc_pane_g1_ParamLimits

0xb2f1,	// (0x00023331) main_myfav_hc_pane_g1

0xb30b,	// (0x0002334b) main_myfav_hc_pane_g2_ParamLimits

0xb30b,	// (0x0002334b) main_myfav_hc_pane_g2

0x0002,

0xf8ba,	// (0x000278fa) main_myfav_hc_pane_g_ParamLimits

0xf8ba,	// (0x000278fa) main_myfav_hc_pane_g

0xb33d,	// (0x0002337d) main_myfav_hc_pane_t1_ParamLimits

0xb33d,	// (0x0002337d) main_myfav_hc_pane_t1

0x3133,	// (0x0001b173) main_myfav_hc_pane_t2_ParamLimits

0x3133,	// (0x0001b173) main_myfav_hc_pane_t2

0x3145,	// (0x0001b185) main_myfav_hc_pane_t3_ParamLimits

0x3145,	// (0x0001b185) main_myfav_hc_pane_t3

0xb354,	// (0x00023394) main_myfav_hc_pane_t4_ParamLimits

0xb354,	// (0x00023394) main_myfav_hc_pane_t4

0x0004,

0xf8c1,	// (0x00027901) main_myfav_hc_pane_t_ParamLimits

0xf8c1,	// (0x00027901) main_myfav_hc_pane_t

0x0131,	// (0x00018171) bg_myfav_hc_instruction_pane_g1

0x3157,	// (0x0001b197) cell_myfav_contact_pane_g1_ParamLimits

0x3157,	// (0x0001b197) cell_myfav_contact_pane_g1

0x3157,	// (0x0001b197) cell_myfav_contact_pane_g2_ParamLimits

0x3157,	// (0x0001b197) cell_myfav_contact_pane_g2

0x3163,	// (0x0001b1a3) cell_myfav_contact_pane_g3_ParamLimits

0x3163,	// (0x0001b1a3) cell_myfav_contact_pane_g3

0xef0d,	// (0x00026f4d) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x00026f4d) cell_myfav_contact_pane_g4

0x3170,	// (0x0001b1b0) cell_myfav_contact_pane_g5_ParamLimits

0x3170,	// (0x0001b1b0) cell_myfav_contact_pane_g5

0x0004,

0xf8cc,	// (0x0002790c) cell_myfav_contact_pane_g_ParamLimits

0xf8cc,	// (0x0002790c) cell_myfav_contact_pane_g

0xb325,	// (0x00023365) main_myfav_hc_pane_g3_ParamLimits

0xb325,	// (0x00023365) main_myfav_hc_pane_g3

0x6129,	// (0x0001e169) popup_adpt_find_window

0xb37e,	// (0x000233be) afind_page_pane_ParamLimits

0xb37e,	// (0x000233be) afind_page_pane

0xb38b,	// (0x000233cb) aid_size_cell_afind_ParamLimits

0xb38b,	// (0x000233cb) aid_size_cell_afind

0xb3a5,	// (0x000233e5) bg_popup_sub_pane_cp09_ParamLimits

0xb3a5,	// (0x000233e5) bg_popup_sub_pane_cp09

0xb3b2,	// (0x000233f2) find_pane_cp01_ParamLimits

0xb3b2,	// (0x000233f2) find_pane_cp01

0x317c,	// (0x0001b1bc) grid_afind_control_pane_ParamLimits

0x317c,	// (0x0001b1bc) grid_afind_control_pane

0xb3bf,	// (0x000233ff) grid_afind_pane_ParamLimits

0xb3bf,	// (0x000233ff) grid_afind_pane

0xb3db,	// (0x0002341b) cell_afind_pane_ParamLimits

0xb3db,	// (0x0002341b) cell_afind_pane

0x0131,	// (0x00018171) afind_page_pane_g1

0xb427,	// (0x00023467) afind_page_pane_g2

0xb430,	// (0x00023470) afind_page_pane_g3

0x0002,

0xf8d7,	// (0x00027917) afind_page_pane_g

0xb439,	// (0x00023479) afind_page_pane_t1

0x3190,	// (0x0001b1d0) cell_afind_grid_control_pane_ParamLimits

0x3190,	// (0x0001b1d0) cell_afind_grid_control_pane

0x2e6a,	// (0x0001aeaa) bg_button_pane_cp69_ParamLimits

0x2e6a,	// (0x0001aeaa) bg_button_pane_cp69

0xb459,	// (0x00023499) cell_afind_pane_g1_ParamLimits

0xb459,	// (0x00023499) cell_afind_pane_g1

0xb466,	// (0x000234a6) cell_afind_pane_t1_ParamLimits

0xb466,	// (0x000234a6) cell_afind_pane_t1

0x013b,	// (0x0001817b) bg_button_pane_cp72

0x319f,	// (0x0001b1df) cell_afind_grid_control_pane_g1

0x9cbc,	// (0x00021cfc) aid_image_placing_area_ParamLimits

0x9cbc,	// (0x00021cfc) aid_image_placing_area

0xeeff,	// (0x00026f3f) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) field_vitu_entry_pane_g1

0xeeff,	// (0x00026f3f) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x00026f3f) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00027227) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00027227) field_vitu_entry_pane_g

0x2985,	// (0x0001a9c5) cell_vitu_itu_pane_g1_ParamLimits

0x2968,	// (0x0001a9a8) cell_vitu_itu_pane_t3_ParamLimits

0x2968,	// (0x0001a9a8) cell_vitu_itu_pane_t3

0x2e13,	// (0x0001ae53) mp4_progress_pane_t1_ParamLimits

0x2e2c,	// (0x0001ae6c) mp4_progress_pane_t2_ParamLimits

0xf81d,	// (0x0002785d) mp4_progress_pane_t_ParamLimits

0x2e45,	// (0x0001ae85) mup_progress_pane_cp04_ParamLimits

0xb368,	// (0x000233a8) main_myfav_hc_pane_t5_ParamLimits

0xb368,	// (0x000233a8) main_myfav_hc_pane_t5

0x5fe7,	// (0x0001e027) aid_zoom_text_primary

0x6129,	// (0x0001e169) popup_adpt_find_window_ParamLimits

0x66f9,	// (0x0001e739) main_cam_set_pane

0x701e,	// (0x0001f05e) cam4_zoom_pane_ParamLimits

0x701e,	// (0x0001f05e) cam4_zoom_pane

0xb478,	// (0x000234b8) main_cam_set_pane_g1_ParamLimits

0xb478,	// (0x000234b8) main_cam_set_pane_g1

0xb486,	// (0x000234c6) main_cam_set_pane_g2_ParamLimits

0xb486,	// (0x000234c6) main_cam_set_pane_g2

0x0001,

0xf8de,	// (0x0002791e) main_cam_set_pane_g_ParamLimits

0xf8de,	// (0x0002791e) main_cam_set_pane_g

0xb492,	// (0x000234d2) main_cam_set_pane_t1_ParamLimits

0xb492,	// (0x000234d2) main_cam_set_pane_t1

0xb4ae,	// (0x000234ee) main_cset_listscroll_pane_ParamLimits

0xb4ae,	// (0x000234ee) main_cset_listscroll_pane

0xb4e2,	// (0x00023522) main_cset_slider_pane_ParamLimits

0xb4e2,	// (0x00023522) main_cset_slider_pane

0x31b0,	// (0x0001b1f0) main_cset_list_pane_ParamLimits

0x31b0,	// (0x0001b1f0) main_cset_list_pane

0x31c0,	// (0x0001b200) scroll_pane_cp028

0xb503,	// (0x00023543) aid_area_touch_slider

0xb51f,	// (0x0002355f) cset_slider_pane

0xb542,	// (0x00023582) main_cset_slider_pane_g1

0xb557,	// (0x00023597) main_cset_slider_pane_g2

0x0011,

0xf8e3,	// (0x00027923) main_cset_slider_pane_g

0x3232,	// (0x0001b272) main_cset_slider_pane_t1

0xb613,	// (0x00023653) main_cset_slider_pane_t2

0xb62d,	// (0x0002366d) main_cset_slider_pane_t3

0xb647,	// (0x00023687) main_cset_slider_pane_t4

0xb661,	// (0x000236a1) main_cset_slider_pane_t5

0xb67b,	// (0x000236bb) main_cset_slider_pane_t6

0xb690,	// (0x000236d0) main_cset_slider_pane_t7

0x000e,

0xf908,	// (0x00027948) main_cset_slider_pane_t

0xb794,	// (0x000237d4) cset_list_set_pane_ParamLimits

0xb794,	// (0x000237d4) cset_list_set_pane

0x32cc,	// (0x0001b30c) aid_position_infowindow_above

0x32d4,	// (0x0001b314) aid_position_infowindow_below

0xb7a5,	// (0x000237e5) cset_list_set_pane_g1_ParamLimits

0xb7a5,	// (0x000237e5) cset_list_set_pane_g1

0xb7b1,	// (0x000237f1) cset_list_set_pane_g3_ParamLimits

0xb7b1,	// (0x000237f1) cset_list_set_pane_g3

0x0001,

0xf927,	// (0x00027967) cset_list_set_pane_g_ParamLimits

0xf927,	// (0x00027967) cset_list_set_pane_g

0xb7c0,	// (0x00023800) cset_list_set_pane_t1_ParamLimits

0xb7c0,	// (0x00023800) cset_list_set_pane_t1

0xe82a,	// (0x0002686a) list_highlight_pane_cp021_ParamLimits

0xe82a,	// (0x0002686a) list_highlight_pane_cp021

0x0c69,	// (0x00018ca9) cset_slider_pane_g1

0x0c7b,	// (0x00018cbb) cset_slider_pane_g2

0x0c72,	// (0x00018cb2) cset_slider_pane_g3

0x0002,

0xf92c,	// (0x0002796c) cset_slider_pane_g

0x08d1,	// (0x00018911) aid_area_touch_cam4_zoom

0x74e3,	// (0x0001f523) cam4_zoom_cont_pane

0x74eb,	// (0x0001f52b) cam4_zoom_pane_g1

0x74f3,	// (0x0001f533) cam4_zoom_pane_g2

0x74fb,	// (0x0001f53b) cam4_zoom_pane_g3

0x0002,

0xf933,	// (0x00027973) cam4_zoom_pane_g

0x7503,	// (0x0001f543) cam4_zoom_cont_pane_g1

0x750c,	// (0x0001f54c) cam4_zoom_cont_pane_g2

0x7515,	// (0x0001f555) cam4_zoom_cont_pane_g3

0x0002,

0xf93a,	// (0x0002797a) cam4_zoom_cont_pane_g

0x6ef8,	// (0x0001ef38) call4_image_pane_ParamLimits

0x6ef8,	// (0x0001ef38) call4_image_pane

0xb12e,	// (0x0002316e) call4_windows_conf_pane_ParamLimits

0xb175,	// (0x000231b5) popup_call4_audio_in_window_ParamLimits

0xb175,	// (0x000231b5) popup_call4_audio_in_window

0xe7c9,	// (0x00026809) bg_popup_call2_act_pane_cp02

0x2edc,	// (0x0001af1c) call4_list_conf_pane

0x0131,	// (0x00018171) call4_image_pane_g1

0x0131,	// (0x00018171) call4_image_pane_g2

0x0001,

0xf3be,	// (0x000273fe) call4_image_pane_g

0x3300,	// (0x0001b340) list_single_graphic_popup_conf4_pane_ParamLimits

0x3300,	// (0x0001b340) list_single_graphic_popup_conf4_pane

0xe7c9,	// (0x00026809) list_highlight_pane_cp022

0x3315,	// (0x0001b355) list_single_graphic_popup_conf4_pane_g1

0x092a,	// (0x0001896a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf941,	// (0x00027981) list_single_graphic_popup_conf4_pane_g

0x331d,	// (0x0001b35d) list_single_graphic_popup_conf4_pane_t1

0x8369,	// (0x000203a9) popup_vtel_slider_window_ParamLimits

0x8369,	// (0x000203a9) popup_vtel_slider_window

0x2e58,	// (0x0001ae98) dialer2_ne_pane_t2_ParamLimits

0x2e58,	// (0x0001ae98) dialer2_ne_pane_t2

0x0001,

0xf822,	// (0x00027862) dialer2_ne_pane_t_ParamLimits

0xf822,	// (0x00027862) dialer2_ne_pane_t

0xe82a,	// (0x0002686a) bg_popup_sub_pane_cp010_ParamLimits

0xe82a,	// (0x0002686a) bg_popup_sub_pane_cp010

0xb7d5,	// (0x00023815) popup_vtel_slider_window_g1_ParamLimits

0xb7d5,	// (0x00023815) popup_vtel_slider_window_g1

0xb7e1,	// (0x00023821) popup_vtel_slider_window_g2_ParamLimits

0xb7e1,	// (0x00023821) popup_vtel_slider_window_g2

0x0003,

0xf946,	// (0x00027986) popup_vtel_slider_window_g_ParamLimits

0xf946,	// (0x00027986) popup_vtel_slider_window_g

0xb829,	// (0x00023869) vtel_slider_pane_ParamLimits

0xb829,	// (0x00023869) vtel_slider_pane

0xb838,	// (0x00023878) vtel_slider_pane_g1_ParamLimits

0xb838,	// (0x00023878) vtel_slider_pane_g1

0xb845,	// (0x00023885) vtel_slider_pane_g2_ParamLimits

0xb845,	// (0x00023885) vtel_slider_pane_g2

0xb852,	// (0x00023892) vtel_slider_pane_g3_ParamLimits

0xb852,	// (0x00023892) vtel_slider_pane_g3

0xb838,	// (0x00023878) vtel_slider_pane_g4_ParamLimits

0xb838,	// (0x00023878) vtel_slider_pane_g4

0xb85f,	// (0x0002389f) vtel_slider_pane_g5_ParamLimits

0xb85f,	// (0x0002389f) vtel_slider_pane_g5

0x0004,

0xf94f,	// (0x0002798f) vtel_slider_pane_g_ParamLimits

0xf94f,	// (0x0002798f) vtel_slider_pane_g

0x66f9,	// (0x0001e739) main_gallery2_pane

0x7230,	// (0x0001f270) aid_size_row_itut2_dropdow_list_ParamLimits

0x7230,	// (0x0001f270) aid_size_row_itut2_dropdow_list

0x729e,	// (0x0001f2de) grid_vitu2_function_top_pane_ParamLimits

0x729e,	// (0x0001f2de) grid_vitu2_function_top_pane

0x72f4,	// (0x0001f334) popup_vitu2_dropdown_list_window_ParamLimits

0x72f4,	// (0x0001f334) popup_vitu2_dropdown_list_window

0x7312,	// (0x0001f352) popup_vitu2_match_list_window

0x751e,	// (0x0001f55e) cell_vitu2_function_top_pane_ParamLimits

0x751e,	// (0x0001f55e) cell_vitu2_function_top_pane

0x7538,	// (0x0001f578) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7538,	// (0x0001f578) cell_vitu2_function_top_pane_cp01

0x7554,	// (0x0001f594) cell_vitu2_function_top_wide_pane_ParamLimits

0x7554,	// (0x0001f594) cell_vitu2_function_top_wide_pane

0x66f9,	// (0x0001e739) bg_button_pane_cp012

0x7572,	// (0x0001f5b2) cell_vitu2_function_top_pane_g1

0x7586,	// (0x0001f5c6) bg_button_pane_cp013_ParamLimits

0x7586,	// (0x0001f5c6) bg_button_pane_cp013

0xb86c,	// (0x000238ac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb86c,	// (0x000238ac) cell_vitu2_function_top_wide_pane_g1

0x6221,	// (0x0001e261) bg_popup_sub_pane_cp20

0x75a2,	// (0x0001f5e2) list_vitu2_match_list_pane

0x30a2,	// (0x0001b0e2) bg_popup_sub_pane_cp20_g1

0x30aa,	// (0x0001b0ea) bg_popup_sub_pane_cp20_g2

0x0346,	// (0x00018386) bg_popup_sub_pane_cp20_g3

0x30b2,	// (0x0001b0f2) bg_popup_sub_pane_cp20_g4

0x0326,	// (0x00018366) bg_popup_sub_pane_cp20_g5

0x334f,	// (0x0001b38f) bg_popup_sub_pane_cp20_g6

0x30c2,	// (0x0001b102) bg_popup_sub_pane_cp20_g7

0x30ca,	// (0x0001b10a) bg_popup_sub_pane_cp20_g8

0x30d2,	// (0x0001b112) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95a,	// (0x0002799a) bg_popup_sub_pane_cp20_g

0x75ba,	// (0x0001f5fa) list_vitu2_match_list_item_pane_ParamLimits

0x75ba,	// (0x0001f5fa) list_vitu2_match_list_item_pane

0x75cc,	// (0x0001f60c) list_vitu2_match_list_item_pane_t1

0x622f,	// (0x0001e26f) bg_popup_sub_pane_cp21

0x00dc,	// (0x0001811c) grid_vitu2_dropdown_list_pane

0x75da,	// (0x0001f61a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75da,	// (0x0001f61a) cell_vitu2_dropdown_list_char_pane

0x75fe,	// (0x0001f63e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x75fe,	// (0x0001f63e) cell_vitu2_dropdown_list_ctrl_pane

0x3389,	// (0x0001b3c9) cell_vitu2_dropdown_list_char_pane_g1

0x3380,	// (0x0001b3c0) cell_vitu2_dropdown_list_char_pane_g2

0x3377,	// (0x0001b3b7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf96d,	// (0x000279ad) cell_vitu2_dropdown_list_char_pane_g

0x7628,	// (0x0001f668) cell_vitu2_dropdown_list_char_pane_t1

0xb884,	// (0x000238c4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb884,	// (0x000238c4) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb894,	// (0x000238d4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb894,	// (0x000238d4) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb8a5,	// (0x000238e5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb8a5,	// (0x000238e5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7636,	// (0x0001f676) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7636,	// (0x0001f676) cell_vitu2_dropdown_list_ctrl_pane_g4

0x42cb,	// (0x0001c30b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x42cb,	// (0x0001c30b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf974,	// (0x000279b4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf974,	// (0x000279b4) cell_vitu2_dropdown_list_ctrl_pane_g

0xb8b5,	// (0x000238f5) aid_size_cell_gallery2_ParamLimits

0xb8b5,	// (0x000238f5) aid_size_cell_gallery2

0xb8cf,	// (0x0002390f) grid_gallery2_pane_ParamLimits

0xb8cf,	// (0x0002390f) grid_gallery2_pane

0xb8e6,	// (0x00023926) scroll_pane_cp029_ParamLimits

0xb8e6,	// (0x00023926) scroll_pane_cp029

0xb8f6,	// (0x00023936) cell_gallery2_pane_ParamLimits

0xb8f6,	// (0x00023936) cell_gallery2_pane

0x3392,	// (0x0001b3d2) cell_gallery2_pane_g2

0xb94d,	// (0x0002398d) cell_gallery2_pane_g3

0x339a,	// (0x0001b3da) cell_gallery2_pane_g4

0x33a2,	// (0x0001b3e2) cell_gallery2_pane_g5

0x00dc,	// (0x0001811c) grid_highlight_pane_cp10

0x7312,	// (0x0001f352) popup_vitu2_match_list_window_ParamLimits

0x7326,	// (0x0001f366) popup_vitu2_query_window_ParamLimits

0x7326,	// (0x0001f366) popup_vitu2_query_window

0x622f,	// (0x0001e26f) bg_vitu2_candi_button_pane

0x3389,	// (0x0001b3c9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3380,	// (0x0001b3c0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3377,	// (0x0001b3b7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb955,	// (0x00023995) bg_button_pane_cp015

0xb96a,	// (0x000239aa) bg_button_pane_cp016

0xb976,	// (0x000239b6) bg_button_pane_cp017

0x0bf7,	// (0x00018c37) bg_popup_sub_pane_cp22

0x33aa,	// (0x0001b3ea) popup_vitu2_query_window_g1

0xb9b7,	// (0x000239f7) popup_vitu2_query_window_g2

0x0002,

0xf97f,	// (0x000279bf) popup_vitu2_query_window_g

0xb9db,	// (0x00023a1b) popup_vitu2_query_window_t1_ParamLimits

0xb9db,	// (0x00023a1b) popup_vitu2_query_window_t1

0xba0e,	// (0x00023a4e) popup_vitu2_query_window_t2_ParamLimits

0xba0e,	// (0x00023a4e) popup_vitu2_query_window_t2

0xba20,	// (0x00023a60) popup_vitu2_query_window_t3_ParamLimits

0xba20,	// (0x00023a60) popup_vitu2_query_window_t3

0xba48,	// (0x00023a88) popup_vitu2_query_window_t4_ParamLimits

0xba48,	// (0x00023a88) popup_vitu2_query_window_t4

0xba5c,	// (0x00023a9c) popup_vitu2_query_window_t5_ParamLimits

0xba5c,	// (0x00023a9c) popup_vitu2_query_window_t5

0x0006,

0xf986,	// (0x000279c6) popup_vitu2_query_window_t_ParamLimits

0xf986,	// (0x000279c6) popup_vitu2_query_window_t

0x31a8,	// (0x0001b1e8) main_cset_text_pane

0xb503,	// (0x00023543) aid_area_touch_slider_ParamLimits

0xb51f,	// (0x0002355f) cset_slider_pane_ParamLimits

0xb542,	// (0x00023582) main_cset_slider_pane_g1_ParamLimits

0xb557,	// (0x00023597) main_cset_slider_pane_g2_ParamLimits

0x3202,	// (0x0001b242) main_cset_slider_pane_g3_ParamLimits

0x3202,	// (0x0001b242) main_cset_slider_pane_g3

0xb56c,	// (0x000235ac) main_cset_slider_pane_g4_ParamLimits

0xb56c,	// (0x000235ac) main_cset_slider_pane_g4

0xb57b,	// (0x000235bb) main_cset_slider_pane_g5_ParamLimits

0xb57b,	// (0x000235bb) main_cset_slider_pane_g5

0xb587,	// (0x000235c7) main_cset_slider_pane_g6_ParamLimits

0xb587,	// (0x000235c7) main_cset_slider_pane_g6

0xf8e3,	// (0x00027923) main_cset_slider_pane_g_ParamLimits

0x3232,	// (0x0001b272) main_cset_slider_pane_t1_ParamLimits

0xb613,	// (0x00023653) main_cset_slider_pane_t2_ParamLimits

0xb62d,	// (0x0002366d) main_cset_slider_pane_t3_ParamLimits

0xb647,	// (0x00023687) main_cset_slider_pane_t4_ParamLimits

0xb661,	// (0x000236a1) main_cset_slider_pane_t5_ParamLimits

0xb67b,	// (0x000236bb) main_cset_slider_pane_t6_ParamLimits

0xb690,	// (0x000236d0) main_cset_slider_pane_t7_ParamLimits

0xb6ba,	// (0x000236fa) main_cset_slider_pane_t8_ParamLimits

0xb6ba,	// (0x000236fa) main_cset_slider_pane_t8

0xb6e2,	// (0x00023722) main_cset_slider_pane_t9_ParamLimits

0xb6e2,	// (0x00023722) main_cset_slider_pane_t9

0xb70a,	// (0x0002374a) main_cset_slider_pane_t10_ParamLimits

0xb70a,	// (0x0002374a) main_cset_slider_pane_t10

0xb732,	// (0x00023772) main_cset_slider_pane_t11_ParamLimits

0xb732,	// (0x00023772) main_cset_slider_pane_t11

0xb75a,	// (0x0002379a) main_cset_slider_pane_t12_ParamLimits

0xb75a,	// (0x0002379a) main_cset_slider_pane_t12

0xb777,	// (0x000237b7) main_cset_slider_pane_t13_ParamLimits

0xb777,	// (0x000237b7) main_cset_slider_pane_t13

0xf908,	// (0x00027948) main_cset_slider_pane_t_ParamLimits

0xe7c9,	// (0x00026809) bg_popup_sub_pane_cp011

0x33b6,	// (0x0001b3f6) main_cset_text_pane_g1

0x33be,	// (0x0001b3fe) main_cset_text_pane_t1

0x33cc,	// (0x0001b40c) main_cset_text_pane_t2

0x33da,	// (0x0001b41a) main_cset_text_pane_t3

0x33e8,	// (0x0001b428) main_cset_text_pane_t4

0x33f6,	// (0x0001b436) main_cset_text_pane_t5

0x3404,	// (0x0001b444) main_cset_text_pane_t6

0x3412,	// (0x0001b452) main_cset_text_pane_t7

0x0006,

0xf995,	// (0x000279d5) main_cset_text_pane_t

0x622f,	// (0x0001e26f) main_cam4_burst_pane

0x622f,	// (0x0001e26f) main_cam5_pane

0xb447,	// (0x00023487) bg_button_pane_cp019

0xb450,	// (0x00023490) bg_button_pane_cp020

0x320e,	// (0x0001b24e) main_cset_slider_pane_g7_ParamLimits

0x320e,	// (0x0001b24e) main_cset_slider_pane_g7

0x321a,	// (0x0001b25a) main_cset_slider_pane_g8_ParamLimits

0x321a,	// (0x0001b25a) main_cset_slider_pane_g8

0xb59b,	// (0x000235db) main_cset_slider_pane_g9_ParamLimits

0xb59b,	// (0x000235db) main_cset_slider_pane_g9

0xb5a7,	// (0x000235e7) main_cset_slider_pane_g10_ParamLimits

0xb5a7,	// (0x000235e7) main_cset_slider_pane_g10

0xb5b3,	// (0x000235f3) main_cset_slider_pane_g11_ParamLimits

0xb5b3,	// (0x000235f3) main_cset_slider_pane_g11

0xb5bf,	// (0x000235ff) main_cset_slider_pane_g12_ParamLimits

0xb5bf,	// (0x000235ff) main_cset_slider_pane_g12

0xb5cb,	// (0x0002360b) main_cset_slider_pane_g13_ParamLimits

0xb5cb,	// (0x0002360b) main_cset_slider_pane_g13

0xb5d7,	// (0x00023617) main_cset_slider_pane_g14_ParamLimits

0xb5d7,	// (0x00023617) main_cset_slider_pane_g14

0xb5e3,	// (0x00023623) main_cset_slider_pane_g15_ParamLimits

0xb5e3,	// (0x00023623) main_cset_slider_pane_g15

0x325a,	// (0x0001b29a) main_cset_slider_pane_t14_ParamLimits

0x325a,	// (0x0001b29a) main_cset_slider_pane_t14

0x3293,	// (0x0001b2d3) main_cset_slider_pane_t15_ParamLimits

0x3293,	// (0x0001b2d3) main_cset_slider_pane_t15

0xbac6,	// (0x00023b06) aid_cam4_burst_size_cell_ParamLimits

0xbac6,	// (0x00023b06) aid_cam4_burst_size_cell

0xbae2,	// (0x00023b22) grid_cam4_burst_pane_ParamLimits

0xbae2,	// (0x00023b22) grid_cam4_burst_pane

0xbb14,	// (0x00023b54) linegrid_cam4_burst_pane_ParamLimits

0xbb14,	// (0x00023b54) linegrid_cam4_burst_pane

0xbb32,	// (0x00023b72) scroll_pane_cp30_ParamLimits

0xbb32,	// (0x00023b72) scroll_pane_cp30

0xbb3e,	// (0x00023b7e) cell_cam4_burst_pane_ParamLimits

0xbb3e,	// (0x00023b7e) cell_cam4_burst_pane

0x342c,	// (0x0001b46c) linegrid_cam4_burst_pane_g1_ParamLimits

0x342c,	// (0x0001b46c) linegrid_cam4_burst_pane_g1

0xbb7e,	// (0x00023bbe) linegrid_cam4_burst_pane_g2_ParamLimits

0xbb7e,	// (0x00023bbe) linegrid_cam4_burst_pane_g2

0x3439,	// (0x0001b479) linegrid_cam4_burst_pane_g3_ParamLimits

0x3439,	// (0x0001b479) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a4,	// (0x000279e4) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a4,	// (0x000279e4) linegrid_cam4_burst_pane_g

0xbb8f,	// (0x00023bcf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbb8f,	// (0x00023bcf) linegrid_cam4_burst_pane_g3_copy1

0x3446,	// (0x0001b486) linegrid_cam4_burst_pane_g4_ParamLimits

0x3446,	// (0x0001b486) linegrid_cam4_burst_pane_g4

0xbba9,	// (0x00023be9) linegrid_cam4_burst_pane_g5_ParamLimits

0xbba9,	// (0x00023be9) linegrid_cam4_burst_pane_g5

0xbbba,	// (0x00023bfa) linegrid_cam4_burst_pane_g6_ParamLimits

0xbbba,	// (0x00023bfa) linegrid_cam4_burst_pane_g6

0x3453,	// (0x0001b493) linegrid_cam4_burst_pane_g7_ParamLimits

0x3453,	// (0x0001b493) linegrid_cam4_burst_pane_g7

0xbbd1,	// (0x00023c11) cell_cam4_burst_pane_g1

0x346c,	// (0x0001b4ac) main_cam5_pane_t1_ParamLimits

0x346c,	// (0x0001b4ac) main_cam5_pane_t1

0x347e,	// (0x0001b4be) main_cam5_pane_t2_ParamLimits

0x347e,	// (0x0001b4be) main_cam5_pane_t2

0x3490,	// (0x0001b4d0) main_cam5_pane_t3_ParamLimits

0x3490,	// (0x0001b4d0) main_cam5_pane_t3

0x34a2,	// (0x0001b4e2) main_cam5_pane_t4_ParamLimits

0x34a2,	// (0x0001b4e2) main_cam5_pane_t4

0x34ba,	// (0x0001b4fa) main_cam5_pane_t5_ParamLimits

0x34ba,	// (0x0001b4fa) main_cam5_pane_t5

0x34ce,	// (0x0001b50e) main_cam5_pane_t6_ParamLimits

0x34ce,	// (0x0001b50e) main_cam5_pane_t6

0x34e2,	// (0x0001b522) main_cam5_pane_t7_ParamLimits

0x34e2,	// (0x0001b522) main_cam5_pane_t7

0x34f4,	// (0x0001b534) main_cam5_pane_t8_ParamLimits

0x34f4,	// (0x0001b534) main_cam5_pane_t8

0x3512,	// (0x0001b552) main_cam5_pane_t9_ParamLimits

0x3512,	// (0x0001b552) main_cam5_pane_t9

0x3524,	// (0x0001b564) main_cam5_pane_t10_ParamLimits

0x3524,	// (0x0001b564) main_cam5_pane_t10

0x3536,	// (0x0001b576) main_cam5_pane_t11_ParamLimits

0x3536,	// (0x0001b576) main_cam5_pane_t11

0x354a,	// (0x0001b58a) main_cam5_pane_t12_ParamLimits

0x354a,	// (0x0001b58a) main_cam5_pane_t12

0x3561,	// (0x0001b5a1) main_cam5_pane_t13_ParamLimits

0x3561,	// (0x0001b5a1) main_cam5_pane_t13

0x000c,

0xf9b0,	// (0x000279f0) main_cam5_pane_t_ParamLimits

0xf9b0,	// (0x000279f0) main_cam5_pane_t

0x61e0,	// (0x0001e220) popup_scut_keymap_window_ParamLimits

0x61e0,	// (0x0001e220) popup_scut_keymap_window

0xbbe4,	// (0x00023c24) aid_size_cell_brow_shortcut

0x00dc,	// (0x0001811c) bg_popup_window_pane_cp010

0xbbf0,	// (0x00023c30) grid_scut_pane

0xbbfc,	// (0x00023c3c) cell_scut_pane_ParamLimits

0xbbfc,	// (0x00023c3c) cell_scut_pane

0xbc17,	// (0x00023c57) cell_scut_pane_g1

0x3584,	// (0x0001b5c4) cell_scut_pane_t1

0x3593,	// (0x0001b5d3) cell_scut_pane_t2

0xbc20,	// (0x00023c60) cell_scut_pane_t3

0x0002,

0xf9cb,	// (0x00027a0b) cell_scut_pane_t

0xa80d,	// (0x0002284d) main_mup3_pane_g8_ParamLimits

0xa80d,	// (0x0002284d) main_mup3_pane_g8

0x723e,	// (0x0001f27e) area_vitu2_query_pane_ParamLimits

0x723e,	// (0x0001f27e) area_vitu2_query_pane

0xb982,	// (0x000239c2) input_focus_pane_cp08

0x35a2,	// (0x0001b5e2) area_vitu2_query_pane_g1

0xbc2e,	// (0x00023c6e) area_vitu2_query_pane_g2

0x0001,

0xf9d2,	// (0x00027a12) area_vitu2_query_pane_g

0xbc3f,	// (0x00023c7f) area_vitu2_query_pane_t1_ParamLimits

0xbc3f,	// (0x00023c7f) area_vitu2_query_pane_t1

0xbc53,	// (0x00023c93) area_vitu2_query_pane_t2_ParamLimits

0xbc53,	// (0x00023c93) area_vitu2_query_pane_t2

0xbc67,	// (0x00023ca7) area_vitu2_query_pane_t3_ParamLimits

0xbc67,	// (0x00023ca7) area_vitu2_query_pane_t3

0x35ae,	// (0x0001b5ee) area_vitu2_query_pane_t4_ParamLimits

0x35ae,	// (0x0001b5ee) area_vitu2_query_pane_t4

0x35d6,	// (0x0001b616) area_vitu2_query_pane_t5_ParamLimits

0x35d6,	// (0x0001b616) area_vitu2_query_pane_t5

0x35fe,	// (0x0001b63e) area_vitu2_query_pane_t6_ParamLimits

0x35fe,	// (0x0001b63e) area_vitu2_query_pane_t6

0x0006,

0xf9d7,	// (0x00027a17) area_vitu2_query_pane_t_ParamLimits

0xf9d7,	// (0x00027a17) area_vitu2_query_pane_t

0xb96a,	// (0x000239aa) bg_button_pane_cp018

0xbc8f,	// (0x00023ccf) bg_button_pane_cp021

0xbc9b,	// (0x00023cdb) bg_button_pane_cp022

0xbcbe,	// (0x00023cfe) input_focus_pane_cp09

0x9588,	// (0x000215c8) aid_size_touch_mv_arrow_left

0x95b3,	// (0x000215f3) aid_size_touch_mv_arrow_right

0xb5fb,	// (0x0002363b) main_cset_slider_pane_g16_ParamLimits

0xb5fb,	// (0x0002363b) main_cset_slider_pane_g16

0xb607,	// (0x00023647) main_cset_slider_pane_g17_ParamLimits

0xb607,	// (0x00023647) main_cset_slider_pane_g17

0xbbd1,	// (0x00023c11) cell_cam4_burst_pane_g1_ParamLimits

0xe7c9,	// (0x00026809) compa_mode_pane

0xb7ed,	// (0x0002382d) popup_vtel_slider_window_g3_ParamLimits

0xb7ed,	// (0x0002382d) popup_vtel_slider_window_g3

0xb801,	// (0x00023841) popup_vtel_slider_window_g4_ParamLimits

0xb801,	// (0x00023841) popup_vtel_slider_window_g4

0xb815,	// (0x00023855) popup_vtel_slider_window_t1_ParamLimits

0xb815,	// (0x00023855) popup_vtel_slider_window_t1

0x622f,	// (0x0001e26f) main_cl_pane

0x67a3,	// (0x0001e7e3) popup_imed_adjust2_window_ParamLimits

0x0bf7,	// (0x00018c37) bg_tb_trans_pane_cp05_ParamLimits

0x2893,	// (0x0001a8d3) popup_imed_adjust2_window_g1_ParamLimits

0x28a2,	// (0x0001a8e2) popup_imed_adjust2_window_g2_ParamLimits

0x28a2,	// (0x0001a8e2) popup_imed_adjust2_window_g2

0x28ae,	// (0x0001a8ee) popup_imed_adjust2_window_g3_ParamLimits

0x28ae,	// (0x0001a8ee) popup_imed_adjust2_window_g3

0x0002,

0xf74d,	// (0x0002778d) popup_imed_adjust2_window_g_ParamLimits

0xf74d,	// (0x0002778d) popup_imed_adjust2_window_g

0x28ba,	// (0x0001a8fa) popup_imed_adjust2_window_t1_ParamLimits

0x28d2,	// (0x0001a912) slider_imed_adjust_pane_ParamLimits

0x28e6,	// (0x0001a926) slider_imed_adjust_pane_g1_ParamLimits

0x28f6,	// (0x0001a936) slider_imed_adjust_pane_g2_ParamLimits

0x2906,	// (0x0001a946) slider_imed_adjust_pane_g3_ParamLimits

0x2917,	// (0x0001a957) slider_imed_adjust_pane_g4_ParamLimits

0xf754,	// (0x00027794) slider_imed_adjust_pane_g_ParamLimits

0x6fc7,	// (0x0001f007) aid_touch_area_cam4_ParamLimits

0x6fc7,	// (0x0001f007) aid_touch_area_cam4

0x6fd7,	// (0x0001f017) battery_pane_cp01

0x705e,	// (0x0001f09e) main_camera4_pane_g6_ParamLimits

0x705e,	// (0x0001f09e) main_camera4_pane_g6

0x707c,	// (0x0001f0bc) main_camera4_pane_t2_ParamLimits

0x707c,	// (0x0001f0bc) main_camera4_pane_t2

0x0001,

0xf856,	// (0x00027896) main_camera4_pane_t_ParamLimits

0xf856,	// (0x00027896) main_camera4_pane_t

0x70d9,	// (0x0001f119) aid_touch_area_vid4_ParamLimits

0x70d9,	// (0x0001f119) aid_touch_area_vid4

0x7119,	// (0x0001f159) main_video4_pane_g5_ParamLimits

0x7119,	// (0x0001f159) main_video4_pane_g5

0x713f,	// (0x0001f17f) vid4_progress_pane_ParamLimits

0x713f,	// (0x0001f17f) vid4_progress_pane

0x3226,	// (0x0001b266) main_cset_slider_pane_g18_ParamLimits

0x3226,	// (0x0001b266) main_cset_slider_pane_g18

0x3460,	// (0x0001b4a0) cell_cam4_burst_pane_g2_ParamLimits

0x3460,	// (0x0001b4a0) cell_cam4_burst_pane_g2

0x0001,

0xf9ab,	// (0x000279eb) cell_cam4_burst_pane_g_ParamLimits

0xf9ab,	// (0x000279eb) cell_cam4_burst_pane_g

0xbccf,	// (0x00023d0f) bg_cl_pane_ParamLimits

0xbccf,	// (0x00023d0f) bg_cl_pane

0xbcdb,	// (0x00023d1b) cl_header_pane_ParamLimits

0xbcdb,	// (0x00023d1b) cl_header_pane

0xbce7,	// (0x00023d27) cl_listscroll_pane_ParamLimits

0xbce7,	// (0x00023d27) cl_listscroll_pane

0x364a,	// (0x0001b68a) bg_cl_pane_g1

0x3652,	// (0x0001b692) bg_cl_pane_g2

0x365a,	// (0x0001b69a) bg_cl_pane_g3

0x3662,	// (0x0001b6a2) bg_cl_pane_g4

0x366a,	// (0x0001b6aa) bg_cl_pane_g5

0x3672,	// (0x0001b6b2) bg_cl_pane_g6

0x367a,	// (0x0001b6ba) bg_cl_pane_g7

0x3682,	// (0x0001b6c2) bg_cl_pane_g8

0x368a,	// (0x0001b6ca) bg_cl_pane_g9

0x0008,

0xf9e6,	// (0x00027a26) bg_cl_pane_g

0xbcf3,	// (0x00023d33) aid_height_cl_leading_ParamLimits

0xbcf3,	// (0x00023d33) aid_height_cl_leading

0xbcff,	// (0x00023d3f) aid_height_cl_text_ParamLimits

0xbcff,	// (0x00023d3f) aid_height_cl_text

0xeef1,	// (0x00026f31) bg_cl_header_pane_ParamLimits

0xeef1,	// (0x00026f31) bg_cl_header_pane

0xbd17,	// (0x00023d57) cl_header_pane_g1_ParamLimits

0xbd17,	// (0x00023d57) cl_header_pane_g1

0xbd24,	// (0x00023d64) cl_header_pane_t1_ParamLimits

0xbd24,	// (0x00023d64) cl_header_pane_t1

0x3692,	// (0x0001b6d2) cl_list_pane

0x31c0,	// (0x0001b200) hc_scroll_pane_cp01

0x0326,	// (0x00018366) bg_cl_header_pane_g1

0x30a2,	// (0x0001b0e2) bg_cl_header_pane_g2

0x0346,	// (0x00018386) bg_cl_header_pane_g3

0x30b2,	// (0x0001b0f2) bg_cl_header_pane_g4

0x30aa,	// (0x0001b0ea) bg_cl_header_pane_g5

0x334f,	// (0x0001b38f) bg_cl_header_pane_g6

0x30ca,	// (0x0001b10a) bg_cl_header_pane_g7

0x30d2,	// (0x0001b112) bg_cl_header_pane_g8

0x30c2,	// (0x0001b102) bg_cl_header_pane_g9

0x0008,

0xf9f9,	// (0x00027a39) bg_cl_header_pane_g

0xbd36,	// (0x00023d76) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbd36,	// (0x00023d76) hc_cl_list_double_graphic_heading_pane

0xbd46,	// (0x00023d86) hc_cl_list_single_graphic_pane_ParamLimits

0xbd46,	// (0x00023d86) hc_cl_list_single_graphic_pane

0xbd58,	// (0x00023d98) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbd58,	// (0x00023d98) hc_cl_list_single_graphic_pane_g1

0xbd64,	// (0x00023da4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbd64,	// (0x00023da4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa0c,	// (0x00027a4c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa0c,	// (0x00027a4c) hc_cl_list_single_graphic_pane_g

0xbd78,	// (0x00023db8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbd78,	// (0x00023db8) hc_cl_list_single_graphic_pane_t1

0xbd58,	// (0x00023d98) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbd58,	// (0x00023d98) hc_cl_list_double_graphic_heading_pane_g1

0xbd8d,	// (0x00023dcd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbd8d,	// (0x00023dcd) hc_cl_list_double_graphic_heading_pane_g2

0xbda1,	// (0x00023de1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbda1,	// (0x00023de1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa11,	// (0x00027a51) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa11,	// (0x00027a51) hc_cl_list_double_graphic_heading_pane_g

0xbdb5,	// (0x00023df5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbdb5,	// (0x00023df5) hc_cl_list_double_graphic_heading_pane_t1

0xbdca,	// (0x00023e0a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbdca,	// (0x00023e0a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa18,	// (0x00027a58) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa18,	// (0x00027a58) hc_cl_list_double_graphic_heading_pane_t

0x7657,	// (0x0001f697) vid4_progress_pane_g1

0x7667,	// (0x0001f6a7) vid4_progress_pane_g2

0x7677,	// (0x0001f6b7) vid4_progress_pane_g3

0x7689,	// (0x0001f6c9) vid4_progress_pane_g4

0x0004,

0xfa1d,	// (0x00027a5d) vid4_progress_pane_g

0x76a7,	// (0x0001f6e7) vid4_progress_pane_t1

0x76c1,	// (0x0001f701) vid4_progress_pane_t2

0x0002,

0xfa28,	// (0x00027a68) vid4_progress_pane_t

0x76ec,	// (0x0001f72c) wait_bar_pane_cp07

0x21dc,	// (0x0001a21c) blid_firmament_pane_ParamLimits

0x221f,	// (0x0001a25f) popup_blid_sat_info2_window_g1

0x2243,	// (0x0001a283) popup_blid_sat_info2_window_t3

0x2251,	// (0x0001a291) popup_blid_sat_info2_window_t4

0x225f,	// (0x0001a29f) popup_blid_sat_info2_window_t5

0x226d,	// (0x0001a2ad) popup_blid_sat_info2_window_t6

0x227d,	// (0x0001a2bd) popup_blid_sat_info2_window_t7

0x228b,	// (0x0001a2cb) popup_blid_sat_info2_window_t8

0x2299,	// (0x0001a2d9) popup_blid_sat_info2_window_t9

0x22a7,	// (0x0001a2e7) popup_blid_sat_info2_window_t10

0x236e,	// (0x0001a3ae) aid_firma_cardinal_ParamLimits

0x2382,	// (0x0001a3c2) blid_firmament_pane_t1_ParamLimits

0x2399,	// (0x0001a3d9) blid_firmament_pane_t2_ParamLimits

0x23b0,	// (0x0001a3f0) blid_firmament_pane_t3_ParamLimits

0x23c7,	// (0x0001a407) blid_firmament_pane_t4_ParamLimits

0xf646,	// (0x00027686) blid_firmament_pane_t_ParamLimits

0x23de,	// (0x0001a41e) blid_sat_info_pane_ParamLimits

0x66f9,	// (0x0001e739) main_cam_set_pane_ParamLimits

0xadfd,	// (0x00022e3d) aid_size_cell_colour_35_ParamLimits

0xae17,	// (0x00022e57) aid_size_cell_colour_112_ParamLimits

0xae2e,	// (0x00022e6e) aid_size_cell_effect_ParamLimits

0xe82a,	// (0x0002686a) bg_tb_trans_pane_cp02_ParamLimits

0x068c,	// (0x000186cc) heading_imed_pane_ParamLimits

0xae48,	// (0x00022e88) listscroll_imed_pane_ParamLimits

0x15e6,	// (0x00019626) popup_call2_audio_first_window_g5_ParamLimits

0x15e6,	// (0x00019626) popup_call2_audio_first_window_g5

0x6d7f,	// (0x0001edbf) aid_size_touch_image3_arrow_left_ParamLimits

0x6d7f,	// (0x0001edbf) aid_size_touch_image3_arrow_left

0x6d95,	// (0x0001edd5) aid_size_touch_image3_arrow_right_ParamLimits

0x6d95,	// (0x0001edd5) aid_size_touch_image3_arrow_right

0x76d7,	// (0x0001f717) vid4_progress_pane_t3

0xafc3,	// (0x00023003) main_hwr_training_symbol_option_pane_ParamLimits

0xafc3,	// (0x00023003) main_hwr_training_symbol_option_pane

0x2ad8,	// (0x0001ab18) popup_hwr_training_preview_window_ParamLimits

0x2ad8,	// (0x0001ab18) popup_hwr_training_preview_window

0x6a59,	// (0x0001ea99) hwr_training_navi_pane_g5_ParamLimits

0x6a59,	// (0x0001ea99) hwr_training_navi_pane_g5

0x3090,	// (0x0001b0d0) popup_char_count_window

0x6221,	// (0x0001e261) bg_popup_sub_pane_cp20_ParamLimits

0x75a2,	// (0x0001f5e2) list_vitu2_match_list_pane_ParamLimits

0x75ae,	// (0x0001f5ee) vitu2_page_scroll_pane_ParamLimits

0x75ae,	// (0x0001f5ee) vitu2_page_scroll_pane

0x372e,	// (0x0001b76e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x372e,	// (0x0001b76e) list_single_hwr_training_symbol_option_pane

0x3741,	// (0x0001b781) list_single_hwr_training_symbol_option_pane_g1

0x3749,	// (0x0001b789) list_single_hwr_training_symbol_option_pane_t1

0x3757,	// (0x0001b797) bg_button_pane_cp023

0x3760,	// (0x0001b7a0) bg_button_pane_cp024

0x3793,	// (0x0001b7d3) vitu2_page_scroll_pane_g1

0x379b,	// (0x0001b7db) vitu2_page_scroll_pane_g2

0x0001,

0xfa2f,	// (0x00027a6f) vitu2_page_scroll_pane_g

0x37a3,	// (0x0001b7e3) vitu2_page_scroll_pane_t1

0x31c9,	// (0x0001b209) popup_char_count_window_g1

0x37b2,	// (0x0001b7f2) popup_char_count_window_g2

0x31d2,	// (0x0001b212) popup_char_count_window_g3

0x0002,

0xfa34,	// (0x00027a74) popup_char_count_window_g

0x37bb,	// (0x0001b7fb) popup_char_count_window_t1

0x622f,	// (0x0001e26f) main_vded2_pane

0x287f,	// (0x0001a8bf) aid_size_cell_imed_line

0x2889,	// (0x0001a8c9) grid_imed_line_width_pane

0x71b3,	// (0x0001f1f3) vid4_indicators_pane_g4

0x37c9,	// (0x0001b809) cell_imed_line_width_pane_ParamLimits

0x37c9,	// (0x0001b809) cell_imed_line_width_pane

0x37df,	// (0x0001b81f) cell_imed_line_width_pane_g1

0x37e8,	// (0x0001b828) cell_imed_line_width_pane_g2

0x0001,

0xfa3b,	// (0x00027a7b) cell_imed_line_width_pane_g

0xbdf3,	// (0x00023e33) main_vded2_pane_g1_ParamLimits

0xbdf3,	// (0x00023e33) main_vded2_pane_g1

0xbe02,	// (0x00023e42) main_vded2_pane_g2_ParamLimits

0xbe02,	// (0x00023e42) main_vded2_pane_g2

0x0001,

0xfa40,	// (0x00027a80) main_vded2_pane_g_ParamLimits

0xfa40,	// (0x00027a80) main_vded2_pane_g

0xbe10,	// (0x00023e50) vded2_slider_pane_ParamLimits

0xbe10,	// (0x00023e50) vded2_slider_pane

0xbe1d,	// (0x00023e5d) aid_size_touch_vded2_end

0xbe27,	// (0x00023e67) aid_size_touch_vded2_playhead

0x37f0,	// (0x0001b830) aid_size_touch_vded2_start

0x37f8,	// (0x0001b838) vded2_slider_bg_pane

0x3801,	// (0x0001b841) vded2_slider_pane_g1

0x380a,	// (0x0001b84a) vded2_slider_pane_g2

0xbe2f,	// (0x00023e6f) vded2_slider_pane_g3

0x0002,

0xfa45,	// (0x00027a85) vded2_slider_pane_g

0x31db,	// (0x0001b21b) vded2_slider_bg_pane_g1

0x31e4,	// (0x0001b224) vded2_slider_bg_pane_g2

0x31ed,	// (0x0001b22d) vded2_slider_bg_pane_g3

0x0002,

0xf711,	// (0x00027751) vded2_slider_bg_pane_g

0x9a1f,	// (0x00021a5f) aid_postcard_touch_down_pane_ParamLimits

0x9a1f,	// (0x00021a5f) aid_postcard_touch_down_pane

0x9a2f,	// (0x00021a6f) aid_postcard_touch_up_pane_ParamLimits

0x9a2f,	// (0x00021a6f) aid_postcard_touch_up_pane

0x622f,	// (0x0001e26f) main_blid2_pane

0x6722,	// (0x0001e762) popup_blid2_search_window

0xe7c9,	// (0x00026809) blid2_gps_pane

0xe7c9,	// (0x00026809) blid2_navig_pane

0xe7c9,	// (0x00026809) blid2_search_pane

0xe7c9,	// (0x00026809) blid2_tripm_pane

0xbe38,	// (0x00023e78) blid2_search_pane_g1_ParamLimits

0xbe38,	// (0x00023e78) blid2_search_pane_g1

0xbe44,	// (0x00023e84) blid2_search_pane_t1_ParamLimits

0xbe44,	// (0x00023e84) blid2_search_pane_t1

0xbe56,	// (0x00023e96) aid_size_cell_blid2_gps_ParamLimits

0xbe56,	// (0x00023e96) aid_size_cell_blid2_gps

0xbe66,	// (0x00023ea6) blid2_gps_pane_g1_ParamLimits

0xbe66,	// (0x00023ea6) blid2_gps_pane_g1

0xbe72,	// (0x00023eb2) grid_blid2_satellite_pane_ParamLimits

0xbe72,	// (0x00023eb2) grid_blid2_satellite_pane

0xbe80,	// (0x00023ec0) blid2_navig_pane_g1_ParamLimits

0xbe80,	// (0x00023ec0) blid2_navig_pane_g1

0xbe8c,	// (0x00023ecc) blid2_navig_pane_t1_ParamLimits

0xbe8c,	// (0x00023ecc) blid2_navig_pane_t1

0xbe9e,	// (0x00023ede) blid2_navig_pane_t2_ParamLimits

0xbe9e,	// (0x00023ede) blid2_navig_pane_t2

0x0001,

0xfa4c,	// (0x00027a8c) blid2_navig_pane_t_ParamLimits

0xfa4c,	// (0x00027a8c) blid2_navig_pane_t

0xbeb0,	// (0x00023ef0) blid2_navig_ring_pane_ParamLimits

0xbeb0,	// (0x00023ef0) blid2_navig_ring_pane

0xbec0,	// (0x00023f00) blid2_speed_pane_ParamLimits

0xbec0,	// (0x00023f00) blid2_speed_pane

0xbecc,	// (0x00023f0c) blid2_tripm_pane_g1_ParamLimits

0xbecc,	// (0x00023f0c) blid2_tripm_pane_g1

0xbedc,	// (0x00023f1c) blid2_tripm_pane_g2_ParamLimits

0xbedc,	// (0x00023f1c) blid2_tripm_pane_g2

0xbee8,	// (0x00023f28) blid2_tripm_pane_g3_ParamLimits

0xbee8,	// (0x00023f28) blid2_tripm_pane_g3

0xbef4,	// (0x00023f34) blid2_tripm_pane_g4_ParamLimits

0xbef4,	// (0x00023f34) blid2_tripm_pane_g4

0xbf00,	// (0x00023f40) blid2_tripm_pane_g5_ParamLimits

0xbf00,	// (0x00023f40) blid2_tripm_pane_g5

0x0005,

0xfa51,	// (0x00027a91) blid2_tripm_pane_g_ParamLimits

0xfa51,	// (0x00027a91) blid2_tripm_pane_g

0xbf1c,	// (0x00023f5c) blid2_tripm_pane_t1_ParamLimits

0xbf1c,	// (0x00023f5c) blid2_tripm_pane_t1

0xbf2e,	// (0x00023f6e) blid2_tripm_pane_t2_ParamLimits

0xbf2e,	// (0x00023f6e) blid2_tripm_pane_t2

0xbf40,	// (0x00023f80) blid2_tripm_pane_t3_ParamLimits

0xbf40,	// (0x00023f80) blid2_tripm_pane_t3

0x0003,

0xfa5e,	// (0x00027a9e) blid2_tripm_pane_t_ParamLimits

0xfa5e,	// (0x00027a9e) blid2_tripm_pane_t

0xbf72,	// (0x00023fb2) cell_blid2_satellite_pane_ParamLimits

0xbf72,	// (0x00023fb2) cell_blid2_satellite_pane

0xbf90,	// (0x00023fd0) cell_blid2_satellite_pane_g1

0x3812,	// (0x0001b852) cell_blid2_satellite_pane_t1

0x0131,	// (0x00018171) blid2_speed_pane_g1

0x3820,	// (0x0001b860) blid2_speed_pane_t1

0x382e,	// (0x0001b86e) blid2_speed_pane_t2

0x0001,

0xfa67,	// (0x00027aa7) blid2_speed_pane_t

0x0131,	// (0x00018171) blid2_navig_ring_pane_g1

0xbf99,	// (0x00023fd9) blid2_navig_ring_pane_g2

0xbfa1,	// (0x00023fe1) blid2_navig_ring_pane_g3

0xbfa9,	// (0x00023fe9) blid2_navig_ring_pane_g4

0xbfb1,	// (0x00023ff1) blid2_navig_ring_pane_g5

0x0004,

0xfa6c,	// (0x00027aac) blid2_navig_ring_pane_g

0xe7c9,	// (0x00026809) bg_popup_window_pane_cp011

0x383c,	// (0x0001b87c) popup_blid2_search_window_g1

0x3844,	// (0x0001b884) popup_blid2_search_window_t1

0x3852,	// (0x0001b892) popup_blid2_search_window_t2

0x0001,

0xfa77,	// (0x00027ab7) popup_blid2_search_window_t

0x0235,	// (0x00018275) main_browser_pane_g1

0xef71,	// (0x00026fb1) main_browser_pane_ParamLimits

0x66f9,	// (0x0001e739) bg_button_pane_cp011_ParamLimits

0x74cf,	// (0x0001f50f) cell_vitu2_function_pane_g1_ParamLimits

0x0bf7,	// (0x00018c37) bg_popup_sub_pane_cp22_ParamLimits

0xb982,	// (0x000239c2) input_focus_pane_cp08_ParamLimits

0xb99e,	// (0x000239de) popup_vitu2_query_button_pane_ParamLimits

0xb99e,	// (0x000239de) popup_vitu2_query_button_pane

0xb9ad,	// (0x000239ed) popup_vitu2_query_input_button_pane

0x33aa,	// (0x0001b3ea) popup_vitu2_query_window_g1_ParamLimits

0xb9b7,	// (0x000239f7) popup_vitu2_query_window_g2_ParamLimits

0xf97f,	// (0x000279bf) popup_vitu2_query_window_g_ParamLimits

0xe7c9,	// (0x00026809) bg_button_pane_cp026

0xbfb9,	// (0x00023ff9) popup_vitu2_query_input_button_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp025

0x3860,	// (0x0001b8a0) popup_vitu2_query_button_pane_t1

0xa473,	// (0x000224b3) main_mp3_pane_t6

0xa483,	// (0x000224c3) popup_slider_window_cp01

0x708e,	// (0x0001f0ce) cam4_battery_pane

0x716c,	// (0x0001f1ac) cam4_battery_pane_cp02

0x764f,	// (0x0001f68f) cam4_battery_pane_cp01

0x764f,	// (0x0001f68f) cam4_battery_pane_cp03

0x386e,	// (0x0001b8ae) cam4_battery_pane_g1

0x0131,	// (0x00018171) cam4_battery_pane_g2

0x0001,

0xfa7c,	// (0x00027abc) cam4_battery_pane_g

0x22b5,	// (0x0001a2f5) popup_blid_sat_info2_window_t11

0x9588,	// (0x000215c8) aid_size_touch_mv_arrow_left_ParamLimits

0x95b3,	// (0x000215f3) aid_size_touch_mv_arrow_right_ParamLimits

0x0a58,	// (0x00018a98) navi_pane_g1_ParamLimits

0x95f2,	// (0x00021632) navi_pane_g2_ParamLimits

0x9620,	// (0x00021660) navi_pane_g3_ParamLimits

0xf35a,	// (0x0002739a) navi_pane_g_ParamLimits

0x967a,	// (0x000216ba) navi_pane_mv_t1_ParamLimits

0xae54,	// (0x00022e94) grid_imed_effect_pane_ParamLimits

0x8231,	// (0x00020271) aid_placing_vt_slider_lsc

0x0180,	// (0x000181c0) aid_placing_vt_slider_prt

0xe82a,	// (0x0002686a) bg_tb_trans_pane_cp01_ParamLimits

0x251d,	// (0x0001a55d) popup_image_details_window_g1_ParamLimits

0x2530,	// (0x0001a570) popup_image_details_window_g2_ParamLimits

0x2545,	// (0x0001a585) popup_image_details_window_g3_ParamLimits

0x2545,	// (0x0001a585) popup_image_details_window_g3

0xf686,	// (0x000276c6) popup_image_details_window_g_ParamLimits

0x2559,	// (0x0001a599) popup_image_details_window_t1_ParamLimits

0x256b,	// (0x0001a5ab) popup_image_details_window_t2_ParamLimits

0x2584,	// (0x0001a5c4) popup_image_details_window_t3_ParamLimits

0x2598,	// (0x0001a5d8) popup_image_details_window_t4_ParamLimits

0x25b3,	// (0x0001a5f3) popup_image_details_window_t5_ParamLimits

0xf68d,	// (0x000276cd) popup_image_details_window_t_ParamLimits

0xbd0b,	// (0x00023d4b) cl_header_name_pane_ParamLimits

0xbd0b,	// (0x00023d4b) cl_header_name_pane

0xbfc1,	// (0x00024001) cl_header_name_pane_t1_ParamLimits

0xbfc1,	// (0x00024001) cl_header_name_pane_t1

0xbfd8,	// (0x00024018) cl_header_name_pane_t2_ParamLimits

0xbfd8,	// (0x00024018) cl_header_name_pane_t2

0xc002,	// (0x00024042) cl_header_name_pane_t3_ParamLimits

0xc002,	// (0x00024042) cl_header_name_pane_t3

0x0002,

0xfa81,	// (0x00027ac1) cl_header_name_pane_t_ParamLimits

0xfa81,	// (0x00027ac1) cl_header_name_pane_t

0x964b,	// (0x0002168b) navi_pane_mv_g2_ParamLimits

0x302c,	// (0x0001b06c) field_vitu2_entry_pane_g1_ParamLimits

0x3038,	// (0x0001b078) field_vitu2_entry_pane_g2_ParamLimits

0x0bc1,	// (0x00018c01) field_vitu2_entry_pane_g3_ParamLimits

0x0bc1,	// (0x00018c01) field_vitu2_entry_pane_g3

0xf888,	// (0x000278c8) field_vitu2_entry_pane_g_ParamLimits

0x7395,	// (0x0001f3d5) cell_vitu2_itu_pane_g1_ParamLimits

0x73ad,	// (0x0001f3ed) cell_vitu2_itu_pane_g2_ParamLimits

0x73ad,	// (0x0001f3ed) cell_vitu2_itu_pane_g2

0x0001,

0xf894,	// (0x000278d4) cell_vitu2_itu_pane_g_ParamLimits

0xf894,	// (0x000278d4) cell_vitu2_itu_pane_g

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp05_ParamLimits

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp05

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp03

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp04

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp10_ParamLimits

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp10

0xbcac,	// (0x00023cec) bg_vkb2_func_pane_cp08

0xb96a,	// (0x000239aa) bg_vkb2_func_pane_cp06

0xbc8f,	// (0x00023ccf) bg_vkb2_func_pane_cp07

0x3769,	// (0x0001b7a9) bg_vkb2_func_pane_cp11_ParamLimits

0x3769,	// (0x0001b7a9) bg_vkb2_func_pane_cp11

0x377e,	// (0x0001b7be) bg_vkb2_func_pane_cp12_ParamLimits

0x377e,	// (0x0001b7be) bg_vkb2_func_pane_cp12

0xe7c9,	// (0x00026809) bg_vkb2_func_pane_cp09

0x30a2,	// (0x0001b0e2) bg_vkb2_func_pane_g1

0x0346,	// (0x00018386) bg_vkb2_func_pane_g2

0x30aa,	// (0x0001b0ea) bg_vkb2_func_pane_g3

0x30b2,	// (0x0001b0f2) bg_vkb2_func_pane_g4

0x334f,	// (0x0001b38f) bg_vkb2_func_pane_g5

0x30ca,	// (0x0001b10a) bg_vkb2_func_pane_g6

0x30d2,	// (0x0001b112) bg_vkb2_func_pane_g7

0x30c2,	// (0x0001b102) bg_vkb2_func_pane_g8

0x0326,	// (0x00018366) bg_vkb2_func_pane_g9

0x0008,

0xfa88,	// (0x00027ac8) bg_vkb2_func_pane_g

0xbf0e,	// (0x00023f4e) blid2_tripm_pane_g6_ParamLimits

0xbf0e,	// (0x00023f4e) blid2_tripm_pane_g6

0x2e0b,	// (0x0001ae4b) mp4_progress_pane_g1

0xbf66,	// (0x00023fa6) blid2_tripm_values_pane_ParamLimits

0xbf66,	// (0x00023fa6) blid2_tripm_values_pane

0xc027,	// (0x00024067) blid2_tripm_values_pane_t1

0xc035,	// (0x00024075) blid2_tripm_values_pane_t2

0xc043,	// (0x00024083) blid2_tripm_values_pane_t3

0xc051,	// (0x00024091) blid2_tripm_values_pane_t4

0xc05f,	// (0x0002409f) blid2_tripm_values_pane_t5

0xc06d,	// (0x000240ad) blid2_tripm_values_pane_t6

0xc07b,	// (0x000240bb) blid2_tripm_values_pane_t7

0xc089,	// (0x000240c9) blid2_tripm_values_pane_t8

0xc097,	// (0x000240d7) blid2_tripm_values_pane_t9

0x0008,

0xfa9b,	// (0x00027adb) blid2_tripm_values_pane_t

0x826f,	// (0x000202af) call_video_pane_t1_ParamLimits

0x828c,	// (0x000202cc) call_video_pane_t2_ParamLimits

0xf208,	// (0x00027248) call_video_pane_t_ParamLimits

0x996f,	// (0x000219af) msg_header_pane_g1_ParamLimits

0x0cb6,	// (0x00018cf6) msg_header_pane_g2_ParamLimits

0x0cb6,	// (0x00018cf6) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0002743d) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0002743d) msg_header_pane_g

0xef71,	// (0x00026fb1) main_clock2_pane_ParamLimits

0xaca7,	// (0x00022ce7) grid_clock2_toolbar_pane_ParamLimits

0xaca7,	// (0x00022ce7) grid_clock2_toolbar_pane

0xaca7,	// (0x00022ce7) listscroll_clock2_pane_ParamLimits

0xaca7,	// (0x00022ce7) listscroll_clock2_pane

0xad56,	// (0x00022d96) main_clock2_pane_t3_ParamLimits

0xad56,	// (0x00022d96) main_clock2_pane_t3

0xad68,	// (0x00022da8) main_clock2_pane_t4_ParamLimits

0xad68,	// (0x00022da8) main_clock2_pane_t4

0x3878,	// (0x0001b8b8) cell_clock2_toolbar_pane

0x3880,	// (0x0001b8c0) cell_clock2_toolbar_pane_cp01

0x3880,	// (0x0001b8c0) cell_clock2_toolbar_pane_cp02

0x3888,	// (0x0001b8c8) cell_clock2_toolbar_pane_cp03

0x3890,	// (0x0001b8d0) list_clock2_pane

0x09be,	// (0x000189fe) scroll_pane_cp10

0x3898,	// (0x0001b8d8) list_single_clock2_pane_ParamLimits

0x3898,	// (0x0001b8d8) list_single_clock2_pane

0x00dc,	// (0x0001811c) list_highlight_pane_cp08

0x38a5,	// (0x0001b8e5) list_single_clock2_pane_t1

0x38b3,	// (0x0001b8f3) list_single_clock2_pane_t2

0x0001,

0xfaae,	// (0x00027aee) list_single_clock2_pane_t

0xe7c9,	// (0x00026809) bg_button_pane_cp10

0x38c1,	// (0x0001b901) cell_clock2_toolbar_pane_g1

0x6676,	// (0x0001e6b6) aid_main_viewer_pane_g1_ParamLimits

0x6676,	// (0x0001e6b6) aid_main_viewer_pane_g1

0x6682,	// (0x0001e6c2) aid_main_viewer_pane_g2_ParamLimits

0x6682,	// (0x0001e6c2) aid_main_viewer_pane_g2

0x99db,	// (0x00021a1b) aid_main_viewer_pane_g3_ParamLimits

0x99db,	// (0x00021a1b) aid_main_viewer_pane_g3

0x99ec,	// (0x00021a2c) aid_main_viewer_pane_g4_ParamLimits

0x99ec,	// (0x00021a2c) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0002744e) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0002744e) aid_main_viewer_pane_g

0x66da,	// (0x0001e71a) main_calc_pane_ParamLimits

0x6707,	// (0x0001e747) main_dialer2_pane_ParamLimits

0x622f,	// (0x0001e26f) main_cam6_pane

0x622f,	// (0x0001e26f) main_vid6_pane

0xacb3,	// (0x00022cf3) listscroll_gen_pane_cp06_ParamLimits

0xacb3,	// (0x00022cf3) listscroll_gen_pane_cp06

0xad7a,	// (0x00022dba) main_clock2_pane_t5_ParamLimits

0xad7a,	// (0x00022dba) main_clock2_pane_t5

0xadc7,	// (0x00022e07) aid_call2_pane_cp10_ParamLimits

0xadd9,	// (0x00022e19) aid_call_pane_cp10_ParamLimits

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x693e,	// (0x0001e97e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x693e,	// (0x0001e97e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0a2d,	// (0x00018a6d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf742,	// (0x00027782) popup_clock_analogue_window_cp10_g_ParamLimits

0x6954,	// (0x0001e994) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb0b1,	// (0x000230f1) cell_dialer2_keypad_pane_g2_ParamLimits

0xb0b1,	// (0x000230f1) cell_dialer2_keypad_pane_g2

0x0001,

0xf827,	// (0x00027867) cell_dialer2_keypad_pane_g_ParamLimits

0xf827,	// (0x00027867) cell_dialer2_keypad_pane_g

0xb0cd,	// (0x0002310d) cell_dialer2_keypad_pane_t1

0xb4f0,	// (0x00023530) main_cset_text2_pane_ParamLimits

0xb4f0,	// (0x00023530) main_cset_text2_pane

0x35a2,	// (0x0001b5e2) area_vitu2_query_pane_g1_ParamLimits

0xbc2e,	// (0x00023c6e) area_vitu2_query_pane_g2_ParamLimits

0xf9d2,	// (0x00027a12) area_vitu2_query_pane_g_ParamLimits

0x3626,	// (0x0001b666) area_vitu2_query_pane_t7_ParamLimits

0x3626,	// (0x0001b666) area_vitu2_query_pane_t7

0xb96a,	// (0x000239aa) bg_button_pane_cp018_ParamLimits

0xbc8f,	// (0x00023ccf) bg_button_pane_cp021_ParamLimits

0xbc9b,	// (0x00023cdb) bg_button_pane_cp022_ParamLimits

0xbcac,	// (0x00023cec) bg_vkb2_func_pane_cp08_ParamLimits

0xb96a,	// (0x000239aa) bg_vkb2_func_pane_cp06_ParamLimits

0xbc8f,	// (0x00023ccf) bg_vkb2_func_pane_cp07_ParamLimits

0xbcbe,	// (0x00023cfe) input_focus_pane_cp09_ParamLimits

0x76ff,	// (0x0001f73f) cam6_autofocus_pane_ParamLimits

0x76ff,	// (0x0001f73f) cam6_autofocus_pane

0x7721,	// (0x0001f761) cam6_image_uncrop_pane_ParamLimits

0x7721,	// (0x0001f761) cam6_image_uncrop_pane

0x774e,	// (0x0001f78e) cam6_indi_pane_ParamLimits

0x774e,	// (0x0001f78e) cam6_indi_pane

0x7768,	// (0x0001f7a8) cam6_mode_pane_ParamLimits

0x7768,	// (0x0001f7a8) cam6_mode_pane

0x777c,	// (0x0001f7bc) cam6_timer_pane_ParamLimits

0x777c,	// (0x0001f7bc) cam6_timer_pane

0x7788,	// (0x0001f7c8) cam6_zoom_pane_ParamLimits

0x7788,	// (0x0001f7c8) cam6_zoom_pane

0xc0a5,	// (0x000240e5) cam6_mode_pane_g1_ParamLimits

0xc0a5,	// (0x000240e5) cam6_mode_pane_g1

0xc0b1,	// (0x000240f1) cam6_mode_pane_g2_ParamLimits

0xc0b1,	// (0x000240f1) cam6_mode_pane_g2

0xc0bd,	// (0x000240fd) cam6_mode_pane_g3_ParamLimits

0xc0bd,	// (0x000240fd) cam6_mode_pane_g3

0xc0c9,	// (0x00024109) cam6_mode_pane_g4_ParamLimits

0xc0c9,	// (0x00024109) cam6_mode_pane_g4

0x0003,

0xfab3,	// (0x00027af3) cam6_mode_pane_g_ParamLimits

0xfab3,	// (0x00027af3) cam6_mode_pane_g

0x206b,	// (0x0001a0ab) bg_tb_trans_pane_cp08_ParamLimits

0x206b,	// (0x0001a0ab) bg_tb_trans_pane_cp08

0x38d7,	// (0x0001b917) cam6_battery_pane_ParamLimits

0x38d7,	// (0x0001b917) cam6_battery_pane

0x38ed,	// (0x0001b92d) cam6_indi_pane_g1_ParamLimits

0x38ed,	// (0x0001b92d) cam6_indi_pane_g1

0x38ff,	// (0x0001b93f) cam6_indi_pane_g2_ParamLimits

0x38ff,	// (0x0001b93f) cam6_indi_pane_g2

0x3911,	// (0x0001b951) cam6_indi_pane_g3_ParamLimits

0x3911,	// (0x0001b951) cam6_indi_pane_g3

0x0002,

0xfabc,	// (0x00027afc) cam6_indi_pane_g_ParamLimits

0xfabc,	// (0x00027afc) cam6_indi_pane_g

0x3923,	// (0x0001b963) cam6_indi_pane_t1_ParamLimits

0x3923,	// (0x0001b963) cam6_indi_pane_t1

0xb20a,	// (0x0002324a) cam6_autofocus_pane_g1

0xb202,	// (0x00023242) cam6_autofocus_pane_g2

0xb21a,	// (0x0002325a) cam6_autofocus_pane_g3

0xb212,	// (0x00023252) cam6_autofocus_pane_g4

0x0003,

0xfac3,	// (0x00027b03) cam6_autofocus_pane_g

0x3949,	// (0x0001b989) cam6_timer_pane_g1

0x3951,	// (0x0001b991) cam6_timer_pane_t1

0x395f,	// (0x0001b99f) cam6_zoom_cont_pane

0x3967,	// (0x0001b9a7) cam6_zoom_pane_g1

0x396f,	// (0x0001b9af) cam6_zoom_pane_g2

0xc0d5,	// (0x00024115) cam6_zoom_pane_g3

0x0002,

0xfacc,	// (0x00027b0c) cam6_zoom_pane_g

0x0131,	// (0x00018171) cam6_battery_pane_g1

0x0131,	// (0x00018171) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x000273fe) cam6_battery_pane_g

0x3977,	// (0x0001b9b7) cam6_zoom_cont_pane_g1

0x3980,	// (0x0001b9c0) cam6_zoom_cont_pane_g2

0x3989,	// (0x0001b9c9) cam6_zoom_cont_pane_g3

0x0002,

0xfad3,	// (0x00027b13) cam6_zoom_cont_pane_g

0xc0f2,	// (0x00024132) cam6_mode_pane_cp_ParamLimits

0xc0f2,	// (0x00024132) cam6_mode_pane_cp

0xc106,	// (0x00024146) cam6_zoom_pane_cp_ParamLimits

0xc106,	// (0x00024146) cam6_zoom_pane_cp

0xc122,	// (0x00024162) vid6_image_uncrop_cif_pane_ParamLimits

0xc122,	// (0x00024162) vid6_image_uncrop_cif_pane

0xc14e,	// (0x0002418e) vid6_image_uncrop_nhd_pane_ParamLimits

0xc14e,	// (0x0002418e) vid6_image_uncrop_nhd_pane

0xc16d,	// (0x000241ad) vid6_image_uncrop_vga_pane_ParamLimits

0xc16d,	// (0x000241ad) vid6_image_uncrop_vga_pane

0xc18c,	// (0x000241cc) vid6_image_uncrop_wvga_pane_ParamLimits

0xc18c,	// (0x000241cc) vid6_image_uncrop_wvga_pane

0xc1ab,	// (0x000241eb) vid6_indi_pane_ParamLimits

0xc1ab,	// (0x000241eb) vid6_indi_pane

0x206b,	// (0x0001a0ab) bg_tb_trans_pane_cp09_ParamLimits

0x206b,	// (0x0001a0ab) bg_tb_trans_pane_cp09

0x39a1,	// (0x0001b9e1) cam6_battery_pane_cp_ParamLimits

0x39a1,	// (0x0001b9e1) cam6_battery_pane_cp

0x39ad,	// (0x0001b9ed) vid6_indi_pane_g1_ParamLimits

0x39ad,	// (0x0001b9ed) vid6_indi_pane_g1

0x39bf,	// (0x0001b9ff) vid6_indi_pane_g2_ParamLimits

0x39bf,	// (0x0001b9ff) vid6_indi_pane_g2

0x39d1,	// (0x0001ba11) vid6_indi_pane_g3_ParamLimits

0x39d1,	// (0x0001ba11) vid6_indi_pane_g3

0x39e8,	// (0x0001ba28) vid6_indi_pane_g4_ParamLimits

0x39e8,	// (0x0001ba28) vid6_indi_pane_g4

0x39ff,	// (0x0001ba3f) vid6_indi_pane_g5_ParamLimits

0x39ff,	// (0x0001ba3f) vid6_indi_pane_g5

0x0004,

0xfada,	// (0x00027b1a) vid6_indi_pane_g_ParamLimits

0xfada,	// (0x00027b1a) vid6_indi_pane_g

0x3a19,	// (0x0001ba59) vid6_indi_pane_t1_ParamLimits

0x3a19,	// (0x0001ba59) vid6_indi_pane_t1

0x3a2f,	// (0x0001ba6f) vid6_indi_pane_t2_ParamLimits

0x3a2f,	// (0x0001ba6f) vid6_indi_pane_t2

0x3a57,	// (0x0001ba97) vid6_indi_pane_t3_ParamLimits

0x3a57,	// (0x0001ba97) vid6_indi_pane_t3

0x3a7f,	// (0x0001babf) vid6_indi_pane_t4_ParamLimits

0x3a7f,	// (0x0001babf) vid6_indi_pane_t4

0x0003,

0xfae5,	// (0x00027b25) vid6_indi_pane_t_ParamLimits

0xfae5,	// (0x00027b25) vid6_indi_pane_t

0x3aa3,	// (0x0001bae3) wait_bar_pane_cp08

0xc1d0,	// (0x00024210) main_cset_text2_pane_t1_ParamLimits

0xc1d0,	// (0x00024210) main_cset_text2_pane_t1

0xc0dd,	// (0x0002411d) listscroll_gen_pane_cp06_t1_ParamLimits

0xc0dd,	// (0x0002411d) listscroll_gen_pane_cp06_t1

0x622f,	// (0x0001e26f) main_cam6_set_pane

0x42cb,	// (0x0001c30b) bg_tb_trans_pane_cp06_ParamLimits

0x7096,	// (0x0001f0d6) cam4_indicators_pane_g1_ParamLimits

0x70a7,	// (0x0001f0e7) cam4_indicators_pane_g2_ParamLimits

0xf864,	// (0x000278a4) cam4_indicators_pane_g_ParamLimits

0x70bf,	// (0x0001f0ff) cam4_indicators_pane_t1_ParamLimits

0x66f9,	// (0x0001e739) bg_tb_trans_pane_cp07_ParamLimits

0x7176,	// (0x0001f1b6) vid4_indicators_pane_g1_ParamLimits

0x718c,	// (0x0001f1cc) vid4_indicators_pane_g2_ParamLimits

0x71a0,	// (0x0001f1e0) vid4_indicators_pane_g3_ParamLimits

0x71b3,	// (0x0001f1f3) vid4_indicators_pane_g4_ParamLimits

0xf876,	// (0x000278b6) vid4_indicators_pane_g_ParamLimits

0x71d1,	// (0x0001f211) vid4_indicators_pane_t1_ParamLimits

0x7657,	// (0x0001f697) vid4_progress_pane_g1_ParamLimits

0x7667,	// (0x0001f6a7) vid4_progress_pane_g2_ParamLimits

0x7677,	// (0x0001f6b7) vid4_progress_pane_g3_ParamLimits

0x7689,	// (0x0001f6c9) vid4_progress_pane_g4_ParamLimits

0xfa1d,	// (0x00027a5d) vid4_progress_pane_g_ParamLimits

0x76a7,	// (0x0001f6e7) vid4_progress_pane_t1_ParamLimits

0x76c1,	// (0x0001f701) vid4_progress_pane_t2_ParamLimits

0x76d7,	// (0x0001f717) vid4_progress_pane_t3_ParamLimits

0xfa28,	// (0x00027a68) vid4_progress_pane_t_ParamLimits

0x76ec,	// (0x0001f72c) wait_bar_pane_cp07_ParamLimits

0xc1f7,	// (0x00024237) main_cam6_set_pane_g2_ParamLimits

0xc1f7,	// (0x00024237) main_cam6_set_pane_g2

0xc203,	// (0x00024243) main_cset6_listscroll_pane_ParamLimits

0xc203,	// (0x00024243) main_cset6_listscroll_pane

0xc230,	// (0x00024270) main_cset6_slider_pane_ParamLimits

0xc230,	// (0x00024270) main_cset6_slider_pane

0xc23c,	// (0x0002427c) main_cset6_text2_pane_ParamLimits

0xc23c,	// (0x0002427c) main_cset6_text2_pane

0x3ab2,	// (0x0001baf2) main_cset6_text_pane

0x3aba,	// (0x0001bafa) main_cset_list_pane_copy1_ParamLimits

0x3aba,	// (0x0001bafa) main_cset_list_pane_copy1

0x3aca,	// (0x0001bb0a) scroll_pane_cp028_copy1

0xc24f,	// (0x0002428f) cset_list_set_pane_copy1

0xc25f,	// (0x0002429f) aid_position_infowindow_above_copy1

0xc267,	// (0x000242a7) aid_position_infowindow_below_copy1

0xc26f,	// (0x000242af) cset_list_set_pane_g1_copy1

0xc277,	// (0x000242b7) cset_list_set_pane_g3_copy1_ParamLimits

0xc277,	// (0x000242b7) cset_list_set_pane_g3_copy1

0xc286,	// (0x000242c6) cset_list_set_pane_t1_copy1_ParamLimits

0xc286,	// (0x000242c6) cset_list_set_pane_t1_copy1

0xe82a,	// (0x0002686a) list_highlight_pane_cp021_copy1_ParamLimits

0xe82a,	// (0x0002686a) list_highlight_pane_cp021_copy1

0x3ad3,	// (0x0001bb13) cset6_slider_pane_ParamLimits

0x3ad3,	// (0x0001bb13) cset6_slider_pane

0x3aff,	// (0x0001bb3f) main_cset6_slider_pane_g1_ParamLimits

0x3aff,	// (0x0001bb3f) main_cset6_slider_pane_g1

0xc29b,	// (0x000242db) main_cset6_slider_pane_g2_ParamLimits

0xc29b,	// (0x000242db) main_cset6_slider_pane_g2

0x3b27,	// (0x0001bb67) main_cset6_slider_pane_g3_ParamLimits

0x3b27,	// (0x0001bb67) main_cset6_slider_pane_g3

0xc2c3,	// (0x00024303) main_cset6_slider_pane_g4_ParamLimits

0xc2c3,	// (0x00024303) main_cset6_slider_pane_g4

0xc2cf,	// (0x0002430f) main_cset6_slider_pane_g5_ParamLimits

0xc2cf,	// (0x0002430f) main_cset6_slider_pane_g5

0x320e,	// (0x0001b24e) main_cset6_slider_pane_g7_ParamLimits

0x320e,	// (0x0001b24e) main_cset6_slider_pane_g7

0x321a,	// (0x0001b25a) main_cset6_slider_pane_g8_ParamLimits

0x321a,	// (0x0001b25a) main_cset6_slider_pane_g8

0xc2db,	// (0x0002431b) main_cset6_slider_pane_g9_ParamLimits

0xc2db,	// (0x0002431b) main_cset6_slider_pane_g9

0xc2e7,	// (0x00024327) main_cset6_slider_pane_g10_ParamLimits

0xc2e7,	// (0x00024327) main_cset6_slider_pane_g10

0xc2f3,	// (0x00024333) main_cset6_slider_pane_g11_ParamLimits

0xc2f3,	// (0x00024333) main_cset6_slider_pane_g11

0xc2ff,	// (0x0002433f) main_cset6_slider_pane_g12_ParamLimits

0xc2ff,	// (0x0002433f) main_cset6_slider_pane_g12

0xc30b,	// (0x0002434b) main_cset6_slider_pane_g13_ParamLimits

0xc30b,	// (0x0002434b) main_cset6_slider_pane_g13

0xc317,	// (0x00024357) main_cset6_slider_pane_g14_ParamLimits

0xc317,	// (0x00024357) main_cset6_slider_pane_g14

0xc323,	// (0x00024363) main_cset6_slider_pane_g15_ParamLimits

0xc323,	// (0x00024363) main_cset6_slider_pane_g15

0xc33b,	// (0x0002437b) main_cset6_slider_pane_g16_ParamLimits

0xc33b,	// (0x0002437b) main_cset6_slider_pane_g16

0xc347,	// (0x00024387) main_cset6_slider_pane_g17_ParamLimits

0xc347,	// (0x00024387) main_cset6_slider_pane_g17

0x0011,

0xfaee,	// (0x00027b2e) main_cset6_slider_pane_g_ParamLimits

0xfaee,	// (0x00027b2e) main_cset6_slider_pane_g

0x3b33,	// (0x0001bb73) main_cset6_slider_pane_t1_ParamLimits

0x3b33,	// (0x0001bb73) main_cset6_slider_pane_t1

0xc36b,	// (0x000243ab) main_cset6_slider_pane_t2_ParamLimits

0xc36b,	// (0x000243ab) main_cset6_slider_pane_t2

0xc396,	// (0x000243d6) main_cset6_slider_pane_t3_ParamLimits

0xc396,	// (0x000243d6) main_cset6_slider_pane_t3

0xc3c1,	// (0x00024401) main_cset6_slider_pane_t4_ParamLimits

0xc3c1,	// (0x00024401) main_cset6_slider_pane_t4

0xc3ec,	// (0x0002442c) main_cset6_slider_pane_t5_ParamLimits

0xc3ec,	// (0x0002442c) main_cset6_slider_pane_t5

0x3b74,	// (0x0001bbb4) main_cset6_slider_pane_t7_ParamLimits

0x3b74,	// (0x0001bbb4) main_cset6_slider_pane_t7

0xc417,	// (0x00024457) main_cset6_slider_pane_t8_ParamLimits

0xc417,	// (0x00024457) main_cset6_slider_pane_t8

0xc43b,	// (0x0002447b) main_cset6_slider_pane_t9_ParamLimits

0xc43b,	// (0x0002447b) main_cset6_slider_pane_t9

0xc45f,	// (0x0002449f) main_cset6_slider_pane_t10_ParamLimits

0xc45f,	// (0x0002449f) main_cset6_slider_pane_t10

0xc483,	// (0x000244c3) main_cset6_slider_pane_t11_ParamLimits

0xc483,	// (0x000244c3) main_cset6_slider_pane_t11

0x3baa,	// (0x0001bbea) main_cset6_slider_pane_t14_ParamLimits

0x3baa,	// (0x0001bbea) main_cset6_slider_pane_t14

0x3be3,	// (0x0001bc23) main_cset6_slider_pane_t15_ParamLimits

0x3be3,	// (0x0001bc23) main_cset6_slider_pane_t15

0x000b,

0xfb13,	// (0x00027b53) main_cset6_slider_pane_t_ParamLimits

0xfb13,	// (0x00027b53) main_cset6_slider_pane_t

0x3c1c,	// (0x0001bc5c) cset_slider_pane_g1_copy1

0x3c25,	// (0x0001bc65) cset_slider_pane_g2_copy1

0x3c2e,	// (0x0001bc6e) cset_slider_pane_g3_copy1

0xe7c9,	// (0x00026809) bg_popup_sub_pane_cp011_copy1

0x3c40,	// (0x0001bc80) main_cset_text_pane_g1_copy1

0x33be,	// (0x0001b3fe) main_cset_text_pane_t1_copy1

0x33cc,	// (0x0001b40c) main_cset_text_pane_t2_copy1

0x33da,	// (0x0001b41a) main_cset_text_pane_t3_copy1

0x33e8,	// (0x0001b428) main_cset_text_pane_t4_copy1

0x33f6,	// (0x0001b436) main_cset_text_pane_t5_copy1

0x3c48,	// (0x0001bc88) main_cset_text_pane_t6_copy1

0x3c56,	// (0x0001bc96) main_cset_text_pane_t7_copy1

0xc4c4,	// (0x00024504) main_cset_text2_pane_t1_copy1

0x66f9,	// (0x0001e739) main_ncimui_pane

0x6760,	// (0x0001e7a0) popup_query_ncimui_window_ParamLimits

0x6760,	// (0x0001e7a0) popup_query_ncimui_window

0x2654,	// (0x0001a694) field_cale_ev2_pane_g4_ParamLimits

0x2654,	// (0x0001a694) field_cale_ev2_pane_g4

0xb051,	// (0x00023091) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb051,	// (0x00023091) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7fe,	// (0x0002783e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7fe,	// (0x0002783e) cell_video_dialer_keypad_pane_g

0xb069,	// (0x000230a9) cell_video_dialer_keypad_pane_t1

0xe7c9,	// (0x00026809) bg_popup_window_pane_cp012

0x1e39,	// (0x00019e79) heading_pane_cp06

0x3c82,	// (0x0001bcc2) ncim_query_content_pane

0xe7c9,	// (0x00026809) bg_popup_heading_pane_cp01

0x3c8a,	// (0x0001bcca) ncim_heading_pane_t1

0x3c98,	// (0x0001bcd8) ncim_indicator_popup_pane

0x3caa,	// (0x0001bcea) ncim_query_button_pane

0x3cc0,	// (0x0001bd00) ncim_query_content_pane_t1

0x3cd2,	// (0x0001bd12) ncim_query_content_pane_t2

0x0005,

0xfb57,	// (0x00027b97) ncim_query_content_pane_t

0x3d0c,	// (0x0001bd4c) ncim_query_list_pane

0x3d1e,	// (0x0001bd5e) ncim_query_popup_pane

0x3c98,	// (0x0001bcd8) ncim_indicator_popup_pane_ParamLimits

0xc620,	// (0x00024660) ncim_query_content_pane_g1_ParamLimits

0xc620,	// (0x00024660) ncim_query_content_pane_g1

0x3cc0,	// (0x0001bd00) ncim_query_content_pane_t1_ParamLimits

0x3cd2,	// (0x0001bd12) ncim_query_content_pane_t2_ParamLimits

0xc62c,	// (0x0002466c) ncim_query_content_pane_t3_ParamLimits

0xc62c,	// (0x0002466c) ncim_query_content_pane_t3

0xc649,	// (0x00024689) ncim_query_content_pane_t4_ParamLimits

0xc649,	// (0x00024689) ncim_query_content_pane_t4

0xc666,	// (0x000246a6) ncim_query_content_pane_t5_ParamLimits

0xc666,	// (0x000246a6) ncim_query_content_pane_t5

0x3ce4,	// (0x0001bd24) ncim_query_content_pane_t6_ParamLimits

0x3ce4,	// (0x0001bd24) ncim_query_content_pane_t6

0xfb57,	// (0x00027b97) ncim_query_content_pane_t_ParamLimits

0x3d0c,	// (0x0001bd4c) ncim_query_list_pane_ParamLimits

0x3d1e,	// (0x0001bd5e) ncim_query_popup_pane_ParamLimits

0x3d32,	// (0x0001bd72) wait_bar_pane_cp04

0xe7c9,	// (0x00026809) input_focus_pane_cp011

0x3d3a,	// (0x0001bd7a) ncim_query_popup_pane_t1

0x3d48,	// (0x0001bd88) ncim_list_query_list_pane_ParamLimits

0x3d48,	// (0x0001bd88) ncim_list_query_list_pane

0xe7c9,	// (0x00026809) bg_button_pane_cp027

0x3d5b,	// (0x0001bd9b) ncim_query_button_pane_g1

0xe7c9,	// (0x00026809) list_highlight_pane_cp012

0x3d65,	// (0x0001bda5) ncim_list_query_list_pane_g1

0x3d6d,	// (0x0001bdad) ncim_list_query_list_pane_t1

0x70b3,	// (0x0001f0f3) cam4_indicators_pane_g3_ParamLimits

0x70b3,	// (0x0001f0f3) cam4_indicators_pane_g3

0x71bf,	// (0x0001f1ff) vid4_indicators_pane_g5_ParamLimits

0x71bf,	// (0x0001f1ff) vid4_indicators_pane_g5

0x7698,	// (0x0001f6d8) vid4_progress_pane_g5_ParamLimits

0x7698,	// (0x0001f6d8) vid4_progress_pane_g5

0xc4f6,	// (0x00024536) main_ncimui_pane_g1

0xc562,	// (0x000245a2) ncimui_group_query_pane_ParamLimits

0xc562,	// (0x000245a2) ncimui_group_query_pane

0xc5bc,	// (0x000245fc) ncimui_list_pane_ParamLimits

0xc5bc,	// (0x000245fc) ncimui_list_pane

0xc5e3,	// (0x00024623) ncimui_text_pane_ParamLimits

0xc5e3,	// (0x00024623) ncimui_text_pane

0xc683,	// (0x000246c3) ncimui_text_pane_t1_ParamLimits

0xc683,	// (0x000246c3) ncimui_text_pane_t1

0x3d7b,	// (0x0001bdbb) ncimui_list_single_graphic_pane_ParamLimits

0x3d7b,	// (0x0001bdbb) ncimui_list_single_graphic_pane

0xc6a2,	// (0x000246e2) ncimui_query_pane_ParamLimits

0xc6a2,	// (0x000246e2) ncimui_query_pane

0xe7c9,	// (0x00026809) list_highlight_pane_cp013

0x3d8b,	// (0x0001bdcb) ncim_list_query_list_pane_t1_copy1

0x3d65,	// (0x0001bda5) ncim_list_single_graphic_pane_g1

0xc6b5,	// (0x000246f5) ncim_query_button_pane_cp01

0xc6c1,	// (0x00024701) ncim_query_entry_pane_ParamLimits

0xc6c1,	// (0x00024701) ncim_query_entry_pane

0xc6d4,	// (0x00024714) ncimui_query_pane_g1

0xc6e0,	// (0x00024720) ncimui_query_pane_t1_ParamLimits

0xc6e0,	// (0x00024720) ncimui_query_pane_t1

0xe82a,	// (0x0002686a) input_focus_pane_cp012

0x3d99,	// (0x0001bdd9) ncim_query_entry_pane_t1

0xef71,	// (0x00026fb1) main_im_pane_ParamLimits

0x66f9,	// (0x0001e739) main_mobtv_pane_ParamLimits

0x66f9,	// (0x0001e739) main_mobtv_pane

0xc353,	// (0x00024393) main_cset6_slider_pane_g18_ParamLimits

0xc353,	// (0x00024393) main_cset6_slider_pane_g18

0xc35f,	// (0x0002439f) main_cset6_slider_pane_g19_ParamLimits

0xc35f,	// (0x0002439f) main_cset6_slider_pane_g19

0x0bc1,	// (0x00018c01) bg_main_mobtv_pane_ParamLimits

0x0bc1,	// (0x00018c01) bg_main_mobtv_pane

0xc6f9,	// (0x00024739) main_mobtv_info_pane

0xc704,	// (0x00024744) main_mobtv_loading_pane_ParamLimits

0xc704,	// (0x00024744) main_mobtv_loading_pane

0x3dab,	// (0x0001bdeb) main_mobtv_pg_channel_list_pane

0x3db5,	// (0x0001bdf5) main_mobtv_pg_hdr_pane

0xc711,	// (0x00024751) main_mobtv_programe_curr_pane_ParamLimits

0xc711,	// (0x00024751) main_mobtv_programe_curr_pane

0xc71e,	// (0x0002475e) main_mobtv_programe_next_pane_ParamLimits

0xc71e,	// (0x0002475e) main_mobtv_programe_next_pane

0x3dbe,	// (0x0001bdfe) popup_mobtv_noti_window

0x0131,	// (0x00018171) main_tv_pg_hdr_pane_g1

0x3dc8,	// (0x0001be08) main_tv_pg_hdr_pane_g2

0x3dd0,	// (0x0001be10) main_tv_pg_hdr_pane_g3

0x3dd8,	// (0x0001be18) main_tv_pg_hdr_pane_g4

0x3de0,	// (0x0001be20) main_tv_pg_hdr_pane_g5

0x3dea,	// (0x0001be2a) main_tv_pg_hdr_pane_g6

0x3df4,	// (0x0001be34) main_tv_pg_hdr_pane_g7

0x3dfe,	// (0x0001be3e) main_tv_pg_hdr_pane_g8

0x3e08,	// (0x0001be48) main_tv_pg_hdr_pane_g9

0x3e12,	// (0x0001be52) main_tv_pg_hdr_pane_g10

0x3e1c,	// (0x0001be5c) main_tv_pg_hdr_pane_g11

0x000a,

0xfb64,	// (0x00027ba4) main_tv_pg_hdr_pane_g

0x3e26,	// (0x0001be66) main_tv_pg_hdr_pane_t1

0x3e34,	// (0x0001be74) main_tv_pg_hdr_pane_t2

0x3e42,	// (0x0001be82) main_tv_pg_hdr_pane_t3

0x3e52,	// (0x0001be92) main_tv_pg_hdr_pane_t4

0x3e62,	// (0x0001bea2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb7b,	// (0x00027bbb) main_tv_pg_hdr_pane_t

0x3e72,	// (0x0001beb2) single_mobtv_pg_channel_pane_ParamLimits

0x3e72,	// (0x0001beb2) single_mobtv_pg_channel_pane

0x3e84,	// (0x0001bec4) single_mobtv_pg_channel_table_pane

0x3e8d,	// (0x0001becd) single_mobtv_pg_channel_thumb_pane

0x3e96,	// (0x0001bed6) single_tv_pg_channel_pane_g1

0x3e9f,	// (0x0001bedf) single_tv_pg_channel_pane_g2

0x0001,

0xfb86,	// (0x00027bc6) single_tv_pg_channel_pane_g

0xeeff,	// (0x00026f3f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x00026f3f) bg_single_mobtv_pg_channel_thumb_pane

0x3ea8,	// (0x0001bee8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3ea8,	// (0x0001bee8) single_mobtv_pg_channel_thumb_pane_g1

0x3eb6,	// (0x0001bef6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3eb6,	// (0x0001bef6) single_mobtv_pg_channel_thumb_pane_g2

0x3ec2,	// (0x0001bf02) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3ec2,	// (0x0001bf02) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb8b,	// (0x00027bcb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb8b,	// (0x00027bcb) single_mobtv_pg_channel_thumb_pane_g

0x3ece,	// (0x0001bf0e) single_mobtv_pg_channel_thumb_pane_t1

0x3edc,	// (0x0001bf1c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb92,	// (0x00027bd2) single_mobtv_pg_channel_thumb_pane_t

0x0131,	// (0x00018171) bg_single_mobtv_pg_channel_table_pane_g1

0x0131,	// (0x00018171) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x000273fe) bg_single_mobtv_pg_channel_table_pane_g

0x3eea,	// (0x0001bf2a) single_mobtv_pg_channel_table_pane_t1

0x3ef8,	// (0x0001bf38) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb97,	// (0x00027bd7) single_mobtv_pg_channel_table_pane_t

0xc733,	// (0x00024773) main_mobtv_info_pane_g1_ParamLimits

0xc733,	// (0x00024773) main_mobtv_info_pane_g1

0xc74f,	// (0x0002478f) main_mobtv_info_pane_t1_ParamLimits

0xc74f,	// (0x0002478f) main_mobtv_info_pane_t1

0xc7c7,	// (0x00024807) main_mobtv_info_pane_t2_ParamLimits

0xc7c7,	// (0x00024807) main_mobtv_info_pane_t2

0x0002,

0xfba1,	// (0x00027be1) main_mobtv_info_pane_t_ParamLimits

0xfba1,	// (0x00027be1) main_mobtv_info_pane_t

0xc858,	// (0x00024898) wait_bar_pane_cp05

0xc86a,	// (0x000248aa) main_mobtv_loading_pane_g1_ParamLimits

0xc86a,	// (0x000248aa) main_mobtv_loading_pane_g1

0xc876,	// (0x000248b6) main_mobtv_loading_pane_g2_ParamLimits

0xc876,	// (0x000248b6) main_mobtv_loading_pane_g2

0xc882,	// (0x000248c2) main_mobtv_loading_pane_g3_ParamLimits

0xc882,	// (0x000248c2) main_mobtv_loading_pane_g3

0x0002,

0xfba8,	// (0x00027be8) main_mobtv_loading_pane_g_ParamLimits

0xfba8,	// (0x00027be8) main_mobtv_loading_pane_g

0x3f06,	// (0x0001bf46) main_mobtv_loading_pane_t1_ParamLimits

0x3f06,	// (0x0001bf46) main_mobtv_loading_pane_t1

0x3f1e,	// (0x0001bf5e) main_mobtv_loading_pane_t2_ParamLimits

0x3f1e,	// (0x0001bf5e) main_mobtv_loading_pane_t2

0x0001,

0xfbaf,	// (0x00027bef) main_mobtv_loading_pane_t_ParamLimits

0xfbaf,	// (0x00027bef) main_mobtv_loading_pane_t

0xc890,	// (0x000248d0) wait_bar_pane_cp06_ParamLimits

0xc890,	// (0x000248d0) wait_bar_pane_cp06

0x3f42,	// (0x0001bf82) main_mobtv_programe_curr_pane_t1

0x3f50,	// (0x0001bf90) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb4,	// (0x00027bf4) main_mobtv_programe_curr_pane_t

0x3f5e,	// (0x0001bf9e) main_mobtv_programe_next_pane_t1

0x3f6c,	// (0x0001bfac) main_mobtv_programe_next_pane_t2

0x3f7a,	// (0x0001bfba) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb9,	// (0x00027bf9) main_mobtv_programe_next_pane_t

0xe7c9,	// (0x00026809) bg_popup_mobtv_noti_window_pane

0x3f88,	// (0x0001bfc8) popup_mobtv_noti_window_g1

0x3f90,	// (0x0001bfd0) popup_mobtv_noti_window_t1

0x3f9e,	// (0x0001bfde) popup_mobtv_noti_window_t2

0x0001,

0xfbc0,	// (0x00027c00) popup_mobtv_noti_window_t

0x0131,	// (0x00018171) bg_popup_mobtv_noti_window_pane_g1

0x622f,	// (0x0001e26f) sc_clock_pane

0x622f,	// (0x0001e26f) main_fs_bigclock_pane

0xbf54,	// (0x00023f94) blid2_tripm_pane_t4_ParamLimits

0xbf54,	// (0x00023f94) blid2_tripm_pane_t4

0xc89c,	// (0x000248dc) sc_clock_pane_g1_ParamLimits

0xc89c,	// (0x000248dc) sc_clock_pane_g1

0xc8aa,	// (0x000248ea) sc_clock_pane_t1_ParamLimits

0xc8aa,	// (0x000248ea) sc_clock_pane_t1

0xc8bf,	// (0x000248ff) sc_clock_pane_t2_ParamLimits

0xc8bf,	// (0x000248ff) sc_clock_pane_t2

0xc8d1,	// (0x00024911) sc_clock_pane_t3_ParamLimits

0xc8d1,	// (0x00024911) sc_clock_pane_t3

0x0004,

0xfbc5,	// (0x00027c05) sc_clock_pane_t_ParamLimits

0xfbc5,	// (0x00027c05) sc_clock_pane_t

0xd673,	// (0x000256b3) main_fs_bigclock_indicator_pane_ParamLimits

0xd673,	// (0x000256b3) main_fs_bigclock_indicator_pane

0xc960,	// (0x000249a0) main_fs_bigclock_pane_g1_ParamLimits

0xc960,	// (0x000249a0) main_fs_bigclock_pane_g1

0xd67f,	// (0x000256bf) main_fs_bigclock_pane_t1_ParamLimits

0xd67f,	// (0x000256bf) main_fs_bigclock_pane_t1

0xd691,	// (0x000256d1) main_fs_bigclock_pane_t2_ParamLimits

0xd691,	// (0x000256d1) main_fs_bigclock_pane_t2

0xd6a5,	// (0x000256e5) main_fs_bigclock_pane_t3_ParamLimits

0xd6a5,	// (0x000256e5) main_fs_bigclock_pane_t3

0x0002,

0xfd56,	// (0x00027d96) main_fs_bigclock_pane_t_ParamLimits

0xfd56,	// (0x00027d96) main_fs_bigclock_pane_t

0x49e5,	// (0x0001ca25) main_fs_bigclock_indicator_pane_g1

0x3cb2,	// (0x0001bcf2) ncim_query_content_pane_g2_ParamLimits

0x3cb2,	// (0x0001bcf2) ncim_query_content_pane_g2

0x0001,

0xfb52,	// (0x00027b92) ncim_query_content_pane_g_ParamLimits

0xfb52,	// (0x00027b92) ncim_query_content_pane_g

0xc8e3,	// (0x00024923) sc_clock_pane_t4_ParamLimits

0xc8e3,	// (0x00024923) sc_clock_pane_t4

0x66f9,	// (0x0001e739) main_radioblah_pane

0x6f7d,	// (0x0001efbd) cell_call4_button_pane_t1_copy1_ParamLimits

0x6f7d,	// (0x0001efbd) cell_call4_button_pane_t1_copy1

0xc512,	// (0x00024552) main_ncimui_pane_t1_ParamLimits

0xc512,	// (0x00024552) main_ncimui_pane_t1

0xc52c,	// (0x0002456c) main_ncimui_pane_t2_ParamLimits

0xc52c,	// (0x0002456c) main_ncimui_pane_t2

0x0002,

0xfb4b,	// (0x00027b8b) main_ncimui_pane_t_ParamLimits

0xfb4b,	// (0x00027b8b) main_ncimui_pane_t

0x3fac,	// (0x0001bfec) main_radioblah_anim_pane_ParamLimits

0x3fac,	// (0x0001bfec) main_radioblah_anim_pane

0x3fbd,	// (0x0001bffd) main_radioblah_info_pane_ParamLimits

0x3fbd,	// (0x0001bffd) main_radioblah_info_pane

0x3fd1,	// (0x0001c011) main_radioblah_pane_t1_ParamLimits

0x3fd1,	// (0x0001c011) main_radioblah_pane_t1

0x3fed,	// (0x0001c02d) main_radioblah_pane_t2_ParamLimits

0x3fed,	// (0x0001c02d) main_radioblah_pane_t2

0x0003,

0xfbe6,	// (0x00027c26) main_radioblah_pane_t_ParamLimits

0xfbe6,	// (0x00027c26) main_radioblah_pane_t

0xcaff,	// (0x00024b3f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcaff,	// (0x00024b3f) main_radioblah_rocker_ctrl_pane

0x4035,	// (0x0001c075) main_radioblah_info_pane_t1_ParamLimits

0x4035,	// (0x0001c075) main_radioblah_info_pane_t1

0xcb48,	// (0x00024b88) main_radioblah_info_pane_t2_ParamLimits

0xcb48,	// (0x00024b88) main_radioblah_info_pane_t2

0x0003,

0xfbef,	// (0x00027c2f) main_radioblah_info_pane_t_ParamLimits

0xfbef,	// (0x00027c2f) main_radioblah_info_pane_t

0x0131,	// (0x00018171) main_radioblah_rocker_ctrl_pane_g1

0xcbf8,	// (0x00024c38) main_radioblah_rocker_ctrl_pane_g2

0xcc00,	// (0x00024c40) main_radioblah_rocker_ctrl_pane_g3

0xcc08,	// (0x00024c48) main_radioblah_rocker_ctrl_pane_g4

0xcc10,	// (0x00024c50) main_radioblah_rocker_ctrl_pane_g5

0xcc18,	// (0x00024c58) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf8,	// (0x00027c38) main_radioblah_rocker_ctrl_pane_g

0xc4c4,	// (0x00024504) main_cset_text2_pane_t1_copy1_ParamLimits

0x7006,	// (0x0001f046) cam4_image_uncrop_qvga_pane

0x7125,	// (0x0001f165) vid4_image_uncrop_qcif_pane

0x7740,	// (0x0001f780) cam6_image_uncrop_qvga_pane_ParamLimits

0x7740,	// (0x0001f780) cam6_image_uncrop_qvga_pane

0x3991,	// (0x0001b9d1) vid6_image_uncrop_qcif_pane_ParamLimits

0x3991,	// (0x0001b9d1) vid6_image_uncrop_qcif_pane

0xe7c9,	// (0x00026809) bg_popup_preview_window_pane_cp03

0x3c64,	// (0x0001bca4) list_cset_text2_pane

0x3c6c,	// (0x0001bcac) main_cset6_text2_pane_g1

0x3c74,	// (0x0001bcb4) main_cset6_text2_pane_t1

0xcc20,	// (0x00024c60) list_cset_text2_pane_t1_ParamLimits

0xcc20,	// (0x00024c60) list_cset_text2_pane_t1

0x66f9,	// (0x0001e739) main_radioblah_pane_ParamLimits

0xc844,	// (0x00024884) main_mobtv_info_pane_t3_ParamLimits

0xc844,	// (0x00024884) main_mobtv_info_pane_t3

0xcaed,	// (0x00024b2d) main_radioblah_pane_g1

0xcb18,	// (0x00024b58) main_radioblah_info_pane_g1

0xcb9d,	// (0x00024bdd) main_radioblah_info_pane_t3_ParamLimits

0xcb9d,	// (0x00024bdd) main_radioblah_info_pane_t3

0x91da,	// (0x0002121a) highlight_cell_cale_month_pane_ParamLimits

0x91da,	// (0x0002121a) highlight_cell_cale_month_pane

0x622f,	// (0x0001e26f) main_phob_fisheye_pane

0x26c9,	// (0x0001a709) scroll_pane_cp0031_ParamLimits

0x26c9,	// (0x0001a709) scroll_pane_cp0031

0x3aa3,	// (0x0001bae3) wait_bar_pane_cp08_ParamLimits

0xc24f,	// (0x0002428f) cset_list_set_pane_copy1_ParamLimits

0x406f,	// (0x0001c0af) highlight_cell_cale_month_pane_g1

0xcc37,	// (0x00024c77) highlight_cell_cale_month_pane_t1

0x3692,	// (0x0001b6d2) list_gen_pane_cp01

0x31c0,	// (0x0001b200) scroll_pane_01

0xcc45,	// (0x00024c85) list_single_double_fisheye_pane

0xcc4e,	// (0x00024c8e) list_double_fisheye_pane_g1_ParamLimits

0xcc4e,	// (0x00024c8e) list_double_fisheye_pane_g1

0xcc5a,	// (0x00024c9a) list_double_fisheye_pane_g2_ParamLimits

0xcc5a,	// (0x00024c9a) list_double_fisheye_pane_g2

0xcc6e,	// (0x00024cae) list_double_fisheye_pane_g3_ParamLimits

0xcc6e,	// (0x00024cae) list_double_fisheye_pane_g3

0x0004,

0xfc05,	// (0x00027c45) list_double_fisheye_pane_g_ParamLimits

0xfc05,	// (0x00027c45) list_double_fisheye_pane_g

0xcc97,	// (0x00024cd7) list_double_fisheye_pane_t1_ParamLimits

0xcc97,	// (0x00024cd7) list_double_fisheye_pane_t1

0xccb2,	// (0x00024cf2) list_double_fisheye_pane_t2_ParamLimits

0xccb2,	// (0x00024cf2) list_double_fisheye_pane_t2

0x0001,

0xfc10,	// (0x00027c50) list_double_fisheye_pane_t_ParamLimits

0xfc10,	// (0x00027c50) list_double_fisheye_pane_t

0x622f,	// (0x0001e26f) main_call5_pane

0xc909,	// (0x00024949) sc_swipe_pane_ParamLimits

0xc909,	// (0x00024949) sc_swipe_pane

0xcce0,	// (0x00024d20) call5_image_pane_ParamLimits

0xcce0,	// (0x00024d20) call5_image_pane

0xccf2,	// (0x00024d32) call5_swipe_1_pane_ParamLimits

0xccf2,	// (0x00024d32) call5_swipe_1_pane

0xccfe,	// (0x00024d3e) call5_swipe_2_pane_ParamLimits

0xccfe,	// (0x00024d3e) call5_swipe_2_pane

0xcd18,	// (0x00024d58) popup_call5_audio_first_window_ParamLimits

0xcd18,	// (0x00024d58) popup_call5_audio_first_window

0xeeff,	// (0x00026f3f) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) call5_swipe_1_pane_g1

0x4077,	// (0x0001c0b7) call5_swipe_1_pane_g2_ParamLimits

0x4077,	// (0x0001c0b7) call5_swipe_1_pane_g2

0x0001,

0xfc15,	// (0x00027c55) call5_swipe_1_pane_g_ParamLimits

0xfc15,	// (0x00027c55) call5_swipe_1_pane_g

0x4083,	// (0x0001c0c3) call5_swipe_1_pane_t1_ParamLimits

0x4083,	// (0x0001c0c3) call5_swipe_1_pane_t1

0xeeff,	// (0x00026f3f) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x00026f3f) call5_swipe_2_pane_g1

0x4098,	// (0x0001c0d8) call5_swipe_2_pane_g2_ParamLimits

0x4098,	// (0x0001c0d8) call5_swipe_2_pane_g2

0x0001,

0xfc1a,	// (0x00027c5a) call5_swipe_2_pane_g_ParamLimits

0xfc1a,	// (0x00027c5a) call5_swipe_2_pane_g

0x40a4,	// (0x0001c0e4) call5_swipe_2_pane_t1_ParamLimits

0x40a4,	// (0x0001c0e4) call5_swipe_2_pane_t1

0x40b9,	// (0x0001c0f9) sc_swipe_pane_g1_ParamLimits

0x40b9,	// (0x0001c0f9) sc_swipe_pane_g1

0x40c6,	// (0x0001c106) sc_swipe_pane_g2_ParamLimits

0x40c6,	// (0x0001c106) sc_swipe_pane_g2

0x0001,

0xfc1f,	// (0x00027c5f) sc_swipe_pane_g_ParamLimits

0xfc1f,	// (0x00027c5f) sc_swipe_pane_g

0x40d2,	// (0x0001c112) sc_swipe_pane_t1_ParamLimits

0x40d2,	// (0x0001c112) sc_swipe_pane_t1

0x622f,	// (0x0001e26f) main_cmail_launcher_pane

0xcd28,	// (0x00024d68) aid_size_cell_cmail_l_ParamLimits

0xcd28,	// (0x00024d68) aid_size_cell_cmail_l

0xcd36,	// (0x00024d76) grid_cmail_l_pane_ParamLimits

0xcd36,	// (0x00024d76) grid_cmail_l_pane

0xcd44,	// (0x00024d84) cell_cmail_l_pane_ParamLimits

0xcd44,	// (0x00024d84) cell_cmail_l_pane

0xcd5f,	// (0x00024d9f) cell_cmail_l_pane_g1_ParamLimits

0xcd5f,	// (0x00024d9f) cell_cmail_l_pane_g1

0xcd6b,	// (0x00024dab) cell_cmail_l_pane_t1_ParamLimits

0xcd6b,	// (0x00024dab) cell_cmail_l_pane_t1

0xcd81,	// (0x00024dc1) cell_cmail_l_pane_t2_ParamLimits

0xcd81,	// (0x00024dc1) cell_cmail_l_pane_t2

0x0001,

0xfc24,	// (0x00027c64) cell_cmail_l_pane_t_ParamLimits

0xfc24,	// (0x00027c64) cell_cmail_l_pane_t

0xe82a,	// (0x0002686a) grid_highlight_pane_cp018_ParamLimits

0xe82a,	// (0x0002686a) grid_highlight_pane_cp018

0x6090,	// (0x0001e0d0) main2_pane_ParamLimits

0x6090,	// (0x0001e0d0) main2_pane

0xf009,	// (0x00027049) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x00027051) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x00027059) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x00027061) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x00027069) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x00027071) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x00027079) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x00027081) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x00027089) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x00027091) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x00027091) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0002716b) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00027219) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00027219) list_medium_line_x2_t3_g3_g

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t1

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t2

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_x2_t3_g2_g

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t1

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t2

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0002722c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0002722c) list_medium_line_x2_t4_g4_g

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t1

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t2

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t3

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00027235) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00027235) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0002722c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0002722c) list_medium_line_x2_t2_g4_g

0x0103,	// (0x00018143) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g4_t1

0x0103,	// (0x00018143) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g4_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g4_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00027219) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00027219) list_medium_line_x2_t2_g3_g

0x0103,	// (0x00018143) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g3_t1

0x0103,	// (0x00018143) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g3_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g3_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g3_t

0x9329,	// (0x00021369) main_sp_fs_list_pane_ParamLimits

0x9329,	// (0x00021369) main_sp_fs_list_pane

0x9335,	// (0x00021375) sp_fs_scroll_pane_ParamLimits

0x9335,	// (0x00021375) sp_fs_scroll_pane

0x06c0,	// (0x00018700) list_medium_line_x2_t3_t1

0x06c0,	// (0x00018700) list_medium_line_x2_t3_t2

0x06c0,	// (0x00018700) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x000272e2) list_medium_line_x2_t3_t

0x06c0,	// (0x00018700) list_medium_line_x3_t4_t1

0x06c0,	// (0x00018700) list_medium_line_x3_t4_t2

0x06c0,	// (0x00018700) list_medium_line_x3_t4_t3

0x06c0,	// (0x00018700) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x000272e9) list_medium_line_x3_t4_t

0x06c0,	// (0x00018700) list_medium_line_x4_t5_t1

0x06c0,	// (0x00018700) list_medium_line_x4_t5_t2

0x06c0,	// (0x00018700) list_medium_line_x4_t5_t3

0x06c0,	// (0x00018700) list_medium_line_x4_t5_t4

0x06c0,	// (0x00018700) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x000272f2) list_medium_line_x4_t5_t

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g1

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g2

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g3

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0002722c) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0002722c) list_medium_line_t4_g4_g

0x0103,	// (0x00018143) list_medium_line_t4_g4_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t4_g4_t1

0x0103,	// (0x00018143) list_medium_line_t4_g4_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t4_g4_t2

0x0103,	// (0x00018143) list_medium_line_t4_g4_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t4_g4_t3

0x0103,	// (0x00018143) list_medium_line_t4_g4_t4_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00027235) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00027235) list_medium_line_t4_g4_t

0x93bf,	// (0x000213ff) chi_dic_find_pane_g1

0x6715,	// (0x0001e755) main_tport_pane

0x06c0,	// (0x00018700) list_medium_line_plain_t1

0xeeff,	// (0x00026f3f) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_t2_g2_g

0x0103,	// (0x00018143) list_medium_line_t2_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_g2_t1

0x0103,	// (0x00018143) list_medium_line_t2_g2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_g2_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_t2_g2_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_t2_g2_t

0x370c,	// (0x0001b74c) aid_sp_fs_list_icon_a_sm

0x3714,	// (0x0001b754) aid_sp_fs_list_icon_d

0x371c,	// (0x0001b75c) aid_sp_fs_text_primary

0x3725,	// (0x0001b765) aid_sp_fs_text_secondary

0xe7c9,	// (0x00026809) list_medium_line

0xe7c9,	// (0x00026809) list_medium_line_g2

0xe7c9,	// (0x00026809) list_medium_line_g3

0xe7c9,	// (0x00026809) list_medium_line_plain

0xe7c9,	// (0x00026809) list_medium_line_plain_t2

0xe7c9,	// (0x00026809) list_medium_line_plain_t3

0xe7c9,	// (0x00026809) list_medium_line_right_icon

0xe7c9,	// (0x00026809) list_medium_line_right_iconx2

0xe7c9,	// (0x00026809) list_medium_line_t2

0xe7c9,	// (0x00026809) list_medium_line_t2_g2

0xe7c9,	// (0x00026809) list_medium_line_t2_g3

0xe7c9,	// (0x00026809) list_medium_line_t2_right_icon

0xe7c9,	// (0x00026809) list_medium_line_t2_right_iconx2

0xe7c9,	// (0x00026809) list_medium_line_t3

0xe7c9,	// (0x00026809) list_medium_line_t3_g2

0xe7c9,	// (0x00026809) list_medium_line_t3_g3

0xe7c9,	// (0x00026809) list_medium_line_t3_right_iconx2

0xe7c9,	// (0x00026809) list_medium_line_t4_g4

0xe7c9,	// (0x00026809) list_medium_line_x2

0xe7c9,	// (0x00026809) list_medium_line_x2_t2_g2

0xe7c9,	// (0x00026809) list_medium_line_x2_t2_g3

0xe7c9,	// (0x00026809) list_medium_line_x2_t2_g4

0xe7c9,	// (0x00026809) list_medium_line_x2_t3

0xe7c9,	// (0x00026809) list_medium_line_x2_t3_g2

0xe7c9,	// (0x00026809) list_medium_line_x2_t3_g3

0xe7c9,	// (0x00026809) list_medium_line_x2_t3_g4

0xe7c9,	// (0x00026809) list_medium_line_x2_t4_g2

0xe7c9,	// (0x00026809) list_medium_line_x2_t4_g4

0xe7c9,	// (0x00026809) list_medium_line_x3

0xe7c9,	// (0x00026809) list_medium_line_x3_t4

0xe7c9,	// (0x00026809) list_medium_line_x3_t4_g4

0xe7c9,	// (0x00026809) list_medium_line_x4_t4

0xe7c9,	// (0x00026809) list_medium_line_x4_t4_g7

0xe7c9,	// (0x00026809) list_medium_line_x4_t5

0xbddf,	// (0x00023e1f) list_single_fs_dyc_pane_ParamLimits

0xbddf,	// (0x00023e1f) list_single_fs_dyc_pane

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x00026f4d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x00026f4d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb2c,	// (0x00027b6c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb2c,	// (0x00027b6c) list_medium_line_x4_t4_g7_g

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t1

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t2

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x4_t4_g7_t3

0x0be3,	// (0x00018c23) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0be3,	// (0x00018c23) list_medium_line_x4_t4_g7_t4

0x0be3,	// (0x00018c23) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0be3,	// (0x00018c23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb3b,	// (0x00027b7b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb3b,	// (0x00027b7b) list_medium_line_x4_t4_g7_t

0xc4a7,	// (0x000244e7) list_single_dyc_row_pane_ParamLimits

0xc4a7,	// (0x000244e7) list_single_dyc_row_pane

0xccd4,	// (0x00024d14) call5_gesture_pane_ParamLimits

0xccd4,	// (0x00024d14) call5_gesture_pane

0xcd0a,	// (0x00024d4a) call5_windows_pane_ParamLimits

0xcd0a,	// (0x00024d4a) call5_windows_pane

0xcd9e,	// (0x00024dde) call5_swipe_1_pane_cp_ParamLimits

0xcd9e,	// (0x00024dde) call5_swipe_1_pane_cp

0xcdaa,	// (0x00024dea) call5_swipe_2_pane_cp_ParamLimits

0xcdaa,	// (0x00024dea) call5_swipe_2_pane_cp

0x00dc,	// (0x0001811c) call5_image_pane_cp

0xcdb6,	// (0x00024df6) popup_call5_audio_first_window_cp_ParamLimits

0xcdb6,	// (0x00024df6) popup_call5_audio_first_window_cp

0x40b9,	// (0x0001c0f9) call5_swipe_1_pane_g1_cp_ParamLimits

0x40b9,	// (0x0001c0f9) call5_swipe_1_pane_g1_cp

0x40e7,	// (0x0001c127) call5_swipe_1_pane_g2_cp

0x40d2,	// (0x0001c112) call5_swipe_1_pane_t1_cp_ParamLimits

0x40d2,	// (0x0001c112) call5_swipe_1_pane_t1_cp

0x40b9,	// (0x0001c0f9) call5_swipe_2_pane_g1_cp_ParamLimits

0x40b9,	// (0x0001c0f9) call5_swipe_2_pane_g1_cp

0x40ef,	// (0x0001c12f) call5_swipe_2_pane_g2_cp

0x40f7,	// (0x0001c137) call5_swipe_2_pane_t1_cp_ParamLimits

0x40f7,	// (0x0001c137) call5_swipe_2_pane_t1_cp

0xe82a,	// (0x0002686a) main_sp_fs_email_pane

0x32dc,	// (0x0001b31c) main_sp_fs_listscroll_pane_te

0xcdc4,	// (0x00024e04) popup_sp_fs_action_menu_pane_ParamLimits

0xcdc4,	// (0x00024e04) popup_sp_fs_action_menu_pane

0x0131,	// (0x00018171) bg_sp_fs_ctrlbar_pane_g1

0x410c,	// (0x0001c14c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4115,	// (0x0001c155) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x411e,	// (0x0001c15e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0131,	// (0x00018171) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc29,	// (0x00027c69) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2079,	// (0x0001a0b9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2079,	// (0x0001a0b9) bg_sp_fs_ctrlbar_ddmenu_pane

0x4127,	// (0x0001c167) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4127,	// (0x0001c167) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4133,	// (0x0001c173) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4133,	// (0x0001c173) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc32,	// (0x00027c72) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc32,	// (0x00027c72) main_sp_fs_ctrlbar_ddmenu_pane_g

0x413f,	// (0x0001c17f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x413f,	// (0x0001c17f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0131,	// (0x00018171) list_medium_line_t2_right_icon_g1

0x06c0,	// (0x00018700) list_medium_line_t2_right_icon_t1

0x06c0,	// (0x00018700) list_medium_line_t2_right_icon_t2

0x0001,

0xfc37,	// (0x00027c77) list_medium_line_t2_right_icon_t

0x0bf7,	// (0x00018c37) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0bf7,	// (0x00018c37) bg_sp_fs_ctrlbar_pane

0xce63,	// (0x00024ea3) main_sp_fs_ctrlbar_button_pane_cp01

0xce6b,	// (0x00024eab) main_sp_fs_ctrlbar_ddmenu_pane

0x4193,	// (0x0001c1d3) main_sp_fs_ctrlbar_pane_g1

0x419f,	// (0x0001c1df) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc3c,	// (0x00027c7c) main_sp_fs_ctrlbar_pane_g

0xcea9,	// (0x00024ee9) main_sp_fs_ctrlbar_pane_t1

0xcee6,	// (0x00024f26) main_sp_fs_ctrlbar_pane

0xcf00,	// (0x00024f40) main_sp_fs_listscroll_pane_te_cp01

0xcf11,	// (0x00024f51) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcf11,	// (0x00024f51) popup_sp_fs_action_menu_pane_cp01

0xe82a,	// (0x0002686a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe82a,	// (0x0002686a) bg_sp_fs_highlight_list_pane_cp01

0x41c6,	// (0x0001c206) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x41c6,	// (0x0001c206) sp_fs_action_menu_list_gene_pane_g1

0x41d5,	// (0x0001c215) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x41d5,	// (0x0001c215) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4a,	// (0x00027c8a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4a,	// (0x00027c8a) sp_fs_action_menu_list_gene_pane_g

0x41e2,	// (0x0001c222) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x41e2,	// (0x0001c222) sp_fs_action_menu_list_gene_pane_t1

0x41fa,	// (0x0001c23a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x41fa,	// (0x0001c23a) sp_fs_action_menu_list_gene_pane

0x421d,	// (0x0001c25d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x421d,	// (0x0001c25d) popup_sp_fs_action_menu_bg_pane

0x422b,	// (0x0001c26b) sp_fs_action_menu_list_pane_ParamLimits

0x422b,	// (0x0001c26b) sp_fs_action_menu_list_pane

0xcf31,	// (0x00024f71) sp_fs_scroll_pane_cp01_ParamLimits

0xcf31,	// (0x00024f71) sp_fs_scroll_pane_cp01

0x06c0,	// (0x00018700) list_medium_line_plain_t2_t1

0x06c0,	// (0x00018700) list_medium_line_plain_t2_t2

0x0001,

0xfc37,	// (0x00027c77) list_medium_line_plain_t2_t

0x06c0,	// (0x00018700) list_medium_line_plain_t3_t1

0x06c0,	// (0x00018700) list_medium_line_plain_t3_t2

0x06c0,	// (0x00018700) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x000272e2) list_medium_line_plain_t3_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_x2_t2_g2_g

0x0103,	// (0x00018143) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g2_t1

0x0103,	// (0x00018143) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t2_g2_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g2_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_x2_t4_g2_g

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t1

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t2

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t3

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00027235) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00027235) list_medium_line_x2_t4_g2_t

0x0131,	// (0x00018171) list_medium_line_t3_right_iconx2_g1

0x0131,	// (0x00018171) list_medium_line_t3_right_iconx2_g2

0x0131,	// (0x00018171) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x00027403) list_medium_line_t3_right_iconx2_g

0x06c0,	// (0x00018700) list_medium_line_t3_right_iconx2_t1

0x06c0,	// (0x00018700) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc37,	// (0x00027c77) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0002722c) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0002722c) list_medium_line_x3_t4_g4_g

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t1

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t2

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t3

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00027235) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00027235) list_medium_line_x3_t4_g4_t

0xcf57,	// (0x00024f97) list_single_dyc_row_text_pane_t1_ParamLimits

0xcf57,	// (0x00024f97) list_single_dyc_row_text_pane_t1

0xcf96,	// (0x00024fd6) list_single_dyc_row_text_pane_t2_ParamLimits

0xcf96,	// (0x00024fd6) list_single_dyc_row_text_pane_t2

0x424f,	// (0x0001c28f) list_single_dyc_row_text_pane_t3_ParamLimits

0x424f,	// (0x0001c28f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc4f,	// (0x00027c8f) list_single_dyc_row_text_pane_t_ParamLimits

0xfc4f,	// (0x00027c8f) list_single_dyc_row_text_pane_t

0x4273,	// (0x0001c2b3) list_single_dyc_row_pane_g1_ParamLimits

0x4273,	// (0x0001c2b3) list_single_dyc_row_pane_g1

0x427f,	// (0x0001c2bf) list_single_dyc_row_pane_g2_ParamLimits

0x427f,	// (0x0001c2bf) list_single_dyc_row_pane_g2

0x428b,	// (0x0001c2cb) list_single_dyc_row_pane_g3_ParamLimits

0x428b,	// (0x0001c2cb) list_single_dyc_row_pane_g3

0x4297,	// (0x0001c2d7) list_single_dyc_row_pane_g4_ParamLimits

0x4297,	// (0x0001c2d7) list_single_dyc_row_pane_g4

0x0003,

0xfc5c,	// (0x00027c9c) list_single_dyc_row_pane_g_ParamLimits

0xfc5c,	// (0x00027c9c) list_single_dyc_row_pane_g

0x42a3,	// (0x0001c2e3) list_single_dyc_row_text_pane_ParamLimits

0x42a3,	// (0x0001c2e3) list_single_dyc_row_text_pane

0xe7c9,	// (0x00026809) bg_sp_fs_scroll_pane

0x42c2,	// (0x0001c302) thumb_sp_fs_scroll_pane

0xeeff,	// (0x00026f3f) list_medium_line_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g1

0x0103,	// (0x00018143) list_medium_line_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t1

0xeeff,	// (0x00026f3f) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_x2_g

0x0103,	// (0x00018143) list_medium_line_x2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t1

0xeeff,	// (0x00026f3f) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x3_g1

0x42cb,	// (0x0001c30b) list_medium_line_x3_g2_ParamLimits

0x42cb,	// (0x0001c30b) list_medium_line_x3_g2

0x0001,

0xfc65,	// (0x00027ca5) list_medium_line_x3_g_ParamLimits

0xfc65,	// (0x00027ca5) list_medium_line_x3_g

0x42d9,	// (0x0001c319) list_medium_line_x3_t1_ParamLimits

0x42d9,	// (0x0001c319) list_medium_line_x3_t1

0x42ed,	// (0x0001c32d) thumb_sp_fs_scroll_pane_g1

0x42f6,	// (0x0001c336) thumb_sp_fs_scroll_pane_g2

0x42ff,	// (0x0001c33f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6a,	// (0x00027caa) thumb_sp_fs_scroll_pane_g

0x42ed,	// (0x0001c32d) bg_sp_fs_scroll_pane_g1

0x42f6,	// (0x0001c336) bg_sp_fs_scroll_pane_g2

0x42ff,	// (0x0001c33f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6a,	// (0x00027caa) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0002722c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0002722c) list_medium_line_x2_t3_g4_g

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t1

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t2

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x00026f3f) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_g2_g

0x0103,	// (0x00018143) list_medium_line_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_g2_t1

0xeeff,	// (0x00026f3f) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g2_g1

0xeeff,	// (0x00026f3f) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00027227) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00027227) list_medium_line_t3_g2_g

0x0103,	// (0x00018143) list_medium_line_t3_g2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g2_t1

0x0103,	// (0x00018143) list_medium_line_t3_g2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g2_t2

0x0103,	// (0x00018143) list_medium_line_t3_g2_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_t3_g2_t

0x0131,	// (0x00018171) list_medium_line_right_icon_g1

0x06c0,	// (0x00018700) list_medium_line_right_icon_t1

0xeeff,	// (0x00026f3f) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g1

0x0103,	// (0x00018143) list_medium_line_t2_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_t1

0x0103,	// (0x00018143) list_medium_line_t2_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_t2_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_t2_t

0xeeff,	// (0x00026f3f) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g1

0x0103,	// (0x00018143) list_medium_line_t3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_t1

0x0103,	// (0x00018143) list_medium_line_t3_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_t2

0x0103,	// (0x00018143) list_medium_line_t3_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_t3_t

0xeeff,	// (0x00026f3f) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g3_g1

0xeeff,	// (0x00026f3f) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g3_g2

0xeeff,	// (0x00026f3f) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00027219) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00027219) list_medium_line_g3_g

0x0103,	// (0x00018143) list_medium_line_g3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_g3_t1

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g1

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g2

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00027219) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00027219) list_medium_line_t2_g3_g

0x0103,	// (0x00018143) list_medium_line_t2_g3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_g3_t1

0x0103,	// (0x00018143) list_medium_line_t2_g3_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t2_g3_t2

0x0001,

0xaa68,	// (0x00022aa8) list_medium_line_t2_g3_t_ParamLimits

0xaa68,	// (0x00022aa8) list_medium_line_t2_g3_t

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g1

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g2

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x00026f3f) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00027219) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00027219) list_medium_line_t3_g3_g

0x0103,	// (0x00018143) list_medium_line_t3_g3_t1_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g3_t1

0x0103,	// (0x00018143) list_medium_line_t3_g3_t2_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g3_t2

0x0103,	// (0x00018143) list_medium_line_t3_g3_t3_ParamLimits

0x0103,	// (0x00018143) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00027220) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00027220) list_medium_line_t3_g3_t

0x0131,	// (0x00018171) list_medium_line_right_iconx2_g1

0x0131,	// (0x00018171) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x000273fe) list_medium_line_right_iconx2_g

0x06c0,	// (0x00018700) list_medium_line_right_iconx2_t1

0x0131,	// (0x00018171) list_medium_line_t2_right_iconx2_g1

0x0131,	// (0x00018171) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x000273fe) list_medium_line_t2_right_iconx2_g

0x06c0,	// (0x00018700) list_medium_line_t2_right_iconx2_t1

0x06c0,	// (0x00018700) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc37,	// (0x00027c77) list_medium_line_t2_right_iconx2_t

0x06c0,	// (0x00018700) list_medium_line_x4_t4_t1

0x06c0,	// (0x00018700) list_medium_line_x4_t4_t2

0x06c0,	// (0x00018700) list_medium_line_x4_t4_t3

0x06c0,	// (0x00018700) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x000272e9) list_medium_line_x4_t4_t

0xd0eb,	// (0x0002512b) tport_appsw_pane_ParamLimits

0xd0eb,	// (0x0002512b) tport_appsw_pane

0xd0f9,	// (0x00025139) tport_contact_pane_ParamLimits

0xd0f9,	// (0x00025139) tport_contact_pane

0xd109,	// (0x00025149) tport_listscroll_pane_ParamLimits

0xd109,	// (0x00025149) tport_listscroll_pane

0xd118,	// (0x00025158) cell_tport_appsw_pane_ParamLimits

0xd118,	// (0x00025158) cell_tport_appsw_pane

0xef0d,	// (0x00026f4d) tport_appsw_pane_g1_ParamLimits

0xef0d,	// (0x00026f4d) tport_appsw_pane_g1

0x4308,	// (0x0001c348) tport_contact_pane_g1

0x4311,	// (0x0001c351) tport_contact_pane_t1

0x431f,	// (0x0001c35f) tport_contact_pane_t2

0x0001,

0xfc71,	// (0x00027cb1) tport_contact_pane_t

0x432d,	// (0x0001c36d) list_tport_pane

0x4336,	// (0x0001c376) scroll_pane_cp_030

0xd14d,	// (0x0002518d) cell_tport_appsw_pane_g1

0xd15d,	// (0x0002519d) cell_tport_appsw_pane_t1

0xd16b,	// (0x000251ab) grid_highlight_pane_cp019

0xd173,	// (0x000251b3) list_tport_double_graphic_pane_ParamLimits

0xd173,	// (0x000251b3) list_tport_double_graphic_pane

0xe82a,	// (0x0002686a) list_highlight_pane_cp023_ParamLimits

0xe82a,	// (0x0002686a) list_highlight_pane_cp023

0xd190,	// (0x000251d0) list_tport_double_graphic_pane_g1_ParamLimits

0xd190,	// (0x000251d0) list_tport_double_graphic_pane_g1

0xd19d,	// (0x000251dd) list_tport_double_graphic_pane_t1_ParamLimits

0xd19d,	// (0x000251dd) list_tport_double_graphic_pane_t1

0xd1b2,	// (0x000251f2) list_tport_double_graphic_pane_t2_ParamLimits

0xd1b2,	// (0x000251f2) list_tport_double_graphic_pane_t2

0x0001,

0xfc7d,	// (0x00027cbd) list_tport_double_graphic_pane_t_ParamLimits

0xfc7d,	// (0x00027cbd) list_tport_double_graphic_pane_t

0xe7c9,	// (0x00026809) main_cale_note_pane

0x737a,	// (0x0001f3ba) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x737a,	// (0x0001f3ba) cell_vitu2_function_top_wide_pane_cp01

0xc858,	// (0x00024898) wait_bar_pane_cp05_ParamLimits

0xe82a,	// (0x0002686a) listscroll_cmail_pane

0x433f,	// (0x0001c37f) list_cmail_pane

0xd1c4,	// (0x00025204) list_cmail_body_pane

0xd1de,	// (0x0002521e) list_single_cmail_header_caption_pane

0x434f,	// (0x0001c38f) list_single_cmail_header_detail_pane_ParamLimits

0x434f,	// (0x0001c38f) list_single_cmail_header_detail_pane

0x4381,	// (0x0001c3c1) list_single_cmail_header_caption_pane_t1

0xd1fe,	// (0x0002523e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd1fe,	// (0x0002523e) list_single_cmail_header_detail_pane_g1

0x4398,	// (0x0001c3d8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4398,	// (0x0001c3d8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc82,	// (0x00027cc2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc82,	// (0x00027cc2) list_single_cmail_header_detail_pane_g

0x43b1,	// (0x0001c3f1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x43b1,	// (0x0001c3f1) list_single_cmail_header_detail_pane_t1

0x4411,	// (0x0001c451) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4411,	// (0x0001c451) list_single_cmail_header_editor_pane_bg

0x3e9f,	// (0x0001bedf) list_cmail_body_pane_g1

0x4428,	// (0x0001c468) list_cmail_body_pane_t1

0x30a2,	// (0x0001b0e2) list_single_cmail_header_editor_pane_bg_g1

0x0346,	// (0x00018386) list_single_cmail_header_editor_pane_bg_g1_copy1

0x30b2,	// (0x0001b0f2) list_single_cmail_header_editor_pane_bg_g1_copy2

0x30aa,	// (0x0001b0ea) list_single_cmail_header_editor_pane_bg_g1_copy3

0x334f,	// (0x0001b38f) list_single_cmail_header_editor_pane_bg_g1_copy4

0x30d2,	// (0x0001b112) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x30c2,	// (0x0001b102) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x30ca,	// (0x0001b10a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0326,	// (0x00018366) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd216,	// (0x00025256) calenote_gesture_pane_ParamLimits

0xd216,	// (0x00025256) calenote_gesture_pane

0xd230,	// (0x00025270) calenote_window_pane_ParamLimits

0xd230,	// (0x00025270) calenote_window_pane

0x4436,	// (0x0001c476) popup_note_window_cp01

0xd248,	// (0x00025288) calenote_swipe_1_pane_ParamLimits

0xd248,	// (0x00025288) calenote_swipe_1_pane

0xcdaa,	// (0x00024dea) calenote_swipe_2_pane_ParamLimits

0xcdaa,	// (0x00024dea) calenote_swipe_2_pane

0x40b9,	// (0x0001c0f9) calenote_swipe_1_pane_g1_ParamLimits

0x40b9,	// (0x0001c0f9) calenote_swipe_1_pane_g1

0x40c6,	// (0x0001c106) calenote_swipe_1_pane_g2_ParamLimits

0x40c6,	// (0x0001c106) calenote_swipe_1_pane_g2

0x0001,

0xfc1f,	// (0x00027c5f) calenote_swipe_1_pane_g_ParamLimits

0xfc1f,	// (0x00027c5f) calenote_swipe_1_pane_g

0x4448,	// (0x0001c488) calenote_swipe_1_pane_t1_ParamLimits

0x4448,	// (0x0001c488) calenote_swipe_1_pane_t1

0x40b9,	// (0x0001c0f9) calenote_swipe_2_pane_g1_ParamLimits

0x40b9,	// (0x0001c0f9) calenote_swipe_2_pane_g1

0x4467,	// (0x0001c4a7) calenote_swipe_2_pane_g2_ParamLimits

0x4467,	// (0x0001c4a7) calenote_swipe_2_pane_g2

0x0001,

0xfc8e,	// (0x00027cce) calenote_swipe_2_pane_g_ParamLimits

0xfc8e,	// (0x00027cce) calenote_swipe_2_pane_g

0x4473,	// (0x0001c4b3) calenote_swipe_2_pane_t1_ParamLimits

0x4473,	// (0x0001c4b3) calenote_swipe_2_pane_t1

0xe7c9,	// (0x00026809) main_mup_navstr_pane

0xaacb,	// (0x00022b0b) main_mup3_pane_t7_ParamLimits

0xaacb,	// (0x00022b0b) main_mup3_pane_t7

0x6ba0,	// (0x0001ebe0) main_mp4_pane_g6_ParamLimits

0x6ba0,	// (0x0001ebe0) main_mp4_pane_g6

0x6ead,	// (0x0001eeed) main_image3_pane_t4_ParamLimits

0x6ead,	// (0x0001eeed) main_image3_pane_t4

0xd25b,	// (0x0002529b) popup_navstr_preview_pane_ParamLimits

0xd25b,	// (0x0002529b) popup_navstr_preview_pane

0xd267,	// (0x000252a7) scroll_navstr_pane_ParamLimits

0xd267,	// (0x000252a7) scroll_navstr_pane

0xe7c9,	// (0x00026809) bg_popup_preview_window_pane_cp04

0x449a,	// (0x0001c4da) popup_navstr_preview_pane_t1

0xd273,	// (0x000252b3) scroll_navstr_pane_g1_ParamLimits

0xd273,	// (0x000252b3) scroll_navstr_pane_g1

0xd280,	// (0x000252c0) scroll_navstr_pane_t1_ParamLimits

0xd280,	// (0x000252c0) scroll_navstr_pane_t1

0x443f,	// (0x0001c47f) bg_button_pane_cp014

0x443f,	// (0x0001c47f) bg_button_pane_cp030

0xcc7a,	// (0x00024cba) list_double_fisheye_pane_g4_ParamLimits

0xcc7a,	// (0x00024cba) list_double_fisheye_pane_g4

0xcc86,	// (0x00024cc6) list_double_fisheye_pane_g5_ParamLimits

0xcc86,	// (0x00024cc6) list_double_fisheye_pane_g5

0x31f6,	// (0x0001b236) sp_fs_scroll_pane_cp03

0x4193,	// (0x0001c1d3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x419f,	// (0x0001c1df) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc3c,	// (0x00027c7c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcea9,	// (0x00024ee9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4347,	// (0x0001c387) sp_fs_scroll_pane_cp02

0x0038,	// (0x00018078) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0038,	// (0x00018078) popup_sp_fs_calendar_preview_list_single_pane

0xe7c9,	// (0x00026809) main_cam6_pano_pane

0x66f9,	// (0x0001e739) main_mup3_pane_ParamLimits

0xe7c9,	// (0x00026809) main_phacti_pane

0xc72b,	// (0x0002476b) bg_button_pane_cp11

0xc743,	// (0x00024783) main_mobtv_info_pane_g2_ParamLimits

0xc743,	// (0x00024783) main_mobtv_info_pane_g2

0x0001,

0xfb9c,	// (0x00027bdc) main_mobtv_info_pane_g_ParamLimits

0xfb9c,	// (0x00027bdc) main_mobtv_info_pane_g

0xc8f5,	// (0x00024935) sc_clock_pane_t5_ParamLimits

0xc8f5,	// (0x00024935) sc_clock_pane_t5

0xcaed,	// (0x00024b2d) main_radioblah_pane_g1_ParamLimits

0x4005,	// (0x0001c045) main_radioblah_pane_t3_ParamLimits

0x4005,	// (0x0001c045) main_radioblah_pane_t3

0x401d,	// (0x0001c05d) main_radioblah_pane_t4_ParamLimits

0x401d,	// (0x0001c05d) main_radioblah_pane_t4

0xcb0b,	// (0x00024b4b) main_radioblah_text_pane_ParamLimits

0xcb0b,	// (0x00024b4b) main_radioblah_text_pane

0xcb18,	// (0x00024b58) main_radioblah_info_pane_g1_ParamLimits

0xcbb1,	// (0x00024bf1) main_radioblah_info_pane_t4_ParamLimits

0xcbb1,	// (0x00024bf1) main_radioblah_info_pane_t4

0xe82a,	// (0x0002686a) main_sp_fs_calendar_pane

0xd292,	// (0x000252d2) main_phacti_pane_g1

0xd29a,	// (0x000252da) phacti_note_pane_ParamLimits

0xd29a,	// (0x000252da) phacti_note_pane

0x44b1,	// (0x0001c4f1) phacti_term_pane_ParamLimits

0x44b1,	// (0x0001c4f1) phacti_term_pane

0x44c6,	// (0x0001c506) phacti_note_pane_t1_ParamLimits

0x44c6,	// (0x0001c506) phacti_note_pane_t1

0x44dd,	// (0x0001c51d) phacti_term_pane_g1

0x44e5,	// (0x0001c525) phacti_term_pane_t1_ParamLimits

0x44e5,	// (0x0001c525) phacti_term_pane_t1

0x450f,	// (0x0001c54f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x4517,	// (0x0001c557) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc98,	// (0x00027cd8) popup_sp_fs_calendar_preview_list_single_pane_g

0x451f,	// (0x0001c55f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x451f,	// (0x0001c55f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4535,	// (0x0001c575) aid_popup_sp_fs_bg_corner_pane

0x0131,	// (0x00018171) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7c9,	// (0x00026809) popup_sp_fs_calendar_preview_bg_pane

0x453d,	// (0x0001c57d) popup_sp_fs_calendar_preview_list_pane

0x0bf7,	// (0x00018c37) bg_main_sp_fs_cale_pane_ParamLimits

0x0bf7,	// (0x00018c37) bg_main_sp_fs_cale_pane

0x454e,	// (0x0001c58e) listscroll_cale_mrui_pane_ParamLimits

0x454e,	// (0x0001c58e) listscroll_cale_mrui_pane

0x4563,	// (0x0001c5a3) listscroll_sp_fs_schedule_track_pane

0x456c,	// (0x0001c5ac) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x456c,	// (0x0001c5ac) main_sp_fs_ctrlbar_pane_cp01

0x457f,	// (0x0001c5bf) main_sp_fs_ribbon_pane

0x4587,	// (0x0001c5c7) popup_sp_fs_cale_preview_window

0x4a24,	// (0x0001ca64) list_single_sp_fs_schedule_track_pane_ParamLimits

0x4a24,	// (0x0001ca64) list_single_sp_fs_schedule_track_pane

0xeef1,	// (0x00026f31) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeef1,	// (0x00026f31) bg_sp_fs_highlight_list_pane_cp03

0xd2fd,	// (0x0002533d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd2fd,	// (0x0002533d) list_single_sp_fs_schedule_track_pane_g1

0xd309,	// (0x00025349) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd309,	// (0x00025349) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc9d,	// (0x00027cdd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc9d,	// (0x00027cdd) list_single_sp_fs_schedule_track_pane_g

0xd315,	// (0x00025355) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd315,	// (0x00025355) list_single_sp_fs_schedule_track_pane_t1

0xd333,	// (0x00025373) sp_fs_schedule_track_pane_ParamLimits

0xd333,	// (0x00025373) sp_fs_schedule_track_pane

0x4599,	// (0x0001c5d9) sp_fs_schedule_track_pane_g1

0x45a1,	// (0x0001c5e1) sp_fs_schedule_track_pane_g2

0x45a9,	// (0x0001c5e9) sp_fs_schedule_track_pane_g3

0x45b1,	// (0x0001c5f1) sp_fs_schedule_track_pane_g4

0x45b9,	// (0x0001c5f9) sp_fs_schedule_track_pane_g5

0x0004,

0xfca2,	// (0x00027ce2) sp_fs_schedule_track_pane_g

0x30a2,	// (0x0001b0e2) bg_sp_fs_schedule_viewer_highlight_g1

0x0346,	// (0x00018386) bg_sp_fs_schedule_viewer_highlight_g2

0x30aa,	// (0x0001b0ea) bg_sp_fs_schedule_viewer_highlight_g3

0x30b2,	// (0x0001b0f2) bg_sp_fs_schedule_viewer_highlight_g4

0x334f,	// (0x0001b38f) bg_sp_fs_schedule_viewer_highlight_g5

0x30c2,	// (0x0001b102) bg_sp_fs_schedule_viewer_highlight_g6

0x30ca,	// (0x0001b10a) bg_sp_fs_schedule_viewer_highlight_g7

0x30d2,	// (0x0001b112) bg_sp_fs_schedule_viewer_highlight_g8

0x0326,	// (0x00018366) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcad,	// (0x00027ced) bg_sp_fs_schedule_viewer_highlight_g

0xe7c9,	// (0x00026809) bg_main_sp_fs_ribbon_pane

0xd345,	// (0x00025385) main_sp_fs_ribbon_pane_g1

0x45c1,	// (0x0001c601) main_sp_fs_ribbon_pane_t1

0xd34e,	// (0x0002538e) main_sp_fs_ribbon_pane_t2

0x45d0,	// (0x0001c610) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc0,	// (0x00027d00) main_sp_fs_ribbon_pane_t

0x45df,	// (0x0001c61f) main_sp_fs_ribbon_scheduler_pane

0x45e7,	// (0x0001c627) bg_main_sp_fs_ribbon_pane_g1

0x45f0,	// (0x0001c630) bg_main_sp_fs_ribbon_pane_g2

0x45f9,	// (0x0001c639) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc7,	// (0x00027d07) bg_main_sp_fs_ribbon_pane_g

0x4601,	// (0x0001c641) main_sp_fs_ribbon_scheduler_pane_g1

0x460a,	// (0x0001c64a) main_sp_fs_ribbon_scheduler_pane_g2

0x4613,	// (0x0001c653) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcce,	// (0x00027d0e) main_sp_fs_ribbon_scheduler_pane_g

0x461c,	// (0x0001c65c) list_cale_mrui_pane

0xd35d,	// (0x0002539d) sp_fs_scroll_pane_cp07_ParamLimits

0xd35d,	// (0x0002539d) sp_fs_scroll_pane_cp07

0xd379,	// (0x000253b9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd379,	// (0x000253b9) bg_sp_fs_schedule_viewer_highlight

0x4629,	// (0x0001c669) list_single_sp_fs_schedule_track_pane_cp01

0x4631,	// (0x0001c671) list_sp_fs_schedule_track_pane

0x4639,	// (0x0001c679) sp_fs_scroll_pane_cp06_ParamLimits

0x4639,	// (0x0001c679) sp_fs_scroll_pane_cp06

0x0131,	// (0x00018171) bgmain_sp_fs_calendar_pane_g1

0xd386,	// (0x000253c6) list_single_cale_mrui_pane_ParamLimits

0xd386,	// (0x000253c6) list_single_cale_mrui_pane

0x464b,	// (0x0001c68b) list_single_cale_mrui_row_pane_ParamLimits

0x464b,	// (0x0001c68b) list_single_cale_mrui_row_pane

0x4658,	// (0x0001c698) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4658,	// (0x0001c698) list_single_cale_mrui_row_pane_g1

0x469d,	// (0x0001c6dd) list_single_cale_mrui_row_pane_t1_ParamLimits

0x469d,	// (0x0001c6dd) list_single_cale_mrui_row_pane_t1

0xd3a9,	// (0x000253e9) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd3a9,	// (0x000253e9) list_single_cale_mrui_row_pane_t2

0x46af,	// (0x0001c6ef) list_single_cale_mrui_row_pane_t3_ParamLimits

0x46af,	// (0x0001c6ef) list_single_cale_mrui_row_pane_t3

0x46de,	// (0x0001c71e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x46de,	// (0x0001c71e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcdc,	// (0x00027d1c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcdc,	// (0x00027d1c) list_single_cale_mrui_row_pane_t

0xd40f,	// (0x0002544f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd40f,	// (0x0002544f) list_single_cmail_header_editor_pane_bg_cp01

0xd431,	// (0x00025471) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd431,	// (0x00025471) list_single_cmail_header_editor_pane_bg_cp02

0xd44d,	// (0x0002548d) main_radioblah_text_pane_t1_ParamLimits

0xd44d,	// (0x0002548d) main_radioblah_text_pane_t1

0x470f,	// (0x0001c74f) cam6_indi_pane_cp01

0x4717,	// (0x0001c757) cam6_mode_pane_cp01

0x471f,	// (0x0001c75f) cam6_pano_pane

0x4728,	// (0x0001c768) cam6_zoom_pane_cp01

0x4732,	// (0x0001c772) cam6_pano_image_pane

0x473b,	// (0x0001c77b) cam6_pano_pane_g1

0x3e9f,	// (0x0001bedf) cam6_pano_pane_g2

0x4744,	// (0x0001c784) cam6_pano_pane_g3

0x474d,	// (0x0001c78d) cam6_pano_pane_g4

0x293a,	// (0x0001a97a) cam6_pano_pane_g5

0x4756,	// (0x0001c796) cam6_pano_pane_g6

0x475e,	// (0x0001c79e) cam6_pano_pane_g7

0x4766,	// (0x0001c7a6) cam6_pano_pane_g8

0x476f,	// (0x0001c7af) cam6_pano_pane_g9

0x0008,

0xfce5,	// (0x00027d25) cam6_pano_pane_g

0xe7c9,	// (0x00026809) main_browser_tag_pane

0x4492,	// (0x0001c4d2) grid_navstr_albumart_pane

0x477a,	// (0x0001c7ba) cell_navstr_albumart_pane_ParamLimits

0x477a,	// (0x0001c7ba) cell_navstr_albumart_pane

0x4796,	// (0x0001c7d6) cell_navstr_albumart_pane_g1

0x1d79,	// (0x00019db9) cell_navstr_albumart_pane_g2

0x1d89,	// (0x00019dc9) cell_navstr_albumart_pane_g3

0x1d81,	// (0x00019dc1) cell_navstr_albumart_pane_g4

0x0003,

0xfcf8,	// (0x00027d38) cell_navstr_albumart_pane_g

0xd467,	// (0x000254a7) bt_list_pane_ParamLimits

0xd467,	// (0x000254a7) bt_list_pane

0xd480,	// (0x000254c0) bt_list_pane_t1

0xd48f,	// (0x000254cf) bt_list_pane_t2

0x0001,

0xfd01,	// (0x00027d41) bt_list_pane_t

0xe7c9,	// (0x00026809) main_cale_prevew_pane

0xd49e,	// (0x000254de) popup_cale_preview_window_ParamLimits

0xd49e,	// (0x000254de) popup_cale_preview_window

0xe82a,	// (0x0002686a) bg_popup_preview_window_pane_cp05_ParamLimits

0xe82a,	// (0x0002686a) bg_popup_preview_window_pane_cp05

0x479e,	// (0x0001c7de) list_cale_preview_pane_ParamLimits

0x479e,	// (0x0001c7de) list_cale_preview_pane

0xd4bb,	// (0x000254fb) list_double_cale_preview_pane_ParamLimits

0xd4bb,	// (0x000254fb) list_double_cale_preview_pane

0xd4cf,	// (0x0002550f) list_single_cale_preview_pane_ParamLimits

0xd4cf,	// (0x0002550f) list_single_cale_preview_pane

0xd4e7,	// (0x00025527) list_single_cale_preview_pane_g1

0xd4ef,	// (0x0002552f) list_single_cale_preview_pane_t1_ParamLimits

0xd4ef,	// (0x0002552f) list_single_cale_preview_pane_t1

0xd504,	// (0x00025544) list_double_cale_preview_pane_g1

0xd50c,	// (0x0002554c) list_double_cale_preview_pane_t1_ParamLimits

0xd50c,	// (0x0002554c) list_double_cale_preview_pane_t1

0xd521,	// (0x00025561) list_double_cale_preview_pane_t2_ParamLimits

0xd521,	// (0x00025561) list_double_cale_preview_pane_t2

0x0001,

0xfd06,	// (0x00027d46) list_double_cale_preview_pane_t_ParamLimits

0xfd06,	// (0x00027d46) list_double_cale_preview_pane_t

0xe7c9,	// (0x00026809) main_ezdial_pane

0xe82a,	// (0x0002686a) main_sp_fs_email_pane_ParamLimits

0xce0a,	// (0x00024e4a) cmail_ddmenu_btn01_pane_ParamLimits

0xce0a,	// (0x00024e4a) cmail_ddmenu_btn01_pane

0xce27,	// (0x00024e67) cmail_ddmenu_btn02_pane_ParamLimits

0xce27,	// (0x00024e67) cmail_ddmenu_btn02_pane

0xce45,	// (0x00024e85) cmail_ddmenu_btn03_pane_ParamLimits

0xce45,	// (0x00024e85) cmail_ddmenu_btn03_pane

0xcee6,	// (0x00024f26) main_sp_fs_ctrlbar_pane_ParamLimits

0xcf00,	// (0x00024f40) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd1c4,	// (0x00025204) list_cmail_body_pane_ParamLimits

0x438f,	// (0x0001c3cf) bg_button_pane_cp12

0x43a4,	// (0x0001c3e4) list_single_cmail_header_detail_pane_g3_ParamLimits

0x43a4,	// (0x0001c3e4) list_single_cmail_header_detail_pane_g3

0x43ed,	// (0x0001c42d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x43ed,	// (0x0001c42d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc89,	// (0x00027cc9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc89,	// (0x00027cc9) list_single_cmail_header_detail_pane_t

0x44fa,	// (0x0001c53a) phacti_term_pane_t2_ParamLimits

0x44fa,	// (0x0001c53a) phacti_term_pane_t2

0x0001,

0xfc93,	// (0x00027cd3) phacti_term_pane_t_ParamLimits

0xfc93,	// (0x00027cd3) phacti_term_pane_t

0x47aa,	// (0x0001c7ea) aid_size_list_single_double

0xd539,	// (0x00025579) popup_ezdial_listscroll_window

0xd55b,	// (0x0002559b) popup_number_entry_window_cp01

0x00dc,	// (0x0001811c) bg_popup_call_pane_cp09

0x47b6,	// (0x0001c7f6) ezdial_list_pane

0x47be,	// (0x0001c7fe) scroll_pane_cp23

0x2079,	// (0x0001a0b9) bg_button_pane_cp028_ParamLimits

0x2079,	// (0x0001a0b9) bg_button_pane_cp028

0xd569,	// (0x000255a9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd569,	// (0x000255a9) cmail_ddmenu_btn01_pane_g1

0xd57b,	// (0x000255bb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd57b,	// (0x000255bb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd0b,	// (0x00027d4b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd0b,	// (0x00027d4b) cmail_ddmenu_btn01_pane_g

0x47c6,	// (0x0001c806) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x47c6,	// (0x0001c806) cmail_ddmenu_btn01_pane_t1

0x0bf7,	// (0x00018c37) bg_button_pane_cp029_ParamLimits

0x0bf7,	// (0x00018c37) bg_button_pane_cp029

0xd587,	// (0x000255c7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd587,	// (0x000255c7) cmail_ddmenu_btn02_pane_g1

0xd59f,	// (0x000255df) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd59f,	// (0x000255df) cmail_ddmenu_btn02_pane_t1

0xeef1,	// (0x00026f31) bg_button_pane_cp031_ParamLimits

0xeef1,	// (0x00026f31) bg_button_pane_cp031

0xd587,	// (0x000255c7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd587,	// (0x000255c7) cmail_ddmenu_btn03_pane_g1

0xd59f,	// (0x000255df) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd59f,	// (0x000255df) cmail_ddmenu_btn03_pane_t1

0xb0cd,	// (0x0002310d) cell_dialer2_keypad_pane_t1_ParamLimits

0xb0e7,	// (0x00023127) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb0e7,	// (0x00023127) cell_dialer2_keypad_pane_t1_copy1

0xc558,	// (0x00024598) ncimui_group_button_pane

0xe82a,	// (0x0002686a) main_sp_fs_calendar_pane_ParamLimits

0xd1de,	// (0x0002521e) list_single_cmail_header_caption_pane_ParamLimits

0x4545,	// (0x0001c585) aid_recal_txt_sm_pane

0xe7c9,	// (0x00026809) mian_recal_day_pane

0x4587,	// (0x0001c5c7) popup_sp_fs_cale_preview_window_ParamLimits

0x47dc,	// (0x0001c81c) list_recal_day_pane

0x481f,	// (0x0001c85f) list_single_recal_day_pane_ParamLimits

0x481f,	// (0x0001c85f) list_single_recal_day_pane

0x4831,	// (0x0001c871) list_single_recal_day_pane_g1_ParamLimits

0x4831,	// (0x0001c871) list_single_recal_day_pane_g1

0x483d,	// (0x0001c87d) list_single_recal_day_pane_g2_ParamLimits

0x483d,	// (0x0001c87d) list_single_recal_day_pane_g2

0x4849,	// (0x0001c889) list_single_recal_day_pane_g3_ParamLimits

0x4849,	// (0x0001c889) list_single_recal_day_pane_g3

0xd5c3,	// (0x00025603) list_single_recal_day_pane_g4_ParamLimits

0xd5c3,	// (0x00025603) list_single_recal_day_pane_g4

0x4855,	// (0x0001c895) list_single_recal_day_pane_g5_ParamLimits

0x4855,	// (0x0001c895) list_single_recal_day_pane_g5

0x4861,	// (0x0001c8a1) list_single_recal_day_pane_g6_ParamLimits

0x4861,	// (0x0001c8a1) list_single_recal_day_pane_g6

0x0004,

0xfd1a,	// (0x00027d5a) list_single_recal_day_pane_g_ParamLimits

0xfd1a,	// (0x00027d5a) list_single_recal_day_pane_g

0x4875,	// (0x0001c8b5) list_single_recal_day_pane_t1

0x4887,	// (0x0001c8c7) list_single_recal_day_pane_t2

0x0001,

0xfd25,	// (0x00027d65) list_single_recal_day_pane_t

0xd5db,	// (0x0002561b) ncimui_query_button_pane_ParamLimits

0xd5db,	// (0x0002561b) ncimui_query_button_pane

0xd5eb,	// (0x0002562b) ncimui_query_button_pane_t1_ParamLimits

0xd5eb,	// (0x0002562b) ncimui_query_button_pane_t1

0x4899,	// (0x0001c8d9) ncimui_query_button_pane_t2_ParamLimits

0x4899,	// (0x0001c8d9) ncimui_query_button_pane_t2

0x0001,

0xfd2a,	// (0x00027d6a) ncimui_query_button_pane_t_ParamLimits

0xfd2a,	// (0x00027d6a) ncimui_query_button_pane_t

0xd5fe,	// (0x0002563e) query_button_pane_ParamLimits

0xd5fe,	// (0x0002563e) query_button_pane

0xe7c9,	// (0x00026809) bg_button_pane_cp0028

0x48ac,	// (0x0001c8ec) query_button_pane_t1

0x6715,	// (0x0001e755) main_tport_pane_ParamLimits

0xd0c1,	// (0x00025101) bg_popup_window_pane_cp01_ParamLimits

0xd0c1,	// (0x00025101) bg_popup_window_pane_cp01

0xd0cf,	// (0x0002510f) heading_pane_cp08_ParamLimits

0xd0cf,	// (0x0002510f) heading_pane_cp08

0xd0dd,	// (0x0002511d) heading_pane_cp07_ParamLimits

0xd0dd,	// (0x0002511d) heading_pane_cp07

0xd14d,	// (0x0002518d) cell_tport_appsw_pane_g2

0x0002,

0xfc76,	// (0x00027cb6) cell_tport_appsw_pane_g

0x0c94,	// (0x00018cd4) input_candi_list_open_g1

0x0560,	// (0x000185a0) list_cale_time_pane_g6_ParamLimits

0x0560,	// (0x000185a0) list_cale_time_pane_g6

0xa48d,	// (0x000224cd) aid_size_touch_calib_1_ParamLimits

0xa48d,	// (0x000224cd) aid_size_touch_calib_1

0xa499,	// (0x000224d9) aid_size_touch_calib_2_ParamLimits

0xa499,	// (0x000224d9) aid_size_touch_calib_2

0xa4a7,	// (0x000224e7) aid_size_touch_calib_3_ParamLimits

0xa4a7,	// (0x000224e7) aid_size_touch_calib_3

0xa4b7,	// (0x000224f7) aid_size_touch_calib_4_ParamLimits

0xa4b7,	// (0x000224f7) aid_size_touch_calib_4

0xa4c5,	// (0x00022505) main_touch_calib_button_group_pane_ParamLimits

0xa4c5,	// (0x00022505) main_touch_calib_button_group_pane

0xa4d3,	// (0x00022513) main_touch_calib_pane_g1_ParamLimits

0xa4df,	// (0x0002251f) main_touch_calib_pane_g2_ParamLimits

0xa4eb,	// (0x0002252b) main_touch_calib_pane_g3_ParamLimits

0xa4f7,	// (0x00022537) main_touch_calib_pane_g4_ParamLimits

0xf6bf,	// (0x000276ff) main_touch_calib_pane_g_ParamLimits

0xa503,	// (0x00022543) main_touch_calib_pane_t1_ParamLimits

0xa51a,	// (0x0002255a) main_touch_calib_pane_t2_ParamLimits

0xa533,	// (0x00022573) main_touch_calib_pane_t3_ParamLimits

0xa549,	// (0x00022589) main_touch_calib_pane_t4_ParamLimits

0xa55f,	// (0x0002259f) main_touch_calib_pane_t5_ParamLimits

0xf6c8,	// (0x00027708) main_touch_calib_pane_t_ParamLimits

0x26ed,	// (0x0001a72d) list_single_fp_cale_pane_g3_ParamLimits

0x26ed,	// (0x0001a72d) list_single_fp_cale_pane_g3

0x66f9,	// (0x0001e739) bg_button_pane_cp012_ParamLimits

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp03_ParamLimits

0x7572,	// (0x0001f5b2) cell_vitu2_function_top_pane_g1_ParamLimits

0x66f9,	// (0x0001e739) bg_vkb2_func_pane_cp04_ParamLimits

0xc4de,	// (0x0002451e) main_ncimui_button_group_pane_ParamLimits

0xc4de,	// (0x0002451e) main_ncimui_button_group_pane

0xc546,	// (0x00024586) main_ncimui_pane_t3_ParamLimits

0xc546,	// (0x00024586) main_ncimui_pane_t3

0x44a8,	// (0x0001c4e8) phacti_button_group_pane

0x47aa,	// (0x0001c7ea) aid_size_list_single_double_ParamLimits

0xd539,	// (0x00025579) popup_ezdial_listscroll_window_ParamLimits

0xd55b,	// (0x0002559b) popup_number_entry_window_cp01_ParamLimits

0xd60b,	// (0x0002564b) phacti_button_pane_ParamLimits

0xd60b,	// (0x0002564b) phacti_button_pane

0xe7c9,	// (0x00026809) bg_button_pane_cp14

0x48ba,	// (0x0001c8fa) phacti_button_pane_t1

0xd61c,	// (0x0002565c) main_touch_calib_button_pane_ParamLimits

0xd61c,	// (0x0002565c) main_touch_calib_button_pane

0xef71,	// (0x00026fb1) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x00026fb1) bg_button_pane_cp18

0x48c8,	// (0x0001c908) main_touch_calib_button_pane_t1_ParamLimits

0x48c8,	// (0x0001c908) main_touch_calib_button_pane_t1

0x48de,	// (0x0001c91e) main_touch_calib_button_pane_t2_ParamLimits

0x48de,	// (0x0001c91e) main_touch_calib_button_pane_t2

0x0001,

0xfd2f,	// (0x00027d6f) main_touch_calib_button_pane_t_ParamLimits

0xfd2f,	// (0x00027d6f) main_touch_calib_button_pane_t

0xe7c9,	// (0x00026809) cell_ncimui_button_pane

0xe7c9,	// (0x00026809) bg_button_pane_cp032

0x48fc,	// (0x0001c93c) cell_ncimui_button_pane_t1

0x6dbe,	// (0x0001edfe) image3_infobar_pane_ParamLimits

0x6dbe,	// (0x0001edfe) image3_infobar_pane

0xc917,	// (0x00024957) fs_bigclock_status_pane_ParamLimits

0xc917,	// (0x00024957) fs_bigclock_status_pane

0xc924,	// (0x00024964) main_fs_bigclock_clock_pane_ParamLimits

0xc924,	// (0x00024964) main_fs_bigclock_clock_pane

0xc940,	// (0x00024980) main_fs_bigclock_indi_pane_ParamLimits

0xc940,	// (0x00024980) main_fs_bigclock_indi_pane

0xc96e,	// (0x000249ae) main_fs_bigclock_swipe_pane_ParamLimits

0xc96e,	// (0x000249ae) main_fs_bigclock_swipe_pane

0xe7c9,	// (0x00026809) main_fs_clock_dumped_data

0xc9a8,	// (0x000249e8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc9a8,	// (0x000249e8) list_single_fs_bigclock_indicator_pane_g1

0xc9c7,	// (0x00024a07) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc9c7,	// (0x00024a07) list_single_fs_bigclock_indicator_pane_g2

0xc9e1,	// (0x00024a21) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc9e1,	// (0x00024a21) list_single_fs_bigclock_indicator_pane_g3

0xc9fd,	// (0x00024a3d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc9fd,	// (0x00024a3d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd0,	// (0x00027c10) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd0,	// (0x00027c10) list_single_fs_bigclock_indicator_pane_g

0xca2c,	// (0x00024a6c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xca2c,	// (0x00024a6c) list_single_fs_bigclock_indicator_pane_t1

0xca54,	// (0x00024a94) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xca54,	// (0x00024a94) list_single_fs_bigclock_indicator_pane_t2

0xca7c,	// (0x00024abc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xca7c,	// (0x00024abc) list_single_fs_bigclock_indicator_pane_t3

0xcaa4,	// (0x00024ae4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xcaa4,	// (0x00024ae4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbdb,	// (0x00027c1b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbdb,	// (0x00027c1b) list_single_fs_bigclock_indicator_pane_t

0x490a,	// (0x0001c94a) image3_infobar_fav_pane_ParamLimits

0x490a,	// (0x0001c94a) image3_infobar_fav_pane

0x491a,	// (0x0001c95a) image3_infobar_loc_pane_ParamLimits

0x491a,	// (0x0001c95a) image3_infobar_loc_pane

0x4930,	// (0x0001c970) image3_infobar_time_pane_ParamLimits

0x4930,	// (0x0001c970) image3_infobar_time_pane

0x0131,	// (0x00018171) image3_infobar_time_pane_g1

0x4940,	// (0x0001c980) image3_infobar_time_pane_t1

0x0131,	// (0x00018171) image3_infobar_loc_pane_g1

0x494e,	// (0x0001c98e) image3_infobar_loc_pane_g2

0x0001,

0xfd34,	// (0x00027d74) image3_infobar_loc_pane_g

0x4956,	// (0x0001c996) image3_infobar_loc_pane_t1

0x0131,	// (0x00018171) image3_infobar_fav_pane_g1

0x4964,	// (0x0001c9a4) image3_infobar_fav_pane_g2

0x0001,

0xfd39,	// (0x00027d79) image3_infobar_fav_pane_g

0x496c,	// (0x0001c9ac) fs_bigclock_status_battery_pane

0x4975,	// (0x0001c9b5) fs_bigclock_status_signal_pane

0x497e,	// (0x0001c9be) fs_bigclock_status_title_pane

0x4987,	// (0x0001c9c7) fs_bigclock_status_signal_pane_g1

0x4990,	// (0x0001c9d0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd3e,	// (0x00027d7e) fs_bigclock_status_signal_pane_g

0x4998,	// (0x0001c9d8) fs_bigclock_status_battery_pane_g1

0x49a1,	// (0x0001c9e1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd43,	// (0x00027d83) fs_bigclock_status_battery_pane_g

0x49a9,	// (0x0001c9e9) fs_bigclock_status_title_pane_t1

0xd62c,	// (0x0002566c) main_fs_bigclock_clock_pane_g1

0xd62c,	// (0x0002566c) main_fs_bigclock_clock_pane_g2

0xd63b,	// (0x0002567b) main_fs_bigclock_clock_pane_g3

0xd63b,	// (0x0002567b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd48,	// (0x00027d88) main_fs_bigclock_clock_pane_g

0xd64b,	// (0x0002568b) main_fs_bigclock_clock_pane_t1

0xd660,	// (0x000256a0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd51,	// (0x00027d91) main_fs_bigclock_clock_pane_t

0x49b7,	// (0x0001c9f7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x49b7,	// (0x0001c9f7) list_single_fs_bigclock_indicator_pane

0x49c8,	// (0x0001ca08) list_single_fs_bigclock_pane_ParamLimits

0x49c8,	// (0x0001ca08) list_single_fs_bigclock_pane

0x49ee,	// (0x0001ca2e) main_fs_bigclock_indicator_pane_t1

0x49fd,	// (0x0001ca3d) list_single_fs_bigclock_pane_g1

0x4a05,	// (0x0001ca45) list_single_fs_bigclock_pane_t1

0x0131,	// (0x00018171) main_fs_bigclock_swipe_pane_g1

0x4a8d,	// (0x0001cacd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd62,	// (0x00027da2) main_fs_bigclock_swipe_pane_g

0x4a95,	// (0x0001cad5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4a95,	// (0x0001cad5) main_fs_bigclock_swipe_pane_t1

0x9341,	// (0x00021381) call_type_pane_ParamLimits

0xe7c9,	// (0x00026809) main_btmg_pane

0x4684,	// (0x0001c6c4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4684,	// (0x0001c6c4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcd5,	// (0x00027d15) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcd5,	// (0x00027d15) list_single_cale_mrui_row_pane_g

0x4805,	// (0x0001c845) list_recal_vselct_arw_lo_pane

0x480d,	// (0x0001c84d) list_recal_vselct_arw_up_pane

0x4815,	// (0x0001c855) list_recal_vselct_pane

0xd6b7,	// (0x000256f7) btmg_button_pane

0xd6c3,	// (0x00025703) main_btmg_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp044

0x4ab2,	// (0x0001caf2) btmg_button_pane_t1

0x1ecb,	// (0x00019f0b) aid_listscroll_gen

0xe82a,	// (0x0002686a) main_cntbar_detail_pane

0x433f,	// (0x0001c37f) list_cmail_folder_pane

0x31f6,	// (0x0001b236) sp_fs_scroll_pane_cp03_ParamLimits

0x4ac0,	// (0x0001cb00) list_single_fs_dyc_pane_cp01_ParamLimits

0x4ac0,	// (0x0001cb00) list_single_fs_dyc_pane_cp01

0x4add,	// (0x0001cb1d) aid_size_cmail_indent

0x4ae6,	// (0x0001cb26) list_single_dyc_row_pane_cp01

0xd6eb,	// (0x0002572b) cntbar_detail_list_pane_ParamLimits

0xd6eb,	// (0x0002572b) cntbar_detail_list_pane

0xd72b,	// (0x0002576b) main_cntbar_detail_cont_pane_ParamLimits

0xd72b,	// (0x0002576b) main_cntbar_detail_cont_pane

0x9335,	// (0x00021375) scroll_pane_cp032_ParamLimits

0x9335,	// (0x00021375) scroll_pane_cp032

0xd737,	// (0x00025777) cntbar_detail_list_event_pane_ParamLimits

0xd737,	// (0x00025777) cntbar_detail_list_event_pane

0xd6f9,	// (0x00025739) cntbar_detail_list_shct_pane

0x0394,	// (0x000183d4) aid_list_gen

0x4aef,	// (0x0001cb2f) aid_scroll

0x4af8,	// (0x0001cb38) aid_size_touch_scroll_bar

0xd747,	// (0x00025787) aid_list_double

0xd750,	// (0x00025790) aid_list_single

0xd750,	// (0x00025790) aid_list_single_lg

0xd759,	// (0x00025799) aid_list_z_g_a_sm

0xd761,	// (0x000257a1) aid_list_z_g_d

0xd769,	// (0x000257a9) aid_txt_z_prm

0xd777,	// (0x000257b7) aid_txt_z_prm_cp01

0xd785,	// (0x000257c5) aid_txt_z_sec

0xd793,	// (0x000257d3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd793,	// (0x000257d3) main_cntbar_detail_cont_pane_g1

0xd7a0,	// (0x000257e0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd7a0,	// (0x000257e0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd67,	// (0x00027da7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd67,	// (0x00027da7) main_cntbar_detail_cont_pane_g

0x4b01,	// (0x0001cb41) main_cntbar_detail_cont_pane_t1

0x4b0f,	// (0x0001cb4f) main_cntbar_detail_cont_pane_t2

0x4b1d,	// (0x0001cb5d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd6c,	// (0x00027dac) main_cntbar_detail_cont_pane_t

0xd7ac,	// (0x000257ec) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd7ac,	// (0x000257ec) cell_cntbar_detail_list_shct_pane

0x4b2b,	// (0x0001cb6b) cntbar_detail_list_shct_pane_g1

0x4b34,	// (0x0001cb74) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd73,	// (0x00027db3) cntbar_detail_list_shct_pane_g

0xd7c0,	// (0x00025800) cntbar_detail_list_event_pane_g1_ParamLimits

0xd7c0,	// (0x00025800) cntbar_detail_list_event_pane_g1

0xd7cc,	// (0x0002580c) cntbar_detail_list_event_pane_g2_ParamLimits

0xd7cc,	// (0x0002580c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd78,	// (0x00027db8) cntbar_detail_list_event_pane_g_ParamLimits

0xfd78,	// (0x00027db8) cntbar_detail_list_event_pane_g

0xd83a,	// (0x0002587a) cntbar_detail_list_event_pane_t1_ParamLimits

0xd83a,	// (0x0002587a) cntbar_detail_list_event_pane_t1

0xd84f,	// (0x0002588f) cntbar_detail_list_event_pane_t2_ParamLimits

0xd84f,	// (0x0002588f) cntbar_detail_list_event_pane_t2

0x0002,

0xfd85,	// (0x00027dc5) cntbar_detail_list_event_pane_t_ParamLimits

0xfd85,	// (0x00027dc5) cntbar_detail_list_event_pane_t

0x0131,	// (0x00018171) cell_cntbar_detail_list_shct_pane_g1

0x966a,	// (0x000216aa) navi_pane_mv_g3

0xe82a,	// (0x0002686a) main_cntbar_detail_pane_ParamLimits

0xe7c9,	// (0x00026809) main_notif_wgt_pane

0x6acd,	// (0x0001eb0d) aid_tch_main_mp4_pane_g4

0x6d36,	// (0x0001ed76) popup_slider_window_cp02

0x47fb,	// (0x0001c83b) list_recal_day_event_pane

0xd6cb,	// (0x0002570b) cntbar_detail_btn_pane_ParamLimits

0xd6cb,	// (0x0002570b) cntbar_detail_btn_pane

0xd6db,	// (0x0002571b) cntbar_detail_btn_pane_cp01_ParamLimits

0xd6db,	// (0x0002571b) cntbar_detail_btn_pane_cp01

0xd6f9,	// (0x00025739) cntbar_detail_list_shct_pane_ParamLimits

0xd705,	// (0x00025745) cntbar_detail_pane_g1_ParamLimits

0xd705,	// (0x00025745) cntbar_detail_pane_g1

0xd715,	// (0x00025755) cntbar_detail_pane_t1_ParamLimits

0xd715,	// (0x00025755) cntbar_detail_pane_t1

0xd7d8,	// (0x00025818) cntbar_detail_list_event_pane_g3_ParamLimits

0xd7d8,	// (0x00025818) cntbar_detail_list_event_pane_g3

0xd7f0,	// (0x00025830) cntbar_detail_list_event_pane_g4_ParamLimits

0xd7f0,	// (0x00025830) cntbar_detail_list_event_pane_g4

0xd808,	// (0x00025848) cntbar_detail_list_event_pane_g5_ParamLimits

0xd808,	// (0x00025848) cntbar_detail_list_event_pane_g5

0xd820,	// (0x00025860) cntbar_detail_list_event_pane_g6_ParamLimits

0xd820,	// (0x00025860) cntbar_detail_list_event_pane_g6

0xd864,	// (0x000258a4) cntbar_detail_list_event_pane_t3_ParamLimits

0xd864,	// (0x000258a4) cntbar_detail_list_event_pane_t3

0xd876,	// (0x000258b6) popup_notif_wgt_window_ParamLimits

0xd876,	// (0x000258b6) popup_notif_wgt_window

0xd886,	// (0x000258c6) popup_submenu_window_cp01_ParamLimits

0xd886,	// (0x000258c6) popup_submenu_window_cp01

0x00dc,	// (0x0001811c) bg_popup_window_pane_cp10

0x4b3d,	// (0x0001cb7d) listscroll_notif_wgt_pane

0x4b4f,	// (0x0001cb8f) list_notif_wgt_window

0x4b58,	// (0x0001cb98) scroll_pane_cp033

0xd896,	// (0x000258d6) list_notif_wgt_row_pane_ParamLimits

0xd896,	// (0x000258d6) list_notif_wgt_row_pane

0x4b61,	// (0x0001cba1) aid_size_list_notif_wgt_del

0x4b6e,	// (0x0001cbae) list_notif_wgt_row_pane_g1

0x4b7a,	// (0x0001cbba) list_notif_wgt_row_pane_g2

0x4b89,	// (0x0001cbc9) list_notif_wgt_row_pane_g3

0x0002,

0xfd8c,	// (0x00027dcc) list_notif_wgt_row_pane_g

0x4b96,	// (0x0001cbd6) list_notif_wgt_row_pane_t1

0x4bac,	// (0x0001cbec) list_notif_wgt_row_pane_t2

0x4bbe,	// (0x0001cbfe) list_notif_wgt_row_pane_t3

0x0002,

0xfd93,	// (0x00027dd3) list_notif_wgt_row_pane_t

0x3377,	// (0x0001b3b7) list_recal_day_event_pane_g1

0x4bd0,	// (0x0001cc10) list_recal_day_event_pane_t1

0xe7c9,	// (0x00026809) bg_button_pane_cp045

0xd8aa,	// (0x000258ea) cntbar_detail_btn_pane_t1

0x0bf7,	// (0x00018c37) main_callh_pane_ParamLimits

0x0bf7,	// (0x00018c37) main_callh_pane

0xe7c9,	// (0x00026809) main_coverflow0_pane

0xe7c9,	// (0x00026809) main_wgtman_pane

0xc986,	// (0x000249c6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc986,	// (0x000249c6) main_fs_bigclock_unlock_btn_pane

0xd145,	// (0x00025185) bg_button_pane_cp16

0xd155,	// (0x00025195) cell_tport_appsw_pane_g3

0xd8b8,	// (0x000258f8) cf0_flow_pane_ParamLimits

0xd8b8,	// (0x000258f8) cf0_flow_pane

0x4bdf,	// (0x0001cc1f) listscroll_cf0_pane

0x4bea,	// (0x0001cc2a) main_cf0_pane_g1

0xd8c7,	// (0x00025907) main_cf0_pane_t1_ParamLimits

0xd8c7,	// (0x00025907) main_cf0_pane_t1

0xd8db,	// (0x0002591b) main_cf0_pane_t2_ParamLimits

0xd8db,	// (0x0002591b) main_cf0_pane_t2

0x0001,

0xfd9f,	// (0x00027ddf) main_cf0_pane_t_ParamLimits

0xfd9f,	// (0x00027ddf) main_cf0_pane_t

0x4bfc,	// (0x0001cc3c) scroll_pane_cp11

0xd8ef,	// (0x0002592f) cf0_flow_pane_g1

0xd8f7,	// (0x00025937) cf0_flow_pane_g2

0x0001,

0xfda4,	// (0x00027de4) cf0_flow_pane_g

0xd8ff,	// (0x0002593f) cf0_flow_pane_t1

0xe7c9,	// (0x00026809) main_call6_pane

0xe7c9,	// (0x00026809) main_calllock_pane

0x77a4,	// (0x0001f7e4) call6_btn_grp_pane_ParamLimits

0x77a4,	// (0x0001f7e4) call6_btn_grp_pane

0x77b1,	// (0x0001f7f1) call6_pane_g1_ParamLimits

0x77b1,	// (0x0001f7f1) call6_pane_g1

0x77c1,	// (0x0001f801) popup_call6_1st_window_ParamLimits

0x77c1,	// (0x0001f801) popup_call6_1st_window

0x77d1,	// (0x0001f811) popup_call6_2nd_window_ParamLimits

0x77d1,	// (0x0001f811) popup_call6_2nd_window

0x77e1,	// (0x0001f821) cell_call6_btn_pane_ParamLimits

0x77e1,	// (0x0001f821) cell_call6_btn_pane

0x00dc,	// (0x0001811c) bg_popup_call2_in_pane_cp03

0x4c07,	// (0x0001cc47) popup_call6_1st_window_g1

0x4c0f,	// (0x0001cc4f) popup_call6_1st_window_g2

0x4c17,	// (0x0001cc57) popup_call6_1st_window_g3

0x0002,

0xfda9,	// (0x00027de9) popup_call6_1st_window_g

0x4c1f,	// (0x0001cc5f) popup_call6_1st_window_t1

0x4c2e,	// (0x0001cc6e) popup_call6_1st_window_t2

0x4c3e,	// (0x0001cc7e) popup_call6_1st_window_t3

0x0002,

0xfdb0,	// (0x00027df0) popup_call6_1st_window_t

0x00dc,	// (0x0001811c) bg_popup_call2_in_pane_cp04

0x4c4e,	// (0x0001cc8e) popup_call6_2nd_window_g1

0x4c56,	// (0x0001cc96) popup_call6_2nd_window_g2

0x4c5e,	// (0x0001cc9e) popup_call6_2nd_window_g3

0x0002,

0xfdb7,	// (0x00027df7) popup_call6_2nd_window_g

0x4c66,	// (0x0001cca6) popup_call6_2nd_window_t1

0x622f,	// (0x0001e26f) bg_button_pane_cp15

0x77f2,	// (0x0001f832) cell_call6_btn_pane_g1

0x77fb,	// (0x0001f83b) cell_call6_btn_pane_t1

0xd90d,	// (0x0002594d) listscroll_wgtman_pane_ParamLimits

0xd90d,	// (0x0002594d) listscroll_wgtman_pane

0xd929,	// (0x00025969) wgtman_btn_pane_ParamLimits

0xd929,	// (0x00025969) wgtman_btn_pane

0x09be,	// (0x000189fe) aid_scroll_copy1

0x4c8d,	// (0x0001cccd) list_wgtman_pane

0xd95e,	// (0x0002599e) wgtman_btn_pane_g1_ParamLimits

0xd95e,	// (0x0002599e) wgtman_btn_pane_g1

0xd986,	// (0x000259c6) wgtman_btn_pane_t1_ParamLimits

0xd986,	// (0x000259c6) wgtman_btn_pane_t1

0x4c97,	// (0x0001ccd7) wgtman_btn_pane_t2_ParamLimits

0x4c97,	// (0x0001ccd7) wgtman_btn_pane_t2

0x0001,

0xfdbe,	// (0x00027dfe) wgtman_btn_pane_t_ParamLimits

0xfdbe,	// (0x00027dfe) wgtman_btn_pane_t

0xd9bd,	// (0x000259fd) listrow_wgtman_pane_ParamLimits

0xd9bd,	// (0x000259fd) listrow_wgtman_pane

0xd9d4,	// (0x00025a14) listrow_wgtman_pane_g1

0xd9e1,	// (0x00025a21) listrow_wgtman_pane_g2

0x0001,

0xfdc3,	// (0x00027e03) listrow_wgtman_pane_g

0xd9ff,	// (0x00025a3f) listrow_wgtman_pane_t1

0xda17,	// (0x00025a57) listrow_wgtman_pane_t2

0x0001,

0xfdc8,	// (0x00027e08) listrow_wgtman_pane_t

0xda3d,	// (0x00025a7d) wait_bar_pane_cp09

0x4cae,	// (0x0001ccee) main_calllock_btn_pane

0x4cb8,	// (0x0001ccf8) main_calllock_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp17

0x4c75,	// (0x0001ccb5) main_calllock_btn_pane_g1

0x4cc4,	// (0x0001cd04) main_calllock_btn_pane_t1

0xe7c9,	// (0x00026809) main_dialer3_pane

0xe7c9,	// (0x00026809) main_fmrd2_pane

0x0131,	// (0x00018171) main_fs_bigclock_unlock_btn_pane_g1

0xda57,	// (0x00025a97) main_fs_bigclock_unlock_btn_pane_t1

0xda65,	// (0x00025aa5) area_fmrd2_info_pane_ParamLimits

0xda65,	// (0x00025aa5) area_fmrd2_info_pane

0xda71,	// (0x00025ab1) area_fmrd2_visual_pane_ParamLimits

0xda71,	// (0x00025ab1) area_fmrd2_visual_pane

0xda7f,	// (0x00025abf) fmrd2_indi_pane_ParamLimits

0xda7f,	// (0x00025abf) fmrd2_indi_pane

0xda8c,	// (0x00025acc) area_fmrd2_visual_pane_g1

0xda94,	// (0x00025ad4) area_fmrd2_visual_pane_t1

0xdaa4,	// (0x00025ae4) area_fmrd2_visual_pane_t2

0xdab4,	// (0x00025af4) area_fmrd2_visual_pane_t3

0x0002,

0xfdd2,	// (0x00027e12) area_fmrd2_visual_pane_t

0xdac4,	// (0x00025b04) area_fmrd2_info_pane_g1

0xdacc,	// (0x00025b0c) area_fmrd2_info_pane_t1

0xdadc,	// (0x00025b1c) area_fmrd2_info_pane_t2

0xdaec,	// (0x00025b2c) area_fmrd2_info_pane_t3

0xdafc,	// (0x00025b3c) area_fmrd2_info_pane_t4

0x0003,

0xfdd9,	// (0x00027e19) area_fmrd2_info_pane_t

0xdb0c,	// (0x00025b4c) fmrd2_indi_pane_t1

0xdb1c,	// (0x00025b5c) fmrd2_indi_pane_t2

0xdb2c,	// (0x00025b6c) fmrd2_indi_pane_t3

0x0002,

0xfde2,	// (0x00027e22) fmrd2_indi_pane_t

0xca0e,	// (0x00024a4e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xca0e,	// (0x00024a4e) list_single_fs_bigclock_indicator_pane_g5

0xcac3,	// (0x00024b03) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xcac3,	// (0x00024b03) list_single_fs_bigclock_indicator_pane_t5

0xd2b0,	// (0x000252f0) aid_cell_bcale_month_pane_ParamLimits

0xd2b0,	// (0x000252f0) aid_cell_bcale_month_pane

0xd2ce,	// (0x0002530e) bcale_month_pane_ParamLimits

0xd2ce,	// (0x0002530e) bcale_month_pane

0xd2ec,	// (0x0002532c) bcale_preview_pane_ParamLimits

0xd2ec,	// (0x0002532c) bcale_preview_pane

0x4a05,	// (0x0001ca45) list_single_fs_bigclock_pane_t1_ParamLimits

0x4a69,	// (0x0001caa9) list_single_fs_bigclock_pane_t2_ParamLimits

0x4a69,	// (0x0001caa9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd5d,	// (0x00027d9d) list_single_fs_bigclock_pane_t_ParamLimits

0xfd5d,	// (0x00027d9d) list_single_fs_bigclock_pane_t

0xda4f,	// (0x00025a8f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdcd,	// (0x00027e0d) main_fs_bigclock_unlock_btn_pane_g

0xdb3c,	// (0x00025b7c) aid_dia3_key_size_ParamLimits

0xdb3c,	// (0x00025b7c) aid_dia3_key_size

0xdb48,	// (0x00025b88) aid_dia3_listrow_size_ParamLimits

0xdb48,	// (0x00025b88) aid_dia3_listrow_size

0xdb58,	// (0x00025b98) dia3_keypad_fun_pane_ParamLimits

0xdb58,	// (0x00025b98) dia3_keypad_fun_pane

0xdb68,	// (0x00025ba8) dia3_keypad_num_pane_ParamLimits

0xdb68,	// (0x00025ba8) dia3_keypad_num_pane

0xdb78,	// (0x00025bb8) dia3_listscroll_pane_ParamLimits

0xdb78,	// (0x00025bb8) dia3_listscroll_pane

0xdb86,	// (0x00025bc6) dia3_numentry_pane_ParamLimits

0xdb86,	// (0x00025bc6) dia3_numentry_pane

0x4cd3,	// (0x0001cd13) dia3_list_pane

0xdb94,	// (0x00025bd4) scroll_pane_cp12

0xe7c9,	// (0x00026809) bg_dia3_numentry_pane

0xdb9f,	// (0x00025bdf) dia3_numentry_pane_t1

0xdbae,	// (0x00025bee) cell_dia3_key_num_pane

0xdbb6,	// (0x00025bf6) cell_dia3_key0_fun_pane_ParamLimits

0xdbb6,	// (0x00025bf6) cell_dia3_key0_fun_pane

0xdbc3,	// (0x00025c03) cell_dia3_key1_fun_pane_ParamLimits

0xdbc3,	// (0x00025c03) cell_dia3_key1_fun_pane

0xdbd0,	// (0x00025c10) dia3_listrow_pane

0x3d5b,	// (0x0001bd9b) bg_dia3_numentry_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp21

0xdbdd,	// (0x00025c1d) cell_dia3_key_num_pane_t1

0xdbeb,	// (0x00025c2b) cell_dia3_key_num_pane_t2

0xdbfa,	// (0x00025c3a) cell_dia3_key_num_pane_t3

0xdc09,	// (0x00025c49) cell_dia3_key_num_pane_t4

0x0003,

0xfde9,	// (0x00027e29) cell_dia3_key_num_pane_t

0xe7c9,	// (0x00026809) bg_button_pane_cp19

0xdc18,	// (0x00025c58) cell_dia3_key0_fun_pane_g1

0xe7c9,	// (0x00026809) bg_button_pane_cp20

0xdc20,	// (0x00025c60) cell_dia3_key1_fun_pane_g1

0xdc28,	// (0x00025c68) area_left_week_number_pane

0xdc3b,	// (0x00025c7b) area_top_day_name_pane

0xdc49,	// (0x00025c89) frame_month_view_pane

0x4cde,	// (0x0001cd1e) grid_month_view_pane

0xdc5e,	// (0x00025c9e) cell_top_day_name_pane_ParamLimits

0xdc5e,	// (0x00025c9e) cell_top_day_name_pane

0xdc7a,	// (0x00025cba) cell_area_left_week_number_pane_ParamLimits

0xdc7a,	// (0x00025cba) cell_area_left_week_number_pane

0xdc9b,	// (0x00025cdb) cell_month_view_pane_ParamLimits

0xdc9b,	// (0x00025cdb) cell_month_view_pane

0x4cec,	// (0x0001cd2c) frm_month_g1

0xdcc7,	// (0x00025d07) frm_month_g2

0xdcd8,	// (0x00025d18) frm_month_g3

0xdce9,	// (0x00025d29) frm_month_g4

0xdcfa,	// (0x00025d3a) frm_month_g5

0xdd0b,	// (0x00025d4b) frm_month_g6

0xdd1e,	// (0x00025d5e) frm_month_g7

0x4cf9,	// (0x0001cd39) frm_month_g8

0xdd31,	// (0x00025d71) frm_month_g9

0xdd3e,	// (0x00025d7e) frm_month_g10

0xdd4b,	// (0x00025d8b) frm_month_g11

0xdd58,	// (0x00025d98) frm_month_g12

0xdd65,	// (0x00025da5) frm_month_g13

0xdd74,	// (0x00025db4) frm_month_g14

0xdd83,	// (0x00025dc3) frm_month_g15

0xdd92,	// (0x00025dd2) frm_month_g16

0x000f,

0xfdf2,	// (0x00027e32) frm_month_g

0x4d06,	// (0x0001cd46) cell_top_day_name_pane_t1

0xdda1,	// (0x00025de1) cell_area_left_week_number_pane_g1

0xddb0,	// (0x00025df0) cell_area_left_week_number_pane_t1

0xeeff,	// (0x00026f3f) cell_month_view_pane_g1

0xddc6,	// (0x00025e06) cell_month_view_pane_t1

0xe7c9,	// (0x00026809) main_fps_pane

0x4159,	// (0x0001c199) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4159,	// (0x0001c199) cmail_ddmenu_btn02_pane_cp1

0x4175,	// (0x0001c1b5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4175,	// (0x0001c1b5) cmail_ddmenu_btn02_pane_cp2

0xd593,	// (0x000255d3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd593,	// (0x000255d3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd10,	// (0x00027d50) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd10,	// (0x00027d50) cmail_ddmenu_btn02_pane_g

0xd5b1,	// (0x000255f1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd5b1,	// (0x000255f1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd15,	// (0x00027d55) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd15,	// (0x00027d55) cmail_ddmenu_btn02_pane_t

0xdddc,	// (0x00025e1c) fps_text_pane_ParamLimits

0xdddc,	// (0x00025e1c) fps_text_pane

0xdde9,	// (0x00025e29) main_fps_pane_g1_ParamLimits

0xdde9,	// (0x00025e29) main_fps_pane_g1

0xddf5,	// (0x00025e35) wait_bar_pane_cp010_ParamLimits

0xddf5,	// (0x00025e35) wait_bar_pane_cp010

0xde01,	// (0x00025e41) fps_text_pane_t1_ParamLimits

0xde01,	// (0x00025e41) fps_text_pane_t1

0xb1dc,	// (0x0002321c) cam4_image_uncrop_pane_g1

0xb1e5,	// (0x00023225) cam4_image_uncrop_pane_g2

0xb1ee,	// (0x0002322e) cam4_image_uncrop_pane_g3

0xb1f7,	// (0x00023237) cam4_image_uncrop_pane_g4

0x0003,

0xf85b,	// (0x0002789b) cam4_image_uncrop_pane_g

0xdbd0,	// (0x00025c10) dia3_listrow_pane_ParamLimits

0xe7c9,	// (0x00026809) main_phob2_pane

0xd127,	// (0x00025167) cell_tport_appsw_pane_cp02_ParamLimits

0xd127,	// (0x00025167) cell_tport_appsw_pane_cp02

0xd136,	// (0x00025176) cell_tport_appsw_pane_cp03_ParamLimits

0xd136,	// (0x00025176) cell_tport_appsw_pane_cp03

0xe7c9,	// (0x00026809) phob2_contact_card_pane

0xe7c9,	// (0x00026809) phob2_listscroll_pane

0x4d19,	// (0x0001cd59) phob2_list_pane

0x4d21,	// (0x0001cd61) scroll_pane_cp034

0xde1a,	// (0x00025e5a) phob2_cc_data_pane_ParamLimits

0xde1a,	// (0x00025e5a) phob2_cc_data_pane

0xde31,	// (0x00025e71) phob2_cc_listscroll_pane_ParamLimits

0xde31,	// (0x00025e71) phob2_cc_listscroll_pane

0xd9bd,	// (0x000259fd) list_double_large_graphic_phob2_pane_ParamLimits

0xd9bd,	// (0x000259fd) list_double_large_graphic_phob2_pane

0xde4d,	// (0x00025e8d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xde4d,	// (0x00025e8d) list_double_large_graphic_phob2_pane_g1

0xde5a,	// (0x00025e9a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xde5a,	// (0x00025e9a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe13,	// (0x00027e53) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe13,	// (0x00027e53) list_double_large_graphic_phob2_pane_g

0xde80,	// (0x00025ec0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xde80,	// (0x00025ec0) list_double_large_graphic_phob2_pane_t1

0xde95,	// (0x00025ed5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xde95,	// (0x00025ed5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe1c,	// (0x00027e5c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe1c,	// (0x00027e5c) list_double_large_graphic_phob2_pane_t

0xe7c9,	// (0x00026809) list_highlight_pane_cp024

0xdeaa,	// (0x00025eea) phob2_cc_button_pane

0xdeb2,	// (0x00025ef2) phob2_cc_data_pane_g1_ParamLimits

0xdeb2,	// (0x00025ef2) phob2_cc_data_pane_g1

0xdec7,	// (0x00025f07) phob2_cc_data_pane_g2_ParamLimits

0xdec7,	// (0x00025f07) phob2_cc_data_pane_g2

0x0001,

0xfe21,	// (0x00027e61) phob2_cc_data_pane_g_ParamLimits

0xfe21,	// (0x00027e61) phob2_cc_data_pane_g

0xded7,	// (0x00025f17) phob2_cc_data_pane_t1_ParamLimits

0xded7,	// (0x00025f17) phob2_cc_data_pane_t1

0xdef0,	// (0x00025f30) phob2_cc_data_pane_t2_ParamLimits

0xdef0,	// (0x00025f30) phob2_cc_data_pane_t2

0xdf09,	// (0x00025f49) phob2_cc_data_pane_t3_ParamLimits

0xdf09,	// (0x00025f49) phob2_cc_data_pane_t3

0x0002,

0xfe26,	// (0x00027e66) phob2_cc_data_pane_t_ParamLimits

0xfe26,	// (0x00027e66) phob2_cc_data_pane_t

0x4d29,	// (0x0001cd69) phob2_cc_list_pane_ParamLimits

0x4d29,	// (0x0001cd69) phob2_cc_list_pane

0x3420,	// (0x0001b460) scroll_pane_cp035_ParamLimits

0x3420,	// (0x0001b460) scroll_pane_cp035

0xe82a,	// (0x0002686a) bg_button_pane_cp033

0x4d35,	// (0x0001cd75) phob2_cc_button_pane_g1

0x4d41,	// (0x0001cd81) phob2_cc_button_pane_t1

0x4d56,	// (0x0001cd96) phob2_cc_button_pane_t2

0x0001,

0xfe2d,	// (0x00027e6d) phob2_cc_button_pane_t

0xdf22,	// (0x00025f62) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdf22,	// (0x00025f62) list_double_large_graphic_phob2_cc_pane

0xdf71,	// (0x00025fb1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdf71,	// (0x00025fb1) list_double_large_graphic_phob2_cc_pane_g1

0xdf82,	// (0x00025fc2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdf82,	// (0x00025fc2) list_double_large_graphic_phob2_cc_pane_g2

0xdf91,	// (0x00025fd1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdf91,	// (0x00025fd1) list_double_large_graphic_phob2_cc_pane_g3

0xdfa0,	// (0x00025fe0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdfa0,	// (0x00025fe0) list_double_large_graphic_phob2_cc_pane_g4

0xdfb1,	// (0x00025ff1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdfb1,	// (0x00025ff1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe32,	// (0x00027e72) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe32,	// (0x00027e72) list_double_large_graphic_phob2_cc_pane_g

0xdfc0,	// (0x00026000) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdfc0,	// (0x00026000) list_double_large_graphic_phob2_cc_pane_t1

0xdfe9,	// (0x00026029) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdfe9,	// (0x00026029) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe3d,	// (0x00027e7d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe3d,	// (0x00027e7d) list_double_large_graphic_phob2_cc_pane_t

0x4d68,	// (0x0001cda8) list_highlight_pane_cp025_ParamLimits

0x4d68,	// (0x0001cda8) list_highlight_pane_cp025

0xe82a,	// (0x0002686a) bg_button_pane_cp033_ParamLimits

0x4d35,	// (0x0001cd75) phob2_cc_button_pane_g1_ParamLimits

0x4d41,	// (0x0001cd81) phob2_cc_button_pane_t1_ParamLimits

0x4d56,	// (0x0001cd96) phob2_cc_button_pane_t2_ParamLimits

0xfe2d,	// (0x00027e6d) phob2_cc_button_pane_t_ParamLimits

0x787d,	// (0x0001f8bd) popup_wgtman_window

0x31c0,	// (0x0001b200) scroll_pane_cp038

0xd946,	// (0x00025986) wgtman_btn_pane_cp_01_ParamLimits

0xd946,	// (0x00025986) wgtman_btn_pane_cp_01

0x4d76,	// (0x0001cdb6) wgtman_content_pane

0x4d7f,	// (0x0001cdbf) wgtman_heading_pane

0xe7c9,	// (0x00026809) bg_heading_pane_cp02

0x4d88,	// (0x0001cdc8) wgtman_heading_pane_g1

0x4d90,	// (0x0001cdd0) wgtman_heading_pane_t1

0x4d9e,	// (0x0001cdde) scroll_pane_cp036

0x4da6,	// (0x0001cde6) wgtman_list_pane

0x4a4f,	// (0x0001ca8f) wgtman_list_pane_t1_ParamLimits

0x4a4f,	// (0x0001ca8f) wgtman_list_pane_t1

0x6feb,	// (0x0001f02b) cam4_grid_pane

0xb955,	// (0x00023995) bg_button_pane_cp015_ParamLimits

0xb96a,	// (0x000239aa) bg_button_pane_cp016_ParamLimits

0xb976,	// (0x000239b6) bg_button_pane_cp017_ParamLimits

0xb9cf,	// (0x00023a0f) popup_vitu2_query_window_g3_ParamLimits

0xb9cf,	// (0x00023a0f) popup_vitu2_query_window_g3

0xba70,	// (0x00023ab0) popup_vitu2_query_window_t6_ParamLimits

0xba70,	// (0x00023ab0) popup_vitu2_query_window_t6

0xba9b,	// (0x00023adb) popup_vitu2_query_window_t7_ParamLimits

0xba9b,	// (0x00023adb) popup_vitu2_query_window_t7

0x4a3b,	// (0x0001ca7b) cam4_grid_pane_g1

0x4a44,	// (0x0001ca84) cam4_grid_pane_g2

0x4dae,	// (0x0001cdee) cam4_grid_pane_g3

0x4db7,	// (0x0001cdf7) cam4_grid_pane_g4

0x0003,

0xfe42,	// (0x00027e82) cam4_grid_pane_g

0x8231,	// (0x00020271) aid_placing_vt_slider_lsc_ParamLimits

0x8564,	// (0x000205a4) vidtel_button_pane_ParamLimits

0x8564,	// (0x000205a4) vidtel_button_pane

0xe7c9,	// (0x00026809) bg_button_pane_cp034

0x4dc2,	// (0x0001ce02) vidtel_button_pane_g1

0x4dca,	// (0x0001ce0a) vidtel_button_pane_t1

0x332b,	// (0x0001b36b) aid_size_vtel_slider_touch

0x3420,	// (0x0001b460) scroll_pane_cp039

0xc6b5,	// (0x000246f5) ncim_query_button_pane_cp01_ParamLimits

0xc6d4,	// (0x00024714) ncimui_query_pane_g1_ParamLimits

0xe82a,	// (0x0002686a) input_focus_pane_cp012_ParamLimits

0x3d99,	// (0x0001bdd9) ncim_query_entry_pane_t1_ParamLimits

0x3420,	// (0x0001b460) scroll_pane_cp039_ParamLimits

0x95dc,	// (0x0002161c) navi_pane_bcale_mc_g1

0x95e4,	// (0x00021624) navi_pane_bcale_mc_t1

0x41ab,	// (0x0001c1eb) main_sp_fs_email_pane_g1

0x41b7,	// (0x0001c1f7) main_sp_fs_email_pane_g2

0x0001,

0xfc45,	// (0x00027c85) main_sp_fs_email_pane_g

0x4690,	// (0x0001c6d0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4690,	// (0x0001c6d0) list_single_cale_mrui_row_pane_g3

0xd5d1,	// (0x00025611) list_single_recal_day_pane_g5_event_pane

0x486d,	// (0x0001c8ad) list_single_recal_day_pane_g7

0x4de0,	// (0x0001ce20) list_recal_day_event_pane_cp01

0x4de9,	// (0x0001ce29) list_recal_vselct_arw_lo_pane_cp01

0x4df1,	// (0x0001ce31) list_recal_vselct_arw_up_pane_cp01

0x4df9,	// (0x0001ce39) list_recal_vselct_pane_cp01

0x3377,	// (0x0001b3b7) list_recal_day_event_pane_cp01_g1

0x4e03,	// (0x0001ce43) list_recal_day_event_pane_cp01_t1

0x4875,	// (0x0001c8b5) list_single_recal_day_pane_t1_ParamLimits

0x4887,	// (0x0001c8c7) list_single_recal_day_pane_t2_ParamLimits

0xfd25,	// (0x00027d65) list_single_recal_day_pane_t_ParamLimits

0xee84,	// (0x00026ec4) bg_notes_pane_ParamLimits

0xef4f,	// (0x00026f8f) list_notes_pane_ParamLimits

0x798d,	// (0x0001f9cd) scroll_pane_cp06_ParamLimits

0xef71,	// (0x00026fb1) main_notes_pane_ParamLimits

0xe82a,	// (0x0002686a) main_welc_pane

0xe033,	// (0x00026073) main_welc_body_pane_ParamLimits

0xe033,	// (0x00026073) main_welc_body_pane

0xe04e,	// (0x0002608e) main_welc_opti_pane_ParamLimits

0xe04e,	// (0x0002608e) main_welc_opti_pane

0xe0b3,	// (0x000260f3) main_welc_pane_t1_ParamLimits

0xe0b3,	// (0x000260f3) main_welc_pane_t1

0xe247,	// (0x00026287) main_welc_body_row_pane_ParamLimits

0xe247,	// (0x00026287) main_welc_body_row_pane

0xeef1,	// (0x00026f31) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x00026f31) main_welc_opti_row_pane

0x4e21,	// (0x0001ce61) main_welc_opti_row_pane_g1

0xe261,	// (0x000262a1) main_welc_opti_row_pane_t1

0x4e29,	// (0x0001ce69) main_welc_body_row_pane_t1

0x4b47,	// (0x0001cb87) popup_notif_wgt_heading_pane

0x4b61,	// (0x0001cba1) aid_size_list_notif_wgt_del_ParamLimits

0x4b6e,	// (0x0001cbae) list_notif_wgt_row_pane_g1_ParamLimits

0x4b7a,	// (0x0001cbba) list_notif_wgt_row_pane_g2_ParamLimits

0x4b89,	// (0x0001cbc9) list_notif_wgt_row_pane_g3_ParamLimits

0xfd8c,	// (0x00027dcc) list_notif_wgt_row_pane_g_ParamLimits

0x4b96,	// (0x0001cbd6) list_notif_wgt_row_pane_t1_ParamLimits

0x4bac,	// (0x0001cbec) list_notif_wgt_row_pane_t2_ParamLimits

0x4bbe,	// (0x0001cbfe) list_notif_wgt_row_pane_t3_ParamLimits

0xfd93,	// (0x00027dd3) list_notif_wgt_row_pane_t_ParamLimits

0xd9d4,	// (0x00025a14) listrow_wgtman_pane_g1_ParamLimits

0xd9e1,	// (0x00025a21) listrow_wgtman_pane_g2_ParamLimits

0xfdc3,	// (0x00027e03) listrow_wgtman_pane_g_ParamLimits

0xd9ff,	// (0x00025a3f) listrow_wgtman_pane_t1_ParamLimits

0xda17,	// (0x00025a57) listrow_wgtman_pane_t2_ParamLimits

0xfdc8,	// (0x00027e08) listrow_wgtman_pane_t_ParamLimits

0xda3d,	// (0x00025a7d) wait_bar_pane_cp09_ParamLimits

0xe7c9,	// (0x00026809) bg_popup_heading_pane_cp02

0x4e38,	// (0x0001ce78) popup_notif_wgt_heading_pane_g1

0x4e40,	// (0x0001ce80) popup_notif_wgt_heading_pane_t1

0xe7c9,	// (0x00026809) main_vids_pane

0xe7c9,	// (0x00026809) vids_listscroll_pane

0xe270,	// (0x000262b0) scroll_pane_cp040

0xe7c9,	// (0x00026809) vids_list_pane

0xe27b,	// (0x000262bb) vids_list_double_pane_ParamLimits

0xe27b,	// (0x000262bb) vids_list_double_pane

0xe28f,	// (0x000262cf) vids_list_double_pane_g1

0xe298,	// (0x000262d8) vids_list_double_pane_t1

0xe2a8,	// (0x000262e8) vids_list_double_pane_t2

0x0001,

0xfe61,	// (0x00027ea1) vids_list_double_pane_t

0x66f9,	// (0x0001e739) main_ncimui_pane_ParamLimits

0xc4f6,	// (0x00024536) main_ncimui_pane_g1_ParamLimits

0xc504,	// (0x00024544) main_ncimui_pane_g2_ParamLimits

0xc504,	// (0x00024544) main_ncimui_pane_g2

0x0001,

0xfb46,	// (0x00027b86) main_ncimui_pane_g_ParamLimits

0xfb46,	// (0x00027b86) main_ncimui_pane_g

0xe069,	// (0x000260a9) main_welc_pane_g1_ParamLimits

0xe069,	// (0x000260a9) main_welc_pane_g1

0xe075,	// (0x000260b5) main_welc_pane_g2_ParamLimits

0xe075,	// (0x000260b5) main_welc_pane_g2

0x0003,

0xfe4b,	// (0x00027e8b) main_welc_pane_g_ParamLimits

0xfe4b,	// (0x00027e8b) main_welc_pane_g

0x796f,	// (0x0001f9af) listscroll_mce_pane_ParamLimits

0x96a6,	// (0x000216e6) wait_bar_pane_cp10

0x1ed3,	// (0x00019f13) main_cale_day_pane_ParamLimits

0x1ed3,	// (0x00019f13) main_cale_week_pane_ParamLimits

0xee84,	// (0x00026ec4) main_messa_pane_ParamLimits

0xacd0,	// (0x00022d10) main_clock2_btn_pane_ParamLimits

0xacd0,	// (0x00022d10) main_clock2_btn_pane

0x2767,	// (0x0001a7a7) main_clock2_btn_pane_cp01_ParamLimits

0x2767,	// (0x0001a7a7) main_clock2_btn_pane_cp01

0x461c,	// (0x0001c65c) list_cale_mrui_pane_ParamLimits

0x4bf4,	// (0x0001cc34) main_cf0_pane_g2

0x0001,

0xfd9a,	// (0x00027dda) main_cf0_pane_g

0xdc28,	// (0x00025c68) area_left_week_number_pane_ParamLimits

0xdc3b,	// (0x00025c7b) area_top_day_name_pane_ParamLimits

0xdc49,	// (0x00025c89) frame_month_view_pane_ParamLimits

0x4cde,	// (0x0001cd1e) grid_month_view_pane_ParamLimits

0x4cec,	// (0x0001cd2c) frm_month_g1_ParamLimits

0xdcc7,	// (0x00025d07) frm_month_g2_ParamLimits

0xdcd8,	// (0x00025d18) frm_month_g3_ParamLimits

0xdce9,	// (0x00025d29) frm_month_g4_ParamLimits

0xdcfa,	// (0x00025d3a) frm_month_g5_ParamLimits

0xdd0b,	// (0x00025d4b) frm_month_g6_ParamLimits

0xdd1e,	// (0x00025d5e) frm_month_g7_ParamLimits

0x4cf9,	// (0x0001cd39) frm_month_g8_ParamLimits

0xdd31,	// (0x00025d71) frm_month_g9_ParamLimits

0xdd3e,	// (0x00025d7e) frm_month_g10_ParamLimits

0xdd4b,	// (0x00025d8b) frm_month_g11_ParamLimits

0xdd58,	// (0x00025d98) frm_month_g12_ParamLimits

0xdd65,	// (0x00025da5) frm_month_g13_ParamLimits

0xdd74,	// (0x00025db4) frm_month_g14_ParamLimits

0xdd83,	// (0x00025dc3) frm_month_g15_ParamLimits

0xdd92,	// (0x00025dd2) frm_month_g16_ParamLimits

0xfdf2,	// (0x00027e32) frm_month_g_ParamLimits

0x4d06,	// (0x0001cd46) cell_top_day_name_pane_t1_ParamLimits

0xdda1,	// (0x00025de1) cell_area_left_week_number_pane_g1_ParamLimits

0xddb0,	// (0x00025df0) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x00026f3f) cell_month_view_pane_g1_ParamLimits

0xddc6,	// (0x00025e06) cell_month_view_pane_t1_ParamLimits

0xee7c,	// (0x00026ebc) main_clock2_btn_pane_g1

0x4e4e,	// (0x0001ce8e) main_clock2_btn_pane_t1

0xe82a,	// (0x0002686a) listscroll_cmail_pane_ParamLimits

0x41ab,	// (0x0001c1eb) main_sp_fs_email_pane_g1_ParamLimits

0x41b7,	// (0x0001c1f7) main_sp_fs_email_pane_g2_ParamLimits

0xfc45,	// (0x00027c85) main_sp_fs_email_pane_g_ParamLimits

0x47dc,	// (0x0001c81c) list_recal_day_pane_ParamLimits

0x47ed,	// (0x0001c82d) mian_recal_day_pane_t1

0xd00c,	// (0x0002504c) list_single_dyc_row_text_pane_t4_ParamLimits

0xd00c,	// (0x0002504c) list_single_dyc_row_text_pane_t4

0xd04b,	// (0x0002508b) list_single_dyc_row_text_pane_t5_ParamLimits

0xd04b,	// (0x0002508b) list_single_dyc_row_text_pane_t5

0x4261,	// (0x0001c2a1) list_single_dyc_row_text_pane_t6_ParamLimits

0x4261,	// (0x0001c2a1) list_single_dyc_row_text_pane_t6

0x9272,	// (0x000212b2) aid_mgn_list_cale_time_pane

0x66f9,	// (0x0001e739) main_gallery2_pane_ParamLimits

0x277b,	// (0x0001a7bb) main_clock2_pane_cp01_t1

0x2789,	// (0x0001a7c9) main_clock2_pane_cp01_t3

0x0001,

0xf732,	// (0x00027772) main_clock2_pane_cp01_t

0x7d68,	// (0x0001fda8) cale_week_scroll_pane_g16_ParamLimits

0x7d68,	// (0x0001fda8) cale_week_scroll_pane_g16

0x00dc,	// (0x0001811c) vorec_slider_pane

0x4dca,	// (0x0001ce0a) vidtel_button_pane_t1_ParamLimits

0xd62c,	// (0x0002566c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd62c,	// (0x0002566c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd63b,	// (0x0002567b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd63b,	// (0x0002567b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd48,	// (0x00027d88) main_fs_bigclock_clock_pane_g_ParamLimits

0xd64b,	// (0x0002568b) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd660,	// (0x000256a0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd51,	// (0x00027d91) main_fs_bigclock_clock_pane_t_ParamLimits

0xa618,	// (0x00022658) main_mup3_lyrics_pane_ParamLimits

0xa618,	// (0x00022658) main_mup3_lyrics_pane

0xe2b8,	// (0x000262f8) main_mup3_lyrics_pane_t1_ParamLimits

0xe2b8,	// (0x000262f8) main_mup3_lyrics_pane_t1

0x6ab7,	// (0x0001eaf7) aid_main_mp4_pane_t1_area

0x6ac1,	// (0x0001eb01) aid_main_mp4_pane_t2_area

0x6bce,	// (0x0001ec0e) main_mp4_pane_g7_ParamLimits

0x6bce,	// (0x0001ec0e) main_mp4_pane_g7

0x6bda,	// (0x0001ec1a) main_mp4_pane_g8_ParamLimits

0x6bda,	// (0x0001ec1a) main_mp4_pane_g8

0xb122,	// (0x00023162) aid_call6_pane_g1_size

0xdf50,	// (0x00025f90) list_double_large_graphic_phob2_other_pane_ParamLimits

0xdf50,	// (0x00025f90) list_double_large_graphic_phob2_other_pane

0xe2df,	// (0x0002631f) list_double_large_graphic_phob2_other_pane_g1

0xe7c9,	// (0x00026809) list_highlight_pane_cp026

0xe82a,	// (0x0002686a) main_welc_pane_ParamLimits

0xce75,	// (0x00024eb5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xce75,	// (0x00024eb5) main_sp_fs_ctrlbar_pane_g3

0xce8f,	// (0x00024ecf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xce8f,	// (0x00024ecf) main_sp_fs_ctrlbar_pane_g4

0xcec1,	// (0x00024f01) toolbar2_fixed_button_pane_cp01

0xcecc,	// (0x00024f0c) toolbar2_fixed_button_pane_cp02

0xced9,	// (0x00024f19) toolbar2_fixed_button_pane_cp03

0xe024,	// (0x00026064) list_welc_entry_pane_ParamLimits

0xe024,	// (0x00026064) list_welc_entry_pane

0xe083,	// (0x000260c3) main_welc_pane_g3_ParamLimits

0xe083,	// (0x000260c3) main_welc_pane_g3

0xe0d1,	// (0x00026111) main_welc_pane_t2_ParamLimits

0xe0d1,	// (0x00026111) main_welc_pane_t2

0xe0e5,	// (0x00026125) main_welc_pane_t3_ParamLimits

0xe0e5,	// (0x00026125) main_welc_pane_t3

0x0005,

0xfe54,	// (0x00027e94) main_welc_pane_t_ParamLimits

0xfe54,	// (0x00027e94) main_welc_pane_t

0xe1eb,	// (0x0002622b) welc_button_pane_ParamLimits

0xe1eb,	// (0x0002622b) welc_button_pane

0xe239,	// (0x00026279) welc_service_logo_pane_ParamLimits

0xe239,	// (0x00026279) welc_service_logo_pane

0xe2e7,	// (0x00026327) list_single_welc_entry_pane_ParamLimits

0xe2e7,	// (0x00026327) list_single_welc_entry_pane

0xe2f8,	// (0x00026338) list_single_welc_entry_pane_g1

0xe300,	// (0x00026340) list_single_welc_entry_pane_t1

0xe30e,	// (0x0002634e) list_single_welc_entry_pane_t2

0x0001,

0xfe66,	// (0x00027ea6) list_single_welc_entry_pane_t

0xe7c9,	// (0x00026809) bg_button_pane_cp035

0x4e5c,	// (0x0001ce9c) welc_button_pane_t1

0x4e6a,	// (0x0001ceaa) welc_service_logo_pane_g1

0x4e73,	// (0x0001ceb3) welc_service_logo_pane_g2

0x0001,

0xfe6b,	// (0x00027eab) welc_service_logo_pane_g

0x622f,	// (0x0001e26f) main_int_radio_pane

0x3c37,	// (0x0001bc77) list_single_fs_dyc_pane_g1

0xde66,	// (0x00025ea6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xde66,	// (0x00025ea6) list_double_large_graphic_phob2_pane_g3

0xde72,	// (0x00025eb2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xde72,	// (0x00025eb2) list_double_large_graphic_phob2_pane_g4

0xe31c,	// (0x0002635c) main_int_radio1_pane_ParamLimits

0xe31c,	// (0x0002635c) main_int_radio1_pane

0x4e7c,	// (0x0001cebc) find_pane_cp02

0xe332,	// (0x00026372) input_focus_pane_cp12_ParamLimits

0xe332,	// (0x00026372) input_focus_pane_cp12

0xe33e,	// (0x0002637e) input_focus_pane_cp13_ParamLimits

0xe33e,	// (0x0002637e) input_focus_pane_cp13

0xe356,	// (0x00026396) input_focus_pane_cp14_ParamLimits

0xe356,	// (0x00026396) input_focus_pane_cp14

0x4e85,	// (0x0001cec5) int_radio1_listscroll_pane

0xe36e,	// (0x000263ae) main_int_radio1_pane_g1_ParamLimits

0xe36e,	// (0x000263ae) main_int_radio1_pane_g1

0xe37a,	// (0x000263ba) main_int_radio1_pane_t1_ParamLimits

0xe37a,	// (0x000263ba) main_int_radio1_pane_t1

0xe38c,	// (0x000263cc) main_int_radio1_pane_t2_ParamLimits

0xe38c,	// (0x000263cc) main_int_radio1_pane_t2

0xe3a0,	// (0x000263e0) main_int_radio1_pane_t3_ParamLimits

0xe3a0,	// (0x000263e0) main_int_radio1_pane_t3

0xe3b4,	// (0x000263f4) main_int_radio1_pane_t4_ParamLimits

0xe3b4,	// (0x000263f4) main_int_radio1_pane_t4

0x4e8f,	// (0x0001cecf) main_int_radio1_pane_t5_ParamLimits

0x4e8f,	// (0x0001cecf) main_int_radio1_pane_t5

0xe3cb,	// (0x0002640b) main_int_radio1_pane_t6_ParamLimits

0xe3cb,	// (0x0002640b) main_int_radio1_pane_t6

0xe3dd,	// (0x0002641d) main_int_radio1_pane_t7_ParamLimits

0xe3dd,	// (0x0002641d) main_int_radio1_pane_t7

0xe3ef,	// (0x0002642f) main_int_radio1_pane_t8_ParamLimits

0xe3ef,	// (0x0002642f) main_int_radio1_pane_t8

0xe401,	// (0x00026441) main_int_radio1_pane_t9_ParamLimits

0xe401,	// (0x00026441) main_int_radio1_pane_t9

0xe413,	// (0x00026453) main_int_radio1_pane_t10_ParamLimits

0xe413,	// (0x00026453) main_int_radio1_pane_t10

0xe444,	// (0x00026484) main_int_radio1_pane_t11_ParamLimits

0xe444,	// (0x00026484) main_int_radio1_pane_t11

0xe475,	// (0x000264b5) main_int_radio1_pane_t12_ParamLimits

0xe475,	// (0x000264b5) main_int_radio1_pane_t12

0x000b,

0xfe70,	// (0x00027eb0) main_int_radio1_pane_t_ParamLimits

0xfe70,	// (0x00027eb0) main_int_radio1_pane_t

0x4d19,	// (0x0001cd59) int_radio_list_pane

0x4d21,	// (0x0001cd61) scroll_pane_cp037

0x4ea1,	// (0x0001cee1) list_double_large_graphic_int_radio_pane_ParamLimits

0x4ea1,	// (0x0001cee1) list_double_large_graphic_int_radio_pane

0x4eb5,	// (0x0001cef5) list_double_large_graphic_int_radio_pane_g1

0x4ebe,	// (0x0001cefe) list_double_large_graphic_int_radio_pane_t1

0x4ecc,	// (0x0001cf0c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe89,	// (0x00027ec9) list_double_large_graphic_int_radio_pane_t

0xe7c9,	// (0x00026809) list_highlight_pane_cp027

0x4e11,	// (0x0001ce51) main_button_pane_4

0xe093,	// (0x000260d3) main_welc_pane_g4_ParamLimits

0xe093,	// (0x000260d3) main_welc_pane_g4

0xe0f9,	// (0x00026139) main_welc_pane_t4_ParamLimits

0xe0f9,	// (0x00026139) main_welc_pane_t4

0xe10b,	// (0x0002614b) main_welc_pane_t5_ParamLimits

0xe10b,	// (0x0002614b) main_welc_pane_t5

0xe13f,	// (0x0002617f) main_welc_pane_t6_ParamLimits

0xe13f,	// (0x0002617f) main_welc_pane_t6

0xe1f9,	// (0x00026239) welc_button_pane_2_ParamLimits

0xe1f9,	// (0x00026239) welc_button_pane_2

0xe20f,	// (0x0002624f) welc_button_pane_3_ParamLimits

0xe20f,	// (0x0002624f) welc_button_pane_3

0x4e19,	// (0x0001ce59) welc_button_pane_4

0xe229,	// (0x00026269) welc_button_pane_5_ParamLimits

0xe229,	// (0x00026269) welc_button_pane_5

0x5fd3,	// (0x0001e013) main_popup_welc_pane

0x4ee9,	// (0x0001cf29) main_welc_sk_g3

0x4ef3,	// (0x0001cf33) main_welc_sk_g4

0x4efd,	// (0x0001cf3d) main_welc_sk_t3

0x4f0d,	// (0x0001cf4d) main_welc_sk_t4

0x4f1d,	// (0x0001cf5d) popup_welc_pane_t4

0x4f2b,	// (0x0001cf6b) popup_welc_pane_t5

0x4f3b,	// (0x0001cf7b) popup_welc_pane_t6

0x622f,	// (0x0001e26f) main_acti_pane

0xe7c9,	// (0x00026809) main_sso_pane

0xe48c,	// (0x000264cc) sso_body_pane_ParamLimits

0xe48c,	// (0x000264cc) sso_body_pane

0xe49b,	// (0x000264db) sso_logo_pane_ParamLimits

0xe49b,	// (0x000264db) sso_logo_pane

0xe4c4,	// (0x00026504) sso_sk_pane_ParamLimits

0xe4c4,	// (0x00026504) sso_sk_pane

0x0131,	// (0x00018171) main_sso_logo_pane_g1

0xe4d1,	// (0x00026511) sso_sk_pane_t1_ParamLimits

0xe4d1,	// (0x00026511) sso_sk_pane_t1

0xe4e5,	// (0x00026525) sso_sk_pane_t2_ParamLimits

0xe4e5,	// (0x00026525) sso_sk_pane_t2

0x0001,

0xfe8e,	// (0x00027ece) sso_sk_pane_t_ParamLimits

0xfe8e,	// (0x00027ece) sso_sk_pane_t

0x4f7d,	// (0x0001cfbd) aid_sso_gap

0x4f86,	// (0x0001cfc6) aid_sso_txt1

0x4f90,	// (0x0001cfd0) aid_sso_txt2

0x4f9a,	// (0x0001cfda) aid_sso_txt3

0x0002,

0xfe93,	// (0x00027ed3) aid_sso_txt

0x4fa4,	// (0x0001cfe4) aid_sso_widget

0xe542,	// (0x00026582) sso_btn_pane_ParamLimits

0xe542,	// (0x00026582) sso_btn_pane

0xe5bb,	// (0x000265fb) sso_option_pane_ParamLimits

0xe5bb,	// (0x000265fb) sso_option_pane

0xe639,	// (0x00026679) sso_query_pane_ParamLimits

0xe639,	// (0x00026679) sso_query_pane

0xe68b,	// (0x000266cb) sso_query_pane_cp01_ParamLimits

0xe68b,	// (0x000266cb) sso_query_pane_cp01

0xe6e1,	// (0x00026721) sso_t_hdr_pane_ParamLimits

0xe6e1,	// (0x00026721) sso_t_hdr_pane

0xe700,	// (0x00026740) sso_t_nml_pane_ParamLimits

0xe700,	// (0x00026740) sso_t_nml_pane

0x4f9a,	// (0x0001cfda) sso_t_sub_pane

0xe4a8,	// (0x000264e8) sso_popup_window_ParamLimits

0xe4a8,	// (0x000264e8) sso_popup_window

0xe4f7,	// (0x00026537) sso_apps_pane_ParamLimits

0xe4f7,	// (0x00026537) sso_apps_pane

0xe51a,	// (0x0002655a) sso_body_pane_g1

0xe522,	// (0x00026562) sso_body_pane_t1

0xe532,	// (0x00026572) sso_body_pane_t2

0x0001,

0xfe9a,	// (0x00027eda) sso_body_pane_t

0xe58d,	// (0x000265cd) sso_btn_pane_cp01_ParamLimits

0xe58d,	// (0x000265cd) sso_btn_pane_cp01

0xe60b,	// (0x0002664b) sso_prog_pane_ParamLimits

0xe60b,	// (0x0002664b) sso_prog_pane

0x4fae,	// (0x0001cfee) sso_t_hdr_pane_t1_ParamLimits

0x4fae,	// (0x0001cfee) sso_t_hdr_pane_t1

0x4fc1,	// (0x0001d001) input_focus_pane_cp10_ParamLimits

0x4fc1,	// (0x0001d001) input_focus_pane_cp10

0x4fd7,	// (0x0001d017) sso_query_pane_t1_ParamLimits

0x4fd7,	// (0x0001d017) sso_query_pane_t1

0x4fea,	// (0x0001d02a) sso_query_pane_t2_ParamLimits

0x4fea,	// (0x0001d02a) sso_query_pane_t2

0x5004,	// (0x0001d044) sso_query_pane_t3_ParamLimits

0x5004,	// (0x0001d044) sso_query_pane_t3

0x502e,	// (0x0001d06e) sso_query_pane_t4_ParamLimits

0x502e,	// (0x0001d06e) sso_query_pane_t4

0x0003,

0xfe9f,	// (0x00027edf) sso_query_pane_t_ParamLimits

0xfe9f,	// (0x00027edf) sso_query_pane_t

0xe7c9,	// (0x00026809) bg_button_pane_cp22

0x4eda,	// (0x0001cf1a) sso_btn_pane_t1

0xe750,	// (0x00026790) sso_t_nml_pane_t1_ParamLimits

0xe750,	// (0x00026790) sso_t_nml_pane_t1

0x5052,	// (0x0001d092) sso_option_row_pane_ParamLimits

0x5052,	// (0x0001d092) sso_option_row_pane

0x505f,	// (0x0001d09f) sso_t_sub_pane_t1_ParamLimits

0x505f,	// (0x0001d09f) sso_t_sub_pane_t1

0xe82a,	// (0x0002686a) bg_popup_window_pane_cp11_ParamLimits

0xe82a,	// (0x0002686a) bg_popup_window_pane_cp11

0x5072,	// (0x0001d0b2) popup_sk_window_cp01_ParamLimits

0x5072,	// (0x0001d0b2) popup_sk_window_cp01

0x507f,	// (0x0001d0bf) sso_popup_body_pane_ParamLimits

0x507f,	// (0x0001d0bf) sso_popup_body_pane

0x508c,	// (0x0001d0cc) scroll_pane_cp21_ParamLimits

0x508c,	// (0x0001d0cc) scroll_pane_cp21

0x5099,	// (0x0001d0d9) sso_popup_body_t_pane_ParamLimits

0x5099,	// (0x0001d0d9) sso_popup_body_t_pane

0x50a6,	// (0x0001d0e6) sso_popup_body_t_hdr_pane_ParamLimits

0x50a6,	// (0x0001d0e6) sso_popup_body_t_hdr_pane

0x50b4,	// (0x0001d0f4) sso_popup_body_t_nml_pane_ParamLimits

0x50b4,	// (0x0001d0f4) sso_popup_body_t_nml_pane

0x50cf,	// (0x0001d10f) sso_popup_body_t_sub_pane_ParamLimits

0x50cf,	// (0x0001d10f) sso_popup_body_t_sub_pane

0x50f2,	// (0x0001d132) sso_popup_body_t_hdr_pane_t1

0xe76d,	// (0x000267ad) sso_popup_body_t_nml_pane_t1_ParamLimits

0xe76d,	// (0x000267ad) sso_popup_body_t_nml_pane_t1

0x5102,	// (0x0001d142) sso_popup_body_t_sub_pane_t1_ParamLimits

0x5102,	// (0x0001d142) sso_popup_body_t_sub_pane_t1

0x0131,	// (0x00018171) sso_prog_pane_g1

0xe7b4,	// (0x000267f4) sso_apps_pane_comp1_ParamLimits

0xe7b4,	// (0x000267f4) sso_apps_pane_comp1

0x5127,	// (0x0001d167) sso_apps_pane_comp1_g1

0x512f,	// (0x0001d16f) sso_apps_pane_comp1_t1

0x513d,	// (0x0001d17d) sso_option_row_pane_g1

0x5145,	// (0x0001d185) sso_option_row_pane_t1

0xe012,	// (0x00026052) bg_welc_area_ParamLimits

0xe012,	// (0x00026052) bg_welc_area

0xe175,	// (0x000261b5) sso_t_hdr_pane_a_t1_ParamLimits

0xe175,	// (0x000261b5) sso_t_hdr_pane_a_t1

0xe189,	// (0x000261c9) sso_t_nml_pane_a_t1_ParamLimits

0xe189,	// (0x000261c9) sso_t_nml_pane_a_t1

0xe1b7,	// (0x000261f7) sso_t_sub_pane_a_t1_ParamLimits

0xe1b7,	// (0x000261f7) sso_t_sub_pane_a_t1

0x4eda,	// (0x0001cf1a) sso_btn_pane_t1_copy1

0xe7c9,	// (0x00026809) welc_button_pane_2_comp1

0x4f4b,	// (0x0001cf8b) sso_t_hdr_pane_p_t1

0x4f5b,	// (0x0001cf9b) sso_t_nml_pane_p_t1

0x4f6b,	// (0x0001cfab) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
