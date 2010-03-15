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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008c2c8 };

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
0x0ba2,	// (0x0008ce6a) Screen

0x0bae,	// (0x0008ce76) application_window

0x0c02,	// (0x0008ceca) area_bottom_pane_ParamLimits

0x0c02,	// (0x0008ceca) area_bottom_pane

0x0c3b,	// (0x0008cf03) area_top_pane_ParamLimits

0x0c3b,	// (0x0008cf03) area_top_pane

0x993d,	// (0x00095c05) call_video_uplink_pane_ParamLimits

0x993d,	// (0x00095c05) call_video_uplink_pane

0x0cc9,	// (0x0008cf91) main_pane_ParamLimits

0x0cc9,	// (0x0008cf91) main_pane

0xc818,	// (0x00098ae0) context_pane

0x4608,	// (0x000908d0) navi_pane

0x4638,	// (0x00090900) popup_cale_events_window_ParamLimits

0x4638,	// (0x00090900) popup_cale_events_window

0xc82b,	// (0x00098af3) popup_mup_playback_window

0x4650,	// (0x00090918) signal_pane

0xa0be,	// (0x00096386) main_browser_pane

0xb3ae,	// (0x00097676) main_burst_pane

0x430a,	// (0x000905d2) main_calc_pane

0xc7bb,	// (0x00098a83) main_cale_day_pane

0x1305,	// (0x0008d5cd) main_cale_month_pane

0xc7bb,	// (0x00098a83) main_cale_week_pane

0xb3ae,	// (0x00097676) main_call_pane

0x9d7c,	// (0x00096044) main_call_poc_pane

0xb3ae,	// (0x00097676) main_camera_pane

0xb3ae,	// (0x00097676) main_chi_dic_pane

0xb250,	// (0x00097518) main_clock_pane

0x9d7c,	// (0x00096044) main_fmradio_pane

0xb3ae,	// (0x00097676) main_graph_messa_pane

0x9d7c,	// (0x00096044) main_help_pane

0xa0be,	// (0x00096386) main_im_pane

0x9fd7,	// (0x0009629f) main_image_pane_ParamLimits

0x9fd7,	// (0x0009629f) main_image_pane

0x9d7c,	// (0x00096044) main_location2_pane

0xb3ae,	// (0x00097676) main_location_pane

0x9fd7,	// (0x0009629f) main_messa_pane

0x9d7c,	// (0x00096044) main_mp2_pane

0xb3ae,	// (0x00097676) main_mp_pane

0x9d7c,	// (0x00096044) main_msg_pane

0x9d7c,	// (0x00096044) main_mup_eq_pane

0x9d7c,	// (0x00096044) main_mup_pane

0xa0be,	// (0x00096386) main_notes_pane

0x9d7c,	// (0x00096044) main_pec_pane

0x9d7c,	// (0x00096044) main_phob_pane

0x9d7c,	// (0x00096044) main_pinb_pane

0x9d7c,	// (0x00096044) main_postcard_pane

0x9d7c,	// (0x00096044) main_qdial_pane

0xb3ae,	// (0x00097676) main_skin_pane

0x9d7c,	// (0x00096044) main_smil2_pane

0xb3ae,	// (0x00097676) main_smil_pane

0xb3ae,	// (0x00097676) main_video_pane

0xb3ae,	// (0x00097676) main_video_tele_pane

0x9fd7,	// (0x0009629f) main_viewer_pane_ParamLimits

0x9fd7,	// (0x0009629f) main_viewer_pane

0xb3ae,	// (0x00097676) main_vorec_pane

0x4360,	// (0x00090628) popup_blid_sat_info_window_ParamLimits

0x4360,	// (0x00090628) popup_blid_sat_info_window

0x43c4,	// (0x0009068c) popup_dyc_status_message_window_ParamLimits

0x43c4,	// (0x0009068c) popup_dyc_status_message_window

0x43de,	// (0x000906a6) popup_grid_large_graphic_window_ParamLimits

0x43de,	// (0x000906a6) popup_grid_large_graphic_window

0x44a0,	// (0x00090768) popup_loc_request_window_ParamLimits

0x44a0,	// (0x00090768) popup_loc_request_window

0x45dc,	// (0x000908a4) popup_wml_address_window_ParamLimits

0x45dc,	// (0x000908a4) popup_wml_address_window

0x4148,	// (0x00090410) call_muted_g1

0x3ddc,	// (0x000900a4) popup_call_audio_conf_window_ParamLimits

0x3ddc,	// (0x000900a4) popup_call_audio_conf_window

0x4158,	// (0x00090420) popup_call_audio_first_window_ParamLimits

0x4158,	// (0x00090420) popup_call_audio_first_window

0x41ce,	// (0x00090496) popup_call_audio_in_window_ParamLimits

0x41ce,	// (0x00090496) popup_call_audio_in_window

0x420a,	// (0x000904d2) popup_call_audio_out_window_ParamLimits

0x420a,	// (0x000904d2) popup_call_audio_out_window

0x4244,	// (0x0009050c) popup_call_audio_second_window_ParamLimits

0x4244,	// (0x0009050c) popup_call_audio_second_window

0x429a,	// (0x00090562) popup_call_audio_wait_window_ParamLimits

0x429a,	// (0x00090562) popup_call_audio_wait_window

0x42cf,	// (0x00090597) popup_number_entry_window_ParamLimits

0x42cf,	// (0x00090597) popup_number_entry_window

0x9969,	// (0x00095c31) bg_popup_call_pane_cp05_ParamLimits

0x9969,	// (0x00095c31) bg_popup_call_pane_cp05

0x9989,	// (0x00095c51) popup_number_entry_window_t1

0x999c,	// (0x00095c64) popup_number_entry_window_t2

0x99ae,	// (0x00095c76) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0009b39b) popup_number_entry_window_t

0x99c0,	// (0x00095c88) text_title_cp2

0x99d3,	// (0x00095c9b) bg_popup_call_pane_cp_ParamLimits

0x99d3,	// (0x00095c9b) bg_popup_call_pane_cp

0x99e1,	// (0x00095ca9) call_thumbnail_pane

0x99e9,	// (0x00095cb1) popup_call_audio_in_window_g1_ParamLimits

0x99e9,	// (0x00095cb1) popup_call_audio_in_window_g1

0x99f5,	// (0x00095cbd) popup_call_audio_in_window_g2_ParamLimits

0x99f5,	// (0x00095cbd) popup_call_audio_in_window_g2

0x9a01,	// (0x00095cc9) popup_call_audio_in_window_g3_ParamLimits

0x9a01,	// (0x00095cc9) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0009b3a4) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0009b3a4) popup_call_audio_in_window_g

0x9a0d,	// (0x00095cd5) popup_call_audio_in_window_t1_ParamLimits

0x9a0d,	// (0x00095cd5) popup_call_audio_in_window_t1

0x9a29,	// (0x00095cf1) popup_call_audio_in_window_t2_ParamLimits

0x9a29,	// (0x00095cf1) popup_call_audio_in_window_t2

0x9a45,	// (0x00095d0d) popup_call_audio_in_window_t3_ParamLimits

0x9a45,	// (0x00095d0d) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0009b3ab) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0009b3ab) popup_call_audio_in_window_t

0x99d3,	// (0x00095c9b) bg_popup_call_pane_cp01_ParamLimits

0x99d3,	// (0x00095c9b) bg_popup_call_pane_cp01

0x99e1,	// (0x00095ca9) call_thumbnail_pane_cp02

0x9a58,	// (0x00095d20) call_type_pane_cp022

0x9a60,	// (0x00095d28) popup_call_audio_out_window_g1_ParamLimits

0x9a60,	// (0x00095d28) popup_call_audio_out_window_g1

0x9a72,	// (0x00095d3a) popup_call_audio_out_window_g2_ParamLimits

0x9a72,	// (0x00095d3a) popup_call_audio_out_window_g2

0x9a7e,	// (0x00095d46) popup_call_audio_out_window_g3_ParamLimits

0x9a7e,	// (0x00095d46) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0009b3b2) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0009b3b2) popup_call_audio_out_window_g

0x9a90,	// (0x00095d58) popup_call_audio_out_window_t1_ParamLimits

0x9a90,	// (0x00095d58) popup_call_audio_out_window_t1

0x9aa8,	// (0x00095d70) popup_call_audio_out_window_t2_ParamLimits

0x9aa8,	// (0x00095d70) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0009b3b9) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0009b3b9) popup_call_audio_out_window_t

0x9abd,	// (0x00095d85) bg_popup_call_pane_ParamLimits

0x9abd,	// (0x00095d85) bg_popup_call_pane

0x0e82,	// (0x0008d14a) call_thumbnail_pane_cp_ParamLimits

0x0e82,	// (0x0008d14a) call_thumbnail_pane_cp

0x9b41,	// (0x00095e09) call_type_pane_cp01_ParamLimits

0x9b41,	// (0x00095e09) call_type_pane_cp01

0x9b85,	// (0x00095e4d) popup_call_audio_first_window_g1_ParamLimits

0x9b85,	// (0x00095e4d) popup_call_audio_first_window_g1

0x9bd1,	// (0x00095e99) popup_call_audio_first_window_g2_ParamLimits

0x9bd1,	// (0x00095e99) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0009b3be) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0009b3be) popup_call_audio_first_window_g

0x9c15,	// (0x00095edd) popup_call_audio_first_window_t1_ParamLimits

0x9c15,	// (0x00095edd) popup_call_audio_first_window_t1

0x9cc1,	// (0x00095f89) popup_call_audio_first_window_t4_ParamLimits

0x9cc1,	// (0x00095f89) popup_call_audio_first_window_t4

0x9d4d,	// (0x00096015) popup_call_audio_first_window_t5_ParamLimits

0x9d4d,	// (0x00096015) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0009b3c3) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0009b3c3) popup_call_audio_first_window_t

0x9d7c,	// (0x00096044) bg_popup_call_pane_cp02

0x9d86,	// (0x0009604e) call_type_pane_cp023

0x9d8e,	// (0x00096056) popup_call_audio_wait_window_g1

0x9d96,	// (0x0009605e) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0009b3ca) popup_call_audio_wait_window_g

0x9d9e,	// (0x00096066) popup_call_audio_wait_window_t3

0x9dac,	// (0x00096074) bg_popup_call_pane_cp03_ParamLimits

0x9dac,	// (0x00096074) bg_popup_call_pane_cp03

0x9e0c,	// (0x000960d4) call_thumbnail_pane_cp011_ParamLimits

0x9e0c,	// (0x000960d4) call_thumbnail_pane_cp011

0x9e18,	// (0x000960e0) call_type_pane_cp034_ParamLimits

0x9e18,	// (0x000960e0) call_type_pane_cp034

0x9e54,	// (0x0009611c) popup_call_audio_second_window_g1_ParamLimits

0x9e54,	// (0x0009611c) popup_call_audio_second_window_g1

0x9e90,	// (0x00096158) popup_call_audio_second_window_g2_ParamLimits

0x9e90,	// (0x00096158) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0009b3cf) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0009b3cf) popup_call_audio_second_window_g

0x9ecc,	// (0x00096194) popup_call_audio_second_window_t1_ParamLimits

0x9ecc,	// (0x00096194) popup_call_audio_second_window_t1

0x9f4d,	// (0x00096215) popup_call_audio_second_window_t2_ParamLimits

0x9f4d,	// (0x00096215) popup_call_audio_second_window_t2

0x9f83,	// (0x0009624b) popup_call_audio_second_window_t3_ParamLimits

0x9f83,	// (0x0009624b) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0009b3d4) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0009b3d4) popup_call_audio_second_window_t

0x9d7c,	// (0x00096044) bg_popup_call_pane_cp04

0x9fb9,	// (0x00096281) list_conf_pane

0x9fc1,	// (0x00096289) popup_call_audio_conf_window_t1

0x9fcf,	// (0x00096297) call_thumbnail_pane_g1

0x9fd7,	// (0x0009629f) bg_pinb_pane_ParamLimits

0x9fd7,	// (0x0009629f) bg_pinb_pane

0x9fe5,	// (0x000962ad) find_pinb_pane

0x9fee,	// (0x000962b6) listscroll_pinb_pane_ParamLimits

0x9fee,	// (0x000962b6) listscroll_pinb_pane

0x9ffd,	// (0x000962c5) pinb_bg_pane_g1

0x0ea6,	// (0x0008d16e) pinb_bg_pane_g2

0x0eb2,	// (0x0008d17a) pinb_bg_pane_g3

0x0ebe,	// (0x0008d186) pinb_bg_pane_g4

0x0eca,	// (0x0008d192) pinb_bg_pane_g5

0x0ed6,	// (0x0008d19e) pinb_bg_pane_g6

0x0ee1,	// (0x0008d1a9) pinb_bg_pane_g7

0x0eec,	// (0x0008d1b4) pinb_bg_pane_g8

0x0ef7,	// (0x0008d1bf) pinb_bg_pane_g9

0x0f01,	// (0x0008d1c9) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0009b3db) pinb_bg_pane_g

0x0f1e,	// (0x0008d1e6) grid_pinb_pane

0x0f29,	// (0x0008d1f1) list_pinb_pane

0x0f34,	// (0x0008d1fc) scroll_pane_cp01_ParamLimits

0x0f34,	// (0x0008d1fc) scroll_pane_cp01

0xa007,	// (0x000962cf) find_pinb_pane_g1_ParamLimits

0xa007,	// (0x000962cf) find_pinb_pane_g1

0xa01f,	// (0x000962e7) find_pinb_pane_t1

0xa031,	// (0x000962f9) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0009b3f5) find_pinb_pane_t

0xa046,	// (0x0009630e) input_focus_pane_cp01_ParamLimits

0xa046,	// (0x0009630e) input_focus_pane_cp01

0x0f46,	// (0x0008d20e) cell_pinb_pane_ParamLimits

0x0f46,	// (0x0008d20e) cell_pinb_pane

0x0f68,	// (0x0008d230) cell_pinb_pane_g1_ParamLimits

0x0f68,	// (0x0008d230) cell_pinb_pane_g1

0x0f7d,	// (0x0008d245) cell_pinb_pane_g2_ParamLimits

0x0f7d,	// (0x0008d245) cell_pinb_pane_g2

0xa052,	// (0x0009631a) cell_pinb_pane_g3_ParamLimits

0xa052,	// (0x0009631a) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0009b3fa) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0009b3fa) cell_pinb_pane_g

0x9d7c,	// (0x00096044) grid_highlight_pane_cp01

0x0f89,	// (0x0008d251) list_pinb_item_pane_ParamLimits

0x0f89,	// (0x0008d251) list_pinb_item_pane

0x9d7c,	// (0x00096044) list_highlight_pane_cp02

0x0f9b,	// (0x0008d263) list_pinb_item_pane_g1_ParamLimits

0x0f9b,	// (0x0008d263) list_pinb_item_pane_g1

0x0fa8,	// (0x0008d270) list_pinb_item_pane_g2_ParamLimits

0x0fa8,	// (0x0008d270) list_pinb_item_pane_g2

0x0fb4,	// (0x0008d27c) list_pinb_item_pane_g3_ParamLimits

0x0fb4,	// (0x0008d27c) list_pinb_item_pane_g3

0x0fc5,	// (0x0008d28d) list_pinb_item_pane_g4_ParamLimits

0x0fc5,	// (0x0008d28d) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0009b401) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0009b401) list_pinb_item_pane_g

0x0fd1,	// (0x0008d299) list_pinb_item_pane_t1_ParamLimits

0x0fd1,	// (0x0008d299) list_pinb_item_pane_t1

0x1006,	// (0x0008d2ce) calc_display_pane

0x102e,	// (0x0008d2f6) calc_paper_pane

0x1051,	// (0x0008d319) grid_calc_pane

0x9d7c,	// (0x00096044) bg_list_pane_cp01

0x107f,	// (0x0008d347) clock_g1

0x1087,	// (0x0008d34f) clock_g2

0x0001,

0xf142,	// (0x0009b40a) clock_g

0x108f,	// (0x0008d357) clock_t1_ParamLimits

0x108f,	// (0x0008d357) clock_t1

0x10a4,	// (0x0008d36c) clock_t2_ParamLimits

0x10a4,	// (0x0008d36c) clock_t2

0x10b6,	// (0x0008d37e) clock_t3_ParamLimits

0x10b6,	// (0x0008d37e) clock_t3

0x10c8,	// (0x0008d390) clock_t4_ParamLimits

0x10c8,	// (0x0008d390) clock_t4

0x10da,	// (0x0008d3a2) clock_t5_ParamLimits

0x10da,	// (0x0008d3a2) clock_t5

0x10ef,	// (0x0008d3b7) clock_t6_ParamLimits

0x10ef,	// (0x0008d3b7) clock_t6

0x1101,	// (0x0008d3c9) clock_t7_ParamLimits

0x1101,	// (0x0008d3c9) clock_t7

0x1113,	// (0x0008d3db) clock_t8_ParamLimits

0x1113,	// (0x0008d3db) clock_t8

0x1127,	// (0x0008d3ef) clock_t9_ParamLimits

0x1127,	// (0x0008d3ef) clock_t9

0x0008,

0xf147,	// (0x0009b40f) clock_t_ParamLimits

0xf147,	// (0x0009b40f) clock_t

0xa066,	// (0x0009632e) popup_clock_analogue_window_cp02

0xa066,	// (0x0009632e) popup_clock_digital_window_cp01

0xa06e,	// (0x00096336) listscroll_help_pane

0x9d7c,	// (0x00096044) phob_pre_status_pane

0xa078,	// (0x00096340) grid_qdial_pane

0x9fd7,	// (0x0009629f) listscroll_mce_pane

0x9fd7,	// (0x0009629f) bg_notes_pane

0xa082,	// (0x0009634a) list_notes_pane

0x113d,	// (0x0008d405) scroll_pane_cp06

0xa090,	// (0x00096358) bg_calc_paper_pane

0xa0a4,	// (0x0009636c) list_calc_pane

0xa0be,	// (0x00096386) bg_calc_display_pane

0x1151,	// (0x0008d419) calc_display_pane_t1

0x1163,	// (0x0008d42b) calc_display_pane_t2

0xa0ca,	// (0x00096392) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0009b422) calc_display_pane_t

0x1175,	// (0x0008d43d) cell_calc_pane_ParamLimits

0x1175,	// (0x0008d43d) cell_calc_pane

0xa0dc,	// (0x000963a4) bg_calc_paper_pane_g1

0xa0e8,	// (0x000963b0) bg_calc_paper_pane_g2

0xa0f4,	// (0x000963bc) bg_calc_paper_pane_g3

0xa100,	// (0x000963c8) bg_calc_paper_pane_g4

0xa10c,	// (0x000963d4) bg_calc_paper_pane_g5

0x11b2,	// (0x0008d47a) bg_calc_paper_pane_g6

0x11c5,	// (0x0008d48d) bg_calc_paper_pane_g7

0x11d8,	// (0x0008d4a0) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0009b429) bg_calc_paper_pane_g

0x11e9,	// (0x0008d4b1) calc_bg_paper_pane_g9

0x11fa,	// (0x0008d4c2) list_calc_item_pane_ParamLimits

0x11fa,	// (0x0008d4c2) list_calc_item_pane

0xa118,	// (0x000963e0) list_calc_item_pane_g1

0xa125,	// (0x000963ed) list_calc_item_pane_t1_ParamLimits

0xa125,	// (0x000963ed) list_calc_item_pane_t1

0x1212,	// (0x0008d4da) list_calc_item_pane_t2_ParamLimits

0x1212,	// (0x0008d4da) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0009b43a) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0009b43a) list_calc_item_pane_t

0xa137,	// (0x000963ff) cell_calc_pane_g1

0xa141,	// (0x00096409) grid_highlight_pane_cp02

0xa163,	// (0x0009642b) bg_calc_display_pane_g1

0xa16c,	// (0x00096434) bg_calc_display_pane_g2

0xa176,	// (0x0009643e) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0009b444) bg_calc_display_pane_g

0x1244,	// (0x0008d50c) cell_qdial_pane_ParamLimits

0x1244,	// (0x0008d50c) cell_qdial_pane

0x1258,	// (0x0008d520) cell_qdial_pane_g1_ParamLimits

0x1258,	// (0x0008d520) cell_qdial_pane_g1

0x126e,	// (0x0008d536) cell_qdial_pane_g2_ParamLimits

0x126e,	// (0x0008d536) cell_qdial_pane_g2

0xa17f,	// (0x00096447) cell_qdial_pane_g3_ParamLimits

0xa17f,	// (0x00096447) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0009b44b) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0009b44b) cell_qdial_pane_g

0x1295,	// (0x0008d55d) cell_qdial_pane_t1_ParamLimits

0x1295,	// (0x0008d55d) cell_qdial_pane_t1

0x12ad,	// (0x0008d575) cell_qdial_pane_t2_ParamLimits

0x12ad,	// (0x0008d575) cell_qdial_pane_t2

0x12c0,	// (0x0008d588) cell_qdial_pane_t3_ParamLimits

0x12c0,	// (0x0008d588) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0009b454) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0009b454) cell_qdial_pane_t

0x9d7c,	// (0x00096044) grid_highlight_pane_cp04

0xa18b,	// (0x00096453) thumbnail_qdial_pane_ParamLimits

0xa18b,	// (0x00096453) thumbnail_qdial_pane

0xa1e7,	// (0x000964af) list_help_pane

0xa1f0,	// (0x000964b8) scroll_pane_cp02

0x12d3,	// (0x0008d59b) help_list_pane_t1_ParamLimits

0x12d3,	// (0x0008d59b) help_list_pane_t1

0xa1f9,	// (0x000964c1) bg_notes_pane_g2

0xa201,	// (0x000964c9) bg_notes_pane_g3

0xa209,	// (0x000964d1) notes_bg_pane_g1

0xa211,	// (0x000964d9) notes_bg_pane_g4

0xa219,	// (0x000964e1) notes_bg_pane_g5

0xa221,	// (0x000964e9) notes_bg_pane_g6

0xa229,	// (0x000964f1) notes_bg_pane_g7

0xa231,	// (0x000964f9) notes_bg_pane_g8

0xa239,	// (0x00096501) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0009b472) notes_bg_pane_g

0x12f1,	// (0x0008d5b9) list_notes_text_pane_ParamLimits

0x12f1,	// (0x0008d5b9) list_notes_text_pane

0xa241,	// (0x00096509) list_notes_text_pane_g1

0xfd0a,	// (0x0008bfd2) list_notes_text_pane_t1

0x1305,	// (0x0008d5cd) listscroll_cale_week_pane

0x133f,	// (0x0008d607) bg_cale_heading_pane

0xa25b,	// (0x00096523) bg_cale_pane_cp01

0x1364,	// (0x0008d62c) cale_week_corner_pane

0x1383,	// (0x0008d64b) cale_week_day_heading_pane

0x13ad,	// (0x0008d675) cale_week_scroll_pane_g1

0x13cd,	// (0x0008d695) cale_week_scroll_pane_g2

0x13e5,	// (0x0008d6ad) cale_week_scroll_pane_g3

0x13fd,	// (0x0008d6c5) cale_week_scroll_pane_g4

0x1415,	// (0x0008d6dd) cale_week_scroll_pane_g5

0x1431,	// (0x0008d6f9) cale_week_scroll_pane_g6

0x144d,	// (0x0008d715) cale_week_scroll_pane_g7

0x146d,	// (0x0008d735) cale_week_scroll_pane_g8

0x148d,	// (0x0008d755) cale_week_scroll_pane_g9

0x14aa,	// (0x0008d772) cale_week_scroll_pane_g10

0x14c7,	// (0x0008d78f) cale_week_scroll_pane_g11

0x14e4,	// (0x0008d7ac) cale_week_scroll_pane_g12

0x1501,	// (0x0008d7c9) cale_week_scroll_pane_g13

0x151e,	// (0x0008d7e6) cale_week_scroll_pane_g14

0x1543,	// (0x0008d80b) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0009b481) cale_week_scroll_pane_g

0x1568,	// (0x0008d830) cale_week_time_pane

0x1588,	// (0x0008d850) grid_cale_week_pane

0xa28b,	// (0x00096553) scroll_pane_cp08

0x15b7,	// (0x0008d87f) cell_cale_week_pane_ParamLimits

0x15b7,	// (0x0008d87f) cell_cale_week_pane

0x1639,	// (0x0008d901) cale_week_day_heading_pane_t1

0x1683,	// (0x0008d94b) cale_week_day_heading_pane_t2

0x16d2,	// (0x0008d99a) cale_week_day_heading_pane_t3

0x1721,	// (0x0008d9e9) cale_week_day_heading_pane_t4

0x1770,	// (0x0008da38) cale_week_day_heading_pane_t5

0x17bf,	// (0x0008da87) cale_week_day_heading_pane_t6

0x1812,	// (0x0008dada) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0009b4a0) cale_week_day_heading_pane_t

0xaa0e,	// (0x00096cd6) bg_cale_side_pane

0x185c,	// (0x0008db24) cale_week_time_pane_t1

0x1896,	// (0x0008db5e) cale_week_time_pane_t2

0x18d0,	// (0x0008db98) cale_week_time_pane_t3

0x190a,	// (0x0008dbd2) cale_week_time_pane_t4

0x1944,	// (0x0008dc0c) cale_week_time_pane_t5

0x197e,	// (0x0008dc46) cale_week_time_pane_t6

0x19b8,	// (0x0008dc80) cale_week_time_pane_t7

0x19f2,	// (0x0008dcba) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0009b4af) cale_week_time_pane_t

0x1a30,	// (0x0008dcf8) cell_cale_week_pane_g2

0x1a4f,	// (0x0008dd17) cell_cale_week_pane_g3_ParamLimits

0x1a4f,	// (0x0008dd17) cell_cale_week_pane_g3

0xaa1c,	// (0x00096ce4) grid_highlight_pane_cp07

0xaa24,	// (0x00096cec) listscroll_gms_pane

0xaa2e,	// (0x00096cf6) grid_gms_pane

0xaa37,	// (0x00096cff) listscroll_gms_pane_g1

0xaa3f,	// (0x00096d07) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0009b4c0) listscroll_gms_pane_g

0x1a67,	// (0x0008dd2f) scroll_pane_cp010

0x1a72,	// (0x0008dd3a) cell_gms_pane_ParamLimits

0x1a72,	// (0x0008dd3a) cell_gms_pane

0x1a8c,	// (0x0008dd54) cell_gms_pane_g1

0xaa47,	// (0x00096d0f) cell_gms_pane_g2

0xaa4f,	// (0x00096d17) cell_gms_pane_g3

0xaa58,	// (0x00096d20) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0009b4c5) cell_gms_pane_g

0xaa61,	// (0x00096d29) grid_highlight_pane_cp09

0x40f0,	// (0x000903b8) phob_pre_status_pane_g1

0x40f8,	// (0x000903c0) phob_pre_status_pane_g2

0x4100,	// (0x000903c8) phob_pre_status_pane_g3

0x4108,	// (0x000903d0) phob_pre_status_pane_g4

0x0004,

0xf5f3,	// (0x0009b8bb) phob_pre_status_pane_g

0x4118,	// (0x000903e0) phob_pre_status_pane_t1

0x4128,	// (0x000903f0) phob_pre_status_pane_t2

0x4138,	// (0x00090400) phob_pre_status_pane_t3

0x0002,

0xf5fe,	// (0x0009b8c6) phob_pre_status_pane_t

0x9d7c,	// (0x00096044) bg_list_pane_cp05

0x1a9c,	// (0x0008dd64) grid_vorec_pane

0x1aa8,	// (0x0008dd70) vorec_t1

0x1ab6,	// (0x0008dd7e) vorec_t2

0x1ac4,	// (0x0008dd8c) vorec_t3

0x1ad2,	// (0x0008dd9a) vorec_t4

0x1ae0,	// (0x0008dda8) vorec_t5

0xa2ad,	// (0x00096575) vorec_t6

0x0006,

0xf206,	// (0x0009b4ce) vorec_t

0x1afc,	// (0x0008ddc4) wait_bar_pane_cp01

0x1b04,	// (0x0008ddcc) cell_vorec_pane_ParamLimits

0x1b04,	// (0x0008ddcc) cell_vorec_pane

0xaa69,	// (0x00096d31) cell_vorec_pane_g1

0x9d7c,	// (0x00096044) grid_highlight_pane_cp05

0x1b2f,	// (0x0008ddf7) cams_zoom_pane

0x1b3e,	// (0x0008de06) image_vga_pane

0x1b58,	// (0x0008de20) main_camera_pane_g1

0x1b6a,	// (0x0008de32) main_camera_pane_g2

0x1b7a,	// (0x0008de42) main_camera_pane_g3

0x1b8e,	// (0x0008de56) main_camera_pane_g4

0x1ba2,	// (0x0008de6a) main_camera_pane_g5

0x1bb6,	// (0x0008de7e) main_camera_pane_g6

0x1bca,	// (0x0008de92) main_camera_pane_g7

0x0007,

0xf215,	// (0x0009b4dd) main_camera_pane_g

0x1bde,	// (0x0008dea6) main_camera_pane_t1

0x1bf4,	// (0x0008debc) main_camera_pane_t2

0x0001,

0xf226,	// (0x0009b4ee) main_camera_pane_t

0x1c32,	// (0x0008defa) cams_zoom_pane_cp_ParamLimits

0x1c32,	// (0x0008defa) cams_zoom_pane_cp

0x1c5a,	// (0x0008df22) image_cif_pane_ParamLimits

0x1c5a,	// (0x0008df22) image_cif_pane

0x1c95,	// (0x0008df5d) image_subqcif_pane

0x1c9f,	// (0x0008df67) main_video_pane_g1_ParamLimits

0x1c9f,	// (0x0008df67) main_video_pane_g1

0x1cc3,	// (0x0008df8b) main_video_pane_g2_ParamLimits

0x1cc3,	// (0x0008df8b) main_video_pane_g2

0x1cf9,	// (0x0008dfc1) main_video_pane_g3_ParamLimits

0x1cf9,	// (0x0008dfc1) main_video_pane_g3

0x1d27,	// (0x0008dfef) main_video_pane_g4_ParamLimits

0x1d27,	// (0x0008dfef) main_video_pane_g4

0x1d55,	// (0x0008e01d) main_video_pane_g5_ParamLimits

0x1d55,	// (0x0008e01d) main_video_pane_g5

0xaa7f,	// (0x00096d47) main_video_pane_g6_ParamLimits

0xaa7f,	// (0x00096d47) main_video_pane_g6

0x0006,

0xf22b,	// (0x0009b4f3) main_video_pane_g_ParamLimits

0xf22b,	// (0x0009b4f3) main_video_pane_g

0x1d7e,	// (0x0008e046) main_video_pane_t1_ParamLimits

0x1d7e,	// (0x0008e046) main_video_pane_t1

0xaa99,	// (0x00096d61) cams_zoom_pane_g1

0xaaa2,	// (0x00096d6a) cams_zoom_pane_g2

0xaaab,	// (0x00096d73) cams_zoom_pane_g3

0xaab4,	// (0x00096d7c) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0009b502) cams_zoom_pane_g

0x1ddb,	// (0x0008e0a3) grid_cams_pane

0x1df5,	// (0x0008e0bd) linegrid_cams_pane

0x1e07,	// (0x0008e0cf) cell_cams_pane_ParamLimits

0x1e07,	// (0x0008e0cf) cell_cams_pane

0xaabd,	// (0x00096d85) cams_burst_image_pane

0xaac5,	// (0x00096d8d) cell_cams_pane_g1

0x9d7c,	// (0x00096044) grid_highlight_pane_cp03

0xa137,	// (0x000963ff) mp_bg_pane_g1

0x9d7c,	// (0x00096044) bg_list_pane_cp03

0xc6de,	// (0x000989a6) bg_mp_pane

0xc6e6,	// (0x000989ae) grid_mp_pane

0xc6ee,	// (0x000989b6) media_player_g1

0xc6f8,	// (0x000989c0) media_player_t1

0xc706,	// (0x000989ce) media_player_t2

0xc714,	// (0x000989dc) media_player_t3

0xc722,	// (0x000989ea) media_player_t4

0xc730,	// (0x000989f8) media_player_t5

0xc73e,	// (0x00098a06) media_player_t6

0xc74c,	// (0x00098a14) media_player_t7

0x0006,

0xf5dd,	// (0x0009b8a5) media_player_t

0xc75a,	// (0x00098a22) wait_bar_pane_cp02

0xf5c2,	// (0x0009b88a) main_usb_pane_t

0x40e7,	// (0x000903af) cell_mp_pane

0xa137,	// (0x000963ff) cell_mp_pane_g1

0x9d7c,	// (0x00096044) grid_highlight_pane_cp06

0xaacd,	// (0x00096d95) grid_skin_colour_pane

0xaad5,	// (0x00096d9d) list_highlight_pane_cp03

0x1e29,	// (0x0008e0f1) skin_g1

0xaadd,	// (0x00096da5) skin_t1

0xaaec,	// (0x00096db4) skin_t2

0x0001,

0xf26f,	// (0x0009b537) skin_t

0x1e31,	// (0x0008e0f9) cell_skin_colour_pane_ParamLimits

0x1e31,	// (0x0008e0f9) cell_skin_colour_pane

0xaafa,	// (0x00096dc2) cell_skin_colour_pane_g1

0x1ea4,	// (0x0008e16c) call_video_g1_ParamLimits

0x1ea4,	// (0x0008e16c) call_video_g1

0x1ec0,	// (0x0008e188) call_video_g2_ParamLimits

0x1ec0,	// (0x0008e188) call_video_g2

0x0001,

0xf274,	// (0x0009b53c) call_video_g_ParamLimits

0xf274,	// (0x0009b53c) call_video_g

0x1f05,	// (0x0008e1cd) call_video_uplink_pane_cp1_ParamLimits

0x1f05,	// (0x0008e1cd) call_video_uplink_pane_cp1

0xab0c,	// (0x00096dd4) call_video_uplink_pane_cp2

0x1fa6,	// (0x0008e26e) video_down_crop_pane_ParamLimits

0x1fa6,	// (0x0008e26e) video_down_crop_pane

0x208f,	// (0x0008e357) video_down_pane_ParamLimits

0x208f,	// (0x0008e357) video_down_pane

0xab14,	// (0x00096ddc) video_down_subqcif_pane_ParamLimits

0xab14,	// (0x00096ddc) video_down_subqcif_pane

0xab2e,	// (0x00096df6) video_down_subqcif_pane_cp_ParamLimits

0xab2e,	// (0x00096df6) video_down_subqcif_pane_cp

0xab56,	// (0x00096e1e) im_reading_pane_ParamLimits

0xab56,	// (0x00096e1e) im_reading_pane

0x2198,	// (0x0008e460) im_writing_pane_ParamLimits

0x2198,	// (0x0008e460) im_writing_pane

0x21b4,	// (0x0008e47c) im_reading_pane_t1

0xab70,	// (0x00096e38) list_im_pane

0xab81,	// (0x00096e49) scroll_pane_cp07

0x21f0,	// (0x0008e4b8) im_writing_pane_t1_ParamLimits

0x21f0,	// (0x0008e4b8) im_writing_pane_t1

0xab9a,	// (0x00096e62) im_writing_pane_t2_ParamLimits

0xab9a,	// (0x00096e62) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0009b546) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0009b546) im_writing_pane_t

0x9d7c,	// (0x00096044) input_focus_pane_cp04

0x9d7c,	// (0x00096044) input_focus_pane_cp05

0x2205,	// (0x0008e4cd) list_im_single_pane_ParamLimits

0x2205,	// (0x0008e4cd) list_im_single_pane

0x221b,	// (0x0008e4e3) list_single_im_pane_t1

0x40a7,	// (0x0009036f) blid_accuracy_pane

0x40af,	// (0x00090377) blid_compass_pane

0x40b9,	// (0x00090381) main_location_t1

0x40c9,	// (0x00090391) main_location_t2

0x40d9,	// (0x000903a1) main_location_t3

0x0002,

0xf5ec,	// (0x0009b8b4) main_location_t

0x9d7c,	// (0x00096044) aid_levels_location

0xa137,	// (0x000963ff) blid_accuracy_pane_g1

0xa137,	// (0x000963ff) blid_accuracy_pane_g2

0x0001,

0xf2e7,	// (0x0009b5af) blid_accuracy_pane_g

0xabe2,	// (0x00096eaa) wml_content_pane

0xac20,	// (0x00096ee8) wml_button_pane_ParamLimits

0xac20,	// (0x00096ee8) wml_button_pane

0x222a,	// (0x0008e4f2) wml_list_single_large_pane_ParamLimits

0x222a,	// (0x0008e4f2) wml_list_single_large_pane

0x2240,	// (0x0008e508) wml_list_single_medium_pane_ParamLimits

0x2240,	// (0x0008e508) wml_list_single_medium_pane

0x2257,	// (0x0008e51f) wml_list_single_small_pane_ParamLimits

0x2257,	// (0x0008e51f) wml_list_single_small_pane

0xac34,	// (0x00096efc) wml_selection_box_pane_ParamLimits

0xac34,	// (0x00096efc) wml_selection_box_pane

0xac47,	// (0x00096f0f) wml_list_single_pane_t1

0xac56,	// (0x00096f1e) wml_list_single_medium_pane_t1

0xac65,	// (0x00096f2d) wml_list_single_large_pane_t1

0xac74,	// (0x00096f3c) input_focus_pane_cp02_ParamLimits

0xac74,	// (0x00096f3c) input_focus_pane_cp02

0xac87,	// (0x00096f4f) wml_selection_box_pane_g1

0xac90,	// (0x00096f58) wml_selection_box_pane_t1_ParamLimits

0xac90,	// (0x00096f58) wml_selection_box_pane_t1

0x9fd7,	// (0x0009629f) bg_wml_button_pane_ParamLimits

0x9fd7,	// (0x0009629f) bg_wml_button_pane

0xaca8,	// (0x00096f70) wml_button_pane_g1

0xacb0,	// (0x00096f78) wml_button_pane_t1

0xaca8,	// (0x00096f70) wml_button_bg_pane_g1

0xacc0,	// (0x00096f88) wml_button_bg_pane_g2

0xacc8,	// (0x00096f90) wml_button_bg_pane_g3

0xacd0,	// (0x00096f98) wml_button_bg_pane_g4

0xacd8,	// (0x00096fa0) wml_button_bg_pane_g5

0xace0,	// (0x00096fa8) wml_button_bg_pane_g6

0xace8,	// (0x00096fb0) wml_button_bg_pane_g7

0xacf0,	// (0x00096fb8) wml_button_bg_pane_g8

0xacf8,	// (0x00096fc0) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0009b54b) wml_button_bg_pane_g

0x2273,	// (0x0008e53b) bg_list_pane_cp02

0xad00,	// (0x00096fc8) mce_header_pane_ParamLimits

0xad00,	// (0x00096fc8) mce_header_pane

0xad16,	// (0x00096fde) mce_icon_pane

0xad16,	// (0x00096fde) mce_image_pane

0xad1f,	// (0x00096fe7) mce_text_pane_ParamLimits

0xad1f,	// (0x00096fe7) mce_text_pane

0x227d,	// (0x0008e545) scroll_pane_cp03

0xac18,	// (0x00096ee0) scroll_pane_cp04

0xad32,	// (0x00096ffa) scroll_pane_cp05_ParamLimits

0xad32,	// (0x00096ffa) scroll_pane_cp05

0x2287,	// (0x0008e54f) mce_header_field_pane_ParamLimits

0x2287,	// (0x0008e54f) mce_header_field_pane

0x22a0,	// (0x0008e568) mce_header_field_pane_2_ParamLimits

0x22a0,	// (0x0008e568) mce_header_field_pane_2

0x22b6,	// (0x0008e57e) mce_header_field_pane_3

0x22be,	// (0x0008e586) list_single_mce_message_pane_ParamLimits

0x22be,	// (0x0008e586) list_single_mce_message_pane

0x22d7,	// (0x0008e59f) list_single_mce_smart_pane_ParamLimits

0x22d7,	// (0x0008e59f) list_single_mce_smart_pane

0xad3e,	// (0x00097006) input_focus_pane_cp03

0xad47,	// (0x0009700f) list_header_data_pane

0x22fb,	// (0x0008e5c3) mce_header_field_pane_t1

0x230b,	// (0x0008e5d3) list_single_mce_header_pane_ParamLimits

0x230b,	// (0x0008e5d3) list_single_mce_header_pane

0xad4f,	// (0x00097017) list_single_mce_header_pane_t1

0xad5e,	// (0x00097026) list_single_mce_message_pane_g1

0xad66,	// (0x0009702e) list_single_mce_message_pane_t1

0x2345,	// (0x0008e60d) bg_cale_heading_pane_cp01_ParamLimits

0x2345,	// (0x0008e60d) bg_cale_heading_pane_cp01

0xad74,	// (0x0009703c) bg_cale_pane_cp02_ParamLimits

0xad74,	// (0x0009703c) bg_cale_pane_cp02

0x2384,	// (0x0008e64c) cale_month_corner_pane

0x23a3,	// (0x0008e66b) cale_month_day_heading_pane_ParamLimits

0x23a3,	// (0x0008e66b) cale_month_day_heading_pane

0x23fa,	// (0x0008e6c2) cale_month_pane_g1_ParamLimits

0x23fa,	// (0x0008e6c2) cale_month_pane_g1

0x242e,	// (0x0008e6f6) cale_month_pane_g2_ParamLimits

0x242e,	// (0x0008e6f6) cale_month_pane_g2

0x2466,	// (0x0008e72e) cale_month_pane_g3_ParamLimits

0x2466,	// (0x0008e72e) cale_month_pane_g3

0x24b2,	// (0x0008e77a) cale_month_pane_g4_ParamLimits

0x24b2,	// (0x0008e77a) cale_month_pane_g4

0x24fe,	// (0x0008e7c6) cale_month_pane_g5_ParamLimits

0x24fe,	// (0x0008e7c6) cale_month_pane_g5

0x254e,	// (0x0008e816) cale_month_pane_g6_ParamLimits

0x254e,	// (0x0008e816) cale_month_pane_g6

0x25a6,	// (0x0008e86e) cale_month_pane_g7_ParamLimits

0x25a6,	// (0x0008e86e) cale_month_pane_g7

0x260a,	// (0x0008e8d2) cale_month_pane_g8_ParamLimits

0x260a,	// (0x0008e8d2) cale_month_pane_g8

0x266e,	// (0x0008e936) cale_month_pane_g9_ParamLimits

0x266e,	// (0x0008e936) cale_month_pane_g9

0x26c8,	// (0x0008e990) cale_month_pane_g10_ParamLimits

0x26c8,	// (0x0008e990) cale_month_pane_g10

0x271a,	// (0x0008e9e2) cale_month_pane_g11_ParamLimits

0x271a,	// (0x0008e9e2) cale_month_pane_g11

0x276c,	// (0x0008ea34) cale_month_pane_g12_ParamLimits

0x276c,	// (0x0008ea34) cale_month_pane_g12

0x27c2,	// (0x0008ea8a) cale_month_pane_g13_ParamLimits

0x27c2,	// (0x0008ea8a) cale_month_pane_g13

0x000c,

0xf296,	// (0x0009b55e) cale_month_pane_g_ParamLimits

0xf296,	// (0x0009b55e) cale_month_pane_g

0x2818,	// (0x0008eae0) cale_month_week_pane

0x283c,	// (0x0008eb04) grid_cale_month_pane_ParamLimits

0x283c,	// (0x0008eb04) grid_cale_month_pane

0x288a,	// (0x0008eb52) cale_month_day_heading_pane_t1

0x2910,	// (0x0008ebd8) cale_month_day_heading_pane_t2

0x29a1,	// (0x0008ec69) cale_month_day_heading_pane_t3

0x2a32,	// (0x0008ecfa) cale_month_day_heading_pane_t4

0x2ac3,	// (0x0008ed8b) cale_month_day_heading_pane_t5

0x2b5c,	// (0x0008ee24) cale_month_day_heading_pane_t6

0x2bfd,	// (0x0008eec5) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0009b579) cale_month_day_heading_pane_t

0xaa0e,	// (0x00096cd6) bg_cale_side_pane_cp01

0x2ca6,	// (0x0008ef6e) cale_month_week_pane_t1

0x2cdf,	// (0x0008efa7) cale_month_week_pane_t2

0x2d18,	// (0x0008efe0) cale_month_week_pane_t3

0x2d51,	// (0x0008f019) cale_month_week_pane_t4

0x2d8a,	// (0x0008f052) cale_month_week_pane_t5

0x2dc3,	// (0x0008f08b) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0009b588) cale_month_week_pane_t

0x2e00,	// (0x0008f0c8) cell_cale_month_pane_ParamLimits

0x2e00,	// (0x0008f0c8) cell_cale_month_pane

0xa2bb,	// (0x00096583) cell_cale_month_pane_g1

0x2f1e,	// (0x0008f1e6) cell_cale_month_pane_t1_ParamLimits

0x2f1e,	// (0x0008f1e6) cell_cale_month_pane_t1

0xaa1c,	// (0x00096ce4) grid_highlight_pane_cp08

0xa137,	// (0x000963ff) main_smil_g1

0x2f3e,	// (0x0008f206) smil_status_pane

0xadb3,	// (0x0009707b) smil_text_pane

0xc5fc,	// (0x000988c4) bg_popup_call3_rect_pane_g8

0xc604,	// (0x000988cc) bg_popup_call3_rect_pane_g9

0x0008,

0xf580,	// (0x0009b848) bg_popup_call3_rect_pane_g

0xc892,	// (0x00098b5a) smil_status_volume_pane_g1

0x2f51,	// (0x0008f219) smil_status_pane_t1

0xa3b9,	// (0x00096681) volume_smil_pane

0xadbd,	// (0x00097085) list_smil_text_pane

0x2f6a,	// (0x0008f232) scroll_pane_cp011

0x2f75,	// (0x0008f23d) smil_text_list_pane_t1_ParamLimits

0x2f75,	// (0x0008f23d) smil_text_list_pane_t1

0xa2c7,	// (0x0009658f) aid_volume_smil_ParamLimits

0xa2c7,	// (0x0009658f) aid_volume_smil

0xa137,	// (0x000963ff) smil_volume_pane_g1

0xa137,	// (0x000963ff) smil_volume_pane_g2

0x0001,

0xf2e7,	// (0x0009b5af) smil_volume_pane_g

0x2fae,	// (0x0008f276) listscroll_cale_day_pane

0xadc7,	// (0x0009708f) bg_cale_pane

0xaddf,	// (0x000970a7) list_cale_pane

0xae02,	// (0x000970ca) scroll_pane_cp09

0xae13,	// (0x000970db) cale_bg_pane_g1

0xae1b,	// (0x000970e3) cale_bg_pane_g2

0xae23,	// (0x000970eb) cale_bg_pane_g3

0xae2b,	// (0x000970f3) cale_bg_pane_g4

0xae33,	// (0x000970fb) cale_bg_pane_g5

0xae3b,	// (0x00097103) cale_bg_pane_g6

0xae43,	// (0x0009710b) cale_bg_pane_g7

0xae4b,	// (0x00097113) cale_bg_pane_g8

0xae53,	// (0x0009711b) cale_bg_pane_g9

0x0008,

0xf2ec,	// (0x0009b5b4) cale_bg_pane_g

0xae5b,	// (0x00097123) list_cale_time_pane_ParamLimits

0xae5b,	// (0x00097123) list_cale_time_pane

0xae70,	// (0x00097138) list_cale_time_pane_g1_ParamLimits

0xae70,	// (0x00097138) list_cale_time_pane_g1

0xae7c,	// (0x00097144) list_cale_time_pane_g2_ParamLimits

0xae7c,	// (0x00097144) list_cale_time_pane_g2

0x2fd0,	// (0x0008f298) list_cale_time_pane_g3_ParamLimits

0x2fd0,	// (0x0008f298) list_cale_time_pane_g3

0x2fde,	// (0x0008f2a6) list_cale_time_pane_g4_ParamLimits

0x2fde,	// (0x0008f2a6) list_cale_time_pane_g4

0x2fec,	// (0x0008f2b4) list_cale_time_pane_g5_ParamLimits

0x2fec,	// (0x0008f2b4) list_cale_time_pane_g5

0x0005,

0xf2ff,	// (0x0009b5c7) list_cale_time_pane_g_ParamLimits

0xf2ff,	// (0x0009b5c7) list_cale_time_pane_g

0xae96,	// (0x0009715e) list_cale_time_pane_t1_ParamLimits

0xae96,	// (0x0009715e) list_cale_time_pane_t1

0xaebe,	// (0x00097186) list_cale_time_pane_t2_ParamLimits

0xaebe,	// (0x00097186) list_cale_time_pane_t2

0x32ba,	// (0x0008f582) aid_blid_cardinal_pane

0x32f8,	// (0x0008f5c0) compass_pane_t4

0xaee6,	// (0x000971ae) list_cale_time_pane_t4_ParamLimits

0xaee6,	// (0x000971ae) list_cale_time_pane_t4

0x3306,	// (0x0008f5ce) compass_pane_t5

0x3314,	// (0x0008f5dc) compass_pane_t6

0x3322,	// (0x0008f5ea) compass_pane_t7

0xb300,	// (0x000975c8) navi_pane_cc_t1

0xb455,	// (0x0009771d) aid_phob_thumbnail_center_pane

0x3a72,	// (0x0008fd3a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30c,	// (0x0009b5d4) list_cale_time_pane_t_ParamLimits

0xf30c,	// (0x0009b5d4) list_cale_time_pane_t

0x99d3,	// (0x00095c9b) bg_popup_window_pane_cp02_ParamLimits

0x99d3,	// (0x00095c9b) bg_popup_window_pane_cp02

0xaf0e,	// (0x000971d6) heading_pane_cp01_ParamLimits

0xaf0e,	// (0x000971d6) heading_pane_cp01

0xaf1a,	// (0x000971e2) loc_req_pane_ParamLimits

0xaf1a,	// (0x000971e2) loc_req_pane

0xaf2a,	// (0x000971f2) loc_type_pane_ParamLimits

0xaf2a,	// (0x000971f2) loc_type_pane

0xaf3c,	// (0x00097204) loc_type_pane_t1_ParamLimits

0xaf3c,	// (0x00097204) loc_type_pane_t1

0xaf4e,	// (0x00097216) loc_type_pane_t2_ParamLimits

0xaf4e,	// (0x00097216) loc_type_pane_t2

0xaf60,	// (0x00097228) loc_type_pane_t3_ParamLimits

0xaf60,	// (0x00097228) loc_type_pane_t3

0x0002,

0xf313,	// (0x0009b5db) loc_type_pane_t_ParamLimits

0xf313,	// (0x0009b5db) loc_type_pane_t

0xaf72,	// (0x0009723a) list_loc_req_pane

0xaf7c,	// (0x00097244) scroll_pane_cp012

0x2ffa,	// (0x0008f2c2) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ffa,	// (0x0008f2c2) list_single_loc_request_popup_menu_pane

0xaf87,	// (0x0009724f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf87,	// (0x0009724f) list_single_loc_request_popup_menu_pane_g1

0xaf93,	// (0x0009725b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf93,	// (0x0009725b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf31a,	// (0x0009b5e2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf31a,	// (0x0009b5e2) list_single_loc_request_popup_menu_pane_g

0xaf9f,	// (0x00097267) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf9f,	// (0x00097267) list_single_loc_request_popup_menu_pane_t1

0x9fd7,	// (0x0009629f) bg_popup_window_pane_cp03_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_window_pane_cp03

0xafb5,	// (0x0009727d) heading_loc_req_pane_ParamLimits

0xafb5,	// (0x0009727d) heading_loc_req_pane

0x3007,	// (0x0008f2cf) popup_dyc_status_message_window_g1_ParamLimits

0x3007,	// (0x0008f2cf) popup_dyc_status_message_window_g1

0x301b,	// (0x0008f2e3) popup_dyc_status_message_window_t1_ParamLimits

0x301b,	// (0x0008f2e3) popup_dyc_status_message_window_t1

0x3030,	// (0x0008f2f8) popup_dyc_status_message_window_t2_ParamLimits

0x3030,	// (0x0008f2f8) popup_dyc_status_message_window_t2

0x3045,	// (0x0008f30d) popup_dyc_status_message_window_t3_ParamLimits

0x3045,	// (0x0008f30d) popup_dyc_status_message_window_t3

0x0002,

0xf31f,	// (0x0009b5e7) popup_dyc_status_message_window_t_ParamLimits

0xf31f,	// (0x0009b5e7) popup_dyc_status_message_window_t

0x9d7c,	// (0x00096044) bg_heading_pane_cp01

0xafc1,	// (0x00097289) heading_loc_req_pane_g1

0xafc9,	// (0x00097291) heading_loc_req_pane_g2

0xafd1,	// (0x00097299) heading_loc_req_pane_g3

0x0002,

0xf326,	// (0x0009b5ee) heading_loc_req_pane_g

0xafd9,	// (0x000972a1) heading_loc_req_pane_t1

0xafe9,	// (0x000972b1) bg_popup_sub_pane_cp01_ParamLimits

0xafe9,	// (0x000972b1) bg_popup_sub_pane_cp01

0xaff7,	// (0x000972bf) popup_cale_events_window_g1_ParamLimits

0xaff7,	// (0x000972bf) popup_cale_events_window_g1

0xb017,	// (0x000972df) popup_cale_events_window_g2_ParamLimits

0xb017,	// (0x000972df) popup_cale_events_window_g2

0x0001,

0xf35a,	// (0x0009b622) popup_cale_events_window_g_ParamLimits

0xf35a,	// (0x0009b622) popup_cale_events_window_g

0xb037,	// (0x000972ff) popup_cale_events_window_t1_ParamLimits

0xb037,	// (0x000972ff) popup_cale_events_window_t1

0xb049,	// (0x00097311) popup_cale_events_window_t2_ParamLimits

0xb049,	// (0x00097311) popup_cale_events_window_t2

0xb087,	// (0x0009734f) popup_cale_events_window_t3_ParamLimits

0xb087,	// (0x0009734f) popup_cale_events_window_t3

0xb0c1,	// (0x00097389) popup_cale_events_window_t4_ParamLimits

0xb0c1,	// (0x00097389) popup_cale_events_window_t4

0x0003,

0xf35f,	// (0x0009b627) popup_cale_events_window_t_ParamLimits

0xf35f,	// (0x0009b627) popup_cale_events_window_t

0x3079,	// (0x0008f341) call_type_pane

0x3089,	// (0x0008f351) popup_call_status_window_g1

0x309d,	// (0x0008f365) popup_call_status_window_g2

0x30b1,	// (0x0008f379) popup_call_status_window_g3

0x0002,

0xf368,	// (0x0009b630) popup_call_status_window_g

0xb0f7,	// (0x000973bf) call_type_pane_g1

0xb100,	// (0x000973c8) call_type_pane_g2

0x0001,

0xf36f,	// (0x0009b637) call_type_pane_g

0x9d7c,	// (0x00096044) bg_popup_sub_pane_cp02

0xb109,	// (0x000973d1) listscroll_popup_wml_pane

0xb111,	// (0x000973d9) list_wml_pane

0xb11b,	// (0x000973e3) scroll_pane_cp013

0xb126,	// (0x000973ee) list_single_graphic_popup_wml_pane_ParamLimits

0xb126,	// (0x000973ee) list_single_graphic_popup_wml_pane

0xa137,	// (0x000963ff) list_single_graphic_popup_wml_pane_g1

0xb13a,	// (0x00097402) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf374,	// (0x0009b63c) list_single_graphic_popup_wml_pane_g

0xb142,	// (0x0009740a) list_single_graphic_popup_wml_pane_t1

0xb158,	// (0x00097420) aid_call_pane

0x9fcf,	// (0x00096297) popup_clock_analogue_window_g1

0x9fcf,	// (0x00096297) popup_clock_analogue_window_g2

0xa2e9,	// (0x000965b1) popup_clock_analogue_window_g3

0xa2e9,	// (0x000965b1) popup_clock_analogue_window_g4

0xa137,	// (0x000963ff) popup_clock_analogue_window_g5

0x0004,

0xf379,	// (0x0009b641) popup_clock_analogue_window_g

0xa2f1,	// (0x000965b9) popup_clock_analogue_window_t1

0xa2ff,	// (0x000965c7) clock_digital_number_pane_ParamLimits

0xa2ff,	// (0x000965c7) clock_digital_number_pane

0xa30b,	// (0x000965d3) clock_digital_number_pane_cp02_ParamLimits

0xa30b,	// (0x000965d3) clock_digital_number_pane_cp02

0xa317,	// (0x000965df) clock_digital_number_pane_cp03_ParamLimits

0xa317,	// (0x000965df) clock_digital_number_pane_cp03

0xa323,	// (0x000965eb) clock_digital_number_pane_cp04_ParamLimits

0xa323,	// (0x000965eb) clock_digital_number_pane_cp04

0xa32f,	// (0x000965f7) clock_digital_separator_pane_ParamLimits

0xa32f,	// (0x000965f7) clock_digital_separator_pane

0xa33b,	// (0x00096603) popup_clock_digital_window_t1

0xa137,	// (0x000963ff) clock_digital_number_pane_g1

0xa137,	// (0x000963ff) clock_digital_number_pane_g2

0x0001,

0xf2e7,	// (0x0009b5af) clock_digital_number_pane_g

0xa137,	// (0x000963ff) clock_digital_separator_pane_g1

0xa137,	// (0x000963ff) clock_digital_separator_pane_g2

0x0001,

0xf2e7,	// (0x0009b5af) clock_digital_separator_pane_g

0x9d7c,	// (0x00096044) bg_popup_window_pane_cp04

0xb160,	// (0x00097428) heading_pane_cp03

0xb168,	// (0x00097430) listscroll_popup_gms_pane

0xb170,	// (0x00097438) grid_large_graphic_popup_pane

0xb17a,	// (0x00097442) listscroll_popup_gms_pane_g1

0xb182,	// (0x0009744a) listscroll_popup_gms_pane_g2

0x0001,

0xf384,	// (0x0009b64c) listscroll_popup_gms_pane_g

0xac18,	// (0x00096ee0) scroll_pane_cp014

0x30c1,	// (0x0008f389) cell_large_graphic_popup_pane_ParamLimits

0x30c1,	// (0x0008f389) cell_large_graphic_popup_pane

0x30d9,	// (0x0008f3a1) cell_large_graphic_popup_pane_g1_ParamLimits

0x30d9,	// (0x0008f3a1) cell_large_graphic_popup_pane_g1

0xb18a,	// (0x00097452) cell_large_graphic_popup_pane_g2_ParamLimits

0xb18a,	// (0x00097452) cell_large_graphic_popup_pane_g2

0xb196,	// (0x0009745e) cell_large_graphic_popup_pane_g3_ParamLimits

0xb196,	// (0x0009745e) cell_large_graphic_popup_pane_g3

0xb1a3,	// (0x0009746b) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1a3,	// (0x0009746b) cell_large_graphic_popup_pane_g4

0x0003,

0xf389,	// (0x0009b651) cell_large_graphic_popup_pane_g_ParamLimits

0xf389,	// (0x0009b651) cell_large_graphic_popup_pane_g

0xb1b3,	// (0x0009747b) grid_highlight_pane_cp010

0xa137,	// (0x000963ff) bg_popup_call_pane_g1

0xb1bd,	// (0x00097485) list_single_graphic_popup_conf_pane_ParamLimits

0xb1bd,	// (0x00097485) list_single_graphic_popup_conf_pane

0xb1cf,	// (0x00097497) list_highlight_pane_cp01

0xb1d8,	// (0x000974a0) list_single_graphic_popup_conf_pane_g1

0xb1e0,	// (0x000974a8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf392,	// (0x0009b65a) list_single_graphic_popup_conf_pane_g

0xb1e8,	// (0x000974b0) list_single_graphic_popup_conf_pane_t1

0xb1f6,	// (0x000974be) linegrid_cams_pane_g1

0x30e5,	// (0x0008f3ad) linegrid_cams_pane_g2

0xaa4f,	// (0x00096d17) linegrid_cams_pane_g3

0xb1ff,	// (0x000974c7) linegrid_cams_pane_g4

0x30ee,	// (0x0008f3b6) linegrid_cams_pane_g5

0x30f7,	// (0x0008f3bf) linegrid_cams_pane_g6

0xaa58,	// (0x00096d20) linegrid_cams_pane_g7

0x0006,

0xf397,	// (0x0009b65f) linegrid_cams_pane_g

0xb208,	// (0x000974d0) popup_clock_analogue_window

0xb208,	// (0x000974d0) popup_clock_digital_window

0x9d7c,	// (0x00096044) popup_phob_thumbnail_window

0xa137,	// (0x000963ff) call_video_uplink_pane_g1

0xb211,	// (0x000974d9) call_video_uplink_pane_g2

0x0001,

0xf3a6,	// (0x0009b66e) call_video_uplink_pane_g

0xb219,	// (0x000974e1) video_uplink_pane

0xb221,	// (0x000974e9) mce_image_pane_g1

0x3102,	// (0x0008f3ca) mce_image_pane_g2

0x310c,	// (0x0008f3d4) mce_image_pane_g3

0x3116,	// (0x0008f3de) mce_image_pane_g4

0x311e,	// (0x0008f3e6) mce_image_pane_g5

0x0004,

0xf3ab,	// (0x0009b673) mce_image_pane_g

0xb22b,	// (0x000974f3) control_top_pane_stacon_cp01_ParamLimits

0xb22b,	// (0x000974f3) control_top_pane_stacon_cp01

0xb23f,	// (0x00097507) uni_indicator_pane_stacon_cp01_ParamLimits

0xb23f,	// (0x00097507) uni_indicator_pane_stacon_cp01

0xb250,	// (0x00097518) bg_popup_sub_pane_cp03

0x3126,	// (0x0008f3ee) chi_dic_find_pane

0x312e,	// (0x0008f3f6) listscroll_chi_dic_pane

0x3137,	// (0x0008f3ff) main_pane_chidic_g1

0x314a,	// (0x0008f412) chi_dic_find_pane_t1

0xb25a,	// (0x00097522) find_chidic_pane

0xb263,	// (0x0009752b) chi_dic_list_pane_ParamLimits

0xb263,	// (0x0009752b) chi_dic_list_pane

0xb274,	// (0x0009753c) scroll_pane_cp020

0x3158,	// (0x0008f420) find_chidic_pane_t1

0x9d7c,	// (0x00096044) input_focus_pane_cp06

0x0f89,	// (0x0008d251) list_chi_dic_pane_ParamLimits

0x0f89,	// (0x0008d251) list_chi_dic_pane

0x3167,	// (0x0008f42f) list_chi_dic_pane_t1_ParamLimits

0x3167,	// (0x0008f42f) list_chi_dic_pane_t1

0x9d7c,	// (0x00096044) list_highlight_pane_cp020

0xb27c,	// (0x00097544) bg_cale_heading_pane_g1

0x317a,	// (0x0008f442) bg_cale_heading_pane_g2

0x3182,	// (0x0008f44a) bg_cale_heading_pane_g3

0x318a,	// (0x0008f452) bg_cale_heading_pane_g4

0x3194,	// (0x0008f45c) bg_cale_heading_pane_g5

0x319e,	// (0x0008f466) bg_cale_heading_pane_g6

0x31a6,	// (0x0008f46e) bg_cale_heading_pane_g7

0x31ae,	// (0x0008f476) bg_cale_heading_pane_g8

0x31b8,	// (0x0008f480) bg_cale_heading_pane_g9

0x0008,

0xf3b6,	// (0x0009b67e) bg_cale_heading_pane_g

0xb27c,	// (0x00097544) bg_cale_side_pane_g1

0x31c2,	// (0x0008f48a) bg_cale_side_pane_g2

0x31cc,	// (0x0008f494) bg_cale_side_pane_g3

0x31d6,	// (0x0008f49e) bg_cale_side_pane_g4

0x31e0,	// (0x0008f4a8) bg_cale_side_pane_g5

0x31ea,	// (0x0008f4b2) bg_cale_side_pane_g6

0x31f4,	// (0x0008f4bc) bg_cale_side_pane_g7

0x31fe,	// (0x0008f4c6) bg_cale_side_pane_g8

0x3206,	// (0x0008f4ce) bg_cale_side_pane_g9

0x0008,

0xf3c9,	// (0x0009b691) bg_cale_side_pane_g

0x320e,	// (0x0008f4d6) popup_call_status_window_ParamLimits

0x320e,	// (0x0008f4d6) popup_call_status_window

0xb284,	// (0x0009754c) stacon_top_pane

0xb28c,	// (0x00097554) status_pane_ParamLimits

0xb28c,	// (0x00097554) status_pane

0xb2a1,	// (0x00097569) status_small_pane

0xb2a9,	// (0x00097571) control_pane

0x9d7c,	// (0x00096044) stacon_bottom_pane

0xb2b1,	// (0x00097579) list_single_mce_smart_pane_t1_ParamLimits

0xb2b1,	// (0x00097579) list_single_mce_smart_pane_t1

0xb2c4,	// (0x0009758c) list_single_mce_smart_pane_t2_ParamLimits

0xb2c4,	// (0x0009758c) list_single_mce_smart_pane_t2

0x0001,

0xf3dc,	// (0x0009b6a4) list_single_mce_smart_pane_t_ParamLimits

0xf3dc,	// (0x0009b6a4) list_single_mce_smart_pane_t

0x325b,	// (0x0008f523) compass_pane

0x3266,	// (0x0008f52e) main_location2_pane_t1

0x327a,	// (0x0008f542) main_location2_pane_t2

0x3290,	// (0x0008f558) main_location2_pane_t3

0x0003,

0xf3e1,	// (0x0009b6a9) main_location2_pane_t

0xb2e3,	// (0x000975ab) compass_pane_g1_ParamLimits

0xb2e3,	// (0x000975ab) compass_pane_g1

0x32da,	// (0x0008f5a2) compass_pane_t1

0x32e9,	// (0x0008f5b1) compass_pane_t2

0x0005,

0xf3ea,	// (0x0009b6b2) compass_pane_t

0x3330,	// (0x0008f5f8) text_secondary_cp61

0xb2f7,	// (0x000975bf) navi_pane_cams_g5

0xb31a,	// (0x000975e2) navi_pane_im_t1

0xb328,	// (0x000975f0) navi_pane_mp_g1_ParamLimits

0xb328,	// (0x000975f0) navi_pane_mp_g1

0xb33c,	// (0x00097604) navi_pane_mp_g2_ParamLimits

0xb33c,	// (0x00097604) navi_pane_mp_g2

0xb348,	// (0x00097610) navi_pane_mp_g3_ParamLimits

0xb348,	// (0x00097610) navi_pane_mp_g3

0x0002,

0xf3fe,	// (0x0009b6c6) navi_pane_mp_g_ParamLimits

0xf3fe,	// (0x0009b6c6) navi_pane_mp_g

0xb354,	// (0x0009761c) navi_pane_mp_t1

0xb362,	// (0x0009762a) navi_pane_mp_t2

0x0002,

0xf405,	// (0x0009b6cd) navi_pane_mp_t

0xb39e,	// (0x00097666) navi_pane_vt_g1

0xb354,	// (0x0009761c) navi_pane_vt_t1

0xb3a6,	// (0x0009766e) navi_slider_pane

0xb3ae,	// (0x00097676) zooming_pane

0xb3b6,	// (0x0009767e) navi_slider_pane_g1

0xa358,	// (0x00096620) navi_slider_pane_g2

0x0006,

0xf40c,	// (0x0009b6d4) navi_slider_pane_g

0xb3da,	// (0x000976a2) aid_levels_zoom

0xb3e2,	// (0x000976aa) zooming_pane_g1

0xb3ea,	// (0x000976b2) zooming_pane_g2

0xb3ea,	// (0x000976b2) zooming_pane_g3

0x0002,

0xf41b,	// (0x0009b6e3) zooming_pane_g

0xb3f2,	// (0x000976ba) level_10_zoom

0xb3fb,	// (0x000976c3) level_11_zoom

0xb404,	// (0x000976cc) level_1_zoom

0xb40d,	// (0x000976d5) level_2_zoom

0xb416,	// (0x000976de) level_3_zoom

0xb41f,	// (0x000976e7) level_4_zoom

0xb428,	// (0x000976f0) level_5_zoom

0xb431,	// (0x000976f9) level_6_zoom

0xb43a,	// (0x00097702) level_7_zoom

0xb443,	// (0x0009770b) level_8_zoom

0xb44c,	// (0x00097714) level_9_zoom

0xb45d,	// (0x00097725) popup_phob_thumbnail_window_g1

0xb465,	// (0x0009772d) popup_phob_thumbnail_window_g2

0x0001,

0xf422,	// (0x0009b6ea) popup_phob_thumbnail_window_g

0xc762,	// (0x00098a2a) level_1_location

0xc76a,	// (0x00098a32) level_2_location

0xc772,	// (0x00098a3a) level_3_location

0xc77a,	// (0x00098a42) level_4_location

0xb3ae,	// (0x00097676) level_5_location

0x3479,	// (0x0008f741) mce_icon_pane_g1

0x3483,	// (0x0008f74b) mce_icon_pane_g2

0x0001,

0xf427,	// (0x0009b6ef) mce_icon_pane_g

0x348b,	// (0x0008f753) main_mup_pane_g1_ParamLimits

0x348b,	// (0x0008f753) main_mup_pane_g1

0x34a1,	// (0x0008f769) main_mup_pane_g2_ParamLimits

0x34a1,	// (0x0008f769) main_mup_pane_g2

0x34b9,	// (0x0008f781) main_mup_pane_g3_ParamLimits

0x34b9,	// (0x0008f781) main_mup_pane_g3

0x34d1,	// (0x0008f799) main_mup_pane_g4_ParamLimits

0x34d1,	// (0x0008f799) main_mup_pane_g4

0x34e9,	// (0x0008f7b1) main_mup_pane_g5_ParamLimits

0x34e9,	// (0x0008f7b1) main_mup_pane_g5

0x3505,	// (0x0008f7cd) main_mup_pane_g6_ParamLimits

0x3505,	// (0x0008f7cd) main_mup_pane_g6

0x351f,	// (0x0008f7e7) main_mup_pane_g7_ParamLimits

0x351f,	// (0x0008f7e7) main_mup_pane_g7

0x353d,	// (0x0008f805) main_mup_pane_g8_ParamLimits

0x353d,	// (0x0008f805) main_mup_pane_g8

0x355b,	// (0x0008f823) main_mup_pane_g9_ParamLimits

0x355b,	// (0x0008f823) main_mup_pane_g9

0x3577,	// (0x0008f83f) main_mup_pane_g10_ParamLimits

0x3577,	// (0x0008f83f) main_mup_pane_g10

0x3595,	// (0x0008f85d) main_mup_pane_g11_ParamLimits

0x3595,	// (0x0008f85d) main_mup_pane_g11

0x35af,	// (0x0008f877) main_mup_pane_g12_ParamLimits

0x35af,	// (0x0008f877) main_mup_pane_g12

0x35c5,	// (0x0008f88d) main_mup_pane_g13_ParamLimits

0x35c5,	// (0x0008f88d) main_mup_pane_g13

0x000c,

0xf42c,	// (0x0009b6f4) main_mup_pane_g_ParamLimits

0xf42c,	// (0x0009b6f4) main_mup_pane_g

0x35d9,	// (0x0008f8a1) main_mup_pane_t1_ParamLimits

0x35d9,	// (0x0008f8a1) main_mup_pane_t1

0x35f5,	// (0x0008f8bd) main_mup_pane_t2_ParamLimits

0x35f5,	// (0x0008f8bd) main_mup_pane_t2

0x360d,	// (0x0008f8d5) main_mup_pane_t3_ParamLimits

0x360d,	// (0x0008f8d5) main_mup_pane_t3

0x3625,	// (0x0008f8ed) main_mup_pane_t4_ParamLimits

0x3625,	// (0x0008f8ed) main_mup_pane_t4

0x3643,	// (0x0008f90b) main_mup_pane_t5_ParamLimits

0x3643,	// (0x0008f90b) main_mup_pane_t5

0x3658,	// (0x0008f920) main_mup_pane_t6_ParamLimits

0x3658,	// (0x0008f920) main_mup_pane_t6

0x0005,

0xf447,	// (0x0009b70f) main_mup_pane_t_ParamLimits

0xf447,	// (0x0009b70f) main_mup_pane_t

0x366a,	// (0x0008f932) mup_progress_pane_ParamLimits

0x366a,	// (0x0008f932) mup_progress_pane

0x3676,	// (0x0008f93e) mup_visualizer_pane_ParamLimits

0x3676,	// (0x0008f93e) mup_visualizer_pane

0x36aa,	// (0x0008f972) mup_volume_pane_ParamLimits

0x36aa,	// (0x0008f972) mup_volume_pane

0xb46d,	// (0x00097735) mup_visualizer_pane_g1_ParamLimits

0xb46d,	// (0x00097735) mup_visualizer_pane_g1

0xb46d,	// (0x00097735) mup_visualizer_pane_g2_ParamLimits

0xb46d,	// (0x00097735) mup_visualizer_pane_g2

0xb2e3,	// (0x000975ab) mup_visualizer_pane_g3_ParamLimits

0xb2e3,	// (0x000975ab) mup_visualizer_pane_g3

0x0002,

0xf454,	// (0x0009b71c) mup_visualizer_pane_g_ParamLimits

0xf454,	// (0x0009b71c) mup_visualizer_pane_g

0xa137,	// (0x000963ff) mup_volume_pane_g1

0xb483,	// (0x0009774b) mup_volume_pane_g2

0x0001,

0xf45b,	// (0x0009b723) mup_volume_pane_g

0xa137,	// (0x000963ff) mup_progress_pane_g1

0xb48c,	// (0x00097754) mup_progress_pane_g2

0xb495,	// (0x0009775d) mup_progress_pane_g3

0x0002,

0xf460,	// (0x0009b728) mup_progress_pane_g

0x9d7c,	// (0x00096044) bg_popup_window_pane_cp05

0xb49e,	// (0x00097766) heading_pane_cp02_ParamLimits

0xb49e,	// (0x00097766) heading_pane_cp02

0xb4ba,	// (0x00097782) list_popup_blid_pane

0xb4c2,	// (0x0009778a) list_blid_sat_info_pane_ParamLimits

0xb4c2,	// (0x0009778a) list_blid_sat_info_pane

0xb4d5,	// (0x0009779d) list_blid_sat_info_pane_g1

0xb4dd,	// (0x000977a5) list_blid_sat_info_pane_t1

0x37d4,	// (0x0008fa9c) mup_equalizer_pane_ParamLimits

0x37d4,	// (0x0008fa9c) mup_equalizer_pane

0x37f5,	// (0x0008fabd) mup_equalizer_pane_cp1_ParamLimits

0x37f5,	// (0x0008fabd) mup_equalizer_pane_cp1

0x3816,	// (0x0008fade) mup_equalizer_pane_cp2_ParamLimits

0x3816,	// (0x0008fade) mup_equalizer_pane_cp2

0x383b,	// (0x0008fb03) mup_equalizer_pane_cp3_ParamLimits

0x383b,	// (0x0008fb03) mup_equalizer_pane_cp3

0x3864,	// (0x0008fb2c) mup_equalizer_pane_cp4_ParamLimits

0x3864,	// (0x0008fb2c) mup_equalizer_pane_cp4

0x388d,	// (0x0008fb55) mup_equalizer_pane_cp5

0x38a5,	// (0x0008fb6d) mup_equalizer_pane_cp6

0x38bd,	// (0x0008fb85) mup_equalizer_pane_cp7

0xc67c,	// (0x00098944) bg_popup_call_poc_act_pane_g9

0xc684,	// (0x0009894c) bg_popup_call_poc_act_pane_g10

0xc68c,	// (0x00098954) bg_popup_call_poc_act_pane_g11

0x000a,

0x9fd7,	// (0x0009629f) mup_scale_pane

0xa137,	// (0x000963ff) mup_scale_pane_g1

0xb4eb,	// (0x000977b3) mup_scale_pane_g2

0x0006,

0xf47c,	// (0x0009b744) mup_scale_pane_g

0xb50f,	// (0x000977d7) msg_data_pane

0xb517,	// (0x000977df) scroll_pane_cp017

0xff36,	// (0x0008c1fe) bg_list_pane_cp04_ParamLimits

0xff36,	// (0x0008c1fe) bg_list_pane_cp04

0xb51f,	// (0x000977e7) msg_data_pane_g1

0x38ef,	// (0x0008fbb7) msg_data_pane_g2

0x38f9,	// (0x0008fbc1) msg_data_pane_g3

0x3903,	// (0x0008fbcb) msg_data_pane_g4

0x390b,	// (0x0008fbd3) msg_data_pane_g5

0x3913,	// (0x0008fbdb) msg_data_pane_g6

0x391b,	// (0x0008fbe3) msg_data_pane_g7

0x0006,

0xf48b,	// (0x0009b753) msg_data_pane_g

0xff56,	// (0x0008c21e) msg_text_pane_ParamLimits

0xff56,	// (0x0008c21e) msg_text_pane

0x3923,	// (0x0008fbeb) qrid_highlight_pane_cp011_ParamLimits

0x3923,	// (0x0008fbeb) qrid_highlight_pane_cp011

0x9d7c,	// (0x00096044) msg_body_pane

0x9d7c,	// (0x00096044) msg_header_pane

0xb527,	// (0x000977ef) input_focus_pane_cp07

0x3944,	// (0x0008fc0c) msg_header_pane_t1_ParamLimits

0x3944,	// (0x0008fc0c) msg_header_pane_t1

0x3956,	// (0x0008fc1e) msg_header_pane_t2_ParamLimits

0x3956,	// (0x0008fc1e) msg_header_pane_t2

0x0001,

0xf49f,	// (0x0009b767) msg_header_pane_t_ParamLimits

0xf49f,	// (0x0009b767) msg_header_pane_t

0xb53c,	// (0x00097804) msg_body_pane_g1

0xff8a,	// (0x0008c252) msg_body_pane_t1_ParamLimits

0xff8a,	// (0x0008c252) msg_body_pane_t1

0x3968,	// (0x0008fc30) msg_body_pane_t2_ParamLimits

0x3968,	// (0x0008fc30) msg_body_pane_t2

0x397a,	// (0x0008fc42) msg_body_pane_t3_ParamLimits

0x397a,	// (0x0008fc42) msg_body_pane_t3

0x0002,

0xf4a4,	// (0x0009b76c) msg_body_pane_t_ParamLimits

0xf4a4,	// (0x0009b76c) msg_body_pane_t

0x39c6,	// (0x0008fc8e) main_viewer_pane_g1_ParamLimits

0x39c6,	// (0x0008fc8e) main_viewer_pane_g1

0x39d4,	// (0x0008fc9c) main_viewer_pane_g2_ParamLimits

0x39d4,	// (0x0008fc9c) main_viewer_pane_g2

0x39e2,	// (0x0008fcaa) main_viewer_pane_g3_ParamLimits

0x39e2,	// (0x0008fcaa) main_viewer_pane_g3

0x39f1,	// (0x0008fcb9) main_viewer_pane_g4_ParamLimits

0x39f1,	// (0x0008fcb9) main_viewer_pane_g4

0xa382,	// (0x0009664a) main_viewer_pane_g5_ParamLimits

0xa382,	// (0x0009664a) main_viewer_pane_g5

0xa382,	// (0x0009664a) main_viewer_pane_g7_ParamLimits

0xa382,	// (0x0009664a) main_viewer_pane_g7

0xa394,	// (0x0009665c) main_viewer_pane_g8_ParamLimits

0xa394,	// (0x0009665c) main_viewer_pane_g8

0x0007,

0xf4b4,	// (0x0009b77c) main_viewer_pane_g_ParamLimits

0xf4b4,	// (0x0009b77c) main_viewer_pane_g

0xb544,	// (0x0009780c) viewer_content_pane_ParamLimits

0xb544,	// (0x0009780c) viewer_content_pane

0x3a2f,	// (0x0008fcf7) main_postcard_pane_g1_ParamLimits

0x3a2f,	// (0x0008fcf7) main_postcard_pane_g1

0x3a45,	// (0x0008fd0d) main_postcard_pane_g2_ParamLimits

0x3a45,	// (0x0008fd0d) main_postcard_pane_g2

0x3a5b,	// (0x0008fd23) main_postcard_pane_g3_ParamLimits

0x3a5b,	// (0x0008fd23) main_postcard_pane_g3

0x0005,

0xf4c5,	// (0x0009b78d) main_postcard_pane_g_ParamLimits

0xf4c5,	// (0x0009b78d) main_postcard_pane_g

0x3a72,	// (0x0008fd3a) main_postcard_pane_g4

0xc8a5,	// (0x00098b6d) smil_status_volume_pane_g2

0x3ab5,	// (0x0008fd7d) postcard_pane_ParamLimits

0x3ab5,	// (0x0008fd7d) postcard_pane

0xb552,	// (0x0009781a) postcard_pane_g1_ParamLimits

0xb552,	// (0x0009781a) postcard_pane_g1

0x3b05,	// (0x0008fdcd) postcard_pane_g2_ParamLimits

0x3b05,	// (0x0008fdcd) postcard_pane_g2

0x3b11,	// (0x0008fdd9) postcard_pane_g3_ParamLimits

0x3b11,	// (0x0008fdd9) postcard_pane_g3

0xb560,	// (0x00097828) postcard_pane_g4_ParamLimits

0xb560,	// (0x00097828) postcard_pane_g4

0x3b1d,	// (0x0008fde5) postcard_pane_g5_ParamLimits

0x3b1d,	// (0x0008fde5) postcard_pane_g5

0x3b32,	// (0x0008fdfa) postcard_pane_g6_ParamLimits

0x3b32,	// (0x0008fdfa) postcard_pane_g6

0xb552,	// (0x0009781a) postcard_pane_g7_ParamLimits

0xb552,	// (0x0009781a) postcard_pane_g7

0x0006,

0xf4d2,	// (0x0009b79a) postcard_pane_g_ParamLimits

0xf4d2,	// (0x0009b79a) postcard_pane_g

0x3b4a,	// (0x0008fe12) main_mp2_pane_g1_ParamLimits

0x3b4a,	// (0x0008fe12) main_mp2_pane_g1

0x3b58,	// (0x0008fe20) main_mp2_pane_g2_ParamLimits

0x3b58,	// (0x0008fe20) main_mp2_pane_g2

0x3b64,	// (0x0008fe2c) main_mp2_pane_g3_ParamLimits

0x3b64,	// (0x0008fe2c) main_mp2_pane_g3

0x0002,

0xf4e1,	// (0x0009b7a9) main_mp2_pane_g_ParamLimits

0xf4e1,	// (0x0009b7a9) main_mp2_pane_g

0x3b70,	// (0x0008fe38) main_mp2_pane_t1_ParamLimits

0x3b70,	// (0x0008fe38) main_mp2_pane_t1

0x3b87,	// (0x0008fe4f) main_mp2_pane_t2_ParamLimits

0x3b87,	// (0x0008fe4f) main_mp2_pane_t2

0x3b99,	// (0x0008fe61) main_mp2_pane_t3_ParamLimits

0x3b99,	// (0x0008fe61) main_mp2_pane_t3

0x0002,

0xf4e8,	// (0x0009b7b0) main_mp2_pane_t_ParamLimits

0xf4e8,	// (0x0009b7b0) main_mp2_pane_t

0xb56e,	// (0x00097836) pec_content_pane_ParamLimits

0xb56e,	// (0x00097836) pec_content_pane

0xac18,	// (0x00096ee0) scroll_pane_cp015

0xb580,	// (0x00097848) pec_attribute_pane_ParamLimits

0xb580,	// (0x00097848) pec_attribute_pane

0x3bab,	// (0x0008fe73) pec_content_pane_g1_ParamLimits

0x3bab,	// (0x0008fe73) pec_content_pane_g1

0xb590,	// (0x00097858) pec_content_pane_t1_ParamLimits

0xb590,	// (0x00097858) pec_content_pane_t1

0xb5a2,	// (0x0009786a) pec_content_pane_t2_ParamLimits

0xb5a2,	// (0x0009786a) pec_content_pane_t2

0x0001,

0xf4ef,	// (0x0009b7b7) pec_content_pane_t_ParamLimits

0xf4ef,	// (0x0009b7b7) pec_content_pane_t

0x3bb7,	// (0x0008fe7f) list_single_graphic_pane_cp01_ParamLimits

0x3bb7,	// (0x0008fe7f) list_single_graphic_pane_cp01

0x9fd7,	// (0x0009629f) bg_popup_sub_pane_cp04

0xb5b4,	// (0x0009787c) popup_mup_playback_window_g1

0xb5c0,	// (0x00097888) popup_mup_playback_window_t1

0xb5d5,	// (0x0009789d) popup_mup_playback_window_t2

0x0001,

0xf4f4,	// (0x0009b7bc) popup_mup_playback_window_t

0xb60c,	// (0x000978d4) main_image_pane_g1_ParamLimits

0xb60c,	// (0x000978d4) main_image_pane_g1

0xb64f,	// (0x00097917) scroll_pane_cp018_ParamLimits

0xb64f,	// (0x00097917) scroll_pane_cp018

0xb667,	// (0x0009792f) scroll_pane_cp016_ParamLimits

0xb667,	// (0x0009792f) scroll_pane_cp016

0x3c86,	// (0x0008ff4e) smil2_image_pane_ParamLimits

0x3c86,	// (0x0008ff4e) smil2_image_pane

0x3cbc,	// (0x0008ff84) smil2_root_pane_ParamLimits

0x3cbc,	// (0x0008ff84) smil2_root_pane

0x3cf4,	// (0x0008ffbc) smil2_text_pane_ParamLimits

0x3cf4,	// (0x0008ffbc) smil2_text_pane

0x9d7c,	// (0x00096044) bg_list_pane_cp06

0xb6a3,	// (0x0009796b) grid_radio_pane

0x9d7c,	// (0x00096044) bg_popup_window_pane_cp06

0xb6ad,	// (0x00097975) main_fmradio_pane_t1

0xb160,	// (0x00097428) heading_pane_cp04

0xb6bb,	// (0x00097983) main_fmradio_pane_t2

0xc694,	// (0x0009895c) popup_cale_lunar_info_window_g1

0xb6c9,	// (0x00097991) main_fmradio_pane_t3

0xc69c,	// (0x00098964) popup_cale_lunar_info_window_g2

0xb6d9,	// (0x000979a1) main_fmradio_pane_t4

0x0001,

0xb6e7,	// (0x000979af) main_fmradio_pane_t5

0x0004,

0xf5cf,	// (0x0009b897) popup_cale_lunar_info_window_g

0xf509,	// (0x0009b7d1) main_fmradio_pane_t

0xb6f5,	// (0x000979bd) wait_bar_pane_cp03

0xae5b,	// (0x00097123) cell_fmradio_pane_ParamLimits

0xae5b,	// (0x00097123) cell_fmradio_pane

0xb552,	// (0x0009781a) cell_fmradio_pane_g1_ParamLimits

0xb552,	// (0x0009781a) cell_fmradio_pane_g1

0x9d7c,	// (0x00096044) grid_highlight_pane_cp011

0xb6fd,	// (0x000979c5) poc_content_pane_ParamLimits

0xb6fd,	// (0x000979c5) poc_content_pane

0xb70f,	// (0x000979d7) scroll_pane_cp019

0x3d84,	// (0x0009004c) popup_call_poc_act_window_ParamLimits

0x3d84,	// (0x0009004c) popup_call_poc_act_window

0x3da8,	// (0x00090070) popup_call_poc_inact_window_ParamLimits

0x3da8,	// (0x00090070) popup_call_poc_inact_window

0xf5a6,	// (0x0009b86e) bg_popup_call_poc_act_pane_g

0xc60c,	// (0x000988d4) bg_popup_call_poc_inact_pane_g1

0xc614,	// (0x000988dc) bg_popup_call_poc_inact_pane_g2

0xb717,	// (0x000979df) popup_call_poc_act_window_g2

0xc61c,	// (0x000988e4) bg_popup_call_poc_inact_pane_g3

0xc624,	// (0x000988ec) bg_popup_call_poc_inact_pane_g4

0xc62c,	// (0x000988f4) bg_popup_call_poc_inact_pane_g5

0xb71f,	// (0x000979e7) popup_call_poc_act_window_t1_ParamLimits

0xb71f,	// (0x000979e7) popup_call_poc_act_window_t1

0xb747,	// (0x00097a0f) popup_call_poc_act_window_t2_ParamLimits

0xb747,	// (0x00097a0f) popup_call_poc_act_window_t2

0xb76f,	// (0x00097a37) popup_call_poc_act_window_t3_ParamLimits

0xb76f,	// (0x00097a37) popup_call_poc_act_window_t3

0xb797,	// (0x00097a5f) popup_call_poc_act_window_t4_ParamLimits

0xb797,	// (0x00097a5f) popup_call_poc_act_window_t4

0x0003,

0xf514,	// (0x0009b7dc) popup_call_poc_act_window_t_ParamLimits

0xf514,	// (0x0009b7dc) popup_call_poc_act_window_t

0xc634,	// (0x000988fc) bg_popup_call_poc_inact_pane_g6

0xc63c,	// (0x00098904) bg_popup_call_poc_inact_pane_g7

0xc644,	// (0x0009890c) bg_popup_call_poc_inact_pane_g8

0xb7a9,	// (0x00097a71) popup_call_poc_inact_window_g2

0xc64c,	// (0x00098914) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf593,	// (0x0009b85b) bg_popup_call_poc_inact_pane_g

0xb7b1,	// (0x00097a79) popup_call_poc_inact_window_t1_ParamLimits

0xb7b1,	// (0x00097a79) popup_call_poc_inact_window_t1

0xb7c6,	// (0x00097a8e) popup_call_poc_inact_window_t2_ParamLimits

0xb7c6,	// (0x00097a8e) popup_call_poc_inact_window_t2

0xb7db,	// (0x00097aa3) popup_call_poc_inact_window_t3_ParamLimits

0xb7db,	// (0x00097aa3) popup_call_poc_inact_window_t3

0x0002,

0xf51d,	// (0x0009b7e5) popup_call_poc_inact_window_t_ParamLimits

0xf51d,	// (0x0009b7e5) popup_call_poc_inact_window_t

0xc818,	// (0x00098ae0) context_pane_ParamLimits

0x4650,	// (0x00090918) signal_pane_ParamLimits

0xb3ae,	// (0x00097676) main_call2_pane

0xc806,	// (0x00098ace) popup_phob_thumbnail2_window_ParamLimits

0xc806,	// (0x00098ace) popup_phob_thumbnail2_window

0xa36a,	// (0x00096632) aid_hotspot_pointer_arrow_pane

0xa372,	// (0x0009663a) aid_hotspot_pointer_hand_pane

0x4110,	// (0x000903d8) phob_pre_status_pane_g5

0x1b2f,	// (0x0008ddf7) cams_zoom_pane_ParamLimits

0x1b3e,	// (0x0008de06) image_vga_pane_ParamLimits

0x1b58,	// (0x0008de20) main_camera_pane_g1_ParamLimits

0x1b6a,	// (0x0008de32) main_camera_pane_g2_ParamLimits

0x1b7a,	// (0x0008de42) main_camera_pane_g3_ParamLimits

0x1b8e,	// (0x0008de56) main_camera_pane_g4_ParamLimits

0x1ba2,	// (0x0008de6a) main_camera_pane_g5_ParamLimits

0x1bb6,	// (0x0008de7e) main_camera_pane_g6_ParamLimits

0x1bca,	// (0x0008de92) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0009b4dd) main_camera_pane_g_ParamLimits

0x1bde,	// (0x0008dea6) main_camera_pane_t1_ParamLimits

0x1bf4,	// (0x0008debc) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0009b4ee) main_camera_pane_t_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_preview_window_pane_cp01_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_preview_window_pane_cp01

0xb7f0,	// (0x00097ab8) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7f0,	// (0x00097ab8) popup_phob_thumbnail2_window_g1

0x9d7c,	// (0x00096044) call2_cli_visual_pane

0x3ddc,	// (0x000900a4) popup_call2_audio_conf_window_ParamLimits

0x3ddc,	// (0x000900a4) popup_call2_audio_conf_window

0x3e04,	// (0x000900cc) popup_call2_audio_first_window_ParamLimits

0x3e04,	// (0x000900cc) popup_call2_audio_first_window

0x3e9a,	// (0x00090162) popup_call2_audio_in_window_ParamLimits

0x3e9a,	// (0x00090162) popup_call2_audio_in_window

0x3ee6,	// (0x000901ae) popup_call2_audio_out_window_ParamLimits

0x3ee6,	// (0x000901ae) popup_call2_audio_out_window

0x3f58,	// (0x00090220) popup_call2_audio_second_window_ParamLimits

0x3f58,	// (0x00090220) popup_call2_audio_second_window

0x3fbe,	// (0x00090286) popup_call2_audio_wait_window_ParamLimits

0x3fbe,	// (0x00090286) popup_call2_audio_wait_window

0x9d7c,	// (0x00096044) bg_popup_call2_act_pane_cp03

0x9fb9,	// (0x00096281) list_conf_pane_cp

0xb7fc,	// (0x00097ac4) popup_call2_audio_conf_window_t1

0xb80a,	// (0x00097ad2) list_single_graphic_popup_conf2_pane_ParamLimits

0xb80a,	// (0x00097ad2) list_single_graphic_popup_conf2_pane

0xb1cf,	// (0x00097497) list_highlight_pane_cp04

0xb81d,	// (0x00097ae5) list_single_graphic_popup_conf2_pane_g1

0xb1e0,	// (0x000974a8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf524,	// (0x0009b7ec) list_single_graphic_popup_conf2_pane_g

0xb827,	// (0x00097aef) list_single_graphic_popup_conf2_pane_t1

0xb835,	// (0x00097afd) bg_popup_call2_act_pane_cp01_ParamLimits

0xb835,	// (0x00097afd) bg_popup_call2_act_pane_cp01

0xb8bf,	// (0x00097b87) call_type_pane_cp05_ParamLimits

0xb8bf,	// (0x00097b87) call_type_pane_cp05

0xb913,	// (0x00097bdb) popup_call2_audio_second_window_g1_ParamLimits

0xb913,	// (0x00097bdb) popup_call2_audio_second_window_g1

0xb967,	// (0x00097c2f) popup_call2_audio_second_window_g2_ParamLimits

0xb967,	// (0x00097c2f) popup_call2_audio_second_window_g2

0x0002,

0xf529,	// (0x0009b7f1) popup_call2_audio_second_window_g_ParamLimits

0xf529,	// (0x0009b7f1) popup_call2_audio_second_window_g

0xb9cc,	// (0x00097c94) popup_call2_audio_second_window_t1_ParamLimits

0xb9cc,	// (0x00097c94) popup_call2_audio_second_window_t1

0xba87,	// (0x00097d4f) popup_call2_audio_second_window_t2_ParamLimits

0xba87,	// (0x00097d4f) popup_call2_audio_second_window_t2

0xbada,	// (0x00097da2) popup_call2_audio_second_window_t3_ParamLimits

0xbada,	// (0x00097da2) popup_call2_audio_second_window_t3

0x0003,

0xf530,	// (0x0009b7f8) popup_call2_audio_second_window_t_ParamLimits

0xf530,	// (0x0009b7f8) popup_call2_audio_second_window_t

0x9d7c,	// (0x00096044) bg_popup_call2_in_pane_cp02

0x9d86,	// (0x0009604e) call_type_pane_cp04

0x9d8e,	// (0x00096056) popup_call2_audio_wait_window_g1

0x9d96,	// (0x0009605e) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0009b3ca) popup_call2_audio_wait_window_g

0x9d9e,	// (0x00096066) popup_call2_audio_wait_window_t3

0xbbdf,	// (0x00097ea7) bg_popup_call2_act_pane_ParamLimits

0xbbdf,	// (0x00097ea7) bg_popup_call2_act_pane

0xbc9f,	// (0x00097f67) call_type_pane_cp03_ParamLimits

0xbc9f,	// (0x00097f67) call_type_pane_cp03

0xbd03,	// (0x00097fcb) popup_call2_audio_first_window_g1_ParamLimits

0xbd03,	// (0x00097fcb) popup_call2_audio_first_window_g1

0xbd73,	// (0x0009803b) popup_call2_audio_first_window_g2_ParamLimits

0xbd73,	// (0x0009803b) popup_call2_audio_first_window_g2

0xb46d,	// (0x00097735) popup_call2_audio_first_window_g3_ParamLimits

0xb46d,	// (0x00097735) popup_call2_audio_first_window_g3

0x0004,

0xf539,	// (0x0009b801) popup_call2_audio_first_window_g_ParamLimits

0xf539,	// (0x0009b801) popup_call2_audio_first_window_g

0xbe51,	// (0x00098119) popup_call2_audio_first_window_t1_ParamLimits

0xbe51,	// (0x00098119) popup_call2_audio_first_window_t1

0xbf54,	// (0x0009821c) popup_call2_audio_first_window_t4_ParamLimits

0xbf54,	// (0x0009821c) popup_call2_audio_first_window_t4

0xc037,	// (0x000982ff) popup_call2_audio_first_window_t5_ParamLimits

0xc037,	// (0x000982ff) popup_call2_audio_first_window_t5

0x0003,

0xf544,	// (0x0009b80c) popup_call2_audio_first_window_t_ParamLimits

0xf544,	// (0x0009b80c) popup_call2_audio_first_window_t

0x9fcf,	// (0x00096297) bg_popup_call2_act_pane_g1

0xc6a6,	// (0x0009896e) popup_cale_lunar_info_window_t1

0xc6b4,	// (0x0009897c) popup_cale_lunar_info_window_t2

0xc6c2,	// (0x0009898a) popup_cale_lunar_info_window_t3

0x9d7c,	// (0x00096044) bg_popup_call2_bubble_pane

0xc138,	// (0x00098400) bg_popup_call2_in_pane_cp01_ParamLimits

0xc138,	// (0x00098400) bg_popup_call2_in_pane_cp01

0x9a58,	// (0x00095d20) call_type_pane_cp02

0xc180,	// (0x00098448) popup_call2_audio_out_window_g1_ParamLimits

0xc180,	// (0x00098448) popup_call2_audio_out_window_g1

0xc1ac,	// (0x00098474) popup_call2_audio_out_window_g2_ParamLimits

0xc1ac,	// (0x00098474) popup_call2_audio_out_window_g2

0xc1d4,	// (0x0009849c) popup_call2_audio_out_window_g3_ParamLimits

0xc1d4,	// (0x0009849c) popup_call2_audio_out_window_g3

0x0003,

0xf54d,	// (0x0009b815) popup_call2_audio_out_window_g_ParamLimits

0xf54d,	// (0x0009b815) popup_call2_audio_out_window_g

0xc20f,	// (0x000984d7) popup_call2_audio_out_window_t1_ParamLimits

0xc20f,	// (0x000984d7) popup_call2_audio_out_window_t1

0xc26e,	// (0x00098536) popup_call2_audio_out_window_t2_ParamLimits

0xc26e,	// (0x00098536) popup_call2_audio_out_window_t2

0xc2c2,	// (0x0009858a) popup_call2_audio_out_window_t3_ParamLimits

0xc2c2,	// (0x0009858a) popup_call2_audio_out_window_t3

0xc2d8,	// (0x000985a0) popup_call2_audio_out_window_t4_ParamLimits

0xc2d8,	// (0x000985a0) popup_call2_audio_out_window_t4

0xc2ee,	// (0x000985b6) popup_call2_audio_out_window_t5_ParamLimits

0xc2ee,	// (0x000985b6) popup_call2_audio_out_window_t5

0x0005,

0xf556,	// (0x0009b81e) popup_call2_audio_out_window_t_ParamLimits

0xf556,	// (0x0009b81e) popup_call2_audio_out_window_t

0xc352,	// (0x0009861a) bg_popup_call2_in_pane_ParamLimits

0xc352,	// (0x0009861a) bg_popup_call2_in_pane

0xc3ae,	// (0x00098676) popup_call2_audio_in_window_g1_ParamLimits

0xc3ae,	// (0x00098676) popup_call2_audio_in_window_g1

0xc3e6,	// (0x000986ae) popup_call2_audio_in_window_g2_ParamLimits

0xc3e6,	// (0x000986ae) popup_call2_audio_in_window_g2

0xc41e,	// (0x000986e6) popup_call2_audio_in_window_g3_ParamLimits

0xc41e,	// (0x000986e6) popup_call2_audio_in_window_g3

0x0003,

0xf563,	// (0x0009b82b) popup_call2_audio_in_window_g_ParamLimits

0xf563,	// (0x0009b82b) popup_call2_audio_in_window_g

0xc476,	// (0x0009873e) popup_call2_audio_in_window_t1_ParamLimits

0xc476,	// (0x0009873e) popup_call2_audio_in_window_t1

0xc4f6,	// (0x000987be) popup_call2_audio_in_window_t2_ParamLimits

0xc4f6,	// (0x000987be) popup_call2_audio_in_window_t2

0xc576,	// (0x0009883e) popup_call2_audio_in_window_t3_ParamLimits

0xc576,	// (0x0009883e) popup_call2_audio_in_window_t3

0xc590,	// (0x00098858) popup_call2_audio_in_window_t4_ParamLimits

0xc590,	// (0x00098858) popup_call2_audio_in_window_t4

0xc5a2,	// (0x0009886a) popup_call2_audio_in_window_t5_ParamLimits

0xc5a2,	// (0x0009886a) popup_call2_audio_in_window_t5

0xc5b7,	// (0x0009887f) popup_call2_audio_in_window_t6_ParamLimits

0xc5b7,	// (0x0009887f) popup_call2_audio_in_window_t6

0x0005,

0xf56c,	// (0x0009b834) popup_call2_audio_in_window_t_ParamLimits

0xf56c,	// (0x0009b834) popup_call2_audio_in_window_t

0x9fcf,	// (0x00096297) bg_popup_call2_in_pane_g1

0xc6d0,	// (0x00098998) popup_cale_lunar_info_window_t4

0x0003,

0xf5d4,	// (0x0009b89c) popup_cale_lunar_info_window_t

0x9fd7,	// (0x0009629f) bg_popup_call2_rect_pane_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_call2_rect_pane

0x9d7c,	// (0x00096044) call2_cli_visual_graphic_pane

0x9d7c,	// (0x00096044) call2_cli_visual_text_pane

0xa3ac,	// (0x00096674) smil_status_volume_pane_g3

0x0002,

0xa137,	// (0x000963ff) call2_cli_visual_graphic_pane_g1

0xa137,	// (0x000963ff) call2_cli_visual_graphic_pane_g2

0xa137,	// (0x000963ff) call2_cli_visual_graphic_pane_g3

0x0002,

0xf579,	// (0x0009b841) call2_cli_visual_graphic_pane_g

0xc5cc,	// (0x00098894) bg_popup_call2_rect_pane_g1

0xa1df,	// (0x000964a7) bg_popup_call2_rect_pane_g2

0xc5d4,	// (0x0009889c) bg_popup_call2_rect_pane_g3

0xc5dc,	// (0x000988a4) bg_popup_call2_rect_pane_g4

0xc5e4,	// (0x000988ac) bg_popup_call2_rect_pane_g5

0xc5ec,	// (0x000988b4) bg_popup_call2_rect_pane_g6

0xc5f4,	// (0x000988bc) bg_popup_call2_rect_pane_g7

0xc5fc,	// (0x000988c4) bg_popup_call2_rect_pane_g8

0xc604,	// (0x000988cc) bg_popup_call2_rect_pane_g9

0x0008,

0xf580,	// (0x0009b848) bg_popup_call2_rect_pane_g

0xc60c,	// (0x000988d4) bg_popup_call2_bubble_pane_g1

0xc614,	// (0x000988dc) bg_popup_call2_bubble_pane_g2

0xc61c,	// (0x000988e4) bg_popup_call2_bubble_pane_g3

0xc624,	// (0x000988ec) bg_popup_call2_bubble_pane_g4

0xc62c,	// (0x000988f4) bg_popup_call2_bubble_pane_g5

0xc634,	// (0x000988fc) bg_popup_call2_bubble_pane_g6

0xc63c,	// (0x00098904) bg_popup_call2_bubble_pane_g7

0xc644,	// (0x0009890c) bg_popup_call2_bubble_pane_g8

0xc64c,	// (0x00098914) bg_popup_call2_bubble_pane_g9

0x0008,

0xf593,	// (0x0009b85b) bg_popup_call2_bubble_pane_g

0x1325,	// (0x0008d5ed) aid_cale_week_size_cell_pane

0x1c0e,	// (0x0008ded6) aid_cams_cif_uncrop_pane_ParamLimits

0x1c0e,	// (0x0008ded6) aid_cams_cif_uncrop_pane

0x1dc7,	// (0x0008e08f) aid_cams_size_cell_ParamLimits

0x1dc7,	// (0x0008e08f) aid_cams_size_cell

0x1ddb,	// (0x0008e0a3) grid_cams_pane_ParamLimits

0x1df5,	// (0x0008e0bd) linegrid_cams_pane_ParamLimits

0x1ed1,	// (0x0008e199) call_video_pane_t1

0x1eeb,	// (0x0008e1b3) call_video_pane_t2

0x0001,

0xf279,	// (0x0009b541) call_video_pane_t

0x231f,	// (0x0008e5e7) aid_cale_month_size_cell_pane_ParamLimits

0x231f,	// (0x0008e5e7) aid_cale_month_size_cell_pane

0xf61d,	// (0x0009b8e5) smil_status_volume_pane_g

0xa3b9,	// (0x00096681) volume_smil_pane_ParamLimits

0x991c,	// (0x00095be4) aid_popup2_width_pane

0x127f,	// (0x0008d547) cell_qdial_pane_g4_ParamLimits

0x127f,	// (0x0008d547) cell_qdial_pane_g4

0x32ba,	// (0x0008f582) aid_blid_cardinal_pane_ParamLimits

0x32c6,	// (0x0008f58e) aid_blid_destination_pane_ParamLimits

0x32c6,	// (0x0008f58e) aid_blid_destination_pane

0x9fd7,	// (0x0009629f) bg_popup_call_poc_act_pane_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_call_poc_act_pane

0x9fd7,	// (0x0009629f) bg_popup_call_poc_inact_pane_ParamLimits

0x9fd7,	// (0x0009629f) bg_popup_call_poc_inact_pane

0xc654,	// (0x0009891c) bg_popup_call_poc_act_pane_g1

0xc65c,	// (0x00098924) bg_popup_call_poc_act_pane_g2

0xc664,	// (0x0009892c) bg_popup_call_poc_act_pane_g3

0xc624,	// (0x000988ec) bg_popup_call_poc_act_pane_g4

0xc62c,	// (0x000988f4) bg_popup_call_poc_act_pane_g5

0xc66c,	// (0x00098934) bg_popup_call_poc_act_pane_g6

0xc63c,	// (0x00098904) bg_popup_call_poc_act_pane_g7

0xc674,	// (0x0009893c) bg_popup_call_poc_act_pane_g8

0x9d7c,	// (0x00096044) main_usb_pane

0xc7dd,	// (0x00098aa5) popup_cale_lunar_info_window

0x21b4,	// (0x0008e47c) im_reading_pane_t1_ParamLimits

0xab70,	// (0x00096e38) list_im_pane_ParamLimits

0xab81,	// (0x00096e49) scroll_pane_cp07_ParamLimits

0x9d7c,	// (0x00096044) grid_highlight_pane_cp012

0x9fd7,	// (0x0009629f) mup_scale_pane_ParamLimits

0xb552,	// (0x0009781a) main_usb_pane_g1_ParamLimits

0xb552,	// (0x0009781a) main_usb_pane_g1

0x401c,	// (0x000902e4) main_usb_pane_g2_ParamLimits

0x401c,	// (0x000902e4) main_usb_pane_g2

0x0001,

0xf5bd,	// (0x0009b885) main_usb_pane_g_ParamLimits

0xf5bd,	// (0x0009b885) main_usb_pane_g

0x4032,	// (0x000902fa) main_usb_pane_t1_ParamLimits

0x4032,	// (0x000902fa) main_usb_pane_t1

0x4044,	// (0x0009030c) main_usb_pane_t2_ParamLimits

0x4044,	// (0x0009030c) main_usb_pane_t2

0x4056,	// (0x0009031e) main_usb_pane_t3_ParamLimits

0x4056,	// (0x0009031e) main_usb_pane_t3

0x4068,	// (0x00090330) main_usb_pane_t4_ParamLimits

0x4068,	// (0x00090330) main_usb_pane_t4

0x407d,	// (0x00090345) main_usb_pane_t5_ParamLimits

0x407d,	// (0x00090345) main_usb_pane_t5

0x4092,	// (0x0009035a) main_usb_pane_t6_ParamLimits

0x4092,	// (0x0009035a) main_usb_pane_t6

0x0005,

0xf5c2,	// (0x0009b88a) main_usb_pane_t_ParamLimits

0x325b,	// (0x0008f523) aid_text_placing

0x3266,	// (0x0008f52e) main_location2_pane_t1_ParamLimits

0x327a,	// (0x0008f542) main_location2_pane_t2_ParamLimits

0x3290,	// (0x0008f558) main_location2_pane_t3_ParamLimits

0x32a6,	// (0x0008f56e) main_location2_pane_t4_ParamLimits

0x32a6,	// (0x0008f56e) main_location2_pane_t4

0xf3e1,	// (0x0009b6a9) main_location2_pane_t_ParamLimits

0xa013,	// (0x000962db) find_pinb_pane_g2_ParamLimits

0xa013,	// (0x000962db) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0009b3f0) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0009b3f0) find_pinb_pane_g

0xa01f,	// (0x000962e7) find_pinb_pane_t1_ParamLimits

0xa031,	// (0x000962f9) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0009b3f5) find_pinb_pane_t_ParamLimits

0x9d7c,	// (0x00096044) main_call3_pane

0x288a,	// (0x0008eb52) cale_month_day_heading_pane_t1_ParamLimits

0x2910,	// (0x0008ebd8) cale_month_day_heading_pane_t2_ParamLimits

0x29a1,	// (0x0008ec69) cale_month_day_heading_pane_t3_ParamLimits

0x2a32,	// (0x0008ecfa) cale_month_day_heading_pane_t4_ParamLimits

0x2ac3,	// (0x0008ed8b) cale_month_day_heading_pane_t5_ParamLimits

0x2b5c,	// (0x0008ee24) cale_month_day_heading_pane_t6_ParamLimits

0x2bfd,	// (0x0008eec5) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0009b579) cale_month_day_heading_pane_t_ParamLimits

0x2f61,	// (0x0008f229) smil_status_volume_pane

0x3ad9,	// (0x0008fda1) postcard_address_pane_ParamLimits

0x3ad9,	// (0x0008fda1) postcard_address_pane

0x3aef,	// (0x0008fdb7) postcard_message_pane_ParamLimits

0x3aef,	// (0x0008fdb7) postcard_message_pane

0x3ff8,	// (0x000902c0) call2_cli_visual_pane_t1_ParamLimits

0x3ff8,	// (0x000902c0) call2_cli_visual_pane_t1

0x4885,	// (0x00090b4d) postcard_message_pane_t1_ParamLimits

0x4885,	// (0x00090b4d) postcard_message_pane_t1

0x486e,	// (0x00090b36) postcard_address_pane_t1_ParamLimits

0x486e,	// (0x00090b36) postcard_address_pane_t1

0x485a,	// (0x00090b22) popup_call3_audio_in_window_ParamLimits

0x485a,	// (0x00090b22) popup_call3_audio_in_window

0x46df,	// (0x000909a7) bg_popup_call3_in_pane_ParamLimits

0x46df,	// (0x000909a7) bg_popup_call3_in_pane

0x475b,	// (0x00090a23) popup_call3_audio_in_window_g1_ParamLimits

0x475b,	// (0x00090a23) popup_call3_audio_in_window_g1

0x477b,	// (0x00090a43) popup_call3_audio_in_window_g2_ParamLimits

0x477b,	// (0x00090a43) popup_call3_audio_in_window_g2

0x479b,	// (0x00090a63) popup_call3_audio_in_window_g3_ParamLimits

0x479b,	// (0x00090a63) popup_call3_audio_in_window_g3

0x0003,

0xf624,	// (0x0009b8ec) popup_call3_audio_in_window_g_ParamLimits

0xf624,	// (0x0009b8ec) popup_call3_audio_in_window_g

0x47cc,	// (0x00090a94) popup_call3_audio_in_window_t1_ParamLimits

0x47cc,	// (0x00090a94) popup_call3_audio_in_window_t1

0x480a,	// (0x00090ad2) popup_call3_audio_in_window_t2_ParamLimits

0x480a,	// (0x00090ad2) popup_call3_audio_in_window_t2

0x4848,	// (0x00090b10) popup_call3_audio_in_window_t3_ParamLimits

0x4848,	// (0x00090b10) popup_call3_audio_in_window_t3

0x0002,

0xf62d,	// (0x0009b8f5) popup_call3_audio_in_window_t_ParamLimits

0xf62d,	// (0x0009b8f5) popup_call3_audio_in_window_t

0xb3ae,	// (0x00097676) bg_popup_call3_rect_pane

0xc5cc,	// (0x00098894) bg_popup_call3_rect_pane_g1

0xa1df,	// (0x000964a7) bg_popup_call3_rect_pane_g2

0xc5d4,	// (0x0009889c) bg_popup_call3_rect_pane_g3

0xc5dc,	// (0x000988a4) bg_popup_call3_rect_pane_g4

0xc5e4,	// (0x000988ac) bg_popup_call3_rect_pane_g5

0xc5ec,	// (0x000988b4) bg_popup_call3_rect_pane_g6

0xc5f4,	// (0x000988bc) bg_popup_call3_rect_pane_g7

0x36c0,	// (0x0008f988) mup_visualizer_osc_pane

0xb47b,	// (0x00097743) mup_visualizer_spec_pane

0x470f,	// (0x000909d7) call3_video_qcif_pane_ParamLimits

0x470f,	// (0x000909d7) call3_video_qcif_pane

0x4722,	// (0x000909ea) call3_video_qcif_uncrop_pane_ParamLimits

0x4722,	// (0x000909ea) call3_video_qcif_uncrop_pane

0x4732,	// (0x000909fa) call3_video_subqcif_pane_ParamLimits

0x4732,	// (0x000909fa) call3_video_subqcif_pane

0x4748,	// (0x00090a10) call3_video_subqcif_uncrop_pane_ParamLimits

0x4748,	// (0x00090a10) call3_video_subqcif_uncrop_pane

0x47bb,	// (0x00090a83) popup_call3_audio_in_window_g4_ParamLimits

0x47bb,	// (0x00090a83) popup_call3_audio_in_window_g4

0x46ce,	// (0x00090996) mup_spec_half_pane

0x46d7,	// (0x0009099f) mup_spec_half_pane_cp

0xc878,	// (0x00098b40) mup_osc_middle_pane

0xc881,	// (0x00098b49) mup_visualizer_osc_pane_g1

0x46ae,	// (0x00090976) mup_spec_bar_pane_ParamLimits

0x46ae,	// (0x00090976) mup_spec_bar_pane

0xc865,	// (0x00098b2d) mup_spec_bar_pane_g1

0xc86f,	// (0x00098b37) mup_spec_bar_pane_g2

0x0001,

0xf618,	// (0x0009b8e0) mup_spec_bar_pane_g

0x1325,	// (0x0008d5ed) aid_cale_week_size_cell_pane_ParamLimits

0x133f,	// (0x0008d607) bg_cale_heading_pane_ParamLimits

0xa25b,	// (0x00096523) bg_cale_pane_cp01_ParamLimits

0x1364,	// (0x0008d62c) cale_week_corner_pane_ParamLimits

0x1383,	// (0x0008d64b) cale_week_day_heading_pane_ParamLimits

0x13ad,	// (0x0008d675) cale_week_scroll_pane_g1_ParamLimits

0x13cd,	// (0x0008d695) cale_week_scroll_pane_g2_ParamLimits

0x13e5,	// (0x0008d6ad) cale_week_scroll_pane_g3_ParamLimits

0x13fd,	// (0x0008d6c5) cale_week_scroll_pane_g4_ParamLimits

0x1415,	// (0x0008d6dd) cale_week_scroll_pane_g5_ParamLimits

0x1431,	// (0x0008d6f9) cale_week_scroll_pane_g6_ParamLimits

0x144d,	// (0x0008d715) cale_week_scroll_pane_g7_ParamLimits

0x146d,	// (0x0008d735) cale_week_scroll_pane_g8_ParamLimits

0x148d,	// (0x0008d755) cale_week_scroll_pane_g9_ParamLimits

0x14aa,	// (0x0008d772) cale_week_scroll_pane_g10_ParamLimits

0x14c7,	// (0x0008d78f) cale_week_scroll_pane_g11_ParamLimits

0x14e4,	// (0x0008d7ac) cale_week_scroll_pane_g12_ParamLimits

0x1501,	// (0x0008d7c9) cale_week_scroll_pane_g13_ParamLimits

0x151e,	// (0x0008d7e6) cale_week_scroll_pane_g14_ParamLimits

0x1543,	// (0x0008d80b) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0009b481) cale_week_scroll_pane_g_ParamLimits

0x1568,	// (0x0008d830) cale_week_time_pane_ParamLimits

0x1588,	// (0x0008d850) grid_cale_week_pane_ParamLimits

0xa279,	// (0x00096541) listscroll_cale_week_pane_t1

0xa28b,	// (0x00096553) scroll_pane_cp08_ParamLimits

0x2384,	// (0x0008e64c) cale_month_corner_pane_ParamLimits

0xada1,	// (0x00097069) cale_month_pane_t1

0x2818,	// (0x0008eae0) cale_month_week_pane_ParamLimits

0x3089,	// (0x0008f351) popup_call_status_window_g1_ParamLimits

0x309d,	// (0x0008f365) popup_call_status_window_g2_ParamLimits

0x30b1,	// (0x0008f379) popup_call_status_window_g3_ParamLimits

0xf368,	// (0x0009b630) popup_call_status_window_g_ParamLimits

0xb150,	// (0x00097418) aid_call2_pane

0xff7c,	// (0x0008c244) msg_header_pane_g1

0x3ad9,	// (0x0008fda1) postcard_address2_pane_ParamLimits

0x3ad9,	// (0x0008fda1) postcard_address2_pane

0x3aef,	// (0x0008fdb7) postcard_message2_pane_ParamLimits

0x3aef,	// (0x0008fdb7) postcard_message2_pane

0x465e,	// (0x00090926) message2_row_pane_ParamLimits

0x465e,	// (0x00090926) message2_row_pane

0x467b,	// (0x00090943) address2_row_pane_ParamLimits

0x467b,	// (0x00090943) address2_row_pane

0xc833,	// (0x00098afb) postcard_message2_row_pane_g1

0xc83b,	// (0x00098b03) postcard_message2_row_pane_t1

0xc833,	// (0x00098afb) address2_row_pane_g1

0xc83b,	// (0x00098b03) address2_row_pane_t1

0x1a94,	// (0x0008dd5c) aid_size_cell_vorec

0x9d7c,	// (0x00096044) main_rss_pane

0x468e,	// (0x00090956) rss_list_single_pane_ParamLimits

0x468e,	// (0x00090956) rss_list_single_pane

0xc849,	// (0x00098b11) rss_list_single_pane_t1

0xc857,	// (0x00098b1f) rss_list_single_pane_t2

0x0001,

0xf613,	// (0x0009b8db) rss_list_single_pane_t

0x9d7c,	// (0x00096044) main_camera2_pane

0x9d7c,	// (0x00096044) main_video2_pane

0x48f4,	// (0x00090bbc) cams_zoom_pane_cp2_ParamLimits

0x48f4,	// (0x00090bbc) cams_zoom_pane_cp2

0x490b,	// (0x00090bd3) image2_vga_pane_ParamLimits

0x490b,	// (0x00090bd3) image2_vga_pane

0x4953,	// (0x00090c1b) main_camera2_pane_g1_ParamLimits

0x4953,	// (0x00090c1b) main_camera2_pane_g1

0x4973,	// (0x00090c3b) main_camera2_pane_g2_ParamLimits

0x4973,	// (0x00090c3b) main_camera2_pane_g2

0x498a,	// (0x00090c52) main_camera2_pane_g3_ParamLimits

0x498a,	// (0x00090c52) main_camera2_pane_g3

0x49a1,	// (0x00090c69) main_camera2_pane_g4_ParamLimits

0x49a1,	// (0x00090c69) main_camera2_pane_g4

0x49b8,	// (0x00090c80) main_camera2_pane_g5_ParamLimits

0x49b8,	// (0x00090c80) main_camera2_pane_g5

0x49cf,	// (0x00090c97) main_camera2_pane_g6_ParamLimits

0x49cf,	// (0x00090c97) main_camera2_pane_g6

0x49e6,	// (0x00090cae) main_camera2_pane_g7_ParamLimits

0x49e6,	// (0x00090cae) main_camera2_pane_g7

0x49fd,	// (0x00090cc5) main_camera2_pane_g8_ParamLimits

0x49fd,	// (0x00090cc5) main_camera2_pane_g8

0x0008,

0xf634,	// (0x0009b8fc) main_camera2_pane_g_ParamLimits

0xf634,	// (0x0009b8fc) main_camera2_pane_g

0x4a2b,	// (0x00090cf3) main_camera2_pane_t1_ParamLimits

0x4a2b,	// (0x00090cf3) main_camera2_pane_t1

0x4a60,	// (0x00090d28) main_camera2_pane_t2_ParamLimits

0x4a60,	// (0x00090d28) main_camera2_pane_t2

0x4a7d,	// (0x00090d45) main_camera2_pane_t3_ParamLimits

0x4a7d,	// (0x00090d45) main_camera2_pane_t3

0x4adb,	// (0x00090da3) main_camera2_pane_t4_ParamLimits

0x4adb,	// (0x00090da3) main_camera2_pane_t4

0x0006,

0xf647,	// (0x0009b90f) main_camera2_pane_t_ParamLimits

0xf647,	// (0x0009b90f) main_camera2_pane_t

0x4b64,	// (0x00090e2c) cams_zoom_pane_cp4_ParamLimits

0x4b64,	// (0x00090e2c) cams_zoom_pane_cp4

0x4b7a,	// (0x00090e42) image2_cif_pane_ParamLimits

0x4b7a,	// (0x00090e42) image2_cif_pane

0x4ba5,	// (0x00090e6d) image2_subqcif_pane_ParamLimits

0x4ba5,	// (0x00090e6d) image2_subqcif_pane

0x4bc0,	// (0x00090e88) main_video2_pane_g1_ParamLimits

0x4bc0,	// (0x00090e88) main_video2_pane_g1

0x4bda,	// (0x00090ea2) main_video2_pane_g2_ParamLimits

0x4bda,	// (0x00090ea2) main_video2_pane_g2

0x4bf0,	// (0x00090eb8) main_video2_pane_g3_ParamLimits

0x4bf0,	// (0x00090eb8) main_video2_pane_g3

0x4c06,	// (0x00090ece) main_video2_pane_g4_ParamLimits

0x4c06,	// (0x00090ece) main_video2_pane_g4

0x4c1c,	// (0x00090ee4) main_video2_pane_g5_ParamLimits

0x4c1c,	// (0x00090ee4) main_video2_pane_g5

0x4c32,	// (0x00090efa) main_video2_pane_g6_ParamLimits

0x4c32,	// (0x00090efa) main_video2_pane_g6

0x0005,

0xf656,	// (0x0009b91e) main_video2_pane_g_ParamLimits

0xf656,	// (0x0009b91e) main_video2_pane_g

0x4c4c,	// (0x00090f14) main_video2_pane_t1_ParamLimits

0x4c4c,	// (0x00090f14) main_video2_pane_t1

0x4c70,	// (0x00090f38) main_video2_pane_t2_ParamLimits

0x4c70,	// (0x00090f38) main_video2_pane_t2

0x4cc0,	// (0x00090f88) main_video2_pane_t3_ParamLimits

0x4cc0,	// (0x00090f88) main_video2_pane_t3

0x0002,

0xf663,	// (0x0009b92b) main_video2_pane_t_ParamLimits

0xf663,	// (0x0009b92b) main_video2_pane_t

0x4150,	// (0x00090418) call_muted_g2

0x0001,

0xf605,	// (0x0009b8cd) call_muted_g

0x9d7c,	// (0x00096044) main_mup2_pane

0x4d08,	// (0x00090fd0) main_mup2_pane_g1_ParamLimits

0x4d08,	// (0x00090fd0) main_mup2_pane_g1

0x4d14,	// (0x00090fdc) main_mup2_pane_g2_ParamLimits

0x4d14,	// (0x00090fdc) main_mup2_pane_g2

0xa424,	// (0x000966ec) main_mup_pane_g13_cp1

0xa42c,	// (0x000966f4) mup_volume_pane_cp1

0x4d32,	// (0x00090ffa) main_mup2_pane_g4_ParamLimits

0x4d32,	// (0x00090ffa) main_mup2_pane_g4

0x4d44,	// (0x0009100c) main_mup2_pane_g5_ParamLimits

0x4d44,	// (0x0009100c) main_mup2_pane_g5

0x4d56,	// (0x0009101e) main_mup2_pane_g6_ParamLimits

0x4d56,	// (0x0009101e) main_mup2_pane_g6

0x4d68,	// (0x00091030) main_mup2_pane_g7_ParamLimits

0x4d68,	// (0x00091030) main_mup2_pane_g7

0x0006,

0xf66a,	// (0x0009b932) main_mup2_pane_g_ParamLimits

0xf66a,	// (0x0009b932) main_mup2_pane_g

0x4d80,	// (0x00091048) main_mup2_pane_t1_ParamLimits

0x4d80,	// (0x00091048) main_mup2_pane_t1

0x4d96,	// (0x0009105e) main_mup2_pane_t2_ParamLimits

0x4d96,	// (0x0009105e) main_mup2_pane_t2

0x4dac,	// (0x00091074) main_mup2_pane_t3_ParamLimits

0x4dac,	// (0x00091074) main_mup2_pane_t3

0x4dc2,	// (0x0009108a) main_mup2_pane_t4_ParamLimits

0x4dc2,	// (0x0009108a) main_mup2_pane_t4

0x4dda,	// (0x000910a2) main_mup2_pane_t5_ParamLimits

0x4dda,	// (0x000910a2) main_mup2_pane_t5

0x4df2,	// (0x000910ba) main_mup2_pane_t6_ParamLimits

0x4df2,	// (0x000910ba) main_mup2_pane_t6

0x0005,

0xf679,	// (0x0009b941) main_mup2_pane_t_ParamLimits

0xf679,	// (0x0009b941) main_mup2_pane_t

0x4e22,	// (0x000910ea) mup2_visualizer_pane_ParamLimits

0x4e22,	// (0x000910ea) mup2_visualizer_pane

0x4e50,	// (0x00091118) mup_progress_pane_cp_ParamLimits

0x4e50,	// (0x00091118) mup_progress_pane_cp

0xa40f,	// (0x000966d7) mup_volume_pane_cp_ParamLimits

0xa40f,	// (0x000966d7) mup_volume_pane_cp

0x4e66,	// (0x0009112e) mup2_visualizer_pane_g1_ParamLimits

0x4e66,	// (0x0009112e) mup2_visualizer_pane_g1

0xc8b8,	// (0x00098b80) mup2_visualizer_pane_g2_ParamLimits

0xc8b8,	// (0x00098b80) mup2_visualizer_pane_g2

0x4e7d,	// (0x00091145) mup2_visualizer_pane_g3_ParamLimits

0x4e7d,	// (0x00091145) mup2_visualizer_pane_g3

0x0002,

0xf686,	// (0x0009b94e) mup2_visualizer_pane_g_ParamLimits

0xf686,	// (0x0009b94e) mup2_visualizer_pane_g

0xb69b,	// (0x00097963) aid_size_cell_fmradio

0x4300,	// (0x000905c8) aid_height_parent_landcape

0xabff,	// (0x00096ec7) wml_content_pane_cp

0xac07,	// (0x00096ecf) wml_tabs_pane

0xac10,	// (0x00096ed8) popup_wml_miniature_window

0xac18,	// (0x00096ee0) scroll_pane_cp021

0xac2c,	// (0x00096ef4) wml_content_pane_comp8

0x9d7c,	// (0x00096044) bg_popup_sub_pane_cp05

0xc8d6,	// (0x00098b9e) popup_wml_miniature_window_g1

0xc8de,	// (0x00098ba6) wml_miniature_view_pane

0x4e89,	// (0x00091151) aid_size_wml_view

0x4e91,	// (0x00091159) wml_miniature_view_pane_g1

0x4e9a,	// (0x00091162) wml_miniature_view_pane_g2

0x4ea3,	// (0x0009116b) wml_miniature_view_pane_g3

0x4eab,	// (0x00091173) wml_miniature_view_pane_g4

0x4eb3,	// (0x0009117b) wml_miniature_view_pane_g5

0x4ebb,	// (0x00091183) wml_miniature_view_pane_g6

0x4ec3,	// (0x0009118b) wml_miniature_view_pane_g7

0x4ecb,	// (0x00091193) wml_miniature_view_pane_g8

0x0007,

0xf68d,	// (0x0009b955) wml_miniature_view_pane_g

0xc8e6,	// (0x00098bae) background_graphic_ParamLimits

0xc8e6,	// (0x00098bae) background_graphic

0xc8f2,	// (0x00098bba) wml_tabs_2_pane

0xc8fb,	// (0x00098bc3) wml_tabs_3_pane_ParamLimits

0xc8fb,	// (0x00098bc3) wml_tabs_3_pane

0xc90d,	// (0x00098bd5) wml_tabs_4_pane_ParamLimits

0xc90d,	// (0x00098bd5) wml_tabs_4_pane

0xc923,	// (0x00098beb) wml_tabs_5_pane_ParamLimits

0xc923,	// (0x00098beb) wml_tabs_5_pane

0xc93d,	// (0x00098c05) wml_tabs_pane_g2_ParamLimits

0xc93d,	// (0x00098c05) wml_tabs_pane_g2

0xc951,	// (0x00098c19) wml_tabs_pane_g3_ParamLimits

0xc951,	// (0x00098c19) wml_tabs_pane_g3

0x4ed3,	// (0x0009119b) wml_tabs_2_active_pane_ParamLimits

0x4ed3,	// (0x0009119b) wml_tabs_2_active_pane

0x4ee7,	// (0x000911af) wml_tabs_2_passive_pane_ParamLimits

0x4ee7,	// (0x000911af) wml_tabs_2_passive_pane

0x4efb,	// (0x000911c3) wml_tabs_3_active_pane_cp_ParamLimits

0x4efb,	// (0x000911c3) wml_tabs_3_active_pane_cp

0x4f10,	// (0x000911d8) wml_tabs_3_passive_pane_ParamLimits

0x4f10,	// (0x000911d8) wml_tabs_3_passive_pane

0x4f23,	// (0x000911eb) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f23,	// (0x000911eb) wml_tabs_3_passive_pane_cp

0x4f3a,	// (0x00091202) tabs_4_active_pane

0x4f42,	// (0x0009120a) tabs_4_passive_pane

0x4f4c,	// (0x00091214) tabs_4_passive_pane_cp

0x4f54,	// (0x0009121c) tabs_4_passive_pane_cp2

0x4014,	// (0x000902dc) aid_height_text

0x3692,	// (0x0008f95a) mup_volume_cont_pane_ParamLimits

0x3692,	// (0x0008f95a) mup_volume_cont_pane

0x0f0c,	// (0x0008d1d4) aid_size_cell_pinb

0x0f16,	// (0x0008d1de) aid_size_list_pinb

0x4e3c,	// (0x00091104) mup2_volume_cont_pane_ParamLimits

0x4e3c,	// (0x00091104) mup2_volume_cont_pane

0xa3fb,	// (0x000966c3) mup2_volume_cont_pane_g1_ParamLimits

0xa3fb,	// (0x000966c3) mup2_volume_cont_pane_g1

0x0bba,	// (0x0008ce82) aid_size_cell_touch_ParamLimits

0x0bba,	// (0x0008ce82) aid_size_cell_touch

0x0dfc,	// (0x0008d0c4) touch_pane_ParamLimits

0x0dfc,	// (0x0008d0c4) touch_pane

0x990a,	// (0x00095bd2) main_rss2_pane

0xc96e,	// (0x00098c36) listscroll_rss2_pane

0xc977,	// (0x00098c3f) rss2_navigation_pane

0xc97f,	// (0x00098c47) list_rss2_pane

0xb274,	// (0x0009753c) scroll_pane_cp22

0xc987,	// (0x00098c4f) rss2_navigation_pane_g1

0xc990,	// (0x00098c58) rss2_navigation_pane_g2

0xc998,	// (0x00098c60) rss2_navigation_pane_g3

0x0002,

0xf69e,	// (0x0009b966) rss2_navigation_pane_g

0xc9a0,	// (0x00098c68) rss2_navigation_pane_t1

0x4f5e,	// (0x00091226) rss2_list_single_pane_ParamLimits

0x4f5e,	// (0x00091226) rss2_list_single_pane

0xc9ae,	// (0x00098c76) rss2_list_single_pane_t2

0xc9bc,	// (0x00098c84) rss2_list_single_pane_t3_ParamLimits

0xc9bc,	// (0x00098c84) rss2_list_single_pane_t3

0xc9d9,	// (0x00098ca1) rss2_list_single_pane_t4

0x2f49,	// (0x0008f211) smil_status_pane_g1

0x995b,	// (0x00095c23) main_image2_pane_ParamLimits

0x995b,	// (0x00095c23) main_image2_pane

0x4a14,	// (0x00090cdc) main_camera2_pane_g9_ParamLimits

0x4a14,	// (0x00090cdc) main_camera2_pane_g9

0x4b30,	// (0x00090df8) main_camera2_pane_t5_ParamLimits

0x4b30,	// (0x00090df8) main_camera2_pane_t5

0xa3d0,	// (0x00096698) main_camera2_pane_t6_ParamLimits

0xa3d0,	// (0x00096698) main_camera2_pane_t6

0x4f74,	// (0x0009123c) main_image2_pane_g1_ParamLimits

0x4f74,	// (0x0009123c) main_image2_pane_g1

0x3d2e,	// (0x0008fff6) smil2_video_pane_ParamLimits

0x3d2e,	// (0x0008fff6) smil2_video_pane

0x0bfa,	// (0x0008cec2) aid_zoom_text_primary_cp

0x9951,	// (0x00095c19) popup_preview_fixed_window

0xab68,	// (0x00096e30) im_reading_pane_g1

0x48e6,	// (0x00090bae) cams2_bc_adjust_pane_cp_ParamLimits

0x48e6,	// (0x00090bae) cams2_bc_adjust_pane_cp

0x4b56,	// (0x00090e1e) cams2_bc_adjust_pane_ParamLimits

0x4b56,	// (0x00090e1e) cams2_bc_adjust_pane

0xa434,	// (0x000966fc) cams2_bc_adjust_pane_g1

0xa43c,	// (0x00096704) cams2_slider_pane

0xa445,	// (0x0009670d) cams2_slider_pane_g1

0xa44e,	// (0x00096716) cams2_slider_pane_g2

0x0006,

0xf6a5,	// (0x0009b96d) cams2_slider_pane_g

0x1006,	// (0x0008d2ce) calc_display_pane_ParamLimits

0x102e,	// (0x0008d2f6) calc_paper_pane_ParamLimits

0x1051,	// (0x0008d319) grid_calc_pane_ParamLimits

0xa33b,	// (0x00096603) popup_clock_digital_window_t1_ParamLimits

0xb638,	// (0x00097900) main_image_pane_t1

0x0fe8,	// (0x0008d2b0) aid_size_cell_calc_ParamLimits

0x0fe8,	// (0x0008d2b0) aid_size_cell_calc

0x4346,	// (0x0009060e) popup_blid_sat_info2_window_ParamLimits

0x4346,	// (0x0009060e) popup_blid_sat_info2_window

0xc9ef,	// (0x00098cb7) aid_size_cell_blid

0xc9f7,	// (0x00098cbf) bg_popup_window_pane_cp07

0xca1a,	// (0x00098ce2) grid_popup_blid_pane

0xca24,	// (0x00098cec) heading_pane_cp05_ParamLimits

0xca24,	// (0x00098cec) heading_pane_cp05

0xcaee,	// (0x00098db6) cell_popup_blid_pane_ParamLimits

0xcaee,	// (0x00098db6) cell_popup_blid_pane

0xcb18,	// (0x00098de0) cell_popup_blid_pane_g1

0xcb20,	// (0x00098de8) cell_popup_blid_pane_t1

0x4e0c,	// (0x000910d4) mup2_indicator_pane_ParamLimits

0x4e0c,	// (0x000910d4) mup2_indicator_pane

0xb3ae,	// (0x00097676) mup2_visualizer_osc_pane

0xc8c4,	// (0x00098b8c) mup2_visualizer_spec_pane_ParamLimits

0xc8c4,	// (0x00098b8c) mup2_visualizer_spec_pane

0x4f8a,	// (0x00091252) mup2_spec_half_pane

0x4f93,	// (0x0009125b) mup2_spec_half_pane_cp

0x4f9b,	// (0x00091263) mup2_spec_bar_pane_ParamLimits

0x4f9b,	// (0x00091263) mup2_spec_bar_pane

0xc865,	// (0x00098b2d) mup2_spec_bar_pane_g1

0xc86f,	// (0x00098b37) mup2_spec_bar_pane_g2

0x0001,

0xf618,	// (0x0009b8e0) mup2_spec_bar_pane_g

0x4fbb,	// (0x00091283) mup2_osc_middle_pane

0xc881,	// (0x00098b49) mup2_visualizer_osc_pane_g1

0x9989,	// (0x00095c51) popup_number_entry_window_t1_ParamLimits

0x999c,	// (0x00095c64) popup_number_entry_window_t2_ParamLimits

0x99ae,	// (0x00095c76) popup_number_entry_window_t3_ParamLimits

0x0e4e,	// (0x0008d116) popup_number_entry_window_t5_ParamLimits

0x0e4e,	// (0x0008d116) popup_number_entry_window_t5

0xf0d3,	// (0x0009b39b) popup_number_entry_window_t_ParamLimits

0x99c0,	// (0x00095c88) text_title_cp2_ParamLimits

0xa37a,	// (0x00096642) aid_hotspot_pointer_text2_pane

0xa3a0,	// (0x00096668) main_viewer_pane_g9_ParamLimits

0xa3a0,	// (0x00096668) main_viewer_pane_g9

0xada1,	// (0x00097069) cale_month_pane_t1_ParamLimits

0xadc7,	// (0x0009708f) bg_cale_pane_ParamLimits

0xaddf,	// (0x000970a7) list_cale_pane_ParamLimits

0xadf0,	// (0x000970b8) listscroll_cale_day_pane_t1

0xae02,	// (0x000970ca) scroll_pane_cp09_ParamLimits

0x36c8,	// (0x0008f990) main_mup_eq_pane_t1_ParamLimits

0x36c8,	// (0x0008f990) main_mup_eq_pane_t1

0x36e4,	// (0x0008f9ac) main_mup_eq_pane_t2_ParamLimits

0x36e4,	// (0x0008f9ac) main_mup_eq_pane_t2

0x3700,	// (0x0008f9c8) main_mup_eq_pane_t3_ParamLimits

0x3700,	// (0x0008f9c8) main_mup_eq_pane_t3

0x371e,	// (0x0008f9e6) main_mup_eq_pane_t4_ParamLimits

0x371e,	// (0x0008f9e6) main_mup_eq_pane_t4

0x373c,	// (0x0008fa04) main_mup_eq_pane_t5_ParamLimits

0x373c,	// (0x0008fa04) main_mup_eq_pane_t5

0x375a,	// (0x0008fa22) main_mup_eq_pane_t6_ParamLimits

0x375a,	// (0x0008fa22) main_mup_eq_pane_t6

0x3770,	// (0x0008fa38) main_mup_eq_pane_t7_ParamLimits

0x3770,	// (0x0008fa38) main_mup_eq_pane_t7

0x3786,	// (0x0008fa4e) main_mup_eq_pane_t8_ParamLimits

0x3786,	// (0x0008fa4e) main_mup_eq_pane_t8

0x379c,	// (0x0008fa64) main_mup_eq_pane_t9_ParamLimits

0x379c,	// (0x0008fa64) main_mup_eq_pane_t9

0x37b8,	// (0x0008fa80) main_mup_eq_pane_t10_ParamLimits

0x37b8,	// (0x0008fa80) main_mup_eq_pane_t10

0x0009,

0xf467,	// (0x0009b72f) main_mup_eq_pane_t_ParamLimits

0xf467,	// (0x0009b72f) main_mup_eq_pane_t

0x388d,	// (0x0008fb55) mup_equalizer_pane_cp5_ParamLimits

0x38a5,	// (0x0008fb6d) mup_equalizer_pane_cp6_ParamLimits

0x38bd,	// (0x0008fb85) mup_equalizer_pane_cp7_ParamLimits

0x990a,	// (0x00095bd2) main_gallery_pane

0xc88a,	// (0x00098b52) smil2_volume_pane

0xc892,	// (0x00098b5a) smil_status_volume_pane_g1_ParamLimits

0xc8a5,	// (0x00098b6d) smil_status_volume_pane_g2_ParamLimits

0xa3ac,	// (0x00096674) smil_status_volume_pane_g3_ParamLimits

0xf61d,	// (0x0009b8e5) smil_status_volume_pane_g_ParamLimits

0xc9f7,	// (0x00098cbf) bg_popup_window_pane_cp07_ParamLimits

0xca05,	// (0x00098ccd) blid_firmament_pane

0x4fc4,	// (0x0009128c) aid_size_cell_gallery_ParamLimits

0x4fc4,	// (0x0009128c) aid_size_cell_gallery

0x4fda,	// (0x000912a2) grid_gallery_pane_ParamLimits

0x4fda,	// (0x000912a2) grid_gallery_pane

0x4ff5,	// (0x000912bd) cell_gallery_pane_ParamLimits

0x4ff5,	// (0x000912bd) cell_gallery_pane

0xcb2e,	// (0x00098df6) bg_cell_gallery_focus_pane_ParamLimits

0xcb2e,	// (0x00098df6) bg_cell_gallery_focus_pane

0xcb40,	// (0x00098e08) cell_gallery_pane_g1_ParamLimits

0xcb40,	// (0x00098e08) cell_gallery_pane_g1

0x5040,	// (0x00091308) cell_gallery_pane_g2_ParamLimits

0x5040,	// (0x00091308) cell_gallery_pane_g2

0x504d,	// (0x00091315) cell_gallery_pane_g3_ParamLimits

0x504d,	// (0x00091315) cell_gallery_pane_g3

0xcb4c,	// (0x00098e14) cell_gallery_pane_g4_ParamLimits

0xcb4c,	// (0x00098e14) cell_gallery_pane_g4

0x0003,

0xf6cb,	// (0x0009b993) cell_gallery_pane_g_ParamLimits

0xf6cb,	// (0x0009b993) cell_gallery_pane_g

0xcb58,	// (0x00098e20) bg_cell_gallery_focus_pane_g1

0xcb60,	// (0x00098e28) bg_cell_gallery_focus_pane_g2

0xcb68,	// (0x00098e30) bg_cell_gallery_focus_pane_g3

0xcb70,	// (0x00098e38) bg_cell_gallery_focus_pane_g4

0xcb78,	// (0x00098e40) bg_cell_gallery_focus_pane_g5

0xcb80,	// (0x00098e48) bg_cell_gallery_focus_pane_g6

0xcb88,	// (0x00098e50) bg_cell_gallery_focus_pane_g7

0xcb90,	// (0x00098e58) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d4,	// (0x0009b99c) bg_cell_gallery_focus_pane_g

0xcb98,	// (0x00098e60) aid_firma_cardinal

0xcbac,	// (0x00098e74) blid_firmament_pane_t1

0xcbc3,	// (0x00098e8b) blid_firmament_pane_t2

0xcbda,	// (0x00098ea2) blid_firmament_pane_t3

0xcbf1,	// (0x00098eb9) blid_firmament_pane_t4

0x0003,

0xf6e5,	// (0x0009b9ad) blid_firmament_pane_t

0xcc08,	// (0x00098ed0) blid_sat_info_pane

0xcc18,	// (0x00098ee0) blid_sat_info_pane_g1

0xcc18,	// (0x00098ee0) blid_sat_info_pane_g2

0x0001,

0xf6ee,	// (0x0009b9b6) blid_sat_info_pane_g

0xcc22,	// (0x00098eea) blid_sat_info_pane_t1

0xcc30,	// (0x00098ef8) smil2_volume_content_pane

0xcc41,	// (0x00098f09) smil2_volume_pane_g1

0xcc49,	// (0x00098f11) smil2_volume_content_pane_g1

0xcc52,	// (0x00098f1a) smil2_volume_content_pane_g2

0xcc5b,	// (0x00098f23) smil2_volume_content_pane_g3

0xcc64,	// (0x00098f2c) smil2_volume_content_pane_g4

0xcc6d,	// (0x00098f35) smil2_volume_content_pane_g5

0xcc76,	// (0x00098f3e) smil2_volume_content_pane_g6

0xcc7f,	// (0x00098f47) smil2_volume_content_pane_g7

0xcc88,	// (0x00098f50) smil2_volume_content_pane_g8

0xcc91,	// (0x00098f59) smil2_volume_content_pane_g9

0xcc9a,	// (0x00098f62) smil2_volume_content_pane_g10

0x0009,

0xf6f3,	// (0x0009b9bb) smil2_volume_content_pane_g

0x1639,	// (0x0008d901) cale_week_day_heading_pane_t1_ParamLimits

0x1683,	// (0x0008d94b) cale_week_day_heading_pane_t2_ParamLimits

0x16d2,	// (0x0008d99a) cale_week_day_heading_pane_t3_ParamLimits

0x1721,	// (0x0008d9e9) cale_week_day_heading_pane_t4_ParamLimits

0x1770,	// (0x0008da38) cale_week_day_heading_pane_t5_ParamLimits

0x17bf,	// (0x0008da87) cale_week_day_heading_pane_t6_ParamLimits

0x1812,	// (0x0008dada) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0009b4a0) cale_week_day_heading_pane_t_ParamLimits

0xaa0e,	// (0x00096cd6) bg_cale_side_pane_ParamLimits

0x185c,	// (0x0008db24) cale_week_time_pane_t1_ParamLimits

0x1896,	// (0x0008db5e) cale_week_time_pane_t2_ParamLimits

0x18d0,	// (0x0008db98) cale_week_time_pane_t3_ParamLimits

0x190a,	// (0x0008dbd2) cale_week_time_pane_t4_ParamLimits

0x1944,	// (0x0008dc0c) cale_week_time_pane_t5_ParamLimits

0x197e,	// (0x0008dc46) cale_week_time_pane_t6_ParamLimits

0x19b8,	// (0x0008dc80) cale_week_time_pane_t7_ParamLimits

0x19f2,	// (0x0008dcba) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0009b4af) cale_week_time_pane_t_ParamLimits

0x1a30,	// (0x0008dcf8) cell_cale_week_pane_g2_ParamLimits

0xaa0e,	// (0x00096cd6) bg_cale_side_pane_cp01_ParamLimits

0x2ca6,	// (0x0008ef6e) cale_month_week_pane_t1_ParamLimits

0x2cdf,	// (0x0008efa7) cale_month_week_pane_t2_ParamLimits

0x2d18,	// (0x0008efe0) cale_month_week_pane_t3_ParamLimits

0x2d51,	// (0x0008f019) cale_month_week_pane_t4_ParamLimits

0x2d8a,	// (0x0008f052) cale_month_week_pane_t5_ParamLimits

0x2dc3,	// (0x0008f08b) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0009b588) cale_month_week_pane_t_ParamLimits

0xa2bb,	// (0x00096583) cell_cale_month_pane_g1_ParamLimits

0x990a,	// (0x00095bd2) main_cale_event_viewer_pane

0x990a,	// (0x00095bd2) listscroll_cale_event_viewer_pane

0xcca3,	// (0x00098f6b) list_cale_ev_pane

0xccab,	// (0x00098f73) scroll_pane_cp023

0x505a,	// (0x00091322) field_cale_ev_pane_ParamLimits

0x505a,	// (0x00091322) field_cale_ev_pane

0xccb7,	// (0x00098f7f) field_cale_ev_content_pane_ParamLimits

0xccb7,	// (0x00098f7f) field_cale_ev_content_pane

0xccc3,	// (0x00098f8b) field_cale_ev_pane_g1_ParamLimits

0xccc3,	// (0x00098f8b) field_cale_ev_pane_g1

0xcccf,	// (0x00098f97) field_cale_ev_pane_g2_ParamLimits

0xcccf,	// (0x00098f97) field_cale_ev_pane_g2

0xcce7,	// (0x00098faf) field_cale_ev_pane_g3_ParamLimits

0xcce7,	// (0x00098faf) field_cale_ev_pane_g3

0x0002,

0xf708,	// (0x0009b9d0) field_cale_ev_pane_g_ParamLimits

0xf708,	// (0x0009b9d0) field_cale_ev_pane_g

0xccff,	// (0x00098fc7) field_cale_ev_pane_t1_ParamLimits

0xccff,	// (0x00098fc7) field_cale_ev_pane_t1

0x507e,	// (0x00091346) field_cale_ev_content_pane_t1_ParamLimits

0x507e,	// (0x00091346) field_cale_ev_content_pane_t1

0x3939,	// (0x0008fc01) bg_button_pane_cp01

0x1305,	// (0x0008d5cd) listscroll_cale_week_pane_ParamLimits

0x131b,	// (0x0008d5e3) popup_toolbar_window_cp01

0xa279,	// (0x00096541) listscroll_cale_week_pane_t1_ParamLimits

0x2fae,	// (0x0008f276) listscroll_cale_day_pane_ParamLimits

0x2fc6,	// (0x0008f28e) popup_toolbar_window_cp02

0xadf0,	// (0x000970b8) listscroll_cale_day_pane_t1_ParamLimits

0x1305,	// (0x0008d5cd) main_cale_month_pane_ParamLimits

0x45c6,	// (0x0009088e) popup_toolbar_window_cp03_ParamLimits

0x45c6,	// (0x0009088e) popup_toolbar_window_cp03

0x3bec,	// (0x0008feb4) main_image_pane_g2_ParamLimits

0x3bec,	// (0x0008feb4) main_image_pane_g2

0x3bfd,	// (0x0008fec5) main_image_pane_g3_ParamLimits

0x3bfd,	// (0x0008fec5) main_image_pane_g3

0x0002,

0xf4f9,	// (0x0009b7c1) main_image_pane_g_ParamLimits

0xf4f9,	// (0x0009b7c1) main_image_pane_g

0xb638,	// (0x00097900) main_image_pane_t1_ParamLimits

0x3c0e,	// (0x0008fed6) main_image_pane_t2_ParamLimits

0x3c0e,	// (0x0008fed6) main_image_pane_t2

0x3c20,	// (0x0008fee8) main_image_pane_t3_ParamLimits

0x3c20,	// (0x0008fee8) main_image_pane_t3

0x3c48,	// (0x0008ff10) main_image_pane_t4_ParamLimits

0x3c48,	// (0x0008ff10) main_image_pane_t4

0x0003,

0xf500,	// (0x0009b7c8) main_image_pane_t_ParamLimits

0xf500,	// (0x0009b7c8) main_image_pane_t

0x3c68,	// (0x0008ff30) popup_image_details_window_cp01

0x3c72,	// (0x0008ff3a) popup_toobar_trans_pane_cp01_ParamLimits

0x3c72,	// (0x0008ff3a) popup_toobar_trans_pane_cp01

0x4439,	// (0x00090701) popup_image_details_window_ParamLimits

0x4439,	// (0x00090701) popup_image_details_window

0xc7e9,	// (0x00098ab1) popup_image_focus_window

0x48a0,	// (0x00090b68) camera2_autofocus_pane_ParamLimits

0x48a0,	// (0x00090b68) camera2_autofocus_pane

0x990a,	// (0x00095bd2) bg_popup_sub_pane_cp06

0xcd16,	// (0x00098fde) popup_image_focus_window_g1

0xcd1e,	// (0x00098fe6) popup_image_focus_window_g2

0xcd26,	// (0x00098fee) popup_image_focus_window_g3

0xcd2e,	// (0x00098ff6) popup_image_focus_window_g4

0x0003,

0xf70f,	// (0x0009b9d7) popup_image_focus_window_g

0xcd36,	// (0x00098ffe) popup_image_focus_window_t1

0xcd44,	// (0x0009900c) popup_image_focus_window_t2

0xcd54,	// (0x0009901c) popup_image_focus_window_t3

0x0002,

0xf718,	// (0x0009b9e0) popup_image_focus_window_t

0xcd62,	// (0x0009902a) camera2_autofocus_pane_g1

0x995b,	// (0x00095c23) bg_tb_trans_pane_cp01

0xcd70,	// (0x00099038) popup_image_details_window_g1

0xcd83,	// (0x0009904b) popup_image_details_window_g2

0x0002,

0xf72a,	// (0x0009b9f2) popup_image_details_window_g

0xcdac,	// (0x00099074) popup_image_details_window_t1

0xcdbe,	// (0x00099086) popup_image_details_window_t2

0xcdd7,	// (0x0009909f) popup_image_details_window_t3

0xcdeb,	// (0x000990b3) popup_image_details_window_t4

0xce06,	// (0x000990ce) popup_image_details_window_t5

0x0004,

0xf731,	// (0x0009b9f9) popup_image_details_window_t

0xa090,	// (0x00096358) bg_calc_paper_pane_ParamLimits

0x990a,	// (0x00095bd2) grid_highlight_pane_cp013

0xa0a4,	// (0x0009636c) list_calc_pane_ParamLimits

0xa0b6,	// (0x0009637e) scroll_pane_cp024

0xa0be,	// (0x00096386) bg_calc_display_pane_ParamLimits

0x1151,	// (0x0008d419) calc_display_pane_t1_ParamLimits

0x1163,	// (0x0008d42b) calc_display_pane_t2_ParamLimits

0xa0ca,	// (0x00096392) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0009b422) calc_display_pane_t_ParamLimits

0x122c,	// (0x0008d4f4) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0009b43f) cell_calc_pane_g

0x1235,	// (0x0008d4fd) cell_calc_pane_t1

0xa141,	// (0x00096409) grid_highlight_pane_cp02_ParamLimits

0xa157,	// (0x0009641f) toolbar_button_pane_cp01_ParamLimits

0xa157,	// (0x0009641f) toolbar_button_pane_cp01

0xb67d,	// (0x00097945) temp_image_control_pane_ParamLimits

0xb67d,	// (0x00097945) temp_image_control_pane

0x995b,	// (0x00095c23) main_mp3_pane

0xce20,	// (0x000990e8) temp_image_control_pane_g1_ParamLimits

0xce20,	// (0x000990e8) temp_image_control_pane_g1

0xce2e,	// (0x000990f6) temp_image_control_pane_g2_ParamLimits

0xce2e,	// (0x000990f6) temp_image_control_pane_g2

0xce40,	// (0x00099108) temp_image_control_pane_g3_ParamLimits

0xce40,	// (0x00099108) temp_image_control_pane_g3

0x50cf,	// (0x00091397) temp_image_control_pane_g4_ParamLimits

0x50cf,	// (0x00091397) temp_image_control_pane_g4

0x0003,

0xf73c,	// (0x0009ba04) temp_image_control_pane_g_ParamLimits

0xf73c,	// (0x0009ba04) temp_image_control_pane_g

0xce20,	// (0x000990e8) main_mp3_pane_g1

0x50e2,	// (0x000913aa) main_mp3_pane_g2

0x0007,

0xf745,	// (0x0009ba0d) main_mp3_pane_g

0xce83,	// (0x0009914b) main_mp3_pane_t1

0xaa73,	// (0x00096d3b) main_camera_pane_g8_ParamLimits

0xaa73,	// (0x00096d3b) main_camera_pane_g8

0x1d6d,	// (0x0008e035) main_video_pane_g7_ParamLimits

0x1d6d,	// (0x0008e035) main_video_pane_g7

0xa3e9,	// (0x000966b1) main_camera2_pane_t7_ParamLimits

0xa3e9,	// (0x000966b1) main_camera2_pane_t7

0xabbf,	// (0x00096e87) scroll_pane_cp025_ParamLimits

0xabbf,	// (0x00096e87) scroll_pane_cp025

0xabd3,	// (0x00096e9b) scroll_pane_cp026_ParamLimits

0xabd3,	// (0x00096e9b) scroll_pane_cp026

0xabe2,	// (0x00096eaa) wml_content_pane_ParamLimits

0x990a,	// (0x00095bd2) main_touch_calib_pane

0x51b4,	// (0x0009147c) main_touch_calib_pane_g1

0x51c6,	// (0x0009148e) main_touch_calib_pane_g2

0x51d8,	// (0x000914a0) main_touch_calib_pane_g3

0x51ea,	// (0x000914b2) main_touch_calib_pane_g4

0x0003,

0xf763,	// (0x0009ba2b) main_touch_calib_pane_g

0x51fc,	// (0x000914c4) main_touch_calib_pane_t1

0x5216,	// (0x000914de) main_touch_calib_pane_t2

0x0004,

0xf76c,	// (0x0009ba34) main_touch_calib_pane_t

0xb2ef,	// (0x000975b7) mup_progress_pane_cp02

0xb30e,	// (0x000975d6) navi_pane_g1

0xb370,	// (0x00097638) navi_pane_mp_t3

0x995b,	// (0x00095c23) main_mp3_pane_ParamLimits

0x4608,	// (0x000908d0) navi_pane_ParamLimits

0xce20,	// (0x000990e8) main_mp3_pane_g1_ParamLimits

0x50e2,	// (0x000913aa) main_mp3_pane_g2_ParamLimits

0x50ee,	// (0x000913b6) main_mp3_pane_g3_ParamLimits

0x50ee,	// (0x000913b6) main_mp3_pane_g3

0x50fc,	// (0x000913c4) main_mp3_pane_g4_ParamLimits

0x50fc,	// (0x000913c4) main_mp3_pane_g4

0xce50,	// (0x00099118) main_mp3_pane_g5_ParamLimits

0xce50,	// (0x00099118) main_mp3_pane_g5

0xce5e,	// (0x00099126) main_mp3_pane_g6_ParamLimits

0xce5e,	// (0x00099126) main_mp3_pane_g6

0xce6b,	// (0x00099133) main_mp3_pane_g7_ParamLimits

0xce6b,	// (0x00099133) main_mp3_pane_g7

0xce77,	// (0x0009913f) main_mp3_pane_g8_ParamLimits

0xce77,	// (0x0009913f) main_mp3_pane_g8

0xf745,	// (0x0009ba0d) main_mp3_pane_g_ParamLimits

0x5108,	// (0x000913d0) main_mp3_pane_t2

0x5116,	// (0x000913de) main_mp3_pane_t3

0xce91,	// (0x00099159) main_mp3_pane_t4

0xce9f,	// (0x00099167) main_mp3_pane_t5

0x0005,

0xf756,	// (0x0009ba1e) main_mp3_pane_t

0xcead,	// (0x00099175) mup_progress_pane_cp01

0x0bfa,	// (0x0008cec2) aid_zoom_text_secondary2

0xcca3,	// (0x00098f6b) list_cale_ev2_pane

0xccab,	// (0x00098f73) scroll_pane_cp023_ParamLimits

0x5270,	// (0x00091538) field_cale_ev2_pane_ParamLimits

0x5270,	// (0x00091538) field_cale_ev2_pane

0x5294,	// (0x0009155c) field_cale_ev2_pane_g1_ParamLimits

0x5294,	// (0x0009155c) field_cale_ev2_pane_g1

0x52a0,	// (0x00091568) field_cale_ev2_pane_g2_ParamLimits

0x52a0,	// (0x00091568) field_cale_ev2_pane_g2

0x52b8,	// (0x00091580) field_cale_ev2_pane_g3_ParamLimits

0x52b8,	// (0x00091580) field_cale_ev2_pane_g3

0x0003,

0xf777,	// (0x0009ba3f) field_cale_ev2_pane_g_ParamLimits

0xf777,	// (0x0009ba3f) field_cale_ev2_pane_g

0xffbb,	// (0x0008c283) field_cale_ev2_pane_t1_ParamLimits

0xffbb,	// (0x0008c283) field_cale_ev2_pane_t1

0xffd2,	// (0x0008c29a) field_cale_ev2_pane_t2_ParamLimits

0xffd2,	// (0x0008c29a) field_cale_ev2_pane_t2

0x0001,

0xf780,	// (0x0009ba48) field_cale_ev2_pane_t_ParamLimits

0xf780,	// (0x0009ba48) field_cale_ev2_pane_t

0x3a89,	// (0x0008fd51) main_postcard_pane_g5_ParamLimits

0x3a89,	// (0x0008fd51) main_postcard_pane_g5

0x3a9f,	// (0x0008fd67) main_postcard_pane_g6_ParamLimits

0x3a9f,	// (0x0008fd67) main_postcard_pane_g6

0x1b19,	// (0x0008dde1) camera2_autofocus_pane_cp_ParamLimits

0x1b19,	// (0x0008dde1) camera2_autofocus_pane_cp

0x995b,	// (0x00095c23) main_mup3_pane

0x52f0,	// (0x000915b8) main_mup3_pane_g1_ParamLimits

0x52f0,	// (0x000915b8) main_mup3_pane_g1

0x5312,	// (0x000915da) main_mup3_pane_g2_ParamLimits

0x5312,	// (0x000915da) main_mup3_pane_g2

0x5395,	// (0x0009165d) main_mup3_pane_g3_ParamLimits

0x5395,	// (0x0009165d) main_mup3_pane_g3

0x53dd,	// (0x000916a5) main_mup3_pane_g4_ParamLimits

0x53dd,	// (0x000916a5) main_mup3_pane_g4

0x5423,	// (0x000916eb) main_mup3_pane_g5_ParamLimits

0x5423,	// (0x000916eb) main_mup3_pane_g5

0x546b,	// (0x00091733) main_mup3_pane_g6_ParamLimits

0x546b,	// (0x00091733) main_mup3_pane_g6

0xceb5,	// (0x0009917d) main_mup3_pane_g7_ParamLimits

0xceb5,	// (0x0009917d) main_mup3_pane_g7

0x0007,

0xf790,	// (0x0009ba58) main_mup3_pane_g_ParamLimits

0xf790,	// (0x0009ba58) main_mup3_pane_g

0x54eb,	// (0x000917b3) main_mup3_pane_t1_ParamLimits

0x54eb,	// (0x000917b3) main_mup3_pane_t1

0x5559,	// (0x00091821) main_mup3_pane_t2_ParamLimits

0x5559,	// (0x00091821) main_mup3_pane_t2

0x562f,	// (0x000918f7) main_mup3_pane_t4_ParamLimits

0x562f,	// (0x000918f7) main_mup3_pane_t4

0x568d,	// (0x00091955) main_mup3_pane_t5_ParamLimits

0x568d,	// (0x00091955) main_mup3_pane_t5

0x5747,	// (0x00091a0f) main_mup3_pane_t6_ParamLimits

0x5747,	// (0x00091a0f) main_mup3_pane_t6

0x0005,

0xf7a1,	// (0x0009ba69) main_mup3_pane_t_ParamLimits

0xf7a1,	// (0x0009ba69) main_mup3_pane_t

0x57ff,	// (0x00091ac7) mup3_progress_pane_ParamLimits

0x57ff,	// (0x00091ac7) mup3_progress_pane

0x5891,	// (0x00091b59) popup_mup3_control_window_ParamLimits

0x5891,	// (0x00091b59) popup_mup3_control_window

0xcec3,	// (0x0009918b) popup_mup3_text_window

0x58c7,	// (0x00091b8f) mup3_progress_pane_t1

0x58e5,	// (0x00091bad) mup3_progress_pane_t2

0xcecb,	// (0x00099193) mup3_progress_pane_t3

0x0002,

0xf7ae,	// (0x0009ba76) mup3_progress_pane_t

0xcee8,	// (0x000991b0) mup_progress_pane_cp03

0x990a,	// (0x00095bd2) bg_tb_trans_pane_cp04

0x5903,	// (0x00091bcb) mup3_volume_pane

0x590b,	// (0x00091bd3) popup_mup3_control_window_g1

0x5914,	// (0x00091bdc) mup3_volume_pane_g1

0x591d,	// (0x00091be5) mup3_volume_pane_g2

0x5926,	// (0x00091bee) mup3_volume_pane_g3

0x0002,

0xf7b5,	// (0x0009ba7d) mup3_volume_pane_g

0x990a,	// (0x00095bd2) bg_tb_trans_pane_cp03

0xcef8,	// (0x000991c0) popup_mup3_text_window_g1

0xcf00,	// (0x000991c8) popup_mup3_text_window_t1

0xa118,	// (0x000963e0) list_calc_item_pane_g1_ParamLimits

0xc965,	// (0x00098c2d) mup_volume_pane_cp_g1

0x5230,	// (0x000914f8) main_touch_calib_pane_t3

0x5244,	// (0x0009150c) main_touch_calib_pane_t4

0x525a,	// (0x00091522) main_touch_calib_pane_t5

0x9914,	// (0x00095bdc) aid_cell_size_toolbar2

0x991c,	// (0x00095be4) aid_popup3_width_pane

0x0bea,	// (0x0008ceb2) aid_zoom_text_msg_primary

0x1aee,	// (0x0008ddb6) vorec_t7

0xa0dc,	// (0x000963a4) bg_calc_paper_pane_g1_ParamLimits

0xa0e8,	// (0x000963b0) bg_calc_paper_pane_g2_ParamLimits

0xa0f4,	// (0x000963bc) bg_calc_paper_pane_g3_ParamLimits

0xa100,	// (0x000963c8) bg_calc_paper_pane_g4_ParamLimits

0xa10c,	// (0x000963d4) bg_calc_paper_pane_g5_ParamLimits

0x11b2,	// (0x0008d47a) bg_calc_paper_pane_g6_ParamLimits

0x11c5,	// (0x0008d48d) bg_calc_paper_pane_g7_ParamLimits

0x11d8,	// (0x0008d4a0) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0009b429) bg_calc_paper_pane_g_ParamLimits

0x11e9,	// (0x0008d4b1) calc_bg_paper_pane_g9_ParamLimits

0x1c7b,	// (0x0008df43) image_qvga_pane_ParamLimits

0x1c7b,	// (0x0008df43) image_qvga_pane

0x9fd7,	// (0x0009629f) bg_popup_sub_pane_cp04_ParamLimits

0xb5b4,	// (0x0009787c) popup_mup_playback_window_g1_ParamLimits

0xb5c0,	// (0x00097888) popup_mup_playback_window_t1_ParamLimits

0xb5d5,	// (0x0009789d) popup_mup_playback_window_t2_ParamLimits

0xf4f4,	// (0x0009b7bc) popup_mup_playback_window_t_ParamLimits

0x4d24,	// (0x00090fec) main_mup2_pane_g3_ParamLimits

0x4d24,	// (0x00090fec) main_mup2_pane_g3

0x1f6a,	// (0x0008e232) popup_toolbar_window_cp04

0xb9bb,	// (0x00097c83) popup_call2_audio_second_window_g3_ParamLimits

0xb9bb,	// (0x00097c83) popup_call2_audio_second_window_g3

0xbdd7,	// (0x0009809f) popup_call2_audio_first_window_g4_ParamLimits

0xbdd7,	// (0x0009809f) popup_call2_audio_first_window_g4

0xc456,	// (0x0009871e) popup_call2_audio_in_window_g4_ParamLimits

0xc456,	// (0x0009871e) popup_call2_audio_in_window_g4

0x3bce,	// (0x0008fe96) aid_area_sk_bg_cut_ParamLimits

0x3bce,	// (0x0008fe96) aid_area_sk_bg_cut

0xb5ea,	// (0x000978b2) aid_area_sk_bg_cut_2_ParamLimits

0xb5ea,	// (0x000978b2) aid_area_sk_bg_cut_2

0x5030,	// (0x000912f8) aid_placing_details_win

0x5038,	// (0x00091300) aid_placing_details_win_2

0xcd62,	// (0x0009902a) camera2_autofocus_pane_g1_ParamLimits

0x0d9b,	// (0x0008d063) popup_fixed_preview_cale_window_ParamLimits

0x0d9b,	// (0x0008d063) popup_fixed_preview_cale_window

0xb3bf,	// (0x00097687) navi_slider_pane_g3

0xb3c8,	// (0x00097690) navi_slider_pane_g4

0xb3d1,	// (0x00097699) navi_slider_pane_g5

0xb3bf,	// (0x00097687) navi_slider_pane_g6

0xa361,	// (0x00096629) navi_slider_pane_g7

0xb4f4,	// (0x000977bc) mup_scale_pane_g3

0xb4fd,	// (0x000977c5) mup_scale_pane_g4

0xb506,	// (0x000977ce) mup_scale_pane_g5

0x38d5,	// (0x0008fb9d) mup_scale_pane_g6

0x38de,	// (0x0008fba6) mup_scale_pane_g7

0xb3bf,	// (0x00097687) cams2_slider_pane_g3

0xc9e7,	// (0x00098caf) cams2_slider_pane_g4

0xa457,	// (0x0009671f) cams2_slider_pane_g5

0xb3bf,	// (0x00097687) cams2_slider_pane_g6

0xa45f,	// (0x00096727) cams2_slider_pane_g7

0xcc18,	// (0x00098ee0) camera2_autofocus_pane_cp_g1

0xc7bb,	// (0x00098a83) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7bb,	// (0x00098a83) bg_popup_preview_window_pane_cp02

0xcf0e,	// (0x000991d6) list_fp_cale_pane_ParamLimits

0xcf0e,	// (0x000991d6) list_fp_cale_pane

0xcf1a,	// (0x000991e2) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf1a,	// (0x000991e2) popup_fixed_preview_cale_window_t1

0x592f,	// (0x00091bf7) popup_fixed_preview_cale_window_t2_ParamLimits

0x592f,	// (0x00091bf7) popup_fixed_preview_cale_window_t2

0x5944,	// (0x00091c0c) popup_fixed_preview_cale_window_t3_ParamLimits

0x5944,	// (0x00091c0c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bc,	// (0x0009ba84) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bc,	// (0x0009ba84) popup_fixed_preview_cale_window_t

0x5959,	// (0x00091c21) list_single_fp_cale_pane_ParamLimits

0x5959,	// (0x00091c21) list_single_fp_cale_pane

0xcf38,	// (0x00099200) list_single_fp_cale_pane_g1_ParamLimits

0xcf38,	// (0x00099200) list_single_fp_cale_pane_g1

0xcf44,	// (0x0009920c) list_single_fp_cale_pane_g2_ParamLimits

0xcf44,	// (0x0009920c) list_single_fp_cale_pane_g2

0x0002,

0xf7c3,	// (0x0009ba8b) list_single_fp_cale_pane_g_ParamLimits

0xf7c3,	// (0x0009ba8b) list_single_fp_cale_pane_g

0xcf5d,	// (0x00099225) list_single_fp_cale_pane_t1_ParamLimits

0xcf5d,	// (0x00099225) list_single_fp_cale_pane_t1

0xcf6f,	// (0x00099237) list_single_fp_cale_pane_t2_ParamLimits

0xcf6f,	// (0x00099237) list_single_fp_cale_pane_t2

0x0001,

0xf7ca,	// (0x0009ba92) list_single_fp_cale_pane_t_ParamLimits

0xf7ca,	// (0x0009ba92) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x990a,	// (0x00095bd2) main_dialer_pane

0x596e,	// (0x00091c36) aid_cell_size_keypad

0x5978,	// (0x00091c40) dialer_ne_pane

0x5982,	// (0x00091c4a) grid_dialer_command_1_pane

0x598a,	// (0x00091c52) grid_dialer_command_2_pane

0x5992,	// (0x00091c5a) grid_dialer_keypad_pane

0x59a4,	// (0x00091c6c) bg_popup_call_pane_cp06_ParamLimits

0x59a4,	// (0x00091c6c) bg_popup_call_pane_cp06

0x59b0,	// (0x00091c78) dialer_ne_clear_pane_ParamLimits

0x59b0,	// (0x00091c78) dialer_ne_clear_pane

0xcfa2,	// (0x0009926a) dialer_ne_pane_g1

0xcfaa,	// (0x00099272) dialer_ne_pane_t1_ParamLimits

0xcfaa,	// (0x00099272) dialer_ne_pane_t1

0x59bc,	// (0x00091c84) dialer_ne_pane_t2_ParamLimits

0x59bc,	// (0x00091c84) dialer_ne_pane_t2

0x59e6,	// (0x00091cae) dialer_ne_pane_t3_ParamLimits

0x59e6,	// (0x00091cae) dialer_ne_pane_t3

0x0002,

0xf7cf,	// (0x0009ba97) dialer_ne_pane_t_ParamLimits

0xf7cf,	// (0x0009ba97) dialer_ne_pane_t

0x5a16,	// (0x00091cde) dialer_ne_pane_t3_copy1_ParamLimits

0x5a16,	// (0x00091cde) dialer_ne_pane_t3_copy1

0x5a45,	// (0x00091d0d) cell_dialer_keypad_pane_ParamLimits

0x5a45,	// (0x00091d0d) cell_dialer_keypad_pane

0x5a5c,	// (0x00091d24) cell_dialer_command_1_pane_ParamLimits

0x5a5c,	// (0x00091d24) cell_dialer_command_1_pane

0x5a72,	// (0x00091d3a) cell_dialer_command_2_pane_ParamLimits

0x5a72,	// (0x00091d3a) cell_dialer_command_2_pane

0xcfbc,	// (0x00099284) bg_button_pane_cp02_ParamLimits

0xcfbc,	// (0x00099284) bg_button_pane_cp02

0x5a81,	// (0x00091d49) cell_dialer_keypad_pane_g1_ParamLimits

0x5a81,	// (0x00091d49) cell_dialer_keypad_pane_g1

0xcfbc,	// (0x00099284) bg_button_pane_cp03_ParamLimits

0xcfbc,	// (0x00099284) bg_button_pane_cp03

0x5a96,	// (0x00091d5e) cell_dialer_command_1_pane_g1_ParamLimits

0x5a96,	// (0x00091d5e) cell_dialer_command_1_pane_g1

0xcfc8,	// (0x00099290) bg_button_pane_cp04

0x5aaa,	// (0x00091d72) cell_dialer_command_2_pane_g1

0xb3ae,	// (0x00097676) bg_button_pane_cp06

0xcfd0,	// (0x00099298) dialer_ne_clear_pane_g1

0x33a7,	// (0x0008f66f) navi_pane_g2

0x33d5,	// (0x0008f69d) navi_pane_g3

0x0002,

0xf3f7,	// (0x0009b6bf) navi_pane_g

0x3400,	// (0x0008f6c8) navi_pane_mv_g2

0x3427,	// (0x0008f6ef) navi_pane_mv_g5

0x342f,	// (0x0008f6f7) navi_pane_mv_t1

0xa0be,	// (0x00096386) main_clock2_pane

0x5af5,	// (0x00091dbd) main_clock2_list_pane_ParamLimits

0x5af5,	// (0x00091dbd) main_clock2_list_pane

0x5b2d,	// (0x00091df5) main_clock2_pane_t1_ParamLimits

0x5b2d,	// (0x00091df5) main_clock2_pane_t1

0x5b69,	// (0x00091e31) main_clock2_pane_t2_ParamLimits

0x5b69,	// (0x00091e31) main_clock2_pane_t2

0x0004,

0xf7d6,	// (0x0009ba9e) main_clock2_pane_t_ParamLimits

0xf7d6,	// (0x0009ba9e) main_clock2_pane_t

0x5c09,	// (0x00091ed1) popup_clock_analogue_window_cp03_ParamLimits

0x5c09,	// (0x00091ed1) popup_clock_analogue_window_cp03

0x5c30,	// (0x00091ef8) popup_clock_digital_window_cp02_ParamLimits

0x5c30,	// (0x00091ef8) popup_clock_digital_window_cp02

0x5ca9,	// (0x00091f71) main_clock2_list_single_pane_ParamLimits

0x5ca9,	// (0x00091f71) main_clock2_list_single_pane

0xb3ae,	// (0x00097676) list_highlight_pane_cp05

0xcfec,	// (0x000992b4) main_clock2_list_single_pane_t1

0x1f6a,	// (0x0008e232) popup_toolbar_window_cp04_ParamLimits

0x509f,	// (0x00091367) camera2_autofocus_pane_g2_ParamLimits

0x509f,	// (0x00091367) camera2_autofocus_pane_g2

0x50ab,	// (0x00091373) camera2_autofocus_pane_g3_ParamLimits

0x50ab,	// (0x00091373) camera2_autofocus_pane_g3

0x50b7,	// (0x0009137f) camera2_autofocus_pane_g4_ParamLimits

0x50b7,	// (0x0009137f) camera2_autofocus_pane_g4

0x50c3,	// (0x0009138b) camera2_autofocus_pane_g5_ParamLimits

0x50c3,	// (0x0009138b) camera2_autofocus_pane_g5

0x0004,

0xf71f,	// (0x0009b9e7) camera2_autofocus_pane_g_ParamLimits

0xf71f,	// (0x0009b9e7) camera2_autofocus_pane_g

0x52d0,	// (0x00091598) camera2_autofocus_pane_cp_g2

0x52d8,	// (0x000915a0) camera2_autofocus_pane_cp_g3

0x52e0,	// (0x000915a8) camera2_autofocus_pane_cp_g4

0x52e8,	// (0x000915b0) camera2_autofocus_pane_cp_g5

0x0004,

0xf785,	// (0x0009ba4d) camera2_autofocus_pane_cp_g

0x599c,	// (0x00091c64) popup_dialer_spcha_window

0x990a,	// (0x00095bd2) bg_popup_sub_pane_cp07

0xcffa,	// (0x000992c2) list_spcha_pane

0xd002,	// (0x000992ca) list_single_spcha_pane_ParamLimits

0xd002,	// (0x000992ca) list_single_spcha_pane

0x990a,	// (0x00095bd2) list_highlight_pane_cp06

0xd013,	// (0x000992db) list_single_spcha_pane_t1

0xc200,	// (0x000984c8) popup_call2_audio_out_window_g4_ParamLimits

0xc200,	// (0x000984c8) popup_call2_audio_out_window_g4

0x990a,	// (0x00095bd2) main_imed2_pane

0xc7f3,	// (0x00098abb) popup_imed_adjust2_window

0x4451,	// (0x00090719) popup_imed_trans_window_ParamLimits

0x4451,	// (0x00090719) popup_imed_trans_window

0xca50,	// (0x00098d18) popup_blid_sat_info2_window_t1

0xca5e,	// (0x00098d26) popup_blid_sat_info2_window_t2

0x000a,

0xf6b4,	// (0x0009b97c) popup_blid_sat_info2_window_t

0x5d5f,	// (0x00092027) aid_size_cell_colour_35

0x5d7f,	// (0x00092047) aid_size_cell_colour_112

0x5d9f,	// (0x00092067) aid_size_cell_effect

0xc7c7,	// (0x00098a8f) bg_tb_trans_pane_cp02

0xaf0e,	// (0x000971d6) heading_imed_pane

0x5dbf,	// (0x00092087) listscroll_imed_pane

0xd021,	// (0x000992e9) heading_imed_pane_g1

0xd029,	// (0x000992f1) heading_imed_pane_t1

0xd037,	// (0x000992ff) grid_imed_colour_35_pane_ParamLimits

0xd037,	// (0x000992ff) grid_imed_colour_35_pane

0x5dcb,	// (0x00092093) grid_imed_effect_pane

0xd053,	// (0x0009931b) list_imed_aspect_pane

0x5de0,	// (0x000920a8) scroll_pane_cp027_ParamLimits

0x5de0,	// (0x000920a8) scroll_pane_cp027

0x5df1,	// (0x000920b9) cell_imed_effect_pane_ParamLimits

0x5df1,	// (0x000920b9) cell_imed_effect_pane

0xd05b,	// (0x00099323) cell_imed_colour_pane_ParamLimits

0xd05b,	// (0x00099323) cell_imed_colour_pane

0xd0a5,	// (0x0009936d) cell_imed_colour_pane_g1_ParamLimits

0xd0a5,	// (0x0009936d) cell_imed_colour_pane_g1

0xd0b6,	// (0x0009937e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0b6,	// (0x0009937e) hgihlgiht_grid_pane_cp016

0x5e1c,	// (0x000920e4) cell_imed_effect_pane_g1

0x5e24,	// (0x000920ec) grid_highlight_pane_cp017

0xd0c7,	// (0x0009938f) list_imed_single_pane_ParamLimits

0xd0c7,	// (0x0009938f) list_imed_single_pane

0x990a,	// (0x00095bd2) list_highlight_pane_cp07

0xd0db,	// (0x000993a3) list_imed_aspect_pane_comp1_t1

0xc7c7,	// (0x00098a8f) bg_tb_trans_pane_cp05

0xd0fd,	// (0x000993c5) popup_imed_adjust2_window_g1

0xd124,	// (0x000993ec) popup_imed_adjust2_window_t1

0xd13c,	// (0x00099404) slider_imed_adjust_pane

0xd150,	// (0x00099418) slider_imed_adjust_pane_g1

0xd160,	// (0x00099428) slider_imed_adjust_pane_g2

0xd170,	// (0x00099438) slider_imed_adjust_pane_g3

0xd181,	// (0x00099449) slider_imed_adjust_pane_g4

0x0003,

0xf7f3,	// (0x0009babb) slider_imed_adjust_pane_g

0x5e2d,	// (0x000920f5) aid_size_cell_clipart2

0x5e39,	// (0x00092101) grid_imed_clipart_pane

0xd192,	// (0x0009945a) scroll_pane_cp031

0x5e43,	// (0x0009210b) cell_imed_clipart_pane_ParamLimits

0x5e43,	// (0x0009210b) cell_imed_clipart_pane

0x5e60,	// (0x00092128) cell_imed_clipart_pane_g1

0x990a,	// (0x00095bd2) grid_highlight_pane_cp014

0x5b0a,	// (0x00091dd2) main_clock2_pane_g1_ParamLimits

0x5b0a,	// (0x00091dd2) main_clock2_pane_g1

0x5c50,	// (0x00091f18) aid_call2_pane_cp10

0x5c62,	// (0x00091f2a) aid_call_pane_cp10

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g1

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g2

0x5c74,	// (0x00091f3c) popup_clock_analogue_window_cp10_g3

0x5c74,	// (0x00091f3c) popup_clock_analogue_window_cp10_g4

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e1,	// (0x0009baa9) popup_clock_analogue_window_cp10_g

0x5c8a,	// (0x00091f52) popup_clock_analogue_window_cp10_t1

0x5cbb,	// (0x00091f83) clock_digital_number_pane_cp10_ParamLimits

0x5cbb,	// (0x00091f83) clock_digital_number_pane_cp10

0x5cd5,	// (0x00091f9d) clock_digital_number_pane_cp11_ParamLimits

0x5cd5,	// (0x00091f9d) clock_digital_number_pane_cp11

0x5cef,	// (0x00091fb7) clock_digital_number_pane_cp12_ParamLimits

0x5cef,	// (0x00091fb7) clock_digital_number_pane_cp12

0x5d09,	// (0x00091fd1) clock_digital_number_pane_cp13_ParamLimits

0x5d09,	// (0x00091fd1) clock_digital_number_pane_cp13

0x5d23,	// (0x00091feb) clock_digital_separator_pane_cp10_ParamLimits

0x5d23,	// (0x00091feb) clock_digital_separator_pane_cp10

0x5d3d,	// (0x00092005) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d3d,	// (0x00092005) popup_clock_digital_window_cp02_t1

0x9fcf,	// (0x00096297) clock_digital_number_pane_cp10_g1

0x9fcf,	// (0x00096297) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fc,	// (0x0009bac4) clock_digital_number_pane_cp10_g

0x9fcf,	// (0x00096297) clock_digital_separator_pane_cp10_g1

0x9fcf,	// (0x00096297) clock_digital_separator_pane_g2_cp10

0xb37e,	// (0x00097646) navi_pane_vded_g4

0xb387,	// (0x0009764f) navi_pane_vded_g5

0xb390,	// (0x00097658) navi_pane_vded_t1

0x990a,	// (0x00095bd2) main_vded_pane

0x5e69,	// (0x00092131) main_vded_pane_g1

0x5e75,	// (0x0009213d) main_vded_pane_g2

0x5e81,	// (0x00092149) main_vded_pane_g3

0x0002,

0xf801,	// (0x0009bac9) main_vded_pane_g

0x5e8d,	// (0x00092155) main_vded_pane_t1

0x5e9b,	// (0x00092163) main_vded_pane_t2

0x0001,

0xf808,	// (0x0009bad0) main_vded_pane_t

0x5ea9,	// (0x00092171) vded_slider_pane

0x5eb3,	// (0x0009217b) vded_video_pane

0xd19a,	// (0x00099462) vded_video_pane_g1

0x5ebd,	// (0x00092185) vded_video_pane_g2

0xcc18,	// (0x00098ee0) vded_video_pane_g3

0x0002,

0xf80d,	// (0x0009bad5) vded_video_pane_g

0xd1a4,	// (0x0009946c) vded_slider_pane_g1

0xc965,	// (0x00098c2d) vded_slider_pane_g2

0xd1ad,	// (0x00099475) vded_slider_pane_g3

0xd1b6,	// (0x0009947e) vded_slider_pane_g4

0xd1bf,	// (0x00099487) vded_slider_pane_g5

0x0004,

0xf814,	// (0x0009badc) vded_slider_pane_g

0x587b,	// (0x00091b43) mup3_rocker_pane_ParamLimits

0x587b,	// (0x00091b43) mup3_rocker_pane

0x5ec6,	// (0x0009218e) mup3_control_keys_pane_g1

0x5ece,	// (0x00092196) mup3_control_keys_pane_g2

0x5ed6,	// (0x0009219e) mup3_control_keys_pane_g3

0x5ede,	// (0x000921a6) mup3_control_keys_pane_g4

0x0003,

0xf81f,	// (0x0009bae7) mup3_control_keys_pane_g

0x0dd2,	// (0x0008d09a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dd2,	// (0x0008d09a) popup_toolbar2_fixed_window_cp01

0x58b1,	// (0x00091b79) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58b1,	// (0x00091b79) popup_toolbar2_fixed_window_cp02

0xbb3f,	// (0x00097e07) popup_call2_audio_second_window_t4_ParamLimits

0xbb3f,	// (0x00097e07) popup_call2_audio_second_window_t4

0xc06d,	// (0x00098335) popup_call2_audio_first_window_t6_ParamLimits

0xc06d,	// (0x00098335) popup_call2_audio_first_window_t6

0xc303,	// (0x000985cb) popup_call2_audio_out_window_t6_ParamLimits

0xc303,	// (0x000985cb) popup_call2_audio_out_window_t6

0x990a,	// (0x00095bd2) main_vitu_pane

0x5eee,	// (0x000921b6) aid_size_cell_itu_ParamLimits

0x5eee,	// (0x000921b6) aid_size_cell_itu

0x995b,	// (0x00095c23) bg_popup_window_pane_cp08_ParamLimits

0x995b,	// (0x00095c23) bg_popup_window_pane_cp08

0x5f04,	// (0x000921cc) field_vitu_entry_pane_ParamLimits

0x5f04,	// (0x000921cc) field_vitu_entry_pane

0x5f1b,	// (0x000921e3) grid_vitu_function_pane_ParamLimits

0x5f1b,	// (0x000921e3) grid_vitu_function_pane

0x5f36,	// (0x000921fe) grid_vitu_itu_pane_ParamLimits

0x5f36,	// (0x000921fe) grid_vitu_itu_pane

0x5f54,	// (0x0009221c) cell_vitu_itu_pane_ParamLimits

0x5f54,	// (0x0009221c) cell_vitu_itu_pane

0x5f7a,	// (0x00092242) cell_vitu_function_pane_ParamLimits

0x5f7a,	// (0x00092242) cell_vitu_function_pane

0x995b,	// (0x00095c23) bg_popup_sub_pane_cp08_ParamLimits

0x995b,	// (0x00095c23) bg_popup_sub_pane_cp08

0x5f95,	// (0x0009225d) field_vitu_entry_pane_t1_ParamLimits

0x5f95,	// (0x0009225d) field_vitu_entry_pane_t1

0xd1e0,	// (0x000994a8) field_vitu_entry_pane_t2_ParamLimits

0xd1e0,	// (0x000994a8) field_vitu_entry_pane_t2

0x0001,

0xf82d,	// (0x0009baf5) field_vitu_entry_pane_t_ParamLimits

0xf82d,	// (0x0009baf5) field_vitu_entry_pane_t

0xd1fd,	// (0x000994c5) bg_button_pane_cp05_ParamLimits

0xd1fd,	// (0x000994c5) bg_button_pane_cp05

0x5fb5,	// (0x0009227d) cell_vitu_itu_pane_g1

0x5fcd,	// (0x00092295) cell_vitu_itu_pane_t1_ParamLimits

0x5fcd,	// (0x00092295) cell_vitu_itu_pane_t1

0x5fdf,	// (0x000922a7) cell_vitu_itu_pane_t2_ParamLimits

0x5fdf,	// (0x000922a7) cell_vitu_itu_pane_t2

0x0002,

0xf832,	// (0x0009bafa) cell_vitu_itu_pane_t_ParamLimits

0xf832,	// (0x0009bafa) cell_vitu_itu_pane_t

0xd20b,	// (0x000994d3) bg_button_pane_cp07

0x6014,	// (0x000922dc) cell_vitu_function_pane_g1

0xa05e,	// (0x00096326) main_calc_pane_g1

0x0bde,	// (0x0008cea6) aid_visual_content_pane

0x990a,	// (0x00095bd2) main_vradio_pane

0x601d,	// (0x000922e5) main_vradio_pane_g1_ParamLimits

0x601d,	// (0x000922e5) main_vradio_pane_g1

0xd215,	// (0x000994dd) main_vradio_pane_g2_ParamLimits

0xd215,	// (0x000994dd) main_vradio_pane_g2

0x0001,

0xf839,	// (0x0009bb01) main_vradio_pane_g_ParamLimits

0xf839,	// (0x0009bb01) main_vradio_pane_g

0x6034,	// (0x000922fc) main_vradio_pane_t1_ParamLimits

0x6034,	// (0x000922fc) main_vradio_pane_t1

0x6049,	// (0x00092311) main_vradio_pane_t2_ParamLimits

0x6049,	// (0x00092311) main_vradio_pane_t2

0xd222,	// (0x000994ea) main_vradio_pane_t3_ParamLimits

0xd222,	// (0x000994ea) main_vradio_pane_t3

0x0002,

0xf83e,	// (0x0009bb06) main_vradio_pane_t_ParamLimits

0xf83e,	// (0x0009bb06) main_vradio_pane_t

0x605e,	// (0x00092326) vradio_rocker_control_pane_ParamLimits

0x605e,	// (0x00092326) vradio_rocker_control_pane

0x6070,	// (0x00092338) vradio_station_info_pane_ParamLimits

0x6070,	// (0x00092338) vradio_station_info_pane

0xd236,	// (0x000994fe) vradio_frequency_info_pane_ParamLimits

0xd236,	// (0x000994fe) vradio_frequency_info_pane

0xcc18,	// (0x00098ee0) vradio_station_info_pane_g1

0xd245,	// (0x0009950d) vradio_station_info_pane_t1_ParamLimits

0xd245,	// (0x0009950d) vradio_station_info_pane_t1

0xd267,	// (0x0009952f) vradio_station_info_pane_t2_ParamLimits

0xd267,	// (0x0009952f) vradio_station_info_pane_t2

0x0001,

0xf845,	// (0x0009bb0d) vradio_station_info_pane_t_ParamLimits

0xf845,	// (0x0009bb0d) vradio_station_info_pane_t

0xd279,	// (0x00099541) vradio_tuning_pane

0xd281,	// (0x00099549) vradio_rocker_control_pane_g1

0xd289,	// (0x00099551) vradio_rocker_control_pane_g2

0xd291,	// (0x00099559) vradio_rocker_control_pane_g3

0xd299,	// (0x00099561) vradio_rocker_control_pane_g4

0xd2a1,	// (0x00099569) vradio_rocker_control_pane_g5

0x0004,

0xf84a,	// (0x0009bb12) vradio_rocker_control_pane_g

0x6080,	// (0x00092348) vradio_frequency_info_pane_g1

0xd2a9,	// (0x00099571) vradio_frequency_info_pane_t1_ParamLimits

0xd2a9,	// (0x00099571) vradio_frequency_info_pane_t1

0x608a,	// (0x00092352) vradio_tuning_pane_g1

0x6095,	// (0x0009235d) vradio_tuning_pane_t1

0x9928,	// (0x00095bf0) area_side_right_pane_ParamLimits

0x9928,	// (0x00095bf0) area_side_right_pane

0xc782,	// (0x00098a4a) status_small_pane_g1

0xc78a,	// (0x00098a52) status_small_pane_g2

0xc793,	// (0x00098a5b) status_small_pane_g3

0xc79c,	// (0x00098a64) status_small_pane_g4

0x0003,

0xf60a,	// (0x0009b8d2) status_small_pane_g

0xc7a5,	// (0x00098a6d) status_small_pane_t1

0x990a,	// (0x00095bd2) main_video3_pane

0xd2bd,	// (0x00099585) cams_zoom_vslider_pane

0xd2c5,	// (0x0009958d) image3_wide_pane_ParamLimits

0xd2c5,	// (0x0009958d) image3_wide_pane

0xd2df,	// (0x000995a7) image3_wide_small_pane

0xd2eb,	// (0x000995b3) main_video3_pane_g1_ParamLimits

0xd2eb,	// (0x000995b3) main_video3_pane_g1

0xd307,	// (0x000995cf) main_video3_pane_g2_ParamLimits

0xd307,	// (0x000995cf) main_video3_pane_g2

0x0001,

0xf855,	// (0x0009bb1d) main_video3_pane_g_ParamLimits

0xf855,	// (0x0009bb1d) main_video3_pane_g

0xd323,	// (0x000995eb) main_video3_pane_t1_ParamLimits

0xd323,	// (0x000995eb) main_video3_pane_t1

0xd34e,	// (0x00099616) main_video3_pane_t2_ParamLimits

0xd34e,	// (0x00099616) main_video3_pane_t2

0xd37b,	// (0x00099643) main_video3_pane_t3_ParamLimits

0xd37b,	// (0x00099643) main_video3_pane_t3

0x0002,

0xf85a,	// (0x0009bb22) main_video3_pane_t_ParamLimits

0xf85a,	// (0x0009bb22) main_video3_pane_t

0xd3a8,	// (0x00099670) cams_zoom_vslider_pane_g1

0xd3b1,	// (0x00099679) cams_zoom_vslider_pane_g2

0x0001,

0xf861,	// (0x0009bb29) cams_zoom_vslider_pane_g

0xd3b9,	// (0x00099681) small_slider_vertical_pane

0xcc18,	// (0x00098ee0) small_slider_vertical_pane_g1

0xcc18,	// (0x00098ee0) small_slider_vertical_pane_g2

0xd3c1,	// (0x00099689) small_slider_vertical_pane_g3

0x0002,

0xf866,	// (0x0009bb2e) small_slider_vertical_pane_g

0x990a,	// (0x00095bd2) main_hwr_training_pane

0xd3ca,	// (0x00099692) hwr_training_instruct_pane_ParamLimits

0xd3ca,	// (0x00099692) hwr_training_instruct_pane

0x60a4,	// (0x0009236c) hwr_training_navi_pane_ParamLimits

0x60a4,	// (0x0009236c) hwr_training_navi_pane

0x60c3,	// (0x0009238b) hwr_training_write_pane_ParamLimits

0x60c3,	// (0x0009238b) hwr_training_write_pane

0x990a,	// (0x00095bd2) bg_frame_shadow_pane

0xd401,	// (0x000996c9) hwr_training_write_pane_g1

0xd409,	// (0x000996d1) hwr_training_write_pane_g2

0xd411,	// (0x000996d9) hwr_training_write_pane_g3

0xd419,	// (0x000996e1) hwr_training_write_pane_g4

0xd421,	// (0x000996e9) hwr_training_write_pane_g5

0xd429,	// (0x000996f1) hwr_training_write_pane_g6

0xd431,	// (0x000996f9) hwr_training_write_pane_g7

0x0006,

0xf86d,	// (0x0009bb35) hwr_training_write_pane_g

0xa474,	// (0x0009673c) hwr_training_navi_pane_g1_ParamLimits

0xa474,	// (0x0009673c) hwr_training_navi_pane_g1

0xa486,	// (0x0009674e) hwr_training_navi_pane_g2_ParamLimits

0xa486,	// (0x0009674e) hwr_training_navi_pane_g2

0xa498,	// (0x00096760) hwr_training_navi_pane_g3_ParamLimits

0xa498,	// (0x00096760) hwr_training_navi_pane_g3

0xa4a8,	// (0x00096770) hwr_training_navi_pane_g4_ParamLimits

0xa4a8,	// (0x00096770) hwr_training_navi_pane_g4

0x0004,

0xf87c,	// (0x0009bb44) hwr_training_navi_pane_g_ParamLimits

0xf87c,	// (0x0009bb44) hwr_training_navi_pane_g

0xa4b5,	// (0x0009677d) hwr_training_navi_pane_t1

0x610b,	// (0x000923d3) list_single_hwr_training_instruct_pane_ParamLimits

0x610b,	// (0x000923d3) list_single_hwr_training_instruct_pane

0xd439,	// (0x00099701) list_single_hwr_training_instruct_pane_t1

0xcb58,	// (0x00098e20) bg_frame_shadow_pane_g1

0xd448,	// (0x00099710) bg_frame_shadow_pane_g2

0xd450,	// (0x00099718) bg_frame_shadow_pane_g3

0xd458,	// (0x00099720) bg_frame_shadow_pane_g4

0xd460,	// (0x00099728) bg_frame_shadow_pane_g5

0xd468,	// (0x00099730) bg_frame_shadow_pane_g6

0xd470,	// (0x00099738) bg_frame_shadow_pane_g7

0xa1b7,	// (0x0009647f) bg_frame_shadow_pane_g8

0x0007,

0xf887,	// (0x0009bb4f) bg_frame_shadow_pane_g

0x990a,	// (0x00095bd2) main_video_tele_dialer_pane

0x6120,	// (0x000923e8) aid_size_cell_video_keypad_ParamLimits

0x6120,	// (0x000923e8) aid_size_cell_video_keypad

0x613a,	// (0x00092402) grid_video_dialer_keypad_pane_ParamLimits

0x613a,	// (0x00092402) grid_video_dialer_keypad_pane

0x6186,	// (0x0009244e) video_down_pane_cp_ParamLimits

0x6186,	// (0x0009244e) video_down_pane_cp

0x61b6,	// (0x0009247e) cell_video_dialer_keypad_pane_ParamLimits

0x61b6,	// (0x0009247e) cell_video_dialer_keypad_pane

0xd478,	// (0x00099740) bg_button_pane_cp08_ParamLimits

0xd478,	// (0x00099740) bg_button_pane_cp08

0x61da,	// (0x000924a2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61da,	// (0x000924a2) cell_video_dialer_keypad_pane_g1

0x5865,	// (0x00091b2d) mup3_rocker2_pane_ParamLimits

0x5865,	// (0x00091b2d) mup3_rocker2_pane

0xcc18,	// (0x00098ee0) mup3_rocker2_pane_g1

0x431e,	// (0x000905e6) main_dialer2_pane

0x990a,	// (0x00095bd2) main_mp4_pane

0xa4cb,	// (0x00096793) main_mp4_pane_g1_ParamLimits

0xa4cb,	// (0x00096793) main_mp4_pane_g1

0xa4cb,	// (0x00096793) main_mp4_pane_g2_ParamLimits

0xa4cb,	// (0x00096793) main_mp4_pane_g2

0x6215,	// (0x000924dd) main_mp4_pane_g3_ParamLimits

0x6215,	// (0x000924dd) main_mp4_pane_g3

0xa4d9,	// (0x000967a1) main_mp4_pane_g4_ParamLimits

0xa4d9,	// (0x000967a1) main_mp4_pane_g4

0xa501,	// (0x000967c9) main_mp4_pane_g5_ParamLimits

0xa501,	// (0x000967c9) main_mp4_pane_g5

0x0005,

0xf8a7,	// (0x0009bb6f) main_mp4_pane_g_ParamLimits

0xf8a7,	// (0x0009bb6f) main_mp4_pane_g

0xa551,	// (0x00096819) main_mp4_pane_t1_ParamLimits

0xa551,	// (0x00096819) main_mp4_pane_t1

0xa5ad,	// (0x00096875) main_mp4_pane_t2_ParamLimits

0xa5ad,	// (0x00096875) main_mp4_pane_t2

0xd484,	// (0x0009974c) main_mp4_pane_t3_ParamLimits

0xd484,	// (0x0009974c) main_mp4_pane_t3

0xa5ff,	// (0x000968c7) main_mp4_pane_t4_ParamLimits

0xa5ff,	// (0x000968c7) main_mp4_pane_t4

0x0003,

0xf8b4,	// (0x0009bb7c) main_mp4_pane_t_ParamLimits

0xf8b4,	// (0x0009bb7c) main_mp4_pane_t

0xa63f,	// (0x00096907) mp4_progress_pane_ParamLimits

0xa63f,	// (0x00096907) mp4_progress_pane

0xa689,	// (0x00096951) mp4_rocker_pane_ParamLimits

0xa689,	// (0x00096951) mp4_rocker_pane

0xd4ac,	// (0x00099774) mp4_progress_pane_t1

0xd4c5,	// (0x0009978d) mp4_progress_pane_t2

0x0001,

0xf8bd,	// (0x0009bb85) mp4_progress_pane_t

0xd4de,	// (0x000997a6) mup_progress_pane_cp04

0xcc18,	// (0x00098ee0) mp4_rocker_pane_g1

0x625f,	// (0x00092527) aid_cell_size_keypad2_ParamLimits

0x625f,	// (0x00092527) aid_cell_size_keypad2

0x6275,	// (0x0009253d) dialer2_ne_pane_ParamLimits

0x6275,	// (0x0009253d) dialer2_ne_pane

0x628d,	// (0x00092555) grid_dialer2_keypad_pane_ParamLimits

0x628d,	// (0x00092555) grid_dialer2_keypad_pane

0xc9f7,	// (0x00098cbf) bg_popup_call_pane_cp07_ParamLimits

0xc9f7,	// (0x00098cbf) bg_popup_call_pane_cp07

0x62a9,	// (0x00092571) dialer2_ne_pane_t1_ParamLimits

0x62a9,	// (0x00092571) dialer2_ne_pane_t1

0x62e4,	// (0x000925ac) cell_dialer2_keypad_pane_ParamLimits

0x62e4,	// (0x000925ac) cell_dialer2_keypad_pane

0xd4fc,	// (0x000997c4) bg_button_pane_pane_cp04_ParamLimits

0xd4fc,	// (0x000997c4) bg_button_pane_pane_cp04

0x6308,	// (0x000925d0) cell_dialer2_keypad_pane_g1_ParamLimits

0x6308,	// (0x000925d0) cell_dialer2_keypad_pane_g1

0x1e51,	// (0x0008e119) aid_placing_vt_set_content_ParamLimits

0x1e51,	// (0x0008e119) aid_placing_vt_set_content

0x1e75,	// (0x0008e13d) aid_placing_vt_set_title_ParamLimits

0x1e75,	// (0x0008e13d) aid_placing_vt_set_title

0x990a,	// (0x00095bd2) main_image3_pane

0x63ce,	// (0x00092696) area_side_right_pane_cp01_ParamLimits

0x63ce,	// (0x00092696) area_side_right_pane_cp01

0xa4cb,	// (0x00096793) main_image3_pane_g1_ParamLimits

0xa4cb,	// (0x00096793) main_image3_pane_g1

0x63e7,	// (0x000926af) main_image3_pane_g2_ParamLimits

0x63e7,	// (0x000926af) main_image3_pane_g2

0x640f,	// (0x000926d7) main_image3_pane_g3_ParamLimits

0x640f,	// (0x000926d7) main_image3_pane_g3

0x6439,	// (0x00092701) main_image3_pane_g4_ParamLimits

0x6439,	// (0x00092701) main_image3_pane_g4

0x0003,

0xf8cc,	// (0x0009bb94) main_image3_pane_g_ParamLimits

0xf8cc,	// (0x0009bb94) main_image3_pane_g

0x6463,	// (0x0009272b) main_image3_pane_t1_ParamLimits

0x6463,	// (0x0009272b) main_image3_pane_t1

0x64bb,	// (0x00092783) main_image3_pane_t2_ParamLimits

0x64bb,	// (0x00092783) main_image3_pane_t2

0x650d,	// (0x000927d5) main_image3_pane_t3_ParamLimits

0x650d,	// (0x000927d5) main_image3_pane_t3

0x0003,

0xf8d5,	// (0x0009bb9d) main_image3_pane_t_ParamLimits

0xf8d5,	// (0x0009bb9d) main_image3_pane_t

0x995b,	// (0x00095c23) grid_sctrl_middle_pane_cp01_ParamLimits

0x995b,	// (0x00095c23) grid_sctrl_middle_pane_cp01

0x6595,	// (0x0009285d) cell_sctrl_middle_pane_cp01_ParamLimits

0x6595,	// (0x0009285d) cell_sctrl_middle_pane_cp01

0x65b2,	// (0x0009287a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x65b2,	// (0x0009287a) cell_sctrl_middle_pane_cp01_g1

0x990a,	// (0x00095bd2) main_call4_pane

0x65c7,	// (0x0009288f) aid_size_button_call4_ParamLimits

0x65c7,	// (0x0009288f) aid_size_button_call4

0x65fa,	// (0x000928c2) call4_windows_pane_ParamLimits

0x65fa,	// (0x000928c2) call4_windows_pane

0x661c,	// (0x000928e4) grid_call4_button_pane_ParamLimits

0x661c,	// (0x000928e4) grid_call4_button_pane

0xd508,	// (0x000997d0) call4_windows_conf_pane

0x6647,	// (0x0009290f) popup_call4_audio_first_window_ParamLimits

0x6647,	// (0x0009290f) popup_call4_audio_first_window

0x6673,	// (0x0009293b) popup_call4_audio_second_window_ParamLimits

0x6673,	// (0x0009293b) popup_call4_audio_second_window

0xd545,	// (0x0009980d) popup_call4_audio_wait_window_ParamLimits

0xd545,	// (0x0009980d) popup_call4_audio_wait_window

0x6689,	// (0x00092951) cell_call4_button_pane_ParamLimits

0x6689,	// (0x00092951) cell_call4_button_pane

0x66b0,	// (0x00092978) bg_button_pane_cp09_ParamLimits

0x66b0,	// (0x00092978) bg_button_pane_cp09

0x66bc,	// (0x00092984) cell_call4_button_pane_g1_ParamLimits

0x66bc,	// (0x00092984) cell_call4_button_pane_g1

0x66e2,	// (0x000929aa) cell_call4_button_pane_t1_ParamLimits

0x66e2,	// (0x000929aa) cell_call4_button_pane_t1

0xd58d,	// (0x00099855) popup_call4_audio_conf_window_ParamLimits

0xd58d,	// (0x00099855) popup_call4_audio_conf_window

0x58c7,	// (0x00091b8f) mup3_progress_pane_t1_ParamLimits

0x58e5,	// (0x00091bad) mup3_progress_pane_t2_ParamLimits

0xcecb,	// (0x00099193) mup3_progress_pane_t3_ParamLimits

0xf7ae,	// (0x0009ba76) mup3_progress_pane_t_ParamLimits

0xcee8,	// (0x000991b0) mup_progress_pane_cp03_ParamLimits

0x5ee6,	// (0x000921ae) mup3_control_keys_pane_g4_copy1

0xa66d,	// (0x00096935) mp4_rocker2_pane_ParamLimits

0xa66d,	// (0x00096935) mp4_rocker2_pane

0xd5a7,	// (0x0009986f) mp4_rocker2_pane_g1

0xd5af,	// (0x00099877) mp4_rocker2_pane_g2

0xa6df,	// (0x000969a7) mp4_rocker2_pane_g3

0xa6e7,	// (0x000969af) mp4_rocker2_pane_g4

0xa6ef,	// (0x000969b7) mp4_rocker2_pane_g5

0x0004,

0xf8de,	// (0x0009bba6) mp4_rocker2_pane_g

0x990a,	// (0x00095bd2) main_camera4_pane

0x990a,	// (0x00095bd2) main_video4_pane

0x6154,	// (0x0009241c) main_video_tele_dialer_pane_t1_ParamLimits

0x6154,	// (0x0009241c) main_video_tele_dialer_pane_t1

0x616d,	// (0x00092435) main_video_tele_dialer_pane_t2_ParamLimits

0x616d,	// (0x00092435) main_video_tele_dialer_pane_t2

0x0001,

0xf898,	// (0x0009bb60) main_video_tele_dialer_pane_t_ParamLimits

0xf898,	// (0x0009bb60) main_video_tele_dialer_pane_t

0x6720,	// (0x000929e8) cam4_autofocus_pane_ParamLimits

0x6720,	// (0x000929e8) cam4_autofocus_pane

0x6736,	// (0x000929fe) cam4_image_uncrop_pane_ParamLimits

0x6736,	// (0x000929fe) cam4_image_uncrop_pane

0x674f,	// (0x00092a17) cam4_indicators_pane_ParamLimits

0x674f,	// (0x00092a17) cam4_indicators_pane

0x677e,	// (0x00092a46) main_camera4_pane_g1_ParamLimits

0x677e,	// (0x00092a46) main_camera4_pane_g1

0x6790,	// (0x00092a58) main_camera4_pane_g2_ParamLimits

0x6790,	// (0x00092a58) main_camera4_pane_g2

0x67a3,	// (0x00092a6b) main_camera4_pane_g3_ParamLimits

0x67a3,	// (0x00092a6b) main_camera4_pane_g3

0x67b6,	// (0x00092a7e) main_camera4_pane_g4_ParamLimits

0x67b6,	// (0x00092a7e) main_camera4_pane_g4

0x67c9,	// (0x00092a91) main_camera4_pane_g5_ParamLimits

0x67c9,	// (0x00092a91) main_camera4_pane_g5

0x0005,

0xf8e9,	// (0x0009bbb1) main_camera4_pane_g_ParamLimits

0xf8e9,	// (0x0009bbb1) main_camera4_pane_g

0x67ed,	// (0x00092ab5) main_camera4_pane_t1_ParamLimits

0x67ed,	// (0x00092ab5) main_camera4_pane_t1

0xce50,	// (0x00099118) bg_tb_trans_pane_cp06

0xa71d,	// (0x000969e5) cam4_indicators_pane_g1

0xa72e,	// (0x000969f6) cam4_indicators_pane_g2

0x0002,

0xf904,	// (0x0009bbcc) cam4_indicators_pane_g

0xa746,	// (0x00096a0e) cam4_indicators_pane_t1

0x6851,	// (0x00092b19) main_video4_pane_g1_ParamLimits

0x6851,	// (0x00092b19) main_video4_pane_g1

0x6860,	// (0x00092b28) main_video4_pane_g2_ParamLimits

0x6860,	// (0x00092b28) main_video4_pane_g2

0x686f,	// (0x00092b37) main_video4_pane_g3_ParamLimits

0x686f,	// (0x00092b37) main_video4_pane_g3

0x687e,	// (0x00092b46) main_video4_pane_g4_ParamLimits

0x687e,	// (0x00092b46) main_video4_pane_g4

0x0004,

0xf90b,	// (0x0009bbd3) main_video4_pane_g_ParamLimits

0xf90b,	// (0x0009bbd3) main_video4_pane_g

0x689c,	// (0x00092b64) vid4_indicators_pane_ParamLimits

0x689c,	// (0x00092b64) vid4_indicators_pane

0x68ca,	// (0x00092b92) video4_image_uncrop_cif_pane_ParamLimits

0x68ca,	// (0x00092b92) video4_image_uncrop_cif_pane

0x68e4,	// (0x00092bac) video4_image_uncrop_nhd_pane_ParamLimits

0x68e4,	// (0x00092bac) video4_image_uncrop_nhd_pane

0x6736,	// (0x000929fe) video4_image_uncrop_vga_pane_ParamLimits

0x6736,	// (0x000929fe) video4_image_uncrop_vga_pane

0x995b,	// (0x00095c23) bg_tb_trans_pane_cp07

0xa774,	// (0x00096a3c) vid4_indicators_pane_g1

0xa78a,	// (0x00096a52) vid4_indicators_pane_g2

0xa79e,	// (0x00096a66) vid4_indicators_pane_g3

0x0004,

0xf916,	// (0x0009bbde) vid4_indicators_pane_g

0xa7cf,	// (0x00096a97) vid4_indicators_pane_t1

0x68fa,	// (0x00092bc2) cam4_autofocus_pane_g1

0x6902,	// (0x00092bca) cam4_autofocus_pane_g2

0x690a,	// (0x00092bd2) cam4_autofocus_pane_g3

0x0002,

0xf921,	// (0x0009bbe9) cam4_autofocus_pane_g

0x6912,	// (0x00092bda) cam4_autofocus_pane_g3_copy1

0x619a,	// (0x00092462) video_down_pane_cp_t1

0x61a8,	// (0x00092470) video_down_pane_cp_t2

0x0001,

0xf89d,	// (0x0009bb65) video_down_pane_cp_t

0x995b,	// (0x00095c23) popup_vitu2_window_ParamLimits

0x995b,	// (0x00095c23) popup_vitu2_window

0x691a,	// (0x00092be2) aid_size_cell2_itu2_ParamLimits

0x691a,	// (0x00092be2) aid_size_cell2_itu2

0x6940,	// (0x00092c08) aid_size_cell_itu2_ParamLimits

0x6940,	// (0x00092c08) aid_size_cell_itu2

0x699e,	// (0x00092c66) bg_popup_window_pane_cp09_ParamLimits

0x699e,	// (0x00092c66) bg_popup_window_pane_cp09

0x69ac,	// (0x00092c74) field_vitu2_entry_pane_ParamLimits

0x69ac,	// (0x00092c74) field_vitu2_entry_pane

0x69d4,	// (0x00092c9c) grid_vitu2_function_pane_ParamLimits

0x69d4,	// (0x00092c9c) grid_vitu2_function_pane

0x6a25,	// (0x00092ced) grid_vitu2_itu_pane_ParamLimits

0x6a25,	// (0x00092ced) grid_vitu2_itu_pane

0x6ab0,	// (0x00092d78) cell_vitu2_itu_pane_ParamLimits

0x6ab0,	// (0x00092d78) cell_vitu2_itu_pane

0x6ad6,	// (0x00092d9e) cell_vitu2_function_pane_ParamLimits

0x6ad6,	// (0x00092d9e) cell_vitu2_function_pane

0xd5cb,	// (0x00099893) bg_popup_call_pane_cp08_ParamLimits

0xd5cb,	// (0x00099893) bg_popup_call_pane_cp08

0xd5e4,	// (0x000998ac) field_vitu2_entry_pane_g1

0xd5f0,	// (0x000998b8) field_vitu2_entry_pane_g2

0x0002,

0xf928,	// (0x0009bbf0) field_vitu2_entry_pane_g

0xffe7,	// (0x0008c2af) field_vitu2_entry_pane_t1_ParamLimits

0xffe7,	// (0x0008c2af) field_vitu2_entry_pane_t1

0x6b1a,	// (0x00092de2) field_vitu2_entry_pane_t2_ParamLimits

0x6b1a,	// (0x00092de2) field_vitu2_entry_pane_t2

0x0001,

0xf92f,	// (0x0009bbf7) field_vitu2_entry_pane_t_ParamLimits

0xf92f,	// (0x0009bbf7) field_vitu2_entry_pane_t

0x6b37,	// (0x00092dff) bg_button_pane_cp010_ParamLimits

0x6b37,	// (0x00092dff) bg_button_pane_cp010

0x6b45,	// (0x00092e0d) cell_vitu2_itu_pane_g1

0x6b63,	// (0x00092e2b) cell_vitu2_itu_pane_t1_ParamLimits

0x6b63,	// (0x00092e2b) cell_vitu2_itu_pane_t1

0x0015,	// (0x0008c2dd) cell_vitu2_itu_pane_t2_ParamLimits

0x0015,	// (0x0008c2dd) cell_vitu2_itu_pane_t2

0x0002,

0xf939,	// (0x0009bc01) cell_vitu2_itu_pane_t_ParamLimits

0xf939,	// (0x0009bc01) cell_vitu2_itu_pane_t

0x995b,	// (0x00095c23) bg_button_pane_cp011

0x6bc9,	// (0x00092e91) cell_vitu2_function_pane_g1

0x990a,	// (0x00095bd2) main_myfav_hc_pane

0x655d,	// (0x00092825) popup_image3_note_pane_ParamLimits

0x655d,	// (0x00092825) popup_image3_note_pane

0x6579,	// (0x00092841) popup_image3_tool_bar_pane_ParamLimits

0x6579,	// (0x00092841) popup_image3_tool_bar_pane

0x0099,	// (0x0008c361) cell_vitu2_itu_pane_t3_ParamLimits

0x0099,	// (0x0008c361) cell_vitu2_itu_pane_t3

0x990a,	// (0x00095bd2) bg_popup_trans_pane

0xd612,	// (0x000998da) grid_image3_tool_bar_pane

0xd61c,	// (0x000998e4) bg_popup_trans_pane_g1

0xacc8,	// (0x00096f90) bg_popup_trans_pane_g2

0xd624,	// (0x000998ec) bg_popup_trans_pane_g3

0xd62c,	// (0x000998f4) bg_popup_trans_pane_g4

0xd634,	// (0x000998fc) bg_popup_trans_pane_g5

0xd63c,	// (0x00099904) bg_popup_trans_pane_g6

0xd644,	// (0x0009990c) bg_popup_trans_pane_g7

0xd64c,	// (0x00099914) bg_popup_trans_pane_g8

0xaca8,	// (0x00096f70) bg_popup_trans_pane_g9

0x0008,

0xf940,	// (0x0009bc08) bg_popup_trans_pane_g

0xd654,	// (0x0009991c) cell_image3_tool_bar_pane_ParamLimits

0xd654,	// (0x0009991c) cell_image3_tool_bar_pane

0xcc18,	// (0x00098ee0) cell_image3_tool_bar_pane_g1

0x990a,	// (0x00095bd2) bg_popup_trans_pane_cp1

0xd66a,	// (0x00099932) popup_image3_note_pane_t1

0xd678,	// (0x00099940) popup_image3_note_pane_t2

0xd686,	// (0x0009994e) popup_image3_note_pane_t3

0x0002,

0xf953,	// (0x0009bc1b) popup_image3_note_pane_t

0xd696,	// (0x0009995e) popup_image3_note_pane_t3_copy1

0x6bdd,	// (0x00092ea5) bg_myfav_hc_instruction_pane_ParamLimits

0x6bdd,	// (0x00092ea5) bg_myfav_hc_instruction_pane

0x6bf5,	// (0x00092ebd) cell_myfav_contact_pane_ParamLimits

0x6bf5,	// (0x00092ebd) cell_myfav_contact_pane

0x6c11,	// (0x00092ed9) cell_myfav_contact_pane_cp1_ParamLimits

0x6c11,	// (0x00092ed9) cell_myfav_contact_pane_cp1

0x6c29,	// (0x00092ef1) cell_myfav_contact_pane_cp2_ParamLimits

0x6c29,	// (0x00092ef1) cell_myfav_contact_pane_cp2

0x6c41,	// (0x00092f09) cell_myfav_contact_pane_cp3_ParamLimits

0x6c41,	// (0x00092f09) cell_myfav_contact_pane_cp3

0x6c58,	// (0x00092f20) cell_myfav_contact_pane_cp4_ParamLimits

0x6c58,	// (0x00092f20) cell_myfav_contact_pane_cp4

0x6c70,	// (0x00092f38) cell_myfav_contact_pane_cp5_ParamLimits

0x6c70,	// (0x00092f38) cell_myfav_contact_pane_cp5

0x6c84,	// (0x00092f4c) cell_myfav_contact_pane_cp6_ParamLimits

0x6c84,	// (0x00092f4c) cell_myfav_contact_pane_cp6

0x6c9a,	// (0x00092f62) cell_myfav_contact_pane_cp7_ParamLimits

0x6c9a,	// (0x00092f62) cell_myfav_contact_pane_cp7

0xd6a4,	// (0x0009996c) listscroll_gen_pane_cp05

0x6cb2,	// (0x00092f7a) main_myfav_hc_pane_g1_ParamLimits

0x6cb2,	// (0x00092f7a) main_myfav_hc_pane_g1

0x6ccc,	// (0x00092f94) main_myfav_hc_pane_g2_ParamLimits

0x6ccc,	// (0x00092f94) main_myfav_hc_pane_g2

0x0002,

0xf95a,	// (0x0009bc22) main_myfav_hc_pane_g_ParamLimits

0xf95a,	// (0x0009bc22) main_myfav_hc_pane_g

0x6d00,	// (0x00092fc8) main_myfav_hc_pane_t1_ParamLimits

0x6d00,	// (0x00092fc8) main_myfav_hc_pane_t1

0xd6ad,	// (0x00099975) main_myfav_hc_pane_t2_ParamLimits

0xd6ad,	// (0x00099975) main_myfav_hc_pane_t2

0xd6bf,	// (0x00099987) main_myfav_hc_pane_t3_ParamLimits

0xd6bf,	// (0x00099987) main_myfav_hc_pane_t3

0x6d17,	// (0x00092fdf) main_myfav_hc_pane_t4_ParamLimits

0x6d17,	// (0x00092fdf) main_myfav_hc_pane_t4

0x0004,

0xf961,	// (0x0009bc29) main_myfav_hc_pane_t_ParamLimits

0xf961,	// (0x0009bc29) main_myfav_hc_pane_t

0xcc18,	// (0x00098ee0) bg_myfav_hc_instruction_pane_g1

0xd6d1,	// (0x00099999) cell_myfav_contact_pane_g1_ParamLimits

0xd6d1,	// (0x00099999) cell_myfav_contact_pane_g1

0xd6d1,	// (0x00099999) cell_myfav_contact_pane_g2_ParamLimits

0xd6d1,	// (0x00099999) cell_myfav_contact_pane_g2

0xd6dd,	// (0x000999a5) cell_myfav_contact_pane_g3_ParamLimits

0xd6dd,	// (0x000999a5) cell_myfav_contact_pane_g3

0xceb5,	// (0x0009917d) cell_myfav_contact_pane_g4_ParamLimits

0xceb5,	// (0x0009917d) cell_myfav_contact_pane_g4

0xd6ea,	// (0x000999b2) cell_myfav_contact_pane_g5_ParamLimits

0xd6ea,	// (0x000999b2) cell_myfav_contact_pane_g5

0x0004,

0xf96c,	// (0x0009bc34) cell_myfav_contact_pane_g_ParamLimits

0xf96c,	// (0x0009bc34) cell_myfav_contact_pane_g

0x6ce6,	// (0x00092fae) main_myfav_hc_pane_g3_ParamLimits

0x6ce6,	// (0x00092fae) main_myfav_hc_pane_g3

0x0d33,	// (0x0008cffb) popup_adpt_find_window

0x6d41,	// (0x00093009) afind_page_pane_ParamLimits

0x6d41,	// (0x00093009) afind_page_pane

0x6d56,	// (0x0009301e) aid_size_cell_afind_ParamLimits

0x6d56,	// (0x0009301e) aid_size_cell_afind

0x6d74,	// (0x0009303c) bg_popup_sub_pane_cp09_ParamLimits

0x6d74,	// (0x0009303c) bg_popup_sub_pane_cp09

0x6d81,	// (0x00093049) find_pane_cp01_ParamLimits

0x6d81,	// (0x00093049) find_pane_cp01

0xd6f6,	// (0x000999be) grid_afind_control_pane_ParamLimits

0xd6f6,	// (0x000999be) grid_afind_control_pane

0x6d8e,	// (0x00093056) grid_afind_pane_ParamLimits

0x6d8e,	// (0x00093056) grid_afind_pane

0x6db0,	// (0x00093078) cell_afind_pane_ParamLimits

0x6db0,	// (0x00093078) cell_afind_pane

0xcc18,	// (0x00098ee0) afind_page_pane_g1

0x6e17,	// (0x000930df) afind_page_pane_g2

0x6e20,	// (0x000930e8) afind_page_pane_g3

0x0002,

0xf977,	// (0x0009bc3f) afind_page_pane_g

0x6e29,	// (0x000930f1) afind_page_pane_t1

0xd70a,	// (0x000999d2) cell_afind_grid_control_pane_ParamLimits

0xd70a,	// (0x000999d2) cell_afind_grid_control_pane

0xd4fc,	// (0x000997c4) bg_button_pane_cp69_ParamLimits

0xd4fc,	// (0x000997c4) bg_button_pane_cp69

0x6e49,	// (0x00093111) cell_afind_pane_g1_ParamLimits

0x6e49,	// (0x00093111) cell_afind_pane_g1

0x6e56,	// (0x0009311e) cell_afind_pane_t1_ParamLimits

0x6e56,	// (0x0009311e) cell_afind_pane_t1

0xaabd,	// (0x00096d85) bg_button_pane_cp72

0xd719,	// (0x000999e1) cell_afind_grid_control_pane_g1

0x3dc1,	// (0x00090089) aid_image_placing_area_ParamLimits

0x3dc1,	// (0x00090089) aid_image_placing_area

0xd1c8,	// (0x00099490) field_vitu_entry_pane_g1_ParamLimits

0xd1c8,	// (0x00099490) field_vitu_entry_pane_g1

0xd1d4,	// (0x0009949c) field_vitu_entry_pane_g2_ParamLimits

0xd1d4,	// (0x0009949c) field_vitu_entry_pane_g2

0x0001,

0xf828,	// (0x0009baf0) field_vitu_entry_pane_g_ParamLimits

0xf828,	// (0x0009baf0) field_vitu_entry_pane_g

0x5fb5,	// (0x0009227d) cell_vitu_itu_pane_g1_ParamLimits

0x5ff7,	// (0x000922bf) cell_vitu_itu_pane_t3_ParamLimits

0x5ff7,	// (0x000922bf) cell_vitu_itu_pane_t3

0xd4ac,	// (0x00099774) mp4_progress_pane_t1_ParamLimits

0xd4c5,	// (0x0009978d) mp4_progress_pane_t2_ParamLimits

0xf8bd,	// (0x0009bb85) mp4_progress_pane_t_ParamLimits

0xd4de,	// (0x000997a6) mup_progress_pane_cp04_ParamLimits

0x6d2b,	// (0x00092ff3) main_myfav_hc_pane_t5_ParamLimits

0x6d2b,	// (0x00092ff3) main_myfav_hc_pane_t5

0x0bf2,	// (0x0008ceba) aid_zoom_text_primary

0x0d33,	// (0x0008cffb) popup_adpt_find_window_ParamLimits

0x995b,	// (0x00095c23) main_cam_set_pane

0x6768,	// (0x00092a30) cam4_zoom_pane_ParamLimits

0x6768,	// (0x00092a30) cam4_zoom_pane

0x6e68,	// (0x00093130) main_cam_set_pane_g1_ParamLimits

0x6e68,	// (0x00093130) main_cam_set_pane_g1

0x6e76,	// (0x0009313e) main_cam_set_pane_g2_ParamLimits

0x6e76,	// (0x0009313e) main_cam_set_pane_g2

0x0001,

0xf97e,	// (0x0009bc46) main_cam_set_pane_g_ParamLimits

0xf97e,	// (0x0009bc46) main_cam_set_pane_g

0x6e97,	// (0x0009315f) main_cam_set_pane_t1_ParamLimits

0x6e97,	// (0x0009315f) main_cam_set_pane_t1

0x6eb2,	// (0x0009317a) main_cset_listscroll_pane_ParamLimits

0x6eb2,	// (0x0009317a) main_cset_listscroll_pane

0x6ed6,	// (0x0009319e) main_cset_slider_pane_ParamLimits

0x6ed6,	// (0x0009319e) main_cset_slider_pane

0xd72a,	// (0x000999f2) main_cset_list_pane_ParamLimits

0xd72a,	// (0x000999f2) main_cset_list_pane

0xd73a,	// (0x00099a02) scroll_pane_cp028

0x6f00,	// (0x000931c8) aid_area_touch_slider

0x6f1c,	// (0x000931e4) cset_slider_pane

0x6f46,	// (0x0009320e) main_cset_slider_pane_g1

0x6f5b,	// (0x00093223) main_cset_slider_pane_g2

0x0011,

0xf983,	// (0x0009bc4b) main_cset_slider_pane_g

0xd773,	// (0x00099a3b) main_cset_slider_pane_t1

0x701d,	// (0x000932e5) main_cset_slider_pane_t2

0x7037,	// (0x000932ff) main_cset_slider_pane_t3

0x7051,	// (0x00093319) main_cset_slider_pane_t4

0x706b,	// (0x00093333) main_cset_slider_pane_t5

0x7089,	// (0x00093351) main_cset_slider_pane_t6

0x709e,	// (0x00093366) main_cset_slider_pane_t7

0x000e,

0xf9a8,	// (0x0009bc70) main_cset_slider_pane_t

0x71aa,	// (0x00093472) cset_list_set_pane_ParamLimits

0x71aa,	// (0x00093472) cset_list_set_pane

0x71be,	// (0x00093486) aid_position_infowindow_above

0x71c6,	// (0x0009348e) aid_position_infowindow_below

0x71ce,	// (0x00093496) cset_list_set_pane_g1_ParamLimits

0x71ce,	// (0x00093496) cset_list_set_pane_g1

0x00f1,	// (0x0008c3b9) cset_list_set_pane_g3_ParamLimits

0x00f1,	// (0x0008c3b9) cset_list_set_pane_g3

0x0001,

0xf9c7,	// (0x0009bc8f) cset_list_set_pane_g_ParamLimits

0xf9c7,	// (0x0009bc8f) cset_list_set_pane_g

0x0100,	// (0x0008c3c8) cset_list_set_pane_t1_ParamLimits

0x0100,	// (0x0008c3c8) cset_list_set_pane_t1

0x995b,	// (0x00095c23) list_highlight_pane_cp021_ParamLimits

0x995b,	// (0x00095c23) list_highlight_pane_cp021

0xb4f4,	// (0x000977bc) cset_slider_pane_g1

0xb506,	// (0x000977ce) cset_slider_pane_g2

0xb4fd,	// (0x000977c5) cset_slider_pane_g3

0x0002,

0xf9cc,	// (0x0009bc94) cset_slider_pane_g

0xa7e6,	// (0x00096aae) aid_area_touch_cam4_zoom

0xa7ee,	// (0x00096ab6) cam4_zoom_cont_pane

0xa7f6,	// (0x00096abe) cam4_zoom_pane_g1

0xa7fe,	// (0x00096ac6) cam4_zoom_pane_g2

0x71da,	// (0x000934a2) cam4_zoom_pane_g3

0x0002,

0xf9d3,	// (0x0009bc9b) cam4_zoom_pane_g

0xdd48,	// (0x0009a010) cam4_zoom_cont_pane_g1

0xdd51,	// (0x0009a019) cam4_zoom_cont_pane_g2

0xdd5a,	// (0x0009a022) cam4_zoom_cont_pane_g3

0x0002,

0xf9da,	// (0x0009bca2) cam4_zoom_cont_pane_g

0x65e5,	// (0x000928ad) call4_image_pane_ParamLimits

0x65e5,	// (0x000928ad) call4_image_pane

0xd508,	// (0x000997d0) call4_windows_conf_pane_ParamLimits

0xd523,	// (0x000997eb) popup_call4_audio_in_window_ParamLimits

0xd523,	// (0x000997eb) popup_call4_audio_in_window

0x990a,	// (0x00095bd2) bg_popup_call2_act_pane_cp02

0xd585,	// (0x0009984d) call4_list_conf_pane

0xcc18,	// (0x00098ee0) call4_image_pane_g1

0xcc18,	// (0x00098ee0) call4_image_pane_g2

0x0001,

0xf6ee,	// (0x0009b9b6) call4_image_pane_g

0xd813,	// (0x00099adb) list_single_graphic_popup_conf4_pane_ParamLimits

0xd813,	// (0x00099adb) list_single_graphic_popup_conf4_pane

0x990a,	// (0x00095bd2) list_highlight_pane_cp022

0xd828,	// (0x00099af0) list_single_graphic_popup_conf4_pane_g1

0xb1e0,	// (0x000974a8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e1,	// (0x0009bca9) list_single_graphic_popup_conf4_pane_g

0xd830,	// (0x00099af8) list_single_graphic_popup_conf4_pane_t1

0x1f8c,	// (0x0008e254) popup_vtel_slider_window_ParamLimits

0x1f8c,	// (0x0008e254) popup_vtel_slider_window

0xd4ea,	// (0x000997b2) dialer2_ne_pane_t2_ParamLimits

0xd4ea,	// (0x000997b2) dialer2_ne_pane_t2

0x0001,

0xf8c2,	// (0x0009bb8a) dialer2_ne_pane_t_ParamLimits

0xf8c2,	// (0x0009bb8a) dialer2_ne_pane_t

0xc9f7,	// (0x00098cbf) bg_popup_sub_pane_cp010_ParamLimits

0xc9f7,	// (0x00098cbf) bg_popup_sub_pane_cp010

0x71e2,	// (0x000934aa) popup_vtel_slider_window_g1_ParamLimits

0x71e2,	// (0x000934aa) popup_vtel_slider_window_g1

0x71f5,	// (0x000934bd) popup_vtel_slider_window_g2_ParamLimits

0x71f5,	// (0x000934bd) popup_vtel_slider_window_g2

0x0003,

0xf9e6,	// (0x0009bcae) popup_vtel_slider_window_g_ParamLimits

0xf9e6,	// (0x0009bcae) popup_vtel_slider_window_g

0x724b,	// (0x00093513) vtel_slider_pane_ParamLimits

0x724b,	// (0x00093513) vtel_slider_pane

0x726d,	// (0x00093535) vtel_slider_pane_g1_ParamLimits

0x726d,	// (0x00093535) vtel_slider_pane_g1

0x7281,	// (0x00093549) vtel_slider_pane_g2_ParamLimits

0x7281,	// (0x00093549) vtel_slider_pane_g2

0x7299,	// (0x00093561) vtel_slider_pane_g3_ParamLimits

0x7299,	// (0x00093561) vtel_slider_pane_g3

0x726d,	// (0x00093535) vtel_slider_pane_g4_ParamLimits

0x726d,	// (0x00093535) vtel_slider_pane_g4

0x72af,	// (0x00093577) vtel_slider_pane_g5_ParamLimits

0x72af,	// (0x00093577) vtel_slider_pane_g5

0x0004,

0xf9ef,	// (0x0009bcb7) vtel_slider_pane_g_ParamLimits

0xf9ef,	// (0x0009bcb7) vtel_slider_pane_g

0x990a,	// (0x00095bd2) main_gallery2_pane

0x696c,	// (0x00092c34) aid_size_row_itut2_dropdow_list_ParamLimits

0x696c,	// (0x00092c34) aid_size_row_itut2_dropdow_list

0x69fc,	// (0x00092cc4) grid_vitu2_function_top_pane_ParamLimits

0x69fc,	// (0x00092cc4) grid_vitu2_function_top_pane

0x6a5b,	// (0x00092d23) popup_vitu2_dropdown_list_window_ParamLimits

0x6a5b,	// (0x00092d23) popup_vitu2_dropdown_list_window

0x6a84,	// (0x00092d4c) popup_vitu2_match_list_window

0x72c5,	// (0x0009358d) cell_vitu2_function_top_pane_ParamLimits

0x72c5,	// (0x0009358d) cell_vitu2_function_top_pane

0x72e5,	// (0x000935ad) cell_vitu2_function_top_pane_cp01_ParamLimits

0x72e5,	// (0x000935ad) cell_vitu2_function_top_pane_cp01

0x7303,	// (0x000935cb) cell_vitu2_function_top_wide_pane_ParamLimits

0x7303,	// (0x000935cb) cell_vitu2_function_top_wide_pane

0x995b,	// (0x00095c23) bg_button_pane_cp012

0x7321,	// (0x000935e9) cell_vitu2_function_top_pane_g1

0xa806,	// (0x00096ace) bg_button_pane_cp013_ParamLimits

0xa806,	// (0x00096ace) bg_button_pane_cp013

0x7335,	// (0x000935fd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7335,	// (0x000935fd) cell_vitu2_function_top_wide_pane_g1

0x995b,	// (0x00095c23) bg_popup_sub_pane_cp20

0x734d,	// (0x00093615) list_vitu2_match_list_pane

0xd61c,	// (0x000998e4) bg_popup_sub_pane_cp20_g1

0xd624,	// (0x000998ec) bg_popup_sub_pane_cp20_g2

0xacc8,	// (0x00096f90) bg_popup_sub_pane_cp20_g3

0xd62c,	// (0x000998f4) bg_popup_sub_pane_cp20_g4

0xaca8,	// (0x00096f70) bg_popup_sub_pane_cp20_g5

0xd846,	// (0x00099b0e) bg_popup_sub_pane_cp20_g6

0xd63c,	// (0x00099904) bg_popup_sub_pane_cp20_g7

0xd644,	// (0x0009990c) bg_popup_sub_pane_cp20_g8

0xd64c,	// (0x00099914) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9fa,	// (0x0009bcc2) bg_popup_sub_pane_cp20_g

0xa822,	// (0x00096aea) list_vitu2_match_list_item_pane_ParamLimits

0xa822,	// (0x00096aea) list_vitu2_match_list_item_pane

0xa834,	// (0x00096afc) list_vitu2_match_list_item_pane_t1

0x990a,	// (0x00095bd2) bg_popup_sub_pane_cp21

0xb109,	// (0x000973d1) grid_vitu2_dropdown_list_pane

0x736b,	// (0x00093633) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x736b,	// (0x00093633) cell_vitu2_dropdown_list_char_pane

0x738e,	// (0x00093656) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x738e,	// (0x00093656) cell_vitu2_dropdown_list_ctrl_pane

0xd84e,	// (0x00099b16) cell_vitu2_dropdown_list_char_pane_g1

0xd857,	// (0x00099b1f) cell_vitu2_dropdown_list_char_pane_g2

0xd860,	// (0x00099b28) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa17,	// (0x0009bcdf) cell_vitu2_dropdown_list_char_pane_g

0x73bc,	// (0x00093684) cell_vitu2_dropdown_list_char_pane_t1

0x73ca,	// (0x00093692) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x73ca,	// (0x00093692) cell_vitu2_dropdown_list_ctrl_pane_g1

0x73da,	// (0x000936a2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x73da,	// (0x000936a2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x73eb,	// (0x000936b3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x73eb,	// (0x000936b3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x73fb,	// (0x000936c3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x73fb,	// (0x000936c3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce50,	// (0x00099118) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce50,	// (0x00099118) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1e,	// (0x0009bce6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1e,	// (0x0009bce6) cell_vitu2_dropdown_list_ctrl_pane_g

0x7417,	// (0x000936df) aid_size_cell_gallery2_ParamLimits

0x7417,	// (0x000936df) aid_size_cell_gallery2

0x742d,	// (0x000936f5) grid_gallery2_pane_ParamLimits

0x742d,	// (0x000936f5) grid_gallery2_pane

0x7441,	// (0x00093709) scroll_pane_cp029_ParamLimits

0x7441,	// (0x00093709) scroll_pane_cp029

0x744d,	// (0x00093715) cell_gallery2_pane_ParamLimits

0x744d,	// (0x00093715) cell_gallery2_pane

0xd869,	// (0x00099b31) cell_gallery2_pane_g2

0x7486,	// (0x0009374e) cell_gallery2_pane_g3

0xd873,	// (0x00099b3b) cell_gallery2_pane_g4

0xd87b,	// (0x00099b43) cell_gallery2_pane_g5

0xb3ae,	// (0x00097676) grid_highlight_pane_cp10

0x6a84,	// (0x00092d4c) popup_vitu2_match_list_window_ParamLimits

0x6a9b,	// (0x00092d63) popup_vitu2_query_window_ParamLimits

0x6a9b,	// (0x00092d63) popup_vitu2_query_window

0x990a,	// (0x00095bd2) bg_vitu2_candi_button_pane

0xd84e,	// (0x00099b16) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd857,	// (0x00099b1f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd860,	// (0x00099b28) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0161,	// (0x0008c429) bg_button_pane_cp015

0x748e,	// (0x00093756) bg_button_pane_cp016

0x74a1,	// (0x00093769) bg_button_pane_cp017

0xc7c7,	// (0x00098a8f) bg_popup_sub_pane_cp22

0xd883,	// (0x00099b4b) popup_vitu2_query_window_g1

0x0196,	// (0x0008c45e) popup_vitu2_query_window_g2

0x0002,

0xfa29,	// (0x0009bcf1) popup_vitu2_query_window_g

0x01b5,	// (0x0008c47d) popup_vitu2_query_window_t1_ParamLimits

0x01b5,	// (0x0008c47d) popup_vitu2_query_window_t1

0x01ea,	// (0x0008c4b2) popup_vitu2_query_window_t2_ParamLimits

0x01ea,	// (0x0008c4b2) popup_vitu2_query_window_t2

0x01fc,	// (0x0008c4c4) popup_vitu2_query_window_t3_ParamLimits

0x01fc,	// (0x0008c4c4) popup_vitu2_query_window_t3

0x74c5,	// (0x0009378d) popup_vitu2_query_window_t4_ParamLimits

0x74c5,	// (0x0009378d) popup_vitu2_query_window_t4

0x74e6,	// (0x000937ae) popup_vitu2_query_window_t5_ParamLimits

0x74e6,	// (0x000937ae) popup_vitu2_query_window_t5

0x0006,

0xfa30,	// (0x0009bcf8) popup_vitu2_query_window_t_ParamLimits

0xfa30,	// (0x0009bcf8) popup_vitu2_query_window_t

0xd722,	// (0x000999ea) main_cset_text_pane

0x6f00,	// (0x000931c8) aid_area_touch_slider_ParamLimits

0x6f1c,	// (0x000931e4) cset_slider_pane_ParamLimits

0x6f46,	// (0x0009320e) main_cset_slider_pane_g1_ParamLimits

0x6f5b,	// (0x00093223) main_cset_slider_pane_g2_ParamLimits

0xd743,	// (0x00099a0b) main_cset_slider_pane_g3_ParamLimits

0xd743,	// (0x00099a0b) main_cset_slider_pane_g3

0x6f70,	// (0x00093238) main_cset_slider_pane_g4_ParamLimits

0x6f70,	// (0x00093238) main_cset_slider_pane_g4

0x6f7f,	// (0x00093247) main_cset_slider_pane_g5_ParamLimits

0x6f7f,	// (0x00093247) main_cset_slider_pane_g5

0x6f8d,	// (0x00093255) main_cset_slider_pane_g6_ParamLimits

0x6f8d,	// (0x00093255) main_cset_slider_pane_g6

0xf983,	// (0x0009bc4b) main_cset_slider_pane_g_ParamLimits

0xd773,	// (0x00099a3b) main_cset_slider_pane_t1_ParamLimits

0x701d,	// (0x000932e5) main_cset_slider_pane_t2_ParamLimits

0x7037,	// (0x000932ff) main_cset_slider_pane_t3_ParamLimits

0x7051,	// (0x00093319) main_cset_slider_pane_t4_ParamLimits

0x706b,	// (0x00093333) main_cset_slider_pane_t5_ParamLimits

0x7089,	// (0x00093351) main_cset_slider_pane_t6_ParamLimits

0x709e,	// (0x00093366) main_cset_slider_pane_t7_ParamLimits

0x70cc,	// (0x00093394) main_cset_slider_pane_t8_ParamLimits

0x70cc,	// (0x00093394) main_cset_slider_pane_t8

0x70f4,	// (0x000933bc) main_cset_slider_pane_t9_ParamLimits

0x70f4,	// (0x000933bc) main_cset_slider_pane_t9

0x711c,	// (0x000933e4) main_cset_slider_pane_t10_ParamLimits

0x711c,	// (0x000933e4) main_cset_slider_pane_t10

0x7144,	// (0x0009340c) main_cset_slider_pane_t11_ParamLimits

0x7144,	// (0x0009340c) main_cset_slider_pane_t11

0x716e,	// (0x00093436) main_cset_slider_pane_t12_ParamLimits

0x716e,	// (0x00093436) main_cset_slider_pane_t12

0x718b,	// (0x00093453) main_cset_slider_pane_t13_ParamLimits

0x718b,	// (0x00093453) main_cset_slider_pane_t13

0xf9a8,	// (0x0009bc70) main_cset_slider_pane_t_ParamLimits

0x990a,	// (0x00095bd2) bg_popup_sub_pane_cp011

0xd88f,	// (0x00099b57) main_cset_text_pane_g1

0xd897,	// (0x00099b5f) main_cset_text_pane_t1

0xd8a5,	// (0x00099b6d) main_cset_text_pane_t2

0xd8b3,	// (0x00099b7b) main_cset_text_pane_t3

0xd8c1,	// (0x00099b89) main_cset_text_pane_t4

0xd8cf,	// (0x00099b97) main_cset_text_pane_t5

0xd8dd,	// (0x00099ba5) main_cset_text_pane_t6

0xd8eb,	// (0x00099bb3) main_cset_text_pane_t7

0x0006,

0xfa3f,	// (0x0009bd07) main_cset_text_pane_t

0x990a,	// (0x00095bd2) main_cam4_burst_pane

0x990a,	// (0x00095bd2) main_cam5_pane

0x6e37,	// (0x000930ff) bg_button_pane_cp019

0x6e40,	// (0x00093108) bg_button_pane_cp020

0xd74f,	// (0x00099a17) main_cset_slider_pane_g7_ParamLimits

0xd74f,	// (0x00099a17) main_cset_slider_pane_g7

0xd75b,	// (0x00099a23) main_cset_slider_pane_g8_ParamLimits

0xd75b,	// (0x00099a23) main_cset_slider_pane_g8

0x6fa1,	// (0x00093269) main_cset_slider_pane_g9_ParamLimits

0x6fa1,	// (0x00093269) main_cset_slider_pane_g9

0x6fad,	// (0x00093275) main_cset_slider_pane_g10_ParamLimits

0x6fad,	// (0x00093275) main_cset_slider_pane_g10

0x6fb9,	// (0x00093281) main_cset_slider_pane_g11_ParamLimits

0x6fb9,	// (0x00093281) main_cset_slider_pane_g11

0x6fc5,	// (0x0009328d) main_cset_slider_pane_g12_ParamLimits

0x6fc5,	// (0x0009328d) main_cset_slider_pane_g12

0x6fd1,	// (0x00093299) main_cset_slider_pane_g13_ParamLimits

0x6fd1,	// (0x00093299) main_cset_slider_pane_g13

0x6fdd,	// (0x000932a5) main_cset_slider_pane_g14_ParamLimits

0x6fdd,	// (0x000932a5) main_cset_slider_pane_g14

0x6fe9,	// (0x000932b1) main_cset_slider_pane_g15_ParamLimits

0x6fe9,	// (0x000932b1) main_cset_slider_pane_g15

0xd7a1,	// (0x00099a69) main_cset_slider_pane_t14_ParamLimits

0xd7a1,	// (0x00099a69) main_cset_slider_pane_t14

0xd7da,	// (0x00099aa2) main_cset_slider_pane_t15_ParamLimits

0xd7da,	// (0x00099aa2) main_cset_slider_pane_t15

0x7507,	// (0x000937cf) aid_cam4_burst_size_cell_ParamLimits

0x7507,	// (0x000937cf) aid_cam4_burst_size_cell

0x7527,	// (0x000937ef) grid_cam4_burst_pane_ParamLimits

0x7527,	// (0x000937ef) grid_cam4_burst_pane

0x7561,	// (0x00093829) linegrid_cam4_burst_pane_ParamLimits

0x7561,	// (0x00093829) linegrid_cam4_burst_pane

0xd8f9,	// (0x00099bc1) scroll_pane_cp30_ParamLimits

0xd8f9,	// (0x00099bc1) scroll_pane_cp30

0x7583,	// (0x0009384b) cell_cam4_burst_pane_ParamLimits

0x7583,	// (0x0009384b) cell_cam4_burst_pane

0xd905,	// (0x00099bcd) linegrid_cam4_burst_pane_g1_ParamLimits

0xd905,	// (0x00099bcd) linegrid_cam4_burst_pane_g1

0x75d8,	// (0x000938a0) linegrid_cam4_burst_pane_g2_ParamLimits

0x75d8,	// (0x000938a0) linegrid_cam4_burst_pane_g2

0xd912,	// (0x00099bda) linegrid_cam4_burst_pane_g3_ParamLimits

0xd912,	// (0x00099bda) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4e,	// (0x0009bd16) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0009bd16) linegrid_cam4_burst_pane_g

0x75e9,	// (0x000938b1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x75e9,	// (0x000938b1) linegrid_cam4_burst_pane_g3_copy1

0xd91f,	// (0x00099be7) linegrid_cam4_burst_pane_g4_ParamLimits

0xd91f,	// (0x00099be7) linegrid_cam4_burst_pane_g4

0x7607,	// (0x000938cf) linegrid_cam4_burst_pane_g5_ParamLimits

0x7607,	// (0x000938cf) linegrid_cam4_burst_pane_g5

0x7618,	// (0x000938e0) linegrid_cam4_burst_pane_g6_ParamLimits

0x7618,	// (0x000938e0) linegrid_cam4_burst_pane_g6

0xd92c,	// (0x00099bf4) linegrid_cam4_burst_pane_g7_ParamLimits

0xd92c,	// (0x00099bf4) linegrid_cam4_burst_pane_g7

0x762f,	// (0x000938f7) cell_cam4_burst_pane_g1

0xd945,	// (0x00099c0d) main_cam5_pane_t1_ParamLimits

0xd945,	// (0x00099c0d) main_cam5_pane_t1

0xd957,	// (0x00099c1f) main_cam5_pane_t2_ParamLimits

0xd957,	// (0x00099c1f) main_cam5_pane_t2

0xd969,	// (0x00099c31) main_cam5_pane_t3_ParamLimits

0xd969,	// (0x00099c31) main_cam5_pane_t3

0xd97b,	// (0x00099c43) main_cam5_pane_t4_ParamLimits

0xd97b,	// (0x00099c43) main_cam5_pane_t4

0xd993,	// (0x00099c5b) main_cam5_pane_t5_ParamLimits

0xd993,	// (0x00099c5b) main_cam5_pane_t5

0xd9a7,	// (0x00099c6f) main_cam5_pane_t6_ParamLimits

0xd9a7,	// (0x00099c6f) main_cam5_pane_t6

0xd9bb,	// (0x00099c83) main_cam5_pane_t7_ParamLimits

0xd9bb,	// (0x00099c83) main_cam5_pane_t7

0xd9cd,	// (0x00099c95) main_cam5_pane_t8_ParamLimits

0xd9cd,	// (0x00099c95) main_cam5_pane_t8

0xd9eb,	// (0x00099cb3) main_cam5_pane_t9_ParamLimits

0xd9eb,	// (0x00099cb3) main_cam5_pane_t9

0xd9fd,	// (0x00099cc5) main_cam5_pane_t10_ParamLimits

0xd9fd,	// (0x00099cc5) main_cam5_pane_t10

0xda0f,	// (0x00099cd7) main_cam5_pane_t11_ParamLimits

0xda0f,	// (0x00099cd7) main_cam5_pane_t11

0xda23,	// (0x00099ceb) main_cam5_pane_t12_ParamLimits

0xda23,	// (0x00099ceb) main_cam5_pane_t12

0xda3a,	// (0x00099d02) main_cam5_pane_t13_ParamLimits

0xda3a,	// (0x00099d02) main_cam5_pane_t13

0x000c,

0xfa5a,	// (0x0009bd22) main_cam5_pane_t_ParamLimits

0xfa5a,	// (0x0009bd22) main_cam5_pane_t

0x0db6,	// (0x0008d07e) popup_scut_keymap_window_ParamLimits

0x0db6,	// (0x0008d07e) popup_scut_keymap_window

0x7642,	// (0x0009390a) aid_size_cell_brow_shortcut

0xb3ae,	// (0x00097676) bg_popup_window_pane_cp010

0x764e,	// (0x00093916) grid_scut_pane

0x765a,	// (0x00093922) cell_scut_pane_ParamLimits

0x765a,	// (0x00093922) cell_scut_pane

0x7673,	// (0x0009393b) cell_scut_pane_g1

0xda5d,	// (0x00099d25) cell_scut_pane_t1

0xda6c,	// (0x00099d34) cell_scut_pane_t2

0x767c,	// (0x00093944) cell_scut_pane_t3

0x0002,

0xfa75,	// (0x0009bd3d) cell_scut_pane_t

0x547e,	// (0x00091746) main_mup3_pane_g8_ParamLimits

0x547e,	// (0x00091746) main_mup3_pane_g8

0x6986,	// (0x00092c4e) area_vitu2_query_pane_ParamLimits

0x6986,	// (0x00092c4e) area_vitu2_query_pane

0x0175,	// (0x0008c43d) input_focus_pane_cp08

0xda7b,	// (0x00099d43) area_vitu2_query_pane_g1

0x027a,	// (0x0008c542) area_vitu2_query_pane_g2

0x0001,

0xfa7c,	// (0x0009bd44) area_vitu2_query_pane_g

0x768a,	// (0x00093952) area_vitu2_query_pane_t1_ParamLimits

0x768a,	// (0x00093952) area_vitu2_query_pane_t1

0x769e,	// (0x00093966) area_vitu2_query_pane_t2_ParamLimits

0x769e,	// (0x00093966) area_vitu2_query_pane_t2

0x028d,	// (0x0008c555) area_vitu2_query_pane_t3_ParamLimits

0x028d,	// (0x0008c555) area_vitu2_query_pane_t3

0x76b2,	// (0x0009397a) area_vitu2_query_pane_t4_ParamLimits

0x76b2,	// (0x0009397a) area_vitu2_query_pane_t4

0x76da,	// (0x000939a2) area_vitu2_query_pane_t5_ParamLimits

0x76da,	// (0x000939a2) area_vitu2_query_pane_t5

0x7702,	// (0x000939ca) area_vitu2_query_pane_t6_ParamLimits

0x7702,	// (0x000939ca) area_vitu2_query_pane_t6

0x0006,

0xfa81,	// (0x0009bd49) area_vitu2_query_pane_t_ParamLimits

0xfa81,	// (0x0009bd49) area_vitu2_query_pane_t

0x774e,	// (0x00093a16) bg_button_pane_cp018

0x775c,	// (0x00093a24) bg_button_pane_cp021

0x02b5,	// (0x0008c57d) bg_button_pane_cp022

0x02c6,	// (0x0008c58e) input_focus_pane_cp09

0x333f,	// (0x0008f607) aid_size_touch_mv_arrow_left

0x3368,	// (0x0008f630) aid_size_touch_mv_arrow_right

0x7001,	// (0x000932c9) main_cset_slider_pane_g16_ParamLimits

0x7001,	// (0x000932c9) main_cset_slider_pane_g16

0x700f,	// (0x000932d7) main_cset_slider_pane_g17_ParamLimits

0x700f,	// (0x000932d7) main_cset_slider_pane_g17

0x762f,	// (0x000938f7) cell_cam4_burst_pane_g1_ParamLimits

0x990a,	// (0x00095bd2) compa_mode_pane

0x7205,	// (0x000934cd) popup_vtel_slider_window_g3_ParamLimits

0x7205,	// (0x000934cd) popup_vtel_slider_window_g3

0x721c,	// (0x000934e4) popup_vtel_slider_window_g4_ParamLimits

0x721c,	// (0x000934e4) popup_vtel_slider_window_g4

0x7233,	// (0x000934fb) popup_vtel_slider_window_t1_ParamLimits

0x7233,	// (0x000934fb) popup_vtel_slider_window_t1

0x990a,	// (0x00095bd2) main_cl_pane

0xc7f3,	// (0x00098abb) popup_imed_adjust2_window_ParamLimits

0xc7c7,	// (0x00098a8f) bg_tb_trans_pane_cp05_ParamLimits

0xd0fd,	// (0x000993c5) popup_imed_adjust2_window_g1_ParamLimits

0xd10c,	// (0x000993d4) popup_imed_adjust2_window_g2_ParamLimits

0xd10c,	// (0x000993d4) popup_imed_adjust2_window_g2

0xd118,	// (0x000993e0) popup_imed_adjust2_window_g3_ParamLimits

0xd118,	// (0x000993e0) popup_imed_adjust2_window_g3

0x0002,

0xf7ec,	// (0x0009bab4) popup_imed_adjust2_window_g_ParamLimits

0xf7ec,	// (0x0009bab4) popup_imed_adjust2_window_g

0xd124,	// (0x000993ec) popup_imed_adjust2_window_t1_ParamLimits

0xd13c,	// (0x00099404) slider_imed_adjust_pane_ParamLimits

0xd150,	// (0x00099418) slider_imed_adjust_pane_g1_ParamLimits

0xd160,	// (0x00099428) slider_imed_adjust_pane_g2_ParamLimits

0xd170,	// (0x00099438) slider_imed_adjust_pane_g3_ParamLimits

0xd181,	// (0x00099449) slider_imed_adjust_pane_g4_ParamLimits

0xf7f3,	// (0x0009babb) slider_imed_adjust_pane_g_ParamLimits

0x6708,	// (0x000929d0) aid_touch_area_cam4_ParamLimits

0x6708,	// (0x000929d0) aid_touch_area_cam4

0xa6f7,	// (0x000969bf) battery_pane_cp01

0x67da,	// (0x00092aa2) main_camera4_pane_g6_ParamLimits

0x67da,	// (0x00092aa2) main_camera4_pane_g6

0x6804,	// (0x00092acc) main_camera4_pane_t2_ParamLimits

0x6804,	// (0x00092acc) main_camera4_pane_t2

0x0001,

0xf8f6,	// (0x0009bbbe) main_camera4_pane_t_ParamLimits

0xf8f6,	// (0x0009bbbe) main_camera4_pane_t

0x6839,	// (0x00092b01) aid_touch_area_vid4_ParamLimits

0x6839,	// (0x00092b01) aid_touch_area_vid4

0x688d,	// (0x00092b55) main_video4_pane_g5_ParamLimits

0x688d,	// (0x00092b55) main_video4_pane_g5

0x68b2,	// (0x00092b7a) vid4_progress_pane_ParamLimits

0x68b2,	// (0x00092b7a) vid4_progress_pane

0xd767,	// (0x00099a2f) main_cset_slider_pane_g18_ParamLimits

0xd767,	// (0x00099a2f) main_cset_slider_pane_g18

0xd939,	// (0x00099c01) cell_cam4_burst_pane_g2_ParamLimits

0xd939,	// (0x00099c01) cell_cam4_burst_pane_g2

0x0001,

0xfa55,	// (0x0009bd1d) cell_cam4_burst_pane_g_ParamLimits

0xfa55,	// (0x0009bd1d) cell_cam4_burst_pane_g

0xa0be,	// (0x00096386) bg_cl_pane_ParamLimits

0xa0be,	// (0x00096386) bg_cl_pane

0x7768,	// (0x00093a30) cl_header_pane_ParamLimits

0x7768,	// (0x00093a30) cl_header_pane

0x777c,	// (0x00093a44) cl_listscroll_pane_ParamLimits

0x777c,	// (0x00093a44) cl_listscroll_pane

0xda87,	// (0x00099d4f) bg_cl_pane_g1

0xda8f,	// (0x00099d57) bg_cl_pane_g2

0xda97,	// (0x00099d5f) bg_cl_pane_g3

0xda9f,	// (0x00099d67) bg_cl_pane_g4

0xdaa7,	// (0x00099d6f) bg_cl_pane_g5

0xdaaf,	// (0x00099d77) bg_cl_pane_g6

0xdab7,	// (0x00099d7f) bg_cl_pane_g7

0xdabf,	// (0x00099d87) bg_cl_pane_g8

0xdac7,	// (0x00099d8f) bg_cl_pane_g9

0x0008,

0xfa90,	// (0x0009bd58) bg_cl_pane_g

0x778c,	// (0x00093a54) aid_height_cl_leading_ParamLimits

0x778c,	// (0x00093a54) aid_height_cl_leading

0x7798,	// (0x00093a60) aid_height_cl_text_ParamLimits

0x7798,	// (0x00093a60) aid_height_cl_text

0x995b,	// (0x00095c23) bg_cl_header_pane_ParamLimits

0x995b,	// (0x00095c23) bg_cl_header_pane

0x77b7,	// (0x00093a7f) cl_header_pane_g1_ParamLimits

0x77b7,	// (0x00093a7f) cl_header_pane_g1

0x77cd,	// (0x00093a95) cl_header_pane_t1_ParamLimits

0x77cd,	// (0x00093a95) cl_header_pane_t1

0xdacf,	// (0x00099d97) cl_list_pane

0xd73a,	// (0x00099a02) hc_scroll_pane_cp01

0xaca8,	// (0x00096f70) bg_cl_header_pane_g1

0xd61c,	// (0x000998e4) bg_cl_header_pane_g2

0xacc8,	// (0x00096f90) bg_cl_header_pane_g3

0xd62c,	// (0x000998f4) bg_cl_header_pane_g4

0xd624,	// (0x000998ec) bg_cl_header_pane_g5

0xd846,	// (0x00099b0e) bg_cl_header_pane_g6

0xd644,	// (0x0009990c) bg_cl_header_pane_g7

0xd64c,	// (0x00099914) bg_cl_header_pane_g8

0xd63c,	// (0x00099904) bg_cl_header_pane_g9

0x0008,

0xfaa3,	// (0x0009bd6b) bg_cl_header_pane_g

0x77e6,	// (0x00093aae) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x77e6,	// (0x00093aae) hc_cl_list_double_graphic_heading_pane

0x77f9,	// (0x00093ac1) hc_cl_list_single_graphic_pane_ParamLimits

0x77f9,	// (0x00093ac1) hc_cl_list_single_graphic_pane

0x7811,	// (0x00093ad9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7811,	// (0x00093ad9) hc_cl_list_single_graphic_pane_g1

0x781d,	// (0x00093ae5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x781d,	// (0x00093ae5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab6,	// (0x0009bd7e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab6,	// (0x0009bd7e) hc_cl_list_single_graphic_pane_g

0x7831,	// (0x00093af9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7831,	// (0x00093af9) hc_cl_list_single_graphic_pane_t1

0x7811,	// (0x00093ad9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7811,	// (0x00093ad9) hc_cl_list_double_graphic_heading_pane_g1

0x7846,	// (0x00093b0e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7846,	// (0x00093b0e) hc_cl_list_double_graphic_heading_pane_g2

0x785a,	// (0x00093b22) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x785a,	// (0x00093b22) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfabb,	// (0x0009bd83) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfabb,	// (0x0009bd83) hc_cl_list_double_graphic_heading_pane_g

0x786e,	// (0x00093b36) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x786e,	// (0x00093b36) hc_cl_list_double_graphic_heading_pane_t1

0x7883,	// (0x00093b4b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7883,	// (0x00093b4b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac2,	// (0x0009bd8a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac2,	// (0x0009bd8a) hc_cl_list_double_graphic_heading_pane_t

0x7898,	// (0x00093b60) vid4_progress_pane_g1

0x78aa,	// (0x00093b72) vid4_progress_pane_g2

0xa394,	// (0x0009665c) vid4_progress_pane_g3

0xa856,	// (0x00096b1e) vid4_progress_pane_g4

0x0004,

0xfac7,	// (0x0009bd8f) vid4_progress_pane_g

0xa874,	// (0x00096b3c) vid4_progress_pane_t1

0xa889,	// (0x00096b51) vid4_progress_pane_t2

0x0002,

0xfad2,	// (0x0009bd9a) vid4_progress_pane_t

0xa8b4,	// (0x00096b7c) wait_bar_pane_cp07

0xca05,	// (0x00098ccd) blid_firmament_pane_ParamLimits

0xca48,	// (0x00098d10) popup_blid_sat_info2_window_g1

0xca6c,	// (0x00098d34) popup_blid_sat_info2_window_t3

0xca7a,	// (0x00098d42) popup_blid_sat_info2_window_t4

0xca88,	// (0x00098d50) popup_blid_sat_info2_window_t5

0xca96,	// (0x00098d5e) popup_blid_sat_info2_window_t6

0xcaa6,	// (0x00098d6e) popup_blid_sat_info2_window_t7

0xcab4,	// (0x00098d7c) popup_blid_sat_info2_window_t8

0xcac2,	// (0x00098d8a) popup_blid_sat_info2_window_t9

0xcad0,	// (0x00098d98) popup_blid_sat_info2_window_t10

0xcb98,	// (0x00098e60) aid_firma_cardinal_ParamLimits

0xcbac,	// (0x00098e74) blid_firmament_pane_t1_ParamLimits

0xcbc3,	// (0x00098e8b) blid_firmament_pane_t2_ParamLimits

0xcbda,	// (0x00098ea2) blid_firmament_pane_t3_ParamLimits

0xcbf1,	// (0x00098eb9) blid_firmament_pane_t4_ParamLimits

0xf6e5,	// (0x0009b9ad) blid_firmament_pane_t_ParamLimits

0xcc08,	// (0x00098ed0) blid_sat_info_pane_ParamLimits

0x995b,	// (0x00095c23) main_cam_set_pane_ParamLimits

0x5d5f,	// (0x00092027) aid_size_cell_colour_35_ParamLimits

0x5d7f,	// (0x00092047) aid_size_cell_colour_112_ParamLimits

0x5d9f,	// (0x00092067) aid_size_cell_effect_ParamLimits

0xc7c7,	// (0x00098a8f) bg_tb_trans_pane_cp02_ParamLimits

0xaf0e,	// (0x000971d6) heading_imed_pane_ParamLimits

0x5dbf,	// (0x00092087) listscroll_imed_pane_ParamLimits

0xbde9,	// (0x000980b1) popup_call2_audio_first_window_g5_ParamLimits

0xbde9,	// (0x000980b1) popup_call2_audio_first_window_g5

0x6370,	// (0x00092638) aid_size_touch_image3_arrow_left_ParamLimits

0x6370,	// (0x00092638) aid_size_touch_image3_arrow_left

0x639c,	// (0x00092664) aid_size_touch_image3_arrow_right_ParamLimits

0x639c,	// (0x00092664) aid_size_touch_image3_arrow_right

0xa89f,	// (0x00096b67) vid4_progress_pane_t3

0x60de,	// (0x000923a6) main_hwr_training_symbol_option_pane_ParamLimits

0x60de,	// (0x000923a6) main_hwr_training_symbol_option_pane

0xd3ec,	// (0x000996b4) popup_hwr_training_preview_window_ParamLimits

0xd3ec,	// (0x000996b4) popup_hwr_training_preview_window

0x60fe,	// (0x000923c6) hwr_training_navi_pane_g5_ParamLimits

0x60fe,	// (0x000923c6) hwr_training_navi_pane_g5

0xd60a,	// (0x000998d2) popup_char_count_window

0x995b,	// (0x00095c23) bg_popup_sub_pane_cp20_ParamLimits

0x734d,	// (0x00093615) list_vitu2_match_list_pane_ParamLimits

0x735c,	// (0x00093624) vitu2_page_scroll_pane_ParamLimits

0x735c,	// (0x00093624) vitu2_page_scroll_pane

0xdad8,	// (0x00099da0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdad8,	// (0x00099da0) list_single_hwr_training_symbol_option_pane

0xdaeb,	// (0x00099db3) list_single_hwr_training_symbol_option_pane_g1

0xdaf3,	// (0x00099dbb) list_single_hwr_training_symbol_option_pane_t1

0xdb01,	// (0x00099dc9) bg_button_pane_cp023

0xdb0a,	// (0x00099dd2) bg_button_pane_cp024

0x78d6,	// (0x00093b9e) vitu2_page_scroll_pane_g1

0x78de,	// (0x00093ba6) vitu2_page_scroll_pane_g2

0x0001,

0xfad9,	// (0x0009bda1) vitu2_page_scroll_pane_g

0x78e8,	// (0x00093bb0) vitu2_page_scroll_pane_t1

0xc965,	// (0x00098c2d) popup_char_count_window_g1

0xdb3d,	// (0x00099e05) popup_char_count_window_g2

0xdb46,	// (0x00099e0e) popup_char_count_window_g3

0x0002,

0xfade,	// (0x0009bda6) popup_char_count_window_g

0xdb4f,	// (0x00099e17) popup_char_count_window_t1

0x990a,	// (0x00095bd2) main_vded2_pane

0xd0e9,	// (0x000993b1) aid_size_cell_imed_line

0xd0f3,	// (0x000993bb) grid_imed_line_width_pane

0xa7b1,	// (0x00096a79) vid4_indicators_pane_g4

0xdb5d,	// (0x00099e25) cell_imed_line_width_pane_ParamLimits

0xdb5d,	// (0x00099e25) cell_imed_line_width_pane

0xdb73,	// (0x00099e3b) cell_imed_line_width_pane_g1

0xcc39,	// (0x00098f01) cell_imed_line_width_pane_g2

0x0001,

0xfae5,	// (0x0009bdad) cell_imed_line_width_pane_g

0x78f7,	// (0x00093bbf) main_vded2_pane_g1_ParamLimits

0x78f7,	// (0x00093bbf) main_vded2_pane_g1

0x7912,	// (0x00093bda) main_vded2_pane_g2_ParamLimits

0x7912,	// (0x00093bda) main_vded2_pane_g2

0x0001,

0xfaea,	// (0x0009bdb2) main_vded2_pane_g_ParamLimits

0xfaea,	// (0x0009bdb2) main_vded2_pane_g

0x7924,	// (0x00093bec) vded2_slider_pane_ParamLimits

0x7924,	// (0x00093bec) vded2_slider_pane

0x7934,	// (0x00093bfc) aid_size_touch_vded2_end

0x793e,	// (0x00093c06) aid_size_touch_vded2_playhead

0xdb7c,	// (0x00099e44) aid_size_touch_vded2_start

0xdb84,	// (0x00099e4c) vded2_slider_bg_pane

0xdb8d,	// (0x00099e55) vded2_slider_pane_g1

0xdb96,	// (0x00099e5e) vded2_slider_pane_g2

0x7948,	// (0x00093c10) vded2_slider_pane_g3

0x0002,

0xfaef,	// (0x0009bdb7) vded2_slider_pane_g

0xdb9e,	// (0x00099e66) vded2_slider_bg_pane_g1

0xdba7,	// (0x00099e6f) vded2_slider_bg_pane_g2

0xdbb0,	// (0x00099e78) vded2_slider_bg_pane_g3

0x0002,

0xfaf6,	// (0x0009bdbe) vded2_slider_bg_pane_g

0x3a00,	// (0x0008fcc8) aid_postcard_touch_down_pane_ParamLimits

0x3a00,	// (0x0008fcc8) aid_postcard_touch_down_pane

0x3a18,	// (0x0008fce0) aid_postcard_touch_up_pane_ParamLimits

0x3a18,	// (0x0008fce0) aid_postcard_touch_up_pane

0x990a,	// (0x00095bd2) main_blid2_pane

0xc7d5,	// (0x00098a9d) popup_blid2_search_window

0x990a,	// (0x00095bd2) blid2_gps_pane

0x990a,	// (0x00095bd2) blid2_navig_pane

0x990a,	// (0x00095bd2) blid2_search_pane

0x990a,	// (0x00095bd2) blid2_tripm_pane

0x7953,	// (0x00093c1b) blid2_search_pane_g1_ParamLimits

0x7953,	// (0x00093c1b) blid2_search_pane_g1

0x7966,	// (0x00093c2e) blid2_search_pane_t1_ParamLimits

0x7966,	// (0x00093c2e) blid2_search_pane_t1

0x7978,	// (0x00093c40) aid_size_cell_blid2_gps_ParamLimits

0x7978,	// (0x00093c40) aid_size_cell_blid2_gps

0x7990,	// (0x00093c58) blid2_gps_pane_g1_ParamLimits

0x7990,	// (0x00093c58) blid2_gps_pane_g1

0x79a4,	// (0x00093c6c) grid_blid2_satellite_pane_ParamLimits

0x79a4,	// (0x00093c6c) grid_blid2_satellite_pane

0x79bc,	// (0x00093c84) blid2_navig_pane_g1_ParamLimits

0x79bc,	// (0x00093c84) blid2_navig_pane_g1

0x79c8,	// (0x00093c90) blid2_navig_pane_t1_ParamLimits

0x79c8,	// (0x00093c90) blid2_navig_pane_t1

0x79e3,	// (0x00093cab) blid2_navig_pane_t2_ParamLimits

0x79e3,	// (0x00093cab) blid2_navig_pane_t2

0x0001,

0xfafd,	// (0x0009bdc5) blid2_navig_pane_t_ParamLimits

0xfafd,	// (0x0009bdc5) blid2_navig_pane_t

0x79fe,	// (0x00093cc6) blid2_navig_ring_pane_ParamLimits

0x79fe,	// (0x00093cc6) blid2_navig_ring_pane

0x7a19,	// (0x00093ce1) blid2_speed_pane_ParamLimits

0x7a19,	// (0x00093ce1) blid2_speed_pane

0x7a25,	// (0x00093ced) blid2_tripm_pane_g1_ParamLimits

0x7a25,	// (0x00093ced) blid2_tripm_pane_g1

0x7a40,	// (0x00093d08) blid2_tripm_pane_g2_ParamLimits

0x7a40,	// (0x00093d08) blid2_tripm_pane_g2

0x7a54,	// (0x00093d1c) blid2_tripm_pane_g3_ParamLimits

0x7a54,	// (0x00093d1c) blid2_tripm_pane_g3

0x7a68,	// (0x00093d30) blid2_tripm_pane_g4_ParamLimits

0x7a68,	// (0x00093d30) blid2_tripm_pane_g4

0x7a7c,	// (0x00093d44) blid2_tripm_pane_g5_ParamLimits

0x7a7c,	// (0x00093d44) blid2_tripm_pane_g5

0x0005,

0xfb02,	// (0x0009bdca) blid2_tripm_pane_g_ParamLimits

0xfb02,	// (0x0009bdca) blid2_tripm_pane_g

0x7aa2,	// (0x00093d6a) blid2_tripm_pane_t1_ParamLimits

0x7aa2,	// (0x00093d6a) blid2_tripm_pane_t1

0x7abb,	// (0x00093d83) blid2_tripm_pane_t2_ParamLimits

0x7abb,	// (0x00093d83) blid2_tripm_pane_t2

0x7ad4,	// (0x00093d9c) blid2_tripm_pane_t3_ParamLimits

0x7ad4,	// (0x00093d9c) blid2_tripm_pane_t3

0x0003,

0xfb0f,	// (0x0009bdd7) blid2_tripm_pane_t_ParamLimits

0xfb0f,	// (0x0009bdd7) blid2_tripm_pane_t

0x7b1b,	// (0x00093de3) cell_blid2_satellite_pane_ParamLimits

0x7b1b,	// (0x00093de3) cell_blid2_satellite_pane

0x7b39,	// (0x00093e01) cell_blid2_satellite_pane_g1

0xdbb9,	// (0x00099e81) cell_blid2_satellite_pane_t1

0xcc18,	// (0x00098ee0) blid2_speed_pane_g1

0xdbc7,	// (0x00099e8f) blid2_speed_pane_t1

0xdbd5,	// (0x00099e9d) blid2_speed_pane_t2

0x0001,

0xfb18,	// (0x0009bde0) blid2_speed_pane_t

0xcc18,	// (0x00098ee0) blid2_navig_ring_pane_g1

0x7b42,	// (0x00093e0a) blid2_navig_ring_pane_g2

0x7b4a,	// (0x00093e12) blid2_navig_ring_pane_g3

0x7b52,	// (0x00093e1a) blid2_navig_ring_pane_g4

0x7b5a,	// (0x00093e22) blid2_navig_ring_pane_g5

0x0004,

0xfb1d,	// (0x0009bde5) blid2_navig_ring_pane_g

0x990a,	// (0x00095bd2) bg_popup_window_pane_cp011

0xdbe3,	// (0x00099eab) popup_blid2_search_window_g1

0xdbeb,	// (0x00099eb3) popup_blid2_search_window_t1

0xdbf9,	// (0x00099ec1) popup_blid2_search_window_t2

0x0001,

0xfb28,	// (0x0009bdf0) popup_blid2_search_window_t

0xabb7,	// (0x00096e7f) main_browser_pane_g1

0xa0be,	// (0x00096386) main_browser_pane_ParamLimits

0x995b,	// (0x00095c23) bg_button_pane_cp011_ParamLimits

0x6bc9,	// (0x00092e91) cell_vitu2_function_pane_g1_ParamLimits

0xc7c7,	// (0x00098a8f) bg_popup_sub_pane_cp22_ParamLimits

0x0175,	// (0x0008c43d) input_focus_pane_cp08_ParamLimits

0x74b4,	// (0x0009377c) popup_vitu2_query_button_pane_ParamLimits

0x74b4,	// (0x0009377c) popup_vitu2_query_button_pane

0x018c,	// (0x0008c454) popup_vitu2_query_input_button_pane

0xd883,	// (0x00099b4b) popup_vitu2_query_window_g1_ParamLimits

0x0196,	// (0x0008c45e) popup_vitu2_query_window_g2_ParamLimits

0xfa29,	// (0x0009bcf1) popup_vitu2_query_window_g_ParamLimits

0x990a,	// (0x00095bd2) bg_button_pane_cp026

0x7b62,	// (0x00093e2a) popup_vitu2_query_input_button_pane_g1

0x990a,	// (0x00095bd2) bg_button_pane_cp025

0xdc07,	// (0x00099ecf) popup_vitu2_query_button_pane_t1

0x5124,	// (0x000913ec) main_mp3_pane_t6

0x5132,	// (0x000913fa) popup_slider_window_cp01

0xa715,	// (0x000969dd) cam4_battery_pane

0xa76a,	// (0x00096a32) cam4_battery_pane_cp02

0xa84e,	// (0x00096b16) cam4_battery_pane_cp01

0xa84e,	// (0x00096b16) cam4_battery_pane_cp03

0xcc18,	// (0x00098ee0) cam4_battery_pane_g1

0xdc15,	// (0x00099edd) cam4_battery_pane_g2

0x0001,

0xfb2d,	// (0x0009bdf5) cam4_battery_pane_g

0xcade,	// (0x00098da6) popup_blid_sat_info2_window_t11

0x333f,	// (0x0008f607) aid_size_touch_mv_arrow_left_ParamLimits

0x3368,	// (0x0008f630) aid_size_touch_mv_arrow_right_ParamLimits

0xb30e,	// (0x000975d6) navi_pane_g1_ParamLimits

0x33a7,	// (0x0008f66f) navi_pane_g2_ParamLimits

0x33d5,	// (0x0008f69d) navi_pane_g3_ParamLimits

0xf3f7,	// (0x0009b6bf) navi_pane_g_ParamLimits

0x342f,	// (0x0008f6f7) navi_pane_mv_t1_ParamLimits

0x5dcb,	// (0x00092093) grid_imed_effect_pane_ParamLimits

0x1e94,	// (0x0008e15c) aid_placing_vt_slider_lsc

0xab02,	// (0x00096dca) aid_placing_vt_slider_prt

0x995b,	// (0x00095c23) bg_tb_trans_pane_cp01_ParamLimits

0xcd70,	// (0x00099038) popup_image_details_window_g1_ParamLimits

0xcd83,	// (0x0009904b) popup_image_details_window_g2_ParamLimits

0xcd98,	// (0x00099060) popup_image_details_window_g3_ParamLimits

0xcd98,	// (0x00099060) popup_image_details_window_g3

0xf72a,	// (0x0009b9f2) popup_image_details_window_g_ParamLimits

0xcdac,	// (0x00099074) popup_image_details_window_t1_ParamLimits

0xcdbe,	// (0x00099086) popup_image_details_window_t2_ParamLimits

0xcdd7,	// (0x0009909f) popup_image_details_window_t3_ParamLimits

0xcdeb,	// (0x000990b3) popup_image_details_window_t4_ParamLimits

0xce06,	// (0x000990ce) popup_image_details_window_t5_ParamLimits

0xf731,	// (0x0009b9f9) popup_image_details_window_t_ParamLimits

0x77a4,	// (0x00093a6c) cl_header_name_pane_ParamLimits

0x77a4,	// (0x00093a6c) cl_header_name_pane

0x7b6a,	// (0x00093e32) cl_header_name_pane_t1_ParamLimits

0x7b6a,	// (0x00093e32) cl_header_name_pane_t1

0x7b8b,	// (0x00093e53) cl_header_name_pane_t2_ParamLimits

0x7b8b,	// (0x00093e53) cl_header_name_pane_t2

0x7bcd,	// (0x00093e95) cl_header_name_pane_t3_ParamLimits

0x7bcd,	// (0x00093e95) cl_header_name_pane_t3

0x0002,

0xfb32,	// (0x0009bdfa) cl_header_name_pane_t_ParamLimits

0xfb32,	// (0x0009bdfa) cl_header_name_pane_t

0x3400,	// (0x0008f6c8) navi_pane_mv_g2_ParamLimits

0xd5e4,	// (0x000998ac) field_vitu2_entry_pane_g1_ParamLimits

0xd5f0,	// (0x000998b8) field_vitu2_entry_pane_g2_ParamLimits

0xd5fc,	// (0x000998c4) field_vitu2_entry_pane_g3_ParamLimits

0xd5fc,	// (0x000998c4) field_vitu2_entry_pane_g3

0xf928,	// (0x0009bbf0) field_vitu2_entry_pane_g_ParamLimits

0x6b45,	// (0x00092e0d) cell_vitu2_itu_pane_g1_ParamLimits

0x6b55,	// (0x00092e1d) cell_vitu2_itu_pane_g2_ParamLimits

0x6b55,	// (0x00092e1d) cell_vitu2_itu_pane_g2

0x0001,

0xf934,	// (0x0009bbfc) cell_vitu2_itu_pane_g_ParamLimits

0xf934,	// (0x0009bbfc) cell_vitu2_itu_pane_g

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp05_ParamLimits

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp05

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp03

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp04

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp10_ParamLimits

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp10

0x02b5,	// (0x0008c57d) bg_vkb2_func_pane_cp08

0x774e,	// (0x00093a16) bg_vkb2_func_pane_cp06

0x775c,	// (0x00093a24) bg_vkb2_func_pane_cp07

0xdb13,	// (0x00099ddb) bg_vkb2_func_pane_cp11_ParamLimits

0xdb13,	// (0x00099ddb) bg_vkb2_func_pane_cp11

0xdb28,	// (0x00099df0) bg_vkb2_func_pane_cp12_ParamLimits

0xdb28,	// (0x00099df0) bg_vkb2_func_pane_cp12

0x990a,	// (0x00095bd2) bg_vkb2_func_pane_cp09

0xd61c,	// (0x000998e4) bg_vkb2_func_pane_g1

0xacc8,	// (0x00096f90) bg_vkb2_func_pane_g2

0xd624,	// (0x000998ec) bg_vkb2_func_pane_g3

0xd62c,	// (0x000998f4) bg_vkb2_func_pane_g4

0xd846,	// (0x00099b0e) bg_vkb2_func_pane_g5

0xd644,	// (0x0009990c) bg_vkb2_func_pane_g6

0xd64c,	// (0x00099914) bg_vkb2_func_pane_g7

0xd63c,	// (0x00099904) bg_vkb2_func_pane_g8

0xaca8,	// (0x00096f70) bg_vkb2_func_pane_g9

0x0008,

0xfb39,	// (0x0009be01) bg_vkb2_func_pane_g

0x7a90,	// (0x00093d58) blid2_tripm_pane_g6_ParamLimits

0x7a90,	// (0x00093d58) blid2_tripm_pane_g6

0xd4a4,	// (0x0009976c) mp4_progress_pane_g1

0x7b07,	// (0x00093dcf) blid2_tripm_values_pane_ParamLimits

0x7b07,	// (0x00093dcf) blid2_tripm_values_pane

0x7bfe,	// (0x00093ec6) blid2_tripm_values_pane_t1

0x7c0c,	// (0x00093ed4) blid2_tripm_values_pane_t2

0x7c1a,	// (0x00093ee2) blid2_tripm_values_pane_t3

0x7c28,	// (0x00093ef0) blid2_tripm_values_pane_t4

0x7c36,	// (0x00093efe) blid2_tripm_values_pane_t5

0x7c44,	// (0x00093f0c) blid2_tripm_values_pane_t6

0x7c52,	// (0x00093f1a) blid2_tripm_values_pane_t7

0x7c60,	// (0x00093f28) blid2_tripm_values_pane_t8

0x7c6e,	// (0x00093f36) blid2_tripm_values_pane_t9

0x0008,

0xfb4c,	// (0x0009be14) blid2_tripm_values_pane_t

0x1ed1,	// (0x0008e199) call_video_pane_t1_ParamLimits

0x1eeb,	// (0x0008e1b3) call_video_pane_t2_ParamLimits

0xf279,	// (0x0009b541) call_video_pane_t_ParamLimits

0xff7c,	// (0x0008c244) msg_header_pane_g1_ParamLimits

0xb530,	// (0x000977f8) msg_header_pane_g2_ParamLimits

0xb530,	// (0x000977f8) msg_header_pane_g2

0x0001,

0xf49a,	// (0x0009b762) msg_header_pane_g_ParamLimits

0xf49a,	// (0x0009b762) msg_header_pane_g

0xa0be,	// (0x00096386) main_clock2_pane_ParamLimits

0x5ab2,	// (0x00091d7a) grid_clock2_toolbar_pane_ParamLimits

0x5ab2,	// (0x00091d7a) grid_clock2_toolbar_pane

0x5ab2,	// (0x00091d7a) listscroll_clock2_pane_ParamLimits

0x5ab2,	// (0x00091d7a) listscroll_clock2_pane

0x5ba9,	// (0x00091e71) main_clock2_pane_t3_ParamLimits

0x5ba9,	// (0x00091e71) main_clock2_pane_t3

0x5bcd,	// (0x00091e95) main_clock2_pane_t4_ParamLimits

0x5bcd,	// (0x00091e95) main_clock2_pane_t4

0xdc1f,	// (0x00099ee7) cell_clock2_toolbar_pane

0xdc27,	// (0x00099eef) cell_clock2_toolbar_pane_cp01

0xdc27,	// (0x00099eef) cell_clock2_toolbar_pane_cp02

0xdc2f,	// (0x00099ef7) cell_clock2_toolbar_pane_cp03

0xdc37,	// (0x00099eff) list_clock2_pane

0xb274,	// (0x0009753c) scroll_pane_cp10

0xdc3f,	// (0x00099f07) list_single_clock2_pane_ParamLimits

0xdc3f,	// (0x00099f07) list_single_clock2_pane

0xb3ae,	// (0x00097676) list_highlight_pane_cp08

0xdc4c,	// (0x00099f14) list_single_clock2_pane_t1

0xdc5a,	// (0x00099f22) list_single_clock2_pane_t2

0x0001,

0xfb5f,	// (0x0009be27) list_single_clock2_pane_t

0x990a,	// (0x00095bd2) bg_button_pane_cp10

0xdc68,	// (0x00099f30) cell_clock2_toolbar_pane_g1

0x398c,	// (0x0008fc54) aid_main_viewer_pane_g1_ParamLimits

0x398c,	// (0x0008fc54) aid_main_viewer_pane_g1

0x399a,	// (0x0008fc62) aid_main_viewer_pane_g2_ParamLimits

0x399a,	// (0x0008fc62) aid_main_viewer_pane_g2

0x39a8,	// (0x0008fc70) aid_main_viewer_pane_g3_ParamLimits

0x39a8,	// (0x0008fc70) aid_main_viewer_pane_g3

0x39b7,	// (0x0008fc7f) aid_main_viewer_pane_g4_ParamLimits

0x39b7,	// (0x0008fc7f) aid_main_viewer_pane_g4

0x0003,

0xf4ab,	// (0x0009b773) aid_main_viewer_pane_g_ParamLimits

0xf4ab,	// (0x0009b773) aid_main_viewer_pane_g

0x430a,	// (0x000905d2) main_calc_pane_ParamLimits

0x431e,	// (0x000905e6) main_dialer2_pane_ParamLimits

0x990a,	// (0x00095bd2) main_cam6_pane

0x990a,	// (0x00095bd2) main_vid6_pane

0x5abe,	// (0x00091d86) listscroll_gen_pane_cp06_ParamLimits

0x5abe,	// (0x00091d86) listscroll_gen_pane_cp06

0x5bf0,	// (0x00091eb8) main_clock2_pane_t5_ParamLimits

0x5bf0,	// (0x00091eb8) main_clock2_pane_t5

0x5c50,	// (0x00091f18) aid_call2_pane_cp10_ParamLimits

0x5c62,	// (0x00091f2a) aid_call_pane_cp10_ParamLimits

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c74,	// (0x00091f3c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c74,	// (0x00091f3c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2e3,	// (0x000975ab) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e1,	// (0x0009baa9) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c8a,	// (0x00091f52) popup_clock_analogue_window_cp10_t1_ParamLimits

0x631d,	// (0x000925e5) cell_dialer2_keypad_pane_g2_ParamLimits

0x631d,	// (0x000925e5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0009bb8f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0009bb8f) cell_dialer2_keypad_pane_g

0x6339,	// (0x00092601) cell_dialer2_keypad_pane_t1

0x6ef2,	// (0x000931ba) main_cset_text2_pane_ParamLimits

0x6ef2,	// (0x000931ba) main_cset_text2_pane

0xda7b,	// (0x00099d43) area_vitu2_query_pane_g1_ParamLimits

0x027a,	// (0x0008c542) area_vitu2_query_pane_g2_ParamLimits

0xfa7c,	// (0x0009bd44) area_vitu2_query_pane_g_ParamLimits

0x772a,	// (0x000939f2) area_vitu2_query_pane_t7_ParamLimits

0x772a,	// (0x000939f2) area_vitu2_query_pane_t7

0x774e,	// (0x00093a16) bg_button_pane_cp018_ParamLimits

0x775c,	// (0x00093a24) bg_button_pane_cp021_ParamLimits

0x02b5,	// (0x0008c57d) bg_button_pane_cp022_ParamLimits

0x02b5,	// (0x0008c57d) bg_vkb2_func_pane_cp08_ParamLimits

0x774e,	// (0x00093a16) bg_vkb2_func_pane_cp06_ParamLimits

0x775c,	// (0x00093a24) bg_vkb2_func_pane_cp07_ParamLimits

0x02c6,	// (0x0008c58e) input_focus_pane_cp09_ParamLimits

0xa8d0,	// (0x00096b98) cam6_autofocus_pane_ParamLimits

0xa8d0,	// (0x00096b98) cam6_autofocus_pane

0x7c7c,	// (0x00093f44) cam6_image_uncrop_pane_ParamLimits

0x7c7c,	// (0x00093f44) cam6_image_uncrop_pane

0x7c8b,	// (0x00093f53) cam6_indi_pane_ParamLimits

0x7c8b,	// (0x00093f53) cam6_indi_pane

0x7ca1,	// (0x00093f69) cam6_mode_pane_ParamLimits

0x7ca1,	// (0x00093f69) cam6_mode_pane

0x7cb3,	// (0x00093f7b) cam6_timer_pane_ParamLimits

0x7cb3,	// (0x00093f7b) cam6_timer_pane

0x7cbf,	// (0x00093f87) cam6_zoom_pane_ParamLimits

0x7cbf,	// (0x00093f87) cam6_zoom_pane

0x7ccd,	// (0x00093f95) cam6_mode_pane_g1_ParamLimits

0x7ccd,	// (0x00093f95) cam6_mode_pane_g1

0x7cdd,	// (0x00093fa5) cam6_mode_pane_g2_ParamLimits

0x7cdd,	// (0x00093fa5) cam6_mode_pane_g2

0x7ced,	// (0x00093fb5) cam6_mode_pane_g3_ParamLimits

0x7ced,	// (0x00093fb5) cam6_mode_pane_g3

0x7cfd,	// (0x00093fc5) cam6_mode_pane_g4_ParamLimits

0x7cfd,	// (0x00093fc5) cam6_mode_pane_g4

0x0003,

0xfb64,	// (0x0009be2c) cam6_mode_pane_g_ParamLimits

0xfb64,	// (0x0009be2c) cam6_mode_pane_g

0xdc70,	// (0x00099f38) bg_tb_trans_pane_cp08_ParamLimits

0xdc70,	// (0x00099f38) bg_tb_trans_pane_cp08

0xdc7e,	// (0x00099f46) cam6_battery_pane_ParamLimits

0xdc7e,	// (0x00099f46) cam6_battery_pane

0xdc94,	// (0x00099f5c) cam6_indi_pane_g1_ParamLimits

0xdc94,	// (0x00099f5c) cam6_indi_pane_g1

0xdca6,	// (0x00099f6e) cam6_indi_pane_g2_ParamLimits

0xdca6,	// (0x00099f6e) cam6_indi_pane_g2

0xdcb8,	// (0x00099f80) cam6_indi_pane_g3_ParamLimits

0xdcb8,	// (0x00099f80) cam6_indi_pane_g3

0x0002,

0xfb6d,	// (0x0009be35) cam6_indi_pane_g_ParamLimits

0xfb6d,	// (0x0009be35) cam6_indi_pane_g

0xdcca,	// (0x00099f92) cam6_indi_pane_t1_ParamLimits

0xdcca,	// (0x00099f92) cam6_indi_pane_t1

0x68fa,	// (0x00092bc2) cam6_autofocus_pane_g1

0x6902,	// (0x00092bca) cam6_autofocus_pane_g2

0x690a,	// (0x00092bd2) cam6_autofocus_pane_g3

0x6912,	// (0x00092bda) cam6_autofocus_pane_g4

0x0003,

0xfb74,	// (0x0009be3c) cam6_autofocus_pane_g

0xdcf0,	// (0x00099fb8) cam6_timer_pane_g1

0xdcf8,	// (0x00099fc0) cam6_timer_pane_t1

0xdd06,	// (0x00099fce) cam6_zoom_cont_pane

0xdd0e,	// (0x00099fd6) cam6_zoom_pane_g1

0xdd16,	// (0x00099fde) cam6_zoom_pane_g2

0x7d0d,	// (0x00093fd5) cam6_zoom_pane_g3

0x0002,

0xfb7d,	// (0x0009be45) cam6_zoom_pane_g

0xcc18,	// (0x00098ee0) cam6_battery_pane_g1

0xcc18,	// (0x00098ee0) cam6_battery_pane_g2

0x0001,

0xf6ee,	// (0x0009b9b6) cam6_battery_pane_g

0xdd1e,	// (0x00099fe6) cam6_zoom_cont_pane_g1

0xdd27,	// (0x00099fef) cam6_zoom_cont_pane_g2

0xdd30,	// (0x00099ff8) cam6_zoom_cont_pane_g3

0x0002,

0xfb84,	// (0x0009be4c) cam6_zoom_cont_pane_g

0x7d2a,	// (0x00093ff2) cam6_mode_pane_cp_ParamLimits

0x7d2a,	// (0x00093ff2) cam6_mode_pane_cp

0x7cbf,	// (0x00093f87) cam6_zoom_pane_cp_ParamLimits

0x7cbf,	// (0x00093f87) cam6_zoom_pane_cp

0x7d3c,	// (0x00094004) vid6_image_uncrop_cif_pane_ParamLimits

0x7d3c,	// (0x00094004) vid6_image_uncrop_cif_pane

0x7d4c,	// (0x00094014) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d4c,	// (0x00094014) vid6_image_uncrop_nhd_pane

0x7c7c,	// (0x00093f44) vid6_image_uncrop_vga_pane_ParamLimits

0x7c7c,	// (0x00093f44) vid6_image_uncrop_vga_pane

0x7d5b,	// (0x00094023) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d5b,	// (0x00094023) vid6_image_uncrop_wvga_pane

0x7d6a,	// (0x00094032) vid6_indi_pane_ParamLimits

0x7d6a,	// (0x00094032) vid6_indi_pane

0xdc70,	// (0x00099f38) bg_tb_trans_pane_cp09_ParamLimits

0xdc70,	// (0x00099f38) bg_tb_trans_pane_cp09

0xdd63,	// (0x0009a02b) cam6_battery_pane_cp_ParamLimits

0xdd63,	// (0x0009a02b) cam6_battery_pane_cp

0xdd6f,	// (0x0009a037) vid6_indi_pane_g1_ParamLimits

0xdd6f,	// (0x0009a037) vid6_indi_pane_g1

0xdd81,	// (0x0009a049) vid6_indi_pane_g2_ParamLimits

0xdd81,	// (0x0009a049) vid6_indi_pane_g2

0xdd93,	// (0x0009a05b) vid6_indi_pane_g3_ParamLimits

0xdd93,	// (0x0009a05b) vid6_indi_pane_g3

0xddaa,	// (0x0009a072) vid6_indi_pane_g4_ParamLimits

0xddaa,	// (0x0009a072) vid6_indi_pane_g4

0xddc1,	// (0x0009a089) vid6_indi_pane_g5_ParamLimits

0xddc1,	// (0x0009a089) vid6_indi_pane_g5

0x0004,

0xfb8b,	// (0x0009be53) vid6_indi_pane_g_ParamLimits

0xfb8b,	// (0x0009be53) vid6_indi_pane_g

0xdddb,	// (0x0009a0a3) vid6_indi_pane_t1_ParamLimits

0xdddb,	// (0x0009a0a3) vid6_indi_pane_t1

0xddf1,	// (0x0009a0b9) vid6_indi_pane_t2_ParamLimits

0xddf1,	// (0x0009a0b9) vid6_indi_pane_t2

0xde19,	// (0x0009a0e1) vid6_indi_pane_t3_ParamLimits

0xde19,	// (0x0009a0e1) vid6_indi_pane_t3

0xde41,	// (0x0009a109) vid6_indi_pane_t4_ParamLimits

0xde41,	// (0x0009a109) vid6_indi_pane_t4

0x0003,

0xfb96,	// (0x0009be5e) vid6_indi_pane_t_ParamLimits

0xfb96,	// (0x0009be5e) vid6_indi_pane_t

0xde65,	// (0x0009a12d) wait_bar_pane_cp08

0x7d82,	// (0x0009404a) main_cset_text2_pane_t1_ParamLimits

0x7d82,	// (0x0009404a) main_cset_text2_pane_t1

0x7d15,	// (0x00093fdd) listscroll_gen_pane_cp06_t1_ParamLimits

0x7d15,	// (0x00093fdd) listscroll_gen_pane_cp06_t1

0x990a,	// (0x00095bd2) main_cam6_set_pane

0xce50,	// (0x00099118) bg_tb_trans_pane_cp06_ParamLimits

0xa71d,	// (0x000969e5) cam4_indicators_pane_g1_ParamLimits

0xa72e,	// (0x000969f6) cam4_indicators_pane_g2_ParamLimits

0xf904,	// (0x0009bbcc) cam4_indicators_pane_g_ParamLimits

0xa746,	// (0x00096a0e) cam4_indicators_pane_t1_ParamLimits

0x995b,	// (0x00095c23) bg_tb_trans_pane_cp07_ParamLimits

0xa774,	// (0x00096a3c) vid4_indicators_pane_g1_ParamLimits

0xa78a,	// (0x00096a52) vid4_indicators_pane_g2_ParamLimits

0xa79e,	// (0x00096a66) vid4_indicators_pane_g3_ParamLimits

0xa7b1,	// (0x00096a79) vid4_indicators_pane_g4_ParamLimits

0xf916,	// (0x0009bbde) vid4_indicators_pane_g_ParamLimits

0xa7cf,	// (0x00096a97) vid4_indicators_pane_t1_ParamLimits

0x7898,	// (0x00093b60) vid4_progress_pane_g1_ParamLimits

0x78aa,	// (0x00093b72) vid4_progress_pane_g2_ParamLimits

0xa394,	// (0x0009665c) vid4_progress_pane_g3_ParamLimits

0xa856,	// (0x00096b1e) vid4_progress_pane_g4_ParamLimits

0xfac7,	// (0x0009bd8f) vid4_progress_pane_g_ParamLimits

0xa874,	// (0x00096b3c) vid4_progress_pane_t1_ParamLimits

0xa889,	// (0x00096b51) vid4_progress_pane_t2_ParamLimits

0xa89f,	// (0x00096b67) vid4_progress_pane_t3_ParamLimits

0xfad2,	// (0x0009bd9a) vid4_progress_pane_t_ParamLimits

0xa8b4,	// (0x00096b7c) wait_bar_pane_cp07_ParamLimits

0x7da0,	// (0x00094068) main_cam6_set_pane_g2_ParamLimits

0x7da0,	// (0x00094068) main_cam6_set_pane_g2

0x7dc6,	// (0x0009408e) main_cset6_listscroll_pane_ParamLimits

0x7dc6,	// (0x0009408e) main_cset6_listscroll_pane

0x7de4,	// (0x000940ac) main_cset6_slider_pane_ParamLimits

0x7de4,	// (0x000940ac) main_cset6_slider_pane

0x7dfa,	// (0x000940c2) main_cset6_text2_pane_ParamLimits

0x7dfa,	// (0x000940c2) main_cset6_text2_pane

0xde74,	// (0x0009a13c) main_cset6_text_pane

0xde7c,	// (0x0009a144) main_cset_list_pane_copy1_ParamLimits

0xde7c,	// (0x0009a144) main_cset_list_pane_copy1

0xde8c,	// (0x0009a154) scroll_pane_cp028_copy1

0x7e08,	// (0x000940d0) cset_list_set_pane_copy1

0x7e1c,	// (0x000940e4) aid_position_infowindow_above_copy1

0x7e24,	// (0x000940ec) aid_position_infowindow_below_copy1

0x7e2c,	// (0x000940f4) cset_list_set_pane_g1_copy1

0x02fd,	// (0x0008c5c5) cset_list_set_pane_g3_copy1_ParamLimits

0x02fd,	// (0x0008c5c5) cset_list_set_pane_g3_copy1

0x030c,	// (0x0008c5d4) cset_list_set_pane_t1_copy1_ParamLimits

0x030c,	// (0x0008c5d4) cset_list_set_pane_t1_copy1

0x995b,	// (0x00095c23) list_highlight_pane_cp021_copy1_ParamLimits

0x995b,	// (0x00095c23) list_highlight_pane_cp021_copy1

0xde95,	// (0x0009a15d) cset6_slider_pane_ParamLimits

0xde95,	// (0x0009a15d) cset6_slider_pane

0xdec1,	// (0x0009a189) main_cset6_slider_pane_g1_ParamLimits

0xdec1,	// (0x0009a189) main_cset6_slider_pane_g1

0x7e34,	// (0x000940fc) main_cset6_slider_pane_g2_ParamLimits

0x7e34,	// (0x000940fc) main_cset6_slider_pane_g2

0xdee9,	// (0x0009a1b1) main_cset6_slider_pane_g3_ParamLimits

0xdee9,	// (0x0009a1b1) main_cset6_slider_pane_g3

0x7e5c,	// (0x00094124) main_cset6_slider_pane_g4_ParamLimits

0x7e5c,	// (0x00094124) main_cset6_slider_pane_g4

0x7e68,	// (0x00094130) main_cset6_slider_pane_g5_ParamLimits

0x7e68,	// (0x00094130) main_cset6_slider_pane_g5

0xd74f,	// (0x00099a17) main_cset6_slider_pane_g7_ParamLimits

0xd74f,	// (0x00099a17) main_cset6_slider_pane_g7

0xd75b,	// (0x00099a23) main_cset6_slider_pane_g8_ParamLimits

0xd75b,	// (0x00099a23) main_cset6_slider_pane_g8

0x6fa1,	// (0x00093269) main_cset6_slider_pane_g9_ParamLimits

0x6fa1,	// (0x00093269) main_cset6_slider_pane_g9

0x6fad,	// (0x00093275) main_cset6_slider_pane_g10_ParamLimits

0x6fad,	// (0x00093275) main_cset6_slider_pane_g10

0x6fb9,	// (0x00093281) main_cset6_slider_pane_g11_ParamLimits

0x6fb9,	// (0x00093281) main_cset6_slider_pane_g11

0x6fc5,	// (0x0009328d) main_cset6_slider_pane_g12_ParamLimits

0x6fc5,	// (0x0009328d) main_cset6_slider_pane_g12

0x6fd1,	// (0x00093299) main_cset6_slider_pane_g13_ParamLimits

0x6fd1,	// (0x00093299) main_cset6_slider_pane_g13

0x6fdd,	// (0x000932a5) main_cset6_slider_pane_g14_ParamLimits

0x6fdd,	// (0x000932a5) main_cset6_slider_pane_g14

0x7e76,	// (0x0009413e) main_cset6_slider_pane_g15_ParamLimits

0x7e76,	// (0x0009413e) main_cset6_slider_pane_g15

0x7001,	// (0x000932c9) main_cset6_slider_pane_g16_ParamLimits

0x7001,	// (0x000932c9) main_cset6_slider_pane_g16

0x700f,	// (0x000932d7) main_cset6_slider_pane_g17_ParamLimits

0x700f,	// (0x000932d7) main_cset6_slider_pane_g17

0x0011,

0xfb9f,	// (0x0009be67) main_cset6_slider_pane_g_ParamLimits

0xfb9f,	// (0x0009be67) main_cset6_slider_pane_g

0xdef5,	// (0x0009a1bd) main_cset6_slider_pane_t1_ParamLimits

0xdef5,	// (0x0009a1bd) main_cset6_slider_pane_t1

0x7ea6,	// (0x0009416e) main_cset6_slider_pane_t2_ParamLimits

0x7ea6,	// (0x0009416e) main_cset6_slider_pane_t2

0x7ed1,	// (0x00094199) main_cset6_slider_pane_t3_ParamLimits

0x7ed1,	// (0x00094199) main_cset6_slider_pane_t3

0x7efc,	// (0x000941c4) main_cset6_slider_pane_t4_ParamLimits

0x7efc,	// (0x000941c4) main_cset6_slider_pane_t4

0x7f27,	// (0x000941ef) main_cset6_slider_pane_t5_ParamLimits

0x7f27,	// (0x000941ef) main_cset6_slider_pane_t5

0xdf36,	// (0x0009a1fe) main_cset6_slider_pane_t7_ParamLimits

0xdf36,	// (0x0009a1fe) main_cset6_slider_pane_t7

0x7f54,	// (0x0009421c) main_cset6_slider_pane_t8_ParamLimits

0x7f54,	// (0x0009421c) main_cset6_slider_pane_t8

0x7f78,	// (0x00094240) main_cset6_slider_pane_t9_ParamLimits

0x7f78,	// (0x00094240) main_cset6_slider_pane_t9

0x7f9c,	// (0x00094264) main_cset6_slider_pane_t10_ParamLimits

0x7f9c,	// (0x00094264) main_cset6_slider_pane_t10

0x7fc0,	// (0x00094288) main_cset6_slider_pane_t11_ParamLimits

0x7fc0,	// (0x00094288) main_cset6_slider_pane_t11

0xdf6c,	// (0x0009a234) main_cset6_slider_pane_t14_ParamLimits

0xdf6c,	// (0x0009a234) main_cset6_slider_pane_t14

0xdfa5,	// (0x0009a26d) main_cset6_slider_pane_t15_ParamLimits

0xdfa5,	// (0x0009a26d) main_cset6_slider_pane_t15

0x000b,

0xfbc4,	// (0x0009be8c) main_cset6_slider_pane_t_ParamLimits

0xfbc4,	// (0x0009be8c) main_cset6_slider_pane_t

0xdd48,	// (0x0009a010) cset_slider_pane_g1_copy1

0xdd51,	// (0x0009a019) cset_slider_pane_g2_copy1

0xdd5a,	// (0x0009a022) cset_slider_pane_g3_copy1

0x990a,	// (0x00095bd2) bg_popup_sub_pane_cp011_copy1

0xdfde,	// (0x0009a2a6) main_cset_text_pane_g1_copy1

0xd897,	// (0x00099b5f) main_cset_text_pane_t1_copy1

0xd8a5,	// (0x00099b6d) main_cset_text_pane_t2_copy1

0xd8b3,	// (0x00099b7b) main_cset_text_pane_t3_copy1

0xd8c1,	// (0x00099b89) main_cset_text_pane_t4_copy1

0xd8cf,	// (0x00099b97) main_cset_text_pane_t5_copy1

0xdfe6,	// (0x0009a2ae) main_cset_text_pane_t6_copy1

0xdff4,	// (0x0009a2bc) main_cset_text_pane_t7_copy1

0x7d82,	// (0x0009404a) main_cset_text2_pane_t1_copy1

0x995b,	// (0x00095c23) main_ncimui_pane

0x45ac,	// (0x00090874) popup_query_ncimui_window_ParamLimits

0x45ac,	// (0x00090874) popup_query_ncimui_window

0xa468,	// (0x00096730) field_cale_ev2_pane_g4_ParamLimits

0xa468,	// (0x00096730) field_cale_ev2_pane_g4

0x61ef,	// (0x000924b7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61ef,	// (0x000924b7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a2,	// (0x0009bb6a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a2,	// (0x0009bb6a) cell_video_dialer_keypad_pane_g

0x6207,	// (0x000924cf) cell_video_dialer_keypad_pane_t1

0x990a,	// (0x00095bd2) bg_popup_window_pane_cp012

0xb160,	// (0x00097428) heading_pane_cp06

0xe020,	// (0x0009a2e8) ncim_query_content_pane

0x990a,	// (0x00095bd2) bg_popup_heading_pane_cp01

0xe028,	// (0x0009a2f0) ncim_heading_pane_t1

0xe036,	// (0x0009a2fe) ncim_indicator_popup_pane

0xe048,	// (0x0009a310) ncim_query_button_pane

0xe05e,	// (0x0009a326) ncim_query_content_pane_t1

0xe070,	// (0x0009a338) ncim_query_content_pane_t2

0x0005,

0xfc08,	// (0x0009bed0) ncim_query_content_pane_t

0xe0aa,	// (0x0009a372) ncim_query_list_pane

0xe0bc,	// (0x0009a384) ncim_query_popup_pane

0xe036,	// (0x0009a2fe) ncim_indicator_popup_pane_ParamLimits

0x810c,	// (0x000943d4) ncim_query_content_pane_g1_ParamLimits

0x810c,	// (0x000943d4) ncim_query_content_pane_g1

0xe05e,	// (0x0009a326) ncim_query_content_pane_t1_ParamLimits

0xe070,	// (0x0009a338) ncim_query_content_pane_t2_ParamLimits

0x8118,	// (0x000943e0) ncim_query_content_pane_t3_ParamLimits

0x8118,	// (0x000943e0) ncim_query_content_pane_t3

0x8140,	// (0x00094408) ncim_query_content_pane_t4_ParamLimits

0x8140,	// (0x00094408) ncim_query_content_pane_t4

0x8168,	// (0x00094430) ncim_query_content_pane_t5_ParamLimits

0x8168,	// (0x00094430) ncim_query_content_pane_t5

0xe082,	// (0x0009a34a) ncim_query_content_pane_t6_ParamLimits

0xe082,	// (0x0009a34a) ncim_query_content_pane_t6

0xfc08,	// (0x0009bed0) ncim_query_content_pane_t_ParamLimits

0xe0aa,	// (0x0009a372) ncim_query_list_pane_ParamLimits

0xe0bc,	// (0x0009a384) ncim_query_popup_pane_ParamLimits

0xe0d0,	// (0x0009a398) wait_bar_pane_cp04

0x990a,	// (0x00095bd2) input_focus_pane_cp011

0xe0d8,	// (0x0009a3a0) ncim_query_popup_pane_t1

0xe0e6,	// (0x0009a3ae) ncim_list_query_list_pane_ParamLimits

0xe0e6,	// (0x0009a3ae) ncim_list_query_list_pane

0x990a,	// (0x00095bd2) bg_button_pane_cp027

0xe0f9,	// (0x0009a3c1) ncim_query_button_pane_g1

0x990a,	// (0x00095bd2) list_highlight_pane_cp012

0xe103,	// (0x0009a3cb) ncim_list_query_list_pane_g1

0xe10b,	// (0x0009a3d3) ncim_list_query_list_pane_t1

0xa73a,	// (0x00096a02) cam4_indicators_pane_g3_ParamLimits

0xa73a,	// (0x00096a02) cam4_indicators_pane_g3

0xa7bd,	// (0x00096a85) vid4_indicators_pane_g5_ParamLimits

0xa7bd,	// (0x00096a85) vid4_indicators_pane_g5

0xa865,	// (0x00096b2d) vid4_progress_pane_g5_ParamLimits

0xa865,	// (0x00096b2d) vid4_progress_pane_g5

0x7ffa,	// (0x000942c2) main_ncimui_pane_g1

0x8060,	// (0x00094328) ncimui_group_query_pane_ParamLimits

0x8060,	// (0x00094328) ncimui_group_query_pane

0x80a8,	// (0x00094370) ncimui_list_pane_ParamLimits

0x80a8,	// (0x00094370) ncimui_list_pane

0x80cf,	// (0x00094397) ncimui_text_pane_ParamLimits

0x80cf,	// (0x00094397) ncimui_text_pane

0x8190,	// (0x00094458) ncimui_text_pane_t1_ParamLimits

0x8190,	// (0x00094458) ncimui_text_pane_t1

0xe119,	// (0x0009a3e1) ncimui_list_single_graphic_pane_ParamLimits

0xe119,	// (0x0009a3e1) ncimui_list_single_graphic_pane

0x81ae,	// (0x00094476) ncimui_query_pane_ParamLimits

0x81ae,	// (0x00094476) ncimui_query_pane

0x990a,	// (0x00095bd2) list_highlight_pane_cp013

0xe129,	// (0x0009a3f1) ncim_list_query_list_pane_t1_copy1

0xe103,	// (0x0009a3cb) ncim_list_single_graphic_pane_g1

0xe137,	// (0x0009a3ff) ncim_query_button_pane_cp01

0xe143,	// (0x0009a40b) ncim_query_entry_pane_ParamLimits

0xe143,	// (0x0009a40b) ncim_query_entry_pane

0xe156,	// (0x0009a41e) ncimui_query_pane_g1

0xe162,	// (0x0009a42a) ncimui_query_pane_t1_ParamLimits

0xe162,	// (0x0009a42a) ncimui_query_pane_t1

0x995b,	// (0x00095c23) input_focus_pane_cp012

0xe17b,	// (0x0009a443) ncim_query_entry_pane_t1

0xa0be,	// (0x00096386) main_im_pane_ParamLimits

0x995b,	// (0x00095c23) main_mobtv_pane_ParamLimits

0x995b,	// (0x00095c23) main_mobtv_pane

0x7e8e,	// (0x00094156) main_cset6_slider_pane_g18_ParamLimits

0x7e8e,	// (0x00094156) main_cset6_slider_pane_g18

0x7e9a,	// (0x00094162) main_cset6_slider_pane_g19_ParamLimits

0x7e9a,	// (0x00094162) main_cset6_slider_pane_g19

0xa8de,	// (0x00096ba6) bg_main_mobtv_pane_ParamLimits

0xa8de,	// (0x00096ba6) bg_main_mobtv_pane

0x81c1,	// (0x00094489) main_mobtv_info_pane

0x81cc,	// (0x00094494) main_mobtv_loading_pane_ParamLimits

0x81cc,	// (0x00094494) main_mobtv_loading_pane

0xe18d,	// (0x0009a455) main_mobtv_pg_channel_list_pane

0xe197,	// (0x0009a45f) main_mobtv_pg_hdr_pane

0x81d9,	// (0x000944a1) main_mobtv_programe_curr_pane_ParamLimits

0x81d9,	// (0x000944a1) main_mobtv_programe_curr_pane

0x81e6,	// (0x000944ae) main_mobtv_programe_next_pane_ParamLimits

0x81e6,	// (0x000944ae) main_mobtv_programe_next_pane

0xe1a0,	// (0x0009a468) popup_mobtv_noti_window

0xcc18,	// (0x00098ee0) main_tv_pg_hdr_pane_g1

0xe1aa,	// (0x0009a472) main_tv_pg_hdr_pane_g2

0xe1b2,	// (0x0009a47a) main_tv_pg_hdr_pane_g3

0xe1ba,	// (0x0009a482) main_tv_pg_hdr_pane_g4

0xe1c2,	// (0x0009a48a) main_tv_pg_hdr_pane_g5

0xe1cc,	// (0x0009a494) main_tv_pg_hdr_pane_g6

0xe1d6,	// (0x0009a49e) main_tv_pg_hdr_pane_g7

0xe1e0,	// (0x0009a4a8) main_tv_pg_hdr_pane_g8

0xe1ea,	// (0x0009a4b2) main_tv_pg_hdr_pane_g9

0xe1f4,	// (0x0009a4bc) main_tv_pg_hdr_pane_g10

0xe1fe,	// (0x0009a4c6) main_tv_pg_hdr_pane_g11

0x000a,

0xfc15,	// (0x0009bedd) main_tv_pg_hdr_pane_g

0xe208,	// (0x0009a4d0) main_tv_pg_hdr_pane_t1

0xe216,	// (0x0009a4de) main_tv_pg_hdr_pane_t2

0xe224,	// (0x0009a4ec) main_tv_pg_hdr_pane_t3

0xe234,	// (0x0009a4fc) main_tv_pg_hdr_pane_t4

0xe244,	// (0x0009a50c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2c,	// (0x0009bef4) main_tv_pg_hdr_pane_t

0xe254,	// (0x0009a51c) single_mobtv_pg_channel_pane_ParamLimits

0xe254,	// (0x0009a51c) single_mobtv_pg_channel_pane

0xe266,	// (0x0009a52e) single_mobtv_pg_channel_table_pane

0xe26f,	// (0x0009a537) single_mobtv_pg_channel_thumb_pane

0xe278,	// (0x0009a540) single_tv_pg_channel_pane_g1

0xe281,	// (0x0009a549) single_tv_pg_channel_pane_g2

0x0001,

0xfc37,	// (0x0009beff) single_tv_pg_channel_pane_g

0xce50,	// (0x00099118) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce50,	// (0x00099118) bg_single_mobtv_pg_channel_thumb_pane

0xe28a,	// (0x0009a552) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28a,	// (0x0009a552) single_mobtv_pg_channel_thumb_pane_g1

0xe298,	// (0x0009a560) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe298,	// (0x0009a560) single_mobtv_pg_channel_thumb_pane_g2

0xe2a4,	// (0x0009a56c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a4,	// (0x0009a56c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3c,	// (0x0009bf04) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3c,	// (0x0009bf04) single_mobtv_pg_channel_thumb_pane_g

0xe2b0,	// (0x0009a578) single_mobtv_pg_channel_thumb_pane_t1

0xe2be,	// (0x0009a586) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc43,	// (0x0009bf0b) single_mobtv_pg_channel_thumb_pane_t

0xcc18,	// (0x00098ee0) bg_single_mobtv_pg_channel_table_pane_g1

0xcc18,	// (0x00098ee0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ee,	// (0x0009b9b6) bg_single_mobtv_pg_channel_table_pane_g

0xe2cc,	// (0x0009a594) single_mobtv_pg_channel_table_pane_t1

0xe2da,	// (0x0009a5a2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc48,	// (0x0009bf10) single_mobtv_pg_channel_table_pane_t

0x81fb,	// (0x000944c3) main_mobtv_info_pane_g1_ParamLimits

0x81fb,	// (0x000944c3) main_mobtv_info_pane_g1

0x8219,	// (0x000944e1) main_mobtv_info_pane_t1_ParamLimits

0x8219,	// (0x000944e1) main_mobtv_info_pane_t1

0x8291,	// (0x00094559) main_mobtv_info_pane_t2_ParamLimits

0x8291,	// (0x00094559) main_mobtv_info_pane_t2

0x0002,

0xfc52,	// (0x0009bf1a) main_mobtv_info_pane_t_ParamLimits

0xfc52,	// (0x0009bf1a) main_mobtv_info_pane_t

0x8320,	// (0x000945e8) wait_bar_pane_cp05

0x8332,	// (0x000945fa) main_mobtv_loading_pane_g1_ParamLimits

0x8332,	// (0x000945fa) main_mobtv_loading_pane_g1

0x8343,	// (0x0009460b) main_mobtv_loading_pane_g2_ParamLimits

0x8343,	// (0x0009460b) main_mobtv_loading_pane_g2

0x834f,	// (0x00094617) main_mobtv_loading_pane_g3_ParamLimits

0x834f,	// (0x00094617) main_mobtv_loading_pane_g3

0x0002,

0xfc59,	// (0x0009bf21) main_mobtv_loading_pane_g_ParamLimits

0xfc59,	// (0x0009bf21) main_mobtv_loading_pane_g

0xe2e8,	// (0x0009a5b0) main_mobtv_loading_pane_t1_ParamLimits

0xe2e8,	// (0x0009a5b0) main_mobtv_loading_pane_t1

0xe300,	// (0x0009a5c8) main_mobtv_loading_pane_t2_ParamLimits

0xe300,	// (0x0009a5c8) main_mobtv_loading_pane_t2

0x0001,

0xfc60,	// (0x0009bf28) main_mobtv_loading_pane_t_ParamLimits

0xfc60,	// (0x0009bf28) main_mobtv_loading_pane_t

0x8362,	// (0x0009462a) wait_bar_pane_cp06_ParamLimits

0x8362,	// (0x0009462a) wait_bar_pane_cp06

0xe324,	// (0x0009a5ec) main_mobtv_programe_curr_pane_t1

0xe332,	// (0x0009a5fa) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc65,	// (0x0009bf2d) main_mobtv_programe_curr_pane_t

0xe340,	// (0x0009a608) main_mobtv_programe_next_pane_t1

0xe34e,	// (0x0009a616) main_mobtv_programe_next_pane_t2

0xe35c,	// (0x0009a624) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6a,	// (0x0009bf32) main_mobtv_programe_next_pane_t

0x990a,	// (0x00095bd2) bg_popup_mobtv_noti_window_pane

0xe36a,	// (0x0009a632) popup_mobtv_noti_window_g1

0xe372,	// (0x0009a63a) popup_mobtv_noti_window_t1

0xe380,	// (0x0009a648) popup_mobtv_noti_window_t2

0x0001,

0xfc71,	// (0x0009bf39) popup_mobtv_noti_window_t

0xcc18,	// (0x00098ee0) bg_popup_mobtv_noti_window_pane_g1

0x990a,	// (0x00095bd2) sc_clock_pane

0x990a,	// (0x00095bd2) main_fs_bigclock_pane

0x7af1,	// (0x00093db9) blid2_tripm_pane_t4_ParamLimits

0x7af1,	// (0x00093db9) blid2_tripm_pane_t4

0x8371,	// (0x00094639) sc_clock_pane_g1_ParamLimits

0x8371,	// (0x00094639) sc_clock_pane_g1

0x8383,	// (0x0009464b) sc_clock_pane_t1_ParamLimits

0x8383,	// (0x0009464b) sc_clock_pane_t1

0x83a7,	// (0x0009466f) sc_clock_pane_t2_ParamLimits

0x83a7,	// (0x0009466f) sc_clock_pane_t2

0x83bf,	// (0x00094687) sc_clock_pane_t3_ParamLimits

0x83bf,	// (0x00094687) sc_clock_pane_t3

0x0004,

0xfc76,	// (0x0009bf3e) sc_clock_pane_t_ParamLimits

0xfc76,	// (0x0009bf3e) sc_clock_pane_t

0x8f35,	// (0x000951fd) main_fs_bigclock_indicator_pane_ParamLimits

0x8f35,	// (0x000951fd) main_fs_bigclock_indicator_pane

0xce20,	// (0x000990e8) main_fs_bigclock_pane_g1_ParamLimits

0xce20,	// (0x000990e8) main_fs_bigclock_pane_g1

0x8f41,	// (0x00095209) main_fs_bigclock_pane_t1_ParamLimits

0x8f41,	// (0x00095209) main_fs_bigclock_pane_t1

0x8f53,	// (0x0009521b) main_fs_bigclock_pane_t2_ParamLimits

0x8f53,	// (0x0009521b) main_fs_bigclock_pane_t2

0x8f67,	// (0x0009522f) main_fs_bigclock_pane_t3_ParamLimits

0x8f67,	// (0x0009522f) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0009c142) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009c142) main_fs_bigclock_pane_t

0xebd3,	// (0x0009ae9b) main_fs_bigclock_indicator_pane_g1

0xe050,	// (0x0009a318) ncim_query_content_pane_g2_ParamLimits

0xe050,	// (0x0009a318) ncim_query_content_pane_g2

0x0001,

0xfc03,	// (0x0009becb) ncim_query_content_pane_g_ParamLimits

0xfc03,	// (0x0009becb) ncim_query_content_pane_g

0x83d6,	// (0x0009469e) sc_clock_pane_t4_ParamLimits

0x83d6,	// (0x0009469e) sc_clock_pane_t4

0x995b,	// (0x00095c23) main_radioblah_pane

0xd553,	// (0x0009981b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd553,	// (0x0009981b) cell_call4_button_pane_t1_copy1

0x8012,	// (0x000942da) main_ncimui_pane_t1_ParamLimits

0x8012,	// (0x000942da) main_ncimui_pane_t1

0x802c,	// (0x000942f4) main_ncimui_pane_t2_ParamLimits

0x802c,	// (0x000942f4) main_ncimui_pane_t2

0x0002,

0xfbfc,	// (0x0009bec4) main_ncimui_pane_t_ParamLimits

0xfbfc,	// (0x0009bec4) main_ncimui_pane_t

0xe4cc,	// (0x0009a794) main_radioblah_anim_pane_ParamLimits

0xe4cc,	// (0x0009a794) main_radioblah_anim_pane

0xe4dd,	// (0x0009a7a5) main_radioblah_info_pane_ParamLimits

0xe4dd,	// (0x0009a7a5) main_radioblah_info_pane

0xe4f1,	// (0x0009a7b9) main_radioblah_pane_t1_ParamLimits

0xe4f1,	// (0x0009a7b9) main_radioblah_pane_t1

0xe50d,	// (0x0009a7d5) main_radioblah_pane_t2_ParamLimits

0xe50d,	// (0x0009a7d5) main_radioblah_pane_t2

0x0003,

0xfc97,	// (0x0009bf5f) main_radioblah_pane_t_ParamLimits

0xfc97,	// (0x0009bf5f) main_radioblah_pane_t

0x8486,	// (0x0009474e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8486,	// (0x0009474e) main_radioblah_rocker_ctrl_pane

0xe555,	// (0x0009a81d) main_radioblah_info_pane_t1_ParamLimits

0xe555,	// (0x0009a81d) main_radioblah_info_pane_t1

0x84de,	// (0x000947a6) main_radioblah_info_pane_t2_ParamLimits

0x84de,	// (0x000947a6) main_radioblah_info_pane_t2

0x0003,

0xfca0,	// (0x0009bf68) main_radioblah_info_pane_t_ParamLimits

0xfca0,	// (0x0009bf68) main_radioblah_info_pane_t

0xcc18,	// (0x00098ee0) main_radioblah_rocker_ctrl_pane_g1

0x858e,	// (0x00094856) main_radioblah_rocker_ctrl_pane_g2

0x8596,	// (0x0009485e) main_radioblah_rocker_ctrl_pane_g3

0x859e,	// (0x00094866) main_radioblah_rocker_ctrl_pane_g4

0x85a6,	// (0x0009486e) main_radioblah_rocker_ctrl_pane_g5

0x85ae,	// (0x00094876) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca9,	// (0x0009bf71) main_radioblah_rocker_ctrl_pane_g

0x7d82,	// (0x0009404a) main_cset_text2_pane_t1_copy1_ParamLimits

0xa70b,	// (0x000969d3) cam4_image_uncrop_qvga_pane

0xa760,	// (0x00096a28) vid4_image_uncrop_qcif_pane

0xa8d0,	// (0x00096b98) cam6_image_uncrop_qvga_pane_ParamLimits

0xa8d0,	// (0x00096b98) cam6_image_uncrop_qvga_pane

0xdd38,	// (0x0009a000) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd38,	// (0x0009a000) vid6_image_uncrop_qcif_pane

0x990a,	// (0x00095bd2) bg_popup_preview_window_pane_cp03

0xe002,	// (0x0009a2ca) list_cset_text2_pane

0xe00a,	// (0x0009a2d2) main_cset6_text2_pane_g1

0xe012,	// (0x0009a2da) main_cset6_text2_pane_t1

0x85b6,	// (0x0009487e) list_cset_text2_pane_t1_ParamLimits

0x85b6,	// (0x0009487e) list_cset_text2_pane_t1

0x995b,	// (0x00095c23) main_radioblah_pane_ParamLimits

0x830c,	// (0x000945d4) main_mobtv_info_pane_t3_ParamLimits

0x830c,	// (0x000945d4) main_mobtv_info_pane_t3

0x8474,	// (0x0009473c) main_radioblah_pane_g1

0x84ae,	// (0x00094776) main_radioblah_info_pane_g1

0x8533,	// (0x000947fb) main_radioblah_info_pane_t3_ParamLimits

0x8533,	// (0x000947fb) main_radioblah_info_pane_t3

0x2ef8,	// (0x0008f1c0) highlight_cell_cale_month_pane_ParamLimits

0x2ef8,	// (0x0008f1c0) highlight_cell_cale_month_pane

0x990a,	// (0x00095bd2) main_phob_fisheye_pane

0xcf2c,	// (0x000991f4) scroll_pane_cp0031_ParamLimits

0xcf2c,	// (0x000991f4) scroll_pane_cp0031

0xde65,	// (0x0009a12d) wait_bar_pane_cp08_ParamLimits

0x7e08,	// (0x000940d0) cset_list_set_pane_copy1_ParamLimits

0xe58f,	// (0x0009a857) highlight_cell_cale_month_pane_g1

0x85cf,	// (0x00094897) highlight_cell_cale_month_pane_t1

0xdacf,	// (0x00099d97) list_gen_pane_cp01

0xd73a,	// (0x00099a02) scroll_pane_01

0x03f2,	// (0x0008c6ba) list_single_double_fisheye_pane

0x03fb,	// (0x0008c6c3) list_double_fisheye_pane_g1_ParamLimits

0x03fb,	// (0x0008c6c3) list_double_fisheye_pane_g1

0x0407,	// (0x0008c6cf) list_double_fisheye_pane_g2_ParamLimits

0x0407,	// (0x0008c6cf) list_double_fisheye_pane_g2

0x041b,	// (0x0008c6e3) list_double_fisheye_pane_g3_ParamLimits

0x041b,	// (0x0008c6e3) list_double_fisheye_pane_g3

0x0004,

0xfcb6,	// (0x0009bf7e) list_double_fisheye_pane_g_ParamLimits

0xfcb6,	// (0x0009bf7e) list_double_fisheye_pane_g

0x0444,	// (0x0008c70c) list_double_fisheye_pane_t1_ParamLimits

0x0444,	// (0x0008c70c) list_double_fisheye_pane_t1

0x045f,	// (0x0008c727) list_double_fisheye_pane_t2_ParamLimits

0x045f,	// (0x0008c727) list_double_fisheye_pane_t2

0x0001,

0xfcc1,	// (0x0009bf89) list_double_fisheye_pane_t_ParamLimits

0xfcc1,	// (0x0009bf89) list_double_fisheye_pane_t

0x990a,	// (0x00095bd2) main_call5_pane

0x8401,	// (0x000946c9) sc_swipe_pane_ParamLimits

0x8401,	// (0x000946c9) sc_swipe_pane

0x85f0,	// (0x000948b8) call5_image_pane_ParamLimits

0x85f0,	// (0x000948b8) call5_image_pane

0x860d,	// (0x000948d5) call5_swipe_1_pane_ParamLimits

0x860d,	// (0x000948d5) call5_swipe_1_pane

0x8620,	// (0x000948e8) call5_swipe_2_pane_ParamLimits

0x8620,	// (0x000948e8) call5_swipe_2_pane

0x864d,	// (0x00094915) popup_call5_audio_first_window_ParamLimits

0x864d,	// (0x00094915) popup_call5_audio_first_window

0xce50,	// (0x00099118) call5_swipe_1_pane_g1_ParamLimits

0xce50,	// (0x00099118) call5_swipe_1_pane_g1

0xe597,	// (0x0009a85f) call5_swipe_1_pane_g2_ParamLimits

0xe597,	// (0x0009a85f) call5_swipe_1_pane_g2

0x0001,

0xfcc6,	// (0x0009bf8e) call5_swipe_1_pane_g_ParamLimits

0xfcc6,	// (0x0009bf8e) call5_swipe_1_pane_g

0xe5a3,	// (0x0009a86b) call5_swipe_1_pane_t1_ParamLimits

0xe5a3,	// (0x0009a86b) call5_swipe_1_pane_t1

0xce50,	// (0x00099118) call5_swipe_2_pane_g1_ParamLimits

0xce50,	// (0x00099118) call5_swipe_2_pane_g1

0xe5b8,	// (0x0009a880) call5_swipe_2_pane_g2_ParamLimits

0xe5b8,	// (0x0009a880) call5_swipe_2_pane_g2

0x0001,

0xfccb,	// (0x0009bf93) call5_swipe_2_pane_g_ParamLimits

0xfccb,	// (0x0009bf93) call5_swipe_2_pane_g

0xe5c4,	// (0x0009a88c) call5_swipe_2_pane_t1_ParamLimits

0xe5c4,	// (0x0009a88c) call5_swipe_2_pane_t1

0xe5d9,	// (0x0009a8a1) sc_swipe_pane_g1_ParamLimits

0xe5d9,	// (0x0009a8a1) sc_swipe_pane_g1

0xe5e6,	// (0x0009a8ae) sc_swipe_pane_g2_ParamLimits

0xe5e6,	// (0x0009a8ae) sc_swipe_pane_g2

0x0001,

0xfcd0,	// (0x0009bf98) sc_swipe_pane_g_ParamLimits

0xfcd0,	// (0x0009bf98) sc_swipe_pane_g

0xe5f2,	// (0x0009a8ba) sc_swipe_pane_t1_ParamLimits

0xe5f2,	// (0x0009a8ba) sc_swipe_pane_t1

0x990a,	// (0x00095bd2) main_cmail_launcher_pane

0x8662,	// (0x0009492a) aid_size_cell_cmail_l_ParamLimits

0x8662,	// (0x0009492a) aid_size_cell_cmail_l

0x867c,	// (0x00094944) grid_cmail_l_pane_ParamLimits

0x867c,	// (0x00094944) grid_cmail_l_pane

0x8697,	// (0x0009495f) cell_cmail_l_pane_ParamLimits

0x8697,	// (0x0009495f) cell_cmail_l_pane

0x86bf,	// (0x00094987) cell_cmail_l_pane_g1_ParamLimits

0x86bf,	// (0x00094987) cell_cmail_l_pane_g1

0x86cb,	// (0x00094993) cell_cmail_l_pane_t1_ParamLimits

0x86cb,	// (0x00094993) cell_cmail_l_pane_t1

0xe607,	// (0x0009a8cf) cell_cmail_l_pane_t2_ParamLimits

0xe607,	// (0x0009a8cf) cell_cmail_l_pane_t2

0x0001,

0xfcd5,	// (0x0009bf9d) cell_cmail_l_pane_t_ParamLimits

0xfcd5,	// (0x0009bf9d) cell_cmail_l_pane_t

0x995b,	// (0x00095c23) grid_highlight_pane_cp018_ParamLimits

0x995b,	// (0x00095c23) grid_highlight_pane_cp018

0x0c98,	// (0x0008cf60) main2_pane_ParamLimits

0x0c98,	// (0x0008cf60) main2_pane

0xa197,	// (0x0009645f) popup_sp_fs_action_menu_bg_pane_g1

0xa19f,	// (0x00096467) popup_sp_fs_action_menu_bg_pane_g2

0xa1a7,	// (0x0009646f) popup_sp_fs_action_menu_bg_pane_g3

0xa1af,	// (0x00096477) popup_sp_fs_action_menu_bg_pane_g4

0xa1b7,	// (0x0009647f) popup_sp_fs_action_menu_bg_pane_g5

0xa1bf,	// (0x00096487) popup_sp_fs_action_menu_bg_pane_g6

0xa1c7,	// (0x0009648f) popup_sp_fs_action_menu_bg_pane_g7

0xa1cf,	// (0x00096497) popup_sp_fs_action_menu_bg_pane_g8

0xa1d7,	// (0x0009649f) popup_sp_fs_action_menu_bg_pane_g9

0xa1df,	// (0x000964a7) popup_sp_fs_action_menu_bg_pane_g10

0xa1df,	// (0x000964a7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0009b45b) popup_sp_fs_action_menu_bg_pane_g

0xfd18,	// (0x0008bfe0) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfd18,	// (0x0008bfe0) list_medium_line_x2_t3_g3_g1

0xfd24,	// (0x0008bfec) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfd24,	// (0x0008bfec) list_medium_line_x2_t3_g3_g2

0xfd30,	// (0x0008bff8) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfd30,	// (0x0008bff8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0009b50b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0009b50b) list_medium_line_x2_t3_g3_g

0xfd3c,	// (0x0008c004) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfd3c,	// (0x0008c004) list_medium_line_x2_t3_g3_t1

0xfd51,	// (0x0008c019) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfd51,	// (0x0008c019) list_medium_line_x2_t3_g3_t2

0xfd65,	// (0x0008c02d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfd65,	// (0x0008c02d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0009b512) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0009b512) list_medium_line_x2_t3_g3_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t3_g2_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t3_g2_g1

0xee57,	// (0x0009b11f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0009b519) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0009b519) list_medium_line_x2_t3_g2_g

0xfd7a,	// (0x0008c042) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfd7a,	// (0x0008c042) list_medium_line_x2_t3_g2_t1

0xfd90,	// (0x0008c058) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfd90,	// (0x0008c058) list_medium_line_x2_t3_g2_t2

0xfda2,	// (0x0008c06a) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfda2,	// (0x0008c06a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0009b51e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0009b51e) list_medium_line_x2_t3_g2_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t4_g4_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t4_g4_g1

0xfdc0,	// (0x0008c088) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfdc0,	// (0x0008c088) list_medium_line_x2_t4_g4_g2

0xee63,	// (0x0009b12b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x2_t4_g4_g3

0xfdcc,	// (0x0008c094) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfdcc,	// (0x0008c094) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0009b525) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0009b525) list_medium_line_x2_t4_g4_g

0xfdd8,	// (0x0008c0a0) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfdd8,	// (0x0008c0a0) list_medium_line_x2_t4_g4_t1

0xfdf2,	// (0x0008c0ba) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfdf2,	// (0x0008c0ba) list_medium_line_x2_t4_g4_t2

0xfe08,	// (0x0008c0d0) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfe08,	// (0x0008c0d0) list_medium_line_x2_t4_g4_t3

0xfe1d,	// (0x0008c0e5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfe1d,	// (0x0008c0e5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0009b52e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0009b52e) list_medium_line_x2_t4_g4_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g4_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g4_g1

0xf08a,	// (0x0009b352) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf08a,	// (0x0009b352) list_medium_line_x2_t2_g4_g2

0xee63,	// (0x0009b12b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x2_t2_g4_g3

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0009b595) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0009b595) list_medium_line_x2_t2_g4_g

0xfe2f,	// (0x0008c0f7) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfe2f,	// (0x0008c0f7) list_medium_line_x2_t2_g4_t1

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g4_t2_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0009b59e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0009b59e) list_medium_line_x2_t2_g4_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g3_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g3_g1

0xee63,	// (0x0009b12b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x2_t2_g3_g2

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2db,	// (0x0009b5a3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2db,	// (0x0009b5a3) list_medium_line_x2_t2_g3_g

0xfe44,	// (0x0008c10c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfe44,	// (0x0008c10c) list_medium_line_x2_t2_g3_t1

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g3_t2_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e2,	// (0x0009b5aa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e2,	// (0x0009b5aa) list_medium_line_x2_t2_g3_t

0x3061,	// (0x0008f329) main_sp_fs_list_pane_ParamLimits

0x3061,	// (0x0008f329) main_sp_fs_list_pane

0x306d,	// (0x0008f335) sp_fs_scroll_pane_ParamLimits

0x306d,	// (0x0008f335) sp_fs_scroll_pane

0xfe59,	// (0x0008c121) list_medium_line_x2_t3_t1

0xfe69,	// (0x0008c131) list_medium_line_x2_t3_t2

0xfe77,	// (0x0008c13f) list_medium_line_x2_t3_t3

0x0002,

0xf32d,	// (0x0009b5f5) list_medium_line_x2_t3_t

0xfe85,	// (0x0008c14d) list_medium_line_x3_t4_t1

0xfe95,	// (0x0008c15d) list_medium_line_x3_t4_t2

0xfea3,	// (0x0008c16b) list_medium_line_x3_t4_t3

0xf096,	// (0x0009b35e) list_medium_line_x3_t4_t4

0x0003,

0xf334,	// (0x0009b5fc) list_medium_line_x3_t4_t

0xfeb1,	// (0x0008c179) list_medium_line_x4_t5_t1

0xfec1,	// (0x0008c189) list_medium_line_x4_t5_t2

0xf0a4,	// (0x0009b36c) list_medium_line_x4_t5_t3

0xfecf,	// (0x0008c197) list_medium_line_x4_t5_t4

0xf096,	// (0x0009b35e) list_medium_line_x4_t5_t5

0x0004,

0xf33d,	// (0x0009b605) list_medium_line_x4_t5_t

0xee4b,	// (0x0009b113) list_medium_line_t4_g4_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_t4_g4_g1

0xfedd,	// (0x0008c1a5) list_medium_line_t4_g4_g2_ParamLimits

0xfedd,	// (0x0008c1a5) list_medium_line_t4_g4_g2

0xfee9,	// (0x0008c1b1) list_medium_line_t4_g4_g3_ParamLimits

0xfee9,	// (0x0008c1b1) list_medium_line_t4_g4_g3

0xee57,	// (0x0009b11f) list_medium_line_t4_g4_g4_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_t4_g4_g4

0x0003,

0xf348,	// (0x0009b610) list_medium_line_t4_g4_g_ParamLimits

0xf348,	// (0x0009b610) list_medium_line_t4_g4_g

0xfef5,	// (0x0008c1bd) list_medium_line_t4_g4_t1_ParamLimits

0xfef5,	// (0x0008c1bd) list_medium_line_t4_g4_t1

0xff0a,	// (0x0008c1d2) list_medium_line_t4_g4_t2_ParamLimits

0xff0a,	// (0x0008c1d2) list_medium_line_t4_g4_t2

0xff20,	// (0x0008c1e8) list_medium_line_t4_g4_t3_ParamLimits

0xff20,	// (0x0008c1e8) list_medium_line_t4_g4_t3

0xee6f,	// (0x0009b137) list_medium_line_t4_g4_t4_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_t4_g4_t4

0x0003,

0xf351,	// (0x0009b619) list_medium_line_t4_g4_t_ParamLimits

0xf351,	// (0x0009b619) list_medium_line_t4_g4_t

0x313f,	// (0x0008f407) chi_dic_find_pane_g1

0x4332,	// (0x000905fa) main_tport_pane

0x0115,	// (0x0008c3dd) list_medium_line_plain_t1

0x0123,	// (0x0008c3eb) list_medium_line_t2_g2_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t2_g2_g1

0xa842,	// (0x00096b0a) list_medium_line_t2_g2_g2_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_t2_g2_g2

0x0001,

0xfa0d,	// (0x0009bcd5) list_medium_line_t2_g2_g_ParamLimits

0xfa0d,	// (0x0009bcd5) list_medium_line_t2_g2_g

0x012f,	// (0x0008c3f7) list_medium_line_t2_g2_t1_ParamLimits

0x012f,	// (0x0008c3f7) list_medium_line_t2_g2_t1

0x0146,	// (0x0008c40e) list_medium_line_t2_g2_t2_ParamLimits

0x0146,	// (0x0008c40e) list_medium_line_t2_g2_t2

0x0001,

0xfa12,	// (0x0009bcda) list_medium_line_t2_g2_t_ParamLimits

0xfa12,	// (0x0009bcda) list_medium_line_t2_g2_t

0x78bc,	// (0x00093b84) aid_sp_fs_list_icon_a_sm

0xa8c8,	// (0x00096b90) aid_sp_fs_list_icon_d

0xbb2d,	// (0x00097df5) aid_sp_fs_text_primary

0xbb36,	// (0x00097dfe) aid_sp_fs_text_secondary

0x78c4,	// (0x00093b8c) list_medium_line

0x78c4,	// (0x00093b8c) list_medium_line_g2

0x78c4,	// (0x00093b8c) list_medium_line_g3

0x78c4,	// (0x00093b8c) list_medium_line_plain

0x78c4,	// (0x00093b8c) list_medium_line_plain_t2

0x78c4,	// (0x00093b8c) list_medium_line_plain_t3

0x78c4,	// (0x00093b8c) list_medium_line_right_icon

0x78c4,	// (0x00093b8c) list_medium_line_right_iconx2

0x78c4,	// (0x00093b8c) list_medium_line_t2

0x78c4,	// (0x00093b8c) list_medium_line_t2_g2

0x78c4,	// (0x00093b8c) list_medium_line_t2_g3

0x78c4,	// (0x00093b8c) list_medium_line_t2_right_icon

0x78c4,	// (0x00093b8c) list_medium_line_t2_right_iconx2

0x78c4,	// (0x00093b8c) list_medium_line_t3

0x78c4,	// (0x00093b8c) list_medium_line_t3_g2

0x78c4,	// (0x00093b8c) list_medium_line_t3_g3

0x78c4,	// (0x00093b8c) list_medium_line_t3_right_iconx2

0x02d7,	// (0x0008c59f) list_medium_line_t4_g4

0x02e0,	// (0x0008c5a8) list_medium_line_x2

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t2_g2

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t2_g3

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t2_g4

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t3

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t3_g2

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t3_g3

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t3_g4

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t4_g2

0x02e0,	// (0x0008c5a8) list_medium_line_x2_t4_g4

0x78cd,	// (0x00093b95) list_medium_line_x3

0x78cd,	// (0x00093b95) list_medium_line_x3_t4

0x78cd,	// (0x00093b95) list_medium_line_x3_t4_g4

0x02d7,	// (0x0008c59f) list_medium_line_x4_t4

0x02d7,	// (0x0008c59f) list_medium_line_x4_t4_g7

0x02d7,	// (0x0008c59f) list_medium_line_x4_t5

0x02e9,	// (0x0008c5b1) list_single_fs_dyc_pane_ParamLimits

0x02e9,	// (0x0008c5b1) list_single_fs_dyc_pane

0xee4b,	// (0x0009b113) list_medium_line_x4_t4_g7_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x4_t4_g7_g1

0x0321,	// (0x0008c5e9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0321,	// (0x0008c5e9) list_medium_line_x4_t4_g7_g2

0x032d,	// (0x0008c5f5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x032d,	// (0x0008c5f5) list_medium_line_x4_t4_g7_g3

0x033c,	// (0x0008c604) list_medium_line_x4_t4_g7_g4_ParamLimits

0x033c,	// (0x0008c604) list_medium_line_x4_t4_g7_g4

0x0348,	// (0x0008c610) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0348,	// (0x0008c610) list_medium_line_x4_t4_g7_g5

0x0357,	// (0x0008c61f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0357,	// (0x0008c61f) list_medium_line_x4_t4_g7_g6

0x0366,	// (0x0008c62e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0366,	// (0x0008c62e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdd,	// (0x0009bea5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdd,	// (0x0009bea5) list_medium_line_x4_t4_g7_g

0x0372,	// (0x0008c63a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0372,	// (0x0008c63a) list_medium_line_x4_t4_g7_t1

0x0387,	// (0x0008c64f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0387,	// (0x0008c64f) list_medium_line_x4_t4_g7_t2

0x039c,	// (0x0008c664) list_medium_line_x4_t4_g7_t3_ParamLimits

0x039c,	// (0x0008c664) list_medium_line_x4_t4_g7_t3

0x03b1,	// (0x0008c679) list_medium_line_x4_t4_g7_t4_ParamLimits

0x03b1,	// (0x0008c679) list_medium_line_x4_t4_g7_t4

0x03c3,	// (0x0008c68b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x03c3,	// (0x0008c68b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbec,	// (0x0009beb4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbec,	// (0x0009beb4) list_medium_line_x4_t4_g7_t

0x03d5,	// (0x0008c69d) list_single_dyc_row_pane_ParamLimits

0x03d5,	// (0x0008c69d) list_single_dyc_row_pane

0x85dd,	// (0x000948a5) call5_gesture_pane_ParamLimits

0x85dd,	// (0x000948a5) call5_gesture_pane

0x8633,	// (0x000948fb) call5_windows_pane_ParamLimits

0x8633,	// (0x000948fb) call5_windows_pane

0x86e1,	// (0x000949a9) call5_swipe_1_pane_cp_ParamLimits

0x86e1,	// (0x000949a9) call5_swipe_1_pane_cp

0x86ed,	// (0x000949b5) call5_swipe_2_pane_cp_ParamLimits

0x86ed,	// (0x000949b5) call5_swipe_2_pane_cp

0xb3ae,	// (0x00097676) call5_image_pane_cp

0x86f9,	// (0x000949c1) popup_call5_audio_first_window_cp_ParamLimits

0x86f9,	// (0x000949c1) popup_call5_audio_first_window_cp

0xe5d9,	// (0x0009a8a1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5d9,	// (0x0009a8a1) call5_swipe_1_pane_g1_cp

0xe619,	// (0x0009a8e1) call5_swipe_1_pane_g2_cp

0xe5f2,	// (0x0009a8ba) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5f2,	// (0x0009a8ba) call5_swipe_1_pane_t1_cp

0xe5d9,	// (0x0009a8a1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5d9,	// (0x0009a8a1) call5_swipe_2_pane_g1_cp

0xe621,	// (0x0009a8e9) call5_swipe_2_pane_g2_cp

0xe629,	// (0x0009a8f1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe629,	// (0x0009a8f1) call5_swipe_2_pane_t1_cp

0x995b,	// (0x00095c23) main_sp_fs_email_pane

0xe63e,	// (0x0009a906) main_sp_fs_listscroll_pane_te

0x8707,	// (0x000949cf) popup_sp_fs_action_menu_pane_ParamLimits

0x8707,	// (0x000949cf) popup_sp_fs_action_menu_pane

0xcc18,	// (0x00098ee0) bg_sp_fs_ctrlbar_pane_g1

0xe647,	// (0x0009a90f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe650,	// (0x0009a918) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe659,	// (0x0009a921) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc18,	// (0x00098ee0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcda,	// (0x0009bfa2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f7,	// (0x00098cbf) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9f7,	// (0x00098cbf) bg_sp_fs_ctrlbar_ddmenu_pane

0xe662,	// (0x0009a92a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe662,	// (0x0009a92a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe66e,	// (0x0009a936) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe66e,	// (0x0009a936) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce3,	// (0x0009bfab) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce3,	// (0x0009bfab) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe67a,	// (0x0009a942) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe67a,	// (0x0009a942) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa8ec,	// (0x00096bb4) list_medium_line_t2_right_icon_g1

0x0481,	// (0x0008c749) list_medium_line_t2_right_icon_t1

0x0491,	// (0x0008c759) list_medium_line_t2_right_icon_t2

0x0001,

0xfce8,	// (0x0009bfb0) list_medium_line_t2_right_icon_t

0xc7c7,	// (0x00098a8f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7c7,	// (0x00098a8f) bg_sp_fs_ctrlbar_pane

0x879a,	// (0x00094a62) main_sp_fs_ctrlbar_button_pane_cp01

0x87a4,	// (0x00094a6c) main_sp_fs_ctrlbar_ddmenu_pane

0xe6cc,	// (0x0009a994) main_sp_fs_ctrlbar_pane_g1

0xe6d8,	// (0x0009a9a0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfced,	// (0x0009bfb5) main_sp_fs_ctrlbar_pane_g

0xe6e4,	// (0x0009a9ac) main_sp_fs_ctrlbar_pane_t1

0x04a3,	// (0x0008c76b) main_sp_fs_ctrlbar_pane

0x04c7,	// (0x0008c78f) main_sp_fs_listscroll_pane_te_cp01

0x04e7,	// (0x0008c7af) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x04e7,	// (0x0008c7af) popup_sp_fs_action_menu_pane_cp01

0x995b,	// (0x00095c23) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x995b,	// (0x00095c23) bg_sp_fs_highlight_list_pane_cp01

0x87ae,	// (0x00094a76) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x87ae,	// (0x00094a76) sp_fs_action_menu_list_gene_pane_g1

0xe714,	// (0x0009a9dc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe714,	// (0x0009a9dc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf7,	// (0x0009bfbf) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf7,	// (0x0009bfbf) sp_fs_action_menu_list_gene_pane_g

0x87bd,	// (0x00094a85) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x87bd,	// (0x00094a85) sp_fs_action_menu_list_gene_pane_t1

0x87d5,	// (0x00094a9d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x87d5,	// (0x00094a9d) sp_fs_action_menu_list_gene_pane

0xe721,	// (0x0009a9e9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe721,	// (0x0009a9e9) popup_sp_fs_action_menu_bg_pane

0x87f8,	// (0x00094ac0) sp_fs_action_menu_list_pane_ParamLimits

0x87f8,	// (0x00094ac0) sp_fs_action_menu_list_pane

0xe72f,	// (0x0009a9f7) sp_fs_scroll_pane_cp01_ParamLimits

0xe72f,	// (0x0009a9f7) sp_fs_scroll_pane_cp01

0x051d,	// (0x0008c7e5) list_medium_line_plain_t2_t1

0x052d,	// (0x0008c7f5) list_medium_line_plain_t2_t2

0x0001,

0xfcfc,	// (0x0009bfc4) list_medium_line_plain_t2_t

0x053d,	// (0x0008c805) list_medium_line_plain_t3_t1

0x054d,	// (0x0008c815) list_medium_line_plain_t3_t2

0x055b,	// (0x0008c823) list_medium_line_plain_t3_t3

0x0002,

0xfd01,	// (0x0009bfc9) list_medium_line_plain_t3_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g2_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t2_g2_g1

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0009b519) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0009b519) list_medium_line_x2_t2_g2_g

0xf0b2,	// (0x0009b37a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b2,	// (0x0009b37a) list_medium_line_x2_t2_g2_t1

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g2_t2_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd08,	// (0x0009bfd0) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd08,	// (0x0009bfd0) list_medium_line_x2_t2_g2_t

0xee4b,	// (0x0009b113) list_medium_line_x2_t4_g2_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t4_g2_g1

0x0569,	// (0x0008c831) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0569,	// (0x0008c831) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0d,	// (0x0009bfd5) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0d,	// (0x0009bfd5) list_medium_line_x2_t4_g2_g

0x057b,	// (0x0008c843) list_medium_line_x2_t4_g2_t1_ParamLimits

0x057b,	// (0x0008c843) list_medium_line_x2_t4_g2_t1

0x0595,	// (0x0008c85d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0595,	// (0x0008c85d) list_medium_line_x2_t4_g2_t2

0x05ab,	// (0x0008c873) list_medium_line_x2_t4_g2_t3_ParamLimits

0x05ab,	// (0x0008c873) list_medium_line_x2_t4_g2_t3

0xee6f,	// (0x0009b137) list_medium_line_x2_t4_g2_t4_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd12,	// (0x0009bfda) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd12,	// (0x0009bfda) list_medium_line_x2_t4_g2_t

0xa8f4,	// (0x00096bbc) list_medium_line_t3_right_iconx2_g1

0xa8ec,	// (0x00096bb4) list_medium_line_t3_right_iconx2_g2

0x05c0,	// (0x0008c888) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1b,	// (0x0009bfe3) list_medium_line_t3_right_iconx2_g

0x05ca,	// (0x0008c892) list_medium_line_t3_right_iconx2_t1

0x05da,	// (0x0008c8a2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd22,	// (0x0009bfea) list_medium_line_t3_right_iconx2_t

0xee4b,	// (0x0009b113) list_medium_line_x3_t4_g4_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x3_t4_g4_g1

0xee63,	// (0x0009b12b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x3_t4_g4_g2

0xf0c7,	// (0x0009b38f) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0c7,	// (0x0009b38f) list_medium_line_x3_t4_g4_g3

0x05e8,	// (0x0008c8b0) list_medium_line_x3_t4_g4_g4_ParamLimits

0x05e8,	// (0x0008c8b0) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd27,	// (0x0009bfef) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd27,	// (0x0009bfef) list_medium_line_x3_t4_g4_g

0x05f4,	// (0x0008c8bc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x05f4,	// (0x0008c8bc) list_medium_line_x3_t4_g4_t1

0x060b,	// (0x0008c8d3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x060b,	// (0x0008c8d3) list_medium_line_x3_t4_g4_t2

0x0626,	// (0x0008c8ee) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0626,	// (0x0008c8ee) list_medium_line_x3_t4_g4_t3

0x063b,	// (0x0008c903) list_medium_line_x3_t4_g4_t4_ParamLimits

0x063b,	// (0x0008c903) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd30,	// (0x0009bff8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd30,	// (0x0009bff8) list_medium_line_x3_t4_g4_t

0x0658,	// (0x0008c920) list_single_dyc_row_text_pane_t1_ParamLimits

0x0658,	// (0x0008c920) list_single_dyc_row_text_pane_t1

0x06a1,	// (0x0008c969) list_single_dyc_row_text_pane_t2_ParamLimits

0x06a1,	// (0x0008c969) list_single_dyc_row_text_pane_t2

0x881c,	// (0x00094ae4) list_single_dyc_row_text_pane_t3_ParamLimits

0x881c,	// (0x00094ae4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd39,	// (0x0009c001) list_single_dyc_row_text_pane_t_ParamLimits

0xfd39,	// (0x0009c001) list_single_dyc_row_text_pane_t

0x882e,	// (0x00094af6) list_single_dyc_row_pane_g1_ParamLimits

0x882e,	// (0x00094af6) list_single_dyc_row_pane_g1

0x883a,	// (0x00094b02) list_single_dyc_row_pane_g2_ParamLimits

0x883a,	// (0x00094b02) list_single_dyc_row_pane_g2

0x8846,	// (0x00094b0e) list_single_dyc_row_pane_g3_ParamLimits

0x8846,	// (0x00094b0e) list_single_dyc_row_pane_g3

0x8852,	// (0x00094b1a) list_single_dyc_row_pane_g4_ParamLimits

0x8852,	// (0x00094b1a) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009c008) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009c008) list_single_dyc_row_pane_g

0x885e,	// (0x00094b26) list_single_dyc_row_text_pane_ParamLimits

0x885e,	// (0x00094b26) list_single_dyc_row_text_pane

0x990a,	// (0x00095bd2) bg_sp_fs_scroll_pane

0xe755,	// (0x0009aa1d) thumb_sp_fs_scroll_pane

0x0123,	// (0x0008c3eb) list_medium_line_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_g1

0x06fb,	// (0x0008c9c3) list_medium_line_t1_ParamLimits

0x06fb,	// (0x0008c9c3) list_medium_line_t1

0xee4b,	// (0x0009b113) list_medium_line_x2_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_g1

0xee63,	// (0x0009b12b) list_medium_line_x2_g2_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009c011) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009c011) list_medium_line_x2_g

0x887d,	// (0x00094b45) list_medium_line_x2_t1_ParamLimits

0x887d,	// (0x00094b45) list_medium_line_x2_t1

0xee4b,	// (0x0009b113) list_medium_line_x3_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x3_g1

0xee63,	// (0x0009b12b) list_medium_line_x3_g2_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009c011) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009c011) list_medium_line_x3_g

0x887d,	// (0x00094b45) list_medium_line_x3_t1_ParamLimits

0x887d,	// (0x00094b45) list_medium_line_x3_t1

0xe75e,	// (0x0009aa26) thumb_sp_fs_scroll_pane_g1

0xe767,	// (0x0009aa2f) thumb_sp_fs_scroll_pane_g2

0xe770,	// (0x0009aa38) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009c016) thumb_sp_fs_scroll_pane_g

0xe75e,	// (0x0009aa26) bg_sp_fs_scroll_pane_g1

0xe767,	// (0x0009aa2f) bg_sp_fs_scroll_pane_g2

0xe770,	// (0x0009aa38) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009c016) bg_sp_fs_scroll_pane_g

0xee4b,	// (0x0009b113) list_medium_line_x2_t3_g4_g1_ParamLimits

0xee4b,	// (0x0009b113) list_medium_line_x2_t3_g4_g1

0xf08a,	// (0x0009b352) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf08a,	// (0x0009b352) list_medium_line_x2_t3_g4_g2

0xee63,	// (0x0009b12b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xee63,	// (0x0009b12b) list_medium_line_x2_t3_g4_g3

0xee57,	// (0x0009b11f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xee57,	// (0x0009b11f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0009b595) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0009b595) list_medium_line_x2_t3_g4_g

0x0710,	// (0x0008c9d8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0710,	// (0x0008c9d8) list_medium_line_x2_t3_g4_t1

0x0726,	// (0x0008c9ee) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0726,	// (0x0008c9ee) list_medium_line_x2_t3_g4_t2

0xee6f,	// (0x0009b137) list_medium_line_x2_t3_g4_t3_ParamLimits

0xee6f,	// (0x0009b137) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009c01d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009c01d) list_medium_line_x2_t3_g4_t

0x0123,	// (0x0008c3eb) list_medium_line_g2_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_g2_g1

0xa842,	// (0x00096b0a) list_medium_line_g2_g2_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_g2_g2

0x0001,

0xfa0d,	// (0x0009bcd5) list_medium_line_g2_g_ParamLimits

0xfa0d,	// (0x0009bcd5) list_medium_line_g2_g

0x073f,	// (0x0008ca07) list_medium_line_g2_t1_ParamLimits

0x073f,	// (0x0008ca07) list_medium_line_g2_t1

0x0123,	// (0x0008c3eb) list_medium_line_t3_g2_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t3_g2_g1

0xa842,	// (0x00096b0a) list_medium_line_t3_g2_g2_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_t3_g2_g2

0x0001,

0xfa0d,	// (0x0009bcd5) list_medium_line_t3_g2_g_ParamLimits

0xfa0d,	// (0x0009bcd5) list_medium_line_t3_g2_g

0x0754,	// (0x0008ca1c) list_medium_line_t3_g2_t1_ParamLimits

0x0754,	// (0x0008ca1c) list_medium_line_t3_g2_t1

0x076b,	// (0x0008ca33) list_medium_line_t3_g2_t2_ParamLimits

0x076b,	// (0x0008ca33) list_medium_line_t3_g2_t2

0x0780,	// (0x0008ca48) list_medium_line_t3_g2_t3_ParamLimits

0x0780,	// (0x0008ca48) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0009c024) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0009c024) list_medium_line_t3_g2_t

0xa8ec,	// (0x00096bb4) list_medium_line_right_icon_g1

0x0799,	// (0x0008ca61) list_medium_line_right_icon_t1

0x0123,	// (0x0008c3eb) list_medium_line_t2_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t2_g1

0x07a7,	// (0x0008ca6f) list_medium_line_t2_t1_ParamLimits

0x07a7,	// (0x0008ca6f) list_medium_line_t2_t1

0x07c1,	// (0x0008ca89) list_medium_line_t2_t2_ParamLimits

0x07c1,	// (0x0008ca89) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0009c02b) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0009c02b) list_medium_line_t2_t

0x0123,	// (0x0008c3eb) list_medium_line_t3_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t3_g1

0x07da,	// (0x0008caa2) list_medium_line_t3_t1_ParamLimits

0x07da,	// (0x0008caa2) list_medium_line_t3_t1

0x07f1,	// (0x0008cab9) list_medium_line_t3_t2_ParamLimits

0x07f1,	// (0x0008cab9) list_medium_line_t3_t2

0x0806,	// (0x0008cace) list_medium_line_t3_t3_ParamLimits

0x0806,	// (0x0008cace) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0009c030) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0009c030) list_medium_line_t3_t

0x0123,	// (0x0008c3eb) list_medium_line_g3_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_g3_g1

0xa8fc,	// (0x00096bc4) list_medium_line_g3_g2_ParamLimits

0xa8fc,	// (0x00096bc4) list_medium_line_g3_g2

0xa842,	// (0x00096b0a) list_medium_line_g3_g3_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0009c037) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0009c037) list_medium_line_g3_g

0x0818,	// (0x0008cae0) list_medium_line_g3_t1_ParamLimits

0x0818,	// (0x0008cae0) list_medium_line_g3_t1

0x0123,	// (0x0008c3eb) list_medium_line_t2_g3_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t2_g3_g1

0xa8fc,	// (0x00096bc4) list_medium_line_t2_g3_g2_ParamLimits

0xa8fc,	// (0x00096bc4) list_medium_line_t2_g3_g2

0xa842,	// (0x00096b0a) list_medium_line_t2_g3_g3_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0009c037) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0009c037) list_medium_line_t2_g3_g

0x082d,	// (0x0008caf5) list_medium_line_t2_g3_t1_ParamLimits

0x082d,	// (0x0008caf5) list_medium_line_t2_g3_t1

0x0844,	// (0x0008cb0c) list_medium_line_t2_g3_t2_ParamLimits

0x0844,	// (0x0008cb0c) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0009c03e) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0009c03e) list_medium_line_t2_g3_t

0x0123,	// (0x0008c3eb) list_medium_line_t3_g3_g1_ParamLimits

0x0123,	// (0x0008c3eb) list_medium_line_t3_g3_g1

0xa8fc,	// (0x00096bc4) list_medium_line_t3_g3_g2_ParamLimits

0xa8fc,	// (0x00096bc4) list_medium_line_t3_g3_g2

0xa842,	// (0x00096b0a) list_medium_line_t3_g3_g3_ParamLimits

0xa842,	// (0x00096b0a) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0009c037) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0009c037) list_medium_line_t3_g3_g

0x085d,	// (0x0008cb25) list_medium_line_t3_g3_t1_ParamLimits

0x085d,	// (0x0008cb25) list_medium_line_t3_g3_t1

0x0876,	// (0x0008cb3e) list_medium_line_t3_g3_t2_ParamLimits

0x0876,	// (0x0008cb3e) list_medium_line_t3_g3_t2

0x088c,	// (0x0008cb54) list_medium_line_t3_g3_t3_ParamLimits

0x088c,	// (0x0008cb54) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0009c043) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0009c043) list_medium_line_t3_g3_t

0xa8f4,	// (0x00096bbc) list_medium_line_right_iconx2_g1

0xa8ec,	// (0x00096bb4) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009c04a) list_medium_line_right_iconx2_g

0xa908,	// (0x00096bd0) list_medium_line_right_iconx2_t1

0xa8f4,	// (0x00096bbc) list_medium_line_t2_right_iconx2_g1

0xa8ec,	// (0x00096bb4) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009c04a) list_medium_line_t2_right_iconx2_g

0x08a6,	// (0x0008cb6e) list_medium_line_t2_right_iconx2_t1

0x08b6,	// (0x0008cb7e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0009c04f) list_medium_line_t2_right_iconx2_t

0x08c8,	// (0x0008cb90) list_medium_line_x4_t4_t1

0x08d6,	// (0x0008cb9e) list_medium_line_x4_t4_t2

0x08e6,	// (0x0008cbae) list_medium_line_x4_t4_t3

0x08f6,	// (0x0008cbbe) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0009c054) list_medium_line_x4_t4_t

0x88d6,	// (0x00094b9e) tport_appsw_pane_ParamLimits

0x88d6,	// (0x00094b9e) tport_appsw_pane

0x88ee,	// (0x00094bb6) tport_contact_pane_ParamLimits

0x88ee,	// (0x00094bb6) tport_contact_pane

0x8906,	// (0x00094bce) tport_listscroll_pane_ParamLimits

0x8906,	// (0x00094bce) tport_listscroll_pane

0x8920,	// (0x00094be8) cell_tport_appsw_pane_ParamLimits

0x8920,	// (0x00094be8) cell_tport_appsw_pane

0xd5fc,	// (0x000998c4) tport_appsw_pane_g1_ParamLimits

0xd5fc,	// (0x000998c4) tport_appsw_pane_g1

0xe779,	// (0x0009aa41) tport_contact_pane_g1

0xe782,	// (0x0009aa4a) tport_contact_pane_t1

0xe790,	// (0x0009aa58) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0009c05d) tport_contact_pane_t

0xe79e,	// (0x0009aa66) list_tport_pane

0xe7a7,	// (0x0009aa6f) scroll_pane_cp_030

0x896c,	// (0x00094c34) cell_tport_appsw_pane_g1

0x897c,	// (0x00094c44) cell_tport_appsw_pane_t1

0x990a,	// (0x00095bd2) grid_highlight_pane_cp019

0x898a,	// (0x00094c52) list_tport_double_graphic_pane_ParamLimits

0x898a,	// (0x00094c52) list_tport_double_graphic_pane

0x995b,	// (0x00095c23) list_highlight_pane_cp023_ParamLimits

0x995b,	// (0x00095c23) list_highlight_pane_cp023

0x8997,	// (0x00094c5f) list_tport_double_graphic_pane_g1_ParamLimits

0x8997,	// (0x00094c5f) list_tport_double_graphic_pane_g1

0x89a4,	// (0x00094c6c) list_tport_double_graphic_pane_t1_ParamLimits

0x89a4,	// (0x00094c6c) list_tport_double_graphic_pane_t1

0x89b9,	// (0x00094c81) list_tport_double_graphic_pane_t2_ParamLimits

0x89b9,	// (0x00094c81) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0009c069) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0009c069) list_tport_double_graphic_pane_t

0x990a,	// (0x00095bd2) main_cale_note_pane

0x6aff,	// (0x00092dc7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6aff,	// (0x00092dc7) cell_vitu2_function_top_wide_pane_cp01

0x8320,	// (0x000945e8) wait_bar_pane_cp05_ParamLimits

0x995b,	// (0x00095c23) listscroll_cmail_pane

0xe7b8,	// (0x0009aa80) list_cmail_pane

0x89d5,	// (0x00094c9d) list_cmail_body_pane

0x89ea,	// (0x00094cb2) list_single_cmail_header_caption_pane

0x8a04,	// (0x00094ccc) list_single_cmail_header_detail_pane_ParamLimits

0x8a04,	// (0x00094ccc) list_single_cmail_header_detail_pane

0x8a33,	// (0x00094cfb) list_single_cmail_header_caption_pane_t1

0x0906,	// (0x0008cbce) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0906,	// (0x0008cbce) list_single_cmail_header_detail_pane_g1

0xa916,	// (0x00096bde) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa916,	// (0x00096bde) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0009c06e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0009c06e) list_single_cmail_header_detail_pane_g

0x091e,	// (0x0008cbe6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x091e,	// (0x0008cbe6) list_single_cmail_header_detail_pane_t1

0x096e,	// (0x0008cc36) list_single_cmail_header_editor_pane_bg_ParamLimits

0x096e,	// (0x0008cc36) list_single_cmail_header_editor_pane_bg

0xe281,	// (0x0009a549) list_cmail_body_pane_g1

0xe7dc,	// (0x0009aaa4) list_cmail_body_pane_t1

0xd61c,	// (0x000998e4) list_single_cmail_header_editor_pane_bg_g1

0xacc8,	// (0x00096f90) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62c,	// (0x000998f4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd624,	// (0x000998ec) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd846,	// (0x00099b0e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64c,	// (0x00099914) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63c,	// (0x00099904) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd644,	// (0x0009990c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaca8,	// (0x00096f70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a72,	// (0x00094d3a) calenote_gesture_pane_ParamLimits

0x8a72,	// (0x00094d3a) calenote_gesture_pane

0x8a92,	// (0x00094d5a) calenote_window_pane_ParamLimits

0x8a92,	// (0x00094d5a) calenote_window_pane

0xe7ea,	// (0x0009aab2) popup_note_window_cp01

0x8aae,	// (0x00094d76) calenote_swipe_1_pane_ParamLimits

0x8aae,	// (0x00094d76) calenote_swipe_1_pane

0x86ed,	// (0x000949b5) calenote_swipe_2_pane_ParamLimits

0x86ed,	// (0x000949b5) calenote_swipe_2_pane

0xe5d9,	// (0x0009a8a1) calenote_swipe_1_pane_g1_ParamLimits

0xe5d9,	// (0x0009a8a1) calenote_swipe_1_pane_g1

0xe5e6,	// (0x0009a8ae) calenote_swipe_1_pane_g2_ParamLimits

0xe5e6,	// (0x0009a8ae) calenote_swipe_1_pane_g2

0x0001,

0xfcd0,	// (0x0009bf98) calenote_swipe_1_pane_g_ParamLimits

0xfcd0,	// (0x0009bf98) calenote_swipe_1_pane_g

0xe7fc,	// (0x0009aac4) calenote_swipe_1_pane_t1_ParamLimits

0xe7fc,	// (0x0009aac4) calenote_swipe_1_pane_t1

0xe5d9,	// (0x0009a8a1) calenote_swipe_2_pane_g1_ParamLimits

0xe5d9,	// (0x0009a8a1) calenote_swipe_2_pane_g1

0xe81b,	// (0x0009aae3) calenote_swipe_2_pane_g2_ParamLimits

0xe81b,	// (0x0009aae3) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0009c07a) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0009c07a) calenote_swipe_2_pane_g

0xe827,	// (0x0009aaef) calenote_swipe_2_pane_t1_ParamLimits

0xe827,	// (0x0009aaef) calenote_swipe_2_pane_t1

0x990a,	// (0x00095bd2) main_mup_navstr_pane

0x5759,	// (0x00091a21) main_mup3_pane_t7_ParamLimits

0x5759,	// (0x00091a21) main_mup3_pane_t7

0xa529,	// (0x000967f1) main_mp4_pane_g6_ParamLimits

0xa529,	// (0x000967f1) main_mp4_pane_g6

0xa6cd,	// (0x00096995) main_image3_pane_t4_ParamLimits

0xa6cd,	// (0x00096995) main_image3_pane_t4

0x8ac3,	// (0x00094d8b) popup_navstr_preview_pane_ParamLimits

0x8ac3,	// (0x00094d8b) popup_navstr_preview_pane

0x8ad3,	// (0x00094d9b) scroll_navstr_pane_ParamLimits

0x8ad3,	// (0x00094d9b) scroll_navstr_pane

0x990a,	// (0x00095bd2) bg_popup_preview_window_pane_cp04

0xe84e,	// (0x0009ab16) popup_navstr_preview_pane_t1

0x8ae7,	// (0x00094daf) scroll_navstr_pane_g1_ParamLimits

0x8ae7,	// (0x00094daf) scroll_navstr_pane_g1

0x8afb,	// (0x00094dc3) scroll_navstr_pane_t1_ParamLimits

0x8afb,	// (0x00094dc3) scroll_navstr_pane_t1

0xe7f3,	// (0x0009aabb) bg_button_pane_cp014

0xe7f3,	// (0x0009aabb) bg_button_pane_cp030

0x0427,	// (0x0008c6ef) list_double_fisheye_pane_g4_ParamLimits

0x0427,	// (0x0008c6ef) list_double_fisheye_pane_g4

0x0433,	// (0x0008c6fb) list_double_fisheye_pane_g5_ParamLimits

0x0433,	// (0x0008c6fb) list_double_fisheye_pane_g5

0xe7c0,	// (0x0009aa88) sp_fs_scroll_pane_cp03

0xe6cc,	// (0x0009a994) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6d8,	// (0x0009a9a0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfced,	// (0x0009bfb5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6e4,	// (0x0009a9ac) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x89cb,	// (0x00094c93) sp_fs_scroll_pane_cp02

0xa24a,	// (0x00096512) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa24a,	// (0x00096512) popup_sp_fs_calendar_preview_list_single_pane

0x990a,	// (0x00095bd2) main_cam6_pano_pane

0x995b,	// (0x00095c23) main_mup3_pane_ParamLimits

0x990a,	// (0x00095bd2) main_phacti_pane

0x81f3,	// (0x000944bb) bg_button_pane_cp11

0x820d,	// (0x000944d5) main_mobtv_info_pane_g2_ParamLimits

0x820d,	// (0x000944d5) main_mobtv_info_pane_g2

0x0001,

0xfc4d,	// (0x0009bf15) main_mobtv_info_pane_g_ParamLimits

0xfc4d,	// (0x0009bf15) main_mobtv_info_pane_g

0x83e8,	// (0x000946b0) sc_clock_pane_t5_ParamLimits

0x83e8,	// (0x000946b0) sc_clock_pane_t5

0x8474,	// (0x0009473c) main_radioblah_pane_g1_ParamLimits

0xe525,	// (0x0009a7ed) main_radioblah_pane_t3_ParamLimits

0xe525,	// (0x0009a7ed) main_radioblah_pane_t3

0xe53d,	// (0x0009a805) main_radioblah_pane_t4_ParamLimits

0xe53d,	// (0x0009a805) main_radioblah_pane_t4

0x849c,	// (0x00094764) main_radioblah_text_pane_ParamLimits

0x849c,	// (0x00094764) main_radioblah_text_pane

0x84ae,	// (0x00094776) main_radioblah_info_pane_g1_ParamLimits

0x8547,	// (0x0009480f) main_radioblah_info_pane_t4_ParamLimits

0x8547,	// (0x0009480f) main_radioblah_info_pane_t4

0x995b,	// (0x00095c23) main_sp_fs_calendar_pane

0x8b12,	// (0x00094dda) main_phacti_pane_g1

0x8b1a,	// (0x00094de2) phacti_note_pane_ParamLimits

0x8b1a,	// (0x00094de2) phacti_note_pane

0xe865,	// (0x0009ab2d) phacti_term_pane_ParamLimits

0xe865,	// (0x0009ab2d) phacti_term_pane

0xe87a,	// (0x0009ab42) phacti_note_pane_t1_ParamLimits

0xe87a,	// (0x0009ab42) phacti_note_pane_t1

0x8b2e,	// (0x00094df6) phacti_term_pane_g1

0x8b36,	// (0x00094dfe) phacti_term_pane_t1_ParamLimits

0x8b36,	// (0x00094dfe) phacti_term_pane_t1

0xe891,	// (0x0009ab59) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe899,	// (0x0009ab61) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0009c084) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a1,	// (0x0009ab69) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a1,	// (0x0009ab69) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8b7,	// (0x0009ab7f) aid_popup_sp_fs_bg_corner_pane

0xcc18,	// (0x00098ee0) popup_sp_fs_calendar_preview_bg_pane_g1

0x990a,	// (0x00095bd2) popup_sp_fs_calendar_preview_bg_pane

0xe8bf,	// (0x0009ab87) popup_sp_fs_calendar_preview_list_pane

0xc7c7,	// (0x00098a8f) bg_main_sp_fs_cale_pane_ParamLimits

0xc7c7,	// (0x00098a8f) bg_main_sp_fs_cale_pane

0x8bc6,	// (0x00094e8e) listscroll_cale_mrui_pane_ParamLimits

0x8bc6,	// (0x00094e8e) listscroll_cale_mrui_pane

0x8bdb,	// (0x00094ea3) listscroll_sp_fs_schedule_track_pane

0x8be4,	// (0x00094eac) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8be4,	// (0x00094eac) main_sp_fs_ctrlbar_pane_cp01

0xe8c7,	// (0x0009ab8f) main_sp_fs_ribbon_pane

0x8bf7,	// (0x00094ebf) popup_sp_fs_cale_preview_window

0x8c09,	// (0x00094ed1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8c09,	// (0x00094ed1) list_single_sp_fs_schedule_track_pane

0x995b,	// (0x00095c23) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x995b,	// (0x00095c23) bg_sp_fs_highlight_list_pane_cp03

0x8c1c,	// (0x00094ee4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8c1c,	// (0x00094ee4) list_single_sp_fs_schedule_track_pane_g1

0x8c28,	// (0x00094ef0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c28,	// (0x00094ef0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0009c089) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0009c089) list_single_sp_fs_schedule_track_pane_g

0x8c34,	// (0x00094efc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c34,	// (0x00094efc) list_single_sp_fs_schedule_track_pane_t1

0x8c56,	// (0x00094f1e) sp_fs_schedule_track_pane_ParamLimits

0x8c56,	// (0x00094f1e) sp_fs_schedule_track_pane

0xe8cf,	// (0x0009ab97) sp_fs_schedule_track_pane_g1

0xe8d7,	// (0x0009ab9f) sp_fs_schedule_track_pane_g2

0xe8df,	// (0x0009aba7) sp_fs_schedule_track_pane_g3

0xe8e7,	// (0x0009abaf) sp_fs_schedule_track_pane_g4

0xe8ef,	// (0x0009abb7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0009c08e) sp_fs_schedule_track_pane_g

0xd61c,	// (0x000998e4) bg_sp_fs_schedule_viewer_highlight_g1

0xacc8,	// (0x00096f90) bg_sp_fs_schedule_viewer_highlight_g2

0xd624,	// (0x000998ec) bg_sp_fs_schedule_viewer_highlight_g3

0xd62c,	// (0x000998f4) bg_sp_fs_schedule_viewer_highlight_g4

0xd846,	// (0x00099b0e) bg_sp_fs_schedule_viewer_highlight_g5

0xd63c,	// (0x00099904) bg_sp_fs_schedule_viewer_highlight_g6

0xd644,	// (0x0009990c) bg_sp_fs_schedule_viewer_highlight_g7

0xd64c,	// (0x00099914) bg_sp_fs_schedule_viewer_highlight_g8

0xaca8,	// (0x00096f70) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0009c099) bg_sp_fs_schedule_viewer_highlight_g

0x990a,	// (0x00095bd2) bg_main_sp_fs_ribbon_pane

0x8c6b,	// (0x00094f33) main_sp_fs_ribbon_pane_g1

0xe8f7,	// (0x0009abbf) main_sp_fs_ribbon_pane_t1

0x8c74,	// (0x00094f3c) main_sp_fs_ribbon_pane_t2

0xe906,	// (0x0009abce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0009c0ac) main_sp_fs_ribbon_pane_t

0xe915,	// (0x0009abdd) main_sp_fs_ribbon_scheduler_pane

0xe91d,	// (0x0009abe5) bg_main_sp_fs_ribbon_pane_g1

0xe926,	// (0x0009abee) bg_main_sp_fs_ribbon_pane_g2

0xe92f,	// (0x0009abf7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0009c0b3) bg_main_sp_fs_ribbon_pane_g

0xe937,	// (0x0009abff) main_sp_fs_ribbon_scheduler_pane_g1

0xe940,	// (0x0009ac08) main_sp_fs_ribbon_scheduler_pane_g2

0xe949,	// (0x0009ac11) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0009c0ba) main_sp_fs_ribbon_scheduler_pane_g

0xe952,	// (0x0009ac1a) list_cale_mrui_pane

0x8c83,	// (0x00094f4b) sp_fs_scroll_pane_cp07_ParamLimits

0x8c83,	// (0x00094f4b) sp_fs_scroll_pane_cp07

0x8c9f,	// (0x00094f67) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c9f,	// (0x00094f67) bg_sp_fs_schedule_viewer_highlight

0xe95f,	// (0x0009ac27) list_single_sp_fs_schedule_track_pane_cp01

0xe967,	// (0x0009ac2f) list_sp_fs_schedule_track_pane

0xe96f,	// (0x0009ac37) sp_fs_scroll_pane_cp06_ParamLimits

0xe96f,	// (0x0009ac37) sp_fs_scroll_pane_cp06

0xcc18,	// (0x00098ee0) bgmain_sp_fs_calendar_pane_g1

0x0987,	// (0x0008cc4f) list_single_cale_mrui_pane_ParamLimits

0x0987,	// (0x0008cc4f) list_single_cale_mrui_pane

0x8cb1,	// (0x00094f79) list_single_cale_mrui_row_pane_ParamLimits

0x8cb1,	// (0x00094f79) list_single_cale_mrui_row_pane

0x8cc7,	// (0x00094f8f) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8cc7,	// (0x00094f8f) list_single_cale_mrui_row_pane_g1

0x8cf3,	// (0x00094fbb) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8cf3,	// (0x00094fbb) list_single_cale_mrui_row_pane_t1

0x099c,	// (0x0008cc64) list_single_cale_mrui_row_pane_t2_ParamLimits

0x099c,	// (0x0008cc64) list_single_cale_mrui_row_pane_t2

0x8d05,	// (0x00094fcd) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8d05,	// (0x00094fcd) list_single_cale_mrui_row_pane_t3

0xa92e,	// (0x00096bf6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa92e,	// (0x00096bf6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0009c0c8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0009c0c8) list_single_cale_mrui_row_pane_t

0x0a02,	// (0x0008ccca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0a02,	// (0x0008ccca) list_single_cmail_header_editor_pane_bg_cp01

0x0a26,	// (0x0008ccee) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0a26,	// (0x0008ccee) list_single_cmail_header_editor_pane_bg_cp02

0x8d34,	// (0x00094ffc) main_radioblah_text_pane_t1_ParamLimits

0x8d34,	// (0x00094ffc) main_radioblah_text_pane_t1

0xe98e,	// (0x0009ac56) cam6_indi_pane_cp01

0xe996,	// (0x0009ac5e) cam6_mode_pane_cp01

0xe99e,	// (0x0009ac66) cam6_pano_pane

0xe9a7,	// (0x0009ac6f) cam6_zoom_pane_cp01

0xe9b1,	// (0x0009ac79) cam6_pano_image_pane

0xe9ba,	// (0x0009ac82) cam6_pano_pane_g1

0xe281,	// (0x0009a549) cam6_pano_pane_g2

0xe9c3,	// (0x0009ac8b) cam6_pano_pane_g3

0xe9cc,	// (0x0009ac94) cam6_pano_pane_g4

0xd19a,	// (0x00099462) cam6_pano_pane_g5

0xe9d5,	// (0x0009ac9d) cam6_pano_pane_g6

0xe9dd,	// (0x0009aca5) cam6_pano_pane_g7

0xe9e5,	// (0x0009acad) cam6_pano_pane_g8

0xe9ee,	// (0x0009acb6) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0009c0d1) cam6_pano_pane_g

0x990a,	// (0x00095bd2) main_browser_tag_pane

0xe846,	// (0x0009ab0e) grid_navstr_albumart_pane

0xe9f9,	// (0x0009acc1) cell_navstr_albumart_pane_ParamLimits

0xe9f9,	// (0x0009acc1) cell_navstr_albumart_pane

0xea18,	// (0x0009ace0) cell_navstr_albumart_pane_g1

0xc5d4,	// (0x0009889c) cell_navstr_albumart_pane_g2

0xc5e4,	// (0x000988ac) cell_navstr_albumart_pane_g3

0xc5dc,	// (0x000988a4) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0009c0e4) cell_navstr_albumart_pane_g

0x8d4f,	// (0x00095017) bt_list_pane_ParamLimits

0x8d4f,	// (0x00095017) bt_list_pane

0x8d65,	// (0x0009502d) bt_list_pane_t1

0x8d74,	// (0x0009503c) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0009c0ed) bt_list_pane_t

0x990a,	// (0x00095bd2) main_cale_prevew_pane

0x8d83,	// (0x0009504b) popup_cale_preview_window_ParamLimits

0x8d83,	// (0x0009504b) popup_cale_preview_window

0x995b,	// (0x00095c23) bg_popup_preview_window_pane_cp05_ParamLimits

0x995b,	// (0x00095c23) bg_popup_preview_window_pane_cp05

0xea20,	// (0x0009ace8) list_cale_preview_pane_ParamLimits

0xea20,	// (0x0009ace8) list_cale_preview_pane

0x8da0,	// (0x00095068) list_double_cale_preview_pane_ParamLimits

0x8da0,	// (0x00095068) list_double_cale_preview_pane

0x8db4,	// (0x0009507c) list_single_cale_preview_pane_ParamLimits

0x8db4,	// (0x0009507c) list_single_cale_preview_pane

0x8dcc,	// (0x00095094) list_single_cale_preview_pane_g1

0x8dd4,	// (0x0009509c) list_single_cale_preview_pane_t1_ParamLimits

0x8dd4,	// (0x0009509c) list_single_cale_preview_pane_t1

0x8de9,	// (0x000950b1) list_double_cale_preview_pane_g1

0x8df1,	// (0x000950b9) list_double_cale_preview_pane_t1_ParamLimits

0x8df1,	// (0x000950b9) list_double_cale_preview_pane_t1

0x8e06,	// (0x000950ce) list_double_cale_preview_pane_t2_ParamLimits

0x8e06,	// (0x000950ce) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0009c0f2) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0009c0f2) list_double_cale_preview_pane_t

0x990a,	// (0x00095bd2) main_ezdial_pane

0x995b,	// (0x00095c23) main_sp_fs_email_pane_ParamLimits

0x874d,	// (0x00094a15) cmail_ddmenu_btn01_pane_ParamLimits

0x874d,	// (0x00094a15) cmail_ddmenu_btn01_pane

0x8760,	// (0x00094a28) cmail_ddmenu_btn02_pane_ParamLimits

0x8760,	// (0x00094a28) cmail_ddmenu_btn02_pane

0x8783,	// (0x00094a4b) cmail_ddmenu_btn03_pane_ParamLimits

0x8783,	// (0x00094a4b) cmail_ddmenu_btn03_pane

0x04a3,	// (0x0008c76b) main_sp_fs_ctrlbar_pane_ParamLimits

0x04c7,	// (0x0008c78f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x89d5,	// (0x00094c9d) list_cmail_body_pane_ParamLimits

0x8a43,	// (0x00094d0b) bg_button_pane_cp12

0xe7cf,	// (0x0009aa97) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7cf,	// (0x0009aa97) list_single_cmail_header_detail_pane_g3

0x8a4e,	// (0x00094d16) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a4e,	// (0x00094d16) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0009c075) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0009c075) list_single_cmail_header_detail_pane_t

0x8b4b,	// (0x00094e13) phacti_term_pane_t2_ParamLimits

0x8b4b,	// (0x00094e13) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0009c07f) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0009c07f) phacti_term_pane_t

0xea2c,	// (0x0009acf4) aid_size_list_single_double

0x8e1e,	// (0x000950e6) popup_ezdial_listscroll_window

0x8e3a,	// (0x00095102) popup_number_entry_window_cp01

0xb3ae,	// (0x00097676) bg_popup_call_pane_cp09

0xea38,	// (0x0009ad00) ezdial_list_pane

0xea40,	// (0x0009ad08) scroll_pane_cp23

0xc7c7,	// (0x00098a8f) bg_button_pane_cp028_ParamLimits

0xc7c7,	// (0x00098a8f) bg_button_pane_cp028

0x8e48,	// (0x00095110) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e48,	// (0x00095110) cmail_ddmenu_btn01_pane_g1

0x8e57,	// (0x0009511f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e57,	// (0x0009511f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0009c0f7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0009c0f7) cmail_ddmenu_btn01_pane_g

0xea48,	// (0x0009ad10) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea48,	// (0x0009ad10) cmail_ddmenu_btn01_pane_t1

0xc7c7,	// (0x00098a8f) bg_button_pane_cp029_ParamLimits

0xc7c7,	// (0x00098a8f) bg_button_pane_cp029

0x8e67,	// (0x0009512f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e67,	// (0x0009512f) cmail_ddmenu_btn02_pane_g1

0x8e82,	// (0x0009514a) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e82,	// (0x0009514a) cmail_ddmenu_btn02_pane_t1

0x995b,	// (0x00095c23) bg_button_pane_cp031_ParamLimits

0x995b,	// (0x00095c23) bg_button_pane_cp031

0x8e67,	// (0x0009512f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e67,	// (0x0009512f) cmail_ddmenu_btn03_pane_g1

0x8e82,	// (0x0009514a) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e82,	// (0x0009514a) cmail_ddmenu_btn03_pane_t1

0x6339,	// (0x00092601) cell_dialer2_keypad_pane_t1_ParamLimits

0x6353,	// (0x0009261b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6353,	// (0x0009261b) cell_dialer2_keypad_pane_t1_copy1

0x8058,	// (0x00094320) ncimui_group_button_pane

0x995b,	// (0x00095c23) main_sp_fs_calendar_pane_ParamLimits

0x89ea,	// (0x00094cb2) list_single_cmail_header_caption_pane_ParamLimits

0x8b7e,	// (0x00094e46) aid_recal_txt_sm_pane

0x990a,	// (0x00095bd2) mian_recal_day_pane

0x8bf7,	// (0x00094ebf) popup_sp_fs_cale_preview_window_ParamLimits

0xea5d,	// (0x0009ad25) list_recal_day_pane

0xa979,	// (0x00096c41) list_single_recal_day_pane_ParamLimits

0xa979,	// (0x00096c41) list_single_recal_day_pane

0xea84,	// (0x0009ad4c) list_single_recal_day_pane_g1_ParamLimits

0xea84,	// (0x0009ad4c) list_single_recal_day_pane_g1

0xa98b,	// (0x00096c53) list_single_recal_day_pane_g2_ParamLimits

0xa98b,	// (0x00096c53) list_single_recal_day_pane_g2

0xa997,	// (0x00096c5f) list_single_recal_day_pane_g3_ParamLimits

0xa997,	// (0x00096c5f) list_single_recal_day_pane_g3

0x0a44,	// (0x0008cd0c) list_single_recal_day_pane_g4_ParamLimits

0x0a44,	// (0x0008cd0c) list_single_recal_day_pane_g4

0xa9a3,	// (0x00096c6b) list_single_recal_day_pane_g5_ParamLimits

0xa9a3,	// (0x00096c6b) list_single_recal_day_pane_g5

0xa9af,	// (0x00096c77) list_single_recal_day_pane_g6_ParamLimits

0xa9af,	// (0x00096c77) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0009c106) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0009c106) list_single_recal_day_pane_g

0xa9c3,	// (0x00096c8b) list_single_recal_day_pane_t1

0xa9d5,	// (0x00096c9d) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0009c111) list_single_recal_day_pane_t

0x8ea9,	// (0x00095171) ncimui_query_button_pane_ParamLimits

0x8ea9,	// (0x00095171) ncimui_query_button_pane

0x8eb9,	// (0x00095181) ncimui_query_button_pane_t1_ParamLimits

0x8eb9,	// (0x00095181) ncimui_query_button_pane_t1

0xea90,	// (0x0009ad58) ncimui_query_button_pane_t2_ParamLimits

0xea90,	// (0x0009ad58) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0009c116) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0009c116) ncimui_query_button_pane_t

0x8ecc,	// (0x00095194) query_button_pane_ParamLimits

0x8ecc,	// (0x00095194) query_button_pane

0x990a,	// (0x00095bd2) bg_button_pane_cp0028

0xeaa3,	// (0x0009ad6b) query_button_pane_t1

0x4332,	// (0x000905fa) main_tport_pane_ParamLimits

0x8893,	// (0x00094b5b) bg_popup_window_pane_cp01_ParamLimits

0x8893,	// (0x00094b5b) bg_popup_window_pane_cp01

0x88ae,	// (0x00094b76) heading_pane_cp08_ParamLimits

0x88ae,	// (0x00094b76) heading_pane_cp08

0x88c1,	// (0x00094b89) heading_pane_cp07_ParamLimits

0x88c1,	// (0x00094b89) heading_pane_cp07

0x896c,	// (0x00094c34) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0009c062) cell_tport_appsw_pane_g

0x38e7,	// (0x0008fbaf) input_candi_list_open_g1

0xae89,	// (0x00097151) list_cale_time_pane_g6_ParamLimits

0xae89,	// (0x00097151) list_cale_time_pane_g6

0x513c,	// (0x00091404) aid_size_touch_calib_1_ParamLimits

0x513c,	// (0x00091404) aid_size_touch_calib_1

0x514e,	// (0x00091416) aid_size_touch_calib_2_ParamLimits

0x514e,	// (0x00091416) aid_size_touch_calib_2

0x5166,	// (0x0009142e) aid_size_touch_calib_3_ParamLimits

0x5166,	// (0x0009142e) aid_size_touch_calib_3

0x5184,	// (0x0009144c) aid_size_touch_calib_4_ParamLimits

0x5184,	// (0x0009144c) aid_size_touch_calib_4

0x519c,	// (0x00091464) main_touch_calib_button_group_pane_ParamLimits

0x519c,	// (0x00091464) main_touch_calib_button_group_pane

0x51b4,	// (0x0009147c) main_touch_calib_pane_g1_ParamLimits

0x51c6,	// (0x0009148e) main_touch_calib_pane_g2_ParamLimits

0x51d8,	// (0x000914a0) main_touch_calib_pane_g3_ParamLimits

0x51ea,	// (0x000914b2) main_touch_calib_pane_g4_ParamLimits

0xf763,	// (0x0009ba2b) main_touch_calib_pane_g_ParamLimits

0x51fc,	// (0x000914c4) main_touch_calib_pane_t1_ParamLimits

0x5216,	// (0x000914de) main_touch_calib_pane_t2_ParamLimits

0x5230,	// (0x000914f8) main_touch_calib_pane_t3_ParamLimits

0x5244,	// (0x0009150c) main_touch_calib_pane_t4_ParamLimits

0x525a,	// (0x00091522) main_touch_calib_pane_t5_ParamLimits

0xf76c,	// (0x0009ba34) main_touch_calib_pane_t_ParamLimits

0xcf50,	// (0x00099218) list_single_fp_cale_pane_g3_ParamLimits

0xcf50,	// (0x00099218) list_single_fp_cale_pane_g3

0x995b,	// (0x00095c23) bg_button_pane_cp012_ParamLimits

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp03_ParamLimits

0x7321,	// (0x000935e9) cell_vitu2_function_top_pane_g1_ParamLimits

0x995b,	// (0x00095c23) bg_vkb2_func_pane_cp04_ParamLimits

0x7fe6,	// (0x000942ae) main_ncimui_button_group_pane_ParamLimits

0x7fe6,	// (0x000942ae) main_ncimui_button_group_pane

0x8046,	// (0x0009430e) main_ncimui_pane_t3_ParamLimits

0x8046,	// (0x0009430e) main_ncimui_pane_t3

0xe85c,	// (0x0009ab24) phacti_button_group_pane

0xea2c,	// (0x0009acf4) aid_size_list_single_double_ParamLimits

0x8e1e,	// (0x000950e6) popup_ezdial_listscroll_window_ParamLimits

0x8e3a,	// (0x00095102) popup_number_entry_window_cp01_ParamLimits

0x8edf,	// (0x000951a7) phacti_button_pane_ParamLimits

0x8edf,	// (0x000951a7) phacti_button_pane

0x990a,	// (0x00095bd2) bg_button_pane_cp14

0xeab1,	// (0x0009ad79) phacti_button_pane_t1

0x8ef0,	// (0x000951b8) main_touch_calib_button_pane_ParamLimits

0x8ef0,	// (0x000951b8) main_touch_calib_button_pane

0xa0be,	// (0x00096386) bg_button_pane_cp18_ParamLimits

0xa0be,	// (0x00096386) bg_button_pane_cp18

0xeabf,	// (0x0009ad87) main_touch_calib_button_pane_t1_ParamLimits

0xeabf,	// (0x0009ad87) main_touch_calib_button_pane_t1

0xead5,	// (0x0009ad9d) main_touch_calib_button_pane_t2_ParamLimits

0xead5,	// (0x0009ad9d) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0009c11b) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0009c11b) main_touch_calib_button_pane_t

0x990a,	// (0x00095bd2) cell_ncimui_button_pane

0x990a,	// (0x00095bd2) bg_button_pane_cp032

0xeaf3,	// (0x0009adbb) cell_ncimui_button_pane_t1

0xa6ab,	// (0x00096973) image3_infobar_pane_ParamLimits

0xa6ab,	// (0x00096973) image3_infobar_pane

0x8414,	// (0x000946dc) fs_bigclock_status_pane_ParamLimits

0x8414,	// (0x000946dc) fs_bigclock_status_pane

0x8421,	// (0x000946e9) main_fs_bigclock_clock_pane_ParamLimits

0x8421,	// (0x000946e9) main_fs_bigclock_clock_pane

0x8435,	// (0x000946fd) main_fs_bigclock_indi_pane_ParamLimits

0x8435,	// (0x000946fd) main_fs_bigclock_indi_pane

0x8450,	// (0x00094718) main_fs_bigclock_swipe_pane_ParamLimits

0x8450,	// (0x00094718) main_fs_bigclock_swipe_pane

0x990a,	// (0x00095bd2) main_fs_clock_dumped_data

0xe38e,	// (0x0009a656) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe38e,	// (0x0009a656) list_single_fs_bigclock_indicator_pane_g1

0xe3b8,	// (0x0009a680) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3b8,	// (0x0009a680) list_single_fs_bigclock_indicator_pane_g2

0xe3d2,	// (0x0009a69a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3d2,	// (0x0009a69a) list_single_fs_bigclock_indicator_pane_g3

0xe3ec,	// (0x0009a6b4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3ec,	// (0x0009a6b4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc81,	// (0x0009bf49) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc81,	// (0x0009bf49) list_single_fs_bigclock_indicator_pane_g

0xe417,	// (0x0009a6df) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe417,	// (0x0009a6df) list_single_fs_bigclock_indicator_pane_t1

0xe43f,	// (0x0009a707) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe43f,	// (0x0009a707) list_single_fs_bigclock_indicator_pane_t2

0xe467,	// (0x0009a72f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe467,	// (0x0009a72f) list_single_fs_bigclock_indicator_pane_t3

0xe48f,	// (0x0009a757) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe48f,	// (0x0009a757) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8c,	// (0x0009bf54) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8c,	// (0x0009bf54) list_single_fs_bigclock_indicator_pane_t

0xeb01,	// (0x0009adc9) image3_infobar_fav_pane_ParamLimits

0xeb01,	// (0x0009adc9) image3_infobar_fav_pane

0xeb11,	// (0x0009add9) image3_infobar_loc_pane_ParamLimits

0xeb11,	// (0x0009add9) image3_infobar_loc_pane

0xeb27,	// (0x0009adef) image3_infobar_time_pane_ParamLimits

0xeb27,	// (0x0009adef) image3_infobar_time_pane

0xcc18,	// (0x00098ee0) image3_infobar_time_pane_g1

0xeb37,	// (0x0009adff) image3_infobar_time_pane_t1

0xcc18,	// (0x00098ee0) image3_infobar_loc_pane_g1

0xeb45,	// (0x0009ae0d) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0009c120) image3_infobar_loc_pane_g

0xeb4d,	// (0x0009ae15) image3_infobar_loc_pane_t1

0xcc18,	// (0x00098ee0) image3_infobar_fav_pane_g1

0xeb5b,	// (0x0009ae23) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0009c125) image3_infobar_fav_pane_g

0xeb63,	// (0x0009ae2b) fs_bigclock_status_battery_pane

0xeb6c,	// (0x0009ae34) fs_bigclock_status_signal_pane

0xeb75,	// (0x0009ae3d) fs_bigclock_status_title_pane

0xeb7e,	// (0x0009ae46) fs_bigclock_status_signal_pane_g1

0xeb87,	// (0x0009ae4f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0009c12a) fs_bigclock_status_signal_pane_g

0xeb8f,	// (0x0009ae57) fs_bigclock_status_battery_pane_g1

0xeb98,	// (0x0009ae60) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0009c12f) fs_bigclock_status_battery_pane_g

0xeba0,	// (0x0009ae68) fs_bigclock_status_title_pane_t1

0xcc18,	// (0x00098ee0) main_fs_bigclock_clock_pane_g1

0xebae,	// (0x0009ae76) main_fs_bigclock_clock_pane_g2

0xebae,	// (0x0009ae76) main_fs_bigclock_clock_pane_g3

0xebae,	// (0x0009ae76) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0009c134) main_fs_bigclock_clock_pane_g

0xebb6,	// (0x0009ae7e) main_fs_bigclock_clock_pane_t1

0xebc4,	// (0x0009ae8c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0009c13d) main_fs_bigclock_clock_pane_t

0x8f05,	// (0x000951cd) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8f05,	// (0x000951cd) list_single_fs_bigclock_indicator_pane

0x8f16,	// (0x000951de) list_single_fs_bigclock_pane_ParamLimits

0x8f16,	// (0x000951de) list_single_fs_bigclock_pane

0xebdc,	// (0x0009aea4) main_fs_bigclock_indicator_pane_t1

0xebeb,	// (0x0009aeb3) list_single_fs_bigclock_pane_g1

0xebf3,	// (0x0009aebb) list_single_fs_bigclock_pane_t1

0xcc18,	// (0x00098ee0) main_fs_bigclock_swipe_pane_g1

0xec36,	// (0x0009aefe) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0009c14e) main_fs_bigclock_swipe_pane_g

0xec3e,	// (0x0009af06) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec3e,	// (0x0009af06) main_fs_bigclock_swipe_pane_t1

0x3079,	// (0x0008f341) call_type_pane_ParamLimits

0x990a,	// (0x00095bd2) main_btmg_pane

0xa922,	// (0x00096bea) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa922,	// (0x00096bea) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0009c0c1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0009c0c1) list_single_cale_mrui_row_pane_g

0xa967,	// (0x00096c2f) list_recal_vselct_arw_lo_pane

0xea7c,	// (0x0009ad44) list_recal_vselct_arw_up_pane

0xa96f,	// (0x00096c37) list_recal_vselct_pane

0x8f79,	// (0x00095241) btmg_button_pane

0x8f83,	// (0x0009524b) main_btmg_pane_g1

0x990a,	// (0x00095bd2) bg_button_pane_cp044

0xec5b,	// (0x0009af23) btmg_button_pane_t1

0xc7b3,	// (0x00098a7b) aid_listscroll_gen

0x995b,	// (0x00095c23) main_cntbar_detail_pane

0xe7b0,	// (0x0009aa78) list_cmail_folder_pane

0xe7c0,	// (0x0009aa88) sp_fs_scroll_pane_cp03_ParamLimits

0x0a5c,	// (0x0008cd24) list_single_fs_dyc_pane_cp01_ParamLimits

0x0a5c,	// (0x0008cd24) list_single_fs_dyc_pane_cp01

0xec69,	// (0x0009af31) aid_size_cmail_indent

0xa9e7,	// (0x00096caf) list_single_dyc_row_pane_cp01

0x8fbd,	// (0x00095285) cntbar_detail_list_pane_ParamLimits

0x8fbd,	// (0x00095285) cntbar_detail_list_pane

0x900f,	// (0x000952d7) main_cntbar_detail_cont_pane_ParamLimits

0x900f,	// (0x000952d7) main_cntbar_detail_cont_pane

0x306d,	// (0x0008f335) scroll_pane_cp032_ParamLimits

0x306d,	// (0x0008f335) scroll_pane_cp032

0x9023,	// (0x000952eb) cntbar_detail_list_event_pane_ParamLimits

0x9023,	// (0x000952eb) cntbar_detail_list_event_pane

0x8fcf,	// (0x00095297) cntbar_detail_list_shct_pane

0xad16,	// (0x00096fde) aid_list_gen

0xec72,	// (0x0009af3a) aid_scroll

0xec7b,	// (0x0009af43) aid_size_touch_scroll_bar

0x02e0,	// (0x0008c5a8) aid_list_double

0xec84,	// (0x0009af4c) aid_list_single

0x78c4,	// (0x00093b8c) aid_list_single_lg

0xa9f0,	// (0x00096cb8) aid_list_z_g_a_sm

0xa9f8,	// (0x00096cc0) aid_list_z_g_d

0x0a73,	// (0x0008cd3b) aid_txt_z_prm

0x0a81,	// (0x0008cd49) aid_txt_z_prm_cp01

0x0a8f,	// (0x0008cd57) aid_txt_z_sec

0x9033,	// (0x000952fb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9033,	// (0x000952fb) main_cntbar_detail_cont_pane_g1

0x9047,	// (0x0009530f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9047,	// (0x0009530f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0009c153) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0009c153) main_cntbar_detail_cont_pane_g

0xec8d,	// (0x0009af55) main_cntbar_detail_cont_pane_t1

0xec9b,	// (0x0009af63) main_cntbar_detail_cont_pane_t2

0xeca9,	// (0x0009af71) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0009c158) main_cntbar_detail_cont_pane_t

0x9057,	// (0x0009531f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9057,	// (0x0009531f) cell_cntbar_detail_list_shct_pane

0xecb7,	// (0x0009af7f) cntbar_detail_list_shct_pane_g1

0xecc0,	// (0x0009af88) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0009c15f) cntbar_detail_list_shct_pane_g

0x9069,	// (0x00095331) cntbar_detail_list_event_pane_g1_ParamLimits

0x9069,	// (0x00095331) cntbar_detail_list_event_pane_g1

0x9075,	// (0x0009533d) cntbar_detail_list_event_pane_g2_ParamLimits

0x9075,	// (0x0009533d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0009c164) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0009c164) cntbar_detail_list_event_pane_g

0x90e3,	// (0x000953ab) cntbar_detail_list_event_pane_t1_ParamLimits

0x90e3,	// (0x000953ab) cntbar_detail_list_event_pane_t1

0x90f8,	// (0x000953c0) cntbar_detail_list_event_pane_t2_ParamLimits

0x90f8,	// (0x000953c0) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0009c171) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0009c171) cntbar_detail_list_event_pane_t

0xcc18,	// (0x00098ee0) cell_cntbar_detail_list_shct_pane_g1

0x341f,	// (0x0008f6e7) navi_pane_mv_g3

0x995b,	// (0x00095c23) main_cntbar_detail_pane_ParamLimits

0x990a,	// (0x00095bd2) main_notif_wgt_pane

0xa4c3,	// (0x0009678b) aid_tch_main_mp4_pane_g4

0xa6a1,	// (0x00096969) popup_slider_window_cp02

0xa95d,	// (0x00096c25) list_recal_day_event_pane

0x8f8d,	// (0x00095255) cntbar_detail_btn_pane_ParamLimits

0x8f8d,	// (0x00095255) cntbar_detail_btn_pane

0x8fa5,	// (0x0009526d) cntbar_detail_btn_pane_cp01_ParamLimits

0x8fa5,	// (0x0009526d) cntbar_detail_btn_pane_cp01

0x8fcf,	// (0x00095297) cntbar_detail_list_shct_pane_ParamLimits

0x8fdf,	// (0x000952a7) cntbar_detail_pane_g1_ParamLimits

0x8fdf,	// (0x000952a7) cntbar_detail_pane_g1

0x8ff3,	// (0x000952bb) cntbar_detail_pane_t1_ParamLimits

0x8ff3,	// (0x000952bb) cntbar_detail_pane_t1

0x9081,	// (0x00095349) cntbar_detail_list_event_pane_g3_ParamLimits

0x9081,	// (0x00095349) cntbar_detail_list_event_pane_g3

0x9099,	// (0x00095361) cntbar_detail_list_event_pane_g4_ParamLimits

0x9099,	// (0x00095361) cntbar_detail_list_event_pane_g4

0x90b1,	// (0x00095379) cntbar_detail_list_event_pane_g5_ParamLimits

0x90b1,	// (0x00095379) cntbar_detail_list_event_pane_g5

0x90c9,	// (0x00095391) cntbar_detail_list_event_pane_g6_ParamLimits

0x90c9,	// (0x00095391) cntbar_detail_list_event_pane_g6

0x910d,	// (0x000953d5) cntbar_detail_list_event_pane_t3_ParamLimits

0x910d,	// (0x000953d5) cntbar_detail_list_event_pane_t3

0x911f,	// (0x000953e7) popup_notif_wgt_window_ParamLimits

0x911f,	// (0x000953e7) popup_notif_wgt_window

0x9138,	// (0x00095400) popup_submenu_window_cp01_ParamLimits

0x9138,	// (0x00095400) popup_submenu_window_cp01

0xb3ae,	// (0x00097676) bg_popup_window_pane_cp10

0xecc9,	// (0x0009af91) listscroll_notif_wgt_pane

0xecdb,	// (0x0009afa3) list_notif_wgt_window

0xece4,	// (0x0009afac) scroll_pane_cp033

0x914c,	// (0x00095414) list_notif_wgt_row_pane_ParamLimits

0x914c,	// (0x00095414) list_notif_wgt_row_pane

0xeced,	// (0x0009afb5) aid_size_list_notif_wgt_del

0xecfa,	// (0x0009afc2) list_notif_wgt_row_pane_g1

0xed06,	// (0x0009afce) list_notif_wgt_row_pane_g2

0xed12,	// (0x0009afda) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0009c178) list_notif_wgt_row_pane_g

0xed1f,	// (0x0009afe7) list_notif_wgt_row_pane_t1

0xed34,	// (0x0009affc) list_notif_wgt_row_pane_t2

0xed46,	// (0x0009b00e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0009c17f) list_notif_wgt_row_pane_t

0xd84e,	// (0x00099b16) list_recal_day_event_pane_g1

0xed58,	// (0x0009b020) list_recal_day_event_pane_t1

0x990a,	// (0x00095bd2) bg_button_pane_cp045

0xed67,	// (0x0009b02f) cntbar_detail_btn_pane_t1

0xc7c7,	// (0x00098a8f) main_callh_pane_ParamLimits

0xc7c7,	// (0x00098a8f) main_callh_pane

0x990a,	// (0x00095bd2) main_coverflow0_pane

0x990a,	// (0x00095bd2) main_wgtman_pane

0x845e,	// (0x00094726) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x845e,	// (0x00094726) main_fs_bigclock_unlock_btn_pane

0x8964,	// (0x00094c2c) bg_button_pane_cp16

0x8974,	// (0x00094c3c) cell_tport_appsw_pane_g3

0x915c,	// (0x00095424) cf0_flow_pane_ParamLimits

0x915c,	// (0x00095424) cf0_flow_pane

0xed75,	// (0x0009b03d) listscroll_cf0_pane

0xed80,	// (0x0009b048) main_cf0_pane_g1

0x9171,	// (0x00095439) main_cf0_pane_t1_ParamLimits

0x9171,	// (0x00095439) main_cf0_pane_t1

0x9188,	// (0x00095450) main_cf0_pane_t2_ParamLimits

0x9188,	// (0x00095450) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0009c18b) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0009c18b) main_cf0_pane_t

0xed92,	// (0x0009b05a) scroll_pane_cp11

0x919f,	// (0x00095467) cf0_flow_pane_g1

0x91ab,	// (0x00095473) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0009c190) cf0_flow_pane_g

0x91b7,	// (0x0009547f) cf0_flow_pane_t1

0x990a,	// (0x00095bd2) main_call6_pane

0x990a,	// (0x00095bd2) main_calllock_pane

0x91c9,	// (0x00095491) call6_btn_grp_pane_ParamLimits

0x91c9,	// (0x00095491) call6_btn_grp_pane

0x91e3,	// (0x000954ab) call6_pane_g1_ParamLimits

0x91e3,	// (0x000954ab) call6_pane_g1

0x91f9,	// (0x000954c1) popup_call6_1st_window_ParamLimits

0x91f9,	// (0x000954c1) popup_call6_1st_window

0x920a,	// (0x000954d2) popup_call6_2nd_window_ParamLimits

0x920a,	// (0x000954d2) popup_call6_2nd_window

0x921b,	// (0x000954e3) cell_call6_btn_pane_ParamLimits

0x921b,	// (0x000954e3) cell_call6_btn_pane

0xb3ae,	// (0x00097676) bg_popup_call2_in_pane_cp03

0xed9d,	// (0x0009b065) popup_call6_1st_window_g1

0xeda5,	// (0x0009b06d) popup_call6_1st_window_g2

0xedad,	// (0x0009b075) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0009c195) popup_call6_1st_window_g

0xedb5,	// (0x0009b07d) popup_call6_1st_window_t1

0xedc4,	// (0x0009b08c) popup_call6_1st_window_t2

0xedd4,	// (0x0009b09c) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0009c19c) popup_call6_1st_window_t

0xb3ae,	// (0x00097676) bg_popup_call2_in_pane_cp04

0xed9d,	// (0x0009b065) popup_call6_2nd_window_g1

0xeda5,	// (0x0009b06d) popup_call6_2nd_window_g2

0xedad,	// (0x0009b075) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0009c195) popup_call6_2nd_window_g

0xedb5,	// (0x0009b07d) popup_call6_2nd_window_t1

0x990a,	// (0x00095bd2) bg_button_pane_cp15

0xede4,	// (0x0009b0ac) cell_call6_btn_pane_g1

0xeded,	// (0x0009b0b5) cell_call6_btn_pane_t1

0x922f,	// (0x000954f7) listscroll_wgtman_pane_ParamLimits

0x922f,	// (0x000954f7) listscroll_wgtman_pane

0x9252,	// (0x0009551a) wgtman_btn_pane_ParamLimits

0x9252,	// (0x0009551a) wgtman_btn_pane

0xb274,	// (0x0009753c) aid_scroll_copy1

0xedfc,	// (0x0009b0c4) list_wgtman_pane

0x9295,	// (0x0009555d) wgtman_btn_pane_g1_ParamLimits

0x9295,	// (0x0009555d) wgtman_btn_pane_g1

0x92c1,	// (0x00095589) wgtman_btn_pane_t1_ParamLimits

0x92c1,	// (0x00095589) wgtman_btn_pane_t1

0xee06,	// (0x0009b0ce) wgtman_btn_pane_t2_ParamLimits

0xee06,	// (0x0009b0ce) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0009c1a3) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0009c1a3) wgtman_btn_pane_t

0xa822,	// (0x00096aea) listrow_wgtman_pane_ParamLimits

0xa822,	// (0x00096aea) listrow_wgtman_pane

0x92fe,	// (0x000955c6) listrow_wgtman_pane_g1

0x930b,	// (0x000955d3) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0009c1a8) listrow_wgtman_pane_g

0x0a9d,	// (0x0008cd65) listrow_wgtman_pane_t1

0x0ab5,	// (0x0008cd7d) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0009c1ad) listrow_wgtman_pane_t

0x0adb,	// (0x0008cda3) wait_bar_pane_cp09

0xee1d,	// (0x0009b0e5) main_calllock_btn_pane

0xee27,	// (0x0009b0ef) main_calllock_pane_g1

0x990a,	// (0x00095bd2) bg_button_pane_cp17

0xee33,	// (0x0009b0fb) main_calllock_btn_pane_g1

0xee3c,	// (0x0009b104) main_calllock_btn_pane_t1

0x990a,	// (0x00095bd2) main_dialer3_pane

0x990a,	// (0x00095bd2) main_fmrd2_pane

0xcc18,	// (0x00098ee0) main_fs_bigclock_unlock_btn_pane_g1

0xee8c,	// (0x0009b154) main_fs_bigclock_unlock_btn_pane_t1

0x9329,	// (0x000955f1) area_fmrd2_info_pane_ParamLimits

0x9329,	// (0x000955f1) area_fmrd2_info_pane

0x9338,	// (0x00095600) area_fmrd2_visual_pane_ParamLimits

0x9338,	// (0x00095600) area_fmrd2_visual_pane

0x9346,	// (0x0009560e) fmrd2_indi_pane_ParamLimits

0x9346,	// (0x0009560e) fmrd2_indi_pane

0x9353,	// (0x0009561b) area_fmrd2_visual_pane_g1

0x935b,	// (0x00095623) area_fmrd2_visual_pane_t1

0x936b,	// (0x00095633) area_fmrd2_visual_pane_t2

0x937b,	// (0x00095643) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0009c1b7) area_fmrd2_visual_pane_t

0x938b,	// (0x00095653) area_fmrd2_info_pane_g1

0x9393,	// (0x0009565b) area_fmrd2_info_pane_t1

0x93a3,	// (0x0009566b) area_fmrd2_info_pane_t2

0x93b3,	// (0x0009567b) area_fmrd2_info_pane_t3

0x93c3,	// (0x0009568b) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0009c1be) area_fmrd2_info_pane_t

0x93d3,	// (0x0009569b) fmrd2_indi_pane_t1

0x93e3,	// (0x000956ab) fmrd2_indi_pane_t2

0x93f3,	// (0x000956bb) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0009c1c7) fmrd2_indi_pane_t

0xe3fb,	// (0x0009a6c3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3fb,	// (0x0009a6c3) list_single_fs_bigclock_indicator_pane_g5

0xe4a4,	// (0x0009a76c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a4,	// (0x0009a76c) list_single_fs_bigclock_indicator_pane_t5

0x8b60,	// (0x00094e28) aid_cell_bcale_month_pane_ParamLimits

0x8b60,	// (0x00094e28) aid_cell_bcale_month_pane

0x8b87,	// (0x00094e4f) bcale_month_pane_ParamLimits

0x8b87,	// (0x00094e4f) bcale_month_pane

0x8ba9,	// (0x00094e71) bcale_preview_pane_ParamLimits

0x8ba9,	// (0x00094e71) bcale_preview_pane

0xebf3,	// (0x0009aebb) list_single_fs_bigclock_pane_t1_ParamLimits

0xec12,	// (0x0009aeda) list_single_fs_bigclock_pane_t2_ParamLimits

0xec12,	// (0x0009aeda) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0009c149) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0009c149) list_single_fs_bigclock_pane_t

0xee84,	// (0x0009b14c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0009c1b2) main_fs_bigclock_unlock_btn_pane_g

0x9403,	// (0x000956cb) aid_dia3_key_size_ParamLimits

0x9403,	// (0x000956cb) aid_dia3_key_size

0x9412,	// (0x000956da) aid_dia3_listrow_size_ParamLimits

0x9412,	// (0x000956da) aid_dia3_listrow_size

0x9427,	// (0x000956ef) dia3_keypad_fun_pane_ParamLimits

0x9427,	// (0x000956ef) dia3_keypad_fun_pane

0x9443,	// (0x0009570b) dia3_keypad_num_pane_ParamLimits

0x9443,	// (0x0009570b) dia3_keypad_num_pane

0x945c,	// (0x00095724) dia3_listscroll_pane_ParamLimits

0x945c,	// (0x00095724) dia3_listscroll_pane

0x946f,	// (0x00095737) dia3_numentry_pane_ParamLimits

0x946f,	// (0x00095737) dia3_numentry_pane

0xee9a,	// (0x0009b162) dia3_list_pane

0xeea5,	// (0x0009b16d) scroll_pane_cp12

0x990a,	// (0x00095bd2) bg_dia3_numentry_pane

0x9483,	// (0x0009574b) dia3_numentry_pane_t1

0x9492,	// (0x0009575a) cell_dia3_key_num_pane

0x949a,	// (0x00095762) cell_dia3_key0_fun_pane_ParamLimits

0x949a,	// (0x00095762) cell_dia3_key0_fun_pane

0x94ae,	// (0x00095776) cell_dia3_key1_fun_pane_ParamLimits

0x94ae,	// (0x00095776) cell_dia3_key1_fun_pane

0x94c6,	// (0x0009578e) dia3_listrow_pane

0xe0f9,	// (0x0009a3c1) bg_dia3_numentry_pane_g1

0x990a,	// (0x00095bd2) bg_button_pane_cp21

0xeeb0,	// (0x0009b178) cell_dia3_key_num_pane_t1

0xeebe,	// (0x0009b186) cell_dia3_key_num_pane_t2

0xeecd,	// (0x0009b195) cell_dia3_key_num_pane_t3

0xeedc,	// (0x0009b1a4) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0009c1ce) cell_dia3_key_num_pane_t

0x990a,	// (0x00095bd2) bg_button_pane_cp19

0x94d8,	// (0x000957a0) cell_dia3_key0_fun_pane_g1

0x990a,	// (0x00095bd2) bg_button_pane_cp20

0x94e0,	// (0x000957a8) cell_dia3_key1_fun_pane_g1

0x94e8,	// (0x000957b0) area_left_week_number_pane

0x94f6,	// (0x000957be) area_top_day_name_pane

0x9509,	// (0x000957d1) frame_month_view_pane

0xeeeb,	// (0x0009b1b3) grid_month_view_pane

0x951e,	// (0x000957e6) cell_top_day_name_pane_ParamLimits

0x951e,	// (0x000957e6) cell_top_day_name_pane

0x954d,	// (0x00095815) cell_area_left_week_number_pane_ParamLimits

0x954d,	// (0x00095815) cell_area_left_week_number_pane

0x9561,	// (0x00095829) cell_month_view_pane_ParamLimits

0x9561,	// (0x00095829) cell_month_view_pane

0xeef9,	// (0x0009b1c1) frm_month_g1

0x9590,	// (0x00095858) frm_month_g2

0x95a3,	// (0x0009586b) frm_month_g3

0x95b6,	// (0x0009587e) frm_month_g4

0x95c9,	// (0x00095891) frm_month_g5

0x95dc,	// (0x000958a4) frm_month_g6

0x95ef,	// (0x000958b7) frm_month_g7

0xef06,	// (0x0009b1ce) frm_month_g8

0x9604,	// (0x000958cc) frm_month_g9

0x9614,	// (0x000958dc) frm_month_g10

0x9624,	// (0x000958ec) frm_month_g11

0x9634,	// (0x000958fc) frm_month_g12

0x9646,	// (0x0009590e) frm_month_g13

0x965a,	// (0x00095922) frm_month_g14

0x966e,	// (0x00095936) frm_month_g15

0x9682,	// (0x0009594a) frm_month_g16

0x000f,

0xff0f,	// (0x0009c1d7) frm_month_g

0xef13,	// (0x0009b1db) cell_top_day_name_pane_t1

0x9696,	// (0x0009595e) cell_area_left_week_number_pane_g1

0x96a2,	// (0x0009596a) cell_area_left_week_number_pane_t1

0xce50,	// (0x00099118) cell_month_view_pane_g1

0x96b5,	// (0x0009597d) cell_month_view_pane_t1

0x990a,	// (0x00095bd2) main_fps_pane

0xe694,	// (0x0009a95c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe694,	// (0x0009a95c) cmail_ddmenu_btn02_pane_cp1

0xe6b0,	// (0x0009a978) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6b0,	// (0x0009a978) cmail_ddmenu_btn02_pane_cp2

0x8e76,	// (0x0009513e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e76,	// (0x0009513e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0009c0fc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0009c0fc) cmail_ddmenu_btn02_pane_g

0x8e97,	// (0x0009515f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e97,	// (0x0009515f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0009c101) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0009c101) cmail_ddmenu_btn02_pane_t

0x96c8,	// (0x00095990) fps_text_pane_ParamLimits

0x96c8,	// (0x00095990) fps_text_pane

0x96df,	// (0x000959a7) main_fps_pane_g1_ParamLimits

0x96df,	// (0x000959a7) main_fps_pane_g1

0x96f7,	// (0x000959bf) wait_bar_pane_cp010_ParamLimits

0x96f7,	// (0x000959bf) wait_bar_pane_cp010

0x970a,	// (0x000959d2) fps_text_pane_t1_ParamLimits

0x970a,	// (0x000959d2) fps_text_pane_t1

0xd5b7,	// (0x0009987f) cam4_image_uncrop_pane_g1

0xd5c0,	// (0x00099888) cam4_image_uncrop_pane_g2

0x6825,	// (0x00092aed) cam4_image_uncrop_pane_g3

0x682e,	// (0x00092af6) cam4_image_uncrop_pane_g4

0x0003,

0xf8fb,	// (0x0009bbc3) cam4_image_uncrop_pane_g

0x94c6,	// (0x0009578e) dia3_listrow_pane_ParamLimits

0x990a,	// (0x00095bd2) main_phob2_pane

0x8933,	// (0x00094bfb) cell_tport_appsw_pane_cp02_ParamLimits

0x8933,	// (0x00094bfb) cell_tport_appsw_pane_cp02

0x8947,	// (0x00094c0f) cell_tport_appsw_pane_cp03_ParamLimits

0x8947,	// (0x00094c0f) cell_tport_appsw_pane_cp03

0x990a,	// (0x00095bd2) phob2_contact_card_pane

0x990a,	// (0x00095bd2) phob2_listscroll_pane

0xef26,	// (0x0009b1ee) phob2_list_pane

0xef2e,	// (0x0009b1f6) scroll_pane_cp034

0x9722,	// (0x000959ea) phob2_cc_data_pane_ParamLimits

0x9722,	// (0x000959ea) phob2_cc_data_pane

0x9743,	// (0x00095a0b) phob2_cc_listscroll_pane_ParamLimits

0x9743,	// (0x00095a0b) phob2_cc_listscroll_pane

0x9765,	// (0x00095a2d) list_double_large_graphic_phob2_pane_ParamLimits

0x9765,	// (0x00095a2d) list_double_large_graphic_phob2_pane

0x9779,	// (0x00095a41) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9779,	// (0x00095a41) list_double_large_graphic_phob2_pane_g1

0x0aed,	// (0x0008cdb5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0aed,	// (0x0008cdb5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0009c1f8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0009c1f8) list_double_large_graphic_phob2_pane_g

0x0af9,	// (0x0008cdc1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0af9,	// (0x0008cdc1) list_double_large_graphic_phob2_pane_t1

0x0b0e,	// (0x0008cdd6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0b0e,	// (0x0008cdd6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0009c1fd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0009c1fd) list_double_large_graphic_phob2_pane_t

0x990a,	// (0x00095bd2) list_highlight_pane_cp024

0xef36,	// (0x0009b1fe) phob2_cc_button_pane

0x978f,	// (0x00095a57) phob2_cc_data_pane_g1_ParamLimits

0x978f,	// (0x00095a57) phob2_cc_data_pane_g1

0x97a5,	// (0x00095a6d) phob2_cc_data_pane_g2_ParamLimits

0x97a5,	// (0x00095a6d) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0009c202) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0009c202) phob2_cc_data_pane_g

0x97b7,	// (0x00095a7f) phob2_cc_data_pane_t1_ParamLimits

0x97b7,	// (0x00095a7f) phob2_cc_data_pane_t1

0x97cf,	// (0x00095a97) phob2_cc_data_pane_t2_ParamLimits

0x97cf,	// (0x00095a97) phob2_cc_data_pane_t2

0x97e9,	// (0x00095ab1) phob2_cc_data_pane_t3_ParamLimits

0x97e9,	// (0x00095ab1) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0009c207) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0009c207) phob2_cc_data_pane_t

0xef3e,	// (0x0009b206) phob2_cc_list_pane_ParamLimits

0xef3e,	// (0x0009b206) phob2_cc_list_pane

0xd8f9,	// (0x00099bc1) scroll_pane_cp035_ParamLimits

0xd8f9,	// (0x00099bc1) scroll_pane_cp035

0x995b,	// (0x00095c23) bg_button_pane_cp033

0xef4a,	// (0x0009b212) phob2_cc_button_pane_g1

0xef56,	// (0x0009b21e) phob2_cc_button_pane_t1

0xef6b,	// (0x0009b233) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0009c20e) phob2_cc_button_pane_t

0x9803,	// (0x00095acb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9803,	// (0x00095acb) list_double_large_graphic_phob2_cc_pane

0x9817,	// (0x00095adf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9817,	// (0x00095adf) list_double_large_graphic_phob2_cc_pane_g1

0x0b20,	// (0x0008cde8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0b20,	// (0x0008cde8) list_double_large_graphic_phob2_cc_pane_g2

0x0b2c,	// (0x0008cdf4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0b2c,	// (0x0008cdf4) list_double_large_graphic_phob2_cc_pane_g3

0x0b38,	// (0x0008ce00) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0b38,	// (0x0008ce00) list_double_large_graphic_phob2_cc_pane_g4

0x0b44,	// (0x0008ce0c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0b44,	// (0x0008ce0c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0009c213) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0009c213) list_double_large_graphic_phob2_cc_pane_g

0x0b50,	// (0x0008ce18) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0b50,	// (0x0008ce18) list_double_large_graphic_phob2_cc_pane_t1

0x0b79,	// (0x0008ce41) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0b79,	// (0x0008ce41) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0009c21e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0009c21e) list_double_large_graphic_phob2_cc_pane_t

0xef7d,	// (0x0009b245) list_highlight_pane_cp025_ParamLimits

0xef7d,	// (0x0009b245) list_highlight_pane_cp025

0x995b,	// (0x00095c23) bg_button_pane_cp033_ParamLimits

0xef4a,	// (0x0009b212) phob2_cc_button_pane_g1_ParamLimits

0xef56,	// (0x0009b21e) phob2_cc_button_pane_t1_ParamLimits

0xef6b,	// (0x0009b233) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0009c20e) phob2_cc_button_pane_t_ParamLimits

0x0df0,	// (0x0008d0b8) popup_wgtman_window

0xd73a,	// (0x00099a02) scroll_pane_cp038

0x9277,	// (0x0009553f) wgtman_btn_pane_cp_01_ParamLimits

0x9277,	// (0x0009553f) wgtman_btn_pane_cp_01

0xef8b,	// (0x0009b253) wgtman_content_pane

0xef94,	// (0x0009b25c) wgtman_heading_pane

0x990a,	// (0x00095bd2) bg_heading_pane_cp02

0xef9d,	// (0x0009b265) wgtman_heading_pane_g1

0xefa5,	// (0x0009b26d) wgtman_heading_pane_t1

0xefb3,	// (0x0009b27b) scroll_pane_cp036

0xefbb,	// (0x0009b283) wgtman_list_pane

0xefc3,	// (0x0009b28b) wgtman_list_pane_t1_ParamLimits

0xefc3,	// (0x0009b28b) wgtman_list_pane_t1

0xa6ff,	// (0x000969c7) cam4_grid_pane

0x0161,	// (0x0008c429) bg_button_pane_cp015_ParamLimits

0x748e,	// (0x00093756) bg_button_pane_cp016_ParamLimits

0x74a1,	// (0x00093769) bg_button_pane_cp017_ParamLimits

0x01a9,	// (0x0008c471) popup_vitu2_query_window_g3_ParamLimits

0x01a9,	// (0x0008c471) popup_vitu2_query_window_g3

0x0224,	// (0x0008c4ec) popup_vitu2_query_window_t6_ParamLimits

0x0224,	// (0x0008c4ec) popup_vitu2_query_window_t6

0x024f,	// (0x0008c517) popup_vitu2_query_window_t7_ParamLimits

0x024f,	// (0x0008c517) popup_vitu2_query_window_t7

0xd5b7,	// (0x0009987f) cam4_grid_pane_g1

0xd5c0,	// (0x00099888) cam4_grid_pane_g2

0xefdd,	// (0x0009b2a5) cam4_grid_pane_g3

0xefe6,	// (0x0009b2ae) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0009c223) cam4_grid_pane_g

0x1e94,	// (0x0008e15c) aid_placing_vt_slider_lsc_ParamLimits

0x2181,	// (0x0008e449) vidtel_button_pane_ParamLimits

0x2181,	// (0x0008e449) vidtel_button_pane

0xeff1,	// (0x0009b2b9) bg_button_pane_cp034

0x9823,	// (0x00095aeb) vidtel_button_pane_g1

0xeffb,	// (0x0009b2c3) vidtel_button_pane_t1

0xd83e,	// (0x00099b06) aid_size_vtel_slider_touch

0xd8f9,	// (0x00099bc1) scroll_pane_cp039

0xe137,	// (0x0009a3ff) ncim_query_button_pane_cp01_ParamLimits

0xe156,	// (0x0009a41e) ncimui_query_pane_g1_ParamLimits

0x995b,	// (0x00095c23) input_focus_pane_cp012_ParamLimits

0xe17b,	// (0x0009a443) ncim_query_entry_pane_t1_ParamLimits

0xd8f9,	// (0x00099bc1) scroll_pane_cp039_ParamLimits

0x3391,	// (0x0008f659) navi_pane_bcale_mc_g1

0x3399,	// (0x0008f661) navi_pane_bcale_mc_t1

0xe6f9,	// (0x0009a9c1) main_sp_fs_email_pane_g1

0xe705,	// (0x0009a9cd) main_sp_fs_email_pane_g2

0x0001,

0xfcf2,	// (0x0009bfba) main_sp_fs_email_pane_g

0xe981,	// (0x0009ac49) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe981,	// (0x0009ac49) list_single_cale_mrui_row_pane_g3

0x0a52,	// (0x0008cd1a) list_single_recal_day_pane_g5_event_pane

0xa9bb,	// (0x00096c83) list_single_recal_day_pane_g7

0xf009,	// (0x0009b2d1) list_recal_day_event_pane_cp01

0xf012,	// (0x0009b2da) list_recal_vselct_arw_lo_pane_cp01

0xf01a,	// (0x0009b2e2) list_recal_vselct_arw_up_pane_cp01

0xf022,	// (0x0009b2ea) list_recal_vselct_pane_cp01

0xd84e,	// (0x00099b16) list_recal_day_event_pane_cp01_g1

0xaa00,	// (0x00096cc8) list_recal_day_event_pane_cp01_t1

0xa9c3,	// (0x00096c8b) list_single_recal_day_pane_t1_ParamLimits

0xa9d5,	// (0x00096c9d) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0009c111) list_single_recal_day_pane_t_ParamLimits

0x9fd7,	// (0x0009629f) bg_notes_pane_ParamLimits

0xa082,	// (0x0009634a) list_notes_pane_ParamLimits

0x113d,	// (0x0008d405) scroll_pane_cp06_ParamLimits

0xa0be,	// (0x00096386) main_notes_pane_ParamLimits

0x990a,	// (0x00095bd2) main_welc_pane

0x982b,	// (0x00095af3) main_welc_body_pane_ParamLimits

0x982b,	// (0x00095af3) main_welc_body_pane

0x984a,	// (0x00095b12) main_welc_opti_pane_ParamLimits

0x984a,	// (0x00095b12) main_welc_opti_pane

0x9893,	// (0x00095b5b) main_welc_pane_t1_ParamLimits

0x9893,	// (0x00095b5b) main_welc_pane_t1

0xf02c,	// (0x0009b2f4) main_welc_body_row_pane_ParamLimits

0xf02c,	// (0x0009b2f4) main_welc_body_row_pane

0x98b5,	// (0x00095b7d) main_welc_opti_row_pane_ParamLimits

0x98b5,	// (0x00095b7d) main_welc_opti_row_pane

0xf040,	// (0x0009b308) main_welc_opti_row_pane_g1

0xf048,	// (0x0009b310) main_welc_opti_row_pane_t1

0xf057,	// (0x0009b31f) main_welc_body_row_pane_t1

0xecd3,	// (0x0009af9b) popup_notif_wgt_heading_pane

0xeced,	// (0x0009afb5) aid_size_list_notif_wgt_del_ParamLimits

0xecfa,	// (0x0009afc2) list_notif_wgt_row_pane_g1_ParamLimits

0xed06,	// (0x0009afce) list_notif_wgt_row_pane_g2_ParamLimits

0xed12,	// (0x0009afda) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0009c178) list_notif_wgt_row_pane_g_ParamLimits

0xed1f,	// (0x0009afe7) list_notif_wgt_row_pane_t1_ParamLimits

0xed34,	// (0x0009affc) list_notif_wgt_row_pane_t2_ParamLimits

0xed46,	// (0x0009b00e) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0009c17f) list_notif_wgt_row_pane_t_ParamLimits

0x92fe,	// (0x000955c6) listrow_wgtman_pane_g1_ParamLimits

0x930b,	// (0x000955d3) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0009c1a8) listrow_wgtman_pane_g_ParamLimits

0x0a9d,	// (0x0008cd65) listrow_wgtman_pane_t1_ParamLimits

0x0ab5,	// (0x0008cd7d) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0009c1ad) listrow_wgtman_pane_t_ParamLimits

0x0adb,	// (0x0008cda3) wait_bar_pane_cp09_ParamLimits

0x990a,	// (0x00095bd2) bg_popup_heading_pane_cp02

0xf066,	// (0x0009b32e) popup_notif_wgt_heading_pane_g1

0xf06e,	// (0x0009b336) popup_notif_wgt_heading_pane_t1

0x990a,	// (0x00095bd2) main_vids_pane

0x990a,	// (0x00095bd2) vids_listscroll_pane

0x98c5,	// (0x00095b8d) scroll_pane_cp040

0x990a,	// (0x00095bd2) vids_list_pane

0x98d0,	// (0x00095b98) vids_list_double_pane_ParamLimits

0x98d0,	// (0x00095b98) vids_list_double_pane

0x98e1,	// (0x00095ba9) vids_list_double_pane_g1

0x98ea,	// (0x00095bb2) vids_list_double_pane_t1

0x98fa,	// (0x00095bc2) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0009c231) vids_list_double_pane_t

0x995b,	// (0x00095c23) main_ncimui_pane_ParamLimits

0x7ffa,	// (0x000942c2) main_ncimui_pane_g1_ParamLimits

0x8006,	// (0x000942ce) main_ncimui_pane_g2_ParamLimits

0x8006,	// (0x000942ce) main_ncimui_pane_g2

0x0001,

0xfbf7,	// (0x0009bebf) main_ncimui_pane_g_ParamLimits

0xfbf7,	// (0x0009bebf) main_ncimui_pane_g

0x9869,	// (0x00095b31) main_welc_pane_g1_ParamLimits

0x9869,	// (0x00095b31) main_welc_pane_g1

0x987e,	// (0x00095b46) main_welc_pane_g2_ParamLimits

0x987e,	// (0x00095b46) main_welc_pane_g2

0x0001,

0xff64,	// (0x0009c22c) main_welc_pane_g_ParamLimits

0xff64,	// (0x0009c22c) main_welc_pane_g

0x9fd7,	// (0x0009629f) listscroll_mce_pane_ParamLimits

0x3471,	// (0x0008f739) wait_bar_pane_cp10

0xc7bb,	// (0x00098a83) main_cale_day_pane_ParamLimits

0xc7bb,	// (0x00098a83) main_cale_week_pane_ParamLimits

0x9fd7,	// (0x0009629f) main_messa_pane_ParamLimits

0x5ae3,	// (0x00091dab) main_clock2_btn_pane_ParamLimits

0x5ae3,	// (0x00091dab) main_clock2_btn_pane

0xcfd8,	// (0x000992a0) main_clock2_btn_pane_cp01_ParamLimits

0xcfd8,	// (0x000992a0) main_clock2_btn_pane_cp01

0xe952,	// (0x0009ac1a) list_cale_mrui_pane_ParamLimits

0xed8a,	// (0x0009b052) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0009c186) main_cf0_pane_g

0x94e8,	// (0x000957b0) area_left_week_number_pane_ParamLimits

0x94f6,	// (0x000957be) area_top_day_name_pane_ParamLimits

0x9509,	// (0x000957d1) frame_month_view_pane_ParamLimits

0xeeeb,	// (0x0009b1b3) grid_month_view_pane_ParamLimits

0xeef9,	// (0x0009b1c1) frm_month_g1_ParamLimits

0x9590,	// (0x00095858) frm_month_g2_ParamLimits

0x95a3,	// (0x0009586b) frm_month_g3_ParamLimits

0x95b6,	// (0x0009587e) frm_month_g4_ParamLimits

0x95c9,	// (0x00095891) frm_month_g5_ParamLimits

0x95dc,	// (0x000958a4) frm_month_g6_ParamLimits

0x95ef,	// (0x000958b7) frm_month_g7_ParamLimits

0xef06,	// (0x0009b1ce) frm_month_g8_ParamLimits

0x9604,	// (0x000958cc) frm_month_g9_ParamLimits

0x9614,	// (0x000958dc) frm_month_g10_ParamLimits

0x9624,	// (0x000958ec) frm_month_g11_ParamLimits

0x9634,	// (0x000958fc) frm_month_g12_ParamLimits

0x9646,	// (0x0009590e) frm_month_g13_ParamLimits

0x965a,	// (0x00095922) frm_month_g14_ParamLimits

0x966e,	// (0x00095936) frm_month_g15_ParamLimits

0x9682,	// (0x0009594a) frm_month_g16_ParamLimits

0xff0f,	// (0x0009c1d7) frm_month_g_ParamLimits

0xef13,	// (0x0009b1db) cell_top_day_name_pane_t1_ParamLimits

0x9696,	// (0x0009595e) cell_area_left_week_number_pane_g1_ParamLimits

0x96a2,	// (0x0009596a) cell_area_left_week_number_pane_t1_ParamLimits

0xce50,	// (0x00099118) cell_month_view_pane_g1_ParamLimits

0x96b5,	// (0x0009597d) cell_month_view_pane_t1_ParamLimits

0x9fcf,	// (0x00096297) main_clock2_btn_pane_g1

0xf07c,	// (0x0009b344) main_clock2_btn_pane_t1

0x995b,	// (0x00095c23) listscroll_cmail_pane_ParamLimits

0xe6f9,	// (0x0009a9c1) main_sp_fs_email_pane_g1_ParamLimits

0xe705,	// (0x0009a9cd) main_sp_fs_email_pane_g2_ParamLimits

0xfcf2,	// (0x0009bfba) main_sp_fs_email_pane_g_ParamLimits

0xea5d,	// (0x0009ad25) list_recal_day_pane_ParamLimits

0xea6e,	// (0x0009ad36) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
