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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002ed4a };

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
0x0f7f,	// (0x0002fcc9) Screen

0x0f8b,	// (0x0002fcd5) application_window

0x0fc7,	// (0x0002fd11) area_bottom_pane_ParamLimits

0x0fc7,	// (0x0002fd11) area_bottom_pane

0x1000,	// (0x0002fd4a) area_top_pane_ParamLimits

0x1000,	// (0x0002fd4a) area_top_pane

0x9cb3,	// (0x000389fd) call_video_uplink_pane_ParamLimits

0x9cb3,	// (0x000389fd) call_video_uplink_pane

0x108e,	// (0x0002fdd8) main_pane_ParamLimits

0x108e,	// (0x0002fdd8) main_pane

0xc3d1,	// (0x0003b11b) context_pane

0x49de,	// (0x00033728) navi_pane

0x4a0e,	// (0x00033758) popup_cale_events_window_ParamLimits

0x4a0e,	// (0x00033758) popup_cale_events_window

0xc3e4,	// (0x0003b12e) popup_mup_playback_window

0x4a26,	// (0x00033770) signal_pane

0xa412,	// (0x0003915c) main_browser_pane

0xaf14,	// (0x00039c5e) main_burst_pane

0x46e0,	// (0x0003342a) main_calc_pane

0xc374,	// (0x0003b0be) main_cale_day_pane

0x1642,	// (0x0003038c) main_cale_month_pane

0xc374,	// (0x0003b0be) main_cale_week_pane

0xaf14,	// (0x00039c5e) main_call_pane

0xa0f2,	// (0x00038e3c) main_call_poc_pane

0xaf14,	// (0x00039c5e) main_camera_pane

0xaf14,	// (0x00039c5e) main_chi_dic_pane

0xadaa,	// (0x00039af4) main_clock_pane

0xa0f2,	// (0x00038e3c) main_fmradio_pane

0xaf14,	// (0x00039c5e) main_graph_messa_pane

0xa0f2,	// (0x00038e3c) main_help_pane

0xa412,	// (0x0003915c) main_im_pane

0xa34d,	// (0x00039097) main_image_pane_ParamLimits

0xa34d,	// (0x00039097) main_image_pane

0xa0f2,	// (0x00038e3c) main_location2_pane

0xaf14,	// (0x00039c5e) main_location_pane

0xa34d,	// (0x00039097) main_messa_pane

0xa0f2,	// (0x00038e3c) main_mp2_pane

0xaf14,	// (0x00039c5e) main_mp_pane

0xa0f2,	// (0x00038e3c) main_msg_pane

0xa0f2,	// (0x00038e3c) main_mup_eq_pane

0xa0f2,	// (0x00038e3c) main_mup_pane

0xa412,	// (0x0003915c) main_notes_pane

0xa0f2,	// (0x00038e3c) main_pec_pane

0xa0f2,	// (0x00038e3c) main_phob_pane

0xa0f2,	// (0x00038e3c) main_pinb_pane

0xa0f2,	// (0x00038e3c) main_postcard_pane

0xa0f2,	// (0x00038e3c) main_qdial_pane

0xaf14,	// (0x00039c5e) main_skin_pane

0xa0f2,	// (0x00038e3c) main_smil2_pane

0xaf14,	// (0x00039c5e) main_smil_pane

0xaf14,	// (0x00039c5e) main_video_pane

0xaf14,	// (0x00039c5e) main_video_tele_pane

0xa34d,	// (0x00039097) main_viewer_pane_ParamLimits

0xa34d,	// (0x00039097) main_viewer_pane

0xaf14,	// (0x00039c5e) main_vorec_pane

0x4736,	// (0x00033480) popup_blid_sat_info_window_ParamLimits

0x4736,	// (0x00033480) popup_blid_sat_info_window

0x479a,	// (0x000334e4) popup_dyc_status_message_window_ParamLimits

0x479a,	// (0x000334e4) popup_dyc_status_message_window

0x47b4,	// (0x000334fe) popup_grid_large_graphic_window_ParamLimits

0x47b4,	// (0x000334fe) popup_grid_large_graphic_window

0x4876,	// (0x000335c0) popup_loc_request_window_ParamLimits

0x4876,	// (0x000335c0) popup_loc_request_window

0x49b2,	// (0x000336fc) popup_wml_address_window_ParamLimits

0x49b2,	// (0x000336fc) popup_wml_address_window

0x451e,	// (0x00033268) call_muted_g1

0x41b2,	// (0x00032efc) popup_call_audio_conf_window_ParamLimits

0x41b2,	// (0x00032efc) popup_call_audio_conf_window

0x452e,	// (0x00033278) popup_call_audio_first_window_ParamLimits

0x452e,	// (0x00033278) popup_call_audio_first_window

0x45a4,	// (0x000332ee) popup_call_audio_in_window_ParamLimits

0x45a4,	// (0x000332ee) popup_call_audio_in_window

0x45e0,	// (0x0003332a) popup_call_audio_out_window_ParamLimits

0x45e0,	// (0x0003332a) popup_call_audio_out_window

0x461a,	// (0x00033364) popup_call_audio_second_window_ParamLimits

0x461a,	// (0x00033364) popup_call_audio_second_window

0x4670,	// (0x000333ba) popup_call_audio_wait_window_ParamLimits

0x4670,	// (0x000333ba) popup_call_audio_wait_window

0x46a5,	// (0x000333ef) popup_number_entry_window_ParamLimits

0x46a5,	// (0x000333ef) popup_number_entry_window

0x9cdf,	// (0x00038a29) bg_popup_call_pane_cp05_ParamLimits

0x9cdf,	// (0x00038a29) bg_popup_call_pane_cp05

0x9cff,	// (0x00038a49) popup_number_entry_window_t1

0x9d12,	// (0x00038a5c) popup_number_entry_window_t2

0x9d24,	// (0x00038a6e) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0003de17) popup_number_entry_window_t

0x9d36,	// (0x00038a80) text_title_cp2

0x9d49,	// (0x00038a93) bg_popup_call_pane_cp_ParamLimits

0x9d49,	// (0x00038a93) bg_popup_call_pane_cp

0x9d57,	// (0x00038aa1) call_thumbnail_pane

0x9d5f,	// (0x00038aa9) popup_call_audio_in_window_g1_ParamLimits

0x9d5f,	// (0x00038aa9) popup_call_audio_in_window_g1

0x9d6b,	// (0x00038ab5) popup_call_audio_in_window_g2_ParamLimits

0x9d6b,	// (0x00038ab5) popup_call_audio_in_window_g2

0x9d77,	// (0x00038ac1) popup_call_audio_in_window_g3_ParamLimits

0x9d77,	// (0x00038ac1) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0003de20) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0003de20) popup_call_audio_in_window_g

0x9d83,	// (0x00038acd) popup_call_audio_in_window_t1_ParamLimits

0x9d83,	// (0x00038acd) popup_call_audio_in_window_t1

0x9d9f,	// (0x00038ae9) popup_call_audio_in_window_t2_ParamLimits

0x9d9f,	// (0x00038ae9) popup_call_audio_in_window_t2

0x9dbb,	// (0x00038b05) popup_call_audio_in_window_t3_ParamLimits

0x9dbb,	// (0x00038b05) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0003de27) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0003de27) popup_call_audio_in_window_t

0x9d49,	// (0x00038a93) bg_popup_call_pane_cp01_ParamLimits

0x9d49,	// (0x00038a93) bg_popup_call_pane_cp01

0x9d57,	// (0x00038aa1) call_thumbnail_pane_cp02

0x9dce,	// (0x00038b18) call_type_pane_cp022

0x9dd6,	// (0x00038b20) popup_call_audio_out_window_g1_ParamLimits

0x9dd6,	// (0x00038b20) popup_call_audio_out_window_g1

0x9de8,	// (0x00038b32) popup_call_audio_out_window_g2_ParamLimits

0x9de8,	// (0x00038b32) popup_call_audio_out_window_g2

0x9df4,	// (0x00038b3e) popup_call_audio_out_window_g3_ParamLimits

0x9df4,	// (0x00038b3e) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0003de2e) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0003de2e) popup_call_audio_out_window_g

0x9e06,	// (0x00038b50) popup_call_audio_out_window_t1_ParamLimits

0x9e06,	// (0x00038b50) popup_call_audio_out_window_t1

0x9e1e,	// (0x00038b68) popup_call_audio_out_window_t2_ParamLimits

0x9e1e,	// (0x00038b68) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0003de35) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0003de35) popup_call_audio_out_window_t

0x9e33,	// (0x00038b7d) bg_popup_call_pane_ParamLimits

0x9e33,	// (0x00038b7d) bg_popup_call_pane

0x124d,	// (0x0002ff97) call_thumbnail_pane_cp_ParamLimits

0x124d,	// (0x0002ff97) call_thumbnail_pane_cp

0x9eb7,	// (0x00038c01) call_type_pane_cp01_ParamLimits

0x9eb7,	// (0x00038c01) call_type_pane_cp01

0x9efb,	// (0x00038c45) popup_call_audio_first_window_g1_ParamLimits

0x9efb,	// (0x00038c45) popup_call_audio_first_window_g1

0x9f47,	// (0x00038c91) popup_call_audio_first_window_g2_ParamLimits

0x9f47,	// (0x00038c91) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0003de3a) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0003de3a) popup_call_audio_first_window_g

0x9f8b,	// (0x00038cd5) popup_call_audio_first_window_t1_ParamLimits

0x9f8b,	// (0x00038cd5) popup_call_audio_first_window_t1

0xa037,	// (0x00038d81) popup_call_audio_first_window_t4_ParamLimits

0xa037,	// (0x00038d81) popup_call_audio_first_window_t4

0xa0c3,	// (0x00038e0d) popup_call_audio_first_window_t5_ParamLimits

0xa0c3,	// (0x00038e0d) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0003de3f) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0003de3f) popup_call_audio_first_window_t

0xa0f2,	// (0x00038e3c) bg_popup_call_pane_cp02

0xa0fc,	// (0x00038e46) call_type_pane_cp023

0xa104,	// (0x00038e4e) popup_call_audio_wait_window_g1

0xa10c,	// (0x00038e56) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003de46) popup_call_audio_wait_window_g

0xa114,	// (0x00038e5e) popup_call_audio_wait_window_t3

0xa122,	// (0x00038e6c) bg_popup_call_pane_cp03_ParamLimits

0xa122,	// (0x00038e6c) bg_popup_call_pane_cp03

0xa182,	// (0x00038ecc) call_thumbnail_pane_cp011_ParamLimits

0xa182,	// (0x00038ecc) call_thumbnail_pane_cp011

0xa18e,	// (0x00038ed8) call_type_pane_cp034_ParamLimits

0xa18e,	// (0x00038ed8) call_type_pane_cp034

0xa1ca,	// (0x00038f14) popup_call_audio_second_window_g1_ParamLimits

0xa1ca,	// (0x00038f14) popup_call_audio_second_window_g1

0xa206,	// (0x00038f50) popup_call_audio_second_window_g2_ParamLimits

0xa206,	// (0x00038f50) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0003de4b) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0003de4b) popup_call_audio_second_window_g

0xa242,	// (0x00038f8c) popup_call_audio_second_window_t1_ParamLimits

0xa242,	// (0x00038f8c) popup_call_audio_second_window_t1

0xa2c3,	// (0x0003900d) popup_call_audio_second_window_t2_ParamLimits

0xa2c3,	// (0x0003900d) popup_call_audio_second_window_t2

0xa2f9,	// (0x00039043) popup_call_audio_second_window_t3_ParamLimits

0xa2f9,	// (0x00039043) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0003de50) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0003de50) popup_call_audio_second_window_t

0xa0f2,	// (0x00038e3c) bg_popup_call_pane_cp04

0xa32f,	// (0x00039079) list_conf_pane

0xa337,	// (0x00039081) popup_call_audio_conf_window_t1

0xa345,	// (0x0003908f) call_thumbnail_pane_g1

0xa34d,	// (0x00039097) bg_pinb_pane_ParamLimits

0xa34d,	// (0x00039097) bg_pinb_pane

0xa35b,	// (0x000390a5) find_pinb_pane

0xa364,	// (0x000390ae) listscroll_pinb_pane_ParamLimits

0xa364,	// (0x000390ae) listscroll_pinb_pane

0xa373,	// (0x000390bd) pinb_bg_pane_g1

0x1271,	// (0x0002ffbb) pinb_bg_pane_g2

0x127d,	// (0x0002ffc7) pinb_bg_pane_g3

0x1289,	// (0x0002ffd3) pinb_bg_pane_g4

0x1295,	// (0x0002ffdf) pinb_bg_pane_g5

0x12a1,	// (0x0002ffeb) pinb_bg_pane_g6

0x12ac,	// (0x0002fff6) pinb_bg_pane_g7

0x12b7,	// (0x00030001) pinb_bg_pane_g8

0x12c2,	// (0x0003000c) pinb_bg_pane_g9

0x12cc,	// (0x00030016) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0003de57) pinb_bg_pane_g

0x12e9,	// (0x00030033) grid_pinb_pane

0x12f4,	// (0x0003003e) list_pinb_pane

0x12ff,	// (0x00030049) scroll_pane_cp01_ParamLimits

0x12ff,	// (0x00030049) scroll_pane_cp01

0xa37d,	// (0x000390c7) find_pinb_pane_g1_ParamLimits

0xa37d,	// (0x000390c7) find_pinb_pane_g1

0xa395,	// (0x000390df) find_pinb_pane_t1

0xa3a7,	// (0x000390f1) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0003de71) find_pinb_pane_t

0xa3bc,	// (0x00039106) input_focus_pane_cp01_ParamLimits

0xa3bc,	// (0x00039106) input_focus_pane_cp01

0x1311,	// (0x0003005b) cell_pinb_pane_ParamLimits

0x1311,	// (0x0003005b) cell_pinb_pane

0x1333,	// (0x0003007d) cell_pinb_pane_g1_ParamLimits

0x1333,	// (0x0003007d) cell_pinb_pane_g1

0x1348,	// (0x00030092) cell_pinb_pane_g2_ParamLimits

0x1348,	// (0x00030092) cell_pinb_pane_g2

0xa3c8,	// (0x00039112) cell_pinb_pane_g3_ParamLimits

0xa3c8,	// (0x00039112) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0003de76) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0003de76) cell_pinb_pane_g

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp01

0x1354,	// (0x0003009e) list_pinb_item_pane_ParamLimits

0x1354,	// (0x0003009e) list_pinb_item_pane

0xa0f2,	// (0x00038e3c) list_highlight_pane_cp02

0x1366,	// (0x000300b0) list_pinb_item_pane_g1_ParamLimits

0x1366,	// (0x000300b0) list_pinb_item_pane_g1

0x1373,	// (0x000300bd) list_pinb_item_pane_g2_ParamLimits

0x1373,	// (0x000300bd) list_pinb_item_pane_g2

0x137f,	// (0x000300c9) list_pinb_item_pane_g3_ParamLimits

0x137f,	// (0x000300c9) list_pinb_item_pane_g3

0x1390,	// (0x000300da) list_pinb_item_pane_g4_ParamLimits

0x1390,	// (0x000300da) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0003de7d) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0003de7d) list_pinb_item_pane_g

0x139c,	// (0x000300e6) list_pinb_item_pane_t1_ParamLimits

0x139c,	// (0x000300e6) list_pinb_item_pane_t1

0xfc4e,	// (0x0002e998) calc_display_pane

0xfc76,	// (0x0002e9c0) calc_paper_pane

0xfc99,	// (0x0002e9e3) grid_calc_pane

0xa0f2,	// (0x00038e3c) bg_list_pane_cp01

0x13bb,	// (0x00030105) clock_g1

0x13c3,	// (0x0003010d) clock_g2

0x0001,

0xf13c,	// (0x0003de86) clock_g

0x13cb,	// (0x00030115) clock_t1_ParamLimits

0x13cb,	// (0x00030115) clock_t1

0x13e0,	// (0x0003012a) clock_t2_ParamLimits

0x13e0,	// (0x0003012a) clock_t2

0x13f2,	// (0x0003013c) clock_t3_ParamLimits

0x13f2,	// (0x0003013c) clock_t3

0x1404,	// (0x0003014e) clock_t4_ParamLimits

0x1404,	// (0x0003014e) clock_t4

0x1416,	// (0x00030160) clock_t5_ParamLimits

0x1416,	// (0x00030160) clock_t5

0x142b,	// (0x00030175) clock_t6_ParamLimits

0x142b,	// (0x00030175) clock_t6

0x143d,	// (0x00030187) clock_t7_ParamLimits

0x143d,	// (0x00030187) clock_t7

0x144f,	// (0x00030199) clock_t8_ParamLimits

0x144f,	// (0x00030199) clock_t8

0x1463,	// (0x000301ad) clock_t9_ParamLimits

0x1463,	// (0x000301ad) clock_t9

0x0008,

0xf141,	// (0x0003de8b) clock_t_ParamLimits

0xf141,	// (0x0003de8b) clock_t

0xa3d4,	// (0x0003911e) popup_clock_analogue_window_cp02

0xa3d4,	// (0x0003911e) popup_clock_digital_window_cp01

0xa3dc,	// (0x00039126) listscroll_help_pane

0xa0f2,	// (0x00038e3c) phob_pre_status_pane

0xa3e6,	// (0x00039130) grid_qdial_pane

0xa34d,	// (0x00039097) listscroll_mce_pane

0xa34d,	// (0x00039097) bg_notes_pane

0xa3f0,	// (0x0003913a) list_notes_pane

0x1479,	// (0x000301c3) scroll_pane_cp06

0xa3fe,	// (0x00039148) bg_calc_paper_pane

0x1497,	// (0x000301e1) list_calc_pane

0xa412,	// (0x0003915c) bg_calc_display_pane

0xfcc7,	// (0x0002ea11) calc_display_pane_t1

0xfcd9,	// (0x0002ea23) calc_display_pane_t2

0x14b1,	// (0x000301fb) calc_display_pane_t3

0x0002,

0xf154,	// (0x0003de9e) calc_display_pane_t

0xfceb,	// (0x0002ea35) cell_calc_pane_ParamLimits

0xfceb,	// (0x0002ea35) cell_calc_pane

0xa41e,	// (0x00039168) bg_calc_paper_pane_g1

0xa42a,	// (0x00039174) bg_calc_paper_pane_g2

0xa436,	// (0x00039180) bg_calc_paper_pane_g3

0xa442,	// (0x0003918c) bg_calc_paper_pane_g4

0xa44e,	// (0x00039198) bg_calc_paper_pane_g5

0x14c3,	// (0x0003020d) bg_calc_paper_pane_g6

0x14d6,	// (0x00030220) bg_calc_paper_pane_g7

0x14e9,	// (0x00030233) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0003dea5) bg_calc_paper_pane_g

0x14fa,	// (0x00030244) calc_bg_paper_pane_g9

0x150b,	// (0x00030255) list_calc_item_pane_ParamLimits

0x150b,	// (0x00030255) list_calc_item_pane

0xa45a,	// (0x000391a4) list_calc_item_pane_g1

0x1523,	// (0x0003026d) list_calc_item_pane_t1_ParamLimits

0x1523,	// (0x0003026d) list_calc_item_pane_t1

0xfd28,	// (0x0002ea72) list_calc_item_pane_t2_ParamLimits

0xfd28,	// (0x0002ea72) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0003deb6) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0003deb6) list_calc_item_pane_t

0xa467,	// (0x000391b1) cell_calc_pane_g1

0xa471,	// (0x000391bb) grid_highlight_pane_cp02

0xa493,	// (0x000391dd) bg_calc_display_pane_g1

0x1535,	// (0x0003027f) bg_calc_display_pane_g2

0xa49c,	// (0x000391e6) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0003dec0) bg_calc_display_pane_g

0xfd5a,	// (0x0002eaa4) cell_qdial_pane_ParamLimits

0xfd5a,	// (0x0002eaa4) cell_qdial_pane

0x153f,	// (0x00030289) cell_qdial_pane_g1_ParamLimits

0x153f,	// (0x00030289) cell_qdial_pane_g1

0x1555,	// (0x0003029f) cell_qdial_pane_g2_ParamLimits

0x1555,	// (0x0003029f) cell_qdial_pane_g2

0xa4a5,	// (0x000391ef) cell_qdial_pane_g3_ParamLimits

0xa4a5,	// (0x000391ef) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0003dec7) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0003dec7) cell_qdial_pane_g

0x157c,	// (0x000302c6) cell_qdial_pane_t1_ParamLimits

0x157c,	// (0x000302c6) cell_qdial_pane_t1

0x1594,	// (0x000302de) cell_qdial_pane_t2_ParamLimits

0x1594,	// (0x000302de) cell_qdial_pane_t2

0x15a7,	// (0x000302f1) cell_qdial_pane_t3_ParamLimits

0x15a7,	// (0x000302f1) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0003ded0) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0003ded0) cell_qdial_pane_t

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp04

0xa4b1,	// (0x000391fb) thumbnail_qdial_pane_ParamLimits

0xa4b1,	// (0x000391fb) thumbnail_qdial_pane

0xa50d,	// (0x00039257) list_help_pane

0xa516,	// (0x00039260) scroll_pane_cp02

0x15ba,	// (0x00030304) help_list_pane_t1_ParamLimits

0x15ba,	// (0x00030304) help_list_pane_t1

0x15d8,	// (0x00030322) bg_notes_pane_g2

0x15e0,	// (0x0003032a) bg_notes_pane_g3

0x15e8,	// (0x00030332) notes_bg_pane_g1

0x15f0,	// (0x0003033a) notes_bg_pane_g4

0x15f8,	// (0x00030342) notes_bg_pane_g5

0x1600,	// (0x0003034a) notes_bg_pane_g6

0x1608,	// (0x00030352) notes_bg_pane_g7

0x1610,	// (0x0003035a) notes_bg_pane_g8

0x1618,	// (0x00030362) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0003deee) notes_bg_pane_g

0x1620,	// (0x0003036a) list_notes_text_pane_ParamLimits

0x1620,	// (0x0003036a) list_notes_text_pane

0xa51f,	// (0x00039269) list_notes_text_pane_g1

0x1634,	// (0x0003037e) list_notes_text_pane_t1

0x1642,	// (0x0003038c) listscroll_cale_week_pane

0x1678,	// (0x000303c2) bg_cale_heading_pane

0xa539,	// (0x00039283) bg_cale_pane_cp01

0x16a1,	// (0x000303eb) cale_week_corner_pane

0x16c0,	// (0x0003040a) cale_week_day_heading_pane

0x16ee,	// (0x00030438) cale_week_scroll_pane_g1

0x1712,	// (0x0003045c) cale_week_scroll_pane_g2

0x172a,	// (0x00030474) cale_week_scroll_pane_g3

0x1742,	// (0x0003048c) cale_week_scroll_pane_g4

0x175e,	// (0x000304a8) cale_week_scroll_pane_g5

0x177e,	// (0x000304c8) cale_week_scroll_pane_g6

0x179e,	// (0x000304e8) cale_week_scroll_pane_g7

0x17c2,	// (0x0003050c) cale_week_scroll_pane_g8

0x17e6,	// (0x00030530) cale_week_scroll_pane_g9

0x1803,	// (0x0003054d) cale_week_scroll_pane_g10

0x1820,	// (0x0003056a) cale_week_scroll_pane_g11

0x183d,	// (0x00030587) cale_week_scroll_pane_g12

0x185a,	// (0x000305a4) cale_week_scroll_pane_g13

0x1877,	// (0x000305c1) cale_week_scroll_pane_g14

0x18a0,	// (0x000305ea) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0003defd) cale_week_scroll_pane_g

0x18c9,	// (0x00030613) cale_week_time_pane

0x18ed,	// (0x00030637) grid_cale_week_pane

0xa569,	// (0x000392b3) scroll_pane_cp08

0x1924,	// (0x0003066e) cell_cale_week_pane_ParamLimits

0x1924,	// (0x0003066e) cell_cale_week_pane

0x19b4,	// (0x000306fe) cale_week_day_heading_pane_t1

0x19fe,	// (0x00030748) cale_week_day_heading_pane_t2

0x1a4d,	// (0x00030797) cale_week_day_heading_pane_t3

0x1a9c,	// (0x000307e6) cale_week_day_heading_pane_t4

0x1aeb,	// (0x00030835) cale_week_day_heading_pane_t5

0x1b3e,	// (0x00030888) cale_week_day_heading_pane_t6

0x1b95,	// (0x000308df) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0003df1c) cale_week_day_heading_pane_t

0xa58b,	// (0x000392d5) bg_cale_side_pane

0xfd6e,	// (0x0002eab8) cale_week_time_pane_t1

0xfda8,	// (0x0002eaf2) cale_week_time_pane_t2

0xfde2,	// (0x0002eb2c) cale_week_time_pane_t3

0xfe1c,	// (0x0002eb66) cale_week_time_pane_t4

0xfe56,	// (0x0002eba0) cale_week_time_pane_t5

0xfe90,	// (0x0002ebda) cale_week_time_pane_t6

0xfeca,	// (0x0002ec14) cale_week_time_pane_t7

0xff04,	// (0x0002ec4e) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0003df2b) cale_week_time_pane_t

0x1bdf,	// (0x00030929) cell_cale_week_pane_g2

0x1bfe,	// (0x00030948) cell_cale_week_pane_g3_ParamLimits

0x1bfe,	// (0x00030948) cell_cale_week_pane_g3

0xa599,	// (0x000392e3) grid_highlight_pane_cp07

0xa5a1,	// (0x000392eb) listscroll_gms_pane

0xa5ab,	// (0x000392f5) grid_gms_pane

0xa5b4,	// (0x000392fe) listscroll_gms_pane_g1

0xa5bc,	// (0x00039306) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0003df3c) listscroll_gms_pane_g

0x1c16,	// (0x00030960) scroll_pane_cp010

0x1c21,	// (0x0003096b) cell_gms_pane_ParamLimits

0x1c21,	// (0x0003096b) cell_gms_pane

0x1c3b,	// (0x00030985) cell_gms_pane_g1

0xa5c4,	// (0x0003930e) cell_gms_pane_g2

0xa5cc,	// (0x00039316) cell_gms_pane_g3

0xa5d5,	// (0x0003931f) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0003df41) cell_gms_pane_g

0xa5de,	// (0x00039328) grid_highlight_pane_cp09

0x44c6,	// (0x00033210) phob_pre_status_pane_g1

0x44ce,	// (0x00033218) phob_pre_status_pane_g2

0x44d6,	// (0x00033220) phob_pre_status_pane_g3

0x44de,	// (0x00033228) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0003e330) phob_pre_status_pane_g

0x44ee,	// (0x00033238) phob_pre_status_pane_t1

0x44fe,	// (0x00033248) phob_pre_status_pane_t2

0x450e,	// (0x00033258) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0003e33b) phob_pre_status_pane_t

0xa0f2,	// (0x00038e3c) bg_list_pane_cp05

0xff4c,	// (0x0002ec96) grid_vorec_pane

0xff58,	// (0x0002eca2) vorec_t1

0xff66,	// (0x0002ecb0) vorec_t2

0xff74,	// (0x0002ecbe) vorec_t3

0xff82,	// (0x0002eccc) vorec_t4

0xff90,	// (0x0002ecda) vorec_t5

0x1c43,	// (0x0003098d) vorec_t6

0x0006,

0xf200,	// (0x0003df4a) vorec_t

0xffac,	// (0x0002ecf6) wait_bar_pane_cp01

0x1c51,	// (0x0003099b) cell_vorec_pane_ParamLimits

0x1c51,	// (0x0003099b) cell_vorec_pane

0x1c66,	// (0x000309b0) cell_vorec_pane_g1

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp05

0x1c86,	// (0x000309d0) cams_zoom_pane

0x1c95,	// (0x000309df) image_vga_pane

0x1caf,	// (0x000309f9) main_camera_pane_g1

0x1cc1,	// (0x00030a0b) main_camera_pane_g2

0x1cd1,	// (0x00030a1b) main_camera_pane_g3

0x1ce5,	// (0x00030a2f) main_camera_pane_g4

0x1cf9,	// (0x00030a43) main_camera_pane_g5

0x1d0d,	// (0x00030a57) main_camera_pane_g6

0x1d21,	// (0x00030a6b) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0003df59) main_camera_pane_g

0x1d35,	// (0x00030a7f) main_camera_pane_t1

0x1d4b,	// (0x00030a95) main_camera_pane_t2

0x0001,

0xf220,	// (0x0003df6a) main_camera_pane_t

0x1d89,	// (0x00030ad3) cams_zoom_pane_cp_ParamLimits

0x1d89,	// (0x00030ad3) cams_zoom_pane_cp

0x1db1,	// (0x00030afb) image_cif_pane_ParamLimits

0x1db1,	// (0x00030afb) image_cif_pane

0x1dec,	// (0x00030b36) image_subqcif_pane

0x1df6,	// (0x00030b40) main_video_pane_g1_ParamLimits

0x1df6,	// (0x00030b40) main_video_pane_g1

0x1e1a,	// (0x00030b64) main_video_pane_g2_ParamLimits

0x1e1a,	// (0x00030b64) main_video_pane_g2

0x1e50,	// (0x00030b9a) main_video_pane_g3_ParamLimits

0x1e50,	// (0x00030b9a) main_video_pane_g3

0x1e7e,	// (0x00030bc8) main_video_pane_g4_ParamLimits

0x1e7e,	// (0x00030bc8) main_video_pane_g4

0x1eac,	// (0x00030bf6) main_video_pane_g5_ParamLimits

0x1eac,	// (0x00030bf6) main_video_pane_g5

0xa5f2,	// (0x0003933c) main_video_pane_g6_ParamLimits

0xa5f2,	// (0x0003933c) main_video_pane_g6

0x0006,

0xf225,	// (0x0003df6f) main_video_pane_g_ParamLimits

0xf225,	// (0x0003df6f) main_video_pane_g

0x1ed5,	// (0x00030c1f) main_video_pane_t1_ParamLimits

0x1ed5,	// (0x00030c1f) main_video_pane_t1

0xa60c,	// (0x00039356) cams_zoom_pane_g1

0xa615,	// (0x0003935f) cams_zoom_pane_g2

0xa61e,	// (0x00039368) cams_zoom_pane_g3

0xa627,	// (0x00039371) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0003df7e) cams_zoom_pane_g

0x1f32,	// (0x00030c7c) grid_cams_pane

0x1f4c,	// (0x00030c96) linegrid_cams_pane

0x1f5e,	// (0x00030ca8) cell_cams_pane_ParamLimits

0x1f5e,	// (0x00030ca8) cell_cams_pane

0xa630,	// (0x0003937a) cams_burst_image_pane

0xa638,	// (0x00039382) cell_cams_pane_g1

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp03

0xa467,	// (0x000391b1) mp_bg_pane_g1

0xa0f2,	// (0x00038e3c) bg_list_pane_cp03

0xc297,	// (0x0003afe1) bg_mp_pane

0xc29f,	// (0x0003afe9) grid_mp_pane

0xc2a7,	// (0x0003aff1) media_player_g1

0xc2b1,	// (0x0003affb) media_player_t1

0xc2bf,	// (0x0003b009) media_player_t2

0xc2cd,	// (0x0003b017) media_player_t3

0xc2db,	// (0x0003b025) media_player_t4

0xc2e9,	// (0x0003b033) media_player_t5

0xc2f7,	// (0x0003b041) media_player_t6

0xc305,	// (0x0003b04f) media_player_t7

0x0006,

0xf5d0,	// (0x0003e31a) media_player_t

0xc313,	// (0x0003b05d) wait_bar_pane_cp02

0xf5b5,	// (0x0003e2ff) main_usb_pane_t

0x44bd,	// (0x00033207) cell_mp_pane

0xa467,	// (0x000391b1) cell_mp_pane_g1

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp06

0xa640,	// (0x0003938a) grid_skin_colour_pane

0xa648,	// (0x00039392) list_highlight_pane_cp03

0x2084,	// (0x00030dce) skin_g1

0xa650,	// (0x0003939a) skin_t1

0xa65f,	// (0x000393a9) skin_t2

0x0001,

0xf269,	// (0x0003dfb3) skin_t

0x208c,	// (0x00030dd6) cell_skin_colour_pane_ParamLimits

0x208c,	// (0x00030dd6) cell_skin_colour_pane

0xa66d,	// (0x000393b7) cell_skin_colour_pane_g1

0x20ff,	// (0x00030e49) call_video_g1_ParamLimits

0x20ff,	// (0x00030e49) call_video_g1

0x211b,	// (0x00030e65) call_video_g2_ParamLimits

0x211b,	// (0x00030e65) call_video_g2

0x0001,

0xf26e,	// (0x0003dfb8) call_video_g_ParamLimits

0xf26e,	// (0x0003dfb8) call_video_g

0x2160,	// (0x00030eaa) call_video_uplink_pane_cp1_ParamLimits

0x2160,	// (0x00030eaa) call_video_uplink_pane_cp1

0xa67f,	// (0x000393c9) call_video_uplink_pane_cp2

0x2201,	// (0x00030f4b) video_down_crop_pane_ParamLimits

0x2201,	// (0x00030f4b) video_down_crop_pane

0x22ea,	// (0x00031034) video_down_pane_ParamLimits

0x22ea,	// (0x00031034) video_down_pane

0xa687,	// (0x000393d1) video_down_subqcif_pane_ParamLimits

0xa687,	// (0x000393d1) video_down_subqcif_pane

0xa6a1,	// (0x000393eb) video_down_subqcif_pane_cp_ParamLimits

0xa6a1,	// (0x000393eb) video_down_subqcif_pane_cp

0xa6c9,	// (0x00039413) im_reading_pane_ParamLimits

0xa6c9,	// (0x00039413) im_reading_pane

0x23f3,	// (0x0003113d) im_writing_pane_ParamLimits

0x23f3,	// (0x0003113d) im_writing_pane

0x240f,	// (0x00031159) im_reading_pane_t1

0xa6e3,	// (0x0003942d) list_im_pane

0xa6f4,	// (0x0003943e) scroll_pane_cp07

0x244b,	// (0x00031195) im_writing_pane_t1_ParamLimits

0x244b,	// (0x00031195) im_writing_pane_t1

0xa70d,	// (0x00039457) im_writing_pane_t2_ParamLimits

0xa70d,	// (0x00039457) im_writing_pane_t2

0x0001,

0xf278,	// (0x0003dfc2) im_writing_pane_t_ParamLimits

0xf278,	// (0x0003dfc2) im_writing_pane_t

0xa0f2,	// (0x00038e3c) input_focus_pane_cp04

0xa0f2,	// (0x00038e3c) input_focus_pane_cp05

0x2460,	// (0x000311aa) list_im_single_pane_ParamLimits

0x2460,	// (0x000311aa) list_im_single_pane

0x2476,	// (0x000311c0) list_single_im_pane_t1

0x447d,	// (0x000331c7) blid_accuracy_pane

0x4485,	// (0x000331cf) blid_compass_pane

0x448f,	// (0x000331d9) main_location_t1

0x449f,	// (0x000331e9) main_location_t2

0x44af,	// (0x000331f9) main_location_t3

0x0002,

0xf5df,	// (0x0003e329) main_location_t

0xa0f2,	// (0x00038e3c) aid_levels_location

0xa467,	// (0x000391b1) blid_accuracy_pane_g1

0xa467,	// (0x000391b1) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0003e024) blid_accuracy_pane_g

0xa755,	// (0x0003949f) wml_content_pane

0xa793,	// (0x000394dd) wml_button_pane_ParamLimits

0xa793,	// (0x000394dd) wml_button_pane

0x2485,	// (0x000311cf) wml_list_single_large_pane_ParamLimits

0x2485,	// (0x000311cf) wml_list_single_large_pane

0x249b,	// (0x000311e5) wml_list_single_medium_pane_ParamLimits

0x249b,	// (0x000311e5) wml_list_single_medium_pane

0x24b2,	// (0x000311fc) wml_list_single_small_pane_ParamLimits

0x24b2,	// (0x000311fc) wml_list_single_small_pane

0xa7a7,	// (0x000394f1) wml_selection_box_pane_ParamLimits

0xa7a7,	// (0x000394f1) wml_selection_box_pane

0xa7ba,	// (0x00039504) wml_list_single_pane_t1

0xa7c9,	// (0x00039513) wml_list_single_medium_pane_t1

0xa7d8,	// (0x00039522) wml_list_single_large_pane_t1

0xa7e7,	// (0x00039531) input_focus_pane_cp02_ParamLimits

0xa7e7,	// (0x00039531) input_focus_pane_cp02

0xa7fa,	// (0x00039544) wml_selection_box_pane_g1

0xa803,	// (0x0003954d) wml_selection_box_pane_t1_ParamLimits

0xa803,	// (0x0003954d) wml_selection_box_pane_t1

0xa34d,	// (0x00039097) bg_wml_button_pane_ParamLimits

0xa34d,	// (0x00039097) bg_wml_button_pane

0xa81b,	// (0x00039565) wml_button_pane_g1

0xa823,	// (0x0003956d) wml_button_pane_t1

0xa81b,	// (0x00039565) wml_button_bg_pane_g1

0xa833,	// (0x0003957d) wml_button_bg_pane_g2

0xa83b,	// (0x00039585) wml_button_bg_pane_g3

0xa843,	// (0x0003958d) wml_button_bg_pane_g4

0xa84b,	// (0x00039595) wml_button_bg_pane_g5

0xa853,	// (0x0003959d) wml_button_bg_pane_g6

0xa85b,	// (0x000395a5) wml_button_bg_pane_g7

0xa863,	// (0x000395ad) wml_button_bg_pane_g8

0xa86b,	// (0x000395b5) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0003dfc7) wml_button_bg_pane_g

0x24ce,	// (0x00031218) bg_list_pane_cp02

0xa873,	// (0x000395bd) mce_header_pane_ParamLimits

0xa873,	// (0x000395bd) mce_header_pane

0xa889,	// (0x000395d3) mce_icon_pane

0xa889,	// (0x000395d3) mce_image_pane

0xa892,	// (0x000395dc) mce_text_pane_ParamLimits

0xa892,	// (0x000395dc) mce_text_pane

0x24d8,	// (0x00031222) scroll_pane_cp03

0xa78b,	// (0x000394d5) scroll_pane_cp04

0xa8a5,	// (0x000395ef) scroll_pane_cp05_ParamLimits

0xa8a5,	// (0x000395ef) scroll_pane_cp05

0x24e2,	// (0x0003122c) mce_header_field_pane_ParamLimits

0x24e2,	// (0x0003122c) mce_header_field_pane

0x24fb,	// (0x00031245) mce_header_field_pane_2_ParamLimits

0x24fb,	// (0x00031245) mce_header_field_pane_2

0x2511,	// (0x0003125b) mce_header_field_pane_3

0x2519,	// (0x00031263) list_single_mce_message_pane_ParamLimits

0x2519,	// (0x00031263) list_single_mce_message_pane

0x2532,	// (0x0003127c) list_single_mce_smart_pane_ParamLimits

0x2532,	// (0x0003127c) list_single_mce_smart_pane

0xa8b1,	// (0x000395fb) input_focus_pane_cp03

0xa8ba,	// (0x00039604) list_header_data_pane

0x2556,	// (0x000312a0) mce_header_field_pane_t1

0x2566,	// (0x000312b0) list_single_mce_header_pane_ParamLimits

0x2566,	// (0x000312b0) list_single_mce_header_pane

0xa8c2,	// (0x0003960c) list_single_mce_header_pane_t1

0xa8d1,	// (0x0003961b) list_single_mce_message_pane_g1

0xa8d9,	// (0x00039623) list_single_mce_message_pane_t1

0x25a0,	// (0x000312ea) bg_cale_heading_pane_cp01_ParamLimits

0x25a0,	// (0x000312ea) bg_cale_heading_pane_cp01

0xa8e7,	// (0x00039631) bg_cale_pane_cp02_ParamLimits

0xa8e7,	// (0x00039631) bg_cale_pane_cp02

0x25e7,	// (0x00031331) cale_month_corner_pane

0x2606,	// (0x00031350) cale_month_day_heading_pane_ParamLimits

0x2606,	// (0x00031350) cale_month_day_heading_pane

0x2665,	// (0x000313af) cale_month_pane_g1_ParamLimits

0x2665,	// (0x000313af) cale_month_pane_g1

0x26a1,	// (0x000313eb) cale_month_pane_g2_ParamLimits

0x26a1,	// (0x000313eb) cale_month_pane_g2

0x26dd,	// (0x00031427) cale_month_pane_g3_ParamLimits

0x26dd,	// (0x00031427) cale_month_pane_g3

0x2731,	// (0x0003147b) cale_month_pane_g4_ParamLimits

0x2731,	// (0x0003147b) cale_month_pane_g4

0x2785,	// (0x000314cf) cale_month_pane_g5_ParamLimits

0x2785,	// (0x000314cf) cale_month_pane_g5

0x27e1,	// (0x0003152b) cale_month_pane_g6_ParamLimits

0x27e1,	// (0x0003152b) cale_month_pane_g6

0x2845,	// (0x0003158f) cale_month_pane_g7_ParamLimits

0x2845,	// (0x0003158f) cale_month_pane_g7

0x28b1,	// (0x000315fb) cale_month_pane_g8_ParamLimits

0x28b1,	// (0x000315fb) cale_month_pane_g8

0x291d,	// (0x00031667) cale_month_pane_g9_ParamLimits

0x291d,	// (0x00031667) cale_month_pane_g9

0x297b,	// (0x000316c5) cale_month_pane_g10_ParamLimits

0x297b,	// (0x000316c5) cale_month_pane_g10

0x29cd,	// (0x00031717) cale_month_pane_g11_ParamLimits

0x29cd,	// (0x00031717) cale_month_pane_g11

0x2a1f,	// (0x00031769) cale_month_pane_g12_ParamLimits

0x2a1f,	// (0x00031769) cale_month_pane_g12

0x2a77,	// (0x000317c1) cale_month_pane_g13_ParamLimits

0x2a77,	// (0x000317c1) cale_month_pane_g13

0x000c,

0xf290,	// (0x0003dfda) cale_month_pane_g_ParamLimits

0xf290,	// (0x0003dfda) cale_month_pane_g

0x2acf,	// (0x00031819) cale_month_week_pane

0x2af3,	// (0x0003183d) grid_cale_month_pane_ParamLimits

0x2af3,	// (0x0003183d) grid_cale_month_pane

0x2b49,	// (0x00031893) cale_month_day_heading_pane_t1

0x2bcf,	// (0x00031919) cale_month_day_heading_pane_t2

0x2c60,	// (0x000319aa) cale_month_day_heading_pane_t3

0x2cf1,	// (0x00031a3b) cale_month_day_heading_pane_t4

0x2d82,	// (0x00031acc) cale_month_day_heading_pane_t5

0x2e23,	// (0x00031b6d) cale_month_day_heading_pane_t6

0x2ec8,	// (0x00031c12) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0003dff5) cale_month_day_heading_pane_t

0xa58b,	// (0x000392d5) bg_cale_side_pane_cp01

0x2f71,	// (0x00031cbb) cale_month_week_pane_t1

0x2f8a,	// (0x00031cd4) cale_month_week_pane_t2

0x2fa3,	// (0x00031ced) cale_month_week_pane_t3

0x2fbc,	// (0x00031d06) cale_month_week_pane_t4

0x2fd5,	// (0x00031d1f) cale_month_week_pane_t5

0x2fee,	// (0x00031d38) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0003e004) cale_month_week_pane_t

0x300d,	// (0x00031d57) cell_cale_month_pane_ParamLimits

0x300d,	// (0x00031d57) cell_cale_month_pane

0x3161,	// (0x00031eab) cell_cale_month_pane_g1

0xffb4,	// (0x0002ecfe) cell_cale_month_pane_t1_ParamLimits

0xffb4,	// (0x0002ecfe) cell_cale_month_pane_t1

0xa599,	// (0x000392e3) grid_highlight_pane_cp08

0xa467,	// (0x000391b1) main_smil_g1

0x316d,	// (0x00031eb7) smil_status_pane

0xa926,	// (0x00039670) smil_text_pane

0xc1b5,	// (0x0003aeff) bg_popup_call3_rect_pane_g8

0xc1bd,	// (0x0003af07) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0003e2bd) bg_popup_call3_rect_pane_g

0xc44b,	// (0x0003b195) smil_status_volume_pane_g1

0x3180,	// (0x00031eca) smil_status_pane_t1

0x4ac2,	// (0x0003380c) volume_smil_pane

0xa930,	// (0x0003967a) list_smil_text_pane

0x3199,	// (0x00031ee3) scroll_pane_cp011

0x31a4,	// (0x00031eee) smil_text_list_pane_t1_ParamLimits

0x31a4,	// (0x00031eee) smil_text_list_pane_t1

0x31dd,	// (0x00031f27) aid_volume_smil_ParamLimits

0x31dd,	// (0x00031f27) aid_volume_smil

0xa467,	// (0x000391b1) smil_volume_pane_g1

0xa467,	// (0x000391b1) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0003e024) smil_volume_pane_g

0x1642,	// (0x0003038c) listscroll_cale_day_pane

0xa93a,	// (0x00039684) bg_cale_pane

0xa952,	// (0x0003969c) list_cale_pane

0xa975,	// (0x000396bf) scroll_pane_cp09

0xa986,	// (0x000396d0) cale_bg_pane_g1

0xa98e,	// (0x000396d8) cale_bg_pane_g2

0xa996,	// (0x000396e0) cale_bg_pane_g3

0xa99e,	// (0x000396e8) cale_bg_pane_g4

0xa9a6,	// (0x000396f0) cale_bg_pane_g5

0xa9ae,	// (0x000396f8) cale_bg_pane_g6

0xa9b6,	// (0x00039700) cale_bg_pane_g7

0xa9be,	// (0x00039708) cale_bg_pane_g8

0xa9c6,	// (0x00039710) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0003e029) cale_bg_pane_g

0x31ff,	// (0x00031f49) list_cale_time_pane_ParamLimits

0x31ff,	// (0x00031f49) list_cale_time_pane

0xa9d6,	// (0x00039720) list_cale_time_pane_g1_ParamLimits

0xa9d6,	// (0x00039720) list_cale_time_pane_g1

0xa9e2,	// (0x0003972c) list_cale_time_pane_g2_ParamLimits

0xa9e2,	// (0x0003972c) list_cale_time_pane_g2

0x3213,	// (0x00031f5d) list_cale_time_pane_g3_ParamLimits

0x3213,	// (0x00031f5d) list_cale_time_pane_g3

0x3221,	// (0x00031f6b) list_cale_time_pane_g4_ParamLimits

0x3221,	// (0x00031f6b) list_cale_time_pane_g4

0x322f,	// (0x00031f79) list_cale_time_pane_g5_ParamLimits

0x322f,	// (0x00031f79) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0003e03c) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0003e03c) list_cale_time_pane_g

0xa9fc,	// (0x00039746) list_cale_time_pane_t1_ParamLimits

0xa9fc,	// (0x00039746) list_cale_time_pane_t1

0xaa24,	// (0x0003976e) list_cale_time_pane_t2_ParamLimits

0xaa24,	// (0x0003976e) list_cale_time_pane_t2

0x363d,	// (0x00032387) aid_blid_cardinal_pane

0x367b,	// (0x000323c5) compass_pane_t4

0xaa4c,	// (0x00039796) list_cale_time_pane_t4_ParamLimits

0xaa4c,	// (0x00039796) list_cale_time_pane_t4

0x3689,	// (0x000323d3) compass_pane_t5

0x3697,	// (0x000323e1) compass_pane_t6

0x36a5,	// (0x000323ef) compass_pane_t7

0xae66,	// (0x00039bb0) navi_pane_cc_t1

0xafbb,	// (0x00039d05) aid_phob_thumbnail_center_pane

0x3e48,	// (0x00032b92) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0003e049) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0003e049) list_cale_time_pane_t

0x9d49,	// (0x00038a93) bg_popup_window_pane_cp02_ParamLimits

0x9d49,	// (0x00038a93) bg_popup_window_pane_cp02

0xaa74,	// (0x000397be) heading_pane_cp01_ParamLimits

0xaa74,	// (0x000397be) heading_pane_cp01

0xaa80,	// (0x000397ca) loc_req_pane_ParamLimits

0xaa80,	// (0x000397ca) loc_req_pane

0xaa90,	// (0x000397da) loc_type_pane_ParamLimits

0xaa90,	// (0x000397da) loc_type_pane

0xaaa2,	// (0x000397ec) loc_type_pane_t1_ParamLimits

0xaaa2,	// (0x000397ec) loc_type_pane_t1

0xaab4,	// (0x000397fe) loc_type_pane_t2_ParamLimits

0xaab4,	// (0x000397fe) loc_type_pane_t2

0xaac6,	// (0x00039810) loc_type_pane_t3_ParamLimits

0xaac6,	// (0x00039810) loc_type_pane_t3

0x0002,

0xf306,	// (0x0003e050) loc_type_pane_t_ParamLimits

0xf306,	// (0x0003e050) loc_type_pane_t

0xaad8,	// (0x00039822) list_loc_req_pane

0xaae2,	// (0x0003982c) scroll_pane_cp012

0x323d,	// (0x00031f87) list_single_loc_request_popup_menu_pane_ParamLimits

0x323d,	// (0x00031f87) list_single_loc_request_popup_menu_pane

0xaaed,	// (0x00039837) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaaed,	// (0x00039837) list_single_loc_request_popup_menu_pane_g1

0xaaf9,	// (0x00039843) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaaf9,	// (0x00039843) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0003e057) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0003e057) list_single_loc_request_popup_menu_pane_g

0xab05,	// (0x0003984f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab05,	// (0x0003984f) list_single_loc_request_popup_menu_pane_t1

0xa34d,	// (0x00039097) bg_popup_window_pane_cp03_ParamLimits

0xa34d,	// (0x00039097) bg_popup_window_pane_cp03

0xadce,	// (0x00039b18) heading_loc_req_pane_ParamLimits

0xadce,	// (0x00039b18) heading_loc_req_pane

0x324a,	// (0x00031f94) popup_dyc_status_message_window_g1_ParamLimits

0x324a,	// (0x00031f94) popup_dyc_status_message_window_g1

0x325e,	// (0x00031fa8) popup_dyc_status_message_window_t1_ParamLimits

0x325e,	// (0x00031fa8) popup_dyc_status_message_window_t1

0x3273,	// (0x00031fbd) popup_dyc_status_message_window_t2_ParamLimits

0x3273,	// (0x00031fbd) popup_dyc_status_message_window_t2

0x3288,	// (0x00031fd2) popup_dyc_status_message_window_t3_ParamLimits

0x3288,	// (0x00031fd2) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0003e05c) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0003e05c) popup_dyc_status_message_window_t

0xa0f2,	// (0x00038e3c) bg_heading_pane_cp01

0xab1b,	// (0x00039865) heading_loc_req_pane_g1

0xab23,	// (0x0003986d) heading_loc_req_pane_g2

0xab2b,	// (0x00039875) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0003e063) heading_loc_req_pane_g

0xab33,	// (0x0003987d) heading_loc_req_pane_t1

0xab43,	// (0x0003988d) bg_popup_sub_pane_cp01_ParamLimits

0xab43,	// (0x0003988d) bg_popup_sub_pane_cp01

0xab51,	// (0x0003989b) popup_cale_events_window_g1_ParamLimits

0xab51,	// (0x0003989b) popup_cale_events_window_g1

0xab71,	// (0x000398bb) popup_cale_events_window_g2_ParamLimits

0xab71,	// (0x000398bb) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0003e097) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0003e097) popup_cale_events_window_g

0xab91,	// (0x000398db) popup_cale_events_window_t1_ParamLimits

0xab91,	// (0x000398db) popup_cale_events_window_t1

0xaba3,	// (0x000398ed) popup_cale_events_window_t2_ParamLimits

0xaba3,	// (0x000398ed) popup_cale_events_window_t2

0xabe1,	// (0x0003992b) popup_cale_events_window_t3_ParamLimits

0xabe1,	// (0x0003992b) popup_cale_events_window_t3

0xac1b,	// (0x00039965) popup_cale_events_window_t4_ParamLimits

0xac1b,	// (0x00039965) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0003e09c) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0003e09c) popup_cale_events_window_t

0x338d,	// (0x000320d7) call_type_pane

0x339d,	// (0x000320e7) popup_call_status_window_g1

0x33b1,	// (0x000320fb) popup_call_status_window_g2

0x33c5,	// (0x0003210f) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0003e0a5) popup_call_status_window_g

0xac51,	// (0x0003999b) call_type_pane_g1

0xac5a,	// (0x000399a4) call_type_pane_g2

0x0001,

0xf362,	// (0x0003e0ac) call_type_pane_g

0xa0f2,	// (0x00038e3c) bg_popup_sub_pane_cp02

0xac63,	// (0x000399ad) listscroll_popup_wml_pane

0xac6b,	// (0x000399b5) list_wml_pane

0xac75,	// (0x000399bf) scroll_pane_cp013

0xac80,	// (0x000399ca) list_single_graphic_popup_wml_pane_ParamLimits

0xac80,	// (0x000399ca) list_single_graphic_popup_wml_pane

0xa467,	// (0x000391b1) list_single_graphic_popup_wml_pane_g1

0xac94,	// (0x000399de) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0003e0b1) list_single_graphic_popup_wml_pane_g

0xac9c,	// (0x000399e6) list_single_graphic_popup_wml_pane_t1

0xacb2,	// (0x000399fc) aid_call_pane

0xa345,	// (0x0003908f) popup_clock_analogue_window_g1

0xa345,	// (0x0003908f) popup_clock_analogue_window_g2

0x33d5,	// (0x0003211f) popup_clock_analogue_window_g3

0x33d5,	// (0x0003211f) popup_clock_analogue_window_g4

0xa467,	// (0x000391b1) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0003e0b6) popup_clock_analogue_window_g

0x33dd,	// (0x00032127) popup_clock_analogue_window_t1

0x33eb,	// (0x00032135) clock_digital_number_pane_ParamLimits

0x33eb,	// (0x00032135) clock_digital_number_pane

0x33f7,	// (0x00032141) clock_digital_number_pane_cp02_ParamLimits

0x33f7,	// (0x00032141) clock_digital_number_pane_cp02

0x3403,	// (0x0003214d) clock_digital_number_pane_cp03_ParamLimits

0x3403,	// (0x0003214d) clock_digital_number_pane_cp03

0x340f,	// (0x00032159) clock_digital_number_pane_cp04_ParamLimits

0x340f,	// (0x00032159) clock_digital_number_pane_cp04

0x341b,	// (0x00032165) clock_digital_separator_pane_ParamLimits

0x341b,	// (0x00032165) clock_digital_separator_pane

0x3427,	// (0x00032171) popup_clock_digital_window_t1

0xa467,	// (0x000391b1) clock_digital_number_pane_g1

0xa467,	// (0x000391b1) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0003e024) clock_digital_number_pane_g

0xa467,	// (0x000391b1) clock_digital_separator_pane_g1

0xa467,	// (0x000391b1) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0003e024) clock_digital_separator_pane_g

0xa0f2,	// (0x00038e3c) bg_popup_window_pane_cp04

0xacba,	// (0x00039a04) heading_pane_cp03

0xacc2,	// (0x00039a0c) listscroll_popup_gms_pane

0xacca,	// (0x00039a14) grid_large_graphic_popup_pane

0xacd4,	// (0x00039a1e) listscroll_popup_gms_pane_g1

0xacdc,	// (0x00039a26) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0003e0c1) listscroll_popup_gms_pane_g

0xa78b,	// (0x000394d5) scroll_pane_cp014

0x3444,	// (0x0003218e) cell_large_graphic_popup_pane_ParamLimits

0x3444,	// (0x0003218e) cell_large_graphic_popup_pane

0x345c,	// (0x000321a6) cell_large_graphic_popup_pane_g1_ParamLimits

0x345c,	// (0x000321a6) cell_large_graphic_popup_pane_g1

0xace4,	// (0x00039a2e) cell_large_graphic_popup_pane_g2_ParamLimits

0xace4,	// (0x00039a2e) cell_large_graphic_popup_pane_g2

0xacf0,	// (0x00039a3a) cell_large_graphic_popup_pane_g3_ParamLimits

0xacf0,	// (0x00039a3a) cell_large_graphic_popup_pane_g3

0xacfd,	// (0x00039a47) cell_large_graphic_popup_pane_g4_ParamLimits

0xacfd,	// (0x00039a47) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0003e0c6) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0003e0c6) cell_large_graphic_popup_pane_g

0xad0d,	// (0x00039a57) grid_highlight_pane_cp010

0xa467,	// (0x000391b1) bg_popup_call_pane_g1

0xad17,	// (0x00039a61) list_single_graphic_popup_conf_pane_ParamLimits

0xad17,	// (0x00039a61) list_single_graphic_popup_conf_pane

0xad29,	// (0x00039a73) list_highlight_pane_cp01

0xad32,	// (0x00039a7c) list_single_graphic_popup_conf_pane_g1

0xad3a,	// (0x00039a84) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0003e0cf) list_single_graphic_popup_conf_pane_g

0xad42,	// (0x00039a8c) list_single_graphic_popup_conf_pane_t1

0xad50,	// (0x00039a9a) linegrid_cams_pane_g1

0x3468,	// (0x000321b2) linegrid_cams_pane_g2

0xa5cc,	// (0x00039316) linegrid_cams_pane_g3

0xad59,	// (0x00039aa3) linegrid_cams_pane_g4

0x3471,	// (0x000321bb) linegrid_cams_pane_g5

0x347a,	// (0x000321c4) linegrid_cams_pane_g6

0xa5d5,	// (0x0003931f) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0003e0d4) linegrid_cams_pane_g

0xad62,	// (0x00039aac) popup_clock_analogue_window

0xad62,	// (0x00039aac) popup_clock_digital_window

0xa0f2,	// (0x00038e3c) popup_phob_thumbnail_window

0xa467,	// (0x000391b1) call_video_uplink_pane_g1

0xad6b,	// (0x00039ab5) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0003e0e3) call_video_uplink_pane_g

0xad73,	// (0x00039abd) video_uplink_pane

0xad7b,	// (0x00039ac5) mce_image_pane_g1

0x3485,	// (0x000321cf) mce_image_pane_g2

0x348f,	// (0x000321d9) mce_image_pane_g3

0x3499,	// (0x000321e3) mce_image_pane_g4

0x34a1,	// (0x000321eb) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0003e0e8) mce_image_pane_g

0xad85,	// (0x00039acf) control_top_pane_stacon_cp01_ParamLimits

0xad85,	// (0x00039acf) control_top_pane_stacon_cp01

0xad99,	// (0x00039ae3) uni_indicator_pane_stacon_cp01_ParamLimits

0xad99,	// (0x00039ae3) uni_indicator_pane_stacon_cp01

0xadaa,	// (0x00039af4) bg_popup_sub_pane_cp03

0x34a9,	// (0x000321f3) chi_dic_find_pane

0x34b1,	// (0x000321fb) listscroll_chi_dic_pane

0x34ba,	// (0x00032204) main_pane_chidic_g1

0x34cd,	// (0x00032217) chi_dic_find_pane_t1

0xadb4,	// (0x00039afe) find_chidic_pane

0xadbd,	// (0x00039b07) chi_dic_list_pane_ParamLimits

0xadbd,	// (0x00039b07) chi_dic_list_pane

0xadda,	// (0x00039b24) scroll_pane_cp020

0x34db,	// (0x00032225) find_chidic_pane_t1

0xa0f2,	// (0x00038e3c) input_focus_pane_cp06

0x1354,	// (0x0003009e) list_chi_dic_pane_ParamLimits

0x1354,	// (0x0003009e) list_chi_dic_pane

0x34ea,	// (0x00032234) list_chi_dic_pane_t1_ParamLimits

0x34ea,	// (0x00032234) list_chi_dic_pane_t1

0xa0f2,	// (0x00038e3c) list_highlight_pane_cp020

0xade2,	// (0x00039b2c) bg_cale_heading_pane_g1

0x34fd,	// (0x00032247) bg_cale_heading_pane_g2

0x3505,	// (0x0003224f) bg_cale_heading_pane_g3

0x350d,	// (0x00032257) bg_cale_heading_pane_g4

0x3517,	// (0x00032261) bg_cale_heading_pane_g5

0x3521,	// (0x0003226b) bg_cale_heading_pane_g6

0x3529,	// (0x00032273) bg_cale_heading_pane_g7

0x3531,	// (0x0003227b) bg_cale_heading_pane_g8

0x353b,	// (0x00032285) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0003e0f3) bg_cale_heading_pane_g

0xade2,	// (0x00039b2c) bg_cale_side_pane_g1

0x3545,	// (0x0003228f) bg_cale_side_pane_g2

0x354f,	// (0x00032299) bg_cale_side_pane_g3

0x3559,	// (0x000322a3) bg_cale_side_pane_g4

0x3563,	// (0x000322ad) bg_cale_side_pane_g5

0x356d,	// (0x000322b7) bg_cale_side_pane_g6

0x3577,	// (0x000322c1) bg_cale_side_pane_g7

0x3581,	// (0x000322cb) bg_cale_side_pane_g8

0x3589,	// (0x000322d3) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0003e106) bg_cale_side_pane_g

0x3591,	// (0x000322db) popup_call_status_window_ParamLimits

0x3591,	// (0x000322db) popup_call_status_window

0xadea,	// (0x00039b34) stacon_top_pane

0xadf2,	// (0x00039b3c) status_pane_ParamLimits

0xadf2,	// (0x00039b3c) status_pane

0xae07,	// (0x00039b51) status_small_pane

0xae0f,	// (0x00039b59) control_pane

0xa0f2,	// (0x00038e3c) stacon_bottom_pane

0xae17,	// (0x00039b61) list_single_mce_smart_pane_t1_ParamLimits

0xae17,	// (0x00039b61) list_single_mce_smart_pane_t1

0xae2a,	// (0x00039b74) list_single_mce_smart_pane_t2_ParamLimits

0xae2a,	// (0x00039b74) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0003e119) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0003e119) list_single_mce_smart_pane_t

0x35de,	// (0x00032328) compass_pane

0x35e9,	// (0x00032333) main_location2_pane_t1

0x35fd,	// (0x00032347) main_location2_pane_t2

0x3613,	// (0x0003235d) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0003e11e) main_location2_pane_t

0xae49,	// (0x00039b93) compass_pane_g1_ParamLimits

0xae49,	// (0x00039b93) compass_pane_g1

0x365d,	// (0x000323a7) compass_pane_t1

0x366c,	// (0x000323b6) compass_pane_t2

0x0005,

0xf3dd,	// (0x0003e127) compass_pane_t

0x36b3,	// (0x000323fd) text_secondary_cp61

0xae5d,	// (0x00039ba7) navi_pane_cams_g5

0xae80,	// (0x00039bca) navi_pane_im_t1

0xae8e,	// (0x00039bd8) navi_pane_mp_g1_ParamLimits

0xae8e,	// (0x00039bd8) navi_pane_mp_g1

0xaea2,	// (0x00039bec) navi_pane_mp_g2_ParamLimits

0xaea2,	// (0x00039bec) navi_pane_mp_g2

0xaeae,	// (0x00039bf8) navi_pane_mp_g3_ParamLimits

0xaeae,	// (0x00039bf8) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0003e13b) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0003e13b) navi_pane_mp_g

0xaeba,	// (0x00039c04) navi_pane_mp_t1

0xaec8,	// (0x00039c12) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0003e142) navi_pane_mp_t

0xaf04,	// (0x00039c4e) navi_pane_vt_g1

0xaeba,	// (0x00039c04) navi_pane_vt_t1

0xaf0c,	// (0x00039c56) navi_slider_pane

0xaf14,	// (0x00039c5e) zooming_pane

0xaf1c,	// (0x00039c66) navi_slider_pane_g1

0x37fc,	// (0x00032546) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0003e149) navi_slider_pane_g

0xaf40,	// (0x00039c8a) aid_levels_zoom

0xaf48,	// (0x00039c92) zooming_pane_g1

0xaf50,	// (0x00039c9a) zooming_pane_g2

0xaf50,	// (0x00039c9a) zooming_pane_g3

0x0002,

0xf40e,	// (0x0003e158) zooming_pane_g

0xaf58,	// (0x00039ca2) level_10_zoom

0xaf61,	// (0x00039cab) level_11_zoom

0xaf6a,	// (0x00039cb4) level_1_zoom

0xaf73,	// (0x00039cbd) level_2_zoom

0xaf7c,	// (0x00039cc6) level_3_zoom

0xaf85,	// (0x00039ccf) level_4_zoom

0xaf8e,	// (0x00039cd8) level_5_zoom

0xaf97,	// (0x00039ce1) level_6_zoom

0xafa0,	// (0x00039cea) level_7_zoom

0xafa9,	// (0x00039cf3) level_8_zoom

0xafb2,	// (0x00039cfc) level_9_zoom

0xafc3,	// (0x00039d0d) popup_phob_thumbnail_window_g1

0xafcb,	// (0x00039d15) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0003e15f) popup_phob_thumbnail_window_g

0xc31b,	// (0x0003b065) level_1_location

0xc323,	// (0x0003b06d) level_2_location

0xc32b,	// (0x0003b075) level_3_location

0xc333,	// (0x0003b07d) level_4_location

0xaf14,	// (0x00039c5e) level_5_location

0x380e,	// (0x00032558) mce_icon_pane_g1

0x3818,	// (0x00032562) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0003e164) mce_icon_pane_g

0x3820,	// (0x0003256a) main_mup_pane_g1_ParamLimits

0x3820,	// (0x0003256a) main_mup_pane_g1

0x3836,	// (0x00032580) main_mup_pane_g2_ParamLimits

0x3836,	// (0x00032580) main_mup_pane_g2

0x384e,	// (0x00032598) main_mup_pane_g3_ParamLimits

0x384e,	// (0x00032598) main_mup_pane_g3

0x3866,	// (0x000325b0) main_mup_pane_g4_ParamLimits

0x3866,	// (0x000325b0) main_mup_pane_g4

0x387e,	// (0x000325c8) main_mup_pane_g5_ParamLimits

0x387e,	// (0x000325c8) main_mup_pane_g5

0x389a,	// (0x000325e4) main_mup_pane_g6_ParamLimits

0x389a,	// (0x000325e4) main_mup_pane_g6

0x38b4,	// (0x000325fe) main_mup_pane_g7_ParamLimits

0x38b4,	// (0x000325fe) main_mup_pane_g7

0x38d2,	// (0x0003261c) main_mup_pane_g8_ParamLimits

0x38d2,	// (0x0003261c) main_mup_pane_g8

0x38f0,	// (0x0003263a) main_mup_pane_g9_ParamLimits

0x38f0,	// (0x0003263a) main_mup_pane_g9

0x390c,	// (0x00032656) main_mup_pane_g10_ParamLimits

0x390c,	// (0x00032656) main_mup_pane_g10

0x392a,	// (0x00032674) main_mup_pane_g11_ParamLimits

0x392a,	// (0x00032674) main_mup_pane_g11

0x3944,	// (0x0003268e) main_mup_pane_g12_ParamLimits

0x3944,	// (0x0003268e) main_mup_pane_g12

0x395a,	// (0x000326a4) main_mup_pane_g13_ParamLimits

0x395a,	// (0x000326a4) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0003e169) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0003e169) main_mup_pane_g

0x396e,	// (0x000326b8) main_mup_pane_t1_ParamLimits

0x396e,	// (0x000326b8) main_mup_pane_t1

0x398a,	// (0x000326d4) main_mup_pane_t2_ParamLimits

0x398a,	// (0x000326d4) main_mup_pane_t2

0x39a2,	// (0x000326ec) main_mup_pane_t3_ParamLimits

0x39a2,	// (0x000326ec) main_mup_pane_t3

0x39ba,	// (0x00032704) main_mup_pane_t4_ParamLimits

0x39ba,	// (0x00032704) main_mup_pane_t4

0x39d8,	// (0x00032722) main_mup_pane_t5_ParamLimits

0x39d8,	// (0x00032722) main_mup_pane_t5

0x39ed,	// (0x00032737) main_mup_pane_t6_ParamLimits

0x39ed,	// (0x00032737) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0003e184) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0003e184) main_mup_pane_t

0x39ff,	// (0x00032749) mup_progress_pane_ParamLimits

0x39ff,	// (0x00032749) mup_progress_pane

0x3a0b,	// (0x00032755) mup_visualizer_pane_ParamLimits

0x3a0b,	// (0x00032755) mup_visualizer_pane

0x3a3f,	// (0x00032789) mup_volume_pane_ParamLimits

0x3a3f,	// (0x00032789) mup_volume_pane

0xafd3,	// (0x00039d1d) mup_visualizer_pane_g1_ParamLimits

0xafd3,	// (0x00039d1d) mup_visualizer_pane_g1

0xafd3,	// (0x00039d1d) mup_visualizer_pane_g2_ParamLimits

0xafd3,	// (0x00039d1d) mup_visualizer_pane_g2

0xae49,	// (0x00039b93) mup_visualizer_pane_g3_ParamLimits

0xae49,	// (0x00039b93) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0003e191) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0003e191) mup_visualizer_pane_g

0xa467,	// (0x000391b1) mup_volume_pane_g1

0xafe9,	// (0x00039d33) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0003e198) mup_volume_pane_g

0xa467,	// (0x000391b1) mup_progress_pane_g1

0xaff2,	// (0x00039d3c) mup_progress_pane_g2

0xaffb,	// (0x00039d45) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0003e19d) mup_progress_pane_g

0xa0f2,	// (0x00038e3c) bg_popup_window_pane_cp05

0xb004,	// (0x00039d4e) heading_pane_cp02_ParamLimits

0xb004,	// (0x00039d4e) heading_pane_cp02

0xb020,	// (0x00039d6a) list_popup_blid_pane

0xb028,	// (0x00039d72) list_blid_sat_info_pane_ParamLimits

0xb028,	// (0x00039d72) list_blid_sat_info_pane

0xb03b,	// (0x00039d85) list_blid_sat_info_pane_g1

0xb043,	// (0x00039d8d) list_blid_sat_info_pane_t1

0x3b69,	// (0x000328b3) mup_equalizer_pane_ParamLimits

0x3b69,	// (0x000328b3) mup_equalizer_pane

0x3b8a,	// (0x000328d4) mup_equalizer_pane_cp1_ParamLimits

0x3b8a,	// (0x000328d4) mup_equalizer_pane_cp1

0x3bab,	// (0x000328f5) mup_equalizer_pane_cp2_ParamLimits

0x3bab,	// (0x000328f5) mup_equalizer_pane_cp2

0x3bd0,	// (0x0003291a) mup_equalizer_pane_cp3_ParamLimits

0x3bd0,	// (0x0003291a) mup_equalizer_pane_cp3

0x3bf9,	// (0x00032943) mup_equalizer_pane_cp4_ParamLimits

0x3bf9,	// (0x00032943) mup_equalizer_pane_cp4

0x3c22,	// (0x0003296c) mup_equalizer_pane_cp5

0x3c3a,	// (0x00032984) mup_equalizer_pane_cp6

0x3c52,	// (0x0003299c) mup_equalizer_pane_cp7

0xc235,	// (0x0003af7f) bg_popup_call_poc_act_pane_g9

0xc23d,	// (0x0003af87) bg_popup_call_poc_act_pane_g10

0xc245,	// (0x0003af8f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa34d,	// (0x00039097) mup_scale_pane

0xa467,	// (0x000391b1) mup_scale_pane_g1

0xb051,	// (0x00039d9b) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0003e1b9) mup_scale_pane_g

0xb075,	// (0x00039dbf) msg_data_pane

0xb07d,	// (0x00039dc7) scroll_pane_cp017

0x3c7c,	// (0x000329c6) bg_list_pane_cp04_ParamLimits

0x3c7c,	// (0x000329c6) bg_list_pane_cp04

0xb08d,	// (0x00039dd7) msg_data_pane_g1

0x3c9c,	// (0x000329e6) msg_data_pane_g2

0x3ca6,	// (0x000329f0) msg_data_pane_g3

0x3cb0,	// (0x000329fa) msg_data_pane_g4

0x3cb8,	// (0x00032a02) msg_data_pane_g5

0x3cc0,	// (0x00032a0a) msg_data_pane_g6

0x3cc8,	// (0x00032a12) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0003e1c8) msg_data_pane_g

0x3cd0,	// (0x00032a1a) msg_text_pane_ParamLimits

0x3cd0,	// (0x00032a1a) msg_text_pane

0x3cf8,	// (0x00032a42) qrid_highlight_pane_cp011_ParamLimits

0x3cf8,	// (0x00032a42) qrid_highlight_pane_cp011

0xa0f2,	// (0x00038e3c) msg_body_pane

0xa0f2,	// (0x00038e3c) msg_header_pane

0xb095,	// (0x00039ddf) input_focus_pane_cp07

0xb0aa,	// (0x00039df4) msg_header_pane_t1_ParamLimits

0xb0aa,	// (0x00039df4) msg_header_pane_t1

0xb0bc,	// (0x00039e06) msg_header_pane_t2_ParamLimits

0xb0bc,	// (0x00039e06) msg_header_pane_t2

0x0001,

0xf492,	// (0x0003e1dc) msg_header_pane_t_ParamLimits

0xf492,	// (0x0003e1dc) msg_header_pane_t

0xb0ce,	// (0x00039e18) msg_body_pane_g1

0x3d27,	// (0x00032a71) msg_body_pane_t1_ParamLimits

0x3d27,	// (0x00032a71) msg_body_pane_t1

0xb0d6,	// (0x00039e20) msg_body_pane_t2_ParamLimits

0xb0d6,	// (0x00039e20) msg_body_pane_t2

0xb0e8,	// (0x00039e32) msg_body_pane_t3_ParamLimits

0xb0e8,	// (0x00039e32) msg_body_pane_t3

0x0002,

0xf497,	// (0x0003e1e1) msg_body_pane_t_ParamLimits

0xf497,	// (0x0003e1e1) msg_body_pane_t

0xfff0,	// (0x0002ed3a) main_viewer_pane_g1_ParamLimits

0xfff0,	// (0x0002ed3a) main_viewer_pane_g1

0xfffe,	// (0x0002ed48) main_viewer_pane_g2_ParamLimits

0xfffe,	// (0x0002ed48) main_viewer_pane_g2

0x3d8e,	// (0x00032ad8) main_viewer_pane_g3_ParamLimits

0x3d8e,	// (0x00032ad8) main_viewer_pane_g3

0x3d9d,	// (0x00032ae7) main_viewer_pane_g4_ParamLimits

0x3d9d,	// (0x00032ae7) main_viewer_pane_g4

0x3dac,	// (0x00032af6) main_viewer_pane_g5_ParamLimits

0x3dac,	// (0x00032af6) main_viewer_pane_g5

0x3dac,	// (0x00032af6) main_viewer_pane_g7_ParamLimits

0x3dac,	// (0x00032af6) main_viewer_pane_g7

0x3dbe,	// (0x00032b08) main_viewer_pane_g8_ParamLimits

0x3dbe,	// (0x00032b08) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0003e1f1) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0003e1f1) main_viewer_pane_g

0xb0fa,	// (0x00039e44) viewer_content_pane_ParamLimits

0xb0fa,	// (0x00039e44) viewer_content_pane

0x3e05,	// (0x00032b4f) main_postcard_pane_g1_ParamLimits

0x3e05,	// (0x00032b4f) main_postcard_pane_g1

0x3e1b,	// (0x00032b65) main_postcard_pane_g2_ParamLimits

0x3e1b,	// (0x00032b65) main_postcard_pane_g2

0x3e31,	// (0x00032b7b) main_postcard_pane_g3_ParamLimits

0x3e31,	// (0x00032b7b) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0003e202) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0003e202) main_postcard_pane_g

0x3e48,	// (0x00032b92) main_postcard_pane_g4

0xc45e,	// (0x0003b1a8) smil_status_volume_pane_g2

0x3e8b,	// (0x00032bd5) postcard_pane_ParamLimits

0x3e8b,	// (0x00032bd5) postcard_pane

0xb108,	// (0x00039e52) postcard_pane_g1_ParamLimits

0xb108,	// (0x00039e52) postcard_pane_g1

0x3edb,	// (0x00032c25) postcard_pane_g2_ParamLimits

0x3edb,	// (0x00032c25) postcard_pane_g2

0x3ee7,	// (0x00032c31) postcard_pane_g3_ParamLimits

0x3ee7,	// (0x00032c31) postcard_pane_g3

0xb116,	// (0x00039e60) postcard_pane_g4_ParamLimits

0xb116,	// (0x00039e60) postcard_pane_g4

0x3ef3,	// (0x00032c3d) postcard_pane_g5_ParamLimits

0x3ef3,	// (0x00032c3d) postcard_pane_g5

0x3f08,	// (0x00032c52) postcard_pane_g6_ParamLimits

0x3f08,	// (0x00032c52) postcard_pane_g6

0xb108,	// (0x00039e52) postcard_pane_g7_ParamLimits

0xb108,	// (0x00039e52) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0003e20f) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0003e20f) postcard_pane_g

0x3f20,	// (0x00032c6a) main_mp2_pane_g1_ParamLimits

0x3f20,	// (0x00032c6a) main_mp2_pane_g1

0x3f2e,	// (0x00032c78) main_mp2_pane_g2_ParamLimits

0x3f2e,	// (0x00032c78) main_mp2_pane_g2

0x3f3a,	// (0x00032c84) main_mp2_pane_g3_ParamLimits

0x3f3a,	// (0x00032c84) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0003e21e) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0003e21e) main_mp2_pane_g

0x3f46,	// (0x00032c90) main_mp2_pane_t1_ParamLimits

0x3f46,	// (0x00032c90) main_mp2_pane_t1

0x3f5d,	// (0x00032ca7) main_mp2_pane_t2_ParamLimits

0x3f5d,	// (0x00032ca7) main_mp2_pane_t2

0x3f6f,	// (0x00032cb9) main_mp2_pane_t3_ParamLimits

0x3f6f,	// (0x00032cb9) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0003e225) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0003e225) main_mp2_pane_t

0xb124,	// (0x00039e6e) pec_content_pane_ParamLimits

0xb124,	// (0x00039e6e) pec_content_pane

0xa78b,	// (0x000394d5) scroll_pane_cp015

0xb136,	// (0x00039e80) pec_attribute_pane_ParamLimits

0xb136,	// (0x00039e80) pec_attribute_pane

0x3f81,	// (0x00032ccb) pec_content_pane_g1_ParamLimits

0x3f81,	// (0x00032ccb) pec_content_pane_g1

0xb146,	// (0x00039e90) pec_content_pane_t1_ParamLimits

0xb146,	// (0x00039e90) pec_content_pane_t1

0xb158,	// (0x00039ea2) pec_content_pane_t2_ParamLimits

0xb158,	// (0x00039ea2) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0003e22c) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0003e22c) pec_content_pane_t

0x3f8d,	// (0x00032cd7) list_single_graphic_pane_cp01_ParamLimits

0x3f8d,	// (0x00032cd7) list_single_graphic_pane_cp01

0xa34d,	// (0x00039097) bg_popup_sub_pane_cp04

0xb16a,	// (0x00039eb4) popup_mup_playback_window_g1

0xb176,	// (0x00039ec0) popup_mup_playback_window_t1

0xb18b,	// (0x00039ed5) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0003e231) popup_mup_playback_window_t

0xb1c2,	// (0x00039f0c) main_image_pane_g1_ParamLimits

0xb1c2,	// (0x00039f0c) main_image_pane_g1

0xb205,	// (0x00039f4f) scroll_pane_cp018_ParamLimits

0xb205,	// (0x00039f4f) scroll_pane_cp018

0xb21d,	// (0x00039f67) scroll_pane_cp016_ParamLimits

0xb21d,	// (0x00039f67) scroll_pane_cp016

0x405c,	// (0x00032da6) smil2_image_pane_ParamLimits

0x405c,	// (0x00032da6) smil2_image_pane

0x4092,	// (0x00032ddc) smil2_root_pane_ParamLimits

0x4092,	// (0x00032ddc) smil2_root_pane

0x40ca,	// (0x00032e14) smil2_text_pane_ParamLimits

0x40ca,	// (0x00032e14) smil2_text_pane

0xa0f2,	// (0x00038e3c) bg_list_pane_cp06

0xb259,	// (0x00039fa3) grid_radio_pane

0xa0f2,	// (0x00038e3c) bg_popup_window_pane_cp06

0xb263,	// (0x00039fad) main_fmradio_pane_t1

0xacba,	// (0x00039a04) heading_pane_cp04

0xb271,	// (0x00039fbb) main_fmradio_pane_t2

0xc24d,	// (0x0003af97) popup_cale_lunar_info_window_g1

0xb27f,	// (0x00039fc9) main_fmradio_pane_t3

0xc255,	// (0x0003af9f) popup_cale_lunar_info_window_g2

0xb28f,	// (0x00039fd9) main_fmradio_pane_t4

0x0001,

0xb29d,	// (0x00039fe7) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0003e30c) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0003e246) main_fmradio_pane_t

0xb2ab,	// (0x00039ff5) wait_bar_pane_cp03

0xb2b3,	// (0x00039ffd) cell_fmradio_pane_ParamLimits

0xb2b3,	// (0x00039ffd) cell_fmradio_pane

0xb108,	// (0x00039e52) cell_fmradio_pane_g1_ParamLimits

0xb108,	// (0x00039e52) cell_fmradio_pane_g1

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp011

0xb2c8,	// (0x0003a012) poc_content_pane_ParamLimits

0xb2c8,	// (0x0003a012) poc_content_pane

0xb2da,	// (0x0003a024) scroll_pane_cp019

0x415a,	// (0x00032ea4) popup_call_poc_act_window_ParamLimits

0x415a,	// (0x00032ea4) popup_call_poc_act_window

0x417e,	// (0x00032ec8) popup_call_poc_inact_window_ParamLimits

0x417e,	// (0x00032ec8) popup_call_poc_inact_window

0xf599,	// (0x0003e2e3) bg_popup_call_poc_act_pane_g

0xc1c5,	// (0x0003af0f) bg_popup_call_poc_inact_pane_g1

0xc1cd,	// (0x0003af17) bg_popup_call_poc_inact_pane_g2

0xb2e2,	// (0x0003a02c) popup_call_poc_act_window_g2

0xc1d5,	// (0x0003af1f) bg_popup_call_poc_inact_pane_g3

0xc1dd,	// (0x0003af27) bg_popup_call_poc_inact_pane_g4

0xc1e5,	// (0x0003af2f) bg_popup_call_poc_inact_pane_g5

0xb2ea,	// (0x0003a034) popup_call_poc_act_window_t1_ParamLimits

0xb2ea,	// (0x0003a034) popup_call_poc_act_window_t1

0xb312,	// (0x0003a05c) popup_call_poc_act_window_t2_ParamLimits

0xb312,	// (0x0003a05c) popup_call_poc_act_window_t2

0xb33a,	// (0x0003a084) popup_call_poc_act_window_t3_ParamLimits

0xb33a,	// (0x0003a084) popup_call_poc_act_window_t3

0xb362,	// (0x0003a0ac) popup_call_poc_act_window_t4_ParamLimits

0xb362,	// (0x0003a0ac) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0003e251) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0003e251) popup_call_poc_act_window_t

0xc1ed,	// (0x0003af37) bg_popup_call_poc_inact_pane_g6

0xc1f5,	// (0x0003af3f) bg_popup_call_poc_inact_pane_g7

0xc1fd,	// (0x0003af47) bg_popup_call_poc_inact_pane_g8

0xb374,	// (0x0003a0be) popup_call_poc_inact_window_g2

0xc205,	// (0x0003af4f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0003e2d0) bg_popup_call_poc_inact_pane_g

0xb37c,	// (0x0003a0c6) popup_call_poc_inact_window_t1_ParamLimits

0xb37c,	// (0x0003a0c6) popup_call_poc_inact_window_t1

0xb391,	// (0x0003a0db) popup_call_poc_inact_window_t2_ParamLimits

0xb391,	// (0x0003a0db) popup_call_poc_inact_window_t2

0xb3a6,	// (0x0003a0f0) popup_call_poc_inact_window_t3_ParamLimits

0xb3a6,	// (0x0003a0f0) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0003e25a) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0003e25a) popup_call_poc_inact_window_t

0xc3d1,	// (0x0003b11b) context_pane_ParamLimits

0x4a26,	// (0x00033770) signal_pane_ParamLimits

0xaf14,	// (0x00039c5e) main_call2_pane

0xc3bf,	// (0x0003b109) popup_phob_thumbnail2_window_ParamLimits

0xc3bf,	// (0x0003b109) popup_phob_thumbnail2_window

0x3d58,	// (0x00032aa2) aid_hotspot_pointer_arrow_pane

0x3d60,	// (0x00032aaa) aid_hotspot_pointer_hand_pane

0x44e6,	// (0x00033230) phob_pre_status_pane_g5

0x1c86,	// (0x000309d0) cams_zoom_pane_ParamLimits

0x1c95,	// (0x000309df) image_vga_pane_ParamLimits

0x1caf,	// (0x000309f9) main_camera_pane_g1_ParamLimits

0x1cc1,	// (0x00030a0b) main_camera_pane_g2_ParamLimits

0x1cd1,	// (0x00030a1b) main_camera_pane_g3_ParamLimits

0x1ce5,	// (0x00030a2f) main_camera_pane_g4_ParamLimits

0x1cf9,	// (0x00030a43) main_camera_pane_g5_ParamLimits

0x1d0d,	// (0x00030a57) main_camera_pane_g6_ParamLimits

0x1d21,	// (0x00030a6b) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0003df59) main_camera_pane_g_ParamLimits

0x1d35,	// (0x00030a7f) main_camera_pane_t1_ParamLimits

0x1d4b,	// (0x00030a95) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0003df6a) main_camera_pane_t_ParamLimits

0xa34d,	// (0x00039097) bg_popup_preview_window_pane_cp01_ParamLimits

0xa34d,	// (0x00039097) bg_popup_preview_window_pane_cp01

0xb3bb,	// (0x0003a105) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3bb,	// (0x0003a105) popup_phob_thumbnail2_window_g1

0xa0f2,	// (0x00038e3c) call2_cli_visual_pane

0x41b2,	// (0x00032efc) popup_call2_audio_conf_window_ParamLimits

0x41b2,	// (0x00032efc) popup_call2_audio_conf_window

0x41da,	// (0x00032f24) popup_call2_audio_first_window_ParamLimits

0x41da,	// (0x00032f24) popup_call2_audio_first_window

0x4270,	// (0x00032fba) popup_call2_audio_in_window_ParamLimits

0x4270,	// (0x00032fba) popup_call2_audio_in_window

0x42bc,	// (0x00033006) popup_call2_audio_out_window_ParamLimits

0x42bc,	// (0x00033006) popup_call2_audio_out_window

0x432e,	// (0x00033078) popup_call2_audio_second_window_ParamLimits

0x432e,	// (0x00033078) popup_call2_audio_second_window

0x4394,	// (0x000330de) popup_call2_audio_wait_window_ParamLimits

0x4394,	// (0x000330de) popup_call2_audio_wait_window

0xa0f2,	// (0x00038e3c) bg_popup_call2_act_pane_cp03

0xa32f,	// (0x00039079) list_conf_pane_cp

0xb3c7,	// (0x0003a111) popup_call2_audio_conf_window_t1

0xb3d5,	// (0x0003a11f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3d5,	// (0x0003a11f) list_single_graphic_popup_conf2_pane

0xad29,	// (0x00039a73) list_highlight_pane_cp04

0xb3e8,	// (0x0003a132) list_single_graphic_popup_conf2_pane_g1

0xad3a,	// (0x00039a84) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0003e261) list_single_graphic_popup_conf2_pane_g

0xb3f2,	// (0x0003a13c) list_single_graphic_popup_conf2_pane_t1

0xb400,	// (0x0003a14a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb400,	// (0x0003a14a) bg_popup_call2_act_pane_cp01

0xb48a,	// (0x0003a1d4) call_type_pane_cp05_ParamLimits

0xb48a,	// (0x0003a1d4) call_type_pane_cp05

0xb4de,	// (0x0003a228) popup_call2_audio_second_window_g1_ParamLimits

0xb4de,	// (0x0003a228) popup_call2_audio_second_window_g1

0xb532,	// (0x0003a27c) popup_call2_audio_second_window_g2_ParamLimits

0xb532,	// (0x0003a27c) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0003e266) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0003e266) popup_call2_audio_second_window_g

0xb597,	// (0x0003a2e1) popup_call2_audio_second_window_t1_ParamLimits

0xb597,	// (0x0003a2e1) popup_call2_audio_second_window_t1

0xb652,	// (0x0003a39c) popup_call2_audio_second_window_t2_ParamLimits

0xb652,	// (0x0003a39c) popup_call2_audio_second_window_t2

0xb6a5,	// (0x0003a3ef) popup_call2_audio_second_window_t3_ParamLimits

0xb6a5,	// (0x0003a3ef) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0003e26d) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0003e26d) popup_call2_audio_second_window_t

0xa0f2,	// (0x00038e3c) bg_popup_call2_in_pane_cp02

0xa0fc,	// (0x00038e46) call_type_pane_cp04

0xa104,	// (0x00038e4e) popup_call2_audio_wait_window_g1

0xa10c,	// (0x00038e56) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0003de46) popup_call2_audio_wait_window_g

0xa114,	// (0x00038e5e) popup_call2_audio_wait_window_t3

0xb798,	// (0x0003a4e2) bg_popup_call2_act_pane_ParamLimits

0xb798,	// (0x0003a4e2) bg_popup_call2_act_pane

0xb858,	// (0x0003a5a2) call_type_pane_cp03_ParamLimits

0xb858,	// (0x0003a5a2) call_type_pane_cp03

0xb8bc,	// (0x0003a606) popup_call2_audio_first_window_g1_ParamLimits

0xb8bc,	// (0x0003a606) popup_call2_audio_first_window_g1

0xb92c,	// (0x0003a676) popup_call2_audio_first_window_g2_ParamLimits

0xb92c,	// (0x0003a676) popup_call2_audio_first_window_g2

0xafd3,	// (0x00039d1d) popup_call2_audio_first_window_g3_ParamLimits

0xafd3,	// (0x00039d1d) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0003e276) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0003e276) popup_call2_audio_first_window_g

0xba0a,	// (0x0003a754) popup_call2_audio_first_window_t1_ParamLimits

0xba0a,	// (0x0003a754) popup_call2_audio_first_window_t1

0xbb0d,	// (0x0003a857) popup_call2_audio_first_window_t4_ParamLimits

0xbb0d,	// (0x0003a857) popup_call2_audio_first_window_t4

0xbbf0,	// (0x0003a93a) popup_call2_audio_first_window_t5_ParamLimits

0xbbf0,	// (0x0003a93a) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0003e281) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0003e281) popup_call2_audio_first_window_t

0xa345,	// (0x0003908f) bg_popup_call2_act_pane_g1

0xc25f,	// (0x0003afa9) popup_cale_lunar_info_window_t1

0xc26d,	// (0x0003afb7) popup_cale_lunar_info_window_t2

0xc27b,	// (0x0003afc5) popup_cale_lunar_info_window_t3

0xa0f2,	// (0x00038e3c) bg_popup_call2_bubble_pane

0xbcf1,	// (0x0003aa3b) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcf1,	// (0x0003aa3b) bg_popup_call2_in_pane_cp01

0x9dce,	// (0x00038b18) call_type_pane_cp02

0xbd39,	// (0x0003aa83) popup_call2_audio_out_window_g1_ParamLimits

0xbd39,	// (0x0003aa83) popup_call2_audio_out_window_g1

0xbd65,	// (0x0003aaaf) popup_call2_audio_out_window_g2_ParamLimits

0xbd65,	// (0x0003aaaf) popup_call2_audio_out_window_g2

0xbd8d,	// (0x0003aad7) popup_call2_audio_out_window_g3_ParamLimits

0xbd8d,	// (0x0003aad7) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0003e28a) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0003e28a) popup_call2_audio_out_window_g

0xbdc8,	// (0x0003ab12) popup_call2_audio_out_window_t1_ParamLimits

0xbdc8,	// (0x0003ab12) popup_call2_audio_out_window_t1

0xbe27,	// (0x0003ab71) popup_call2_audio_out_window_t2_ParamLimits

0xbe27,	// (0x0003ab71) popup_call2_audio_out_window_t2

0xbe7b,	// (0x0003abc5) popup_call2_audio_out_window_t3_ParamLimits

0xbe7b,	// (0x0003abc5) popup_call2_audio_out_window_t3

0xbe91,	// (0x0003abdb) popup_call2_audio_out_window_t4_ParamLimits

0xbe91,	// (0x0003abdb) popup_call2_audio_out_window_t4

0xbea7,	// (0x0003abf1) popup_call2_audio_out_window_t5_ParamLimits

0xbea7,	// (0x0003abf1) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0003e293) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0003e293) popup_call2_audio_out_window_t

0xbf0b,	// (0x0003ac55) bg_popup_call2_in_pane_ParamLimits

0xbf0b,	// (0x0003ac55) bg_popup_call2_in_pane

0xbf67,	// (0x0003acb1) popup_call2_audio_in_window_g1_ParamLimits

0xbf67,	// (0x0003acb1) popup_call2_audio_in_window_g1

0xbf9f,	// (0x0003ace9) popup_call2_audio_in_window_g2_ParamLimits

0xbf9f,	// (0x0003ace9) popup_call2_audio_in_window_g2

0xbfd7,	// (0x0003ad21) popup_call2_audio_in_window_g3_ParamLimits

0xbfd7,	// (0x0003ad21) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0003e2a0) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0003e2a0) popup_call2_audio_in_window_g

0xc02f,	// (0x0003ad79) popup_call2_audio_in_window_t1_ParamLimits

0xc02f,	// (0x0003ad79) popup_call2_audio_in_window_t1

0xc0af,	// (0x0003adf9) popup_call2_audio_in_window_t2_ParamLimits

0xc0af,	// (0x0003adf9) popup_call2_audio_in_window_t2

0xc12f,	// (0x0003ae79) popup_call2_audio_in_window_t3_ParamLimits

0xc12f,	// (0x0003ae79) popup_call2_audio_in_window_t3

0xc149,	// (0x0003ae93) popup_call2_audio_in_window_t4_ParamLimits

0xc149,	// (0x0003ae93) popup_call2_audio_in_window_t4

0xc15b,	// (0x0003aea5) popup_call2_audio_in_window_t5_ParamLimits

0xc15b,	// (0x0003aea5) popup_call2_audio_in_window_t5

0xc170,	// (0x0003aeba) popup_call2_audio_in_window_t6_ParamLimits

0xc170,	// (0x0003aeba) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0003e2a9) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0003e2a9) popup_call2_audio_in_window_t

0xa345,	// (0x0003908f) bg_popup_call2_in_pane_g1

0xc289,	// (0x0003afd3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0003e311) popup_cale_lunar_info_window_t

0xa34d,	// (0x00039097) bg_popup_call2_rect_pane_ParamLimits

0xa34d,	// (0x00039097) bg_popup_call2_rect_pane

0xa0f2,	// (0x00038e3c) call2_cli_visual_graphic_pane

0xa0f2,	// (0x00038e3c) call2_cli_visual_text_pane

0x4ab5,	// (0x000337ff) smil_status_volume_pane_g3

0x0002,

0xa467,	// (0x000391b1) call2_cli_visual_graphic_pane_g1

0xa467,	// (0x000391b1) call2_cli_visual_graphic_pane_g2

0xa467,	// (0x000391b1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0003e2b6) call2_cli_visual_graphic_pane_g

0xc185,	// (0x0003aecf) bg_popup_call2_rect_pane_g1

0xa505,	// (0x0003924f) bg_popup_call2_rect_pane_g2

0xc18d,	// (0x0003aed7) bg_popup_call2_rect_pane_g3

0xc195,	// (0x0003aedf) bg_popup_call2_rect_pane_g4

0xc19d,	// (0x0003aee7) bg_popup_call2_rect_pane_g5

0xc1a5,	// (0x0003aeef) bg_popup_call2_rect_pane_g6

0xc1ad,	// (0x0003aef7) bg_popup_call2_rect_pane_g7

0xc1b5,	// (0x0003aeff) bg_popup_call2_rect_pane_g8

0xc1bd,	// (0x0003af07) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0003e2bd) bg_popup_call2_rect_pane_g

0xc1c5,	// (0x0003af0f) bg_popup_call2_bubble_pane_g1

0xc1cd,	// (0x0003af17) bg_popup_call2_bubble_pane_g2

0xc1d5,	// (0x0003af1f) bg_popup_call2_bubble_pane_g3

0xc1dd,	// (0x0003af27) bg_popup_call2_bubble_pane_g4

0xc1e5,	// (0x0003af2f) bg_popup_call2_bubble_pane_g5

0xc1ed,	// (0x0003af37) bg_popup_call2_bubble_pane_g6

0xc1f5,	// (0x0003af3f) bg_popup_call2_bubble_pane_g7

0xc1fd,	// (0x0003af47) bg_popup_call2_bubble_pane_g8

0xc205,	// (0x0003af4f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0003e2d0) bg_popup_call2_bubble_pane_g

0x165e,	// (0x000303a8) aid_cale_week_size_cell_pane

0x1d65,	// (0x00030aaf) aid_cams_cif_uncrop_pane_ParamLimits

0x1d65,	// (0x00030aaf) aid_cams_cif_uncrop_pane

0x1f1e,	// (0x00030c68) aid_cams_size_cell_ParamLimits

0x1f1e,	// (0x00030c68) aid_cams_size_cell

0x1f32,	// (0x00030c7c) grid_cams_pane_ParamLimits

0x1f4c,	// (0x00030c96) linegrid_cams_pane_ParamLimits

0x212c,	// (0x00030e76) call_video_pane_t1

0x2146,	// (0x00030e90) call_video_pane_t2

0x0001,

0xf273,	// (0x0003dfbd) call_video_pane_t

0x257a,	// (0x000312c4) aid_cale_month_size_cell_pane_ParamLimits

0x257a,	// (0x000312c4) aid_cale_month_size_cell_pane

0xf610,	// (0x0003e35a) smil_status_volume_pane_g

0x4ac2,	// (0x0003380c) volume_smil_pane_ParamLimits

0x9c82,	// (0x000389cc) aid_popup2_width_pane

0x1566,	// (0x000302b0) cell_qdial_pane_g4_ParamLimits

0x1566,	// (0x000302b0) cell_qdial_pane_g4

0x363d,	// (0x00032387) aid_blid_cardinal_pane_ParamLimits

0x3649,	// (0x00032393) aid_blid_destination_pane_ParamLimits

0x3649,	// (0x00032393) aid_blid_destination_pane

0xa34d,	// (0x00039097) bg_popup_call_poc_act_pane_ParamLimits

0xa34d,	// (0x00039097) bg_popup_call_poc_act_pane

0xa34d,	// (0x00039097) bg_popup_call_poc_inact_pane_ParamLimits

0xa34d,	// (0x00039097) bg_popup_call_poc_inact_pane

0xc20d,	// (0x0003af57) bg_popup_call_poc_act_pane_g1

0xc215,	// (0x0003af5f) bg_popup_call_poc_act_pane_g2

0xc21d,	// (0x0003af67) bg_popup_call_poc_act_pane_g3

0xc1dd,	// (0x0003af27) bg_popup_call_poc_act_pane_g4

0xc1e5,	// (0x0003af2f) bg_popup_call_poc_act_pane_g5

0xc225,	// (0x0003af6f) bg_popup_call_poc_act_pane_g6

0xc1f5,	// (0x0003af3f) bg_popup_call_poc_act_pane_g7

0xc22d,	// (0x0003af77) bg_popup_call_poc_act_pane_g8

0xa0f2,	// (0x00038e3c) main_usb_pane

0xc396,	// (0x0003b0e0) popup_cale_lunar_info_window

0x240f,	// (0x00031159) im_reading_pane_t1_ParamLimits

0xa6e3,	// (0x0003942d) list_im_pane_ParamLimits

0xa6f4,	// (0x0003943e) scroll_pane_cp07_ParamLimits

0xa0f2,	// (0x00038e3c) grid_highlight_pane_cp012

0xa34d,	// (0x00039097) mup_scale_pane_ParamLimits

0xb108,	// (0x00039e52) main_usb_pane_g1_ParamLimits

0xb108,	// (0x00039e52) main_usb_pane_g1

0x43f2,	// (0x0003313c) main_usb_pane_g2_ParamLimits

0x43f2,	// (0x0003313c) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0003e2fa) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0003e2fa) main_usb_pane_g

0x4408,	// (0x00033152) main_usb_pane_t1_ParamLimits

0x4408,	// (0x00033152) main_usb_pane_t1

0x441a,	// (0x00033164) main_usb_pane_t2_ParamLimits

0x441a,	// (0x00033164) main_usb_pane_t2

0x442c,	// (0x00033176) main_usb_pane_t3_ParamLimits

0x442c,	// (0x00033176) main_usb_pane_t3

0x443e,	// (0x00033188) main_usb_pane_t4_ParamLimits

0x443e,	// (0x00033188) main_usb_pane_t4

0x4453,	// (0x0003319d) main_usb_pane_t5_ParamLimits

0x4453,	// (0x0003319d) main_usb_pane_t5

0x4468,	// (0x000331b2) main_usb_pane_t6_ParamLimits

0x4468,	// (0x000331b2) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0003e2ff) main_usb_pane_t_ParamLimits

0x35de,	// (0x00032328) aid_text_placing

0x35e9,	// (0x00032333) main_location2_pane_t1_ParamLimits

0x35fd,	// (0x00032347) main_location2_pane_t2_ParamLimits

0x3613,	// (0x0003235d) main_location2_pane_t3_ParamLimits

0x3629,	// (0x00032373) main_location2_pane_t4_ParamLimits

0x3629,	// (0x00032373) main_location2_pane_t4

0xf3d4,	// (0x0003e11e) main_location2_pane_t_ParamLimits

0xa389,	// (0x000390d3) find_pinb_pane_g2_ParamLimits

0xa389,	// (0x000390d3) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0003de6c) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0003de6c) find_pinb_pane_g

0xa395,	// (0x000390df) find_pinb_pane_t1_ParamLimits

0xa3a7,	// (0x000390f1) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0003de71) find_pinb_pane_t_ParamLimits

0xa0f2,	// (0x00038e3c) main_call3_pane

0x2b49,	// (0x00031893) cale_month_day_heading_pane_t1_ParamLimits

0x2bcf,	// (0x00031919) cale_month_day_heading_pane_t2_ParamLimits

0x2c60,	// (0x000319aa) cale_month_day_heading_pane_t3_ParamLimits

0x2cf1,	// (0x00031a3b) cale_month_day_heading_pane_t4_ParamLimits

0x2d82,	// (0x00031acc) cale_month_day_heading_pane_t5_ParamLimits

0x2e23,	// (0x00031b6d) cale_month_day_heading_pane_t6_ParamLimits

0x2ec8,	// (0x00031c12) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0003dff5) cale_month_day_heading_pane_t_ParamLimits

0x3190,	// (0x00031eda) smil_status_volume_pane

0x3eaf,	// (0x00032bf9) postcard_address_pane_ParamLimits

0x3eaf,	// (0x00032bf9) postcard_address_pane

0x3ec5,	// (0x00032c0f) postcard_message_pane_ParamLimits

0x3ec5,	// (0x00032c0f) postcard_message_pane

0x43ce,	// (0x00033118) call2_cli_visual_pane_t1_ParamLimits

0x43ce,	// (0x00033118) call2_cli_visual_pane_t1

0x4c7f,	// (0x000339c9) postcard_message_pane_t1_ParamLimits

0x4c7f,	// (0x000339c9) postcard_message_pane_t1

0x4c68,	// (0x000339b2) postcard_address_pane_t1_ParamLimits

0x4c68,	// (0x000339b2) postcard_address_pane_t1

0x4c54,	// (0x0003399e) popup_call3_audio_in_window_ParamLimits

0x4c54,	// (0x0003399e) popup_call3_audio_in_window

0x4ad9,	// (0x00033823) bg_popup_call3_in_pane_ParamLimits

0x4ad9,	// (0x00033823) bg_popup_call3_in_pane

0x4b55,	// (0x0003389f) popup_call3_audio_in_window_g1_ParamLimits

0x4b55,	// (0x0003389f) popup_call3_audio_in_window_g1

0x4b75,	// (0x000338bf) popup_call3_audio_in_window_g2_ParamLimits

0x4b75,	// (0x000338bf) popup_call3_audio_in_window_g2

0x4b95,	// (0x000338df) popup_call3_audio_in_window_g3_ParamLimits

0x4b95,	// (0x000338df) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0003e361) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0003e361) popup_call3_audio_in_window_g

0x4bc6,	// (0x00033910) popup_call3_audio_in_window_t1_ParamLimits

0x4bc6,	// (0x00033910) popup_call3_audio_in_window_t1

0x4c04,	// (0x0003394e) popup_call3_audio_in_window_t2_ParamLimits

0x4c04,	// (0x0003394e) popup_call3_audio_in_window_t2

0x4c42,	// (0x0003398c) popup_call3_audio_in_window_t3_ParamLimits

0x4c42,	// (0x0003398c) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0003e36a) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0003e36a) popup_call3_audio_in_window_t

0xaf14,	// (0x00039c5e) bg_popup_call3_rect_pane

0xc185,	// (0x0003aecf) bg_popup_call3_rect_pane_g1

0xa505,	// (0x0003924f) bg_popup_call3_rect_pane_g2

0xc18d,	// (0x0003aed7) bg_popup_call3_rect_pane_g3

0xc195,	// (0x0003aedf) bg_popup_call3_rect_pane_g4

0xc19d,	// (0x0003aee7) bg_popup_call3_rect_pane_g5

0xc1a5,	// (0x0003aeef) bg_popup_call3_rect_pane_g6

0xc1ad,	// (0x0003aef7) bg_popup_call3_rect_pane_g7

0x3a55,	// (0x0003279f) mup_visualizer_osc_pane

0xafe1,	// (0x00039d2b) mup_visualizer_spec_pane

0x4b09,	// (0x00033853) call3_video_qcif_pane_ParamLimits

0x4b09,	// (0x00033853) call3_video_qcif_pane

0x4b1c,	// (0x00033866) call3_video_qcif_uncrop_pane_ParamLimits

0x4b1c,	// (0x00033866) call3_video_qcif_uncrop_pane

0x4b2c,	// (0x00033876) call3_video_subqcif_pane_ParamLimits

0x4b2c,	// (0x00033876) call3_video_subqcif_pane

0x4b42,	// (0x0003388c) call3_video_subqcif_uncrop_pane_ParamLimits

0x4b42,	// (0x0003388c) call3_video_subqcif_uncrop_pane

0x4bb5,	// (0x000338ff) popup_call3_audio_in_window_g4_ParamLimits

0x4bb5,	// (0x000338ff) popup_call3_audio_in_window_g4

0x4aa4,	// (0x000337ee) mup_spec_half_pane

0x4aad,	// (0x000337f7) mup_spec_half_pane_cp

0xc431,	// (0x0003b17b) mup_osc_middle_pane

0xc43a,	// (0x0003b184) mup_visualizer_osc_pane_g1

0x4a84,	// (0x000337ce) mup_spec_bar_pane_ParamLimits

0x4a84,	// (0x000337ce) mup_spec_bar_pane

0xc41e,	// (0x0003b168) mup_spec_bar_pane_g1

0xc428,	// (0x0003b172) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003e355) mup_spec_bar_pane_g

0x165e,	// (0x000303a8) aid_cale_week_size_cell_pane_ParamLimits

0x1678,	// (0x000303c2) bg_cale_heading_pane_ParamLimits

0xa539,	// (0x00039283) bg_cale_pane_cp01_ParamLimits

0x16a1,	// (0x000303eb) cale_week_corner_pane_ParamLimits

0x16c0,	// (0x0003040a) cale_week_day_heading_pane_ParamLimits

0x16ee,	// (0x00030438) cale_week_scroll_pane_g1_ParamLimits

0x1712,	// (0x0003045c) cale_week_scroll_pane_g2_ParamLimits

0x172a,	// (0x00030474) cale_week_scroll_pane_g3_ParamLimits

0x1742,	// (0x0003048c) cale_week_scroll_pane_g4_ParamLimits

0x175e,	// (0x000304a8) cale_week_scroll_pane_g5_ParamLimits

0x177e,	// (0x000304c8) cale_week_scroll_pane_g6_ParamLimits

0x179e,	// (0x000304e8) cale_week_scroll_pane_g7_ParamLimits

0x17c2,	// (0x0003050c) cale_week_scroll_pane_g8_ParamLimits

0x17e6,	// (0x00030530) cale_week_scroll_pane_g9_ParamLimits

0x1803,	// (0x0003054d) cale_week_scroll_pane_g10_ParamLimits

0x1820,	// (0x0003056a) cale_week_scroll_pane_g11_ParamLimits

0x183d,	// (0x00030587) cale_week_scroll_pane_g12_ParamLimits

0x185a,	// (0x000305a4) cale_week_scroll_pane_g13_ParamLimits

0x1877,	// (0x000305c1) cale_week_scroll_pane_g14_ParamLimits

0x18a0,	// (0x000305ea) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0003defd) cale_week_scroll_pane_g_ParamLimits

0x18c9,	// (0x00030613) cale_week_time_pane_ParamLimits

0x18ed,	// (0x00030637) grid_cale_week_pane_ParamLimits

0xa557,	// (0x000392a1) listscroll_cale_week_pane_t1

0xa569,	// (0x000392b3) scroll_pane_cp08_ParamLimits

0x25e7,	// (0x00031331) cale_month_corner_pane_ParamLimits

0xa914,	// (0x0003965e) cale_month_pane_t1

0x2acf,	// (0x00031819) cale_month_week_pane_ParamLimits

0x339d,	// (0x000320e7) popup_call_status_window_g1_ParamLimits

0x33b1,	// (0x000320fb) popup_call_status_window_g2_ParamLimits

0x33c5,	// (0x0003210f) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0003e0a5) popup_call_status_window_g_ParamLimits

0xacaa,	// (0x000399f4) aid_call2_pane

0x3d19,	// (0x00032a63) msg_header_pane_g1

0x3eaf,	// (0x00032bf9) postcard_address2_pane_ParamLimits

0x3eaf,	// (0x00032bf9) postcard_address2_pane

0x3ec5,	// (0x00032c0f) postcard_message2_pane_ParamLimits

0x3ec5,	// (0x00032c0f) postcard_message2_pane

0x4a34,	// (0x0003377e) message2_row_pane_ParamLimits

0x4a34,	// (0x0003377e) message2_row_pane

0x4a51,	// (0x0003379b) address2_row_pane_ParamLimits

0x4a51,	// (0x0003379b) address2_row_pane

0xc3ec,	// (0x0003b136) postcard_message2_row_pane_g1

0xc3f4,	// (0x0003b13e) postcard_message2_row_pane_t1

0xc3ec,	// (0x0003b136) address2_row_pane_g1

0xc3f4,	// (0x0003b13e) address2_row_pane_t1

0xff44,	// (0x0002ec8e) aid_size_cell_vorec

0xa0f2,	// (0x00038e3c) main_rss_pane

0x4a64,	// (0x000337ae) rss_list_single_pane_ParamLimits

0x4a64,	// (0x000337ae) rss_list_single_pane

0xc402,	// (0x0003b14c) rss_list_single_pane_t1

0xc410,	// (0x0003b15a) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0003e350) rss_list_single_pane_t

0xa0f2,	// (0x00038e3c) main_camera2_pane

0xa0f2,	// (0x00038e3c) main_video2_pane

0x0060,	// (0x0002edaa) cams_zoom_pane_cp2_ParamLimits

0x0060,	// (0x0002edaa) cams_zoom_pane_cp2

0x0077,	// (0x0002edc1) image2_vga_pane_ParamLimits

0x0077,	// (0x0002edc1) image2_vga_pane

0x00bf,	// (0x0002ee09) main_camera2_pane_g1_ParamLimits

0x00bf,	// (0x0002ee09) main_camera2_pane_g1

0x00df,	// (0x0002ee29) main_camera2_pane_g2_ParamLimits

0x00df,	// (0x0002ee29) main_camera2_pane_g2

0x00f6,	// (0x0002ee40) main_camera2_pane_g3_ParamLimits

0x00f6,	// (0x0002ee40) main_camera2_pane_g3

0x010d,	// (0x0002ee57) main_camera2_pane_g4_ParamLimits

0x010d,	// (0x0002ee57) main_camera2_pane_g4

0x0124,	// (0x0002ee6e) main_camera2_pane_g5_ParamLimits

0x0124,	// (0x0002ee6e) main_camera2_pane_g5

0x013b,	// (0x0002ee85) main_camera2_pane_g6_ParamLimits

0x013b,	// (0x0002ee85) main_camera2_pane_g6

0x0152,	// (0x0002ee9c) main_camera2_pane_g7_ParamLimits

0x0152,	// (0x0002ee9c) main_camera2_pane_g7

0x0169,	// (0x0002eeb3) main_camera2_pane_g8_ParamLimits

0x0169,	// (0x0002eeb3) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0003e371) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0003e371) main_camera2_pane_g

0x0197,	// (0x0002eee1) main_camera2_pane_t1_ParamLimits

0x0197,	// (0x0002eee1) main_camera2_pane_t1

0x01cc,	// (0x0002ef16) main_camera2_pane_t2_ParamLimits

0x01cc,	// (0x0002ef16) main_camera2_pane_t2

0x01e9,	// (0x0002ef33) main_camera2_pane_t3_ParamLimits

0x01e9,	// (0x0002ef33) main_camera2_pane_t3

0x0247,	// (0x0002ef91) main_camera2_pane_t4_ParamLimits

0x0247,	// (0x0002ef91) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0003e384) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0003e384) main_camera2_pane_t

0x02d0,	// (0x0002f01a) cams_zoom_pane_cp4_ParamLimits

0x02d0,	// (0x0002f01a) cams_zoom_pane_cp4

0x02e6,	// (0x0002f030) image2_cif_pane_ParamLimits

0x02e6,	// (0x0002f030) image2_cif_pane

0x0311,	// (0x0002f05b) image2_subqcif_pane_ParamLimits

0x0311,	// (0x0002f05b) image2_subqcif_pane

0x032c,	// (0x0002f076) main_video2_pane_g1_ParamLimits

0x032c,	// (0x0002f076) main_video2_pane_g1

0x0346,	// (0x0002f090) main_video2_pane_g2_ParamLimits

0x0346,	// (0x0002f090) main_video2_pane_g2

0x035c,	// (0x0002f0a6) main_video2_pane_g3_ParamLimits

0x035c,	// (0x0002f0a6) main_video2_pane_g3

0x0372,	// (0x0002f0bc) main_video2_pane_g4_ParamLimits

0x0372,	// (0x0002f0bc) main_video2_pane_g4

0x0388,	// (0x0002f0d2) main_video2_pane_g5_ParamLimits

0x0388,	// (0x0002f0d2) main_video2_pane_g5

0x039e,	// (0x0002f0e8) main_video2_pane_g6_ParamLimits

0x039e,	// (0x0002f0e8) main_video2_pane_g6

0x0005,

0xf649,	// (0x0003e393) main_video2_pane_g_ParamLimits

0xf649,	// (0x0003e393) main_video2_pane_g

0x03b8,	// (0x0002f102) main_video2_pane_t1_ParamLimits

0x03b8,	// (0x0002f102) main_video2_pane_t1

0x03dc,	// (0x0002f126) main_video2_pane_t2_ParamLimits

0x03dc,	// (0x0002f126) main_video2_pane_t2

0x042c,	// (0x0002f176) main_video2_pane_t3_ParamLimits

0x042c,	// (0x0002f176) main_video2_pane_t3

0x0002,

0xf656,	// (0x0003e3a0) main_video2_pane_t_ParamLimits

0xf656,	// (0x0003e3a0) main_video2_pane_t

0x4526,	// (0x00033270) call_muted_g2

0x0001,

0xf5f8,	// (0x0003e342) call_muted_g

0xa0f2,	// (0x00038e3c) main_mup2_pane

0x4cc5,	// (0x00033a0f) main_mup2_pane_g1_ParamLimits

0x4cc5,	// (0x00033a0f) main_mup2_pane_g1

0x4cd1,	// (0x00033a1b) main_mup2_pane_g2_ParamLimits

0x4cd1,	// (0x00033a1b) main_mup2_pane_g2

0x4f44,	// (0x00033c8e) main_mup_pane_g13_cp1

0x4f4c,	// (0x00033c96) mup_volume_pane_cp1

0x4cef,	// (0x00033a39) main_mup2_pane_g4_ParamLimits

0x4cef,	// (0x00033a39) main_mup2_pane_g4

0x4d01,	// (0x00033a4b) main_mup2_pane_g5_ParamLimits

0x4d01,	// (0x00033a4b) main_mup2_pane_g5

0x4d13,	// (0x00033a5d) main_mup2_pane_g6_ParamLimits

0x4d13,	// (0x00033a5d) main_mup2_pane_g6

0x4d25,	// (0x00033a6f) main_mup2_pane_g7_ParamLimits

0x4d25,	// (0x00033a6f) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0003e3a7) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0003e3a7) main_mup2_pane_g

0x4d3d,	// (0x00033a87) main_mup2_pane_t1_ParamLimits

0x4d3d,	// (0x00033a87) main_mup2_pane_t1

0x4d53,	// (0x00033a9d) main_mup2_pane_t2_ParamLimits

0x4d53,	// (0x00033a9d) main_mup2_pane_t2

0x4d69,	// (0x00033ab3) main_mup2_pane_t3_ParamLimits

0x4d69,	// (0x00033ab3) main_mup2_pane_t3

0x4d7f,	// (0x00033ac9) main_mup2_pane_t4_ParamLimits

0x4d7f,	// (0x00033ac9) main_mup2_pane_t4

0x4d97,	// (0x00033ae1) main_mup2_pane_t5_ParamLimits

0x4d97,	// (0x00033ae1) main_mup2_pane_t5

0x4daf,	// (0x00033af9) main_mup2_pane_t6_ParamLimits

0x4daf,	// (0x00033af9) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0003e3b6) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0003e3b6) main_mup2_pane_t

0x4ddf,	// (0x00033b29) mup2_visualizer_pane_ParamLimits

0x4ddf,	// (0x00033b29) mup2_visualizer_pane

0x4e0d,	// (0x00033b57) mup_progress_pane_cp_ParamLimits

0x4e0d,	// (0x00033b57) mup_progress_pane_cp

0x4f2f,	// (0x00033c79) mup_volume_pane_cp_ParamLimits

0x4f2f,	// (0x00033c79) mup_volume_pane_cp

0x4e23,	// (0x00033b6d) mup2_visualizer_pane_g1_ParamLimits

0x4e23,	// (0x00033b6d) mup2_visualizer_pane_g1

0xc471,	// (0x0003b1bb) mup2_visualizer_pane_g2_ParamLimits

0xc471,	// (0x0003b1bb) mup2_visualizer_pane_g2

0x4e3a,	// (0x00033b84) mup2_visualizer_pane_g3_ParamLimits

0x4e3a,	// (0x00033b84) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0003e3c3) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0003e3c3) mup2_visualizer_pane_g

0xb251,	// (0x00039f9b) aid_size_cell_fmradio

0x46d6,	// (0x00033420) aid_height_parent_landcape

0xa772,	// (0x000394bc) wml_content_pane_cp

0xa77a,	// (0x000394c4) wml_tabs_pane

0xa783,	// (0x000394cd) popup_wml_miniature_window

0xa78b,	// (0x000394d5) scroll_pane_cp021

0xa79f,	// (0x000394e9) wml_content_pane_comp8

0xa0f2,	// (0x00038e3c) bg_popup_sub_pane_cp05

0xc48f,	// (0x0003b1d9) popup_wml_miniature_window_g1

0xc497,	// (0x0003b1e1) wml_miniature_view_pane

0x4e46,	// (0x00033b90) aid_size_wml_view

0x4e4e,	// (0x00033b98) wml_miniature_view_pane_g1

0x4e57,	// (0x00033ba1) wml_miniature_view_pane_g2

0x4e60,	// (0x00033baa) wml_miniature_view_pane_g3

0x4e68,	// (0x00033bb2) wml_miniature_view_pane_g4

0x4e70,	// (0x00033bba) wml_miniature_view_pane_g5

0x4e78,	// (0x00033bc2) wml_miniature_view_pane_g6

0x4e80,	// (0x00033bca) wml_miniature_view_pane_g7

0x4e88,	// (0x00033bd2) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0003e3ca) wml_miniature_view_pane_g

0xc49f,	// (0x0003b1e9) background_graphic_ParamLimits

0xc49f,	// (0x0003b1e9) background_graphic

0xc4ab,	// (0x0003b1f5) wml_tabs_2_pane

0xc4b4,	// (0x0003b1fe) wml_tabs_3_pane_ParamLimits

0xc4b4,	// (0x0003b1fe) wml_tabs_3_pane

0xc4c6,	// (0x0003b210) wml_tabs_4_pane_ParamLimits

0xc4c6,	// (0x0003b210) wml_tabs_4_pane

0xc4dc,	// (0x0003b226) wml_tabs_5_pane_ParamLimits

0xc4dc,	// (0x0003b226) wml_tabs_5_pane

0xc4f6,	// (0x0003b240) wml_tabs_pane_g2_ParamLimits

0xc4f6,	// (0x0003b240) wml_tabs_pane_g2

0xc50a,	// (0x0003b254) wml_tabs_pane_g3_ParamLimits

0xc50a,	// (0x0003b254) wml_tabs_pane_g3

0x4e90,	// (0x00033bda) wml_tabs_2_active_pane_ParamLimits

0x4e90,	// (0x00033bda) wml_tabs_2_active_pane

0x4ea4,	// (0x00033bee) wml_tabs_2_passive_pane_ParamLimits

0x4ea4,	// (0x00033bee) wml_tabs_2_passive_pane

0x4eb8,	// (0x00033c02) wml_tabs_3_active_pane_cp_ParamLimits

0x4eb8,	// (0x00033c02) wml_tabs_3_active_pane_cp

0x4ecd,	// (0x00033c17) wml_tabs_3_passive_pane_ParamLimits

0x4ecd,	// (0x00033c17) wml_tabs_3_passive_pane

0x4ee0,	// (0x00033c2a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ee0,	// (0x00033c2a) wml_tabs_3_passive_pane_cp

0x4ef7,	// (0x00033c41) tabs_4_active_pane

0x4eff,	// (0x00033c49) tabs_4_passive_pane

0x4f09,	// (0x00033c53) tabs_4_passive_pane_cp

0x4f11,	// (0x00033c5b) tabs_4_passive_pane_cp2

0x43ea,	// (0x00033134) aid_height_text

0x3a27,	// (0x00032771) mup_volume_cont_pane_ParamLimits

0x3a27,	// (0x00032771) mup_volume_cont_pane

0x12d7,	// (0x00030021) aid_size_cell_pinb

0x12e1,	// (0x0003002b) aid_size_list_pinb

0x4df9,	// (0x00033b43) mup2_volume_cont_pane_ParamLimits

0x4df9,	// (0x00033b43) mup2_volume_cont_pane

0x4f1b,	// (0x00033c65) mup2_volume_cont_pane_g1_ParamLimits

0x4f1b,	// (0x00033c65) mup2_volume_cont_pane_g1

0x0f97,	// (0x0002fce1) aid_size_cell_touch_ParamLimits

0x0f97,	// (0x0002fce1) aid_size_cell_touch

0x11c7,	// (0x0002ff11) touch_pane_ParamLimits

0x11c7,	// (0x0002ff11) touch_pane

0x9c70,	// (0x000389ba) main_rss2_pane

0xc527,	// (0x0003b271) listscroll_rss2_pane

0xc530,	// (0x0003b27a) rss2_navigation_pane

0xc538,	// (0x0003b282) list_rss2_pane

0xadda,	// (0x00039b24) scroll_pane_cp22

0xc540,	// (0x0003b28a) rss2_navigation_pane_g1

0xc549,	// (0x0003b293) rss2_navigation_pane_g2

0xc551,	// (0x0003b29b) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0003e3db) rss2_navigation_pane_g

0xc559,	// (0x0003b2a3) rss2_navigation_pane_t1

0x4f54,	// (0x00033c9e) rss2_list_single_pane_ParamLimits

0x4f54,	// (0x00033c9e) rss2_list_single_pane

0xc567,	// (0x0003b2b1) rss2_list_single_pane_t2

0xc575,	// (0x0003b2bf) rss2_list_single_pane_t3_ParamLimits

0xc575,	// (0x0003b2bf) rss2_list_single_pane_t3

0xc592,	// (0x0003b2dc) rss2_list_single_pane_t4

0x3178,	// (0x00031ec2) smil_status_pane_g1

0x9cd1,	// (0x00038a1b) main_image2_pane_ParamLimits

0x9cd1,	// (0x00038a1b) main_image2_pane

0x0180,	// (0x0002eeca) main_camera2_pane_g9_ParamLimits

0x0180,	// (0x0002eeca) main_camera2_pane_g9

0x029c,	// (0x0002efe6) main_camera2_pane_t5_ParamLimits

0x029c,	// (0x0002efe6) main_camera2_pane_t5

0x4c9a,	// (0x000339e4) main_camera2_pane_t6_ParamLimits

0x4c9a,	// (0x000339e4) main_camera2_pane_t6

0x4f6a,	// (0x00033cb4) main_image2_pane_g1_ParamLimits

0x4f6a,	// (0x00033cb4) main_image2_pane_g1

0x4104,	// (0x00032e4e) smil2_video_pane_ParamLimits

0x4104,	// (0x00032e4e) smil2_video_pane

0x9c8e,	// (0x000389d8) aid_zoom_text_primary_cp

0x9cc7,	// (0x00038a11) popup_preview_fixed_window

0xa6db,	// (0x00039425) im_reading_pane_g1

0x0052,	// (0x0002ed9c) cams2_bc_adjust_pane_cp_ParamLimits

0x0052,	// (0x0002ed9c) cams2_bc_adjust_pane_cp

0x02c2,	// (0x0002f00c) cams2_bc_adjust_pane_ParamLimits

0x02c2,	// (0x0002f00c) cams2_bc_adjust_pane

0xd0d1,	// (0x0003be1b) cams2_bc_adjust_pane_g1

0x4f80,	// (0x00033cca) cams2_slider_pane

0x4f89,	// (0x00033cd3) cams2_slider_pane_g1

0x4f92,	// (0x00033cdc) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0003e3e2) cams2_slider_pane_g

0xfc4e,	// (0x0002e998) calc_display_pane_ParamLimits

0xfc76,	// (0x0002e9c0) calc_paper_pane_ParamLimits

0xfc99,	// (0x0002e9e3) grid_calc_pane_ParamLimits

0x3427,	// (0x00032171) popup_clock_digital_window_t1_ParamLimits

0xb1ee,	// (0x00039f38) main_image_pane_t1

0xfc30,	// (0x0002e97a) aid_size_cell_calc_ParamLimits

0xfc30,	// (0x0002e97a) aid_size_cell_calc

0x471c,	// (0x00033466) popup_blid_sat_info2_window_ParamLimits

0x471c,	// (0x00033466) popup_blid_sat_info2_window

0xc5a8,	// (0x0003b2f2) aid_size_cell_blid

0xc5b0,	// (0x0003b2fa) bg_popup_window_pane_cp07

0xc5d3,	// (0x0003b31d) grid_popup_blid_pane

0xc5dd,	// (0x0003b327) heading_pane_cp05_ParamLimits

0xc5dd,	// (0x0003b327) heading_pane_cp05

0xc6a7,	// (0x0003b3f1) cell_popup_blid_pane_ParamLimits

0xc6a7,	// (0x0003b3f1) cell_popup_blid_pane

0xc6d1,	// (0x0003b41b) cell_popup_blid_pane_g1

0xc6d9,	// (0x0003b423) cell_popup_blid_pane_t1

0x4dc9,	// (0x00033b13) mup2_indicator_pane_ParamLimits

0x4dc9,	// (0x00033b13) mup2_indicator_pane

0xaf14,	// (0x00039c5e) mup2_visualizer_osc_pane

0xc47d,	// (0x0003b1c7) mup2_visualizer_spec_pane_ParamLimits

0xc47d,	// (0x0003b1c7) mup2_visualizer_spec_pane

0x4fac,	// (0x00033cf6) mup2_spec_half_pane

0x4fb5,	// (0x00033cff) mup2_spec_half_pane_cp

0x4fbd,	// (0x00033d07) mup2_spec_bar_pane_ParamLimits

0x4fbd,	// (0x00033d07) mup2_spec_bar_pane

0xc41e,	// (0x0003b168) mup2_spec_bar_pane_g1

0xc428,	// (0x0003b172) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0003e355) mup2_spec_bar_pane_g

0x4fdd,	// (0x00033d27) mup2_osc_middle_pane

0xc43a,	// (0x0003b184) mup2_visualizer_osc_pane_g1

0x9cff,	// (0x00038a49) popup_number_entry_window_t1_ParamLimits

0x9d12,	// (0x00038a5c) popup_number_entry_window_t2_ParamLimits

0x9d24,	// (0x00038a6e) popup_number_entry_window_t3_ParamLimits

0x1219,	// (0x0002ff63) popup_number_entry_window_t5_ParamLimits

0x1219,	// (0x0002ff63) popup_number_entry_window_t5

0xf0cd,	// (0x0003de17) popup_number_entry_window_t_ParamLimits

0x9d36,	// (0x00038a80) text_title_cp2_ParamLimits

0x3d68,	// (0x00032ab2) aid_hotspot_pointer_text2_pane

0x3dca,	// (0x00032b14) main_viewer_pane_g9_ParamLimits

0x3dca,	// (0x00032b14) main_viewer_pane_g9

0xa914,	// (0x0003965e) cale_month_pane_t1_ParamLimits

0xa93a,	// (0x00039684) bg_cale_pane_ParamLimits

0xa952,	// (0x0003969c) list_cale_pane_ParamLimits

0xa963,	// (0x000396ad) listscroll_cale_day_pane_t1

0xa975,	// (0x000396bf) scroll_pane_cp09_ParamLimits

0x3a5d,	// (0x000327a7) main_mup_eq_pane_t1_ParamLimits

0x3a5d,	// (0x000327a7) main_mup_eq_pane_t1

0x3a79,	// (0x000327c3) main_mup_eq_pane_t2_ParamLimits

0x3a79,	// (0x000327c3) main_mup_eq_pane_t2

0x3a95,	// (0x000327df) main_mup_eq_pane_t3_ParamLimits

0x3a95,	// (0x000327df) main_mup_eq_pane_t3

0x3ab3,	// (0x000327fd) main_mup_eq_pane_t4_ParamLimits

0x3ab3,	// (0x000327fd) main_mup_eq_pane_t4

0x3ad1,	// (0x0003281b) main_mup_eq_pane_t5_ParamLimits

0x3ad1,	// (0x0003281b) main_mup_eq_pane_t5

0x3aef,	// (0x00032839) main_mup_eq_pane_t6_ParamLimits

0x3aef,	// (0x00032839) main_mup_eq_pane_t6

0x3b05,	// (0x0003284f) main_mup_eq_pane_t7_ParamLimits

0x3b05,	// (0x0003284f) main_mup_eq_pane_t7

0x3b1b,	// (0x00032865) main_mup_eq_pane_t8_ParamLimits

0x3b1b,	// (0x00032865) main_mup_eq_pane_t8

0x3b31,	// (0x0003287b) main_mup_eq_pane_t9_ParamLimits

0x3b31,	// (0x0003287b) main_mup_eq_pane_t9

0x3b4d,	// (0x00032897) main_mup_eq_pane_t10_ParamLimits

0x3b4d,	// (0x00032897) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0003e1a4) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0003e1a4) main_mup_eq_pane_t

0x3c22,	// (0x0003296c) mup_equalizer_pane_cp5_ParamLimits

0x3c3a,	// (0x00032984) mup_equalizer_pane_cp6_ParamLimits

0x3c52,	// (0x0003299c) mup_equalizer_pane_cp7_ParamLimits

0x9c70,	// (0x000389ba) main_gallery_pane

0xc443,	// (0x0003b18d) smil2_volume_pane

0xc44b,	// (0x0003b195) smil_status_volume_pane_g1_ParamLimits

0xc45e,	// (0x0003b1a8) smil_status_volume_pane_g2_ParamLimits

0x4ab5,	// (0x000337ff) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0003e35a) smil_status_volume_pane_g_ParamLimits

0xc5b0,	// (0x0003b2fa) bg_popup_window_pane_cp07_ParamLimits

0xc5be,	// (0x0003b308) blid_firmament_pane

0x4fe6,	// (0x00033d30) aid_size_cell_gallery_ParamLimits

0x4fe6,	// (0x00033d30) aid_size_cell_gallery

0x4ffc,	// (0x00033d46) grid_gallery_pane_ParamLimits

0x4ffc,	// (0x00033d46) grid_gallery_pane

0x5017,	// (0x00033d61) cell_gallery_pane_ParamLimits

0x5017,	// (0x00033d61) cell_gallery_pane

0xc6e7,	// (0x0003b431) bg_cell_gallery_focus_pane_ParamLimits

0xc6e7,	// (0x0003b431) bg_cell_gallery_focus_pane

0xc6f9,	// (0x0003b443) cell_gallery_pane_g1_ParamLimits

0xc6f9,	// (0x0003b443) cell_gallery_pane_g1

0x5062,	// (0x00033dac) cell_gallery_pane_g2_ParamLimits

0x5062,	// (0x00033dac) cell_gallery_pane_g2

0x506f,	// (0x00033db9) cell_gallery_pane_g3_ParamLimits

0x506f,	// (0x00033db9) cell_gallery_pane_g3

0xc705,	// (0x0003b44f) cell_gallery_pane_g4_ParamLimits

0xc705,	// (0x0003b44f) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0003e408) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0003e408) cell_gallery_pane_g

0xc711,	// (0x0003b45b) bg_cell_gallery_focus_pane_g1

0xc719,	// (0x0003b463) bg_cell_gallery_focus_pane_g2

0xc721,	// (0x0003b46b) bg_cell_gallery_focus_pane_g3

0xc729,	// (0x0003b473) bg_cell_gallery_focus_pane_g4

0xc731,	// (0x0003b47b) bg_cell_gallery_focus_pane_g5

0xc739,	// (0x0003b483) bg_cell_gallery_focus_pane_g6

0xc741,	// (0x0003b48b) bg_cell_gallery_focus_pane_g7

0xc749,	// (0x0003b493) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0003e411) bg_cell_gallery_focus_pane_g

0xc751,	// (0x0003b49b) aid_firma_cardinal

0xc765,	// (0x0003b4af) blid_firmament_pane_t1

0xc77c,	// (0x0003b4c6) blid_firmament_pane_t2

0xc793,	// (0x0003b4dd) blid_firmament_pane_t3

0xc7aa,	// (0x0003b4f4) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0003e422) blid_firmament_pane_t

0xc7c1,	// (0x0003b50b) blid_sat_info_pane

0xc7d1,	// (0x0003b51b) blid_sat_info_pane_g1

0xc7d1,	// (0x0003b51b) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0003e42b) blid_sat_info_pane_g

0xc7db,	// (0x0003b525) blid_sat_info_pane_t1

0xc7e9,	// (0x0003b533) smil2_volume_content_pane

0xc7f2,	// (0x0003b53c) smil2_volume_pane_g1

0xc7fa,	// (0x0003b544) smil2_volume_content_pane_g1

0xc803,	// (0x0003b54d) smil2_volume_content_pane_g2

0xc80c,	// (0x0003b556) smil2_volume_content_pane_g3

0xc815,	// (0x0003b55f) smil2_volume_content_pane_g4

0xc81e,	// (0x0003b568) smil2_volume_content_pane_g5

0xc827,	// (0x0003b571) smil2_volume_content_pane_g6

0xc830,	// (0x0003b57a) smil2_volume_content_pane_g7

0xc839,	// (0x0003b583) smil2_volume_content_pane_g8

0xc842,	// (0x0003b58c) smil2_volume_content_pane_g9

0xc84b,	// (0x0003b595) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0003e430) smil2_volume_content_pane_g

0x19b4,	// (0x000306fe) cale_week_day_heading_pane_t1_ParamLimits

0x19fe,	// (0x00030748) cale_week_day_heading_pane_t2_ParamLimits

0x1a4d,	// (0x00030797) cale_week_day_heading_pane_t3_ParamLimits

0x1a9c,	// (0x000307e6) cale_week_day_heading_pane_t4_ParamLimits

0x1aeb,	// (0x00030835) cale_week_day_heading_pane_t5_ParamLimits

0x1b3e,	// (0x00030888) cale_week_day_heading_pane_t6_ParamLimits

0x1b95,	// (0x000308df) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0003df1c) cale_week_day_heading_pane_t_ParamLimits

0xa58b,	// (0x000392d5) bg_cale_side_pane_ParamLimits

0xfd6e,	// (0x0002eab8) cale_week_time_pane_t1_ParamLimits

0xfda8,	// (0x0002eaf2) cale_week_time_pane_t2_ParamLimits

0xfde2,	// (0x0002eb2c) cale_week_time_pane_t3_ParamLimits

0xfe1c,	// (0x0002eb66) cale_week_time_pane_t4_ParamLimits

0xfe56,	// (0x0002eba0) cale_week_time_pane_t5_ParamLimits

0xfe90,	// (0x0002ebda) cale_week_time_pane_t6_ParamLimits

0xfeca,	// (0x0002ec14) cale_week_time_pane_t7_ParamLimits

0xff04,	// (0x0002ec4e) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0003df2b) cale_week_time_pane_t_ParamLimits

0x1bdf,	// (0x00030929) cell_cale_week_pane_g2_ParamLimits

0xa58b,	// (0x000392d5) bg_cale_side_pane_cp01_ParamLimits

0x2f71,	// (0x00031cbb) cale_month_week_pane_t1_ParamLimits

0x2f8a,	// (0x00031cd4) cale_month_week_pane_t2_ParamLimits

0x2fa3,	// (0x00031ced) cale_month_week_pane_t3_ParamLimits

0x2fbc,	// (0x00031d06) cale_month_week_pane_t4_ParamLimits

0x2fd5,	// (0x00031d1f) cale_month_week_pane_t5_ParamLimits

0x2fee,	// (0x00031d38) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0003e004) cale_month_week_pane_t_ParamLimits

0x3161,	// (0x00031eab) cell_cale_month_pane_g1_ParamLimits

0x9c70,	// (0x000389ba) main_cale_event_viewer_pane

0x9c70,	// (0x000389ba) listscroll_cale_event_viewer_pane

0xc854,	// (0x0003b59e) list_cale_ev_pane

0xc85c,	// (0x0003b5a6) scroll_pane_cp023

0x507c,	// (0x00033dc6) field_cale_ev_pane_ParamLimits

0x507c,	// (0x00033dc6) field_cale_ev_pane

0xc868,	// (0x0003b5b2) field_cale_ev_content_pane_ParamLimits

0xc868,	// (0x0003b5b2) field_cale_ev_content_pane

0xc874,	// (0x0003b5be) field_cale_ev_pane_g1_ParamLimits

0xc874,	// (0x0003b5be) field_cale_ev_pane_g1

0xc880,	// (0x0003b5ca) field_cale_ev_pane_g2_ParamLimits

0xc880,	// (0x0003b5ca) field_cale_ev_pane_g2

0xc898,	// (0x0003b5e2) field_cale_ev_pane_g3_ParamLimits

0xc898,	// (0x0003b5e2) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0003e445) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0003e445) field_cale_ev_pane_g

0xc8b0,	// (0x0003b5fa) field_cale_ev_pane_t1_ParamLimits

0xc8b0,	// (0x0003b5fa) field_cale_ev_pane_t1

0x50a0,	// (0x00033dea) field_cale_ev_content_pane_t1_ParamLimits

0x50a0,	// (0x00033dea) field_cale_ev_content_pane_t1

0x3d0e,	// (0x00032a58) bg_button_pane_cp01

0x1642,	// (0x0003038c) listscroll_cale_week_pane_ParamLimits

0x1654,	// (0x0003039e) popup_toolbar_window_cp01

0xa557,	// (0x000392a1) listscroll_cale_week_pane_t1_ParamLimits

0x1642,	// (0x0003038c) listscroll_cale_day_pane_ParamLimits

0x1654,	// (0x0003039e) popup_toolbar_window_cp02

0xa963,	// (0x000396ad) listscroll_cale_day_pane_t1_ParamLimits

0x1642,	// (0x0003038c) main_cale_month_pane_ParamLimits

0x499c,	// (0x000336e6) popup_toolbar_window_cp03_ParamLimits

0x499c,	// (0x000336e6) popup_toolbar_window_cp03

0x3fc2,	// (0x00032d0c) main_image_pane_g2_ParamLimits

0x3fc2,	// (0x00032d0c) main_image_pane_g2

0x3fd3,	// (0x00032d1d) main_image_pane_g3_ParamLimits

0x3fd3,	// (0x00032d1d) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0003e236) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0003e236) main_image_pane_g

0xb1ee,	// (0x00039f38) main_image_pane_t1_ParamLimits

0x3fe4,	// (0x00032d2e) main_image_pane_t2_ParamLimits

0x3fe4,	// (0x00032d2e) main_image_pane_t2

0x3ff6,	// (0x00032d40) main_image_pane_t3_ParamLimits

0x3ff6,	// (0x00032d40) main_image_pane_t3

0x401e,	// (0x00032d68) main_image_pane_t4_ParamLimits

0x401e,	// (0x00032d68) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0003e23d) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0003e23d) main_image_pane_t

0x403e,	// (0x00032d88) popup_image_details_window_cp01

0x4048,	// (0x00032d92) popup_toobar_trans_pane_cp01_ParamLimits

0x4048,	// (0x00032d92) popup_toobar_trans_pane_cp01

0x480f,	// (0x00033559) popup_image_details_window_ParamLimits

0x480f,	// (0x00033559) popup_image_details_window

0xc3a2,	// (0x0003b0ec) popup_image_focus_window

0x000c,	// (0x0002ed56) camera2_autofocus_pane_ParamLimits

0x000c,	// (0x0002ed56) camera2_autofocus_pane

0x9c70,	// (0x000389ba) bg_popup_sub_pane_cp06

0xc8c7,	// (0x0003b611) popup_image_focus_window_g1

0xc8cf,	// (0x0003b619) popup_image_focus_window_g2

0xc8d7,	// (0x0003b621) popup_image_focus_window_g3

0xc8df,	// (0x0003b629) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0003e44c) popup_image_focus_window_g

0xc8e7,	// (0x0003b631) popup_image_focus_window_t1

0xc8f5,	// (0x0003b63f) popup_image_focus_window_t2

0xc905,	// (0x0003b64f) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0003e455) popup_image_focus_window_t

0xc913,	// (0x0003b65d) camera2_autofocus_pane_g1

0x9cd1,	// (0x00038a1b) bg_tb_trans_pane_cp01

0xc921,	// (0x0003b66b) popup_image_details_window_g1

0xc934,	// (0x0003b67e) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0003e467) popup_image_details_window_g

0xc95d,	// (0x0003b6a7) popup_image_details_window_t1

0xc96f,	// (0x0003b6b9) popup_image_details_window_t2

0xc988,	// (0x0003b6d2) popup_image_details_window_t3

0xc99c,	// (0x0003b6e6) popup_image_details_window_t4

0xc9b7,	// (0x0003b701) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0003e46e) popup_image_details_window_t

0xa3fe,	// (0x00039148) bg_calc_paper_pane_ParamLimits

0x148d,	// (0x000301d7) grid_highlight_pane_cp013

0x1497,	// (0x000301e1) list_calc_pane_ParamLimits

0x14a9,	// (0x000301f3) scroll_pane_cp024

0xa412,	// (0x0003915c) bg_calc_display_pane_ParamLimits

0xfcc7,	// (0x0002ea11) calc_display_pane_t1_ParamLimits

0xfcd9,	// (0x0002ea23) calc_display_pane_t2_ParamLimits

0x14b1,	// (0x000301fb) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0003de9e) calc_display_pane_t_ParamLimits

0xfd42,	// (0x0002ea8c) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0003debb) cell_calc_pane_g

0xfd4b,	// (0x0002ea95) cell_calc_pane_t1

0xa471,	// (0x000391bb) grid_highlight_pane_cp02_ParamLimits

0xa487,	// (0x000391d1) toolbar_button_pane_cp01_ParamLimits

0xa487,	// (0x000391d1) toolbar_button_pane_cp01

0xb233,	// (0x00039f7d) temp_image_control_pane_ParamLimits

0xb233,	// (0x00039f7d) temp_image_control_pane

0x9cd1,	// (0x00038a1b) main_mp3_pane

0xc9d1,	// (0x0003b71b) temp_image_control_pane_g1_ParamLimits

0xc9d1,	// (0x0003b71b) temp_image_control_pane_g1

0xc9df,	// (0x0003b729) temp_image_control_pane_g2_ParamLimits

0xc9df,	// (0x0003b729) temp_image_control_pane_g2

0xc9f1,	// (0x0003b73b) temp_image_control_pane_g3_ParamLimits

0xc9f1,	// (0x0003b73b) temp_image_control_pane_g3

0x50f1,	// (0x00033e3b) temp_image_control_pane_g4_ParamLimits

0x50f1,	// (0x00033e3b) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0003e479) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0003e479) temp_image_control_pane_g

0xc9d1,	// (0x0003b71b) main_mp3_pane_g1

0x5104,	// (0x00033e4e) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0003e482) main_mp3_pane_g

0xca34,	// (0x0003b77e) main_mp3_pane_t1

0xa5e6,	// (0x00039330) main_camera_pane_g8_ParamLimits

0xa5e6,	// (0x00039330) main_camera_pane_g8

0x1ec4,	// (0x00030c0e) main_video_pane_g7_ParamLimits

0x1ec4,	// (0x00030c0e) main_video_pane_g7

0x4cb3,	// (0x000339fd) main_camera2_pane_t7_ParamLimits

0x4cb3,	// (0x000339fd) main_camera2_pane_t7

0xa732,	// (0x0003947c) scroll_pane_cp025_ParamLimits

0xa732,	// (0x0003947c) scroll_pane_cp025

0xa746,	// (0x00039490) scroll_pane_cp026_ParamLimits

0xa746,	// (0x00039490) scroll_pane_cp026

0xa755,	// (0x0003949f) wml_content_pane_ParamLimits

0x9c70,	// (0x000389ba) main_touch_calib_pane

0x51d6,	// (0x00033f20) main_touch_calib_pane_g1

0x51e8,	// (0x00033f32) main_touch_calib_pane_g2

0x51fa,	// (0x00033f44) main_touch_calib_pane_g3

0x520c,	// (0x00033f56) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0003e4a0) main_touch_calib_pane_g

0x521e,	// (0x00033f68) main_touch_calib_pane_t1

0x5238,	// (0x00033f82) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0003e4a9) main_touch_calib_pane_t

0xae55,	// (0x00039b9f) mup_progress_pane_cp02

0xae74,	// (0x00039bbe) navi_pane_g1

0xaed6,	// (0x00039c20) navi_pane_mp_t3

0x9cd1,	// (0x00038a1b) main_mp3_pane_ParamLimits

0x49de,	// (0x00033728) navi_pane_ParamLimits

0xc9d1,	// (0x0003b71b) main_mp3_pane_g1_ParamLimits

0x5104,	// (0x00033e4e) main_mp3_pane_g2_ParamLimits

0x5110,	// (0x00033e5a) main_mp3_pane_g3_ParamLimits

0x5110,	// (0x00033e5a) main_mp3_pane_g3

0x511e,	// (0x00033e68) main_mp3_pane_g4_ParamLimits

0x511e,	// (0x00033e68) main_mp3_pane_g4

0xca01,	// (0x0003b74b) main_mp3_pane_g5_ParamLimits

0xca01,	// (0x0003b74b) main_mp3_pane_g5

0xca0f,	// (0x0003b759) main_mp3_pane_g6_ParamLimits

0xca0f,	// (0x0003b759) main_mp3_pane_g6

0xca1c,	// (0x0003b766) main_mp3_pane_g7_ParamLimits

0xca1c,	// (0x0003b766) main_mp3_pane_g7

0xca28,	// (0x0003b772) main_mp3_pane_g8_ParamLimits

0xca28,	// (0x0003b772) main_mp3_pane_g8

0xf738,	// (0x0003e482) main_mp3_pane_g_ParamLimits

0x512a,	// (0x00033e74) main_mp3_pane_t2

0x5138,	// (0x00033e82) main_mp3_pane_t3

0xca42,	// (0x0003b78c) main_mp3_pane_t4

0xca50,	// (0x0003b79a) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0003e493) main_mp3_pane_t

0xca5e,	// (0x0003b7a8) mup_progress_pane_cp01

0x9c8e,	// (0x000389d8) aid_zoom_text_secondary2

0xc854,	// (0x0003b59e) list_cale_ev2_pane

0xc85c,	// (0x0003b5a6) scroll_pane_cp023_ParamLimits

0x5292,	// (0x00033fdc) field_cale_ev2_pane_ParamLimits

0x5292,	// (0x00033fdc) field_cale_ev2_pane

0x52b6,	// (0x00034000) field_cale_ev2_pane_g1_ParamLimits

0x52b6,	// (0x00034000) field_cale_ev2_pane_g1

0x52c2,	// (0x0003400c) field_cale_ev2_pane_g2_ParamLimits

0x52c2,	// (0x0003400c) field_cale_ev2_pane_g2

0x52da,	// (0x00034024) field_cale_ev2_pane_g3_ParamLimits

0x52da,	// (0x00034024) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0003e4b4) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0003e4b4) field_cale_ev2_pane_g

0x52f2,	// (0x0003403c) field_cale_ev2_pane_t1_ParamLimits

0x52f2,	// (0x0003403c) field_cale_ev2_pane_t1

0x5309,	// (0x00034053) field_cale_ev2_pane_t2_ParamLimits

0x5309,	// (0x00034053) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0003e4bd) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0003e4bd) field_cale_ev2_pane_t

0x3e5f,	// (0x00032ba9) main_postcard_pane_g5_ParamLimits

0x3e5f,	// (0x00032ba9) main_postcard_pane_g5

0x3e75,	// (0x00032bbf) main_postcard_pane_g6_ParamLimits

0x3e75,	// (0x00032bbf) main_postcard_pane_g6

0x1c70,	// (0x000309ba) camera2_autofocus_pane_cp_ParamLimits

0x1c70,	// (0x000309ba) camera2_autofocus_pane_cp

0x9cd1,	// (0x00038a1b) main_mup3_pane

0x533e,	// (0x00034088) main_mup3_pane_g1_ParamLimits

0x533e,	// (0x00034088) main_mup3_pane_g1

0x5360,	// (0x000340aa) main_mup3_pane_g2_ParamLimits

0x5360,	// (0x000340aa) main_mup3_pane_g2

0x53e3,	// (0x0003412d) main_mup3_pane_g3_ParamLimits

0x53e3,	// (0x0003412d) main_mup3_pane_g3

0x542b,	// (0x00034175) main_mup3_pane_g4_ParamLimits

0x542b,	// (0x00034175) main_mup3_pane_g4

0x5471,	// (0x000341bb) main_mup3_pane_g5_ParamLimits

0x5471,	// (0x000341bb) main_mup3_pane_g5

0x54b9,	// (0x00034203) main_mup3_pane_g6_ParamLimits

0x54b9,	// (0x00034203) main_mup3_pane_g6

0xca72,	// (0x0003b7bc) main_mup3_pane_g7_ParamLimits

0xca72,	// (0x0003b7bc) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0003e4cd) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0003e4cd) main_mup3_pane_g

0x5539,	// (0x00034283) main_mup3_pane_t1_ParamLimits

0x5539,	// (0x00034283) main_mup3_pane_t1

0x55a7,	// (0x000342f1) main_mup3_pane_t2_ParamLimits

0x55a7,	// (0x000342f1) main_mup3_pane_t2

0x567d,	// (0x000343c7) main_mup3_pane_t4_ParamLimits

0x567d,	// (0x000343c7) main_mup3_pane_t4

0x56db,	// (0x00034425) main_mup3_pane_t5_ParamLimits

0x56db,	// (0x00034425) main_mup3_pane_t5

0x5795,	// (0x000344df) main_mup3_pane_t6_ParamLimits

0x5795,	// (0x000344df) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0003e4de) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0003e4de) main_mup3_pane_t

0x584d,	// (0x00034597) mup3_progress_pane_ParamLimits

0x584d,	// (0x00034597) mup3_progress_pane

0x58df,	// (0x00034629) popup_mup3_control_window_ParamLimits

0x58df,	// (0x00034629) popup_mup3_control_window

0xca80,	// (0x0003b7ca) popup_mup3_text_window

0x5915,	// (0x0003465f) mup3_progress_pane_t1

0x5933,	// (0x0003467d) mup3_progress_pane_t2

0xca88,	// (0x0003b7d2) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0003e4eb) mup3_progress_pane_t

0xcaa5,	// (0x0003b7ef) mup_progress_pane_cp03

0x9c70,	// (0x000389ba) bg_tb_trans_pane_cp04

0x5951,	// (0x0003469b) mup3_volume_pane

0x5959,	// (0x000346a3) popup_mup3_control_window_g1

0x5962,	// (0x000346ac) mup3_volume_pane_g1

0x596b,	// (0x000346b5) mup3_volume_pane_g2

0x5974,	// (0x000346be) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0003e4f2) mup3_volume_pane_g

0x9c70,	// (0x000389ba) bg_tb_trans_pane_cp03

0xcab5,	// (0x0003b7ff) popup_mup3_text_window_g1

0xcabd,	// (0x0003b807) popup_mup3_text_window_t1

0xa45a,	// (0x000391a4) list_calc_item_pane_g1_ParamLimits

0xc51e,	// (0x0003b268) mup_volume_pane_cp_g1

0x5252,	// (0x00033f9c) main_touch_calib_pane_t3

0x5266,	// (0x00033fb0) main_touch_calib_pane_t4

0x527c,	// (0x00033fc6) main_touch_calib_pane_t5

0x9c7a,	// (0x000389c4) aid_cell_size_toolbar2

0x9c82,	// (0x000389cc) aid_popup3_width_pane

0x9c8e,	// (0x000389d8) aid_zoom_text_msg_primary

0xff9e,	// (0x0002ece8) vorec_t7

0xa41e,	// (0x00039168) bg_calc_paper_pane_g1_ParamLimits

0xa42a,	// (0x00039174) bg_calc_paper_pane_g2_ParamLimits

0xa436,	// (0x00039180) bg_calc_paper_pane_g3_ParamLimits

0xa442,	// (0x0003918c) bg_calc_paper_pane_g4_ParamLimits

0xa44e,	// (0x00039198) bg_calc_paper_pane_g5_ParamLimits

0x14c3,	// (0x0003020d) bg_calc_paper_pane_g6_ParamLimits

0x14d6,	// (0x00030220) bg_calc_paper_pane_g7_ParamLimits

0x14e9,	// (0x00030233) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0003dea5) bg_calc_paper_pane_g_ParamLimits

0x14fa,	// (0x00030244) calc_bg_paper_pane_g9_ParamLimits

0x1dd2,	// (0x00030b1c) image_qvga_pane_ParamLimits

0x1dd2,	// (0x00030b1c) image_qvga_pane

0xa34d,	// (0x00039097) bg_popup_sub_pane_cp04_ParamLimits

0xb16a,	// (0x00039eb4) popup_mup_playback_window_g1_ParamLimits

0xb176,	// (0x00039ec0) popup_mup_playback_window_t1_ParamLimits

0xb18b,	// (0x00039ed5) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0003e231) popup_mup_playback_window_t_ParamLimits

0x4ce1,	// (0x00033a2b) main_mup2_pane_g3_ParamLimits

0x4ce1,	// (0x00033a2b) main_mup2_pane_g3

0x21c5,	// (0x00030f0f) popup_toolbar_window_cp04

0xb586,	// (0x0003a2d0) popup_call2_audio_second_window_g3_ParamLimits

0xb586,	// (0x0003a2d0) popup_call2_audio_second_window_g3

0xb990,	// (0x0003a6da) popup_call2_audio_first_window_g4_ParamLimits

0xb990,	// (0x0003a6da) popup_call2_audio_first_window_g4

0xc00f,	// (0x0003ad59) popup_call2_audio_in_window_g4_ParamLimits

0xc00f,	// (0x0003ad59) popup_call2_audio_in_window_g4

0x3fa4,	// (0x00032cee) aid_area_sk_bg_cut_ParamLimits

0x3fa4,	// (0x00032cee) aid_area_sk_bg_cut

0xb1a0,	// (0x00039eea) aid_area_sk_bg_cut_2_ParamLimits

0xb1a0,	// (0x00039eea) aid_area_sk_bg_cut_2

0x5052,	// (0x00033d9c) aid_placing_details_win

0x505a,	// (0x00033da4) aid_placing_details_win_2

0xc913,	// (0x0003b65d) camera2_autofocus_pane_g1_ParamLimits

0x1160,	// (0x0002feaa) popup_fixed_preview_cale_window_ParamLimits

0x1160,	// (0x0002feaa) popup_fixed_preview_cale_window

0xaf25,	// (0x00039c6f) navi_slider_pane_g3

0xaf2e,	// (0x00039c78) navi_slider_pane_g4

0xaf37,	// (0x00039c81) navi_slider_pane_g5

0xaf25,	// (0x00039c6f) navi_slider_pane_g6

0x3805,	// (0x0003254f) navi_slider_pane_g7

0xb05a,	// (0x00039da4) mup_scale_pane_g3

0xb063,	// (0x00039dad) mup_scale_pane_g4

0xb06c,	// (0x00039db6) mup_scale_pane_g5

0x3c6a,	// (0x000329b4) mup_scale_pane_g6

0x3c73,	// (0x000329bd) mup_scale_pane_g7

0xaf25,	// (0x00039c6f) cams2_slider_pane_g3

0xc5a0,	// (0x0003b2ea) cams2_slider_pane_g4

0x4f9b,	// (0x00033ce5) cams2_slider_pane_g5

0xaf25,	// (0x00039c6f) cams2_slider_pane_g6

0x4fa3,	// (0x00033ced) cams2_slider_pane_g7

0xc7d1,	// (0x0003b51b) camera2_autofocus_pane_cp_g1

0xc374,	// (0x0003b0be) bg_popup_preview_window_pane_cp02_ParamLimits

0xc374,	// (0x0003b0be) bg_popup_preview_window_pane_cp02

0xcacb,	// (0x0003b815) list_fp_cale_pane_ParamLimits

0xcacb,	// (0x0003b815) list_fp_cale_pane

0xcad7,	// (0x0003b821) popup_fixed_preview_cale_window_t1_ParamLimits

0xcad7,	// (0x0003b821) popup_fixed_preview_cale_window_t1

0x597d,	// (0x000346c7) popup_fixed_preview_cale_window_t2_ParamLimits

0x597d,	// (0x000346c7) popup_fixed_preview_cale_window_t2

0x5992,	// (0x000346dc) popup_fixed_preview_cale_window_t3_ParamLimits

0x5992,	// (0x000346dc) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0003e4f9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0003e4f9) popup_fixed_preview_cale_window_t

0x59a7,	// (0x000346f1) list_single_fp_cale_pane_ParamLimits

0x59a7,	// (0x000346f1) list_single_fp_cale_pane

0xcaf5,	// (0x0003b83f) list_single_fp_cale_pane_g1_ParamLimits

0xcaf5,	// (0x0003b83f) list_single_fp_cale_pane_g1

0xcb01,	// (0x0003b84b) list_single_fp_cale_pane_g2_ParamLimits

0xcb01,	// (0x0003b84b) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0003e500) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0003e500) list_single_fp_cale_pane_g

0xcb1a,	// (0x0003b864) list_single_fp_cale_pane_t1_ParamLimits

0xcb1a,	// (0x0003b864) list_single_fp_cale_pane_t1

0xcb2c,	// (0x0003b876) list_single_fp_cale_pane_t2_ParamLimits

0xcb2c,	// (0x0003b876) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0003e507) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0003e507) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c70,	// (0x000389ba) main_dialer_pane

0x59bc,	// (0x00034706) aid_cell_size_keypad

0x59c6,	// (0x00034710) dialer_ne_pane

0x59d0,	// (0x0003471a) grid_dialer_command_1_pane

0x59d8,	// (0x00034722) grid_dialer_command_2_pane

0x59e0,	// (0x0003472a) grid_dialer_keypad_pane

0x59f2,	// (0x0003473c) bg_popup_call_pane_cp06_ParamLimits

0x59f2,	// (0x0003473c) bg_popup_call_pane_cp06

0x59fe,	// (0x00034748) dialer_ne_clear_pane_ParamLimits

0x59fe,	// (0x00034748) dialer_ne_clear_pane

0xcb5f,	// (0x0003b8a9) dialer_ne_pane_g1

0xcb67,	// (0x0003b8b1) dialer_ne_pane_t1_ParamLimits

0xcb67,	// (0x0003b8b1) dialer_ne_pane_t1

0x5a0a,	// (0x00034754) dialer_ne_pane_t2_ParamLimits

0x5a0a,	// (0x00034754) dialer_ne_pane_t2

0x5a34,	// (0x0003477e) dialer_ne_pane_t3_ParamLimits

0x5a34,	// (0x0003477e) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0003e50c) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0003e50c) dialer_ne_pane_t

0x5a64,	// (0x000347ae) dialer_ne_pane_t3_copy1_ParamLimits

0x5a64,	// (0x000347ae) dialer_ne_pane_t3_copy1

0x5a93,	// (0x000347dd) cell_dialer_keypad_pane_ParamLimits

0x5a93,	// (0x000347dd) cell_dialer_keypad_pane

0x5aaa,	// (0x000347f4) cell_dialer_command_1_pane_ParamLimits

0x5aaa,	// (0x000347f4) cell_dialer_command_1_pane

0x5ac0,	// (0x0003480a) cell_dialer_command_2_pane_ParamLimits

0x5ac0,	// (0x0003480a) cell_dialer_command_2_pane

0xcb79,	// (0x0003b8c3) bg_button_pane_cp02_ParamLimits

0xcb79,	// (0x0003b8c3) bg_button_pane_cp02

0x5acf,	// (0x00034819) cell_dialer_keypad_pane_g1_ParamLimits

0x5acf,	// (0x00034819) cell_dialer_keypad_pane_g1

0xcb79,	// (0x0003b8c3) bg_button_pane_cp03_ParamLimits

0xcb79,	// (0x0003b8c3) bg_button_pane_cp03

0x5ae4,	// (0x0003482e) cell_dialer_command_1_pane_g1_ParamLimits

0x5ae4,	// (0x0003482e) cell_dialer_command_1_pane_g1

0xcb85,	// (0x0003b8cf) bg_button_pane_cp04

0x5af8,	// (0x00034842) cell_dialer_command_2_pane_g1

0xaf14,	// (0x00039c5e) bg_button_pane_cp06

0xcb8d,	// (0x0003b8d7) dialer_ne_clear_pane_g1

0x372a,	// (0x00032474) navi_pane_g2

0x3758,	// (0x000324a2) navi_pane_g3

0x0002,

0xf3ea,	// (0x0003e134) navi_pane_g

0x3783,	// (0x000324cd) navi_pane_mv_g2

0x37aa,	// (0x000324f4) navi_pane_mv_g5

0x37b2,	// (0x000324fc) navi_pane_mv_t1

0xa412,	// (0x0003915c) main_clock2_pane

0x5b43,	// (0x0003488d) main_clock2_list_pane_ParamLimits

0x5b43,	// (0x0003488d) main_clock2_list_pane

0x5b7b,	// (0x000348c5) main_clock2_pane_t1_ParamLimits

0x5b7b,	// (0x000348c5) main_clock2_pane_t1

0x5bb7,	// (0x00034901) main_clock2_pane_t2_ParamLimits

0x5bb7,	// (0x00034901) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003e513) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003e513) main_clock2_pane_t

0x5c57,	// (0x000349a1) popup_clock_analogue_window_cp03_ParamLimits

0x5c57,	// (0x000349a1) popup_clock_analogue_window_cp03

0x5c7e,	// (0x000349c8) popup_clock_digital_window_cp02_ParamLimits

0x5c7e,	// (0x000349c8) popup_clock_digital_window_cp02

0x5cf7,	// (0x00034a41) main_clock2_list_single_pane_ParamLimits

0x5cf7,	// (0x00034a41) main_clock2_list_single_pane

0xaf14,	// (0x00039c5e) list_highlight_pane_cp05

0xcba9,	// (0x0003b8f3) main_clock2_list_single_pane_t1

0x21c5,	// (0x00030f0f) popup_toolbar_window_cp04_ParamLimits

0x50c1,	// (0x00033e0b) camera2_autofocus_pane_g2_ParamLimits

0x50c1,	// (0x00033e0b) camera2_autofocus_pane_g2

0x50cd,	// (0x00033e17) camera2_autofocus_pane_g3_ParamLimits

0x50cd,	// (0x00033e17) camera2_autofocus_pane_g3

0x50d9,	// (0x00033e23) camera2_autofocus_pane_g4_ParamLimits

0x50d9,	// (0x00033e23) camera2_autofocus_pane_g4

0x50e5,	// (0x00033e2f) camera2_autofocus_pane_g5_ParamLimits

0x50e5,	// (0x00033e2f) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0003e45c) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0003e45c) camera2_autofocus_pane_g

0x531e,	// (0x00034068) camera2_autofocus_pane_cp_g2

0x5326,	// (0x00034070) camera2_autofocus_pane_cp_g3

0x532e,	// (0x00034078) camera2_autofocus_pane_cp_g4

0x5336,	// (0x00034080) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0003e4c2) camera2_autofocus_pane_cp_g

0x59ea,	// (0x00034734) popup_dialer_spcha_window

0x9c70,	// (0x000389ba) bg_popup_sub_pane_cp07

0xcbb7,	// (0x0003b901) list_spcha_pane

0xcbbf,	// (0x0003b909) list_single_spcha_pane_ParamLimits

0xcbbf,	// (0x0003b909) list_single_spcha_pane

0x9c70,	// (0x000389ba) list_highlight_pane_cp06

0xcbd0,	// (0x0003b91a) list_single_spcha_pane_t1

0xbdb9,	// (0x0003ab03) popup_call2_audio_out_window_g4_ParamLimits

0xbdb9,	// (0x0003ab03) popup_call2_audio_out_window_g4

0x9c70,	// (0x000389ba) main_imed2_pane

0xc3ac,	// (0x0003b0f6) popup_imed_adjust2_window

0x4827,	// (0x00033571) popup_imed_trans_window_ParamLimits

0x4827,	// (0x00033571) popup_imed_trans_window

0xc609,	// (0x0003b353) popup_blid_sat_info2_window_t1

0xc617,	// (0x0003b361) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0003e3f1) popup_blid_sat_info2_window_t

0x5d2b,	// (0x00034a75) aid_size_cell_colour_35

0x5d4b,	// (0x00034a95) aid_size_cell_colour_112

0x5d6b,	// (0x00034ab5) aid_size_cell_effect

0xc380,	// (0x0003b0ca) bg_tb_trans_pane_cp02

0xaa74,	// (0x000397be) heading_imed_pane

0x5d8b,	// (0x00034ad5) listscroll_imed_pane

0xcbde,	// (0x0003b928) heading_imed_pane_g1

0xcbe6,	// (0x0003b930) heading_imed_pane_t1

0xcbf4,	// (0x0003b93e) grid_imed_colour_35_pane_ParamLimits

0xcbf4,	// (0x0003b93e) grid_imed_colour_35_pane

0x5d97,	// (0x00034ae1) grid_imed_effect_pane

0xcc10,	// (0x0003b95a) list_imed_aspect_pane

0x5dac,	// (0x00034af6) scroll_pane_cp027_ParamLimits

0x5dac,	// (0x00034af6) scroll_pane_cp027

0x5dbd,	// (0x00034b07) cell_imed_effect_pane_ParamLimits

0x5dbd,	// (0x00034b07) cell_imed_effect_pane

0xcc18,	// (0x0003b962) cell_imed_colour_pane_ParamLimits

0xcc18,	// (0x0003b962) cell_imed_colour_pane

0xcc62,	// (0x0003b9ac) cell_imed_colour_pane_g1_ParamLimits

0xcc62,	// (0x0003b9ac) cell_imed_colour_pane_g1

0xcc73,	// (0x0003b9bd) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc73,	// (0x0003b9bd) hgihlgiht_grid_pane_cp016

0x5de8,	// (0x00034b32) cell_imed_effect_pane_g1

0x5df0,	// (0x00034b3a) grid_highlight_pane_cp017

0xcc84,	// (0x0003b9ce) list_imed_single_pane_ParamLimits

0xcc84,	// (0x0003b9ce) list_imed_single_pane

0x9c70,	// (0x000389ba) list_highlight_pane_cp07

0xcc98,	// (0x0003b9e2) list_imed_aspect_pane_comp1_t1

0xc380,	// (0x0003b0ca) bg_tb_trans_pane_cp05

0xccba,	// (0x0003ba04) popup_imed_adjust2_window_g1

0xcce1,	// (0x0003ba2b) popup_imed_adjust2_window_t1

0xccf9,	// (0x0003ba43) slider_imed_adjust_pane

0xcd0d,	// (0x0003ba57) slider_imed_adjust_pane_g1

0xcd1d,	// (0x0003ba67) slider_imed_adjust_pane_g2

0xcd2d,	// (0x0003ba77) slider_imed_adjust_pane_g3

0xcd3e,	// (0x0003ba88) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003e530) slider_imed_adjust_pane_g

0x5df9,	// (0x00034b43) aid_size_cell_clipart2

0x5e05,	// (0x00034b4f) grid_imed_clipart_pane

0xcd4f,	// (0x0003ba99) scroll_pane_cp031

0x5e0f,	// (0x00034b59) cell_imed_clipart_pane_ParamLimits

0x5e0f,	// (0x00034b59) cell_imed_clipart_pane

0x5e2c,	// (0x00034b76) cell_imed_clipart_pane_g1

0x9c70,	// (0x000389ba) grid_highlight_pane_cp014

0x5b58,	// (0x000348a2) main_clock2_pane_g1_ParamLimits

0x5b58,	// (0x000348a2) main_clock2_pane_g1

0x5c9e,	// (0x000349e8) aid_call2_pane_cp10

0x5cb0,	// (0x000349fa) aid_call_pane_cp10

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g1

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g2

0x5cc2,	// (0x00034a0c) popup_clock_analogue_window_cp10_g3

0x5cc2,	// (0x00034a0c) popup_clock_analogue_window_cp10_g4

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003e51e) popup_clock_analogue_window_cp10_g

0x5cd8,	// (0x00034a22) popup_clock_analogue_window_cp10_t1

0x0474,	// (0x0002f1be) clock_digital_number_pane_cp10_ParamLimits

0x0474,	// (0x0002f1be) clock_digital_number_pane_cp10

0x048e,	// (0x0002f1d8) clock_digital_number_pane_cp11_ParamLimits

0x048e,	// (0x0002f1d8) clock_digital_number_pane_cp11

0x04a8,	// (0x0002f1f2) clock_digital_number_pane_cp12_ParamLimits

0x04a8,	// (0x0002f1f2) clock_digital_number_pane_cp12

0x04c2,	// (0x0002f20c) clock_digital_number_pane_cp13_ParamLimits

0x04c2,	// (0x0002f20c) clock_digital_number_pane_cp13

0x04dc,	// (0x0002f226) clock_digital_separator_pane_cp10_ParamLimits

0x04dc,	// (0x0002f226) clock_digital_separator_pane_cp10

0x5d09,	// (0x00034a53) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d09,	// (0x00034a53) popup_clock_digital_window_cp02_t1

0xa345,	// (0x0003908f) clock_digital_number_pane_cp10_g1

0xa345,	// (0x0003908f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003e539) clock_digital_number_pane_cp10_g

0xa345,	// (0x0003908f) clock_digital_separator_pane_cp10_g1

0xa345,	// (0x0003908f) clock_digital_separator_pane_g2_cp10

0xaee4,	// (0x00039c2e) navi_pane_vded_g4

0xaeed,	// (0x00039c37) navi_pane_vded_g5

0xaef6,	// (0x00039c40) navi_pane_vded_t1

0x9c70,	// (0x000389ba) main_vded_pane

0x5e35,	// (0x00034b7f) main_vded_pane_g1

0x5e41,	// (0x00034b8b) main_vded_pane_g2

0x5e4d,	// (0x00034b97) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003e53e) main_vded_pane_g

0x5e59,	// (0x00034ba3) main_vded_pane_t1

0x5e67,	// (0x00034bb1) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003e545) main_vded_pane_t

0x5e75,	// (0x00034bbf) vded_slider_pane

0x5e7f,	// (0x00034bc9) vded_video_pane

0xcd57,	// (0x0003baa1) vded_video_pane_g1

0x5e89,	// (0x00034bd3) vded_video_pane_g2

0xc7d1,	// (0x0003b51b) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003e54a) vded_video_pane_g

0xcd61,	// (0x0003baab) vded_slider_pane_g1

0xc51e,	// (0x0003b268) vded_slider_pane_g2

0xcd6a,	// (0x0003bab4) vded_slider_pane_g3

0xcd73,	// (0x0003babd) vded_slider_pane_g4

0xcd7c,	// (0x0003bac6) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003e551) vded_slider_pane_g

0x58c9,	// (0x00034613) mup3_rocker_pane_ParamLimits

0x58c9,	// (0x00034613) mup3_rocker_pane

0x5e92,	// (0x00034bdc) mup3_control_keys_pane_g1

0x5e9a,	// (0x00034be4) mup3_control_keys_pane_g2

0x5ea2,	// (0x00034bec) mup3_control_keys_pane_g3

0x5eaa,	// (0x00034bf4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003e55c) mup3_control_keys_pane_g

0x1197,	// (0x0002fee1) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1197,	// (0x0002fee1) popup_toolbar2_fixed_window_cp01

0x58ff,	// (0x00034649) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58ff,	// (0x00034649) popup_toolbar2_fixed_window_cp02

0xb6f8,	// (0x0003a442) popup_call2_audio_second_window_t4_ParamLimits

0xb6f8,	// (0x0003a442) popup_call2_audio_second_window_t4

0xbc26,	// (0x0003a970) popup_call2_audio_first_window_t6_ParamLimits

0xbc26,	// (0x0003a970) popup_call2_audio_first_window_t6

0xbebc,	// (0x0003ac06) popup_call2_audio_out_window_t6_ParamLimits

0xbebc,	// (0x0003ac06) popup_call2_audio_out_window_t6

0x9c70,	// (0x000389ba) main_vitu_pane

0x5eba,	// (0x00034c04) aid_size_cell_itu_ParamLimits

0x5eba,	// (0x00034c04) aid_size_cell_itu

0x9cd1,	// (0x00038a1b) bg_popup_window_pane_cp08_ParamLimits

0x9cd1,	// (0x00038a1b) bg_popup_window_pane_cp08

0x5ed0,	// (0x00034c1a) field_vitu_entry_pane_ParamLimits

0x5ed0,	// (0x00034c1a) field_vitu_entry_pane

0x5ee7,	// (0x00034c31) grid_vitu_function_pane_ParamLimits

0x5ee7,	// (0x00034c31) grid_vitu_function_pane

0x5f02,	// (0x00034c4c) grid_vitu_itu_pane_ParamLimits

0x5f02,	// (0x00034c4c) grid_vitu_itu_pane

0x5f20,	// (0x00034c6a) cell_vitu_itu_pane_ParamLimits

0x5f20,	// (0x00034c6a) cell_vitu_itu_pane

0x5f46,	// (0x00034c90) cell_vitu_function_pane_ParamLimits

0x5f46,	// (0x00034c90) cell_vitu_function_pane

0x9cd1,	// (0x00038a1b) bg_popup_sub_pane_cp08_ParamLimits

0x9cd1,	// (0x00038a1b) bg_popup_sub_pane_cp08

0x5f61,	// (0x00034cab) field_vitu_entry_pane_t1_ParamLimits

0x5f61,	// (0x00034cab) field_vitu_entry_pane_t1

0xcd9d,	// (0x0003bae7) field_vitu_entry_pane_t2_ParamLimits

0xcd9d,	// (0x0003bae7) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003e56a) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003e56a) field_vitu_entry_pane_t

0xcdba,	// (0x0003bb04) bg_button_pane_cp05_ParamLimits

0xcdba,	// (0x0003bb04) bg_button_pane_cp05

0x5f81,	// (0x00034ccb) cell_vitu_itu_pane_g1

0x5f99,	// (0x00034ce3) cell_vitu_itu_pane_t1_ParamLimits

0x5f99,	// (0x00034ce3) cell_vitu_itu_pane_t1

0x5fab,	// (0x00034cf5) cell_vitu_itu_pane_t2_ParamLimits

0x5fab,	// (0x00034cf5) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003e56f) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003e56f) cell_vitu_itu_pane_t

0xcdc8,	// (0x0003bb12) bg_button_pane_cp07

0x5fe0,	// (0x00034d2a) cell_vitu_function_pane_g1

0x13b3,	// (0x000300fd) main_calc_pane_g1

0x0fbb,	// (0x0002fd05) aid_visual_content_pane

0x9c70,	// (0x000389ba) main_vradio_pane

0x5fe9,	// (0x00034d33) main_vradio_pane_g1_ParamLimits

0x5fe9,	// (0x00034d33) main_vradio_pane_g1

0xcdd2,	// (0x0003bb1c) main_vradio_pane_g2_ParamLimits

0xcdd2,	// (0x0003bb1c) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003e576) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003e576) main_vradio_pane_g

0x6000,	// (0x00034d4a) main_vradio_pane_t1_ParamLimits

0x6000,	// (0x00034d4a) main_vradio_pane_t1

0x6015,	// (0x00034d5f) main_vradio_pane_t2_ParamLimits

0x6015,	// (0x00034d5f) main_vradio_pane_t2

0xcddf,	// (0x0003bb29) main_vradio_pane_t3_ParamLimits

0xcddf,	// (0x0003bb29) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003e57b) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003e57b) main_vradio_pane_t

0x602a,	// (0x00034d74) vradio_rocker_control_pane_ParamLimits

0x602a,	// (0x00034d74) vradio_rocker_control_pane

0x603c,	// (0x00034d86) vradio_station_info_pane_ParamLimits

0x603c,	// (0x00034d86) vradio_station_info_pane

0xcdf3,	// (0x0003bb3d) vradio_frequency_info_pane_ParamLimits

0xcdf3,	// (0x0003bb3d) vradio_frequency_info_pane

0xc7d1,	// (0x0003b51b) vradio_station_info_pane_g1

0xce02,	// (0x0003bb4c) vradio_station_info_pane_t1_ParamLimits

0xce02,	// (0x0003bb4c) vradio_station_info_pane_t1

0xce24,	// (0x0003bb6e) vradio_station_info_pane_t2_ParamLimits

0xce24,	// (0x0003bb6e) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003e582) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003e582) vradio_station_info_pane_t

0xce36,	// (0x0003bb80) vradio_tuning_pane

0xce3e,	// (0x0003bb88) vradio_rocker_control_pane_g1

0xce46,	// (0x0003bb90) vradio_rocker_control_pane_g2

0xce4e,	// (0x0003bb98) vradio_rocker_control_pane_g3

0xce56,	// (0x0003bba0) vradio_rocker_control_pane_g4

0xce5e,	// (0x0003bba8) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003e587) vradio_rocker_control_pane_g

0x604c,	// (0x00034d96) vradio_frequency_info_pane_g1

0xce66,	// (0x0003bbb0) vradio_frequency_info_pane_t1_ParamLimits

0xce66,	// (0x0003bbb0) vradio_frequency_info_pane_t1

0x6056,	// (0x00034da0) vradio_tuning_pane_g1

0x6061,	// (0x00034dab) vradio_tuning_pane_t1

0x9c9e,	// (0x000389e8) area_side_right_pane_ParamLimits

0x9c9e,	// (0x000389e8) area_side_right_pane

0xc33b,	// (0x0003b085) status_small_pane_g1

0xc343,	// (0x0003b08d) status_small_pane_g2

0xc34c,	// (0x0003b096) status_small_pane_g3

0xc355,	// (0x0003b09f) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0003e347) status_small_pane_g

0xc35e,	// (0x0003b0a8) status_small_pane_t1

0x9c70,	// (0x000389ba) main_video3_pane

0xce7a,	// (0x0003bbc4) cams_zoom_vslider_pane

0xce82,	// (0x0003bbcc) image3_wide_pane_ParamLimits

0xce82,	// (0x0003bbcc) image3_wide_pane

0xce9c,	// (0x0003bbe6) image3_wide_small_pane

0xcea8,	// (0x0003bbf2) main_video3_pane_g1_ParamLimits

0xcea8,	// (0x0003bbf2) main_video3_pane_g1

0xcec4,	// (0x0003bc0e) main_video3_pane_g2_ParamLimits

0xcec4,	// (0x0003bc0e) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003e592) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003e592) main_video3_pane_g

0xcee0,	// (0x0003bc2a) main_video3_pane_t1_ParamLimits

0xcee0,	// (0x0003bc2a) main_video3_pane_t1

0xcf0b,	// (0x0003bc55) main_video3_pane_t2_ParamLimits

0xcf0b,	// (0x0003bc55) main_video3_pane_t2

0xcf38,	// (0x0003bc82) main_video3_pane_t3_ParamLimits

0xcf38,	// (0x0003bc82) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003e597) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003e597) main_video3_pane_t

0xcf65,	// (0x0003bcaf) cams_zoom_vslider_pane_g1

0xcf6e,	// (0x0003bcb8) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003e59e) cams_zoom_vslider_pane_g

0xcf76,	// (0x0003bcc0) small_slider_vertical_pane

0xc7d1,	// (0x0003b51b) small_slider_vertical_pane_g1

0xc7d1,	// (0x0003b51b) small_slider_vertical_pane_g2

0xcf7e,	// (0x0003bcc8) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003e5a3) small_slider_vertical_pane_g

0x9c70,	// (0x000389ba) main_hwr_training_pane

0xcf87,	// (0x0003bcd1) hwr_training_instruct_pane_ParamLimits

0xcf87,	// (0x0003bcd1) hwr_training_instruct_pane

0x6070,	// (0x00034dba) hwr_training_navi_pane_ParamLimits

0x6070,	// (0x00034dba) hwr_training_navi_pane

0x608f,	// (0x00034dd9) hwr_training_write_pane_ParamLimits

0x608f,	// (0x00034dd9) hwr_training_write_pane

0x9c70,	// (0x000389ba) bg_frame_shadow_pane

0xcfbe,	// (0x0003bd08) hwr_training_write_pane_g1

0xcfc6,	// (0x0003bd10) hwr_training_write_pane_g2

0xcfce,	// (0x0003bd18) hwr_training_write_pane_g3

0xcfd6,	// (0x0003bd20) hwr_training_write_pane_g4

0xcfde,	// (0x0003bd28) hwr_training_write_pane_g5

0xcfe6,	// (0x0003bd30) hwr_training_write_pane_g6

0xcfee,	// (0x0003bd38) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003e5aa) hwr_training_write_pane_g

0x60ca,	// (0x00034e14) hwr_training_navi_pane_g1_ParamLimits

0x60ca,	// (0x00034e14) hwr_training_navi_pane_g1

0x60dc,	// (0x00034e26) hwr_training_navi_pane_g2_ParamLimits

0x60dc,	// (0x00034e26) hwr_training_navi_pane_g2

0x60ee,	// (0x00034e38) hwr_training_navi_pane_g3_ParamLimits

0x60ee,	// (0x00034e38) hwr_training_navi_pane_g3

0x60fe,	// (0x00034e48) hwr_training_navi_pane_g4_ParamLimits

0x60fe,	// (0x00034e48) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003e5b9) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003e5b9) hwr_training_navi_pane_g

0x610b,	// (0x00034e55) hwr_training_navi_pane_t1

0x6119,	// (0x00034e63) list_single_hwr_training_instruct_pane_ParamLimits

0x6119,	// (0x00034e63) list_single_hwr_training_instruct_pane

0xcff6,	// (0x0003bd40) list_single_hwr_training_instruct_pane_t1

0xc711,	// (0x0003b45b) bg_frame_shadow_pane_g1

0xd005,	// (0x0003bd4f) bg_frame_shadow_pane_g2

0xd00d,	// (0x0003bd57) bg_frame_shadow_pane_g3

0xd015,	// (0x0003bd5f) bg_frame_shadow_pane_g4

0xd01d,	// (0x0003bd67) bg_frame_shadow_pane_g5

0xd025,	// (0x0003bd6f) bg_frame_shadow_pane_g6

0xd02d,	// (0x0003bd77) bg_frame_shadow_pane_g7

0xa4dd,	// (0x00039227) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003e5c4) bg_frame_shadow_pane_g

0x9c70,	// (0x000389ba) main_video_tele_dialer_pane

0x0503,	// (0x0002f24d) aid_size_cell_video_keypad_ParamLimits

0x0503,	// (0x0002f24d) aid_size_cell_video_keypad

0x051d,	// (0x0002f267) grid_video_dialer_keypad_pane_ParamLimits

0x051d,	// (0x0002f267) grid_video_dialer_keypad_pane

0x0569,	// (0x0002f2b3) video_down_pane_cp_ParamLimits

0x0569,	// (0x0002f2b3) video_down_pane_cp

0x057d,	// (0x0002f2c7) cell_video_dialer_keypad_pane_ParamLimits

0x057d,	// (0x0002f2c7) cell_video_dialer_keypad_pane

0xd035,	// (0x0003bd7f) bg_button_pane_cp08_ParamLimits

0xd035,	// (0x0003bd7f) bg_button_pane_cp08

0x614a,	// (0x00034e94) cell_video_dialer_keypad_pane_g1_ParamLimits

0x614a,	// (0x00034e94) cell_video_dialer_keypad_pane_g1

0x58b3,	// (0x000345fd) mup3_rocker2_pane_ParamLimits

0x58b3,	// (0x000345fd) mup3_rocker2_pane

0xc7d1,	// (0x0003b51b) mup3_rocker2_pane_g1

0x46f4,	// (0x0003343e) main_dialer2_pane

0x9c70,	// (0x000389ba) main_mp4_pane

0x618d,	// (0x00034ed7) main_mp4_pane_g1_ParamLimits

0x618d,	// (0x00034ed7) main_mp4_pane_g1

0x618d,	// (0x00034ed7) main_mp4_pane_g2_ParamLimits

0x618d,	// (0x00034ed7) main_mp4_pane_g2

0x05a1,	// (0x0002f2eb) main_mp4_pane_g3_ParamLimits

0x05a1,	// (0x0002f2eb) main_mp4_pane_g3

0x619b,	// (0x00034ee5) main_mp4_pane_g4_ParamLimits

0x619b,	// (0x00034ee5) main_mp4_pane_g4

0x61c3,	// (0x00034f0d) main_mp4_pane_g5_ParamLimits

0x61c3,	// (0x00034f0d) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003e5e4) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003e5e4) main_mp4_pane_g

0x6213,	// (0x00034f5d) main_mp4_pane_t1_ParamLimits

0x6213,	// (0x00034f5d) main_mp4_pane_t1

0x626f,	// (0x00034fb9) main_mp4_pane_t2_ParamLimits

0x626f,	// (0x00034fb9) main_mp4_pane_t2

0xd041,	// (0x0003bd8b) main_mp4_pane_t3_ParamLimits

0xd041,	// (0x0003bd8b) main_mp4_pane_t3

0x62c1,	// (0x0003500b) main_mp4_pane_t4_ParamLimits

0x62c1,	// (0x0003500b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003e5f1) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003e5f1) main_mp4_pane_t

0x6301,	// (0x0003504b) mp4_progress_pane_ParamLimits

0x6301,	// (0x0003504b) mp4_progress_pane

0x634b,	// (0x00035095) mp4_rocker_pane_ParamLimits

0x634b,	// (0x00035095) mp4_rocker_pane

0xd069,	// (0x0003bdb3) mp4_progress_pane_t1

0xd082,	// (0x0003bdcc) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003e5fa) mp4_progress_pane_t

0xd09b,	// (0x0003bde5) mup_progress_pane_cp04

0xd0d9,	// (0x0003be23) mp4_rocker_pane_g1

0x05eb,	// (0x0002f335) aid_cell_size_keypad2_ParamLimits

0x05eb,	// (0x0002f335) aid_cell_size_keypad2

0x0601,	// (0x0002f34b) dialer2_ne_pane_ParamLimits

0x0601,	// (0x0002f34b) dialer2_ne_pane

0x0619,	// (0x0002f363) grid_dialer2_keypad_pane_ParamLimits

0x0619,	// (0x0002f363) grid_dialer2_keypad_pane

0xc5b0,	// (0x0003b2fa) bg_popup_call_pane_cp07_ParamLimits

0xc5b0,	// (0x0003b2fa) bg_popup_call_pane_cp07

0x636d,	// (0x000350b7) dialer2_ne_pane_t1_ParamLimits

0x636d,	// (0x000350b7) dialer2_ne_pane_t1

0x0635,	// (0x0002f37f) cell_dialer2_keypad_pane_ParamLimits

0x0635,	// (0x0002f37f) cell_dialer2_keypad_pane

0xd0b9,	// (0x0003be03) bg_button_pane_pane_cp04_ParamLimits

0xd0b9,	// (0x0003be03) bg_button_pane_pane_cp04

0x63a8,	// (0x000350f2) cell_dialer2_keypad_pane_g1_ParamLimits

0x63a8,	// (0x000350f2) cell_dialer2_keypad_pane_g1

0x20ac,	// (0x00030df6) aid_placing_vt_set_content_ParamLimits

0x20ac,	// (0x00030df6) aid_placing_vt_set_content

0x20d0,	// (0x00030e1a) aid_placing_vt_set_title_ParamLimits

0x20d0,	// (0x00030e1a) aid_placing_vt_set_title

0x9c70,	// (0x000389ba) main_image3_pane

0x06b7,	// (0x0002f401) area_side_right_pane_cp01_ParamLimits

0x06b7,	// (0x0002f401) area_side_right_pane_cp01

0x618d,	// (0x00034ed7) main_image3_pane_g1_ParamLimits

0x618d,	// (0x00034ed7) main_image3_pane_g1

0x06d0,	// (0x0002f41a) main_image3_pane_g2_ParamLimits

0x06d0,	// (0x0002f41a) main_image3_pane_g2

0x06f8,	// (0x0002f442) main_image3_pane_g3_ParamLimits

0x06f8,	// (0x0002f442) main_image3_pane_g3

0x0722,	// (0x0002f46c) main_image3_pane_g4_ParamLimits

0x0722,	// (0x0002f46c) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003e609) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003e609) main_image3_pane_g

0x074c,	// (0x0002f496) main_image3_pane_t1_ParamLimits

0x074c,	// (0x0002f496) main_image3_pane_t1

0x07a4,	// (0x0002f4ee) main_image3_pane_t2_ParamLimits

0x07a4,	// (0x0002f4ee) main_image3_pane_t2

0x07f6,	// (0x0002f540) main_image3_pane_t3_ParamLimits

0x07f6,	// (0x0002f540) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003e612) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003e612) main_image3_pane_t

0x9cd1,	// (0x00038a1b) grid_sctrl_middle_pane_cp01_ParamLimits

0x9cd1,	// (0x00038a1b) grid_sctrl_middle_pane_cp01

0x6444,	// (0x0003518e) cell_sctrl_middle_pane_cp01_ParamLimits

0x6444,	// (0x0003518e) cell_sctrl_middle_pane_cp01

0x6461,	// (0x000351ab) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6461,	// (0x000351ab) cell_sctrl_middle_pane_cp01_g1

0x9c70,	// (0x000389ba) main_call4_pane

0x6476,	// (0x000351c0) aid_size_button_call4_ParamLimits

0x6476,	// (0x000351c0) aid_size_button_call4

0x64a9,	// (0x000351f3) call4_windows_pane_ParamLimits

0x64a9,	// (0x000351f3) call4_windows_pane

0x64cb,	// (0x00035215) grid_call4_button_pane_ParamLimits

0x64cb,	// (0x00035215) grid_call4_button_pane

0xd0e3,	// (0x0003be2d) call4_windows_conf_pane

0x64f6,	// (0x00035240) popup_call4_audio_first_window_ParamLimits

0x64f6,	// (0x00035240) popup_call4_audio_first_window

0x6522,	// (0x0003526c) popup_call4_audio_second_window_ParamLimits

0x6522,	// (0x0003526c) popup_call4_audio_second_window

0xd120,	// (0x0003be6a) popup_call4_audio_wait_window_ParamLimits

0xd120,	// (0x0003be6a) popup_call4_audio_wait_window

0x6538,	// (0x00035282) cell_call4_button_pane_ParamLimits

0x6538,	// (0x00035282) cell_call4_button_pane

0x655f,	// (0x000352a9) bg_button_pane_cp09_ParamLimits

0x655f,	// (0x000352a9) bg_button_pane_cp09

0x656b,	// (0x000352b5) cell_call4_button_pane_g1_ParamLimits

0x656b,	// (0x000352b5) cell_call4_button_pane_g1

0x6591,	// (0x000352db) cell_call4_button_pane_t1_ParamLimits

0x6591,	// (0x000352db) cell_call4_button_pane_t1

0xd168,	// (0x0003beb2) popup_call4_audio_conf_window_ParamLimits

0xd168,	// (0x0003beb2) popup_call4_audio_conf_window

0x5915,	// (0x0003465f) mup3_progress_pane_t1_ParamLimits

0x5933,	// (0x0003467d) mup3_progress_pane_t2_ParamLimits

0xca88,	// (0x0003b7d2) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0003e4eb) mup3_progress_pane_t_ParamLimits

0xcaa5,	// (0x0003b7ef) mup_progress_pane_cp03_ParamLimits

0x5eb2,	// (0x00034bfc) mup3_control_keys_pane_g4_copy1

0x632f,	// (0x00035079) mp4_rocker2_pane_ParamLimits

0x632f,	// (0x00035079) mp4_rocker2_pane

0xd182,	// (0x0003becc) mp4_rocker2_pane_g1

0xd18a,	// (0x0003bed4) mp4_rocker2_pane_g2

0x65b7,	// (0x00035301) mp4_rocker2_pane_g3

0x65bf,	// (0x00035309) mp4_rocker2_pane_g4

0x65c7,	// (0x00035311) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003e61b) mp4_rocker2_pane_g

0x9c70,	// (0x000389ba) main_camera4_pane

0x9c70,	// (0x000389ba) main_video4_pane

0x0537,	// (0x0002f281) main_video_tele_dialer_pane_t1_ParamLimits

0x0537,	// (0x0002f281) main_video_tele_dialer_pane_t1

0x0550,	// (0x0002f29a) main_video_tele_dialer_pane_t2_ParamLimits

0x0550,	// (0x0002f29a) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003e5d5) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003e5d5) main_video_tele_dialer_pane_t

0x0896,	// (0x0002f5e0) cam4_autofocus_pane_ParamLimits

0x0896,	// (0x0002f5e0) cam4_autofocus_pane

0x08ac,	// (0x0002f5f6) cam4_image_uncrop_pane_ParamLimits

0x08ac,	// (0x0002f5f6) cam4_image_uncrop_pane

0x08c5,	// (0x0002f60f) cam4_indicators_pane_ParamLimits

0x08c5,	// (0x0002f60f) cam4_indicators_pane

0x08f4,	// (0x0002f63e) main_camera4_pane_g1_ParamLimits

0x08f4,	// (0x0002f63e) main_camera4_pane_g1

0x0906,	// (0x0002f650) main_camera4_pane_g2_ParamLimits

0x0906,	// (0x0002f650) main_camera4_pane_g2

0x0919,	// (0x0002f663) main_camera4_pane_g3_ParamLimits

0x0919,	// (0x0002f663) main_camera4_pane_g3

0x092c,	// (0x0002f676) main_camera4_pane_g4_ParamLimits

0x092c,	// (0x0002f676) main_camera4_pane_g4

0x093f,	// (0x0002f689) main_camera4_pane_g5_ParamLimits

0x093f,	// (0x0002f689) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003e626) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003e626) main_camera4_pane_g

0x0963,	// (0x0002f6ad) main_camera4_pane_t1_ParamLimits

0x0963,	// (0x0002f6ad) main_camera4_pane_t1

0x6601,	// (0x0003534b) bg_tb_trans_pane_cp06

0x6617,	// (0x00035361) cam4_indicators_pane_g1

0x6628,	// (0x00035372) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003e641) cam4_indicators_pane_g

0x6640,	// (0x0003538a) cam4_indicators_pane_t1

0x09b3,	// (0x0002f6fd) main_video4_pane_g1_ParamLimits

0x09b3,	// (0x0002f6fd) main_video4_pane_g1

0x09c2,	// (0x0002f70c) main_video4_pane_g2_ParamLimits

0x09c2,	// (0x0002f70c) main_video4_pane_g2

0x09d1,	// (0x0002f71b) main_video4_pane_g3_ParamLimits

0x09d1,	// (0x0002f71b) main_video4_pane_g3

0x09e0,	// (0x0002f72a) main_video4_pane_g4_ParamLimits

0x09e0,	// (0x0002f72a) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003e648) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003e648) main_video4_pane_g

0x09fe,	// (0x0002f748) vid4_indicators_pane_ParamLimits

0x09fe,	// (0x0002f748) vid4_indicators_pane

0x0a2c,	// (0x0002f776) video4_image_uncrop_cif_pane_ParamLimits

0x0a2c,	// (0x0002f776) video4_image_uncrop_cif_pane

0x0a46,	// (0x0002f790) video4_image_uncrop_nhd_pane_ParamLimits

0x0a46,	// (0x0002f790) video4_image_uncrop_nhd_pane

0x08ac,	// (0x0002f5f6) video4_image_uncrop_vga_pane_ParamLimits

0x08ac,	// (0x0002f5f6) video4_image_uncrop_vga_pane

0x6664,	// (0x000353ae) bg_tb_trans_pane_cp07

0x667c,	// (0x000353c6) vid4_indicators_pane_g1

0x6692,	// (0x000353dc) vid4_indicators_pane_g2

0x66a6,	// (0x000353f0) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003e653) vid4_indicators_pane_g

0x66d7,	// (0x00035421) vid4_indicators_pane_t1

0x66ee,	// (0x00035438) cam4_autofocus_pane_g1

0x66f6,	// (0x00035440) cam4_autofocus_pane_g2

0x66fe,	// (0x00035448) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003e65e) cam4_autofocus_pane_g

0x6706,	// (0x00035450) cam4_autofocus_pane_g3_copy1

0x612e,	// (0x00034e78) video_down_pane_cp_t1

0x613c,	// (0x00034e86) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003e5da) video_down_pane_cp_t

0x9cd1,	// (0x00038a1b) popup_vitu2_window_ParamLimits

0x9cd1,	// (0x00038a1b) popup_vitu2_window

0x0a5c,	// (0x0002f7a6) aid_size_cell2_itu2_ParamLimits

0x0a5c,	// (0x0002f7a6) aid_size_cell2_itu2

0x0a82,	// (0x0002f7cc) aid_size_cell_itu2_ParamLimits

0x0a82,	// (0x0002f7cc) aid_size_cell_itu2

0x0ae2,	// (0x0002f82c) bg_popup_window_pane_cp09_ParamLimits

0x0ae2,	// (0x0002f82c) bg_popup_window_pane_cp09

0x0af0,	// (0x0002f83a) field_vitu2_entry_pane_ParamLimits

0x0af0,	// (0x0002f83a) field_vitu2_entry_pane

0x0b18,	// (0x0002f862) grid_vitu2_function_pane_ParamLimits

0x0b18,	// (0x0002f862) grid_vitu2_function_pane

0x0b69,	// (0x0002f8b3) grid_vitu2_itu_pane_ParamLimits

0x0b69,	// (0x0002f8b3) grid_vitu2_itu_pane

0x0bf8,	// (0x0002f942) cell_vitu2_itu_pane_ParamLimits

0x0bf8,	// (0x0002f942) cell_vitu2_itu_pane

0x0c1e,	// (0x0002f968) cell_vitu2_function_pane_ParamLimits

0x0c1e,	// (0x0002f968) cell_vitu2_function_pane

0xd192,	// (0x0003bedc) bg_popup_call_pane_cp08_ParamLimits

0xd192,	// (0x0003bedc) bg_popup_call_pane_cp08

0xd1ab,	// (0x0003bef5) field_vitu2_entry_pane_g1

0xd1b7,	// (0x0003bf01) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003e665) field_vitu2_entry_pane_g

0x670e,	// (0x00035458) field_vitu2_entry_pane_t1_ParamLimits

0x670e,	// (0x00035458) field_vitu2_entry_pane_t1

0xd1d1,	// (0x0003bf1b) field_vitu2_entry_pane_t2_ParamLimits

0xd1d1,	// (0x0003bf1b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003e66c) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003e66c) field_vitu2_entry_pane_t

0x0c62,	// (0x0002f9ac) bg_button_pane_cp010_ParamLimits

0x0c62,	// (0x0002f9ac) bg_button_pane_cp010

0x0c70,	// (0x0002f9ba) cell_vitu2_itu_pane_g1

0x0c9b,	// (0x0002f9e5) cell_vitu2_itu_pane_t1_ParamLimits

0x0c9b,	// (0x0002f9e5) cell_vitu2_itu_pane_t1

0x0cf9,	// (0x0002fa43) cell_vitu2_itu_pane_t2_ParamLimits

0x0cf9,	// (0x0002fa43) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003e676) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003e676) cell_vitu2_itu_pane_t

0x6664,	// (0x000353ae) bg_button_pane_cp011

0x0de5,	// (0x0002fb2f) cell_vitu2_function_pane_g1

0x9c70,	// (0x000389ba) main_myfav_hc_pane

0x0846,	// (0x0002f590) popup_image3_note_pane_ParamLimits

0x0846,	// (0x0002f590) popup_image3_note_pane

0x0862,	// (0x0002f5ac) popup_image3_tool_bar_pane_ParamLimits

0x0862,	// (0x0002f5ac) popup_image3_tool_bar_pane

0x0d87,	// (0x0002fad1) cell_vitu2_itu_pane_t3_ParamLimits

0x0d87,	// (0x0002fad1) cell_vitu2_itu_pane_t3

0x9c70,	// (0x000389ba) bg_popup_trans_pane

0xd1f6,	// (0x0003bf40) grid_image3_tool_bar_pane

0xd200,	// (0x0003bf4a) bg_popup_trans_pane_g1

0xa83b,	// (0x00039585) bg_popup_trans_pane_g2

0xd208,	// (0x0003bf52) bg_popup_trans_pane_g3

0xd210,	// (0x0003bf5a) bg_popup_trans_pane_g4

0xd218,	// (0x0003bf62) bg_popup_trans_pane_g5

0xd220,	// (0x0003bf6a) bg_popup_trans_pane_g6

0xd228,	// (0x0003bf72) bg_popup_trans_pane_g7

0xd230,	// (0x0003bf7a) bg_popup_trans_pane_g8

0xa81b,	// (0x00039565) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003e67d) bg_popup_trans_pane_g

0xd238,	// (0x0003bf82) cell_image3_tool_bar_pane_ParamLimits

0xd238,	// (0x0003bf82) cell_image3_tool_bar_pane

0xc7d1,	// (0x0003b51b) cell_image3_tool_bar_pane_g1

0x9c70,	// (0x000389ba) bg_popup_trans_pane_cp1

0xd24e,	// (0x0003bf98) popup_image3_note_pane_t1

0xd25c,	// (0x0003bfa6) popup_image3_note_pane_t2

0xd26a,	// (0x0003bfb4) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003e690) popup_image3_note_pane_t

0xd27a,	// (0x0003bfc4) popup_image3_note_pane_t3_copy1

0x673d,	// (0x00035487) bg_myfav_hc_instruction_pane_ParamLimits

0x673d,	// (0x00035487) bg_myfav_hc_instruction_pane

0x6755,	// (0x0003549f) cell_myfav_contact_pane_ParamLimits

0x6755,	// (0x0003549f) cell_myfav_contact_pane

0x6771,	// (0x000354bb) cell_myfav_contact_pane_cp1_ParamLimits

0x6771,	// (0x000354bb) cell_myfav_contact_pane_cp1

0x6789,	// (0x000354d3) cell_myfav_contact_pane_cp2_ParamLimits

0x6789,	// (0x000354d3) cell_myfav_contact_pane_cp2

0x67a1,	// (0x000354eb) cell_myfav_contact_pane_cp3_ParamLimits

0x67a1,	// (0x000354eb) cell_myfav_contact_pane_cp3

0x67b8,	// (0x00035502) cell_myfav_contact_pane_cp4_ParamLimits

0x67b8,	// (0x00035502) cell_myfav_contact_pane_cp4

0x67d0,	// (0x0003551a) cell_myfav_contact_pane_cp5_ParamLimits

0x67d0,	// (0x0003551a) cell_myfav_contact_pane_cp5

0x67e4,	// (0x0003552e) cell_myfav_contact_pane_cp6_ParamLimits

0x67e4,	// (0x0003552e) cell_myfav_contact_pane_cp6

0x67fa,	// (0x00035544) cell_myfav_contact_pane_cp7_ParamLimits

0x67fa,	// (0x00035544) cell_myfav_contact_pane_cp7

0xd288,	// (0x0003bfd2) listscroll_gen_pane_cp05

0x6812,	// (0x0003555c) main_myfav_hc_pane_g1_ParamLimits

0x6812,	// (0x0003555c) main_myfav_hc_pane_g1

0x682c,	// (0x00035576) main_myfav_hc_pane_g2_ParamLimits

0x682c,	// (0x00035576) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003e697) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003e697) main_myfav_hc_pane_g

0x6860,	// (0x000355aa) main_myfav_hc_pane_t1_ParamLimits

0x6860,	// (0x000355aa) main_myfav_hc_pane_t1

0xd291,	// (0x0003bfdb) main_myfav_hc_pane_t2_ParamLimits

0xd291,	// (0x0003bfdb) main_myfav_hc_pane_t2

0xd2a3,	// (0x0003bfed) main_myfav_hc_pane_t3_ParamLimits

0xd2a3,	// (0x0003bfed) main_myfav_hc_pane_t3

0x6877,	// (0x000355c1) main_myfav_hc_pane_t4_ParamLimits

0x6877,	// (0x000355c1) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003e69e) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003e69e) main_myfav_hc_pane_t

0xc7d1,	// (0x0003b51b) bg_myfav_hc_instruction_pane_g1

0xd2b5,	// (0x0003bfff) cell_myfav_contact_pane_g1_ParamLimits

0xd2b5,	// (0x0003bfff) cell_myfav_contact_pane_g1

0xd2b5,	// (0x0003bfff) cell_myfav_contact_pane_g2_ParamLimits

0xd2b5,	// (0x0003bfff) cell_myfav_contact_pane_g2

0xd2c1,	// (0x0003c00b) cell_myfav_contact_pane_g3_ParamLimits

0xd2c1,	// (0x0003c00b) cell_myfav_contact_pane_g3

0xca72,	// (0x0003b7bc) cell_myfav_contact_pane_g4_ParamLimits

0xca72,	// (0x0003b7bc) cell_myfav_contact_pane_g4

0xd2ce,	// (0x0003c018) cell_myfav_contact_pane_g5_ParamLimits

0xd2ce,	// (0x0003c018) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003e6a9) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003e6a9) cell_myfav_contact_pane_g

0x6846,	// (0x00035590) main_myfav_hc_pane_g3_ParamLimits

0x6846,	// (0x00035590) main_myfav_hc_pane_g3

0x10f8,	// (0x0002fe42) popup_adpt_find_window

0x68a1,	// (0x000355eb) afind_page_pane_ParamLimits

0x68a1,	// (0x000355eb) afind_page_pane

0x68b6,	// (0x00035600) aid_size_cell_afind_ParamLimits

0x68b6,	// (0x00035600) aid_size_cell_afind

0x68d4,	// (0x0003561e) bg_popup_sub_pane_cp09_ParamLimits

0x68d4,	// (0x0003561e) bg_popup_sub_pane_cp09

0x68e1,	// (0x0003562b) find_pane_cp01_ParamLimits

0x68e1,	// (0x0003562b) find_pane_cp01

0xd2da,	// (0x0003c024) grid_afind_control_pane_ParamLimits

0xd2da,	// (0x0003c024) grid_afind_control_pane

0x68ee,	// (0x00035638) grid_afind_pane_ParamLimits

0x68ee,	// (0x00035638) grid_afind_pane

0x6910,	// (0x0003565a) cell_afind_pane_ParamLimits

0x6910,	// (0x0003565a) cell_afind_pane

0xc7d1,	// (0x0003b51b) afind_page_pane_g1

0x6977,	// (0x000356c1) afind_page_pane_g2

0x6980,	// (0x000356ca) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003e6b4) afind_page_pane_g

0x6989,	// (0x000356d3) afind_page_pane_t1

0xd2ee,	// (0x0003c038) cell_afind_grid_control_pane_ParamLimits

0xd2ee,	// (0x0003c038) cell_afind_grid_control_pane

0xd0b9,	// (0x0003be03) bg_button_pane_cp69_ParamLimits

0xd0b9,	// (0x0003be03) bg_button_pane_cp69

0x69a9,	// (0x000356f3) cell_afind_pane_g1_ParamLimits

0x69a9,	// (0x000356f3) cell_afind_pane_g1

0x69b6,	// (0x00035700) cell_afind_pane_t1_ParamLimits

0x69b6,	// (0x00035700) cell_afind_pane_t1

0xa630,	// (0x0003937a) bg_button_pane_cp72

0xd2fd,	// (0x0003c047) cell_afind_grid_control_pane_g1

0x4197,	// (0x00032ee1) aid_image_placing_area_ParamLimits

0x4197,	// (0x00032ee1) aid_image_placing_area

0xcd85,	// (0x0003bacf) field_vitu_entry_pane_g1_ParamLimits

0xcd85,	// (0x0003bacf) field_vitu_entry_pane_g1

0xcd91,	// (0x0003badb) field_vitu_entry_pane_g2_ParamLimits

0xcd91,	// (0x0003badb) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003e565) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003e565) field_vitu_entry_pane_g

0x5f81,	// (0x00034ccb) cell_vitu_itu_pane_g1_ParamLimits

0x5fc3,	// (0x00034d0d) cell_vitu_itu_pane_t3_ParamLimits

0x5fc3,	// (0x00034d0d) cell_vitu_itu_pane_t3

0xd069,	// (0x0003bdb3) mp4_progress_pane_t1_ParamLimits

0xd082,	// (0x0003bdcc) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003e5fa) mp4_progress_pane_t_ParamLimits

0xd09b,	// (0x0003bde5) mup_progress_pane_cp04_ParamLimits

0x688b,	// (0x000355d5) main_myfav_hc_pane_t5_ParamLimits

0x688b,	// (0x000355d5) main_myfav_hc_pane_t5

0x9c96,	// (0x000389e0) aid_zoom_text_primary

0x10f8,	// (0x0002fe42) popup_adpt_find_window_ParamLimits

0x9cd1,	// (0x00038a1b) main_cam_set_pane

0x08de,	// (0x0002f628) cam4_zoom_pane_ParamLimits

0x08de,	// (0x0002f628) cam4_zoom_pane

0x69c8,	// (0x00035712) main_cam_set_pane_g1_ParamLimits

0x69c8,	// (0x00035712) main_cam_set_pane_g1

0x69d6,	// (0x00035720) main_cam_set_pane_g2_ParamLimits

0x69d6,	// (0x00035720) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003e6bb) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003e6bb) main_cam_set_pane_g

0x69f7,	// (0x00035741) main_cam_set_pane_t1_ParamLimits

0x69f7,	// (0x00035741) main_cam_set_pane_t1

0x6a12,	// (0x0003575c) main_cset_listscroll_pane_ParamLimits

0x6a12,	// (0x0003575c) main_cset_listscroll_pane

0x6a36,	// (0x00035780) main_cset_slider_pane_ParamLimits

0x6a36,	// (0x00035780) main_cset_slider_pane

0xd30e,	// (0x0003c058) main_cset_list_pane_ParamLimits

0xd30e,	// (0x0003c058) main_cset_list_pane

0xd31e,	// (0x0003c068) scroll_pane_cp028

0x6a60,	// (0x000357aa) aid_area_touch_slider

0x6a7c,	// (0x000357c6) cset_slider_pane

0x6aa6,	// (0x000357f0) main_cset_slider_pane_g1

0x6abb,	// (0x00035805) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003e6c0) main_cset_slider_pane_g

0xd357,	// (0x0003c0a1) main_cset_slider_pane_t1

0x6b7d,	// (0x000358c7) main_cset_slider_pane_t2

0x6b97,	// (0x000358e1) main_cset_slider_pane_t3

0x6bb1,	// (0x000358fb) main_cset_slider_pane_t4

0x6bcb,	// (0x00035915) main_cset_slider_pane_t5

0x6be9,	// (0x00035933) main_cset_slider_pane_t6

0x6bfe,	// (0x00035948) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003e6e5) main_cset_slider_pane_t

0x6d0a,	// (0x00035a54) cset_list_set_pane_ParamLimits

0x6d0a,	// (0x00035a54) cset_list_set_pane

0x6d1e,	// (0x00035a68) aid_position_infowindow_above

0x6d26,	// (0x00035a70) aid_position_infowindow_below

0x6d2e,	// (0x00035a78) cset_list_set_pane_g1_ParamLimits

0x6d2e,	// (0x00035a78) cset_list_set_pane_g1

0x6d3a,	// (0x00035a84) cset_list_set_pane_g3_ParamLimits

0x6d3a,	// (0x00035a84) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003e704) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003e704) cset_list_set_pane_g

0x6d49,	// (0x00035a93) cset_list_set_pane_t1_ParamLimits

0x6d49,	// (0x00035a93) cset_list_set_pane_t1

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp021_ParamLimits

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp021

0xb05a,	// (0x00039da4) cset_slider_pane_g1

0xb06c,	// (0x00039db6) cset_slider_pane_g2

0xb063,	// (0x00039dad) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003e709) cset_slider_pane_g

0x6d5e,	// (0x00035aa8) aid_area_touch_cam4_zoom

0x6d66,	// (0x00035ab0) cam4_zoom_cont_pane

0x6d6e,	// (0x00035ab8) cam4_zoom_pane_g1

0x6d76,	// (0x00035ac0) cam4_zoom_pane_g2

0x0df9,	// (0x0002fb43) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003e710) cam4_zoom_pane_g

0x6d7e,	// (0x00035ac8) cam4_zoom_cont_pane_g1

0x6d87,	// (0x00035ad1) cam4_zoom_cont_pane_g2

0x6d90,	// (0x00035ada) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003e717) cam4_zoom_cont_pane_g

0x6494,	// (0x000351de) call4_image_pane_ParamLimits

0x6494,	// (0x000351de) call4_image_pane

0xd0e3,	// (0x0003be2d) call4_windows_conf_pane_ParamLimits

0xd0fe,	// (0x0003be48) popup_call4_audio_in_window_ParamLimits

0xd0fe,	// (0x0003be48) popup_call4_audio_in_window

0x9c70,	// (0x000389ba) bg_popup_call2_act_pane_cp02

0xd160,	// (0x0003beaa) call4_list_conf_pane

0xc7d1,	// (0x0003b51b) call4_image_pane_g1

0xc7d1,	// (0x0003b51b) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0003e42b) call4_image_pane_g

0xd3f7,	// (0x0003c141) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3f7,	// (0x0003c141) list_single_graphic_popup_conf4_pane

0x9c70,	// (0x000389ba) list_highlight_pane_cp022

0xd40c,	// (0x0003c156) list_single_graphic_popup_conf4_pane_g1

0xad3a,	// (0x00039a84) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003e71e) list_single_graphic_popup_conf4_pane_g

0xd414,	// (0x0003c15e) list_single_graphic_popup_conf4_pane_t1

0x21e7,	// (0x00030f31) popup_vtel_slider_window_ParamLimits

0x21e7,	// (0x00030f31) popup_vtel_slider_window

0xd0a7,	// (0x0003bdf1) dialer2_ne_pane_t2_ParamLimits

0xd0a7,	// (0x0003bdf1) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003e5ff) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003e5ff) dialer2_ne_pane_t

0xc5b0,	// (0x0003b2fa) bg_popup_sub_pane_cp010_ParamLimits

0xc5b0,	// (0x0003b2fa) bg_popup_sub_pane_cp010

0x6d99,	// (0x00035ae3) popup_vtel_slider_window_g1_ParamLimits

0x6d99,	// (0x00035ae3) popup_vtel_slider_window_g1

0x6dac,	// (0x00035af6) popup_vtel_slider_window_g2_ParamLimits

0x6dac,	// (0x00035af6) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003e723) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003e723) popup_vtel_slider_window_g

0x6e02,	// (0x00035b4c) vtel_slider_pane_ParamLimits

0x6e02,	// (0x00035b4c) vtel_slider_pane

0x6e24,	// (0x00035b6e) vtel_slider_pane_g1_ParamLimits

0x6e24,	// (0x00035b6e) vtel_slider_pane_g1

0x6e38,	// (0x00035b82) vtel_slider_pane_g2_ParamLimits

0x6e38,	// (0x00035b82) vtel_slider_pane_g2

0x6e50,	// (0x00035b9a) vtel_slider_pane_g3_ParamLimits

0x6e50,	// (0x00035b9a) vtel_slider_pane_g3

0x6e24,	// (0x00035b6e) vtel_slider_pane_g4_ParamLimits

0x6e24,	// (0x00035b6e) vtel_slider_pane_g4

0x6e66,	// (0x00035bb0) vtel_slider_pane_g5_ParamLimits

0x6e66,	// (0x00035bb0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003e72c) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003e72c) vtel_slider_pane_g

0x9cd1,	// (0x00038a1b) main_gallery2_pane

0x0aae,	// (0x0002f7f8) aid_size_row_itut2_dropdow_list_ParamLimits

0x0aae,	// (0x0002f7f8) aid_size_row_itut2_dropdow_list

0x0b40,	// (0x0002f88a) grid_vitu2_function_top_pane_ParamLimits

0x0b40,	// (0x0002f88a) grid_vitu2_function_top_pane

0x0b9f,	// (0x0002f8e9) popup_vitu2_dropdown_list_window_ParamLimits

0x0b9f,	// (0x0002f8e9) popup_vitu2_dropdown_list_window

0x0bcc,	// (0x0002f916) popup_vitu2_match_list_window

0x0e01,	// (0x0002fb4b) cell_vitu2_function_top_pane_ParamLimits

0x0e01,	// (0x0002fb4b) cell_vitu2_function_top_pane

0x0e21,	// (0x0002fb6b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x0e21,	// (0x0002fb6b) cell_vitu2_function_top_pane_cp01

0x0e3f,	// (0x0002fb89) cell_vitu2_function_top_wide_pane_ParamLimits

0x0e3f,	// (0x0002fb89) cell_vitu2_function_top_wide_pane

0x6664,	// (0x000353ae) bg_button_pane_cp012

0x0e5d,	// (0x0002fba7) cell_vitu2_function_top_pane_g1

0x6e7c,	// (0x00035bc6) bg_button_pane_cp013_ParamLimits

0x6e7c,	// (0x00035bc6) bg_button_pane_cp013

0x6e98,	// (0x00035be2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e98,	// (0x00035be2) cell_vitu2_function_top_wide_pane_g1

0x6664,	// (0x000353ae) bg_popup_sub_pane_cp20

0x0e71,	// (0x0002fbbb) list_vitu2_match_list_pane

0xd200,	// (0x0003bf4a) bg_popup_sub_pane_cp20_g1

0xd208,	// (0x0003bf52) bg_popup_sub_pane_cp20_g2

0xa83b,	// (0x00039585) bg_popup_sub_pane_cp20_g3

0xd210,	// (0x0003bf5a) bg_popup_sub_pane_cp20_g4

0xa81b,	// (0x00039565) bg_popup_sub_pane_cp20_g5

0xd438,	// (0x0003c182) bg_popup_sub_pane_cp20_g6

0xd220,	// (0x0003bf6a) bg_popup_sub_pane_cp20_g7

0xd228,	// (0x0003bf72) bg_popup_sub_pane_cp20_g8

0xd230,	// (0x0003bf7a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003e737) bg_popup_sub_pane_cp20_g

0x6eb0,	// (0x00035bfa) list_vitu2_match_list_item_pane_ParamLimits

0x6eb0,	// (0x00035bfa) list_vitu2_match_list_item_pane

0x6ec2,	// (0x00035c0c) list_vitu2_match_list_item_pane_t1

0x148d,	// (0x000301d7) bg_popup_sub_pane_cp21

0x6f0e,	// (0x00035c58) grid_vitu2_dropdown_list_pane

0x0e8f,	// (0x0002fbd9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x0e8f,	// (0x0002fbd9) cell_vitu2_dropdown_list_char_pane

0x0eb2,	// (0x0002fbfc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x0eb2,	// (0x0002fbfc) cell_vitu2_dropdown_list_ctrl_pane

0xd44c,	// (0x0003c196) cell_vitu2_dropdown_list_char_pane_g1

0xd455,	// (0x0003c19f) cell_vitu2_dropdown_list_char_pane_g2

0xd45e,	// (0x0003c1a8) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003e754) cell_vitu2_dropdown_list_char_pane_g

0x0ee0,	// (0x0002fc2a) cell_vitu2_dropdown_list_char_pane_t1

0x6f16,	// (0x00035c60) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f16,	// (0x00035c60) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f26,	// (0x00035c70) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f26,	// (0x00035c70) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f37,	// (0x00035c81) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f37,	// (0x00035c81) cell_vitu2_dropdown_list_ctrl_pane_g3

0x0eee,	// (0x0002fc38) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x0eee,	// (0x0002fc38) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6601,	// (0x0003534b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6601,	// (0x0003534b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003e75b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003e75b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f47,	// (0x00035c91) aid_size_cell_gallery2_ParamLimits

0x6f47,	// (0x00035c91) aid_size_cell_gallery2

0x6f65,	// (0x00035caf) grid_gallery2_pane_ParamLimits

0x6f65,	// (0x00035caf) grid_gallery2_pane

0x6f7f,	// (0x00035cc9) scroll_pane_cp029_ParamLimits

0x6f7f,	// (0x00035cc9) scroll_pane_cp029

0x6f8b,	// (0x00035cd5) cell_gallery2_pane_ParamLimits

0x6f8b,	// (0x00035cd5) cell_gallery2_pane

0xd467,	// (0x0003c1b1) cell_gallery2_pane_g2

0x6fec,	// (0x00035d36) cell_gallery2_pane_g3

0xd46f,	// (0x0003c1b9) cell_gallery2_pane_g4

0xd477,	// (0x0003c1c1) cell_gallery2_pane_g5

0xaf14,	// (0x00039c5e) grid_highlight_pane_cp10

0x0bcc,	// (0x0002f916) popup_vitu2_match_list_window_ParamLimits

0x0be3,	// (0x0002f92d) popup_vitu2_query_window_ParamLimits

0x0be3,	// (0x0002f92d) popup_vitu2_query_window

0x148d,	// (0x000301d7) bg_vitu2_candi_button_pane

0xd44c,	// (0x0003c196) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd455,	// (0x0003c19f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd45e,	// (0x0003c1a8) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ff4,	// (0x00035d3e) bg_button_pane_cp015

0x7008,	// (0x00035d52) bg_button_pane_cp016

0x701b,	// (0x00035d65) bg_button_pane_cp017

0xc380,	// (0x0003b0ca) bg_popup_sub_pane_cp22

0xd47f,	// (0x0003c1c9) popup_vitu2_query_window_g1

0x7060,	// (0x00035daa) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003e766) popup_vitu2_query_window_g

0x707f,	// (0x00035dc9) popup_vitu2_query_window_t1_ParamLimits

0x707f,	// (0x00035dc9) popup_vitu2_query_window_t1

0x70b4,	// (0x00035dfe) popup_vitu2_query_window_t2_ParamLimits

0x70b4,	// (0x00035dfe) popup_vitu2_query_window_t2

0x70c6,	// (0x00035e10) popup_vitu2_query_window_t3_ParamLimits

0x70c6,	// (0x00035e10) popup_vitu2_query_window_t3

0x70ee,	// (0x00035e38) popup_vitu2_query_window_t4_ParamLimits

0x70ee,	// (0x00035e38) popup_vitu2_query_window_t4

0x710f,	// (0x00035e59) popup_vitu2_query_window_t5_ParamLimits

0x710f,	// (0x00035e59) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003e76d) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003e76d) popup_vitu2_query_window_t

0xd306,	// (0x0003c050) main_cset_text_pane

0x6a60,	// (0x000357aa) aid_area_touch_slider_ParamLimits

0x6a7c,	// (0x000357c6) cset_slider_pane_ParamLimits

0x6aa6,	// (0x000357f0) main_cset_slider_pane_g1_ParamLimits

0x6abb,	// (0x00035805) main_cset_slider_pane_g2_ParamLimits

0xd327,	// (0x0003c071) main_cset_slider_pane_g3_ParamLimits

0xd327,	// (0x0003c071) main_cset_slider_pane_g3

0x6ad0,	// (0x0003581a) main_cset_slider_pane_g4_ParamLimits

0x6ad0,	// (0x0003581a) main_cset_slider_pane_g4

0x6adf,	// (0x00035829) main_cset_slider_pane_g5_ParamLimits

0x6adf,	// (0x00035829) main_cset_slider_pane_g5

0x6aed,	// (0x00035837) main_cset_slider_pane_g6_ParamLimits

0x6aed,	// (0x00035837) main_cset_slider_pane_g6

0xf976,	// (0x0003e6c0) main_cset_slider_pane_g_ParamLimits

0xd357,	// (0x0003c0a1) main_cset_slider_pane_t1_ParamLimits

0x6b7d,	// (0x000358c7) main_cset_slider_pane_t2_ParamLimits

0x6b97,	// (0x000358e1) main_cset_slider_pane_t3_ParamLimits

0x6bb1,	// (0x000358fb) main_cset_slider_pane_t4_ParamLimits

0x6bcb,	// (0x00035915) main_cset_slider_pane_t5_ParamLimits

0x6be9,	// (0x00035933) main_cset_slider_pane_t6_ParamLimits

0x6bfe,	// (0x00035948) main_cset_slider_pane_t7_ParamLimits

0x6c2c,	// (0x00035976) main_cset_slider_pane_t8_ParamLimits

0x6c2c,	// (0x00035976) main_cset_slider_pane_t8

0x6c54,	// (0x0003599e) main_cset_slider_pane_t9_ParamLimits

0x6c54,	// (0x0003599e) main_cset_slider_pane_t9

0x6c7c,	// (0x000359c6) main_cset_slider_pane_t10_ParamLimits

0x6c7c,	// (0x000359c6) main_cset_slider_pane_t10

0x6ca4,	// (0x000359ee) main_cset_slider_pane_t11_ParamLimits

0x6ca4,	// (0x000359ee) main_cset_slider_pane_t11

0x6cce,	// (0x00035a18) main_cset_slider_pane_t12_ParamLimits

0x6cce,	// (0x00035a18) main_cset_slider_pane_t12

0x6ceb,	// (0x00035a35) main_cset_slider_pane_t13_ParamLimits

0x6ceb,	// (0x00035a35) main_cset_slider_pane_t13

0xf99b,	// (0x0003e6e5) main_cset_slider_pane_t_ParamLimits

0x9c70,	// (0x000389ba) bg_popup_sub_pane_cp011

0xd48b,	// (0x0003c1d5) main_cset_text_pane_g1

0xd493,	// (0x0003c1dd) main_cset_text_pane_t1

0xd4a1,	// (0x0003c1eb) main_cset_text_pane_t2

0xd4af,	// (0x0003c1f9) main_cset_text_pane_t3

0xd4bd,	// (0x0003c207) main_cset_text_pane_t4

0xd4cb,	// (0x0003c215) main_cset_text_pane_t5

0xd4d9,	// (0x0003c223) main_cset_text_pane_t6

0xd4e7,	// (0x0003c231) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003e77c) main_cset_text_pane_t

0x9c70,	// (0x000389ba) main_cam4_burst_pane

0x9c70,	// (0x000389ba) main_cam5_pane

0x6997,	// (0x000356e1) bg_button_pane_cp019

0x69a0,	// (0x000356ea) bg_button_pane_cp020

0xd333,	// (0x0003c07d) main_cset_slider_pane_g7_ParamLimits

0xd333,	// (0x0003c07d) main_cset_slider_pane_g7

0xd33f,	// (0x0003c089) main_cset_slider_pane_g8_ParamLimits

0xd33f,	// (0x0003c089) main_cset_slider_pane_g8

0x6b01,	// (0x0003584b) main_cset_slider_pane_g9_ParamLimits

0x6b01,	// (0x0003584b) main_cset_slider_pane_g9

0x6b0d,	// (0x00035857) main_cset_slider_pane_g10_ParamLimits

0x6b0d,	// (0x00035857) main_cset_slider_pane_g10

0x6b19,	// (0x00035863) main_cset_slider_pane_g11_ParamLimits

0x6b19,	// (0x00035863) main_cset_slider_pane_g11

0x6b25,	// (0x0003586f) main_cset_slider_pane_g12_ParamLimits

0x6b25,	// (0x0003586f) main_cset_slider_pane_g12

0x6b31,	// (0x0003587b) main_cset_slider_pane_g13_ParamLimits

0x6b31,	// (0x0003587b) main_cset_slider_pane_g13

0x6b3d,	// (0x00035887) main_cset_slider_pane_g14_ParamLimits

0x6b3d,	// (0x00035887) main_cset_slider_pane_g14

0x6b49,	// (0x00035893) main_cset_slider_pane_g15_ParamLimits

0x6b49,	// (0x00035893) main_cset_slider_pane_g15

0xd385,	// (0x0003c0cf) main_cset_slider_pane_t14_ParamLimits

0xd385,	// (0x0003c0cf) main_cset_slider_pane_t14

0xd3be,	// (0x0003c108) main_cset_slider_pane_t15_ParamLimits

0xd3be,	// (0x0003c108) main_cset_slider_pane_t15

0x7186,	// (0x00035ed0) aid_cam4_burst_size_cell_ParamLimits

0x7186,	// (0x00035ed0) aid_cam4_burst_size_cell

0x71a6,	// (0x00035ef0) grid_cam4_burst_pane_ParamLimits

0x71a6,	// (0x00035ef0) grid_cam4_burst_pane

0x71e0,	// (0x00035f2a) linegrid_cam4_burst_pane_ParamLimits

0x71e0,	// (0x00035f2a) linegrid_cam4_burst_pane

0xd4f5,	// (0x0003c23f) scroll_pane_cp30_ParamLimits

0xd4f5,	// (0x0003c23f) scroll_pane_cp30

0x7202,	// (0x00035f4c) cell_cam4_burst_pane_ParamLimits

0x7202,	// (0x00035f4c) cell_cam4_burst_pane

0xd501,	// (0x0003c24b) linegrid_cam4_burst_pane_g1_ParamLimits

0xd501,	// (0x0003c24b) linegrid_cam4_burst_pane_g1

0x7257,	// (0x00035fa1) linegrid_cam4_burst_pane_g2_ParamLimits

0x7257,	// (0x00035fa1) linegrid_cam4_burst_pane_g2

0xd50e,	// (0x0003c258) linegrid_cam4_burst_pane_g3_ParamLimits

0xd50e,	// (0x0003c258) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003e78b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003e78b) linegrid_cam4_burst_pane_g

0x7268,	// (0x00035fb2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7268,	// (0x00035fb2) linegrid_cam4_burst_pane_g3_copy1

0xd51b,	// (0x0003c265) linegrid_cam4_burst_pane_g4_ParamLimits

0xd51b,	// (0x0003c265) linegrid_cam4_burst_pane_g4

0x7286,	// (0x00035fd0) linegrid_cam4_burst_pane_g5_ParamLimits

0x7286,	// (0x00035fd0) linegrid_cam4_burst_pane_g5

0x7297,	// (0x00035fe1) linegrid_cam4_burst_pane_g6_ParamLimits

0x7297,	// (0x00035fe1) linegrid_cam4_burst_pane_g6

0xd528,	// (0x0003c272) linegrid_cam4_burst_pane_g7_ParamLimits

0xd528,	// (0x0003c272) linegrid_cam4_burst_pane_g7

0x72ae,	// (0x00035ff8) cell_cam4_burst_pane_g1

0xd541,	// (0x0003c28b) main_cam5_pane_t1_ParamLimits

0xd541,	// (0x0003c28b) main_cam5_pane_t1

0xd553,	// (0x0003c29d) main_cam5_pane_t2_ParamLimits

0xd553,	// (0x0003c29d) main_cam5_pane_t2

0xd565,	// (0x0003c2af) main_cam5_pane_t3_ParamLimits

0xd565,	// (0x0003c2af) main_cam5_pane_t3

0xd577,	// (0x0003c2c1) main_cam5_pane_t4_ParamLimits

0xd577,	// (0x0003c2c1) main_cam5_pane_t4

0xd58f,	// (0x0003c2d9) main_cam5_pane_t5_ParamLimits

0xd58f,	// (0x0003c2d9) main_cam5_pane_t5

0xd5a3,	// (0x0003c2ed) main_cam5_pane_t6_ParamLimits

0xd5a3,	// (0x0003c2ed) main_cam5_pane_t6

0xd5b7,	// (0x0003c301) main_cam5_pane_t7_ParamLimits

0xd5b7,	// (0x0003c301) main_cam5_pane_t7

0xd5c9,	// (0x0003c313) main_cam5_pane_t8_ParamLimits

0xd5c9,	// (0x0003c313) main_cam5_pane_t8

0xd5e7,	// (0x0003c331) main_cam5_pane_t9_ParamLimits

0xd5e7,	// (0x0003c331) main_cam5_pane_t9

0xd5f9,	// (0x0003c343) main_cam5_pane_t10_ParamLimits

0xd5f9,	// (0x0003c343) main_cam5_pane_t10

0xd60b,	// (0x0003c355) main_cam5_pane_t11_ParamLimits

0xd60b,	// (0x0003c355) main_cam5_pane_t11

0xd61f,	// (0x0003c369) main_cam5_pane_t12_ParamLimits

0xd61f,	// (0x0003c369) main_cam5_pane_t12

0xd636,	// (0x0003c380) main_cam5_pane_t13_ParamLimits

0xd636,	// (0x0003c380) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003e797) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003e797) main_cam5_pane_t

0x117b,	// (0x0002fec5) popup_scut_keymap_window_ParamLimits

0x117b,	// (0x0002fec5) popup_scut_keymap_window

0x72c1,	// (0x0003600b) aid_size_cell_brow_shortcut

0xaf14,	// (0x00039c5e) bg_popup_window_pane_cp010

0x72cd,	// (0x00036017) grid_scut_pane

0x72d9,	// (0x00036023) cell_scut_pane_ParamLimits

0x72d9,	// (0x00036023) cell_scut_pane

0x72f2,	// (0x0003603c) cell_scut_pane_g1

0xd659,	// (0x0003c3a3) cell_scut_pane_t1

0xd668,	// (0x0003c3b2) cell_scut_pane_t2

0x72fb,	// (0x00036045) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003e7b2) cell_scut_pane_t

0x54cc,	// (0x00034216) main_mup3_pane_g8_ParamLimits

0x54cc,	// (0x00034216) main_mup3_pane_g8

0x0aca,	// (0x0002f814) area_vitu2_query_pane_ParamLimits

0x0aca,	// (0x0002f814) area_vitu2_query_pane

0x702e,	// (0x00035d78) input_focus_pane_cp08

0xd677,	// (0x0003c3c1) area_vitu2_query_pane_g1

0x7309,	// (0x00036053) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003e7b9) area_vitu2_query_pane_g

0x731a,	// (0x00036064) area_vitu2_query_pane_t1_ParamLimits

0x731a,	// (0x00036064) area_vitu2_query_pane_t1

0x732e,	// (0x00036078) area_vitu2_query_pane_t2_ParamLimits

0x732e,	// (0x00036078) area_vitu2_query_pane_t2

0x7342,	// (0x0003608c) area_vitu2_query_pane_t3_ParamLimits

0x7342,	// (0x0003608c) area_vitu2_query_pane_t3

0xd683,	// (0x0003c3cd) area_vitu2_query_pane_t4_ParamLimits

0xd683,	// (0x0003c3cd) area_vitu2_query_pane_t4

0xd6ab,	// (0x0003c3f5) area_vitu2_query_pane_t5_ParamLimits

0xd6ab,	// (0x0003c3f5) area_vitu2_query_pane_t5

0xd6d3,	// (0x0003c41d) area_vitu2_query_pane_t6_ParamLimits

0xd6d3,	// (0x0003c41d) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003e7be) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003e7be) area_vitu2_query_pane_t

0x736a,	// (0x000360b4) bg_button_pane_cp018

0x7378,	// (0x000360c2) bg_button_pane_cp021

0x7384,	// (0x000360ce) bg_button_pane_cp022

0x7395,	// (0x000360df) input_focus_pane_cp09

0x36c2,	// (0x0003240c) aid_size_touch_mv_arrow_left

0x36eb,	// (0x00032435) aid_size_touch_mv_arrow_right

0x6b61,	// (0x000358ab) main_cset_slider_pane_g16_ParamLimits

0x6b61,	// (0x000358ab) main_cset_slider_pane_g16

0x6b6f,	// (0x000358b9) main_cset_slider_pane_g17_ParamLimits

0x6b6f,	// (0x000358b9) main_cset_slider_pane_g17

0x72ae,	// (0x00035ff8) cell_cam4_burst_pane_g1_ParamLimits

0x9c70,	// (0x000389ba) compa_mode_pane

0x6dbc,	// (0x00035b06) popup_vtel_slider_window_g3_ParamLimits

0x6dbc,	// (0x00035b06) popup_vtel_slider_window_g3

0x6dd3,	// (0x00035b1d) popup_vtel_slider_window_g4_ParamLimits

0x6dd3,	// (0x00035b1d) popup_vtel_slider_window_g4

0x6dea,	// (0x00035b34) popup_vtel_slider_window_t1_ParamLimits

0x6dea,	// (0x00035b34) popup_vtel_slider_window_t1

0x9c70,	// (0x000389ba) main_cl_pane

0xc3ac,	// (0x0003b0f6) popup_imed_adjust2_window_ParamLimits

0xc380,	// (0x0003b0ca) bg_tb_trans_pane_cp05_ParamLimits

0xccba,	// (0x0003ba04) popup_imed_adjust2_window_g1_ParamLimits

0xccc9,	// (0x0003ba13) popup_imed_adjust2_window_g2_ParamLimits

0xccc9,	// (0x0003ba13) popup_imed_adjust2_window_g2

0xccd5,	// (0x0003ba1f) popup_imed_adjust2_window_g3_ParamLimits

0xccd5,	// (0x0003ba1f) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003e529) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003e529) popup_imed_adjust2_window_g

0xcce1,	// (0x0003ba2b) popup_imed_adjust2_window_t1_ParamLimits

0xccf9,	// (0x0003ba43) slider_imed_adjust_pane_ParamLimits

0xcd0d,	// (0x0003ba57) slider_imed_adjust_pane_g1_ParamLimits

0xcd1d,	// (0x0003ba67) slider_imed_adjust_pane_g2_ParamLimits

0xcd2d,	// (0x0003ba77) slider_imed_adjust_pane_g3_ParamLimits

0xcd3e,	// (0x0003ba88) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003e530) slider_imed_adjust_pane_g_ParamLimits

0x087e,	// (0x0002f5c8) aid_touch_area_cam4_ParamLimits

0x087e,	// (0x0002f5c8) aid_touch_area_cam4

0x65cf,	// (0x00035319) battery_pane_cp01

0x0950,	// (0x0002f69a) main_camera4_pane_g6_ParamLimits

0x0950,	// (0x0002f69a) main_camera4_pane_g6

0x097a,	// (0x0002f6c4) main_camera4_pane_t2_ParamLimits

0x097a,	// (0x0002f6c4) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003e633) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003e633) main_camera4_pane_t

0x099b,	// (0x0002f6e5) aid_touch_area_vid4_ParamLimits

0x099b,	// (0x0002f6e5) aid_touch_area_vid4

0x09ef,	// (0x0002f739) main_video4_pane_g5_ParamLimits

0x09ef,	// (0x0002f739) main_video4_pane_g5

0x0a14,	// (0x0002f75e) vid4_progress_pane_ParamLimits

0x0a14,	// (0x0002f75e) vid4_progress_pane

0xd34b,	// (0x0003c095) main_cset_slider_pane_g18_ParamLimits

0xd34b,	// (0x0003c095) main_cset_slider_pane_g18

0xd535,	// (0x0003c27f) cell_cam4_burst_pane_g2_ParamLimits

0xd535,	// (0x0003c27f) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003e792) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003e792) cell_cam4_burst_pane_g

0xa412,	// (0x0003915c) bg_cl_pane_ParamLimits

0xa412,	// (0x0003915c) bg_cl_pane

0x73a6,	// (0x000360f0) cl_header_pane_ParamLimits

0x73a6,	// (0x000360f0) cl_header_pane

0x73ba,	// (0x00036104) cl_listscroll_pane_ParamLimits

0x73ba,	// (0x00036104) cl_listscroll_pane

0xd71f,	// (0x0003c469) bg_cl_pane_g1

0xd727,	// (0x0003c471) bg_cl_pane_g2

0xd72f,	// (0x0003c479) bg_cl_pane_g3

0xd737,	// (0x0003c481) bg_cl_pane_g4

0xd73f,	// (0x0003c489) bg_cl_pane_g5

0xd747,	// (0x0003c491) bg_cl_pane_g6

0xd74f,	// (0x0003c499) bg_cl_pane_g7

0xd757,	// (0x0003c4a1) bg_cl_pane_g8

0xd75f,	// (0x0003c4a9) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003e7cd) bg_cl_pane_g

0x73ca,	// (0x00036114) aid_height_cl_leading_ParamLimits

0x73ca,	// (0x00036114) aid_height_cl_leading

0x73d6,	// (0x00036120) aid_height_cl_text_ParamLimits

0x73d6,	// (0x00036120) aid_height_cl_text

0x9cd1,	// (0x00038a1b) bg_cl_header_pane_ParamLimits

0x9cd1,	// (0x00038a1b) bg_cl_header_pane

0x73f5,	// (0x0003613f) cl_header_pane_g1_ParamLimits

0x73f5,	// (0x0003613f) cl_header_pane_g1

0x740b,	// (0x00036155) cl_header_pane_t1_ParamLimits

0x740b,	// (0x00036155) cl_header_pane_t1

0xd767,	// (0x0003c4b1) cl_list_pane

0xd31e,	// (0x0003c068) hc_scroll_pane_cp01

0xa81b,	// (0x00039565) bg_cl_header_pane_g1

0xd200,	// (0x0003bf4a) bg_cl_header_pane_g2

0xa83b,	// (0x00039585) bg_cl_header_pane_g3

0xd210,	// (0x0003bf5a) bg_cl_header_pane_g4

0xd208,	// (0x0003bf52) bg_cl_header_pane_g5

0xd438,	// (0x0003c182) bg_cl_header_pane_g6

0xd228,	// (0x0003bf72) bg_cl_header_pane_g7

0xd230,	// (0x0003bf7a) bg_cl_header_pane_g8

0xd220,	// (0x0003bf6a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003e7e0) bg_cl_header_pane_g

0x7424,	// (0x0003616e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7424,	// (0x0003616e) hc_cl_list_double_graphic_heading_pane

0x7437,	// (0x00036181) hc_cl_list_single_graphic_pane_ParamLimits

0x7437,	// (0x00036181) hc_cl_list_single_graphic_pane

0x744f,	// (0x00036199) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x744f,	// (0x00036199) hc_cl_list_single_graphic_pane_g1

0x745b,	// (0x000361a5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x745b,	// (0x000361a5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003e7f3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003e7f3) hc_cl_list_single_graphic_pane_g

0x746f,	// (0x000361b9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x746f,	// (0x000361b9) hc_cl_list_single_graphic_pane_t1

0x744f,	// (0x00036199) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x744f,	// (0x00036199) hc_cl_list_double_graphic_heading_pane_g1

0x7484,	// (0x000361ce) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7484,	// (0x000361ce) hc_cl_list_double_graphic_heading_pane_g2

0x7498,	// (0x000361e2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7498,	// (0x000361e2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003e7f8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003e7f8) hc_cl_list_double_graphic_heading_pane_g

0x74ac,	// (0x000361f6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74ac,	// (0x000361f6) hc_cl_list_double_graphic_heading_pane_t1

0x74c1,	// (0x0003620b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74c1,	// (0x0003620b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003e7ff) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003e7ff) hc_cl_list_double_graphic_heading_pane_t

0x0f0a,	// (0x0002fc54) vid4_progress_pane_g1

0x0f1c,	// (0x0002fc66) vid4_progress_pane_g2

0x3dbe,	// (0x00032b08) vid4_progress_pane_g3

0x74de,	// (0x00036228) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003e804) vid4_progress_pane_g

0x74fc,	// (0x00036246) vid4_progress_pane_t1

0x7511,	// (0x0003625b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003e80f) vid4_progress_pane_t

0x753c,	// (0x00036286) wait_bar_pane_cp07

0xc5be,	// (0x0003b308) blid_firmament_pane_ParamLimits

0xc601,	// (0x0003b34b) popup_blid_sat_info2_window_g1

0xc625,	// (0x0003b36f) popup_blid_sat_info2_window_t3

0xc633,	// (0x0003b37d) popup_blid_sat_info2_window_t4

0xc641,	// (0x0003b38b) popup_blid_sat_info2_window_t5

0xc64f,	// (0x0003b399) popup_blid_sat_info2_window_t6

0xc65f,	// (0x0003b3a9) popup_blid_sat_info2_window_t7

0xc66d,	// (0x0003b3b7) popup_blid_sat_info2_window_t8

0xc67b,	// (0x0003b3c5) popup_blid_sat_info2_window_t9

0xc689,	// (0x0003b3d3) popup_blid_sat_info2_window_t10

0xc751,	// (0x0003b49b) aid_firma_cardinal_ParamLimits

0xc765,	// (0x0003b4af) blid_firmament_pane_t1_ParamLimits

0xc77c,	// (0x0003b4c6) blid_firmament_pane_t2_ParamLimits

0xc793,	// (0x0003b4dd) blid_firmament_pane_t3_ParamLimits

0xc7aa,	// (0x0003b4f4) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0003e422) blid_firmament_pane_t_ParamLimits

0xc7c1,	// (0x0003b50b) blid_sat_info_pane_ParamLimits

0x9cd1,	// (0x00038a1b) main_cam_set_pane_ParamLimits

0x5d2b,	// (0x00034a75) aid_size_cell_colour_35_ParamLimits

0x5d4b,	// (0x00034a95) aid_size_cell_colour_112_ParamLimits

0x5d6b,	// (0x00034ab5) aid_size_cell_effect_ParamLimits

0xc380,	// (0x0003b0ca) bg_tb_trans_pane_cp02_ParamLimits

0xaa74,	// (0x000397be) heading_imed_pane_ParamLimits

0x5d8b,	// (0x00034ad5) listscroll_imed_pane_ParamLimits

0xb9a2,	// (0x0003a6ec) popup_call2_audio_first_window_g5_ParamLimits

0xb9a2,	// (0x0003a6ec) popup_call2_audio_first_window_g5

0x0659,	// (0x0002f3a3) aid_size_touch_image3_arrow_left_ParamLimits

0x0659,	// (0x0002f3a3) aid_size_touch_image3_arrow_left

0x0685,	// (0x0002f3cf) aid_size_touch_image3_arrow_right_ParamLimits

0x0685,	// (0x0002f3cf) aid_size_touch_image3_arrow_right

0x7527,	// (0x00036271) vid4_progress_pane_t3

0x60aa,	// (0x00034df4) main_hwr_training_symbol_option_pane_ParamLimits

0x60aa,	// (0x00034df4) main_hwr_training_symbol_option_pane

0xcfa9,	// (0x0003bcf3) popup_hwr_training_preview_window_ParamLimits

0xcfa9,	// (0x0003bcf3) popup_hwr_training_preview_window

0x04f6,	// (0x0002f240) hwr_training_navi_pane_g5_ParamLimits

0x04f6,	// (0x0002f240) hwr_training_navi_pane_g5

0xd1ee,	// (0x0003bf38) popup_char_count_window

0x6664,	// (0x000353ae) bg_popup_sub_pane_cp20_ParamLimits

0x0e71,	// (0x0002fbbb) list_vitu2_match_list_pane_ParamLimits

0x0e80,	// (0x0002fbca) vitu2_page_scroll_pane_ParamLimits

0x0e80,	// (0x0002fbca) vitu2_page_scroll_pane

0xd792,	// (0x0003c4dc) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd792,	// (0x0003c4dc) list_single_hwr_training_symbol_option_pane

0xd7a5,	// (0x0003c4ef) list_single_hwr_training_symbol_option_pane_g1

0xd7ad,	// (0x0003c4f7) list_single_hwr_training_symbol_option_pane_t1

0xd7bb,	// (0x0003c505) bg_button_pane_cp023

0xd7c4,	// (0x0003c50e) bg_button_pane_cp024

0x757f,	// (0x000362c9) vitu2_page_scroll_pane_g1

0x7587,	// (0x000362d1) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003e816) vitu2_page_scroll_pane_g

0x7591,	// (0x000362db) vitu2_page_scroll_pane_t1

0xc51e,	// (0x0003b268) popup_char_count_window_g1

0xd7f7,	// (0x0003c541) popup_char_count_window_g2

0xd800,	// (0x0003c54a) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003e81b) popup_char_count_window_g

0xd809,	// (0x0003c553) popup_char_count_window_t1

0x9c70,	// (0x000389ba) main_vded2_pane

0xcca6,	// (0x0003b9f0) aid_size_cell_imed_line

0xccb0,	// (0x0003b9fa) grid_imed_line_width_pane

0x66b9,	// (0x00035403) vid4_indicators_pane_g4

0xd817,	// (0x0003c561) cell_imed_line_width_pane_ParamLimits

0xd817,	// (0x0003c561) cell_imed_line_width_pane

0xd82d,	// (0x0003c577) cell_imed_line_width_pane_g1

0xd0d1,	// (0x0003be1b) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003e822) cell_imed_line_width_pane_g

0x75a0,	// (0x000362ea) main_vded2_pane_g1_ParamLimits

0x75a0,	// (0x000362ea) main_vded2_pane_g1

0x75bb,	// (0x00036305) main_vded2_pane_g2_ParamLimits

0x75bb,	// (0x00036305) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003e827) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003e827) main_vded2_pane_g

0x75cd,	// (0x00036317) vded2_slider_pane_ParamLimits

0x75cd,	// (0x00036317) vded2_slider_pane

0x75dd,	// (0x00036327) aid_size_touch_vded2_end

0x75e7,	// (0x00036331) aid_size_touch_vded2_playhead

0xd836,	// (0x0003c580) aid_size_touch_vded2_start

0xd83e,	// (0x0003c588) vded2_slider_bg_pane

0xd847,	// (0x0003c591) vded2_slider_pane_g1

0xd850,	// (0x0003c59a) vded2_slider_pane_g2

0x75f1,	// (0x0003633b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003e82c) vded2_slider_pane_g

0xd858,	// (0x0003c5a2) vded2_slider_bg_pane_g1

0xd861,	// (0x0003c5ab) vded2_slider_bg_pane_g2

0xd86a,	// (0x0003c5b4) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003e833) vded2_slider_bg_pane_g

0x3dd6,	// (0x00032b20) aid_postcard_touch_down_pane_ParamLimits

0x3dd6,	// (0x00032b20) aid_postcard_touch_down_pane

0x3dee,	// (0x00032b38) aid_postcard_touch_up_pane_ParamLimits

0x3dee,	// (0x00032b38) aid_postcard_touch_up_pane

0x9c70,	// (0x000389ba) main_blid2_pane

0xc38e,	// (0x0003b0d8) popup_blid2_search_window

0x9c70,	// (0x000389ba) blid2_gps_pane

0x9c70,	// (0x000389ba) blid2_navig_pane

0x9c70,	// (0x000389ba) blid2_search_pane

0x9c70,	// (0x000389ba) blid2_tripm_pane

0x75fc,	// (0x00036346) blid2_search_pane_g1_ParamLimits

0x75fc,	// (0x00036346) blid2_search_pane_g1

0x760f,	// (0x00036359) blid2_search_pane_t1_ParamLimits

0x760f,	// (0x00036359) blid2_search_pane_t1

0x7621,	// (0x0003636b) aid_size_cell_blid2_gps_ParamLimits

0x7621,	// (0x0003636b) aid_size_cell_blid2_gps

0x7639,	// (0x00036383) blid2_gps_pane_g1_ParamLimits

0x7639,	// (0x00036383) blid2_gps_pane_g1

0x764d,	// (0x00036397) grid_blid2_satellite_pane_ParamLimits

0x764d,	// (0x00036397) grid_blid2_satellite_pane

0x7665,	// (0x000363af) blid2_navig_pane_g1_ParamLimits

0x7665,	// (0x000363af) blid2_navig_pane_g1

0x7671,	// (0x000363bb) blid2_navig_pane_t1_ParamLimits

0x7671,	// (0x000363bb) blid2_navig_pane_t1

0x768c,	// (0x000363d6) blid2_navig_pane_t2_ParamLimits

0x768c,	// (0x000363d6) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003e83a) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003e83a) blid2_navig_pane_t

0x76a7,	// (0x000363f1) blid2_navig_ring_pane_ParamLimits

0x76a7,	// (0x000363f1) blid2_navig_ring_pane

0x76c2,	// (0x0003640c) blid2_speed_pane_ParamLimits

0x76c2,	// (0x0003640c) blid2_speed_pane

0x76ce,	// (0x00036418) blid2_tripm_pane_g1_ParamLimits

0x76ce,	// (0x00036418) blid2_tripm_pane_g1

0x76e9,	// (0x00036433) blid2_tripm_pane_g2_ParamLimits

0x76e9,	// (0x00036433) blid2_tripm_pane_g2

0x76fd,	// (0x00036447) blid2_tripm_pane_g3_ParamLimits

0x76fd,	// (0x00036447) blid2_tripm_pane_g3

0x7711,	// (0x0003645b) blid2_tripm_pane_g4_ParamLimits

0x7711,	// (0x0003645b) blid2_tripm_pane_g4

0x7725,	// (0x0003646f) blid2_tripm_pane_g5_ParamLimits

0x7725,	// (0x0003646f) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003e83f) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003e83f) blid2_tripm_pane_g

0x774b,	// (0x00036495) blid2_tripm_pane_t1_ParamLimits

0x774b,	// (0x00036495) blid2_tripm_pane_t1

0x7764,	// (0x000364ae) blid2_tripm_pane_t2_ParamLimits

0x7764,	// (0x000364ae) blid2_tripm_pane_t2

0x777d,	// (0x000364c7) blid2_tripm_pane_t3_ParamLimits

0x777d,	// (0x000364c7) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003e84c) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003e84c) blid2_tripm_pane_t

0x77c4,	// (0x0003650e) cell_blid2_satellite_pane_ParamLimits

0x77c4,	// (0x0003650e) cell_blid2_satellite_pane

0x77e2,	// (0x0003652c) cell_blid2_satellite_pane_g1

0xd873,	// (0x0003c5bd) cell_blid2_satellite_pane_t1

0xc7d1,	// (0x0003b51b) blid2_speed_pane_g1

0xd881,	// (0x0003c5cb) blid2_speed_pane_t1

0xd88f,	// (0x0003c5d9) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003e855) blid2_speed_pane_t

0xc7d1,	// (0x0003b51b) blid2_navig_ring_pane_g1

0x77eb,	// (0x00036535) blid2_navig_ring_pane_g2

0x77f3,	// (0x0003653d) blid2_navig_ring_pane_g3

0x77fb,	// (0x00036545) blid2_navig_ring_pane_g4

0x7803,	// (0x0003654d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003e85a) blid2_navig_ring_pane_g

0x9c70,	// (0x000389ba) bg_popup_window_pane_cp011

0xd89d,	// (0x0003c5e7) popup_blid2_search_window_g1

0xd8a5,	// (0x0003c5ef) popup_blid2_search_window_t1

0xd8b3,	// (0x0003c5fd) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003e865) popup_blid2_search_window_t

0xa72a,	// (0x00039474) main_browser_pane_g1

0xa412,	// (0x0003915c) main_browser_pane_ParamLimits

0x6664,	// (0x000353ae) bg_button_pane_cp011_ParamLimits

0x0de5,	// (0x0002fb2f) cell_vitu2_function_pane_g1_ParamLimits

0xc380,	// (0x0003b0ca) bg_popup_sub_pane_cp22_ParamLimits

0x702e,	// (0x00035d78) input_focus_pane_cp08_ParamLimits

0x7045,	// (0x00035d8f) popup_vitu2_query_button_pane_ParamLimits

0x7045,	// (0x00035d8f) popup_vitu2_query_button_pane

0x7056,	// (0x00035da0) popup_vitu2_query_input_button_pane

0xd47f,	// (0x0003c1c9) popup_vitu2_query_window_g1_ParamLimits

0x7060,	// (0x00035daa) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003e766) popup_vitu2_query_window_g_ParamLimits

0x9c70,	// (0x000389ba) bg_button_pane_cp026

0x780b,	// (0x00036555) popup_vitu2_query_input_button_pane_g1

0x9c70,	// (0x000389ba) bg_button_pane_cp025

0xd8c1,	// (0x0003c60b) popup_vitu2_query_button_pane_t1

0x5146,	// (0x00033e90) main_mp3_pane_t6

0x5154,	// (0x00033e9e) popup_slider_window_cp01

0x660f,	// (0x00035359) cam4_battery_pane

0x6672,	// (0x000353bc) cam4_battery_pane_cp02

0x74d6,	// (0x00036220) cam4_battery_pane_cp01

0x74d6,	// (0x00036220) cam4_battery_pane_cp03

0xd0d9,	// (0x0003be23) cam4_battery_pane_g1

0xc7d1,	// (0x0003b51b) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003e86a) cam4_battery_pane_g

0xc697,	// (0x0003b3e1) popup_blid_sat_info2_window_t11

0x36c2,	// (0x0003240c) aid_size_touch_mv_arrow_left_ParamLimits

0x36eb,	// (0x00032435) aid_size_touch_mv_arrow_right_ParamLimits

0xae74,	// (0x00039bbe) navi_pane_g1_ParamLimits

0x372a,	// (0x00032474) navi_pane_g2_ParamLimits

0x3758,	// (0x000324a2) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0003e134) navi_pane_g_ParamLimits

0x37b2,	// (0x000324fc) navi_pane_mv_t1_ParamLimits

0x5d97,	// (0x00034ae1) grid_imed_effect_pane_ParamLimits

0x20ef,	// (0x00030e39) aid_placing_vt_slider_lsc

0xa675,	// (0x000393bf) aid_placing_vt_slider_prt

0x9cd1,	// (0x00038a1b) bg_tb_trans_pane_cp01_ParamLimits

0xc921,	// (0x0003b66b) popup_image_details_window_g1_ParamLimits

0xc934,	// (0x0003b67e) popup_image_details_window_g2_ParamLimits

0xc949,	// (0x0003b693) popup_image_details_window_g3_ParamLimits

0xc949,	// (0x0003b693) popup_image_details_window_g3

0xf71d,	// (0x0003e467) popup_image_details_window_g_ParamLimits

0xc95d,	// (0x0003b6a7) popup_image_details_window_t1_ParamLimits

0xc96f,	// (0x0003b6b9) popup_image_details_window_t2_ParamLimits

0xc988,	// (0x0003b6d2) popup_image_details_window_t3_ParamLimits

0xc99c,	// (0x0003b6e6) popup_image_details_window_t4_ParamLimits

0xc9b7,	// (0x0003b701) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0003e46e) popup_image_details_window_t_ParamLimits

0x73e2,	// (0x0003612c) cl_header_name_pane_ParamLimits

0x73e2,	// (0x0003612c) cl_header_name_pane

0x7813,	// (0x0003655d) cl_header_name_pane_t1_ParamLimits

0x7813,	// (0x0003655d) cl_header_name_pane_t1

0x7834,	// (0x0003657e) cl_header_name_pane_t2_ParamLimits

0x7834,	// (0x0003657e) cl_header_name_pane_t2

0x7876,	// (0x000365c0) cl_header_name_pane_t3_ParamLimits

0x7876,	// (0x000365c0) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003e86f) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003e86f) cl_header_name_pane_t

0x3783,	// (0x000324cd) navi_pane_mv_g2_ParamLimits

0xd1ab,	// (0x0003bef5) field_vitu2_entry_pane_g1_ParamLimits

0xd1b7,	// (0x0003bf01) field_vitu2_entry_pane_g2_ParamLimits

0xd1c3,	// (0x0003bf0d) field_vitu2_entry_pane_g3_ParamLimits

0xd1c3,	// (0x0003bf0d) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003e665) field_vitu2_entry_pane_g_ParamLimits

0x0c70,	// (0x0002f9ba) cell_vitu2_itu_pane_g1_ParamLimits

0x0c80,	// (0x0002f9ca) cell_vitu2_itu_pane_g2_ParamLimits

0x0c80,	// (0x0002f9ca) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003e671) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003e671) cell_vitu2_itu_pane_g

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp05_ParamLimits

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp05

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp03

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp04

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp10_ParamLimits

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp10

0x7384,	// (0x000360ce) bg_vkb2_func_pane_cp08

0x736a,	// (0x000360b4) bg_vkb2_func_pane_cp06

0x7378,	// (0x000360c2) bg_vkb2_func_pane_cp07

0xd7cd,	// (0x0003c517) bg_vkb2_func_pane_cp11_ParamLimits

0xd7cd,	// (0x0003c517) bg_vkb2_func_pane_cp11

0xd7e2,	// (0x0003c52c) bg_vkb2_func_pane_cp12_ParamLimits

0xd7e2,	// (0x0003c52c) bg_vkb2_func_pane_cp12

0x9c70,	// (0x000389ba) bg_vkb2_func_pane_cp09

0xd200,	// (0x0003bf4a) bg_vkb2_func_pane_g1

0xa83b,	// (0x00039585) bg_vkb2_func_pane_g2

0xd208,	// (0x0003bf52) bg_vkb2_func_pane_g3

0xd210,	// (0x0003bf5a) bg_vkb2_func_pane_g4

0xd438,	// (0x0003c182) bg_vkb2_func_pane_g5

0xd228,	// (0x0003bf72) bg_vkb2_func_pane_g6

0xd230,	// (0x0003bf7a) bg_vkb2_func_pane_g7

0xd220,	// (0x0003bf6a) bg_vkb2_func_pane_g8

0xa81b,	// (0x00039565) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003e876) bg_vkb2_func_pane_g

0x7739,	// (0x00036483) blid2_tripm_pane_g6_ParamLimits

0x7739,	// (0x00036483) blid2_tripm_pane_g6

0xd061,	// (0x0003bdab) mp4_progress_pane_g1

0x77b0,	// (0x000364fa) blid2_tripm_values_pane_ParamLimits

0x77b0,	// (0x000364fa) blid2_tripm_values_pane

0x78a7,	// (0x000365f1) blid2_tripm_values_pane_t1

0x78b5,	// (0x000365ff) blid2_tripm_values_pane_t2

0x78c3,	// (0x0003660d) blid2_tripm_values_pane_t3

0x78d1,	// (0x0003661b) blid2_tripm_values_pane_t4

0x78df,	// (0x00036629) blid2_tripm_values_pane_t5

0x78ed,	// (0x00036637) blid2_tripm_values_pane_t6

0x78fb,	// (0x00036645) blid2_tripm_values_pane_t7

0x7909,	// (0x00036653) blid2_tripm_values_pane_t8

0x7917,	// (0x00036661) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003e889) blid2_tripm_values_pane_t

0x212c,	// (0x00030e76) call_video_pane_t1_ParamLimits

0x2146,	// (0x00030e90) call_video_pane_t2_ParamLimits

0xf273,	// (0x0003dfbd) call_video_pane_t_ParamLimits

0x3d19,	// (0x00032a63) msg_header_pane_g1_ParamLimits

0xb09e,	// (0x00039de8) msg_header_pane_g2_ParamLimits

0xb09e,	// (0x00039de8) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0003e1d7) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0003e1d7) msg_header_pane_g

0xa412,	// (0x0003915c) main_clock2_pane_ParamLimits

0x5b00,	// (0x0003484a) grid_clock2_toolbar_pane_ParamLimits

0x5b00,	// (0x0003484a) grid_clock2_toolbar_pane

0x5b00,	// (0x0003484a) listscroll_clock2_pane_ParamLimits

0x5b00,	// (0x0003484a) listscroll_clock2_pane

0x5bf7,	// (0x00034941) main_clock2_pane_t3_ParamLimits

0x5bf7,	// (0x00034941) main_clock2_pane_t3

0x5c1b,	// (0x00034965) main_clock2_pane_t4_ParamLimits

0x5c1b,	// (0x00034965) main_clock2_pane_t4

0xd8cf,	// (0x0003c619) cell_clock2_toolbar_pane

0xd8d7,	// (0x0003c621) cell_clock2_toolbar_pane_cp01

0xd8d7,	// (0x0003c621) cell_clock2_toolbar_pane_cp02

0xd8df,	// (0x0003c629) cell_clock2_toolbar_pane_cp03

0xd8e7,	// (0x0003c631) list_clock2_pane

0xadda,	// (0x00039b24) scroll_pane_cp10

0xd8ef,	// (0x0003c639) list_single_clock2_pane_ParamLimits

0xd8ef,	// (0x0003c639) list_single_clock2_pane

0xaf14,	// (0x00039c5e) list_highlight_pane_cp08

0xd8fc,	// (0x0003c646) list_single_clock2_pane_t1

0xd90a,	// (0x0003c654) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003e89c) list_single_clock2_pane_t

0x9c70,	// (0x000389ba) bg_button_pane_cp10

0xd918,	// (0x0003c662) cell_clock2_toolbar_pane_g1

0xffd4,	// (0x0002ed1e) aid_main_viewer_pane_g1_ParamLimits

0xffd4,	// (0x0002ed1e) aid_main_viewer_pane_g1

0xffe2,	// (0x0002ed2c) aid_main_viewer_pane_g2_ParamLimits

0xffe2,	// (0x0002ed2c) aid_main_viewer_pane_g2

0x3d70,	// (0x00032aba) aid_main_viewer_pane_g3_ParamLimits

0x3d70,	// (0x00032aba) aid_main_viewer_pane_g3

0x3d7f,	// (0x00032ac9) aid_main_viewer_pane_g4_ParamLimits

0x3d7f,	// (0x00032ac9) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0003e1e8) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003e1e8) aid_main_viewer_pane_g

0x46e0,	// (0x0003342a) main_calc_pane_ParamLimits

0x46f4,	// (0x0003343e) main_dialer2_pane_ParamLimits

0x9c70,	// (0x000389ba) main_cam6_pane

0x9c70,	// (0x000389ba) main_vid6_pane

0x5b0c,	// (0x00034856) listscroll_gen_pane_cp06_ParamLimits

0x5b0c,	// (0x00034856) listscroll_gen_pane_cp06

0x5c3e,	// (0x00034988) main_clock2_pane_t5_ParamLimits

0x5c3e,	// (0x00034988) main_clock2_pane_t5

0x5c9e,	// (0x000349e8) aid_call2_pane_cp10_ParamLimits

0x5cb0,	// (0x000349fa) aid_call_pane_cp10_ParamLimits

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5cc2,	// (0x00034a0c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5cc2,	// (0x00034a0c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae49,	// (0x00039b93) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003e51e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5cd8,	// (0x00034a22) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63bd,	// (0x00035107) cell_dialer2_keypad_pane_g2_ParamLimits

0x63bd,	// (0x00035107) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003e604) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003e604) cell_dialer2_keypad_pane_g

0x63d9,	// (0x00035123) cell_dialer2_keypad_pane_t1

0x6a52,	// (0x0003579c) main_cset_text2_pane_ParamLimits

0x6a52,	// (0x0003579c) main_cset_text2_pane

0xd677,	// (0x0003c3c1) area_vitu2_query_pane_g1_ParamLimits

0x7309,	// (0x00036053) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003e7b9) area_vitu2_query_pane_g_ParamLimits

0xd6fb,	// (0x0003c445) area_vitu2_query_pane_t7_ParamLimits

0xd6fb,	// (0x0003c445) area_vitu2_query_pane_t7

0x736a,	// (0x000360b4) bg_button_pane_cp018_ParamLimits

0x7378,	// (0x000360c2) bg_button_pane_cp021_ParamLimits

0x7384,	// (0x000360ce) bg_button_pane_cp022_ParamLimits

0x7384,	// (0x000360ce) bg_vkb2_func_pane_cp08_ParamLimits

0x736a,	// (0x000360b4) bg_vkb2_func_pane_cp06_ParamLimits

0x7378,	// (0x000360c2) bg_vkb2_func_pane_cp07_ParamLimits

0x7395,	// (0x000360df) input_focus_pane_cp09_ParamLimits

0x7925,	// (0x0003666f) cam6_autofocus_pane_ParamLimits

0x7925,	// (0x0003666f) cam6_autofocus_pane

0x0f2e,	// (0x0002fc78) cam6_image_uncrop_pane_ParamLimits

0x0f2e,	// (0x0002fc78) cam6_image_uncrop_pane

0x0f3d,	// (0x0002fc87) cam6_indi_pane_ParamLimits

0x0f3d,	// (0x0002fc87) cam6_indi_pane

0x0f53,	// (0x0002fc9d) cam6_mode_pane_ParamLimits

0x0f53,	// (0x0002fc9d) cam6_mode_pane

0x0f65,	// (0x0002fcaf) cam6_timer_pane_ParamLimits

0x0f65,	// (0x0002fcaf) cam6_timer_pane

0x0f71,	// (0x0002fcbb) cam6_zoom_pane_ParamLimits

0x0f71,	// (0x0002fcbb) cam6_zoom_pane

0x7933,	// (0x0003667d) cam6_mode_pane_g1_ParamLimits

0x7933,	// (0x0003667d) cam6_mode_pane_g1

0x7943,	// (0x0003668d) cam6_mode_pane_g2_ParamLimits

0x7943,	// (0x0003668d) cam6_mode_pane_g2

0x7953,	// (0x0003669d) cam6_mode_pane_g3_ParamLimits

0x7953,	// (0x0003669d) cam6_mode_pane_g3

0x7963,	// (0x000366ad) cam6_mode_pane_g4_ParamLimits

0x7963,	// (0x000366ad) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003e8a1) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003e8a1) cam6_mode_pane_g

0xd920,	// (0x0003c66a) bg_tb_trans_pane_cp08_ParamLimits

0xd920,	// (0x0003c66a) bg_tb_trans_pane_cp08

0xd92e,	// (0x0003c678) cam6_battery_pane_ParamLimits

0xd92e,	// (0x0003c678) cam6_battery_pane

0xd944,	// (0x0003c68e) cam6_indi_pane_g1_ParamLimits

0xd944,	// (0x0003c68e) cam6_indi_pane_g1

0xd956,	// (0x0003c6a0) cam6_indi_pane_g2_ParamLimits

0xd956,	// (0x0003c6a0) cam6_indi_pane_g2

0xd968,	// (0x0003c6b2) cam6_indi_pane_g3_ParamLimits

0xd968,	// (0x0003c6b2) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003e8aa) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003e8aa) cam6_indi_pane_g

0xd97a,	// (0x0003c6c4) cam6_indi_pane_t1_ParamLimits

0xd97a,	// (0x0003c6c4) cam6_indi_pane_t1

0x66f6,	// (0x00035440) cam6_autofocus_pane_g1

0x66ee,	// (0x00035438) cam6_autofocus_pane_g2

0x6706,	// (0x00035450) cam6_autofocus_pane_g3

0x66fe,	// (0x00035448) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003e8b1) cam6_autofocus_pane_g

0xd9a0,	// (0x0003c6ea) cam6_timer_pane_g1

0xd9a8,	// (0x0003c6f2) cam6_timer_pane_t1

0xd9b6,	// (0x0003c700) cam6_zoom_cont_pane

0xd9be,	// (0x0003c708) cam6_zoom_pane_g1

0xd9c6,	// (0x0003c710) cam6_zoom_pane_g2

0x7973,	// (0x000366bd) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003e8ba) cam6_zoom_pane_g

0xc7d1,	// (0x0003b51b) cam6_battery_pane_g1

0xc7d1,	// (0x0003b51b) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0003e42b) cam6_battery_pane_g

0xd9ce,	// (0x0003c718) cam6_zoom_cont_pane_g1

0xd9d7,	// (0x0003c721) cam6_zoom_cont_pane_g2

0xd9e0,	// (0x0003c72a) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003e8c1) cam6_zoom_cont_pane_g

0x7990,	// (0x000366da) cam6_mode_pane_cp_ParamLimits

0x7990,	// (0x000366da) cam6_mode_pane_cp

0x79a2,	// (0x000366ec) cam6_zoom_pane_cp_ParamLimits

0x79a2,	// (0x000366ec) cam6_zoom_pane_cp

0x79b0,	// (0x000366fa) vid6_image_uncrop_cif_pane_ParamLimits

0x79b0,	// (0x000366fa) vid6_image_uncrop_cif_pane

0x79c0,	// (0x0003670a) vid6_image_uncrop_nhd_pane_ParamLimits

0x79c0,	// (0x0003670a) vid6_image_uncrop_nhd_pane

0x79cf,	// (0x00036719) vid6_image_uncrop_vga_pane_ParamLimits

0x79cf,	// (0x00036719) vid6_image_uncrop_vga_pane

0x79de,	// (0x00036728) vid6_image_uncrop_wvga_pane_ParamLimits

0x79de,	// (0x00036728) vid6_image_uncrop_wvga_pane

0x79ed,	// (0x00036737) vid6_indi_pane_ParamLimits

0x79ed,	// (0x00036737) vid6_indi_pane

0xd920,	// (0x0003c66a) bg_tb_trans_pane_cp09_ParamLimits

0xd920,	// (0x0003c66a) bg_tb_trans_pane_cp09

0xd9f8,	// (0x0003c742) cam6_battery_pane_cp_ParamLimits

0xd9f8,	// (0x0003c742) cam6_battery_pane_cp

0xda04,	// (0x0003c74e) vid6_indi_pane_g1_ParamLimits

0xda04,	// (0x0003c74e) vid6_indi_pane_g1

0xda16,	// (0x0003c760) vid6_indi_pane_g2_ParamLimits

0xda16,	// (0x0003c760) vid6_indi_pane_g2

0xda28,	// (0x0003c772) vid6_indi_pane_g3_ParamLimits

0xda28,	// (0x0003c772) vid6_indi_pane_g3

0xda3f,	// (0x0003c789) vid6_indi_pane_g4_ParamLimits

0xda3f,	// (0x0003c789) vid6_indi_pane_g4

0xda56,	// (0x0003c7a0) vid6_indi_pane_g5_ParamLimits

0xda56,	// (0x0003c7a0) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003e8c8) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003e8c8) vid6_indi_pane_g

0xda70,	// (0x0003c7ba) vid6_indi_pane_t1_ParamLimits

0xda70,	// (0x0003c7ba) vid6_indi_pane_t1

0xda86,	// (0x0003c7d0) vid6_indi_pane_t2_ParamLimits

0xda86,	// (0x0003c7d0) vid6_indi_pane_t2

0xdaae,	// (0x0003c7f8) vid6_indi_pane_t3_ParamLimits

0xdaae,	// (0x0003c7f8) vid6_indi_pane_t3

0xdad6,	// (0x0003c820) vid6_indi_pane_t4_ParamLimits

0xdad6,	// (0x0003c820) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003e8d3) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003e8d3) vid6_indi_pane_t

0xdafa,	// (0x0003c844) wait_bar_pane_cp08

0x7a05,	// (0x0003674f) main_cset_text2_pane_t1_ParamLimits

0x7a05,	// (0x0003674f) main_cset_text2_pane_t1

0x797b,	// (0x000366c5) listscroll_gen_pane_cp06_t1_ParamLimits

0x797b,	// (0x000366c5) listscroll_gen_pane_cp06_t1

0x9c70,	// (0x000389ba) main_cam6_set_pane

0x6601,	// (0x0003534b) bg_tb_trans_pane_cp06_ParamLimits

0x6617,	// (0x00035361) cam4_indicators_pane_g1_ParamLimits

0x6628,	// (0x00035372) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003e641) cam4_indicators_pane_g_ParamLimits

0x6640,	// (0x0003538a) cam4_indicators_pane_t1_ParamLimits

0x6664,	// (0x000353ae) bg_tb_trans_pane_cp07_ParamLimits

0x667c,	// (0x000353c6) vid4_indicators_pane_g1_ParamLimits

0x6692,	// (0x000353dc) vid4_indicators_pane_g2_ParamLimits

0x66a6,	// (0x000353f0) vid4_indicators_pane_g3_ParamLimits

0x66b9,	// (0x00035403) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003e653) vid4_indicators_pane_g_ParamLimits

0x66d7,	// (0x00035421) vid4_indicators_pane_t1_ParamLimits

0x0f0a,	// (0x0002fc54) vid4_progress_pane_g1_ParamLimits

0x0f1c,	// (0x0002fc66) vid4_progress_pane_g2_ParamLimits

0x3dbe,	// (0x00032b08) vid4_progress_pane_g3_ParamLimits

0x74de,	// (0x00036228) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003e804) vid4_progress_pane_g_ParamLimits

0x74fc,	// (0x00036246) vid4_progress_pane_t1_ParamLimits

0x7511,	// (0x0003625b) vid4_progress_pane_t2_ParamLimits

0x7527,	// (0x00036271) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003e80f) vid4_progress_pane_t_ParamLimits

0x753c,	// (0x00036286) wait_bar_pane_cp07_ParamLimits

0x7a23,	// (0x0003676d) main_cam6_set_pane_g2_ParamLimits

0x7a23,	// (0x0003676d) main_cam6_set_pane_g2

0x7a49,	// (0x00036793) main_cset6_listscroll_pane_ParamLimits

0x7a49,	// (0x00036793) main_cset6_listscroll_pane

0x7a67,	// (0x000367b1) main_cset6_slider_pane_ParamLimits

0x7a67,	// (0x000367b1) main_cset6_slider_pane

0x7a7d,	// (0x000367c7) main_cset6_text2_pane_ParamLimits

0x7a7d,	// (0x000367c7) main_cset6_text2_pane

0xdb09,	// (0x0003c853) main_cset6_text_pane

0xdb11,	// (0x0003c85b) main_cset_list_pane_copy1_ParamLimits

0xdb11,	// (0x0003c85b) main_cset_list_pane_copy1

0xdb21,	// (0x0003c86b) scroll_pane_cp028_copy1

0x31ff,	// (0x00031f49) cset_list_set_pane_copy1

0x7a8b,	// (0x000367d5) aid_position_infowindow_above_copy1

0x7a93,	// (0x000367dd) aid_position_infowindow_below_copy1

0x7a9b,	// (0x000367e5) cset_list_set_pane_g1_copy1

0x7aa3,	// (0x000367ed) cset_list_set_pane_g3_copy1_ParamLimits

0x7aa3,	// (0x000367ed) cset_list_set_pane_g3_copy1

0x7ab2,	// (0x000367fc) cset_list_set_pane_t1_copy1_ParamLimits

0x7ab2,	// (0x000367fc) cset_list_set_pane_t1_copy1

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp021_copy1_ParamLimits

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp021_copy1

0xdb2a,	// (0x0003c874) cset6_slider_pane_ParamLimits

0xdb2a,	// (0x0003c874) cset6_slider_pane

0xdb56,	// (0x0003c8a0) main_cset6_slider_pane_g1_ParamLimits

0xdb56,	// (0x0003c8a0) main_cset6_slider_pane_g1

0x7ac7,	// (0x00036811) main_cset6_slider_pane_g2_ParamLimits

0x7ac7,	// (0x00036811) main_cset6_slider_pane_g2

0xdb7e,	// (0x0003c8c8) main_cset6_slider_pane_g3_ParamLimits

0xdb7e,	// (0x0003c8c8) main_cset6_slider_pane_g3

0x7aef,	// (0x00036839) main_cset6_slider_pane_g4_ParamLimits

0x7aef,	// (0x00036839) main_cset6_slider_pane_g4

0x7afb,	// (0x00036845) main_cset6_slider_pane_g5_ParamLimits

0x7afb,	// (0x00036845) main_cset6_slider_pane_g5

0xd333,	// (0x0003c07d) main_cset6_slider_pane_g7_ParamLimits

0xd333,	// (0x0003c07d) main_cset6_slider_pane_g7

0xd33f,	// (0x0003c089) main_cset6_slider_pane_g8_ParamLimits

0xd33f,	// (0x0003c089) main_cset6_slider_pane_g8

0x6b01,	// (0x0003584b) main_cset6_slider_pane_g9_ParamLimits

0x6b01,	// (0x0003584b) main_cset6_slider_pane_g9

0x6b0d,	// (0x00035857) main_cset6_slider_pane_g10_ParamLimits

0x6b0d,	// (0x00035857) main_cset6_slider_pane_g10

0x6b19,	// (0x00035863) main_cset6_slider_pane_g11_ParamLimits

0x6b19,	// (0x00035863) main_cset6_slider_pane_g11

0x6b25,	// (0x0003586f) main_cset6_slider_pane_g12_ParamLimits

0x6b25,	// (0x0003586f) main_cset6_slider_pane_g12

0x6b31,	// (0x0003587b) main_cset6_slider_pane_g13_ParamLimits

0x6b31,	// (0x0003587b) main_cset6_slider_pane_g13

0x6b3d,	// (0x00035887) main_cset6_slider_pane_g14_ParamLimits

0x6b3d,	// (0x00035887) main_cset6_slider_pane_g14

0x7b09,	// (0x00036853) main_cset6_slider_pane_g15_ParamLimits

0x7b09,	// (0x00036853) main_cset6_slider_pane_g15

0x6b61,	// (0x000358ab) main_cset6_slider_pane_g16_ParamLimits

0x6b61,	// (0x000358ab) main_cset6_slider_pane_g16

0x6b6f,	// (0x000358b9) main_cset6_slider_pane_g17_ParamLimits

0x6b6f,	// (0x000358b9) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003e8dc) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003e8dc) main_cset6_slider_pane_g

0xdb8a,	// (0x0003c8d4) main_cset6_slider_pane_t1_ParamLimits

0xdb8a,	// (0x0003c8d4) main_cset6_slider_pane_t1

0x7b39,	// (0x00036883) main_cset6_slider_pane_t2_ParamLimits

0x7b39,	// (0x00036883) main_cset6_slider_pane_t2

0x7b64,	// (0x000368ae) main_cset6_slider_pane_t3_ParamLimits

0x7b64,	// (0x000368ae) main_cset6_slider_pane_t3

0x7b8f,	// (0x000368d9) main_cset6_slider_pane_t4_ParamLimits

0x7b8f,	// (0x000368d9) main_cset6_slider_pane_t4

0x7bba,	// (0x00036904) main_cset6_slider_pane_t5_ParamLimits

0x7bba,	// (0x00036904) main_cset6_slider_pane_t5

0xdbcb,	// (0x0003c915) main_cset6_slider_pane_t7_ParamLimits

0xdbcb,	// (0x0003c915) main_cset6_slider_pane_t7

0x7be7,	// (0x00036931) main_cset6_slider_pane_t8_ParamLimits

0x7be7,	// (0x00036931) main_cset6_slider_pane_t8

0x7c0b,	// (0x00036955) main_cset6_slider_pane_t9_ParamLimits

0x7c0b,	// (0x00036955) main_cset6_slider_pane_t9

0x7c2f,	// (0x00036979) main_cset6_slider_pane_t10_ParamLimits

0x7c2f,	// (0x00036979) main_cset6_slider_pane_t10

0x7c53,	// (0x0003699d) main_cset6_slider_pane_t11_ParamLimits

0x7c53,	// (0x0003699d) main_cset6_slider_pane_t11

0xdc01,	// (0x0003c94b) main_cset6_slider_pane_t14_ParamLimits

0xdc01,	// (0x0003c94b) main_cset6_slider_pane_t14

0xdc3a,	// (0x0003c984) main_cset6_slider_pane_t15_ParamLimits

0xdc3a,	// (0x0003c984) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003e901) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003e901) main_cset6_slider_pane_t

0xdc73,	// (0x0003c9bd) cset_slider_pane_g1_copy1

0xdc7c,	// (0x0003c9c6) cset_slider_pane_g2_copy1

0xdc85,	// (0x0003c9cf) cset_slider_pane_g3_copy1

0x9c70,	// (0x000389ba) bg_popup_sub_pane_cp011_copy1

0xdc8e,	// (0x0003c9d8) main_cset_text_pane_g1_copy1

0xd493,	// (0x0003c1dd) main_cset_text_pane_t1_copy1

0xd4a1,	// (0x0003c1eb) main_cset_text_pane_t2_copy1

0xd4af,	// (0x0003c1f9) main_cset_text_pane_t3_copy1

0xd4bd,	// (0x0003c207) main_cset_text_pane_t4_copy1

0xd4cb,	// (0x0003c215) main_cset_text_pane_t5_copy1

0xdc96,	// (0x0003c9e0) main_cset_text_pane_t6_copy1

0xdca4,	// (0x0003c9ee) main_cset_text_pane_t7_copy1

0x7a05,	// (0x0003674f) main_cset_text2_pane_t1_copy1

0x9cd1,	// (0x00038a1b) main_ncimui_pane

0x4982,	// (0x000336cc) popup_query_ncimui_window_ParamLimits

0x4982,	// (0x000336cc) popup_query_ncimui_window

0xca66,	// (0x0003b7b0) field_cale_ev2_pane_g4_ParamLimits

0xca66,	// (0x0003b7b0) field_cale_ev2_pane_g4

0x615f,	// (0x00034ea9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x615f,	// (0x00034ea9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003e5df) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003e5df) cell_video_dialer_keypad_pane_g

0x6177,	// (0x00034ec1) cell_video_dialer_keypad_pane_t1

0x9c70,	// (0x000389ba) bg_popup_window_pane_cp012

0xacba,	// (0x00039a04) heading_pane_cp06

0xdcd0,	// (0x0003ca1a) ncim_query_content_pane

0x9c70,	// (0x000389ba) bg_popup_heading_pane_cp01

0xdcd8,	// (0x0003ca22) ncim_heading_pane_t1

0xdce6,	// (0x0003ca30) ncim_indicator_popup_pane

0xdcf8,	// (0x0003ca42) ncim_query_button_pane

0xdd0e,	// (0x0003ca58) ncim_query_content_pane_t1

0xdd20,	// (0x0003ca6a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003e945) ncim_query_content_pane_t

0xdd5a,	// (0x0003caa4) ncim_query_list_pane

0xdd6c,	// (0x0003cab6) ncim_query_popup_pane

0xdce6,	// (0x0003ca30) ncim_indicator_popup_pane_ParamLimits

0x7e6e,	// (0x00036bb8) ncim_query_content_pane_g1_ParamLimits

0x7e6e,	// (0x00036bb8) ncim_query_content_pane_g1

0xdd0e,	// (0x0003ca58) ncim_query_content_pane_t1_ParamLimits

0xdd20,	// (0x0003ca6a) ncim_query_content_pane_t2_ParamLimits

0x7e7a,	// (0x00036bc4) ncim_query_content_pane_t3_ParamLimits

0x7e7a,	// (0x00036bc4) ncim_query_content_pane_t3

0x7ea2,	// (0x00036bec) ncim_query_content_pane_t4_ParamLimits

0x7ea2,	// (0x00036bec) ncim_query_content_pane_t4

0x7eca,	// (0x00036c14) ncim_query_content_pane_t5_ParamLimits

0x7eca,	// (0x00036c14) ncim_query_content_pane_t5

0xdd32,	// (0x0003ca7c) ncim_query_content_pane_t6_ParamLimits

0xdd32,	// (0x0003ca7c) ncim_query_content_pane_t6

0xfbfb,	// (0x0003e945) ncim_query_content_pane_t_ParamLimits

0xdd5a,	// (0x0003caa4) ncim_query_list_pane_ParamLimits

0xdd6c,	// (0x0003cab6) ncim_query_popup_pane_ParamLimits

0xdd80,	// (0x0003caca) wait_bar_pane_cp04

0x9c70,	// (0x000389ba) input_focus_pane_cp011

0xdd88,	// (0x0003cad2) ncim_query_popup_pane_t1

0xdd96,	// (0x0003cae0) ncim_list_query_list_pane_ParamLimits

0xdd96,	// (0x0003cae0) ncim_list_query_list_pane

0x9c70,	// (0x000389ba) bg_button_pane_cp027

0xdda9,	// (0x0003caf3) ncim_query_button_pane_g1

0x9c70,	// (0x000389ba) list_highlight_pane_cp012

0xddb3,	// (0x0003cafd) ncim_list_query_list_pane_g1

0xddbb,	// (0x0003cb05) ncim_list_query_list_pane_t1

0x6634,	// (0x0003537e) cam4_indicators_pane_g3_ParamLimits

0x6634,	// (0x0003537e) cam4_indicators_pane_g3

0x66c5,	// (0x0003540f) vid4_indicators_pane_g5_ParamLimits

0x66c5,	// (0x0003540f) vid4_indicators_pane_g5

0x74ed,	// (0x00036237) vid4_progress_pane_g5_ParamLimits

0x74ed,	// (0x00036237) vid4_progress_pane_g5

0x7d5c,	// (0x00036aa6) main_ncimui_pane_g1

0x7dc2,	// (0x00036b0c) ncimui_group_query_pane_ParamLimits

0x7dc2,	// (0x00036b0c) ncimui_group_query_pane

0x7e0a,	// (0x00036b54) ncimui_list_pane_ParamLimits

0x7e0a,	// (0x00036b54) ncimui_list_pane

0x7e31,	// (0x00036b7b) ncimui_text_pane_ParamLimits

0x7e31,	// (0x00036b7b) ncimui_text_pane

0x7ef2,	// (0x00036c3c) ncimui_text_pane_t1_ParamLimits

0x7ef2,	// (0x00036c3c) ncimui_text_pane_t1

0xddc9,	// (0x0003cb13) ncimui_list_single_graphic_pane_ParamLimits

0xddc9,	// (0x0003cb13) ncimui_list_single_graphic_pane

0x7f10,	// (0x00036c5a) ncimui_query_pane_ParamLimits

0x7f10,	// (0x00036c5a) ncimui_query_pane

0x9c70,	// (0x000389ba) list_highlight_pane_cp013

0xddd9,	// (0x0003cb23) ncim_list_query_list_pane_t1_copy1

0xddb3,	// (0x0003cafd) ncim_list_single_graphic_pane_g1

0xdde7,	// (0x0003cb31) ncim_query_button_pane_cp01

0xddf3,	// (0x0003cb3d) ncim_query_entry_pane_ParamLimits

0xddf3,	// (0x0003cb3d) ncim_query_entry_pane

0xde06,	// (0x0003cb50) ncimui_query_pane_g1

0xde12,	// (0x0003cb5c) ncimui_query_pane_t1_ParamLimits

0xde12,	// (0x0003cb5c) ncimui_query_pane_t1

0x9cd1,	// (0x00038a1b) input_focus_pane_cp012

0xde2b,	// (0x0003cb75) ncim_query_entry_pane_t1

0xa412,	// (0x0003915c) main_im_pane_ParamLimits

0x9cd1,	// (0x00038a1b) main_mobtv_pane_ParamLimits

0x9cd1,	// (0x00038a1b) main_mobtv_pane

0x7b21,	// (0x0003686b) main_cset6_slider_pane_g18_ParamLimits

0x7b21,	// (0x0003686b) main_cset6_slider_pane_g18

0x7b2d,	// (0x00036877) main_cset6_slider_pane_g19_ParamLimits

0x7b2d,	// (0x00036877) main_cset6_slider_pane_g19

0x7f23,	// (0x00036c6d) bg_main_mobtv_pane_ParamLimits

0x7f23,	// (0x00036c6d) bg_main_mobtv_pane

0x7f31,	// (0x00036c7b) main_mobtv_info_pane

0x7f3c,	// (0x00036c86) main_mobtv_loading_pane_ParamLimits

0x7f3c,	// (0x00036c86) main_mobtv_loading_pane

0xde3d,	// (0x0003cb87) main_mobtv_pg_channel_list_pane

0xde47,	// (0x0003cb91) main_mobtv_pg_hdr_pane

0x7f49,	// (0x00036c93) main_mobtv_programe_curr_pane_ParamLimits

0x7f49,	// (0x00036c93) main_mobtv_programe_curr_pane

0x7f56,	// (0x00036ca0) main_mobtv_programe_next_pane_ParamLimits

0x7f56,	// (0x00036ca0) main_mobtv_programe_next_pane

0xde50,	// (0x0003cb9a) popup_mobtv_noti_window

0xc7d1,	// (0x0003b51b) main_tv_pg_hdr_pane_g1

0xde5a,	// (0x0003cba4) main_tv_pg_hdr_pane_g2

0xde62,	// (0x0003cbac) main_tv_pg_hdr_pane_g3

0xde6a,	// (0x0003cbb4) main_tv_pg_hdr_pane_g4

0xde72,	// (0x0003cbbc) main_tv_pg_hdr_pane_g5

0xde7c,	// (0x0003cbc6) main_tv_pg_hdr_pane_g6

0xde86,	// (0x0003cbd0) main_tv_pg_hdr_pane_g7

0xde90,	// (0x0003cbda) main_tv_pg_hdr_pane_g8

0xde9a,	// (0x0003cbe4) main_tv_pg_hdr_pane_g9

0xdea4,	// (0x0003cbee) main_tv_pg_hdr_pane_g10

0xdeae,	// (0x0003cbf8) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003e952) main_tv_pg_hdr_pane_g

0xdeb8,	// (0x0003cc02) main_tv_pg_hdr_pane_t1

0xdec6,	// (0x0003cc10) main_tv_pg_hdr_pane_t2

0xded4,	// (0x0003cc1e) main_tv_pg_hdr_pane_t3

0xdee4,	// (0x0003cc2e) main_tv_pg_hdr_pane_t4

0xdef4,	// (0x0003cc3e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003e969) main_tv_pg_hdr_pane_t

0xdf04,	// (0x0003cc4e) single_mobtv_pg_channel_pane_ParamLimits

0xdf04,	// (0x0003cc4e) single_mobtv_pg_channel_pane

0xdf16,	// (0x0003cc60) single_mobtv_pg_channel_table_pane

0xdf1f,	// (0x0003cc69) single_mobtv_pg_channel_thumb_pane

0xdf28,	// (0x0003cc72) single_tv_pg_channel_pane_g1

0xdf31,	// (0x0003cc7b) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003e974) single_tv_pg_channel_pane_g

0xca01,	// (0x0003b74b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca01,	// (0x0003b74b) bg_single_mobtv_pg_channel_thumb_pane

0xdf3a,	// (0x0003cc84) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf3a,	// (0x0003cc84) single_mobtv_pg_channel_thumb_pane_g1

0xdf48,	// (0x0003cc92) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf48,	// (0x0003cc92) single_mobtv_pg_channel_thumb_pane_g2

0xdf54,	// (0x0003cc9e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf54,	// (0x0003cc9e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003e979) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003e979) single_mobtv_pg_channel_thumb_pane_g

0xdf60,	// (0x0003ccaa) single_mobtv_pg_channel_thumb_pane_t1

0xdf6e,	// (0x0003ccb8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003e980) single_mobtv_pg_channel_thumb_pane_t

0xc7d1,	// (0x0003b51b) bg_single_mobtv_pg_channel_table_pane_g1

0xc7d1,	// (0x0003b51b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0003e42b) bg_single_mobtv_pg_channel_table_pane_g

0xdf7c,	// (0x0003ccc6) single_mobtv_pg_channel_table_pane_t1

0xdf8a,	// (0x0003ccd4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003e985) single_mobtv_pg_channel_table_pane_t

0x7f6b,	// (0x00036cb5) main_mobtv_info_pane_g1_ParamLimits

0x7f6b,	// (0x00036cb5) main_mobtv_info_pane_g1

0x7f89,	// (0x00036cd3) main_mobtv_info_pane_t1_ParamLimits

0x7f89,	// (0x00036cd3) main_mobtv_info_pane_t1

0x8001,	// (0x00036d4b) main_mobtv_info_pane_t2_ParamLimits

0x8001,	// (0x00036d4b) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003e98f) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003e98f) main_mobtv_info_pane_t

0x8090,	// (0x00036dda) wait_bar_pane_cp05

0x80a2,	// (0x00036dec) main_mobtv_loading_pane_g1_ParamLimits

0x80a2,	// (0x00036dec) main_mobtv_loading_pane_g1

0x80b3,	// (0x00036dfd) main_mobtv_loading_pane_g2_ParamLimits

0x80b3,	// (0x00036dfd) main_mobtv_loading_pane_g2

0x80bf,	// (0x00036e09) main_mobtv_loading_pane_g3_ParamLimits

0x80bf,	// (0x00036e09) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003e996) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003e996) main_mobtv_loading_pane_g

0xdf98,	// (0x0003cce2) main_mobtv_loading_pane_t1_ParamLimits

0xdf98,	// (0x0003cce2) main_mobtv_loading_pane_t1

0xdfb0,	// (0x0003ccfa) main_mobtv_loading_pane_t2_ParamLimits

0xdfb0,	// (0x0003ccfa) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003e99d) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003e99d) main_mobtv_loading_pane_t

0x80d2,	// (0x00036e1c) wait_bar_pane_cp06_ParamLimits

0x80d2,	// (0x00036e1c) wait_bar_pane_cp06

0xdfd4,	// (0x0003cd1e) main_mobtv_programe_curr_pane_t1

0xdfe2,	// (0x0003cd2c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003e9a2) main_mobtv_programe_curr_pane_t

0xdff0,	// (0x0003cd3a) main_mobtv_programe_next_pane_t1

0xdffe,	// (0x0003cd48) main_mobtv_programe_next_pane_t2

0xe00c,	// (0x0003cd56) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003e9a7) main_mobtv_programe_next_pane_t

0x9c70,	// (0x000389ba) bg_popup_mobtv_noti_window_pane

0xe01a,	// (0x0003cd64) popup_mobtv_noti_window_g1

0xe022,	// (0x0003cd6c) popup_mobtv_noti_window_t1

0xe030,	// (0x0003cd7a) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003e9ae) popup_mobtv_noti_window_t

0xc7d1,	// (0x0003b51b) bg_popup_mobtv_noti_window_pane_g1

0x9c70,	// (0x000389ba) sc_clock_pane

0x9c70,	// (0x000389ba) main_fs_bigclock_pane

0x779a,	// (0x000364e4) blid2_tripm_pane_t4_ParamLimits

0x779a,	// (0x000364e4) blid2_tripm_pane_t4

0x80e1,	// (0x00036e2b) sc_clock_pane_g1_ParamLimits

0x80e1,	// (0x00036e2b) sc_clock_pane_g1

0x80f3,	// (0x00036e3d) sc_clock_pane_t1_ParamLimits

0x80f3,	// (0x00036e3d) sc_clock_pane_t1

0x8117,	// (0x00036e61) sc_clock_pane_t2_ParamLimits

0x8117,	// (0x00036e61) sc_clock_pane_t2

0x812f,	// (0x00036e79) sc_clock_pane_t3_ParamLimits

0x812f,	// (0x00036e79) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003e9b3) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003e9b3) sc_clock_pane_t

0x9138,	// (0x00037e82) main_fs_bigclock_indicator_pane_ParamLimits

0x9138,	// (0x00037e82) main_fs_bigclock_indicator_pane

0xc9d1,	// (0x0003b71b) main_fs_bigclock_pane_g1_ParamLimits

0xc9d1,	// (0x0003b71b) main_fs_bigclock_pane_g1

0x9144,	// (0x00037e8e) main_fs_bigclock_pane_t1_ParamLimits

0x9144,	// (0x00037e8e) main_fs_bigclock_pane_t1

0x9156,	// (0x00037ea0) main_fs_bigclock_pane_t2_ParamLimits

0x9156,	// (0x00037ea0) main_fs_bigclock_pane_t2

0x916a,	// (0x00037eb4) main_fs_bigclock_pane_t3_ParamLimits

0x916a,	// (0x00037eb4) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003ebb8) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003ebb8) main_fs_bigclock_pane_t

0xec36,	// (0x0003d980) main_fs_bigclock_indicator_pane_g1

0xdd00,	// (0x0003ca4a) ncim_query_content_pane_g2_ParamLimits

0xdd00,	// (0x0003ca4a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003e940) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003e940) ncim_query_content_pane_g

0x8146,	// (0x00036e90) sc_clock_pane_t4_ParamLimits

0x8146,	// (0x00036e90) sc_clock_pane_t4

0x9cd1,	// (0x00038a1b) main_radioblah_pane

0xd12e,	// (0x0003be78) cell_call4_button_pane_t1_copy1_ParamLimits

0xd12e,	// (0x0003be78) cell_call4_button_pane_t1_copy1

0x7d74,	// (0x00036abe) main_ncimui_pane_t1_ParamLimits

0x7d74,	// (0x00036abe) main_ncimui_pane_t1

0x7d8e,	// (0x00036ad8) main_ncimui_pane_t2_ParamLimits

0x7d8e,	// (0x00036ad8) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003e939) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003e939) main_ncimui_pane_t

0xe17c,	// (0x0003cec6) main_radioblah_anim_pane_ParamLimits

0xe17c,	// (0x0003cec6) main_radioblah_anim_pane

0xe18d,	// (0x0003ced7) main_radioblah_info_pane_ParamLimits

0xe18d,	// (0x0003ced7) main_radioblah_info_pane

0xe1a1,	// (0x0003ceeb) main_radioblah_pane_t1_ParamLimits

0xe1a1,	// (0x0003ceeb) main_radioblah_pane_t1

0xe1bd,	// (0x0003cf07) main_radioblah_pane_t2_ParamLimits

0xe1bd,	// (0x0003cf07) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003e9d4) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003e9d4) main_radioblah_pane_t

0x81f6,	// (0x00036f40) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81f6,	// (0x00036f40) main_radioblah_rocker_ctrl_pane

0xe234,	// (0x0003cf7e) main_radioblah_info_pane_t1_ParamLimits

0xe234,	// (0x0003cf7e) main_radioblah_info_pane_t1

0x824e,	// (0x00036f98) main_radioblah_info_pane_t2_ParamLimits

0x824e,	// (0x00036f98) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003e9dd) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003e9dd) main_radioblah_info_pane_t

0xc7d1,	// (0x0003b51b) main_radioblah_rocker_ctrl_pane_g1

0x82fe,	// (0x00037048) main_radioblah_rocker_ctrl_pane_g2

0x8306,	// (0x00037050) main_radioblah_rocker_ctrl_pane_g3

0x830e,	// (0x00037058) main_radioblah_rocker_ctrl_pane_g4

0x8316,	// (0x00037060) main_radioblah_rocker_ctrl_pane_g5

0x831e,	// (0x00037068) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003e9e6) main_radioblah_rocker_ctrl_pane_g

0x7a05,	// (0x0003674f) main_cset_text2_pane_t1_copy1_ParamLimits

0x65e3,	// (0x0003532d) cam4_image_uncrop_qvga_pane

0x665a,	// (0x000353a4) vid4_image_uncrop_qcif_pane

0x7925,	// (0x0003666f) cam6_image_uncrop_qvga_pane_ParamLimits

0x7925,	// (0x0003666f) cam6_image_uncrop_qvga_pane

0xd9e8,	// (0x0003c732) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9e8,	// (0x0003c732) vid6_image_uncrop_qcif_pane

0x9c70,	// (0x000389ba) bg_popup_preview_window_pane_cp03

0xdcb2,	// (0x0003c9fc) list_cset_text2_pane

0xdcba,	// (0x0003ca04) main_cset6_text2_pane_g1

0xdcc2,	// (0x0003ca0c) main_cset6_text2_pane_t1

0x8326,	// (0x00037070) list_cset_text2_pane_t1_ParamLimits

0x8326,	// (0x00037070) list_cset_text2_pane_t1

0x9cd1,	// (0x00038a1b) main_radioblah_pane_ParamLimits

0x807c,	// (0x00036dc6) main_mobtv_info_pane_t3_ParamLimits

0x807c,	// (0x00036dc6) main_mobtv_info_pane_t3

0x81e4,	// (0x00036f2e) main_radioblah_pane_g1

0x821e,	// (0x00036f68) main_radioblah_info_pane_g1

0x82a3,	// (0x00036fed) main_radioblah_info_pane_t3_ParamLimits

0x82a3,	// (0x00036fed) main_radioblah_info_pane_t3

0x3111,	// (0x00031e5b) highlight_cell_cale_month_pane_ParamLimits

0x3111,	// (0x00031e5b) highlight_cell_cale_month_pane

0x9c70,	// (0x000389ba) main_phob_fisheye_pane

0xcae9,	// (0x0003b833) scroll_pane_cp0031_ParamLimits

0xcae9,	// (0x0003b833) scroll_pane_cp0031

0xdafa,	// (0x0003c844) wait_bar_pane_cp08_ParamLimits

0x31ff,	// (0x00031f49) cset_list_set_pane_copy1_ParamLimits

0xe26e,	// (0x0003cfb8) highlight_cell_cale_month_pane_g1

0x833f,	// (0x00037089) highlight_cell_cale_month_pane_t1

0xd767,	// (0x0003c4b1) list_gen_pane_cp01

0xd31e,	// (0x0003c068) scroll_pane_01

0x834d,	// (0x00037097) list_single_double_fisheye_pane

0x8356,	// (0x000370a0) list_double_fisheye_pane_g1_ParamLimits

0x8356,	// (0x000370a0) list_double_fisheye_pane_g1

0x8362,	// (0x000370ac) list_double_fisheye_pane_g2_ParamLimits

0x8362,	// (0x000370ac) list_double_fisheye_pane_g2

0x8376,	// (0x000370c0) list_double_fisheye_pane_g3_ParamLimits

0x8376,	// (0x000370c0) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003e9f3) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003e9f3) list_double_fisheye_pane_g

0x839f,	// (0x000370e9) list_double_fisheye_pane_t1_ParamLimits

0x839f,	// (0x000370e9) list_double_fisheye_pane_t1

0x83ba,	// (0x00037104) list_double_fisheye_pane_t2_ParamLimits

0x83ba,	// (0x00037104) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003e9fe) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003e9fe) list_double_fisheye_pane_t

0x9c70,	// (0x000389ba) main_call5_pane

0x8171,	// (0x00036ebb) sc_swipe_pane_ParamLimits

0x8171,	// (0x00036ebb) sc_swipe_pane

0x83ef,	// (0x00037139) call5_image_pane_ParamLimits

0x83ef,	// (0x00037139) call5_image_pane

0x840c,	// (0x00037156) call5_swipe_1_pane_ParamLimits

0x840c,	// (0x00037156) call5_swipe_1_pane

0x841f,	// (0x00037169) call5_swipe_2_pane_ParamLimits

0x841f,	// (0x00037169) call5_swipe_2_pane

0x844c,	// (0x00037196) popup_call5_audio_first_window_ParamLimits

0x844c,	// (0x00037196) popup_call5_audio_first_window

0xca01,	// (0x0003b74b) call5_swipe_1_pane_g1_ParamLimits

0xca01,	// (0x0003b74b) call5_swipe_1_pane_g1

0xe276,	// (0x0003cfc0) call5_swipe_1_pane_g2_ParamLimits

0xe276,	// (0x0003cfc0) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003ea03) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003ea03) call5_swipe_1_pane_g

0xe282,	// (0x0003cfcc) call5_swipe_1_pane_t1_ParamLimits

0xe282,	// (0x0003cfcc) call5_swipe_1_pane_t1

0xca01,	// (0x0003b74b) call5_swipe_2_pane_g1_ParamLimits

0xca01,	// (0x0003b74b) call5_swipe_2_pane_g1

0xe297,	// (0x0003cfe1) call5_swipe_2_pane_g2_ParamLimits

0xe297,	// (0x0003cfe1) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003ea08) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003ea08) call5_swipe_2_pane_g

0xe2a3,	// (0x0003cfed) call5_swipe_2_pane_t1_ParamLimits

0xe2a3,	// (0x0003cfed) call5_swipe_2_pane_t1

0xe2b8,	// (0x0003d002) sc_swipe_pane_g1_ParamLimits

0xe2b8,	// (0x0003d002) sc_swipe_pane_g1

0xe2c5,	// (0x0003d00f) sc_swipe_pane_g2_ParamLimits

0xe2c5,	// (0x0003d00f) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003ea0d) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003ea0d) sc_swipe_pane_g

0xe2d1,	// (0x0003d01b) sc_swipe_pane_t1_ParamLimits

0xe2d1,	// (0x0003d01b) sc_swipe_pane_t1

0x9c70,	// (0x000389ba) main_cmail_launcher_pane

0x8461,	// (0x000371ab) aid_size_cell_cmail_l_ParamLimits

0x8461,	// (0x000371ab) aid_size_cell_cmail_l

0x847b,	// (0x000371c5) grid_cmail_l_pane_ParamLimits

0x847b,	// (0x000371c5) grid_cmail_l_pane

0x8496,	// (0x000371e0) cell_cmail_l_pane_ParamLimits

0x8496,	// (0x000371e0) cell_cmail_l_pane

0x84be,	// (0x00037208) cell_cmail_l_pane_g1_ParamLimits

0x84be,	// (0x00037208) cell_cmail_l_pane_g1

0x84ca,	// (0x00037214) cell_cmail_l_pane_t1_ParamLimits

0x84ca,	// (0x00037214) cell_cmail_l_pane_t1

0xe2e6,	// (0x0003d030) cell_cmail_l_pane_t2_ParamLimits

0xe2e6,	// (0x0003d030) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003ea12) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003ea12) cell_cmail_l_pane_t

0x9cd1,	// (0x00038a1b) grid_highlight_pane_cp018_ParamLimits

0x9cd1,	// (0x00038a1b) grid_highlight_pane_cp018

0x105d,	// (0x0002fda7) main2_pane_ParamLimits

0x105d,	// (0x0002fda7) main2_pane

0xa4bd,	// (0x00039207) popup_sp_fs_action_menu_bg_pane_g1

0xa4c5,	// (0x0003920f) popup_sp_fs_action_menu_bg_pane_g2

0xa4cd,	// (0x00039217) popup_sp_fs_action_menu_bg_pane_g3

0xa4d5,	// (0x0003921f) popup_sp_fs_action_menu_bg_pane_g4

0xa4dd,	// (0x00039227) popup_sp_fs_action_menu_bg_pane_g5

0xa4e5,	// (0x0003922f) popup_sp_fs_action_menu_bg_pane_g6

0xa4ed,	// (0x00039237) popup_sp_fs_action_menu_bg_pane_g7

0xa4f5,	// (0x0003923f) popup_sp_fs_action_menu_bg_pane_g8

0xa4fd,	// (0x00039247) popup_sp_fs_action_menu_bg_pane_g9

0xa505,	// (0x0003924f) popup_sp_fs_action_menu_bg_pane_g10

0xa505,	// (0x0003924f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0003ded7) popup_sp_fs_action_menu_bg_pane_g

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g3_g1

0x1f80,	// (0x00030cca) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_t3_g3_g2

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0003df87) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0003df87) list_medium_line_x2_t3_g3_g

0x1f98,	// (0x00030ce2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1f98,	// (0x00030ce2) list_medium_line_x2_t3_g3_t1

0x1fad,	// (0x00030cf7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1fad,	// (0x00030cf7) list_medium_line_x2_t3_g3_t2

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0003df8e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0003df8e) list_medium_line_x2_t3_g3_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g2_g1

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0003df95) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0003df95) list_medium_line_x2_t3_g2_g

0x1fd6,	// (0x00030d20) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1fd6,	// (0x00030d20) list_medium_line_x2_t3_g2_t1

0x1fec,	// (0x00030d36) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1fec,	// (0x00030d36) list_medium_line_x2_t3_g2_t2

0x1ffe,	// (0x00030d48) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ffe,	// (0x00030d48) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0003df9a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0003df9a) list_medium_line_x2_t3_g2_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t4_g4_g1

0x201c,	// (0x00030d66) list_medium_line_x2_t4_g4_g2_ParamLimits

0x201c,	// (0x00030d66) list_medium_line_x2_t4_g4_g2

0x1f80,	// (0x00030cca) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_t4_g4_g3

0x2028,	// (0x00030d72) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2028,	// (0x00030d72) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0003dfa1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0003dfa1) list_medium_line_x2_t4_g4_g

0x2034,	// (0x00030d7e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2034,	// (0x00030d7e) list_medium_line_x2_t4_g4_t1

0x204b,	// (0x00030d95) list_medium_line_x2_t4_g4_t2_ParamLimits

0x204b,	// (0x00030d95) list_medium_line_x2_t4_g4_t2

0x2060,	// (0x00030daa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2060,	// (0x00030daa) list_medium_line_x2_t4_g4_t3

0x2072,	// (0x00030dbc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2072,	// (0x00030dbc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0003dfaa) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0003dfaa) list_medium_line_x2_t4_g4_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g4_g1

0x201c,	// (0x00030d66) list_medium_line_x2_t2_g4_g2_ParamLimits

0x201c,	// (0x00030d66) list_medium_line_x2_t2_g4_g2

0x1f80,	// (0x00030cca) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_t2_g4_g3

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0003e011) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0003e011) list_medium_line_x2_t2_g4_g

0x3137,	// (0x00031e81) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3137,	// (0x00031e81) list_medium_line_x2_t2_g4_t1

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0003e01a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0003e01a) list_medium_line_x2_t2_g4_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g3_g1

0x1f80,	// (0x00030cca) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_t2_g3_g2

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0003df87) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0003df87) list_medium_line_x2_t2_g3_g

0x314c,	// (0x00031e96) list_medium_line_x2_t2_g3_t1_ParamLimits

0x314c,	// (0x00031e96) list_medium_line_x2_t2_g3_t1

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0003e01f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0003e01f) list_medium_line_x2_t2_g3_t

0x32a4,	// (0x00031fee) main_sp_fs_list_pane_ParamLimits

0x32a4,	// (0x00031fee) main_sp_fs_list_pane

0x32b0,	// (0x00031ffa) sp_fs_scroll_pane_ParamLimits

0x32b0,	// (0x00031ffa) sp_fs_scroll_pane

0x32bc,	// (0x00032006) list_medium_line_x2_t3_t1

0x32cc,	// (0x00032016) list_medium_line_x2_t3_t2

0x32da,	// (0x00032024) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0003e06a) list_medium_line_x2_t3_t

0x32e8,	// (0x00032032) list_medium_line_x3_t4_t1

0x32f8,	// (0x00032042) list_medium_line_x3_t4_t2

0x3306,	// (0x00032050) list_medium_line_x3_t4_t3

0x32da,	// (0x00032024) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0003e071) list_medium_line_x3_t4_t

0x3314,	// (0x0003205e) list_medium_line_x4_t5_t1

0x3324,	// (0x0003206e) list_medium_line_x4_t5_t2

0x3306,	// (0x00032050) list_medium_line_x4_t5_t3

0x3332,	// (0x0003207c) list_medium_line_x4_t5_t4

0x32da,	// (0x00032024) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0003e07a) list_medium_line_x4_t5_t

0xd0c5,	// (0x0003be0f) list_medium_line_t4_g4_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_t4_g4_g1

0x2028,	// (0x00030d72) list_medium_line_t4_g4_g2_ParamLimits

0x2028,	// (0x00030d72) list_medium_line_t4_g4_g2

0x3340,	// (0x0003208a) list_medium_line_t4_g4_g3_ParamLimits

0x3340,	// (0x0003208a) list_medium_line_t4_g4_g3

0x1f8c,	// (0x00030cd6) list_medium_line_t4_g4_g4_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0003e085) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0003e085) list_medium_line_t4_g4_g

0x334c,	// (0x00032096) list_medium_line_t4_g4_t1_ParamLimits

0x334c,	// (0x00032096) list_medium_line_t4_g4_t1

0x3361,	// (0x000320ab) list_medium_line_t4_g4_t2_ParamLimits

0x3361,	// (0x000320ab) list_medium_line_t4_g4_t2

0x3377,	// (0x000320c1) list_medium_line_t4_g4_t3_ParamLimits

0x3377,	// (0x000320c1) list_medium_line_t4_g4_t3

0x1fc1,	// (0x00030d0b) list_medium_line_t4_g4_t4_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0003e08e) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0003e08e) list_medium_line_t4_g4_t

0x34c2,	// (0x0003220c) chi_dic_find_pane_g1

0x4708,	// (0x00033452) main_tport_pane

0xd42a,	// (0x0003c174) list_medium_line_plain_t1

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g2_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g2_g1

0xd440,	// (0x0003c18a) list_medium_line_t2_g2_g2_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003e74a) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003e74a) list_medium_line_t2_g2_g

0x6edc,	// (0x00035c26) list_medium_line_t2_g2_t1_ParamLimits

0x6edc,	// (0x00035c26) list_medium_line_t2_g2_t1

0x6ef3,	// (0x00035c3d) list_medium_line_t2_g2_t2_ParamLimits

0x6ef3,	// (0x00035c3d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003e74f) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003e74f) list_medium_line_t2_g2_t

0xd770,	// (0x0003c4ba) aid_sp_fs_list_icon_a_sm

0xd778,	// (0x0003c4c2) aid_sp_fs_list_icon_d

0xd780,	// (0x0003c4ca) aid_sp_fs_text_primary

0xd789,	// (0x0003c4d3) aid_sp_fs_text_secondary

0x7550,	// (0x0003629a) list_medium_line

0x7550,	// (0x0003629a) list_medium_line_g2

0x7550,	// (0x0003629a) list_medium_line_g3

0x7550,	// (0x0003629a) list_medium_line_plain

0x7550,	// (0x0003629a) list_medium_line_plain_t2

0x7550,	// (0x0003629a) list_medium_line_plain_t3

0x7550,	// (0x0003629a) list_medium_line_right_icon

0x7550,	// (0x0003629a) list_medium_line_right_iconx2

0x7550,	// (0x0003629a) list_medium_line_t2

0x7550,	// (0x0003629a) list_medium_line_t2_g2

0x7550,	// (0x0003629a) list_medium_line_t2_g3

0x7550,	// (0x0003629a) list_medium_line_t2_right_icon

0x7550,	// (0x0003629a) list_medium_line_t2_right_iconx2

0x7550,	// (0x0003629a) list_medium_line_t3

0x7550,	// (0x0003629a) list_medium_line_t3_g2

0x7550,	// (0x0003629a) list_medium_line_t3_g3

0x7550,	// (0x0003629a) list_medium_line_t3_right_iconx2

0x7559,	// (0x000362a3) list_medium_line_t4_g4

0x7550,	// (0x0003629a) list_medium_line_x2

0x7550,	// (0x0003629a) list_medium_line_x2_t2_g2

0x7550,	// (0x0003629a) list_medium_line_x2_t2_g3

0x7550,	// (0x0003629a) list_medium_line_x2_t2_g4

0x7550,	// (0x0003629a) list_medium_line_x2_t3

0x7550,	// (0x0003629a) list_medium_line_x2_t3_g2

0x7550,	// (0x0003629a) list_medium_line_x2_t3_g3

0x7550,	// (0x0003629a) list_medium_line_x2_t3_g4

0x7550,	// (0x0003629a) list_medium_line_x2_t4_g2

0x7550,	// (0x0003629a) list_medium_line_x2_t4_g4

0x7562,	// (0x000362ac) list_medium_line_x3

0x7562,	// (0x000362ac) list_medium_line_x3_t4

0x7562,	// (0x000362ac) list_medium_line_x3_t4_g4

0x7559,	// (0x000362a3) list_medium_line_x4_t4

0x7559,	// (0x000362a3) list_medium_line_x4_t4_g7

0x7559,	// (0x000362a3) list_medium_line_x4_t5

0x756b,	// (0x000362b5) list_single_fs_dyc_pane_ParamLimits

0x756b,	// (0x000362b5) list_single_fs_dyc_pane

0xd0c5,	// (0x0003be0f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x4_t4_g7_g1

0x7c79,	// (0x000369c3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c79,	// (0x000369c3) list_medium_line_x4_t4_g7_g2

0x7c85,	// (0x000369cf) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c85,	// (0x000369cf) list_medium_line_x4_t4_g7_g3

0x7c94,	// (0x000369de) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c94,	// (0x000369de) list_medium_line_x4_t4_g7_g4

0x7ca0,	// (0x000369ea) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ca0,	// (0x000369ea) list_medium_line_x4_t4_g7_g5

0x7caf,	// (0x000369f9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7caf,	// (0x000369f9) list_medium_line_x4_t4_g7_g6

0x7cbe,	// (0x00036a08) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7cbe,	// (0x00036a08) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003e91a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003e91a) list_medium_line_x4_t4_g7_g

0x7cca,	// (0x00036a14) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7cca,	// (0x00036a14) list_medium_line_x4_t4_g7_t1

0x7cdf,	// (0x00036a29) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7cdf,	// (0x00036a29) list_medium_line_x4_t4_g7_t2

0x7cf4,	// (0x00036a3e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7cf4,	// (0x00036a3e) list_medium_line_x4_t4_g7_t3

0x7d09,	// (0x00036a53) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d09,	// (0x00036a53) list_medium_line_x4_t4_g7_t4

0x7d1b,	// (0x00036a65) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d1b,	// (0x00036a65) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003e929) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003e929) list_medium_line_x4_t4_g7_t

0x7d2d,	// (0x00036a77) list_single_dyc_row_pane_ParamLimits

0x7d2d,	// (0x00036a77) list_single_dyc_row_pane

0x83dc,	// (0x00037126) call5_gesture_pane_ParamLimits

0x83dc,	// (0x00037126) call5_gesture_pane

0x8432,	// (0x0003717c) call5_windows_pane_ParamLimits

0x8432,	// (0x0003717c) call5_windows_pane

0x84e0,	// (0x0003722a) call5_swipe_1_pane_cp_ParamLimits

0x84e0,	// (0x0003722a) call5_swipe_1_pane_cp

0x84ec,	// (0x00037236) call5_swipe_2_pane_cp_ParamLimits

0x84ec,	// (0x00037236) call5_swipe_2_pane_cp

0xaf14,	// (0x00039c5e) call5_image_pane_cp

0x84f8,	// (0x00037242) popup_call5_audio_first_window_cp_ParamLimits

0x84f8,	// (0x00037242) popup_call5_audio_first_window_cp

0xe2b8,	// (0x0003d002) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2b8,	// (0x0003d002) call5_swipe_1_pane_g1_cp

0xe2f8,	// (0x0003d042) call5_swipe_1_pane_g2_cp

0xe2d1,	// (0x0003d01b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2d1,	// (0x0003d01b) call5_swipe_1_pane_t1_cp

0xe2b8,	// (0x0003d002) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2b8,	// (0x0003d002) call5_swipe_2_pane_g1_cp

0xe300,	// (0x0003d04a) call5_swipe_2_pane_g2_cp

0xe308,	// (0x0003d052) call5_swipe_2_pane_t1_cp_ParamLimits

0xe308,	// (0x0003d052) call5_swipe_2_pane_t1_cp

0x9cd1,	// (0x00038a1b) main_sp_fs_email_pane

0xe31d,	// (0x0003d067) main_sp_fs_listscroll_pane_te

0xe326,	// (0x0003d070) popup_sp_fs_action_menu_pane_ParamLimits

0xe326,	// (0x0003d070) popup_sp_fs_action_menu_pane

0xc7d1,	// (0x0003b51b) bg_sp_fs_ctrlbar_pane_g1

0xcd6a,	// (0x0003bab4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd7c,	// (0x0003bac6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd73,	// (0x0003babd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7d1,	// (0x0003b51b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003ea17) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5b0,	// (0x0003b2fa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5b0,	// (0x0003b2fa) bg_sp_fs_ctrlbar_ddmenu_pane

0xe36c,	// (0x0003d0b6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe36c,	// (0x0003d0b6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe378,	// (0x0003d0c2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe378,	// (0x0003d0c2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003ea20) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003ea20) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe384,	// (0x0003d0ce) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe384,	// (0x0003d0ce) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe39e,	// (0x0003d0e8) list_medium_line_t2_right_icon_g1

0x8506,	// (0x00037250) list_medium_line_t2_right_icon_t1

0x8516,	// (0x00037260) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003ea25) list_medium_line_t2_right_icon_t

0xc380,	// (0x0003b0ca) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc380,	// (0x0003b0ca) bg_sp_fs_ctrlbar_pane

0x8575,	// (0x000372bf) main_sp_fs_ctrlbar_button_pane_cp01

0x857f,	// (0x000372c9) main_sp_fs_ctrlbar_ddmenu_pane

0xd0c5,	// (0x0003be0f) main_sp_fs_ctrlbar_pane_g1

0xe3de,	// (0x0003d128) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003ea2a) main_sp_fs_ctrlbar_pane_g

0xe3ea,	// (0x0003d134) main_sp_fs_ctrlbar_pane_t1

0x8589,	// (0x000372d3) main_sp_fs_ctrlbar_pane

0x85ad,	// (0x000372f7) main_sp_fs_listscroll_pane_te_cp01

0x85cd,	// (0x00037317) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85cd,	// (0x00037317) popup_sp_fs_action_menu_pane_cp01

0x9cd1,	// (0x00038a1b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9cd1,	// (0x00038a1b) bg_sp_fs_highlight_list_pane_cp01

0xe41a,	// (0x0003d164) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe41a,	// (0x0003d164) sp_fs_action_menu_list_gene_pane_g1

0xe429,	// (0x0003d173) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe429,	// (0x0003d173) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003ea34) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003ea34) sp_fs_action_menu_list_gene_pane_g

0xe436,	// (0x0003d180) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe436,	// (0x0003d180) sp_fs_action_menu_list_gene_pane_t1

0xe44e,	// (0x0003d198) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe44e,	// (0x0003d198) sp_fs_action_menu_list_gene_pane

0xe471,	// (0x0003d1bb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe471,	// (0x0003d1bb) popup_sp_fs_action_menu_bg_pane

0xe47f,	// (0x0003d1c9) sp_fs_action_menu_list_pane_ParamLimits

0xe47f,	// (0x0003d1c9) sp_fs_action_menu_list_pane

0xe4a3,	// (0x0003d1ed) sp_fs_scroll_pane_cp01_ParamLimits

0xe4a3,	// (0x0003d1ed) sp_fs_scroll_pane_cp01

0x8603,	// (0x0003734d) list_medium_line_plain_t2_t1

0x8613,	// (0x0003735d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003ea39) list_medium_line_plain_t2_t

0x8623,	// (0x0003736d) list_medium_line_plain_t3_t1

0x8633,	// (0x0003737d) list_medium_line_plain_t3_t2

0x8641,	// (0x0003738b) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003ea3e) list_medium_line_plain_t3_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t2_g2_g1

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0003df95) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0003df95) list_medium_line_x2_t2_g2_g

0x334c,	// (0x00032096) list_medium_line_x2_t2_g2_t1_ParamLimits

0x334c,	// (0x00032096) list_medium_line_x2_t2_g2_t1

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003ea45) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003ea45) list_medium_line_x2_t2_g2_t

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t4_g2_g1

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf24b,	// (0x0003df95) list_medium_line_x2_t4_g2_g_ParamLimits

0xf24b,	// (0x0003df95) list_medium_line_x2_t4_g2_g

0x864f,	// (0x00037399) list_medium_line_x2_t4_g2_t1_ParamLimits

0x864f,	// (0x00037399) list_medium_line_x2_t4_g2_t1

0x8669,	// (0x000373b3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8669,	// (0x000373b3) list_medium_line_x2_t4_g2_t2

0x867f,	// (0x000373c9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x867f,	// (0x000373c9) list_medium_line_x2_t4_g2_t3

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003ea4a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003ea4a) list_medium_line_x2_t4_g2_t

0xe4c9,	// (0x0003d213) list_medium_line_t3_right_iconx2_g1

0xe39e,	// (0x0003d0e8) list_medium_line_t3_right_iconx2_g2

0x8694,	// (0x000373de) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003ea53) list_medium_line_t3_right_iconx2_g

0x869e,	// (0x000373e8) list_medium_line_t3_right_iconx2_t1

0x86ae,	// (0x000373f8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003ea5a) list_medium_line_t3_right_iconx2_t

0xd0c5,	// (0x0003be0f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x3_t4_g4_g1

0x1f80,	// (0x00030cca) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x3_t4_g4_g2

0x2028,	// (0x00030d72) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2028,	// (0x00030d72) list_medium_line_x3_t4_g4_g3

0x86bc,	// (0x00037406) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86bc,	// (0x00037406) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003ea5f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003ea5f) list_medium_line_x3_t4_g4_g

0x86c8,	// (0x00037412) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86c8,	// (0x00037412) list_medium_line_x3_t4_g4_t1

0x86df,	// (0x00037429) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86df,	// (0x00037429) list_medium_line_x3_t4_g4_t2

0x86fa,	// (0x00037444) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86fa,	// (0x00037444) list_medium_line_x3_t4_g4_t3

0x870f,	// (0x00037459) list_medium_line_x3_t4_g4_t4_ParamLimits

0x870f,	// (0x00037459) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003ea68) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003ea68) list_medium_line_x3_t4_g4_t

0x872c,	// (0x00037476) list_single_dyc_row_text_pane_t1_ParamLimits

0x872c,	// (0x00037476) list_single_dyc_row_text_pane_t1

0x8775,	// (0x000374bf) list_single_dyc_row_text_pane_t2_ParamLimits

0x8775,	// (0x000374bf) list_single_dyc_row_text_pane_t2

0xe4d1,	// (0x0003d21b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4d1,	// (0x0003d21b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003ea71) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003ea71) list_single_dyc_row_text_pane_t

0xe4f5,	// (0x0003d23f) list_single_dyc_row_pane_g1_ParamLimits

0xe4f5,	// (0x0003d23f) list_single_dyc_row_pane_g1

0xe501,	// (0x0003d24b) list_single_dyc_row_pane_g2_ParamLimits

0xe501,	// (0x0003d24b) list_single_dyc_row_pane_g2

0xe50d,	// (0x0003d257) list_single_dyc_row_pane_g3_ParamLimits

0xe50d,	// (0x0003d257) list_single_dyc_row_pane_g3

0xe519,	// (0x0003d263) list_single_dyc_row_pane_g4_ParamLimits

0xe519,	// (0x0003d263) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003ea7e) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003ea7e) list_single_dyc_row_pane_g

0xe525,	// (0x0003d26f) list_single_dyc_row_text_pane_ParamLimits

0xe525,	// (0x0003d26f) list_single_dyc_row_text_pane

0x9c70,	// (0x000389ba) bg_sp_fs_scroll_pane

0xe544,	// (0x0003d28e) thumb_sp_fs_scroll_pane

0x6ed0,	// (0x00035c1a) list_medium_line_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_g1

0xe54d,	// (0x0003d297) list_medium_line_t1_ParamLimits

0xe54d,	// (0x0003d297) list_medium_line_t1

0xd0c5,	// (0x0003be0f) list_medium_line_x2_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_g1

0x1f80,	// (0x00030cca) list_medium_line_x2_g2_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003ea87) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003ea87) list_medium_line_x2_g

0xe562,	// (0x0003d2ac) list_medium_line_x2_t1_ParamLimits

0xe562,	// (0x0003d2ac) list_medium_line_x2_t1

0xd0c5,	// (0x0003be0f) list_medium_line_x3_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x3_g1

0x1f80,	// (0x00030cca) list_medium_line_x3_g2_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003ea87) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003ea87) list_medium_line_x3_g

0xe562,	// (0x0003d2ac) list_medium_line_x3_t1_ParamLimits

0xe562,	// (0x0003d2ac) list_medium_line_x3_t1

0xe578,	// (0x0003d2c2) thumb_sp_fs_scroll_pane_g1

0xe581,	// (0x0003d2cb) thumb_sp_fs_scroll_pane_g2

0xe58a,	// (0x0003d2d4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ea8c) thumb_sp_fs_scroll_pane_g

0xe578,	// (0x0003d2c2) bg_sp_fs_scroll_pane_g1

0xe581,	// (0x0003d2cb) bg_sp_fs_scroll_pane_g2

0xe58a,	// (0x0003d2d4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003ea8c) bg_sp_fs_scroll_pane_g

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd0c5,	// (0x0003be0f) list_medium_line_x2_t3_g4_g1

0x201c,	// (0x00030d66) list_medium_line_x2_t3_g4_g2_ParamLimits

0x201c,	// (0x00030d66) list_medium_line_x2_t3_g4_g2

0x1f80,	// (0x00030cca) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f80,	// (0x00030cca) list_medium_line_x2_t3_g4_g3

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1f8c,	// (0x00030cd6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0003e011) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0003e011) list_medium_line_x2_t3_g4_g

0x88aa,	// (0x000375f4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88aa,	// (0x000375f4) list_medium_line_x2_t3_g4_t1

0x88c0,	// (0x0003760a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88c0,	// (0x0003760a) list_medium_line_x2_t3_g4_t2

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1fc1,	// (0x00030d0b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003ea93) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003ea93) list_medium_line_x2_t3_g4_t

0x6ed0,	// (0x00035c1a) list_medium_line_g2_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_g2_g1

0xd440,	// (0x0003c18a) list_medium_line_g2_g2_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003e74a) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003e74a) list_medium_line_g2_g

0xe593,	// (0x0003d2dd) list_medium_line_g2_t1_ParamLimits

0xe593,	// (0x0003d2dd) list_medium_line_g2_t1

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g2_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g2_g1

0xd440,	// (0x0003c18a) list_medium_line_t3_g2_g2_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003e74a) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003e74a) list_medium_line_t3_g2_g

0x88d9,	// (0x00037623) list_medium_line_t3_g2_t1_ParamLimits

0x88d9,	// (0x00037623) list_medium_line_t3_g2_t1

0x88f3,	// (0x0003763d) list_medium_line_t3_g2_t2_ParamLimits

0x88f3,	// (0x0003763d) list_medium_line_t3_g2_t2

0x8909,	// (0x00037653) list_medium_line_t3_g2_t3_ParamLimits

0x8909,	// (0x00037653) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003ea9a) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003ea9a) list_medium_line_t3_g2_t

0xe39e,	// (0x0003d0e8) list_medium_line_right_icon_g1

0xe5a8,	// (0x0003d2f2) list_medium_line_right_icon_t1

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g1

0x8920,	// (0x0003766a) list_medium_line_t2_t1_ParamLimits

0x8920,	// (0x0003766a) list_medium_line_t2_t1

0x893a,	// (0x00037684) list_medium_line_t2_t2_ParamLimits

0x893a,	// (0x00037684) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003eaa1) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003eaa1) list_medium_line_t2_t

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g1

0x8953,	// (0x0003769d) list_medium_line_t3_t1_ParamLimits

0x8953,	// (0x0003769d) list_medium_line_t3_t1

0x896a,	// (0x000376b4) list_medium_line_t3_t2_ParamLimits

0x896a,	// (0x000376b4) list_medium_line_t3_t2

0x897f,	// (0x000376c9) list_medium_line_t3_t3_ParamLimits

0x897f,	// (0x000376c9) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003eaa6) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003eaa6) list_medium_line_t3_t

0x6ed0,	// (0x00035c1a) list_medium_line_g3_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_g3_g1

0xe5b6,	// (0x0003d300) list_medium_line_g3_g2_ParamLimits

0xe5b6,	// (0x0003d300) list_medium_line_g3_g2

0xd440,	// (0x0003c18a) list_medium_line_g3_g3_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003eaad) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003eaad) list_medium_line_g3_g

0xe5c2,	// (0x0003d30c) list_medium_line_g3_t1_ParamLimits

0xe5c2,	// (0x0003d30c) list_medium_line_g3_t1

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g3_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t2_g3_g1

0xe5b6,	// (0x0003d300) list_medium_line_t2_g3_g2_ParamLimits

0xe5b6,	// (0x0003d300) list_medium_line_t2_g3_g2

0xd440,	// (0x0003c18a) list_medium_line_t2_g3_g3_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003eaad) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003eaad) list_medium_line_t2_g3_g

0x8991,	// (0x000376db) list_medium_line_t2_g3_t1_ParamLimits

0x8991,	// (0x000376db) list_medium_line_t2_g3_t1

0x89a8,	// (0x000376f2) list_medium_line_t2_g3_t2_ParamLimits

0x89a8,	// (0x000376f2) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003eab4) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003eab4) list_medium_line_t2_g3_t

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g3_g1_ParamLimits

0x6ed0,	// (0x00035c1a) list_medium_line_t3_g3_g1

0xe5b6,	// (0x0003d300) list_medium_line_t3_g3_g2_ParamLimits

0xe5b6,	// (0x0003d300) list_medium_line_t3_g3_g2

0xd440,	// (0x0003c18a) list_medium_line_t3_g3_g3_ParamLimits

0xd440,	// (0x0003c18a) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003eaad) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003eaad) list_medium_line_t3_g3_g

0x89c1,	// (0x0003770b) list_medium_line_t3_g3_t1_ParamLimits

0x89c1,	// (0x0003770b) list_medium_line_t3_g3_t1

0x89da,	// (0x00037724) list_medium_line_t3_g3_t2_ParamLimits

0x89da,	// (0x00037724) list_medium_line_t3_g3_t2

0x89f0,	// (0x0003773a) list_medium_line_t3_g3_t3_ParamLimits

0x89f0,	// (0x0003773a) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003eab9) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003eab9) list_medium_line_t3_g3_t

0xe4c9,	// (0x0003d213) list_medium_line_right_iconx2_g1

0xe39e,	// (0x0003d0e8) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003eac0) list_medium_line_right_iconx2_g

0xe5d7,	// (0x0003d321) list_medium_line_right_iconx2_t1

0xe4c9,	// (0x0003d213) list_medium_line_t2_right_iconx2_g1

0xe39e,	// (0x0003d0e8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003eac0) list_medium_line_t2_right_iconx2_g

0x8a0a,	// (0x00037754) list_medium_line_t2_right_iconx2_t1

0x8a1a,	// (0x00037764) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003eac5) list_medium_line_t2_right_iconx2_t

0x8a2c,	// (0x00037776) list_medium_line_x4_t4_t1

0x8a3a,	// (0x00037784) list_medium_line_x4_t4_t2

0x8a4a,	// (0x00037794) list_medium_line_x4_t4_t3

0x8a5a,	// (0x000377a4) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003eaca) list_medium_line_x4_t4_t

0x8aad,	// (0x000377f7) tport_appsw_pane_ParamLimits

0x8aad,	// (0x000377f7) tport_appsw_pane

0x8ac5,	// (0x0003780f) tport_contact_pane_ParamLimits

0x8ac5,	// (0x0003780f) tport_contact_pane

0x8add,	// (0x00037827) tport_listscroll_pane_ParamLimits

0x8add,	// (0x00037827) tport_listscroll_pane

0x8af7,	// (0x00037841) cell_tport_appsw_pane_ParamLimits

0x8af7,	// (0x00037841) cell_tport_appsw_pane

0xd1c3,	// (0x0003bf0d) tport_appsw_pane_g1_ParamLimits

0xd1c3,	// (0x0003bf0d) tport_appsw_pane_g1

0xe5e5,	// (0x0003d32f) tport_contact_pane_g1

0xe5ee,	// (0x0003d338) tport_contact_pane_t1

0xe5fc,	// (0x0003d346) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003ead3) tport_contact_pane_t

0xe60a,	// (0x0003d354) list_tport_pane

0xe613,	// (0x0003d35d) scroll_pane_cp_030

0x8b49,	// (0x00037893) cell_tport_appsw_pane_g1

0x8b59,	// (0x000378a3) cell_tport_appsw_pane_t1

0x8b67,	// (0x000378b1) grid_highlight_pane_cp019

0x8b6f,	// (0x000378b9) list_tport_double_graphic_pane_ParamLimits

0x8b6f,	// (0x000378b9) list_tport_double_graphic_pane

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp023_ParamLimits

0x9cd1,	// (0x00038a1b) list_highlight_pane_cp023

0x8b7c,	// (0x000378c6) list_tport_double_graphic_pane_g1_ParamLimits

0x8b7c,	// (0x000378c6) list_tport_double_graphic_pane_g1

0x8b89,	// (0x000378d3) list_tport_double_graphic_pane_t1_ParamLimits

0x8b89,	// (0x000378d3) list_tport_double_graphic_pane_t1

0x8b9e,	// (0x000378e8) list_tport_double_graphic_pane_t2_ParamLimits

0x8b9e,	// (0x000378e8) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003eadf) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003eadf) list_tport_double_graphic_pane_t

0x9c70,	// (0x000389ba) main_cale_note_pane

0x0c47,	// (0x0002f991) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x0c47,	// (0x0002f991) cell_vitu2_function_top_wide_pane_cp01

0x8090,	// (0x00036dda) wait_bar_pane_cp05_ParamLimits

0x9cd1,	// (0x00038a1b) listscroll_cmail_pane

0xe624,	// (0x0003d36e) list_cmail_pane

0x8bba,	// (0x00037904) list_cmail_body_pane

0xe205,	// (0x0003cf4f) list_single_cmail_header_caption_pane

0x8bcd,	// (0x00037917) list_single_cmail_header_detail_pane_ParamLimits

0x8bcd,	// (0x00037917) list_single_cmail_header_detail_pane

0x8bf8,	// (0x00037942) list_single_cmail_header_caption_pane_t1

0x8c13,	// (0x0003795d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c13,	// (0x0003795d) list_single_cmail_header_detail_pane_g1

0xe63b,	// (0x0003d385) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63b,	// (0x0003d385) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003eae4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003eae4) list_single_cmail_header_detail_pane_g

0x8c2b,	// (0x00037975) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8c2b,	// (0x00037975) list_single_cmail_header_detail_pane_t1

0x8c7b,	// (0x000379c5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c7b,	// (0x000379c5) list_single_cmail_header_editor_pane_bg

0xdf31,	// (0x0003cc7b) list_cmail_body_pane_g1

0xe678,	// (0x0003d3c2) list_cmail_body_pane_t1

0xd200,	// (0x0003bf4a) list_single_cmail_header_editor_pane_bg_g1

0xa83b,	// (0x00039585) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd210,	// (0x0003bf5a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd208,	// (0x0003bf52) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd438,	// (0x0003c182) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd230,	// (0x0003bf7a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd220,	// (0x0003bf6a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd228,	// (0x0003bf72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa81b,	// (0x00039565) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c94,	// (0x000379de) calenote_gesture_pane_ParamLimits

0x8c94,	// (0x000379de) calenote_gesture_pane

0x8cb4,	// (0x000379fe) calenote_window_pane_ParamLimits

0x8cb4,	// (0x000379fe) calenote_window_pane

0xe686,	// (0x0003d3d0) popup_note_window_cp01

0x8cd0,	// (0x00037a1a) calenote_swipe_1_pane_ParamLimits

0x8cd0,	// (0x00037a1a) calenote_swipe_1_pane

0x84ec,	// (0x00037236) calenote_swipe_2_pane_ParamLimits

0x84ec,	// (0x00037236) calenote_swipe_2_pane

0xe2b8,	// (0x0003d002) calenote_swipe_1_pane_g1_ParamLimits

0xe2b8,	// (0x0003d002) calenote_swipe_1_pane_g1

0xe2c5,	// (0x0003d00f) calenote_swipe_1_pane_g2_ParamLimits

0xe2c5,	// (0x0003d00f) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003ea0d) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003ea0d) calenote_swipe_1_pane_g

0xe698,	// (0x0003d3e2) calenote_swipe_1_pane_t1_ParamLimits

0xe698,	// (0x0003d3e2) calenote_swipe_1_pane_t1

0xe2b8,	// (0x0003d002) calenote_swipe_2_pane_g1_ParamLimits

0xe2b8,	// (0x0003d002) calenote_swipe_2_pane_g1

0xe6b7,	// (0x0003d401) calenote_swipe_2_pane_g2_ParamLimits

0xe6b7,	// (0x0003d401) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003eaf0) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003eaf0) calenote_swipe_2_pane_g

0xe6c3,	// (0x0003d40d) calenote_swipe_2_pane_t1_ParamLimits

0xe6c3,	// (0x0003d40d) calenote_swipe_2_pane_t1

0x9c70,	// (0x000389ba) main_mup_navstr_pane

0x57a7,	// (0x000344f1) main_mup3_pane_t7_ParamLimits

0x57a7,	// (0x000344f1) main_mup3_pane_t7

0x61eb,	// (0x00034f35) main_mp4_pane_g6_ParamLimits

0x61eb,	// (0x00034f35) main_mp4_pane_g6

0x6432,	// (0x0003517c) main_image3_pane_t4_ParamLimits

0x6432,	// (0x0003517c) main_image3_pane_t4

0x8ce5,	// (0x00037a2f) popup_navstr_preview_pane_ParamLimits

0x8ce5,	// (0x00037a2f) popup_navstr_preview_pane

0x8cf5,	// (0x00037a3f) scroll_navstr_pane_ParamLimits

0x8cf5,	// (0x00037a3f) scroll_navstr_pane

0x9c70,	// (0x000389ba) bg_popup_preview_window_pane_cp04

0xe6ea,	// (0x0003d434) popup_navstr_preview_pane_t1

0x8d09,	// (0x00037a53) scroll_navstr_pane_g1_ParamLimits

0x8d09,	// (0x00037a53) scroll_navstr_pane_g1

0x8d1d,	// (0x00037a67) scroll_navstr_pane_t1_ParamLimits

0x8d1d,	// (0x00037a67) scroll_navstr_pane_t1

0xe68f,	// (0x0003d3d9) bg_button_pane_cp014

0xe68f,	// (0x0003d3d9) bg_button_pane_cp030

0x8382,	// (0x000370cc) list_double_fisheye_pane_g4_ParamLimits

0x8382,	// (0x000370cc) list_double_fisheye_pane_g4

0x838e,	// (0x000370d8) list_double_fisheye_pane_g5_ParamLimits

0x838e,	// (0x000370d8) list_double_fisheye_pane_g5

0xe62c,	// (0x0003d376) sp_fs_scroll_pane_cp03

0xd0c5,	// (0x0003be0f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3de,	// (0x0003d128) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003ea2a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3ea,	// (0x0003d134) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8bb0,	// (0x000378fa) sp_fs_scroll_pane_cp02

0xa528,	// (0x00039272) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa528,	// (0x00039272) popup_sp_fs_calendar_preview_list_single_pane

0x9c70,	// (0x000389ba) main_cam6_pano_pane

0x9cd1,	// (0x00038a1b) main_mup3_pane_ParamLimits

0x9c70,	// (0x000389ba) main_phacti_pane

0x7f63,	// (0x00036cad) bg_button_pane_cp11

0x7f7d,	// (0x00036cc7) main_mobtv_info_pane_g2_ParamLimits

0x7f7d,	// (0x00036cc7) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003e98a) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003e98a) main_mobtv_info_pane_g

0x8158,	// (0x00036ea2) sc_clock_pane_t5_ParamLimits

0x8158,	// (0x00036ea2) sc_clock_pane_t5

0x81e4,	// (0x00036f2e) main_radioblah_pane_g1_ParamLimits

0xe1d5,	// (0x0003cf1f) main_radioblah_pane_t3_ParamLimits

0xe1d5,	// (0x0003cf1f) main_radioblah_pane_t3

0xe1ed,	// (0x0003cf37) main_radioblah_pane_t4_ParamLimits

0xe1ed,	// (0x0003cf37) main_radioblah_pane_t4

0x820c,	// (0x00036f56) main_radioblah_text_pane_ParamLimits

0x820c,	// (0x00036f56) main_radioblah_text_pane

0x821e,	// (0x00036f68) main_radioblah_info_pane_g1_ParamLimits

0x82b7,	// (0x00037001) main_radioblah_info_pane_t4_ParamLimits

0x82b7,	// (0x00037001) main_radioblah_info_pane_t4

0x9cd1,	// (0x00038a1b) main_sp_fs_calendar_pane

0x8d34,	// (0x00037a7e) main_phacti_pane_g1

0x8d3c,	// (0x00037a86) phacti_note_pane_ParamLimits

0x8d3c,	// (0x00037a86) phacti_note_pane

0xe701,	// (0x0003d44b) phacti_term_pane_ParamLimits

0xe701,	// (0x0003d44b) phacti_term_pane

0xe716,	// (0x0003d460) phacti_note_pane_t1_ParamLimits

0xe716,	// (0x0003d460) phacti_note_pane_t1

0xe72d,	// (0x0003d477) phacti_term_pane_g1

0xe735,	// (0x0003d47f) phacti_term_pane_t1_ParamLimits

0xe735,	// (0x0003d47f) phacti_term_pane_t1

0xe75f,	// (0x0003d4a9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe767,	// (0x0003d4b1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003eafa) popup_sp_fs_calendar_preview_list_single_pane_g

0xe76f,	// (0x0003d4b9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe76f,	// (0x0003d4b9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe785,	// (0x0003d4cf) aid_popup_sp_fs_bg_corner_pane

0xc7d1,	// (0x0003b51b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c70,	// (0x000389ba) popup_sp_fs_calendar_preview_bg_pane

0xe78d,	// (0x0003d4d7) popup_sp_fs_calendar_preview_list_pane

0xc380,	// (0x0003b0ca) bg_main_sp_fs_cale_pane_ParamLimits

0xc380,	// (0x0003b0ca) bg_main_sp_fs_cale_pane

0xe79e,	// (0x0003d4e8) listscroll_cale_mrui_pane_ParamLimits

0xe79e,	// (0x0003d4e8) listscroll_cale_mrui_pane

0xe7b3,	// (0x0003d4fd) listscroll_sp_fs_schedule_track_pane

0xe7bc,	// (0x0003d506) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7bc,	// (0x0003d506) main_sp_fs_ctrlbar_pane_cp01

0xe7cf,	// (0x0003d519) main_sp_fs_ribbon_pane

0xe7d7,	// (0x0003d521) popup_sp_fs_cale_preview_window

0x8dad,	// (0x00037af7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8dad,	// (0x00037af7) list_single_sp_fs_schedule_track_pane

0x9cd1,	// (0x00038a1b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9cd1,	// (0x00038a1b) bg_sp_fs_highlight_list_pane_cp03

0x8dc1,	// (0x00037b0b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8dc1,	// (0x00037b0b) list_single_sp_fs_schedule_track_pane_g1

0x8dcd,	// (0x00037b17) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8dcd,	// (0x00037b17) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003eaff) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003eaff) list_single_sp_fs_schedule_track_pane_g

0x8dd9,	// (0x00037b23) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dd9,	// (0x00037b23) list_single_sp_fs_schedule_track_pane_t1

0x8dfb,	// (0x00037b45) sp_fs_schedule_track_pane_ParamLimits

0x8dfb,	// (0x00037b45) sp_fs_schedule_track_pane

0xe7e9,	// (0x0003d533) sp_fs_schedule_track_pane_g1

0xe7f1,	// (0x0003d53b) sp_fs_schedule_track_pane_g2

0xe7f9,	// (0x0003d543) sp_fs_schedule_track_pane_g3

0xe801,	// (0x0003d54b) sp_fs_schedule_track_pane_g4

0xe809,	// (0x0003d553) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003eb04) sp_fs_schedule_track_pane_g

0xd200,	// (0x0003bf4a) bg_sp_fs_schedule_viewer_highlight_g1

0xa83b,	// (0x00039585) bg_sp_fs_schedule_viewer_highlight_g2

0xd208,	// (0x0003bf52) bg_sp_fs_schedule_viewer_highlight_g3

0xd210,	// (0x0003bf5a) bg_sp_fs_schedule_viewer_highlight_g4

0xd438,	// (0x0003c182) bg_sp_fs_schedule_viewer_highlight_g5

0xd220,	// (0x0003bf6a) bg_sp_fs_schedule_viewer_highlight_g6

0xd228,	// (0x0003bf72) bg_sp_fs_schedule_viewer_highlight_g7

0xd230,	// (0x0003bf7a) bg_sp_fs_schedule_viewer_highlight_g8

0xa81b,	// (0x00039565) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003eb0f) bg_sp_fs_schedule_viewer_highlight_g

0x9c70,	// (0x000389ba) bg_main_sp_fs_ribbon_pane

0x8e10,	// (0x00037b5a) main_sp_fs_ribbon_pane_g1

0xe811,	// (0x0003d55b) main_sp_fs_ribbon_pane_t1

0x8e19,	// (0x00037b63) main_sp_fs_ribbon_pane_t2

0xe820,	// (0x0003d56a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003eb22) main_sp_fs_ribbon_pane_t

0xe82f,	// (0x0003d579) main_sp_fs_ribbon_scheduler_pane

0xe837,	// (0x0003d581) bg_main_sp_fs_ribbon_pane_g1

0xe840,	// (0x0003d58a) bg_main_sp_fs_ribbon_pane_g2

0xe849,	// (0x0003d593) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003eb29) bg_main_sp_fs_ribbon_pane_g

0xe851,	// (0x0003d59b) main_sp_fs_ribbon_scheduler_pane_g1

0xe85a,	// (0x0003d5a4) main_sp_fs_ribbon_scheduler_pane_g2

0xe863,	// (0x0003d5ad) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003eb30) main_sp_fs_ribbon_scheduler_pane_g

0xe86c,	// (0x0003d5b6) list_cale_mrui_pane

0x8e28,	// (0x00037b72) sp_fs_scroll_pane_cp07_ParamLimits

0x8e28,	// (0x00037b72) sp_fs_scroll_pane_cp07

0x8e44,	// (0x00037b8e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e44,	// (0x00037b8e) bg_sp_fs_schedule_viewer_highlight

0xe879,	// (0x0003d5c3) list_single_sp_fs_schedule_track_pane_cp01

0xe881,	// (0x0003d5cb) list_sp_fs_schedule_track_pane

0xe889,	// (0x0003d5d3) sp_fs_scroll_pane_cp06_ParamLimits

0xe889,	// (0x0003d5d3) sp_fs_scroll_pane_cp06

0xc7d1,	// (0x0003b51b) bgmain_sp_fs_calendar_pane_g1

0x8e56,	// (0x00037ba0) list_single_cale_mrui_pane_ParamLimits

0x8e56,	// (0x00037ba0) list_single_cale_mrui_pane

0xe89b,	// (0x0003d5e5) list_single_cale_mrui_row_pane_ParamLimits

0xe89b,	// (0x0003d5e5) list_single_cale_mrui_row_pane

0xe8b1,	// (0x0003d5fb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8b1,	// (0x0003d5fb) list_single_cale_mrui_row_pane_g1

0xe8f6,	// (0x0003d640) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8f6,	// (0x0003d640) list_single_cale_mrui_row_pane_t1

0x8e6b,	// (0x00037bb5) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e6b,	// (0x00037bb5) list_single_cale_mrui_row_pane_t2

0xe908,	// (0x0003d652) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe908,	// (0x0003d652) list_single_cale_mrui_row_pane_t3

0xe937,	// (0x0003d681) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe937,	// (0x0003d681) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003eb3e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003eb3e) list_single_cale_mrui_row_pane_t

0x8ed3,	// (0x00037c1d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ed3,	// (0x00037c1d) list_single_cmail_header_editor_pane_bg_cp01

0x8ef9,	// (0x00037c43) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ef9,	// (0x00037c43) list_single_cmail_header_editor_pane_bg_cp02

0x8f19,	// (0x00037c63) main_radioblah_text_pane_t1_ParamLimits

0x8f19,	// (0x00037c63) main_radioblah_text_pane_t1

0xe966,	// (0x0003d6b0) cam6_indi_pane_cp01

0xe96e,	// (0x0003d6b8) cam6_mode_pane_cp01

0xe976,	// (0x0003d6c0) cam6_pano_pane

0xe97f,	// (0x0003d6c9) cam6_zoom_pane_cp01

0xe989,	// (0x0003d6d3) cam6_pano_image_pane

0xe992,	// (0x0003d6dc) cam6_pano_pane_g1

0xdf31,	// (0x0003cc7b) cam6_pano_pane_g2

0xe99b,	// (0x0003d6e5) cam6_pano_pane_g3

0xe9a4,	// (0x0003d6ee) cam6_pano_pane_g4

0xcd57,	// (0x0003baa1) cam6_pano_pane_g5

0xe9ad,	// (0x0003d6f7) cam6_pano_pane_g6

0xe9b5,	// (0x0003d6ff) cam6_pano_pane_g7

0xe9bd,	// (0x0003d707) cam6_pano_pane_g8

0xe9c6,	// (0x0003d710) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003eb47) cam6_pano_pane_g

0x9c70,	// (0x000389ba) main_browser_tag_pane

0xe6e2,	// (0x0003d42c) grid_navstr_albumart_pane

0xe9d1,	// (0x0003d71b) cell_navstr_albumart_pane_ParamLimits

0xe9d1,	// (0x0003d71b) cell_navstr_albumart_pane

0xe9f0,	// (0x0003d73a) cell_navstr_albumart_pane_g1

0xc18d,	// (0x0003aed7) cell_navstr_albumart_pane_g2

0xc19d,	// (0x0003aee7) cell_navstr_albumart_pane_g3

0xc195,	// (0x0003aedf) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003eb5a) cell_navstr_albumart_pane_g

0x8f34,	// (0x00037c7e) bt_list_pane_ParamLimits

0x8f34,	// (0x00037c7e) bt_list_pane

0x8f4a,	// (0x00037c94) bt_list_pane_t1

0x8f59,	// (0x00037ca3) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003eb63) bt_list_pane_t

0x9c70,	// (0x000389ba) main_cale_prevew_pane

0x8f68,	// (0x00037cb2) popup_cale_preview_window_ParamLimits

0x8f68,	// (0x00037cb2) popup_cale_preview_window

0x9cd1,	// (0x00038a1b) bg_popup_preview_window_pane_cp05_ParamLimits

0x9cd1,	// (0x00038a1b) bg_popup_preview_window_pane_cp05

0xe9f8,	// (0x0003d742) list_cale_preview_pane_ParamLimits

0xe9f8,	// (0x0003d742) list_cale_preview_pane

0x8f85,	// (0x00037ccf) list_double_cale_preview_pane_ParamLimits

0x8f85,	// (0x00037ccf) list_double_cale_preview_pane

0x8f99,	// (0x00037ce3) list_single_cale_preview_pane_ParamLimits

0x8f99,	// (0x00037ce3) list_single_cale_preview_pane

0x8fb1,	// (0x00037cfb) list_single_cale_preview_pane_g1

0x8fb9,	// (0x00037d03) list_single_cale_preview_pane_t1_ParamLimits

0x8fb9,	// (0x00037d03) list_single_cale_preview_pane_t1

0x8fce,	// (0x00037d18) list_double_cale_preview_pane_g1

0x8fd6,	// (0x00037d20) list_double_cale_preview_pane_t1_ParamLimits

0x8fd6,	// (0x00037d20) list_double_cale_preview_pane_t1

0x8feb,	// (0x00037d35) list_double_cale_preview_pane_t2_ParamLimits

0x8feb,	// (0x00037d35) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003eb68) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003eb68) list_double_cale_preview_pane_t

0x9c70,	// (0x000389ba) main_ezdial_pane

0x9cd1,	// (0x00038a1b) main_sp_fs_email_pane_ParamLimits

0x8528,	// (0x00037272) cmail_ddmenu_btn01_pane_ParamLimits

0x8528,	// (0x00037272) cmail_ddmenu_btn01_pane

0x853b,	// (0x00037285) cmail_ddmenu_btn02_pane_ParamLimits

0x853b,	// (0x00037285) cmail_ddmenu_btn02_pane

0x855e,	// (0x000372a8) cmail_ddmenu_btn03_pane_ParamLimits

0x855e,	// (0x000372a8) cmail_ddmenu_btn03_pane

0x8589,	// (0x000372d3) main_sp_fs_ctrlbar_pane_ParamLimits

0x85ad,	// (0x000372f7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bba,	// (0x00037904) list_cmail_body_pane_ParamLimits

0x8c08,	// (0x00037952) bg_button_pane_cp12

0xe647,	// (0x0003d391) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe647,	// (0x0003d391) list_single_cmail_header_detail_pane_g3

0xe654,	// (0x0003d39e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe654,	// (0x0003d39e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003eaeb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003eaeb) list_single_cmail_header_detail_pane_t

0xe74a,	// (0x0003d494) phacti_term_pane_t2_ParamLimits

0xe74a,	// (0x0003d494) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003eaf5) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003eaf5) phacti_term_pane_t

0xea04,	// (0x0003d74e) aid_size_list_single_double

0x9003,	// (0x00037d4d) popup_ezdial_listscroll_window

0x901f,	// (0x00037d69) popup_number_entry_window_cp01

0xaf14,	// (0x00039c5e) bg_popup_call_pane_cp09

0xea10,	// (0x0003d75a) ezdial_list_pane

0xea18,	// (0x0003d762) scroll_pane_cp23

0xc380,	// (0x0003b0ca) bg_button_pane_cp028_ParamLimits

0xc380,	// (0x0003b0ca) bg_button_pane_cp028

0x902d,	// (0x00037d77) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x902d,	// (0x00037d77) cmail_ddmenu_btn01_pane_g1

0x903c,	// (0x00037d86) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x903c,	// (0x00037d86) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003eb6d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003eb6d) cmail_ddmenu_btn01_pane_g

0xea20,	// (0x0003d76a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea20,	// (0x0003d76a) cmail_ddmenu_btn01_pane_t1

0xc380,	// (0x0003b0ca) bg_button_pane_cp029_ParamLimits

0xc380,	// (0x0003b0ca) bg_button_pane_cp029

0x9052,	// (0x00037d9c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9052,	// (0x00037d9c) cmail_ddmenu_btn02_pane_g1

0x906d,	// (0x00037db7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x906d,	// (0x00037db7) cmail_ddmenu_btn02_pane_t1

0x9cd1,	// (0x00038a1b) bg_button_pane_cp031_ParamLimits

0x9cd1,	// (0x00038a1b) bg_button_pane_cp031

0x9052,	// (0x00037d9c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9052,	// (0x00037d9c) cmail_ddmenu_btn03_pane_g1

0x906d,	// (0x00037db7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x906d,	// (0x00037db7) cmail_ddmenu_btn03_pane_t1

0x63d9,	// (0x00035123) cell_dialer2_keypad_pane_t1_ParamLimits

0x63f3,	// (0x0003513d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x63f3,	// (0x0003513d) cell_dialer2_keypad_pane_t1_copy1

0x7dba,	// (0x00036b04) ncimui_group_button_pane

0x9cd1,	// (0x00038a1b) main_sp_fs_calendar_pane_ParamLimits

0xe205,	// (0x0003cf4f) list_single_cmail_header_caption_pane_ParamLimits

0xe795,	// (0x0003d4df) aid_recal_txt_sm_pane

0x9c70,	// (0x000389ba) mian_recal_day_pane

0xe7d7,	// (0x0003d521) popup_sp_fs_cale_preview_window_ParamLimits

0xea36,	// (0x0003d780) list_recal_day_pane

0xea79,	// (0x0003d7c3) list_single_recal_day_pane_ParamLimits

0xea79,	// (0x0003d7c3) list_single_recal_day_pane

0xea8b,	// (0x0003d7d5) list_single_recal_day_pane_g1_ParamLimits

0xea8b,	// (0x0003d7d5) list_single_recal_day_pane_g1

0xea97,	// (0x0003d7e1) list_single_recal_day_pane_g2_ParamLimits

0xea97,	// (0x0003d7e1) list_single_recal_day_pane_g2

0xeaa3,	// (0x0003d7ed) list_single_recal_day_pane_g3_ParamLimits

0xeaa3,	// (0x0003d7ed) list_single_recal_day_pane_g3

0x9094,	// (0x00037dde) list_single_recal_day_pane_g4_ParamLimits

0x9094,	// (0x00037dde) list_single_recal_day_pane_g4

0xeaaf,	// (0x0003d7f9) list_single_recal_day_pane_g5_ParamLimits

0xeaaf,	// (0x0003d7f9) list_single_recal_day_pane_g5

0xeabb,	// (0x0003d805) list_single_recal_day_pane_g6_ParamLimits

0xeabb,	// (0x0003d805) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003eb7c) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003eb7c) list_single_recal_day_pane_g

0xeacf,	// (0x0003d819) list_single_recal_day_pane_t1

0xeae1,	// (0x0003d82b) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003eb87) list_single_recal_day_pane_t

0x90ac,	// (0x00037df6) ncimui_query_button_pane_ParamLimits

0x90ac,	// (0x00037df6) ncimui_query_button_pane

0x90bc,	// (0x00037e06) ncimui_query_button_pane_t1_ParamLimits

0x90bc,	// (0x00037e06) ncimui_query_button_pane_t1

0xeaf3,	// (0x0003d83d) ncimui_query_button_pane_t2_ParamLimits

0xeaf3,	// (0x0003d83d) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003eb8c) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003eb8c) ncimui_query_button_pane_t

0x90cf,	// (0x00037e19) query_button_pane_ParamLimits

0x90cf,	// (0x00037e19) query_button_pane

0x9c70,	// (0x000389ba) bg_button_pane_cp0028

0xeb06,	// (0x0003d850) query_button_pane_t1

0x4708,	// (0x00033452) main_tport_pane_ParamLimits

0x8a6a,	// (0x000377b4) bg_popup_window_pane_cp01_ParamLimits

0x8a6a,	// (0x000377b4) bg_popup_window_pane_cp01

0x8a85,	// (0x000377cf) heading_pane_cp08_ParamLimits

0x8a85,	// (0x000377cf) heading_pane_cp08

0x8a98,	// (0x000377e2) heading_pane_cp07_ParamLimits

0x8a98,	// (0x000377e2) heading_pane_cp07

0x8b49,	// (0x00037893) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003ead8) cell_tport_appsw_pane_g

0xb085,	// (0x00039dcf) input_candi_list_open_g1

0xa9ef,	// (0x00039739) list_cale_time_pane_g6_ParamLimits

0xa9ef,	// (0x00039739) list_cale_time_pane_g6

0x515e,	// (0x00033ea8) aid_size_touch_calib_1_ParamLimits

0x515e,	// (0x00033ea8) aid_size_touch_calib_1

0x5170,	// (0x00033eba) aid_size_touch_calib_2_ParamLimits

0x5170,	// (0x00033eba) aid_size_touch_calib_2

0x5188,	// (0x00033ed2) aid_size_touch_calib_3_ParamLimits

0x5188,	// (0x00033ed2) aid_size_touch_calib_3

0x51a6,	// (0x00033ef0) aid_size_touch_calib_4_ParamLimits

0x51a6,	// (0x00033ef0) aid_size_touch_calib_4

0x51be,	// (0x00033f08) main_touch_calib_button_group_pane_ParamLimits

0x51be,	// (0x00033f08) main_touch_calib_button_group_pane

0x51d6,	// (0x00033f20) main_touch_calib_pane_g1_ParamLimits

0x51e8,	// (0x00033f32) main_touch_calib_pane_g2_ParamLimits

0x51fa,	// (0x00033f44) main_touch_calib_pane_g3_ParamLimits

0x520c,	// (0x00033f56) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0003e4a0) main_touch_calib_pane_g_ParamLimits

0x521e,	// (0x00033f68) main_touch_calib_pane_t1_ParamLimits

0x5238,	// (0x00033f82) main_touch_calib_pane_t2_ParamLimits

0x5252,	// (0x00033f9c) main_touch_calib_pane_t3_ParamLimits

0x5266,	// (0x00033fb0) main_touch_calib_pane_t4_ParamLimits

0x527c,	// (0x00033fc6) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0003e4a9) main_touch_calib_pane_t_ParamLimits

0xcb0d,	// (0x0003b857) list_single_fp_cale_pane_g3_ParamLimits

0xcb0d,	// (0x0003b857) list_single_fp_cale_pane_g3

0x6664,	// (0x000353ae) bg_button_pane_cp012_ParamLimits

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp03_ParamLimits

0x0e5d,	// (0x0002fba7) cell_vitu2_function_top_pane_g1_ParamLimits

0x6664,	// (0x000353ae) bg_vkb2_func_pane_cp04_ParamLimits

0x7d48,	// (0x00036a92) main_ncimui_button_group_pane_ParamLimits

0x7d48,	// (0x00036a92) main_ncimui_button_group_pane

0x7da8,	// (0x00036af2) main_ncimui_pane_t3_ParamLimits

0x7da8,	// (0x00036af2) main_ncimui_pane_t3

0xe6f8,	// (0x0003d442) phacti_button_group_pane

0xea04,	// (0x0003d74e) aid_size_list_single_double_ParamLimits

0x9003,	// (0x00037d4d) popup_ezdial_listscroll_window_ParamLimits

0x901f,	// (0x00037d69) popup_number_entry_window_cp01_ParamLimits

0x90e2,	// (0x00037e2c) phacti_button_pane_ParamLimits

0x90e2,	// (0x00037e2c) phacti_button_pane

0x9c70,	// (0x000389ba) bg_button_pane_cp14

0xeb14,	// (0x0003d85e) phacti_button_pane_t1

0x90f3,	// (0x00037e3d) main_touch_calib_button_pane_ParamLimits

0x90f3,	// (0x00037e3d) main_touch_calib_button_pane

0xa412,	// (0x0003915c) bg_button_pane_cp18_ParamLimits

0xa412,	// (0x0003915c) bg_button_pane_cp18

0xeb22,	// (0x0003d86c) main_touch_calib_button_pane_t1_ParamLimits

0xeb22,	// (0x0003d86c) main_touch_calib_button_pane_t1

0xeb38,	// (0x0003d882) main_touch_calib_button_pane_t2_ParamLimits

0xeb38,	// (0x0003d882) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003eb91) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003eb91) main_touch_calib_button_pane_t

0x9c70,	// (0x000389ba) cell_ncimui_button_pane

0x9c70,	// (0x000389ba) bg_button_pane_cp032

0xeb56,	// (0x0003d8a0) cell_ncimui_button_pane_t1

0x6410,	// (0x0003515a) image3_infobar_pane_ParamLimits

0x6410,	// (0x0003515a) image3_infobar_pane

0x8184,	// (0x00036ece) fs_bigclock_status_pane_ParamLimits

0x8184,	// (0x00036ece) fs_bigclock_status_pane

0x8191,	// (0x00036edb) main_fs_bigclock_clock_pane_ParamLimits

0x8191,	// (0x00036edb) main_fs_bigclock_clock_pane

0x81a5,	// (0x00036eef) main_fs_bigclock_indi_pane_ParamLimits

0x81a5,	// (0x00036eef) main_fs_bigclock_indi_pane

0x81c0,	// (0x00036f0a) main_fs_bigclock_swipe_pane_ParamLimits

0x81c0,	// (0x00036f0a) main_fs_bigclock_swipe_pane

0x9c70,	// (0x000389ba) main_fs_clock_dumped_data

0xe03e,	// (0x0003cd88) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe03e,	// (0x0003cd88) list_single_fs_bigclock_indicator_pane_g1

0xe068,	// (0x0003cdb2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe068,	// (0x0003cdb2) list_single_fs_bigclock_indicator_pane_g2

0xe082,	// (0x0003cdcc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe082,	// (0x0003cdcc) list_single_fs_bigclock_indicator_pane_g3

0xe09c,	// (0x0003cde6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe09c,	// (0x0003cde6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003e9be) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003e9be) list_single_fs_bigclock_indicator_pane_g

0xe0c7,	// (0x0003ce11) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0c7,	// (0x0003ce11) list_single_fs_bigclock_indicator_pane_t1

0xe0ef,	// (0x0003ce39) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0ef,	// (0x0003ce39) list_single_fs_bigclock_indicator_pane_t2

0xe117,	// (0x0003ce61) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe117,	// (0x0003ce61) list_single_fs_bigclock_indicator_pane_t3

0xe13f,	// (0x0003ce89) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe13f,	// (0x0003ce89) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003e9c9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003e9c9) list_single_fs_bigclock_indicator_pane_t

0xeb64,	// (0x0003d8ae) image3_infobar_fav_pane_ParamLimits

0xeb64,	// (0x0003d8ae) image3_infobar_fav_pane

0xeb74,	// (0x0003d8be) image3_infobar_loc_pane_ParamLimits

0xeb74,	// (0x0003d8be) image3_infobar_loc_pane

0xeb8a,	// (0x0003d8d4) image3_infobar_time_pane_ParamLimits

0xeb8a,	// (0x0003d8d4) image3_infobar_time_pane

0xc7d1,	// (0x0003b51b) image3_infobar_time_pane_g1

0xeb9a,	// (0x0003d8e4) image3_infobar_time_pane_t1

0xc7d1,	// (0x0003b51b) image3_infobar_loc_pane_g1

0xeba8,	// (0x0003d8f2) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003eb96) image3_infobar_loc_pane_g

0xebb0,	// (0x0003d8fa) image3_infobar_loc_pane_t1

0xc7d1,	// (0x0003b51b) image3_infobar_fav_pane_g1

0xebbe,	// (0x0003d908) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003eb9b) image3_infobar_fav_pane_g

0xebc6,	// (0x0003d910) fs_bigclock_status_battery_pane

0xebcf,	// (0x0003d919) fs_bigclock_status_signal_pane

0xebd8,	// (0x0003d922) fs_bigclock_status_title_pane

0xebe1,	// (0x0003d92b) fs_bigclock_status_signal_pane_g1

0xebea,	// (0x0003d934) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003eba0) fs_bigclock_status_signal_pane_g

0xebf2,	// (0x0003d93c) fs_bigclock_status_battery_pane_g1

0xebfb,	// (0x0003d945) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003eba5) fs_bigclock_status_battery_pane_g

0xec03,	// (0x0003d94d) fs_bigclock_status_title_pane_t1

0xc7d1,	// (0x0003b51b) main_fs_bigclock_clock_pane_g1

0xec11,	// (0x0003d95b) main_fs_bigclock_clock_pane_g2

0xec11,	// (0x0003d95b) main_fs_bigclock_clock_pane_g3

0xec11,	// (0x0003d95b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003ebaa) main_fs_bigclock_clock_pane_g

0xec19,	// (0x0003d963) main_fs_bigclock_clock_pane_t1

0xec27,	// (0x0003d971) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003ebb3) main_fs_bigclock_clock_pane_t

0x9108,	// (0x00037e52) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9108,	// (0x00037e52) list_single_fs_bigclock_indicator_pane

0x9119,	// (0x00037e63) list_single_fs_bigclock_pane_ParamLimits

0x9119,	// (0x00037e63) list_single_fs_bigclock_pane

0xec3f,	// (0x0003d989) main_fs_bigclock_indicator_pane_t1

0xec4e,	// (0x0003d998) list_single_fs_bigclock_pane_g1

0xec56,	// (0x0003d9a0) list_single_fs_bigclock_pane_t1

0xc7d1,	// (0x0003b51b) main_fs_bigclock_swipe_pane_g1

0xec99,	// (0x0003d9e3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003ebc4) main_fs_bigclock_swipe_pane_g

0xeca1,	// (0x0003d9eb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca1,	// (0x0003d9eb) main_fs_bigclock_swipe_pane_t1

0x338d,	// (0x000320d7) call_type_pane_ParamLimits

0x9c70,	// (0x000389ba) main_btmg_pane

0xe8dd,	// (0x0003d627) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8dd,	// (0x0003d627) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003eb37) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003eb37) list_single_cale_mrui_row_pane_g

0xea5f,	// (0x0003d7a9) list_recal_vselct_arw_lo_pane

0xea67,	// (0x0003d7b1) list_recal_vselct_arw_up_pane

0xea6f,	// (0x0003d7b9) list_recal_vselct_pane

0x917c,	// (0x00037ec6) btmg_button_pane

0x9186,	// (0x00037ed0) main_btmg_pane_g1

0x9c70,	// (0x000389ba) bg_button_pane_cp044

0xecbe,	// (0x0003da08) btmg_button_pane_t1

0xc36c,	// (0x0003b0b6) aid_listscroll_gen

0x9cd1,	// (0x00038a1b) main_cntbar_detail_pane

0xe61c,	// (0x0003d366) list_cmail_folder_pane

0xe62c,	// (0x0003d376) sp_fs_scroll_pane_cp03_ParamLimits

0x9190,	// (0x00037eda) list_single_fs_dyc_pane_cp01_ParamLimits

0x9190,	// (0x00037eda) list_single_fs_dyc_pane_cp01

0xeccc,	// (0x0003da16) aid_size_cmail_indent

0xecd5,	// (0x0003da1f) list_single_dyc_row_pane_cp01

0x91d8,	// (0x00037f22) cntbar_detail_list_pane_ParamLimits

0x91d8,	// (0x00037f22) cntbar_detail_list_pane

0x922a,	// (0x00037f74) main_cntbar_detail_cont_pane_ParamLimits

0x922a,	// (0x00037f74) main_cntbar_detail_cont_pane

0x32b0,	// (0x00031ffa) scroll_pane_cp032_ParamLimits

0x32b0,	// (0x00031ffa) scroll_pane_cp032

0x923e,	// (0x00037f88) cntbar_detail_list_event_pane_ParamLimits

0x923e,	// (0x00037f88) cntbar_detail_list_event_pane

0x91ea,	// (0x00037f34) cntbar_detail_list_shct_pane

0xa889,	// (0x000395d3) aid_list_gen

0xecde,	// (0x0003da28) aid_scroll

0xece7,	// (0x0003da31) aid_size_touch_scroll_bar

0x7550,	// (0x0003629a) aid_list_double

0xecf0,	// (0x0003da3a) aid_list_single

0x7550,	// (0x0003629a) aid_list_single_lg

0xecf9,	// (0x0003da43) aid_list_z_g_a_sm

0xed01,	// (0x0003da4b) aid_list_z_g_d

0xed09,	// (0x0003da53) aid_txt_z_prm

0x924e,	// (0x00037f98) aid_txt_z_prm_cp01

0x925c,	// (0x00037fa6) aid_txt_z_sec

0x926a,	// (0x00037fb4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x926a,	// (0x00037fb4) main_cntbar_detail_cont_pane_g1

0x927e,	// (0x00037fc8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x927e,	// (0x00037fc8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003ebc9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003ebc9) main_cntbar_detail_cont_pane_g

0xed17,	// (0x0003da61) main_cntbar_detail_cont_pane_t1

0xed25,	// (0x0003da6f) main_cntbar_detail_cont_pane_t2

0xed33,	// (0x0003da7d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003ebce) main_cntbar_detail_cont_pane_t

0x928e,	// (0x00037fd8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x928e,	// (0x00037fd8) cell_cntbar_detail_list_shct_pane

0xed41,	// (0x0003da8b) cntbar_detail_list_shct_pane_g1

0xed4a,	// (0x0003da94) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003ebd5) cntbar_detail_list_shct_pane_g

0x92a0,	// (0x00037fea) cntbar_detail_list_event_pane_g1_ParamLimits

0x92a0,	// (0x00037fea) cntbar_detail_list_event_pane_g1

0x92ac,	// (0x00037ff6) cntbar_detail_list_event_pane_g2_ParamLimits

0x92ac,	// (0x00037ff6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003ebda) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003ebda) cntbar_detail_list_event_pane_g

0x931a,	// (0x00038064) cntbar_detail_list_event_pane_t1_ParamLimits

0x931a,	// (0x00038064) cntbar_detail_list_event_pane_t1

0x932f,	// (0x00038079) cntbar_detail_list_event_pane_t2_ParamLimits

0x932f,	// (0x00038079) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003ebe7) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003ebe7) cntbar_detail_list_event_pane_t

0xc7d1,	// (0x0003b51b) cell_cntbar_detail_list_shct_pane_g1

0x37a2,	// (0x000324ec) navi_pane_mv_g3

0x9cd1,	// (0x00038a1b) main_cntbar_detail_pane_ParamLimits

0x9c70,	// (0x000389ba) main_notif_wgt_pane

0x6185,	// (0x00034ecf) aid_tch_main_mp4_pane_g4

0x6363,	// (0x000350ad) popup_slider_window_cp02

0xea55,	// (0x0003d79f) list_recal_day_event_pane

0x91a8,	// (0x00037ef2) cntbar_detail_btn_pane_ParamLimits

0x91a8,	// (0x00037ef2) cntbar_detail_btn_pane

0x91c0,	// (0x00037f0a) cntbar_detail_btn_pane_cp01_ParamLimits

0x91c0,	// (0x00037f0a) cntbar_detail_btn_pane_cp01

0x91ea,	// (0x00037f34) cntbar_detail_list_shct_pane_ParamLimits

0x91fa,	// (0x00037f44) cntbar_detail_pane_g1_ParamLimits

0x91fa,	// (0x00037f44) cntbar_detail_pane_g1

0x920e,	// (0x00037f58) cntbar_detail_pane_t1_ParamLimits

0x920e,	// (0x00037f58) cntbar_detail_pane_t1

0x92b8,	// (0x00038002) cntbar_detail_list_event_pane_g3_ParamLimits

0x92b8,	// (0x00038002) cntbar_detail_list_event_pane_g3

0x92d0,	// (0x0003801a) cntbar_detail_list_event_pane_g4_ParamLimits

0x92d0,	// (0x0003801a) cntbar_detail_list_event_pane_g4

0x92e8,	// (0x00038032) cntbar_detail_list_event_pane_g5_ParamLimits

0x92e8,	// (0x00038032) cntbar_detail_list_event_pane_g5

0x9300,	// (0x0003804a) cntbar_detail_list_event_pane_g6_ParamLimits

0x9300,	// (0x0003804a) cntbar_detail_list_event_pane_g6

0x9344,	// (0x0003808e) cntbar_detail_list_event_pane_t3_ParamLimits

0x9344,	// (0x0003808e) cntbar_detail_list_event_pane_t3

0x9356,	// (0x000380a0) popup_notif_wgt_window_ParamLimits

0x9356,	// (0x000380a0) popup_notif_wgt_window

0x936f,	// (0x000380b9) popup_submenu_window_cp01_ParamLimits

0x936f,	// (0x000380b9) popup_submenu_window_cp01

0xaf14,	// (0x00039c5e) bg_popup_window_pane_cp10

0xed53,	// (0x0003da9d) listscroll_notif_wgt_pane

0xed65,	// (0x0003daaf) list_notif_wgt_window

0xed6e,	// (0x0003dab8) scroll_pane_cp033

0x9383,	// (0x000380cd) list_notif_wgt_row_pane_ParamLimits

0x9383,	// (0x000380cd) list_notif_wgt_row_pane

0xed77,	// (0x0003dac1) aid_size_list_notif_wgt_del

0xed84,	// (0x0003dace) list_notif_wgt_row_pane_g1

0xed90,	// (0x0003dada) list_notif_wgt_row_pane_g2

0xed9c,	// (0x0003dae6) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003ebee) list_notif_wgt_row_pane_g

0xeda9,	// (0x0003daf3) list_notif_wgt_row_pane_t1

0xedbe,	// (0x0003db08) list_notif_wgt_row_pane_t2

0xedd0,	// (0x0003db1a) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003ebf5) list_notif_wgt_row_pane_t

0xd45e,	// (0x0003c1a8) list_recal_day_event_pane_g1

0xede2,	// (0x0003db2c) list_recal_day_event_pane_t1

0x9c70,	// (0x000389ba) bg_button_pane_cp045

0xedf1,	// (0x0003db3b) cntbar_detail_btn_pane_t1

0xc380,	// (0x0003b0ca) main_callh_pane_ParamLimits

0xc380,	// (0x0003b0ca) main_callh_pane

0x9c70,	// (0x000389ba) main_coverflow0_pane

0x9c70,	// (0x000389ba) main_wgtman_pane

0x81ce,	// (0x00036f18) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81ce,	// (0x00036f18) main_fs_bigclock_unlock_btn_pane

0x8b41,	// (0x0003788b) bg_button_pane_cp16

0x8b51,	// (0x0003789b) cell_tport_appsw_pane_g3

0x9393,	// (0x000380dd) cf0_flow_pane_ParamLimits

0x9393,	// (0x000380dd) cf0_flow_pane

0xedff,	// (0x0003db49) listscroll_cf0_pane

0xee0a,	// (0x0003db54) main_cf0_pane_g1

0x93a8,	// (0x000380f2) main_cf0_pane_t1_ParamLimits

0x93a8,	// (0x000380f2) main_cf0_pane_t1

0x93bf,	// (0x00038109) main_cf0_pane_t2_ParamLimits

0x93bf,	// (0x00038109) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003ec01) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003ec01) main_cf0_pane_t

0xee1c,	// (0x0003db66) scroll_pane_cp11

0x93d6,	// (0x00038120) cf0_flow_pane_g1

0x93e2,	// (0x0003812c) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003ec06) cf0_flow_pane_g

0x93ee,	// (0x00038138) cf0_flow_pane_t1

0x9c70,	// (0x000389ba) main_call6_pane

0x9c70,	// (0x000389ba) main_calllock_pane

0x9400,	// (0x0003814a) call6_btn_grp_pane_ParamLimits

0x9400,	// (0x0003814a) call6_btn_grp_pane

0x941a,	// (0x00038164) call6_pane_g1_ParamLimits

0x941a,	// (0x00038164) call6_pane_g1

0x9430,	// (0x0003817a) popup_call6_1st_window_ParamLimits

0x9430,	// (0x0003817a) popup_call6_1st_window

0x9441,	// (0x0003818b) popup_call6_2nd_window_ParamLimits

0x9441,	// (0x0003818b) popup_call6_2nd_window

0x9452,	// (0x0003819c) cell_call6_btn_pane_ParamLimits

0x9452,	// (0x0003819c) cell_call6_btn_pane

0xaf14,	// (0x00039c5e) bg_popup_call2_in_pane_cp03

0xee27,	// (0x0003db71) popup_call6_1st_window_g1

0xee2f,	// (0x0003db79) popup_call6_1st_window_g2

0xee37,	// (0x0003db81) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003ec0b) popup_call6_1st_window_g

0xee3f,	// (0x0003db89) popup_call6_1st_window_t1

0xee4e,	// (0x0003db98) popup_call6_1st_window_t2

0xee5e,	// (0x0003dba8) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003ec12) popup_call6_1st_window_t

0xaf14,	// (0x00039c5e) bg_popup_call2_in_pane_cp04

0xee27,	// (0x0003db71) popup_call6_2nd_window_g1

0xee2f,	// (0x0003db79) popup_call6_2nd_window_g2

0xee37,	// (0x0003db81) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003ec0b) popup_call6_2nd_window_g

0xee3f,	// (0x0003db89) popup_call6_2nd_window_t1

0x9c70,	// (0x000389ba) bg_button_pane_cp15

0xee6e,	// (0x0003dbb8) cell_call6_btn_pane_g1

0xee77,	// (0x0003dbc1) cell_call6_btn_pane_t1

0x9466,	// (0x000381b0) listscroll_wgtman_pane_ParamLimits

0x9466,	// (0x000381b0) listscroll_wgtman_pane

0x9487,	// (0x000381d1) wgtman_btn_pane_ParamLimits

0x9487,	// (0x000381d1) wgtman_btn_pane

0xadda,	// (0x00039b24) aid_scroll_copy1

0xee86,	// (0x0003dbd0) list_wgtman_pane

0x94ca,	// (0x00038214) wgtman_btn_pane_g1_ParamLimits

0x94ca,	// (0x00038214) wgtman_btn_pane_g1

0x94f6,	// (0x00038240) wgtman_btn_pane_t1_ParamLimits

0x94f6,	// (0x00038240) wgtman_btn_pane_t1

0xee90,	// (0x0003dbda) wgtman_btn_pane_t2_ParamLimits

0xee90,	// (0x0003dbda) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003ec19) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003ec19) wgtman_btn_pane_t

0x9533,	// (0x0003827d) listrow_wgtman_pane_ParamLimits

0x9533,	// (0x0003827d) listrow_wgtman_pane

0x9545,	// (0x0003828f) listrow_wgtman_pane_g1

0x9552,	// (0x0003829c) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003ec1e) listrow_wgtman_pane_g

0x9570,	// (0x000382ba) listrow_wgtman_pane_t1

0x9588,	// (0x000382d2) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003ec23) listrow_wgtman_pane_t

0x95ae,	// (0x000382f8) wait_bar_pane_cp09

0xeea7,	// (0x0003dbf1) main_calllock_btn_pane

0xeeb1,	// (0x0003dbfb) main_calllock_pane_g1

0x9c70,	// (0x000389ba) bg_button_pane_cp17

0xeebd,	// (0x0003dc07) main_calllock_btn_pane_g1

0xeec6,	// (0x0003dc10) main_calllock_btn_pane_t1

0x9c70,	// (0x000389ba) main_dialer3_pane

0x9c70,	// (0x000389ba) main_fmrd2_pane

0xc7d1,	// (0x0003b51b) main_fs_bigclock_unlock_btn_pane_g1

0xeedd,	// (0x0003dc27) main_fs_bigclock_unlock_btn_pane_t1

0x95c0,	// (0x0003830a) area_fmrd2_info_pane_ParamLimits

0x95c0,	// (0x0003830a) area_fmrd2_info_pane

0x95cf,	// (0x00038319) area_fmrd2_visual_pane_ParamLimits

0x95cf,	// (0x00038319) area_fmrd2_visual_pane

0x95dd,	// (0x00038327) fmrd2_indi_pane_ParamLimits

0x95dd,	// (0x00038327) fmrd2_indi_pane

0x95ea,	// (0x00038334) area_fmrd2_visual_pane_g1

0x95f2,	// (0x0003833c) area_fmrd2_visual_pane_t1

0x9602,	// (0x0003834c) area_fmrd2_visual_pane_t2

0x9612,	// (0x0003835c) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003ec2d) area_fmrd2_visual_pane_t

0x9622,	// (0x0003836c) area_fmrd2_info_pane_g1

0x962a,	// (0x00038374) area_fmrd2_info_pane_t1

0x963a,	// (0x00038384) area_fmrd2_info_pane_t2

0x964a,	// (0x00038394) area_fmrd2_info_pane_t3

0x965a,	// (0x000383a4) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003ec34) area_fmrd2_info_pane_t

0x966a,	// (0x000383b4) fmrd2_indi_pane_t1

0x967a,	// (0x000383c4) fmrd2_indi_pane_t2

0x968a,	// (0x000383d4) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003ec3d) fmrd2_indi_pane_t

0xe0ab,	// (0x0003cdf5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0ab,	// (0x0003cdf5) list_single_fs_bigclock_indicator_pane_g5

0xe154,	// (0x0003ce9e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe154,	// (0x0003ce9e) list_single_fs_bigclock_indicator_pane_t5

0x8d50,	// (0x00037a9a) aid_cell_bcale_month_pane_ParamLimits

0x8d50,	// (0x00037a9a) aid_cell_bcale_month_pane

0x8d6e,	// (0x00037ab8) bcale_month_pane_ParamLimits

0x8d6e,	// (0x00037ab8) bcale_month_pane

0x8d90,	// (0x00037ada) bcale_preview_pane_ParamLimits

0x8d90,	// (0x00037ada) bcale_preview_pane

0xec56,	// (0x0003d9a0) list_single_fs_bigclock_pane_t1_ParamLimits

0xec75,	// (0x0003d9bf) list_single_fs_bigclock_pane_t2_ParamLimits

0xec75,	// (0x0003d9bf) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003ebbf) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003ebbf) list_single_fs_bigclock_pane_t

0xeed5,	// (0x0003dc1f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003ec28) main_fs_bigclock_unlock_btn_pane_g

0x969a,	// (0x000383e4) aid_dia3_key_size_ParamLimits

0x969a,	// (0x000383e4) aid_dia3_key_size

0x96a9,	// (0x000383f3) aid_dia3_listrow_size_ParamLimits

0x96a9,	// (0x000383f3) aid_dia3_listrow_size

0x96be,	// (0x00038408) dia3_keypad_fun_pane_ParamLimits

0x96be,	// (0x00038408) dia3_keypad_fun_pane

0x96da,	// (0x00038424) dia3_keypad_num_pane_ParamLimits

0x96da,	// (0x00038424) dia3_keypad_num_pane

0x96f3,	// (0x0003843d) dia3_listscroll_pane_ParamLimits

0x96f3,	// (0x0003843d) dia3_listscroll_pane

0x9706,	// (0x00038450) dia3_numentry_pane_ParamLimits

0x9706,	// (0x00038450) dia3_numentry_pane

0xeeeb,	// (0x0003dc35) dia3_list_pane

0xeef6,	// (0x0003dc40) scroll_pane_cp12

0x9c70,	// (0x000389ba) bg_dia3_numentry_pane

0x971a,	// (0x00038464) dia3_numentry_pane_t1

0x9729,	// (0x00038473) cell_dia3_key_num_pane

0x9731,	// (0x0003847b) cell_dia3_key0_fun_pane_ParamLimits

0x9731,	// (0x0003847b) cell_dia3_key0_fun_pane

0x9745,	// (0x0003848f) cell_dia3_key1_fun_pane_ParamLimits

0x9745,	// (0x0003848f) cell_dia3_key1_fun_pane

0x975d,	// (0x000384a7) dia3_listrow_pane

0xdda9,	// (0x0003caf3) bg_dia3_numentry_pane_g1

0x9c70,	// (0x000389ba) bg_button_pane_cp21

0xef01,	// (0x0003dc4b) cell_dia3_key_num_pane_t1

0xef0f,	// (0x0003dc59) cell_dia3_key_num_pane_t2

0xef1e,	// (0x0003dc68) cell_dia3_key_num_pane_t3

0xef2d,	// (0x0003dc77) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003ec44) cell_dia3_key_num_pane_t

0x9c70,	// (0x000389ba) bg_button_pane_cp19

0x976f,	// (0x000384b9) cell_dia3_key0_fun_pane_g1

0x9c70,	// (0x000389ba) bg_button_pane_cp20

0x9777,	// (0x000384c1) cell_dia3_key1_fun_pane_g1

0x977f,	// (0x000384c9) area_left_week_number_pane

0x978d,	// (0x000384d7) area_top_day_name_pane

0x97a0,	// (0x000384ea) frame_month_view_pane

0xef3c,	// (0x0003dc86) grid_month_view_pane

0x97b5,	// (0x000384ff) cell_top_day_name_pane_ParamLimits

0x97b5,	// (0x000384ff) cell_top_day_name_pane

0x97e4,	// (0x0003852e) cell_area_left_week_number_pane_ParamLimits

0x97e4,	// (0x0003852e) cell_area_left_week_number_pane

0x97f8,	// (0x00038542) cell_month_view_pane_ParamLimits

0x97f8,	// (0x00038542) cell_month_view_pane

0xef4a,	// (0x0003dc94) frm_month_g1

0x9827,	// (0x00038571) frm_month_g2

0x983a,	// (0x00038584) frm_month_g3

0x984d,	// (0x00038597) frm_month_g4

0x9860,	// (0x000385aa) frm_month_g5

0x9873,	// (0x000385bd) frm_month_g6

0x9886,	// (0x000385d0) frm_month_g7

0xef57,	// (0x0003dca1) frm_month_g8

0x989b,	// (0x000385e5) frm_month_g9

0x98ab,	// (0x000385f5) frm_month_g10

0x98bb,	// (0x00038605) frm_month_g11

0x98cb,	// (0x00038615) frm_month_g12

0x98dd,	// (0x00038627) frm_month_g13

0x98f1,	// (0x0003863b) frm_month_g14

0x9905,	// (0x0003864f) frm_month_g15

0x9919,	// (0x00038663) frm_month_g16

0x000f,

0xff03,	// (0x0003ec4d) frm_month_g

0xef64,	// (0x0003dcae) cell_top_day_name_pane_t1

0x992d,	// (0x00038677) cell_area_left_week_number_pane_g1

0x9939,	// (0x00038683) cell_area_left_week_number_pane_t1

0xca01,	// (0x0003b74b) cell_month_view_pane_g1

0x994c,	// (0x00038696) cell_month_view_pane_t1

0x9c70,	// (0x000389ba) main_fps_pane

0xe3a6,	// (0x0003d0f0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a6,	// (0x0003d0f0) cmail_ddmenu_btn02_pane_cp1

0xe3c2,	// (0x0003d10c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3c2,	// (0x0003d10c) cmail_ddmenu_btn02_pane_cp2

0x9061,	// (0x00037dab) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9061,	// (0x00037dab) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003eb72) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003eb72) cmail_ddmenu_btn02_pane_g

0x9082,	// (0x00037dcc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9082,	// (0x00037dcc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003eb77) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003eb77) cmail_ddmenu_btn02_pane_t

0x995f,	// (0x000386a9) fps_text_pane_ParamLimits

0x995f,	// (0x000386a9) fps_text_pane

0x9976,	// (0x000386c0) main_fps_pane_g1_ParamLimits

0x9976,	// (0x000386c0) main_fps_pane_g1

0x998e,	// (0x000386d8) wait_bar_pane_cp010_ParamLimits

0x998e,	// (0x000386d8) wait_bar_pane_cp010

0x99a1,	// (0x000386eb) fps_text_pane_t1_ParamLimits

0x99a1,	// (0x000386eb) fps_text_pane_t1

0xe220,	// (0x0003cf6a) cam4_image_uncrop_pane_g1

0xe229,	// (0x0003cf73) cam4_image_uncrop_pane_g2

0x65ed,	// (0x00035337) cam4_image_uncrop_pane_g3

0x65f6,	// (0x00035340) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003e638) cam4_image_uncrop_pane_g

0x975d,	// (0x000384a7) dia3_listrow_pane_ParamLimits

0x9c70,	// (0x000389ba) main_phob2_pane

0x8b10,	// (0x0003785a) cell_tport_appsw_pane_cp02_ParamLimits

0x8b10,	// (0x0003785a) cell_tport_appsw_pane_cp02

0x8b24,	// (0x0003786e) cell_tport_appsw_pane_cp03_ParamLimits

0x8b24,	// (0x0003786e) cell_tport_appsw_pane_cp03

0x9c70,	// (0x000389ba) phob2_contact_card_pane

0x9c70,	// (0x000389ba) phob2_listscroll_pane

0xef77,	// (0x0003dcc1) phob2_list_pane

0xef7f,	// (0x0003dcc9) scroll_pane_cp034

0x99b9,	// (0x00038703) phob2_cc_data_pane_ParamLimits

0x99b9,	// (0x00038703) phob2_cc_data_pane

0x99da,	// (0x00038724) phob2_cc_listscroll_pane_ParamLimits

0x99da,	// (0x00038724) phob2_cc_listscroll_pane

0x99fc,	// (0x00038746) list_double_large_graphic_phob2_pane_ParamLimits

0x99fc,	// (0x00038746) list_double_large_graphic_phob2_pane

0x9a10,	// (0x0003875a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a10,	// (0x0003875a) list_double_large_graphic_phob2_pane_g1

0x9a26,	// (0x00038770) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a26,	// (0x00038770) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003ec6e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003ec6e) list_double_large_graphic_phob2_pane_g

0x9a32,	// (0x0003877c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a32,	// (0x0003877c) list_double_large_graphic_phob2_pane_t1

0x9a47,	// (0x00038791) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a47,	// (0x00038791) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003ec73) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003ec73) list_double_large_graphic_phob2_pane_t

0x9c70,	// (0x000389ba) list_highlight_pane_cp024

0x9a59,	// (0x000387a3) phob2_cc_button_pane

0x9a61,	// (0x000387ab) phob2_cc_data_pane_g1_ParamLimits

0x9a61,	// (0x000387ab) phob2_cc_data_pane_g1

0x9a77,	// (0x000387c1) phob2_cc_data_pane_g2_ParamLimits

0x9a77,	// (0x000387c1) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003ec78) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003ec78) phob2_cc_data_pane_g

0x9a87,	// (0x000387d1) phob2_cc_data_pane_t1_ParamLimits

0x9a87,	// (0x000387d1) phob2_cc_data_pane_t1

0x9a9f,	// (0x000387e9) phob2_cc_data_pane_t2_ParamLimits

0x9a9f,	// (0x000387e9) phob2_cc_data_pane_t2

0x9ab9,	// (0x00038803) phob2_cc_data_pane_t3_ParamLimits

0x9ab9,	// (0x00038803) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003ec7d) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003ec7d) phob2_cc_data_pane_t

0xef87,	// (0x0003dcd1) phob2_cc_list_pane_ParamLimits

0xef87,	// (0x0003dcd1) phob2_cc_list_pane

0xd4f5,	// (0x0003c23f) scroll_pane_cp035_ParamLimits

0xd4f5,	// (0x0003c23f) scroll_pane_cp035

0x9cd1,	// (0x00038a1b) bg_button_pane_cp033

0xef93,	// (0x0003dcdd) phob2_cc_button_pane_g1

0xef9f,	// (0x0003dce9) phob2_cc_button_pane_t1

0xefb4,	// (0x0003dcfe) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003ec84) phob2_cc_button_pane_t

0x9ad3,	// (0x0003881d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ad3,	// (0x0003881d) list_double_large_graphic_phob2_cc_pane

0x9ae7,	// (0x00038831) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ae7,	// (0x00038831) list_double_large_graphic_phob2_cc_pane_g1

0x9af3,	// (0x0003883d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9af3,	// (0x0003883d) list_double_large_graphic_phob2_cc_pane_g2

0x9aff,	// (0x00038849) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aff,	// (0x00038849) list_double_large_graphic_phob2_cc_pane_g3

0x9b0b,	// (0x00038855) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b0b,	// (0x00038855) list_double_large_graphic_phob2_cc_pane_g4

0x9b17,	// (0x00038861) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b17,	// (0x00038861) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003ec89) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003ec89) list_double_large_graphic_phob2_cc_pane_g

0x9b23,	// (0x0003886d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b23,	// (0x0003886d) list_double_large_graphic_phob2_cc_pane_t1

0x9b4c,	// (0x00038896) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b4c,	// (0x00038896) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003ec94) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003ec94) list_double_large_graphic_phob2_cc_pane_t

0xefc6,	// (0x0003dd10) list_highlight_pane_cp025_ParamLimits

0xefc6,	// (0x0003dd10) list_highlight_pane_cp025

0x9cd1,	// (0x00038a1b) bg_button_pane_cp033_ParamLimits

0xef93,	// (0x0003dcdd) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x0003dce9) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x0003dcfe) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003ec84) phob2_cc_button_pane_t_ParamLimits

0x11bb,	// (0x0002ff05) popup_wgtman_window

0xd31e,	// (0x0003c068) scroll_pane_cp038

0x94ac,	// (0x000381f6) wgtman_btn_pane_cp_01_ParamLimits

0x94ac,	// (0x000381f6) wgtman_btn_pane_cp_01

0xefd4,	// (0x0003dd1e) wgtman_content_pane

0xefdd,	// (0x0003dd27) wgtman_heading_pane

0x9c70,	// (0x000389ba) bg_heading_pane_cp02

0xefe6,	// (0x0003dd30) wgtman_heading_pane_g1

0xefee,	// (0x0003dd38) wgtman_heading_pane_t1

0xeffc,	// (0x0003dd46) scroll_pane_cp036

0xf004,	// (0x0003dd4e) wgtman_list_pane

0xf00c,	// (0x0003dd56) wgtman_list_pane_t1_ParamLimits

0xf00c,	// (0x0003dd56) wgtman_list_pane_t1

0x65d7,	// (0x00035321) cam4_grid_pane

0x6ff4,	// (0x00035d3e) bg_button_pane_cp015_ParamLimits

0x7008,	// (0x00035d52) bg_button_pane_cp016_ParamLimits

0x701b,	// (0x00035d65) bg_button_pane_cp017_ParamLimits

0x7073,	// (0x00035dbd) popup_vitu2_query_window_g3_ParamLimits

0x7073,	// (0x00035dbd) popup_vitu2_query_window_g3

0x7130,	// (0x00035e7a) popup_vitu2_query_window_t6_ParamLimits

0x7130,	// (0x00035e7a) popup_vitu2_query_window_t6

0x715b,	// (0x00035ea5) popup_vitu2_query_window_t7_ParamLimits

0x715b,	// (0x00035ea5) popup_vitu2_query_window_t7

0xe220,	// (0x0003cf6a) cam4_grid_pane_g1

0xe229,	// (0x0003cf73) cam4_grid_pane_g2

0xf026,	// (0x0003dd70) cam4_grid_pane_g3

0xf02f,	// (0x0003dd79) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003ec99) cam4_grid_pane_g

0x20ef,	// (0x00030e39) aid_placing_vt_slider_lsc_ParamLimits

0x23dc,	// (0x00031126) vidtel_button_pane_ParamLimits

0x23dc,	// (0x00031126) vidtel_button_pane

0xf03a,	// (0x0003dd84) bg_button_pane_cp034

0x9b75,	// (0x000388bf) vidtel_button_pane_g1

0xf044,	// (0x0003dd8e) vidtel_button_pane_t1

0xd422,	// (0x0003c16c) aid_size_vtel_slider_touch

0xd4f5,	// (0x0003c23f) scroll_pane_cp039

0xdde7,	// (0x0003cb31) ncim_query_button_pane_cp01_ParamLimits

0xde06,	// (0x0003cb50) ncimui_query_pane_g1_ParamLimits

0x9cd1,	// (0x00038a1b) input_focus_pane_cp012_ParamLimits

0xde2b,	// (0x0003cb75) ncim_query_entry_pane_t1_ParamLimits

0xd4f5,	// (0x0003c23f) scroll_pane_cp039_ParamLimits

0x3714,	// (0x0003245e) navi_pane_bcale_mc_g1

0x371c,	// (0x00032466) navi_pane_bcale_mc_t1

0xe3ff,	// (0x0003d149) main_sp_fs_email_pane_g1

0xe40b,	// (0x0003d155) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003ea2f) main_sp_fs_email_pane_g

0xe8e9,	// (0x0003d633) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8e9,	// (0x0003d633) list_single_cale_mrui_row_pane_g3

0x90a2,	// (0x00037dec) list_single_recal_day_pane_g5_event_pane

0xeac7,	// (0x0003d811) list_single_recal_day_pane_g7

0xf052,	// (0x0003dd9c) list_recal_day_event_pane_cp01

0xf05b,	// (0x0003dda5) list_recal_vselct_arw_lo_pane_cp01

0xf063,	// (0x0003ddad) list_recal_vselct_arw_up_pane_cp01

0xf06b,	// (0x0003ddb5) list_recal_vselct_pane_cp01

0xd45e,	// (0x0003c1a8) list_recal_day_event_pane_cp01_g1

0xf075,	// (0x0003ddbf) list_recal_day_event_pane_cp01_t1

0xeacf,	// (0x0003d819) list_single_recal_day_pane_t1_ParamLimits

0xeae1,	// (0x0003d82b) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003eb87) list_single_recal_day_pane_t_ParamLimits

0xa34d,	// (0x00039097) bg_notes_pane_ParamLimits

0xa3f0,	// (0x0003913a) list_notes_pane_ParamLimits

0x1479,	// (0x000301c3) scroll_pane_cp06_ParamLimits

0xa412,	// (0x0003915c) main_notes_pane_ParamLimits

0x9c70,	// (0x000389ba) main_welc_pane

0x9b7d,	// (0x000388c7) main_welc_body_pane_ParamLimits

0x9b7d,	// (0x000388c7) main_welc_body_pane

0x9b9c,	// (0x000388e6) main_welc_opti_pane_ParamLimits

0x9b9c,	// (0x000388e6) main_welc_opti_pane

0x9be5,	// (0x0003892f) main_welc_pane_t1_ParamLimits

0x9be5,	// (0x0003892f) main_welc_pane_t1

0x9c07,	// (0x00038951) main_welc_body_row_pane_ParamLimits

0x9c07,	// (0x00038951) main_welc_body_row_pane

0x9c1b,	// (0x00038965) main_welc_opti_row_pane_ParamLimits

0x9c1b,	// (0x00038965) main_welc_opti_row_pane

0xf083,	// (0x0003ddcd) main_welc_opti_row_pane_g1

0xf08b,	// (0x0003ddd5) main_welc_opti_row_pane_t1

0xf09a,	// (0x0003dde4) main_welc_body_row_pane_t1

0xed5d,	// (0x0003daa7) popup_notif_wgt_heading_pane

0xed77,	// (0x0003dac1) aid_size_list_notif_wgt_del_ParamLimits

0xed84,	// (0x0003dace) list_notif_wgt_row_pane_g1_ParamLimits

0xed90,	// (0x0003dada) list_notif_wgt_row_pane_g2_ParamLimits

0xed9c,	// (0x0003dae6) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003ebee) list_notif_wgt_row_pane_g_ParamLimits

0xeda9,	// (0x0003daf3) list_notif_wgt_row_pane_t1_ParamLimits

0xedbe,	// (0x0003db08) list_notif_wgt_row_pane_t2_ParamLimits

0xedd0,	// (0x0003db1a) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003ebf5) list_notif_wgt_row_pane_t_ParamLimits

0x9545,	// (0x0003828f) listrow_wgtman_pane_g1_ParamLimits

0x9552,	// (0x0003829c) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003ec1e) listrow_wgtman_pane_g_ParamLimits

0x9570,	// (0x000382ba) listrow_wgtman_pane_t1_ParamLimits

0x9588,	// (0x000382d2) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003ec23) listrow_wgtman_pane_t_ParamLimits

0x95ae,	// (0x000382f8) wait_bar_pane_cp09_ParamLimits

0x9c70,	// (0x000389ba) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0003ddf3) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0003ddfb) popup_notif_wgt_heading_pane_t1

0x9c70,	// (0x000389ba) main_vids_pane

0x9c70,	// (0x000389ba) vids_listscroll_pane

0x9c2b,	// (0x00038975) scroll_pane_cp040

0x9c70,	// (0x000389ba) vids_list_pane

0x9c36,	// (0x00038980) vids_list_double_pane_ParamLimits

0x9c36,	// (0x00038980) vids_list_double_pane

0x9c47,	// (0x00038991) vids_list_double_pane_g1

0x9c50,	// (0x0003899a) vids_list_double_pane_t1

0x9c60,	// (0x000389aa) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003eca7) vids_list_double_pane_t

0x9cd1,	// (0x00038a1b) main_ncimui_pane_ParamLimits

0x7d5c,	// (0x00036aa6) main_ncimui_pane_g1_ParamLimits

0x7d68,	// (0x00036ab2) main_ncimui_pane_g2_ParamLimits

0x7d68,	// (0x00036ab2) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003e934) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003e934) main_ncimui_pane_g

0x9bbb,	// (0x00038905) main_welc_pane_g1_ParamLimits

0x9bbb,	// (0x00038905) main_welc_pane_g1

0x9bd0,	// (0x0003891a) main_welc_pane_g2_ParamLimits

0x9bd0,	// (0x0003891a) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003eca2) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003eca2) main_welc_pane_g

0xa34d,	// (0x00039097) listscroll_mce_pane_ParamLimits

0x37f4,	// (0x0003253e) wait_bar_pane_cp10

0xc374,	// (0x0003b0be) main_cale_day_pane_ParamLimits

0xc374,	// (0x0003b0be) main_cale_week_pane_ParamLimits

0xa34d,	// (0x00039097) main_messa_pane_ParamLimits

0x5b31,	// (0x0003487b) main_clock2_btn_pane_ParamLimits

0x5b31,	// (0x0003487b) main_clock2_btn_pane

0xcb95,	// (0x0003b8df) main_clock2_btn_pane_cp01_ParamLimits

0xcb95,	// (0x0003b8df) main_clock2_btn_pane_cp01

0xe86c,	// (0x0003d5b6) list_cale_mrui_pane_ParamLimits

0xee14,	// (0x0003db5e) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003ebfc) main_cf0_pane_g

0x977f,	// (0x000384c9) area_left_week_number_pane_ParamLimits

0x978d,	// (0x000384d7) area_top_day_name_pane_ParamLimits

0x97a0,	// (0x000384ea) frame_month_view_pane_ParamLimits

0xef3c,	// (0x0003dc86) grid_month_view_pane_ParamLimits

0xef4a,	// (0x0003dc94) frm_month_g1_ParamLimits

0x9827,	// (0x00038571) frm_month_g2_ParamLimits

0x983a,	// (0x00038584) frm_month_g3_ParamLimits

0x984d,	// (0x00038597) frm_month_g4_ParamLimits

0x9860,	// (0x000385aa) frm_month_g5_ParamLimits

0x9873,	// (0x000385bd) frm_month_g6_ParamLimits

0x9886,	// (0x000385d0) frm_month_g7_ParamLimits

0xef57,	// (0x0003dca1) frm_month_g8_ParamLimits

0x989b,	// (0x000385e5) frm_month_g9_ParamLimits

0x98ab,	// (0x000385f5) frm_month_g10_ParamLimits

0x98bb,	// (0x00038605) frm_month_g11_ParamLimits

0x98cb,	// (0x00038615) frm_month_g12_ParamLimits

0x98dd,	// (0x00038627) frm_month_g13_ParamLimits

0x98f1,	// (0x0003863b) frm_month_g14_ParamLimits

0x9905,	// (0x0003864f) frm_month_g15_ParamLimits

0x9919,	// (0x00038663) frm_month_g16_ParamLimits

0xff03,	// (0x0003ec4d) frm_month_g_ParamLimits

0xef64,	// (0x0003dcae) cell_top_day_name_pane_t1_ParamLimits

0x992d,	// (0x00038677) cell_area_left_week_number_pane_g1_ParamLimits

0x9939,	// (0x00038683) cell_area_left_week_number_pane_t1_ParamLimits

0xca01,	// (0x0003b74b) cell_month_view_pane_g1_ParamLimits

0x994c,	// (0x00038696) cell_month_view_pane_t1_ParamLimits

0xa345,	// (0x0003908f) main_clock2_btn_pane_g1

0xf0bf,	// (0x0003de09) main_clock2_btn_pane_t1

0x9cd1,	// (0x00038a1b) listscroll_cmail_pane_ParamLimits

0xe3ff,	// (0x0003d149) main_sp_fs_email_pane_g1_ParamLimits

0xe40b,	// (0x0003d155) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003ea2f) main_sp_fs_email_pane_g_ParamLimits

0xea36,	// (0x0003d780) list_recal_day_pane_ParamLimits

0xea47,	// (0x0003d791) mian_recal_day_pane_t1

0x87eb,	// (0x00037535) list_single_dyc_row_text_pane_t4_ParamLimits

0x87eb,	// (0x00037535) list_single_dyc_row_text_pane_t4

0x8834,	// (0x0003757e) list_single_dyc_row_text_pane_t5_ParamLimits

0x8834,	// (0x0003757e) list_single_dyc_row_text_pane_t5

0xe4e3,	// (0x0003d22d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4e3,	// (0x0003d22d) list_single_dyc_row_text_pane_t6

0xa9ce,	// (0x00039718) aid_mgn_list_cale_time_pane

0x9cd1,	// (0x00038a1b) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
