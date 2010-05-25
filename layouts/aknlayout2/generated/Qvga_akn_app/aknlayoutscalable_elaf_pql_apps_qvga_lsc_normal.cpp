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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0000d57b };

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
0x0d65,	// (0x0000e2e0) Screen

0x0d6f,	// (0x0000e2ea) application_window

0x0da5,	// (0x0000e320) area_bottom_pane_ParamLimits

0x0da5,	// (0x0000e320) area_bottom_pane

0x0dd6,	// (0x0000e351) area_top_pane_ParamLimits

0x0dd6,	// (0x0000e351) area_top_pane

0x95d7,	// (0x00016b52) call_video_uplink_pane_ParamLimits

0x95d7,	// (0x00016b52) call_video_uplink_pane

0x0e50,	// (0x0000e3cb) main_pane_ParamLimits

0x0e50,	// (0x0000e3cb) main_pane

0xbf40,	// (0x000194bb) context_pane

0x3fdb,	// (0x00011556) navi_pane

0x4003,	// (0x0001157e) popup_cale_events_window_ParamLimits

0x4003,	// (0x0001157e) popup_cale_events_window

0xbf53,	// (0x000194ce) popup_mup_playback_window

0x401a,	// (0x00011595) signal_pane

0x9d94,	// (0x0001730f) main_browser_pane

0x9fc9,	// (0x00017544) main_burst_pane

0x3d71,	// (0x000112ec) main_calc_pane

0xbede,	// (0x00019459) main_cale_day_pane

0x13da,	// (0x0000e955) main_cale_month_pane

0xbede,	// (0x00019459) main_cale_week_pane

0x9fc9,	// (0x00017544) main_call_pane

0x9a46,	// (0x00016fc1) main_call_poc_pane

0x9fc9,	// (0x00017544) main_camera_pane

0x9fc9,	// (0x00017544) main_chi_dic_pane

0xa844,	// (0x00017dbf) main_clock_pane

0x9a46,	// (0x00016fc1) main_fmradio_pane

0x9fc9,	// (0x00017544) main_graph_messa_pane

0x9a46,	// (0x00016fc1) main_help_pane

0x9d94,	// (0x0001730f) main_im_pane

0x9ca1,	// (0x0001721c) main_image_pane_ParamLimits

0x9ca1,	// (0x0001721c) main_image_pane

0x9a46,	// (0x00016fc1) main_location2_pane

0x9fc9,	// (0x00017544) main_location_pane

0x9ca1,	// (0x0001721c) main_messa_pane

0x9a46,	// (0x00016fc1) main_mp2_pane

0x9fc9,	// (0x00017544) main_mp_pane

0x9a46,	// (0x00016fc1) main_msg_pane

0x9a46,	// (0x00016fc1) main_mup_eq_pane

0x9a46,	// (0x00016fc1) main_mup_pane

0x9d94,	// (0x0001730f) main_notes_pane

0x9a46,	// (0x00016fc1) main_pec_pane

0x9a46,	// (0x00016fc1) main_phob_pane

0x9a46,	// (0x00016fc1) main_pinb_pane

0x9a46,	// (0x00016fc1) main_postcard_pane

0x9a46,	// (0x00016fc1) main_qdial_pane

0x9fc9,	// (0x00017544) main_skin_pane

0x9a46,	// (0x00016fc1) main_smil2_pane

0x9fc9,	// (0x00017544) main_smil_pane

0x9fc9,	// (0x00017544) main_video_pane

0x9fc9,	// (0x00017544) main_video_tele_pane

0x9ca1,	// (0x0001721c) main_viewer_pane_ParamLimits

0x9ca1,	// (0x0001721c) main_viewer_pane

0x9fc9,	// (0x00017544) main_vorec_pane

0x3dc3,	// (0x0001133e) popup_blid_sat_info_window_ParamLimits

0x3dc3,	// (0x0001133e) popup_blid_sat_info_window

0x3e21,	// (0x0001139c) popup_dyc_status_message_window_ParamLimits

0x3e21,	// (0x0001139c) popup_dyc_status_message_window

0x3e37,	// (0x000113b2) popup_grid_large_graphic_window_ParamLimits

0x3e37,	// (0x000113b2) popup_grid_large_graphic_window

0x3ed1,	// (0x0001144c) popup_loc_request_window_ParamLimits

0x3ed1,	// (0x0001144c) popup_loc_request_window

0x3fb5,	// (0x00011530) popup_wml_address_window_ParamLimits

0x3fb5,	// (0x00011530) popup_wml_address_window

0x3c05,	// (0x00011180) call_muted_g1

0x392b,	// (0x00010ea6) popup_call_audio_conf_window_ParamLimits

0x392b,	// (0x00010ea6) popup_call_audio_conf_window

0x3c15,	// (0x00011190) popup_call_audio_first_window_ParamLimits

0x3c15,	// (0x00011190) popup_call_audio_first_window

0x3c73,	// (0x000111ee) popup_call_audio_in_window_ParamLimits

0x3c73,	// (0x000111ee) popup_call_audio_in_window

0x3c9f,	// (0x0001121a) popup_call_audio_out_window_ParamLimits

0x3c9f,	// (0x0001121a) popup_call_audio_out_window

0x3ccd,	// (0x00011248) popup_call_audio_second_window_ParamLimits

0x3ccd,	// (0x00011248) popup_call_audio_second_window

0x3d13,	// (0x0001128e) popup_call_audio_wait_window_ParamLimits

0x3d13,	// (0x0001128e) popup_call_audio_wait_window

0x3d46,	// (0x000112c1) popup_number_entry_window_ParamLimits

0x3d46,	// (0x000112c1) popup_number_entry_window

0x9601,	// (0x00016b7c) bg_popup_call_pane_cp05_ParamLimits

0x9601,	// (0x00016b7c) bg_popup_call_pane_cp05

0x9621,	// (0x00016b9c) popup_number_entry_window_t1

0x9634,	// (0x00016baf) popup_number_entry_window_t2

0x9646,	// (0x00016bc1) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001c645) popup_number_entry_window_t

0x968c,	// (0x00016c07) text_title_cp2

0x969f,	// (0x00016c1a) bg_popup_call_pane_cp_ParamLimits

0x969f,	// (0x00016c1a) bg_popup_call_pane_cp

0x96ad,	// (0x00016c28) call_thumbnail_pane

0x96b5,	// (0x00016c30) popup_call_audio_in_window_g1_ParamLimits

0x96b5,	// (0x00016c30) popup_call_audio_in_window_g1

0x96c1,	// (0x00016c3c) popup_call_audio_in_window_g2_ParamLimits

0x96c1,	// (0x00016c3c) popup_call_audio_in_window_g2

0x96cd,	// (0x00016c48) popup_call_audio_in_window_g3_ParamLimits

0x96cd,	// (0x00016c48) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001c64e) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001c64e) popup_call_audio_in_window_g

0x96d9,	// (0x00016c54) popup_call_audio_in_window_t1_ParamLimits

0x96d9,	// (0x00016c54) popup_call_audio_in_window_t1

0x96f4,	// (0x00016c6f) popup_call_audio_in_window_t2_ParamLimits

0x96f4,	// (0x00016c6f) popup_call_audio_in_window_t2

0x970f,	// (0x00016c8a) popup_call_audio_in_window_t3_ParamLimits

0x970f,	// (0x00016c8a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001c655) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001c655) popup_call_audio_in_window_t

0x969f,	// (0x00016c1a) bg_popup_call_pane_cp01_ParamLimits

0x969f,	// (0x00016c1a) bg_popup_call_pane_cp01

0x96ad,	// (0x00016c28) call_thumbnail_pane_cp02

0x9722,	// (0x00016c9d) call_type_pane_cp022

0x972a,	// (0x00016ca5) popup_call_audio_out_window_g1_ParamLimits

0x972a,	// (0x00016ca5) popup_call_audio_out_window_g1

0x973c,	// (0x00016cb7) popup_call_audio_out_window_g2_ParamLimits

0x973c,	// (0x00016cb7) popup_call_audio_out_window_g2

0x9748,	// (0x00016cc3) popup_call_audio_out_window_g3_ParamLimits

0x9748,	// (0x00016cc3) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001c65c) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001c65c) popup_call_audio_out_window_g

0x975a,	// (0x00016cd5) popup_call_audio_out_window_t1_ParamLimits

0x975a,	// (0x00016cd5) popup_call_audio_out_window_t1

0x9772,	// (0x00016ced) popup_call_audio_out_window_t2_ParamLimits

0x9772,	// (0x00016ced) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001c663) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001c663) popup_call_audio_out_window_t

0x9787,	// (0x00016d02) bg_popup_call_pane_ParamLimits

0x9787,	// (0x00016d02) bg_popup_call_pane

0x0fc6,	// (0x0000e541) call_thumbnail_pane_cp_ParamLimits

0x0fc6,	// (0x0000e541) call_thumbnail_pane_cp

0x980b,	// (0x00016d86) call_type_pane_cp01_ParamLimits

0x980b,	// (0x00016d86) call_type_pane_cp01

0x984f,	// (0x00016dca) popup_call_audio_first_window_g1_ParamLimits

0x984f,	// (0x00016dca) popup_call_audio_first_window_g1

0x989b,	// (0x00016e16) popup_call_audio_first_window_g2_ParamLimits

0x989b,	// (0x00016e16) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001c668) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001c668) popup_call_audio_first_window_g

0x98df,	// (0x00016e5a) popup_call_audio_first_window_t1_ParamLimits

0x98df,	// (0x00016e5a) popup_call_audio_first_window_t1

0x998b,	// (0x00016f06) popup_call_audio_first_window_t4_ParamLimits

0x998b,	// (0x00016f06) popup_call_audio_first_window_t4

0x9a17,	// (0x00016f92) popup_call_audio_first_window_t5_ParamLimits

0x9a17,	// (0x00016f92) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001c66d) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001c66d) popup_call_audio_first_window_t

0x9a46,	// (0x00016fc1) bg_popup_call_pane_cp02

0x9a50,	// (0x00016fcb) call_type_pane_cp023

0x9a58,	// (0x00016fd3) popup_call_audio_wait_window_g1

0x9a60,	// (0x00016fdb) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001c674) popup_call_audio_wait_window_g

0x9a68,	// (0x00016fe3) popup_call_audio_wait_window_t3

0x9a76,	// (0x00016ff1) bg_popup_call_pane_cp03_ParamLimits

0x9a76,	// (0x00016ff1) bg_popup_call_pane_cp03

0x9ad6,	// (0x00017051) call_thumbnail_pane_cp011_ParamLimits

0x9ad6,	// (0x00017051) call_thumbnail_pane_cp011

0x9ae2,	// (0x0001705d) call_type_pane_cp034_ParamLimits

0x9ae2,	// (0x0001705d) call_type_pane_cp034

0x9b1e,	// (0x00017099) popup_call_audio_second_window_g1_ParamLimits

0x9b1e,	// (0x00017099) popup_call_audio_second_window_g1

0x9b5a,	// (0x000170d5) popup_call_audio_second_window_g2_ParamLimits

0x9b5a,	// (0x000170d5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001c679) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001c679) popup_call_audio_second_window_g

0x9b96,	// (0x00017111) popup_call_audio_second_window_t1_ParamLimits

0x9b96,	// (0x00017111) popup_call_audio_second_window_t1

0x9c17,	// (0x00017192) popup_call_audio_second_window_t2_ParamLimits

0x9c17,	// (0x00017192) popup_call_audio_second_window_t2

0x9c4d,	// (0x000171c8) popup_call_audio_second_window_t3_ParamLimits

0x9c4d,	// (0x000171c8) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001c67e) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001c67e) popup_call_audio_second_window_t

0x9a46,	// (0x00016fc1) bg_popup_call_pane_cp04

0x9c83,	// (0x000171fe) list_conf_pane

0x9c8b,	// (0x00017206) popup_call_audio_conf_window_t1

0x9c99,	// (0x00017214) call_thumbnail_pane_g1

0x9ca1,	// (0x0001721c) bg_pinb_pane_ParamLimits

0x9ca1,	// (0x0001721c) bg_pinb_pane

0x9caf,	// (0x0001722a) find_pinb_pane

0x9cb8,	// (0x00017233) listscroll_pinb_pane_ParamLimits

0x9cb8,	// (0x00017233) listscroll_pinb_pane

0x9cc7,	// (0x00017242) pinb_bg_pane_g1

0x0fea,	// (0x0000e565) pinb_bg_pane_g2

0x0ff4,	// (0x0000e56f) pinb_bg_pane_g3

0x0ffe,	// (0x0000e579) pinb_bg_pane_g4

0x1008,	// (0x0000e583) pinb_bg_pane_g5

0x1012,	// (0x0000e58d) pinb_bg_pane_g6

0x101b,	// (0x0000e596) pinb_bg_pane_g7

0x1024,	// (0x0000e59f) pinb_bg_pane_g8

0x102f,	// (0x0000e5aa) pinb_bg_pane_g9

0x1039,	// (0x0000e5b4) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001c685) pinb_bg_pane_g

0x1054,	// (0x0000e5cf) grid_pinb_pane

0x105d,	// (0x0000e5d8) list_pinb_pane

0x1066,	// (0x0000e5e1) scroll_pane_cp01_ParamLimits

0x1066,	// (0x0000e5e1) scroll_pane_cp01

0x9cd1,	// (0x0001724c) find_pinb_pane_g1_ParamLimits

0x9cd1,	// (0x0001724c) find_pinb_pane_g1

0x9ce9,	// (0x00017264) find_pinb_pane_t1

0x9cfb,	// (0x00017276) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001c69f) find_pinb_pane_t

0x9d10,	// (0x0001728b) input_focus_pane_cp01_ParamLimits

0x9d10,	// (0x0001728b) input_focus_pane_cp01

0x1078,	// (0x0000e5f3) cell_pinb_pane_ParamLimits

0x1078,	// (0x0000e5f3) cell_pinb_pane

0x1090,	// (0x0000e60b) cell_pinb_pane_g1_ParamLimits

0x1090,	// (0x0000e60b) cell_pinb_pane_g1

0x10a4,	// (0x0000e61f) cell_pinb_pane_g2_ParamLimits

0x10a4,	// (0x0000e61f) cell_pinb_pane_g2

0x9d1c,	// (0x00017297) cell_pinb_pane_g3_ParamLimits

0x9d1c,	// (0x00017297) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001c6a4) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001c6a4) cell_pinb_pane_g

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp01

0x10b0,	// (0x0000e62b) list_pinb_item_pane_ParamLimits

0x10b0,	// (0x0000e62b) list_pinb_item_pane

0x9a46,	// (0x00016fc1) list_highlight_pane_cp02

0x10c1,	// (0x0000e63c) list_pinb_item_pane_g1_ParamLimits

0x10c1,	// (0x0000e63c) list_pinb_item_pane_g1

0x9d28,	// (0x000172a3) list_pinb_item_pane_g2_ParamLimits

0x9d28,	// (0x000172a3) list_pinb_item_pane_g2

0x10ce,	// (0x0000e649) list_pinb_item_pane_g3_ParamLimits

0x10ce,	// (0x0000e649) list_pinb_item_pane_g3

0x10df,	// (0x0000e65a) list_pinb_item_pane_g4_ParamLimits

0x10df,	// (0x0000e65a) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001c6ab) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001c6ab) list_pinb_item_pane_g

0x10eb,	// (0x0000e666) list_pinb_item_pane_t1_ParamLimits

0x10eb,	// (0x0000e666) list_pinb_item_pane_t1

0x1120,	// (0x0000e69b) calc_display_pane

0x1142,	// (0x0000e6bd) calc_paper_pane

0x115f,	// (0x0000e6da) grid_calc_pane

0x9a46,	// (0x00016fc1) bg_list_pane_cp01

0x1181,	// (0x0000e6fc) clock_g1

0x1189,	// (0x0000e704) clock_g2

0x0001,

0xf139,	// (0x0001c6b4) clock_g

0x1191,	// (0x0000e70c) clock_t1_ParamLimits

0x1191,	// (0x0000e70c) clock_t1

0x11a6,	// (0x0000e721) clock_t2_ParamLimits

0x11a6,	// (0x0000e721) clock_t2

0x11b8,	// (0x0000e733) clock_t3_ParamLimits

0x11b8,	// (0x0000e733) clock_t3

0x11ca,	// (0x0000e745) clock_t4_ParamLimits

0x11ca,	// (0x0000e745) clock_t4

0x11dc,	// (0x0000e757) clock_t5_ParamLimits

0x11dc,	// (0x0000e757) clock_t5

0x11f1,	// (0x0000e76c) clock_t6_ParamLimits

0x11f1,	// (0x0000e76c) clock_t6

0x1203,	// (0x0000e77e) clock_t7_ParamLimits

0x1203,	// (0x0000e77e) clock_t7

0x1215,	// (0x0000e790) clock_t8_ParamLimits

0x1215,	// (0x0000e790) clock_t8

0x1227,	// (0x0000e7a2) clock_t9_ParamLimits

0x1227,	// (0x0000e7a2) clock_t9

0x0008,

0xf13e,	// (0x0001c6b9) clock_t_ParamLimits

0xf13e,	// (0x0001c6b9) clock_t

0x9d3c,	// (0x000172b7) popup_clock_analogue_window_cp02

0x9d3c,	// (0x000172b7) popup_clock_digital_window_cp01

0x9d44,	// (0x000172bf) listscroll_help_pane

0x9a46,	// (0x00016fc1) phob_pre_status_pane

0x9d4e,	// (0x000172c9) grid_qdial_pane

0x9ca1,	// (0x0001721c) listscroll_mce_pane

0x9ca1,	// (0x0001721c) bg_notes_pane

0x9d58,	// (0x000172d3) list_notes_pane

0x1239,	// (0x0000e7b4) scroll_pane_cp06

0x9d66,	// (0x000172e1) bg_calc_paper_pane

0x9d7a,	// (0x000172f5) list_calc_pane

0x9d94,	// (0x0001730f) bg_calc_display_pane

0x124b,	// (0x0000e7c6) calc_display_pane_t1

0x125d,	// (0x0000e7d8) calc_display_pane_t2

0x9da0,	// (0x0001731b) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001c6cc) calc_display_pane_t

0x126f,	// (0x0000e7ea) cell_calc_pane_ParamLimits

0x126f,	// (0x0000e7ea) cell_calc_pane

0x9db2,	// (0x0001732d) bg_calc_paper_pane_g1

0x9dbe,	// (0x00017339) bg_calc_paper_pane_g2

0x9dca,	// (0x00017345) bg_calc_paper_pane_g3

0x9dd6,	// (0x00017351) bg_calc_paper_pane_g4

0x9de2,	// (0x0001735d) bg_calc_paper_pane_g5

0x12a2,	// (0x0000e81d) bg_calc_paper_pane_g6

0x12b1,	// (0x0000e82c) bg_calc_paper_pane_g7

0x12c0,	// (0x0000e83b) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001c6d3) bg_calc_paper_pane_g

0x12cf,	// (0x0000e84a) calc_bg_paper_pane_g9

0x12de,	// (0x0000e859) list_calc_item_pane_ParamLimits

0x12de,	// (0x0000e859) list_calc_item_pane

0x9dee,	// (0x00017369) list_calc_item_pane_g1

0x9dfb,	// (0x00017376) list_calc_item_pane_t1_ParamLimits

0x9dfb,	// (0x00017376) list_calc_item_pane_t1

0x12f1,	// (0x0000e86c) list_calc_item_pane_t2_ParamLimits

0x12f1,	// (0x0000e86c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001c6e4) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001c6e4) list_calc_item_pane_t

0x9e0d,	// (0x00017388) cell_calc_pane_g1

0x9e17,	// (0x00017392) grid_highlight_pane_cp02

0x9e39,	// (0x000173b4) bg_calc_display_pane_g1

0x9e42,	// (0x000173bd) bg_calc_display_pane_g2

0x9e4c,	// (0x000173c7) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001c6ee) bg_calc_display_pane_g

0x131f,	// (0x0000e89a) cell_qdial_pane_ParamLimits

0x131f,	// (0x0000e89a) cell_qdial_pane

0x1331,	// (0x0000e8ac) cell_qdial_pane_g1_ParamLimits

0x1331,	// (0x0000e8ac) cell_qdial_pane_g1

0x1347,	// (0x0000e8c2) cell_qdial_pane_g2_ParamLimits

0x1347,	// (0x0000e8c2) cell_qdial_pane_g2

0x9e55,	// (0x000173d0) cell_qdial_pane_g3_ParamLimits

0x9e55,	// (0x000173d0) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001c6f5) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001c6f5) cell_qdial_pane_g

0x136e,	// (0x0000e8e9) cell_qdial_pane_t1_ParamLimits

0x136e,	// (0x0000e8e9) cell_qdial_pane_t1

0x1386,	// (0x0000e901) cell_qdial_pane_t2_ParamLimits

0x1386,	// (0x0000e901) cell_qdial_pane_t2

0x1399,	// (0x0000e914) cell_qdial_pane_t3_ParamLimits

0x1399,	// (0x0000e914) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001c6fe) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001c6fe) cell_qdial_pane_t

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp04

0x9e61,	// (0x000173dc) thumbnail_qdial_pane_ParamLimits

0x9e61,	// (0x000173dc) thumbnail_qdial_pane

0x9ebd,	// (0x00017438) list_help_pane

0x9ec6,	// (0x00017441) scroll_pane_cp02

0x13ac,	// (0x0000e927) help_list_pane_t1_ParamLimits

0x13ac,	// (0x0000e927) help_list_pane_t1

0x9ecf,	// (0x0001744a) bg_notes_pane_g2

0x9ed7,	// (0x00017452) bg_notes_pane_g3

0x9edf,	// (0x0001745a) notes_bg_pane_g1

0x9ee7,	// (0x00017462) notes_bg_pane_g4

0x9eef,	// (0x0001746a) notes_bg_pane_g5

0x9ef7,	// (0x00017472) notes_bg_pane_g6

0x9eff,	// (0x0001747a) notes_bg_pane_g7

0x9f07,	// (0x00017482) notes_bg_pane_g8

0x9f0f,	// (0x0001748a) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001c71c) notes_bg_pane_g

0x13c7,	// (0x0000e942) list_notes_text_pane_ParamLimits

0x13c7,	// (0x0000e942) list_notes_text_pane

0x9f17,	// (0x00017492) list_notes_text_pane_g1

0x9f20,	// (0x0001749b) list_notes_text_pane_t1

0x13da,	// (0x0000e955) listscroll_cale_week_pane

0x1404,	// (0x0000e97f) bg_cale_heading_pane

0x141c,	// (0x0000e997) bg_cale_pane_cp01

0x1439,	// (0x0000e9b4) cale_week_corner_pane

0x1458,	// (0x0000e9d3) cale_week_day_heading_pane

0x1475,	// (0x0000e9f0) cale_week_scroll_pane_g1

0x1488,	// (0x0000ea03) cale_week_scroll_pane_g2

0x14a0,	// (0x0000ea1b) cale_week_scroll_pane_g3

0x14b8,	// (0x0000ea33) cale_week_scroll_pane_g4

0x14d0,	// (0x0000ea4b) cale_week_scroll_pane_g5

0x14e8,	// (0x0000ea63) cale_week_scroll_pane_g6

0x1500,	// (0x0000ea7b) cale_week_scroll_pane_g7

0x1518,	// (0x0000ea93) cale_week_scroll_pane_g8

0x1534,	// (0x0000eaaf) cale_week_scroll_pane_g9

0x154c,	// (0x0000eac7) cale_week_scroll_pane_g10

0x1564,	// (0x0000eadf) cale_week_scroll_pane_g11

0x157c,	// (0x0000eaf7) cale_week_scroll_pane_g12

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g13

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g14

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001c72b) cale_week_scroll_pane_g

0x15c8,	// (0x0000eb43) cale_week_time_pane

0x15e4,	// (0x0000eb5f) grid_cale_week_pane

0x9f5a,	// (0x000174d5) scroll_pane_cp08

0x15fe,	// (0x0000eb79) cell_cale_week_pane_ParamLimits

0x15fe,	// (0x0000eb79) cell_cale_week_pane

0x1674,	// (0x0000ebef) cale_week_day_heading_pane_t1

0x1699,	// (0x0000ec14) cale_week_day_heading_pane_t2

0x16c3,	// (0x0000ec3e) cale_week_day_heading_pane_t3

0x16ed,	// (0x0000ec68) cale_week_day_heading_pane_t4

0x1717,	// (0x0000ec92) cale_week_day_heading_pane_t5

0x1741,	// (0x0000ecbc) cale_week_day_heading_pane_t6

0x176b,	// (0x0000ece6) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001c74c) cale_week_day_heading_pane_t

0x9f77,	// (0x000174f2) bg_cale_side_pane

0x1790,	// (0x0000ed0b) cale_week_time_pane_t1

0x17ca,	// (0x0000ed45) cale_week_time_pane_t2

0x1804,	// (0x0000ed7f) cale_week_time_pane_t3

0x183e,	// (0x0000edb9) cale_week_time_pane_t4

0x1878,	// (0x0000edf3) cale_week_time_pane_t5

0x18b2,	// (0x0000ee2d) cale_week_time_pane_t6

0x18ec,	// (0x0000ee67) cale_week_time_pane_t7

0x1926,	// (0x0000eea1) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001c75b) cale_week_time_pane_t

0x1960,	// (0x0000eedb) cell_cale_week_pane_g2

0x197f,	// (0x0000eefa) cell_cale_week_pane_g3_ParamLimits

0x197f,	// (0x0000eefa) cell_cale_week_pane_g3

0x9f85,	// (0x00017500) grid_highlight_pane_cp07

0x9f8d,	// (0x00017508) listscroll_gms_pane

0x9f97,	// (0x00017512) grid_gms_pane

0x9fa0,	// (0x0001751b) listscroll_gms_pane_g1

0x9fa8,	// (0x00017523) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001c76c) listscroll_gms_pane_g

0x1997,	// (0x0000ef12) scroll_pane_cp010

0x19a2,	// (0x0000ef1d) cell_gms_pane_ParamLimits

0x19a2,	// (0x0000ef1d) cell_gms_pane

0x19b3,	// (0x0000ef2e) cell_gms_pane_g1

0x9fb0,	// (0x0001752b) cell_gms_pane_g2

0x9f17,	// (0x00017492) cell_gms_pane_g3

0x9fb8,	// (0x00017533) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001c771) cell_gms_pane_g

0x9fc1,	// (0x0001753c) grid_highlight_pane_cp09

0x3bb3,	// (0x0001112e) phob_pre_status_pane_g1

0x3bbb,	// (0x00011136) phob_pre_status_pane_g2

0x3bc3,	// (0x0001113e) phob_pre_status_pane_g3

0x3bcb,	// (0x00011146) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0001cb6f) phob_pre_status_pane_g

0x3bdb,	// (0x00011156) phob_pre_status_pane_t1

0x3be9,	// (0x00011164) phob_pre_status_pane_t2

0x3bf7,	// (0x00011172) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0001cb7a) phob_pre_status_pane_t

0x9fc9,	// (0x00017544) bg_list_pane_cp05

0x19c3,	// (0x0000ef3e) grid_vorec_pane

0x19cb,	// (0x0000ef46) vorec_t1

0x19d9,	// (0x0000ef54) vorec_t2

0x19e7,	// (0x0000ef62) vorec_t3

0x19f5,	// (0x0000ef70) vorec_t4

0x9565,	// (0x00016ae0) vorec_t5

0x9573,	// (0x00016aee) vorec_t6

0x0004,

0xf1ff,	// (0x0001c77a) vorec_t

0x9581,	// (0x00016afc) wait_bar_pane_cp01

0x1a11,	// (0x0000ef8c) cell_vorec_pane_ParamLimits

0x1a11,	// (0x0000ef8c) cell_vorec_pane

0x9fd1,	// (0x0001754c) cell_vorec_pane_g1

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp05

0x1a36,	// (0x0000efb1) cams_zoom_pane

0x1a45,	// (0x0000efc0) image_vga_pane

0x1a5b,	// (0x0000efd6) main_camera_pane_g1

0x1a6b,	// (0x0000efe6) main_camera_pane_g2

0x1a7b,	// (0x0000eff6) main_camera_pane_g3

0x1a8b,	// (0x0000f006) main_camera_pane_g4

0x1a9b,	// (0x0000f016) main_camera_pane_g5

0x1aab,	// (0x0000f026) main_camera_pane_g6

0x1abb,	// (0x0000f036) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001c785) main_camera_pane_g

0x1acb,	// (0x0000f046) main_camera_pane_t1

0x1ae1,	// (0x0000f05c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001c796) main_camera_pane_t

0x1b13,	// (0x0000f08e) cams_zoom_pane_cp_ParamLimits

0x1b13,	// (0x0000f08e) cams_zoom_pane_cp

0x1b3b,	// (0x0000f0b6) image_cif_pane_ParamLimits

0x1b3b,	// (0x0000f0b6) image_cif_pane

0x1b6a,	// (0x0000f0e5) image_subqcif_pane

0x1b72,	// (0x0000f0ed) main_video_pane_g1_ParamLimits

0x1b72,	// (0x0000f0ed) main_video_pane_g1

0x1b96,	// (0x0000f111) main_video_pane_g2_ParamLimits

0x1b96,	// (0x0000f111) main_video_pane_g2

0x1bca,	// (0x0000f145) main_video_pane_g3_ParamLimits

0x1bca,	// (0x0000f145) main_video_pane_g3

0x1bf8,	// (0x0000f173) main_video_pane_g4_ParamLimits

0x1bf8,	// (0x0000f173) main_video_pane_g4

0x1c26,	// (0x0000f1a1) main_video_pane_g5_ParamLimits

0x1c26,	// (0x0000f1a1) main_video_pane_g5

0x9fe7,	// (0x00017562) main_video_pane_g6_ParamLimits

0x9fe7,	// (0x00017562) main_video_pane_g6

0x0006,

0xf220,	// (0x0001c79b) main_video_pane_g_ParamLimits

0xf220,	// (0x0001c79b) main_video_pane_g

0x1c4d,	// (0x0000f1c8) main_video_pane_t1_ParamLimits

0x1c4d,	// (0x0000f1c8) main_video_pane_t1

0xa001,	// (0x0001757c) cams_zoom_pane_g1

0xa00a,	// (0x00017585) cams_zoom_pane_g2

0xa013,	// (0x0001758e) cams_zoom_pane_g3

0xa01c,	// (0x00017597) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001c7aa) cams_zoom_pane_g

0x1caa,	// (0x0000f225) grid_cams_pane

0x1cbf,	// (0x0000f23a) linegrid_cams_pane

0x1cd0,	// (0x0000f24b) cell_cams_pane_ParamLimits

0x1cd0,	// (0x0000f24b) cell_cams_pane

0xa025,	// (0x000175a0) cams_burst_image_pane

0xa02d,	// (0x000175a8) cell_cams_pane_g1

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp03

0x9e0d,	// (0x00017388) mp_bg_pane_g1

0x9a46,	// (0x00016fc1) bg_list_pane_cp03

0xbe03,	// (0x0001937e) bg_mp_pane

0xbe0b,	// (0x00019386) grid_mp_pane

0xbe13,	// (0x0001938e) media_player_g1

0xbe1b,	// (0x00019396) media_player_t1

0xbe29,	// (0x000193a4) media_player_t2

0xbe37,	// (0x000193b2) media_player_t3

0xbe45,	// (0x000193c0) media_player_t4

0xbe53,	// (0x000193ce) media_player_t5

0xbe61,	// (0x000193dc) media_player_t6

0xbe6f,	// (0x000193ea) media_player_t7

0x0006,

0xf5de,	// (0x0001cb59) media_player_t

0xbe7d,	// (0x000193f8) wait_bar_pane_cp02

0xf5c3,	// (0x0001cb3e) main_usb_pane_t

0x3baa,	// (0x00011125) cell_mp_pane

0x9e0d,	// (0x00017388) cell_mp_pane_g1

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp06

0xa035,	// (0x000175b0) grid_skin_colour_pane

0xa03d,	// (0x000175b8) list_highlight_pane_cp03

0x1e02,	// (0x0000f37d) skin_g1

0xa045,	// (0x000175c0) skin_t1

0xa054,	// (0x000175cf) skin_t2

0x0001,

0xf264,	// (0x0001c7df) skin_t

0x1e0a,	// (0x0000f385) cell_skin_colour_pane_ParamLimits

0x1e0a,	// (0x0000f385) cell_skin_colour_pane

0xa062,	// (0x000175dd) cell_skin_colour_pane_g1

0x1e73,	// (0x0000f3ee) call_video_g1_ParamLimits

0x1e73,	// (0x0000f3ee) call_video_g1

0x1e89,	// (0x0000f404) call_video_g2_ParamLimits

0x1e89,	// (0x0000f404) call_video_g2

0x0001,

0xf269,	// (0x0001c7e4) call_video_g_ParamLimits

0xf269,	// (0x0001c7e4) call_video_g

0x1ece,	// (0x0000f449) call_video_uplink_pane_cp1_ParamLimits

0x1ece,	// (0x0000f449) call_video_uplink_pane_cp1

0xa074,	// (0x000175ef) call_video_uplink_pane_cp2

0x1f63,	// (0x0000f4de) video_down_crop_pane_ParamLimits

0x1f63,	// (0x0000f4de) video_down_crop_pane

0x2026,	// (0x0000f5a1) video_down_pane_ParamLimits

0x2026,	// (0x0000f5a1) video_down_pane

0xa07c,	// (0x000175f7) video_down_subqcif_pane_ParamLimits

0xa07c,	// (0x000175f7) video_down_subqcif_pane

0xa094,	// (0x0001760f) video_down_subqcif_pane_cp_ParamLimits

0xa094,	// (0x0001760f) video_down_subqcif_pane_cp

0xa0b8,	// (0x00017633) im_reading_pane_ParamLimits

0xa0b8,	// (0x00017633) im_reading_pane

0x20e3,	// (0x0000f65e) im_writing_pane_ParamLimits

0x20e3,	// (0x0000f65e) im_writing_pane

0x20f9,	// (0x0000f674) im_reading_pane_t1

0xa0d2,	// (0x0001764d) list_im_pane

0xa0e3,	// (0x0001765e) scroll_pane_cp07

0x212f,	// (0x0000f6aa) im_writing_pane_t1_ParamLimits

0x212f,	// (0x0000f6aa) im_writing_pane_t1

0xa0fc,	// (0x00017677) im_writing_pane_t2_ParamLimits

0xa0fc,	// (0x00017677) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001c7ee) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001c7ee) im_writing_pane_t

0x9a46,	// (0x00016fc1) input_focus_pane_cp04

0x9a46,	// (0x00016fc1) input_focus_pane_cp05

0x2144,	// (0x0000f6bf) list_im_single_pane_ParamLimits

0x2144,	// (0x0000f6bf) list_im_single_pane

0xa119,	// (0x00017694) list_single_im_pane_t1

0x3b70,	// (0x000110eb) blid_accuracy_pane

0x3b78,	// (0x000110f3) blid_compass_pane

0x3b80,	// (0x000110fb) main_location_t1

0x3b8e,	// (0x00011109) main_location_t2

0x3b9c,	// (0x00011117) main_location_t3

0x0002,

0xf5ed,	// (0x0001cb68) main_location_t

0x9a46,	// (0x00016fc1) aid_levels_location

0x9e0d,	// (0x00017388) blid_accuracy_pane_g1

0x9e0d,	// (0x00017388) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001c850) blid_accuracy_pane_g

0xa153,	// (0x000176ce) wml_content_pane

0xa191,	// (0x0001770c) wml_button_pane_ParamLimits

0xa191,	// (0x0001770c) wml_button_pane

0x1a11,	// (0x0000ef8c) wml_list_single_large_pane_ParamLimits

0x1a11,	// (0x0000ef8c) wml_list_single_large_pane

0x2157,	// (0x0000f6d2) wml_list_single_medium_pane_ParamLimits

0x2157,	// (0x0000f6d2) wml_list_single_medium_pane

0x216b,	// (0x0000f6e6) wml_list_single_small_pane_ParamLimits

0x216b,	// (0x0000f6e6) wml_list_single_small_pane

0xa1a5,	// (0x00017720) wml_selection_box_pane_ParamLimits

0xa1a5,	// (0x00017720) wml_selection_box_pane

0xa1b8,	// (0x00017733) wml_list_single_pane_t1

0xa1c7,	// (0x00017742) wml_list_single_medium_pane_t1

0xa1d6,	// (0x00017751) wml_list_single_large_pane_t1

0xa1e5,	// (0x00017760) input_focus_pane_cp02_ParamLimits

0xa1e5,	// (0x00017760) input_focus_pane_cp02

0xa1f8,	// (0x00017773) wml_selection_box_pane_g1

0xa201,	// (0x0001777c) wml_selection_box_pane_t1_ParamLimits

0xa201,	// (0x0001777c) wml_selection_box_pane_t1

0x9ca1,	// (0x0001721c) bg_wml_button_pane_ParamLimits

0x9ca1,	// (0x0001721c) bg_wml_button_pane

0xa219,	// (0x00017794) wml_button_pane_g1

0xa221,	// (0x0001779c) wml_button_pane_t1

0xa219,	// (0x00017794) wml_button_bg_pane_g1

0xa231,	// (0x000177ac) wml_button_bg_pane_g2

0xa239,	// (0x000177b4) wml_button_bg_pane_g3

0xa241,	// (0x000177bc) wml_button_bg_pane_g4

0xa249,	// (0x000177c4) wml_button_bg_pane_g5

0xa251,	// (0x000177cc) wml_button_bg_pane_g6

0xa259,	// (0x000177d4) wml_button_bg_pane_g7

0xa261,	// (0x000177dc) wml_button_bg_pane_g8

0xa269,	// (0x000177e4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001c7f3) wml_button_bg_pane_g

0x2181,	// (0x0000f6fc) bg_list_pane_cp02

0xa271,	// (0x000177ec) mce_header_pane_ParamLimits

0xa271,	// (0x000177ec) mce_header_pane

0xa287,	// (0x00017802) mce_icon_pane

0xa287,	// (0x00017802) mce_image_pane

0xa290,	// (0x0001780b) mce_text_pane_ParamLimits

0xa290,	// (0x0001780b) mce_text_pane

0x2189,	// (0x0000f704) scroll_pane_cp03

0xa189,	// (0x00017704) scroll_pane_cp04

0xa2a3,	// (0x0001781e) scroll_pane_cp05_ParamLimits

0xa2a3,	// (0x0001781e) scroll_pane_cp05

0x2193,	// (0x0000f70e) mce_header_field_pane_ParamLimits

0x2193,	// (0x0000f70e) mce_header_field_pane

0x21aa,	// (0x0000f725) mce_header_field_pane_2_ParamLimits

0x21aa,	// (0x0000f725) mce_header_field_pane_2

0x21c0,	// (0x0000f73b) mce_header_field_pane_3

0x21c8,	// (0x0000f743) list_single_mce_message_pane_ParamLimits

0x21c8,	// (0x0000f743) list_single_mce_message_pane

0x21db,	// (0x0000f756) list_single_mce_smart_pane_ParamLimits

0x21db,	// (0x0000f756) list_single_mce_smart_pane

0xa2af,	// (0x0001782a) input_focus_pane_cp03

0xa2b8,	// (0x00017833) list_header_data_pane

0x21f9,	// (0x0000f774) mce_header_field_pane_t1

0x2207,	// (0x0000f782) list_single_mce_header_pane_ParamLimits

0x2207,	// (0x0000f782) list_single_mce_header_pane

0xa2c0,	// (0x0001783b) list_single_mce_header_pane_t1

0xa2cf,	// (0x0001784a) list_single_mce_message_pane_g1

0xa2d7,	// (0x00017852) list_single_mce_message_pane_t1

0x2241,	// (0x0000f7bc) bg_cale_heading_pane_cp01_ParamLimits

0x2241,	// (0x0000f7bc) bg_cale_heading_pane_cp01

0xa2e5,	// (0x00017860) bg_cale_pane_cp02_ParamLimits

0xa2e5,	// (0x00017860) bg_cale_pane_cp02

0x227b,	// (0x0000f7f6) cale_month_corner_pane

0x229a,	// (0x0000f815) cale_month_day_heading_pane_ParamLimits

0x229a,	// (0x0000f815) cale_month_day_heading_pane

0x22e0,	// (0x0000f85b) cale_month_pane_g1_ParamLimits

0x22e0,	// (0x0000f85b) cale_month_pane_g1

0x230f,	// (0x0000f88a) cale_month_pane_g2_ParamLimits

0x230f,	// (0x0000f88a) cale_month_pane_g2

0x2337,	// (0x0000f8b2) cale_month_pane_g3_ParamLimits

0x2337,	// (0x0000f8b2) cale_month_pane_g3

0x2373,	// (0x0000f8ee) cale_month_pane_g4_ParamLimits

0x2373,	// (0x0000f8ee) cale_month_pane_g4

0x23af,	// (0x0000f92a) cale_month_pane_g5_ParamLimits

0x23af,	// (0x0000f92a) cale_month_pane_g5

0x23eb,	// (0x0000f966) cale_month_pane_g6_ParamLimits

0x23eb,	// (0x0000f966) cale_month_pane_g6

0x2427,	// (0x0000f9a2) cale_month_pane_g7_ParamLimits

0x2427,	// (0x0000f9a2) cale_month_pane_g7

0x2463,	// (0x0000f9de) cale_month_pane_g8_ParamLimits

0x2463,	// (0x0000f9de) cale_month_pane_g8

0x24a7,	// (0x0000fa22) cale_month_pane_g9_ParamLimits

0x24a7,	// (0x0000fa22) cale_month_pane_g9

0x24ed,	// (0x0000fa68) cale_month_pane_g10_ParamLimits

0x24ed,	// (0x0000fa68) cale_month_pane_g10

0x2533,	// (0x0000faae) cale_month_pane_g11_ParamLimits

0x2533,	// (0x0000faae) cale_month_pane_g11

0x2579,	// (0x0000faf4) cale_month_pane_g12_ParamLimits

0x2579,	// (0x0000faf4) cale_month_pane_g12

0x25bf,	// (0x0000fb3a) cale_month_pane_g13_ParamLimits

0x25bf,	// (0x0000fb3a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001c806) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001c806) cale_month_pane_g

0x2605,	// (0x0000fb80) cale_month_week_pane

0x2621,	// (0x0000fb9c) grid_cale_month_pane_ParamLimits

0x2621,	// (0x0000fb9c) grid_cale_month_pane

0x265e,	// (0x0000fbd9) cale_month_day_heading_pane_t1

0x26e4,	// (0x0000fc5f) cale_month_day_heading_pane_t2

0x275d,	// (0x0000fcd8) cale_month_day_heading_pane_t3

0x27d6,	// (0x0000fd51) cale_month_day_heading_pane_t4

0x284f,	// (0x0000fdca) cale_month_day_heading_pane_t5

0x28c8,	// (0x0000fe43) cale_month_day_heading_pane_t6

0x2941,	// (0x0000febc) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001c821) cale_month_day_heading_pane_t

0x9f77,	// (0x000174f2) bg_cale_side_pane_cp01

0x29be,	// (0x0000ff39) cale_month_week_pane_t1

0x29d7,	// (0x0000ff52) cale_month_week_pane_t2

0x29f0,	// (0x0000ff6b) cale_month_week_pane_t3

0x2a09,	// (0x0000ff84) cale_month_week_pane_t4

0x2a22,	// (0x0000ff9d) cale_month_week_pane_t5

0x2a3b,	// (0x0000ffb6) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001c830) cale_month_week_pane_t

0x2a54,	// (0x0000ffcf) cell_cale_month_pane_ParamLimits

0x2a54,	// (0x0000ffcf) cell_cale_month_pane

0xa324,	// (0x0001789f) cell_cale_month_pane_g1

0x2b70,	// (0x000100eb) cell_cale_month_pane_t1_ParamLimits

0x2b70,	// (0x000100eb) cell_cale_month_pane_t1

0x9f85,	// (0x00017500) grid_highlight_pane_cp08

0x9e0d,	// (0x00017388) main_smil_g1

0x2b9c,	// (0x00010117) smil_status_pane

0xa330,	// (0x000178ab) smil_text_pane

0xbce3,	// (0x0001925e) bg_popup_call3_rect_pane_g8

0xbceb,	// (0x00019266) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001cae9) bg_popup_call3_rect_pane_g

0xbfba,	// (0x00019535) smil_status_volume_pane_g1

0xa33a,	// (0x000178b5) smil_status_pane_t1

0xbfed,	// (0x00019568) volume_smil_pane

0xa351,	// (0x000178cc) list_smil_text_pane

0x2bad,	// (0x00010128) scroll_pane_cp011

0x2bb8,	// (0x00010133) smil_text_list_pane_t1_ParamLimits

0x2bb8,	// (0x00010133) smil_text_list_pane_t1

0xa35b,	// (0x000178d6) aid_volume_smil_ParamLimits

0xa35b,	// (0x000178d6) aid_volume_smil

0x9e0d,	// (0x00017388) smil_volume_pane_g1

0x9e0d,	// (0x00017388) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001c850) smil_volume_pane_g

0x13da,	// (0x0000e955) listscroll_cale_day_pane

0xa37d,	// (0x000178f8) bg_cale_pane

0xa395,	// (0x00017910) list_cale_pane

0xa3b8,	// (0x00017933) scroll_pane_cp09

0xa3c9,	// (0x00017944) cale_bg_pane_g1

0xa3d1,	// (0x0001794c) cale_bg_pane_g2

0xa3d9,	// (0x00017954) cale_bg_pane_g3

0xa3e1,	// (0x0001795c) cale_bg_pane_g4

0xa3e9,	// (0x00017964) cale_bg_pane_g5

0xa3f1,	// (0x0001796c) cale_bg_pane_g6

0xa3f9,	// (0x00017974) cale_bg_pane_g7

0xa401,	// (0x0001797c) cale_bg_pane_g8

0xa409,	// (0x00017984) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001c855) cale_bg_pane_g

0x2bee,	// (0x00010169) list_cale_time_pane_ParamLimits

0x2bee,	// (0x00010169) list_cale_time_pane

0xa419,	// (0x00017994) list_cale_time_pane_g1_ParamLimits

0xa419,	// (0x00017994) list_cale_time_pane_g1

0xa425,	// (0x000179a0) list_cale_time_pane_g2_ParamLimits

0xa425,	// (0x000179a0) list_cale_time_pane_g2

0x2c01,	// (0x0001017c) list_cale_time_pane_g3_ParamLimits

0x2c01,	// (0x0001017c) list_cale_time_pane_g3

0x2c0d,	// (0x00010188) list_cale_time_pane_g4_ParamLimits

0x2c0d,	// (0x00010188) list_cale_time_pane_g4

0x2c19,	// (0x00010194) list_cale_time_pane_g5_ParamLimits

0x2c19,	// (0x00010194) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001c868) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001c868) list_cale_time_pane_g

0xa43f,	// (0x000179ba) list_cale_time_pane_t1_ParamLimits

0xa43f,	// (0x000179ba) list_cale_time_pane_t1

0xa467,	// (0x000179e2) list_cale_time_pane_t2_ParamLimits

0xa467,	// (0x000179e2) list_cale_time_pane_t2

0x2fa6,	// (0x00010521) aid_blid_cardinal_pane

0x2fe4,	// (0x0001055f) compass_pane_t4

0xa48f,	// (0x00017a0a) list_cale_time_pane_t4_ParamLimits

0xa48f,	// (0x00017a0a) list_cale_time_pane_t4

0x2ff2,	// (0x0001056d) compass_pane_t5

0x3000,	// (0x0001057b) compass_pane_t6

0x300e,	// (0x00010589) compass_pane_t7

0xa95c,	// (0x00017ed7) navi_pane_cc_t1

0xab49,	// (0x000180c4) aid_phob_thumbnail_center_pane

0x360e,	// (0x00010b89) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001c875) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001c875) list_cale_time_pane_t

0x969f,	// (0x00016c1a) bg_popup_window_pane_cp02_ParamLimits

0x969f,	// (0x00016c1a) bg_popup_window_pane_cp02

0xa4b7,	// (0x00017a32) heading_pane_cp01_ParamLimits

0xa4b7,	// (0x00017a32) heading_pane_cp01

0xa4c3,	// (0x00017a3e) loc_req_pane_ParamLimits

0xa4c3,	// (0x00017a3e) loc_req_pane

0xa4d3,	// (0x00017a4e) loc_type_pane_ParamLimits

0xa4d3,	// (0x00017a4e) loc_type_pane

0xa4e5,	// (0x00017a60) loc_type_pane_t1_ParamLimits

0xa4e5,	// (0x00017a60) loc_type_pane_t1

0xa4f7,	// (0x00017a72) loc_type_pane_t2_ParamLimits

0xa4f7,	// (0x00017a72) loc_type_pane_t2

0xa509,	// (0x00017a84) loc_type_pane_t3_ParamLimits

0xa509,	// (0x00017a84) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001c87c) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001c87c) loc_type_pane_t

0xa51b,	// (0x00017a96) list_loc_req_pane

0xa525,	// (0x00017aa0) scroll_pane_cp012

0x2c25,	// (0x000101a0) list_single_loc_request_popup_menu_pane_ParamLimits

0x2c25,	// (0x000101a0) list_single_loc_request_popup_menu_pane

0xa52e,	// (0x00017aa9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa52e,	// (0x00017aa9) list_single_loc_request_popup_menu_pane_g1

0xa53a,	// (0x00017ab5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa53a,	// (0x00017ab5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001c883) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001c883) list_single_loc_request_popup_menu_pane_g

0xa546,	// (0x00017ac1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa546,	// (0x00017ac1) list_single_loc_request_popup_menu_pane_t1

0x9ca1,	// (0x0001721c) bg_popup_window_pane_cp03_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_window_pane_cp03

0xa55c,	// (0x00017ad7) heading_loc_req_pane_ParamLimits

0xa55c,	// (0x00017ad7) heading_loc_req_pane

0x2c32,	// (0x000101ad) popup_dyc_status_message_window_g1_ParamLimits

0x2c32,	// (0x000101ad) popup_dyc_status_message_window_g1

0x2c46,	// (0x000101c1) popup_dyc_status_message_window_t1_ParamLimits

0x2c46,	// (0x000101c1) popup_dyc_status_message_window_t1

0x2c5b,	// (0x000101d6) popup_dyc_status_message_window_t2_ParamLimits

0x2c5b,	// (0x000101d6) popup_dyc_status_message_window_t2

0x2c70,	// (0x000101eb) popup_dyc_status_message_window_t3_ParamLimits

0x2c70,	// (0x000101eb) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001c888) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001c888) popup_dyc_status_message_window_t

0x9a46,	// (0x00016fc1) bg_heading_pane_cp01

0xa568,	// (0x00017ae3) heading_loc_req_pane_g1

0xa570,	// (0x00017aeb) heading_loc_req_pane_g2

0xa578,	// (0x00017af3) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001c88f) heading_loc_req_pane_g

0xa580,	// (0x00017afb) heading_loc_req_pane_t1

0xa58f,	// (0x00017b0a) bg_popup_sub_pane_cp01_ParamLimits

0xa58f,	// (0x00017b0a) bg_popup_sub_pane_cp01

0xa59d,	// (0x00017b18) popup_cale_events_window_g1_ParamLimits

0xa59d,	// (0x00017b18) popup_cale_events_window_g1

0xa5bd,	// (0x00017b38) popup_cale_events_window_g2_ParamLimits

0xa5bd,	// (0x00017b38) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001c8c3) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001c8c3) popup_cale_events_window_g

0xa5dd,	// (0x00017b58) popup_cale_events_window_t1_ParamLimits

0xa5dd,	// (0x00017b58) popup_cale_events_window_t1

0xa5ef,	// (0x00017b6a) popup_cale_events_window_t2_ParamLimits

0xa5ef,	// (0x00017b6a) popup_cale_events_window_t2

0xa62d,	// (0x00017ba8) popup_cale_events_window_t3_ParamLimits

0xa62d,	// (0x00017ba8) popup_cale_events_window_t3

0xa667,	// (0x00017be2) popup_cale_events_window_t4_ParamLimits

0xa667,	// (0x00017be2) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001c8c8) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001c8c8) popup_cale_events_window_t

0x2d73,	// (0x000102ee) call_type_pane

0x2d83,	// (0x000102fe) popup_call_status_window_g1

0x2d97,	// (0x00010312) popup_call_status_window_g2

0x2dab,	// (0x00010326) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001c8d1) popup_call_status_window_g

0xa69d,	// (0x00017c18) call_type_pane_g1

0xa6a6,	// (0x00017c21) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001c8d8) call_type_pane_g

0x9a46,	// (0x00016fc1) bg_popup_sub_pane_cp02

0xa6af,	// (0x00017c2a) listscroll_popup_wml_pane

0xa6b7,	// (0x00017c32) list_wml_pane

0xa6c1,	// (0x00017c3c) scroll_pane_cp013

0x2dba,	// (0x00010335) list_single_graphic_popup_wml_pane_ParamLimits

0x2dba,	// (0x00010335) list_single_graphic_popup_wml_pane

0x9e0d,	// (0x00017388) list_single_graphic_popup_wml_pane_g1

0xa6ca,	// (0x00017c45) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001c8dd) list_single_graphic_popup_wml_pane_g

0xa6d2,	// (0x00017c4d) list_single_graphic_popup_wml_pane_t1

0xa6e8,	// (0x00017c63) aid_call_pane

0x9c99,	// (0x00017214) popup_clock_analogue_window_g1

0x9c99,	// (0x00017214) popup_clock_analogue_window_g2

0xa6f0,	// (0x00017c6b) popup_clock_analogue_window_g3

0xa6f0,	// (0x00017c6b) popup_clock_analogue_window_g4

0x9e0d,	// (0x00017388) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001c8e2) popup_clock_analogue_window_g

0xa6f8,	// (0x00017c73) popup_clock_analogue_window_t1

0xa706,	// (0x00017c81) clock_digital_number_pane_ParamLimits

0xa706,	// (0x00017c81) clock_digital_number_pane

0xa712,	// (0x00017c8d) clock_digital_number_pane_cp02_ParamLimits

0xa712,	// (0x00017c8d) clock_digital_number_pane_cp02

0xa71e,	// (0x00017c99) clock_digital_number_pane_cp03_ParamLimits

0xa71e,	// (0x00017c99) clock_digital_number_pane_cp03

0xa72a,	// (0x00017ca5) clock_digital_number_pane_cp04_ParamLimits

0xa72a,	// (0x00017ca5) clock_digital_number_pane_cp04

0xa736,	// (0x00017cb1) clock_digital_separator_pane_ParamLimits

0xa736,	// (0x00017cb1) clock_digital_separator_pane

0xa742,	// (0x00017cbd) popup_clock_digital_window_t1

0x9e0d,	// (0x00017388) clock_digital_number_pane_g1

0x9e0d,	// (0x00017388) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001c850) clock_digital_number_pane_g

0x9e0d,	// (0x00017388) clock_digital_separator_pane_g1

0x9e0d,	// (0x00017388) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001c850) clock_digital_separator_pane_g

0x9a46,	// (0x00016fc1) bg_popup_window_pane_cp04

0xa75f,	// (0x00017cda) heading_pane_cp03

0xa767,	// (0x00017ce2) listscroll_popup_gms_pane

0xa76f,	// (0x00017cea) grid_large_graphic_popup_pane

0xa779,	// (0x00017cf4) listscroll_popup_gms_pane_g1

0xa781,	// (0x00017cfc) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001c8ed) listscroll_popup_gms_pane_g

0xa189,	// (0x00017704) scroll_pane_cp014

0x2dcc,	// (0x00010347) cell_large_graphic_popup_pane_ParamLimits

0x2dcc,	// (0x00010347) cell_large_graphic_popup_pane

0x2de2,	// (0x0001035d) cell_large_graphic_popup_pane_g1_ParamLimits

0x2de2,	// (0x0001035d) cell_large_graphic_popup_pane_g1

0xa789,	// (0x00017d04) cell_large_graphic_popup_pane_g2_ParamLimits

0xa789,	// (0x00017d04) cell_large_graphic_popup_pane_g2

0xa795,	// (0x00017d10) cell_large_graphic_popup_pane_g3_ParamLimits

0xa795,	// (0x00017d10) cell_large_graphic_popup_pane_g3

0xa7a2,	// (0x00017d1d) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7a2,	// (0x00017d1d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001c8f2) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001c8f2) cell_large_graphic_popup_pane_g

0xa7b2,	// (0x00017d2d) grid_highlight_pane_cp010

0x9e0d,	// (0x00017388) bg_popup_call_pane_g1

0xa7bc,	// (0x00017d37) list_single_graphic_popup_conf_pane_ParamLimits

0xa7bc,	// (0x00017d37) list_single_graphic_popup_conf_pane

0xa7cf,	// (0x00017d4a) list_highlight_pane_cp01

0xa7d8,	// (0x00017d53) list_single_graphic_popup_conf_pane_g1

0xa7e0,	// (0x00017d5b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001c8fb) list_single_graphic_popup_conf_pane_g

0xa7e8,	// (0x00017d63) list_single_graphic_popup_conf_pane_t1

0xa7f6,	// (0x00017d71) linegrid_cams_pane_g1

0x2dee,	// (0x00010369) linegrid_cams_pane_g2

0x9f17,	// (0x00017492) linegrid_cams_pane_g3

0xa7ff,	// (0x00017d7a) linegrid_cams_pane_g4

0x2df7,	// (0x00010372) linegrid_cams_pane_g5

0x2e00,	// (0x0001037b) linegrid_cams_pane_g6

0x9fb8,	// (0x00017533) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001c900) linegrid_cams_pane_g

0xa808,	// (0x00017d83) popup_clock_analogue_window

0xa808,	// (0x00017d83) popup_clock_digital_window

0x9a46,	// (0x00016fc1) popup_phob_thumbnail_window

0x9e0d,	// (0x00017388) call_video_uplink_pane_g1

0xa811,	// (0x00017d8c) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001c90f) call_video_uplink_pane_g

0x9f85,	// (0x00017500) video_uplink_pane

0xa819,	// (0x00017d94) mce_image_pane_g1

0x2e09,	// (0x00010384) mce_image_pane_g2

0x2e11,	// (0x0001038c) mce_image_pane_g3

0x2e19,	// (0x00010394) mce_image_pane_g4

0x2e21,	// (0x0001039c) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001c914) mce_image_pane_g

0xa823,	// (0x00017d9e) control_top_pane_stacon_cp01_ParamLimits

0xa823,	// (0x00017d9e) control_top_pane_stacon_cp01

0xa833,	// (0x00017dae) uni_indicator_pane_stacon_cp01_ParamLimits

0xa833,	// (0x00017dae) uni_indicator_pane_stacon_cp01

0xa844,	// (0x00017dbf) bg_popup_sub_pane_cp03

0x2e29,	// (0x000103a4) chi_dic_find_pane

0x2e31,	// (0x000103ac) listscroll_chi_dic_pane

0x2e3a,	// (0x000103b5) main_pane_chidic_g1

0x2e4d,	// (0x000103c8) chi_dic_find_pane_t1

0xa84e,	// (0x00017dc9) find_chidic_pane

0xa857,	// (0x00017dd2) chi_dic_list_pane_ParamLimits

0xa857,	// (0x00017dd2) chi_dic_list_pane

0xa868,	// (0x00017de3) scroll_pane_cp020

0x2e5b,	// (0x000103d6) find_chidic_pane_t1

0x9a46,	// (0x00016fc1) input_focus_pane_cp06

0x2e6a,	// (0x000103e5) list_chi_dic_pane_ParamLimits

0x2e6a,	// (0x000103e5) list_chi_dic_pane

0x2e7b,	// (0x000103f6) list_chi_dic_pane_t1_ParamLimits

0x2e7b,	// (0x000103f6) list_chi_dic_pane_t1

0x9a46,	// (0x00016fc1) list_highlight_pane_cp020

0xa870,	// (0x00017deb) bg_cale_heading_pane_g1

0x2e8e,	// (0x00010409) bg_cale_heading_pane_g2

0x2e96,	// (0x00010411) bg_cale_heading_pane_g3

0x2e9e,	// (0x00010419) bg_cale_heading_pane_g4

0x2ea6,	// (0x00010421) bg_cale_heading_pane_g5

0x2eae,	// (0x00010429) bg_cale_heading_pane_g6

0x2eb6,	// (0x00010431) bg_cale_heading_pane_g7

0x2ebe,	// (0x00010439) bg_cale_heading_pane_g8

0x2ec6,	// (0x00010441) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001c91f) bg_cale_heading_pane_g

0xa870,	// (0x00017deb) bg_cale_side_pane_g1

0x2ece,	// (0x00010449) bg_cale_side_pane_g2

0x2ed6,	// (0x00010451) bg_cale_side_pane_g3

0x2ede,	// (0x00010459) bg_cale_side_pane_g4

0x2ee6,	// (0x00010461) bg_cale_side_pane_g5

0x2eee,	// (0x00010469) bg_cale_side_pane_g6

0x2ef6,	// (0x00010471) bg_cale_side_pane_g7

0x2efe,	// (0x00010479) bg_cale_side_pane_g8

0x2f06,	// (0x00010481) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001c932) bg_cale_side_pane_g

0x2f0e,	// (0x00010489) popup_call_status_window_ParamLimits

0x2f0e,	// (0x00010489) popup_call_status_window

0xa878,	// (0x00017df3) stacon_top_pane

0xa880,	// (0x00017dfb) status_pane_ParamLimits

0xa880,	// (0x00017dfb) status_pane

0xa895,	// (0x00017e10) status_small_pane

0xa89d,	// (0x00017e18) control_pane

0x9a46,	// (0x00016fc1) stacon_bottom_pane

0xa8a5,	// (0x00017e20) list_single_mce_smart_pane_t1_ParamLimits

0xa8a5,	// (0x00017e20) list_single_mce_smart_pane_t1

0xa8b8,	// (0x00017e33) list_single_mce_smart_pane_t2_ParamLimits

0xa8b8,	// (0x00017e33) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001c945) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001c945) list_single_mce_smart_pane_t

0x2f55,	// (0x000104d0) compass_pane

0x2f5e,	// (0x000104d9) main_location2_pane_t1

0x2f70,	// (0x000104eb) main_location2_pane_t2

0x2f82,	// (0x000104fd) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001c94a) main_location2_pane_t

0xa8d7,	// (0x00017e52) compass_pane_g1_ParamLimits

0xa8d7,	// (0x00017e52) compass_pane_g1

0x2fc6,	// (0x00010541) compass_pane_t1

0x2fd5,	// (0x00010550) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001c953) compass_pane_t

0x301c,	// (0x00010597) text_secondary_cp61

0xa953,	// (0x00017ece) navi_pane_cams_g5

0xa9cd,	// (0x00017f48) navi_pane_im_t1

0xa9db,	// (0x00017f56) navi_pane_mp_g1_ParamLimits

0xa9db,	// (0x00017f56) navi_pane_mp_g1

0xa9ef,	// (0x00017f6a) navi_pane_mp_g2_ParamLimits

0xa9ef,	// (0x00017f6a) navi_pane_mp_g2

0xa9fb,	// (0x00017f76) navi_pane_mp_g3_ParamLimits

0xa9fb,	// (0x00017f76) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001c967) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001c967) navi_pane_mp_g

0xaa07,	// (0x00017f82) navi_pane_mp_t1

0xaa15,	// (0x00017f90) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001c96e) navi_pane_mp_t

0xaa80,	// (0x00017ffb) navi_pane_vt_g1

0xaa07,	// (0x00017f82) navi_pane_vt_t1

0xaa88,	// (0x00018003) navi_slider_pane

0x9fc9,	// (0x00017544) zooming_pane

0xaa98,	// (0x00018013) navi_slider_pane_g1

0xaaa1,	// (0x0001801c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001c975) navi_slider_pane_g

0xaace,	// (0x00018049) aid_levels_zoom

0xaad6,	// (0x00018051) zooming_pane_g1

0xaade,	// (0x00018059) zooming_pane_g2

0xaade,	// (0x00018059) zooming_pane_g3

0x0002,

0xf409,	// (0x0001c984) zooming_pane_g

0xaae6,	// (0x00018061) level_10_zoom

0xaaef,	// (0x0001806a) level_11_zoom

0xaaf8,	// (0x00018073) level_1_zoom

0xab01,	// (0x0001807c) level_2_zoom

0xab0a,	// (0x00018085) level_3_zoom

0xab13,	// (0x0001808e) level_4_zoom

0xab1c,	// (0x00018097) level_5_zoom

0xab25,	// (0x000180a0) level_6_zoom

0xab2e,	// (0x000180a9) level_7_zoom

0xab37,	// (0x000180b2) level_8_zoom

0xab40,	// (0x000180bb) level_9_zoom

0xab51,	// (0x000180cc) popup_phob_thumbnail_window_g1

0xab59,	// (0x000180d4) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001c98b) popup_phob_thumbnail_window_g

0xbe85,	// (0x00019400) level_1_location

0xbe8d,	// (0x00019408) level_2_location

0xbe95,	// (0x00019410) level_3_location

0xbe9d,	// (0x00019418) level_4_location

0x9fc9,	// (0x00017544) level_5_location

0x306d,	// (0x000105e8) mce_icon_pane_g1

0x3075,	// (0x000105f0) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001c990) mce_icon_pane_g

0x307d,	// (0x000105f8) main_mup_pane_g1_ParamLimits

0x307d,	// (0x000105f8) main_mup_pane_g1

0x3093,	// (0x0001060e) main_mup_pane_g2_ParamLimits

0x3093,	// (0x0001060e) main_mup_pane_g2

0x30ab,	// (0x00010626) main_mup_pane_g3_ParamLimits

0x30ab,	// (0x00010626) main_mup_pane_g3

0x30c3,	// (0x0001063e) main_mup_pane_g4_ParamLimits

0x30c3,	// (0x0001063e) main_mup_pane_g4

0x30db,	// (0x00010656) main_mup_pane_g5_ParamLimits

0x30db,	// (0x00010656) main_mup_pane_g5

0x30f5,	// (0x00010670) main_mup_pane_g6_ParamLimits

0x30f5,	// (0x00010670) main_mup_pane_g6

0x310d,	// (0x00010688) main_mup_pane_g7_ParamLimits

0x310d,	// (0x00010688) main_mup_pane_g7

0x3125,	// (0x000106a0) main_mup_pane_g8_ParamLimits

0x3125,	// (0x000106a0) main_mup_pane_g8

0x313d,	// (0x000106b8) main_mup_pane_g9_ParamLimits

0x313d,	// (0x000106b8) main_mup_pane_g9

0x3151,	// (0x000106cc) main_mup_pane_g10_ParamLimits

0x3151,	// (0x000106cc) main_mup_pane_g10

0x3165,	// (0x000106e0) main_mup_pane_g11_ParamLimits

0x3165,	// (0x000106e0) main_mup_pane_g11

0x3177,	// (0x000106f2) main_mup_pane_g12_ParamLimits

0x3177,	// (0x000106f2) main_mup_pane_g12

0x318b,	// (0x00010706) main_mup_pane_g13_ParamLimits

0x318b,	// (0x00010706) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001c995) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001c995) main_mup_pane_g

0x319d,	// (0x00010718) main_mup_pane_t1_ParamLimits

0x319d,	// (0x00010718) main_mup_pane_t1

0x31b7,	// (0x00010732) main_mup_pane_t2_ParamLimits

0x31b7,	// (0x00010732) main_mup_pane_t2

0x31cf,	// (0x0001074a) main_mup_pane_t3_ParamLimits

0x31cf,	// (0x0001074a) main_mup_pane_t3

0x31e7,	// (0x00010762) main_mup_pane_t4_ParamLimits

0x31e7,	// (0x00010762) main_mup_pane_t4

0x3205,	// (0x00010780) main_mup_pane_t5_ParamLimits

0x3205,	// (0x00010780) main_mup_pane_t5

0x321a,	// (0x00010795) main_mup_pane_t6_ParamLimits

0x321a,	// (0x00010795) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001c9b0) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001c9b0) main_mup_pane_t

0x322c,	// (0x000107a7) mup_progress_pane_ParamLimits

0x322c,	// (0x000107a7) mup_progress_pane

0x3238,	// (0x000107b3) mup_visualizer_pane_ParamLimits

0x3238,	// (0x000107b3) mup_visualizer_pane

0x3260,	// (0x000107db) mup_volume_pane_ParamLimits

0x3260,	// (0x000107db) mup_volume_pane

0xab61,	// (0x000180dc) mup_visualizer_pane_g1_ParamLimits

0xab61,	// (0x000180dc) mup_visualizer_pane_g1

0xab61,	// (0x000180dc) mup_visualizer_pane_g2_ParamLimits

0xab61,	// (0x000180dc) mup_visualizer_pane_g2

0xa8d7,	// (0x00017e52) mup_visualizer_pane_g3_ParamLimits

0xa8d7,	// (0x00017e52) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001c9bd) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001c9bd) mup_visualizer_pane_g

0x9e0d,	// (0x00017388) mup_volume_pane_g1

0xab77,	// (0x000180f2) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001c9c4) mup_volume_pane_g

0x9e0d,	// (0x00017388) mup_progress_pane_g1

0xab80,	// (0x000180fb) mup_progress_pane_g2

0xab89,	// (0x00018104) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001c9c9) mup_progress_pane_g

0x9a46,	// (0x00016fc1) bg_popup_window_pane_cp05

0x327e,	// (0x000107f9) heading_pane_cp02_ParamLimits

0x327e,	// (0x000107f9) heading_pane_cp02

0xab92,	// (0x0001810d) list_popup_blid_pane

0xab9a,	// (0x00018115) list_blid_sat_info_pane_ParamLimits

0xab9a,	// (0x00018115) list_blid_sat_info_pane

0xabac,	// (0x00018127) list_blid_sat_info_pane_g1

0xabb4,	// (0x0001812f) list_blid_sat_info_pane_t1

0x336a,	// (0x000108e5) mup_equalizer_pane_ParamLimits

0x336a,	// (0x000108e5) mup_equalizer_pane

0x3383,	// (0x000108fe) mup_equalizer_pane_cp1_ParamLimits

0x3383,	// (0x000108fe) mup_equalizer_pane_cp1

0x339c,	// (0x00010917) mup_equalizer_pane_cp2_ParamLimits

0x339c,	// (0x00010917) mup_equalizer_pane_cp2

0x33b5,	// (0x00010930) mup_equalizer_pane_cp3_ParamLimits

0x33b5,	// (0x00010930) mup_equalizer_pane_cp3

0x33ce,	// (0x00010949) mup_equalizer_pane_cp4_ParamLimits

0x33ce,	// (0x00010949) mup_equalizer_pane_cp4

0x33e7,	// (0x00010962) mup_equalizer_pane_cp5

0x33f9,	// (0x00010974) mup_equalizer_pane_cp6

0x340b,	// (0x00010986) mup_equalizer_pane_cp7

0xbd63,	// (0x000192de) bg_popup_call_poc_act_pane_g9

0xbd6b,	// (0x000192e6) bg_popup_call_poc_act_pane_g10

0xbd73,	// (0x000192ee) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ca1,	// (0x0001721c) mup_scale_pane

0x9e0d,	// (0x00017388) mup_scale_pane_g1

0xabc2,	// (0x0001813d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001c9e5) mup_scale_pane_g

0xabe6,	// (0x00018161) msg_data_pane

0xabee,	// (0x00018169) scroll_pane_cp017

0x3431,	// (0x000109ac) bg_list_pane_cp04_ParamLimits

0x3431,	// (0x000109ac) bg_list_pane_cp04

0xabf6,	// (0x00018171) msg_data_pane_g1

0x3451,	// (0x000109cc) msg_data_pane_g2

0x3459,	// (0x000109d4) msg_data_pane_g3

0x3461,	// (0x000109dc) msg_data_pane_g4

0x3469,	// (0x000109e4) msg_data_pane_g5

0x3471,	// (0x000109ec) msg_data_pane_g6

0x3479,	// (0x000109f4) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001c9f4) msg_data_pane_g

0x3481,	// (0x000109fc) msg_text_pane_ParamLimits

0x3481,	// (0x000109fc) msg_text_pane

0x34a7,	// (0x00010a22) qrid_highlight_pane_cp011_ParamLimits

0x34a7,	// (0x00010a22) qrid_highlight_pane_cp011

0x9a46,	// (0x00016fc1) msg_body_pane

0x9a46,	// (0x00016fc1) msg_header_pane

0xac07,	// (0x00018182) input_focus_pane_cp07

0x34c9,	// (0x00010a44) msg_header_pane_t1_ParamLimits

0x34c9,	// (0x00010a44) msg_header_pane_t1

0x34db,	// (0x00010a56) msg_header_pane_t2_ParamLimits

0x34db,	// (0x00010a56) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001ca08) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001ca08) msg_header_pane_t

0xac1c,	// (0x00018197) msg_body_pane_g1

0x34ed,	// (0x00010a68) msg_body_pane_t1_ParamLimits

0x34ed,	// (0x00010a68) msg_body_pane_t1

0x351e,	// (0x00010a99) msg_body_pane_t2_ParamLimits

0x351e,	// (0x00010a99) msg_body_pane_t2

0x3530,	// (0x00010aab) msg_body_pane_t3_ParamLimits

0x3530,	// (0x00010aab) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001ca0d) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001ca0d) msg_body_pane_t

0x3578,	// (0x00010af3) main_viewer_pane_g1_ParamLimits

0x3578,	// (0x00010af3) main_viewer_pane_g1

0x3584,	// (0x00010aff) main_viewer_pane_g2_ParamLimits

0x3584,	// (0x00010aff) main_viewer_pane_g2

0x3590,	// (0x00010b0b) main_viewer_pane_g3_ParamLimits

0x3590,	// (0x00010b0b) main_viewer_pane_g3

0x359f,	// (0x00010b1a) main_viewer_pane_g4_ParamLimits

0x359f,	// (0x00010b1a) main_viewer_pane_g4

0xac3c,	// (0x000181b7) main_viewer_pane_g5_ParamLimits

0xac3c,	// (0x000181b7) main_viewer_pane_g5

0xac3c,	// (0x000181b7) main_viewer_pane_g7_ParamLimits

0xac3c,	// (0x000181b7) main_viewer_pane_g7

0xac4e,	// (0x000181c9) main_viewer_pane_g8_ParamLimits

0xac4e,	// (0x000181c9) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001ca1d) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001ca1d) main_viewer_pane_g

0xac66,	// (0x000181e1) viewer_content_pane_ParamLimits

0xac66,	// (0x000181e1) viewer_content_pane

0x35d3,	// (0x00010b4e) main_postcard_pane_g1_ParamLimits

0x35d3,	// (0x00010b4e) main_postcard_pane_g1

0x35e7,	// (0x00010b62) main_postcard_pane_g2_ParamLimits

0x35e7,	// (0x00010b62) main_postcard_pane_g2

0x35fb,	// (0x00010b76) main_postcard_pane_g3_ParamLimits

0x35fb,	// (0x00010b76) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001ca2e) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001ca2e) main_postcard_pane_g

0x360e,	// (0x00010b89) main_postcard_pane_g4

0xbfcd,	// (0x00019548) smil_status_volume_pane_g2

0x3649,	// (0x00010bc4) postcard_pane_ParamLimits

0x3649,	// (0x00010bc4) postcard_pane

0xac74,	// (0x000181ef) postcard_pane_g1_ParamLimits

0xac74,	// (0x000181ef) postcard_pane_g1

0x3685,	// (0x00010c00) postcard_pane_g2_ParamLimits

0x3685,	// (0x00010c00) postcard_pane_g2

0x3691,	// (0x00010c0c) postcard_pane_g3_ParamLimits

0x3691,	// (0x00010c0c) postcard_pane_g3

0xac82,	// (0x000181fd) postcard_pane_g4_ParamLimits

0xac82,	// (0x000181fd) postcard_pane_g4

0x369d,	// (0x00010c18) postcard_pane_g5_ParamLimits

0x369d,	// (0x00010c18) postcard_pane_g5

0x36b1,	// (0x00010c2c) postcard_pane_g6_ParamLimits

0x36b1,	// (0x00010c2c) postcard_pane_g6

0xac74,	// (0x000181ef) postcard_pane_g7_ParamLimits

0xac74,	// (0x000181ef) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001ca3b) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001ca3b) postcard_pane_g

0x36c3,	// (0x00010c3e) main_mp2_pane_g1_ParamLimits

0x36c3,	// (0x00010c3e) main_mp2_pane_g1

0x36cf,	// (0x00010c4a) main_mp2_pane_g2_ParamLimits

0x36cf,	// (0x00010c4a) main_mp2_pane_g2

0x36db,	// (0x00010c56) main_mp2_pane_g3_ParamLimits

0x36db,	// (0x00010c56) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001ca4a) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001ca4a) main_mp2_pane_g

0x36e7,	// (0x00010c62) main_mp2_pane_t1_ParamLimits

0x36e7,	// (0x00010c62) main_mp2_pane_t1

0x36fc,	// (0x00010c77) main_mp2_pane_t2_ParamLimits

0x36fc,	// (0x00010c77) main_mp2_pane_t2

0x370e,	// (0x00010c89) main_mp2_pane_t3_ParamLimits

0x370e,	// (0x00010c89) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001ca51) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001ca51) main_mp2_pane_t

0xac90,	// (0x0001820b) pec_content_pane_ParamLimits

0xac90,	// (0x0001820b) pec_content_pane

0xa189,	// (0x00017704) scroll_pane_cp015

0xaca2,	// (0x0001821d) pec_attribute_pane_ParamLimits

0xaca2,	// (0x0001821d) pec_attribute_pane

0x3720,	// (0x00010c9b) pec_content_pane_g1_ParamLimits

0x3720,	// (0x00010c9b) pec_content_pane_g1

0xacb2,	// (0x0001822d) pec_content_pane_t1_ParamLimits

0xacb2,	// (0x0001822d) pec_content_pane_t1

0xacc4,	// (0x0001823f) pec_content_pane_t2_ParamLimits

0xacc4,	// (0x0001823f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001ca58) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001ca58) pec_content_pane_t

0x372c,	// (0x00010ca7) list_single_graphic_pane_cp01_ParamLimits

0x372c,	// (0x00010ca7) list_single_graphic_pane_cp01

0x9ca1,	// (0x0001721c) bg_popup_sub_pane_cp04

0xacd6,	// (0x00018251) popup_mup_playback_window_g1

0xace2,	// (0x0001825d) popup_mup_playback_window_t1

0xacf7,	// (0x00018272) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001ca5d) popup_mup_playback_window_t

0xad2e,	// (0x000182a9) main_image_pane_g1_ParamLimits

0xad2e,	// (0x000182a9) main_image_pane_g1

0xad71,	// (0x000182ec) scroll_pane_cp018_ParamLimits

0xad71,	// (0x000182ec) scroll_pane_cp018

0xad89,	// (0x00018304) scroll_pane_cp016_ParamLimits

0xad89,	// (0x00018304) scroll_pane_cp016

0x37f6,	// (0x00010d71) smil2_image_pane_ParamLimits

0x37f6,	// (0x00010d71) smil2_image_pane

0x381e,	// (0x00010d99) smil2_root_pane_ParamLimits

0x381e,	// (0x00010d99) smil2_root_pane

0x3856,	// (0x00010dd1) smil2_text_pane_ParamLimits

0x3856,	// (0x00010dd1) smil2_text_pane

0x9a46,	// (0x00016fc1) bg_list_pane_cp06

0x38c4,	// (0x00010e3f) grid_radio_pane

0x9a46,	// (0x00016fc1) bg_popup_window_pane_cp06

0xadbd,	// (0x00018338) main_fmradio_pane_t1

0xa75f,	// (0x00017cda) heading_pane_cp04

0xadcb,	// (0x00018346) main_fmradio_pane_t2

0xbdbb,	// (0x00019336) popup_cale_lunar_info_window_g1

0xadd9,	// (0x00018354) main_fmradio_pane_t3

0xbdc3,	// (0x0001933e) popup_cale_lunar_info_window_g2

0xade7,	// (0x00018362) main_fmradio_pane_t4

0x0001,

0xadf5,	// (0x00018370) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0001cb4b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001ca72) main_fmradio_pane_t

0xae03,	// (0x0001837e) wait_bar_pane_cp03

0x38cc,	// (0x00010e47) cell_fmradio_pane_ParamLimits

0x38cc,	// (0x00010e47) cell_fmradio_pane

0xac74,	// (0x000181ef) cell_fmradio_pane_g1_ParamLimits

0xac74,	// (0x000181ef) cell_fmradio_pane_g1

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp011

0xae0b,	// (0x00018386) poc_content_pane_ParamLimits

0xae0b,	// (0x00018386) poc_content_pane

0xae1d,	// (0x00018398) scroll_pane_cp019

0x38df,	// (0x00010e5a) popup_call_poc_act_window_ParamLimits

0x38df,	// (0x00010e5a) popup_call_poc_act_window

0x38ff,	// (0x00010e7a) popup_call_poc_inact_window_ParamLimits

0x38ff,	// (0x00010e7a) popup_call_poc_inact_window

0xf594,	// (0x0001cb0f) bg_popup_call_poc_act_pane_g

0xbd7b,	// (0x000192f6) bg_popup_call_poc_inact_pane_g1

0xbd83,	// (0x000192fe) bg_popup_call_poc_inact_pane_g2

0xae25,	// (0x000183a0) popup_call_poc_act_window_g2

0xbd8b,	// (0x00019306) bg_popup_call_poc_inact_pane_g3

0xbd0b,	// (0x00019286) bg_popup_call_poc_inact_pane_g4

0xbd93,	// (0x0001930e) bg_popup_call_poc_inact_pane_g5

0xae2d,	// (0x000183a8) popup_call_poc_act_window_t1_ParamLimits

0xae2d,	// (0x000183a8) popup_call_poc_act_window_t1

0xae55,	// (0x000183d0) popup_call_poc_act_window_t2_ParamLimits

0xae55,	// (0x000183d0) popup_call_poc_act_window_t2

0xae7d,	// (0x000183f8) popup_call_poc_act_window_t3_ParamLimits

0xae7d,	// (0x000183f8) popup_call_poc_act_window_t3

0xaea5,	// (0x00018420) popup_call_poc_act_window_t4_ParamLimits

0xaea5,	// (0x00018420) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001ca7d) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001ca7d) popup_call_poc_act_window_t

0xbd9b,	// (0x00019316) bg_popup_call_poc_inact_pane_g6

0xbda3,	// (0x0001931e) bg_popup_call_poc_inact_pane_g7

0xbdab,	// (0x00019326) bg_popup_call_poc_inact_pane_g8

0xaeb7,	// (0x00018432) popup_call_poc_inact_window_g2

0xbdb3,	// (0x0001932e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0001cb26) bg_popup_call_poc_inact_pane_g

0xaebf,	// (0x0001843a) popup_call_poc_inact_window_t1_ParamLimits

0xaebf,	// (0x0001843a) popup_call_poc_inact_window_t1

0xaed4,	// (0x0001844f) popup_call_poc_inact_window_t2_ParamLimits

0xaed4,	// (0x0001844f) popup_call_poc_inact_window_t2

0xaee9,	// (0x00018464) popup_call_poc_inact_window_t3_ParamLimits

0xaee9,	// (0x00018464) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001ca86) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001ca86) popup_call_poc_inact_window_t

0xbf40,	// (0x000194bb) context_pane_ParamLimits

0x401a,	// (0x00011595) signal_pane_ParamLimits

0x9fc9,	// (0x00017544) main_call2_pane

0xbf19,	// (0x00019494) popup_phob_thumbnail2_window_ParamLimits

0xbf19,	// (0x00019494) popup_phob_thumbnail2_window

0xac24,	// (0x0001819f) aid_hotspot_pointer_arrow_pane

0xac2c,	// (0x000181a7) aid_hotspot_pointer_hand_pane

0x3bd3,	// (0x0001114e) phob_pre_status_pane_g5

0x1a36,	// (0x0000efb1) cams_zoom_pane_ParamLimits

0x1a45,	// (0x0000efc0) image_vga_pane_ParamLimits

0x1a5b,	// (0x0000efd6) main_camera_pane_g1_ParamLimits

0x1a6b,	// (0x0000efe6) main_camera_pane_g2_ParamLimits

0x1a7b,	// (0x0000eff6) main_camera_pane_g3_ParamLimits

0x1a8b,	// (0x0000f006) main_camera_pane_g4_ParamLimits

0x1a9b,	// (0x0000f016) main_camera_pane_g5_ParamLimits

0x1aab,	// (0x0000f026) main_camera_pane_g6_ParamLimits

0x1abb,	// (0x0000f036) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001c785) main_camera_pane_g_ParamLimits

0x1acb,	// (0x0000f046) main_camera_pane_t1_ParamLimits

0x1ae1,	// (0x0000f05c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001c796) main_camera_pane_t_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_preview_window_pane_cp01

0xaefe,	// (0x00018479) popup_phob_thumbnail2_window_g1_ParamLimits

0xaefe,	// (0x00018479) popup_phob_thumbnail2_window_g1

0x9a46,	// (0x00016fc1) call2_cli_visual_pane

0x392b,	// (0x00010ea6) popup_call2_audio_conf_window_ParamLimits

0x392b,	// (0x00010ea6) popup_call2_audio_conf_window

0x3949,	// (0x00010ec4) popup_call2_audio_first_window_ParamLimits

0x3949,	// (0x00010ec4) popup_call2_audio_first_window

0x39bf,	// (0x00010f3a) popup_call2_audio_in_window_ParamLimits

0x39bf,	// (0x00010f3a) popup_call2_audio_in_window

0x39f3,	// (0x00010f6e) popup_call2_audio_out_window_ParamLimits

0x39f3,	// (0x00010f6e) popup_call2_audio_out_window

0x3a45,	// (0x00010fc0) popup_call2_audio_second_window_ParamLimits

0x3a45,	// (0x00010fc0) popup_call2_audio_second_window

0x3a97,	// (0x00011012) popup_call2_audio_wait_window_ParamLimits

0x3a97,	// (0x00011012) popup_call2_audio_wait_window

0x9a46,	// (0x00016fc1) bg_popup_call2_act_pane_cp03

0x9c83,	// (0x000171fe) list_conf_pane_cp

0xaf0a,	// (0x00018485) popup_call2_audio_conf_window_t1

0xa7bc,	// (0x00017d37) list_single_graphic_popup_conf2_pane_ParamLimits

0xa7bc,	// (0x00017d37) list_single_graphic_popup_conf2_pane

0xa7cf,	// (0x00017d4a) list_highlight_pane_cp04

0xaf18,	// (0x00018493) list_single_graphic_popup_conf2_pane_g1

0xa7e0,	// (0x00017d5b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001ca8d) list_single_graphic_popup_conf2_pane_g

0xaf20,	// (0x0001849b) list_single_graphic_popup_conf2_pane_t1

0xaf2e,	// (0x000184a9) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf2e,	// (0x000184a9) bg_popup_call2_act_pane_cp01

0xafb8,	// (0x00018533) call_type_pane_cp05_ParamLimits

0xafb8,	// (0x00018533) call_type_pane_cp05

0xb00c,	// (0x00018587) popup_call2_audio_second_window_g1_ParamLimits

0xb00c,	// (0x00018587) popup_call2_audio_second_window_g1

0xb060,	// (0x000185db) popup_call2_audio_second_window_g2_ParamLimits

0xb060,	// (0x000185db) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001ca92) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001ca92) popup_call2_audio_second_window_g

0xb0c5,	// (0x00018640) popup_call2_audio_second_window_t1_ParamLimits

0xb0c5,	// (0x00018640) popup_call2_audio_second_window_t1

0xb180,	// (0x000186fb) popup_call2_audio_second_window_t2_ParamLimits

0xb180,	// (0x000186fb) popup_call2_audio_second_window_t2

0xb1d3,	// (0x0001874e) popup_call2_audio_second_window_t3_ParamLimits

0xb1d3,	// (0x0001874e) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001ca99) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001ca99) popup_call2_audio_second_window_t

0x9a46,	// (0x00016fc1) bg_popup_call2_in_pane_cp02

0x9a50,	// (0x00016fcb) call_type_pane_cp04

0x9a58,	// (0x00016fd3) popup_call2_audio_wait_window_g1

0x9a60,	// (0x00016fdb) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001c674) popup_call2_audio_wait_window_g

0x9a68,	// (0x00016fe3) popup_call2_audio_wait_window_t3

0xb2c6,	// (0x00018841) bg_popup_call2_act_pane_ParamLimits

0xb2c6,	// (0x00018841) bg_popup_call2_act_pane

0xb386,	// (0x00018901) call_type_pane_cp03_ParamLimits

0xb386,	// (0x00018901) call_type_pane_cp03

0xb3ea,	// (0x00018965) popup_call2_audio_first_window_g1_ParamLimits

0xb3ea,	// (0x00018965) popup_call2_audio_first_window_g1

0xb45a,	// (0x000189d5) popup_call2_audio_first_window_g2_ParamLimits

0xb45a,	// (0x000189d5) popup_call2_audio_first_window_g2

0xab61,	// (0x000180dc) popup_call2_audio_first_window_g3_ParamLimits

0xab61,	// (0x000180dc) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001caa2) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001caa2) popup_call2_audio_first_window_g

0xb538,	// (0x00018ab3) popup_call2_audio_first_window_t1_ParamLimits

0xb538,	// (0x00018ab3) popup_call2_audio_first_window_t1

0xb63b,	// (0x00018bb6) popup_call2_audio_first_window_t4_ParamLimits

0xb63b,	// (0x00018bb6) popup_call2_audio_first_window_t4

0xb71e,	// (0x00018c99) popup_call2_audio_first_window_t5_ParamLimits

0xb71e,	// (0x00018c99) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001caad) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001caad) popup_call2_audio_first_window_t

0x9c99,	// (0x00017214) bg_popup_call2_act_pane_g1

0xbdcb,	// (0x00019346) popup_cale_lunar_info_window_t1

0xbdd9,	// (0x00019354) popup_cale_lunar_info_window_t2

0xbde7,	// (0x00019362) popup_cale_lunar_info_window_t3

0x9a46,	// (0x00016fc1) bg_popup_call2_bubble_pane

0xb81f,	// (0x00018d9a) bg_popup_call2_in_pane_cp01_ParamLimits

0xb81f,	// (0x00018d9a) bg_popup_call2_in_pane_cp01

0x9722,	// (0x00016c9d) call_type_pane_cp02

0xb867,	// (0x00018de2) popup_call2_audio_out_window_g1_ParamLimits

0xb867,	// (0x00018de2) popup_call2_audio_out_window_g1

0xb893,	// (0x00018e0e) popup_call2_audio_out_window_g2_ParamLimits

0xb893,	// (0x00018e0e) popup_call2_audio_out_window_g2

0xb8bb,	// (0x00018e36) popup_call2_audio_out_window_g3_ParamLimits

0xb8bb,	// (0x00018e36) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001cab6) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001cab6) popup_call2_audio_out_window_g

0xb8f6,	// (0x00018e71) popup_call2_audio_out_window_t1_ParamLimits

0xb8f6,	// (0x00018e71) popup_call2_audio_out_window_t1

0xb955,	// (0x00018ed0) popup_call2_audio_out_window_t2_ParamLimits

0xb955,	// (0x00018ed0) popup_call2_audio_out_window_t2

0xb9a9,	// (0x00018f24) popup_call2_audio_out_window_t3_ParamLimits

0xb9a9,	// (0x00018f24) popup_call2_audio_out_window_t3

0xb9bf,	// (0x00018f3a) popup_call2_audio_out_window_t4_ParamLimits

0xb9bf,	// (0x00018f3a) popup_call2_audio_out_window_t4

0xb9d5,	// (0x00018f50) popup_call2_audio_out_window_t5_ParamLimits

0xb9d5,	// (0x00018f50) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001cabf) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001cabf) popup_call2_audio_out_window_t

0xba39,	// (0x00018fb4) bg_popup_call2_in_pane_ParamLimits

0xba39,	// (0x00018fb4) bg_popup_call2_in_pane

0xba95,	// (0x00019010) popup_call2_audio_in_window_g1_ParamLimits

0xba95,	// (0x00019010) popup_call2_audio_in_window_g1

0xbacd,	// (0x00019048) popup_call2_audio_in_window_g2_ParamLimits

0xbacd,	// (0x00019048) popup_call2_audio_in_window_g2

0xbb05,	// (0x00019080) popup_call2_audio_in_window_g3_ParamLimits

0xbb05,	// (0x00019080) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001cacc) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001cacc) popup_call2_audio_in_window_g

0xbb5d,	// (0x000190d8) popup_call2_audio_in_window_t1_ParamLimits

0xbb5d,	// (0x000190d8) popup_call2_audio_in_window_t1

0xbbdd,	// (0x00019158) popup_call2_audio_in_window_t2_ParamLimits

0xbbdd,	// (0x00019158) popup_call2_audio_in_window_t2

0xbc5d,	// (0x000191d8) popup_call2_audio_in_window_t3_ParamLimits

0xbc5d,	// (0x000191d8) popup_call2_audio_in_window_t3

0xbc77,	// (0x000191f2) popup_call2_audio_in_window_t4_ParamLimits

0xbc77,	// (0x000191f2) popup_call2_audio_in_window_t4

0xbc89,	// (0x00019204) popup_call2_audio_in_window_t5_ParamLimits

0xbc89,	// (0x00019204) popup_call2_audio_in_window_t5

0xbc9e,	// (0x00019219) popup_call2_audio_in_window_t6_ParamLimits

0xbc9e,	// (0x00019219) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001cad5) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001cad5) popup_call2_audio_in_window_t

0x9c99,	// (0x00017214) bg_popup_call2_in_pane_g1

0xbdf5,	// (0x00019370) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0001cb50) popup_cale_lunar_info_window_t

0x9ca1,	// (0x0001721c) bg_popup_call2_rect_pane_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_call2_rect_pane

0x9a46,	// (0x00016fc1) call2_cli_visual_graphic_pane

0x9a46,	// (0x00016fc1) call2_cli_visual_text_pane

0xbfe0,	// (0x0001955b) smil_status_volume_pane_g3

0x0002,

0x9e0d,	// (0x00017388) call2_cli_visual_graphic_pane_g1

0x9e0d,	// (0x00017388) call2_cli_visual_graphic_pane_g2

0x9e0d,	// (0x00017388) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001cae2) call2_cli_visual_graphic_pane_g

0xbcb3,	// (0x0001922e) bg_popup_call2_rect_pane_g1

0x9eb5,	// (0x00017430) bg_popup_call2_rect_pane_g2

0xbcbb,	// (0x00019236) bg_popup_call2_rect_pane_g3

0xbcc3,	// (0x0001923e) bg_popup_call2_rect_pane_g4

0xbccb,	// (0x00019246) bg_popup_call2_rect_pane_g5

0xbcd3,	// (0x0001924e) bg_popup_call2_rect_pane_g6

0xbcdb,	// (0x00019256) bg_popup_call2_rect_pane_g7

0xbce3,	// (0x0001925e) bg_popup_call2_rect_pane_g8

0xbceb,	// (0x00019266) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001cae9) bg_popup_call2_rect_pane_g

0xbcf3,	// (0x0001926e) bg_popup_call2_bubble_pane_g1

0xbcfb,	// (0x00019276) bg_popup_call2_bubble_pane_g2

0xbd03,	// (0x0001927e) bg_popup_call2_bubble_pane_g3

0xbd0b,	// (0x00019286) bg_popup_call2_bubble_pane_g4

0xbd13,	// (0x0001928e) bg_popup_call2_bubble_pane_g5

0xbd1b,	// (0x00019296) bg_popup_call2_bubble_pane_g6

0xbd23,	// (0x0001929e) bg_popup_call2_bubble_pane_g7

0xbd2b,	// (0x000192a6) bg_popup_call2_bubble_pane_g8

0xbd33,	// (0x000192ae) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001cafc) bg_popup_call2_bubble_pane_g

0x13ea,	// (0x0000e965) aid_cale_week_size_cell_pane

0x1af7,	// (0x0000f072) aid_cams_cif_uncrop_pane_ParamLimits

0x1af7,	// (0x0000f072) aid_cams_cif_uncrop_pane

0x1c96,	// (0x0000f211) aid_cams_size_cell_ParamLimits

0x1c96,	// (0x0000f211) aid_cams_size_cell

0x1caa,	// (0x0000f225) grid_cams_pane_ParamLimits

0x1cbf,	// (0x0000f23a) linegrid_cams_pane_ParamLimits

0x1e9a,	// (0x0000f415) call_video_pane_t1

0x1eb4,	// (0x0000f42f) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001c7e9) call_video_pane_t

0x221b,	// (0x0000f796) aid_cale_month_size_cell_pane_ParamLimits

0x221b,	// (0x0000f796) aid_cale_month_size_cell_pane

0xf61e,	// (0x0001cb99) smil_status_volume_pane_g

0xbfed,	// (0x00019568) volume_smil_pane_ParamLimits

0x959b,	// (0x00016b16) aid_popup2_width_pane

0x1358,	// (0x0000e8d3) cell_qdial_pane_g4_ParamLimits

0x1358,	// (0x0000e8d3) cell_qdial_pane_g4

0x2fa6,	// (0x00010521) aid_blid_cardinal_pane_ParamLimits

0x2fb2,	// (0x0001052d) aid_blid_destination_pane_ParamLimits

0x2fb2,	// (0x0001052d) aid_blid_destination_pane

0x9ca1,	// (0x0001721c) bg_popup_call_poc_act_pane_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_call_poc_act_pane

0x9ca1,	// (0x0001721c) bg_popup_call_poc_inact_pane_ParamLimits

0x9ca1,	// (0x0001721c) bg_popup_call_poc_inact_pane

0xbd3b,	// (0x000192b6) bg_popup_call_poc_act_pane_g1

0xbd43,	// (0x000192be) bg_popup_call_poc_act_pane_g2

0xbd4b,	// (0x000192c6) bg_popup_call_poc_act_pane_g3

0xbd0b,	// (0x00019286) bg_popup_call_poc_act_pane_g4

0xbd13,	// (0x0001928e) bg_popup_call_poc_act_pane_g5

0xbd53,	// (0x000192ce) bg_popup_call_poc_act_pane_g6

0xbd23,	// (0x0001929e) bg_popup_call_poc_act_pane_g7

0xbd5b,	// (0x000192d6) bg_popup_call_poc_act_pane_g8

0x9a46,	// (0x00016fc1) main_usb_pane

0x3e19,	// (0x00011394) popup_cale_lunar_info_window

0x20f9,	// (0x0000f674) im_reading_pane_t1_ParamLimits

0xa0d2,	// (0x0001764d) list_im_pane_ParamLimits

0xa0e3,	// (0x0001765e) scroll_pane_cp07_ParamLimits

0x9a46,	// (0x00016fc1) grid_highlight_pane_cp012

0x9ca1,	// (0x0001721c) mup_scale_pane_ParamLimits

0xac74,	// (0x000181ef) main_usb_pane_g1_ParamLimits

0xac74,	// (0x000181ef) main_usb_pane_g1

0x3af0,	// (0x0001106b) main_usb_pane_g2_ParamLimits

0x3af0,	// (0x0001106b) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0001cb39) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0001cb39) main_usb_pane_g

0x3b04,	// (0x0001107f) main_usb_pane_t1_ParamLimits

0x3b04,	// (0x0001107f) main_usb_pane_t1

0x3b16,	// (0x00011091) main_usb_pane_t2_ParamLimits

0x3b16,	// (0x00011091) main_usb_pane_t2

0x3b28,	// (0x000110a3) main_usb_pane_t3_ParamLimits

0x3b28,	// (0x000110a3) main_usb_pane_t3

0x3b3a,	// (0x000110b5) main_usb_pane_t4_ParamLimits

0x3b3a,	// (0x000110b5) main_usb_pane_t4

0x3b4c,	// (0x000110c7) main_usb_pane_t5_ParamLimits

0x3b4c,	// (0x000110c7) main_usb_pane_t5

0x3b5e,	// (0x000110d9) main_usb_pane_t6_ParamLimits

0x3b5e,	// (0x000110d9) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0001cb3e) main_usb_pane_t_ParamLimits

0x2f55,	// (0x000104d0) aid_text_placing

0x2f5e,	// (0x000104d9) main_location2_pane_t1_ParamLimits

0x2f70,	// (0x000104eb) main_location2_pane_t2_ParamLimits

0x2f82,	// (0x000104fd) main_location2_pane_t3_ParamLimits

0x2f94,	// (0x0001050f) main_location2_pane_t4_ParamLimits

0x2f94,	// (0x0001050f) main_location2_pane_t4

0xf3cf,	// (0x0001c94a) main_location2_pane_t_ParamLimits

0x9cdd,	// (0x00017258) find_pinb_pane_g2_ParamLimits

0x9cdd,	// (0x00017258) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001c69a) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001c69a) find_pinb_pane_g

0x9ce9,	// (0x00017264) find_pinb_pane_t1_ParamLimits

0x9cfb,	// (0x00017276) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001c69f) find_pinb_pane_t_ParamLimits

0x9a46,	// (0x00016fc1) main_call3_pane

0x265e,	// (0x0000fbd9) cale_month_day_heading_pane_t1_ParamLimits

0x26e4,	// (0x0000fc5f) cale_month_day_heading_pane_t2_ParamLimits

0x275d,	// (0x0000fcd8) cale_month_day_heading_pane_t3_ParamLimits

0x27d6,	// (0x0000fd51) cale_month_day_heading_pane_t4_ParamLimits

0x284f,	// (0x0000fdca) cale_month_day_heading_pane_t5_ParamLimits

0x28c8,	// (0x0000fe43) cale_month_day_heading_pane_t6_ParamLimits

0x2941,	// (0x0000febc) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001c821) cale_month_day_heading_pane_t_ParamLimits

0xa348,	// (0x000178c3) smil_status_volume_pane

0x3665,	// (0x00010be0) postcard_address_pane_ParamLimits

0x3665,	// (0x00010be0) postcard_address_pane

0x3675,	// (0x00010bf0) postcard_message_pane_ParamLimits

0x3675,	// (0x00010bf0) postcard_message_pane

0x3acf,	// (0x0001104a) call2_cli_visual_pane_t1_ParamLimits

0x3acf,	// (0x0001104a) call2_cli_visual_pane_t1

0x4234,	// (0x000117af) postcard_message_pane_t1_ParamLimits

0x4234,	// (0x000117af) postcard_message_pane_t1

0x421d,	// (0x00011798) postcard_address_pane_t1_ParamLimits

0x421d,	// (0x00011798) postcard_address_pane_t1

0x420b,	// (0x00011786) popup_call3_audio_in_window_ParamLimits

0x420b,	// (0x00011786) popup_call3_audio_in_window

0x409a,	// (0x00011615) bg_popup_call3_in_pane_ParamLimits

0x409a,	// (0x00011615) bg_popup_call3_in_pane

0x410c,	// (0x00011687) popup_call3_audio_in_window_g1_ParamLimits

0x410c,	// (0x00011687) popup_call3_audio_in_window_g1

0x412c,	// (0x000116a7) popup_call3_audio_in_window_g2_ParamLimits

0x412c,	// (0x000116a7) popup_call3_audio_in_window_g2

0x414c,	// (0x000116c7) popup_call3_audio_in_window_g3_ParamLimits

0x414c,	// (0x000116c7) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0001cba0) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0001cba0) popup_call3_audio_in_window_g

0x417d,	// (0x000116f8) popup_call3_audio_in_window_t1_ParamLimits

0x417d,	// (0x000116f8) popup_call3_audio_in_window_t1

0x41bb,	// (0x00011736) popup_call3_audio_in_window_t2_ParamLimits

0x41bb,	// (0x00011736) popup_call3_audio_in_window_t2

0x41f9,	// (0x00011774) popup_call3_audio_in_window_t3_ParamLimits

0x41f9,	// (0x00011774) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0001cba9) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0001cba9) popup_call3_audio_in_window_t

0x9fc9,	// (0x00017544) bg_popup_call3_rect_pane

0xbcb3,	// (0x0001922e) bg_popup_call3_rect_pane_g1

0x9eb5,	// (0x00017430) bg_popup_call3_rect_pane_g2

0xbcbb,	// (0x00019236) bg_popup_call3_rect_pane_g3

0xbcc3,	// (0x0001923e) bg_popup_call3_rect_pane_g4

0xbccb,	// (0x00019246) bg_popup_call3_rect_pane_g5

0xbcd3,	// (0x0001924e) bg_popup_call3_rect_pane_g6

0xbcdb,	// (0x00019256) bg_popup_call3_rect_pane_g7

0x3276,	// (0x000107f1) mup_visualizer_osc_pane

0xab6f,	// (0x000180ea) mup_visualizer_spec_pane

0x40ca,	// (0x00011645) call3_video_qcif_pane_ParamLimits

0x40ca,	// (0x00011645) call3_video_qcif_pane

0x40db,	// (0x00011656) call3_video_qcif_uncrop_pane_ParamLimits

0x40db,	// (0x00011656) call3_video_qcif_uncrop_pane

0x40e7,	// (0x00011662) call3_video_subqcif_pane_ParamLimits

0x40e7,	// (0x00011662) call3_video_subqcif_pane

0x40fb,	// (0x00011676) call3_video_subqcif_uncrop_pane_ParamLimits

0x40fb,	// (0x00011676) call3_video_subqcif_uncrop_pane

0x416c,	// (0x000116e7) popup_call3_audio_in_window_g4_ParamLimits

0x416c,	// (0x000116e7) popup_call3_audio_in_window_g4

0x4089,	// (0x00011604) mup_spec_half_pane

0x4092,	// (0x0001160d) mup_spec_half_pane_cp

0xbfa0,	// (0x0001951b) mup_osc_middle_pane

0xbfa9,	// (0x00019524) mup_visualizer_osc_pane_g1

0x406a,	// (0x000115e5) mup_spec_bar_pane_ParamLimits

0x406a,	// (0x000115e5) mup_spec_bar_pane

0xbf8d,	// (0x00019508) mup_spec_bar_pane_g1

0xbf97,	// (0x00019512) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001cb94) mup_spec_bar_pane_g

0x13ea,	// (0x0000e965) aid_cale_week_size_cell_pane_ParamLimits

0x1404,	// (0x0000e97f) bg_cale_heading_pane_ParamLimits

0x141c,	// (0x0000e997) bg_cale_pane_cp01_ParamLimits

0x1439,	// (0x0000e9b4) cale_week_corner_pane_ParamLimits

0x1458,	// (0x0000e9d3) cale_week_day_heading_pane_ParamLimits

0x1475,	// (0x0000e9f0) cale_week_scroll_pane_g1_ParamLimits

0x1488,	// (0x0000ea03) cale_week_scroll_pane_g2_ParamLimits

0x14a0,	// (0x0000ea1b) cale_week_scroll_pane_g3_ParamLimits

0x14b8,	// (0x0000ea33) cale_week_scroll_pane_g4_ParamLimits

0x14d0,	// (0x0000ea4b) cale_week_scroll_pane_g5_ParamLimits

0x14e8,	// (0x0000ea63) cale_week_scroll_pane_g6_ParamLimits

0x1500,	// (0x0000ea7b) cale_week_scroll_pane_g7_ParamLimits

0x1518,	// (0x0000ea93) cale_week_scroll_pane_g8_ParamLimits

0x1534,	// (0x0000eaaf) cale_week_scroll_pane_g9_ParamLimits

0x154c,	// (0x0000eac7) cale_week_scroll_pane_g10_ParamLimits

0x1564,	// (0x0000eadf) cale_week_scroll_pane_g11_ParamLimits

0x157c,	// (0x0000eaf7) cale_week_scroll_pane_g12_ParamLimits

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g13_ParamLimits

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g14_ParamLimits

0x1594,	// (0x0000eb0f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001c72b) cale_week_scroll_pane_g_ParamLimits

0x15c8,	// (0x0000eb43) cale_week_time_pane_ParamLimits

0x15e4,	// (0x0000eb5f) grid_cale_week_pane_ParamLimits

0x9f48,	// (0x000174c3) listscroll_cale_week_pane_t1

0x9f5a,	// (0x000174d5) scroll_pane_cp08_ParamLimits

0x227b,	// (0x0000f7f6) cale_month_corner_pane_ParamLimits

0xa312,	// (0x0001788d) cale_month_pane_t1

0x2605,	// (0x0000fb80) cale_month_week_pane_ParamLimits

0x2d83,	// (0x000102fe) popup_call_status_window_g1_ParamLimits

0x2d97,	// (0x00010312) popup_call_status_window_g2_ParamLimits

0x2dab,	// (0x00010326) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001c8d1) popup_call_status_window_g_ParamLimits

0xa6e0,	// (0x00017c5b) aid_call2_pane

0x34bd,	// (0x00010a38) msg_header_pane_g1

0x3665,	// (0x00010be0) postcard_address2_pane_ParamLimits

0x3665,	// (0x00010be0) postcard_address2_pane

0x3675,	// (0x00010bf0) postcard_message2_pane_ParamLimits

0x3675,	// (0x00010bf0) postcard_message2_pane

0x4028,	// (0x000115a3) message2_row_pane_ParamLimits

0x4028,	// (0x000115a3) message2_row_pane

0x4040,	// (0x000115bb) address2_row_pane_ParamLimits

0x4040,	// (0x000115bb) address2_row_pane

0xbf5b,	// (0x000194d6) postcard_message2_row_pane_g1

0xbf63,	// (0x000194de) postcard_message2_row_pane_t1

0xbf5b,	// (0x000194d6) address2_row_pane_g1

0xbf63,	// (0x000194de) address2_row_pane_t1

0x19bb,	// (0x0000ef36) aid_size_cell_vorec

0x9a46,	// (0x00016fc1) main_rss_pane

0x4053,	// (0x000115ce) rss_list_single_pane_ParamLimits

0x4053,	// (0x000115ce) rss_list_single_pane

0xbf71,	// (0x000194ec) rss_list_single_pane_t1

0xbf7f,	// (0x000194fa) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0001cb8f) rss_list_single_pane_t

0x9a46,	// (0x00016fc1) main_camera2_pane

0x9a46,	// (0x00016fc1) main_video2_pane

0x428d,	// (0x00011808) cams_zoom_pane_cp2_ParamLimits

0x428d,	// (0x00011808) cams_zoom_pane_cp2

0x42a4,	// (0x0001181f) image2_vga_pane_ParamLimits

0x42a4,	// (0x0001181f) image2_vga_pane

0x42da,	// (0x00011855) main_camera2_pane_g1_ParamLimits

0x42da,	// (0x00011855) main_camera2_pane_g1

0x42fa,	// (0x00011875) main_camera2_pane_g2_ParamLimits

0x42fa,	// (0x00011875) main_camera2_pane_g2

0x4311,	// (0x0001188c) main_camera2_pane_g3_ParamLimits

0x4311,	// (0x0001188c) main_camera2_pane_g3

0x4328,	// (0x000118a3) main_camera2_pane_g4_ParamLimits

0x4328,	// (0x000118a3) main_camera2_pane_g4

0x433f,	// (0x000118ba) main_camera2_pane_g5_ParamLimits

0x433f,	// (0x000118ba) main_camera2_pane_g5

0x4356,	// (0x000118d1) main_camera2_pane_g6_ParamLimits

0x4356,	// (0x000118d1) main_camera2_pane_g6

0x436d,	// (0x000118e8) main_camera2_pane_g7_ParamLimits

0x436d,	// (0x000118e8) main_camera2_pane_g7

0x4384,	// (0x000118ff) main_camera2_pane_g8_ParamLimits

0x4384,	// (0x000118ff) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0001cbb0) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0001cbb0) main_camera2_pane_g

0x43b2,	// (0x0001192d) main_camera2_pane_t1_ParamLimits

0x43b2,	// (0x0001192d) main_camera2_pane_t1

0x43e1,	// (0x0001195c) main_camera2_pane_t2_ParamLimits

0x43e1,	// (0x0001195c) main_camera2_pane_t2

0x43fe,	// (0x00011979) main_camera2_pane_t3_ParamLimits

0x43fe,	// (0x00011979) main_camera2_pane_t3

0x444a,	// (0x000119c5) main_camera2_pane_t4_ParamLimits

0x444a,	// (0x000119c5) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0001cbc3) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0001cbc3) main_camera2_pane_t

0x44bf,	// (0x00011a3a) cams_zoom_pane_cp4_ParamLimits

0x44bf,	// (0x00011a3a) cams_zoom_pane_cp4

0x44d5,	// (0x00011a50) image2_cif_pane_ParamLimits

0x44d5,	// (0x00011a50) image2_cif_pane

0x44f8,	// (0x00011a73) image2_subqcif_pane_ParamLimits

0x44f8,	// (0x00011a73) image2_subqcif_pane

0x450e,	// (0x00011a89) main_video2_pane_g1_ParamLimits

0x450e,	// (0x00011a89) main_video2_pane_g1

0x4528,	// (0x00011aa3) main_video2_pane_g2_ParamLimits

0x4528,	// (0x00011aa3) main_video2_pane_g2

0x453e,	// (0x00011ab9) main_video2_pane_g3_ParamLimits

0x453e,	// (0x00011ab9) main_video2_pane_g3

0x4554,	// (0x00011acf) main_video2_pane_g4_ParamLimits

0x4554,	// (0x00011acf) main_video2_pane_g4

0x456a,	// (0x00011ae5) main_video2_pane_g5_ParamLimits

0x456a,	// (0x00011ae5) main_video2_pane_g5

0x4580,	// (0x00011afb) main_video2_pane_g6_ParamLimits

0x4580,	// (0x00011afb) main_video2_pane_g6

0x0005,

0xf657,	// (0x0001cbd2) main_video2_pane_g_ParamLimits

0xf657,	// (0x0001cbd2) main_video2_pane_g

0x459a,	// (0x00011b15) main_video2_pane_t1_ParamLimits

0x459a,	// (0x00011b15) main_video2_pane_t1

0x45be,	// (0x00011b39) main_video2_pane_t2_ParamLimits

0x45be,	// (0x00011b39) main_video2_pane_t2

0x4608,	// (0x00011b83) main_video2_pane_t3_ParamLimits

0x4608,	// (0x00011b83) main_video2_pane_t3

0x0002,

0xf664,	// (0x0001cbdf) main_video2_pane_t_ParamLimits

0xf664,	// (0x0001cbdf) main_video2_pane_t

0x3c0d,	// (0x00011188) call_muted_g2

0x0001,

0xf606,	// (0x0001cb81) call_muted_g

0x9a46,	// (0x00016fc1) main_mup2_pane

0x464a,	// (0x00011bc5) main_mup2_pane_g1_ParamLimits

0x464a,	// (0x00011bc5) main_mup2_pane_g1

0x4656,	// (0x00011bd1) main_mup2_pane_g2_ParamLimits

0x4656,	// (0x00011bd1) main_mup2_pane_g2

0xc10c,	// (0x00019687) main_mup_pane_g13_cp1

0xc114,	// (0x0001968f) mup_volume_pane_cp1

0x4672,	// (0x00011bed) main_mup2_pane_g4_ParamLimits

0x4672,	// (0x00011bed) main_mup2_pane_g4

0x4682,	// (0x00011bfd) main_mup2_pane_g5_ParamLimits

0x4682,	// (0x00011bfd) main_mup2_pane_g5

0x4692,	// (0x00011c0d) main_mup2_pane_g6_ParamLimits

0x4692,	// (0x00011c0d) main_mup2_pane_g6

0x46a2,	// (0x00011c1d) main_mup2_pane_g7_ParamLimits

0x46a2,	// (0x00011c1d) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0001cbe6) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0001cbe6) main_mup2_pane_g

0x46ba,	// (0x00011c35) main_mup2_pane_t1_ParamLimits

0x46ba,	// (0x00011c35) main_mup2_pane_t1

0x46d0,	// (0x00011c4b) main_mup2_pane_t2_ParamLimits

0x46d0,	// (0x00011c4b) main_mup2_pane_t2

0x46e6,	// (0x00011c61) main_mup2_pane_t3_ParamLimits

0x46e6,	// (0x00011c61) main_mup2_pane_t3

0x46fc,	// (0x00011c77) main_mup2_pane_t4_ParamLimits

0x46fc,	// (0x00011c77) main_mup2_pane_t4

0x4714,	// (0x00011c8f) main_mup2_pane_t5_ParamLimits

0x4714,	// (0x00011c8f) main_mup2_pane_t5

0x472c,	// (0x00011ca7) main_mup2_pane_t6_ParamLimits

0x472c,	// (0x00011ca7) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0001cbf5) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0001cbf5) main_mup2_pane_t

0x475a,	// (0x00011cd5) mup2_visualizer_pane_ParamLimits

0x475a,	// (0x00011cd5) mup2_visualizer_pane

0x4785,	// (0x00011d00) mup_progress_pane_cp_ParamLimits

0x4785,	// (0x00011d00) mup_progress_pane_cp

0xc0ee,	// (0x00019669) mup_volume_pane_cp_ParamLimits

0xc0ee,	// (0x00019669) mup_volume_pane_cp

0x4799,	// (0x00011d14) mup2_visualizer_pane_g1_ParamLimits

0x4799,	// (0x00011d14) mup2_visualizer_pane_g1

0xc02d,	// (0x000195a8) mup2_visualizer_pane_g2_ParamLimits

0xc02d,	// (0x000195a8) mup2_visualizer_pane_g2

0x47ae,	// (0x00011d29) mup2_visualizer_pane_g3_ParamLimits

0x47ae,	// (0x00011d29) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0001cc02) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0001cc02) mup2_visualizer_pane_g

0x38bc,	// (0x00010e37) aid_size_cell_fmradio

0x3d69,	// (0x000112e4) aid_height_parent_landcape

0xa170,	// (0x000176eb) wml_content_pane_cp

0xa178,	// (0x000176f3) wml_tabs_pane

0xa181,	// (0x000176fc) popup_wml_miniature_window

0xa189,	// (0x00017704) scroll_pane_cp021

0xa19d,	// (0x00017718) wml_content_pane_comp8

0x9a46,	// (0x00016fc1) bg_popup_sub_pane_cp05

0xc04b,	// (0x000195c6) popup_wml_miniature_window_g1

0xc053,	// (0x000195ce) wml_miniature_view_pane

0x47ba,	// (0x00011d35) aid_size_wml_view

0x47c2,	// (0x00011d3d) wml_miniature_view_pane_g1

0x47cb,	// (0x00011d46) wml_miniature_view_pane_g2

0x47d4,	// (0x00011d4f) wml_miniature_view_pane_g3

0x47dc,	// (0x00011d57) wml_miniature_view_pane_g4

0x47e4,	// (0x00011d5f) wml_miniature_view_pane_g5

0x47ec,	// (0x00011d67) wml_miniature_view_pane_g6

0x47f4,	// (0x00011d6f) wml_miniature_view_pane_g7

0x47fc,	// (0x00011d77) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0001cc09) wml_miniature_view_pane_g

0xc05b,	// (0x000195d6) background_graphic_ParamLimits

0xc05b,	// (0x000195d6) background_graphic

0xc067,	// (0x000195e2) wml_tabs_2_pane

0xc070,	// (0x000195eb) wml_tabs_3_pane_ParamLimits

0xc070,	// (0x000195eb) wml_tabs_3_pane

0xc082,	// (0x000195fd) wml_tabs_4_pane_ParamLimits

0xc082,	// (0x000195fd) wml_tabs_4_pane

0xc098,	// (0x00019613) wml_tabs_5_pane_ParamLimits

0xc098,	// (0x00019613) wml_tabs_5_pane

0xc0b2,	// (0x0001962d) wml_tabs_pane_g2_ParamLimits

0xc0b2,	// (0x0001962d) wml_tabs_pane_g2

0xc0c6,	// (0x00019641) wml_tabs_pane_g3_ParamLimits

0xc0c6,	// (0x00019641) wml_tabs_pane_g3

0x4804,	// (0x00011d7f) wml_tabs_2_active_pane_ParamLimits

0x4804,	// (0x00011d7f) wml_tabs_2_active_pane

0x4814,	// (0x00011d8f) wml_tabs_2_passive_pane_ParamLimits

0x4814,	// (0x00011d8f) wml_tabs_2_passive_pane

0x4824,	// (0x00011d9f) wml_tabs_3_active_pane_cp_ParamLimits

0x4824,	// (0x00011d9f) wml_tabs_3_active_pane_cp

0x4835,	// (0x00011db0) wml_tabs_3_passive_pane_ParamLimits

0x4835,	// (0x00011db0) wml_tabs_3_passive_pane

0x4846,	// (0x00011dc1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4846,	// (0x00011dc1) wml_tabs_3_passive_pane_cp

0x4857,	// (0x00011dd2) tabs_4_active_pane

0x485f,	// (0x00011dda) tabs_4_passive_pane

0x4867,	// (0x00011de2) tabs_4_passive_pane_cp

0x486f,	// (0x00011dea) tabs_4_passive_pane_cp2

0x3ae8,	// (0x00011063) aid_height_text

0x324c,	// (0x000107c7) mup_volume_cont_pane_ParamLimits

0x324c,	// (0x000107c7) mup_volume_cont_pane

0x1042,	// (0x0000e5bd) aid_size_cell_pinb

0x104c,	// (0x0000e5c7) aid_size_list_pinb

0x4771,	// (0x00011cec) mup2_volume_cont_pane_ParamLimits

0x4771,	// (0x00011cec) mup2_volume_cont_pane

0xc0da,	// (0x00019655) mup2_volume_cont_pane_g1_ParamLimits

0xc0da,	// (0x00019655) mup2_volume_cont_pane_g1

0x0d79,	// (0x0000e2f4) aid_size_cell_touch_ParamLimits

0x0d79,	// (0x0000e2f4) aid_size_cell_touch

0x0f7e,	// (0x0000e4f9) touch_pane_ParamLimits

0x0f7e,	// (0x0000e4f9) touch_pane

0x9589,	// (0x00016b04) main_rss2_pane

0xc11c,	// (0x00019697) listscroll_rss2_pane

0xc125,	// (0x000196a0) rss2_navigation_pane

0xc12d,	// (0x000196a8) list_rss2_pane

0xa868,	// (0x00017de3) scroll_pane_cp22

0xc135,	// (0x000196b0) rss2_navigation_pane_g1

0xc13e,	// (0x000196b9) rss2_navigation_pane_g2

0xc146,	// (0x000196c1) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0001cc1a) rss2_navigation_pane_g

0xc14e,	// (0x000196c9) rss2_navigation_pane_t1

0x4877,	// (0x00011df2) rss2_list_single_pane_ParamLimits

0x4877,	// (0x00011df2) rss2_list_single_pane

0xc15c,	// (0x000196d7) rss2_list_single_pane_t2

0xc16a,	// (0x000196e5) rss2_list_single_pane_t3_ParamLimits

0xc16a,	// (0x000196e5) rss2_list_single_pane_t3

0xc187,	// (0x00019702) rss2_list_single_pane_t4

0x2ba5,	// (0x00010120) smil_status_pane_g1

0x95f3,	// (0x00016b6e) main_image2_pane_ParamLimits

0x95f3,	// (0x00016b6e) main_image2_pane

0x439b,	// (0x00011916) main_camera2_pane_g9_ParamLimits

0x439b,	// (0x00011916) main_camera2_pane_g9

0x448d,	// (0x00011a08) main_camera2_pane_t5_ParamLimits

0x448d,	// (0x00011a08) main_camera2_pane_t5

0xc002,	// (0x0001957d) main_camera2_pane_t6_ParamLimits

0xc002,	// (0x0001957d) main_camera2_pane_t6

0x488a,	// (0x00011e05) main_image2_pane_g1_ParamLimits

0x488a,	// (0x00011e05) main_image2_pane_g1

0x3884,	// (0x00010dff) smil2_video_pane_ParamLimits

0x3884,	// (0x00010dff) smil2_video_pane

0x95a3,	// (0x00016b1e) aid_zoom_text_primary_cp

0x95eb,	// (0x00016b66) popup_preview_fixed_window

0xa0ca,	// (0x00017645) im_reading_pane_g1

0x4281,	// (0x000117fc) cams2_bc_adjust_pane_cp_ParamLimits

0x4281,	// (0x000117fc) cams2_bc_adjust_pane_cp

0x44b3,	// (0x00011a2e) cams2_bc_adjust_pane_ParamLimits

0x44b3,	// (0x00011a2e) cams2_bc_adjust_pane

0xc195,	// (0x00019710) cams2_bc_adjust_pane_g1

0xc19d,	// (0x00019718) cams2_slider_pane

0xc1a6,	// (0x00019721) cams2_slider_pane_g1

0xc1af,	// (0x0001972a) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0001cc21) cams2_slider_pane_g

0x1120,	// (0x0000e69b) calc_display_pane_ParamLimits

0x1142,	// (0x0000e6bd) calc_paper_pane_ParamLimits

0x115f,	// (0x0000e6da) grid_calc_pane_ParamLimits

0xa742,	// (0x00017cbd) popup_clock_digital_window_t1_ParamLimits

0xad5a,	// (0x000182d5) main_image_pane_t1

0x1102,	// (0x0000e67d) aid_size_cell_calc_ParamLimits

0x1102,	// (0x0000e67d) aid_size_cell_calc

0x3dad,	// (0x00011328) popup_blid_sat_info2_window_ParamLimits

0x3dad,	// (0x00011328) popup_blid_sat_info2_window

0xc1d1,	// (0x0001974c) aid_size_cell_blid

0xc1d9,	// (0x00019754) bg_popup_window_pane_cp07

0xc1fc,	// (0x00019777) grid_popup_blid_pane

0xc204,	// (0x0001977f) heading_pane_cp05_ParamLimits

0xc204,	// (0x0001977f) heading_pane_cp05

0xc2cc,	// (0x00019847) cell_popup_blid_pane_ParamLimits

0xc2cc,	// (0x00019847) cell_popup_blid_pane

0xc2ec,	// (0x00019867) cell_popup_blid_pane_g1

0xc2f4,	// (0x0001986f) cell_popup_blid_pane_t1

0x4746,	// (0x00011cc1) mup2_indicator_pane_ParamLimits

0x4746,	// (0x00011cc1) mup2_indicator_pane

0x9fc9,	// (0x00017544) mup2_visualizer_osc_pane

0xc039,	// (0x000195b4) mup2_visualizer_spec_pane_ParamLimits

0xc039,	// (0x000195b4) mup2_visualizer_spec_pane

0x489e,	// (0x00011e19) mup2_spec_half_pane

0x48a7,	// (0x00011e22) mup2_spec_half_pane_cp

0x48af,	// (0x00011e2a) mup2_spec_bar_pane_ParamLimits

0x48af,	// (0x00011e2a) mup2_spec_bar_pane

0xbf8d,	// (0x00019508) mup2_spec_bar_pane_g1

0xbf97,	// (0x00019512) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001cb94) mup2_spec_bar_pane_g

0xbfa0,	// (0x0001951b) mup2_osc_middle_pane

0xbfa9,	// (0x00019524) mup2_visualizer_osc_pane_g1

0x9621,	// (0x00016b9c) popup_number_entry_window_t1_ParamLimits

0x9634,	// (0x00016baf) popup_number_entry_window_t2_ParamLimits

0x9646,	// (0x00016bc1) popup_number_entry_window_t3_ParamLimits

0x9658,	// (0x00016bd3) popup_number_entry_window_t5_ParamLimits

0x9658,	// (0x00016bd3) popup_number_entry_window_t5

0xf0ca,	// (0x0001c645) popup_number_entry_window_t_ParamLimits

0x968c,	// (0x00016c07) text_title_cp2_ParamLimits

0xac34,	// (0x000181af) aid_hotspot_pointer_text2_pane

0xac5a,	// (0x000181d5) main_viewer_pane_g9_ParamLimits

0xac5a,	// (0x000181d5) main_viewer_pane_g9

0xa312,	// (0x0001788d) cale_month_pane_t1_ParamLimits

0xa37d,	// (0x000178f8) bg_cale_pane_ParamLimits

0xa395,	// (0x00017910) list_cale_pane_ParamLimits

0xa3a6,	// (0x00017921) listscroll_cale_day_pane_t1

0xa3b8,	// (0x00017933) scroll_pane_cp09_ParamLimits

0x3298,	// (0x00010813) main_mup_eq_pane_t1_ParamLimits

0x3298,	// (0x00010813) main_mup_eq_pane_t1

0x32b0,	// (0x0001082b) main_mup_eq_pane_t2_ParamLimits

0x32b0,	// (0x0001082b) main_mup_eq_pane_t2

0x32c6,	// (0x00010841) main_mup_eq_pane_t3_ParamLimits

0x32c6,	// (0x00010841) main_mup_eq_pane_t3

0x32dc,	// (0x00010857) main_mup_eq_pane_t4_ParamLimits

0x32dc,	// (0x00010857) main_mup_eq_pane_t4

0x32f2,	// (0x0001086d) main_mup_eq_pane_t5_ParamLimits

0x32f2,	// (0x0001086d) main_mup_eq_pane_t5

0x3308,	// (0x00010883) main_mup_eq_pane_t6_ParamLimits

0x3308,	// (0x00010883) main_mup_eq_pane_t6

0x331a,	// (0x00010895) main_mup_eq_pane_t7_ParamLimits

0x331a,	// (0x00010895) main_mup_eq_pane_t7

0x332c,	// (0x000108a7) main_mup_eq_pane_t8_ParamLimits

0x332c,	// (0x000108a7) main_mup_eq_pane_t8

0x333e,	// (0x000108b9) main_mup_eq_pane_t9_ParamLimits

0x333e,	// (0x000108b9) main_mup_eq_pane_t9

0x3354,	// (0x000108cf) main_mup_eq_pane_t10_ParamLimits

0x3354,	// (0x000108cf) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001c9d0) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001c9d0) main_mup_eq_pane_t

0x33e7,	// (0x00010962) mup_equalizer_pane_cp5_ParamLimits

0x33f9,	// (0x00010974) mup_equalizer_pane_cp6_ParamLimits

0x340b,	// (0x00010986) mup_equalizer_pane_cp7_ParamLimits

0x9589,	// (0x00016b04) main_gallery_pane

0xbfb2,	// (0x0001952d) smil2_volume_pane

0xbfba,	// (0x00019535) smil_status_volume_pane_g1_ParamLimits

0xbfcd,	// (0x00019548) smil_status_volume_pane_g2_ParamLimits

0xbfe0,	// (0x0001955b) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0001cb99) smil_status_volume_pane_g_ParamLimits

0xc1d9,	// (0x00019754) bg_popup_window_pane_cp07_ParamLimits

0xc1e7,	// (0x00019762) blid_firmament_pane

0x48ce,	// (0x00011e49) aid_size_cell_gallery_ParamLimits

0x48ce,	// (0x00011e49) aid_size_cell_gallery

0x48e4,	// (0x00011e5f) grid_gallery_pane_ParamLimits

0x48e4,	// (0x00011e5f) grid_gallery_pane

0x48f9,	// (0x00011e74) cell_gallery_pane_ParamLimits

0x48f9,	// (0x00011e74) cell_gallery_pane

0xc302,	// (0x0001987d) bg_cell_gallery_focus_pane_ParamLimits

0xc302,	// (0x0001987d) bg_cell_gallery_focus_pane

0xc314,	// (0x0001988f) cell_gallery_pane_g1_ParamLimits

0xc314,	// (0x0001988f) cell_gallery_pane_g1

0x493e,	// (0x00011eb9) cell_gallery_pane_g2_ParamLimits

0x493e,	// (0x00011eb9) cell_gallery_pane_g2

0x494b,	// (0x00011ec6) cell_gallery_pane_g3_ParamLimits

0x494b,	// (0x00011ec6) cell_gallery_pane_g3

0xc320,	// (0x0001989b) cell_gallery_pane_g4_ParamLimits

0xc320,	// (0x0001989b) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0001cc47) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0001cc47) cell_gallery_pane_g

0xc32c,	// (0x000198a7) bg_cell_gallery_focus_pane_g1

0xc334,	// (0x000198af) bg_cell_gallery_focus_pane_g2

0xc33c,	// (0x000198b7) bg_cell_gallery_focus_pane_g3

0xc344,	// (0x000198bf) bg_cell_gallery_focus_pane_g4

0xc34c,	// (0x000198c7) bg_cell_gallery_focus_pane_g5

0xc354,	// (0x000198cf) bg_cell_gallery_focus_pane_g6

0xc35c,	// (0x000198d7) bg_cell_gallery_focus_pane_g7

0xc364,	// (0x000198df) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0001cc50) bg_cell_gallery_focus_pane_g

0xc36c,	// (0x000198e7) aid_firma_cardinal

0xc380,	// (0x000198fb) blid_firmament_pane_t1

0xc397,	// (0x00019912) blid_firmament_pane_t2

0xc3ae,	// (0x00019929) blid_firmament_pane_t3

0xc3c5,	// (0x00019940) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0001cc61) blid_firmament_pane_t

0xc3dc,	// (0x00019957) blid_sat_info_pane

0xc3ec,	// (0x00019967) blid_sat_info_pane_g1

0xc3ec,	// (0x00019967) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0001cc6a) blid_sat_info_pane_g

0xc3f6,	// (0x00019971) blid_sat_info_pane_t1

0xc404,	// (0x0001997f) smil2_volume_content_pane

0xc40d,	// (0x00019988) smil2_volume_pane_g1

0xc415,	// (0x00019990) smil2_volume_content_pane_g1

0xc41e,	// (0x00019999) smil2_volume_content_pane_g2

0xc427,	// (0x000199a2) smil2_volume_content_pane_g3

0xc430,	// (0x000199ab) smil2_volume_content_pane_g4

0xc439,	// (0x000199b4) smil2_volume_content_pane_g5

0xc442,	// (0x000199bd) smil2_volume_content_pane_g6

0xc44b,	// (0x000199c6) smil2_volume_content_pane_g7

0xc454,	// (0x000199cf) smil2_volume_content_pane_g8

0xc45d,	// (0x000199d8) smil2_volume_content_pane_g9

0xc466,	// (0x000199e1) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0001cc6f) smil2_volume_content_pane_g

0x1674,	// (0x0000ebef) cale_week_day_heading_pane_t1_ParamLimits

0x1699,	// (0x0000ec14) cale_week_day_heading_pane_t2_ParamLimits

0x16c3,	// (0x0000ec3e) cale_week_day_heading_pane_t3_ParamLimits

0x16ed,	// (0x0000ec68) cale_week_day_heading_pane_t4_ParamLimits

0x1717,	// (0x0000ec92) cale_week_day_heading_pane_t5_ParamLimits

0x1741,	// (0x0000ecbc) cale_week_day_heading_pane_t6_ParamLimits

0x176b,	// (0x0000ece6) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001c74c) cale_week_day_heading_pane_t_ParamLimits

0x9f77,	// (0x000174f2) bg_cale_side_pane_ParamLimits

0x1790,	// (0x0000ed0b) cale_week_time_pane_t1_ParamLimits

0x17ca,	// (0x0000ed45) cale_week_time_pane_t2_ParamLimits

0x1804,	// (0x0000ed7f) cale_week_time_pane_t3_ParamLimits

0x183e,	// (0x0000edb9) cale_week_time_pane_t4_ParamLimits

0x1878,	// (0x0000edf3) cale_week_time_pane_t5_ParamLimits

0x18b2,	// (0x0000ee2d) cale_week_time_pane_t6_ParamLimits

0x18ec,	// (0x0000ee67) cale_week_time_pane_t7_ParamLimits

0x1926,	// (0x0000eea1) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001c75b) cale_week_time_pane_t_ParamLimits

0x1960,	// (0x0000eedb) cell_cale_week_pane_g2_ParamLimits

0x9f77,	// (0x000174f2) bg_cale_side_pane_cp01_ParamLimits

0x29be,	// (0x0000ff39) cale_month_week_pane_t1_ParamLimits

0x29d7,	// (0x0000ff52) cale_month_week_pane_t2_ParamLimits

0x29f0,	// (0x0000ff6b) cale_month_week_pane_t3_ParamLimits

0x2a09,	// (0x0000ff84) cale_month_week_pane_t4_ParamLimits

0x2a22,	// (0x0000ff9d) cale_month_week_pane_t5_ParamLimits

0x2a3b,	// (0x0000ffb6) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001c830) cale_month_week_pane_t_ParamLimits

0xa324,	// (0x0001789f) cell_cale_month_pane_g1_ParamLimits

0x9589,	// (0x00016b04) main_cale_event_viewer_pane

0x9589,	// (0x00016b04) listscroll_cale_event_viewer_pane

0xc46f,	// (0x000199ea) list_cale_ev_pane

0xc477,	// (0x000199f2) scroll_pane_cp023

0x4958,	// (0x00011ed3) field_cale_ev_pane_ParamLimits

0x4958,	// (0x00011ed3) field_cale_ev_pane

0xc483,	// (0x000199fe) field_cale_ev_content_pane_ParamLimits

0xc483,	// (0x000199fe) field_cale_ev_content_pane

0xc48f,	// (0x00019a0a) field_cale_ev_pane_g1_ParamLimits

0xc48f,	// (0x00019a0a) field_cale_ev_pane_g1

0xc49b,	// (0x00019a16) field_cale_ev_pane_g2_ParamLimits

0xc49b,	// (0x00019a16) field_cale_ev_pane_g2

0xc4b3,	// (0x00019a2e) field_cale_ev_pane_g3_ParamLimits

0xc4b3,	// (0x00019a2e) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0001cc84) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0001cc84) field_cale_ev_pane_g

0xc4cb,	// (0x00019a46) field_cale_ev_pane_t1_ParamLimits

0xc4cb,	// (0x00019a46) field_cale_ev_pane_t1

0x4972,	// (0x00011eed) field_cale_ev_content_pane_t1_ParamLimits

0x4972,	// (0x00011eed) field_cale_ev_content_pane_t1

0xabfe,	// (0x00018179) bg_button_pane_cp01

0x13da,	// (0x0000e955) listscroll_cale_week_pane_ParamLimits

0x9f3f,	// (0x000174ba) popup_toolbar_window_cp01

0x9f48,	// (0x000174c3) listscroll_cale_week_pane_t1_ParamLimits

0x13da,	// (0x0000e955) listscroll_cale_day_pane_ParamLimits

0x9f3f,	// (0x000174ba) popup_toolbar_window_cp02

0xa3a6,	// (0x00017921) listscroll_cale_day_pane_t1_ParamLimits

0x13da,	// (0x0000e955) main_cale_month_pane_ParamLimits

0xbf2b,	// (0x000194a6) popup_toolbar_window_cp03_ParamLimits

0xbf2b,	// (0x000194a6) popup_toolbar_window_cp03

0x375e,	// (0x00010cd9) main_image_pane_g2_ParamLimits

0x375e,	// (0x00010cd9) main_image_pane_g2

0x376f,	// (0x00010cea) main_image_pane_g3_ParamLimits

0x376f,	// (0x00010cea) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001ca62) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001ca62) main_image_pane_g

0xad5a,	// (0x000182d5) main_image_pane_t1_ParamLimits

0x3780,	// (0x00010cfb) main_image_pane_t2_ParamLimits

0x3780,	// (0x00010cfb) main_image_pane_t2

0x3792,	// (0x00010d0d) main_image_pane_t3_ParamLimits

0x3792,	// (0x00010d0d) main_image_pane_t3

0x37ba,	// (0x00010d35) main_image_pane_t4_ParamLimits

0x37ba,	// (0x00010d35) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001ca69) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001ca69) main_image_pane_t

0x37da,	// (0x00010d55) popup_image_details_window_cp01

0x37e2,	// (0x00010d5d) popup_toobar_trans_pane_cp01_ParamLimits

0x37e2,	// (0x00010d5d) popup_toobar_trans_pane_cp01

0x3e7e,	// (0x000113f9) popup_image_details_window_ParamLimits

0x3e7e,	// (0x000113f9) popup_image_details_window

0xbf00,	// (0x0001947b) popup_image_focus_window

0x424f,	// (0x000117ca) camera2_autofocus_pane_ParamLimits

0x424f,	// (0x000117ca) camera2_autofocus_pane

0x9589,	// (0x00016b04) bg_popup_sub_pane_cp06

0xc4e2,	// (0x00019a5d) popup_image_focus_window_g1

0xc4ea,	// (0x00019a65) popup_image_focus_window_g2

0xc4f2,	// (0x00019a6d) popup_image_focus_window_g3

0xc4fa,	// (0x00019a75) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0001cc8b) popup_image_focus_window_g

0xc502,	// (0x00019a7d) popup_image_focus_window_t1

0xc510,	// (0x00019a8b) popup_image_focus_window_t2

0xc51f,	// (0x00019a9a) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0001cc94) popup_image_focus_window_t

0xc52d,	// (0x00019aa8) camera2_autofocus_pane_g1

0x95f3,	// (0x00016b6e) bg_tb_trans_pane_cp01

0xc53b,	// (0x00019ab6) popup_image_details_window_g1

0xc54e,	// (0x00019ac9) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0001cca6) popup_image_details_window_g

0xc577,	// (0x00019af2) popup_image_details_window_t1

0xc589,	// (0x00019b04) popup_image_details_window_t2

0xc5a2,	// (0x00019b1d) popup_image_details_window_t3

0xc5b6,	// (0x00019b31) popup_image_details_window_t4

0xc5d1,	// (0x00019b4c) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0001ccad) popup_image_details_window_t

0x9d66,	// (0x000172e1) bg_calc_paper_pane_ParamLimits

0x9589,	// (0x00016b04) grid_highlight_pane_cp013

0x9d7a,	// (0x000172f5) list_calc_pane_ParamLimits

0x9d8c,	// (0x00017307) scroll_pane_cp024

0x9d94,	// (0x0001730f) bg_calc_display_pane_ParamLimits

0x124b,	// (0x0000e7c6) calc_display_pane_t1_ParamLimits

0x125d,	// (0x0000e7d8) calc_display_pane_t2_ParamLimits

0x9da0,	// (0x0001731b) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001c6cc) calc_display_pane_t_ParamLimits

0x1307,	// (0x0000e882) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001c6e9) cell_calc_pane_g

0x1310,	// (0x0000e88b) cell_calc_pane_t1

0x9e17,	// (0x00017392) grid_highlight_pane_cp02_ParamLimits

0x9e2d,	// (0x000173a8) toolbar_button_pane_cp01_ParamLimits

0x9e2d,	// (0x000173a8) toolbar_button_pane_cp01

0xad9f,	// (0x0001831a) temp_image_control_pane_ParamLimits

0xad9f,	// (0x0001831a) temp_image_control_pane

0x95f3,	// (0x00016b6e) main_mp3_pane

0xc5eb,	// (0x00019b66) temp_image_control_pane_g1_ParamLimits

0xc5eb,	// (0x00019b66) temp_image_control_pane_g1

0xc5f9,	// (0x00019b74) temp_image_control_pane_g2_ParamLimits

0xc5f9,	// (0x00019b74) temp_image_control_pane_g2

0xc60b,	// (0x00019b86) temp_image_control_pane_g3_ParamLimits

0xc60b,	// (0x00019b86) temp_image_control_pane_g3

0x49bf,	// (0x00011f3a) temp_image_control_pane_g4_ParamLimits

0x49bf,	// (0x00011f3a) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0001ccb8) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0001ccb8) temp_image_control_pane_g

0xc5eb,	// (0x00019b66) main_mp3_pane_g1

0x49d0,	// (0x00011f4b) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0001ccc1) main_mp3_pane_g

0xc64e,	// (0x00019bc9) main_mp3_pane_t1

0x9fdb,	// (0x00017556) main_camera_pane_g8_ParamLimits

0x9fdb,	// (0x00017556) main_camera_pane_g8

0x1c3e,	// (0x0000f1b9) main_video_pane_g7_ParamLimits

0x1c3e,	// (0x0000f1b9) main_video_pane_g7

0xc01b,	// (0x00019596) main_camera2_pane_t7_ParamLimits

0xc01b,	// (0x00019596) main_camera2_pane_t7

0xa130,	// (0x000176ab) scroll_pane_cp025_ParamLimits

0xa130,	// (0x000176ab) scroll_pane_cp025

0xa144,	// (0x000176bf) scroll_pane_cp026_ParamLimits

0xa144,	// (0x000176bf) scroll_pane_cp026

0xa153,	// (0x000176ce) wml_content_pane_ParamLimits

0x9589,	// (0x00016b04) main_touch_calib_pane

0x4a92,	// (0x0001200d) main_touch_calib_pane_g1

0x4aa4,	// (0x0001201f) main_touch_calib_pane_g2

0x4ab6,	// (0x00012031) main_touch_calib_pane_g3

0x4ac8,	// (0x00012043) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0001ccdf) main_touch_calib_pane_g

0x4ada,	// (0x00012055) main_touch_calib_pane_t1

0x4af2,	// (0x0001206d) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0001cce8) main_touch_calib_pane_t

0xa935,	// (0x00017eb0) mup_progress_pane_cp02

0xa96a,	// (0x00017ee5) navi_pane_g1

0xaa23,	// (0x00017f9e) navi_pane_mp_t3

0x95f3,	// (0x00016b6e) main_mp3_pane_ParamLimits

0x3fdb,	// (0x00011556) navi_pane_ParamLimits

0xc5eb,	// (0x00019b66) main_mp3_pane_g1_ParamLimits

0x49d0,	// (0x00011f4b) main_mp3_pane_g2_ParamLimits

0x49dc,	// (0x00011f57) main_mp3_pane_g3_ParamLimits

0x49dc,	// (0x00011f57) main_mp3_pane_g3

0x49e8,	// (0x00011f63) main_mp3_pane_g4_ParamLimits

0x49e8,	// (0x00011f63) main_mp3_pane_g4

0xc61b,	// (0x00019b96) main_mp3_pane_g5_ParamLimits

0xc61b,	// (0x00019b96) main_mp3_pane_g5

0xc629,	// (0x00019ba4) main_mp3_pane_g6_ParamLimits

0xc629,	// (0x00019ba4) main_mp3_pane_g6

0xc636,	// (0x00019bb1) main_mp3_pane_g7_ParamLimits

0xc636,	// (0x00019bb1) main_mp3_pane_g7

0xc642,	// (0x00019bbd) main_mp3_pane_g8_ParamLimits

0xc642,	// (0x00019bbd) main_mp3_pane_g8

0xf746,	// (0x0001ccc1) main_mp3_pane_g_ParamLimits

0x49f4,	// (0x00011f6f) main_mp3_pane_t2

0x4a02,	// (0x00011f7d) main_mp3_pane_t3

0xc65c,	// (0x00019bd7) main_mp3_pane_t4

0xc66a,	// (0x00019be5) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0001ccd2) main_mp3_pane_t

0xc678,	// (0x00019bf3) mup_progress_pane_cp01

0x95a3,	// (0x00016b1e) aid_zoom_text_secondary2

0xc46f,	// (0x000199ea) list_cale_ev2_pane

0xc477,	// (0x000199f2) scroll_pane_cp023_ParamLimits

0x4b40,	// (0x000120bb) field_cale_ev2_pane_ParamLimits

0x4b40,	// (0x000120bb) field_cale_ev2_pane

0x4b58,	// (0x000120d3) field_cale_ev2_pane_g1_ParamLimits

0x4b58,	// (0x000120d3) field_cale_ev2_pane_g1

0x4b64,	// (0x000120df) field_cale_ev2_pane_g2_ParamLimits

0x4b64,	// (0x000120df) field_cale_ev2_pane_g2

0x4b7c,	// (0x000120f7) field_cale_ev2_pane_g3_ParamLimits

0x4b7c,	// (0x000120f7) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0001ccf3) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0001ccf3) field_cale_ev2_pane_g

0x4b94,	// (0x0001210f) field_cale_ev2_pane_t1_ParamLimits

0x4b94,	// (0x0001210f) field_cale_ev2_pane_t1

0x4bab,	// (0x00012126) field_cale_ev2_pane_t2_ParamLimits

0x4bab,	// (0x00012126) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0001ccfc) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0001ccfc) field_cale_ev2_pane_t

0x3621,	// (0x00010b9c) main_postcard_pane_g5_ParamLimits

0x3621,	// (0x00010b9c) main_postcard_pane_g5

0x3635,	// (0x00010bb0) main_postcard_pane_g6_ParamLimits

0x3635,	// (0x00010bb0) main_postcard_pane_g6

0x1a24,	// (0x0000ef9f) camera2_autofocus_pane_cp_ParamLimits

0x1a24,	// (0x0000ef9f) camera2_autofocus_pane_cp

0x95f3,	// (0x00016b6e) main_mup3_pane

0x4be0,	// (0x0001215b) main_mup3_pane_g1_ParamLimits

0x4be0,	// (0x0001215b) main_mup3_pane_g1

0x4c02,	// (0x0001217d) main_mup3_pane_g2_ParamLimits

0x4c02,	// (0x0001217d) main_mup3_pane_g2

0x4c75,	// (0x000121f0) main_mup3_pane_g3_ParamLimits

0x4c75,	// (0x000121f0) main_mup3_pane_g3

0x4cb3,	// (0x0001222e) main_mup3_pane_g4_ParamLimits

0x4cb3,	// (0x0001222e) main_mup3_pane_g4

0x4cf1,	// (0x0001226c) main_mup3_pane_g5_ParamLimits

0x4cf1,	// (0x0001226c) main_mup3_pane_g5

0x4d2f,	// (0x000122aa) main_mup3_pane_g6_ParamLimits

0x4d2f,	// (0x000122aa) main_mup3_pane_g6

0xc68c,	// (0x00019c07) main_mup3_pane_g7_ParamLimits

0xc68c,	// (0x00019c07) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0001cd0c) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0001cd0c) main_mup3_pane_g

0x4da3,	// (0x0001231e) main_mup3_pane_t1_ParamLimits

0x4da3,	// (0x0001231e) main_mup3_pane_t1

0x4e09,	// (0x00012384) main_mup3_pane_t2_ParamLimits

0x4e09,	// (0x00012384) main_mup3_pane_t2

0x4ecf,	// (0x0001244a) main_mup3_pane_t4_ParamLimits

0x4ecf,	// (0x0001244a) main_mup3_pane_t4

0x4f1d,	// (0x00012498) main_mup3_pane_t5_ParamLimits

0x4f1d,	// (0x00012498) main_mup3_pane_t5

0x4fcb,	// (0x00012546) main_mup3_pane_t6_ParamLimits

0x4fcb,	// (0x00012546) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0001cd1d) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0001cd1d) main_mup3_pane_t

0x507f,	// (0x000125fa) mup3_progress_pane_ParamLimits

0x507f,	// (0x000125fa) mup3_progress_pane

0x50fb,	// (0x00012676) popup_mup3_control_window_ParamLimits

0x50fb,	// (0x00012676) popup_mup3_control_window

0xc69a,	// (0x00019c15) popup_mup3_text_window

0x5129,	// (0x000126a4) mup3_progress_pane_t1

0x5147,	// (0x000126c2) mup3_progress_pane_t2

0xc6a2,	// (0x00019c1d) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0001cd2a) mup3_progress_pane_t

0xc6bf,	// (0x00019c3a) mup_progress_pane_cp03

0x9589,	// (0x00016b04) bg_tb_trans_pane_cp04

0x5165,	// (0x000126e0) mup3_volume_pane

0x516d,	// (0x000126e8) popup_mup3_control_window_g1

0xe25c,	// (0x0001b7d7) mup3_volume_pane_g1

0xe265,	// (0x0001b7e0) mup3_volume_pane_g2

0xe26e,	// (0x0001b7e9) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0001cd31) mup3_volume_pane_g

0x9589,	// (0x00016b04) bg_tb_trans_pane_cp03

0xc6cf,	// (0x00019c4a) popup_mup3_text_window_g1

0xc6d7,	// (0x00019c52) popup_mup3_text_window_t1

0x9dee,	// (0x00017369) list_calc_item_pane_g1_ParamLimits

0xc103,	// (0x0001967e) mup_volume_pane_cp_g1

0x4b0a,	// (0x00012085) main_touch_calib_pane_t3

0x4b1c,	// (0x00012097) main_touch_calib_pane_t4

0x4b2e,	// (0x000120a9) main_touch_calib_pane_t5

0x9593,	// (0x00016b0e) aid_cell_size_toolbar2

0x959b,	// (0x00016b16) aid_popup3_width_pane

0x95a3,	// (0x00016b1e) aid_zoom_text_msg_primary

0x1a03,	// (0x0000ef7e) vorec_t7

0x9db2,	// (0x0001732d) bg_calc_paper_pane_g1_ParamLimits

0x9dbe,	// (0x00017339) bg_calc_paper_pane_g2_ParamLimits

0x9dca,	// (0x00017345) bg_calc_paper_pane_g3_ParamLimits

0x9dd6,	// (0x00017351) bg_calc_paper_pane_g4_ParamLimits

0x9de2,	// (0x0001735d) bg_calc_paper_pane_g5_ParamLimits

0x12a2,	// (0x0000e81d) bg_calc_paper_pane_g6_ParamLimits

0x12b1,	// (0x0000e82c) bg_calc_paper_pane_g7_ParamLimits

0x12c0,	// (0x0000e83b) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001c6d3) bg_calc_paper_pane_g_ParamLimits

0x12cf,	// (0x0000e84a) calc_bg_paper_pane_g9_ParamLimits

0x1b56,	// (0x0000f0d1) image_qvga_pane_ParamLimits

0x1b56,	// (0x0000f0d1) image_qvga_pane

0x9ca1,	// (0x0001721c) bg_popup_sub_pane_cp04_ParamLimits

0xacd6,	// (0x00018251) popup_mup_playback_window_g1_ParamLimits

0xace2,	// (0x0001825d) popup_mup_playback_window_t1_ParamLimits

0xacf7,	// (0x00018272) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001ca5d) popup_mup_playback_window_t_ParamLimits

0x4666,	// (0x00011be1) main_mup2_pane_g3_ParamLimits

0x4666,	// (0x00011be1) main_mup2_pane_g3

0x1f33,	// (0x0000f4ae) popup_toolbar_window_cp04

0xb0b4,	// (0x0001862f) popup_call2_audio_second_window_g3_ParamLimits

0xb0b4,	// (0x0001862f) popup_call2_audio_second_window_g3

0xb4be,	// (0x00018a39) popup_call2_audio_first_window_g4_ParamLimits

0xb4be,	// (0x00018a39) popup_call2_audio_first_window_g4

0xbb3d,	// (0x000190b8) popup_call2_audio_in_window_g4_ParamLimits

0xbb3d,	// (0x000190b8) popup_call2_audio_in_window_g4

0x3740,	// (0x00010cbb) aid_area_sk_bg_cut_ParamLimits

0x3740,	// (0x00010cbb) aid_area_sk_bg_cut

0xad0c,	// (0x00018287) aid_area_sk_bg_cut_2_ParamLimits

0xad0c,	// (0x00018287) aid_area_sk_bg_cut_2

0x492e,	// (0x00011ea9) aid_placing_details_win

0x4936,	// (0x00011eb1) aid_placing_details_win_2

0xc52d,	// (0x00019aa8) camera2_autofocus_pane_g1_ParamLimits

0x0f1b,	// (0x0000e496) popup_fixed_preview_cale_window_ParamLimits

0x0f1b,	// (0x0000e496) popup_fixed_preview_cale_window

0xaaaa,	// (0x00018025) navi_slider_pane_g3

0xaab3,	// (0x0001802e) navi_slider_pane_g4

0xaabc,	// (0x00018037) navi_slider_pane_g5

0xaaaa,	// (0x00018025) navi_slider_pane_g6

0xaac5,	// (0x00018040) navi_slider_pane_g7

0xabcb,	// (0x00018146) mup_scale_pane_g3

0xabd4,	// (0x0001814f) mup_scale_pane_g4

0xabdd,	// (0x00018158) mup_scale_pane_g5

0x341f,	// (0x0001099a) mup_scale_pane_g6

0x3428,	// (0x000109a3) mup_scale_pane_g7

0xaaaa,	// (0x00018025) cams2_slider_pane_g3

0xc1b8,	// (0x00019733) cams2_slider_pane_g4

0xc1c0,	// (0x0001973b) cams2_slider_pane_g5

0xaaaa,	// (0x00018025) cams2_slider_pane_g6

0xc1c8,	// (0x00019743) cams2_slider_pane_g7

0xc3ec,	// (0x00019967) camera2_autofocus_pane_cp_g1

0xbede,	// (0x00019459) bg_popup_preview_window_pane_cp02_ParamLimits

0xbede,	// (0x00019459) bg_popup_preview_window_pane_cp02

0xc6e5,	// (0x00019c60) list_fp_cale_pane_ParamLimits

0xc6e5,	// (0x00019c60) list_fp_cale_pane

0xc6f1,	// (0x00019c6c) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6f1,	// (0x00019c6c) popup_fixed_preview_cale_window_t1

0x5176,	// (0x000126f1) popup_fixed_preview_cale_window_t2_ParamLimits

0x5176,	// (0x000126f1) popup_fixed_preview_cale_window_t2

0x518b,	// (0x00012706) popup_fixed_preview_cale_window_t3_ParamLimits

0x518b,	// (0x00012706) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0001cd38) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0001cd38) popup_fixed_preview_cale_window_t

0x51a0,	// (0x0001271b) list_single_fp_cale_pane_ParamLimits

0x51a0,	// (0x0001271b) list_single_fp_cale_pane

0xc70f,	// (0x00019c8a) list_single_fp_cale_pane_g1_ParamLimits

0xc70f,	// (0x00019c8a) list_single_fp_cale_pane_g1

0xc71b,	// (0x00019c96) list_single_fp_cale_pane_g2_ParamLimits

0xc71b,	// (0x00019c96) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0001cd3f) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0001cd3f) list_single_fp_cale_pane_g

0xc734,	// (0x00019caf) list_single_fp_cale_pane_t1_ParamLimits

0xc734,	// (0x00019caf) list_single_fp_cale_pane_t1

0xc746,	// (0x00019cc1) list_single_fp_cale_pane_t2_ParamLimits

0xc746,	// (0x00019cc1) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0001cd46) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0001cd46) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9589,	// (0x00016b04) main_dialer_pane

0x51b3,	// (0x0001272e) aid_cell_size_keypad

0x51bd,	// (0x00012738) dialer_ne_pane

0x51c5,	// (0x00012740) grid_dialer_command_1_pane

0x51cd,	// (0x00012748) grid_dialer_command_2_pane

0x51d5,	// (0x00012750) grid_dialer_keypad_pane

0x51e5,	// (0x00012760) bg_popup_call_pane_cp06_ParamLimits

0x51e5,	// (0x00012760) bg_popup_call_pane_cp06

0x51f1,	// (0x0001276c) dialer_ne_clear_pane_ParamLimits

0x51f1,	// (0x0001276c) dialer_ne_clear_pane

0xc779,	// (0x00019cf4) dialer_ne_pane_g1

0xc781,	// (0x00019cfc) dialer_ne_pane_t1_ParamLimits

0xc781,	// (0x00019cfc) dialer_ne_pane_t1

0x51fd,	// (0x00012778) dialer_ne_pane_t2_ParamLimits

0x51fd,	// (0x00012778) dialer_ne_pane_t2

0x5227,	// (0x000127a2) dialer_ne_pane_t3_ParamLimits

0x5227,	// (0x000127a2) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0001cd4b) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0001cd4b) dialer_ne_pane_t

0x5257,	// (0x000127d2) dialer_ne_pane_t3_copy1_ParamLimits

0x5257,	// (0x000127d2) dialer_ne_pane_t3_copy1

0x5286,	// (0x00012801) cell_dialer_keypad_pane_ParamLimits

0x5286,	// (0x00012801) cell_dialer_keypad_pane

0x529b,	// (0x00012816) cell_dialer_command_1_pane_ParamLimits

0x529b,	// (0x00012816) cell_dialer_command_1_pane

0x52b1,	// (0x0001282c) cell_dialer_command_2_pane_ParamLimits

0x52b1,	// (0x0001282c) cell_dialer_command_2_pane

0xc793,	// (0x00019d0e) bg_button_pane_cp02_ParamLimits

0xc793,	// (0x00019d0e) bg_button_pane_cp02

0x52c0,	// (0x0001283b) cell_dialer_keypad_pane_g1_ParamLimits

0x52c0,	// (0x0001283b) cell_dialer_keypad_pane_g1

0xc793,	// (0x00019d0e) bg_button_pane_cp03_ParamLimits

0xc793,	// (0x00019d0e) bg_button_pane_cp03

0x52d5,	// (0x00012850) cell_dialer_command_1_pane_g1_ParamLimits

0x52d5,	// (0x00012850) cell_dialer_command_1_pane_g1

0xc79f,	// (0x00019d1a) bg_button_pane_cp04

0x52e8,	// (0x00012863) cell_dialer_command_2_pane_g1

0x9fc9,	// (0x00017544) bg_button_pane_cp06

0xc7a7,	// (0x00019d22) dialer_ne_clear_pane_g1

0xa976,	// (0x00017ef1) navi_pane_g2

0xa9a4,	// (0x00017f1f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001c960) navi_pane_g

0xaa31,	// (0x00017fac) navi_pane_mv_g2

0xaa58,	// (0x00017fd3) navi_pane_mv_g5

0x302b,	// (0x000105a6) navi_pane_mv_t1

0x9d94,	// (0x0001730f) main_clock2_pane

0x532d,	// (0x000128a8) main_clock2_list_pane_ParamLimits

0x532d,	// (0x000128a8) main_clock2_list_pane

0x535f,	// (0x000128da) main_clock2_pane_t1_ParamLimits

0x535f,	// (0x000128da) main_clock2_pane_t1

0x5399,	// (0x00012914) main_clock2_pane_t2_ParamLimits

0x5399,	// (0x00012914) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0001cd57) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0001cd57) main_clock2_pane_t

0x542d,	// (0x000129a8) popup_clock_analogue_window_cp03_ParamLimits

0x542d,	// (0x000129a8) popup_clock_analogue_window_cp03

0x5451,	// (0x000129cc) popup_clock_digital_window_cp02_ParamLimits

0x5451,	// (0x000129cc) popup_clock_digital_window_cp02

0x54c2,	// (0x00012a3d) main_clock2_list_single_pane_ParamLimits

0x54c2,	// (0x00012a3d) main_clock2_list_single_pane

0x9fc9,	// (0x00017544) list_highlight_pane_cp05

0xc7df,	// (0x00019d5a) main_clock2_list_single_pane_t1

0x1f33,	// (0x0000f4ae) popup_toolbar_window_cp04_ParamLimits

0x498f,	// (0x00011f0a) camera2_autofocus_pane_g2_ParamLimits

0x498f,	// (0x00011f0a) camera2_autofocus_pane_g2

0x499b,	// (0x00011f16) camera2_autofocus_pane_g3_ParamLimits

0x499b,	// (0x00011f16) camera2_autofocus_pane_g3

0x49a7,	// (0x00011f22) camera2_autofocus_pane_g4_ParamLimits

0x49a7,	// (0x00011f22) camera2_autofocus_pane_g4

0x49b3,	// (0x00011f2e) camera2_autofocus_pane_g5_ParamLimits

0x49b3,	// (0x00011f2e) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0001cc9b) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0001cc9b) camera2_autofocus_pane_g

0x4bc0,	// (0x0001213b) camera2_autofocus_pane_cp_g2

0x4bc8,	// (0x00012143) camera2_autofocus_pane_cp_g3

0x4bd0,	// (0x0001214b) camera2_autofocus_pane_cp_g4

0x4bd8,	// (0x00012153) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0001cd01) camera2_autofocus_pane_cp_g

0x51dd,	// (0x00012758) popup_dialer_spcha_window

0x9589,	// (0x00016b04) bg_popup_sub_pane_cp07

0xc7ed,	// (0x00019d68) list_spcha_pane

0xc7f5,	// (0x00019d70) list_single_spcha_pane_ParamLimits

0xc7f5,	// (0x00019d70) list_single_spcha_pane

0x9589,	// (0x00016b04) list_highlight_pane_cp06

0xc806,	// (0x00019d81) list_single_spcha_pane_t1

0xb8e7,	// (0x00018e62) popup_call2_audio_out_window_g4_ParamLimits

0xb8e7,	// (0x00018e62) popup_call2_audio_out_window_g4

0x9589,	// (0x00016b04) main_imed2_pane

0xbf08,	// (0x00019483) popup_imed_adjust2_window

0x3e94,	// (0x0001140f) popup_imed_trans_window_ParamLimits

0x3e94,	// (0x0001140f) popup_imed_trans_window

0xc230,	// (0x000197ab) popup_blid_sat_info2_window_t1

0xc23e,	// (0x000197b9) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0001cc30) popup_blid_sat_info2_window_t

0x556c,	// (0x00012ae7) aid_size_cell_colour_35

0x558c,	// (0x00012b07) aid_size_cell_colour_112

0x55ac,	// (0x00012b27) aid_size_cell_effect

0xbeea,	// (0x00019465) bg_tb_trans_pane_cp02

0xa4b7,	// (0x00017a32) heading_imed_pane

0x55cb,	// (0x00012b46) listscroll_imed_pane

0xc814,	// (0x00019d8f) heading_imed_pane_g1

0xc81c,	// (0x00019d97) heading_imed_pane_t1

0xc82a,	// (0x00019da5) grid_imed_colour_35_pane_ParamLimits

0xc82a,	// (0x00019da5) grid_imed_colour_35_pane

0x55d7,	// (0x00012b52) grid_imed_effect_pane

0xc83d,	// (0x00019db8) list_imed_aspect_pane

0x55ec,	// (0x00012b67) scroll_pane_cp027_ParamLimits

0x55ec,	// (0x00012b67) scroll_pane_cp027

0x55fd,	// (0x00012b78) cell_imed_effect_pane_ParamLimits

0x55fd,	// (0x00012b78) cell_imed_effect_pane

0xc845,	// (0x00019dc0) cell_imed_colour_pane_ParamLimits

0xc845,	// (0x00019dc0) cell_imed_colour_pane

0xc87f,	// (0x00019dfa) cell_imed_colour_pane_g1_ParamLimits

0xc87f,	// (0x00019dfa) cell_imed_colour_pane_g1

0xc890,	// (0x00019e0b) hgihlgiht_grid_pane_cp016_ParamLimits

0xc890,	// (0x00019e0b) hgihlgiht_grid_pane_cp016

0x5622,	// (0x00012b9d) cell_imed_effect_pane_g1

0x562a,	// (0x00012ba5) grid_highlight_pane_cp017

0xc8a0,	// (0x00019e1b) list_imed_single_pane_ParamLimits

0xc8a0,	// (0x00019e1b) list_imed_single_pane

0x9589,	// (0x00016b04) list_highlight_pane_cp07

0xc8b3,	// (0x00019e2e) list_imed_aspect_pane_comp1_t1

0xbeea,	// (0x00019465) bg_tb_trans_pane_cp05

0xc8d3,	// (0x00019e4e) popup_imed_adjust2_window_g1

0xc8fa,	// (0x00019e75) popup_imed_adjust2_window_t1

0xc912,	// (0x00019e8d) slider_imed_adjust_pane

0xc926,	// (0x00019ea1) slider_imed_adjust_pane_g1

0xc936,	// (0x00019eb1) slider_imed_adjust_pane_g2

0xc946,	// (0x00019ec1) slider_imed_adjust_pane_g3

0xc957,	// (0x00019ed2) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0001cd74) slider_imed_adjust_pane_g

0x5633,	// (0x00012bae) aid_size_cell_clipart2

0x563e,	// (0x00012bb9) grid_imed_clipart_pane

0xc968,	// (0x00019ee3) scroll_pane_cp031

0x5648,	// (0x00012bc3) cell_imed_clipart_pane_ParamLimits

0x5648,	// (0x00012bc3) cell_imed_clipart_pane

0x565d,	// (0x00012bd8) cell_imed_clipart_pane_g1

0x9589,	// (0x00016b04) grid_highlight_pane_cp014

0x5340,	// (0x000128bb) main_clock2_pane_g1_ParamLimits

0x5340,	// (0x000128bb) main_clock2_pane_g1

0x546d,	// (0x000129e8) aid_call2_pane_cp10

0x547f,	// (0x000129fa) aid_call_pane_cp10

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g1

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g2

0x5491,	// (0x00012a0c) popup_clock_analogue_window_cp10_g3

0x5491,	// (0x00012a0c) popup_clock_analogue_window_cp10_g4

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0001cd62) popup_clock_analogue_window_cp10_g

0x54a3,	// (0x00012a1e) popup_clock_analogue_window_cp10_t1

0x54d4,	// (0x00012a4f) clock_digital_number_pane_cp10_ParamLimits

0x54d4,	// (0x00012a4f) clock_digital_number_pane_cp10

0x54ec,	// (0x00012a67) clock_digital_number_pane_cp11_ParamLimits

0x54ec,	// (0x00012a67) clock_digital_number_pane_cp11

0x5504,	// (0x00012a7f) clock_digital_number_pane_cp12_ParamLimits

0x5504,	// (0x00012a7f) clock_digital_number_pane_cp12

0x551c,	// (0x00012a97) clock_digital_number_pane_cp13_ParamLimits

0x551c,	// (0x00012a97) clock_digital_number_pane_cp13

0x5534,	// (0x00012aaf) clock_digital_separator_pane_cp10_ParamLimits

0x5534,	// (0x00012aaf) clock_digital_separator_pane_cp10

0x554c,	// (0x00012ac7) popup_clock_digital_window_cp02_t1_ParamLimits

0x554c,	// (0x00012ac7) popup_clock_digital_window_cp02_t1

0x9c99,	// (0x00017214) clock_digital_number_pane_cp10_g1

0x9c99,	// (0x00017214) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0001cd7d) clock_digital_number_pane_cp10_g

0x9c99,	// (0x00017214) clock_digital_separator_pane_cp10_g1

0x9c99,	// (0x00017214) clock_digital_separator_pane_g2_cp10

0xaa60,	// (0x00017fdb) navi_pane_vded_g4

0xaa69,	// (0x00017fe4) navi_pane_vded_g5

0xaa72,	// (0x00017fed) navi_pane_vded_t1

0x9589,	// (0x00016b04) main_vded_pane

0x5666,	// (0x00012be1) main_vded_pane_g1

0x566e,	// (0x00012be9) main_vded_pane_g2

0x5676,	// (0x00012bf1) main_vded_pane_g3

0x0002,

0xf807,	// (0x0001cd82) main_vded_pane_g

0x567e,	// (0x00012bf9) main_vded_pane_t1

0x568c,	// (0x00012c07) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0001cd89) main_vded_pane_t

0x569a,	// (0x00012c15) vded_slider_pane

0x56a2,	// (0x00012c1d) vded_video_pane

0xc970,	// (0x00019eeb) vded_video_pane_g1

0x56aa,	// (0x00012c25) vded_video_pane_g2

0xc3ec,	// (0x00019967) vded_video_pane_g3

0x0002,

0xf813,	// (0x0001cd8e) vded_video_pane_g

0xc97a,	// (0x00019ef5) vded_slider_pane_g1

0xc103,	// (0x0001967e) vded_slider_pane_g2

0xc983,	// (0x00019efe) vded_slider_pane_g3

0xc98c,	// (0x00019f07) vded_slider_pane_g4

0xc995,	// (0x00019f10) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0001cd95) vded_slider_pane_g

0x50e5,	// (0x00012660) mup3_rocker_pane_ParamLimits

0x50e5,	// (0x00012660) mup3_rocker_pane

0x56b3,	// (0x00012c2e) mup3_control_keys_pane_g1

0x56bb,	// (0x00012c36) mup3_control_keys_pane_g2

0x56c3,	// (0x00012c3e) mup3_control_keys_pane_g3

0x56cb,	// (0x00012c46) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0001cda0) mup3_control_keys_pane_g

0x0f52,	// (0x0000e4cd) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f52,	// (0x0000e4cd) popup_toolbar2_fixed_window_cp01

0x5113,	// (0x0001268e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5113,	// (0x0001268e) popup_toolbar2_fixed_window_cp02

0xb226,	// (0x000187a1) popup_call2_audio_second_window_t4_ParamLimits

0xb226,	// (0x000187a1) popup_call2_audio_second_window_t4

0xb754,	// (0x00018ccf) popup_call2_audio_first_window_t6_ParamLimits

0xb754,	// (0x00018ccf) popup_call2_audio_first_window_t6

0xb9ea,	// (0x00018f65) popup_call2_audio_out_window_t6_ParamLimits

0xb9ea,	// (0x00018f65) popup_call2_audio_out_window_t6

0x9589,	// (0x00016b04) main_vitu_pane

0x56db,	// (0x00012c56) aid_size_cell_itu_ParamLimits

0x56db,	// (0x00012c56) aid_size_cell_itu

0x95f3,	// (0x00016b6e) bg_popup_window_pane_cp08_ParamLimits

0x95f3,	// (0x00016b6e) bg_popup_window_pane_cp08

0x56f1,	// (0x00012c6c) field_vitu_entry_pane_ParamLimits

0x56f1,	// (0x00012c6c) field_vitu_entry_pane

0x5704,	// (0x00012c7f) grid_vitu_function_pane_ParamLimits

0x5704,	// (0x00012c7f) grid_vitu_function_pane

0x5719,	// (0x00012c94) grid_vitu_itu_pane_ParamLimits

0x5719,	// (0x00012c94) grid_vitu_itu_pane

0x572f,	// (0x00012caa) cell_vitu_itu_pane_ParamLimits

0x572f,	// (0x00012caa) cell_vitu_itu_pane

0x5751,	// (0x00012ccc) cell_vitu_function_pane_ParamLimits

0x5751,	// (0x00012ccc) cell_vitu_function_pane

0x95f3,	// (0x00016b6e) bg_popup_sub_pane_cp08_ParamLimits

0x95f3,	// (0x00016b6e) bg_popup_sub_pane_cp08

0x576a,	// (0x00012ce5) field_vitu_entry_pane_t1_ParamLimits

0x576a,	// (0x00012ce5) field_vitu_entry_pane_t1

0xc9b6,	// (0x00019f31) field_vitu_entry_pane_t2_ParamLimits

0xc9b6,	// (0x00019f31) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0001cdae) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0001cdae) field_vitu_entry_pane_t

0xc9d3,	// (0x00019f4e) bg_button_pane_cp05_ParamLimits

0xc9d3,	// (0x00019f4e) bg_button_pane_cp05

0x5786,	// (0x00012d01) cell_vitu_itu_pane_g1

0x579e,	// (0x00012d19) cell_vitu_itu_pane_t1_ParamLimits

0x579e,	// (0x00012d19) cell_vitu_itu_pane_t1

0x57b0,	// (0x00012d2b) cell_vitu_itu_pane_t2_ParamLimits

0x57b0,	// (0x00012d2b) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0001cdb3) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0001cdb3) cell_vitu_itu_pane_t

0xc9e1,	// (0x00019f5c) bg_button_pane_cp07

0x57e5,	// (0x00012d60) cell_vitu_function_pane_g1

0x9d34,	// (0x000172af) main_calc_pane_g1

0x0d9d,	// (0x0000e318) aid_visual_content_pane

0x9589,	// (0x00016b04) main_vradio_pane

0x57ee,	// (0x00012d69) main_vradio_pane_g1_ParamLimits

0x57ee,	// (0x00012d69) main_vradio_pane_g1

0xc9eb,	// (0x00019f66) main_vradio_pane_g2_ParamLimits

0xc9eb,	// (0x00019f66) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0001cdba) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0001cdba) main_vradio_pane_g

0x5804,	// (0x00012d7f) main_vradio_pane_t1_ParamLimits

0x5804,	// (0x00012d7f) main_vradio_pane_t1

0x5819,	// (0x00012d94) main_vradio_pane_t2_ParamLimits

0x5819,	// (0x00012d94) main_vradio_pane_t2

0xc9f8,	// (0x00019f73) main_vradio_pane_t3_ParamLimits

0xc9f8,	// (0x00019f73) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0001cdbf) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0001cdbf) main_vradio_pane_t

0x582e,	// (0x00012da9) vradio_rocker_control_pane_ParamLimits

0x582e,	// (0x00012da9) vradio_rocker_control_pane

0x5840,	// (0x00012dbb) vradio_station_info_pane_ParamLimits

0x5840,	// (0x00012dbb) vradio_station_info_pane

0xca0a,	// (0x00019f85) vradio_frequency_info_pane_ParamLimits

0xca0a,	// (0x00019f85) vradio_frequency_info_pane

0xc3ec,	// (0x00019967) vradio_station_info_pane_g1

0xca19,	// (0x00019f94) vradio_station_info_pane_t1_ParamLimits

0xca19,	// (0x00019f94) vradio_station_info_pane_t1

0xca3b,	// (0x00019fb6) vradio_station_info_pane_t2_ParamLimits

0xca3b,	// (0x00019fb6) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0001cdc6) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0001cdc6) vradio_station_info_pane_t

0xca4d,	// (0x00019fc8) vradio_tuning_pane

0xca55,	// (0x00019fd0) vradio_rocker_control_pane_g1

0xca5d,	// (0x00019fd8) vradio_rocker_control_pane_g2

0xca65,	// (0x00019fe0) vradio_rocker_control_pane_g3

0xca6d,	// (0x00019fe8) vradio_rocker_control_pane_g4

0xca75,	// (0x00019ff0) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0001cdcb) vradio_rocker_control_pane_g

0x5850,	// (0x00012dcb) vradio_frequency_info_pane_g1

0xca7d,	// (0x00019ff8) vradio_frequency_info_pane_t1_ParamLimits

0xca7d,	// (0x00019ff8) vradio_frequency_info_pane_t1

0x585a,	// (0x00012dd5) vradio_tuning_pane_g1

0x5863,	// (0x00012dde) vradio_tuning_pane_t1

0x95b3,	// (0x00016b2e) area_side_right_pane_ParamLimits

0x95b3,	// (0x00016b2e) area_side_right_pane

0xbea5,	// (0x00019420) status_small_pane_g1

0xbead,	// (0x00019428) status_small_pane_g2

0xbeb6,	// (0x00019431) status_small_pane_g3

0xbebf,	// (0x0001943a) status_small_pane_g4

0x0003,

0xf60b,	// (0x0001cb86) status_small_pane_g

0xbec8,	// (0x00019443) status_small_pane_t1

0x9589,	// (0x00016b04) main_video3_pane

0xca91,	// (0x0001a00c) cams_zoom_vslider_pane

0xca99,	// (0x0001a014) image3_wide_pane_ParamLimits

0xca99,	// (0x0001a014) image3_wide_pane

0xcab3,	// (0x0001a02e) image3_wide_small_pane

0xcabd,	// (0x0001a038) main_video3_pane_g1_ParamLimits

0xcabd,	// (0x0001a038) main_video3_pane_g1

0xcad9,	// (0x0001a054) main_video3_pane_g2_ParamLimits

0xcad9,	// (0x0001a054) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0001cdd6) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0001cdd6) main_video3_pane_g

0xcaf5,	// (0x0001a070) main_video3_pane_t1_ParamLimits

0xcaf5,	// (0x0001a070) main_video3_pane_t1

0xcb20,	// (0x0001a09b) main_video3_pane_t2_ParamLimits

0xcb20,	// (0x0001a09b) main_video3_pane_t2

0xcb4b,	// (0x0001a0c6) main_video3_pane_t3_ParamLimits

0xcb4b,	// (0x0001a0c6) main_video3_pane_t3

0x0002,

0xf860,	// (0x0001cddb) main_video3_pane_t_ParamLimits

0xf860,	// (0x0001cddb) main_video3_pane_t

0xcb76,	// (0x0001a0f1) cams_zoom_vslider_pane_g1

0xcb7f,	// (0x0001a0fa) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0001cde2) cams_zoom_vslider_pane_g

0xcb87,	// (0x0001a102) small_slider_vertical_pane

0xc3ec,	// (0x00019967) small_slider_vertical_pane_g1

0xc3ec,	// (0x00019967) small_slider_vertical_pane_g2

0xcb8f,	// (0x0001a10a) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0001cde7) small_slider_vertical_pane_g

0x9589,	// (0x00016b04) main_hwr_training_pane

0xcb98,	// (0x0001a113) hwr_training_instruct_pane_ParamLimits

0xcb98,	// (0x0001a113) hwr_training_instruct_pane

0x5872,	// (0x00012ded) hwr_training_navi_pane_ParamLimits

0x5872,	// (0x00012ded) hwr_training_navi_pane

0x5889,	// (0x00012e04) hwr_training_write_pane_ParamLimits

0x5889,	// (0x00012e04) hwr_training_write_pane

0x9589,	// (0x00016b04) bg_frame_shadow_pane

0xcbc7,	// (0x0001a142) hwr_training_write_pane_g1

0xcbcf,	// (0x0001a14a) hwr_training_write_pane_g2

0xcbd7,	// (0x0001a152) hwr_training_write_pane_g3

0xcbdf,	// (0x0001a15a) hwr_training_write_pane_g4

0xcbe7,	// (0x0001a162) hwr_training_write_pane_g5

0xcbef,	// (0x0001a16a) hwr_training_write_pane_g6

0xcbf7,	// (0x0001a172) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0001cdee) hwr_training_write_pane_g

0xcbff,	// (0x0001a17a) hwr_training_navi_pane_g1_ParamLimits

0xcbff,	// (0x0001a17a) hwr_training_navi_pane_g1

0xcc11,	// (0x0001a18c) hwr_training_navi_pane_g2_ParamLimits

0xcc11,	// (0x0001a18c) hwr_training_navi_pane_g2

0xcc23,	// (0x0001a19e) hwr_training_navi_pane_g3_ParamLimits

0xcc23,	// (0x0001a19e) hwr_training_navi_pane_g3

0xcc33,	// (0x0001a1ae) hwr_training_navi_pane_g4_ParamLimits

0xcc33,	// (0x0001a1ae) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0001cdfd) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0001cdfd) hwr_training_navi_pane_g

0xcc40,	// (0x0001a1bb) hwr_training_navi_pane_t1

0x58c9,	// (0x00012e44) list_single_hwr_training_instruct_pane_ParamLimits

0x58c9,	// (0x00012e44) list_single_hwr_training_instruct_pane

0xcc4e,	// (0x0001a1c9) list_single_hwr_training_instruct_pane_t1

0xc32c,	// (0x000198a7) bg_frame_shadow_pane_g1

0xcc5d,	// (0x0001a1d8) bg_frame_shadow_pane_g2

0xcc65,	// (0x0001a1e0) bg_frame_shadow_pane_g3

0xcc6d,	// (0x0001a1e8) bg_frame_shadow_pane_g4

0xcc75,	// (0x0001a1f0) bg_frame_shadow_pane_g5

0xcc7d,	// (0x0001a1f8) bg_frame_shadow_pane_g6

0xcc85,	// (0x0001a200) bg_frame_shadow_pane_g7

0x9e8d,	// (0x00017408) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0001ce08) bg_frame_shadow_pane_g

0x9589,	// (0x00016b04) main_video_tele_dialer_pane

0x58dc,	// (0x00012e57) aid_size_cell_video_keypad_ParamLimits

0x58dc,	// (0x00012e57) aid_size_cell_video_keypad

0x58f6,	// (0x00012e71) grid_video_dialer_keypad_pane_ParamLimits

0x58f6,	// (0x00012e71) grid_video_dialer_keypad_pane

0x5938,	// (0x00012eb3) video_down_pane_cp_ParamLimits

0x5938,	// (0x00012eb3) video_down_pane_cp

0x5968,	// (0x00012ee3) cell_video_dialer_keypad_pane_ParamLimits

0x5968,	// (0x00012ee3) cell_video_dialer_keypad_pane

0xcc8d,	// (0x0001a208) bg_button_pane_cp08_ParamLimits

0xcc8d,	// (0x0001a208) bg_button_pane_cp08

0x598a,	// (0x00012f05) cell_video_dialer_keypad_pane_g1_ParamLimits

0x598a,	// (0x00012f05) cell_video_dialer_keypad_pane_g1

0x50cf,	// (0x0001264a) mup3_rocker2_pane_ParamLimits

0x50cf,	// (0x0001264a) mup3_rocker2_pane

0xc3ec,	// (0x00019967) mup3_rocker2_pane_g1

0x3d85,	// (0x00011300) main_dialer2_pane

0x9589,	// (0x00016b04) main_mp4_pane

0xcca1,	// (0x0001a21c) main_mp4_pane_g1_ParamLimits

0xcca1,	// (0x0001a21c) main_mp4_pane_g1

0xcca1,	// (0x0001a21c) main_mp4_pane_g2_ParamLimits

0xcca1,	// (0x0001a21c) main_mp4_pane_g2

0x59c5,	// (0x00012f40) main_mp4_pane_g3_ParamLimits

0x59c5,	// (0x00012f40) main_mp4_pane_g3

0xccbd,	// (0x0001a238) main_mp4_pane_g4_ParamLimits

0xccbd,	// (0x0001a238) main_mp4_pane_g4

0xcce5,	// (0x0001a260) main_mp4_pane_g5_ParamLimits

0xcce5,	// (0x0001a260) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0001ce28) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0001ce28) main_mp4_pane_g

0xcd35,	// (0x0001a2b0) main_mp4_pane_t1_ParamLimits

0xcd35,	// (0x0001a2b0) main_mp4_pane_t1

0xcd8d,	// (0x0001a308) main_mp4_pane_t2_ParamLimits

0xcd8d,	// (0x0001a308) main_mp4_pane_t2

0xcddf,	// (0x0001a35a) main_mp4_pane_t3_ParamLimits

0xcddf,	// (0x0001a35a) main_mp4_pane_t3

0xcdff,	// (0x0001a37a) main_mp4_pane_t4_ParamLimits

0xcdff,	// (0x0001a37a) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001ce35) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001ce35) main_mp4_pane_t

0xce3f,	// (0x0001a3ba) mp4_progress_pane_ParamLimits

0xce3f,	// (0x0001a3ba) mp4_progress_pane

0xce89,	// (0x0001a404) mp4_rocker_pane_ParamLimits

0xce89,	// (0x0001a404) mp4_rocker_pane

0xceaf,	// (0x0001a42a) mp4_progress_pane_t1

0xcec6,	// (0x0001a441) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001ce3e) mp4_progress_pane_t

0xcedd,	// (0x0001a458) mup_progress_pane_cp04

0xc3ec,	// (0x00019967) mp4_rocker_pane_g1

0x59f5,	// (0x00012f70) aid_cell_size_keypad2_ParamLimits

0x59f5,	// (0x00012f70) aid_cell_size_keypad2

0x5a0b,	// (0x00012f86) dialer2_ne_pane_ParamLimits

0x5a0b,	// (0x00012f86) dialer2_ne_pane

0x5a1f,	// (0x00012f9a) grid_dialer2_keypad_pane_ParamLimits

0x5a1f,	// (0x00012f9a) grid_dialer2_keypad_pane

0xc1d9,	// (0x00019754) bg_popup_call_pane_cp07_ParamLimits

0xc1d9,	// (0x00019754) bg_popup_call_pane_cp07

0x5a35,	// (0x00012fb0) dialer2_ne_pane_t1_ParamLimits

0x5a35,	// (0x00012fb0) dialer2_ne_pane_t1

0x5a6f,	// (0x00012fea) cell_dialer2_keypad_pane_ParamLimits

0x5a6f,	// (0x00012fea) cell_dialer2_keypad_pane

0xcefb,	// (0x0001a476) bg_button_pane_pane_cp04_ParamLimits

0xcefb,	// (0x0001a476) bg_button_pane_pane_cp04

0x5a91,	// (0x0001300c) cell_dialer2_keypad_pane_g1_ParamLimits

0x5a91,	// (0x0001300c) cell_dialer2_keypad_pane_g1

0x1e24,	// (0x0000f39f) aid_placing_vt_set_content_ParamLimits

0x1e24,	// (0x0000f39f) aid_placing_vt_set_content

0x1e46,	// (0x0000f3c1) aid_placing_vt_set_title_ParamLimits

0x1e46,	// (0x0000f3c1) aid_placing_vt_set_title

0x9589,	// (0x00016b04) main_image3_pane

0x5b3d,	// (0x000130b8) area_side_right_pane_cp01_ParamLimits

0x5b3d,	// (0x000130b8) area_side_right_pane_cp01

0xcca1,	// (0x0001a21c) main_image3_pane_g1_ParamLimits

0xcca1,	// (0x0001a21c) main_image3_pane_g1

0x5b54,	// (0x000130cf) main_image3_pane_g2_ParamLimits

0x5b54,	// (0x000130cf) main_image3_pane_g2

0x5b7a,	// (0x000130f5) main_image3_pane_g3_ParamLimits

0x5b7a,	// (0x000130f5) main_image3_pane_g3

0x5ba0,	// (0x0001311b) main_image3_pane_g4_ParamLimits

0x5ba0,	// (0x0001311b) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001ce4d) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001ce4d) main_image3_pane_g

0x5bc6,	// (0x00013141) main_image3_pane_t1_ParamLimits

0x5bc6,	// (0x00013141) main_image3_pane_t1

0x5c1e,	// (0x00013199) main_image3_pane_t2_ParamLimits

0x5c1e,	// (0x00013199) main_image3_pane_t2

0x5c70,	// (0x000131eb) main_image3_pane_t3_ParamLimits

0x5c70,	// (0x000131eb) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001ce56) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001ce56) main_image3_pane_t

0x95f3,	// (0x00016b6e) grid_sctrl_middle_pane_cp01_ParamLimits

0x95f3,	// (0x00016b6e) grid_sctrl_middle_pane_cp01

0x5cf0,	// (0x0001326b) cell_sctrl_middle_pane_cp01_ParamLimits

0x5cf0,	// (0x0001326b) cell_sctrl_middle_pane_cp01

0x5d0d,	// (0x00013288) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d0d,	// (0x00013288) cell_sctrl_middle_pane_cp01_g1

0x9589,	// (0x00016b04) main_call4_pane

0x5d23,	// (0x0001329e) aid_size_button_call4_ParamLimits

0x5d23,	// (0x0001329e) aid_size_button_call4

0x5d52,	// (0x000132cd) call4_windows_pane_ParamLimits

0x5d52,	// (0x000132cd) call4_windows_pane

0x5d6e,	// (0x000132e9) grid_call4_button_pane_ParamLimits

0x5d6e,	// (0x000132e9) grid_call4_button_pane

0xcf39,	// (0x0001a4b4) call4_windows_conf_pane

0x5d8d,	// (0x00013308) popup_call4_audio_first_window_ParamLimits

0x5d8d,	// (0x00013308) popup_call4_audio_first_window

0x5dad,	// (0x00013328) popup_call4_audio_second_window_ParamLimits

0x5dad,	// (0x00013328) popup_call4_audio_second_window

0xcf6c,	// (0x0001a4e7) popup_call4_audio_wait_window_ParamLimits

0xcf6c,	// (0x0001a4e7) popup_call4_audio_wait_window

0x5dbf,	// (0x0001333a) cell_call4_button_pane_ParamLimits

0x5dbf,	// (0x0001333a) cell_call4_button_pane

0x5de4,	// (0x0001335f) bg_button_pane_cp09_ParamLimits

0x5de4,	// (0x0001335f) bg_button_pane_cp09

0x5df0,	// (0x0001336b) cell_call4_button_pane_g1_ParamLimits

0x5df0,	// (0x0001336b) cell_call4_button_pane_g1

0x5e16,	// (0x00013391) cell_call4_button_pane_t1_ParamLimits

0x5e16,	// (0x00013391) cell_call4_button_pane_t1

0xcfb2,	// (0x0001a52d) popup_call4_audio_conf_window_ParamLimits

0xcfb2,	// (0x0001a52d) popup_call4_audio_conf_window

0x5129,	// (0x000126a4) mup3_progress_pane_t1_ParamLimits

0x5147,	// (0x000126c2) mup3_progress_pane_t2_ParamLimits

0xc6a2,	// (0x00019c1d) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0001cd2a) mup3_progress_pane_t_ParamLimits

0xc6bf,	// (0x00019c3a) mup_progress_pane_cp03_ParamLimits

0x56d3,	// (0x00012c4e) mup3_control_keys_pane_g4_copy1

0xce6d,	// (0x0001a3e8) mp4_rocker2_pane_ParamLimits

0xce6d,	// (0x0001a3e8) mp4_rocker2_pane

0xcfc6,	// (0x0001a541) mp4_rocker2_pane_g1

0xcfce,	// (0x0001a549) mp4_rocker2_pane_g2

0xcfd6,	// (0x0001a551) mp4_rocker2_pane_g3

0xcfde,	// (0x0001a559) mp4_rocker2_pane_g4

0xcfe6,	// (0x0001a561) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001ce5f) mp4_rocker2_pane_g

0x9589,	// (0x00016b04) main_camera4_pane

0x9589,	// (0x00016b04) main_video4_pane

0x590a,	// (0x00012e85) main_video_tele_dialer_pane_t1_ParamLimits

0x590a,	// (0x00012e85) main_video_tele_dialer_pane_t1

0x5921,	// (0x00012e9c) main_video_tele_dialer_pane_t2_ParamLimits

0x5921,	// (0x00012e9c) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0001ce19) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0001ce19) main_video_tele_dialer_pane_t

0x5e54,	// (0x000133cf) cam4_autofocus_pane_ParamLimits

0x5e54,	// (0x000133cf) cam4_autofocus_pane

0x5e68,	// (0x000133e3) cam4_image_uncrop_pane_ParamLimits

0x5e68,	// (0x000133e3) cam4_image_uncrop_pane

0x5e7f,	// (0x000133fa) cam4_indicators_pane_ParamLimits

0x5e7f,	// (0x000133fa) cam4_indicators_pane

0x5ea4,	// (0x0001341f) main_camera4_pane_g1_ParamLimits

0x5ea4,	// (0x0001341f) main_camera4_pane_g1

0x5eb6,	// (0x00013431) main_camera4_pane_g2_ParamLimits

0x5eb6,	// (0x00013431) main_camera4_pane_g2

0x5ec9,	// (0x00013444) main_camera4_pane_g3_ParamLimits

0x5ec9,	// (0x00013444) main_camera4_pane_g3

0x5edc,	// (0x00013457) main_camera4_pane_g4_ParamLimits

0x5edc,	// (0x00013457) main_camera4_pane_g4

0x5eef,	// (0x0001346a) main_camera4_pane_g5_ParamLimits

0x5eef,	// (0x0001346a) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001ce6a) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001ce6a) main_camera4_pane_g

0x5f13,	// (0x0001348e) main_camera4_pane_t1_ParamLimits

0x5f13,	// (0x0001348e) main_camera4_pane_t1

0xc61b,	// (0x00019b96) bg_tb_trans_pane_cp06

0xd010,	// (0x0001a58b) cam4_indicators_pane_g1

0xd021,	// (0x0001a59c) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001ce85) cam4_indicators_pane_g

0xd039,	// (0x0001a5b4) cam4_indicators_pane_t1

0x5f6b,	// (0x000134e6) main_video4_pane_g1_ParamLimits

0x5f6b,	// (0x000134e6) main_video4_pane_g1

0x5f7a,	// (0x000134f5) main_video4_pane_g2_ParamLimits

0x5f7a,	// (0x000134f5) main_video4_pane_g2

0x5f89,	// (0x00013504) main_video4_pane_g3_ParamLimits

0x5f89,	// (0x00013504) main_video4_pane_g3

0x5f98,	// (0x00013513) main_video4_pane_g4_ParamLimits

0x5f98,	// (0x00013513) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001ce8c) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001ce8c) main_video4_pane_g

0x5fb6,	// (0x00013531) vid4_indicators_pane_ParamLimits

0x5fb6,	// (0x00013531) vid4_indicators_pane

0x5fde,	// (0x00013559) video4_image_uncrop_cif_pane_ParamLimits

0x5fde,	// (0x00013559) video4_image_uncrop_cif_pane

0x5ff6,	// (0x00013571) video4_image_uncrop_nhd_pane_ParamLimits

0x5ff6,	// (0x00013571) video4_image_uncrop_nhd_pane

0x5e68,	// (0x000133e3) video4_image_uncrop_vga_pane_ParamLimits

0x5e68,	// (0x000133e3) video4_image_uncrop_vga_pane

0x95f3,	// (0x00016b6e) bg_tb_trans_pane_cp07

0xd063,	// (0x0001a5de) vid4_indicators_pane_g1

0xd077,	// (0x0001a5f2) vid4_indicators_pane_g2

0xd08b,	// (0x0001a606) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001ce97) vid4_indicators_pane_g

0xd0b8,	// (0x0001a633) vid4_indicators_pane_t1

0x600a,	// (0x00013585) cam4_autofocus_pane_g1

0x6012,	// (0x0001358d) cam4_autofocus_pane_g2

0x601a,	// (0x00013595) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001cea2) cam4_autofocus_pane_g

0x6022,	// (0x0001359d) cam4_autofocus_pane_g3_copy1

0x594c,	// (0x00012ec7) video_down_pane_cp_t1

0x595a,	// (0x00012ed5) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0001ce1e) video_down_pane_cp_t

0x95f3,	// (0x00016b6e) popup_vitu2_window_ParamLimits

0x95f3,	// (0x00016b6e) popup_vitu2_window

0x602a,	// (0x000135a5) aid_size_cell2_itu2_ParamLimits

0x602a,	// (0x000135a5) aid_size_cell2_itu2

0x6050,	// (0x000135cb) aid_size_cell_itu2_ParamLimits

0x6050,	// (0x000135cb) aid_size_cell_itu2

0x60a1,	// (0x0001361c) bg_popup_window_pane_cp09_ParamLimits

0x60a1,	// (0x0001361c) bg_popup_window_pane_cp09

0x60af,	// (0x0001362a) field_vitu2_entry_pane_ParamLimits

0x60af,	// (0x0001362a) field_vitu2_entry_pane

0x60c6,	// (0x00013641) grid_vitu2_function_pane_ParamLimits

0x60c6,	// (0x00013641) grid_vitu2_function_pane

0x60fb,	// (0x00013676) grid_vitu2_itu_pane_ParamLimits

0x60fb,	// (0x00013676) grid_vitu2_itu_pane

0x6162,	// (0x000136dd) cell_vitu2_itu_pane_ParamLimits

0x6162,	// (0x000136dd) cell_vitu2_itu_pane

0x618a,	// (0x00013705) cell_vitu2_function_pane_ParamLimits

0x618a,	// (0x00013705) cell_vitu2_function_pane

0xd0cf,	// (0x0001a64a) bg_popup_call_pane_cp08_ParamLimits

0xd0cf,	// (0x0001a64a) bg_popup_call_pane_cp08

0xd0e6,	// (0x0001a661) field_vitu2_entry_pane_g1

0xd0f2,	// (0x0001a66d) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001cea9) field_vitu2_entry_pane_g

0x61c9,	// (0x00013744) field_vitu2_entry_pane_t1_ParamLimits

0x61c9,	// (0x00013744) field_vitu2_entry_pane_t1

0xd10c,	// (0x0001a687) field_vitu2_entry_pane_t2_ParamLimits

0xd10c,	// (0x0001a687) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001ceb0) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001ceb0) field_vitu2_entry_pane_t

0x61f6,	// (0x00013771) bg_button_pane_cp010_ParamLimits

0x61f6,	// (0x00013771) bg_button_pane_cp010

0xd131,	// (0x0001a6ac) cell_vitu2_itu_pane_g1

0x6212,	// (0x0001378d) cell_vitu2_itu_pane_t1_ParamLimits

0x6212,	// (0x0001378d) cell_vitu2_itu_pane_t1

0x6270,	// (0x000137eb) cell_vitu2_itu_pane_t2_ParamLimits

0x6270,	// (0x000137eb) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001ceba) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001ceba) cell_vitu2_itu_pane_t

0x95f3,	// (0x00016b6e) bg_button_pane_cp011

0x635c,	// (0x000138d7) cell_vitu2_function_pane_g1

0x9589,	// (0x00016b04) main_myfav_hc_pane

0x5cbc,	// (0x00013237) popup_image3_note_pane_ParamLimits

0x5cbc,	// (0x00013237) popup_image3_note_pane

0x5cd6,	// (0x00013251) popup_image3_tool_bar_pane_ParamLimits

0x5cd6,	// (0x00013251) popup_image3_tool_bar_pane

0x62fe,	// (0x00013879) cell_vitu2_itu_pane_t3_ParamLimits

0x62fe,	// (0x00013879) cell_vitu2_itu_pane_t3

0x9589,	// (0x00016b04) bg_popup_trans_pane

0xd143,	// (0x0001a6be) grid_image3_tool_bar_pane

0xd14d,	// (0x0001a6c8) bg_popup_trans_pane_g1

0xa239,	// (0x000177b4) bg_popup_trans_pane_g2

0xd155,	// (0x0001a6d0) bg_popup_trans_pane_g3

0xd15d,	// (0x0001a6d8) bg_popup_trans_pane_g4

0xd165,	// (0x0001a6e0) bg_popup_trans_pane_g5

0xd16d,	// (0x0001a6e8) bg_popup_trans_pane_g6

0xd175,	// (0x0001a6f0) bg_popup_trans_pane_g7

0xd17d,	// (0x0001a6f8) bg_popup_trans_pane_g8

0xa219,	// (0x00017794) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001cec1) bg_popup_trans_pane_g

0xd185,	// (0x0001a700) cell_image3_tool_bar_pane_ParamLimits

0xd185,	// (0x0001a700) cell_image3_tool_bar_pane

0xc3ec,	// (0x00019967) cell_image3_tool_bar_pane_g1

0x9589,	// (0x00016b04) bg_popup_trans_pane_cp1

0xd199,	// (0x0001a714) popup_image3_note_pane_t1

0xd1a7,	// (0x0001a722) popup_image3_note_pane_t2

0xd1b5,	// (0x0001a730) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001ced4) popup_image3_note_pane_t

0xd1c3,	// (0x0001a73e) popup_image3_note_pane_t3_copy1

0x636f,	// (0x000138ea) bg_myfav_hc_instruction_pane_ParamLimits

0x636f,	// (0x000138ea) bg_myfav_hc_instruction_pane

0x6381,	// (0x000138fc) cell_myfav_contact_pane_ParamLimits

0x6381,	// (0x000138fc) cell_myfav_contact_pane

0x639b,	// (0x00013916) cell_myfav_contact_pane_cp1_ParamLimits

0x639b,	// (0x00013916) cell_myfav_contact_pane_cp1

0x63b1,	// (0x0001392c) cell_myfav_contact_pane_cp2_ParamLimits

0x63b1,	// (0x0001392c) cell_myfav_contact_pane_cp2

0x63c7,	// (0x00013942) cell_myfav_contact_pane_cp3_ParamLimits

0x63c7,	// (0x00013942) cell_myfav_contact_pane_cp3

0x63dc,	// (0x00013957) cell_myfav_contact_pane_cp4_ParamLimits

0x63dc,	// (0x00013957) cell_myfav_contact_pane_cp4

0x63f0,	// (0x0001396b) cell_myfav_contact_pane_cp5_ParamLimits

0x63f0,	// (0x0001396b) cell_myfav_contact_pane_cp5

0x6404,	// (0x0001397f) cell_myfav_contact_pane_cp6_ParamLimits

0x6404,	// (0x0001397f) cell_myfav_contact_pane_cp6

0x6418,	// (0x00013993) cell_myfav_contact_pane_cp7_ParamLimits

0x6418,	// (0x00013993) cell_myfav_contact_pane_cp7

0xd1d1,	// (0x0001a74c) listscroll_gen_pane_cp05

0x6430,	// (0x000139ab) main_myfav_hc_pane_g1_ParamLimits

0x6430,	// (0x000139ab) main_myfav_hc_pane_g1

0x6446,	// (0x000139c1) main_myfav_hc_pane_g2_ParamLimits

0x6446,	// (0x000139c1) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001cedb) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001cedb) main_myfav_hc_pane_g

0x6470,	// (0x000139eb) main_myfav_hc_pane_t1_ParamLimits

0x6470,	// (0x000139eb) main_myfav_hc_pane_t1

0xd1da,	// (0x0001a755) main_myfav_hc_pane_t2_ParamLimits

0xd1da,	// (0x0001a755) main_myfav_hc_pane_t2

0xd1ec,	// (0x0001a767) main_myfav_hc_pane_t3_ParamLimits

0xd1ec,	// (0x0001a767) main_myfav_hc_pane_t3

0x6485,	// (0x00013a00) main_myfav_hc_pane_t4_ParamLimits

0x6485,	// (0x00013a00) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001cee2) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001cee2) main_myfav_hc_pane_t

0xc3ec,	// (0x00019967) bg_myfav_hc_instruction_pane_g1

0xd1fe,	// (0x0001a779) cell_myfav_contact_pane_g1_ParamLimits

0xd1fe,	// (0x0001a779) cell_myfav_contact_pane_g1

0xd1fe,	// (0x0001a779) cell_myfav_contact_pane_g2_ParamLimits

0xd1fe,	// (0x0001a779) cell_myfav_contact_pane_g2

0xd20a,	// (0x0001a785) cell_myfav_contact_pane_g3_ParamLimits

0xd20a,	// (0x0001a785) cell_myfav_contact_pane_g3

0xc68c,	// (0x00019c07) cell_myfav_contact_pane_g4_ParamLimits

0xc68c,	// (0x00019c07) cell_myfav_contact_pane_g4

0xd217,	// (0x0001a792) cell_myfav_contact_pane_g5_ParamLimits

0xd217,	// (0x0001a792) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001ceed) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001ceed) cell_myfav_contact_pane_g

0x645c,	// (0x000139d7) main_myfav_hc_pane_g3_ParamLimits

0x645c,	// (0x000139d7) main_myfav_hc_pane_g3

0x0eb8,	// (0x0000e433) popup_adpt_find_window

0x64a9,	// (0x00013a24) afind_page_pane_ParamLimits

0x64a9,	// (0x00013a24) afind_page_pane

0x64be,	// (0x00013a39) aid_size_cell_afind_ParamLimits

0x64be,	// (0x00013a39) aid_size_cell_afind

0x64dc,	// (0x00013a57) bg_popup_sub_pane_cp09_ParamLimits

0x64dc,	// (0x00013a57) bg_popup_sub_pane_cp09

0x64e9,	// (0x00013a64) find_pane_cp01_ParamLimits

0x64e9,	// (0x00013a64) find_pane_cp01

0xd223,	// (0x0001a79e) grid_afind_control_pane_ParamLimits

0xd223,	// (0x0001a79e) grid_afind_control_pane

0x64f6,	// (0x00013a71) grid_afind_pane_ParamLimits

0x64f6,	// (0x00013a71) grid_afind_pane

0x6514,	// (0x00013a8f) cell_afind_pane_ParamLimits

0x6514,	// (0x00013a8f) cell_afind_pane

0xc3ec,	// (0x00019967) afind_page_pane_g1

0x6563,	// (0x00013ade) afind_page_pane_g2

0x656c,	// (0x00013ae7) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001cef8) afind_page_pane_g

0x6575,	// (0x00013af0) afind_page_pane_t1

0xd237,	// (0x0001a7b2) cell_afind_grid_control_pane_ParamLimits

0xd237,	// (0x0001a7b2) cell_afind_grid_control_pane

0xcefb,	// (0x0001a476) bg_button_pane_cp69_ParamLimits

0xcefb,	// (0x0001a476) bg_button_pane_cp69

0x6595,	// (0x00013b10) cell_afind_pane_g1_ParamLimits

0x6595,	// (0x00013b10) cell_afind_pane_g1

0x65a2,	// (0x00013b1d) cell_afind_pane_t1_ParamLimits

0x65a2,	// (0x00013b1d) cell_afind_pane_t1

0xa025,	// (0x000175a0) bg_button_pane_cp72

0xd246,	// (0x0001a7c1) cell_afind_grid_control_pane_g1

0x3914,	// (0x00010e8f) aid_image_placing_area_ParamLimits

0x3914,	// (0x00010e8f) aid_image_placing_area

0xc99e,	// (0x00019f19) field_vitu_entry_pane_g1_ParamLimits

0xc99e,	// (0x00019f19) field_vitu_entry_pane_g1

0xc9aa,	// (0x00019f25) field_vitu_entry_pane_g2_ParamLimits

0xc9aa,	// (0x00019f25) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0001cda9) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0001cda9) field_vitu_entry_pane_g

0x5786,	// (0x00012d01) cell_vitu_itu_pane_g1_ParamLimits

0x57c8,	// (0x00012d43) cell_vitu_itu_pane_t3_ParamLimits

0x57c8,	// (0x00012d43) cell_vitu_itu_pane_t3

0xceaf,	// (0x0001a42a) mp4_progress_pane_t1_ParamLimits

0xcec6,	// (0x0001a441) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001ce3e) mp4_progress_pane_t_ParamLimits

0xcedd,	// (0x0001a458) mup_progress_pane_cp04_ParamLimits

0x6497,	// (0x00013a12) main_myfav_hc_pane_t5_ParamLimits

0x6497,	// (0x00013a12) main_myfav_hc_pane_t5

0x95ab,	// (0x00016b26) aid_zoom_text_primary

0x0eb8,	// (0x0000e433) popup_adpt_find_window_ParamLimits

0x95f3,	// (0x00016b6e) main_cam_set_pane

0x5e92,	// (0x0001340d) cam4_zoom_pane_ParamLimits

0x5e92,	// (0x0001340d) cam4_zoom_pane

0x65b4,	// (0x00013b2f) main_cam_set_pane_g1_ParamLimits

0x65b4,	// (0x00013b2f) main_cam_set_pane_g1

0x65c2,	// (0x00013b3d) main_cam_set_pane_g2_ParamLimits

0x65c2,	// (0x00013b3d) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001ceff) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001ceff) main_cam_set_pane_g

0x65e3,	// (0x00013b5e) main_cam_set_pane_t1_ParamLimits

0x65e3,	// (0x00013b5e) main_cam_set_pane_t1

0x65fe,	// (0x00013b79) main_cset_listscroll_pane_ParamLimits

0x65fe,	// (0x00013b79) main_cset_listscroll_pane

0x661c,	// (0x00013b97) main_cset_slider_pane_ParamLimits

0x661c,	// (0x00013b97) main_cset_slider_pane

0xd257,	// (0x0001a7d2) main_cset_list_pane_ParamLimits

0xd257,	// (0x0001a7d2) main_cset_list_pane

0xd267,	// (0x0001a7e2) scroll_pane_cp028

0x6640,	// (0x00013bbb) aid_area_touch_slider

0xd270,	// (0x0001a7eb) cset_slider_pane

0x665c,	// (0x00013bd7) main_cset_slider_pane_g1

0x6671,	// (0x00013bec) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001cf04) main_cset_slider_pane_g

0xd2e2,	// (0x0001a85d) main_cset_slider_pane_t1

0x6715,	// (0x00013c90) main_cset_slider_pane_t2

0x672f,	// (0x00013caa) main_cset_slider_pane_t3

0x6749,	// (0x00013cc4) main_cset_slider_pane_t4

0x6763,	// (0x00013cde) main_cset_slider_pane_t5

0x677d,	// (0x00013cf8) main_cset_slider_pane_t6

0x6792,	// (0x00013d0d) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001cf29) main_cset_slider_pane_t

0x6896,	// (0x00013e11) cset_list_set_pane_ParamLimits

0x6896,	// (0x00013e11) cset_list_set_pane

0x68a7,	// (0x00013e22) aid_position_infowindow_above

0x68af,	// (0x00013e2a) aid_position_infowindow_below

0x68b7,	// (0x00013e32) cset_list_set_pane_g1_ParamLimits

0x68b7,	// (0x00013e32) cset_list_set_pane_g1

0x68c3,	// (0x00013e3e) cset_list_set_pane_g3_ParamLimits

0x68c3,	// (0x00013e3e) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001cf48) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001cf48) cset_list_set_pane_g

0x68d2,	// (0x00013e4d) cset_list_set_pane_t1_ParamLimits

0x68d2,	// (0x00013e4d) cset_list_set_pane_t1

0x95f3,	// (0x00016b6e) list_highlight_pane_cp021_ParamLimits

0x95f3,	// (0x00016b6e) list_highlight_pane_cp021

0xabcb,	// (0x00018146) cset_slider_pane_g1

0xabdd,	// (0x00018158) cset_slider_pane_g2

0xabd4,	// (0x0001814f) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001cf4d) cset_slider_pane_g

0xd382,	// (0x0001a8fd) aid_area_touch_cam4_zoom

0xd38a,	// (0x0001a905) cam4_zoom_cont_pane

0xd392,	// (0x0001a90d) cam4_zoom_pane_g1

0xd39a,	// (0x0001a915) cam4_zoom_pane_g2

0x68e7,	// (0x00013e62) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001cf54) cam4_zoom_pane_g

0xd3a2,	// (0x0001a91d) cam4_zoom_cont_pane_g1

0xd3ab,	// (0x0001a926) cam4_zoom_cont_pane_g2

0xd3b4,	// (0x0001a92f) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001cf5b) cam4_zoom_cont_pane_g

0x5d41,	// (0x000132bc) call4_image_pane_ParamLimits

0x5d41,	// (0x000132bc) call4_image_pane

0xcf39,	// (0x0001a4b4) call4_windows_conf_pane_ParamLimits

0xcf4c,	// (0x0001a4c7) popup_call4_audio_in_window_ParamLimits

0xcf4c,	// (0x0001a4c7) popup_call4_audio_in_window

0x9589,	// (0x00016b04) bg_popup_call2_act_pane_cp02

0xcfaa,	// (0x0001a525) call4_list_conf_pane

0xc3ec,	// (0x00019967) call4_image_pane_g1

0xc3ec,	// (0x00019967) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0001cc6a) call4_image_pane_g

0xd3bd,	// (0x0001a938) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3bd,	// (0x0001a938) list_single_graphic_popup_conf4_pane

0x9589,	// (0x00016b04) list_highlight_pane_cp022

0xd3d0,	// (0x0001a94b) list_single_graphic_popup_conf4_pane_g1

0xa7e0,	// (0x00017d5b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001cf62) list_single_graphic_popup_conf4_pane_g

0xd3d8,	// (0x0001a953) list_single_graphic_popup_conf4_pane_t1

0x1f4d,	// (0x0000f4c8) popup_vtel_slider_window_ParamLimits

0x1f4d,	// (0x0000f4c8) popup_vtel_slider_window

0xcee9,	// (0x0001a464) dialer2_ne_pane_t2_ParamLimits

0xcee9,	// (0x0001a464) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001ce43) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001ce43) dialer2_ne_pane_t

0xc1d9,	// (0x00019754) bg_popup_sub_pane_cp010_ParamLimits

0xc1d9,	// (0x00019754) bg_popup_sub_pane_cp010

0x68ef,	// (0x00013e6a) popup_vtel_slider_window_g1_ParamLimits

0x68ef,	// (0x00013e6a) popup_vtel_slider_window_g1

0x6902,	// (0x00013e7d) popup_vtel_slider_window_g2_ParamLimits

0x6902,	// (0x00013e7d) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001cf67) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001cf67) popup_vtel_slider_window_g

0x6956,	// (0x00013ed1) vtel_slider_pane_ParamLimits

0x6956,	// (0x00013ed1) vtel_slider_pane

0x6978,	// (0x00013ef3) vtel_slider_pane_g1_ParamLimits

0x6978,	// (0x00013ef3) vtel_slider_pane_g1

0x698c,	// (0x00013f07) vtel_slider_pane_g2_ParamLimits

0x698c,	// (0x00013f07) vtel_slider_pane_g2

0x69a4,	// (0x00013f1f) vtel_slider_pane_g3_ParamLimits

0x69a4,	// (0x00013f1f) vtel_slider_pane_g3

0x6978,	// (0x00013ef3) vtel_slider_pane_g4_ParamLimits

0x6978,	// (0x00013ef3) vtel_slider_pane_g4

0x69ba,	// (0x00013f35) vtel_slider_pane_g5_ParamLimits

0x69ba,	// (0x00013f35) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001cf70) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001cf70) vtel_slider_pane_g

0x95f3,	// (0x00016b6e) main_gallery2_pane

0x607c,	// (0x000135f7) aid_size_row_itut2_dropdow_list_ParamLimits

0x607c,	// (0x000135f7) aid_size_row_itut2_dropdow_list

0x60df,	// (0x0001365a) grid_vitu2_function_top_pane_ParamLimits

0x60df,	// (0x0001365a) grid_vitu2_function_top_pane

0x6124,	// (0x0001369f) popup_vitu2_dropdown_list_window_ParamLimits

0x6124,	// (0x0001369f) popup_vitu2_dropdown_list_window

0x6140,	// (0x000136bb) popup_vitu2_match_list_window

0x69de,	// (0x00013f59) cell_vitu2_function_top_pane_ParamLimits

0x69de,	// (0x00013f59) cell_vitu2_function_top_pane

0x69f6,	// (0x00013f71) cell_vitu2_function_top_pane_cp01_ParamLimits

0x69f6,	// (0x00013f71) cell_vitu2_function_top_pane_cp01

0x6a12,	// (0x00013f8d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a12,	// (0x00013f8d) cell_vitu2_function_top_wide_pane

0x95f3,	// (0x00016b6e) bg_button_pane_cp012

0x6a2e,	// (0x00013fa9) cell_vitu2_function_top_pane_g1

0xd3ee,	// (0x0001a969) bg_button_pane_cp013_ParamLimits

0xd3ee,	// (0x0001a969) bg_button_pane_cp013

0x6a42,	// (0x00013fbd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6a42,	// (0x00013fbd) cell_vitu2_function_top_wide_pane_g1

0x95f3,	// (0x00016b6e) bg_popup_sub_pane_cp20

0x6a5a,	// (0x00013fd5) list_vitu2_match_list_pane

0xd14d,	// (0x0001a6c8) bg_popup_sub_pane_cp20_g1

0xd155,	// (0x0001a6d0) bg_popup_sub_pane_cp20_g2

0xa239,	// (0x000177b4) bg_popup_sub_pane_cp20_g3

0xd15d,	// (0x0001a6d8) bg_popup_sub_pane_cp20_g4

0xa219,	// (0x00017794) bg_popup_sub_pane_cp20_g5

0xd40a,	// (0x0001a985) bg_popup_sub_pane_cp20_g6

0xd16d,	// (0x0001a6e8) bg_popup_sub_pane_cp20_g7

0xd175,	// (0x0001a6f0) bg_popup_sub_pane_cp20_g8

0xd17d,	// (0x0001a6f8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001cf7b) bg_popup_sub_pane_cp20_g

0xd412,	// (0x0001a98d) list_vitu2_match_list_item_pane_ParamLimits

0xd412,	// (0x0001a98d) list_vitu2_match_list_item_pane

0xd424,	// (0x0001a99f) list_vitu2_match_list_item_pane_t1

0x9589,	// (0x00016b04) bg_popup_sub_pane_cp21

0xa6af,	// (0x00017c2a) grid_vitu2_dropdown_list_pane

0x6ac0,	// (0x0001403b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ac0,	// (0x0001403b) cell_vitu2_dropdown_list_char_pane

0x6ae1,	// (0x0001405c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ae1,	// (0x0001405c) cell_vitu2_dropdown_list_ctrl_pane

0xd432,	// (0x0001a9ad) cell_vitu2_dropdown_list_char_pane_g1

0xd43b,	// (0x0001a9b6) cell_vitu2_dropdown_list_char_pane_g2

0xd444,	// (0x0001a9bf) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001cf98) cell_vitu2_dropdown_list_char_pane_g

0x6b0d,	// (0x00014088) cell_vitu2_dropdown_list_char_pane_t1

0x6b1b,	// (0x00014096) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b1b,	// (0x00014096) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b28,	// (0x000140a3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b28,	// (0x000140a3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b35,	// (0x000140b0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b35,	// (0x000140b0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b42,	// (0x000140bd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b42,	// (0x000140bd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc61b,	// (0x00019b96) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc61b,	// (0x00019b96) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001cf9f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001cf9f) cell_vitu2_dropdown_list_ctrl_pane_g

0x6b5e,	// (0x000140d9) aid_size_cell_gallery2_ParamLimits

0x6b5e,	// (0x000140d9) aid_size_cell_gallery2

0x6b7c,	// (0x000140f7) grid_gallery2_pane_ParamLimits

0x6b7c,	// (0x000140f7) grid_gallery2_pane

0x6b8e,	// (0x00014109) scroll_pane_cp029_ParamLimits

0x6b8e,	// (0x00014109) scroll_pane_cp029

0x6b9a,	// (0x00014115) cell_gallery2_pane_ParamLimits

0x6b9a,	// (0x00014115) cell_gallery2_pane

0xd44d,	// (0x0001a9c8) cell_gallery2_pane_g2

0x6bf0,	// (0x0001416b) cell_gallery2_pane_g3

0xd455,	// (0x0001a9d0) cell_gallery2_pane_g4

0xd45d,	// (0x0001a9d8) cell_gallery2_pane_g5

0x9fc9,	// (0x00017544) grid_highlight_pane_cp10

0x6140,	// (0x000136bb) popup_vitu2_match_list_window_ParamLimits

0x6151,	// (0x000136cc) popup_vitu2_query_window_ParamLimits

0x6151,	// (0x000136cc) popup_vitu2_query_window

0x9589,	// (0x00016b04) bg_vitu2_candi_button_pane

0xd432,	// (0x0001a9ad) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd43b,	// (0x0001a9b6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd444,	// (0x0001a9bf) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6bf8,	// (0x00014173) bg_button_pane_cp015

0x6c08,	// (0x00014183) bg_button_pane_cp016

0x6c1a,	// (0x00014195) bg_button_pane_cp017

0xbeea,	// (0x00019465) bg_popup_sub_pane_cp22

0xd465,	// (0x0001a9e0) popup_vitu2_query_window_g1

0x6c5b,	// (0x000141d6) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001cfaa) popup_vitu2_query_window_g

0x6c76,	// (0x000141f1) popup_vitu2_query_window_t1_ParamLimits

0x6c76,	// (0x000141f1) popup_vitu2_query_window_t1

0x6ca9,	// (0x00014224) popup_vitu2_query_window_t2_ParamLimits

0x6ca9,	// (0x00014224) popup_vitu2_query_window_t2

0x6cbb,	// (0x00014236) popup_vitu2_query_window_t3_ParamLimits

0x6cbb,	// (0x00014236) popup_vitu2_query_window_t3

0x6ce3,	// (0x0001425e) popup_vitu2_query_window_t4_ParamLimits

0x6ce3,	// (0x0001425e) popup_vitu2_query_window_t4

0x6d00,	// (0x0001427b) popup_vitu2_query_window_t5_ParamLimits

0x6d00,	// (0x0001427b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001cfb1) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001cfb1) popup_vitu2_query_window_t

0xd24f,	// (0x0001a7ca) main_cset_text_pane

0x6640,	// (0x00013bbb) aid_area_touch_slider_ParamLimits

0xd270,	// (0x0001a7eb) cset_slider_pane_ParamLimits

0x665c,	// (0x00013bd7) main_cset_slider_pane_g1_ParamLimits

0x6671,	// (0x00013bec) main_cset_slider_pane_g2_ParamLimits

0xd29a,	// (0x0001a815) main_cset_slider_pane_g3_ParamLimits

0xd29a,	// (0x0001a815) main_cset_slider_pane_g3

0x6686,	// (0x00013c01) main_cset_slider_pane_g4_ParamLimits

0x6686,	// (0x00013c01) main_cset_slider_pane_g4

0x6695,	// (0x00013c10) main_cset_slider_pane_g5_ParamLimits

0x6695,	// (0x00013c10) main_cset_slider_pane_g5

0x66a1,	// (0x00013c1c) main_cset_slider_pane_g6_ParamLimits

0x66a1,	// (0x00013c1c) main_cset_slider_pane_g6

0xf989,	// (0x0001cf04) main_cset_slider_pane_g_ParamLimits

0xd2e2,	// (0x0001a85d) main_cset_slider_pane_t1_ParamLimits

0x6715,	// (0x00013c90) main_cset_slider_pane_t2_ParamLimits

0x672f,	// (0x00013caa) main_cset_slider_pane_t3_ParamLimits

0x6749,	// (0x00013cc4) main_cset_slider_pane_t4_ParamLimits

0x6763,	// (0x00013cde) main_cset_slider_pane_t5_ParamLimits

0x677d,	// (0x00013cf8) main_cset_slider_pane_t6_ParamLimits

0x6792,	// (0x00013d0d) main_cset_slider_pane_t7_ParamLimits

0x67bc,	// (0x00013d37) main_cset_slider_pane_t8_ParamLimits

0x67bc,	// (0x00013d37) main_cset_slider_pane_t8

0x67e4,	// (0x00013d5f) main_cset_slider_pane_t9_ParamLimits

0x67e4,	// (0x00013d5f) main_cset_slider_pane_t9

0x680c,	// (0x00013d87) main_cset_slider_pane_t10_ParamLimits

0x680c,	// (0x00013d87) main_cset_slider_pane_t10

0x6834,	// (0x00013daf) main_cset_slider_pane_t11_ParamLimits

0x6834,	// (0x00013daf) main_cset_slider_pane_t11

0x685c,	// (0x00013dd7) main_cset_slider_pane_t12_ParamLimits

0x685c,	// (0x00013dd7) main_cset_slider_pane_t12

0x6879,	// (0x00013df4) main_cset_slider_pane_t13_ParamLimits

0x6879,	// (0x00013df4) main_cset_slider_pane_t13

0xf9ae,	// (0x0001cf29) main_cset_slider_pane_t_ParamLimits

0x9589,	// (0x00016b04) bg_popup_sub_pane_cp011

0xd471,	// (0x0001a9ec) main_cset_text_pane_g1

0xd479,	// (0x0001a9f4) main_cset_text_pane_t1

0xd487,	// (0x0001aa02) main_cset_text_pane_t2

0xd495,	// (0x0001aa10) main_cset_text_pane_t3

0xd4a3,	// (0x0001aa1e) main_cset_text_pane_t4

0xd4b1,	// (0x0001aa2c) main_cset_text_pane_t5

0xd4bf,	// (0x0001aa3a) main_cset_text_pane_t6

0xd4cd,	// (0x0001aa48) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001cfc0) main_cset_text_pane_t

0x9589,	// (0x00016b04) main_cam4_burst_pane

0x9589,	// (0x00016b04) main_cam5_pane

0x6583,	// (0x00013afe) bg_button_pane_cp019

0x658c,	// (0x00013b07) bg_button_pane_cp020

0xd2a6,	// (0x0001a821) main_cset_slider_pane_g7_ParamLimits

0xd2a6,	// (0x0001a821) main_cset_slider_pane_g7

0xd2b2,	// (0x0001a82d) main_cset_slider_pane_g8_ParamLimits

0xd2b2,	// (0x0001a82d) main_cset_slider_pane_g8

0x66b5,	// (0x00013c30) main_cset_slider_pane_g9_ParamLimits

0x66b5,	// (0x00013c30) main_cset_slider_pane_g9

0x66c1,	// (0x00013c3c) main_cset_slider_pane_g10_ParamLimits

0x66c1,	// (0x00013c3c) main_cset_slider_pane_g10

0xd2be,	// (0x0001a839) main_cset_slider_pane_g11_ParamLimits

0xd2be,	// (0x0001a839) main_cset_slider_pane_g11

0xd2ca,	// (0x0001a845) main_cset_slider_pane_g12_ParamLimits

0xd2ca,	// (0x0001a845) main_cset_slider_pane_g12

0x66cd,	// (0x00013c48) main_cset_slider_pane_g13_ParamLimits

0x66cd,	// (0x00013c48) main_cset_slider_pane_g13

0x66d9,	// (0x00013c54) main_cset_slider_pane_g14_ParamLimits

0x66d9,	// (0x00013c54) main_cset_slider_pane_g14

0x66e5,	// (0x00013c60) main_cset_slider_pane_g15_ParamLimits

0x66e5,	// (0x00013c60) main_cset_slider_pane_g15

0xd310,	// (0x0001a88b) main_cset_slider_pane_t14_ParamLimits

0xd310,	// (0x0001a88b) main_cset_slider_pane_t14

0xd349,	// (0x0001a8c4) main_cset_slider_pane_t15_ParamLimits

0xd349,	// (0x0001a8c4) main_cset_slider_pane_t15

0x6d73,	// (0x000142ee) aid_cam4_burst_size_cell_ParamLimits

0x6d73,	// (0x000142ee) aid_cam4_burst_size_cell

0x6d93,	// (0x0001430e) grid_cam4_burst_pane_ParamLimits

0x6d93,	// (0x0001430e) grid_cam4_burst_pane

0x6dbd,	// (0x00014338) linegrid_cam4_burst_pane_ParamLimits

0x6dbd,	// (0x00014338) linegrid_cam4_burst_pane

0xd4db,	// (0x0001aa56) scroll_pane_cp30_ParamLimits

0xd4db,	// (0x0001aa56) scroll_pane_cp30

0x6ddf,	// (0x0001435a) cell_cam4_burst_pane_ParamLimits

0x6ddf,	// (0x0001435a) cell_cam4_burst_pane

0xd4e7,	// (0x0001aa62) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4e7,	// (0x0001aa62) linegrid_cam4_burst_pane_g1

0x6e26,	// (0x000143a1) linegrid_cam4_burst_pane_g2_ParamLimits

0x6e26,	// (0x000143a1) linegrid_cam4_burst_pane_g2

0xd4f4,	// (0x0001aa6f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4f4,	// (0x0001aa6f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001cfcf) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001cfcf) linegrid_cam4_burst_pane_g

0x6e37,	// (0x000143b2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6e37,	// (0x000143b2) linegrid_cam4_burst_pane_g3_copy1

0xd501,	// (0x0001aa7c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd501,	// (0x0001aa7c) linegrid_cam4_burst_pane_g4

0x6e51,	// (0x000143cc) linegrid_cam4_burst_pane_g5_ParamLimits

0x6e51,	// (0x000143cc) linegrid_cam4_burst_pane_g5

0x6e62,	// (0x000143dd) linegrid_cam4_burst_pane_g6_ParamLimits

0x6e62,	// (0x000143dd) linegrid_cam4_burst_pane_g6

0xd50e,	// (0x0001aa89) linegrid_cam4_burst_pane_g7_ParamLimits

0xd50e,	// (0x0001aa89) linegrid_cam4_burst_pane_g7

0x6e73,	// (0x000143ee) cell_cam4_burst_pane_g1

0xd527,	// (0x0001aaa2) main_cam5_pane_t1_ParamLimits

0xd527,	// (0x0001aaa2) main_cam5_pane_t1

0xd539,	// (0x0001aab4) main_cam5_pane_t2_ParamLimits

0xd539,	// (0x0001aab4) main_cam5_pane_t2

0xd54b,	// (0x0001aac6) main_cam5_pane_t3_ParamLimits

0xd54b,	// (0x0001aac6) main_cam5_pane_t3

0xd55d,	// (0x0001aad8) main_cam5_pane_t4_ParamLimits

0xd55d,	// (0x0001aad8) main_cam5_pane_t4

0xd573,	// (0x0001aaee) main_cam5_pane_t5_ParamLimits

0xd573,	// (0x0001aaee) main_cam5_pane_t5

0xd585,	// (0x0001ab00) main_cam5_pane_t6_ParamLimits

0xd585,	// (0x0001ab00) main_cam5_pane_t6

0xd597,	// (0x0001ab12) main_cam5_pane_t7_ParamLimits

0xd597,	// (0x0001ab12) main_cam5_pane_t7

0xd5a9,	// (0x0001ab24) main_cam5_pane_t8_ParamLimits

0xd5a9,	// (0x0001ab24) main_cam5_pane_t8

0xd5c5,	// (0x0001ab40) main_cam5_pane_t9_ParamLimits

0xd5c5,	// (0x0001ab40) main_cam5_pane_t9

0xd5d7,	// (0x0001ab52) main_cam5_pane_t10_ParamLimits

0xd5d7,	// (0x0001ab52) main_cam5_pane_t10

0xd5e9,	// (0x0001ab64) main_cam5_pane_t11_ParamLimits

0xd5e9,	// (0x0001ab64) main_cam5_pane_t11

0xd5fb,	// (0x0001ab76) main_cam5_pane_t12_ParamLimits

0xd5fb,	// (0x0001ab76) main_cam5_pane_t12

0xd610,	// (0x0001ab8b) main_cam5_pane_t13_ParamLimits

0xd610,	// (0x0001ab8b) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001cfdb) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001cfdb) main_cam5_pane_t

0x0f36,	// (0x0000e4b1) popup_scut_keymap_window_ParamLimits

0x0f36,	// (0x0000e4b1) popup_scut_keymap_window

0x6e86,	// (0x00014401) aid_size_cell_brow_shortcut

0x9fc9,	// (0x00017544) bg_popup_window_pane_cp010

0x6e92,	// (0x0001440d) grid_scut_pane

0x6e9c,	// (0x00014417) cell_scut_pane_ParamLimits

0x6e9c,	// (0x00014417) cell_scut_pane

0x6eb1,	// (0x0001442c) cell_scut_pane_g1

0xd62d,	// (0x0001aba8) cell_scut_pane_t1

0xd63c,	// (0x0001abb7) cell_scut_pane_t2

0x6eba,	// (0x00014435) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001cff6) cell_scut_pane_t

0x4d3e,	// (0x000122b9) main_mup3_pane_g8_ParamLimits

0x4d3e,	// (0x000122b9) main_mup3_pane_g8

0x608f,	// (0x0001360a) area_vitu2_query_pane_ParamLimits

0x608f,	// (0x0001360a) area_vitu2_query_pane

0x6c2c,	// (0x000141a7) input_focus_pane_cp08

0xd64b,	// (0x0001abc6) area_vitu2_query_pane_g1

0x6ec8,	// (0x00014443) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001cffd) area_vitu2_query_pane_g

0x6ed7,	// (0x00014452) area_vitu2_query_pane_t1_ParamLimits

0x6ed7,	// (0x00014452) area_vitu2_query_pane_t1

0x6ee9,	// (0x00014464) area_vitu2_query_pane_t2_ParamLimits

0x6ee9,	// (0x00014464) area_vitu2_query_pane_t2

0x6efb,	// (0x00014476) area_vitu2_query_pane_t3_ParamLimits

0x6efb,	// (0x00014476) area_vitu2_query_pane_t3

0xd657,	// (0x0001abd2) area_vitu2_query_pane_t4_ParamLimits

0xd657,	// (0x0001abd2) area_vitu2_query_pane_t4

0xd67f,	// (0x0001abfa) area_vitu2_query_pane_t5_ParamLimits

0xd67f,	// (0x0001abfa) area_vitu2_query_pane_t5

0xd6a7,	// (0x0001ac22) area_vitu2_query_pane_t6_ParamLimits

0xd6a7,	// (0x0001ac22) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001d002) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001d002) area_vitu2_query_pane_t

0x6f23,	// (0x0001449e) bg_button_pane_cp018

0x6f30,	// (0x000144ab) bg_button_pane_cp021

0x6f3c,	// (0x000144b7) bg_button_pane_cp022

0x6f4b,	// (0x000144c6) input_focus_pane_cp09

0xa8e3,	// (0x00017e5e) aid_size_touch_mv_arrow_left

0xa90c,	// (0x00017e87) aid_size_touch_mv_arrow_right

0x66fd,	// (0x00013c78) main_cset_slider_pane_g16_ParamLimits

0x66fd,	// (0x00013c78) main_cset_slider_pane_g16

0x6709,	// (0x00013c84) main_cset_slider_pane_g17_ParamLimits

0x6709,	// (0x00013c84) main_cset_slider_pane_g17

0x6e73,	// (0x000143ee) cell_cam4_burst_pane_g1_ParamLimits

0x9589,	// (0x00016b04) compa_mode_pane

0x6912,	// (0x00013e8d) popup_vtel_slider_window_g3_ParamLimits

0x6912,	// (0x00013e8d) popup_vtel_slider_window_g3

0x6929,	// (0x00013ea4) popup_vtel_slider_window_g4_ParamLimits

0x6929,	// (0x00013ea4) popup_vtel_slider_window_g4

0x6940,	// (0x00013ebb) popup_vtel_slider_window_t1_ParamLimits

0x6940,	// (0x00013ebb) popup_vtel_slider_window_t1

0x9589,	// (0x00016b04) main_cl_pane

0xbf08,	// (0x00019483) popup_imed_adjust2_window_ParamLimits

0xbeea,	// (0x00019465) bg_tb_trans_pane_cp05_ParamLimits

0xc8d3,	// (0x00019e4e) popup_imed_adjust2_window_g1_ParamLimits

0xc8e2,	// (0x00019e5d) popup_imed_adjust2_window_g2_ParamLimits

0xc8e2,	// (0x00019e5d) popup_imed_adjust2_window_g2

0xc8ee,	// (0x00019e69) popup_imed_adjust2_window_g3_ParamLimits

0xc8ee,	// (0x00019e69) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0001cd6d) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0001cd6d) popup_imed_adjust2_window_g

0xc8fa,	// (0x00019e75) popup_imed_adjust2_window_t1_ParamLimits

0xc912,	// (0x00019e8d) slider_imed_adjust_pane_ParamLimits

0xc926,	// (0x00019ea1) slider_imed_adjust_pane_g1_ParamLimits

0xc936,	// (0x00019eb1) slider_imed_adjust_pane_g2_ParamLimits

0xc946,	// (0x00019ec1) slider_imed_adjust_pane_g3_ParamLimits

0xc957,	// (0x00019ed2) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0001cd74) slider_imed_adjust_pane_g_ParamLimits

0x5e40,	// (0x000133bb) aid_touch_area_cam4_ParamLimits

0x5e40,	// (0x000133bb) aid_touch_area_cam4

0xcfee,	// (0x0001a569) battery_pane_cp01

0x5f00,	// (0x0001347b) main_camera4_pane_g6_ParamLimits

0x5f00,	// (0x0001347b) main_camera4_pane_g6

0x5f28,	// (0x000134a3) main_camera4_pane_t2_ParamLimits

0x5f28,	// (0x000134a3) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001ce77) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001ce77) main_camera4_pane_t

0x5f57,	// (0x000134d2) aid_touch_area_vid4_ParamLimits

0x5f57,	// (0x000134d2) aid_touch_area_vid4

0x5fa7,	// (0x00013522) main_video4_pane_g5_ParamLimits

0x5fa7,	// (0x00013522) main_video4_pane_g5

0x5fc8,	// (0x00013543) vid4_progress_pane_ParamLimits

0x5fc8,	// (0x00013543) vid4_progress_pane

0xd2d6,	// (0x0001a851) main_cset_slider_pane_g18_ParamLimits

0xd2d6,	// (0x0001a851) main_cset_slider_pane_g18

0xd51b,	// (0x0001aa96) cell_cam4_burst_pane_g2_ParamLimits

0xd51b,	// (0x0001aa96) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001cfd6) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001cfd6) cell_cam4_burst_pane_g

0x9d94,	// (0x0001730f) bg_cl_pane_ParamLimits

0x9d94,	// (0x0001730f) bg_cl_pane

0x6f5a,	// (0x000144d5) cl_header_pane_ParamLimits

0x6f5a,	// (0x000144d5) cl_header_pane

0x6f6e,	// (0x000144e9) cl_listscroll_pane_ParamLimits

0x6f6e,	// (0x000144e9) cl_listscroll_pane

0xd6f3,	// (0x0001ac6e) bg_cl_pane_g1

0xd6fb,	// (0x0001ac76) bg_cl_pane_g2

0xd703,	// (0x0001ac7e) bg_cl_pane_g3

0xd70b,	// (0x0001ac86) bg_cl_pane_g4

0xd713,	// (0x0001ac8e) bg_cl_pane_g5

0xd71b,	// (0x0001ac96) bg_cl_pane_g6

0xd723,	// (0x0001ac9e) bg_cl_pane_g7

0xd72b,	// (0x0001aca6) bg_cl_pane_g8

0xd733,	// (0x0001acae) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001d011) bg_cl_pane_g

0x6f7e,	// (0x000144f9) aid_height_cl_leading_ParamLimits

0x6f7e,	// (0x000144f9) aid_height_cl_leading

0x6f8a,	// (0x00014505) aid_height_cl_text_ParamLimits

0x6f8a,	// (0x00014505) aid_height_cl_text

0x95f3,	// (0x00016b6e) bg_cl_header_pane_ParamLimits

0x95f3,	// (0x00016b6e) bg_cl_header_pane

0x6fa9,	// (0x00014524) cl_header_pane_g1_ParamLimits

0x6fa9,	// (0x00014524) cl_header_pane_g1

0x6fbf,	// (0x0001453a) cl_header_pane_t1_ParamLimits

0x6fbf,	// (0x0001453a) cl_header_pane_t1

0xd73b,	// (0x0001acb6) cl_list_pane

0xd267,	// (0x0001a7e2) hc_scroll_pane_cp01

0xa219,	// (0x00017794) bg_cl_header_pane_g1

0xd14d,	// (0x0001a6c8) bg_cl_header_pane_g2

0xa239,	// (0x000177b4) bg_cl_header_pane_g3

0xd15d,	// (0x0001a6d8) bg_cl_header_pane_g4

0xd155,	// (0x0001a6d0) bg_cl_header_pane_g5

0xd40a,	// (0x0001a985) bg_cl_header_pane_g6

0xd175,	// (0x0001a6f0) bg_cl_header_pane_g7

0xd17d,	// (0x0001a6f8) bg_cl_header_pane_g8

0xd16d,	// (0x0001a6e8) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001d024) bg_cl_header_pane_g

0x6fd8,	// (0x00014553) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6fd8,	// (0x00014553) hc_cl_list_double_graphic_heading_pane

0x6fe8,	// (0x00014563) hc_cl_list_single_graphic_pane_ParamLimits

0x6fe8,	// (0x00014563) hc_cl_list_single_graphic_pane

0x6ffb,	// (0x00014576) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6ffb,	// (0x00014576) hc_cl_list_single_graphic_pane_g1

0x7007,	// (0x00014582) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7007,	// (0x00014582) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001d037) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001d037) hc_cl_list_single_graphic_pane_g

0x701b,	// (0x00014596) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x701b,	// (0x00014596) hc_cl_list_single_graphic_pane_t1

0x6ffb,	// (0x00014576) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6ffb,	// (0x00014576) hc_cl_list_double_graphic_heading_pane_g1

0x7030,	// (0x000145ab) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7030,	// (0x000145ab) hc_cl_list_double_graphic_heading_pane_g2

0x7044,	// (0x000145bf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7044,	// (0x000145bf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001d03c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001d03c) hc_cl_list_double_graphic_heading_pane_g

0x7058,	// (0x000145d3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7058,	// (0x000145d3) hc_cl_list_double_graphic_heading_pane_t1

0x706d,	// (0x000145e8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x706d,	// (0x000145e8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001d043) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001d043) hc_cl_list_double_graphic_heading_pane_t

0xd74c,	// (0x0001acc7) vid4_progress_pane_g1

0xd75c,	// (0x0001acd7) vid4_progress_pane_g2

0x7082,	// (0x000145fd) vid4_progress_pane_g3

0xd76c,	// (0x0001ace7) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001d048) vid4_progress_pane_g

0x7094,	// (0x0001460f) vid4_progress_pane_t1

0xd78a,	// (0x0001ad05) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001d053) vid4_progress_pane_t

0x70aa,	// (0x00014625) wait_bar_pane_cp07

0xc1e7,	// (0x00019762) blid_firmament_pane_ParamLimits

0xc228,	// (0x000197a3) popup_blid_sat_info2_window_g1

0xc24c,	// (0x000197c7) popup_blid_sat_info2_window_t3

0xc25a,	// (0x000197d5) popup_blid_sat_info2_window_t4

0xc268,	// (0x000197e3) popup_blid_sat_info2_window_t5

0xc276,	// (0x000197f1) popup_blid_sat_info2_window_t6

0xc286,	// (0x00019801) popup_blid_sat_info2_window_t7

0xc294,	// (0x0001980f) popup_blid_sat_info2_window_t8

0xc2a2,	// (0x0001981d) popup_blid_sat_info2_window_t9

0xc2b0,	// (0x0001982b) popup_blid_sat_info2_window_t10

0xc36c,	// (0x000198e7) aid_firma_cardinal_ParamLimits

0xc380,	// (0x000198fb) blid_firmament_pane_t1_ParamLimits

0xc397,	// (0x00019912) blid_firmament_pane_t2_ParamLimits

0xc3ae,	// (0x00019929) blid_firmament_pane_t3_ParamLimits

0xc3c5,	// (0x00019940) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0001cc61) blid_firmament_pane_t_ParamLimits

0xc3dc,	// (0x00019957) blid_sat_info_pane_ParamLimits

0x95f3,	// (0x00016b6e) main_cam_set_pane_ParamLimits

0x556c,	// (0x00012ae7) aid_size_cell_colour_35_ParamLimits

0x558c,	// (0x00012b07) aid_size_cell_colour_112_ParamLimits

0x55ac,	// (0x00012b27) aid_size_cell_effect_ParamLimits

0xbeea,	// (0x00019465) bg_tb_trans_pane_cp02_ParamLimits

0xa4b7,	// (0x00017a32) heading_imed_pane_ParamLimits

0x55cb,	// (0x00012b46) listscroll_imed_pane_ParamLimits

0xb4d0,	// (0x00018a4b) popup_call2_audio_first_window_g5_ParamLimits

0xb4d0,	// (0x00018a4b) popup_call2_audio_first_window_g5

0x5af9,	// (0x00013074) aid_size_touch_image3_arrow_left_ParamLimits

0x5af9,	// (0x00013074) aid_size_touch_image3_arrow_left

0x5b19,	// (0x00013094) aid_size_touch_image3_arrow_right_ParamLimits

0x5b19,	// (0x00013094) aid_size_touch_image3_arrow_right

0xd79f,	// (0x0001ad1a) vid4_progress_pane_t3

0x58a0,	// (0x00012e1b) main_hwr_training_symbol_option_pane_ParamLimits

0x58a0,	// (0x00012e1b) main_hwr_training_symbol_option_pane

0xcbb2,	// (0x0001a12d) popup_hwr_training_preview_window_ParamLimits

0xcbb2,	// (0x0001a12d) popup_hwr_training_preview_window

0x58bc,	// (0x00012e37) hwr_training_navi_pane_g5_ParamLimits

0x58bc,	// (0x00012e37) hwr_training_navi_pane_g5

0xd129,	// (0x0001a6a4) popup_char_count_window

0x95f3,	// (0x00016b6e) bg_popup_sub_pane_cp20_ParamLimits

0x6a5a,	// (0x00013fd5) list_vitu2_match_list_pane_ParamLimits

0x6a69,	// (0x00013fe4) vitu2_page_scroll_pane_ParamLimits

0x6a69,	// (0x00013fe4) vitu2_page_scroll_pane

0xd7e0,	// (0x0001ad5b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7e0,	// (0x0001ad5b) list_single_hwr_training_symbol_option_pane

0xd7f3,	// (0x0001ad6e) list_single_hwr_training_symbol_option_pane_g1

0xd7fb,	// (0x0001ad76) list_single_hwr_training_symbol_option_pane_t1

0xd7d7,	// (0x0001ad52) bg_button_pane_cp023

0xd809,	// (0x0001ad84) bg_button_pane_cp024

0x70ea,	// (0x00014665) vitu2_page_scroll_pane_g1

0x70f2,	// (0x0001466d) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001d05a) vitu2_page_scroll_pane_g

0x70fa,	// (0x00014675) vitu2_page_scroll_pane_t1

0xc415,	// (0x00019990) popup_char_count_window_g1

0xd83c,	// (0x0001adb7) popup_char_count_window_g2

0xd845,	// (0x0001adc0) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001d05f) popup_char_count_window_g

0xd84e,	// (0x0001adc9) popup_char_count_window_t1

0x9589,	// (0x00016b04) main_vded2_pane

0xc8c1,	// (0x00019e3c) aid_size_cell_imed_line

0xc8cb,	// (0x00019e46) grid_imed_line_width_pane

0xd09c,	// (0x0001a617) vid4_indicators_pane_g4

0xd85c,	// (0x0001add7) cell_imed_line_width_pane_ParamLimits

0xd85c,	// (0x0001add7) cell_imed_line_width_pane

0xd86e,	// (0x0001ade9) cell_imed_line_width_pane_g1

0xd877,	// (0x0001adf2) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001d066) cell_imed_line_width_pane_g

0x7109,	// (0x00014684) main_vded2_pane_g1_ParamLimits

0x7109,	// (0x00014684) main_vded2_pane_g1

0x711f,	// (0x0001469a) main_vded2_pane_g2_ParamLimits

0x711f,	// (0x0001469a) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001d06b) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001d06b) main_vded2_pane_g

0x712f,	// (0x000146aa) vded2_slider_pane_ParamLimits

0x712f,	// (0x000146aa) vded2_slider_pane

0x713f,	// (0x000146ba) aid_size_touch_vded2_end

0x7147,	// (0x000146c2) aid_size_touch_vded2_playhead

0xd87f,	// (0x0001adfa) aid_size_touch_vded2_start

0xd887,	// (0x0001ae02) vded2_slider_bg_pane

0xd890,	// (0x0001ae0b) vded2_slider_pane_g1

0xd899,	// (0x0001ae14) vded2_slider_pane_g2

0x714f,	// (0x000146ca) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001d070) vded2_slider_pane_g

0xd8a1,	// (0x0001ae1c) vded2_slider_bg_pane_g1

0xd8aa,	// (0x0001ae25) vded2_slider_bg_pane_g2

0xd8b3,	// (0x0001ae2e) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001d077) vded2_slider_bg_pane_g

0x35ae,	// (0x00010b29) aid_postcard_touch_down_pane_ParamLimits

0x35ae,	// (0x00010b29) aid_postcard_touch_down_pane

0x35c0,	// (0x00010b3b) aid_postcard_touch_up_pane_ParamLimits

0x35c0,	// (0x00010b3b) aid_postcard_touch_up_pane

0x9589,	// (0x00016b04) main_blid2_pane

0xbef8,	// (0x00019473) popup_blid2_search_window

0x9589,	// (0x00016b04) blid2_gps_pane

0x9589,	// (0x00016b04) blid2_navig_pane

0x9589,	// (0x00016b04) blid2_search_pane

0x9589,	// (0x00016b04) blid2_tripm_pane

0x7158,	// (0x000146d3) blid2_search_pane_g1_ParamLimits

0x7158,	// (0x000146d3) blid2_search_pane_g1

0x716b,	// (0x000146e6) blid2_search_pane_t1_ParamLimits

0x716b,	// (0x000146e6) blid2_search_pane_t1

0x717d,	// (0x000146f8) aid_size_cell_blid2_gps_ParamLimits

0x717d,	// (0x000146f8) aid_size_cell_blid2_gps

0x7195,	// (0x00014710) blid2_gps_pane_g1_ParamLimits

0x7195,	// (0x00014710) blid2_gps_pane_g1

0x71a9,	// (0x00014724) grid_blid2_satellite_pane_ParamLimits

0x71a9,	// (0x00014724) grid_blid2_satellite_pane

0x71bd,	// (0x00014738) blid2_navig_pane_g1_ParamLimits

0x71bd,	// (0x00014738) blid2_navig_pane_g1

0x71c9,	// (0x00014744) blid2_navig_pane_t1_ParamLimits

0x71c9,	// (0x00014744) blid2_navig_pane_t1

0x71e2,	// (0x0001475d) blid2_navig_pane_t2_ParamLimits

0x71e2,	// (0x0001475d) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001d07e) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001d07e) blid2_navig_pane_t

0x71fb,	// (0x00014776) blid2_navig_ring_pane_ParamLimits

0x71fb,	// (0x00014776) blid2_navig_ring_pane

0x7210,	// (0x0001478b) blid2_speed_pane_ParamLimits

0x7210,	// (0x0001478b) blid2_speed_pane

0x721c,	// (0x00014797) blid2_tripm_pane_g1_ParamLimits

0x721c,	// (0x00014797) blid2_tripm_pane_g1

0x7231,	// (0x000147ac) blid2_tripm_pane_g2_ParamLimits

0x7231,	// (0x000147ac) blid2_tripm_pane_g2

0x7245,	// (0x000147c0) blid2_tripm_pane_g3_ParamLimits

0x7245,	// (0x000147c0) blid2_tripm_pane_g3

0x7259,	// (0x000147d4) blid2_tripm_pane_g4_ParamLimits

0x7259,	// (0x000147d4) blid2_tripm_pane_g4

0x726d,	// (0x000147e8) blid2_tripm_pane_g5_ParamLimits

0x726d,	// (0x000147e8) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001d083) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001d083) blid2_tripm_pane_g

0x728f,	// (0x0001480a) blid2_tripm_pane_t1_ParamLimits

0x728f,	// (0x0001480a) blid2_tripm_pane_t1

0x72a6,	// (0x00014821) blid2_tripm_pane_t2_ParamLimits

0x72a6,	// (0x00014821) blid2_tripm_pane_t2

0x72bd,	// (0x00014838) blid2_tripm_pane_t3_ParamLimits

0x72bd,	// (0x00014838) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001d090) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001d090) blid2_tripm_pane_t

0x7300,	// (0x0001487b) cell_blid2_satellite_pane_ParamLimits

0x7300,	// (0x0001487b) cell_blid2_satellite_pane

0x7318,	// (0x00014893) cell_blid2_satellite_pane_g1

0xd8bc,	// (0x0001ae37) cell_blid2_satellite_pane_t1

0xc3ec,	// (0x00019967) blid2_speed_pane_g1

0xd8ca,	// (0x0001ae45) blid2_speed_pane_t1

0xd8d8,	// (0x0001ae53) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001d099) blid2_speed_pane_t

0xc3ec,	// (0x00019967) blid2_navig_ring_pane_g1

0x7321,	// (0x0001489c) blid2_navig_ring_pane_g2

0x7329,	// (0x000148a4) blid2_navig_ring_pane_g3

0x7331,	// (0x000148ac) blid2_navig_ring_pane_g4

0x7339,	// (0x000148b4) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001d09e) blid2_navig_ring_pane_g

0x9589,	// (0x00016b04) bg_popup_window_pane_cp011

0xd8e6,	// (0x0001ae61) popup_blid2_search_window_g1

0xd8ee,	// (0x0001ae69) popup_blid2_search_window_t1

0xd8fc,	// (0x0001ae77) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001d0a9) popup_blid2_search_window_t

0xa128,	// (0x000176a3) main_browser_pane_g1

0x9d94,	// (0x0001730f) main_browser_pane_ParamLimits

0x95f3,	// (0x00016b6e) bg_button_pane_cp011_ParamLimits

0x635c,	// (0x000138d7) cell_vitu2_function_pane_g1_ParamLimits

0xbeea,	// (0x00019465) bg_popup_sub_pane_cp22_ParamLimits

0x6c2c,	// (0x000141a7) input_focus_pane_cp08_ParamLimits

0x6c43,	// (0x000141be) popup_vitu2_query_button_pane_ParamLimits

0x6c43,	// (0x000141be) popup_vitu2_query_button_pane

0x6c53,	// (0x000141ce) popup_vitu2_query_input_button_pane

0xd465,	// (0x0001a9e0) popup_vitu2_query_window_g1_ParamLimits

0x6c5b,	// (0x000141d6) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001cfaa) popup_vitu2_query_window_g_ParamLimits

0x9589,	// (0x00016b04) bg_button_pane_cp026

0x7341,	// (0x000148bc) popup_vitu2_query_input_button_pane_g1

0x9589,	// (0x00016b04) bg_button_pane_cp025

0xd90a,	// (0x0001ae85) popup_vitu2_query_button_pane_t1

0x4a10,	// (0x00011f8b) main_mp3_pane_t6

0x4a1e,	// (0x00011f99) popup_slider_window_cp01

0xd008,	// (0x0001a583) cam4_battery_pane

0xd05b,	// (0x0001a5d6) cam4_battery_pane_cp02

0xd744,	// (0x0001acbf) cam4_battery_pane_cp01

0xd744,	// (0x0001acbf) cam4_battery_pane_cp03

0xc3ec,	// (0x00019967) cam4_battery_pane_g1

0xd918,	// (0x0001ae93) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001d0ae) cam4_battery_pane_g

0xc2be,	// (0x00019839) popup_blid_sat_info2_window_t11

0xa8e3,	// (0x00017e5e) aid_size_touch_mv_arrow_left_ParamLimits

0xa90c,	// (0x00017e87) aid_size_touch_mv_arrow_right_ParamLimits

0xa96a,	// (0x00017ee5) navi_pane_g1_ParamLimits

0xa976,	// (0x00017ef1) navi_pane_g2_ParamLimits

0xa9a4,	// (0x00017f1f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001c960) navi_pane_g_ParamLimits

0x302b,	// (0x000105a6) navi_pane_mv_t1_ParamLimits

0x55d7,	// (0x00012b52) grid_imed_effect_pane_ParamLimits

0x1e63,	// (0x0000f3de) aid_placing_vt_slider_lsc

0xa06a,	// (0x000175e5) aid_placing_vt_slider_prt

0x95f3,	// (0x00016b6e) bg_tb_trans_pane_cp01_ParamLimits

0xc53b,	// (0x00019ab6) popup_image_details_window_g1_ParamLimits

0xc54e,	// (0x00019ac9) popup_image_details_window_g2_ParamLimits

0xc563,	// (0x00019ade) popup_image_details_window_g3_ParamLimits

0xc563,	// (0x00019ade) popup_image_details_window_g3

0xf72b,	// (0x0001cca6) popup_image_details_window_g_ParamLimits

0xc577,	// (0x00019af2) popup_image_details_window_t1_ParamLimits

0xc589,	// (0x00019b04) popup_image_details_window_t2_ParamLimits

0xc5a2,	// (0x00019b1d) popup_image_details_window_t3_ParamLimits

0xc5b6,	// (0x00019b31) popup_image_details_window_t4_ParamLimits

0xc5d1,	// (0x00019b4c) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0001ccad) popup_image_details_window_t_ParamLimits

0x6f96,	// (0x00014511) cl_header_name_pane_ParamLimits

0x6f96,	// (0x00014511) cl_header_name_pane

0x7349,	// (0x000148c4) cl_header_name_pane_t1_ParamLimits

0x7349,	// (0x000148c4) cl_header_name_pane_t1

0x736a,	// (0x000148e5) cl_header_name_pane_t2_ParamLimits

0x736a,	// (0x000148e5) cl_header_name_pane_t2

0x73ac,	// (0x00014927) cl_header_name_pane_t3_ParamLimits

0x73ac,	// (0x00014927) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001d0b3) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001d0b3) cl_header_name_pane_t

0xaa31,	// (0x00017fac) navi_pane_mv_g2_ParamLimits

0xd0e6,	// (0x0001a661) field_vitu2_entry_pane_g1_ParamLimits

0xd0f2,	// (0x0001a66d) field_vitu2_entry_pane_g2_ParamLimits

0xd0fe,	// (0x0001a679) field_vitu2_entry_pane_g3_ParamLimits

0xd0fe,	// (0x0001a679) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001cea9) field_vitu2_entry_pane_g_ParamLimits

0xd131,	// (0x0001a6ac) cell_vitu2_itu_pane_g1_ParamLimits

0x6204,	// (0x0001377f) cell_vitu2_itu_pane_g2_ParamLimits

0x6204,	// (0x0001377f) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001ceb5) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001ceb5) cell_vitu2_itu_pane_g

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp05_ParamLimits

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp05

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp03

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp04

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp10_ParamLimits

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp10

0x6f3c,	// (0x000144b7) bg_vkb2_func_pane_cp08

0x6f23,	// (0x0001449e) bg_vkb2_func_pane_cp06

0x6f30,	// (0x000144ab) bg_vkb2_func_pane_cp07

0xd812,	// (0x0001ad8d) bg_vkb2_func_pane_cp11_ParamLimits

0xd812,	// (0x0001ad8d) bg_vkb2_func_pane_cp11

0xd827,	// (0x0001ada2) bg_vkb2_func_pane_cp12_ParamLimits

0xd827,	// (0x0001ada2) bg_vkb2_func_pane_cp12

0x9589,	// (0x00016b04) bg_vkb2_func_pane_cp09

0xd14d,	// (0x0001a6c8) bg_vkb2_func_pane_g1

0xa239,	// (0x000177b4) bg_vkb2_func_pane_g2

0xd155,	// (0x0001a6d0) bg_vkb2_func_pane_g3

0xd15d,	// (0x0001a6d8) bg_vkb2_func_pane_g4

0xd40a,	// (0x0001a985) bg_vkb2_func_pane_g5

0xd175,	// (0x0001a6f0) bg_vkb2_func_pane_g6

0xd17d,	// (0x0001a6f8) bg_vkb2_func_pane_g7

0xd16d,	// (0x0001a6e8) bg_vkb2_func_pane_g8

0xa219,	// (0x00017794) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001d0ba) bg_vkb2_func_pane_g

0x727f,	// (0x000147fa) blid2_tripm_pane_g6_ParamLimits

0x727f,	// (0x000147fa) blid2_tripm_pane_g6

0xcea7,	// (0x0001a422) mp4_progress_pane_g1

0x72ee,	// (0x00014869) blid2_tripm_values_pane_ParamLimits

0x72ee,	// (0x00014869) blid2_tripm_values_pane

0x73dd,	// (0x00014958) blid2_tripm_values_pane_t1

0x73eb,	// (0x00014966) blid2_tripm_values_pane_t2

0x73f9,	// (0x00014974) blid2_tripm_values_pane_t3

0x7407,	// (0x00014982) blid2_tripm_values_pane_t4

0x7415,	// (0x00014990) blid2_tripm_values_pane_t5

0x7423,	// (0x0001499e) blid2_tripm_values_pane_t6

0x7431,	// (0x000149ac) blid2_tripm_values_pane_t7

0x743f,	// (0x000149ba) blid2_tripm_values_pane_t8

0x744d,	// (0x000149c8) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001d0cd) blid2_tripm_values_pane_t

0x1e9a,	// (0x0000f415) call_video_pane_t1_ParamLimits

0x1eb4,	// (0x0000f42f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001c7e9) call_video_pane_t_ParamLimits

0x34bd,	// (0x00010a38) msg_header_pane_g1_ParamLimits

0xac10,	// (0x0001818b) msg_header_pane_g2_ParamLimits

0xac10,	// (0x0001818b) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001ca03) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001ca03) msg_header_pane_g

0x9d94,	// (0x0001730f) main_clock2_pane_ParamLimits

0x52f0,	// (0x0001286b) grid_clock2_toolbar_pane_ParamLimits

0x52f0,	// (0x0001286b) grid_clock2_toolbar_pane

0x52f0,	// (0x0001286b) listscroll_clock2_pane_ParamLimits

0x52f0,	// (0x0001286b) listscroll_clock2_pane

0x53d3,	// (0x0001294e) main_clock2_pane_t3_ParamLimits

0x53d3,	// (0x0001294e) main_clock2_pane_t3

0x53f5,	// (0x00012970) main_clock2_pane_t4_ParamLimits

0x53f5,	// (0x00012970) main_clock2_pane_t4

0xd922,	// (0x0001ae9d) cell_clock2_toolbar_pane

0xd92a,	// (0x0001aea5) cell_clock2_toolbar_pane_cp01

0xd92a,	// (0x0001aea5) cell_clock2_toolbar_pane_cp02

0xd932,	// (0x0001aead) cell_clock2_toolbar_pane_cp03

0xd93a,	// (0x0001aeb5) list_clock2_pane

0xa868,	// (0x00017de3) scroll_pane_cp10

0xd942,	// (0x0001aebd) list_single_clock2_pane_ParamLimits

0xd942,	// (0x0001aebd) list_single_clock2_pane

0x9fc9,	// (0x00017544) list_highlight_pane_cp08

0xd94f,	// (0x0001aeca) list_single_clock2_pane_t1

0xd95d,	// (0x0001aed8) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001d0e0) list_single_clock2_pane_t

0x9589,	// (0x00016b04) bg_button_pane_cp10

0xd96b,	// (0x0001aee6) cell_clock2_toolbar_pane_g1

0x3542,	// (0x00010abd) aid_main_viewer_pane_g1_ParamLimits

0x3542,	// (0x00010abd) aid_main_viewer_pane_g1

0x354e,	// (0x00010ac9) aid_main_viewer_pane_g2_ParamLimits

0x354e,	// (0x00010ac9) aid_main_viewer_pane_g2

0x355a,	// (0x00010ad5) aid_main_viewer_pane_g3_ParamLimits

0x355a,	// (0x00010ad5) aid_main_viewer_pane_g3

0x3569,	// (0x00010ae4) aid_main_viewer_pane_g4_ParamLimits

0x3569,	// (0x00010ae4) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001ca14) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001ca14) aid_main_viewer_pane_g

0x3d71,	// (0x000112ec) main_calc_pane_ParamLimits

0x3d85,	// (0x00011300) main_dialer2_pane_ParamLimits

0x9589,	// (0x00016b04) main_cam6_pane

0x9589,	// (0x00016b04) main_vid6_pane

0x52fc,	// (0x00012877) listscroll_gen_pane_cp06_ParamLimits

0x52fc,	// (0x00012877) listscroll_gen_pane_cp06

0x5416,	// (0x00012991) main_clock2_pane_t5_ParamLimits

0x5416,	// (0x00012991) main_clock2_pane_t5

0x546d,	// (0x000129e8) aid_call2_pane_cp10_ParamLimits

0x547f,	// (0x000129fa) aid_call_pane_cp10_ParamLimits

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5491,	// (0x00012a0c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5491,	// (0x00012a0c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8d7,	// (0x00017e52) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0001cd62) popup_clock_analogue_window_cp10_g_ParamLimits

0x54a3,	// (0x00012a1e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5aa6,	// (0x00013021) cell_dialer2_keypad_pane_g2_ParamLimits

0x5aa6,	// (0x00013021) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001ce48) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001ce48) cell_dialer2_keypad_pane_g

0x5ac2,	// (0x0001303d) cell_dialer2_keypad_pane_t1

0x6632,	// (0x00013bad) main_cset_text2_pane_ParamLimits

0x6632,	// (0x00013bad) main_cset_text2_pane

0xd64b,	// (0x0001abc6) area_vitu2_query_pane_g1_ParamLimits

0x6ec8,	// (0x00014443) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001cffd) area_vitu2_query_pane_g_ParamLimits

0xd6cf,	// (0x0001ac4a) area_vitu2_query_pane_t7_ParamLimits

0xd6cf,	// (0x0001ac4a) area_vitu2_query_pane_t7

0x6f23,	// (0x0001449e) bg_button_pane_cp018_ParamLimits

0x6f30,	// (0x000144ab) bg_button_pane_cp021_ParamLimits

0x6f3c,	// (0x000144b7) bg_button_pane_cp022_ParamLimits

0x6f3c,	// (0x000144b7) bg_vkb2_func_pane_cp08_ParamLimits

0x6f23,	// (0x0001449e) bg_vkb2_func_pane_cp06_ParamLimits

0x6f30,	// (0x000144ab) bg_vkb2_func_pane_cp07_ParamLimits

0x6f4b,	// (0x000144c6) input_focus_pane_cp09_ParamLimits

0xd973,	// (0x0001aeee) cam6_autofocus_pane_ParamLimits

0xd973,	// (0x0001aeee) cam6_autofocus_pane

0x745b,	// (0x000149d6) cam6_image_uncrop_pane_ParamLimits

0x745b,	// (0x000149d6) cam6_image_uncrop_pane

0x7468,	// (0x000149e3) cam6_indi_pane_ParamLimits

0x7468,	// (0x000149e3) cam6_indi_pane

0x747e,	// (0x000149f9) cam6_mode_pane_ParamLimits

0x747e,	// (0x000149f9) cam6_mode_pane

0x7490,	// (0x00014a0b) cam6_timer_pane_ParamLimits

0x7490,	// (0x00014a0b) cam6_timer_pane

0x749c,	// (0x00014a17) cam6_zoom_pane_ParamLimits

0x749c,	// (0x00014a17) cam6_zoom_pane

0x74a8,	// (0x00014a23) cam6_mode_pane_g1_ParamLimits

0x74a8,	// (0x00014a23) cam6_mode_pane_g1

0x74b8,	// (0x00014a33) cam6_mode_pane_g2_ParamLimits

0x74b8,	// (0x00014a33) cam6_mode_pane_g2

0x74c8,	// (0x00014a43) cam6_mode_pane_g3_ParamLimits

0x74c8,	// (0x00014a43) cam6_mode_pane_g3

0x74d8,	// (0x00014a53) cam6_mode_pane_g4_ParamLimits

0x74d8,	// (0x00014a53) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001d0e5) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001d0e5) cam6_mode_pane_g

0xd97f,	// (0x0001aefa) bg_tb_trans_pane_cp08_ParamLimits

0xd97f,	// (0x0001aefa) bg_tb_trans_pane_cp08

0xd98d,	// (0x0001af08) cam6_battery_pane_ParamLimits

0xd98d,	// (0x0001af08) cam6_battery_pane

0xd9a3,	// (0x0001af1e) cam6_indi_pane_g1_ParamLimits

0xd9a3,	// (0x0001af1e) cam6_indi_pane_g1

0xd9b5,	// (0x0001af30) cam6_indi_pane_g2_ParamLimits

0xd9b5,	// (0x0001af30) cam6_indi_pane_g2

0xd9c7,	// (0x0001af42) cam6_indi_pane_g3_ParamLimits

0xd9c7,	// (0x0001af42) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001d0ee) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001d0ee) cam6_indi_pane_g

0xd9d9,	// (0x0001af54) cam6_indi_pane_t1_ParamLimits

0xd9d9,	// (0x0001af54) cam6_indi_pane_t1

0x600a,	// (0x00013585) cam6_autofocus_pane_g1

0x6012,	// (0x0001358d) cam6_autofocus_pane_g2

0x601a,	// (0x00013595) cam6_autofocus_pane_g3

0x6022,	// (0x0001359d) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001d0f5) cam6_autofocus_pane_g

0xd9ff,	// (0x0001af7a) cam6_timer_pane_g1

0xda07,	// (0x0001af82) cam6_timer_pane_t1

0xda15,	// (0x0001af90) cam6_zoom_cont_pane

0xda1d,	// (0x0001af98) cam6_zoom_pane_g1

0xda25,	// (0x0001afa0) cam6_zoom_pane_g2

0x74e8,	// (0x00014a63) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001d0fe) cam6_zoom_pane_g

0xc3ec,	// (0x00019967) cam6_battery_pane_g1

0xc3ec,	// (0x00019967) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0001cc6a) cam6_battery_pane_g

0xda2d,	// (0x0001afa8) cam6_zoom_cont_pane_g1

0xda36,	// (0x0001afb1) cam6_zoom_cont_pane_g2

0xda3f,	// (0x0001afba) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001d105) cam6_zoom_cont_pane_g

0x7505,	// (0x00014a80) cam6_mode_pane_cp_ParamLimits

0x7505,	// (0x00014a80) cam6_mode_pane_cp

0x749c,	// (0x00014a17) cam6_zoom_pane_cp_ParamLimits

0x749c,	// (0x00014a17) cam6_zoom_pane_cp

0x7517,	// (0x00014a92) vid6_image_uncrop_cif_pane_ParamLimits

0x7517,	// (0x00014a92) vid6_image_uncrop_cif_pane

0x7525,	// (0x00014aa0) vid6_image_uncrop_nhd_pane_ParamLimits

0x7525,	// (0x00014aa0) vid6_image_uncrop_nhd_pane

0x745b,	// (0x000149d6) vid6_image_uncrop_vga_pane_ParamLimits

0x745b,	// (0x000149d6) vid6_image_uncrop_vga_pane

0x7532,	// (0x00014aad) vid6_image_uncrop_wvga_pane_ParamLimits

0x7532,	// (0x00014aad) vid6_image_uncrop_wvga_pane

0x753f,	// (0x00014aba) vid6_indi_pane_ParamLimits

0x753f,	// (0x00014aba) vid6_indi_pane

0xd97f,	// (0x0001aefa) bg_tb_trans_pane_cp09_ParamLimits

0xd97f,	// (0x0001aefa) bg_tb_trans_pane_cp09

0xda53,	// (0x0001afce) cam6_battery_pane_cp_ParamLimits

0xda53,	// (0x0001afce) cam6_battery_pane_cp

0xda5f,	// (0x0001afda) vid6_indi_pane_g1_ParamLimits

0xda5f,	// (0x0001afda) vid6_indi_pane_g1

0xda71,	// (0x0001afec) vid6_indi_pane_g2_ParamLimits

0xda71,	// (0x0001afec) vid6_indi_pane_g2

0xda83,	// (0x0001affe) vid6_indi_pane_g3_ParamLimits

0xda83,	// (0x0001affe) vid6_indi_pane_g3

0xda98,	// (0x0001b013) vid6_indi_pane_g4_ParamLimits

0xda98,	// (0x0001b013) vid6_indi_pane_g4

0xdaad,	// (0x0001b028) vid6_indi_pane_g5_ParamLimits

0xdaad,	// (0x0001b028) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001d10c) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001d10c) vid6_indi_pane_g

0xdac7,	// (0x0001b042) vid6_indi_pane_t1_ParamLimits

0xdac7,	// (0x0001b042) vid6_indi_pane_t1

0xdadd,	// (0x0001b058) vid6_indi_pane_t2_ParamLimits

0xdadd,	// (0x0001b058) vid6_indi_pane_t2

0xdb05,	// (0x0001b080) vid6_indi_pane_t3_ParamLimits

0xdb05,	// (0x0001b080) vid6_indi_pane_t3

0xdb2d,	// (0x0001b0a8) vid6_indi_pane_t4_ParamLimits

0xdb2d,	// (0x0001b0a8) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001d117) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001d117) vid6_indi_pane_t

0xdb51,	// (0x0001b0cc) wait_bar_pane_cp08

0x7556,	// (0x00014ad1) main_cset_text2_pane_t1_ParamLimits

0x7556,	// (0x00014ad1) main_cset_text2_pane_t1

0x74f0,	// (0x00014a6b) listscroll_gen_pane_cp06_t1_ParamLimits

0x74f0,	// (0x00014a6b) listscroll_gen_pane_cp06_t1

0x9589,	// (0x00016b04) main_cam6_set_pane

0xc61b,	// (0x00019b96) bg_tb_trans_pane_cp06_ParamLimits

0xd010,	// (0x0001a58b) cam4_indicators_pane_g1_ParamLimits

0xd021,	// (0x0001a59c) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001ce85) cam4_indicators_pane_g_ParamLimits

0xd039,	// (0x0001a5b4) cam4_indicators_pane_t1_ParamLimits

0x95f3,	// (0x00016b6e) bg_tb_trans_pane_cp07_ParamLimits

0xd063,	// (0x0001a5de) vid4_indicators_pane_g1_ParamLimits

0xd077,	// (0x0001a5f2) vid4_indicators_pane_g2_ParamLimits

0xd08b,	// (0x0001a606) vid4_indicators_pane_g3_ParamLimits

0xd09c,	// (0x0001a617) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001ce97) vid4_indicators_pane_g_ParamLimits

0xd0b8,	// (0x0001a633) vid4_indicators_pane_t1_ParamLimits

0xd74c,	// (0x0001acc7) vid4_progress_pane_g1_ParamLimits

0xd75c,	// (0x0001acd7) vid4_progress_pane_g2_ParamLimits

0x7082,	// (0x000145fd) vid4_progress_pane_g3_ParamLimits

0xd76c,	// (0x0001ace7) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001d048) vid4_progress_pane_g_ParamLimits

0x7094,	// (0x0001460f) vid4_progress_pane_t1_ParamLimits

0xd78a,	// (0x0001ad05) vid4_progress_pane_t2_ParamLimits

0xd79f,	// (0x0001ad1a) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001d053) vid4_progress_pane_t_ParamLimits

0x70aa,	// (0x00014625) wait_bar_pane_cp07_ParamLimits

0x7571,	// (0x00014aec) main_cam6_set_pane_g2_ParamLimits

0x7571,	// (0x00014aec) main_cam6_set_pane_g2

0x7593,	// (0x00014b0e) main_cset6_listscroll_pane_ParamLimits

0x7593,	// (0x00014b0e) main_cset6_listscroll_pane

0x75ad,	// (0x00014b28) main_cset6_slider_pane_ParamLimits

0x75ad,	// (0x00014b28) main_cset6_slider_pane

0x75c3,	// (0x00014b3e) main_cset6_text2_pane_ParamLimits

0x75c3,	// (0x00014b3e) main_cset6_text2_pane

0xdb60,	// (0x0001b0db) main_cset6_text_pane

0xdb68,	// (0x0001b0e3) main_cset_list_pane_copy1_ParamLimits

0xdb68,	// (0x0001b0e3) main_cset_list_pane_copy1

0xdb78,	// (0x0001b0f3) scroll_pane_cp028_copy1

0x75d1,	// (0x00014b4c) cset_list_set_pane_copy1

0x75e2,	// (0x00014b5d) aid_position_infowindow_above_copy1

0x75ea,	// (0x00014b65) aid_position_infowindow_below_copy1

0x75f2,	// (0x00014b6d) cset_list_set_pane_g1_copy1

0x75fa,	// (0x00014b75) cset_list_set_pane_g3_copy1_ParamLimits

0x75fa,	// (0x00014b75) cset_list_set_pane_g3_copy1

0x7609,	// (0x00014b84) cset_list_set_pane_t1_copy1_ParamLimits

0x7609,	// (0x00014b84) cset_list_set_pane_t1_copy1

0x95f3,	// (0x00016b6e) list_highlight_pane_cp021_copy1_ParamLimits

0x95f3,	// (0x00016b6e) list_highlight_pane_cp021_copy1

0xdb81,	// (0x0001b0fc) cset6_slider_pane_ParamLimits

0xdb81,	// (0x0001b0fc) cset6_slider_pane

0xdbad,	// (0x0001b128) main_cset6_slider_pane_g1_ParamLimits

0xdbad,	// (0x0001b128) main_cset6_slider_pane_g1

0x761e,	// (0x00014b99) main_cset6_slider_pane_g2_ParamLimits

0x761e,	// (0x00014b99) main_cset6_slider_pane_g2

0xd2a6,	// (0x0001a821) main_cset6_slider_pane_g3_ParamLimits

0xd2a6,	// (0x0001a821) main_cset6_slider_pane_g3

0x7646,	// (0x00014bc1) main_cset6_slider_pane_g4_ParamLimits

0x7646,	// (0x00014bc1) main_cset6_slider_pane_g4

0x66fd,	// (0x00013c78) main_cset6_slider_pane_g5_ParamLimits

0x66fd,	// (0x00013c78) main_cset6_slider_pane_g5

0xd2a6,	// (0x0001a821) main_cset6_slider_pane_g7_ParamLimits

0xd2a6,	// (0x0001a821) main_cset6_slider_pane_g7

0xd2b2,	// (0x0001a82d) main_cset6_slider_pane_g8_ParamLimits

0xd2b2,	// (0x0001a82d) main_cset6_slider_pane_g8

0x66b5,	// (0x00013c30) main_cset6_slider_pane_g9_ParamLimits

0x66b5,	// (0x00013c30) main_cset6_slider_pane_g9

0x66c1,	// (0x00013c3c) main_cset6_slider_pane_g10_ParamLimits

0x66c1,	// (0x00013c3c) main_cset6_slider_pane_g10

0xd2be,	// (0x0001a839) main_cset6_slider_pane_g11_ParamLimits

0xd2be,	// (0x0001a839) main_cset6_slider_pane_g11

0xd2ca,	// (0x0001a845) main_cset6_slider_pane_g12_ParamLimits

0xd2ca,	// (0x0001a845) main_cset6_slider_pane_g12

0x66cd,	// (0x00013c48) main_cset6_slider_pane_g13_ParamLimits

0x66cd,	// (0x00013c48) main_cset6_slider_pane_g13

0x66d9,	// (0x00013c54) main_cset6_slider_pane_g14_ParamLimits

0x66d9,	// (0x00013c54) main_cset6_slider_pane_g14

0x7652,	// (0x00014bcd) main_cset6_slider_pane_g15_ParamLimits

0x7652,	// (0x00014bcd) main_cset6_slider_pane_g15

0x66fd,	// (0x00013c78) main_cset6_slider_pane_g16_ParamLimits

0x66fd,	// (0x00013c78) main_cset6_slider_pane_g16

0x6709,	// (0x00013c84) main_cset6_slider_pane_g17_ParamLimits

0x6709,	// (0x00013c84) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001d120) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001d120) main_cset6_slider_pane_g

0xdbd5,	// (0x0001b150) main_cset6_slider_pane_t1_ParamLimits

0xdbd5,	// (0x0001b150) main_cset6_slider_pane_t1

0x7676,	// (0x00014bf1) main_cset6_slider_pane_t2_ParamLimits

0x7676,	// (0x00014bf1) main_cset6_slider_pane_t2

0x76a1,	// (0x00014c1c) main_cset6_slider_pane_t3_ParamLimits

0x76a1,	// (0x00014c1c) main_cset6_slider_pane_t3

0x76cc,	// (0x00014c47) main_cset6_slider_pane_t4_ParamLimits

0x76cc,	// (0x00014c47) main_cset6_slider_pane_t4

0x76f7,	// (0x00014c72) main_cset6_slider_pane_t5_ParamLimits

0x76f7,	// (0x00014c72) main_cset6_slider_pane_t5

0xdc16,	// (0x0001b191) main_cset6_slider_pane_t7_ParamLimits

0xdc16,	// (0x0001b191) main_cset6_slider_pane_t7

0x7722,	// (0x00014c9d) main_cset6_slider_pane_t8_ParamLimits

0x7722,	// (0x00014c9d) main_cset6_slider_pane_t8

0x7746,	// (0x00014cc1) main_cset6_slider_pane_t9_ParamLimits

0x7746,	// (0x00014cc1) main_cset6_slider_pane_t9

0x776a,	// (0x00014ce5) main_cset6_slider_pane_t10_ParamLimits

0x776a,	// (0x00014ce5) main_cset6_slider_pane_t10

0x778e,	// (0x00014d09) main_cset6_slider_pane_t11_ParamLimits

0x778e,	// (0x00014d09) main_cset6_slider_pane_t11

0xdc4c,	// (0x0001b1c7) main_cset6_slider_pane_t14_ParamLimits

0xdc4c,	// (0x0001b1c7) main_cset6_slider_pane_t14

0xdc85,	// (0x0001b200) main_cset6_slider_pane_t15_ParamLimits

0xdc85,	// (0x0001b200) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001d145) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001d145) main_cset6_slider_pane_t

0xd3a2,	// (0x0001a91d) cset_slider_pane_g1_copy1

0xd3ab,	// (0x0001a926) cset_slider_pane_g2_copy1

0xd3b4,	// (0x0001a92f) cset_slider_pane_g3_copy1

0x9589,	// (0x00016b04) bg_popup_sub_pane_cp011_copy1

0xdcbe,	// (0x0001b239) main_cset_text_pane_g1_copy1

0xd479,	// (0x0001a9f4) main_cset_text_pane_t1_copy1

0xd487,	// (0x0001aa02) main_cset_text_pane_t2_copy1

0xd495,	// (0x0001aa10) main_cset_text_pane_t3_copy1

0xd4a3,	// (0x0001aa1e) main_cset_text_pane_t4_copy1

0xdcc6,	// (0x0001b241) main_cset_text_pane_t5_copy1

0xdcd4,	// (0x0001b24f) main_cset_text_pane_t6_copy1

0xdce2,	// (0x0001b25d) main_cset_text_pane_t7_copy1

0x7883,	// (0x00014dfe) main_cset_text2_pane_t1_copy1

0x95f3,	// (0x00016b6e) main_ncimui_pane

0x3f9f,	// (0x0001151a) popup_query_ncimui_window_ParamLimits

0x3f9f,	// (0x0001151a) popup_query_ncimui_window

0xc680,	// (0x00019bfb) field_cale_ev2_pane_g4_ParamLimits

0xc680,	// (0x00019bfb) field_cale_ev2_pane_g4

0x599f,	// (0x00012f1a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x599f,	// (0x00012f1a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0001ce23) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0001ce23) cell_video_dialer_keypad_pane_g

0x59b7,	// (0x00012f32) cell_video_dialer_keypad_pane_t1

0x9589,	// (0x00016b04) bg_popup_window_pane_cp012

0xa75f,	// (0x00017cda) heading_pane_cp06

0xdd0e,	// (0x0001b289) ncim_query_content_pane

0x9589,	// (0x00016b04) bg_popup_heading_pane_cp01

0xdd16,	// (0x0001b291) ncim_heading_pane_t1

0xdd24,	// (0x0001b29f) ncim_indicator_popup_pane

0xdd36,	// (0x0001b2b1) ncim_query_button_pane

0xdd4a,	// (0x0001b2c5) ncim_query_content_pane_t1

0xdd5c,	// (0x0001b2d7) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001d189) ncim_query_content_pane_t

0xdd96,	// (0x0001b311) ncim_query_list_pane

0xdda8,	// (0x0001b323) ncim_query_popup_pane

0xdd24,	// (0x0001b29f) ncim_indicator_popup_pane_ParamLimits

0x79c3,	// (0x00014f3e) ncim_query_content_pane_g1_ParamLimits

0x79c3,	// (0x00014f3e) ncim_query_content_pane_g1

0xdd4a,	// (0x0001b2c5) ncim_query_content_pane_t1_ParamLimits

0xdd5c,	// (0x0001b2d7) ncim_query_content_pane_t2_ParamLimits

0x79cf,	// (0x00014f4a) ncim_query_content_pane_t3_ParamLimits

0x79cf,	// (0x00014f4a) ncim_query_content_pane_t3

0x79f7,	// (0x00014f72) ncim_query_content_pane_t4_ParamLimits

0x79f7,	// (0x00014f72) ncim_query_content_pane_t4

0x7a1f,	// (0x00014f9a) ncim_query_content_pane_t5_ParamLimits

0x7a1f,	// (0x00014f9a) ncim_query_content_pane_t5

0xdd6e,	// (0x0001b2e9) ncim_query_content_pane_t6_ParamLimits

0xdd6e,	// (0x0001b2e9) ncim_query_content_pane_t6

0xfc0e,	// (0x0001d189) ncim_query_content_pane_t_ParamLimits

0xdd96,	// (0x0001b311) ncim_query_list_pane_ParamLimits

0xdda8,	// (0x0001b323) ncim_query_popup_pane_ParamLimits

0xddbc,	// (0x0001b337) wait_bar_pane_cp04

0x9589,	// (0x00016b04) input_focus_pane_cp011

0xddc4,	// (0x0001b33f) ncim_query_popup_pane_t1

0xddd2,	// (0x0001b34d) ncim_list_query_list_pane_ParamLimits

0xddd2,	// (0x0001b34d) ncim_list_query_list_pane

0x9589,	// (0x00016b04) bg_button_pane_cp027

0xdde5,	// (0x0001b360) ncim_query_button_pane_g1

0x9589,	// (0x00016b04) list_highlight_pane_cp012

0xddef,	// (0x0001b36a) ncim_list_query_list_pane_g1

0xddf7,	// (0x0001b372) ncim_list_query_list_pane_t1

0xd02d,	// (0x0001a5a8) cam4_indicators_pane_g3_ParamLimits

0xd02d,	// (0x0001a5a8) cam4_indicators_pane_g3

0xd0a8,	// (0x0001a623) vid4_indicators_pane_g5_ParamLimits

0xd0a8,	// (0x0001a623) vid4_indicators_pane_g5

0xd77b,	// (0x0001acf6) vid4_progress_pane_g5_ParamLimits

0xd77b,	// (0x0001acf6) vid4_progress_pane_g5

0x78af,	// (0x00014e2a) main_ncimui_pane_g1

0x7918,	// (0x00014e93) ncimui_group_query_pane_ParamLimits

0x7918,	// (0x00014e93) ncimui_group_query_pane

0x7960,	// (0x00014edb) ncimui_list_pane_ParamLimits

0x7960,	// (0x00014edb) ncimui_list_pane

0x7986,	// (0x00014f01) ncimui_text_pane_ParamLimits

0x7986,	// (0x00014f01) ncimui_text_pane

0x7a47,	// (0x00014fc2) ncimui_text_pane_t1_ParamLimits

0x7a47,	// (0x00014fc2) ncimui_text_pane_t1

0xde05,	// (0x0001b380) ncimui_list_single_graphic_pane_ParamLimits

0xde05,	// (0x0001b380) ncimui_list_single_graphic_pane

0x7a64,	// (0x00014fdf) ncimui_query_pane_ParamLimits

0x7a64,	// (0x00014fdf) ncimui_query_pane

0x9589,	// (0x00016b04) list_highlight_pane_cp013

0xde15,	// (0x0001b390) ncim_list_query_list_pane_t1_copy1

0xde23,	// (0x0001b39e) ncim_list_single_graphic_pane_g1

0x7a77,	// (0x00014ff2) ncim_query_button_pane_cp01

0x7a83,	// (0x00014ffe) ncim_query_entry_pane_ParamLimits

0x7a83,	// (0x00014ffe) ncim_query_entry_pane

0x7a96,	// (0x00015011) ncimui_query_pane_g1

0x7aa2,	// (0x0001501d) ncimui_query_pane_t1_ParamLimits

0x7aa2,	// (0x0001501d) ncimui_query_pane_t1

0x95f3,	// (0x00016b6e) input_focus_pane_cp012

0xde2b,	// (0x0001b3a6) ncim_query_entry_pane_t1

0x9d94,	// (0x0001730f) main_im_pane_ParamLimits

0x95f3,	// (0x00016b6e) main_mobtv_pane_ParamLimits

0x95f3,	// (0x00016b6e) main_mobtv_pane

0x66b5,	// (0x00013c30) main_cset6_slider_pane_g18_ParamLimits

0x66b5,	// (0x00013c30) main_cset6_slider_pane_g18

0x766a,	// (0x00014be5) main_cset6_slider_pane_g19_ParamLimits

0x766a,	// (0x00014be5) main_cset6_slider_pane_g19

0xde3d,	// (0x0001b3b8) bg_main_mobtv_pane_ParamLimits

0xde3d,	// (0x0001b3b8) bg_main_mobtv_pane

0x7abb,	// (0x00015036) main_mobtv_info_pane

0x7ac4,	// (0x0001503f) main_mobtv_loading_pane_ParamLimits

0x7ac4,	// (0x0001503f) main_mobtv_loading_pane

0xde4b,	// (0x0001b3c6) main_mobtv_pg_channel_list_pane

0xde55,	// (0x0001b3d0) main_mobtv_pg_hdr_pane

0x7ad1,	// (0x0001504c) main_mobtv_programe_curr_pane_ParamLimits

0x7ad1,	// (0x0001504c) main_mobtv_programe_curr_pane

0x7ade,	// (0x00015059) main_mobtv_programe_next_pane_ParamLimits

0x7ade,	// (0x00015059) main_mobtv_programe_next_pane

0xde5e,	// (0x0001b3d9) popup_mobtv_noti_window

0xc3ec,	// (0x00019967) main_tv_pg_hdr_pane_g1

0xde66,	// (0x0001b3e1) main_tv_pg_hdr_pane_g2

0xde6e,	// (0x0001b3e9) main_tv_pg_hdr_pane_g3

0xde76,	// (0x0001b3f1) main_tv_pg_hdr_pane_g4

0xde7e,	// (0x0001b3f9) main_tv_pg_hdr_pane_g5

0xde86,	// (0x0001b401) main_tv_pg_hdr_pane_g6

0xde8e,	// (0x0001b409) main_tv_pg_hdr_pane_g7

0xde96,	// (0x0001b411) main_tv_pg_hdr_pane_g8

0xde9e,	// (0x0001b419) main_tv_pg_hdr_pane_g9

0xdea6,	// (0x0001b421) main_tv_pg_hdr_pane_g10

0xdeb0,	// (0x0001b42b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001d196) main_tv_pg_hdr_pane_g

0xdeba,	// (0x0001b435) main_tv_pg_hdr_pane_t1

0xdec8,	// (0x0001b443) main_tv_pg_hdr_pane_t2

0xded6,	// (0x0001b451) main_tv_pg_hdr_pane_t3

0xdee4,	// (0x0001b45f) main_tv_pg_hdr_pane_t4

0xdef2,	// (0x0001b46d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001d1ad) main_tv_pg_hdr_pane_t

0xdf00,	// (0x0001b47b) single_mobtv_pg_channel_pane_ParamLimits

0xdf00,	// (0x0001b47b) single_mobtv_pg_channel_pane

0xdf12,	// (0x0001b48d) single_mobtv_pg_channel_table_pane

0xdf1b,	// (0x0001b496) single_mobtv_pg_channel_thumb_pane

0xdf24,	// (0x0001b49f) single_tv_pg_channel_pane_g1

0xdf2d,	// (0x0001b4a8) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001d1b8) single_tv_pg_channel_pane_g

0xc61b,	// (0x00019b96) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc61b,	// (0x00019b96) bg_single_mobtv_pg_channel_thumb_pane

0xdf36,	// (0x0001b4b1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf36,	// (0x0001b4b1) single_mobtv_pg_channel_thumb_pane_g1

0xdf44,	// (0x0001b4bf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf44,	// (0x0001b4bf) single_mobtv_pg_channel_thumb_pane_g2

0xdf50,	// (0x0001b4cb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf50,	// (0x0001b4cb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001d1bd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001d1bd) single_mobtv_pg_channel_thumb_pane_g

0xdf5c,	// (0x0001b4d7) single_mobtv_pg_channel_thumb_pane_t1

0xdf6a,	// (0x0001b4e5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001d1c4) single_mobtv_pg_channel_thumb_pane_t

0xc3ec,	// (0x00019967) bg_single_mobtv_pg_channel_table_pane_g1

0xc3ec,	// (0x00019967) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0001cc6a) bg_single_mobtv_pg_channel_table_pane_g

0xdf78,	// (0x0001b4f3) single_mobtv_pg_channel_table_pane_t1

0xdf86,	// (0x0001b501) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001d1c9) single_mobtv_pg_channel_table_pane_t

0x7af3,	// (0x0001506e) main_mobtv_info_pane_g1_ParamLimits

0x7af3,	// (0x0001506e) main_mobtv_info_pane_g1

0x7b0f,	// (0x0001508a) main_mobtv_info_pane_t1_ParamLimits

0x7b0f,	// (0x0001508a) main_mobtv_info_pane_t1

0x7b75,	// (0x000150f0) main_mobtv_info_pane_t2_ParamLimits

0x7b75,	// (0x000150f0) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001d1d3) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001d1d3) main_mobtv_info_pane_t

0x7bf8,	// (0x00015173) wait_bar_pane_cp05

0x7c08,	// (0x00015183) main_mobtv_loading_pane_g1_ParamLimits

0x7c08,	// (0x00015183) main_mobtv_loading_pane_g1

0x7c19,	// (0x00015194) main_mobtv_loading_pane_g2_ParamLimits

0x7c19,	// (0x00015194) main_mobtv_loading_pane_g2

0x7c25,	// (0x000151a0) main_mobtv_loading_pane_g3_ParamLimits

0x7c25,	// (0x000151a0) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001d1da) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001d1da) main_mobtv_loading_pane_g

0xdf94,	// (0x0001b50f) main_mobtv_loading_pane_t1_ParamLimits

0xdf94,	// (0x0001b50f) main_mobtv_loading_pane_t1

0xdfac,	// (0x0001b527) main_mobtv_loading_pane_t2_ParamLimits

0xdfac,	// (0x0001b527) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001d1e1) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001d1e1) main_mobtv_loading_pane_t

0x7c36,	// (0x000151b1) wait_bar_pane_cp06_ParamLimits

0x7c36,	// (0x000151b1) wait_bar_pane_cp06

0xdfd0,	// (0x0001b54b) main_mobtv_programe_curr_pane_t1

0xdfde,	// (0x0001b559) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001d1e6) main_mobtv_programe_curr_pane_t

0xdfec,	// (0x0001b567) main_mobtv_programe_next_pane_t1

0xdffa,	// (0x0001b575) main_mobtv_programe_next_pane_t2

0xe008,	// (0x0001b583) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001d1eb) main_mobtv_programe_next_pane_t

0x9589,	// (0x00016b04) bg_popup_mobtv_noti_window_pane

0xe016,	// (0x0001b591) popup_mobtv_noti_window_g1

0xe01e,	// (0x0001b599) popup_mobtv_noti_window_t1

0xe02c,	// (0x0001b5a7) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001d1f2) popup_mobtv_noti_window_t

0xc3ec,	// (0x00019967) bg_popup_mobtv_noti_window_pane_g1

0x9589,	// (0x00016b04) sc_clock_pane

0x9589,	// (0x00016b04) main_fs_bigclock_pane

0x72d8,	// (0x00014853) blid2_tripm_pane_t4_ParamLimits

0x72d8,	// (0x00014853) blid2_tripm_pane_t4

0x7c45,	// (0x000151c0) sc_clock_pane_g1_ParamLimits

0x7c45,	// (0x000151c0) sc_clock_pane_g1

0x7c57,	// (0x000151d2) sc_clock_pane_t1_ParamLimits

0x7c57,	// (0x000151d2) sc_clock_pane_t1

0x7c79,	// (0x000151f4) sc_clock_pane_t2_ParamLimits

0x7c79,	// (0x000151f4) sc_clock_pane_t2

0x7c8f,	// (0x0001520a) sc_clock_pane_t3_ParamLimits

0x7c8f,	// (0x0001520a) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001d1f7) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001d1f7) sc_clock_pane_t

0x8b31,	// (0x000160ac) main_fs_bigclock_indicator_pane_ParamLimits

0x8b31,	// (0x000160ac) main_fs_bigclock_indicator_pane

0x7d25,	// (0x000152a0) main_fs_bigclock_pane_g1_ParamLimits

0x7d25,	// (0x000152a0) main_fs_bigclock_pane_g1

0x8b3d,	// (0x000160b8) main_fs_bigclock_pane_t1_ParamLimits

0x8b3d,	// (0x000160b8) main_fs_bigclock_pane_t1

0x8b4f,	// (0x000160ca) main_fs_bigclock_pane_t2_ParamLimits

0x8b4f,	// (0x000160ca) main_fs_bigclock_pane_t2

0x8b61,	// (0x000160dc) main_fs_bigclock_pane_t3_ParamLimits

0x8b61,	// (0x000160dc) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001d3fc) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001d3fc) main_fs_bigclock_pane_t

0xec59,	// (0x0001c1d4) main_fs_bigclock_indicator_pane_g1

0xdd3e,	// (0x0001b2b9) ncim_query_content_pane_g2_ParamLimits

0xdd3e,	// (0x0001b2b9) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001d184) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001d184) ncim_query_content_pane_g

0x7ca6,	// (0x00015221) sc_clock_pane_t4_ParamLimits

0x7ca6,	// (0x00015221) sc_clock_pane_t4

0x95f3,	// (0x00016b6e) main_radioblah_pane

0xcf78,	// (0x0001a4f3) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf78,	// (0x0001a4f3) cell_call4_button_pane_t1_copy1

0x78c7,	// (0x00014e42) main_ncimui_pane_t1_ParamLimits

0x78c7,	// (0x00014e42) main_ncimui_pane_t1

0x78e1,	// (0x00014e5c) main_ncimui_pane_t2_ParamLimits

0x78e1,	// (0x00014e5c) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001d17d) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001d17d) main_ncimui_pane_t

0xe16d,	// (0x0001b6e8) main_radioblah_anim_pane_ParamLimits

0xe16d,	// (0x0001b6e8) main_radioblah_anim_pane

0xe17e,	// (0x0001b6f9) main_radioblah_info_pane_ParamLimits

0xe17e,	// (0x0001b6f9) main_radioblah_info_pane

0xe192,	// (0x0001b70d) main_radioblah_pane_t1_ParamLimits

0xe192,	// (0x0001b70d) main_radioblah_pane_t1

0xe1ae,	// (0x0001b729) main_radioblah_pane_t2_ParamLimits

0xe1ae,	// (0x0001b729) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001d218) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001d218) main_radioblah_pane_t

0x7d72,	// (0x000152ed) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7d72,	// (0x000152ed) main_radioblah_rocker_ctrl_pane

0xe1f6,	// (0x0001b771) main_radioblah_info_pane_t1_ParamLimits

0xe1f6,	// (0x0001b771) main_radioblah_info_pane_t1

0x7dc6,	// (0x00015341) main_radioblah_info_pane_t2_ParamLimits

0x7dc6,	// (0x00015341) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001d221) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001d221) main_radioblah_info_pane_t

0xc3ec,	// (0x00019967) main_radioblah_rocker_ctrl_pane_g1

0x7e72,	// (0x000153ed) main_radioblah_rocker_ctrl_pane_g2

0x7e7a,	// (0x000153f5) main_radioblah_rocker_ctrl_pane_g3

0x7e82,	// (0x000153fd) main_radioblah_rocker_ctrl_pane_g4

0x7e8a,	// (0x00015405) main_radioblah_rocker_ctrl_pane_g5

0x7e92,	// (0x0001540d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001d22a) main_radioblah_rocker_ctrl_pane_g

0x7883,	// (0x00014dfe) main_cset_text2_pane_t1_copy1_ParamLimits

0xd000,	// (0x0001a57b) cam4_image_uncrop_qvga_pane

0xd053,	// (0x0001a5ce) vid4_image_uncrop_qcif_pane

0xd973,	// (0x0001aeee) cam6_image_uncrop_qvga_pane_ParamLimits

0xd973,	// (0x0001aeee) cam6_image_uncrop_qvga_pane

0xda47,	// (0x0001afc2) vid6_image_uncrop_qcif_pane_ParamLimits

0xda47,	// (0x0001afc2) vid6_image_uncrop_qcif_pane

0x9589,	// (0x00016b04) bg_popup_preview_window_pane_cp03

0xdcf0,	// (0x0001b26b) list_cset_text2_pane

0xdcf8,	// (0x0001b273) main_cset6_text2_pane_g1

0xdd00,	// (0x0001b27b) main_cset6_text2_pane_t1

0xefdb,	// (0x0001c556) list_cset_text2_pane_t1_ParamLimits

0xefdb,	// (0x0001c556) list_cset_text2_pane_t1

0x95f3,	// (0x00016b6e) main_radioblah_pane_ParamLimits

0x7be6,	// (0x00015161) main_mobtv_info_pane_t3_ParamLimits

0x7be6,	// (0x00015161) main_mobtv_info_pane_t3

0x7d60,	// (0x000152db) main_radioblah_pane_g1

0x7d9a,	// (0x00015315) main_radioblah_info_pane_g1

0x7e17,	// (0x00015392) main_radioblah_info_pane_t3_ParamLimits

0x7e17,	// (0x00015392) main_radioblah_info_pane_t3

0x2b20,	// (0x0001009b) highlight_cell_cale_month_pane_ParamLimits

0x2b20,	// (0x0001009b) highlight_cell_cale_month_pane

0x9589,	// (0x00016b04) main_phob_fisheye_pane

0xc703,	// (0x00019c7e) scroll_pane_cp0031_ParamLimits

0xc703,	// (0x00019c7e) scroll_pane_cp0031

0xdb51,	// (0x0001b0cc) wait_bar_pane_cp08_ParamLimits

0x75d1,	// (0x00014b4c) cset_list_set_pane_copy1_ParamLimits

0xe230,	// (0x0001b7ab) highlight_cell_cale_month_pane_g1

0x7e9a,	// (0x00015415) highlight_cell_cale_month_pane_t1

0xd73b,	// (0x0001acb6) list_gen_pane_cp01

0xd267,	// (0x0001a7e2) scroll_pane_01

0x7ea8,	// (0x00015423) list_single_double_fisheye_pane

0x7eb1,	// (0x0001542c) list_double_fisheye_pane_g1_ParamLimits

0x7eb1,	// (0x0001542c) list_double_fisheye_pane_g1

0x7ebd,	// (0x00015438) list_double_fisheye_pane_g2_ParamLimits

0x7ebd,	// (0x00015438) list_double_fisheye_pane_g2

0x7ed1,	// (0x0001544c) list_double_fisheye_pane_g3_ParamLimits

0x7ed1,	// (0x0001544c) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001d237) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001d237) list_double_fisheye_pane_g

0x7efa,	// (0x00015475) list_double_fisheye_pane_t1_ParamLimits

0x7efa,	// (0x00015475) list_double_fisheye_pane_t1

0x7f15,	// (0x00015490) list_double_fisheye_pane_t2_ParamLimits

0x7f15,	// (0x00015490) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001d242) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001d242) list_double_fisheye_pane_t

0x9589,	// (0x00016b04) main_call5_pane

0x7ccf,	// (0x0001524a) sc_swipe_pane_ParamLimits

0x7ccf,	// (0x0001524a) sc_swipe_pane

0x7f48,	// (0x000154c3) call5_image_pane_ParamLimits

0x7f48,	// (0x000154c3) call5_image_pane

0x7f5d,	// (0x000154d8) call5_swipe_1_pane_ParamLimits

0x7f5d,	// (0x000154d8) call5_swipe_1_pane

0x7f6e,	// (0x000154e9) call5_swipe_2_pane_ParamLimits

0x7f6e,	// (0x000154e9) call5_swipe_2_pane

0x7f93,	// (0x0001550e) popup_call5_audio_first_window_ParamLimits

0x7f93,	// (0x0001550e) popup_call5_audio_first_window

0xc61b,	// (0x00019b96) call5_swipe_1_pane_g1_ParamLimits

0xc61b,	// (0x00019b96) call5_swipe_1_pane_g1

0xe277,	// (0x0001b7f2) call5_swipe_1_pane_g2_ParamLimits

0xe277,	// (0x0001b7f2) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001d247) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001d247) call5_swipe_1_pane_g

0xe283,	// (0x0001b7fe) call5_swipe_1_pane_t1_ParamLimits

0xe283,	// (0x0001b7fe) call5_swipe_1_pane_t1

0xc61b,	// (0x00019b96) call5_swipe_2_pane_g1_ParamLimits

0xc61b,	// (0x00019b96) call5_swipe_2_pane_g1

0xe298,	// (0x0001b813) call5_swipe_2_pane_g2_ParamLimits

0xe298,	// (0x0001b813) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001d24c) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001d24c) call5_swipe_2_pane_g

0xe2a4,	// (0x0001b81f) call5_swipe_2_pane_t1_ParamLimits

0xe2a4,	// (0x0001b81f) call5_swipe_2_pane_t1

0xe2b9,	// (0x0001b834) sc_swipe_pane_g1_ParamLimits

0xe2b9,	// (0x0001b834) sc_swipe_pane_g1

0xe2c6,	// (0x0001b841) sc_swipe_pane_g2_ParamLimits

0xe2c6,	// (0x0001b841) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001d251) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001d251) sc_swipe_pane_g

0xe2d2,	// (0x0001b84d) sc_swipe_pane_t1_ParamLimits

0xe2d2,	// (0x0001b84d) sc_swipe_pane_t1

0x9589,	// (0x00016b04) main_cmail_launcher_pane

0x7fa2,	// (0x0001551d) aid_size_cell_cmail_l_ParamLimits

0x7fa2,	// (0x0001551d) aid_size_cell_cmail_l

0x7fbb,	// (0x00015536) grid_cmail_l_pane_ParamLimits

0x7fbb,	// (0x00015536) grid_cmail_l_pane

0x7fcf,	// (0x0001554a) cell_cmail_l_pane_ParamLimits

0x7fcf,	// (0x0001554a) cell_cmail_l_pane

0x7ff1,	// (0x0001556c) cell_cmail_l_pane_g1_ParamLimits

0x7ff1,	// (0x0001556c) cell_cmail_l_pane_g1

0x8002,	// (0x0001557d) cell_cmail_l_pane_t1_ParamLimits

0x8002,	// (0x0001557d) cell_cmail_l_pane_t1

0xe2e7,	// (0x0001b862) cell_cmail_l_pane_t2_ParamLimits

0xe2e7,	// (0x0001b862) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001d256) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001d256) cell_cmail_l_pane_t

0x95f3,	// (0x00016b6e) grid_highlight_pane_cp018_ParamLimits

0x95f3,	// (0x00016b6e) grid_highlight_pane_cp018

0x0e25,	// (0x0000e3a0) main2_pane_ParamLimits

0x0e25,	// (0x0000e3a0) main2_pane

0x9e6d,	// (0x000173e8) popup_sp_fs_action_menu_bg_pane_g1

0x9e75,	// (0x000173f0) popup_sp_fs_action_menu_bg_pane_g2

0x9e7d,	// (0x000173f8) popup_sp_fs_action_menu_bg_pane_g3

0x9e85,	// (0x00017400) popup_sp_fs_action_menu_bg_pane_g4

0x9e8d,	// (0x00017408) popup_sp_fs_action_menu_bg_pane_g5

0x9e95,	// (0x00017410) popup_sp_fs_action_menu_bg_pane_g6

0x9e9d,	// (0x00017418) popup_sp_fs_action_menu_bg_pane_g7

0x9ea5,	// (0x00017420) popup_sp_fs_action_menu_bg_pane_g8

0x9ead,	// (0x00017428) popup_sp_fs_action_menu_bg_pane_g9

0x9eb5,	// (0x00017430) popup_sp_fs_action_menu_bg_pane_g10

0x9eb5,	// (0x00017430) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001c705) popup_sp_fs_action_menu_bg_pane_g

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g3_g1

0x1cfa,	// (0x0000f275) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_t3_g3_g2

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001c7b3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001c7b3) list_medium_line_x2_t3_g3_g

0x1d12,	// (0x0000f28d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d12,	// (0x0000f28d) list_medium_line_x2_t3_g3_t1

0x1d27,	// (0x0000f2a2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1d27,	// (0x0000f2a2) list_medium_line_x2_t3_g3_t2

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001c7ba) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001c7ba) list_medium_line_x2_t3_g3_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g2_g1

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001c7c1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001c7c1) list_medium_line_x2_t3_g2_g

0x1d4e,	// (0x0000f2c9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d4e,	// (0x0000f2c9) list_medium_line_x2_t3_g2_t1

0x1d64,	// (0x0000f2df) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d64,	// (0x0000f2df) list_medium_line_x2_t3_g2_t2

0x1d76,	// (0x0000f2f1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1d76,	// (0x0000f2f1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001c7c6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001c7c6) list_medium_line_x2_t3_g2_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t4_g4_g1

0x1d93,	// (0x0000f30e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d93,	// (0x0000f30e) list_medium_line_x2_t4_g4_g2

0x1cfa,	// (0x0000f275) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_t4_g4_g3

0x1d9f,	// (0x0000f31a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d9f,	// (0x0000f31a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001c7cd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001c7cd) list_medium_line_x2_t4_g4_g

0x1dab,	// (0x0000f326) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1dab,	// (0x0000f326) list_medium_line_x2_t4_g4_t1

0x1dc5,	// (0x0000f340) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1dc5,	// (0x0000f340) list_medium_line_x2_t4_g4_t2

0x1ddb,	// (0x0000f356) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ddb,	// (0x0000f356) list_medium_line_x2_t4_g4_t3

0x1df0,	// (0x0000f36b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1df0,	// (0x0000f36b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001c7d6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001c7d6) list_medium_line_x2_t4_g4_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g4_g1

0x1d93,	// (0x0000f30e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d93,	// (0x0000f30e) list_medium_line_x2_t2_g4_g2

0x1cfa,	// (0x0000f275) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_t2_g4_g3

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001c83d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001c83d) list_medium_line_x2_t2_g4_g

0x2b46,	// (0x000100c1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2b46,	// (0x000100c1) list_medium_line_x2_t2_g4_t1

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001c846) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001c846) list_medium_line_x2_t2_g4_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g3_g1

0x1cfa,	// (0x0000f275) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_t2_g3_g2

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001c7b3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001c7b3) list_medium_line_x2_t2_g3_g

0x2b5b,	// (0x000100d6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2b5b,	// (0x000100d6) list_medium_line_x2_t2_g3_t1

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001c84b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001c84b) list_medium_line_x2_t2_g3_t

0x2c8c,	// (0x00010207) main_sp_fs_list_pane_ParamLimits

0x2c8c,	// (0x00010207) main_sp_fs_list_pane

0xe250,	// (0x0001b7cb) sp_fs_scroll_pane_ParamLimits

0xe250,	// (0x0001b7cb) sp_fs_scroll_pane

0x2c98,	// (0x00010213) list_medium_line_x2_t3_t1

0x2ca8,	// (0x00010223) list_medium_line_x2_t3_t2

0x2cb6,	// (0x00010231) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001c896) list_medium_line_x2_t3_t

0x2cc4,	// (0x0001023f) list_medium_line_x3_t4_t1

0x2cd4,	// (0x0001024f) list_medium_line_x3_t4_t2

0x2ce2,	// (0x0001025d) list_medium_line_x3_t4_t3

0x2cb6,	// (0x00010231) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001c89d) list_medium_line_x3_t4_t

0x2cf0,	// (0x0001026b) list_medium_line_x4_t5_t1

0x2d00,	// (0x0001027b) list_medium_line_x4_t5_t2

0x2ce2,	// (0x0001025d) list_medium_line_x4_t5_t3

0x2d0e,	// (0x00010289) list_medium_line_x4_t5_t4

0x2cb6,	// (0x00010231) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001c8a6) list_medium_line_x4_t5_t

0x1cee,	// (0x0000f269) list_medium_line_t4_g4_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_t4_g4_g1

0x2d1c,	// (0x00010297) list_medium_line_t4_g4_g2_ParamLimits

0x2d1c,	// (0x00010297) list_medium_line_t4_g4_g2

0x2d28,	// (0x000102a3) list_medium_line_t4_g4_g3_ParamLimits

0x2d28,	// (0x000102a3) list_medium_line_t4_g4_g3

0x1d06,	// (0x0000f281) list_medium_line_t4_g4_g4_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001c8b1) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001c8b1) list_medium_line_t4_g4_g

0x2d34,	// (0x000102af) list_medium_line_t4_g4_t1_ParamLimits

0x2d34,	// (0x000102af) list_medium_line_t4_g4_t1

0x2d49,	// (0x000102c4) list_medium_line_t4_g4_t2_ParamLimits

0x2d49,	// (0x000102c4) list_medium_line_t4_g4_t2

0x2d5e,	// (0x000102d9) list_medium_line_t4_g4_t3_ParamLimits

0x2d5e,	// (0x000102d9) list_medium_line_t4_g4_t3

0x1d39,	// (0x0000f2b4) list_medium_line_t4_g4_t4_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001c8ba) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001c8ba) list_medium_line_t4_g4_t

0x2e42,	// (0x000103bd) chi_dic_find_pane_g1

0x3d99,	// (0x00011314) main_tport_pane

0x69d0,	// (0x00013f4b) list_medium_line_plain_t1

0x6a78,	// (0x00013ff3) list_medium_line_t2_g2_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t2_g2_g1

0x6a84,	// (0x00013fff) list_medium_line_t2_g2_g2_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001cf8e) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001cf8e) list_medium_line_t2_g2_g

0x6a90,	// (0x0001400b) list_medium_line_t2_g2_t1_ParamLimits

0x6a90,	// (0x0001400b) list_medium_line_t2_g2_t1

0x6aaa,	// (0x00014025) list_medium_line_t2_g2_t2_ParamLimits

0x6aaa,	// (0x00014025) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001cf93) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001cf93) list_medium_line_t2_g2_t

0xd7b5,	// (0x0001ad30) aid_sp_fs_list_icon_a_sm

0xd7bd,	// (0x0001ad38) aid_sp_fs_list_icon_d

0xd7c5,	// (0x0001ad40) aid_sp_fs_text_primary

0xd7ce,	// (0x0001ad49) aid_sp_fs_text_secondary

0xd7d7,	// (0x0001ad52) list_medium_line

0xd7d7,	// (0x0001ad52) list_medium_line_g2

0xd7d7,	// (0x0001ad52) list_medium_line_g3

0xd7d7,	// (0x0001ad52) list_medium_line_plain

0xd7d7,	// (0x0001ad52) list_medium_line_plain_t2

0xd7d7,	// (0x0001ad52) list_medium_line_plain_t3

0xd7d7,	// (0x0001ad52) list_medium_line_right_icon

0xd7d7,	// (0x0001ad52) list_medium_line_right_iconx2

0xd7d7,	// (0x0001ad52) list_medium_line_t2

0xd7d7,	// (0x0001ad52) list_medium_line_t2_g2

0xd7d7,	// (0x0001ad52) list_medium_line_t2_g3

0xd7d7,	// (0x0001ad52) list_medium_line_t2_right_icon

0xd7d7,	// (0x0001ad52) list_medium_line_t2_right_iconx2

0xd7d7,	// (0x0001ad52) list_medium_line_t3

0xd7d7,	// (0x0001ad52) list_medium_line_t3_g2

0xd7d7,	// (0x0001ad52) list_medium_line_t3_g3

0xd7d7,	// (0x0001ad52) list_medium_line_t3_right_iconx2

0x70bb,	// (0x00014636) list_medium_line_t4_g4

0x70c4,	// (0x0001463f) list_medium_line_x2

0x70c4,	// (0x0001463f) list_medium_line_x2_t2_g2

0x70c4,	// (0x0001463f) list_medium_line_x2_t2_g3

0x70c4,	// (0x0001463f) list_medium_line_x2_t2_g4

0x70c4,	// (0x0001463f) list_medium_line_x2_t3

0x70c4,	// (0x0001463f) list_medium_line_x2_t3_g2

0x70c4,	// (0x0001463f) list_medium_line_x2_t3_g3

0x70c4,	// (0x0001463f) list_medium_line_x2_t3_g4

0x70c4,	// (0x0001463f) list_medium_line_x2_t4_g2

0x70c4,	// (0x0001463f) list_medium_line_x2_t4_g4

0x70cd,	// (0x00014648) list_medium_line_x3

0x70cd,	// (0x00014648) list_medium_line_x3_t4

0x70cd,	// (0x00014648) list_medium_line_x3_t4_g4

0x70bb,	// (0x00014636) list_medium_line_x4_t4

0x70bb,	// (0x00014636) list_medium_line_x4_t4_g7

0x70bb,	// (0x00014636) list_medium_line_x4_t5

0x70d6,	// (0x00014651) list_single_fs_dyc_pane_ParamLimits

0x70d6,	// (0x00014651) list_single_fs_dyc_pane

0x1cee,	// (0x0000f269) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x4_t4_g7_g1

0x77b2,	// (0x00014d2d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x77b2,	// (0x00014d2d) list_medium_line_x4_t4_g7_g2

0x77be,	// (0x00014d39) list_medium_line_x4_t4_g7_g3_ParamLimits

0x77be,	// (0x00014d39) list_medium_line_x4_t4_g7_g3

0x77cd,	// (0x00014d48) list_medium_line_x4_t4_g7_g4_ParamLimits

0x77cd,	// (0x00014d48) list_medium_line_x4_t4_g7_g4

0x77d9,	// (0x00014d54) list_medium_line_x4_t4_g7_g5_ParamLimits

0x77d9,	// (0x00014d54) list_medium_line_x4_t4_g7_g5

0x77e8,	// (0x00014d63) list_medium_line_x4_t4_g7_g6_ParamLimits

0x77e8,	// (0x00014d63) list_medium_line_x4_t4_g7_g6

0x77f7,	// (0x00014d72) list_medium_line_x4_t4_g7_g7_ParamLimits

0x77f7,	// (0x00014d72) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001d15e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001d15e) list_medium_line_x4_t4_g7_g

0x7803,	// (0x00014d7e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7803,	// (0x00014d7e) list_medium_line_x4_t4_g7_t1

0x7818,	// (0x00014d93) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7818,	// (0x00014d93) list_medium_line_x4_t4_g7_t2

0x782d,	// (0x00014da8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x782d,	// (0x00014da8) list_medium_line_x4_t4_g7_t3

0x7842,	// (0x00014dbd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7842,	// (0x00014dbd) list_medium_line_x4_t4_g7_t4

0x7854,	// (0x00014dcf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7854,	// (0x00014dcf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001d16d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001d16d) list_medium_line_x4_t4_g7_t

0x7866,	// (0x00014de1) list_single_dyc_row_pane_ParamLimits

0x7866,	// (0x00014de1) list_single_dyc_row_pane

0x7f37,	// (0x000154b2) call5_gesture_pane_ParamLimits

0x7f37,	// (0x000154b2) call5_gesture_pane

0x7f7f,	// (0x000154fa) call5_windows_pane_ParamLimits

0x7f7f,	// (0x000154fa) call5_windows_pane

0x8018,	// (0x00015593) call5_swipe_1_pane_cp_ParamLimits

0x8018,	// (0x00015593) call5_swipe_1_pane_cp

0x8024,	// (0x0001559f) call5_swipe_2_pane_cp_ParamLimits

0x8024,	// (0x0001559f) call5_swipe_2_pane_cp

0x9fc9,	// (0x00017544) call5_image_pane_cp

0x8030,	// (0x000155ab) popup_call5_audio_first_window_cp_ParamLimits

0x8030,	// (0x000155ab) popup_call5_audio_first_window_cp

0xe2b9,	// (0x0001b834) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2b9,	// (0x0001b834) call5_swipe_1_pane_g1_cp

0xe2f9,	// (0x0001b874) call5_swipe_1_pane_g2_cp

0xe2d2,	// (0x0001b84d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2d2,	// (0x0001b84d) call5_swipe_1_pane_t1_cp

0xe2b9,	// (0x0001b834) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2b9,	// (0x0001b834) call5_swipe_2_pane_g1_cp

0xe301,	// (0x0001b87c) call5_swipe_2_pane_g2_cp

0xe309,	// (0x0001b884) call5_swipe_2_pane_t1_cp_ParamLimits

0xe309,	// (0x0001b884) call5_swipe_2_pane_t1_cp

0x95f3,	// (0x00016b6e) main_sp_fs_email_pane

0xe31e,	// (0x0001b899) main_sp_fs_listscroll_pane_te

0x803c,	// (0x000155b7) popup_sp_fs_action_menu_pane_ParamLimits

0x803c,	// (0x000155b7) popup_sp_fs_action_menu_pane

0xc3ec,	// (0x00019967) bg_sp_fs_ctrlbar_pane_g1

0xe25c,	// (0x0001b7d7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe26e,	// (0x0001b7e9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe265,	// (0x0001b7e0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc3ec,	// (0x00019967) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001d25b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1d9,	// (0x00019754) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1d9,	// (0x00019754) bg_sp_fs_ctrlbar_ddmenu_pane

0xe327,	// (0x0001b8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe327,	// (0x0001b8a2) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe333,	// (0x0001b8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe333,	// (0x0001b8ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001d264) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001d264) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe33f,	// (0x0001b8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe33f,	// (0x0001b8ba) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x806e,	// (0x000155e9) list_medium_line_t2_right_icon_g1

0x8076,	// (0x000155f1) list_medium_line_t2_right_icon_t1

0x8086,	// (0x00015601) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001d269) list_medium_line_t2_right_icon_t

0xbeea,	// (0x00019465) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbeea,	// (0x00019465) bg_sp_fs_ctrlbar_pane

0x80da,	// (0x00015655) main_sp_fs_ctrlbar_button_pane_cp01

0x80e2,	// (0x0001565d) main_sp_fs_ctrlbar_ddmenu_pane

0xe391,	// (0x0001b90c) main_sp_fs_ctrlbar_pane_g1

0xe39d,	// (0x0001b918) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001d26e) main_sp_fs_ctrlbar_pane_g

0xe3a9,	// (0x0001b924) main_sp_fs_ctrlbar_pane_t1

0x80ec,	// (0x00015667) main_sp_fs_ctrlbar_pane

0x8110,	// (0x0001568b) main_sp_fs_listscroll_pane_te_cp01

0x8130,	// (0x000156ab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8130,	// (0x000156ab) popup_sp_fs_action_menu_pane_cp01

0x95f3,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95f3,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp01

0xe3d9,	// (0x0001b954) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3d9,	// (0x0001b954) sp_fs_action_menu_list_gene_pane_g1

0xe3e8,	// (0x0001b963) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3e8,	// (0x0001b963) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001d278) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001d278) sp_fs_action_menu_list_gene_pane_g

0xe3f5,	// (0x0001b970) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3f5,	// (0x0001b970) sp_fs_action_menu_list_gene_pane_t1

0xe40d,	// (0x0001b988) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe40d,	// (0x0001b988) sp_fs_action_menu_list_gene_pane

0xe42a,	// (0x0001b9a5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe42a,	// (0x0001b9a5) popup_sp_fs_action_menu_bg_pane

0xe438,	// (0x0001b9b3) sp_fs_action_menu_list_pane_ParamLimits

0xe438,	// (0x0001b9b3) sp_fs_action_menu_list_pane

0xe456,	// (0x0001b9d1) sp_fs_scroll_pane_cp01_ParamLimits

0xe456,	// (0x0001b9d1) sp_fs_scroll_pane_cp01

0x815a,	// (0x000156d5) list_medium_line_plain_t2_t1

0x816a,	// (0x000156e5) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001d27d) list_medium_line_plain_t2_t

0x8178,	// (0x000156f3) list_medium_line_plain_t3_t1

0x8188,	// (0x00015703) list_medium_line_plain_t3_t2

0x8196,	// (0x00015711) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001d282) list_medium_line_plain_t3_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t2_g2_g1

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001c7c1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001c7c1) list_medium_line_x2_t2_g2_g

0x2d34,	// (0x000102af) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2d34,	// (0x000102af) list_medium_line_x2_t2_g2_t1

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001d289) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001d289) list_medium_line_x2_t2_g2_t

0x1cee,	// (0x0000f269) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t4_g2_g1

0x1d06,	// (0x0000f281) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001c7c1) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001c7c1) list_medium_line_x2_t4_g2_g

0x81a4,	// (0x0001571f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x81a4,	// (0x0001571f) list_medium_line_x2_t4_g2_t1

0x81be,	// (0x00015739) list_medium_line_x2_t4_g2_t2_ParamLimits

0x81be,	// (0x00015739) list_medium_line_x2_t4_g2_t2

0x81d4,	// (0x0001574f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x81d4,	// (0x0001574f) list_medium_line_x2_t4_g2_t3

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001d28e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001d28e) list_medium_line_x2_t4_g2_t

0x81e9,	// (0x00015764) list_medium_line_t3_right_iconx2_g1

0x806e,	// (0x000155e9) list_medium_line_t3_right_iconx2_g2

0x81f1,	// (0x0001576c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001d297) list_medium_line_t3_right_iconx2_g

0x81f9,	// (0x00015774) list_medium_line_t3_right_iconx2_t1

0x8209,	// (0x00015784) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001d29e) list_medium_line_t3_right_iconx2_t

0x1cee,	// (0x0000f269) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x3_t4_g4_g1

0x1cfa,	// (0x0000f275) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x3_t4_g4_g2

0x2d1c,	// (0x00010297) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2d1c,	// (0x00010297) list_medium_line_x3_t4_g4_g3

0x8217,	// (0x00015792) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8217,	// (0x00015792) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001d2a3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001d2a3) list_medium_line_x3_t4_g4_g

0x8223,	// (0x0001579e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8223,	// (0x0001579e) list_medium_line_x3_t4_g4_t1

0x823a,	// (0x000157b5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x823a,	// (0x000157b5) list_medium_line_x3_t4_g4_t2

0x2d49,	// (0x000102c4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2d49,	// (0x000102c4) list_medium_line_x3_t4_g4_t3

0x824f,	// (0x000157ca) list_medium_line_x3_t4_g4_t4_ParamLimits

0x824f,	// (0x000157ca) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001d2ac) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001d2ac) list_medium_line_x3_t4_g4_t

0x826c,	// (0x000157e7) list_single_dyc_row_text_pane_t1_ParamLimits

0x826c,	// (0x000157e7) list_single_dyc_row_text_pane_t1

0x82a3,	// (0x0001581e) list_single_dyc_row_text_pane_t2_ParamLimits

0x82a3,	// (0x0001581e) list_single_dyc_row_text_pane_t2

0xe47c,	// (0x0001b9f7) list_single_dyc_row_text_pane_t3_ParamLimits

0xe47c,	// (0x0001b9f7) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001d2b5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001d2b5) list_single_dyc_row_text_pane_t

0xe4a0,	// (0x0001ba1b) list_single_dyc_row_pane_g1_ParamLimits

0xe4a0,	// (0x0001ba1b) list_single_dyc_row_pane_g1

0xe4ac,	// (0x0001ba27) list_single_dyc_row_pane_g2_ParamLimits

0xe4ac,	// (0x0001ba27) list_single_dyc_row_pane_g2

0xe4b8,	// (0x0001ba33) list_single_dyc_row_pane_g3_ParamLimits

0xe4b8,	// (0x0001ba33) list_single_dyc_row_pane_g3

0xe4c4,	// (0x0001ba3f) list_single_dyc_row_pane_g4_ParamLimits

0xe4c4,	// (0x0001ba3f) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001d2c2) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001d2c2) list_single_dyc_row_pane_g

0xe4d0,	// (0x0001ba4b) list_single_dyc_row_text_pane_ParamLimits

0xe4d0,	// (0x0001ba4b) list_single_dyc_row_text_pane

0x9589,	// (0x00016b04) bg_sp_fs_scroll_pane

0xe4ef,	// (0x0001ba6a) thumb_sp_fs_scroll_pane

0x6a78,	// (0x00013ff3) list_medium_line_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_g1

0x83c6,	// (0x00015941) list_medium_line_t1_ParamLimits

0x83c6,	// (0x00015941) list_medium_line_t1

0x1cee,	// (0x0000f269) list_medium_line_x2_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_g1

0x1cfa,	// (0x0000f275) list_medium_line_x2_g2_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001d2cb) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001d2cb) list_medium_line_x2_g

0xe4f8,	// (0x0001ba73) list_medium_line_x2_t1_ParamLimits

0xe4f8,	// (0x0001ba73) list_medium_line_x2_t1

0x1cee,	// (0x0000f269) list_medium_line_x3_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x3_g1

0x1cfa,	// (0x0000f275) list_medium_line_x3_g2_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001d2cb) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001d2cb) list_medium_line_x3_g

0xe4f8,	// (0x0001ba73) list_medium_line_x3_t1_ParamLimits

0xe4f8,	// (0x0001ba73) list_medium_line_x3_t1

0xe50e,	// (0x0001ba89) thumb_sp_fs_scroll_pane_g1

0xe517,	// (0x0001ba92) thumb_sp_fs_scroll_pane_g2

0xe520,	// (0x0001ba9b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001d2d0) thumb_sp_fs_scroll_pane_g

0xe50e,	// (0x0001ba89) bg_sp_fs_scroll_pane_g1

0xe517,	// (0x0001ba92) bg_sp_fs_scroll_pane_g2

0xe520,	// (0x0001ba9b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001d2d0) bg_sp_fs_scroll_pane_g

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1cee,	// (0x0000f269) list_medium_line_x2_t3_g4_g1

0x1d93,	// (0x0000f30e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d93,	// (0x0000f30e) list_medium_line_x2_t3_g4_g2

0x1cfa,	// (0x0000f275) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1cfa,	// (0x0000f275) list_medium_line_x2_t3_g4_g3

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d06,	// (0x0000f281) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001c83d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001c83d) list_medium_line_x2_t3_g4_g

0x83db,	// (0x00015956) list_medium_line_x2_t3_g4_t1_ParamLimits

0x83db,	// (0x00015956) list_medium_line_x2_t3_g4_t1

0x83f1,	// (0x0001596c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x83f1,	// (0x0001596c) list_medium_line_x2_t3_g4_t2

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1d39,	// (0x0000f2b4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001d2d7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001d2d7) list_medium_line_x2_t3_g4_t

0x6a78,	// (0x00013ff3) list_medium_line_g2_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_g2_g1

0x6a84,	// (0x00013fff) list_medium_line_g2_g2_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001cf8e) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001cf8e) list_medium_line_g2_g

0x840b,	// (0x00015986) list_medium_line_g2_t1_ParamLimits

0x840b,	// (0x00015986) list_medium_line_g2_t1

0x6a78,	// (0x00013ff3) list_medium_line_t3_g2_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t3_g2_g1

0x6a84,	// (0x00013fff) list_medium_line_t3_g2_g2_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001cf8e) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001cf8e) list_medium_line_t3_g2_g

0x8420,	// (0x0001599b) list_medium_line_t3_g2_t1_ParamLimits

0x8420,	// (0x0001599b) list_medium_line_t3_g2_t1

0x843a,	// (0x000159b5) list_medium_line_t3_g2_t2_ParamLimits

0x843a,	// (0x000159b5) list_medium_line_t3_g2_t2

0x8450,	// (0x000159cb) list_medium_line_t3_g2_t3_ParamLimits

0x8450,	// (0x000159cb) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001d2de) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001d2de) list_medium_line_t3_g2_t

0x806e,	// (0x000155e9) list_medium_line_right_icon_g1

0x8466,	// (0x000159e1) list_medium_line_right_icon_t1

0x6a78,	// (0x00013ff3) list_medium_line_t2_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t2_g1

0x8474,	// (0x000159ef) list_medium_line_t2_t1_ParamLimits

0x8474,	// (0x000159ef) list_medium_line_t2_t1

0x848e,	// (0x00015a09) list_medium_line_t2_t2_ParamLimits

0x848e,	// (0x00015a09) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001d2e5) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001d2e5) list_medium_line_t2_t

0x6a78,	// (0x00013ff3) list_medium_line_t3_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t3_g1

0x84a3,	// (0x00015a1e) list_medium_line_t3_t1_ParamLimits

0x84a3,	// (0x00015a1e) list_medium_line_t3_t1

0x84bd,	// (0x00015a38) list_medium_line_t3_t2_ParamLimits

0x84bd,	// (0x00015a38) list_medium_line_t3_t2

0x84d3,	// (0x00015a4e) list_medium_line_t3_t3_ParamLimits

0x84d3,	// (0x00015a4e) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001d2ea) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001d2ea) list_medium_line_t3_t

0x6a78,	// (0x00013ff3) list_medium_line_g3_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_g3_g1

0x84e8,	// (0x00015a63) list_medium_line_g3_g2_ParamLimits

0x84e8,	// (0x00015a63) list_medium_line_g3_g2

0x6a84,	// (0x00013fff) list_medium_line_g3_g3_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001d2f1) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001d2f1) list_medium_line_g3_g

0x84f4,	// (0x00015a6f) list_medium_line_g3_t1_ParamLimits

0x84f4,	// (0x00015a6f) list_medium_line_g3_t1

0x6a78,	// (0x00013ff3) list_medium_line_t2_g3_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t2_g3_g1

0x84e8,	// (0x00015a63) list_medium_line_t2_g3_g2_ParamLimits

0x84e8,	// (0x00015a63) list_medium_line_t2_g3_g2

0x6a84,	// (0x00013fff) list_medium_line_t2_g3_g3_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001d2f1) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001d2f1) list_medium_line_t2_g3_g

0x8509,	// (0x00015a84) list_medium_line_t2_g3_t1_ParamLimits

0x8509,	// (0x00015a84) list_medium_line_t2_g3_t1

0x8523,	// (0x00015a9e) list_medium_line_t2_g3_t2_ParamLimits

0x8523,	// (0x00015a9e) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001d2f8) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001d2f8) list_medium_line_t2_g3_t

0x6a78,	// (0x00013ff3) list_medium_line_t3_g3_g1_ParamLimits

0x6a78,	// (0x00013ff3) list_medium_line_t3_g3_g1

0x84e8,	// (0x00015a63) list_medium_line_t3_g3_g2_ParamLimits

0x84e8,	// (0x00015a63) list_medium_line_t3_g3_g2

0x6a84,	// (0x00013fff) list_medium_line_t3_g3_g3_ParamLimits

0x6a84,	// (0x00013fff) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001d2f1) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001d2f1) list_medium_line_t3_g3_g

0x8539,	// (0x00015ab4) list_medium_line_t3_g3_t1_ParamLimits

0x8539,	// (0x00015ab4) list_medium_line_t3_g3_t1

0x8552,	// (0x00015acd) list_medium_line_t3_g3_t2_ParamLimits

0x8552,	// (0x00015acd) list_medium_line_t3_g3_t2

0x8568,	// (0x00015ae3) list_medium_line_t3_g3_t3_ParamLimits

0x8568,	// (0x00015ae3) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001d2fd) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001d2fd) list_medium_line_t3_g3_t

0x81e9,	// (0x00015764) list_medium_line_right_iconx2_g1

0x806e,	// (0x000155e9) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001d304) list_medium_line_right_iconx2_g

0x857e,	// (0x00015af9) list_medium_line_right_iconx2_t1

0x81e9,	// (0x00015764) list_medium_line_t2_right_iconx2_g1

0x806e,	// (0x000155e9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001d304) list_medium_line_t2_right_iconx2_g

0x858c,	// (0x00015b07) list_medium_line_t2_right_iconx2_t1

0x859c,	// (0x00015b17) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001d309) list_medium_line_t2_right_iconx2_t

0x85aa,	// (0x00015b25) list_medium_line_x4_t4_t1

0x85b8,	// (0x00015b33) list_medium_line_x4_t4_t2

0x85c8,	// (0x00015b43) list_medium_line_x4_t4_t3

0x85d8,	// (0x00015b53) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001d30e) list_medium_line_x4_t4_t

0x8621,	// (0x00015b9c) tport_appsw_pane_ParamLimits

0x8621,	// (0x00015b9c) tport_appsw_pane

0x8632,	// (0x00015bad) tport_contact_pane_ParamLimits

0x8632,	// (0x00015bad) tport_contact_pane

0x8646,	// (0x00015bc1) tport_listscroll_pane_ParamLimits

0x8646,	// (0x00015bc1) tport_listscroll_pane

0x865e,	// (0x00015bd9) cell_tport_appsw_pane_ParamLimits

0x865e,	// (0x00015bd9) cell_tport_appsw_pane

0xd0fe,	// (0x0001a679) tport_appsw_pane_g1_ParamLimits

0xd0fe,	// (0x0001a679) tport_appsw_pane_g1

0xe529,	// (0x0001baa4) tport_contact_pane_g1

0xe532,	// (0x0001baad) tport_contact_pane_t1

0xe540,	// (0x0001babb) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001d317) tport_contact_pane_t

0xe54e,	// (0x0001bac9) list_tport_pane

0xe557,	// (0x0001bad2) scroll_pane_cp_030

0xe568,	// (0x0001bae3) cell_tport_appsw_pane_g1

0xe578,	// (0x0001baf3) cell_tport_appsw_pane_t1

0xe586,	// (0x0001bb01) grid_highlight_pane_cp019

0x8694,	// (0x00015c0f) list_tport_double_graphic_pane_ParamLimits

0x8694,	// (0x00015c0f) list_tport_double_graphic_pane

0x95f3,	// (0x00016b6e) list_highlight_pane_cp023_ParamLimits

0x95f3,	// (0x00016b6e) list_highlight_pane_cp023

0x86a1,	// (0x00015c1c) list_tport_double_graphic_pane_g1_ParamLimits

0x86a1,	// (0x00015c1c) list_tport_double_graphic_pane_g1

0x86ae,	// (0x00015c29) list_tport_double_graphic_pane_t1_ParamLimits

0x86ae,	// (0x00015c29) list_tport_double_graphic_pane_t1

0x86c3,	// (0x00015c3e) list_tport_double_graphic_pane_t2_ParamLimits

0x86c3,	// (0x00015c3e) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001d323) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001d323) list_tport_double_graphic_pane_t

0x9589,	// (0x00016b04) main_cale_note_pane

0x61af,	// (0x0001372a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x61af,	// (0x0001372a) cell_vitu2_function_top_wide_pane_cp01

0x7bf8,	// (0x00015173) wait_bar_pane_cp05_ParamLimits

0x95f3,	// (0x00016b6e) listscroll_cmail_pane

0xe58e,	// (0x0001bb09) list_cmail_pane

0x86d5,	// (0x00015c50) list_cmail_body_pane

0x86e8,	// (0x00015c63) list_single_cmail_header_caption_pane

0x86fc,	// (0x00015c77) list_single_cmail_header_detail_pane_ParamLimits

0x86fc,	// (0x00015c77) list_single_cmail_header_detail_pane

0xe59e,	// (0x0001bb19) list_single_cmail_header_caption_pane_t1

0x8722,	// (0x00015c9d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8722,	// (0x00015c9d) list_single_cmail_header_detail_pane_g1

0xe5b5,	// (0x0001bb30) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5b5,	// (0x0001bb30) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001d328) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001d328) list_single_cmail_header_detail_pane_g

0xe5ce,	// (0x0001bb49) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5ce,	// (0x0001bb49) list_single_cmail_header_detail_pane_t1

0xe62e,	// (0x0001bba9) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe62e,	// (0x0001bba9) list_single_cmail_header_editor_pane_bg

0xe645,	// (0x0001bbc0) list_cmail_body_pane_g1

0xe64e,	// (0x0001bbc9) list_cmail_body_pane_t1

0xd14d,	// (0x0001a6c8) list_single_cmail_header_editor_pane_bg_g1

0xa239,	// (0x000177b4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd15d,	// (0x0001a6d8) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd155,	// (0x0001a6d0) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd40a,	// (0x0001a985) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd17d,	// (0x0001a6f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd16d,	// (0x0001a6e8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd175,	// (0x0001a6f0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa219,	// (0x00017794) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8738,	// (0x00015cb3) calenote_gesture_pane_ParamLimits

0x8738,	// (0x00015cb3) calenote_gesture_pane

0x8754,	// (0x00015ccf) calenote_window_pane_ParamLimits

0x8754,	// (0x00015ccf) calenote_window_pane

0xe65c,	// (0x0001bbd7) popup_note_window_cp01

0x8770,	// (0x00015ceb) calenote_swipe_1_pane_ParamLimits

0x8770,	// (0x00015ceb) calenote_swipe_1_pane

0x8024,	// (0x0001559f) calenote_swipe_2_pane_ParamLimits

0x8024,	// (0x0001559f) calenote_swipe_2_pane

0xe2b9,	// (0x0001b834) calenote_swipe_1_pane_g1_ParamLimits

0xe2b9,	// (0x0001b834) calenote_swipe_1_pane_g1

0xe2c6,	// (0x0001b841) calenote_swipe_1_pane_g2_ParamLimits

0xe2c6,	// (0x0001b841) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001d251) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001d251) calenote_swipe_1_pane_g

0xe66e,	// (0x0001bbe9) calenote_swipe_1_pane_t1_ParamLimits

0xe66e,	// (0x0001bbe9) calenote_swipe_1_pane_t1

0xe2b9,	// (0x0001b834) calenote_swipe_2_pane_g1_ParamLimits

0xe2b9,	// (0x0001b834) calenote_swipe_2_pane_g1

0xe68d,	// (0x0001bc08) calenote_swipe_2_pane_g2_ParamLimits

0xe68d,	// (0x0001bc08) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001d334) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001d334) calenote_swipe_2_pane_g

0xe699,	// (0x0001bc14) calenote_swipe_2_pane_t1_ParamLimits

0xe699,	// (0x0001bc14) calenote_swipe_2_pane_t1

0x9589,	// (0x00016b04) main_mup_navstr_pane

0x4fdd,	// (0x00012558) main_mup3_pane_t7_ParamLimits

0x4fdd,	// (0x00012558) main_mup3_pane_t7

0xcd0d,	// (0x0001a288) main_mp4_pane_g6_ParamLimits

0xcd0d,	// (0x0001a288) main_mp4_pane_g6

0xcf27,	// (0x0001a4a2) main_image3_pane_t4_ParamLimits

0xcf27,	// (0x0001a4a2) main_image3_pane_t4

0x8785,	// (0x00015d00) popup_navstr_preview_pane_ParamLimits

0x8785,	// (0x00015d00) popup_navstr_preview_pane

0x8795,	// (0x00015d10) scroll_navstr_pane_ParamLimits

0x8795,	// (0x00015d10) scroll_navstr_pane

0x9589,	// (0x00016b04) bg_popup_preview_window_pane_cp04

0xe6c0,	// (0x0001bc3b) popup_navstr_preview_pane_t1

0x87a9,	// (0x00015d24) scroll_navstr_pane_g1_ParamLimits

0x87a9,	// (0x00015d24) scroll_navstr_pane_g1

0x87bd,	// (0x00015d38) scroll_navstr_pane_t1_ParamLimits

0x87bd,	// (0x00015d38) scroll_navstr_pane_t1

0xe665,	// (0x0001bbe0) bg_button_pane_cp014

0xe665,	// (0x0001bbe0) bg_button_pane_cp030

0x7edd,	// (0x00015458) list_double_fisheye_pane_g4_ParamLimits

0x7edd,	// (0x00015458) list_double_fisheye_pane_g4

0x7ee9,	// (0x00015464) list_double_fisheye_pane_g5_ParamLimits

0x7ee9,	// (0x00015464) list_double_fisheye_pane_g5

0xe250,	// (0x0001b7cb) sp_fs_scroll_pane_cp03

0xe391,	// (0x0001b90c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe39d,	// (0x0001b918) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001d26e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3a9,	// (0x0001b924) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe596,	// (0x0001bb11) sp_fs_scroll_pane_cp02

0x9f2e,	// (0x000174a9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9f2e,	// (0x000174a9) popup_sp_fs_calendar_preview_list_single_pane

0x9589,	// (0x00016b04) main_cam6_pano_pane

0x95f3,	// (0x00016b6e) main_mup3_pane_ParamLimits

0x9589,	// (0x00016b04) main_phacti_pane

0x7aeb,	// (0x00015066) bg_button_pane_cp11

0x7b03,	// (0x0001507e) main_mobtv_info_pane_g2_ParamLimits

0x7b03,	// (0x0001507e) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001d1ce) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001d1ce) main_mobtv_info_pane_g

0x7cb8,	// (0x00015233) sc_clock_pane_t5_ParamLimits

0x7cb8,	// (0x00015233) sc_clock_pane_t5

0x7d60,	// (0x000152db) main_radioblah_pane_g1_ParamLimits

0xe1c6,	// (0x0001b741) main_radioblah_pane_t3_ParamLimits

0xe1c6,	// (0x0001b741) main_radioblah_pane_t3

0xe1de,	// (0x0001b759) main_radioblah_pane_t4_ParamLimits

0xe1de,	// (0x0001b759) main_radioblah_pane_t4

0x7d88,	// (0x00015303) main_radioblah_text_pane_ParamLimits

0x7d88,	// (0x00015303) main_radioblah_text_pane

0x7d9a,	// (0x00015315) main_radioblah_info_pane_g1_ParamLimits

0x7e2b,	// (0x000153a6) main_radioblah_info_pane_t4_ParamLimits

0x7e2b,	// (0x000153a6) main_radioblah_info_pane_t4

0x95f3,	// (0x00016b6e) main_sp_fs_calendar_pane

0x87d3,	// (0x00015d4e) main_phacti_pane_g1

0x87db,	// (0x00015d56) phacti_note_pane_ParamLimits

0x87db,	// (0x00015d56) phacti_note_pane

0xe6d7,	// (0x0001bc52) phacti_term_pane_ParamLimits

0xe6d7,	// (0x0001bc52) phacti_term_pane

0xe6ec,	// (0x0001bc67) phacti_note_pane_t1_ParamLimits

0xe6ec,	// (0x0001bc67) phacti_note_pane_t1

0xe703,	// (0x0001bc7e) phacti_term_pane_g1

0xe70b,	// (0x0001bc86) phacti_term_pane_t1_ParamLimits

0xe70b,	// (0x0001bc86) phacti_term_pane_t1

0xe735,	// (0x0001bcb0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe73d,	// (0x0001bcb8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001d33e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe745,	// (0x0001bcc0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe745,	// (0x0001bcc0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe75b,	// (0x0001bcd6) aid_popup_sp_fs_bg_corner_pane

0xc3ec,	// (0x00019967) popup_sp_fs_calendar_preview_bg_pane_g1

0x9589,	// (0x00016b04) popup_sp_fs_calendar_preview_bg_pane

0xe763,	// (0x0001bcde) popup_sp_fs_calendar_preview_list_pane

0xbeea,	// (0x00019465) bg_main_sp_fs_cale_pane_ParamLimits

0xbeea,	// (0x00019465) bg_main_sp_fs_cale_pane

0xe774,	// (0x0001bcef) listscroll_cale_mrui_pane_ParamLimits

0xe774,	// (0x0001bcef) listscroll_cale_mrui_pane

0xd1d1,	// (0x0001a74c) listscroll_sp_fs_schedule_track_pane

0xe789,	// (0x0001bd04) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe789,	// (0x0001bd04) main_sp_fs_ctrlbar_pane_cp01

0xe79c,	// (0x0001bd17) main_sp_fs_ribbon_pane

0xe7a4,	// (0x0001bd1f) popup_sp_fs_cale_preview_window

0x883d,	// (0x00015db8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x883d,	// (0x00015db8) list_single_sp_fs_schedule_track_pane

0x95f3,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95f3,	// (0x00016b6e) bg_sp_fs_highlight_list_pane_cp03

0x884e,	// (0x00015dc9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x884e,	// (0x00015dc9) list_single_sp_fs_schedule_track_pane_g1

0x885a,	// (0x00015dd5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x885a,	// (0x00015dd5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001d343) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001d343) list_single_sp_fs_schedule_track_pane_g

0x8866,	// (0x00015de1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8866,	// (0x00015de1) list_single_sp_fs_schedule_track_pane_t1

0x8880,	// (0x00015dfb) sp_fs_schedule_track_pane_ParamLimits

0x8880,	// (0x00015dfb) sp_fs_schedule_track_pane

0xe7b6,	// (0x0001bd31) sp_fs_schedule_track_pane_g1

0xe7be,	// (0x0001bd39) sp_fs_schedule_track_pane_g2

0xe7c6,	// (0x0001bd41) sp_fs_schedule_track_pane_g3

0xe7ce,	// (0x0001bd49) sp_fs_schedule_track_pane_g4

0xe7d6,	// (0x0001bd51) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001d348) sp_fs_schedule_track_pane_g

0xd14d,	// (0x0001a6c8) bg_sp_fs_schedule_viewer_highlight_g1

0xa239,	// (0x000177b4) bg_sp_fs_schedule_viewer_highlight_g2

0xd155,	// (0x0001a6d0) bg_sp_fs_schedule_viewer_highlight_g3

0xd15d,	// (0x0001a6d8) bg_sp_fs_schedule_viewer_highlight_g4

0xd40a,	// (0x0001a985) bg_sp_fs_schedule_viewer_highlight_g5

0xd16d,	// (0x0001a6e8) bg_sp_fs_schedule_viewer_highlight_g6

0xd175,	// (0x0001a6f0) bg_sp_fs_schedule_viewer_highlight_g7

0xd17d,	// (0x0001a6f8) bg_sp_fs_schedule_viewer_highlight_g8

0xa219,	// (0x00017794) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001d353) bg_sp_fs_schedule_viewer_highlight_g

0x9589,	// (0x00016b04) bg_main_sp_fs_ribbon_pane

0x8891,	// (0x00015e0c) main_sp_fs_ribbon_pane_g1

0xe7de,	// (0x0001bd59) main_sp_fs_ribbon_pane_t1

0x889a,	// (0x00015e15) main_sp_fs_ribbon_pane_t2

0xe7ed,	// (0x0001bd68) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001d366) main_sp_fs_ribbon_pane_t

0xe7fc,	// (0x0001bd77) main_sp_fs_ribbon_scheduler_pane

0xe804,	// (0x0001bd7f) bg_main_sp_fs_ribbon_pane_g1

0xe80d,	// (0x0001bd88) bg_main_sp_fs_ribbon_pane_g2

0xe816,	// (0x0001bd91) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001d36d) bg_main_sp_fs_ribbon_pane_g

0xe81e,	// (0x0001bd99) main_sp_fs_ribbon_scheduler_pane_g1

0xe827,	// (0x0001bda2) main_sp_fs_ribbon_scheduler_pane_g2

0xe830,	// (0x0001bdab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001d374) main_sp_fs_ribbon_scheduler_pane_g

0xe839,	// (0x0001bdb4) list_cale_mrui_pane

0x88a9,	// (0x00015e24) sp_fs_scroll_pane_cp07_ParamLimits

0x88a9,	// (0x00015e24) sp_fs_scroll_pane_cp07

0x88c1,	// (0x00015e3c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x88c1,	// (0x00015e3c) bg_sp_fs_schedule_viewer_highlight

0xe846,	// (0x0001bdc1) list_single_sp_fs_schedule_track_pane_cp01

0xe84e,	// (0x0001bdc9) list_sp_fs_schedule_track_pane

0xe856,	// (0x0001bdd1) sp_fs_scroll_pane_cp06_ParamLimits

0xe856,	// (0x0001bdd1) sp_fs_scroll_pane_cp06

0xc3ec,	// (0x00019967) bgmain_sp_fs_calendar_pane_g1

0x88d1,	// (0x00015e4c) list_single_cale_mrui_pane_ParamLimits

0x88d1,	// (0x00015e4c) list_single_cale_mrui_pane

0xe868,	// (0x0001bde3) list_single_cale_mrui_row_pane_ParamLimits

0xe868,	// (0x0001bde3) list_single_cale_mrui_row_pane

0xe875,	// (0x0001bdf0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe875,	// (0x0001bdf0) list_single_cale_mrui_row_pane_g1

0xe8ae,	// (0x0001be29) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8ae,	// (0x0001be29) list_single_cale_mrui_row_pane_t1

0x88f1,	// (0x00015e6c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x88f1,	// (0x00015e6c) list_single_cale_mrui_row_pane_t2

0xe8c0,	// (0x0001be3b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8c0,	// (0x0001be3b) list_single_cale_mrui_row_pane_t3

0xe8ef,	// (0x0001be6a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8ef,	// (0x0001be6a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001d382) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001d382) list_single_cale_mrui_row_pane_t

0x8957,	// (0x00015ed2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8957,	// (0x00015ed2) list_single_cmail_header_editor_pane_bg_cp01

0x8977,	// (0x00015ef2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8977,	// (0x00015ef2) list_single_cmail_header_editor_pane_bg_cp02

0x8993,	// (0x00015f0e) main_radioblah_text_pane_t1_ParamLimits

0x8993,	// (0x00015f0e) main_radioblah_text_pane_t1

0xe91e,	// (0x0001be99) cam6_indi_pane_cp01

0xe926,	// (0x0001bea1) cam6_mode_pane_cp01

0xe92e,	// (0x0001bea9) cam6_pano_pane

0xe937,	// (0x0001beb2) cam6_zoom_pane_cp01

0xe93f,	// (0x0001beba) cam6_pano_image_pane

0xe948,	// (0x0001bec3) cam6_pano_pane_g1

0xdf2d,	// (0x0001b4a8) cam6_pano_pane_g2

0xe951,	// (0x0001becc) cam6_pano_pane_g3

0xe95a,	// (0x0001bed5) cam6_pano_pane_g4

0xc970,	// (0x00019eeb) cam6_pano_pane_g5

0xe963,	// (0x0001bede) cam6_pano_pane_g6

0xe96b,	// (0x0001bee6) cam6_pano_pane_g7

0xe973,	// (0x0001beee) cam6_pano_pane_g8

0xe97c,	// (0x0001bef7) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001d38b) cam6_pano_pane_g

0x9589,	// (0x00016b04) main_browser_tag_pane

0xe6b8,	// (0x0001bc33) grid_navstr_albumart_pane

0xe985,	// (0x0001bf00) cell_navstr_albumart_pane_ParamLimits

0xe985,	// (0x0001bf00) cell_navstr_albumart_pane

0xabf6,	// (0x00018171) cell_navstr_albumart_pane_g1

0xbcbb,	// (0x00019236) cell_navstr_albumart_pane_g2

0xbccb,	// (0x00019246) cell_navstr_albumart_pane_g3

0xbcc3,	// (0x0001923e) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001d39e) cell_navstr_albumart_pane_g

0x89ad,	// (0x00015f28) bt_list_pane_ParamLimits

0x89ad,	// (0x00015f28) bt_list_pane

0x89c0,	// (0x00015f3b) bt_list_pane_t1

0x89cf,	// (0x00015f4a) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001d3a7) bt_list_pane_t

0x9589,	// (0x00016b04) main_cale_prevew_pane

0x89de,	// (0x00015f59) popup_cale_preview_window_ParamLimits

0x89de,	// (0x00015f59) popup_cale_preview_window

0x95f3,	// (0x00016b6e) bg_popup_preview_window_pane_cp05_ParamLimits

0x95f3,	// (0x00016b6e) bg_popup_preview_window_pane_cp05

0xe99d,	// (0x0001bf18) list_cale_preview_pane_ParamLimits

0xe99d,	// (0x0001bf18) list_cale_preview_pane

0xe9a9,	// (0x0001bf24) list_double_cale_preview_pane_ParamLimits

0xe9a9,	// (0x0001bf24) list_double_cale_preview_pane

0xe9bb,	// (0x0001bf36) list_single_cale_preview_pane_ParamLimits

0xe9bb,	// (0x0001bf36) list_single_cale_preview_pane

0xe9cf,	// (0x0001bf4a) list_single_cale_preview_pane_g1

0xe9d7,	// (0x0001bf52) list_single_cale_preview_pane_t1_ParamLimits

0xe9d7,	// (0x0001bf52) list_single_cale_preview_pane_t1

0xe9ec,	// (0x0001bf67) list_double_cale_preview_pane_g1

0xe9f4,	// (0x0001bf6f) list_double_cale_preview_pane_t1_ParamLimits

0xe9f4,	// (0x0001bf6f) list_double_cale_preview_pane_t1

0xea09,	// (0x0001bf84) list_double_cale_preview_pane_t2_ParamLimits

0xea09,	// (0x0001bf84) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001d3ac) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001d3ac) list_double_cale_preview_pane_t

0x9589,	// (0x00016b04) main_ezdial_pane

0x95f3,	// (0x00016b6e) main_sp_fs_email_pane_ParamLimits

0x8094,	// (0x0001560f) cmail_ddmenu_btn01_pane_ParamLimits

0x8094,	// (0x0001560f) cmail_ddmenu_btn01_pane

0x80a7,	// (0x00015622) cmail_ddmenu_btn02_pane_ParamLimits

0x80a7,	// (0x00015622) cmail_ddmenu_btn02_pane

0x80ca,	// (0x00015645) cmail_ddmenu_btn03_pane_ParamLimits

0x80ca,	// (0x00015645) cmail_ddmenu_btn03_pane

0x80ec,	// (0x00015667) main_sp_fs_ctrlbar_pane_ParamLimits

0x8110,	// (0x0001568b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x86d5,	// (0x00015c50) list_cmail_body_pane_ParamLimits

0xe5ac,	// (0x0001bb27) bg_button_pane_cp12

0xe5c1,	// (0x0001bb3c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5c1,	// (0x0001bb3c) list_single_cmail_header_detail_pane_g3

0xe60a,	// (0x0001bb85) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe60a,	// (0x0001bb85) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001d32f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001d32f) list_single_cmail_header_detail_pane_t

0xe720,	// (0x0001bc9b) phacti_term_pane_t2_ParamLimits

0xe720,	// (0x0001bc9b) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001d339) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001d339) phacti_term_pane_t

0xea21,	// (0x0001bf9c) aid_size_list_single_double

0x89f3,	// (0x00015f6e) popup_ezdial_listscroll_window

0x8a09,	// (0x00015f84) popup_number_entry_window_cp01

0x9fc9,	// (0x00017544) bg_popup_call_pane_cp09

0xea2d,	// (0x0001bfa8) ezdial_list_pane

0xea35,	// (0x0001bfb0) scroll_pane_cp23

0xbeea,	// (0x00019465) bg_button_pane_cp028_ParamLimits

0xbeea,	// (0x00019465) bg_button_pane_cp028

0x8a15,	// (0x00015f90) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a15,	// (0x00015f90) cmail_ddmenu_btn01_pane_g1

0x8a21,	// (0x00015f9c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a21,	// (0x00015f9c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001d3b1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001d3b1) cmail_ddmenu_btn01_pane_g

0xea3d,	// (0x0001bfb8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea3d,	// (0x0001bfb8) cmail_ddmenu_btn01_pane_t1

0xbeea,	// (0x00019465) bg_button_pane_cp029_ParamLimits

0xbeea,	// (0x00019465) bg_button_pane_cp029

0x8a35,	// (0x00015fb0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a35,	// (0x00015fb0) cmail_ddmenu_btn02_pane_g1

0x8a4e,	// (0x00015fc9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a4e,	// (0x00015fc9) cmail_ddmenu_btn02_pane_t1

0x95f3,	// (0x00016b6e) bg_button_pane_cp031_ParamLimits

0x95f3,	// (0x00016b6e) bg_button_pane_cp031

0x8a35,	// (0x00015fb0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a35,	// (0x00015fb0) cmail_ddmenu_btn03_pane_g1

0x8a4e,	// (0x00015fc9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a4e,	// (0x00015fc9) cmail_ddmenu_btn03_pane_t1

0x5ac2,	// (0x0001303d) cell_dialer2_keypad_pane_t1_ParamLimits

0x5adc,	// (0x00013057) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5adc,	// (0x00013057) cell_dialer2_keypad_pane_t1_copy1

0x7910,	// (0x00014e8b) ncimui_group_button_pane

0x95f3,	// (0x00016b6e) main_sp_fs_calendar_pane_ParamLimits

0x86e8,	// (0x00015c63) list_single_cmail_header_caption_pane_ParamLimits

0xe76b,	// (0x0001bce6) aid_recal_txt_sm_pane

0x9589,	// (0x00016b04) mian_recal_day_pane

0xe7a4,	// (0x0001bd1f) popup_sp_fs_cale_preview_window_ParamLimits

0xea53,	// (0x0001bfce) list_recal_day_pane

0xea95,	// (0x0001c010) list_single_recal_day_pane_ParamLimits

0xea95,	// (0x0001c010) list_single_recal_day_pane

0xeaa7,	// (0x0001c022) list_single_recal_day_pane_g1_ParamLimits

0xeaa7,	// (0x0001c022) list_single_recal_day_pane_g1

0xeab3,	// (0x0001c02e) list_single_recal_day_pane_g2_ParamLimits

0xeab3,	// (0x0001c02e) list_single_recal_day_pane_g2

0xeabf,	// (0x0001c03a) list_single_recal_day_pane_g3_ParamLimits

0xeabf,	// (0x0001c03a) list_single_recal_day_pane_g3

0x8a72,	// (0x00015fed) list_single_recal_day_pane_g4_ParamLimits

0x8a72,	// (0x00015fed) list_single_recal_day_pane_g4

0xeacb,	// (0x0001c046) list_single_recal_day_pane_g5_ParamLimits

0xeacb,	// (0x0001c046) list_single_recal_day_pane_g5

0xead7,	// (0x0001c052) list_single_recal_day_pane_g6_ParamLimits

0xead7,	// (0x0001c052) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001d3c0) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001d3c0) list_single_recal_day_pane_g

0xeaeb,	// (0x0001c066) list_single_recal_day_pane_t1

0xeafd,	// (0x0001c078) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001d3cb) list_single_recal_day_pane_t

0x8a8a,	// (0x00016005) ncimui_query_button_pane_ParamLimits

0x8a8a,	// (0x00016005) ncimui_query_button_pane

0x8a9a,	// (0x00016015) ncimui_query_button_pane_t1_ParamLimits

0x8a9a,	// (0x00016015) ncimui_query_button_pane_t1

0xeb0f,	// (0x0001c08a) ncimui_query_button_pane_t2_ParamLimits

0xeb0f,	// (0x0001c08a) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001d3d0) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001d3d0) ncimui_query_button_pane_t

0x8aad,	// (0x00016028) query_button_pane_ParamLimits

0x8aad,	// (0x00016028) query_button_pane

0x9589,	// (0x00016b04) bg_button_pane_cp0028

0xeb22,	// (0x0001c09d) query_button_pane_t1

0x3d99,	// (0x00011314) main_tport_pane_ParamLimits

0x85e8,	// (0x00015b63) bg_popup_window_pane_cp01_ParamLimits

0x85e8,	// (0x00015b63) bg_popup_window_pane_cp01

0x85ff,	// (0x00015b7a) heading_pane_cp08_ParamLimits

0x85ff,	// (0x00015b7a) heading_pane_cp08

0x8610,	// (0x00015b8b) heading_pane_cp07_ParamLimits

0x8610,	// (0x00015b8b) heading_pane_cp07

0xe568,	// (0x0001bae3) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001d31c) cell_tport_appsw_pane_g

0x3449,	// (0x000109c4) input_candi_list_open_g1

0xa432,	// (0x000179ad) list_cale_time_pane_g6_ParamLimits

0xa432,	// (0x000179ad) list_cale_time_pane_g6

0x4a26,	// (0x00011fa1) aid_size_touch_calib_1_ParamLimits

0x4a26,	// (0x00011fa1) aid_size_touch_calib_1

0x4a38,	// (0x00011fb3) aid_size_touch_calib_2_ParamLimits

0x4a38,	// (0x00011fb3) aid_size_touch_calib_2

0x4a4e,	// (0x00011fc9) aid_size_touch_calib_3_ParamLimits

0x4a4e,	// (0x00011fc9) aid_size_touch_calib_3

0x4a66,	// (0x00011fe1) aid_size_touch_calib_4_ParamLimits

0x4a66,	// (0x00011fe1) aid_size_touch_calib_4

0x4a7a,	// (0x00011ff5) main_touch_calib_button_group_pane_ParamLimits

0x4a7a,	// (0x00011ff5) main_touch_calib_button_group_pane

0x4a92,	// (0x0001200d) main_touch_calib_pane_g1_ParamLimits

0x4aa4,	// (0x0001201f) main_touch_calib_pane_g2_ParamLimits

0x4ab6,	// (0x00012031) main_touch_calib_pane_g3_ParamLimits

0x4ac8,	// (0x00012043) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0001ccdf) main_touch_calib_pane_g_ParamLimits

0x4ada,	// (0x00012055) main_touch_calib_pane_t1_ParamLimits

0x4af2,	// (0x0001206d) main_touch_calib_pane_t2_ParamLimits

0x4b0a,	// (0x00012085) main_touch_calib_pane_t3_ParamLimits

0x4b1c,	// (0x00012097) main_touch_calib_pane_t4_ParamLimits

0x4b2e,	// (0x000120a9) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0001cce8) main_touch_calib_pane_t_ParamLimits

0xc727,	// (0x00019ca2) list_single_fp_cale_pane_g3_ParamLimits

0xc727,	// (0x00019ca2) list_single_fp_cale_pane_g3

0x95f3,	// (0x00016b6e) bg_button_pane_cp012_ParamLimits

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp03_ParamLimits

0x6a2e,	// (0x00013fa9) cell_vitu2_function_top_pane_g1_ParamLimits

0x95f3,	// (0x00016b6e) bg_vkb2_func_pane_cp04_ParamLimits

0x789d,	// (0x00014e18) main_ncimui_button_group_pane_ParamLimits

0x789d,	// (0x00014e18) main_ncimui_button_group_pane

0x78fb,	// (0x00014e76) main_ncimui_pane_t3_ParamLimits

0x78fb,	// (0x00014e76) main_ncimui_pane_t3

0xe6ce,	// (0x0001bc49) phacti_button_group_pane

0xea21,	// (0x0001bf9c) aid_size_list_single_double_ParamLimits

0x89f3,	// (0x00015f6e) popup_ezdial_listscroll_window_ParamLimits

0x8a09,	// (0x00015f84) popup_number_entry_window_cp01_ParamLimits

0x8abf,	// (0x0001603a) phacti_button_pane_ParamLimits

0x8abf,	// (0x0001603a) phacti_button_pane

0x9589,	// (0x00016b04) bg_button_pane_cp14

0xeb30,	// (0x0001c0ab) phacti_button_pane_t1

0x8ace,	// (0x00016049) main_touch_calib_button_pane_ParamLimits

0x8ace,	// (0x00016049) main_touch_calib_button_pane

0x9d94,	// (0x0001730f) bg_button_pane_cp18_ParamLimits

0x9d94,	// (0x0001730f) bg_button_pane_cp18

0xeb3e,	// (0x0001c0b9) main_touch_calib_button_pane_t1_ParamLimits

0xeb3e,	// (0x0001c0b9) main_touch_calib_button_pane_t1

0xeb54,	// (0x0001c0cf) main_touch_calib_button_pane_t2_ParamLimits

0xeb54,	// (0x0001c0cf) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001d3d5) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001d3d5) main_touch_calib_button_pane_t

0x9589,	// (0x00016b04) cell_ncimui_button_pane

0x9589,	// (0x00016b04) bg_button_pane_cp032

0xeb72,	// (0x0001c0ed) cell_ncimui_button_pane_t1

0xcf07,	// (0x0001a482) image3_infobar_pane_ParamLimits

0xcf07,	// (0x0001a482) image3_infobar_pane

0x7ce0,	// (0x0001525b) fs_bigclock_status_pane_ParamLimits

0x7ce0,	// (0x0001525b) fs_bigclock_status_pane

0x7ced,	// (0x00015268) main_fs_bigclock_clock_pane_ParamLimits

0x7ced,	// (0x00015268) main_fs_bigclock_clock_pane

0x7d09,	// (0x00015284) main_fs_bigclock_indi_pane_ParamLimits

0x7d09,	// (0x00015284) main_fs_bigclock_indi_pane

0x7d33,	// (0x000152ae) main_fs_bigclock_swipe_pane_ParamLimits

0x7d33,	// (0x000152ae) main_fs_bigclock_swipe_pane

0x9589,	// (0x00016b04) main_fs_clock_dumped_data

0xe03a,	// (0x0001b5b5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe03a,	// (0x0001b5b5) list_single_fs_bigclock_indicator_pane_g1

0xe054,	// (0x0001b5cf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe054,	// (0x0001b5cf) list_single_fs_bigclock_indicator_pane_g2

0xe06e,	// (0x0001b5e9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe06e,	// (0x0001b5e9) list_single_fs_bigclock_indicator_pane_g3

0xe088,	// (0x0001b603) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe088,	// (0x0001b603) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001d202) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001d202) list_single_fs_bigclock_indicator_pane_g

0xe0b1,	// (0x0001b62c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0b1,	// (0x0001b62c) list_single_fs_bigclock_indicator_pane_t1

0xe0d9,	// (0x0001b654) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0d9,	// (0x0001b654) list_single_fs_bigclock_indicator_pane_t2

0xe101,	// (0x0001b67c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe101,	// (0x0001b67c) list_single_fs_bigclock_indicator_pane_t3

0xe129,	// (0x0001b6a4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe129,	// (0x0001b6a4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001d20d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001d20d) list_single_fs_bigclock_indicator_pane_t

0xeb80,	// (0x0001c0fb) image3_infobar_fav_pane_ParamLimits

0xeb80,	// (0x0001c0fb) image3_infobar_fav_pane

0xeb90,	// (0x0001c10b) image3_infobar_loc_pane_ParamLimits

0xeb90,	// (0x0001c10b) image3_infobar_loc_pane

0xeba4,	// (0x0001c11f) image3_infobar_time_pane_ParamLimits

0xeba4,	// (0x0001c11f) image3_infobar_time_pane

0xc3ec,	// (0x00019967) image3_infobar_time_pane_g1

0xebb4,	// (0x0001c12f) image3_infobar_time_pane_t1

0xc3ec,	// (0x00019967) image3_infobar_loc_pane_g1

0xebc2,	// (0x0001c13d) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001d3da) image3_infobar_loc_pane_g

0xebca,	// (0x0001c145) image3_infobar_loc_pane_t1

0xc3ec,	// (0x00019967) image3_infobar_fav_pane_g1

0xebd8,	// (0x0001c153) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001d3df) image3_infobar_fav_pane_g

0xebe0,	// (0x0001c15b) fs_bigclock_status_battery_pane

0xebe9,	// (0x0001c164) fs_bigclock_status_signal_pane

0xebf2,	// (0x0001c16d) fs_bigclock_status_title_pane

0xebfb,	// (0x0001c176) fs_bigclock_status_signal_pane_g1

0xec04,	// (0x0001c17f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001d3e4) fs_bigclock_status_signal_pane_g

0xec0c,	// (0x0001c187) fs_bigclock_status_battery_pane_g1

0xec15,	// (0x0001c190) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001d3e9) fs_bigclock_status_battery_pane_g

0xec1d,	// (0x0001c198) fs_bigclock_status_title_pane_t1

0x8ae1,	// (0x0001605c) main_fs_bigclock_clock_pane_g1

0x8ae1,	// (0x0001605c) main_fs_bigclock_clock_pane_g2

0x8af2,	// (0x0001606d) main_fs_bigclock_clock_pane_g3

0x8af2,	// (0x0001606d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001d3ee) main_fs_bigclock_clock_pane_g

0x8b05,	// (0x00016080) main_fs_bigclock_clock_pane_t1

0x8b1b,	// (0x00016096) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001d3f7) main_fs_bigclock_clock_pane_t

0xec2b,	// (0x0001c1a6) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec2b,	// (0x0001c1a6) list_single_fs_bigclock_indicator_pane

0xec3c,	// (0x0001c1b7) list_single_fs_bigclock_pane_ParamLimits

0xec3c,	// (0x0001c1b7) list_single_fs_bigclock_pane

0xec62,	// (0x0001c1dd) main_fs_bigclock_indicator_pane_t1

0xec71,	// (0x0001c1ec) list_single_fs_bigclock_pane_g1

0xec79,	// (0x0001c1f4) list_single_fs_bigclock_pane_t1

0xc3ec,	// (0x00019967) main_fs_bigclock_swipe_pane_g1

0xecbc,	// (0x0001c237) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001d408) main_fs_bigclock_swipe_pane_g

0xecd7,	// (0x0001c252) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd7,	// (0x0001c252) main_fs_bigclock_swipe_pane_t1

0x2d73,	// (0x000102ee) call_type_pane_ParamLimits

0x9589,	// (0x00016b04) main_btmg_pane

0xe39d,	// (0x0001b918) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe39d,	// (0x0001b918) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001d37b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001d37b) list_single_cale_mrui_row_pane_g

0xea7c,	// (0x0001bff7) list_recal_vselct_arw_lo_pane

0xea84,	// (0x0001bfff) list_recal_vselct_arw_up_pane

0xea8c,	// (0x0001c007) list_recal_vselct_pane

0x8b73,	// (0x000160ee) btmg_button_pane

0x8b7b,	// (0x000160f6) main_btmg_pane_g1

0x9589,	// (0x00016b04) bg_button_pane_cp044

0xecf4,	// (0x0001c26f) btmg_button_pane_t1

0xbed6,	// (0x00019451) aid_listscroll_gen

0x95f3,	// (0x00016b6e) main_cntbar_detail_pane

0xe58e,	// (0x0001bb09) list_cmail_folder_pane

0xe250,	// (0x0001b7cb) sp_fs_scroll_pane_cp03_ParamLimits

0xeff2,	// (0x0001c56d) list_single_fs_dyc_pane_cp01_ParamLimits

0xeff2,	// (0x0001c56d) list_single_fs_dyc_pane_cp01

0xed02,	// (0x0001c27d) aid_size_cmail_indent

0xed0b,	// (0x0001c286) list_single_dyc_row_pane_cp01

0x8bab,	// (0x00016126) cntbar_detail_list_pane_ParamLimits

0x8bab,	// (0x00016126) cntbar_detail_list_pane

0x8bf1,	// (0x0001616c) main_cntbar_detail_cont_pane_ParamLimits

0x8bf1,	// (0x0001616c) main_cntbar_detail_cont_pane

0xe250,	// (0x0001b7cb) scroll_pane_cp032_ParamLimits

0xe250,	// (0x0001b7cb) scroll_pane_cp032

0x8c05,	// (0x00016180) cntbar_detail_list_event_pane_ParamLimits

0x8c05,	// (0x00016180) cntbar_detail_list_event_pane

0x8bbb,	// (0x00016136) cntbar_detail_list_shct_pane

0xa287,	// (0x00017802) aid_list_gen

0xed14,	// (0x0001c28f) aid_scroll

0xed1d,	// (0x0001c298) aid_size_touch_scroll_bar

0x70c4,	// (0x0001463f) aid_list_double

0xd7d7,	// (0x0001ad52) aid_list_single

0xd7d7,	// (0x0001ad52) aid_list_single_lg

0x8c15,	// (0x00016190) aid_list_z_g_a_sm

0xed26,	// (0x0001c2a1) aid_list_z_g_d

0x8c1d,	// (0x00016198) aid_txt_z_prm

0x8c2b,	// (0x000161a6) aid_txt_z_prm_cp01

0x8c39,	// (0x000161b4) aid_txt_z_sec

0x8c47,	// (0x000161c2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c47,	// (0x000161c2) main_cntbar_detail_cont_pane_g1

0x8c5a,	// (0x000161d5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c5a,	// (0x000161d5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001d40d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001d40d) main_cntbar_detail_cont_pane_g

0xed2e,	// (0x0001c2a9) main_cntbar_detail_cont_pane_t1

0xed3c,	// (0x0001c2b7) main_cntbar_detail_cont_pane_t2

0xed4a,	// (0x0001c2c5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001d412) main_cntbar_detail_cont_pane_t

0x8c6a,	// (0x000161e5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c6a,	// (0x000161e5) cell_cntbar_detail_list_shct_pane

0xed58,	// (0x0001c2d3) cntbar_detail_list_shct_pane_g1

0xed61,	// (0x0001c2dc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001d419) cntbar_detail_list_shct_pane_g

0x8c7c,	// (0x000161f7) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c7c,	// (0x000161f7) cntbar_detail_list_event_pane_g1

0x8c88,	// (0x00016203) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c88,	// (0x00016203) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001d41e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001d41e) cntbar_detail_list_event_pane_g

0x8cf4,	// (0x0001626f) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cf4,	// (0x0001626f) cntbar_detail_list_event_pane_t1

0x8d09,	// (0x00016284) cntbar_detail_list_event_pane_t2_ParamLimits

0x8d09,	// (0x00016284) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001d42b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001d42b) cntbar_detail_list_event_pane_t

0xc3ec,	// (0x00019967) cell_cntbar_detail_list_shct_pane_g1

0xaa50,	// (0x00017fcb) navi_pane_mv_g3

0x95f3,	// (0x00016b6e) main_cntbar_detail_pane_ParamLimits

0x9589,	// (0x00016b04) main_notif_wgt_pane

0xcc99,	// (0x0001a214) aid_tch_main_mp4_pane_g4

0xce9f,	// (0x0001a41a) popup_slider_window_cp02

0xea72,	// (0x0001bfed) list_recal_day_event_pane

0x8b83,	// (0x000160fe) cntbar_detail_btn_pane_ParamLimits

0x8b83,	// (0x000160fe) cntbar_detail_btn_pane

0x8b96,	// (0x00016111) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b96,	// (0x00016111) cntbar_detail_btn_pane_cp01

0x8bbb,	// (0x00016136) cntbar_detail_list_shct_pane_ParamLimits

0x8bcb,	// (0x00016146) cntbar_detail_pane_g1_ParamLimits

0x8bcb,	// (0x00016146) cntbar_detail_pane_g1

0x8bdb,	// (0x00016156) cntbar_detail_pane_t1_ParamLimits

0x8bdb,	// (0x00016156) cntbar_detail_pane_t1

0x8c94,	// (0x0001620f) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c94,	// (0x0001620f) cntbar_detail_list_event_pane_g3

0x8cac,	// (0x00016227) cntbar_detail_list_event_pane_g4_ParamLimits

0x8cac,	// (0x00016227) cntbar_detail_list_event_pane_g4

0x8cc4,	// (0x0001623f) cntbar_detail_list_event_pane_g5_ParamLimits

0x8cc4,	// (0x0001623f) cntbar_detail_list_event_pane_g5

0x8cdc,	// (0x00016257) cntbar_detail_list_event_pane_g6_ParamLimits

0x8cdc,	// (0x00016257) cntbar_detail_list_event_pane_g6

0x8d1e,	// (0x00016299) cntbar_detail_list_event_pane_t3_ParamLimits

0x8d1e,	// (0x00016299) cntbar_detail_list_event_pane_t3

0x8d30,	// (0x000162ab) popup_notif_wgt_window_ParamLimits

0x8d30,	// (0x000162ab) popup_notif_wgt_window

0x8d45,	// (0x000162c0) popup_submenu_window_cp01_ParamLimits

0x8d45,	// (0x000162c0) popup_submenu_window_cp01

0x9fc9,	// (0x00017544) bg_popup_window_pane_cp10

0xed6a,	// (0x0001c2e5) listscroll_notif_wgt_pane

0xed7b,	// (0x0001c2f6) list_notif_wgt_window

0xed84,	// (0x0001c2ff) scroll_pane_cp033

0x8d55,	// (0x000162d0) list_notif_wgt_row_pane_ParamLimits

0x8d55,	// (0x000162d0) list_notif_wgt_row_pane

0xed8d,	// (0x0001c308) aid_size_list_notif_wgt_del

0xed9a,	// (0x0001c315) list_notif_wgt_row_pane_g1

0xeda6,	// (0x0001c321) list_notif_wgt_row_pane_g2

0xedb5,	// (0x0001c330) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001d432) list_notif_wgt_row_pane_g

0xedc2,	// (0x0001c33d) list_notif_wgt_row_pane_t1

0xedd8,	// (0x0001c353) list_notif_wgt_row_pane_t2

0xedea,	// (0x0001c365) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001d439) list_notif_wgt_row_pane_t

0xd432,	// (0x0001a9ad) list_recal_day_event_pane_g1

0xedfc,	// (0x0001c377) list_recal_day_event_pane_t1

0x9589,	// (0x00016b04) bg_button_pane_cp045

0x8d65,	// (0x000162e0) cntbar_detail_btn_pane_t1

0xbeea,	// (0x00019465) main_callh_pane_ParamLimits

0xbeea,	// (0x00019465) main_callh_pane

0x9589,	// (0x00016b04) main_coverflow0_pane

0x9589,	// (0x00016b04) main_wgtman_pane

0x7d47,	// (0x000152c2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7d47,	// (0x000152c2) main_fs_bigclock_unlock_btn_pane

0xe560,	// (0x0001badb) bg_button_pane_cp16

0xe570,	// (0x0001baeb) cell_tport_appsw_pane_g3

0x8d73,	// (0x000162ee) cf0_flow_pane_ParamLimits

0x8d73,	// (0x000162ee) cf0_flow_pane

0xee0b,	// (0x0001c386) listscroll_cf0_pane

0xee14,	// (0x0001c38f) main_cf0_pane_g1

0x8d88,	// (0x00016303) main_cf0_pane_t1_ParamLimits

0x8d88,	// (0x00016303) main_cf0_pane_t1

0x8d9d,	// (0x00016318) main_cf0_pane_t2_ParamLimits

0x8d9d,	// (0x00016318) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001d445) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001d445) main_cf0_pane_t

0xee26,	// (0x0001c3a1) scroll_pane_cp11

0x8db2,	// (0x0001632d) cf0_flow_pane_g1

0x8dba,	// (0x00016335) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001d44a) cf0_flow_pane_g

0x8dc2,	// (0x0001633d) cf0_flow_pane_t1

0x9589,	// (0x00016b04) main_call6_pane

0x9589,	// (0x00016b04) main_calllock_pane

0x8dd0,	// (0x0001634b) call6_btn_grp_pane_ParamLimits

0x8dd0,	// (0x0001634b) call6_btn_grp_pane

0x8de6,	// (0x00016361) call6_pane_g1_ParamLimits

0x8de6,	// (0x00016361) call6_pane_g1

0x8df9,	// (0x00016374) popup_call6_1st_window_ParamLimits

0x8df9,	// (0x00016374) popup_call6_1st_window

0x8e08,	// (0x00016383) popup_call6_2nd_window_ParamLimits

0x8e08,	// (0x00016383) popup_call6_2nd_window

0x8e17,	// (0x00016392) cell_call6_btn_pane_ParamLimits

0x8e17,	// (0x00016392) cell_call6_btn_pane

0x9fc9,	// (0x00017544) bg_popup_call2_in_pane_cp03

0xee2f,	// (0x0001c3aa) popup_call6_1st_window_g1

0xee37,	// (0x0001c3b2) popup_call6_1st_window_g2

0xee3f,	// (0x0001c3ba) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001d44f) popup_call6_1st_window_g

0xee47,	// (0x0001c3c2) popup_call6_1st_window_t1

0xee56,	// (0x0001c3d1) popup_call6_1st_window_t2

0xee64,	// (0x0001c3df) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001d456) popup_call6_1st_window_t

0x9fc9,	// (0x00017544) bg_popup_call2_in_pane_cp04

0xee2f,	// (0x0001c3aa) popup_call6_2nd_window_g1

0xee37,	// (0x0001c3b2) popup_call6_2nd_window_g2

0xee3f,	// (0x0001c3ba) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001d44f) popup_call6_2nd_window_g

0xee47,	// (0x0001c3c2) popup_call6_2nd_window_t1

0x9589,	// (0x00016b04) bg_button_pane_cp15

0xee72,	// (0x0001c3ed) cell_call6_btn_pane_g1

0xee7b,	// (0x0001c3f6) cell_call6_btn_pane_t1

0x8e2b,	// (0x000163a6) listscroll_wgtman_pane_ParamLimits

0x8e2b,	// (0x000163a6) listscroll_wgtman_pane

0x8e4c,	// (0x000163c7) wgtman_btn_pane_ParamLimits

0x8e4c,	// (0x000163c7) wgtman_btn_pane

0xa868,	// (0x00017de3) aid_scroll_copy1

0xee8a,	// (0x0001c405) list_wgtman_pane

0x8e8c,	// (0x00016407) wgtman_btn_pane_g1_ParamLimits

0x8e8c,	// (0x00016407) wgtman_btn_pane_g1

0x8eb8,	// (0x00016433) wgtman_btn_pane_t1_ParamLimits

0x8eb8,	// (0x00016433) wgtman_btn_pane_t1

0xee94,	// (0x0001c40f) wgtman_btn_pane_t2_ParamLimits

0xee94,	// (0x0001c40f) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001d45d) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001d45d) wgtman_btn_pane_t

0x8ef5,	// (0x00016470) listrow_wgtman_pane_ParamLimits

0x8ef5,	// (0x00016470) listrow_wgtman_pane

0x8f06,	// (0x00016481) listrow_wgtman_pane_g1

0x8f13,	// (0x0001648e) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001d462) listrow_wgtman_pane_g

0x8f2b,	// (0x000164a6) listrow_wgtman_pane_t1

0x8f43,	// (0x000164be) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001d467) listrow_wgtman_pane_t

0x8f69,	// (0x000164e4) wait_bar_pane_cp09

0xeeab,	// (0x0001c426) main_calllock_btn_pane

0xeeb3,	// (0x0001c42e) main_calllock_pane_g1

0x9589,	// (0x00016b04) bg_button_pane_cp17

0xeebc,	// (0x0001c437) main_calllock_btn_pane_g1

0xeec5,	// (0x0001c440) main_calllock_btn_pane_t1

0x9589,	// (0x00016b04) main_dialer3_pane

0x9589,	// (0x00016b04) main_fmrd2_pane

0xc3ec,	// (0x00019967) main_fs_bigclock_unlock_btn_pane_g1

0xeedc,	// (0x0001c457) main_fs_bigclock_unlock_btn_pane_t1

0x8f7b,	// (0x000164f6) area_fmrd2_info_pane_ParamLimits

0x8f7b,	// (0x000164f6) area_fmrd2_info_pane

0x8f8a,	// (0x00016505) area_fmrd2_visual_pane_ParamLimits

0x8f8a,	// (0x00016505) area_fmrd2_visual_pane

0x8f98,	// (0x00016513) fmrd2_indi_pane_ParamLimits

0x8f98,	// (0x00016513) fmrd2_indi_pane

0x8fa5,	// (0x00016520) area_fmrd2_visual_pane_g1

0x8fad,	// (0x00016528) area_fmrd2_visual_pane_t1

0x8fbb,	// (0x00016536) area_fmrd2_visual_pane_t2

0x8fc9,	// (0x00016544) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001d471) area_fmrd2_visual_pane_t

0x8fd7,	// (0x00016552) area_fmrd2_info_pane_g1

0x8fdf,	// (0x0001655a) area_fmrd2_info_pane_t1

0x8fed,	// (0x00016568) area_fmrd2_info_pane_t2

0x8ffb,	// (0x00016576) area_fmrd2_info_pane_t3

0x9009,	// (0x00016584) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001d478) area_fmrd2_info_pane_t

0x9017,	// (0x00016592) fmrd2_indi_pane_t1

0x9025,	// (0x000165a0) fmrd2_indi_pane_t2

0x9033,	// (0x000165ae) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001d481) fmrd2_indi_pane_t

0xe097,	// (0x0001b612) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe097,	// (0x0001b612) list_single_fs_bigclock_indicator_pane_g5

0xe145,	// (0x0001b6c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe145,	// (0x0001b6c0) list_single_fs_bigclock_indicator_pane_t5

0x87ef,	// (0x00015d6a) aid_cell_bcale_month_pane_ParamLimits

0x87ef,	// (0x00015d6a) aid_cell_bcale_month_pane

0x880d,	// (0x00015d88) bcale_month_pane_ParamLimits

0x880d,	// (0x00015d88) bcale_month_pane

0x8825,	// (0x00015da0) bcale_preview_pane_ParamLimits

0x8825,	// (0x00015da0) bcale_preview_pane

0xec79,	// (0x0001c1f4) list_single_fs_bigclock_pane_t1_ParamLimits

0xec98,	// (0x0001c213) list_single_fs_bigclock_pane_t2_ParamLimits

0xec98,	// (0x0001c213) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001d403) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001d403) list_single_fs_bigclock_pane_t

0xeed4,	// (0x0001c44f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001d46c) main_fs_bigclock_unlock_btn_pane_g

0x9041,	// (0x000165bc) aid_dia3_key_size_ParamLimits

0x9041,	// (0x000165bc) aid_dia3_key_size

0x9050,	// (0x000165cb) aid_dia3_listrow_size_ParamLimits

0x9050,	// (0x000165cb) aid_dia3_listrow_size

0x9063,	// (0x000165de) dia3_keypad_fun_pane_ParamLimits

0x9063,	// (0x000165de) dia3_keypad_fun_pane

0x9077,	// (0x000165f2) dia3_keypad_num_pane_ParamLimits

0x9077,	// (0x000165f2) dia3_keypad_num_pane

0x9088,	// (0x00016603) dia3_listscroll_pane_ParamLimits

0x9088,	// (0x00016603) dia3_listscroll_pane

0x9099,	// (0x00016614) dia3_numentry_pane_ParamLimits

0x9099,	// (0x00016614) dia3_numentry_pane

0xeeea,	// (0x0001c465) dia3_list_pane

0xeef3,	// (0x0001c46e) scroll_pane_cp12

0x9589,	// (0x00016b04) bg_dia3_numentry_pane

0x90ab,	// (0x00016626) dia3_numentry_pane_t1

0x90ba,	// (0x00016635) cell_dia3_key_num_pane

0x90c2,	// (0x0001663d) cell_dia3_key0_fun_pane_ParamLimits

0x90c2,	// (0x0001663d) cell_dia3_key0_fun_pane

0x90d6,	// (0x00016651) cell_dia3_key1_fun_pane_ParamLimits

0x90d6,	// (0x00016651) cell_dia3_key1_fun_pane

0x90ed,	// (0x00016668) dia3_listrow_pane

0xdde5,	// (0x0001b360) bg_dia3_numentry_pane_g1

0x9589,	// (0x00016b04) bg_button_pane_cp21

0xeefc,	// (0x0001c477) cell_dia3_key_num_pane_t1

0xef0a,	// (0x0001c485) cell_dia3_key_num_pane_t2

0xef19,	// (0x0001c494) cell_dia3_key_num_pane_t3

0xef28,	// (0x0001c4a3) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001d488) cell_dia3_key_num_pane_t

0x9589,	// (0x00016b04) bg_button_pane_cp19

0xef37,	// (0x0001c4b2) cell_dia3_key0_fun_pane_g1

0x9589,	// (0x00016b04) bg_button_pane_cp20

0x90ff,	// (0x0001667a) cell_dia3_key1_fun_pane_g1

0x9107,	// (0x00016682) area_left_week_number_pane

0x9113,	// (0x0001668e) area_top_day_name_pane

0x9124,	// (0x0001669f) frame_month_view_pane

0xef3f,	// (0x0001c4ba) grid_month_view_pane

0x9135,	// (0x000166b0) cell_top_day_name_pane_ParamLimits

0x9135,	// (0x000166b0) cell_top_day_name_pane

0x9158,	// (0x000166d3) cell_area_left_week_number_pane_ParamLimits

0x9158,	// (0x000166d3) cell_area_left_week_number_pane

0x916c,	// (0x000166e7) cell_month_view_pane_ParamLimits

0x916c,	// (0x000166e7) cell_month_view_pane

0xef4d,	// (0x0001c4c8) frm_month_g1

0x9191,	// (0x0001670c) frm_month_g2

0x91a2,	// (0x0001671d) frm_month_g3

0x91b3,	// (0x0001672e) frm_month_g4

0x91c4,	// (0x0001673f) frm_month_g5

0x91d5,	// (0x00016750) frm_month_g6

0x91e6,	// (0x00016761) frm_month_g7

0xef5a,	// (0x0001c4d5) frm_month_g8

0x91f7,	// (0x00016772) frm_month_g9

0x9207,	// (0x00016782) frm_month_g10

0x9217,	// (0x00016792) frm_month_g11

0x9227,	// (0x000167a2) frm_month_g12

0x9237,	// (0x000167b2) frm_month_g13

0x9247,	// (0x000167c2) frm_month_g14

0x9257,	// (0x000167d2) frm_month_g15

0x9269,	// (0x000167e4) frm_month_g16

0x000f,

0xff16,	// (0x0001d491) frm_month_g

0xef67,	// (0x0001c4e2) cell_top_day_name_pane_t1

0x927b,	// (0x000167f6) cell_area_left_week_number_pane_g1

0x9287,	// (0x00016802) cell_area_left_week_number_pane_t1

0xc61b,	// (0x00019b96) cell_month_view_pane_g1

0x929a,	// (0x00016815) cell_month_view_pane_t1

0x9589,	// (0x00016b04) main_fps_pane

0xe359,	// (0x0001b8d4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe359,	// (0x0001b8d4) cmail_ddmenu_btn02_pane_cp1

0xe375,	// (0x0001b8f0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe375,	// (0x0001b8f0) cmail_ddmenu_btn02_pane_cp2

0x8a41,	// (0x00015fbc) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a41,	// (0x00015fbc) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001d3b6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001d3b6) cmail_ddmenu_btn02_pane_g

0x8a60,	// (0x00015fdb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a60,	// (0x00015fdb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001d3bb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001d3bb) cmail_ddmenu_btn02_pane_t

0x92ad,	// (0x00016828) fps_text_pane_ParamLimits

0x92ad,	// (0x00016828) fps_text_pane

0x92c3,	// (0x0001683e) main_fps_pane_g1_ParamLimits

0x92c3,	// (0x0001683e) main_fps_pane_g1

0x92d9,	// (0x00016854) wait_bar_pane_cp010_ParamLimits

0x92d9,	// (0x00016854) wait_bar_pane_cp010

0xe238,	// (0x0001b7b3) fps_text_pane_t1_ParamLimits

0xe238,	// (0x0001b7b3) fps_text_pane_t1

0xefc9,	// (0x0001c544) cam4_image_uncrop_pane_g1

0xefd2,	// (0x0001c54d) cam4_image_uncrop_pane_g2

0x5f45,	// (0x000134c0) cam4_image_uncrop_pane_g3

0x5f4e,	// (0x000134c9) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001ce7c) cam4_image_uncrop_pane_g

0x90ed,	// (0x00016668) dia3_listrow_pane_ParamLimits

0x9589,	// (0x00016b04) main_phob2_pane

0x866f,	// (0x00015bea) cell_tport_appsw_pane_cp02_ParamLimits

0x866f,	// (0x00015bea) cell_tport_appsw_pane_cp02

0x867f,	// (0x00015bfa) cell_tport_appsw_pane_cp03_ParamLimits

0x867f,	// (0x00015bfa) cell_tport_appsw_pane_cp03

0x9589,	// (0x00016b04) phob2_contact_card_pane

0x9589,	// (0x00016b04) phob2_listscroll_pane

0xef7a,	// (0x0001c4f5) phob2_list_pane

0xef82,	// (0x0001c4fd) scroll_pane_cp034

0x92ea,	// (0x00016865) phob2_cc_data_pane_ParamLimits

0x92ea,	// (0x00016865) phob2_cc_data_pane

0x9307,	// (0x00016882) phob2_cc_listscroll_pane_ParamLimits

0x9307,	// (0x00016882) phob2_cc_listscroll_pane

0x8ef5,	// (0x00016470) list_double_large_graphic_phob2_pane_ParamLimits

0x8ef5,	// (0x00016470) list_double_large_graphic_phob2_pane

0x9323,	// (0x0001689e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9323,	// (0x0001689e) list_double_large_graphic_phob2_pane_g1

0x9339,	// (0x000168b4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9339,	// (0x000168b4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001d4b2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001d4b2) list_double_large_graphic_phob2_pane_g

0x9345,	// (0x000168c0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9345,	// (0x000168c0) list_double_large_graphic_phob2_pane_t1

0x935b,	// (0x000168d6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x935b,	// (0x000168d6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001d4b7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001d4b7) list_double_large_graphic_phob2_pane_t

0x9589,	// (0x00016b04) list_highlight_pane_cp024

0x9370,	// (0x000168eb) phob2_cc_button_pane

0x9378,	// (0x000168f3) phob2_cc_data_pane_g1_ParamLimits

0x9378,	// (0x000168f3) phob2_cc_data_pane_g1

0x938d,	// (0x00016908) phob2_cc_data_pane_g2_ParamLimits

0x938d,	// (0x00016908) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001d4bc) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001d4bc) phob2_cc_data_pane_g

0x939d,	// (0x00016918) phob2_cc_data_pane_t1_ParamLimits

0x939d,	// (0x00016918) phob2_cc_data_pane_t1

0x93b5,	// (0x00016930) phob2_cc_data_pane_t2_ParamLimits

0x93b5,	// (0x00016930) phob2_cc_data_pane_t2

0x93cd,	// (0x00016948) phob2_cc_data_pane_t3_ParamLimits

0x93cd,	// (0x00016948) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001d4c1) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001d4c1) phob2_cc_data_pane_t

0xef8a,	// (0x0001c505) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0001c505) phob2_cc_list_pane

0xd4db,	// (0x0001aa56) scroll_pane_cp035_ParamLimits

0xd4db,	// (0x0001aa56) scroll_pane_cp035

0x95f3,	// (0x00016b6e) bg_button_pane_cp033

0xef96,	// (0x0001c511) phob2_cc_button_pane_g1

0xefa2,	// (0x0001c51d) phob2_cc_button_pane_t1

0xefb7,	// (0x0001c532) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001d4c8) phob2_cc_button_pane_t

0x93e5,	// (0x00016960) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93e5,	// (0x00016960) list_double_large_graphic_phob2_cc_pane

0x93f6,	// (0x00016971) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93f6,	// (0x00016971) list_double_large_graphic_phob2_cc_pane_g1

0x9402,	// (0x0001697d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9402,	// (0x0001697d) list_double_large_graphic_phob2_cc_pane_g2

0x940e,	// (0x00016989) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x940e,	// (0x00016989) list_double_large_graphic_phob2_cc_pane_g3

0x941a,	// (0x00016995) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x941a,	// (0x00016995) list_double_large_graphic_phob2_cc_pane_g4

0x9426,	// (0x000169a1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9426,	// (0x000169a1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001d4cd) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001d4cd) list_double_large_graphic_phob2_cc_pane_g

0x9432,	// (0x000169ad) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9432,	// (0x000169ad) list_double_large_graphic_phob2_cc_pane_t1

0x945b,	// (0x000169d6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x945b,	// (0x000169d6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001d4d8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001d4d8) list_double_large_graphic_phob2_cc_pane_t

0xf006,	// (0x0001c581) list_highlight_pane_cp025_ParamLimits

0xf006,	// (0x0001c581) list_highlight_pane_cp025

0x95f3,	// (0x00016b6e) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0001c511) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0001c51d) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0001c532) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001d4c8) phob2_cc_button_pane_t_ParamLimits

0x0f76,	// (0x0000e4f1) popup_wgtman_window

0xd267,	// (0x0001a7e2) scroll_pane_cp038

0x8e6e,	// (0x000163e9) wgtman_btn_pane_cp_01_ParamLimits

0x8e6e,	// (0x000163e9) wgtman_btn_pane_cp_01

0xf014,	// (0x0001c58f) wgtman_content_pane

0xf01d,	// (0x0001c598) wgtman_heading_pane

0x9589,	// (0x00016b04) bg_heading_pane_cp02

0xf026,	// (0x0001c5a1) wgtman_heading_pane_g1

0xf02e,	// (0x0001c5a9) wgtman_heading_pane_t1

0xf03c,	// (0x0001c5b7) scroll_pane_cp036

0xf044,	// (0x0001c5bf) wgtman_list_pane

0xefdb,	// (0x0001c556) wgtman_list_pane_t1_ParamLimits

0xefdb,	// (0x0001c556) wgtman_list_pane_t1

0xcff6,	// (0x0001a571) cam4_grid_pane

0x6bf8,	// (0x00014173) bg_button_pane_cp015_ParamLimits

0x6c08,	// (0x00014183) bg_button_pane_cp016_ParamLimits

0x6c1a,	// (0x00014195) bg_button_pane_cp017_ParamLimits

0x6c6a,	// (0x000141e5) popup_vitu2_query_window_g3_ParamLimits

0x6c6a,	// (0x000141e5) popup_vitu2_query_window_g3

0x6d1d,	// (0x00014298) popup_vitu2_query_window_t6_ParamLimits

0x6d1d,	// (0x00014298) popup_vitu2_query_window_t6

0x6d48,	// (0x000142c3) popup_vitu2_query_window_t7_ParamLimits

0x6d48,	// (0x000142c3) popup_vitu2_query_window_t7

0xefc9,	// (0x0001c544) cam4_grid_pane_g1

0xefd2,	// (0x0001c54d) cam4_grid_pane_g2

0xf04c,	// (0x0001c5c7) cam4_grid_pane_g3

0xf055,	// (0x0001c5d0) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001d4dd) cam4_grid_pane_g

0x1e63,	// (0x0000f3de) aid_placing_vt_slider_lsc_ParamLimits

0x20d0,	// (0x0000f64b) vidtel_button_pane_ParamLimits

0x20d0,	// (0x0000f64b) vidtel_button_pane

0x9589,	// (0x00016b04) bg_button_pane_cp034

0x9484,	// (0x000169ff) vidtel_button_pane_g1

0x948c,	// (0x00016a07) vidtel_button_pane_t1

0xd3e6,	// (0x0001a961) aid_size_vtel_slider_touch

0xd4db,	// (0x0001aa56) scroll_pane_cp039

0x7a77,	// (0x00014ff2) ncim_query_button_pane_cp01_ParamLimits

0x7a96,	// (0x00015011) ncimui_query_pane_g1_ParamLimits

0x95f3,	// (0x00016b6e) input_focus_pane_cp012_ParamLimits

0xde2b,	// (0x0001b3a6) ncim_query_entry_pane_t1_ParamLimits

0xd4db,	// (0x0001aa56) scroll_pane_cp039_ParamLimits

0xa93d,	// (0x00017eb8) navi_pane_bcale_mc_g1

0xa945,	// (0x00017ec0) navi_pane_bcale_mc_t1

0xe3be,	// (0x0001b939) main_sp_fs_email_pane_g1

0xe3ca,	// (0x0001b945) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001d273) main_sp_fs_email_pane_g

0xe8a1,	// (0x0001be1c) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8a1,	// (0x0001be1c) list_single_cale_mrui_row_pane_g3

0x8a80,	// (0x00015ffb) list_single_recal_day_pane_g5_event_pane

0xeae3,	// (0x0001c05e) list_single_recal_day_pane_g7

0xf05e,	// (0x0001c5d9) list_recal_day_event_pane_cp01

0xf067,	// (0x0001c5e2) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001c5ea) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001c5f2) list_recal_vselct_pane_cp01

0xd432,	// (0x0001a9ad) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001c5fc) list_recal_day_event_pane_cp01_t1

0xeaeb,	// (0x0001c066) list_single_recal_day_pane_t1_ParamLimits

0xeafd,	// (0x0001c078) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001d3cb) list_single_recal_day_pane_t_ParamLimits

0x9ca1,	// (0x0001721c) bg_notes_pane_ParamLimits

0x9d58,	// (0x000172d3) list_notes_pane_ParamLimits

0x1239,	// (0x0000e7b4) scroll_pane_cp06_ParamLimits

0x9d94,	// (0x0001730f) main_notes_pane_ParamLimits

0x9589,	// (0x00016b04) main_welc_pane

0x94a2,	// (0x00016a1d) main_welc_body_pane_ParamLimits

0x94a2,	// (0x00016a1d) main_welc_body_pane

0x94be,	// (0x00016a39) main_welc_opti_pane_ParamLimits

0x94be,	// (0x00016a39) main_welc_opti_pane

0x94fb,	// (0x00016a76) main_welc_pane_t1_ParamLimits

0x94fb,	// (0x00016a76) main_welc_pane_t1

0xecc4,	// (0x0001c23f) main_welc_body_row_pane_ParamLimits

0xecc4,	// (0x0001c23f) main_welc_body_row_pane

0xccaf,	// (0x0001a22a) main_welc_opti_row_pane_ParamLimits

0xccaf,	// (0x0001a22a) main_welc_opti_row_pane

0xf08f,	// (0x0001c60a) main_welc_opti_row_pane_g1

0x9515,	// (0x00016a90) main_welc_opti_row_pane_t1

0xf097,	// (0x0001c612) main_welc_body_row_pane_t1

0xed73,	// (0x0001c2ee) popup_notif_wgt_heading_pane

0xed8d,	// (0x0001c308) aid_size_list_notif_wgt_del_ParamLimits

0xed9a,	// (0x0001c315) list_notif_wgt_row_pane_g1_ParamLimits

0xeda6,	// (0x0001c321) list_notif_wgt_row_pane_g2_ParamLimits

0xedb5,	// (0x0001c330) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001d432) list_notif_wgt_row_pane_g_ParamLimits

0xedc2,	// (0x0001c33d) list_notif_wgt_row_pane_t1_ParamLimits

0xedd8,	// (0x0001c353) list_notif_wgt_row_pane_t2_ParamLimits

0xedea,	// (0x0001c365) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001d439) list_notif_wgt_row_pane_t_ParamLimits

0x8f06,	// (0x00016481) listrow_wgtman_pane_g1_ParamLimits

0x8f13,	// (0x0001648e) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001d462) listrow_wgtman_pane_g_ParamLimits

0x8f2b,	// (0x000164a6) listrow_wgtman_pane_t1_ParamLimits

0x8f43,	// (0x000164be) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001d467) listrow_wgtman_pane_t_ParamLimits

0x8f69,	// (0x000164e4) wait_bar_pane_cp09_ParamLimits

0x9589,	// (0x00016b04) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001c621) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001c629) popup_notif_wgt_heading_pane_t1

0x9589,	// (0x00016b04) main_vids_pane

0x9589,	// (0x00016b04) vids_listscroll_pane

0x9524,	// (0x00016a9f) scroll_pane_cp040

0x9589,	// (0x00016b04) vids_list_pane

0x952f,	// (0x00016aaa) vids_list_double_pane_ParamLimits

0x952f,	// (0x00016aaa) vids_list_double_pane

0x953f,	// (0x00016aba) vids_list_double_pane_g1

0x9548,	// (0x00016ac3) vids_list_double_pane_t1

0x9557,	// (0x00016ad2) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001d4eb) vids_list_double_pane_t

0x95f3,	// (0x00016b6e) main_ncimui_pane_ParamLimits

0x78af,	// (0x00014e2a) main_ncimui_pane_g1_ParamLimits

0x78bb,	// (0x00014e36) main_ncimui_pane_g2_ParamLimits

0x78bb,	// (0x00014e36) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001d178) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001d178) main_ncimui_pane_g

0x94d5,	// (0x00016a50) main_welc_pane_g1_ParamLimits

0x94d5,	// (0x00016a50) main_welc_pane_g1

0x94e8,	// (0x00016a63) main_welc_pane_g2_ParamLimits

0x94e8,	// (0x00016a63) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001d4e6) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001d4e6) main_welc_pane_g

0x9ca1,	// (0x0001721c) listscroll_mce_pane_ParamLimits

0xaa90,	// (0x0001800b) wait_bar_pane_cp10

0xbede,	// (0x00019459) main_cale_day_pane_ParamLimits

0xbede,	// (0x00019459) main_cale_week_pane_ParamLimits

0x9ca1,	// (0x0001721c) main_messa_pane_ParamLimits

0x531d,	// (0x00012898) main_clock2_btn_pane_ParamLimits

0x531d,	// (0x00012898) main_clock2_btn_pane

0xc7af,	// (0x00019d2a) main_clock2_btn_pane_cp01_ParamLimits

0xc7af,	// (0x00019d2a) main_clock2_btn_pane_cp01

0xe839,	// (0x0001bdb4) list_cale_mrui_pane_ParamLimits

0xee1e,	// (0x0001c399) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001d440) main_cf0_pane_g

0x9107,	// (0x00016682) area_left_week_number_pane_ParamLimits

0x9113,	// (0x0001668e) area_top_day_name_pane_ParamLimits

0x9124,	// (0x0001669f) frame_month_view_pane_ParamLimits

0xef3f,	// (0x0001c4ba) grid_month_view_pane_ParamLimits

0xef4d,	// (0x0001c4c8) frm_month_g1_ParamLimits

0x9191,	// (0x0001670c) frm_month_g2_ParamLimits

0x91a2,	// (0x0001671d) frm_month_g3_ParamLimits

0x91b3,	// (0x0001672e) frm_month_g4_ParamLimits

0x91c4,	// (0x0001673f) frm_month_g5_ParamLimits

0x91d5,	// (0x00016750) frm_month_g6_ParamLimits

0x91e6,	// (0x00016761) frm_month_g7_ParamLimits

0xef5a,	// (0x0001c4d5) frm_month_g8_ParamLimits

0x91f7,	// (0x00016772) frm_month_g9_ParamLimits

0x9207,	// (0x00016782) frm_month_g10_ParamLimits

0x9217,	// (0x00016792) frm_month_g11_ParamLimits

0x9227,	// (0x000167a2) frm_month_g12_ParamLimits

0x9237,	// (0x000167b2) frm_month_g13_ParamLimits

0x9247,	// (0x000167c2) frm_month_g14_ParamLimits

0x9257,	// (0x000167d2) frm_month_g15_ParamLimits

0x9269,	// (0x000167e4) frm_month_g16_ParamLimits

0xff16,	// (0x0001d491) frm_month_g_ParamLimits

0xef67,	// (0x0001c4e2) cell_top_day_name_pane_t1_ParamLimits

0x927b,	// (0x000167f6) cell_area_left_week_number_pane_g1_ParamLimits

0x9287,	// (0x00016802) cell_area_left_week_number_pane_t1_ParamLimits

0xc61b,	// (0x00019b96) cell_month_view_pane_g1_ParamLimits

0x929a,	// (0x00016815) cell_month_view_pane_t1_ParamLimits

0x9c99,	// (0x00017214) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001c637) main_clock2_btn_pane_t1

0x95f3,	// (0x00016b6e) listscroll_cmail_pane_ParamLimits

0xe3be,	// (0x0001b939) main_sp_fs_email_pane_g1_ParamLimits

0xe3ca,	// (0x0001b945) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001d273) main_sp_fs_email_pane_g_ParamLimits

0xea53,	// (0x0001bfce) list_recal_day_pane_ParamLimits

0xea64,	// (0x0001bfdf) mian_recal_day_pane_t1

0x8319,	// (0x00015894) list_single_dyc_row_text_pane_t4_ParamLimits

0x8319,	// (0x00015894) list_single_dyc_row_text_pane_t4

0x8350,	// (0x000158cb) list_single_dyc_row_text_pane_t5_ParamLimits

0x8350,	// (0x000158cb) list_single_dyc_row_text_pane_t5

0xe48e,	// (0x0001ba09) list_single_dyc_row_text_pane_t6_ParamLimits

0xe48e,	// (0x0001ba09) list_single_dyc_row_text_pane_t6

0xa411,	// (0x0001798c) aid_mgn_list_cale_time_pane

0x95f3,	// (0x00016b6e) main_gallery2_pane_ParamLimits

0xc7c3,	// (0x00019d3e) main_clock2_pane_cp01_t1

0xc7d1,	// (0x00019d4c) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0001cd52) main_clock2_pane_cp01_t

0x15ac,	// (0x0000eb27) cale_week_scroll_pane_g16_ParamLimits

0x15ac,	// (0x0000eb27) cale_week_scroll_pane_g16

0x9fc9,	// (0x00017544) vorec_slider_pane

0x948c,	// (0x00016a07) vidtel_button_pane_t1_ParamLimits

0x8ae1,	// (0x0001605c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8ae1,	// (0x0001605c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8af2,	// (0x0001606d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8af2,	// (0x0001606d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0001d3ee) main_fs_bigclock_clock_pane_g_ParamLimits

0x8b05,	// (0x00016080) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8b1b,	// (0x00016096) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0001d3f7) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal
