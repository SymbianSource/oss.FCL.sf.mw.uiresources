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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e8f3 };

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
0x0a23,	// (0x0004f316) Screen

0x0a2f,	// (0x0004f322) application_window

0x0a7b,	// (0x0004f36e) area_bottom_pane_ParamLimits

0x0a7b,	// (0x0004f36e) area_bottom_pane

0x0ab4,	// (0x0004f3a7) area_top_pane_ParamLimits

0x0ab4,	// (0x0004f3a7) area_top_pane

0x9a2f,	// (0x00058322) call_video_uplink_pane_ParamLimits

0x9a2f,	// (0x00058322) call_video_uplink_pane

0x0b42,	// (0x0004f435) main_pane_ParamLimits

0x0b42,	// (0x0004f435) main_pane

0xc7f8,	// (0x0005b0eb) context_pane

0x44f6,	// (0x00052de9) navi_pane

0x4526,	// (0x00052e19) popup_cale_events_window_ParamLimits

0x4526,	// (0x00052e19) popup_cale_events_window

0xc80b,	// (0x0005b0fe) popup_mup_playback_window

0x453e,	// (0x00052e31) signal_pane

0xa1b0,	// (0x00058aa3) main_browser_pane

0xa3dc,	// (0x00058ccf) main_burst_pane

0x41f8,	// (0x00052aeb) main_calc_pane

0xc79b,	// (0x0005b08e) main_cale_day_pane

0x1184,	// (0x0004fa77) main_cale_month_pane

0xc79b,	// (0x0005b08e) main_cale_week_pane

0xa3dc,	// (0x00058ccf) main_call_pane

0x9e6e,	// (0x00058761) main_call_poc_pane

0xa3dc,	// (0x00058ccf) main_camera_pane

0xa3dc,	// (0x00058ccf) main_chi_dic_pane

0xb21a,	// (0x00059b0d) main_clock_pane

0x9e6e,	// (0x00058761) main_fmradio_pane

0xa3dc,	// (0x00058ccf) main_graph_messa_pane

0x9e6e,	// (0x00058761) main_help_pane

0xa1b0,	// (0x00058aa3) main_im_pane

0xa0c9,	// (0x000589bc) main_image_pane_ParamLimits

0xa0c9,	// (0x000589bc) main_image_pane

0x9e6e,	// (0x00058761) main_location2_pane

0xa3dc,	// (0x00058ccf) main_location_pane

0xa0c9,	// (0x000589bc) main_messa_pane

0x9e6e,	// (0x00058761) main_mp2_pane

0xa3dc,	// (0x00058ccf) main_mp_pane

0x9e6e,	// (0x00058761) main_msg_pane

0x9e6e,	// (0x00058761) main_mup_eq_pane

0x9e6e,	// (0x00058761) main_mup_pane

0xa1b0,	// (0x00058aa3) main_notes_pane

0x9e6e,	// (0x00058761) main_pec_pane

0x9e6e,	// (0x00058761) main_phob_pane

0x9e6e,	// (0x00058761) main_pinb_pane

0x9e6e,	// (0x00058761) main_postcard_pane

0x9e6e,	// (0x00058761) main_qdial_pane

0xa3dc,	// (0x00058ccf) main_skin_pane

0x9e6e,	// (0x00058761) main_smil2_pane

0xa3dc,	// (0x00058ccf) main_smil_pane

0xa3dc,	// (0x00058ccf) main_video_pane

0xa3dc,	// (0x00058ccf) main_video_tele_pane

0xa0c9,	// (0x000589bc) main_viewer_pane_ParamLimits

0xa0c9,	// (0x000589bc) main_viewer_pane

0xa3dc,	// (0x00058ccf) main_vorec_pane

0x424e,	// (0x00052b41) popup_blid_sat_info_window_ParamLimits

0x424e,	// (0x00052b41) popup_blid_sat_info_window

0x42b2,	// (0x00052ba5) popup_dyc_status_message_window_ParamLimits

0x42b2,	// (0x00052ba5) popup_dyc_status_message_window

0x42cc,	// (0x00052bbf) popup_grid_large_graphic_window_ParamLimits

0x42cc,	// (0x00052bbf) popup_grid_large_graphic_window

0x438e,	// (0x00052c81) popup_loc_request_window_ParamLimits

0x438e,	// (0x00052c81) popup_loc_request_window

0x44ca,	// (0x00052dbd) popup_wml_address_window_ParamLimits

0x44ca,	// (0x00052dbd) popup_wml_address_window

0x4036,	// (0x00052929) call_muted_g1

0x3cca,	// (0x000525bd) popup_call_audio_conf_window_ParamLimits

0x3cca,	// (0x000525bd) popup_call_audio_conf_window

0x4046,	// (0x00052939) popup_call_audio_first_window_ParamLimits

0x4046,	// (0x00052939) popup_call_audio_first_window

0x40bc,	// (0x000529af) popup_call_audio_in_window_ParamLimits

0x40bc,	// (0x000529af) popup_call_audio_in_window

0x40f8,	// (0x000529eb) popup_call_audio_out_window_ParamLimits

0x40f8,	// (0x000529eb) popup_call_audio_out_window

0x4132,	// (0x00052a25) popup_call_audio_second_window_ParamLimits

0x4132,	// (0x00052a25) popup_call_audio_second_window

0x4188,	// (0x00052a7b) popup_call_audio_wait_window_ParamLimits

0x4188,	// (0x00052a7b) popup_call_audio_wait_window

0x41bd,	// (0x00052ab0) popup_number_entry_window_ParamLimits

0x41bd,	// (0x00052ab0) popup_number_entry_window

0x9a5b,	// (0x0005834e) bg_popup_call_pane_cp05_ParamLimits

0x9a5b,	// (0x0005834e) bg_popup_call_pane_cp05

0x9a7b,	// (0x0005836e) popup_number_entry_window_t1

0x9a8e,	// (0x00058381) popup_number_entry_window_t2

0x9aa0,	// (0x00058393) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005d9bd) popup_number_entry_window_t

0x9ab2,	// (0x000583a5) text_title_cp2

0x9ac5,	// (0x000583b8) bg_popup_call_pane_cp_ParamLimits

0x9ac5,	// (0x000583b8) bg_popup_call_pane_cp

0x9ad3,	// (0x000583c6) call_thumbnail_pane

0x9adb,	// (0x000583ce) popup_call_audio_in_window_g1_ParamLimits

0x9adb,	// (0x000583ce) popup_call_audio_in_window_g1

0x9ae7,	// (0x000583da) popup_call_audio_in_window_g2_ParamLimits

0x9ae7,	// (0x000583da) popup_call_audio_in_window_g2

0x9af3,	// (0x000583e6) popup_call_audio_in_window_g3_ParamLimits

0x9af3,	// (0x000583e6) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005d9c6) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005d9c6) popup_call_audio_in_window_g

0x9aff,	// (0x000583f2) popup_call_audio_in_window_t1_ParamLimits

0x9aff,	// (0x000583f2) popup_call_audio_in_window_t1

0x9b1b,	// (0x0005840e) popup_call_audio_in_window_t2_ParamLimits

0x9b1b,	// (0x0005840e) popup_call_audio_in_window_t2

0x9b37,	// (0x0005842a) popup_call_audio_in_window_t3_ParamLimits

0x9b37,	// (0x0005842a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005d9cd) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005d9cd) popup_call_audio_in_window_t

0x9ac5,	// (0x000583b8) bg_popup_call_pane_cp01_ParamLimits

0x9ac5,	// (0x000583b8) bg_popup_call_pane_cp01

0x9ad3,	// (0x000583c6) call_thumbnail_pane_cp02

0x9b4a,	// (0x0005843d) call_type_pane_cp022

0x9b52,	// (0x00058445) popup_call_audio_out_window_g1_ParamLimits

0x9b52,	// (0x00058445) popup_call_audio_out_window_g1

0x9b64,	// (0x00058457) popup_call_audio_out_window_g2_ParamLimits

0x9b64,	// (0x00058457) popup_call_audio_out_window_g2

0x9b70,	// (0x00058463) popup_call_audio_out_window_g3_ParamLimits

0x9b70,	// (0x00058463) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005d9d4) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005d9d4) popup_call_audio_out_window_g

0x9b82,	// (0x00058475) popup_call_audio_out_window_t1_ParamLimits

0x9b82,	// (0x00058475) popup_call_audio_out_window_t1

0x9b9a,	// (0x0005848d) popup_call_audio_out_window_t2_ParamLimits

0x9b9a,	// (0x0005848d) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005d9db) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005d9db) popup_call_audio_out_window_t

0x9baf,	// (0x000584a2) bg_popup_call_pane_ParamLimits

0x9baf,	// (0x000584a2) bg_popup_call_pane

0x0d01,	// (0x0004f5f4) call_thumbnail_pane_cp_ParamLimits

0x0d01,	// (0x0004f5f4) call_thumbnail_pane_cp

0x9c33,	// (0x00058526) call_type_pane_cp01_ParamLimits

0x9c33,	// (0x00058526) call_type_pane_cp01

0x9c77,	// (0x0005856a) popup_call_audio_first_window_g1_ParamLimits

0x9c77,	// (0x0005856a) popup_call_audio_first_window_g1

0x9cc3,	// (0x000585b6) popup_call_audio_first_window_g2_ParamLimits

0x9cc3,	// (0x000585b6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005d9e0) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005d9e0) popup_call_audio_first_window_g

0x9d07,	// (0x000585fa) popup_call_audio_first_window_t1_ParamLimits

0x9d07,	// (0x000585fa) popup_call_audio_first_window_t1

0x9db3,	// (0x000586a6) popup_call_audio_first_window_t4_ParamLimits

0x9db3,	// (0x000586a6) popup_call_audio_first_window_t4

0x9e3f,	// (0x00058732) popup_call_audio_first_window_t5_ParamLimits

0x9e3f,	// (0x00058732) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005d9e5) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005d9e5) popup_call_audio_first_window_t

0x9e6e,	// (0x00058761) bg_popup_call_pane_cp02

0x9e78,	// (0x0005876b) call_type_pane_cp023

0x9e80,	// (0x00058773) popup_call_audio_wait_window_g1

0x9e88,	// (0x0005877b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005d9ec) popup_call_audio_wait_window_g

0x9e90,	// (0x00058783) popup_call_audio_wait_window_t3

0x9e9e,	// (0x00058791) bg_popup_call_pane_cp03_ParamLimits

0x9e9e,	// (0x00058791) bg_popup_call_pane_cp03

0x9efe,	// (0x000587f1) call_thumbnail_pane_cp011_ParamLimits

0x9efe,	// (0x000587f1) call_thumbnail_pane_cp011

0x9f0a,	// (0x000587fd) call_type_pane_cp034_ParamLimits

0x9f0a,	// (0x000587fd) call_type_pane_cp034

0x9f46,	// (0x00058839) popup_call_audio_second_window_g1_ParamLimits

0x9f46,	// (0x00058839) popup_call_audio_second_window_g1

0x9f82,	// (0x00058875) popup_call_audio_second_window_g2_ParamLimits

0x9f82,	// (0x00058875) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005d9f1) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005d9f1) popup_call_audio_second_window_g

0x9fbe,	// (0x000588b1) popup_call_audio_second_window_t1_ParamLimits

0x9fbe,	// (0x000588b1) popup_call_audio_second_window_t1

0xa03f,	// (0x00058932) popup_call_audio_second_window_t2_ParamLimits

0xa03f,	// (0x00058932) popup_call_audio_second_window_t2

0xa075,	// (0x00058968) popup_call_audio_second_window_t3_ParamLimits

0xa075,	// (0x00058968) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005d9f6) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005d9f6) popup_call_audio_second_window_t

0x9e6e,	// (0x00058761) bg_popup_call_pane_cp04

0xa0ab,	// (0x0005899e) list_conf_pane

0xa0b3,	// (0x000589a6) popup_call_audio_conf_window_t1

0xa0c1,	// (0x000589b4) call_thumbnail_pane_g1

0xa0c9,	// (0x000589bc) bg_pinb_pane_ParamLimits

0xa0c9,	// (0x000589bc) bg_pinb_pane

0xa0d7,	// (0x000589ca) find_pinb_pane

0xa0e0,	// (0x000589d3) listscroll_pinb_pane_ParamLimits

0xa0e0,	// (0x000589d3) listscroll_pinb_pane

0xa0ef,	// (0x000589e2) pinb_bg_pane_g1

0x0d25,	// (0x0004f618) pinb_bg_pane_g2

0x0d31,	// (0x0004f624) pinb_bg_pane_g3

0x0d3d,	// (0x0004f630) pinb_bg_pane_g4

0x0d49,	// (0x0004f63c) pinb_bg_pane_g5

0x0d55,	// (0x0004f648) pinb_bg_pane_g6

0x0d60,	// (0x0004f653) pinb_bg_pane_g7

0x0d6b,	// (0x0004f65e) pinb_bg_pane_g8

0x0d76,	// (0x0004f669) pinb_bg_pane_g9

0x0d80,	// (0x0004f673) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005d9fd) pinb_bg_pane_g

0x0d9d,	// (0x0004f690) grid_pinb_pane

0x0da8,	// (0x0004f69b) list_pinb_pane

0x0db3,	// (0x0004f6a6) scroll_pane_cp01_ParamLimits

0x0db3,	// (0x0004f6a6) scroll_pane_cp01

0xa0f9,	// (0x000589ec) find_pinb_pane_g1_ParamLimits

0xa0f9,	// (0x000589ec) find_pinb_pane_g1

0xa111,	// (0x00058a04) find_pinb_pane_t1

0xa123,	// (0x00058a16) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005da17) find_pinb_pane_t

0xa138,	// (0x00058a2b) input_focus_pane_cp01_ParamLimits

0xa138,	// (0x00058a2b) input_focus_pane_cp01

0x0dc5,	// (0x0004f6b8) cell_pinb_pane_ParamLimits

0x0dc5,	// (0x0004f6b8) cell_pinb_pane

0x0de7,	// (0x0004f6da) cell_pinb_pane_g1_ParamLimits

0x0de7,	// (0x0004f6da) cell_pinb_pane_g1

0x0dfc,	// (0x0004f6ef) cell_pinb_pane_g2_ParamLimits

0x0dfc,	// (0x0004f6ef) cell_pinb_pane_g2

0xa144,	// (0x00058a37) cell_pinb_pane_g3_ParamLimits

0xa144,	// (0x00058a37) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005da1c) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005da1c) cell_pinb_pane_g

0x9e6e,	// (0x00058761) grid_highlight_pane_cp01

0x0e08,	// (0x0004f6fb) list_pinb_item_pane_ParamLimits

0x0e08,	// (0x0004f6fb) list_pinb_item_pane

0x9e6e,	// (0x00058761) list_highlight_pane_cp02

0x0e1a,	// (0x0004f70d) list_pinb_item_pane_g1_ParamLimits

0x0e1a,	// (0x0004f70d) list_pinb_item_pane_g1

0x0e27,	// (0x0004f71a) list_pinb_item_pane_g2_ParamLimits

0x0e27,	// (0x0004f71a) list_pinb_item_pane_g2

0x0e33,	// (0x0004f726) list_pinb_item_pane_g3_ParamLimits

0x0e33,	// (0x0004f726) list_pinb_item_pane_g3

0x0e44,	// (0x0004f737) list_pinb_item_pane_g4_ParamLimits

0x0e44,	// (0x0004f737) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005da23) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005da23) list_pinb_item_pane_g

0x0e50,	// (0x0004f743) list_pinb_item_pane_t1_ParamLimits

0x0e50,	// (0x0004f743) list_pinb_item_pane_t1

0x0e85,	// (0x0004f778) calc_display_pane

0x0ead,	// (0x0004f7a0) calc_paper_pane

0x0ed0,	// (0x0004f7c3) grid_calc_pane

0x9e6e,	// (0x00058761) bg_list_pane_cp01

0x0efe,	// (0x0004f7f1) clock_g1

0x0f06,	// (0x0004f7f9) clock_g2

0x0001,

0xf139,	// (0x0005da2c) clock_g

0x0f0e,	// (0x0004f801) clock_t1_ParamLimits

0x0f0e,	// (0x0004f801) clock_t1

0x0f23,	// (0x0004f816) clock_t2_ParamLimits

0x0f23,	// (0x0004f816) clock_t2

0x0f35,	// (0x0004f828) clock_t3_ParamLimits

0x0f35,	// (0x0004f828) clock_t3

0x0f47,	// (0x0004f83a) clock_t4_ParamLimits

0x0f47,	// (0x0004f83a) clock_t4

0x0f59,	// (0x0004f84c) clock_t5_ParamLimits

0x0f59,	// (0x0004f84c) clock_t5

0x0f6e,	// (0x0004f861) clock_t6_ParamLimits

0x0f6e,	// (0x0004f861) clock_t6

0x0f80,	// (0x0004f873) clock_t7_ParamLimits

0x0f80,	// (0x0004f873) clock_t7

0x0f92,	// (0x0004f885) clock_t8_ParamLimits

0x0f92,	// (0x0004f885) clock_t8

0x0fa6,	// (0x0004f899) clock_t9_ParamLimits

0x0fa6,	// (0x0004f899) clock_t9

0x0008,

0xf13e,	// (0x0005da31) clock_t_ParamLimits

0xf13e,	// (0x0005da31) clock_t

0xa158,	// (0x00058a4b) popup_clock_analogue_window_cp02

0xa158,	// (0x00058a4b) popup_clock_digital_window_cp01

0xa160,	// (0x00058a53) listscroll_help_pane

0x9e6e,	// (0x00058761) phob_pre_status_pane

0xa16a,	// (0x00058a5d) grid_qdial_pane

0xa0c9,	// (0x000589bc) listscroll_mce_pane

0xa0c9,	// (0x000589bc) bg_notes_pane

0xa174,	// (0x00058a67) list_notes_pane

0x0fbc,	// (0x0004f8af) scroll_pane_cp06

0xa182,	// (0x00058a75) bg_calc_paper_pane

0xa196,	// (0x00058a89) list_calc_pane

0xa1b0,	// (0x00058aa3) bg_calc_display_pane

0x0fd0,	// (0x0004f8c3) calc_display_pane_t1

0x0fe2,	// (0x0004f8d5) calc_display_pane_t2

0xa1bc,	// (0x00058aaf) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005da44) calc_display_pane_t

0x0ff4,	// (0x0004f8e7) cell_calc_pane_ParamLimits

0x0ff4,	// (0x0004f8e7) cell_calc_pane

0xa1ce,	// (0x00058ac1) bg_calc_paper_pane_g1

0xa1da,	// (0x00058acd) bg_calc_paper_pane_g2

0xa1e6,	// (0x00058ad9) bg_calc_paper_pane_g3

0xa1f2,	// (0x00058ae5) bg_calc_paper_pane_g4

0xa1fe,	// (0x00058af1) bg_calc_paper_pane_g5

0x1031,	// (0x0004f924) bg_calc_paper_pane_g6

0x1044,	// (0x0004f937) bg_calc_paper_pane_g7

0x1057,	// (0x0004f94a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005da4b) bg_calc_paper_pane_g

0x1068,	// (0x0004f95b) calc_bg_paper_pane_g9

0x1079,	// (0x0004f96c) list_calc_item_pane_ParamLimits

0x1079,	// (0x0004f96c) list_calc_item_pane

0xa20a,	// (0x00058afd) list_calc_item_pane_g1

0xa217,	// (0x00058b0a) list_calc_item_pane_t1_ParamLimits

0xa217,	// (0x00058b0a) list_calc_item_pane_t1

0x1091,	// (0x0004f984) list_calc_item_pane_t2_ParamLimits

0x1091,	// (0x0004f984) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005da5c) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005da5c) list_calc_item_pane_t

0xa229,	// (0x00058b1c) cell_calc_pane_g1

0xa233,	// (0x00058b26) grid_highlight_pane_cp02

0xa255,	// (0x00058b48) bg_calc_display_pane_g1

0xa25e,	// (0x00058b51) bg_calc_display_pane_g2

0xa268,	// (0x00058b5b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005da66) bg_calc_display_pane_g

0x10c3,	// (0x0004f9b6) cell_qdial_pane_ParamLimits

0x10c3,	// (0x0004f9b6) cell_qdial_pane

0x10d7,	// (0x0004f9ca) cell_qdial_pane_g1_ParamLimits

0x10d7,	// (0x0004f9ca) cell_qdial_pane_g1

0x10ed,	// (0x0004f9e0) cell_qdial_pane_g2_ParamLimits

0x10ed,	// (0x0004f9e0) cell_qdial_pane_g2

0xa271,	// (0x00058b64) cell_qdial_pane_g3_ParamLimits

0xa271,	// (0x00058b64) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005da6d) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005da6d) cell_qdial_pane_g

0x1114,	// (0x0004fa07) cell_qdial_pane_t1_ParamLimits

0x1114,	// (0x0004fa07) cell_qdial_pane_t1

0x112c,	// (0x0004fa1f) cell_qdial_pane_t2_ParamLimits

0x112c,	// (0x0004fa1f) cell_qdial_pane_t2

0x113f,	// (0x0004fa32) cell_qdial_pane_t3_ParamLimits

0x113f,	// (0x0004fa32) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005da76) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005da76) cell_qdial_pane_t

0x9e6e,	// (0x00058761) grid_highlight_pane_cp04

0xa27d,	// (0x00058b70) thumbnail_qdial_pane_ParamLimits

0xa27d,	// (0x00058b70) thumbnail_qdial_pane

0xa2d9,	// (0x00058bcc) list_help_pane

0xa2e2,	// (0x00058bd5) scroll_pane_cp02

0x1152,	// (0x0004fa45) help_list_pane_t1_ParamLimits

0x1152,	// (0x0004fa45) help_list_pane_t1

0xa2eb,	// (0x00058bde) bg_notes_pane_g2

0xa2f3,	// (0x00058be6) bg_notes_pane_g3

0xa2fb,	// (0x00058bee) notes_bg_pane_g1

0xa303,	// (0x00058bf6) notes_bg_pane_g4

0xa30b,	// (0x00058bfe) notes_bg_pane_g5

0xa313,	// (0x00058c06) notes_bg_pane_g6

0xa31b,	// (0x00058c0e) notes_bg_pane_g7

0xa323,	// (0x00058c16) notes_bg_pane_g8

0xa32b,	// (0x00058c1e) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005da94) notes_bg_pane_g

0x1170,	// (0x0004fa63) list_notes_text_pane_ParamLimits

0x1170,	// (0x0004fa63) list_notes_text_pane

0xa333,	// (0x00058c26) list_notes_text_pane_g1

0xfb3f,	// (0x0004e432) list_notes_text_pane_t1

0x1184,	// (0x0004fa77) listscroll_cale_week_pane

0x11ba,	// (0x0004faad) bg_cale_heading_pane

0x11e3,	// (0x0004fad6) bg_cale_pane_cp01

0x1205,	// (0x0004faf8) cale_week_corner_pane

0x1224,	// (0x0004fb17) cale_week_day_heading_pane

0x1252,	// (0x0004fb45) cale_week_scroll_pane_g1

0x1276,	// (0x0004fb69) cale_week_scroll_pane_g2

0x128e,	// (0x0004fb81) cale_week_scroll_pane_g3

0x12a6,	// (0x0004fb99) cale_week_scroll_pane_g4

0x12c2,	// (0x0004fbb5) cale_week_scroll_pane_g5

0x12e2,	// (0x0004fbd5) cale_week_scroll_pane_g6

0x1302,	// (0x0004fbf5) cale_week_scroll_pane_g7

0x1326,	// (0x0004fc19) cale_week_scroll_pane_g8

0x134a,	// (0x0004fc3d) cale_week_scroll_pane_g9

0x1367,	// (0x0004fc5a) cale_week_scroll_pane_g10

0x1384,	// (0x0004fc77) cale_week_scroll_pane_g11

0x13a1,	// (0x0004fc94) cale_week_scroll_pane_g12

0x13be,	// (0x0004fcb1) cale_week_scroll_pane_g13

0x13db,	// (0x0004fcce) cale_week_scroll_pane_g14

0x1404,	// (0x0004fcf7) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005daa3) cale_week_scroll_pane_g

0x1451,	// (0x0004fd44) cale_week_time_pane

0x1475,	// (0x0004fd68) grid_cale_week_pane

0xa35f,	// (0x00058c52) scroll_pane_cp08

0x14ac,	// (0x0004fd9f) cell_cale_week_pane_ParamLimits

0x14ac,	// (0x0004fd9f) cell_cale_week_pane

0x153c,	// (0x0004fe2f) cale_week_day_heading_pane_t1

0x1586,	// (0x0004fe79) cale_week_day_heading_pane_t2

0x15d5,	// (0x0004fec8) cale_week_day_heading_pane_t3

0x1624,	// (0x0004ff17) cale_week_day_heading_pane_t4

0x1673,	// (0x0004ff66) cale_week_day_heading_pane_t5

0x16c6,	// (0x0004ffb9) cale_week_day_heading_pane_t6

0x171d,	// (0x00050010) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005dac4) cale_week_day_heading_pane_t

0xa381,	// (0x00058c74) bg_cale_side_pane

0x1767,	// (0x0005005a) cale_week_time_pane_t1

0x17a1,	// (0x00050094) cale_week_time_pane_t2

0x17db,	// (0x000500ce) cale_week_time_pane_t3

0x1815,	// (0x00050108) cale_week_time_pane_t4

0x184f,	// (0x00050142) cale_week_time_pane_t5

0x1889,	// (0x0005017c) cale_week_time_pane_t6

0x18c3,	// (0x000501b6) cale_week_time_pane_t7

0x18fd,	// (0x000501f0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005dad3) cale_week_time_pane_t

0x193d,	// (0x00050230) cell_cale_week_pane_g2

0x195c,	// (0x0005024f) cell_cale_week_pane_g3_ParamLimits

0x195c,	// (0x0005024f) cell_cale_week_pane_g3

0xa38f,	// (0x00058c82) grid_highlight_pane_cp07

0xa397,	// (0x00058c8a) listscroll_gms_pane

0xa3a1,	// (0x00058c94) grid_gms_pane

0xa3aa,	// (0x00058c9d) listscroll_gms_pane_g1

0xa3b2,	// (0x00058ca5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005dae4) listscroll_gms_pane_g

0x1974,	// (0x00050267) scroll_pane_cp010

0x197f,	// (0x00050272) cell_gms_pane_ParamLimits

0x197f,	// (0x00050272) cell_gms_pane

0x1999,	// (0x0005028c) cell_gms_pane_g1

0xa3ba,	// (0x00058cad) cell_gms_pane_g2

0xa3c2,	// (0x00058cb5) cell_gms_pane_g3

0xa3cb,	// (0x00058cbe) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005dae9) cell_gms_pane_g

0xa3d4,	// (0x00058cc7) grid_highlight_pane_cp09

0x3fde,	// (0x000528d1) phob_pre_status_pane_g1

0x3fe6,	// (0x000528d9) phob_pre_status_pane_g2

0x3fee,	// (0x000528e1) phob_pre_status_pane_g3

0x3ff6,	// (0x000528e9) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0005dedb) phob_pre_status_pane_g

0x4006,	// (0x000528f9) phob_pre_status_pane_t1

0x4016,	// (0x00052909) phob_pre_status_pane_t2

0x4026,	// (0x00052919) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0005dee6) phob_pre_status_pane_t

0xa3dc,	// (0x00058ccf) bg_list_pane_cp05

0x19a9,	// (0x0005029c) grid_vorec_pane

0x19b5,	// (0x000502a8) vorec_t1

0x19c3,	// (0x000502b6) vorec_t2

0x19d1,	// (0x000502c4) vorec_t3

0x19df,	// (0x000502d2) vorec_t4

0x99ce,	// (0x000582c1) vorec_t5

0x99dc,	// (0x000582cf) vorec_t6

0x0004,

0xf1ff,	// (0x0005daf2) vorec_t

0x99ea,	// (0x000582dd) wait_bar_pane_cp01

0x19fb,	// (0x000502ee) cell_vorec_pane_ParamLimits

0x19fb,	// (0x000502ee) cell_vorec_pane

0xa3e4,	// (0x00058cd7) cell_vorec_pane_g1

0x9e6e,	// (0x00058761) grid_highlight_pane_cp05

0x1a26,	// (0x00050319) cams_zoom_pane

0x1a35,	// (0x00050328) image_vga_pane

0x1a4f,	// (0x00050342) main_camera_pane_g1

0x1a61,	// (0x00050354) main_camera_pane_g2

0x1a71,	// (0x00050364) main_camera_pane_g3

0x1a85,	// (0x00050378) main_camera_pane_g4

0x1a99,	// (0x0005038c) main_camera_pane_g5

0x1aad,	// (0x000503a0) main_camera_pane_g6

0x1ac1,	// (0x000503b4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005dafd) main_camera_pane_g

0x1ad5,	// (0x000503c8) main_camera_pane_t1

0x1aeb,	// (0x000503de) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005db0e) main_camera_pane_t

0x1b29,	// (0x0005041c) cams_zoom_pane_cp_ParamLimits

0x1b29,	// (0x0005041c) cams_zoom_pane_cp

0x1b51,	// (0x00050444) image_cif_pane_ParamLimits

0x1b51,	// (0x00050444) image_cif_pane

0x1b8c,	// (0x0005047f) image_subqcif_pane

0x1b96,	// (0x00050489) main_video_pane_g1_ParamLimits

0x1b96,	// (0x00050489) main_video_pane_g1

0x1bba,	// (0x000504ad) main_video_pane_g2_ParamLimits

0x1bba,	// (0x000504ad) main_video_pane_g2

0x1bf0,	// (0x000504e3) main_video_pane_g3_ParamLimits

0x1bf0,	// (0x000504e3) main_video_pane_g3

0x1c1e,	// (0x00050511) main_video_pane_g4_ParamLimits

0x1c1e,	// (0x00050511) main_video_pane_g4

0x1c4c,	// (0x0005053f) main_video_pane_g5_ParamLimits

0x1c4c,	// (0x0005053f) main_video_pane_g5

0xa3fa,	// (0x00058ced) main_video_pane_g6_ParamLimits

0xa3fa,	// (0x00058ced) main_video_pane_g6

0x0006,

0xf220,	// (0x0005db13) main_video_pane_g_ParamLimits

0xf220,	// (0x0005db13) main_video_pane_g

0x1c75,	// (0x00050568) main_video_pane_t1_ParamLimits

0x1c75,	// (0x00050568) main_video_pane_t1

0xa414,	// (0x00058d07) cams_zoom_pane_g1

0xa41d,	// (0x00058d10) cams_zoom_pane_g2

0xa426,	// (0x00058d19) cams_zoom_pane_g3

0xa42f,	// (0x00058d22) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005db22) cams_zoom_pane_g

0x1cd2,	// (0x000505c5) grid_cams_pane

0x1cec,	// (0x000505df) linegrid_cams_pane

0x1cfe,	// (0x000505f1) cell_cams_pane_ParamLimits

0x1cfe,	// (0x000505f1) cell_cams_pane

0xa438,	// (0x00058d2b) cams_burst_image_pane

0xa440,	// (0x00058d33) cell_cams_pane_g1

0x9e6e,	// (0x00058761) grid_highlight_pane_cp03

0xa229,	// (0x00058b1c) mp_bg_pane_g1

0x9e6e,	// (0x00058761) bg_list_pane_cp03

0xc6be,	// (0x0005afb1) bg_mp_pane

0xc6c6,	// (0x0005afb9) grid_mp_pane

0xc6ce,	// (0x0005afc1) media_player_g1

0xc6d8,	// (0x0005afcb) media_player_t1

0xc6e6,	// (0x0005afd9) media_player_t2

0xc6f4,	// (0x0005afe7) media_player_t3

0xc702,	// (0x0005aff5) media_player_t4

0xc710,	// (0x0005b003) media_player_t5

0xc71e,	// (0x0005b011) media_player_t6

0xc72c,	// (0x0005b01f) media_player_t7

0x0006,

0xf5d2,	// (0x0005dec5) media_player_t

0xc73a,	// (0x0005b02d) wait_bar_pane_cp02

0xf5b7,	// (0x0005deaa) main_usb_pane_t

0x3fd5,	// (0x000528c8) cell_mp_pane

0xa229,	// (0x00058b1c) cell_mp_pane_g1

0x9e6e,	// (0x00058761) grid_highlight_pane_cp06

0xa448,	// (0x00058d3b) grid_skin_colour_pane

0xa450,	// (0x00058d43) list_highlight_pane_cp03

0x1d44,	// (0x00050637) skin_g1

0xa458,	// (0x00058d4b) skin_t1

0xa467,	// (0x00058d5a) skin_t2

0x0001,

0xf264,	// (0x0005db57) skin_t

0x1d4c,	// (0x0005063f) cell_skin_colour_pane_ParamLimits

0x1d4c,	// (0x0005063f) cell_skin_colour_pane

0xa475,	// (0x00058d68) cell_skin_colour_pane_g1

0x1dbf,	// (0x000506b2) call_video_g1_ParamLimits

0x1dbf,	// (0x000506b2) call_video_g1

0x1ddb,	// (0x000506ce) call_video_g2_ParamLimits

0x1ddb,	// (0x000506ce) call_video_g2

0x0001,

0xf269,	// (0x0005db5c) call_video_g_ParamLimits

0xf269,	// (0x0005db5c) call_video_g

0x1e20,	// (0x00050713) call_video_uplink_pane_cp1_ParamLimits

0x1e20,	// (0x00050713) call_video_uplink_pane_cp1

0xa487,	// (0x00058d7a) call_video_uplink_pane_cp2

0x1ec1,	// (0x000507b4) video_down_crop_pane_ParamLimits

0x1ec1,	// (0x000507b4) video_down_crop_pane

0x1faa,	// (0x0005089d) video_down_pane_ParamLimits

0x1faa,	// (0x0005089d) video_down_pane

0xa48f,	// (0x00058d82) video_down_subqcif_pane_ParamLimits

0xa48f,	// (0x00058d82) video_down_subqcif_pane

0xa4a9,	// (0x00058d9c) video_down_subqcif_pane_cp_ParamLimits

0xa4a9,	// (0x00058d9c) video_down_subqcif_pane_cp

0xa4d1,	// (0x00058dc4) im_reading_pane_ParamLimits

0xa4d1,	// (0x00058dc4) im_reading_pane

0x20b3,	// (0x000509a6) im_writing_pane_ParamLimits

0x20b3,	// (0x000509a6) im_writing_pane

0x20cf,	// (0x000509c2) im_reading_pane_t1

0xa4eb,	// (0x00058dde) list_im_pane

0xa4fc,	// (0x00058def) scroll_pane_cp07

0x210b,	// (0x000509fe) im_writing_pane_t1_ParamLimits

0x210b,	// (0x000509fe) im_writing_pane_t1

0xa515,	// (0x00058e08) im_writing_pane_t2_ParamLimits

0xa515,	// (0x00058e08) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005db66) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005db66) im_writing_pane_t

0x9e6e,	// (0x00058761) input_focus_pane_cp04

0x9e6e,	// (0x00058761) input_focus_pane_cp05

0x2120,	// (0x00050a13) list_im_single_pane_ParamLimits

0x2120,	// (0x00050a13) list_im_single_pane

0x2136,	// (0x00050a29) list_single_im_pane_t1

0x3f95,	// (0x00052888) blid_accuracy_pane

0x3f9d,	// (0x00052890) blid_compass_pane

0x3fa7,	// (0x0005289a) main_location_t1

0x3fb7,	// (0x000528aa) main_location_t2

0x3fc7,	// (0x000528ba) main_location_t3

0x0002,

0xf5e1,	// (0x0005ded4) main_location_t

0x9e6e,	// (0x00058761) aid_levels_location

0xa229,	// (0x00058b1c) blid_accuracy_pane_g1

0xa229,	// (0x00058b1c) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0005dbcf) blid_accuracy_pane_g

0xa55d,	// (0x00058e50) wml_content_pane

0xa59b,	// (0x00058e8e) wml_button_pane_ParamLimits

0xa59b,	// (0x00058e8e) wml_button_pane

0x2145,	// (0x00050a38) wml_list_single_large_pane_ParamLimits

0x2145,	// (0x00050a38) wml_list_single_large_pane

0x215b,	// (0x00050a4e) wml_list_single_medium_pane_ParamLimits

0x215b,	// (0x00050a4e) wml_list_single_medium_pane

0x2172,	// (0x00050a65) wml_list_single_small_pane_ParamLimits

0x2172,	// (0x00050a65) wml_list_single_small_pane

0xa5af,	// (0x00058ea2) wml_selection_box_pane_ParamLimits

0xa5af,	// (0x00058ea2) wml_selection_box_pane

0xa5c2,	// (0x00058eb5) wml_list_single_pane_t1

0xa5d1,	// (0x00058ec4) wml_list_single_medium_pane_t1

0xa5e0,	// (0x00058ed3) wml_list_single_large_pane_t1

0xa5ef,	// (0x00058ee2) input_focus_pane_cp02_ParamLimits

0xa5ef,	// (0x00058ee2) input_focus_pane_cp02

0xa602,	// (0x00058ef5) wml_selection_box_pane_g1

0xa60b,	// (0x00058efe) wml_selection_box_pane_t1_ParamLimits

0xa60b,	// (0x00058efe) wml_selection_box_pane_t1

0xa0c9,	// (0x000589bc) bg_wml_button_pane_ParamLimits

0xa0c9,	// (0x000589bc) bg_wml_button_pane

0xa623,	// (0x00058f16) wml_button_pane_g1

0xa62b,	// (0x00058f1e) wml_button_pane_t1

0xa623,	// (0x00058f16) wml_button_bg_pane_g1

0xa63b,	// (0x00058f2e) wml_button_bg_pane_g2

0xa643,	// (0x00058f36) wml_button_bg_pane_g3

0xa64b,	// (0x00058f3e) wml_button_bg_pane_g4

0xa653,	// (0x00058f46) wml_button_bg_pane_g5

0xa65b,	// (0x00058f4e) wml_button_bg_pane_g6

0xa663,	// (0x00058f56) wml_button_bg_pane_g7

0xa66b,	// (0x00058f5e) wml_button_bg_pane_g8

0xa673,	// (0x00058f66) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005db6b) wml_button_bg_pane_g

0x218e,	// (0x00050a81) bg_list_pane_cp02

0xacd7,	// (0x000595ca) mce_header_pane_ParamLimits

0xacd7,	// (0x000595ca) mce_header_pane

0xaced,	// (0x000595e0) mce_icon_pane

0xaced,	// (0x000595e0) mce_image_pane

0xacf6,	// (0x000595e9) mce_text_pane_ParamLimits

0xacf6,	// (0x000595e9) mce_text_pane

0x2198,	// (0x00050a8b) scroll_pane_cp03

0xa593,	// (0x00058e86) scroll_pane_cp04

0xad09,	// (0x000595fc) scroll_pane_cp05_ParamLimits

0xad09,	// (0x000595fc) scroll_pane_cp05

0x21a2,	// (0x00050a95) mce_header_field_pane_ParamLimits

0x21a2,	// (0x00050a95) mce_header_field_pane

0x21bb,	// (0x00050aae) mce_header_field_pane_2_ParamLimits

0x21bb,	// (0x00050aae) mce_header_field_pane_2

0x21d1,	// (0x00050ac4) mce_header_field_pane_3

0x21d9,	// (0x00050acc) list_single_mce_message_pane_ParamLimits

0x21d9,	// (0x00050acc) list_single_mce_message_pane

0x21f2,	// (0x00050ae5) list_single_mce_smart_pane_ParamLimits

0x21f2,	// (0x00050ae5) list_single_mce_smart_pane

0xad15,	// (0x00059608) input_focus_pane_cp03

0xad1e,	// (0x00059611) list_header_data_pane

0x2216,	// (0x00050b09) mce_header_field_pane_t1

0x2226,	// (0x00050b19) list_single_mce_header_pane_ParamLimits

0x2226,	// (0x00050b19) list_single_mce_header_pane

0xad26,	// (0x00059619) list_single_mce_header_pane_t1

0xad35,	// (0x00059628) list_single_mce_message_pane_g1

0xad3d,	// (0x00059630) list_single_mce_message_pane_t1

0x2260,	// (0x00050b53) bg_cale_heading_pane_cp01_ParamLimits

0x2260,	// (0x00050b53) bg_cale_heading_pane_cp01

0xad4b,	// (0x0005963e) bg_cale_pane_cp02_ParamLimits

0xad4b,	// (0x0005963e) bg_cale_pane_cp02

0x22a7,	// (0x00050b9a) cale_month_corner_pane

0x22c6,	// (0x00050bb9) cale_month_day_heading_pane_ParamLimits

0x22c6,	// (0x00050bb9) cale_month_day_heading_pane

0x2325,	// (0x00050c18) cale_month_pane_g1_ParamLimits

0x2325,	// (0x00050c18) cale_month_pane_g1

0x2361,	// (0x00050c54) cale_month_pane_g2_ParamLimits

0x2361,	// (0x00050c54) cale_month_pane_g2

0x239d,	// (0x00050c90) cale_month_pane_g3_ParamLimits

0x239d,	// (0x00050c90) cale_month_pane_g3

0x23f1,	// (0x00050ce4) cale_month_pane_g4_ParamLimits

0x23f1,	// (0x00050ce4) cale_month_pane_g4

0x2445,	// (0x00050d38) cale_month_pane_g5_ParamLimits

0x2445,	// (0x00050d38) cale_month_pane_g5

0x24a1,	// (0x00050d94) cale_month_pane_g6_ParamLimits

0x24a1,	// (0x00050d94) cale_month_pane_g6

0x2505,	// (0x00050df8) cale_month_pane_g7_ParamLimits

0x2505,	// (0x00050df8) cale_month_pane_g7

0x2571,	// (0x00050e64) cale_month_pane_g8_ParamLimits

0x2571,	// (0x00050e64) cale_month_pane_g8

0x25dd,	// (0x00050ed0) cale_month_pane_g9_ParamLimits

0x25dd,	// (0x00050ed0) cale_month_pane_g9

0x263b,	// (0x00050f2e) cale_month_pane_g10_ParamLimits

0x263b,	// (0x00050f2e) cale_month_pane_g10

0x268d,	// (0x00050f80) cale_month_pane_g11_ParamLimits

0x268d,	// (0x00050f80) cale_month_pane_g11

0x26df,	// (0x00050fd2) cale_month_pane_g12_ParamLimits

0x26df,	// (0x00050fd2) cale_month_pane_g12

0x2737,	// (0x0005102a) cale_month_pane_g13_ParamLimits

0x2737,	// (0x0005102a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005db7e) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005db7e) cale_month_pane_g

0x278f,	// (0x00051082) cale_month_week_pane

0x27b3,	// (0x000510a6) grid_cale_month_pane_ParamLimits

0x27b3,	// (0x000510a6) grid_cale_month_pane

0x2809,	// (0x000510fc) cale_month_day_heading_pane_t1

0x288f,	// (0x00051182) cale_month_day_heading_pane_t2

0x2920,	// (0x00051213) cale_month_day_heading_pane_t3

0x29b1,	// (0x000512a4) cale_month_day_heading_pane_t4

0x2a42,	// (0x00051335) cale_month_day_heading_pane_t5

0x2ae3,	// (0x000513d6) cale_month_day_heading_pane_t6

0x2b88,	// (0x0005147b) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005db99) cale_month_day_heading_pane_t

0xa381,	// (0x00058c74) bg_cale_side_pane_cp01

0x2c31,	// (0x00051524) cale_month_week_pane_t1

0x2c4a,	// (0x0005153d) cale_month_week_pane_t2

0x2c63,	// (0x00051556) cale_month_week_pane_t3

0x2c7c,	// (0x0005156f) cale_month_week_pane_t4

0x2c95,	// (0x00051588) cale_month_week_pane_t5

0x2cae,	// (0x000515a1) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005dba8) cale_month_week_pane_t

0x2ccd,	// (0x000515c0) cell_cale_month_pane_ParamLimits

0x2ccd,	// (0x000515c0) cell_cale_month_pane

0xa67b,	// (0x00058f6e) cell_cale_month_pane_g1

0x2df7,	// (0x000516ea) cell_cale_month_pane_t1_ParamLimits

0x2df7,	// (0x000516ea) cell_cale_month_pane_t1

0xa38f,	// (0x00058c82) grid_highlight_pane_cp08

0xa229,	// (0x00058b1c) main_smil_g1

0x2e17,	// (0x0005170a) smil_status_pane

0xad8a,	// (0x0005967d) smil_text_pane

0xc5dc,	// (0x0005aecf) bg_popup_call3_rect_pane_g8

0xc5e4,	// (0x0005aed7) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0005de68) bg_popup_call3_rect_pane_g

0xc872,	// (0x0005b165) smil_status_volume_pane_g1

0x2e2a,	// (0x0005171d) smil_status_pane_t1

0xa779,	// (0x0005906c) volume_smil_pane

0xad94,	// (0x00059687) list_smil_text_pane

0x2e43,	// (0x00051736) scroll_pane_cp011

0x2e4e,	// (0x00051741) smil_text_list_pane_t1_ParamLimits

0x2e4e,	// (0x00051741) smil_text_list_pane_t1

0xa687,	// (0x00058f7a) aid_volume_smil_ParamLimits

0xa687,	// (0x00058f7a) aid_volume_smil

0xa229,	// (0x00058b1c) smil_volume_pane_g1

0xa229,	// (0x00058b1c) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0005dbcf) smil_volume_pane_g

0x1184,	// (0x0004fa77) listscroll_cale_day_pane

0xad9e,	// (0x00059691) bg_cale_pane

0xadb6,	// (0x000596a9) list_cale_pane

0xadd9,	// (0x000596cc) scroll_pane_cp09

0xadea,	// (0x000596dd) cale_bg_pane_g1

0xadf2,	// (0x000596e5) cale_bg_pane_g2

0xadfa,	// (0x000596ed) cale_bg_pane_g3

0xae02,	// (0x000596f5) cale_bg_pane_g4

0xae0a,	// (0x000596fd) cale_bg_pane_g5

0xae12,	// (0x00059705) cale_bg_pane_g6

0xae1a,	// (0x0005970d) cale_bg_pane_g7

0xae22,	// (0x00059715) cale_bg_pane_g8

0xae2a,	// (0x0005971d) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0005dbd4) cale_bg_pane_g

0x2e87,	// (0x0005177a) list_cale_time_pane_ParamLimits

0x2e87,	// (0x0005177a) list_cale_time_pane

0xae3a,	// (0x0005972d) list_cale_time_pane_g1_ParamLimits

0xae3a,	// (0x0005972d) list_cale_time_pane_g1

0xae46,	// (0x00059739) list_cale_time_pane_g2_ParamLimits

0xae46,	// (0x00059739) list_cale_time_pane_g2

0x2e9b,	// (0x0005178e) list_cale_time_pane_g3_ParamLimits

0x2e9b,	// (0x0005178e) list_cale_time_pane_g3

0x2ea9,	// (0x0005179c) list_cale_time_pane_g4_ParamLimits

0x2ea9,	// (0x0005179c) list_cale_time_pane_g4

0x2eb7,	// (0x000517aa) list_cale_time_pane_g5_ParamLimits

0x2eb7,	// (0x000517aa) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0005dbe7) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0005dbe7) list_cale_time_pane_g

0xae60,	// (0x00059753) list_cale_time_pane_t1_ParamLimits

0xae60,	// (0x00059753) list_cale_time_pane_t1

0xae88,	// (0x0005977b) list_cale_time_pane_t2_ParamLimits

0xae88,	// (0x0005977b) list_cale_time_pane_t2

0x3185,	// (0x00051a78) aid_blid_cardinal_pane

0x31c3,	// (0x00051ab6) compass_pane_t4

0xaeb0,	// (0x000597a3) list_cale_time_pane_t4_ParamLimits

0xaeb0,	// (0x000597a3) list_cale_time_pane_t4

0x31d1,	// (0x00051ac4) compass_pane_t5

0x31df,	// (0x00051ad2) compass_pane_t6

0x31ed,	// (0x00051ae0) compass_pane_t7

0xb2ca,	// (0x00059bbd) navi_pane_cc_t1

0xb417,	// (0x00059d0a) aid_phob_thumbnail_center_pane

0x3960,	// (0x00052253) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0005dbf4) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0005dbf4) list_cale_time_pane_t

0x9ac5,	// (0x000583b8) bg_popup_window_pane_cp02_ParamLimits

0x9ac5,	// (0x000583b8) bg_popup_window_pane_cp02

0xaed8,	// (0x000597cb) heading_pane_cp01_ParamLimits

0xaed8,	// (0x000597cb) heading_pane_cp01

0xaee4,	// (0x000597d7) loc_req_pane_ParamLimits

0xaee4,	// (0x000597d7) loc_req_pane

0xaef4,	// (0x000597e7) loc_type_pane_ParamLimits

0xaef4,	// (0x000597e7) loc_type_pane

0xaf06,	// (0x000597f9) loc_type_pane_t1_ParamLimits

0xaf06,	// (0x000597f9) loc_type_pane_t1

0xaf18,	// (0x0005980b) loc_type_pane_t2_ParamLimits

0xaf18,	// (0x0005980b) loc_type_pane_t2

0xaf2a,	// (0x0005981d) loc_type_pane_t3_ParamLimits

0xaf2a,	// (0x0005981d) loc_type_pane_t3

0x0002,

0xf308,	// (0x0005dbfb) loc_type_pane_t_ParamLimits

0xf308,	// (0x0005dbfb) loc_type_pane_t

0xaf3c,	// (0x0005982f) list_loc_req_pane

0xaf46,	// (0x00059839) scroll_pane_cp012

0x2ec5,	// (0x000517b8) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ec5,	// (0x000517b8) list_single_loc_request_popup_menu_pane

0xaf51,	// (0x00059844) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf51,	// (0x00059844) list_single_loc_request_popup_menu_pane_g1

0xaf5d,	// (0x00059850) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf5d,	// (0x00059850) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0005dc02) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0005dc02) list_single_loc_request_popup_menu_pane_g

0xaf69,	// (0x0005985c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf69,	// (0x0005985c) list_single_loc_request_popup_menu_pane_t1

0xa0c9,	// (0x000589bc) bg_popup_window_pane_cp03_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_window_pane_cp03

0xaf7f,	// (0x00059872) heading_loc_req_pane_ParamLimits

0xaf7f,	// (0x00059872) heading_loc_req_pane

0x2ed2,	// (0x000517c5) popup_dyc_status_message_window_g1_ParamLimits

0x2ed2,	// (0x000517c5) popup_dyc_status_message_window_g1

0x2ee6,	// (0x000517d9) popup_dyc_status_message_window_t1_ParamLimits

0x2ee6,	// (0x000517d9) popup_dyc_status_message_window_t1

0x2efb,	// (0x000517ee) popup_dyc_status_message_window_t2_ParamLimits

0x2efb,	// (0x000517ee) popup_dyc_status_message_window_t2

0x2f10,	// (0x00051803) popup_dyc_status_message_window_t3_ParamLimits

0x2f10,	// (0x00051803) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0005dc07) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0005dc07) popup_dyc_status_message_window_t

0x9e6e,	// (0x00058761) bg_heading_pane_cp01

0xaf8b,	// (0x0005987e) heading_loc_req_pane_g1

0xaf93,	// (0x00059886) heading_loc_req_pane_g2

0xaf9b,	// (0x0005988e) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0005dc0e) heading_loc_req_pane_g

0xafa3,	// (0x00059896) heading_loc_req_pane_t1

0xafb3,	// (0x000598a6) bg_popup_sub_pane_cp01_ParamLimits

0xafb3,	// (0x000598a6) bg_popup_sub_pane_cp01

0xafc1,	// (0x000598b4) popup_cale_events_window_g1_ParamLimits

0xafc1,	// (0x000598b4) popup_cale_events_window_g1

0xafe1,	// (0x000598d4) popup_cale_events_window_g2_ParamLimits

0xafe1,	// (0x000598d4) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0005dc42) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0005dc42) popup_cale_events_window_g

0xb001,	// (0x000598f4) popup_cale_events_window_t1_ParamLimits

0xb001,	// (0x000598f4) popup_cale_events_window_t1

0xb013,	// (0x00059906) popup_cale_events_window_t2_ParamLimits

0xb013,	// (0x00059906) popup_cale_events_window_t2

0xb051,	// (0x00059944) popup_cale_events_window_t3_ParamLimits

0xb051,	// (0x00059944) popup_cale_events_window_t3

0xb08b,	// (0x0005997e) popup_cale_events_window_t4_ParamLimits

0xb08b,	// (0x0005997e) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0005dc47) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0005dc47) popup_cale_events_window_t

0x2f44,	// (0x00051837) call_type_pane

0x2f54,	// (0x00051847) popup_call_status_window_g1

0x2f68,	// (0x0005185b) popup_call_status_window_g2

0x2f7c,	// (0x0005186f) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0005dc50) popup_call_status_window_g

0xb0c1,	// (0x000599b4) call_type_pane_g1

0xb0ca,	// (0x000599bd) call_type_pane_g2

0x0001,

0xf364,	// (0x0005dc57) call_type_pane_g

0x9e6e,	// (0x00058761) bg_popup_sub_pane_cp02

0xb0d3,	// (0x000599c6) listscroll_popup_wml_pane

0xb0db,	// (0x000599ce) list_wml_pane

0xb0e5,	// (0x000599d8) scroll_pane_cp013

0xb0f0,	// (0x000599e3) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f0,	// (0x000599e3) list_single_graphic_popup_wml_pane

0xa229,	// (0x00058b1c) list_single_graphic_popup_wml_pane_g1

0xb104,	// (0x000599f7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0005dc5c) list_single_graphic_popup_wml_pane_g

0xb10c,	// (0x000599ff) list_single_graphic_popup_wml_pane_t1

0xb122,	// (0x00059a15) aid_call_pane

0xa0c1,	// (0x000589b4) popup_clock_analogue_window_g1

0xa0c1,	// (0x000589b4) popup_clock_analogue_window_g2

0xa6a9,	// (0x00058f9c) popup_clock_analogue_window_g3

0xa6a9,	// (0x00058f9c) popup_clock_analogue_window_g4

0xa229,	// (0x00058b1c) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0005dc61) popup_clock_analogue_window_g

0xa6b1,	// (0x00058fa4) popup_clock_analogue_window_t1

0xa6bf,	// (0x00058fb2) clock_digital_number_pane_ParamLimits

0xa6bf,	// (0x00058fb2) clock_digital_number_pane

0xa6cb,	// (0x00058fbe) clock_digital_number_pane_cp02_ParamLimits

0xa6cb,	// (0x00058fbe) clock_digital_number_pane_cp02

0xa6d7,	// (0x00058fca) clock_digital_number_pane_cp03_ParamLimits

0xa6d7,	// (0x00058fca) clock_digital_number_pane_cp03

0xa6e3,	// (0x00058fd6) clock_digital_number_pane_cp04_ParamLimits

0xa6e3,	// (0x00058fd6) clock_digital_number_pane_cp04

0xa6ef,	// (0x00058fe2) clock_digital_separator_pane_ParamLimits

0xa6ef,	// (0x00058fe2) clock_digital_separator_pane

0xa6fb,	// (0x00058fee) popup_clock_digital_window_t1

0xa229,	// (0x00058b1c) clock_digital_number_pane_g1

0xa229,	// (0x00058b1c) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0005dbcf) clock_digital_number_pane_g

0xa229,	// (0x00058b1c) clock_digital_separator_pane_g1

0xa229,	// (0x00058b1c) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0005dbcf) clock_digital_separator_pane_g

0x9e6e,	// (0x00058761) bg_popup_window_pane_cp04

0xb12a,	// (0x00059a1d) heading_pane_cp03

0xb132,	// (0x00059a25) listscroll_popup_gms_pane

0xb13a,	// (0x00059a2d) grid_large_graphic_popup_pane

0xb144,	// (0x00059a37) listscroll_popup_gms_pane_g1

0xb14c,	// (0x00059a3f) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0005dc6c) listscroll_popup_gms_pane_g

0xa593,	// (0x00058e86) scroll_pane_cp014

0x2f8c,	// (0x0005187f) cell_large_graphic_popup_pane_ParamLimits

0x2f8c,	// (0x0005187f) cell_large_graphic_popup_pane

0x2fa4,	// (0x00051897) cell_large_graphic_popup_pane_g1_ParamLimits

0x2fa4,	// (0x00051897) cell_large_graphic_popup_pane_g1

0xb154,	// (0x00059a47) cell_large_graphic_popup_pane_g2_ParamLimits

0xb154,	// (0x00059a47) cell_large_graphic_popup_pane_g2

0xb160,	// (0x00059a53) cell_large_graphic_popup_pane_g3_ParamLimits

0xb160,	// (0x00059a53) cell_large_graphic_popup_pane_g3

0xb16d,	// (0x00059a60) cell_large_graphic_popup_pane_g4_ParamLimits

0xb16d,	// (0x00059a60) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0005dc71) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0005dc71) cell_large_graphic_popup_pane_g

0xb17d,	// (0x00059a70) grid_highlight_pane_cp010

0xa229,	// (0x00058b1c) bg_popup_call_pane_g1

0xb187,	// (0x00059a7a) list_single_graphic_popup_conf_pane_ParamLimits

0xb187,	// (0x00059a7a) list_single_graphic_popup_conf_pane

0xb199,	// (0x00059a8c) list_highlight_pane_cp01

0xb1a2,	// (0x00059a95) list_single_graphic_popup_conf_pane_g1

0xb1aa,	// (0x00059a9d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0005dc7a) list_single_graphic_popup_conf_pane_g

0xb1b2,	// (0x00059aa5) list_single_graphic_popup_conf_pane_t1

0xb1c0,	// (0x00059ab3) linegrid_cams_pane_g1

0x2fb0,	// (0x000518a3) linegrid_cams_pane_g2

0xa3c2,	// (0x00058cb5) linegrid_cams_pane_g3

0xb1c9,	// (0x00059abc) linegrid_cams_pane_g4

0x2fb9,	// (0x000518ac) linegrid_cams_pane_g5

0x2fc2,	// (0x000518b5) linegrid_cams_pane_g6

0xa3cb,	// (0x00058cbe) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0005dc7f) linegrid_cams_pane_g

0xb1d2,	// (0x00059ac5) popup_clock_analogue_window

0xb1d2,	// (0x00059ac5) popup_clock_digital_window

0x9e6e,	// (0x00058761) popup_phob_thumbnail_window

0xa229,	// (0x00058b1c) call_video_uplink_pane_g1

0xb1db,	// (0x00059ace) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0005dc8e) call_video_uplink_pane_g

0xb1e3,	// (0x00059ad6) video_uplink_pane

0xb1eb,	// (0x00059ade) mce_image_pane_g1

0x2fcd,	// (0x000518c0) mce_image_pane_g2

0x2fd7,	// (0x000518ca) mce_image_pane_g3

0x2fe1,	// (0x000518d4) mce_image_pane_g4

0x2fe9,	// (0x000518dc) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0005dc93) mce_image_pane_g

0xb1f5,	// (0x00059ae8) control_top_pane_stacon_cp01_ParamLimits

0xb1f5,	// (0x00059ae8) control_top_pane_stacon_cp01

0xb209,	// (0x00059afc) uni_indicator_pane_stacon_cp01_ParamLimits

0xb209,	// (0x00059afc) uni_indicator_pane_stacon_cp01

0xb21a,	// (0x00059b0d) bg_popup_sub_pane_cp03

0x2ff1,	// (0x000518e4) chi_dic_find_pane

0x2ff9,	// (0x000518ec) listscroll_chi_dic_pane

0x3002,	// (0x000518f5) main_pane_chidic_g1

0x3015,	// (0x00051908) chi_dic_find_pane_t1

0xb224,	// (0x00059b17) find_chidic_pane

0xb22d,	// (0x00059b20) chi_dic_list_pane_ParamLimits

0xb22d,	// (0x00059b20) chi_dic_list_pane

0xb23e,	// (0x00059b31) scroll_pane_cp020

0x3023,	// (0x00051916) find_chidic_pane_t1

0x9e6e,	// (0x00058761) input_focus_pane_cp06

0x0e08,	// (0x0004f6fb) list_chi_dic_pane_ParamLimits

0x0e08,	// (0x0004f6fb) list_chi_dic_pane

0x3032,	// (0x00051925) list_chi_dic_pane_t1_ParamLimits

0x3032,	// (0x00051925) list_chi_dic_pane_t1

0x9e6e,	// (0x00058761) list_highlight_pane_cp020

0xb246,	// (0x00059b39) bg_cale_heading_pane_g1

0x3045,	// (0x00051938) bg_cale_heading_pane_g2

0x304d,	// (0x00051940) bg_cale_heading_pane_g3

0x3055,	// (0x00051948) bg_cale_heading_pane_g4

0x305f,	// (0x00051952) bg_cale_heading_pane_g5

0x3069,	// (0x0005195c) bg_cale_heading_pane_g6

0x3071,	// (0x00051964) bg_cale_heading_pane_g7

0x3079,	// (0x0005196c) bg_cale_heading_pane_g8

0x3083,	// (0x00051976) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0005dc9e) bg_cale_heading_pane_g

0xb246,	// (0x00059b39) bg_cale_side_pane_g1

0x308d,	// (0x00051980) bg_cale_side_pane_g2

0x3097,	// (0x0005198a) bg_cale_side_pane_g3

0x30a1,	// (0x00051994) bg_cale_side_pane_g4

0x30ab,	// (0x0005199e) bg_cale_side_pane_g5

0x30b5,	// (0x000519a8) bg_cale_side_pane_g6

0x30bf,	// (0x000519b2) bg_cale_side_pane_g7

0x30c9,	// (0x000519bc) bg_cale_side_pane_g8

0x30d1,	// (0x000519c4) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0005dcb1) bg_cale_side_pane_g

0x30d9,	// (0x000519cc) popup_call_status_window_ParamLimits

0x30d9,	// (0x000519cc) popup_call_status_window

0xb24e,	// (0x00059b41) stacon_top_pane

0xb256,	// (0x00059b49) status_pane_ParamLimits

0xb256,	// (0x00059b49) status_pane

0xb26b,	// (0x00059b5e) status_small_pane

0xb273,	// (0x00059b66) control_pane

0x9e6e,	// (0x00058761) stacon_bottom_pane

0xb27b,	// (0x00059b6e) list_single_mce_smart_pane_t1_ParamLimits

0xb27b,	// (0x00059b6e) list_single_mce_smart_pane_t1

0xb28e,	// (0x00059b81) list_single_mce_smart_pane_t2_ParamLimits

0xb28e,	// (0x00059b81) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0005dcc4) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0005dcc4) list_single_mce_smart_pane_t

0x3126,	// (0x00051a19) compass_pane

0x3131,	// (0x00051a24) main_location2_pane_t1

0x3145,	// (0x00051a38) main_location2_pane_t2

0x315b,	// (0x00051a4e) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0005dcc9) main_location2_pane_t

0xb2ad,	// (0x00059ba0) compass_pane_g1_ParamLimits

0xb2ad,	// (0x00059ba0) compass_pane_g1

0x31a5,	// (0x00051a98) compass_pane_t1

0x31b4,	// (0x00051aa7) compass_pane_t2

0x0005,

0xf3df,	// (0x0005dcd2) compass_pane_t

0x31fb,	// (0x00051aee) text_secondary_cp61

0xb2c1,	// (0x00059bb4) navi_pane_cams_g5

0xb2e4,	// (0x00059bd7) navi_pane_im_t1

0xb2f2,	// (0x00059be5) navi_pane_mp_g1_ParamLimits

0xb2f2,	// (0x00059be5) navi_pane_mp_g1

0xb306,	// (0x00059bf9) navi_pane_mp_g2_ParamLimits

0xb306,	// (0x00059bf9) navi_pane_mp_g2

0xb312,	// (0x00059c05) navi_pane_mp_g3_ParamLimits

0xb312,	// (0x00059c05) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0005dce6) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0005dce6) navi_pane_mp_g

0xb31e,	// (0x00059c11) navi_pane_mp_t1

0xb32c,	// (0x00059c1f) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0005dced) navi_pane_mp_t

0xb368,	// (0x00059c5b) navi_pane_vt_g1

0xb31e,	// (0x00059c11) navi_pane_vt_t1

0xb370,	// (0x00059c63) navi_slider_pane

0xa3dc,	// (0x00058ccf) zooming_pane

0xb378,	// (0x00059c6b) navi_slider_pane_g1

0xa718,	// (0x0005900b) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0005dcf4) navi_slider_pane_g

0xb39c,	// (0x00059c8f) aid_levels_zoom

0xb3a4,	// (0x00059c97) zooming_pane_g1

0xb3ac,	// (0x00059c9f) zooming_pane_g2

0xb3ac,	// (0x00059c9f) zooming_pane_g3

0x0002,

0xf410,	// (0x0005dd03) zooming_pane_g

0xb3b4,	// (0x00059ca7) level_10_zoom

0xb3bd,	// (0x00059cb0) level_11_zoom

0xb3c6,	// (0x00059cb9) level_1_zoom

0xb3cf,	// (0x00059cc2) level_2_zoom

0xb3d8,	// (0x00059ccb) level_3_zoom

0xb3e1,	// (0x00059cd4) level_4_zoom

0xb3ea,	// (0x00059cdd) level_5_zoom

0xb3f3,	// (0x00059ce6) level_6_zoom

0xb3fc,	// (0x00059cef) level_7_zoom

0xb405,	// (0x00059cf8) level_8_zoom

0xb40e,	// (0x00059d01) level_9_zoom

0xb41f,	// (0x00059d12) popup_phob_thumbnail_window_g1

0xb427,	// (0x00059d1a) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0005dd0a) popup_phob_thumbnail_window_g

0xc742,	// (0x0005b035) level_1_location

0xc74a,	// (0x0005b03d) level_2_location

0xc752,	// (0x0005b045) level_3_location

0xc75a,	// (0x0005b04d) level_4_location

0xa3dc,	// (0x00058ccf) level_5_location

0x3344,	// (0x00051c37) mce_icon_pane_g1

0x334e,	// (0x00051c41) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0005dd0f) mce_icon_pane_g

0x3356,	// (0x00051c49) main_mup_pane_g1_ParamLimits

0x3356,	// (0x00051c49) main_mup_pane_g1

0x336c,	// (0x00051c5f) main_mup_pane_g2_ParamLimits

0x336c,	// (0x00051c5f) main_mup_pane_g2

0x3384,	// (0x00051c77) main_mup_pane_g3_ParamLimits

0x3384,	// (0x00051c77) main_mup_pane_g3

0x339c,	// (0x00051c8f) main_mup_pane_g4_ParamLimits

0x339c,	// (0x00051c8f) main_mup_pane_g4

0x33b4,	// (0x00051ca7) main_mup_pane_g5_ParamLimits

0x33b4,	// (0x00051ca7) main_mup_pane_g5

0x33d0,	// (0x00051cc3) main_mup_pane_g6_ParamLimits

0x33d0,	// (0x00051cc3) main_mup_pane_g6

0x33ea,	// (0x00051cdd) main_mup_pane_g7_ParamLimits

0x33ea,	// (0x00051cdd) main_mup_pane_g7

0x3408,	// (0x00051cfb) main_mup_pane_g8_ParamLimits

0x3408,	// (0x00051cfb) main_mup_pane_g8

0x3426,	// (0x00051d19) main_mup_pane_g9_ParamLimits

0x3426,	// (0x00051d19) main_mup_pane_g9

0x3442,	// (0x00051d35) main_mup_pane_g10_ParamLimits

0x3442,	// (0x00051d35) main_mup_pane_g10

0x3460,	// (0x00051d53) main_mup_pane_g11_ParamLimits

0x3460,	// (0x00051d53) main_mup_pane_g11

0x347a,	// (0x00051d6d) main_mup_pane_g12_ParamLimits

0x347a,	// (0x00051d6d) main_mup_pane_g12

0x3490,	// (0x00051d83) main_mup_pane_g13_ParamLimits

0x3490,	// (0x00051d83) main_mup_pane_g13

0x000c,

0xf421,	// (0x0005dd14) main_mup_pane_g_ParamLimits

0xf421,	// (0x0005dd14) main_mup_pane_g

0x34a4,	// (0x00051d97) main_mup_pane_t1_ParamLimits

0x34a4,	// (0x00051d97) main_mup_pane_t1

0x34c0,	// (0x00051db3) main_mup_pane_t2_ParamLimits

0x34c0,	// (0x00051db3) main_mup_pane_t2

0x34d8,	// (0x00051dcb) main_mup_pane_t3_ParamLimits

0x34d8,	// (0x00051dcb) main_mup_pane_t3

0x34f0,	// (0x00051de3) main_mup_pane_t4_ParamLimits

0x34f0,	// (0x00051de3) main_mup_pane_t4

0x350e,	// (0x00051e01) main_mup_pane_t5_ParamLimits

0x350e,	// (0x00051e01) main_mup_pane_t5

0x3523,	// (0x00051e16) main_mup_pane_t6_ParamLimits

0x3523,	// (0x00051e16) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0005dd2f) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0005dd2f) main_mup_pane_t

0x3535,	// (0x00051e28) mup_progress_pane_ParamLimits

0x3535,	// (0x00051e28) mup_progress_pane

0x3541,	// (0x00051e34) mup_visualizer_pane_ParamLimits

0x3541,	// (0x00051e34) mup_visualizer_pane

0x3575,	// (0x00051e68) mup_volume_pane_ParamLimits

0x3575,	// (0x00051e68) mup_volume_pane

0xb42f,	// (0x00059d22) mup_visualizer_pane_g1_ParamLimits

0xb42f,	// (0x00059d22) mup_visualizer_pane_g1

0xb42f,	// (0x00059d22) mup_visualizer_pane_g2_ParamLimits

0xb42f,	// (0x00059d22) mup_visualizer_pane_g2

0xb2ad,	// (0x00059ba0) mup_visualizer_pane_g3_ParamLimits

0xb2ad,	// (0x00059ba0) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0005dd3c) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0005dd3c) mup_visualizer_pane_g

0xa229,	// (0x00058b1c) mup_volume_pane_g1

0xb445,	// (0x00059d38) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0005dd43) mup_volume_pane_g

0xa229,	// (0x00058b1c) mup_progress_pane_g1

0xb44e,	// (0x00059d41) mup_progress_pane_g2

0xb457,	// (0x00059d4a) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0005dd48) mup_progress_pane_g

0x9e6e,	// (0x00058761) bg_popup_window_pane_cp05

0xb460,	// (0x00059d53) heading_pane_cp02_ParamLimits

0xb460,	// (0x00059d53) heading_pane_cp02

0xb47c,	// (0x00059d6f) list_popup_blid_pane

0xb484,	// (0x00059d77) list_blid_sat_info_pane_ParamLimits

0xb484,	// (0x00059d77) list_blid_sat_info_pane

0xb497,	// (0x00059d8a) list_blid_sat_info_pane_g1

0xb49f,	// (0x00059d92) list_blid_sat_info_pane_t1

0x369f,	// (0x00051f92) mup_equalizer_pane_ParamLimits

0x369f,	// (0x00051f92) mup_equalizer_pane

0x36c0,	// (0x00051fb3) mup_equalizer_pane_cp1_ParamLimits

0x36c0,	// (0x00051fb3) mup_equalizer_pane_cp1

0x36e1,	// (0x00051fd4) mup_equalizer_pane_cp2_ParamLimits

0x36e1,	// (0x00051fd4) mup_equalizer_pane_cp2

0x3706,	// (0x00051ff9) mup_equalizer_pane_cp3_ParamLimits

0x3706,	// (0x00051ff9) mup_equalizer_pane_cp3

0x372f,	// (0x00052022) mup_equalizer_pane_cp4_ParamLimits

0x372f,	// (0x00052022) mup_equalizer_pane_cp4

0x3758,	// (0x0005204b) mup_equalizer_pane_cp5

0x3770,	// (0x00052063) mup_equalizer_pane_cp6

0x3788,	// (0x0005207b) mup_equalizer_pane_cp7

0xc65c,	// (0x0005af4f) bg_popup_call_poc_act_pane_g9

0xc664,	// (0x0005af57) bg_popup_call_poc_act_pane_g10

0xc66c,	// (0x0005af5f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0c9,	// (0x000589bc) mup_scale_pane

0xa229,	// (0x00058b1c) mup_scale_pane_g1

0xb4ad,	// (0x00059da0) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0005dd64) mup_scale_pane_g

0xb4d1,	// (0x00059dc4) msg_data_pane

0xb4d9,	// (0x00059dcc) scroll_pane_cp017

0x37b2,	// (0x000520a5) bg_list_pane_cp04_ParamLimits

0x37b2,	// (0x000520a5) bg_list_pane_cp04

0xb4e1,	// (0x00059dd4) msg_data_pane_g1

0x37d2,	// (0x000520c5) msg_data_pane_g2

0x37dc,	// (0x000520cf) msg_data_pane_g3

0x37e6,	// (0x000520d9) msg_data_pane_g4

0x37ee,	// (0x000520e1) msg_data_pane_g5

0x37f6,	// (0x000520e9) msg_data_pane_g6

0x37fe,	// (0x000520f1) msg_data_pane_g7

0x0006,

0xf480,	// (0x0005dd73) msg_data_pane_g

0x3806,	// (0x000520f9) msg_text_pane_ParamLimits

0x3806,	// (0x000520f9) msg_text_pane

0x382e,	// (0x00052121) qrid_highlight_pane_cp011_ParamLimits

0x382e,	// (0x00052121) qrid_highlight_pane_cp011

0x9e6e,	// (0x00058761) msg_body_pane

0x9e6e,	// (0x00058761) msg_header_pane

0xb4f2,	// (0x00059de5) input_focus_pane_cp07

0xb507,	// (0x00059dfa) msg_header_pane_t1_ParamLimits

0xb507,	// (0x00059dfa) msg_header_pane_t1

0x3844,	// (0x00052137) msg_header_pane_t2_ParamLimits

0x3844,	// (0x00052137) msg_header_pane_t2

0x0001,

0xf494,	// (0x0005dd87) msg_header_pane_t_ParamLimits

0xf494,	// (0x0005dd87) msg_header_pane_t

0xb519,	// (0x00059e0c) msg_body_pane_g1

0xfd51,	// (0x0004e644) msg_body_pane_t1_ParamLimits

0xfd51,	// (0x0004e644) msg_body_pane_t1

0x3856,	// (0x00052149) msg_body_pane_t2_ParamLimits

0x3856,	// (0x00052149) msg_body_pane_t2

0x3868,	// (0x0005215b) msg_body_pane_t3_ParamLimits

0x3868,	// (0x0005215b) msg_body_pane_t3

0x0002,

0xf499,	// (0x0005dd8c) msg_body_pane_t_ParamLimits

0xf499,	// (0x0005dd8c) msg_body_pane_t

0x38b4,	// (0x000521a7) main_viewer_pane_g1_ParamLimits

0x38b4,	// (0x000521a7) main_viewer_pane_g1

0x38c2,	// (0x000521b5) main_viewer_pane_g2_ParamLimits

0x38c2,	// (0x000521b5) main_viewer_pane_g2

0x38d0,	// (0x000521c3) main_viewer_pane_g3_ParamLimits

0x38d0,	// (0x000521c3) main_viewer_pane_g3

0x38df,	// (0x000521d2) main_viewer_pane_g4_ParamLimits

0x38df,	// (0x000521d2) main_viewer_pane_g4

0xa742,	// (0x00059035) main_viewer_pane_g5_ParamLimits

0xa742,	// (0x00059035) main_viewer_pane_g5

0xa742,	// (0x00059035) main_viewer_pane_g7_ParamLimits

0xa742,	// (0x00059035) main_viewer_pane_g7

0xa754,	// (0x00059047) main_viewer_pane_g8_ParamLimits

0xa754,	// (0x00059047) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0005dd9c) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005dd9c) main_viewer_pane_g

0xb521,	// (0x00059e14) viewer_content_pane_ParamLimits

0xb521,	// (0x00059e14) viewer_content_pane

0x391d,	// (0x00052210) main_postcard_pane_g1_ParamLimits

0x391d,	// (0x00052210) main_postcard_pane_g1

0x3933,	// (0x00052226) main_postcard_pane_g2_ParamLimits

0x3933,	// (0x00052226) main_postcard_pane_g2

0x3949,	// (0x0005223c) main_postcard_pane_g3_ParamLimits

0x3949,	// (0x0005223c) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0005ddad) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0005ddad) main_postcard_pane_g

0x3960,	// (0x00052253) main_postcard_pane_g4

0xc885,	// (0x0005b178) smil_status_volume_pane_g2

0x39a3,	// (0x00052296) postcard_pane_ParamLimits

0x39a3,	// (0x00052296) postcard_pane

0xb52f,	// (0x00059e22) postcard_pane_g1_ParamLimits

0xb52f,	// (0x00059e22) postcard_pane_g1

0x39f3,	// (0x000522e6) postcard_pane_g2_ParamLimits

0x39f3,	// (0x000522e6) postcard_pane_g2

0x39ff,	// (0x000522f2) postcard_pane_g3_ParamLimits

0x39ff,	// (0x000522f2) postcard_pane_g3

0xb53d,	// (0x00059e30) postcard_pane_g4_ParamLimits

0xb53d,	// (0x00059e30) postcard_pane_g4

0x3a0b,	// (0x000522fe) postcard_pane_g5_ParamLimits

0x3a0b,	// (0x000522fe) postcard_pane_g5

0x3a20,	// (0x00052313) postcard_pane_g6_ParamLimits

0x3a20,	// (0x00052313) postcard_pane_g6

0xb52f,	// (0x00059e22) postcard_pane_g7_ParamLimits

0xb52f,	// (0x00059e22) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0005ddba) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0005ddba) postcard_pane_g

0x3a38,	// (0x0005232b) main_mp2_pane_g1_ParamLimits

0x3a38,	// (0x0005232b) main_mp2_pane_g1

0x3a46,	// (0x00052339) main_mp2_pane_g2_ParamLimits

0x3a46,	// (0x00052339) main_mp2_pane_g2

0x3a52,	// (0x00052345) main_mp2_pane_g3_ParamLimits

0x3a52,	// (0x00052345) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0005ddc9) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0005ddc9) main_mp2_pane_g

0x3a5e,	// (0x00052351) main_mp2_pane_t1_ParamLimits

0x3a5e,	// (0x00052351) main_mp2_pane_t1

0x3a75,	// (0x00052368) main_mp2_pane_t2_ParamLimits

0x3a75,	// (0x00052368) main_mp2_pane_t2

0x3a87,	// (0x0005237a) main_mp2_pane_t3_ParamLimits

0x3a87,	// (0x0005237a) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0005ddd0) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0005ddd0) main_mp2_pane_t

0xb54b,	// (0x00059e3e) pec_content_pane_ParamLimits

0xb54b,	// (0x00059e3e) pec_content_pane

0xa593,	// (0x00058e86) scroll_pane_cp015

0xb55d,	// (0x00059e50) pec_attribute_pane_ParamLimits

0xb55d,	// (0x00059e50) pec_attribute_pane

0x3a99,	// (0x0005238c) pec_content_pane_g1_ParamLimits

0x3a99,	// (0x0005238c) pec_content_pane_g1

0xb56d,	// (0x00059e60) pec_content_pane_t1_ParamLimits

0xb56d,	// (0x00059e60) pec_content_pane_t1

0xb57f,	// (0x00059e72) pec_content_pane_t2_ParamLimits

0xb57f,	// (0x00059e72) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0005ddd7) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0005ddd7) pec_content_pane_t

0x3aa5,	// (0x00052398) list_single_graphic_pane_cp01_ParamLimits

0x3aa5,	// (0x00052398) list_single_graphic_pane_cp01

0xa0c9,	// (0x000589bc) bg_popup_sub_pane_cp04

0xb591,	// (0x00059e84) popup_mup_playback_window_g1

0xb59d,	// (0x00059e90) popup_mup_playback_window_t1

0xb5b2,	// (0x00059ea5) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0005dddc) popup_mup_playback_window_t

0xb5e9,	// (0x00059edc) main_image_pane_g1_ParamLimits

0xb5e9,	// (0x00059edc) main_image_pane_g1

0xb62c,	// (0x00059f1f) scroll_pane_cp018_ParamLimits

0xb62c,	// (0x00059f1f) scroll_pane_cp018

0xb644,	// (0x00059f37) scroll_pane_cp016_ParamLimits

0xb644,	// (0x00059f37) scroll_pane_cp016

0x3b74,	// (0x00052467) smil2_image_pane_ParamLimits

0x3b74,	// (0x00052467) smil2_image_pane

0x3baa,	// (0x0005249d) smil2_root_pane_ParamLimits

0x3baa,	// (0x0005249d) smil2_root_pane

0x3be2,	// (0x000524d5) smil2_text_pane_ParamLimits

0x3be2,	// (0x000524d5) smil2_text_pane

0x9e6e,	// (0x00058761) bg_list_pane_cp06

0xb680,	// (0x00059f73) grid_radio_pane

0x9e6e,	// (0x00058761) bg_popup_window_pane_cp06

0xb68a,	// (0x00059f7d) main_fmradio_pane_t1

0xb12a,	// (0x00059a1d) heading_pane_cp04

0xb698,	// (0x00059f8b) main_fmradio_pane_t2

0xc674,	// (0x0005af67) popup_cale_lunar_info_window_g1

0xb6a6,	// (0x00059f99) main_fmradio_pane_t3

0xc67c,	// (0x0005af6f) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x00059fa9) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x00059fb7) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0005deb7) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0005ddf1) main_fmradio_pane_t

0xb6d2,	// (0x00059fc5) wait_bar_pane_cp03

0xb6da,	// (0x00059fcd) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x00059fcd) cell_fmradio_pane

0xb52f,	// (0x00059e22) cell_fmradio_pane_g1_ParamLimits

0xb52f,	// (0x00059e22) cell_fmradio_pane_g1

0x9e6e,	// (0x00058761) grid_highlight_pane_cp011

0xb6ef,	// (0x00059fe2) poc_content_pane_ParamLimits

0xb6ef,	// (0x00059fe2) poc_content_pane

0xb701,	// (0x00059ff4) scroll_pane_cp019

0x3c72,	// (0x00052565) popup_call_poc_act_window_ParamLimits

0x3c72,	// (0x00052565) popup_call_poc_act_window

0x3c96,	// (0x00052589) popup_call_poc_inact_window_ParamLimits

0x3c96,	// (0x00052589) popup_call_poc_inact_window

0xf59b,	// (0x0005de8e) bg_popup_call_poc_act_pane_g

0xc5ec,	// (0x0005aedf) bg_popup_call_poc_inact_pane_g1

0xc5f4,	// (0x0005aee7) bg_popup_call_poc_inact_pane_g2

0xb709,	// (0x00059ffc) popup_call_poc_act_window_g2

0xc5fc,	// (0x0005aeef) bg_popup_call_poc_inact_pane_g3

0xc604,	// (0x0005aef7) bg_popup_call_poc_inact_pane_g4

0xc60c,	// (0x0005aeff) bg_popup_call_poc_inact_pane_g5

0xb711,	// (0x0005a004) popup_call_poc_act_window_t1_ParamLimits

0xb711,	// (0x0005a004) popup_call_poc_act_window_t1

0xb739,	// (0x0005a02c) popup_call_poc_act_window_t2_ParamLimits

0xb739,	// (0x0005a02c) popup_call_poc_act_window_t2

0xb761,	// (0x0005a054) popup_call_poc_act_window_t3_ParamLimits

0xb761,	// (0x0005a054) popup_call_poc_act_window_t3

0xb789,	// (0x0005a07c) popup_call_poc_act_window_t4_ParamLimits

0xb789,	// (0x0005a07c) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0005ddfc) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0005ddfc) popup_call_poc_act_window_t

0xc614,	// (0x0005af07) bg_popup_call_poc_inact_pane_g6

0xc61c,	// (0x0005af0f) bg_popup_call_poc_inact_pane_g7

0xc624,	// (0x0005af17) bg_popup_call_poc_inact_pane_g8

0xb79b,	// (0x0005a08e) popup_call_poc_inact_window_g2

0xc62c,	// (0x0005af1f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0005de7b) bg_popup_call_poc_inact_pane_g

0xb7a3,	// (0x0005a096) popup_call_poc_inact_window_t1_ParamLimits

0xb7a3,	// (0x0005a096) popup_call_poc_inact_window_t1

0xb7b8,	// (0x0005a0ab) popup_call_poc_inact_window_t2_ParamLimits

0xb7b8,	// (0x0005a0ab) popup_call_poc_inact_window_t2

0xb7cd,	// (0x0005a0c0) popup_call_poc_inact_window_t3_ParamLimits

0xb7cd,	// (0x0005a0c0) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0005de05) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0005de05) popup_call_poc_inact_window_t

0xc7f8,	// (0x0005b0eb) context_pane_ParamLimits

0x453e,	// (0x00052e31) signal_pane_ParamLimits

0xa3dc,	// (0x00058ccf) main_call2_pane

0xc7e6,	// (0x0005b0d9) popup_phob_thumbnail2_window_ParamLimits

0xc7e6,	// (0x0005b0d9) popup_phob_thumbnail2_window

0xa72a,	// (0x0005901d) aid_hotspot_pointer_arrow_pane

0xa732,	// (0x00059025) aid_hotspot_pointer_hand_pane

0x3ffe,	// (0x000528f1) phob_pre_status_pane_g5

0x1a26,	// (0x00050319) cams_zoom_pane_ParamLimits

0x1a35,	// (0x00050328) image_vga_pane_ParamLimits

0x1a4f,	// (0x00050342) main_camera_pane_g1_ParamLimits

0x1a61,	// (0x00050354) main_camera_pane_g2_ParamLimits

0x1a71,	// (0x00050364) main_camera_pane_g3_ParamLimits

0x1a85,	// (0x00050378) main_camera_pane_g4_ParamLimits

0x1a99,	// (0x0005038c) main_camera_pane_g5_ParamLimits

0x1aad,	// (0x000503a0) main_camera_pane_g6_ParamLimits

0x1ac1,	// (0x000503b4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005dafd) main_camera_pane_g_ParamLimits

0x1ad5,	// (0x000503c8) main_camera_pane_t1_ParamLimits

0x1aeb,	// (0x000503de) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005db0e) main_camera_pane_t_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_preview_window_pane_cp01

0xb7e2,	// (0x0005a0d5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e2,	// (0x0005a0d5) popup_phob_thumbnail2_window_g1

0x9e6e,	// (0x00058761) call2_cli_visual_pane

0x3cca,	// (0x000525bd) popup_call2_audio_conf_window_ParamLimits

0x3cca,	// (0x000525bd) popup_call2_audio_conf_window

0x3cf2,	// (0x000525e5) popup_call2_audio_first_window_ParamLimits

0x3cf2,	// (0x000525e5) popup_call2_audio_first_window

0x3d88,	// (0x0005267b) popup_call2_audio_in_window_ParamLimits

0x3d88,	// (0x0005267b) popup_call2_audio_in_window

0x3dd4,	// (0x000526c7) popup_call2_audio_out_window_ParamLimits

0x3dd4,	// (0x000526c7) popup_call2_audio_out_window

0x3e46,	// (0x00052739) popup_call2_audio_second_window_ParamLimits

0x3e46,	// (0x00052739) popup_call2_audio_second_window

0x3eac,	// (0x0005279f) popup_call2_audio_wait_window_ParamLimits

0x3eac,	// (0x0005279f) popup_call2_audio_wait_window

0x9e6e,	// (0x00058761) bg_popup_call2_act_pane_cp03

0xa0ab,	// (0x0005899e) list_conf_pane_cp

0xb7ee,	// (0x0005a0e1) popup_call2_audio_conf_window_t1

0xb7fc,	// (0x0005a0ef) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fc,	// (0x0005a0ef) list_single_graphic_popup_conf2_pane

0xb199,	// (0x00059a8c) list_highlight_pane_cp04

0xb80f,	// (0x0005a102) list_single_graphic_popup_conf2_pane_g1

0xb1aa,	// (0x00059a9d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0005de0c) list_single_graphic_popup_conf2_pane_g

0xb819,	// (0x0005a10c) list_single_graphic_popup_conf2_pane_t1

0xb827,	// (0x0005a11a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb827,	// (0x0005a11a) bg_popup_call2_act_pane_cp01

0xb8b1,	// (0x0005a1a4) call_type_pane_cp05_ParamLimits

0xb8b1,	// (0x0005a1a4) call_type_pane_cp05

0xb905,	// (0x0005a1f8) popup_call2_audio_second_window_g1_ParamLimits

0xb905,	// (0x0005a1f8) popup_call2_audio_second_window_g1

0xb959,	// (0x0005a24c) popup_call2_audio_second_window_g2_ParamLimits

0xb959,	// (0x0005a24c) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0005de11) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0005de11) popup_call2_audio_second_window_g

0xb9be,	// (0x0005a2b1) popup_call2_audio_second_window_t1_ParamLimits

0xb9be,	// (0x0005a2b1) popup_call2_audio_second_window_t1

0xba79,	// (0x0005a36c) popup_call2_audio_second_window_t2_ParamLimits

0xba79,	// (0x0005a36c) popup_call2_audio_second_window_t2

0xbacc,	// (0x0005a3bf) popup_call2_audio_second_window_t3_ParamLimits

0xbacc,	// (0x0005a3bf) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0005de18) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0005de18) popup_call2_audio_second_window_t

0x9e6e,	// (0x00058761) bg_popup_call2_in_pane_cp02

0x9e78,	// (0x0005876b) call_type_pane_cp04

0x9e80,	// (0x00058773) popup_call2_audio_wait_window_g1

0x9e88,	// (0x0005877b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005d9ec) popup_call2_audio_wait_window_g

0x9e90,	// (0x00058783) popup_call2_audio_wait_window_t3

0xbbbf,	// (0x0005a4b2) bg_popup_call2_act_pane_ParamLimits

0xbbbf,	// (0x0005a4b2) bg_popup_call2_act_pane

0xbc7f,	// (0x0005a572) call_type_pane_cp03_ParamLimits

0xbc7f,	// (0x0005a572) call_type_pane_cp03

0xbce3,	// (0x0005a5d6) popup_call2_audio_first_window_g1_ParamLimits

0xbce3,	// (0x0005a5d6) popup_call2_audio_first_window_g1

0xbd53,	// (0x0005a646) popup_call2_audio_first_window_g2_ParamLimits

0xbd53,	// (0x0005a646) popup_call2_audio_first_window_g2

0xb42f,	// (0x00059d22) popup_call2_audio_first_window_g3_ParamLimits

0xb42f,	// (0x00059d22) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0005de21) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0005de21) popup_call2_audio_first_window_g

0xbe31,	// (0x0005a724) popup_call2_audio_first_window_t1_ParamLimits

0xbe31,	// (0x0005a724) popup_call2_audio_first_window_t1

0xbf34,	// (0x0005a827) popup_call2_audio_first_window_t4_ParamLimits

0xbf34,	// (0x0005a827) popup_call2_audio_first_window_t4

0xc017,	// (0x0005a90a) popup_call2_audio_first_window_t5_ParamLimits

0xc017,	// (0x0005a90a) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0005de2c) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0005de2c) popup_call2_audio_first_window_t

0xa0c1,	// (0x000589b4) bg_popup_call2_act_pane_g1

0xc686,	// (0x0005af79) popup_cale_lunar_info_window_t1

0xc694,	// (0x0005af87) popup_cale_lunar_info_window_t2

0xc6a2,	// (0x0005af95) popup_cale_lunar_info_window_t3

0x9e6e,	// (0x00058761) bg_popup_call2_bubble_pane

0xc118,	// (0x0005aa0b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc118,	// (0x0005aa0b) bg_popup_call2_in_pane_cp01

0x9b4a,	// (0x0005843d) call_type_pane_cp02

0xc160,	// (0x0005aa53) popup_call2_audio_out_window_g1_ParamLimits

0xc160,	// (0x0005aa53) popup_call2_audio_out_window_g1

0xc18c,	// (0x0005aa7f) popup_call2_audio_out_window_g2_ParamLimits

0xc18c,	// (0x0005aa7f) popup_call2_audio_out_window_g2

0xc1b4,	// (0x0005aaa7) popup_call2_audio_out_window_g3_ParamLimits

0xc1b4,	// (0x0005aaa7) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0005de35) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0005de35) popup_call2_audio_out_window_g

0xc1ef,	// (0x0005aae2) popup_call2_audio_out_window_t1_ParamLimits

0xc1ef,	// (0x0005aae2) popup_call2_audio_out_window_t1

0xc24e,	// (0x0005ab41) popup_call2_audio_out_window_t2_ParamLimits

0xc24e,	// (0x0005ab41) popup_call2_audio_out_window_t2

0xc2a2,	// (0x0005ab95) popup_call2_audio_out_window_t3_ParamLimits

0xc2a2,	// (0x0005ab95) popup_call2_audio_out_window_t3

0xc2b8,	// (0x0005abab) popup_call2_audio_out_window_t4_ParamLimits

0xc2b8,	// (0x0005abab) popup_call2_audio_out_window_t4

0xc2ce,	// (0x0005abc1) popup_call2_audio_out_window_t5_ParamLimits

0xc2ce,	// (0x0005abc1) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0005de3e) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0005de3e) popup_call2_audio_out_window_t

0xc332,	// (0x0005ac25) bg_popup_call2_in_pane_ParamLimits

0xc332,	// (0x0005ac25) bg_popup_call2_in_pane

0xc38e,	// (0x0005ac81) popup_call2_audio_in_window_g1_ParamLimits

0xc38e,	// (0x0005ac81) popup_call2_audio_in_window_g1

0xc3c6,	// (0x0005acb9) popup_call2_audio_in_window_g2_ParamLimits

0xc3c6,	// (0x0005acb9) popup_call2_audio_in_window_g2

0xc3fe,	// (0x0005acf1) popup_call2_audio_in_window_g3_ParamLimits

0xc3fe,	// (0x0005acf1) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0005de4b) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0005de4b) popup_call2_audio_in_window_g

0xc456,	// (0x0005ad49) popup_call2_audio_in_window_t1_ParamLimits

0xc456,	// (0x0005ad49) popup_call2_audio_in_window_t1

0xc4d6,	// (0x0005adc9) popup_call2_audio_in_window_t2_ParamLimits

0xc4d6,	// (0x0005adc9) popup_call2_audio_in_window_t2

0xc556,	// (0x0005ae49) popup_call2_audio_in_window_t3_ParamLimits

0xc556,	// (0x0005ae49) popup_call2_audio_in_window_t3

0xc570,	// (0x0005ae63) popup_call2_audio_in_window_t4_ParamLimits

0xc570,	// (0x0005ae63) popup_call2_audio_in_window_t4

0xc582,	// (0x0005ae75) popup_call2_audio_in_window_t5_ParamLimits

0xc582,	// (0x0005ae75) popup_call2_audio_in_window_t5

0xc597,	// (0x0005ae8a) popup_call2_audio_in_window_t6_ParamLimits

0xc597,	// (0x0005ae8a) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0005de54) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0005de54) popup_call2_audio_in_window_t

0xa0c1,	// (0x000589b4) bg_popup_call2_in_pane_g1

0xc6b0,	// (0x0005afa3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0005debc) popup_cale_lunar_info_window_t

0xa0c9,	// (0x000589bc) bg_popup_call2_rect_pane_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_call2_rect_pane

0x9e6e,	// (0x00058761) call2_cli_visual_graphic_pane

0x9e6e,	// (0x00058761) call2_cli_visual_text_pane

0xa76c,	// (0x0005905f) smil_status_volume_pane_g3

0x0002,

0xa229,	// (0x00058b1c) call2_cli_visual_graphic_pane_g1

0xa229,	// (0x00058b1c) call2_cli_visual_graphic_pane_g2

0xa229,	// (0x00058b1c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0005de61) call2_cli_visual_graphic_pane_g

0xc5ac,	// (0x0005ae9f) bg_popup_call2_rect_pane_g1

0xa2d1,	// (0x00058bc4) bg_popup_call2_rect_pane_g2

0xc5b4,	// (0x0005aea7) bg_popup_call2_rect_pane_g3

0xc5bc,	// (0x0005aeaf) bg_popup_call2_rect_pane_g4

0xc5c4,	// (0x0005aeb7) bg_popup_call2_rect_pane_g5

0xc5cc,	// (0x0005aebf) bg_popup_call2_rect_pane_g6

0xc5d4,	// (0x0005aec7) bg_popup_call2_rect_pane_g7

0xc5dc,	// (0x0005aecf) bg_popup_call2_rect_pane_g8

0xc5e4,	// (0x0005aed7) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0005de68) bg_popup_call2_rect_pane_g

0xc5ec,	// (0x0005aedf) bg_popup_call2_bubble_pane_g1

0xc5f4,	// (0x0005aee7) bg_popup_call2_bubble_pane_g2

0xc5fc,	// (0x0005aeef) bg_popup_call2_bubble_pane_g3

0xc604,	// (0x0005aef7) bg_popup_call2_bubble_pane_g4

0xc60c,	// (0x0005aeff) bg_popup_call2_bubble_pane_g5

0xc614,	// (0x0005af07) bg_popup_call2_bubble_pane_g6

0xc61c,	// (0x0005af0f) bg_popup_call2_bubble_pane_g7

0xc624,	// (0x0005af17) bg_popup_call2_bubble_pane_g8

0xc62c,	// (0x0005af1f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0005de7b) bg_popup_call2_bubble_pane_g

0x11a0,	// (0x0004fa93) aid_cale_week_size_cell_pane

0x1b05,	// (0x000503f8) aid_cams_cif_uncrop_pane_ParamLimits

0x1b05,	// (0x000503f8) aid_cams_cif_uncrop_pane

0x1cbe,	// (0x000505b1) aid_cams_size_cell_ParamLimits

0x1cbe,	// (0x000505b1) aid_cams_size_cell

0x1cd2,	// (0x000505c5) grid_cams_pane_ParamLimits

0x1cec,	// (0x000505df) linegrid_cams_pane_ParamLimits

0x1dec,	// (0x000506df) call_video_pane_t1

0x1e06,	// (0x000506f9) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005db61) call_video_pane_t

0x223a,	// (0x00050b2d) aid_cale_month_size_cell_pane_ParamLimits

0x223a,	// (0x00050b2d) aid_cale_month_size_cell_pane

0xf612,	// (0x0005df05) smil_status_volume_pane_g

0xa779,	// (0x0005906c) volume_smil_pane_ParamLimits

0x9a06,	// (0x000582f9) aid_popup2_width_pane

0x10fe,	// (0x0004f9f1) cell_qdial_pane_g4_ParamLimits

0x10fe,	// (0x0004f9f1) cell_qdial_pane_g4

0x3185,	// (0x00051a78) aid_blid_cardinal_pane_ParamLimits

0x3191,	// (0x00051a84) aid_blid_destination_pane_ParamLimits

0x3191,	// (0x00051a84) aid_blid_destination_pane

0xa0c9,	// (0x000589bc) bg_popup_call_poc_act_pane_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_call_poc_act_pane

0xa0c9,	// (0x000589bc) bg_popup_call_poc_inact_pane_ParamLimits

0xa0c9,	// (0x000589bc) bg_popup_call_poc_inact_pane

0xc634,	// (0x0005af27) bg_popup_call_poc_act_pane_g1

0xc63c,	// (0x0005af2f) bg_popup_call_poc_act_pane_g2

0xc644,	// (0x0005af37) bg_popup_call_poc_act_pane_g3

0xc604,	// (0x0005aef7) bg_popup_call_poc_act_pane_g4

0xc60c,	// (0x0005aeff) bg_popup_call_poc_act_pane_g5

0xc64c,	// (0x0005af3f) bg_popup_call_poc_act_pane_g6

0xc61c,	// (0x0005af0f) bg_popup_call_poc_act_pane_g7

0xc654,	// (0x0005af47) bg_popup_call_poc_act_pane_g8

0x9e6e,	// (0x00058761) main_usb_pane

0xc7bd,	// (0x0005b0b0) popup_cale_lunar_info_window

0x20cf,	// (0x000509c2) im_reading_pane_t1_ParamLimits

0xa4eb,	// (0x00058dde) list_im_pane_ParamLimits

0xa4fc,	// (0x00058def) scroll_pane_cp07_ParamLimits

0x9e6e,	// (0x00058761) grid_highlight_pane_cp012

0xa0c9,	// (0x000589bc) mup_scale_pane_ParamLimits

0xb52f,	// (0x00059e22) main_usb_pane_g1_ParamLimits

0xb52f,	// (0x00059e22) main_usb_pane_g1

0x3f0a,	// (0x000527fd) main_usb_pane_g2_ParamLimits

0x3f0a,	// (0x000527fd) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0005dea5) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0005dea5) main_usb_pane_g

0x3f20,	// (0x00052813) main_usb_pane_t1_ParamLimits

0x3f20,	// (0x00052813) main_usb_pane_t1

0x3f32,	// (0x00052825) main_usb_pane_t2_ParamLimits

0x3f32,	// (0x00052825) main_usb_pane_t2

0x3f44,	// (0x00052837) main_usb_pane_t3_ParamLimits

0x3f44,	// (0x00052837) main_usb_pane_t3

0x3f56,	// (0x00052849) main_usb_pane_t4_ParamLimits

0x3f56,	// (0x00052849) main_usb_pane_t4

0x3f6b,	// (0x0005285e) main_usb_pane_t5_ParamLimits

0x3f6b,	// (0x0005285e) main_usb_pane_t5

0x3f80,	// (0x00052873) main_usb_pane_t6_ParamLimits

0x3f80,	// (0x00052873) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0005deaa) main_usb_pane_t_ParamLimits

0x3126,	// (0x00051a19) aid_text_placing

0x3131,	// (0x00051a24) main_location2_pane_t1_ParamLimits

0x3145,	// (0x00051a38) main_location2_pane_t2_ParamLimits

0x315b,	// (0x00051a4e) main_location2_pane_t3_ParamLimits

0x3171,	// (0x00051a64) main_location2_pane_t4_ParamLimits

0x3171,	// (0x00051a64) main_location2_pane_t4

0xf3d6,	// (0x0005dcc9) main_location2_pane_t_ParamLimits

0xa105,	// (0x000589f8) find_pinb_pane_g2_ParamLimits

0xa105,	// (0x000589f8) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005da12) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005da12) find_pinb_pane_g

0xa111,	// (0x00058a04) find_pinb_pane_t1_ParamLimits

0xa123,	// (0x00058a16) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005da17) find_pinb_pane_t_ParamLimits

0x9e6e,	// (0x00058761) main_call3_pane

0x2809,	// (0x000510fc) cale_month_day_heading_pane_t1_ParamLimits

0x288f,	// (0x00051182) cale_month_day_heading_pane_t2_ParamLimits

0x2920,	// (0x00051213) cale_month_day_heading_pane_t3_ParamLimits

0x29b1,	// (0x000512a4) cale_month_day_heading_pane_t4_ParamLimits

0x2a42,	// (0x00051335) cale_month_day_heading_pane_t5_ParamLimits

0x2ae3,	// (0x000513d6) cale_month_day_heading_pane_t6_ParamLimits

0x2b88,	// (0x0005147b) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005db99) cale_month_day_heading_pane_t_ParamLimits

0x2e3a,	// (0x0005172d) smil_status_volume_pane

0x39c7,	// (0x000522ba) postcard_address_pane_ParamLimits

0x39c7,	// (0x000522ba) postcard_address_pane

0x39dd,	// (0x000522d0) postcard_message_pane_ParamLimits

0x39dd,	// (0x000522d0) postcard_message_pane

0x3ee6,	// (0x000527d9) call2_cli_visual_pane_t1_ParamLimits

0x3ee6,	// (0x000527d9) call2_cli_visual_pane_t1

0x4773,	// (0x00053066) postcard_message_pane_t1_ParamLimits

0x4773,	// (0x00053066) postcard_message_pane_t1

0x475c,	// (0x0005304f) postcard_address_pane_t1_ParamLimits

0x475c,	// (0x0005304f) postcard_address_pane_t1

0x4748,	// (0x0005303b) popup_call3_audio_in_window_ParamLimits

0x4748,	// (0x0005303b) popup_call3_audio_in_window

0x45cd,	// (0x00052ec0) bg_popup_call3_in_pane_ParamLimits

0x45cd,	// (0x00052ec0) bg_popup_call3_in_pane

0x4649,	// (0x00052f3c) popup_call3_audio_in_window_g1_ParamLimits

0x4649,	// (0x00052f3c) popup_call3_audio_in_window_g1

0x4669,	// (0x00052f5c) popup_call3_audio_in_window_g2_ParamLimits

0x4669,	// (0x00052f5c) popup_call3_audio_in_window_g2

0x4689,	// (0x00052f7c) popup_call3_audio_in_window_g3_ParamLimits

0x4689,	// (0x00052f7c) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0005df0c) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0005df0c) popup_call3_audio_in_window_g

0x46ba,	// (0x00052fad) popup_call3_audio_in_window_t1_ParamLimits

0x46ba,	// (0x00052fad) popup_call3_audio_in_window_t1

0x46f8,	// (0x00052feb) popup_call3_audio_in_window_t2_ParamLimits

0x46f8,	// (0x00052feb) popup_call3_audio_in_window_t2

0x4736,	// (0x00053029) popup_call3_audio_in_window_t3_ParamLimits

0x4736,	// (0x00053029) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0005df15) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0005df15) popup_call3_audio_in_window_t

0xa3dc,	// (0x00058ccf) bg_popup_call3_rect_pane

0xc5ac,	// (0x0005ae9f) bg_popup_call3_rect_pane_g1

0xa2d1,	// (0x00058bc4) bg_popup_call3_rect_pane_g2

0xc5b4,	// (0x0005aea7) bg_popup_call3_rect_pane_g3

0xc5bc,	// (0x0005aeaf) bg_popup_call3_rect_pane_g4

0xc5c4,	// (0x0005aeb7) bg_popup_call3_rect_pane_g5

0xc5cc,	// (0x0005aebf) bg_popup_call3_rect_pane_g6

0xc5d4,	// (0x0005aec7) bg_popup_call3_rect_pane_g7

0x358b,	// (0x00051e7e) mup_visualizer_osc_pane

0xb43d,	// (0x00059d30) mup_visualizer_spec_pane

0x45fd,	// (0x00052ef0) call3_video_qcif_pane_ParamLimits

0x45fd,	// (0x00052ef0) call3_video_qcif_pane

0x4610,	// (0x00052f03) call3_video_qcif_uncrop_pane_ParamLimits

0x4610,	// (0x00052f03) call3_video_qcif_uncrop_pane

0x4620,	// (0x00052f13) call3_video_subqcif_pane_ParamLimits

0x4620,	// (0x00052f13) call3_video_subqcif_pane

0x4636,	// (0x00052f29) call3_video_subqcif_uncrop_pane_ParamLimits

0x4636,	// (0x00052f29) call3_video_subqcif_uncrop_pane

0x46a9,	// (0x00052f9c) popup_call3_audio_in_window_g4_ParamLimits

0x46a9,	// (0x00052f9c) popup_call3_audio_in_window_g4

0x45bc,	// (0x00052eaf) mup_spec_half_pane

0x45c5,	// (0x00052eb8) mup_spec_half_pane_cp

0xc858,	// (0x0005b14b) mup_osc_middle_pane

0xc861,	// (0x0005b154) mup_visualizer_osc_pane_g1

0x459c,	// (0x00052e8f) mup_spec_bar_pane_ParamLimits

0x459c,	// (0x00052e8f) mup_spec_bar_pane

0xc845,	// (0x0005b138) mup_spec_bar_pane_g1

0xc84f,	// (0x0005b142) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005df00) mup_spec_bar_pane_g

0x11a0,	// (0x0004fa93) aid_cale_week_size_cell_pane_ParamLimits

0x11ba,	// (0x0004faad) bg_cale_heading_pane_ParamLimits

0x11e3,	// (0x0004fad6) bg_cale_pane_cp01_ParamLimits

0x1205,	// (0x0004faf8) cale_week_corner_pane_ParamLimits

0x1224,	// (0x0004fb17) cale_week_day_heading_pane_ParamLimits

0x1252,	// (0x0004fb45) cale_week_scroll_pane_g1_ParamLimits

0x1276,	// (0x0004fb69) cale_week_scroll_pane_g2_ParamLimits

0x128e,	// (0x0004fb81) cale_week_scroll_pane_g3_ParamLimits

0x12a6,	// (0x0004fb99) cale_week_scroll_pane_g4_ParamLimits

0x12c2,	// (0x0004fbb5) cale_week_scroll_pane_g5_ParamLimits

0x12e2,	// (0x0004fbd5) cale_week_scroll_pane_g6_ParamLimits

0x1302,	// (0x0004fbf5) cale_week_scroll_pane_g7_ParamLimits

0x1326,	// (0x0004fc19) cale_week_scroll_pane_g8_ParamLimits

0x134a,	// (0x0004fc3d) cale_week_scroll_pane_g9_ParamLimits

0x1367,	// (0x0004fc5a) cale_week_scroll_pane_g10_ParamLimits

0x1384,	// (0x0004fc77) cale_week_scroll_pane_g11_ParamLimits

0x13a1,	// (0x0004fc94) cale_week_scroll_pane_g12_ParamLimits

0x13be,	// (0x0004fcb1) cale_week_scroll_pane_g13_ParamLimits

0x13db,	// (0x0004fcce) cale_week_scroll_pane_g14_ParamLimits

0x1404,	// (0x0004fcf7) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005daa3) cale_week_scroll_pane_g_ParamLimits

0x1451,	// (0x0004fd44) cale_week_time_pane_ParamLimits

0x1475,	// (0x0004fd68) grid_cale_week_pane_ParamLimits

0xa34d,	// (0x00058c40) listscroll_cale_week_pane_t1

0xa35f,	// (0x00058c52) scroll_pane_cp08_ParamLimits

0x22a7,	// (0x00050b9a) cale_month_corner_pane_ParamLimits

0xad78,	// (0x0005966b) cale_month_pane_t1

0x278f,	// (0x00051082) cale_month_week_pane_ParamLimits

0x2f54,	// (0x00051847) popup_call_status_window_g1_ParamLimits

0x2f68,	// (0x0005185b) popup_call_status_window_g2_ParamLimits

0x2f7c,	// (0x0005186f) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0005dc50) popup_call_status_window_g_ParamLimits

0xb11a,	// (0x00059a0d) aid_call2_pane

0xfd43,	// (0x0004e636) msg_header_pane_g1

0x39c7,	// (0x000522ba) postcard_address2_pane_ParamLimits

0x39c7,	// (0x000522ba) postcard_address2_pane

0x39dd,	// (0x000522d0) postcard_message2_pane_ParamLimits

0x39dd,	// (0x000522d0) postcard_message2_pane

0x454c,	// (0x00052e3f) message2_row_pane_ParamLimits

0x454c,	// (0x00052e3f) message2_row_pane

0x4569,	// (0x00052e5c) address2_row_pane_ParamLimits

0x4569,	// (0x00052e5c) address2_row_pane

0xc813,	// (0x0005b106) postcard_message2_row_pane_g1

0xc81b,	// (0x0005b10e) postcard_message2_row_pane_t1

0xc813,	// (0x0005b106) address2_row_pane_g1

0xc81b,	// (0x0005b10e) address2_row_pane_t1

0x19a1,	// (0x00050294) aid_size_cell_vorec

0x9e6e,	// (0x00058761) main_rss_pane

0x457c,	// (0x00052e6f) rss_list_single_pane_ParamLimits

0x457c,	// (0x00052e6f) rss_list_single_pane

0xc829,	// (0x0005b11c) rss_list_single_pane_t1

0xc837,	// (0x0005b12a) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0005defb) rss_list_single_pane_t

0x9e6e,	// (0x00058761) main_camera2_pane

0x9e6e,	// (0x00058761) main_video2_pane

0x47e2,	// (0x000530d5) cams_zoom_pane_cp2_ParamLimits

0x47e2,	// (0x000530d5) cams_zoom_pane_cp2

0x47f9,	// (0x000530ec) image2_vga_pane_ParamLimits

0x47f9,	// (0x000530ec) image2_vga_pane

0x4841,	// (0x00053134) main_camera2_pane_g1_ParamLimits

0x4841,	// (0x00053134) main_camera2_pane_g1

0x4861,	// (0x00053154) main_camera2_pane_g2_ParamLimits

0x4861,	// (0x00053154) main_camera2_pane_g2

0x4878,	// (0x0005316b) main_camera2_pane_g3_ParamLimits

0x4878,	// (0x0005316b) main_camera2_pane_g3

0x488f,	// (0x00053182) main_camera2_pane_g4_ParamLimits

0x488f,	// (0x00053182) main_camera2_pane_g4

0x48a6,	// (0x00053199) main_camera2_pane_g5_ParamLimits

0x48a6,	// (0x00053199) main_camera2_pane_g5

0x48bd,	// (0x000531b0) main_camera2_pane_g6_ParamLimits

0x48bd,	// (0x000531b0) main_camera2_pane_g6

0x48d4,	// (0x000531c7) main_camera2_pane_g7_ParamLimits

0x48d4,	// (0x000531c7) main_camera2_pane_g7

0x48eb,	// (0x000531de) main_camera2_pane_g8_ParamLimits

0x48eb,	// (0x000531de) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0005df1c) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0005df1c) main_camera2_pane_g

0x4919,	// (0x0005320c) main_camera2_pane_t1_ParamLimits

0x4919,	// (0x0005320c) main_camera2_pane_t1

0x494e,	// (0x00053241) main_camera2_pane_t2_ParamLimits

0x494e,	// (0x00053241) main_camera2_pane_t2

0x496b,	// (0x0005325e) main_camera2_pane_t3_ParamLimits

0x496b,	// (0x0005325e) main_camera2_pane_t3

0x49c9,	// (0x000532bc) main_camera2_pane_t4_ParamLimits

0x49c9,	// (0x000532bc) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0005df2f) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0005df2f) main_camera2_pane_t

0x4a52,	// (0x00053345) cams_zoom_pane_cp4_ParamLimits

0x4a52,	// (0x00053345) cams_zoom_pane_cp4

0x4a68,	// (0x0005335b) image2_cif_pane_ParamLimits

0x4a68,	// (0x0005335b) image2_cif_pane

0x4a93,	// (0x00053386) image2_subqcif_pane_ParamLimits

0x4a93,	// (0x00053386) image2_subqcif_pane

0x4aae,	// (0x000533a1) main_video2_pane_g1_ParamLimits

0x4aae,	// (0x000533a1) main_video2_pane_g1

0x4ac8,	// (0x000533bb) main_video2_pane_g2_ParamLimits

0x4ac8,	// (0x000533bb) main_video2_pane_g2

0x4ade,	// (0x000533d1) main_video2_pane_g3_ParamLimits

0x4ade,	// (0x000533d1) main_video2_pane_g3

0x4af4,	// (0x000533e7) main_video2_pane_g4_ParamLimits

0x4af4,	// (0x000533e7) main_video2_pane_g4

0x4b0a,	// (0x000533fd) main_video2_pane_g5_ParamLimits

0x4b0a,	// (0x000533fd) main_video2_pane_g5

0x4b20,	// (0x00053413) main_video2_pane_g6_ParamLimits

0x4b20,	// (0x00053413) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0005df3e) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0005df3e) main_video2_pane_g

0x4b3a,	// (0x0005342d) main_video2_pane_t1_ParamLimits

0x4b3a,	// (0x0005342d) main_video2_pane_t1

0x4b5e,	// (0x00053451) main_video2_pane_t2_ParamLimits

0x4b5e,	// (0x00053451) main_video2_pane_t2

0x4bae,	// (0x000534a1) main_video2_pane_t3_ParamLimits

0x4bae,	// (0x000534a1) main_video2_pane_t3

0x0002,

0xf658,	// (0x0005df4b) main_video2_pane_t_ParamLimits

0xf658,	// (0x0005df4b) main_video2_pane_t

0x403e,	// (0x00052931) call_muted_g2

0x0001,

0xf5fa,	// (0x0005deed) call_muted_g

0x9e6e,	// (0x00058761) main_mup2_pane

0x4bf6,	// (0x000534e9) main_mup2_pane_g1_ParamLimits

0x4bf6,	// (0x000534e9) main_mup2_pane_g1

0x4c02,	// (0x000534f5) main_mup2_pane_g2_ParamLimits

0x4c02,	// (0x000534f5) main_mup2_pane_g2

0xa7e4,	// (0x000590d7) main_mup_pane_g13_cp1

0xa7ec,	// (0x000590df) mup_volume_pane_cp1

0x4c20,	// (0x00053513) main_mup2_pane_g4_ParamLimits

0x4c20,	// (0x00053513) main_mup2_pane_g4

0x4c32,	// (0x00053525) main_mup2_pane_g5_ParamLimits

0x4c32,	// (0x00053525) main_mup2_pane_g5

0x4c44,	// (0x00053537) main_mup2_pane_g6_ParamLimits

0x4c44,	// (0x00053537) main_mup2_pane_g6

0x4c56,	// (0x00053549) main_mup2_pane_g7_ParamLimits

0x4c56,	// (0x00053549) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0005df52) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0005df52) main_mup2_pane_g

0x4c6e,	// (0x00053561) main_mup2_pane_t1_ParamLimits

0x4c6e,	// (0x00053561) main_mup2_pane_t1

0x4c84,	// (0x00053577) main_mup2_pane_t2_ParamLimits

0x4c84,	// (0x00053577) main_mup2_pane_t2

0x4c9a,	// (0x0005358d) main_mup2_pane_t3_ParamLimits

0x4c9a,	// (0x0005358d) main_mup2_pane_t3

0x4cb0,	// (0x000535a3) main_mup2_pane_t4_ParamLimits

0x4cb0,	// (0x000535a3) main_mup2_pane_t4

0x4cc8,	// (0x000535bb) main_mup2_pane_t5_ParamLimits

0x4cc8,	// (0x000535bb) main_mup2_pane_t5

0x4ce0,	// (0x000535d3) main_mup2_pane_t6_ParamLimits

0x4ce0,	// (0x000535d3) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0005df61) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0005df61) main_mup2_pane_t

0x4d10,	// (0x00053603) mup2_visualizer_pane_ParamLimits

0x4d10,	// (0x00053603) mup2_visualizer_pane

0x4d3e,	// (0x00053631) mup_progress_pane_cp_ParamLimits

0x4d3e,	// (0x00053631) mup_progress_pane_cp

0xa7cf,	// (0x000590c2) mup_volume_pane_cp_ParamLimits

0xa7cf,	// (0x000590c2) mup_volume_pane_cp

0x4d54,	// (0x00053647) mup2_visualizer_pane_g1_ParamLimits

0x4d54,	// (0x00053647) mup2_visualizer_pane_g1

0xc898,	// (0x0005b18b) mup2_visualizer_pane_g2_ParamLimits

0xc898,	// (0x0005b18b) mup2_visualizer_pane_g2

0x4d6b,	// (0x0005365e) mup2_visualizer_pane_g3_ParamLimits

0x4d6b,	// (0x0005365e) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0005df6e) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0005df6e) mup2_visualizer_pane_g

0xb678,	// (0x00059f6b) aid_size_cell_fmradio

0x41ee,	// (0x00052ae1) aid_height_parent_landcape

0xa57a,	// (0x00058e6d) wml_content_pane_cp

0xa582,	// (0x00058e75) wml_tabs_pane

0xa58b,	// (0x00058e7e) popup_wml_miniature_window

0xa593,	// (0x00058e86) scroll_pane_cp021

0xa5a7,	// (0x00058e9a) wml_content_pane_comp8

0x9e6e,	// (0x00058761) bg_popup_sub_pane_cp05

0xc8b6,	// (0x0005b1a9) popup_wml_miniature_window_g1

0xc8be,	// (0x0005b1b1) wml_miniature_view_pane

0x4d77,	// (0x0005366a) aid_size_wml_view

0x4d7f,	// (0x00053672) wml_miniature_view_pane_g1

0x4d88,	// (0x0005367b) wml_miniature_view_pane_g2

0x4d91,	// (0x00053684) wml_miniature_view_pane_g3

0x4d99,	// (0x0005368c) wml_miniature_view_pane_g4

0x4da1,	// (0x00053694) wml_miniature_view_pane_g5

0x4da9,	// (0x0005369c) wml_miniature_view_pane_g6

0x4db1,	// (0x000536a4) wml_miniature_view_pane_g7

0x4db9,	// (0x000536ac) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0005df75) wml_miniature_view_pane_g

0xc8c6,	// (0x0005b1b9) background_graphic_ParamLimits

0xc8c6,	// (0x0005b1b9) background_graphic

0xc8d2,	// (0x0005b1c5) wml_tabs_2_pane

0xc8db,	// (0x0005b1ce) wml_tabs_3_pane_ParamLimits

0xc8db,	// (0x0005b1ce) wml_tabs_3_pane

0xc8ed,	// (0x0005b1e0) wml_tabs_4_pane_ParamLimits

0xc8ed,	// (0x0005b1e0) wml_tabs_4_pane

0xc903,	// (0x0005b1f6) wml_tabs_5_pane_ParamLimits

0xc903,	// (0x0005b1f6) wml_tabs_5_pane

0xc91d,	// (0x0005b210) wml_tabs_pane_g2_ParamLimits

0xc91d,	// (0x0005b210) wml_tabs_pane_g2

0xc931,	// (0x0005b224) wml_tabs_pane_g3_ParamLimits

0xc931,	// (0x0005b224) wml_tabs_pane_g3

0x4dc1,	// (0x000536b4) wml_tabs_2_active_pane_ParamLimits

0x4dc1,	// (0x000536b4) wml_tabs_2_active_pane

0x4dd5,	// (0x000536c8) wml_tabs_2_passive_pane_ParamLimits

0x4dd5,	// (0x000536c8) wml_tabs_2_passive_pane

0x4de9,	// (0x000536dc) wml_tabs_3_active_pane_cp_ParamLimits

0x4de9,	// (0x000536dc) wml_tabs_3_active_pane_cp

0x4dfe,	// (0x000536f1) wml_tabs_3_passive_pane_ParamLimits

0x4dfe,	// (0x000536f1) wml_tabs_3_passive_pane

0x4e11,	// (0x00053704) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e11,	// (0x00053704) wml_tabs_3_passive_pane_cp

0x4e28,	// (0x0005371b) tabs_4_active_pane

0x4e30,	// (0x00053723) tabs_4_passive_pane

0x4e3a,	// (0x0005372d) tabs_4_passive_pane_cp

0x4e42,	// (0x00053735) tabs_4_passive_pane_cp2

0x3f02,	// (0x000527f5) aid_height_text

0x355d,	// (0x00051e50) mup_volume_cont_pane_ParamLimits

0x355d,	// (0x00051e50) mup_volume_cont_pane

0x0d8b,	// (0x0004f67e) aid_size_cell_pinb

0x0d95,	// (0x0004f688) aid_size_list_pinb

0x4d2a,	// (0x0005361d) mup2_volume_cont_pane_ParamLimits

0x4d2a,	// (0x0005361d) mup2_volume_cont_pane

0xa7bb,	// (0x000590ae) mup2_volume_cont_pane_g1_ParamLimits

0xa7bb,	// (0x000590ae) mup2_volume_cont_pane_g1

0x0a3b,	// (0x0004f32e) aid_size_cell_touch_ParamLimits

0x0a3b,	// (0x0004f32e) aid_size_cell_touch

0x0c7b,	// (0x0004f56e) touch_pane_ParamLimits

0x0c7b,	// (0x0004f56e) touch_pane

0x99f4,	// (0x000582e7) main_rss2_pane

0xc94e,	// (0x0005b241) listscroll_rss2_pane

0xc957,	// (0x0005b24a) rss2_navigation_pane

0xc95f,	// (0x0005b252) list_rss2_pane

0xb23e,	// (0x00059b31) scroll_pane_cp22

0xc967,	// (0x0005b25a) rss2_navigation_pane_g1

0xc970,	// (0x0005b263) rss2_navigation_pane_g2

0xc978,	// (0x0005b26b) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0005df86) rss2_navigation_pane_g

0xc980,	// (0x0005b273) rss2_navigation_pane_t1

0x4e4c,	// (0x0005373f) rss2_list_single_pane_ParamLimits

0x4e4c,	// (0x0005373f) rss2_list_single_pane

0xc98e,	// (0x0005b281) rss2_list_single_pane_t2

0xc99c,	// (0x0005b28f) rss2_list_single_pane_t3_ParamLimits

0xc99c,	// (0x0005b28f) rss2_list_single_pane_t3

0xc9b9,	// (0x0005b2ac) rss2_list_single_pane_t4

0x2e22,	// (0x00051715) smil_status_pane_g1

0x9a4d,	// (0x00058340) main_image2_pane_ParamLimits

0x9a4d,	// (0x00058340) main_image2_pane

0x4902,	// (0x000531f5) main_camera2_pane_g9_ParamLimits

0x4902,	// (0x000531f5) main_camera2_pane_g9

0x4a1e,	// (0x00053311) main_camera2_pane_t5_ParamLimits

0x4a1e,	// (0x00053311) main_camera2_pane_t5

0xa790,	// (0x00059083) main_camera2_pane_t6_ParamLimits

0xa790,	// (0x00059083) main_camera2_pane_t6

0x4e62,	// (0x00053755) main_image2_pane_g1_ParamLimits

0x4e62,	// (0x00053755) main_image2_pane_g1

0x3c1c,	// (0x0005250f) smil2_video_pane_ParamLimits

0x3c1c,	// (0x0005250f) smil2_video_pane

0x0a73,	// (0x0004f366) aid_zoom_text_primary_cp

0x9a43,	// (0x00058336) popup_preview_fixed_window

0xa4e3,	// (0x00058dd6) im_reading_pane_g1

0x47d4,	// (0x000530c7) cams2_bc_adjust_pane_cp_ParamLimits

0x47d4,	// (0x000530c7) cams2_bc_adjust_pane_cp

0x4a44,	// (0x00053337) cams2_bc_adjust_pane_ParamLimits

0x4a44,	// (0x00053337) cams2_bc_adjust_pane

0xa7f4,	// (0x000590e7) cams2_bc_adjust_pane_g1

0xa7fc,	// (0x000590ef) cams2_slider_pane

0xa805,	// (0x000590f8) cams2_slider_pane_g1

0xa80e,	// (0x00059101) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0005df8d) cams2_slider_pane_g

0x0e85,	// (0x0004f778) calc_display_pane_ParamLimits

0x0ead,	// (0x0004f7a0) calc_paper_pane_ParamLimits

0x0ed0,	// (0x0004f7c3) grid_calc_pane_ParamLimits

0xa6fb,	// (0x00058fee) popup_clock_digital_window_t1_ParamLimits

0xb615,	// (0x00059f08) main_image_pane_t1

0x0e67,	// (0x0004f75a) aid_size_cell_calc_ParamLimits

0x0e67,	// (0x0004f75a) aid_size_cell_calc

0x4234,	// (0x00052b27) popup_blid_sat_info2_window_ParamLimits

0x4234,	// (0x00052b27) popup_blid_sat_info2_window

0xc9cf,	// (0x0005b2c2) aid_size_cell_blid

0xc9d7,	// (0x0005b2ca) bg_popup_window_pane_cp07

0xc9fa,	// (0x0005b2ed) grid_popup_blid_pane

0xca04,	// (0x0005b2f7) heading_pane_cp05_ParamLimits

0xca04,	// (0x0005b2f7) heading_pane_cp05

0xcace,	// (0x0005b3c1) cell_popup_blid_pane_ParamLimits

0xcace,	// (0x0005b3c1) cell_popup_blid_pane

0xcaf8,	// (0x0005b3eb) cell_popup_blid_pane_g1

0xcb00,	// (0x0005b3f3) cell_popup_blid_pane_t1

0x4cfa,	// (0x000535ed) mup2_indicator_pane_ParamLimits

0x4cfa,	// (0x000535ed) mup2_indicator_pane

0xa3dc,	// (0x00058ccf) mup2_visualizer_osc_pane

0xc8a4,	// (0x0005b197) mup2_visualizer_spec_pane_ParamLimits

0xc8a4,	// (0x0005b197) mup2_visualizer_spec_pane

0x4e78,	// (0x0005376b) mup2_spec_half_pane

0x4e81,	// (0x00053774) mup2_spec_half_pane_cp

0x4e89,	// (0x0005377c) mup2_spec_bar_pane_ParamLimits

0x4e89,	// (0x0005377c) mup2_spec_bar_pane

0xc845,	// (0x0005b138) mup2_spec_bar_pane_g1

0xc84f,	// (0x0005b142) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0005df00) mup2_spec_bar_pane_g

0x4ea9,	// (0x0005379c) mup2_osc_middle_pane

0xc861,	// (0x0005b154) mup2_visualizer_osc_pane_g1

0x9a7b,	// (0x0005836e) popup_number_entry_window_t1_ParamLimits

0x9a8e,	// (0x00058381) popup_number_entry_window_t2_ParamLimits

0x9aa0,	// (0x00058393) popup_number_entry_window_t3_ParamLimits

0x0ccd,	// (0x0004f5c0) popup_number_entry_window_t5_ParamLimits

0x0ccd,	// (0x0004f5c0) popup_number_entry_window_t5

0xf0ca,	// (0x0005d9bd) popup_number_entry_window_t_ParamLimits

0x9ab2,	// (0x000583a5) text_title_cp2_ParamLimits

0xa73a,	// (0x0005902d) aid_hotspot_pointer_text2_pane

0xa760,	// (0x00059053) main_viewer_pane_g9_ParamLimits

0xa760,	// (0x00059053) main_viewer_pane_g9

0xad78,	// (0x0005966b) cale_month_pane_t1_ParamLimits

0xad9e,	// (0x00059691) bg_cale_pane_ParamLimits

0xadb6,	// (0x000596a9) list_cale_pane_ParamLimits

0xadc7,	// (0x000596ba) listscroll_cale_day_pane_t1

0xadd9,	// (0x000596cc) scroll_pane_cp09_ParamLimits

0x3593,	// (0x00051e86) main_mup_eq_pane_t1_ParamLimits

0x3593,	// (0x00051e86) main_mup_eq_pane_t1

0x35af,	// (0x00051ea2) main_mup_eq_pane_t2_ParamLimits

0x35af,	// (0x00051ea2) main_mup_eq_pane_t2

0x35cb,	// (0x00051ebe) main_mup_eq_pane_t3_ParamLimits

0x35cb,	// (0x00051ebe) main_mup_eq_pane_t3

0x35e9,	// (0x00051edc) main_mup_eq_pane_t4_ParamLimits

0x35e9,	// (0x00051edc) main_mup_eq_pane_t4

0x3607,	// (0x00051efa) main_mup_eq_pane_t5_ParamLimits

0x3607,	// (0x00051efa) main_mup_eq_pane_t5

0x3625,	// (0x00051f18) main_mup_eq_pane_t6_ParamLimits

0x3625,	// (0x00051f18) main_mup_eq_pane_t6

0x363b,	// (0x00051f2e) main_mup_eq_pane_t7_ParamLimits

0x363b,	// (0x00051f2e) main_mup_eq_pane_t7

0x3651,	// (0x00051f44) main_mup_eq_pane_t8_ParamLimits

0x3651,	// (0x00051f44) main_mup_eq_pane_t8

0x3667,	// (0x00051f5a) main_mup_eq_pane_t9_ParamLimits

0x3667,	// (0x00051f5a) main_mup_eq_pane_t9

0x3683,	// (0x00051f76) main_mup_eq_pane_t10_ParamLimits

0x3683,	// (0x00051f76) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0005dd4f) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0005dd4f) main_mup_eq_pane_t

0x3758,	// (0x0005204b) mup_equalizer_pane_cp5_ParamLimits

0x3770,	// (0x00052063) mup_equalizer_pane_cp6_ParamLimits

0x3788,	// (0x0005207b) mup_equalizer_pane_cp7_ParamLimits

0x99f4,	// (0x000582e7) main_gallery_pane

0xc86a,	// (0x0005b15d) smil2_volume_pane

0xc872,	// (0x0005b165) smil_status_volume_pane_g1_ParamLimits

0xc885,	// (0x0005b178) smil_status_volume_pane_g2_ParamLimits

0xa76c,	// (0x0005905f) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0005df05) smil_status_volume_pane_g_ParamLimits

0xc9d7,	// (0x0005b2ca) bg_popup_window_pane_cp07_ParamLimits

0xc9e5,	// (0x0005b2d8) blid_firmament_pane

0x4eb2,	// (0x000537a5) aid_size_cell_gallery_ParamLimits

0x4eb2,	// (0x000537a5) aid_size_cell_gallery

0x4ec8,	// (0x000537bb) grid_gallery_pane_ParamLimits

0x4ec8,	// (0x000537bb) grid_gallery_pane

0x4ee3,	// (0x000537d6) cell_gallery_pane_ParamLimits

0x4ee3,	// (0x000537d6) cell_gallery_pane

0xcb0e,	// (0x0005b401) bg_cell_gallery_focus_pane_ParamLimits

0xcb0e,	// (0x0005b401) bg_cell_gallery_focus_pane

0xcb20,	// (0x0005b413) cell_gallery_pane_g1_ParamLimits

0xcb20,	// (0x0005b413) cell_gallery_pane_g1

0x4f2e,	// (0x00053821) cell_gallery_pane_g2_ParamLimits

0x4f2e,	// (0x00053821) cell_gallery_pane_g2

0x4f3b,	// (0x0005382e) cell_gallery_pane_g3_ParamLimits

0x4f3b,	// (0x0005382e) cell_gallery_pane_g3

0xcb2c,	// (0x0005b41f) cell_gallery_pane_g4_ParamLimits

0xcb2c,	// (0x0005b41f) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0005dfb3) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0005dfb3) cell_gallery_pane_g

0xcb38,	// (0x0005b42b) bg_cell_gallery_focus_pane_g1

0xcb40,	// (0x0005b433) bg_cell_gallery_focus_pane_g2

0xcb48,	// (0x0005b43b) bg_cell_gallery_focus_pane_g3

0xcb50,	// (0x0005b443) bg_cell_gallery_focus_pane_g4

0xcb58,	// (0x0005b44b) bg_cell_gallery_focus_pane_g5

0xcb60,	// (0x0005b453) bg_cell_gallery_focus_pane_g6

0xcb68,	// (0x0005b45b) bg_cell_gallery_focus_pane_g7

0xcb70,	// (0x0005b463) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0005dfbc) bg_cell_gallery_focus_pane_g

0xcb78,	// (0x0005b46b) aid_firma_cardinal

0xcb8c,	// (0x0005b47f) blid_firmament_pane_t1

0xcba3,	// (0x0005b496) blid_firmament_pane_t2

0xcbba,	// (0x0005b4ad) blid_firmament_pane_t3

0xcbd1,	// (0x0005b4c4) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0005dfcd) blid_firmament_pane_t

0xcbe8,	// (0x0005b4db) blid_sat_info_pane

0xcbf8,	// (0x0005b4eb) blid_sat_info_pane_g1

0xcbf8,	// (0x0005b4eb) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0005dfd6) blid_sat_info_pane_g

0xcc02,	// (0x0005b4f5) blid_sat_info_pane_t1

0xcc10,	// (0x0005b503) smil2_volume_content_pane

0xcc19,	// (0x0005b50c) smil2_volume_pane_g1

0xcc21,	// (0x0005b514) smil2_volume_content_pane_g1

0xcc2a,	// (0x0005b51d) smil2_volume_content_pane_g2

0xcc33,	// (0x0005b526) smil2_volume_content_pane_g3

0xcc3c,	// (0x0005b52f) smil2_volume_content_pane_g4

0xcc45,	// (0x0005b538) smil2_volume_content_pane_g5

0xcc4e,	// (0x0005b541) smil2_volume_content_pane_g6

0xcc57,	// (0x0005b54a) smil2_volume_content_pane_g7

0xcc60,	// (0x0005b553) smil2_volume_content_pane_g8

0xcc69,	// (0x0005b55c) smil2_volume_content_pane_g9

0xcc72,	// (0x0005b565) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0005dfdb) smil2_volume_content_pane_g

0x153c,	// (0x0004fe2f) cale_week_day_heading_pane_t1_ParamLimits

0x1586,	// (0x0004fe79) cale_week_day_heading_pane_t2_ParamLimits

0x15d5,	// (0x0004fec8) cale_week_day_heading_pane_t3_ParamLimits

0x1624,	// (0x0004ff17) cale_week_day_heading_pane_t4_ParamLimits

0x1673,	// (0x0004ff66) cale_week_day_heading_pane_t5_ParamLimits

0x16c6,	// (0x0004ffb9) cale_week_day_heading_pane_t6_ParamLimits

0x171d,	// (0x00050010) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005dac4) cale_week_day_heading_pane_t_ParamLimits

0xa381,	// (0x00058c74) bg_cale_side_pane_ParamLimits

0x1767,	// (0x0005005a) cale_week_time_pane_t1_ParamLimits

0x17a1,	// (0x00050094) cale_week_time_pane_t2_ParamLimits

0x17db,	// (0x000500ce) cale_week_time_pane_t3_ParamLimits

0x1815,	// (0x00050108) cale_week_time_pane_t4_ParamLimits

0x184f,	// (0x00050142) cale_week_time_pane_t5_ParamLimits

0x1889,	// (0x0005017c) cale_week_time_pane_t6_ParamLimits

0x18c3,	// (0x000501b6) cale_week_time_pane_t7_ParamLimits

0x18fd,	// (0x000501f0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005dad3) cale_week_time_pane_t_ParamLimits

0x193d,	// (0x00050230) cell_cale_week_pane_g2_ParamLimits

0xa381,	// (0x00058c74) bg_cale_side_pane_cp01_ParamLimits

0x2c31,	// (0x00051524) cale_month_week_pane_t1_ParamLimits

0x2c4a,	// (0x0005153d) cale_month_week_pane_t2_ParamLimits

0x2c63,	// (0x00051556) cale_month_week_pane_t3_ParamLimits

0x2c7c,	// (0x0005156f) cale_month_week_pane_t4_ParamLimits

0x2c95,	// (0x00051588) cale_month_week_pane_t5_ParamLimits

0x2cae,	// (0x000515a1) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005dba8) cale_month_week_pane_t_ParamLimits

0xa67b,	// (0x00058f6e) cell_cale_month_pane_g1_ParamLimits

0x99f4,	// (0x000582e7) main_cale_event_viewer_pane

0x99f4,	// (0x000582e7) listscroll_cale_event_viewer_pane

0xcc7b,	// (0x0005b56e) list_cale_ev_pane

0xcc83,	// (0x0005b576) scroll_pane_cp023

0x4f48,	// (0x0005383b) field_cale_ev_pane_ParamLimits

0x4f48,	// (0x0005383b) field_cale_ev_pane

0xcc8f,	// (0x0005b582) field_cale_ev_content_pane_ParamLimits

0xcc8f,	// (0x0005b582) field_cale_ev_content_pane

0xcc9b,	// (0x0005b58e) field_cale_ev_pane_g1_ParamLimits

0xcc9b,	// (0x0005b58e) field_cale_ev_pane_g1

0xcca7,	// (0x0005b59a) field_cale_ev_pane_g2_ParamLimits

0xcca7,	// (0x0005b59a) field_cale_ev_pane_g2

0xccbf,	// (0x0005b5b2) field_cale_ev_pane_g3_ParamLimits

0xccbf,	// (0x0005b5b2) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0005dff0) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0005dff0) field_cale_ev_pane_g

0xccd7,	// (0x0005b5ca) field_cale_ev_pane_t1_ParamLimits

0xccd7,	// (0x0005b5ca) field_cale_ev_pane_t1

0x4f6c,	// (0x0005385f) field_cale_ev_content_pane_t1_ParamLimits

0x4f6c,	// (0x0005385f) field_cale_ev_content_pane_t1

0xb4e9,	// (0x00059ddc) bg_button_pane_cp01

0x1184,	// (0x0004fa77) listscroll_cale_week_pane_ParamLimits

0x1196,	// (0x0004fa89) popup_toolbar_window_cp01

0xa34d,	// (0x00058c40) listscroll_cale_week_pane_t1_ParamLimits

0x1184,	// (0x0004fa77) listscroll_cale_day_pane_ParamLimits

0x1196,	// (0x0004fa89) popup_toolbar_window_cp02

0xadc7,	// (0x000596ba) listscroll_cale_day_pane_t1_ParamLimits

0x1184,	// (0x0004fa77) main_cale_month_pane_ParamLimits

0x44b4,	// (0x00052da7) popup_toolbar_window_cp03_ParamLimits

0x44b4,	// (0x00052da7) popup_toolbar_window_cp03

0x3ada,	// (0x000523cd) main_image_pane_g2_ParamLimits

0x3ada,	// (0x000523cd) main_image_pane_g2

0x3aeb,	// (0x000523de) main_image_pane_g3_ParamLimits

0x3aeb,	// (0x000523de) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0005dde1) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0005dde1) main_image_pane_g

0xb615,	// (0x00059f08) main_image_pane_t1_ParamLimits

0x3afc,	// (0x000523ef) main_image_pane_t2_ParamLimits

0x3afc,	// (0x000523ef) main_image_pane_t2

0x3b0e,	// (0x00052401) main_image_pane_t3_ParamLimits

0x3b0e,	// (0x00052401) main_image_pane_t3

0x3b36,	// (0x00052429) main_image_pane_t4_ParamLimits

0x3b36,	// (0x00052429) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0005dde8) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0005dde8) main_image_pane_t

0x3b56,	// (0x00052449) popup_image_details_window_cp01

0x3b60,	// (0x00052453) popup_toobar_trans_pane_cp01_ParamLimits

0x3b60,	// (0x00052453) popup_toobar_trans_pane_cp01

0x4327,	// (0x00052c1a) popup_image_details_window_ParamLimits

0x4327,	// (0x00052c1a) popup_image_details_window

0xc7c9,	// (0x0005b0bc) popup_image_focus_window

0x478e,	// (0x00053081) camera2_autofocus_pane_ParamLimits

0x478e,	// (0x00053081) camera2_autofocus_pane

0x99f4,	// (0x000582e7) bg_popup_sub_pane_cp06

0xccee,	// (0x0005b5e1) popup_image_focus_window_g1

0xccf6,	// (0x0005b5e9) popup_image_focus_window_g2

0xccfe,	// (0x0005b5f1) popup_image_focus_window_g3

0xcd06,	// (0x0005b5f9) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0005dff7) popup_image_focus_window_g

0xcd0e,	// (0x0005b601) popup_image_focus_window_t1

0xcd1c,	// (0x0005b60f) popup_image_focus_window_t2

0xcd2c,	// (0x0005b61f) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0005e000) popup_image_focus_window_t

0xcd3a,	// (0x0005b62d) camera2_autofocus_pane_g1

0x9a4d,	// (0x00058340) bg_tb_trans_pane_cp01

0xcd48,	// (0x0005b63b) popup_image_details_window_g1

0xcd5b,	// (0x0005b64e) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0005e012) popup_image_details_window_g

0xcd84,	// (0x0005b677) popup_image_details_window_t1

0xcd96,	// (0x0005b689) popup_image_details_window_t2

0xcdaf,	// (0x0005b6a2) popup_image_details_window_t3

0xcdc3,	// (0x0005b6b6) popup_image_details_window_t4

0xcdde,	// (0x0005b6d1) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0005e019) popup_image_details_window_t

0xa182,	// (0x00058a75) bg_calc_paper_pane_ParamLimits

0x99f4,	// (0x000582e7) grid_highlight_pane_cp013

0xa196,	// (0x00058a89) list_calc_pane_ParamLimits

0xa1a8,	// (0x00058a9b) scroll_pane_cp024

0xa1b0,	// (0x00058aa3) bg_calc_display_pane_ParamLimits

0x0fd0,	// (0x0004f8c3) calc_display_pane_t1_ParamLimits

0x0fe2,	// (0x0004f8d5) calc_display_pane_t2_ParamLimits

0xa1bc,	// (0x00058aaf) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005da44) calc_display_pane_t_ParamLimits

0x10ab,	// (0x0004f99e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005da61) cell_calc_pane_g

0x10b4,	// (0x0004f9a7) cell_calc_pane_t1

0xa233,	// (0x00058b26) grid_highlight_pane_cp02_ParamLimits

0xa249,	// (0x00058b3c) toolbar_button_pane_cp01_ParamLimits

0xa249,	// (0x00058b3c) toolbar_button_pane_cp01

0xb65a,	// (0x00059f4d) temp_image_control_pane_ParamLimits

0xb65a,	// (0x00059f4d) temp_image_control_pane

0x9a4d,	// (0x00058340) main_mp3_pane

0xcdf8,	// (0x0005b6eb) temp_image_control_pane_g1_ParamLimits

0xcdf8,	// (0x0005b6eb) temp_image_control_pane_g1

0xce06,	// (0x0005b6f9) temp_image_control_pane_g2_ParamLimits

0xce06,	// (0x0005b6f9) temp_image_control_pane_g2

0xce18,	// (0x0005b70b) temp_image_control_pane_g3_ParamLimits

0xce18,	// (0x0005b70b) temp_image_control_pane_g3

0x4fbd,	// (0x000538b0) temp_image_control_pane_g4_ParamLimits

0x4fbd,	// (0x000538b0) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0005e024) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0005e024) temp_image_control_pane_g

0xcdf8,	// (0x0005b6eb) main_mp3_pane_g1

0x4fd0,	// (0x000538c3) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0005e02d) main_mp3_pane_g

0xce5b,	// (0x0005b74e) main_mp3_pane_t1

0xa3ee,	// (0x00058ce1) main_camera_pane_g8_ParamLimits

0xa3ee,	// (0x00058ce1) main_camera_pane_g8

0x1c64,	// (0x00050557) main_video_pane_g7_ParamLimits

0x1c64,	// (0x00050557) main_video_pane_g7

0xa7a9,	// (0x0005909c) main_camera2_pane_t7_ParamLimits

0xa7a9,	// (0x0005909c) main_camera2_pane_t7

0xa53a,	// (0x00058e2d) scroll_pane_cp025_ParamLimits

0xa53a,	// (0x00058e2d) scroll_pane_cp025

0xa54e,	// (0x00058e41) scroll_pane_cp026_ParamLimits

0xa54e,	// (0x00058e41) scroll_pane_cp026

0xa55d,	// (0x00058e50) wml_content_pane_ParamLimits

0x99f4,	// (0x000582e7) main_touch_calib_pane

0x50a2,	// (0x00053995) main_touch_calib_pane_g1

0x50b4,	// (0x000539a7) main_touch_calib_pane_g2

0x50c6,	// (0x000539b9) main_touch_calib_pane_g3

0x50d8,	// (0x000539cb) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0005e04b) main_touch_calib_pane_g

0x50ea,	// (0x000539dd) main_touch_calib_pane_t1

0x5104,	// (0x000539f7) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0005e054) main_touch_calib_pane_t

0xb2b9,	// (0x00059bac) mup_progress_pane_cp02

0xb2d8,	// (0x00059bcb) navi_pane_g1

0xb33a,	// (0x00059c2d) navi_pane_mp_t3

0x9a4d,	// (0x00058340) main_mp3_pane_ParamLimits

0x44f6,	// (0x00052de9) navi_pane_ParamLimits

0xcdf8,	// (0x0005b6eb) main_mp3_pane_g1_ParamLimits

0x4fd0,	// (0x000538c3) main_mp3_pane_g2_ParamLimits

0x4fdc,	// (0x000538cf) main_mp3_pane_g3_ParamLimits

0x4fdc,	// (0x000538cf) main_mp3_pane_g3

0x4fea,	// (0x000538dd) main_mp3_pane_g4_ParamLimits

0x4fea,	// (0x000538dd) main_mp3_pane_g4

0xce28,	// (0x0005b71b) main_mp3_pane_g5_ParamLimits

0xce28,	// (0x0005b71b) main_mp3_pane_g5

0xce36,	// (0x0005b729) main_mp3_pane_g6_ParamLimits

0xce36,	// (0x0005b729) main_mp3_pane_g6

0xce43,	// (0x0005b736) main_mp3_pane_g7_ParamLimits

0xce43,	// (0x0005b736) main_mp3_pane_g7

0xce4f,	// (0x0005b742) main_mp3_pane_g8_ParamLimits

0xce4f,	// (0x0005b742) main_mp3_pane_g8

0xf73a,	// (0x0005e02d) main_mp3_pane_g_ParamLimits

0x4ff6,	// (0x000538e9) main_mp3_pane_t2

0x5004,	// (0x000538f7) main_mp3_pane_t3

0xce69,	// (0x0005b75c) main_mp3_pane_t4

0xce77,	// (0x0005b76a) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0005e03e) main_mp3_pane_t

0xce85,	// (0x0005b778) mup_progress_pane_cp01

0x0a73,	// (0x0004f366) aid_zoom_text_secondary2

0xcc7b,	// (0x0005b56e) list_cale_ev2_pane

0xcc83,	// (0x0005b576) scroll_pane_cp023_ParamLimits

0x515e,	// (0x00053a51) field_cale_ev2_pane_ParamLimits

0x515e,	// (0x00053a51) field_cale_ev2_pane

0xfd82,	// (0x0004e675) field_cale_ev2_pane_g1_ParamLimits

0xfd82,	// (0x0004e675) field_cale_ev2_pane_g1

0xfd8e,	// (0x0004e681) field_cale_ev2_pane_g2_ParamLimits

0xfd8e,	// (0x0004e681) field_cale_ev2_pane_g2

0xfda6,	// (0x0004e699) field_cale_ev2_pane_g3_ParamLimits

0xfda6,	// (0x0004e699) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0005e05f) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0005e05f) field_cale_ev2_pane_g

0xfdbe,	// (0x0004e6b1) field_cale_ev2_pane_t1_ParamLimits

0xfdbe,	// (0x0004e6b1) field_cale_ev2_pane_t1

0xfdd5,	// (0x0004e6c8) field_cale_ev2_pane_t2_ParamLimits

0xfdd5,	// (0x0004e6c8) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0005e068) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0005e068) field_cale_ev2_pane_t

0x3977,	// (0x0005226a) main_postcard_pane_g5_ParamLimits

0x3977,	// (0x0005226a) main_postcard_pane_g5

0x398d,	// (0x00052280) main_postcard_pane_g6_ParamLimits

0x398d,	// (0x00052280) main_postcard_pane_g6

0x1a10,	// (0x00050303) camera2_autofocus_pane_cp_ParamLimits

0x1a10,	// (0x00050303) camera2_autofocus_pane_cp

0x9a4d,	// (0x00058340) main_mup3_pane

0x51ae,	// (0x00053aa1) main_mup3_pane_g1_ParamLimits

0x51ae,	// (0x00053aa1) main_mup3_pane_g1

0x51d0,	// (0x00053ac3) main_mup3_pane_g2_ParamLimits

0x51d0,	// (0x00053ac3) main_mup3_pane_g2

0x5253,	// (0x00053b46) main_mup3_pane_g3_ParamLimits

0x5253,	// (0x00053b46) main_mup3_pane_g3

0x529b,	// (0x00053b8e) main_mup3_pane_g4_ParamLimits

0x529b,	// (0x00053b8e) main_mup3_pane_g4

0x52e1,	// (0x00053bd4) main_mup3_pane_g5_ParamLimits

0x52e1,	// (0x00053bd4) main_mup3_pane_g5

0x5329,	// (0x00053c1c) main_mup3_pane_g6_ParamLimits

0x5329,	// (0x00053c1c) main_mup3_pane_g6

0xce8d,	// (0x0005b780) main_mup3_pane_g7_ParamLimits

0xce8d,	// (0x0005b780) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0005e078) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0005e078) main_mup3_pane_g

0x53a9,	// (0x00053c9c) main_mup3_pane_t1_ParamLimits

0x53a9,	// (0x00053c9c) main_mup3_pane_t1

0x5417,	// (0x00053d0a) main_mup3_pane_t2_ParamLimits

0x5417,	// (0x00053d0a) main_mup3_pane_t2

0x54ed,	// (0x00053de0) main_mup3_pane_t4_ParamLimits

0x54ed,	// (0x00053de0) main_mup3_pane_t4

0x554b,	// (0x00053e3e) main_mup3_pane_t5_ParamLimits

0x554b,	// (0x00053e3e) main_mup3_pane_t5

0x5605,	// (0x00053ef8) main_mup3_pane_t6_ParamLimits

0x5605,	// (0x00053ef8) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0005e089) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0005e089) main_mup3_pane_t

0x56bd,	// (0x00053fb0) mup3_progress_pane_ParamLimits

0x56bd,	// (0x00053fb0) mup3_progress_pane

0x574f,	// (0x00054042) popup_mup3_control_window_ParamLimits

0x574f,	// (0x00054042) popup_mup3_control_window

0xce9b,	// (0x0005b78e) popup_mup3_text_window

0x5785,	// (0x00054078) mup3_progress_pane_t1

0x57a3,	// (0x00054096) mup3_progress_pane_t2

0xcea3,	// (0x0005b796) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0005e096) mup3_progress_pane_t

0xcec0,	// (0x0005b7b3) mup_progress_pane_cp03

0x99f4,	// (0x000582e7) bg_tb_trans_pane_cp04

0x57c1,	// (0x000540b4) mup3_volume_pane

0x57c9,	// (0x000540bc) popup_mup3_control_window_g1

0x57d2,	// (0x000540c5) mup3_volume_pane_g1

0x57db,	// (0x000540ce) mup3_volume_pane_g2

0x57e4,	// (0x000540d7) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0005e09d) mup3_volume_pane_g

0x99f4,	// (0x000582e7) bg_tb_trans_pane_cp03

0xced0,	// (0x0005b7c3) popup_mup3_text_window_g1

0xced8,	// (0x0005b7cb) popup_mup3_text_window_t1

0xa20a,	// (0x00058afd) list_calc_item_pane_g1_ParamLimits

0xc945,	// (0x0005b238) mup_volume_pane_cp_g1

0x511e,	// (0x00053a11) main_touch_calib_pane_t3

0x5132,	// (0x00053a25) main_touch_calib_pane_t4

0x5148,	// (0x00053a3b) main_touch_calib_pane_t5

0x99fe,	// (0x000582f1) aid_cell_size_toolbar2

0x9a06,	// (0x000582f9) aid_popup3_width_pane

0x0a6b,	// (0x0004f35e) aid_zoom_text_msg_primary

0x19ed,	// (0x000502e0) vorec_t7

0xa1ce,	// (0x00058ac1) bg_calc_paper_pane_g1_ParamLimits

0xa1da,	// (0x00058acd) bg_calc_paper_pane_g2_ParamLimits

0xa1e6,	// (0x00058ad9) bg_calc_paper_pane_g3_ParamLimits

0xa1f2,	// (0x00058ae5) bg_calc_paper_pane_g4_ParamLimits

0xa1fe,	// (0x00058af1) bg_calc_paper_pane_g5_ParamLimits

0x1031,	// (0x0004f924) bg_calc_paper_pane_g6_ParamLimits

0x1044,	// (0x0004f937) bg_calc_paper_pane_g7_ParamLimits

0x1057,	// (0x0004f94a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005da4b) bg_calc_paper_pane_g_ParamLimits

0x1068,	// (0x0004f95b) calc_bg_paper_pane_g9_ParamLimits

0x1b72,	// (0x00050465) image_qvga_pane_ParamLimits

0x1b72,	// (0x00050465) image_qvga_pane

0xa0c9,	// (0x000589bc) bg_popup_sub_pane_cp04_ParamLimits

0xb591,	// (0x00059e84) popup_mup_playback_window_g1_ParamLimits

0xb59d,	// (0x00059e90) popup_mup_playback_window_t1_ParamLimits

0xb5b2,	// (0x00059ea5) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0005dddc) popup_mup_playback_window_t_ParamLimits

0x4c12,	// (0x00053505) main_mup2_pane_g3_ParamLimits

0x4c12,	// (0x00053505) main_mup2_pane_g3

0x1e85,	// (0x00050778) popup_toolbar_window_cp04

0xb9ad,	// (0x0005a2a0) popup_call2_audio_second_window_g3_ParamLimits

0xb9ad,	// (0x0005a2a0) popup_call2_audio_second_window_g3

0xbdb7,	// (0x0005a6aa) popup_call2_audio_first_window_g4_ParamLimits

0xbdb7,	// (0x0005a6aa) popup_call2_audio_first_window_g4

0xc436,	// (0x0005ad29) popup_call2_audio_in_window_g4_ParamLimits

0xc436,	// (0x0005ad29) popup_call2_audio_in_window_g4

0x3abc,	// (0x000523af) aid_area_sk_bg_cut_ParamLimits

0x3abc,	// (0x000523af) aid_area_sk_bg_cut

0xb5c7,	// (0x00059eba) aid_area_sk_bg_cut_2_ParamLimits

0xb5c7,	// (0x00059eba) aid_area_sk_bg_cut_2

0x4f1e,	// (0x00053811) aid_placing_details_win

0x4f26,	// (0x00053819) aid_placing_details_win_2

0xcd3a,	// (0x0005b62d) camera2_autofocus_pane_g1_ParamLimits

0x0c14,	// (0x0004f507) popup_fixed_preview_cale_window_ParamLimits

0x0c14,	// (0x0004f507) popup_fixed_preview_cale_window

0xb381,	// (0x00059c74) navi_slider_pane_g3

0xb38a,	// (0x00059c7d) navi_slider_pane_g4

0xb393,	// (0x00059c86) navi_slider_pane_g5

0xb381,	// (0x00059c74) navi_slider_pane_g6

0xa721,	// (0x00059014) navi_slider_pane_g7

0xb4b6,	// (0x00059da9) mup_scale_pane_g3

0xb4bf,	// (0x00059db2) mup_scale_pane_g4

0xb4c8,	// (0x00059dbb) mup_scale_pane_g5

0x37a0,	// (0x00052093) mup_scale_pane_g6

0x37a9,	// (0x0005209c) mup_scale_pane_g7

0xb381,	// (0x00059c74) cams2_slider_pane_g3

0xc9c7,	// (0x0005b2ba) cams2_slider_pane_g4

0xa817,	// (0x0005910a) cams2_slider_pane_g5

0xb381,	// (0x00059c74) cams2_slider_pane_g6

0xa81f,	// (0x00059112) cams2_slider_pane_g7

0xcbf8,	// (0x0005b4eb) camera2_autofocus_pane_cp_g1

0xc79b,	// (0x0005b08e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc79b,	// (0x0005b08e) bg_popup_preview_window_pane_cp02

0xcee6,	// (0x0005b7d9) list_fp_cale_pane_ParamLimits

0xcee6,	// (0x0005b7d9) list_fp_cale_pane

0xcef2,	// (0x0005b7e5) popup_fixed_preview_cale_window_t1_ParamLimits

0xcef2,	// (0x0005b7e5) popup_fixed_preview_cale_window_t1

0x57ed,	// (0x000540e0) popup_fixed_preview_cale_window_t2_ParamLimits

0x57ed,	// (0x000540e0) popup_fixed_preview_cale_window_t2

0x5802,	// (0x000540f5) popup_fixed_preview_cale_window_t3_ParamLimits

0x5802,	// (0x000540f5) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0005e0a4) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0005e0a4) popup_fixed_preview_cale_window_t

0x5817,	// (0x0005410a) list_single_fp_cale_pane_ParamLimits

0x5817,	// (0x0005410a) list_single_fp_cale_pane

0xcf10,	// (0x0005b803) list_single_fp_cale_pane_g1_ParamLimits

0xcf10,	// (0x0005b803) list_single_fp_cale_pane_g1

0xcf1c,	// (0x0005b80f) list_single_fp_cale_pane_g2_ParamLimits

0xcf1c,	// (0x0005b80f) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0005e0ab) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0005e0ab) list_single_fp_cale_pane_g

0xcf35,	// (0x0005b828) list_single_fp_cale_pane_t1_ParamLimits

0xcf35,	// (0x0005b828) list_single_fp_cale_pane_t1

0xcf47,	// (0x0005b83a) list_single_fp_cale_pane_t2_ParamLimits

0xcf47,	// (0x0005b83a) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0005e0b2) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0005e0b2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99f4,	// (0x000582e7) main_dialer_pane

0x582c,	// (0x0005411f) aid_cell_size_keypad

0x5836,	// (0x00054129) dialer_ne_pane

0x5840,	// (0x00054133) grid_dialer_command_1_pane

0x5848,	// (0x0005413b) grid_dialer_command_2_pane

0x5850,	// (0x00054143) grid_dialer_keypad_pane

0x5862,	// (0x00054155) bg_popup_call_pane_cp06_ParamLimits

0x5862,	// (0x00054155) bg_popup_call_pane_cp06

0x586e,	// (0x00054161) dialer_ne_clear_pane_ParamLimits

0x586e,	// (0x00054161) dialer_ne_clear_pane

0xcf7a,	// (0x0005b86d) dialer_ne_pane_g1

0xcf82,	// (0x0005b875) dialer_ne_pane_t1_ParamLimits

0xcf82,	// (0x0005b875) dialer_ne_pane_t1

0x587a,	// (0x0005416d) dialer_ne_pane_t2_ParamLimits

0x587a,	// (0x0005416d) dialer_ne_pane_t2

0x58a4,	// (0x00054197) dialer_ne_pane_t3_ParamLimits

0x58a4,	// (0x00054197) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0005e0b7) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0005e0b7) dialer_ne_pane_t

0x58d4,	// (0x000541c7) dialer_ne_pane_t3_copy1_ParamLimits

0x58d4,	// (0x000541c7) dialer_ne_pane_t3_copy1

0x5903,	// (0x000541f6) cell_dialer_keypad_pane_ParamLimits

0x5903,	// (0x000541f6) cell_dialer_keypad_pane

0x591a,	// (0x0005420d) cell_dialer_command_1_pane_ParamLimits

0x591a,	// (0x0005420d) cell_dialer_command_1_pane

0x5930,	// (0x00054223) cell_dialer_command_2_pane_ParamLimits

0x5930,	// (0x00054223) cell_dialer_command_2_pane

0xcf94,	// (0x0005b887) bg_button_pane_cp02_ParamLimits

0xcf94,	// (0x0005b887) bg_button_pane_cp02

0x593f,	// (0x00054232) cell_dialer_keypad_pane_g1_ParamLimits

0x593f,	// (0x00054232) cell_dialer_keypad_pane_g1

0xcf94,	// (0x0005b887) bg_button_pane_cp03_ParamLimits

0xcf94,	// (0x0005b887) bg_button_pane_cp03

0x5954,	// (0x00054247) cell_dialer_command_1_pane_g1_ParamLimits

0x5954,	// (0x00054247) cell_dialer_command_1_pane_g1

0xcfa0,	// (0x0005b893) bg_button_pane_cp04

0x5968,	// (0x0005425b) cell_dialer_command_2_pane_g1

0xa3dc,	// (0x00058ccf) bg_button_pane_cp06

0xcfa8,	// (0x0005b89b) dialer_ne_clear_pane_g1

0x3272,	// (0x00051b65) navi_pane_g2

0x32a0,	// (0x00051b93) navi_pane_g3

0x0002,

0xf3ec,	// (0x0005dcdf) navi_pane_g

0x32cb,	// (0x00051bbe) navi_pane_mv_g2

0x32f2,	// (0x00051be5) navi_pane_mv_g5

0x32fa,	// (0x00051bed) navi_pane_mv_t1

0xa1b0,	// (0x00058aa3) main_clock2_pane

0x59b3,	// (0x000542a6) main_clock2_list_pane_ParamLimits

0x59b3,	// (0x000542a6) main_clock2_list_pane

0x59eb,	// (0x000542de) main_clock2_pane_t1_ParamLimits

0x59eb,	// (0x000542de) main_clock2_pane_t1

0x5a27,	// (0x0005431a) main_clock2_pane_t2_ParamLimits

0x5a27,	// (0x0005431a) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0005e0c3) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0005e0c3) main_clock2_pane_t

0x5ac7,	// (0x000543ba) popup_clock_analogue_window_cp03_ParamLimits

0x5ac7,	// (0x000543ba) popup_clock_analogue_window_cp03

0x5aee,	// (0x000543e1) popup_clock_digital_window_cp02_ParamLimits

0x5aee,	// (0x000543e1) popup_clock_digital_window_cp02

0x5b67,	// (0x0005445a) main_clock2_list_single_pane_ParamLimits

0x5b67,	// (0x0005445a) main_clock2_list_single_pane

0xa3dc,	// (0x00058ccf) list_highlight_pane_cp05

0xcfe4,	// (0x0005b8d7) main_clock2_list_single_pane_t1

0x1e85,	// (0x00050778) popup_toolbar_window_cp04_ParamLimits

0x4f8d,	// (0x00053880) camera2_autofocus_pane_g2_ParamLimits

0x4f8d,	// (0x00053880) camera2_autofocus_pane_g2

0x4f99,	// (0x0005388c) camera2_autofocus_pane_g3_ParamLimits

0x4f99,	// (0x0005388c) camera2_autofocus_pane_g3

0x4fa5,	// (0x00053898) camera2_autofocus_pane_g4_ParamLimits

0x4fa5,	// (0x00053898) camera2_autofocus_pane_g4

0x4fb1,	// (0x000538a4) camera2_autofocus_pane_g5_ParamLimits

0x4fb1,	// (0x000538a4) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0005e007) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0005e007) camera2_autofocus_pane_g

0x518e,	// (0x00053a81) camera2_autofocus_pane_cp_g2

0x5196,	// (0x00053a89) camera2_autofocus_pane_cp_g3

0x519e,	// (0x00053a91) camera2_autofocus_pane_cp_g4

0x51a6,	// (0x00053a99) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0005e06d) camera2_autofocus_pane_cp_g

0x585a,	// (0x0005414d) popup_dialer_spcha_window

0x99f4,	// (0x000582e7) bg_popup_sub_pane_cp07

0xcff2,	// (0x0005b8e5) list_spcha_pane

0xcffa,	// (0x0005b8ed) list_single_spcha_pane_ParamLimits

0xcffa,	// (0x0005b8ed) list_single_spcha_pane

0x99f4,	// (0x000582e7) list_highlight_pane_cp06

0xd00b,	// (0x0005b8fe) list_single_spcha_pane_t1

0xc1e0,	// (0x0005aad3) popup_call2_audio_out_window_g4_ParamLimits

0xc1e0,	// (0x0005aad3) popup_call2_audio_out_window_g4

0x99f4,	// (0x000582e7) main_imed2_pane

0xc7d3,	// (0x0005b0c6) popup_imed_adjust2_window

0x433f,	// (0x00052c32) popup_imed_trans_window_ParamLimits

0x433f,	// (0x00052c32) popup_imed_trans_window

0xca30,	// (0x0005b323) popup_blid_sat_info2_window_t1

0xca3e,	// (0x0005b331) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0005df9c) popup_blid_sat_info2_window_t

0x5c1d,	// (0x00054510) aid_size_cell_colour_35

0x5c3d,	// (0x00054530) aid_size_cell_colour_112

0x5c5d,	// (0x00054550) aid_size_cell_effect

0xc7a7,	// (0x0005b09a) bg_tb_trans_pane_cp02

0xaed8,	// (0x000597cb) heading_imed_pane

0x5c7d,	// (0x00054570) listscroll_imed_pane

0xd019,	// (0x0005b90c) heading_imed_pane_g1

0xd021,	// (0x0005b914) heading_imed_pane_t1

0xd02f,	// (0x0005b922) grid_imed_colour_35_pane_ParamLimits

0xd02f,	// (0x0005b922) grid_imed_colour_35_pane

0x5c89,	// (0x0005457c) grid_imed_effect_pane

0xd04b,	// (0x0005b93e) list_imed_aspect_pane

0x5c9e,	// (0x00054591) scroll_pane_cp027_ParamLimits

0x5c9e,	// (0x00054591) scroll_pane_cp027

0x5caf,	// (0x000545a2) cell_imed_effect_pane_ParamLimits

0x5caf,	// (0x000545a2) cell_imed_effect_pane

0xd053,	// (0x0005b946) cell_imed_colour_pane_ParamLimits

0xd053,	// (0x0005b946) cell_imed_colour_pane

0xd09d,	// (0x0005b990) cell_imed_colour_pane_g1_ParamLimits

0xd09d,	// (0x0005b990) cell_imed_colour_pane_g1

0xd0ae,	// (0x0005b9a1) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0ae,	// (0x0005b9a1) hgihlgiht_grid_pane_cp016

0x5cda,	// (0x000545cd) cell_imed_effect_pane_g1

0x5ce2,	// (0x000545d5) grid_highlight_pane_cp017

0xd0bf,	// (0x0005b9b2) list_imed_single_pane_ParamLimits

0xd0bf,	// (0x0005b9b2) list_imed_single_pane

0x99f4,	// (0x000582e7) list_highlight_pane_cp07

0xd0d3,	// (0x0005b9c6) list_imed_aspect_pane_comp1_t1

0xc7a7,	// (0x0005b09a) bg_tb_trans_pane_cp05

0xd0f5,	// (0x0005b9e8) popup_imed_adjust2_window_g1

0xd11c,	// (0x0005ba0f) popup_imed_adjust2_window_t1

0xd134,	// (0x0005ba27) slider_imed_adjust_pane

0xd148,	// (0x0005ba3b) slider_imed_adjust_pane_g1

0xd158,	// (0x0005ba4b) slider_imed_adjust_pane_g2

0xd168,	// (0x0005ba5b) slider_imed_adjust_pane_g3

0xd179,	// (0x0005ba6c) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0005e0e0) slider_imed_adjust_pane_g

0x5ceb,	// (0x000545de) aid_size_cell_clipart2

0x5cf7,	// (0x000545ea) grid_imed_clipart_pane

0xd18a,	// (0x0005ba7d) scroll_pane_cp031

0x5d01,	// (0x000545f4) cell_imed_clipart_pane_ParamLimits

0x5d01,	// (0x000545f4) cell_imed_clipart_pane

0x5d1e,	// (0x00054611) cell_imed_clipart_pane_g1

0x99f4,	// (0x000582e7) grid_highlight_pane_cp014

0x59c8,	// (0x000542bb) main_clock2_pane_g1_ParamLimits

0x59c8,	// (0x000542bb) main_clock2_pane_g1

0x5b0e,	// (0x00054401) aid_call2_pane_cp10

0x5b20,	// (0x00054413) aid_call_pane_cp10

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g1

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g2

0x5b32,	// (0x00054425) popup_clock_analogue_window_cp10_g3

0x5b32,	// (0x00054425) popup_clock_analogue_window_cp10_g4

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0005e0ce) popup_clock_analogue_window_cp10_g

0x5b48,	// (0x0005443b) popup_clock_analogue_window_cp10_t1

0x5b79,	// (0x0005446c) clock_digital_number_pane_cp10_ParamLimits

0x5b79,	// (0x0005446c) clock_digital_number_pane_cp10

0x5b93,	// (0x00054486) clock_digital_number_pane_cp11_ParamLimits

0x5b93,	// (0x00054486) clock_digital_number_pane_cp11

0x5bad,	// (0x000544a0) clock_digital_number_pane_cp12_ParamLimits

0x5bad,	// (0x000544a0) clock_digital_number_pane_cp12

0x5bc7,	// (0x000544ba) clock_digital_number_pane_cp13_ParamLimits

0x5bc7,	// (0x000544ba) clock_digital_number_pane_cp13

0x5be1,	// (0x000544d4) clock_digital_separator_pane_cp10_ParamLimits

0x5be1,	// (0x000544d4) clock_digital_separator_pane_cp10

0x5bfb,	// (0x000544ee) popup_clock_digital_window_cp02_t1_ParamLimits

0x5bfb,	// (0x000544ee) popup_clock_digital_window_cp02_t1

0xa0c1,	// (0x000589b4) clock_digital_number_pane_cp10_g1

0xa0c1,	// (0x000589b4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0005e0e9) clock_digital_number_pane_cp10_g

0xa0c1,	// (0x000589b4) clock_digital_separator_pane_cp10_g1

0xa0c1,	// (0x000589b4) clock_digital_separator_pane_g2_cp10

0xb348,	// (0x00059c3b) navi_pane_vded_g4

0xb351,	// (0x00059c44) navi_pane_vded_g5

0xb35a,	// (0x00059c4d) navi_pane_vded_t1

0x99f4,	// (0x000582e7) main_vded_pane

0x5d27,	// (0x0005461a) main_vded_pane_g1

0x5d33,	// (0x00054626) main_vded_pane_g2

0x5d3f,	// (0x00054632) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0005e0ee) main_vded_pane_g

0x5d4b,	// (0x0005463e) main_vded_pane_t1

0x5d59,	// (0x0005464c) main_vded_pane_t2

0x0001,

0xf802,	// (0x0005e0f5) main_vded_pane_t

0x5d67,	// (0x0005465a) vded_slider_pane

0x5d71,	// (0x00054664) vded_video_pane

0xd192,	// (0x0005ba85) vded_video_pane_g1

0x5d7b,	// (0x0005466e) vded_video_pane_g2

0xcbf8,	// (0x0005b4eb) vded_video_pane_g3

0x0002,

0xf807,	// (0x0005e0fa) vded_video_pane_g

0xd19c,	// (0x0005ba8f) vded_slider_pane_g1

0xc945,	// (0x0005b238) vded_slider_pane_g2

0xd1a5,	// (0x0005ba98) vded_slider_pane_g3

0xd1ae,	// (0x0005baa1) vded_slider_pane_g4

0xd1b7,	// (0x0005baaa) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0005e101) vded_slider_pane_g

0x5739,	// (0x0005402c) mup3_rocker_pane_ParamLimits

0x5739,	// (0x0005402c) mup3_rocker_pane

0x5d84,	// (0x00054677) mup3_control_keys_pane_g1

0x5d8c,	// (0x0005467f) mup3_control_keys_pane_g2

0x5d94,	// (0x00054687) mup3_control_keys_pane_g3

0x5d9c,	// (0x0005468f) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0005e10c) mup3_control_keys_pane_g

0x0c4b,	// (0x0004f53e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c4b,	// (0x0004f53e) popup_toolbar2_fixed_window_cp01

0x576f,	// (0x00054062) popup_toolbar2_fixed_window_cp02_ParamLimits

0x576f,	// (0x00054062) popup_toolbar2_fixed_window_cp02

0xbb1f,	// (0x0005a412) popup_call2_audio_second_window_t4_ParamLimits

0xbb1f,	// (0x0005a412) popup_call2_audio_second_window_t4

0xc04d,	// (0x0005a940) popup_call2_audio_first_window_t6_ParamLimits

0xc04d,	// (0x0005a940) popup_call2_audio_first_window_t6

0xc2e3,	// (0x0005abd6) popup_call2_audio_out_window_t6_ParamLimits

0xc2e3,	// (0x0005abd6) popup_call2_audio_out_window_t6

0x99f4,	// (0x000582e7) main_vitu_pane

0x5dac,	// (0x0005469f) aid_size_cell_itu_ParamLimits

0x5dac,	// (0x0005469f) aid_size_cell_itu

0x9a4d,	// (0x00058340) bg_popup_window_pane_cp08_ParamLimits

0x9a4d,	// (0x00058340) bg_popup_window_pane_cp08

0x5dc2,	// (0x000546b5) field_vitu_entry_pane_ParamLimits

0x5dc2,	// (0x000546b5) field_vitu_entry_pane

0x5dd9,	// (0x000546cc) grid_vitu_function_pane_ParamLimits

0x5dd9,	// (0x000546cc) grid_vitu_function_pane

0x5df4,	// (0x000546e7) grid_vitu_itu_pane_ParamLimits

0x5df4,	// (0x000546e7) grid_vitu_itu_pane

0x5e12,	// (0x00054705) cell_vitu_itu_pane_ParamLimits

0x5e12,	// (0x00054705) cell_vitu_itu_pane

0x5e38,	// (0x0005472b) cell_vitu_function_pane_ParamLimits

0x5e38,	// (0x0005472b) cell_vitu_function_pane

0x9a4d,	// (0x00058340) bg_popup_sub_pane_cp08_ParamLimits

0x9a4d,	// (0x00058340) bg_popup_sub_pane_cp08

0x5e53,	// (0x00054746) field_vitu_entry_pane_t1_ParamLimits

0x5e53,	// (0x00054746) field_vitu_entry_pane_t1

0xd1d8,	// (0x0005bacb) field_vitu_entry_pane_t2_ParamLimits

0xd1d8,	// (0x0005bacb) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0005e11a) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0005e11a) field_vitu_entry_pane_t

0xd1f5,	// (0x0005bae8) bg_button_pane_cp05_ParamLimits

0xd1f5,	// (0x0005bae8) bg_button_pane_cp05

0x5e73,	// (0x00054766) cell_vitu_itu_pane_g1

0x5e8b,	// (0x0005477e) cell_vitu_itu_pane_t1_ParamLimits

0x5e8b,	// (0x0005477e) cell_vitu_itu_pane_t1

0x5e9d,	// (0x00054790) cell_vitu_itu_pane_t2_ParamLimits

0x5e9d,	// (0x00054790) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0005e11f) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0005e11f) cell_vitu_itu_pane_t

0xd203,	// (0x0005baf6) bg_button_pane_cp07

0x5ed2,	// (0x000547c5) cell_vitu_function_pane_g1

0xa150,	// (0x00058a43) main_calc_pane_g1

0x0a5f,	// (0x0004f352) aid_visual_content_pane

0x99f4,	// (0x000582e7) main_vradio_pane

0x5edb,	// (0x000547ce) main_vradio_pane_g1_ParamLimits

0x5edb,	// (0x000547ce) main_vradio_pane_g1

0xd20d,	// (0x0005bb00) main_vradio_pane_g2_ParamLimits

0xd20d,	// (0x0005bb00) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0005e126) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0005e126) main_vradio_pane_g

0x5ef2,	// (0x000547e5) main_vradio_pane_t1_ParamLimits

0x5ef2,	// (0x000547e5) main_vradio_pane_t1

0x5f07,	// (0x000547fa) main_vradio_pane_t2_ParamLimits

0x5f07,	// (0x000547fa) main_vradio_pane_t2

0xd21a,	// (0x0005bb0d) main_vradio_pane_t3_ParamLimits

0xd21a,	// (0x0005bb0d) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0005e12b) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0005e12b) main_vradio_pane_t

0x5f1c,	// (0x0005480f) vradio_rocker_control_pane_ParamLimits

0x5f1c,	// (0x0005480f) vradio_rocker_control_pane

0x5f2e,	// (0x00054821) vradio_station_info_pane_ParamLimits

0x5f2e,	// (0x00054821) vradio_station_info_pane

0xd22e,	// (0x0005bb21) vradio_frequency_info_pane_ParamLimits

0xd22e,	// (0x0005bb21) vradio_frequency_info_pane

0xcbf8,	// (0x0005b4eb) vradio_station_info_pane_g1

0xd23d,	// (0x0005bb30) vradio_station_info_pane_t1_ParamLimits

0xd23d,	// (0x0005bb30) vradio_station_info_pane_t1

0xd25f,	// (0x0005bb52) vradio_station_info_pane_t2_ParamLimits

0xd25f,	// (0x0005bb52) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0005e132) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0005e132) vradio_station_info_pane_t

0xd271,	// (0x0005bb64) vradio_tuning_pane

0xd279,	// (0x0005bb6c) vradio_rocker_control_pane_g1

0xd281,	// (0x0005bb74) vradio_rocker_control_pane_g2

0xd289,	// (0x0005bb7c) vradio_rocker_control_pane_g3

0xd291,	// (0x0005bb84) vradio_rocker_control_pane_g4

0xd299,	// (0x0005bb8c) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0005e137) vradio_rocker_control_pane_g

0x5f3e,	// (0x00054831) vradio_frequency_info_pane_g1

0xd2a1,	// (0x0005bb94) vradio_frequency_info_pane_t1_ParamLimits

0xd2a1,	// (0x0005bb94) vradio_frequency_info_pane_t1

0x5f48,	// (0x0005483b) vradio_tuning_pane_g1

0x5f53,	// (0x00054846) vradio_tuning_pane_t1

0x9a1a,	// (0x0005830d) area_side_right_pane_ParamLimits

0x9a1a,	// (0x0005830d) area_side_right_pane

0xc762,	// (0x0005b055) status_small_pane_g1

0xc76a,	// (0x0005b05d) status_small_pane_g2

0xc773,	// (0x0005b066) status_small_pane_g3

0xc77c,	// (0x0005b06f) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0005def2) status_small_pane_g

0xc785,	// (0x0005b078) status_small_pane_t1

0x99f4,	// (0x000582e7) main_video3_pane

0xd2b5,	// (0x0005bba8) cams_zoom_vslider_pane

0xd2bd,	// (0x0005bbb0) image3_wide_pane_ParamLimits

0xd2bd,	// (0x0005bbb0) image3_wide_pane

0xd2d7,	// (0x0005bbca) image3_wide_small_pane

0xd2e3,	// (0x0005bbd6) main_video3_pane_g1_ParamLimits

0xd2e3,	// (0x0005bbd6) main_video3_pane_g1

0xd313,	// (0x0005bc06) main_video3_pane_g2_ParamLimits

0xd313,	// (0x0005bc06) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0005e142) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0005e142) main_video3_pane_g

0xd32f,	// (0x0005bc22) main_video3_pane_t1_ParamLimits

0xd32f,	// (0x0005bc22) main_video3_pane_t1

0xd35a,	// (0x0005bc4d) main_video3_pane_t2_ParamLimits

0xd35a,	// (0x0005bc4d) main_video3_pane_t2

0xd387,	// (0x0005bc7a) main_video3_pane_t3_ParamLimits

0xd387,	// (0x0005bc7a) main_video3_pane_t3

0x0002,

0xf854,	// (0x0005e147) main_video3_pane_t_ParamLimits

0xf854,	// (0x0005e147) main_video3_pane_t

0xd3b4,	// (0x0005bca7) cams_zoom_vslider_pane_g1

0xd3bd,	// (0x0005bcb0) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0005e14e) cams_zoom_vslider_pane_g

0xd3c5,	// (0x0005bcb8) small_slider_vertical_pane

0xcbf8,	// (0x0005b4eb) small_slider_vertical_pane_g1

0xcbf8,	// (0x0005b4eb) small_slider_vertical_pane_g2

0xd3cd,	// (0x0005bcc0) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0005e153) small_slider_vertical_pane_g

0x99f4,	// (0x000582e7) main_hwr_training_pane

0xd3d6,	// (0x0005bcc9) hwr_training_instruct_pane_ParamLimits

0xd3d6,	// (0x0005bcc9) hwr_training_instruct_pane

0x5f62,	// (0x00054855) hwr_training_navi_pane_ParamLimits

0x5f62,	// (0x00054855) hwr_training_navi_pane

0x5f81,	// (0x00054874) hwr_training_write_pane_ParamLimits

0x5f81,	// (0x00054874) hwr_training_write_pane

0x99f4,	// (0x000582e7) bg_frame_shadow_pane

0xd40d,	// (0x0005bd00) hwr_training_write_pane_g1

0xd415,	// (0x0005bd08) hwr_training_write_pane_g2

0xd41d,	// (0x0005bd10) hwr_training_write_pane_g3

0xd425,	// (0x0005bd18) hwr_training_write_pane_g4

0xd42d,	// (0x0005bd20) hwr_training_write_pane_g5

0xd435,	// (0x0005bd28) hwr_training_write_pane_g6

0xd43d,	// (0x0005bd30) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0005e15a) hwr_training_write_pane_g

0xa828,	// (0x0005911b) hwr_training_navi_pane_g1_ParamLimits

0xa828,	// (0x0005911b) hwr_training_navi_pane_g1

0xa83a,	// (0x0005912d) hwr_training_navi_pane_g2_ParamLimits

0xa83a,	// (0x0005912d) hwr_training_navi_pane_g2

0xa84c,	// (0x0005913f) hwr_training_navi_pane_g3_ParamLimits

0xa84c,	// (0x0005913f) hwr_training_navi_pane_g3

0xa85c,	// (0x0005914f) hwr_training_navi_pane_g4_ParamLimits

0xa85c,	// (0x0005914f) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0005e169) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0005e169) hwr_training_navi_pane_g

0xa869,	// (0x0005915c) hwr_training_navi_pane_t1

0x5fc9,	// (0x000548bc) list_single_hwr_training_instruct_pane_ParamLimits

0x5fc9,	// (0x000548bc) list_single_hwr_training_instruct_pane

0xd445,	// (0x0005bd38) list_single_hwr_training_instruct_pane_t1

0xcb38,	// (0x0005b42b) bg_frame_shadow_pane_g1

0xd454,	// (0x0005bd47) bg_frame_shadow_pane_g2

0xd45c,	// (0x0005bd4f) bg_frame_shadow_pane_g3

0xd464,	// (0x0005bd57) bg_frame_shadow_pane_g4

0xd46c,	// (0x0005bd5f) bg_frame_shadow_pane_g5

0xd474,	// (0x0005bd67) bg_frame_shadow_pane_g6

0xd47c,	// (0x0005bd6f) bg_frame_shadow_pane_g7

0xa2a9,	// (0x00058b9c) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0005e174) bg_frame_shadow_pane_g

0x99f4,	// (0x000582e7) main_video_tele_dialer_pane

0x5fde,	// (0x000548d1) aid_size_cell_video_keypad_ParamLimits

0x5fde,	// (0x000548d1) aid_size_cell_video_keypad

0x5ff8,	// (0x000548eb) grid_video_dialer_keypad_pane_ParamLimits

0x5ff8,	// (0x000548eb) grid_video_dialer_keypad_pane

0x6044,	// (0x00054937) video_down_pane_cp_ParamLimits

0x6044,	// (0x00054937) video_down_pane_cp

0x6074,	// (0x00054967) cell_video_dialer_keypad_pane_ParamLimits

0x6074,	// (0x00054967) cell_video_dialer_keypad_pane

0xd484,	// (0x0005bd77) bg_button_pane_cp08_ParamLimits

0xd484,	// (0x0005bd77) bg_button_pane_cp08

0x6098,	// (0x0005498b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6098,	// (0x0005498b) cell_video_dialer_keypad_pane_g1

0x5723,	// (0x00054016) mup3_rocker2_pane_ParamLimits

0x5723,	// (0x00054016) mup3_rocker2_pane

0xcbf8,	// (0x0005b4eb) mup3_rocker2_pane_g1

0x420c,	// (0x00052aff) main_dialer2_pane

0x99f4,	// (0x000582e7) main_mp4_pane

0xa87f,	// (0x00059172) main_mp4_pane_g1_ParamLimits

0xa87f,	// (0x00059172) main_mp4_pane_g1

0xa87f,	// (0x00059172) main_mp4_pane_g2_ParamLimits

0xa87f,	// (0x00059172) main_mp4_pane_g2

0x60d3,	// (0x000549c6) main_mp4_pane_g3_ParamLimits

0x60d3,	// (0x000549c6) main_mp4_pane_g3

0xa88d,	// (0x00059180) main_mp4_pane_g4_ParamLimits

0xa88d,	// (0x00059180) main_mp4_pane_g4

0xa8b5,	// (0x000591a8) main_mp4_pane_g5_ParamLimits

0xa8b5,	// (0x000591a8) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0005e194) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0005e194) main_mp4_pane_g

0xa905,	// (0x000591f8) main_mp4_pane_t1_ParamLimits

0xa905,	// (0x000591f8) main_mp4_pane_t1

0xa961,	// (0x00059254) main_mp4_pane_t2_ParamLimits

0xa961,	// (0x00059254) main_mp4_pane_t2

0xd490,	// (0x0005bd83) main_mp4_pane_t3_ParamLimits

0xd490,	// (0x0005bd83) main_mp4_pane_t3

0xa9b3,	// (0x000592a6) main_mp4_pane_t4_ParamLimits

0xa9b3,	// (0x000592a6) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0005e1a1) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0005e1a1) main_mp4_pane_t

0xa9f3,	// (0x000592e6) mp4_progress_pane_ParamLimits

0xa9f3,	// (0x000592e6) mp4_progress_pane

0xaa3d,	// (0x00059330) mp4_rocker_pane_ParamLimits

0xaa3d,	// (0x00059330) mp4_rocker_pane

0xd4b8,	// (0x0005bdab) mp4_progress_pane_t1

0xd4d1,	// (0x0005bdc4) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0005e1aa) mp4_progress_pane_t

0xd4ea,	// (0x0005bddd) mup_progress_pane_cp04

0xcbf8,	// (0x0005b4eb) mp4_rocker_pane_g1

0x611d,	// (0x00054a10) aid_cell_size_keypad2_ParamLimits

0x611d,	// (0x00054a10) aid_cell_size_keypad2

0x6133,	// (0x00054a26) dialer2_ne_pane_ParamLimits

0x6133,	// (0x00054a26) dialer2_ne_pane

0x614b,	// (0x00054a3e) grid_dialer2_keypad_pane_ParamLimits

0x614b,	// (0x00054a3e) grid_dialer2_keypad_pane

0xc9d7,	// (0x0005b2ca) bg_popup_call_pane_cp07_ParamLimits

0xc9d7,	// (0x0005b2ca) bg_popup_call_pane_cp07

0x6167,	// (0x00054a5a) dialer2_ne_pane_t1_ParamLimits

0x6167,	// (0x00054a5a) dialer2_ne_pane_t1

0x61a2,	// (0x00054a95) cell_dialer2_keypad_pane_ParamLimits

0x61a2,	// (0x00054a95) cell_dialer2_keypad_pane

0xd508,	// (0x0005bdfb) bg_button_pane_pane_cp04_ParamLimits

0xd508,	// (0x0005bdfb) bg_button_pane_pane_cp04

0x61c6,	// (0x00054ab9) cell_dialer2_keypad_pane_g1_ParamLimits

0x61c6,	// (0x00054ab9) cell_dialer2_keypad_pane_g1

0x1d6c,	// (0x0005065f) aid_placing_vt_set_content_ParamLimits

0x1d6c,	// (0x0005065f) aid_placing_vt_set_content

0x1d90,	// (0x00050683) aid_placing_vt_set_title_ParamLimits

0x1d90,	// (0x00050683) aid_placing_vt_set_title

0x99f4,	// (0x000582e7) main_image3_pane

0x628c,	// (0x00054b7f) area_side_right_pane_cp01_ParamLimits

0x628c,	// (0x00054b7f) area_side_right_pane_cp01

0xa87f,	// (0x00059172) main_image3_pane_g1_ParamLimits

0xa87f,	// (0x00059172) main_image3_pane_g1

0x62a5,	// (0x00054b98) main_image3_pane_g2_ParamLimits

0x62a5,	// (0x00054b98) main_image3_pane_g2

0x62cd,	// (0x00054bc0) main_image3_pane_g3_ParamLimits

0x62cd,	// (0x00054bc0) main_image3_pane_g3

0x62f7,	// (0x00054bea) main_image3_pane_g4_ParamLimits

0x62f7,	// (0x00054bea) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0005e1b9) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0005e1b9) main_image3_pane_g

0x6321,	// (0x00054c14) main_image3_pane_t1_ParamLimits

0x6321,	// (0x00054c14) main_image3_pane_t1

0x6379,	// (0x00054c6c) main_image3_pane_t2_ParamLimits

0x6379,	// (0x00054c6c) main_image3_pane_t2

0x63cb,	// (0x00054cbe) main_image3_pane_t3_ParamLimits

0x63cb,	// (0x00054cbe) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0005e1c2) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0005e1c2) main_image3_pane_t

0x9a4d,	// (0x00058340) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a4d,	// (0x00058340) grid_sctrl_middle_pane_cp01

0x6453,	// (0x00054d46) cell_sctrl_middle_pane_cp01_ParamLimits

0x6453,	// (0x00054d46) cell_sctrl_middle_pane_cp01

0x6470,	// (0x00054d63) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6470,	// (0x00054d63) cell_sctrl_middle_pane_cp01_g1

0x99f4,	// (0x000582e7) main_call4_pane

0x6485,	// (0x00054d78) aid_size_button_call4_ParamLimits

0x6485,	// (0x00054d78) aid_size_button_call4

0x64b8,	// (0x00054dab) call4_windows_pane_ParamLimits

0x64b8,	// (0x00054dab) call4_windows_pane

0x64da,	// (0x00054dcd) grid_call4_button_pane_ParamLimits

0x64da,	// (0x00054dcd) grid_call4_button_pane

0xd514,	// (0x0005be07) call4_windows_conf_pane

0x6505,	// (0x00054df8) popup_call4_audio_first_window_ParamLimits

0x6505,	// (0x00054df8) popup_call4_audio_first_window

0x6531,	// (0x00054e24) popup_call4_audio_second_window_ParamLimits

0x6531,	// (0x00054e24) popup_call4_audio_second_window

0xd551,	// (0x0005be44) popup_call4_audio_wait_window_ParamLimits

0xd551,	// (0x0005be44) popup_call4_audio_wait_window

0x6547,	// (0x00054e3a) cell_call4_button_pane_ParamLimits

0x6547,	// (0x00054e3a) cell_call4_button_pane

0x656e,	// (0x00054e61) bg_button_pane_cp09_ParamLimits

0x656e,	// (0x00054e61) bg_button_pane_cp09

0x657a,	// (0x00054e6d) cell_call4_button_pane_g1_ParamLimits

0x657a,	// (0x00054e6d) cell_call4_button_pane_g1

0x65a0,	// (0x00054e93) cell_call4_button_pane_t1_ParamLimits

0x65a0,	// (0x00054e93) cell_call4_button_pane_t1

0xd599,	// (0x0005be8c) popup_call4_audio_conf_window_ParamLimits

0xd599,	// (0x0005be8c) popup_call4_audio_conf_window

0x5785,	// (0x00054078) mup3_progress_pane_t1_ParamLimits

0x57a3,	// (0x00054096) mup3_progress_pane_t2_ParamLimits

0xcea3,	// (0x0005b796) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0005e096) mup3_progress_pane_t_ParamLimits

0xcec0,	// (0x0005b7b3) mup_progress_pane_cp03_ParamLimits

0x5da4,	// (0x00054697) mup3_control_keys_pane_g4_copy1

0xaa21,	// (0x00059314) mp4_rocker2_pane_ParamLimits

0xaa21,	// (0x00059314) mp4_rocker2_pane

0xd5b3,	// (0x0005bea6) mp4_rocker2_pane_g1

0xd5bb,	// (0x0005beae) mp4_rocker2_pane_g2

0xaa93,	// (0x00059386) mp4_rocker2_pane_g3

0xaa9b,	// (0x0005938e) mp4_rocker2_pane_g4

0xaaa3,	// (0x00059396) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0005e1cb) mp4_rocker2_pane_g

0x99f4,	// (0x000582e7) main_camera4_pane

0x99f4,	// (0x000582e7) main_video4_pane

0x6012,	// (0x00054905) main_video_tele_dialer_pane_t1_ParamLimits

0x6012,	// (0x00054905) main_video_tele_dialer_pane_t1

0x602b,	// (0x0005491e) main_video_tele_dialer_pane_t2_ParamLimits

0x602b,	// (0x0005491e) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0005e185) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0005e185) main_video_tele_dialer_pane_t

0x65de,	// (0x00054ed1) cam4_autofocus_pane_ParamLimits

0x65de,	// (0x00054ed1) cam4_autofocus_pane

0x65f4,	// (0x00054ee7) cam4_image_uncrop_pane_ParamLimits

0x65f4,	// (0x00054ee7) cam4_image_uncrop_pane

0x660d,	// (0x00054f00) cam4_indicators_pane_ParamLimits

0x660d,	// (0x00054f00) cam4_indicators_pane

0x663c,	// (0x00054f2f) main_camera4_pane_g1_ParamLimits

0x663c,	// (0x00054f2f) main_camera4_pane_g1

0x664e,	// (0x00054f41) main_camera4_pane_g2_ParamLimits

0x664e,	// (0x00054f41) main_camera4_pane_g2

0x6661,	// (0x00054f54) main_camera4_pane_g3_ParamLimits

0x6661,	// (0x00054f54) main_camera4_pane_g3

0x6674,	// (0x00054f67) main_camera4_pane_g4_ParamLimits

0x6674,	// (0x00054f67) main_camera4_pane_g4

0x6687,	// (0x00054f7a) main_camera4_pane_g5_ParamLimits

0x6687,	// (0x00054f7a) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0005e1d6) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0005e1d6) main_camera4_pane_g

0x66ab,	// (0x00054f9e) main_camera4_pane_t1_ParamLimits

0x66ab,	// (0x00054f9e) main_camera4_pane_t1

0xce28,	// (0x0005b71b) bg_tb_trans_pane_cp06

0xaad1,	// (0x000593c4) cam4_indicators_pane_g1

0xaae2,	// (0x000593d5) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0005e1f1) cam4_indicators_pane_g

0xaafa,	// (0x000593ed) cam4_indicators_pane_t1

0x670f,	// (0x00055002) main_video4_pane_g1_ParamLimits

0x670f,	// (0x00055002) main_video4_pane_g1

0x671e,	// (0x00055011) main_video4_pane_g2_ParamLimits

0x671e,	// (0x00055011) main_video4_pane_g2

0x672d,	// (0x00055020) main_video4_pane_g3_ParamLimits

0x672d,	// (0x00055020) main_video4_pane_g3

0x673c,	// (0x0005502f) main_video4_pane_g4_ParamLimits

0x673c,	// (0x0005502f) main_video4_pane_g4

0x0004,

0xf905,	// (0x0005e1f8) main_video4_pane_g_ParamLimits

0xf905,	// (0x0005e1f8) main_video4_pane_g

0x675a,	// (0x0005504d) vid4_indicators_pane_ParamLimits

0x675a,	// (0x0005504d) vid4_indicators_pane

0x6788,	// (0x0005507b) video4_image_uncrop_cif_pane_ParamLimits

0x6788,	// (0x0005507b) video4_image_uncrop_cif_pane

0x67a2,	// (0x00055095) video4_image_uncrop_nhd_pane_ParamLimits

0x67a2,	// (0x00055095) video4_image_uncrop_nhd_pane

0x65f4,	// (0x00054ee7) video4_image_uncrop_vga_pane_ParamLimits

0x65f4,	// (0x00054ee7) video4_image_uncrop_vga_pane

0x9a4d,	// (0x00058340) bg_tb_trans_pane_cp07

0xab28,	// (0x0005941b) vid4_indicators_pane_g1

0xab3e,	// (0x00059431) vid4_indicators_pane_g2

0xab52,	// (0x00059445) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0005e203) vid4_indicators_pane_g

0xab83,	// (0x00059476) vid4_indicators_pane_t1

0x67b8,	// (0x000550ab) cam4_autofocus_pane_g1

0x67c0,	// (0x000550b3) cam4_autofocus_pane_g2

0x67c8,	// (0x000550bb) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0005e20e) cam4_autofocus_pane_g

0x67d0,	// (0x000550c3) cam4_autofocus_pane_g3_copy1

0x6058,	// (0x0005494b) video_down_pane_cp_t1

0x6066,	// (0x00054959) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0005e18a) video_down_pane_cp_t

0x9a4d,	// (0x00058340) popup_vitu2_window_ParamLimits

0x9a4d,	// (0x00058340) popup_vitu2_window

0x67d8,	// (0x000550cb) aid_size_cell2_itu2_ParamLimits

0x67d8,	// (0x000550cb) aid_size_cell2_itu2

0x67fe,	// (0x000550f1) aid_size_cell_itu2_ParamLimits

0x67fe,	// (0x000550f1) aid_size_cell_itu2

0x685e,	// (0x00055151) bg_popup_window_pane_cp09_ParamLimits

0x685e,	// (0x00055151) bg_popup_window_pane_cp09

0x686c,	// (0x0005515f) field_vitu2_entry_pane_ParamLimits

0x686c,	// (0x0005515f) field_vitu2_entry_pane

0x6894,	// (0x00055187) grid_vitu2_function_pane_ParamLimits

0x6894,	// (0x00055187) grid_vitu2_function_pane

0x68e5,	// (0x000551d8) grid_vitu2_itu_pane_ParamLimits

0x68e5,	// (0x000551d8) grid_vitu2_itu_pane

0x6979,	// (0x0005526c) cell_vitu2_itu_pane_ParamLimits

0x6979,	// (0x0005526c) cell_vitu2_itu_pane

0x699f,	// (0x00055292) cell_vitu2_function_pane_ParamLimits

0x699f,	// (0x00055292) cell_vitu2_function_pane

0xd5c3,	// (0x0005beb6) bg_popup_call_pane_cp08_ParamLimits

0xd5c3,	// (0x0005beb6) bg_popup_call_pane_cp08

0xd5da,	// (0x0005becd) field_vitu2_entry_pane_g1

0xd5e6,	// (0x0005bed9) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0005e215) field_vitu2_entry_pane_g

0xfdea,	// (0x0004e6dd) field_vitu2_entry_pane_t1_ParamLimits

0xfdea,	// (0x0004e6dd) field_vitu2_entry_pane_t1

0x69e3,	// (0x000552d6) field_vitu2_entry_pane_t2_ParamLimits

0x69e3,	// (0x000552d6) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0005e21c) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0005e21c) field_vitu2_entry_pane_t

0x6a00,	// (0x000552f3) bg_button_pane_cp010_ParamLimits

0x6a00,	// (0x000552f3) bg_button_pane_cp010

0xab9a,	// (0x0005948d) cell_vitu2_itu_pane_g1

0x6a1c,	// (0x0005530f) cell_vitu2_itu_pane_t1_ParamLimits

0x6a1c,	// (0x0005530f) cell_vitu2_itu_pane_t1

0xfe19,	// (0x0004e70c) cell_vitu2_itu_pane_t2_ParamLimits

0xfe19,	// (0x0004e70c) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0005e226) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0005e226) cell_vitu2_itu_pane_t

0x9a4d,	// (0x00058340) bg_button_pane_cp011

0x6a7a,	// (0x0005536d) cell_vitu2_function_pane_g1

0x99f4,	// (0x000582e7) main_myfav_hc_pane

0x641b,	// (0x00054d0e) popup_image3_note_pane_ParamLimits

0x641b,	// (0x00054d0e) popup_image3_note_pane

0x6437,	// (0x00054d2a) popup_image3_tool_bar_pane_ParamLimits

0x6437,	// (0x00054d2a) popup_image3_tool_bar_pane

0xfea7,	// (0x0004e79a) cell_vitu2_itu_pane_t3_ParamLimits

0xfea7,	// (0x0004e79a) cell_vitu2_itu_pane_t3

0x99f4,	// (0x000582e7) bg_popup_trans_pane

0xd608,	// (0x0005befb) grid_image3_tool_bar_pane

0xd612,	// (0x0005bf05) bg_popup_trans_pane_g1

0xa643,	// (0x00058f36) bg_popup_trans_pane_g2

0xd61a,	// (0x0005bf0d) bg_popup_trans_pane_g3

0xd622,	// (0x0005bf15) bg_popup_trans_pane_g4

0xd62a,	// (0x0005bf1d) bg_popup_trans_pane_g5

0xd632,	// (0x0005bf25) bg_popup_trans_pane_g6

0xd63a,	// (0x0005bf2d) bg_popup_trans_pane_g7

0xd642,	// (0x0005bf35) bg_popup_trans_pane_g8

0xa623,	// (0x00058f16) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0005e22d) bg_popup_trans_pane_g

0xd64a,	// (0x0005bf3d) cell_image3_tool_bar_pane_ParamLimits

0xd64a,	// (0x0005bf3d) cell_image3_tool_bar_pane

0xcbf8,	// (0x0005b4eb) cell_image3_tool_bar_pane_g1

0x99f4,	// (0x000582e7) bg_popup_trans_pane_cp1

0xd660,	// (0x0005bf53) popup_image3_note_pane_t1

0xd66e,	// (0x0005bf61) popup_image3_note_pane_t2

0xd67c,	// (0x0005bf6f) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0005e240) popup_image3_note_pane_t

0xd68c,	// (0x0005bf7f) popup_image3_note_pane_t3_copy1

0x6a8e,	// (0x00055381) bg_myfav_hc_instruction_pane_ParamLimits

0x6a8e,	// (0x00055381) bg_myfav_hc_instruction_pane

0x6aa6,	// (0x00055399) cell_myfav_contact_pane_ParamLimits

0x6aa6,	// (0x00055399) cell_myfav_contact_pane

0x6ac2,	// (0x000553b5) cell_myfav_contact_pane_cp1_ParamLimits

0x6ac2,	// (0x000553b5) cell_myfav_contact_pane_cp1

0x6ada,	// (0x000553cd) cell_myfav_contact_pane_cp2_ParamLimits

0x6ada,	// (0x000553cd) cell_myfav_contact_pane_cp2

0x6af2,	// (0x000553e5) cell_myfav_contact_pane_cp3_ParamLimits

0x6af2,	// (0x000553e5) cell_myfav_contact_pane_cp3

0x6b09,	// (0x000553fc) cell_myfav_contact_pane_cp4_ParamLimits

0x6b09,	// (0x000553fc) cell_myfav_contact_pane_cp4

0x6b21,	// (0x00055414) cell_myfav_contact_pane_cp5_ParamLimits

0x6b21,	// (0x00055414) cell_myfav_contact_pane_cp5

0x6b35,	// (0x00055428) cell_myfav_contact_pane_cp6_ParamLimits

0x6b35,	// (0x00055428) cell_myfav_contact_pane_cp6

0x6b4b,	// (0x0005543e) cell_myfav_contact_pane_cp7_ParamLimits

0x6b4b,	// (0x0005543e) cell_myfav_contact_pane_cp7

0xd69a,	// (0x0005bf8d) listscroll_gen_pane_cp05

0x6b63,	// (0x00055456) main_myfav_hc_pane_g1_ParamLimits

0x6b63,	// (0x00055456) main_myfav_hc_pane_g1

0x6b7d,	// (0x00055470) main_myfav_hc_pane_g2_ParamLimits

0x6b7d,	// (0x00055470) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0005e247) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0005e247) main_myfav_hc_pane_g

0x6bb1,	// (0x000554a4) main_myfav_hc_pane_t1_ParamLimits

0x6bb1,	// (0x000554a4) main_myfav_hc_pane_t1

0xd6a3,	// (0x0005bf96) main_myfav_hc_pane_t2_ParamLimits

0xd6a3,	// (0x0005bf96) main_myfav_hc_pane_t2

0xd6b5,	// (0x0005bfa8) main_myfav_hc_pane_t3_ParamLimits

0xd6b5,	// (0x0005bfa8) main_myfav_hc_pane_t3

0x6bc8,	// (0x000554bb) main_myfav_hc_pane_t4_ParamLimits

0x6bc8,	// (0x000554bb) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0005e24e) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0005e24e) main_myfav_hc_pane_t

0xcbf8,	// (0x0005b4eb) bg_myfav_hc_instruction_pane_g1

0xd6c7,	// (0x0005bfba) cell_myfav_contact_pane_g1_ParamLimits

0xd6c7,	// (0x0005bfba) cell_myfav_contact_pane_g1

0xd6c7,	// (0x0005bfba) cell_myfav_contact_pane_g2_ParamLimits

0xd6c7,	// (0x0005bfba) cell_myfav_contact_pane_g2

0xd6d3,	// (0x0005bfc6) cell_myfav_contact_pane_g3_ParamLimits

0xd6d3,	// (0x0005bfc6) cell_myfav_contact_pane_g3

0xce8d,	// (0x0005b780) cell_myfav_contact_pane_g4_ParamLimits

0xce8d,	// (0x0005b780) cell_myfav_contact_pane_g4

0xd6e0,	// (0x0005bfd3) cell_myfav_contact_pane_g5_ParamLimits

0xd6e0,	// (0x0005bfd3) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0005e259) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0005e259) cell_myfav_contact_pane_g

0x6b97,	// (0x0005548a) main_myfav_hc_pane_g3_ParamLimits

0x6b97,	// (0x0005548a) main_myfav_hc_pane_g3

0x0bac,	// (0x0004f49f) popup_adpt_find_window

0x6bf2,	// (0x000554e5) afind_page_pane_ParamLimits

0x6bf2,	// (0x000554e5) afind_page_pane

0x6c07,	// (0x000554fa) aid_size_cell_afind_ParamLimits

0x6c07,	// (0x000554fa) aid_size_cell_afind

0x6c25,	// (0x00055518) bg_popup_sub_pane_cp09_ParamLimits

0x6c25,	// (0x00055518) bg_popup_sub_pane_cp09

0x6c32,	// (0x00055525) find_pane_cp01_ParamLimits

0x6c32,	// (0x00055525) find_pane_cp01

0xd6ec,	// (0x0005bfdf) grid_afind_control_pane_ParamLimits

0xd6ec,	// (0x0005bfdf) grid_afind_control_pane

0x6c3f,	// (0x00055532) grid_afind_pane_ParamLimits

0x6c3f,	// (0x00055532) grid_afind_pane

0x6c61,	// (0x00055554) cell_afind_pane_ParamLimits

0x6c61,	// (0x00055554) cell_afind_pane

0xcbf8,	// (0x0005b4eb) afind_page_pane_g1

0x6cca,	// (0x000555bd) afind_page_pane_g2

0x6cd3,	// (0x000555c6) afind_page_pane_g3

0x0002,

0xf971,	// (0x0005e264) afind_page_pane_g

0x6cdc,	// (0x000555cf) afind_page_pane_t1

0xd700,	// (0x0005bff3) cell_afind_grid_control_pane_ParamLimits

0xd700,	// (0x0005bff3) cell_afind_grid_control_pane

0xd508,	// (0x0005bdfb) bg_button_pane_cp69_ParamLimits

0xd508,	// (0x0005bdfb) bg_button_pane_cp69

0x6cfc,	// (0x000555ef) cell_afind_pane_g1_ParamLimits

0x6cfc,	// (0x000555ef) cell_afind_pane_g1

0x6d09,	// (0x000555fc) cell_afind_pane_t1_ParamLimits

0x6d09,	// (0x000555fc) cell_afind_pane_t1

0xa438,	// (0x00058d2b) bg_button_pane_cp72

0xd70f,	// (0x0005c002) cell_afind_grid_control_pane_g1

0x3caf,	// (0x000525a2) aid_image_placing_area_ParamLimits

0x3caf,	// (0x000525a2) aid_image_placing_area

0xd1c0,	// (0x0005bab3) field_vitu_entry_pane_g1_ParamLimits

0xd1c0,	// (0x0005bab3) field_vitu_entry_pane_g1

0xd1cc,	// (0x0005babf) field_vitu_entry_pane_g2_ParamLimits

0xd1cc,	// (0x0005babf) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0005e115) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0005e115) field_vitu_entry_pane_g

0x5e73,	// (0x00054766) cell_vitu_itu_pane_g1_ParamLimits

0x5eb5,	// (0x000547a8) cell_vitu_itu_pane_t3_ParamLimits

0x5eb5,	// (0x000547a8) cell_vitu_itu_pane_t3

0xd4b8,	// (0x0005bdab) mp4_progress_pane_t1_ParamLimits

0xd4d1,	// (0x0005bdc4) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0005e1aa) mp4_progress_pane_t_ParamLimits

0xd4ea,	// (0x0005bddd) mup_progress_pane_cp04_ParamLimits

0x6bdc,	// (0x000554cf) main_myfav_hc_pane_t5_ParamLimits

0x6bdc,	// (0x000554cf) main_myfav_hc_pane_t5

0x9a12,	// (0x00058305) aid_zoom_text_primary

0x0bac,	// (0x0004f49f) popup_adpt_find_window_ParamLimits

0x9a4d,	// (0x00058340) main_cam_set_pane

0x6626,	// (0x00054f19) cam4_zoom_pane_ParamLimits

0x6626,	// (0x00054f19) cam4_zoom_pane

0x6d1b,	// (0x0005560e) main_cam_set_pane_g1_ParamLimits

0x6d1b,	// (0x0005560e) main_cam_set_pane_g1

0x6d29,	// (0x0005561c) main_cam_set_pane_g2_ParamLimits

0x6d29,	// (0x0005561c) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0005e26b) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0005e26b) main_cam_set_pane_g

0x6d4a,	// (0x0005563d) main_cam_set_pane_t1_ParamLimits

0x6d4a,	// (0x0005563d) main_cam_set_pane_t1

0x6d65,	// (0x00055658) main_cset_listscroll_pane_ParamLimits

0x6d65,	// (0x00055658) main_cset_listscroll_pane

0x6d89,	// (0x0005567c) main_cset_slider_pane_ParamLimits

0x6d89,	// (0x0005567c) main_cset_slider_pane

0xd720,	// (0x0005c013) main_cset_list_pane_ParamLimits

0xd720,	// (0x0005c013) main_cset_list_pane

0xd730,	// (0x0005c023) scroll_pane_cp028

0x6db3,	// (0x000556a6) aid_area_touch_slider

0x6dcf,	// (0x000556c2) cset_slider_pane

0x6df9,	// (0x000556ec) main_cset_slider_pane_g1

0x6e0e,	// (0x00055701) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0005e270) main_cset_slider_pane_g

0xd769,	// (0x0005c05c) main_cset_slider_pane_t1

0x6ed0,	// (0x000557c3) main_cset_slider_pane_t2

0x6eea,	// (0x000557dd) main_cset_slider_pane_t3

0x6f04,	// (0x000557f7) main_cset_slider_pane_t4

0x6f1e,	// (0x00055811) main_cset_slider_pane_t5

0x6f3c,	// (0x0005582f) main_cset_slider_pane_t6

0x6f51,	// (0x00055844) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0005e295) main_cset_slider_pane_t

0x705d,	// (0x00055950) cset_list_set_pane_ParamLimits

0x705d,	// (0x00055950) cset_list_set_pane

0x7071,	// (0x00055964) aid_position_infowindow_above

0x7079,	// (0x0005596c) aid_position_infowindow_below

0xff05,	// (0x0004e7f8) cset_list_set_pane_g1_ParamLimits

0xff05,	// (0x0004e7f8) cset_list_set_pane_g1

0xff11,	// (0x0004e804) cset_list_set_pane_g3_ParamLimits

0xff11,	// (0x0004e804) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0005e2b4) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0005e2b4) cset_list_set_pane_g

0xff20,	// (0x0004e813) cset_list_set_pane_t1_ParamLimits

0xff20,	// (0x0004e813) cset_list_set_pane_t1

0x9a4d,	// (0x00058340) list_highlight_pane_cp021_ParamLimits

0x9a4d,	// (0x00058340) list_highlight_pane_cp021

0xb4b6,	// (0x00059da9) cset_slider_pane_g1

0xb4c8,	// (0x00059dbb) cset_slider_pane_g2

0xb4bf,	// (0x00059db2) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0005e2b9) cset_slider_pane_g

0xabac,	// (0x0005949f) aid_area_touch_cam4_zoom

0xabb4,	// (0x000594a7) cam4_zoom_cont_pane

0xabbc,	// (0x000594af) cam4_zoom_pane_g1

0xabc4,	// (0x000594b7) cam4_zoom_pane_g2

0x7081,	// (0x00055974) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0005e2c0) cam4_zoom_pane_g

0xd809,	// (0x0005c0fc) cam4_zoom_cont_pane_g1

0xd812,	// (0x0005c105) cam4_zoom_cont_pane_g2

0xd81b,	// (0x0005c10e) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0005e2c7) cam4_zoom_cont_pane_g

0x64a3,	// (0x00054d96) call4_image_pane_ParamLimits

0x64a3,	// (0x00054d96) call4_image_pane

0xd514,	// (0x0005be07) call4_windows_conf_pane_ParamLimits

0xd52f,	// (0x0005be22) popup_call4_audio_in_window_ParamLimits

0xd52f,	// (0x0005be22) popup_call4_audio_in_window

0x99f4,	// (0x000582e7) bg_popup_call2_act_pane_cp02

0xd591,	// (0x0005be84) call4_list_conf_pane

0xcbf8,	// (0x0005b4eb) call4_image_pane_g1

0xcbf8,	// (0x0005b4eb) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0005dfd6) call4_image_pane_g

0xd824,	// (0x0005c117) list_single_graphic_popup_conf4_pane_ParamLimits

0xd824,	// (0x0005c117) list_single_graphic_popup_conf4_pane

0x99f4,	// (0x000582e7) list_highlight_pane_cp022

0xd839,	// (0x0005c12c) list_single_graphic_popup_conf4_pane_g1

0xb1aa,	// (0x00059a9d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0005e2ce) list_single_graphic_popup_conf4_pane_g

0xd841,	// (0x0005c134) list_single_graphic_popup_conf4_pane_t1

0x1ea7,	// (0x0005079a) popup_vtel_slider_window_ParamLimits

0x1ea7,	// (0x0005079a) popup_vtel_slider_window

0xd4f6,	// (0x0005bde9) dialer2_ne_pane_t2_ParamLimits

0xd4f6,	// (0x0005bde9) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0005e1af) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0005e1af) dialer2_ne_pane_t

0xc9d7,	// (0x0005b2ca) bg_popup_sub_pane_cp010_ParamLimits

0xc9d7,	// (0x0005b2ca) bg_popup_sub_pane_cp010

0x7089,	// (0x0005597c) popup_vtel_slider_window_g1_ParamLimits

0x7089,	// (0x0005597c) popup_vtel_slider_window_g1

0x709c,	// (0x0005598f) popup_vtel_slider_window_g2_ParamLimits

0x709c,	// (0x0005598f) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0005e2d3) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0005e2d3) popup_vtel_slider_window_g

0x70f2,	// (0x000559e5) vtel_slider_pane_ParamLimits

0x70f2,	// (0x000559e5) vtel_slider_pane

0x7114,	// (0x00055a07) vtel_slider_pane_g1_ParamLimits

0x7114,	// (0x00055a07) vtel_slider_pane_g1

0x7128,	// (0x00055a1b) vtel_slider_pane_g2_ParamLimits

0x7128,	// (0x00055a1b) vtel_slider_pane_g2

0x7140,	// (0x00055a33) vtel_slider_pane_g3_ParamLimits

0x7140,	// (0x00055a33) vtel_slider_pane_g3

0x7114,	// (0x00055a07) vtel_slider_pane_g4_ParamLimits

0x7114,	// (0x00055a07) vtel_slider_pane_g4

0x7156,	// (0x00055a49) vtel_slider_pane_g5_ParamLimits

0x7156,	// (0x00055a49) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0005e2dc) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0005e2dc) vtel_slider_pane_g

0x9a4d,	// (0x00058340) main_gallery2_pane

0x682a,	// (0x0005511d) aid_size_row_itut2_dropdow_list_ParamLimits

0x682a,	// (0x0005511d) aid_size_row_itut2_dropdow_list

0x68bc,	// (0x000551af) grid_vitu2_function_top_pane_ParamLimits

0x68bc,	// (0x000551af) grid_vitu2_function_top_pane

0x6920,	// (0x00055213) popup_vitu2_dropdown_list_window_ParamLimits

0x6920,	// (0x00055213) popup_vitu2_dropdown_list_window

0x694d,	// (0x00055240) popup_vitu2_match_list_window

0x716c,	// (0x00055a5f) cell_vitu2_function_top_pane_ParamLimits

0x716c,	// (0x00055a5f) cell_vitu2_function_top_pane

0x718c,	// (0x00055a7f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x718c,	// (0x00055a7f) cell_vitu2_function_top_pane_cp01

0x71a8,	// (0x00055a9b) cell_vitu2_function_top_wide_pane_ParamLimits

0x71a8,	// (0x00055a9b) cell_vitu2_function_top_wide_pane

0x9a4d,	// (0x00058340) bg_button_pane_cp012

0x71c4,	// (0x00055ab7) cell_vitu2_function_top_pane_g1

0xabcc,	// (0x000594bf) bg_button_pane_cp013_ParamLimits

0xabcc,	// (0x000594bf) bg_button_pane_cp013

0x71d8,	// (0x00055acb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71d8,	// (0x00055acb) cell_vitu2_function_top_wide_pane_g1

0x9a4d,	// (0x00058340) bg_popup_sub_pane_cp20

0x71f0,	// (0x00055ae3) list_vitu2_match_list_pane

0xd612,	// (0x0005bf05) bg_popup_sub_pane_cp20_g1

0xd61a,	// (0x0005bf0d) bg_popup_sub_pane_cp20_g2

0xa643,	// (0x00058f36) bg_popup_sub_pane_cp20_g3

0xd622,	// (0x0005bf15) bg_popup_sub_pane_cp20_g4

0xa623,	// (0x00058f16) bg_popup_sub_pane_cp20_g5

0xd857,	// (0x0005c14a) bg_popup_sub_pane_cp20_g6

0xd632,	// (0x0005bf25) bg_popup_sub_pane_cp20_g7

0xd63a,	// (0x0005bf2d) bg_popup_sub_pane_cp20_g8

0xd642,	// (0x0005bf35) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0005e2e7) bg_popup_sub_pane_cp20_g

0xabe8,	// (0x000594db) list_vitu2_match_list_item_pane_ParamLimits

0xabe8,	// (0x000594db) list_vitu2_match_list_item_pane

0xabfa,	// (0x000594ed) list_vitu2_match_list_item_pane_t1

0x99f4,	// (0x000582e7) bg_popup_sub_pane_cp21

0xb0d3,	// (0x000599c6) grid_vitu2_dropdown_list_pane

0x720e,	// (0x00055b01) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x720e,	// (0x00055b01) cell_vitu2_dropdown_list_char_pane

0x7231,	// (0x00055b24) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7231,	// (0x00055b24) cell_vitu2_dropdown_list_ctrl_pane

0xd85f,	// (0x0005c152) cell_vitu2_dropdown_list_char_pane_g1

0xd868,	// (0x0005c15b) cell_vitu2_dropdown_list_char_pane_g2

0xd871,	// (0x0005c164) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0005e304) cell_vitu2_dropdown_list_char_pane_g

0x725f,	// (0x00055b52) cell_vitu2_dropdown_list_char_pane_t1

0x726d,	// (0x00055b60) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x726d,	// (0x00055b60) cell_vitu2_dropdown_list_ctrl_pane_g1

0x727d,	// (0x00055b70) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x727d,	// (0x00055b70) cell_vitu2_dropdown_list_ctrl_pane_g2

0x728e,	// (0x00055b81) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x728e,	// (0x00055b81) cell_vitu2_dropdown_list_ctrl_pane_g3

0x729e,	// (0x00055b91) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x729e,	// (0x00055b91) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce28,	// (0x0005b71b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce28,	// (0x0005b71b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0005e30b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0005e30b) cell_vitu2_dropdown_list_ctrl_pane_g

0x72ba,	// (0x00055bad) aid_size_cell_gallery2_ParamLimits

0x72ba,	// (0x00055bad) aid_size_cell_gallery2

0x72d8,	// (0x00055bcb) grid_gallery2_pane_ParamLimits

0x72d8,	// (0x00055bcb) grid_gallery2_pane

0x72f2,	// (0x00055be5) scroll_pane_cp029_ParamLimits

0x72f2,	// (0x00055be5) scroll_pane_cp029

0x72fe,	// (0x00055bf1) cell_gallery2_pane_ParamLimits

0x72fe,	// (0x00055bf1) cell_gallery2_pane

0xd87a,	// (0x0005c16d) cell_gallery2_pane_g2

0x735f,	// (0x00055c52) cell_gallery2_pane_g3

0xd882,	// (0x0005c175) cell_gallery2_pane_g4

0xd88a,	// (0x0005c17d) cell_gallery2_pane_g5

0xa3dc,	// (0x00058ccf) grid_highlight_pane_cp10

0x694d,	// (0x00055240) popup_vitu2_match_list_window_ParamLimits

0x6964,	// (0x00055257) popup_vitu2_query_window_ParamLimits

0x6964,	// (0x00055257) popup_vitu2_query_window

0x99f4,	// (0x000582e7) bg_vitu2_candi_button_pane

0xd85f,	// (0x0005c152) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd868,	// (0x0005c15b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd871,	// (0x0005c164) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff8d,	// (0x0004e880) bg_button_pane_cp015

0x7367,	// (0x00055c5a) bg_button_pane_cp016

0x737a,	// (0x00055c6d) bg_button_pane_cp017

0xc7a7,	// (0x0005b09a) bg_popup_sub_pane_cp22

0xd892,	// (0x0005c185) popup_vitu2_query_window_g1

0xffc2,	// (0x0004e8b5) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0005e316) popup_vitu2_query_window_g

0xffe1,	// (0x0004e8d4) popup_vitu2_query_window_t1_ParamLimits

0xffe1,	// (0x0004e8d4) popup_vitu2_query_window_t1

0x0016,	// (0x0004e909) popup_vitu2_query_window_t2_ParamLimits

0x0016,	// (0x0004e909) popup_vitu2_query_window_t2

0x0028,	// (0x0004e91b) popup_vitu2_query_window_t3_ParamLimits

0x0028,	// (0x0004e91b) popup_vitu2_query_window_t3

0x739e,	// (0x00055c91) popup_vitu2_query_window_t4_ParamLimits

0x739e,	// (0x00055c91) popup_vitu2_query_window_t4

0x73bf,	// (0x00055cb2) popup_vitu2_query_window_t5_ParamLimits

0x73bf,	// (0x00055cb2) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0005e31d) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0005e31d) popup_vitu2_query_window_t

0xd718,	// (0x0005c00b) main_cset_text_pane

0x6db3,	// (0x000556a6) aid_area_touch_slider_ParamLimits

0x6dcf,	// (0x000556c2) cset_slider_pane_ParamLimits

0x6df9,	// (0x000556ec) main_cset_slider_pane_g1_ParamLimits

0x6e0e,	// (0x00055701) main_cset_slider_pane_g2_ParamLimits

0xd739,	// (0x0005c02c) main_cset_slider_pane_g3_ParamLimits

0xd739,	// (0x0005c02c) main_cset_slider_pane_g3

0x6e23,	// (0x00055716) main_cset_slider_pane_g4_ParamLimits

0x6e23,	// (0x00055716) main_cset_slider_pane_g4

0x6e32,	// (0x00055725) main_cset_slider_pane_g5_ParamLimits

0x6e32,	// (0x00055725) main_cset_slider_pane_g5

0x6e40,	// (0x00055733) main_cset_slider_pane_g6_ParamLimits

0x6e40,	// (0x00055733) main_cset_slider_pane_g6

0xf97d,	// (0x0005e270) main_cset_slider_pane_g_ParamLimits

0xd769,	// (0x0005c05c) main_cset_slider_pane_t1_ParamLimits

0x6ed0,	// (0x000557c3) main_cset_slider_pane_t2_ParamLimits

0x6eea,	// (0x000557dd) main_cset_slider_pane_t3_ParamLimits

0x6f04,	// (0x000557f7) main_cset_slider_pane_t4_ParamLimits

0x6f1e,	// (0x00055811) main_cset_slider_pane_t5_ParamLimits

0x6f3c,	// (0x0005582f) main_cset_slider_pane_t6_ParamLimits

0x6f51,	// (0x00055844) main_cset_slider_pane_t7_ParamLimits

0x6f7f,	// (0x00055872) main_cset_slider_pane_t8_ParamLimits

0x6f7f,	// (0x00055872) main_cset_slider_pane_t8

0x6fa7,	// (0x0005589a) main_cset_slider_pane_t9_ParamLimits

0x6fa7,	// (0x0005589a) main_cset_slider_pane_t9

0x6fcf,	// (0x000558c2) main_cset_slider_pane_t10_ParamLimits

0x6fcf,	// (0x000558c2) main_cset_slider_pane_t10

0x6ff7,	// (0x000558ea) main_cset_slider_pane_t11_ParamLimits

0x6ff7,	// (0x000558ea) main_cset_slider_pane_t11

0x7021,	// (0x00055914) main_cset_slider_pane_t12_ParamLimits

0x7021,	// (0x00055914) main_cset_slider_pane_t12

0x703e,	// (0x00055931) main_cset_slider_pane_t13_ParamLimits

0x703e,	// (0x00055931) main_cset_slider_pane_t13

0xf9a2,	// (0x0005e295) main_cset_slider_pane_t_ParamLimits

0x99f4,	// (0x000582e7) bg_popup_sub_pane_cp011

0xd89e,	// (0x0005c191) main_cset_text_pane_g1

0xd8a6,	// (0x0005c199) main_cset_text_pane_t1

0xd8b4,	// (0x0005c1a7) main_cset_text_pane_t2

0xd8c2,	// (0x0005c1b5) main_cset_text_pane_t3

0xd8d0,	// (0x0005c1c3) main_cset_text_pane_t4

0xd8de,	// (0x0005c1d1) main_cset_text_pane_t5

0xd8ec,	// (0x0005c1df) main_cset_text_pane_t6

0xd8fa,	// (0x0005c1ed) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0005e32c) main_cset_text_pane_t

0x99f4,	// (0x000582e7) main_cam4_burst_pane

0x99f4,	// (0x000582e7) main_cam5_pane

0x6cea,	// (0x000555dd) bg_button_pane_cp019

0x6cf3,	// (0x000555e6) bg_button_pane_cp020

0xd745,	// (0x0005c038) main_cset_slider_pane_g7_ParamLimits

0xd745,	// (0x0005c038) main_cset_slider_pane_g7

0xd751,	// (0x0005c044) main_cset_slider_pane_g8_ParamLimits

0xd751,	// (0x0005c044) main_cset_slider_pane_g8

0x6e54,	// (0x00055747) main_cset_slider_pane_g9_ParamLimits

0x6e54,	// (0x00055747) main_cset_slider_pane_g9

0x6e60,	// (0x00055753) main_cset_slider_pane_g10_ParamLimits

0x6e60,	// (0x00055753) main_cset_slider_pane_g10

0x6e6c,	// (0x0005575f) main_cset_slider_pane_g11_ParamLimits

0x6e6c,	// (0x0005575f) main_cset_slider_pane_g11

0x6e78,	// (0x0005576b) main_cset_slider_pane_g12_ParamLimits

0x6e78,	// (0x0005576b) main_cset_slider_pane_g12

0x6e84,	// (0x00055777) main_cset_slider_pane_g13_ParamLimits

0x6e84,	// (0x00055777) main_cset_slider_pane_g13

0x6e90,	// (0x00055783) main_cset_slider_pane_g14_ParamLimits

0x6e90,	// (0x00055783) main_cset_slider_pane_g14

0x6e9c,	// (0x0005578f) main_cset_slider_pane_g15_ParamLimits

0x6e9c,	// (0x0005578f) main_cset_slider_pane_g15

0xd797,	// (0x0005c08a) main_cset_slider_pane_t14_ParamLimits

0xd797,	// (0x0005c08a) main_cset_slider_pane_t14

0xd7d0,	// (0x0005c0c3) main_cset_slider_pane_t15_ParamLimits

0xd7d0,	// (0x0005c0c3) main_cset_slider_pane_t15

0x73e0,	// (0x00055cd3) aid_cam4_burst_size_cell_ParamLimits

0x73e0,	// (0x00055cd3) aid_cam4_burst_size_cell

0x7400,	// (0x00055cf3) grid_cam4_burst_pane_ParamLimits

0x7400,	// (0x00055cf3) grid_cam4_burst_pane

0x743a,	// (0x00055d2d) linegrid_cam4_burst_pane_ParamLimits

0x743a,	// (0x00055d2d) linegrid_cam4_burst_pane

0xd908,	// (0x0005c1fb) scroll_pane_cp30_ParamLimits

0xd908,	// (0x0005c1fb) scroll_pane_cp30

0x745c,	// (0x00055d4f) cell_cam4_burst_pane_ParamLimits

0x745c,	// (0x00055d4f) cell_cam4_burst_pane

0xd914,	// (0x0005c207) linegrid_cam4_burst_pane_g1_ParamLimits

0xd914,	// (0x0005c207) linegrid_cam4_burst_pane_g1

0x74b1,	// (0x00055da4) linegrid_cam4_burst_pane_g2_ParamLimits

0x74b1,	// (0x00055da4) linegrid_cam4_burst_pane_g2

0xd921,	// (0x0005c214) linegrid_cam4_burst_pane_g3_ParamLimits

0xd921,	// (0x0005c214) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0005e33b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005e33b) linegrid_cam4_burst_pane_g

0x74c2,	// (0x00055db5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74c2,	// (0x00055db5) linegrid_cam4_burst_pane_g3_copy1

0xd92e,	// (0x0005c221) linegrid_cam4_burst_pane_g4_ParamLimits

0xd92e,	// (0x0005c221) linegrid_cam4_burst_pane_g4

0x74e0,	// (0x00055dd3) linegrid_cam4_burst_pane_g5_ParamLimits

0x74e0,	// (0x00055dd3) linegrid_cam4_burst_pane_g5

0x74f1,	// (0x00055de4) linegrid_cam4_burst_pane_g6_ParamLimits

0x74f1,	// (0x00055de4) linegrid_cam4_burst_pane_g6

0xd93b,	// (0x0005c22e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd93b,	// (0x0005c22e) linegrid_cam4_burst_pane_g7

0x7508,	// (0x00055dfb) cell_cam4_burst_pane_g1

0xd954,	// (0x0005c247) main_cam5_pane_t1_ParamLimits

0xd954,	// (0x0005c247) main_cam5_pane_t1

0xd966,	// (0x0005c259) main_cam5_pane_t2_ParamLimits

0xd966,	// (0x0005c259) main_cam5_pane_t2

0xd978,	// (0x0005c26b) main_cam5_pane_t3_ParamLimits

0xd978,	// (0x0005c26b) main_cam5_pane_t3

0xd98a,	// (0x0005c27d) main_cam5_pane_t4_ParamLimits

0xd98a,	// (0x0005c27d) main_cam5_pane_t4

0xd9a2,	// (0x0005c295) main_cam5_pane_t5_ParamLimits

0xd9a2,	// (0x0005c295) main_cam5_pane_t5

0xd9b6,	// (0x0005c2a9) main_cam5_pane_t6_ParamLimits

0xd9b6,	// (0x0005c2a9) main_cam5_pane_t6

0xd9ca,	// (0x0005c2bd) main_cam5_pane_t7_ParamLimits

0xd9ca,	// (0x0005c2bd) main_cam5_pane_t7

0xd9dc,	// (0x0005c2cf) main_cam5_pane_t8_ParamLimits

0xd9dc,	// (0x0005c2cf) main_cam5_pane_t8

0xd9fa,	// (0x0005c2ed) main_cam5_pane_t9_ParamLimits

0xd9fa,	// (0x0005c2ed) main_cam5_pane_t9

0xda0c,	// (0x0005c2ff) main_cam5_pane_t10_ParamLimits

0xda0c,	// (0x0005c2ff) main_cam5_pane_t10

0xda1e,	// (0x0005c311) main_cam5_pane_t11_ParamLimits

0xda1e,	// (0x0005c311) main_cam5_pane_t11

0xda32,	// (0x0005c325) main_cam5_pane_t12_ParamLimits

0xda32,	// (0x0005c325) main_cam5_pane_t12

0xda49,	// (0x0005c33c) main_cam5_pane_t13_ParamLimits

0xda49,	// (0x0005c33c) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0005e347) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0005e347) main_cam5_pane_t

0x0c2f,	// (0x0004f522) popup_scut_keymap_window_ParamLimits

0x0c2f,	// (0x0004f522) popup_scut_keymap_window

0x751b,	// (0x00055e0e) aid_size_cell_brow_shortcut

0xa3dc,	// (0x00058ccf) bg_popup_window_pane_cp010

0x7527,	// (0x00055e1a) grid_scut_pane

0x7533,	// (0x00055e26) cell_scut_pane_ParamLimits

0x7533,	// (0x00055e26) cell_scut_pane

0x754c,	// (0x00055e3f) cell_scut_pane_g1

0xda6c,	// (0x0005c35f) cell_scut_pane_t1

0xda7b,	// (0x0005c36e) cell_scut_pane_t2

0x7555,	// (0x00055e48) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0005e362) cell_scut_pane_t

0x533c,	// (0x00053c2f) main_mup3_pane_g8_ParamLimits

0x533c,	// (0x00053c2f) main_mup3_pane_g8

0x6846,	// (0x00055139) area_vitu2_query_pane_ParamLimits

0x6846,	// (0x00055139) area_vitu2_query_pane

0xffa1,	// (0x0004e894) input_focus_pane_cp08

0xda8a,	// (0x0005c37d) area_vitu2_query_pane_g1

0x00a6,	// (0x0004e999) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0005e369) area_vitu2_query_pane_g

0x7563,	// (0x00055e56) area_vitu2_query_pane_t1_ParamLimits

0x7563,	// (0x00055e56) area_vitu2_query_pane_t1

0x7577,	// (0x00055e6a) area_vitu2_query_pane_t2_ParamLimits

0x7577,	// (0x00055e6a) area_vitu2_query_pane_t2

0x00b7,	// (0x0004e9aa) area_vitu2_query_pane_t3_ParamLimits

0x00b7,	// (0x0004e9aa) area_vitu2_query_pane_t3

0x758b,	// (0x00055e7e) area_vitu2_query_pane_t4_ParamLimits

0x758b,	// (0x00055e7e) area_vitu2_query_pane_t4

0x75b3,	// (0x00055ea6) area_vitu2_query_pane_t5_ParamLimits

0x75b3,	// (0x00055ea6) area_vitu2_query_pane_t5

0x75db,	// (0x00055ece) area_vitu2_query_pane_t6_ParamLimits

0x75db,	// (0x00055ece) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0005e36e) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0005e36e) area_vitu2_query_pane_t

0x7627,	// (0x00055f1a) bg_button_pane_cp018

0x7635,	// (0x00055f28) bg_button_pane_cp021

0x00df,	// (0x0004e9d2) bg_button_pane_cp022

0x00f0,	// (0x0004e9e3) input_focus_pane_cp09

0x320a,	// (0x00051afd) aid_size_touch_mv_arrow_left

0x3233,	// (0x00051b26) aid_size_touch_mv_arrow_right

0x6eb4,	// (0x000557a7) main_cset_slider_pane_g16_ParamLimits

0x6eb4,	// (0x000557a7) main_cset_slider_pane_g16

0x6ec2,	// (0x000557b5) main_cset_slider_pane_g17_ParamLimits

0x6ec2,	// (0x000557b5) main_cset_slider_pane_g17

0x7508,	// (0x00055dfb) cell_cam4_burst_pane_g1_ParamLimits

0x99f4,	// (0x000582e7) compa_mode_pane

0x70ac,	// (0x0005599f) popup_vtel_slider_window_g3_ParamLimits

0x70ac,	// (0x0005599f) popup_vtel_slider_window_g3

0x70c3,	// (0x000559b6) popup_vtel_slider_window_g4_ParamLimits

0x70c3,	// (0x000559b6) popup_vtel_slider_window_g4

0x70da,	// (0x000559cd) popup_vtel_slider_window_t1_ParamLimits

0x70da,	// (0x000559cd) popup_vtel_slider_window_t1

0x99f4,	// (0x000582e7) main_cl_pane

0xc7d3,	// (0x0005b0c6) popup_imed_adjust2_window_ParamLimits

0xc7a7,	// (0x0005b09a) bg_tb_trans_pane_cp05_ParamLimits

0xd0f5,	// (0x0005b9e8) popup_imed_adjust2_window_g1_ParamLimits

0xd104,	// (0x0005b9f7) popup_imed_adjust2_window_g2_ParamLimits

0xd104,	// (0x0005b9f7) popup_imed_adjust2_window_g2

0xd110,	// (0x0005ba03) popup_imed_adjust2_window_g3_ParamLimits

0xd110,	// (0x0005ba03) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0005e0d9) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0005e0d9) popup_imed_adjust2_window_g

0xd11c,	// (0x0005ba0f) popup_imed_adjust2_window_t1_ParamLimits

0xd134,	// (0x0005ba27) slider_imed_adjust_pane_ParamLimits

0xd148,	// (0x0005ba3b) slider_imed_adjust_pane_g1_ParamLimits

0xd158,	// (0x0005ba4b) slider_imed_adjust_pane_g2_ParamLimits

0xd168,	// (0x0005ba5b) slider_imed_adjust_pane_g3_ParamLimits

0xd179,	// (0x0005ba6c) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0005e0e0) slider_imed_adjust_pane_g_ParamLimits

0x65c6,	// (0x00054eb9) aid_touch_area_cam4_ParamLimits

0x65c6,	// (0x00054eb9) aid_touch_area_cam4

0xaaab,	// (0x0005939e) battery_pane_cp01

0x6698,	// (0x00054f8b) main_camera4_pane_g6_ParamLimits

0x6698,	// (0x00054f8b) main_camera4_pane_g6

0x66c2,	// (0x00054fb5) main_camera4_pane_t2_ParamLimits

0x66c2,	// (0x00054fb5) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0005e1e3) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0005e1e3) main_camera4_pane_t

0x66f7,	// (0x00054fea) aid_touch_area_vid4_ParamLimits

0x66f7,	// (0x00054fea) aid_touch_area_vid4

0x674b,	// (0x0005503e) main_video4_pane_g5_ParamLimits

0x674b,	// (0x0005503e) main_video4_pane_g5

0x6770,	// (0x00055063) vid4_progress_pane_ParamLimits

0x6770,	// (0x00055063) vid4_progress_pane

0xd75d,	// (0x0005c050) main_cset_slider_pane_g18_ParamLimits

0xd75d,	// (0x0005c050) main_cset_slider_pane_g18

0xd948,	// (0x0005c23b) cell_cam4_burst_pane_g2_ParamLimits

0xd948,	// (0x0005c23b) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0005e342) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0005e342) cell_cam4_burst_pane_g

0xa1b0,	// (0x00058aa3) bg_cl_pane_ParamLimits

0xa1b0,	// (0x00058aa3) bg_cl_pane

0x7641,	// (0x00055f34) cl_header_pane_ParamLimits

0x7641,	// (0x00055f34) cl_header_pane

0x7655,	// (0x00055f48) cl_listscroll_pane_ParamLimits

0x7655,	// (0x00055f48) cl_listscroll_pane

0xda96,	// (0x0005c389) bg_cl_pane_g1

0xda9e,	// (0x0005c391) bg_cl_pane_g2

0xdaa6,	// (0x0005c399) bg_cl_pane_g3

0xdaae,	// (0x0005c3a1) bg_cl_pane_g4

0xdab6,	// (0x0005c3a9) bg_cl_pane_g5

0xdabe,	// (0x0005c3b1) bg_cl_pane_g6

0xdac6,	// (0x0005c3b9) bg_cl_pane_g7

0xdace,	// (0x0005c3c1) bg_cl_pane_g8

0xdad6,	// (0x0005c3c9) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0005e37d) bg_cl_pane_g

0x7665,	// (0x00055f58) aid_height_cl_leading_ParamLimits

0x7665,	// (0x00055f58) aid_height_cl_leading

0x7671,	// (0x00055f64) aid_height_cl_text_ParamLimits

0x7671,	// (0x00055f64) aid_height_cl_text

0x9a4d,	// (0x00058340) bg_cl_header_pane_ParamLimits

0x9a4d,	// (0x00058340) bg_cl_header_pane

0x7690,	// (0x00055f83) cl_header_pane_g1_ParamLimits

0x7690,	// (0x00055f83) cl_header_pane_g1

0x76a6,	// (0x00055f99) cl_header_pane_t1_ParamLimits

0x76a6,	// (0x00055f99) cl_header_pane_t1

0xdade,	// (0x0005c3d1) cl_list_pane

0xd730,	// (0x0005c023) hc_scroll_pane_cp01

0xa623,	// (0x00058f16) bg_cl_header_pane_g1

0xd612,	// (0x0005bf05) bg_cl_header_pane_g2

0xa643,	// (0x00058f36) bg_cl_header_pane_g3

0xd622,	// (0x0005bf15) bg_cl_header_pane_g4

0xd61a,	// (0x0005bf0d) bg_cl_header_pane_g5

0xd857,	// (0x0005c14a) bg_cl_header_pane_g6

0xd63a,	// (0x0005bf2d) bg_cl_header_pane_g7

0xd642,	// (0x0005bf35) bg_cl_header_pane_g8

0xd632,	// (0x0005bf25) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0005e390) bg_cl_header_pane_g

0x76bf,	// (0x00055fb2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76bf,	// (0x00055fb2) hc_cl_list_double_graphic_heading_pane

0x76d2,	// (0x00055fc5) hc_cl_list_single_graphic_pane_ParamLimits

0x76d2,	// (0x00055fc5) hc_cl_list_single_graphic_pane

0x76ea,	// (0x00055fdd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76ea,	// (0x00055fdd) hc_cl_list_single_graphic_pane_g1

0x76f6,	// (0x00055fe9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76f6,	// (0x00055fe9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0005e3a3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0005e3a3) hc_cl_list_single_graphic_pane_g

0x770a,	// (0x00055ffd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x770a,	// (0x00055ffd) hc_cl_list_single_graphic_pane_t1

0x76ea,	// (0x00055fdd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76ea,	// (0x00055fdd) hc_cl_list_double_graphic_heading_pane_g1

0x771f,	// (0x00056012) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x771f,	// (0x00056012) hc_cl_list_double_graphic_heading_pane_g2

0x7733,	// (0x00056026) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7733,	// (0x00056026) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0005e3a8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0005e3a8) hc_cl_list_double_graphic_heading_pane_g

0x7747,	// (0x0005603a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7747,	// (0x0005603a) hc_cl_list_double_graphic_heading_pane_t1

0x775c,	// (0x0005604f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x775c,	// (0x0005604f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0005e3af) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0005e3af) hc_cl_list_double_graphic_heading_pane_t

0x7771,	// (0x00056064) vid4_progress_pane_g1

0x7783,	// (0x00056076) vid4_progress_pane_g2

0xa754,	// (0x00059047) vid4_progress_pane_g3

0xac10,	// (0x00059503) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0005e3b4) vid4_progress_pane_g

0xac2e,	// (0x00059521) vid4_progress_pane_t1

0xac43,	// (0x00059536) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0005e3bf) vid4_progress_pane_t

0xac6e,	// (0x00059561) wait_bar_pane_cp07

0xc9e5,	// (0x0005b2d8) blid_firmament_pane_ParamLimits

0xca28,	// (0x0005b31b) popup_blid_sat_info2_window_g1

0xca4c,	// (0x0005b33f) popup_blid_sat_info2_window_t3

0xca5a,	// (0x0005b34d) popup_blid_sat_info2_window_t4

0xca68,	// (0x0005b35b) popup_blid_sat_info2_window_t5

0xca76,	// (0x0005b369) popup_blid_sat_info2_window_t6

0xca86,	// (0x0005b379) popup_blid_sat_info2_window_t7

0xca94,	// (0x0005b387) popup_blid_sat_info2_window_t8

0xcaa2,	// (0x0005b395) popup_blid_sat_info2_window_t9

0xcab0,	// (0x0005b3a3) popup_blid_sat_info2_window_t10

0xcb78,	// (0x0005b46b) aid_firma_cardinal_ParamLimits

0xcb8c,	// (0x0005b47f) blid_firmament_pane_t1_ParamLimits

0xcba3,	// (0x0005b496) blid_firmament_pane_t2_ParamLimits

0xcbba,	// (0x0005b4ad) blid_firmament_pane_t3_ParamLimits

0xcbd1,	// (0x0005b4c4) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0005dfcd) blid_firmament_pane_t_ParamLimits

0xcbe8,	// (0x0005b4db) blid_sat_info_pane_ParamLimits

0x9a4d,	// (0x00058340) main_cam_set_pane_ParamLimits

0x5c1d,	// (0x00054510) aid_size_cell_colour_35_ParamLimits

0x5c3d,	// (0x00054530) aid_size_cell_colour_112_ParamLimits

0x5c5d,	// (0x00054550) aid_size_cell_effect_ParamLimits

0xc7a7,	// (0x0005b09a) bg_tb_trans_pane_cp02_ParamLimits

0xaed8,	// (0x000597cb) heading_imed_pane_ParamLimits

0x5c7d,	// (0x00054570) listscroll_imed_pane_ParamLimits

0xbdc9,	// (0x0005a6bc) popup_call2_audio_first_window_g5_ParamLimits

0xbdc9,	// (0x0005a6bc) popup_call2_audio_first_window_g5

0x622e,	// (0x00054b21) aid_size_touch_image3_arrow_left_ParamLimits

0x622e,	// (0x00054b21) aid_size_touch_image3_arrow_left

0x625a,	// (0x00054b4d) aid_size_touch_image3_arrow_right_ParamLimits

0x625a,	// (0x00054b4d) aid_size_touch_image3_arrow_right

0xac59,	// (0x0005954c) vid4_progress_pane_t3

0x5f9c,	// (0x0005488f) main_hwr_training_symbol_option_pane_ParamLimits

0x5f9c,	// (0x0005488f) main_hwr_training_symbol_option_pane

0xd3f8,	// (0x0005bceb) popup_hwr_training_preview_window_ParamLimits

0xd3f8,	// (0x0005bceb) popup_hwr_training_preview_window

0x5fbc,	// (0x000548af) hwr_training_navi_pane_g5_ParamLimits

0x5fbc,	// (0x000548af) hwr_training_navi_pane_g5

0xd600,	// (0x0005bef3) popup_char_count_window

0x9a4d,	// (0x00058340) bg_popup_sub_pane_cp20_ParamLimits

0x71f0,	// (0x00055ae3) list_vitu2_match_list_pane_ParamLimits

0x71ff,	// (0x00055af2) vitu2_page_scroll_pane_ParamLimits

0x71ff,	// (0x00055af2) vitu2_page_scroll_pane

0xdae7,	// (0x0005c3da) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae7,	// (0x0005c3da) list_single_hwr_training_symbol_option_pane

0xdafa,	// (0x0005c3ed) list_single_hwr_training_symbol_option_pane_g1

0xdb02,	// (0x0005c3f5) list_single_hwr_training_symbol_option_pane_t1

0xdb10,	// (0x0005c403) bg_button_pane_cp023

0xdb19,	// (0x0005c40c) bg_button_pane_cp024

0x77d2,	// (0x000560c5) vitu2_page_scroll_pane_g1

0x77da,	// (0x000560cd) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0005e3c6) vitu2_page_scroll_pane_g

0x77e4,	// (0x000560d7) vitu2_page_scroll_pane_t1

0xdb4c,	// (0x0005c43f) popup_char_count_window_g1

0xdb55,	// (0x0005c448) popup_char_count_window_g2

0xdb5e,	// (0x0005c451) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0005e3cb) popup_char_count_window_g

0xdb67,	// (0x0005c45a) popup_char_count_window_t1

0x99f4,	// (0x000582e7) main_vded2_pane

0xd0e1,	// (0x0005b9d4) aid_size_cell_imed_line

0xd0eb,	// (0x0005b9de) grid_imed_line_width_pane

0xab65,	// (0x00059458) vid4_indicators_pane_g4

0xdb75,	// (0x0005c468) cell_imed_line_width_pane_ParamLimits

0xdb75,	// (0x0005c468) cell_imed_line_width_pane

0xdb8b,	// (0x0005c47e) cell_imed_line_width_pane_g1

0xd2ff,	// (0x0005bbf2) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0005e3d2) cell_imed_line_width_pane_g

0x77f3,	// (0x000560e6) main_vded2_pane_g1_ParamLimits

0x77f3,	// (0x000560e6) main_vded2_pane_g1

0x780e,	// (0x00056101) main_vded2_pane_g2_ParamLimits

0x780e,	// (0x00056101) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0005e3d7) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0005e3d7) main_vded2_pane_g

0x7820,	// (0x00056113) vded2_slider_pane_ParamLimits

0x7820,	// (0x00056113) vded2_slider_pane

0x7830,	// (0x00056123) aid_size_touch_vded2_end

0x783a,	// (0x0005612d) aid_size_touch_vded2_playhead

0xdb94,	// (0x0005c487) aid_size_touch_vded2_start

0xdb9c,	// (0x0005c48f) vded2_slider_bg_pane

0xdba5,	// (0x0005c498) vded2_slider_pane_g1

0xdbae,	// (0x0005c4a1) vded2_slider_pane_g2

0x7844,	// (0x00056137) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0005e3dc) vded2_slider_pane_g

0xdbb6,	// (0x0005c4a9) vded2_slider_bg_pane_g1

0xdbbf,	// (0x0005c4b2) vded2_slider_bg_pane_g2

0xdbc8,	// (0x0005c4bb) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0005e3e3) vded2_slider_bg_pane_g

0x38ee,	// (0x000521e1) aid_postcard_touch_down_pane_ParamLimits

0x38ee,	// (0x000521e1) aid_postcard_touch_down_pane

0x3906,	// (0x000521f9) aid_postcard_touch_up_pane_ParamLimits

0x3906,	// (0x000521f9) aid_postcard_touch_up_pane

0x99f4,	// (0x000582e7) main_blid2_pane

0xc7b5,	// (0x0005b0a8) popup_blid2_search_window

0x99f4,	// (0x000582e7) blid2_gps_pane

0x99f4,	// (0x000582e7) blid2_navig_pane

0x99f4,	// (0x000582e7) blid2_search_pane

0x99f4,	// (0x000582e7) blid2_tripm_pane

0x784f,	// (0x00056142) blid2_search_pane_g1_ParamLimits

0x784f,	// (0x00056142) blid2_search_pane_g1

0x7862,	// (0x00056155) blid2_search_pane_t1_ParamLimits

0x7862,	// (0x00056155) blid2_search_pane_t1

0x7874,	// (0x00056167) aid_size_cell_blid2_gps_ParamLimits

0x7874,	// (0x00056167) aid_size_cell_blid2_gps

0x788c,	// (0x0005617f) blid2_gps_pane_g1_ParamLimits

0x788c,	// (0x0005617f) blid2_gps_pane_g1

0x78a0,	// (0x00056193) grid_blid2_satellite_pane_ParamLimits

0x78a0,	// (0x00056193) grid_blid2_satellite_pane

0x78b8,	// (0x000561ab) blid2_navig_pane_g1_ParamLimits

0x78b8,	// (0x000561ab) blid2_navig_pane_g1

0x78c4,	// (0x000561b7) blid2_navig_pane_t1_ParamLimits

0x78c4,	// (0x000561b7) blid2_navig_pane_t1

0x78df,	// (0x000561d2) blid2_navig_pane_t2_ParamLimits

0x78df,	// (0x000561d2) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0005e3ea) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0005e3ea) blid2_navig_pane_t

0x78fa,	// (0x000561ed) blid2_navig_ring_pane_ParamLimits

0x78fa,	// (0x000561ed) blid2_navig_ring_pane

0x7915,	// (0x00056208) blid2_speed_pane_ParamLimits

0x7915,	// (0x00056208) blid2_speed_pane

0x7921,	// (0x00056214) blid2_tripm_pane_g1_ParamLimits

0x7921,	// (0x00056214) blid2_tripm_pane_g1

0x793c,	// (0x0005622f) blid2_tripm_pane_g2_ParamLimits

0x793c,	// (0x0005622f) blid2_tripm_pane_g2

0x7950,	// (0x00056243) blid2_tripm_pane_g3_ParamLimits

0x7950,	// (0x00056243) blid2_tripm_pane_g3

0x7964,	// (0x00056257) blid2_tripm_pane_g4_ParamLimits

0x7964,	// (0x00056257) blid2_tripm_pane_g4

0x7978,	// (0x0005626b) blid2_tripm_pane_g5_ParamLimits

0x7978,	// (0x0005626b) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0005e3ef) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0005e3ef) blid2_tripm_pane_g

0x799e,	// (0x00056291) blid2_tripm_pane_t1_ParamLimits

0x799e,	// (0x00056291) blid2_tripm_pane_t1

0x79b7,	// (0x000562aa) blid2_tripm_pane_t2_ParamLimits

0x79b7,	// (0x000562aa) blid2_tripm_pane_t2

0x79d0,	// (0x000562c3) blid2_tripm_pane_t3_ParamLimits

0x79d0,	// (0x000562c3) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0005e3fc) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0005e3fc) blid2_tripm_pane_t

0x7a17,	// (0x0005630a) cell_blid2_satellite_pane_ParamLimits

0x7a17,	// (0x0005630a) cell_blid2_satellite_pane

0x7a35,	// (0x00056328) cell_blid2_satellite_pane_g1

0xdbd1,	// (0x0005c4c4) cell_blid2_satellite_pane_t1

0xcbf8,	// (0x0005b4eb) blid2_speed_pane_g1

0xdbdf,	// (0x0005c4d2) blid2_speed_pane_t1

0xdbed,	// (0x0005c4e0) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0005e405) blid2_speed_pane_t

0xcbf8,	// (0x0005b4eb) blid2_navig_ring_pane_g1

0x7a3e,	// (0x00056331) blid2_navig_ring_pane_g2

0x7a46,	// (0x00056339) blid2_navig_ring_pane_g3

0x7a4e,	// (0x00056341) blid2_navig_ring_pane_g4

0x7a56,	// (0x00056349) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0005e40a) blid2_navig_ring_pane_g

0x99f4,	// (0x000582e7) bg_popup_window_pane_cp011

0xdbfb,	// (0x0005c4ee) popup_blid2_search_window_g1

0xdc03,	// (0x0005c4f6) popup_blid2_search_window_t1

0xdc11,	// (0x0005c504) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0005e415) popup_blid2_search_window_t

0xa532,	// (0x00058e25) main_browser_pane_g1

0xa1b0,	// (0x00058aa3) main_browser_pane_ParamLimits

0x9a4d,	// (0x00058340) bg_button_pane_cp011_ParamLimits

0x6a7a,	// (0x0005536d) cell_vitu2_function_pane_g1_ParamLimits

0xc7a7,	// (0x0005b09a) bg_popup_sub_pane_cp22_ParamLimits

0xffa1,	// (0x0004e894) input_focus_pane_cp08_ParamLimits

0x738d,	// (0x00055c80) popup_vitu2_query_button_pane_ParamLimits

0x738d,	// (0x00055c80) popup_vitu2_query_button_pane

0xffb8,	// (0x0004e8ab) popup_vitu2_query_input_button_pane

0xd892,	// (0x0005c185) popup_vitu2_query_window_g1_ParamLimits

0xffc2,	// (0x0004e8b5) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0005e316) popup_vitu2_query_window_g_ParamLimits

0x99f4,	// (0x000582e7) bg_button_pane_cp026

0x7a5e,	// (0x00056351) popup_vitu2_query_input_button_pane_g1

0x99f4,	// (0x000582e7) bg_button_pane_cp025

0xdc1f,	// (0x0005c512) popup_vitu2_query_button_pane_t1

0x5012,	// (0x00053905) main_mp3_pane_t6

0x5020,	// (0x00053913) popup_slider_window_cp01

0xaac9,	// (0x000593bc) cam4_battery_pane

0xab1e,	// (0x00059411) cam4_battery_pane_cp02

0xac08,	// (0x000594fb) cam4_battery_pane_cp01

0xac08,	// (0x000594fb) cam4_battery_pane_cp03

0xcbf8,	// (0x0005b4eb) cam4_battery_pane_g1

0xdc2d,	// (0x0005c520) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0005e41a) cam4_battery_pane_g

0xcabe,	// (0x0005b3b1) popup_blid_sat_info2_window_t11

0x320a,	// (0x00051afd) aid_size_touch_mv_arrow_left_ParamLimits

0x3233,	// (0x00051b26) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d8,	// (0x00059bcb) navi_pane_g1_ParamLimits

0x3272,	// (0x00051b65) navi_pane_g2_ParamLimits

0x32a0,	// (0x00051b93) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0005dcdf) navi_pane_g_ParamLimits

0x32fa,	// (0x00051bed) navi_pane_mv_t1_ParamLimits

0x5c89,	// (0x0005457c) grid_imed_effect_pane_ParamLimits

0x1daf,	// (0x000506a2) aid_placing_vt_slider_lsc

0xa47d,	// (0x00058d70) aid_placing_vt_slider_prt

0x9a4d,	// (0x00058340) bg_tb_trans_pane_cp01_ParamLimits

0xcd48,	// (0x0005b63b) popup_image_details_window_g1_ParamLimits

0xcd5b,	// (0x0005b64e) popup_image_details_window_g2_ParamLimits

0xcd70,	// (0x0005b663) popup_image_details_window_g3_ParamLimits

0xcd70,	// (0x0005b663) popup_image_details_window_g3

0xf71f,	// (0x0005e012) popup_image_details_window_g_ParamLimits

0xcd84,	// (0x0005b677) popup_image_details_window_t1_ParamLimits

0xcd96,	// (0x0005b689) popup_image_details_window_t2_ParamLimits

0xcdaf,	// (0x0005b6a2) popup_image_details_window_t3_ParamLimits

0xcdc3,	// (0x0005b6b6) popup_image_details_window_t4_ParamLimits

0xcdde,	// (0x0005b6d1) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0005e019) popup_image_details_window_t_ParamLimits

0x767d,	// (0x00055f70) cl_header_name_pane_ParamLimits

0x767d,	// (0x00055f70) cl_header_name_pane

0x7a66,	// (0x00056359) cl_header_name_pane_t1_ParamLimits

0x7a66,	// (0x00056359) cl_header_name_pane_t1

0x7a87,	// (0x0005637a) cl_header_name_pane_t2_ParamLimits

0x7a87,	// (0x0005637a) cl_header_name_pane_t2

0x7ac9,	// (0x000563bc) cl_header_name_pane_t3_ParamLimits

0x7ac9,	// (0x000563bc) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0005e41f) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0005e41f) cl_header_name_pane_t

0x32cb,	// (0x00051bbe) navi_pane_mv_g2_ParamLimits

0xd5da,	// (0x0005becd) field_vitu2_entry_pane_g1_ParamLimits

0xd5e6,	// (0x0005bed9) field_vitu2_entry_pane_g2_ParamLimits

0xd5f2,	// (0x0005bee5) field_vitu2_entry_pane_g3_ParamLimits

0xd5f2,	// (0x0005bee5) field_vitu2_entry_pane_g3

0xf922,	// (0x0005e215) field_vitu2_entry_pane_g_ParamLimits

0xab9a,	// (0x0005948d) cell_vitu2_itu_pane_g1_ParamLimits

0x6a0e,	// (0x00055301) cell_vitu2_itu_pane_g2_ParamLimits

0x6a0e,	// (0x00055301) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0005e221) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0005e221) cell_vitu2_itu_pane_g

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp05_ParamLimits

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp05

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp03

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp04

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp10_ParamLimits

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp10

0x00df,	// (0x0004e9d2) bg_vkb2_func_pane_cp08

0x7627,	// (0x00055f1a) bg_vkb2_func_pane_cp06

0x7635,	// (0x00055f28) bg_vkb2_func_pane_cp07

0xdb22,	// (0x0005c415) bg_vkb2_func_pane_cp11_ParamLimits

0xdb22,	// (0x0005c415) bg_vkb2_func_pane_cp11

0xdb37,	// (0x0005c42a) bg_vkb2_func_pane_cp12_ParamLimits

0xdb37,	// (0x0005c42a) bg_vkb2_func_pane_cp12

0x99f4,	// (0x000582e7) bg_vkb2_func_pane_cp09

0xd612,	// (0x0005bf05) bg_vkb2_func_pane_g1

0xa643,	// (0x00058f36) bg_vkb2_func_pane_g2

0xd61a,	// (0x0005bf0d) bg_vkb2_func_pane_g3

0xd622,	// (0x0005bf15) bg_vkb2_func_pane_g4

0xd857,	// (0x0005c14a) bg_vkb2_func_pane_g5

0xd63a,	// (0x0005bf2d) bg_vkb2_func_pane_g6

0xd642,	// (0x0005bf35) bg_vkb2_func_pane_g7

0xd632,	// (0x0005bf25) bg_vkb2_func_pane_g8

0xa623,	// (0x00058f16) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0005e426) bg_vkb2_func_pane_g

0x798c,	// (0x0005627f) blid2_tripm_pane_g6_ParamLimits

0x798c,	// (0x0005627f) blid2_tripm_pane_g6

0xd4b0,	// (0x0005bda3) mp4_progress_pane_g1

0x7a03,	// (0x000562f6) blid2_tripm_values_pane_ParamLimits

0x7a03,	// (0x000562f6) blid2_tripm_values_pane

0x7afa,	// (0x000563ed) blid2_tripm_values_pane_t1

0x7b08,	// (0x000563fb) blid2_tripm_values_pane_t2

0x7b16,	// (0x00056409) blid2_tripm_values_pane_t3

0x7b24,	// (0x00056417) blid2_tripm_values_pane_t4

0x7b32,	// (0x00056425) blid2_tripm_values_pane_t5

0x7b40,	// (0x00056433) blid2_tripm_values_pane_t6

0x7b4e,	// (0x00056441) blid2_tripm_values_pane_t7

0x7b5c,	// (0x0005644f) blid2_tripm_values_pane_t8

0x7b6a,	// (0x0005645d) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0005e439) blid2_tripm_values_pane_t

0x1dec,	// (0x000506df) call_video_pane_t1_ParamLimits

0x1e06,	// (0x000506f9) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005db61) call_video_pane_t_ParamLimits

0xfd43,	// (0x0004e636) msg_header_pane_g1_ParamLimits

0xb4fb,	// (0x00059dee) msg_header_pane_g2_ParamLimits

0xb4fb,	// (0x00059dee) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0005dd82) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0005dd82) msg_header_pane_g

0xa1b0,	// (0x00058aa3) main_clock2_pane_ParamLimits

0x5970,	// (0x00054263) grid_clock2_toolbar_pane_ParamLimits

0x5970,	// (0x00054263) grid_clock2_toolbar_pane

0x5970,	// (0x00054263) listscroll_clock2_pane_ParamLimits

0x5970,	// (0x00054263) listscroll_clock2_pane

0x5a67,	// (0x0005435a) main_clock2_pane_t3_ParamLimits

0x5a67,	// (0x0005435a) main_clock2_pane_t3

0x5a8b,	// (0x0005437e) main_clock2_pane_t4_ParamLimits

0x5a8b,	// (0x0005437e) main_clock2_pane_t4

0xdc37,	// (0x0005c52a) cell_clock2_toolbar_pane

0xdc3f,	// (0x0005c532) cell_clock2_toolbar_pane_cp01

0xdc3f,	// (0x0005c532) cell_clock2_toolbar_pane_cp02

0xdc47,	// (0x0005c53a) cell_clock2_toolbar_pane_cp03

0xdc4f,	// (0x0005c542) list_clock2_pane

0xb23e,	// (0x00059b31) scroll_pane_cp10

0xdc57,	// (0x0005c54a) list_single_clock2_pane_ParamLimits

0xdc57,	// (0x0005c54a) list_single_clock2_pane

0xa3dc,	// (0x00058ccf) list_highlight_pane_cp08

0xdc64,	// (0x0005c557) list_single_clock2_pane_t1

0xdc72,	// (0x0005c565) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0005e44c) list_single_clock2_pane_t

0x99f4,	// (0x000582e7) bg_button_pane_cp10

0xdc80,	// (0x0005c573) cell_clock2_toolbar_pane_g1

0x387a,	// (0x0005216d) aid_main_viewer_pane_g1_ParamLimits

0x387a,	// (0x0005216d) aid_main_viewer_pane_g1

0x3888,	// (0x0005217b) aid_main_viewer_pane_g2_ParamLimits

0x3888,	// (0x0005217b) aid_main_viewer_pane_g2

0x3896,	// (0x00052189) aid_main_viewer_pane_g3_ParamLimits

0x3896,	// (0x00052189) aid_main_viewer_pane_g3

0x38a5,	// (0x00052198) aid_main_viewer_pane_g4_ParamLimits

0x38a5,	// (0x00052198) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0005dd93) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0005dd93) aid_main_viewer_pane_g

0x41f8,	// (0x00052aeb) main_calc_pane_ParamLimits

0x420c,	// (0x00052aff) main_dialer2_pane_ParamLimits

0x99f4,	// (0x000582e7) main_cam6_pane

0x99f4,	// (0x000582e7) main_vid6_pane

0x597c,	// (0x0005426f) listscroll_gen_pane_cp06_ParamLimits

0x597c,	// (0x0005426f) listscroll_gen_pane_cp06

0x5aae,	// (0x000543a1) main_clock2_pane_t5_ParamLimits

0x5aae,	// (0x000543a1) main_clock2_pane_t5

0x5b0e,	// (0x00054401) aid_call2_pane_cp10_ParamLimits

0x5b20,	// (0x00054413) aid_call_pane_cp10_ParamLimits

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b32,	// (0x00054425) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b32,	// (0x00054425) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2ad,	// (0x00059ba0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0005e0ce) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b48,	// (0x0005443b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61db,	// (0x00054ace) cell_dialer2_keypad_pane_g2_ParamLimits

0x61db,	// (0x00054ace) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0005e1b4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0005e1b4) cell_dialer2_keypad_pane_g

0x61f7,	// (0x00054aea) cell_dialer2_keypad_pane_t1

0x6da5,	// (0x00055698) main_cset_text2_pane_ParamLimits

0x6da5,	// (0x00055698) main_cset_text2_pane

0xda8a,	// (0x0005c37d) area_vitu2_query_pane_g1_ParamLimits

0x00a6,	// (0x0004e999) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0005e369) area_vitu2_query_pane_g_ParamLimits

0x7603,	// (0x00055ef6) area_vitu2_query_pane_t7_ParamLimits

0x7603,	// (0x00055ef6) area_vitu2_query_pane_t7

0x7627,	// (0x00055f1a) bg_button_pane_cp018_ParamLimits

0x7635,	// (0x00055f28) bg_button_pane_cp021_ParamLimits

0x00df,	// (0x0004e9d2) bg_button_pane_cp022_ParamLimits

0x00df,	// (0x0004e9d2) bg_vkb2_func_pane_cp08_ParamLimits

0x7627,	// (0x00055f1a) bg_vkb2_func_pane_cp06_ParamLimits

0x7635,	// (0x00055f28) bg_vkb2_func_pane_cp07_ParamLimits

0x00f0,	// (0x0004e9e3) input_focus_pane_cp09_ParamLimits

0xac82,	// (0x00059575) cam6_autofocus_pane_ParamLimits

0xac82,	// (0x00059575) cam6_autofocus_pane

0x7b78,	// (0x0005646b) cam6_image_uncrop_pane_ParamLimits

0x7b78,	// (0x0005646b) cam6_image_uncrop_pane

0x7b87,	// (0x0005647a) cam6_indi_pane_ParamLimits

0x7b87,	// (0x0005647a) cam6_indi_pane

0x7b9d,	// (0x00056490) cam6_mode_pane_ParamLimits

0x7b9d,	// (0x00056490) cam6_mode_pane

0x7baf,	// (0x000564a2) cam6_timer_pane_ParamLimits

0x7baf,	// (0x000564a2) cam6_timer_pane

0x7bbb,	// (0x000564ae) cam6_zoom_pane_ParamLimits

0x7bbb,	// (0x000564ae) cam6_zoom_pane

0x7bc9,	// (0x000564bc) cam6_mode_pane_g1_ParamLimits

0x7bc9,	// (0x000564bc) cam6_mode_pane_g1

0x7bd9,	// (0x000564cc) cam6_mode_pane_g2_ParamLimits

0x7bd9,	// (0x000564cc) cam6_mode_pane_g2

0x7be9,	// (0x000564dc) cam6_mode_pane_g3_ParamLimits

0x7be9,	// (0x000564dc) cam6_mode_pane_g3

0x7bf9,	// (0x000564ec) cam6_mode_pane_g4_ParamLimits

0x7bf9,	// (0x000564ec) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0005e451) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0005e451) cam6_mode_pane_g

0xdc88,	// (0x0005c57b) bg_tb_trans_pane_cp08_ParamLimits

0xdc88,	// (0x0005c57b) bg_tb_trans_pane_cp08

0xdc96,	// (0x0005c589) cam6_battery_pane_ParamLimits

0xdc96,	// (0x0005c589) cam6_battery_pane

0xdcac,	// (0x0005c59f) cam6_indi_pane_g1_ParamLimits

0xdcac,	// (0x0005c59f) cam6_indi_pane_g1

0xdcbe,	// (0x0005c5b1) cam6_indi_pane_g2_ParamLimits

0xdcbe,	// (0x0005c5b1) cam6_indi_pane_g2

0xdcd0,	// (0x0005c5c3) cam6_indi_pane_g3_ParamLimits

0xdcd0,	// (0x0005c5c3) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0005e45a) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005e45a) cam6_indi_pane_g

0xdce2,	// (0x0005c5d5) cam6_indi_pane_t1_ParamLimits

0xdce2,	// (0x0005c5d5) cam6_indi_pane_t1

0x67b8,	// (0x000550ab) cam6_autofocus_pane_g1

0x67c0,	// (0x000550b3) cam6_autofocus_pane_g2

0x67c8,	// (0x000550bb) cam6_autofocus_pane_g3

0x67d0,	// (0x000550c3) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0005e461) cam6_autofocus_pane_g

0xdd08,	// (0x0005c5fb) cam6_timer_pane_g1

0xdd10,	// (0x0005c603) cam6_timer_pane_t1

0xdd1e,	// (0x0005c611) cam6_zoom_cont_pane

0xdd26,	// (0x0005c619) cam6_zoom_pane_g1

0xdd2e,	// (0x0005c621) cam6_zoom_pane_g2

0x7c09,	// (0x000564fc) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0005e46a) cam6_zoom_pane_g

0xcbf8,	// (0x0005b4eb) cam6_battery_pane_g1

0xcbf8,	// (0x0005b4eb) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0005dfd6) cam6_battery_pane_g

0xdd36,	// (0x0005c629) cam6_zoom_cont_pane_g1

0xdd3f,	// (0x0005c632) cam6_zoom_cont_pane_g2

0xdd48,	// (0x0005c63b) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0005e471) cam6_zoom_cont_pane_g

0x7c26,	// (0x00056519) cam6_mode_pane_cp_ParamLimits

0x7c26,	// (0x00056519) cam6_mode_pane_cp

0x7bbb,	// (0x000564ae) cam6_zoom_pane_cp_ParamLimits

0x7bbb,	// (0x000564ae) cam6_zoom_pane_cp

0x7c38,	// (0x0005652b) vid6_image_uncrop_cif_pane_ParamLimits

0x7c38,	// (0x0005652b) vid6_image_uncrop_cif_pane

0x7c48,	// (0x0005653b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c48,	// (0x0005653b) vid6_image_uncrop_nhd_pane

0x7b78,	// (0x0005646b) vid6_image_uncrop_vga_pane_ParamLimits

0x7b78,	// (0x0005646b) vid6_image_uncrop_vga_pane

0x7c57,	// (0x0005654a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c57,	// (0x0005654a) vid6_image_uncrop_wvga_pane

0x7c66,	// (0x00056559) vid6_indi_pane_ParamLimits

0x7c66,	// (0x00056559) vid6_indi_pane

0xdc88,	// (0x0005c57b) bg_tb_trans_pane_cp09_ParamLimits

0xdc88,	// (0x0005c57b) bg_tb_trans_pane_cp09

0xdd60,	// (0x0005c653) cam6_battery_pane_cp_ParamLimits

0xdd60,	// (0x0005c653) cam6_battery_pane_cp

0xdd6c,	// (0x0005c65f) vid6_indi_pane_g1_ParamLimits

0xdd6c,	// (0x0005c65f) vid6_indi_pane_g1

0xdd7e,	// (0x0005c671) vid6_indi_pane_g2_ParamLimits

0xdd7e,	// (0x0005c671) vid6_indi_pane_g2

0xdd90,	// (0x0005c683) vid6_indi_pane_g3_ParamLimits

0xdd90,	// (0x0005c683) vid6_indi_pane_g3

0xdda7,	// (0x0005c69a) vid6_indi_pane_g4_ParamLimits

0xdda7,	// (0x0005c69a) vid6_indi_pane_g4

0xddbe,	// (0x0005c6b1) vid6_indi_pane_g5_ParamLimits

0xddbe,	// (0x0005c6b1) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0005e478) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0005e478) vid6_indi_pane_g

0xddd8,	// (0x0005c6cb) vid6_indi_pane_t1_ParamLimits

0xddd8,	// (0x0005c6cb) vid6_indi_pane_t1

0xddee,	// (0x0005c6e1) vid6_indi_pane_t2_ParamLimits

0xddee,	// (0x0005c6e1) vid6_indi_pane_t2

0xde16,	// (0x0005c709) vid6_indi_pane_t3_ParamLimits

0xde16,	// (0x0005c709) vid6_indi_pane_t3

0xde3e,	// (0x0005c731) vid6_indi_pane_t4_ParamLimits

0xde3e,	// (0x0005c731) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0005e483) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0005e483) vid6_indi_pane_t

0xde62,	// (0x0005c755) wait_bar_pane_cp08

0x7c7e,	// (0x00056571) main_cset_text2_pane_t1_ParamLimits

0x7c7e,	// (0x00056571) main_cset_text2_pane_t1

0x7c11,	// (0x00056504) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c11,	// (0x00056504) listscroll_gen_pane_cp06_t1

0x99f4,	// (0x000582e7) main_cam6_set_pane

0xce28,	// (0x0005b71b) bg_tb_trans_pane_cp06_ParamLimits

0xaad1,	// (0x000593c4) cam4_indicators_pane_g1_ParamLimits

0xaae2,	// (0x000593d5) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0005e1f1) cam4_indicators_pane_g_ParamLimits

0xaafa,	// (0x000593ed) cam4_indicators_pane_t1_ParamLimits

0x9a4d,	// (0x00058340) bg_tb_trans_pane_cp07_ParamLimits

0xab28,	// (0x0005941b) vid4_indicators_pane_g1_ParamLimits

0xab3e,	// (0x00059431) vid4_indicators_pane_g2_ParamLimits

0xab52,	// (0x00059445) vid4_indicators_pane_g3_ParamLimits

0xab65,	// (0x00059458) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0005e203) vid4_indicators_pane_g_ParamLimits

0xab83,	// (0x00059476) vid4_indicators_pane_t1_ParamLimits

0x7771,	// (0x00056064) vid4_progress_pane_g1_ParamLimits

0x7783,	// (0x00056076) vid4_progress_pane_g2_ParamLimits

0xa754,	// (0x00059047) vid4_progress_pane_g3_ParamLimits

0xac10,	// (0x00059503) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0005e3b4) vid4_progress_pane_g_ParamLimits

0xac2e,	// (0x00059521) vid4_progress_pane_t1_ParamLimits

0xac43,	// (0x00059536) vid4_progress_pane_t2_ParamLimits

0xac59,	// (0x0005954c) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0005e3bf) vid4_progress_pane_t_ParamLimits

0xac6e,	// (0x00059561) wait_bar_pane_cp07_ParamLimits

0x7c9c,	// (0x0005658f) main_cam6_set_pane_g2_ParamLimits

0x7c9c,	// (0x0005658f) main_cam6_set_pane_g2

0x7cc2,	// (0x000565b5) main_cset6_listscroll_pane_ParamLimits

0x7cc2,	// (0x000565b5) main_cset6_listscroll_pane

0x7ce0,	// (0x000565d3) main_cset6_slider_pane_ParamLimits

0x7ce0,	// (0x000565d3) main_cset6_slider_pane

0x7cf6,	// (0x000565e9) main_cset6_text2_pane_ParamLimits

0x7cf6,	// (0x000565e9) main_cset6_text2_pane

0xde71,	// (0x0005c764) main_cset6_text_pane

0xde79,	// (0x0005c76c) main_cset_list_pane_copy1_ParamLimits

0xde79,	// (0x0005c76c) main_cset_list_pane_copy1

0xde89,	// (0x0005c77c) scroll_pane_cp028_copy1

0x2e87,	// (0x0005177a) cset_list_set_pane_copy1

0x7d04,	// (0x000565f7) aid_position_infowindow_above_copy1

0x7d0c,	// (0x000565ff) aid_position_infowindow_below_copy1

0x011e,	// (0x0004ea11) cset_list_set_pane_g1_copy1

0x0126,	// (0x0004ea19) cset_list_set_pane_g3_copy1_ParamLimits

0x0126,	// (0x0004ea19) cset_list_set_pane_g3_copy1

0x0135,	// (0x0004ea28) cset_list_set_pane_t1_copy1_ParamLimits

0x0135,	// (0x0004ea28) cset_list_set_pane_t1_copy1

0x9a4d,	// (0x00058340) list_highlight_pane_cp021_copy1_ParamLimits

0x9a4d,	// (0x00058340) list_highlight_pane_cp021_copy1

0xde92,	// (0x0005c785) cset6_slider_pane_ParamLimits

0xde92,	// (0x0005c785) cset6_slider_pane

0xdebe,	// (0x0005c7b1) main_cset6_slider_pane_g1_ParamLimits

0xdebe,	// (0x0005c7b1) main_cset6_slider_pane_g1

0x7d14,	// (0x00056607) main_cset6_slider_pane_g2_ParamLimits

0x7d14,	// (0x00056607) main_cset6_slider_pane_g2

0xdee6,	// (0x0005c7d9) main_cset6_slider_pane_g3_ParamLimits

0xdee6,	// (0x0005c7d9) main_cset6_slider_pane_g3

0x7d3c,	// (0x0005662f) main_cset6_slider_pane_g4_ParamLimits

0x7d3c,	// (0x0005662f) main_cset6_slider_pane_g4

0x7d48,	// (0x0005663b) main_cset6_slider_pane_g5_ParamLimits

0x7d48,	// (0x0005663b) main_cset6_slider_pane_g5

0xd745,	// (0x0005c038) main_cset6_slider_pane_g7_ParamLimits

0xd745,	// (0x0005c038) main_cset6_slider_pane_g7

0xd751,	// (0x0005c044) main_cset6_slider_pane_g8_ParamLimits

0xd751,	// (0x0005c044) main_cset6_slider_pane_g8

0x6e54,	// (0x00055747) main_cset6_slider_pane_g9_ParamLimits

0x6e54,	// (0x00055747) main_cset6_slider_pane_g9

0x6e60,	// (0x00055753) main_cset6_slider_pane_g10_ParamLimits

0x6e60,	// (0x00055753) main_cset6_slider_pane_g10

0x6e6c,	// (0x0005575f) main_cset6_slider_pane_g11_ParamLimits

0x6e6c,	// (0x0005575f) main_cset6_slider_pane_g11

0x6e78,	// (0x0005576b) main_cset6_slider_pane_g12_ParamLimits

0x6e78,	// (0x0005576b) main_cset6_slider_pane_g12

0x6e84,	// (0x00055777) main_cset6_slider_pane_g13_ParamLimits

0x6e84,	// (0x00055777) main_cset6_slider_pane_g13

0x6e90,	// (0x00055783) main_cset6_slider_pane_g14_ParamLimits

0x6e90,	// (0x00055783) main_cset6_slider_pane_g14

0x7d56,	// (0x00056649) main_cset6_slider_pane_g15_ParamLimits

0x7d56,	// (0x00056649) main_cset6_slider_pane_g15

0x6eb4,	// (0x000557a7) main_cset6_slider_pane_g16_ParamLimits

0x6eb4,	// (0x000557a7) main_cset6_slider_pane_g16

0x6ec2,	// (0x000557b5) main_cset6_slider_pane_g17_ParamLimits

0x6ec2,	// (0x000557b5) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0005e48c) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0005e48c) main_cset6_slider_pane_g

0xdef2,	// (0x0005c7e5) main_cset6_slider_pane_t1_ParamLimits

0xdef2,	// (0x0005c7e5) main_cset6_slider_pane_t1

0x7d86,	// (0x00056679) main_cset6_slider_pane_t2_ParamLimits

0x7d86,	// (0x00056679) main_cset6_slider_pane_t2

0x7db1,	// (0x000566a4) main_cset6_slider_pane_t3_ParamLimits

0x7db1,	// (0x000566a4) main_cset6_slider_pane_t3

0x7ddc,	// (0x000566cf) main_cset6_slider_pane_t4_ParamLimits

0x7ddc,	// (0x000566cf) main_cset6_slider_pane_t4

0x7e07,	// (0x000566fa) main_cset6_slider_pane_t5_ParamLimits

0x7e07,	// (0x000566fa) main_cset6_slider_pane_t5

0xdf33,	// (0x0005c826) main_cset6_slider_pane_t7_ParamLimits

0xdf33,	// (0x0005c826) main_cset6_slider_pane_t7

0x7e34,	// (0x00056727) main_cset6_slider_pane_t8_ParamLimits

0x7e34,	// (0x00056727) main_cset6_slider_pane_t8

0x7e58,	// (0x0005674b) main_cset6_slider_pane_t9_ParamLimits

0x7e58,	// (0x0005674b) main_cset6_slider_pane_t9

0x7e7c,	// (0x0005676f) main_cset6_slider_pane_t10_ParamLimits

0x7e7c,	// (0x0005676f) main_cset6_slider_pane_t10

0x7ea0,	// (0x00056793) main_cset6_slider_pane_t11_ParamLimits

0x7ea0,	// (0x00056793) main_cset6_slider_pane_t11

0xdf69,	// (0x0005c85c) main_cset6_slider_pane_t14_ParamLimits

0xdf69,	// (0x0005c85c) main_cset6_slider_pane_t14

0xdfa2,	// (0x0005c895) main_cset6_slider_pane_t15_ParamLimits

0xdfa2,	// (0x0005c895) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0005e4b1) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0005e4b1) main_cset6_slider_pane_t

0xd809,	// (0x0005c0fc) cset_slider_pane_g1_copy1

0xd812,	// (0x0005c105) cset_slider_pane_g2_copy1

0xd81b,	// (0x0005c10e) cset_slider_pane_g3_copy1

0x99f4,	// (0x000582e7) bg_popup_sub_pane_cp011_copy1

0xdfdb,	// (0x0005c8ce) main_cset_text_pane_g1_copy1

0xd8a6,	// (0x0005c199) main_cset_text_pane_t1_copy1

0xd8b4,	// (0x0005c1a7) main_cset_text_pane_t2_copy1

0xd8c2,	// (0x0005c1b5) main_cset_text_pane_t3_copy1

0xd8d0,	// (0x0005c1c3) main_cset_text_pane_t4_copy1

0xd8de,	// (0x0005c1d1) main_cset_text_pane_t5_copy1

0xdfe3,	// (0x0005c8d6) main_cset_text_pane_t6_copy1

0xdff1,	// (0x0005c8e4) main_cset_text_pane_t7_copy1

0x7c7e,	// (0x00056571) main_cset_text2_pane_t1_copy1

0x9a4d,	// (0x00058340) main_ncimui_pane

0x449a,	// (0x00052d8d) popup_query_ncimui_window_ParamLimits

0x449a,	// (0x00052d8d) popup_query_ncimui_window

0x5182,	// (0x00053a75) field_cale_ev2_pane_g4_ParamLimits

0x5182,	// (0x00053a75) field_cale_ev2_pane_g4

0x60ad,	// (0x000549a0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60ad,	// (0x000549a0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0005e18f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0005e18f) cell_video_dialer_keypad_pane_g

0x60c5,	// (0x000549b8) cell_video_dialer_keypad_pane_t1

0x99f4,	// (0x000582e7) bg_popup_window_pane_cp012

0xb12a,	// (0x00059a1d) heading_pane_cp06

0xe01d,	// (0x0005c910) ncim_query_content_pane

0x99f4,	// (0x000582e7) bg_popup_heading_pane_cp01

0xe025,	// (0x0005c918) ncim_heading_pane_t1

0xe033,	// (0x0005c926) ncim_indicator_popup_pane

0xe045,	// (0x0005c938) ncim_query_button_pane

0xe05b,	// (0x0005c94e) ncim_query_content_pane_t1

0xe06d,	// (0x0005c960) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0005e4f5) ncim_query_content_pane_t

0xe0a7,	// (0x0005c99a) ncim_query_list_pane

0xe0b9,	// (0x0005c9ac) ncim_query_popup_pane

0xe033,	// (0x0005c926) ncim_indicator_popup_pane_ParamLimits

0x8016,	// (0x00056909) ncim_query_content_pane_g1_ParamLimits

0x8016,	// (0x00056909) ncim_query_content_pane_g1

0xe05b,	// (0x0005c94e) ncim_query_content_pane_t1_ParamLimits

0xe06d,	// (0x0005c960) ncim_query_content_pane_t2_ParamLimits

0x8022,	// (0x00056915) ncim_query_content_pane_t3_ParamLimits

0x8022,	// (0x00056915) ncim_query_content_pane_t3

0x804a,	// (0x0005693d) ncim_query_content_pane_t4_ParamLimits

0x804a,	// (0x0005693d) ncim_query_content_pane_t4

0x8072,	// (0x00056965) ncim_query_content_pane_t5_ParamLimits

0x8072,	// (0x00056965) ncim_query_content_pane_t5

0xe07f,	// (0x0005c972) ncim_query_content_pane_t6_ParamLimits

0xe07f,	// (0x0005c972) ncim_query_content_pane_t6

0xfc02,	// (0x0005e4f5) ncim_query_content_pane_t_ParamLimits

0xe0a7,	// (0x0005c99a) ncim_query_list_pane_ParamLimits

0xe0b9,	// (0x0005c9ac) ncim_query_popup_pane_ParamLimits

0xe0cd,	// (0x0005c9c0) wait_bar_pane_cp04

0x99f4,	// (0x000582e7) input_focus_pane_cp011

0xe0d5,	// (0x0005c9c8) ncim_query_popup_pane_t1

0xe0e3,	// (0x0005c9d6) ncim_list_query_list_pane_ParamLimits

0xe0e3,	// (0x0005c9d6) ncim_list_query_list_pane

0x99f4,	// (0x000582e7) bg_button_pane_cp027

0xe0f6,	// (0x0005c9e9) ncim_query_button_pane_g1

0x99f4,	// (0x000582e7) list_highlight_pane_cp012

0xe100,	// (0x0005c9f3) ncim_list_query_list_pane_g1

0xe108,	// (0x0005c9fb) ncim_list_query_list_pane_t1

0xaaee,	// (0x000593e1) cam4_indicators_pane_g3_ParamLimits

0xaaee,	// (0x000593e1) cam4_indicators_pane_g3

0xab71,	// (0x00059464) vid4_indicators_pane_g5_ParamLimits

0xab71,	// (0x00059464) vid4_indicators_pane_g5

0xac1f,	// (0x00059512) vid4_progress_pane_g5_ParamLimits

0xac1f,	// (0x00059512) vid4_progress_pane_g5

0x7f04,	// (0x000567f7) main_ncimui_pane_g1

0x7f6a,	// (0x0005685d) ncimui_group_query_pane_ParamLimits

0x7f6a,	// (0x0005685d) ncimui_group_query_pane

0x7fb2,	// (0x000568a5) ncimui_list_pane_ParamLimits

0x7fb2,	// (0x000568a5) ncimui_list_pane

0x7fd9,	// (0x000568cc) ncimui_text_pane_ParamLimits

0x7fd9,	// (0x000568cc) ncimui_text_pane

0x809a,	// (0x0005698d) ncimui_text_pane_t1_ParamLimits

0x809a,	// (0x0005698d) ncimui_text_pane_t1

0xe116,	// (0x0005ca09) ncimui_list_single_graphic_pane_ParamLimits

0xe116,	// (0x0005ca09) ncimui_list_single_graphic_pane

0x80b8,	// (0x000569ab) ncimui_query_pane_ParamLimits

0x80b8,	// (0x000569ab) ncimui_query_pane

0x99f4,	// (0x000582e7) list_highlight_pane_cp013

0xe126,	// (0x0005ca19) ncim_list_query_list_pane_t1_copy1

0xe100,	// (0x0005c9f3) ncim_list_single_graphic_pane_g1

0xe134,	// (0x0005ca27) ncim_query_button_pane_cp01

0xe140,	// (0x0005ca33) ncim_query_entry_pane_ParamLimits

0xe140,	// (0x0005ca33) ncim_query_entry_pane

0xe153,	// (0x0005ca46) ncimui_query_pane_g1

0xe15f,	// (0x0005ca52) ncimui_query_pane_t1_ParamLimits

0xe15f,	// (0x0005ca52) ncimui_query_pane_t1

0x9a4d,	// (0x00058340) input_focus_pane_cp012

0xe178,	// (0x0005ca6b) ncim_query_entry_pane_t1

0xa1b0,	// (0x00058aa3) main_im_pane_ParamLimits

0x9a4d,	// (0x00058340) main_mobtv_pane_ParamLimits

0x9a4d,	// (0x00058340) main_mobtv_pane

0x7d6e,	// (0x00056661) main_cset6_slider_pane_g18_ParamLimits

0x7d6e,	// (0x00056661) main_cset6_slider_pane_g18

0x7d7a,	// (0x0005666d) main_cset6_slider_pane_g19_ParamLimits

0x7d7a,	// (0x0005666d) main_cset6_slider_pane_g19

0xac90,	// (0x00059583) bg_main_mobtv_pane_ParamLimits

0xac90,	// (0x00059583) bg_main_mobtv_pane

0x80cb,	// (0x000569be) main_mobtv_info_pane

0x80d6,	// (0x000569c9) main_mobtv_loading_pane_ParamLimits

0x80d6,	// (0x000569c9) main_mobtv_loading_pane

0xe18a,	// (0x0005ca7d) main_mobtv_pg_channel_list_pane

0xe194,	// (0x0005ca87) main_mobtv_pg_hdr_pane

0x80e3,	// (0x000569d6) main_mobtv_programe_curr_pane_ParamLimits

0x80e3,	// (0x000569d6) main_mobtv_programe_curr_pane

0x80f0,	// (0x000569e3) main_mobtv_programe_next_pane_ParamLimits

0x80f0,	// (0x000569e3) main_mobtv_programe_next_pane

0xe19d,	// (0x0005ca90) popup_mobtv_noti_window

0xcbf8,	// (0x0005b4eb) main_tv_pg_hdr_pane_g1

0xe1a7,	// (0x0005ca9a) main_tv_pg_hdr_pane_g2

0xe1af,	// (0x0005caa2) main_tv_pg_hdr_pane_g3

0xe1b7,	// (0x0005caaa) main_tv_pg_hdr_pane_g4

0xe1bf,	// (0x0005cab2) main_tv_pg_hdr_pane_g5

0xe1c9,	// (0x0005cabc) main_tv_pg_hdr_pane_g6

0xe1d3,	// (0x0005cac6) main_tv_pg_hdr_pane_g7

0xe1dd,	// (0x0005cad0) main_tv_pg_hdr_pane_g8

0xe1e7,	// (0x0005cada) main_tv_pg_hdr_pane_g9

0xe1f1,	// (0x0005cae4) main_tv_pg_hdr_pane_g10

0xe1fb,	// (0x0005caee) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0005e502) main_tv_pg_hdr_pane_g

0xe205,	// (0x0005caf8) main_tv_pg_hdr_pane_t1

0xe213,	// (0x0005cb06) main_tv_pg_hdr_pane_t2

0xe221,	// (0x0005cb14) main_tv_pg_hdr_pane_t3

0xe231,	// (0x0005cb24) main_tv_pg_hdr_pane_t4

0xe241,	// (0x0005cb34) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0005e519) main_tv_pg_hdr_pane_t

0xe251,	// (0x0005cb44) single_mobtv_pg_channel_pane_ParamLimits

0xe251,	// (0x0005cb44) single_mobtv_pg_channel_pane

0xe263,	// (0x0005cb56) single_mobtv_pg_channel_table_pane

0xe26c,	// (0x0005cb5f) single_mobtv_pg_channel_thumb_pane

0xe275,	// (0x0005cb68) single_tv_pg_channel_pane_g1

0xe27e,	// (0x0005cb71) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0005e524) single_tv_pg_channel_pane_g

0xce28,	// (0x0005b71b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce28,	// (0x0005b71b) bg_single_mobtv_pg_channel_thumb_pane

0xe287,	// (0x0005cb7a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe287,	// (0x0005cb7a) single_mobtv_pg_channel_thumb_pane_g1

0xe295,	// (0x0005cb88) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe295,	// (0x0005cb88) single_mobtv_pg_channel_thumb_pane_g2

0xe2a1,	// (0x0005cb94) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a1,	// (0x0005cb94) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0005e529) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0005e529) single_mobtv_pg_channel_thumb_pane_g

0xe2ad,	// (0x0005cba0) single_mobtv_pg_channel_thumb_pane_t1

0xe2bb,	// (0x0005cbae) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0005e530) single_mobtv_pg_channel_thumb_pane_t

0xcbf8,	// (0x0005b4eb) bg_single_mobtv_pg_channel_table_pane_g1

0xcbf8,	// (0x0005b4eb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0005dfd6) bg_single_mobtv_pg_channel_table_pane_g

0xe2c9,	// (0x0005cbbc) single_mobtv_pg_channel_table_pane_t1

0xe2d7,	// (0x0005cbca) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0005e535) single_mobtv_pg_channel_table_pane_t

0x8105,	// (0x000569f8) main_mobtv_info_pane_g1_ParamLimits

0x8105,	// (0x000569f8) main_mobtv_info_pane_g1

0x8123,	// (0x00056a16) main_mobtv_info_pane_t1_ParamLimits

0x8123,	// (0x00056a16) main_mobtv_info_pane_t1

0x819b,	// (0x00056a8e) main_mobtv_info_pane_t2_ParamLimits

0x819b,	// (0x00056a8e) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0005e53f) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0005e53f) main_mobtv_info_pane_t

0x822a,	// (0x00056b1d) wait_bar_pane_cp05

0x823c,	// (0x00056b2f) main_mobtv_loading_pane_g1_ParamLimits

0x823c,	// (0x00056b2f) main_mobtv_loading_pane_g1

0x824d,	// (0x00056b40) main_mobtv_loading_pane_g2_ParamLimits

0x824d,	// (0x00056b40) main_mobtv_loading_pane_g2

0x8259,	// (0x00056b4c) main_mobtv_loading_pane_g3_ParamLimits

0x8259,	// (0x00056b4c) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0005e546) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0005e546) main_mobtv_loading_pane_g

0xe2e5,	// (0x0005cbd8) main_mobtv_loading_pane_t1_ParamLimits

0xe2e5,	// (0x0005cbd8) main_mobtv_loading_pane_t1

0xe2fd,	// (0x0005cbf0) main_mobtv_loading_pane_t2_ParamLimits

0xe2fd,	// (0x0005cbf0) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0005e54d) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0005e54d) main_mobtv_loading_pane_t

0x826c,	// (0x00056b5f) wait_bar_pane_cp06_ParamLimits

0x826c,	// (0x00056b5f) wait_bar_pane_cp06

0xe321,	// (0x0005cc14) main_mobtv_programe_curr_pane_t1

0xe32f,	// (0x0005cc22) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0005e552) main_mobtv_programe_curr_pane_t

0xe33d,	// (0x0005cc30) main_mobtv_programe_next_pane_t1

0xe34b,	// (0x0005cc3e) main_mobtv_programe_next_pane_t2

0xe359,	// (0x0005cc4c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0005e557) main_mobtv_programe_next_pane_t

0x99f4,	// (0x000582e7) bg_popup_mobtv_noti_window_pane

0xe367,	// (0x0005cc5a) popup_mobtv_noti_window_g1

0xe36f,	// (0x0005cc62) popup_mobtv_noti_window_t1

0xe37d,	// (0x0005cc70) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0005e55e) popup_mobtv_noti_window_t

0xcbf8,	// (0x0005b4eb) bg_popup_mobtv_noti_window_pane_g1

0x99f4,	// (0x000582e7) sc_clock_pane

0x99f4,	// (0x000582e7) main_fs_bigclock_pane

0x79ed,	// (0x000562e0) blid2_tripm_pane_t4_ParamLimits

0x79ed,	// (0x000562e0) blid2_tripm_pane_t4

0x827b,	// (0x00056b6e) sc_clock_pane_g1_ParamLimits

0x827b,	// (0x00056b6e) sc_clock_pane_g1

0x828d,	// (0x00056b80) sc_clock_pane_t1_ParamLimits

0x828d,	// (0x00056b80) sc_clock_pane_t1

0x82b1,	// (0x00056ba4) sc_clock_pane_t2_ParamLimits

0x82b1,	// (0x00056ba4) sc_clock_pane_t2

0x82c9,	// (0x00056bbc) sc_clock_pane_t3_ParamLimits

0x82c9,	// (0x00056bbc) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0005e563) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0005e563) sc_clock_pane_t

0x8fe1,	// (0x000578d4) main_fs_bigclock_indicator_pane_ParamLimits

0x8fe1,	// (0x000578d4) main_fs_bigclock_indicator_pane

0x8385,	// (0x00056c78) main_fs_bigclock_pane_g1_ParamLimits

0x8385,	// (0x00056c78) main_fs_bigclock_pane_g1

0x8fed,	// (0x000578e0) main_fs_bigclock_pane_t1_ParamLimits

0x8fed,	// (0x000578e0) main_fs_bigclock_pane_t1

0x8fff,	// (0x000578f2) main_fs_bigclock_pane_t2_ParamLimits

0x8fff,	// (0x000578f2) main_fs_bigclock_pane_t2

0x9013,	// (0x00057906) main_fs_bigclock_pane_t3_ParamLimits

0x9013,	// (0x00057906) main_fs_bigclock_pane_t3

0x0002,

0xfe7f,	// (0x0005e772) main_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x0005e772) main_fs_bigclock_pane_t

0xebe9,	// (0x0005d4dc) main_fs_bigclock_indicator_pane_g1

0xe04d,	// (0x0005c940) ncim_query_content_pane_g2_ParamLimits

0xe04d,	// (0x0005c940) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0005e4f0) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0005e4f0) ncim_query_content_pane_g

0x82e0,	// (0x00056bd3) sc_clock_pane_t4_ParamLimits

0x82e0,	// (0x00056bd3) sc_clock_pane_t4

0x9a4d,	// (0x00058340) main_radioblah_pane

0xd55f,	// (0x0005be52) cell_call4_button_pane_t1_copy1_ParamLimits

0xd55f,	// (0x0005be52) cell_call4_button_pane_t1_copy1

0x7f1c,	// (0x0005680f) main_ncimui_pane_t1_ParamLimits

0x7f1c,	// (0x0005680f) main_ncimui_pane_t1

0x7f36,	// (0x00056829) main_ncimui_pane_t2_ParamLimits

0x7f36,	// (0x00056829) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0005e4e9) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0005e4e9) main_ncimui_pane_t

0xe4d0,	// (0x0005cdc3) main_radioblah_anim_pane_ParamLimits

0xe4d0,	// (0x0005cdc3) main_radioblah_anim_pane

0xe4e1,	// (0x0005cdd4) main_radioblah_info_pane_ParamLimits

0xe4e1,	// (0x0005cdd4) main_radioblah_info_pane

0xe4f5,	// (0x0005cde8) main_radioblah_pane_t1_ParamLimits

0xe4f5,	// (0x0005cde8) main_radioblah_pane_t1

0xe511,	// (0x0005ce04) main_radioblah_pane_t2_ParamLimits

0xe511,	// (0x0005ce04) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0005e584) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0005e584) main_radioblah_pane_t

0x83e2,	// (0x00056cd5) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83e2,	// (0x00056cd5) main_radioblah_rocker_ctrl_pane

0xe559,	// (0x0005ce4c) main_radioblah_info_pane_t1_ParamLimits

0xe559,	// (0x0005ce4c) main_radioblah_info_pane_t1

0x843a,	// (0x00056d2d) main_radioblah_info_pane_t2_ParamLimits

0x843a,	// (0x00056d2d) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0005e58d) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0005e58d) main_radioblah_info_pane_t

0xcbf8,	// (0x0005b4eb) main_radioblah_rocker_ctrl_pane_g1

0x84ea,	// (0x00056ddd) main_radioblah_rocker_ctrl_pane_g2

0x84f2,	// (0x00056de5) main_radioblah_rocker_ctrl_pane_g3

0x84fa,	// (0x00056ded) main_radioblah_rocker_ctrl_pane_g4

0x8502,	// (0x00056df5) main_radioblah_rocker_ctrl_pane_g5

0x850a,	// (0x00056dfd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0005e596) main_radioblah_rocker_ctrl_pane_g

0x7c7e,	// (0x00056571) main_cset_text2_pane_t1_copy1_ParamLimits

0xaabf,	// (0x000593b2) cam4_image_uncrop_qvga_pane

0xab14,	// (0x00059407) vid4_image_uncrop_qcif_pane

0xac82,	// (0x00059575) cam6_image_uncrop_qvga_pane_ParamLimits

0xac82,	// (0x00059575) cam6_image_uncrop_qvga_pane

0xdd50,	// (0x0005c643) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd50,	// (0x0005c643) vid6_image_uncrop_qcif_pane

0x99f4,	// (0x000582e7) bg_popup_preview_window_pane_cp03

0xdfff,	// (0x0005c8f2) list_cset_text2_pane

0xe007,	// (0x0005c8fa) main_cset6_text2_pane_g1

0xe00f,	// (0x0005c902) main_cset6_text2_pane_t1

0x8512,	// (0x00056e05) list_cset_text2_pane_t1_ParamLimits

0x8512,	// (0x00056e05) list_cset_text2_pane_t1

0x9a4d,	// (0x00058340) main_radioblah_pane_ParamLimits

0x8216,	// (0x00056b09) main_mobtv_info_pane_t3_ParamLimits

0x8216,	// (0x00056b09) main_mobtv_info_pane_t3

0x83d0,	// (0x00056cc3) main_radioblah_pane_g1

0x840a,	// (0x00056cfd) main_radioblah_info_pane_g1

0x848f,	// (0x00056d82) main_radioblah_info_pane_t3_ParamLimits

0x848f,	// (0x00056d82) main_radioblah_info_pane_t3

0x2dd1,	// (0x000516c4) highlight_cell_cale_month_pane_ParamLimits

0x2dd1,	// (0x000516c4) highlight_cell_cale_month_pane

0x99f4,	// (0x000582e7) main_phob_fisheye_pane

0xcf04,	// (0x0005b7f7) scroll_pane_cp0031_ParamLimits

0xcf04,	// (0x0005b7f7) scroll_pane_cp0031

0xde62,	// (0x0005c755) wait_bar_pane_cp08_ParamLimits

0x2e87,	// (0x0005177a) cset_list_set_pane_copy1_ParamLimits

0xe593,	// (0x0005ce86) highlight_cell_cale_month_pane_g1

0x852b,	// (0x00056e1e) highlight_cell_cale_month_pane_t1

0xdade,	// (0x0005c3d1) list_gen_pane_cp01

0xd730,	// (0x0005c023) scroll_pane_01

0x8539,	// (0x00056e2c) list_single_double_fisheye_pane

0x01ef,	// (0x0004eae2) list_double_fisheye_pane_g1_ParamLimits

0x01ef,	// (0x0004eae2) list_double_fisheye_pane_g1

0x01fb,	// (0x0004eaee) list_double_fisheye_pane_g2_ParamLimits

0x01fb,	// (0x0004eaee) list_double_fisheye_pane_g2

0x8542,	// (0x00056e35) list_double_fisheye_pane_g3_ParamLimits

0x8542,	// (0x00056e35) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0005e5a3) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0005e5a3) list_double_fisheye_pane_g

0x022c,	// (0x0004eb1f) list_double_fisheye_pane_t1_ParamLimits

0x022c,	// (0x0004eb1f) list_double_fisheye_pane_t1

0x0247,	// (0x0004eb3a) list_double_fisheye_pane_t2_ParamLimits

0x0247,	// (0x0004eb3a) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0005e5ae) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0005e5ae) list_double_fisheye_pane_t

0x99f4,	// (0x000582e7) main_call5_pane

0x830b,	// (0x00056bfe) sc_swipe_pane_ParamLimits

0x830b,	// (0x00056bfe) sc_swipe_pane

0x8561,	// (0x00056e54) call5_image_pane_ParamLimits

0x8561,	// (0x00056e54) call5_image_pane

0x857e,	// (0x00056e71) call5_swipe_1_pane_ParamLimits

0x857e,	// (0x00056e71) call5_swipe_1_pane

0x8591,	// (0x00056e84) call5_swipe_2_pane_ParamLimits

0x8591,	// (0x00056e84) call5_swipe_2_pane

0x85be,	// (0x00056eb1) popup_call5_audio_first_window_ParamLimits

0x85be,	// (0x00056eb1) popup_call5_audio_first_window

0xce28,	// (0x0005b71b) call5_swipe_1_pane_g1_ParamLimits

0xce28,	// (0x0005b71b) call5_swipe_1_pane_g1

0xe59b,	// (0x0005ce8e) call5_swipe_1_pane_g2_ParamLimits

0xe59b,	// (0x0005ce8e) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0005e5b3) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0005e5b3) call5_swipe_1_pane_g

0xe5a7,	// (0x0005ce9a) call5_swipe_1_pane_t1_ParamLimits

0xe5a7,	// (0x0005ce9a) call5_swipe_1_pane_t1

0xce28,	// (0x0005b71b) call5_swipe_2_pane_g1_ParamLimits

0xce28,	// (0x0005b71b) call5_swipe_2_pane_g1

0xe5bc,	// (0x0005ceaf) call5_swipe_2_pane_g2_ParamLimits

0xe5bc,	// (0x0005ceaf) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0005e5b8) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0005e5b8) call5_swipe_2_pane_g

0xe5c8,	// (0x0005cebb) call5_swipe_2_pane_t1_ParamLimits

0xe5c8,	// (0x0005cebb) call5_swipe_2_pane_t1

0xe60c,	// (0x0005ceff) sc_swipe_pane_g1_ParamLimits

0xe60c,	// (0x0005ceff) sc_swipe_pane_g1

0xe619,	// (0x0005cf0c) sc_swipe_pane_g2_ParamLimits

0xe619,	// (0x0005cf0c) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0005e5bd) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0005e5bd) sc_swipe_pane_g

0xe625,	// (0x0005cf18) sc_swipe_pane_t1_ParamLimits

0xe625,	// (0x0005cf18) sc_swipe_pane_t1

0x99f4,	// (0x000582e7) main_cmail_launcher_pane

0x85d3,	// (0x00056ec6) aid_size_cell_cmail_l_ParamLimits

0x85d3,	// (0x00056ec6) aid_size_cell_cmail_l

0x85ed,	// (0x00056ee0) grid_cmail_l_pane_ParamLimits

0x85ed,	// (0x00056ee0) grid_cmail_l_pane

0x8608,	// (0x00056efb) cell_cmail_l_pane_ParamLimits

0x8608,	// (0x00056efb) cell_cmail_l_pane

0x8630,	// (0x00056f23) cell_cmail_l_pane_g1_ParamLimits

0x8630,	// (0x00056f23) cell_cmail_l_pane_g1

0x863c,	// (0x00056f2f) cell_cmail_l_pane_t1_ParamLimits

0x863c,	// (0x00056f2f) cell_cmail_l_pane_t1

0xe63a,	// (0x0005cf2d) cell_cmail_l_pane_t2_ParamLimits

0xe63a,	// (0x0005cf2d) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0005e5c2) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0005e5c2) cell_cmail_l_pane_t

0x9a4d,	// (0x00058340) grid_highlight_pane_cp018_ParamLimits

0x9a4d,	// (0x00058340) grid_highlight_pane_cp018

0x0b11,	// (0x0004f404) main2_pane_ParamLimits

0x0b11,	// (0x0004f404) main2_pane

0xa289,	// (0x00058b7c) popup_sp_fs_action_menu_bg_pane_g1

0xa291,	// (0x00058b84) popup_sp_fs_action_menu_bg_pane_g2

0xa299,	// (0x00058b8c) popup_sp_fs_action_menu_bg_pane_g3

0xa2a1,	// (0x00058b94) popup_sp_fs_action_menu_bg_pane_g4

0xa2a9,	// (0x00058b9c) popup_sp_fs_action_menu_bg_pane_g5

0xa2b1,	// (0x00058ba4) popup_sp_fs_action_menu_bg_pane_g6

0xa2b9,	// (0x00058bac) popup_sp_fs_action_menu_bg_pane_g7

0xa2c1,	// (0x00058bb4) popup_sp_fs_action_menu_bg_pane_g8

0xa2c9,	// (0x00058bbc) popup_sp_fs_action_menu_bg_pane_g9

0xa2d1,	// (0x00058bc4) popup_sp_fs_action_menu_bg_pane_g10

0xa2d1,	// (0x00058bc4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005da7d) popup_sp_fs_action_menu_bg_pane_g

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g3_g1

0xfb4d,	// (0x0004e440) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb4d,	// (0x0004e440) list_medium_line_x2_t3_g3_g2

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005db2b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005db2b) list_medium_line_x2_t3_g3_g

0xfb59,	// (0x0004e44c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb59,	// (0x0004e44c) list_medium_line_x2_t3_g3_t1

0xfb6e,	// (0x0004e461) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb6e,	// (0x0004e461) list_medium_line_x2_t3_g3_t2

0xfb82,	// (0x0004e475) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfb82,	// (0x0004e475) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005db32) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005db32) list_medium_line_x2_t3_g3_t

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g2_g1

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005db39) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005db39) list_medium_line_x2_t3_g2_g

0xfb97,	// (0x0004e48a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfb97,	// (0x0004e48a) list_medium_line_x2_t3_g2_t1

0xfbad,	// (0x0004e4a0) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbad,	// (0x0004e4a0) list_medium_line_x2_t3_g2_t2

0xfbbf,	// (0x0004e4b2) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbbf,	// (0x0004e4b2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005db3e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005db3e) list_medium_line_x2_t3_g2_t

0x1d20,	// (0x00050613) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t4_g4_g1

0xfbdd,	// (0x0004e4d0) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfbdd,	// (0x0004e4d0) list_medium_line_x2_t4_g4_g2

0xf054,	// (0x0005d947) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x2_t4_g4_g3

0x1d38,	// (0x0005062b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d38,	// (0x0005062b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005db45) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005db45) list_medium_line_x2_t4_g4_g

0xfbe9,	// (0x0004e4dc) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfbe9,	// (0x0004e4dc) list_medium_line_x2_t4_g4_t1

0xfc03,	// (0x0004e4f6) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc03,	// (0x0004e4f6) list_medium_line_x2_t4_g4_t2

0xfc19,	// (0x0004e50c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc19,	// (0x0004e50c) list_medium_line_x2_t4_g4_t3

0xfc2e,	// (0x0004e521) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc2e,	// (0x0004e521) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005db4e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005db4e) list_medium_line_x2_t4_g4_t

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g4_g1

0xf060,	// (0x0005d953) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf060,	// (0x0005d953) list_medium_line_x2_t2_g4_g2

0xf054,	// (0x0005d947) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x2_t2_g4_g3

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005dbb5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005dbb5) list_medium_line_x2_t2_g4_g

0xfc40,	// (0x0004e533) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc40,	// (0x0004e533) list_medium_line_x2_t2_g4_t1

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005dbbe) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005dbbe) list_medium_line_x2_t2_g4_t

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g3_g1

0xf054,	// (0x0005d947) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x2_t2_g3_g2

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0005dbc3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0005dbc3) list_medium_line_x2_t2_g3_g

0xfc55,	// (0x0004e548) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc55,	// (0x0004e548) list_medium_line_x2_t2_g3_t1

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0005dbca) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0005dbca) list_medium_line_x2_t2_g3_t

0x2f2c,	// (0x0005181f) main_sp_fs_list_pane_ParamLimits

0x2f2c,	// (0x0005181f) main_sp_fs_list_pane

0x2f38,	// (0x0005182b) sp_fs_scroll_pane_ParamLimits

0x2f38,	// (0x0005182b) sp_fs_scroll_pane

0xfc6a,	// (0x0004e55d) list_medium_line_x2_t3_t1

0xfc7a,	// (0x0004e56d) list_medium_line_x2_t3_t2

0xfc88,	// (0x0004e57b) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0005dc15) list_medium_line_x2_t3_t

0xfc96,	// (0x0004e589) list_medium_line_x3_t4_t1

0xfca6,	// (0x0004e599) list_medium_line_x3_t4_t2

0xfcb4,	// (0x0004e5a7) list_medium_line_x3_t4_t3

0xf081,	// (0x0005d974) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0005dc1c) list_medium_line_x3_t4_t

0xfcc2,	// (0x0004e5b5) list_medium_line_x4_t5_t1

0xfcd2,	// (0x0004e5c5) list_medium_line_x4_t5_t2

0xf08f,	// (0x0005d982) list_medium_line_x4_t5_t3

0xfce0,	// (0x0004e5d3) list_medium_line_x4_t5_t4

0xf081,	// (0x0005d974) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0005dc25) list_medium_line_x4_t5_t

0x1d20,	// (0x00050613) list_medium_line_t4_g4_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_t4_g4_g1

0x1d38,	// (0x0005062b) list_medium_line_t4_g4_g2_ParamLimits

0x1d38,	// (0x0005062b) list_medium_line_t4_g4_g2

0xfcee,	// (0x0004e5e1) list_medium_line_t4_g4_g3_ParamLimits

0xfcee,	// (0x0004e5e1) list_medium_line_t4_g4_g3

0x1d2c,	// (0x0005061f) list_medium_line_t4_g4_g4_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0005dc30) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0005dc30) list_medium_line_t4_g4_g

0xfcfa,	// (0x0004e5ed) list_medium_line_t4_g4_t1_ParamLimits

0xfcfa,	// (0x0004e5ed) list_medium_line_t4_g4_t1

0xfd0f,	// (0x0004e602) list_medium_line_t4_g4_t2_ParamLimits

0xfd0f,	// (0x0004e602) list_medium_line_t4_g4_t2

0xfd25,	// (0x0004e618) list_medium_line_t4_g4_t3_ParamLimits

0xfd25,	// (0x0004e618) list_medium_line_t4_g4_t3

0xf06c,	// (0x0005d95f) list_medium_line_t4_g4_t4_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0005dc39) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0005dc39) list_medium_line_t4_g4_t

0x300a,	// (0x000518fd) chi_dic_find_pane_g1

0x4220,	// (0x00052b13) main_tport_pane

0xff35,	// (0x0004e828) list_medium_line_plain_t1

0xff43,	// (0x0004e836) list_medium_line_t2_g2_g1_ParamLimits

0xff43,	// (0x0004e836) list_medium_line_t2_g2_g1

0xff4f,	// (0x0004e842) list_medium_line_t2_g2_g2_ParamLimits

0xff4f,	// (0x0004e842) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0005e2fa) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0005e2fa) list_medium_line_t2_g2_g

0xff5b,	// (0x0004e84e) list_medium_line_t2_g2_t1_ParamLimits

0xff5b,	// (0x0004e84e) list_medium_line_t2_g2_t1

0xff72,	// (0x0004e865) list_medium_line_t2_g2_t2_ParamLimits

0xff72,	// (0x0004e865) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0005e2ff) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0005e2ff) list_medium_line_t2_g2_t

0x7795,	// (0x00056088) aid_sp_fs_list_icon_a_sm

0x779d,	// (0x00056090) aid_sp_fs_list_icon_d

0x77a5,	// (0x00056098) aid_sp_fs_text_primary

0x77ae,	// (0x000560a1) aid_sp_fs_text_secondary

0x0101,	// (0x0004e9f4) list_medium_line

0x0101,	// (0x0004e9f4) list_medium_line_g2

0x0101,	// (0x0004e9f4) list_medium_line_g3

0x0101,	// (0x0004e9f4) list_medium_line_plain

0x0101,	// (0x0004e9f4) list_medium_line_plain_t2

0x0101,	// (0x0004e9f4) list_medium_line_plain_t3

0x0101,	// (0x0004e9f4) list_medium_line_right_icon

0x0101,	// (0x0004e9f4) list_medium_line_right_iconx2

0x0101,	// (0x0004e9f4) list_medium_line_t2

0x0101,	// (0x0004e9f4) list_medium_line_t2_g2

0x0101,	// (0x0004e9f4) list_medium_line_t2_g3

0x0101,	// (0x0004e9f4) list_medium_line_t2_right_icon

0x0101,	// (0x0004e9f4) list_medium_line_t2_right_iconx2

0x0101,	// (0x0004e9f4) list_medium_line_t3

0x0101,	// (0x0004e9f4) list_medium_line_t3_g2

0x0101,	// (0x0004e9f4) list_medium_line_t3_g3

0x0101,	// (0x0004e9f4) list_medium_line_t3_right_iconx2

0x77b7,	// (0x000560aa) list_medium_line_t4_g4

0x77c0,	// (0x000560b3) list_medium_line_x2

0x77c0,	// (0x000560b3) list_medium_line_x2_t2_g2

0x77c0,	// (0x000560b3) list_medium_line_x2_t2_g3

0x77c0,	// (0x000560b3) list_medium_line_x2_t2_g4

0x77c0,	// (0x000560b3) list_medium_line_x2_t3

0x77c0,	// (0x000560b3) list_medium_line_x2_t3_g2

0x77c0,	// (0x000560b3) list_medium_line_x2_t3_g3

0x77c0,	// (0x000560b3) list_medium_line_x2_t3_g4

0x77c0,	// (0x000560b3) list_medium_line_x2_t4_g2

0x77c0,	// (0x000560b3) list_medium_line_x2_t4_g4

0x77c9,	// (0x000560bc) list_medium_line_x3

0x77c9,	// (0x000560bc) list_medium_line_x3_t4

0x77c9,	// (0x000560bc) list_medium_line_x3_t4_g4

0x77b7,	// (0x000560aa) list_medium_line_x4_t4

0x77b7,	// (0x000560aa) list_medium_line_x4_t4_g7

0x77b7,	// (0x000560aa) list_medium_line_x4_t5

0x010a,	// (0x0004e9fd) list_single_fs_dyc_pane_ParamLimits

0x010a,	// (0x0004e9fd) list_single_fs_dyc_pane

0x1d20,	// (0x00050613) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x4_t4_g7_g1

0x7ec6,	// (0x000567b9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ec6,	// (0x000567b9) list_medium_line_x4_t4_g7_g2

0x014a,	// (0x0004ea3d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x014a,	// (0x0004ea3d) list_medium_line_x4_t4_g7_g3

0x0159,	// (0x0004ea4c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0159,	// (0x0004ea4c) list_medium_line_x4_t4_g7_g4

0x0165,	// (0x0004ea58) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0165,	// (0x0004ea58) list_medium_line_x4_t4_g7_g5

0x0174,	// (0x0004ea67) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0174,	// (0x0004ea67) list_medium_line_x4_t4_g7_g6

0x7ed2,	// (0x000567c5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7ed2,	// (0x000567c5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0005e4ca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0005e4ca) list_medium_line_x4_t4_g7_g

0x0183,	// (0x0004ea76) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0183,	// (0x0004ea76) list_medium_line_x4_t4_g7_t1

0x0198,	// (0x0004ea8b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0198,	// (0x0004ea8b) list_medium_line_x4_t4_g7_t2

0x01ad,	// (0x0004eaa0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01ad,	// (0x0004eaa0) list_medium_line_x4_t4_g7_t3

0x01c2,	// (0x0004eab5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01c2,	// (0x0004eab5) list_medium_line_x4_t4_g7_t4

0x7ede,	// (0x000567d1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ede,	// (0x000567d1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0005e4d9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0005e4d9) list_medium_line_x4_t4_g7_t

0x01d4,	// (0x0004eac7) list_single_dyc_row_pane_ParamLimits

0x01d4,	// (0x0004eac7) list_single_dyc_row_pane

0x854e,	// (0x00056e41) call5_gesture_pane_ParamLimits

0x854e,	// (0x00056e41) call5_gesture_pane

0x85a4,	// (0x00056e97) call5_windows_pane_ParamLimits

0x85a4,	// (0x00056e97) call5_windows_pane

0x8652,	// (0x00056f45) call5_swipe_1_pane_cp_ParamLimits

0x8652,	// (0x00056f45) call5_swipe_1_pane_cp

0x865e,	// (0x00056f51) call5_swipe_2_pane_cp_ParamLimits

0x865e,	// (0x00056f51) call5_swipe_2_pane_cp

0xa3dc,	// (0x00058ccf) call5_image_pane_cp

0x866a,	// (0x00056f5d) popup_call5_audio_first_window_cp_ParamLimits

0x866a,	// (0x00056f5d) popup_call5_audio_first_window_cp

0xe60c,	// (0x0005ceff) call5_swipe_1_pane_g1_cp_ParamLimits

0xe60c,	// (0x0005ceff) call5_swipe_1_pane_g1_cp

0xe64c,	// (0x0005cf3f) call5_swipe_1_pane_g2_cp

0xe625,	// (0x0005cf18) call5_swipe_1_pane_t1_cp_ParamLimits

0xe625,	// (0x0005cf18) call5_swipe_1_pane_t1_cp

0xe60c,	// (0x0005ceff) call5_swipe_2_pane_g1_cp_ParamLimits

0xe60c,	// (0x0005ceff) call5_swipe_2_pane_g1_cp

0xe654,	// (0x0005cf47) call5_swipe_2_pane_g2_cp

0xe65c,	// (0x0005cf4f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe65c,	// (0x0005cf4f) call5_swipe_2_pane_t1_cp

0x9a4d,	// (0x00058340) main_sp_fs_email_pane

0xe671,	// (0x0005cf64) main_sp_fs_listscroll_pane_te

0x8678,	// (0x00056f6b) popup_sp_fs_action_menu_pane_ParamLimits

0x8678,	// (0x00056f6b) popup_sp_fs_action_menu_pane

0xcbf8,	// (0x0005b4eb) bg_sp_fs_ctrlbar_pane_g1

0xd1a5,	// (0x0005ba98) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1b7,	// (0x0005baaa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1ae,	// (0x0005baa1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbf8,	// (0x0005b4eb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0005e5c7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9d7,	// (0x0005b2ca) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9d7,	// (0x0005b2ca) bg_sp_fs_ctrlbar_ddmenu_pane

0xe67a,	// (0x0005cf6d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe67a,	// (0x0005cf6d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe686,	// (0x0005cf79) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe686,	// (0x0005cf79) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0005e5d0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0005e5d0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe692,	// (0x0005cf85) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe692,	// (0x0005cf85) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0269,	// (0x0004eb5c) list_medium_line_t2_right_icon_g1

0x0271,	// (0x0004eb64) list_medium_line_t2_right_icon_t1

0x0281,	// (0x0004eb74) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0005e5d5) list_medium_line_t2_right_icon_t

0xc7a7,	// (0x0005b09a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a7,	// (0x0005b09a) bg_sp_fs_ctrlbar_pane

0x870b,	// (0x00056ffe) main_sp_fs_ctrlbar_button_pane_cp01

0x8715,	// (0x00057008) main_sp_fs_ctrlbar_ddmenu_pane

0xd307,	// (0x0005bbfa) main_sp_fs_ctrlbar_pane_g1

0xe6e4,	// (0x0005cfd7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0005e5da) main_sp_fs_ctrlbar_pane_g

0xe6f0,	// (0x0005cfe3) main_sp_fs_ctrlbar_pane_t1

0x0293,	// (0x0004eb86) main_sp_fs_ctrlbar_pane

0x02b7,	// (0x0004ebaa) main_sp_fs_listscroll_pane_te_cp01

0x02d7,	// (0x0004ebca) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x02d7,	// (0x0004ebca) popup_sp_fs_action_menu_pane_cp01

0x9a4d,	// (0x00058340) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a4d,	// (0x00058340) bg_sp_fs_highlight_list_pane_cp01

0x871f,	// (0x00057012) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x871f,	// (0x00057012) sp_fs_action_menu_list_gene_pane_g1

0xe720,	// (0x0005d013) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe720,	// (0x0005d013) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0005e5e4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0005e5e4) sp_fs_action_menu_list_gene_pane_g

0x872e,	// (0x00057021) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x872e,	// (0x00057021) sp_fs_action_menu_list_gene_pane_t1

0x8746,	// (0x00057039) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8746,	// (0x00057039) sp_fs_action_menu_list_gene_pane

0xe72d,	// (0x0005d020) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe72d,	// (0x0005d020) popup_sp_fs_action_menu_bg_pane

0x8769,	// (0x0005705c) sp_fs_action_menu_list_pane_ParamLimits

0x8769,	// (0x0005705c) sp_fs_action_menu_list_pane

0xe73b,	// (0x0005d02e) sp_fs_scroll_pane_cp01_ParamLimits

0xe73b,	// (0x0005d02e) sp_fs_scroll_pane_cp01

0x0307,	// (0x0004ebfa) list_medium_line_plain_t2_t1

0x0317,	// (0x0004ec0a) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0005e5e9) list_medium_line_plain_t2_t

0x0327,	// (0x0004ec1a) list_medium_line_plain_t3_t1

0x0337,	// (0x0004ec2a) list_medium_line_plain_t3_t2

0x0345,	// (0x0004ec38) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0005e5ee) list_medium_line_plain_t3_t

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t2_g2_g1

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005db39) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005db39) list_medium_line_x2_t2_g2_g

0xf09d,	// (0x0005d990) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf09d,	// (0x0005d990) list_medium_line_x2_t2_g2_t1

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0005e5f5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0005e5f5) list_medium_line_x2_t2_g2_t

0x1d20,	// (0x00050613) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t4_g2_g1

0x878d,	// (0x00057080) list_medium_line_x2_t4_g2_g2_ParamLimits

0x878d,	// (0x00057080) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0005e5fa) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0005e5fa) list_medium_line_x2_t4_g2_g

0x0353,	// (0x0004ec46) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0353,	// (0x0004ec46) list_medium_line_x2_t4_g2_t1

0x036d,	// (0x0004ec60) list_medium_line_x2_t4_g2_t2_ParamLimits

0x036d,	// (0x0004ec60) list_medium_line_x2_t4_g2_t2

0x0383,	// (0x0004ec76) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0383,	// (0x0004ec76) list_medium_line_x2_t4_g2_t3

0xf06c,	// (0x0005d95f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0005e5ff) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0005e5ff) list_medium_line_x2_t4_g2_t

0x0398,	// (0x0004ec8b) list_medium_line_t3_right_iconx2_g1

0x0269,	// (0x0004eb5c) list_medium_line_t3_right_iconx2_g2

0x03a0,	// (0x0004ec93) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0005e608) list_medium_line_t3_right_iconx2_g

0x03aa,	// (0x0004ec9d) list_medium_line_t3_right_iconx2_t1

0x03ba,	// (0x0004ecad) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0005e60f) list_medium_line_t3_right_iconx2_t

0x1d20,	// (0x00050613) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x3_t4_g4_g1

0xf054,	// (0x0005d947) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x3_t4_g4_g2

0x1d38,	// (0x0005062b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d38,	// (0x0005062b) list_medium_line_x3_t4_g4_g3

0x03c8,	// (0x0004ecbb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x03c8,	// (0x0004ecbb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0005e614) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0005e614) list_medium_line_x3_t4_g4_g

0x03d4,	// (0x0004ecc7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x03d4,	// (0x0004ecc7) list_medium_line_x3_t4_g4_t1

0x03eb,	// (0x0004ecde) list_medium_line_x3_t4_g4_t2_ParamLimits

0x03eb,	// (0x0004ecde) list_medium_line_x3_t4_g4_t2

0x0406,	// (0x0004ecf9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0406,	// (0x0004ecf9) list_medium_line_x3_t4_g4_t3

0x041b,	// (0x0004ed0e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x041b,	// (0x0004ed0e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0005e61d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0005e61d) list_medium_line_x3_t4_g4_t

0x0438,	// (0x0004ed2b) list_single_dyc_row_text_pane_t1_ParamLimits

0x0438,	// (0x0004ed2b) list_single_dyc_row_text_pane_t1

0x0481,	// (0x0004ed74) list_single_dyc_row_text_pane_t2_ParamLimits

0x0481,	// (0x0004ed74) list_single_dyc_row_text_pane_t2

0x879f,	// (0x00057092) list_single_dyc_row_text_pane_t3_ParamLimits

0x879f,	// (0x00057092) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0005e626) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0005e626) list_single_dyc_row_text_pane_t

0x87c3,	// (0x000570b6) list_single_dyc_row_pane_g1_ParamLimits

0x87c3,	// (0x000570b6) list_single_dyc_row_pane_g1

0x87cf,	// (0x000570c2) list_single_dyc_row_pane_g2_ParamLimits

0x87cf,	// (0x000570c2) list_single_dyc_row_pane_g2

0x87db,	// (0x000570ce) list_single_dyc_row_pane_g3_ParamLimits

0x87db,	// (0x000570ce) list_single_dyc_row_pane_g3

0x87e7,	// (0x000570da) list_single_dyc_row_pane_g4_ParamLimits

0x87e7,	// (0x000570da) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005e633) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005e633) list_single_dyc_row_pane_g

0x87f3,	// (0x000570e6) list_single_dyc_row_text_pane_ParamLimits

0x87f3,	// (0x000570e6) list_single_dyc_row_text_pane

0x99f4,	// (0x000582e7) bg_sp_fs_scroll_pane

0xe761,	// (0x0005d054) thumb_sp_fs_scroll_pane

0xf0b2,	// (0x0005d9a5) list_medium_line_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_g1

0x05b6,	// (0x0004eea9) list_medium_line_t1_ParamLimits

0x05b6,	// (0x0004eea9) list_medium_line_t1

0x1d20,	// (0x00050613) list_medium_line_x2_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_g1

0xf054,	// (0x0005d947) list_medium_line_x2_g2_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005e63c) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005e63c) list_medium_line_x2_g

0x8812,	// (0x00057105) list_medium_line_x2_t1_ParamLimits

0x8812,	// (0x00057105) list_medium_line_x2_t1

0x1d20,	// (0x00050613) list_medium_line_x3_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x3_g1

0xf054,	// (0x0005d947) list_medium_line_x3_g2_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005e63c) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005e63c) list_medium_line_x3_g

0x8812,	// (0x00057105) list_medium_line_x3_t1_ParamLimits

0x8812,	// (0x00057105) list_medium_line_x3_t1

0xe76a,	// (0x0005d05d) thumb_sp_fs_scroll_pane_g1

0xe773,	// (0x0005d066) thumb_sp_fs_scroll_pane_g2

0xe77c,	// (0x0005d06f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e641) thumb_sp_fs_scroll_pane_g

0xe76a,	// (0x0005d05d) bg_sp_fs_scroll_pane_g1

0xe773,	// (0x0005d066) bg_sp_fs_scroll_pane_g2

0xe77c,	// (0x0005d06f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e641) bg_sp_fs_scroll_pane_g

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d20,	// (0x00050613) list_medium_line_x2_t3_g4_g1

0xf060,	// (0x0005d953) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf060,	// (0x0005d953) list_medium_line_x2_t3_g4_g2

0xf054,	// (0x0005d947) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf054,	// (0x0005d947) list_medium_line_x2_t3_g4_g3

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d2c,	// (0x0005061f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005dbb5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005dbb5) list_medium_line_x2_t3_g4_g

0x05cb,	// (0x0004eebe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05cb,	// (0x0004eebe) list_medium_line_x2_t3_g4_t1

0x05e1,	// (0x0004eed4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x05e1,	// (0x0004eed4) list_medium_line_x2_t3_g4_t2

0xf06c,	// (0x0005d95f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf06c,	// (0x0005d95f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005e648) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005e648) list_medium_line_x2_t3_g4_t

0xf0b2,	// (0x0005d9a5) list_medium_line_g2_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_g2_g1

0xf0be,	// (0x0005d9b1) list_medium_line_g2_g2_ParamLimits

0xf0be,	// (0x0005d9b1) list_medium_line_g2_g2

0x0001,

0xfd5c,	// (0x0005e64f) list_medium_line_g2_g_ParamLimits

0xfd5c,	// (0x0005e64f) list_medium_line_g2_g

0x05fa,	// (0x0004eeed) list_medium_line_g2_t1_ParamLimits

0x05fa,	// (0x0004eeed) list_medium_line_g2_t1

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g2_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g2_g1

0xf0be,	// (0x0005d9b1) list_medium_line_t3_g2_g2_ParamLimits

0xf0be,	// (0x0005d9b1) list_medium_line_t3_g2_g2

0x0001,

0xfd5c,	// (0x0005e64f) list_medium_line_t3_g2_g_ParamLimits

0xfd5c,	// (0x0005e64f) list_medium_line_t3_g2_g

0x060f,	// (0x0004ef02) list_medium_line_t3_g2_t1_ParamLimits

0x060f,	// (0x0004ef02) list_medium_line_t3_g2_t1

0x0629,	// (0x0004ef1c) list_medium_line_t3_g2_t2_ParamLimits

0x0629,	// (0x0004ef1c) list_medium_line_t3_g2_t2

0x063f,	// (0x0004ef32) list_medium_line_t3_g2_t3_ParamLimits

0x063f,	// (0x0004ef32) list_medium_line_t3_g2_t3

0x0002,

0xfd61,	// (0x0005e654) list_medium_line_t3_g2_t_ParamLimits

0xfd61,	// (0x0005e654) list_medium_line_t3_g2_t

0x0269,	// (0x0004eb5c) list_medium_line_right_icon_g1

0x0656,	// (0x0004ef49) list_medium_line_right_icon_t1

0xf0b2,	// (0x0005d9a5) list_medium_line_t2_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_t2_g1

0x0664,	// (0x0004ef57) list_medium_line_t2_t1_ParamLimits

0x0664,	// (0x0004ef57) list_medium_line_t2_t1

0x067e,	// (0x0004ef71) list_medium_line_t2_t2_ParamLimits

0x067e,	// (0x0004ef71) list_medium_line_t2_t2

0x0001,

0xfd68,	// (0x0005e65b) list_medium_line_t2_t_ParamLimits

0xfd68,	// (0x0005e65b) list_medium_line_t2_t

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g1

0x0697,	// (0x0004ef8a) list_medium_line_t3_t1_ParamLimits

0x0697,	// (0x0004ef8a) list_medium_line_t3_t1

0x06b1,	// (0x0004efa4) list_medium_line_t3_t2_ParamLimits

0x06b1,	// (0x0004efa4) list_medium_line_t3_t2

0x06c7,	// (0x0004efba) list_medium_line_t3_t3_ParamLimits

0x06c7,	// (0x0004efba) list_medium_line_t3_t3

0x0002,

0xfd6d,	// (0x0005e660) list_medium_line_t3_t_ParamLimits

0xfd6d,	// (0x0005e660) list_medium_line_t3_t

0xf0b2,	// (0x0005d9a5) list_medium_line_g3_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_g3_g1

0x06dc,	// (0x0004efcf) list_medium_line_g3_g2_ParamLimits

0x06dc,	// (0x0004efcf) list_medium_line_g3_g2

0xf0be,	// (0x0005d9b1) list_medium_line_g3_g3_ParamLimits

0xf0be,	// (0x0005d9b1) list_medium_line_g3_g3

0x0002,

0xfd74,	// (0x0005e667) list_medium_line_g3_g_ParamLimits

0xfd74,	// (0x0005e667) list_medium_line_g3_g

0x06e8,	// (0x0004efdb) list_medium_line_g3_t1_ParamLimits

0x06e8,	// (0x0004efdb) list_medium_line_g3_t1

0xf0b2,	// (0x0005d9a5) list_medium_line_t2_g3_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_t2_g3_g1

0x06dc,	// (0x0004efcf) list_medium_line_t2_g3_g2_ParamLimits

0x06dc,	// (0x0004efcf) list_medium_line_t2_g3_g2

0xf0be,	// (0x0005d9b1) list_medium_line_t2_g3_g3_ParamLimits

0xf0be,	// (0x0005d9b1) list_medium_line_t2_g3_g3

0x0002,

0xfd74,	// (0x0005e667) list_medium_line_t2_g3_g_ParamLimits

0xfd74,	// (0x0005e667) list_medium_line_t2_g3_g

0x06fd,	// (0x0004eff0) list_medium_line_t2_g3_t1_ParamLimits

0x06fd,	// (0x0004eff0) list_medium_line_t2_g3_t1

0x0714,	// (0x0004f007) list_medium_line_t2_g3_t2_ParamLimits

0x0714,	// (0x0004f007) list_medium_line_t2_g3_t2

0x0001,

0xfd7b,	// (0x0005e66e) list_medium_line_t2_g3_t_ParamLimits

0xfd7b,	// (0x0005e66e) list_medium_line_t2_g3_t

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g3_g1_ParamLimits

0xf0b2,	// (0x0005d9a5) list_medium_line_t3_g3_g1

0x06dc,	// (0x0004efcf) list_medium_line_t3_g3_g2_ParamLimits

0x06dc,	// (0x0004efcf) list_medium_line_t3_g3_g2

0xf0be,	// (0x0005d9b1) list_medium_line_t3_g3_g3_ParamLimits

0xf0be,	// (0x0005d9b1) list_medium_line_t3_g3_g3

0x0002,

0xfd74,	// (0x0005e667) list_medium_line_t3_g3_g_ParamLimits

0xfd74,	// (0x0005e667) list_medium_line_t3_g3_g

0x072d,	// (0x0004f020) list_medium_line_t3_g3_t1_ParamLimits

0x072d,	// (0x0004f020) list_medium_line_t3_g3_t1

0x0746,	// (0x0004f039) list_medium_line_t3_g3_t2_ParamLimits

0x0746,	// (0x0004f039) list_medium_line_t3_g3_t2

0x075c,	// (0x0004f04f) list_medium_line_t3_g3_t3_ParamLimits

0x075c,	// (0x0004f04f) list_medium_line_t3_g3_t3

0x0002,

0xfd80,	// (0x0005e673) list_medium_line_t3_g3_t_ParamLimits

0xfd80,	// (0x0005e673) list_medium_line_t3_g3_t

0x0398,	// (0x0004ec8b) list_medium_line_right_iconx2_g1

0x0269,	// (0x0004eb5c) list_medium_line_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e67a) list_medium_line_right_iconx2_g

0x0776,	// (0x0004f069) list_medium_line_right_iconx2_t1

0x0398,	// (0x0004ec8b) list_medium_line_t2_right_iconx2_g1

0x0269,	// (0x0004eb5c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd87,	// (0x0005e67a) list_medium_line_t2_right_iconx2_g

0x0784,	// (0x0004f077) list_medium_line_t2_right_iconx2_t1

0x0794,	// (0x0004f087) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8c,	// (0x0005e67f) list_medium_line_t2_right_iconx2_t

0x07a6,	// (0x0004f099) list_medium_line_x4_t4_t1

0x07b4,	// (0x0004f0a7) list_medium_line_x4_t4_t2

0x07c4,	// (0x0004f0b7) list_medium_line_x4_t4_t3

0x07d4,	// (0x0004f0c7) list_medium_line_x4_t4_t4

0x0003,

0xfd91,	// (0x0005e684) list_medium_line_x4_t4_t

0x886b,	// (0x0005715e) tport_appsw_pane_ParamLimits

0x886b,	// (0x0005715e) tport_appsw_pane

0x8883,	// (0x00057176) tport_contact_pane_ParamLimits

0x8883,	// (0x00057176) tport_contact_pane

0x889b,	// (0x0005718e) tport_listscroll_pane_ParamLimits

0x889b,	// (0x0005718e) tport_listscroll_pane

0x88b5,	// (0x000571a8) cell_tport_appsw_pane_ParamLimits

0x88b5,	// (0x000571a8) cell_tport_appsw_pane

0xd5f2,	// (0x0005bee5) tport_appsw_pane_g1_ParamLimits

0xd5f2,	// (0x0005bee5) tport_appsw_pane_g1

0xe785,	// (0x0005d078) tport_contact_pane_g1

0xe78e,	// (0x0005d081) tport_contact_pane_t1

0xe79c,	// (0x0005d08f) tport_contact_pane_t2

0x0001,

0xfd9a,	// (0x0005e68d) tport_contact_pane_t

0xe7aa,	// (0x0005d09d) list_tport_pane

0xe7b3,	// (0x0005d0a6) scroll_pane_cp_030

0x8907,	// (0x000571fa) cell_tport_appsw_pane_g1

0x8917,	// (0x0005720a) cell_tport_appsw_pane_t1

0x8925,	// (0x00057218) grid_highlight_pane_cp019

0x892d,	// (0x00057220) list_tport_double_graphic_pane_ParamLimits

0x892d,	// (0x00057220) list_tport_double_graphic_pane

0x9a4d,	// (0x00058340) list_highlight_pane_cp023_ParamLimits

0x9a4d,	// (0x00058340) list_highlight_pane_cp023

0x893a,	// (0x0005722d) list_tport_double_graphic_pane_g1_ParamLimits

0x893a,	// (0x0005722d) list_tport_double_graphic_pane_g1

0x8947,	// (0x0005723a) list_tport_double_graphic_pane_t1_ParamLimits

0x8947,	// (0x0005723a) list_tport_double_graphic_pane_t1

0x895c,	// (0x0005724f) list_tport_double_graphic_pane_t2_ParamLimits

0x895c,	// (0x0005724f) list_tport_double_graphic_pane_t2

0x0001,

0xfda6,	// (0x0005e699) list_tport_double_graphic_pane_t_ParamLimits

0xfda6,	// (0x0005e699) list_tport_double_graphic_pane_t

0x99f4,	// (0x000582e7) main_cale_note_pane

0x69c8,	// (0x000552bb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69c8,	// (0x000552bb) cell_vitu2_function_top_wide_pane_cp01

0x822a,	// (0x00056b1d) wait_bar_pane_cp05_ParamLimits

0x9a4d,	// (0x00058340) listscroll_cmail_pane

0xe7c4,	// (0x0005d0b7) list_cmail_pane

0x8978,	// (0x0005726b) list_cmail_body_pane

0xe5dd,	// (0x0005ced0) list_single_cmail_header_caption_pane

0x898b,	// (0x0005727e) list_single_cmail_header_detail_pane_ParamLimits

0x898b,	// (0x0005727e) list_single_cmail_header_detail_pane

0x89b6,	// (0x000572a9) list_single_cmail_header_caption_pane_t1

0x07e4,	// (0x0004f0d7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07e4,	// (0x0004f0d7) list_single_cmail_header_detail_pane_g1

0x89c6,	// (0x000572b9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x89c6,	// (0x000572b9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdab,	// (0x0005e69e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdab,	// (0x0005e69e) list_single_cmail_header_detail_pane_g

0x89d2,	// (0x000572c5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x89d2,	// (0x000572c5) list_single_cmail_header_detail_pane_t1

0x8a3e,	// (0x00057331) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8a3e,	// (0x00057331) list_single_cmail_header_editor_pane_bg

0xe27e,	// (0x0005cb71) list_cmail_body_pane_g1

0xe7f1,	// (0x0005d0e4) list_cmail_body_pane_t1

0xd612,	// (0x0005bf05) list_single_cmail_header_editor_pane_bg_g1

0xa643,	// (0x00058f36) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd622,	// (0x0005bf15) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd61a,	// (0x0005bf0d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd857,	// (0x0005c14a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd642,	// (0x0005bf35) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd632,	// (0x0005bf25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd63a,	// (0x0005bf2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa623,	// (0x00058f16) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a55,	// (0x00057348) calenote_gesture_pane_ParamLimits

0x8a55,	// (0x00057348) calenote_gesture_pane

0x8a75,	// (0x00057368) calenote_window_pane_ParamLimits

0x8a75,	// (0x00057368) calenote_window_pane

0xe7ff,	// (0x0005d0f2) popup_note_window_cp01

0x8a91,	// (0x00057384) calenote_swipe_1_pane_ParamLimits

0x8a91,	// (0x00057384) calenote_swipe_1_pane

0x865e,	// (0x00056f51) calenote_swipe_2_pane_ParamLimits

0x865e,	// (0x00056f51) calenote_swipe_2_pane

0xe60c,	// (0x0005ceff) calenote_swipe_1_pane_g1_ParamLimits

0xe60c,	// (0x0005ceff) calenote_swipe_1_pane_g1

0xe619,	// (0x0005cf0c) calenote_swipe_1_pane_g2_ParamLimits

0xe619,	// (0x0005cf0c) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0005e5bd) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0005e5bd) calenote_swipe_1_pane_g

0xe811,	// (0x0005d104) calenote_swipe_1_pane_t1_ParamLimits

0xe811,	// (0x0005d104) calenote_swipe_1_pane_t1

0xe60c,	// (0x0005ceff) calenote_swipe_2_pane_g1_ParamLimits

0xe60c,	// (0x0005ceff) calenote_swipe_2_pane_g1

0xe830,	// (0x0005d123) calenote_swipe_2_pane_g2_ParamLimits

0xe830,	// (0x0005d123) calenote_swipe_2_pane_g2

0x0001,

0xfdb7,	// (0x0005e6aa) calenote_swipe_2_pane_g_ParamLimits

0xfdb7,	// (0x0005e6aa) calenote_swipe_2_pane_g

0xe83c,	// (0x0005d12f) calenote_swipe_2_pane_t1_ParamLimits

0xe83c,	// (0x0005d12f) calenote_swipe_2_pane_t1

0x99f4,	// (0x000582e7) main_mup_navstr_pane

0x5617,	// (0x00053f0a) main_mup3_pane_t7_ParamLimits

0x5617,	// (0x00053f0a) main_mup3_pane_t7

0xa8dd,	// (0x000591d0) main_mp4_pane_g6_ParamLimits

0xa8dd,	// (0x000591d0) main_mp4_pane_g6

0xaa81,	// (0x00059374) main_image3_pane_t4_ParamLimits

0xaa81,	// (0x00059374) main_image3_pane_t4

0x8aa6,	// (0x00057399) popup_navstr_preview_pane_ParamLimits

0x8aa6,	// (0x00057399) popup_navstr_preview_pane

0x8ab6,	// (0x000573a9) scroll_navstr_pane_ParamLimits

0x8ab6,	// (0x000573a9) scroll_navstr_pane

0x99f4,	// (0x000582e7) bg_popup_preview_window_pane_cp04

0xe863,	// (0x0005d156) popup_navstr_preview_pane_t1

0x8aca,	// (0x000573bd) scroll_navstr_pane_g1_ParamLimits

0x8aca,	// (0x000573bd) scroll_navstr_pane_g1

0x8ade,	// (0x000573d1) scroll_navstr_pane_t1_ParamLimits

0x8ade,	// (0x000573d1) scroll_navstr_pane_t1

0xe808,	// (0x0005d0fb) bg_button_pane_cp014

0xe808,	// (0x0005d0fb) bg_button_pane_cp030

0x020f,	// (0x0004eb02) list_double_fisheye_pane_g4_ParamLimits

0x020f,	// (0x0004eb02) list_double_fisheye_pane_g4

0x021b,	// (0x0004eb0e) list_double_fisheye_pane_g5_ParamLimits

0x021b,	// (0x0004eb0e) list_double_fisheye_pane_g5

0xe7cc,	// (0x0005d0bf) sp_fs_scroll_pane_cp03

0xd307,	// (0x0005bbfa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6e4,	// (0x0005cfd7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0005e5da) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6f0,	// (0x0005cfe3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x896e,	// (0x00057261) sp_fs_scroll_pane_cp02

0xa33c,	// (0x00058c2f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa33c,	// (0x00058c2f) popup_sp_fs_calendar_preview_list_single_pane

0x99f4,	// (0x000582e7) main_cam6_pano_pane

0x9a4d,	// (0x00058340) main_mup3_pane_ParamLimits

0x99f4,	// (0x000582e7) main_phacti_pane

0x80fd,	// (0x000569f0) bg_button_pane_cp11

0x8117,	// (0x00056a0a) main_mobtv_info_pane_g2_ParamLimits

0x8117,	// (0x00056a0a) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0005e53a) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0005e53a) main_mobtv_info_pane_g

0x82f2,	// (0x00056be5) sc_clock_pane_t5_ParamLimits

0x82f2,	// (0x00056be5) sc_clock_pane_t5

0x83d0,	// (0x00056cc3) main_radioblah_pane_g1_ParamLimits

0xe529,	// (0x0005ce1c) main_radioblah_pane_t3_ParamLimits

0xe529,	// (0x0005ce1c) main_radioblah_pane_t3

0xe541,	// (0x0005ce34) main_radioblah_pane_t4_ParamLimits

0xe541,	// (0x0005ce34) main_radioblah_pane_t4

0x83f8,	// (0x00056ceb) main_radioblah_text_pane_ParamLimits

0x83f8,	// (0x00056ceb) main_radioblah_text_pane

0x840a,	// (0x00056cfd) main_radioblah_info_pane_g1_ParamLimits

0x84a3,	// (0x00056d96) main_radioblah_info_pane_t4_ParamLimits

0x84a3,	// (0x00056d96) main_radioblah_info_pane_t4

0x9a4d,	// (0x00058340) main_sp_fs_calendar_pane

0x8af5,	// (0x000573e8) main_phacti_pane_g1

0x8afd,	// (0x000573f0) phacti_note_pane_ParamLimits

0x8afd,	// (0x000573f0) phacti_note_pane

0xe87a,	// (0x0005d16d) phacti_term_pane_ParamLimits

0xe87a,	// (0x0005d16d) phacti_term_pane

0xe88f,	// (0x0005d182) phacti_note_pane_t1_ParamLimits

0xe88f,	// (0x0005d182) phacti_note_pane_t1

0x8b11,	// (0x00057404) phacti_term_pane_g1

0x8b19,	// (0x0005740c) phacti_term_pane_t1_ParamLimits

0x8b19,	// (0x0005740c) phacti_term_pane_t1

0xe8a6,	// (0x0005d199) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ae,	// (0x0005d1a1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc1,	// (0x0005e6b4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b6,	// (0x0005d1a9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b6,	// (0x0005d1a9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cc,	// (0x0005d1bf) aid_popup_sp_fs_bg_corner_pane

0xcbf8,	// (0x0005b4eb) popup_sp_fs_calendar_preview_bg_pane_g1

0x99f4,	// (0x000582e7) popup_sp_fs_calendar_preview_bg_pane

0xe8d4,	// (0x0005d1c7) popup_sp_fs_calendar_preview_list_pane

0xc7a7,	// (0x0005b09a) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a7,	// (0x0005b09a) bg_main_sp_fs_cale_pane

0x8ba9,	// (0x0005749c) listscroll_cale_mrui_pane_ParamLimits

0x8ba9,	// (0x0005749c) listscroll_cale_mrui_pane

0x8bbe,	// (0x000574b1) listscroll_sp_fs_schedule_track_pane

0x8bc7,	// (0x000574ba) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8bc7,	// (0x000574ba) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x0005d1cf) main_sp_fs_ribbon_pane

0x8bda,	// (0x000574cd) popup_sp_fs_cale_preview_window

0x8bec,	// (0x000574df) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8bec,	// (0x000574df) list_single_sp_fs_schedule_track_pane

0x9a4d,	// (0x00058340) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a4d,	// (0x00058340) bg_sp_fs_highlight_list_pane_cp03

0x8c00,	// (0x000574f3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c00,	// (0x000574f3) list_single_sp_fs_schedule_track_pane_g1

0x8c0c,	// (0x000574ff) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c0c,	// (0x000574ff) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc6,	// (0x0005e6b9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc6,	// (0x0005e6b9) list_single_sp_fs_schedule_track_pane_g

0x8c18,	// (0x0005750b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c18,	// (0x0005750b) list_single_sp_fs_schedule_track_pane_t1

0x8c3a,	// (0x0005752d) sp_fs_schedule_track_pane_ParamLimits

0x8c3a,	// (0x0005752d) sp_fs_schedule_track_pane

0xe8e4,	// (0x0005d1d7) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x0005d1df) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x0005d1e7) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x0005d1ef) sp_fs_schedule_track_pane_g4

0xe904,	// (0x0005d1f7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcb,	// (0x0005e6be) sp_fs_schedule_track_pane_g

0xd612,	// (0x0005bf05) bg_sp_fs_schedule_viewer_highlight_g1

0xa643,	// (0x00058f36) bg_sp_fs_schedule_viewer_highlight_g2

0xd61a,	// (0x0005bf0d) bg_sp_fs_schedule_viewer_highlight_g3

0xd622,	// (0x0005bf15) bg_sp_fs_schedule_viewer_highlight_g4

0xd857,	// (0x0005c14a) bg_sp_fs_schedule_viewer_highlight_g5

0xd632,	// (0x0005bf25) bg_sp_fs_schedule_viewer_highlight_g6

0xd63a,	// (0x0005bf2d) bg_sp_fs_schedule_viewer_highlight_g7

0xd642,	// (0x0005bf35) bg_sp_fs_schedule_viewer_highlight_g8

0xa623,	// (0x00058f16) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd6,	// (0x0005e6c9) bg_sp_fs_schedule_viewer_highlight_g

0x99f4,	// (0x000582e7) bg_main_sp_fs_ribbon_pane

0x8c4f,	// (0x00057542) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x0005d1ff) main_sp_fs_ribbon_pane_t1

0x8c58,	// (0x0005754b) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x0005d20e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde9,	// (0x0005e6dc) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x0005d21d) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x0005d225) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x0005d22e) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x0005d237) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf0,	// (0x0005e6e3) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x0005d23f) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x0005d248) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x0005d251) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf7,	// (0x0005e6ea) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x0005d25a) list_cale_mrui_pane

0x8c67,	// (0x0005755a) sp_fs_scroll_pane_cp07_ParamLimits

0x8c67,	// (0x0005755a) sp_fs_scroll_pane_cp07

0x8c83,	// (0x00057576) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c83,	// (0x00057576) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x0005d267) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x0005d26f) list_sp_fs_schedule_track_pane

0xe984,	// (0x0005d277) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x0005d277) sp_fs_scroll_pane_cp06

0xcbf8,	// (0x0005b4eb) bgmain_sp_fs_calendar_pane_g1

0x07fc,	// (0x0004f0ef) list_single_cale_mrui_pane_ParamLimits

0x07fc,	// (0x0004f0ef) list_single_cale_mrui_pane

0x8c95,	// (0x00057588) list_single_cale_mrui_row_pane_ParamLimits

0x8c95,	// (0x00057588) list_single_cale_mrui_row_pane

0x8cab,	// (0x0005759e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8cab,	// (0x0005759e) list_single_cale_mrui_row_pane_g1

0x8ce3,	// (0x000575d6) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8ce3,	// (0x000575d6) list_single_cale_mrui_row_pane_t1

0x0811,	// (0x0004f104) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0811,	// (0x0004f104) list_single_cale_mrui_row_pane_t2

0x8cf5,	// (0x000575e8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8cf5,	// (0x000575e8) list_single_cale_mrui_row_pane_t3

0x8d24,	// (0x00057617) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8d24,	// (0x00057617) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe05,	// (0x0005e6f8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe05,	// (0x0005e6f8) list_single_cale_mrui_row_pane_t

0x0879,	// (0x0004f16c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0879,	// (0x0004f16c) list_single_cmail_header_editor_pane_bg_cp01

0x089f,	// (0x0004f192) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x089f,	// (0x0004f192) list_single_cmail_header_editor_pane_bg_cp02

0x8d53,	// (0x00057646) main_radioblah_text_pane_t1_ParamLimits

0x8d53,	// (0x00057646) main_radioblah_text_pane_t1

0xe9a3,	// (0x0005d296) cam6_indi_pane_cp01

0xe9ab,	// (0x0005d29e) cam6_mode_pane_cp01

0xe9b3,	// (0x0005d2a6) cam6_pano_pane

0xe9bc,	// (0x0005d2af) cam6_zoom_pane_cp01

0xe9c6,	// (0x0005d2b9) cam6_pano_image_pane

0xe9cf,	// (0x0005d2c2) cam6_pano_pane_g1

0xe27e,	// (0x0005cb71) cam6_pano_pane_g2

0xe9d8,	// (0x0005d2cb) cam6_pano_pane_g3

0xe9e1,	// (0x0005d2d4) cam6_pano_pane_g4

0xd192,	// (0x0005ba85) cam6_pano_pane_g5

0xe9ea,	// (0x0005d2dd) cam6_pano_pane_g6

0xe9f2,	// (0x0005d2e5) cam6_pano_pane_g7

0xe9fa,	// (0x0005d2ed) cam6_pano_pane_g8

0xea03,	// (0x0005d2f6) cam6_pano_pane_g9

0x0008,

0xfe0e,	// (0x0005e701) cam6_pano_pane_g

0x99f4,	// (0x000582e7) main_browser_tag_pane

0xe85b,	// (0x0005d14e) grid_navstr_albumart_pane

0xea0e,	// (0x0005d301) cell_navstr_albumart_pane_ParamLimits

0xea0e,	// (0x0005d301) cell_navstr_albumart_pane

0xea2d,	// (0x0005d320) cell_navstr_albumart_pane_g1

0xc5b4,	// (0x0005aea7) cell_navstr_albumart_pane_g2

0xc5c4,	// (0x0005aeb7) cell_navstr_albumart_pane_g3

0xc5bc,	// (0x0005aeaf) cell_navstr_albumart_pane_g4

0x0003,

0xfe21,	// (0x0005e714) cell_navstr_albumart_pane_g

0x8d6e,	// (0x00057661) bt_list_pane_ParamLimits

0x8d6e,	// (0x00057661) bt_list_pane

0x8d84,	// (0x00057677) bt_list_pane_t1

0x8d93,	// (0x00057686) bt_list_pane_t2

0x0001,

0xfe2a,	// (0x0005e71d) bt_list_pane_t

0x99f4,	// (0x000582e7) main_cale_prevew_pane

0x8da2,	// (0x00057695) popup_cale_preview_window_ParamLimits

0x8da2,	// (0x00057695) popup_cale_preview_window

0x9a4d,	// (0x00058340) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a4d,	// (0x00058340) bg_popup_preview_window_pane_cp05

0xea35,	// (0x0005d328) list_cale_preview_pane_ParamLimits

0xea35,	// (0x0005d328) list_cale_preview_pane

0x8dbf,	// (0x000576b2) list_double_cale_preview_pane_ParamLimits

0x8dbf,	// (0x000576b2) list_double_cale_preview_pane

0x8dd3,	// (0x000576c6) list_single_cale_preview_pane_ParamLimits

0x8dd3,	// (0x000576c6) list_single_cale_preview_pane

0x8deb,	// (0x000576de) list_single_cale_preview_pane_g1

0x8df3,	// (0x000576e6) list_single_cale_preview_pane_t1_ParamLimits

0x8df3,	// (0x000576e6) list_single_cale_preview_pane_t1

0x8e08,	// (0x000576fb) list_double_cale_preview_pane_g1

0x8e10,	// (0x00057703) list_double_cale_preview_pane_t1_ParamLimits

0x8e10,	// (0x00057703) list_double_cale_preview_pane_t1

0x8e25,	// (0x00057718) list_double_cale_preview_pane_t2_ParamLimits

0x8e25,	// (0x00057718) list_double_cale_preview_pane_t2

0x0001,

0xfe2f,	// (0x0005e722) list_double_cale_preview_pane_t_ParamLimits

0xfe2f,	// (0x0005e722) list_double_cale_preview_pane_t

0x99f4,	// (0x000582e7) main_ezdial_pane

0x9a4d,	// (0x00058340) main_sp_fs_email_pane_ParamLimits

0x86be,	// (0x00056fb1) cmail_ddmenu_btn01_pane_ParamLimits

0x86be,	// (0x00056fb1) cmail_ddmenu_btn01_pane

0x86d1,	// (0x00056fc4) cmail_ddmenu_btn02_pane_ParamLimits

0x86d1,	// (0x00056fc4) cmail_ddmenu_btn02_pane

0x86f4,	// (0x00056fe7) cmail_ddmenu_btn03_pane_ParamLimits

0x86f4,	// (0x00056fe7) cmail_ddmenu_btn03_pane

0x0293,	// (0x0004eb86) main_sp_fs_ctrlbar_pane_ParamLimits

0x02b7,	// (0x0004ebaa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8978,	// (0x0005726b) list_cmail_body_pane_ParamLimits

0xe7db,	// (0x0005d0ce) bg_button_pane_cp12

0xe7e4,	// (0x0005d0d7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e4,	// (0x0005d0d7) list_single_cmail_header_detail_pane_g3

0x8a1a,	// (0x0005730d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a1a,	// (0x0005730d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb2,	// (0x0005e6a5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb2,	// (0x0005e6a5) list_single_cmail_header_detail_pane_t

0x8b2e,	// (0x00057421) phacti_term_pane_t2_ParamLimits

0x8b2e,	// (0x00057421) phacti_term_pane_t2

0x0001,

0xfdbc,	// (0x0005e6af) phacti_term_pane_t_ParamLimits

0xfdbc,	// (0x0005e6af) phacti_term_pane_t

0xea41,	// (0x0005d334) aid_size_list_single_double

0x8e3d,	// (0x00057730) popup_ezdial_listscroll_window

0x8e59,	// (0x0005774c) popup_number_entry_window_cp01

0xa3dc,	// (0x00058ccf) bg_popup_call_pane_cp09

0xea4d,	// (0x0005d340) ezdial_list_pane

0xea55,	// (0x0005d348) scroll_pane_cp23

0xc7a7,	// (0x0005b09a) bg_button_pane_cp028_ParamLimits

0xc7a7,	// (0x0005b09a) bg_button_pane_cp028

0x8e67,	// (0x0005775a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e67,	// (0x0005775a) cmail_ddmenu_btn01_pane_g1

0x8e76,	// (0x00057769) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e76,	// (0x00057769) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe34,	// (0x0005e727) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe34,	// (0x0005e727) cmail_ddmenu_btn01_pane_g

0xea5d,	// (0x0005d350) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea5d,	// (0x0005d350) cmail_ddmenu_btn01_pane_t1

0xc7a7,	// (0x0005b09a) bg_button_pane_cp029_ParamLimits

0xc7a7,	// (0x0005b09a) bg_button_pane_cp029

0x8e8c,	// (0x0005777f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e8c,	// (0x0005777f) cmail_ddmenu_btn02_pane_g1

0x8ea7,	// (0x0005779a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ea7,	// (0x0005779a) cmail_ddmenu_btn02_pane_t1

0x9a4d,	// (0x00058340) bg_button_pane_cp031_ParamLimits

0x9a4d,	// (0x00058340) bg_button_pane_cp031

0x8e8c,	// (0x0005777f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e8c,	// (0x0005777f) cmail_ddmenu_btn03_pane_g1

0x8ea7,	// (0x0005779a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ea7,	// (0x0005779a) cmail_ddmenu_btn03_pane_t1

0x61f7,	// (0x00054aea) cell_dialer2_keypad_pane_t1_ParamLimits

0x6211,	// (0x00054b04) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6211,	// (0x00054b04) cell_dialer2_keypad_pane_t1_copy1

0x7f62,	// (0x00056855) ncimui_group_button_pane

0x9a4d,	// (0x00058340) main_sp_fs_calendar_pane_ParamLimits

0xe5dd,	// (0x0005ced0) list_single_cmail_header_caption_pane_ParamLimits

0x8b61,	// (0x00057454) aid_recal_txt_sm_pane

0x99f4,	// (0x000582e7) mian_recal_day_pane

0x8bda,	// (0x000574cd) popup_sp_fs_cale_preview_window_ParamLimits

0xea73,	// (0x0005d366) list_recal_day_pane

0x8eea,	// (0x000577dd) list_single_recal_day_pane_ParamLimits

0x8eea,	// (0x000577dd) list_single_recal_day_pane

0xea9a,	// (0x0005d38d) list_single_recal_day_pane_g1_ParamLimits

0xea9a,	// (0x0005d38d) list_single_recal_day_pane_g1

0x8efc,	// (0x000577ef) list_single_recal_day_pane_g2_ParamLimits

0x8efc,	// (0x000577ef) list_single_recal_day_pane_g2

0x8f08,	// (0x000577fb) list_single_recal_day_pane_g3_ParamLimits

0x8f08,	// (0x000577fb) list_single_recal_day_pane_g3

0x08bf,	// (0x0004f1b2) list_single_recal_day_pane_g4_ParamLimits

0x08bf,	// (0x0004f1b2) list_single_recal_day_pane_g4

0x8f14,	// (0x00057807) list_single_recal_day_pane_g5_ParamLimits

0x8f14,	// (0x00057807) list_single_recal_day_pane_g5

0x8f20,	// (0x00057813) list_single_recal_day_pane_g6_ParamLimits

0x8f20,	// (0x00057813) list_single_recal_day_pane_g6

0x0004,

0xfe43,	// (0x0005e736) list_single_recal_day_pane_g_ParamLimits

0xfe43,	// (0x0005e736) list_single_recal_day_pane_g

0x8f34,	// (0x00057827) list_single_recal_day_pane_t1

0xac9e,	// (0x00059591) list_single_recal_day_pane_t2

0x0001,

0xfe4e,	// (0x0005e741) list_single_recal_day_pane_t

0x8f46,	// (0x00057839) ncimui_query_button_pane_ParamLimits

0x8f46,	// (0x00057839) ncimui_query_button_pane

0x8f56,	// (0x00057849) ncimui_query_button_pane_t1_ParamLimits

0x8f56,	// (0x00057849) ncimui_query_button_pane_t1

0xeaa6,	// (0x0005d399) ncimui_query_button_pane_t2_ParamLimits

0xeaa6,	// (0x0005d399) ncimui_query_button_pane_t2

0x0001,

0xfe53,	// (0x0005e746) ncimui_query_button_pane_t_ParamLimits

0xfe53,	// (0x0005e746) ncimui_query_button_pane_t

0x8f69,	// (0x0005785c) query_button_pane_ParamLimits

0x8f69,	// (0x0005785c) query_button_pane

0x99f4,	// (0x000582e7) bg_button_pane_cp0028

0xeab9,	// (0x0005d3ac) query_button_pane_t1

0x4220,	// (0x00052b13) main_tport_pane_ParamLimits

0x8828,	// (0x0005711b) bg_popup_window_pane_cp01_ParamLimits

0x8828,	// (0x0005711b) bg_popup_window_pane_cp01

0x8843,	// (0x00057136) heading_pane_cp08_ParamLimits

0x8843,	// (0x00057136) heading_pane_cp08

0x8856,	// (0x00057149) heading_pane_cp07_ParamLimits

0x8856,	// (0x00057149) heading_pane_cp07

0x8907,	// (0x000571fa) cell_tport_appsw_pane_g2

0x0002,

0xfd9f,	// (0x0005e692) cell_tport_appsw_pane_g

0xfd3b,	// (0x0004e62e) input_candi_list_open_g1

0xae53,	// (0x00059746) list_cale_time_pane_g6_ParamLimits

0xae53,	// (0x00059746) list_cale_time_pane_g6

0x502a,	// (0x0005391d) aid_size_touch_calib_1_ParamLimits

0x502a,	// (0x0005391d) aid_size_touch_calib_1

0x503c,	// (0x0005392f) aid_size_touch_calib_2_ParamLimits

0x503c,	// (0x0005392f) aid_size_touch_calib_2

0x5054,	// (0x00053947) aid_size_touch_calib_3_ParamLimits

0x5054,	// (0x00053947) aid_size_touch_calib_3

0x5072,	// (0x00053965) aid_size_touch_calib_4_ParamLimits

0x5072,	// (0x00053965) aid_size_touch_calib_4

0x508a,	// (0x0005397d) main_touch_calib_button_group_pane_ParamLimits

0x508a,	// (0x0005397d) main_touch_calib_button_group_pane

0x50a2,	// (0x00053995) main_touch_calib_pane_g1_ParamLimits

0x50b4,	// (0x000539a7) main_touch_calib_pane_g2_ParamLimits

0x50c6,	// (0x000539b9) main_touch_calib_pane_g3_ParamLimits

0x50d8,	// (0x000539cb) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0005e04b) main_touch_calib_pane_g_ParamLimits

0x50ea,	// (0x000539dd) main_touch_calib_pane_t1_ParamLimits

0x5104,	// (0x000539f7) main_touch_calib_pane_t2_ParamLimits

0x511e,	// (0x00053a11) main_touch_calib_pane_t3_ParamLimits

0x5132,	// (0x00053a25) main_touch_calib_pane_t4_ParamLimits

0x5148,	// (0x00053a3b) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0005e054) main_touch_calib_pane_t_ParamLimits

0xcf28,	// (0x0005b81b) list_single_fp_cale_pane_g3_ParamLimits

0xcf28,	// (0x0005b81b) list_single_fp_cale_pane_g3

0x9a4d,	// (0x00058340) bg_button_pane_cp012_ParamLimits

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp03_ParamLimits

0x71c4,	// (0x00055ab7) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a4d,	// (0x00058340) bg_vkb2_func_pane_cp04_ParamLimits

0x7ef0,	// (0x000567e3) main_ncimui_button_group_pane_ParamLimits

0x7ef0,	// (0x000567e3) main_ncimui_button_group_pane

0x7f50,	// (0x00056843) main_ncimui_pane_t3_ParamLimits

0x7f50,	// (0x00056843) main_ncimui_pane_t3

0xe871,	// (0x0005d164) phacti_button_group_pane

0xea41,	// (0x0005d334) aid_size_list_single_double_ParamLimits

0x8e3d,	// (0x00057730) popup_ezdial_listscroll_window_ParamLimits

0x8e59,	// (0x0005774c) popup_number_entry_window_cp01_ParamLimits

0x8f7c,	// (0x0005786f) phacti_button_pane_ParamLimits

0x8f7c,	// (0x0005786f) phacti_button_pane

0x99f4,	// (0x000582e7) bg_button_pane_cp14

0xeac7,	// (0x0005d3ba) phacti_button_pane_t1

0x8f8d,	// (0x00057880) main_touch_calib_button_pane_ParamLimits

0x8f8d,	// (0x00057880) main_touch_calib_button_pane

0xa1b0,	// (0x00058aa3) bg_button_pane_cp18_ParamLimits

0xa1b0,	// (0x00058aa3) bg_button_pane_cp18

0xead5,	// (0x0005d3c8) main_touch_calib_button_pane_t1_ParamLimits

0xead5,	// (0x0005d3c8) main_touch_calib_button_pane_t1

0xeaeb,	// (0x0005d3de) main_touch_calib_button_pane_t2_ParamLimits

0xeaeb,	// (0x0005d3de) main_touch_calib_button_pane_t2

0x0001,

0xfe58,	// (0x0005e74b) main_touch_calib_button_pane_t_ParamLimits

0xfe58,	// (0x0005e74b) main_touch_calib_button_pane_t

0x99f4,	// (0x000582e7) cell_ncimui_button_pane

0x99f4,	// (0x000582e7) bg_button_pane_cp032

0xeb09,	// (0x0005d3fc) cell_ncimui_button_pane_t1

0xaa5f,	// (0x00059352) image3_infobar_pane_ParamLimits

0xaa5f,	// (0x00059352) image3_infobar_pane

0x831e,	// (0x00056c11) fs_bigclock_status_pane_ParamLimits

0x831e,	// (0x00056c11) fs_bigclock_status_pane

0x832b,	// (0x00056c1e) main_fs_bigclock_clock_pane_ParamLimits

0x832b,	// (0x00056c1e) main_fs_bigclock_clock_pane

0x8355,	// (0x00056c48) main_fs_bigclock_indi_pane_ParamLimits

0x8355,	// (0x00056c48) main_fs_bigclock_indi_pane

0x8393,	// (0x00056c86) main_fs_bigclock_swipe_pane_ParamLimits

0x8393,	// (0x00056c86) main_fs_bigclock_swipe_pane

0x99f4,	// (0x000582e7) main_fs_clock_dumped_data

0xe38b,	// (0x0005cc7e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe38b,	// (0x0005cc7e) list_single_fs_bigclock_indicator_pane_g1

0xe3b5,	// (0x0005cca8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3b5,	// (0x0005cca8) list_single_fs_bigclock_indicator_pane_g2

0xe3cf,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3cf,	// (0x0005ccc2) list_single_fs_bigclock_indicator_pane_g3

0xe3e9,	// (0x0005ccdc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e9,	// (0x0005ccdc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0005e56e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0005e56e) list_single_fs_bigclock_indicator_pane_g

0xe414,	// (0x0005cd07) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe414,	// (0x0005cd07) list_single_fs_bigclock_indicator_pane_t1

0xe43c,	// (0x0005cd2f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe43c,	// (0x0005cd2f) list_single_fs_bigclock_indicator_pane_t2

0xe464,	// (0x0005cd57) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe464,	// (0x0005cd57) list_single_fs_bigclock_indicator_pane_t3

0xe48c,	// (0x0005cd7f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe48c,	// (0x0005cd7f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0005e579) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0005e579) list_single_fs_bigclock_indicator_pane_t

0xeb17,	// (0x0005d40a) image3_infobar_fav_pane_ParamLimits

0xeb17,	// (0x0005d40a) image3_infobar_fav_pane

0xeb27,	// (0x0005d41a) image3_infobar_loc_pane_ParamLimits

0xeb27,	// (0x0005d41a) image3_infobar_loc_pane

0xeb3d,	// (0x0005d430) image3_infobar_time_pane_ParamLimits

0xeb3d,	// (0x0005d430) image3_infobar_time_pane

0xcbf8,	// (0x0005b4eb) image3_infobar_time_pane_g1

0xeb4d,	// (0x0005d440) image3_infobar_time_pane_t1

0xcbf8,	// (0x0005b4eb) image3_infobar_loc_pane_g1

0xeb5b,	// (0x0005d44e) image3_infobar_loc_pane_g2

0x0001,

0xfe5d,	// (0x0005e750) image3_infobar_loc_pane_g

0xeb63,	// (0x0005d456) image3_infobar_loc_pane_t1

0xcbf8,	// (0x0005b4eb) image3_infobar_fav_pane_g1

0xeb71,	// (0x0005d464) image3_infobar_fav_pane_g2

0x0001,

0xfe62,	// (0x0005e755) image3_infobar_fav_pane_g

0xeb79,	// (0x0005d46c) fs_bigclock_status_battery_pane

0xeb82,	// (0x0005d475) fs_bigclock_status_signal_pane

0xeb8b,	// (0x0005d47e) fs_bigclock_status_title_pane

0xeb94,	// (0x0005d487) fs_bigclock_status_signal_pane_g1

0xeb9d,	// (0x0005d490) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe67,	// (0x0005e75a) fs_bigclock_status_signal_pane_g

0xeba5,	// (0x0005d498) fs_bigclock_status_battery_pane_g1

0xebae,	// (0x0005d4a1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6c,	// (0x0005e75f) fs_bigclock_status_battery_pane_g

0xebb6,	// (0x0005d4a9) fs_bigclock_status_title_pane_t1

0xcbf8,	// (0x0005b4eb) main_fs_bigclock_clock_pane_g1

0xebc4,	// (0x0005d4b7) main_fs_bigclock_clock_pane_g2

0xebcf,	// (0x0005d4c2) main_fs_bigclock_clock_pane_g3

0xebcf,	// (0x0005d4c2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe71,	// (0x0005e764) main_fs_bigclock_clock_pane_g

0xebdb,	// (0x0005d4ce) main_fs_bigclock_clock_pane_t1

0x8fa2,	// (0x00057895) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7a,	// (0x0005e76d) main_fs_bigclock_clock_pane_t

0x8fb1,	// (0x000578a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8fb1,	// (0x000578a4) list_single_fs_bigclock_indicator_pane

0x8fc2,	// (0x000578b5) list_single_fs_bigclock_pane_ParamLimits

0x8fc2,	// (0x000578b5) list_single_fs_bigclock_pane

0xebf2,	// (0x0005d4e5) main_fs_bigclock_indicator_pane_t1

0xec01,	// (0x0005d4f4) list_single_fs_bigclock_pane_g1

0xec09,	// (0x0005d4fc) list_single_fs_bigclock_pane_t1

0xcbf8,	// (0x0005b4eb) main_fs_bigclock_swipe_pane_g1

0xec4c,	// (0x0005d53f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8b,	// (0x0005e77e) main_fs_bigclock_swipe_pane_g

0xec54,	// (0x0005d547) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec54,	// (0x0005d547) main_fs_bigclock_swipe_pane_t1

0x2f44,	// (0x00051837) call_type_pane_ParamLimits

0x99f4,	// (0x000582e7) main_btmg_pane

0x8cd7,	// (0x000575ca) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8cd7,	// (0x000575ca) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfe,	// (0x0005e6f1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfe,	// (0x0005e6f1) list_single_cale_mrui_row_pane_g

0x8ed8,	// (0x000577cb) list_recal_vselct_arw_lo_pane

0xea92,	// (0x0005d385) list_recal_vselct_arw_up_pane

0x8ee0,	// (0x000577d3) list_recal_vselct_pane

0x9025,	// (0x00057918) btmg_button_pane

0x902f,	// (0x00057922) main_btmg_pane_g1

0x99f4,	// (0x000582e7) bg_button_pane_cp044

0xec71,	// (0x0005d564) btmg_button_pane_t1

0xc793,	// (0x0005b086) aid_listscroll_gen

0x9a4d,	// (0x00058340) main_cntbar_detail_pane

0xe7bc,	// (0x0005d0af) list_cmail_folder_pane

0xe7cc,	// (0x0005d0bf) sp_fs_scroll_pane_cp03_ParamLimits

0x08d7,	// (0x0004f1ca) list_single_fs_dyc_pane_cp01_ParamLimits

0x08d7,	// (0x0004f1ca) list_single_fs_dyc_pane_cp01

0xec7f,	// (0x0005d572) aid_size_cmail_indent

0xacb0,	// (0x000595a3) list_single_dyc_row_pane_cp01

0x9069,	// (0x0005795c) cntbar_detail_list_pane_ParamLimits

0x9069,	// (0x0005795c) cntbar_detail_list_pane

0x90bb,	// (0x000579ae) main_cntbar_detail_cont_pane_ParamLimits

0x90bb,	// (0x000579ae) main_cntbar_detail_cont_pane

0x2f38,	// (0x0005182b) scroll_pane_cp032_ParamLimits

0x2f38,	// (0x0005182b) scroll_pane_cp032

0x90cf,	// (0x000579c2) cntbar_detail_list_event_pane_ParamLimits

0x90cf,	// (0x000579c2) cntbar_detail_list_event_pane

0x907b,	// (0x0005796e) cntbar_detail_list_shct_pane

0xaced,	// (0x000595e0) aid_list_gen

0xec88,	// (0x0005d57b) aid_scroll

0xec91,	// (0x0005d584) aid_size_touch_scroll_bar

0x77c0,	// (0x000560b3) aid_list_double

0xec9a,	// (0x0005d58d) aid_list_single

0x0101,	// (0x0004e9f4) aid_list_single_lg

0xacb9,	// (0x000595ac) aid_list_z_g_a_sm

0xacc1,	// (0x000595b4) aid_list_z_g_d

0x08f2,	// (0x0004f1e5) aid_txt_z_prm

0x0902,	// (0x0004f1f5) aid_txt_z_prm_cp01

0x0910,	// (0x0004f203) aid_txt_z_sec

0x90df,	// (0x000579d2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90df,	// (0x000579d2) main_cntbar_detail_cont_pane_g1

0x90f3,	// (0x000579e6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90f3,	// (0x000579e6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe90,	// (0x0005e783) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe90,	// (0x0005e783) main_cntbar_detail_cont_pane_g

0xeca3,	// (0x0005d596) main_cntbar_detail_cont_pane_t1

0xecb1,	// (0x0005d5a4) main_cntbar_detail_cont_pane_t2

0xecbf,	// (0x0005d5b2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe95,	// (0x0005e788) main_cntbar_detail_cont_pane_t

0x9103,	// (0x000579f6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9103,	// (0x000579f6) cell_cntbar_detail_list_shct_pane

0xeccd,	// (0x0005d5c0) cntbar_detail_list_shct_pane_g1

0xecd6,	// (0x0005d5c9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9c,	// (0x0005e78f) cntbar_detail_list_shct_pane_g

0x9115,	// (0x00057a08) cntbar_detail_list_event_pane_g1_ParamLimits

0x9115,	// (0x00057a08) cntbar_detail_list_event_pane_g1

0x9121,	// (0x00057a14) cntbar_detail_list_event_pane_g2_ParamLimits

0x9121,	// (0x00057a14) cntbar_detail_list_event_pane_g2

0x0005,

0xfea1,	// (0x0005e794) cntbar_detail_list_event_pane_g_ParamLimits

0xfea1,	// (0x0005e794) cntbar_detail_list_event_pane_g

0x918f,	// (0x00057a82) cntbar_detail_list_event_pane_t1_ParamLimits

0x918f,	// (0x00057a82) cntbar_detail_list_event_pane_t1

0x91a4,	// (0x00057a97) cntbar_detail_list_event_pane_t2_ParamLimits

0x91a4,	// (0x00057a97) cntbar_detail_list_event_pane_t2

0x0002,

0xfeae,	// (0x0005e7a1) cntbar_detail_list_event_pane_t_ParamLimits

0xfeae,	// (0x0005e7a1) cntbar_detail_list_event_pane_t

0xcbf8,	// (0x0005b4eb) cell_cntbar_detail_list_shct_pane_g1

0x32ea,	// (0x00051bdd) navi_pane_mv_g3

0x9a4d,	// (0x00058340) main_cntbar_detail_pane_ParamLimits

0x99f4,	// (0x000582e7) main_notif_wgt_pane

0xa877,	// (0x0005916a) aid_tch_main_mp4_pane_g4

0xaa55,	// (0x00059348) popup_slider_window_cp02

0x8ece,	// (0x000577c1) list_recal_day_event_pane

0x9039,	// (0x0005792c) cntbar_detail_btn_pane_ParamLimits

0x9039,	// (0x0005792c) cntbar_detail_btn_pane

0x9051,	// (0x00057944) cntbar_detail_btn_pane_cp01_ParamLimits

0x9051,	// (0x00057944) cntbar_detail_btn_pane_cp01

0x907b,	// (0x0005796e) cntbar_detail_list_shct_pane_ParamLimits

0x908b,	// (0x0005797e) cntbar_detail_pane_g1_ParamLimits

0x908b,	// (0x0005797e) cntbar_detail_pane_g1

0x909f,	// (0x00057992) cntbar_detail_pane_t1_ParamLimits

0x909f,	// (0x00057992) cntbar_detail_pane_t1

0x912d,	// (0x00057a20) cntbar_detail_list_event_pane_g3_ParamLimits

0x912d,	// (0x00057a20) cntbar_detail_list_event_pane_g3

0x9145,	// (0x00057a38) cntbar_detail_list_event_pane_g4_ParamLimits

0x9145,	// (0x00057a38) cntbar_detail_list_event_pane_g4

0x915d,	// (0x00057a50) cntbar_detail_list_event_pane_g5_ParamLimits

0x915d,	// (0x00057a50) cntbar_detail_list_event_pane_g5

0x9175,	// (0x00057a68) cntbar_detail_list_event_pane_g6_ParamLimits

0x9175,	// (0x00057a68) cntbar_detail_list_event_pane_g6

0x91b9,	// (0x00057aac) cntbar_detail_list_event_pane_t3_ParamLimits

0x91b9,	// (0x00057aac) cntbar_detail_list_event_pane_t3

0x91cb,	// (0x00057abe) popup_notif_wgt_window_ParamLimits

0x91cb,	// (0x00057abe) popup_notif_wgt_window

0x91e4,	// (0x00057ad7) popup_submenu_window_cp01_ParamLimits

0x91e4,	// (0x00057ad7) popup_submenu_window_cp01

0xa3dc,	// (0x00058ccf) bg_popup_window_pane_cp10

0xecdf,	// (0x0005d5d2) listscroll_notif_wgt_pane

0xecf1,	// (0x0005d5e4) list_notif_wgt_window

0xecfa,	// (0x0005d5ed) scroll_pane_cp033

0x91f8,	// (0x00057aeb) list_notif_wgt_row_pane_ParamLimits

0x91f8,	// (0x00057aeb) list_notif_wgt_row_pane

0xed03,	// (0x0005d5f6) aid_size_list_notif_wgt_del

0xed10,	// (0x0005d603) list_notif_wgt_row_pane_g1

0xed1c,	// (0x0005d60f) list_notif_wgt_row_pane_g2

0xed30,	// (0x0005d623) list_notif_wgt_row_pane_g3

0x0002,

0xfeb5,	// (0x0005e7a8) list_notif_wgt_row_pane_g

0xed3d,	// (0x0005d630) list_notif_wgt_row_pane_t1

0xed53,	// (0x0005d646) list_notif_wgt_row_pane_t2

0xed65,	// (0x0005d658) list_notif_wgt_row_pane_t3

0x0002,

0xfebc,	// (0x0005e7af) list_notif_wgt_row_pane_t

0xd85f,	// (0x0005c152) list_recal_day_event_pane_g1

0xed77,	// (0x0005d66a) list_recal_day_event_pane_t1

0x99f4,	// (0x000582e7) bg_button_pane_cp045

0xed86,	// (0x0005d679) cntbar_detail_btn_pane_t1

0xc7a7,	// (0x0005b09a) main_callh_pane_ParamLimits

0xc7a7,	// (0x0005b09a) main_callh_pane

0x99f4,	// (0x000582e7) main_coverflow0_pane

0x99f4,	// (0x000582e7) main_wgtman_pane

0x83ab,	// (0x00056c9e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x83ab,	// (0x00056c9e) main_fs_bigclock_unlock_btn_pane

0x88ff,	// (0x000571f2) bg_button_pane_cp16

0x890f,	// (0x00057202) cell_tport_appsw_pane_g3

0x9208,	// (0x00057afb) cf0_flow_pane_ParamLimits

0x9208,	// (0x00057afb) cf0_flow_pane

0xed94,	// (0x0005d687) listscroll_cf0_pane

0xed9f,	// (0x0005d692) main_cf0_pane_g1

0x921d,	// (0x00057b10) main_cf0_pane_t1_ParamLimits

0x921d,	// (0x00057b10) main_cf0_pane_t1

0x9234,	// (0x00057b27) main_cf0_pane_t2_ParamLimits

0x9234,	// (0x00057b27) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0005e7bb) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0005e7bb) main_cf0_pane_t

0xedb1,	// (0x0005d6a4) scroll_pane_cp11

0x924b,	// (0x00057b3e) cf0_flow_pane_g1

0x9257,	// (0x00057b4a) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0005e7c0) cf0_flow_pane_g

0x9263,	// (0x00057b56) cf0_flow_pane_t1

0x99f4,	// (0x000582e7) main_call6_pane

0x99f4,	// (0x000582e7) main_calllock_pane

0x9275,	// (0x00057b68) call6_btn_grp_pane_ParamLimits

0x9275,	// (0x00057b68) call6_btn_grp_pane

0x928f,	// (0x00057b82) call6_pane_g1_ParamLimits

0x928f,	// (0x00057b82) call6_pane_g1

0x92a5,	// (0x00057b98) popup_call6_1st_window_ParamLimits

0x92a5,	// (0x00057b98) popup_call6_1st_window

0x92b6,	// (0x00057ba9) popup_call6_2nd_window_ParamLimits

0x92b6,	// (0x00057ba9) popup_call6_2nd_window

0x92c7,	// (0x00057bba) cell_call6_btn_pane_ParamLimits

0x92c7,	// (0x00057bba) cell_call6_btn_pane

0xa3dc,	// (0x00058ccf) bg_popup_call2_in_pane_cp03

0xedbc,	// (0x0005d6af) popup_call6_1st_window_g1

0xedc4,	// (0x0005d6b7) popup_call6_1st_window_g2

0xedcc,	// (0x0005d6bf) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0005e7c5) popup_call6_1st_window_g

0xedd4,	// (0x0005d6c7) popup_call6_1st_window_t1

0xede3,	// (0x0005d6d6) popup_call6_1st_window_t2

0xedf3,	// (0x0005d6e6) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0005e7cc) popup_call6_1st_window_t

0xa3dc,	// (0x00058ccf) bg_popup_call2_in_pane_cp04

0xedbc,	// (0x0005d6af) popup_call6_2nd_window_g1

0xedc4,	// (0x0005d6b7) popup_call6_2nd_window_g2

0xedcc,	// (0x0005d6bf) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0005e7c5) popup_call6_2nd_window_g

0xedd4,	// (0x0005d6c7) popup_call6_2nd_window_t1

0x99f4,	// (0x000582e7) bg_button_pane_cp15

0xee03,	// (0x0005d6f6) cell_call6_btn_pane_g1

0xee0c,	// (0x0005d6ff) cell_call6_btn_pane_t1

0x92db,	// (0x00057bce) listscroll_wgtman_pane_ParamLimits

0x92db,	// (0x00057bce) listscroll_wgtman_pane

0x92fc,	// (0x00057bef) wgtman_btn_pane_ParamLimits

0x92fc,	// (0x00057bef) wgtman_btn_pane

0xb23e,	// (0x00059b31) aid_scroll_copy1

0xee1b,	// (0x0005d70e) list_wgtman_pane

0x933f,	// (0x00057c32) wgtman_btn_pane_g1_ParamLimits

0x933f,	// (0x00057c32) wgtman_btn_pane_g1

0x936b,	// (0x00057c5e) wgtman_btn_pane_t1_ParamLimits

0x936b,	// (0x00057c5e) wgtman_btn_pane_t1

0xee25,	// (0x0005d718) wgtman_btn_pane_t2_ParamLimits

0xee25,	// (0x0005d718) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0005e7d3) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0005e7d3) wgtman_btn_pane_t

0xabe8,	// (0x000594db) listrow_wgtman_pane_ParamLimits

0xabe8,	// (0x000594db) listrow_wgtman_pane

0x93a8,	// (0x00057c9b) listrow_wgtman_pane_g1

0x93b5,	// (0x00057ca8) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0005e7d8) listrow_wgtman_pane_g

0x091e,	// (0x0004f211) listrow_wgtman_pane_t1

0x0936,	// (0x0004f229) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0005e7dd) listrow_wgtman_pane_t

0x095c,	// (0x0004f24f) wait_bar_pane_cp09

0xee3c,	// (0x0005d72f) main_calllock_btn_pane

0xee46,	// (0x0005d739) main_calllock_pane_g1

0x99f4,	// (0x000582e7) bg_button_pane_cp17

0xee52,	// (0x0005d745) main_calllock_btn_pane_g1

0xee5b,	// (0x0005d74e) main_calllock_btn_pane_t1

0x99f4,	// (0x000582e7) main_dialer3_pane

0x99f4,	// (0x000582e7) main_fmrd2_pane

0xcbf8,	// (0x0005b4eb) main_fs_bigclock_unlock_btn_pane_g1

0xee72,	// (0x0005d765) main_fs_bigclock_unlock_btn_pane_t1

0x93d3,	// (0x00057cc6) area_fmrd2_info_pane_ParamLimits

0x93d3,	// (0x00057cc6) area_fmrd2_info_pane

0x93e2,	// (0x00057cd5) area_fmrd2_visual_pane_ParamLimits

0x93e2,	// (0x00057cd5) area_fmrd2_visual_pane

0x93f0,	// (0x00057ce3) fmrd2_indi_pane_ParamLimits

0x93f0,	// (0x00057ce3) fmrd2_indi_pane

0x93fd,	// (0x00057cf0) area_fmrd2_visual_pane_g1

0x9405,	// (0x00057cf8) area_fmrd2_visual_pane_t1

0x9415,	// (0x00057d08) area_fmrd2_visual_pane_t2

0x9425,	// (0x00057d18) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0005e7e7) area_fmrd2_visual_pane_t

0x9435,	// (0x00057d28) area_fmrd2_info_pane_g1

0x943d,	// (0x00057d30) area_fmrd2_info_pane_t1

0x944d,	// (0x00057d40) area_fmrd2_info_pane_t2

0x945d,	// (0x00057d50) area_fmrd2_info_pane_t3

0x946d,	// (0x00057d60) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0005e7ee) area_fmrd2_info_pane_t

0x947d,	// (0x00057d70) fmrd2_indi_pane_t1

0x948d,	// (0x00057d80) fmrd2_indi_pane_t2

0x949d,	// (0x00057d90) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0005e7f7) fmrd2_indi_pane_t

0xe3f8,	// (0x0005cceb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f8,	// (0x0005cceb) list_single_fs_bigclock_indicator_pane_g5

0xe4a8,	// (0x0005cd9b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a8,	// (0x0005cd9b) list_single_fs_bigclock_indicator_pane_t5

0x8b43,	// (0x00057436) aid_cell_bcale_month_pane_ParamLimits

0x8b43,	// (0x00057436) aid_cell_bcale_month_pane

0x8b6a,	// (0x0005745d) bcale_month_pane_ParamLimits

0x8b6a,	// (0x0005745d) bcale_month_pane

0x8b8c,	// (0x0005747f) bcale_preview_pane_ParamLimits

0x8b8c,	// (0x0005747f) bcale_preview_pane

0xec09,	// (0x0005d4fc) list_single_fs_bigclock_pane_t1_ParamLimits

0xec28,	// (0x0005d51b) list_single_fs_bigclock_pane_t2_ParamLimits

0xec28,	// (0x0005d51b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe86,	// (0x0005e779) list_single_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0005e779) list_single_fs_bigclock_pane_t

0xee6a,	// (0x0005d75d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0005e7e2) main_fs_bigclock_unlock_btn_pane_g

0x94ad,	// (0x00057da0) aid_dia3_key_size_ParamLimits

0x94ad,	// (0x00057da0) aid_dia3_key_size

0x94bc,	// (0x00057daf) aid_dia3_listrow_size_ParamLimits

0x94bc,	// (0x00057daf) aid_dia3_listrow_size

0x94d1,	// (0x00057dc4) dia3_keypad_fun_pane_ParamLimits

0x94d1,	// (0x00057dc4) dia3_keypad_fun_pane

0x94ed,	// (0x00057de0) dia3_keypad_num_pane_ParamLimits

0x94ed,	// (0x00057de0) dia3_keypad_num_pane

0x9506,	// (0x00057df9) dia3_listscroll_pane_ParamLimits

0x9506,	// (0x00057df9) dia3_listscroll_pane

0x9519,	// (0x00057e0c) dia3_numentry_pane_ParamLimits

0x9519,	// (0x00057e0c) dia3_numentry_pane

0xee80,	// (0x0005d773) dia3_list_pane

0xee8b,	// (0x0005d77e) scroll_pane_cp12

0x99f4,	// (0x000582e7) bg_dia3_numentry_pane

0x952d,	// (0x00057e20) dia3_numentry_pane_t1

0x953c,	// (0x00057e2f) cell_dia3_key_num_pane

0x9544,	// (0x00057e37) cell_dia3_key0_fun_pane_ParamLimits

0x9544,	// (0x00057e37) cell_dia3_key0_fun_pane

0x9558,	// (0x00057e4b) cell_dia3_key1_fun_pane_ParamLimits

0x9558,	// (0x00057e4b) cell_dia3_key1_fun_pane

0x9570,	// (0x00057e63) dia3_listrow_pane

0xe0f6,	// (0x0005c9e9) bg_dia3_numentry_pane_g1

0x99f4,	// (0x000582e7) bg_button_pane_cp21

0xee96,	// (0x0005d789) cell_dia3_key_num_pane_t1

0xeea4,	// (0x0005d797) cell_dia3_key_num_pane_t2

0xeeb3,	// (0x0005d7a6) cell_dia3_key_num_pane_t3

0xeec2,	// (0x0005d7b5) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0005e7fe) cell_dia3_key_num_pane_t

0x99f4,	// (0x000582e7) bg_button_pane_cp19

0x9582,	// (0x00057e75) cell_dia3_key0_fun_pane_g1

0x99f4,	// (0x000582e7) bg_button_pane_cp20

0x958a,	// (0x00057e7d) cell_dia3_key1_fun_pane_g1

0x9592,	// (0x00057e85) area_left_week_number_pane

0x95a0,	// (0x00057e93) area_top_day_name_pane

0x95b3,	// (0x00057ea6) frame_month_view_pane

0xeed1,	// (0x0005d7c4) grid_month_view_pane

0x95c8,	// (0x00057ebb) cell_top_day_name_pane_ParamLimits

0x95c8,	// (0x00057ebb) cell_top_day_name_pane

0x95f7,	// (0x00057eea) cell_area_left_week_number_pane_ParamLimits

0x95f7,	// (0x00057eea) cell_area_left_week_number_pane

0x960b,	// (0x00057efe) cell_month_view_pane_ParamLimits

0x960b,	// (0x00057efe) cell_month_view_pane

0xeedf,	// (0x0005d7d2) frm_month_g1

0x963a,	// (0x00057f2d) frm_month_g2

0x964d,	// (0x00057f40) frm_month_g3

0x9660,	// (0x00057f53) frm_month_g4

0x9673,	// (0x00057f66) frm_month_g5

0x9686,	// (0x00057f79) frm_month_g6

0x9699,	// (0x00057f8c) frm_month_g7

0xeeec,	// (0x0005d7df) frm_month_g8

0x96ae,	// (0x00057fa1) frm_month_g9

0x96be,	// (0x00057fb1) frm_month_g10

0x96ce,	// (0x00057fc1) frm_month_g11

0x96de,	// (0x00057fd1) frm_month_g12

0x96f0,	// (0x00057fe3) frm_month_g13

0x9704,	// (0x00057ff7) frm_month_g14

0x9718,	// (0x0005800b) frm_month_g15

0x972c,	// (0x0005801f) frm_month_g16

0x000f,

0xff14,	// (0x0005e807) frm_month_g

0xeef9,	// (0x0005d7ec) cell_top_day_name_pane_t1

0x9740,	// (0x00058033) cell_area_left_week_number_pane_g1

0x974c,	// (0x0005803f) cell_area_left_week_number_pane_t1

0xce28,	// (0x0005b71b) cell_month_view_pane_g1

0x975f,	// (0x00058052) cell_month_view_pane_t1

0x99f4,	// (0x000582e7) main_fps_pane

0xe6ac,	// (0x0005cf9f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ac,	// (0x0005cf9f) cmail_ddmenu_btn02_pane_cp1

0xe6c8,	// (0x0005cfbb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c8,	// (0x0005cfbb) cmail_ddmenu_btn02_pane_cp2

0x8e9b,	// (0x0005778e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e9b,	// (0x0005778e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe39,	// (0x0005e72c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe39,	// (0x0005e72c) cmail_ddmenu_btn02_pane_g

0x8ebc,	// (0x000577af) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ebc,	// (0x000577af) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3e,	// (0x0005e731) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3e,	// (0x0005e731) cmail_ddmenu_btn02_pane_t

0x9772,	// (0x00058065) fps_text_pane_ParamLimits

0x9772,	// (0x00058065) fps_text_pane

0x9789,	// (0x0005807c) main_fps_pane_g1_ParamLimits

0x9789,	// (0x0005807c) main_fps_pane_g1

0x97a1,	// (0x00058094) wait_bar_pane_cp010_ParamLimits

0x97a1,	// (0x00058094) wait_bar_pane_cp010

0x97b4,	// (0x000580a7) fps_text_pane_t1_ParamLimits

0x97b4,	// (0x000580a7) fps_text_pane_t1

0xe5f8,	// (0x0005ceeb) cam4_image_uncrop_pane_g1

0xe601,	// (0x0005cef4) cam4_image_uncrop_pane_g2

0x66e3,	// (0x00054fd6) cam4_image_uncrop_pane_g3

0x66ec,	// (0x00054fdf) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0005e1e8) cam4_image_uncrop_pane_g

0x9570,	// (0x00057e63) dia3_listrow_pane_ParamLimits

0x99f4,	// (0x000582e7) main_phob2_pane

0x88ce,	// (0x000571c1) cell_tport_appsw_pane_cp02_ParamLimits

0x88ce,	// (0x000571c1) cell_tport_appsw_pane_cp02

0x88e2,	// (0x000571d5) cell_tport_appsw_pane_cp03_ParamLimits

0x88e2,	// (0x000571d5) cell_tport_appsw_pane_cp03

0x99f4,	// (0x000582e7) phob2_contact_card_pane

0x99f4,	// (0x000582e7) phob2_listscroll_pane

0xef0c,	// (0x0005d7ff) phob2_list_pane

0xef14,	// (0x0005d807) scroll_pane_cp034

0x97cc,	// (0x000580bf) phob2_cc_data_pane_ParamLimits

0x97cc,	// (0x000580bf) phob2_cc_data_pane

0x97ed,	// (0x000580e0) phob2_cc_listscroll_pane_ParamLimits

0x97ed,	// (0x000580e0) phob2_cc_listscroll_pane

0x980f,	// (0x00058102) list_double_large_graphic_phob2_pane_ParamLimits

0x980f,	// (0x00058102) list_double_large_graphic_phob2_pane

0x9823,	// (0x00058116) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9823,	// (0x00058116) list_double_large_graphic_phob2_pane_g1

0x096e,	// (0x0004f261) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x096e,	// (0x0004f261) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0005e828) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0005e828) list_double_large_graphic_phob2_pane_g

0x097a,	// (0x0004f26d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x097a,	// (0x0004f26d) list_double_large_graphic_phob2_pane_t1

0x098f,	// (0x0004f282) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x098f,	// (0x0004f282) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0005e82d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0005e82d) list_double_large_graphic_phob2_pane_t

0x99f4,	// (0x000582e7) list_highlight_pane_cp024

0x9839,	// (0x0005812c) phob2_cc_button_pane

0x9841,	// (0x00058134) phob2_cc_data_pane_g1_ParamLimits

0x9841,	// (0x00058134) phob2_cc_data_pane_g1

0x9857,	// (0x0005814a) phob2_cc_data_pane_g2_ParamLimits

0x9857,	// (0x0005814a) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0005e832) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0005e832) phob2_cc_data_pane_g

0x9867,	// (0x0005815a) phob2_cc_data_pane_t1_ParamLimits

0x9867,	// (0x0005815a) phob2_cc_data_pane_t1

0x987f,	// (0x00058172) phob2_cc_data_pane_t2_ParamLimits

0x987f,	// (0x00058172) phob2_cc_data_pane_t2

0x9899,	// (0x0005818c) phob2_cc_data_pane_t3_ParamLimits

0x9899,	// (0x0005818c) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0005e837) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0005e837) phob2_cc_data_pane_t

0xef1c,	// (0x0005d80f) phob2_cc_list_pane_ParamLimits

0xef1c,	// (0x0005d80f) phob2_cc_list_pane

0xd908,	// (0x0005c1fb) scroll_pane_cp035_ParamLimits

0xd908,	// (0x0005c1fb) scroll_pane_cp035

0x9a4d,	// (0x00058340) bg_button_pane_cp033

0xef28,	// (0x0005d81b) phob2_cc_button_pane_g1

0xef34,	// (0x0005d827) phob2_cc_button_pane_t1

0xef49,	// (0x0005d83c) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0005e83e) phob2_cc_button_pane_t

0x98b3,	// (0x000581a6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98b3,	// (0x000581a6) list_double_large_graphic_phob2_cc_pane

0x98c7,	// (0x000581ba) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98c7,	// (0x000581ba) list_double_large_graphic_phob2_cc_pane_g1

0x09a1,	// (0x0004f294) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09a1,	// (0x0004f294) list_double_large_graphic_phob2_cc_pane_g2

0x09ad,	// (0x0004f2a0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09ad,	// (0x0004f2a0) list_double_large_graphic_phob2_cc_pane_g3

0x09b9,	// (0x0004f2ac) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09b9,	// (0x0004f2ac) list_double_large_graphic_phob2_cc_pane_g4

0x09c5,	// (0x0004f2b8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x09c5,	// (0x0004f2b8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0005e843) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0005e843) list_double_large_graphic_phob2_cc_pane_g

0x09d1,	// (0x0004f2c4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x09d1,	// (0x0004f2c4) list_double_large_graphic_phob2_cc_pane_t1

0x09fa,	// (0x0004f2ed) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09fa,	// (0x0004f2ed) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0005e84e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0005e84e) list_double_large_graphic_phob2_cc_pane_t

0xef5b,	// (0x0005d84e) list_highlight_pane_cp025_ParamLimits

0xef5b,	// (0x0005d84e) list_highlight_pane_cp025

0x9a4d,	// (0x00058340) bg_button_pane_cp033_ParamLimits

0xef28,	// (0x0005d81b) phob2_cc_button_pane_g1_ParamLimits

0xef34,	// (0x0005d827) phob2_cc_button_pane_t1_ParamLimits

0xef49,	// (0x0005d83c) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0005e83e) phob2_cc_button_pane_t_ParamLimits

0x0c6f,	// (0x0004f562) popup_wgtman_window

0xd730,	// (0x0005c023) scroll_pane_cp038

0x9321,	// (0x00057c14) wgtman_btn_pane_cp_01_ParamLimits

0x9321,	// (0x00057c14) wgtman_btn_pane_cp_01

0xef69,	// (0x0005d85c) wgtman_content_pane

0xef72,	// (0x0005d865) wgtman_heading_pane

0x99f4,	// (0x000582e7) bg_heading_pane_cp02

0xef7b,	// (0x0005d86e) wgtman_heading_pane_g1

0xef83,	// (0x0005d876) wgtman_heading_pane_t1

0xef91,	// (0x0005d884) scroll_pane_cp036

0xef99,	// (0x0005d88c) wgtman_list_pane

0xefa1,	// (0x0005d894) wgtman_list_pane_t1_ParamLimits

0xefa1,	// (0x0005d894) wgtman_list_pane_t1

0xaab3,	// (0x000593a6) cam4_grid_pane

0xff8d,	// (0x0004e880) bg_button_pane_cp015_ParamLimits

0x7367,	// (0x00055c5a) bg_button_pane_cp016_ParamLimits

0x737a,	// (0x00055c6d) bg_button_pane_cp017_ParamLimits

0xffd5,	// (0x0004e8c8) popup_vitu2_query_window_g3_ParamLimits

0xffd5,	// (0x0004e8c8) popup_vitu2_query_window_g3

0x0050,	// (0x0004e943) popup_vitu2_query_window_t6_ParamLimits

0x0050,	// (0x0004e943) popup_vitu2_query_window_t6

0x007b,	// (0x0004e96e) popup_vitu2_query_window_t7_ParamLimits

0x007b,	// (0x0004e96e) popup_vitu2_query_window_t7

0xe5f8,	// (0x0005ceeb) cam4_grid_pane_g1

0xe601,	// (0x0005cef4) cam4_grid_pane_g2

0xefbb,	// (0x0005d8ae) cam4_grid_pane_g3

0xefc4,	// (0x0005d8b7) cam4_grid_pane_g4

0x0003,

0xff60,	// (0x0005e853) cam4_grid_pane_g

0x1daf,	// (0x000506a2) aid_placing_vt_slider_lsc_ParamLimits

0x209c,	// (0x0005098f) vidtel_button_pane_ParamLimits

0x209c,	// (0x0005098f) vidtel_button_pane

0xefcf,	// (0x0005d8c2) bg_button_pane_cp034

0x98d3,	// (0x000581c6) vidtel_button_pane_g1

0xefd9,	// (0x0005d8cc) vidtel_button_pane_t1

0xd84f,	// (0x0005c142) aid_size_vtel_slider_touch

0xd908,	// (0x0005c1fb) scroll_pane_cp039

0xe134,	// (0x0005ca27) ncim_query_button_pane_cp01_ParamLimits

0xe153,	// (0x0005ca46) ncimui_query_pane_g1_ParamLimits

0x9a4d,	// (0x00058340) input_focus_pane_cp012_ParamLimits

0xe178,	// (0x0005ca6b) ncim_query_entry_pane_t1_ParamLimits

0xd908,	// (0x0005c1fb) scroll_pane_cp039_ParamLimits

0x325c,	// (0x00051b4f) navi_pane_bcale_mc_g1

0x3264,	// (0x00051b57) navi_pane_bcale_mc_t1

0xe705,	// (0x0005cff8) main_sp_fs_email_pane_g1

0xe711,	// (0x0005d004) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0005e5df) main_sp_fs_email_pane_g

0xe996,	// (0x0005d289) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x0005d289) list_single_cale_mrui_row_pane_g3

0x08cd,	// (0x0004f1c0) list_single_recal_day_pane_g5_event_pane

0x8f2c,	// (0x0005781f) list_single_recal_day_pane_g7

0xefe7,	// (0x0005d8da) list_recal_day_event_pane_cp01

0xeff0,	// (0x0005d8e3) list_recal_vselct_arw_lo_pane_cp01

0xeff8,	// (0x0005d8eb) list_recal_vselct_arw_up_pane_cp01

0xf000,	// (0x0005d8f3) list_recal_vselct_pane_cp01

0xd85f,	// (0x0005c152) list_recal_day_event_pane_cp01_g1

0xacc9,	// (0x000595bc) list_recal_day_event_pane_cp01_t1

0x8f34,	// (0x00057827) list_single_recal_day_pane_t1_ParamLimits

0xac9e,	// (0x00059591) list_single_recal_day_pane_t2_ParamLimits

0xfe4e,	// (0x0005e741) list_single_recal_day_pane_t_ParamLimits

0xa0c9,	// (0x000589bc) bg_notes_pane_ParamLimits

0xa174,	// (0x00058a67) list_notes_pane_ParamLimits

0x0fbc,	// (0x0004f8af) scroll_pane_cp06_ParamLimits

0xa1b0,	// (0x00058aa3) main_notes_pane_ParamLimits

0x99f4,	// (0x000582e7) main_welc_pane

0x98db,	// (0x000581ce) main_welc_body_pane_ParamLimits

0x98db,	// (0x000581ce) main_welc_body_pane

0x98fa,	// (0x000581ed) main_welc_opti_pane_ParamLimits

0x98fa,	// (0x000581ed) main_welc_opti_pane

0x9943,	// (0x00058236) main_welc_pane_t1_ParamLimits

0x9943,	// (0x00058236) main_welc_pane_t1

0x9965,	// (0x00058258) main_welc_body_row_pane_ParamLimits

0x9965,	// (0x00058258) main_welc_body_row_pane

0x9979,	// (0x0005826c) main_welc_opti_row_pane_ParamLimits

0x9979,	// (0x0005826c) main_welc_opti_row_pane

0xf00a,	// (0x0005d8fd) main_welc_opti_row_pane_g1

0xf012,	// (0x0005d905) main_welc_opti_row_pane_t1

0xf021,	// (0x0005d914) main_welc_body_row_pane_t1

0xece9,	// (0x0005d5dc) popup_notif_wgt_heading_pane

0xed03,	// (0x0005d5f6) aid_size_list_notif_wgt_del_ParamLimits

0xed10,	// (0x0005d603) list_notif_wgt_row_pane_g1_ParamLimits

0xed1c,	// (0x0005d60f) list_notif_wgt_row_pane_g2_ParamLimits

0xed30,	// (0x0005d623) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb5,	// (0x0005e7a8) list_notif_wgt_row_pane_g_ParamLimits

0xed3d,	// (0x0005d630) list_notif_wgt_row_pane_t1_ParamLimits

0xed53,	// (0x0005d646) list_notif_wgt_row_pane_t2_ParamLimits

0xed65,	// (0x0005d658) list_notif_wgt_row_pane_t3_ParamLimits

0xfebc,	// (0x0005e7af) list_notif_wgt_row_pane_t_ParamLimits

0x93a8,	// (0x00057c9b) listrow_wgtman_pane_g1_ParamLimits

0x93b5,	// (0x00057ca8) listrow_wgtman_pane_g2_ParamLimits

0xfee5,	// (0x0005e7d8) listrow_wgtman_pane_g_ParamLimits

0x091e,	// (0x0004f211) listrow_wgtman_pane_t1_ParamLimits

0x0936,	// (0x0004f229) listrow_wgtman_pane_t2_ParamLimits

0xfeea,	// (0x0005e7dd) listrow_wgtman_pane_t_ParamLimits

0x095c,	// (0x0004f24f) wait_bar_pane_cp09_ParamLimits

0x99f4,	// (0x000582e7) bg_popup_heading_pane_cp02

0xf030,	// (0x0005d923) popup_notif_wgt_heading_pane_g1

0xf038,	// (0x0005d92b) popup_notif_wgt_heading_pane_t1

0x99f4,	// (0x000582e7) main_vids_pane

0x99f4,	// (0x000582e7) vids_listscroll_pane

0x9989,	// (0x0005827c) scroll_pane_cp040

0x99f4,	// (0x000582e7) vids_list_pane

0x9994,	// (0x00058287) vids_list_double_pane_ParamLimits

0x9994,	// (0x00058287) vids_list_double_pane

0x99a5,	// (0x00058298) vids_list_double_pane_g1

0x99ae,	// (0x000582a1) vids_list_double_pane_t1

0x99be,	// (0x000582b1) vids_list_double_pane_t2

0x0001,

0xff6e,	// (0x0005e861) vids_list_double_pane_t

0x9a4d,	// (0x00058340) main_ncimui_pane_ParamLimits

0x7f04,	// (0x000567f7) main_ncimui_pane_g1_ParamLimits

0x7f10,	// (0x00056803) main_ncimui_pane_g2_ParamLimits

0x7f10,	// (0x00056803) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0005e4e4) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0005e4e4) main_ncimui_pane_g

0x9919,	// (0x0005820c) main_welc_pane_g1_ParamLimits

0x9919,	// (0x0005820c) main_welc_pane_g1

0x992e,	// (0x00058221) main_welc_pane_g2_ParamLimits

0x992e,	// (0x00058221) main_welc_pane_g2

0x0001,

0xff69,	// (0x0005e85c) main_welc_pane_g_ParamLimits

0xff69,	// (0x0005e85c) main_welc_pane_g

0xa0c9,	// (0x000589bc) listscroll_mce_pane_ParamLimits

0x333c,	// (0x00051c2f) wait_bar_pane_cp10

0xc79b,	// (0x0005b08e) main_cale_day_pane_ParamLimits

0xc79b,	// (0x0005b08e) main_cale_week_pane_ParamLimits

0xa0c9,	// (0x000589bc) main_messa_pane_ParamLimits

0x59a1,	// (0x00054294) main_clock2_btn_pane_ParamLimits

0x59a1,	// (0x00054294) main_clock2_btn_pane

0xcfb0,	// (0x0005b8a3) main_clock2_btn_pane_cp01_ParamLimits

0xcfb0,	// (0x0005b8a3) main_clock2_btn_pane_cp01

0xe967,	// (0x0005d25a) list_cale_mrui_pane_ParamLimits

0xeda9,	// (0x0005d69c) main_cf0_pane_g2

0x0001,

0xfec3,	// (0x0005e7b6) main_cf0_pane_g

0x9592,	// (0x00057e85) area_left_week_number_pane_ParamLimits

0x95a0,	// (0x00057e93) area_top_day_name_pane_ParamLimits

0x95b3,	// (0x00057ea6) frame_month_view_pane_ParamLimits

0xeed1,	// (0x0005d7c4) grid_month_view_pane_ParamLimits

0xeedf,	// (0x0005d7d2) frm_month_g1_ParamLimits

0x963a,	// (0x00057f2d) frm_month_g2_ParamLimits

0x964d,	// (0x00057f40) frm_month_g3_ParamLimits

0x9660,	// (0x00057f53) frm_month_g4_ParamLimits

0x9673,	// (0x00057f66) frm_month_g5_ParamLimits

0x9686,	// (0x00057f79) frm_month_g6_ParamLimits

0x9699,	// (0x00057f8c) frm_month_g7_ParamLimits

0xeeec,	// (0x0005d7df) frm_month_g8_ParamLimits

0x96ae,	// (0x00057fa1) frm_month_g9_ParamLimits

0x96be,	// (0x00057fb1) frm_month_g10_ParamLimits

0x96ce,	// (0x00057fc1) frm_month_g11_ParamLimits

0x96de,	// (0x00057fd1) frm_month_g12_ParamLimits

0x96f0,	// (0x00057fe3) frm_month_g13_ParamLimits

0x9704,	// (0x00057ff7) frm_month_g14_ParamLimits

0x9718,	// (0x0005800b) frm_month_g15_ParamLimits

0x972c,	// (0x0005801f) frm_month_g16_ParamLimits

0xff14,	// (0x0005e807) frm_month_g_ParamLimits

0xeef9,	// (0x0005d7ec) cell_top_day_name_pane_t1_ParamLimits

0x9740,	// (0x00058033) cell_area_left_week_number_pane_g1_ParamLimits

0x974c,	// (0x0005803f) cell_area_left_week_number_pane_t1_ParamLimits

0xce28,	// (0x0005b71b) cell_month_view_pane_g1_ParamLimits

0x975f,	// (0x00058052) cell_month_view_pane_t1_ParamLimits

0xa0c1,	// (0x000589b4) main_clock2_btn_pane_g1

0xf046,	// (0x0005d939) main_clock2_btn_pane_t1

0x9a4d,	// (0x00058340) listscroll_cmail_pane_ParamLimits

0xe705,	// (0x0005cff8) main_sp_fs_email_pane_g1_ParamLimits

0xe711,	// (0x0005d004) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0005e5df) main_sp_fs_email_pane_g_ParamLimits

0xea73,	// (0x0005d366) list_recal_day_pane_ParamLimits

0xea84,	// (0x0005d377) mian_recal_day_pane_t1

0x04f7,	// (0x0004edea) list_single_dyc_row_text_pane_t4_ParamLimits

0x04f7,	// (0x0004edea) list_single_dyc_row_text_pane_t4

0x0540,	// (0x0004ee33) list_single_dyc_row_text_pane_t5_ParamLimits

0x0540,	// (0x0004ee33) list_single_dyc_row_text_pane_t5

0x87b1,	// (0x000570a4) list_single_dyc_row_text_pane_t6_ParamLimits

0x87b1,	// (0x000570a4) list_single_dyc_row_text_pane_t6

0xae32,	// (0x00059725) aid_mgn_list_cale_time_pane

0x9a4d,	// (0x00058340) main_gallery2_pane_ParamLimits

0xcfc4,	// (0x0005b8b7) main_clock2_pane_cp01_t1

0xcfd4,	// (0x0005b8c7) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0005e0be) main_clock2_pane_cp01_t

0x142d,	// (0x0004fd20) cale_week_scroll_pane_g16_ParamLimits

0x142d,	// (0x0004fd20) cale_week_scroll_pane_g16

0xa3dc,	// (0x00058ccf) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
