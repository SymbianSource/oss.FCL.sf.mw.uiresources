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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004c894 };

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
0x1272,	// (0x0004db06) Screen

0x127e,	// (0x0004db12) application_window

0x12ca,	// (0x0004db5e) area_bottom_pane_ParamLimits

0x12ca,	// (0x0004db5e) area_bottom_pane

0x1303,	// (0x0004db97) area_top_pane_ParamLimits

0x1303,	// (0x0004db97) area_top_pane

0x9781,	// (0x00056015) call_video_uplink_pane_ParamLimits

0x9781,	// (0x00056015) call_video_uplink_pane

0x1391,	// (0x0004dc25) main_pane_ParamLimits

0x1391,	// (0x0004dc25) main_pane

0xc8f2,	// (0x00059186) context_pane

0x4490,	// (0x00050d24) navi_pane

0x44c2,	// (0x00050d56) popup_cale_events_window_ParamLimits

0x44c2,	// (0x00050d56) popup_cale_events_window

0xc905,	// (0x00059199) popup_mup_playback_window

0x44da,	// (0x00050d6e) signal_pane

0xa847,	// (0x000570db) main_browser_pane

0xaa1e,	// (0x000572b2) main_burst_pane

0x41f8,	// (0x00050a8c) main_calc_pane

0xc8d8,	// (0x0005916c) main_cale_day_pane

0x19a1,	// (0x0004e235) main_cale_month_pane

0xc8d8,	// (0x0005916c) main_cale_week_pane

0xaa1e,	// (0x000572b2) main_call_pane

0xa51b,	// (0x00056daf) main_call_poc_pane

0xaa1e,	// (0x000572b2) main_camera_pane

0xaa1e,	// (0x000572b2) main_chi_dic_pane

0xb23b,	// (0x00057acf) main_clock_pane

0xa51b,	// (0x00056daf) main_fmradio_pane

0xaa1e,	// (0x000572b2) main_graph_messa_pane

0xa51b,	// (0x00056daf) main_help_pane

0xa847,	// (0x000570db) main_im_pane

0xa776,	// (0x0005700a) main_image_pane_ParamLimits

0xa776,	// (0x0005700a) main_image_pane

0xa51b,	// (0x00056daf) main_location2_pane

0xaa1e,	// (0x000572b2) main_location_pane

0xa776,	// (0x0005700a) main_messa_pane

0xa51b,	// (0x00056daf) main_mp2_pane

0xaa1e,	// (0x000572b2) main_mp_pane

0xa51b,	// (0x00056daf) main_msg_pane

0xa51b,	// (0x00056daf) main_mup_eq_pane

0xa51b,	// (0x00056daf) main_mup_pane

0xa847,	// (0x000570db) main_notes_pane

0xa51b,	// (0x00056daf) main_pec_pane

0xa51b,	// (0x00056daf) main_phob_pane

0xa51b,	// (0x00056daf) main_pinb_pane

0xa51b,	// (0x00056daf) main_postcard_pane

0xa51b,	// (0x00056daf) main_qdial_pane

0xaa1e,	// (0x000572b2) main_skin_pane

0xa51b,	// (0x00056daf) main_smil2_pane

0xaa1e,	// (0x000572b2) main_smil_pane

0xaa1e,	// (0x000572b2) main_video_pane

0xaa1e,	// (0x000572b2) main_video_tele_pane

0xa776,	// (0x0005700a) main_viewer_pane_ParamLimits

0xa776,	// (0x0005700a) main_viewer_pane

0xaa1e,	// (0x000572b2) main_vorec_pane

0x424c,	// (0x00050ae0) popup_blid_sat_info_window_ParamLimits

0x424c,	// (0x00050ae0) popup_blid_sat_info_window

0x42a4,	// (0x00050b38) popup_dyc_status_message_window_ParamLimits

0x42a4,	// (0x00050b38) popup_dyc_status_message_window

0x42bc,	// (0x00050b50) popup_grid_large_graphic_window_ParamLimits

0x42bc,	// (0x00050b50) popup_grid_large_graphic_window

0x436c,	// (0x00050c00) popup_loc_request_window_ParamLimits

0x436c,	// (0x00050c00) popup_loc_request_window

0x4468,	// (0x00050cfc) popup_wml_address_window_ParamLimits

0x4468,	// (0x00050cfc) popup_wml_address_window

0x4032,	// (0x000508c6) call_muted_g1

0x3ce6,	// (0x0005057a) popup_call_audio_conf_window_ParamLimits

0x3ce6,	// (0x0005057a) popup_call_audio_conf_window

0x4046,	// (0x000508da) popup_call_audio_first_window_ParamLimits

0x4046,	// (0x000508da) popup_call_audio_first_window

0x40bc,	// (0x00050950) popup_call_audio_in_window_ParamLimits

0x40bc,	// (0x00050950) popup_call_audio_in_window

0x40f8,	// (0x0005098c) popup_call_audio_out_window_ParamLimits

0x40f8,	// (0x0005098c) popup_call_audio_out_window

0x4132,	// (0x000509c6) popup_call_audio_second_window_ParamLimits

0x4132,	// (0x000509c6) popup_call_audio_second_window

0x4188,	// (0x00050a1c) popup_call_audio_wait_window_ParamLimits

0x4188,	// (0x00050a1c) popup_call_audio_wait_window

0x41bd,	// (0x00050a51) popup_number_entry_window_ParamLimits

0x41bd,	// (0x00050a51) popup_number_entry_window

0x979f,	// (0x00056033) bg_popup_call_pane_cp05_ParamLimits

0x979f,	// (0x00056033) bg_popup_call_pane_cp05

0x97bf,	// (0x00056053) popup_number_entry_window_t1

0x97d2,	// (0x00056066) popup_number_entry_window_t2

0x97e4,	// (0x00056078) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0005b95e) popup_number_entry_window_t

0x97f6,	// (0x0005608a) text_title_cp2

0x9809,	// (0x0005609d) bg_popup_call_pane_cp_ParamLimits

0x9809,	// (0x0005609d) bg_popup_call_pane_cp

0x9817,	// (0x000560ab) call_thumbnail_pane

0x981f,	// (0x000560b3) popup_call_audio_in_window_g1_ParamLimits

0x981f,	// (0x000560b3) popup_call_audio_in_window_g1

0x982b,	// (0x000560bf) popup_call_audio_in_window_g2_ParamLimits

0x982b,	// (0x000560bf) popup_call_audio_in_window_g2

0x9837,	// (0x000560cb) popup_call_audio_in_window_g3_ParamLimits

0x9837,	// (0x000560cb) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0005b967) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0005b967) popup_call_audio_in_window_g

0x9843,	// (0x000560d7) popup_call_audio_in_window_t1_ParamLimits

0x9843,	// (0x000560d7) popup_call_audio_in_window_t1

0x985f,	// (0x000560f3) popup_call_audio_in_window_t2_ParamLimits

0x985f,	// (0x000560f3) popup_call_audio_in_window_t2

0x987b,	// (0x0005610f) popup_call_audio_in_window_t3_ParamLimits

0x987b,	// (0x0005610f) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0005b96e) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0005b96e) popup_call_audio_in_window_t

0x9809,	// (0x0005609d) bg_popup_call_pane_cp01_ParamLimits

0x9809,	// (0x0005609d) bg_popup_call_pane_cp01

0x9817,	// (0x000560ab) call_thumbnail_pane_cp02

0x988e,	// (0x00056122) call_type_pane_cp022

0x9896,	// (0x0005612a) popup_call_audio_out_window_g1_ParamLimits

0x9896,	// (0x0005612a) popup_call_audio_out_window_g1

0x98a8,	// (0x0005613c) popup_call_audio_out_window_g2_ParamLimits

0x98a8,	// (0x0005613c) popup_call_audio_out_window_g2

0x98b4,	// (0x00056148) popup_call_audio_out_window_g3_ParamLimits

0x98b4,	// (0x00056148) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0005b975) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0005b975) popup_call_audio_out_window_g

0x98c6,	// (0x0005615a) popup_call_audio_out_window_t1_ParamLimits

0x98c6,	// (0x0005615a) popup_call_audio_out_window_t1

0xa247,	// (0x00056adb) popup_call_audio_out_window_t2_ParamLimits

0xa247,	// (0x00056adb) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0005b97c) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0005b97c) popup_call_audio_out_window_t

0xa25c,	// (0x00056af0) bg_popup_call_pane_ParamLimits

0xa25c,	// (0x00056af0) bg_popup_call_pane

0x154e,	// (0x0004dde2) call_thumbnail_pane_cp_ParamLimits

0x154e,	// (0x0004dde2) call_thumbnail_pane_cp

0xa2e0,	// (0x00056b74) call_type_pane_cp01_ParamLimits

0xa2e0,	// (0x00056b74) call_type_pane_cp01

0xa324,	// (0x00056bb8) popup_call_audio_first_window_g1_ParamLimits

0xa324,	// (0x00056bb8) popup_call_audio_first_window_g1

0xa370,	// (0x00056c04) popup_call_audio_first_window_g2_ParamLimits

0xa370,	// (0x00056c04) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0005b981) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0005b981) popup_call_audio_first_window_g

0xa3b4,	// (0x00056c48) popup_call_audio_first_window_t1_ParamLimits

0xa3b4,	// (0x00056c48) popup_call_audio_first_window_t1

0xa460,	// (0x00056cf4) popup_call_audio_first_window_t4_ParamLimits

0xa460,	// (0x00056cf4) popup_call_audio_first_window_t4

0xa4ec,	// (0x00056d80) popup_call_audio_first_window_t5_ParamLimits

0xa4ec,	// (0x00056d80) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0005b986) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0005b986) popup_call_audio_first_window_t

0xa51b,	// (0x00056daf) bg_popup_call_pane_cp02

0xa525,	// (0x00056db9) call_type_pane_cp023

0xa52d,	// (0x00056dc1) popup_call_audio_wait_window_g1

0xa535,	// (0x00056dc9) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005b98d) popup_call_audio_wait_window_g

0xa53d,	// (0x00056dd1) popup_call_audio_wait_window_t3

0xa54b,	// (0x00056ddf) bg_popup_call_pane_cp03_ParamLimits

0xa54b,	// (0x00056ddf) bg_popup_call_pane_cp03

0xa5ab,	// (0x00056e3f) call_thumbnail_pane_cp011_ParamLimits

0xa5ab,	// (0x00056e3f) call_thumbnail_pane_cp011

0xa5b7,	// (0x00056e4b) call_type_pane_cp034_ParamLimits

0xa5b7,	// (0x00056e4b) call_type_pane_cp034

0xa5f3,	// (0x00056e87) popup_call_audio_second_window_g1_ParamLimits

0xa5f3,	// (0x00056e87) popup_call_audio_second_window_g1

0xa62f,	// (0x00056ec3) popup_call_audio_second_window_g2_ParamLimits

0xa62f,	// (0x00056ec3) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0005b992) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0005b992) popup_call_audio_second_window_g

0xa66b,	// (0x00056eff) popup_call_audio_second_window_t1_ParamLimits

0xa66b,	// (0x00056eff) popup_call_audio_second_window_t1

0xa6ec,	// (0x00056f80) popup_call_audio_second_window_t2_ParamLimits

0xa6ec,	// (0x00056f80) popup_call_audio_second_window_t2

0xa722,	// (0x00056fb6) popup_call_audio_second_window_t3_ParamLimits

0xa722,	// (0x00056fb6) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0005b997) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0005b997) popup_call_audio_second_window_t

0xa51b,	// (0x00056daf) bg_popup_call_pane_cp04

0xa758,	// (0x00056fec) list_conf_pane

0xa760,	// (0x00056ff4) popup_call_audio_conf_window_t1

0xa76e,	// (0x00057002) call_thumbnail_pane_g1

0xa776,	// (0x0005700a) bg_pinb_pane_ParamLimits

0xa776,	// (0x0005700a) bg_pinb_pane

0xa784,	// (0x00057018) find_pinb_pane

0xa78d,	// (0x00057021) listscroll_pinb_pane_ParamLimits

0xa78d,	// (0x00057021) listscroll_pinb_pane

0xa79c,	// (0x00057030) pinb_bg_pane_g1

0x1572,	// (0x0004de06) pinb_bg_pane_g2

0x157e,	// (0x0004de12) pinb_bg_pane_g3

0x158a,	// (0x0004de1e) pinb_bg_pane_g4

0x1596,	// (0x0004de2a) pinb_bg_pane_g5

0x15a2,	// (0x0004de36) pinb_bg_pane_g6

0x15ad,	// (0x0004de41) pinb_bg_pane_g7

0x15b8,	// (0x0004de4c) pinb_bg_pane_g8

0x15c3,	// (0x0004de57) pinb_bg_pane_g9

0x15cd,	// (0x0004de61) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0005b99e) pinb_bg_pane_g

0x15ea,	// (0x0004de7e) grid_pinb_pane

0x15f3,	// (0x0004de87) list_pinb_pane

0x15fc,	// (0x0004de90) scroll_pane_cp01_ParamLimits

0x15fc,	// (0x0004de90) scroll_pane_cp01

0xa7a6,	// (0x0005703a) find_pinb_pane_g1_ParamLimits

0xa7a6,	// (0x0005703a) find_pinb_pane_g1

0xa7be,	// (0x00057052) find_pinb_pane_t1

0xa7d0,	// (0x00057064) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0005b9b8) find_pinb_pane_t

0xa7e5,	// (0x00057079) input_focus_pane_cp01_ParamLimits

0xa7e5,	// (0x00057079) input_focus_pane_cp01

0x160e,	// (0x0004dea2) cell_pinb_pane_ParamLimits

0x160e,	// (0x0004dea2) cell_pinb_pane

0x1639,	// (0x0004decd) cell_pinb_pane_g1_ParamLimits

0x1639,	// (0x0004decd) cell_pinb_pane_g1

0xa7f1,	// (0x00057085) cell_pinb_pane_g2_ParamLimits

0xa7f1,	// (0x00057085) cell_pinb_pane_g2

0xa7fd,	// (0x00057091) cell_pinb_pane_g3_ParamLimits

0xa7fd,	// (0x00057091) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0005b9bd) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0005b9bd) cell_pinb_pane_g

0xa51b,	// (0x00056daf) grid_highlight_pane_cp01

0x164c,	// (0x0004dee0) list_pinb_item_pane_ParamLimits

0x164c,	// (0x0004dee0) list_pinb_item_pane

0xa51b,	// (0x00056daf) list_highlight_pane_cp02

0x165f,	// (0x0004def3) list_pinb_item_pane_g1_ParamLimits

0x165f,	// (0x0004def3) list_pinb_item_pane_g1

0x166c,	// (0x0004df00) list_pinb_item_pane_g2_ParamLimits

0x166c,	// (0x0004df00) list_pinb_item_pane_g2

0x1678,	// (0x0004df0c) list_pinb_item_pane_g3_ParamLimits

0x1678,	// (0x0004df0c) list_pinb_item_pane_g3

0x1689,	// (0x0004df1d) list_pinb_item_pane_g4_ParamLimits

0x1689,	// (0x0004df1d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0005b9c4) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0005b9c4) list_pinb_item_pane_g

0x1695,	// (0x0004df29) list_pinb_item_pane_t1_ParamLimits

0x1695,	// (0x0004df29) list_pinb_item_pane_t1

0x16ca,	// (0x0004df5e) calc_display_pane

0x16f2,	// (0x0004df86) calc_paper_pane

0x1715,	// (0x0004dfa9) grid_calc_pane

0xa51b,	// (0x00056daf) bg_list_pane_cp01

0x1743,	// (0x0004dfd7) clock_g1

0x174b,	// (0x0004dfdf) clock_g2

0x0001,

0xf139,	// (0x0005b9cd) clock_g

0x1753,	// (0x0004dfe7) clock_t1_ParamLimits

0x1753,	// (0x0004dfe7) clock_t1

0x1768,	// (0x0004dffc) clock_t2_ParamLimits

0x1768,	// (0x0004dffc) clock_t2

0x177a,	// (0x0004e00e) clock_t3_ParamLimits

0x177a,	// (0x0004e00e) clock_t3

0x178c,	// (0x0004e020) clock_t4_ParamLimits

0x178c,	// (0x0004e020) clock_t4

0x179e,	// (0x0004e032) clock_t5_ParamLimits

0x179e,	// (0x0004e032) clock_t5

0x17b3,	// (0x0004e047) clock_t6_ParamLimits

0x17b3,	// (0x0004e047) clock_t6

0x17c5,	// (0x0004e059) clock_t7_ParamLimits

0x17c5,	// (0x0004e059) clock_t7

0x17d7,	// (0x0004e06b) clock_t8_ParamLimits

0x17d7,	// (0x0004e06b) clock_t8

0x17eb,	// (0x0004e07f) clock_t9_ParamLimits

0x17eb,	// (0x0004e07f) clock_t9

0x0008,

0xf13e,	// (0x0005b9d2) clock_t_ParamLimits

0xf13e,	// (0x0005b9d2) clock_t

0xa809,	// (0x0005709d) popup_clock_analogue_window_cp02

0xa809,	// (0x0005709d) popup_clock_digital_window_cp01

0xa811,	// (0x000570a5) listscroll_help_pane

0xa51b,	// (0x00056daf) phob_pre_status_pane

0xa81b,	// (0x000570af) grid_qdial_pane

0xa776,	// (0x0005700a) listscroll_mce_pane

0xa776,	// (0x0005700a) bg_notes_pane

0xa825,	// (0x000570b9) list_notes_pane

0x17ff,	// (0x0004e093) scroll_pane_cp06

0xa833,	// (0x000570c7) bg_calc_paper_pane

0x98e6,	// (0x0005617a) list_calc_pane

0xa847,	// (0x000570db) bg_calc_display_pane

0x1813,	// (0x0004e0a7) calc_display_pane_t1

0x1825,	// (0x0004e0b9) calc_display_pane_t2

0x9900,	// (0x00056194) calc_display_pane_t3

0x0002,

0xf151,	// (0x0005b9e5) calc_display_pane_t

0x1837,	// (0x0004e0cb) cell_calc_pane_ParamLimits

0x1837,	// (0x0004e0cb) cell_calc_pane

0xa853,	// (0x000570e7) bg_calc_paper_pane_g1

0xa85f,	// (0x000570f3) bg_calc_paper_pane_g2

0xa86b,	// (0x000570ff) bg_calc_paper_pane_g3

0xa877,	// (0x0005710b) bg_calc_paper_pane_g4

0xa883,	// (0x00057117) bg_calc_paper_pane_g5

0x186e,	// (0x0004e102) bg_calc_paper_pane_g6

0x187d,	// (0x0004e111) bg_calc_paper_pane_g7

0x188c,	// (0x0004e120) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0005b9ec) bg_calc_paper_pane_g

0x189f,	// (0x0004e133) calc_bg_paper_pane_g9

0x18b2,	// (0x0004e146) list_calc_item_pane_ParamLimits

0x18b2,	// (0x0004e146) list_calc_item_pane

0xa88f,	// (0x00057123) list_calc_item_pane_g1

0x9912,	// (0x000561a6) list_calc_item_pane_t1_ParamLimits

0x9912,	// (0x000561a6) list_calc_item_pane_t1

0x18cb,	// (0x0004e15f) list_calc_item_pane_t2_ParamLimits

0x18cb,	// (0x0004e15f) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0005b9fd) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0005b9fd) list_calc_item_pane_t

0xa89c,	// (0x00057130) cell_calc_pane_g1

0xa8a6,	// (0x0005713a) grid_highlight_pane_cp02

0xa8c8,	// (0x0005715c) bg_calc_display_pane_g1

0x9924,	// (0x000561b8) bg_calc_display_pane_g2

0xa8d1,	// (0x00057165) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0005ba07) bg_calc_display_pane_g

0x18fd,	// (0x0004e191) cell_qdial_pane_ParamLimits

0x18fd,	// (0x0004e191) cell_qdial_pane

0x1911,	// (0x0004e1a5) cell_qdial_pane_g1_ParamLimits

0x1911,	// (0x0004e1a5) cell_qdial_pane_g1

0x1927,	// (0x0004e1bb) cell_qdial_pane_g2_ParamLimits

0x1927,	// (0x0004e1bb) cell_qdial_pane_g2

0xa8da,	// (0x0005716e) cell_qdial_pane_g3_ParamLimits

0xa8da,	// (0x0005716e) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0005ba0e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0005ba0e) cell_qdial_pane_g

0x194d,	// (0x0004e1e1) cell_qdial_pane_t1_ParamLimits

0x194d,	// (0x0004e1e1) cell_qdial_pane_t1

0x1965,	// (0x0004e1f9) cell_qdial_pane_t2_ParamLimits

0x1965,	// (0x0004e1f9) cell_qdial_pane_t2

0x1978,	// (0x0004e20c) cell_qdial_pane_t3_ParamLimits

0x1978,	// (0x0004e20c) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0005ba17) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0005ba17) cell_qdial_pane_t

0xa51b,	// (0x00056daf) grid_highlight_pane_cp04

0xa8e6,	// (0x0005717a) thumbnail_qdial_pane_ParamLimits

0xa8e6,	// (0x0005717a) thumbnail_qdial_pane

0xa942,	// (0x000571d6) list_help_pane

0xa94b,	// (0x000571df) scroll_pane_cp02

0xad6c,	// (0x00057600) help_list_pane_t1_ParamLimits

0xad6c,	// (0x00057600) help_list_pane_t1

0x992e,	// (0x000561c2) bg_notes_pane_g2

0x9936,	// (0x000561ca) bg_notes_pane_g3

0x993e,	// (0x000561d2) notes_bg_pane_g1

0x9946,	// (0x000561da) notes_bg_pane_g4

0x994e,	// (0x000561e2) notes_bg_pane_g5

0x9956,	// (0x000561ea) notes_bg_pane_g6

0x995e,	// (0x000561f2) notes_bg_pane_g7

0x9966,	// (0x000561fa) notes_bg_pane_g8

0x996e,	// (0x00056202) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0005ba35) notes_bg_pane_g

0x198b,	// (0x0004e21f) list_notes_text_pane_ParamLimits

0x198b,	// (0x0004e21f) list_notes_text_pane

0xa954,	// (0x000571e8) list_notes_text_pane_g1

0x03a9,	// (0x0004cc3d) list_notes_text_pane_t1

0x19a1,	// (0x0004e235) listscroll_cale_week_pane

0x19cd,	// (0x0004e261) bg_cale_heading_pane

0xa977,	// (0x0005720b) bg_cale_pane_cp01

0x19e5,	// (0x0004e279) cale_week_corner_pane

0x1a04,	// (0x0004e298) cale_week_day_heading_pane

0x1a21,	// (0x0004e2b5) cale_week_scroll_pane_g1

0x1a34,	// (0x0004e2c8) cale_week_scroll_pane_g2

0x1a4c,	// (0x0004e2e0) cale_week_scroll_pane_g3

0x1a64,	// (0x0004e2f8) cale_week_scroll_pane_g4

0x1a7c,	// (0x0004e310) cale_week_scroll_pane_g5

0x1a9c,	// (0x0004e330) cale_week_scroll_pane_g6

0x1abc,	// (0x0004e350) cale_week_scroll_pane_g7

0x1adc,	// (0x0004e370) cale_week_scroll_pane_g8

0x1b00,	// (0x0004e394) cale_week_scroll_pane_g9

0x1b18,	// (0x0004e3ac) cale_week_scroll_pane_g10

0x1b30,	// (0x0004e3c4) cale_week_scroll_pane_g11

0x1b48,	// (0x0004e3dc) cale_week_scroll_pane_g12

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g13

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g14

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0005ba44) cale_week_scroll_pane_g

0x1b9c,	// (0x0004e430) cale_week_time_pane

0x1bc0,	// (0x0004e454) grid_cale_week_pane

0xa9a6,	// (0x0005723a) scroll_pane_cp08

0x1be6,	// (0x0004e47a) cell_cale_week_pane_ParamLimits

0x1be6,	// (0x0004e47a) cell_cale_week_pane

0x1c74,	// (0x0004e508) cale_week_day_heading_pane_t1

0x1c9e,	// (0x0004e532) cale_week_day_heading_pane_t2

0x1ccd,	// (0x0004e561) cale_week_day_heading_pane_t3

0x1cfc,	// (0x0004e590) cale_week_day_heading_pane_t4

0x1d2b,	// (0x0004e5bf) cale_week_day_heading_pane_t5

0x1d62,	// (0x0004e5f6) cale_week_day_heading_pane_t6

0x1d99,	// (0x0004e62d) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0005ba65) cale_week_day_heading_pane_t

0xa9c3,	// (0x00057257) bg_cale_side_pane

0x1dc3,	// (0x0004e657) cale_week_time_pane_t1

0x1ddd,	// (0x0004e671) cale_week_time_pane_t2

0x1df7,	// (0x0004e68b) cale_week_time_pane_t3

0x1e11,	// (0x0004e6a5) cale_week_time_pane_t4

0x1e2b,	// (0x0004e6bf) cale_week_time_pane_t5

0x1e45,	// (0x0004e6d9) cale_week_time_pane_t6

0x1e5f,	// (0x0004e6f3) cale_week_time_pane_t7

0x1e79,	// (0x0004e70d) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0005ba74) cale_week_time_pane_t

0x1e99,	// (0x0004e72d) cell_cale_week_pane_g2

0x1ebd,	// (0x0004e751) cell_cale_week_pane_g3_ParamLimits

0x1ebd,	// (0x0004e751) cell_cale_week_pane_g3

0xa9d1,	// (0x00057265) grid_highlight_pane_cp07

0xa9d9,	// (0x0005726d) listscroll_gms_pane

0xa9e3,	// (0x00057277) grid_gms_pane

0xa9ec,	// (0x00057280) listscroll_gms_pane_g1

0xa9f4,	// (0x00057288) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0005ba85) listscroll_gms_pane_g

0x1ed5,	// (0x0004e769) scroll_pane_cp010

0x1ee0,	// (0x0004e774) cell_gms_pane_ParamLimits

0x1ee0,	// (0x0004e774) cell_gms_pane

0x1ef2,	// (0x0004e786) cell_gms_pane_g1

0xa9fc,	// (0x00057290) cell_gms_pane_g2

0xaa04,	// (0x00057298) cell_gms_pane_g3

0xaa0d,	// (0x000572a1) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0005ba8a) cell_gms_pane_g

0xaa16,	// (0x000572aa) grid_highlight_pane_cp09

0x3fdc,	// (0x00050870) phob_pre_status_pane_g1

0x3fe4,	// (0x00050878) phob_pre_status_pane_g2

0x3fec,	// (0x00050880) phob_pre_status_pane_g3

0x3ff4,	// (0x00050888) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0005be88) phob_pre_status_pane_g

0x4004,	// (0x00050898) phob_pre_status_pane_t1

0x4012,	// (0x000508a6) phob_pre_status_pane_t2

0x4022,	// (0x000508b6) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0005be93) phob_pre_status_pane_t

0xaa1e,	// (0x000572b2) bg_list_pane_cp05

0x1f02,	// (0x0004e796) grid_vorec_pane

0x1f0a,	// (0x0004e79e) vorec_t1

0x1f18,	// (0x0004e7ac) vorec_t2

0x1f26,	// (0x0004e7ba) vorec_t3

0x1f34,	// (0x0004e7c8) vorec_t4

0x96f5,	// (0x00055f89) vorec_t5

0x9703,	// (0x00055f97) vorec_t6

0x0004,

0xf1ff,	// (0x0005ba93) vorec_t

0x9711,	// (0x00055fa5) wait_bar_pane_cp01

0x1f50,	// (0x0004e7e4) cell_vorec_pane_ParamLimits

0x1f50,	// (0x0004e7e4) cell_vorec_pane

0x9976,	// (0x0005620a) cell_vorec_pane_g1

0xa51b,	// (0x00056daf) grid_highlight_pane_cp05

0x1f7b,	// (0x0004e80f) cams_zoom_pane

0x1f8a,	// (0x0004e81e) image_vga_pane

0x1fa4,	// (0x0004e838) main_camera_pane_g1

0x1fb6,	// (0x0004e84a) main_camera_pane_g2

0x1fc6,	// (0x0004e85a) main_camera_pane_g3

0x1fd6,	// (0x0004e86a) main_camera_pane_g4

0x1fe6,	// (0x0004e87a) main_camera_pane_g5

0x1ff6,	// (0x0004e88a) main_camera_pane_g6

0x2006,	// (0x0004e89a) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005ba9e) main_camera_pane_g

0x2016,	// (0x0004e8aa) main_camera_pane_t1

0x202c,	// (0x0004e8c0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005baaf) main_camera_pane_t

0x2066,	// (0x0004e8fa) cams_zoom_pane_cp_ParamLimits

0x2066,	// (0x0004e8fa) cams_zoom_pane_cp

0x208e,	// (0x0004e922) image_cif_pane_ParamLimits

0x208e,	// (0x0004e922) image_cif_pane

0x20c9,	// (0x0004e95d) image_subqcif_pane

0x20d1,	// (0x0004e965) main_video_pane_g1_ParamLimits

0x20d1,	// (0x0004e965) main_video_pane_g1

0x20f5,	// (0x0004e989) main_video_pane_g2_ParamLimits

0x20f5,	// (0x0004e989) main_video_pane_g2

0x2129,	// (0x0004e9bd) main_video_pane_g3_ParamLimits

0x2129,	// (0x0004e9bd) main_video_pane_g3

0x2157,	// (0x0004e9eb) main_video_pane_g4_ParamLimits

0x2157,	// (0x0004e9eb) main_video_pane_g4

0x2185,	// (0x0004ea19) main_video_pane_g5_ParamLimits

0x2185,	// (0x0004ea19) main_video_pane_g5

0xaa32,	// (0x000572c6) main_video_pane_g6_ParamLimits

0xaa32,	// (0x000572c6) main_video_pane_g6

0x0006,

0xf220,	// (0x0005bab4) main_video_pane_g_ParamLimits

0xf220,	// (0x0005bab4) main_video_pane_g

0x21ae,	// (0x0004ea42) main_video_pane_t1_ParamLimits

0x21ae,	// (0x0004ea42) main_video_pane_t1

0xaa4c,	// (0x000572e0) cams_zoom_pane_g1

0xaa55,	// (0x000572e9) cams_zoom_pane_g2

0xaa5e,	// (0x000572f2) cams_zoom_pane_g3

0xaa67,	// (0x000572fb) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005bac3) cams_zoom_pane_g

0x220b,	// (0x0004ea9f) grid_cams_pane

0x2225,	// (0x0004eab9) linegrid_cams_pane

0x2238,	// (0x0004eacc) cell_cams_pane_ParamLimits

0x2238,	// (0x0004eacc) cell_cams_pane

0xaa70,	// (0x00057304) cams_burst_image_pane

0xaa78,	// (0x0005730c) cell_cams_pane_g1

0xa51b,	// (0x00056daf) grid_highlight_pane_cp03

0xa89c,	// (0x00057130) mp_bg_pane_g1

0xa51b,	// (0x00056daf) bg_list_pane_cp03

0xc7fd,	// (0x00059091) bg_mp_pane

0xc805,	// (0x00059099) grid_mp_pane

0xc80d,	// (0x000590a1) media_player_g1

0xc815,	// (0x000590a9) media_player_t1

0xc823,	// (0x000590b7) media_player_t2

0xc831,	// (0x000590c5) media_player_t3

0xc83f,	// (0x000590d3) media_player_t4

0xc84d,	// (0x000590e1) media_player_t5

0xc85b,	// (0x000590ef) media_player_t6

0xc869,	// (0x000590fd) media_player_t7

0x0006,

0xf5de,	// (0x0005be72) media_player_t

0xc877,	// (0x0005910b) wait_bar_pane_cp02

0xf5c3,	// (0x0005be57) main_usb_pane_t

0x3fd3,	// (0x00050867) cell_mp_pane

0xa89c,	// (0x00057130) cell_mp_pane_g1

0xa51b,	// (0x00056daf) grid_highlight_pane_cp06

0xaa80,	// (0x00057314) grid_skin_colour_pane

0xaa88,	// (0x0005731c) list_highlight_pane_cp03

0x2258,	// (0x0004eaec) skin_g1

0xaa90,	// (0x00057324) skin_t1

0xaa9f,	// (0x00057333) skin_t2

0x0001,

0xf264,	// (0x0005baf8) skin_t

0x2260,	// (0x0004eaf4) cell_skin_colour_pane_ParamLimits

0x2260,	// (0x0004eaf4) cell_skin_colour_pane

0xaaad,	// (0x00057341) cell_skin_colour_pane_g1

0x22d9,	// (0x0004eb6d) call_video_g1_ParamLimits

0x22d9,	// (0x0004eb6d) call_video_g1

0x22f5,	// (0x0004eb89) call_video_g2_ParamLimits

0x22f5,	// (0x0004eb89) call_video_g2

0x0001,

0xf269,	// (0x0005bafd) call_video_g_ParamLimits

0xf269,	// (0x0005bafd) call_video_g

0x2347,	// (0x0004ebdb) call_video_uplink_pane_cp1_ParamLimits

0x2347,	// (0x0004ebdb) call_video_uplink_pane_cp1

0xaabf,	// (0x00057353) call_video_uplink_pane_cp2

0x23e6,	// (0x0004ec7a) video_down_crop_pane_ParamLimits

0x23e6,	// (0x0004ec7a) video_down_crop_pane

0x24cf,	// (0x0004ed63) video_down_pane_ParamLimits

0x24cf,	// (0x0004ed63) video_down_pane

0xaac7,	// (0x0005735b) video_down_subqcif_pane_ParamLimits

0xaac7,	// (0x0005735b) video_down_subqcif_pane

0xaadf,	// (0x00057373) video_down_subqcif_pane_cp_ParamLimits

0xaadf,	// (0x00057373) video_down_subqcif_pane_cp

0xab05,	// (0x00057399) im_reading_pane_ParamLimits

0xab05,	// (0x00057399) im_reading_pane

0x25df,	// (0x0004ee73) im_writing_pane_ParamLimits

0x25df,	// (0x0004ee73) im_writing_pane

0x25f5,	// (0x0004ee89) im_reading_pane_t1

0xab1f,	// (0x000573b3) list_im_pane

0xab30,	// (0x000573c4) scroll_pane_cp07

0x262f,	// (0x0004eec3) im_writing_pane_t1_ParamLimits

0x262f,	// (0x0004eec3) im_writing_pane_t1

0xab49,	// (0x000573dd) im_writing_pane_t2_ParamLimits

0xab49,	// (0x000573dd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005bb07) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005bb07) im_writing_pane_t

0xa51b,	// (0x00056daf) input_focus_pane_cp04

0xa51b,	// (0x00056daf) input_focus_pane_cp05

0x2644,	// (0x0004eed8) list_im_single_pane_ParamLimits

0x2644,	// (0x0004eed8) list_im_single_pane

0x2659,	// (0x0004eeed) list_single_im_pane_t1

0x3f93,	// (0x00050827) blid_accuracy_pane

0x3f9b,	// (0x0005082f) blid_compass_pane

0x3fa5,	// (0x00050839) main_location_t1

0x3fb5,	// (0x00050849) main_location_t2

0x3fc5,	// (0x00050859) main_location_t3

0x0002,

0xf5ed,	// (0x0005be81) main_location_t

0xa51b,	// (0x00056daf) aid_levels_location

0xa89c,	// (0x00057130) blid_accuracy_pane_g1

0xa89c,	// (0x00057130) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005bb69) blid_accuracy_pane_g

0xab91,	// (0x00057425) wml_content_pane

0xabcf,	// (0x00057463) wml_button_pane_ParamLimits

0xabcf,	// (0x00057463) wml_button_pane

0x2668,	// (0x0004eefc) wml_list_single_large_pane_ParamLimits

0x2668,	// (0x0004eefc) wml_list_single_large_pane

0x267d,	// (0x0004ef11) wml_list_single_medium_pane_ParamLimits

0x267d,	// (0x0004ef11) wml_list_single_medium_pane

0x2694,	// (0x0004ef28) wml_list_single_small_pane_ParamLimits

0x2694,	// (0x0004ef28) wml_list_single_small_pane

0xabe3,	// (0x00057477) wml_selection_box_pane_ParamLimits

0xabe3,	// (0x00057477) wml_selection_box_pane

0xabf6,	// (0x0005748a) wml_list_single_pane_t1

0xac05,	// (0x00057499) wml_list_single_medium_pane_t1

0xac14,	// (0x000574a8) wml_list_single_large_pane_t1

0xac23,	// (0x000574b7) input_focus_pane_cp02_ParamLimits

0xac23,	// (0x000574b7) input_focus_pane_cp02

0xac36,	// (0x000574ca) wml_selection_box_pane_g1

0xac3f,	// (0x000574d3) wml_selection_box_pane_t1_ParamLimits

0xac3f,	// (0x000574d3) wml_selection_box_pane_t1

0xa776,	// (0x0005700a) bg_wml_button_pane_ParamLimits

0xa776,	// (0x0005700a) bg_wml_button_pane

0xac57,	// (0x000574eb) wml_button_pane_g1

0xac5f,	// (0x000574f3) wml_button_pane_t1

0xac57,	// (0x000574eb) wml_button_bg_pane_g1

0xac6f,	// (0x00057503) wml_button_bg_pane_g2

0xac77,	// (0x0005750b) wml_button_bg_pane_g3

0xac7f,	// (0x00057513) wml_button_bg_pane_g4

0xac87,	// (0x0005751b) wml_button_bg_pane_g5

0xac8f,	// (0x00057523) wml_button_bg_pane_g6

0xac97,	// (0x0005752b) wml_button_bg_pane_g7

0xac9f,	// (0x00057533) wml_button_bg_pane_g8

0xaca7,	// (0x0005753b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005bb0c) wml_button_bg_pane_g

0x26ad,	// (0x0004ef41) bg_list_pane_cp02

0xacaf,	// (0x00057543) mce_header_pane_ParamLimits

0xacaf,	// (0x00057543) mce_header_pane

0xacc5,	// (0x00057559) mce_icon_pane

0xacc5,	// (0x00057559) mce_image_pane

0xacce,	// (0x00057562) mce_text_pane_ParamLimits

0xacce,	// (0x00057562) mce_text_pane

0x26b5,	// (0x0004ef49) scroll_pane_cp03

0xabc7,	// (0x0005745b) scroll_pane_cp04

0xace1,	// (0x00057575) scroll_pane_cp05_ParamLimits

0xace1,	// (0x00057575) scroll_pane_cp05

0x26bf,	// (0x0004ef53) mce_header_field_pane_ParamLimits

0x26bf,	// (0x0004ef53) mce_header_field_pane

0x26d6,	// (0x0004ef6a) mce_header_field_pane_2_ParamLimits

0x26d6,	// (0x0004ef6a) mce_header_field_pane_2

0x26ec,	// (0x0004ef80) mce_header_field_pane_3

0x26f4,	// (0x0004ef88) list_single_mce_message_pane_ParamLimits

0x26f4,	// (0x0004ef88) list_single_mce_message_pane

0x270a,	// (0x0004ef9e) list_single_mce_smart_pane_ParamLimits

0x270a,	// (0x0004ef9e) list_single_mce_smart_pane

0xaced,	// (0x00057581) input_focus_pane_cp03

0xacf6,	// (0x0005758a) list_header_data_pane

0x272b,	// (0x0004efbf) mce_header_field_pane_t1

0x273b,	// (0x0004efcf) list_single_mce_header_pane_ParamLimits

0x273b,	// (0x0004efcf) list_single_mce_header_pane

0xacfe,	// (0x00057592) list_single_mce_header_pane_t1

0xad0d,	// (0x000575a1) list_single_mce_message_pane_g1

0xad15,	// (0x000575a9) list_single_mce_message_pane_t1

0x2775,	// (0x0004f009) bg_cale_heading_pane_cp01_ParamLimits

0x2775,	// (0x0004f009) bg_cale_heading_pane_cp01

0xad23,	// (0x000575b7) bg_cale_pane_cp02_ParamLimits

0xad23,	// (0x000575b7) bg_cale_pane_cp02

0x27af,	// (0x0004f043) cale_month_corner_pane

0x27ce,	// (0x0004f062) cale_month_day_heading_pane_ParamLimits

0x27ce,	// (0x0004f062) cale_month_day_heading_pane

0x2820,	// (0x0004f0b4) cale_month_pane_g1_ParamLimits

0x2820,	// (0x0004f0b4) cale_month_pane_g1

0x284f,	// (0x0004f0e3) cale_month_pane_g2_ParamLimits

0x284f,	// (0x0004f0e3) cale_month_pane_g2

0x287f,	// (0x0004f113) cale_month_pane_g3_ParamLimits

0x287f,	// (0x0004f113) cale_month_pane_g3

0x28bb,	// (0x0004f14f) cale_month_pane_g4_ParamLimits

0x28bb,	// (0x0004f14f) cale_month_pane_g4

0x28f7,	// (0x0004f18b) cale_month_pane_g5_ParamLimits

0x28f7,	// (0x0004f18b) cale_month_pane_g5

0x293f,	// (0x0004f1d3) cale_month_pane_g6_ParamLimits

0x293f,	// (0x0004f1d3) cale_month_pane_g6

0x298b,	// (0x0004f21f) cale_month_pane_g7_ParamLimits

0x298b,	// (0x0004f21f) cale_month_pane_g7

0x29db,	// (0x0004f26f) cale_month_pane_g8_ParamLimits

0x29db,	// (0x0004f26f) cale_month_pane_g8

0x2a2f,	// (0x0004f2c3) cale_month_pane_g9_ParamLimits

0x2a2f,	// (0x0004f2c3) cale_month_pane_g9

0x2a81,	// (0x0004f315) cale_month_pane_g10_ParamLimits

0x2a81,	// (0x0004f315) cale_month_pane_g10

0x2ad3,	// (0x0004f367) cale_month_pane_g11_ParamLimits

0x2ad3,	// (0x0004f367) cale_month_pane_g11

0x2b25,	// (0x0004f3b9) cale_month_pane_g12_ParamLimits

0x2b25,	// (0x0004f3b9) cale_month_pane_g12

0x2b77,	// (0x0004f40b) cale_month_pane_g13_ParamLimits

0x2b77,	// (0x0004f40b) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005bb1f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005bb1f) cale_month_pane_g

0x2bc9,	// (0x0004f45d) cale_month_week_pane

0x2bed,	// (0x0004f481) grid_cale_month_pane_ParamLimits

0x2bed,	// (0x0004f481) grid_cale_month_pane

0x2c36,	// (0x0004f4ca) cale_month_day_heading_pane_t1

0x2c78,	// (0x0004f50c) cale_month_day_heading_pane_t2

0x2cad,	// (0x0004f541) cale_month_day_heading_pane_t3

0x2ce2,	// (0x0004f576) cale_month_day_heading_pane_t4

0x2d1f,	// (0x0004f5b3) cale_month_day_heading_pane_t5

0x2d64,	// (0x0004f5f8) cale_month_day_heading_pane_t6

0x2da9,	// (0x0004f63d) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005bb3a) cale_month_day_heading_pane_t

0xa9c3,	// (0x00057257) bg_cale_side_pane_cp01

0x2df6,	// (0x0004f68a) cale_month_week_pane_t1

0x2e0f,	// (0x0004f6a3) cale_month_week_pane_t2

0x2e28,	// (0x0004f6bc) cale_month_week_pane_t3

0x2e41,	// (0x0004f6d5) cale_month_week_pane_t4

0x2e5a,	// (0x0004f6ee) cale_month_week_pane_t5

0x2e73,	// (0x0004f707) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005bb49) cale_month_week_pane_t

0x2e8c,	// (0x0004f720) cell_cale_month_pane_ParamLimits

0x2e8c,	// (0x0004f720) cell_cale_month_pane

0x9980,	// (0x00056214) cell_cale_month_pane_g1

0x2fba,	// (0x0004f84e) cell_cale_month_pane_t1_ParamLimits

0x2fba,	// (0x0004f84e) cell_cale_month_pane_t1

0xa9d1,	// (0x00057265) grid_highlight_pane_cp08

0xa89c,	// (0x00057130) main_smil_g1

0x2fe6,	// (0x0004f87a) smil_status_pane

0xad9c,	// (0x00057630) smil_text_pane

0xc6dd,	// (0x00058f71) bg_popup_call3_rect_pane_g8

0xc6e5,	// (0x00058f79) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005be02) bg_popup_call3_rect_pane_g

0xc96c,	// (0x00059200) smil_status_volume_pane_g1

0xada6,	// (0x0005763a) smil_status_pane_t1

0x9ad2,	// (0x00056366) volume_smil_pane

0xadbd,	// (0x00057651) list_smil_text_pane

0x2ffb,	// (0x0004f88f) scroll_pane_cp011

0x3006,	// (0x0004f89a) smil_text_list_pane_t1_ParamLimits

0x3006,	// (0x0004f89a) smil_text_list_pane_t1

0x998c,	// (0x00056220) aid_volume_smil_ParamLimits

0x998c,	// (0x00056220) aid_volume_smil

0xa89c,	// (0x00057130) smil_volume_pane_g1

0xa89c,	// (0x00057130) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005bb69) smil_volume_pane_g

0x19a1,	// (0x0004e235) listscroll_cale_day_pane

0xadc7,	// (0x0005765b) bg_cale_pane

0xaddf,	// (0x00057673) list_cale_pane

0xae02,	// (0x00057696) scroll_pane_cp09

0xae13,	// (0x000576a7) cale_bg_pane_g1

0xae1b,	// (0x000576af) cale_bg_pane_g2

0xae23,	// (0x000576b7) cale_bg_pane_g3

0xae2b,	// (0x000576bf) cale_bg_pane_g4

0xae33,	// (0x000576c7) cale_bg_pane_g5

0xae3b,	// (0x000576cf) cale_bg_pane_g6

0xae43,	// (0x000576d7) cale_bg_pane_g7

0xae4b,	// (0x000576df) cale_bg_pane_g8

0xae53,	// (0x000576e7) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005bb6e) cale_bg_pane_g

0x3052,	// (0x0004f8e6) list_cale_time_pane_ParamLimits

0x3052,	// (0x0004f8e6) list_cale_time_pane

0xae5b,	// (0x000576ef) list_cale_time_pane_g1_ParamLimits

0xae5b,	// (0x000576ef) list_cale_time_pane_g1

0xae67,	// (0x000576fb) list_cale_time_pane_g2_ParamLimits

0xae67,	// (0x000576fb) list_cale_time_pane_g2

0x3068,	// (0x0004f8fc) list_cale_time_pane_g3_ParamLimits

0x3068,	// (0x0004f8fc) list_cale_time_pane_g3

0x3076,	// (0x0004f90a) list_cale_time_pane_g4_ParamLimits

0x3076,	// (0x0004f90a) list_cale_time_pane_g4

0x3084,	// (0x0004f918) list_cale_time_pane_g5_ParamLimits

0x3084,	// (0x0004f918) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005bb81) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005bb81) list_cale_time_pane_g

0xae81,	// (0x00057715) list_cale_time_pane_t1_ParamLimits

0xae81,	// (0x00057715) list_cale_time_pane_t1

0xaea9,	// (0x0005773d) list_cale_time_pane_t2_ParamLimits

0xaea9,	// (0x0005773d) list_cale_time_pane_t2

0x3335,	// (0x0004fbc9) aid_blid_cardinal_pane

0x3373,	// (0x0004fc07) compass_pane_t4

0xaed1,	// (0x00057765) list_cale_time_pane_t4_ParamLimits

0xaed1,	// (0x00057765) list_cale_time_pane_t4

0x3381,	// (0x0004fc15) compass_pane_t5

0x338f,	// (0x0004fc23) compass_pane_t6

0x339d,	// (0x0004fc31) compass_pane_t7

0xb355,	// (0x00057be9) navi_pane_cc_t1

0xb532,	// (0x00057dc6) aid_phob_thumbnail_center_pane

0x39a9,	// (0x0005023d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005bb8e) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005bb8e) list_cale_time_pane_t

0x9809,	// (0x0005609d) bg_popup_window_pane_cp02_ParamLimits

0x9809,	// (0x0005609d) bg_popup_window_pane_cp02

0xaef9,	// (0x0005778d) heading_pane_cp01_ParamLimits

0xaef9,	// (0x0005778d) heading_pane_cp01

0xaf05,	// (0x00057799) loc_req_pane_ParamLimits

0xaf05,	// (0x00057799) loc_req_pane

0xaf15,	// (0x000577a9) loc_type_pane_ParamLimits

0xaf15,	// (0x000577a9) loc_type_pane

0xaf27,	// (0x000577bb) loc_type_pane_t1_ParamLimits

0xaf27,	// (0x000577bb) loc_type_pane_t1

0xaf39,	// (0x000577cd) loc_type_pane_t2_ParamLimits

0xaf39,	// (0x000577cd) loc_type_pane_t2

0xaf4b,	// (0x000577df) loc_type_pane_t3_ParamLimits

0xaf4b,	// (0x000577df) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005bb95) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005bb95) loc_type_pane_t

0xaf5d,	// (0x000577f1) list_loc_req_pane

0xaf67,	// (0x000577fb) scroll_pane_cp012

0x3092,	// (0x0004f926) list_single_loc_request_popup_menu_pane_ParamLimits

0x3092,	// (0x0004f926) list_single_loc_request_popup_menu_pane

0xaf72,	// (0x00057806) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf72,	// (0x00057806) list_single_loc_request_popup_menu_pane_g1

0xaf7e,	// (0x00057812) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf7e,	// (0x00057812) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005bb9c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005bb9c) list_single_loc_request_popup_menu_pane_g

0xaf8a,	// (0x0005781e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf8a,	// (0x0005781e) list_single_loc_request_popup_menu_pane_t1

0xa776,	// (0x0005700a) bg_popup_window_pane_cp03_ParamLimits

0xa776,	// (0x0005700a) bg_popup_window_pane_cp03

0xafa0,	// (0x00057834) heading_loc_req_pane_ParamLimits

0xafa0,	// (0x00057834) heading_loc_req_pane

0x309f,	// (0x0004f933) popup_dyc_status_message_window_g1_ParamLimits

0x309f,	// (0x0004f933) popup_dyc_status_message_window_g1

0x30b3,	// (0x0004f947) popup_dyc_status_message_window_t1_ParamLimits

0x30b3,	// (0x0004f947) popup_dyc_status_message_window_t1

0x30c8,	// (0x0004f95c) popup_dyc_status_message_window_t2_ParamLimits

0x30c8,	// (0x0004f95c) popup_dyc_status_message_window_t2

0x30dd,	// (0x0004f971) popup_dyc_status_message_window_t3_ParamLimits

0x30dd,	// (0x0004f971) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005bba1) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005bba1) popup_dyc_status_message_window_t

0xa51b,	// (0x00056daf) bg_heading_pane_cp01

0xafac,	// (0x00057840) heading_loc_req_pane_g1

0xafb4,	// (0x00057848) heading_loc_req_pane_g2

0xafbc,	// (0x00057850) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005bba8) heading_loc_req_pane_g

0xafc4,	// (0x00057858) heading_loc_req_pane_t1

0xafd3,	// (0x00057867) bg_popup_sub_pane_cp01_ParamLimits

0xafd3,	// (0x00057867) bg_popup_sub_pane_cp01

0xafe1,	// (0x00057875) popup_cale_events_window_g1_ParamLimits

0xafe1,	// (0x00057875) popup_cale_events_window_g1

0xb001,	// (0x00057895) popup_cale_events_window_g2_ParamLimits

0xb001,	// (0x00057895) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005bbdc) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005bbdc) popup_cale_events_window_g

0xb021,	// (0x000578b5) popup_cale_events_window_t1_ParamLimits

0xb021,	// (0x000578b5) popup_cale_events_window_t1

0xb033,	// (0x000578c7) popup_cale_events_window_t2_ParamLimits

0xb033,	// (0x000578c7) popup_cale_events_window_t2

0xb071,	// (0x00057905) popup_cale_events_window_t3_ParamLimits

0xb071,	// (0x00057905) popup_cale_events_window_t3

0xb0ab,	// (0x0005793f) popup_cale_events_window_t4_ParamLimits

0xb0ab,	// (0x0005793f) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005bbe1) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005bbe1) popup_cale_events_window_t

0x3105,	// (0x0004f999) call_type_pane

0x3115,	// (0x0004f9a9) popup_call_status_window_g1

0x3129,	// (0x0004f9bd) popup_call_status_window_g2

0x313d,	// (0x0004f9d1) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005bbea) popup_call_status_window_g

0xb0e1,	// (0x00057975) call_type_pane_g1

0xb0ea,	// (0x0005797e) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005bbf1) call_type_pane_g

0xa51b,	// (0x00056daf) bg_popup_sub_pane_cp02

0xb0f3,	// (0x00057987) listscroll_popup_wml_pane

0xb0fb,	// (0x0005798f) list_wml_pane

0xb105,	// (0x00057999) scroll_pane_cp013

0xb110,	// (0x000579a4) list_single_graphic_popup_wml_pane_ParamLimits

0xb110,	// (0x000579a4) list_single_graphic_popup_wml_pane

0xa89c,	// (0x00057130) list_single_graphic_popup_wml_pane_g1

0xb124,	// (0x000579b8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005bbf6) list_single_graphic_popup_wml_pane_g

0xb12c,	// (0x000579c0) list_single_graphic_popup_wml_pane_t1

0xb142,	// (0x000579d6) aid_call_pane

0xa76e,	// (0x00057002) popup_clock_analogue_window_g1

0xa76e,	// (0x00057002) popup_clock_analogue_window_g2

0x99ae,	// (0x00056242) popup_clock_analogue_window_g3

0x99ae,	// (0x00056242) popup_clock_analogue_window_g4

0xa89c,	// (0x00057130) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005bbfb) popup_clock_analogue_window_g

0x99b6,	// (0x0005624a) popup_clock_analogue_window_t1

0x99c4,	// (0x00056258) clock_digital_number_pane_ParamLimits

0x99c4,	// (0x00056258) clock_digital_number_pane

0x99d0,	// (0x00056264) clock_digital_number_pane_cp02_ParamLimits

0x99d0,	// (0x00056264) clock_digital_number_pane_cp02

0x99dc,	// (0x00056270) clock_digital_number_pane_cp03_ParamLimits

0x99dc,	// (0x00056270) clock_digital_number_pane_cp03

0x99e8,	// (0x0005627c) clock_digital_number_pane_cp04_ParamLimits

0x99e8,	// (0x0005627c) clock_digital_number_pane_cp04

0x99f4,	// (0x00056288) clock_digital_separator_pane_ParamLimits

0x99f4,	// (0x00056288) clock_digital_separator_pane

0x9a00,	// (0x00056294) popup_clock_digital_window_t1

0xa89c,	// (0x00057130) clock_digital_number_pane_g1

0xa89c,	// (0x00057130) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005bb69) clock_digital_number_pane_g

0xa89c,	// (0x00057130) clock_digital_separator_pane_g1

0xa89c,	// (0x00057130) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005bb69) clock_digital_separator_pane_g

0xa51b,	// (0x00056daf) bg_popup_window_pane_cp04

0xb14a,	// (0x000579de) heading_pane_cp03

0xb152,	// (0x000579e6) listscroll_popup_gms_pane

0xb15a,	// (0x000579ee) grid_large_graphic_popup_pane

0xb164,	// (0x000579f8) listscroll_popup_gms_pane_g1

0xb16c,	// (0x00057a00) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005bc06) listscroll_popup_gms_pane_g

0xabc7,	// (0x0005745b) scroll_pane_cp014

0x314c,	// (0x0004f9e0) cell_large_graphic_popup_pane_ParamLimits

0x314c,	// (0x0004f9e0) cell_large_graphic_popup_pane

0x3164,	// (0x0004f9f8) cell_large_graphic_popup_pane_g1_ParamLimits

0x3164,	// (0x0004f9f8) cell_large_graphic_popup_pane_g1

0xb174,	// (0x00057a08) cell_large_graphic_popup_pane_g2_ParamLimits

0xb174,	// (0x00057a08) cell_large_graphic_popup_pane_g2

0xb180,	// (0x00057a14) cell_large_graphic_popup_pane_g3_ParamLimits

0xb180,	// (0x00057a14) cell_large_graphic_popup_pane_g3

0xb18d,	// (0x00057a21) cell_large_graphic_popup_pane_g4_ParamLimits

0xb18d,	// (0x00057a21) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005bc0b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005bc0b) cell_large_graphic_popup_pane_g

0xb19d,	// (0x00057a31) grid_highlight_pane_cp010

0xa89c,	// (0x00057130) bg_popup_call_pane_g1

0xb1a7,	// (0x00057a3b) list_single_graphic_popup_conf_pane_ParamLimits

0xb1a7,	// (0x00057a3b) list_single_graphic_popup_conf_pane

0xb1ba,	// (0x00057a4e) list_highlight_pane_cp01

0xb1c3,	// (0x00057a57) list_single_graphic_popup_conf_pane_g1

0xb1cb,	// (0x00057a5f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005bc14) list_single_graphic_popup_conf_pane_g

0xb1d3,	// (0x00057a67) list_single_graphic_popup_conf_pane_t1

0xb1e1,	// (0x00057a75) linegrid_cams_pane_g1

0x3170,	// (0x0004fa04) linegrid_cams_pane_g2

0xaa04,	// (0x00057298) linegrid_cams_pane_g3

0xb1ea,	// (0x00057a7e) linegrid_cams_pane_g4

0x3179,	// (0x0004fa0d) linegrid_cams_pane_g5

0x3182,	// (0x0004fa16) linegrid_cams_pane_g6

0xaa0d,	// (0x000572a1) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005bc19) linegrid_cams_pane_g

0xb1f3,	// (0x00057a87) popup_clock_analogue_window

0xb1f3,	// (0x00057a87) popup_clock_digital_window

0xa51b,	// (0x00056daf) popup_phob_thumbnail_window

0xa89c,	// (0x00057130) call_video_uplink_pane_g1

0xb1fc,	// (0x00057a90) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005bc28) call_video_uplink_pane_g

0xb204,	// (0x00057a98) video_uplink_pane

0xb20c,	// (0x00057aa0) mce_image_pane_g1

0x318d,	// (0x0004fa21) mce_image_pane_g2

0x3195,	// (0x0004fa29) mce_image_pane_g3

0x319d,	// (0x0004fa31) mce_image_pane_g4

0x31a7,	// (0x0004fa3b) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005bc2d) mce_image_pane_g

0xb216,	// (0x00057aaa) control_top_pane_stacon_cp01_ParamLimits

0xb216,	// (0x00057aaa) control_top_pane_stacon_cp01

0xb22a,	// (0x00057abe) uni_indicator_pane_stacon_cp01_ParamLimits

0xb22a,	// (0x00057abe) uni_indicator_pane_stacon_cp01

0xb23b,	// (0x00057acf) bg_popup_sub_pane_cp03

0x31af,	// (0x0004fa43) chi_dic_find_pane

0x31b7,	// (0x0004fa4b) listscroll_chi_dic_pane

0x31c0,	// (0x0004fa54) main_pane_chidic_g1

0x31d3,	// (0x0004fa67) chi_dic_find_pane_t1

0xb245,	// (0x00057ad9) find_chidic_pane

0xb24e,	// (0x00057ae2) chi_dic_list_pane_ParamLimits

0xb24e,	// (0x00057ae2) chi_dic_list_pane

0xb25f,	// (0x00057af3) scroll_pane_cp020

0x31e1,	// (0x0004fa75) find_chidic_pane_t1

0xa51b,	// (0x00056daf) input_focus_pane_cp06

0x31f0,	// (0x0004fa84) list_chi_dic_pane_ParamLimits

0x31f0,	// (0x0004fa84) list_chi_dic_pane

0x3202,	// (0x0004fa96) list_chi_dic_pane_t1_ParamLimits

0x3202,	// (0x0004fa96) list_chi_dic_pane_t1

0xa51b,	// (0x00056daf) list_highlight_pane_cp020

0xb267,	// (0x00057afb) bg_cale_heading_pane_g1

0x3215,	// (0x0004faa9) bg_cale_heading_pane_g2

0x321d,	// (0x0004fab1) bg_cale_heading_pane_g3

0x3225,	// (0x0004fab9) bg_cale_heading_pane_g4

0x322f,	// (0x0004fac3) bg_cale_heading_pane_g5

0x3239,	// (0x0004facd) bg_cale_heading_pane_g6

0x3241,	// (0x0004fad5) bg_cale_heading_pane_g7

0x3249,	// (0x0004fadd) bg_cale_heading_pane_g8

0x3253,	// (0x0004fae7) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005bc38) bg_cale_heading_pane_g

0xb267,	// (0x00057afb) bg_cale_side_pane_g1

0x325d,	// (0x0004faf1) bg_cale_side_pane_g2

0x3265,	// (0x0004faf9) bg_cale_side_pane_g3

0x326d,	// (0x0004fb01) bg_cale_side_pane_g4

0x3275,	// (0x0004fb09) bg_cale_side_pane_g5

0x327d,	// (0x0004fb11) bg_cale_side_pane_g6

0x3285,	// (0x0004fb19) bg_cale_side_pane_g7

0x328d,	// (0x0004fb21) bg_cale_side_pane_g8

0x3295,	// (0x0004fb29) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005bc4b) bg_cale_side_pane_g

0x329d,	// (0x0004fb31) popup_call_status_window_ParamLimits

0x329d,	// (0x0004fb31) popup_call_status_window

0xb26f,	// (0x00057b03) stacon_top_pane

0xb277,	// (0x00057b0b) status_pane_ParamLimits

0xb277,	// (0x00057b0b) status_pane

0xb28c,	// (0x00057b20) status_small_pane

0xb294,	// (0x00057b28) control_pane

0xa51b,	// (0x00056daf) stacon_bottom_pane

0xb29c,	// (0x00057b30) list_single_mce_smart_pane_t1_ParamLimits

0xb29c,	// (0x00057b30) list_single_mce_smart_pane_t1

0xb2af,	// (0x00057b43) list_single_mce_smart_pane_t2_ParamLimits

0xb2af,	// (0x00057b43) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005bc5e) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005bc5e) list_single_mce_smart_pane_t

0x32e4,	// (0x0004fb78) compass_pane

0x32ed,	// (0x0004fb81) main_location2_pane_t1

0x32ff,	// (0x0004fb93) main_location2_pane_t2

0x3311,	// (0x0004fba5) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005bc63) main_location2_pane_t

0xb2ce,	// (0x00057b62) compass_pane_g1_ParamLimits

0xb2ce,	// (0x00057b62) compass_pane_g1

0x3355,	// (0x0004fbe9) compass_pane_t1

0x3364,	// (0x0004fbf8) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005bc6c) compass_pane_t

0x33ab,	// (0x0004fc3f) text_secondary_cp61

0xb34c,	// (0x00057be0) navi_pane_cams_g5

0xb3c8,	// (0x00057c5c) navi_pane_im_t1

0xb3d6,	// (0x00057c6a) navi_pane_mp_g1_ParamLimits

0xb3d6,	// (0x00057c6a) navi_pane_mp_g1

0xb3ea,	// (0x00057c7e) navi_pane_mp_g2_ParamLimits

0xb3ea,	// (0x00057c7e) navi_pane_mp_g2

0xb3f6,	// (0x00057c8a) navi_pane_mp_g3_ParamLimits

0xb3f6,	// (0x00057c8a) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005bc80) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005bc80) navi_pane_mp_g

0xb402,	// (0x00057c96) navi_pane_mp_t1

0xb410,	// (0x00057ca4) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005bc87) navi_pane_mp_t

0xb47b,	// (0x00057d0f) navi_pane_vt_g1

0xb402,	// (0x00057c96) navi_pane_vt_t1

0xb483,	// (0x00057d17) navi_slider_pane

0xaa1e,	// (0x000572b2) zooming_pane

0xb493,	// (0x00057d27) navi_slider_pane_g1

0x9a1d,	// (0x000562b1) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005bc8e) navi_slider_pane_g

0xb4b7,	// (0x00057d4b) aid_levels_zoom

0xb4bf,	// (0x00057d53) zooming_pane_g1

0xb4c7,	// (0x00057d5b) zooming_pane_g2

0xb4c7,	// (0x00057d5b) zooming_pane_g3

0x0002,

0xf409,	// (0x0005bc9d) zooming_pane_g

0xb4cf,	// (0x00057d63) level_10_zoom

0xb4d8,	// (0x00057d6c) level_11_zoom

0xb4e1,	// (0x00057d75) level_1_zoom

0xb4ea,	// (0x00057d7e) level_2_zoom

0xb4f3,	// (0x00057d87) level_3_zoom

0xb4fc,	// (0x00057d90) level_4_zoom

0xb505,	// (0x00057d99) level_5_zoom

0xb50e,	// (0x00057da2) level_6_zoom

0xb517,	// (0x00057dab) level_7_zoom

0xb520,	// (0x00057db4) level_8_zoom

0xb529,	// (0x00057dbd) level_9_zoom

0xb53a,	// (0x00057dce) popup_phob_thumbnail_window_g1

0xb542,	// (0x00057dd6) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005bca4) popup_phob_thumbnail_window_g

0xc87f,	// (0x00059113) level_1_location

0xc887,	// (0x0005911b) level_2_location

0xc88f,	// (0x00059123) level_3_location

0xc897,	// (0x0005912b) level_4_location

0xaa1e,	// (0x000572b2) level_5_location

0x33fc,	// (0x0004fc90) mce_icon_pane_g1

0x3406,	// (0x0004fc9a) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005bca9) mce_icon_pane_g

0x340e,	// (0x0004fca2) main_mup_pane_g1_ParamLimits

0x340e,	// (0x0004fca2) main_mup_pane_g1

0x3424,	// (0x0004fcb8) main_mup_pane_g2_ParamLimits

0x3424,	// (0x0004fcb8) main_mup_pane_g2

0x3436,	// (0x0004fcca) main_mup_pane_g3_ParamLimits

0x3436,	// (0x0004fcca) main_mup_pane_g3

0x3448,	// (0x0004fcdc) main_mup_pane_g4_ParamLimits

0x3448,	// (0x0004fcdc) main_mup_pane_g4

0x3460,	// (0x0004fcf4) main_mup_pane_g5_ParamLimits

0x3460,	// (0x0004fcf4) main_mup_pane_g5

0x347c,	// (0x0004fd10) main_mup_pane_g6_ParamLimits

0x347c,	// (0x0004fd10) main_mup_pane_g6

0x3494,	// (0x0004fd28) main_mup_pane_g7_ParamLimits

0x3494,	// (0x0004fd28) main_mup_pane_g7

0x34ac,	// (0x0004fd40) main_mup_pane_g8_ParamLimits

0x34ac,	// (0x0004fd40) main_mup_pane_g8

0x34c4,	// (0x0004fd58) main_mup_pane_g9_ParamLimits

0x34c4,	// (0x0004fd58) main_mup_pane_g9

0x34de,	// (0x0004fd72) main_mup_pane_g10_ParamLimits

0x34de,	// (0x0004fd72) main_mup_pane_g10

0x34f8,	// (0x0004fd8c) main_mup_pane_g11_ParamLimits

0x34f8,	// (0x0004fd8c) main_mup_pane_g11

0x350c,	// (0x0004fda0) main_mup_pane_g12_ParamLimits

0x350c,	// (0x0004fda0) main_mup_pane_g12

0x3522,	// (0x0004fdb6) main_mup_pane_g13_ParamLimits

0x3522,	// (0x0004fdb6) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005bcae) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005bcae) main_mup_pane_g

0x3536,	// (0x0004fdca) main_mup_pane_t1_ParamLimits

0x3536,	// (0x0004fdca) main_mup_pane_t1

0x3550,	// (0x0004fde4) main_mup_pane_t2_ParamLimits

0x3550,	// (0x0004fde4) main_mup_pane_t2

0x3568,	// (0x0004fdfc) main_mup_pane_t3_ParamLimits

0x3568,	// (0x0004fdfc) main_mup_pane_t3

0x3580,	// (0x0004fe14) main_mup_pane_t4_ParamLimits

0x3580,	// (0x0004fe14) main_mup_pane_t4

0x359e,	// (0x0004fe32) main_mup_pane_t5_ParamLimits

0x359e,	// (0x0004fe32) main_mup_pane_t5

0x35b3,	// (0x0004fe47) main_mup_pane_t6_ParamLimits

0x35b3,	// (0x0004fe47) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005bcc9) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005bcc9) main_mup_pane_t

0x35c5,	// (0x0004fe59) mup_progress_pane_ParamLimits

0x35c5,	// (0x0004fe59) mup_progress_pane

0x35d1,	// (0x0004fe65) mup_visualizer_pane_ParamLimits

0x35d1,	// (0x0004fe65) mup_visualizer_pane

0x3605,	// (0x0004fe99) mup_volume_pane_ParamLimits

0x3605,	// (0x0004fe99) mup_volume_pane

0xb54a,	// (0x00057dde) mup_visualizer_pane_g1_ParamLimits

0xb54a,	// (0x00057dde) mup_visualizer_pane_g1

0xb54a,	// (0x00057dde) mup_visualizer_pane_g2_ParamLimits

0xb54a,	// (0x00057dde) mup_visualizer_pane_g2

0xb2ce,	// (0x00057b62) mup_visualizer_pane_g3_ParamLimits

0xb2ce,	// (0x00057b62) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005bcd6) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005bcd6) mup_visualizer_pane_g

0xa89c,	// (0x00057130) mup_volume_pane_g1

0xb560,	// (0x00057df4) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005bcdd) mup_volume_pane_g

0xa89c,	// (0x00057130) mup_progress_pane_g1

0xb569,	// (0x00057dfd) mup_progress_pane_g2

0xb572,	// (0x00057e06) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005bce2) mup_progress_pane_g

0xa51b,	// (0x00056daf) bg_popup_window_pane_cp05

0xb57b,	// (0x00057e0f) heading_pane_cp02_ParamLimits

0xb57b,	// (0x00057e0f) heading_pane_cp02

0xb595,	// (0x00057e29) list_popup_blid_pane

0xb59d,	// (0x00057e31) list_blid_sat_info_pane_ParamLimits

0xb59d,	// (0x00057e31) list_blid_sat_info_pane

0xb5b0,	// (0x00057e44) list_blid_sat_info_pane_g1

0xb5b8,	// (0x00057e4c) list_blid_sat_info_pane_t1

0x371b,	// (0x0004ffaf) mup_equalizer_pane_ParamLimits

0x371b,	// (0x0004ffaf) mup_equalizer_pane

0x3734,	// (0x0004ffc8) mup_equalizer_pane_cp1_ParamLimits

0x3734,	// (0x0004ffc8) mup_equalizer_pane_cp1

0x3751,	// (0x0004ffe5) mup_equalizer_pane_cp2_ParamLimits

0x3751,	// (0x0004ffe5) mup_equalizer_pane_cp2

0x376e,	// (0x00050002) mup_equalizer_pane_cp3_ParamLimits

0x376e,	// (0x00050002) mup_equalizer_pane_cp3

0x378f,	// (0x00050023) mup_equalizer_pane_cp4_ParamLimits

0x378f,	// (0x00050023) mup_equalizer_pane_cp4

0x37b0,	// (0x00050044) mup_equalizer_pane_cp5

0x37c4,	// (0x00050058) mup_equalizer_pane_cp6

0x37d8,	// (0x0005006c) mup_equalizer_pane_cp7

0xc75d,	// (0x00058ff1) bg_popup_call_poc_act_pane_g9

0xc765,	// (0x00058ff9) bg_popup_call_poc_act_pane_g10

0xc76d,	// (0x00059001) bg_popup_call_poc_act_pane_g11

0x000a,

0xa776,	// (0x0005700a) mup_scale_pane

0xa89c,	// (0x00057130) mup_scale_pane_g1

0xb5c6,	// (0x00057e5a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005bcfe) mup_scale_pane_g

0xb5ea,	// (0x00057e7e) msg_data_pane

0xb5f2,	// (0x00057e86) scroll_pane_cp017

0x05c8,	// (0x0004ce5c) bg_list_pane_cp04_ParamLimits

0x05c8,	// (0x0004ce5c) bg_list_pane_cp04

0xb5fa,	// (0x00057e8e) msg_data_pane_g1

0x3806,	// (0x0005009a) msg_data_pane_g2

0x380e,	// (0x000500a2) msg_data_pane_g3

0x3816,	// (0x000500aa) msg_data_pane_g4

0x381e,	// (0x000500b2) msg_data_pane_g5

0x3826,	// (0x000500ba) msg_data_pane_g6

0x382e,	// (0x000500c2) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005bd0d) msg_data_pane_g

0x05e0,	// (0x0004ce74) msg_text_pane_ParamLimits

0x05e0,	// (0x0004ce74) msg_text_pane

0x3836,	// (0x000500ca) qrid_highlight_pane_cp011_ParamLimits

0x3836,	// (0x000500ca) qrid_highlight_pane_cp011

0xa51b,	// (0x00056daf) msg_body_pane

0xa51b,	// (0x00056daf) msg_header_pane

0xb60b,	// (0x00057e9f) input_focus_pane_cp07

0x384c,	// (0x000500e0) msg_header_pane_t1_ParamLimits

0x384c,	// (0x000500e0) msg_header_pane_t1

0x385e,	// (0x000500f2) msg_header_pane_t2_ParamLimits

0x385e,	// (0x000500f2) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005bd21) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005bd21) msg_header_pane_t

0xb620,	// (0x00057eb4) msg_body_pane_g1

0x3870,	// (0x00050104) msg_body_pane_t1_ParamLimits

0x3870,	// (0x00050104) msg_body_pane_t1

0x38a1,	// (0x00050135) msg_body_pane_t2_ParamLimits

0x38a1,	// (0x00050135) msg_body_pane_t2

0x38b3,	// (0x00050147) msg_body_pane_t3_ParamLimits

0x38b3,	// (0x00050147) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005bd26) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005bd26) msg_body_pane_t

0x38ff,	// (0x00050193) main_viewer_pane_g1_ParamLimits

0x38ff,	// (0x00050193) main_viewer_pane_g1

0x390d,	// (0x000501a1) main_viewer_pane_g2_ParamLimits

0x390d,	// (0x000501a1) main_viewer_pane_g2

0x391b,	// (0x000501af) main_viewer_pane_g3_ParamLimits

0x391b,	// (0x000501af) main_viewer_pane_g3

0x392a,	// (0x000501be) main_viewer_pane_g4_ParamLimits

0x392a,	// (0x000501be) main_viewer_pane_g4

0x9a47,	// (0x000562db) main_viewer_pane_g5_ParamLimits

0x9a47,	// (0x000562db) main_viewer_pane_g5

0x9a47,	// (0x000562db) main_viewer_pane_g7_ParamLimits

0x9a47,	// (0x000562db) main_viewer_pane_g7

0x9a59,	// (0x000562ed) main_viewer_pane_g8_ParamLimits

0x9a59,	// (0x000562ed) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005bd36) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005bd36) main_viewer_pane_g

0xb628,	// (0x00057ebc) viewer_content_pane_ParamLimits

0xb628,	// (0x00057ebc) viewer_content_pane

0x3966,	// (0x000501fa) main_postcard_pane_g1_ParamLimits

0x3966,	// (0x000501fa) main_postcard_pane_g1

0x397c,	// (0x00050210) main_postcard_pane_g2_ParamLimits

0x397c,	// (0x00050210) main_postcard_pane_g2

0x3992,	// (0x00050226) main_postcard_pane_g3_ParamLimits

0x3992,	// (0x00050226) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005bd47) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005bd47) main_postcard_pane_g

0x39a9,	// (0x0005023d) main_postcard_pane_g4

0xc97f,	// (0x00059213) smil_status_volume_pane_g2

0x39ec,	// (0x00050280) postcard_pane_ParamLimits

0x39ec,	// (0x00050280) postcard_pane

0xb636,	// (0x00057eca) postcard_pane_g1_ParamLimits

0xb636,	// (0x00057eca) postcard_pane_g1

0x3a2e,	// (0x000502c2) postcard_pane_g2_ParamLimits

0x3a2e,	// (0x000502c2) postcard_pane_g2

0x3a3a,	// (0x000502ce) postcard_pane_g3_ParamLimits

0x3a3a,	// (0x000502ce) postcard_pane_g3

0xb644,	// (0x00057ed8) postcard_pane_g4_ParamLimits

0xb644,	// (0x00057ed8) postcard_pane_g4

0x3a46,	// (0x000502da) postcard_pane_g5_ParamLimits

0x3a46,	// (0x000502da) postcard_pane_g5

0x3a5b,	// (0x000502ef) postcard_pane_g6_ParamLimits

0x3a5b,	// (0x000502ef) postcard_pane_g6

0xb636,	// (0x00057eca) postcard_pane_g7_ParamLimits

0xb636,	// (0x00057eca) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005bd54) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005bd54) postcard_pane_g

0x3a6f,	// (0x00050303) main_mp2_pane_g1_ParamLimits

0x3a6f,	// (0x00050303) main_mp2_pane_g1

0x3a7b,	// (0x0005030f) main_mp2_pane_g2_ParamLimits

0x3a7b,	// (0x0005030f) main_mp2_pane_g2

0x3a87,	// (0x0005031b) main_mp2_pane_g3_ParamLimits

0x3a87,	// (0x0005031b) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005bd63) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005bd63) main_mp2_pane_g

0x3a93,	// (0x00050327) main_mp2_pane_t1_ParamLimits

0x3a93,	// (0x00050327) main_mp2_pane_t1

0x3aa8,	// (0x0005033c) main_mp2_pane_t2_ParamLimits

0x3aa8,	// (0x0005033c) main_mp2_pane_t2

0x3aba,	// (0x0005034e) main_mp2_pane_t3_ParamLimits

0x3aba,	// (0x0005034e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005bd6a) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005bd6a) main_mp2_pane_t

0xb652,	// (0x00057ee6) pec_content_pane_ParamLimits

0xb652,	// (0x00057ee6) pec_content_pane

0xabc7,	// (0x0005745b) scroll_pane_cp015

0xb664,	// (0x00057ef8) pec_attribute_pane_ParamLimits

0xb664,	// (0x00057ef8) pec_attribute_pane

0x3acc,	// (0x00050360) pec_content_pane_g1_ParamLimits

0x3acc,	// (0x00050360) pec_content_pane_g1

0xb674,	// (0x00057f08) pec_content_pane_t1_ParamLimits

0xb674,	// (0x00057f08) pec_content_pane_t1

0xb686,	// (0x00057f1a) pec_content_pane_t2_ParamLimits

0xb686,	// (0x00057f1a) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005bd71) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005bd71) pec_content_pane_t

0x3ad8,	// (0x0005036c) list_single_graphic_pane_cp01_ParamLimits

0x3ad8,	// (0x0005036c) list_single_graphic_pane_cp01

0xa776,	// (0x0005700a) bg_popup_sub_pane_cp04

0xb698,	// (0x00057f2c) popup_mup_playback_window_g1

0xb6a4,	// (0x00057f38) popup_mup_playback_window_t1

0xb6b9,	// (0x00057f4d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005bd76) popup_mup_playback_window_t

0xb6f0,	// (0x00057f84) main_image_pane_g1_ParamLimits

0xb6f0,	// (0x00057f84) main_image_pane_g1

0xb733,	// (0x00057fc7) scroll_pane_cp018_ParamLimits

0xb733,	// (0x00057fc7) scroll_pane_cp018

0xb74b,	// (0x00057fdf) scroll_pane_cp016_ParamLimits

0xb74b,	// (0x00057fdf) scroll_pane_cp016

0x3ba6,	// (0x0005043a) smil2_image_pane_ParamLimits

0x3ba6,	// (0x0005043a) smil2_image_pane

0x3bd6,	// (0x0005046a) smil2_root_pane_ParamLimits

0x3bd6,	// (0x0005046a) smil2_root_pane

0x3c0e,	// (0x000504a2) smil2_text_pane_ParamLimits

0x3c0e,	// (0x000504a2) smil2_text_pane

0xa51b,	// (0x00056daf) bg_list_pane_cp06

0xb787,	// (0x0005801b) grid_radio_pane

0xa51b,	// (0x00056daf) bg_popup_window_pane_cp06

0xb78f,	// (0x00058023) main_fmradio_pane_t1

0xb14a,	// (0x000579de) heading_pane_cp04

0xb79d,	// (0x00058031) main_fmradio_pane_t2

0xc7b5,	// (0x00059049) popup_cale_lunar_info_window_g1

0xb7ab,	// (0x0005803f) main_fmradio_pane_t3

0xc7bd,	// (0x00059051) popup_cale_lunar_info_window_g2

0xb7b9,	// (0x0005804d) main_fmradio_pane_t4

0x0001,

0xb7c7,	// (0x0005805b) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0005be64) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005bd8b) main_fmradio_pane_t

0xb7d5,	// (0x00058069) wait_bar_pane_cp03

0xb7dd,	// (0x00058071) cell_fmradio_pane_ParamLimits

0xb7dd,	// (0x00058071) cell_fmradio_pane

0xb636,	// (0x00057eca) cell_fmradio_pane_g1_ParamLimits

0xb636,	// (0x00057eca) cell_fmradio_pane_g1

0xa51b,	// (0x00056daf) grid_highlight_pane_cp011

0xb7f0,	// (0x00058084) poc_content_pane_ParamLimits

0xb7f0,	// (0x00058084) poc_content_pane

0xb802,	// (0x00058096) scroll_pane_cp019

0x3c8e,	// (0x00050522) popup_call_poc_act_window_ParamLimits

0x3c8e,	// (0x00050522) popup_call_poc_act_window

0x3cb2,	// (0x00050546) popup_call_poc_inact_window_ParamLimits

0x3cb2,	// (0x00050546) popup_call_poc_inact_window

0xf594,	// (0x0005be28) bg_popup_call_poc_act_pane_g

0xc775,	// (0x00059009) bg_popup_call_poc_inact_pane_g1

0xc77d,	// (0x00059011) bg_popup_call_poc_inact_pane_g2

0xb80a,	// (0x0005809e) popup_call_poc_act_window_g2

0xc785,	// (0x00059019) bg_popup_call_poc_inact_pane_g3

0xc705,	// (0x00058f99) bg_popup_call_poc_inact_pane_g4

0xc78d,	// (0x00059021) bg_popup_call_poc_inact_pane_g5

0xb812,	// (0x000580a6) popup_call_poc_act_window_t1_ParamLimits

0xb812,	// (0x000580a6) popup_call_poc_act_window_t1

0xb83a,	// (0x000580ce) popup_call_poc_act_window_t2_ParamLimits

0xb83a,	// (0x000580ce) popup_call_poc_act_window_t2

0xb862,	// (0x000580f6) popup_call_poc_act_window_t3_ParamLimits

0xb862,	// (0x000580f6) popup_call_poc_act_window_t3

0xb88a,	// (0x0005811e) popup_call_poc_act_window_t4_ParamLimits

0xb88a,	// (0x0005811e) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005bd96) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005bd96) popup_call_poc_act_window_t

0xc795,	// (0x00059029) bg_popup_call_poc_inact_pane_g6

0xc79d,	// (0x00059031) bg_popup_call_poc_inact_pane_g7

0xc7a5,	// (0x00059039) bg_popup_call_poc_inact_pane_g8

0xb89c,	// (0x00058130) popup_call_poc_inact_window_g2

0xc7ad,	// (0x00059041) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0005be3f) bg_popup_call_poc_inact_pane_g

0xb8a4,	// (0x00058138) popup_call_poc_inact_window_t1_ParamLimits

0xb8a4,	// (0x00058138) popup_call_poc_inact_window_t1

0xb8b9,	// (0x0005814d) popup_call_poc_inact_window_t2_ParamLimits

0xb8b9,	// (0x0005814d) popup_call_poc_inact_window_t2

0xb8ce,	// (0x00058162) popup_call_poc_inact_window_t3_ParamLimits

0xb8ce,	// (0x00058162) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005bd9f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005bd9f) popup_call_poc_inact_window_t

0xc8f2,	// (0x00059186) context_pane_ParamLimits

0x44da,	// (0x00050d6e) signal_pane_ParamLimits

0xaa1e,	// (0x000572b2) main_call2_pane

0x9a9e,	// (0x00056332) popup_phob_thumbnail2_window_ParamLimits

0x9a9e,	// (0x00056332) popup_phob_thumbnail2_window

0x9a2f,	// (0x000562c3) aid_hotspot_pointer_arrow_pane

0x9a37,	// (0x000562cb) aid_hotspot_pointer_hand_pane

0x3ffc,	// (0x00050890) phob_pre_status_pane_g5

0x1f7b,	// (0x0004e80f) cams_zoom_pane_ParamLimits

0x1f8a,	// (0x0004e81e) image_vga_pane_ParamLimits

0x1fa4,	// (0x0004e838) main_camera_pane_g1_ParamLimits

0x1fb6,	// (0x0004e84a) main_camera_pane_g2_ParamLimits

0x1fc6,	// (0x0004e85a) main_camera_pane_g3_ParamLimits

0x1fd6,	// (0x0004e86a) main_camera_pane_g4_ParamLimits

0x1fe6,	// (0x0004e87a) main_camera_pane_g5_ParamLimits

0x1ff6,	// (0x0004e88a) main_camera_pane_g6_ParamLimits

0x2006,	// (0x0004e89a) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005ba9e) main_camera_pane_g_ParamLimits

0x2016,	// (0x0004e8aa) main_camera_pane_t1_ParamLimits

0x202c,	// (0x0004e8c0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005baaf) main_camera_pane_t_ParamLimits

0xa776,	// (0x0005700a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa776,	// (0x0005700a) bg_popup_preview_window_pane_cp01

0xb8e3,	// (0x00058177) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8e3,	// (0x00058177) popup_phob_thumbnail2_window_g1

0xa51b,	// (0x00056daf) call2_cli_visual_pane

0x3ce6,	// (0x0005057a) popup_call2_audio_conf_window_ParamLimits

0x3ce6,	// (0x0005057a) popup_call2_audio_conf_window

0x3d06,	// (0x0005059a) popup_call2_audio_first_window_ParamLimits

0x3d06,	// (0x0005059a) popup_call2_audio_first_window

0x3d9c,	// (0x00050630) popup_call2_audio_in_window_ParamLimits

0x3d9c,	// (0x00050630) popup_call2_audio_in_window

0x3de4,	// (0x00050678) popup_call2_audio_out_window_ParamLimits

0x3de4,	// (0x00050678) popup_call2_audio_out_window

0x3e4e,	// (0x000506e2) popup_call2_audio_second_window_ParamLimits

0x3e4e,	// (0x000506e2) popup_call2_audio_second_window

0x3eb4,	// (0x00050748) popup_call2_audio_wait_window_ParamLimits

0x3eb4,	// (0x00050748) popup_call2_audio_wait_window

0xa51b,	// (0x00056daf) bg_popup_call2_act_pane_cp03

0xa758,	// (0x00056fec) list_conf_pane_cp

0xb8ef,	// (0x00058183) popup_call2_audio_conf_window_t1

0xb8fd,	// (0x00058191) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8fd,	// (0x00058191) list_single_graphic_popup_conf2_pane

0xb1ba,	// (0x00057a4e) list_highlight_pane_cp04

0xb910,	// (0x000581a4) list_single_graphic_popup_conf2_pane_g1

0xb1cb,	// (0x00057a5f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005bda6) list_single_graphic_popup_conf2_pane_g

0xb91a,	// (0x000581ae) list_single_graphic_popup_conf2_pane_t1

0xb928,	// (0x000581bc) bg_popup_call2_act_pane_cp01_ParamLimits

0xb928,	// (0x000581bc) bg_popup_call2_act_pane_cp01

0xb9b2,	// (0x00058246) call_type_pane_cp05_ParamLimits

0xb9b2,	// (0x00058246) call_type_pane_cp05

0xba06,	// (0x0005829a) popup_call2_audio_second_window_g1_ParamLimits

0xba06,	// (0x0005829a) popup_call2_audio_second_window_g1

0xba5a,	// (0x000582ee) popup_call2_audio_second_window_g2_ParamLimits

0xba5a,	// (0x000582ee) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005bdab) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005bdab) popup_call2_audio_second_window_g

0xbabf,	// (0x00058353) popup_call2_audio_second_window_t1_ParamLimits

0xbabf,	// (0x00058353) popup_call2_audio_second_window_t1

0xbb7a,	// (0x0005840e) popup_call2_audio_second_window_t2_ParamLimits

0xbb7a,	// (0x0005840e) popup_call2_audio_second_window_t2

0xbbcd,	// (0x00058461) popup_call2_audio_second_window_t3_ParamLimits

0xbbcd,	// (0x00058461) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005bdb2) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005bdb2) popup_call2_audio_second_window_t

0xa51b,	// (0x00056daf) bg_popup_call2_in_pane_cp02

0xa525,	// (0x00056db9) call_type_pane_cp04

0xa52d,	// (0x00056dc1) popup_call2_audio_wait_window_g1

0xa535,	// (0x00056dc9) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0005b98d) popup_call2_audio_wait_window_g

0xa53d,	// (0x00056dd1) popup_call2_audio_wait_window_t3

0xbcc0,	// (0x00058554) bg_popup_call2_act_pane_ParamLimits

0xbcc0,	// (0x00058554) bg_popup_call2_act_pane

0xbd80,	// (0x00058614) call_type_pane_cp03_ParamLimits

0xbd80,	// (0x00058614) call_type_pane_cp03

0xbde4,	// (0x00058678) popup_call2_audio_first_window_g1_ParamLimits

0xbde4,	// (0x00058678) popup_call2_audio_first_window_g1

0xbe54,	// (0x000586e8) popup_call2_audio_first_window_g2_ParamLimits

0xbe54,	// (0x000586e8) popup_call2_audio_first_window_g2

0xb54a,	// (0x00057dde) popup_call2_audio_first_window_g3_ParamLimits

0xb54a,	// (0x00057dde) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005bdbb) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005bdbb) popup_call2_audio_first_window_g

0xbf32,	// (0x000587c6) popup_call2_audio_first_window_t1_ParamLimits

0xbf32,	// (0x000587c6) popup_call2_audio_first_window_t1

0xc035,	// (0x000588c9) popup_call2_audio_first_window_t4_ParamLimits

0xc035,	// (0x000588c9) popup_call2_audio_first_window_t4

0xc118,	// (0x000589ac) popup_call2_audio_first_window_t5_ParamLimits

0xc118,	// (0x000589ac) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005bdc6) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005bdc6) popup_call2_audio_first_window_t

0xa76e,	// (0x00057002) bg_popup_call2_act_pane_g1

0xc7c5,	// (0x00059059) popup_cale_lunar_info_window_t1

0xc7d3,	// (0x00059067) popup_cale_lunar_info_window_t2

0xc7e1,	// (0x00059075) popup_cale_lunar_info_window_t3

0xa51b,	// (0x00056daf) bg_popup_call2_bubble_pane

0xc219,	// (0x00058aad) bg_popup_call2_in_pane_cp01_ParamLimits

0xc219,	// (0x00058aad) bg_popup_call2_in_pane_cp01

0x988e,	// (0x00056122) call_type_pane_cp02

0xc261,	// (0x00058af5) popup_call2_audio_out_window_g1_ParamLimits

0xc261,	// (0x00058af5) popup_call2_audio_out_window_g1

0xc28d,	// (0x00058b21) popup_call2_audio_out_window_g2_ParamLimits

0xc28d,	// (0x00058b21) popup_call2_audio_out_window_g2

0xc2b5,	// (0x00058b49) popup_call2_audio_out_window_g3_ParamLimits

0xc2b5,	// (0x00058b49) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005bdcf) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005bdcf) popup_call2_audio_out_window_g

0xc2f0,	// (0x00058b84) popup_call2_audio_out_window_t1_ParamLimits

0xc2f0,	// (0x00058b84) popup_call2_audio_out_window_t1

0xc34f,	// (0x00058be3) popup_call2_audio_out_window_t2_ParamLimits

0xc34f,	// (0x00058be3) popup_call2_audio_out_window_t2

0xc3a3,	// (0x00058c37) popup_call2_audio_out_window_t3_ParamLimits

0xc3a3,	// (0x00058c37) popup_call2_audio_out_window_t3

0xc3b9,	// (0x00058c4d) popup_call2_audio_out_window_t4_ParamLimits

0xc3b9,	// (0x00058c4d) popup_call2_audio_out_window_t4

0xc3cf,	// (0x00058c63) popup_call2_audio_out_window_t5_ParamLimits

0xc3cf,	// (0x00058c63) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005bdd8) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005bdd8) popup_call2_audio_out_window_t

0xc433,	// (0x00058cc7) bg_popup_call2_in_pane_ParamLimits

0xc433,	// (0x00058cc7) bg_popup_call2_in_pane

0xc48f,	// (0x00058d23) popup_call2_audio_in_window_g1_ParamLimits

0xc48f,	// (0x00058d23) popup_call2_audio_in_window_g1

0xc4c7,	// (0x00058d5b) popup_call2_audio_in_window_g2_ParamLimits

0xc4c7,	// (0x00058d5b) popup_call2_audio_in_window_g2

0xc4ff,	// (0x00058d93) popup_call2_audio_in_window_g3_ParamLimits

0xc4ff,	// (0x00058d93) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005bde5) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005bde5) popup_call2_audio_in_window_g

0xc557,	// (0x00058deb) popup_call2_audio_in_window_t1_ParamLimits

0xc557,	// (0x00058deb) popup_call2_audio_in_window_t1

0xc5d7,	// (0x00058e6b) popup_call2_audio_in_window_t2_ParamLimits

0xc5d7,	// (0x00058e6b) popup_call2_audio_in_window_t2

0xc657,	// (0x00058eeb) popup_call2_audio_in_window_t3_ParamLimits

0xc657,	// (0x00058eeb) popup_call2_audio_in_window_t3

0xc671,	// (0x00058f05) popup_call2_audio_in_window_t4_ParamLimits

0xc671,	// (0x00058f05) popup_call2_audio_in_window_t4

0xc683,	// (0x00058f17) popup_call2_audio_in_window_t5_ParamLimits

0xc683,	// (0x00058f17) popup_call2_audio_in_window_t5

0xc698,	// (0x00058f2c) popup_call2_audio_in_window_t6_ParamLimits

0xc698,	// (0x00058f2c) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005bdee) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005bdee) popup_call2_audio_in_window_t

0xa76e,	// (0x00057002) bg_popup_call2_in_pane_g1

0xc7ef,	// (0x00059083) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0005be69) popup_cale_lunar_info_window_t

0xa776,	// (0x0005700a) bg_popup_call2_rect_pane_ParamLimits

0xa776,	// (0x0005700a) bg_popup_call2_rect_pane

0xa51b,	// (0x00056daf) call2_cli_visual_graphic_pane

0xa51b,	// (0x00056daf) call2_cli_visual_text_pane

0x9ac5,	// (0x00056359) smil_status_volume_pane_g3

0x0002,

0xa89c,	// (0x00057130) call2_cli_visual_graphic_pane_g1

0xa89c,	// (0x00057130) call2_cli_visual_graphic_pane_g2

0xa89c,	// (0x00057130) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005bdfb) call2_cli_visual_graphic_pane_g

0xc6ad,	// (0x00058f41) bg_popup_call2_rect_pane_g1

0xa93a,	// (0x000571ce) bg_popup_call2_rect_pane_g2

0xc6b5,	// (0x00058f49) bg_popup_call2_rect_pane_g3

0xc6bd,	// (0x00058f51) bg_popup_call2_rect_pane_g4

0xc6c5,	// (0x00058f59) bg_popup_call2_rect_pane_g5

0xc6cd,	// (0x00058f61) bg_popup_call2_rect_pane_g6

0xc6d5,	// (0x00058f69) bg_popup_call2_rect_pane_g7

0xc6dd,	// (0x00058f71) bg_popup_call2_rect_pane_g8

0xc6e5,	// (0x00058f79) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005be02) bg_popup_call2_rect_pane_g

0xc6ed,	// (0x00058f81) bg_popup_call2_bubble_pane_g1

0xc6f5,	// (0x00058f89) bg_popup_call2_bubble_pane_g2

0xc6fd,	// (0x00058f91) bg_popup_call2_bubble_pane_g3

0xc705,	// (0x00058f99) bg_popup_call2_bubble_pane_g4

0xc70d,	// (0x00058fa1) bg_popup_call2_bubble_pane_g5

0xc715,	// (0x00058fa9) bg_popup_call2_bubble_pane_g6

0xc71d,	// (0x00058fb1) bg_popup_call2_bubble_pane_g7

0xc725,	// (0x00058fb9) bg_popup_call2_bubble_pane_g8

0xc72d,	// (0x00058fc1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005be15) bg_popup_call2_bubble_pane_g

0x19b3,	// (0x0004e247) aid_cale_week_size_cell_pane

0x2042,	// (0x0004e8d6) aid_cams_cif_uncrop_pane_ParamLimits

0x2042,	// (0x0004e8d6) aid_cams_cif_uncrop_pane

0x21f7,	// (0x0004ea8b) aid_cams_size_cell_ParamLimits

0x21f7,	// (0x0004ea8b) aid_cams_size_cell

0x220b,	// (0x0004ea9f) grid_cams_pane_ParamLimits

0x2225,	// (0x0004eab9) linegrid_cams_pane_ParamLimits

0x230b,	// (0x0004eb9f) call_video_pane_t1

0x2329,	// (0x0004ebbd) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005bb02) call_video_pane_t

0x274f,	// (0x0004efe3) aid_cale_month_size_cell_pane_ParamLimits

0x274f,	// (0x0004efe3) aid_cale_month_size_cell_pane

0xf61e,	// (0x0005beb2) smil_status_volume_pane_g

0x9ad2,	// (0x00056366) volume_smil_pane_ParamLimits

0x9749,	// (0x00055fdd) aid_popup2_width_pane

0x1937,	// (0x0004e1cb) cell_qdial_pane_g4_ParamLimits

0x1937,	// (0x0004e1cb) cell_qdial_pane_g4

0x3335,	// (0x0004fbc9) aid_blid_cardinal_pane_ParamLimits

0x3341,	// (0x0004fbd5) aid_blid_destination_pane_ParamLimits

0x3341,	// (0x0004fbd5) aid_blid_destination_pane

0xa776,	// (0x0005700a) bg_popup_call_poc_act_pane_ParamLimits

0xa776,	// (0x0005700a) bg_popup_call_poc_act_pane

0xa776,	// (0x0005700a) bg_popup_call_poc_inact_pane_ParamLimits

0xa776,	// (0x0005700a) bg_popup_call_poc_inact_pane

0xc735,	// (0x00058fc9) bg_popup_call_poc_act_pane_g1

0xc73d,	// (0x00058fd1) bg_popup_call_poc_act_pane_g2

0xc745,	// (0x00058fd9) bg_popup_call_poc_act_pane_g3

0xc705,	// (0x00058f99) bg_popup_call_poc_act_pane_g4

0xc70d,	// (0x00058fa1) bg_popup_call_poc_act_pane_g5

0xc74d,	// (0x00058fe1) bg_popup_call_poc_act_pane_g6

0xc71d,	// (0x00058fb1) bg_popup_call_poc_act_pane_g7

0xc755,	// (0x00058fe9) bg_popup_call_poc_act_pane_g8

0xa51b,	// (0x00056daf) main_usb_pane

0x9a79,	// (0x0005630d) popup_cale_lunar_info_window

0x25f5,	// (0x0004ee89) im_reading_pane_t1_ParamLimits

0xab1f,	// (0x000573b3) list_im_pane_ParamLimits

0xab30,	// (0x000573c4) scroll_pane_cp07_ParamLimits

0xa51b,	// (0x00056daf) grid_highlight_pane_cp012

0xa776,	// (0x0005700a) mup_scale_pane_ParamLimits

0xb636,	// (0x00057eca) main_usb_pane_g1_ParamLimits

0xb636,	// (0x00057eca) main_usb_pane_g1

0x3f11,	// (0x000507a5) main_usb_pane_g2_ParamLimits

0x3f11,	// (0x000507a5) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0005be52) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0005be52) main_usb_pane_g

0x3f27,	// (0x000507bb) main_usb_pane_t1_ParamLimits

0x3f27,	// (0x000507bb) main_usb_pane_t1

0x3f39,	// (0x000507cd) main_usb_pane_t2_ParamLimits

0x3f39,	// (0x000507cd) main_usb_pane_t2

0x3f4b,	// (0x000507df) main_usb_pane_t3_ParamLimits

0x3f4b,	// (0x000507df) main_usb_pane_t3

0x3f5d,	// (0x000507f1) main_usb_pane_t4_ParamLimits

0x3f5d,	// (0x000507f1) main_usb_pane_t4

0x3f6f,	// (0x00050803) main_usb_pane_t5_ParamLimits

0x3f6f,	// (0x00050803) main_usb_pane_t5

0x3f81,	// (0x00050815) main_usb_pane_t6_ParamLimits

0x3f81,	// (0x00050815) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0005be57) main_usb_pane_t_ParamLimits

0x32e4,	// (0x0004fb78) aid_text_placing

0x32ed,	// (0x0004fb81) main_location2_pane_t1_ParamLimits

0x32ff,	// (0x0004fb93) main_location2_pane_t2_ParamLimits

0x3311,	// (0x0004fba5) main_location2_pane_t3_ParamLimits

0x3323,	// (0x0004fbb7) main_location2_pane_t4_ParamLimits

0x3323,	// (0x0004fbb7) main_location2_pane_t4

0xf3cf,	// (0x0005bc63) main_location2_pane_t_ParamLimits

0xa7b2,	// (0x00057046) find_pinb_pane_g2_ParamLimits

0xa7b2,	// (0x00057046) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0005b9b3) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0005b9b3) find_pinb_pane_g

0xa7be,	// (0x00057052) find_pinb_pane_t1_ParamLimits

0xa7d0,	// (0x00057064) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0005b9b8) find_pinb_pane_t_ParamLimits

0xa51b,	// (0x00056daf) main_call3_pane

0x2c36,	// (0x0004f4ca) cale_month_day_heading_pane_t1_ParamLimits

0x2c78,	// (0x0004f50c) cale_month_day_heading_pane_t2_ParamLimits

0x2cad,	// (0x0004f541) cale_month_day_heading_pane_t3_ParamLimits

0x2ce2,	// (0x0004f576) cale_month_day_heading_pane_t4_ParamLimits

0x2d1f,	// (0x0004f5b3) cale_month_day_heading_pane_t5_ParamLimits

0x2d64,	// (0x0004f5f8) cale_month_day_heading_pane_t6_ParamLimits

0x2da9,	// (0x0004f63d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005bb3a) cale_month_day_heading_pane_t_ParamLimits

0xadb4,	// (0x00057648) smil_status_volume_pane

0x3a0a,	// (0x0005029e) postcard_address_pane_ParamLimits

0x3a0a,	// (0x0005029e) postcard_address_pane

0x3a1c,	// (0x000502b0) postcard_message_pane_ParamLimits

0x3a1c,	// (0x000502b0) postcard_message_pane

0x3eee,	// (0x00050782) call2_cli_visual_pane_t1_ParamLimits

0x3eee,	// (0x00050782) call2_cli_visual_pane_t1

0x4709,	// (0x00050f9d) postcard_message_pane_t1_ParamLimits

0x4709,	// (0x00050f9d) postcard_message_pane_t1

0x46f2,	// (0x00050f86) postcard_address_pane_t1_ParamLimits

0x46f2,	// (0x00050f86) postcard_address_pane_t1

0x46de,	// (0x00050f72) popup_call3_audio_in_window_ParamLimits

0x46de,	// (0x00050f72) popup_call3_audio_in_window

0x4569,	// (0x00050dfd) bg_popup_call3_in_pane_ParamLimits

0x4569,	// (0x00050dfd) bg_popup_call3_in_pane

0x45df,	// (0x00050e73) popup_call3_audio_in_window_g1_ParamLimits

0x45df,	// (0x00050e73) popup_call3_audio_in_window_g1

0x45ff,	// (0x00050e93) popup_call3_audio_in_window_g2_ParamLimits

0x45ff,	// (0x00050e93) popup_call3_audio_in_window_g2

0x461f,	// (0x00050eb3) popup_call3_audio_in_window_g3_ParamLimits

0x461f,	// (0x00050eb3) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0005beb9) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0005beb9) popup_call3_audio_in_window_g

0x4650,	// (0x00050ee4) popup_call3_audio_in_window_t1_ParamLimits

0x4650,	// (0x00050ee4) popup_call3_audio_in_window_t1

0x468e,	// (0x00050f22) popup_call3_audio_in_window_t2_ParamLimits

0x468e,	// (0x00050f22) popup_call3_audio_in_window_t2

0x46cc,	// (0x00050f60) popup_call3_audio_in_window_t3_ParamLimits

0x46cc,	// (0x00050f60) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0005bec2) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0005bec2) popup_call3_audio_in_window_t

0xaa1e,	// (0x000572b2) bg_popup_call3_rect_pane

0xc6ad,	// (0x00058f41) bg_popup_call3_rect_pane_g1

0xa93a,	// (0x000571ce) bg_popup_call3_rect_pane_g2

0xc6b5,	// (0x00058f49) bg_popup_call3_rect_pane_g3

0xc6bd,	// (0x00058f51) bg_popup_call3_rect_pane_g4

0xc6c5,	// (0x00058f59) bg_popup_call3_rect_pane_g5

0xc6cd,	// (0x00058f61) bg_popup_call3_rect_pane_g6

0xc6d5,	// (0x00058f69) bg_popup_call3_rect_pane_g7

0x361b,	// (0x0004feaf) mup_visualizer_osc_pane

0xb558,	// (0x00057dec) mup_visualizer_spec_pane

0x4599,	// (0x00050e2d) call3_video_qcif_pane_ParamLimits

0x4599,	// (0x00050e2d) call3_video_qcif_pane

0x45ac,	// (0x00050e40) call3_video_qcif_uncrop_pane_ParamLimits

0x45ac,	// (0x00050e40) call3_video_qcif_uncrop_pane

0x45ba,	// (0x00050e4e) call3_video_subqcif_pane_ParamLimits

0x45ba,	// (0x00050e4e) call3_video_subqcif_pane

0x45ce,	// (0x00050e62) call3_video_subqcif_uncrop_pane_ParamLimits

0x45ce,	// (0x00050e62) call3_video_subqcif_uncrop_pane

0x463f,	// (0x00050ed3) popup_call3_audio_in_window_g4_ParamLimits

0x463f,	// (0x00050ed3) popup_call3_audio_in_window_g4

0x4558,	// (0x00050dec) mup_spec_half_pane

0x4561,	// (0x00050df5) mup_spec_half_pane_cp

0xc952,	// (0x000591e6) mup_osc_middle_pane

0xc95b,	// (0x000591ef) mup_visualizer_osc_pane_g1

0x4538,	// (0x00050dcc) mup_spec_bar_pane_ParamLimits

0x4538,	// (0x00050dcc) mup_spec_bar_pane

0xc93f,	// (0x000591d3) mup_spec_bar_pane_g1

0xc949,	// (0x000591dd) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005bead) mup_spec_bar_pane_g

0x19b3,	// (0x0004e247) aid_cale_week_size_cell_pane_ParamLimits

0x19cd,	// (0x0004e261) bg_cale_heading_pane_ParamLimits

0xa977,	// (0x0005720b) bg_cale_pane_cp01_ParamLimits

0x19e5,	// (0x0004e279) cale_week_corner_pane_ParamLimits

0x1a04,	// (0x0004e298) cale_week_day_heading_pane_ParamLimits

0x1a21,	// (0x0004e2b5) cale_week_scroll_pane_g1_ParamLimits

0x1a34,	// (0x0004e2c8) cale_week_scroll_pane_g2_ParamLimits

0x1a4c,	// (0x0004e2e0) cale_week_scroll_pane_g3_ParamLimits

0x1a64,	// (0x0004e2f8) cale_week_scroll_pane_g4_ParamLimits

0x1a7c,	// (0x0004e310) cale_week_scroll_pane_g5_ParamLimits

0x1a9c,	// (0x0004e330) cale_week_scroll_pane_g6_ParamLimits

0x1abc,	// (0x0004e350) cale_week_scroll_pane_g7_ParamLimits

0x1adc,	// (0x0004e370) cale_week_scroll_pane_g8_ParamLimits

0x1b00,	// (0x0004e394) cale_week_scroll_pane_g9_ParamLimits

0x1b18,	// (0x0004e3ac) cale_week_scroll_pane_g10_ParamLimits

0x1b30,	// (0x0004e3c4) cale_week_scroll_pane_g11_ParamLimits

0x1b48,	// (0x0004e3dc) cale_week_scroll_pane_g12_ParamLimits

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g13_ParamLimits

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g14_ParamLimits

0x1b60,	// (0x0004e3f4) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0005ba44) cale_week_scroll_pane_g_ParamLimits

0x1b9c,	// (0x0004e430) cale_week_time_pane_ParamLimits

0x1bc0,	// (0x0004e454) grid_cale_week_pane_ParamLimits

0xa994,	// (0x00057228) listscroll_cale_week_pane_t1

0xa9a6,	// (0x0005723a) scroll_pane_cp08_ParamLimits

0x27af,	// (0x0004f043) cale_month_corner_pane_ParamLimits

0xad8a,	// (0x0005761e) cale_month_pane_t1

0x2bc9,	// (0x0004f45d) cale_month_week_pane_ParamLimits

0x3115,	// (0x0004f9a9) popup_call_status_window_g1_ParamLimits

0x3129,	// (0x0004f9bd) popup_call_status_window_g2_ParamLimits

0x313d,	// (0x0004f9d1) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005bbea) popup_call_status_window_g_ParamLimits

0xb13a,	// (0x000579ce) aid_call2_pane

0x060f,	// (0x0004cea3) msg_header_pane_g1

0x3a0a,	// (0x0005029e) postcard_address2_pane_ParamLimits

0x3a0a,	// (0x0005029e) postcard_address2_pane

0x3a1c,	// (0x000502b0) postcard_message2_pane_ParamLimits

0x3a1c,	// (0x000502b0) postcard_message2_pane

0x44e8,	// (0x00050d7c) message2_row_pane_ParamLimits

0x44e8,	// (0x00050d7c) message2_row_pane

0x4505,	// (0x00050d99) address2_row_pane_ParamLimits

0x4505,	// (0x00050d99) address2_row_pane

0xc90d,	// (0x000591a1) postcard_message2_row_pane_g1

0xc915,	// (0x000591a9) postcard_message2_row_pane_t1

0xc90d,	// (0x000591a1) address2_row_pane_g1

0xc915,	// (0x000591a9) address2_row_pane_t1

0x1efa,	// (0x0004e78e) aid_size_cell_vorec

0xa51b,	// (0x00056daf) main_rss_pane

0x4518,	// (0x00050dac) rss_list_single_pane_ParamLimits

0x4518,	// (0x00050dac) rss_list_single_pane

0xc923,	// (0x000591b7) rss_list_single_pane_t1

0xc931,	// (0x000591c5) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0005bea8) rss_list_single_pane_t

0xa51b,	// (0x00056daf) main_camera2_pane

0xa51b,	// (0x00056daf) main_video2_pane

0x4782,	// (0x00051016) cams_zoom_pane_cp2_ParamLimits

0x4782,	// (0x00051016) cams_zoom_pane_cp2

0x47a2,	// (0x00051036) image2_vga_pane_ParamLimits

0x47a2,	// (0x00051036) image2_vga_pane

0x47f3,	// (0x00051087) main_camera2_pane_g1_ParamLimits

0x47f3,	// (0x00051087) main_camera2_pane_g1

0x4813,	// (0x000510a7) main_camera2_pane_g2_ParamLimits

0x4813,	// (0x000510a7) main_camera2_pane_g2

0x4833,	// (0x000510c7) main_camera2_pane_g3_ParamLimits

0x4833,	// (0x000510c7) main_camera2_pane_g3

0x4853,	// (0x000510e7) main_camera2_pane_g4_ParamLimits

0x4853,	// (0x000510e7) main_camera2_pane_g4

0x4873,	// (0x00051107) main_camera2_pane_g5_ParamLimits

0x4873,	// (0x00051107) main_camera2_pane_g5

0x4893,	// (0x00051127) main_camera2_pane_g6_ParamLimits

0x4893,	// (0x00051127) main_camera2_pane_g6

0x48b3,	// (0x00051147) main_camera2_pane_g7_ParamLimits

0x48b3,	// (0x00051147) main_camera2_pane_g7

0x48d3,	// (0x00051167) main_camera2_pane_g8_ParamLimits

0x48d3,	// (0x00051167) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0005bec9) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0005bec9) main_camera2_pane_g

0x4913,	// (0x000511a7) main_camera2_pane_t1_ParamLimits

0x4913,	// (0x000511a7) main_camera2_pane_t1

0x4948,	// (0x000511dc) main_camera2_pane_t2_ParamLimits

0x4948,	// (0x000511dc) main_camera2_pane_t2

0x496e,	// (0x00051202) main_camera2_pane_t3_ParamLimits

0x496e,	// (0x00051202) main_camera2_pane_t3

0x49cc,	// (0x00051260) main_camera2_pane_t4_ParamLimits

0x49cc,	// (0x00051260) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0005bedc) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0005bedc) main_camera2_pane_t

0x4a5e,	// (0x000512f2) cams_zoom_pane_cp4_ParamLimits

0x4a5e,	// (0x000512f2) cams_zoom_pane_cp4

0x4a74,	// (0x00051308) image2_cif_pane_ParamLimits

0x4a74,	// (0x00051308) image2_cif_pane

0x4a9f,	// (0x00051333) image2_subqcif_pane_ParamLimits

0x4a9f,	// (0x00051333) image2_subqcif_pane

0x4ab9,	// (0x0005134d) main_video2_pane_g1_ParamLimits

0x4ab9,	// (0x0005134d) main_video2_pane_g1

0x4ad3,	// (0x00051367) main_video2_pane_g2_ParamLimits

0x4ad3,	// (0x00051367) main_video2_pane_g2

0x4ae9,	// (0x0005137d) main_video2_pane_g3_ParamLimits

0x4ae9,	// (0x0005137d) main_video2_pane_g3

0x4aff,	// (0x00051393) main_video2_pane_g4_ParamLimits

0x4aff,	// (0x00051393) main_video2_pane_g4

0x4b15,	// (0x000513a9) main_video2_pane_g5_ParamLimits

0x4b15,	// (0x000513a9) main_video2_pane_g5

0x4b2b,	// (0x000513bf) main_video2_pane_g6_ParamLimits

0x4b2b,	// (0x000513bf) main_video2_pane_g6

0x0005,

0xf657,	// (0x0005beeb) main_video2_pane_g_ParamLimits

0xf657,	// (0x0005beeb) main_video2_pane_g

0x4b45,	// (0x000513d9) main_video2_pane_t1_ParamLimits

0x4b45,	// (0x000513d9) main_video2_pane_t1

0x4b69,	// (0x000513fd) main_video2_pane_t2_ParamLimits

0x4b69,	// (0x000513fd) main_video2_pane_t2

0x4bb7,	// (0x0005144b) main_video2_pane_t3_ParamLimits

0x4bb7,	// (0x0005144b) main_video2_pane_t3

0x0002,

0xf664,	// (0x0005bef8) main_video2_pane_t_ParamLimits

0xf664,	// (0x0005bef8) main_video2_pane_t

0x403c,	// (0x000508d0) call_muted_g2

0x0001,

0xf606,	// (0x0005be9a) call_muted_g

0xa51b,	// (0x00056daf) main_mup2_pane

0x4bff,	// (0x00051493) main_mup2_pane_g1_ParamLimits

0x4bff,	// (0x00051493) main_mup2_pane_g1

0x4c0b,	// (0x0005149f) main_mup2_pane_g2_ParamLimits

0x4c0b,	// (0x0005149f) main_mup2_pane_g2

0x9b40,	// (0x000563d4) main_mup_pane_g13_cp1

0x9b48,	// (0x000563dc) mup_volume_pane_cp1

0x4c27,	// (0x000514bb) main_mup2_pane_g4_ParamLimits

0x4c27,	// (0x000514bb) main_mup2_pane_g4

0x4c39,	// (0x000514cd) main_mup2_pane_g5_ParamLimits

0x4c39,	// (0x000514cd) main_mup2_pane_g5

0x4c4b,	// (0x000514df) main_mup2_pane_g6_ParamLimits

0x4c4b,	// (0x000514df) main_mup2_pane_g6

0x4c5d,	// (0x000514f1) main_mup2_pane_g7_ParamLimits

0x4c5d,	// (0x000514f1) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0005beff) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0005beff) main_mup2_pane_g

0x4c75,	// (0x00051509) main_mup2_pane_t1_ParamLimits

0x4c75,	// (0x00051509) main_mup2_pane_t1

0x4c8b,	// (0x0005151f) main_mup2_pane_t2_ParamLimits

0x4c8b,	// (0x0005151f) main_mup2_pane_t2

0x4ca1,	// (0x00051535) main_mup2_pane_t3_ParamLimits

0x4ca1,	// (0x00051535) main_mup2_pane_t3

0x4cb7,	// (0x0005154b) main_mup2_pane_t4_ParamLimits

0x4cb7,	// (0x0005154b) main_mup2_pane_t4

0x4ccf,	// (0x00051563) main_mup2_pane_t5_ParamLimits

0x4ccf,	// (0x00051563) main_mup2_pane_t5

0x4ce7,	// (0x0005157b) main_mup2_pane_t6_ParamLimits

0x4ce7,	// (0x0005157b) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0005bf0e) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0005bf0e) main_mup2_pane_t

0x4d17,	// (0x000515ab) mup2_visualizer_pane_ParamLimits

0x4d17,	// (0x000515ab) mup2_visualizer_pane

0x4d45,	// (0x000515d9) mup_progress_pane_cp_ParamLimits

0x4d45,	// (0x000515d9) mup_progress_pane_cp

0x9b2b,	// (0x000563bf) mup_volume_pane_cp_ParamLimits

0x9b2b,	// (0x000563bf) mup_volume_pane_cp

0x4d59,	// (0x000515ed) mup2_visualizer_pane_g1_ParamLimits

0x4d59,	// (0x000515ed) mup2_visualizer_pane_g1

0xc992,	// (0x00059226) mup2_visualizer_pane_g2_ParamLimits

0xc992,	// (0x00059226) mup2_visualizer_pane_g2

0x4d70,	// (0x00051604) mup2_visualizer_pane_g3_ParamLimits

0x4d70,	// (0x00051604) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0005bf1b) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0005bf1b) mup2_visualizer_pane_g

0xb77f,	// (0x00058013) aid_size_cell_fmradio

0x41ee,	// (0x00050a82) aid_height_parent_landcape

0xabae,	// (0x00057442) wml_content_pane_cp

0xabb6,	// (0x0005744a) wml_tabs_pane

0xabbf,	// (0x00057453) popup_wml_miniature_window

0xabc7,	// (0x0005745b) scroll_pane_cp021

0xabdb,	// (0x0005746f) wml_content_pane_comp8

0xa51b,	// (0x00056daf) bg_popup_sub_pane_cp05

0xc9b0,	// (0x00059244) popup_wml_miniature_window_g1

0xc9b8,	// (0x0005924c) wml_miniature_view_pane

0x4d7c,	// (0x00051610) aid_size_wml_view

0x4d84,	// (0x00051618) wml_miniature_view_pane_g1

0x4d8d,	// (0x00051621) wml_miniature_view_pane_g2

0x4d96,	// (0x0005162a) wml_miniature_view_pane_g3

0x4d9e,	// (0x00051632) wml_miniature_view_pane_g4

0x4da6,	// (0x0005163a) wml_miniature_view_pane_g5

0x4dae,	// (0x00051642) wml_miniature_view_pane_g6

0x4db6,	// (0x0005164a) wml_miniature_view_pane_g7

0x4dbe,	// (0x00051652) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0005bf22) wml_miniature_view_pane_g

0xc9c0,	// (0x00059254) background_graphic_ParamLimits

0xc9c0,	// (0x00059254) background_graphic

0xc9cc,	// (0x00059260) wml_tabs_2_pane

0xc9d5,	// (0x00059269) wml_tabs_3_pane_ParamLimits

0xc9d5,	// (0x00059269) wml_tabs_3_pane

0xc9e7,	// (0x0005927b) wml_tabs_4_pane_ParamLimits

0xc9e7,	// (0x0005927b) wml_tabs_4_pane

0xc9fd,	// (0x00059291) wml_tabs_5_pane_ParamLimits

0xc9fd,	// (0x00059291) wml_tabs_5_pane

0xca17,	// (0x000592ab) wml_tabs_pane_g2_ParamLimits

0xca17,	// (0x000592ab) wml_tabs_pane_g2

0xca2b,	// (0x000592bf) wml_tabs_pane_g3_ParamLimits

0xca2b,	// (0x000592bf) wml_tabs_pane_g3

0x4dc6,	// (0x0005165a) wml_tabs_2_active_pane_ParamLimits

0x4dc6,	// (0x0005165a) wml_tabs_2_active_pane

0x4dda,	// (0x0005166e) wml_tabs_2_passive_pane_ParamLimits

0x4dda,	// (0x0005166e) wml_tabs_2_passive_pane

0x4dee,	// (0x00051682) wml_tabs_3_active_pane_cp_ParamLimits

0x4dee,	// (0x00051682) wml_tabs_3_active_pane_cp

0x4e03,	// (0x00051697) wml_tabs_3_passive_pane_ParamLimits

0x4e03,	// (0x00051697) wml_tabs_3_passive_pane

0x4e16,	// (0x000516aa) wml_tabs_3_passive_pane_cp_ParamLimits

0x4e16,	// (0x000516aa) wml_tabs_3_passive_pane_cp

0x4e2d,	// (0x000516c1) tabs_4_active_pane

0x4e35,	// (0x000516c9) tabs_4_passive_pane

0x4e3f,	// (0x000516d3) tabs_4_passive_pane_cp

0x4e47,	// (0x000516db) tabs_4_passive_pane_cp2

0x3f09,	// (0x0005079d) aid_height_text

0x35ed,	// (0x0004fe81) mup_volume_cont_pane_ParamLimits

0x35ed,	// (0x0004fe81) mup_volume_cont_pane

0x15d8,	// (0x0004de6c) aid_size_cell_pinb

0x15e2,	// (0x0004de76) aid_size_list_pinb

0x4d31,	// (0x000515c5) mup2_volume_cont_pane_ParamLimits

0x4d31,	// (0x000515c5) mup2_volume_cont_pane

0x9b17,	// (0x000563ab) mup2_volume_cont_pane_g1_ParamLimits

0x9b17,	// (0x000563ab) mup2_volume_cont_pane_g1

0x128a,	// (0x0004db1e) aid_size_cell_touch_ParamLimits

0x128a,	// (0x0004db1e) aid_size_cell_touch

0x14c7,	// (0x0004dd5b) touch_pane_ParamLimits

0x14c7,	// (0x0004dd5b) touch_pane

0x9737,	// (0x00055fcb) main_rss2_pane

0xca48,	// (0x000592dc) listscroll_rss2_pane

0xca51,	// (0x000592e5) rss2_navigation_pane

0xca59,	// (0x000592ed) list_rss2_pane

0xb25f,	// (0x00057af3) scroll_pane_cp22

0xca61,	// (0x000592f5) rss2_navigation_pane_g1

0xca6a,	// (0x000592fe) rss2_navigation_pane_g2

0xca72,	// (0x00059306) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0005bf33) rss2_navigation_pane_g

0xca7a,	// (0x0005930e) rss2_navigation_pane_t1

0x4e51,	// (0x000516e5) rss2_list_single_pane_ParamLimits

0x4e51,	// (0x000516e5) rss2_list_single_pane

0xca88,	// (0x0005931c) rss2_list_single_pane_t2

0xca96,	// (0x0005932a) rss2_list_single_pane_t3_ParamLimits

0xca96,	// (0x0005932a) rss2_list_single_pane_t3

0xcab3,	// (0x00059347) rss2_list_single_pane_t4

0x2ff1,	// (0x0004f885) smil_status_pane_g1

0xad5e,	// (0x000575f2) main_image2_pane_ParamLimits

0xad5e,	// (0x000575f2) main_image2_pane

0x48f3,	// (0x00051187) main_camera2_pane_g9_ParamLimits

0x48f3,	// (0x00051187) main_camera2_pane_g9

0x4a21,	// (0x000512b5) main_camera2_pane_t5_ParamLimits

0x4a21,	// (0x000512b5) main_camera2_pane_t5

0x9ae7,	// (0x0005637b) main_camera2_pane_t6_ParamLimits

0x9ae7,	// (0x0005637b) main_camera2_pane_t6

0x4e67,	// (0x000516fb) main_image2_pane_g1_ParamLimits

0x4e67,	// (0x000516fb) main_image2_pane_g1

0x3c44,	// (0x000504d8) smil2_video_pane_ParamLimits

0x3c44,	// (0x000504d8) smil2_video_pane

0x12c2,	// (0x0004db56) aid_zoom_text_primary_cp

0x9795,	// (0x00056029) popup_preview_fixed_window

0xab17,	// (0x000573ab) im_reading_pane_g1

0x476a,	// (0x00050ffe) cams2_bc_adjust_pane_cp_ParamLimits

0x476a,	// (0x00050ffe) cams2_bc_adjust_pane_cp

0x4a50,	// (0x000512e4) cams2_bc_adjust_pane_ParamLimits

0x4a50,	// (0x000512e4) cams2_bc_adjust_pane

0x9b50,	// (0x000563e4) cams2_bc_adjust_pane_g1

0x9b58,	// (0x000563ec) cams2_slider_pane

0x9b61,	// (0x000563f5) cams2_slider_pane_g1

0x9b6a,	// (0x000563fe) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0005bf3a) cams2_slider_pane_g

0x16ca,	// (0x0004df5e) calc_display_pane_ParamLimits

0x16f2,	// (0x0004df86) calc_paper_pane_ParamLimits

0x1715,	// (0x0004dfa9) grid_calc_pane_ParamLimits

0x9a00,	// (0x00056294) popup_clock_digital_window_t1_ParamLimits

0xb71c,	// (0x00057fb0) main_image_pane_t1

0x16ac,	// (0x0004df40) aid_size_cell_calc_ParamLimits

0x16ac,	// (0x0004df40) aid_size_cell_calc

0x4234,	// (0x00050ac8) popup_blid_sat_info2_window_ParamLimits

0x4234,	// (0x00050ac8) popup_blid_sat_info2_window

0xcac9,	// (0x0005935d) aid_size_cell_blid

0xcad1,	// (0x00059365) bg_popup_window_pane_cp07

0xcaf4,	// (0x00059388) grid_popup_blid_pane

0xcafe,	// (0x00059392) heading_pane_cp05_ParamLimits

0xcafe,	// (0x00059392) heading_pane_cp05

0xcbc8,	// (0x0005945c) cell_popup_blid_pane_ParamLimits

0xcbc8,	// (0x0005945c) cell_popup_blid_pane

0xcbec,	// (0x00059480) cell_popup_blid_pane_g1

0xcbf4,	// (0x00059488) cell_popup_blid_pane_t1

0x4d01,	// (0x00051595) mup2_indicator_pane_ParamLimits

0x4d01,	// (0x00051595) mup2_indicator_pane

0xaa1e,	// (0x000572b2) mup2_visualizer_osc_pane

0xc99e,	// (0x00059232) mup2_visualizer_spec_pane_ParamLimits

0xc99e,	// (0x00059232) mup2_visualizer_spec_pane

0x4e7d,	// (0x00051711) mup2_spec_half_pane

0x4e86,	// (0x0005171a) mup2_spec_half_pane_cp

0x4e8e,	// (0x00051722) mup2_spec_bar_pane_ParamLimits

0x4e8e,	// (0x00051722) mup2_spec_bar_pane

0xc93f,	// (0x000591d3) mup2_spec_bar_pane_g1

0xc949,	// (0x000591dd) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0005bead) mup2_spec_bar_pane_g

0x4eae,	// (0x00051742) mup2_osc_middle_pane

0xc95b,	// (0x000591ef) mup2_visualizer_osc_pane_g1

0x97bf,	// (0x00056053) popup_number_entry_window_t1_ParamLimits

0x97d2,	// (0x00056066) popup_number_entry_window_t2_ParamLimits

0x97e4,	// (0x00056078) popup_number_entry_window_t3_ParamLimits

0x1519,	// (0x0004ddad) popup_number_entry_window_t5_ParamLimits

0x1519,	// (0x0004ddad) popup_number_entry_window_t5

0xf0ca,	// (0x0005b95e) popup_number_entry_window_t_ParamLimits

0x97f6,	// (0x0005608a) text_title_cp2_ParamLimits

0x9a3f,	// (0x000562d3) aid_hotspot_pointer_text2_pane

0x9a65,	// (0x000562f9) main_viewer_pane_g9_ParamLimits

0x9a65,	// (0x000562f9) main_viewer_pane_g9

0xad8a,	// (0x0005761e) cale_month_pane_t1_ParamLimits

0xadc7,	// (0x0005765b) bg_cale_pane_ParamLimits

0xaddf,	// (0x00057673) list_cale_pane_ParamLimits

0xadf0,	// (0x00057684) listscroll_cale_day_pane_t1

0xae02,	// (0x00057696) scroll_pane_cp09_ParamLimits

0x3623,	// (0x0004feb7) main_mup_eq_pane_t1_ParamLimits

0x3623,	// (0x0004feb7) main_mup_eq_pane_t1

0x363d,	// (0x0004fed1) main_mup_eq_pane_t2_ParamLimits

0x363d,	// (0x0004fed1) main_mup_eq_pane_t2

0x3657,	// (0x0004feeb) main_mup_eq_pane_t3_ParamLimits

0x3657,	// (0x0004feeb) main_mup_eq_pane_t3

0x3673,	// (0x0004ff07) main_mup_eq_pane_t4_ParamLimits

0x3673,	// (0x0004ff07) main_mup_eq_pane_t4

0x368f,	// (0x0004ff23) main_mup_eq_pane_t5_ParamLimits

0x368f,	// (0x0004ff23) main_mup_eq_pane_t5

0x36ab,	// (0x0004ff3f) main_mup_eq_pane_t6_ParamLimits

0x36ab,	// (0x0004ff3f) main_mup_eq_pane_t6

0x36bf,	// (0x0004ff53) main_mup_eq_pane_t7_ParamLimits

0x36bf,	// (0x0004ff53) main_mup_eq_pane_t7

0x36d3,	// (0x0004ff67) main_mup_eq_pane_t8_ParamLimits

0x36d3,	// (0x0004ff67) main_mup_eq_pane_t8

0x36e7,	// (0x0004ff7b) main_mup_eq_pane_t9_ParamLimits

0x36e7,	// (0x0004ff7b) main_mup_eq_pane_t9

0x3701,	// (0x0004ff95) main_mup_eq_pane_t10_ParamLimits

0x3701,	// (0x0004ff95) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005bce9) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005bce9) main_mup_eq_pane_t

0x37b0,	// (0x00050044) mup_equalizer_pane_cp5_ParamLimits

0x37c4,	// (0x00050058) mup_equalizer_pane_cp6_ParamLimits

0x37d8,	// (0x0005006c) mup_equalizer_pane_cp7_ParamLimits

0x9737,	// (0x00055fcb) main_gallery_pane

0xc964,	// (0x000591f8) smil2_volume_pane

0xc96c,	// (0x00059200) smil_status_volume_pane_g1_ParamLimits

0xc97f,	// (0x00059213) smil_status_volume_pane_g2_ParamLimits

0x9ac5,	// (0x00056359) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0005beb2) smil_status_volume_pane_g_ParamLimits

0xcad1,	// (0x00059365) bg_popup_window_pane_cp07_ParamLimits

0xcadf,	// (0x00059373) blid_firmament_pane

0x4eb7,	// (0x0005174b) aid_size_cell_gallery_ParamLimits

0x4eb7,	// (0x0005174b) aid_size_cell_gallery

0x4ecd,	// (0x00051761) grid_gallery_pane_ParamLimits

0x4ecd,	// (0x00051761) grid_gallery_pane

0x4ee6,	// (0x0005177a) cell_gallery_pane_ParamLimits

0x4ee6,	// (0x0005177a) cell_gallery_pane

0xcc02,	// (0x00059496) bg_cell_gallery_focus_pane_ParamLimits

0xcc02,	// (0x00059496) bg_cell_gallery_focus_pane

0xcc14,	// (0x000594a8) cell_gallery_pane_g1_ParamLimits

0xcc14,	// (0x000594a8) cell_gallery_pane_g1

0x4f2f,	// (0x000517c3) cell_gallery_pane_g2_ParamLimits

0x4f2f,	// (0x000517c3) cell_gallery_pane_g2

0x4f3c,	// (0x000517d0) cell_gallery_pane_g3_ParamLimits

0x4f3c,	// (0x000517d0) cell_gallery_pane_g3

0xcc20,	// (0x000594b4) cell_gallery_pane_g4_ParamLimits

0xcc20,	// (0x000594b4) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0005bf60) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0005bf60) cell_gallery_pane_g

0xcc2c,	// (0x000594c0) bg_cell_gallery_focus_pane_g1

0xcc34,	// (0x000594c8) bg_cell_gallery_focus_pane_g2

0xcc3c,	// (0x000594d0) bg_cell_gallery_focus_pane_g3

0xcc44,	// (0x000594d8) bg_cell_gallery_focus_pane_g4

0xcc4c,	// (0x000594e0) bg_cell_gallery_focus_pane_g5

0xcc54,	// (0x000594e8) bg_cell_gallery_focus_pane_g6

0xcc5c,	// (0x000594f0) bg_cell_gallery_focus_pane_g7

0xcc64,	// (0x000594f8) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0005bf69) bg_cell_gallery_focus_pane_g

0xcc6c,	// (0x00059500) aid_firma_cardinal

0xcc80,	// (0x00059514) blid_firmament_pane_t1

0xcc97,	// (0x0005952b) blid_firmament_pane_t2

0xccae,	// (0x00059542) blid_firmament_pane_t3

0xccc5,	// (0x00059559) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0005bf7a) blid_firmament_pane_t

0xccdc,	// (0x00059570) blid_sat_info_pane

0xccec,	// (0x00059580) blid_sat_info_pane_g1

0xccec,	// (0x00059580) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0005bf83) blid_sat_info_pane_g

0xccf6,	// (0x0005958a) blid_sat_info_pane_t1

0xcd04,	// (0x00059598) smil2_volume_content_pane

0xcd0d,	// (0x000595a1) smil2_volume_pane_g1

0xcd15,	// (0x000595a9) smil2_volume_content_pane_g1

0xcd1e,	// (0x000595b2) smil2_volume_content_pane_g2

0xcd27,	// (0x000595bb) smil2_volume_content_pane_g3

0xcd30,	// (0x000595c4) smil2_volume_content_pane_g4

0xcd39,	// (0x000595cd) smil2_volume_content_pane_g5

0xcd42,	// (0x000595d6) smil2_volume_content_pane_g6

0xcd4b,	// (0x000595df) smil2_volume_content_pane_g7

0xcd54,	// (0x000595e8) smil2_volume_content_pane_g8

0xcd5d,	// (0x000595f1) smil2_volume_content_pane_g9

0xcd66,	// (0x000595fa) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0005bf88) smil2_volume_content_pane_g

0x1c74,	// (0x0004e508) cale_week_day_heading_pane_t1_ParamLimits

0x1c9e,	// (0x0004e532) cale_week_day_heading_pane_t2_ParamLimits

0x1ccd,	// (0x0004e561) cale_week_day_heading_pane_t3_ParamLimits

0x1cfc,	// (0x0004e590) cale_week_day_heading_pane_t4_ParamLimits

0x1d2b,	// (0x0004e5bf) cale_week_day_heading_pane_t5_ParamLimits

0x1d62,	// (0x0004e5f6) cale_week_day_heading_pane_t6_ParamLimits

0x1d99,	// (0x0004e62d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0005ba65) cale_week_day_heading_pane_t_ParamLimits

0xa9c3,	// (0x00057257) bg_cale_side_pane_ParamLimits

0x1dc3,	// (0x0004e657) cale_week_time_pane_t1_ParamLimits

0x1ddd,	// (0x0004e671) cale_week_time_pane_t2_ParamLimits

0x1df7,	// (0x0004e68b) cale_week_time_pane_t3_ParamLimits

0x1e11,	// (0x0004e6a5) cale_week_time_pane_t4_ParamLimits

0x1e2b,	// (0x0004e6bf) cale_week_time_pane_t5_ParamLimits

0x1e45,	// (0x0004e6d9) cale_week_time_pane_t6_ParamLimits

0x1e5f,	// (0x0004e6f3) cale_week_time_pane_t7_ParamLimits

0x1e79,	// (0x0004e70d) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0005ba74) cale_week_time_pane_t_ParamLimits

0x1e99,	// (0x0004e72d) cell_cale_week_pane_g2_ParamLimits

0xa9c3,	// (0x00057257) bg_cale_side_pane_cp01_ParamLimits

0x2df6,	// (0x0004f68a) cale_month_week_pane_t1_ParamLimits

0x2e0f,	// (0x0004f6a3) cale_month_week_pane_t2_ParamLimits

0x2e28,	// (0x0004f6bc) cale_month_week_pane_t3_ParamLimits

0x2e41,	// (0x0004f6d5) cale_month_week_pane_t4_ParamLimits

0x2e5a,	// (0x0004f6ee) cale_month_week_pane_t5_ParamLimits

0x2e73,	// (0x0004f707) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005bb49) cale_month_week_pane_t_ParamLimits

0x9980,	// (0x00056214) cell_cale_month_pane_g1_ParamLimits

0x9737,	// (0x00055fcb) main_cale_event_viewer_pane

0x9737,	// (0x00055fcb) listscroll_cale_event_viewer_pane

0xcd6f,	// (0x00059603) list_cale_ev_pane

0xcd77,	// (0x0005960b) scroll_pane_cp023

0xcd83,	// (0x00059617) field_cale_ev_pane_ParamLimits

0xcd83,	// (0x00059617) field_cale_ev_pane

0xcda1,	// (0x00059635) field_cale_ev_content_pane_ParamLimits

0xcda1,	// (0x00059635) field_cale_ev_content_pane

0xcdad,	// (0x00059641) field_cale_ev_pane_g1_ParamLimits

0xcdad,	// (0x00059641) field_cale_ev_pane_g1

0xcdb9,	// (0x0005964d) field_cale_ev_pane_g2_ParamLimits

0xcdb9,	// (0x0005964d) field_cale_ev_pane_g2

0xcdd1,	// (0x00059665) field_cale_ev_pane_g3_ParamLimits

0xcdd1,	// (0x00059665) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0005bf9d) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0005bf9d) field_cale_ev_pane_g

0xcde9,	// (0x0005967d) field_cale_ev_pane_t1_ParamLimits

0xcde9,	// (0x0005967d) field_cale_ev_pane_t1

0xad6c,	// (0x00057600) field_cale_ev_content_pane_t1_ParamLimits

0xad6c,	// (0x00057600) field_cale_ev_content_pane_t1

0xb602,	// (0x00057e96) bg_button_pane_cp01

0x19a1,	// (0x0004e235) listscroll_cale_week_pane_ParamLimits

0xa96e,	// (0x00057202) popup_toolbar_window_cp01

0xa994,	// (0x00057228) listscroll_cale_week_pane_t1_ParamLimits

0x19a1,	// (0x0004e235) listscroll_cale_day_pane_ParamLimits

0xa96e,	// (0x00057202) popup_toolbar_window_cp02

0xadf0,	// (0x00057684) listscroll_cale_day_pane_t1_ParamLimits

0x19a1,	// (0x0004e235) main_cale_month_pane_ParamLimits

0x9ab0,	// (0x00056344) popup_toolbar_window_cp03_ParamLimits

0x9ab0,	// (0x00056344) popup_toolbar_window_cp03

0x3b0c,	// (0x000503a0) main_image_pane_g2_ParamLimits

0x3b0c,	// (0x000503a0) main_image_pane_g2

0x3b1d,	// (0x000503b1) main_image_pane_g3_ParamLimits

0x3b1d,	// (0x000503b1) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005bd7b) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005bd7b) main_image_pane_g

0xb71c,	// (0x00057fb0) main_image_pane_t1_ParamLimits

0x3b2e,	// (0x000503c2) main_image_pane_t2_ParamLimits

0x3b2e,	// (0x000503c2) main_image_pane_t2

0x3b40,	// (0x000503d4) main_image_pane_t3_ParamLimits

0x3b40,	// (0x000503d4) main_image_pane_t3

0x3b68,	// (0x000503fc) main_image_pane_t4_ParamLimits

0x3b68,	// (0x000503fc) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005bd82) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005bd82) main_image_pane_t

0x3b88,	// (0x0005041c) popup_image_details_window_cp01

0x3b92,	// (0x00050426) popup_toobar_trans_pane_cp01_ParamLimits

0x3b92,	// (0x00050426) popup_toobar_trans_pane_cp01

0x4305,	// (0x00050b99) popup_image_details_window_ParamLimits

0x4305,	// (0x00050b99) popup_image_details_window

0x9a83,	// (0x00056317) popup_image_focus_window

0x4724,	// (0x00050fb8) camera2_autofocus_pane_ParamLimits

0x4724,	// (0x00050fb8) camera2_autofocus_pane

0x9737,	// (0x00055fcb) bg_popup_sub_pane_cp06

0xce00,	// (0x00059694) popup_image_focus_window_g1

0xce08,	// (0x0005969c) popup_image_focus_window_g2

0xce10,	// (0x000596a4) popup_image_focus_window_g3

0xce18,	// (0x000596ac) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0005bfa4) popup_image_focus_window_g

0xce20,	// (0x000596b4) popup_image_focus_window_t1

0xce2e,	// (0x000596c2) popup_image_focus_window_t2

0xce3e,	// (0x000596d2) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0005bfad) popup_image_focus_window_t

0xce4c,	// (0x000596e0) camera2_autofocus_pane_g1

0xad5e,	// (0x000575f2) bg_tb_trans_pane_cp01

0xce5a,	// (0x000596ee) popup_image_details_window_g1

0xce6d,	// (0x00059701) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0005bfbf) popup_image_details_window_g

0xce96,	// (0x0005972a) popup_image_details_window_t1

0xcea8,	// (0x0005973c) popup_image_details_window_t2

0xcecd,	// (0x00059761) popup_image_details_window_t3

0xcee1,	// (0x00059775) popup_image_details_window_t4

0xcefc,	// (0x00059790) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0005bfc6) popup_image_details_window_t

0xa833,	// (0x000570c7) bg_calc_paper_pane_ParamLimits

0x9737,	// (0x00055fcb) grid_highlight_pane_cp013

0x98e6,	// (0x0005617a) list_calc_pane_ParamLimits

0x98f8,	// (0x0005618c) scroll_pane_cp024

0xa847,	// (0x000570db) bg_calc_display_pane_ParamLimits

0x1813,	// (0x0004e0a7) calc_display_pane_t1_ParamLimits

0x1825,	// (0x0004e0b9) calc_display_pane_t2_ParamLimits

0x9900,	// (0x00056194) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0005b9e5) calc_display_pane_t_ParamLimits

0x18e5,	// (0x0004e179) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0005ba02) cell_calc_pane_g

0x18ee,	// (0x0004e182) cell_calc_pane_t1

0xa8a6,	// (0x0005713a) grid_highlight_pane_cp02_ParamLimits

0xa8bc,	// (0x00057150) toolbar_button_pane_cp01_ParamLimits

0xa8bc,	// (0x00057150) toolbar_button_pane_cp01

0xb761,	// (0x00057ff5) temp_image_control_pane_ParamLimits

0xb761,	// (0x00057ff5) temp_image_control_pane

0xad5e,	// (0x000575f2) main_mp3_pane

0xcf16,	// (0x000597aa) temp_image_control_pane_g1_ParamLimits

0xcf16,	// (0x000597aa) temp_image_control_pane_g1

0xcf24,	// (0x000597b8) temp_image_control_pane_g2_ParamLimits

0xcf24,	// (0x000597b8) temp_image_control_pane_g2

0xcf36,	// (0x000597ca) temp_image_control_pane_g3_ParamLimits

0xcf36,	// (0x000597ca) temp_image_control_pane_g3

0x4f79,	// (0x0005180d) temp_image_control_pane_g4_ParamLimits

0x4f79,	// (0x0005180d) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0005bfd1) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0005bfd1) temp_image_control_pane_g

0xcf16,	// (0x000597aa) main_mp3_pane_g1

0x4f8c,	// (0x00051820) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0005bfda) main_mp3_pane_g

0xcf79,	// (0x0005980d) main_mp3_pane_t1

0xaa26,	// (0x000572ba) main_camera_pane_g8_ParamLimits

0xaa26,	// (0x000572ba) main_camera_pane_g8

0x219d,	// (0x0004ea31) main_video_pane_g7_ParamLimits

0x219d,	// (0x0004ea31) main_video_pane_g7

0x9b05,	// (0x00056399) main_camera2_pane_t7_ParamLimits

0x9b05,	// (0x00056399) main_camera2_pane_t7

0xab6e,	// (0x00057402) scroll_pane_cp025_ParamLimits

0xab6e,	// (0x00057402) scroll_pane_cp025

0xab82,	// (0x00057416) scroll_pane_cp026_ParamLimits

0xab82,	// (0x00057416) scroll_pane_cp026

0xab91,	// (0x00057425) wml_content_pane_ParamLimits

0x9737,	// (0x00055fcb) main_touch_calib_pane

0x5060,	// (0x000518f4) main_touch_calib_pane_g1

0x5072,	// (0x00051906) main_touch_calib_pane_g2

0x5084,	// (0x00051918) main_touch_calib_pane_g3

0x5096,	// (0x0005192a) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0005bff8) main_touch_calib_pane_g

0x50a8,	// (0x0005193c) main_touch_calib_pane_t1

0x50c2,	// (0x00051956) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0005c001) main_touch_calib_pane_t

0xb32e,	// (0x00057bc2) mup_progress_pane_cp02

0xb363,	// (0x00057bf7) navi_pane_g1

0xb41e,	// (0x00057cb2) navi_pane_mp_t3

0xad5e,	// (0x000575f2) main_mp3_pane_ParamLimits

0x4490,	// (0x00050d24) navi_pane_ParamLimits

0xcf16,	// (0x000597aa) main_mp3_pane_g1_ParamLimits

0x4f8c,	// (0x00051820) main_mp3_pane_g2_ParamLimits

0x4f9a,	// (0x0005182e) main_mp3_pane_g3_ParamLimits

0x4f9a,	// (0x0005182e) main_mp3_pane_g3

0x4fa8,	// (0x0005183c) main_mp3_pane_g4_ParamLimits

0x4fa8,	// (0x0005183c) main_mp3_pane_g4

0xcf46,	// (0x000597da) main_mp3_pane_g5_ParamLimits

0xcf46,	// (0x000597da) main_mp3_pane_g5

0xcf54,	// (0x000597e8) main_mp3_pane_g6_ParamLimits

0xcf54,	// (0x000597e8) main_mp3_pane_g6

0xcf61,	// (0x000597f5) main_mp3_pane_g7_ParamLimits

0xcf61,	// (0x000597f5) main_mp3_pane_g7

0xcf6d,	// (0x00059801) main_mp3_pane_g8_ParamLimits

0xcf6d,	// (0x00059801) main_mp3_pane_g8

0xf746,	// (0x0005bfda) main_mp3_pane_g_ParamLimits

0x4fb4,	// (0x00051848) main_mp3_pane_t2

0x4fc2,	// (0x00051856) main_mp3_pane_t3

0xcf87,	// (0x0005981b) main_mp3_pane_t4

0xcf95,	// (0x00059829) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0005bfeb) main_mp3_pane_t

0xcfa3,	// (0x00059837) mup_progress_pane_cp01

0x12c2,	// (0x0004db56) aid_zoom_text_secondary2

0xcd6f,	// (0x00059603) list_cale_ev2_pane

0xcd77,	// (0x0005960b) scroll_pane_cp023_ParamLimits

0x5118,	// (0x000519ac) field_cale_ev2_pane_ParamLimits

0x5118,	// (0x000519ac) field_cale_ev2_pane

0x5139,	// (0x000519cd) field_cale_ev2_pane_g1_ParamLimits

0x5139,	// (0x000519cd) field_cale_ev2_pane_g1

0x5145,	// (0x000519d9) field_cale_ev2_pane_g2_ParamLimits

0x5145,	// (0x000519d9) field_cale_ev2_pane_g2

0x515d,	// (0x000519f1) field_cale_ev2_pane_g3_ParamLimits

0x515d,	// (0x000519f1) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0005c00c) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0005c00c) field_cale_ev2_pane_g

0x5181,	// (0x00051a15) field_cale_ev2_pane_t1_ParamLimits

0x5181,	// (0x00051a15) field_cale_ev2_pane_t1

0x5198,	// (0x00051a2c) field_cale_ev2_pane_t2_ParamLimits

0x5198,	// (0x00051a2c) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0005c015) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0005c015) field_cale_ev2_pane_t

0x39c0,	// (0x00050254) main_postcard_pane_g5_ParamLimits

0x39c0,	// (0x00050254) main_postcard_pane_g5

0x39d6,	// (0x0005026a) main_postcard_pane_g6_ParamLimits

0x39d6,	// (0x0005026a) main_postcard_pane_g6

0x1f63,	// (0x0004e7f7) camera2_autofocus_pane_cp_ParamLimits

0x1f63,	// (0x0004e7f7) camera2_autofocus_pane_cp

0xad5e,	// (0x000575f2) main_mup3_pane

0x51f1,	// (0x00051a85) main_mup3_pane_g1_ParamLimits

0x51f1,	// (0x00051a85) main_mup3_pane_g1

0x5213,	// (0x00051aa7) main_mup3_pane_g2_ParamLimits

0x5213,	// (0x00051aa7) main_mup3_pane_g2

0x5293,	// (0x00051b27) main_mup3_pane_g3_ParamLimits

0x5293,	// (0x00051b27) main_mup3_pane_g3

0x52d9,	// (0x00051b6d) main_mup3_pane_g4_ParamLimits

0x52d9,	// (0x00051b6d) main_mup3_pane_g4

0x531f,	// (0x00051bb3) main_mup3_pane_g5_ParamLimits

0x531f,	// (0x00051bb3) main_mup3_pane_g5

0x5365,	// (0x00051bf9) main_mup3_pane_g6_ParamLimits

0x5365,	// (0x00051bf9) main_mup3_pane_g6

0xcfab,	// (0x0005983f) main_mup3_pane_g7_ParamLimits

0xcfab,	// (0x0005983f) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0005c025) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0005c025) main_mup3_pane_g

0x53e3,	// (0x00051c77) main_mup3_pane_t1_ParamLimits

0x53e3,	// (0x00051c77) main_mup3_pane_t1

0x5457,	// (0x00051ceb) main_mup3_pane_t2_ParamLimits

0x5457,	// (0x00051ceb) main_mup3_pane_t2

0x552b,	// (0x00051dbf) main_mup3_pane_t4_ParamLimits

0x552b,	// (0x00051dbf) main_mup3_pane_t4

0x5581,	// (0x00051e15) main_mup3_pane_t5_ParamLimits

0x5581,	// (0x00051e15) main_mup3_pane_t5

0x563d,	// (0x00051ed1) main_mup3_pane_t6_ParamLimits

0x563d,	// (0x00051ed1) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0005c036) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0005c036) main_mup3_pane_t

0x56f5,	// (0x00051f89) mup3_progress_pane_ParamLimits

0x56f5,	// (0x00051f89) mup3_progress_pane

0x5781,	// (0x00052015) popup_mup3_control_window_ParamLimits

0x5781,	// (0x00052015) popup_mup3_control_window

0xcfb9,	// (0x0005984d) popup_mup3_text_window

0x57b3,	// (0x00052047) mup3_progress_pane_t1

0x57d2,	// (0x00052066) mup3_progress_pane_t2

0xcfc1,	// (0x00059855) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0005c043) mup3_progress_pane_t

0xcfde,	// (0x00059872) mup_progress_pane_cp03

0x9737,	// (0x00055fcb) bg_tb_trans_pane_cp04

0x57f1,	// (0x00052085) mup3_volume_pane

0x57f9,	// (0x0005208d) popup_mup3_control_window_g1

0x5802,	// (0x00052096) mup3_volume_pane_g1

0x580b,	// (0x0005209f) mup3_volume_pane_g2

0x5814,	// (0x000520a8) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0005c04a) mup3_volume_pane_g

0x9737,	// (0x00055fcb) bg_tb_trans_pane_cp03

0xcfee,	// (0x00059882) popup_mup3_text_window_g1

0xcff6,	// (0x0005988a) popup_mup3_text_window_t1

0xa88f,	// (0x00057123) list_calc_item_pane_g1_ParamLimits

0xca3f,	// (0x000592d3) mup_volume_pane_cp_g1

0x50dc,	// (0x00051970) main_touch_calib_pane_t3

0x50f0,	// (0x00051984) main_touch_calib_pane_t4

0x5104,	// (0x00051998) main_touch_calib_pane_t5

0x9741,	// (0x00055fd5) aid_cell_size_toolbar2

0x9749,	// (0x00055fdd) aid_popup3_width_pane

0x12ba,	// (0x0004db4e) aid_zoom_text_msg_primary

0x1f42,	// (0x0004e7d6) vorec_t7

0xa853,	// (0x000570e7) bg_calc_paper_pane_g1_ParamLimits

0xa85f,	// (0x000570f3) bg_calc_paper_pane_g2_ParamLimits

0xa86b,	// (0x000570ff) bg_calc_paper_pane_g3_ParamLimits

0xa877,	// (0x0005710b) bg_calc_paper_pane_g4_ParamLimits

0xa883,	// (0x00057117) bg_calc_paper_pane_g5_ParamLimits

0x186e,	// (0x0004e102) bg_calc_paper_pane_g6_ParamLimits

0x187d,	// (0x0004e111) bg_calc_paper_pane_g7_ParamLimits

0x188c,	// (0x0004e120) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0005b9ec) bg_calc_paper_pane_g_ParamLimits

0x189f,	// (0x0004e133) calc_bg_paper_pane_g9_ParamLimits

0x20af,	// (0x0004e943) image_qvga_pane_ParamLimits

0x20af,	// (0x0004e943) image_qvga_pane

0xa776,	// (0x0005700a) bg_popup_sub_pane_cp04_ParamLimits

0xb698,	// (0x00057f2c) popup_mup_playback_window_g1_ParamLimits

0xb6a4,	// (0x00057f38) popup_mup_playback_window_t1_ParamLimits

0xb6b9,	// (0x00057f4d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005bd76) popup_mup_playback_window_t_ParamLimits

0x4c1b,	// (0x000514af) main_mup2_pane_g3_ParamLimits

0x4c1b,	// (0x000514af) main_mup2_pane_g3

0x23ac,	// (0x0004ec40) popup_toolbar_window_cp04

0xbaae,	// (0x00058342) popup_call2_audio_second_window_g3_ParamLimits

0xbaae,	// (0x00058342) popup_call2_audio_second_window_g3

0xbeb8,	// (0x0005874c) popup_call2_audio_first_window_g4_ParamLimits

0xbeb8,	// (0x0005874c) popup_call2_audio_first_window_g4

0xc537,	// (0x00058dcb) popup_call2_audio_in_window_g4_ParamLimits

0xc537,	// (0x00058dcb) popup_call2_audio_in_window_g4

0x3aee,	// (0x00050382) aid_area_sk_bg_cut_ParamLimits

0x3aee,	// (0x00050382) aid_area_sk_bg_cut

0xb6ce,	// (0x00057f62) aid_area_sk_bg_cut_2_ParamLimits

0xb6ce,	// (0x00057f62) aid_area_sk_bg_cut_2

0x4f1f,	// (0x000517b3) aid_placing_details_win

0x4f27,	// (0x000517bb) aid_placing_details_win_2

0xce4c,	// (0x000596e0) camera2_autofocus_pane_g1_ParamLimits

0x1460,	// (0x0004dcf4) popup_fixed_preview_cale_window_ParamLimits

0x1460,	// (0x0004dcf4) popup_fixed_preview_cale_window

0xb49c,	// (0x00057d30) navi_slider_pane_g3

0xb4a5,	// (0x00057d39) navi_slider_pane_g4

0xb4ae,	// (0x00057d42) navi_slider_pane_g5

0xb49c,	// (0x00057d30) navi_slider_pane_g6

0x9a26,	// (0x000562ba) navi_slider_pane_g7

0xb5cf,	// (0x00057e63) mup_scale_pane_g3

0xb5d8,	// (0x00057e6c) mup_scale_pane_g4

0xb5e1,	// (0x00057e75) mup_scale_pane_g5

0x37ec,	// (0x00050080) mup_scale_pane_g6

0x37f5,	// (0x00050089) mup_scale_pane_g7

0xb49c,	// (0x00057d30) cams2_slider_pane_g3

0xcac1,	// (0x00059355) cams2_slider_pane_g4

0x9b73,	// (0x00056407) cams2_slider_pane_g5

0xb49c,	// (0x00057d30) cams2_slider_pane_g6

0x9b7b,	// (0x0005640f) cams2_slider_pane_g7

0xccec,	// (0x00059580) camera2_autofocus_pane_cp_g1

0xc8d8,	// (0x0005916c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d8,	// (0x0005916c) bg_popup_preview_window_pane_cp02

0xd004,	// (0x00059898) list_fp_cale_pane_ParamLimits

0xd004,	// (0x00059898) list_fp_cale_pane

0xd010,	// (0x000598a4) popup_fixed_preview_cale_window_t1_ParamLimits

0xd010,	// (0x000598a4) popup_fixed_preview_cale_window_t1

0x581d,	// (0x000520b1) popup_fixed_preview_cale_window_t2_ParamLimits

0x581d,	// (0x000520b1) popup_fixed_preview_cale_window_t2

0x5832,	// (0x000520c6) popup_fixed_preview_cale_window_t3_ParamLimits

0x5832,	// (0x000520c6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0005c051) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0005c051) popup_fixed_preview_cale_window_t

0x5847,	// (0x000520db) list_single_fp_cale_pane_ParamLimits

0x5847,	// (0x000520db) list_single_fp_cale_pane

0xd02e,	// (0x000598c2) list_single_fp_cale_pane_g1_ParamLimits

0xd02e,	// (0x000598c2) list_single_fp_cale_pane_g1

0xd03a,	// (0x000598ce) list_single_fp_cale_pane_g2_ParamLimits

0xd03a,	// (0x000598ce) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0005c058) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0005c058) list_single_fp_cale_pane_g

0xd053,	// (0x000598e7) list_single_fp_cale_pane_t1_ParamLimits

0xd053,	// (0x000598e7) list_single_fp_cale_pane_t1

0xd065,	// (0x000598f9) list_single_fp_cale_pane_t2_ParamLimits

0xd065,	// (0x000598f9) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0005c05f) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0005c05f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9737,	// (0x00055fcb) main_dialer_pane

0x585d,	// (0x000520f1) aid_cell_size_keypad

0x5867,	// (0x000520fb) dialer_ne_pane

0x586f,	// (0x00052103) grid_dialer_command_1_pane

0x5877,	// (0x0005210b) grid_dialer_command_2_pane

0x587f,	// (0x00052113) grid_dialer_keypad_pane

0x5891,	// (0x00052125) bg_popup_call_pane_cp06_ParamLimits

0x5891,	// (0x00052125) bg_popup_call_pane_cp06

0x589d,	// (0x00052131) dialer_ne_clear_pane_ParamLimits

0x589d,	// (0x00052131) dialer_ne_clear_pane

0xd098,	// (0x0005992c) dialer_ne_pane_g1

0xd0a0,	// (0x00059934) dialer_ne_pane_t1_ParamLimits

0xd0a0,	// (0x00059934) dialer_ne_pane_t1

0x58a9,	// (0x0005213d) dialer_ne_pane_t2_ParamLimits

0x58a9,	// (0x0005213d) dialer_ne_pane_t2

0x58d3,	// (0x00052167) dialer_ne_pane_t3_ParamLimits

0x58d3,	// (0x00052167) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0005c064) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0005c064) dialer_ne_pane_t

0x5903,	// (0x00052197) dialer_ne_pane_t3_copy1_ParamLimits

0x5903,	// (0x00052197) dialer_ne_pane_t3_copy1

0x5932,	// (0x000521c6) cell_dialer_keypad_pane_ParamLimits

0x5932,	// (0x000521c6) cell_dialer_keypad_pane

0x5949,	// (0x000521dd) cell_dialer_command_1_pane_ParamLimits

0x5949,	// (0x000521dd) cell_dialer_command_1_pane

0x595f,	// (0x000521f3) cell_dialer_command_2_pane_ParamLimits

0x595f,	// (0x000521f3) cell_dialer_command_2_pane

0xd0b2,	// (0x00059946) bg_button_pane_cp02_ParamLimits

0xd0b2,	// (0x00059946) bg_button_pane_cp02

0x596e,	// (0x00052202) cell_dialer_keypad_pane_g1_ParamLimits

0x596e,	// (0x00052202) cell_dialer_keypad_pane_g1

0xd0b2,	// (0x00059946) bg_button_pane_cp03_ParamLimits

0xd0b2,	// (0x00059946) bg_button_pane_cp03

0x5982,	// (0x00052216) cell_dialer_command_1_pane_g1_ParamLimits

0x5982,	// (0x00052216) cell_dialer_command_1_pane_g1

0xd0be,	// (0x00059952) bg_button_pane_cp04

0x5996,	// (0x0005222a) cell_dialer_command_2_pane_g1

0xaa1e,	// (0x000572b2) bg_button_pane_cp06

0xd0c6,	// (0x0005995a) dialer_ne_clear_pane_g1

0xb36f,	// (0x00057c03) navi_pane_g2

0xb39d,	// (0x00057c31) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005bc79) navi_pane_g

0xb42c,	// (0x00057cc0) navi_pane_mv_g2

0xb453,	// (0x00057ce7) navi_pane_mv_g5

0x33ba,	// (0x0004fc4e) navi_pane_mv_t1

0xa847,	// (0x000570db) main_clock2_pane

0x59e4,	// (0x00052278) main_clock2_list_pane_ParamLimits

0x59e4,	// (0x00052278) main_clock2_list_pane

0x5a1e,	// (0x000522b2) main_clock2_pane_t1_ParamLimits

0x5a1e,	// (0x000522b2) main_clock2_pane_t1

0x5a5c,	// (0x000522f0) main_clock2_pane_t2_ParamLimits

0x5a5c,	// (0x000522f0) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0005c070) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0005c070) main_clock2_pane_t

0x5afa,	// (0x0005238e) popup_clock_analogue_window_cp03_ParamLimits

0x5afa,	// (0x0005238e) popup_clock_analogue_window_cp03

0x5b1f,	// (0x000523b3) popup_clock_digital_window_cp02_ParamLimits

0x5b1f,	// (0x000523b3) popup_clock_digital_window_cp02

0x5b90,	// (0x00052424) main_clock2_list_single_pane_ParamLimits

0x5b90,	// (0x00052424) main_clock2_list_single_pane

0xaa1e,	// (0x000572b2) list_highlight_pane_cp05

0xd100,	// (0x00059994) main_clock2_list_single_pane_t1

0x23ac,	// (0x0004ec40) popup_toolbar_window_cp04_ParamLimits

0x4f49,	// (0x000517dd) camera2_autofocus_pane_g2_ParamLimits

0x4f49,	// (0x000517dd) camera2_autofocus_pane_g2

0x4f55,	// (0x000517e9) camera2_autofocus_pane_g3_ParamLimits

0x4f55,	// (0x000517e9) camera2_autofocus_pane_g3

0x4f61,	// (0x000517f5) camera2_autofocus_pane_g4_ParamLimits

0x4f61,	// (0x000517f5) camera2_autofocus_pane_g4

0x4f6d,	// (0x00051801) camera2_autofocus_pane_g5_ParamLimits

0x4f6d,	// (0x00051801) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0005bfb4) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0005bfb4) camera2_autofocus_pane_g

0x51ad,	// (0x00051a41) camera2_autofocus_pane_cp_g2

0x51b5,	// (0x00051a49) camera2_autofocus_pane_cp_g3

0x51bd,	// (0x00051a51) camera2_autofocus_pane_cp_g4

0x51c5,	// (0x00051a59) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0005c01a) camera2_autofocus_pane_cp_g

0x5889,	// (0x0005211d) popup_dialer_spcha_window

0x9737,	// (0x00055fcb) bg_popup_sub_pane_cp07

0xd10e,	// (0x000599a2) list_spcha_pane

0xd116,	// (0x000599aa) list_single_spcha_pane_ParamLimits

0xd116,	// (0x000599aa) list_single_spcha_pane

0x9737,	// (0x00055fcb) list_highlight_pane_cp06

0xd127,	// (0x000599bb) list_single_spcha_pane_t1

0xc2e1,	// (0x00058b75) popup_call2_audio_out_window_g4_ParamLimits

0xc2e1,	// (0x00058b75) popup_call2_audio_out_window_g4

0x9737,	// (0x00055fcb) main_imed2_pane

0x9a8b,	// (0x0005631f) popup_imed_adjust2_window

0x431d,	// (0x00050bb1) popup_imed_trans_window_ParamLimits

0x431d,	// (0x00050bb1) popup_imed_trans_window

0xcb2a,	// (0x000593be) popup_blid_sat_info2_window_t1

0xcb38,	// (0x000593cc) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0005bf49) popup_blid_sat_info2_window_t

0x5c39,	// (0x000524cd) aid_size_cell_colour_35

0x5c59,	// (0x000524ed) aid_size_cell_colour_112

0x5c79,	// (0x0005250d) aid_size_cell_effect

0xc8e4,	// (0x00059178) bg_tb_trans_pane_cp02

0xaef9,	// (0x0005778d) heading_imed_pane

0x5c99,	// (0x0005252d) listscroll_imed_pane

0xd135,	// (0x000599c9) heading_imed_pane_g1

0xd13d,	// (0x000599d1) heading_imed_pane_t1

0xd14b,	// (0x000599df) grid_imed_colour_35_pane_ParamLimits

0xd14b,	// (0x000599df) grid_imed_colour_35_pane

0x5ca5,	// (0x00052539) grid_imed_effect_pane

0xd163,	// (0x000599f7) list_imed_aspect_pane

0x5cbb,	// (0x0005254f) scroll_pane_cp027_ParamLimits

0x5cbb,	// (0x0005254f) scroll_pane_cp027

0x5ccc,	// (0x00052560) cell_imed_effect_pane_ParamLimits

0x5ccc,	// (0x00052560) cell_imed_effect_pane

0xd16b,	// (0x000599ff) cell_imed_colour_pane_ParamLimits

0xd16b,	// (0x000599ff) cell_imed_colour_pane

0xd1ad,	// (0x00059a41) cell_imed_colour_pane_g1_ParamLimits

0xd1ad,	// (0x00059a41) cell_imed_colour_pane_g1

0xd1be,	// (0x00059a52) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1be,	// (0x00059a52) hgihlgiht_grid_pane_cp016

0x5cf3,	// (0x00052587) cell_imed_effect_pane_g1

0x5cfb,	// (0x0005258f) grid_highlight_pane_cp017

0xd1cf,	// (0x00059a63) list_imed_single_pane_ParamLimits

0xd1cf,	// (0x00059a63) list_imed_single_pane

0x9737,	// (0x00055fcb) list_highlight_pane_cp07

0xd1e4,	// (0x00059a78) list_imed_aspect_pane_comp1_t1

0xc8e4,	// (0x00059178) bg_tb_trans_pane_cp05

0xd206,	// (0x00059a9a) popup_imed_adjust2_window_g1

0xd22d,	// (0x00059ac1) popup_imed_adjust2_window_t1

0xd245,	// (0x00059ad9) slider_imed_adjust_pane

0xd259,	// (0x00059aed) slider_imed_adjust_pane_g1

0xd269,	// (0x00059afd) slider_imed_adjust_pane_g2

0xd279,	// (0x00059b0d) slider_imed_adjust_pane_g3

0xd28a,	// (0x00059b1e) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0005c08d) slider_imed_adjust_pane_g

0x5d04,	// (0x00052598) aid_size_cell_clipart2

0x5d10,	// (0x000525a4) grid_imed_clipart_pane

0xd29b,	// (0x00059b2f) scroll_pane_cp031

0x5d1a,	// (0x000525ae) cell_imed_clipart_pane_ParamLimits

0x5d1a,	// (0x000525ae) cell_imed_clipart_pane

0x5d3c,	// (0x000525d0) cell_imed_clipart_pane_g1

0x9737,	// (0x00055fcb) grid_highlight_pane_cp014

0x59f9,	// (0x0005228d) main_clock2_pane_g1_ParamLimits

0x59f9,	// (0x0005228d) main_clock2_pane_g1

0x5b3b,	// (0x000523cf) aid_call2_pane_cp10

0x5b4d,	// (0x000523e1) aid_call_pane_cp10

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g1

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g2

0x5b5f,	// (0x000523f3) popup_clock_analogue_window_cp10_g3

0x5b5f,	// (0x000523f3) popup_clock_analogue_window_cp10_g4

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0005c07b) popup_clock_analogue_window_cp10_g

0x5b71,	// (0x00052405) popup_clock_analogue_window_cp10_t1

0x5ba2,	// (0x00052436) clock_digital_number_pane_cp10_ParamLimits

0x5ba2,	// (0x00052436) clock_digital_number_pane_cp10

0x5bba,	// (0x0005244e) clock_digital_number_pane_cp11_ParamLimits

0x5bba,	// (0x0005244e) clock_digital_number_pane_cp11

0x5bd2,	// (0x00052466) clock_digital_number_pane_cp12_ParamLimits

0x5bd2,	// (0x00052466) clock_digital_number_pane_cp12

0x5bea,	// (0x0005247e) clock_digital_number_pane_cp13_ParamLimits

0x5bea,	// (0x0005247e) clock_digital_number_pane_cp13

0x5c02,	// (0x00052496) clock_digital_separator_pane_cp10_ParamLimits

0x5c02,	// (0x00052496) clock_digital_separator_pane_cp10

0x5c1a,	// (0x000524ae) popup_clock_digital_window_cp02_t1_ParamLimits

0x5c1a,	// (0x000524ae) popup_clock_digital_window_cp02_t1

0xa76e,	// (0x00057002) clock_digital_number_pane_cp10_g1

0xa76e,	// (0x00057002) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0005c096) clock_digital_number_pane_cp10_g

0xa76e,	// (0x00057002) clock_digital_separator_pane_cp10_g1

0xa76e,	// (0x00057002) clock_digital_separator_pane_g2_cp10

0xb45b,	// (0x00057cef) navi_pane_vded_g4

0xb464,	// (0x00057cf8) navi_pane_vded_g5

0xb46d,	// (0x00057d01) navi_pane_vded_t1

0x9737,	// (0x00055fcb) main_vded_pane

0x5d45,	// (0x000525d9) main_vded_pane_g1

0x5d4f,	// (0x000525e3) main_vded_pane_g2

0x5d59,	// (0x000525ed) main_vded_pane_g3

0x0002,

0xf807,	// (0x0005c09b) main_vded_pane_g

0x5d63,	// (0x000525f7) main_vded_pane_t1

0x5d71,	// (0x00052605) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0005c0a2) main_vded_pane_t

0x5d7f,	// (0x00052613) vded_slider_pane

0x5d87,	// (0x0005261b) vded_video_pane

0xd2a3,	// (0x00059b37) vded_video_pane_g1

0x5d8f,	// (0x00052623) vded_video_pane_g2

0xccec,	// (0x00059580) vded_video_pane_g3

0x0002,

0xf813,	// (0x0005c0a7) vded_video_pane_g

0xd2ad,	// (0x00059b41) vded_slider_pane_g1

0xca3f,	// (0x000592d3) vded_slider_pane_g2

0xd2b6,	// (0x00059b4a) vded_slider_pane_g3

0xd2bf,	// (0x00059b53) vded_slider_pane_g4

0xd2c8,	// (0x00059b5c) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0005c0ae) vded_slider_pane_g

0x5769,	// (0x00051ffd) mup3_rocker_pane_ParamLimits

0x5769,	// (0x00051ffd) mup3_rocker_pane

0x5d98,	// (0x0005262c) mup3_control_keys_pane_g1

0x5da0,	// (0x00052634) mup3_control_keys_pane_g2

0x5da8,	// (0x0005263c) mup3_control_keys_pane_g3

0x5db0,	// (0x00052644) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0005c0b9) mup3_control_keys_pane_g

0x1497,	// (0x0004dd2b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1497,	// (0x0004dd2b) popup_toolbar2_fixed_window_cp01

0x579d,	// (0x00052031) popup_toolbar2_fixed_window_cp02_ParamLimits

0x579d,	// (0x00052031) popup_toolbar2_fixed_window_cp02

0xbc20,	// (0x000584b4) popup_call2_audio_second_window_t4_ParamLimits

0xbc20,	// (0x000584b4) popup_call2_audio_second_window_t4

0xc14e,	// (0x000589e2) popup_call2_audio_first_window_t6_ParamLimits

0xc14e,	// (0x000589e2) popup_call2_audio_first_window_t6

0xc3e4,	// (0x00058c78) popup_call2_audio_out_window_t6_ParamLimits

0xc3e4,	// (0x00058c78) popup_call2_audio_out_window_t6

0x9737,	// (0x00055fcb) main_vitu_pane

0x5dc0,	// (0x00052654) aid_size_cell_itu_ParamLimits

0x5dc0,	// (0x00052654) aid_size_cell_itu

0xad5e,	// (0x000575f2) bg_popup_window_pane_cp08_ParamLimits

0xad5e,	// (0x000575f2) bg_popup_window_pane_cp08

0x5dd6,	// (0x0005266a) field_vitu_entry_pane_ParamLimits

0x5dd6,	// (0x0005266a) field_vitu_entry_pane

0x5dee,	// (0x00052682) grid_vitu_function_pane_ParamLimits

0x5dee,	// (0x00052682) grid_vitu_function_pane

0x5e09,	// (0x0005269d) grid_vitu_itu_pane_ParamLimits

0x5e09,	// (0x0005269d) grid_vitu_itu_pane

0x5e27,	// (0x000526bb) cell_vitu_itu_pane_ParamLimits

0x5e27,	// (0x000526bb) cell_vitu_itu_pane

0x5e49,	// (0x000526dd) cell_vitu_function_pane_ParamLimits

0x5e49,	// (0x000526dd) cell_vitu_function_pane

0xad5e,	// (0x000575f2) bg_popup_sub_pane_cp08_ParamLimits

0xad5e,	// (0x000575f2) bg_popup_sub_pane_cp08

0x5e62,	// (0x000526f6) field_vitu_entry_pane_t1_ParamLimits

0x5e62,	// (0x000526f6) field_vitu_entry_pane_t1

0xd2e9,	// (0x00059b7d) field_vitu_entry_pane_t2_ParamLimits

0xd2e9,	// (0x00059b7d) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0005c0c7) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0005c0c7) field_vitu_entry_pane_t

0xd306,	// (0x00059b9a) bg_button_pane_cp05_ParamLimits

0xd306,	// (0x00059b9a) bg_button_pane_cp05

0x5e81,	// (0x00052715) cell_vitu_itu_pane_g1

0x5e99,	// (0x0005272d) cell_vitu_itu_pane_t1_ParamLimits

0x5e99,	// (0x0005272d) cell_vitu_itu_pane_t1

0x5eab,	// (0x0005273f) cell_vitu_itu_pane_t2_ParamLimits

0x5eab,	// (0x0005273f) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0005c0cc) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0005c0cc) cell_vitu_itu_pane_t

0xd314,	// (0x00059ba8) bg_button_pane_cp07

0x5ee0,	// (0x00052774) cell_vitu_function_pane_g1

0x98de,	// (0x00056172) main_calc_pane_g1

0x12ae,	// (0x0004db42) aid_visual_content_pane

0x9737,	// (0x00055fcb) main_vradio_pane

0x5ee9,	// (0x0005277d) main_vradio_pane_g1_ParamLimits

0x5ee9,	// (0x0005277d) main_vradio_pane_g1

0xd31e,	// (0x00059bb2) main_vradio_pane_g2_ParamLimits

0xd31e,	// (0x00059bb2) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0005c0d3) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0005c0d3) main_vradio_pane_g

0x5f02,	// (0x00052796) main_vradio_pane_t1_ParamLimits

0x5f02,	// (0x00052796) main_vradio_pane_t1

0x5f17,	// (0x000527ab) main_vradio_pane_t2_ParamLimits

0x5f17,	// (0x000527ab) main_vradio_pane_t2

0xd32b,	// (0x00059bbf) main_vradio_pane_t3_ParamLimits

0xd32b,	// (0x00059bbf) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0005c0d8) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0005c0d8) main_vradio_pane_t

0x5f2c,	// (0x000527c0) vradio_rocker_control_pane_ParamLimits

0x5f2c,	// (0x000527c0) vradio_rocker_control_pane

0x5f3e,	// (0x000527d2) vradio_station_info_pane_ParamLimits

0x5f3e,	// (0x000527d2) vradio_station_info_pane

0xd33f,	// (0x00059bd3) vradio_frequency_info_pane_ParamLimits

0xd33f,	// (0x00059bd3) vradio_frequency_info_pane

0xccec,	// (0x00059580) vradio_station_info_pane_g1

0xd34e,	// (0x00059be2) vradio_station_info_pane_t1_ParamLimits

0xd34e,	// (0x00059be2) vradio_station_info_pane_t1

0xd370,	// (0x00059c04) vradio_station_info_pane_t2_ParamLimits

0xd370,	// (0x00059c04) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0005c0df) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0005c0df) vradio_station_info_pane_t

0xd382,	// (0x00059c16) vradio_tuning_pane

0xd38a,	// (0x00059c1e) vradio_rocker_control_pane_g1

0xd392,	// (0x00059c26) vradio_rocker_control_pane_g2

0xd39a,	// (0x00059c2e) vradio_rocker_control_pane_g3

0xd3a2,	// (0x00059c36) vradio_rocker_control_pane_g4

0xd3aa,	// (0x00059c3e) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0005c0e4) vradio_rocker_control_pane_g

0x5f50,	// (0x000527e4) vradio_frequency_info_pane_g1

0xd3b2,	// (0x00059c46) vradio_frequency_info_pane_t1_ParamLimits

0xd3b2,	// (0x00059c46) vradio_frequency_info_pane_t1

0x5f5a,	// (0x000527ee) vradio_tuning_pane_g1

0x5f65,	// (0x000527f9) vradio_tuning_pane_t1

0x975d,	// (0x00055ff1) area_side_right_pane_ParamLimits

0x975d,	// (0x00055ff1) area_side_right_pane

0xc89f,	// (0x00059133) status_small_pane_g1

0xc8a7,	// (0x0005913b) status_small_pane_g2

0xc8b0,	// (0x00059144) status_small_pane_g3

0xc8b9,	// (0x0005914d) status_small_pane_g4

0x0003,

0xf60b,	// (0x0005be9f) status_small_pane_g

0xc8c2,	// (0x00059156) status_small_pane_t1

0x9737,	// (0x00055fcb) main_video3_pane

0xd3c6,	// (0x00059c5a) cams_zoom_vslider_pane

0xd3ce,	// (0x00059c62) image3_wide_pane_ParamLimits

0xd3ce,	// (0x00059c62) image3_wide_pane

0xd3e8,	// (0x00059c7c) image3_wide_small_pane

0xd3f4,	// (0x00059c88) main_video3_pane_g1_ParamLimits

0xd3f4,	// (0x00059c88) main_video3_pane_g1

0xd410,	// (0x00059ca4) main_video3_pane_g2_ParamLimits

0xd410,	// (0x00059ca4) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0005c0ef) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0005c0ef) main_video3_pane_g

0xd42c,	// (0x00059cc0) main_video3_pane_t1_ParamLimits

0xd42c,	// (0x00059cc0) main_video3_pane_t1

0xd457,	// (0x00059ceb) main_video3_pane_t2_ParamLimits

0xd457,	// (0x00059ceb) main_video3_pane_t2

0xd482,	// (0x00059d16) main_video3_pane_t3_ParamLimits

0xd482,	// (0x00059d16) main_video3_pane_t3

0x0002,

0xf860,	// (0x0005c0f4) main_video3_pane_t_ParamLimits

0xf860,	// (0x0005c0f4) main_video3_pane_t

0xd4af,	// (0x00059d43) cams_zoom_vslider_pane_g1

0xd4b8,	// (0x00059d4c) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0005c0fb) cams_zoom_vslider_pane_g

0xd4c0,	// (0x00059d54) small_slider_vertical_pane

0xccec,	// (0x00059580) small_slider_vertical_pane_g1

0xccec,	// (0x00059580) small_slider_vertical_pane_g2

0xd4c8,	// (0x00059d5c) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0005c100) small_slider_vertical_pane_g

0x9737,	// (0x00055fcb) main_hwr_training_pane

0xd4d1,	// (0x00059d65) hwr_training_instruct_pane_ParamLimits

0xd4d1,	// (0x00059d65) hwr_training_instruct_pane

0x5f74,	// (0x00052808) hwr_training_navi_pane_ParamLimits

0x5f74,	// (0x00052808) hwr_training_navi_pane

0x5f93,	// (0x00052827) hwr_training_write_pane_ParamLimits

0x5f93,	// (0x00052827) hwr_training_write_pane

0x9737,	// (0x00055fcb) bg_frame_shadow_pane

0xd508,	// (0x00059d9c) hwr_training_write_pane_g1

0xd510,	// (0x00059da4) hwr_training_write_pane_g2

0xd518,	// (0x00059dac) hwr_training_write_pane_g3

0xd520,	// (0x00059db4) hwr_training_write_pane_g4

0xd528,	// (0x00059dbc) hwr_training_write_pane_g5

0xd530,	// (0x00059dc4) hwr_training_write_pane_g6

0xd538,	// (0x00059dcc) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0005c107) hwr_training_write_pane_g

0x9b84,	// (0x00056418) hwr_training_navi_pane_g1_ParamLimits

0x9b84,	// (0x00056418) hwr_training_navi_pane_g1

0x9b96,	// (0x0005642a) hwr_training_navi_pane_g2_ParamLimits

0x9b96,	// (0x0005642a) hwr_training_navi_pane_g2

0x9ba8,	// (0x0005643c) hwr_training_navi_pane_g3_ParamLimits

0x9ba8,	// (0x0005643c) hwr_training_navi_pane_g3

0x9bb8,	// (0x0005644c) hwr_training_navi_pane_g4_ParamLimits

0x9bb8,	// (0x0005644c) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0005c116) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0005c116) hwr_training_navi_pane_g

0x9bc5,	// (0x00056459) hwr_training_navi_pane_t1

0x5fdd,	// (0x00052871) list_single_hwr_training_instruct_pane_ParamLimits

0x5fdd,	// (0x00052871) list_single_hwr_training_instruct_pane

0xd540,	// (0x00059dd4) list_single_hwr_training_instruct_pane_t1

0xcc2c,	// (0x000594c0) bg_frame_shadow_pane_g1

0xd54f,	// (0x00059de3) bg_frame_shadow_pane_g2

0xd557,	// (0x00059deb) bg_frame_shadow_pane_g3

0xd55f,	// (0x00059df3) bg_frame_shadow_pane_g4

0xd567,	// (0x00059dfb) bg_frame_shadow_pane_g5

0xd56f,	// (0x00059e03) bg_frame_shadow_pane_g6

0xd577,	// (0x00059e0b) bg_frame_shadow_pane_g7

0xa912,	// (0x000571a6) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0005c121) bg_frame_shadow_pane_g

0x9737,	// (0x00055fcb) main_video_tele_dialer_pane

0x5ff3,	// (0x00052887) aid_size_cell_video_keypad_ParamLimits

0x5ff3,	// (0x00052887) aid_size_cell_video_keypad

0x600d,	// (0x000528a1) grid_video_dialer_keypad_pane_ParamLimits

0x600d,	// (0x000528a1) grid_video_dialer_keypad_pane

0x605b,	// (0x000528ef) video_down_pane_cp_ParamLimits

0x605b,	// (0x000528ef) video_down_pane_cp

0x608d,	// (0x00052921) cell_video_dialer_keypad_pane_ParamLimits

0x608d,	// (0x00052921) cell_video_dialer_keypad_pane

0xd57f,	// (0x00059e13) bg_button_pane_cp08_ParamLimits

0xd57f,	// (0x00059e13) bg_button_pane_cp08

0x60af,	// (0x00052943) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60af,	// (0x00052943) cell_video_dialer_keypad_pane_g1

0x5753,	// (0x00051fe7) mup3_rocker2_pane_ParamLimits

0x5753,	// (0x00051fe7) mup3_rocker2_pane

0xccec,	// (0x00059580) mup3_rocker2_pane_g1

0x420c,	// (0x00050aa0) main_dialer2_pane

0x9737,	// (0x00055fcb) main_mp4_pane

0x9bdb,	// (0x0005646f) main_mp4_pane_g1_ParamLimits

0x9bdb,	// (0x0005646f) main_mp4_pane_g1

0x9bdb,	// (0x0005646f) main_mp4_pane_g2_ParamLimits

0x9bdb,	// (0x0005646f) main_mp4_pane_g2

0x60e9,	// (0x0005297d) main_mp4_pane_g3_ParamLimits

0x60e9,	// (0x0005297d) main_mp4_pane_g3

0x9be9,	// (0x0005647d) main_mp4_pane_g4_ParamLimits

0x9be9,	// (0x0005647d) main_mp4_pane_g4

0x9c11,	// (0x000564a5) main_mp4_pane_g5_ParamLimits

0x9c11,	// (0x000564a5) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0005c141) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0005c141) main_mp4_pane_g

0x9c61,	// (0x000564f5) main_mp4_pane_t1_ParamLimits

0x9c61,	// (0x000564f5) main_mp4_pane_t1

0x9cbd,	// (0x00056551) main_mp4_pane_t2_ParamLimits

0x9cbd,	// (0x00056551) main_mp4_pane_t2

0xd58b,	// (0x00059e1f) main_mp4_pane_t3_ParamLimits

0xd58b,	// (0x00059e1f) main_mp4_pane_t3

0x9d0f,	// (0x000565a3) main_mp4_pane_t4_ParamLimits

0x9d0f,	// (0x000565a3) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0005c14e) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0005c14e) main_mp4_pane_t

0x9d53,	// (0x000565e7) mp4_progress_pane_ParamLimits

0x9d53,	// (0x000565e7) mp4_progress_pane

0x9d9d,	// (0x00056631) mp4_rocker_pane_ParamLimits

0x9d9d,	// (0x00056631) mp4_rocker_pane

0xd5b3,	// (0x00059e47) mp4_progress_pane_t1

0xd5cc,	// (0x00059e60) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0005c157) mp4_progress_pane_t

0xd5e5,	// (0x00059e79) mup_progress_pane_cp04

0xccec,	// (0x00059580) mp4_rocker_pane_g1

0x6125,	// (0x000529b9) aid_cell_size_keypad2_ParamLimits

0x6125,	// (0x000529b9) aid_cell_size_keypad2

0x613b,	// (0x000529cf) dialer2_ne_pane_ParamLimits

0x613b,	// (0x000529cf) dialer2_ne_pane

0x6155,	// (0x000529e9) grid_dialer2_keypad_pane_ParamLimits

0x6155,	// (0x000529e9) grid_dialer2_keypad_pane

0xcad1,	// (0x00059365) bg_popup_call_pane_cp07_ParamLimits

0xcad1,	// (0x00059365) bg_popup_call_pane_cp07

0x6171,	// (0x00052a05) dialer2_ne_pane_t1_ParamLimits

0x6171,	// (0x00052a05) dialer2_ne_pane_t1

0x61ad,	// (0x00052a41) cell_dialer2_keypad_pane_ParamLimits

0x61ad,	// (0x00052a41) cell_dialer2_keypad_pane

0xd603,	// (0x00059e97) bg_button_pane_pane_cp04_ParamLimits

0xd603,	// (0x00059e97) bg_button_pane_pane_cp04

0x61cf,	// (0x00052a63) cell_dialer2_keypad_pane_g1_ParamLimits

0x61cf,	// (0x00052a63) cell_dialer2_keypad_pane_g1

0x2280,	// (0x0004eb14) aid_placing_vt_set_content_ParamLimits

0x2280,	// (0x0004eb14) aid_placing_vt_set_content

0x22a8,	// (0x0004eb3c) aid_placing_vt_set_title_ParamLimits

0x22a8,	// (0x0004eb3c) aid_placing_vt_set_title

0x9737,	// (0x00055fcb) main_image3_pane

0x6295,	// (0x00052b29) area_side_right_pane_cp01_ParamLimits

0x6295,	// (0x00052b29) area_side_right_pane_cp01

0x9bdb,	// (0x0005646f) main_image3_pane_g1_ParamLimits

0x9bdb,	// (0x0005646f) main_image3_pane_g1

0x62ac,	// (0x00052b40) main_image3_pane_g2_ParamLimits

0x62ac,	// (0x00052b40) main_image3_pane_g2

0x62d4,	// (0x00052b68) main_image3_pane_g3_ParamLimits

0x62d4,	// (0x00052b68) main_image3_pane_g3

0x62fe,	// (0x00052b92) main_image3_pane_g4_ParamLimits

0x62fe,	// (0x00052b92) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0005c166) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0005c166) main_image3_pane_g

0x6328,	// (0x00052bbc) main_image3_pane_t1_ParamLimits

0x6328,	// (0x00052bbc) main_image3_pane_t1

0x6380,	// (0x00052c14) main_image3_pane_t2_ParamLimits

0x6380,	// (0x00052c14) main_image3_pane_t2

0x63d2,	// (0x00052c66) main_image3_pane_t3_ParamLimits

0x63d2,	// (0x00052c66) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0005c16f) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0005c16f) main_image3_pane_t

0xad5e,	// (0x000575f2) grid_sctrl_middle_pane_cp01_ParamLimits

0xad5e,	// (0x000575f2) grid_sctrl_middle_pane_cp01

0x645a,	// (0x00052cee) cell_sctrl_middle_pane_cp01_ParamLimits

0x645a,	// (0x00052cee) cell_sctrl_middle_pane_cp01

0x6477,	// (0x00052d0b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6477,	// (0x00052d0b) cell_sctrl_middle_pane_cp01_g1

0x9737,	// (0x00055fcb) main_call4_pane

0x648d,	// (0x00052d21) aid_size_button_call4_ParamLimits

0x648d,	// (0x00052d21) aid_size_button_call4

0x64be,	// (0x00052d52) call4_windows_pane_ParamLimits

0x64be,	// (0x00052d52) call4_windows_pane

0x64de,	// (0x00052d72) grid_call4_button_pane_ParamLimits

0x64de,	// (0x00052d72) grid_call4_button_pane

0xd60f,	// (0x00059ea3) call4_windows_conf_pane

0xd626,	// (0x00059eba) popup_call4_audio_first_window_ParamLimits

0xd626,	// (0x00059eba) popup_call4_audio_first_window

0xd66e,	// (0x00059f02) popup_call4_audio_second_window_ParamLimits

0xd66e,	// (0x00059f02) popup_call4_audio_second_window

0xd687,	// (0x00059f1b) popup_call4_audio_wait_window_ParamLimits

0xd687,	// (0x00059f1b) popup_call4_audio_wait_window

0x650b,	// (0x00052d9f) cell_call4_button_pane_ParamLimits

0x650b,	// (0x00052d9f) cell_call4_button_pane

0x6534,	// (0x00052dc8) bg_button_pane_cp09_ParamLimits

0x6534,	// (0x00052dc8) bg_button_pane_cp09

0x6540,	// (0x00052dd4) cell_call4_button_pane_g1_ParamLimits

0x6540,	// (0x00052dd4) cell_call4_button_pane_g1

0x6566,	// (0x00052dfa) cell_call4_button_pane_t1_ParamLimits

0x6566,	// (0x00052dfa) cell_call4_button_pane_t1

0xd69d,	// (0x00059f31) popup_call4_audio_conf_window_ParamLimits

0xd69d,	// (0x00059f31) popup_call4_audio_conf_window

0x57b3,	// (0x00052047) mup3_progress_pane_t1_ParamLimits

0x57d2,	// (0x00052066) mup3_progress_pane_t2_ParamLimits

0xcfc1,	// (0x00059855) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0005c043) mup3_progress_pane_t_ParamLimits

0xcfde,	// (0x00059872) mup_progress_pane_cp03_ParamLimits

0x5db8,	// (0x0005264c) mup3_control_keys_pane_g4_copy1

0x9d81,	// (0x00056615) mp4_rocker2_pane_ParamLimits

0x9d81,	// (0x00056615) mp4_rocker2_pane

0xd6b1,	// (0x00059f45) mp4_rocker2_pane_g1

0xd6b9,	// (0x00059f4d) mp4_rocker2_pane_g2

0x9e21,	// (0x000566b5) mp4_rocker2_pane_g3

0x9e29,	// (0x000566bd) mp4_rocker2_pane_g4

0x9e31,	// (0x000566c5) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005c178) mp4_rocker2_pane_g

0x9737,	// (0x00055fcb) main_camera4_pane

0x9737,	// (0x00055fcb) main_video4_pane

0x6029,	// (0x000528bd) main_video_tele_dialer_pane_t1_ParamLimits

0x6029,	// (0x000528bd) main_video_tele_dialer_pane_t1

0x6042,	// (0x000528d6) main_video_tele_dialer_pane_t2_ParamLimits

0x6042,	// (0x000528d6) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0005c132) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0005c132) main_video_tele_dialer_pane_t

0x65a8,	// (0x00052e3c) cam4_autofocus_pane_ParamLimits

0x65a8,	// (0x00052e3c) cam4_autofocus_pane

0x65be,	// (0x00052e52) cam4_image_uncrop_pane_ParamLimits

0x65be,	// (0x00052e52) cam4_image_uncrop_pane

0x65d8,	// (0x00052e6c) cam4_indicators_pane_ParamLimits

0x65d8,	// (0x00052e6c) cam4_indicators_pane

0x6603,	// (0x00052e97) main_camera4_pane_g1_ParamLimits

0x6603,	// (0x00052e97) main_camera4_pane_g1

0x6615,	// (0x00052ea9) main_camera4_pane_g2_ParamLimits

0x6615,	// (0x00052ea9) main_camera4_pane_g2

0x6628,	// (0x00052ebc) main_camera4_pane_g3_ParamLimits

0x6628,	// (0x00052ebc) main_camera4_pane_g3

0x663b,	// (0x00052ecf) main_camera4_pane_g4_ParamLimits

0x663b,	// (0x00052ecf) main_camera4_pane_g4

0x664e,	// (0x00052ee2) main_camera4_pane_g5_ParamLimits

0x664e,	// (0x00052ee2) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0005c183) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0005c183) main_camera4_pane_g

0x6672,	// (0x00052f06) main_camera4_pane_t1_ParamLimits

0x6672,	// (0x00052f06) main_camera4_pane_t1

0xcf46,	// (0x000597da) bg_tb_trans_pane_cp06

0x9e5d,	// (0x000566f1) cam4_indicators_pane_g1

0x9e6e,	// (0x00056702) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0005c19e) cam4_indicators_pane_g

0x9e86,	// (0x0005671a) cam4_indicators_pane_t1

0x66d6,	// (0x00052f6a) main_video4_pane_g1_ParamLimits

0x66d6,	// (0x00052f6a) main_video4_pane_g1

0x66e5,	// (0x00052f79) main_video4_pane_g2_ParamLimits

0x66e5,	// (0x00052f79) main_video4_pane_g2

0x66f4,	// (0x00052f88) main_video4_pane_g3_ParamLimits

0x66f4,	// (0x00052f88) main_video4_pane_g3

0x6703,	// (0x00052f97) main_video4_pane_g4_ParamLimits

0x6703,	// (0x00052f97) main_video4_pane_g4

0x0004,

0xf911,	// (0x0005c1a5) main_video4_pane_g_ParamLimits

0xf911,	// (0x0005c1a5) main_video4_pane_g

0x6721,	// (0x00052fb5) vid4_indicators_pane_ParamLimits

0x6721,	// (0x00052fb5) vid4_indicators_pane

0x674f,	// (0x00052fe3) video4_image_uncrop_cif_pane_ParamLimits

0x674f,	// (0x00052fe3) video4_image_uncrop_cif_pane

0x6769,	// (0x00052ffd) video4_image_uncrop_nhd_pane_ParamLimits

0x6769,	// (0x00052ffd) video4_image_uncrop_nhd_pane

0x65be,	// (0x00052e52) video4_image_uncrop_vga_pane_ParamLimits

0x65be,	// (0x00052e52) video4_image_uncrop_vga_pane

0xad5e,	// (0x000575f2) bg_tb_trans_pane_cp07

0x9eb0,	// (0x00056744) vid4_indicators_pane_g1

0x9ec4,	// (0x00056758) vid4_indicators_pane_g2

0x9ed8,	// (0x0005676c) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0005c1b0) vid4_indicators_pane_g

0x9f05,	// (0x00056799) vid4_indicators_pane_t1

0x677d,	// (0x00053011) cam4_autofocus_pane_g1

0x6785,	// (0x00053019) cam4_autofocus_pane_g2

0x678d,	// (0x00053021) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005c1bb) cam4_autofocus_pane_g

0x6795,	// (0x00053029) cam4_autofocus_pane_g3_copy1

0x6071,	// (0x00052905) video_down_pane_cp_t1

0x607f,	// (0x00052913) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0005c137) video_down_pane_cp_t

0xad5e,	// (0x000575f2) popup_vitu2_window_ParamLimits

0xad5e,	// (0x000575f2) popup_vitu2_window

0x679d,	// (0x00053031) aid_size_cell2_itu2_ParamLimits

0x679d,	// (0x00053031) aid_size_cell2_itu2

0x67c3,	// (0x00053057) aid_size_cell_itu2_ParamLimits

0x67c3,	// (0x00053057) aid_size_cell_itu2

0x681f,	// (0x000530b3) bg_popup_window_pane_cp09_ParamLimits

0x681f,	// (0x000530b3) bg_popup_window_pane_cp09

0x682d,	// (0x000530c1) field_vitu2_entry_pane_ParamLimits

0x682d,	// (0x000530c1) field_vitu2_entry_pane

0x6853,	// (0x000530e7) grid_vitu2_function_pane_ParamLimits

0x6853,	// (0x000530e7) grid_vitu2_function_pane

0x68a4,	// (0x00053138) grid_vitu2_itu_pane_ParamLimits

0x68a4,	// (0x00053138) grid_vitu2_itu_pane

0x693a,	// (0x000531ce) cell_vitu2_itu_pane_ParamLimits

0x693a,	// (0x000531ce) cell_vitu2_itu_pane

0x6966,	// (0x000531fa) cell_vitu2_function_pane_ParamLimits

0x6966,	// (0x000531fa) cell_vitu2_function_pane

0xd6c1,	// (0x00059f55) bg_popup_call_pane_cp08_ParamLimits

0xd6c1,	// (0x00059f55) bg_popup_call_pane_cp08

0xd6d8,	// (0x00059f6c) field_vitu2_entry_pane_g1

0xd6e4,	// (0x00059f78) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0005c1c2) field_vitu2_entry_pane_g

0x061d,	// (0x0004ceb1) field_vitu2_entry_pane_t1_ParamLimits

0x061d,	// (0x0004ceb1) field_vitu2_entry_pane_t1

0x69a5,	// (0x00053239) field_vitu2_entry_pane_t2_ParamLimits

0x69a5,	// (0x00053239) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005c1c9) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005c1c9) field_vitu2_entry_pane_t

0x69c2,	// (0x00053256) bg_button_pane_cp010_ParamLimits

0x69c2,	// (0x00053256) bg_button_pane_cp010

0x9f1c,	// (0x000567b0) cell_vitu2_itu_pane_g1

0x69de,	// (0x00053272) cell_vitu2_itu_pane_t1_ParamLimits

0x69de,	// (0x00053272) cell_vitu2_itu_pane_t1

0x064d,	// (0x0004cee1) cell_vitu2_itu_pane_t2_ParamLimits

0x064d,	// (0x0004cee1) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0005c1d3) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0005c1d3) cell_vitu2_itu_pane_t

0xad5e,	// (0x000575f2) bg_button_pane_cp011

0x6a3c,	// (0x000532d0) cell_vitu2_function_pane_g1

0x9737,	// (0x00055fcb) main_myfav_hc_pane

0x6422,	// (0x00052cb6) popup_image3_note_pane_ParamLimits

0x6422,	// (0x00052cb6) popup_image3_note_pane

0x643e,	// (0x00052cd2) popup_image3_tool_bar_pane_ParamLimits

0x643e,	// (0x00052cd2) popup_image3_tool_bar_pane

0x06db,	// (0x0004cf6f) cell_vitu2_itu_pane_t3_ParamLimits

0x06db,	// (0x0004cf6f) cell_vitu2_itu_pane_t3

0x9737,	// (0x00055fcb) bg_popup_trans_pane

0xd706,	// (0x00059f9a) grid_image3_tool_bar_pane

0xd710,	// (0x00059fa4) bg_popup_trans_pane_g1

0xac77,	// (0x0005750b) bg_popup_trans_pane_g2

0xd718,	// (0x00059fac) bg_popup_trans_pane_g3

0xd720,	// (0x00059fb4) bg_popup_trans_pane_g4

0xd728,	// (0x00059fbc) bg_popup_trans_pane_g5

0xd730,	// (0x00059fc4) bg_popup_trans_pane_g6

0xd738,	// (0x00059fcc) bg_popup_trans_pane_g7

0xd740,	// (0x00059fd4) bg_popup_trans_pane_g8

0xac57,	// (0x000574eb) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0005c1da) bg_popup_trans_pane_g

0xd748,	// (0x00059fdc) cell_image3_tool_bar_pane_ParamLimits

0xd748,	// (0x00059fdc) cell_image3_tool_bar_pane

0xccec,	// (0x00059580) cell_image3_tool_bar_pane_g1

0x9737,	// (0x00055fcb) bg_popup_trans_pane_cp1

0xd75c,	// (0x00059ff0) popup_image3_note_pane_t1

0xd76a,	// (0x00059ffe) popup_image3_note_pane_t2

0xd778,	// (0x0005a00c) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0005c1ed) popup_image3_note_pane_t

0xd786,	// (0x0005a01a) popup_image3_note_pane_t3_copy1

0x6a50,	// (0x000532e4) bg_myfav_hc_instruction_pane_ParamLimits

0x6a50,	// (0x000532e4) bg_myfav_hc_instruction_pane

0x6a64,	// (0x000532f8) cell_myfav_contact_pane_ParamLimits

0x6a64,	// (0x000532f8) cell_myfav_contact_pane

0x6a82,	// (0x00053316) cell_myfav_contact_pane_cp1_ParamLimits

0x6a82,	// (0x00053316) cell_myfav_contact_pane_cp1

0x6a9a,	// (0x0005332e) cell_myfav_contact_pane_cp2_ParamLimits

0x6a9a,	// (0x0005332e) cell_myfav_contact_pane_cp2

0x6ab2,	// (0x00053346) cell_myfav_contact_pane_cp3_ParamLimits

0x6ab2,	// (0x00053346) cell_myfav_contact_pane_cp3

0x6ac9,	// (0x0005335d) cell_myfav_contact_pane_cp4_ParamLimits

0x6ac9,	// (0x0005335d) cell_myfav_contact_pane_cp4

0x6ae1,	// (0x00053375) cell_myfav_contact_pane_cp5_ParamLimits

0x6ae1,	// (0x00053375) cell_myfav_contact_pane_cp5

0x6af5,	// (0x00053389) cell_myfav_contact_pane_cp6_ParamLimits

0x6af5,	// (0x00053389) cell_myfav_contact_pane_cp6

0x6b0b,	// (0x0005339f) cell_myfav_contact_pane_cp7_ParamLimits

0x6b0b,	// (0x0005339f) cell_myfav_contact_pane_cp7

0xd794,	// (0x0005a028) listscroll_gen_pane_cp05

0x6b25,	// (0x000533b9) main_myfav_hc_pane_g1_ParamLimits

0x6b25,	// (0x000533b9) main_myfav_hc_pane_g1

0x6b3f,	// (0x000533d3) main_myfav_hc_pane_g2_ParamLimits

0x6b3f,	// (0x000533d3) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0005c1f4) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0005c1f4) main_myfav_hc_pane_g

0x6b71,	// (0x00053405) main_myfav_hc_pane_t1_ParamLimits

0x6b71,	// (0x00053405) main_myfav_hc_pane_t1

0xd79d,	// (0x0005a031) main_myfav_hc_pane_t2_ParamLimits

0xd79d,	// (0x0005a031) main_myfav_hc_pane_t2

0xd7af,	// (0x0005a043) main_myfav_hc_pane_t3_ParamLimits

0xd7af,	// (0x0005a043) main_myfav_hc_pane_t3

0x6b88,	// (0x0005341c) main_myfav_hc_pane_t4_ParamLimits

0x6b88,	// (0x0005341c) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0005c1fb) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0005c1fb) main_myfav_hc_pane_t

0xccec,	// (0x00059580) bg_myfav_hc_instruction_pane_g1

0xd7c1,	// (0x0005a055) cell_myfav_contact_pane_g1_ParamLimits

0xd7c1,	// (0x0005a055) cell_myfav_contact_pane_g1

0xd7c1,	// (0x0005a055) cell_myfav_contact_pane_g2_ParamLimits

0xd7c1,	// (0x0005a055) cell_myfav_contact_pane_g2

0xd7cd,	// (0x0005a061) cell_myfav_contact_pane_g3_ParamLimits

0xd7cd,	// (0x0005a061) cell_myfav_contact_pane_g3

0xcfab,	// (0x0005983f) cell_myfav_contact_pane_g4_ParamLimits

0xcfab,	// (0x0005983f) cell_myfav_contact_pane_g4

0xd7da,	// (0x0005a06e) cell_myfav_contact_pane_g5_ParamLimits

0xd7da,	// (0x0005a06e) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0005c206) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0005c206) cell_myfav_contact_pane_g

0x6b59,	// (0x000533ed) main_myfav_hc_pane_g3_ParamLimits

0x6b59,	// (0x000533ed) main_myfav_hc_pane_g3

0x13f9,	// (0x0004dc8d) popup_adpt_find_window

0x6bb0,	// (0x00053444) afind_page_pane_ParamLimits

0x6bb0,	// (0x00053444) afind_page_pane

0x6bc5,	// (0x00053459) aid_size_cell_afind_ParamLimits

0x6bc5,	// (0x00053459) aid_size_cell_afind

0x6be3,	// (0x00053477) bg_popup_sub_pane_cp09_ParamLimits

0x6be3,	// (0x00053477) bg_popup_sub_pane_cp09

0x6bf0,	// (0x00053484) find_pane_cp01_ParamLimits

0x6bf0,	// (0x00053484) find_pane_cp01

0xd7e6,	// (0x0005a07a) grid_afind_control_pane_ParamLimits

0xd7e6,	// (0x0005a07a) grid_afind_control_pane

0x6bfd,	// (0x00053491) grid_afind_pane_ParamLimits

0x6bfd,	// (0x00053491) grid_afind_pane

0x6c1c,	// (0x000534b0) cell_afind_pane_ParamLimits

0x6c1c,	// (0x000534b0) cell_afind_pane

0xccec,	// (0x00059580) afind_page_pane_g1

0x6c83,	// (0x00053517) afind_page_pane_g2

0x6c8c,	// (0x00053520) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0005c211) afind_page_pane_g

0x6c95,	// (0x00053529) afind_page_pane_t1

0xd7fa,	// (0x0005a08e) cell_afind_grid_control_pane_ParamLimits

0xd7fa,	// (0x0005a08e) cell_afind_grid_control_pane

0xd603,	// (0x00059e97) bg_button_pane_cp69_ParamLimits

0xd603,	// (0x00059e97) bg_button_pane_cp69

0x6cb5,	// (0x00053549) cell_afind_pane_g1_ParamLimits

0x6cb5,	// (0x00053549) cell_afind_pane_g1

0x6cc2,	// (0x00053556) cell_afind_pane_t1_ParamLimits

0x6cc2,	// (0x00053556) cell_afind_pane_t1

0xaa70,	// (0x00057304) bg_button_pane_cp72

0xd809,	// (0x0005a09d) cell_afind_grid_control_pane_g1

0x3ccb,	// (0x0005055f) aid_image_placing_area_ParamLimits

0x3ccb,	// (0x0005055f) aid_image_placing_area

0xd2d1,	// (0x00059b65) field_vitu_entry_pane_g1_ParamLimits

0xd2d1,	// (0x00059b65) field_vitu_entry_pane_g1

0xd2dd,	// (0x00059b71) field_vitu_entry_pane_g2_ParamLimits

0xd2dd,	// (0x00059b71) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0005c0c2) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0005c0c2) field_vitu_entry_pane_g

0x5e81,	// (0x00052715) cell_vitu_itu_pane_g1_ParamLimits

0x5ec3,	// (0x00052757) cell_vitu_itu_pane_t3_ParamLimits

0x5ec3,	// (0x00052757) cell_vitu_itu_pane_t3

0xd5b3,	// (0x00059e47) mp4_progress_pane_t1_ParamLimits

0xd5cc,	// (0x00059e60) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0005c157) mp4_progress_pane_t_ParamLimits

0xd5e5,	// (0x00059e79) mup_progress_pane_cp04_ParamLimits

0x6b9c,	// (0x00053430) main_myfav_hc_pane_t5_ParamLimits

0x6b9c,	// (0x00053430) main_myfav_hc_pane_t5

0x9755,	// (0x00055fe9) aid_zoom_text_primary

0x13f9,	// (0x0004dc8d) popup_adpt_find_window_ParamLimits

0xad5e,	// (0x000575f2) main_cam_set_pane

0x65ef,	// (0x00052e83) cam4_zoom_pane_ParamLimits

0x65ef,	// (0x00052e83) cam4_zoom_pane

0x6cd4,	// (0x00053568) main_cam_set_pane_g1_ParamLimits

0x6cd4,	// (0x00053568) main_cam_set_pane_g1

0x6ce2,	// (0x00053576) main_cam_set_pane_g2_ParamLimits

0x6ce2,	// (0x00053576) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0005c218) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0005c218) main_cam_set_pane_g

0x6d03,	// (0x00053597) main_cam_set_pane_t1_ParamLimits

0x6d03,	// (0x00053597) main_cam_set_pane_t1

0x6d1e,	// (0x000535b2) main_cset_listscroll_pane_ParamLimits

0x6d1e,	// (0x000535b2) main_cset_listscroll_pane

0x6d3e,	// (0x000535d2) main_cset_slider_pane_ParamLimits

0x6d3e,	// (0x000535d2) main_cset_slider_pane

0xd81a,	// (0x0005a0ae) main_cset_list_pane_ParamLimits

0xd81a,	// (0x0005a0ae) main_cset_list_pane

0xd82a,	// (0x0005a0be) scroll_pane_cp028

0x6d64,	// (0x000535f8) aid_area_touch_slider

0x6d80,	// (0x00053614) cset_slider_pane

0x6daa,	// (0x0005363e) main_cset_slider_pane_g1

0x6dbf,	// (0x00053653) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0005c21d) main_cset_slider_pane_g

0xd863,	// (0x0005a0f7) main_cset_slider_pane_t1

0x6e63,	// (0x000536f7) main_cset_slider_pane_t2

0x6e7d,	// (0x00053711) main_cset_slider_pane_t3

0x6e97,	// (0x0005372b) main_cset_slider_pane_t4

0x6eb1,	// (0x00053745) main_cset_slider_pane_t5

0x6ecb,	// (0x0005375f) main_cset_slider_pane_t6

0x6ee0,	// (0x00053774) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0005c242) main_cset_slider_pane_t

0x6fe4,	// (0x00053878) cset_list_set_pane_ParamLimits

0x6fe4,	// (0x00053878) cset_list_set_pane

0x6ff6,	// (0x0005388a) aid_position_infowindow_above

0x6ffe,	// (0x00053892) aid_position_infowindow_below

0x0739,	// (0x0004cfcd) cset_list_set_pane_g1_ParamLimits

0x0739,	// (0x0004cfcd) cset_list_set_pane_g1

0x0745,	// (0x0004cfd9) cset_list_set_pane_g3_ParamLimits

0x0745,	// (0x0004cfd9) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0005c261) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0005c261) cset_list_set_pane_g

0x0754,	// (0x0004cfe8) cset_list_set_pane_t1_ParamLimits

0x0754,	// (0x0004cfe8) cset_list_set_pane_t1

0xad5e,	// (0x000575f2) list_highlight_pane_cp021_ParamLimits

0xad5e,	// (0x000575f2) list_highlight_pane_cp021

0xb5cf,	// (0x00057e63) cset_slider_pane_g1

0xb5e1,	// (0x00057e75) cset_slider_pane_g2

0xb5d8,	// (0x00057e6c) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0005c266) cset_slider_pane_g

0x9f2e,	// (0x000567c2) aid_area_touch_cam4_zoom

0x9f36,	// (0x000567ca) cam4_zoom_cont_pane

0x9f3e,	// (0x000567d2) cam4_zoom_pane_g1

0x9f46,	// (0x000567da) cam4_zoom_pane_g2

0x7006,	// (0x0005389a) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005c26d) cam4_zoom_pane_g

0xd4c8,	// (0x00059d5c) cam4_zoom_cont_pane_g1

0xd9f3,	// (0x0005a287) cam4_zoom_cont_pane_g2

0xd9fc,	// (0x0005a290) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0005c274) cam4_zoom_cont_pane_g

0x64ab,	// (0x00052d3f) call4_image_pane_ParamLimits

0x64ab,	// (0x00052d3f) call4_image_pane

0xd60f,	// (0x00059ea3) call4_windows_conf_pane_ParamLimits

0xd64c,	// (0x00059ee0) popup_call4_audio_in_window_ParamLimits

0xd64c,	// (0x00059ee0) popup_call4_audio_in_window

0x9737,	// (0x00055fcb) bg_popup_call2_act_pane_cp02

0xd695,	// (0x00059f29) call4_list_conf_pane

0xccec,	// (0x00059580) call4_image_pane_g1

0xccec,	// (0x00059580) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0005bf83) call4_image_pane_g

0xd903,	// (0x0005a197) list_single_graphic_popup_conf4_pane_ParamLimits

0xd903,	// (0x0005a197) list_single_graphic_popup_conf4_pane

0x9737,	// (0x00055fcb) list_highlight_pane_cp022

0xd916,	// (0x0005a1aa) list_single_graphic_popup_conf4_pane_g1

0xb1cb,	// (0x00057a5f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005c27b) list_single_graphic_popup_conf4_pane_g

0xd91e,	// (0x0005a1b2) list_single_graphic_popup_conf4_pane_t1

0x23cc,	// (0x0004ec60) popup_vtel_slider_window_ParamLimits

0x23cc,	// (0x0004ec60) popup_vtel_slider_window

0xd5f1,	// (0x00059e85) dialer2_ne_pane_t2_ParamLimits

0xd5f1,	// (0x00059e85) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005c15c) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005c15c) dialer2_ne_pane_t

0xcad1,	// (0x00059365) bg_popup_sub_pane_cp010_ParamLimits

0xcad1,	// (0x00059365) bg_popup_sub_pane_cp010

0x700e,	// (0x000538a2) popup_vtel_slider_window_g1_ParamLimits

0x700e,	// (0x000538a2) popup_vtel_slider_window_g1

0x7021,	// (0x000538b5) popup_vtel_slider_window_g2_ParamLimits

0x7021,	// (0x000538b5) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0005c280) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0005c280) popup_vtel_slider_window_g

0x7077,	// (0x0005390b) vtel_slider_pane_ParamLimits

0x7077,	// (0x0005390b) vtel_slider_pane

0x7099,	// (0x0005392d) vtel_slider_pane_g1_ParamLimits

0x7099,	// (0x0005392d) vtel_slider_pane_g1

0x70ad,	// (0x00053941) vtel_slider_pane_g2_ParamLimits

0x70ad,	// (0x00053941) vtel_slider_pane_g2

0x70c5,	// (0x00053959) vtel_slider_pane_g3_ParamLimits

0x70c5,	// (0x00053959) vtel_slider_pane_g3

0x7099,	// (0x0005392d) vtel_slider_pane_g4_ParamLimits

0x7099,	// (0x0005392d) vtel_slider_pane_g4

0x70db,	// (0x0005396f) vtel_slider_pane_g5_ParamLimits

0x70db,	// (0x0005396f) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005c289) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005c289) vtel_slider_pane_g

0xad5e,	// (0x000575f2) main_gallery2_pane

0x67ef,	// (0x00053083) aid_size_row_itut2_dropdow_list_ParamLimits

0x67ef,	// (0x00053083) aid_size_row_itut2_dropdow_list

0x687b,	// (0x0005310f) grid_vitu2_function_top_pane_ParamLimits

0x687b,	// (0x0005310f) grid_vitu2_function_top_pane

0x68e5,	// (0x00053179) popup_vitu2_dropdown_list_window_ParamLimits

0x68e5,	// (0x00053179) popup_vitu2_dropdown_list_window

0x690e,	// (0x000531a2) popup_vitu2_match_list_window

0x70f1,	// (0x00053985) cell_vitu2_function_top_pane_ParamLimits

0x70f1,	// (0x00053985) cell_vitu2_function_top_pane

0x7109,	// (0x0005399d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7109,	// (0x0005399d) cell_vitu2_function_top_pane_cp01

0x7125,	// (0x000539b9) cell_vitu2_function_top_wide_pane_ParamLimits

0x7125,	// (0x000539b9) cell_vitu2_function_top_wide_pane

0xad5e,	// (0x000575f2) bg_button_pane_cp012

0x7141,	// (0x000539d5) cell_vitu2_function_top_pane_g1

0x9f4e,	// (0x000567e2) bg_button_pane_cp013_ParamLimits

0x9f4e,	// (0x000567e2) bg_button_pane_cp013

0x7155,	// (0x000539e9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7155,	// (0x000539e9) cell_vitu2_function_top_wide_pane_g1

0xad5e,	// (0x000575f2) bg_popup_sub_pane_cp20

0x716d,	// (0x00053a01) list_vitu2_match_list_pane

0xd710,	// (0x00059fa4) bg_popup_sub_pane_cp20_g1

0xd718,	// (0x00059fac) bg_popup_sub_pane_cp20_g2

0xac77,	// (0x0005750b) bg_popup_sub_pane_cp20_g3

0xd720,	// (0x00059fb4) bg_popup_sub_pane_cp20_g4

0xac57,	// (0x000574eb) bg_popup_sub_pane_cp20_g5

0xd934,	// (0x0005a1c8) bg_popup_sub_pane_cp20_g6

0xd730,	// (0x00059fc4) bg_popup_sub_pane_cp20_g7

0xd738,	// (0x00059fcc) bg_popup_sub_pane_cp20_g8

0xd740,	// (0x00059fd4) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0005c294) bg_popup_sub_pane_cp20_g

0x9f6a,	// (0x000567fe) list_vitu2_match_list_item_pane_ParamLimits

0x9f6a,	// (0x000567fe) list_vitu2_match_list_item_pane

0x9f7c,	// (0x00056810) list_vitu2_match_list_item_pane_t1

0x9737,	// (0x00055fcb) bg_popup_sub_pane_cp21

0xb0f3,	// (0x00057987) grid_vitu2_dropdown_list_pane

0x718b,	// (0x00053a1f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x718b,	// (0x00053a1f) cell_vitu2_dropdown_list_char_pane

0x71ac,	// (0x00053a40) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71ac,	// (0x00053a40) cell_vitu2_dropdown_list_ctrl_pane

0xd93c,	// (0x0005a1d0) cell_vitu2_dropdown_list_char_pane_g1

0xd945,	// (0x0005a1d9) cell_vitu2_dropdown_list_char_pane_g2

0xd94e,	// (0x0005a1e2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0005c2b1) cell_vitu2_dropdown_list_char_pane_g

0x71d8,	// (0x00053a6c) cell_vitu2_dropdown_list_char_pane_t1

0x71e6,	// (0x00053a7a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71e6,	// (0x00053a7a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71f3,	// (0x00053a87) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71f3,	// (0x00053a87) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7200,	// (0x00053a94) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7200,	// (0x00053a94) cell_vitu2_dropdown_list_ctrl_pane_g3

0x720d,	// (0x00053aa1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x720d,	// (0x00053aa1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf46,	// (0x000597da) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf46,	// (0x000597da) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005c2b8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005c2b8) cell_vitu2_dropdown_list_ctrl_pane_g

0x7229,	// (0x00053abd) aid_size_cell_gallery2_ParamLimits

0x7229,	// (0x00053abd) aid_size_cell_gallery2

0x7247,	// (0x00053adb) grid_gallery2_pane_ParamLimits

0x7247,	// (0x00053adb) grid_gallery2_pane

0x7261,	// (0x00053af5) scroll_pane_cp029_ParamLimits

0x7261,	// (0x00053af5) scroll_pane_cp029

0x7272,	// (0x00053b06) cell_gallery2_pane_ParamLimits

0x7272,	// (0x00053b06) cell_gallery2_pane

0xd957,	// (0x0005a1eb) cell_gallery2_pane_g2

0x72d1,	// (0x00053b65) cell_gallery2_pane_g3

0xd95f,	// (0x0005a1f3) cell_gallery2_pane_g4

0xd967,	// (0x0005a1fb) cell_gallery2_pane_g5

0xaa1e,	// (0x000572b2) grid_highlight_pane_cp10

0x690e,	// (0x000531a2) popup_vitu2_match_list_window_ParamLimits

0x6923,	// (0x000531b7) popup_vitu2_query_window_ParamLimits

0x6923,	// (0x000531b7) popup_vitu2_query_window

0x9737,	// (0x00055fcb) bg_vitu2_candi_button_pane

0xd93c,	// (0x0005a1d0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd945,	// (0x0005a1d9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd94e,	// (0x0005a1e2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x07c7,	// (0x0004d05b) bg_button_pane_cp015

0x72d9,	// (0x00053b6d) bg_button_pane_cp016

0x72ec,	// (0x00053b80) bg_button_pane_cp017

0xc8e4,	// (0x00059178) bg_popup_sub_pane_cp22

0xd96f,	// (0x0005a203) popup_vitu2_query_window_g1

0x07fc,	// (0x0004d090) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0005c2c3) popup_vitu2_query_window_g

0x081b,	// (0x0004d0af) popup_vitu2_query_window_t1_ParamLimits

0x081b,	// (0x0004d0af) popup_vitu2_query_window_t1

0x0850,	// (0x0004d0e4) popup_vitu2_query_window_t2_ParamLimits

0x0850,	// (0x0004d0e4) popup_vitu2_query_window_t2

0x0862,	// (0x0004d0f6) popup_vitu2_query_window_t3_ParamLimits

0x0862,	// (0x0004d0f6) popup_vitu2_query_window_t3

0x7310,	// (0x00053ba4) popup_vitu2_query_window_t4_ParamLimits

0x7310,	// (0x00053ba4) popup_vitu2_query_window_t4

0x7331,	// (0x00053bc5) popup_vitu2_query_window_t5_ParamLimits

0x7331,	// (0x00053bc5) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005c2ca) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005c2ca) popup_vitu2_query_window_t

0xd812,	// (0x0005a0a6) main_cset_text_pane

0x6d64,	// (0x000535f8) aid_area_touch_slider_ParamLimits

0x6d80,	// (0x00053614) cset_slider_pane_ParamLimits

0x6daa,	// (0x0005363e) main_cset_slider_pane_g1_ParamLimits

0x6dbf,	// (0x00053653) main_cset_slider_pane_g2_ParamLimits

0xd833,	// (0x0005a0c7) main_cset_slider_pane_g3_ParamLimits

0xd833,	// (0x0005a0c7) main_cset_slider_pane_g3

0x6dd4,	// (0x00053668) main_cset_slider_pane_g4_ParamLimits

0x6dd4,	// (0x00053668) main_cset_slider_pane_g4

0x6de3,	// (0x00053677) main_cset_slider_pane_g5_ParamLimits

0x6de3,	// (0x00053677) main_cset_slider_pane_g5

0x6def,	// (0x00053683) main_cset_slider_pane_g6_ParamLimits

0x6def,	// (0x00053683) main_cset_slider_pane_g6

0xf989,	// (0x0005c21d) main_cset_slider_pane_g_ParamLimits

0xd863,	// (0x0005a0f7) main_cset_slider_pane_t1_ParamLimits

0x6e63,	// (0x000536f7) main_cset_slider_pane_t2_ParamLimits

0x6e7d,	// (0x00053711) main_cset_slider_pane_t3_ParamLimits

0x6e97,	// (0x0005372b) main_cset_slider_pane_t4_ParamLimits

0x6eb1,	// (0x00053745) main_cset_slider_pane_t5_ParamLimits

0x6ecb,	// (0x0005375f) main_cset_slider_pane_t6_ParamLimits

0x6ee0,	// (0x00053774) main_cset_slider_pane_t7_ParamLimits

0x6f0a,	// (0x0005379e) main_cset_slider_pane_t8_ParamLimits

0x6f0a,	// (0x0005379e) main_cset_slider_pane_t8

0x6f32,	// (0x000537c6) main_cset_slider_pane_t9_ParamLimits

0x6f32,	// (0x000537c6) main_cset_slider_pane_t9

0x6f5a,	// (0x000537ee) main_cset_slider_pane_t10_ParamLimits

0x6f5a,	// (0x000537ee) main_cset_slider_pane_t10

0x6f82,	// (0x00053816) main_cset_slider_pane_t11_ParamLimits

0x6f82,	// (0x00053816) main_cset_slider_pane_t11

0x6faa,	// (0x0005383e) main_cset_slider_pane_t12_ParamLimits

0x6faa,	// (0x0005383e) main_cset_slider_pane_t12

0x6fc7,	// (0x0005385b) main_cset_slider_pane_t13_ParamLimits

0x6fc7,	// (0x0005385b) main_cset_slider_pane_t13

0xf9ae,	// (0x0005c242) main_cset_slider_pane_t_ParamLimits

0x9737,	// (0x00055fcb) bg_popup_sub_pane_cp011

0xd97b,	// (0x0005a20f) main_cset_text_pane_g1

0xd983,	// (0x0005a217) main_cset_text_pane_t1

0xd991,	// (0x0005a225) main_cset_text_pane_t2

0xd99f,	// (0x0005a233) main_cset_text_pane_t3

0xda05,	// (0x0005a299) main_cset_text_pane_t4

0xda13,	// (0x0005a2a7) main_cset_text_pane_t5

0xda21,	// (0x0005a2b5) main_cset_text_pane_t6

0xda2f,	// (0x0005a2c3) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0005c2d9) main_cset_text_pane_t

0x9737,	// (0x00055fcb) main_cam4_burst_pane

0x9737,	// (0x00055fcb) main_cam5_pane

0x6ca3,	// (0x00053537) bg_button_pane_cp019

0x6cac,	// (0x00053540) bg_button_pane_cp020

0xd83f,	// (0x0005a0d3) main_cset_slider_pane_g7_ParamLimits

0xd83f,	// (0x0005a0d3) main_cset_slider_pane_g7

0xd84b,	// (0x0005a0df) main_cset_slider_pane_g8_ParamLimits

0xd84b,	// (0x0005a0df) main_cset_slider_pane_g8

0x6e03,	// (0x00053697) main_cset_slider_pane_g9_ParamLimits

0x6e03,	// (0x00053697) main_cset_slider_pane_g9

0x6e0f,	// (0x000536a3) main_cset_slider_pane_g10_ParamLimits

0x6e0f,	// (0x000536a3) main_cset_slider_pane_g10

0x6e1b,	// (0x000536af) main_cset_slider_pane_g11_ParamLimits

0x6e1b,	// (0x000536af) main_cset_slider_pane_g11

0x6e27,	// (0x000536bb) main_cset_slider_pane_g12_ParamLimits

0x6e27,	// (0x000536bb) main_cset_slider_pane_g12

0x6e33,	// (0x000536c7) main_cset_slider_pane_g13_ParamLimits

0x6e33,	// (0x000536c7) main_cset_slider_pane_g13

0x6e3f,	// (0x000536d3) main_cset_slider_pane_g14_ParamLimits

0x6e3f,	// (0x000536d3) main_cset_slider_pane_g14

0x6e4b,	// (0x000536df) main_cset_slider_pane_g15_ParamLimits

0x6e4b,	// (0x000536df) main_cset_slider_pane_g15

0xd891,	// (0x0005a125) main_cset_slider_pane_t14_ParamLimits

0xd891,	// (0x0005a125) main_cset_slider_pane_t14

0xd8ca,	// (0x0005a15e) main_cset_slider_pane_t15_ParamLimits

0xd8ca,	// (0x0005a15e) main_cset_slider_pane_t15

0x7352,	// (0x00053be6) aid_cam4_burst_size_cell_ParamLimits

0x7352,	// (0x00053be6) aid_cam4_burst_size_cell

0x7372,	// (0x00053c06) grid_cam4_burst_pane_ParamLimits

0x7372,	// (0x00053c06) grid_cam4_burst_pane

0x73aa,	// (0x00053c3e) linegrid_cam4_burst_pane_ParamLimits

0x73aa,	// (0x00053c3e) linegrid_cam4_burst_pane

0xda3d,	// (0x0005a2d1) scroll_pane_cp30_ParamLimits

0xda3d,	// (0x0005a2d1) scroll_pane_cp30

0x73ce,	// (0x00053c62) cell_cam4_burst_pane_ParamLimits

0x73ce,	// (0x00053c62) cell_cam4_burst_pane

0xda49,	// (0x0005a2dd) linegrid_cam4_burst_pane_g1_ParamLimits

0xda49,	// (0x0005a2dd) linegrid_cam4_burst_pane_g1

0x741b,	// (0x00053caf) linegrid_cam4_burst_pane_g2_ParamLimits

0x741b,	// (0x00053caf) linegrid_cam4_burst_pane_g2

0xda56,	// (0x0005a2ea) linegrid_cam4_burst_pane_g3_ParamLimits

0xda56,	// (0x0005a2ea) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0005c2e8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0005c2e8) linegrid_cam4_burst_pane_g

0x742c,	// (0x00053cc0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x742c,	// (0x00053cc0) linegrid_cam4_burst_pane_g3_copy1

0xda63,	// (0x0005a2f7) linegrid_cam4_burst_pane_g4_ParamLimits

0xda63,	// (0x0005a2f7) linegrid_cam4_burst_pane_g4

0x7446,	// (0x00053cda) linegrid_cam4_burst_pane_g5_ParamLimits

0x7446,	// (0x00053cda) linegrid_cam4_burst_pane_g5

0x7457,	// (0x00053ceb) linegrid_cam4_burst_pane_g6_ParamLimits

0x7457,	// (0x00053ceb) linegrid_cam4_burst_pane_g6

0xda70,	// (0x0005a304) linegrid_cam4_burst_pane_g7_ParamLimits

0xda70,	// (0x0005a304) linegrid_cam4_burst_pane_g7

0x746e,	// (0x00053d02) cell_cam4_burst_pane_g1

0xda89,	// (0x0005a31d) main_cam5_pane_t1_ParamLimits

0xda89,	// (0x0005a31d) main_cam5_pane_t1

0xda9b,	// (0x0005a32f) main_cam5_pane_t2_ParamLimits

0xda9b,	// (0x0005a32f) main_cam5_pane_t2

0xdaad,	// (0x0005a341) main_cam5_pane_t3_ParamLimits

0xdaad,	// (0x0005a341) main_cam5_pane_t3

0xdabf,	// (0x0005a353) main_cam5_pane_t4_ParamLimits

0xdabf,	// (0x0005a353) main_cam5_pane_t4

0xdad7,	// (0x0005a36b) main_cam5_pane_t5_ParamLimits

0xdad7,	// (0x0005a36b) main_cam5_pane_t5

0xdaeb,	// (0x0005a37f) main_cam5_pane_t6_ParamLimits

0xdaeb,	// (0x0005a37f) main_cam5_pane_t6

0xdaff,	// (0x0005a393) main_cam5_pane_t7_ParamLimits

0xdaff,	// (0x0005a393) main_cam5_pane_t7

0xdb11,	// (0x0005a3a5) main_cam5_pane_t8_ParamLimits

0xdb11,	// (0x0005a3a5) main_cam5_pane_t8

0xdb2d,	// (0x0005a3c1) main_cam5_pane_t9_ParamLimits

0xdb2d,	// (0x0005a3c1) main_cam5_pane_t9

0xdb3f,	// (0x0005a3d3) main_cam5_pane_t10_ParamLimits

0xdb3f,	// (0x0005a3d3) main_cam5_pane_t10

0xdb51,	// (0x0005a3e5) main_cam5_pane_t11_ParamLimits

0xdb51,	// (0x0005a3e5) main_cam5_pane_t11

0xdb63,	// (0x0005a3f7) main_cam5_pane_t12_ParamLimits

0xdb63,	// (0x0005a3f7) main_cam5_pane_t12

0xdb78,	// (0x0005a40c) main_cam5_pane_t13_ParamLimits

0xdb78,	// (0x0005a40c) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0005c2f4) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0005c2f4) main_cam5_pane_t

0x147b,	// (0x0004dd0f) popup_scut_keymap_window_ParamLimits

0x147b,	// (0x0004dd0f) popup_scut_keymap_window

0x7481,	// (0x00053d15) aid_size_cell_brow_shortcut

0xaa1e,	// (0x000572b2) bg_popup_window_pane_cp010

0x748d,	// (0x00053d21) grid_scut_pane

0x7499,	// (0x00053d2d) cell_scut_pane_ParamLimits

0x7499,	// (0x00053d2d) cell_scut_pane

0x74b0,	// (0x00053d44) cell_scut_pane_g1

0xdb95,	// (0x0005a429) cell_scut_pane_t1

0xdba4,	// (0x0005a438) cell_scut_pane_t2

0x74b9,	// (0x00053d4d) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0005c30f) cell_scut_pane_t

0x5376,	// (0x00051c0a) main_mup3_pane_g8_ParamLimits

0x5376,	// (0x00051c0a) main_mup3_pane_g8

0x6807,	// (0x0005309b) area_vitu2_query_pane_ParamLimits

0x6807,	// (0x0005309b) area_vitu2_query_pane

0x07db,	// (0x0004d06f) input_focus_pane_cp08

0xdbb3,	// (0x0005a447) area_vitu2_query_pane_g1

0x08e0,	// (0x0004d174) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0005c316) area_vitu2_query_pane_g

0x74c7,	// (0x00053d5b) area_vitu2_query_pane_t1_ParamLimits

0x74c7,	// (0x00053d5b) area_vitu2_query_pane_t1

0x74db,	// (0x00053d6f) area_vitu2_query_pane_t2_ParamLimits

0x74db,	// (0x00053d6f) area_vitu2_query_pane_t2

0x08f1,	// (0x0004d185) area_vitu2_query_pane_t3_ParamLimits

0x08f1,	// (0x0004d185) area_vitu2_query_pane_t3

0x74ef,	// (0x00053d83) area_vitu2_query_pane_t4_ParamLimits

0x74ef,	// (0x00053d83) area_vitu2_query_pane_t4

0x7517,	// (0x00053dab) area_vitu2_query_pane_t5_ParamLimits

0x7517,	// (0x00053dab) area_vitu2_query_pane_t5

0x753f,	// (0x00053dd3) area_vitu2_query_pane_t6_ParamLimits

0x753f,	// (0x00053dd3) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0005c31b) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0005c31b) area_vitu2_query_pane_t

0x758b,	// (0x00053e1f) bg_button_pane_cp018

0x7599,	// (0x00053e2d) bg_button_pane_cp021

0x0919,	// (0x0004d1ad) bg_button_pane_cp022

0x092a,	// (0x0004d1be) input_focus_pane_cp09

0xb2da,	// (0x00057b6e) aid_size_touch_mv_arrow_left

0xb305,	// (0x00057b99) aid_size_touch_mv_arrow_right

0xd9db,	// (0x0005a26f) main_cset_slider_pane_g16_ParamLimits

0xd9db,	// (0x0005a26f) main_cset_slider_pane_g16

0xd9e7,	// (0x0005a27b) main_cset_slider_pane_g17_ParamLimits

0xd9e7,	// (0x0005a27b) main_cset_slider_pane_g17

0x746e,	// (0x00053d02) cell_cam4_burst_pane_g1_ParamLimits

0x9737,	// (0x00055fcb) compa_mode_pane

0x7031,	// (0x000538c5) popup_vtel_slider_window_g3_ParamLimits

0x7031,	// (0x000538c5) popup_vtel_slider_window_g3

0x7048,	// (0x000538dc) popup_vtel_slider_window_g4_ParamLimits

0x7048,	// (0x000538dc) popup_vtel_slider_window_g4

0x705f,	// (0x000538f3) popup_vtel_slider_window_t1_ParamLimits

0x705f,	// (0x000538f3) popup_vtel_slider_window_t1

0x9737,	// (0x00055fcb) main_cl_pane

0x9a8b,	// (0x0005631f) popup_imed_adjust2_window_ParamLimits

0xc8e4,	// (0x00059178) bg_tb_trans_pane_cp05_ParamLimits

0xd206,	// (0x00059a9a) popup_imed_adjust2_window_g1_ParamLimits

0xd215,	// (0x00059aa9) popup_imed_adjust2_window_g2_ParamLimits

0xd215,	// (0x00059aa9) popup_imed_adjust2_window_g2

0xd221,	// (0x00059ab5) popup_imed_adjust2_window_g3_ParamLimits

0xd221,	// (0x00059ab5) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0005c086) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0005c086) popup_imed_adjust2_window_g

0xd22d,	// (0x00059ac1) popup_imed_adjust2_window_t1_ParamLimits

0xd245,	// (0x00059ad9) slider_imed_adjust_pane_ParamLimits

0xd259,	// (0x00059aed) slider_imed_adjust_pane_g1_ParamLimits

0xd269,	// (0x00059afd) slider_imed_adjust_pane_g2_ParamLimits

0xd279,	// (0x00059b0d) slider_imed_adjust_pane_g3_ParamLimits

0xd28a,	// (0x00059b1e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0005c08d) slider_imed_adjust_pane_g_ParamLimits

0x6590,	// (0x00052e24) aid_touch_area_cam4_ParamLimits

0x6590,	// (0x00052e24) aid_touch_area_cam4

0x9e39,	// (0x000566cd) battery_pane_cp01

0x665f,	// (0x00052ef3) main_camera4_pane_g6_ParamLimits

0x665f,	// (0x00052ef3) main_camera4_pane_g6

0x6689,	// (0x00052f1d) main_camera4_pane_t2_ParamLimits

0x6689,	// (0x00052f1d) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0005c190) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0005c190) main_camera4_pane_t

0x66be,	// (0x00052f52) aid_touch_area_vid4_ParamLimits

0x66be,	// (0x00052f52) aid_touch_area_vid4

0x6712,	// (0x00052fa6) main_video4_pane_g5_ParamLimits

0x6712,	// (0x00052fa6) main_video4_pane_g5

0x6737,	// (0x00052fcb) vid4_progress_pane_ParamLimits

0x6737,	// (0x00052fcb) vid4_progress_pane

0xd857,	// (0x0005a0eb) main_cset_slider_pane_g18_ParamLimits

0xd857,	// (0x0005a0eb) main_cset_slider_pane_g18

0xda7d,	// (0x0005a311) cell_cam4_burst_pane_g2_ParamLimits

0xda7d,	// (0x0005a311) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0005c2ef) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005c2ef) cell_cam4_burst_pane_g

0xa847,	// (0x000570db) bg_cl_pane_ParamLimits

0xa847,	// (0x000570db) bg_cl_pane

0x75a5,	// (0x00053e39) cl_header_pane_ParamLimits

0x75a5,	// (0x00053e39) cl_header_pane

0x75b9,	// (0x00053e4d) cl_listscroll_pane_ParamLimits

0x75b9,	// (0x00053e4d) cl_listscroll_pane

0xdbbf,	// (0x0005a453) bg_cl_pane_g1

0xdbc7,	// (0x0005a45b) bg_cl_pane_g2

0xdbcf,	// (0x0005a463) bg_cl_pane_g3

0xdbd7,	// (0x0005a46b) bg_cl_pane_g4

0xdbdf,	// (0x0005a473) bg_cl_pane_g5

0xdbe7,	// (0x0005a47b) bg_cl_pane_g6

0xdbef,	// (0x0005a483) bg_cl_pane_g7

0xdbf7,	// (0x0005a48b) bg_cl_pane_g8

0xdbff,	// (0x0005a493) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0005c32a) bg_cl_pane_g

0x75c9,	// (0x00053e5d) aid_height_cl_leading_ParamLimits

0x75c9,	// (0x00053e5d) aid_height_cl_leading

0x75d5,	// (0x00053e69) aid_height_cl_text_ParamLimits

0x75d5,	// (0x00053e69) aid_height_cl_text

0xad5e,	// (0x000575f2) bg_cl_header_pane_ParamLimits

0xad5e,	// (0x000575f2) bg_cl_header_pane

0x75f4,	// (0x00053e88) cl_header_pane_g1_ParamLimits

0x75f4,	// (0x00053e88) cl_header_pane_g1

0x760a,	// (0x00053e9e) cl_header_pane_t1_ParamLimits

0x760a,	// (0x00053e9e) cl_header_pane_t1

0xdc07,	// (0x0005a49b) cl_list_pane

0xd82a,	// (0x0005a0be) hc_scroll_pane_cp01

0xac57,	// (0x000574eb) bg_cl_header_pane_g1

0xd710,	// (0x00059fa4) bg_cl_header_pane_g2

0xac77,	// (0x0005750b) bg_cl_header_pane_g3

0xd720,	// (0x00059fb4) bg_cl_header_pane_g4

0xd718,	// (0x00059fac) bg_cl_header_pane_g5

0xd934,	// (0x0005a1c8) bg_cl_header_pane_g6

0xd738,	// (0x00059fcc) bg_cl_header_pane_g7

0xd740,	// (0x00059fd4) bg_cl_header_pane_g8

0xd730,	// (0x00059fc4) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0005c33d) bg_cl_header_pane_g

0x7623,	// (0x00053eb7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7623,	// (0x00053eb7) hc_cl_list_double_graphic_heading_pane

0x7634,	// (0x00053ec8) hc_cl_list_single_graphic_pane_ParamLimits

0x7634,	// (0x00053ec8) hc_cl_list_single_graphic_pane

0x764d,	// (0x00053ee1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x764d,	// (0x00053ee1) hc_cl_list_single_graphic_pane_g1

0x7659,	// (0x00053eed) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7659,	// (0x00053eed) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0005c350) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0005c350) hc_cl_list_single_graphic_pane_g

0x766d,	// (0x00053f01) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x766d,	// (0x00053f01) hc_cl_list_single_graphic_pane_t1

0x764d,	// (0x00053ee1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x764d,	// (0x00053ee1) hc_cl_list_double_graphic_heading_pane_g1

0x7682,	// (0x00053f16) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7682,	// (0x00053f16) hc_cl_list_double_graphic_heading_pane_g2

0x7696,	// (0x00053f2a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7696,	// (0x00053f2a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0005c355) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0005c355) hc_cl_list_double_graphic_heading_pane_g

0x76aa,	// (0x00053f3e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76aa,	// (0x00053f3e) hc_cl_list_double_graphic_heading_pane_t1

0x76bf,	// (0x00053f53) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76bf,	// (0x00053f53) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0005c35c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0005c35c) hc_cl_list_double_graphic_heading_pane_t

0x9f92,	// (0x00056826) vid4_progress_pane_g1

0x9fa2,	// (0x00056836) vid4_progress_pane_g2

0x76d4,	// (0x00053f68) vid4_progress_pane_g3

0x9fb2,	// (0x00056846) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0005c361) vid4_progress_pane_g

0x76e6,	// (0x00053f7a) vid4_progress_pane_t1

0x9fca,	// (0x0005685e) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0005c36c) vid4_progress_pane_t

0x76fc,	// (0x00053f90) wait_bar_pane_cp07

0xcadf,	// (0x00059373) blid_firmament_pane_ParamLimits

0xcb22,	// (0x000593b6) popup_blid_sat_info2_window_g1

0xcb46,	// (0x000593da) popup_blid_sat_info2_window_t3

0xcb54,	// (0x000593e8) popup_blid_sat_info2_window_t4

0xcb62,	// (0x000593f6) popup_blid_sat_info2_window_t5

0xcb70,	// (0x00059404) popup_blid_sat_info2_window_t6

0xcb80,	// (0x00059414) popup_blid_sat_info2_window_t7

0xcb8e,	// (0x00059422) popup_blid_sat_info2_window_t8

0xcb9c,	// (0x00059430) popup_blid_sat_info2_window_t9

0xcbaa,	// (0x0005943e) popup_blid_sat_info2_window_t10

0xcc6c,	// (0x00059500) aid_firma_cardinal_ParamLimits

0xcc80,	// (0x00059514) blid_firmament_pane_t1_ParamLimits

0xcc97,	// (0x0005952b) blid_firmament_pane_t2_ParamLimits

0xccae,	// (0x00059542) blid_firmament_pane_t3_ParamLimits

0xccc5,	// (0x00059559) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0005bf7a) blid_firmament_pane_t_ParamLimits

0xccdc,	// (0x00059570) blid_sat_info_pane_ParamLimits

0xad5e,	// (0x000575f2) main_cam_set_pane_ParamLimits

0x5c39,	// (0x000524cd) aid_size_cell_colour_35_ParamLimits

0x5c59,	// (0x000524ed) aid_size_cell_colour_112_ParamLimits

0x5c79,	// (0x0005250d) aid_size_cell_effect_ParamLimits

0xc8e4,	// (0x00059178) bg_tb_trans_pane_cp02_ParamLimits

0xaef9,	// (0x0005778d) heading_imed_pane_ParamLimits

0x5c99,	// (0x0005252d) listscroll_imed_pane_ParamLimits

0xbeca,	// (0x0005875e) popup_call2_audio_first_window_g5_ParamLimits

0xbeca,	// (0x0005875e) popup_call2_audio_first_window_g5

0x6237,	// (0x00052acb) aid_size_touch_image3_arrow_left_ParamLimits

0x6237,	// (0x00052acb) aid_size_touch_image3_arrow_left

0x6263,	// (0x00052af7) aid_size_touch_image3_arrow_right_ParamLimits

0x6263,	// (0x00052af7) aid_size_touch_image3_arrow_right

0x9fdf,	// (0x00056873) vid4_progress_pane_t3

0x5fae,	// (0x00052842) main_hwr_training_symbol_option_pane_ParamLimits

0x5fae,	// (0x00052842) main_hwr_training_symbol_option_pane

0xd4f3,	// (0x00059d87) popup_hwr_training_preview_window_ParamLimits

0xd4f3,	// (0x00059d87) popup_hwr_training_preview_window

0x5fce,	// (0x00052862) hwr_training_navi_pane_g5_ParamLimits

0x5fce,	// (0x00052862) hwr_training_navi_pane_g5

0xd6fe,	// (0x00059f92) popup_char_count_window

0xad5e,	// (0x000575f2) bg_popup_sub_pane_cp20_ParamLimits

0x716d,	// (0x00053a01) list_vitu2_match_list_pane_ParamLimits

0x717c,	// (0x00053a10) vitu2_page_scroll_pane_ParamLimits

0x717c,	// (0x00053a10) vitu2_page_scroll_pane

0xdc10,	// (0x0005a4a4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc10,	// (0x0005a4a4) list_single_hwr_training_symbol_option_pane

0xdc23,	// (0x0005a4b7) list_single_hwr_training_symbol_option_pane_g1

0xdc2b,	// (0x0005a4bf) list_single_hwr_training_symbol_option_pane_t1

0xdc39,	// (0x0005a4cd) bg_button_pane_cp023

0xdc42,	// (0x0005a4d6) bg_button_pane_cp024

0x772f,	// (0x00053fc3) vitu2_page_scroll_pane_g1

0x7737,	// (0x00053fcb) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0005c373) vitu2_page_scroll_pane_g

0x773f,	// (0x00053fd3) vitu2_page_scroll_pane_t1

0xcd15,	// (0x000595a9) popup_char_count_window_g1

0xdc75,	// (0x0005a509) popup_char_count_window_g2

0xdc7e,	// (0x0005a512) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0005c378) popup_char_count_window_g

0xdc87,	// (0x0005a51b) popup_char_count_window_t1

0x9737,	// (0x00055fcb) main_vded2_pane

0xd1f2,	// (0x00059a86) aid_size_cell_imed_line

0xd1fc,	// (0x00059a90) grid_imed_line_width_pane

0x9ee9,	// (0x0005677d) vid4_indicators_pane_g4

0xdc95,	// (0x0005a529) cell_imed_line_width_pane_ParamLimits

0xdc95,	// (0x0005a529) cell_imed_line_width_pane

0xdca9,	// (0x0005a53d) cell_imed_line_width_pane_g1

0xdcb2,	// (0x0005a546) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0005c37f) cell_imed_line_width_pane_g

0x774e,	// (0x00053fe2) main_vded2_pane_g1_ParamLimits

0x774e,	// (0x00053fe2) main_vded2_pane_g1

0x7764,	// (0x00053ff8) main_vded2_pane_g2_ParamLimits

0x7764,	// (0x00053ff8) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0005c384) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0005c384) main_vded2_pane_g

0x7776,	// (0x0005400a) vded2_slider_pane_ParamLimits

0x7776,	// (0x0005400a) vded2_slider_pane

0x7786,	// (0x0005401a) aid_size_touch_vded2_end

0x7790,	// (0x00054024) aid_size_touch_vded2_playhead

0xdcba,	// (0x0005a54e) aid_size_touch_vded2_start

0xdcc2,	// (0x0005a556) vded2_slider_bg_pane

0xdccb,	// (0x0005a55f) vded2_slider_pane_g1

0xdcd4,	// (0x0005a568) vded2_slider_pane_g2

0x779a,	// (0x0005402e) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0005c389) vded2_slider_pane_g

0xdcdc,	// (0x0005a570) vded2_slider_bg_pane_g1

0xdce5,	// (0x0005a579) vded2_slider_bg_pane_g2

0xdcee,	// (0x0005a582) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0005c390) vded2_slider_bg_pane_g

0x3939,	// (0x000501cd) aid_postcard_touch_down_pane_ParamLimits

0x3939,	// (0x000501cd) aid_postcard_touch_down_pane

0x394f,	// (0x000501e3) aid_postcard_touch_up_pane_ParamLimits

0x394f,	// (0x000501e3) aid_postcard_touch_up_pane

0x9737,	// (0x00055fcb) main_blid2_pane

0x9a71,	// (0x00056305) popup_blid2_search_window

0x9737,	// (0x00055fcb) blid2_gps_pane

0x9737,	// (0x00055fcb) blid2_navig_pane

0x9737,	// (0x00055fcb) blid2_search_pane

0x9737,	// (0x00055fcb) blid2_tripm_pane

0x77a5,	// (0x00054039) blid2_search_pane_g1_ParamLimits

0x77a5,	// (0x00054039) blid2_search_pane_g1

0x77bd,	// (0x00054051) blid2_search_pane_t1_ParamLimits

0x77bd,	// (0x00054051) blid2_search_pane_t1

0x77cf,	// (0x00054063) aid_size_cell_blid2_gps_ParamLimits

0x77cf,	// (0x00054063) aid_size_cell_blid2_gps

0x77e7,	// (0x0005407b) blid2_gps_pane_g1_ParamLimits

0x77e7,	// (0x0005407b) blid2_gps_pane_g1

0x77fb,	// (0x0005408f) grid_blid2_satellite_pane_ParamLimits

0x77fb,	// (0x0005408f) grid_blid2_satellite_pane

0x7815,	// (0x000540a9) blid2_navig_pane_g1_ParamLimits

0x7815,	// (0x000540a9) blid2_navig_pane_g1

0x7821,	// (0x000540b5) blid2_navig_pane_t1_ParamLimits

0x7821,	// (0x000540b5) blid2_navig_pane_t1

0x783c,	// (0x000540d0) blid2_navig_pane_t2_ParamLimits

0x783c,	// (0x000540d0) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005c397) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005c397) blid2_navig_pane_t

0x7857,	// (0x000540eb) blid2_navig_ring_pane_ParamLimits

0x7857,	// (0x000540eb) blid2_navig_ring_pane

0x7870,	// (0x00054104) blid2_speed_pane_ParamLimits

0x7870,	// (0x00054104) blid2_speed_pane

0x787c,	// (0x00054110) blid2_tripm_pane_g1_ParamLimits

0x787c,	// (0x00054110) blid2_tripm_pane_g1

0x7897,	// (0x0005412b) blid2_tripm_pane_g2_ParamLimits

0x7897,	// (0x0005412b) blid2_tripm_pane_g2

0x78ab,	// (0x0005413f) blid2_tripm_pane_g3_ParamLimits

0x78ab,	// (0x0005413f) blid2_tripm_pane_g3

0x78bf,	// (0x00054153) blid2_tripm_pane_g4_ParamLimits

0x78bf,	// (0x00054153) blid2_tripm_pane_g4

0x78d3,	// (0x00054167) blid2_tripm_pane_g5_ParamLimits

0x78d3,	// (0x00054167) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005c39c) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005c39c) blid2_tripm_pane_g

0x78f9,	// (0x0005418d) blid2_tripm_pane_t1_ParamLimits

0x78f9,	// (0x0005418d) blid2_tripm_pane_t1

0x7914,	// (0x000541a8) blid2_tripm_pane_t2_ParamLimits

0x7914,	// (0x000541a8) blid2_tripm_pane_t2

0x792d,	// (0x000541c1) blid2_tripm_pane_t3_ParamLimits

0x792d,	// (0x000541c1) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005c3a9) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005c3a9) blid2_tripm_pane_t

0x7974,	// (0x00054208) cell_blid2_satellite_pane_ParamLimits

0x7974,	// (0x00054208) cell_blid2_satellite_pane

0x7992,	// (0x00054226) cell_blid2_satellite_pane_g1

0xdcf7,	// (0x0005a58b) cell_blid2_satellite_pane_t1

0xccec,	// (0x00059580) blid2_speed_pane_g1

0xdd05,	// (0x0005a599) blid2_speed_pane_t1

0xdd13,	// (0x0005a5a7) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005c3b2) blid2_speed_pane_t

0xccec,	// (0x00059580) blid2_navig_ring_pane_g1

0x799b,	// (0x0005422f) blid2_navig_ring_pane_g2

0x79a3,	// (0x00054237) blid2_navig_ring_pane_g3

0x79ab,	// (0x0005423f) blid2_navig_ring_pane_g4

0x79b3,	// (0x00054247) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005c3b7) blid2_navig_ring_pane_g

0x9737,	// (0x00055fcb) bg_popup_window_pane_cp011

0xdd21,	// (0x0005a5b5) popup_blid2_search_window_g1

0xdd29,	// (0x0005a5bd) popup_blid2_search_window_t1

0xdd37,	// (0x0005a5cb) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005c3c2) popup_blid2_search_window_t

0xab66,	// (0x000573fa) main_browser_pane_g1

0xa847,	// (0x000570db) main_browser_pane_ParamLimits

0xad5e,	// (0x000575f2) bg_button_pane_cp011_ParamLimits

0x6a3c,	// (0x000532d0) cell_vitu2_function_pane_g1_ParamLimits

0xc8e4,	// (0x00059178) bg_popup_sub_pane_cp22_ParamLimits

0x07db,	// (0x0004d06f) input_focus_pane_cp08_ParamLimits

0x72ff,	// (0x00053b93) popup_vitu2_query_button_pane_ParamLimits

0x72ff,	// (0x00053b93) popup_vitu2_query_button_pane

0x07f2,	// (0x0004d086) popup_vitu2_query_input_button_pane

0xd96f,	// (0x0005a203) popup_vitu2_query_window_g1_ParamLimits

0x07fc,	// (0x0004d090) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0005c2c3) popup_vitu2_query_window_g_ParamLimits

0x9737,	// (0x00055fcb) bg_button_pane_cp026

0x79bb,	// (0x0005424f) popup_vitu2_query_input_button_pane_g1

0x9737,	// (0x00055fcb) bg_button_pane_cp025

0xdd45,	// (0x0005a5d9) popup_vitu2_query_button_pane_t1

0x4fd0,	// (0x00051864) main_mp3_pane_t6

0x4fde,	// (0x00051872) popup_slider_window_cp01

0x9e55,	// (0x000566e9) cam4_battery_pane

0x9ea8,	// (0x0005673c) cam4_battery_pane_cp02

0x9f8a,	// (0x0005681e) cam4_battery_pane_cp01

0x9f8a,	// (0x0005681e) cam4_battery_pane_cp03

0xccec,	// (0x00059580) cam4_battery_pane_g1

0xdd53,	// (0x0005a5e7) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005c3c7) cam4_battery_pane_g

0xcbb8,	// (0x0005944c) popup_blid_sat_info2_window_t11

0xb2da,	// (0x00057b6e) aid_size_touch_mv_arrow_left_ParamLimits

0xb305,	// (0x00057b99) aid_size_touch_mv_arrow_right_ParamLimits

0xb363,	// (0x00057bf7) navi_pane_g1_ParamLimits

0xb36f,	// (0x00057c03) navi_pane_g2_ParamLimits

0xb39d,	// (0x00057c31) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005bc79) navi_pane_g_ParamLimits

0x33ba,	// (0x0004fc4e) navi_pane_mv_t1_ParamLimits

0x5ca5,	// (0x00052539) grid_imed_effect_pane_ParamLimits

0x22c9,	// (0x0004eb5d) aid_placing_vt_slider_lsc

0xaab5,	// (0x00057349) aid_placing_vt_slider_prt

0xad5e,	// (0x000575f2) bg_tb_trans_pane_cp01_ParamLimits

0xce5a,	// (0x000596ee) popup_image_details_window_g1_ParamLimits

0xce6d,	// (0x00059701) popup_image_details_window_g2_ParamLimits

0xce82,	// (0x00059716) popup_image_details_window_g3_ParamLimits

0xce82,	// (0x00059716) popup_image_details_window_g3

0xf72b,	// (0x0005bfbf) popup_image_details_window_g_ParamLimits

0xce96,	// (0x0005972a) popup_image_details_window_t1_ParamLimits

0xcea8,	// (0x0005973c) popup_image_details_window_t2_ParamLimits

0xcecd,	// (0x00059761) popup_image_details_window_t3_ParamLimits

0xcee1,	// (0x00059775) popup_image_details_window_t4_ParamLimits

0xcefc,	// (0x00059790) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0005bfc6) popup_image_details_window_t_ParamLimits

0x75e1,	// (0x00053e75) cl_header_name_pane_ParamLimits

0x75e1,	// (0x00053e75) cl_header_name_pane

0x79c3,	// (0x00054257) cl_header_name_pane_t1_ParamLimits

0x79c3,	// (0x00054257) cl_header_name_pane_t1

0x79e4,	// (0x00054278) cl_header_name_pane_t2_ParamLimits

0x79e4,	// (0x00054278) cl_header_name_pane_t2

0x7a26,	// (0x000542ba) cl_header_name_pane_t3_ParamLimits

0x7a26,	// (0x000542ba) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005c3cc) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005c3cc) cl_header_name_pane_t

0xb42c,	// (0x00057cc0) navi_pane_mv_g2_ParamLimits

0xd6d8,	// (0x00059f6c) field_vitu2_entry_pane_g1_ParamLimits

0xd6e4,	// (0x00059f78) field_vitu2_entry_pane_g2_ParamLimits

0xd6f0,	// (0x00059f84) field_vitu2_entry_pane_g3_ParamLimits

0xd6f0,	// (0x00059f84) field_vitu2_entry_pane_g3

0xf92e,	// (0x0005c1c2) field_vitu2_entry_pane_g_ParamLimits

0x9f1c,	// (0x000567b0) cell_vitu2_itu_pane_g1_ParamLimits

0x69d0,	// (0x00053264) cell_vitu2_itu_pane_g2_ParamLimits

0x69d0,	// (0x00053264) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0005c1ce) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0005c1ce) cell_vitu2_itu_pane_g

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp05_ParamLimits

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp05

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp03

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp04

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp10_ParamLimits

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp10

0x0919,	// (0x0004d1ad) bg_vkb2_func_pane_cp08

0x758b,	// (0x00053e1f) bg_vkb2_func_pane_cp06

0x7599,	// (0x00053e2d) bg_vkb2_func_pane_cp07

0xdc4b,	// (0x0005a4df) bg_vkb2_func_pane_cp11_ParamLimits

0xdc4b,	// (0x0005a4df) bg_vkb2_func_pane_cp11

0xdc60,	// (0x0005a4f4) bg_vkb2_func_pane_cp12_ParamLimits

0xdc60,	// (0x0005a4f4) bg_vkb2_func_pane_cp12

0x9737,	// (0x00055fcb) bg_vkb2_func_pane_cp09

0xd710,	// (0x00059fa4) bg_vkb2_func_pane_g1

0xac77,	// (0x0005750b) bg_vkb2_func_pane_g2

0xd718,	// (0x00059fac) bg_vkb2_func_pane_g3

0xd720,	// (0x00059fb4) bg_vkb2_func_pane_g4

0xd934,	// (0x0005a1c8) bg_vkb2_func_pane_g5

0xd738,	// (0x00059fcc) bg_vkb2_func_pane_g6

0xd740,	// (0x00059fd4) bg_vkb2_func_pane_g7

0xd730,	// (0x00059fc4) bg_vkb2_func_pane_g8

0xac57,	// (0x000574eb) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005c3d3) bg_vkb2_func_pane_g

0x78e7,	// (0x0005417b) blid2_tripm_pane_g6_ParamLimits

0x78e7,	// (0x0005417b) blid2_tripm_pane_g6

0xd5ab,	// (0x00059e3f) mp4_progress_pane_g1

0x7960,	// (0x000541f4) blid2_tripm_values_pane_ParamLimits

0x7960,	// (0x000541f4) blid2_tripm_values_pane

0x7a57,	// (0x000542eb) blid2_tripm_values_pane_t1

0x7a65,	// (0x000542f9) blid2_tripm_values_pane_t2

0x7a73,	// (0x00054307) blid2_tripm_values_pane_t3

0x7a81,	// (0x00054315) blid2_tripm_values_pane_t4

0x7a8f,	// (0x00054323) blid2_tripm_values_pane_t5

0x7a9d,	// (0x00054331) blid2_tripm_values_pane_t6

0x7aab,	// (0x0005433f) blid2_tripm_values_pane_t7

0x7ab9,	// (0x0005434d) blid2_tripm_values_pane_t8

0x7ac7,	// (0x0005435b) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005c3e6) blid2_tripm_values_pane_t

0x230b,	// (0x0004eb9f) call_video_pane_t1_ParamLimits

0x2329,	// (0x0004ebbd) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005bb02) call_video_pane_t_ParamLimits

0x060f,	// (0x0004cea3) msg_header_pane_g1_ParamLimits

0xb614,	// (0x00057ea8) msg_header_pane_g2_ParamLimits

0xb614,	// (0x00057ea8) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005bd1c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005bd1c) msg_header_pane_g

0xa847,	// (0x000570db) main_clock2_pane_ParamLimits

0x599e,	// (0x00052232) grid_clock2_toolbar_pane_ParamLimits

0x599e,	// (0x00052232) grid_clock2_toolbar_pane

0x599e,	// (0x00052232) listscroll_clock2_pane_ParamLimits

0x599e,	// (0x00052232) listscroll_clock2_pane

0x5a9a,	// (0x0005232e) main_clock2_pane_t3_ParamLimits

0x5a9a,	// (0x0005232e) main_clock2_pane_t3

0x5abe,	// (0x00052352) main_clock2_pane_t4_ParamLimits

0x5abe,	// (0x00052352) main_clock2_pane_t4

0xdd5d,	// (0x0005a5f1) cell_clock2_toolbar_pane

0xdd65,	// (0x0005a5f9) cell_clock2_toolbar_pane_cp01

0xdd65,	// (0x0005a5f9) cell_clock2_toolbar_pane_cp02

0xdd6d,	// (0x0005a601) cell_clock2_toolbar_pane_cp03

0xdd75,	// (0x0005a609) list_clock2_pane

0xb25f,	// (0x00057af3) scroll_pane_cp10

0xdd7d,	// (0x0005a611) list_single_clock2_pane_ParamLimits

0xdd7d,	// (0x0005a611) list_single_clock2_pane

0xaa1e,	// (0x000572b2) list_highlight_pane_cp08

0xdd8a,	// (0x0005a61e) list_single_clock2_pane_t1

0xdd98,	// (0x0005a62c) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005c3f9) list_single_clock2_pane_t

0x9737,	// (0x00055fcb) bg_button_pane_cp10

0xdda6,	// (0x0005a63a) cell_clock2_toolbar_pane_g1

0x38c5,	// (0x00050159) aid_main_viewer_pane_g1_ParamLimits

0x38c5,	// (0x00050159) aid_main_viewer_pane_g1

0x38d3,	// (0x00050167) aid_main_viewer_pane_g2_ParamLimits

0x38d3,	// (0x00050167) aid_main_viewer_pane_g2

0x38e1,	// (0x00050175) aid_main_viewer_pane_g3_ParamLimits

0x38e1,	// (0x00050175) aid_main_viewer_pane_g3

0x38f0,	// (0x00050184) aid_main_viewer_pane_g4_ParamLimits

0x38f0,	// (0x00050184) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005bd2d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005bd2d) aid_main_viewer_pane_g

0x41f8,	// (0x00050a8c) main_calc_pane_ParamLimits

0x420c,	// (0x00050aa0) main_dialer2_pane_ParamLimits

0x9737,	// (0x00055fcb) main_cam6_pane

0x9737,	// (0x00055fcb) main_vid6_pane

0x59aa,	// (0x0005223e) listscroll_gen_pane_cp06_ParamLimits

0x59aa,	// (0x0005223e) listscroll_gen_pane_cp06

0x5ae1,	// (0x00052375) main_clock2_pane_t5_ParamLimits

0x5ae1,	// (0x00052375) main_clock2_pane_t5

0x5b3b,	// (0x000523cf) aid_call2_pane_cp10_ParamLimits

0x5b4d,	// (0x000523e1) aid_call_pane_cp10_ParamLimits

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b5f,	// (0x000523f3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b5f,	// (0x000523f3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2ce,	// (0x00057b62) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0005c07b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b71,	// (0x00052405) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61e4,	// (0x00052a78) cell_dialer2_keypad_pane_g2_ParamLimits

0x61e4,	// (0x00052a78) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0005c161) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0005c161) cell_dialer2_keypad_pane_g

0x6200,	// (0x00052a94) cell_dialer2_keypad_pane_t1

0x6d56,	// (0x000535ea) main_cset_text2_pane_ParamLimits

0x6d56,	// (0x000535ea) main_cset_text2_pane

0xdbb3,	// (0x0005a447) area_vitu2_query_pane_g1_ParamLimits

0x08e0,	// (0x0004d174) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0005c316) area_vitu2_query_pane_g_ParamLimits

0x7567,	// (0x00053dfb) area_vitu2_query_pane_t7_ParamLimits

0x7567,	// (0x00053dfb) area_vitu2_query_pane_t7

0x758b,	// (0x00053e1f) bg_button_pane_cp018_ParamLimits

0x7599,	// (0x00053e2d) bg_button_pane_cp021_ParamLimits

0x0919,	// (0x0004d1ad) bg_button_pane_cp022_ParamLimits

0x0919,	// (0x0004d1ad) bg_vkb2_func_pane_cp08_ParamLimits

0x758b,	// (0x00053e1f) bg_vkb2_func_pane_cp06_ParamLimits

0x7599,	// (0x00053e2d) bg_vkb2_func_pane_cp07_ParamLimits

0x092a,	// (0x0004d1be) input_focus_pane_cp09_ParamLimits

0x9ff5,	// (0x00056889) cam6_autofocus_pane_ParamLimits

0x9ff5,	// (0x00056889) cam6_autofocus_pane

0x7ad5,	// (0x00054369) cam6_image_uncrop_pane_ParamLimits

0x7ad5,	// (0x00054369) cam6_image_uncrop_pane

0x7ae4,	// (0x00054378) cam6_indi_pane_ParamLimits

0x7ae4,	// (0x00054378) cam6_indi_pane

0x7afa,	// (0x0005438e) cam6_mode_pane_ParamLimits

0x7afa,	// (0x0005438e) cam6_mode_pane

0x7b0c,	// (0x000543a0) cam6_timer_pane_ParamLimits

0x7b0c,	// (0x000543a0) cam6_timer_pane

0x7b1c,	// (0x000543b0) cam6_zoom_pane_ParamLimits

0x7b1c,	// (0x000543b0) cam6_zoom_pane

0x7b28,	// (0x000543bc) cam6_mode_pane_g1_ParamLimits

0x7b28,	// (0x000543bc) cam6_mode_pane_g1

0x7b38,	// (0x000543cc) cam6_mode_pane_g2_ParamLimits

0x7b38,	// (0x000543cc) cam6_mode_pane_g2

0x7b48,	// (0x000543dc) cam6_mode_pane_g3_ParamLimits

0x7b48,	// (0x000543dc) cam6_mode_pane_g3

0x7b58,	// (0x000543ec) cam6_mode_pane_g4_ParamLimits

0x7b58,	// (0x000543ec) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005c3fe) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005c3fe) cam6_mode_pane_g

0xd9ad,	// (0x0005a241) bg_tb_trans_pane_cp08_ParamLimits

0xd9ad,	// (0x0005a241) bg_tb_trans_pane_cp08

0xddae,	// (0x0005a642) cam6_battery_pane_ParamLimits

0xddae,	// (0x0005a642) cam6_battery_pane

0xddc4,	// (0x0005a658) cam6_indi_pane_g1_ParamLimits

0xddc4,	// (0x0005a658) cam6_indi_pane_g1

0xddd6,	// (0x0005a66a) cam6_indi_pane_g2_ParamLimits

0xddd6,	// (0x0005a66a) cam6_indi_pane_g2

0xdde8,	// (0x0005a67c) cam6_indi_pane_g3_ParamLimits

0xdde8,	// (0x0005a67c) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005c407) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005c407) cam6_indi_pane_g

0xddfa,	// (0x0005a68e) cam6_indi_pane_t1_ParamLimits

0xddfa,	// (0x0005a68e) cam6_indi_pane_t1

0x7b68,	// (0x000543fc) cam6_autofocus_pane_g1

0x7b70,	// (0x00054404) cam6_autofocus_pane_g2

0x7b78,	// (0x0005440c) cam6_autofocus_pane_g3

0x7b80,	// (0x00054414) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005c40e) cam6_autofocus_pane_g

0xde20,	// (0x0005a6b4) cam6_timer_pane_g1

0xde28,	// (0x0005a6bc) cam6_timer_pane_t1

0xde36,	// (0x0005a6ca) cam6_zoom_cont_pane

0xde3e,	// (0x0005a6d2) cam6_zoom_pane_g1

0xde46,	// (0x0005a6da) cam6_zoom_pane_g2

0x7b88,	// (0x0005441c) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005c417) cam6_zoom_pane_g

0xccec,	// (0x00059580) cam6_battery_pane_g1

0xccec,	// (0x00059580) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0005bf83) cam6_battery_pane_g

0xde4e,	// (0x0005a6e2) cam6_zoom_cont_pane_g1

0xde57,	// (0x0005a6eb) cam6_zoom_cont_pane_g2

0xde60,	// (0x0005a6f4) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005c41e) cam6_zoom_cont_pane_g

0x7ba5,	// (0x00054439) cam6_mode_pane_cp_ParamLimits

0x7ba5,	// (0x00054439) cam6_mode_pane_cp

0x7b1c,	// (0x000543b0) cam6_zoom_pane_cp_ParamLimits

0x7b1c,	// (0x000543b0) cam6_zoom_pane_cp

0x7bb7,	// (0x0005444b) vid6_image_uncrop_cif_pane_ParamLimits

0x7bb7,	// (0x0005444b) vid6_image_uncrop_cif_pane

0x7bc7,	// (0x0005445b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bc7,	// (0x0005445b) vid6_image_uncrop_nhd_pane

0x7ad5,	// (0x00054369) vid6_image_uncrop_vga_pane_ParamLimits

0x7ad5,	// (0x00054369) vid6_image_uncrop_vga_pane

0x7bd6,	// (0x0005446a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bd6,	// (0x0005446a) vid6_image_uncrop_wvga_pane

0x7be5,	// (0x00054479) vid6_indi_pane_ParamLimits

0x7be5,	// (0x00054479) vid6_indi_pane

0xd9ad,	// (0x0005a241) bg_tb_trans_pane_cp09_ParamLimits

0xd9ad,	// (0x0005a241) bg_tb_trans_pane_cp09

0xde78,	// (0x0005a70c) cam6_battery_pane_cp_ParamLimits

0xde78,	// (0x0005a70c) cam6_battery_pane_cp

0xde84,	// (0x0005a718) vid6_indi_pane_g1_ParamLimits

0xde84,	// (0x0005a718) vid6_indi_pane_g1

0xde96,	// (0x0005a72a) vid6_indi_pane_g2_ParamLimits

0xde96,	// (0x0005a72a) vid6_indi_pane_g2

0xdea8,	// (0x0005a73c) vid6_indi_pane_g3_ParamLimits

0xdea8,	// (0x0005a73c) vid6_indi_pane_g3

0xdebd,	// (0x0005a751) vid6_indi_pane_g4_ParamLimits

0xdebd,	// (0x0005a751) vid6_indi_pane_g4

0xded2,	// (0x0005a766) vid6_indi_pane_g5_ParamLimits

0xded2,	// (0x0005a766) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005c425) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005c425) vid6_indi_pane_g

0xdeec,	// (0x0005a780) vid6_indi_pane_t1_ParamLimits

0xdeec,	// (0x0005a780) vid6_indi_pane_t1

0xdf02,	// (0x0005a796) vid6_indi_pane_t2_ParamLimits

0xdf02,	// (0x0005a796) vid6_indi_pane_t2

0xdf2a,	// (0x0005a7be) vid6_indi_pane_t3_ParamLimits

0xdf2a,	// (0x0005a7be) vid6_indi_pane_t3

0xdf52,	// (0x0005a7e6) vid6_indi_pane_t4_ParamLimits

0xdf52,	// (0x0005a7e6) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005c430) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005c430) vid6_indi_pane_t

0xdf76,	// (0x0005a80a) wait_bar_pane_cp08

0x7bfd,	// (0x00054491) main_cset_text2_pane_t1_ParamLimits

0x7bfd,	// (0x00054491) main_cset_text2_pane_t1

0x7b90,	// (0x00054424) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b90,	// (0x00054424) listscroll_gen_pane_cp06_t1

0x9737,	// (0x00055fcb) main_cam6_set_pane

0xcf46,	// (0x000597da) bg_tb_trans_pane_cp06_ParamLimits

0x9e5d,	// (0x000566f1) cam4_indicators_pane_g1_ParamLimits

0x9e6e,	// (0x00056702) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0005c19e) cam4_indicators_pane_g_ParamLimits

0x9e86,	// (0x0005671a) cam4_indicators_pane_t1_ParamLimits

0xad5e,	// (0x000575f2) bg_tb_trans_pane_cp07_ParamLimits

0x9eb0,	// (0x00056744) vid4_indicators_pane_g1_ParamLimits

0x9ec4,	// (0x00056758) vid4_indicators_pane_g2_ParamLimits

0x9ed8,	// (0x0005676c) vid4_indicators_pane_g3_ParamLimits

0x9ee9,	// (0x0005677d) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0005c1b0) vid4_indicators_pane_g_ParamLimits

0x9f05,	// (0x00056799) vid4_indicators_pane_t1_ParamLimits

0x9f92,	// (0x00056826) vid4_progress_pane_g1_ParamLimits

0x9fa2,	// (0x00056836) vid4_progress_pane_g2_ParamLimits

0x76d4,	// (0x00053f68) vid4_progress_pane_g3_ParamLimits

0x9fb2,	// (0x00056846) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0005c361) vid4_progress_pane_g_ParamLimits

0x76e6,	// (0x00053f7a) vid4_progress_pane_t1_ParamLimits

0x9fca,	// (0x0005685e) vid4_progress_pane_t2_ParamLimits

0x9fdf,	// (0x00056873) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0005c36c) vid4_progress_pane_t_ParamLimits

0x76fc,	// (0x00053f90) wait_bar_pane_cp07_ParamLimits

0x7c1b,	// (0x000544af) main_cam6_set_pane_g2_ParamLimits

0x7c1b,	// (0x000544af) main_cam6_set_pane_g2

0x7c3f,	// (0x000544d3) main_cset6_listscroll_pane_ParamLimits

0x7c3f,	// (0x000544d3) main_cset6_listscroll_pane

0x7c5b,	// (0x000544ef) main_cset6_slider_pane_ParamLimits

0x7c5b,	// (0x000544ef) main_cset6_slider_pane

0x7c71,	// (0x00054505) main_cset6_text2_pane_ParamLimits

0x7c71,	// (0x00054505) main_cset6_text2_pane

0xdf85,	// (0x0005a819) main_cset6_text_pane

0xdf8d,	// (0x0005a821) main_cset_list_pane_copy1_ParamLimits

0xdf8d,	// (0x0005a821) main_cset_list_pane_copy1

0xdf9d,	// (0x0005a831) scroll_pane_cp028_copy1

0x7c7f,	// (0x00054513) cset_list_set_pane_copy1

0x7c91,	// (0x00054525) aid_position_infowindow_above_copy1

0x7c99,	// (0x0005452d) aid_position_infowindow_below_copy1

0x0961,	// (0x0004d1f5) cset_list_set_pane_g1_copy1

0x0969,	// (0x0004d1fd) cset_list_set_pane_g3_copy1_ParamLimits

0x0969,	// (0x0004d1fd) cset_list_set_pane_g3_copy1

0x0978,	// (0x0004d20c) cset_list_set_pane_t1_copy1_ParamLimits

0x0978,	// (0x0004d20c) cset_list_set_pane_t1_copy1

0xad5e,	// (0x000575f2) list_highlight_pane_cp021_copy1_ParamLimits

0xad5e,	// (0x000575f2) list_highlight_pane_cp021_copy1

0xdfa6,	// (0x0005a83a) cset6_slider_pane_ParamLimits

0xdfa6,	// (0x0005a83a) cset6_slider_pane

0xdfd2,	// (0x0005a866) main_cset6_slider_pane_g1_ParamLimits

0xdfd2,	// (0x0005a866) main_cset6_slider_pane_g1

0x7ca1,	// (0x00054535) main_cset6_slider_pane_g2_ParamLimits

0x7ca1,	// (0x00054535) main_cset6_slider_pane_g2

0xdffa,	// (0x0005a88e) main_cset6_slider_pane_g3_ParamLimits

0xdffa,	// (0x0005a88e) main_cset6_slider_pane_g3

0x7cc9,	// (0x0005455d) main_cset6_slider_pane_g4_ParamLimits

0x7cc9,	// (0x0005455d) main_cset6_slider_pane_g4

0xe006,	// (0x0005a89a) main_cset6_slider_pane_g5_ParamLimits

0xe006,	// (0x0005a89a) main_cset6_slider_pane_g5

0xd83f,	// (0x0005a0d3) main_cset6_slider_pane_g7_ParamLimits

0xd83f,	// (0x0005a0d3) main_cset6_slider_pane_g7

0xd84b,	// (0x0005a0df) main_cset6_slider_pane_g8_ParamLimits

0xd84b,	// (0x0005a0df) main_cset6_slider_pane_g8

0x6e03,	// (0x00053697) main_cset6_slider_pane_g9_ParamLimits

0x6e03,	// (0x00053697) main_cset6_slider_pane_g9

0x6e0f,	// (0x000536a3) main_cset6_slider_pane_g10_ParamLimits

0x6e0f,	// (0x000536a3) main_cset6_slider_pane_g10

0x6e1b,	// (0x000536af) main_cset6_slider_pane_g11_ParamLimits

0x6e1b,	// (0x000536af) main_cset6_slider_pane_g11

0x6e27,	// (0x000536bb) main_cset6_slider_pane_g12_ParamLimits

0x6e27,	// (0x000536bb) main_cset6_slider_pane_g12

0x6e33,	// (0x000536c7) main_cset6_slider_pane_g13_ParamLimits

0x6e33,	// (0x000536c7) main_cset6_slider_pane_g13

0x6e3f,	// (0x000536d3) main_cset6_slider_pane_g14_ParamLimits

0x6e3f,	// (0x000536d3) main_cset6_slider_pane_g14

0x7cd5,	// (0x00054569) main_cset6_slider_pane_g15_ParamLimits

0x7cd5,	// (0x00054569) main_cset6_slider_pane_g15

0xd9db,	// (0x0005a26f) main_cset6_slider_pane_g16_ParamLimits

0xd9db,	// (0x0005a26f) main_cset6_slider_pane_g16

0xd9e7,	// (0x0005a27b) main_cset6_slider_pane_g17_ParamLimits

0xd9e7,	// (0x0005a27b) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005c439) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005c439) main_cset6_slider_pane_g

0xe012,	// (0x0005a8a6) main_cset6_slider_pane_t1_ParamLimits

0xe012,	// (0x0005a8a6) main_cset6_slider_pane_t1

0x7d05,	// (0x00054599) main_cset6_slider_pane_t2_ParamLimits

0x7d05,	// (0x00054599) main_cset6_slider_pane_t2

0x7d30,	// (0x000545c4) main_cset6_slider_pane_t3_ParamLimits

0x7d30,	// (0x000545c4) main_cset6_slider_pane_t3

0x7d5b,	// (0x000545ef) main_cset6_slider_pane_t4_ParamLimits

0x7d5b,	// (0x000545ef) main_cset6_slider_pane_t4

0x7d86,	// (0x0005461a) main_cset6_slider_pane_t5_ParamLimits

0x7d86,	// (0x0005461a) main_cset6_slider_pane_t5

0xe053,	// (0x0005a8e7) main_cset6_slider_pane_t7_ParamLimits

0xe053,	// (0x0005a8e7) main_cset6_slider_pane_t7

0x7db1,	// (0x00054645) main_cset6_slider_pane_t8_ParamLimits

0x7db1,	// (0x00054645) main_cset6_slider_pane_t8

0x7dd5,	// (0x00054669) main_cset6_slider_pane_t9_ParamLimits

0x7dd5,	// (0x00054669) main_cset6_slider_pane_t9

0x7df9,	// (0x0005468d) main_cset6_slider_pane_t10_ParamLimits

0x7df9,	// (0x0005468d) main_cset6_slider_pane_t10

0x7e1d,	// (0x000546b1) main_cset6_slider_pane_t11_ParamLimits

0x7e1d,	// (0x000546b1) main_cset6_slider_pane_t11

0xe089,	// (0x0005a91d) main_cset6_slider_pane_t14_ParamLimits

0xe089,	// (0x0005a91d) main_cset6_slider_pane_t14

0xe0c2,	// (0x0005a956) main_cset6_slider_pane_t15_ParamLimits

0xe0c2,	// (0x0005a956) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005c45e) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005c45e) main_cset6_slider_pane_t

0xd4c8,	// (0x00059d5c) cset_slider_pane_g1_copy1

0xd9f3,	// (0x0005a287) cset_slider_pane_g2_copy1

0xd9fc,	// (0x0005a290) cset_slider_pane_g3_copy1

0x9737,	// (0x00055fcb) bg_popup_sub_pane_cp011_copy1

0xe0fb,	// (0x0005a98f) main_cset_text_pane_g1_copy1

0xd983,	// (0x0005a217) main_cset_text_pane_t1_copy1

0xd991,	// (0x0005a225) main_cset_text_pane_t2_copy1

0xd99f,	// (0x0005a233) main_cset_text_pane_t3_copy1

0xda05,	// (0x0005a299) main_cset_text_pane_t4_copy1

0xda13,	// (0x0005a2a7) main_cset_text_pane_t5_copy1

0xe103,	// (0x0005a997) main_cset_text_pane_t6_copy1

0xe111,	// (0x0005a9a5) main_cset_text_pane_t7_copy1

0x7bfd,	// (0x00054491) main_cset_text2_pane_t1_copy1

0xad5e,	// (0x000575f2) main_ncimui_pane

0x4450,	// (0x00050ce4) popup_query_ncimui_window_ParamLimits

0x4450,	// (0x00050ce4) popup_query_ncimui_window

0x5175,	// (0x00051a09) field_cale_ev2_pane_g4_ParamLimits

0x5175,	// (0x00051a09) field_cale_ev2_pane_g4

0x60c3,	// (0x00052957) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60c3,	// (0x00052957) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0005c13c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0005c13c) cell_video_dialer_keypad_pane_g

0x60db,	// (0x0005296f) cell_video_dialer_keypad_pane_t1

0x9737,	// (0x00055fcb) bg_popup_window_pane_cp012

0xb14a,	// (0x000579de) heading_pane_cp06

0xe13d,	// (0x0005a9d1) ncim_query_content_pane

0x9737,	// (0x00055fcb) bg_popup_heading_pane_cp01

0xe145,	// (0x0005a9d9) ncim_heading_pane_t1

0xe153,	// (0x0005a9e7) ncim_indicator_popup_pane

0xe165,	// (0x0005a9f9) ncim_query_button_pane

0xe179,	// (0x0005aa0d) ncim_query_content_pane_t1

0xe18b,	// (0x0005aa1f) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005c4a2) ncim_query_content_pane_t

0xe1c5,	// (0x0005aa59) ncim_query_list_pane

0xe1d7,	// (0x0005aa6b) ncim_query_popup_pane

0xe153,	// (0x0005a9e7) ncim_indicator_popup_pane_ParamLimits

0x7f6a,	// (0x000547fe) ncim_query_content_pane_g1_ParamLimits

0x7f6a,	// (0x000547fe) ncim_query_content_pane_g1

0xe179,	// (0x0005aa0d) ncim_query_content_pane_t1_ParamLimits

0xe18b,	// (0x0005aa1f) ncim_query_content_pane_t2_ParamLimits

0x7f76,	// (0x0005480a) ncim_query_content_pane_t3_ParamLimits

0x7f76,	// (0x0005480a) ncim_query_content_pane_t3

0x7f9e,	// (0x00054832) ncim_query_content_pane_t4_ParamLimits

0x7f9e,	// (0x00054832) ncim_query_content_pane_t4

0x7fc6,	// (0x0005485a) ncim_query_content_pane_t5_ParamLimits

0x7fc6,	// (0x0005485a) ncim_query_content_pane_t5

0xe19d,	// (0x0005aa31) ncim_query_content_pane_t6_ParamLimits

0xe19d,	// (0x0005aa31) ncim_query_content_pane_t6

0xfc0e,	// (0x0005c4a2) ncim_query_content_pane_t_ParamLimits

0xe1c5,	// (0x0005aa59) ncim_query_list_pane_ParamLimits

0xe1d7,	// (0x0005aa6b) ncim_query_popup_pane_ParamLimits

0xe1eb,	// (0x0005aa7f) wait_bar_pane_cp04

0x9737,	// (0x00055fcb) input_focus_pane_cp011

0xe1f3,	// (0x0005aa87) ncim_query_popup_pane_t1

0xe201,	// (0x0005aa95) ncim_list_query_list_pane_ParamLimits

0xe201,	// (0x0005aa95) ncim_list_query_list_pane

0x9737,	// (0x00055fcb) bg_button_pane_cp027

0xe20e,	// (0x0005aaa2) ncim_query_button_pane_g1

0x9737,	// (0x00055fcb) list_highlight_pane_cp012

0xe218,	// (0x0005aaac) ncim_list_query_list_pane_g1

0xe220,	// (0x0005aab4) ncim_list_query_list_pane_t1

0x9e7a,	// (0x0005670e) cam4_indicators_pane_g3_ParamLimits

0x9e7a,	// (0x0005670e) cam4_indicators_pane_g3

0x9ef5,	// (0x00056789) vid4_indicators_pane_g5_ParamLimits

0x9ef5,	// (0x00056789) vid4_indicators_pane_g5

0x9fbe,	// (0x00056852) vid4_progress_pane_g5_ParamLimits

0x9fbe,	// (0x00056852) vid4_progress_pane_g5

0x7e55,	// (0x000546e9) main_ncimui_pane_g1

0x7ebe,	// (0x00054752) ncimui_group_query_pane_ParamLimits

0x7ebe,	// (0x00054752) ncimui_group_query_pane

0x7f06,	// (0x0005479a) ncimui_list_pane_ParamLimits

0x7f06,	// (0x0005479a) ncimui_list_pane

0x7f2d,	// (0x000547c1) ncimui_text_pane_ParamLimits

0x7f2d,	// (0x000547c1) ncimui_text_pane

0x7fee,	// (0x00054882) ncimui_text_pane_t1_ParamLimits

0x7fee,	// (0x00054882) ncimui_text_pane_t1

0xe22e,	// (0x0005aac2) ncimui_list_single_graphic_pane_ParamLimits

0xe22e,	// (0x0005aac2) ncimui_list_single_graphic_pane

0x800c,	// (0x000548a0) ncimui_query_pane_ParamLimits

0x800c,	// (0x000548a0) ncimui_query_pane

0x9737,	// (0x00055fcb) list_highlight_pane_cp013

0xe23e,	// (0x0005aad2) ncim_list_query_list_pane_t1_copy1

0xe24c,	// (0x0005aae0) ncim_list_single_graphic_pane_g1

0x801f,	// (0x000548b3) ncim_query_button_pane_cp01

0x802b,	// (0x000548bf) ncim_query_entry_pane_ParamLimits

0x802b,	// (0x000548bf) ncim_query_entry_pane

0x803e,	// (0x000548d2) ncimui_query_pane_g1

0x804a,	// (0x000548de) ncimui_query_pane_t1_ParamLimits

0x804a,	// (0x000548de) ncimui_query_pane_t1

0xad5e,	// (0x000575f2) input_focus_pane_cp012

0xe254,	// (0x0005aae8) ncim_query_entry_pane_t1

0xa847,	// (0x000570db) main_im_pane_ParamLimits

0xad5e,	// (0x000575f2) main_mobtv_pane_ParamLimits

0xad5e,	// (0x000575f2) main_mobtv_pane

0x7ced,	// (0x00054581) main_cset6_slider_pane_g18_ParamLimits

0x7ced,	// (0x00054581) main_cset6_slider_pane_g18

0x7cf9,	// (0x0005458d) main_cset6_slider_pane_g19_ParamLimits

0x7cf9,	// (0x0005458d) main_cset6_slider_pane_g19

0xad50,	// (0x000575e4) bg_main_mobtv_pane_ParamLimits

0xad50,	// (0x000575e4) bg_main_mobtv_pane

0x8063,	// (0x000548f7) main_mobtv_info_pane

0x806c,	// (0x00054900) main_mobtv_loading_pane_ParamLimits

0x806c,	// (0x00054900) main_mobtv_loading_pane

0xe266,	// (0x0005aafa) main_mobtv_pg_channel_list_pane

0xe270,	// (0x0005ab04) main_mobtv_pg_hdr_pane

0x8079,	// (0x0005490d) main_mobtv_programe_curr_pane_ParamLimits

0x8079,	// (0x0005490d) main_mobtv_programe_curr_pane

0x8086,	// (0x0005491a) main_mobtv_programe_next_pane_ParamLimits

0x8086,	// (0x0005491a) main_mobtv_programe_next_pane

0xe279,	// (0x0005ab0d) popup_mobtv_noti_window

0xccec,	// (0x00059580) main_tv_pg_hdr_pane_g1

0xe281,	// (0x0005ab15) main_tv_pg_hdr_pane_g2

0xe289,	// (0x0005ab1d) main_tv_pg_hdr_pane_g3

0xe291,	// (0x0005ab25) main_tv_pg_hdr_pane_g4

0xe299,	// (0x0005ab2d) main_tv_pg_hdr_pane_g5

0xe2a3,	// (0x0005ab37) main_tv_pg_hdr_pane_g6

0xe2ad,	// (0x0005ab41) main_tv_pg_hdr_pane_g7

0xe2b7,	// (0x0005ab4b) main_tv_pg_hdr_pane_g8

0xe2c1,	// (0x0005ab55) main_tv_pg_hdr_pane_g9

0xe2cb,	// (0x0005ab5f) main_tv_pg_hdr_pane_g10

0xe2d5,	// (0x0005ab69) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005c4af) main_tv_pg_hdr_pane_g

0xe2df,	// (0x0005ab73) main_tv_pg_hdr_pane_t1

0xe2ed,	// (0x0005ab81) main_tv_pg_hdr_pane_t2

0xe2fb,	// (0x0005ab8f) main_tv_pg_hdr_pane_t3

0xe30b,	// (0x0005ab9f) main_tv_pg_hdr_pane_t4

0xe31b,	// (0x0005abaf) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005c4c6) main_tv_pg_hdr_pane_t

0xe32b,	// (0x0005abbf) single_mobtv_pg_channel_pane_ParamLimits

0xe32b,	// (0x0005abbf) single_mobtv_pg_channel_pane

0xe33d,	// (0x0005abd1) single_mobtv_pg_channel_table_pane

0xadb4,	// (0x00057648) single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x0005abda) single_tv_pg_channel_pane_g1

0xe34f,	// (0x0005abe3) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005c4d1) single_tv_pg_channel_pane_g

0xcf46,	// (0x000597da) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf46,	// (0x000597da) bg_single_mobtv_pg_channel_thumb_pane

0xe358,	// (0x0005abec) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe358,	// (0x0005abec) single_mobtv_pg_channel_thumb_pane_g1

0xe366,	// (0x0005abfa) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe366,	// (0x0005abfa) single_mobtv_pg_channel_thumb_pane_g2

0xe372,	// (0x0005ac06) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe372,	// (0x0005ac06) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0071,	// (0x0004c905) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0071,	// (0x0004c905) single_mobtv_pg_channel_thumb_pane_g

0xe37e,	// (0x0005ac12) single_mobtv_pg_channel_thumb_pane_t1

0xe38c,	// (0x0005ac20) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0078,	// (0x0004c90c) single_mobtv_pg_channel_thumb_pane_t

0xccec,	// (0x00059580) bg_single_mobtv_pg_channel_table_pane_g1

0xccec,	// (0x00059580) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0005bf83) bg_single_mobtv_pg_channel_table_pane_g

0xe39a,	// (0x0005ac2e) single_mobtv_pg_channel_table_pane_t1

0xe3a8,	// (0x0005ac3c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x007d,	// (0x0004c911) single_mobtv_pg_channel_table_pane_t

0x809b,	// (0x0005492f) main_mobtv_info_pane_g1_ParamLimits

0x809b,	// (0x0005492f) main_mobtv_info_pane_g1

0x80b9,	// (0x0005494d) main_mobtv_info_pane_t1_ParamLimits

0x80b9,	// (0x0005494d) main_mobtv_info_pane_t1

0x8131,	// (0x000549c5) main_mobtv_info_pane_t2_ParamLimits

0x8131,	// (0x000549c5) main_mobtv_info_pane_t2

0x0002,

0xfc47,	// (0x0005c4db) main_mobtv_info_pane_t_ParamLimits

0xfc47,	// (0x0005c4db) main_mobtv_info_pane_t

0x81c0,	// (0x00054a54) wait_bar_pane_cp05

0x81d2,	// (0x00054a66) main_mobtv_loading_pane_g1_ParamLimits

0x81d2,	// (0x00054a66) main_mobtv_loading_pane_g1

0x81e5,	// (0x00054a79) main_mobtv_loading_pane_g2_ParamLimits

0x81e5,	// (0x00054a79) main_mobtv_loading_pane_g2

0x81f1,	// (0x00054a85) main_mobtv_loading_pane_g3_ParamLimits

0x81f1,	// (0x00054a85) main_mobtv_loading_pane_g3

0x0002,

0xfc4e,	// (0x0005c4e2) main_mobtv_loading_pane_g_ParamLimits

0xfc4e,	// (0x0005c4e2) main_mobtv_loading_pane_g

0xe3b6,	// (0x0005ac4a) main_mobtv_loading_pane_t1_ParamLimits

0xe3b6,	// (0x0005ac4a) main_mobtv_loading_pane_t1

0xe3ce,	// (0x0005ac62) main_mobtv_loading_pane_t2_ParamLimits

0xe3ce,	// (0x0005ac62) main_mobtv_loading_pane_t2

0x0001,

0x0095,	// (0x0004c929) main_mobtv_loading_pane_t_ParamLimits

0x0095,	// (0x0004c929) main_mobtv_loading_pane_t

0x8204,	// (0x00054a98) wait_bar_pane_cp06_ParamLimits

0x8204,	// (0x00054a98) wait_bar_pane_cp06

0xe3f2,	// (0x0005ac86) main_mobtv_programe_curr_pane_t1

0xe400,	// (0x0005ac94) main_mobtv_programe_curr_pane_t2

0x0001,

0x009a,	// (0x0004c92e) main_mobtv_programe_curr_pane_t

0xe40e,	// (0x0005aca2) main_mobtv_programe_next_pane_t1

0xe41c,	// (0x0005acb0) main_mobtv_programe_next_pane_t2

0xe42a,	// (0x0005acbe) main_mobtv_programe_next_pane_t3

0x0002,

0x009f,	// (0x0004c933) main_mobtv_programe_next_pane_t

0x9737,	// (0x00055fcb) bg_popup_mobtv_noti_window_pane

0xe438,	// (0x0005accc) popup_mobtv_noti_window_g1

0xe440,	// (0x0005acd4) popup_mobtv_noti_window_t1

0xe44e,	// (0x0005ace2) popup_mobtv_noti_window_t2

0x0001,

0x00a6,	// (0x0004c93a) popup_mobtv_noti_window_t

0xccec,	// (0x00059580) bg_popup_mobtv_noti_window_pane_g1

0x9737,	// (0x00055fcb) sc_clock_pane

0x9737,	// (0x00055fcb) main_fs_bigclock_pane

0x794a,	// (0x000541de) blid2_tripm_pane_t4_ParamLimits

0x794a,	// (0x000541de) blid2_tripm_pane_t4

0x8213,	// (0x00054aa7) sc_clock_pane_g1_ParamLimits

0x8213,	// (0x00054aa7) sc_clock_pane_g1

0x8225,	// (0x00054ab9) sc_clock_pane_t1_ParamLimits

0x8225,	// (0x00054ab9) sc_clock_pane_t1

0x8247,	// (0x00054adb) sc_clock_pane_t2_ParamLimits

0x8247,	// (0x00054adb) sc_clock_pane_t2

0x825f,	// (0x00054af3) sc_clock_pane_t3_ParamLimits

0x825f,	// (0x00054af3) sc_clock_pane_t3

0x0004,

0xfc55,	// (0x0005c4e9) sc_clock_pane_t_ParamLimits

0xfc55,	// (0x0005c4e9) sc_clock_pane_t

0x8d20,	// (0x000555b4) main_fs_bigclock_indicator_pane_ParamLimits

0x8d20,	// (0x000555b4) main_fs_bigclock_indicator_pane

0x8305,	// (0x00054b99) main_fs_bigclock_pane_g1_ParamLimits

0x8305,	// (0x00054b99) main_fs_bigclock_pane_g1

0x8d2c,	// (0x000555c0) main_fs_bigclock_pane_t1_ParamLimits

0x8d2c,	// (0x000555c0) main_fs_bigclock_pane_t1

0x8d3e,	// (0x000555d2) main_fs_bigclock_pane_t2_ParamLimits

0x8d3e,	// (0x000555d2) main_fs_bigclock_pane_t2

0x8d52,	// (0x000555e6) main_fs_bigclock_pane_t3_ParamLimits

0x8d52,	// (0x000555e6) main_fs_bigclock_pane_t3

0x0002,

0xfe3b,	// (0x0005c6cf) main_fs_bigclock_pane_t_ParamLimits

0xfe3b,	// (0x0005c6cf) main_fs_bigclock_pane_t

0xecd0,	// (0x0005b564) main_fs_bigclock_indicator_pane_g1

0xe16d,	// (0x0005aa01) ncim_query_content_pane_g2_ParamLimits

0xe16d,	// (0x0005aa01) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005c49d) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005c49d) ncim_query_content_pane_g

0x8278,	// (0x00054b0c) sc_clock_pane_t4_ParamLimits

0x8278,	// (0x00054b0c) sc_clock_pane_t4

0xad5e,	// (0x000575f2) main_radioblah_pane

0x9def,	// (0x00056683) cell_call4_button_pane_t1_copy1_ParamLimits

0x9def,	// (0x00056683) cell_call4_button_pane_t1_copy1

0x7e6d,	// (0x00054701) main_ncimui_pane_t1_ParamLimits

0x7e6d,	// (0x00054701) main_ncimui_pane_t1

0x7e87,	// (0x0005471b) main_ncimui_pane_t2_ParamLimits

0x7e87,	// (0x0005471b) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005c496) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005c496) main_ncimui_pane_t

0xe59d,	// (0x0005ae31) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x0005ae31) main_radioblah_anim_pane

0xe5ae,	// (0x0005ae42) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x0005ae42) main_radioblah_info_pane

0xe5c2,	// (0x0005ae56) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x0005ae56) main_radioblah_pane_t1

0xe5de,	// (0x0005ae72) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x0005ae72) main_radioblah_pane_t2

0x0003,

0xfc6b,	// (0x0005c4ff) main_radioblah_pane_t_ParamLimits

0xfc6b,	// (0x0005c4ff) main_radioblah_pane_t

0x8364,	// (0x00054bf8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8364,	// (0x00054bf8) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x0005aeba) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x0005aeba) main_radioblah_info_pane_t1

0x83bc,	// (0x00054c50) main_radioblah_info_pane_t2_ParamLimits

0x83bc,	// (0x00054c50) main_radioblah_info_pane_t2

0x0003,

0xfc74,	// (0x0005c508) main_radioblah_info_pane_t_ParamLimits

0xfc74,	// (0x0005c508) main_radioblah_info_pane_t

0xccec,	// (0x00059580) main_radioblah_rocker_ctrl_pane_g1

0x846c,	// (0x00054d00) main_radioblah_rocker_ctrl_pane_g2

0x8474,	// (0x00054d08) main_radioblah_rocker_ctrl_pane_g3

0x847c,	// (0x00054d10) main_radioblah_rocker_ctrl_pane_g4

0x8484,	// (0x00054d18) main_radioblah_rocker_ctrl_pane_g5

0x848c,	// (0x00054d20) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7d,	// (0x0005c511) main_radioblah_rocker_ctrl_pane_g

0x7bfd,	// (0x00054491) main_cset_text2_pane_t1_copy1_ParamLimits

0x9e4d,	// (0x000566e1) cam4_image_uncrop_qvga_pane

0x9ea0,	// (0x00056734) vid4_image_uncrop_qcif_pane

0x9ff5,	// (0x00056889) cam6_image_uncrop_qvga_pane_ParamLimits

0x9ff5,	// (0x00056889) cam6_image_uncrop_qvga_pane

0xde68,	// (0x0005a6fc) vid6_image_uncrop_qcif_pane_ParamLimits

0xde68,	// (0x0005a6fc) vid6_image_uncrop_qcif_pane

0x9737,	// (0x00055fcb) bg_popup_preview_window_pane_cp03

0xe11f,	// (0x0005a9b3) list_cset_text2_pane

0xe127,	// (0x0005a9bb) main_cset6_text2_pane_g1

0xe12f,	// (0x0005a9c3) main_cset6_text2_pane_t1

0xe660,	// (0x0005aef4) list_cset_text2_pane_t1_ParamLimits

0xe660,	// (0x0005aef4) list_cset_text2_pane_t1

0xad5e,	// (0x000575f2) main_radioblah_pane_ParamLimits

0x81ac,	// (0x00054a40) main_mobtv_info_pane_t3_ParamLimits

0x81ac,	// (0x00054a40) main_mobtv_info_pane_t3

0x8352,	// (0x00054be6) main_radioblah_pane_g1

0x838c,	// (0x00054c20) main_radioblah_info_pane_g1

0x8411,	// (0x00054ca5) main_radioblah_info_pane_t3_ParamLimits

0x8411,	// (0x00054ca5) main_radioblah_info_pane_t3

0x2f94,	// (0x0004f828) highlight_cell_cale_month_pane_ParamLimits

0x2f94,	// (0x0004f828) highlight_cell_cale_month_pane

0x9737,	// (0x00055fcb) main_phob_fisheye_pane

0xd022,	// (0x000598b6) scroll_pane_cp0031_ParamLimits

0xd022,	// (0x000598b6) scroll_pane_cp0031

0xdf76,	// (0x0005a80a) wait_bar_pane_cp08_ParamLimits

0x7c7f,	// (0x00054513) cset_list_set_pane_copy1_ParamLimits

0xe67b,	// (0x0005af0f) highlight_cell_cale_month_pane_g1

0x8494,	// (0x00054d28) highlight_cell_cale_month_pane_t1

0xdc07,	// (0x0005a49b) list_gen_pane_cp01

0xd82a,	// (0x0005a0be) scroll_pane_01

0x84a2,	// (0x00054d36) list_single_double_fisheye_pane

0x0a63,	// (0x0004d2f7) list_double_fisheye_pane_g1_ParamLimits

0x0a63,	// (0x0004d2f7) list_double_fisheye_pane_g1

0x0a6f,	// (0x0004d303) list_double_fisheye_pane_g2_ParamLimits

0x0a6f,	// (0x0004d303) list_double_fisheye_pane_g2

0x84ab,	// (0x00054d3f) list_double_fisheye_pane_g3_ParamLimits

0x84ab,	// (0x00054d3f) list_double_fisheye_pane_g3

0x0004,

0xfc8a,	// (0x0005c51e) list_double_fisheye_pane_g_ParamLimits

0xfc8a,	// (0x0005c51e) list_double_fisheye_pane_g

0x0aa0,	// (0x0004d334) list_double_fisheye_pane_t1_ParamLimits

0x0aa0,	// (0x0004d334) list_double_fisheye_pane_t1

0x0abb,	// (0x0004d34f) list_double_fisheye_pane_t2_ParamLimits

0x0abb,	// (0x0004d34f) list_double_fisheye_pane_t2

0x0001,

0xfc95,	// (0x0005c529) list_double_fisheye_pane_t_ParamLimits

0xfc95,	// (0x0005c529) list_double_fisheye_pane_t

0x9737,	// (0x00055fcb) main_call5_pane

0x82a3,	// (0x00054b37) sc_swipe_pane_ParamLimits

0x82a3,	// (0x00054b37) sc_swipe_pane

0x84ca,	// (0x00054d5e) call5_image_pane_ParamLimits

0x84ca,	// (0x00054d5e) call5_image_pane

0x84e7,	// (0x00054d7b) call5_swipe_1_pane_ParamLimits

0x84e7,	// (0x00054d7b) call5_swipe_1_pane

0x84fa,	// (0x00054d8e) call5_swipe_2_pane_ParamLimits

0x84fa,	// (0x00054d8e) call5_swipe_2_pane

0x8525,	// (0x00054db9) popup_call5_audio_first_window_ParamLimits

0x8525,	// (0x00054db9) popup_call5_audio_first_window

0xcf46,	// (0x000597da) call5_swipe_1_pane_g1_ParamLimits

0xcf46,	// (0x000597da) call5_swipe_1_pane_g1

0xe683,	// (0x0005af17) call5_swipe_1_pane_g2_ParamLimits

0xe683,	// (0x0005af17) call5_swipe_1_pane_g2

0x0001,

0xfc9a,	// (0x0005c52e) call5_swipe_1_pane_g_ParamLimits

0xfc9a,	// (0x0005c52e) call5_swipe_1_pane_g

0xe68f,	// (0x0005af23) call5_swipe_1_pane_t1_ParamLimits

0xe68f,	// (0x0005af23) call5_swipe_1_pane_t1

0xcf46,	// (0x000597da) call5_swipe_2_pane_g1_ParamLimits

0xcf46,	// (0x000597da) call5_swipe_2_pane_g1

0xe6a4,	// (0x0005af38) call5_swipe_2_pane_g2_ParamLimits

0xe6a4,	// (0x0005af38) call5_swipe_2_pane_g2

0x0001,

0xfc9f,	// (0x0005c533) call5_swipe_2_pane_g_ParamLimits

0xfc9f,	// (0x0005c533) call5_swipe_2_pane_g

0xe6b0,	// (0x0005af44) call5_swipe_2_pane_t1_ParamLimits

0xe6b0,	// (0x0005af44) call5_swipe_2_pane_t1

0xe6c5,	// (0x0005af59) sc_swipe_pane_g1_ParamLimits

0xe6c5,	// (0x0005af59) sc_swipe_pane_g1

0xe6d2,	// (0x0005af66) sc_swipe_pane_g2_ParamLimits

0xe6d2,	// (0x0005af66) sc_swipe_pane_g2

0x0001,

0xfca4,	// (0x0005c538) sc_swipe_pane_g_ParamLimits

0xfca4,	// (0x0005c538) sc_swipe_pane_g

0xe6de,	// (0x0005af72) sc_swipe_pane_t1_ParamLimits

0xe6de,	// (0x0005af72) sc_swipe_pane_t1

0x9737,	// (0x00055fcb) main_cmail_launcher_pane

0x8536,	// (0x00054dca) aid_size_cell_cmail_l_ParamLimits

0x8536,	// (0x00054dca) aid_size_cell_cmail_l

0x8544,	// (0x00054dd8) grid_cmail_l_pane_ParamLimits

0x8544,	// (0x00054dd8) grid_cmail_l_pane

0x855e,	// (0x00054df2) cell_cmail_l_pane_ParamLimits

0x855e,	// (0x00054df2) cell_cmail_l_pane

0xe6f3,	// (0x0005af87) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x0005af87) cell_cmail_l_pane_g1

0xe6ff,	// (0x0005af93) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x0005af93) cell_cmail_l_pane_t1

0xe715,	// (0x0005afa9) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x0005afa9) cell_cmail_l_pane_t2

0x0001,

0xfca9,	// (0x0005c53d) cell_cmail_l_pane_t_ParamLimits

0xfca9,	// (0x0005c53d) cell_cmail_l_pane_t

0xad5e,	// (0x000575f2) grid_highlight_pane_cp018_ParamLimits

0xad5e,	// (0x000575f2) grid_highlight_pane_cp018

0x1360,	// (0x0004dbf4) main2_pane_ParamLimits

0x1360,	// (0x0004dbf4) main2_pane

0xa8f2,	// (0x00057186) popup_sp_fs_action_menu_bg_pane_g1

0xa8fa,	// (0x0005718e) popup_sp_fs_action_menu_bg_pane_g2

0xa902,	// (0x00057196) popup_sp_fs_action_menu_bg_pane_g3

0xa90a,	// (0x0005719e) popup_sp_fs_action_menu_bg_pane_g4

0xa912,	// (0x000571a6) popup_sp_fs_action_menu_bg_pane_g5

0xa91a,	// (0x000571ae) popup_sp_fs_action_menu_bg_pane_g6

0xa922,	// (0x000571b6) popup_sp_fs_action_menu_bg_pane_g7

0xa92a,	// (0x000571be) popup_sp_fs_action_menu_bg_pane_g8

0xa932,	// (0x000571c6) popup_sp_fs_action_menu_bg_pane_g9

0xa93a,	// (0x000571ce) popup_sp_fs_action_menu_bg_pane_g10

0xa93a,	// (0x000571ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0005ba1e) popup_sp_fs_action_menu_bg_pane_g

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g3_g1

0x03c3,	// (0x0004cc57) list_medium_line_x2_t3_g3_g2_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_t3_g3_g2

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g3_g3_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005bacc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005bacc) list_medium_line_x2_t3_g3_g

0x03db,	// (0x0004cc6f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x03db,	// (0x0004cc6f) list_medium_line_x2_t3_g3_t1

0x03f0,	// (0x0004cc84) list_medium_line_x2_t3_g3_t2_ParamLimits

0x03f0,	// (0x0004cc84) list_medium_line_x2_t3_g3_t2

0x0404,	// (0x0004cc98) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005bad3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005bad3) list_medium_line_x2_t3_g3_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g2_g1

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g2_g2_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005bada) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005bada) list_medium_line_x2_t3_g2_g

0x0419,	// (0x0004ccad) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0419,	// (0x0004ccad) list_medium_line_x2_t3_g2_t1

0x042e,	// (0x0004ccc2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x042e,	// (0x0004ccc2) list_medium_line_x2_t3_g2_t2

0x0440,	// (0x0004ccd4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0440,	// (0x0004ccd4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005badf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005badf) list_medium_line_x2_t3_g2_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t4_g4_g1

0x045e,	// (0x0004ccf2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x045e,	// (0x0004ccf2) list_medium_line_x2_t4_g4_g2

0x03c3,	// (0x0004cc57) list_medium_line_x2_t4_g4_g3_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_t4_g4_g3

0x046a,	// (0x0004ccfe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x046a,	// (0x0004ccfe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005bae6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005bae6) list_medium_line_x2_t4_g4_g

0x0476,	// (0x0004cd0a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0476,	// (0x0004cd0a) list_medium_line_x2_t4_g4_t1

0x0490,	// (0x0004cd24) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0490,	// (0x0004cd24) list_medium_line_x2_t4_g4_t2

0x04a6,	// (0x0004cd3a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x04a6,	// (0x0004cd3a) list_medium_line_x2_t4_g4_t3

0x04bb,	// (0x0004cd4f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x04bb,	// (0x0004cd4f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005baef) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005baef) list_medium_line_x2_t4_g4_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g4_g1

0x045e,	// (0x0004ccf2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x045e,	// (0x0004ccf2) list_medium_line_x2_t2_g4_g2

0x03c3,	// (0x0004cc57) list_medium_line_x2_t2_g4_g3_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_t2_g4_g3

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g4_g4_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005bb56) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005bb56) list_medium_line_x2_t2_g4_g

0x04cd,	// (0x0004cd61) list_medium_line_x2_t2_g4_t1_ParamLimits

0x04cd,	// (0x0004cd61) list_medium_line_x2_t2_g4_t1

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005bb5f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005bb5f) list_medium_line_x2_t2_g4_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g3_g1

0x03c3,	// (0x0004cc57) list_medium_line_x2_t2_g3_g2_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_t2_g3_g2

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g3_g3_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005bacc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005bacc) list_medium_line_x2_t2_g3_g

0x04e2,	// (0x0004cd76) list_medium_line_x2_t2_g3_t1_ParamLimits

0x04e2,	// (0x0004cd76) list_medium_line_x2_t2_g3_t1

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005bb64) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005bb64) list_medium_line_x2_t2_g3_t

0x30f9,	// (0x0004f98d) main_sp_fs_list_pane_ParamLimits

0x30f9,	// (0x0004f98d) main_sp_fs_list_pane

0xcec1,	// (0x00059755) sp_fs_scroll_pane_ParamLimits

0xcec1,	// (0x00059755) sp_fs_scroll_pane

0x04f7,	// (0x0004cd8b) list_medium_line_x2_t3_t1

0x0507,	// (0x0004cd9b) list_medium_line_x2_t3_t2

0x0515,	// (0x0004cda9) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005bbaf) list_medium_line_x2_t3_t

0x0523,	// (0x0004cdb7) list_medium_line_x3_t4_t1

0x0533,	// (0x0004cdc7) list_medium_line_x3_t4_t2

0x0541,	// (0x0004cdd5) list_medium_line_x3_t4_t3

0x0515,	// (0x0004cda9) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005bbb6) list_medium_line_x3_t4_t

0x054f,	// (0x0004cde3) list_medium_line_x4_t5_t1

0x055f,	// (0x0004cdf3) list_medium_line_x4_t5_t2

0x0541,	// (0x0004cdd5) list_medium_line_x4_t5_t3

0x056d,	// (0x0004ce01) list_medium_line_x4_t5_t4

0x0515,	// (0x0004cda9) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005bbbf) list_medium_line_x4_t5_t

0x03b7,	// (0x0004cc4b) list_medium_line_t4_g4_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_t4_g4_g1

0x046a,	// (0x0004ccfe) list_medium_line_t4_g4_g2_ParamLimits

0x046a,	// (0x0004ccfe) list_medium_line_t4_g4_g2

0x057b,	// (0x0004ce0f) list_medium_line_t4_g4_g3_ParamLimits

0x057b,	// (0x0004ce0f) list_medium_line_t4_g4_g3

0x03cf,	// (0x0004cc63) list_medium_line_t4_g4_g4_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005bbca) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005bbca) list_medium_line_t4_g4_g

0x0587,	// (0x0004ce1b) list_medium_line_t4_g4_t1_ParamLimits

0x0587,	// (0x0004ce1b) list_medium_line_t4_g4_t1

0x059c,	// (0x0004ce30) list_medium_line_t4_g4_t2_ParamLimits

0x059c,	// (0x0004ce30) list_medium_line_t4_g4_t2

0x05b2,	// (0x0004ce46) list_medium_line_t4_g4_t3_ParamLimits

0x05b2,	// (0x0004ce46) list_medium_line_t4_g4_t3

0x0404,	// (0x0004cc98) list_medium_line_t4_g4_t4_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005bbd3) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005bbd3) list_medium_line_t4_g4_t

0x31c8,	// (0x0004fa5c) chi_dic_find_pane_g1

0x4220,	// (0x00050ab4) main_tport_pane

0x0769,	// (0x0004cffd) list_medium_line_plain_t1

0x0777,	// (0x0004d00b) list_medium_line_t2_g2_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t2_g2_g1

0x0783,	// (0x0004d017) list_medium_line_t2_g2_g2_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0005c2a7) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0005c2a7) list_medium_line_t2_g2_g

0x078f,	// (0x0004d023) list_medium_line_t2_g2_t1_ParamLimits

0x078f,	// (0x0004d023) list_medium_line_t2_g2_t1

0x07a9,	// (0x0004d03d) list_medium_line_t2_g2_t2_ParamLimits

0x07a9,	// (0x0004d03d) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005c2ac) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005c2ac) list_medium_line_t2_g2_t

0x770d,	// (0x00053fa1) aid_sp_fs_list_icon_a_sm

0x7715,	// (0x00053fa9) aid_sp_fs_list_icon_d

0x771d,	// (0x00053fb1) aid_sp_fs_text_primary

0xe4d7,	// (0x0005ad6b) aid_sp_fs_text_secondary

0x7726,	// (0x00053fba) list_medium_line

0x7726,	// (0x00053fba) list_medium_line_g2

0x7726,	// (0x00053fba) list_medium_line_g3

0x7726,	// (0x00053fba) list_medium_line_plain

0x7726,	// (0x00053fba) list_medium_line_plain_t2

0x7726,	// (0x00053fba) list_medium_line_plain_t3

0x7726,	// (0x00053fba) list_medium_line_right_icon

0x7726,	// (0x00053fba) list_medium_line_right_iconx2

0x7726,	// (0x00053fba) list_medium_line_t2

0x7726,	// (0x00053fba) list_medium_line_t2_g2

0x7726,	// (0x00053fba) list_medium_line_t2_g3

0x7726,	// (0x00053fba) list_medium_line_t2_right_icon

0x7726,	// (0x00053fba) list_medium_line_t2_right_iconx2

0x7726,	// (0x00053fba) list_medium_line_t3

0x7726,	// (0x00053fba) list_medium_line_t3_g2

0x7726,	// (0x00053fba) list_medium_line_t3_g3

0x7726,	// (0x00053fba) list_medium_line_t3_right_iconx2

0x093b,	// (0x0004d1cf) list_medium_line_t4_g4

0x7726,	// (0x00053fba) list_medium_line_x2

0x7726,	// (0x00053fba) list_medium_line_x2_t2_g2

0x7726,	// (0x00053fba) list_medium_line_x2_t2_g3

0x7726,	// (0x00053fba) list_medium_line_x2_t2_g4

0x7726,	// (0x00053fba) list_medium_line_x2_t3

0x7726,	// (0x00053fba) list_medium_line_x2_t3_g2

0x7726,	// (0x00053fba) list_medium_line_x2_t3_g3

0x7726,	// (0x00053fba) list_medium_line_x2_t3_g4

0x7726,	// (0x00053fba) list_medium_line_x2_t4_g2

0x7726,	// (0x00053fba) list_medium_line_x2_t4_g4

0x0944,	// (0x0004d1d8) list_medium_line_x3

0x0944,	// (0x0004d1d8) list_medium_line_x3_t4

0x0944,	// (0x0004d1d8) list_medium_line_x3_t4_g4

0x093b,	// (0x0004d1cf) list_medium_line_x4_t4

0x093b,	// (0x0004d1cf) list_medium_line_x4_t4_g7

0x093b,	// (0x0004d1cf) list_medium_line_x4_t5

0x094d,	// (0x0004d1e1) list_single_fs_dyc_pane_ParamLimits

0x094d,	// (0x0004d1e1) list_single_fs_dyc_pane

0x03b7,	// (0x0004cc4b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x4_t4_g7_g1

0x098d,	// (0x0004d221) list_medium_line_x4_t4_g7_g2_ParamLimits

0x098d,	// (0x0004d221) list_medium_line_x4_t4_g7_g2

0x0999,	// (0x0004d22d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0999,	// (0x0004d22d) list_medium_line_x4_t4_g7_g3

0x09a8,	// (0x0004d23c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x09a8,	// (0x0004d23c) list_medium_line_x4_t4_g7_g4

0x09b4,	// (0x0004d248) list_medium_line_x4_t4_g7_g5_ParamLimits

0x09b4,	// (0x0004d248) list_medium_line_x4_t4_g7_g5

0x09c3,	// (0x0004d257) list_medium_line_x4_t4_g7_g6_ParamLimits

0x09c3,	// (0x0004d257) list_medium_line_x4_t4_g7_g6

0x09d2,	// (0x0004d266) list_medium_line_x4_t4_g7_g7_ParamLimits

0x09d2,	// (0x0004d266) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005c477) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005c477) list_medium_line_x4_t4_g7_g

0x09de,	// (0x0004d272) list_medium_line_x4_t4_g7_t1_ParamLimits

0x09de,	// (0x0004d272) list_medium_line_x4_t4_g7_t1

0x09f3,	// (0x0004d287) list_medium_line_x4_t4_g7_t2_ParamLimits

0x09f3,	// (0x0004d287) list_medium_line_x4_t4_g7_t2

0x0a08,	// (0x0004d29c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0a08,	// (0x0004d29c) list_medium_line_x4_t4_g7_t3

0x0a1d,	// (0x0004d2b1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0a1d,	// (0x0004d2b1) list_medium_line_x4_t4_g7_t4

0x0a2f,	// (0x0004d2c3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0a2f,	// (0x0004d2c3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005c486) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005c486) list_medium_line_x4_t4_g7_t

0x0a41,	// (0x0004d2d5) list_single_dyc_row_pane_ParamLimits

0x0a41,	// (0x0004d2d5) list_single_dyc_row_pane

0x84b7,	// (0x00054d4b) call5_gesture_pane_ParamLimits

0x84b7,	// (0x00054d4b) call5_gesture_pane

0x850d,	// (0x00054da1) call5_windows_pane_ParamLimits

0x850d,	// (0x00054da1) call5_windows_pane

0x8578,	// (0x00054e0c) call5_swipe_1_pane_cp_ParamLimits

0x8578,	// (0x00054e0c) call5_swipe_1_pane_cp

0x8584,	// (0x00054e18) call5_swipe_2_pane_cp_ParamLimits

0x8584,	// (0x00054e18) call5_swipe_2_pane_cp

0xaa1e,	// (0x000572b2) call5_image_pane_cp

0x8590,	// (0x00054e24) popup_call5_audio_first_window_cp_ParamLimits

0x8590,	// (0x00054e24) popup_call5_audio_first_window_cp

0xe6c5,	// (0x0005af59) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c5,	// (0x0005af59) call5_swipe_1_pane_g1_cp

0xe732,	// (0x0005afc6) call5_swipe_1_pane_g2_cp

0xe6de,	// (0x0005af72) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6de,	// (0x0005af72) call5_swipe_1_pane_t1_cp

0xe6c5,	// (0x0005af59) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c5,	// (0x0005af59) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x0005afce) call5_swipe_2_pane_g2_cp

0xe742,	// (0x0005afd6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x0005afd6) call5_swipe_2_pane_t1_cp

0xad5e,	// (0x000575f2) main_sp_fs_email_pane

0xe757,	// (0x0005afeb) main_sp_fs_listscroll_pane_te

0x859e,	// (0x00054e32) popup_sp_fs_action_menu_pane_ParamLimits

0x859e,	// (0x00054e32) popup_sp_fs_action_menu_pane

0xccec,	// (0x00059580) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x0005aff4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x0005affd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x0005b006) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccec,	// (0x00059580) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcae,	// (0x0005c542) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcad1,	// (0x00059365) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcad1,	// (0x00059365) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x0005b00f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x0005b00f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x0005b01b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x0005b01b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb7,	// (0x0005c54b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb7,	// (0x0005c54b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x0005b027) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x0005b027) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0add,	// (0x0004d371) list_medium_line_t2_right_icon_g1

0x0ae5,	// (0x0004d379) list_medium_line_t2_right_icon_t1

0x0af5,	// (0x0004d389) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbc,	// (0x0005c550) list_medium_line_t2_right_icon_t

0xc8e4,	// (0x00059178) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8e4,	// (0x00059178) bg_sp_fs_ctrlbar_pane

0x8628,	// (0x00054ebc) main_sp_fs_ctrlbar_button_pane_cp01

0x8632,	// (0x00054ec6) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x0005b079) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x0005b085) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc1,	// (0x0005c555) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x0005b091) main_sp_fs_ctrlbar_pane_t1

0x863c,	// (0x00054ed0) main_sp_fs_ctrlbar_pane

0x8660,	// (0x00054ef4) main_sp_fs_listscroll_pane_te_cp01

0x0b07,	// (0x0004d39b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0b07,	// (0x0004d39b) popup_sp_fs_action_menu_pane_cp01

0xad5e,	// (0x000575f2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad5e,	// (0x000575f2) bg_sp_fs_highlight_list_pane_cp01

0x8680,	// (0x00054f14) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8680,	// (0x00054f14) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x0005b0c1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x0005b0c1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfccb,	// (0x0005c55f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfccb,	// (0x0005c55f) sp_fs_action_menu_list_gene_pane_g

0x868f,	// (0x00054f23) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x868f,	// (0x00054f23) sp_fs_action_menu_list_gene_pane_t1

0x86a7,	// (0x00054f3b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86a7,	// (0x00054f3b) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x0005b0ce) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x0005b0ce) popup_sp_fs_action_menu_bg_pane

0x86c6,	// (0x00054f5a) sp_fs_action_menu_list_pane_ParamLimits

0x86c6,	// (0x00054f5a) sp_fs_action_menu_list_pane

0x86e6,	// (0x00054f7a) sp_fs_scroll_pane_cp01_ParamLimits

0x86e6,	// (0x00054f7a) sp_fs_scroll_pane_cp01

0x0b37,	// (0x0004d3cb) list_medium_line_plain_t2_t1

0x0b47,	// (0x0004d3db) list_medium_line_plain_t2_t2

0x0001,

0xfcd0,	// (0x0005c564) list_medium_line_plain_t2_t

0x0b57,	// (0x0004d3eb) list_medium_line_plain_t3_t1

0x0b67,	// (0x0004d3fb) list_medium_line_plain_t3_t2

0x0b75,	// (0x0004d409) list_medium_line_plain_t3_t3

0x0002,

0xfcd5,	// (0x0005c569) list_medium_line_plain_t3_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t2_g2_g1

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g2_g2_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005bada) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005bada) list_medium_line_x2_t2_g2_g

0x0587,	// (0x0004ce1b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0587,	// (0x0004ce1b) list_medium_line_x2_t2_g2_t1

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcdc,	// (0x0005c570) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcdc,	// (0x0005c570) list_medium_line_x2_t2_g2_t

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t4_g2_g1

0x0b83,	// (0x0004d417) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0b83,	// (0x0004d417) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce1,	// (0x0005c575) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce1,	// (0x0005c575) list_medium_line_x2_t4_g2_g

0x0b95,	// (0x0004d429) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b95,	// (0x0004d429) list_medium_line_x2_t4_g2_t1

0x0baf,	// (0x0004d443) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0baf,	// (0x0004d443) list_medium_line_x2_t4_g2_t2

0x0bc5,	// (0x0004d459) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0bc5,	// (0x0004d459) list_medium_line_x2_t4_g2_t3

0x0404,	// (0x0004cc98) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce6,	// (0x0005c57a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce6,	// (0x0005c57a) list_medium_line_x2_t4_g2_t

0x0bda,	// (0x0004d46e) list_medium_line_t3_right_iconx2_g1

0x0add,	// (0x0004d371) list_medium_line_t3_right_iconx2_g2

0x0be2,	// (0x0004d476) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcef,	// (0x0005c583) list_medium_line_t3_right_iconx2_g

0x0bec,	// (0x0004d480) list_medium_line_t3_right_iconx2_t1

0x0bfc,	// (0x0004d490) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf6,	// (0x0005c58a) list_medium_line_t3_right_iconx2_t

0x03b7,	// (0x0004cc4b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x3_t4_g4_g1

0x03c3,	// (0x0004cc57) list_medium_line_x3_t4_g4_g2_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x3_t4_g4_g2

0x046a,	// (0x0004ccfe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x046a,	// (0x0004ccfe) list_medium_line_x3_t4_g4_g3

0x0c0a,	// (0x0004d49e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0c0a,	// (0x0004d49e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfb,	// (0x0005c58f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfb,	// (0x0005c58f) list_medium_line_x3_t4_g4_g

0x0c16,	// (0x0004d4aa) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0c16,	// (0x0004d4aa) list_medium_line_x3_t4_g4_t1

0x0c2d,	// (0x0004d4c1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0c2d,	// (0x0004d4c1) list_medium_line_x3_t4_g4_t2

0x0c48,	// (0x0004d4dc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0c48,	// (0x0004d4dc) list_medium_line_x3_t4_g4_t3

0x0c5d,	// (0x0004d4f1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0c5d,	// (0x0004d4f1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd04,	// (0x0005c598) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd04,	// (0x0005c598) list_medium_line_x3_t4_g4_t

0x0c7a,	// (0x0004d50e) list_single_dyc_row_text_pane_t1_ParamLimits

0x0c7a,	// (0x0004d50e) list_single_dyc_row_text_pane_t1

0x0cc3,	// (0x0004d557) list_single_dyc_row_text_pane_t2_ParamLimits

0x0cc3,	// (0x0004d557) list_single_dyc_row_text_pane_t2

0x870c,	// (0x00054fa0) list_single_dyc_row_text_pane_t3_ParamLimits

0x870c,	// (0x00054fa0) list_single_dyc_row_text_pane_t3

0x0005,

0xfd0d,	// (0x0005c5a1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0d,	// (0x0005c5a1) list_single_dyc_row_text_pane_t

0x8730,	// (0x00054fc4) list_single_dyc_row_pane_g1_ParamLimits

0x8730,	// (0x00054fc4) list_single_dyc_row_pane_g1

0x873c,	// (0x00054fd0) list_single_dyc_row_pane_g2_ParamLimits

0x873c,	// (0x00054fd0) list_single_dyc_row_pane_g2

0x8748,	// (0x00054fdc) list_single_dyc_row_pane_g3_ParamLimits

0x8748,	// (0x00054fdc) list_single_dyc_row_pane_g3

0x8754,	// (0x00054fe8) list_single_dyc_row_pane_g4_ParamLimits

0x8754,	// (0x00054fe8) list_single_dyc_row_pane_g4

0x0003,

0xfd1a,	// (0x0005c5ae) list_single_dyc_row_pane_g_ParamLimits

0xfd1a,	// (0x0005c5ae) list_single_dyc_row_pane_g

0x8760,	// (0x00054ff4) list_single_dyc_row_text_pane_ParamLimits

0x8760,	// (0x00054ff4) list_single_dyc_row_text_pane

0x9737,	// (0x00055fcb) bg_sp_fs_scroll_pane

0xe848,	// (0x0005b0dc) thumb_sp_fs_scroll_pane

0x0777,	// (0x0004d00b) list_medium_line_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_g1

0x0df8,	// (0x0004d68c) list_medium_line_t1_ParamLimits

0x0df8,	// (0x0004d68c) list_medium_line_t1

0x03b7,	// (0x0004cc4b) list_medium_line_x2_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_g1

0x03c3,	// (0x0004cc57) list_medium_line_x2_g2_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_g2

0x0001,

0xfd23,	// (0x0005c5b7) list_medium_line_x2_g_ParamLimits

0xfd23,	// (0x0005c5b7) list_medium_line_x2_g

0x877f,	// (0x00055013) list_medium_line_x2_t1_ParamLimits

0x877f,	// (0x00055013) list_medium_line_x2_t1

0x03b7,	// (0x0004cc4b) list_medium_line_x3_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x3_g1

0x03c3,	// (0x0004cc57) list_medium_line_x3_g2_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x3_g2

0x0001,

0xfd23,	// (0x0005c5b7) list_medium_line_x3_g_ParamLimits

0xfd23,	// (0x0005c5b7) list_medium_line_x3_g

0x877f,	// (0x00055013) list_medium_line_x3_t1_ParamLimits

0x877f,	// (0x00055013) list_medium_line_x3_t1

0xe851,	// (0x0005b0e5) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x0005b0ee) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x0005b0f7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0005c5bc) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x0005b0e5) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x0005b0ee) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x0005b0f7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd28,	// (0x0005c5bc) bg_sp_fs_scroll_pane_g

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x03b7,	// (0x0004cc4b) list_medium_line_x2_t3_g4_g1

0x045e,	// (0x0004ccf2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x045e,	// (0x0004ccf2) list_medium_line_x2_t3_g4_g2

0x03c3,	// (0x0004cc57) list_medium_line_x2_t3_g4_g3_ParamLimits

0x03c3,	// (0x0004cc57) list_medium_line_x2_t3_g4_g3

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g4_g4_ParamLimits

0x03cf,	// (0x0004cc63) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005bb56) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005bb56) list_medium_line_x2_t3_g4_g

0x0e0d,	// (0x0004d6a1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0e0d,	// (0x0004d6a1) list_medium_line_x2_t3_g4_t1

0x0e27,	// (0x0004d6bb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0e27,	// (0x0004d6bb) list_medium_line_x2_t3_g4_t2

0x0404,	// (0x0004cc98) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0404,	// (0x0004cc98) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd2f,	// (0x0005c5c3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd2f,	// (0x0005c5c3) list_medium_line_x2_t3_g4_t

0x0777,	// (0x0004d00b) list_medium_line_g2_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_g2_g1

0x0783,	// (0x0004d017) list_medium_line_g2_g2_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0005c2a7) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0005c2a7) list_medium_line_g2_g

0x0e41,	// (0x0004d6d5) list_medium_line_g2_t1_ParamLimits

0x0e41,	// (0x0004d6d5) list_medium_line_g2_t1

0x0777,	// (0x0004d00b) list_medium_line_t3_g2_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t3_g2_g1

0x0783,	// (0x0004d017) list_medium_line_t3_g2_g2_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0005c2a7) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0005c2a7) list_medium_line_t3_g2_g

0x0e56,	// (0x0004d6ea) list_medium_line_t3_g2_t1_ParamLimits

0x0e56,	// (0x0004d6ea) list_medium_line_t3_g2_t1

0x0e70,	// (0x0004d704) list_medium_line_t3_g2_t2_ParamLimits

0x0e70,	// (0x0004d704) list_medium_line_t3_g2_t2

0x0e86,	// (0x0004d71a) list_medium_line_t3_g2_t3_ParamLimits

0x0e86,	// (0x0004d71a) list_medium_line_t3_g2_t3

0x0002,

0xfd36,	// (0x0005c5ca) list_medium_line_t3_g2_t_ParamLimits

0xfd36,	// (0x0005c5ca) list_medium_line_t3_g2_t

0x0add,	// (0x0004d371) list_medium_line_right_icon_g1

0x0ea0,	// (0x0004d734) list_medium_line_right_icon_t1

0x0777,	// (0x0004d00b) list_medium_line_t2_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t2_g1

0x0eae,	// (0x0004d742) list_medium_line_t2_t1_ParamLimits

0x0eae,	// (0x0004d742) list_medium_line_t2_t1

0x0ec8,	// (0x0004d75c) list_medium_line_t2_t2_ParamLimits

0x0ec8,	// (0x0004d75c) list_medium_line_t2_t2

0x0001,

0xfd3d,	// (0x0005c5d1) list_medium_line_t2_t_ParamLimits

0xfd3d,	// (0x0005c5d1) list_medium_line_t2_t

0x0777,	// (0x0004d00b) list_medium_line_t3_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t3_g1

0x0ee1,	// (0x0004d775) list_medium_line_t3_t1_ParamLimits

0x0ee1,	// (0x0004d775) list_medium_line_t3_t1

0x0efb,	// (0x0004d78f) list_medium_line_t3_t2_ParamLimits

0x0efb,	// (0x0004d78f) list_medium_line_t3_t2

0x0f11,	// (0x0004d7a5) list_medium_line_t3_t3_ParamLimits

0x0f11,	// (0x0004d7a5) list_medium_line_t3_t3

0x0002,

0xfd42,	// (0x0005c5d6) list_medium_line_t3_t_ParamLimits

0xfd42,	// (0x0005c5d6) list_medium_line_t3_t

0x0777,	// (0x0004d00b) list_medium_line_g3_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_g3_g1

0x0f26,	// (0x0004d7ba) list_medium_line_g3_g2_ParamLimits

0x0f26,	// (0x0004d7ba) list_medium_line_g3_g2

0x0783,	// (0x0004d017) list_medium_line_g3_g3_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_g3_g3

0x0002,

0xfd49,	// (0x0005c5dd) list_medium_line_g3_g_ParamLimits

0xfd49,	// (0x0005c5dd) list_medium_line_g3_g

0x0f32,	// (0x0004d7c6) list_medium_line_g3_t1_ParamLimits

0x0f32,	// (0x0004d7c6) list_medium_line_g3_t1

0x0777,	// (0x0004d00b) list_medium_line_t2_g3_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t2_g3_g1

0x0f26,	// (0x0004d7ba) list_medium_line_t2_g3_g2_ParamLimits

0x0f26,	// (0x0004d7ba) list_medium_line_t2_g3_g2

0x0783,	// (0x0004d017) list_medium_line_t2_g3_g3_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_t2_g3_g3

0x0002,

0xfd49,	// (0x0005c5dd) list_medium_line_t2_g3_g_ParamLimits

0xfd49,	// (0x0005c5dd) list_medium_line_t2_g3_g

0x0f47,	// (0x0004d7db) list_medium_line_t2_g3_t1_ParamLimits

0x0f47,	// (0x0004d7db) list_medium_line_t2_g3_t1

0x0f61,	// (0x0004d7f5) list_medium_line_t2_g3_t2_ParamLimits

0x0f61,	// (0x0004d7f5) list_medium_line_t2_g3_t2

0x0001,

0xfd50,	// (0x0005c5e4) list_medium_line_t2_g3_t_ParamLimits

0xfd50,	// (0x0005c5e4) list_medium_line_t2_g3_t

0x0777,	// (0x0004d00b) list_medium_line_t3_g3_g1_ParamLimits

0x0777,	// (0x0004d00b) list_medium_line_t3_g3_g1

0x0f26,	// (0x0004d7ba) list_medium_line_t3_g3_g2_ParamLimits

0x0f26,	// (0x0004d7ba) list_medium_line_t3_g3_g2

0x0783,	// (0x0004d017) list_medium_line_t3_g3_g3_ParamLimits

0x0783,	// (0x0004d017) list_medium_line_t3_g3_g3

0x0002,

0xfd49,	// (0x0005c5dd) list_medium_line_t3_g3_g_ParamLimits

0xfd49,	// (0x0005c5dd) list_medium_line_t3_g3_g

0x0f7f,	// (0x0004d813) list_medium_line_t3_g3_t1_ParamLimits

0x0f7f,	// (0x0004d813) list_medium_line_t3_g3_t1

0x0f98,	// (0x0004d82c) list_medium_line_t3_g3_t2_ParamLimits

0x0f98,	// (0x0004d82c) list_medium_line_t3_g3_t2

0x0fae,	// (0x0004d842) list_medium_line_t3_g3_t3_ParamLimits

0x0fae,	// (0x0004d842) list_medium_line_t3_g3_t3

0x0002,

0xfd55,	// (0x0005c5e9) list_medium_line_t3_g3_t_ParamLimits

0xfd55,	// (0x0005c5e9) list_medium_line_t3_g3_t

0x0bda,	// (0x0004d46e) list_medium_line_right_iconx2_g1

0x0add,	// (0x0004d371) list_medium_line_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0005c5f0) list_medium_line_right_iconx2_g

0x0fc8,	// (0x0004d85c) list_medium_line_right_iconx2_t1

0x0bda,	// (0x0004d46e) list_medium_line_t2_right_iconx2_g1

0x0add,	// (0x0004d371) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd5c,	// (0x0005c5f0) list_medium_line_t2_right_iconx2_g

0x0fd6,	// (0x0004d86a) list_medium_line_t2_right_iconx2_t1

0x0fe6,	// (0x0004d87a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd61,	// (0x0005c5f5) list_medium_line_t2_right_iconx2_t

0x0ff8,	// (0x0004d88c) list_medium_line_x4_t4_t1

0x1006,	// (0x0004d89a) list_medium_line_x4_t4_t2

0x1016,	// (0x0004d8aa) list_medium_line_x4_t4_t3

0x1026,	// (0x0004d8ba) list_medium_line_x4_t4_t4

0x0003,

0xfd66,	// (0x0005c5fa) list_medium_line_x4_t4_t

0x87d8,	// (0x0005506c) tport_appsw_pane_ParamLimits

0x87d8,	// (0x0005506c) tport_appsw_pane

0x87f0,	// (0x00055084) tport_contact_pane_ParamLimits

0x87f0,	// (0x00055084) tport_contact_pane

0x8808,	// (0x0005509c) tport_listscroll_pane_ParamLimits

0x8808,	// (0x0005509c) tport_listscroll_pane

0x8822,	// (0x000550b6) cell_tport_appsw_pane_ParamLimits

0x8822,	// (0x000550b6) cell_tport_appsw_pane

0xd6f0,	// (0x00059f84) tport_appsw_pane_g1_ParamLimits

0xd6f0,	// (0x00059f84) tport_appsw_pane_g1

0xe86c,	// (0x0005b100) tport_contact_pane_g1

0xe875,	// (0x0005b109) tport_contact_pane_t1

0xe883,	// (0x0005b117) tport_contact_pane_t2

0x0001,

0xfd6f,	// (0x0005c603) tport_contact_pane_t

0xe891,	// (0x0005b125) list_tport_pane

0xe89a,	// (0x0005b12e) scroll_pane_cp_030

0x886a,	// (0x000550fe) cell_tport_appsw_pane_g1

0x887a,	// (0x0005510e) cell_tport_appsw_pane_t1

0x8888,	// (0x0005511c) grid_highlight_pane_cp019

0x8890,	// (0x00055124) list_tport_double_graphic_pane_ParamLimits

0x8890,	// (0x00055124) list_tport_double_graphic_pane

0xad5e,	// (0x000575f2) list_highlight_pane_cp023_ParamLimits

0xad5e,	// (0x000575f2) list_highlight_pane_cp023

0x889d,	// (0x00055131) list_tport_double_graphic_pane_g1_ParamLimits

0x889d,	// (0x00055131) list_tport_double_graphic_pane_g1

0x88aa,	// (0x0005513e) list_tport_double_graphic_pane_t1_ParamLimits

0x88aa,	// (0x0005513e) list_tport_double_graphic_pane_t1

0x88bf,	// (0x00055153) list_tport_double_graphic_pane_t2_ParamLimits

0x88bf,	// (0x00055153) list_tport_double_graphic_pane_t2

0x0001,

0xfd7b,	// (0x0005c60f) list_tport_double_graphic_pane_t_ParamLimits

0xfd7b,	// (0x0005c60f) list_tport_double_graphic_pane_t

0x9737,	// (0x00055fcb) main_cale_note_pane

0x698b,	// (0x0005321f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x698b,	// (0x0005321f) cell_vitu2_function_top_wide_pane_cp01

0x81c0,	// (0x00054a54) wait_bar_pane_cp05_ParamLimits

0xad5e,	// (0x000575f2) listscroll_cmail_pane

0xe8a3,	// (0x0005b137) list_cmail_pane

0x88d1,	// (0x00055165) list_cmail_body_pane

0x88e6,	// (0x0005517a) list_single_cmail_header_caption_pane

0x88fd,	// (0x00055191) list_single_cmail_header_detail_pane_ParamLimits

0x88fd,	// (0x00055191) list_single_cmail_header_detail_pane

0xe8b3,	// (0x0005b147) list_single_cmail_header_caption_pane_t1

0x1036,	// (0x0004d8ca) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1036,	// (0x0004d8ca) list_single_cmail_header_detail_pane_g1

0x8927,	// (0x000551bb) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8927,	// (0x000551bb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd80,	// (0x0005c614) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd80,	// (0x0005c614) list_single_cmail_header_detail_pane_g

0x8933,	// (0x000551c7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8933,	// (0x000551c7) list_single_cmail_header_detail_pane_t1

0xa027,	// (0x000568bb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa027,	// (0x000568bb) list_single_cmail_header_editor_pane_bg

0xe34f,	// (0x0005abe3) list_cmail_body_pane_g1

0xe8d7,	// (0x0005b16b) list_cmail_body_pane_t1

0xd710,	// (0x00059fa4) list_single_cmail_header_editor_pane_bg_g1

0xac77,	// (0x0005750b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd720,	// (0x00059fb4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd718,	// (0x00059fac) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd934,	// (0x0005a1c8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd740,	// (0x00059fd4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd730,	// (0x00059fc4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd738,	// (0x00059fcc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac57,	// (0x000574eb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x896f,	// (0x00055203) calenote_gesture_pane_ParamLimits

0x896f,	// (0x00055203) calenote_gesture_pane

0x898f,	// (0x00055223) calenote_window_pane_ParamLimits

0x898f,	// (0x00055223) calenote_window_pane

0xe8e5,	// (0x0005b179) popup_note_window_cp01

0x89ab,	// (0x0005523f) calenote_swipe_1_pane_ParamLimits

0x89ab,	// (0x0005523f) calenote_swipe_1_pane

0x8584,	// (0x00054e18) calenote_swipe_2_pane_ParamLimits

0x8584,	// (0x00054e18) calenote_swipe_2_pane

0xe6c5,	// (0x0005af59) calenote_swipe_1_pane_g1_ParamLimits

0xe6c5,	// (0x0005af59) calenote_swipe_1_pane_g1

0xe6d2,	// (0x0005af66) calenote_swipe_1_pane_g2_ParamLimits

0xe6d2,	// (0x0005af66) calenote_swipe_1_pane_g2

0x0001,

0xfca4,	// (0x0005c538) calenote_swipe_1_pane_g_ParamLimits

0xfca4,	// (0x0005c538) calenote_swipe_1_pane_g

0xe8f7,	// (0x0005b18b) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x0005b18b) calenote_swipe_1_pane_t1

0xe6c5,	// (0x0005af59) calenote_swipe_2_pane_g1_ParamLimits

0xe6c5,	// (0x0005af59) calenote_swipe_2_pane_g1

0xe916,	// (0x0005b1aa) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x0005b1aa) calenote_swipe_2_pane_g2

0x0001,

0xfd8c,	// (0x0005c620) calenote_swipe_2_pane_g_ParamLimits

0xfd8c,	// (0x0005c620) calenote_swipe_2_pane_g

0xe922,	// (0x0005b1b6) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x0005b1b6) calenote_swipe_2_pane_t1

0x9737,	// (0x00055fcb) main_mup_navstr_pane

0x564f,	// (0x00051ee3) main_mup3_pane_t7_ParamLimits

0x564f,	// (0x00051ee3) main_mup3_pane_t7

0x9c39,	// (0x000564cd) main_mp4_pane_g6_ParamLimits

0x9c39,	// (0x000564cd) main_mp4_pane_g6

0x9ddd,	// (0x00056671) main_image3_pane_t4_ParamLimits

0x9ddd,	// (0x00056671) main_image3_pane_t4

0x89c0,	// (0x00055254) popup_navstr_preview_pane_ParamLimits

0x89c0,	// (0x00055254) popup_navstr_preview_pane

0x89d4,	// (0x00055268) scroll_navstr_pane_ParamLimits

0x89d4,	// (0x00055268) scroll_navstr_pane

0x9737,	// (0x00055fcb) bg_popup_preview_window_pane_cp04

0xe949,	// (0x0005b1dd) popup_navstr_preview_pane_t1

0x89e8,	// (0x0005527c) scroll_navstr_pane_g1_ParamLimits

0x89e8,	// (0x0005527c) scroll_navstr_pane_g1

0x89fc,	// (0x00055290) scroll_navstr_pane_t1_ParamLimits

0x89fc,	// (0x00055290) scroll_navstr_pane_t1

0xe8ee,	// (0x0005b182) bg_button_pane_cp014

0xe8ee,	// (0x0005b182) bg_button_pane_cp030

0x0a83,	// (0x0004d317) list_double_fisheye_pane_g4_ParamLimits

0x0a83,	// (0x0004d317) list_double_fisheye_pane_g4

0x0a8f,	// (0x0004d323) list_double_fisheye_pane_g5_ParamLimits

0x0a8f,	// (0x0004d323) list_double_fisheye_pane_g5

0xcec1,	// (0x00059755) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x0005b079) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x0005b085) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc1,	// (0x0005c555) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x0005b091) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x0005b13f) sp_fs_scroll_pane_cp02

0xa95d,	// (0x000571f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa95d,	// (0x000571f1) popup_sp_fs_calendar_preview_list_single_pane

0x9737,	// (0x00055fcb) main_cam6_pano_pane

0xad5e,	// (0x000575f2) main_mup3_pane_ParamLimits

0x9737,	// (0x00055fcb) main_phacti_pane

0x8093,	// (0x00054927) bg_button_pane_cp11

0x80ad,	// (0x00054941) main_mobtv_info_pane_g2_ParamLimits

0x80ad,	// (0x00054941) main_mobtv_info_pane_g2

0x0001,

0xfc42,	// (0x0005c4d6) main_mobtv_info_pane_g_ParamLimits

0xfc42,	// (0x0005c4d6) main_mobtv_info_pane_g

0x828a,	// (0x00054b1e) sc_clock_pane_t5_ParamLimits

0x828a,	// (0x00054b1e) sc_clock_pane_t5

0x8352,	// (0x00054be6) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x0005ae8a) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x0005ae8a) main_radioblah_pane_t3

0xe60e,	// (0x0005aea2) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x0005aea2) main_radioblah_pane_t4

0x837a,	// (0x00054c0e) main_radioblah_text_pane_ParamLimits

0x837a,	// (0x00054c0e) main_radioblah_text_pane

0x838c,	// (0x00054c20) main_radioblah_info_pane_g1_ParamLimits

0x8425,	// (0x00054cb9) main_radioblah_info_pane_t4_ParamLimits

0x8425,	// (0x00054cb9) main_radioblah_info_pane_t4

0xad5e,	// (0x000575f2) main_sp_fs_calendar_pane

0x8a13,	// (0x000552a7) main_phacti_pane_g1

0x8a1b,	// (0x000552af) phacti_note_pane_ParamLimits

0x8a1b,	// (0x000552af) phacti_note_pane

0xe960,	// (0x0005b1f4) phacti_term_pane_ParamLimits

0xe960,	// (0x0005b1f4) phacti_term_pane

0xe975,	// (0x0005b209) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x0005b209) phacti_note_pane_t1

0xa03e,	// (0x000568d2) phacti_term_pane_g1

0xa046,	// (0x000568da) phacti_term_pane_t1_ParamLimits

0xa046,	// (0x000568da) phacti_term_pane_t1

0xe98c,	// (0x0005b220) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x0005b228) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd96,	// (0x0005c62a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x0005b230) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x0005b230) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x0005b246) aid_popup_sp_fs_bg_corner_pane

0xccec,	// (0x00059580) popup_sp_fs_calendar_preview_bg_pane_g1

0x9737,	// (0x00055fcb) popup_sp_fs_calendar_preview_bg_pane

0x20e1,	// (0x0004e975) popup_sp_fs_calendar_preview_list_pane

0xc8e4,	// (0x00059178) bg_main_sp_fs_cale_pane_ParamLimits

0xc8e4,	// (0x00059178) bg_main_sp_fs_cale_pane

0xa079,	// (0x0005690d) listscroll_cale_mrui_pane_ParamLimits

0xa079,	// (0x0005690d) listscroll_cale_mrui_pane

0xa08e,	// (0x00056922) listscroll_sp_fs_schedule_track_pane

0xa097,	// (0x0005692b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa097,	// (0x0005692b) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x0005b24e) main_sp_fs_ribbon_pane

0xa0aa,	// (0x0005693e) popup_sp_fs_cale_preview_window

0x8a90,	// (0x00055324) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a90,	// (0x00055324) list_single_sp_fs_schedule_track_pane

0xad5e,	// (0x000575f2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xad5e,	// (0x000575f2) bg_sp_fs_highlight_list_pane_cp03

0x8aa4,	// (0x00055338) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8aa4,	// (0x00055338) list_single_sp_fs_schedule_track_pane_g1

0x8ab0,	// (0x00055344) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ab0,	// (0x00055344) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd9b,	// (0x0005c62f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd9b,	// (0x0005c62f) list_single_sp_fs_schedule_track_pane_g

0x8abc,	// (0x00055350) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8abc,	// (0x00055350) list_single_sp_fs_schedule_track_pane_t1

0x8ad6,	// (0x0005536a) sp_fs_schedule_track_pane_ParamLimits

0x8ad6,	// (0x0005536a) sp_fs_schedule_track_pane

0xe9c2,	// (0x0005b256) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x0005b25e) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x0005b266) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x0005b26e) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x0005b276) sp_fs_schedule_track_pane_g5

0x0004,

0xfda0,	// (0x0005c634) sp_fs_schedule_track_pane_g

0xd710,	// (0x00059fa4) bg_sp_fs_schedule_viewer_highlight_g1

0xac77,	// (0x0005750b) bg_sp_fs_schedule_viewer_highlight_g2

0xd718,	// (0x00059fac) bg_sp_fs_schedule_viewer_highlight_g3

0xd720,	// (0x00059fb4) bg_sp_fs_schedule_viewer_highlight_g4

0xd934,	// (0x0005a1c8) bg_sp_fs_schedule_viewer_highlight_g5

0xd730,	// (0x00059fc4) bg_sp_fs_schedule_viewer_highlight_g6

0xd738,	// (0x00059fcc) bg_sp_fs_schedule_viewer_highlight_g7

0xd740,	// (0x00059fd4) bg_sp_fs_schedule_viewer_highlight_g8

0xac57,	// (0x000574eb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdab,	// (0x0005c63f) bg_sp_fs_schedule_viewer_highlight_g

0x9737,	// (0x00055fcb) bg_main_sp_fs_ribbon_pane

0x8ae7,	// (0x0005537b) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x0005b27e) main_sp_fs_ribbon_pane_t1

0x8af0,	// (0x00055384) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x0005b28d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdbe,	// (0x0005c652) main_sp_fs_ribbon_pane_t

0xea08,	// (0x0005b29c) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x0005b2a4) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x0005b2ad) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x0005b2b6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdc5,	// (0x0005c659) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x0005b2be) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x0005b2c7) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x0005b2d0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdcc,	// (0x0005c660) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x0005b2d9) list_cale_mrui_pane

0x8aff,	// (0x00055393) sp_fs_scroll_pane_cp07_ParamLimits

0x8aff,	// (0x00055393) sp_fs_scroll_pane_cp07

0x8b1b,	// (0x000553af) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b1b,	// (0x000553af) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x0005b2e6) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x0005b2ee) list_sp_fs_schedule_track_pane

0xea62,	// (0x0005b2f6) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x0005b2f6) sp_fs_scroll_pane_cp06

0xccec,	// (0x00059580) bgmain_sp_fs_calendar_pane_g1

0x104e,	// (0x0004d8e2) list_single_cale_mrui_pane_ParamLimits

0x104e,	// (0x0004d8e2) list_single_cale_mrui_pane

0xa0bc,	// (0x00056950) list_single_cale_mrui_row_pane_ParamLimits

0xa0bc,	// (0x00056950) list_single_cale_mrui_row_pane

0xa0c9,	// (0x0005695d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa0c9,	// (0x0005695d) list_single_cale_mrui_row_pane_g1

0xa101,	// (0x00056995) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa101,	// (0x00056995) list_single_cale_mrui_row_pane_t1

0x1070,	// (0x0004d904) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1070,	// (0x0004d904) list_single_cale_mrui_row_pane_t2

0xa113,	// (0x000569a7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa113,	// (0x000569a7) list_single_cale_mrui_row_pane_t3

0xa142,	// (0x000569d6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa142,	// (0x000569d6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdda,	// (0x0005c66e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdda,	// (0x0005c66e) list_single_cale_mrui_row_pane_t

0x10d8,	// (0x0004d96c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x10d8,	// (0x0004d96c) list_single_cmail_header_editor_pane_bg_cp01

0x10fe,	// (0x0004d992) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x10fe,	// (0x0004d992) list_single_cmail_header_editor_pane_bg_cp02

0x8b2b,	// (0x000553bf) main_radioblah_text_pane_t1_ParamLimits

0x8b2b,	// (0x000553bf) main_radioblah_text_pane_t1

0xea81,	// (0x0005b315) cam6_indi_pane_cp01

0xea89,	// (0x0005b31d) cam6_mode_pane_cp01

0xea91,	// (0x0005b325) cam6_pano_pane

0xea9a,	// (0x0005b32e) cam6_zoom_pane_cp01

0xeaa2,	// (0x0005b336) cam6_pano_image_pane

0xeaad,	// (0x0005b341) cam6_pano_pane_g1

0xe34f,	// (0x0005abe3) cam6_pano_pane_g2

0xeab6,	// (0x0005b34a) cam6_pano_pane_g3

0xeabf,	// (0x0005b353) cam6_pano_pane_g4

0xd2a3,	// (0x00059b37) cam6_pano_pane_g5

0xeac8,	// (0x0005b35c) cam6_pano_pane_g6

0xead2,	// (0x0005b366) cam6_pano_pane_g7

0xeada,	// (0x0005b36e) cam6_pano_pane_g8

0xeae3,	// (0x0005b377) cam6_pano_pane_g9

0x0008,

0xfde3,	// (0x0005c677) cam6_pano_pane_g

0x9737,	// (0x00055fcb) main_browser_tag_pane

0xe941,	// (0x0005b1d5) grid_navstr_albumart_pane

0xeaee,	// (0x0005b382) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x0005b382) cell_navstr_albumart_pane

0xeb0e,	// (0x0005b3a2) cell_navstr_albumart_pane_g1

0xc6b5,	// (0x00058f49) cell_navstr_albumart_pane_g2

0xc6c5,	// (0x00058f59) cell_navstr_albumart_pane_g3

0xc6bd,	// (0x00058f51) cell_navstr_albumart_pane_g4

0x0003,

0xfdf6,	// (0x0005c68a) cell_navstr_albumart_pane_g

0x8b46,	// (0x000553da) bt_list_pane_ParamLimits

0x8b46,	// (0x000553da) bt_list_pane

0x8b5a,	// (0x000553ee) bt_list_pane_t1

0x8b69,	// (0x000553fd) bt_list_pane_t2

0x0001,

0xfdff,	// (0x0005c693) bt_list_pane_t

0x9737,	// (0x00055fcb) main_cale_prevew_pane

0x8b78,	// (0x0005540c) popup_cale_preview_window_ParamLimits

0x8b78,	// (0x0005540c) popup_cale_preview_window

0xad5e,	// (0x000575f2) bg_popup_preview_window_pane_cp05_ParamLimits

0xad5e,	// (0x000575f2) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x0005b3aa) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x0005b3aa) list_cale_preview_pane

0x8b91,	// (0x00055425) list_double_cale_preview_pane_ParamLimits

0x8b91,	// (0x00055425) list_double_cale_preview_pane

0xd748,	// (0x00059fdc) list_single_cale_preview_pane_ParamLimits

0xd748,	// (0x00059fdc) list_single_cale_preview_pane

0x8ba3,	// (0x00055437) list_single_cale_preview_pane_g1

0x8bab,	// (0x0005543f) list_single_cale_preview_pane_t1_ParamLimits

0x8bab,	// (0x0005543f) list_single_cale_preview_pane_t1

0x8bc0,	// (0x00055454) list_double_cale_preview_pane_g1

0x8bc8,	// (0x0005545c) list_double_cale_preview_pane_t1_ParamLimits

0x8bc8,	// (0x0005545c) list_double_cale_preview_pane_t1

0x8bdd,	// (0x00055471) list_double_cale_preview_pane_t2_ParamLimits

0x8bdd,	// (0x00055471) list_double_cale_preview_pane_t2

0x0001,

0xfe04,	// (0x0005c698) list_double_cale_preview_pane_t_ParamLimits

0xfe04,	// (0x0005c698) list_double_cale_preview_pane_t

0x9737,	// (0x00055fcb) main_ezdial_pane

0xad5e,	// (0x000575f2) main_sp_fs_email_pane_ParamLimits

0x85e0,	// (0x00054e74) cmail_ddmenu_btn01_pane_ParamLimits

0x85e0,	// (0x00054e74) cmail_ddmenu_btn01_pane

0x85f3,	// (0x00054e87) cmail_ddmenu_btn02_pane_ParamLimits

0x85f3,	// (0x00054e87) cmail_ddmenu_btn02_pane

0x8616,	// (0x00054eaa) cmail_ddmenu_btn03_pane_ParamLimits

0x8616,	// (0x00054eaa) cmail_ddmenu_btn03_pane

0x863c,	// (0x00054ed0) main_sp_fs_ctrlbar_pane_ParamLimits

0x8660,	// (0x00054ef4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88d1,	// (0x00055165) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x0005b155) bg_button_pane_cp12

0xe8ca,	// (0x0005b15e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x0005b15e) list_single_cmail_header_detail_pane_g3

0xa003,	// (0x00056897) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa003,	// (0x00056897) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd87,	// (0x0005c61b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd87,	// (0x0005c61b) list_single_cmail_header_detail_pane_t

0xa05b,	// (0x000568ef) phacti_term_pane_t2_ParamLimits

0xa05b,	// (0x000568ef) phacti_term_pane_t2

0x0001,

0xfd91,	// (0x0005c625) phacti_term_pane_t_ParamLimits

0xfd91,	// (0x0005c625) phacti_term_pane_t

0xeb22,	// (0x0005b3b6) aid_size_list_single_double

0x8bf5,	// (0x00055489) popup_ezdial_listscroll_window

0x8c11,	// (0x000554a5) popup_number_entry_window_cp01

0xaa1e,	// (0x000572b2) bg_popup_call_pane_cp09

0xeb2e,	// (0x0005b3c2) ezdial_list_pane

0xeb36,	// (0x0005b3ca) scroll_pane_cp23

0xc8e4,	// (0x00059178) bg_button_pane_cp028_ParamLimits

0xc8e4,	// (0x00059178) bg_button_pane_cp028

0x8c1f,	// (0x000554b3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c1f,	// (0x000554b3) cmail_ddmenu_btn01_pane_g1

0x8c2b,	// (0x000554bf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c2b,	// (0x000554bf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe09,	// (0x0005c69d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe09,	// (0x0005c69d) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x0005b3d2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x0005b3d2) cmail_ddmenu_btn01_pane_t1

0xc8e4,	// (0x00059178) bg_button_pane_cp029_ParamLimits

0xc8e4,	// (0x00059178) bg_button_pane_cp029

0x8c37,	// (0x000554cb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c37,	// (0x000554cb) cmail_ddmenu_btn02_pane_g1

0x8c50,	// (0x000554e4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c50,	// (0x000554e4) cmail_ddmenu_btn02_pane_t1

0xad5e,	// (0x000575f2) bg_button_pane_cp031_ParamLimits

0xad5e,	// (0x000575f2) bg_button_pane_cp031

0x8c37,	// (0x000554cb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c37,	// (0x000554cb) cmail_ddmenu_btn03_pane_g1

0x8c50,	// (0x000554e4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c50,	// (0x000554e4) cmail_ddmenu_btn03_pane_t1

0x6200,	// (0x00052a94) cell_dialer2_keypad_pane_t1_ParamLimits

0x621a,	// (0x00052aae) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x621a,	// (0x00052aae) cell_dialer2_keypad_pane_t1_copy1

0x7eb6,	// (0x0005474a) ncimui_group_button_pane

0xad5e,	// (0x000575f2) main_sp_fs_calendar_pane_ParamLimits

0x88e6,	// (0x0005517a) list_single_cmail_header_caption_pane_ParamLimits

0xa070,	// (0x00056904) aid_recal_txt_sm_pane

0x9737,	// (0x00055fcb) mian_recal_day_pane

0xa0aa,	// (0x0005693e) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x0005b3e7) list_recal_day_pane

0xa18c,	// (0x00056a20) list_single_recal_day_pane_ParamLimits

0xa18c,	// (0x00056a20) list_single_recal_day_pane

0xeb7a,	// (0x0005b40e) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x0005b40e) list_single_recal_day_pane_g1

0xa19e,	// (0x00056a32) list_single_recal_day_pane_g2_ParamLimits

0xa19e,	// (0x00056a32) list_single_recal_day_pane_g2

0xa1aa,	// (0x00056a3e) list_single_recal_day_pane_g3_ParamLimits

0xa1aa,	// (0x00056a3e) list_single_recal_day_pane_g3

0x111e,	// (0x0004d9b2) list_single_recal_day_pane_g4_ParamLimits

0x111e,	// (0x0004d9b2) list_single_recal_day_pane_g4

0xa1b6,	// (0x00056a4a) list_single_recal_day_pane_g5_ParamLimits

0xa1b6,	// (0x00056a4a) list_single_recal_day_pane_g5

0xa1c2,	// (0x00056a56) list_single_recal_day_pane_g6_ParamLimits

0xa1c2,	// (0x00056a56) list_single_recal_day_pane_g6

0x0004,

0xfe18,	// (0x0005c6ac) list_single_recal_day_pane_g_ParamLimits

0xfe18,	// (0x0005c6ac) list_single_recal_day_pane_g

0xa1d6,	// (0x00056a6a) list_single_recal_day_pane_t1

0xa1e8,	// (0x00056a7c) list_single_recal_day_pane_t2

0x0001,

0xfe23,	// (0x0005c6b7) list_single_recal_day_pane_t

0x8c74,	// (0x00055508) ncimui_query_button_pane_ParamLimits

0x8c74,	// (0x00055508) ncimui_query_button_pane

0x8c84,	// (0x00055518) ncimui_query_button_pane_t1_ParamLimits

0x8c84,	// (0x00055518) ncimui_query_button_pane_t1

0xeb86,	// (0x0005b41a) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x0005b41a) ncimui_query_button_pane_t2

0x0001,

0xfe28,	// (0x0005c6bc) ncimui_query_button_pane_t_ParamLimits

0xfe28,	// (0x0005c6bc) ncimui_query_button_pane_t

0x8c97,	// (0x0005552b) query_button_pane_ParamLimits

0x8c97,	// (0x0005552b) query_button_pane

0x9737,	// (0x00055fcb) bg_button_pane_cp0028

0xeb99,	// (0x0005b42d) query_button_pane_t1

0x4220,	// (0x00050ab4) main_tport_pane_ParamLimits

0x8795,	// (0x00055029) bg_popup_window_pane_cp01_ParamLimits

0x8795,	// (0x00055029) bg_popup_window_pane_cp01

0x87b0,	// (0x00055044) heading_pane_cp08_ParamLimits

0x87b0,	// (0x00055044) heading_pane_cp08

0x87c3,	// (0x00055057) heading_pane_cp07_ParamLimits

0x87c3,	// (0x00055057) heading_pane_cp07

0x886a,	// (0x000550fe) cell_tport_appsw_pane_g2

0x0002,

0xfd74,	// (0x0005c608) cell_tport_appsw_pane_g

0x37fe,	// (0x00050092) input_candi_list_open_g1

0xae74,	// (0x00057708) list_cale_time_pane_g6_ParamLimits

0xae74,	// (0x00057708) list_cale_time_pane_g6

0x4fe8,	// (0x0005187c) aid_size_touch_calib_1_ParamLimits

0x4fe8,	// (0x0005187c) aid_size_touch_calib_1

0x4ffa,	// (0x0005188e) aid_size_touch_calib_2_ParamLimits

0x4ffa,	// (0x0005188e) aid_size_touch_calib_2

0x5012,	// (0x000518a6) aid_size_touch_calib_3_ParamLimits

0x5012,	// (0x000518a6) aid_size_touch_calib_3

0x5030,	// (0x000518c4) aid_size_touch_calib_4_ParamLimits

0x5030,	// (0x000518c4) aid_size_touch_calib_4

0x5048,	// (0x000518dc) main_touch_calib_button_group_pane_ParamLimits

0x5048,	// (0x000518dc) main_touch_calib_button_group_pane

0x5060,	// (0x000518f4) main_touch_calib_pane_g1_ParamLimits

0x5072,	// (0x00051906) main_touch_calib_pane_g2_ParamLimits

0x5084,	// (0x00051918) main_touch_calib_pane_g3_ParamLimits

0x5096,	// (0x0005192a) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0005bff8) main_touch_calib_pane_g_ParamLimits

0x50a8,	// (0x0005193c) main_touch_calib_pane_t1_ParamLimits

0x50c2,	// (0x00051956) main_touch_calib_pane_t2_ParamLimits

0x50dc,	// (0x00051970) main_touch_calib_pane_t3_ParamLimits

0x50f0,	// (0x00051984) main_touch_calib_pane_t4_ParamLimits

0x5104,	// (0x00051998) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0005c001) main_touch_calib_pane_t_ParamLimits

0xd046,	// (0x000598da) list_single_fp_cale_pane_g3_ParamLimits

0xd046,	// (0x000598da) list_single_fp_cale_pane_g3

0xad5e,	// (0x000575f2) bg_button_pane_cp012_ParamLimits

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp03_ParamLimits

0x7141,	// (0x000539d5) cell_vitu2_function_top_pane_g1_ParamLimits

0xad5e,	// (0x000575f2) bg_vkb2_func_pane_cp04_ParamLimits

0x7e41,	// (0x000546d5) main_ncimui_button_group_pane_ParamLimits

0x7e41,	// (0x000546d5) main_ncimui_button_group_pane

0x7ea1,	// (0x00054735) main_ncimui_pane_t3_ParamLimits

0x7ea1,	// (0x00054735) main_ncimui_pane_t3

0xe957,	// (0x0005b1eb) phacti_button_group_pane

0xeb22,	// (0x0005b3b6) aid_size_list_single_double_ParamLimits

0x8bf5,	// (0x00055489) popup_ezdial_listscroll_window_ParamLimits

0x8c11,	// (0x000554a5) popup_number_entry_window_cp01_ParamLimits

0x8caa,	// (0x0005553e) phacti_button_pane_ParamLimits

0x8caa,	// (0x0005553e) phacti_button_pane

0x9737,	// (0x00055fcb) bg_button_pane_cp14

0xeba7,	// (0x0005b43b) phacti_button_pane_t1

0x8cbb,	// (0x0005554f) main_touch_calib_button_pane_ParamLimits

0x8cbb,	// (0x0005554f) main_touch_calib_button_pane

0xa847,	// (0x000570db) bg_button_pane_cp18_ParamLimits

0xa847,	// (0x000570db) bg_button_pane_cp18

0xebb5,	// (0x0005b449) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x0005b449) main_touch_calib_button_pane_t1

0xebcb,	// (0x0005b45f) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x0005b45f) main_touch_calib_button_pane_t2

0x0001,

0x028e,	// (0x0004cb22) main_touch_calib_button_pane_t_ParamLimits

0x028e,	// (0x0004cb22) main_touch_calib_button_pane_t

0x9737,	// (0x00055fcb) cell_ncimui_button_pane

0x9737,	// (0x00055fcb) bg_button_pane_cp032

0xebe9,	// (0x0005b47d) cell_ncimui_button_pane_t1

0x9dbd,	// (0x00056651) image3_infobar_pane_ParamLimits

0x9dbd,	// (0x00056651) image3_infobar_pane

0x82b6,	// (0x00054b4a) fs_bigclock_status_pane_ParamLimits

0x82b6,	// (0x00054b4a) fs_bigclock_status_pane

0x82c3,	// (0x00054b57) main_fs_bigclock_clock_pane_ParamLimits

0x82c3,	// (0x00054b57) main_fs_bigclock_clock_pane

0x82e1,	// (0x00054b75) main_fs_bigclock_indi_pane_ParamLimits

0x82e1,	// (0x00054b75) main_fs_bigclock_indi_pane

0x8313,	// (0x00054ba7) main_fs_bigclock_swipe_pane_ParamLimits

0x8313,	// (0x00054ba7) main_fs_bigclock_swipe_pane

0x9737,	// (0x00055fcb) main_fs_clock_dumped_data

0xe45c,	// (0x0005acf0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45c,	// (0x0005acf0) list_single_fs_bigclock_indicator_pane_g1

0xe478,	// (0x0005ad0c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe478,	// (0x0005ad0c) list_single_fs_bigclock_indicator_pane_g2

0xe492,	// (0x0005ad26) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe492,	// (0x0005ad26) list_single_fs_bigclock_indicator_pane_g3

0xe4ac,	// (0x0005ad40) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4ac,	// (0x0005ad40) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x00b6,	// (0x0004c94a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x00b6,	// (0x0004c94a) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x0005ad74) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x0005ad74) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x0005ad9c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x0005ad9c) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x0005adc4) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x0005adc4) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x0005adec) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x0005adec) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc60,	// (0x0005c4f4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc60,	// (0x0005c4f4) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x0005b48b) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x0005b48b) image3_infobar_fav_pane

0xec07,	// (0x0005b49b) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x0005b49b) image3_infobar_loc_pane

0xec1b,	// (0x0005b4af) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x0005b4af) image3_infobar_time_pane

0xccec,	// (0x00059580) image3_infobar_time_pane_g1

0xec2b,	// (0x0005b4bf) image3_infobar_time_pane_t1

0xccec,	// (0x00059580) image3_infobar_loc_pane_g1

0xec39,	// (0x0005b4cd) image3_infobar_loc_pane_g2

0x0001,

0x0293,	// (0x0004cb27) image3_infobar_loc_pane_g

0xec41,	// (0x0005b4d5) image3_infobar_loc_pane_t1

0xccec,	// (0x00059580) image3_infobar_fav_pane_g1

0xec4f,	// (0x0005b4e3) image3_infobar_fav_pane_g2

0x0001,

0x0298,	// (0x0004cb2c) image3_infobar_fav_pane_g

0xec57,	// (0x0005b4eb) fs_bigclock_status_battery_pane

0xec60,	// (0x0005b4f4) fs_bigclock_status_signal_pane

0xec69,	// (0x0005b4fd) fs_bigclock_status_title_pane

0xec72,	// (0x0005b506) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x0005b50f) fs_bigclock_status_signal_pane_g2

0x0001,

0x029d,	// (0x0004cb31) fs_bigclock_status_signal_pane_g

0xec83,	// (0x0005b517) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x0005b520) fs_bigclock_status_battery_pane_g2

0x0001,

0x02a2,	// (0x0004cb36) fs_bigclock_status_battery_pane_g

0xec94,	// (0x0005b528) fs_bigclock_status_title_pane_t1

0x8cd0,	// (0x00055564) main_fs_bigclock_clock_pane_g1

0x8cd0,	// (0x00055564) main_fs_bigclock_clock_pane_g2

0x8ce1,	// (0x00055575) main_fs_bigclock_clock_pane_g3

0x8ce1,	// (0x00055575) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2d,	// (0x0005c6c1) main_fs_bigclock_clock_pane_g

0x8cf4,	// (0x00055588) main_fs_bigclock_clock_pane_t1

0x8d0a,	// (0x0005559e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe36,	// (0x0005c6ca) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x0005b536) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x0005b536) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x0005b547) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x0005b547) list_single_fs_bigclock_pane

0xecd9,	// (0x0005b56d) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x0005b57c) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x0005b584) list_single_fs_bigclock_pane_t1

0xccec,	// (0x00059580) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x0005b5c7) main_fs_bigclock_swipe_pane_g2

0x0001,

0x02c1,	// (0x0004cb55) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x0005b5cf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x0005b5cf) main_fs_bigclock_swipe_pane_t1

0x3105,	// (0x0004f999) call_type_pane_ParamLimits

0x9737,	// (0x00055fcb) main_btmg_pane

0xa0f5,	// (0x00056989) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa0f5,	// (0x00056989) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdd3,	// (0x0005c667) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdd3,	// (0x0005c667) list_single_cale_mrui_row_pane_g

0xa17b,	// (0x00056a0f) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x0005b406) list_recal_vselct_arw_up_pane

0xa183,	// (0x00056a17) list_recal_vselct_pane

0x8d64,	// (0x000555f8) btmg_button_pane

0x8d6e,	// (0x00055602) main_btmg_pane_g1

0x9737,	// (0x00055fcb) bg_button_pane_cp044

0xed58,	// (0x0005b5ec) btmg_button_pane_t1

0xc8d0,	// (0x00059164) aid_listscroll_gen

0xad5e,	// (0x000575f2) main_cntbar_detail_pane

0xe8a3,	// (0x0005b137) list_cmail_folder_pane

0xcec1,	// (0x00059755) sp_fs_scroll_pane_cp03_ParamLimits

0x1136,	// (0x0004d9ca) list_single_fs_dyc_pane_cp01_ParamLimits

0x1136,	// (0x0004d9ca) list_single_fs_dyc_pane_cp01

0xed66,	// (0x0005b5fa) aid_size_cmail_indent

0xa1fa,	// (0x00056a8e) list_single_dyc_row_pane_cp01

0x8daa,	// (0x0005563e) cntbar_detail_list_pane_ParamLimits

0x8daa,	// (0x0005563e) cntbar_detail_list_pane

0x8df6,	// (0x0005568a) main_cntbar_detail_cont_pane_ParamLimits

0x8df6,	// (0x0005568a) main_cntbar_detail_cont_pane

0xcec1,	// (0x00059755) scroll_pane_cp032_ParamLimits

0xcec1,	// (0x00059755) scroll_pane_cp032

0x8e0a,	// (0x0005569e) cntbar_detail_list_event_pane_ParamLimits

0x8e0a,	// (0x0005569e) cntbar_detail_list_event_pane

0x8dba,	// (0x0005564e) cntbar_detail_list_shct_pane

0xacc5,	// (0x00057559) aid_list_gen

0xed6f,	// (0x0005b603) aid_scroll

0xed78,	// (0x0005b60c) aid_size_touch_scroll_bar

0x7726,	// (0x00053fba) aid_list_double

0xa203,	// (0x00056a97) aid_list_single

0x7726,	// (0x00053fba) aid_list_single_lg

0xa20c,	// (0x00056aa0) aid_list_z_g_a_sm

0xa214,	// (0x00056aa8) aid_list_z_g_d

0xa21c,	// (0x00056ab0) aid_txt_z_prm

0x114d,	// (0x0004d9e1) aid_txt_z_prm_cp01

0x115b,	// (0x0004d9ef) aid_txt_z_sec

0x8e1a,	// (0x000556ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e1a,	// (0x000556ae) main_cntbar_detail_cont_pane_g1

0x8e2e,	// (0x000556c2) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e2e,	// (0x000556c2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe42,	// (0x0005c6d6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe42,	// (0x0005c6d6) main_cntbar_detail_cont_pane_g

0xed81,	// (0x0005b615) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x0005b623) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x0005b631) main_cntbar_detail_cont_pane_t3

0x0002,

0x02cb,	// (0x0004cb5f) main_cntbar_detail_cont_pane_t

0x8e3e,	// (0x000556d2) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e3e,	// (0x000556d2) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x0005b63f) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x0005b648) cntbar_detail_list_shct_pane_g2

0x0001,

0x02d2,	// (0x0004cb66) cntbar_detail_list_shct_pane_g

0x8e52,	// (0x000556e6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e52,	// (0x000556e6) cntbar_detail_list_event_pane_g1

0x8e5e,	// (0x000556f2) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e5e,	// (0x000556f2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe47,	// (0x0005c6db) cntbar_detail_list_event_pane_g_ParamLimits

0xfe47,	// (0x0005c6db) cntbar_detail_list_event_pane_g

0x8eca,	// (0x0005575e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8eca,	// (0x0005575e) cntbar_detail_list_event_pane_t1

0x8edf,	// (0x00055773) cntbar_detail_list_event_pane_t2_ParamLimits

0x8edf,	// (0x00055773) cntbar_detail_list_event_pane_t2

0x0002,

0xfe54,	// (0x0005c6e8) cntbar_detail_list_event_pane_t_ParamLimits

0xfe54,	// (0x0005c6e8) cntbar_detail_list_event_pane_t

0xccec,	// (0x00059580) cell_cntbar_detail_list_shct_pane_g1

0xb44b,	// (0x00057cdf) navi_pane_mv_g3

0xad5e,	// (0x000575f2) main_cntbar_detail_pane_ParamLimits

0x9737,	// (0x00055fcb) main_notif_wgt_pane

0x9bd3,	// (0x00056467) aid_tch_main_mp4_pane_g4

0x9db5,	// (0x00056649) popup_slider_window_cp02

0xa171,	// (0x00056a05) list_recal_day_event_pane

0x8d78,	// (0x0005560c) cntbar_detail_btn_pane_ParamLimits

0x8d78,	// (0x0005560c) cntbar_detail_btn_pane

0x8d91,	// (0x00055625) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d91,	// (0x00055625) cntbar_detail_btn_pane_cp01

0x8dba,	// (0x0005564e) cntbar_detail_list_shct_pane_ParamLimits

0x8dca,	// (0x0005565e) cntbar_detail_pane_g1_ParamLimits

0x8dca,	// (0x0005565e) cntbar_detail_pane_g1

0x8dda,	// (0x0005566e) cntbar_detail_pane_t1_ParamLimits

0x8dda,	// (0x0005566e) cntbar_detail_pane_t1

0x8e6a,	// (0x000556fe) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e6a,	// (0x000556fe) cntbar_detail_list_event_pane_g3

0x8e82,	// (0x00055716) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e82,	// (0x00055716) cntbar_detail_list_event_pane_g4

0x8e9a,	// (0x0005572e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e9a,	// (0x0005572e) cntbar_detail_list_event_pane_g5

0x8eb2,	// (0x00055746) cntbar_detail_list_event_pane_g6_ParamLimits

0x8eb2,	// (0x00055746) cntbar_detail_list_event_pane_g6

0x8ef4,	// (0x00055788) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ef4,	// (0x00055788) cntbar_detail_list_event_pane_t3

0x8f06,	// (0x0005579a) popup_notif_wgt_window_ParamLimits

0x8f06,	// (0x0005579a) popup_notif_wgt_window

0x8f1f,	// (0x000557b3) popup_submenu_window_cp01_ParamLimits

0x8f1f,	// (0x000557b3) popup_submenu_window_cp01

0xaa1e,	// (0x000572b2) bg_popup_window_pane_cp10

0xedbd,	// (0x0005b651) listscroll_notif_wgt_pane

0xedcf,	// (0x0005b663) list_notif_wgt_window

0xedd8,	// (0x0005b66c) scroll_pane_cp033

0x8f31,	// (0x000557c5) list_notif_wgt_row_pane_ParamLimits

0x8f31,	// (0x000557c5) list_notif_wgt_row_pane

0xede1,	// (0x0005b675) aid_size_list_notif_wgt_del

0xedee,	// (0x0005b682) list_notif_wgt_row_pane_g1

0xedfa,	// (0x0005b68e) list_notif_wgt_row_pane_g2

0xee09,	// (0x0005b69d) list_notif_wgt_row_pane_g3

0x0002,

0x02eb,	// (0x0004cb7f) list_notif_wgt_row_pane_g

0xee16,	// (0x0005b6aa) list_notif_wgt_row_pane_t1

0xee2c,	// (0x0005b6c0) list_notif_wgt_row_pane_t2

0xee3e,	// (0x0005b6d2) list_notif_wgt_row_pane_t3

0x0002,

0x02f2,	// (0x0004cb86) list_notif_wgt_row_pane_t

0xd93c,	// (0x0005a1d0) list_recal_day_event_pane_g1

0xee50,	// (0x0005b6e4) list_recal_day_event_pane_t1

0x9737,	// (0x00055fcb) bg_button_pane_cp045

0x8f41,	// (0x000557d5) cntbar_detail_btn_pane_t1

0xc8e4,	// (0x00059178) main_callh_pane_ParamLimits

0xc8e4,	// (0x00059178) main_callh_pane

0x9737,	// (0x00055fcb) main_coverflow0_pane

0x9737,	// (0x00055fcb) main_wgtman_pane

0x832b,	// (0x00054bbf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x832b,	// (0x00054bbf) main_fs_bigclock_unlock_btn_pane

0x8862,	// (0x000550f6) bg_button_pane_cp16

0x8872,	// (0x00055106) cell_tport_appsw_pane_g3

0x8f4f,	// (0x000557e3) cf0_flow_pane_ParamLimits

0x8f4f,	// (0x000557e3) cf0_flow_pane

0xee5f,	// (0x0005b6f3) listscroll_cf0_pane

0xee6a,	// (0x0005b6fe) main_cf0_pane_g1

0x8f64,	// (0x000557f8) main_cf0_pane_t1_ParamLimits

0x8f64,	// (0x000557f8) main_cf0_pane_t1

0x8f7b,	// (0x0005580f) main_cf0_pane_t2_ParamLimits

0x8f7b,	// (0x0005580f) main_cf0_pane_t2

0x0001,

0xfe5b,	// (0x0005c6ef) main_cf0_pane_t_ParamLimits

0xfe5b,	// (0x0005c6ef) main_cf0_pane_t

0xee7c,	// (0x0005b710) scroll_pane_cp11

0x8f92,	// (0x00055826) cf0_flow_pane_g1

0x8f9a,	// (0x0005582e) cf0_flow_pane_g2

0x0001,

0xfe60,	// (0x0005c6f4) cf0_flow_pane_g

0x8fa2,	// (0x00055836) cf0_flow_pane_t1

0x9737,	// (0x00055fcb) main_call6_pane

0x9737,	// (0x00055fcb) main_calllock_pane

0x8fb0,	// (0x00055844) call6_btn_grp_pane_ParamLimits

0x8fb0,	// (0x00055844) call6_btn_grp_pane

0x8fca,	// (0x0005585e) call6_pane_g1_ParamLimits

0x8fca,	// (0x0005585e) call6_pane_g1

0x8fe0,	// (0x00055874) popup_call6_1st_window_ParamLimits

0x8fe0,	// (0x00055874) popup_call6_1st_window

0x8ff1,	// (0x00055885) popup_call6_2nd_window_ParamLimits

0x8ff1,	// (0x00055885) popup_call6_2nd_window

0x9002,	// (0x00055896) cell_call6_btn_pane_ParamLimits

0x9002,	// (0x00055896) cell_call6_btn_pane

0xaa1e,	// (0x000572b2) bg_popup_call2_in_pane_cp03

0xee87,	// (0x0005b71b) popup_call6_1st_window_g1

0xee8f,	// (0x0005b723) popup_call6_1st_window_g2

0xee97,	// (0x0005b72b) popup_call6_1st_window_g3

0x0002,

0x0308,	// (0x0004cb9c) popup_call6_1st_window_g

0xee9f,	// (0x0005b733) popup_call6_1st_window_t1

0xeeae,	// (0x0005b742) popup_call6_1st_window_t2

0xeebc,	// (0x0005b750) popup_call6_1st_window_t3

0x0002,

0x030f,	// (0x0004cba3) popup_call6_1st_window_t

0xaa1e,	// (0x000572b2) bg_popup_call2_in_pane_cp04

0xee87,	// (0x0005b71b) popup_call6_2nd_window_g1

0xee8f,	// (0x0005b723) popup_call6_2nd_window_g2

0xee97,	// (0x0005b72b) popup_call6_2nd_window_g3

0x0002,

0x0308,	// (0x0004cb9c) popup_call6_2nd_window_g

0xee9f,	// (0x0005b733) popup_call6_2nd_window_t1

0x9737,	// (0x00055fcb) bg_button_pane_cp15

0xeeca,	// (0x0005b75e) cell_call6_btn_pane_g1

0xa22a,	// (0x00056abe) cell_call6_btn_pane_t1

0x9016,	// (0x000558aa) listscroll_wgtman_pane_ParamLimits

0x9016,	// (0x000558aa) listscroll_wgtman_pane

0x9037,	// (0x000558cb) wgtman_btn_pane_ParamLimits

0x9037,	// (0x000558cb) wgtman_btn_pane

0xb25f,	// (0x00057af3) aid_scroll_copy1

0xeed3,	// (0x0005b767) list_wgtman_pane

0x907a,	// (0x0005590e) wgtman_btn_pane_g1_ParamLimits

0x907a,	// (0x0005590e) wgtman_btn_pane_g1

0x90a6,	// (0x0005593a) wgtman_btn_pane_t1_ParamLimits

0x90a6,	// (0x0005593a) wgtman_btn_pane_t1

0xeedd,	// (0x0005b771) wgtman_btn_pane_t2_ParamLimits

0xeedd,	// (0x0005b771) wgtman_btn_pane_t2

0x0001,

0xfe65,	// (0x0005c6f9) wgtman_btn_pane_t_ParamLimits

0xfe65,	// (0x0005c6f9) wgtman_btn_pane_t

0x90e3,	// (0x00055977) listrow_wgtman_pane_ParamLimits

0x90e3,	// (0x00055977) listrow_wgtman_pane

0x90f5,	// (0x00055989) listrow_wgtman_pane_g1

0x9102,	// (0x00055996) listrow_wgtman_pane_g2

0x0001,

0xfe6a,	// (0x0005c6fe) listrow_wgtman_pane_g

0x1169,	// (0x0004d9fd) listrow_wgtman_pane_t1

0x1181,	// (0x0004da15) listrow_wgtman_pane_t2

0x0001,

0xfe6f,	// (0x0005c703) listrow_wgtman_pane_t

0x11a7,	// (0x0004da3b) wait_bar_pane_cp09

0xeef4,	// (0x0005b788) main_calllock_btn_pane

0xeefe,	// (0x0005b792) main_calllock_pane_g1

0x9737,	// (0x00055fcb) bg_button_pane_cp17

0xeeca,	// (0x0005b75e) main_calllock_btn_pane_g1

0xef0a,	// (0x0005b79e) main_calllock_btn_pane_t1

0x9737,	// (0x00055fcb) main_dialer3_pane

0x9737,	// (0x00055fcb) main_fmrd2_pane

0xccec,	// (0x00059580) main_fs_bigclock_unlock_btn_pane_g1

0x9128,	// (0x000559bc) main_fs_bigclock_unlock_btn_pane_t1

0x9136,	// (0x000559ca) area_fmrd2_info_pane_ParamLimits

0x9136,	// (0x000559ca) area_fmrd2_info_pane

0x9147,	// (0x000559db) area_fmrd2_visual_pane_ParamLimits

0x9147,	// (0x000559db) area_fmrd2_visual_pane

0x9155,	// (0x000559e9) fmrd2_indi_pane_ParamLimits

0x9155,	// (0x000559e9) fmrd2_indi_pane

0x9162,	// (0x000559f6) area_fmrd2_visual_pane_g1

0x916a,	// (0x000559fe) area_fmrd2_visual_pane_t1

0x917a,	// (0x00055a0e) area_fmrd2_visual_pane_t2

0x918a,	// (0x00055a1e) area_fmrd2_visual_pane_t3

0x0002,

0xfe79,	// (0x0005c70d) area_fmrd2_visual_pane_t

0x919a,	// (0x00055a2e) area_fmrd2_info_pane_g1

0x91a2,	// (0x00055a36) area_fmrd2_info_pane_t1

0x91b2,	// (0x00055a46) area_fmrd2_info_pane_t2

0x91c2,	// (0x00055a56) area_fmrd2_info_pane_t3

0x91d2,	// (0x00055a66) area_fmrd2_info_pane_t4

0x0003,

0xfe80,	// (0x0005c714) area_fmrd2_info_pane_t

0x91e0,	// (0x00055a74) fmrd2_indi_pane_t1

0x91f0,	// (0x00055a84) fmrd2_indi_pane_t2

0x9200,	// (0x00055a94) fmrd2_indi_pane_t3

0x0002,

0xfe89,	// (0x0005c71d) fmrd2_indi_pane_t

0xe4bb,	// (0x0005ad4f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4bb,	// (0x0005ad4f) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x0005ae09) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x0005ae09) list_single_fs_bigclock_indicator_pane_t5

0x8a2f,	// (0x000552c3) aid_cell_bcale_month_pane_ParamLimits

0x8a2f,	// (0x000552c3) aid_cell_bcale_month_pane

0x8a4d,	// (0x000552e1) bcale_month_pane_ParamLimits

0x8a4d,	// (0x000552e1) bcale_month_pane

0x8a71,	// (0x00055305) bcale_preview_pane_ParamLimits

0x8a71,	// (0x00055305) bcale_preview_pane

0xecf0,	// (0x0005b584) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x0005b5a3) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x0005b5a3) list_single_fs_bigclock_pane_t2

0x0001,

0x02bc,	// (0x0004cb50) list_single_fs_bigclock_pane_t_ParamLimits

0x02bc,	// (0x0004cb50) list_single_fs_bigclock_pane_t

0x9120,	// (0x000559b4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe74,	// (0x0005c708) main_fs_bigclock_unlock_btn_pane_g

0x9210,	// (0x00055aa4) aid_dia3_key_size_ParamLimits

0x9210,	// (0x00055aa4) aid_dia3_key_size

0x921f,	// (0x00055ab3) aid_dia3_listrow_size_ParamLimits

0x921f,	// (0x00055ab3) aid_dia3_listrow_size

0x9234,	// (0x00055ac8) dia3_keypad_fun_pane_ParamLimits

0x9234,	// (0x00055ac8) dia3_keypad_fun_pane

0x9250,	// (0x00055ae4) dia3_keypad_num_pane_ParamLimits

0x9250,	// (0x00055ae4) dia3_keypad_num_pane

0x926b,	// (0x00055aff) dia3_listscroll_pane_ParamLimits

0x926b,	// (0x00055aff) dia3_listscroll_pane

0x927e,	// (0x00055b12) dia3_numentry_pane_ParamLimits

0x927e,	// (0x00055b12) dia3_numentry_pane

0xef19,	// (0x0005b7ad) dia3_list_pane

0xef24,	// (0x0005b7b8) scroll_pane_cp12

0x9737,	// (0x00055fcb) bg_dia3_numentry_pane

0x9292,	// (0x00055b26) dia3_numentry_pane_t1

0x92a1,	// (0x00055b35) cell_dia3_key_num_pane

0x92a9,	// (0x00055b3d) cell_dia3_key0_fun_pane_ParamLimits

0x92a9,	// (0x00055b3d) cell_dia3_key0_fun_pane

0x92bd,	// (0x00055b51) cell_dia3_key1_fun_pane_ParamLimits

0x92bd,	// (0x00055b51) cell_dia3_key1_fun_pane

0x92d5,	// (0x00055b69) dia3_listrow_pane

0xe20e,	// (0x0005aaa2) bg_dia3_numentry_pane_g1

0x9737,	// (0x00055fcb) bg_button_pane_cp21

0xef2f,	// (0x0005b7c3) cell_dia3_key_num_pane_t1

0xef3d,	// (0x0005b7d1) cell_dia3_key_num_pane_t2

0xef4c,	// (0x0005b7e0) cell_dia3_key_num_pane_t3

0xef5b,	// (0x0005b7ef) cell_dia3_key_num_pane_t4

0x0003,

0x0341,	// (0x0004cbd5) cell_dia3_key_num_pane_t

0x9737,	// (0x00055fcb) bg_button_pane_cp19

0x92e7,	// (0x00055b7b) cell_dia3_key0_fun_pane_g1

0x9737,	// (0x00055fcb) bg_button_pane_cp20

0x92ef,	// (0x00055b83) cell_dia3_key1_fun_pane_g1

0x92f7,	// (0x00055b8b) area_left_week_number_pane

0x9303,	// (0x00055b97) area_top_day_name_pane

0x9316,	// (0x00055baa) frame_month_view_pane

0xef6a,	// (0x0005b7fe) grid_month_view_pane

0x9329,	// (0x00055bbd) cell_top_day_name_pane_ParamLimits

0x9329,	// (0x00055bbd) cell_top_day_name_pane

0x9356,	// (0x00055bea) cell_area_left_week_number_pane_ParamLimits

0x9356,	// (0x00055bea) cell_area_left_week_number_pane

0x936a,	// (0x00055bfe) cell_month_view_pane_ParamLimits

0x936a,	// (0x00055bfe) cell_month_view_pane

0xef78,	// (0x0005b80c) frm_month_g1

0x9397,	// (0x00055c2b) frm_month_g2

0x93aa,	// (0x00055c3e) frm_month_g3

0x93bd,	// (0x00055c51) frm_month_g4

0x93d0,	// (0x00055c64) frm_month_g5

0x93e3,	// (0x00055c77) frm_month_g6

0x93f6,	// (0x00055c8a) frm_month_g7

0xef85,	// (0x0005b819) frm_month_g8

0x9409,	// (0x00055c9d) frm_month_g9

0x9419,	// (0x00055cad) frm_month_g10

0x9429,	// (0x00055cbd) frm_month_g11

0x9439,	// (0x00055ccd) frm_month_g12

0x944b,	// (0x00055cdf) frm_month_g13

0x945d,	// (0x00055cf1) frm_month_g14

0x9471,	// (0x00055d05) frm_month_g15

0x9485,	// (0x00055d19) frm_month_g16

0x000f,

0xfe90,	// (0x0005c724) frm_month_g

0xef92,	// (0x0005b826) cell_top_day_name_pane_t1

0x9499,	// (0x00055d2d) cell_area_left_week_number_pane_g1

0x94a5,	// (0x00055d39) cell_area_left_week_number_pane_t1

0xcf46,	// (0x000597da) cell_month_view_pane_g1

0x94b8,	// (0x00055d4c) cell_month_view_pane_t1

0x9737,	// (0x00055fcb) main_fps_pane

0xe7ad,	// (0x0005b041) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x0005b041) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x0005b05d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x0005b05d) cmail_ddmenu_btn02_pane_cp2

0x8c43,	// (0x000554d7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c43,	// (0x000554d7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe0e,	// (0x0005c6a2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe0e,	// (0x0005c6a2) cmail_ddmenu_btn02_pane_g

0x8c62,	// (0x000554f6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c62,	// (0x000554f6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe13,	// (0x0005c6a7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe13,	// (0x0005c6a7) cmail_ddmenu_btn02_pane_t

0x94cb,	// (0x00055d5f) fps_text_pane_ParamLimits

0x94cb,	// (0x00055d5f) fps_text_pane

0x94e2,	// (0x00055d76) main_fps_pane_g1_ParamLimits

0x94e2,	// (0x00055d76) main_fps_pane_g1

0x94fc,	// (0x00055d90) wait_bar_pane_cp010_ParamLimits

0x94fc,	// (0x00055d90) wait_bar_pane_cp010

0x950d,	// (0x00055da1) fps_text_pane_t1_ParamLimits

0x950d,	// (0x00055da1) fps_text_pane_t1

0xd9c9,	// (0x0005a25d) cam4_image_uncrop_pane_g1

0xd9d2,	// (0x0005a266) cam4_image_uncrop_pane_g2

0x66aa,	// (0x00052f3e) cam4_image_uncrop_pane_g3

0x66b3,	// (0x00052f47) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0005c195) cam4_image_uncrop_pane_g

0x92d5,	// (0x00055b69) dia3_listrow_pane_ParamLimits

0x9737,	// (0x00055fcb) main_phob2_pane

0x8833,	// (0x000550c7) cell_tport_appsw_pane_cp02_ParamLimits

0x8833,	// (0x000550c7) cell_tport_appsw_pane_cp02

0x8847,	// (0x000550db) cell_tport_appsw_pane_cp03_ParamLimits

0x8847,	// (0x000550db) cell_tport_appsw_pane_cp03

0x9737,	// (0x00055fcb) phob2_contact_card_pane

0x9737,	// (0x00055fcb) phob2_listscroll_pane

0xefa5,	// (0x0005b839) phob2_list_pane

0xefad,	// (0x0005b841) scroll_pane_cp034

0x9525,	// (0x00055db9) phob2_cc_data_pane_ParamLimits

0x9525,	// (0x00055db9) phob2_cc_data_pane

0x9544,	// (0x00055dd8) phob2_cc_listscroll_pane_ParamLimits

0x9544,	// (0x00055dd8) phob2_cc_listscroll_pane

0x90e3,	// (0x00055977) list_double_large_graphic_phob2_pane_ParamLimits

0x90e3,	// (0x00055977) list_double_large_graphic_phob2_pane

0x9562,	// (0x00055df6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9562,	// (0x00055df6) list_double_large_graphic_phob2_pane_g1

0x11b9,	// (0x0004da4d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x11b9,	// (0x0004da4d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeb1,	// (0x0005c745) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeb1,	// (0x0005c745) list_double_large_graphic_phob2_pane_g

0x11c5,	// (0x0004da59) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x11c5,	// (0x0004da59) list_double_large_graphic_phob2_pane_t1

0x11db,	// (0x0004da6f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x11db,	// (0x0004da6f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeb6,	// (0x0005c74a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeb6,	// (0x0005c74a) list_double_large_graphic_phob2_pane_t

0x9737,	// (0x00055fcb) list_highlight_pane_cp024

0x9578,	// (0x00055e0c) phob2_cc_button_pane

0x9580,	// (0x00055e14) phob2_cc_data_pane_g1_ParamLimits

0x9580,	// (0x00055e14) phob2_cc_data_pane_g1

0x9595,	// (0x00055e29) phob2_cc_data_pane_g2_ParamLimits

0x9595,	// (0x00055e29) phob2_cc_data_pane_g2

0x0001,

0xfebb,	// (0x0005c74f) phob2_cc_data_pane_g_ParamLimits

0xfebb,	// (0x0005c74f) phob2_cc_data_pane_g

0x95a5,	// (0x00055e39) phob2_cc_data_pane_t1_ParamLimits

0x95a5,	// (0x00055e39) phob2_cc_data_pane_t1

0x95bd,	// (0x00055e51) phob2_cc_data_pane_t2_ParamLimits

0x95bd,	// (0x00055e51) phob2_cc_data_pane_t2

0x95d5,	// (0x00055e69) phob2_cc_data_pane_t3_ParamLimits

0x95d5,	// (0x00055e69) phob2_cc_data_pane_t3

0x0002,

0xfec0,	// (0x0005c754) phob2_cc_data_pane_t_ParamLimits

0xfec0,	// (0x0005c754) phob2_cc_data_pane_t

0xefb5,	// (0x0005b849) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x0005b849) phob2_cc_list_pane

0xda3d,	// (0x0005a2d1) scroll_pane_cp035_ParamLimits

0xda3d,	// (0x0005a2d1) scroll_pane_cp035

0xad5e,	// (0x000575f2) bg_button_pane_cp033

0xefc1,	// (0x0005b855) phob2_cc_button_pane_g1

0xefcd,	// (0x0005b861) phob2_cc_button_pane_t1

0xefe2,	// (0x0005b876) phob2_cc_button_pane_t2

0x0001,

0x0381,	// (0x0004cc15) phob2_cc_button_pane_t

0x95ed,	// (0x00055e81) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95ed,	// (0x00055e81) list_double_large_graphic_phob2_cc_pane

0x9600,	// (0x00055e94) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9600,	// (0x00055e94) list_double_large_graphic_phob2_cc_pane_g1

0x11f0,	// (0x0004da84) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x11f0,	// (0x0004da84) list_double_large_graphic_phob2_cc_pane_g2

0x11fc,	// (0x0004da90) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x11fc,	// (0x0004da90) list_double_large_graphic_phob2_cc_pane_g3

0x1208,	// (0x0004da9c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1208,	// (0x0004da9c) list_double_large_graphic_phob2_cc_pane_g4

0x1214,	// (0x0004daa8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1214,	// (0x0004daa8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec7,	// (0x0005c75b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec7,	// (0x0005c75b) list_double_large_graphic_phob2_cc_pane_g

0x1220,	// (0x0004dab4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1220,	// (0x0004dab4) list_double_large_graphic_phob2_cc_pane_t1

0x1249,	// (0x0004dadd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1249,	// (0x0004dadd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfed2,	// (0x0005c766) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfed2,	// (0x0005c766) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x0005b888) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x0005b888) list_highlight_pane_cp025

0xad5e,	// (0x000575f2) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x0005b855) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x0005b861) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x0005b876) phob2_cc_button_pane_t2_ParamLimits

0x0381,	// (0x0004cc15) phob2_cc_button_pane_t_ParamLimits

0x14bb,	// (0x0004dd4f) popup_wgtman_window

0xd82a,	// (0x0005a0be) scroll_pane_cp038

0x905c,	// (0x000558f0) wgtman_btn_pane_cp_01_ParamLimits

0x905c,	// (0x000558f0) wgtman_btn_pane_cp_01

0xf002,	// (0x0005b896) wgtman_content_pane

0xf00b,	// (0x0005b89f) wgtman_heading_pane

0x9737,	// (0x00055fcb) bg_heading_pane_cp02

0xf014,	// (0x0005b8a8) wgtman_heading_pane_g1

0xf01c,	// (0x0005b8b0) wgtman_heading_pane_t1

0xf02a,	// (0x0005b8be) scroll_pane_cp036

0xf032,	// (0x0005b8c6) wgtman_list_pane

0xe660,	// (0x0005aef4) wgtman_list_pane_t1_ParamLimits

0xe660,	// (0x0005aef4) wgtman_list_pane_t1

0x9e41,	// (0x000566d5) cam4_grid_pane

0x07c7,	// (0x0004d05b) bg_button_pane_cp015_ParamLimits

0x72d9,	// (0x00053b6d) bg_button_pane_cp016_ParamLimits

0x72ec,	// (0x00053b80) bg_button_pane_cp017_ParamLimits

0x080f,	// (0x0004d0a3) popup_vitu2_query_window_g3_ParamLimits

0x080f,	// (0x0004d0a3) popup_vitu2_query_window_g3

0x088a,	// (0x0004d11e) popup_vitu2_query_window_t6_ParamLimits

0x088a,	// (0x0004d11e) popup_vitu2_query_window_t6

0x08b5,	// (0x0004d149) popup_vitu2_query_window_t7_ParamLimits

0x08b5,	// (0x0004d149) popup_vitu2_query_window_t7

0xd9c9,	// (0x0005a25d) cam4_grid_pane_g1

0xd9d2,	// (0x0005a266) cam4_grid_pane_g2

0xf03a,	// (0x0005b8ce) cam4_grid_pane_g3

0xf043,	// (0x0005b8d7) cam4_grid_pane_g4

0x0003,

0xfed7,	// (0x0005c76b) cam4_grid_pane_g

0x22c9,	// (0x0004eb5d) aid_placing_vt_slider_lsc_ParamLimits

0x25c6,	// (0x0004ee5a) vidtel_button_pane_ParamLimits

0x25c6,	// (0x0004ee5a) vidtel_button_pane

0x9737,	// (0x00055fcb) bg_button_pane_cp034

0xf04e,	// (0x0005b8e2) vidtel_button_pane_g1

0xf056,	// (0x0005b8ea) vidtel_button_pane_t1

0xd92c,	// (0x0005a1c0) aid_size_vtel_slider_touch

0xda3d,	// (0x0005a2d1) scroll_pane_cp039

0x801f,	// (0x000548b3) ncim_query_button_pane_cp01_ParamLimits

0x803e,	// (0x000548d2) ncimui_query_pane_g1_ParamLimits

0xad5e,	// (0x000575f2) input_focus_pane_cp012_ParamLimits

0xe254,	// (0x0005aae8) ncim_query_entry_pane_t1_ParamLimits

0xda3d,	// (0x0005a2d1) scroll_pane_cp039_ParamLimits

0xb336,	// (0x00057bca) navi_pane_bcale_mc_g1

0xb33e,	// (0x00057bd2) navi_pane_bcale_mc_t1

0xe812,	// (0x0005b0a6) main_sp_fs_email_pane_g1

0xe81e,	// (0x0005b0b2) main_sp_fs_email_pane_g2

0x0001,

0xfcc6,	// (0x0005c55a) main_sp_fs_email_pane_g

0xea74,	// (0x0005b308) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x0005b308) list_single_cale_mrui_row_pane_g3

0x112c,	// (0x0004d9c0) list_single_recal_day_pane_g5_event_pane

0xa1ce,	// (0x00056a62) list_single_recal_day_pane_g7

0xf06c,	// (0x0005b900) list_recal_day_event_pane_cp01

0xf075,	// (0x0005b909) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0005b911) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0005b919) list_recal_vselct_pane_cp01

0xd93c,	// (0x0005a1d0) list_recal_day_event_pane_cp01_g1

0xa239,	// (0x00056acd) list_recal_day_event_pane_cp01_t1

0xa1d6,	// (0x00056a6a) list_single_recal_day_pane_t1_ParamLimits

0xa1e8,	// (0x00056a7c) list_single_recal_day_pane_t2_ParamLimits

0xfe23,	// (0x0005c6b7) list_single_recal_day_pane_t_ParamLimits

0xa776,	// (0x0005700a) bg_notes_pane_ParamLimits

0xa825,	// (0x000570b9) list_notes_pane_ParamLimits

0x17ff,	// (0x0004e093) scroll_pane_cp06_ParamLimits

0xa847,	// (0x000570db) main_notes_pane_ParamLimits

0x9737,	// (0x00055fcb) main_welc_pane

0x960c,	// (0x00055ea0) main_welc_body_pane_ParamLimits

0x960c,	// (0x00055ea0) main_welc_body_pane

0x9629,	// (0x00055ebd) main_welc_opti_pane_ParamLimits

0x9629,	// (0x00055ebd) main_welc_opti_pane

0x966e,	// (0x00055f02) main_welc_pane_t1_ParamLimits

0x966e,	// (0x00055f02) main_welc_pane_t1

0x968c,	// (0x00055f20) main_welc_body_row_pane_ParamLimits

0x968c,	// (0x00055f20) main_welc_body_row_pane

0xd9bb,	// (0x0005a24f) main_welc_opti_row_pane_ParamLimits

0xd9bb,	// (0x0005a24f) main_welc_opti_row_pane

0xf08f,	// (0x0005b923) main_welc_opti_row_pane_g1

0x96a1,	// (0x00055f35) main_welc_opti_row_pane_t1

0xf097,	// (0x0005b92b) main_welc_body_row_pane_t1

0xedc7,	// (0x0005b65b) popup_notif_wgt_heading_pane

0xede1,	// (0x0005b675) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x0005b682) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x0005b68e) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x0005b69d) list_notif_wgt_row_pane_g3_ParamLimits

0x02eb,	// (0x0004cb7f) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x0005b6aa) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x0005b6c0) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x0005b6d2) list_notif_wgt_row_pane_t3_ParamLimits

0x02f2,	// (0x0004cb86) list_notif_wgt_row_pane_t_ParamLimits

0x90f5,	// (0x00055989) listrow_wgtman_pane_g1_ParamLimits

0x9102,	// (0x00055996) listrow_wgtman_pane_g2_ParamLimits

0xfe6a,	// (0x0005c6fe) listrow_wgtman_pane_g_ParamLimits

0x1169,	// (0x0004d9fd) listrow_wgtman_pane_t1_ParamLimits

0x1181,	// (0x0004da15) listrow_wgtman_pane_t2_ParamLimits

0xfe6f,	// (0x0005c703) listrow_wgtman_pane_t_ParamLimits

0x11a7,	// (0x0004da3b) wait_bar_pane_cp09_ParamLimits

0x9737,	// (0x00055fcb) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0005b93a) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0005b942) popup_notif_wgt_heading_pane_t1

0x9737,	// (0x00055fcb) main_vids_pane

0x9737,	// (0x00055fcb) vids_listscroll_pane

0x96b0,	// (0x00055f44) scroll_pane_cp040

0x9737,	// (0x00055fcb) vids_list_pane

0x96bb,	// (0x00055f4f) vids_list_double_pane_ParamLimits

0x96bb,	// (0x00055f4f) vids_list_double_pane

0x96cc,	// (0x00055f60) vids_list_double_pane_g1

0x96d5,	// (0x00055f69) vids_list_double_pane_t1

0x96e5,	// (0x00055f79) vids_list_double_pane_t2

0x0001,

0xfee5,	// (0x0005c779) vids_list_double_pane_t

0xad5e,	// (0x000575f2) main_ncimui_pane_ParamLimits

0x7e55,	// (0x000546e9) main_ncimui_pane_g1_ParamLimits

0x7e61,	// (0x000546f5) main_ncimui_pane_g2_ParamLimits

0x7e61,	// (0x000546f5) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0005c491) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0005c491) main_ncimui_pane_g

0x9644,	// (0x00055ed8) main_welc_pane_g1_ParamLimits

0x9644,	// (0x00055ed8) main_welc_pane_g1

0x9659,	// (0x00055eed) main_welc_pane_g2_ParamLimits

0x9659,	// (0x00055eed) main_welc_pane_g2

0x0001,

0xfee0,	// (0x0005c774) main_welc_pane_g_ParamLimits

0xfee0,	// (0x0005c774) main_welc_pane_g

0xa776,	// (0x0005700a) listscroll_mce_pane_ParamLimits

0xb48b,	// (0x00057d1f) wait_bar_pane_cp10

0xc8d8,	// (0x0005916c) main_cale_day_pane_ParamLimits

0xc8d8,	// (0x0005916c) main_cale_week_pane_ParamLimits

0xa776,	// (0x0005700a) main_messa_pane_ParamLimits

0x59d2,	// (0x00052266) main_clock2_btn_pane_ParamLimits

0x59d2,	// (0x00052266) main_clock2_btn_pane

0xd0ce,	// (0x00059962) main_clock2_btn_pane_cp01_ParamLimits

0xd0ce,	// (0x00059962) main_clock2_btn_pane_cp01

0xea45,	// (0x0005b2d9) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x0005b708) main_cf0_pane_g2

0x0001,

0x02f9,	// (0x0004cb8d) main_cf0_pane_g

0x92f7,	// (0x00055b8b) area_left_week_number_pane_ParamLimits

0x9303,	// (0x00055b97) area_top_day_name_pane_ParamLimits

0x9316,	// (0x00055baa) frame_month_view_pane_ParamLimits

0xef6a,	// (0x0005b7fe) grid_month_view_pane_ParamLimits

0xef78,	// (0x0005b80c) frm_month_g1_ParamLimits

0x9397,	// (0x00055c2b) frm_month_g2_ParamLimits

0x93aa,	// (0x00055c3e) frm_month_g3_ParamLimits

0x93bd,	// (0x00055c51) frm_month_g4_ParamLimits

0x93d0,	// (0x00055c64) frm_month_g5_ParamLimits

0x93e3,	// (0x00055c77) frm_month_g6_ParamLimits

0x93f6,	// (0x00055c8a) frm_month_g7_ParamLimits

0xef85,	// (0x0005b819) frm_month_g8_ParamLimits

0x9409,	// (0x00055c9d) frm_month_g9_ParamLimits

0x9419,	// (0x00055cad) frm_month_g10_ParamLimits

0x9429,	// (0x00055cbd) frm_month_g11_ParamLimits

0x9439,	// (0x00055ccd) frm_month_g12_ParamLimits

0x944b,	// (0x00055cdf) frm_month_g13_ParamLimits

0x945d,	// (0x00055cf1) frm_month_g14_ParamLimits

0x9471,	// (0x00055d05) frm_month_g15_ParamLimits

0x9485,	// (0x00055d19) frm_month_g16_ParamLimits

0xfe90,	// (0x0005c724) frm_month_g_ParamLimits

0xef92,	// (0x0005b826) cell_top_day_name_pane_t1_ParamLimits

0x9499,	// (0x00055d2d) cell_area_left_week_number_pane_g1_ParamLimits

0x94a5,	// (0x00055d39) cell_area_left_week_number_pane_t1_ParamLimits

0xcf46,	// (0x000597da) cell_month_view_pane_g1_ParamLimits

0x94b8,	// (0x00055d4c) cell_month_view_pane_t1_ParamLimits

0xa76e,	// (0x00057002) main_clock2_btn_pane_g1

0xf0bc,	// (0x0005b950) main_clock2_btn_pane_t1

0xad5e,	// (0x000575f2) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x0005b0a6) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x0005b0b2) main_sp_fs_email_pane_g2_ParamLimits

0xfcc6,	// (0x0005c55a) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x0005b3e7) list_recal_day_pane_ParamLimits

0xeb64,	// (0x0005b3f8) mian_recal_day_pane_t1

0x0d39,	// (0x0004d5cd) list_single_dyc_row_text_pane_t4_ParamLimits

0x0d39,	// (0x0004d5cd) list_single_dyc_row_text_pane_t4

0x0d82,	// (0x0004d616) list_single_dyc_row_text_pane_t5_ParamLimits

0x0d82,	// (0x0004d616) list_single_dyc_row_text_pane_t5

0x871e,	// (0x00054fb2) list_single_dyc_row_text_pane_t6_ParamLimits

0x871e,	// (0x00054fb2) list_single_dyc_row_text_pane_t6

0x304a,	// (0x0004f8de) aid_mgn_list_cale_time_pane

0xad5e,	// (0x000575f2) main_gallery2_pane_ParamLimits

0xd0e4,	// (0x00059978) main_clock2_pane_cp01_t1

0xd0f2,	// (0x00059986) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0005c06b) main_clock2_pane_cp01_t

0x1b78,	// (0x0004e40c) cale_week_scroll_pane_g16_ParamLimits

0x1b78,	// (0x0004e40c) cale_week_scroll_pane_g16

0xaa1e,	// (0x000572b2) vorec_slider_pane

0xf056,	// (0x0005b8ea) vidtel_button_pane_t1_ParamLimits

0x8cd0,	// (0x00055564) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8cd0,	// (0x00055564) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8ce1,	// (0x00055575) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8ce1,	// (0x00055575) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe2d,	// (0x0005c6c1) main_fs_bigclock_clock_pane_g_ParamLimits

0x8cf4,	// (0x00055588) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d0a,	// (0x0005559e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe36,	// (0x0005c6ca) main_fs_bigclock_clock_pane_t_ParamLimits

0x51cd,	// (0x00051a61) main_mup3_lyrics_pane_ParamLimits

0x51cd,	// (0x00051a61) main_mup3_lyrics_pane

0x971b,	// (0x00055faf) main_mup3_lyrics_pane_t1_ParamLimits

0x971b,	// (0x00055faf) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
