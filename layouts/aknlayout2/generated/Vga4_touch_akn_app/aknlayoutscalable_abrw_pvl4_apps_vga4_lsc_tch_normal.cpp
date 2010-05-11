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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002f0b0 };

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
0x0e66,	// (0x0002ff16) Screen

0x0e72,	// (0x0002ff22) application_window

0x0eae,	// (0x0002ff5e) area_bottom_pane_ParamLimits

0x0eae,	// (0x0002ff5e) area_bottom_pane

0x0ee7,	// (0x0002ff97) area_top_pane_ParamLimits

0x0ee7,	// (0x0002ff97) area_top_pane

0x9c46,	// (0x00038cf6) call_video_uplink_pane_ParamLimits

0x9c46,	// (0x00038cf6) call_video_uplink_pane

0x0f75,	// (0x00030025) main_pane_ParamLimits

0x0f75,	// (0x00030025) main_pane

0xc35b,	// (0x0003b40b) context_pane

0x494c,	// (0x000339fc) navi_pane

0x497c,	// (0x00033a2c) popup_cale_events_window_ParamLimits

0x497c,	// (0x00033a2c) popup_cale_events_window

0xc36e,	// (0x0003b41e) popup_mup_playback_window

0x4994,	// (0x00033a44) signal_pane

0xa3a5,	// (0x00039455) main_browser_pane

0xa55b,	// (0x0003960b) main_burst_pane

0x464e,	// (0x000336fe) main_calc_pane

0xc2fe,	// (0x0003b3ae) main_cale_day_pane

0x1529,	// (0x000305d9) main_cale_month_pane

0xc2fe,	// (0x0003b3ae) main_cale_week_pane

0xa55b,	// (0x0003960b) main_call_pane

0xa085,	// (0x00039135) main_call_poc_pane

0xa55b,	// (0x0003960b) main_camera_pane

0xa55b,	// (0x0003960b) main_chi_dic_pane

0xad27,	// (0x00039dd7) main_clock_pane

0xa085,	// (0x00039135) main_fmradio_pane

0xa55b,	// (0x0003960b) main_graph_messa_pane

0xa085,	// (0x00039135) main_help_pane

0xa3a5,	// (0x00039455) main_im_pane

0xa2e0,	// (0x00039390) main_image_pane_ParamLimits

0xa2e0,	// (0x00039390) main_image_pane

0xa085,	// (0x00039135) main_location2_pane

0xa55b,	// (0x0003960b) main_location_pane

0xa2e0,	// (0x00039390) main_messa_pane

0xa085,	// (0x00039135) main_mp2_pane

0xa55b,	// (0x0003960b) main_mp_pane

0xa085,	// (0x00039135) main_msg_pane

0xa085,	// (0x00039135) main_mup_eq_pane

0xa085,	// (0x00039135) main_mup_pane

0xa3a5,	// (0x00039455) main_notes_pane

0xa085,	// (0x00039135) main_pec_pane

0xa085,	// (0x00039135) main_phob_pane

0xa085,	// (0x00039135) main_pinb_pane

0xa085,	// (0x00039135) main_postcard_pane

0xa085,	// (0x00039135) main_qdial_pane

0xa55b,	// (0x0003960b) main_skin_pane

0xa085,	// (0x00039135) main_smil2_pane

0xa55b,	// (0x0003960b) main_smil_pane

0xa55b,	// (0x0003960b) main_video_pane

0xa55b,	// (0x0003960b) main_video_tele_pane

0xa2e0,	// (0x00039390) main_viewer_pane_ParamLimits

0xa2e0,	// (0x00039390) main_viewer_pane

0xa55b,	// (0x0003960b) main_vorec_pane

0x46a4,	// (0x00033754) popup_blid_sat_info_window_ParamLimits

0x46a4,	// (0x00033754) popup_blid_sat_info_window

0x4708,	// (0x000337b8) popup_dyc_status_message_window_ParamLimits

0x4708,	// (0x000337b8) popup_dyc_status_message_window

0x4722,	// (0x000337d2) popup_grid_large_graphic_window_ParamLimits

0x4722,	// (0x000337d2) popup_grid_large_graphic_window

0x47e4,	// (0x00033894) popup_loc_request_window_ParamLimits

0x47e4,	// (0x00033894) popup_loc_request_window

0x4920,	// (0x000339d0) popup_wml_address_window_ParamLimits

0x4920,	// (0x000339d0) popup_wml_address_window

0x448c,	// (0x0003353c) call_muted_g1

0x4120,	// (0x000331d0) popup_call_audio_conf_window_ParamLimits

0x4120,	// (0x000331d0) popup_call_audio_conf_window

0x449c,	// (0x0003354c) popup_call_audio_first_window_ParamLimits

0x449c,	// (0x0003354c) popup_call_audio_first_window

0x4512,	// (0x000335c2) popup_call_audio_in_window_ParamLimits

0x4512,	// (0x000335c2) popup_call_audio_in_window

0x454e,	// (0x000335fe) popup_call_audio_out_window_ParamLimits

0x454e,	// (0x000335fe) popup_call_audio_out_window

0x4588,	// (0x00033638) popup_call_audio_second_window_ParamLimits

0x4588,	// (0x00033638) popup_call_audio_second_window

0x45de,	// (0x0003368e) popup_call_audio_wait_window_ParamLimits

0x45de,	// (0x0003368e) popup_call_audio_wait_window

0x4613,	// (0x000336c3) popup_number_entry_window_ParamLimits

0x4613,	// (0x000336c3) popup_number_entry_window

0x9c72,	// (0x00038d22) bg_popup_call_pane_cp05_ParamLimits

0x9c72,	// (0x00038d22) bg_popup_call_pane_cp05

0x9c92,	// (0x00038d42) popup_number_entry_window_t1

0x9ca5,	// (0x00038d55) popup_number_entry_window_t2

0x9cb7,	// (0x00038d67) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003e17a) popup_number_entry_window_t

0x9cc9,	// (0x00038d79) text_title_cp2

0x9cdc,	// (0x00038d8c) bg_popup_call_pane_cp_ParamLimits

0x9cdc,	// (0x00038d8c) bg_popup_call_pane_cp

0x9cea,	// (0x00038d9a) call_thumbnail_pane

0x9cf2,	// (0x00038da2) popup_call_audio_in_window_g1_ParamLimits

0x9cf2,	// (0x00038da2) popup_call_audio_in_window_g1

0x9cfe,	// (0x00038dae) popup_call_audio_in_window_g2_ParamLimits

0x9cfe,	// (0x00038dae) popup_call_audio_in_window_g2

0x9d0a,	// (0x00038dba) popup_call_audio_in_window_g3_ParamLimits

0x9d0a,	// (0x00038dba) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003e183) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003e183) popup_call_audio_in_window_g

0x9d16,	// (0x00038dc6) popup_call_audio_in_window_t1_ParamLimits

0x9d16,	// (0x00038dc6) popup_call_audio_in_window_t1

0x9d32,	// (0x00038de2) popup_call_audio_in_window_t2_ParamLimits

0x9d32,	// (0x00038de2) popup_call_audio_in_window_t2

0x9d4e,	// (0x00038dfe) popup_call_audio_in_window_t3_ParamLimits

0x9d4e,	// (0x00038dfe) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003e18a) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003e18a) popup_call_audio_in_window_t

0x9cdc,	// (0x00038d8c) bg_popup_call_pane_cp01_ParamLimits

0x9cdc,	// (0x00038d8c) bg_popup_call_pane_cp01

0x9cea,	// (0x00038d9a) call_thumbnail_pane_cp02

0x9d61,	// (0x00038e11) call_type_pane_cp022

0x9d69,	// (0x00038e19) popup_call_audio_out_window_g1_ParamLimits

0x9d69,	// (0x00038e19) popup_call_audio_out_window_g1

0x9d7b,	// (0x00038e2b) popup_call_audio_out_window_g2_ParamLimits

0x9d7b,	// (0x00038e2b) popup_call_audio_out_window_g2

0x9d87,	// (0x00038e37) popup_call_audio_out_window_g3_ParamLimits

0x9d87,	// (0x00038e37) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003e191) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003e191) popup_call_audio_out_window_g

0x9d99,	// (0x00038e49) popup_call_audio_out_window_t1_ParamLimits

0x9d99,	// (0x00038e49) popup_call_audio_out_window_t1

0x9db1,	// (0x00038e61) popup_call_audio_out_window_t2_ParamLimits

0x9db1,	// (0x00038e61) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003e198) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003e198) popup_call_audio_out_window_t

0x9dc6,	// (0x00038e76) bg_popup_call_pane_ParamLimits

0x9dc6,	// (0x00038e76) bg_popup_call_pane

0x1134,	// (0x000301e4) call_thumbnail_pane_cp_ParamLimits

0x1134,	// (0x000301e4) call_thumbnail_pane_cp

0x9e4a,	// (0x00038efa) call_type_pane_cp01_ParamLimits

0x9e4a,	// (0x00038efa) call_type_pane_cp01

0x9e8e,	// (0x00038f3e) popup_call_audio_first_window_g1_ParamLimits

0x9e8e,	// (0x00038f3e) popup_call_audio_first_window_g1

0x9eda,	// (0x00038f8a) popup_call_audio_first_window_g2_ParamLimits

0x9eda,	// (0x00038f8a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003e19d) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003e19d) popup_call_audio_first_window_g

0x9f1e,	// (0x00038fce) popup_call_audio_first_window_t1_ParamLimits

0x9f1e,	// (0x00038fce) popup_call_audio_first_window_t1

0x9fca,	// (0x0003907a) popup_call_audio_first_window_t4_ParamLimits

0x9fca,	// (0x0003907a) popup_call_audio_first_window_t4

0xa056,	// (0x00039106) popup_call_audio_first_window_t5_ParamLimits

0xa056,	// (0x00039106) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003e1a2) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003e1a2) popup_call_audio_first_window_t

0xa085,	// (0x00039135) bg_popup_call_pane_cp02

0xa08f,	// (0x0003913f) call_type_pane_cp023

0xa097,	// (0x00039147) popup_call_audio_wait_window_g1

0xa09f,	// (0x0003914f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003e1a9) popup_call_audio_wait_window_g

0xa0a7,	// (0x00039157) popup_call_audio_wait_window_t3

0xa0b5,	// (0x00039165) bg_popup_call_pane_cp03_ParamLimits

0xa0b5,	// (0x00039165) bg_popup_call_pane_cp03

0xa115,	// (0x000391c5) call_thumbnail_pane_cp011_ParamLimits

0xa115,	// (0x000391c5) call_thumbnail_pane_cp011

0xa121,	// (0x000391d1) call_type_pane_cp034_ParamLimits

0xa121,	// (0x000391d1) call_type_pane_cp034

0xa15d,	// (0x0003920d) popup_call_audio_second_window_g1_ParamLimits

0xa15d,	// (0x0003920d) popup_call_audio_second_window_g1

0xa199,	// (0x00039249) popup_call_audio_second_window_g2_ParamLimits

0xa199,	// (0x00039249) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003e1ae) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003e1ae) popup_call_audio_second_window_g

0xa1d5,	// (0x00039285) popup_call_audio_second_window_t1_ParamLimits

0xa1d5,	// (0x00039285) popup_call_audio_second_window_t1

0xa256,	// (0x00039306) popup_call_audio_second_window_t2_ParamLimits

0xa256,	// (0x00039306) popup_call_audio_second_window_t2

0xa28c,	// (0x0003933c) popup_call_audio_second_window_t3_ParamLimits

0xa28c,	// (0x0003933c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003e1b3) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003e1b3) popup_call_audio_second_window_t

0xa085,	// (0x00039135) bg_popup_call_pane_cp04

0xa2c2,	// (0x00039372) list_conf_pane

0xa2ca,	// (0x0003937a) popup_call_audio_conf_window_t1

0xa2d8,	// (0x00039388) call_thumbnail_pane_g1

0xa2e0,	// (0x00039390) bg_pinb_pane_ParamLimits

0xa2e0,	// (0x00039390) bg_pinb_pane

0xa2ee,	// (0x0003939e) find_pinb_pane

0xa2f7,	// (0x000393a7) listscroll_pinb_pane_ParamLimits

0xa2f7,	// (0x000393a7) listscroll_pinb_pane

0xa306,	// (0x000393b6) pinb_bg_pane_g1

0x1158,	// (0x00030208) pinb_bg_pane_g2

0x1164,	// (0x00030214) pinb_bg_pane_g3

0x1170,	// (0x00030220) pinb_bg_pane_g4

0x117c,	// (0x0003022c) pinb_bg_pane_g5

0x1188,	// (0x00030238) pinb_bg_pane_g6

0x1193,	// (0x00030243) pinb_bg_pane_g7

0x119e,	// (0x0003024e) pinb_bg_pane_g8

0x11a9,	// (0x00030259) pinb_bg_pane_g9

0x11b3,	// (0x00030263) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003e1ba) pinb_bg_pane_g

0x11d0,	// (0x00030280) grid_pinb_pane

0x11db,	// (0x0003028b) list_pinb_pane

0x11e6,	// (0x00030296) scroll_pane_cp01_ParamLimits

0x11e6,	// (0x00030296) scroll_pane_cp01

0xa310,	// (0x000393c0) find_pinb_pane_g1_ParamLimits

0xa310,	// (0x000393c0) find_pinb_pane_g1

0xa328,	// (0x000393d8) find_pinb_pane_t1

0xa33a,	// (0x000393ea) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003e1d4) find_pinb_pane_t

0xa34f,	// (0x000393ff) input_focus_pane_cp01_ParamLimits

0xa34f,	// (0x000393ff) input_focus_pane_cp01

0x11f8,	// (0x000302a8) cell_pinb_pane_ParamLimits

0x11f8,	// (0x000302a8) cell_pinb_pane

0x121a,	// (0x000302ca) cell_pinb_pane_g1_ParamLimits

0x121a,	// (0x000302ca) cell_pinb_pane_g1

0x122f,	// (0x000302df) cell_pinb_pane_g2_ParamLimits

0x122f,	// (0x000302df) cell_pinb_pane_g2

0xa35b,	// (0x0003940b) cell_pinb_pane_g3_ParamLimits

0xa35b,	// (0x0003940b) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003e1d9) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003e1d9) cell_pinb_pane_g

0xa085,	// (0x00039135) grid_highlight_pane_cp01

0x123b,	// (0x000302eb) list_pinb_item_pane_ParamLimits

0x123b,	// (0x000302eb) list_pinb_item_pane

0xa085,	// (0x00039135) list_highlight_pane_cp02

0x124d,	// (0x000302fd) list_pinb_item_pane_g1_ParamLimits

0x124d,	// (0x000302fd) list_pinb_item_pane_g1

0x125a,	// (0x0003030a) list_pinb_item_pane_g2_ParamLimits

0x125a,	// (0x0003030a) list_pinb_item_pane_g2

0x1266,	// (0x00030316) list_pinb_item_pane_g3_ParamLimits

0x1266,	// (0x00030316) list_pinb_item_pane_g3

0x1277,	// (0x00030327) list_pinb_item_pane_g4_ParamLimits

0x1277,	// (0x00030327) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003e1e0) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003e1e0) list_pinb_item_pane_g

0x1283,	// (0x00030333) list_pinb_item_pane_t1_ParamLimits

0x1283,	// (0x00030333) list_pinb_item_pane_t1

0xfb9b,	// (0x0002ec4b) calc_display_pane

0xfbc3,	// (0x0002ec73) calc_paper_pane

0xfbe6,	// (0x0002ec96) grid_calc_pane

0xa085,	// (0x00039135) bg_list_pane_cp01

0x12a2,	// (0x00030352) clock_g1

0x12aa,	// (0x0003035a) clock_g2

0x0001,

0xf139,	// (0x0003e1e9) clock_g

0x12b2,	// (0x00030362) clock_t1_ParamLimits

0x12b2,	// (0x00030362) clock_t1

0x12c7,	// (0x00030377) clock_t2_ParamLimits

0x12c7,	// (0x00030377) clock_t2

0x12d9,	// (0x00030389) clock_t3_ParamLimits

0x12d9,	// (0x00030389) clock_t3

0x12eb,	// (0x0003039b) clock_t4_ParamLimits

0x12eb,	// (0x0003039b) clock_t4

0x12fd,	// (0x000303ad) clock_t5_ParamLimits

0x12fd,	// (0x000303ad) clock_t5

0x1312,	// (0x000303c2) clock_t6_ParamLimits

0x1312,	// (0x000303c2) clock_t6

0x1324,	// (0x000303d4) clock_t7_ParamLimits

0x1324,	// (0x000303d4) clock_t7

0x1336,	// (0x000303e6) clock_t8_ParamLimits

0x1336,	// (0x000303e6) clock_t8

0x134a,	// (0x000303fa) clock_t9_ParamLimits

0x134a,	// (0x000303fa) clock_t9

0x0008,

0xf13e,	// (0x0003e1ee) clock_t_ParamLimits

0xf13e,	// (0x0003e1ee) clock_t

0xa367,	// (0x00039417) popup_clock_analogue_window_cp02

0xa367,	// (0x00039417) popup_clock_digital_window_cp01

0xa36f,	// (0x0003941f) listscroll_help_pane

0xa085,	// (0x00039135) phob_pre_status_pane

0xa379,	// (0x00039429) grid_qdial_pane

0xa2e0,	// (0x00039390) listscroll_mce_pane

0xa2e0,	// (0x00039390) bg_notes_pane

0xa383,	// (0x00039433) list_notes_pane

0x1360,	// (0x00030410) scroll_pane_cp06

0xa391,	// (0x00039441) bg_calc_paper_pane

0x137e,	// (0x0003042e) list_calc_pane

0xa3a5,	// (0x00039455) bg_calc_display_pane

0xfc14,	// (0x0002ecc4) calc_display_pane_t1

0xfc26,	// (0x0002ecd6) calc_display_pane_t2

0x1398,	// (0x00030448) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003e201) calc_display_pane_t

0xfc38,	// (0x0002ece8) cell_calc_pane_ParamLimits

0xfc38,	// (0x0002ece8) cell_calc_pane

0xa3b1,	// (0x00039461) bg_calc_paper_pane_g1

0xa3bd,	// (0x0003946d) bg_calc_paper_pane_g2

0xa3c9,	// (0x00039479) bg_calc_paper_pane_g3

0xa3d5,	// (0x00039485) bg_calc_paper_pane_g4

0xa3e1,	// (0x00039491) bg_calc_paper_pane_g5

0x13aa,	// (0x0003045a) bg_calc_paper_pane_g6

0x13bd,	// (0x0003046d) bg_calc_paper_pane_g7

0x13d0,	// (0x00030480) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003e208) bg_calc_paper_pane_g

0x13e1,	// (0x00030491) calc_bg_paper_pane_g9

0x13f2,	// (0x000304a2) list_calc_item_pane_ParamLimits

0x13f2,	// (0x000304a2) list_calc_item_pane

0xa3ed,	// (0x0003949d) list_calc_item_pane_g1

0x140a,	// (0x000304ba) list_calc_item_pane_t1_ParamLimits

0x140a,	// (0x000304ba) list_calc_item_pane_t1

0xfc75,	// (0x0002ed25) list_calc_item_pane_t2_ParamLimits

0xfc75,	// (0x0002ed25) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003e219) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003e219) list_calc_item_pane_t

0xa3fa,	// (0x000394aa) cell_calc_pane_g1

0xa404,	// (0x000394b4) grid_highlight_pane_cp02

0xa426,	// (0x000394d6) bg_calc_display_pane_g1

0x141c,	// (0x000304cc) bg_calc_display_pane_g2

0xa42f,	// (0x000394df) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003e223) bg_calc_display_pane_g

0xfca7,	// (0x0002ed57) cell_qdial_pane_ParamLimits

0xfca7,	// (0x0002ed57) cell_qdial_pane

0x1426,	// (0x000304d6) cell_qdial_pane_g1_ParamLimits

0x1426,	// (0x000304d6) cell_qdial_pane_g1

0x143c,	// (0x000304ec) cell_qdial_pane_g2_ParamLimits

0x143c,	// (0x000304ec) cell_qdial_pane_g2

0xa438,	// (0x000394e8) cell_qdial_pane_g3_ParamLimits

0xa438,	// (0x000394e8) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003e22a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003e22a) cell_qdial_pane_g

0x1463,	// (0x00030513) cell_qdial_pane_t1_ParamLimits

0x1463,	// (0x00030513) cell_qdial_pane_t1

0x147b,	// (0x0003052b) cell_qdial_pane_t2_ParamLimits

0x147b,	// (0x0003052b) cell_qdial_pane_t2

0x148e,	// (0x0003053e) cell_qdial_pane_t3_ParamLimits

0x148e,	// (0x0003053e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003e233) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003e233) cell_qdial_pane_t

0xa085,	// (0x00039135) grid_highlight_pane_cp04

0xa444,	// (0x000394f4) thumbnail_qdial_pane_ParamLimits

0xa444,	// (0x000394f4) thumbnail_qdial_pane

0xa4a0,	// (0x00039550) list_help_pane

0xa4a9,	// (0x00039559) scroll_pane_cp02

0x14a1,	// (0x00030551) help_list_pane_t1_ParamLimits

0x14a1,	// (0x00030551) help_list_pane_t1

0x14bf,	// (0x0003056f) bg_notes_pane_g2

0x14c7,	// (0x00030577) bg_notes_pane_g3

0x14cf,	// (0x0003057f) notes_bg_pane_g1

0x14d7,	// (0x00030587) notes_bg_pane_g4

0x14df,	// (0x0003058f) notes_bg_pane_g5

0x14e7,	// (0x00030597) notes_bg_pane_g6

0x14ef,	// (0x0003059f) notes_bg_pane_g7

0x14f7,	// (0x000305a7) notes_bg_pane_g8

0x14ff,	// (0x000305af) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003e251) notes_bg_pane_g

0x1507,	// (0x000305b7) list_notes_text_pane_ParamLimits

0x1507,	// (0x000305b7) list_notes_text_pane

0xa4b2,	// (0x00039562) list_notes_text_pane_g1

0x151b,	// (0x000305cb) list_notes_text_pane_t1

0x1529,	// (0x000305d9) listscroll_cale_week_pane

0x155f,	// (0x0003060f) bg_cale_heading_pane

0x1588,	// (0x00030638) bg_cale_pane_cp01

0x15aa,	// (0x0003065a) cale_week_corner_pane

0x15c9,	// (0x00030679) cale_week_day_heading_pane

0x15f7,	// (0x000306a7) cale_week_scroll_pane_g1

0x161b,	// (0x000306cb) cale_week_scroll_pane_g2

0x1633,	// (0x000306e3) cale_week_scroll_pane_g3

0x164b,	// (0x000306fb) cale_week_scroll_pane_g4

0x1667,	// (0x00030717) cale_week_scroll_pane_g5

0x1687,	// (0x00030737) cale_week_scroll_pane_g6

0x16a7,	// (0x00030757) cale_week_scroll_pane_g7

0x16cb,	// (0x0003077b) cale_week_scroll_pane_g8

0x16ef,	// (0x0003079f) cale_week_scroll_pane_g9

0x170c,	// (0x000307bc) cale_week_scroll_pane_g10

0x1729,	// (0x000307d9) cale_week_scroll_pane_g11

0x1746,	// (0x000307f6) cale_week_scroll_pane_g12

0x1763,	// (0x00030813) cale_week_scroll_pane_g13

0x1780,	// (0x00030830) cale_week_scroll_pane_g14

0x17a9,	// (0x00030859) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003e260) cale_week_scroll_pane_g

0x17f6,	// (0x000308a6) cale_week_time_pane

0x181a,	// (0x000308ca) grid_cale_week_pane

0xa4de,	// (0x0003958e) scroll_pane_cp08

0x1851,	// (0x00030901) cell_cale_week_pane_ParamLimits

0x1851,	// (0x00030901) cell_cale_week_pane

0x18e1,	// (0x00030991) cale_week_day_heading_pane_t1

0x192b,	// (0x000309db) cale_week_day_heading_pane_t2

0x197a,	// (0x00030a2a) cale_week_day_heading_pane_t3

0x19c9,	// (0x00030a79) cale_week_day_heading_pane_t4

0x1a18,	// (0x00030ac8) cale_week_day_heading_pane_t5

0x1a6b,	// (0x00030b1b) cale_week_day_heading_pane_t6

0x1ac2,	// (0x00030b72) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003e281) cale_week_day_heading_pane_t

0xa500,	// (0x000395b0) bg_cale_side_pane

0xfcbb,	// (0x0002ed6b) cale_week_time_pane_t1

0xfcf5,	// (0x0002eda5) cale_week_time_pane_t2

0xfd2f,	// (0x0002eddf) cale_week_time_pane_t3

0xfd69,	// (0x0002ee19) cale_week_time_pane_t4

0xfda3,	// (0x0002ee53) cale_week_time_pane_t5

0xfddd,	// (0x0002ee8d) cale_week_time_pane_t6

0xfe17,	// (0x0002eec7) cale_week_time_pane_t7

0xfe51,	// (0x0002ef01) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003e290) cale_week_time_pane_t

0x1b0c,	// (0x00030bbc) cell_cale_week_pane_g2

0x1b2b,	// (0x00030bdb) cell_cale_week_pane_g3_ParamLimits

0x1b2b,	// (0x00030bdb) cell_cale_week_pane_g3

0xa50e,	// (0x000395be) grid_highlight_pane_cp07

0xa516,	// (0x000395c6) listscroll_gms_pane

0xa520,	// (0x000395d0) grid_gms_pane

0xa529,	// (0x000395d9) listscroll_gms_pane_g1

0xa531,	// (0x000395e1) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003e2a1) listscroll_gms_pane_g

0x1b43,	// (0x00030bf3) scroll_pane_cp010

0x1b4e,	// (0x00030bfe) cell_gms_pane_ParamLimits

0x1b4e,	// (0x00030bfe) cell_gms_pane

0x1b68,	// (0x00030c18) cell_gms_pane_g1

0xa539,	// (0x000395e9) cell_gms_pane_g2

0xa541,	// (0x000395f1) cell_gms_pane_g3

0xa54a,	// (0x000395fa) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003e2a6) cell_gms_pane_g

0xa553,	// (0x00039603) grid_highlight_pane_cp09

0x4434,	// (0x000334e4) phob_pre_status_pane_g1

0x443c,	// (0x000334ec) phob_pre_status_pane_g2

0x4444,	// (0x000334f4) phob_pre_status_pane_g3

0x444c,	// (0x000334fc) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003e691) phob_pre_status_pane_g

0x445c,	// (0x0003350c) phob_pre_status_pane_t1

0x446c,	// (0x0003351c) phob_pre_status_pane_t2

0x447c,	// (0x0003352c) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003e69c) phob_pre_status_pane_t

0xa55b,	// (0x0003960b) bg_list_pane_cp05

0x1b78,	// (0x00030c28) grid_vorec_pane

0x1b84,	// (0x00030c34) vorec_t1

0x1b92,	// (0x00030c42) vorec_t2

0x1ba0,	// (0x00030c50) vorec_t3

0x1bae,	// (0x00030c5e) vorec_t4

0x0e40,	// (0x0002fef0) vorec_t5

0x0e4e,	// (0x0002fefe) vorec_t6

0x0004,

0xf1ff,	// (0x0003e2af) vorec_t

0x0e5c,	// (0x0002ff0c) wait_bar_pane_cp01

0x1bca,	// (0x00030c7a) cell_vorec_pane_ParamLimits

0x1bca,	// (0x00030c7a) cell_vorec_pane

0x1bdf,	// (0x00030c8f) cell_vorec_pane_g1

0xa085,	// (0x00039135) grid_highlight_pane_cp05

0x1bff,	// (0x00030caf) cams_zoom_pane

0x1c0e,	// (0x00030cbe) image_vga_pane

0x1c28,	// (0x00030cd8) main_camera_pane_g1

0x1c3a,	// (0x00030cea) main_camera_pane_g2

0x1c4a,	// (0x00030cfa) main_camera_pane_g3

0x1c5e,	// (0x00030d0e) main_camera_pane_g4

0x1c72,	// (0x00030d22) main_camera_pane_g5

0x1c86,	// (0x00030d36) main_camera_pane_g6

0x1c9a,	// (0x00030d4a) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003e2ba) main_camera_pane_g

0x1cae,	// (0x00030d5e) main_camera_pane_t1

0x1cc4,	// (0x00030d74) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003e2cb) main_camera_pane_t

0x1d02,	// (0x00030db2) cams_zoom_pane_cp_ParamLimits

0x1d02,	// (0x00030db2) cams_zoom_pane_cp

0x1d2a,	// (0x00030dda) image_cif_pane_ParamLimits

0x1d2a,	// (0x00030dda) image_cif_pane

0x1d65,	// (0x00030e15) image_subqcif_pane

0x1d6f,	// (0x00030e1f) main_video_pane_g1_ParamLimits

0x1d6f,	// (0x00030e1f) main_video_pane_g1

0x1d93,	// (0x00030e43) main_video_pane_g2_ParamLimits

0x1d93,	// (0x00030e43) main_video_pane_g2

0x1dc9,	// (0x00030e79) main_video_pane_g3_ParamLimits

0x1dc9,	// (0x00030e79) main_video_pane_g3

0x1df7,	// (0x00030ea7) main_video_pane_g4_ParamLimits

0x1df7,	// (0x00030ea7) main_video_pane_g4

0x1e25,	// (0x00030ed5) main_video_pane_g5_ParamLimits

0x1e25,	// (0x00030ed5) main_video_pane_g5

0xa56f,	// (0x0003961f) main_video_pane_g6_ParamLimits

0xa56f,	// (0x0003961f) main_video_pane_g6

0x0006,

0xf220,	// (0x0003e2d0) main_video_pane_g_ParamLimits

0xf220,	// (0x0003e2d0) main_video_pane_g

0x1e4e,	// (0x00030efe) main_video_pane_t1_ParamLimits

0x1e4e,	// (0x00030efe) main_video_pane_t1

0xa589,	// (0x00039639) cams_zoom_pane_g1

0xa592,	// (0x00039642) cams_zoom_pane_g2

0xa59b,	// (0x0003964b) cams_zoom_pane_g3

0xa5a4,	// (0x00039654) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003e2df) cams_zoom_pane_g

0x1eab,	// (0x00030f5b) grid_cams_pane

0x1ec5,	// (0x00030f75) linegrid_cams_pane

0x1ed7,	// (0x00030f87) cell_cams_pane_ParamLimits

0x1ed7,	// (0x00030f87) cell_cams_pane

0xa5ad,	// (0x0003965d) cams_burst_image_pane

0xa5b5,	// (0x00039665) cell_cams_pane_g1

0xa085,	// (0x00039135) grid_highlight_pane_cp03

0xa3fa,	// (0x000394aa) mp_bg_pane_g1

0xa085,	// (0x00039135) bg_list_pane_cp03

0xc215,	// (0x0003b2c5) bg_mp_pane

0xc21d,	// (0x0003b2cd) grid_mp_pane

0xc225,	// (0x0003b2d5) media_player_g1

0xc23b,	// (0x0003b2eb) media_player_t1

0xc249,	// (0x0003b2f9) media_player_t2

0xc257,	// (0x0003b307) media_player_t3

0xc265,	// (0x0003b315) media_player_t4

0xc273,	// (0x0003b323) media_player_t5

0xc281,	// (0x0003b331) media_player_t6

0xc28f,	// (0x0003b33f) media_player_t7

0x0006,

0xf5cb,	// (0x0003e67b) media_player_t

0xc29d,	// (0x0003b34d) wait_bar_pane_cp02

0xf5b0,	// (0x0003e660) main_usb_pane_t

0x442b,	// (0x000334db) cell_mp_pane

0xa3fa,	// (0x000394aa) cell_mp_pane_g1

0xa085,	// (0x00039135) grid_highlight_pane_cp06

0xa5bd,	// (0x0003966d) grid_skin_colour_pane

0xa5c5,	// (0x00039675) list_highlight_pane_cp03

0x1ffd,	// (0x000310ad) skin_g1

0xa5cd,	// (0x0003967d) skin_t1

0xa5dc,	// (0x0003968c) skin_t2

0x0001,

0xf264,	// (0x0003e314) skin_t

0x2005,	// (0x000310b5) cell_skin_colour_pane_ParamLimits

0x2005,	// (0x000310b5) cell_skin_colour_pane

0xa5ea,	// (0x0003969a) cell_skin_colour_pane_g1

0x2078,	// (0x00031128) call_video_g1_ParamLimits

0x2078,	// (0x00031128) call_video_g1

0x2094,	// (0x00031144) call_video_g2_ParamLimits

0x2094,	// (0x00031144) call_video_g2

0x0001,

0xf269,	// (0x0003e319) call_video_g_ParamLimits

0xf269,	// (0x0003e319) call_video_g

0x20d9,	// (0x00031189) call_video_uplink_pane_cp1_ParamLimits

0x20d9,	// (0x00031189) call_video_uplink_pane_cp1

0xa5fc,	// (0x000396ac) call_video_uplink_pane_cp2

0x217a,	// (0x0003122a) video_down_crop_pane_ParamLimits

0x217a,	// (0x0003122a) video_down_crop_pane

0x2263,	// (0x00031313) video_down_pane_ParamLimits

0x2263,	// (0x00031313) video_down_pane

0xa604,	// (0x000396b4) video_down_subqcif_pane_ParamLimits

0xa604,	// (0x000396b4) video_down_subqcif_pane

0xa61e,	// (0x000396ce) video_down_subqcif_pane_cp_ParamLimits

0xa61e,	// (0x000396ce) video_down_subqcif_pane_cp

0xa646,	// (0x000396f6) im_reading_pane_ParamLimits

0xa646,	// (0x000396f6) im_reading_pane

0x236c,	// (0x0003141c) im_writing_pane_ParamLimits

0x236c,	// (0x0003141c) im_writing_pane

0x2388,	// (0x00031438) im_reading_pane_t1

0xa660,	// (0x00039710) list_im_pane

0xa671,	// (0x00039721) scroll_pane_cp07

0x23c4,	// (0x00031474) im_writing_pane_t1_ParamLimits

0x23c4,	// (0x00031474) im_writing_pane_t1

0xa68a,	// (0x0003973a) im_writing_pane_t2_ParamLimits

0xa68a,	// (0x0003973a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003e323) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003e323) im_writing_pane_t

0xa085,	// (0x00039135) input_focus_pane_cp04

0xa085,	// (0x00039135) input_focus_pane_cp05

0x23d9,	// (0x00031489) list_im_single_pane_ParamLimits

0x23d9,	// (0x00031489) list_im_single_pane

0x23ef,	// (0x0003149f) list_single_im_pane_t1

0x43eb,	// (0x0003349b) blid_accuracy_pane

0x43f3,	// (0x000334a3) blid_compass_pane

0x43fd,	// (0x000334ad) main_location_t1

0x440d,	// (0x000334bd) main_location_t2

0x441d,	// (0x000334cd) main_location_t3

0x0002,

0xf5da,	// (0x0003e68a) main_location_t

0xa085,	// (0x00039135) aid_levels_location

0xa3fa,	// (0x000394aa) blid_accuracy_pane_g1

0xa3fa,	// (0x000394aa) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003e385) blid_accuracy_pane_g

0xa6d2,	// (0x00039782) wml_content_pane

0xa710,	// (0x000397c0) wml_button_pane_ParamLimits

0xa710,	// (0x000397c0) wml_button_pane

0x23fe,	// (0x000314ae) wml_list_single_large_pane_ParamLimits

0x23fe,	// (0x000314ae) wml_list_single_large_pane

0x2414,	// (0x000314c4) wml_list_single_medium_pane_ParamLimits

0x2414,	// (0x000314c4) wml_list_single_medium_pane

0x242b,	// (0x000314db) wml_list_single_small_pane_ParamLimits

0x242b,	// (0x000314db) wml_list_single_small_pane

0xa724,	// (0x000397d4) wml_selection_box_pane_ParamLimits

0xa724,	// (0x000397d4) wml_selection_box_pane

0xa737,	// (0x000397e7) wml_list_single_pane_t1

0xa746,	// (0x000397f6) wml_list_single_medium_pane_t1

0xa755,	// (0x00039805) wml_list_single_large_pane_t1

0xa764,	// (0x00039814) input_focus_pane_cp02_ParamLimits

0xa764,	// (0x00039814) input_focus_pane_cp02

0xa777,	// (0x00039827) wml_selection_box_pane_g1

0xa780,	// (0x00039830) wml_selection_box_pane_t1_ParamLimits

0xa780,	// (0x00039830) wml_selection_box_pane_t1

0xa2e0,	// (0x00039390) bg_wml_button_pane_ParamLimits

0xa2e0,	// (0x00039390) bg_wml_button_pane

0xa798,	// (0x00039848) wml_button_pane_g1

0xa7a0,	// (0x00039850) wml_button_pane_t1

0xa798,	// (0x00039848) wml_button_bg_pane_g1

0xa7b0,	// (0x00039860) wml_button_bg_pane_g2

0xa7b8,	// (0x00039868) wml_button_bg_pane_g3

0xa7c0,	// (0x00039870) wml_button_bg_pane_g4

0xa7c8,	// (0x00039878) wml_button_bg_pane_g5

0xa7d0,	// (0x00039880) wml_button_bg_pane_g6

0xa7d8,	// (0x00039888) wml_button_bg_pane_g7

0xa7e0,	// (0x00039890) wml_button_bg_pane_g8

0xa7e8,	// (0x00039898) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003e328) wml_button_bg_pane_g

0x2447,	// (0x000314f7) bg_list_pane_cp02

0xa7f0,	// (0x000398a0) mce_header_pane_ParamLimits

0xa7f0,	// (0x000398a0) mce_header_pane

0xa806,	// (0x000398b6) mce_icon_pane

0xa806,	// (0x000398b6) mce_image_pane

0xa80f,	// (0x000398bf) mce_text_pane_ParamLimits

0xa80f,	// (0x000398bf) mce_text_pane

0x2451,	// (0x00031501) scroll_pane_cp03

0xa708,	// (0x000397b8) scroll_pane_cp04

0xa822,	// (0x000398d2) scroll_pane_cp05_ParamLimits

0xa822,	// (0x000398d2) scroll_pane_cp05

0x245b,	// (0x0003150b) mce_header_field_pane_ParamLimits

0x245b,	// (0x0003150b) mce_header_field_pane

0x2474,	// (0x00031524) mce_header_field_pane_2_ParamLimits

0x2474,	// (0x00031524) mce_header_field_pane_2

0x248a,	// (0x0003153a) mce_header_field_pane_3

0x2492,	// (0x00031542) list_single_mce_message_pane_ParamLimits

0x2492,	// (0x00031542) list_single_mce_message_pane

0x24ab,	// (0x0003155b) list_single_mce_smart_pane_ParamLimits

0x24ab,	// (0x0003155b) list_single_mce_smart_pane

0xa82e,	// (0x000398de) input_focus_pane_cp03

0xa837,	// (0x000398e7) list_header_data_pane

0x24cf,	// (0x0003157f) mce_header_field_pane_t1

0x24df,	// (0x0003158f) list_single_mce_header_pane_ParamLimits

0x24df,	// (0x0003158f) list_single_mce_header_pane

0xa83f,	// (0x000398ef) list_single_mce_header_pane_t1

0xa84e,	// (0x000398fe) list_single_mce_message_pane_g1

0xa856,	// (0x00039906) list_single_mce_message_pane_t1

0x2519,	// (0x000315c9) bg_cale_heading_pane_cp01_ParamLimits

0x2519,	// (0x000315c9) bg_cale_heading_pane_cp01

0xa864,	// (0x00039914) bg_cale_pane_cp02_ParamLimits

0xa864,	// (0x00039914) bg_cale_pane_cp02

0x2560,	// (0x00031610) cale_month_corner_pane

0x257f,	// (0x0003162f) cale_month_day_heading_pane_ParamLimits

0x257f,	// (0x0003162f) cale_month_day_heading_pane

0x25de,	// (0x0003168e) cale_month_pane_g1_ParamLimits

0x25de,	// (0x0003168e) cale_month_pane_g1

0x261a,	// (0x000316ca) cale_month_pane_g2_ParamLimits

0x261a,	// (0x000316ca) cale_month_pane_g2

0x2656,	// (0x00031706) cale_month_pane_g3_ParamLimits

0x2656,	// (0x00031706) cale_month_pane_g3

0x26aa,	// (0x0003175a) cale_month_pane_g4_ParamLimits

0x26aa,	// (0x0003175a) cale_month_pane_g4

0x26fe,	// (0x000317ae) cale_month_pane_g5_ParamLimits

0x26fe,	// (0x000317ae) cale_month_pane_g5

0x275a,	// (0x0003180a) cale_month_pane_g6_ParamLimits

0x275a,	// (0x0003180a) cale_month_pane_g6

0x27be,	// (0x0003186e) cale_month_pane_g7_ParamLimits

0x27be,	// (0x0003186e) cale_month_pane_g7

0x282a,	// (0x000318da) cale_month_pane_g8_ParamLimits

0x282a,	// (0x000318da) cale_month_pane_g8

0x2896,	// (0x00031946) cale_month_pane_g9_ParamLimits

0x2896,	// (0x00031946) cale_month_pane_g9

0x28f4,	// (0x000319a4) cale_month_pane_g10_ParamLimits

0x28f4,	// (0x000319a4) cale_month_pane_g10

0x2946,	// (0x000319f6) cale_month_pane_g11_ParamLimits

0x2946,	// (0x000319f6) cale_month_pane_g11

0x2998,	// (0x00031a48) cale_month_pane_g12_ParamLimits

0x2998,	// (0x00031a48) cale_month_pane_g12

0x29f0,	// (0x00031aa0) cale_month_pane_g13_ParamLimits

0x29f0,	// (0x00031aa0) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003e33b) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003e33b) cale_month_pane_g

0x2a48,	// (0x00031af8) cale_month_week_pane

0x2a6c,	// (0x00031b1c) grid_cale_month_pane_ParamLimits

0x2a6c,	// (0x00031b1c) grid_cale_month_pane

0x2ac2,	// (0x00031b72) cale_month_day_heading_pane_t1

0x2b48,	// (0x00031bf8) cale_month_day_heading_pane_t2

0x2bd9,	// (0x00031c89) cale_month_day_heading_pane_t3

0x2c6a,	// (0x00031d1a) cale_month_day_heading_pane_t4

0x2cfb,	// (0x00031dab) cale_month_day_heading_pane_t5

0x2d9c,	// (0x00031e4c) cale_month_day_heading_pane_t6

0x2e41,	// (0x00031ef1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003e356) cale_month_day_heading_pane_t

0xa500,	// (0x000395b0) bg_cale_side_pane_cp01

0x2eea,	// (0x00031f9a) cale_month_week_pane_t1

0x2f03,	// (0x00031fb3) cale_month_week_pane_t2

0x2f1c,	// (0x00031fcc) cale_month_week_pane_t3

0x2f35,	// (0x00031fe5) cale_month_week_pane_t4

0x2f4e,	// (0x00031ffe) cale_month_week_pane_t5

0x2f67,	// (0x00032017) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003e365) cale_month_week_pane_t

0x2f86,	// (0x00032036) cell_cale_month_pane_ParamLimits

0x2f86,	// (0x00032036) cell_cale_month_pane

0x30da,	// (0x0003218a) cell_cale_month_pane_g1

0xfe91,	// (0x0002ef41) cell_cale_month_pane_t1_ParamLimits

0xfe91,	// (0x0002ef41) cell_cale_month_pane_t1

0xa50e,	// (0x000395be) grid_highlight_pane_cp08

0xa3fa,	// (0x000394aa) main_smil_g1

0x30e6,	// (0x00032196) smil_status_pane

0xa8a3,	// (0x00039953) smil_text_pane

0xc133,	// (0x0003b1e3) bg_popup_call3_rect_pane_g8

0xc13b,	// (0x0003b1eb) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e61e) bg_popup_call3_rect_pane_g

0xc3d5,	// (0x0003b485) smil_status_volume_pane_g1

0x30f9,	// (0x000321a9) smil_status_pane_t1

0x4a30,	// (0x00033ae0) volume_smil_pane

0xa8ad,	// (0x0003995d) list_smil_text_pane

0x3112,	// (0x000321c2) scroll_pane_cp011

0x311d,	// (0x000321cd) smil_text_list_pane_t1_ParamLimits

0x311d,	// (0x000321cd) smil_text_list_pane_t1

0x3156,	// (0x00032206) aid_volume_smil_ParamLimits

0x3156,	// (0x00032206) aid_volume_smil

0xa3fa,	// (0x000394aa) smil_volume_pane_g1

0xa3fa,	// (0x000394aa) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003e385) smil_volume_pane_g

0x1529,	// (0x000305d9) listscroll_cale_day_pane

0xa8b7,	// (0x00039967) bg_cale_pane

0xa8cf,	// (0x0003997f) list_cale_pane

0xa8f2,	// (0x000399a2) scroll_pane_cp09

0xa903,	// (0x000399b3) cale_bg_pane_g1

0xa90b,	// (0x000399bb) cale_bg_pane_g2

0xa913,	// (0x000399c3) cale_bg_pane_g3

0xa91b,	// (0x000399cb) cale_bg_pane_g4

0xa923,	// (0x000399d3) cale_bg_pane_g5

0xa92b,	// (0x000399db) cale_bg_pane_g6

0xa933,	// (0x000399e3) cale_bg_pane_g7

0xa93b,	// (0x000399eb) cale_bg_pane_g8

0xa943,	// (0x000399f3) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003e38a) cale_bg_pane_g

0x3178,	// (0x00032228) list_cale_time_pane_ParamLimits

0x3178,	// (0x00032228) list_cale_time_pane

0xa953,	// (0x00039a03) list_cale_time_pane_g1_ParamLimits

0xa953,	// (0x00039a03) list_cale_time_pane_g1

0xa95f,	// (0x00039a0f) list_cale_time_pane_g2_ParamLimits

0xa95f,	// (0x00039a0f) list_cale_time_pane_g2

0x318c,	// (0x0003223c) list_cale_time_pane_g3_ParamLimits

0x318c,	// (0x0003223c) list_cale_time_pane_g3

0x319a,	// (0x0003224a) list_cale_time_pane_g4_ParamLimits

0x319a,	// (0x0003224a) list_cale_time_pane_g4

0x31a8,	// (0x00032258) list_cale_time_pane_g5_ParamLimits

0x31a8,	// (0x00032258) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003e39d) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003e39d) list_cale_time_pane_g

0xa979,	// (0x00039a29) list_cale_time_pane_t1_ParamLimits

0xa979,	// (0x00039a29) list_cale_time_pane_t1

0xa9a1,	// (0x00039a51) list_cale_time_pane_t2_ParamLimits

0xa9a1,	// (0x00039a51) list_cale_time_pane_t2

0x35b6,	// (0x00032666) aid_blid_cardinal_pane

0x35f4,	// (0x000326a4) compass_pane_t4

0xa9c9,	// (0x00039a79) list_cale_time_pane_t4_ParamLimits

0xa9c9,	// (0x00039a79) list_cale_time_pane_t4

0x3602,	// (0x000326b2) compass_pane_t5

0x3610,	// (0x000326c0) compass_pane_t6

0x361e,	// (0x000326ce) compass_pane_t7

0xadd7,	// (0x00039e87) navi_pane_cc_t1

0xaf3e,	// (0x00039fee) aid_phob_thumbnail_center_pane

0x3db6,	// (0x00032e66) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003e3aa) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003e3aa) list_cale_time_pane_t

0x9cdc,	// (0x00038d8c) bg_popup_window_pane_cp02_ParamLimits

0x9cdc,	// (0x00038d8c) bg_popup_window_pane_cp02

0xa9f1,	// (0x00039aa1) heading_pane_cp01_ParamLimits

0xa9f1,	// (0x00039aa1) heading_pane_cp01

0xa9fd,	// (0x00039aad) loc_req_pane_ParamLimits

0xa9fd,	// (0x00039aad) loc_req_pane

0xaa0d,	// (0x00039abd) loc_type_pane_ParamLimits

0xaa0d,	// (0x00039abd) loc_type_pane

0xaa1f,	// (0x00039acf) loc_type_pane_t1_ParamLimits

0xaa1f,	// (0x00039acf) loc_type_pane_t1

0xaa31,	// (0x00039ae1) loc_type_pane_t2_ParamLimits

0xaa31,	// (0x00039ae1) loc_type_pane_t2

0xaa43,	// (0x00039af3) loc_type_pane_t3_ParamLimits

0xaa43,	// (0x00039af3) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003e3b1) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003e3b1) loc_type_pane_t

0xaa55,	// (0x00039b05) list_loc_req_pane

0xaa5f,	// (0x00039b0f) scroll_pane_cp012

0x31b6,	// (0x00032266) list_single_loc_request_popup_menu_pane_ParamLimits

0x31b6,	// (0x00032266) list_single_loc_request_popup_menu_pane

0xaa6a,	// (0x00039b1a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa6a,	// (0x00039b1a) list_single_loc_request_popup_menu_pane_g1

0xaa76,	// (0x00039b26) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa76,	// (0x00039b26) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003e3b8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003e3b8) list_single_loc_request_popup_menu_pane_g

0xaa82,	// (0x00039b32) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa82,	// (0x00039b32) list_single_loc_request_popup_menu_pane_t1

0xa2e0,	// (0x00039390) bg_popup_window_pane_cp03_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_window_pane_cp03

0xaf17,	// (0x00039fc7) heading_loc_req_pane_ParamLimits

0xaf17,	// (0x00039fc7) heading_loc_req_pane

0x31c3,	// (0x00032273) popup_dyc_status_message_window_g1_ParamLimits

0x31c3,	// (0x00032273) popup_dyc_status_message_window_g1

0x31d7,	// (0x00032287) popup_dyc_status_message_window_t1_ParamLimits

0x31d7,	// (0x00032287) popup_dyc_status_message_window_t1

0x31ec,	// (0x0003229c) popup_dyc_status_message_window_t2_ParamLimits

0x31ec,	// (0x0003229c) popup_dyc_status_message_window_t2

0x3201,	// (0x000322b1) popup_dyc_status_message_window_t3_ParamLimits

0x3201,	// (0x000322b1) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003e3bd) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003e3bd) popup_dyc_status_message_window_t

0xa085,	// (0x00039135) bg_heading_pane_cp01

0xaa98,	// (0x00039b48) heading_loc_req_pane_g1

0xaaa0,	// (0x00039b50) heading_loc_req_pane_g2

0xaaa8,	// (0x00039b58) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003e3c4) heading_loc_req_pane_g

0xaab0,	// (0x00039b60) heading_loc_req_pane_t1

0xaac0,	// (0x00039b70) bg_popup_sub_pane_cp01_ParamLimits

0xaac0,	// (0x00039b70) bg_popup_sub_pane_cp01

0xaace,	// (0x00039b7e) popup_cale_events_window_g1_ParamLimits

0xaace,	// (0x00039b7e) popup_cale_events_window_g1

0xaaee,	// (0x00039b9e) popup_cale_events_window_g2_ParamLimits

0xaaee,	// (0x00039b9e) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003e3f8) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003e3f8) popup_cale_events_window_g

0xab0e,	// (0x00039bbe) popup_cale_events_window_t1_ParamLimits

0xab0e,	// (0x00039bbe) popup_cale_events_window_t1

0xab20,	// (0x00039bd0) popup_cale_events_window_t2_ParamLimits

0xab20,	// (0x00039bd0) popup_cale_events_window_t2

0xab5e,	// (0x00039c0e) popup_cale_events_window_t3_ParamLimits

0xab5e,	// (0x00039c0e) popup_cale_events_window_t3

0xab98,	// (0x00039c48) popup_cale_events_window_t4_ParamLimits

0xab98,	// (0x00039c48) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003e3fd) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003e3fd) popup_cale_events_window_t

0x3306,	// (0x000323b6) call_type_pane

0x3316,	// (0x000323c6) popup_call_status_window_g1

0x332a,	// (0x000323da) popup_call_status_window_g2

0x333e,	// (0x000323ee) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003e406) popup_call_status_window_g

0xabce,	// (0x00039c7e) call_type_pane_g1

0xabd7,	// (0x00039c87) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003e40d) call_type_pane_g

0xa085,	// (0x00039135) bg_popup_sub_pane_cp02

0xabe0,	// (0x00039c90) listscroll_popup_wml_pane

0xabe8,	// (0x00039c98) list_wml_pane

0xabf2,	// (0x00039ca2) scroll_pane_cp013

0xabfd,	// (0x00039cad) list_single_graphic_popup_wml_pane_ParamLimits

0xabfd,	// (0x00039cad) list_single_graphic_popup_wml_pane

0xa3fa,	// (0x000394aa) list_single_graphic_popup_wml_pane_g1

0xac11,	// (0x00039cc1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003e412) list_single_graphic_popup_wml_pane_g

0xac19,	// (0x00039cc9) list_single_graphic_popup_wml_pane_t1

0xac2f,	// (0x00039cdf) aid_call_pane

0xa2d8,	// (0x00039388) popup_clock_analogue_window_g1

0xa2d8,	// (0x00039388) popup_clock_analogue_window_g2

0x334e,	// (0x000323fe) popup_clock_analogue_window_g3

0x334e,	// (0x000323fe) popup_clock_analogue_window_g4

0xa3fa,	// (0x000394aa) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003e417) popup_clock_analogue_window_g

0x3356,	// (0x00032406) popup_clock_analogue_window_t1

0x3364,	// (0x00032414) clock_digital_number_pane_ParamLimits

0x3364,	// (0x00032414) clock_digital_number_pane

0x3370,	// (0x00032420) clock_digital_number_pane_cp02_ParamLimits

0x3370,	// (0x00032420) clock_digital_number_pane_cp02

0x337c,	// (0x0003242c) clock_digital_number_pane_cp03_ParamLimits

0x337c,	// (0x0003242c) clock_digital_number_pane_cp03

0x3388,	// (0x00032438) clock_digital_number_pane_cp04_ParamLimits

0x3388,	// (0x00032438) clock_digital_number_pane_cp04

0x3394,	// (0x00032444) clock_digital_separator_pane_ParamLimits

0x3394,	// (0x00032444) clock_digital_separator_pane

0x33a0,	// (0x00032450) popup_clock_digital_window_t1

0xa3fa,	// (0x000394aa) clock_digital_number_pane_g1

0xa3fa,	// (0x000394aa) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003e385) clock_digital_number_pane_g

0xa3fa,	// (0x000394aa) clock_digital_separator_pane_g1

0xa3fa,	// (0x000394aa) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003e385) clock_digital_separator_pane_g

0xa085,	// (0x00039135) bg_popup_window_pane_cp04

0xac37,	// (0x00039ce7) heading_pane_cp03

0xac3f,	// (0x00039cef) listscroll_popup_gms_pane

0xac47,	// (0x00039cf7) grid_large_graphic_popup_pane

0xac51,	// (0x00039d01) listscroll_popup_gms_pane_g1

0xac59,	// (0x00039d09) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003e422) listscroll_popup_gms_pane_g

0xa708,	// (0x000397b8) scroll_pane_cp014

0x33bd,	// (0x0003246d) cell_large_graphic_popup_pane_ParamLimits

0x33bd,	// (0x0003246d) cell_large_graphic_popup_pane

0x33d5,	// (0x00032485) cell_large_graphic_popup_pane_g1_ParamLimits

0x33d5,	// (0x00032485) cell_large_graphic_popup_pane_g1

0xac61,	// (0x00039d11) cell_large_graphic_popup_pane_g2_ParamLimits

0xac61,	// (0x00039d11) cell_large_graphic_popup_pane_g2

0xac6d,	// (0x00039d1d) cell_large_graphic_popup_pane_g3_ParamLimits

0xac6d,	// (0x00039d1d) cell_large_graphic_popup_pane_g3

0xac7a,	// (0x00039d2a) cell_large_graphic_popup_pane_g4_ParamLimits

0xac7a,	// (0x00039d2a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003e427) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003e427) cell_large_graphic_popup_pane_g

0xac8a,	// (0x00039d3a) grid_highlight_pane_cp010

0xa3fa,	// (0x000394aa) bg_popup_call_pane_g1

0xac94,	// (0x00039d44) list_single_graphic_popup_conf_pane_ParamLimits

0xac94,	// (0x00039d44) list_single_graphic_popup_conf_pane

0xaca6,	// (0x00039d56) list_highlight_pane_cp01

0xacaf,	// (0x00039d5f) list_single_graphic_popup_conf_pane_g1

0xacb7,	// (0x00039d67) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003e430) list_single_graphic_popup_conf_pane_g

0xacbf,	// (0x00039d6f) list_single_graphic_popup_conf_pane_t1

0xaccd,	// (0x00039d7d) linegrid_cams_pane_g1

0x33e1,	// (0x00032491) linegrid_cams_pane_g2

0xa541,	// (0x000395f1) linegrid_cams_pane_g3

0xacd6,	// (0x00039d86) linegrid_cams_pane_g4

0x33ea,	// (0x0003249a) linegrid_cams_pane_g5

0x33f3,	// (0x000324a3) linegrid_cams_pane_g6

0xa54a,	// (0x000395fa) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003e435) linegrid_cams_pane_g

0xacdf,	// (0x00039d8f) popup_clock_analogue_window

0xacdf,	// (0x00039d8f) popup_clock_digital_window

0xa085,	// (0x00039135) popup_phob_thumbnail_window

0xa3fa,	// (0x000394aa) call_video_uplink_pane_g1

0xace8,	// (0x00039d98) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003e444) call_video_uplink_pane_g

0xacf0,	// (0x00039da0) video_uplink_pane

0xacf8,	// (0x00039da8) mce_image_pane_g1

0x33fe,	// (0x000324ae) mce_image_pane_g2

0x3408,	// (0x000324b8) mce_image_pane_g3

0x3412,	// (0x000324c2) mce_image_pane_g4

0x341a,	// (0x000324ca) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003e449) mce_image_pane_g

0xad02,	// (0x00039db2) control_top_pane_stacon_cp01_ParamLimits

0xad02,	// (0x00039db2) control_top_pane_stacon_cp01

0xad16,	// (0x00039dc6) uni_indicator_pane_stacon_cp01_ParamLimits

0xad16,	// (0x00039dc6) uni_indicator_pane_stacon_cp01

0xad27,	// (0x00039dd7) bg_popup_sub_pane_cp03

0x3422,	// (0x000324d2) chi_dic_find_pane

0x342a,	// (0x000324da) listscroll_chi_dic_pane

0x3433,	// (0x000324e3) main_pane_chidic_g1

0x3446,	// (0x000324f6) chi_dic_find_pane_t1

0xad31,	// (0x00039de1) find_chidic_pane

0xad3a,	// (0x00039dea) chi_dic_list_pane_ParamLimits

0xad3a,	// (0x00039dea) chi_dic_list_pane

0xad4b,	// (0x00039dfb) scroll_pane_cp020

0x3454,	// (0x00032504) find_chidic_pane_t1

0xa085,	// (0x00039135) input_focus_pane_cp06

0x123b,	// (0x000302eb) list_chi_dic_pane_ParamLimits

0x123b,	// (0x000302eb) list_chi_dic_pane

0x3463,	// (0x00032513) list_chi_dic_pane_t1_ParamLimits

0x3463,	// (0x00032513) list_chi_dic_pane_t1

0xa085,	// (0x00039135) list_highlight_pane_cp020

0xad53,	// (0x00039e03) bg_cale_heading_pane_g1

0x3476,	// (0x00032526) bg_cale_heading_pane_g2

0x347e,	// (0x0003252e) bg_cale_heading_pane_g3

0x3486,	// (0x00032536) bg_cale_heading_pane_g4

0x3490,	// (0x00032540) bg_cale_heading_pane_g5

0x349a,	// (0x0003254a) bg_cale_heading_pane_g6

0x34a2,	// (0x00032552) bg_cale_heading_pane_g7

0x34aa,	// (0x0003255a) bg_cale_heading_pane_g8

0x34b4,	// (0x00032564) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003e454) bg_cale_heading_pane_g

0xad53,	// (0x00039e03) bg_cale_side_pane_g1

0x34be,	// (0x0003256e) bg_cale_side_pane_g2

0x34c8,	// (0x00032578) bg_cale_side_pane_g3

0x34d2,	// (0x00032582) bg_cale_side_pane_g4

0x34dc,	// (0x0003258c) bg_cale_side_pane_g5

0x34e6,	// (0x00032596) bg_cale_side_pane_g6

0x34f0,	// (0x000325a0) bg_cale_side_pane_g7

0x34fa,	// (0x000325aa) bg_cale_side_pane_g8

0x3502,	// (0x000325b2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003e467) bg_cale_side_pane_g

0x350a,	// (0x000325ba) popup_call_status_window_ParamLimits

0x350a,	// (0x000325ba) popup_call_status_window

0xad5b,	// (0x00039e0b) stacon_top_pane

0xad63,	// (0x00039e13) status_pane_ParamLimits

0xad63,	// (0x00039e13) status_pane

0xad78,	// (0x00039e28) status_small_pane

0xad80,	// (0x00039e30) control_pane

0xa085,	// (0x00039135) stacon_bottom_pane

0xad88,	// (0x00039e38) list_single_mce_smart_pane_t1_ParamLimits

0xad88,	// (0x00039e38) list_single_mce_smart_pane_t1

0xad9b,	// (0x00039e4b) list_single_mce_smart_pane_t2_ParamLimits

0xad9b,	// (0x00039e4b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003e47a) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003e47a) list_single_mce_smart_pane_t

0x3557,	// (0x00032607) compass_pane

0x3562,	// (0x00032612) main_location2_pane_t1

0x3576,	// (0x00032626) main_location2_pane_t2

0x358c,	// (0x0003263c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003e47f) main_location2_pane_t

0xadba,	// (0x00039e6a) compass_pane_g1_ParamLimits

0xadba,	// (0x00039e6a) compass_pane_g1

0x35d6,	// (0x00032686) compass_pane_t1

0x35e5,	// (0x00032695) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003e488) compass_pane_t

0x362c,	// (0x000326dc) text_secondary_cp61

0xadce,	// (0x00039e7e) navi_pane_cams_g5

0xadf1,	// (0x00039ea1) navi_pane_im_t1

0xadff,	// (0x00039eaf) navi_pane_mp_g1_ParamLimits

0xadff,	// (0x00039eaf) navi_pane_mp_g1

0xae13,	// (0x00039ec3) navi_pane_mp_g2_ParamLimits

0xae13,	// (0x00039ec3) navi_pane_mp_g2

0xae1f,	// (0x00039ecf) navi_pane_mp_g3_ParamLimits

0xae1f,	// (0x00039ecf) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003e49c) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003e49c) navi_pane_mp_g

0xae2b,	// (0x00039edb) navi_pane_mp_t1

0xae39,	// (0x00039ee9) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003e4a3) navi_pane_mp_t

0xae75,	// (0x00039f25) navi_pane_vt_g1

0xae2b,	// (0x00039edb) navi_pane_vt_t1

0xae7d,	// (0x00039f2d) navi_slider_pane

0xa55b,	// (0x0003960b) zooming_pane

0xae85,	// (0x00039f35) navi_slider_pane_g1

0x3775,	// (0x00032825) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003e4aa) navi_slider_pane_g

0xaea9,	// (0x00039f59) aid_levels_zoom

0xaeb1,	// (0x00039f61) zooming_pane_g1

0xaeb9,	// (0x00039f69) zooming_pane_g2

0xaeb9,	// (0x00039f69) zooming_pane_g3

0x0002,

0xf409,	// (0x0003e4b9) zooming_pane_g

0xaec1,	// (0x00039f71) level_10_zoom

0xaeca,	// (0x00039f7a) level_11_zoom

0xaed3,	// (0x00039f83) level_1_zoom

0xaedc,	// (0x00039f8c) level_2_zoom

0xaee5,	// (0x00039f95) level_3_zoom

0xaeee,	// (0x00039f9e) level_4_zoom

0xaef7,	// (0x00039fa7) level_5_zoom

0xaf00,	// (0x00039fb0) level_6_zoom

0xaf23,	// (0x00039fd3) level_7_zoom

0xaf2c,	// (0x00039fdc) level_8_zoom

0xaf35,	// (0x00039fe5) level_9_zoom

0xaf46,	// (0x00039ff6) popup_phob_thumbnail_window_g1

0xaf4e,	// (0x00039ffe) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003e4c0) popup_phob_thumbnail_window_g

0xc2a5,	// (0x0003b355) level_1_location

0xc2ad,	// (0x0003b35d) level_2_location

0xc2b5,	// (0x0003b365) level_3_location

0xc2bd,	// (0x0003b36d) level_4_location

0xa55b,	// (0x0003960b) level_5_location

0x3787,	// (0x00032837) mce_icon_pane_g1

0x3791,	// (0x00032841) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003e4c5) mce_icon_pane_g

0x3799,	// (0x00032849) main_mup_pane_g1_ParamLimits

0x3799,	// (0x00032849) main_mup_pane_g1

0x37af,	// (0x0003285f) main_mup_pane_g2_ParamLimits

0x37af,	// (0x0003285f) main_mup_pane_g2

0x37c7,	// (0x00032877) main_mup_pane_g3_ParamLimits

0x37c7,	// (0x00032877) main_mup_pane_g3

0x37df,	// (0x0003288f) main_mup_pane_g4_ParamLimits

0x37df,	// (0x0003288f) main_mup_pane_g4

0x37f7,	// (0x000328a7) main_mup_pane_g5_ParamLimits

0x37f7,	// (0x000328a7) main_mup_pane_g5

0x3813,	// (0x000328c3) main_mup_pane_g6_ParamLimits

0x3813,	// (0x000328c3) main_mup_pane_g6

0x382d,	// (0x000328dd) main_mup_pane_g7_ParamLimits

0x382d,	// (0x000328dd) main_mup_pane_g7

0x384b,	// (0x000328fb) main_mup_pane_g8_ParamLimits

0x384b,	// (0x000328fb) main_mup_pane_g8

0x3869,	// (0x00032919) main_mup_pane_g9_ParamLimits

0x3869,	// (0x00032919) main_mup_pane_g9

0x3885,	// (0x00032935) main_mup_pane_g10_ParamLimits

0x3885,	// (0x00032935) main_mup_pane_g10

0x38a3,	// (0x00032953) main_mup_pane_g11_ParamLimits

0x38a3,	// (0x00032953) main_mup_pane_g11

0x38bd,	// (0x0003296d) main_mup_pane_g12_ParamLimits

0x38bd,	// (0x0003296d) main_mup_pane_g12

0x38d3,	// (0x00032983) main_mup_pane_g13_ParamLimits

0x38d3,	// (0x00032983) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003e4ca) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003e4ca) main_mup_pane_g

0x38e7,	// (0x00032997) main_mup_pane_t1_ParamLimits

0x38e7,	// (0x00032997) main_mup_pane_t1

0x3903,	// (0x000329b3) main_mup_pane_t2_ParamLimits

0x3903,	// (0x000329b3) main_mup_pane_t2

0x391b,	// (0x000329cb) main_mup_pane_t3_ParamLimits

0x391b,	// (0x000329cb) main_mup_pane_t3

0x3933,	// (0x000329e3) main_mup_pane_t4_ParamLimits

0x3933,	// (0x000329e3) main_mup_pane_t4

0x3951,	// (0x00032a01) main_mup_pane_t5_ParamLimits

0x3951,	// (0x00032a01) main_mup_pane_t5

0x3966,	// (0x00032a16) main_mup_pane_t6_ParamLimits

0x3966,	// (0x00032a16) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003e4e5) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003e4e5) main_mup_pane_t

0x3978,	// (0x00032a28) mup_progress_pane_ParamLimits

0x3978,	// (0x00032a28) mup_progress_pane

0x3984,	// (0x00032a34) mup_visualizer_pane_ParamLimits

0x3984,	// (0x00032a34) mup_visualizer_pane

0x39b8,	// (0x00032a68) mup_volume_pane_ParamLimits

0x39b8,	// (0x00032a68) mup_volume_pane

0xaf09,	// (0x00039fb9) mup_visualizer_pane_g1_ParamLimits

0xaf09,	// (0x00039fb9) mup_visualizer_pane_g1

0xaf09,	// (0x00039fb9) mup_visualizer_pane_g2_ParamLimits

0xaf09,	// (0x00039fb9) mup_visualizer_pane_g2

0xadba,	// (0x00039e6a) mup_visualizer_pane_g3_ParamLimits

0xadba,	// (0x00039e6a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003e4f2) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003e4f2) mup_visualizer_pane_g

0xa3fa,	// (0x000394aa) mup_volume_pane_g1

0xaf5e,	// (0x0003a00e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003e4f9) mup_volume_pane_g

0xa3fa,	// (0x000394aa) mup_progress_pane_g1

0xaf67,	// (0x0003a017) mup_progress_pane_g2

0xaf70,	// (0x0003a020) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003e4fe) mup_progress_pane_g

0xa085,	// (0x00039135) bg_popup_window_pane_cp05

0xaf79,	// (0x0003a029) heading_pane_cp02_ParamLimits

0xaf79,	// (0x0003a029) heading_pane_cp02

0xaf95,	// (0x0003a045) list_popup_blid_pane

0xaf9d,	// (0x0003a04d) list_blid_sat_info_pane_ParamLimits

0xaf9d,	// (0x0003a04d) list_blid_sat_info_pane

0xafb0,	// (0x0003a060) list_blid_sat_info_pane_g1

0xafb8,	// (0x0003a068) list_blid_sat_info_pane_t1

0x3ae2,	// (0x00032b92) mup_equalizer_pane_ParamLimits

0x3ae2,	// (0x00032b92) mup_equalizer_pane

0x3b03,	// (0x00032bb3) mup_equalizer_pane_cp1_ParamLimits

0x3b03,	// (0x00032bb3) mup_equalizer_pane_cp1

0x3b24,	// (0x00032bd4) mup_equalizer_pane_cp2_ParamLimits

0x3b24,	// (0x00032bd4) mup_equalizer_pane_cp2

0x3b49,	// (0x00032bf9) mup_equalizer_pane_cp3_ParamLimits

0x3b49,	// (0x00032bf9) mup_equalizer_pane_cp3

0x3b72,	// (0x00032c22) mup_equalizer_pane_cp4_ParamLimits

0x3b72,	// (0x00032c22) mup_equalizer_pane_cp4

0x3b9b,	// (0x00032c4b) mup_equalizer_pane_cp5

0x3bb3,	// (0x00032c63) mup_equalizer_pane_cp6

0x3bcb,	// (0x00032c7b) mup_equalizer_pane_cp7

0xc1b3,	// (0x0003b263) bg_popup_call_poc_act_pane_g9

0xc1bb,	// (0x0003b26b) bg_popup_call_poc_act_pane_g10

0xc1c3,	// (0x0003b273) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2e0,	// (0x00039390) mup_scale_pane

0xa3fa,	// (0x000394aa) mup_scale_pane_g1

0xafc6,	// (0x0003a076) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003e51a) mup_scale_pane_g

0xafea,	// (0x0003a09a) msg_data_pane

0xaff2,	// (0x0003a0a2) scroll_pane_cp017

0x3bf5,	// (0x00032ca5) bg_list_pane_cp04_ParamLimits

0x3bf5,	// (0x00032ca5) bg_list_pane_cp04

0xb002,	// (0x0003a0b2) msg_data_pane_g1

0x3c15,	// (0x00032cc5) msg_data_pane_g2

0x3c1f,	// (0x00032ccf) msg_data_pane_g3

0x3c29,	// (0x00032cd9) msg_data_pane_g4

0x3c31,	// (0x00032ce1) msg_data_pane_g5

0x3c39,	// (0x00032ce9) msg_data_pane_g6

0x3c41,	// (0x00032cf1) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003e529) msg_data_pane_g

0x3c49,	// (0x00032cf9) msg_text_pane_ParamLimits

0x3c49,	// (0x00032cf9) msg_text_pane

0x3c71,	// (0x00032d21) qrid_highlight_pane_cp011_ParamLimits

0x3c71,	// (0x00032d21) qrid_highlight_pane_cp011

0xa085,	// (0x00039135) msg_body_pane

0xa085,	// (0x00039135) msg_header_pane

0xb013,	// (0x0003a0c3) input_focus_pane_cp07

0xb028,	// (0x0003a0d8) msg_header_pane_t1_ParamLimits

0xb028,	// (0x0003a0d8) msg_header_pane_t1

0xb03a,	// (0x0003a0ea) msg_header_pane_t2_ParamLimits

0xb03a,	// (0x0003a0ea) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003e53d) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003e53d) msg_header_pane_t

0xb04c,	// (0x0003a0fc) msg_body_pane_g1

0x3c95,	// (0x00032d45) msg_body_pane_t1_ParamLimits

0x3c95,	// (0x00032d45) msg_body_pane_t1

0xb054,	// (0x0003a104) msg_body_pane_t2_ParamLimits

0xb054,	// (0x0003a104) msg_body_pane_t2

0xb066,	// (0x0003a116) msg_body_pane_t3_ParamLimits

0xb066,	// (0x0003a116) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003e542) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003e542) msg_body_pane_t

0xfecd,	// (0x0002ef7d) main_viewer_pane_g1_ParamLimits

0xfecd,	// (0x0002ef7d) main_viewer_pane_g1

0xfedb,	// (0x0002ef8b) main_viewer_pane_g2_ParamLimits

0xfedb,	// (0x0002ef8b) main_viewer_pane_g2

0x3cfc,	// (0x00032dac) main_viewer_pane_g3_ParamLimits

0x3cfc,	// (0x00032dac) main_viewer_pane_g3

0x3d0b,	// (0x00032dbb) main_viewer_pane_g4_ParamLimits

0x3d0b,	// (0x00032dbb) main_viewer_pane_g4

0x3d1a,	// (0x00032dca) main_viewer_pane_g5_ParamLimits

0x3d1a,	// (0x00032dca) main_viewer_pane_g5

0x3d1a,	// (0x00032dca) main_viewer_pane_g7_ParamLimits

0x3d1a,	// (0x00032dca) main_viewer_pane_g7

0x3d2c,	// (0x00032ddc) main_viewer_pane_g8_ParamLimits

0x3d2c,	// (0x00032ddc) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003e552) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003e552) main_viewer_pane_g

0xb078,	// (0x0003a128) viewer_content_pane_ParamLimits

0xb078,	// (0x0003a128) viewer_content_pane

0x3d73,	// (0x00032e23) main_postcard_pane_g1_ParamLimits

0x3d73,	// (0x00032e23) main_postcard_pane_g1

0x3d89,	// (0x00032e39) main_postcard_pane_g2_ParamLimits

0x3d89,	// (0x00032e39) main_postcard_pane_g2

0x3d9f,	// (0x00032e4f) main_postcard_pane_g3_ParamLimits

0x3d9f,	// (0x00032e4f) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003e563) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003e563) main_postcard_pane_g

0x3db6,	// (0x00032e66) main_postcard_pane_g4

0xc3e8,	// (0x0003b498) smil_status_volume_pane_g2

0x3df9,	// (0x00032ea9) postcard_pane_ParamLimits

0x3df9,	// (0x00032ea9) postcard_pane

0xb086,	// (0x0003a136) postcard_pane_g1_ParamLimits

0xb086,	// (0x0003a136) postcard_pane_g1

0x3e49,	// (0x00032ef9) postcard_pane_g2_ParamLimits

0x3e49,	// (0x00032ef9) postcard_pane_g2

0x3e55,	// (0x00032f05) postcard_pane_g3_ParamLimits

0x3e55,	// (0x00032f05) postcard_pane_g3

0xb094,	// (0x0003a144) postcard_pane_g4_ParamLimits

0xb094,	// (0x0003a144) postcard_pane_g4

0x3e61,	// (0x00032f11) postcard_pane_g5_ParamLimits

0x3e61,	// (0x00032f11) postcard_pane_g5

0x3e76,	// (0x00032f26) postcard_pane_g6_ParamLimits

0x3e76,	// (0x00032f26) postcard_pane_g6

0xb086,	// (0x0003a136) postcard_pane_g7_ParamLimits

0xb086,	// (0x0003a136) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003e570) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003e570) postcard_pane_g

0x3e8e,	// (0x00032f3e) main_mp2_pane_g1_ParamLimits

0x3e8e,	// (0x00032f3e) main_mp2_pane_g1

0x3e9c,	// (0x00032f4c) main_mp2_pane_g2_ParamLimits

0x3e9c,	// (0x00032f4c) main_mp2_pane_g2

0x3ea8,	// (0x00032f58) main_mp2_pane_g3_ParamLimits

0x3ea8,	// (0x00032f58) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003e57f) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003e57f) main_mp2_pane_g

0x3eb4,	// (0x00032f64) main_mp2_pane_t1_ParamLimits

0x3eb4,	// (0x00032f64) main_mp2_pane_t1

0x3ecb,	// (0x00032f7b) main_mp2_pane_t2_ParamLimits

0x3ecb,	// (0x00032f7b) main_mp2_pane_t2

0x3edd,	// (0x00032f8d) main_mp2_pane_t3_ParamLimits

0x3edd,	// (0x00032f8d) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003e586) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003e586) main_mp2_pane_t

0xb0a2,	// (0x0003a152) pec_content_pane_ParamLimits

0xb0a2,	// (0x0003a152) pec_content_pane

0xa708,	// (0x000397b8) scroll_pane_cp015

0xb0b4,	// (0x0003a164) pec_attribute_pane_ParamLimits

0xb0b4,	// (0x0003a164) pec_attribute_pane

0x3eef,	// (0x00032f9f) pec_content_pane_g1_ParamLimits

0x3eef,	// (0x00032f9f) pec_content_pane_g1

0xb0c4,	// (0x0003a174) pec_content_pane_t1_ParamLimits

0xb0c4,	// (0x0003a174) pec_content_pane_t1

0xb0d6,	// (0x0003a186) pec_content_pane_t2_ParamLimits

0xb0d6,	// (0x0003a186) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003e58d) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003e58d) pec_content_pane_t

0x3efb,	// (0x00032fab) list_single_graphic_pane_cp01_ParamLimits

0x3efb,	// (0x00032fab) list_single_graphic_pane_cp01

0xa2e0,	// (0x00039390) bg_popup_sub_pane_cp04

0xb0e8,	// (0x0003a198) popup_mup_playback_window_g1

0xb0f4,	// (0x0003a1a4) popup_mup_playback_window_t1

0xb109,	// (0x0003a1b9) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003e592) popup_mup_playback_window_t

0xb140,	// (0x0003a1f0) main_image_pane_g1_ParamLimits

0xb140,	// (0x0003a1f0) main_image_pane_g1

0xb183,	// (0x0003a233) scroll_pane_cp018_ParamLimits

0xb183,	// (0x0003a233) scroll_pane_cp018

0xb19b,	// (0x0003a24b) scroll_pane_cp016_ParamLimits

0xb19b,	// (0x0003a24b) scroll_pane_cp016

0x3fca,	// (0x0003307a) smil2_image_pane_ParamLimits

0x3fca,	// (0x0003307a) smil2_image_pane

0x4000,	// (0x000330b0) smil2_root_pane_ParamLimits

0x4000,	// (0x000330b0) smil2_root_pane

0x4038,	// (0x000330e8) smil2_text_pane_ParamLimits

0x4038,	// (0x000330e8) smil2_text_pane

0xa085,	// (0x00039135) bg_list_pane_cp06

0xb1d7,	// (0x0003a287) grid_radio_pane

0xa085,	// (0x00039135) bg_popup_window_pane_cp06

0xb1e1,	// (0x0003a291) main_fmradio_pane_t1

0xac37,	// (0x00039ce7) heading_pane_cp04

0xb1ef,	// (0x0003a29f) main_fmradio_pane_t2

0xc1cb,	// (0x0003b27b) popup_cale_lunar_info_window_g1

0xb1fd,	// (0x0003a2ad) main_fmradio_pane_t3

0xc1d3,	// (0x0003b283) popup_cale_lunar_info_window_g2

0xb20d,	// (0x0003a2bd) main_fmradio_pane_t4

0x0001,

0xb21b,	// (0x0003a2cb) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003e66d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003e5a7) main_fmradio_pane_t

0xb229,	// (0x0003a2d9) wait_bar_pane_cp03

0xb231,	// (0x0003a2e1) cell_fmradio_pane_ParamLimits

0xb231,	// (0x0003a2e1) cell_fmradio_pane

0xb086,	// (0x0003a136) cell_fmradio_pane_g1_ParamLimits

0xb086,	// (0x0003a136) cell_fmradio_pane_g1

0xa085,	// (0x00039135) grid_highlight_pane_cp011

0xb246,	// (0x0003a2f6) poc_content_pane_ParamLimits

0xb246,	// (0x0003a2f6) poc_content_pane

0xb258,	// (0x0003a308) scroll_pane_cp019

0x40c8,	// (0x00033178) popup_call_poc_act_window_ParamLimits

0x40c8,	// (0x00033178) popup_call_poc_act_window

0x40ec,	// (0x0003319c) popup_call_poc_inact_window_ParamLimits

0x40ec,	// (0x0003319c) popup_call_poc_inact_window

0xf594,	// (0x0003e644) bg_popup_call_poc_act_pane_g

0xc143,	// (0x0003b1f3) bg_popup_call_poc_inact_pane_g1

0xc14b,	// (0x0003b1fb) bg_popup_call_poc_inact_pane_g2

0xb260,	// (0x0003a310) popup_call_poc_act_window_g2

0xc153,	// (0x0003b203) bg_popup_call_poc_inact_pane_g3

0xc15b,	// (0x0003b20b) bg_popup_call_poc_inact_pane_g4

0xc163,	// (0x0003b213) bg_popup_call_poc_inact_pane_g5

0xb268,	// (0x0003a318) popup_call_poc_act_window_t1_ParamLimits

0xb268,	// (0x0003a318) popup_call_poc_act_window_t1

0xb290,	// (0x0003a340) popup_call_poc_act_window_t2_ParamLimits

0xb290,	// (0x0003a340) popup_call_poc_act_window_t2

0xb2b8,	// (0x0003a368) popup_call_poc_act_window_t3_ParamLimits

0xb2b8,	// (0x0003a368) popup_call_poc_act_window_t3

0xb2e0,	// (0x0003a390) popup_call_poc_act_window_t4_ParamLimits

0xb2e0,	// (0x0003a390) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003e5b2) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003e5b2) popup_call_poc_act_window_t

0xc16b,	// (0x0003b21b) bg_popup_call_poc_inact_pane_g6

0xc173,	// (0x0003b223) bg_popup_call_poc_inact_pane_g7

0xc17b,	// (0x0003b22b) bg_popup_call_poc_inact_pane_g8

0xb2f2,	// (0x0003a3a2) popup_call_poc_inact_window_g2

0xc183,	// (0x0003b233) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003e631) bg_popup_call_poc_inact_pane_g

0xb2fa,	// (0x0003a3aa) popup_call_poc_inact_window_t1_ParamLimits

0xb2fa,	// (0x0003a3aa) popup_call_poc_inact_window_t1

0xb30f,	// (0x0003a3bf) popup_call_poc_inact_window_t2_ParamLimits

0xb30f,	// (0x0003a3bf) popup_call_poc_inact_window_t2

0xb324,	// (0x0003a3d4) popup_call_poc_inact_window_t3_ParamLimits

0xb324,	// (0x0003a3d4) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003e5bb) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003e5bb) popup_call_poc_inact_window_t

0xc35b,	// (0x0003b40b) context_pane_ParamLimits

0x4994,	// (0x00033a44) signal_pane_ParamLimits

0xa55b,	// (0x0003960b) main_call2_pane

0xc349,	// (0x0003b3f9) popup_phob_thumbnail2_window_ParamLimits

0xc349,	// (0x0003b3f9) popup_phob_thumbnail2_window

0x3cc6,	// (0x00032d76) aid_hotspot_pointer_arrow_pane

0x3cce,	// (0x00032d7e) aid_hotspot_pointer_hand_pane

0x4454,	// (0x00033504) phob_pre_status_pane_g5

0x1bff,	// (0x00030caf) cams_zoom_pane_ParamLimits

0x1c0e,	// (0x00030cbe) image_vga_pane_ParamLimits

0x1c28,	// (0x00030cd8) main_camera_pane_g1_ParamLimits

0x1c3a,	// (0x00030cea) main_camera_pane_g2_ParamLimits

0x1c4a,	// (0x00030cfa) main_camera_pane_g3_ParamLimits

0x1c5e,	// (0x00030d0e) main_camera_pane_g4_ParamLimits

0x1c72,	// (0x00030d22) main_camera_pane_g5_ParamLimits

0x1c86,	// (0x00030d36) main_camera_pane_g6_ParamLimits

0x1c9a,	// (0x00030d4a) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003e2ba) main_camera_pane_g_ParamLimits

0x1cae,	// (0x00030d5e) main_camera_pane_t1_ParamLimits

0x1cc4,	// (0x00030d74) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003e2cb) main_camera_pane_t_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_preview_window_pane_cp01

0xb339,	// (0x0003a3e9) popup_phob_thumbnail2_window_g1_ParamLimits

0xb339,	// (0x0003a3e9) popup_phob_thumbnail2_window_g1

0xa085,	// (0x00039135) call2_cli_visual_pane

0x4120,	// (0x000331d0) popup_call2_audio_conf_window_ParamLimits

0x4120,	// (0x000331d0) popup_call2_audio_conf_window

0x4148,	// (0x000331f8) popup_call2_audio_first_window_ParamLimits

0x4148,	// (0x000331f8) popup_call2_audio_first_window

0x41de,	// (0x0003328e) popup_call2_audio_in_window_ParamLimits

0x41de,	// (0x0003328e) popup_call2_audio_in_window

0x422a,	// (0x000332da) popup_call2_audio_out_window_ParamLimits

0x422a,	// (0x000332da) popup_call2_audio_out_window

0x429c,	// (0x0003334c) popup_call2_audio_second_window_ParamLimits

0x429c,	// (0x0003334c) popup_call2_audio_second_window

0x4302,	// (0x000333b2) popup_call2_audio_wait_window_ParamLimits

0x4302,	// (0x000333b2) popup_call2_audio_wait_window

0xa085,	// (0x00039135) bg_popup_call2_act_pane_cp03

0xa2c2,	// (0x00039372) list_conf_pane_cp

0xb345,	// (0x0003a3f5) popup_call2_audio_conf_window_t1

0xb353,	// (0x0003a403) list_single_graphic_popup_conf2_pane_ParamLimits

0xb353,	// (0x0003a403) list_single_graphic_popup_conf2_pane

0xaca6,	// (0x00039d56) list_highlight_pane_cp04

0xb366,	// (0x0003a416) list_single_graphic_popup_conf2_pane_g1

0xacb7,	// (0x00039d67) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003e5c2) list_single_graphic_popup_conf2_pane_g

0xb370,	// (0x0003a420) list_single_graphic_popup_conf2_pane_t1

0xb37e,	// (0x0003a42e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb37e,	// (0x0003a42e) bg_popup_call2_act_pane_cp01

0xb408,	// (0x0003a4b8) call_type_pane_cp05_ParamLimits

0xb408,	// (0x0003a4b8) call_type_pane_cp05

0xb45c,	// (0x0003a50c) popup_call2_audio_second_window_g1_ParamLimits

0xb45c,	// (0x0003a50c) popup_call2_audio_second_window_g1

0xb4b0,	// (0x0003a560) popup_call2_audio_second_window_g2_ParamLimits

0xb4b0,	// (0x0003a560) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003e5c7) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003e5c7) popup_call2_audio_second_window_g

0xb515,	// (0x0003a5c5) popup_call2_audio_second_window_t1_ParamLimits

0xb515,	// (0x0003a5c5) popup_call2_audio_second_window_t1

0xb5d0,	// (0x0003a680) popup_call2_audio_second_window_t2_ParamLimits

0xb5d0,	// (0x0003a680) popup_call2_audio_second_window_t2

0xb623,	// (0x0003a6d3) popup_call2_audio_second_window_t3_ParamLimits

0xb623,	// (0x0003a6d3) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003e5ce) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003e5ce) popup_call2_audio_second_window_t

0xa085,	// (0x00039135) bg_popup_call2_in_pane_cp02

0xa08f,	// (0x0003913f) call_type_pane_cp04

0xa097,	// (0x00039147) popup_call2_audio_wait_window_g1

0xa09f,	// (0x0003914f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003e1a9) popup_call2_audio_wait_window_g

0xa0a7,	// (0x00039157) popup_call2_audio_wait_window_t3

0xb716,	// (0x0003a7c6) bg_popup_call2_act_pane_ParamLimits

0xb716,	// (0x0003a7c6) bg_popup_call2_act_pane

0xb7d6,	// (0x0003a886) call_type_pane_cp03_ParamLimits

0xb7d6,	// (0x0003a886) call_type_pane_cp03

0xb83a,	// (0x0003a8ea) popup_call2_audio_first_window_g1_ParamLimits

0xb83a,	// (0x0003a8ea) popup_call2_audio_first_window_g1

0xb8aa,	// (0x0003a95a) popup_call2_audio_first_window_g2_ParamLimits

0xb8aa,	// (0x0003a95a) popup_call2_audio_first_window_g2

0xaf09,	// (0x00039fb9) popup_call2_audio_first_window_g3_ParamLimits

0xaf09,	// (0x00039fb9) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003e5d7) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003e5d7) popup_call2_audio_first_window_g

0xb988,	// (0x0003aa38) popup_call2_audio_first_window_t1_ParamLimits

0xb988,	// (0x0003aa38) popup_call2_audio_first_window_t1

0xba8b,	// (0x0003ab3b) popup_call2_audio_first_window_t4_ParamLimits

0xba8b,	// (0x0003ab3b) popup_call2_audio_first_window_t4

0xbb6e,	// (0x0003ac1e) popup_call2_audio_first_window_t5_ParamLimits

0xbb6e,	// (0x0003ac1e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003e5e2) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003e5e2) popup_call2_audio_first_window_t

0xa2d8,	// (0x00039388) bg_popup_call2_act_pane_g1

0xc1dd,	// (0x0003b28d) popup_cale_lunar_info_window_t1

0xc1eb,	// (0x0003b29b) popup_cale_lunar_info_window_t2

0xc1f9,	// (0x0003b2a9) popup_cale_lunar_info_window_t3

0xa085,	// (0x00039135) bg_popup_call2_bubble_pane

0xbc6f,	// (0x0003ad1f) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc6f,	// (0x0003ad1f) bg_popup_call2_in_pane_cp01

0x9d61,	// (0x00038e11) call_type_pane_cp02

0xbcb7,	// (0x0003ad67) popup_call2_audio_out_window_g1_ParamLimits

0xbcb7,	// (0x0003ad67) popup_call2_audio_out_window_g1

0xbce3,	// (0x0003ad93) popup_call2_audio_out_window_g2_ParamLimits

0xbce3,	// (0x0003ad93) popup_call2_audio_out_window_g2

0xbd0b,	// (0x0003adbb) popup_call2_audio_out_window_g3_ParamLimits

0xbd0b,	// (0x0003adbb) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003e5eb) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003e5eb) popup_call2_audio_out_window_g

0xbd46,	// (0x0003adf6) popup_call2_audio_out_window_t1_ParamLimits

0xbd46,	// (0x0003adf6) popup_call2_audio_out_window_t1

0xbda5,	// (0x0003ae55) popup_call2_audio_out_window_t2_ParamLimits

0xbda5,	// (0x0003ae55) popup_call2_audio_out_window_t2

0xbdf9,	// (0x0003aea9) popup_call2_audio_out_window_t3_ParamLimits

0xbdf9,	// (0x0003aea9) popup_call2_audio_out_window_t3

0xbe0f,	// (0x0003aebf) popup_call2_audio_out_window_t4_ParamLimits

0xbe0f,	// (0x0003aebf) popup_call2_audio_out_window_t4

0xbe25,	// (0x0003aed5) popup_call2_audio_out_window_t5_ParamLimits

0xbe25,	// (0x0003aed5) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003e5f4) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003e5f4) popup_call2_audio_out_window_t

0xbe89,	// (0x0003af39) bg_popup_call2_in_pane_ParamLimits

0xbe89,	// (0x0003af39) bg_popup_call2_in_pane

0xbee5,	// (0x0003af95) popup_call2_audio_in_window_g1_ParamLimits

0xbee5,	// (0x0003af95) popup_call2_audio_in_window_g1

0xbf1d,	// (0x0003afcd) popup_call2_audio_in_window_g2_ParamLimits

0xbf1d,	// (0x0003afcd) popup_call2_audio_in_window_g2

0xbf55,	// (0x0003b005) popup_call2_audio_in_window_g3_ParamLimits

0xbf55,	// (0x0003b005) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003e601) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003e601) popup_call2_audio_in_window_g

0xbfad,	// (0x0003b05d) popup_call2_audio_in_window_t1_ParamLimits

0xbfad,	// (0x0003b05d) popup_call2_audio_in_window_t1

0xc02d,	// (0x0003b0dd) popup_call2_audio_in_window_t2_ParamLimits

0xc02d,	// (0x0003b0dd) popup_call2_audio_in_window_t2

0xc0ad,	// (0x0003b15d) popup_call2_audio_in_window_t3_ParamLimits

0xc0ad,	// (0x0003b15d) popup_call2_audio_in_window_t3

0xc0c7,	// (0x0003b177) popup_call2_audio_in_window_t4_ParamLimits

0xc0c7,	// (0x0003b177) popup_call2_audio_in_window_t4

0xc0d9,	// (0x0003b189) popup_call2_audio_in_window_t5_ParamLimits

0xc0d9,	// (0x0003b189) popup_call2_audio_in_window_t5

0xc0ee,	// (0x0003b19e) popup_call2_audio_in_window_t6_ParamLimits

0xc0ee,	// (0x0003b19e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003e60a) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003e60a) popup_call2_audio_in_window_t

0xa2d8,	// (0x00039388) bg_popup_call2_in_pane_g1

0xc207,	// (0x0003b2b7) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003e672) popup_cale_lunar_info_window_t

0xa2e0,	// (0x00039390) bg_popup_call2_rect_pane_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_call2_rect_pane

0xa085,	// (0x00039135) call2_cli_visual_graphic_pane

0xa085,	// (0x00039135) call2_cli_visual_text_pane

0x4a23,	// (0x00033ad3) smil_status_volume_pane_g3

0x0002,

0xa3fa,	// (0x000394aa) call2_cli_visual_graphic_pane_g1

0xa3fa,	// (0x000394aa) call2_cli_visual_graphic_pane_g2

0xa3fa,	// (0x000394aa) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003e617) call2_cli_visual_graphic_pane_g

0xc103,	// (0x0003b1b3) bg_popup_call2_rect_pane_g1

0xa498,	// (0x00039548) bg_popup_call2_rect_pane_g2

0xc10b,	// (0x0003b1bb) bg_popup_call2_rect_pane_g3

0xc113,	// (0x0003b1c3) bg_popup_call2_rect_pane_g4

0xc11b,	// (0x0003b1cb) bg_popup_call2_rect_pane_g5

0xc123,	// (0x0003b1d3) bg_popup_call2_rect_pane_g6

0xc12b,	// (0x0003b1db) bg_popup_call2_rect_pane_g7

0xc133,	// (0x0003b1e3) bg_popup_call2_rect_pane_g8

0xc13b,	// (0x0003b1eb) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003e61e) bg_popup_call2_rect_pane_g

0xc143,	// (0x0003b1f3) bg_popup_call2_bubble_pane_g1

0xc14b,	// (0x0003b1fb) bg_popup_call2_bubble_pane_g2

0xc153,	// (0x0003b203) bg_popup_call2_bubble_pane_g3

0xc15b,	// (0x0003b20b) bg_popup_call2_bubble_pane_g4

0xc163,	// (0x0003b213) bg_popup_call2_bubble_pane_g5

0xc16b,	// (0x0003b21b) bg_popup_call2_bubble_pane_g6

0xc173,	// (0x0003b223) bg_popup_call2_bubble_pane_g7

0xc17b,	// (0x0003b22b) bg_popup_call2_bubble_pane_g8

0xc183,	// (0x0003b233) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003e631) bg_popup_call2_bubble_pane_g

0x1545,	// (0x000305f5) aid_cale_week_size_cell_pane

0x1cde,	// (0x00030d8e) aid_cams_cif_uncrop_pane_ParamLimits

0x1cde,	// (0x00030d8e) aid_cams_cif_uncrop_pane

0x1e97,	// (0x00030f47) aid_cams_size_cell_ParamLimits

0x1e97,	// (0x00030f47) aid_cams_size_cell

0x1eab,	// (0x00030f5b) grid_cams_pane_ParamLimits

0x1ec5,	// (0x00030f75) linegrid_cams_pane_ParamLimits

0x20a5,	// (0x00031155) call_video_pane_t1

0x20bf,	// (0x0003116f) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003e31e) call_video_pane_t

0x24f3,	// (0x000315a3) aid_cale_month_size_cell_pane_ParamLimits

0x24f3,	// (0x000315a3) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003e6bb) smil_status_volume_pane_g

0x4a30,	// (0x00033ae0) volume_smil_pane_ParamLimits

0x9c15,	// (0x00038cc5) aid_popup2_width_pane

0x144d,	// (0x000304fd) cell_qdial_pane_g4_ParamLimits

0x144d,	// (0x000304fd) cell_qdial_pane_g4

0x35b6,	// (0x00032666) aid_blid_cardinal_pane_ParamLimits

0x35c2,	// (0x00032672) aid_blid_destination_pane_ParamLimits

0x35c2,	// (0x00032672) aid_blid_destination_pane

0xa2e0,	// (0x00039390) bg_popup_call_poc_act_pane_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_call_poc_act_pane

0xa2e0,	// (0x00039390) bg_popup_call_poc_inact_pane_ParamLimits

0xa2e0,	// (0x00039390) bg_popup_call_poc_inact_pane

0xc18b,	// (0x0003b23b) bg_popup_call_poc_act_pane_g1

0xc193,	// (0x0003b243) bg_popup_call_poc_act_pane_g2

0xc19b,	// (0x0003b24b) bg_popup_call_poc_act_pane_g3

0xc15b,	// (0x0003b20b) bg_popup_call_poc_act_pane_g4

0xc163,	// (0x0003b213) bg_popup_call_poc_act_pane_g5

0xc1a3,	// (0x0003b253) bg_popup_call_poc_act_pane_g6

0xc173,	// (0x0003b223) bg_popup_call_poc_act_pane_g7

0xc1ab,	// (0x0003b25b) bg_popup_call_poc_act_pane_g8

0xa085,	// (0x00039135) main_usb_pane

0xc320,	// (0x0003b3d0) popup_cale_lunar_info_window

0x2388,	// (0x00031438) im_reading_pane_t1_ParamLimits

0xa660,	// (0x00039710) list_im_pane_ParamLimits

0xa671,	// (0x00039721) scroll_pane_cp07_ParamLimits

0xa085,	// (0x00039135) grid_highlight_pane_cp012

0xa2e0,	// (0x00039390) mup_scale_pane_ParamLimits

0xb086,	// (0x0003a136) main_usb_pane_g1_ParamLimits

0xb086,	// (0x0003a136) main_usb_pane_g1

0x4360,	// (0x00033410) main_usb_pane_g2_ParamLimits

0x4360,	// (0x00033410) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003e65b) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003e65b) main_usb_pane_g

0x4376,	// (0x00033426) main_usb_pane_t1_ParamLimits

0x4376,	// (0x00033426) main_usb_pane_t1

0x4388,	// (0x00033438) main_usb_pane_t2_ParamLimits

0x4388,	// (0x00033438) main_usb_pane_t2

0x439a,	// (0x0003344a) main_usb_pane_t3_ParamLimits

0x439a,	// (0x0003344a) main_usb_pane_t3

0x43ac,	// (0x0003345c) main_usb_pane_t4_ParamLimits

0x43ac,	// (0x0003345c) main_usb_pane_t4

0x43c1,	// (0x00033471) main_usb_pane_t5_ParamLimits

0x43c1,	// (0x00033471) main_usb_pane_t5

0x43d6,	// (0x00033486) main_usb_pane_t6_ParamLimits

0x43d6,	// (0x00033486) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003e660) main_usb_pane_t_ParamLimits

0x3557,	// (0x00032607) aid_text_placing

0x3562,	// (0x00032612) main_location2_pane_t1_ParamLimits

0x3576,	// (0x00032626) main_location2_pane_t2_ParamLimits

0x358c,	// (0x0003263c) main_location2_pane_t3_ParamLimits

0x35a2,	// (0x00032652) main_location2_pane_t4_ParamLimits

0x35a2,	// (0x00032652) main_location2_pane_t4

0xf3cf,	// (0x0003e47f) main_location2_pane_t_ParamLimits

0xa31c,	// (0x000393cc) find_pinb_pane_g2_ParamLimits

0xa31c,	// (0x000393cc) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003e1cf) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003e1cf) find_pinb_pane_g

0xa328,	// (0x000393d8) find_pinb_pane_t1_ParamLimits

0xa33a,	// (0x000393ea) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003e1d4) find_pinb_pane_t_ParamLimits

0xa085,	// (0x00039135) main_call3_pane

0x2ac2,	// (0x00031b72) cale_month_day_heading_pane_t1_ParamLimits

0x2b48,	// (0x00031bf8) cale_month_day_heading_pane_t2_ParamLimits

0x2bd9,	// (0x00031c89) cale_month_day_heading_pane_t3_ParamLimits

0x2c6a,	// (0x00031d1a) cale_month_day_heading_pane_t4_ParamLimits

0x2cfb,	// (0x00031dab) cale_month_day_heading_pane_t5_ParamLimits

0x2d9c,	// (0x00031e4c) cale_month_day_heading_pane_t6_ParamLimits

0x2e41,	// (0x00031ef1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003e356) cale_month_day_heading_pane_t_ParamLimits

0x3109,	// (0x000321b9) smil_status_volume_pane

0x3e1d,	// (0x00032ecd) postcard_address_pane_ParamLimits

0x3e1d,	// (0x00032ecd) postcard_address_pane

0x3e33,	// (0x00032ee3) postcard_message_pane_ParamLimits

0x3e33,	// (0x00032ee3) postcard_message_pane

0x433c,	// (0x000333ec) call2_cli_visual_pane_t1_ParamLimits

0x433c,	// (0x000333ec) call2_cli_visual_pane_t1

0x4bed,	// (0x00033c9d) postcard_message_pane_t1_ParamLimits

0x4bed,	// (0x00033c9d) postcard_message_pane_t1

0x4bd6,	// (0x00033c86) postcard_address_pane_t1_ParamLimits

0x4bd6,	// (0x00033c86) postcard_address_pane_t1

0x4bc2,	// (0x00033c72) popup_call3_audio_in_window_ParamLimits

0x4bc2,	// (0x00033c72) popup_call3_audio_in_window

0x4a47,	// (0x00033af7) bg_popup_call3_in_pane_ParamLimits

0x4a47,	// (0x00033af7) bg_popup_call3_in_pane

0x4ac3,	// (0x00033b73) popup_call3_audio_in_window_g1_ParamLimits

0x4ac3,	// (0x00033b73) popup_call3_audio_in_window_g1

0x4ae3,	// (0x00033b93) popup_call3_audio_in_window_g2_ParamLimits

0x4ae3,	// (0x00033b93) popup_call3_audio_in_window_g2

0x4b03,	// (0x00033bb3) popup_call3_audio_in_window_g3_ParamLimits

0x4b03,	// (0x00033bb3) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003e6c2) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003e6c2) popup_call3_audio_in_window_g

0x4b34,	// (0x00033be4) popup_call3_audio_in_window_t1_ParamLimits

0x4b34,	// (0x00033be4) popup_call3_audio_in_window_t1

0x4b72,	// (0x00033c22) popup_call3_audio_in_window_t2_ParamLimits

0x4b72,	// (0x00033c22) popup_call3_audio_in_window_t2

0x4bb0,	// (0x00033c60) popup_call3_audio_in_window_t3_ParamLimits

0x4bb0,	// (0x00033c60) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003e6cb) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003e6cb) popup_call3_audio_in_window_t

0xa55b,	// (0x0003960b) bg_popup_call3_rect_pane

0xc103,	// (0x0003b1b3) bg_popup_call3_rect_pane_g1

0xa498,	// (0x00039548) bg_popup_call3_rect_pane_g2

0xc10b,	// (0x0003b1bb) bg_popup_call3_rect_pane_g3

0xc113,	// (0x0003b1c3) bg_popup_call3_rect_pane_g4

0xc11b,	// (0x0003b1cb) bg_popup_call3_rect_pane_g5

0xc123,	// (0x0003b1d3) bg_popup_call3_rect_pane_g6

0xc12b,	// (0x0003b1db) bg_popup_call3_rect_pane_g7

0x39ce,	// (0x00032a7e) mup_visualizer_osc_pane

0xaf56,	// (0x0003a006) mup_visualizer_spec_pane

0x4a77,	// (0x00033b27) call3_video_qcif_pane_ParamLimits

0x4a77,	// (0x00033b27) call3_video_qcif_pane

0x4a8a,	// (0x00033b3a) call3_video_qcif_uncrop_pane_ParamLimits

0x4a8a,	// (0x00033b3a) call3_video_qcif_uncrop_pane

0x4a9a,	// (0x00033b4a) call3_video_subqcif_pane_ParamLimits

0x4a9a,	// (0x00033b4a) call3_video_subqcif_pane

0x4ab0,	// (0x00033b60) call3_video_subqcif_uncrop_pane_ParamLimits

0x4ab0,	// (0x00033b60) call3_video_subqcif_uncrop_pane

0x4b23,	// (0x00033bd3) popup_call3_audio_in_window_g4_ParamLimits

0x4b23,	// (0x00033bd3) popup_call3_audio_in_window_g4

0x4a12,	// (0x00033ac2) mup_spec_half_pane

0x4a1b,	// (0x00033acb) mup_spec_half_pane_cp

0xc3bb,	// (0x0003b46b) mup_osc_middle_pane

0xc3c4,	// (0x0003b474) mup_visualizer_osc_pane_g1

0x49f2,	// (0x00033aa2) mup_spec_bar_pane_ParamLimits

0x49f2,	// (0x00033aa2) mup_spec_bar_pane

0xc3a8,	// (0x0003b458) mup_spec_bar_pane_g1

0xc3b2,	// (0x0003b462) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e6b6) mup_spec_bar_pane_g

0x1545,	// (0x000305f5) aid_cale_week_size_cell_pane_ParamLimits

0x155f,	// (0x0003060f) bg_cale_heading_pane_ParamLimits

0x1588,	// (0x00030638) bg_cale_pane_cp01_ParamLimits

0x15aa,	// (0x0003065a) cale_week_corner_pane_ParamLimits

0x15c9,	// (0x00030679) cale_week_day_heading_pane_ParamLimits

0x15f7,	// (0x000306a7) cale_week_scroll_pane_g1_ParamLimits

0x161b,	// (0x000306cb) cale_week_scroll_pane_g2_ParamLimits

0x1633,	// (0x000306e3) cale_week_scroll_pane_g3_ParamLimits

0x164b,	// (0x000306fb) cale_week_scroll_pane_g4_ParamLimits

0x1667,	// (0x00030717) cale_week_scroll_pane_g5_ParamLimits

0x1687,	// (0x00030737) cale_week_scroll_pane_g6_ParamLimits

0x16a7,	// (0x00030757) cale_week_scroll_pane_g7_ParamLimits

0x16cb,	// (0x0003077b) cale_week_scroll_pane_g8_ParamLimits

0x16ef,	// (0x0003079f) cale_week_scroll_pane_g9_ParamLimits

0x170c,	// (0x000307bc) cale_week_scroll_pane_g10_ParamLimits

0x1729,	// (0x000307d9) cale_week_scroll_pane_g11_ParamLimits

0x1746,	// (0x000307f6) cale_week_scroll_pane_g12_ParamLimits

0x1763,	// (0x00030813) cale_week_scroll_pane_g13_ParamLimits

0x1780,	// (0x00030830) cale_week_scroll_pane_g14_ParamLimits

0x17a9,	// (0x00030859) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003e260) cale_week_scroll_pane_g_ParamLimits

0x17f6,	// (0x000308a6) cale_week_time_pane_ParamLimits

0x181a,	// (0x000308ca) grid_cale_week_pane_ParamLimits

0xa4cc,	// (0x0003957c) listscroll_cale_week_pane_t1

0xa4de,	// (0x0003958e) scroll_pane_cp08_ParamLimits

0x2560,	// (0x00031610) cale_month_corner_pane_ParamLimits

0xa891,	// (0x00039941) cale_month_pane_t1

0x2a48,	// (0x00031af8) cale_month_week_pane_ParamLimits

0x3316,	// (0x000323c6) popup_call_status_window_g1_ParamLimits

0x332a,	// (0x000323da) popup_call_status_window_g2_ParamLimits

0x333e,	// (0x000323ee) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003e406) popup_call_status_window_g_ParamLimits

0xac27,	// (0x00039cd7) aid_call2_pane

0x3c87,	// (0x00032d37) msg_header_pane_g1

0x3e1d,	// (0x00032ecd) postcard_address2_pane_ParamLimits

0x3e1d,	// (0x00032ecd) postcard_address2_pane

0x3e33,	// (0x00032ee3) postcard_message2_pane_ParamLimits

0x3e33,	// (0x00032ee3) postcard_message2_pane

0x49a2,	// (0x00033a52) message2_row_pane_ParamLimits

0x49a2,	// (0x00033a52) message2_row_pane

0x49bf,	// (0x00033a6f) address2_row_pane_ParamLimits

0x49bf,	// (0x00033a6f) address2_row_pane

0xc376,	// (0x0003b426) postcard_message2_row_pane_g1

0xc37e,	// (0x0003b42e) postcard_message2_row_pane_t1

0xc376,	// (0x0003b426) address2_row_pane_g1

0xc37e,	// (0x0003b42e) address2_row_pane_t1

0x1b70,	// (0x00030c20) aid_size_cell_vorec

0xa085,	// (0x00039135) main_rss_pane

0x49d2,	// (0x00033a82) rss_list_single_pane_ParamLimits

0x49d2,	// (0x00033a82) rss_list_single_pane

0xc38c,	// (0x0003b43c) rss_list_single_pane_t1

0xc39a,	// (0x0003b44a) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003e6b1) rss_list_single_pane_t

0xa085,	// (0x00039135) main_camera2_pane

0xa085,	// (0x00039135) main_video2_pane

0xff3d,	// (0x0002efed) cams_zoom_pane_cp2_ParamLimits

0xff3d,	// (0x0002efed) cams_zoom_pane_cp2

0xff54,	// (0x0002f004) image2_vga_pane_ParamLimits

0xff54,	// (0x0002f004) image2_vga_pane

0xff9c,	// (0x0002f04c) main_camera2_pane_g1_ParamLimits

0xff9c,	// (0x0002f04c) main_camera2_pane_g1

0xffbc,	// (0x0002f06c) main_camera2_pane_g2_ParamLimits

0xffbc,	// (0x0002f06c) main_camera2_pane_g2

0xffd3,	// (0x0002f083) main_camera2_pane_g3_ParamLimits

0xffd3,	// (0x0002f083) main_camera2_pane_g3

0xffea,	// (0x0002f09a) main_camera2_pane_g4_ParamLimits

0xffea,	// (0x0002f09a) main_camera2_pane_g4

0x0001,	// (0x0002f0b1) main_camera2_pane_g5_ParamLimits

0x0001,	// (0x0002f0b1) main_camera2_pane_g5

0x0018,	// (0x0002f0c8) main_camera2_pane_g6_ParamLimits

0x0018,	// (0x0002f0c8) main_camera2_pane_g6

0x002f,	// (0x0002f0df) main_camera2_pane_g7_ParamLimits

0x002f,	// (0x0002f0df) main_camera2_pane_g7

0x0046,	// (0x0002f0f6) main_camera2_pane_g8_ParamLimits

0x0046,	// (0x0002f0f6) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003e6d2) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003e6d2) main_camera2_pane_g

0x0074,	// (0x0002f124) main_camera2_pane_t1_ParamLimits

0x0074,	// (0x0002f124) main_camera2_pane_t1

0x00a9,	// (0x0002f159) main_camera2_pane_t2_ParamLimits

0x00a9,	// (0x0002f159) main_camera2_pane_t2

0x00c6,	// (0x0002f176) main_camera2_pane_t3_ParamLimits

0x00c6,	// (0x0002f176) main_camera2_pane_t3

0x0124,	// (0x0002f1d4) main_camera2_pane_t4_ParamLimits

0x0124,	// (0x0002f1d4) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003e6e5) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003e6e5) main_camera2_pane_t

0x01ad,	// (0x0002f25d) cams_zoom_pane_cp4_ParamLimits

0x01ad,	// (0x0002f25d) cams_zoom_pane_cp4

0x01c3,	// (0x0002f273) image2_cif_pane_ParamLimits

0x01c3,	// (0x0002f273) image2_cif_pane

0x01ee,	// (0x0002f29e) image2_subqcif_pane_ParamLimits

0x01ee,	// (0x0002f29e) image2_subqcif_pane

0x0209,	// (0x0002f2b9) main_video2_pane_g1_ParamLimits

0x0209,	// (0x0002f2b9) main_video2_pane_g1

0x0223,	// (0x0002f2d3) main_video2_pane_g2_ParamLimits

0x0223,	// (0x0002f2d3) main_video2_pane_g2

0x0239,	// (0x0002f2e9) main_video2_pane_g3_ParamLimits

0x0239,	// (0x0002f2e9) main_video2_pane_g3

0x024f,	// (0x0002f2ff) main_video2_pane_g4_ParamLimits

0x024f,	// (0x0002f2ff) main_video2_pane_g4

0x0265,	// (0x0002f315) main_video2_pane_g5_ParamLimits

0x0265,	// (0x0002f315) main_video2_pane_g5

0x027b,	// (0x0002f32b) main_video2_pane_g6_ParamLimits

0x027b,	// (0x0002f32b) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003e6f4) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003e6f4) main_video2_pane_g

0x0295,	// (0x0002f345) main_video2_pane_t1_ParamLimits

0x0295,	// (0x0002f345) main_video2_pane_t1

0x02b9,	// (0x0002f369) main_video2_pane_t2_ParamLimits

0x02b9,	// (0x0002f369) main_video2_pane_t2

0x0309,	// (0x0002f3b9) main_video2_pane_t3_ParamLimits

0x0309,	// (0x0002f3b9) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003e701) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003e701) main_video2_pane_t

0x4494,	// (0x00033544) call_muted_g2

0x0001,

0xf5f3,	// (0x0003e6a3) call_muted_g

0xa085,	// (0x00039135) main_mup2_pane

0x4c33,	// (0x00033ce3) main_mup2_pane_g1_ParamLimits

0x4c33,	// (0x00033ce3) main_mup2_pane_g1

0x4c3f,	// (0x00033cef) main_mup2_pane_g2_ParamLimits

0x4c3f,	// (0x00033cef) main_mup2_pane_g2

0x4eb2,	// (0x00033f62) main_mup_pane_g13_cp1

0x4eba,	// (0x00033f6a) mup_volume_pane_cp1

0x4c5d,	// (0x00033d0d) main_mup2_pane_g4_ParamLimits

0x4c5d,	// (0x00033d0d) main_mup2_pane_g4

0x4c6f,	// (0x00033d1f) main_mup2_pane_g5_ParamLimits

0x4c6f,	// (0x00033d1f) main_mup2_pane_g5

0x4c81,	// (0x00033d31) main_mup2_pane_g6_ParamLimits

0x4c81,	// (0x00033d31) main_mup2_pane_g6

0x4c93,	// (0x00033d43) main_mup2_pane_g7_ParamLimits

0x4c93,	// (0x00033d43) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003e708) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003e708) main_mup2_pane_g

0x4cab,	// (0x00033d5b) main_mup2_pane_t1_ParamLimits

0x4cab,	// (0x00033d5b) main_mup2_pane_t1

0x4cc1,	// (0x00033d71) main_mup2_pane_t2_ParamLimits

0x4cc1,	// (0x00033d71) main_mup2_pane_t2

0x4cd7,	// (0x00033d87) main_mup2_pane_t3_ParamLimits

0x4cd7,	// (0x00033d87) main_mup2_pane_t3

0x4ced,	// (0x00033d9d) main_mup2_pane_t4_ParamLimits

0x4ced,	// (0x00033d9d) main_mup2_pane_t4

0x4d05,	// (0x00033db5) main_mup2_pane_t5_ParamLimits

0x4d05,	// (0x00033db5) main_mup2_pane_t5

0x4d1d,	// (0x00033dcd) main_mup2_pane_t6_ParamLimits

0x4d1d,	// (0x00033dcd) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003e717) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003e717) main_mup2_pane_t

0x4d4d,	// (0x00033dfd) mup2_visualizer_pane_ParamLimits

0x4d4d,	// (0x00033dfd) mup2_visualizer_pane

0x4d7b,	// (0x00033e2b) mup_progress_pane_cp_ParamLimits

0x4d7b,	// (0x00033e2b) mup_progress_pane_cp

0x4e9d,	// (0x00033f4d) mup_volume_pane_cp_ParamLimits

0x4e9d,	// (0x00033f4d) mup_volume_pane_cp

0x4d91,	// (0x00033e41) mup2_visualizer_pane_g1_ParamLimits

0x4d91,	// (0x00033e41) mup2_visualizer_pane_g1

0xc3fb,	// (0x0003b4ab) mup2_visualizer_pane_g2_ParamLimits

0xc3fb,	// (0x0003b4ab) mup2_visualizer_pane_g2

0x4da8,	// (0x00033e58) mup2_visualizer_pane_g3_ParamLimits

0x4da8,	// (0x00033e58) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003e724) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003e724) mup2_visualizer_pane_g

0xb1cf,	// (0x0003a27f) aid_size_cell_fmradio

0x4644,	// (0x000336f4) aid_height_parent_landcape

0xa6ef,	// (0x0003979f) wml_content_pane_cp

0xa6f7,	// (0x000397a7) wml_tabs_pane

0xa700,	// (0x000397b0) popup_wml_miniature_window

0xa708,	// (0x000397b8) scroll_pane_cp021

0xa71c,	// (0x000397cc) wml_content_pane_comp8

0xa085,	// (0x00039135) bg_popup_sub_pane_cp05

0xc419,	// (0x0003b4c9) popup_wml_miniature_window_g1

0xc421,	// (0x0003b4d1) wml_miniature_view_pane

0x4db4,	// (0x00033e64) aid_size_wml_view

0x4dbc,	// (0x00033e6c) wml_miniature_view_pane_g1

0x4dc5,	// (0x00033e75) wml_miniature_view_pane_g2

0x4dce,	// (0x00033e7e) wml_miniature_view_pane_g3

0x4dd6,	// (0x00033e86) wml_miniature_view_pane_g4

0x4dde,	// (0x00033e8e) wml_miniature_view_pane_g5

0x4de6,	// (0x00033e96) wml_miniature_view_pane_g6

0x4dee,	// (0x00033e9e) wml_miniature_view_pane_g7

0x4df6,	// (0x00033ea6) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003e72b) wml_miniature_view_pane_g

0xc429,	// (0x0003b4d9) background_graphic_ParamLimits

0xc429,	// (0x0003b4d9) background_graphic

0xc435,	// (0x0003b4e5) wml_tabs_2_pane

0xc43e,	// (0x0003b4ee) wml_tabs_3_pane_ParamLimits

0xc43e,	// (0x0003b4ee) wml_tabs_3_pane

0xc450,	// (0x0003b500) wml_tabs_4_pane_ParamLimits

0xc450,	// (0x0003b500) wml_tabs_4_pane

0xc466,	// (0x0003b516) wml_tabs_5_pane_ParamLimits

0xc466,	// (0x0003b516) wml_tabs_5_pane

0xc480,	// (0x0003b530) wml_tabs_pane_g2_ParamLimits

0xc480,	// (0x0003b530) wml_tabs_pane_g2

0xc494,	// (0x0003b544) wml_tabs_pane_g3_ParamLimits

0xc494,	// (0x0003b544) wml_tabs_pane_g3

0x4dfe,	// (0x00033eae) wml_tabs_2_active_pane_ParamLimits

0x4dfe,	// (0x00033eae) wml_tabs_2_active_pane

0x4e12,	// (0x00033ec2) wml_tabs_2_passive_pane_ParamLimits

0x4e12,	// (0x00033ec2) wml_tabs_2_passive_pane

0x4e26,	// (0x00033ed6) wml_tabs_3_active_pane_cp_ParamLimits

0x4e26,	// (0x00033ed6) wml_tabs_3_active_pane_cp

0x4e3b,	// (0x00033eeb) wml_tabs_3_passive_pane_ParamLimits

0x4e3b,	// (0x00033eeb) wml_tabs_3_passive_pane

0x4e4e,	// (0x00033efe) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e4e,	// (0x00033efe) wml_tabs_3_passive_pane_cp

0x4e65,	// (0x00033f15) tabs_4_active_pane

0x4e6d,	// (0x00033f1d) tabs_4_passive_pane

0x4e77,	// (0x00033f27) tabs_4_passive_pane_cp

0x4e7f,	// (0x00033f2f) tabs_4_passive_pane_cp2

0x4358,	// (0x00033408) aid_height_text

0x39a0,	// (0x00032a50) mup_volume_cont_pane_ParamLimits

0x39a0,	// (0x00032a50) mup_volume_cont_pane

0x11be,	// (0x0003026e) aid_size_cell_pinb

0x11c8,	// (0x00030278) aid_size_list_pinb

0x4d67,	// (0x00033e17) mup2_volume_cont_pane_ParamLimits

0x4d67,	// (0x00033e17) mup2_volume_cont_pane

0x4e89,	// (0x00033f39) mup2_volume_cont_pane_g1_ParamLimits

0x4e89,	// (0x00033f39) mup2_volume_cont_pane_g1

0x0e7e,	// (0x0002ff2e) aid_size_cell_touch_ParamLimits

0x0e7e,	// (0x0002ff2e) aid_size_cell_touch

0x10ae,	// (0x0003015e) touch_pane_ParamLimits

0x10ae,	// (0x0003015e) touch_pane

0x9c03,	// (0x00038cb3) main_rss2_pane

0xc4b1,	// (0x0003b561) listscroll_rss2_pane

0xc4ba,	// (0x0003b56a) rss2_navigation_pane

0xc4c2,	// (0x0003b572) list_rss2_pane

0xad4b,	// (0x00039dfb) scroll_pane_cp22

0xc4ca,	// (0x0003b57a) rss2_navigation_pane_g1

0xc4d3,	// (0x0003b583) rss2_navigation_pane_g2

0xc4db,	// (0x0003b58b) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003e73c) rss2_navigation_pane_g

0xc4e3,	// (0x0003b593) rss2_navigation_pane_t1

0x4ec2,	// (0x00033f72) rss2_list_single_pane_ParamLimits

0x4ec2,	// (0x00033f72) rss2_list_single_pane

0xc4f1,	// (0x0003b5a1) rss2_list_single_pane_t2

0xc4ff,	// (0x0003b5af) rss2_list_single_pane_t3_ParamLimits

0xc4ff,	// (0x0003b5af) rss2_list_single_pane_t3

0xc51c,	// (0x0003b5cc) rss2_list_single_pane_t4

0x30f1,	// (0x000321a1) smil_status_pane_g1

0x9c64,	// (0x00038d14) main_image2_pane_ParamLimits

0x9c64,	// (0x00038d14) main_image2_pane

0x005d,	// (0x0002f10d) main_camera2_pane_g9_ParamLimits

0x005d,	// (0x0002f10d) main_camera2_pane_g9

0x0179,	// (0x0002f229) main_camera2_pane_t5_ParamLimits

0x0179,	// (0x0002f229) main_camera2_pane_t5

0x4c08,	// (0x00033cb8) main_camera2_pane_t6_ParamLimits

0x4c08,	// (0x00033cb8) main_camera2_pane_t6

0x4ed8,	// (0x00033f88) main_image2_pane_g1_ParamLimits

0x4ed8,	// (0x00033f88) main_image2_pane_g1

0x4072,	// (0x00033122) smil2_video_pane_ParamLimits

0x4072,	// (0x00033122) smil2_video_pane

0x9c21,	// (0x00038cd1) aid_zoom_text_primary_cp

0x9c5a,	// (0x00038d0a) popup_preview_fixed_window

0xa658,	// (0x00039708) im_reading_pane_g1

0xff2f,	// (0x0002efdf) cams2_bc_adjust_pane_cp_ParamLimits

0xff2f,	// (0x0002efdf) cams2_bc_adjust_pane_cp

0x019f,	// (0x0002f24f) cams2_bc_adjust_pane_ParamLimits

0x019f,	// (0x0002f24f) cams2_bc_adjust_pane

0xc52a,	// (0x0003b5da) cams2_bc_adjust_pane_g1

0x4eee,	// (0x00033f9e) cams2_slider_pane

0x4ef7,	// (0x00033fa7) cams2_slider_pane_g1

0x4f00,	// (0x00033fb0) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003e743) cams2_slider_pane_g

0xfb9b,	// (0x0002ec4b) calc_display_pane_ParamLimits

0xfbc3,	// (0x0002ec73) calc_paper_pane_ParamLimits

0xfbe6,	// (0x0002ec96) grid_calc_pane_ParamLimits

0x33a0,	// (0x00032450) popup_clock_digital_window_t1_ParamLimits

0xb16c,	// (0x0003a21c) main_image_pane_t1

0xfb7d,	// (0x0002ec2d) aid_size_cell_calc_ParamLimits

0xfb7d,	// (0x0002ec2d) aid_size_cell_calc

0x468a,	// (0x0003373a) popup_blid_sat_info2_window_ParamLimits

0x468a,	// (0x0003373a) popup_blid_sat_info2_window

0xc53a,	// (0x0003b5ea) aid_size_cell_blid

0xc542,	// (0x0003b5f2) bg_popup_window_pane_cp07

0xc565,	// (0x0003b615) grid_popup_blid_pane

0xc56f,	// (0x0003b61f) heading_pane_cp05_ParamLimits

0xc56f,	// (0x0003b61f) heading_pane_cp05

0xc639,	// (0x0003b6e9) cell_popup_blid_pane_ParamLimits

0xc639,	// (0x0003b6e9) cell_popup_blid_pane

0xc663,	// (0x0003b713) cell_popup_blid_pane_g1

0xc66b,	// (0x0003b71b) cell_popup_blid_pane_t1

0x4d37,	// (0x00033de7) mup2_indicator_pane_ParamLimits

0x4d37,	// (0x00033de7) mup2_indicator_pane

0xa55b,	// (0x0003960b) mup2_visualizer_osc_pane

0xc407,	// (0x0003b4b7) mup2_visualizer_spec_pane_ParamLimits

0xc407,	// (0x0003b4b7) mup2_visualizer_spec_pane

0x4f1a,	// (0x00033fca) mup2_spec_half_pane

0x4f23,	// (0x00033fd3) mup2_spec_half_pane_cp

0x4f2b,	// (0x00033fdb) mup2_spec_bar_pane_ParamLimits

0x4f2b,	// (0x00033fdb) mup2_spec_bar_pane

0xc3a8,	// (0x0003b458) mup2_spec_bar_pane_g1

0xc3b2,	// (0x0003b462) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003e6b6) mup2_spec_bar_pane_g

0x4f4b,	// (0x00033ffb) mup2_osc_middle_pane

0xc3c4,	// (0x0003b474) mup2_visualizer_osc_pane_g1

0x9c92,	// (0x00038d42) popup_number_entry_window_t1_ParamLimits

0x9ca5,	// (0x00038d55) popup_number_entry_window_t2_ParamLimits

0x9cb7,	// (0x00038d67) popup_number_entry_window_t3_ParamLimits

0x1100,	// (0x000301b0) popup_number_entry_window_t5_ParamLimits

0x1100,	// (0x000301b0) popup_number_entry_window_t5

0xf0ca,	// (0x0003e17a) popup_number_entry_window_t_ParamLimits

0x9cc9,	// (0x00038d79) text_title_cp2_ParamLimits

0x3cd6,	// (0x00032d86) aid_hotspot_pointer_text2_pane

0x3d38,	// (0x00032de8) main_viewer_pane_g9_ParamLimits

0x3d38,	// (0x00032de8) main_viewer_pane_g9

0xa891,	// (0x00039941) cale_month_pane_t1_ParamLimits

0xa8b7,	// (0x00039967) bg_cale_pane_ParamLimits

0xa8cf,	// (0x0003997f) list_cale_pane_ParamLimits

0xa8e0,	// (0x00039990) listscroll_cale_day_pane_t1

0xa8f2,	// (0x000399a2) scroll_pane_cp09_ParamLimits

0x39d6,	// (0x00032a86) main_mup_eq_pane_t1_ParamLimits

0x39d6,	// (0x00032a86) main_mup_eq_pane_t1

0x39f2,	// (0x00032aa2) main_mup_eq_pane_t2_ParamLimits

0x39f2,	// (0x00032aa2) main_mup_eq_pane_t2

0x3a0e,	// (0x00032abe) main_mup_eq_pane_t3_ParamLimits

0x3a0e,	// (0x00032abe) main_mup_eq_pane_t3

0x3a2c,	// (0x00032adc) main_mup_eq_pane_t4_ParamLimits

0x3a2c,	// (0x00032adc) main_mup_eq_pane_t4

0x3a4a,	// (0x00032afa) main_mup_eq_pane_t5_ParamLimits

0x3a4a,	// (0x00032afa) main_mup_eq_pane_t5

0x3a68,	// (0x00032b18) main_mup_eq_pane_t6_ParamLimits

0x3a68,	// (0x00032b18) main_mup_eq_pane_t6

0x3a7e,	// (0x00032b2e) main_mup_eq_pane_t7_ParamLimits

0x3a7e,	// (0x00032b2e) main_mup_eq_pane_t7

0x3a94,	// (0x00032b44) main_mup_eq_pane_t8_ParamLimits

0x3a94,	// (0x00032b44) main_mup_eq_pane_t8

0x3aaa,	// (0x00032b5a) main_mup_eq_pane_t9_ParamLimits

0x3aaa,	// (0x00032b5a) main_mup_eq_pane_t9

0x3ac6,	// (0x00032b76) main_mup_eq_pane_t10_ParamLimits

0x3ac6,	// (0x00032b76) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003e505) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003e505) main_mup_eq_pane_t

0x3b9b,	// (0x00032c4b) mup_equalizer_pane_cp5_ParamLimits

0x3bb3,	// (0x00032c63) mup_equalizer_pane_cp6_ParamLimits

0x3bcb,	// (0x00032c7b) mup_equalizer_pane_cp7_ParamLimits

0x9c03,	// (0x00038cb3) main_gallery_pane

0xc3cd,	// (0x0003b47d) smil2_volume_pane

0xc3d5,	// (0x0003b485) smil_status_volume_pane_g1_ParamLimits

0xc3e8,	// (0x0003b498) smil_status_volume_pane_g2_ParamLimits

0x4a23,	// (0x00033ad3) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003e6bb) smil_status_volume_pane_g_ParamLimits

0xc542,	// (0x0003b5f2) bg_popup_window_pane_cp07_ParamLimits

0xc550,	// (0x0003b600) blid_firmament_pane

0x4f54,	// (0x00034004) aid_size_cell_gallery_ParamLimits

0x4f54,	// (0x00034004) aid_size_cell_gallery

0x4f6a,	// (0x0003401a) grid_gallery_pane_ParamLimits

0x4f6a,	// (0x0003401a) grid_gallery_pane

0x4f85,	// (0x00034035) cell_gallery_pane_ParamLimits

0x4f85,	// (0x00034035) cell_gallery_pane

0xc679,	// (0x0003b729) bg_cell_gallery_focus_pane_ParamLimits

0xc679,	// (0x0003b729) bg_cell_gallery_focus_pane

0xc68b,	// (0x0003b73b) cell_gallery_pane_g1_ParamLimits

0xc68b,	// (0x0003b73b) cell_gallery_pane_g1

0x4fd0,	// (0x00034080) cell_gallery_pane_g2_ParamLimits

0x4fd0,	// (0x00034080) cell_gallery_pane_g2

0x4fdd,	// (0x0003408d) cell_gallery_pane_g3_ParamLimits

0x4fdd,	// (0x0003408d) cell_gallery_pane_g3

0xc697,	// (0x0003b747) cell_gallery_pane_g4_ParamLimits

0xc697,	// (0x0003b747) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003e769) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003e769) cell_gallery_pane_g

0xc6a3,	// (0x0003b753) bg_cell_gallery_focus_pane_g1

0xc6ab,	// (0x0003b75b) bg_cell_gallery_focus_pane_g2

0xc6b3,	// (0x0003b763) bg_cell_gallery_focus_pane_g3

0xc6bb,	// (0x0003b76b) bg_cell_gallery_focus_pane_g4

0xc6c3,	// (0x0003b773) bg_cell_gallery_focus_pane_g5

0xc6cb,	// (0x0003b77b) bg_cell_gallery_focus_pane_g6

0xc6d3,	// (0x0003b783) bg_cell_gallery_focus_pane_g7

0xc6db,	// (0x0003b78b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003e772) bg_cell_gallery_focus_pane_g

0xc6e3,	// (0x0003b793) aid_firma_cardinal

0xc6f7,	// (0x0003b7a7) blid_firmament_pane_t1

0xc70e,	// (0x0003b7be) blid_firmament_pane_t2

0xc725,	// (0x0003b7d5) blid_firmament_pane_t3

0xc73c,	// (0x0003b7ec) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003e783) blid_firmament_pane_t

0xc753,	// (0x0003b803) blid_sat_info_pane

0xc763,	// (0x0003b813) blid_sat_info_pane_g1

0xc763,	// (0x0003b813) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003e78c) blid_sat_info_pane_g

0xc76d,	// (0x0003b81d) blid_sat_info_pane_t1

0xc77b,	// (0x0003b82b) smil2_volume_content_pane

0xc784,	// (0x0003b834) smil2_volume_pane_g1

0xc78c,	// (0x0003b83c) smil2_volume_content_pane_g1

0xc795,	// (0x0003b845) smil2_volume_content_pane_g2

0xc79e,	// (0x0003b84e) smil2_volume_content_pane_g3

0xc7a7,	// (0x0003b857) smil2_volume_content_pane_g4

0xc7b0,	// (0x0003b860) smil2_volume_content_pane_g5

0xc7b9,	// (0x0003b869) smil2_volume_content_pane_g6

0xc7c2,	// (0x0003b872) smil2_volume_content_pane_g7

0xc7cb,	// (0x0003b87b) smil2_volume_content_pane_g8

0xc7d4,	// (0x0003b884) smil2_volume_content_pane_g9

0xc7dd,	// (0x0003b88d) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003e791) smil2_volume_content_pane_g

0x18e1,	// (0x00030991) cale_week_day_heading_pane_t1_ParamLimits

0x192b,	// (0x000309db) cale_week_day_heading_pane_t2_ParamLimits

0x197a,	// (0x00030a2a) cale_week_day_heading_pane_t3_ParamLimits

0x19c9,	// (0x00030a79) cale_week_day_heading_pane_t4_ParamLimits

0x1a18,	// (0x00030ac8) cale_week_day_heading_pane_t5_ParamLimits

0x1a6b,	// (0x00030b1b) cale_week_day_heading_pane_t6_ParamLimits

0x1ac2,	// (0x00030b72) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003e281) cale_week_day_heading_pane_t_ParamLimits

0xa500,	// (0x000395b0) bg_cale_side_pane_ParamLimits

0xfcbb,	// (0x0002ed6b) cale_week_time_pane_t1_ParamLimits

0xfcf5,	// (0x0002eda5) cale_week_time_pane_t2_ParamLimits

0xfd2f,	// (0x0002eddf) cale_week_time_pane_t3_ParamLimits

0xfd69,	// (0x0002ee19) cale_week_time_pane_t4_ParamLimits

0xfda3,	// (0x0002ee53) cale_week_time_pane_t5_ParamLimits

0xfddd,	// (0x0002ee8d) cale_week_time_pane_t6_ParamLimits

0xfe17,	// (0x0002eec7) cale_week_time_pane_t7_ParamLimits

0xfe51,	// (0x0002ef01) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003e290) cale_week_time_pane_t_ParamLimits

0x1b0c,	// (0x00030bbc) cell_cale_week_pane_g2_ParamLimits

0xa500,	// (0x000395b0) bg_cale_side_pane_cp01_ParamLimits

0x2eea,	// (0x00031f9a) cale_month_week_pane_t1_ParamLimits

0x2f03,	// (0x00031fb3) cale_month_week_pane_t2_ParamLimits

0x2f1c,	// (0x00031fcc) cale_month_week_pane_t3_ParamLimits

0x2f35,	// (0x00031fe5) cale_month_week_pane_t4_ParamLimits

0x2f4e,	// (0x00031ffe) cale_month_week_pane_t5_ParamLimits

0x2f67,	// (0x00032017) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003e365) cale_month_week_pane_t_ParamLimits

0x30da,	// (0x0003218a) cell_cale_month_pane_g1_ParamLimits

0x9c03,	// (0x00038cb3) main_cale_event_viewer_pane

0x9c03,	// (0x00038cb3) listscroll_cale_event_viewer_pane

0xc7e6,	// (0x0003b896) list_cale_ev_pane

0xc7ee,	// (0x0003b89e) scroll_pane_cp023

0x4fea,	// (0x0003409a) field_cale_ev_pane_ParamLimits

0x4fea,	// (0x0003409a) field_cale_ev_pane

0xc7fa,	// (0x0003b8aa) field_cale_ev_content_pane_ParamLimits

0xc7fa,	// (0x0003b8aa) field_cale_ev_content_pane

0xc806,	// (0x0003b8b6) field_cale_ev_pane_g1_ParamLimits

0xc806,	// (0x0003b8b6) field_cale_ev_pane_g1

0xc812,	// (0x0003b8c2) field_cale_ev_pane_g2_ParamLimits

0xc812,	// (0x0003b8c2) field_cale_ev_pane_g2

0xc82a,	// (0x0003b8da) field_cale_ev_pane_g3_ParamLimits

0xc82a,	// (0x0003b8da) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003e7a6) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003e7a6) field_cale_ev_pane_g

0xc842,	// (0x0003b8f2) field_cale_ev_pane_t1_ParamLimits

0xc842,	// (0x0003b8f2) field_cale_ev_pane_t1

0x500e,	// (0x000340be) field_cale_ev_content_pane_t1_ParamLimits

0x500e,	// (0x000340be) field_cale_ev_content_pane_t1

0xb00a,	// (0x0003a0ba) bg_button_pane_cp01

0x1529,	// (0x000305d9) listscroll_cale_week_pane_ParamLimits

0x153b,	// (0x000305eb) popup_toolbar_window_cp01

0xa4cc,	// (0x0003957c) listscroll_cale_week_pane_t1_ParamLimits

0x1529,	// (0x000305d9) listscroll_cale_day_pane_ParamLimits

0x153b,	// (0x000305eb) popup_toolbar_window_cp02

0xa8e0,	// (0x00039990) listscroll_cale_day_pane_t1_ParamLimits

0x1529,	// (0x000305d9) main_cale_month_pane_ParamLimits

0x490a,	// (0x000339ba) popup_toolbar_window_cp03_ParamLimits

0x490a,	// (0x000339ba) popup_toolbar_window_cp03

0x3f30,	// (0x00032fe0) main_image_pane_g2_ParamLimits

0x3f30,	// (0x00032fe0) main_image_pane_g2

0x3f41,	// (0x00032ff1) main_image_pane_g3_ParamLimits

0x3f41,	// (0x00032ff1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003e597) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003e597) main_image_pane_g

0xb16c,	// (0x0003a21c) main_image_pane_t1_ParamLimits

0x3f52,	// (0x00033002) main_image_pane_t2_ParamLimits

0x3f52,	// (0x00033002) main_image_pane_t2

0x3f64,	// (0x00033014) main_image_pane_t3_ParamLimits

0x3f64,	// (0x00033014) main_image_pane_t3

0x3f8c,	// (0x0003303c) main_image_pane_t4_ParamLimits

0x3f8c,	// (0x0003303c) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003e59e) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003e59e) main_image_pane_t

0x3fac,	// (0x0003305c) popup_image_details_window_cp01

0x3fb6,	// (0x00033066) popup_toobar_trans_pane_cp01_ParamLimits

0x3fb6,	// (0x00033066) popup_toobar_trans_pane_cp01

0x477d,	// (0x0003382d) popup_image_details_window_ParamLimits

0x477d,	// (0x0003382d) popup_image_details_window

0xc32c,	// (0x0003b3dc) popup_image_focus_window

0xfee9,	// (0x0002ef99) camera2_autofocus_pane_ParamLimits

0xfee9,	// (0x0002ef99) camera2_autofocus_pane

0x9c03,	// (0x00038cb3) bg_popup_sub_pane_cp06

0xc859,	// (0x0003b909) popup_image_focus_window_g1

0xc861,	// (0x0003b911) popup_image_focus_window_g2

0xc869,	// (0x0003b919) popup_image_focus_window_g3

0xc871,	// (0x0003b921) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003e7ad) popup_image_focus_window_g

0xc879,	// (0x0003b929) popup_image_focus_window_t1

0xc887,	// (0x0003b937) popup_image_focus_window_t2

0xc897,	// (0x0003b947) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003e7b6) popup_image_focus_window_t

0xc8a5,	// (0x0003b955) camera2_autofocus_pane_g1

0x9c64,	// (0x00038d14) bg_tb_trans_pane_cp01

0xc8b3,	// (0x0003b963) popup_image_details_window_g1

0xc8c6,	// (0x0003b976) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003e7c8) popup_image_details_window_g

0xc8ef,	// (0x0003b99f) popup_image_details_window_t1

0xc901,	// (0x0003b9b1) popup_image_details_window_t2

0xc91a,	// (0x0003b9ca) popup_image_details_window_t3

0xc92e,	// (0x0003b9de) popup_image_details_window_t4

0xc949,	// (0x0003b9f9) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003e7cf) popup_image_details_window_t

0xa391,	// (0x00039441) bg_calc_paper_pane_ParamLimits

0x1374,	// (0x00030424) grid_highlight_pane_cp013

0x137e,	// (0x0003042e) list_calc_pane_ParamLimits

0x1390,	// (0x00030440) scroll_pane_cp024

0xa3a5,	// (0x00039455) bg_calc_display_pane_ParamLimits

0xfc14,	// (0x0002ecc4) calc_display_pane_t1_ParamLimits

0xfc26,	// (0x0002ecd6) calc_display_pane_t2_ParamLimits

0x1398,	// (0x00030448) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003e201) calc_display_pane_t_ParamLimits

0xfc8f,	// (0x0002ed3f) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003e21e) cell_calc_pane_g

0xfc98,	// (0x0002ed48) cell_calc_pane_t1

0xa404,	// (0x000394b4) grid_highlight_pane_cp02_ParamLimits

0xa41a,	// (0x000394ca) toolbar_button_pane_cp01_ParamLimits

0xa41a,	// (0x000394ca) toolbar_button_pane_cp01

0xb1b1,	// (0x0003a261) temp_image_control_pane_ParamLimits

0xb1b1,	// (0x0003a261) temp_image_control_pane

0x9c64,	// (0x00038d14) main_mp3_pane

0xc963,	// (0x0003ba13) temp_image_control_pane_g1_ParamLimits

0xc963,	// (0x0003ba13) temp_image_control_pane_g1

0xc971,	// (0x0003ba21) temp_image_control_pane_g2_ParamLimits

0xc971,	// (0x0003ba21) temp_image_control_pane_g2

0xc983,	// (0x0003ba33) temp_image_control_pane_g3_ParamLimits

0xc983,	// (0x0003ba33) temp_image_control_pane_g3

0x505f,	// (0x0003410f) temp_image_control_pane_g4_ParamLimits

0x505f,	// (0x0003410f) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003e7da) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003e7da) temp_image_control_pane_g

0xc963,	// (0x0003ba13) main_mp3_pane_g1

0x5072,	// (0x00034122) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003e7e3) main_mp3_pane_g

0xc9c6,	// (0x0003ba76) main_mp3_pane_t1

0xa563,	// (0x00039613) main_camera_pane_g8_ParamLimits

0xa563,	// (0x00039613) main_camera_pane_g8

0x1e3d,	// (0x00030eed) main_video_pane_g7_ParamLimits

0x1e3d,	// (0x00030eed) main_video_pane_g7

0x4c21,	// (0x00033cd1) main_camera2_pane_t7_ParamLimits

0x4c21,	// (0x00033cd1) main_camera2_pane_t7

0xa6af,	// (0x0003975f) scroll_pane_cp025_ParamLimits

0xa6af,	// (0x0003975f) scroll_pane_cp025

0xa6c3,	// (0x00039773) scroll_pane_cp026_ParamLimits

0xa6c3,	// (0x00039773) scroll_pane_cp026

0xa6d2,	// (0x00039782) wml_content_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_touch_calib_pane

0x5144,	// (0x000341f4) main_touch_calib_pane_g1

0x5156,	// (0x00034206) main_touch_calib_pane_g2

0x5168,	// (0x00034218) main_touch_calib_pane_g3

0x517a,	// (0x0003422a) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003e801) main_touch_calib_pane_g

0x518c,	// (0x0003423c) main_touch_calib_pane_t1

0x51a6,	// (0x00034256) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003e80a) main_touch_calib_pane_t

0xadc6,	// (0x00039e76) mup_progress_pane_cp02

0xade5,	// (0x00039e95) navi_pane_g1

0xae47,	// (0x00039ef7) navi_pane_mp_t3

0x9c64,	// (0x00038d14) main_mp3_pane_ParamLimits

0x494c,	// (0x000339fc) navi_pane_ParamLimits

0xc963,	// (0x0003ba13) main_mp3_pane_g1_ParamLimits

0x5072,	// (0x00034122) main_mp3_pane_g2_ParamLimits

0x507e,	// (0x0003412e) main_mp3_pane_g3_ParamLimits

0x507e,	// (0x0003412e) main_mp3_pane_g3

0x508c,	// (0x0003413c) main_mp3_pane_g4_ParamLimits

0x508c,	// (0x0003413c) main_mp3_pane_g4

0xc993,	// (0x0003ba43) main_mp3_pane_g5_ParamLimits

0xc993,	// (0x0003ba43) main_mp3_pane_g5

0xc9a1,	// (0x0003ba51) main_mp3_pane_g6_ParamLimits

0xc9a1,	// (0x0003ba51) main_mp3_pane_g6

0xc9ae,	// (0x0003ba5e) main_mp3_pane_g7_ParamLimits

0xc9ae,	// (0x0003ba5e) main_mp3_pane_g7

0xc9ba,	// (0x0003ba6a) main_mp3_pane_g8_ParamLimits

0xc9ba,	// (0x0003ba6a) main_mp3_pane_g8

0xf733,	// (0x0003e7e3) main_mp3_pane_g_ParamLimits

0x5098,	// (0x00034148) main_mp3_pane_t2

0x50a6,	// (0x00034156) main_mp3_pane_t3

0xc9d4,	// (0x0003ba84) main_mp3_pane_t4

0xc9e2,	// (0x0003ba92) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003e7f4) main_mp3_pane_t

0xc9f0,	// (0x0003baa0) mup_progress_pane_cp01

0x9c21,	// (0x00038cd1) aid_zoom_text_secondary2

0xc7e6,	// (0x0003b896) list_cale_ev2_pane

0xc7ee,	// (0x0003b89e) scroll_pane_cp023_ParamLimits

0x5200,	// (0x000342b0) field_cale_ev2_pane_ParamLimits

0x5200,	// (0x000342b0) field_cale_ev2_pane

0x5224,	// (0x000342d4) field_cale_ev2_pane_g1_ParamLimits

0x5224,	// (0x000342d4) field_cale_ev2_pane_g1

0x5230,	// (0x000342e0) field_cale_ev2_pane_g2_ParamLimits

0x5230,	// (0x000342e0) field_cale_ev2_pane_g2

0x5248,	// (0x000342f8) field_cale_ev2_pane_g3_ParamLimits

0x5248,	// (0x000342f8) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003e815) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003e815) field_cale_ev2_pane_g

0x5260,	// (0x00034310) field_cale_ev2_pane_t1_ParamLimits

0x5260,	// (0x00034310) field_cale_ev2_pane_t1

0x5277,	// (0x00034327) field_cale_ev2_pane_t2_ParamLimits

0x5277,	// (0x00034327) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003e81e) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003e81e) field_cale_ev2_pane_t

0x3dcd,	// (0x00032e7d) main_postcard_pane_g5_ParamLimits

0x3dcd,	// (0x00032e7d) main_postcard_pane_g5

0x3de3,	// (0x00032e93) main_postcard_pane_g6_ParamLimits

0x3de3,	// (0x00032e93) main_postcard_pane_g6

0x1be9,	// (0x00030c99) camera2_autofocus_pane_cp_ParamLimits

0x1be9,	// (0x00030c99) camera2_autofocus_pane_cp

0x9c64,	// (0x00038d14) main_mup3_pane

0x52ac,	// (0x0003435c) main_mup3_pane_g1_ParamLimits

0x52ac,	// (0x0003435c) main_mup3_pane_g1

0x52ce,	// (0x0003437e) main_mup3_pane_g2_ParamLimits

0x52ce,	// (0x0003437e) main_mup3_pane_g2

0x534f,	// (0x000343ff) main_mup3_pane_g3_ParamLimits

0x534f,	// (0x000343ff) main_mup3_pane_g3

0x5397,	// (0x00034447) main_mup3_pane_g4_ParamLimits

0x5397,	// (0x00034447) main_mup3_pane_g4

0x53dd,	// (0x0003448d) main_mup3_pane_g5_ParamLimits

0x53dd,	// (0x0003448d) main_mup3_pane_g5

0x5425,	// (0x000344d5) main_mup3_pane_g6_ParamLimits

0x5425,	// (0x000344d5) main_mup3_pane_g6

0xca04,	// (0x0003bab4) main_mup3_pane_g7_ParamLimits

0xca04,	// (0x0003bab4) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003e82e) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003e82e) main_mup3_pane_g

0x54a5,	// (0x00034555) main_mup3_pane_t1_ParamLimits

0x54a5,	// (0x00034555) main_mup3_pane_t1

0x5513,	// (0x000345c3) main_mup3_pane_t2_ParamLimits

0x5513,	// (0x000345c3) main_mup3_pane_t2

0x55e9,	// (0x00034699) main_mup3_pane_t4_ParamLimits

0x55e9,	// (0x00034699) main_mup3_pane_t4

0x5647,	// (0x000346f7) main_mup3_pane_t5_ParamLimits

0x5647,	// (0x000346f7) main_mup3_pane_t5

0x5701,	// (0x000347b1) main_mup3_pane_t6_ParamLimits

0x5701,	// (0x000347b1) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003e83f) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003e83f) main_mup3_pane_t

0x57b9,	// (0x00034869) mup3_progress_pane_ParamLimits

0x57b9,	// (0x00034869) mup3_progress_pane

0x584b,	// (0x000348fb) popup_mup3_control_window_ParamLimits

0x584b,	// (0x000348fb) popup_mup3_control_window

0xca12,	// (0x0003bac2) popup_mup3_text_window

0x5881,	// (0x00034931) mup3_progress_pane_t1

0x589f,	// (0x0003494f) mup3_progress_pane_t2

0xca1a,	// (0x0003baca) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003e84c) mup3_progress_pane_t

0xca37,	// (0x0003bae7) mup_progress_pane_cp03

0x9c03,	// (0x00038cb3) bg_tb_trans_pane_cp04

0x58bd,	// (0x0003496d) mup3_volume_pane

0x58c5,	// (0x00034975) popup_mup3_control_window_g1

0x58ce,	// (0x0003497e) mup3_volume_pane_g1

0x58d7,	// (0x00034987) mup3_volume_pane_g2

0x58e0,	// (0x00034990) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003e853) mup3_volume_pane_g

0x9c03,	// (0x00038cb3) bg_tb_trans_pane_cp03

0xca47,	// (0x0003baf7) popup_mup3_text_window_g1

0xca4f,	// (0x0003baff) popup_mup3_text_window_t1

0xa3ed,	// (0x0003949d) list_calc_item_pane_g1_ParamLimits

0xc4a8,	// (0x0003b558) mup_volume_pane_cp_g1

0x51c0,	// (0x00034270) main_touch_calib_pane_t3

0x51d4,	// (0x00034284) main_touch_calib_pane_t4

0x51ea,	// (0x0003429a) main_touch_calib_pane_t5

0x9c0d,	// (0x00038cbd) aid_cell_size_toolbar2

0x9c15,	// (0x00038cc5) aid_popup3_width_pane

0x9c21,	// (0x00038cd1) aid_zoom_text_msg_primary

0x1bbc,	// (0x00030c6c) vorec_t7

0xa3b1,	// (0x00039461) bg_calc_paper_pane_g1_ParamLimits

0xa3bd,	// (0x0003946d) bg_calc_paper_pane_g2_ParamLimits

0xa3c9,	// (0x00039479) bg_calc_paper_pane_g3_ParamLimits

0xa3d5,	// (0x00039485) bg_calc_paper_pane_g4_ParamLimits

0xa3e1,	// (0x00039491) bg_calc_paper_pane_g5_ParamLimits

0x13aa,	// (0x0003045a) bg_calc_paper_pane_g6_ParamLimits

0x13bd,	// (0x0003046d) bg_calc_paper_pane_g7_ParamLimits

0x13d0,	// (0x00030480) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003e208) bg_calc_paper_pane_g_ParamLimits

0x13e1,	// (0x00030491) calc_bg_paper_pane_g9_ParamLimits

0x1d4b,	// (0x00030dfb) image_qvga_pane_ParamLimits

0x1d4b,	// (0x00030dfb) image_qvga_pane

0xa2e0,	// (0x00039390) bg_popup_sub_pane_cp04_ParamLimits

0xb0e8,	// (0x0003a198) popup_mup_playback_window_g1_ParamLimits

0xb0f4,	// (0x0003a1a4) popup_mup_playback_window_t1_ParamLimits

0xb109,	// (0x0003a1b9) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003e592) popup_mup_playback_window_t_ParamLimits

0x4c4f,	// (0x00033cff) main_mup2_pane_g3_ParamLimits

0x4c4f,	// (0x00033cff) main_mup2_pane_g3

0x213e,	// (0x000311ee) popup_toolbar_window_cp04

0xb504,	// (0x0003a5b4) popup_call2_audio_second_window_g3_ParamLimits

0xb504,	// (0x0003a5b4) popup_call2_audio_second_window_g3

0xb90e,	// (0x0003a9be) popup_call2_audio_first_window_g4_ParamLimits

0xb90e,	// (0x0003a9be) popup_call2_audio_first_window_g4

0xbf8d,	// (0x0003b03d) popup_call2_audio_in_window_g4_ParamLimits

0xbf8d,	// (0x0003b03d) popup_call2_audio_in_window_g4

0x3f12,	// (0x00032fc2) aid_area_sk_bg_cut_ParamLimits

0x3f12,	// (0x00032fc2) aid_area_sk_bg_cut

0xb11e,	// (0x0003a1ce) aid_area_sk_bg_cut_2_ParamLimits

0xb11e,	// (0x0003a1ce) aid_area_sk_bg_cut_2

0x4fc0,	// (0x00034070) aid_placing_details_win

0x4fc8,	// (0x00034078) aid_placing_details_win_2

0xc8a5,	// (0x0003b955) camera2_autofocus_pane_g1_ParamLimits

0x1047,	// (0x000300f7) popup_fixed_preview_cale_window_ParamLimits

0x1047,	// (0x000300f7) popup_fixed_preview_cale_window

0xae8e,	// (0x00039f3e) navi_slider_pane_g3

0xae97,	// (0x00039f47) navi_slider_pane_g4

0xaea0,	// (0x00039f50) navi_slider_pane_g5

0xae8e,	// (0x00039f3e) navi_slider_pane_g6

0x377e,	// (0x0003282e) navi_slider_pane_g7

0xafcf,	// (0x0003a07f) mup_scale_pane_g3

0xafd8,	// (0x0003a088) mup_scale_pane_g4

0xafe1,	// (0x0003a091) mup_scale_pane_g5

0x3be3,	// (0x00032c93) mup_scale_pane_g6

0x3bec,	// (0x00032c9c) mup_scale_pane_g7

0xae8e,	// (0x00039f3e) cams2_slider_pane_g3

0xc532,	// (0x0003b5e2) cams2_slider_pane_g4

0x4f09,	// (0x00033fb9) cams2_slider_pane_g5

0xae8e,	// (0x00039f3e) cams2_slider_pane_g6

0x4f11,	// (0x00033fc1) cams2_slider_pane_g7

0xc763,	// (0x0003b813) camera2_autofocus_pane_cp_g1

0xc2fe,	// (0x0003b3ae) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2fe,	// (0x0003b3ae) bg_popup_preview_window_pane_cp02

0xca5d,	// (0x0003bb0d) list_fp_cale_pane_ParamLimits

0xca5d,	// (0x0003bb0d) list_fp_cale_pane

0xca69,	// (0x0003bb19) popup_fixed_preview_cale_window_t1_ParamLimits

0xca69,	// (0x0003bb19) popup_fixed_preview_cale_window_t1

0x58e9,	// (0x00034999) popup_fixed_preview_cale_window_t2_ParamLimits

0x58e9,	// (0x00034999) popup_fixed_preview_cale_window_t2

0x58fe,	// (0x000349ae) popup_fixed_preview_cale_window_t3_ParamLimits

0x58fe,	// (0x000349ae) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003e85a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003e85a) popup_fixed_preview_cale_window_t

0x5913,	// (0x000349c3) list_single_fp_cale_pane_ParamLimits

0x5913,	// (0x000349c3) list_single_fp_cale_pane

0xca87,	// (0x0003bb37) list_single_fp_cale_pane_g1_ParamLimits

0xca87,	// (0x0003bb37) list_single_fp_cale_pane_g1

0xca93,	// (0x0003bb43) list_single_fp_cale_pane_g2_ParamLimits

0xca93,	// (0x0003bb43) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003e861) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003e861) list_single_fp_cale_pane_g

0xcaac,	// (0x0003bb5c) list_single_fp_cale_pane_t1_ParamLimits

0xcaac,	// (0x0003bb5c) list_single_fp_cale_pane_t1

0xcabe,	// (0x0003bb6e) list_single_fp_cale_pane_t2_ParamLimits

0xcabe,	// (0x0003bb6e) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003e868) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003e868) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c03,	// (0x00038cb3) main_dialer_pane

0x5928,	// (0x000349d8) aid_cell_size_keypad

0x5932,	// (0x000349e2) dialer_ne_pane

0x593c,	// (0x000349ec) grid_dialer_command_1_pane

0x5944,	// (0x000349f4) grid_dialer_command_2_pane

0x594c,	// (0x000349fc) grid_dialer_keypad_pane

0x595e,	// (0x00034a0e) bg_popup_call_pane_cp06_ParamLimits

0x595e,	// (0x00034a0e) bg_popup_call_pane_cp06

0x596a,	// (0x00034a1a) dialer_ne_clear_pane_ParamLimits

0x596a,	// (0x00034a1a) dialer_ne_clear_pane

0xcaf1,	// (0x0003bba1) dialer_ne_pane_g1

0xcaf9,	// (0x0003bba9) dialer_ne_pane_t1_ParamLimits

0xcaf9,	// (0x0003bba9) dialer_ne_pane_t1

0x5976,	// (0x00034a26) dialer_ne_pane_t2_ParamLimits

0x5976,	// (0x00034a26) dialer_ne_pane_t2

0x59a0,	// (0x00034a50) dialer_ne_pane_t3_ParamLimits

0x59a0,	// (0x00034a50) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003e86d) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003e86d) dialer_ne_pane_t

0x59d0,	// (0x00034a80) dialer_ne_pane_t3_copy1_ParamLimits

0x59d0,	// (0x00034a80) dialer_ne_pane_t3_copy1

0x59ff,	// (0x00034aaf) cell_dialer_keypad_pane_ParamLimits

0x59ff,	// (0x00034aaf) cell_dialer_keypad_pane

0x5a16,	// (0x00034ac6) cell_dialer_command_1_pane_ParamLimits

0x5a16,	// (0x00034ac6) cell_dialer_command_1_pane

0x5a2c,	// (0x00034adc) cell_dialer_command_2_pane_ParamLimits

0x5a2c,	// (0x00034adc) cell_dialer_command_2_pane

0xcb0b,	// (0x0003bbbb) bg_button_pane_cp02_ParamLimits

0xcb0b,	// (0x0003bbbb) bg_button_pane_cp02

0x5a3b,	// (0x00034aeb) cell_dialer_keypad_pane_g1_ParamLimits

0x5a3b,	// (0x00034aeb) cell_dialer_keypad_pane_g1

0xcb0b,	// (0x0003bbbb) bg_button_pane_cp03_ParamLimits

0xcb0b,	// (0x0003bbbb) bg_button_pane_cp03

0x5a50,	// (0x00034b00) cell_dialer_command_1_pane_g1_ParamLimits

0x5a50,	// (0x00034b00) cell_dialer_command_1_pane_g1

0xcb17,	// (0x0003bbc7) bg_button_pane_cp04

0x5a64,	// (0x00034b14) cell_dialer_command_2_pane_g1

0xa55b,	// (0x0003960b) bg_button_pane_cp06

0xcb1f,	// (0x0003bbcf) dialer_ne_clear_pane_g1

0x36a3,	// (0x00032753) navi_pane_g2

0x36d1,	// (0x00032781) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003e495) navi_pane_g

0x36fc,	// (0x000327ac) navi_pane_mv_g2

0x3723,	// (0x000327d3) navi_pane_mv_g5

0x372b,	// (0x000327db) navi_pane_mv_t1

0xa3a5,	// (0x00039455) main_clock2_pane

0x5aaf,	// (0x00034b5f) main_clock2_list_pane_ParamLimits

0x5aaf,	// (0x00034b5f) main_clock2_list_pane

0x5ae7,	// (0x00034b97) main_clock2_pane_t1_ParamLimits

0x5ae7,	// (0x00034b97) main_clock2_pane_t1

0x5b23,	// (0x00034bd3) main_clock2_pane_t2_ParamLimits

0x5b23,	// (0x00034bd3) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003e879) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003e879) main_clock2_pane_t

0x5bc3,	// (0x00034c73) popup_clock_analogue_window_cp03_ParamLimits

0x5bc3,	// (0x00034c73) popup_clock_analogue_window_cp03

0x5bea,	// (0x00034c9a) popup_clock_digital_window_cp02_ParamLimits

0x5bea,	// (0x00034c9a) popup_clock_digital_window_cp02

0x5c63,	// (0x00034d13) main_clock2_list_single_pane_ParamLimits

0x5c63,	// (0x00034d13) main_clock2_list_single_pane

0xa55b,	// (0x0003960b) list_highlight_pane_cp05

0xcb5b,	// (0x0003bc0b) main_clock2_list_single_pane_t1

0x213e,	// (0x000311ee) popup_toolbar_window_cp04_ParamLimits

0x502f,	// (0x000340df) camera2_autofocus_pane_g2_ParamLimits

0x502f,	// (0x000340df) camera2_autofocus_pane_g2

0x503b,	// (0x000340eb) camera2_autofocus_pane_g3_ParamLimits

0x503b,	// (0x000340eb) camera2_autofocus_pane_g3

0x5047,	// (0x000340f7) camera2_autofocus_pane_g4_ParamLimits

0x5047,	// (0x000340f7) camera2_autofocus_pane_g4

0x5053,	// (0x00034103) camera2_autofocus_pane_g5_ParamLimits

0x5053,	// (0x00034103) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003e7bd) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003e7bd) camera2_autofocus_pane_g

0x528c,	// (0x0003433c) camera2_autofocus_pane_cp_g2

0x5294,	// (0x00034344) camera2_autofocus_pane_cp_g3

0x529c,	// (0x0003434c) camera2_autofocus_pane_cp_g4

0x52a4,	// (0x00034354) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003e823) camera2_autofocus_pane_cp_g

0x5956,	// (0x00034a06) popup_dialer_spcha_window

0x9c03,	// (0x00038cb3) bg_popup_sub_pane_cp07

0xcb69,	// (0x0003bc19) list_spcha_pane

0xcb71,	// (0x0003bc21) list_single_spcha_pane_ParamLimits

0xcb71,	// (0x0003bc21) list_single_spcha_pane

0x9c03,	// (0x00038cb3) list_highlight_pane_cp06

0xcb82,	// (0x0003bc32) list_single_spcha_pane_t1

0xbd37,	// (0x0003ade7) popup_call2_audio_out_window_g4_ParamLimits

0xbd37,	// (0x0003ade7) popup_call2_audio_out_window_g4

0x9c03,	// (0x00038cb3) main_imed2_pane

0xc336,	// (0x0003b3e6) popup_imed_adjust2_window

0x4795,	// (0x00033845) popup_imed_trans_window_ParamLimits

0x4795,	// (0x00033845) popup_imed_trans_window

0xc59b,	// (0x0003b64b) popup_blid_sat_info2_window_t1

0xc5a9,	// (0x0003b659) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003e752) popup_blid_sat_info2_window_t

0x5c97,	// (0x00034d47) aid_size_cell_colour_35

0x5cb7,	// (0x00034d67) aid_size_cell_colour_112

0x5cd7,	// (0x00034d87) aid_size_cell_effect

0xc30a,	// (0x0003b3ba) bg_tb_trans_pane_cp02

0xa9f1,	// (0x00039aa1) heading_imed_pane

0x5cf7,	// (0x00034da7) listscroll_imed_pane

0xcb90,	// (0x0003bc40) heading_imed_pane_g1

0xcb98,	// (0x0003bc48) heading_imed_pane_t1

0xcba6,	// (0x0003bc56) grid_imed_colour_35_pane_ParamLimits

0xcba6,	// (0x0003bc56) grid_imed_colour_35_pane

0x5d03,	// (0x00034db3) grid_imed_effect_pane

0xcbc2,	// (0x0003bc72) list_imed_aspect_pane

0x5d18,	// (0x00034dc8) scroll_pane_cp027_ParamLimits

0x5d18,	// (0x00034dc8) scroll_pane_cp027

0x5d29,	// (0x00034dd9) cell_imed_effect_pane_ParamLimits

0x5d29,	// (0x00034dd9) cell_imed_effect_pane

0xcbca,	// (0x0003bc7a) cell_imed_colour_pane_ParamLimits

0xcbca,	// (0x0003bc7a) cell_imed_colour_pane

0xcc14,	// (0x0003bcc4) cell_imed_colour_pane_g1_ParamLimits

0xcc14,	// (0x0003bcc4) cell_imed_colour_pane_g1

0xcc25,	// (0x0003bcd5) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc25,	// (0x0003bcd5) hgihlgiht_grid_pane_cp016

0x5d54,	// (0x00034e04) cell_imed_effect_pane_g1

0x5d5c,	// (0x00034e0c) grid_highlight_pane_cp017

0xcc36,	// (0x0003bce6) list_imed_single_pane_ParamLimits

0xcc36,	// (0x0003bce6) list_imed_single_pane

0x9c03,	// (0x00038cb3) list_highlight_pane_cp07

0xcc4a,	// (0x0003bcfa) list_imed_aspect_pane_comp1_t1

0xc30a,	// (0x0003b3ba) bg_tb_trans_pane_cp05

0xcc6c,	// (0x0003bd1c) popup_imed_adjust2_window_g1

0xcc93,	// (0x0003bd43) popup_imed_adjust2_window_t1

0xccab,	// (0x0003bd5b) slider_imed_adjust_pane

0xccbf,	// (0x0003bd6f) slider_imed_adjust_pane_g1

0xcccf,	// (0x0003bd7f) slider_imed_adjust_pane_g2

0xccdf,	// (0x0003bd8f) slider_imed_adjust_pane_g3

0xccf0,	// (0x0003bda0) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003e896) slider_imed_adjust_pane_g

0x5d65,	// (0x00034e15) aid_size_cell_clipart2

0x5d71,	// (0x00034e21) grid_imed_clipart_pane

0xcd01,	// (0x0003bdb1) scroll_pane_cp031

0x5d7b,	// (0x00034e2b) cell_imed_clipart_pane_ParamLimits

0x5d7b,	// (0x00034e2b) cell_imed_clipart_pane

0x5d98,	// (0x00034e48) cell_imed_clipart_pane_g1

0x9c03,	// (0x00038cb3) grid_highlight_pane_cp014

0x5ac4,	// (0x00034b74) main_clock2_pane_g1_ParamLimits

0x5ac4,	// (0x00034b74) main_clock2_pane_g1

0x5c0a,	// (0x00034cba) aid_call2_pane_cp10

0x5c1c,	// (0x00034ccc) aid_call_pane_cp10

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g1

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g2

0x5c2e,	// (0x00034cde) popup_clock_analogue_window_cp10_g3

0x5c2e,	// (0x00034cde) popup_clock_analogue_window_cp10_g4

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003e884) popup_clock_analogue_window_cp10_g

0x5c44,	// (0x00034cf4) popup_clock_analogue_window_cp10_t1

0x0351,	// (0x0002f401) clock_digital_number_pane_cp10_ParamLimits

0x0351,	// (0x0002f401) clock_digital_number_pane_cp10

0x036b,	// (0x0002f41b) clock_digital_number_pane_cp11_ParamLimits

0x036b,	// (0x0002f41b) clock_digital_number_pane_cp11

0x0385,	// (0x0002f435) clock_digital_number_pane_cp12_ParamLimits

0x0385,	// (0x0002f435) clock_digital_number_pane_cp12

0x039f,	// (0x0002f44f) clock_digital_number_pane_cp13_ParamLimits

0x039f,	// (0x0002f44f) clock_digital_number_pane_cp13

0x03b9,	// (0x0002f469) clock_digital_separator_pane_cp10_ParamLimits

0x03b9,	// (0x0002f469) clock_digital_separator_pane_cp10

0x5c75,	// (0x00034d25) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c75,	// (0x00034d25) popup_clock_digital_window_cp02_t1

0xa2d8,	// (0x00039388) clock_digital_number_pane_cp10_g1

0xa2d8,	// (0x00039388) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003e89f) clock_digital_number_pane_cp10_g

0xa2d8,	// (0x00039388) clock_digital_separator_pane_cp10_g1

0xa2d8,	// (0x00039388) clock_digital_separator_pane_g2_cp10

0xae55,	// (0x00039f05) navi_pane_vded_g4

0xae5e,	// (0x00039f0e) navi_pane_vded_g5

0xae67,	// (0x00039f17) navi_pane_vded_t1

0x9c03,	// (0x00038cb3) main_vded_pane

0x5da1,	// (0x00034e51) main_vded_pane_g1

0x5dad,	// (0x00034e5d) main_vded_pane_g2

0x5db9,	// (0x00034e69) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003e8a4) main_vded_pane_g

0x5dc5,	// (0x00034e75) main_vded_pane_t1

0x5dd3,	// (0x00034e83) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003e8ab) main_vded_pane_t

0x5de1,	// (0x00034e91) vded_slider_pane

0x5deb,	// (0x00034e9b) vded_video_pane

0xcd09,	// (0x0003bdb9) vded_video_pane_g1

0x5df5,	// (0x00034ea5) vded_video_pane_g2

0xc763,	// (0x0003b813) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003e8b0) vded_video_pane_g

0xcd13,	// (0x0003bdc3) vded_slider_pane_g1

0xc4a8,	// (0x0003b558) vded_slider_pane_g2

0xcd1c,	// (0x0003bdcc) vded_slider_pane_g3

0xcd25,	// (0x0003bdd5) vded_slider_pane_g4

0xcd2e,	// (0x0003bdde) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003e8b7) vded_slider_pane_g

0x5835,	// (0x000348e5) mup3_rocker_pane_ParamLimits

0x5835,	// (0x000348e5) mup3_rocker_pane

0x5dfe,	// (0x00034eae) mup3_control_keys_pane_g1

0x5e06,	// (0x00034eb6) mup3_control_keys_pane_g2

0x5e0e,	// (0x00034ebe) mup3_control_keys_pane_g3

0x5e16,	// (0x00034ec6) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003e8c2) mup3_control_keys_pane_g

0x107e,	// (0x0003012e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x107e,	// (0x0003012e) popup_toolbar2_fixed_window_cp01

0x586b,	// (0x0003491b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x586b,	// (0x0003491b) popup_toolbar2_fixed_window_cp02

0xb676,	// (0x0003a726) popup_call2_audio_second_window_t4_ParamLimits

0xb676,	// (0x0003a726) popup_call2_audio_second_window_t4

0xbba4,	// (0x0003ac54) popup_call2_audio_first_window_t6_ParamLimits

0xbba4,	// (0x0003ac54) popup_call2_audio_first_window_t6

0xbe3a,	// (0x0003aeea) popup_call2_audio_out_window_t6_ParamLimits

0xbe3a,	// (0x0003aeea) popup_call2_audio_out_window_t6

0x9c03,	// (0x00038cb3) main_vitu_pane

0x5e26,	// (0x00034ed6) aid_size_cell_itu_ParamLimits

0x5e26,	// (0x00034ed6) aid_size_cell_itu

0x9c64,	// (0x00038d14) bg_popup_window_pane_cp08_ParamLimits

0x9c64,	// (0x00038d14) bg_popup_window_pane_cp08

0x5e3c,	// (0x00034eec) field_vitu_entry_pane_ParamLimits

0x5e3c,	// (0x00034eec) field_vitu_entry_pane

0x5e53,	// (0x00034f03) grid_vitu_function_pane_ParamLimits

0x5e53,	// (0x00034f03) grid_vitu_function_pane

0x5e6e,	// (0x00034f1e) grid_vitu_itu_pane_ParamLimits

0x5e6e,	// (0x00034f1e) grid_vitu_itu_pane

0x5e8c,	// (0x00034f3c) cell_vitu_itu_pane_ParamLimits

0x5e8c,	// (0x00034f3c) cell_vitu_itu_pane

0x5eb2,	// (0x00034f62) cell_vitu_function_pane_ParamLimits

0x5eb2,	// (0x00034f62) cell_vitu_function_pane

0x9c64,	// (0x00038d14) bg_popup_sub_pane_cp08_ParamLimits

0x9c64,	// (0x00038d14) bg_popup_sub_pane_cp08

0x5ecd,	// (0x00034f7d) field_vitu_entry_pane_t1_ParamLimits

0x5ecd,	// (0x00034f7d) field_vitu_entry_pane_t1

0xcd4f,	// (0x0003bdff) field_vitu_entry_pane_t2_ParamLimits

0xcd4f,	// (0x0003bdff) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003e8d0) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003e8d0) field_vitu_entry_pane_t

0xcd6c,	// (0x0003be1c) bg_button_pane_cp05_ParamLimits

0xcd6c,	// (0x0003be1c) bg_button_pane_cp05

0x5eed,	// (0x00034f9d) cell_vitu_itu_pane_g1

0x5f05,	// (0x00034fb5) cell_vitu_itu_pane_t1_ParamLimits

0x5f05,	// (0x00034fb5) cell_vitu_itu_pane_t1

0x5f17,	// (0x00034fc7) cell_vitu_itu_pane_t2_ParamLimits

0x5f17,	// (0x00034fc7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003e8d5) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003e8d5) cell_vitu_itu_pane_t

0xcd7a,	// (0x0003be2a) bg_button_pane_cp07

0x5f4c,	// (0x00034ffc) cell_vitu_function_pane_g1

0x129a,	// (0x0003034a) main_calc_pane_g1

0x0ea2,	// (0x0002ff52) aid_visual_content_pane

0x9c03,	// (0x00038cb3) main_vradio_pane

0x5f55,	// (0x00035005) main_vradio_pane_g1_ParamLimits

0x5f55,	// (0x00035005) main_vradio_pane_g1

0xcd84,	// (0x0003be34) main_vradio_pane_g2_ParamLimits

0xcd84,	// (0x0003be34) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003e8dc) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003e8dc) main_vradio_pane_g

0x5f6c,	// (0x0003501c) main_vradio_pane_t1_ParamLimits

0x5f6c,	// (0x0003501c) main_vradio_pane_t1

0x5f81,	// (0x00035031) main_vradio_pane_t2_ParamLimits

0x5f81,	// (0x00035031) main_vradio_pane_t2

0xcd91,	// (0x0003be41) main_vradio_pane_t3_ParamLimits

0xcd91,	// (0x0003be41) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003e8e1) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003e8e1) main_vradio_pane_t

0x5f96,	// (0x00035046) vradio_rocker_control_pane_ParamLimits

0x5f96,	// (0x00035046) vradio_rocker_control_pane

0x5fa8,	// (0x00035058) vradio_station_info_pane_ParamLimits

0x5fa8,	// (0x00035058) vradio_station_info_pane

0xcda5,	// (0x0003be55) vradio_frequency_info_pane_ParamLimits

0xcda5,	// (0x0003be55) vradio_frequency_info_pane

0xc763,	// (0x0003b813) vradio_station_info_pane_g1

0xcdb4,	// (0x0003be64) vradio_station_info_pane_t1_ParamLimits

0xcdb4,	// (0x0003be64) vradio_station_info_pane_t1

0xcdd6,	// (0x0003be86) vradio_station_info_pane_t2_ParamLimits

0xcdd6,	// (0x0003be86) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003e8e8) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003e8e8) vradio_station_info_pane_t

0xcde8,	// (0x0003be98) vradio_tuning_pane

0xcdf0,	// (0x0003bea0) vradio_rocker_control_pane_g1

0xcdf8,	// (0x0003bea8) vradio_rocker_control_pane_g2

0xce00,	// (0x0003beb0) vradio_rocker_control_pane_g3

0xce08,	// (0x0003beb8) vradio_rocker_control_pane_g4

0xce10,	// (0x0003bec0) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003e8ed) vradio_rocker_control_pane_g

0x5fb8,	// (0x00035068) vradio_frequency_info_pane_g1

0xce18,	// (0x0003bec8) vradio_frequency_info_pane_t1_ParamLimits

0xce18,	// (0x0003bec8) vradio_frequency_info_pane_t1

0x5fc2,	// (0x00035072) vradio_tuning_pane_g1

0x5fcd,	// (0x0003507d) vradio_tuning_pane_t1

0x9c31,	// (0x00038ce1) area_side_right_pane_ParamLimits

0x9c31,	// (0x00038ce1) area_side_right_pane

0xc2c5,	// (0x0003b375) status_small_pane_g1

0xc2cd,	// (0x0003b37d) status_small_pane_g2

0xc2d6,	// (0x0003b386) status_small_pane_g3

0xc2df,	// (0x0003b38f) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003e6a8) status_small_pane_g

0xc2e8,	// (0x0003b398) status_small_pane_t1

0x9c03,	// (0x00038cb3) main_video3_pane

0xce2c,	// (0x0003bedc) cams_zoom_vslider_pane

0xce34,	// (0x0003bee4) image3_wide_pane_ParamLimits

0xce34,	// (0x0003bee4) image3_wide_pane

0xce4e,	// (0x0003befe) image3_wide_small_pane

0xce5a,	// (0x0003bf0a) main_video3_pane_g1_ParamLimits

0xce5a,	// (0x0003bf0a) main_video3_pane_g1

0xce76,	// (0x0003bf26) main_video3_pane_g2_ParamLimits

0xce76,	// (0x0003bf26) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003e8f8) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003e8f8) main_video3_pane_g

0xce92,	// (0x0003bf42) main_video3_pane_t1_ParamLimits

0xce92,	// (0x0003bf42) main_video3_pane_t1

0xcebd,	// (0x0003bf6d) main_video3_pane_t2_ParamLimits

0xcebd,	// (0x0003bf6d) main_video3_pane_t2

0xceea,	// (0x0003bf9a) main_video3_pane_t3_ParamLimits

0xceea,	// (0x0003bf9a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003e8fd) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003e8fd) main_video3_pane_t

0xcf17,	// (0x0003bfc7) cams_zoom_vslider_pane_g1

0xcf20,	// (0x0003bfd0) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003e904) cams_zoom_vslider_pane_g

0xcf28,	// (0x0003bfd8) small_slider_vertical_pane

0xc763,	// (0x0003b813) small_slider_vertical_pane_g1

0xc763,	// (0x0003b813) small_slider_vertical_pane_g2

0xcf30,	// (0x0003bfe0) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003e909) small_slider_vertical_pane_g

0x9c03,	// (0x00038cb3) main_hwr_training_pane

0xcf39,	// (0x0003bfe9) hwr_training_instruct_pane_ParamLimits

0xcf39,	// (0x0003bfe9) hwr_training_instruct_pane

0x5fdc,	// (0x0003508c) hwr_training_navi_pane_ParamLimits

0x5fdc,	// (0x0003508c) hwr_training_navi_pane

0x5ffb,	// (0x000350ab) hwr_training_write_pane_ParamLimits

0x5ffb,	// (0x000350ab) hwr_training_write_pane

0x9c03,	// (0x00038cb3) bg_frame_shadow_pane

0xcf70,	// (0x0003c020) hwr_training_write_pane_g1

0xcf78,	// (0x0003c028) hwr_training_write_pane_g2

0xcf80,	// (0x0003c030) hwr_training_write_pane_g3

0xcf88,	// (0x0003c038) hwr_training_write_pane_g4

0xcf90,	// (0x0003c040) hwr_training_write_pane_g5

0xcf98,	// (0x0003c048) hwr_training_write_pane_g6

0xcfa0,	// (0x0003c050) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003e910) hwr_training_write_pane_g

0x6036,	// (0x000350e6) hwr_training_navi_pane_g1_ParamLimits

0x6036,	// (0x000350e6) hwr_training_navi_pane_g1

0x6048,	// (0x000350f8) hwr_training_navi_pane_g2_ParamLimits

0x6048,	// (0x000350f8) hwr_training_navi_pane_g2

0x605a,	// (0x0003510a) hwr_training_navi_pane_g3_ParamLimits

0x605a,	// (0x0003510a) hwr_training_navi_pane_g3

0x606a,	// (0x0003511a) hwr_training_navi_pane_g4_ParamLimits

0x606a,	// (0x0003511a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003e91f) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003e91f) hwr_training_navi_pane_g

0x6077,	// (0x00035127) hwr_training_navi_pane_t1

0x6085,	// (0x00035135) list_single_hwr_training_instruct_pane_ParamLimits

0x6085,	// (0x00035135) list_single_hwr_training_instruct_pane

0xcfa8,	// (0x0003c058) list_single_hwr_training_instruct_pane_t1

0xc6a3,	// (0x0003b753) bg_frame_shadow_pane_g1

0xcfb7,	// (0x0003c067) bg_frame_shadow_pane_g2

0xcfbf,	// (0x0003c06f) bg_frame_shadow_pane_g3

0xcfc7,	// (0x0003c077) bg_frame_shadow_pane_g4

0xcfcf,	// (0x0003c07f) bg_frame_shadow_pane_g5

0xcfd7,	// (0x0003c087) bg_frame_shadow_pane_g6

0xcfdf,	// (0x0003c08f) bg_frame_shadow_pane_g7

0xa470,	// (0x00039520) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003e92a) bg_frame_shadow_pane_g

0x9c03,	// (0x00038cb3) main_video_tele_dialer_pane

0x03e0,	// (0x0002f490) aid_size_cell_video_keypad_ParamLimits

0x03e0,	// (0x0002f490) aid_size_cell_video_keypad

0x03fa,	// (0x0002f4aa) grid_video_dialer_keypad_pane_ParamLimits

0x03fa,	// (0x0002f4aa) grid_video_dialer_keypad_pane

0x0446,	// (0x0002f4f6) video_down_pane_cp_ParamLimits

0x0446,	// (0x0002f4f6) video_down_pane_cp

0x045a,	// (0x0002f50a) cell_video_dialer_keypad_pane_ParamLimits

0x045a,	// (0x0002f50a) cell_video_dialer_keypad_pane

0xcfe7,	// (0x0003c097) bg_button_pane_cp08_ParamLimits

0xcfe7,	// (0x0003c097) bg_button_pane_cp08

0x60b6,	// (0x00035166) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60b6,	// (0x00035166) cell_video_dialer_keypad_pane_g1

0x581f,	// (0x000348cf) mup3_rocker2_pane_ParamLimits

0x581f,	// (0x000348cf) mup3_rocker2_pane

0xc763,	// (0x0003b813) mup3_rocker2_pane_g1

0x4662,	// (0x00033712) main_dialer2_pane

0x9c03,	// (0x00038cb3) main_mp4_pane

0x60f9,	// (0x000351a9) main_mp4_pane_g1_ParamLimits

0x60f9,	// (0x000351a9) main_mp4_pane_g1

0x60f9,	// (0x000351a9) main_mp4_pane_g2_ParamLimits

0x60f9,	// (0x000351a9) main_mp4_pane_g2

0x047e,	// (0x0002f52e) main_mp4_pane_g3_ParamLimits

0x047e,	// (0x0002f52e) main_mp4_pane_g3

0x6107,	// (0x000351b7) main_mp4_pane_g4_ParamLimits

0x6107,	// (0x000351b7) main_mp4_pane_g4

0x612f,	// (0x000351df) main_mp4_pane_g5_ParamLimits

0x612f,	// (0x000351df) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003e94a) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003e94a) main_mp4_pane_g

0x617f,	// (0x0003522f) main_mp4_pane_t1_ParamLimits

0x617f,	// (0x0003522f) main_mp4_pane_t1

0x61db,	// (0x0003528b) main_mp4_pane_t2_ParamLimits

0x61db,	// (0x0003528b) main_mp4_pane_t2

0xcff3,	// (0x0003c0a3) main_mp4_pane_t3_ParamLimits

0xcff3,	// (0x0003c0a3) main_mp4_pane_t3

0x622d,	// (0x000352dd) main_mp4_pane_t4_ParamLimits

0x622d,	// (0x000352dd) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003e957) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003e957) main_mp4_pane_t

0x626d,	// (0x0003531d) mp4_progress_pane_ParamLimits

0x626d,	// (0x0003531d) mp4_progress_pane

0x62b7,	// (0x00035367) mp4_rocker_pane_ParamLimits

0x62b7,	// (0x00035367) mp4_rocker_pane

0xd01b,	// (0x0003c0cb) mp4_progress_pane_t1

0xd034,	// (0x0003c0e4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003e960) mp4_progress_pane_t

0xd04d,	// (0x0003c0fd) mup_progress_pane_cp04

0xd059,	// (0x0003c109) mp4_rocker_pane_g1

0x04c8,	// (0x0002f578) aid_cell_size_keypad2_ParamLimits

0x04c8,	// (0x0002f578) aid_cell_size_keypad2

0x04de,	// (0x0002f58e) dialer2_ne_pane_ParamLimits

0x04de,	// (0x0002f58e) dialer2_ne_pane

0x04f6,	// (0x0002f5a6) grid_dialer2_keypad_pane_ParamLimits

0x04f6,	// (0x0002f5a6) grid_dialer2_keypad_pane

0xc542,	// (0x0003b5f2) bg_popup_call_pane_cp07_ParamLimits

0xc542,	// (0x0003b5f2) bg_popup_call_pane_cp07

0x62d9,	// (0x00035389) dialer2_ne_pane_t1_ParamLimits

0x62d9,	// (0x00035389) dialer2_ne_pane_t1

0x0512,	// (0x0002f5c2) cell_dialer2_keypad_pane_ParamLimits

0x0512,	// (0x0002f5c2) cell_dialer2_keypad_pane

0xd075,	// (0x0003c125) bg_button_pane_pane_cp04_ParamLimits

0xd075,	// (0x0003c125) bg_button_pane_pane_cp04

0x6314,	// (0x000353c4) cell_dialer2_keypad_pane_g1_ParamLimits

0x6314,	// (0x000353c4) cell_dialer2_keypad_pane_g1

0x2025,	// (0x000310d5) aid_placing_vt_set_content_ParamLimits

0x2025,	// (0x000310d5) aid_placing_vt_set_content

0x2049,	// (0x000310f9) aid_placing_vt_set_title_ParamLimits

0x2049,	// (0x000310f9) aid_placing_vt_set_title

0x9c03,	// (0x00038cb3) main_image3_pane

0x0594,	// (0x0002f644) area_side_right_pane_cp01_ParamLimits

0x0594,	// (0x0002f644) area_side_right_pane_cp01

0x60f9,	// (0x000351a9) main_image3_pane_g1_ParamLimits

0x60f9,	// (0x000351a9) main_image3_pane_g1

0x05ad,	// (0x0002f65d) main_image3_pane_g2_ParamLimits

0x05ad,	// (0x0002f65d) main_image3_pane_g2

0x05d5,	// (0x0002f685) main_image3_pane_g3_ParamLimits

0x05d5,	// (0x0002f685) main_image3_pane_g3

0x05ff,	// (0x0002f6af) main_image3_pane_g4_ParamLimits

0x05ff,	// (0x0002f6af) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003e96f) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003e96f) main_image3_pane_g

0x0629,	// (0x0002f6d9) main_image3_pane_t1_ParamLimits

0x0629,	// (0x0002f6d9) main_image3_pane_t1

0x0681,	// (0x0002f731) main_image3_pane_t2_ParamLimits

0x0681,	// (0x0002f731) main_image3_pane_t2

0x06d3,	// (0x0002f783) main_image3_pane_t3_ParamLimits

0x06d3,	// (0x0002f783) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003e978) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003e978) main_image3_pane_t

0x9c64,	// (0x00038d14) grid_sctrl_middle_pane_cp01_ParamLimits

0x9c64,	// (0x00038d14) grid_sctrl_middle_pane_cp01

0x63b0,	// (0x00035460) cell_sctrl_middle_pane_cp01_ParamLimits

0x63b0,	// (0x00035460) cell_sctrl_middle_pane_cp01

0x63cd,	// (0x0003547d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63cd,	// (0x0003547d) cell_sctrl_middle_pane_cp01_g1

0x9c03,	// (0x00038cb3) main_call4_pane

0x63e2,	// (0x00035492) aid_size_button_call4_ParamLimits

0x63e2,	// (0x00035492) aid_size_button_call4

0x6415,	// (0x000354c5) call4_windows_pane_ParamLimits

0x6415,	// (0x000354c5) call4_windows_pane

0x6437,	// (0x000354e7) grid_call4_button_pane_ParamLimits

0x6437,	// (0x000354e7) grid_call4_button_pane

0xd081,	// (0x0003c131) call4_windows_conf_pane

0x6462,	// (0x00035512) popup_call4_audio_first_window_ParamLimits

0x6462,	// (0x00035512) popup_call4_audio_first_window

0x648e,	// (0x0003553e) popup_call4_audio_second_window_ParamLimits

0x648e,	// (0x0003553e) popup_call4_audio_second_window

0xd0be,	// (0x0003c16e) popup_call4_audio_wait_window_ParamLimits

0xd0be,	// (0x0003c16e) popup_call4_audio_wait_window

0x64a4,	// (0x00035554) cell_call4_button_pane_ParamLimits

0x64a4,	// (0x00035554) cell_call4_button_pane

0x64cb,	// (0x0003557b) bg_button_pane_cp09_ParamLimits

0x64cb,	// (0x0003557b) bg_button_pane_cp09

0x64d7,	// (0x00035587) cell_call4_button_pane_g1_ParamLimits

0x64d7,	// (0x00035587) cell_call4_button_pane_g1

0x64fd,	// (0x000355ad) cell_call4_button_pane_t1_ParamLimits

0x64fd,	// (0x000355ad) cell_call4_button_pane_t1

0xd106,	// (0x0003c1b6) popup_call4_audio_conf_window_ParamLimits

0xd106,	// (0x0003c1b6) popup_call4_audio_conf_window

0x5881,	// (0x00034931) mup3_progress_pane_t1_ParamLimits

0x589f,	// (0x0003494f) mup3_progress_pane_t2_ParamLimits

0xca1a,	// (0x0003baca) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003e84c) mup3_progress_pane_t_ParamLimits

0xca37,	// (0x0003bae7) mup_progress_pane_cp03_ParamLimits

0x5e1e,	// (0x00034ece) mup3_control_keys_pane_g4_copy1

0x629b,	// (0x0003534b) mp4_rocker2_pane_ParamLimits

0x629b,	// (0x0003534b) mp4_rocker2_pane

0xd120,	// (0x0003c1d0) mp4_rocker2_pane_g1

0xd128,	// (0x0003c1d8) mp4_rocker2_pane_g2

0x6523,	// (0x000355d3) mp4_rocker2_pane_g3

0x652b,	// (0x000355db) mp4_rocker2_pane_g4

0x6533,	// (0x000355e3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003e981) mp4_rocker2_pane_g

0x9c03,	// (0x00038cb3) main_camera4_pane

0x9c03,	// (0x00038cb3) main_video4_pane

0x0414,	// (0x0002f4c4) main_video_tele_dialer_pane_t1_ParamLimits

0x0414,	// (0x0002f4c4) main_video_tele_dialer_pane_t1

0x042d,	// (0x0002f4dd) main_video_tele_dialer_pane_t2_ParamLimits

0x042d,	// (0x0002f4dd) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003e93b) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003e93b) main_video_tele_dialer_pane_t

0x0773,	// (0x0002f823) cam4_autofocus_pane_ParamLimits

0x0773,	// (0x0002f823) cam4_autofocus_pane

0x0789,	// (0x0002f839) cam4_image_uncrop_pane_ParamLimits

0x0789,	// (0x0002f839) cam4_image_uncrop_pane

0x07a2,	// (0x0002f852) cam4_indicators_pane_ParamLimits

0x07a2,	// (0x0002f852) cam4_indicators_pane

0x07d1,	// (0x0002f881) main_camera4_pane_g1_ParamLimits

0x07d1,	// (0x0002f881) main_camera4_pane_g1

0x07e3,	// (0x0002f893) main_camera4_pane_g2_ParamLimits

0x07e3,	// (0x0002f893) main_camera4_pane_g2

0x07f6,	// (0x0002f8a6) main_camera4_pane_g3_ParamLimits

0x07f6,	// (0x0002f8a6) main_camera4_pane_g3

0x0809,	// (0x0002f8b9) main_camera4_pane_g4_ParamLimits

0x0809,	// (0x0002f8b9) main_camera4_pane_g4

0x081c,	// (0x0002f8cc) main_camera4_pane_g5_ParamLimits

0x081c,	// (0x0002f8cc) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003e98c) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003e98c) main_camera4_pane_g

0x0840,	// (0x0002f8f0) main_camera4_pane_t1_ParamLimits

0x0840,	// (0x0002f8f0) main_camera4_pane_t1

0x656d,	// (0x0003561d) bg_tb_trans_pane_cp06

0x6583,	// (0x00035633) cam4_indicators_pane_g1

0x6594,	// (0x00035644) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003e9a7) cam4_indicators_pane_g

0x65ac,	// (0x0003565c) cam4_indicators_pane_t1

0x0890,	// (0x0002f940) main_video4_pane_g1_ParamLimits

0x0890,	// (0x0002f940) main_video4_pane_g1

0x089f,	// (0x0002f94f) main_video4_pane_g2_ParamLimits

0x089f,	// (0x0002f94f) main_video4_pane_g2

0x08ae,	// (0x0002f95e) main_video4_pane_g3_ParamLimits

0x08ae,	// (0x0002f95e) main_video4_pane_g3

0x08bd,	// (0x0002f96d) main_video4_pane_g4_ParamLimits

0x08bd,	// (0x0002f96d) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003e9ae) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003e9ae) main_video4_pane_g

0x08db,	// (0x0002f98b) vid4_indicators_pane_ParamLimits

0x08db,	// (0x0002f98b) vid4_indicators_pane

0x0909,	// (0x0002f9b9) video4_image_uncrop_cif_pane_ParamLimits

0x0909,	// (0x0002f9b9) video4_image_uncrop_cif_pane

0x0923,	// (0x0002f9d3) video4_image_uncrop_nhd_pane_ParamLimits

0x0923,	// (0x0002f9d3) video4_image_uncrop_nhd_pane

0x0789,	// (0x0002f839) video4_image_uncrop_vga_pane_ParamLimits

0x0789,	// (0x0002f839) video4_image_uncrop_vga_pane

0x65d0,	// (0x00035680) bg_tb_trans_pane_cp07

0x65e8,	// (0x00035698) vid4_indicators_pane_g1

0x65fe,	// (0x000356ae) vid4_indicators_pane_g2

0x6612,	// (0x000356c2) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003e9b9) vid4_indicators_pane_g

0x6643,	// (0x000356f3) vid4_indicators_pane_t1

0x665a,	// (0x0003570a) cam4_autofocus_pane_g1

0x6662,	// (0x00035712) cam4_autofocus_pane_g2

0x666a,	// (0x0003571a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003e9c4) cam4_autofocus_pane_g

0x6672,	// (0x00035722) cam4_autofocus_pane_g3_copy1

0x609a,	// (0x0003514a) video_down_pane_cp_t1

0x60a8,	// (0x00035158) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003e940) video_down_pane_cp_t

0x9c64,	// (0x00038d14) popup_vitu2_window_ParamLimits

0x9c64,	// (0x00038d14) popup_vitu2_window

0x0939,	// (0x0002f9e9) aid_size_cell2_itu2_ParamLimits

0x0939,	// (0x0002f9e9) aid_size_cell2_itu2

0x095f,	// (0x0002fa0f) aid_size_cell_itu2_ParamLimits

0x095f,	// (0x0002fa0f) aid_size_cell_itu2

0x09bf,	// (0x0002fa6f) bg_popup_window_pane_cp09_ParamLimits

0x09bf,	// (0x0002fa6f) bg_popup_window_pane_cp09

0x09cd,	// (0x0002fa7d) field_vitu2_entry_pane_ParamLimits

0x09cd,	// (0x0002fa7d) field_vitu2_entry_pane

0x09f5,	// (0x0002faa5) grid_vitu2_function_pane_ParamLimits

0x09f5,	// (0x0002faa5) grid_vitu2_function_pane

0x0a46,	// (0x0002faf6) grid_vitu2_itu_pane_ParamLimits

0x0a46,	// (0x0002faf6) grid_vitu2_itu_pane

0x0ada,	// (0x0002fb8a) cell_vitu2_itu_pane_ParamLimits

0x0ada,	// (0x0002fb8a) cell_vitu2_itu_pane

0x0b00,	// (0x0002fbb0) cell_vitu2_function_pane_ParamLimits

0x0b00,	// (0x0002fbb0) cell_vitu2_function_pane

0xd130,	// (0x0003c1e0) bg_popup_call_pane_cp08_ParamLimits

0xd130,	// (0x0003c1e0) bg_popup_call_pane_cp08

0xd147,	// (0x0003c1f7) field_vitu2_entry_pane_g1

0xd153,	// (0x0003c203) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003e9cb) field_vitu2_entry_pane_g

0x667a,	// (0x0003572a) field_vitu2_entry_pane_t1_ParamLimits

0x667a,	// (0x0003572a) field_vitu2_entry_pane_t1

0xd16d,	// (0x0003c21d) field_vitu2_entry_pane_t2_ParamLimits

0xd16d,	// (0x0003c21d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003e9d2) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003e9d2) field_vitu2_entry_pane_t

0x0b44,	// (0x0002fbf4) bg_button_pane_cp010_ParamLimits

0x0b44,	// (0x0002fbf4) bg_button_pane_cp010

0x66a9,	// (0x00035759) cell_vitu2_itu_pane_g1

0x0b60,	// (0x0002fc10) cell_vitu2_itu_pane_t1_ParamLimits

0x0b60,	// (0x0002fc10) cell_vitu2_itu_pane_t1

0x0bbe,	// (0x0002fc6e) cell_vitu2_itu_pane_t2_ParamLimits

0x0bbe,	// (0x0002fc6e) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003e9dc) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003e9dc) cell_vitu2_itu_pane_t

0x65d0,	// (0x00035680) bg_button_pane_cp011

0x0caa,	// (0x0002fd5a) cell_vitu2_function_pane_g1

0x9c03,	// (0x00038cb3) main_myfav_hc_pane

0x0723,	// (0x0002f7d3) popup_image3_note_pane_ParamLimits

0x0723,	// (0x0002f7d3) popup_image3_note_pane

0x073f,	// (0x0002f7ef) popup_image3_tool_bar_pane_ParamLimits

0x073f,	// (0x0002f7ef) popup_image3_tool_bar_pane

0x0c4c,	// (0x0002fcfc) cell_vitu2_itu_pane_t3_ParamLimits

0x0c4c,	// (0x0002fcfc) cell_vitu2_itu_pane_t3

0x9c03,	// (0x00038cb3) bg_popup_trans_pane

0xd192,	// (0x0003c242) grid_image3_tool_bar_pane

0xd19c,	// (0x0003c24c) bg_popup_trans_pane_g1

0xa7b8,	// (0x00039868) bg_popup_trans_pane_g2

0xd1a4,	// (0x0003c254) bg_popup_trans_pane_g3

0xd1ac,	// (0x0003c25c) bg_popup_trans_pane_g4

0xd1b4,	// (0x0003c264) bg_popup_trans_pane_g5

0xd1bc,	// (0x0003c26c) bg_popup_trans_pane_g6

0xd1c4,	// (0x0003c274) bg_popup_trans_pane_g7

0xd1cc,	// (0x0003c27c) bg_popup_trans_pane_g8

0xa798,	// (0x00039848) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003e9e3) bg_popup_trans_pane_g

0xd1d4,	// (0x0003c284) cell_image3_tool_bar_pane_ParamLimits

0xd1d4,	// (0x0003c284) cell_image3_tool_bar_pane

0xc763,	// (0x0003b813) cell_image3_tool_bar_pane_g1

0x9c03,	// (0x00038cb3) bg_popup_trans_pane_cp1

0xd1ea,	// (0x0003c29a) popup_image3_note_pane_t1

0xd1f8,	// (0x0003c2a8) popup_image3_note_pane_t2

0xd206,	// (0x0003c2b6) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003e9f6) popup_image3_note_pane_t

0xd216,	// (0x0003c2c6) popup_image3_note_pane_t3_copy1

0x66bb,	// (0x0003576b) bg_myfav_hc_instruction_pane_ParamLimits

0x66bb,	// (0x0003576b) bg_myfav_hc_instruction_pane

0x66d3,	// (0x00035783) cell_myfav_contact_pane_ParamLimits

0x66d3,	// (0x00035783) cell_myfav_contact_pane

0x66ef,	// (0x0003579f) cell_myfav_contact_pane_cp1_ParamLimits

0x66ef,	// (0x0003579f) cell_myfav_contact_pane_cp1

0x6707,	// (0x000357b7) cell_myfav_contact_pane_cp2_ParamLimits

0x6707,	// (0x000357b7) cell_myfav_contact_pane_cp2

0x671f,	// (0x000357cf) cell_myfav_contact_pane_cp3_ParamLimits

0x671f,	// (0x000357cf) cell_myfav_contact_pane_cp3

0x6736,	// (0x000357e6) cell_myfav_contact_pane_cp4_ParamLimits

0x6736,	// (0x000357e6) cell_myfav_contact_pane_cp4

0x674e,	// (0x000357fe) cell_myfav_contact_pane_cp5_ParamLimits

0x674e,	// (0x000357fe) cell_myfav_contact_pane_cp5

0x6762,	// (0x00035812) cell_myfav_contact_pane_cp6_ParamLimits

0x6762,	// (0x00035812) cell_myfav_contact_pane_cp6

0x6778,	// (0x00035828) cell_myfav_contact_pane_cp7_ParamLimits

0x6778,	// (0x00035828) cell_myfav_contact_pane_cp7

0xd224,	// (0x0003c2d4) listscroll_gen_pane_cp05

0x6790,	// (0x00035840) main_myfav_hc_pane_g1_ParamLimits

0x6790,	// (0x00035840) main_myfav_hc_pane_g1

0x67aa,	// (0x0003585a) main_myfav_hc_pane_g2_ParamLimits

0x67aa,	// (0x0003585a) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003e9fd) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003e9fd) main_myfav_hc_pane_g

0x67de,	// (0x0003588e) main_myfav_hc_pane_t1_ParamLimits

0x67de,	// (0x0003588e) main_myfav_hc_pane_t1

0xd22d,	// (0x0003c2dd) main_myfav_hc_pane_t2_ParamLimits

0xd22d,	// (0x0003c2dd) main_myfav_hc_pane_t2

0xd23f,	// (0x0003c2ef) main_myfav_hc_pane_t3_ParamLimits

0xd23f,	// (0x0003c2ef) main_myfav_hc_pane_t3

0x67f5,	// (0x000358a5) main_myfav_hc_pane_t4_ParamLimits

0x67f5,	// (0x000358a5) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003ea04) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003ea04) main_myfav_hc_pane_t

0xc763,	// (0x0003b813) bg_myfav_hc_instruction_pane_g1

0xd251,	// (0x0003c301) cell_myfav_contact_pane_g1_ParamLimits

0xd251,	// (0x0003c301) cell_myfav_contact_pane_g1

0xd251,	// (0x0003c301) cell_myfav_contact_pane_g2_ParamLimits

0xd251,	// (0x0003c301) cell_myfav_contact_pane_g2

0xd25d,	// (0x0003c30d) cell_myfav_contact_pane_g3_ParamLimits

0xd25d,	// (0x0003c30d) cell_myfav_contact_pane_g3

0xca04,	// (0x0003bab4) cell_myfav_contact_pane_g4_ParamLimits

0xca04,	// (0x0003bab4) cell_myfav_contact_pane_g4

0xd26a,	// (0x0003c31a) cell_myfav_contact_pane_g5_ParamLimits

0xd26a,	// (0x0003c31a) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003ea0f) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003ea0f) cell_myfav_contact_pane_g

0x67c4,	// (0x00035874) main_myfav_hc_pane_g3_ParamLimits

0x67c4,	// (0x00035874) main_myfav_hc_pane_g3

0x0fdf,	// (0x0003008f) popup_adpt_find_window

0x681f,	// (0x000358cf) afind_page_pane_ParamLimits

0x681f,	// (0x000358cf) afind_page_pane

0x6834,	// (0x000358e4) aid_size_cell_afind_ParamLimits

0x6834,	// (0x000358e4) aid_size_cell_afind

0x6852,	// (0x00035902) bg_popup_sub_pane_cp09_ParamLimits

0x6852,	// (0x00035902) bg_popup_sub_pane_cp09

0x685f,	// (0x0003590f) find_pane_cp01_ParamLimits

0x685f,	// (0x0003590f) find_pane_cp01

0xd276,	// (0x0003c326) grid_afind_control_pane_ParamLimits

0xd276,	// (0x0003c326) grid_afind_control_pane

0x686c,	// (0x0003591c) grid_afind_pane_ParamLimits

0x686c,	// (0x0003591c) grid_afind_pane

0x688e,	// (0x0003593e) cell_afind_pane_ParamLimits

0x688e,	// (0x0003593e) cell_afind_pane

0xc763,	// (0x0003b813) afind_page_pane_g1

0x68f7,	// (0x000359a7) afind_page_pane_g2

0x6900,	// (0x000359b0) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003ea1a) afind_page_pane_g

0x6909,	// (0x000359b9) afind_page_pane_t1

0xd28a,	// (0x0003c33a) cell_afind_grid_control_pane_ParamLimits

0xd28a,	// (0x0003c33a) cell_afind_grid_control_pane

0xd075,	// (0x0003c125) bg_button_pane_cp69_ParamLimits

0xd075,	// (0x0003c125) bg_button_pane_cp69

0x6929,	// (0x000359d9) cell_afind_pane_g1_ParamLimits

0x6929,	// (0x000359d9) cell_afind_pane_g1

0x6936,	// (0x000359e6) cell_afind_pane_t1_ParamLimits

0x6936,	// (0x000359e6) cell_afind_pane_t1

0xa5ad,	// (0x0003965d) bg_button_pane_cp72

0xd299,	// (0x0003c349) cell_afind_grid_control_pane_g1

0x4105,	// (0x000331b5) aid_image_placing_area_ParamLimits

0x4105,	// (0x000331b5) aid_image_placing_area

0xcd37,	// (0x0003bde7) field_vitu_entry_pane_g1_ParamLimits

0xcd37,	// (0x0003bde7) field_vitu_entry_pane_g1

0xcd43,	// (0x0003bdf3) field_vitu_entry_pane_g2_ParamLimits

0xcd43,	// (0x0003bdf3) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003e8cb) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003e8cb) field_vitu_entry_pane_g

0x5eed,	// (0x00034f9d) cell_vitu_itu_pane_g1_ParamLimits

0x5f2f,	// (0x00034fdf) cell_vitu_itu_pane_t3_ParamLimits

0x5f2f,	// (0x00034fdf) cell_vitu_itu_pane_t3

0xd01b,	// (0x0003c0cb) mp4_progress_pane_t1_ParamLimits

0xd034,	// (0x0003c0e4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003e960) mp4_progress_pane_t_ParamLimits

0xd04d,	// (0x0003c0fd) mup_progress_pane_cp04_ParamLimits

0x6809,	// (0x000358b9) main_myfav_hc_pane_t5_ParamLimits

0x6809,	// (0x000358b9) main_myfav_hc_pane_t5

0x9c29,	// (0x00038cd9) aid_zoom_text_primary

0x0fdf,	// (0x0003008f) popup_adpt_find_window_ParamLimits

0x9c64,	// (0x00038d14) main_cam_set_pane

0x07bb,	// (0x0002f86b) cam4_zoom_pane_ParamLimits

0x07bb,	// (0x0002f86b) cam4_zoom_pane

0x6948,	// (0x000359f8) main_cam_set_pane_g1_ParamLimits

0x6948,	// (0x000359f8) main_cam_set_pane_g1

0x6956,	// (0x00035a06) main_cam_set_pane_g2_ParamLimits

0x6956,	// (0x00035a06) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003ea21) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003ea21) main_cam_set_pane_g

0x6977,	// (0x00035a27) main_cam_set_pane_t1_ParamLimits

0x6977,	// (0x00035a27) main_cam_set_pane_t1

0x6992,	// (0x00035a42) main_cset_listscroll_pane_ParamLimits

0x6992,	// (0x00035a42) main_cset_listscroll_pane

0x69b6,	// (0x00035a66) main_cset_slider_pane_ParamLimits

0x69b6,	// (0x00035a66) main_cset_slider_pane

0xd2aa,	// (0x0003c35a) main_cset_list_pane_ParamLimits

0xd2aa,	// (0x0003c35a) main_cset_list_pane

0xd2ba,	// (0x0003c36a) scroll_pane_cp028

0x69e0,	// (0x00035a90) aid_area_touch_slider

0x69fc,	// (0x00035aac) cset_slider_pane

0x6a26,	// (0x00035ad6) main_cset_slider_pane_g1

0x6a3b,	// (0x00035aeb) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003ea26) main_cset_slider_pane_g

0xd2f3,	// (0x0003c3a3) main_cset_slider_pane_t1

0x6afd,	// (0x00035bad) main_cset_slider_pane_t2

0x6b17,	// (0x00035bc7) main_cset_slider_pane_t3

0x6b31,	// (0x00035be1) main_cset_slider_pane_t4

0x6b4b,	// (0x00035bfb) main_cset_slider_pane_t5

0x6b69,	// (0x00035c19) main_cset_slider_pane_t6

0x6b7e,	// (0x00035c2e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003ea4b) main_cset_slider_pane_t

0x6c8a,	// (0x00035d3a) cset_list_set_pane_ParamLimits

0x6c8a,	// (0x00035d3a) cset_list_set_pane

0x6c9e,	// (0x00035d4e) aid_position_infowindow_above

0x6ca6,	// (0x00035d56) aid_position_infowindow_below

0x6cae,	// (0x00035d5e) cset_list_set_pane_g1_ParamLimits

0x6cae,	// (0x00035d5e) cset_list_set_pane_g1

0x6cba,	// (0x00035d6a) cset_list_set_pane_g3_ParamLimits

0x6cba,	// (0x00035d6a) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003ea6a) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003ea6a) cset_list_set_pane_g

0x6cc9,	// (0x00035d79) cset_list_set_pane_t1_ParamLimits

0x6cc9,	// (0x00035d79) cset_list_set_pane_t1

0x9c64,	// (0x00038d14) list_highlight_pane_cp021_ParamLimits

0x9c64,	// (0x00038d14) list_highlight_pane_cp021

0xafcf,	// (0x0003a07f) cset_slider_pane_g1

0xafe1,	// (0x0003a091) cset_slider_pane_g2

0xafd8,	// (0x0003a088) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003ea6f) cset_slider_pane_g

0x6cde,	// (0x00035d8e) aid_area_touch_cam4_zoom

0x6ce6,	// (0x00035d96) cam4_zoom_cont_pane

0x6cee,	// (0x00035d9e) cam4_zoom_pane_g1

0x6cf6,	// (0x00035da6) cam4_zoom_pane_g2

0x0cbe,	// (0x0002fd6e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003ea76) cam4_zoom_pane_g

0x6cfe,	// (0x00035dae) cam4_zoom_cont_pane_g1

0x6d07,	// (0x00035db7) cam4_zoom_cont_pane_g2

0x6d10,	// (0x00035dc0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003ea7d) cam4_zoom_cont_pane_g

0x6400,	// (0x000354b0) call4_image_pane_ParamLimits

0x6400,	// (0x000354b0) call4_image_pane

0xd081,	// (0x0003c131) call4_windows_conf_pane_ParamLimits

0xd09c,	// (0x0003c14c) popup_call4_audio_in_window_ParamLimits

0xd09c,	// (0x0003c14c) popup_call4_audio_in_window

0x9c03,	// (0x00038cb3) bg_popup_call2_act_pane_cp02

0xd0fe,	// (0x0003c1ae) call4_list_conf_pane

0xc763,	// (0x0003b813) call4_image_pane_g1

0xc763,	// (0x0003b813) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003e78c) call4_image_pane_g

0xd393,	// (0x0003c443) list_single_graphic_popup_conf4_pane_ParamLimits

0xd393,	// (0x0003c443) list_single_graphic_popup_conf4_pane

0x9c03,	// (0x00038cb3) list_highlight_pane_cp022

0xd3a8,	// (0x0003c458) list_single_graphic_popup_conf4_pane_g1

0xacb7,	// (0x00039d67) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003ea84) list_single_graphic_popup_conf4_pane_g

0xd3b0,	// (0x0003c460) list_single_graphic_popup_conf4_pane_t1

0x2160,	// (0x00031210) popup_vtel_slider_window_ParamLimits

0x2160,	// (0x00031210) popup_vtel_slider_window

0xd063,	// (0x0003c113) dialer2_ne_pane_t2_ParamLimits

0xd063,	// (0x0003c113) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003e965) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003e965) dialer2_ne_pane_t

0xc542,	// (0x0003b5f2) bg_popup_sub_pane_cp010_ParamLimits

0xc542,	// (0x0003b5f2) bg_popup_sub_pane_cp010

0x6d19,	// (0x00035dc9) popup_vtel_slider_window_g1_ParamLimits

0x6d19,	// (0x00035dc9) popup_vtel_slider_window_g1

0x6d2c,	// (0x00035ddc) popup_vtel_slider_window_g2_ParamLimits

0x6d2c,	// (0x00035ddc) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003ea89) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003ea89) popup_vtel_slider_window_g

0x6d82,	// (0x00035e32) vtel_slider_pane_ParamLimits

0x6d82,	// (0x00035e32) vtel_slider_pane

0x6da4,	// (0x00035e54) vtel_slider_pane_g1_ParamLimits

0x6da4,	// (0x00035e54) vtel_slider_pane_g1

0x6db8,	// (0x00035e68) vtel_slider_pane_g2_ParamLimits

0x6db8,	// (0x00035e68) vtel_slider_pane_g2

0x6dd0,	// (0x00035e80) vtel_slider_pane_g3_ParamLimits

0x6dd0,	// (0x00035e80) vtel_slider_pane_g3

0x6da4,	// (0x00035e54) vtel_slider_pane_g4_ParamLimits

0x6da4,	// (0x00035e54) vtel_slider_pane_g4

0x6de6,	// (0x00035e96) vtel_slider_pane_g5_ParamLimits

0x6de6,	// (0x00035e96) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003ea92) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003ea92) vtel_slider_pane_g

0x9c64,	// (0x00038d14) main_gallery2_pane

0x098b,	// (0x0002fa3b) aid_size_row_itut2_dropdow_list_ParamLimits

0x098b,	// (0x0002fa3b) aid_size_row_itut2_dropdow_list

0x0a1d,	// (0x0002facd) grid_vitu2_function_top_pane_ParamLimits

0x0a1d,	// (0x0002facd) grid_vitu2_function_top_pane

0x0a81,	// (0x0002fb31) popup_vitu2_dropdown_list_window_ParamLimits

0x0a81,	// (0x0002fb31) popup_vitu2_dropdown_list_window

0x0aae,	// (0x0002fb5e) popup_vitu2_match_list_window

0x0cc6,	// (0x0002fd76) cell_vitu2_function_top_pane_ParamLimits

0x0cc6,	// (0x0002fd76) cell_vitu2_function_top_pane

0x0ce6,	// (0x0002fd96) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0ce6,	// (0x0002fd96) cell_vitu2_function_top_pane_cp01

0x0d02,	// (0x0002fdb2) cell_vitu2_function_top_wide_pane_ParamLimits

0x0d02,	// (0x0002fdb2) cell_vitu2_function_top_wide_pane

0x65d0,	// (0x00035680) bg_button_pane_cp012

0x0d1e,	// (0x0002fdce) cell_vitu2_function_top_pane_g1

0x6dfc,	// (0x00035eac) bg_button_pane_cp013_ParamLimits

0x6dfc,	// (0x00035eac) bg_button_pane_cp013

0x6e18,	// (0x00035ec8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e18,	// (0x00035ec8) cell_vitu2_function_top_wide_pane_g1

0x65d0,	// (0x00035680) bg_popup_sub_pane_cp20

0x0d32,	// (0x0002fde2) list_vitu2_match_list_pane

0xd19c,	// (0x0003c24c) bg_popup_sub_pane_cp20_g1

0xd1a4,	// (0x0003c254) bg_popup_sub_pane_cp20_g2

0xa7b8,	// (0x00039868) bg_popup_sub_pane_cp20_g3

0xd1ac,	// (0x0003c25c) bg_popup_sub_pane_cp20_g4

0xa798,	// (0x00039848) bg_popup_sub_pane_cp20_g5

0xd3d4,	// (0x0003c484) bg_popup_sub_pane_cp20_g6

0xd1bc,	// (0x0003c26c) bg_popup_sub_pane_cp20_g7

0xd1c4,	// (0x0003c274) bg_popup_sub_pane_cp20_g8

0xd1cc,	// (0x0003c27c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003ea9d) bg_popup_sub_pane_cp20_g

0x6e30,	// (0x00035ee0) list_vitu2_match_list_item_pane_ParamLimits

0x6e30,	// (0x00035ee0) list_vitu2_match_list_item_pane

0x6e42,	// (0x00035ef2) list_vitu2_match_list_item_pane_t1

0x1374,	// (0x00030424) bg_popup_sub_pane_cp21

0x6e8e,	// (0x00035f3e) grid_vitu2_dropdown_list_pane

0x0d50,	// (0x0002fe00) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x0d50,	// (0x0002fe00) cell_vitu2_dropdown_list_char_pane

0x0d73,	// (0x0002fe23) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x0d73,	// (0x0002fe23) cell_vitu2_dropdown_list_ctrl_pane

0xd3e8,	// (0x0003c498) cell_vitu2_dropdown_list_char_pane_g1

0xd3f1,	// (0x0003c4a1) cell_vitu2_dropdown_list_char_pane_g2

0xd3fa,	// (0x0003c4aa) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003eaba) cell_vitu2_dropdown_list_char_pane_g

0x0da1,	// (0x0002fe51) cell_vitu2_dropdown_list_char_pane_t1

0x6e96,	// (0x00035f46) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e96,	// (0x00035f46) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ea6,	// (0x00035f56) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ea6,	// (0x00035f56) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6eb7,	// (0x00035f67) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6eb7,	// (0x00035f67) cell_vitu2_dropdown_list_ctrl_pane_g3

0x0daf,	// (0x0002fe5f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x0daf,	// (0x0002fe5f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x656d,	// (0x0003561d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x656d,	// (0x0003561d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003eac1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003eac1) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ec7,	// (0x00035f77) aid_size_cell_gallery2_ParamLimits

0x6ec7,	// (0x00035f77) aid_size_cell_gallery2

0x6ee5,	// (0x00035f95) grid_gallery2_pane_ParamLimits

0x6ee5,	// (0x00035f95) grid_gallery2_pane

0x6eff,	// (0x00035faf) scroll_pane_cp029_ParamLimits

0x6eff,	// (0x00035faf) scroll_pane_cp029

0x6f0b,	// (0x00035fbb) cell_gallery2_pane_ParamLimits

0x6f0b,	// (0x00035fbb) cell_gallery2_pane

0xd403,	// (0x0003c4b3) cell_gallery2_pane_g2

0x6f6c,	// (0x0003601c) cell_gallery2_pane_g3

0xd40b,	// (0x0003c4bb) cell_gallery2_pane_g4

0xd413,	// (0x0003c4c3) cell_gallery2_pane_g5

0xa55b,	// (0x0003960b) grid_highlight_pane_cp10

0x0aae,	// (0x0002fb5e) popup_vitu2_match_list_window_ParamLimits

0x0ac5,	// (0x0002fb75) popup_vitu2_query_window_ParamLimits

0x0ac5,	// (0x0002fb75) popup_vitu2_query_window

0x1374,	// (0x00030424) bg_vitu2_candi_button_pane

0xd3e8,	// (0x0003c498) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3f1,	// (0x0003c4a1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3fa,	// (0x0003c4aa) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f74,	// (0x00036024) bg_button_pane_cp015

0x6f88,	// (0x00036038) bg_button_pane_cp016

0x6f9b,	// (0x0003604b) bg_button_pane_cp017

0xc30a,	// (0x0003b3ba) bg_popup_sub_pane_cp22

0xd41b,	// (0x0003c4cb) popup_vitu2_query_window_g1

0x6fe0,	// (0x00036090) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003eacc) popup_vitu2_query_window_g

0x6fff,	// (0x000360af) popup_vitu2_query_window_t1_ParamLimits

0x6fff,	// (0x000360af) popup_vitu2_query_window_t1

0x7034,	// (0x000360e4) popup_vitu2_query_window_t2_ParamLimits

0x7034,	// (0x000360e4) popup_vitu2_query_window_t2

0x7046,	// (0x000360f6) popup_vitu2_query_window_t3_ParamLimits

0x7046,	// (0x000360f6) popup_vitu2_query_window_t3

0x706e,	// (0x0003611e) popup_vitu2_query_window_t4_ParamLimits

0x706e,	// (0x0003611e) popup_vitu2_query_window_t4

0x708f,	// (0x0003613f) popup_vitu2_query_window_t5_ParamLimits

0x708f,	// (0x0003613f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003ead3) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003ead3) popup_vitu2_query_window_t

0xd2a2,	// (0x0003c352) main_cset_text_pane

0x69e0,	// (0x00035a90) aid_area_touch_slider_ParamLimits

0x69fc,	// (0x00035aac) cset_slider_pane_ParamLimits

0x6a26,	// (0x00035ad6) main_cset_slider_pane_g1_ParamLimits

0x6a3b,	// (0x00035aeb) main_cset_slider_pane_g2_ParamLimits

0xd2c3,	// (0x0003c373) main_cset_slider_pane_g3_ParamLimits

0xd2c3,	// (0x0003c373) main_cset_slider_pane_g3

0x6a50,	// (0x00035b00) main_cset_slider_pane_g4_ParamLimits

0x6a50,	// (0x00035b00) main_cset_slider_pane_g4

0x6a5f,	// (0x00035b0f) main_cset_slider_pane_g5_ParamLimits

0x6a5f,	// (0x00035b0f) main_cset_slider_pane_g5

0x6a6d,	// (0x00035b1d) main_cset_slider_pane_g6_ParamLimits

0x6a6d,	// (0x00035b1d) main_cset_slider_pane_g6

0xf976,	// (0x0003ea26) main_cset_slider_pane_g_ParamLimits

0xd2f3,	// (0x0003c3a3) main_cset_slider_pane_t1_ParamLimits

0x6afd,	// (0x00035bad) main_cset_slider_pane_t2_ParamLimits

0x6b17,	// (0x00035bc7) main_cset_slider_pane_t3_ParamLimits

0x6b31,	// (0x00035be1) main_cset_slider_pane_t4_ParamLimits

0x6b4b,	// (0x00035bfb) main_cset_slider_pane_t5_ParamLimits

0x6b69,	// (0x00035c19) main_cset_slider_pane_t6_ParamLimits

0x6b7e,	// (0x00035c2e) main_cset_slider_pane_t7_ParamLimits

0x6bac,	// (0x00035c5c) main_cset_slider_pane_t8_ParamLimits

0x6bac,	// (0x00035c5c) main_cset_slider_pane_t8

0x6bd4,	// (0x00035c84) main_cset_slider_pane_t9_ParamLimits

0x6bd4,	// (0x00035c84) main_cset_slider_pane_t9

0x6bfc,	// (0x00035cac) main_cset_slider_pane_t10_ParamLimits

0x6bfc,	// (0x00035cac) main_cset_slider_pane_t10

0x6c24,	// (0x00035cd4) main_cset_slider_pane_t11_ParamLimits

0x6c24,	// (0x00035cd4) main_cset_slider_pane_t11

0x6c4e,	// (0x00035cfe) main_cset_slider_pane_t12_ParamLimits

0x6c4e,	// (0x00035cfe) main_cset_slider_pane_t12

0x6c6b,	// (0x00035d1b) main_cset_slider_pane_t13_ParamLimits

0x6c6b,	// (0x00035d1b) main_cset_slider_pane_t13

0xf99b,	// (0x0003ea4b) main_cset_slider_pane_t_ParamLimits

0x9c03,	// (0x00038cb3) bg_popup_sub_pane_cp011

0xd427,	// (0x0003c4d7) main_cset_text_pane_g1

0xd42f,	// (0x0003c4df) main_cset_text_pane_t1

0xd43d,	// (0x0003c4ed) main_cset_text_pane_t2

0xd44b,	// (0x0003c4fb) main_cset_text_pane_t3

0xd459,	// (0x0003c509) main_cset_text_pane_t4

0xd467,	// (0x0003c517) main_cset_text_pane_t5

0xd475,	// (0x0003c525) main_cset_text_pane_t6

0xd483,	// (0x0003c533) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003eae2) main_cset_text_pane_t

0x9c03,	// (0x00038cb3) main_cam4_burst_pane

0x9c03,	// (0x00038cb3) main_cam5_pane

0x6917,	// (0x000359c7) bg_button_pane_cp019

0x6920,	// (0x000359d0) bg_button_pane_cp020

0xd2cf,	// (0x0003c37f) main_cset_slider_pane_g7_ParamLimits

0xd2cf,	// (0x0003c37f) main_cset_slider_pane_g7

0xd2db,	// (0x0003c38b) main_cset_slider_pane_g8_ParamLimits

0xd2db,	// (0x0003c38b) main_cset_slider_pane_g8

0x6a81,	// (0x00035b31) main_cset_slider_pane_g9_ParamLimits

0x6a81,	// (0x00035b31) main_cset_slider_pane_g9

0x6a8d,	// (0x00035b3d) main_cset_slider_pane_g10_ParamLimits

0x6a8d,	// (0x00035b3d) main_cset_slider_pane_g10

0x6a99,	// (0x00035b49) main_cset_slider_pane_g11_ParamLimits

0x6a99,	// (0x00035b49) main_cset_slider_pane_g11

0x6aa5,	// (0x00035b55) main_cset_slider_pane_g12_ParamLimits

0x6aa5,	// (0x00035b55) main_cset_slider_pane_g12

0x6ab1,	// (0x00035b61) main_cset_slider_pane_g13_ParamLimits

0x6ab1,	// (0x00035b61) main_cset_slider_pane_g13

0x6abd,	// (0x00035b6d) main_cset_slider_pane_g14_ParamLimits

0x6abd,	// (0x00035b6d) main_cset_slider_pane_g14

0x6ac9,	// (0x00035b79) main_cset_slider_pane_g15_ParamLimits

0x6ac9,	// (0x00035b79) main_cset_slider_pane_g15

0xd321,	// (0x0003c3d1) main_cset_slider_pane_t14_ParamLimits

0xd321,	// (0x0003c3d1) main_cset_slider_pane_t14

0xd35a,	// (0x0003c40a) main_cset_slider_pane_t15_ParamLimits

0xd35a,	// (0x0003c40a) main_cset_slider_pane_t15

0x7106,	// (0x000361b6) aid_cam4_burst_size_cell_ParamLimits

0x7106,	// (0x000361b6) aid_cam4_burst_size_cell

0x7126,	// (0x000361d6) grid_cam4_burst_pane_ParamLimits

0x7126,	// (0x000361d6) grid_cam4_burst_pane

0x7160,	// (0x00036210) linegrid_cam4_burst_pane_ParamLimits

0x7160,	// (0x00036210) linegrid_cam4_burst_pane

0xd491,	// (0x0003c541) scroll_pane_cp30_ParamLimits

0xd491,	// (0x0003c541) scroll_pane_cp30

0x7182,	// (0x00036232) cell_cam4_burst_pane_ParamLimits

0x7182,	// (0x00036232) cell_cam4_burst_pane

0xd49d,	// (0x0003c54d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd49d,	// (0x0003c54d) linegrid_cam4_burst_pane_g1

0x71d7,	// (0x00036287) linegrid_cam4_burst_pane_g2_ParamLimits

0x71d7,	// (0x00036287) linegrid_cam4_burst_pane_g2

0xd4aa,	// (0x0003c55a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4aa,	// (0x0003c55a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003eaf1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003eaf1) linegrid_cam4_burst_pane_g

0x71e8,	// (0x00036298) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71e8,	// (0x00036298) linegrid_cam4_burst_pane_g3_copy1

0xd4b7,	// (0x0003c567) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4b7,	// (0x0003c567) linegrid_cam4_burst_pane_g4

0x7206,	// (0x000362b6) linegrid_cam4_burst_pane_g5_ParamLimits

0x7206,	// (0x000362b6) linegrid_cam4_burst_pane_g5

0x7217,	// (0x000362c7) linegrid_cam4_burst_pane_g6_ParamLimits

0x7217,	// (0x000362c7) linegrid_cam4_burst_pane_g6

0xd4c4,	// (0x0003c574) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4c4,	// (0x0003c574) linegrid_cam4_burst_pane_g7

0x722e,	// (0x000362de) cell_cam4_burst_pane_g1

0xd4dd,	// (0x0003c58d) main_cam5_pane_t1_ParamLimits

0xd4dd,	// (0x0003c58d) main_cam5_pane_t1

0xd54e,	// (0x0003c5fe) main_cam5_pane_t2_ParamLimits

0xd54e,	// (0x0003c5fe) main_cam5_pane_t2

0xd560,	// (0x0003c610) main_cam5_pane_t3_ParamLimits

0xd560,	// (0x0003c610) main_cam5_pane_t3

0xd572,	// (0x0003c622) main_cam5_pane_t4_ParamLimits

0xd572,	// (0x0003c622) main_cam5_pane_t4

0xd58a,	// (0x0003c63a) main_cam5_pane_t5_ParamLimits

0xd58a,	// (0x0003c63a) main_cam5_pane_t5

0xd59e,	// (0x0003c64e) main_cam5_pane_t6_ParamLimits

0xd59e,	// (0x0003c64e) main_cam5_pane_t6

0xd5b2,	// (0x0003c662) main_cam5_pane_t7_ParamLimits

0xd5b2,	// (0x0003c662) main_cam5_pane_t7

0xd5c4,	// (0x0003c674) main_cam5_pane_t8_ParamLimits

0xd5c4,	// (0x0003c674) main_cam5_pane_t8

0xd5e2,	// (0x0003c692) main_cam5_pane_t9_ParamLimits

0xd5e2,	// (0x0003c692) main_cam5_pane_t9

0xd5f4,	// (0x0003c6a4) main_cam5_pane_t10_ParamLimits

0xd5f4,	// (0x0003c6a4) main_cam5_pane_t10

0xd606,	// (0x0003c6b6) main_cam5_pane_t11_ParamLimits

0xd606,	// (0x0003c6b6) main_cam5_pane_t11

0xd61a,	// (0x0003c6ca) main_cam5_pane_t12_ParamLimits

0xd61a,	// (0x0003c6ca) main_cam5_pane_t12

0xd631,	// (0x0003c6e1) main_cam5_pane_t13_ParamLimits

0xd631,	// (0x0003c6e1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003eafd) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003eafd) main_cam5_pane_t

0x1062,	// (0x00030112) popup_scut_keymap_window_ParamLimits

0x1062,	// (0x00030112) popup_scut_keymap_window

0x7241,	// (0x000362f1) aid_size_cell_brow_shortcut

0xa55b,	// (0x0003960b) bg_popup_window_pane_cp010

0x724d,	// (0x000362fd) grid_scut_pane

0x7259,	// (0x00036309) cell_scut_pane_ParamLimits

0x7259,	// (0x00036309) cell_scut_pane

0x7272,	// (0x00036322) cell_scut_pane_g1

0xd654,	// (0x0003c704) cell_scut_pane_t1

0xd663,	// (0x0003c713) cell_scut_pane_t2

0x727b,	// (0x0003632b) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003eb18) cell_scut_pane_t

0x5438,	// (0x000344e8) main_mup3_pane_g8_ParamLimits

0x5438,	// (0x000344e8) main_mup3_pane_g8

0x09a7,	// (0x0002fa57) area_vitu2_query_pane_ParamLimits

0x09a7,	// (0x0002fa57) area_vitu2_query_pane

0x6fae,	// (0x0003605e) input_focus_pane_cp08

0xd672,	// (0x0003c722) area_vitu2_query_pane_g1

0x7289,	// (0x00036339) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003eb1f) area_vitu2_query_pane_g

0x729a,	// (0x0003634a) area_vitu2_query_pane_t1_ParamLimits

0x729a,	// (0x0003634a) area_vitu2_query_pane_t1

0x72ae,	// (0x0003635e) area_vitu2_query_pane_t2_ParamLimits

0x72ae,	// (0x0003635e) area_vitu2_query_pane_t2

0x72c2,	// (0x00036372) area_vitu2_query_pane_t3_ParamLimits

0x72c2,	// (0x00036372) area_vitu2_query_pane_t3

0xd67e,	// (0x0003c72e) area_vitu2_query_pane_t4_ParamLimits

0xd67e,	// (0x0003c72e) area_vitu2_query_pane_t4

0xd6a6,	// (0x0003c756) area_vitu2_query_pane_t5_ParamLimits

0xd6a6,	// (0x0003c756) area_vitu2_query_pane_t5

0xd6ce,	// (0x0003c77e) area_vitu2_query_pane_t6_ParamLimits

0xd6ce,	// (0x0003c77e) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003eb24) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003eb24) area_vitu2_query_pane_t

0x72ea,	// (0x0003639a) bg_button_pane_cp018

0x72f8,	// (0x000363a8) bg_button_pane_cp021

0x7304,	// (0x000363b4) bg_button_pane_cp022

0x7315,	// (0x000363c5) input_focus_pane_cp09

0x363b,	// (0x000326eb) aid_size_touch_mv_arrow_left

0x3664,	// (0x00032714) aid_size_touch_mv_arrow_right

0x6ae1,	// (0x00035b91) main_cset_slider_pane_g16_ParamLimits

0x6ae1,	// (0x00035b91) main_cset_slider_pane_g16

0x6aef,	// (0x00035b9f) main_cset_slider_pane_g17_ParamLimits

0x6aef,	// (0x00035b9f) main_cset_slider_pane_g17

0x722e,	// (0x000362de) cell_cam4_burst_pane_g1_ParamLimits

0x9c03,	// (0x00038cb3) compa_mode_pane

0x6d3c,	// (0x00035dec) popup_vtel_slider_window_g3_ParamLimits

0x6d3c,	// (0x00035dec) popup_vtel_slider_window_g3

0x6d53,	// (0x00035e03) popup_vtel_slider_window_g4_ParamLimits

0x6d53,	// (0x00035e03) popup_vtel_slider_window_g4

0x6d6a,	// (0x00035e1a) popup_vtel_slider_window_t1_ParamLimits

0x6d6a,	// (0x00035e1a) popup_vtel_slider_window_t1

0x9c03,	// (0x00038cb3) main_cl_pane

0xc336,	// (0x0003b3e6) popup_imed_adjust2_window_ParamLimits

0xc30a,	// (0x0003b3ba) bg_tb_trans_pane_cp05_ParamLimits

0xcc6c,	// (0x0003bd1c) popup_imed_adjust2_window_g1_ParamLimits

0xcc7b,	// (0x0003bd2b) popup_imed_adjust2_window_g2_ParamLimits

0xcc7b,	// (0x0003bd2b) popup_imed_adjust2_window_g2

0xcc87,	// (0x0003bd37) popup_imed_adjust2_window_g3_ParamLimits

0xcc87,	// (0x0003bd37) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003e88f) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003e88f) popup_imed_adjust2_window_g

0xcc93,	// (0x0003bd43) popup_imed_adjust2_window_t1_ParamLimits

0xccab,	// (0x0003bd5b) slider_imed_adjust_pane_ParamLimits

0xccbf,	// (0x0003bd6f) slider_imed_adjust_pane_g1_ParamLimits

0xcccf,	// (0x0003bd7f) slider_imed_adjust_pane_g2_ParamLimits

0xccdf,	// (0x0003bd8f) slider_imed_adjust_pane_g3_ParamLimits

0xccf0,	// (0x0003bda0) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003e896) slider_imed_adjust_pane_g_ParamLimits

0x075b,	// (0x0002f80b) aid_touch_area_cam4_ParamLimits

0x075b,	// (0x0002f80b) aid_touch_area_cam4

0x653b,	// (0x000355eb) battery_pane_cp01

0x082d,	// (0x0002f8dd) main_camera4_pane_g6_ParamLimits

0x082d,	// (0x0002f8dd) main_camera4_pane_g6

0x0857,	// (0x0002f907) main_camera4_pane_t2_ParamLimits

0x0857,	// (0x0002f907) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003e999) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003e999) main_camera4_pane_t

0x0878,	// (0x0002f928) aid_touch_area_vid4_ParamLimits

0x0878,	// (0x0002f928) aid_touch_area_vid4

0x08cc,	// (0x0002f97c) main_video4_pane_g5_ParamLimits

0x08cc,	// (0x0002f97c) main_video4_pane_g5

0x08f1,	// (0x0002f9a1) vid4_progress_pane_ParamLimits

0x08f1,	// (0x0002f9a1) vid4_progress_pane

0xd2e7,	// (0x0003c397) main_cset_slider_pane_g18_ParamLimits

0xd2e7,	// (0x0003c397) main_cset_slider_pane_g18

0xd4d1,	// (0x0003c581) cell_cam4_burst_pane_g2_ParamLimits

0xd4d1,	// (0x0003c581) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003eaf8) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003eaf8) cell_cam4_burst_pane_g

0xa3a5,	// (0x00039455) bg_cl_pane_ParamLimits

0xa3a5,	// (0x00039455) bg_cl_pane

0x7326,	// (0x000363d6) cl_header_pane_ParamLimits

0x7326,	// (0x000363d6) cl_header_pane

0x733a,	// (0x000363ea) cl_listscroll_pane_ParamLimits

0x733a,	// (0x000363ea) cl_listscroll_pane

0xd71a,	// (0x0003c7ca) bg_cl_pane_g1

0xd722,	// (0x0003c7d2) bg_cl_pane_g2

0xd72a,	// (0x0003c7da) bg_cl_pane_g3

0xd732,	// (0x0003c7e2) bg_cl_pane_g4

0xd73a,	// (0x0003c7ea) bg_cl_pane_g5

0xd742,	// (0x0003c7f2) bg_cl_pane_g6

0xd74a,	// (0x0003c7fa) bg_cl_pane_g7

0xd752,	// (0x0003c802) bg_cl_pane_g8

0xd75a,	// (0x0003c80a) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003eb33) bg_cl_pane_g

0x734a,	// (0x000363fa) aid_height_cl_leading_ParamLimits

0x734a,	// (0x000363fa) aid_height_cl_leading

0x7356,	// (0x00036406) aid_height_cl_text_ParamLimits

0x7356,	// (0x00036406) aid_height_cl_text

0x9c64,	// (0x00038d14) bg_cl_header_pane_ParamLimits

0x9c64,	// (0x00038d14) bg_cl_header_pane

0x7375,	// (0x00036425) cl_header_pane_g1_ParamLimits

0x7375,	// (0x00036425) cl_header_pane_g1

0x738b,	// (0x0003643b) cl_header_pane_t1_ParamLimits

0x738b,	// (0x0003643b) cl_header_pane_t1

0xd762,	// (0x0003c812) cl_list_pane

0xd2ba,	// (0x0003c36a) hc_scroll_pane_cp01

0xa798,	// (0x00039848) bg_cl_header_pane_g1

0xd19c,	// (0x0003c24c) bg_cl_header_pane_g2

0xa7b8,	// (0x00039868) bg_cl_header_pane_g3

0xd1ac,	// (0x0003c25c) bg_cl_header_pane_g4

0xd1a4,	// (0x0003c254) bg_cl_header_pane_g5

0xd3d4,	// (0x0003c484) bg_cl_header_pane_g6

0xd1c4,	// (0x0003c274) bg_cl_header_pane_g7

0xd1cc,	// (0x0003c27c) bg_cl_header_pane_g8

0xd1bc,	// (0x0003c26c) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003eb46) bg_cl_header_pane_g

0x73a4,	// (0x00036454) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73a4,	// (0x00036454) hc_cl_list_double_graphic_heading_pane

0x73b7,	// (0x00036467) hc_cl_list_single_graphic_pane_ParamLimits

0x73b7,	// (0x00036467) hc_cl_list_single_graphic_pane

0x73cf,	// (0x0003647f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73cf,	// (0x0003647f) hc_cl_list_single_graphic_pane_g1

0x73db,	// (0x0003648b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73db,	// (0x0003648b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003eb59) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003eb59) hc_cl_list_single_graphic_pane_g

0x73ef,	// (0x0003649f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73ef,	// (0x0003649f) hc_cl_list_single_graphic_pane_t1

0x73cf,	// (0x0003647f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73cf,	// (0x0003647f) hc_cl_list_double_graphic_heading_pane_g1

0x7404,	// (0x000364b4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7404,	// (0x000364b4) hc_cl_list_double_graphic_heading_pane_g2

0x7418,	// (0x000364c8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7418,	// (0x000364c8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003eb5e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003eb5e) hc_cl_list_double_graphic_heading_pane_g

0x742c,	// (0x000364dc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x742c,	// (0x000364dc) hc_cl_list_double_graphic_heading_pane_t1

0x7441,	// (0x000364f1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7441,	// (0x000364f1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003eb65) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003eb65) hc_cl_list_double_graphic_heading_pane_t

0x0dcb,	// (0x0002fe7b) vid4_progress_pane_g1

0x0ddd,	// (0x0002fe8d) vid4_progress_pane_g2

0x3d2c,	// (0x00032ddc) vid4_progress_pane_g3

0x745e,	// (0x0003650e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003eb6a) vid4_progress_pane_g

0x747c,	// (0x0003652c) vid4_progress_pane_t1

0x7491,	// (0x00036541) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003eb75) vid4_progress_pane_t

0x74bc,	// (0x0003656c) wait_bar_pane_cp07

0xc550,	// (0x0003b600) blid_firmament_pane_ParamLimits

0xc593,	// (0x0003b643) popup_blid_sat_info2_window_g1

0xc5b7,	// (0x0003b667) popup_blid_sat_info2_window_t3

0xc5c5,	// (0x0003b675) popup_blid_sat_info2_window_t4

0xc5d3,	// (0x0003b683) popup_blid_sat_info2_window_t5

0xc5e1,	// (0x0003b691) popup_blid_sat_info2_window_t6

0xc5f1,	// (0x0003b6a1) popup_blid_sat_info2_window_t7

0xc5ff,	// (0x0003b6af) popup_blid_sat_info2_window_t8

0xc60d,	// (0x0003b6bd) popup_blid_sat_info2_window_t9

0xc61b,	// (0x0003b6cb) popup_blid_sat_info2_window_t10

0xc6e3,	// (0x0003b793) aid_firma_cardinal_ParamLimits

0xc6f7,	// (0x0003b7a7) blid_firmament_pane_t1_ParamLimits

0xc70e,	// (0x0003b7be) blid_firmament_pane_t2_ParamLimits

0xc725,	// (0x0003b7d5) blid_firmament_pane_t3_ParamLimits

0xc73c,	// (0x0003b7ec) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003e783) blid_firmament_pane_t_ParamLimits

0xc753,	// (0x0003b803) blid_sat_info_pane_ParamLimits

0x9c64,	// (0x00038d14) main_cam_set_pane_ParamLimits

0x5c97,	// (0x00034d47) aid_size_cell_colour_35_ParamLimits

0x5cb7,	// (0x00034d67) aid_size_cell_colour_112_ParamLimits

0x5cd7,	// (0x00034d87) aid_size_cell_effect_ParamLimits

0xc30a,	// (0x0003b3ba) bg_tb_trans_pane_cp02_ParamLimits

0xa9f1,	// (0x00039aa1) heading_imed_pane_ParamLimits

0x5cf7,	// (0x00034da7) listscroll_imed_pane_ParamLimits

0xb920,	// (0x0003a9d0) popup_call2_audio_first_window_g5_ParamLimits

0xb920,	// (0x0003a9d0) popup_call2_audio_first_window_g5

0x0536,	// (0x0002f5e6) aid_size_touch_image3_arrow_left_ParamLimits

0x0536,	// (0x0002f5e6) aid_size_touch_image3_arrow_left

0x0562,	// (0x0002f612) aid_size_touch_image3_arrow_right_ParamLimits

0x0562,	// (0x0002f612) aid_size_touch_image3_arrow_right

0x74a7,	// (0x00036557) vid4_progress_pane_t3

0x6016,	// (0x000350c6) main_hwr_training_symbol_option_pane_ParamLimits

0x6016,	// (0x000350c6) main_hwr_training_symbol_option_pane

0xcf5b,	// (0x0003c00b) popup_hwr_training_preview_window_ParamLimits

0xcf5b,	// (0x0003c00b) popup_hwr_training_preview_window

0x03d3,	// (0x0002f483) hwr_training_navi_pane_g5_ParamLimits

0x03d3,	// (0x0002f483) hwr_training_navi_pane_g5

0xd18a,	// (0x0003c23a) popup_char_count_window

0x65d0,	// (0x00035680) bg_popup_sub_pane_cp20_ParamLimits

0x0d32,	// (0x0002fde2) list_vitu2_match_list_pane_ParamLimits

0x0d41,	// (0x0002fdf1) vitu2_page_scroll_pane_ParamLimits

0x0d41,	// (0x0002fdf1) vitu2_page_scroll_pane

0xd78d,	// (0x0003c83d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd78d,	// (0x0003c83d) list_single_hwr_training_symbol_option_pane

0xd7a0,	// (0x0003c850) list_single_hwr_training_symbol_option_pane_g1

0xd7a8,	// (0x0003c858) list_single_hwr_training_symbol_option_pane_t1

0xd7b6,	// (0x0003c866) bg_button_pane_cp023

0xd7bf,	// (0x0003c86f) bg_button_pane_cp024

0x74ff,	// (0x000365af) vitu2_page_scroll_pane_g1

0x7507,	// (0x000365b7) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003eb7c) vitu2_page_scroll_pane_g

0x7511,	// (0x000365c1) vitu2_page_scroll_pane_t1

0xd7f2,	// (0x0003c8a2) popup_char_count_window_g1

0xd7fb,	// (0x0003c8ab) popup_char_count_window_g2

0xd804,	// (0x0003c8b4) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003eb81) popup_char_count_window_g

0xd80d,	// (0x0003c8bd) popup_char_count_window_t1

0x9c03,	// (0x00038cb3) main_vded2_pane

0xcc58,	// (0x0003bd08) aid_size_cell_imed_line

0xcc62,	// (0x0003bd12) grid_imed_line_width_pane

0x6625,	// (0x000356d5) vid4_indicators_pane_g4

0xd81b,	// (0x0003c8cb) cell_imed_line_width_pane_ParamLimits

0xd81b,	// (0x0003c8cb) cell_imed_line_width_pane

0xd831,	// (0x0003c8e1) cell_imed_line_width_pane_g1

0xc52a,	// (0x0003b5da) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003eb88) cell_imed_line_width_pane_g

0x7520,	// (0x000365d0) main_vded2_pane_g1_ParamLimits

0x7520,	// (0x000365d0) main_vded2_pane_g1

0x753b,	// (0x000365eb) main_vded2_pane_g2_ParamLimits

0x753b,	// (0x000365eb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003eb8d) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003eb8d) main_vded2_pane_g

0x754d,	// (0x000365fd) vded2_slider_pane_ParamLimits

0x754d,	// (0x000365fd) vded2_slider_pane

0x755d,	// (0x0003660d) aid_size_touch_vded2_end

0x7567,	// (0x00036617) aid_size_touch_vded2_playhead

0xd83a,	// (0x0003c8ea) aid_size_touch_vded2_start

0xd842,	// (0x0003c8f2) vded2_slider_bg_pane

0xd84b,	// (0x0003c8fb) vded2_slider_pane_g1

0xd854,	// (0x0003c904) vded2_slider_pane_g2

0x7571,	// (0x00036621) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003eb92) vded2_slider_pane_g

0xd4ef,	// (0x0003c59f) vded2_slider_bg_pane_g1

0xd4f8,	// (0x0003c5a8) vded2_slider_bg_pane_g2

0xd501,	// (0x0003c5b1) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003eb99) vded2_slider_bg_pane_g

0x3d44,	// (0x00032df4) aid_postcard_touch_down_pane_ParamLimits

0x3d44,	// (0x00032df4) aid_postcard_touch_down_pane

0x3d5c,	// (0x00032e0c) aid_postcard_touch_up_pane_ParamLimits

0x3d5c,	// (0x00032e0c) aid_postcard_touch_up_pane

0x9c03,	// (0x00038cb3) main_blid2_pane

0xc318,	// (0x0003b3c8) popup_blid2_search_window

0x9c03,	// (0x00038cb3) blid2_gps_pane

0x9c03,	// (0x00038cb3) blid2_navig_pane

0x9c03,	// (0x00038cb3) blid2_search_pane

0x9c03,	// (0x00038cb3) blid2_tripm_pane

0x757c,	// (0x0003662c) blid2_search_pane_g1_ParamLimits

0x757c,	// (0x0003662c) blid2_search_pane_g1

0x758f,	// (0x0003663f) blid2_search_pane_t1_ParamLimits

0x758f,	// (0x0003663f) blid2_search_pane_t1

0x75a1,	// (0x00036651) aid_size_cell_blid2_gps_ParamLimits

0x75a1,	// (0x00036651) aid_size_cell_blid2_gps

0x75b9,	// (0x00036669) blid2_gps_pane_g1_ParamLimits

0x75b9,	// (0x00036669) blid2_gps_pane_g1

0x75cd,	// (0x0003667d) grid_blid2_satellite_pane_ParamLimits

0x75cd,	// (0x0003667d) grid_blid2_satellite_pane

0x75e5,	// (0x00036695) blid2_navig_pane_g1_ParamLimits

0x75e5,	// (0x00036695) blid2_navig_pane_g1

0x75f1,	// (0x000366a1) blid2_navig_pane_t1_ParamLimits

0x75f1,	// (0x000366a1) blid2_navig_pane_t1

0x760c,	// (0x000366bc) blid2_navig_pane_t2_ParamLimits

0x760c,	// (0x000366bc) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003eba0) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003eba0) blid2_navig_pane_t

0x7627,	// (0x000366d7) blid2_navig_ring_pane_ParamLimits

0x7627,	// (0x000366d7) blid2_navig_ring_pane

0x7642,	// (0x000366f2) blid2_speed_pane_ParamLimits

0x7642,	// (0x000366f2) blid2_speed_pane

0x764e,	// (0x000366fe) blid2_tripm_pane_g1_ParamLimits

0x764e,	// (0x000366fe) blid2_tripm_pane_g1

0x7669,	// (0x00036719) blid2_tripm_pane_g2_ParamLimits

0x7669,	// (0x00036719) blid2_tripm_pane_g2

0x767d,	// (0x0003672d) blid2_tripm_pane_g3_ParamLimits

0x767d,	// (0x0003672d) blid2_tripm_pane_g3

0x7691,	// (0x00036741) blid2_tripm_pane_g4_ParamLimits

0x7691,	// (0x00036741) blid2_tripm_pane_g4

0x76a5,	// (0x00036755) blid2_tripm_pane_g5_ParamLimits

0x76a5,	// (0x00036755) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003eba5) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003eba5) blid2_tripm_pane_g

0x76cb,	// (0x0003677b) blid2_tripm_pane_t1_ParamLimits

0x76cb,	// (0x0003677b) blid2_tripm_pane_t1

0x76e4,	// (0x00036794) blid2_tripm_pane_t2_ParamLimits

0x76e4,	// (0x00036794) blid2_tripm_pane_t2

0x76fd,	// (0x000367ad) blid2_tripm_pane_t3_ParamLimits

0x76fd,	// (0x000367ad) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003ebb2) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003ebb2) blid2_tripm_pane_t

0x7744,	// (0x000367f4) cell_blid2_satellite_pane_ParamLimits

0x7744,	// (0x000367f4) cell_blid2_satellite_pane

0x7762,	// (0x00036812) cell_blid2_satellite_pane_g1

0xd85c,	// (0x0003c90c) cell_blid2_satellite_pane_t1

0xc763,	// (0x0003b813) blid2_speed_pane_g1

0xd86a,	// (0x0003c91a) blid2_speed_pane_t1

0xd878,	// (0x0003c928) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003ebbb) blid2_speed_pane_t

0xc763,	// (0x0003b813) blid2_navig_ring_pane_g1

0x776b,	// (0x0003681b) blid2_navig_ring_pane_g2

0x7773,	// (0x00036823) blid2_navig_ring_pane_g3

0x777b,	// (0x0003682b) blid2_navig_ring_pane_g4

0x7783,	// (0x00036833) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003ebc0) blid2_navig_ring_pane_g

0x9c03,	// (0x00038cb3) bg_popup_window_pane_cp011

0xd886,	// (0x0003c936) popup_blid2_search_window_g1

0xd88e,	// (0x0003c93e) popup_blid2_search_window_t1

0xd89c,	// (0x0003c94c) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003ebcb) popup_blid2_search_window_t

0xa6a7,	// (0x00039757) main_browser_pane_g1

0xa3a5,	// (0x00039455) main_browser_pane_ParamLimits

0x65d0,	// (0x00035680) bg_button_pane_cp011_ParamLimits

0x0caa,	// (0x0002fd5a) cell_vitu2_function_pane_g1_ParamLimits

0xc30a,	// (0x0003b3ba) bg_popup_sub_pane_cp22_ParamLimits

0x6fae,	// (0x0003605e) input_focus_pane_cp08_ParamLimits

0x6fc5,	// (0x00036075) popup_vitu2_query_button_pane_ParamLimits

0x6fc5,	// (0x00036075) popup_vitu2_query_button_pane

0x6fd6,	// (0x00036086) popup_vitu2_query_input_button_pane

0xd41b,	// (0x0003c4cb) popup_vitu2_query_window_g1_ParamLimits

0x6fe0,	// (0x00036090) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003eacc) popup_vitu2_query_window_g_ParamLimits

0x9c03,	// (0x00038cb3) bg_button_pane_cp026

0x778b,	// (0x0003683b) popup_vitu2_query_input_button_pane_g1

0x9c03,	// (0x00038cb3) bg_button_pane_cp025

0xd8aa,	// (0x0003c95a) popup_vitu2_query_button_pane_t1

0x50b4,	// (0x00034164) main_mp3_pane_t6

0x50c2,	// (0x00034172) popup_slider_window_cp01

0x657b,	// (0x0003562b) cam4_battery_pane

0x65de,	// (0x0003568e) cam4_battery_pane_cp02

0x7456,	// (0x00036506) cam4_battery_pane_cp01

0x7456,	// (0x00036506) cam4_battery_pane_cp03

0xd059,	// (0x0003c109) cam4_battery_pane_g1

0xc763,	// (0x0003b813) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003ebd0) cam4_battery_pane_g

0xc629,	// (0x0003b6d9) popup_blid_sat_info2_window_t11

0x363b,	// (0x000326eb) aid_size_touch_mv_arrow_left_ParamLimits

0x3664,	// (0x00032714) aid_size_touch_mv_arrow_right_ParamLimits

0xade5,	// (0x00039e95) navi_pane_g1_ParamLimits

0x36a3,	// (0x00032753) navi_pane_g2_ParamLimits

0x36d1,	// (0x00032781) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003e495) navi_pane_g_ParamLimits

0x372b,	// (0x000327db) navi_pane_mv_t1_ParamLimits

0x5d03,	// (0x00034db3) grid_imed_effect_pane_ParamLimits

0x2068,	// (0x00031118) aid_placing_vt_slider_lsc

0xa5f2,	// (0x000396a2) aid_placing_vt_slider_prt

0x9c64,	// (0x00038d14) bg_tb_trans_pane_cp01_ParamLimits

0xc8b3,	// (0x0003b963) popup_image_details_window_g1_ParamLimits

0xc8c6,	// (0x0003b976) popup_image_details_window_g2_ParamLimits

0xc8db,	// (0x0003b98b) popup_image_details_window_g3_ParamLimits

0xc8db,	// (0x0003b98b) popup_image_details_window_g3

0xf718,	// (0x0003e7c8) popup_image_details_window_g_ParamLimits

0xc8ef,	// (0x0003b99f) popup_image_details_window_t1_ParamLimits

0xc901,	// (0x0003b9b1) popup_image_details_window_t2_ParamLimits

0xc91a,	// (0x0003b9ca) popup_image_details_window_t3_ParamLimits

0xc92e,	// (0x0003b9de) popup_image_details_window_t4_ParamLimits

0xc949,	// (0x0003b9f9) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003e7cf) popup_image_details_window_t_ParamLimits

0x7362,	// (0x00036412) cl_header_name_pane_ParamLimits

0x7362,	// (0x00036412) cl_header_name_pane

0x7793,	// (0x00036843) cl_header_name_pane_t1_ParamLimits

0x7793,	// (0x00036843) cl_header_name_pane_t1

0x77b4,	// (0x00036864) cl_header_name_pane_t2_ParamLimits

0x77b4,	// (0x00036864) cl_header_name_pane_t2

0x77f6,	// (0x000368a6) cl_header_name_pane_t3_ParamLimits

0x77f6,	// (0x000368a6) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003ebd5) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003ebd5) cl_header_name_pane_t

0x36fc,	// (0x000327ac) navi_pane_mv_g2_ParamLimits

0xd147,	// (0x0003c1f7) field_vitu2_entry_pane_g1_ParamLimits

0xd153,	// (0x0003c203) field_vitu2_entry_pane_g2_ParamLimits

0xd15f,	// (0x0003c20f) field_vitu2_entry_pane_g3_ParamLimits

0xd15f,	// (0x0003c20f) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003e9cb) field_vitu2_entry_pane_g_ParamLimits

0x66a9,	// (0x00035759) cell_vitu2_itu_pane_g1_ParamLimits

0x0b52,	// (0x0002fc02) cell_vitu2_itu_pane_g2_ParamLimits

0x0b52,	// (0x0002fc02) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003e9d7) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003e9d7) cell_vitu2_itu_pane_g

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp05_ParamLimits

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp05

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp03

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp04

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp10_ParamLimits

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp10

0x7304,	// (0x000363b4) bg_vkb2_func_pane_cp08

0x72ea,	// (0x0003639a) bg_vkb2_func_pane_cp06

0x72f8,	// (0x000363a8) bg_vkb2_func_pane_cp07

0xd7c8,	// (0x0003c878) bg_vkb2_func_pane_cp11_ParamLimits

0xd7c8,	// (0x0003c878) bg_vkb2_func_pane_cp11

0xd7dd,	// (0x0003c88d) bg_vkb2_func_pane_cp12_ParamLimits

0xd7dd,	// (0x0003c88d) bg_vkb2_func_pane_cp12

0x9c03,	// (0x00038cb3) bg_vkb2_func_pane_cp09

0xd19c,	// (0x0003c24c) bg_vkb2_func_pane_g1

0xa7b8,	// (0x00039868) bg_vkb2_func_pane_g2

0xd1a4,	// (0x0003c254) bg_vkb2_func_pane_g3

0xd1ac,	// (0x0003c25c) bg_vkb2_func_pane_g4

0xd3d4,	// (0x0003c484) bg_vkb2_func_pane_g5

0xd1c4,	// (0x0003c274) bg_vkb2_func_pane_g6

0xd1cc,	// (0x0003c27c) bg_vkb2_func_pane_g7

0xd1bc,	// (0x0003c26c) bg_vkb2_func_pane_g8

0xa798,	// (0x00039848) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003ebdc) bg_vkb2_func_pane_g

0x76b9,	// (0x00036769) blid2_tripm_pane_g6_ParamLimits

0x76b9,	// (0x00036769) blid2_tripm_pane_g6

0xd013,	// (0x0003c0c3) mp4_progress_pane_g1

0x7730,	// (0x000367e0) blid2_tripm_values_pane_ParamLimits

0x7730,	// (0x000367e0) blid2_tripm_values_pane

0x7827,	// (0x000368d7) blid2_tripm_values_pane_t1

0x7835,	// (0x000368e5) blid2_tripm_values_pane_t2

0x7843,	// (0x000368f3) blid2_tripm_values_pane_t3

0x7851,	// (0x00036901) blid2_tripm_values_pane_t4

0x785f,	// (0x0003690f) blid2_tripm_values_pane_t5

0x786d,	// (0x0003691d) blid2_tripm_values_pane_t6

0x787b,	// (0x0003692b) blid2_tripm_values_pane_t7

0x7889,	// (0x00036939) blid2_tripm_values_pane_t8

0x7897,	// (0x00036947) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003ebef) blid2_tripm_values_pane_t

0x20a5,	// (0x00031155) call_video_pane_t1_ParamLimits

0x20bf,	// (0x0003116f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003e31e) call_video_pane_t_ParamLimits

0x3c87,	// (0x00032d37) msg_header_pane_g1_ParamLimits

0xb01c,	// (0x0003a0cc) msg_header_pane_g2_ParamLimits

0xb01c,	// (0x0003a0cc) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003e538) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003e538) msg_header_pane_g

0xa3a5,	// (0x00039455) main_clock2_pane_ParamLimits

0x5a6c,	// (0x00034b1c) grid_clock2_toolbar_pane_ParamLimits

0x5a6c,	// (0x00034b1c) grid_clock2_toolbar_pane

0x5a6c,	// (0x00034b1c) listscroll_clock2_pane_ParamLimits

0x5a6c,	// (0x00034b1c) listscroll_clock2_pane

0x5b63,	// (0x00034c13) main_clock2_pane_t3_ParamLimits

0x5b63,	// (0x00034c13) main_clock2_pane_t3

0x5b87,	// (0x00034c37) main_clock2_pane_t4_ParamLimits

0x5b87,	// (0x00034c37) main_clock2_pane_t4

0xd8b8,	// (0x0003c968) cell_clock2_toolbar_pane

0xd8c0,	// (0x0003c970) cell_clock2_toolbar_pane_cp01

0xd8c0,	// (0x0003c970) cell_clock2_toolbar_pane_cp02

0xd8c8,	// (0x0003c978) cell_clock2_toolbar_pane_cp03

0xd8d0,	// (0x0003c980) list_clock2_pane

0xad4b,	// (0x00039dfb) scroll_pane_cp10

0xd8d8,	// (0x0003c988) list_single_clock2_pane_ParamLimits

0xd8d8,	// (0x0003c988) list_single_clock2_pane

0xa55b,	// (0x0003960b) list_highlight_pane_cp08

0xd8e5,	// (0x0003c995) list_single_clock2_pane_t1

0xd8f3,	// (0x0003c9a3) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003ec02) list_single_clock2_pane_t

0x9c03,	// (0x00038cb3) bg_button_pane_cp10

0xd901,	// (0x0003c9b1) cell_clock2_toolbar_pane_g1

0xfeb1,	// (0x0002ef61) aid_main_viewer_pane_g1_ParamLimits

0xfeb1,	// (0x0002ef61) aid_main_viewer_pane_g1

0xfebf,	// (0x0002ef6f) aid_main_viewer_pane_g2_ParamLimits

0xfebf,	// (0x0002ef6f) aid_main_viewer_pane_g2

0x3cde,	// (0x00032d8e) aid_main_viewer_pane_g3_ParamLimits

0x3cde,	// (0x00032d8e) aid_main_viewer_pane_g3

0x3ced,	// (0x00032d9d) aid_main_viewer_pane_g4_ParamLimits

0x3ced,	// (0x00032d9d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003e549) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003e549) aid_main_viewer_pane_g

0x464e,	// (0x000336fe) main_calc_pane_ParamLimits

0x4662,	// (0x00033712) main_dialer2_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_cam6_pane

0x9c03,	// (0x00038cb3) main_vid6_pane

0x5a78,	// (0x00034b28) listscroll_gen_pane_cp06_ParamLimits

0x5a78,	// (0x00034b28) listscroll_gen_pane_cp06

0x5baa,	// (0x00034c5a) main_clock2_pane_t5_ParamLimits

0x5baa,	// (0x00034c5a) main_clock2_pane_t5

0x5c0a,	// (0x00034cba) aid_call2_pane_cp10_ParamLimits

0x5c1c,	// (0x00034ccc) aid_call_pane_cp10_ParamLimits

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c2e,	// (0x00034cde) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c2e,	// (0x00034cde) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadba,	// (0x00039e6a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003e884) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c44,	// (0x00034cf4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6329,	// (0x000353d9) cell_dialer2_keypad_pane_g2_ParamLimits

0x6329,	// (0x000353d9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003e96a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003e96a) cell_dialer2_keypad_pane_g

0x6345,	// (0x000353f5) cell_dialer2_keypad_pane_t1

0x69d2,	// (0x00035a82) main_cset_text2_pane_ParamLimits

0x69d2,	// (0x00035a82) main_cset_text2_pane

0xd672,	// (0x0003c722) area_vitu2_query_pane_g1_ParamLimits

0x7289,	// (0x00036339) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003eb1f) area_vitu2_query_pane_g_ParamLimits

0xd6f6,	// (0x0003c7a6) area_vitu2_query_pane_t7_ParamLimits

0xd6f6,	// (0x0003c7a6) area_vitu2_query_pane_t7

0x72ea,	// (0x0003639a) bg_button_pane_cp018_ParamLimits

0x72f8,	// (0x000363a8) bg_button_pane_cp021_ParamLimits

0x7304,	// (0x000363b4) bg_button_pane_cp022_ParamLimits

0x7304,	// (0x000363b4) bg_vkb2_func_pane_cp08_ParamLimits

0x72ea,	// (0x0003639a) bg_vkb2_func_pane_cp06_ParamLimits

0x72f8,	// (0x000363a8) bg_vkb2_func_pane_cp07_ParamLimits

0x7315,	// (0x000363c5) input_focus_pane_cp09_ParamLimits

0x78a5,	// (0x00036955) cam6_autofocus_pane_ParamLimits

0x78a5,	// (0x00036955) cam6_autofocus_pane

0x0def,	// (0x0002fe9f) cam6_image_uncrop_pane_ParamLimits

0x0def,	// (0x0002fe9f) cam6_image_uncrop_pane

0x0dfe,	// (0x0002feae) cam6_indi_pane_ParamLimits

0x0dfe,	// (0x0002feae) cam6_indi_pane

0x0e14,	// (0x0002fec4) cam6_mode_pane_ParamLimits

0x0e14,	// (0x0002fec4) cam6_mode_pane

0x0e26,	// (0x0002fed6) cam6_timer_pane_ParamLimits

0x0e26,	// (0x0002fed6) cam6_timer_pane

0x0e32,	// (0x0002fee2) cam6_zoom_pane_ParamLimits

0x0e32,	// (0x0002fee2) cam6_zoom_pane

0x78b3,	// (0x00036963) cam6_mode_pane_g1_ParamLimits

0x78b3,	// (0x00036963) cam6_mode_pane_g1

0x78c3,	// (0x00036973) cam6_mode_pane_g2_ParamLimits

0x78c3,	// (0x00036973) cam6_mode_pane_g2

0x78d3,	// (0x00036983) cam6_mode_pane_g3_ParamLimits

0x78d3,	// (0x00036983) cam6_mode_pane_g3

0x78e3,	// (0x00036993) cam6_mode_pane_g4_ParamLimits

0x78e3,	// (0x00036993) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003ec07) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003ec07) cam6_mode_pane_g

0xd50a,	// (0x0003c5ba) bg_tb_trans_pane_cp08_ParamLimits

0xd50a,	// (0x0003c5ba) bg_tb_trans_pane_cp08

0xd909,	// (0x0003c9b9) cam6_battery_pane_ParamLimits

0xd909,	// (0x0003c9b9) cam6_battery_pane

0xd91f,	// (0x0003c9cf) cam6_indi_pane_g1_ParamLimits

0xd91f,	// (0x0003c9cf) cam6_indi_pane_g1

0xd931,	// (0x0003c9e1) cam6_indi_pane_g2_ParamLimits

0xd931,	// (0x0003c9e1) cam6_indi_pane_g2

0xd943,	// (0x0003c9f3) cam6_indi_pane_g3_ParamLimits

0xd943,	// (0x0003c9f3) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003ec10) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003ec10) cam6_indi_pane_g

0xd955,	// (0x0003ca05) cam6_indi_pane_t1_ParamLimits

0xd955,	// (0x0003ca05) cam6_indi_pane_t1

0x6662,	// (0x00035712) cam6_autofocus_pane_g1

0x665a,	// (0x0003570a) cam6_autofocus_pane_g2

0x6672,	// (0x00035722) cam6_autofocus_pane_g3

0x666a,	// (0x0003571a) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003ec17) cam6_autofocus_pane_g

0xd97b,	// (0x0003ca2b) cam6_timer_pane_g1

0xd983,	// (0x0003ca33) cam6_timer_pane_t1

0xd991,	// (0x0003ca41) cam6_zoom_cont_pane

0xd999,	// (0x0003ca49) cam6_zoom_pane_g1

0xd9a1,	// (0x0003ca51) cam6_zoom_pane_g2

0x78f3,	// (0x000369a3) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003ec20) cam6_zoom_pane_g

0xc763,	// (0x0003b813) cam6_battery_pane_g1

0xc763,	// (0x0003b813) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003e78c) cam6_battery_pane_g

0xd9a9,	// (0x0003ca59) cam6_zoom_cont_pane_g1

0xd9b2,	// (0x0003ca62) cam6_zoom_cont_pane_g2

0xd9bb,	// (0x0003ca6b) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003ec27) cam6_zoom_cont_pane_g

0x7910,	// (0x000369c0) cam6_mode_pane_cp_ParamLimits

0x7910,	// (0x000369c0) cam6_mode_pane_cp

0x7922,	// (0x000369d2) cam6_zoom_pane_cp_ParamLimits

0x7922,	// (0x000369d2) cam6_zoom_pane_cp

0x7930,	// (0x000369e0) vid6_image_uncrop_cif_pane_ParamLimits

0x7930,	// (0x000369e0) vid6_image_uncrop_cif_pane

0x7940,	// (0x000369f0) vid6_image_uncrop_nhd_pane_ParamLimits

0x7940,	// (0x000369f0) vid6_image_uncrop_nhd_pane

0x794f,	// (0x000369ff) vid6_image_uncrop_vga_pane_ParamLimits

0x794f,	// (0x000369ff) vid6_image_uncrop_vga_pane

0x795e,	// (0x00036a0e) vid6_image_uncrop_wvga_pane_ParamLimits

0x795e,	// (0x00036a0e) vid6_image_uncrop_wvga_pane

0x796d,	// (0x00036a1d) vid6_indi_pane_ParamLimits

0x796d,	// (0x00036a1d) vid6_indi_pane

0xd50a,	// (0x0003c5ba) bg_tb_trans_pane_cp09_ParamLimits

0xd50a,	// (0x0003c5ba) bg_tb_trans_pane_cp09

0xd9d3,	// (0x0003ca83) cam6_battery_pane_cp_ParamLimits

0xd9d3,	// (0x0003ca83) cam6_battery_pane_cp

0xd9df,	// (0x0003ca8f) vid6_indi_pane_g1_ParamLimits

0xd9df,	// (0x0003ca8f) vid6_indi_pane_g1

0xd9f1,	// (0x0003caa1) vid6_indi_pane_g2_ParamLimits

0xd9f1,	// (0x0003caa1) vid6_indi_pane_g2

0xda03,	// (0x0003cab3) vid6_indi_pane_g3_ParamLimits

0xda03,	// (0x0003cab3) vid6_indi_pane_g3

0xda1a,	// (0x0003caca) vid6_indi_pane_g4_ParamLimits

0xda1a,	// (0x0003caca) vid6_indi_pane_g4

0xda31,	// (0x0003cae1) vid6_indi_pane_g5_ParamLimits

0xda31,	// (0x0003cae1) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003ec2e) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003ec2e) vid6_indi_pane_g

0xda4b,	// (0x0003cafb) vid6_indi_pane_t1_ParamLimits

0xda4b,	// (0x0003cafb) vid6_indi_pane_t1

0xda61,	// (0x0003cb11) vid6_indi_pane_t2_ParamLimits

0xda61,	// (0x0003cb11) vid6_indi_pane_t2

0xda89,	// (0x0003cb39) vid6_indi_pane_t3_ParamLimits

0xda89,	// (0x0003cb39) vid6_indi_pane_t3

0xdab1,	// (0x0003cb61) vid6_indi_pane_t4_ParamLimits

0xdab1,	// (0x0003cb61) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003ec39) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003ec39) vid6_indi_pane_t

0xdad5,	// (0x0003cb85) wait_bar_pane_cp08

0x7985,	// (0x00036a35) main_cset_text2_pane_t1_ParamLimits

0x7985,	// (0x00036a35) main_cset_text2_pane_t1

0x78fb,	// (0x000369ab) listscroll_gen_pane_cp06_t1_ParamLimits

0x78fb,	// (0x000369ab) listscroll_gen_pane_cp06_t1

0x9c03,	// (0x00038cb3) main_cam6_set_pane

0x656d,	// (0x0003561d) bg_tb_trans_pane_cp06_ParamLimits

0x6583,	// (0x00035633) cam4_indicators_pane_g1_ParamLimits

0x6594,	// (0x00035644) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003e9a7) cam4_indicators_pane_g_ParamLimits

0x65ac,	// (0x0003565c) cam4_indicators_pane_t1_ParamLimits

0x65d0,	// (0x00035680) bg_tb_trans_pane_cp07_ParamLimits

0x65e8,	// (0x00035698) vid4_indicators_pane_g1_ParamLimits

0x65fe,	// (0x000356ae) vid4_indicators_pane_g2_ParamLimits

0x6612,	// (0x000356c2) vid4_indicators_pane_g3_ParamLimits

0x6625,	// (0x000356d5) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003e9b9) vid4_indicators_pane_g_ParamLimits

0x6643,	// (0x000356f3) vid4_indicators_pane_t1_ParamLimits

0x0dcb,	// (0x0002fe7b) vid4_progress_pane_g1_ParamLimits

0x0ddd,	// (0x0002fe8d) vid4_progress_pane_g2_ParamLimits

0x3d2c,	// (0x00032ddc) vid4_progress_pane_g3_ParamLimits

0x745e,	// (0x0003650e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003eb6a) vid4_progress_pane_g_ParamLimits

0x747c,	// (0x0003652c) vid4_progress_pane_t1_ParamLimits

0x7491,	// (0x00036541) vid4_progress_pane_t2_ParamLimits

0x74a7,	// (0x00036557) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003eb75) vid4_progress_pane_t_ParamLimits

0x74bc,	// (0x0003656c) wait_bar_pane_cp07_ParamLimits

0x79a3,	// (0x00036a53) main_cam6_set_pane_g2_ParamLimits

0x79a3,	// (0x00036a53) main_cam6_set_pane_g2

0x79c9,	// (0x00036a79) main_cset6_listscroll_pane_ParamLimits

0x79c9,	// (0x00036a79) main_cset6_listscroll_pane

0x79e7,	// (0x00036a97) main_cset6_slider_pane_ParamLimits

0x79e7,	// (0x00036a97) main_cset6_slider_pane

0x79fd,	// (0x00036aad) main_cset6_text2_pane_ParamLimits

0x79fd,	// (0x00036aad) main_cset6_text2_pane

0xdae4,	// (0x0003cb94) main_cset6_text_pane

0xdaec,	// (0x0003cb9c) main_cset_list_pane_copy1_ParamLimits

0xdaec,	// (0x0003cb9c) main_cset_list_pane_copy1

0xdafc,	// (0x0003cbac) scroll_pane_cp028_copy1

0x3178,	// (0x00032228) cset_list_set_pane_copy1

0x7a0b,	// (0x00036abb) aid_position_infowindow_above_copy1

0x7a13,	// (0x00036ac3) aid_position_infowindow_below_copy1

0x7a1b,	// (0x00036acb) cset_list_set_pane_g1_copy1

0x7a23,	// (0x00036ad3) cset_list_set_pane_g3_copy1_ParamLimits

0x7a23,	// (0x00036ad3) cset_list_set_pane_g3_copy1

0x7a32,	// (0x00036ae2) cset_list_set_pane_t1_copy1_ParamLimits

0x7a32,	// (0x00036ae2) cset_list_set_pane_t1_copy1

0x9c64,	// (0x00038d14) list_highlight_pane_cp021_copy1_ParamLimits

0x9c64,	// (0x00038d14) list_highlight_pane_cp021_copy1

0xdb05,	// (0x0003cbb5) cset6_slider_pane_ParamLimits

0xdb05,	// (0x0003cbb5) cset6_slider_pane

0xdb31,	// (0x0003cbe1) main_cset6_slider_pane_g1_ParamLimits

0xdb31,	// (0x0003cbe1) main_cset6_slider_pane_g1

0x7a47,	// (0x00036af7) main_cset6_slider_pane_g2_ParamLimits

0x7a47,	// (0x00036af7) main_cset6_slider_pane_g2

0xdb59,	// (0x0003cc09) main_cset6_slider_pane_g3_ParamLimits

0xdb59,	// (0x0003cc09) main_cset6_slider_pane_g3

0x7a6f,	// (0x00036b1f) main_cset6_slider_pane_g4_ParamLimits

0x7a6f,	// (0x00036b1f) main_cset6_slider_pane_g4

0x7a7b,	// (0x00036b2b) main_cset6_slider_pane_g5_ParamLimits

0x7a7b,	// (0x00036b2b) main_cset6_slider_pane_g5

0xd2cf,	// (0x0003c37f) main_cset6_slider_pane_g7_ParamLimits

0xd2cf,	// (0x0003c37f) main_cset6_slider_pane_g7

0xd2db,	// (0x0003c38b) main_cset6_slider_pane_g8_ParamLimits

0xd2db,	// (0x0003c38b) main_cset6_slider_pane_g8

0x6a81,	// (0x00035b31) main_cset6_slider_pane_g9_ParamLimits

0x6a81,	// (0x00035b31) main_cset6_slider_pane_g9

0x6a8d,	// (0x00035b3d) main_cset6_slider_pane_g10_ParamLimits

0x6a8d,	// (0x00035b3d) main_cset6_slider_pane_g10

0x6a99,	// (0x00035b49) main_cset6_slider_pane_g11_ParamLimits

0x6a99,	// (0x00035b49) main_cset6_slider_pane_g11

0x6aa5,	// (0x00035b55) main_cset6_slider_pane_g12_ParamLimits

0x6aa5,	// (0x00035b55) main_cset6_slider_pane_g12

0x6ab1,	// (0x00035b61) main_cset6_slider_pane_g13_ParamLimits

0x6ab1,	// (0x00035b61) main_cset6_slider_pane_g13

0x6abd,	// (0x00035b6d) main_cset6_slider_pane_g14_ParamLimits

0x6abd,	// (0x00035b6d) main_cset6_slider_pane_g14

0x7a89,	// (0x00036b39) main_cset6_slider_pane_g15_ParamLimits

0x7a89,	// (0x00036b39) main_cset6_slider_pane_g15

0x6ae1,	// (0x00035b91) main_cset6_slider_pane_g16_ParamLimits

0x6ae1,	// (0x00035b91) main_cset6_slider_pane_g16

0x6aef,	// (0x00035b9f) main_cset6_slider_pane_g17_ParamLimits

0x6aef,	// (0x00035b9f) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003ec42) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003ec42) main_cset6_slider_pane_g

0xdb65,	// (0x0003cc15) main_cset6_slider_pane_t1_ParamLimits

0xdb65,	// (0x0003cc15) main_cset6_slider_pane_t1

0x7ab9,	// (0x00036b69) main_cset6_slider_pane_t2_ParamLimits

0x7ab9,	// (0x00036b69) main_cset6_slider_pane_t2

0x7ae4,	// (0x00036b94) main_cset6_slider_pane_t3_ParamLimits

0x7ae4,	// (0x00036b94) main_cset6_slider_pane_t3

0x7b0f,	// (0x00036bbf) main_cset6_slider_pane_t4_ParamLimits

0x7b0f,	// (0x00036bbf) main_cset6_slider_pane_t4

0x7b3a,	// (0x00036bea) main_cset6_slider_pane_t5_ParamLimits

0x7b3a,	// (0x00036bea) main_cset6_slider_pane_t5

0xdba6,	// (0x0003cc56) main_cset6_slider_pane_t7_ParamLimits

0xdba6,	// (0x0003cc56) main_cset6_slider_pane_t7

0x7b67,	// (0x00036c17) main_cset6_slider_pane_t8_ParamLimits

0x7b67,	// (0x00036c17) main_cset6_slider_pane_t8

0x7b8b,	// (0x00036c3b) main_cset6_slider_pane_t9_ParamLimits

0x7b8b,	// (0x00036c3b) main_cset6_slider_pane_t9

0x7baf,	// (0x00036c5f) main_cset6_slider_pane_t10_ParamLimits

0x7baf,	// (0x00036c5f) main_cset6_slider_pane_t10

0x7bd3,	// (0x00036c83) main_cset6_slider_pane_t11_ParamLimits

0x7bd3,	// (0x00036c83) main_cset6_slider_pane_t11

0xdbdc,	// (0x0003cc8c) main_cset6_slider_pane_t14_ParamLimits

0xdbdc,	// (0x0003cc8c) main_cset6_slider_pane_t14

0xdc15,	// (0x0003ccc5) main_cset6_slider_pane_t15_ParamLimits

0xdc15,	// (0x0003ccc5) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003ec67) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003ec67) main_cset6_slider_pane_t

0xd518,	// (0x0003c5c8) cset_slider_pane_g1_copy1

0xd521,	// (0x0003c5d1) cset_slider_pane_g2_copy1

0xd52a,	// (0x0003c5da) cset_slider_pane_g3_copy1

0x9c03,	// (0x00038cb3) bg_popup_sub_pane_cp011_copy1

0xdc4e,	// (0x0003ccfe) main_cset_text_pane_g1_copy1

0xd42f,	// (0x0003c4df) main_cset_text_pane_t1_copy1

0xd43d,	// (0x0003c4ed) main_cset_text_pane_t2_copy1

0xd44b,	// (0x0003c4fb) main_cset_text_pane_t3_copy1

0xd459,	// (0x0003c509) main_cset_text_pane_t4_copy1

0xd467,	// (0x0003c517) main_cset_text_pane_t5_copy1

0xdc56,	// (0x0003cd06) main_cset_text_pane_t6_copy1

0xdc64,	// (0x0003cd14) main_cset_text_pane_t7_copy1

0x7985,	// (0x00036a35) main_cset_text2_pane_t1_copy1

0x9c64,	// (0x00038d14) main_ncimui_pane

0x48f0,	// (0x000339a0) popup_query_ncimui_window_ParamLimits

0x48f0,	// (0x000339a0) popup_query_ncimui_window

0xc9f8,	// (0x0003baa8) field_cale_ev2_pane_g4_ParamLimits

0xc9f8,	// (0x0003baa8) field_cale_ev2_pane_g4

0x60cb,	// (0x0003517b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60cb,	// (0x0003517b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003e945) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003e945) cell_video_dialer_keypad_pane_g

0x60e3,	// (0x00035193) cell_video_dialer_keypad_pane_t1

0x9c03,	// (0x00038cb3) bg_popup_window_pane_cp012

0xac37,	// (0x00039ce7) heading_pane_cp06

0xdc90,	// (0x0003cd40) ncim_query_content_pane

0x9c03,	// (0x00038cb3) bg_popup_heading_pane_cp01

0xdc98,	// (0x0003cd48) ncim_heading_pane_t1

0xdca6,	// (0x0003cd56) ncim_indicator_popup_pane

0xdcb8,	// (0x0003cd68) ncim_query_button_pane

0xdcce,	// (0x0003cd7e) ncim_query_content_pane_t1

0xdce0,	// (0x0003cd90) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003ecab) ncim_query_content_pane_t

0xdd1a,	// (0x0003cdca) ncim_query_list_pane

0xdd2c,	// (0x0003cddc) ncim_query_popup_pane

0xdca6,	// (0x0003cd56) ncim_indicator_popup_pane_ParamLimits

0x7dee,	// (0x00036e9e) ncim_query_content_pane_g1_ParamLimits

0x7dee,	// (0x00036e9e) ncim_query_content_pane_g1

0xdcce,	// (0x0003cd7e) ncim_query_content_pane_t1_ParamLimits

0xdce0,	// (0x0003cd90) ncim_query_content_pane_t2_ParamLimits

0x7dfa,	// (0x00036eaa) ncim_query_content_pane_t3_ParamLimits

0x7dfa,	// (0x00036eaa) ncim_query_content_pane_t3

0x7e22,	// (0x00036ed2) ncim_query_content_pane_t4_ParamLimits

0x7e22,	// (0x00036ed2) ncim_query_content_pane_t4

0x7e4a,	// (0x00036efa) ncim_query_content_pane_t5_ParamLimits

0x7e4a,	// (0x00036efa) ncim_query_content_pane_t5

0xdcf2,	// (0x0003cda2) ncim_query_content_pane_t6_ParamLimits

0xdcf2,	// (0x0003cda2) ncim_query_content_pane_t6

0xfbfb,	// (0x0003ecab) ncim_query_content_pane_t_ParamLimits

0xdd1a,	// (0x0003cdca) ncim_query_list_pane_ParamLimits

0xdd2c,	// (0x0003cddc) ncim_query_popup_pane_ParamLimits

0xdd40,	// (0x0003cdf0) wait_bar_pane_cp04

0x9c03,	// (0x00038cb3) input_focus_pane_cp011

0xdd48,	// (0x0003cdf8) ncim_query_popup_pane_t1

0xdd56,	// (0x0003ce06) ncim_list_query_list_pane_ParamLimits

0xdd56,	// (0x0003ce06) ncim_list_query_list_pane

0x9c03,	// (0x00038cb3) bg_button_pane_cp027

0xdd69,	// (0x0003ce19) ncim_query_button_pane_g1

0x9c03,	// (0x00038cb3) list_highlight_pane_cp012

0xdd73,	// (0x0003ce23) ncim_list_query_list_pane_g1

0xdd7b,	// (0x0003ce2b) ncim_list_query_list_pane_t1

0x65a0,	// (0x00035650) cam4_indicators_pane_g3_ParamLimits

0x65a0,	// (0x00035650) cam4_indicators_pane_g3

0x6631,	// (0x000356e1) vid4_indicators_pane_g5_ParamLimits

0x6631,	// (0x000356e1) vid4_indicators_pane_g5

0x746d,	// (0x0003651d) vid4_progress_pane_g5_ParamLimits

0x746d,	// (0x0003651d) vid4_progress_pane_g5

0x7cdc,	// (0x00036d8c) main_ncimui_pane_g1

0x7d42,	// (0x00036df2) ncimui_group_query_pane_ParamLimits

0x7d42,	// (0x00036df2) ncimui_group_query_pane

0x7d8a,	// (0x00036e3a) ncimui_list_pane_ParamLimits

0x7d8a,	// (0x00036e3a) ncimui_list_pane

0x7db1,	// (0x00036e61) ncimui_text_pane_ParamLimits

0x7db1,	// (0x00036e61) ncimui_text_pane

0x7e72,	// (0x00036f22) ncimui_text_pane_t1_ParamLimits

0x7e72,	// (0x00036f22) ncimui_text_pane_t1

0xdd89,	// (0x0003ce39) ncimui_list_single_graphic_pane_ParamLimits

0xdd89,	// (0x0003ce39) ncimui_list_single_graphic_pane

0x7e90,	// (0x00036f40) ncimui_query_pane_ParamLimits

0x7e90,	// (0x00036f40) ncimui_query_pane

0x9c03,	// (0x00038cb3) list_highlight_pane_cp013

0xdd99,	// (0x0003ce49) ncim_list_query_list_pane_t1_copy1

0xdd73,	// (0x0003ce23) ncim_list_single_graphic_pane_g1

0xdda7,	// (0x0003ce57) ncim_query_button_pane_cp01

0xddb3,	// (0x0003ce63) ncim_query_entry_pane_ParamLimits

0xddb3,	// (0x0003ce63) ncim_query_entry_pane

0xddc6,	// (0x0003ce76) ncimui_query_pane_g1

0xddd2,	// (0x0003ce82) ncimui_query_pane_t1_ParamLimits

0xddd2,	// (0x0003ce82) ncimui_query_pane_t1

0x9c64,	// (0x00038d14) input_focus_pane_cp012

0xddeb,	// (0x0003ce9b) ncim_query_entry_pane_t1

0xa3a5,	// (0x00039455) main_im_pane_ParamLimits

0x9c64,	// (0x00038d14) main_mobtv_pane_ParamLimits

0x9c64,	// (0x00038d14) main_mobtv_pane

0x7aa1,	// (0x00036b51) main_cset6_slider_pane_g18_ParamLimits

0x7aa1,	// (0x00036b51) main_cset6_slider_pane_g18

0x7aad,	// (0x00036b5d) main_cset6_slider_pane_g19_ParamLimits

0x7aad,	// (0x00036b5d) main_cset6_slider_pane_g19

0x7ea3,	// (0x00036f53) bg_main_mobtv_pane_ParamLimits

0x7ea3,	// (0x00036f53) bg_main_mobtv_pane

0x7eb1,	// (0x00036f61) main_mobtv_info_pane

0x7ebc,	// (0x00036f6c) main_mobtv_loading_pane_ParamLimits

0x7ebc,	// (0x00036f6c) main_mobtv_loading_pane

0xddfd,	// (0x0003cead) main_mobtv_pg_channel_list_pane

0xde07,	// (0x0003ceb7) main_mobtv_pg_hdr_pane

0x7ec9,	// (0x00036f79) main_mobtv_programe_curr_pane_ParamLimits

0x7ec9,	// (0x00036f79) main_mobtv_programe_curr_pane

0x7ed6,	// (0x00036f86) main_mobtv_programe_next_pane_ParamLimits

0x7ed6,	// (0x00036f86) main_mobtv_programe_next_pane

0xde10,	// (0x0003cec0) popup_mobtv_noti_window

0xc763,	// (0x0003b813) main_tv_pg_hdr_pane_g1

0xde1a,	// (0x0003ceca) main_tv_pg_hdr_pane_g2

0xde22,	// (0x0003ced2) main_tv_pg_hdr_pane_g3

0xde2a,	// (0x0003ceda) main_tv_pg_hdr_pane_g4

0xde32,	// (0x0003cee2) main_tv_pg_hdr_pane_g5

0xde3c,	// (0x0003ceec) main_tv_pg_hdr_pane_g6

0xde46,	// (0x0003cef6) main_tv_pg_hdr_pane_g7

0xde50,	// (0x0003cf00) main_tv_pg_hdr_pane_g8

0xde5a,	// (0x0003cf0a) main_tv_pg_hdr_pane_g9

0xde64,	// (0x0003cf14) main_tv_pg_hdr_pane_g10

0xde6e,	// (0x0003cf1e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003ecb8) main_tv_pg_hdr_pane_g

0xde78,	// (0x0003cf28) main_tv_pg_hdr_pane_t1

0xde86,	// (0x0003cf36) main_tv_pg_hdr_pane_t2

0xde94,	// (0x0003cf44) main_tv_pg_hdr_pane_t3

0xdea4,	// (0x0003cf54) main_tv_pg_hdr_pane_t4

0xdeb4,	// (0x0003cf64) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003eccf) main_tv_pg_hdr_pane_t

0xdec4,	// (0x0003cf74) single_mobtv_pg_channel_pane_ParamLimits

0xdec4,	// (0x0003cf74) single_mobtv_pg_channel_pane

0xded6,	// (0x0003cf86) single_mobtv_pg_channel_table_pane

0xdedf,	// (0x0003cf8f) single_mobtv_pg_channel_thumb_pane

0xdee8,	// (0x0003cf98) single_tv_pg_channel_pane_g1

0xdef1,	// (0x0003cfa1) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003ecda) single_tv_pg_channel_pane_g

0xc993,	// (0x0003ba43) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc993,	// (0x0003ba43) bg_single_mobtv_pg_channel_thumb_pane

0xdefa,	// (0x0003cfaa) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdefa,	// (0x0003cfaa) single_mobtv_pg_channel_thumb_pane_g1

0xdf08,	// (0x0003cfb8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf08,	// (0x0003cfb8) single_mobtv_pg_channel_thumb_pane_g2

0xdf14,	// (0x0003cfc4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf14,	// (0x0003cfc4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003ecdf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003ecdf) single_mobtv_pg_channel_thumb_pane_g

0xdf20,	// (0x0003cfd0) single_mobtv_pg_channel_thumb_pane_t1

0xdf2e,	// (0x0003cfde) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003ece6) single_mobtv_pg_channel_thumb_pane_t

0xc763,	// (0x0003b813) bg_single_mobtv_pg_channel_table_pane_g1

0xc763,	// (0x0003b813) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003e78c) bg_single_mobtv_pg_channel_table_pane_g

0xdf3c,	// (0x0003cfec) single_mobtv_pg_channel_table_pane_t1

0xdf4a,	// (0x0003cffa) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003eceb) single_mobtv_pg_channel_table_pane_t

0x7eeb,	// (0x00036f9b) main_mobtv_info_pane_g1_ParamLimits

0x7eeb,	// (0x00036f9b) main_mobtv_info_pane_g1

0x7f09,	// (0x00036fb9) main_mobtv_info_pane_t1_ParamLimits

0x7f09,	// (0x00036fb9) main_mobtv_info_pane_t1

0x7f81,	// (0x00037031) main_mobtv_info_pane_t2_ParamLimits

0x7f81,	// (0x00037031) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003ecf5) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003ecf5) main_mobtv_info_pane_t

0x8010,	// (0x000370c0) wait_bar_pane_cp05

0x8022,	// (0x000370d2) main_mobtv_loading_pane_g1_ParamLimits

0x8022,	// (0x000370d2) main_mobtv_loading_pane_g1

0x8033,	// (0x000370e3) main_mobtv_loading_pane_g2_ParamLimits

0x8033,	// (0x000370e3) main_mobtv_loading_pane_g2

0x803f,	// (0x000370ef) main_mobtv_loading_pane_g3_ParamLimits

0x803f,	// (0x000370ef) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003ecfc) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003ecfc) main_mobtv_loading_pane_g

0xdf58,	// (0x0003d008) main_mobtv_loading_pane_t1_ParamLimits

0xdf58,	// (0x0003d008) main_mobtv_loading_pane_t1

0xdf70,	// (0x0003d020) main_mobtv_loading_pane_t2_ParamLimits

0xdf70,	// (0x0003d020) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003ed03) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003ed03) main_mobtv_loading_pane_t

0x8052,	// (0x00037102) wait_bar_pane_cp06_ParamLimits

0x8052,	// (0x00037102) wait_bar_pane_cp06

0xdf94,	// (0x0003d044) main_mobtv_programe_curr_pane_t1

0xdfa2,	// (0x0003d052) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003ed08) main_mobtv_programe_curr_pane_t

0xdfb0,	// (0x0003d060) main_mobtv_programe_next_pane_t1

0xdfbe,	// (0x0003d06e) main_mobtv_programe_next_pane_t2

0xdfcc,	// (0x0003d07c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003ed0d) main_mobtv_programe_next_pane_t

0x9c03,	// (0x00038cb3) bg_popup_mobtv_noti_window_pane

0xdfda,	// (0x0003d08a) popup_mobtv_noti_window_g1

0xdfe2,	// (0x0003d092) popup_mobtv_noti_window_t1

0xdff0,	// (0x0003d0a0) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003ed14) popup_mobtv_noti_window_t

0xc763,	// (0x0003b813) bg_popup_mobtv_noti_window_pane_g1

0x9c03,	// (0x00038cb3) sc_clock_pane

0x9c03,	// (0x00038cb3) main_fs_bigclock_pane

0x771a,	// (0x000367ca) blid2_tripm_pane_t4_ParamLimits

0x771a,	// (0x000367ca) blid2_tripm_pane_t4

0x8061,	// (0x00037111) sc_clock_pane_g1_ParamLimits

0x8061,	// (0x00037111) sc_clock_pane_g1

0x8073,	// (0x00037123) sc_clock_pane_t1_ParamLimits

0x8073,	// (0x00037123) sc_clock_pane_t1

0x8097,	// (0x00037147) sc_clock_pane_t2_ParamLimits

0x8097,	// (0x00037147) sc_clock_pane_t2

0x80af,	// (0x0003715f) sc_clock_pane_t3_ParamLimits

0x80af,	// (0x0003715f) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003ed19) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003ed19) sc_clock_pane_t

0x90a5,	// (0x00038155) main_fs_bigclock_indicator_pane_ParamLimits

0x90a5,	// (0x00038155) main_fs_bigclock_indicator_pane

0x816b,	// (0x0003721b) main_fs_bigclock_pane_g1_ParamLimits

0x816b,	// (0x0003721b) main_fs_bigclock_pane_g1

0x90b1,	// (0x00038161) main_fs_bigclock_pane_t1_ParamLimits

0x90b1,	// (0x00038161) main_fs_bigclock_pane_t1

0x90c3,	// (0x00038173) main_fs_bigclock_pane_t2_ParamLimits

0x90c3,	// (0x00038173) main_fs_bigclock_pane_t2

0x90d7,	// (0x00038187) main_fs_bigclock_pane_t3_ParamLimits

0x90d7,	// (0x00038187) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003ef1e) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003ef1e) main_fs_bigclock_pane_t

0xec50,	// (0x0003dd00) main_fs_bigclock_indicator_pane_g1

0xdcc0,	// (0x0003cd70) ncim_query_content_pane_g2_ParamLimits

0xdcc0,	// (0x0003cd70) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003eca6) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003eca6) ncim_query_content_pane_g

0x80c6,	// (0x00037176) sc_clock_pane_t4_ParamLimits

0x80c6,	// (0x00037176) sc_clock_pane_t4

0x9c64,	// (0x00038d14) main_radioblah_pane

0xd0cc,	// (0x0003c17c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0cc,	// (0x0003c17c) cell_call4_button_pane_t1_copy1

0x7cf4,	// (0x00036da4) main_ncimui_pane_t1_ParamLimits

0x7cf4,	// (0x00036da4) main_ncimui_pane_t1

0x7d0e,	// (0x00036dbe) main_ncimui_pane_t2_ParamLimits

0x7d0e,	// (0x00036dbe) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003ec9f) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003ec9f) main_ncimui_pane_t

0xe143,	// (0x0003d1f3) main_radioblah_anim_pane_ParamLimits

0xe143,	// (0x0003d1f3) main_radioblah_anim_pane

0xe154,	// (0x0003d204) main_radioblah_info_pane_ParamLimits

0xe154,	// (0x0003d204) main_radioblah_info_pane

0xe168,	// (0x0003d218) main_radioblah_pane_t1_ParamLimits

0xe168,	// (0x0003d218) main_radioblah_pane_t1

0xe184,	// (0x0003d234) main_radioblah_pane_t2_ParamLimits

0xe184,	// (0x0003d234) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003ed3a) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003ed3a) main_radioblah_pane_t

0x81c8,	// (0x00037278) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81c8,	// (0x00037278) main_radioblah_rocker_ctrl_pane

0xe1cc,	// (0x0003d27c) main_radioblah_info_pane_t1_ParamLimits

0xe1cc,	// (0x0003d27c) main_radioblah_info_pane_t1

0x8220,	// (0x000372d0) main_radioblah_info_pane_t2_ParamLimits

0x8220,	// (0x000372d0) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003ed43) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003ed43) main_radioblah_info_pane_t

0xc763,	// (0x0003b813) main_radioblah_rocker_ctrl_pane_g1

0x82d0,	// (0x00037380) main_radioblah_rocker_ctrl_pane_g2

0x82d8,	// (0x00037388) main_radioblah_rocker_ctrl_pane_g3

0x82e0,	// (0x00037390) main_radioblah_rocker_ctrl_pane_g4

0x82e8,	// (0x00037398) main_radioblah_rocker_ctrl_pane_g5

0x82f0,	// (0x000373a0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003ed4c) main_radioblah_rocker_ctrl_pane_g

0x7985,	// (0x00036a35) main_cset_text2_pane_t1_copy1_ParamLimits

0x654f,	// (0x000355ff) cam4_image_uncrop_qvga_pane

0x65c6,	// (0x00035676) vid4_image_uncrop_qcif_pane

0x78a5,	// (0x00036955) cam6_image_uncrop_qvga_pane_ParamLimits

0x78a5,	// (0x00036955) cam6_image_uncrop_qvga_pane

0xd9c3,	// (0x0003ca73) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9c3,	// (0x0003ca73) vid6_image_uncrop_qcif_pane

0x9c03,	// (0x00038cb3) bg_popup_preview_window_pane_cp03

0xdc72,	// (0x0003cd22) list_cset_text2_pane

0xdc7a,	// (0x0003cd2a) main_cset6_text2_pane_g1

0xdc82,	// (0x0003cd32) main_cset6_text2_pane_t1

0x82f8,	// (0x000373a8) list_cset_text2_pane_t1_ParamLimits

0x82f8,	// (0x000373a8) list_cset_text2_pane_t1

0x9c64,	// (0x00038d14) main_radioblah_pane_ParamLimits

0x7ffc,	// (0x000370ac) main_mobtv_info_pane_t3_ParamLimits

0x7ffc,	// (0x000370ac) main_mobtv_info_pane_t3

0x81b6,	// (0x00037266) main_radioblah_pane_g1

0x81f0,	// (0x000372a0) main_radioblah_info_pane_g1

0x8275,	// (0x00037325) main_radioblah_info_pane_t3_ParamLimits

0x8275,	// (0x00037325) main_radioblah_info_pane_t3

0x308a,	// (0x0003213a) highlight_cell_cale_month_pane_ParamLimits

0x308a,	// (0x0003213a) highlight_cell_cale_month_pane

0x9c03,	// (0x00038cb3) main_phob_fisheye_pane

0xca7b,	// (0x0003bb2b) scroll_pane_cp0031_ParamLimits

0xca7b,	// (0x0003bb2b) scroll_pane_cp0031

0xdad5,	// (0x0003cb85) wait_bar_pane_cp08_ParamLimits

0x3178,	// (0x00032228) cset_list_set_pane_copy1_ParamLimits

0xe206,	// (0x0003d2b6) highlight_cell_cale_month_pane_g1

0x8311,	// (0x000373c1) highlight_cell_cale_month_pane_t1

0xd762,	// (0x0003c812) list_gen_pane_cp01

0xd2ba,	// (0x0003c36a) scroll_pane_01

0x831f,	// (0x000373cf) list_single_double_fisheye_pane

0x8328,	// (0x000373d8) list_double_fisheye_pane_g1_ParamLimits

0x8328,	// (0x000373d8) list_double_fisheye_pane_g1

0x8334,	// (0x000373e4) list_double_fisheye_pane_g2_ParamLimits

0x8334,	// (0x000373e4) list_double_fisheye_pane_g2

0x8348,	// (0x000373f8) list_double_fisheye_pane_g3_ParamLimits

0x8348,	// (0x000373f8) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003ed59) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003ed59) list_double_fisheye_pane_g

0x8371,	// (0x00037421) list_double_fisheye_pane_t1_ParamLimits

0x8371,	// (0x00037421) list_double_fisheye_pane_t1

0x838c,	// (0x0003743c) list_double_fisheye_pane_t2_ParamLimits

0x838c,	// (0x0003743c) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003ed64) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003ed64) list_double_fisheye_pane_t

0x9c03,	// (0x00038cb3) main_call5_pane

0x80f1,	// (0x000371a1) sc_swipe_pane_ParamLimits

0x80f1,	// (0x000371a1) sc_swipe_pane

0x83c1,	// (0x00037471) call5_image_pane_ParamLimits

0x83c1,	// (0x00037471) call5_image_pane

0x83de,	// (0x0003748e) call5_swipe_1_pane_ParamLimits

0x83de,	// (0x0003748e) call5_swipe_1_pane

0x83f1,	// (0x000374a1) call5_swipe_2_pane_ParamLimits

0x83f1,	// (0x000374a1) call5_swipe_2_pane

0x841e,	// (0x000374ce) popup_call5_audio_first_window_ParamLimits

0x841e,	// (0x000374ce) popup_call5_audio_first_window

0xc993,	// (0x0003ba43) call5_swipe_1_pane_g1_ParamLimits

0xc993,	// (0x0003ba43) call5_swipe_1_pane_g1

0xe20e,	// (0x0003d2be) call5_swipe_1_pane_g2_ParamLimits

0xe20e,	// (0x0003d2be) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003ed69) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003ed69) call5_swipe_1_pane_g

0xe21a,	// (0x0003d2ca) call5_swipe_1_pane_t1_ParamLimits

0xe21a,	// (0x0003d2ca) call5_swipe_1_pane_t1

0xc993,	// (0x0003ba43) call5_swipe_2_pane_g1_ParamLimits

0xc993,	// (0x0003ba43) call5_swipe_2_pane_g1

0xe22f,	// (0x0003d2df) call5_swipe_2_pane_g2_ParamLimits

0xe22f,	// (0x0003d2df) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003ed6e) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003ed6e) call5_swipe_2_pane_g

0xe23b,	// (0x0003d2eb) call5_swipe_2_pane_t1_ParamLimits

0xe23b,	// (0x0003d2eb) call5_swipe_2_pane_t1

0xe250,	// (0x0003d300) sc_swipe_pane_g1_ParamLimits

0xe250,	// (0x0003d300) sc_swipe_pane_g1

0xe25d,	// (0x0003d30d) sc_swipe_pane_g2_ParamLimits

0xe25d,	// (0x0003d30d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003ed73) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003ed73) sc_swipe_pane_g

0xe269,	// (0x0003d319) sc_swipe_pane_t1_ParamLimits

0xe269,	// (0x0003d319) sc_swipe_pane_t1

0x9c03,	// (0x00038cb3) main_cmail_launcher_pane

0x8433,	// (0x000374e3) aid_size_cell_cmail_l_ParamLimits

0x8433,	// (0x000374e3) aid_size_cell_cmail_l

0x844d,	// (0x000374fd) grid_cmail_l_pane_ParamLimits

0x844d,	// (0x000374fd) grid_cmail_l_pane

0x8468,	// (0x00037518) cell_cmail_l_pane_ParamLimits

0x8468,	// (0x00037518) cell_cmail_l_pane

0x8490,	// (0x00037540) cell_cmail_l_pane_g1_ParamLimits

0x8490,	// (0x00037540) cell_cmail_l_pane_g1

0x849c,	// (0x0003754c) cell_cmail_l_pane_t1_ParamLimits

0x849c,	// (0x0003754c) cell_cmail_l_pane_t1

0xe27e,	// (0x0003d32e) cell_cmail_l_pane_t2_ParamLimits

0xe27e,	// (0x0003d32e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003ed78) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003ed78) cell_cmail_l_pane_t

0x9c64,	// (0x00038d14) grid_highlight_pane_cp018_ParamLimits

0x9c64,	// (0x00038d14) grid_highlight_pane_cp018

0x0f44,	// (0x0002fff4) main2_pane_ParamLimits

0x0f44,	// (0x0002fff4) main2_pane

0xa450,	// (0x00039500) popup_sp_fs_action_menu_bg_pane_g1

0xa458,	// (0x00039508) popup_sp_fs_action_menu_bg_pane_g2

0xa460,	// (0x00039510) popup_sp_fs_action_menu_bg_pane_g3

0xa468,	// (0x00039518) popup_sp_fs_action_menu_bg_pane_g4

0xa470,	// (0x00039520) popup_sp_fs_action_menu_bg_pane_g5

0xa478,	// (0x00039528) popup_sp_fs_action_menu_bg_pane_g6

0xa480,	// (0x00039530) popup_sp_fs_action_menu_bg_pane_g7

0xa488,	// (0x00039538) popup_sp_fs_action_menu_bg_pane_g8

0xa490,	// (0x00039540) popup_sp_fs_action_menu_bg_pane_g9

0xa498,	// (0x00039548) popup_sp_fs_action_menu_bg_pane_g10

0xa498,	// (0x00039548) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003e23a) popup_sp_fs_action_menu_bg_pane_g

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g3_g1

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t3_g3_g2

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003e2e8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003e2e8) list_medium_line_x2_t3_g3_g

0x1f11,	// (0x00030fc1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f11,	// (0x00030fc1) list_medium_line_x2_t3_g3_t1

0x1f26,	// (0x00030fd6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1f26,	// (0x00030fd6) list_medium_line_x2_t3_g3_t2

0x1f3a,	// (0x00030fea) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003e2ef) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003e2ef) list_medium_line_x2_t3_g3_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g2_g1

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003e2f6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003e2f6) list_medium_line_x2_t3_g2_g

0x1f4f,	// (0x00030fff) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1f4f,	// (0x00030fff) list_medium_line_x2_t3_g2_t1

0x1f65,	// (0x00031015) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1f65,	// (0x00031015) list_medium_line_x2_t3_g2_t2

0x1f77,	// (0x00031027) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1f77,	// (0x00031027) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003e2fb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003e2fb) list_medium_line_x2_t3_g2_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t4_g4_g1

0x1f95,	// (0x00031045) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f95,	// (0x00031045) list_medium_line_x2_t4_g4_g2

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t4_g4_g3

0x1fa1,	// (0x00031051) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1fa1,	// (0x00031051) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003e302) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003e302) list_medium_line_x2_t4_g4_g

0x1fad,	// (0x0003105d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1fad,	// (0x0003105d) list_medium_line_x2_t4_g4_t1

0x1fc4,	// (0x00031074) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1fc4,	// (0x00031074) list_medium_line_x2_t4_g4_t2

0x1fd9,	// (0x00031089) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1fd9,	// (0x00031089) list_medium_line_x2_t4_g4_t3

0x1feb,	// (0x0003109b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1feb,	// (0x0003109b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003e30b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003e30b) list_medium_line_x2_t4_g4_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g4_g1

0x1f95,	// (0x00031045) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f95,	// (0x00031045) list_medium_line_x2_t2_g4_g2

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t2_g4_g3

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003e372) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003e372) list_medium_line_x2_t2_g4_g

0x30b0,	// (0x00032160) list_medium_line_x2_t2_g4_t1_ParamLimits

0x30b0,	// (0x00032160) list_medium_line_x2_t2_g4_t1

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003e37b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003e37b) list_medium_line_x2_t2_g4_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g3_g1

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t2_g3_g2

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003e2e8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003e2e8) list_medium_line_x2_t2_g3_g

0x30c5,	// (0x00032175) list_medium_line_x2_t2_g3_t1_ParamLimits

0x30c5,	// (0x00032175) list_medium_line_x2_t2_g3_t1

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003e380) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003e380) list_medium_line_x2_t2_g3_t

0x321d,	// (0x000322cd) main_sp_fs_list_pane_ParamLimits

0x321d,	// (0x000322cd) main_sp_fs_list_pane

0x3229,	// (0x000322d9) sp_fs_scroll_pane_ParamLimits

0x3229,	// (0x000322d9) sp_fs_scroll_pane

0x3235,	// (0x000322e5) list_medium_line_x2_t3_t1

0x3245,	// (0x000322f5) list_medium_line_x2_t3_t2

0x3253,	// (0x00032303) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003e3cb) list_medium_line_x2_t3_t

0x3261,	// (0x00032311) list_medium_line_x3_t4_t1

0x3271,	// (0x00032321) list_medium_line_x3_t4_t2

0x327f,	// (0x0003232f) list_medium_line_x3_t4_t3

0x3253,	// (0x00032303) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003e3d2) list_medium_line_x3_t4_t

0x328d,	// (0x0003233d) list_medium_line_x4_t5_t1

0x329d,	// (0x0003234d) list_medium_line_x4_t5_t2

0x327f,	// (0x0003232f) list_medium_line_x4_t5_t3

0x32ab,	// (0x0003235b) list_medium_line_x4_t5_t4

0x3253,	// (0x00032303) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003e3db) list_medium_line_x4_t5_t

0xc22f,	// (0x0003b2df) list_medium_line_t4_g4_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_t4_g4_g1

0x1fa1,	// (0x00031051) list_medium_line_t4_g4_g2_ParamLimits

0x1fa1,	// (0x00031051) list_medium_line_t4_g4_g2

0x32b9,	// (0x00032369) list_medium_line_t4_g4_g3_ParamLimits

0x32b9,	// (0x00032369) list_medium_line_t4_g4_g3

0x1f05,	// (0x00030fb5) list_medium_line_t4_g4_g4_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003e3e6) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003e3e6) list_medium_line_t4_g4_g

0x32c5,	// (0x00032375) list_medium_line_t4_g4_t1_ParamLimits

0x32c5,	// (0x00032375) list_medium_line_t4_g4_t1

0x32da,	// (0x0003238a) list_medium_line_t4_g4_t2_ParamLimits

0x32da,	// (0x0003238a) list_medium_line_t4_g4_t2

0x32f0,	// (0x000323a0) list_medium_line_t4_g4_t3_ParamLimits

0x32f0,	// (0x000323a0) list_medium_line_t4_g4_t3

0x1f3a,	// (0x00030fea) list_medium_line_t4_g4_t4_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003e3ef) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003e3ef) list_medium_line_t4_g4_t

0x343b,	// (0x000324eb) chi_dic_find_pane_g1

0x4676,	// (0x00033726) main_tport_pane

0xd3c6,	// (0x0003c476) list_medium_line_plain_t1

0x6e50,	// (0x00035f00) list_medium_line_t2_g2_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t2_g2_g1

0xd3dc,	// (0x0003c48c) list_medium_line_t2_g2_g2_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003eab0) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003eab0) list_medium_line_t2_g2_g

0x6e5c,	// (0x00035f0c) list_medium_line_t2_g2_t1_ParamLimits

0x6e5c,	// (0x00035f0c) list_medium_line_t2_g2_t1

0x6e73,	// (0x00035f23) list_medium_line_t2_g2_t2_ParamLimits

0x6e73,	// (0x00035f23) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003eab5) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003eab5) list_medium_line_t2_g2_t

0xd76b,	// (0x0003c81b) aid_sp_fs_list_icon_a_sm

0xd773,	// (0x0003c823) aid_sp_fs_list_icon_d

0xd77b,	// (0x0003c82b) aid_sp_fs_text_primary

0xd784,	// (0x0003c834) aid_sp_fs_text_secondary

0x74d0,	// (0x00036580) list_medium_line

0x74d0,	// (0x00036580) list_medium_line_g2

0x74d0,	// (0x00036580) list_medium_line_g3

0x74d0,	// (0x00036580) list_medium_line_plain

0x74d0,	// (0x00036580) list_medium_line_plain_t2

0x74d0,	// (0x00036580) list_medium_line_plain_t3

0x74d0,	// (0x00036580) list_medium_line_right_icon

0x74d0,	// (0x00036580) list_medium_line_right_iconx2

0x74d0,	// (0x00036580) list_medium_line_t2

0x74d0,	// (0x00036580) list_medium_line_t2_g2

0x74d0,	// (0x00036580) list_medium_line_t2_g3

0x74d0,	// (0x00036580) list_medium_line_t2_right_icon

0x74d0,	// (0x00036580) list_medium_line_t2_right_iconx2

0x74d0,	// (0x00036580) list_medium_line_t3

0x74d0,	// (0x00036580) list_medium_line_t3_g2

0x74d0,	// (0x00036580) list_medium_line_t3_g3

0x74d0,	// (0x00036580) list_medium_line_t3_right_iconx2

0x74d9,	// (0x00036589) list_medium_line_t4_g4

0x74d0,	// (0x00036580) list_medium_line_x2

0x74d0,	// (0x00036580) list_medium_line_x2_t2_g2

0x74d0,	// (0x00036580) list_medium_line_x2_t2_g3

0x74d0,	// (0x00036580) list_medium_line_x2_t2_g4

0x74d0,	// (0x00036580) list_medium_line_x2_t3

0x74d0,	// (0x00036580) list_medium_line_x2_t3_g2

0x74d0,	// (0x00036580) list_medium_line_x2_t3_g3

0x74d0,	// (0x00036580) list_medium_line_x2_t3_g4

0x74d0,	// (0x00036580) list_medium_line_x2_t4_g2

0x74d0,	// (0x00036580) list_medium_line_x2_t4_g4

0x74e2,	// (0x00036592) list_medium_line_x3

0x74e2,	// (0x00036592) list_medium_line_x3_t4

0x74e2,	// (0x00036592) list_medium_line_x3_t4_g4

0x74d9,	// (0x00036589) list_medium_line_x4_t4

0x74d9,	// (0x00036589) list_medium_line_x4_t4_g7

0x74d9,	// (0x00036589) list_medium_line_x4_t5

0x74eb,	// (0x0003659b) list_single_fs_dyc_pane_ParamLimits

0x74eb,	// (0x0003659b) list_single_fs_dyc_pane

0xc22f,	// (0x0003b2df) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x4_t4_g7_g1

0x7bf9,	// (0x00036ca9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bf9,	// (0x00036ca9) list_medium_line_x4_t4_g7_g2

0x7c05,	// (0x00036cb5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c05,	// (0x00036cb5) list_medium_line_x4_t4_g7_g3

0x7c14,	// (0x00036cc4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c14,	// (0x00036cc4) list_medium_line_x4_t4_g7_g4

0x7c20,	// (0x00036cd0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c20,	// (0x00036cd0) list_medium_line_x4_t4_g7_g5

0x7c2f,	// (0x00036cdf) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c2f,	// (0x00036cdf) list_medium_line_x4_t4_g7_g6

0x7c3e,	// (0x00036cee) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c3e,	// (0x00036cee) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003ec80) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003ec80) list_medium_line_x4_t4_g7_g

0x7c4a,	// (0x00036cfa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c4a,	// (0x00036cfa) list_medium_line_x4_t4_g7_t1

0x7c5f,	// (0x00036d0f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c5f,	// (0x00036d0f) list_medium_line_x4_t4_g7_t2

0x7c74,	// (0x00036d24) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c74,	// (0x00036d24) list_medium_line_x4_t4_g7_t3

0x7c89,	// (0x00036d39) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c89,	// (0x00036d39) list_medium_line_x4_t4_g7_t4

0x7c9b,	// (0x00036d4b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c9b,	// (0x00036d4b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003ec8f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003ec8f) list_medium_line_x4_t4_g7_t

0x7cad,	// (0x00036d5d) list_single_dyc_row_pane_ParamLimits

0x7cad,	// (0x00036d5d) list_single_dyc_row_pane

0x83ae,	// (0x0003745e) call5_gesture_pane_ParamLimits

0x83ae,	// (0x0003745e) call5_gesture_pane

0x8404,	// (0x000374b4) call5_windows_pane_ParamLimits

0x8404,	// (0x000374b4) call5_windows_pane

0x84b2,	// (0x00037562) call5_swipe_1_pane_cp_ParamLimits

0x84b2,	// (0x00037562) call5_swipe_1_pane_cp

0x84be,	// (0x0003756e) call5_swipe_2_pane_cp_ParamLimits

0x84be,	// (0x0003756e) call5_swipe_2_pane_cp

0xa55b,	// (0x0003960b) call5_image_pane_cp

0x84ca,	// (0x0003757a) popup_call5_audio_first_window_cp_ParamLimits

0x84ca,	// (0x0003757a) popup_call5_audio_first_window_cp

0xe250,	// (0x0003d300) call5_swipe_1_pane_g1_cp_ParamLimits

0xe250,	// (0x0003d300) call5_swipe_1_pane_g1_cp

0xe290,	// (0x0003d340) call5_swipe_1_pane_g2_cp

0xe269,	// (0x0003d319) call5_swipe_1_pane_t1_cp_ParamLimits

0xe269,	// (0x0003d319) call5_swipe_1_pane_t1_cp

0xe250,	// (0x0003d300) call5_swipe_2_pane_g1_cp_ParamLimits

0xe250,	// (0x0003d300) call5_swipe_2_pane_g1_cp

0xe298,	// (0x0003d348) call5_swipe_2_pane_g2_cp

0xe2a0,	// (0x0003d350) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a0,	// (0x0003d350) call5_swipe_2_pane_t1_cp

0x9c64,	// (0x00038d14) main_sp_fs_email_pane

0xe2b5,	// (0x0003d365) main_sp_fs_listscroll_pane_te

0xe2be,	// (0x0003d36e) popup_sp_fs_action_menu_pane_ParamLimits

0xe2be,	// (0x0003d36e) popup_sp_fs_action_menu_pane

0xc763,	// (0x0003b813) bg_sp_fs_ctrlbar_pane_g1

0xcd1c,	// (0x0003bdcc) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd2e,	// (0x0003bdde) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd25,	// (0x0003bdd5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc763,	// (0x0003b813) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003ed7d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc542,	// (0x0003b5f2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc542,	// (0x0003b5f2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe304,	// (0x0003d3b4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe304,	// (0x0003d3b4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe310,	// (0x0003d3c0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe310,	// (0x0003d3c0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003ed86) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003ed86) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe31c,	// (0x0003d3cc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe31c,	// (0x0003d3cc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe336,	// (0x0003d3e6) list_medium_line_t2_right_icon_g1

0x84d8,	// (0x00037588) list_medium_line_t2_right_icon_t1

0x84e8,	// (0x00037598) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003ed8b) list_medium_line_t2_right_icon_t

0xc30a,	// (0x0003b3ba) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc30a,	// (0x0003b3ba) bg_sp_fs_ctrlbar_pane

0x8547,	// (0x000375f7) main_sp_fs_ctrlbar_button_pane_cp01

0x8551,	// (0x00037601) main_sp_fs_ctrlbar_ddmenu_pane

0xc22f,	// (0x0003b2df) main_sp_fs_ctrlbar_pane_g1

0xe376,	// (0x0003d426) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003ed90) main_sp_fs_ctrlbar_pane_g

0xe382,	// (0x0003d432) main_sp_fs_ctrlbar_pane_t1

0x855b,	// (0x0003760b) main_sp_fs_ctrlbar_pane

0x857f,	// (0x0003762f) main_sp_fs_listscroll_pane_te_cp01

0x859f,	// (0x0003764f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x859f,	// (0x0003764f) popup_sp_fs_action_menu_pane_cp01

0x9c64,	// (0x00038d14) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9c64,	// (0x00038d14) bg_sp_fs_highlight_list_pane_cp01

0xe3b2,	// (0x0003d462) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3b2,	// (0x0003d462) sp_fs_action_menu_list_gene_pane_g1

0xe3c1,	// (0x0003d471) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3c1,	// (0x0003d471) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003ed9a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003ed9a) sp_fs_action_menu_list_gene_pane_g

0xe3ce,	// (0x0003d47e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ce,	// (0x0003d47e) sp_fs_action_menu_list_gene_pane_t1

0xe3e6,	// (0x0003d496) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3e6,	// (0x0003d496) sp_fs_action_menu_list_gene_pane

0xe409,	// (0x0003d4b9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe409,	// (0x0003d4b9) popup_sp_fs_action_menu_bg_pane

0xe417,	// (0x0003d4c7) sp_fs_action_menu_list_pane_ParamLimits

0xe417,	// (0x0003d4c7) sp_fs_action_menu_list_pane

0xe43b,	// (0x0003d4eb) sp_fs_scroll_pane_cp01_ParamLimits

0xe43b,	// (0x0003d4eb) sp_fs_scroll_pane_cp01

0x85d5,	// (0x00037685) list_medium_line_plain_t2_t1

0x85e5,	// (0x00037695) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003ed9f) list_medium_line_plain_t2_t

0x85f5,	// (0x000376a5) list_medium_line_plain_t3_t1

0x8605,	// (0x000376b5) list_medium_line_plain_t3_t2

0x8613,	// (0x000376c3) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003eda4) list_medium_line_plain_t3_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t2_g2_g1

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003e2f6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003e2f6) list_medium_line_x2_t2_g2_g

0x32c5,	// (0x00032375) list_medium_line_x2_t2_g2_t1_ParamLimits

0x32c5,	// (0x00032375) list_medium_line_x2_t2_g2_t1

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003edab) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003edab) list_medium_line_x2_t2_g2_t

0xc22f,	// (0x0003b2df) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t4_g2_g1

0x1f05,	// (0x00030fb5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003e2f6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003e2f6) list_medium_line_x2_t4_g2_g

0x8621,	// (0x000376d1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8621,	// (0x000376d1) list_medium_line_x2_t4_g2_t1

0x863b,	// (0x000376eb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x863b,	// (0x000376eb) list_medium_line_x2_t4_g2_t2

0x8651,	// (0x00037701) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8651,	// (0x00037701) list_medium_line_x2_t4_g2_t3

0x1f3a,	// (0x00030fea) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003edb0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003edb0) list_medium_line_x2_t4_g2_t

0xe461,	// (0x0003d511) list_medium_line_t3_right_iconx2_g1

0xe336,	// (0x0003d3e6) list_medium_line_t3_right_iconx2_g2

0x8666,	// (0x00037716) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003edb9) list_medium_line_t3_right_iconx2_g

0x8670,	// (0x00037720) list_medium_line_t3_right_iconx2_t1

0x8680,	// (0x00037730) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003edc0) list_medium_line_t3_right_iconx2_t

0xc22f,	// (0x0003b2df) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x3_t4_g4_g1

0x1ef9,	// (0x00030fa9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x3_t4_g4_g2

0x1fa1,	// (0x00031051) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1fa1,	// (0x00031051) list_medium_line_x3_t4_g4_g3

0x868e,	// (0x0003773e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x868e,	// (0x0003773e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003edc5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003edc5) list_medium_line_x3_t4_g4_g

0x869a,	// (0x0003774a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x869a,	// (0x0003774a) list_medium_line_x3_t4_g4_t1

0x86b1,	// (0x00037761) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86b1,	// (0x00037761) list_medium_line_x3_t4_g4_t2

0x86cc,	// (0x0003777c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86cc,	// (0x0003777c) list_medium_line_x3_t4_g4_t3

0x86e1,	// (0x00037791) list_medium_line_x3_t4_g4_t4_ParamLimits

0x86e1,	// (0x00037791) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003edce) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003edce) list_medium_line_x3_t4_g4_t

0x86fe,	// (0x000377ae) list_single_dyc_row_text_pane_t1_ParamLimits

0x86fe,	// (0x000377ae) list_single_dyc_row_text_pane_t1

0x8747,	// (0x000377f7) list_single_dyc_row_text_pane_t2_ParamLimits

0x8747,	// (0x000377f7) list_single_dyc_row_text_pane_t2

0xe469,	// (0x0003d519) list_single_dyc_row_text_pane_t3_ParamLimits

0xe469,	// (0x0003d519) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003edd7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003edd7) list_single_dyc_row_text_pane_t

0xe48d,	// (0x0003d53d) list_single_dyc_row_pane_g1_ParamLimits

0xe48d,	// (0x0003d53d) list_single_dyc_row_pane_g1

0xe499,	// (0x0003d549) list_single_dyc_row_pane_g2_ParamLimits

0xe499,	// (0x0003d549) list_single_dyc_row_pane_g2

0xe4a5,	// (0x0003d555) list_single_dyc_row_pane_g3_ParamLimits

0xe4a5,	// (0x0003d555) list_single_dyc_row_pane_g3

0xe4b1,	// (0x0003d561) list_single_dyc_row_pane_g4_ParamLimits

0xe4b1,	// (0x0003d561) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003ede4) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003ede4) list_single_dyc_row_pane_g

0xe4bd,	// (0x0003d56d) list_single_dyc_row_text_pane_ParamLimits

0xe4bd,	// (0x0003d56d) list_single_dyc_row_text_pane

0x9c03,	// (0x00038cb3) bg_sp_fs_scroll_pane

0xe4dc,	// (0x0003d58c) thumb_sp_fs_scroll_pane

0x6e50,	// (0x00035f00) list_medium_line_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_g1

0xe4e5,	// (0x0003d595) list_medium_line_t1_ParamLimits

0xe4e5,	// (0x0003d595) list_medium_line_t1

0xc22f,	// (0x0003b2df) list_medium_line_x2_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_g1

0x1ef9,	// (0x00030fa9) list_medium_line_x2_g2_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003eded) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003eded) list_medium_line_x2_g

0xe4fa,	// (0x0003d5aa) list_medium_line_x2_t1_ParamLimits

0xe4fa,	// (0x0003d5aa) list_medium_line_x2_t1

0xc22f,	// (0x0003b2df) list_medium_line_x3_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x3_g1

0x1ef9,	// (0x00030fa9) list_medium_line_x3_g2_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003eded) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003eded) list_medium_line_x3_g

0xe4fa,	// (0x0003d5aa) list_medium_line_x3_t1_ParamLimits

0xe4fa,	// (0x0003d5aa) list_medium_line_x3_t1

0xe510,	// (0x0003d5c0) thumb_sp_fs_scroll_pane_g1

0xe519,	// (0x0003d5c9) thumb_sp_fs_scroll_pane_g2

0xe522,	// (0x0003d5d2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003edf2) thumb_sp_fs_scroll_pane_g

0xe510,	// (0x0003d5c0) bg_sp_fs_scroll_pane_g1

0xe519,	// (0x0003d5c9) bg_sp_fs_scroll_pane_g2

0xe522,	// (0x0003d5d2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003edf2) bg_sp_fs_scroll_pane_g

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc22f,	// (0x0003b2df) list_medium_line_x2_t3_g4_g1

0x1f95,	// (0x00031045) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f95,	// (0x00031045) list_medium_line_x2_t3_g4_g2

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ef9,	// (0x00030fa9) list_medium_line_x2_t3_g4_g3

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f05,	// (0x00030fb5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003e372) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003e372) list_medium_line_x2_t3_g4_g

0x887c,	// (0x0003792c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x887c,	// (0x0003792c) list_medium_line_x2_t3_g4_t1

0x8892,	// (0x00037942) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8892,	// (0x00037942) list_medium_line_x2_t3_g4_t2

0x1f3a,	// (0x00030fea) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1f3a,	// (0x00030fea) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003edf9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003edf9) list_medium_line_x2_t3_g4_t

0x6e50,	// (0x00035f00) list_medium_line_g2_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_g2_g1

0xd3dc,	// (0x0003c48c) list_medium_line_g2_g2_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003eab0) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003eab0) list_medium_line_g2_g

0xe52b,	// (0x0003d5db) list_medium_line_g2_t1_ParamLimits

0xe52b,	// (0x0003d5db) list_medium_line_g2_t1

0x6e50,	// (0x00035f00) list_medium_line_t3_g2_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t3_g2_g1

0xd3dc,	// (0x0003c48c) list_medium_line_t3_g2_g2_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003eab0) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003eab0) list_medium_line_t3_g2_g

0x88ab,	// (0x0003795b) list_medium_line_t3_g2_t1_ParamLimits

0x88ab,	// (0x0003795b) list_medium_line_t3_g2_t1

0x88c5,	// (0x00037975) list_medium_line_t3_g2_t2_ParamLimits

0x88c5,	// (0x00037975) list_medium_line_t3_g2_t2

0x88db,	// (0x0003798b) list_medium_line_t3_g2_t3_ParamLimits

0x88db,	// (0x0003798b) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003ee00) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003ee00) list_medium_line_t3_g2_t

0xe336,	// (0x0003d3e6) list_medium_line_right_icon_g1

0xe540,	// (0x0003d5f0) list_medium_line_right_icon_t1

0x6e50,	// (0x00035f00) list_medium_line_t2_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t2_g1

0x88f2,	// (0x000379a2) list_medium_line_t2_t1_ParamLimits

0x88f2,	// (0x000379a2) list_medium_line_t2_t1

0x890c,	// (0x000379bc) list_medium_line_t2_t2_ParamLimits

0x890c,	// (0x000379bc) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003ee07) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003ee07) list_medium_line_t2_t

0x6e50,	// (0x00035f00) list_medium_line_t3_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t3_g1

0x8925,	// (0x000379d5) list_medium_line_t3_t1_ParamLimits

0x8925,	// (0x000379d5) list_medium_line_t3_t1

0x893c,	// (0x000379ec) list_medium_line_t3_t2_ParamLimits

0x893c,	// (0x000379ec) list_medium_line_t3_t2

0x8951,	// (0x00037a01) list_medium_line_t3_t3_ParamLimits

0x8951,	// (0x00037a01) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003ee0c) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003ee0c) list_medium_line_t3_t

0x6e50,	// (0x00035f00) list_medium_line_g3_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_g3_g1

0xe54e,	// (0x0003d5fe) list_medium_line_g3_g2_ParamLimits

0xe54e,	// (0x0003d5fe) list_medium_line_g3_g2

0xd3dc,	// (0x0003c48c) list_medium_line_g3_g3_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003ee13) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003ee13) list_medium_line_g3_g

0xe55a,	// (0x0003d60a) list_medium_line_g3_t1_ParamLimits

0xe55a,	// (0x0003d60a) list_medium_line_g3_t1

0x6e50,	// (0x00035f00) list_medium_line_t2_g3_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t2_g3_g1

0xe54e,	// (0x0003d5fe) list_medium_line_t2_g3_g2_ParamLimits

0xe54e,	// (0x0003d5fe) list_medium_line_t2_g3_g2

0xd3dc,	// (0x0003c48c) list_medium_line_t2_g3_g3_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003ee13) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003ee13) list_medium_line_t2_g3_g

0x8963,	// (0x00037a13) list_medium_line_t2_g3_t1_ParamLimits

0x8963,	// (0x00037a13) list_medium_line_t2_g3_t1

0x897a,	// (0x00037a2a) list_medium_line_t2_g3_t2_ParamLimits

0x897a,	// (0x00037a2a) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003ee1a) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003ee1a) list_medium_line_t2_g3_t

0x6e50,	// (0x00035f00) list_medium_line_t3_g3_g1_ParamLimits

0x6e50,	// (0x00035f00) list_medium_line_t3_g3_g1

0xe54e,	// (0x0003d5fe) list_medium_line_t3_g3_g2_ParamLimits

0xe54e,	// (0x0003d5fe) list_medium_line_t3_g3_g2

0xd3dc,	// (0x0003c48c) list_medium_line_t3_g3_g3_ParamLimits

0xd3dc,	// (0x0003c48c) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003ee13) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003ee13) list_medium_line_t3_g3_g

0x8993,	// (0x00037a43) list_medium_line_t3_g3_t1_ParamLimits

0x8993,	// (0x00037a43) list_medium_line_t3_g3_t1

0x89ac,	// (0x00037a5c) list_medium_line_t3_g3_t2_ParamLimits

0x89ac,	// (0x00037a5c) list_medium_line_t3_g3_t2

0x89c2,	// (0x00037a72) list_medium_line_t3_g3_t3_ParamLimits

0x89c2,	// (0x00037a72) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003ee1f) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003ee1f) list_medium_line_t3_g3_t

0xe461,	// (0x0003d511) list_medium_line_right_iconx2_g1

0xe336,	// (0x0003d3e6) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ee26) list_medium_line_right_iconx2_g

0xe56f,	// (0x0003d61f) list_medium_line_right_iconx2_t1

0xe461,	// (0x0003d511) list_medium_line_t2_right_iconx2_g1

0xe336,	// (0x0003d3e6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003ee26) list_medium_line_t2_right_iconx2_g

0x89dc,	// (0x00037a8c) list_medium_line_t2_right_iconx2_t1

0x89ec,	// (0x00037a9c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003ee2b) list_medium_line_t2_right_iconx2_t

0x89fe,	// (0x00037aae) list_medium_line_x4_t4_t1

0x8a0c,	// (0x00037abc) list_medium_line_x4_t4_t2

0x8a1c,	// (0x00037acc) list_medium_line_x4_t4_t3

0x8a2c,	// (0x00037adc) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003ee30) list_medium_line_x4_t4_t

0x8a7f,	// (0x00037b2f) tport_appsw_pane_ParamLimits

0x8a7f,	// (0x00037b2f) tport_appsw_pane

0x8a97,	// (0x00037b47) tport_contact_pane_ParamLimits

0x8a97,	// (0x00037b47) tport_contact_pane

0x8aaf,	// (0x00037b5f) tport_listscroll_pane_ParamLimits

0x8aaf,	// (0x00037b5f) tport_listscroll_pane

0x8ac9,	// (0x00037b79) cell_tport_appsw_pane_ParamLimits

0x8ac9,	// (0x00037b79) cell_tport_appsw_pane

0xd15f,	// (0x0003c20f) tport_appsw_pane_g1_ParamLimits

0xd15f,	// (0x0003c20f) tport_appsw_pane_g1

0xe57d,	// (0x0003d62d) tport_contact_pane_g1

0xe586,	// (0x0003d636) tport_contact_pane_t1

0xe594,	// (0x0003d644) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003ee39) tport_contact_pane_t

0xe5a2,	// (0x0003d652) list_tport_pane

0xe5ab,	// (0x0003d65b) scroll_pane_cp_030

0x8b1b,	// (0x00037bcb) cell_tport_appsw_pane_g1

0x8b2b,	// (0x00037bdb) cell_tport_appsw_pane_t1

0x8b39,	// (0x00037be9) grid_highlight_pane_cp019

0x8b41,	// (0x00037bf1) list_tport_double_graphic_pane_ParamLimits

0x8b41,	// (0x00037bf1) list_tport_double_graphic_pane

0x9c64,	// (0x00038d14) list_highlight_pane_cp023_ParamLimits

0x9c64,	// (0x00038d14) list_highlight_pane_cp023

0x8b4e,	// (0x00037bfe) list_tport_double_graphic_pane_g1_ParamLimits

0x8b4e,	// (0x00037bfe) list_tport_double_graphic_pane_g1

0x8b5b,	// (0x00037c0b) list_tport_double_graphic_pane_t1_ParamLimits

0x8b5b,	// (0x00037c0b) list_tport_double_graphic_pane_t1

0x8b70,	// (0x00037c20) list_tport_double_graphic_pane_t2_ParamLimits

0x8b70,	// (0x00037c20) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003ee45) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003ee45) list_tport_double_graphic_pane_t

0x9c03,	// (0x00038cb3) main_cale_note_pane

0x0b29,	// (0x0002fbd9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0b29,	// (0x0002fbd9) cell_vitu2_function_top_wide_pane_cp01

0x8010,	// (0x000370c0) wait_bar_pane_cp05_ParamLimits

0x9c64,	// (0x00038d14) listscroll_cmail_pane

0xe5bc,	// (0x0003d66c) list_cmail_pane

0x8b8c,	// (0x00037c3c) list_cmail_body_pane

0xd533,	// (0x0003c5e3) list_single_cmail_header_caption_pane

0x8b9f,	// (0x00037c4f) list_single_cmail_header_detail_pane_ParamLimits

0x8b9f,	// (0x00037c4f) list_single_cmail_header_detail_pane

0x8bca,	// (0x00037c7a) list_single_cmail_header_caption_pane_t1

0x8bda,	// (0x00037c8a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bda,	// (0x00037c8a) list_single_cmail_header_detail_pane_g1

0xe5dc,	// (0x0003d68c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5dc,	// (0x0003d68c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003ee4a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003ee4a) list_single_cmail_header_detail_pane_g

0xe5f5,	// (0x0003d6a5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5f5,	// (0x0003d6a5) list_single_cmail_header_detail_pane_t1

0xe667,	// (0x0003d717) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe667,	// (0x0003d717) list_single_cmail_header_editor_pane_bg

0xdef1,	// (0x0003cfa1) list_cmail_body_pane_g1

0xe67e,	// (0x0003d72e) list_cmail_body_pane_t1

0xd19c,	// (0x0003c24c) list_single_cmail_header_editor_pane_bg_g1

0xa7b8,	// (0x00039868) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ac,	// (0x0003c25c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1a4,	// (0x0003c254) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3d4,	// (0x0003c484) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1cc,	// (0x0003c27c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1bc,	// (0x0003c26c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1c4,	// (0x0003c274) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa798,	// (0x00039848) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bf2,	// (0x00037ca2) calenote_gesture_pane_ParamLimits

0x8bf2,	// (0x00037ca2) calenote_gesture_pane

0x8c12,	// (0x00037cc2) calenote_window_pane_ParamLimits

0x8c12,	// (0x00037cc2) calenote_window_pane

0xe68c,	// (0x0003d73c) popup_note_window_cp01

0x8c2e,	// (0x00037cde) calenote_swipe_1_pane_ParamLimits

0x8c2e,	// (0x00037cde) calenote_swipe_1_pane

0x84be,	// (0x0003756e) calenote_swipe_2_pane_ParamLimits

0x84be,	// (0x0003756e) calenote_swipe_2_pane

0xe250,	// (0x0003d300) calenote_swipe_1_pane_g1_ParamLimits

0xe250,	// (0x0003d300) calenote_swipe_1_pane_g1

0xe25d,	// (0x0003d30d) calenote_swipe_1_pane_g2_ParamLimits

0xe25d,	// (0x0003d30d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003ed73) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003ed73) calenote_swipe_1_pane_g

0xe69e,	// (0x0003d74e) calenote_swipe_1_pane_t1_ParamLimits

0xe69e,	// (0x0003d74e) calenote_swipe_1_pane_t1

0xe250,	// (0x0003d300) calenote_swipe_2_pane_g1_ParamLimits

0xe250,	// (0x0003d300) calenote_swipe_2_pane_g1

0xe6bd,	// (0x0003d76d) calenote_swipe_2_pane_g2_ParamLimits

0xe6bd,	// (0x0003d76d) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003ee56) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003ee56) calenote_swipe_2_pane_g

0xe6c9,	// (0x0003d779) calenote_swipe_2_pane_t1_ParamLimits

0xe6c9,	// (0x0003d779) calenote_swipe_2_pane_t1

0x9c03,	// (0x00038cb3) main_mup_navstr_pane

0x5713,	// (0x000347c3) main_mup3_pane_t7_ParamLimits

0x5713,	// (0x000347c3) main_mup3_pane_t7

0x6157,	// (0x00035207) main_mp4_pane_g6_ParamLimits

0x6157,	// (0x00035207) main_mp4_pane_g6

0x639e,	// (0x0003544e) main_image3_pane_t4_ParamLimits

0x639e,	// (0x0003544e) main_image3_pane_t4

0x8c43,	// (0x00037cf3) popup_navstr_preview_pane_ParamLimits

0x8c43,	// (0x00037cf3) popup_navstr_preview_pane

0x8c53,	// (0x00037d03) scroll_navstr_pane_ParamLimits

0x8c53,	// (0x00037d03) scroll_navstr_pane

0x9c03,	// (0x00038cb3) bg_popup_preview_window_pane_cp04

0xe6f0,	// (0x0003d7a0) popup_navstr_preview_pane_t1

0x8c67,	// (0x00037d17) scroll_navstr_pane_g1_ParamLimits

0x8c67,	// (0x00037d17) scroll_navstr_pane_g1

0x8c7b,	// (0x00037d2b) scroll_navstr_pane_t1_ParamLimits

0x8c7b,	// (0x00037d2b) scroll_navstr_pane_t1

0xe695,	// (0x0003d745) bg_button_pane_cp014

0xe695,	// (0x0003d745) bg_button_pane_cp030

0x8354,	// (0x00037404) list_double_fisheye_pane_g4_ParamLimits

0x8354,	// (0x00037404) list_double_fisheye_pane_g4

0x8360,	// (0x00037410) list_double_fisheye_pane_g5_ParamLimits

0x8360,	// (0x00037410) list_double_fisheye_pane_g5

0xe5c4,	// (0x0003d674) sp_fs_scroll_pane_cp03

0xc22f,	// (0x0003b2df) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe376,	// (0x0003d426) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003ed90) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe382,	// (0x0003d432) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b82,	// (0x00037c32) sp_fs_scroll_pane_cp02

0xa4bb,	// (0x0003956b) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4bb,	// (0x0003956b) popup_sp_fs_calendar_preview_list_single_pane

0x9c03,	// (0x00038cb3) main_cam6_pano_pane

0x9c64,	// (0x00038d14) main_mup3_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_phacti_pane

0x7ee3,	// (0x00036f93) bg_button_pane_cp11

0x7efd,	// (0x00036fad) main_mobtv_info_pane_g2_ParamLimits

0x7efd,	// (0x00036fad) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003ecf0) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003ecf0) main_mobtv_info_pane_g

0x80d8,	// (0x00037188) sc_clock_pane_t5_ParamLimits

0x80d8,	// (0x00037188) sc_clock_pane_t5

0x81b6,	// (0x00037266) main_radioblah_pane_g1_ParamLimits

0xe19c,	// (0x0003d24c) main_radioblah_pane_t3_ParamLimits

0xe19c,	// (0x0003d24c) main_radioblah_pane_t3

0xe1b4,	// (0x0003d264) main_radioblah_pane_t4_ParamLimits

0xe1b4,	// (0x0003d264) main_radioblah_pane_t4

0x81de,	// (0x0003728e) main_radioblah_text_pane_ParamLimits

0x81de,	// (0x0003728e) main_radioblah_text_pane

0x81f0,	// (0x000372a0) main_radioblah_info_pane_g1_ParamLimits

0x8289,	// (0x00037339) main_radioblah_info_pane_t4_ParamLimits

0x8289,	// (0x00037339) main_radioblah_info_pane_t4

0x9c64,	// (0x00038d14) main_sp_fs_calendar_pane

0x8c92,	// (0x00037d42) main_phacti_pane_g1

0x8c9a,	// (0x00037d4a) phacti_note_pane_ParamLimits

0x8c9a,	// (0x00037d4a) phacti_note_pane

0xe707,	// (0x0003d7b7) phacti_term_pane_ParamLimits

0xe707,	// (0x0003d7b7) phacti_term_pane

0xe71c,	// (0x0003d7cc) phacti_note_pane_t1_ParamLimits

0xe71c,	// (0x0003d7cc) phacti_note_pane_t1

0xe733,	// (0x0003d7e3) phacti_term_pane_g1

0xe73b,	// (0x0003d7eb) phacti_term_pane_t1_ParamLimits

0xe73b,	// (0x0003d7eb) phacti_term_pane_t1

0xe765,	// (0x0003d815) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe76d,	// (0x0003d81d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003ee60) popup_sp_fs_calendar_preview_list_single_pane_g

0xe775,	// (0x0003d825) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe775,	// (0x0003d825) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe78b,	// (0x0003d83b) aid_popup_sp_fs_bg_corner_pane

0xc763,	// (0x0003b813) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c03,	// (0x00038cb3) popup_sp_fs_calendar_preview_bg_pane

0xe793,	// (0x0003d843) popup_sp_fs_calendar_preview_list_pane

0xc30a,	// (0x0003b3ba) bg_main_sp_fs_cale_pane_ParamLimits

0xc30a,	// (0x0003b3ba) bg_main_sp_fs_cale_pane

0xe7a4,	// (0x0003d854) listscroll_cale_mrui_pane_ParamLimits

0xe7a4,	// (0x0003d854) listscroll_cale_mrui_pane

0xe7b9,	// (0x0003d869) listscroll_sp_fs_schedule_track_pane

0xe7c2,	// (0x0003d872) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7c2,	// (0x0003d872) main_sp_fs_ctrlbar_pane_cp01

0xe7d5,	// (0x0003d885) main_sp_fs_ribbon_pane

0xe7dd,	// (0x0003d88d) popup_sp_fs_cale_preview_window

0x8d0b,	// (0x00037dbb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d0b,	// (0x00037dbb) list_single_sp_fs_schedule_track_pane

0x9c64,	// (0x00038d14) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9c64,	// (0x00038d14) bg_sp_fs_highlight_list_pane_cp03

0x8d1f,	// (0x00037dcf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d1f,	// (0x00037dcf) list_single_sp_fs_schedule_track_pane_g1

0x8d2b,	// (0x00037ddb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d2b,	// (0x00037ddb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003ee65) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003ee65) list_single_sp_fs_schedule_track_pane_g

0x8d37,	// (0x00037de7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d37,	// (0x00037de7) list_single_sp_fs_schedule_track_pane_t1

0x8d59,	// (0x00037e09) sp_fs_schedule_track_pane_ParamLimits

0x8d59,	// (0x00037e09) sp_fs_schedule_track_pane

0xe7ef,	// (0x0003d89f) sp_fs_schedule_track_pane_g1

0xe7f7,	// (0x0003d8a7) sp_fs_schedule_track_pane_g2

0xe7ff,	// (0x0003d8af) sp_fs_schedule_track_pane_g3

0xe807,	// (0x0003d8b7) sp_fs_schedule_track_pane_g4

0xe80f,	// (0x0003d8bf) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003ee6a) sp_fs_schedule_track_pane_g

0xd19c,	// (0x0003c24c) bg_sp_fs_schedule_viewer_highlight_g1

0xa7b8,	// (0x00039868) bg_sp_fs_schedule_viewer_highlight_g2

0xd1a4,	// (0x0003c254) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ac,	// (0x0003c25c) bg_sp_fs_schedule_viewer_highlight_g4

0xd3d4,	// (0x0003c484) bg_sp_fs_schedule_viewer_highlight_g5

0xd1bc,	// (0x0003c26c) bg_sp_fs_schedule_viewer_highlight_g6

0xd1c4,	// (0x0003c274) bg_sp_fs_schedule_viewer_highlight_g7

0xd1cc,	// (0x0003c27c) bg_sp_fs_schedule_viewer_highlight_g8

0xa798,	// (0x00039848) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003ee75) bg_sp_fs_schedule_viewer_highlight_g

0x9c03,	// (0x00038cb3) bg_main_sp_fs_ribbon_pane

0x8d6e,	// (0x00037e1e) main_sp_fs_ribbon_pane_g1

0xe817,	// (0x0003d8c7) main_sp_fs_ribbon_pane_t1

0x8d77,	// (0x00037e27) main_sp_fs_ribbon_pane_t2

0xe826,	// (0x0003d8d6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003ee88) main_sp_fs_ribbon_pane_t

0xe835,	// (0x0003d8e5) main_sp_fs_ribbon_scheduler_pane

0xe83d,	// (0x0003d8ed) bg_main_sp_fs_ribbon_pane_g1

0xe846,	// (0x0003d8f6) bg_main_sp_fs_ribbon_pane_g2

0xe84f,	// (0x0003d8ff) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003ee8f) bg_main_sp_fs_ribbon_pane_g

0xe857,	// (0x0003d907) main_sp_fs_ribbon_scheduler_pane_g1

0xe860,	// (0x0003d910) main_sp_fs_ribbon_scheduler_pane_g2

0xe87d,	// (0x0003d92d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003ee96) main_sp_fs_ribbon_scheduler_pane_g

0xe886,	// (0x0003d936) list_cale_mrui_pane

0x8d86,	// (0x00037e36) sp_fs_scroll_pane_cp07_ParamLimits

0x8d86,	// (0x00037e36) sp_fs_scroll_pane_cp07

0x8da2,	// (0x00037e52) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8da2,	// (0x00037e52) bg_sp_fs_schedule_viewer_highlight

0xe893,	// (0x0003d943) list_single_sp_fs_schedule_track_pane_cp01

0xe89b,	// (0x0003d94b) list_sp_fs_schedule_track_pane

0xe8a3,	// (0x0003d953) sp_fs_scroll_pane_cp06_ParamLimits

0xe8a3,	// (0x0003d953) sp_fs_scroll_pane_cp06

0xc763,	// (0x0003b813) bgmain_sp_fs_calendar_pane_g1

0x8db4,	// (0x00037e64) list_single_cale_mrui_pane_ParamLimits

0x8db4,	// (0x00037e64) list_single_cale_mrui_pane

0xe8b5,	// (0x0003d965) list_single_cale_mrui_row_pane_ParamLimits

0xe8b5,	// (0x0003d965) list_single_cale_mrui_row_pane

0xe8cb,	// (0x0003d97b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8cb,	// (0x0003d97b) list_single_cale_mrui_row_pane_g1

0xe910,	// (0x0003d9c0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe910,	// (0x0003d9c0) list_single_cale_mrui_row_pane_t1

0x8dc9,	// (0x00037e79) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dc9,	// (0x00037e79) list_single_cale_mrui_row_pane_t2

0xe922,	// (0x0003d9d2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe922,	// (0x0003d9d2) list_single_cale_mrui_row_pane_t3

0xe951,	// (0x0003da01) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe951,	// (0x0003da01) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003eea4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003eea4) list_single_cale_mrui_row_pane_t

0x8e31,	// (0x00037ee1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e31,	// (0x00037ee1) list_single_cmail_header_editor_pane_bg_cp01

0x8e57,	// (0x00037f07) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e57,	// (0x00037f07) list_single_cmail_header_editor_pane_bg_cp02

0x8e77,	// (0x00037f27) main_radioblah_text_pane_t1_ParamLimits

0x8e77,	// (0x00037f27) main_radioblah_text_pane_t1

0xe980,	// (0x0003da30) cam6_indi_pane_cp01

0xe988,	// (0x0003da38) cam6_mode_pane_cp01

0xe990,	// (0x0003da40) cam6_pano_pane

0xe999,	// (0x0003da49) cam6_zoom_pane_cp01

0xe9a3,	// (0x0003da53) cam6_pano_image_pane

0xe9ac,	// (0x0003da5c) cam6_pano_pane_g1

0xdef1,	// (0x0003cfa1) cam6_pano_pane_g2

0xe9b5,	// (0x0003da65) cam6_pano_pane_g3

0xe9be,	// (0x0003da6e) cam6_pano_pane_g4

0xcd09,	// (0x0003bdb9) cam6_pano_pane_g5

0xe9c7,	// (0x0003da77) cam6_pano_pane_g6

0xe9cf,	// (0x0003da7f) cam6_pano_pane_g7

0xe9d7,	// (0x0003da87) cam6_pano_pane_g8

0xe9e0,	// (0x0003da90) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003eead) cam6_pano_pane_g

0x9c03,	// (0x00038cb3) main_browser_tag_pane

0xe6e8,	// (0x0003d798) grid_navstr_albumart_pane

0xe9eb,	// (0x0003da9b) cell_navstr_albumart_pane_ParamLimits

0xe9eb,	// (0x0003da9b) cell_navstr_albumart_pane

0xea0a,	// (0x0003daba) cell_navstr_albumart_pane_g1

0xc10b,	// (0x0003b1bb) cell_navstr_albumart_pane_g2

0xc11b,	// (0x0003b1cb) cell_navstr_albumart_pane_g3

0xc113,	// (0x0003b1c3) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003eec0) cell_navstr_albumart_pane_g

0x8e92,	// (0x00037f42) bt_list_pane_ParamLimits

0x8e92,	// (0x00037f42) bt_list_pane

0x8ea8,	// (0x00037f58) bt_list_pane_t1

0x8eb7,	// (0x00037f67) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003eec9) bt_list_pane_t

0x9c03,	// (0x00038cb3) main_cale_prevew_pane

0x8ec6,	// (0x00037f76) popup_cale_preview_window_ParamLimits

0x8ec6,	// (0x00037f76) popup_cale_preview_window

0x9c64,	// (0x00038d14) bg_popup_preview_window_pane_cp05_ParamLimits

0x9c64,	// (0x00038d14) bg_popup_preview_window_pane_cp05

0xea12,	// (0x0003dac2) list_cale_preview_pane_ParamLimits

0xea12,	// (0x0003dac2) list_cale_preview_pane

0x8ee3,	// (0x00037f93) list_double_cale_preview_pane_ParamLimits

0x8ee3,	// (0x00037f93) list_double_cale_preview_pane

0x8ef7,	// (0x00037fa7) list_single_cale_preview_pane_ParamLimits

0x8ef7,	// (0x00037fa7) list_single_cale_preview_pane

0x8f0f,	// (0x00037fbf) list_single_cale_preview_pane_g1

0x8f17,	// (0x00037fc7) list_single_cale_preview_pane_t1_ParamLimits

0x8f17,	// (0x00037fc7) list_single_cale_preview_pane_t1

0x8f2c,	// (0x00037fdc) list_double_cale_preview_pane_g1

0x8f34,	// (0x00037fe4) list_double_cale_preview_pane_t1_ParamLimits

0x8f34,	// (0x00037fe4) list_double_cale_preview_pane_t1

0x8f49,	// (0x00037ff9) list_double_cale_preview_pane_t2_ParamLimits

0x8f49,	// (0x00037ff9) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003eece) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003eece) list_double_cale_preview_pane_t

0x9c03,	// (0x00038cb3) main_ezdial_pane

0x9c64,	// (0x00038d14) main_sp_fs_email_pane_ParamLimits

0x84fa,	// (0x000375aa) cmail_ddmenu_btn01_pane_ParamLimits

0x84fa,	// (0x000375aa) cmail_ddmenu_btn01_pane

0x850d,	// (0x000375bd) cmail_ddmenu_btn02_pane_ParamLimits

0x850d,	// (0x000375bd) cmail_ddmenu_btn02_pane

0x8530,	// (0x000375e0) cmail_ddmenu_btn03_pane_ParamLimits

0x8530,	// (0x000375e0) cmail_ddmenu_btn03_pane

0x855b,	// (0x0003760b) main_sp_fs_ctrlbar_pane_ParamLimits

0x857f,	// (0x0003762f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b8c,	// (0x00037c3c) list_cmail_body_pane_ParamLimits

0xe5d3,	// (0x0003d683) bg_button_pane_cp12

0xe5e8,	// (0x0003d698) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e8,	// (0x0003d698) list_single_cmail_header_detail_pane_g3

0xe643,	// (0x0003d6f3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe643,	// (0x0003d6f3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003ee51) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003ee51) list_single_cmail_header_detail_pane_t

0xe750,	// (0x0003d800) phacti_term_pane_t2_ParamLimits

0xe750,	// (0x0003d800) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003ee5b) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003ee5b) phacti_term_pane_t

0xea1e,	// (0x0003dace) aid_size_list_single_double

0x8f61,	// (0x00038011) popup_ezdial_listscroll_window

0x8f7d,	// (0x0003802d) popup_number_entry_window_cp01

0xa55b,	// (0x0003960b) bg_popup_call_pane_cp09

0xea2a,	// (0x0003dada) ezdial_list_pane

0xea32,	// (0x0003dae2) scroll_pane_cp23

0xc30a,	// (0x0003b3ba) bg_button_pane_cp028_ParamLimits

0xc30a,	// (0x0003b3ba) bg_button_pane_cp028

0x8f8b,	// (0x0003803b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f8b,	// (0x0003803b) cmail_ddmenu_btn01_pane_g1

0x8f9a,	// (0x0003804a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f9a,	// (0x0003804a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003eed3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003eed3) cmail_ddmenu_btn01_pane_g

0xea3a,	// (0x0003daea) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea3a,	// (0x0003daea) cmail_ddmenu_btn01_pane_t1

0xc30a,	// (0x0003b3ba) bg_button_pane_cp029_ParamLimits

0xc30a,	// (0x0003b3ba) bg_button_pane_cp029

0x8fb0,	// (0x00038060) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fb0,	// (0x00038060) cmail_ddmenu_btn02_pane_g1

0x8fcb,	// (0x0003807b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fcb,	// (0x0003807b) cmail_ddmenu_btn02_pane_t1

0x9c64,	// (0x00038d14) bg_button_pane_cp031_ParamLimits

0x9c64,	// (0x00038d14) bg_button_pane_cp031

0x8fb0,	// (0x00038060) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fb0,	// (0x00038060) cmail_ddmenu_btn03_pane_g1

0x8fcb,	// (0x0003807b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fcb,	// (0x0003807b) cmail_ddmenu_btn03_pane_t1

0x6345,	// (0x000353f5) cell_dialer2_keypad_pane_t1_ParamLimits

0x635f,	// (0x0003540f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x635f,	// (0x0003540f) cell_dialer2_keypad_pane_t1_copy1

0x7d3a,	// (0x00036dea) ncimui_group_button_pane

0x9c64,	// (0x00038d14) main_sp_fs_calendar_pane_ParamLimits

0xd533,	// (0x0003c5e3) list_single_cmail_header_caption_pane_ParamLimits

0xe79b,	// (0x0003d84b) aid_recal_txt_sm_pane

0x9c03,	// (0x00038cb3) mian_recal_day_pane

0xe7dd,	// (0x0003d88d) popup_sp_fs_cale_preview_window_ParamLimits

0xea50,	// (0x0003db00) list_recal_day_pane

0xea93,	// (0x0003db43) list_single_recal_day_pane_ParamLimits

0xea93,	// (0x0003db43) list_single_recal_day_pane

0xeaa5,	// (0x0003db55) list_single_recal_day_pane_g1_ParamLimits

0xeaa5,	// (0x0003db55) list_single_recal_day_pane_g1

0xeab1,	// (0x0003db61) list_single_recal_day_pane_g2_ParamLimits

0xeab1,	// (0x0003db61) list_single_recal_day_pane_g2

0xeabd,	// (0x0003db6d) list_single_recal_day_pane_g3_ParamLimits

0xeabd,	// (0x0003db6d) list_single_recal_day_pane_g3

0x8ff2,	// (0x000380a2) list_single_recal_day_pane_g4_ParamLimits

0x8ff2,	// (0x000380a2) list_single_recal_day_pane_g4

0xeac9,	// (0x0003db79) list_single_recal_day_pane_g5_ParamLimits

0xeac9,	// (0x0003db79) list_single_recal_day_pane_g5

0xead5,	// (0x0003db85) list_single_recal_day_pane_g6_ParamLimits

0xead5,	// (0x0003db85) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003eee2) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003eee2) list_single_recal_day_pane_g

0xeae9,	// (0x0003db99) list_single_recal_day_pane_t1

0xeafb,	// (0x0003dbab) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003eeed) list_single_recal_day_pane_t

0x900a,	// (0x000380ba) ncimui_query_button_pane_ParamLimits

0x900a,	// (0x000380ba) ncimui_query_button_pane

0x901a,	// (0x000380ca) ncimui_query_button_pane_t1_ParamLimits

0x901a,	// (0x000380ca) ncimui_query_button_pane_t1

0xeb0d,	// (0x0003dbbd) ncimui_query_button_pane_t2_ParamLimits

0xeb0d,	// (0x0003dbbd) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003eef2) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003eef2) ncimui_query_button_pane_t

0x902d,	// (0x000380dd) query_button_pane_ParamLimits

0x902d,	// (0x000380dd) query_button_pane

0x9c03,	// (0x00038cb3) bg_button_pane_cp0028

0xeb20,	// (0x0003dbd0) query_button_pane_t1

0x4676,	// (0x00033726) main_tport_pane_ParamLimits

0x8a3c,	// (0x00037aec) bg_popup_window_pane_cp01_ParamLimits

0x8a3c,	// (0x00037aec) bg_popup_window_pane_cp01

0x8a57,	// (0x00037b07) heading_pane_cp08_ParamLimits

0x8a57,	// (0x00037b07) heading_pane_cp08

0x8a6a,	// (0x00037b1a) heading_pane_cp07_ParamLimits

0x8a6a,	// (0x00037b1a) heading_pane_cp07

0x8b1b,	// (0x00037bcb) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003ee3e) cell_tport_appsw_pane_g

0xaffa,	// (0x0003a0aa) input_candi_list_open_g1

0xa96c,	// (0x00039a1c) list_cale_time_pane_g6_ParamLimits

0xa96c,	// (0x00039a1c) list_cale_time_pane_g6

0x50cc,	// (0x0003417c) aid_size_touch_calib_1_ParamLimits

0x50cc,	// (0x0003417c) aid_size_touch_calib_1

0x50de,	// (0x0003418e) aid_size_touch_calib_2_ParamLimits

0x50de,	// (0x0003418e) aid_size_touch_calib_2

0x50f6,	// (0x000341a6) aid_size_touch_calib_3_ParamLimits

0x50f6,	// (0x000341a6) aid_size_touch_calib_3

0x5114,	// (0x000341c4) aid_size_touch_calib_4_ParamLimits

0x5114,	// (0x000341c4) aid_size_touch_calib_4

0x512c,	// (0x000341dc) main_touch_calib_button_group_pane_ParamLimits

0x512c,	// (0x000341dc) main_touch_calib_button_group_pane

0x5144,	// (0x000341f4) main_touch_calib_pane_g1_ParamLimits

0x5156,	// (0x00034206) main_touch_calib_pane_g2_ParamLimits

0x5168,	// (0x00034218) main_touch_calib_pane_g3_ParamLimits

0x517a,	// (0x0003422a) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003e801) main_touch_calib_pane_g_ParamLimits

0x518c,	// (0x0003423c) main_touch_calib_pane_t1_ParamLimits

0x51a6,	// (0x00034256) main_touch_calib_pane_t2_ParamLimits

0x51c0,	// (0x00034270) main_touch_calib_pane_t3_ParamLimits

0x51d4,	// (0x00034284) main_touch_calib_pane_t4_ParamLimits

0x51ea,	// (0x0003429a) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003e80a) main_touch_calib_pane_t_ParamLimits

0xca9f,	// (0x0003bb4f) list_single_fp_cale_pane_g3_ParamLimits

0xca9f,	// (0x0003bb4f) list_single_fp_cale_pane_g3

0x65d0,	// (0x00035680) bg_button_pane_cp012_ParamLimits

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp03_ParamLimits

0x0d1e,	// (0x0002fdce) cell_vitu2_function_top_pane_g1_ParamLimits

0x65d0,	// (0x00035680) bg_vkb2_func_pane_cp04_ParamLimits

0x7cc8,	// (0x00036d78) main_ncimui_button_group_pane_ParamLimits

0x7cc8,	// (0x00036d78) main_ncimui_button_group_pane

0x7d28,	// (0x00036dd8) main_ncimui_pane_t3_ParamLimits

0x7d28,	// (0x00036dd8) main_ncimui_pane_t3

0xe6fe,	// (0x0003d7ae) phacti_button_group_pane

0xea1e,	// (0x0003dace) aid_size_list_single_double_ParamLimits

0x8f61,	// (0x00038011) popup_ezdial_listscroll_window_ParamLimits

0x8f7d,	// (0x0003802d) popup_number_entry_window_cp01_ParamLimits

0x9040,	// (0x000380f0) phacti_button_pane_ParamLimits

0x9040,	// (0x000380f0) phacti_button_pane

0x9c03,	// (0x00038cb3) bg_button_pane_cp14

0xeb2e,	// (0x0003dbde) phacti_button_pane_t1

0x9051,	// (0x00038101) main_touch_calib_button_pane_ParamLimits

0x9051,	// (0x00038101) main_touch_calib_button_pane

0xa3a5,	// (0x00039455) bg_button_pane_cp18_ParamLimits

0xa3a5,	// (0x00039455) bg_button_pane_cp18

0xeb3c,	// (0x0003dbec) main_touch_calib_button_pane_t1_ParamLimits

0xeb3c,	// (0x0003dbec) main_touch_calib_button_pane_t1

0xeb52,	// (0x0003dc02) main_touch_calib_button_pane_t2_ParamLimits

0xeb52,	// (0x0003dc02) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003eef7) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003eef7) main_touch_calib_button_pane_t

0x9c03,	// (0x00038cb3) cell_ncimui_button_pane

0x9c03,	// (0x00038cb3) bg_button_pane_cp032

0xeb70,	// (0x0003dc20) cell_ncimui_button_pane_t1

0x637c,	// (0x0003542c) image3_infobar_pane_ParamLimits

0x637c,	// (0x0003542c) image3_infobar_pane

0x8104,	// (0x000371b4) fs_bigclock_status_pane_ParamLimits

0x8104,	// (0x000371b4) fs_bigclock_status_pane

0x8111,	// (0x000371c1) main_fs_bigclock_clock_pane_ParamLimits

0x8111,	// (0x000371c1) main_fs_bigclock_clock_pane

0x813b,	// (0x000371eb) main_fs_bigclock_indi_pane_ParamLimits

0x813b,	// (0x000371eb) main_fs_bigclock_indi_pane

0x8179,	// (0x00037229) main_fs_bigclock_swipe_pane_ParamLimits

0x8179,	// (0x00037229) main_fs_bigclock_swipe_pane

0x9c03,	// (0x00038cb3) main_fs_clock_dumped_data

0xdffe,	// (0x0003d0ae) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdffe,	// (0x0003d0ae) list_single_fs_bigclock_indicator_pane_g1

0xe028,	// (0x0003d0d8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe028,	// (0x0003d0d8) list_single_fs_bigclock_indicator_pane_g2

0xe042,	// (0x0003d0f2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe042,	// (0x0003d0f2) list_single_fs_bigclock_indicator_pane_g3

0xe05c,	// (0x0003d10c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe05c,	// (0x0003d10c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003ed24) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003ed24) list_single_fs_bigclock_indicator_pane_g

0xe087,	// (0x0003d137) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe087,	// (0x0003d137) list_single_fs_bigclock_indicator_pane_t1

0xe0af,	// (0x0003d15f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0af,	// (0x0003d15f) list_single_fs_bigclock_indicator_pane_t2

0xe0d7,	// (0x0003d187) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0d7,	// (0x0003d187) list_single_fs_bigclock_indicator_pane_t3

0xe0ff,	// (0x0003d1af) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0ff,	// (0x0003d1af) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003ed2f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003ed2f) list_single_fs_bigclock_indicator_pane_t

0xeb7e,	// (0x0003dc2e) image3_infobar_fav_pane_ParamLimits

0xeb7e,	// (0x0003dc2e) image3_infobar_fav_pane

0xeb8e,	// (0x0003dc3e) image3_infobar_loc_pane_ParamLimits

0xeb8e,	// (0x0003dc3e) image3_infobar_loc_pane

0xeba4,	// (0x0003dc54) image3_infobar_time_pane_ParamLimits

0xeba4,	// (0x0003dc54) image3_infobar_time_pane

0xc763,	// (0x0003b813) image3_infobar_time_pane_g1

0xebb4,	// (0x0003dc64) image3_infobar_time_pane_t1

0xc763,	// (0x0003b813) image3_infobar_loc_pane_g1

0xebc2,	// (0x0003dc72) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003eefc) image3_infobar_loc_pane_g

0xebca,	// (0x0003dc7a) image3_infobar_loc_pane_t1

0xc763,	// (0x0003b813) image3_infobar_fav_pane_g1

0xebd8,	// (0x0003dc88) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003ef01) image3_infobar_fav_pane_g

0xebe0,	// (0x0003dc90) fs_bigclock_status_battery_pane

0xebe9,	// (0x0003dc99) fs_bigclock_status_signal_pane

0xebf2,	// (0x0003dca2) fs_bigclock_status_title_pane

0xebfb,	// (0x0003dcab) fs_bigclock_status_signal_pane_g1

0xec04,	// (0x0003dcb4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003ef06) fs_bigclock_status_signal_pane_g

0xec0c,	// (0x0003dcbc) fs_bigclock_status_battery_pane_g1

0xec15,	// (0x0003dcc5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003ef0b) fs_bigclock_status_battery_pane_g

0xec1d,	// (0x0003dccd) fs_bigclock_status_title_pane_t1

0xc763,	// (0x0003b813) main_fs_bigclock_clock_pane_g1

0xec2b,	// (0x0003dcdb) main_fs_bigclock_clock_pane_g2

0xec36,	// (0x0003dce6) main_fs_bigclock_clock_pane_g3

0xec36,	// (0x0003dce6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003ef10) main_fs_bigclock_clock_pane_g

0xec42,	// (0x0003dcf2) main_fs_bigclock_clock_pane_t1

0x9066,	// (0x00038116) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003ef19) main_fs_bigclock_clock_pane_t

0x9075,	// (0x00038125) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9075,	// (0x00038125) list_single_fs_bigclock_indicator_pane

0x9086,	// (0x00038136) list_single_fs_bigclock_pane_ParamLimits

0x9086,	// (0x00038136) list_single_fs_bigclock_pane

0xec59,	// (0x0003dd09) main_fs_bigclock_indicator_pane_t1

0xec68,	// (0x0003dd18) list_single_fs_bigclock_pane_g1

0xec70,	// (0x0003dd20) list_single_fs_bigclock_pane_t1

0xc763,	// (0x0003b813) main_fs_bigclock_swipe_pane_g1

0xecb3,	// (0x0003dd63) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003ef2a) main_fs_bigclock_swipe_pane_g

0xecbb,	// (0x0003dd6b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbb,	// (0x0003dd6b) main_fs_bigclock_swipe_pane_t1

0x3306,	// (0x000323b6) call_type_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_btmg_pane

0xe8f7,	// (0x0003d9a7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8f7,	// (0x0003d9a7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003ee9d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003ee9d) list_single_cale_mrui_row_pane_g

0xea79,	// (0x0003db29) list_recal_vselct_arw_lo_pane

0xea81,	// (0x0003db31) list_recal_vselct_arw_up_pane

0xea89,	// (0x0003db39) list_recal_vselct_pane

0x90e9,	// (0x00038199) btmg_button_pane

0x90f3,	// (0x000381a3) main_btmg_pane_g1

0x9c03,	// (0x00038cb3) bg_button_pane_cp044

0xecd8,	// (0x0003dd88) btmg_button_pane_t1

0xc2f6,	// (0x0003b3a6) aid_listscroll_gen

0x9c64,	// (0x00038d14) main_cntbar_detail_pane

0xe5b4,	// (0x0003d664) list_cmail_folder_pane

0xe5c4,	// (0x0003d674) sp_fs_scroll_pane_cp03_ParamLimits

0x90fd,	// (0x000381ad) list_single_fs_dyc_pane_cp01_ParamLimits

0x90fd,	// (0x000381ad) list_single_fs_dyc_pane_cp01

0xece6,	// (0x0003dd96) aid_size_cmail_indent

0xecef,	// (0x0003dd9f) list_single_dyc_row_pane_cp01

0x9145,	// (0x000381f5) cntbar_detail_list_pane_ParamLimits

0x9145,	// (0x000381f5) cntbar_detail_list_pane

0x9197,	// (0x00038247) main_cntbar_detail_cont_pane_ParamLimits

0x9197,	// (0x00038247) main_cntbar_detail_cont_pane

0x3229,	// (0x000322d9) scroll_pane_cp032_ParamLimits

0x3229,	// (0x000322d9) scroll_pane_cp032

0x91ab,	// (0x0003825b) cntbar_detail_list_event_pane_ParamLimits

0x91ab,	// (0x0003825b) cntbar_detail_list_event_pane

0x9157,	// (0x00038207) cntbar_detail_list_shct_pane

0xa806,	// (0x000398b6) aid_list_gen

0xecf8,	// (0x0003dda8) aid_scroll

0xed01,	// (0x0003ddb1) aid_size_touch_scroll_bar

0x74d0,	// (0x00036580) aid_list_double

0xed0a,	// (0x0003ddba) aid_list_single

0x74d0,	// (0x00036580) aid_list_single_lg

0xed13,	// (0x0003ddc3) aid_list_z_g_a_sm

0xed1b,	// (0x0003ddcb) aid_list_z_g_d

0x91bb,	// (0x0003826b) aid_txt_z_prm

0x91cb,	// (0x0003827b) aid_txt_z_prm_cp01

0x91d9,	// (0x00038289) aid_txt_z_sec

0x91e7,	// (0x00038297) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91e7,	// (0x00038297) main_cntbar_detail_cont_pane_g1

0x91fb,	// (0x000382ab) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91fb,	// (0x000382ab) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003ef2f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003ef2f) main_cntbar_detail_cont_pane_g

0xed23,	// (0x0003ddd3) main_cntbar_detail_cont_pane_t1

0xed31,	// (0x0003dde1) main_cntbar_detail_cont_pane_t2

0xed3f,	// (0x0003ddef) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003ef34) main_cntbar_detail_cont_pane_t

0x920b,	// (0x000382bb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x920b,	// (0x000382bb) cell_cntbar_detail_list_shct_pane

0xed4d,	// (0x0003ddfd) cntbar_detail_list_shct_pane_g1

0xed56,	// (0x0003de06) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003ef3b) cntbar_detail_list_shct_pane_g

0x921d,	// (0x000382cd) cntbar_detail_list_event_pane_g1_ParamLimits

0x921d,	// (0x000382cd) cntbar_detail_list_event_pane_g1

0x9229,	// (0x000382d9) cntbar_detail_list_event_pane_g2_ParamLimits

0x9229,	// (0x000382d9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003ef40) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003ef40) cntbar_detail_list_event_pane_g

0x9297,	// (0x00038347) cntbar_detail_list_event_pane_t1_ParamLimits

0x9297,	// (0x00038347) cntbar_detail_list_event_pane_t1

0x92ac,	// (0x0003835c) cntbar_detail_list_event_pane_t2_ParamLimits

0x92ac,	// (0x0003835c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003ef4d) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003ef4d) cntbar_detail_list_event_pane_t

0xc763,	// (0x0003b813) cell_cntbar_detail_list_shct_pane_g1

0x371b,	// (0x000327cb) navi_pane_mv_g3

0x9c64,	// (0x00038d14) main_cntbar_detail_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_notif_wgt_pane

0x60f1,	// (0x000351a1) aid_tch_main_mp4_pane_g4

0x62cf,	// (0x0003537f) popup_slider_window_cp02

0xea6f,	// (0x0003db1f) list_recal_day_event_pane

0x9115,	// (0x000381c5) cntbar_detail_btn_pane_ParamLimits

0x9115,	// (0x000381c5) cntbar_detail_btn_pane

0x912d,	// (0x000381dd) cntbar_detail_btn_pane_cp01_ParamLimits

0x912d,	// (0x000381dd) cntbar_detail_btn_pane_cp01

0x9157,	// (0x00038207) cntbar_detail_list_shct_pane_ParamLimits

0x9167,	// (0x00038217) cntbar_detail_pane_g1_ParamLimits

0x9167,	// (0x00038217) cntbar_detail_pane_g1

0x917b,	// (0x0003822b) cntbar_detail_pane_t1_ParamLimits

0x917b,	// (0x0003822b) cntbar_detail_pane_t1

0x9235,	// (0x000382e5) cntbar_detail_list_event_pane_g3_ParamLimits

0x9235,	// (0x000382e5) cntbar_detail_list_event_pane_g3

0x924d,	// (0x000382fd) cntbar_detail_list_event_pane_g4_ParamLimits

0x924d,	// (0x000382fd) cntbar_detail_list_event_pane_g4

0x9265,	// (0x00038315) cntbar_detail_list_event_pane_g5_ParamLimits

0x9265,	// (0x00038315) cntbar_detail_list_event_pane_g5

0x927d,	// (0x0003832d) cntbar_detail_list_event_pane_g6_ParamLimits

0x927d,	// (0x0003832d) cntbar_detail_list_event_pane_g6

0x92c1,	// (0x00038371) cntbar_detail_list_event_pane_t3_ParamLimits

0x92c1,	// (0x00038371) cntbar_detail_list_event_pane_t3

0x92d3,	// (0x00038383) popup_notif_wgt_window_ParamLimits

0x92d3,	// (0x00038383) popup_notif_wgt_window

0x92ec,	// (0x0003839c) popup_submenu_window_cp01_ParamLimits

0x92ec,	// (0x0003839c) popup_submenu_window_cp01

0xa55b,	// (0x0003960b) bg_popup_window_pane_cp10

0xed5f,	// (0x0003de0f) listscroll_notif_wgt_pane

0xed71,	// (0x0003de21) list_notif_wgt_window

0xed7a,	// (0x0003de2a) scroll_pane_cp033

0x9300,	// (0x000383b0) list_notif_wgt_row_pane_ParamLimits

0x9300,	// (0x000383b0) list_notif_wgt_row_pane

0xed83,	// (0x0003de33) aid_size_list_notif_wgt_del

0xed90,	// (0x0003de40) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0003de4c) list_notif_wgt_row_pane_g2

0xedb0,	// (0x0003de60) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003ef54) list_notif_wgt_row_pane_g

0xedbd,	// (0x0003de6d) list_notif_wgt_row_pane_t1

0xedd3,	// (0x0003de83) list_notif_wgt_row_pane_t2

0xede5,	// (0x0003de95) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003ef5b) list_notif_wgt_row_pane_t

0xd3fa,	// (0x0003c4aa) list_recal_day_event_pane_g1

0xedf7,	// (0x0003dea7) list_recal_day_event_pane_t1

0x9c03,	// (0x00038cb3) bg_button_pane_cp045

0xee06,	// (0x0003deb6) cntbar_detail_btn_pane_t1

0xc30a,	// (0x0003b3ba) main_callh_pane_ParamLimits

0xc30a,	// (0x0003b3ba) main_callh_pane

0x9c03,	// (0x00038cb3) main_coverflow0_pane

0x9c03,	// (0x00038cb3) main_wgtman_pane

0x8191,	// (0x00037241) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8191,	// (0x00037241) main_fs_bigclock_unlock_btn_pane

0x8b13,	// (0x00037bc3) bg_button_pane_cp16

0x8b23,	// (0x00037bd3) cell_tport_appsw_pane_g3

0x9310,	// (0x000383c0) cf0_flow_pane_ParamLimits

0x9310,	// (0x000383c0) cf0_flow_pane

0xee14,	// (0x0003dec4) listscroll_cf0_pane

0xee1f,	// (0x0003decf) main_cf0_pane_g1

0x9325,	// (0x000383d5) main_cf0_pane_t1_ParamLimits

0x9325,	// (0x000383d5) main_cf0_pane_t1

0x933c,	// (0x000383ec) main_cf0_pane_t2_ParamLimits

0x933c,	// (0x000383ec) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003ef67) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003ef67) main_cf0_pane_t

0xee31,	// (0x0003dee1) scroll_pane_cp11

0x9353,	// (0x00038403) cf0_flow_pane_g1

0x935f,	// (0x0003840f) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003ef6c) cf0_flow_pane_g

0x936b,	// (0x0003841b) cf0_flow_pane_t1

0x9c03,	// (0x00038cb3) main_call6_pane

0x9c03,	// (0x00038cb3) main_calllock_pane

0x937d,	// (0x0003842d) call6_btn_grp_pane_ParamLimits

0x937d,	// (0x0003842d) call6_btn_grp_pane

0x9397,	// (0x00038447) call6_pane_g1_ParamLimits

0x9397,	// (0x00038447) call6_pane_g1

0x93ad,	// (0x0003845d) popup_call6_1st_window_ParamLimits

0x93ad,	// (0x0003845d) popup_call6_1st_window

0x93be,	// (0x0003846e) popup_call6_2nd_window_ParamLimits

0x93be,	// (0x0003846e) popup_call6_2nd_window

0x93cf,	// (0x0003847f) cell_call6_btn_pane_ParamLimits

0x93cf,	// (0x0003847f) cell_call6_btn_pane

0xa55b,	// (0x0003960b) bg_popup_call2_in_pane_cp03

0xee3c,	// (0x0003deec) popup_call6_1st_window_g1

0xee44,	// (0x0003def4) popup_call6_1st_window_g2

0xee4c,	// (0x0003defc) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003ef71) popup_call6_1st_window_g

0xee54,	// (0x0003df04) popup_call6_1st_window_t1

0xee63,	// (0x0003df13) popup_call6_1st_window_t2

0xee73,	// (0x0003df23) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003ef78) popup_call6_1st_window_t

0xa55b,	// (0x0003960b) bg_popup_call2_in_pane_cp04

0xee3c,	// (0x0003deec) popup_call6_2nd_window_g1

0xee44,	// (0x0003def4) popup_call6_2nd_window_g2

0xee4c,	// (0x0003defc) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003ef71) popup_call6_2nd_window_g

0xee54,	// (0x0003df04) popup_call6_2nd_window_t1

0x9c03,	// (0x00038cb3) bg_button_pane_cp15

0xee83,	// (0x0003df33) cell_call6_btn_pane_g1

0xee8c,	// (0x0003df3c) cell_call6_btn_pane_t1

0x93e3,	// (0x00038493) listscroll_wgtman_pane_ParamLimits

0x93e3,	// (0x00038493) listscroll_wgtman_pane

0x9404,	// (0x000384b4) wgtman_btn_pane_ParamLimits

0x9404,	// (0x000384b4) wgtman_btn_pane

0xad4b,	// (0x00039dfb) aid_scroll_copy1

0xee9b,	// (0x0003df4b) list_wgtman_pane

0x9447,	// (0x000384f7) wgtman_btn_pane_g1_ParamLimits

0x9447,	// (0x000384f7) wgtman_btn_pane_g1

0x9473,	// (0x00038523) wgtman_btn_pane_t1_ParamLimits

0x9473,	// (0x00038523) wgtman_btn_pane_t1

0xeea5,	// (0x0003df55) wgtman_btn_pane_t2_ParamLimits

0xeea5,	// (0x0003df55) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003ef7f) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003ef7f) wgtman_btn_pane_t

0x94b0,	// (0x00038560) listrow_wgtman_pane_ParamLimits

0x94b0,	// (0x00038560) listrow_wgtman_pane

0x94c2,	// (0x00038572) listrow_wgtman_pane_g1

0x94cf,	// (0x0003857f) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003ef84) listrow_wgtman_pane_g

0x94ed,	// (0x0003859d) listrow_wgtman_pane_t1

0x9505,	// (0x000385b5) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003ef89) listrow_wgtman_pane_t

0x952b,	// (0x000385db) wait_bar_pane_cp09

0xeebc,	// (0x0003df6c) main_calllock_btn_pane

0xeec6,	// (0x0003df76) main_calllock_pane_g1

0x9c03,	// (0x00038cb3) bg_button_pane_cp17

0xeed2,	// (0x0003df82) main_calllock_btn_pane_g1

0xeedb,	// (0x0003df8b) main_calllock_btn_pane_t1

0x9c03,	// (0x00038cb3) main_dialer3_pane

0x9c03,	// (0x00038cb3) main_fmrd2_pane

0xc763,	// (0x0003b813) main_fs_bigclock_unlock_btn_pane_g1

0xeef2,	// (0x0003dfa2) main_fs_bigclock_unlock_btn_pane_t1

0x953d,	// (0x000385ed) area_fmrd2_info_pane_ParamLimits

0x953d,	// (0x000385ed) area_fmrd2_info_pane

0x954c,	// (0x000385fc) area_fmrd2_visual_pane_ParamLimits

0x954c,	// (0x000385fc) area_fmrd2_visual_pane

0x955a,	// (0x0003860a) fmrd2_indi_pane_ParamLimits

0x955a,	// (0x0003860a) fmrd2_indi_pane

0x9567,	// (0x00038617) area_fmrd2_visual_pane_g1

0x956f,	// (0x0003861f) area_fmrd2_visual_pane_t1

0x957f,	// (0x0003862f) area_fmrd2_visual_pane_t2

0x958f,	// (0x0003863f) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003ef93) area_fmrd2_visual_pane_t

0x959f,	// (0x0003864f) area_fmrd2_info_pane_g1

0x95a7,	// (0x00038657) area_fmrd2_info_pane_t1

0x95b7,	// (0x00038667) area_fmrd2_info_pane_t2

0x95c7,	// (0x00038677) area_fmrd2_info_pane_t3

0x95d7,	// (0x00038687) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003ef9a) area_fmrd2_info_pane_t

0x95e7,	// (0x00038697) fmrd2_indi_pane_t1

0x95f7,	// (0x000386a7) fmrd2_indi_pane_t2

0x9607,	// (0x000386b7) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003efa3) fmrd2_indi_pane_t

0xe06b,	// (0x0003d11b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe06b,	// (0x0003d11b) list_single_fs_bigclock_indicator_pane_g5

0xe11b,	// (0x0003d1cb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe11b,	// (0x0003d1cb) list_single_fs_bigclock_indicator_pane_t5

0x8cae,	// (0x00037d5e) aid_cell_bcale_month_pane_ParamLimits

0x8cae,	// (0x00037d5e) aid_cell_bcale_month_pane

0x8ccc,	// (0x00037d7c) bcale_month_pane_ParamLimits

0x8ccc,	// (0x00037d7c) bcale_month_pane

0x8cee,	// (0x00037d9e) bcale_preview_pane_ParamLimits

0x8cee,	// (0x00037d9e) bcale_preview_pane

0xec70,	// (0x0003dd20) list_single_fs_bigclock_pane_t1_ParamLimits

0xec8f,	// (0x0003dd3f) list_single_fs_bigclock_pane_t2_ParamLimits

0xec8f,	// (0x0003dd3f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003ef25) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003ef25) list_single_fs_bigclock_pane_t

0xeeea,	// (0x0003df9a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003ef8e) main_fs_bigclock_unlock_btn_pane_g

0x9617,	// (0x000386c7) aid_dia3_key_size_ParamLimits

0x9617,	// (0x000386c7) aid_dia3_key_size

0x9626,	// (0x000386d6) aid_dia3_listrow_size_ParamLimits

0x9626,	// (0x000386d6) aid_dia3_listrow_size

0x963b,	// (0x000386eb) dia3_keypad_fun_pane_ParamLimits

0x963b,	// (0x000386eb) dia3_keypad_fun_pane

0x9657,	// (0x00038707) dia3_keypad_num_pane_ParamLimits

0x9657,	// (0x00038707) dia3_keypad_num_pane

0x9670,	// (0x00038720) dia3_listscroll_pane_ParamLimits

0x9670,	// (0x00038720) dia3_listscroll_pane

0x9683,	// (0x00038733) dia3_numentry_pane_ParamLimits

0x9683,	// (0x00038733) dia3_numentry_pane

0xef00,	// (0x0003dfb0) dia3_list_pane

0xef0b,	// (0x0003dfbb) scroll_pane_cp12

0x9c03,	// (0x00038cb3) bg_dia3_numentry_pane

0x9697,	// (0x00038747) dia3_numentry_pane_t1

0x96a6,	// (0x00038756) cell_dia3_key_num_pane

0x96ae,	// (0x0003875e) cell_dia3_key0_fun_pane_ParamLimits

0x96ae,	// (0x0003875e) cell_dia3_key0_fun_pane

0x96c2,	// (0x00038772) cell_dia3_key1_fun_pane_ParamLimits

0x96c2,	// (0x00038772) cell_dia3_key1_fun_pane

0x96da,	// (0x0003878a) dia3_listrow_pane

0xdd69,	// (0x0003ce19) bg_dia3_numentry_pane_g1

0x9c03,	// (0x00038cb3) bg_button_pane_cp21

0xef16,	// (0x0003dfc6) cell_dia3_key_num_pane_t1

0xef24,	// (0x0003dfd4) cell_dia3_key_num_pane_t2

0xef33,	// (0x0003dfe3) cell_dia3_key_num_pane_t3

0xef42,	// (0x0003dff2) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003efaa) cell_dia3_key_num_pane_t

0x9c03,	// (0x00038cb3) bg_button_pane_cp19

0x96ec,	// (0x0003879c) cell_dia3_key0_fun_pane_g1

0x9c03,	// (0x00038cb3) bg_button_pane_cp20

0x96f4,	// (0x000387a4) cell_dia3_key1_fun_pane_g1

0x96fc,	// (0x000387ac) area_left_week_number_pane

0x970a,	// (0x000387ba) area_top_day_name_pane

0x971d,	// (0x000387cd) frame_month_view_pane

0xef51,	// (0x0003e001) grid_month_view_pane

0x9732,	// (0x000387e2) cell_top_day_name_pane_ParamLimits

0x9732,	// (0x000387e2) cell_top_day_name_pane

0x9761,	// (0x00038811) cell_area_left_week_number_pane_ParamLimits

0x9761,	// (0x00038811) cell_area_left_week_number_pane

0x9775,	// (0x00038825) cell_month_view_pane_ParamLimits

0x9775,	// (0x00038825) cell_month_view_pane

0xef5f,	// (0x0003e00f) frm_month_g1

0x97a4,	// (0x00038854) frm_month_g2

0x97b7,	// (0x00038867) frm_month_g3

0x97ca,	// (0x0003887a) frm_month_g4

0x97dd,	// (0x0003888d) frm_month_g5

0x97f0,	// (0x000388a0) frm_month_g6

0x9803,	// (0x000388b3) frm_month_g7

0xef6c,	// (0x0003e01c) frm_month_g8

0x9818,	// (0x000388c8) frm_month_g9

0x9828,	// (0x000388d8) frm_month_g10

0x9838,	// (0x000388e8) frm_month_g11

0x9848,	// (0x000388f8) frm_month_g12

0x985a,	// (0x0003890a) frm_month_g13

0x986e,	// (0x0003891e) frm_month_g14

0x9882,	// (0x00038932) frm_month_g15

0x9896,	// (0x00038946) frm_month_g16

0x000f,

0xff03,	// (0x0003efb3) frm_month_g

0xef79,	// (0x0003e029) cell_top_day_name_pane_t1

0x98aa,	// (0x0003895a) cell_area_left_week_number_pane_g1

0x98b6,	// (0x00038966) cell_area_left_week_number_pane_t1

0xc993,	// (0x0003ba43) cell_month_view_pane_g1

0x98c9,	// (0x00038979) cell_month_view_pane_t1

0x9c03,	// (0x00038cb3) main_fps_pane

0xe33e,	// (0x0003d3ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe33e,	// (0x0003d3ee) cmail_ddmenu_btn02_pane_cp1

0xe35a,	// (0x0003d40a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe35a,	// (0x0003d40a) cmail_ddmenu_btn02_pane_cp2

0x8fbf,	// (0x0003806f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fbf,	// (0x0003806f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003eed8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003eed8) cmail_ddmenu_btn02_pane_g

0x8fe0,	// (0x00038090) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fe0,	// (0x00038090) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003eedd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003eedd) cmail_ddmenu_btn02_pane_t

0x98dc,	// (0x0003898c) fps_text_pane_ParamLimits

0x98dc,	// (0x0003898c) fps_text_pane

0x98f3,	// (0x000389a3) main_fps_pane_g1_ParamLimits

0x98f3,	// (0x000389a3) main_fps_pane_g1

0x990b,	// (0x000389bb) wait_bar_pane_cp010_ParamLimits

0x990b,	// (0x000389bb) wait_bar_pane_cp010

0x991e,	// (0x000389ce) fps_text_pane_t1_ParamLimits

0x991e,	// (0x000389ce) fps_text_pane_t1

0xe869,	// (0x0003d919) cam4_image_uncrop_pane_g1

0xe872,	// (0x0003d922) cam4_image_uncrop_pane_g2

0x6559,	// (0x00035609) cam4_image_uncrop_pane_g3

0x6562,	// (0x00035612) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003e99e) cam4_image_uncrop_pane_g

0x96da,	// (0x0003878a) dia3_listrow_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_phob2_pane

0x8ae2,	// (0x00037b92) cell_tport_appsw_pane_cp02_ParamLimits

0x8ae2,	// (0x00037b92) cell_tport_appsw_pane_cp02

0x8af6,	// (0x00037ba6) cell_tport_appsw_pane_cp03_ParamLimits

0x8af6,	// (0x00037ba6) cell_tport_appsw_pane_cp03

0x9c03,	// (0x00038cb3) phob2_contact_card_pane

0x9c03,	// (0x00038cb3) phob2_listscroll_pane

0xef8c,	// (0x0003e03c) phob2_list_pane

0xef94,	// (0x0003e044) scroll_pane_cp034

0x9936,	// (0x000389e6) phob2_cc_data_pane_ParamLimits

0x9936,	// (0x000389e6) phob2_cc_data_pane

0x9957,	// (0x00038a07) phob2_cc_listscroll_pane_ParamLimits

0x9957,	// (0x00038a07) phob2_cc_listscroll_pane

0x9979,	// (0x00038a29) list_double_large_graphic_phob2_pane_ParamLimits

0x9979,	// (0x00038a29) list_double_large_graphic_phob2_pane

0x998d,	// (0x00038a3d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x998d,	// (0x00038a3d) list_double_large_graphic_phob2_pane_g1

0x99a3,	// (0x00038a53) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99a3,	// (0x00038a53) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003efd4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003efd4) list_double_large_graphic_phob2_pane_g

0x99af,	// (0x00038a5f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99af,	// (0x00038a5f) list_double_large_graphic_phob2_pane_t1

0x99c4,	// (0x00038a74) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99c4,	// (0x00038a74) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003efd9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003efd9) list_double_large_graphic_phob2_pane_t

0x9c03,	// (0x00038cb3) list_highlight_pane_cp024

0x99d6,	// (0x00038a86) phob2_cc_button_pane

0x99de,	// (0x00038a8e) phob2_cc_data_pane_g1_ParamLimits

0x99de,	// (0x00038a8e) phob2_cc_data_pane_g1

0x99f4,	// (0x00038aa4) phob2_cc_data_pane_g2_ParamLimits

0x99f4,	// (0x00038aa4) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003efde) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003efde) phob2_cc_data_pane_g

0x9a04,	// (0x00038ab4) phob2_cc_data_pane_t1_ParamLimits

0x9a04,	// (0x00038ab4) phob2_cc_data_pane_t1

0x9a1c,	// (0x00038acc) phob2_cc_data_pane_t2_ParamLimits

0x9a1c,	// (0x00038acc) phob2_cc_data_pane_t2

0x9a36,	// (0x00038ae6) phob2_cc_data_pane_t3_ParamLimits

0x9a36,	// (0x00038ae6) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003efe3) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003efe3) phob2_cc_data_pane_t

0xef9c,	// (0x0003e04c) phob2_cc_list_pane_ParamLimits

0xef9c,	// (0x0003e04c) phob2_cc_list_pane

0xd491,	// (0x0003c541) scroll_pane_cp035_ParamLimits

0xd491,	// (0x0003c541) scroll_pane_cp035

0x9c64,	// (0x00038d14) bg_button_pane_cp033

0xefa8,	// (0x0003e058) phob2_cc_button_pane_g1

0xefb4,	// (0x0003e064) phob2_cc_button_pane_t1

0xefc9,	// (0x0003e079) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003efea) phob2_cc_button_pane_t

0x9a50,	// (0x00038b00) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a50,	// (0x00038b00) list_double_large_graphic_phob2_cc_pane

0x9a64,	// (0x00038b14) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a64,	// (0x00038b14) list_double_large_graphic_phob2_cc_pane_g1

0x9a70,	// (0x00038b20) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a70,	// (0x00038b20) list_double_large_graphic_phob2_cc_pane_g2

0x9a7c,	// (0x00038b2c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a7c,	// (0x00038b2c) list_double_large_graphic_phob2_cc_pane_g3

0x9a88,	// (0x00038b38) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a88,	// (0x00038b38) list_double_large_graphic_phob2_cc_pane_g4

0x9a94,	// (0x00038b44) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a94,	// (0x00038b44) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003efef) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003efef) list_double_large_graphic_phob2_cc_pane_g

0x9aa0,	// (0x00038b50) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aa0,	// (0x00038b50) list_double_large_graphic_phob2_cc_pane_t1

0x9ac9,	// (0x00038b79) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ac9,	// (0x00038b79) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003effa) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003effa) list_double_large_graphic_phob2_cc_pane_t

0xefdb,	// (0x0003e08b) list_highlight_pane_cp025_ParamLimits

0xefdb,	// (0x0003e08b) list_highlight_pane_cp025

0x9c64,	// (0x00038d14) bg_button_pane_cp033_ParamLimits

0xefa8,	// (0x0003e058) phob2_cc_button_pane_g1_ParamLimits

0xefb4,	// (0x0003e064) phob2_cc_button_pane_t1_ParamLimits

0xefc9,	// (0x0003e079) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003efea) phob2_cc_button_pane_t_ParamLimits

0x10a2,	// (0x00030152) popup_wgtman_window

0xd2ba,	// (0x0003c36a) scroll_pane_cp038

0x9429,	// (0x000384d9) wgtman_btn_pane_cp_01_ParamLimits

0x9429,	// (0x000384d9) wgtman_btn_pane_cp_01

0xefe9,	// (0x0003e099) wgtman_content_pane

0xeff2,	// (0x0003e0a2) wgtman_heading_pane

0x9c03,	// (0x00038cb3) bg_heading_pane_cp02

0xeffb,	// (0x0003e0ab) wgtman_heading_pane_g1

0xf003,	// (0x0003e0b3) wgtman_heading_pane_t1

0xf011,	// (0x0003e0c1) scroll_pane_cp036

0xf019,	// (0x0003e0c9) wgtman_list_pane

0xf021,	// (0x0003e0d1) wgtman_list_pane_t1_ParamLimits

0xf021,	// (0x0003e0d1) wgtman_list_pane_t1

0x6543,	// (0x000355f3) cam4_grid_pane

0x6f74,	// (0x00036024) bg_button_pane_cp015_ParamLimits

0x6f88,	// (0x00036038) bg_button_pane_cp016_ParamLimits

0x6f9b,	// (0x0003604b) bg_button_pane_cp017_ParamLimits

0x6ff3,	// (0x000360a3) popup_vitu2_query_window_g3_ParamLimits

0x6ff3,	// (0x000360a3) popup_vitu2_query_window_g3

0x70b0,	// (0x00036160) popup_vitu2_query_window_t6_ParamLimits

0x70b0,	// (0x00036160) popup_vitu2_query_window_t6

0x70db,	// (0x0003618b) popup_vitu2_query_window_t7_ParamLimits

0x70db,	// (0x0003618b) popup_vitu2_query_window_t7

0xe869,	// (0x0003d919) cam4_grid_pane_g1

0xe872,	// (0x0003d922) cam4_grid_pane_g2

0xf03b,	// (0x0003e0eb) cam4_grid_pane_g3

0xf044,	// (0x0003e0f4) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003efff) cam4_grid_pane_g

0x2068,	// (0x00031118) aid_placing_vt_slider_lsc_ParamLimits

0x2355,	// (0x00031405) vidtel_button_pane_ParamLimits

0x2355,	// (0x00031405) vidtel_button_pane

0x9c03,	// (0x00038cb3) bg_button_pane_cp034

0x9af2,	// (0x00038ba2) vidtel_button_pane_g1

0x9afa,	// (0x00038baa) vidtel_button_pane_t1

0xd3be,	// (0x0003c46e) aid_size_vtel_slider_touch

0xd491,	// (0x0003c541) scroll_pane_cp039

0xdda7,	// (0x0003ce57) ncim_query_button_pane_cp01_ParamLimits

0xddc6,	// (0x0003ce76) ncimui_query_pane_g1_ParamLimits

0x9c64,	// (0x00038d14) input_focus_pane_cp012_ParamLimits

0xddeb,	// (0x0003ce9b) ncim_query_entry_pane_t1_ParamLimits

0xd491,	// (0x0003c541) scroll_pane_cp039_ParamLimits

0x368d,	// (0x0003273d) navi_pane_bcale_mc_g1

0x3695,	// (0x00032745) navi_pane_bcale_mc_t1

0xe397,	// (0x0003d447) main_sp_fs_email_pane_g1

0xe3a3,	// (0x0003d453) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003ed95) main_sp_fs_email_pane_g

0xe903,	// (0x0003d9b3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe903,	// (0x0003d9b3) list_single_cale_mrui_row_pane_g3

0x9000,	// (0x000380b0) list_single_recal_day_pane_g5_event_pane

0xeae1,	// (0x0003db91) list_single_recal_day_pane_g7

0xf04f,	// (0x0003e0ff) list_recal_day_event_pane_cp01

0xf058,	// (0x0003e108) list_recal_vselct_arw_lo_pane_cp01

0xf060,	// (0x0003e110) list_recal_vselct_arw_up_pane_cp01

0xf068,	// (0x0003e118) list_recal_vselct_pane_cp01

0xd3fa,	// (0x0003c4aa) list_recal_day_event_pane_cp01_g1

0xf072,	// (0x0003e122) list_recal_day_event_pane_cp01_t1

0xeae9,	// (0x0003db99) list_single_recal_day_pane_t1_ParamLimits

0xeafb,	// (0x0003dbab) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003eeed) list_single_recal_day_pane_t_ParamLimits

0xa2e0,	// (0x00039390) bg_notes_pane_ParamLimits

0xa383,	// (0x00039433) list_notes_pane_ParamLimits

0x1360,	// (0x00030410) scroll_pane_cp06_ParamLimits

0xa3a5,	// (0x00039455) main_notes_pane_ParamLimits

0x9c03,	// (0x00038cb3) main_welc_pane

0x9b10,	// (0x00038bc0) main_welc_body_pane_ParamLimits

0x9b10,	// (0x00038bc0) main_welc_body_pane

0x9b2f,	// (0x00038bdf) main_welc_opti_pane_ParamLimits

0x9b2f,	// (0x00038bdf) main_welc_opti_pane

0x9b78,	// (0x00038c28) main_welc_pane_t1_ParamLimits

0x9b78,	// (0x00038c28) main_welc_pane_t1

0x9b9a,	// (0x00038c4a) main_welc_body_row_pane_ParamLimits

0x9b9a,	// (0x00038c4a) main_welc_body_row_pane

0x9bae,	// (0x00038c5e) main_welc_opti_row_pane_ParamLimits

0x9bae,	// (0x00038c5e) main_welc_opti_row_pane

0xf080,	// (0x0003e130) main_welc_opti_row_pane_g1

0xf088,	// (0x0003e138) main_welc_opti_row_pane_t1

0xf097,	// (0x0003e147) main_welc_body_row_pane_t1

0xed69,	// (0x0003de19) popup_notif_wgt_heading_pane

0xed83,	// (0x0003de33) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0003de40) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0003de4c) list_notif_wgt_row_pane_g2_ParamLimits

0xedb0,	// (0x0003de60) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003ef54) list_notif_wgt_row_pane_g_ParamLimits

0xedbd,	// (0x0003de6d) list_notif_wgt_row_pane_t1_ParamLimits

0xedd3,	// (0x0003de83) list_notif_wgt_row_pane_t2_ParamLimits

0xede5,	// (0x0003de95) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003ef5b) list_notif_wgt_row_pane_t_ParamLimits

0x94c2,	// (0x00038572) listrow_wgtman_pane_g1_ParamLimits

0x94cf,	// (0x0003857f) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003ef84) listrow_wgtman_pane_g_ParamLimits

0x94ed,	// (0x0003859d) listrow_wgtman_pane_t1_ParamLimits

0x9505,	// (0x000385b5) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003ef89) listrow_wgtman_pane_t_ParamLimits

0x952b,	// (0x000385db) wait_bar_pane_cp09_ParamLimits

0x9c03,	// (0x00038cb3) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003e156) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003e15e) popup_notif_wgt_heading_pane_t1

0x9c03,	// (0x00038cb3) main_vids_pane

0x9c03,	// (0x00038cb3) vids_listscroll_pane

0x9bbe,	// (0x00038c6e) scroll_pane_cp040

0x9c03,	// (0x00038cb3) vids_list_pane

0x9bc9,	// (0x00038c79) vids_list_double_pane_ParamLimits

0x9bc9,	// (0x00038c79) vids_list_double_pane

0x9bda,	// (0x00038c8a) vids_list_double_pane_g1

0x9be3,	// (0x00038c93) vids_list_double_pane_t1

0x9bf3,	// (0x00038ca3) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003f00d) vids_list_double_pane_t

0x9c64,	// (0x00038d14) main_ncimui_pane_ParamLimits

0x7cdc,	// (0x00036d8c) main_ncimui_pane_g1_ParamLimits

0x7ce8,	// (0x00036d98) main_ncimui_pane_g2_ParamLimits

0x7ce8,	// (0x00036d98) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003ec9a) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003ec9a) main_ncimui_pane_g

0x9b4e,	// (0x00038bfe) main_welc_pane_g1_ParamLimits

0x9b4e,	// (0x00038bfe) main_welc_pane_g1

0x9b63,	// (0x00038c13) main_welc_pane_g2_ParamLimits

0x9b63,	// (0x00038c13) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003f008) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003f008) main_welc_pane_g

0xa2e0,	// (0x00039390) listscroll_mce_pane_ParamLimits

0x376d,	// (0x0003281d) wait_bar_pane_cp10

0xc2fe,	// (0x0003b3ae) main_cale_day_pane_ParamLimits

0xc2fe,	// (0x0003b3ae) main_cale_week_pane_ParamLimits

0xa2e0,	// (0x00039390) main_messa_pane_ParamLimits

0x5a9d,	// (0x00034b4d) main_clock2_btn_pane_ParamLimits

0x5a9d,	// (0x00034b4d) main_clock2_btn_pane

0xcb27,	// (0x0003bbd7) main_clock2_btn_pane_cp01_ParamLimits

0xcb27,	// (0x0003bbd7) main_clock2_btn_pane_cp01

0xe886,	// (0x0003d936) list_cale_mrui_pane_ParamLimits

0xee29,	// (0x0003ded9) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003ef62) main_cf0_pane_g

0x96fc,	// (0x000387ac) area_left_week_number_pane_ParamLimits

0x970a,	// (0x000387ba) area_top_day_name_pane_ParamLimits

0x971d,	// (0x000387cd) frame_month_view_pane_ParamLimits

0xef51,	// (0x0003e001) grid_month_view_pane_ParamLimits

0xef5f,	// (0x0003e00f) frm_month_g1_ParamLimits

0x97a4,	// (0x00038854) frm_month_g2_ParamLimits

0x97b7,	// (0x00038867) frm_month_g3_ParamLimits

0x97ca,	// (0x0003887a) frm_month_g4_ParamLimits

0x97dd,	// (0x0003888d) frm_month_g5_ParamLimits

0x97f0,	// (0x000388a0) frm_month_g6_ParamLimits

0x9803,	// (0x000388b3) frm_month_g7_ParamLimits

0xef6c,	// (0x0003e01c) frm_month_g8_ParamLimits

0x9818,	// (0x000388c8) frm_month_g9_ParamLimits

0x9828,	// (0x000388d8) frm_month_g10_ParamLimits

0x9838,	// (0x000388e8) frm_month_g11_ParamLimits

0x9848,	// (0x000388f8) frm_month_g12_ParamLimits

0x985a,	// (0x0003890a) frm_month_g13_ParamLimits

0x986e,	// (0x0003891e) frm_month_g14_ParamLimits

0x9882,	// (0x00038932) frm_month_g15_ParamLimits

0x9896,	// (0x00038946) frm_month_g16_ParamLimits

0xff03,	// (0x0003efb3) frm_month_g_ParamLimits

0xef79,	// (0x0003e029) cell_top_day_name_pane_t1_ParamLimits

0x98aa,	// (0x0003895a) cell_area_left_week_number_pane_g1_ParamLimits

0x98b6,	// (0x00038966) cell_area_left_week_number_pane_t1_ParamLimits

0xc993,	// (0x0003ba43) cell_month_view_pane_g1_ParamLimits

0x98c9,	// (0x00038979) cell_month_view_pane_t1_ParamLimits

0xa2d8,	// (0x00039388) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003e16c) main_clock2_btn_pane_t1

0x9c64,	// (0x00038d14) listscroll_cmail_pane_ParamLimits

0xe397,	// (0x0003d447) main_sp_fs_email_pane_g1_ParamLimits

0xe3a3,	// (0x0003d453) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003ed95) main_sp_fs_email_pane_g_ParamLimits

0xea50,	// (0x0003db00) list_recal_day_pane_ParamLimits

0xea61,	// (0x0003db11) mian_recal_day_pane_t1

0x87bd,	// (0x0003786d) list_single_dyc_row_text_pane_t4_ParamLimits

0x87bd,	// (0x0003786d) list_single_dyc_row_text_pane_t4

0x8806,	// (0x000378b6) list_single_dyc_row_text_pane_t5_ParamLimits

0x8806,	// (0x000378b6) list_single_dyc_row_text_pane_t5

0xe47b,	// (0x0003d52b) list_single_dyc_row_text_pane_t6_ParamLimits

0xe47b,	// (0x0003d52b) list_single_dyc_row_text_pane_t6

0xa94b,	// (0x000399fb) aid_mgn_list_cale_time_pane

0x9c64,	// (0x00038d14) main_gallery2_pane_ParamLimits

0xcb3b,	// (0x0003bbeb) main_clock2_pane_cp01_t1

0xcb4b,	// (0x0003bbfb) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003e874) main_clock2_pane_cp01_t

0x17d2,	// (0x00030882) cale_week_scroll_pane_g16_ParamLimits

0x17d2,	// (0x00030882) cale_week_scroll_pane_g16

0xa55b,	// (0x0003960b) vorec_slider_pane

0x9afa,	// (0x00038baa) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
